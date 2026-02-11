
undefined4 algorithm_do_this(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined4 local_58;
  int local_54;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  iVar7 = *(int *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = iVar7;
  if (iVar7 == 0) {
    local_54 = 0x16;
    iVar7 = 1;
  }
  local_58 = 1;
  do {
    local_48 = 0;
    plVar5 = (long *)ossl_provider_query_operation(param_1,iVar7,&local_48);
    uVar3 = local_48;
    local_44 = 0;
    iVar4 = (**(code **)(param_2 + 0x18))(local_48,*(undefined8 *)(param_2 + 0x38));
    if (iVar4 == 0) {
      ossl_provider_unquery_operation(param_1,iVar7,plVar5);
LAB_001001a0:
      local_58 = 0;
      break;
    }
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      local_44 = 1;
LAB_0010011f:
      if (plVar5 != (long *)0x0) {
        lVar1 = *plVar5;
        plVar2 = plVar5;
        while (lVar1 != 0) {
          (**(code **)(param_2 + 0x20))(param_1,plVar2,uVar3);
          uVar6 = *(undefined8 *)(param_2 + 0x38);
          lVar1 = plVar2[4];
          plVar2 = plVar2 + 4;
        }
      }
      if (*(code **)(param_2 + 0x30) == (code *)0x0) {
LAB_00100087:
        local_44 = 1;
      }
      else {
        iVar4 = (**(code **)(param_2 + 0x30))(param_1,iVar7,uVar3,uVar6,&local_44);
        if (iVar4 == 0) goto LAB_00100178;
        uVar6 = *(undefined8 *)(param_2 + 0x38);
      }
    }
    else {
      iVar4 = (**(code **)(param_2 + 0x10))(param_1,iVar7,uVar3,uVar6,&local_44);
      if (iVar4 != 0) {
        uVar6 = *(undefined8 *)(param_2 + 0x38);
        if (local_44 != 0) goto LAB_0010011f;
        goto LAB_00100087;
      }
LAB_00100178:
      local_44 = -1;
      uVar6 = *(undefined8 *)(param_2 + 0x38);
    }
    (**(code **)(param_2 + 0x28))(uVar6);
    iVar4 = local_44;
    ossl_provider_unquery_operation(param_1,iVar7,plVar5);
    if (iVar4 < 0) goto LAB_001001a0;
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = local_58;
    }
    iVar7 = iVar7 + 1;
    local_58 = uVar3;
  } while (iVar7 <= local_54);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_algorithm_do_all
               (undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = 0;
  local_40 = param_7;
  local_38 = param_8;
  local_30 = param_9;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = param_4;
  local_50 = param_5;
  local_48 = param_6;
  if (param_3 == 0) {
    ossl_provider_doall_activated(param_1,0x100000,&local_68);
  }
  else {
    uVar1 = ossl_provider_libctx(param_3);
    lVar2 = ossl_lib_ctx_get_concrete(param_1);
    lVar3 = ossl_lib_ctx_get_concrete(uVar1);
    if (lVar2 == lVar3) {
      local_68 = uVar1;
      algorithm_do_this(param_3,&local_68);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_algorithm_get1_first_name(undefined8 *param_1)

{
  char *__s;
  char *pcVar1;
  undefined8 uVar2;
  size_t sVar3;
  
  __s = (char *)*param_1;
  if (__s != (char *)0x0) {
    pcVar1 = strchr(__s,0x3a);
    sVar3 = (long)pcVar1 - (long)__s;
    if (pcVar1 == (char *)0x0) {
      sVar3 = strlen(__s);
    }
    uVar2 = CRYPTO_strndup(__s,sVar3,"crypto/core_algorithm.c",0xc3);
    return uVar2;
  }
  return 0;
}


