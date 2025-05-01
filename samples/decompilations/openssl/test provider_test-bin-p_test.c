
undefined1 * p_gettable_params(void)

{
  return p_param_types;
}



undefined1 * p_get_reason_strings(void)

{
  return reason_strings_4;
}



undefined8 p_query(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 1;
  return 0;
}



void p_teardown(undefined8 *param_1)

{
  OSSL_LIB_CTX_free(param_1[3]);
  free((void *)*param_1);
  free((void *)param_1[1]);
  free(param_1);
  return;
}



void p_set_error_constprop_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,uint param_10,undefined8 param_11,undefined4 param_12,
               undefined8 param_13)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long local_e0;
  undefined1 local_d8 [48];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  local_e0 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = &stack0x00000008;
  local_e8 = local_d8;
  local_f8 = 0x30;
  local_f4 = 0x30;
  (*c_new_error)(0);
  (*c_set_error_debug)(0,param_11,param_12,param_13);
  (*c_vset_error)(0,param_10 | 0x1c800000,0,&local_f8);
  if (local_e0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void local_snprintf_constprop_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_d8 = 0x18;
  local_c8 = local_b8;
  local_d4 = 0x30;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  (*c_BIO_vsnprintf)(param_9,0x100,param_11,&local_d8);
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 p_get_params(undefined8 *param_1,undefined8 *param_2)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 uVar7;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_40;
  
  bVar11 = 0;
  pcVar9 = (char *)*param_2;
  uVar7 = param_1[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (pcVar9 == (char *)0x0) {
      uVar7 = 1;
LAB_001002d2:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar2 = strcmp(pcVar9,"greeting");
    if (iVar2 == 0) {
      greeting_3 = 0;
      provname_2 = 0;
      opensslv_1 = 0;
      iVar2 = (*c_get_params)(uVar7,counter_request_0);
      if (iVar2 == 0) {
        local_snprintf_constprop_0(&local_148,0x100,"Howdy stranger...");
      }
      else if (greeting_3 == 0) {
        local_snprintf_constprop_0
                  (&local_148,0x100,"Hello OpenSSL %.20s, greetings from %s!",
                   *(undefined8 *)counter_request_0._16_8_,*(undefined8 *)counter_request_0._56_8_);
      }
      else {
        __strcpy_chk(&local_148,greeting_3,0x100);
      }
      sVar5 = strlen((char *)&local_148);
      uVar6 = sVar5 + 1;
      param_2[4] = uVar6;
      if ((ulong)param_2[3] < uVar6) goto LAB_001002d0;
      puVar1 = (uchar *)param_2[2];
      uVar3 = (uint)uVar6;
      if (uVar3 < 8) {
        if ((uVar6 & 4) == 0) {
          if (uVar3 != 0) {
            *puVar1 = (uchar)local_148;
            if ((uVar6 & 2) != 0) {
              *(undefined2 *)(puVar1 + ((uVar6 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)&uStack_150 + (uVar6 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *(undefined4 *)puVar1 = (undefined4)local_148;
          *(undefined4 *)(puVar1 + ((uVar6 & 0xffffffff) - 4)) =
               *(undefined4 *)((long)&uStack_150 + (uVar6 & 0xffffffff) + 4);
        }
      }
      else {
        *(ulong *)puVar1 = CONCAT44(local_148._4_4_,(undefined4)local_148);
        *(undefined8 *)(puVar1 + ((uVar6 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)&uStack_150 + (uVar6 & 0xffffffff));
        lVar8 = (long)puVar1 - (long)((ulong)(puVar1 + 8) & 0xfffffffffffffff8);
        pcVar9 = (char *)((long)&local_148 + -lVar8);
        puVar10 = (undefined8 *)((ulong)(puVar1 + 8) & 0xfffffffffffffff8);
        for (uVar6 = (ulong)(uVar3 + (int)lVar8 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *(undefined8 *)pcVar9;
          pcVar9 = pcVar9 + ((ulong)bVar11 * -2 + 1) * 8;
          puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
        }
      }
    }
    else {
      iVar2 = strcmp(pcVar9,"digest-check");
      if (iVar2 == 0) {
        type = (EVP_MD *)EVP_MD_fetch(param_1[3],&_LC4,0);
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        lVar8 = OSSL_PROVIDER_load(param_1[3],"default");
        if ((lVar8 == 0) || (iVar2 = OSSL_PROVIDER_available(param_1[3],"default"), iVar2 == 0)) {
          p_set_error_constprop_0(0x39,3,*param_1,0xa6,param_1[1],0);
          EVP_MD_CTX_free(ctx);
          EVP_MD_free(type);
          OSSL_PROVIDER_unload(lVar8);
          if (3 < (ulong)param_2[3]) {
            *(undefined4 *)param_2[2] = 0;
            param_2[4] = 4;
          }
        }
        else {
          iVar2 = OSSL_PROVIDER_available(param_1[3],"default");
          if (((((iVar2 == 0) || (iVar2 = OSSL_PROVIDER_available(param_1[3],&_LC6), iVar2 == 0)) ||
               (iVar2 = OSSL_PROVIDER_available(param_1[3],"legacy"), iVar2 == 0)) ||
              ((iVar2 = OSSL_PROVIDER_available(param_1[3],"p_test"), iVar2 == 0 ||
               (type == (EVP_MD *)0x0)))) ||
             ((ctx == (EVP_MD_CTX *)0x0 ||
              ((iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar2 == 0 ||
               (iVar2 = EVP_DigestUpdate(ctx,"Hello world",0xb), iVar2 == 0)))))) {
            uStack_150._4_4_ = 0;
          }
          else {
            iVar2 = EVP_DigestFinal(ctx,(uchar *)&local_148,(uint *)0x0);
            uStack_150._4_4_ = (uint)(iVar2 != 0);
          }
          EVP_MD_CTX_free(ctx);
          EVP_MD_free(type);
          OSSL_PROVIDER_unload(lVar8);
          if (3 < (ulong)param_2[3]) {
            *(uint *)param_2[2] = uStack_150._4_4_;
            param_2[4] = 4;
            goto LAB_00100328;
          }
        }
LAB_001002d0:
        uVar7 = 0;
        goto LAB_001002d2;
      }
      iVar2 = strcmp(pcVar9,"stop-property-mirror");
      if (iVar2 == 0) {
        uVar4 = EVP_set_default_properties(param_1[3],0);
        if ((ulong)param_2[3] < 4) goto LAB_001002d0;
        *(undefined4 *)param_2[2] = uVar4;
        param_2[4] = 4;
      }
    }
LAB_00100328:
    param_2 = param_2 + 5;
    pcVar9 = (char *)*param_2;
  } while( true );
}



undefined8
p_test_init(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
           undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *__ptr;
  char *pcVar8;
  long lVar9;
  int *piVar10;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 local_40;
  
  iVar7 = *param_2;
  if (iVar7 != 0) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    piVar10 = param_2;
    bVar6 = false;
    do {
      while (bVar1 = bVar6, iVar7 == 6) {
        in_R10 = *(undefined8 *)(piVar10 + 2);
        bVar3 = true;
LAB_00100690:
        iVar7 = piVar10[4];
        piVar10 = piVar10 + 4;
        bVar6 = bVar1;
        if (iVar7 == 0) goto LAB_001006d0;
      }
      if (iVar7 < 7) {
        if (iVar7 == 2) {
          local_40 = *(undefined8 *)(piVar10 + 2);
          bVar5 = true;
        }
        else if (iVar7 == 5) {
          in_R11 = *(undefined8 *)(piVar10 + 2);
          bVar4 = true;
        }
        goto LAB_00100690;
      }
      if (iVar7 == 7) {
        param_6 = *(undefined8 *)(piVar10 + 2);
        bVar2 = true;
        goto LAB_00100690;
      }
      if (iVar7 != 0x2f) goto LAB_00100690;
      param_5 = *(undefined8 *)(piVar10 + 2);
      iVar7 = piVar10[4];
      piVar10 = piVar10 + 4;
      bVar1 = true;
      bVar6 = true;
    } while (iVar7 != 0);
LAB_001006d0:
    if (bVar1) {
      c_BIO_vsnprintf = param_5;
    }
    if (bVar2) {
      c_vset_error = param_6;
    }
    if (bVar3) {
      c_set_error_debug = in_R10;
    }
    if (bVar4) {
      c_new_error = in_R11;
    }
    if (bVar5) {
      c_get_params = local_40;
    }
  }
  __ptr = (undefined8 *)malloc(0x20);
  if (__ptr != (undefined8 *)0x0) {
    pcVar8 = strdup("test/p_test.c");
    *__ptr = pcVar8;
    pcVar8 = strdup("p_test_init");
    __ptr[2] = param_1;
    __ptr[1] = pcVar8;
    lVar9 = OSSL_LIB_CTX_new_child(param_1,param_2);
    __ptr[3] = lVar9;
    if (lVar9 == 0) {
      p_set_error_constprop_0(0x39,2,*__ptr,0x132,__ptr[1],0);
    }
    else {
      lVar9 = EVP_MD_fetch(lVar9,"SHA2-256",0);
      if (lVar9 == 0) {
        p_set_error_constprop_0(0x39,1,*__ptr,0x149,__ptr[1],0);
        *param_4 = __ptr;
        *param_3 = p_test_table;
        return 1;
      }
      EVP_MD_free(lVar9);
    }
    OSSL_LIB_CTX_free(__ptr[3]);
    free((void *)*__ptr);
    free((void *)__ptr[1]);
    free(__ptr);
  }
  return 0;
}


