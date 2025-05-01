
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
ossl_slh_dsa_sign(long *param_1,undefined1 *param_2,size_t param_3,void *param_4,ulong param_5,
                 long param_6,int param_7,long param_8,ulong *param_9,ulong param_10)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  ulong local_560;
  undefined4 local_524;
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
  if (param_8 == 0) {
    *param_9 = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x34);
    uVar9 = 1;
    goto LAB_00100460;
  }
  if (param_7 == 0) {
    if (param_2 == (undefined1 *)0x0) goto LAB_00100458;
    bVar14 = false;
    local_560 = param_3;
  }
  else {
    if (0xff < param_5) {
LAB_00100458:
      uVar9 = 0;
      goto LAB_00100460;
    }
    local_560 = param_3 + param_5 + 2;
    if (local_560 < 0x401) {
      bVar14 = false;
      puVar7 = local_448;
    }
    else {
      puVar7 = (undefined1 *)CRYPTO_zalloc(local_560,"crypto/slh_dsa/slh_dsa.c",0xfc);
      if (puVar7 == (undefined1 *)0x0) goto LAB_00100458;
      bVar14 = param_2 != puVar7;
    }
    puVar7[1] = (char)param_5;
    *puVar7 = 0;
    memcpy(puVar7 + 2,param_4,param_5);
    memcpy(puVar7 + param_5 + 2,param_2,param_3);
    param_2 = puVar7;
  }
  lVar2 = *param_1;
  lVar12 = *(long *)(lVar2 + 0xa0);
  iVar6 = *(int *)(lVar12 + 0x24);
  uVar13 = (ulong)*(uint *)(lVar12 + 0x34);
  iVar1 = *(int *)(lVar12 + 0x20);
  puVar3 = *(undefined8 **)(lVar2 + 0xb0);
  lVar4 = *(long *)(lVar2 + 0xa8);
  if (param_10 < uVar13) {
    ERR_new();
    uVar9 = 0;
    ERR_set_debug("crypto/slh_dsa/slh_dsa.c",0x49,"slh_sign_internal");
    ERR_set_error(0x39,0xb3,"is %zu, should be at least %zu",param_10,uVar13);
  }
  else {
    if (*(int *)(lVar2 + 0x98) == 0) {
      ERR_new();
      ERR_set_debug("crypto/slh_dsa/slh_dsa.c",0x4f,"slh_sign_internal");
      ERR_set_error(0x39,0x80,0);
    }
    else {
      iVar5 = WPACKET_init_static_len(local_508,param_8,uVar13,0);
      if (iVar5 != 0) {
        local_510 = (ulong)*(uint *)(lVar12 + 0x28);
        lVar8 = (ulong)(uint)(*(int *)(*(long *)(lVar2 + 0xa0) + 0x10) * 2) + lVar2;
        if (param_6 == 0) {
          param_6 = lVar8;
        }
        local_518 = local_488;
        (**(code **)(lVar4 + 0x48))(local_4a8);
        uVar9 = WPACKET_get_curr(local_508);
        iVar5 = (*(code *)puVar3[2])
                          (param_1,(ulong)*(uint *)(*(long *)(lVar2 + 0xa0) + 0x10) + lVar2,param_6,
                           param_2,local_560,local_508);
        if (iVar5 == 0) {
LAB_00100490:
          uVar9 = 0;
        }
        else {
          iVar5 = (*(code *)*puVar3)(param_1,uVar9,lVar8,
                                     (ulong)(uint)(*(int *)(*(long *)(lVar2 + 0xa0) + 0x10) * 3) +
                                     lVar2,param_2,local_560,local_488,0x31);
          puVar7 = local_518;
          if (iVar5 == 0) goto LAB_00100490;
          uVar10 = (ulong)(iVar6 * iVar1 + 7U >> 3);
          if (local_510 < uVar10) goto LAB_00100490;
          local_510 = local_510 - uVar10;
          local_518 = local_518 + uVar10;
          iVar6 = get_tree_ids_isra_0(&local_518,*(undefined4 *)(lVar12 + 0x14),
                                      *(undefined4 *)(lVar12 + 0x1c),&local_520,&local_524);
          if (iVar6 == 0) goto LAB_00100490;
          (**(code **)(lVar4 + 8))(local_4a8,local_520);
          (**(code **)(lVar4 + 0x10))(local_4a8,3);
          (**(code **)(lVar4 + 0x18))(local_4a8);
          puVar11 = (undefined1 *)WPACKET_get_curr(local_508);
          iVar6 = ossl_slh_fors_sign(param_1,puVar7,lVar2,lVar8,local_4a8,local_508);
          if (iVar6 != 0) {
            lVar12 = WPACKET_get_curr(local_508);
            if (-1 < lVar12 - (long)puVar11) {
              local_518 = puVar11;
              local_510 = lVar12 - (long)puVar11;
              iVar6 = ossl_slh_fors_pk_from_sig
                                (param_1,&local_518,puVar7,lVar8,local_4a8,local_4c8,0x20);
              if (iVar6 != 0) {
                ossl_slh_ht_sign(param_1,local_4c8,lVar2,lVar8,local_520,local_524,local_508);
              }
            }
          }
          uVar9 = 1;
          *param_9 = uVar13;
        }
        iVar6 = WPACKET_finish(local_508);
        if (iVar6 != 0) goto LAB_001004a0;
      }
    }
    uVar9 = 0;
  }
