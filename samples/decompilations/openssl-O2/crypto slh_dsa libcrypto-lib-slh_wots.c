
undefined8
slh_wots_chain(long *param_1,undefined8 param_2,uint param_3,byte param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong extraout_RDX;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  ulong uVar8;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_1;
  pcVar2 = *(code **)(*(long *)(lVar1 + 0xb0) + 0x18);
  pcVar3 = *(code **)(*(long *)(lVar1 + 0xa8) + 0x38);
  uVar6 = (ulong)*(uint *)(*(long *)(lVar1 + 0xa0) + 0x10);
  if (param_4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = WPACKET_memcpy(param_7,param_2,uVar6);
      return uVar5;
    }
  }
  else {
    iVar4 = WPACKET_allocate_bytes(param_7,uVar6,&local_48);
    if (iVar4 != 0) {
      (*pcVar3)(param_6,param_3 & 0xff);
      iVar4 = (*pcVar2)(param_1,param_5,param_6,param_2,uVar6,local_48,uVar6);
      if (iVar4 != 0) {
        uVar7 = (ulong)(param_3 & 0xff);
        uVar8 = extraout_RDX;
        do {
          uVar7 = uVar7 + 1;
          if ((ulong)(long)(int)((param_3 & 0xff) + (uint)param_4) <= uVar7) {
            uVar5 = 1;
            goto LAB_00100121;
          }
          (*pcVar3)(param_6,uVar7 & 0xffffffff,uVar8);
          uVar8 = uVar6;
          iVar4 = (*pcVar2)(param_1,param_5,param_6,local_48,uVar6,local_48);
        } while (iVar4 != 0);
      }
    }
    uVar5 = 0;
LAB_00100121:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_slh_wots_pk_gen
              (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  ulong len;
  undefined8 extraout_RDX;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 *puVar9;
  undefined8 local_950;
  undefined1 local_948 [64];
  undefined1 local_908 [32];
  undefined1 local_8e8 [32];
  undefined1 local_8c8 [32];
  undefined1 local_8a8 [2152];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *param_1;
  local_950 = 0;
  lVar3 = *(long *)(lVar2 + 0xb0);
  lVar4 = *(long *)(lVar2 + 0xa8);
  pcVar5 = *(code **)(lVar3 + 8);
  uVar1 = *(uint *)(*(long *)(lVar2 + 0xa0) + 0x10);
  pcVar6 = *(code **)(lVar4 + 0x28);
  iVar7 = WPACKET_init_static_len(local_948,local_8a8,0x860,0);
  if (iVar7 != 0) {
    len = (ulong)uVar1;
    uVar8 = 0;
    (**(code **)(lVar4 + 0x50))(local_8e8,param_4);
    (**(code **)(lVar4 + 0x10))(local_8e8,5);
    (**(code **)(lVar4 + 0x20))(local_8e8,param_4);
    do {
      (*pcVar6)(local_8e8,uVar8 & 0xffffffff);
      iVar7 = (*pcVar5)(param_1,param_3,param_2,local_8e8,local_908,0x20);
      if (iVar7 == 0) goto LAB_001002e9;
      (*pcVar6)(param_4,uVar8 & 0xffffffff);
      puVar9 = local_948;
      iVar7 = slh_wots_chain(param_1,local_908,0,0xf,param_3,param_4);
      if (iVar7 == 0) goto LAB_001002e9;
      uVar8 = uVar8 + 1;
    } while (uVar8 < len * 2 + 3);
    iVar7 = WPACKET_get_total_written(local_948,&local_950,extraout_RDX,puVar9);
    if (iVar7 == 0) {
LAB_001002e9:
      iVar7 = 0;
    }
    else {
      (**(code **)(lVar4 + 0x50))(local_8c8,param_4);
      (**(code **)(lVar4 + 0x10))(local_8c8,1);
      (**(code **)(lVar4 + 0x20))(local_8c8,param_4);
      iVar7 = (**(code **)(lVar3 + 0x28))
                        (param_1,param_3,local_8c8,local_8a8,local_950,param_5,param_6);
    }
    WPACKET_finish(local_948);
    OPENSSL_cleanse(local_8a8,0x860);
    OPENSSL_cleanse(local_908,len);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_slh_wots_sign(long *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 extraout_RDX;
  ulong uVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  byte local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *param_1;
  uVar10 = (ulong)*(uint *)(*(long *)(lVar2 + 0xa0) + 0x10);
  lVar6 = uVar10 * 2;
  lVar3 = *(long *)(lVar2 + 0xa8);
  pcVar4 = *(code **)(lVar3 + 0x28);
  pcVar5 = *(code **)(*(long *)(lVar2 + 0xb0) + 8);
  if (uVar10 == 0) {
    iVar9 = 0;
  }
  else {
    pbVar11 = param_2 + uVar10;
    pbVar7 = local_88;
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *pbVar7 = bVar1 >> 4;
      pbVar7[1] = bVar1 & 0xf;
      pbVar7 = pbVar7 + 2;
    } while (param_2 != pbVar11);
    iVar9 = 0;
    pbVar7 = local_88;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      iVar9 = iVar9 + (uint)bVar1;
    } while (local_88 + lVar6 != pbVar7);
  }
  iVar9 = (int)lVar6 * 0xf - iVar9;
  local_88[lVar6] = (byte)((uint)iVar9 >> 8) & 0xf;
  bVar1 = (byte)iVar9;
  local_88[lVar6 + 2] = bVar1 & 0xf;
  local_88[lVar6 + 1] = bVar1 >> 4;
  (**(code **)(lVar3 + 0x50))(local_a8,param_5);
  (**(code **)(lVar3 + 0x10))(local_a8,5);
  (**(code **)(lVar3 + 0x20))(local_a8,param_5);
  uVar10 = 0;
  uVar8 = extraout_RDX;
  do {
    (*pcVar4)(local_a8,uVar10 & 0xffffffff,uVar8);
    iVar9 = (*pcVar5)(param_1,param_4,param_3,local_a8,local_c8,0x20);
    if (iVar9 == 0) {
LAB_00100562:
      uVar8 = 0;
      goto LAB_00100564;
    }
    (*pcVar4)(param_5,uVar10 & 0xffffffff);
    iVar9 = slh_wots_chain(param_1,local_c8,0,local_88[uVar10],param_4,param_5);
    if (iVar9 == 0) goto LAB_00100562;
    uVar10 = uVar10 + 1;
    uVar8 = param_6;
  } while (uVar10 < lVar6 + 3U);
  uVar8 = 1;
LAB_00100564:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ossl_slh_wots_pk_from_sig
          (long *param_1,long *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 extraout_RDX;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined1 *puVar13;
  undefined8 local_960;
  undefined1 local_958 [64];
  undefined1 local_918 [32];
  byte local_8f8 [80];
  undefined1 local_8a8 [2152];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *param_1;
  local_960 = 0;
  lVar3 = *(long *)(lVar2 + 0xb0);
  lVar4 = *(long *)(lVar2 + 0xa8);
  uVar12 = (ulong)*(uint *)(*(long *)(lVar2 + 0xa0) + 0x10);
  pcVar5 = *(code **)(lVar4 + 0x28);
  iVar7 = WPACKET_init_static_len(local_958,local_8a8,0x860,0);
  if (iVar7 != 0) {
    lVar2 = uVar12 * 2;
    if (uVar12 == 0) {
      iVar7 = 0;
    }
    else {
      pbVar9 = param_3 + uVar12;
      pbVar10 = local_8f8;
      do {
        bVar1 = *param_3;
        param_3 = param_3 + 1;
        *pbVar10 = bVar1 >> 4;
        pbVar10[1] = bVar1 & 0xf;
        pbVar10 = pbVar10 + 2;
      } while (param_3 != pbVar9);
      iVar7 = 0;
      pbVar9 = local_8f8;
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar7 = iVar7 + (uint)bVar1;
      } while (local_8f8 + lVar2 != pbVar9);
    }
    uVar11 = 0;
    iVar7 = (int)lVar2 * 0xf - iVar7;
    local_8f8[lVar2] = (byte)((uint)iVar7 >> 8) & 0xf;
    bVar1 = (byte)iVar7;
    local_8f8[lVar2 + 2] = bVar1 & 0xf;
    local_8f8[lVar2 + 1] = bVar1 >> 4;
    do {
      (*pcVar5)(param_5,uVar11 & 0xffffffff);
      if ((ulong)param_2[1] < uVar12) goto LAB_00100800;
      lVar6 = *param_2;
      param_2[1] = param_2[1] - uVar12;
      *param_2 = lVar6 + uVar12;
      bVar1 = local_8f8[uVar11];
      puVar13 = local_958;
      iVar7 = slh_wots_chain(param_1,lVar6,bVar1,'\x0f' - bVar1,param_4,param_5);
      if (iVar7 == 0) goto LAB_00100800;
      uVar11 = uVar11 + 1;
    } while (uVar11 < lVar2 + 3U);
    (**(code **)(lVar4 + 0x50))(local_918,param_5,extraout_RDX,puVar13);
    (**(code **)(lVar4 + 0x10))(local_918,1);
    (**(code **)(lVar4 + 0x20))(local_918,param_5);
    iVar7 = WPACKET_get_total_written(local_958,&local_960);
    if (iVar7 == 0) {
LAB_00100800:
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(lVar3 + 0x28))
                        (param_1,param_4,local_918,local_8a8,local_960,param_6,param_7);
    }
    iVar7 = WPACKET_finish(local_958);
    if (iVar7 != 0) goto LAB_0010064d;
  }
  uVar8 = 0;
LAB_0010064d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


