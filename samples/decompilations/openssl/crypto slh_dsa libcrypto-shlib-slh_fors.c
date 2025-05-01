
uint slh_fors_node_constprop_0
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
               int param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong len;
  long in_FS_OFFSET;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0xa8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  len = (ulong)*(uint *)(*(long *)(lVar1 + 0xa0) + 0x10);
  if (param_6 == 0) {
    (**(code **)(lVar2 + 0x50))(local_68,param_4);
    (**(code **)(lVar2 + 0x10))(local_68,6);
    (**(code **)(lVar2 + 0x20))(local_68,param_4);
    (**(code **)(lVar2 + 0x40))(local_68,param_5);
    iVar3 = (**(code **)(*(long *)(lVar1 + 0xb0) + 8))
                      (param_1,param_3,param_2,local_68,local_88,0x20);
    if (iVar3 != 0) {
      (**(code **)(lVar2 + 0x30))(param_4,0);
      (**(code **)(lVar2 + 0x40))(param_4,param_5);
      uVar4 = (**(code **)(*(long *)(lVar1 + 0xb0) + 0x18))
                        (param_1,param_3,param_4,local_88,len,param_7,0x20);
      OPENSSL_cleanse(local_88,len);
      goto LAB_001000c7;
    }
  }
  else {
    iVar3 = slh_fors_node_constprop_0(param_1,param_2,param_3);
    if (iVar3 != 0) {
      iVar3 = slh_fors_node_constprop_0
                        (param_1,param_2,param_3,param_4,param_5 * 2 + 1,param_6 + -1,local_68);
      if (iVar3 != 0) {
        (**(code **)(lVar2 + 0x30))(param_4,param_6);
        (**(code **)(lVar2 + 0x40))(param_4,param_5);
        iVar3 = (**(code **)(*(long *)(lVar1 + 0xb0) + 0x20))
                          (param_1,param_3,param_4,local_88,local_68,param_7,0x20);
        uVar4 = (uint)(iVar3 != 0);
        goto LAB_001000c7;
      }
    }
  }
  uVar4 = 0;
