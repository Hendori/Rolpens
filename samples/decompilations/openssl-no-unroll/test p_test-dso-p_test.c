
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
  free((void *)*param_1);
  free((void *)param_1[1]);
  free(param_1);
  return;
}



void p_set_error_constprop_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined1 local_c8 [48];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = &stack0x00000008;
  local_e8 = 0x30;
  local_d8 = local_c8;
  local_e4 = 0x30;
  (*c_new_error)(0);
  (*c_set_error_debug)(0,param_11,0x149,param_13);
  (*c_vset_error)(0,0x1c800001,0,&local_e8);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
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



undefined8 p_get_params(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  byte bVar10;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_40;
  
  bVar10 = 0;
  pcVar1 = (char *)*param_2;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (pcVar1 == (char *)0x0) {
      uVar6 = 1;
LAB_001002c0:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      uStack_150 = OSSL_provider_init;
      __stack_chk_fail();
    }
    uStack_150 = (code *)0x10024b;
    iVar2 = strcmp(pcVar1,"greeting");
    if (iVar2 == 0) {
      greeting_3 = 0;
      provname_2 = 0;
      opensslv_1 = 0;
      uStack_150 = (code *)0x100280;
      iVar2 = (*c_get_params)(uVar6,counter_request_0);
      if (iVar2 == 0) {
        uStack_150 = (code *)0x100391;
        local_snprintf_constprop_0(&local_148,0x100,"Howdy stranger...");
      }
      else if (greeting_3 == 0) {
        uStack_150 = (code *)0x1003cd;
        local_snprintf_constprop_0
                  (&local_148,0x100,"Hello OpenSSL %.20s, greetings from %s!",
                   *(undefined8 *)counter_request_0._16_8_,*(undefined8 *)counter_request_0._56_8_);
      }
      else {
        uStack_150 = (code *)0x1002a8;
        __strcpy_chk(&local_148,greeting_3,0x100);
      }
      uStack_150 = (code *)0x1002b0;
      sVar4 = strlen((char *)&local_148);
      uVar5 = sVar4 + 1;
      param_2[4] = uVar5;
      if ((ulong)param_2[3] < uVar5) {
LAB_001002be:
        uVar6 = 0;
        goto LAB_001002c0;
      }
      pcVar1 = (char *)param_2[2];
      uVar3 = (uint)uVar5;
      if (uVar3 < 8) {
        if ((uVar5 & 4) == 0) {
          if (uVar3 != 0) {
            *pcVar1 = (char)local_148;
            if ((uVar5 & 2) != 0) {
              *(undefined2 *)(pcVar1 + ((uVar5 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)&uStack_150 + (uVar5 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *(undefined4 *)pcVar1 = (undefined4)local_148;
          *(undefined4 *)(pcVar1 + ((uVar5 & 0xffffffff) - 4)) =
               *(undefined4 *)((long)&uStack_150 + (uVar5 & 0xffffffff) + 4);
        }
      }
      else {
        *(ulong *)pcVar1 = CONCAT44(local_148._4_4_,(undefined4)local_148);
        *(undefined8 *)(pcVar1 + ((uVar5 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)&uStack_150 + (uVar5 & 0xffffffff));
        lVar7 = (long)pcVar1 - (long)((ulong)(pcVar1 + 8) & 0xfffffffffffffff8);
        puVar8 = (undefined8 *)((long)&local_148 - lVar7);
        puVar9 = (undefined8 *)((ulong)(pcVar1 + 8) & 0xfffffffffffffff8);
        for (uVar5 = (ulong)(uVar3 + (int)lVar7 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
          puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
        }
      }
    }
    else {
      uStack_150 = (code *)0x10033b;
      iVar2 = strcmp(pcVar1,"digest-check");
      if (iVar2 != 0) {
        uStack_150 = (code *)0x10034e;
        iVar2 = strcmp(pcVar1,"stop-property-mirror");
        if (iVar2 != 0) goto LAB_00100314;
      }
      if ((ulong)param_2[3] < 4) goto LAB_001002be;
      *(undefined4 *)param_2[2] = 0;
      param_2[4] = 4;
    }
LAB_00100314:
    param_2 = param_2 + 5;
    pcVar1 = (char *)*param_2;
  } while( true );
}



bool OSSL_provider_init(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 in_R11;
  
  iVar7 = *param_2;
  if (iVar7 != 0) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    do {
      while (bVar1 = bVar6, iVar7 == 6) {
        in_R10 = *(undefined8 *)(param_2 + 2);
        bVar3 = true;
LAB_001004a0:
        iVar7 = param_2[4];
        param_2 = param_2 + 4;
        bVar6 = bVar1;
        if (iVar7 == 0) goto LAB_001004e0;
      }
      if (iVar7 < 7) {
        if (iVar7 == 2) {
          unaff_RBX = *(undefined8 *)(param_2 + 2);
          bVar5 = true;
        }
        else if (iVar7 == 5) {
          in_R11 = *(undefined8 *)(param_2 + 2);
          bVar4 = true;
        }
        goto LAB_001004a0;
      }
      if (iVar7 == 7) {
        param_6 = *(undefined8 *)(param_2 + 2);
        bVar2 = true;
        goto LAB_001004a0;
      }
      if (iVar7 != 0x2f) goto LAB_001004a0;
      param_5 = *(undefined8 *)(param_2 + 2);
      iVar7 = param_2[4];
      param_2 = param_2 + 4;
      bVar1 = true;
      bVar6 = true;
    } while (iVar7 != 0);
LAB_001004e0:
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
      c_get_params = unaff_RBX;
    }
  }
  puVar8 = (undefined8 *)malloc(0x20);
  if (puVar8 != (undefined8 *)0x0) {
    pcVar9 = strdup("test/p_test.c");
    *puVar8 = pcVar9;
    pcVar10 = strdup("OSSL_provider_init");
    puVar8[2] = param_1;
    puVar8[1] = pcVar10;
    p_set_error_constprop_0(0x39,1,pcVar9,0x149,pcVar10,0);
    *param_4 = puVar8;
    *param_3 = p_test_table;
  }
  return puVar8 != (undefined8 *)0x0;
}


