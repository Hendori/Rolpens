
undefined8
mbedtls_hkdf_extract
          (undefined8 param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 == 0) {
      bVar1 = mbedtls_md_get_size();
      param_3 = (ulong)bVar1;
      if (param_3 != 0) {
        param_2 = local_68;
        goto LAB_0010003d;
      }
    }
    uVar2 = 0xffffa080;
  }
  else {
LAB_0010003d:
    uVar2 = mbedtls_md_hmac(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_hkdf_expand(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                       undefined8 param_5,long param_6,ulong param_7)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  byte bVar13;
  ulong local_f8;
  undefined *local_f0;
  undefined8 local_e0;
  int local_bc;
  undefined1 local_a9;
  undefined1 local_a8 [24];
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_40;
  
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 != 0) {
    bVar1 = mbedtls_md_get_size();
    uVar8 = (ulong)bVar1;
    if (uVar8 - 1 < param_3) {
      local_f0 = param_4;
      local_e0 = param_5;
      if (param_4 == (undefined *)0x0) {
        local_e0 = 0;
        local_f0 = &_LC0;
      }
      uVar10 = (ulong)(param_7 % uVar8 == 0);
      uVar6 = param_7 / uVar8 + 1;
      uVar3 = uVar6 - uVar10;
      if (uVar3 < 0x100) {
        mbedtls_md_init(local_a8);
        iVar2 = mbedtls_md_setup(local_a8,param_1,1);
        local_bc = iVar2;
        if ((iVar2 == 0) && (__memset_chk(&local_88,0,uVar8,0x40), uVar6 != uVar10)) {
          local_f8 = 0;
          lVar11 = 0;
          uVar10 = 1;
          do {
            local_a9 = (undefined1)uVar10;
            local_bc = mbedtls_md_hmac_starts(local_a8,param_2,param_3);
            if ((((local_bc != 0) ||
                 (local_bc = mbedtls_md_hmac_update(local_a8,&local_88,local_f8), local_bc != 0)) ||
                (local_bc = mbedtls_md_hmac_update(local_a8,local_f0,local_e0), local_bc != 0)) ||
               ((local_bc = mbedtls_md_hmac_update(local_a8,&local_a9,1), local_bc != 0 ||
                (local_bc = mbedtls_md_hmac_finish(local_a8,&local_88), local_bc != 0)))) break;
            puVar4 = (undefined8 *)(param_6 + lVar11);
            if (uVar3 == uVar10) {
              memcpy(puVar4,&local_88,param_7 - lVar11);
              local_bc = iVar2;
              break;
            }
            uVar7 = (uint)bVar1;
            if (uVar7 < 8) {
              if ((bVar1 & 4) == 0) {
                if (uVar7 != 0) {
                  *(undefined1 *)puVar4 = (undefined1)local_88;
                  if ((bVar1 & 2) != 0) {
                    *(undefined2 *)((long)puVar4 + (uVar8 - 2)) =
                         *(undefined2 *)((long)&uStack_90 + uVar8 + 6);
                  }
                }
              }
              else {
                *(undefined4 *)puVar4 = local_88;
                *(undefined4 *)((long)puVar4 + (uVar8 - 4)) =
                     *(undefined4 *)((long)&uStack_90 + uVar8 + 4);
              }
            }
            else {
              *puVar4 = CONCAT44(uStack_84,local_88);
              *(undefined8 *)((long)puVar4 + (uVar8 - 8)) =
                   *(undefined8 *)((long)&uStack_90 + uVar8);
              lVar5 = (long)puVar4 - (long)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
              puVar9 = (undefined8 *)((long)&local_88 - lVar5);
              puVar4 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
              for (uVar6 = (ulong)((int)lVar5 + uVar7 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar4 = *puVar9;
                puVar9 = puVar9 + (ulong)bVar13 * -2 + 1;
                puVar4 = puVar4 + (ulong)bVar13 * -2 + 1;
              }
            }
            lVar11 = lVar11 + uVar8;
            bVar12 = uVar3 != uVar10;
            uVar10 = uVar10 + 1;
            local_f8 = uVar8;
            local_bc = iVar2;
          } while (bVar12);
        }
        mbedtls_md_free(local_a8);
        mbedtls_platform_zeroize(&local_88,0x40);
        goto LAB_00100176;
      }
    }
  }
  local_bc = -0x5f80;
LAB_00100176:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_bc;
}



int mbedtls_hkdf(undefined8 param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  ulong extraout_RDX;
  long in_FS_OFFSET;
  undefined1 local_b8 [64];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 == 0) {
      bVar2 = mbedtls_md_get_size();
      param_3 = (ulong)bVar2;
      if (param_3 != 0) {
        param_2 = local_78;
        goto LAB_001003cb;
      }
    }
    iVar3 = -0x5f80;
  }
  else {
LAB_001003cb:
    iVar3 = mbedtls_md_hmac(param_1,param_2,param_3,param_4,param_5,local_b8);
    param_3 = extraout_RDX;
    if (iVar3 == 0) {
      uVar1 = mbedtls_md_get_size(param_1);
      iVar3 = mbedtls_hkdf_expand(param_1,local_b8,uVar1,param_6,param_7,param_8,param_9);
      param_3 = 0x1003ec;
    }
  }
  mbedtls_platform_zeroize(local_b8,0x40,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


