
undefined1 * ASN1_LONG_DATA_it(void)

{
  return local_it_0;
}



undefined1 * ASN1_INT32_DATA_it(void)

{
  return local_it_1;
}



undefined1 * ASN1_UINT32_DATA_it(void)

{
  return local_it_2;
}



undefined1 * ASN1_INT64_DATA_it(void)

{
  return local_it_3;
}



undefined1 * ASN1_UINT64_DATA_it(void)

{
  return local_it_4;
}



void i2d_ASN1_UINT64_DATA(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_4);
  return;
}



void i2d_ASN1_INT64_DATA(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_3);
  return;
}



void i2d_ASN1_UINT32_DATA(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_2);
  return;
}



void i2d_ASN1_INT32_DATA(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_1);
  return;
}



void i2d_ASN1_LONG_DATA(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_0);
  return;
}



ulong test_invalid_template(void)

{
  uint uVar1;
  ASN1_VALUE *val;
  ulong uVar2;
  
  val = ASN1_item_new((ASN1_ITEM *)local_it_5);
  uVar2 = test_ptr("test/asn1_encode_test.c",0x373,&_LC0,val);
  if ((int)uVar2 != 0) {
    uVar1 = ASN1_item_i2d(val,(uchar **)0x0,(ASN1_ITEM *)local_it_5);
    ASN1_item_free(val,(ASN1_ITEM *)local_it_5);
    uVar2 = (ulong)(uVar1 >> 0x1f);
  }
  return uVar2;
}



void ASN1_UINT64_DATA_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_4);
  return;
}



void ASN1_INT64_DATA_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_3);
  return;
}



void ASN1_UINT32_DATA_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_2);
  return;
}



void ASN1_INT32_DATA_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_1);
  return;
}



void ASN1_LONG_DATA_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_0);
  return;
}



void d2i_ASN1_UINT64_DATA(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_4);
  return;
}



void d2i_ASN1_INT64_DATA(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_3);
  return;
}



void d2i_ASN1_UINT32_DATA(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_2);
  return;
}



void d2i_ASN1_INT32_DATA(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_1);
  return;
}



void d2i_ASN1_LONG_DATA(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_0);
  return;
}



undefined8 der_encode_length(ulong param_1,long *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  
  if (0x7fff < param_1) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: len < 0x8000","test/asn1_encode_test.c",0x23a);
  }
  uVar3 = (undefined1)param_1;
  if (param_1 < 0x100) {
    if (param_1 < 0x80) {
      if (param_2 != (long *)0x0) {
        puVar1 = (undefined1 *)*param_2;
        *param_2 = (long)(puVar1 + 1);
        *puVar1 = uVar3;
      }
      return 1;
    }
    if (param_2 != (long *)0x0) {
      puVar1 = (undefined1 *)*param_2;
      *param_2 = (long)(puVar1 + 1);
      *puVar1 = 1;
      puVar1 = (undefined1 *)*param_2;
      *param_2 = (long)(puVar1 + 1);
      *puVar1 = uVar3;
    }
    return 2;
  }
  if (param_2 != (long *)0x0) {
    puVar1 = (undefined1 *)*param_2;
    *param_2 = (long)(puVar1 + 1);
    *puVar1 = 2;
    pbVar2 = (byte *)*param_2;
    *param_2 = (long)(pbVar2 + 1);
    *pbVar2 = (byte)(param_1 >> 8) | 0x80;
    puVar1 = (undefined1 *)*param_2;
    *param_2 = (long)(puVar1 + 1);
    *puVar1 = uVar3;
  }
  return 3;
}



ulong do_decode(long param_1,long param_2,int *param_3,size_t param_4,long param_5)

