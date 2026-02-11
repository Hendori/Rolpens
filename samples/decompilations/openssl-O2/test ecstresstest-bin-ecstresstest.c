
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_curve(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  EC_GROUP *group;
  EC_POINT *pEVar4;
  BIGNUM *m;
  long lVar5;
  long in_FS_OFFSET;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  group = EC_GROUP_new_by_curve_name(0x19f);
  iVar2 = test_ptr("test/ecstresstest.c",0x4e,
                   "group = EC_GROUP_new_by_curve_name(NID_X9_62_prime256v1)",group);
  if (iVar2 == 0) {
    uVar3 = 0;
    m = (BIGNUM *)0x0;
    pEVar4 = (EC_POINT *)0x0;
    goto LAB_00100061;
  }
  m = (BIGNUM *)0x0;
  pEVar4 = EC_GROUP_get0_generator(group);
  pEVar4 = EC_POINT_dup(pEVar4,group);
  uVar3 = test_ptr("test/ecstresstest.c",0x4f,
                   "point = EC_POINT_dup(EC_GROUP_get0_generator(group), group)",pEVar4);
  lVar1 = num_repeats;
  if (uVar3 == 0) goto LAB_00100061;
  m = BN_new();
  iVar2 = test_ptr("test/ecstresstest.c",0x30,"scalar = BN_new()",m);
  if (iVar2 == 0) {
LAB_001001d0:
    BN_free(m);
    m = (BIGNUM *)0x0;
  }
  else {
    iVar2 = EC_POINT_get_affine_coordinates(group,pEVar4,m,0,0);
    iVar2 = test_true("test/ecstresstest.c",0x31,
                      "EC_POINT_get_affine_coordinates(group, point, scalar, NULL, NULL)",iVar2 != 0
                     );
    if (iVar2 == 0) goto LAB_001001d0;
    if (0 < lVar1) {
      lVar5 = 0;
      do {
        iVar2 = EC_POINT_mul(group,pEVar4,(BIGNUM *)0x0,pEVar4,m,(BN_CTX *)0x0);
        iVar2 = test_true("test/ecstresstest.c",0x36,
                          "EC_POINT_mul(group, point, NULL, point, scalar, NULL)",iVar2 != 0);
        if (iVar2 == 0) goto LAB_001001d0;
        iVar2 = EC_POINT_get_affine_coordinates(group,pEVar4,m,0,0);
        iVar2 = test_true("test/ecstresstest.c",0x37,
                          "EC_POINT_get_affine_coordinates(group, point, scalar, NULL, NULL)",
                          iVar2 != 0);
        if (iVar2 == 0) goto LAB_001001d0;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
    }
  }
  iVar2 = test_ptr("test/ecstresstest.c",0x51,"result = walk_curve(group, point, num_repeats)",m);
  if (iVar2 != 0) {
    if (print_mode != 0) {
      uVar3 = 1;
      BN_print(_bio_out,m);
      BIO_printf(_bio_out,"\n");
      goto LAB_00100061;
    }
    iVar2 = BN_hex2bn(&local_48,"A1E24B223B8E81BC1FFF99BAFB909EDB895FACDE7D6DA5EF5E7B3255FB378E0F");
    iVar2 = test_true("test/ecstresstest.c",0x59,"BN_hex2bn(&expected_result, kP256DefaultResult)",
                      iVar2 != 0);
    if (iVar2 != 0) {
      uVar3 = test_ptr("test/ecstresstest.c",0x5a,"expected_result",local_48);
      if (uVar3 != 0) {
        iVar2 = test_BN_eq("test/ecstresstest.c",0x5b,"result","expected_result",m,local_48);
        uVar3 = (uint)(iVar2 != 0);
      }
      goto LAB_00100061;
    }
  }
  uVar3 = 0;
LAB_00100061:
  EC_GROUP_free(group);
  EC_POINT_free(pEVar4);
  BN_free(m);
  BN_free(local_48);
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
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = opt_intmax("1000000",&num_repeats);
  if (iVar1 == 0) {
    test_error("test/ecstresstest.c",0x84,"Cannot parse 1000000");
  }
  else {
    do {
      while( true ) {
        iVar1 = opt_next();
        if (iVar1 == 0) {
          add_test("test_curve",0x100000);
          return 1;
        }
        if (iVar1 != 1) break;
        uVar2 = opt_arg();
        iVar1 = opt_intmax(uVar2,&num_repeats);
        if (iVar1 == 0) {
          return 0;
        }
        if (num_repeats < 0) {
          return 0;
        }
        print_mode = 1;
      }
    } while (iVar1 - 500U < 6);
  }
  return 0;
}


