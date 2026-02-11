
undefined8 *
param_push(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
          ,int param_6)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x38,"crypto/param_build.c",0x37);
  if (ptr != (undefined8 *)0x0) {
    *ptr = param_2;
    *(undefined4 *)(ptr + 1) = param_5;
    ptr[2] = param_3;
    lVar2 = ossl_param_bytes_to_blocks(param_4);
    *(int *)((long)ptr + 0xc) = param_6;
    ptr[3] = lVar2;
    if (param_6 == 0) {
      *param_1 = *param_1 + lVar2;
      iVar1 = OPENSSL_sk_push(param_1[2],ptr);
    }
    else {
      param_1[1] = param_1[1] + lVar2;
      iVar1 = OPENSSL_sk_push(param_1[2],ptr);
    }
    if (0 < iVar1) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined8 push_BN(undefined8 param_1,undefined8 param_2,BIGNUM *param_3,ulong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  if (param_3 == (BIGNUM *)0x0) {
    bVar4 = false;
  }
  else {
    if ((param_5 == 2) && (iVar2 = BN_is_negative(param_3), iVar2 != 0)) {
      ERR_new();
      ERR_set_debug("crypto/param_build.c",0xcd,"push_BN");
      ERR_set_error(0xf,0x8010c,
                    "Negative big numbers are unsupported for OSSL_PARAM_UNSIGNED_INTEGER");
      return 0;
    }
    iVar1 = BN_num_bits(param_3);
    iVar2 = iVar1 + 0xe;
    if (-1 < iVar1 + 7) {
      iVar2 = iVar1 + 7;
    }
    if (iVar1 < -0xe) {
      ERR_new();
      ERR_set_debug("crypto/param_build.c",0xd4,"push_BN");
      ERR_set_error(0xf,0x73,0);
      return 0;
    }
    if (param_4 < (ulong)(long)(iVar2 >> 3)) {
      ERR_new();
      ERR_set_debug("crypto/param_build.c",0xd8,"push_BN");
      ERR_set_error(0xf,0x74,0);
      return 0;
    }
    iVar2 = BN_get_flags(param_3,8);
    bVar4 = iVar2 == 8;
    if (param_4 == 0) {
      param_4 = 1;
    }
  }
  lVar3 = param_push(param_1,param_2,param_4,param_4,param_5,bVar4);
  if (lVar3 == 0) {
    return 0;
  }
  *(BIGNUM **)(lVar3 + 0x20) = param_3;
  return 1;
}



void * OSSL_PARAM_BLD_new(void)

{
  void *ptr;
  long lVar1;
  
  ptr = (void *)CRYPTO_zalloc(0x18,"crypto/param_build.c",0x5d);
  if (ptr != (void *)0x0) {
    lVar1 = OPENSSL_sk_new_null();
    *(long *)((long)ptr + 0x10) = lVar1;
    if (lVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



void OSSL_PARAM_BLD_free(void *param_1)

{
  void *ptr;
  int iVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)((long)param_1 + 0x10));
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        ptr = (void *)OPENSSL_sk_pop(*(undefined8 *)((long)param_1 + 0x10));
        CRYPTO_free(ptr);
      } while (iVar1 != iVar2);
    }
    OPENSSL_sk_free(*(undefined8 *)((long)param_1 + 0x10));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 OSSL_PARAM_BLD_push_int(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,4,4,1,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_uint(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,4,4,2,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_long(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,8,8,1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_ulong(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,8,8,2,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_int32(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,4,4,1,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_uint32(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,4,4,2,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_int64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,8,8,1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_uint64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,8,8,2,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_size_t(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,8,8,2,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_time_t(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,8,8,1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



undefined8 OSSL_PARAM_BLD_push_double(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_push(param_2,param_3,8,8,3,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_1;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/param_build.c",0x50,"param_push_num");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}



void OSSL_PARAM_BLD_push_BN(undefined8 param_1,undefined8 param_2,BIGNUM *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 == (BIGNUM *)0x0) {
    lVar3 = 0;
  }
  else {
    iVar1 = BN_is_negative(param_3);
    if (iVar1 != 0) {
      iVar2 = BN_num_bits(param_3);
      uVar4 = 1;
      iVar1 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar1 = iVar2 + 7;
      }
      lVar3 = (long)((iVar1 >> 3) + 1);
      goto LAB_0010082f;
    }
    iVar2 = BN_num_bits(param_3);
    iVar1 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar1 = iVar2 + 7;
    }
    lVar3 = (long)(iVar1 >> 3);
  }
  uVar4 = 2;
LAB_0010082f:
  push_BN(param_1,param_2,param_3,lVar3,uVar4);
  return;
}



void OSSL_PARAM_BLD_push_BN_pad(undefined8 param_1,undefined8 param_2,BIGNUM *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 != (BIGNUM *)0x0) {
    iVar1 = BN_is_negative(param_3);
    if (iVar1 != 0) {
      iVar2 = BN_num_bits(param_3);
      uVar3 = 1;
      iVar1 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar1 = iVar2 + 7;
      }
      param_4 = (long)(iVar1 >> 3);
      goto LAB_001008b4;
    }
  }
  uVar3 = 2;
LAB_001008b4:
  push_BN(param_1,param_2,param_3,param_4,uVar3);
  return;
}



undefined8
OSSL_PARAM_BLD_push_utf8_string(undefined8 param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    param_4 = strlen(param_3);
  }
  uVar1 = CRYPTO_secure_allocated(param_3);
  lVar2 = param_push(param_1,param_2,param_4,param_4 + 1,4,uVar1);
  if (lVar2 != 0) {
    *(char **)(lVar2 + 0x28) = param_3;
    return 1;
  }
  return 0;
}



undefined8
OSSL_PARAM_BLD_push_utf8_ptr(undefined8 param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  long lVar1;
  
  if (param_4 == 0) {
    param_4 = strlen(param_3);
  }
  lVar1 = param_push(param_1,param_2,param_4,8,6,0);
  if (lVar1 != 0) {
    *(char **)(lVar1 + 0x28) = param_3;
    return 1;
  }
  return 0;
}



undefined8
OSSL_PARAM_BLD_push_octet_string
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = CRYPTO_secure_allocated(param_3);
  lVar2 = param_push(param_1,param_2,param_4,param_4,5,uVar1);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_3;
    return 1;
  }
  return 0;
}



undefined8
OSSL_PARAM_BLD_push_octet_ptr
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_push(param_1,param_2,param_4,8,7,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    return 1;
  }
  return 0;
}



undefined8 * OSSL_PARAM_BLD_to_param(undefined1 (*param_1) [16])

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong __n;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = OPENSSL_sk_num(*(undefined8 *)param_1[1]);
  lVar5 = ossl_param_bytes_to_blocks((long)(iVar4 + 1) * 0x28);
  uVar3 = *(undefined8 *)*param_1;
  lVar6 = *(long *)(*param_1 + 8) << 3;
  if (lVar6 == 0) {
    local_90 = (undefined8 *)0x0;
LAB_00100b06:
    local_98 = (undefined8 *)
               CRYPTO_malloc(((int)uVar3 + (int)lVar5) * 8,"crypto/param_build.c",0x179);
    if (local_98 != (undefined8 *)0x0) {
      iVar4 = OPENSSL_sk_num(*(undefined8 *)param_1[1]);
      puVar12 = local_98 + lVar5;
      puVar10 = local_98;
      if (0 < iVar4) {
        iVar9 = 0;
        puVar14 = local_90;
        do {
          while( true ) {
            puVar7 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)param_1[1],iVar9);
            __n = puVar7[2];
            *puVar10 = *puVar7;
            iVar1 = *(int *)(puVar7 + 1);
            puVar10[3] = __n;
            *(int *)(puVar10 + 1) = iVar1;
            iVar2 = *(int *)((long)puVar7 + 0xc);
            puVar10[4] = 0xffffffffffffffff;
            if (iVar2 == 0) break;
            puVar13 = puVar14 + puVar7[3];
            puVar10[2] = puVar14;
            lVar5 = puVar7[4];
            puVar11 = puVar14;
            if (lVar5 == 0) goto LAB_00100bda;
LAB_00100b65:
            if (iVar1 == 2) {
              BN_bn2nativepad(lVar5,puVar11);
            }
            else {
              BN_signed_bn2native();
            }
LAB_00100b79:
            iVar9 = iVar9 + 1;
            puVar10 = puVar10 + 5;
            puVar14 = puVar13;
            if (iVar4 == iVar9) goto LAB_00100c20;
          }
          puVar13 = puVar12 + puVar7[3];
          puVar10[2] = puVar12;
          lVar5 = puVar7[4];
          puVar11 = puVar12;
          puVar12 = puVar13;
          puVar13 = puVar14;
          if (lVar5 != 0) goto LAB_00100b65;
LAB_00100bda:
          if (iVar1 - 6U < 2) {
            *puVar11 = puVar7[5];
            goto LAB_00100b79;
          }
          if (iVar1 - 4U < 2) {
            if ((void *)puVar7[5] == (void *)0x0) {
              pvVar8 = memset(puVar11,0,__n);
            }
            else {
              pvVar8 = memcpy(puVar11,(void *)puVar7[5],__n);
            }
            if (*(int *)(puVar7 + 1) == 4) {
              *(undefined1 *)((long)pvVar8 + puVar7[2]) = 0;
            }
            goto LAB_00100b79;
          }
          if (8 < __n) {
            memset(puVar11,0,__n);
            goto LAB_00100b79;
          }
          if (__n == 0) goto LAB_00100b79;
          iVar9 = iVar9 + 1;
          puVar10 = puVar10 + 5;
          memcpy(puVar11,puVar7 + 6,__n);
          puVar14 = puVar13;
        } while (iVar4 != iVar9);
LAB_00100c20:
        puVar10 = local_98 + (long)iVar4 * 5;
      }
      OSSL_PARAM_construct_end(&local_78);
      *puVar10 = local_78;
      puVar10[1] = uStack_70;
      puVar10[2] = local_68;
      puVar10[3] = uStack_60;
      puVar10[4] = local_58;
      ossl_param_set_secure_block(puVar10,local_90,lVar6);
      uVar3 = *(undefined8 *)param_1[1];
      *param_1 = (undefined1  [16])0x0;
      iVar4 = OPENSSL_sk_num(uVar3);
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          pvVar8 = (void *)OPENSSL_sk_pop(*(undefined8 *)param_1[1]);
          CRYPTO_free(pvVar8);
        } while (iVar4 != iVar9);
      }
      goto LAB_00100caa;
    }
    CRYPTO_secure_free(local_90,"crypto/param_build.c",0x17b);
  }
  else {
    local_90 = (undefined8 *)CRYPTO_secure_malloc(lVar6,"crypto/param_build.c",0x173);
    if (local_90 != (undefined8 *)0x0) goto LAB_00100b06;
    ERR_new();
    ERR_set_debug("crypto/param_build.c",0x175,"OSSL_PARAM_BLD_to_param");
    ERR_set_error(0xf,0x6f,0);
  }
  local_98 = (undefined8 *)0x0;
LAB_00100caa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_98;
}


