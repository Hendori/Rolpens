
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



void der_encode_length_part_0(void)

{
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: len < 0x8000","test/asn1_encode_test.c",0x23a);
}



long make_custom_der_constprop_0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  void *pvVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined2 *__dest;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 uVar11;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = param_1[1];
  if (uVar2 < 0x8000) {
    lVar8 = 3;
    if (uVar2 < 0x100) {
      lVar8 = (ulong)(0x7f < uVar2) + 1;
    }
    lVar8 = uVar2 + 1 + lVar8;
    uVar2 = param_1[3];
    uVar10 = uVar2;
    do {
      if (uVar10 == 0) {
        uVar10 = 0;
        lVar7 = 0;
        if ((param_3 & 1) == 0) goto LAB_00100253;
        break;
      }
      uVar10 = uVar10 - 1;
    } while (*(char *)(param_1[2] + uVar10) == '\0');
    if (0x7fff < uVar2) goto LAB_00100589;
    if (uVar2 < 0x100) {
      if (uVar2 < 0x80) {
        uVar10 = uVar2 + 2;
        lVar7 = (ulong)(0x7f < uVar10) + 1;
      }
      else {
        uVar10 = uVar2 + 3;
        lVar7 = (ulong)(0xff < uVar10) + 2;
      }
    }
    else {
      uVar10 = uVar2 + 4;
      if (0x7fff < uVar10) goto LAB_00100589;
      lVar7 = 3;
    }
    lVar7 = lVar7 + 1 + uVar10;
LAB_00100253:
    uVar2 = lVar8 + 3 + lVar7;
    if (0x7fff < uVar2) goto LAB_00100589;
    uVar11 = (undefined1)uVar2;
    if (uVar2 < 0x100) {
      if (uVar2 < 0x80) {
        lVar8 = lVar8 + 5 + lVar7;
        puVar3 = (undefined2 *)CRYPTO_malloc((int)lVar8,"test/asn1_encode_test.c",0x27a);
        *param_2 = puVar3;
        if (puVar3 != (undefined2 *)0x0) {
          *(undefined1 *)puVar3 = 0x30;
          puVar4 = puVar3 + 1;
          *(undefined1 *)((long)puVar3 + 1) = uVar11;
LAB_001002c1:
          uVar2 = param_1[1];
          *(undefined1 *)((long)puVar4 + 3) = 2;
          *puVar4 = 0x101;
          *(undefined1 *)(puVar4 + 1) = 0xff;
          if (uVar2 < 0x8000) {
            uVar11 = (undefined1)uVar2;
            if (uVar2 < 0x100) {
              if (uVar2 < 0x80) {
                *(undefined1 *)(puVar4 + 2) = uVar11;
                __dest = (undefined2 *)((long)puVar4 + 5);
              }
              else {
                *(undefined1 *)(puVar4 + 2) = 1;
                __dest = puVar4 + 3;
                *(undefined1 *)((long)puVar4 + 5) = uVar11;
              }
            }
            else {
              *(undefined1 *)(puVar4 + 2) = 2;
              *(undefined1 *)(puVar4 + 3) = uVar11;
              *(byte *)((long)puVar4 + 5) = (byte)(uVar2 >> 8) | 0x80;
              __dest = (undefined2 *)((long)puVar4 + 7);
            }
            pvVar5 = memcpy(__dest,(void *)*param_1,uVar2);
            puVar6 = (undefined1 *)((long)pvVar5 + uVar2);
            if (lVar7 != 0) {
              *puVar6 = 0xa0;
              uVar11 = (undefined1)uVar10;
              if (uVar10 < 0x100) {
                if (uVar10 < 0x80) {
                  puVar6[1] = uVar11;
                  puVar9 = puVar6 + 2;
                }
                else {
                  puVar6[1] = 1;
                  puVar9 = puVar6 + 3;
                  puVar6[2] = uVar11;
                }
              }
              else {
                puVar6[1] = 2;
                puVar6[3] = uVar11;
                puVar6[2] = (byte)(uVar10 >> 8) | 0x80;
                puVar9 = puVar6 + 4;
              }
              uVar2 = param_1[3];
              *puVar9 = 2;
              if (0x7fff < uVar2) goto LAB_00100589;
              uVar11 = (undefined1)uVar2;
              if (uVar2 < 0x100) {
                if (uVar2 < 0x80) {
                  puVar9[1] = uVar11;
                  puVar6 = puVar9 + 2;
                }
                else {
                  puVar9[1] = 1;
                  puVar6 = puVar9 + 3;
                  puVar9[2] = uVar11;
                }
              }
              else {
                puVar9[1] = 2;
                puVar6 = puVar9 + 4;
                puVar9[3] = uVar11;
                puVar9[2] = (byte)(uVar2 >> 8) | 0x80;
              }
              pvVar5 = memcpy(puVar6,(void *)param_1[2],uVar2);
              puVar6 = (undefined1 *)((long)pvVar5 + uVar2);
            }
            if ((long)puVar6 - (long)puVar3 != lVar8) {
                    /* WARNING: Subroutine does not return */
              OPENSSL_die("assertion failed: seqbytes == (size_t)(p - *encoding)",
                          "test/asn1_encode_test.c",0x297);
            }
            goto LAB_0010032d;
          }
          goto LAB_00100589;
        }
      }
      else {
        lVar8 = lVar8 + 6 + lVar7;
        puVar3 = (undefined2 *)CRYPTO_malloc((int)lVar8,"test/asn1_encode_test.c",0x27a);
        *param_2 = puVar3;
        if (puVar3 != (undefined2 *)0x0) {
          *(undefined1 *)(puVar3 + 1) = uVar11;
          puVar4 = (undefined2 *)((long)puVar3 + 3);
          *puVar3 = 0x130;
          goto LAB_001002c1;
        }
      }
    }
    else {
      lVar8 = lVar8 + 7 + lVar7;
      puVar3 = (undefined2 *)CRYPTO_malloc((int)lVar8,"test/asn1_encode_test.c",0x27a);
      *param_2 = puVar3;
      if (puVar3 != (undefined2 *)0x0) {
        *(undefined1 *)((long)puVar3 + 3) = uVar11;
        *puVar3 = 0x230;
        *(byte *)(puVar3 + 1) = (byte)(uVar2 >> 8) | 0x80;
        puVar4 = puVar3 + 2;
        goto LAB_001002c1;
      }
    }
  }
  else {
LAB_00100589:
    der_encode_length_part_0();
  }
  lVar8 = 0;
