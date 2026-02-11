
undefined8
ssl_cookie_hmac_part_0
          (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined8 param_5
          )

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = mbedtls_md_hmac_reset();
  if (iVar2 == 0) {
    iVar2 = mbedtls_md_hmac_update(param_1,param_2,4);
    if (iVar2 == 0) {
      iVar2 = mbedtls_md_hmac_update(param_1,param_4,param_5);
      if (iVar2 == 0) {
        uVar3 = mbedtls_md_hmac_finish(param_1,&local_58);
        if ((int)uVar3 == 0) {
          puVar1 = (undefined8 *)*param_3;
          *puVar1 = local_58;
          puVar1[1] = CONCAT44(uStack_4c,uStack_50);
          *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack_48,uStack_4c);
          *(undefined8 *)((long)puVar1 + 0x14) = uStack_44;
          *param_3 = *param_3 + 0x1c;
          goto LAB_00100084;
        }
      }
    }
  }
  uVar3 = 0xffff9400;
LAB_00100084:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_ssl_cookie_init(long param_1)

{
  mbedtls_md_init();
  *(undefined8 *)(param_1 + 0x18) = 0x3c;
  return;
}



void mbedtls_ssl_cookie_set_timeout(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



void mbedtls_ssl_cookie_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_md_free();
    mbedtls_platform_zeroize(param_1,0x20);
    return;
  }
  return;
}



ulong mbedtls_ssl_cookie_setup(undefined8 param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (*param_2)(param_3,local_48,0x20);
  if ((int)uVar1 == 0) {
    uVar2 = mbedtls_md_info_from_type(9);
    uVar1 = mbedtls_md_setup(param_1,uVar2,1);
    if ((int)uVar1 == 0) {
      uVar1 = mbedtls_md_hmac_starts(param_1,local_48,0x20);
      if ((int)uVar1 == 0) {
        mbedtls_platform_zeroize(local_48,0x20);
        uVar1 = uVar1 & 0xffffffff;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_ssl_cookie_write(long param_1,ulong *param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  time_t tVar5;
  
  if (param_1 == 0) {
    return 0xffff8f00;
  }
  if (param_4 == 0) {
    uVar4 = 0xffff8f00;
  }
  else {
    if ((*param_2 <= param_3) && (0x1f < (long)(param_3 - *param_2))) {
      tVar5 = time((time_t *)0x0);
      uVar3 = (uint)tVar5;
      *(uint *)*param_2 =
           uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar2 = *param_2;
      uVar1 = uVar2 + 4;
      *param_2 = uVar1;
      if ((uVar1 <= param_3) && (0x1b < (long)(param_3 - uVar1))) {
        uVar4 = ssl_cookie_hmac_part_0(param_1,uVar2,param_2,param_4,param_5);
        return uVar4;
      }
    }
    uVar4 = 0xffff9600;
  }
  return uVar4;
}



int mbedtls_ssl_cookie_check(long param_1,uint *param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  time_t tVar3;
  long in_FS_OFFSET;
  undefined1 *local_60;
  undefined1 local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = local_58;
  if ((param_1 == 0) || (param_4 == 0)) {
    iVar2 = -0x7100;
    goto LAB_001002cb;
  }
  if (param_3 != 0x20) {
    iVar2 = -1;
    goto LAB_001002cb;
  }
  iVar2 = ssl_cookie_hmac_part_0(param_1,param_2,&local_60);
  if (iVar2 == 0) {
    iVar2 = mbedtls_ct_memcmp(param_2 + 1,local_58,0x1c);
    if (iVar2 != 0) goto LAB_001002b8;
    tVar3 = time((time_t *)0x0);
    iVar2 = 0;
    if (*(ulong *)(param_1 + 0x18) != 0) {
      uVar1 = *param_2;
      iVar2 = -(uint)(*(ulong *)(param_1 + 0x18) <
                     tVar3 - (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                    | uVar1 << 0x18));
    }
  }
  else {
LAB_001002b8:
    iVar2 = -1;
  }
  mbedtls_platform_zeroize(local_58,0x1c);
LAB_001002cb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


