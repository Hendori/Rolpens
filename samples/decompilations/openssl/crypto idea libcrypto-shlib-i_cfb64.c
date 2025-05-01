
void IDEA_cfb64_encrypt(byte *param_1,byte *param_2,long param_3,undefined8 param_4,ulong *param_5,
                       uint *param_6,int param_7)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  long in_FS_OFFSET;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar5 = *param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)uVar5 < 0) {
    uVar5 = 0xffffffff;
  }
  else if (param_7 == 0) {
    pbVar6 = param_1;
    if (param_3 != 0) {
      do {
        if (uVar5 == 0) {
          uVar2 = (uint)*param_5;
          local_58 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18);
          uVar2 = *(uint *)((long)param_5 + 4);
          local_50 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18);
          IDEA_encrypt(&local_58,param_4);
          *param_5 = (((((((local_50 & 0xff) << 8 | local_50 >> 8 & 0xff) << 8 |
                         local_50 >> 0x10 & 0xff) << 8 | local_50 >> 0x18 & 0xff) << 8 |
                       local_58 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 >> 0x10 & 0xff)
                     << 8 | local_58 >> 0x18 & 0xff;
        }
        bVar4 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = *(byte *)((long)(int)uVar5 + (long)param_5);
        *(byte *)((long)(int)uVar5 + (long)param_5) = bVar4;
        uVar5 = uVar5 + 1 & 7;
        *param_2 = bVar4 ^ bVar1;
        param_2 = param_2 + 1;
      } while (param_1 + (param_3 - (long)pbVar6) != (byte *)0x0);
    }
  }
  else if (param_3 != 0) {
    pbVar6 = param_1;
    do {
      if (uVar5 == 0) {
        uVar2 = (uint)*param_5;
        local_58 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18);
        uVar2 = *(uint *)((long)param_5 + 4);
        local_50 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18);
        IDEA_encrypt(&local_58,param_4);
        *param_5 = (((((((local_50 & 0xff) << 8 | local_50 >> 8 & 0xff) << 8 |
                       local_50 >> 0x10 & 0xff) << 8 | local_50 >> 0x18 & 0xff) << 8 |
                     local_58 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 >> 0x10 & 0xff)
                   << 8 | local_58 >> 0x18 & 0xff;
      }
      lVar3 = (long)(int)uVar5;
      bVar4 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar4 = bVar4 ^ *(byte *)(lVar3 + (long)param_5);
      uVar5 = uVar5 + 1 & 7;
      *param_2 = bVar4;
      *(byte *)(lVar3 + (long)param_5) = bVar4;
      param_2 = param_2 + 1;
    } while (param_1 + (param_3 - (long)pbVar6) != (byte *)0x0);
  }
  *param_6 = uVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