LAB_0010032d:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_intern_part_0(undefined8 *param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ASN1_ITEM *it;
  ASN1_VALUE *ifld;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong __n;
  long in_FS_OFFSET;
  int local_6c;
  void *local_50;
  void *local_48;
  long local_40;
  
  lVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 0;
LAB_0010064c:
  do {
    local_50 = (void *)0x0;
    piVar12 = (int *)(param_1[5] * lVar9 + param_1[3]);
    sVar4 = make_custom_der_constprop_0(test_custom_data + lVar9 * 0x20,&local_50,0);
    pvVar2 = local_50;
    if (sVar4 == 0) {
LAB_00100952:
      if (*piVar12 != 0) {
        uVar11 = 0x2ee;
        pcVar8 = "Failed custom encode round trip %u of %s";
LAB_00100706:
        test_error("test/asn1_encode_test.c",uVar11,pcVar8,(int)lVar9);
        test_openssl_errors();
        local_6c = local_6c + 1;
      }
    }
    else {
      local_48 = (void *)0x0;
      iVar3 = (*(code *)param_1[9])(piVar12,&local_48);
      pvVar6 = local_48;
      if (iVar3 < 0) {
        CRYPTO_free(pvVar2);
        goto LAB_00100952;
      }
      if ((sVar4 != (long)iVar3) || (iVar3 = memcmp(local_48,pvVar2,sVar4), iVar3 != 0)) {
        if (*piVar12 == 0) {
          ERR_clear_error();
          pvVar6 = local_48;
          goto LAB_001009a4;
        }
        CRYPTO_free(local_48);
        CRYPTO_free(pvVar2);
        pcVar8 = "Custom encode round trip %u of %s mismatch";
        uVar11 = 0x2f5;
        goto LAB_00100706;
      }
LAB_001009a4:
      CRYPTO_free(pvVar6);
      CRYPTO_free(pvVar2);
    }
    sVar4 = param_1[5];
    local_50 = (void *)0x0;
    lVar5 = make_custom_der_constprop_0(test_custom_data + lVar9 * 0x20,&local_50,1);
    pvVar2 = local_50;
    if (lVar5 == 0) {
LAB_0010078a:
      if (*piVar12 != 0) {
        uVar11 = 0x305;
        pcVar8 = "Failed custom decode round trip %u of %s";
LAB_0010062a:
        test_error("test/asn1_encode_test.c",uVar11,pcVar8,(int)lVar9);
        test_openssl_errors();
        local_6c = local_6c + 1;
      }
    }
    else {
      local_48 = local_50;
      pvVar6 = (void *)(*(code *)param_1[10])(0,&local_48,lVar5);
      if (pvVar6 != (void *)0x0) {
        pcVar1 = (code *)param_1[0xb];
        if (local_48 == (void *)((long)pvVar2 + lVar5)) {
          iVar3 = memcmp(pvVar6,piVar12,sVar4);
          (*pcVar1)(pvVar6);
          CRYPTO_free(pvVar2);
          if (iVar3 == 0) {
            lVar9 = lVar9 + 1;
            if (lVar9 == 0x22) break;
            goto LAB_0010064c;
          }
        }
        else {
          (*pcVar1)();
          CRYPTO_free(pvVar2);
        }
        uVar11 = 0x30c;
        pcVar8 = "Custom decode round trip %u of %s mismatch";
        goto LAB_0010062a;
      }
      if (*piVar12 != 0) {
        (*(code *)param_1[0xb])(0);
        CRYPTO_free(pvVar2);
        goto LAB_0010078a;
      }
      ERR_clear_error();
      (*(code *)param_1[0xb])(0);
      CRYPTO_free(pvVar2);
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x22);
  __n = param_1[8];
  uVar7 = (ulong)param_1[7] / __n;
  if (__n <= (ulong)param_1[7]) {
    uVar10 = 0;
    do {
      piVar12 = (int *)(uVar10 * __n + param_1[6]);
      local_50 = (void *)0x0;
      iVar3 = (*(code *)param_1[9])(piVar12,&local_50);
      pvVar2 = local_50;
      if (iVar3 < 0) {
LAB_00100905:
        if (*piVar12 != 0) {
          test_error("test/asn1_encode_test.c",0x323,"Failed encode/decode round trip %u of %s",
                     uVar10);
          test_openssl_errors();
          local_6c = local_6c + 1;
        }
      }
      else {
        local_48 = local_50;
        pvVar6 = (void *)(*(code *)param_1[10])(0,&local_48,(long)iVar3);
        if (pvVar6 == (void *)0x0) {
          if (*piVar12 != 0) {
            (*(code *)param_1[0xb])(0);
            CRYPTO_free(local_50);
            goto LAB_00100905;
          }
          ERR_clear_error();
          (*(code *)param_1[0xb])(0);
          CRYPTO_free(local_50);
        }
        else {
          pcVar1 = (code *)param_1[0xb];
          if (local_48 == (void *)((long)pvVar2 + (long)iVar3)) {
            iVar3 = memcmp(pvVar6,piVar12,__n);
            (*pcVar1)(pvVar6);
            CRYPTO_free(local_50);
            if (iVar3 == 0) goto LAB_0010087a;
          }
          else {
            (*pcVar1)();
            CRYPTO_free(local_50);
          }
          test_error("test/asn1_encode_test.c",0x32a,"Encode/decode round trip %u of %s mismatch",
                     uVar10);
          local_6c = local_6c + 1;
        }
      }
LAB_0010087a:
      uVar10 = (ulong)((int)uVar10 + 1);
      if (uVar7 <= uVar10) break;
      __n = param_1[8];
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
    iVar3 = ASN1_item_print(_bio_err,ifld,0,it,(ASN1_PCTX *)0x0);
    CRYPTO_free(ifld);
    if (iVar3 != 0) goto LAB_00100ad7;
  }
  test_error("test/asn1_encode_test.c",0x337,"Printing of %s failed",param_1[1]);
  test_openssl_errors();
  local_6c = local_6c + 1;
LAB_00100ad7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_6c == 0;
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


