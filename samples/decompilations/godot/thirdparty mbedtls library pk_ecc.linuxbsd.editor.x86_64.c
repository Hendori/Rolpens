
undefined8 mbedtls_pk_ecc_set_group(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  int *piStack_40;
  long local_30;
  
  local_48 = *param_1;
  piStack_40 = (int *)param_1[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = mbedtls_pk_get_type(&local_48);
  piVar4 = (int *)0;
  if (iVar2 - 2U < 3) {
    piVar4 = piStack_40;
  }
  local_48 = *param_1;
  piStack_40 = (int *)param_1[1];
  iVar2 = mbedtls_pk_get_type(&local_48);
  if (2 < iVar2 - 2U) {
mbedtls_pk_ecc_set_group_cold:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*piStack_40 != 0) {
    local_48 = *param_1;
    piStack_40 = (int *)param_1[1];
    iVar2 = mbedtls_pk_get_type(&local_48);
    if (2 < iVar2 - 2U) goto mbedtls_pk_ecc_set_group_cold;
    if (*piStack_40 != param_2) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0xffffc300;
      }
      goto LAB_001000d6;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar3 = mbedtls_ecp_group_load(piVar4,param_2);
    return uVar3;
  }
LAB_001000d6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_pk_ecc_set_key(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 *puStack_30;
  long local_20;
  
  local_38 = *param_1;
  puStack_30 = (undefined4 *)param_1[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = mbedtls_pk_get_type(&local_38);
  if (2 < iVar2 - 2U) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  iVar2 = mbedtls_ecp_read_key(*puStack_30,puStack_30,param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = iVar2 + -0x3d00;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_pk_ecc_set_pubkey_from_prv
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  mbedtls_ecp_mul(lVar1,lVar1 + 0xd0,lVar1 + 0xc0,lVar1 + 0x38,param_4,param_5);
  return;
}



void mbedtls_pk_ecc_set_pubkey(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  iVar2 = mbedtls_ecp_point_read_binary(lVar1,lVar1 + 0xd0,param_2,param_3);
  if (iVar2 != 0) {
    return;
  }
  mbedtls_ecp_check_pubkey(lVar1,lVar1 + 0xd0);
  return;
}



void mbedtls_pk_ecc_set_group_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void mbedtls_pk_ecc_set_key_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