{
  int iVar1;
  void *__s1;
  ulong uVar2;
  long local_40 [2];
  
  local_40[0] = param_1;
  __s1 = (void *)(**(code **)(param_5 + 0x50))(0,local_40,param_2);
  if (__s1 == (void *)0x0) {
    uVar2 = 0xffffffff;
    if (*param_3 == 0) {
      ERR_clear_error();
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
    if (local_40[0] == param_1 + param_2) {
      iVar1 = memcmp(__s1,param_3,param_4);
      uVar2 = (ulong)(iVar1 == 0);
    }
  }
  (**(code **)(param_5 + 0x58))(__s1);
  return uVar2;
}



long make_custom_der_constprop_0(undefined8 *param_1,long *param_2,uint param_3)

{
  long lVar1;
  undefined1 *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  ulong local_60;
  undefined2 *local_50;
  undefined2 local_43;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_41 = 0xff;
  local_43 = 0x101;
  uVar5 = param_1[1];
  if (uVar5 < 0x8000) {
    lVar6 = 3;
    if (uVar5 < 0x100) {
      lVar6 = (ulong)(0x7f < uVar5) + 1;
    }
    local_60 = param_1[3];
    lVar6 = uVar5 + 1 + lVar6;
    uVar5 = local_60;
    do {
      if (uVar5 == 0) {
        if ((param_3 & 1) == 0) {
          local_60 = 0;
          lVar4 = 0;
          goto LAB_00100399;
        }
        break;
      }
      uVar5 = uVar5 - 1;
    } while (*(char *)(param_1[2] + uVar5) == '\0');
    if (local_60 < 0x8000) {
      if (local_60 < 0x100) {
        if (local_60 < 0x80) {
          local_60 = local_60 + 2;
          lVar4 = (ulong)(0x7f < local_60) + 1;
        }
        else {
          local_60 = local_60 + 3;
          lVar4 = (ulong)(0xff < local_60) + 2;
        }
      }
      else {
        local_60 = local_60 + 4;
        if (0x7fff < local_60) goto LAB_00100574;
        lVar4 = 3;
      }
      lVar4 = local_60 + 1 + lVar4;
LAB_00100399:
      uVar5 = lVar6 + 3 + lVar4;
      if (uVar5 < 0x8000) {
        lVar1 = 3;
        if (uVar5 < 0x100) {
          lVar1 = (ulong)(0x7f < uVar5) + 1;
        }
        lVar1 = lVar6 + 4 + lVar4 + lVar1;
        puVar2 = (undefined1 *)CRYPTO_malloc((int)lVar1,"test/asn1_encode_test.c",0x27a);
        *param_2 = (long)puVar2;
        if (puVar2 == (undefined1 *)0x0) {
          lVar1 = 0;
        }
        else {
          *puVar2 = 0x30;
          local_50 = (undefined2 *)(puVar2 + 1);
          der_encode_length(uVar5,&local_50);
          *local_50 = local_43;
          *(undefined1 *)((long)local_50 + 3) = 2;
          *(undefined1 *)(local_50 + 1) = local_41;
          local_50 = local_50 + 2;
          der_encode_length(param_1[1],&local_50);
          pvVar3 = memcpy(local_50,(void *)*param_1,param_1[1]);
          puVar2 = (undefined1 *)(param_1[1] + (long)pvVar3);
          if (lVar4 != 0) {
            *puVar2 = 0xa0;
            local_50 = (undefined2 *)(puVar2 + 1);
            der_encode_length(local_60,&local_50);
            *(undefined1 *)local_50 = 2;
            local_50 = (undefined2 *)((long)local_50 + 1);
            der_encode_length(param_1[3],&local_50);
            pvVar3 = memcpy(local_50,(void *)param_1[2],param_1[3]);
            puVar2 = (undefined1 *)(param_1[3] + (long)pvVar3);
          }
          if ((long)puVar2 - *param_2 != lVar1) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: seqbytes == (size_t)(p - *encoding)",
                        "test/asn1_encode_test.c",0x297);
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return lVar1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
LAB_00100574:
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: len < 0x8000","test/asn1_encode_test.c",0x23a);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_intern_part_0(undefined8 *param_1)

{
  void *pvVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  ASN1_ITEM *it;
  ASN1_VALUE *ifld;
  char *pcVar5;
  int *piVar6;
  undefined8 uVar7;
  void *ptr;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  int local_6c;
  void *local_50;
  void *local_48;
  long local_40;
  
  lVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 0;
LAB_00100629:
  do {
    uVar8 = (undefined4)lVar9;
    local_50 = (void *)0x0;
    piVar6 = (int *)(param_1[5] * lVar9 + param_1[3]);
    __n = make_custom_der_constprop_0(test_custom_data + lVar9 * 0x20,&local_50,0);
    pvVar1 = local_50;
    if (__n == 0) {
LAB_00100922:
      if (*piVar6 != 0) {
        uVar7 = 0x2ee;
        pcVar5 = "Failed custom encode round trip %u of %s";
LAB_001006e5:
        test_error("test/asn1_encode_test.c",uVar7,pcVar5,uVar8);
        test_openssl_errors();
        local_6c = local_6c + 1;
      }
    }
    else {
      local_48 = (void *)0x0;
      iVar2 = (*(code *)param_1[9])(piVar6,&local_48);
      ptr = local_48;
      if (iVar2 < 0) {
        CRYPTO_free(pvVar1);
        goto LAB_00100922;
      }
      if ((__n != (long)iVar2) || (iVar2 = memcmp(local_48,pvVar1,__n), iVar2 != 0)) {
        if (*piVar6 == 0) {
          ERR_clear_error();
          ptr = local_48;
          goto LAB_00100974;
        }
        CRYPTO_free(local_48);
        CRYPTO_free(pvVar1);
        pcVar5 = "Custom encode round trip %u of %s mismatch";
        uVar7 = 0x2f5;
        goto LAB_001006e5;
      }
LAB_00100974:
      CRYPTO_free(ptr);
      CRYPTO_free(pvVar1);
    }
    local_48 = (void *)0x0;
    uVar7 = param_1[5];
    lVar3 = make_custom_der_constprop_0(test_custom_data + lVar9 * 0x20,&local_48,1);
    pvVar1 = local_48;
    if (lVar3 != 0) {
      iVar2 = do_decode(local_48,lVar3,piVar6,uVar7);
      CRYPTO_free(pvVar1);
      if (iVar2 != 0) {
        if (iVar2 != 1) {
          if (iVar2 != -1) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("do_decode_custom() return unknown value","test/asn1_encode_test.c",0x315);
          }
          goto LAB_00100610;
        }
        goto LAB_0010061b;
      }
      uVar7 = 0x30c;
      pcVar5 = "Custom decode round trip %u of %s mismatch";
LAB_0010076e:
      lVar9 = lVar9 + 1;
      test_error("test/asn1_encode_test.c",uVar7,pcVar5,uVar8);
      test_openssl_errors();
      local_6c = local_6c + 1;
      if (lVar9 == 0x22) break;
      goto LAB_00100629;
    }
LAB_00100610:
    if (*piVar6 != 0) {
      uVar7 = 0x305;
      pcVar5 = "Failed custom decode round trip %u of %s";
      goto LAB_0010076e;
    }
LAB_0010061b:
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x22);
  uVar11 = param_1[8];
  uVar4 = (ulong)param_1[7] / uVar11;
  if (uVar11 <= (ulong)param_1[7]) {
    uVar10 = 0;
    do {
      piVar6 = (int *)(uVar10 * uVar11 + param_1[6]);
      local_48 = (void *)0x0;
      iVar2 = (*(code *)param_1[9])(piVar6,&local_48);
      if (iVar2 < 0) {
LAB_001007c8:
        if (*piVar6 != 0) {
          test_error("test/asn1_encode_test.c",0x323,"Failed encode/decode round trip %u of %s",
                     uVar10);
          test_openssl_errors();
          local_6c = local_6c + 1;
        }
      }
      else {
        iVar2 = do_decode(local_48,(long)iVar2,piVar6,uVar11);
        CRYPTO_free(local_48);
        if (iVar2 == 0) {
          test_error("test/asn1_encode_test.c",0x32a,"Encode/decode round trip %u of %s mismatch",
                     uVar10);
          local_6c = local_6c + 1;
        }
        else if (iVar2 != 1) {
          if (iVar2 != -1) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("do_enc_dec() return unknown value","test/asn1_encode_test.c",0x332);
          }
          goto LAB_001007c8;
        }
      }
      uVar10 = (ulong)((int)uVar10 + 1);
      if (uVar4 <= uVar10) break;
      uVar11 = param_1[8];
    } while( true );
  }
  it = (ASN1_ITEM *)(*(code *)*param_1)();
  if (0x100 < (ulong)param_1[5]) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: package->encode_expectations_elem_size <= DATA_BUF_SIZE",
                "test/asn1_encode_test.c",0x2cc);
  }
  ifld = (ASN1_VALUE *)CRYPTO_malloc(0x100,"test/asn1_encode_test.c",0x2cd);
  if (ifld != (ASN1_VALUE *)0x0) {
    RAND_bytes((uchar *)ifld,*(int *)(param_1 + 5));
    iVar2 = ASN1_item_print(_bio_err,ifld,0,it,(ASN1_PCTX *)0x0);
    CRYPTO_free(ifld);
    if (iVar2 != 0) goto LAB_001008da;
  }
  test_error("test/asn1_encode_test.c",0x337,"Printing of %s failed",param_1[1]);
  test_openssl_errors();
  local_6c = local_6c + 1;
LAB_001008da:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_6c == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_uint32(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (uint32_test_package._16_4_ != 0) {
    return 1;
  }
  if ((ulong)uint32_test_package._32_8_ / (ulong)uint32_test_package._40_8_ == 0x22) {
    uVar1 = test_intern_part_0(uint32_test_package,param_2,
                               (ulong)uint32_test_package._32_8_ % (ulong)uint32_test_package._40_8_
                              );
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: nelems == OSSL_NELEM(test_custom_data)","test/asn1_encode_test.c",
              0x2e5);
}



undefined8 test_int64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (int64_test_package._16_4_ != 0) {
    return 1;
  }
  if ((ulong)int64_test_package._32_8_ / (ulong)int64_test_package._40_8_ == 0x22) {
    uVar1 = test_intern_part_0(int64_test_package,param_2,
                               (ulong)int64_test_package._32_8_ % (ulong)int64_test_package._40_8_);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: nelems == OSSL_NELEM(test_custom_data)","test/asn1_encode_test.c",
              0x2e5);
}



undefined8 test_uint64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (uint64_test_package._16_4_ != 0) {
    return 1;
  }
  if ((ulong)uint64_test_package._32_8_ / (ulong)uint64_test_package._40_8_ == 0x22) {
    uVar1 = test_intern_part_0(uint64_test_package,param_2,
                               (ulong)uint64_test_package._32_8_ % (ulong)uint64_test_package._40_8_
                              );
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: nelems == OSSL_NELEM(test_custom_data)","test/asn1_encode_test.c",
              0x2e5);
}



