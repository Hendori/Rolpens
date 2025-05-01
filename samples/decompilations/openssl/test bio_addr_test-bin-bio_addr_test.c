
uint test_bio_addr_copy_dup(uint param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  void *__s2;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  void *local_d8;
  size_t local_c8;
  size_t local_c0;
  undefined1 local_b6 [2];
  undefined1 local_b4 [4];
  undefined1 local_b0 [112];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *(int *)(families + (long)((int)param_1 >> 1) * 4);
  if (iVar4 == 2) {
    uVar7 = 0x6c;
    uVar10 = 4;
    puVar9 = local_b4;
LAB_00100090:
    __memset_chk(puVar9,0x61,uVar10,uVar7);
    lVar6 = BIO_ADDR_new();
    iVar5 = test_ptr("test/bio_addr_test.c",0x46,&_LC2,lVar6);
    if (iVar5 == 0) goto LAB_00100071;
    iVar4 = BIO_ADDR_rawmake(lVar6,iVar4,puVar9,uVar10,1000);
    iVar4 = test_true("test/bio_addr_test.c",0x49,
                      "BIO_ADDR_rawmake(addr, family, where, wherelen, 1000)",iVar4 != 0);
    lVar8 = lVar6;
    if (iVar4 == 0) {
      lVar8 = 0;
      BIO_ADDR_free(lVar6);
    }
  }
  else {
    if (iVar4 == 10) {
      uVar7 = 0x68;
      uVar10 = 0x10;
      puVar9 = local_b0;
      goto LAB_00100090;
    }
    if (iVar4 == 1) {
      uVar7 = 0x6e;
      uVar10 = 0x6b;
      puVar9 = local_b6;
      goto LAB_00100090;
    }
    test_error("test/bio_addr_test.c",0x3c,"Unsupported address family");
LAB_00100071:
    lVar8 = 0;
  }
  uVar3 = test_ptr("test/bio_addr_test.c",0x8d,&_LC4,lVar8);
  if (uVar3 == 0) goto LAB_001001e7;
  if ((param_1 & 1) == 0) {
    lVar6 = BIO_ADDR_dup(lVar8);
    uVar3 = test_ptr("test/bio_addr_test.c",0x99,&_LC5,lVar6);
    if (uVar3 != 0) {
LAB_00100189:
      if (lVar6 == lVar8) {
LAB_00100280:
        uVar3 = 1;
      }
      else {
        if ((lVar8 != 0) && (lVar6 != 0)) {
          iVar4 = BIO_ADDR_family(lVar8);
          iVar5 = BIO_ADDR_family(lVar6);
          if (iVar4 == iVar5) {
            sVar1 = BIO_ADDR_rawport(lVar8);
            sVar2 = BIO_ADDR_rawport(lVar6);
            if (sVar1 == sVar2) {
              iVar4 = BIO_ADDR_rawaddress(lVar8,0,&local_c8);
              if (iVar4 != 0) {
                iVar4 = BIO_ADDR_rawaddress(lVar6,0,&local_c0);
                if (iVar4 == 0) {
                  local_d8 = (void *)0x0;
                  __s2 = (void *)0x0;
                  uVar3 = 0;
                }
                else {
                  if (local_c8 != local_c0) goto LAB_001001b8;
                  if (local_c8 == 0) goto LAB_00100280;
                  __s2 = (void *)0x0;
                  local_d8 = CRYPTO_malloc((int)local_c8,"test/bio_addr_test.c",0x72);
                  uVar3 = test_ptr("test/bio_addr_test.c",0x73,"adata",local_d8);
                  if ((uVar3 != 0) &&
                     (uVar3 = BIO_ADDR_rawaddress(lVar8,local_d8,&local_c8), uVar3 != 0)) {
                    __s2 = CRYPTO_malloc((int)local_c0,"test/bio_addr_test.c",0x77);
                    uVar3 = test_ptr("test/bio_addr_test.c",0x78,"bdata",__s2);
                    if ((uVar3 != 0) &&
                       (uVar3 = BIO_ADDR_rawaddress(lVar6,__s2,&local_c0), uVar3 != 0)) {
                      iVar4 = memcmp(local_d8,__s2,local_c8);
                      uVar3 = (uint)(iVar4 == 0);
                    }
                  }
                }
                CRYPTO_free(local_d8);
                CRYPTO_free(__s2);
                goto LAB_001001ba;
              }
            }
          }
        }
LAB_001001b8:
        uVar3 = 0;
      }
LAB_001001ba:
      iVar4 = test_true("test/bio_addr_test.c",0x9d,"bio_addr_is_eq(src, dst)",uVar3);
      uVar3 = (uint)(iVar4 != 0);
    }
  }
  else {
    lVar6 = BIO_ADDR_new();
    iVar4 = test_ptr("test/bio_addr_test.c",0x92,&_LC5,lVar6);
    if (iVar4 != 0) {
      iVar4 = BIO_ADDR_copy(lVar6,lVar8);
      iVar4 = test_true("test/bio_addr_test.c",0x95,"BIO_ADDR_copy(dst, src)",iVar4 != 0);
      if (iVar4 != 0) goto LAB_00100189;
    }
    uVar3 = 0;
  }
  BIO_ADDR_free(lVar8);
  BIO_ADDR_free(lVar6);
LAB_001001e7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 != 0) {
    add_all_tests("test_bio_addr_copy_dup",0x100000,6,1);
    return 1;
  }
  test_error("test/bio_addr_test.c",0xaa,"Error parsing test options\n");
  return 0;
}


