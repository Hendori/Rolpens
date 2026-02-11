
ulong test_sanity_sleep(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar2 = ossl_time_now();
  OSSL_sleep(1000);
  uVar3 = ossl_time_now();
  if (uVar2 <= uVar3) {
    uVar4 = (uVar3 - uVar2) / 1000000000;
  }
  uVar2 = test_uint64_t_ge("test/sanitytest.c",0x93,"seconds",&_LC0,uVar4,1);
  if ((int)uVar2 != 0) {
    iVar1 = test_uint64_t_le("test/sanitytest.c",0x93,"seconds",&_LC3,uVar4,0x14);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}



void test_sanity_memcmp(void)

{
  CRYPTO_memcmp(&_LC5,&_LC4,2);
  return;
}



bool test_sanity_enum_size(void)

{
  int iVar1;
  
  iVar1 = test_size_t_eq("test/sanitytest.c",0x2d,"sizeof(enum smallchoices)","sizeof(int)",4,4);
  if (iVar1 != 0) {
    iVar1 = test_size_t_eq("test/sanitytest.c",0x2e,"sizeof(enum medchoices)","sizeof(int)",4,4);
    if (iVar1 != 0) {
      iVar1 = test_size_t_eq("test/sanitytest.c",0x2f,"sizeof(enum largechoices)","sizeof(int)",4,4)
      ;
      return iVar1 != 0;
    }
  }
  return false;
}



bool test_sanity_range(void)

{
  int iVar1;
  
  iVar1 = test_size_t_eq("test/sanitytest.c",0x52,"sizeof(int8_t)",&_LC0,1,1);
  if (((((iVar1 != 0) &&
        (iVar1 = test_size_t_eq("test/sanitytest.c",0x53,"sizeof(uint8_t)",&_LC0,1,1), iVar1 != 0))
       && (iVar1 = test_size_t_eq("test/sanitytest.c",0x54,"sizeof(int16_t)",&_LC12,2,2), iVar1 != 0
          )) && (((iVar1 = test_size_t_eq("test/sanitytest.c",0x55,"sizeof(uint16_t)",&_LC12,2,2),
                  iVar1 != 0 &&
                  (iVar1 = test_size_t_eq("test/sanitytest.c",0x56,"sizeof(int32_t)",&_LC15,4,4),
                  iVar1 != 0)) &&
                 ((iVar1 = test_size_t_eq("test/sanitytest.c",0x57,"sizeof(uint32_t)",&_LC15,4,4),
                  iVar1 != 0 &&
                  ((iVar1 = test_size_t_eq("test/sanitytest.c",0x58,"sizeof(int64_t)",&_LC18,8,8),
                   iVar1 != 0 &&
                   (iVar1 = test_size_t_eq("test/sanitytest.c",0x59,"sizeof(uint64_t)",&_LC18,8,8),
                   iVar1 != 0)))))))) &&
     ((iVar1 = test_size_t_eq("test/sanitytest.c",0x5b,"sizeof(int128_t)",&_LC21,0x10,0x10),
      iVar1 != 0 &&
      (((((iVar1 = test_size_t_eq("test/sanitytest.c",0x5c,"sizeof(uint128_t)",&_LC21,0x10,0x10),
          iVar1 != 0 &&
          (iVar1 = test_size_t_eq("test/sanitytest.c",0x5e,"sizeof(char)",&_LC0,1,1), iVar1 != 0))
         && (iVar1 = test_size_t_eq("test/sanitytest.c",0x5f,"sizeof(unsigned char)",&_LC0,1,1),
            iVar1 != 0)) &&
        ((iVar1 = test_size_t_ge("test/sanitytest.c",99,"sizeof(long long int)",&_LC18,8,8),
         iVar1 != 0 &&
         (iVar1 = test_size_t_ge("test/sanitytest.c",100,"sizeof(unsigned long long int)",&_LC18,8,8
                                ), iVar1 != 0)))) &&
       ((iVar1 = test_size_t_ge("test/sanitytest.c",0x6c,"sizeof(ossl_intmax_t)",&_LC18,8,8),
        iVar1 != 0 &&
        (iVar1 = test_size_t_ge("test/sanitytest.c",0x6d,"sizeof(ossl_uintmax_t)",&_LC18,8,8),
        iVar1 != 0)))))))) {
    iVar1 = test_size_t_ge("test/sanitytest.c",0x6e,"sizeof(ossl_uintmax_t)","sizeof(size_t)",8,8);
    return iVar1 != 0;
  }
  return false;
}



ulong test_sanity_unsigned_conversion(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = test_int_eq("test/sanitytest.c",0x49,"(int)((unsigned int)INT_MAX + 1)","INT_MIN",
                      0x80000000,0x80000000);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = test_long_eq("test/sanitytest.c",0x4a,"(long)((unsigned long)LONG_MAX + 1)","LONG_MIN",
                       0x8000000000000000);
  return (ulong)(iVar1 != 0);
}



ulong test_sanity_sign(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = test_int_eq("test/sanitytest.c",0x40,"-(INT_MIN + 1)","INT_MAX",0x7fffffff,0x7fffffff);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = test_long_eq("test/sanitytest.c",0x41,"-(LONG_MIN + 1)","LONG_MAX",0x7fffffffffffffff);
  return (ulong)(iVar1 != 0);
}



ulong test_sanity_twos_complement(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = test_int_eq("test/sanitytest.c",0x37,"~(-1)",&_LC39,0,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = test_long_eq("test/sanitytest.c",0x38,"~(-1L)",&_LC41,0,0);
  return (ulong)(iVar1 != 0);
}



void test_sanity_null_zero(void)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  local_18 = 0;
  test_mem_eq("test/sanitytest.c",0x18,&_LC44,"bytes",&local_20,8,&local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_sanity_null_zero",test_sanity_null_zero);
  add_test("test_sanity_enum_size",test_sanity_enum_size);
  add_test("test_sanity_twos_complement",test_sanity_twos_complement);
  add_test("test_sanity_sign",test_sanity_sign);
  add_test("test_sanity_unsigned_conversion",test_sanity_unsigned_conversion);
  add_test("test_sanity_range",test_sanity_range);
  add_test("test_sanity_memcmp",test_sanity_memcmp);
  add_test("test_sanity_sleep",0x100000);
  return 1;
}