LAB_001000c7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_slh_fors_sign(long *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined8 uStack_170;
  uint local_134;
  uint *local_130;
  uint local_118 [36];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  lVar14 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(lVar14 + 0xa0);
  uVar3 = *(uint *)(lVar5 + 0x20);
  uVar13 = (ulong)*(uint *)(lVar5 + 0x24);
  uVar4 = *(undefined4 *)(lVar5 + 0x10);
  iVar9 = 1 << ((byte)uVar3 & 0x1f);
  if (uVar13 == 0) {
LAB_0010043a:
    uVar7 = 1;
  }
  else {
    uVar11 = 0;
    uVar8 = 0;
    uVar12 = 0;
    local_130 = local_118;
    do {
      for (; uVar8 < uVar3; uVar8 = uVar8 + 8) {
        bVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar11 = uVar11 * 0x100 + (uint)bVar2;
      }
      uVar8 = uVar8 - uVar3;
      local_130[uVar12] = uVar11 >> ((byte)uVar8 & 0x1f) & iVar9 - 1U;
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
    puVar1 = local_130 + uVar13;
    local_134 = 0;
    while( true ) {
      uVar11 = *local_130;
      lVar5 = *(long *)(lVar14 + 0xa8);
      (**(code **)(lVar5 + 0x50))(local_68,param_5);
      (**(code **)(lVar5 + 0x10))(local_68,6);
      (**(code **)(lVar5 + 0x20))(local_68,param_5);
      (**(code **)(lVar5 + 0x40))(local_68,local_134 + uVar11);
      iVar6 = (**(code **)(*(long *)(lVar14 + 0xb0) + 8))
                        (param_1,param_4,param_3,local_68,local_88,0x20);
      if (iVar6 == 0) break;
      uStack_170 = 0x100387;
      iVar6 = WPACKET_memcpy(param_6,local_88,uVar4);
      if (iVar6 == 0) break;
      uVar10 = 0;
      uVar8 = local_134;
      if (uVar3 != 0) {
        do {
          uVar7 = uStack_170;
          iVar6 = slh_fors_node_constprop_0
                            (param_1,param_3,param_4,param_5,(uVar11 ^ 1) + uVar8,uVar10,local_88);
          if (iVar6 == 0) goto LAB_001003f1;
          uVar11 = uVar11 >> 1;
          uVar8 = uVar8 >> 1;
          uStack_170 = 0x1003b7;
          iVar6 = WPACKET_memcpy(param_6,local_88,uVar4,uVar7);
          if (iVar6 == 0) goto LAB_001003f1;
          uVar10 = uVar10 + 1;
        } while (uVar3 != uVar10);
      }
      local_130 = local_130 + 1;
      local_134 = local_134 + iVar9;
      if (puVar1 == local_130) goto LAB_0010043a;
      lVar14 = *param_1;
    }
LAB_001003f1:
    uVar7 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined4
ossl_slh_fors_pk_from_sig
          (long *param_1,long *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  uint uVar22;
  long in_FS_OFFSET;
  int local_28c8;
  undefined8 local_28a8;
  long local_28a0;
  undefined1 local_2898 [64];
  uint local_2858 [36];
  undefined1 local_27c8 [32];
  undefined1 local_27a8 [10088];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *param_1;
  local_28a8 = 0;
  lVar5 = *(long *)(lVar4 + 0xb0);
  lVar6 = *(long *)(lVar4 + 0xa8);
  lVar4 = *(long *)(lVar4 + 0xa0);
  pcVar7 = *(code **)(lVar5 + 0x18);
  pcVar8 = *(code **)(lVar6 + 0x40);
  uVar3 = *(uint *)(lVar4 + 0x20);
  uVar20 = (ulong)*(uint *)(lVar4 + 0x24);
  pcVar9 = *(code **)(lVar5 + 0x20);
  pcVar10 = *(code **)(lVar6 + 0x30);
  uVar18 = (ulong)*(uint *)(lVar4 + 0x10);
  iVar11 = WPACKET_init_static_len(local_2898,local_27a8,0x2760,0);
  if (iVar11 != 0) {
    iVar11 = 1 << ((byte)uVar3 & 0x1f);
    if (uVar20 != 0) {
      uVar12 = 0;
      uVar15 = 0;
      puVar21 = local_2858;
      uVar17 = 0;
      do {
        for (; uVar15 < uVar3; uVar15 = uVar15 + 8) {
          bVar2 = *param_3;
          param_3 = param_3 + 1;
          uVar12 = uVar12 * 0x100 + (uint)bVar2;
        }
        uVar15 = uVar15 - uVar3;
        puVar21[uVar17] = uVar12 >> ((byte)uVar15 & 0x1f) & iVar11 - 1U;
        uVar17 = uVar17 + 1;
      } while (uVar20 != uVar17);
      puVar1 = puVar21 + uVar20;
      local_28c8 = 0;
      do {
        uVar15 = *puVar21;
        uVar12 = uVar15 + local_28c8;
        (*pcVar10)(param_5,0);
        (*pcVar8)(param_5,uVar12);
        if ((ulong)param_2[1] < uVar18) goto LAB_001007e0;
        lVar4 = *param_2;
        param_2[1] = param_2[1] - uVar18;
        *param_2 = lVar4 + uVar18;
        iVar13 = WPACKET_allocate_bytes(local_2898,uVar18,&local_28a0);
        if ((iVar13 == 0) ||
           (iVar13 = (*pcVar7)(param_1,param_4,param_5,lVar4,uVar18,local_28a0,uVar18),
           lVar4 = local_28a0, iVar13 == 0)) goto LAB_001007e0;
        uVar22 = 0;
        if (uVar3 != 0) {
          do {
            if ((ulong)param_2[1] < uVar18) goto LAB_001007e0;
            lVar19 = *param_2;
            uVar22 = uVar22 + 1;
            param_2[1] = param_2[1] - uVar18;
            *param_2 = lVar19 + uVar18;
            (*pcVar10)(param_5,uVar22);
            if ((uVar15 & 1) == 0) {
              uVar12 = uVar12 >> 1;
              (*pcVar8)(param_5,uVar12);
              lVar16 = local_28a0;
            }
            else {
              uVar12 = uVar12 - 1 >> 1;
              (*pcVar8)(param_5,uVar12);
              lVar16 = lVar19;
              lVar19 = local_28a0;
            }
            iVar13 = (*pcVar9)(param_1,param_4,param_5,lVar16,lVar19,lVar4,uVar18);
            if (iVar13 == 0) goto LAB_001007e0;
            uVar15 = uVar15 >> 1;
          } while (uVar22 != uVar3);
        }
        puVar21 = puVar21 + 1;
        local_28c8 = local_28c8 + iVar11;
      } while (puVar1 != puVar21);
    }
    iVar11 = WPACKET_get_total_written(local_2898,&local_28a8);
    if (iVar11 == 0) {
LAB_001007e0:
      uVar14 = 0;
    }
    else {
      (**(code **)(lVar6 + 0x50))(local_27c8,param_5);
      (**(code **)(lVar6 + 0x10))(local_27c8,4);
      (**(code **)(lVar6 + 0x20))(local_27c8,param_5);
      uVar14 = (**(code **)(lVar5 + 0x28))
                         (param_1,param_4,local_27c8,local_27a8,local_28a8,param_6,param_7);
    }
    iVar11 = WPACKET_finish(local_2898);
    if (iVar11 != 0) goto LAB_001007f0;
  }
  uVar14 = 0;
LAB_001007f0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}


