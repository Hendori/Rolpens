
undefined1 * construct_api_params(void)

{
  long in_FS_OFFSET;
  undefined8 local_48 [7];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  OSSL_PARAM_construct_int(local_48,&_LC0,&app_p1);
  params_0._0_8_ = local_48[0];
  params_0._8_8_ = local_48[1];
  params_0._16_8_ = local_48[2];
  params_0._24_8_ = local_48[3];
  params_0._32_8_ = local_48[4];
  OSSL_PARAM_construct_BN(local_48,&_LC1,bignumbin,0x1000);
  params_0._40_8_ = local_48[0];
  params_0._48_8_ = local_48[1];
  params_0._56_8_ = local_48[2];
  params_0._64_8_ = local_48[3];
  params_0._72_8_ = local_48[4];
  OSSL_PARAM_construct_utf8_string(local_48,&_LC2,app_p4,0x100);
  params_0._80_8_ = local_48[0];
  params_0._88_8_ = local_48[1];
  params_0._96_8_ = local_48[2];
  params_0._104_8_ = local_48[3];
  params_0._112_8_ = local_48[4];
  OSSL_PARAM_construct_utf8_string(local_48,&_LC3,app_p5,0x100);
  params_0._120_8_ = local_48[0];
  params_0._128_8_ = local_48[1];
  params_0._136_8_ = local_48[2];
  params_0._144_8_ = local_48[3];
  params_0._152_8_ = local_48[4];
  OSSL_PARAM_construct_utf8_ptr(local_48,&_LC4,&app_p6,7);
  params_0._160_8_ = local_48[0];
  params_0._168_8_ = local_48[1];
  params_0._192_8_ = local_48[4];
  params_0._176_8_ = local_48[2];
  params_0._184_8_ = local_48[3];
  OSSL_PARAM_construct_octet_string(local_48,&_LC5,&foo,1);
  params_0._232_8_ = local_48[4];
  params_0._200_8_ = local_48[0];
  params_0._208_8_ = local_48[1];
  params_0._216_8_ = local_48[2];
  params_0._224_8_ = local_48[3];
  OSSL_PARAM_construct_end(local_48);
  params_0._272_8_ = local_48[4];
  params_0._240_8_ = local_48[0];
  params_0._248_8_ = local_48[1];
  params_0._256_8_ = local_48[2];
  params_0._264_8_ = local_48[3];
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return params_0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool api_get_params(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_int(lVar2,*param_1);
    iVar1 = test_true("test/params_test.c",0xfb,"OSSL_PARAM_set_int(p, obj->p1)",iVar1 != 0);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC6);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_double(*(undefined8 *)(param_1 + 2),lVar2);
    iVar1 = test_true("test/params_test.c",0xfe,"OSSL_PARAM_set_double(p, obj->p2)",iVar1 != 0);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC1);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_BN(lVar2,*(undefined8 *)(param_1 + 4));
    iVar1 = test_true("test/params_test.c",0x101,"OSSL_PARAM_set_BN(p, obj->p3)",iVar1 != 0);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC2);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,*(undefined8 *)(param_1 + 6));
    iVar1 = test_true("test/params_test.c",0x104,"OSSL_PARAM_set_utf8_string(p, obj->p4)",iVar1 != 0
                     );
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC3);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,param_1 + 10);
    iVar1 = test_true("test/params_test.c",0x107,"OSSL_PARAM_set_utf8_string(p, obj->p5)",iVar1 != 0
                     );
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC4);
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_utf8_ptr(lVar2,*(undefined8 *)(param_1 + 0x4c));
  iVar1 = test_true("test/params_test.c",0x10a,"OSSL_PARAM_set_utf8_ptr(p, obj->p6)",iVar1 != 0);
  return iVar1 != 0;
}



