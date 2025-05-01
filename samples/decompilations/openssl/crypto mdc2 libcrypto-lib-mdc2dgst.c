
void mdc2_body(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  byte local_128;
  byte local_10a;
  byte local_109;
  undefined8 local_d8;
  undefined8 local_d0;
  DES_key_schedule local_c8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    local_10a = *(byte *)(param_1 + 0xc);
    uVar4 = 0;
    local_109 = *(byte *)(param_1 + 0x14);
    do {
      local_d8 = *(undefined8 *)(param_2 + uVar4);
      uVar5 = (uint)local_d8;
      uVar2 = (uint)((ulong)local_d8 >> 0x20);
      *(byte *)(param_1 + 0xc) = local_10a & 0x9f | 0x40;
      *(byte *)(param_1 + 0x14) = local_109 & 0x9f | 0x20;
      local_d0 = local_d8;
      DES_set_odd_parity((DES_cblock *)(param_1 + 0xc));
      DES_set_key_unchecked((DES_cblock *)(param_1 + 0xc),&local_c8);
      DES_encrypt1((uint *)&local_d8,&local_c8,1);
      DES_set_odd_parity((DES_cblock *)(param_1 + 0x14));
      DES_set_key_unchecked((DES_cblock *)(param_1 + 0x14),&local_c8);
      DES_encrypt1((uint *)&local_d0,&local_c8,1);
      uVar3 = local_d0._4_4_ ^ uVar2;
      uVar2 = uVar2 ^ local_d8._4_4_;
      uVar1 = (uint)local_d8 ^ uVar5;
      uVar5 = (uint)local_d0 ^ uVar5;
      local_128 = (byte)(uVar2 >> 0x18);
      local_10a = (byte)uVar1;
      local_109 = (byte)uVar5;
      uVar4 = uVar4 + 8;
      *(ulong *)(param_1 + 0xc) =
           (((((((ulong)(uVar3 >> 0x18) << 8 | (ulong)(uVar3 >> 0x10 & 0xff)) << 8 |
               (ulong)(uVar3 >> 8 & 0xff)) << 8 | (ulong)(uVar3 & 0xff)) << 8 |
             (ulong)(uVar1 >> 0x18)) << 8 | (ulong)(uVar1 >> 0x10 & 0xff)) << 8 |
           (ulong)(uVar1 >> 8 & 0xff)) << 8 | (ulong)(uVar1 & 0xff);
      *(ulong *)(param_1 + 0x14) =
           (((((((ulong)local_128 << 8 | (ulong)(uVar2 >> 0x10 & 0xff)) << 8 |
               (ulong)(uVar2 >> 8 & 0xff)) << 8 | (ulong)(uVar2 & 0xff)) << 8 |
             (ulong)(uVar5 >> 0x18)) << 8 | (ulong)(uVar5 >> 0x10 & 0xff)) << 8 |
           (ulong)(uVar5 >> 8 & 0xff)) << 8 | (ulong)(uVar5 & 0xff);
    } while (uVar4 < param_3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 MDC2_Init(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 3) = 0x5252525252525252;
  *(undefined8 *)(param_1 + 5) = 0x2525252525252525;
  param_1[7] = 1;
  return 1;
}



undefined8 MDC2_Update(uint *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  uVar3 = (ulong)*param_1;
  if (uVar3 != 0) {
    __dest = (void *)((long)param_1 + uVar3 + 4);
    uVar2 = 8 - uVar3;
    if (param_3 < uVar2) {
      memcpy(__dest,param_2,param_3);
      *param_1 = *param_1 + (int)param_3;
      return 1;
    }
    if (uVar2 != 0) {
      uVar1 = 0;
      do {
        *(undefined1 *)((long)__dest + uVar1) = *(undefined1 *)((long)param_2 + uVar1);
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    param_2 = (void *)((long)param_2 + uVar2);
    *param_1 = 0;
    param_3 = (uVar3 - 8) + param_3;
    mdc2_body(param_1,param_1 + 1,8);
  }
  uVar3 = param_3 & 0xfffffffffffffff8;
  if (uVar3 != 0) {
    mdc2_body(param_1,param_2,uVar3);
  }
  __n = param_3 - uVar3;
  if (__n == 0) {
    return 1;
  }
  memcpy(param_1 + 1,(void *)((long)param_2 + uVar3),__n);
  *param_1 = (uint)__n;
  return 1;
}



undefined8 MDC2_Final(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if (uVar1 == 0) {
    if (param_2[7] != 2) goto LAB_001003ae;
LAB_00100400:
    uVar2 = (ulong)uVar1;
    uVar1 = uVar1 + 1;
    *(undefined1 *)((long)param_2 + uVar2 + 4) = 0x80;
  }
  else if (param_2[7] == 2) goto LAB_00100400;
  memset((void *)((long)param_2 + (ulong)uVar1 + 4),0,(ulong)(8 - uVar1));
  mdc2_body(param_2,param_2 + 1,8);
LAB_001003ae:
  *param_1 = *(undefined8 *)(param_2 + 3);
  param_1[1] = *(undefined8 *)(param_2 + 5);
  return 1;
}


