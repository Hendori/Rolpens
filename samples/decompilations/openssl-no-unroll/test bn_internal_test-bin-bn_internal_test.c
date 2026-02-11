
undefined4 test_bn_small_factors(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  BIGNUM *a;
  undefined8 uVar4;
  NoteGnuProperty_4 *pNVar5;
  
  a = BN_new();
  iVar2 = test_ptr("test/bn_internal_test.c",0x49,"b = BN_new()",a);
  if (iVar2 != 0) {
    iVar2 = BN_set_word(a,3);
    iVar2 = test_true("test/bn_internal_test.c",0x49,"BN_set_word(b, 3)",iVar2 != 0);
    if (iVar2 != 0) {
      pNVar5 = (NoteGnuProperty_4 *)(primes + 2);
      do {
        uVar1 = (ushort)pNVar5->namesz;
        if ((ushort)(uVar1 - 4) < 0x2ec) {
          iVar2 = BN_mul_word(a,(ulong)uVar1);
          if (iVar2 == 0) goto LAB_00100038;
        }
        else if (0x2ef < uVar1) break;
        pNVar5 = (NoteGnuProperty_4 *)((long)&pNVar5->namesz + 2);
      } while (pNVar5 != &NoteGnuProperty_4_00101560);
      uVar4 = ossl_bn_get0_small_factors();
      uVar3 = test_BN_eq("test/bn_internal_test.c",0x53,"ossl_bn_get0_small_factors()",&_LC3,uVar4,a
                        );
      goto LAB_0010003a;
    }
  }
LAB_00100038:
  uVar3 = 0;
LAB_0010003a:
  BN_free(a);
  return uVar3;
}



bool test_is_composite_enhanced(int param_1)

{
  int iVar1;
  BIGNUM *a;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  a = BN_new();
  iVar1 = test_ptr("test/bn_internal_test.c",0x36,"bn = BN_new()",a);
  if (iVar1 != 0) {
    iVar1 = BN_set_word(a,(long)*(int *)(composites + (long)param_1 * 4));
    iVar1 = test_true("test/bn_internal_test.c",0x38,"BN_set_word(bn, composites[id])",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_bn_miller_rabin_is_prime(a,10,ctx,0,1,&local_24);
      iVar1 = test_true("test/bn_internal_test.c",0x39,
                        "ossl_bn_miller_rabin_is_prime(bn, 10, ctx, NULL, 1, &status)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = test_int_ne("test/bn_internal_test.c",0x3b,"status","BN_PRIMETEST_PROBABLY_PRIME",
                            local_24,3);
        bVar2 = iVar1 != 0;
        goto LAB_00100143;
      }
    }
  }
  bVar2 = false;
LAB_00100143:
  BN_free(a);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_is_prime_enhanced(void)

{
  int iVar1;
  BIGNUM *a;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  a = BN_new();
  iVar1 = test_ptr("test/bn_internal_test.c",0x21,"bn = BN_new()",a);
  if (iVar1 != 0) {
    iVar1 = BN_set_word(a,0xb);
    iVar1 = test_true("test/bn_internal_test.c",0x23,"BN_set_word(bn, 11)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_bn_miller_rabin_is_prime(a,10,ctx,0,1,&local_24);
      iVar1 = test_true("test/bn_internal_test.c",0x25,
                        "ossl_bn_miller_rabin_is_prime(bn, 10, ctx, NULL, 1, &status)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = test_int_eq("test/bn_internal_test.c",0x27,"status","BN_PRIMETEST_PROBABLY_PRIME",
                            local_24,3);
        bVar2 = iVar1 != 0;
        goto LAB_0010027e;
      }
    }
  }
  bVar2 = false;
LAB_0010027e:
  BN_free(a);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  undefined8 uVar1;
  
  ctx = BN_CTX_new();
  uVar1 = test_ptr("test/bn_internal_test.c",0x5b,"ctx = BN_CTX_new()",ctx);
  if ((int)uVar1 != 0) {
    add_test("test_is_prime_enhanced",test_is_prime_enhanced);
    add_all_tests("test_is_composite_enhanced",test_is_composite_enhanced,5,1);
    add_test("test_bn_small_factors",0x100000);
    uVar1 = 1;
  }
  return uVar1;
}



void cleanup_tests(void)

{
  BN_CTX_free(ctx);
  return;
}