undefined8 api_set_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const(param_2,&_LC0);
  if (lVar2 == 0) {
LAB_0010043a:
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC6);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_double(lVar2,param_1 + 8);
      iVar1 = test_true("test/params_test.c",0xda,"OSSL_PARAM_get_double(p, &obj->p2)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_001005f0;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_BN(lVar2,param_1 + 0x10);
      iVar1 = test_true("test/params_test.c",0xdd,"OSSL_PARAM_get_BN(p, &obj->p3)",iVar1 != 0);
      if (iVar1 == 0) goto LAB_001005f0;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC2);
    if (lVar2 != 0) {
      CRYPTO_free(*(void **)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
      iVar1 = OSSL_PARAM_get_utf8_string(lVar2,param_1 + 0x18,0);
      iVar1 = test_true("test/params_test.c",0xe3,"OSSL_PARAM_get_utf8_string(p, &obj->p4, 0)",
                        iVar1 != 0);
      if (iVar1 == 0) goto LAB_001005f0;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC3);
    if (lVar2 != 0) {
      local_38 = (char *)(param_1 + 0x28);
      iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_38,0x100);
      iVar1 = test_true("test/params_test.c",0xe8,
                        "OSSL_PARAM_get_utf8_string(p, &p5_ptr, sizeof(obj->p5))",iVar1 != 0);
      if (iVar1 == 0) goto LAB_001005f0;
      sVar3 = strlen((char *)(param_1 + 0x28));
      *(size_t *)(param_1 + 0x128) = sVar3;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC4);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_utf8_ptr(lVar2,param_1 + 0x130);
      iVar1 = test_true("test/params_test.c",0xed,"OSSL_PARAM_get_utf8_ptr(p, &obj->p6)",iVar1 != 0)
      ;
      if (iVar1 == 0) goto LAB_001005f0;
      sVar3 = strlen(*(char **)(param_1 + 0x130));
      *(size_t *)(param_1 + 0x138) = sVar3;
    }
    uVar4 = 1;
  }
  else {
    iVar1 = OSSL_PARAM_get_int(lVar2,param_1);
    iVar1 = test_true("test/params_test.c",0xd7,"OSSL_PARAM_get_int(p, &obj->p1)",iVar1 != 0);
    if (iVar1 != 0) goto LAB_0010043a;
LAB_001005f0:
    uVar4 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 raw_get_params(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  
  pcVar5 = (char *)*param_2;
  if (pcVar5 == (char *)0x0) {
    return 1;
  }
  do {
    if (*pcVar5 == 'p') {
      if ((pcVar5[1] == '1') && (pcVar5[2] == '\0')) {
        uVar2 = *param_1;
        param_2[4] = 4;
        *(undefined4 *)param_2[2] = uVar2;
        pcVar5 = (char *)param_2[5];
      }
      else if ((pcVar5[1] == '2') && (pcVar5[2] == '\0')) {
        uVar1 = *(undefined8 *)(param_1 + 2);
        param_2[4] = 8;
        *(undefined8 *)param_2[2] = uVar1;
        pcVar5 = (char *)param_2[5];
      }
      else if ((pcVar5[1] == '3') && (pcVar5[2] == '\0')) {
        iVar3 = BN_num_bits(*(BIGNUM **)(param_1 + 4));
        iVar4 = iVar3 + 0xe;
        if (-1 < iVar3 + 7) {
          iVar4 = iVar3 + 7;
        }
        param_2[4] = (long)(iVar4 >> 3);
        iVar4 = test_size_t_ge("test/params_test.c",0xb8,"params->data_size","params->return_size",
                               param_2[3]);
        if (iVar4 == 0) {
          return 0;
        }
        BN_bn2nativepad(*(undefined8 *)(param_1 + 4),param_2[2],*(undefined4 *)(param_2 + 4));
        pcVar5 = (char *)param_2[5];
      }
      else if ((pcVar5[1] == '4') && (pcVar5[2] == '\0')) {
        sVar6 = strlen(*(char **)(param_1 + 6));
        param_2[4] = sVar6;
        iVar4 = test_size_t_gt("test/params_test.c",0xbd,"params->data_size","params->return_size",
                               param_2[3],sVar6);
        if (iVar4 == 0) {
          return 0;
        }
        strcpy((char *)param_2[2],*(char **)(param_1 + 6));
        pcVar5 = (char *)param_2[5];
      }
      else {
        if ((pcVar5[1] != '5') || (pcVar5[2] != '\0')) {
          if ((pcVar5[1] == '6') && (pcVar5[2] == '\0')) {
            pcVar5 = *(char **)(param_1 + 0x4c);
            sVar6 = strlen(pcVar5);
            param_2[4] = sVar6;
            *(char **)param_2[2] = pcVar5;
          }
          goto LAB_001006f0;
        }
        sVar6 = strlen((char *)(param_1 + 10));
        param_2[4] = sVar6;
        iVar4 = test_size_t_gt("test/params_test.c",0xc2,"params->data_size","params->return_size",
                               param_2[3],sVar6);
        if (iVar4 == 0) {
          return 0;
        }
        strcpy((char *)param_2[2],(char *)(param_1 + 10));
        pcVar5 = (char *)param_2[5];
      }
    }
    else {
LAB_001006f0:
      pcVar5 = (char *)param_2[5];
    }
    param_2 = param_2 + 5;
    if (pcVar5 == (char *)0x0) {
      return 1;
    }
  } while( true );
}



undefined8 raw_set_params(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  
  pcVar5 = (char *)*param_2;
  if (pcVar5 == (char *)0x0) {
    return 1;
  }
  do {
    while( true ) {
      if (*pcVar5 != 'p') goto LAB_00100980;
      if ((pcVar5[1] != '1') || (pcVar5[2] != '\0')) break;
      *param_1 = *(undefined4 *)param_2[2];
      pcVar5 = (char *)param_2[5];
joined_r0x001009f2:
      param_2 = param_2 + 5;
      if (pcVar5 == (char *)0x0) {
        return 1;
      }
    }
    if ((pcVar5[1] == '2') && (pcVar5[2] == '\0')) {
      pcVar5 = (char *)param_2[5];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_2[2];
      goto joined_r0x001009f2;
    }
    if ((pcVar5[1] == '3') && (pcVar5[2] == '\0')) {
      BN_free(*(BIGNUM **)(param_1 + 4));
      uVar3 = BN_native2bn(param_2[2],*(undefined4 *)(param_2 + 3),0);
      *(undefined8 *)(param_1 + 4) = uVar3;
      iVar2 = test_ptr("test/params_test.c",0x8d,
                       "obj->p3 = BN_native2bn(params->data, params->data_size, NULL)",uVar3);
      if (iVar2 == 0) {
        return 0;
      }
LAB_00100980:
      pcVar5 = (char *)param_2[5];
      goto joined_r0x001009f2;
    }
    if ((pcVar5[1] == '4') && (pcVar5[2] == '\0')) {
      CRYPTO_free(*(void **)(param_1 + 6));
      uVar3 = CRYPTO_strndup(param_2[2],param_2[3],"test/params_test.c",0x92);
      *(undefined8 *)(param_1 + 6) = uVar3;
      iVar2 = test_ptr("test/params_test.c",0x92,
                       "obj->p4 = OPENSSL_strndup(params->data, params->data_size)",uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      sVar6 = strlen(*(char **)(param_1 + 6));
      *(size_t *)(param_1 + 8) = sVar6;
      pcVar5 = (char *)param_2[5];
      goto joined_r0x001009f2;
    }
    if ((pcVar5[1] != '5') || (pcVar5[2] != '\0')) {
      if ((pcVar5[1] == '6') && (pcVar5[2] == '\0')) {
        *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)param_2[2];
        *(undefined8 *)(param_1 + 0x4e) = param_2[3];
      }
      goto LAB_00100980;
    }
    lVar4 = OPENSSL_strnlen(param_2[2],param_2[3]);
    iVar2 = test_size_t_lt("test/params_test.c",0x9e,"data_length","sizeof(obj->p5)",lVar4,0x100);
    if (iVar2 == 0) {
      return 0;
    }
    puVar1 = param_2 + 2;
    param_2 = param_2 + 5;
    pcVar5 = (char *)__strncpy_chk(param_1 + 10,*puVar1,lVar4,0x100);
    *(undefined1 *)((long)param_1 + lVar4 + 0x28) = 0;
    sVar6 = strlen(pcVar5);
    *(size_t *)(param_1 + 0x4a) = sVar6;
    pcVar5 = (char *)*param_2;
    if (pcVar5 == (char *)0x0) {
      return 1;
    }
  } while( true );
}



bool test_more_allocate_from_text(void)

{
  int iVar1;
  size_t sVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pcVar5 = "";
  iVar4 = 0;
  puVar3 = values_1;
  sVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    ERR_clear_error();
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = 0;
    if ((sVar2 & 1) == 0) {
      iVar1 = OSSL_PARAM_allocate_from_text(local_68,params_from_text,"hexoctets",pcVar5,0,0);
      iVar1 = test_true("test/params_test.c",0x2a4,
                        "OSSL_PARAM_allocate_from_text(&param, params_from_text, \"hexoctets\", values[i], 0, NULL)"
                        ,iVar1 != 0);
      if (iVar1 == 0) {
        pcVar5 = "failure";
        goto LAB_00100bc3;
      }
    }
    else {
      iVar1 = OSSL_PARAM_allocate_from_text(local_68,params_from_text,"hexoctets",pcVar5,0,0);
      iVar1 = test_false("test/params_test.c",0x2aa,
                         "OSSL_PARAM_allocate_from_text(&param, params_from_text, \"hexoctets\", values[i], 0, NULL)"
                         ,iVar1 != 0);
      if (iVar1 == 0) {
        pcVar5 = "success";
LAB_00100bc3:
        iVar4 = iVar4 + 1;
        test_error("test/params_test.c",0x2af,
                   "unexpected OSSL_PARAM_allocate_from_text() %s for \'octets\' \"%s\"",pcVar5);
      }
    }
    puVar3 = (undefined1 *)((long)puVar3 + 8);
    CRYPTO_free((void *)local_58._0_8_);
    pcVar5 = *(char **)puVar3;
    if (pcVar5 == (char *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar4 == 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    sVar2 = strlen(pcVar5);
  } while( true );
}



uint test_allocate_from_text(int param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  long local_70;
  undefined1 local_68 [16];
  void *local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  lVar1 = (long)param_1 * 0x28;
  uVar3 = *(undefined8 *)(int_from_text_test_cases + lVar1);
  uVar4 = *(undefined8 *)(int_from_text_test_cases + lVar1 + 8);
  lVar5 = *(long *)(int_from_text_test_cases + lVar1 + 0x10);
  uVar2 = *(uint *)(int_from_text_test_cases + lVar1 + 0x18);
  uVar6 = *(ulong *)(int_from_text_test_cases + lVar1 + 0x20);
  iVar7 = OSSL_PARAM_allocate_from_text(local_68,params_from_text,uVar3,uVar4,0,0);
  if (iVar7 == 0) {
    if (uVar2 != 0) {
      test_error("test/params_test.c",0x271,
                 "unexpected OSSL_PARAM_allocate_from_text() return for %s \"%s\"",uVar3,uVar4);
    }
    uVar9 = (uint)(uVar2 == 0);
  }
  else if (local_50 == 0) {
    CRYPTO_free(local_58);
    uVar9 = 0;
    test_error("test/params_test.c",0x279,"unexpected zero size for %s \"%s\"",uVar3,uVar4);
  }
  else {
    uVar8 = OSSL_PARAM_get_long(local_68,&local_70);
    CRYPTO_free(local_58);
    if (uVar2 == uVar8) {
      if (lVar5 == local_70) {
        uVar9 = uVar8;
        if (uVar6 != local_50) {
          uVar9 = 0;
          test_error("test/params_test.c",0x28b,"unexpected size for %s \"%s\":  %d != %d",uVar3,
                     uVar4,uVar6 & 0xffffffff,local_50);
        }
      }
      else {
        uVar9 = 0;
        test_error("test/params_test.c",0x286,"unexpected result for %s \"%s\":  %li != %li",uVar3,
                   uVar4,lVar5,local_70);
      }
    }
    else {
      uVar9 = 0;
      test_error("test/params_test.c",0x281,
                 "unexpected OSSL_PARAM_get_long() return for %s \"%s\": %d != %d",uVar3,uVar4,uVar2
                 ,uVar8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void init_app_variables_isra_0(void)

{
  int iVar1;
  
  BN_free(app_p3);
  app_p3 = (BIGNUM *)0x0;
  app_p1 = 0x11;
  app_p2 = _LC37;
  iVar1 = BN_hex2bn(&app_p3,"deadbeef");
  if (iVar1 != 0) {
    iVar1 = BN_bn2nativepad(app_p3,bignumbin,0x1000);
    if (-1 < iVar1) {
      app_p4._0_4_ = 0x6c6c6548;
      app_p4._4_2_ = 0x6f;
      app_p5._0_4_ = 0x6c726f57;
      app_p5._4_2_ = 100;
      app_p6 = "Cookie";
      foo = 0x7a;
      return;
    }
  }
  return;
}



bool test_case_variant(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *ptr;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char cVar5;
  bool bVar6;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  ptr = (undefined4 *)CRYPTO_zalloc(0x140,"test/params_test.c",0x67);
  iVar1 = test_ptr("test/params_test.c",0x67,"obj = OPENSSL_zalloc(sizeof(*obj))",ptr);
  uVar4 = _LC41;
  if (iVar1 == 0) {
LAB_001012ba:
    ptr = (undefined4 *)0x0;
  }
  else {
    *ptr = 0x2a;
    *(undefined8 *)(ptr + 2) = uVar4;
    iVar1 = BN_hex2bn((BIGNUM **)(ptr + 4),
                      "4142434445464748494a4b4c4d4e4f505152535455565758595a6162636465666768696a6b6c6d6e6f707172737475767778797a30313233343536373839"
                     );
    iVar1 = test_true("test/params_test.c",0x6c,"BN_hex2bn(&obj->p3, p3_init)",iVar1 != 0);
    if (iVar1 == 0) {
LAB_00101280:
      BN_free(*(BIGNUM **)(ptr + 4));
      *(undefined8 *)(ptr + 4) = 0;
      CRYPTO_free(*(void **)(ptr + 6));
      *(undefined8 *)(ptr + 6) = 0;
      CRYPTO_free(ptr);
      goto LAB_001012ba;
    }
    pcVar2 = CRYPTO_strdup("BLAKE2s256","test/params_test.c",0x6e);
    *(char **)(ptr + 6) = pcVar2;
    iVar1 = test_ptr("test/params_test.c",0x6e,"obj->p4 = OPENSSL_strdup(p4_init)",pcVar2);
    if (iVar1 == 0) goto LAB_00101280;
    *(undefined8 *)(ptr + 10) = 0x5720776f6c6c6548;
    *(undefined8 *)((long)ptr + 0x2d) = 0x646c726f572077;
    *(char **)(ptr + 0x4c) = "3.5.0";
  }
  iVar1 = test_ptr("test/params_test.c",0x1bf,"obj = init_object()",ptr);
  if (iVar1 != 0) {
    iVar1 = BN_hex2bn(&local_48,
                      "4142434445464748494a4b4c4d4e4f505152535455565758595a6162636465666768696a6b6c6d6e6f707172737475767778797a30313233343536373839"
                     );
    iVar1 = test_true("test/params_test.c",0x1c0,"BN_hex2bn(&verify_p3, p3_init)",iVar1 != 0);
    if (iVar1 != 0) {
      init_app_variables_isra_0();
      iVar1 = (*(code *)param_2[1])(ptr,param_1);
      iVar1 = test_true("test/params_test.c",0x1cb,"prov->get_params(obj, params)",iVar1 != 0);
      if (((iVar1 == 0) ||
          (iVar1 = test_int_eq("test/params_test.c",0x1cc,"app_p1","p1_init",app_p1,0x2a),
          iVar1 == 0)) ||
         (iVar1 = test_double_eq(app_p2,_LC37,"test/params_test.c",0x1cd,"app_p2","app_p2_init"),
         iVar1 == 0)) {
LAB_00101115:
        cVar5 = true;
      }
      else {
        lVar3 = OSSL_PARAM_locate(param_1,&_LC1);
        iVar1 = test_ptr("test/params_test.c",0x1ce,"p = OSSL_PARAM_locate(params, \"p3\")",lVar3);
        if (iVar1 == 0) goto LAB_00101115;
        uVar4 = BN_native2bn(bignumbin,*(undefined4 *)(lVar3 + 0x20),app_p3);
        iVar1 = test_ptr("test/params_test.c",0x1cf,
                         "BN_native2bn(bignumbin, p->return_size, app_p3)",uVar4);
        if (((iVar1 == 0) ||
            (iVar1 = test_BN_eq("test/params_test.c",0x1d0,"app_p3","verify_p3",app_p3,local_48),
            iVar1 == 0)) ||
           (iVar1 = test_str_eq("test/params_test.c",0x1d1,"app_p4","p4_init",app_p4,"BLAKE2s256"),
           iVar1 == 0)) goto LAB_00101115;
        lVar3 = OSSL_PARAM_locate(param_1,&_LC3);
        iVar1 = test_ptr("test/params_test.c",0x1d2,"p = OSSL_PARAM_locate(params, \"p5\")",lVar3);
        if (((iVar1 == 0) ||
            (iVar1 = test_size_t_eq("test/params_test.c",0x1d3,"p->return_size",
                                    "sizeof(p5_init) - 1",*(undefined8 *)(lVar3 + 0x20),0xc),
            iVar1 == 0)) ||
           (iVar1 = test_str_eq("test/params_test.c",0x1d5,"app_p5","p5_init",app_p5,"Hellow World")
           , iVar1 == 0)) goto LAB_00101115;
        lVar3 = OSSL_PARAM_locate(param_1,&_LC4);
        iVar1 = test_ptr("test/params_test.c",0x1d6,"p = OSSL_PARAM_locate(params, \"p6\")",lVar3);
        if ((((iVar1 == 0) ||
             (iVar1 = test_size_t_eq("test/params_test.c",0x1d7,"p->return_size",
                                     "sizeof(p6_init) - 1",*(undefined8 *)(lVar3 + 0x20),5),
             iVar1 == 0)) ||
            (iVar1 = test_str_eq("test/params_test.c",0x1d9,"app_p6","p6_init",app_p6,"3.5.0"),
            iVar1 == 0)) ||
           (iVar1 = test_char_eq("test/params_test.c",0x1da,"foo[0]","app_foo_init",(int)foo,0x7a),
           iVar1 == 0)) goto LAB_00101115;
        uVar4 = OSSL_PARAM_locate(param_1,&_LC5);
        iVar1 = test_ptr("test/params_test.c",0x1db,"p = OSSL_PARAM_locate(params, \"foo\")",uVar4);
        cVar5 = iVar1 == 0;
      }
      init_app_variables_isra_0();
      iVar1 = (*(code *)*param_2)(ptr,param_1);
      iVar1 = test_true("test/params_test.c",0x1e4,"prov->set_params(obj, params)",iVar1 != 0);
      if (((iVar1 == 0) ||
          (iVar1 = test_int_eq("test/params_test.c",0x1e9,"sneakpeek->p1","app_p1",*ptr,app_p1),
          iVar1 == 0)) ||
         ((((iVar1 = test_double_eq(*(undefined8 *)(ptr + 2),_LC41,"test/params_test.c",0x1ea,
                                    "sneakpeek->p2","p2_init"), iVar1 == 0 ||
            ((iVar1 = test_BN_eq("test/params_test.c",0x1eb,"sneakpeek->p3","app_p3",
                                 *(undefined8 *)(ptr + 4),app_p3), iVar1 == 0 ||
             (iVar1 = test_str_eq("test/params_test.c",0x1ec,"sneakpeek->p4","app_p4",
                                  *(undefined8 *)(ptr + 6),app_p4), iVar1 == 0)))) ||
           (iVar1 = test_str_eq("test/params_test.c",0x1ed,"sneakpeek->p5","app_p5",ptr + 10,app_p5)
           , iVar1 == 0)) ||
          (iVar1 = test_str_eq("test/params_test.c",0x1ee,"sneakpeek->p6","app_p6",
                               *(undefined8 *)(ptr + 0x4c),app_p6), iVar1 == 0)))) {
        cVar5 = cVar5 + '\x01';
      }
      BN_free(local_48);
      local_48 = (BIGNUM *)0x0;
      iVar1 = BN_hex2bn(&local_48,"deadbeef");
      iVar1 = test_true("test/params_test.c",0x1f9,"BN_hex2bn(&verify_p3, app_p3_init)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = (*(code *)param_2[1])(ptr,param_1);
        iVar1 = test_true("test/params_test.c",0x1fe,"prov->get_params(obj, params)",iVar1 != 0);
        if (((iVar1 != 0) &&
            (iVar1 = test_int_eq("test/params_test.c",0x1ff,"app_p1","app_p1_init",app_p1,0x11),
            iVar1 != 0)) &&
           (iVar1 = test_double_eq(app_p2,_LC37,"test/params_test.c",0x200,"app_p2","app_p2_init"),
           iVar1 != 0)) {
          lVar3 = OSSL_PARAM_locate(param_1,&_LC1);
          iVar1 = test_ptr("test/params_test.c",0x201,"p = OSSL_PARAM_locate(params, \"p3\")",lVar3)
          ;
          if (iVar1 != 0) {
            uVar4 = BN_native2bn(bignumbin,*(undefined4 *)(lVar3 + 0x20),app_p3);
            iVar1 = test_ptr("test/params_test.c",0x202,
                             "BN_native2bn(bignumbin, p->return_size, app_p3)",uVar4);
            if (((iVar1 != 0) &&
                (iVar1 = test_BN_eq("test/params_test.c",0x203,"app_p3","verify_p3",app_p3,local_48)
                , iVar1 != 0)) &&
               (iVar1 = test_str_eq("test/params_test.c",0x204,"app_p4","app_p4_init",app_p4,"Hello"
                                   ), iVar1 != 0)) {
              lVar3 = OSSL_PARAM_locate(param_1,&_LC3);
              iVar1 = test_ptr("test/params_test.c",0x205,"p = OSSL_PARAM_locate(params, \"p5\")",
                               lVar3);
              if (((iVar1 != 0) &&
                  (iVar1 = test_size_t_eq("test/params_test.c",0x206,"p->return_size",
                                          "sizeof(app_p5_init) - 1",*(undefined8 *)(lVar3 + 0x20),5)
                  , iVar1 != 0)) &&
                 (iVar1 = test_str_eq("test/params_test.c",0x208,"app_p5","app_p5_init",app_p5,
                                      "World"), iVar1 != 0)) {
                lVar3 = OSSL_PARAM_locate(param_1,&_LC4);
                iVar1 = test_ptr("test/params_test.c",0x209,"p = OSSL_PARAM_locate(params, \"p6\")",
                                 lVar3);
                if ((((iVar1 != 0) &&
                     (iVar1 = test_size_t_eq("test/params_test.c",0x20a,"p->return_size",
                                             "sizeof(app_p6_init) - 1",*(undefined8 *)(lVar3 + 0x20)
                                             ,6), iVar1 != 0)) &&
                    (iVar1 = test_str_eq("test/params_test.c",0x20c,"app_p6","app_p6_init",app_p6,
                                         "Cookie"), iVar1 != 0)) &&
                   (iVar1 = test_char_eq("test/params_test.c",0x20d,"foo[0]","app_foo_init",(int)foo
                                         ,0x7a), iVar1 != 0)) {
                  uVar4 = OSSL_PARAM_locate(param_1,&_LC5);
                  iVar1 = test_ptr("test/params_test.c",0x20e,
                                   "p = OSSL_PARAM_locate(params, \"foo\")",uVar4);
                  if (iVar1 != 0) {
                    bVar6 = cVar5 == '\0';
                    goto LAB_001011f3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_001011f3:
  BN_free(local_48);
  local_48 = (BIGNUM *)0x0;
  BN_free(app_p3);
  app_p3 = (BIGNUM *)0x0;
  BN_free(*(BIGNUM **)(ptr + 4));
  *(undefined8 *)(ptr + 4) = 0;
  CRYPTO_free(*(void **)(ptr + 6));
  *(undefined8 *)(ptr + 6) = 0;
  CRYPTO_free(ptr);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



ulong test_case(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar1 = (long)param_1 * 0x18;
  test_info("test/params_test.c",0x21c,"Case: %s",*(undefined8 *)(test_cases + lVar1 + 0x10));
  uVar2 = *(undefined8 *)(test_cases + lVar1);
  puVar3 = *(undefined8 **)(test_cases + lVar1 + 8);
  uVar6 = test_case_variant(*puVar3,uVar2);
  if ((int)uVar6 != 0) {
    pcVar4 = (code *)puVar3[1];
    uVar6 = 1;
    if (pcVar4 != (code *)0x0) {
      uVar7 = (*pcVar4)();
      iVar5 = test_case_variant(uVar7,uVar2);
      uVar6 = (ulong)(iVar5 != 0);
    }
  }
  return uVar6;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_case",test_case,4,1);
  add_all_tests("test_allocate_from_text",test_allocate_from_text,0x25,1);
  add_test("test_more_allocate_from_text",test_more_allocate_from_text);
  return 1;
}


