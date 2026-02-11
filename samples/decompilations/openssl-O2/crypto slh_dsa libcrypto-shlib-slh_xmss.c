
bool ossl_slh_xmss_node(long *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                       undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0xa8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    (**(code **)(lVar2 + 0x10))(param_6,0);
    (**(code **)(lVar2 + 0x18))(param_6,param_3);
    iVar3 = ossl_slh_wots_pk_gen(param_1,param_2,param_5,param_6,param_7,param_8);
    bVar4 = iVar3 != 0;
  }
  else {
    iVar3 = ossl_slh_xmss_node();
    if (iVar3 != 0) {
      iVar3 = ossl_slh_xmss_node(param_1,param_2,param_3 * 2 + 1,param_4 + -1,param_5,param_6,
                                 local_68,0x20);
      if (iVar3 != 0) {
        (**(code **)(lVar2 + 0x10))(param_6,2);
        (**(code **)(lVar2 + 0x30))(param_6,param_4);
        (**(code **)(lVar2 + 0x40))(param_6,param_3);
        iVar3 = (**(code **)(*(long *)(lVar1 + 0xb0) + 0x20))
                          (param_1,param_5,param_6,local_88,local_68,param_7,param_8);
        if (iVar3 != 0) {
          bVar4 = true;
          goto LAB_00100088;
        }
      }
    }
    bVar4 = false;
  }
LAB_00100088:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_slh_xmss_sign(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [40];
  long local_40;
  
  uVar9 = (ulong)param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(*param_1 + 0xa8);
  lVar4 = *(long *)(*param_1 + 0xa0);
  uVar1 = *(uint *)(lVar4 + 0x10);
  iVar2 = *(int *)(lVar4 + 0x1c);
  (**(code **)(lVar3 + 0x50))(local_68,param_6);
  (**(code **)(lVar3 + 0x10))(param_6,0);
  (**(code **)(lVar3 + 0x18))(param_6,param_4);
  iVar5 = ossl_slh_wots_sign(param_1,param_2,param_3,param_5,param_6,param_7);
  if (iVar5 == 0) {
LAB_001002aa:
    uVar7 = 0;
  }
  else {
    (**(code **)(lVar3 + 0x50))(param_6,local_68);
    puVar10 = (undefined8 *)(ulong)uVar1;
    iVar5 = 0;
    puVar8 = &local_70;
    if (iVar2 != 0) {
      do {
        iVar6 = WPACKET_allocate_bytes(param_7,puVar10,&local_70,puVar8);
        if ((iVar6 == 0) ||
           (iVar6 = ossl_slh_xmss_node(param_1,param_3,(uint)uVar9 ^ 1,iVar5,param_5,param_6,
                                       local_70), iVar6 == 0)) goto LAB_001002aa;
        uVar9 = uVar9 >> 1;
        iVar5 = iVar5 + 1;
        puVar8 = puVar10;
      } while (iVar2 != iVar5);
    }
    uVar7 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8
ossl_slh_xmss_pk_from_sig
          (long *param_1,uint param_2,long *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *param_1;
  lVar8 = *(long *)(lVar9 + 0xa8);
  pcVar2 = *(code **)(*(long *)(lVar9 + 0xb0) + 0x20);
  pcVar3 = *(code **)(lVar8 + 0x30);
  pcVar4 = *(code **)(lVar8 + 0x40);
  uVar10 = (ulong)*(uint *)(*(long *)(lVar9 + 0xa0) + 0x10);
  iVar1 = *(int *)(*(long *)(lVar9 + 0xa0) + 0x1c);
  (**(code **)(lVar8 + 0x10))(param_6,0);
  (**(code **)(lVar8 + 0x18))(param_6,param_2);
  iVar5 = ossl_slh_wots_pk_from_sig(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar5 == 0) {
LAB_00100438:
    uVar7 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x10))(param_6,2);
    iVar5 = 0;
    if (iVar1 != 0) {
      do {
        if ((ulong)param_3[1] < uVar10) goto LAB_00100438;
        lVar9 = *param_3;
        iVar5 = iVar5 + 1;
        param_3[1] = param_3[1] - uVar10;
        *param_3 = lVar9 + uVar10;
        (*pcVar3)(param_6,iVar5);
        if ((param_2 & 1) == 0) {
          param_2 = param_2 >> 1;
          (*pcVar4)(param_6,param_2);
          lVar8 = param_7;
        }
        else {
          param_2 = param_2 - 1 >> 1;
          (*pcVar4)(param_6,param_2);
          lVar8 = lVar9;
          lVar9 = param_7;
        }
        iVar6 = (*pcVar2)(param_1,param_5,param_6,lVar8,lVar9,param_7,param_8);
        if (iVar6 == 0) goto LAB_00100438;
      } while (iVar5 != iVar1);
    }
    uVar7 = 1;
  }
  return uVar7;
}


