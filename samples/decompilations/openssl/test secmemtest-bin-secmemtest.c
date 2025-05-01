
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_sec_mem_clear(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  iVar2 = CRYPTO_secure_malloc_init(0x1000,0x20);
  puVar3 = (undefined8 *)0x0;
  iVar2 = test_true("test/secmemtest.c",0x8f,"CRYPTO_secure_malloc_init(4096, 32)",iVar2 != 0);
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)CRYPTO_secure_malloc(0x40,"test/secmemtest.c",0x90);
    iVar2 = test_ptr("test/secmemtest.c",0x90,"p = OPENSSL_secure_malloc(size)",puVar3);
    if (iVar2 == 0) {
LAB_001000e7:
      iVar2 = 0;
    }
    else {
      puVar4 = puVar3;
      do {
        iVar2 = test_uchar_eq("test/secmemtest.c",0x94,&_LC4,&_LC3,*(undefined1 *)puVar4,0);
        uVar1 = _UNK_001009d8;
        if (iVar2 == 0) goto LAB_001000e7;
        puVar4 = (undefined8 *)((long)puVar4 + 1);
      } while (puVar4 != puVar3 + 8);
      puVar4 = puVar3 + 2;
      *puVar3 = __LC5;
      puVar3[1] = uVar1;
      uVar1 = _UNK_001009e8;
      *puVar4 = __LC6;
      puVar3[3] = uVar1;
      uVar1 = _UNK_001009f8;
      puVar3[4] = __LC7;
      puVar3[5] = uVar1;
      uVar1 = _UNK_00100a08;
      puVar3[6] = __LC8;
      puVar3[7] = uVar1;
      CRYPTO_secure_free(puVar3,"test/secmemtest.c",0x9a);
      do {
        iVar2 = test_uchar_eq("test/secmemtest.c",0xa4,&_LC4,&_LC3,*(undefined1 *)puVar4,0);
        if (iVar2 == 0) {
          return 0;
        }
        puVar4 = (undefined8 *)((long)puVar4 + 1);
      } while (puVar4 != puVar3 + 8);
      iVar2 = 1;
      puVar3 = (undefined8 *)0x0;
    }
  }
  CRYPTO_secure_free(puVar3,"test/secmemtest.c",0xaa);
  CRYPTO_secure_malloc_done();
  return iVar2;
}



