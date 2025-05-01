
ulong pcre2_get_error_message_32(int param_1,undefined4 *param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar3;
  
  if (param_3 != 0) {
    if (99 < param_1) {
      iVar6 = param_1 + -100;
      uVar4 = 0x6e;
      pbVar3 = (byte *)"no error";
      goto joined_r0x00100088;
    }
    iVar6 = 1;
    pbVar3 = &DAT_001000c0;
    if (param_1 < 0) {
      iVar6 = -param_1;
      pbVar3 = (byte *)"no error";
    }
    do {
      do {
        pbVar2 = pbVar3 + 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar2;
      } while (bVar1 != 0);
      uVar4 = (uint)*pbVar2;
      if (*pbVar2 == 0) {
        return 0xffffffe3;
      }
      iVar6 = iVar6 + -1;
joined_r0x00100088:
    } while (iVar6 != 0);
    if (param_3 != 1) {
      uVar5 = 0;
      do {
        param_2[uVar5] = uVar4;
        uVar5 = uVar5 + 1;
        uVar4 = (uint)pbVar3[uVar5];
        if (pbVar3[uVar5] == 0) {
          param_2[uVar5] = 0;
          return uVar5 & 0xffffffff;
        }
      } while (uVar5 != param_3 - 1U);
      param_2 = param_2 + uVar5;
    }
    *param_2 = 0;
  }
  return 0xffffffd0;
}