undefined8 test_long_32bit(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (long_test_package_32bit._16_4_ != 0) {
    return 1;
  }
  if ((ulong)long_test_package_32bit._32_8_ / (ulong)long_test_package_32bit._40_8_ == 0x22) {
    uVar1 = test_intern_part_0(long_test_package_32bit,param_2,
                               (ulong)long_test_package_32bit._32_8_ %
                               (ulong)long_test_package_32bit._40_8_);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: nelems == OSSL_NELEM(test_custom_data)","test/asn1_encode_test.c",
              0x2e5);
}



undefined8 test_long_64bit(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (long_test_package_64bit._16_4_ != 0) {
    return 1;
  }
  if ((ulong)long_test_package_64bit._32_8_ / (ulong)long_test_package_64bit._40_8_ == 0x22) {
    uVar1 = test_intern_part_0(long_test_package_64bit,param_2,
                               (ulong)long_test_package_64bit._32_8_ %
                               (ulong)long_test_package_64bit._40_8_);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: nelems == OSSL_NELEM(test_custom_data)","test/asn1_encode_test.c",
              0x2e5);
}



undefined8 test_int32(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (int32_test_package._16_4_ != 0) {
    return 1;
  }
  if ((ulong)int32_test_package._32_8_ / (ulong)int32_test_package._40_8_ == 0x22) {
    uVar1 = test_intern_part_0(int32_test_package,param_2,
                               (ulong)int32_test_package._32_8_ % (ulong)int32_test_package._40_8_);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: nelems == OSSL_NELEM(test_custom_data)","test/asn1_encode_test.c",
              0x2e5);
}



undefined8 setup_tests(void)

{
  add_test("test_long_32bit",test_long_32bit);
  add_test("test_long_64bit",test_long_64bit);
  add_test("test_int32",test_int32);
  add_test("test_uint32",test_uint32);
  add_test("test_int64",test_int64);
  add_test("test_uint64",test_uint64);
  add_test("test_invalid_template",test_invalid_template);
  return 1;
}


