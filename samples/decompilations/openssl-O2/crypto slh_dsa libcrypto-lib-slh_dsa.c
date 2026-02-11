
undefined1 *
msg_encode_part_0_constprop_0
          (void *param_1,size_t param_2,void *param_3,ulong param_4,undefined1 *param_5,
          ulong *param_6)

{
  ulong uVar1;
  
  if (0xff < param_4) {
    return (undefined1 *)0x0;
  }
  uVar1 = param_2 + 2 + param_4;
  *param_6 = uVar1;
  if (0x400 < uVar1) {
    param_5 = (undefined1 *)CRYPTO_zalloc(uVar1,"crypto/slh_dsa/slh_dsa.c",0xfc);
    if (param_5 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
  }
  param_5[1] = (char)param_4;
  *param_5 = 0;
  memcpy(param_5 + 2,param_3,param_4);
  memcpy(param_5 + param_4 + 2,param_1,param_2);
  return param_5;
}



undefined8 get_tree_ids_isra_0(long *param_1,int param_2,int param_3,ulong *param_4,uint *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar8 = (param_2 - param_3) + 7;
  uVar4 = (ulong)(uVar8 >> 3);
  if (uVar4 <= (ulong)param_1[1]) {
    uVar6 = param_1[1] - uVar4;
    pbVar7 = (byte *)*param_1;
    param_1[1] = uVar6;
    uVar5 = param_3 + 7U >> 3;
    pbVar3 = pbVar7 + uVar4;
    uVar4 = (ulong)uVar5;
    *param_1 = (long)pbVar3;
    if (uVar4 <= uVar6) {
      pbVar1 = pbVar3 + uVar4;
      param_1[1] = uVar6 - uVar4;
      *param_1 = (long)pbVar1;
      if (uVar8 >> 3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar4 = uVar4 * 0x100 + (ulong)bVar2;
        } while (pbVar3 != pbVar7);
        uVar4 = 0xffffffffffffffffU >> (((byte)param_3 + 0x40) - (char)param_2 & 0x3f) & uVar4;
      }
      *param_4 = uVar4;
      if (param_3 + 7U >> 3 != 0) {
        uVar5 = 0;
        do {
          bVar2 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          uVar5 = uVar5 * 0x100 + (uint)bVar2;
        } while (pbVar1 != pbVar3);
        uVar5 = uVar5 & (int)(1L << ((byte)param_3 & 0x3f)) - 1U;
      }
      *param_5 = uVar5;
      return 1;
    }
  }
  return 0;
}



undefined8
ossl_slh_dsa_sign(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,int param_7,long param_8,ulong *param_9,
                 ulong param_10)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *ptr;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  undefined4 local_52c;
  undefined8 local_528;
  undefined8 local_520;
  undefined1 *local_518;
  ulong local_510;
  undefined1 local_508 [64];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [64];
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_528 = 0;
  if (param_8 == 0) {
    uVar13 = 1;
    *param_9 = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x34);
    goto LAB_00100513;
  }
  if (param_7 == 0) {
    ptr = param_2;
    local_528 = param_3;
    if (param_2 == (undefined1 *)0x0) goto LAB_001004c1;
  }
  else {
    ptr = (undefined1 *)
          msg_encode_part_0_constprop_0(param_2,param_3,param_4,param_5,local_448,&local_528);
    if (ptr == (undefined1 *)0x0) {
LAB_001004c1:
      uVar13 = 0;
      goto LAB_00100513;
    }
  }
  uVar13 = local_528;
  lVar2 = *param_1;
  lVar12 = *(long *)(lVar2 + 0xa0);
  iVar7 = *(int *)(lVar12 + 0x24);
  uVar14 = (ulong)*(uint *)(lVar12 + 0x34);
  iVar1 = *(int *)(lVar12 + 0x20);
  puVar3 = *(undefined8 **)(lVar2 + 0xb0);
  lVar4 = *(long *)(lVar2 + 0xa8);
  if (param_10 < uVar14) {
    ERR_new();
    ERR_set_debug("crypto/slh_dsa/slh_dsa.c",0x49,"slh_sign_internal");
    ERR_set_error(0x39,0xb3,"is %zu, should be at least %zu",param_10,uVar14);
LAB_001004f8:
    uVar13 = 0;
  }
  else {
    if (*(int *)(lVar2 + 0x98) == 0) {
      ERR_new();
      ERR_set_debug("crypto/slh_dsa/slh_dsa.c",0x4f,"slh_sign_internal");
      ERR_set_error(0x39,0x80,0);
      goto LAB_001004f8;
    }
    iVar6 = WPACKET_init_static_len(local_508,param_8,uVar14,0);
    if (iVar6 == 0) goto LAB_001004f8;
    local_510 = (ulong)*(uint *)(lVar12 + 0x28);
    lVar8 = (ulong)(uint)(*(int *)(*(long *)(lVar2 + 0xa0) + 0x10) * 2) + lVar2;
    if (param_6 == 0) {
      param_6 = lVar8;
    }
    local_518 = local_488;
    (**(code **)(lVar4 + 0x48))(local_4a8);
    uVar9 = WPACKET_get_curr(local_508);
    iVar6 = (*(code *)puVar3[2])
                      (param_1,(ulong)*(uint *)(*(long *)(lVar2 + 0xa0) + 0x10) + lVar2,param_6,ptr,
                       uVar13,local_508);
    if (((iVar6 == 0) ||
        (iVar6 = (*(code *)*puVar3)(param_1,uVar9,lVar8,
                                    (ulong)(uint)(*(int *)(*(long *)(lVar2 + 0xa0) + 0x10) * 3) +
                                    lVar2,ptr,uVar13,local_488,0x31), puVar5 = local_518, iVar6 == 0
        )) || (uVar10 = (ulong)(iVar7 * iVar1 + 7U >> 3), local_510 < uVar10)) {
LAB_00100540:
      uVar13 = 0;
    }
    else {
      local_510 = local_510 - uVar10;
      local_518 = local_518 + uVar10;
      iVar7 = get_tree_ids_isra_0(&local_518,*(undefined4 *)(lVar12 + 0x14),
                                  *(undefined4 *)(lVar12 + 0x1c),&local_520,&local_52c);
      if (iVar7 == 0) goto LAB_00100540;
      (**(code **)(lVar4 + 8))(local_4a8,local_520);
      (**(code **)(lVar4 + 0x10))(local_4a8,3);
      (**(code **)(lVar4 + 0x18))(local_4a8);
      puVar11 = (undefined1 *)WPACKET_get_curr(local_508);
      iVar7 = ossl_slh_fors_sign(param_1,puVar5,lVar2,lVar8,local_4a8,local_508);
      if (iVar7 != 0) {
        lVar12 = WPACKET_get_curr(local_508);
        if (-1 < lVar12 - (long)puVar11) {
          local_518 = puVar11;
          local_510 = lVar12 - (long)puVar11;
          iVar7 = ossl_slh_fors_pk_from_sig
                            (param_1,&local_518,puVar5,lVar8,local_4a8,local_4c8,0x20);
          if (iVar7 != 0) {
            ossl_slh_ht_sign(param_1,local_4c8,lVar2,lVar8,local_520,local_52c,local_508);
          }
        }
      }
      uVar13 = 1;
      *param_9 = uVar14;
    }
    iVar7 = WPACKET_finish(local_508);
    if (iVar7 == 0) goto LAB_001004f8;
  }
  if (ptr != local_448 && param_2 != ptr) {
    CRYPTO_free(ptr);
  }
