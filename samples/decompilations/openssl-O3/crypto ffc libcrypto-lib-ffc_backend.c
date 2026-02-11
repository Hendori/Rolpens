
undefined8 ossl_ffc_params_fromdata(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_54;
  BIGNUM *local_50;
  BIGNUM *local_48;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  local_40 = (BIGNUM *)0x0;
  local_38 = (BIGNUM *)0x0;
  lVar2 = OSSL_PARAM_locate_const(param_2,"group");
  if (lVar2 == 0) {
LAB_001000d2:
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC2);
    lVar4 = OSSL_PARAM_locate_const(param_2,&_LC3);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_BN(lVar2,&local_50);
      if (iVar1 == 0) goto LAB_00100064;
    }
    if (lVar4 != 0) {
      iVar1 = OSSL_PARAM_get_BN(lVar4,&local_48);
      if (iVar1 == 0) goto LAB_00100064;
    }
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_BN(lVar3,&local_40);
      if (iVar1 == 0) goto LAB_00100064;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"gindex");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_int(lVar2,&local_54);
      if (iVar1 == 0) goto LAB_00100064;
      *(undefined4 *)(param_1 + 0x38) = local_54;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"pcounter");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_int(lVar2,&local_54);
      if (iVar1 == 0) goto LAB_00100064;
      *(undefined4 *)(param_1 + 0x30) = local_54;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC6);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_BN(lVar2,&local_38);
      if (iVar1 == 0) goto LAB_00100064;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"hindex");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_int(lVar2,&local_54);
      if (iVar1 == 0) goto LAB_00100064;
      *(undefined4 *)(param_1 + 0x3c) = local_54;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC8);
    if (lVar2 == 0) {
LAB_00100245:
      lVar2 = OSSL_PARAM_locate_const(param_2,"validate-pq");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,&local_54);
        if (iVar1 == 0) goto LAB_00100064;
        ossl_ffc_params_enable_flags(param_1,1,local_54);
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"validate-g");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,&local_54);
        if (iVar1 == 0) goto LAB_00100064;
        ossl_ffc_params_enable_flags(param_1,2,local_54);
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"validate-legacy");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,&local_54);
        if (iVar1 == 0) goto LAB_00100064;
        ossl_ffc_params_enable_flags(param_1,4,local_54);
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"digest");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) != 4) goto LAB_00100064;
        lVar3 = OSSL_PARAM_locate_const(param_2,"properties");
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 8) != 4) goto LAB_00100064;
          lVar3 = *(long *)(lVar3 + 0x10);
        }
        ossl_ffc_set_digest(param_1,*(undefined8 *)(lVar2 + 0x10),lVar3);
      }
      ossl_ffc_params_set0_pqg(param_1,local_50,local_48,local_40);
      ossl_ffc_params_set0_j(param_1,local_38);
      uVar5 = 1;
      goto LAB_0010008e;
    }
    if (*(int *)(lVar2 + 8) == 5) {
      iVar1 = ossl_ffc_params_set_seed
                        (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      if (iVar1 != 0) goto LAB_00100245;
    }
  }
  else if ((*(int *)(lVar2 + 8) == 4) && (*(long *)(lVar2 + 0x10) != 0)) {
    lVar2 = ossl_ffc_name_to_dh_named_group();
    if (lVar2 != 0) {
      iVar1 = ossl_ffc_named_group_set(param_1,lVar2);
      if (iVar1 != 0) goto LAB_001000d2;
    }
  }
LAB_00100064:
  BN_free(local_38);
  BN_free(local_50);
  BN_free(local_48);
  BN_free(local_40);
  uVar5 = 0;
LAB_0010008e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


