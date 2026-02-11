
void IDEA_ofb64_encrypt(byte *param_1,byte *param_2,long param_3,undefined8 param_4,ulong *param_5,
                       uint *param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  long in_FS_OFFSET;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  uVar4 = *param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)uVar4 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)((long)param_5 + 4);
    uVar3 = (uint)*param_5;
    local_50 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18);
    local_58 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                      uVar3 << 0x18);
    local_48 = (((((ulong)CONCAT51(CONCAT41(uVar2 >> 0x18,(char)((uVar2 & 0xff0000) >> 0x10)),
                                   (char)((uVar2 & 0xff00) >> 8)) << 8 | (ulong)(uVar2 & 0xff)) << 8
                 | (ulong)(uVar3 >> 0x18)) << 8 | (ulong)(byte)((uVar3 & 0xff0000) >> 0x10)) << 8 |
               (ulong)(byte)((uVar3 & 0xff00) >> 8)) << 8 | (ulong)(uVar3 & 0xff);
    if (param_3 != 0) {
      iVar6 = 0;
      pbVar5 = param_1;
      do {
        if (uVar4 == 0) {
          iVar6 = iVar6 + 1;
          IDEA_encrypt(&local_58,param_4);
          local_48 = (((((((local_50 & 0xff) << 8 | local_50 >> 8 & 0xff) << 8 |
                         local_50 >> 0x10 & 0xff) << 8 | local_50 >> 0x18 & 0xff) << 8 |
                       local_58 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 >> 0x10 & 0xff)
                     << 8 | local_58 >> 0x18 & 0xff;
        }
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        *param_2 = bVar1 ^ *(byte *)((long)&local_48 + (long)(int)uVar4);
        uVar4 = uVar4 + 1 & 7;
        param_2 = param_2 + 1;
      } while (param_1 + (param_3 - (long)pbVar5) != (byte *)0x0);
      if (iVar6 != 0) {
        *param_5 = (((((((local_50 & 0xff) << 8 | local_50 >> 8 & 0xff) << 8 |
                       local_50 >> 0x10 & 0xff) << 8 | local_50 >> 0x18 & 0xff) << 8 |
                     local_58 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 >> 0x10 & 0xff)
                   << 8 | local_58 >> 0x18 & 0xff;
      }
    }
  }
  *param_6 = uVar4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


