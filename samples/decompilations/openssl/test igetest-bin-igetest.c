
void test_bi_ige_enc_dec(void)

{
  AES_KEY *key;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  undefined1 local_5030 [20480];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar2 = puVar1;
    *(undefined8 *)(puVar2 + -0x1000) = *(undefined8 *)(puVar2 + -0x1000);
    puVar1 = puVar2 + -0x1000;
  } while (puVar2 + -0x1000 != local_5030);
  *(undefined8 *)(puVar2 + 0x3ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  key = (AES_KEY *)(puVar2 + -0x1158);
  *(undefined8 *)(puVar2 + -0x1058) = saved_iv._0_8_;
  *(undefined8 *)(puVar2 + -0x1050) = saved_iv._8_8_;
  *(undefined8 *)(puVar2 + -0x1048) = saved_iv._16_8_;
  *(undefined8 *)(puVar2 + -0x1040) = saved_iv._24_8_;
  *(undefined8 *)(puVar2 + -0x1038) = saved_iv._32_8_;
  *(undefined8 *)(puVar2 + -0x1030) = saved_iv._40_8_;
  *(undefined8 *)(puVar2 + -0x1028) = saved_iv._48_8_;
  *(undefined8 *)(puVar2 + -0x1020) = saved_iv._56_8_;
  *(undefined8 *)(puVar2 + -0x1260) = 0x1000c1;
  AES_set_encrypt_key(rkey,0x80,(AES_KEY *)(puVar2 + -0x1258));
  *(undefined8 *)(puVar2 + -0x1260) = 0x1000d1;
  AES_set_encrypt_key(rkey2,0x80,key);
  *(undefined8 *)(puVar2 + -0x1268) = 1;
  *(undefined8 *)(puVar2 + -0x1270) = 0x1000f0;
  AES_bi_ige_encrypt(plaintext,puVar2 + -0x1018,0x80,(AES_KEY *)(puVar2 + -0x1258),key,
                     puVar2 + -0x1058,*(int *)(puVar2 + -0x1268));
  *(undefined8 *)(puVar2 + -0x1270) = 0x100107;
  AES_set_decrypt_key(rkey,0x80,(AES_KEY *)(puVar2 + -0x1258));
  *(undefined8 *)(puVar2 + -0x1270) = 0x100117;
  AES_set_decrypt_key(rkey2,0x80,key);
  *(undefined4 *)(puVar2 + -0x1268) = 0;
  *(undefined8 *)(puVar2 + -0x1270) = 0x10013f;
  AES_bi_ige_encrypt(puVar2 + -0x1018,puVar2 + 0x17e8,0x80,(AES_KEY *)(puVar2 + -0x1258),key,
                     puVar2 + -0x1058,*(int *)(puVar2 + -0x1268));
  *(undefined8 *)(puVar2 + -0x1270) = 0x80;
  *(undefined1 **)(puVar2 + -0x1278) = plaintext;
  *(undefined8 *)(puVar2 + -0x1280) = 0x10016e;
  test_mem_eq("test/igetest.c",0x159,"checktext","plaintext",puVar2 + 0x17e8,0x80);
  if (*(long *)(puVar2 + 0x3ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -0x1260) = &UNK_0010019b;
  __stack_chk_fail();
}



undefined8 test_bi_ige_vectors(int param_1)

{
  uchar *userKey;
  uchar *userKey_00;
  int enc;
  ulong length;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  AES_KEY local_288;
  AES_KEY local_188;
  uchar local_88 [72];
  long local_40;
  
  lVar3 = (long)param_1 * 0x118;
  userKey = bi_ige_test_vectors + lVar3;
  length = *(ulong *)(bi_ige_test_vectors + lVar3 + 0x108);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_int_le("test/igetest.c",0xc6,"v->length","MAX_VECTOR_SIZE",length & 0xffffffff,0x40);
  if (iVar1 != 0) {
    enc = *(int *)(bi_ige_test_vectors + lVar3 + 0x110);
    iVar1 = *(int *)(bi_ige_test_vectors + lVar3 + 0x100) * 8;
    userKey_00 = bi_ige_test_vectors + lVar3 + 0x20;
    if (enc == 1) {
      AES_set_encrypt_key(userKey,iVar1,&local_288);
      AES_set_encrypt_key(userKey_00,iVar1,&local_188);
    }
    else {
      AES_set_decrypt_key(userKey,iVar1,&local_288);
      AES_set_decrypt_key(userKey_00,iVar1,&local_188);
    }
    AES_bi_ige_encrypt(bi_ige_test_vectors + lVar3 + 0x80,local_88,length,&local_288,&local_188,
                       bi_ige_test_vectors + lVar3 + 0x40,enc);
    iVar1 = test_mem_eq("test/igetest.c",0xd4,"v->out",&_LC5,lVar3 + 0x104340,length,local_88,length
                       );
    uVar2 = 1;
    if (iVar1 != 0) goto LAB_001002f5;
    test_output_memory("key 1",userKey,0x20);
    test_output_memory("key 2",userKey_00,0x20);
    test_output_memory(&_LC9,bi_ige_test_vectors + lVar3 + 0x40,0x40);
    test_output_memory(&_LC10,bi_ige_test_vectors + lVar3 + 0x80,length);
  }
  uVar2 = 0;
LAB_001002f5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_ige_dec_chaining(void)

{
  uchar *ivec;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  undefined1 local_5030 [20480];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar2 = puVar1;
    *(undefined8 *)(puVar2 + -0x1000) = *(undefined8 *)(puVar2 + -0x1000);
    puVar1 = puVar2 + -0x1000;
  } while (puVar2 + -0x1000 != local_5030);
  *(undefined8 *)(puVar2 + 0x3ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  ivec = puVar2 + -0x1058;
  *(undefined8 *)(puVar2 + -0x1160) = 0x10043a;
  AES_set_encrypt_key(rkey,0x80,(AES_KEY *)(puVar2 + -0x1158));
  *(undefined8 *)(puVar2 + -0x1058) = saved_iv._0_8_;
  *(undefined8 *)(puVar2 + -0x1050) = saved_iv._8_8_;
  *(undefined8 *)(puVar2 + -0x1048) = saved_iv._16_8_;
  *(undefined8 *)(puVar2 + -0x1040) = saved_iv._24_8_;
  *(undefined8 *)(puVar2 + -0x1038) = saved_iv._32_8_;
  *(undefined8 *)(puVar2 + -0x1030) = saved_iv._40_8_;
  *(undefined8 *)(puVar2 + -0x1028) = saved_iv._48_8_;
  *(undefined8 *)(puVar2 + -0x1020) = saved_iv._56_8_;
  *(undefined8 *)(puVar2 + -0x1160) = 0x100496;
  AES_ige_encrypt(plaintext,puVar2 + -0x1018,0x40,(AES_KEY *)(puVar2 + -0x1158),ivec,1);
  *(undefined8 *)(puVar2 + -0x1160) = 0x1004b3;
  AES_ige_encrypt(plaintext + 0x40,puVar2 + -0xfd8,0x40,(AES_KEY *)(puVar2 + -0x1158),ivec,1);
  *(undefined8 *)(puVar2 + -0x1160) = 0x1004c3;
  AES_set_decrypt_key(rkey,0x80,(AES_KEY *)(puVar2 + -0x1158));
  *(undefined8 *)(puVar2 + -0x1058) = saved_iv._0_8_;
  *(undefined8 *)(puVar2 + -0x1050) = saved_iv._8_8_;
  *(undefined8 *)(puVar2 + -0x1048) = saved_iv._16_8_;
  *(undefined8 *)(puVar2 + -0x1040) = saved_iv._24_8_;
  *(undefined8 *)(puVar2 + -0x1038) = saved_iv._32_8_;
  *(undefined8 *)(puVar2 + -0x1030) = saved_iv._40_8_;
  *(undefined8 *)(puVar2 + -0x1028) = saved_iv._48_8_;
  *(undefined8 *)(puVar2 + -0x1020) = saved_iv._56_8_;
  *(undefined8 *)(puVar2 + -0x1160) = 0x100524;
  AES_ige_encrypt(puVar2 + -0x1018,puVar2 + 0x17e8,0x40,(AES_KEY *)(puVar2 + -0x1158),ivec,0);
  *(undefined8 *)(puVar2 + -0x1160) = 0x100542;
  AES_ige_encrypt(puVar2 + -0xfd8,puVar2 + 0x1828,0x40,(AES_KEY *)(puVar2 + -0x1158),ivec,0);
  *(undefined8 *)(puVar2 + -0x1160) = 0x80;
  *(undefined1 **)(puVar2 + -0x1168) = plaintext;
  *(undefined8 *)(puVar2 + -0x1170) = 0x100571;
  test_mem_eq("test/igetest.c",0x11e,"checktext","plaintext",puVar2 + 0x17e8,0x80);
  if (*(long *)(puVar2 + 0x3ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -0x1160) = &UNK_0010059e;
  __stack_chk_fail();
}



void test_ige_enc_chaining(void)

{
  uchar *ivec;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  undefined1 local_5028 [20480];
  
  puVar1 = &stack0xffffffffffffffd8;
  do {
    puVar2 = puVar1;
    *(undefined8 *)(puVar2 + -0x1000) = *(undefined8 *)(puVar2 + -0x1000);
    puVar1 = puVar2 + -0x1000;
  } while (puVar2 + -0x1000 != local_5028);
  *(undefined8 *)(puVar2 + 0x3ff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  ivec = puVar2 + -0x1050;
  *(undefined8 *)(puVar2 + -0x1158) = 0x100610;
  AES_set_encrypt_key(rkey,0x80,(AES_KEY *)(puVar2 + -0x1150));
  *(undefined8 *)(puVar2 + -0x1050) = saved_iv._0_8_;
  *(undefined8 *)(puVar2 + -0x1048) = saved_iv._8_8_;
  *(undefined8 *)(puVar2 + -0x1040) = saved_iv._16_8_;
  *(undefined8 *)(puVar2 + -0x1038) = saved_iv._24_8_;
  *(undefined8 *)(puVar2 + -0x1030) = saved_iv._32_8_;
  *(undefined8 *)(puVar2 + -0x1028) = saved_iv._40_8_;
  *(undefined8 *)(puVar2 + -0x1020) = saved_iv._48_8_;
  *(undefined8 *)(puVar2 + -0x1018) = saved_iv._56_8_;
  *(undefined8 *)(puVar2 + -0x1158) = 0x10066c;
  AES_ige_encrypt(plaintext,puVar2 + -0x1010,0x40,(AES_KEY *)(puVar2 + -0x1150),ivec,1);
  *(undefined8 *)(puVar2 + -0x1158) = 0x10068e;
  AES_ige_encrypt(plaintext + 0x40,puVar2 + -0xfd0,0x40,(AES_KEY *)(puVar2 + -0x1150),ivec,1);
  *(undefined8 *)(puVar2 + -0x1158) = 0x10069e;
  AES_set_decrypt_key(rkey,0x80,(AES_KEY *)(puVar2 + -0x1150));
  *(undefined8 *)(puVar2 + -0x1050) = saved_iv._0_8_;
  *(undefined8 *)(puVar2 + -0x1048) = saved_iv._8_8_;
  *(undefined8 *)(puVar2 + -0x1040) = saved_iv._16_8_;
  *(undefined8 *)(puVar2 + -0x1038) = saved_iv._24_8_;
  *(undefined8 *)(puVar2 + -0x1030) = saved_iv._32_8_;
  *(undefined8 *)(puVar2 + -0x1028) = saved_iv._40_8_;
  *(undefined8 *)(puVar2 + -0x1020) = saved_iv._48_8_;
  *(undefined8 *)(puVar2 + -0x1018) = saved_iv._56_8_;
  *(undefined8 *)(puVar2 + -0x1158) = 0x1006ff;
  AES_ige_encrypt(puVar2 + -0x1010,puVar2 + 0x17f0,0x80,(AES_KEY *)(puVar2 + -0x1150),ivec,0);
  *(undefined8 *)(puVar2 + -0x1158) = 0x80;
  *(undefined1 **)(puVar2 + -0x1160) = plaintext;
  *(undefined8 *)(puVar2 + -0x1168) = 0x10072e;
  test_mem_eq("test/igetest.c",0x104,"checktext","plaintext",puVar2 + 0x17f0,0x80);
  if (*(long *)(puVar2 + 0x3ff8) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -0x1158) = &UNK_00100759;
  __stack_chk_fail();
}



void test_ige_enc_dec(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  undefined1 local_5028 [20480];
  
  puVar1 = &stack0xffffffffffffffd8;
  do {
    puVar2 = puVar1;
    *(undefined8 *)(puVar2 + -0x1000) = *(undefined8 *)(puVar2 + -0x1000);
    puVar1 = puVar2 + -0x1000;
  } while (puVar2 + -0x1000 != local_5028);
  *(undefined8 *)(puVar2 + 0x3ff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar2 + -0x1050) = saved_iv._0_8_;
  *(undefined8 *)(puVar2 + -0x1048) = saved_iv._8_8_;
  *(undefined8 *)(puVar2 + -0x1040) = saved_iv._16_8_;
  *(undefined8 *)(puVar2 + -0x1038) = saved_iv._24_8_;
  *(undefined8 *)(puVar2 + -0x1030) = saved_iv._32_8_;
  *(undefined8 *)(puVar2 + -0x1028) = saved_iv._40_8_;
  *(undefined8 *)(puVar2 + -0x1020) = saved_iv._48_8_;
  *(undefined8 *)(puVar2 + -0x1018) = saved_iv._56_8_;
  *(undefined8 *)(puVar2 + -0x1158) = 0x100810;
  AES_set_encrypt_key(rkey,0x80,(AES_KEY *)(puVar2 + -0x1150));
  *(undefined8 *)(puVar2 + -0x1158) = 0x10082c;
  AES_ige_encrypt(plaintext,puVar2 + -0x1010,0x80,(AES_KEY *)(puVar2 + -0x1150),puVar2 + -0x1050,1);
  *(undefined8 *)(puVar2 + -0x1158) = 0x10083c;
  AES_set_decrypt_key(rkey,0x80,(AES_KEY *)(puVar2 + -0x1150));
  *(undefined8 *)(puVar2 + -0x1050) = saved_iv._0_8_;
  *(undefined8 *)(puVar2 + -0x1048) = saved_iv._8_8_;
  *(undefined8 *)(puVar2 + -0x1040) = saved_iv._16_8_;
  *(undefined8 *)(puVar2 + -0x1038) = saved_iv._24_8_;
  *(undefined8 *)(puVar2 + -0x1030) = saved_iv._32_8_;
  *(undefined8 *)(puVar2 + -0x1028) = saved_iv._40_8_;
  *(undefined8 *)(puVar2 + -0x1020) = saved_iv._48_8_;
  *(undefined8 *)(puVar2 + -0x1018) = saved_iv._56_8_;
  *(undefined8 *)(puVar2 + -0x1158) = 0x10089d;
  AES_ige_encrypt(puVar2 + -0x1010,puVar2 + 0x17f0,0x80,(AES_KEY *)(puVar2 + -0x1150),
                  puVar2 + -0x1050,0);
  *(undefined8 *)(puVar2 + -0x1158) = 0x80;
  *(undefined1 **)(puVar2 + -0x1160) = plaintext;
  *(undefined8 *)(puVar2 + -0x1168) = 0x1008cc;
  test_mem_eq("test/igetest.c",0xee,"checktext","plaintext",puVar2 + 0x17f0,0x80);
  if (*(long *)(puVar2 + 0x3ff8) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -0x1158) = &UNK_001008f7;
  __stack_chk_fail();
}



bool test_ige_vectors(int param_1)

{
  uchar *in;
  uchar *userKey;
  ulong length;
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long in_FS_OFFSET;
  AES_KEY local_1a8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uchar local_88 [72];
  long local_40;
  
  lVar6 = (long)param_1;
  lVar4 = lVar6 * 0xc0;
  userKey = &ige_test_vectors + lVar4;
  length = *(ulong *)(&DAT_00104570 + lVar4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = test_int_le("test/igetest.c",0x9d,"v->length","MAX_VECTOR_SIZE",length & 0xffffffff,0x40);
  if (iVar1 != 0) {
    iVar1 = *(int *)(&DAT_00104578 + lVar4);
    if (iVar1 == 1) {
      AES_set_encrypt_key(userKey,0x80,&local_1a8);
    }
    else {
      AES_set_decrypt_key(userKey,0x80,&local_1a8);
    }
    lVar3 = lVar6 * 0xc0;
    in = &UNK_001044f0 + lVar4;
    local_a8 = *(undefined8 *)(&DAT_001044d0 + lVar3);
    uStack_a0 = *(undefined8 *)(&UNK_001044d8 + lVar3);
    local_98 = *(undefined8 *)(&DAT_001044e0 + lVar3);
    uStack_90 = *(undefined8 *)(&UNK_001044e8 + lVar3);
    AES_ige_encrypt(in,local_88,length,&local_1a8,(uchar *)&local_a8,iVar1);
    iVar2 = test_mem_eq("test/igetest.c",0xa7,"v->out",&_LC5,&UNK_00104530 + lVar4,length,local_88,
                        length);
    if (iVar2 == 0) {
      test_info("test/igetest.c",0xa8,"IGE test vector %d failed",param_1);
      test_output_memory(&_LC12,userKey,0x10);
      test_output_memory(&_LC9,&DAT_001044d0 + lVar4,0x20);
      test_output_memory(&_LC10,in,length);
    }
    bVar5 = iVar2 != 0;
    lVar6 = lVar6 * 0xc0;
    local_a8 = *(undefined8 *)(&DAT_001044d0 + lVar6);
    uStack_a0 = *(undefined8 *)(&UNK_001044d8 + lVar6);
    local_98 = *(undefined8 *)(&DAT_001044e0 + lVar6);
    uStack_90 = *(undefined8 *)(&UNK_001044e8 + lVar6);
    __memcpy_chk(local_88,in,length,0x40);
    AES_ige_encrypt(local_88,local_88,length,&local_1a8,(uchar *)&local_a8,iVar1);
    iVar1 = test_mem_eq("test/igetest.c",0xb4,"v->out",&_LC5,&UNK_00104530 + lVar4,length,local_88,
                        length);
    if (iVar1 != 0) goto LAB_00100ae0;
    test_info("test/igetest.c",0xb5,"IGE test vector %d failed (with in == out)",param_1);
    test_output_memory(&_LC12,userKey,0x10);
    test_output_memory(&_LC9,&DAT_001044d0 + lVar4,0x20);
    test_output_memory(&_LC10,in,length);
  }
  bVar5 = false;
LAB_00100ae0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_bi_ige_garble3(void)

{
  uchar *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  unkbyte10 Var13;
  undefined1 auVar14 [12];
  unkbyte9 Var15;
  undefined6 uVar16;
  undefined2 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *puVar30;
  long in_FS_OFFSET;
  undefined4 uVar31;
  undefined4 uVar32;
  char cVar41;
  short sVar42;
  undefined1 auVar40 [16];
  undefined4 uVar43;
  short sVar49;
  short sVar50;
  short sVar52;
  short sVar53;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar71;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lVar60;
  long lVar61;
  undefined4 uVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 local_5030 [10216];
  uchar auStack_2848 [10264];
  undefined6 uVar33;
  undefined8 uVar34;
  undefined1 auVar36 [12];
  undefined1 auVar35 [12];
  undefined1 auVar37 [14];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar44 [12];
  undefined1 auVar46 [16];
  long lVar51;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar54 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar62 [16];
  
  puVar28 = &stack0xffffffffffffffd0;
  do {
    puVar30 = puVar28;
    *(undefined8 *)(puVar30 + -0x1000) = *(undefined8 *)(puVar30 + -0x1000);
    puVar28 = puVar30 + -0x1000;
  } while (puVar30 + -0x1000 != local_5030);
  *(undefined8 *)(puVar30 + 0x3ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar30 + -0x1058) = saved_iv._0_8_;
  *(undefined8 *)(puVar30 + -0x1050) = saved_iv._8_8_;
  *(undefined8 *)(puVar30 + -0x1048) = saved_iv._16_8_;
  *(undefined8 *)(puVar30 + -0x1040) = saved_iv._24_8_;
  *(undefined8 *)(puVar30 + -0x1038) = saved_iv._32_8_;
  *(undefined8 *)(puVar30 + -0x1030) = saved_iv._40_8_;
  *(undefined8 *)(puVar30 + -0x1028) = saved_iv._48_8_;
  *(undefined8 *)(puVar30 + -0x1020) = saved_iv._56_8_;
  *(undefined8 *)(puVar30 + -0x1260) = 0x100cc1;
  AES_set_encrypt_key(rkey,0x80,(AES_KEY *)(puVar30 + -0x1258));
  *(undefined8 *)(puVar30 + -0x1260) = 0x100cd1;
  AES_set_encrypt_key(rkey2,0x80,(AES_KEY *)(puVar30 + -0x1158));
  *(undefined8 *)(puVar30 + -0x1260) = 0x100ced;
  AES_ige_encrypt(plaintext,puVar30 + -0x1018,0x2800,(AES_KEY *)(puVar30 + -0x1258),
                  puVar30 + -0x1058,1);
  puVar30[-0x1018] = puVar30[-0x1018] + '\x01';
  *(undefined8 *)(puVar30 + -0x1260) = 0x100d0c;
  AES_set_decrypt_key(rkey,0x80,(AES_KEY *)(puVar30 + -0x1258));
  *(undefined8 *)(puVar30 + -0x1260) = 0x100d1c;
  AES_set_decrypt_key(rkey2,0x80,(AES_KEY *)(puVar30 + -0x1158));
  *(undefined8 *)(puVar30 + -0x1260) = 0x100d3d;
  AES_ige_encrypt(puVar30 + -0x1018,puVar30 + 0x17e8,0x2800,(AES_KEY *)(puVar30 + -0x1258),
                  puVar30 + -0x1058,0);
  lVar29 = 0;
  lVar60 = 0;
  lVar61 = 0;
  do {
    puVar1 = puVar30 + 0x17e8 + lVar29;
    lVar18 = lVar29 + 1;
    lVar19 = lVar29 + 2;
    lVar20 = lVar29 + 3;
    lVar51 = lVar29 + 4;
    lVar21 = lVar29 + 5;
    lVar22 = lVar29 + 6;
    lVar23 = lVar29 + 7;
    lVar24 = lVar29 + 0xc;
    lVar25 = lVar29 + 0xd;
    lVar26 = lVar29 + 0xe;
    lVar27 = lVar29 + 0xf;
    bVar2 = *puVar1 == plaintext[lVar29];
    cVar41 = -(puVar1[7] == plaintext[lVar23]);
    bVar3 = puVar1[8] == plaintext[lVar29 + 8];
    bVar4 = puVar1[9] == plaintext[lVar29 + 9];
    bVar5 = puVar1[10] == plaintext[lVar29 + 10];
    bVar6 = puVar1[0xb] == plaintext[lVar29 + 0xb];
    lVar29 = lVar29 + 0x10;
    uVar17 = CONCAT11(-(puVar1[7] == plaintext[lVar23]),cVar41);
    uVar32 = CONCAT31(CONCAT21(uVar17,-(puVar1[6] == plaintext[lVar22])),
                      -(puVar1[6] == plaintext[lVar22]));
    uVar16 = CONCAT51(CONCAT41(uVar32,-(puVar1[5] == plaintext[lVar21])),
                      -(puVar1[5] == plaintext[lVar21]));
    Var15 = CONCAT72(CONCAT61(uVar16,-(puVar1[4] == plaintext[lVar51])),
                     CONCAT11(-(puVar1[4] == plaintext[lVar51]),cVar41));
    lVar51 = (long)((unkuint9)Var15 >> 8);
    Var13 = CONCAT91(CONCAT81(lVar51,-(puVar1[3] == plaintext[lVar20])),
                     -(puVar1[3] == plaintext[lVar20]));
    auVar12._2_10_ = Var13;
    auVar12[1] = -(puVar1[2] == plaintext[lVar19]);
    auVar12[0] = -(puVar1[2] == plaintext[lVar19]);
    auVar11._2_12_ = auVar12;
    auVar11[1] = -(puVar1[1] == plaintext[lVar18]);
    auVar11[0] = -(puVar1[1] == plaintext[lVar18]);
    auVar45._0_2_ = CONCAT11(-bVar2,-bVar2);
    auVar45._2_14_ = auVar11;
    uVar31 = CONCAT13(-bVar4,CONCAT12(-bVar4,CONCAT11(-bVar3,-bVar3)));
    uVar33 = CONCAT15(-bVar5,CONCAT14(-bVar5,uVar31));
    uVar34 = CONCAT17(-bVar6,CONCAT16(-bVar6,uVar33));
    auVar35._0_10_ =
         CONCAT19(-(puVar1[0xc] == plaintext[lVar24]),
                  CONCAT18(-(puVar1[0xc] == plaintext[lVar24]),uVar34));
    auVar35[10] = -(puVar1[0xd] == plaintext[lVar25]);
    auVar35[0xb] = -(puVar1[0xd] == plaintext[lVar25]);
    auVar37[0xc] = -(puVar1[0xe] == plaintext[lVar26]);
    auVar37._0_12_ = auVar35;
    auVar37[0xd] = -(puVar1[0xe] == plaintext[lVar26]);
    auVar38[0xe] = -(puVar1[0xf] == plaintext[lVar27]);
    auVar38._0_14_ = auVar37;
    auVar38[0xf] = -(puVar1[0xf] == plaintext[lVar27]);
    sVar49 = (short)Var13;
    sVar50 = (short)((unkuint9)Var15 >> 8);
    uVar7 = (ushort)(sVar50 < 0);
    sVar52 = (short)uVar16;
    uVar9 = (ushort)(sVar52 < 0);
    sVar53 = (short)uVar32;
    sVar42 = (short)((unkuint10)auVar35._0_10_ >> 0x40);
    uVar8 = (ushort)(sVar42 < 0);
    uVar10 = (ushort)(auVar35._10_2_ < 0);
    auVar57._0_12_ = auVar45._0_12_;
    auVar57._12_2_ = sVar49;
    auVar57._14_2_ = -(ushort)(sVar49 < 0);
    auVar56._12_4_ = auVar57._12_4_;
    auVar56._0_10_ = auVar45._0_10_;
    auVar56._10_2_ = -(ushort)(auVar12._0_2_ < 0);
    auVar55._10_6_ = auVar56._10_6_;
    auVar55._0_8_ = auVar45._0_8_;
    auVar55._8_2_ = auVar12._0_2_;
    auVar14._4_8_ = auVar55._8_8_;
    auVar14._2_2_ = -(ushort)(auVar11._0_2_ < 0);
    auVar14._0_2_ = auVar11._0_2_;
    uVar71 = CONCAT22(-(ushort)bVar2,auVar45._0_2_);
    auVar54._4_12_ = auVar14;
    uVar43 = CONCAT22(-uVar7,sVar50);
    auVar44._0_8_ = CONCAT26(-uVar9,CONCAT24(sVar52,uVar43));
    auVar44._8_2_ = sVar53;
    auVar44._10_2_ = -(ushort)(sVar53 < 0);
    auVar46._12_2_ = uVar17;
    auVar46._0_12_ = auVar44;
    auVar46._14_2_ = -(ushort)(lVar51 < 0);
    auVar67._12_2_ = (short)((ulong)uVar34 >> 0x30);
    auVar67._0_12_ = auVar35;
    auVar67._14_2_ = -(ushort)bVar6;
    auVar66._12_4_ = auVar67._12_4_;
    auVar66._10_2_ = -(ushort)bVar5;
    auVar66._0_10_ = auVar35._0_10_;
    auVar65._10_6_ = auVar66._10_6_;
    auVar65._8_2_ = (short)((uint6)uVar33 >> 0x20);
    auVar65._0_8_ = uVar34;
    auVar64._8_8_ = auVar65._8_8_;
    auVar64._6_2_ = -(ushort)bVar4;
    auVar64._0_6_ = uVar33;
    auVar63._6_10_ = auVar64._6_10_;
    auVar63._4_2_ = (short)((uint)uVar31 >> 0x10);
    auVar63._0_4_ = uVar31;
    auVar62._4_12_ = auVar63._4_12_;
    uVar72 = CONCAT22(-(ushort)bVar3,CONCAT11(-bVar3,-bVar3));
    uVar32 = CONCAT22(-uVar8,sVar42);
    auVar36._0_8_ = CONCAT26(-uVar10,CONCAT24(auVar35._10_2_,uVar32));
    auVar36._8_2_ = auVar37._12_2_;
    auVar36._10_2_ = -(ushort)(auVar37._12_2_ < 0);
    auVar39._12_2_ = auVar38._14_2_;
    auVar39._0_12_ = auVar36;
    auVar39._14_2_ = -(ushort)(auVar38._14_2_ < 0);
    auVar69._4_4_ = -(uint)(auVar55._8_4_ < 0);
    auVar69._0_4_ = auVar55._8_4_;
    auVar69._8_4_ = auVar56._12_4_;
    auVar69._12_4_ = -(uint)(auVar55._10_6_ < 0);
    auVar58._0_8_ = auVar54._0_8_;
    auVar58._8_4_ = auVar14._0_4_;
    auVar58._12_4_ = -(uint)(auVar14._0_4_ < 0);
    auVar59._4_4_ = -(uint)(auVar44._8_4_ < 0);
    auVar59._0_4_ = auVar44._8_4_;
    auVar59._8_4_ = auVar46._12_4_;
    auVar59._12_4_ = -(uint)(auVar46._12_4_ < 0);
    auVar47._8_4_ = (int)((ulong)auVar44._0_8_ >> 0x20);
    auVar47._0_8_ = auVar44._0_8_;
    auVar47._12_4_ = -(uint)(uVar9 != 0);
    auVar48._4_4_ = -(uint)(auVar65._8_4_ < 0);
    auVar48._0_4_ = auVar65._8_4_;
    auVar48._8_4_ = auVar66._12_4_;
    auVar48._12_4_ = -(uint)(auVar65._10_6_ < 0);
    auVar68._0_8_ = auVar62._0_8_;
    auVar68._8_4_ = auVar63._4_4_;
    auVar68._12_4_ = -(uint)(auVar63._4_4_ < 0);
    auVar70._8_4_ = (int)((ulong)auVar36._0_8_ >> 0x20);
    auVar70._0_8_ = auVar36._0_8_;
    auVar70._12_4_ = -(uint)(uVar10 != 0);
    auVar40._0_8_ = CONCAT44(-(uint)(auVar36._8_4_ < 0),auVar36._8_4_);
    auVar40._8_4_ = auVar39._12_4_;
    auVar40._12_4_ = -(uint)(auVar39._12_4_ < 0);
    lVar60 = (lVar60 - auVar40._0_8_) +
             ((SUB168(auVar48 & __LC14,0) - CONCAT44(-(uint)(bVar3 != 0),uVar72)) -
             CONCAT44(-(uint)(uVar8 != 0),uVar32)) +
             (SUB168(auVar59 & __LC14,0) - CONCAT44(-(uint)(uVar7 != 0),uVar43)) +
             (SUB168(auVar69 & __LC14,0) - CONCAT44(-(uint)(bVar2 != 0),uVar71));
    lVar61 = (lVar61 - auVar40._8_8_) +
             ((SUB168(auVar48 & __LC14,8) - auVar68._8_8_) - auVar70._8_8_) +
             (SUB168(auVar59 & __LC14,8) - auVar47._8_8_) +
             (SUB168(auVar69 & __LC14,8) - auVar58._8_8_);
  } while (lVar29 != 0x2800);
  *(undefined8 *)(puVar30 + -0x1260) = 0x100e8b;
  test_size_t_le("test/igetest.c",0x1b6,"matches","sizeof(checktext) / 100",lVar60 + lVar61,0x66);
  if (*(long *)(puVar30 + 0x3ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar30 + -0x1260) = &UNK_00100eb5;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_bi_ige_garble2(void)

{
  uchar *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  unkbyte10 Var13;
  undefined1 auVar14 [12];
  unkbyte9 Var15;
  undefined6 uVar16;
  undefined2 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *puVar30;
  long in_FS_OFFSET;
  undefined4 uVar31;
  undefined4 uVar32;
  char cVar41;
  short sVar42;
  undefined1 auVar40 [16];
  undefined4 uVar43;
  short sVar49;
  short sVar50;
  short sVar52;
  short sVar53;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar71;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lVar60;
  long lVar61;
  undefined4 uVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 local_5030 [10216];
  uchar auStack_2848 [10264];
  undefined6 uVar33;
  undefined8 uVar34;
  undefined1 auVar36 [12];
  undefined1 auVar35 [12];
  undefined1 auVar37 [14];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar44 [12];
  undefined1 auVar46 [16];
  long lVar51;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar54 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar62 [16];
  
  puVar28 = &stack0xffffffffffffffd0;
  do {
    puVar30 = puVar28;
    *(undefined8 *)(puVar30 + -0x1000) = *(undefined8 *)(puVar30 + -0x1000);
    puVar28 = puVar30 + -0x1000;
  } while (puVar30 + -0x1000 != local_5030);
  *(undefined8 *)(puVar30 + 0x3ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar30 + -0x1058) = saved_iv._0_8_;
  *(undefined8 *)(puVar30 + -0x1050) = saved_iv._8_8_;
  *(undefined8 *)(puVar30 + -0x1048) = saved_iv._16_8_;
  *(undefined8 *)(puVar30 + -0x1040) = saved_iv._24_8_;
  *(undefined8 *)(puVar30 + -0x1038) = saved_iv._32_8_;
  *(undefined8 *)(puVar30 + -0x1030) = saved_iv._40_8_;
  *(undefined8 *)(puVar30 + -0x1028) = saved_iv._48_8_;
  *(undefined8 *)(puVar30 + -0x1020) = saved_iv._56_8_;
  *(undefined8 *)(puVar30 + -0x1260) = 0x100f81;
  AES_set_encrypt_key(rkey,0x80,(AES_KEY *)(puVar30 + -0x1258));
  *(undefined8 *)(puVar30 + -0x1260) = 0x100f91;
  AES_set_encrypt_key(rkey2,0x80,(AES_KEY *)(puVar30 + -0x1158));
  *(undefined8 *)(puVar30 + -0x1260) = 0x100fad;
  AES_ige_encrypt(plaintext,puVar30 + -0x1018,0x2800,(AES_KEY *)(puVar30 + -0x1258),
                  puVar30 + -0x1058,1);
  puVar30[0x17e7] = puVar30[0x17e7] + '\x01';
  *(undefined8 *)(puVar30 + -0x1260) = 0x100fcc;
  AES_set_decrypt_key(rkey,0x80,(AES_KEY *)(puVar30 + -0x1258));
  *(undefined8 *)(puVar30 + -0x1260) = 0x100fdc;
  AES_set_decrypt_key(rkey2,0x80,(AES_KEY *)(puVar30 + -0x1158));
  *(undefined8 *)(puVar30 + -0x1260) = 0x100ffd;
  AES_ige_encrypt(puVar30 + -0x1018,puVar30 + 0x17e8,0x2800,(AES_KEY *)(puVar30 + -0x1258),
                  puVar30 + -0x1058,0);
  lVar29 = 0;
  lVar60 = 0;
  lVar61 = 0;
  do {
    puVar1 = puVar30 + 0x17e8 + lVar29;
    lVar18 = lVar29 + 1;
    lVar19 = lVar29 + 2;
    lVar20 = lVar29 + 3;
    lVar51 = lVar29 + 4;
    lVar21 = lVar29 + 5;
    lVar22 = lVar29 + 6;
    lVar23 = lVar29 + 7;
    lVar24 = lVar29 + 0xc;
    lVar25 = lVar29 + 0xd;
    lVar26 = lVar29 + 0xe;
    lVar27 = lVar29 + 0xf;
    bVar2 = *puVar1 == plaintext[lVar29];
    cVar41 = -(puVar1[7] == plaintext[lVar23]);
    bVar3 = puVar1[8] == plaintext[lVar29 + 8];
    bVar4 = puVar1[9] == plaintext[lVar29 + 9];
    bVar5 = puVar1[10] == plaintext[lVar29 + 10];
    bVar6 = puVar1[0xb] == plaintext[lVar29 + 0xb];
    lVar29 = lVar29 + 0x10;
    uVar17 = CONCAT11(-(puVar1[7] == plaintext[lVar23]),cVar41);
    uVar32 = CONCAT31(CONCAT21(uVar17,-(puVar1[6] == plaintext[lVar22])),
                      -(puVar1[6] == plaintext[lVar22]));
    uVar16 = CONCAT51(CONCAT41(uVar32,-(puVar1[5] == plaintext[lVar21])),
                      -(puVar1[5] == plaintext[lVar21]));
    Var15 = CONCAT72(CONCAT61(uVar16,-(puVar1[4] == plaintext[lVar51])),
                     CONCAT11(-(puVar1[4] == plaintext[lVar51]),cVar41));
    lVar51 = (long)((unkuint9)Var15 >> 8);
    Var13 = CONCAT91(CONCAT81(lVar51,-(puVar1[3] == plaintext[lVar20])),
                     -(puVar1[3] == plaintext[lVar20]));
    auVar12._2_10_ = Var13;
    auVar12[1] = -(puVar1[2] == plaintext[lVar19]);
    auVar12[0] = -(puVar1[2] == plaintext[lVar19]);
    auVar11._2_12_ = auVar12;
    auVar11[1] = -(puVar1[1] == plaintext[lVar18]);
    auVar11[0] = -(puVar1[1] == plaintext[lVar18]);
    auVar45._0_2_ = CONCAT11(-bVar2,-bVar2);
    auVar45._2_14_ = auVar11;
    uVar31 = CONCAT13(-bVar4,CONCAT12(-bVar4,CONCAT11(-bVar3,-bVar3)));
    uVar33 = CONCAT15(-bVar5,CONCAT14(-bVar5,uVar31));
    uVar34 = CONCAT17(-bVar6,CONCAT16(-bVar6,uVar33));
    auVar35._0_10_ =
         CONCAT19(-(puVar1[0xc] == plaintext[lVar24]),
                  CONCAT18(-(puVar1[0xc] == plaintext[lVar24]),uVar34));
    auVar35[10] = -(puVar1[0xd] == plaintext[lVar25]);
    auVar35[0xb] = -(puVar1[0xd] == plaintext[lVar25]);
    auVar37[0xc] = -(puVar1[0xe] == plaintext[lVar26]);
    auVar37._0_12_ = auVar35;
    auVar37[0xd] = -(puVar1[0xe] == plaintext[lVar26]);
    auVar38[0xe] = -(puVar1[0xf] == plaintext[lVar27]);
    auVar38._0_14_ = auVar37;
    auVar38[0xf] = -(puVar1[0xf] == plaintext[lVar27]);
    sVar49 = (short)Var13;
    sVar50 = (short)((unkuint9)Var15 >> 8);
    uVar7 = (ushort)(sVar50 < 0);
    sVar52 = (short)uVar16;
    uVar9 = (ushort)(sVar52 < 0);
    sVar53 = (short)uVar32;
    sVar42 = (short)((unkuint10)auVar35._0_10_ >> 0x40);
    uVar8 = (ushort)(sVar42 < 0);
    uVar10 = (ushort)(auVar35._10_2_ < 0);
    auVar57._0_12_ = auVar45._0_12_;
    auVar57._12_2_ = sVar49;
    auVar57._14_2_ = -(ushort)(sVar49 < 0);
    auVar56._12_4_ = auVar57._12_4_;
    auVar56._0_10_ = auVar45._0_10_;
    auVar56._10_2_ = -(ushort)(auVar12._0_2_ < 0);
    auVar55._10_6_ = auVar56._10_6_;
    auVar55._0_8_ = auVar45._0_8_;
    auVar55._8_2_ = auVar12._0_2_;
    auVar14._4_8_ = auVar55._8_8_;
    auVar14._2_2_ = -(ushort)(auVar11._0_2_ < 0);
    auVar14._0_2_ = auVar11._0_2_;
    uVar71 = CONCAT22(-(ushort)bVar2,auVar45._0_2_);
    auVar54._4_12_ = auVar14;
    uVar43 = CONCAT22(-uVar7,sVar50);
    auVar44._0_8_ = CONCAT26(-uVar9,CONCAT24(sVar52,uVar43));
    auVar44._8_2_ = sVar53;
    auVar44._10_2_ = -(ushort)(sVar53 < 0);
    auVar46._12_2_ = uVar17;
    auVar46._0_12_ = auVar44;
    auVar46._14_2_ = -(ushort)(lVar51 < 0);
    auVar67._12_2_ = (short)((ulong)uVar34 >> 0x30);
    auVar67._0_12_ = auVar35;
    auVar67._14_2_ = -(ushort)bVar6;
    auVar66._12_4_ = auVar67._12_4_;
    auVar66._10_2_ = -(ushort)bVar5;
    auVar66._0_10_ = auVar35._0_10_;
    auVar65._10_6_ = auVar66._10_6_;
    auVar65._8_2_ = (short)((uint6)uVar33 >> 0x20);
    auVar65._0_8_ = uVar34;
    auVar64._8_8_ = auVar65._8_8_;
    auVar64._6_2_ = -(ushort)bVar4;
    auVar64._0_6_ = uVar33;
    auVar63._6_10_ = auVar64._6_10_;
    auVar63._4_2_ = (short)((uint)uVar31 >> 0x10);
    auVar63._0_4_ = uVar31;
    auVar62._4_12_ = auVar63._4_12_;
    uVar72 = CONCAT22(-(ushort)bVar3,CONCAT11(-bVar3,-bVar3));
    uVar32 = CONCAT22(-uVar8,sVar42);
    auVar36._0_8_ = CONCAT26(-uVar10,CONCAT24(auVar35._10_2_,uVar32));
    auVar36._8_2_ = auVar37._12_2_;
    auVar36._10_2_ = -(ushort)(auVar37._12_2_ < 0);
    auVar39._12_2_ = auVar38._14_2_;
    auVar39._0_12_ = auVar36;
    auVar39._14_2_ = -(ushort)(auVar38._14_2_ < 0);
    auVar69._4_4_ = -(uint)(auVar55._8_4_ < 0);
    auVar69._0_4_ = auVar55._8_4_;
    auVar69._8_4_ = auVar56._12_4_;
    auVar69._12_4_ = -(uint)(auVar55._10_6_ < 0);
    auVar58._0_8_ = auVar54._0_8_;
    auVar58._8_4_ = auVar14._0_4_;
    auVar58._12_4_ = -(uint)(auVar14._0_4_ < 0);
    auVar59._4_4_ = -(uint)(auVar44._8_4_ < 0);
    auVar59._0_4_ = auVar44._8_4_;
    auVar59._8_4_ = auVar46._12_4_;
    auVar59._12_4_ = -(uint)(auVar46._12_4_ < 0);
    auVar47._8_4_ = (int)((ulong)auVar44._0_8_ >> 0x20);
    auVar47._0_8_ = auVar44._0_8_;
    auVar47._12_4_ = -(uint)(uVar9 != 0);
    auVar48._4_4_ = -(uint)(auVar65._8_4_ < 0);
    auVar48._0_4_ = auVar65._8_4_;
    auVar48._8_4_ = auVar66._12_4_;
    auVar48._12_4_ = -(uint)(auVar65._10_6_ < 0);
    auVar68._0_8_ = auVar62._0_8_;
    auVar68._8_4_ = auVar63._4_4_;
    auVar68._12_4_ = -(uint)(auVar63._4_4_ < 0);
    auVar70._8_4_ = (int)((ulong)auVar36._0_8_ >> 0x20);
    auVar70._0_8_ = auVar36._0_8_;
    auVar70._12_4_ = -(uint)(uVar10 != 0);
    auVar40._0_8_ = CONCAT44(-(uint)(auVar36._8_4_ < 0),auVar36._8_4_);
    auVar40._8_4_ = auVar39._12_4_;
    auVar40._12_4_ = -(uint)(auVar39._12_4_ < 0);
    lVar60 = (lVar60 - auVar40._0_8_) +
             ((SUB168(auVar48 & __LC14,0) - CONCAT44(-(uint)(bVar3 != 0),uVar72)) -
             CONCAT44(-(uint)(uVar8 != 0),uVar32)) +
             (SUB168(auVar59 & __LC14,0) - CONCAT44(-(uint)(uVar7 != 0),uVar43)) +
             (SUB168(auVar69 & __LC14,0) - CONCAT44(-(uint)(bVar2 != 0),uVar71));
    lVar61 = (lVar61 - auVar40._8_8_) +
             ((SUB168(auVar48 & __LC14,8) - auVar68._8_8_) - auVar70._8_8_) +
             (SUB168(auVar59 & __LC14,8) - auVar47._8_8_) +
             (SUB168(auVar69 & __LC14,8) - auVar58._8_8_);
  } while (lVar29 != 0x2800);
  *(undefined8 *)(puVar30 + -0x1260) = 0x10114b;
  test_size_t_le("test/igetest.c",0x197,"matches","sizeof(checktext) / 100",lVar60 + lVar61,0x66);
  if (*(long *)(puVar30 + 0x3ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar30 + -0x1260) = &UNK_00101175;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_bi_ige_garble1(void)

{
  uchar *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  unkbyte10 Var13;
  undefined1 auVar14 [12];
  unkbyte9 Var15;
  undefined6 uVar16;
  undefined2 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *puVar30;
  long in_FS_OFFSET;
  undefined4 uVar31;
  undefined4 uVar32;
  char cVar41;
  short sVar42;
  undefined1 auVar40 [16];
  undefined4 uVar43;
  short sVar49;
  short sVar50;
  short sVar52;
  short sVar53;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar71;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lVar60;
  long lVar61;
  undefined4 uVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 local_5030 [10216];
  uchar auStack_2848 [10264];
  undefined6 uVar33;
  undefined8 uVar34;
  undefined1 auVar36 [12];
  undefined1 auVar35 [12];
  undefined1 auVar37 [14];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar44 [12];
  undefined1 auVar46 [16];
  long lVar51;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar54 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar62 [16];
  
  puVar28 = &stack0xffffffffffffffd0;
  do {
    puVar30 = puVar28;
    *(undefined8 *)(puVar30 + -0x1000) = *(undefined8 *)(puVar30 + -0x1000);
    puVar28 = puVar30 + -0x1000;
  } while (puVar30 + -0x1000 != local_5030);
  *(undefined8 *)(puVar30 + 0x3ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar30 + -0x1058) = saved_iv._0_8_;
  *(undefined8 *)(puVar30 + -0x1050) = saved_iv._8_8_;
  *(undefined8 *)(puVar30 + -0x1048) = saved_iv._16_8_;
  *(undefined8 *)(puVar30 + -0x1040) = saved_iv._24_8_;
  *(undefined8 *)(puVar30 + -0x1038) = saved_iv._32_8_;
  *(undefined8 *)(puVar30 + -0x1030) = saved_iv._40_8_;
  *(undefined8 *)(puVar30 + -0x1028) = saved_iv._48_8_;
  *(undefined8 *)(puVar30 + -0x1020) = saved_iv._56_8_;
  *(undefined8 *)(puVar30 + -0x1260) = 0x101241;
  AES_set_encrypt_key(rkey,0x80,(AES_KEY *)(puVar30 + -0x1258));
  *(undefined8 *)(puVar30 + -0x1260) = 0x101251;
  AES_set_encrypt_key(rkey2,0x80,(AES_KEY *)(puVar30 + -0x1158));
  *(undefined8 *)(puVar30 + -0x1260) = 0x10126d;
  AES_ige_encrypt(plaintext,puVar30 + -0x1018,0x2800,(AES_KEY *)(puVar30 + -0x1258),
                  puVar30 + -0x1058,1);
  puVar30[1000] = puVar30[1000] + '\x01';
  *(undefined8 *)(puVar30 + -0x1260) = 0x10128c;
  AES_set_decrypt_key(rkey,0x80,(AES_KEY *)(puVar30 + -0x1258));
  *(undefined8 *)(puVar30 + -0x1260) = 0x10129c;
  AES_set_decrypt_key(rkey2,0x80,(AES_KEY *)(puVar30 + -0x1158));
  *(undefined8 *)(puVar30 + -0x1260) = 0x1012bd;
  AES_ige_encrypt(puVar30 + -0x1018,puVar30 + 0x17e8,0x2800,(AES_KEY *)(puVar30 + -0x1258),
                  puVar30 + -0x1058,0);
  lVar29 = 0;
  lVar60 = 0;
  lVar61 = 0;
  do {
    puVar1 = puVar30 + 0x17e8 + lVar29;
    lVar18 = lVar29 + 1;
    lVar19 = lVar29 + 2;
    lVar20 = lVar29 + 3;
    lVar51 = lVar29 + 4;
    lVar21 = lVar29 + 5;
    lVar22 = lVar29 + 6;
    lVar23 = lVar29 + 7;
    lVar24 = lVar29 + 0xc;
    lVar25 = lVar29 + 0xd;
    lVar26 = lVar29 + 0xe;
    lVar27 = lVar29 + 0xf;
    bVar2 = *puVar1 == plaintext[lVar29];
    cVar41 = -(puVar1[7] == plaintext[lVar23]);
    bVar3 = puVar1[8] == plaintext[lVar29 + 8];
    bVar4 = puVar1[9] == plaintext[lVar29 + 9];
    bVar5 = puVar1[10] == plaintext[lVar29 + 10];
    bVar6 = puVar1[0xb] == plaintext[lVar29 + 0xb];
    lVar29 = lVar29 + 0x10;
    uVar17 = CONCAT11(-(puVar1[7] == plaintext[lVar23]),cVar41);
    uVar32 = CONCAT31(CONCAT21(uVar17,-(puVar1[6] == plaintext[lVar22])),
                      -(puVar1[6] == plaintext[lVar22]));
    uVar16 = CONCAT51(CONCAT41(uVar32,-(puVar1[5] == plaintext[lVar21])),
                      -(puVar1[5] == plaintext[lVar21]));
    Var15 = CONCAT72(CONCAT61(uVar16,-(puVar1[4] == plaintext[lVar51])),
                     CONCAT11(-(puVar1[4] == plaintext[lVar51]),cVar41));
    lVar51 = (long)((unkuint9)Var15 >> 8);
    Var13 = CONCAT91(CONCAT81(lVar51,-(puVar1[3] == plaintext[lVar20])),
                     -(puVar1[3] == plaintext[lVar20]));
    auVar12._2_10_ = Var13;
    auVar12[1] = -(puVar1[2] == plaintext[lVar19]);
    auVar12[0] = -(puVar1[2] == plaintext[lVar19]);
    auVar11._2_12_ = auVar12;
    auVar11[1] = -(puVar1[1] == plaintext[lVar18]);
    auVar11[0] = -(puVar1[1] == plaintext[lVar18]);
    auVar45._0_2_ = CONCAT11(-bVar2,-bVar2);
    auVar45._2_14_ = auVar11;
    uVar31 = CONCAT13(-bVar4,CONCAT12(-bVar4,CONCAT11(-bVar3,-bVar3)));
    uVar33 = CONCAT15(-bVar5,CONCAT14(-bVar5,uVar31));
    uVar34 = CONCAT17(-bVar6,CONCAT16(-bVar6,uVar33));
    auVar35._0_10_ =
         CONCAT19(-(puVar1[0xc] == plaintext[lVar24]),
                  CONCAT18(-(puVar1[0xc] == plaintext[lVar24]),uVar34));
    auVar35[10] = -(puVar1[0xd] == plaintext[lVar25]);
    auVar35[0xb] = -(puVar1[0xd] == plaintext[lVar25]);
    auVar37[0xc] = -(puVar1[0xe] == plaintext[lVar26]);
    auVar37._0_12_ = auVar35;
    auVar37[0xd] = -(puVar1[0xe] == plaintext[lVar26]);
    auVar38[0xe] = -(puVar1[0xf] == plaintext[lVar27]);
    auVar38._0_14_ = auVar37;
    auVar38[0xf] = -(puVar1[0xf] == plaintext[lVar27]);
    sVar49 = (short)Var13;
    sVar50 = (short)((unkuint9)Var15 >> 8);
    uVar7 = (ushort)(sVar50 < 0);
    sVar52 = (short)uVar16;
    uVar9 = (ushort)(sVar52 < 0);
    sVar53 = (short)uVar32;
    sVar42 = (short)((unkuint10)auVar35._0_10_ >> 0x40);
    uVar8 = (ushort)(sVar42 < 0);
    uVar10 = (ushort)(auVar35._10_2_ < 0);
    auVar57._0_12_ = auVar45._0_12_;
    auVar57._12_2_ = sVar49;
    auVar57._14_2_ = -(ushort)(sVar49 < 0);
    auVar56._12_4_ = auVar57._12_4_;
    auVar56._0_10_ = auVar45._0_10_;
    auVar56._10_2_ = -(ushort)(auVar12._0_2_ < 0);
    auVar55._10_6_ = auVar56._10_6_;
    auVar55._0_8_ = auVar45._0_8_;
    auVar55._8_2_ = auVar12._0_2_;
    auVar14._4_8_ = auVar55._8_8_;
    auVar14._2_2_ = -(ushort)(auVar11._0_2_ < 0);
    auVar14._0_2_ = auVar11._0_2_;
    uVar71 = CONCAT22(-(ushort)bVar2,auVar45._0_2_);
    auVar54._4_12_ = auVar14;
    uVar43 = CONCAT22(-uVar7,sVar50);
    auVar44._0_8_ = CONCAT26(-uVar9,CONCAT24(sVar52,uVar43));
    auVar44._8_2_ = sVar53;
    auVar44._10_2_ = -(ushort)(sVar53 < 0);
    auVar46._12_2_ = uVar17;
    auVar46._0_12_ = auVar44;
    auVar46._14_2_ = -(ushort)(lVar51 < 0);
    auVar67._12_2_ = (short)((ulong)uVar34 >> 0x30);
    auVar67._0_12_ = auVar35;
    auVar67._14_2_ = -(ushort)bVar6;
    auVar66._12_4_ = auVar67._12_4_;
    auVar66._10_2_ = -(ushort)bVar5;
    auVar66._0_10_ = auVar35._0_10_;
    auVar65._10_6_ = auVar66._10_6_;
    auVar65._8_2_ = (short)((uint6)uVar33 >> 0x20);
    auVar65._0_8_ = uVar34;
    auVar64._8_8_ = auVar65._8_8_;
    auVar64._6_2_ = -(ushort)bVar4;
    auVar64._0_6_ = uVar33;
    auVar63._6_10_ = auVar64._6_10_;
    auVar63._4_2_ = (short)((uint)uVar31 >> 0x10);
    auVar63._0_4_ = uVar31;
    auVar62._4_12_ = auVar63._4_12_;
    uVar72 = CONCAT22(-(ushort)bVar3,CONCAT11(-bVar3,-bVar3));
    uVar32 = CONCAT22(-uVar8,sVar42);
    auVar36._0_8_ = CONCAT26(-uVar10,CONCAT24(auVar35._10_2_,uVar32));
    auVar36._8_2_ = auVar37._12_2_;
    auVar36._10_2_ = -(ushort)(auVar37._12_2_ < 0);
    auVar39._12_2_ = auVar38._14_2_;
    auVar39._0_12_ = auVar36;
    auVar39._14_2_ = -(ushort)(auVar38._14_2_ < 0);
    auVar69._4_4_ = -(uint)(auVar55._8_4_ < 0);
    auVar69._0_4_ = auVar55._8_4_;
    auVar69._8_4_ = auVar56._12_4_;
    auVar69._12_4_ = -(uint)(auVar55._10_6_ < 0);
    auVar58._0_8_ = auVar54._0_8_;
    auVar58._8_4_ = auVar14._0_4_;
    auVar58._12_4_ = -(uint)(auVar14._0_4_ < 0);
    auVar59._4_4_ = -(uint)(auVar44._8_4_ < 0);
    auVar59._0_4_ = auVar44._8_4_;
    auVar59._8_4_ = auVar46._12_4_;
    auVar59._12_4_ = -(uint)(auVar46._12_4_ < 0);
    auVar47._8_4_ = (int)((ulong)auVar44._0_8_ >> 0x20);
    auVar47._0_8_ = auVar44._0_8_;
    auVar47._12_4_ = -(uint)(uVar9 != 0);
    auVar48._4_4_ = -(uint)(auVar65._8_4_ < 0);
    auVar48._0_4_ = auVar65._8_4_;
    auVar48._8_4_ = auVar66._12_4_;
    auVar48._12_4_ = -(uint)(auVar65._10_6_ < 0);
    auVar68._0_8_ = auVar62._0_8_;
    auVar68._8_4_ = auVar63._4_4_;
    auVar68._12_4_ = -(uint)(auVar63._4_4_ < 0);
    auVar70._8_4_ = (int)((ulong)auVar36._0_8_ >> 0x20);
    auVar70._0_8_ = auVar36._0_8_;
    auVar70._12_4_ = -(uint)(uVar10 != 0);
    auVar40._0_8_ = CONCAT44(-(uint)(auVar36._8_4_ < 0),auVar36._8_4_);
    auVar40._8_4_ = auVar39._12_4_;
    auVar40._12_4_ = -(uint)(auVar39._12_4_ < 0);
    lVar60 = (lVar60 - auVar40._0_8_) +
             ((SUB168(auVar48 & __LC14,0) - CONCAT44(-(uint)(bVar3 != 0),uVar72)) -
             CONCAT44(-(uint)(uVar8 != 0),uVar32)) +
             (SUB168(auVar59 & __LC14,0) - CONCAT44(-(uint)(uVar7 != 0),uVar43)) +
             (SUB168(auVar69 & __LC14,0) - CONCAT44(-(uint)(bVar2 != 0),uVar71));
    lVar61 = (lVar61 - auVar40._8_8_) +
             ((SUB168(auVar48 & __LC14,8) - auVar68._8_8_) - auVar70._8_8_) +
             (SUB168(auVar59 & __LC14,8) - auVar47._8_8_) +
             (SUB168(auVar69 & __LC14,8) - auVar58._8_8_);
  } while (lVar29 != 0x2800);
  *(undefined8 *)(puVar30 + -0x1260) = 0x10140b;
  test_size_t_le("test/igetest.c",0x178,"matches","sizeof(checktext) / 100",lVar60 + lVar61,0x66);
  if (*(long *)(puVar30 + 0x3ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar30 + -0x1260) = &UNK_00101435;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong test_ige_garble_forwards(void)

{
  uchar *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  unkbyte10 Var13;
  undefined1 auVar14 [12];
  unkbyte9 Var15;
  undefined6 uVar16;
  undefined2 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 *puVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  undefined1 *puVar32;
  long in_FS_OFFSET;
  undefined4 uVar33;
  undefined4 uVar34;
  char cVar43;
  short sVar44;
  undefined1 auVar42 [16];
  undefined4 uVar45;
  short sVar51;
  short sVar52;
  short sVar54;
  short sVar55;
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar73;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  long lVar62;
  long lVar63;
  undefined4 uVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 local_5028 [10224];
  uchar auStack_2838 [10256];
  undefined6 uVar35;
  undefined8 uVar36;
  undefined1 auVar38 [12];
  undefined1 auVar37 [12];
  undefined1 auVar39 [14];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar46 [12];
  undefined1 auVar48 [16];
  long lVar53;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar56 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar64 [16];
  
  puVar28 = &stack0xffffffffffffffd8;
  do {
    puVar32 = puVar28;
    *(undefined8 *)(puVar32 + -0x1000) = *(undefined8 *)(puVar32 + -0x1000);
    puVar28 = puVar32 + -0x1000;
  } while (puVar32 + -0x1000 != local_5028);
  *(undefined8 *)(puVar32 + 0x3ff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar32 + -0x1158) = 0x1014b0;
  AES_set_encrypt_key(rkey,0x80,(AES_KEY *)(puVar32 + -0x1150));
  *(undefined8 *)(puVar32 + -0x1050) = saved_iv._0_8_;
  *(undefined8 *)(puVar32 + -0x1048) = saved_iv._8_8_;
  *(undefined8 *)(puVar32 + -0x1040) = saved_iv._16_8_;
  *(undefined8 *)(puVar32 + -0x1038) = saved_iv._24_8_;
  *(undefined8 *)(puVar32 + -0x1030) = saved_iv._32_8_;
  *(undefined8 *)(puVar32 + -0x1028) = saved_iv._40_8_;
  *(undefined8 *)(puVar32 + -0x1020) = saved_iv._48_8_;
  *(undefined8 *)(puVar32 + -0x1018) = saved_iv._56_8_;
  *(undefined8 *)(puVar32 + -0x1158) = 0x10150c;
  AES_ige_encrypt(plaintext,puVar32 + -0x1010,0x2800,(AES_KEY *)(puVar32 + -0x1150),
                  puVar32 + -0x1050,1);
  puVar32[0x3f0] = puVar32[0x3f0] + '\x01';
  *(undefined8 *)(puVar32 + -0x1158) = 0x10152c;
  AES_set_decrypt_key(rkey,0x80,(AES_KEY *)(puVar32 + -0x1150));
  *(undefined8 *)(puVar32 + -0x1050) = saved_iv._0_8_;
  *(undefined8 *)(puVar32 + -0x1048) = saved_iv._8_8_;
  *(undefined8 *)(puVar32 + -0x1040) = saved_iv._16_8_;
  *(undefined8 *)(puVar32 + -0x1038) = saved_iv._24_8_;
  *(undefined8 *)(puVar32 + -0x1030) = saved_iv._32_8_;
  *(undefined8 *)(puVar32 + -0x1028) = saved_iv._40_8_;
  *(undefined8 *)(puVar32 + -0x1020) = saved_iv._48_8_;
  *(undefined8 *)(puVar32 + -0x1018) = saved_iv._56_8_;
  *(undefined8 *)(puVar32 + -0x1158) = 0x101585;
  AES_ige_encrypt(puVar32 + -0x1010,puVar32 + 0x17f0,0x2800,(AES_KEY *)(puVar32 + -0x1150),
                  puVar32 + -0x1050,0);
  lVar30 = 0;
  lVar62 = 0;
  lVar63 = 0;
  do {
    puVar1 = puVar32 + 0x17f0 + lVar30;
    lVar18 = lVar30 + 1;
    lVar19 = lVar30 + 2;
    lVar20 = lVar30 + 3;
    lVar53 = lVar30 + 4;
    lVar21 = lVar30 + 5;
    lVar22 = lVar30 + 6;
    lVar23 = lVar30 + 7;
    lVar24 = lVar30 + 0xc;
    lVar25 = lVar30 + 0xd;
    lVar26 = lVar30 + 0xe;
    lVar27 = lVar30 + 0xf;
    bVar2 = *puVar1 == plaintext[lVar30];
    cVar43 = -(puVar1[7] == plaintext[lVar23]);
    bVar3 = puVar1[8] == plaintext[lVar30 + 8];
    bVar4 = puVar1[9] == plaintext[lVar30 + 9];
    bVar5 = puVar1[10] == plaintext[lVar30 + 10];
    bVar6 = puVar1[0xb] == plaintext[lVar30 + 0xb];
    lVar30 = lVar30 + 0x10;
    uVar17 = CONCAT11(-(puVar1[7] == plaintext[lVar23]),cVar43);
    uVar34 = CONCAT31(CONCAT21(uVar17,-(puVar1[6] == plaintext[lVar22])),
                      -(puVar1[6] == plaintext[lVar22]));
    uVar16 = CONCAT51(CONCAT41(uVar34,-(puVar1[5] == plaintext[lVar21])),
                      -(puVar1[5] == plaintext[lVar21]));
    Var15 = CONCAT72(CONCAT61(uVar16,-(puVar1[4] == plaintext[lVar53])),
                     CONCAT11(-(puVar1[4] == plaintext[lVar53]),cVar43));
    lVar53 = (long)((unkuint9)Var15 >> 8);
    Var13 = CONCAT91(CONCAT81(lVar53,-(puVar1[3] == plaintext[lVar20])),
                     -(puVar1[3] == plaintext[lVar20]));
    auVar12._2_10_ = Var13;
    auVar12[1] = -(puVar1[2] == plaintext[lVar19]);
    auVar12[0] = -(puVar1[2] == plaintext[lVar19]);
    auVar11._2_12_ = auVar12;
    auVar11[1] = -(puVar1[1] == plaintext[lVar18]);
    auVar11[0] = -(puVar1[1] == plaintext[lVar18]);
    auVar47._0_2_ = CONCAT11(-bVar2,-bVar2);
    auVar47._2_14_ = auVar11;
    uVar33 = CONCAT13(-bVar4,CONCAT12(-bVar4,CONCAT11(-bVar3,-bVar3)));
    uVar35 = CONCAT15(-bVar5,CONCAT14(-bVar5,uVar33));
    uVar36 = CONCAT17(-bVar6,CONCAT16(-bVar6,uVar35));
    auVar37._0_10_ =
         CONCAT19(-(puVar1[0xc] == plaintext[lVar24]),
                  CONCAT18(-(puVar1[0xc] == plaintext[lVar24]),uVar36));
    auVar37[10] = -(puVar1[0xd] == plaintext[lVar25]);
    auVar37[0xb] = -(puVar1[0xd] == plaintext[lVar25]);
    auVar39[0xc] = -(puVar1[0xe] == plaintext[lVar26]);
    auVar39._0_12_ = auVar37;
    auVar39[0xd] = -(puVar1[0xe] == plaintext[lVar26]);
    auVar40[0xe] = -(puVar1[0xf] == plaintext[lVar27]);
    auVar40._0_14_ = auVar39;
    auVar40[0xf] = -(puVar1[0xf] == plaintext[lVar27]);
    sVar51 = (short)Var13;
    sVar52 = (short)((unkuint9)Var15 >> 8);
    uVar7 = (ushort)(sVar52 < 0);
    sVar54 = (short)uVar16;
    uVar9 = (ushort)(sVar54 < 0);
    sVar55 = (short)uVar34;
    sVar44 = (short)((unkuint10)auVar37._0_10_ >> 0x40);
    uVar8 = (ushort)(sVar44 < 0);
    uVar10 = (ushort)(auVar37._10_2_ < 0);
    auVar59._0_12_ = auVar47._0_12_;
    auVar59._12_2_ = sVar51;
    auVar59._14_2_ = -(ushort)(sVar51 < 0);
    auVar58._12_4_ = auVar59._12_4_;
    auVar58._0_10_ = auVar47._0_10_;
    auVar58._10_2_ = -(ushort)(auVar12._0_2_ < 0);
    auVar57._10_6_ = auVar58._10_6_;
    auVar57._0_8_ = auVar47._0_8_;
    auVar57._8_2_ = auVar12._0_2_;
    auVar14._4_8_ = auVar57._8_8_;
    auVar14._2_2_ = -(ushort)(auVar11._0_2_ < 0);
    auVar14._0_2_ = auVar11._0_2_;
    uVar73 = CONCAT22(-(ushort)bVar2,auVar47._0_2_);
    auVar56._4_12_ = auVar14;
    uVar45 = CONCAT22(-uVar7,sVar52);
    auVar46._0_8_ = CONCAT26(-uVar9,CONCAT24(sVar54,uVar45));
    auVar46._8_2_ = sVar55;
    auVar46._10_2_ = -(ushort)(sVar55 < 0);
    auVar48._12_2_ = uVar17;
    auVar48._0_12_ = auVar46;
    auVar48._14_2_ = -(ushort)(lVar53 < 0);
    auVar69._12_2_ = (short)((ulong)uVar36 >> 0x30);
    auVar69._0_12_ = auVar37;
    auVar69._14_2_ = -(ushort)bVar6;
    auVar68._12_4_ = auVar69._12_4_;
    auVar68._10_2_ = -(ushort)bVar5;
    auVar68._0_10_ = auVar37._0_10_;
    auVar67._10_6_ = auVar68._10_6_;
    auVar67._8_2_ = (short)((uint6)uVar35 >> 0x20);
    auVar67._0_8_ = uVar36;
    auVar66._8_8_ = auVar67._8_8_;
    auVar66._6_2_ = -(ushort)bVar4;
    auVar66._0_6_ = uVar35;
    auVar65._6_10_ = auVar66._6_10_;
    auVar65._4_2_ = (short)((uint)uVar33 >> 0x10);
    auVar65._0_4_ = uVar33;
    auVar64._4_12_ = auVar65._4_12_;
    uVar74 = CONCAT22(-(ushort)bVar3,CONCAT11(-bVar3,-bVar3));
    uVar34 = CONCAT22(-uVar8,sVar44);
    auVar38._0_8_ = CONCAT26(-uVar10,CONCAT24(auVar37._10_2_,uVar34));
    auVar38._8_2_ = auVar39._12_2_;
    auVar38._10_2_ = -(ushort)(auVar39._12_2_ < 0);
    auVar41._12_2_ = auVar40._14_2_;
    auVar41._0_12_ = auVar38;
    auVar41._14_2_ = -(ushort)(auVar40._14_2_ < 0);
    auVar71._4_4_ = -(uint)(auVar57._8_4_ < 0);
    auVar71._0_4_ = auVar57._8_4_;
    auVar71._8_4_ = auVar58._12_4_;
    auVar71._12_4_ = -(uint)(auVar57._10_6_ < 0);
    auVar60._0_8_ = auVar56._0_8_;
    auVar60._8_4_ = auVar14._0_4_;
    auVar60._12_4_ = -(uint)(auVar14._0_4_ < 0);
    auVar61._4_4_ = -(uint)(auVar46._8_4_ < 0);
    auVar61._0_4_ = auVar46._8_4_;
    auVar61._8_4_ = auVar48._12_4_;
    auVar61._12_4_ = -(uint)(auVar48._12_4_ < 0);
    auVar49._8_4_ = (int)((ulong)auVar46._0_8_ >> 0x20);
    auVar49._0_8_ = auVar46._0_8_;
    auVar49._12_4_ = -(uint)(uVar9 != 0);
    auVar50._4_4_ = -(uint)(auVar67._8_4_ < 0);
    auVar50._0_4_ = auVar67._8_4_;
    auVar50._8_4_ = auVar68._12_4_;
    auVar50._12_4_ = -(uint)(auVar67._10_6_ < 0);
    auVar70._0_8_ = auVar64._0_8_;
    auVar70._8_4_ = auVar65._4_4_;
    auVar70._12_4_ = -(uint)(auVar65._4_4_ < 0);
    auVar72._8_4_ = (int)((ulong)auVar38._0_8_ >> 0x20);
    auVar72._0_8_ = auVar38._0_8_;
    auVar72._12_4_ = -(uint)(uVar10 != 0);
    auVar42._0_8_ = CONCAT44(-(uint)(auVar38._8_4_ < 0),auVar38._8_4_);
    auVar42._8_4_ = auVar41._12_4_;
    auVar42._12_4_ = -(uint)(auVar41._12_4_ < 0);
    lVar62 = (lVar62 - auVar42._0_8_) +
             ((SUB168(auVar50 & __LC14,0) - CONCAT44(-(uint)(bVar3 != 0),uVar74)) -
             CONCAT44(-(uint)(uVar8 != 0),uVar34)) +
             (SUB168(auVar61 & __LC14,0) - CONCAT44(-(uint)(uVar7 != 0),uVar45)) +
             (SUB168(auVar71 & __LC14,0) - CONCAT44(-(uint)(bVar2 != 0),uVar73));
    lVar63 = (lVar63 - auVar42._8_8_) +
             ((SUB168(auVar50 & __LC14,8) - auVar70._8_8_) - auVar72._8_8_) +
             (SUB168(auVar61 & __LC14,8) - auVar49._8_8_) +
             (SUB168(auVar71 & __LC14,8) - auVar60._8_8_);
  } while (lVar30 != 0x2800);
  *(undefined8 *)(puVar32 + -0x1158) = 0x1016d4;
  iVar29 = test_size_t_le("test/igetest.c",0x13e,"matches","ctsize / 2 + ctsize / 100",
                          lVar62 + lVar63,0x1466);
  *(undefined8 *)(puVar32 + -0x1158) = 0x1016f6;
  uVar31 = test_size_t_gt("test/igetest.c",0x142,"matches","ctsize / 2",lVar62 + lVar63,0x1400);
  if ((int)uVar31 != 0) {
    uVar31 = (ulong)(iVar29 != 0);
  }
  if (*(long *)(puVar32 + 0x3ff8) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar31;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar32 + -0x1158) = &UNK_00101729;
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  RAND_bytes(rkey,0x10);
  RAND_bytes(rkey2,0x10);
  RAND_bytes(plaintext,0x2800);
  RAND_bytes(saved_iv,0x40);
  add_test("test_ige_enc_dec",test_ige_enc_dec);
  add_test("test_ige_enc_chaining",test_ige_enc_chaining);
  add_test("test_ige_dec_chaining",test_ige_dec_chaining);
  add_test("test_ige_garble_forwards",test_ige_garble_forwards);
  add_test("test_bi_ige_enc_dec",0x100000);
  add_test("test_bi_ige_garble1",test_bi_ige_garble1);
  add_test("test_bi_ige_garble2",test_bi_ige_garble2);
  add_test("test_bi_ige_garble3",test_bi_ige_garble3);
  add_all_tests("test_ige_vectors",test_ige_vectors,2,1);
  add_all_tests("test_bi_ige_vectors",test_bi_ige_vectors,2,1);
  return 1;
}


