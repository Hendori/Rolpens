
bool test_gcm128(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  AES_KEY local_508;
  undefined1 local_408 [448];
  undefined1 local_248 [520];
  long local_40;
  
  lVar8 = (long)param_1 * 0x60;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = 0;
  uVar1 = *(undefined8 *)(gcm128_vectors + lVar8 + 0x18);
  lVar2 = *(long *)(gcm128_vectors + lVar8 + 0x30);
  lVar3 = *(long *)(gcm128_vectors + lVar8 + 0x20);
  uVar4 = *(undefined8 *)(gcm128_vectors + lVar8 + 0x10);
  uVar5 = *(undefined8 *)(gcm128_vectors + lVar8 + 0x58);
  lVar10 = *(long *)(gcm128_vectors + lVar8 + 0x28);
  if (lVar3 == 1) {
    lVar10 = lVar9;
  }
  lVar11 = *(long *)(gcm128_vectors + lVar8 + 0x38);
  if (lVar2 == 1) {
    lVar11 = lVar9;
  }
  lVar12 = *(long *)(gcm128_vectors + lVar8 + 0x48);
  if (*(long *)(gcm128_vectors + lVar8 + 0x40) == 1) {
    lVar12 = lVar9;
  }
  AES_set_encrypt_key(*(uchar **)(gcm128_vectors + lVar8 + 8),
                      (int)*(undefined8 *)(gcm128_vectors + lVar8) << 3,&local_508);
  CRYPTO_gcm128_init(local_408,&local_508,&AES_encrypt);
  CRYPTO_gcm128_setiv(local_408,uVar1,uVar4);
  __memset_chk(local_248,0,lVar2,0x200);
  if (lVar10 != 0) {
    CRYPTO_gcm128_aad(local_408,lVar10,lVar3);
  }
  if (lVar11 == 0) {
LAB_0010014d:
    iVar7 = CRYPTO_gcm128_finish(local_408,uVar5,0x10);
    iVar7 = test_false("test/modes_internal_test.c",0x36b,"CRYPTO_gcm128_finish(&ctx, T.data, 16)",
                       iVar7 != 0);
    if (iVar7 != 0) {
      if (lVar12 == 0) {
        CRYPTO_gcm128_setiv(local_408,uVar1,uVar4);
        __memset_chk(local_248,0,lVar2,0x200);
        if (lVar10 != 0) {
          CRYPTO_gcm128_aad(local_408,lVar10,lVar3);
        }
      }
      else {
        iVar7 = test_mem_eq("test/modes_internal_test.c",0x36d,&_LC5,"C.data",local_248,lVar2,lVar12
                            ,lVar2);
        if (iVar7 == 0) goto LAB_00100280;
        CRYPTO_gcm128_setiv(local_408,uVar1,uVar4);
        __memset_chk(local_248,0,lVar2,0x200);
        if (lVar10 != 0) {
          CRYPTO_gcm128_aad(local_408,lVar10,lVar3);
        }
        CRYPTO_gcm128_decrypt(local_408,lVar12,local_248,lVar2);
      }
      iVar7 = CRYPTO_gcm128_finish(local_408,uVar5,0x10);
      iVar7 = test_false("test/modes_internal_test.c",0x376,"CRYPTO_gcm128_finish(&ctx, T.data, 16)"
                         ,iVar7 != 0);
      if (iVar7 != 0) {
        bVar13 = true;
        if (lVar11 != 0) {
          iVar7 = test_mem_eq("test/modes_internal_test.c",0x378,&_LC5,"P.data",local_248,lVar2,
                              lVar11,lVar2);
          bVar13 = iVar7 != 0;
        }
        goto LAB_00100282;
      }
    }
  }
  else {
    uVar6 = CRYPTO_gcm128_encrypt(local_408,lVar11,local_248,lVar2);
    iVar7 = test_int_ge("test/modes_internal_test.c",0x369,
                        "CRYPTO_gcm128_encrypt(&ctx, P.data, out, P.size)",&_LC2,uVar6,0);
    if (iVar7 != 0) goto LAB_0010014d;
  }
LAB_00100280:
  bVar13 = false;
LAB_00100282:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar13;
}



