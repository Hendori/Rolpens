
bool psa_is_key_present_in_storage(undefined4 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = psa_its_get_info(param_1,auStack_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != -0x8c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 psa_destroy_persistent_key(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = psa_its_get_info(param_1,auStack_28);
  if (iVar1 == -0x8c) {
LAB_0010009f:
    uVar2 = 0;
  }
  else {
    iVar1 = psa_its_remove(param_1);
    if (iVar1 == 0) {
      iVar1 = psa_its_get_info(param_1,auStack_28);
      if (iVar1 == -0x8c) goto LAB_0010009f;
    }
    uVar2 = 0xffffff67;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void psa_format_key_data_for_storage
               (void *param_1,size_t param_2,undefined2 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_4 + 1) = 0;
  *param_4 = 0x59454b00415350;
  *(undefined4 *)((long)param_4 + 0xc) = *(undefined4 *)(param_3 + 2);
  *(undefined2 *)(param_4 + 2) = *param_3;
  *(undefined2 *)((long)param_4 + 0x12) = param_3[1];
  *(undefined4 *)((long)param_4 + 0x14) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_3 + 6);
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(int *)(param_4 + 4) = (int)param_2;
  *(undefined4 *)((long)param_4 + 0x1c) = uVar1;
  memcpy((void *)((long)param_4 + 0x24),param_1,param_2);
  return;
}



undefined8
psa_parse_key_data_from_storage
          (long *param_1,ulong param_2,undefined8 *param_3,ulong *param_4,undefined2 *param_5)

{
  void *pvVar1;
  ulong __size;
  
  if (param_2 < 0x24) {
    return 0xffffff67;
  }
  if ((*param_1 == 0x59454b00415350) && ((int)param_1[1] == 0)) {
    param_2 = param_2 - 0x24;
    __size = (ulong)*(uint *)(param_1 + 4);
    if (0x1fff < param_2) {
      param_2 = 0x1fff;
    }
    *param_4 = __size;
    if (__size <= param_2) {
      if (__size == 0) {
        *param_3 = 0;
      }
      else {
        pvVar1 = calloc(1,__size);
        *param_3 = pvVar1;
        if (pvVar1 == (void *)0x0) {
          return 0xffffff73;
        }
        __memcpy_chk(pvVar1,(long)param_1 + 0x24,__size,__size);
      }
      *(undefined4 *)(param_5 + 2) = *(undefined4 *)((long)param_1 + 0xc);
      *param_5 = (short)param_1[2];
      param_5[1] = *(undefined2 *)((long)param_1 + 0x12);
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)((long)param_1 + 0x14);
      *(int *)(param_5 + 6) = (int)param_1[3];
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)((long)param_1 + 0x1c);
      return 0;
    }
  }
  return 0xffffff67;
}



int psa_save_persistent_key(long param_1,long param_2,ulong param_3)

{
  ulong __size;
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  uint local_38 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (param_3 == 0)) {
    iVar2 = -0x87;
    goto LAB_001002bf;
  }
  if (0x1fff < param_3) {
    iVar2 = -0x8e;
    goto LAB_001002bf;
  }
  __size = param_3 + 0x24;
  pvVar3 = calloc(1,__size);
  if (pvVar3 == (void *)0x0) {
    iVar2 = -0x8d;
    goto LAB_001002bf;
  }
  psa_format_key_data_for_storage(param_2,param_3,param_1,pvVar3);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = psa_its_get_info(uVar1,local_38);
  if (iVar2 == -0x8c) {
    iVar2 = psa_its_set(uVar1,__size & 0xffffffff,pvVar3,0);
    if (iVar2 == 0) {
      iVar2 = psa_its_get_info(uVar1,local_38);
      if (iVar2 == 0) {
        if (__size == local_38[0]) goto LAB_001002b4;
        iVar2 = -0x99;
      }
      psa_its_remove(uVar1);
    }
    else {
      iVar2 = -0x99;
    }
  }
  else {
    iVar2 = -0x8b;
  }
LAB_001002b4:
  mbedtls_zeroize_and_free(pvVar3,__size);
LAB_001002bf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void psa_free_persistent_key_data(void)

{
  mbedtls_zeroize_and_free();
  return;
}



ulong psa_load_persistent_key(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  ulong local_50;
  uint local_48 [2];
  long local_40;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = psa_its_get_info(uVar1,local_48);
  if ((int)uVar3 == 0) {
    uVar3 = (ulong)local_48[0];
    pvVar4 = calloc(1,uVar3);
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0xffffff73;
    }
    else {
      local_50 = 0;
      uVar2 = psa_its_get_info(uVar1,local_48);
      if (uVar2 == 0) {
        uVar2 = psa_its_get(uVar1,0,uVar3,pvVar4,&local_50);
        if (uVar3 == local_50) {
          if ((uVar2 == 0) &&
             (uVar2 = psa_parse_key_data_from_storage(pvVar4,uVar3,param_2,param_3,param_1),
             uVar2 == 0)) {
            if (*param_2 == 0) {
              uVar2 = 0xffffff6e;
            }
            else if (*param_3 == 0) {
              uVar2 = 0xffffff6e;
            }
          }
        }
        else {
          uVar2 = 0xffffff67;
        }
      }
      mbedtls_zeroize_and_free(pvVar4,uVar3);
      uVar3 = (ulong)uVar2;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