int test_sec_mem(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *ptr;
  
  test_info("test/secmemtest.c",0x15,"Secure memory is implemented.");
  uVar2 = CRYPTO_secure_malloc(0x14,"test/secmemtest.c",0x17);
  iVar1 = test_ptr("test/secmemtest.c",0x19,&_LC10,uVar2);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar3 = 0;
    ptr = (void *)0x0;
    uVar4 = 0;
    goto LAB_001001ee;
  }
  iVar1 = CRYPTO_secure_allocated(uVar2);
  iVar1 = test_false("test/secmemtest.c",0x1a,"CRYPTO_secure_allocated(s)",iVar1 != 0);
  if (iVar1 == 0) {
    uVar3 = 0;
    ptr = (void *)0x0;
    uVar4 = 0;
    iVar1 = 0;
    goto LAB_001001ee;
  }
  uVar3 = CRYPTO_secure_malloc(0x14,"test/secmemtest.c",0x1c);
  iVar1 = test_ptr("test/secmemtest.c",0x1e,&_LC12,uVar3);
  if (iVar1 == 0) {
LAB_0010029a:
    ptr = (void *)0x0;
    uVar4 = 0;
  }
  else {
    iVar1 = CRYPTO_secure_malloc_init(0x1000,0x20);
    iVar1 = test_true("test/secmemtest.c",0x1f,"CRYPTO_secure_malloc_init(4096, 32)",iVar1 != 0);
    if (iVar1 == 0) {
      ptr = (void *)0x0;
      uVar4 = 0;
      iVar1 = 0;
      goto LAB_001001ee;
    }
    iVar1 = CRYPTO_secure_allocated(uVar3);
    iVar1 = test_false("test/secmemtest.c",0x20,"CRYPTO_secure_allocated(r)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_0010029a;
    uVar4 = CRYPTO_secure_malloc(0x14,"test/secmemtest.c",0x22);
    iVar1 = test_ptr("test/secmemtest.c",0x23,&_LC14,uVar4);
    if (iVar1 == 0) {
LAB_0010034f:
      ptr = (void *)0x0;
      iVar1 = 0;
      goto LAB_001001ee;
    }
    iVar1 = CRYPTO_secure_allocated(uVar4);
    ptr = (void *)0x0;
    iVar1 = test_true("test/secmemtest.c",0x25,"CRYPTO_secure_allocated(p)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001001ee;
    uVar5 = CRYPTO_secure_used();
    iVar1 = test_size_t_eq("test/secmemtest.c",0x27,"CRYPTO_secure_used()",&_LC16,uVar5,0x20);
    if (iVar1 == 0) goto LAB_0010034f;
    ptr = CRYPTO_malloc(0x14,"test/secmemtest.c",0x29);
    iVar1 = test_ptr("test/secmemtest.c",0x2a,&_LC18,ptr);
    if (iVar1 == 0) goto LAB_001001ee;
    iVar1 = CRYPTO_secure_allocated(ptr);
    iVar1 = test_false("test/secmemtest.c",0x2d,"CRYPTO_secure_allocated(q)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001001ee;
    CRYPTO_secure_clear_free(uVar2,0x14,"test/secmemtest.c",0x2f);
    uVar2 = CRYPTO_secure_malloc(0x14,"test/secmemtest.c",0x30);
    iVar1 = test_ptr("test/secmemtest.c",0x31,&_LC10,uVar2);
    if (iVar1 != 0) {
      iVar1 = CRYPTO_secure_allocated(uVar2);
      iVar1 = test_true("test/secmemtest.c",0x33,"CRYPTO_secure_allocated(s)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_001001ee;
      uVar5 = CRYPTO_secure_used();
      iVar1 = test_size_t_eq("test/secmemtest.c",0x35,"CRYPTO_secure_used()",&_LC20,uVar5,0x40);
      if (iVar1 != 0) {
        CRYPTO_secure_clear_free(uVar4,0x14,"test/secmemtest.c",0x37);
        uVar4 = CRYPTO_secure_used();
        iVar1 = test_size_t_eq("test/secmemtest.c",0x3a,"CRYPTO_secure_used()",&_LC16,uVar4,0x20);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_001001ee;
        CRYPTO_free(ptr);
        iVar1 = CRYPTO_secure_malloc_done();
        ptr = (void *)0x0;
        iVar1 = test_false("test/secmemtest.c",0x3f,"CRYPTO_secure_malloc_done()",iVar1 != 0);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_001001ee;
        iVar1 = CRYPTO_secure_malloc_initialized();
        iVar1 = test_true("test/secmemtest.c",0x40,"CRYPTO_secure_malloc_initialized()",iVar1 != 0);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_001001ee;
        CRYPTO_secure_free(uVar2,"test/secmemtest.c",0x42);
        uVar2 = CRYPTO_secure_used();
        iVar1 = test_size_t_eq("test/secmemtest.c",0x45,"CRYPTO_secure_used()",&_LC3,uVar2,0);
        if (iVar1 != 0) {
          iVar1 = CRYPTO_secure_malloc_done();
          iVar1 = test_true("test/secmemtest.c",0x46,"CRYPTO_secure_malloc_done()",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = CRYPTO_secure_malloc_initialized();
            iVar1 = test_false("test/secmemtest.c",0x47,"CRYPTO_secure_malloc_initialized()",
                               iVar1 != 0);
            if (iVar1 != 0) {
              test_info("test/secmemtest.c",0x4a,
                        "Possible infinite loop: allocate more than available");
              iVar1 = CRYPTO_secure_malloc_init(0x8000,0x10);
              iVar1 = test_true("test/secmemtest.c",0x4b,"CRYPTO_secure_malloc_init(32768, 16)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                uVar2 = CRYPTO_secure_malloc(0xffffffffffffffff,"test/secmemtest.c",0x4d);
                test_ptr_null("test/secmemtest.c",0x4d,"OPENSSL_secure_malloc((size_t)-1)",uVar2);
                iVar1 = CRYPTO_secure_malloc_done();
                test_true("test/secmemtest.c",0x4e,"CRYPTO_secure_malloc_done()",iVar1 != 0);
                iVar1 = CRYPTO_secure_malloc_init(0x10,0x10);
                iVar1 = test_false("test/secmemtest.c",0x54,"CRYPTO_secure_malloc_init(16, 16)",
                                   iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = CRYPTO_secure_malloc_initialized();
                  iVar1 = test_false("test/secmemtest.c",0x55,"CRYPTO_secure_malloc_initialized()",
                                     iVar1 != 0);
                  if (iVar1 == 0) {
                    iVar1 = CRYPTO_secure_malloc_done();
                    uVar2 = 0;
                    test_true("test/secmemtest.c",0x56,"CRYPTO_secure_malloc_done()",iVar1 != 0);
                    goto LAB_0010029a;
                  }
                }
                uVar2 = 0;
                ptr = (void *)0x0;
                uVar4 = 0;
                iVar1 = 1;
                goto LAB_001001ee;
              }
            }
          }
        }
        uVar2 = 0;
        goto LAB_0010029a;
      }
    }
  }
  iVar1 = 0;
LAB_001001ee:
  CRYPTO_secure_free(uVar4,"test/secmemtest.c",0x7c);
  CRYPTO_free(ptr);
  CRYPTO_secure_free(uVar3,"test/secmemtest.c",0x7e);
  CRYPTO_secure_free(uVar2,"test/secmemtest.c",0x7f);
  return iVar1;
}



undefined8 setup_tests(void)

{
  add_test("test_sec_mem",test_sec_mem);
  add_test("test_sec_mem_clear",0x100000);
  return 1;
}