bool execute_cts128(undefined8 *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 local_118 [16];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(undefined8 *)(aes_cts128_vectors + (long)param_2 * 0x10 + 8);
  lVar1 = *(long *)(aes_cts128_vectors + (long)param_2 * 0x10);
  if (init_key_4 != 0) {
    AES_set_encrypt_key(cts128_test_key,0x80,(AES_KEY *)ks_3);
    init_key_4 = 0;
  }
  if (init_key_2 != 0) {
    AES_set_decrypt_key(cts128_test_key,0x80,(AES_KEY *)ks_1);
    init_key_2 = 0;
  }
  test_info("test/modes_internal_test.c",0xc6,"%s_vector_%lu",*param_1,lVar1);
  lVar3 = (*(code *)param_1[1])(uVar4,local_88,lVar1);
  local_118 = (undefined1  [16])0x0;
  uVar4 = (*(code *)param_1[2])(cts128_test_input,local_c8,lVar1,ks_3,local_118,&AES_encrypt,lVar3);
  iVar2 = test_size_t_eq("test/modes_internal_test.c",0xcc,
                         "fixture->encrypt_block(test_input, ciphertext, len, encrypt_key_schedule, iv, (block128_f)AES_encrypt)"
                         ,&_LC8,uVar4,lVar1);
  if ((iVar2 != 0) &&
     (iVar2 = test_mem_eq("test/modes_internal_test.c",0xcf,"ciphertext","vector",local_c8,lVar1,
                          local_88,lVar1), iVar2 != 0)) {
    puVar5 = local_88 + (lVar1 - lVar3);
    iVar2 = test_mem_eq("test/modes_internal_test.c",0xd0,&_LC13,"vector + len - tail",local_118,
                        0x10,puVar5,0x10,puVar5);
    if (iVar2 != 0) {
      local_118 = (undefined1  [16])0x0;
      lVar3 = (*(code *)param_1[4])(local_c8,local_108,lVar1,ks_1,local_118,&AES_decrypt);
      iVar2 = test_true("test/modes_internal_test.c",0xd8,"len == size || len + 16 == size",
                        lVar1 == lVar3 || lVar1 + 0x10 == lVar3);
      if (((iVar2 != 0) &&
          (iVar2 = test_mem_eq("test/modes_internal_test.c",0xd9,"cleartext","test_input",local_108,
                               lVar1,cts128_test_input,lVar1), iVar2 != 0)) &&
         (iVar2 = test_mem_eq("test/modes_internal_test.c",0xda,&_LC13,"vector + len - tail",
                              local_118,0x10,puVar5,0x10), iVar2 != 0)) {
        local_118 = (undefined1  [16])0x0;
        uVar4 = (*(code *)param_1[3])
                          (cts128_test_input,local_c8,lVar1,ks_3,local_118,&AES_cbc_encrypt);
        iVar2 = test_size_t_eq("test/modes_internal_test.c",0xdf,
                               "fixture->encrypt_stream(test_input, ciphertext, len, encrypt_key_schedule, iv, (cbc128_f) AES_cbc_encrypt)"
                               ,&_LC8,uVar4,lVar1);
        if (((iVar2 != 0) &&
            (iVar2 = test_mem_eq("test/modes_internal_test.c",0xe3,"ciphertext","vector",local_c8,
                                 lVar1,local_88,lVar1), iVar2 != 0)) &&
           (iVar2 = test_mem_eq("test/modes_internal_test.c",0xe4,&_LC13,"vector + len - tail",
                                local_118,0x10,puVar5,0x10), iVar2 != 0)) {
          local_118 = (undefined1  [16])0x0;
          uVar4 = (*(code *)param_1[5])(local_c8,local_108,lVar1,ks_1,local_118,&AES_cbc_encrypt);
          iVar2 = test_size_t_eq("test/modes_internal_test.c",0xe9,
                                 "fixture->decrypt_stream(ciphertext, cleartext, len, decrypt_key_schedule, iv, (cbc128_f)AES_cbc_encrypt)"
                                 ,&_LC8,uVar4,lVar1);
          if ((iVar2 != 0) &&
             (iVar2 = test_mem_eq("test/modes_internal_test.c",0xed,"cleartext","test_input",
                                  local_108,lVar1,cts128_test_input,lVar1), iVar2 != 0)) {
            iVar2 = test_mem_eq("test/modes_internal_test.c",0xee,&_LC13,"vector + len - tail",
                                local_118,0x10,puVar5,0x10);
            bVar6 = iVar2 != 0;
            goto LAB_00100406;
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_00100406:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_aes_cts128_nist(undefined4 param_1)

{
  execute_cts128(fixture_cts128_nist_5,param_1);
  return;
}



void test_aes_cts128(undefined4 param_1)

{
  execute_cts128(fixture_cts128_0,param_1);
  return;
}



int last_blocks_correction(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  memcpy(param_2,param_1,param_3);
  iVar1 = ((uint)param_3 & 0xf) + 0x10;
  if ((param_3 & 0xf) == 0) {
    iVar1 = 0x20;
  }
  return iVar1;
}



undefined8 last_blocks_correction_nist(void *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = (ulong)((uint)param_3 & 0xf);
  if ((param_3 & 0xf) == 0) {
    uVar9 = 0x10;
  }
  lVar8 = param_3 - uVar9;
  __n = lVar8 - 0x10;
  pvVar5 = memcpy(param_2,param_1,__n);
  puVar1 = (undefined8 *)((long)param_1 + lVar8);
  puVar2 = (undefined8 *)((long)pvVar5 + __n);
  uVar4 = (uint)uVar9;
  if (uVar4 < 8) {
    if ((uVar9 & 4) == 0) {
      if ((uVar4 != 0) && (*(undefined1 *)puVar2 = *(undefined1 *)puVar1, (uVar9 & 2) != 0)) {
        *(undefined2 *)((long)puVar2 + (uVar9 - 2)) = *(undefined2 *)((long)puVar1 + (uVar9 - 2));
      }
    }
    else {
      *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
      *(undefined4 *)((long)puVar2 + (uVar9 - 4)) = *(undefined4 *)((long)puVar1 + (uVar9 - 4));
    }
  }
  else {
    *puVar2 = *puVar1;
    *(undefined8 *)((long)puVar2 + (uVar9 - 8)) = *(undefined8 *)((long)puVar1 + (uVar9 - 8));
    lVar7 = (long)puVar2 - ((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
    uVar4 = uVar4 + (int)lVar7 & 0xfffffff8;
    if (7 < uVar4) {
      uVar6 = 0;
      do {
        uVar10 = (ulong)uVar6;
        uVar6 = uVar6 + 8;
        *(undefined8 *)(((ulong)(puVar2 + 1) & 0xfffffffffffffff8) + uVar10) =
             *(undefined8 *)((long)puVar1 + (uVar10 - lVar7));
      } while (uVar6 < uVar4);
    }
  }
  puVar2 = (undefined8 *)((long)param_1 + lVar8 + -0x10);
  uVar3 = puVar2[1];
  puVar1 = (undefined8 *)((long)pvVar5 + __n + uVar9);
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  return 0x10;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_aes_cts128",test_aes_cts128,6,1);
  add_all_tests("test_aes_cts128_nist",test_aes_cts128_nist,6,1);
  add_all_tests("test_gcm128",0x100000,0x14,1);
  return 1;
}


