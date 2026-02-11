
undefined8
ossl_slh_ht_sign(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,uint param_6,undefined8 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined1 *extraout_RDX;
  undefined1 *puVar9;
  undefined1 *extraout_RDX_00;
  uint uVar10;
  long in_FS_OFFSET;
  uint local_cc;
  long local_98;
  long local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = *(undefined8 **)(*param_1 + 0xa8);
  lVar5 = *(long *)(*param_1 + 0xa0);
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  uVar2 = *(uint *)(lVar5 + 0x18);
  bVar8 = (byte)*(undefined4 *)(lVar5 + 0x1c);
  (*(code *)puVar3[9])(local_88);
  __memcpy_chk(local_68,param_2,uVar1,0x20);
  if (uVar2 != 0) {
    uVar10 = 0;
    puVar9 = extraout_RDX;
    local_cc = param_6;
    do {
      (*(code *)*puVar3)(local_88,uVar10,puVar9);
      (*(code *)puVar3[1])(local_88,param_5);
      lVar5 = WPACKET_get_curr(param_7);
      uVar7 = param_7;
      iVar4 = ossl_slh_xmss_sign(param_1,local_68,param_3,local_cc,param_4,local_88);
      if (iVar4 == 0) {
LAB_00100190:
        uVar7 = 0;
        goto LAB_00100192;
      }
      puVar9 = extraout_RDX_00;
      if (uVar10 < uVar2 - 1) {
        lVar6 = WPACKET_get_curr(param_7,uVar7);
        if ((lVar6 - lVar5 < 0) ||
           (puVar9 = local_68, local_98 = lVar5, local_90 = lVar6 - lVar5,
           iVar4 = ossl_slh_xmss_pk_from_sig
                             (param_1,local_cc,&local_98,local_68,param_4,local_88,local_68,0x20),
           iVar4 == 0)) goto LAB_00100190;
        local_cc = (1 << (bVar8 & 0x1f)) - 1U & (uint)param_5;
        param_5 = param_5 >> (bVar8 & 0x3f);
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  uVar7 = 1;
LAB_00100192:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_slh_ht_verify(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        ulong param_5,uint param_6,void *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  undefined1 *extraout_RDX;
  undefined1 *puVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = *(undefined8 **)(*param_1 + 0xa8);
  lVar3 = *(long *)(*param_1 + 0xa0);
  uVar1 = *(uint *)(lVar3 + 0x10);
  iVar4 = *(int *)(lVar3 + 0x18);
  bVar6 = (byte)*(undefined4 *)(lVar3 + 0x1c);
  (*(code *)puVar2[9])(local_88);
  __memcpy_chk(local_68,param_2,(ulong)uVar1,0x20);
  if (iVar4 != 0) {
    iVar8 = 0;
    puVar7 = extraout_RDX;
    do {
      (*(code *)*puVar2)(local_88,iVar8,puVar7);
      (*(code *)puVar2[1])(local_88,param_5);
      puVar7 = local_68;
      uVar5 = ossl_slh_xmss_pk_from_sig
                        (param_1,param_6,param_3,local_68,param_4,local_88,local_68,0x20);
      if ((int)uVar5 == 0) goto LAB_001002e6;
      iVar8 = iVar8 + 1;
      param_6 = (1 << (bVar6 & 0x1f)) - 1U & (uint)param_5;
      param_5 = param_5 >> (bVar6 & 0x3f);
    } while (iVar4 != iVar8);
  }
  iVar4 = memcmp(local_68,param_7,(ulong)uVar1);
  uVar5 = (ulong)(iVar4 == 0);
LAB_001002e6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