LAB_00100513:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



bool ossl_slh_dsa_verify(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,int param_6,long param_7,ulong param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 *ptr;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined8 local_4f0;
  long local_4e8;
  ulong local_4e0;
  undefined1 *local_4d8;
  long local_4d0;
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [64];
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = param_2;
  uVar6 = param_3;
  if (param_6 != 0) {
    ptr = (undefined1 *)
          msg_encode_part_0_constprop_0(param_2,param_3,param_4,param_5,local_448,&local_4f8);
    uVar6 = local_4f8;
  }
  local_4f8 = uVar6;
  uVar6 = local_4f8;
  bVar12 = false;
  if (ptr == (undefined1 *)0x0) goto LAB_00100737;
  lVar10 = *param_1;
  lVar3 = *(long *)(lVar10 + 0xa0);
  puVar4 = *(undefined8 **)(lVar10 + 0xb0);
  lVar5 = *(long *)(lVar10 + 0xa8);
  uVar9 = (ulong)*(uint *)(lVar3 + 0x10);
  iVar8 = *(int *)(lVar3 + 0x24);
  iVar2 = *(int *)(lVar3 + 0x20);
  if (*(long *)(lVar10 + 0x80) == 0) {
    ERR_new();
    ERR_set_debug("crypto/slh_dsa/slh_dsa.c",0xaa,"slh_verify_internal");
    ERR_set_error(0x39,0x80,0);
LAB_0010070e:
    bVar12 = false;
  }
  else {
    if ((param_8 != *(uint *)(lVar3 + 0x34)) || (local_4e0 = param_8, param_8 < uVar9))
    goto LAB_0010070e;
    local_4e8 = param_7 + uVar9;
    local_4e0 = param_8 - uVar9;
    (**(code **)(lVar5 + 0x48))(local_4c8);
    iVar7 = *(int *)(*(long *)(lVar10 + 0xa0) + 0x10);
    lVar1 = lVar10 + (ulong)(uint)(iVar7 * 2);
    lVar10 = (ulong)(uint)(iVar7 * 3) + lVar10;
    iVar7 = (*(code *)*puVar4)(param_1,param_7,lVar1,lVar10,ptr,uVar6,local_488);
    if (iVar7 == 0) goto LAB_0010070e;
    local_4d0 = 0x31;
    uVar11 = iVar8 * iVar2 + 7;
    uVar9 = (ulong)(uVar11 >> 3);
    if (399 < uVar11) goto LAB_0010070e;
    local_4d8 = local_488 + uVar9;
    local_4d0 = 0x31 - uVar9;
    iVar8 = get_tree_ids_isra_0(&local_4d8,*(undefined4 *)(lVar3 + 0x14),
                                *(undefined4 *)(lVar3 + 0x1c),&local_4f0,&local_4fc,0x31);
    if (iVar8 == 0) goto LAB_0010070e;
    (**(code **)(lVar5 + 8))(local_4c8,local_4f0);
    (**(code **)(lVar5 + 0x10))(local_4c8,3);
    (**(code **)(lVar5 + 0x18))(local_4c8,local_4fc);
    iVar8 = ossl_slh_fors_pk_from_sig(param_1,&local_4e8,local_488,lVar1,local_4c8,local_4a8,0x20);
    if ((iVar8 == 0) ||
       (iVar8 = ossl_slh_ht_verify(param_1,local_4a8,&local_4e8,lVar1,local_4f0,local_4fc,lVar10),
       iVar8 == 0)) goto LAB_0010070e;
    bVar12 = local_4e0 == 0;
  }
  if ((ptr != local_448) && (param_2 != ptr)) {
    CRYPTO_free(ptr);
  }
LAB_00100737:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar12;
}