LAB_001004a0:
  if (bVar14) {
    CRYPTO_free(param_2);
  }
LAB_00100460:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_slh_dsa_verify(long *param_1,undefined1 *param_2,ulong param_3,void *param_4,ulong param_5
                        ,int param_6,long param_7,ulong param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  undefined4 local_4f4;
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
  if (param_6 == 0) {
    if (param_2 == (undefined1 *)0x0) goto LAB_00100910;
    bVar12 = false;
  }
  else {
    if (0xff < param_5) {
LAB_00100910:
      bVar13 = false;
      goto LAB_001008b5;
    }
    uVar9 = param_3 + param_5 + 2;
    if (uVar9 < 0x401) {
      bVar12 = false;
      puVar8 = local_448;
    }
    else {
      puVar8 = (undefined1 *)CRYPTO_zalloc(uVar9,"crypto/slh_dsa/slh_dsa.c",0xfc);
      if (puVar8 == (undefined1 *)0x0) goto LAB_00100910;
      bVar12 = param_2 != puVar8;
    }
    *puVar8 = 0;
    puVar8[1] = (char)param_5;
    memcpy(puVar8 + 2,param_4,param_5);
    memcpy(puVar8 + param_5 + 2,param_2,param_3);
    param_2 = puVar8;
    param_3 = uVar9;
  }
  lVar10 = *param_1;
  lVar3 = *(long *)(lVar10 + 0xa0);
  puVar4 = *(undefined8 **)(lVar10 + 0xb0);
  lVar5 = *(long *)(lVar10 + 0xa8);
  uVar9 = (ulong)*(uint *)(lVar3 + 0x10);
  iVar7 = *(int *)(lVar3 + 0x24);
  iVar2 = *(int *)(lVar3 + 0x20);
  if (*(long *)(lVar10 + 0x80) == 0) {
    ERR_new();
    ERR_set_debug("crypto/slh_dsa/slh_dsa.c",0xaa,"slh_verify_internal");
    ERR_set_error(0x39,0x80,0);
LAB_00100898:
    bVar13 = false;
  }
  else {
    if (param_8 != *(uint *)(lVar3 + 0x34)) goto LAB_00100898;
    local_4e0 = param_8;
    if (param_8 < uVar9) goto LAB_00100898;
    local_4e0 = param_8 - uVar9;
    local_4e8 = param_7 + uVar9;
    (**(code **)(lVar5 + 0x48))(local_4c8);
    iVar6 = *(int *)(*(long *)(lVar10 + 0xa0) + 0x10);
    lVar1 = lVar10 + (ulong)(uint)(iVar6 * 2);
    lVar10 = (ulong)(uint)(iVar6 * 3) + lVar10;
    iVar6 = (*(code *)*puVar4)(param_1,param_7,lVar1,lVar10,param_2,param_3,local_488);
    if (iVar6 == 0) goto LAB_00100898;
    local_4d0 = 0x31;
    uVar11 = iVar7 * iVar2 + 7;
    uVar9 = (ulong)(uVar11 >> 3);
    if (399 < uVar11) goto LAB_00100898;
    local_4d8 = local_488 + uVar9;
    local_4d0 = 0x31 - uVar9;
    iVar7 = get_tree_ids_isra_0(&local_4d8,*(undefined4 *)(lVar3 + 0x14),
                                *(undefined4 *)(lVar3 + 0x1c),&local_4f0,&local_4f4,0x31);
    if (iVar7 == 0) goto LAB_00100898;
    (**(code **)(lVar5 + 8))(local_4c8,local_4f0);
    (**(code **)(lVar5 + 0x10))(local_4c8,3);
    (**(code **)(lVar5 + 0x18))(local_4c8,local_4f4);
    iVar7 = ossl_slh_fors_pk_from_sig(param_1,&local_4e8,local_488,lVar1,local_4c8,local_4a8,0x20);
    if (iVar7 == 0) goto LAB_00100898;
    iVar7 = ossl_slh_ht_verify(param_1,local_4a8,&local_4e8,lVar1,local_4f0,local_4f4,lVar10);
    if (iVar7 == 0) goto LAB_00100898;
    bVar13 = local_4e0 == 0;
  }
  if (bVar12) {
    CRYPTO_free(param_2);
  }
LAB_001008b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


