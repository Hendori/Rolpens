
uint vkFormatTypeSize(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 < 0xb9) {
    if (0x79 < param_1) {
      uVar2 = 1L << ((char)param_1 + 0x86U & 0x3f);
      if ((uVar2 & 0x7ffffffffffffe20) != 0) {
        return 1;
      }
      if ((uVar2 & 0x19b) != 0) {
        return 4;
      }
      return (uint)((uVar2 & 0x44) != 0) * 2;
    }
    uVar1 = 8;
    if (param_1 < 0x6e) {
      if (0x45 < param_1) {
        return (-(uint)(param_1 < 0x62) & 0xfffffffe) + 4;
      }
      uVar1 = 4;
      if ((param_1 < 0x33) && (uVar1 = 1, param_1 < 9)) {
        return (1 < param_1) + 1;
      }
    }
  }
  else {
    if (param_1 == 0x3b9fd310) {
      return 1;
    }
    if (param_1 < 0x3b9fd311) {
      if (param_1 < 0x3b9d2b67) {
        uVar1 = 1;
        if (param_1 < 0x3b9d2b60) {
          if (param_1 < 0x3b9b9cf8) {
            return (uint)(0x3b9b9cef < param_1);
          }
          return (uint)(param_1 + 0xc4643430 < 0xe);
        }
      }
      else {
        uVar1 = 2;
        if (0x3b9d2b81 < param_1) {
          return (uint)(param_1 + 0xc460d100 < 0x1e);
        }
      }
    }
    else {
      uVar1 = 2;
      if (param_1 != 0x3ba1de80) {
        if (param_1 < 0x3ba1de81) {
          if (0x3b9fd313 < param_1) {
            return (uint)(param_1 + 0xc46005e0 < 2) * 2;
          }
        }
        else if (param_1 != 0x3ba1f5f0) {
          return (uint)(param_1 == 0x3ba1f5f1);
        }
      }
    }
  }
  return uVar1;
}


