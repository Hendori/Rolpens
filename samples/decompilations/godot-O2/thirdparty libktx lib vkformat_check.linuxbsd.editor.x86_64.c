
bool isProhibitedFormat(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (0x5e < uVar1) {
    if (uVar1 < 0x3b9d2b82) {
      return 0x3b9d2b61 < uVar1 && (0xf9f07c1fUL >> ((ulong)(uVar1 + 0xc462d49e) & 0x3f) & 1) != 0;
    }
    return uVar1 + 0xc4602cf0 < 4;
  }
  if (0x1f < uVar1) {
    return (0x60c1830c3060c183U >> ((ulong)(uVar1 - 0x20) & 0x3f) & 1) != 0;
  }
  if (uVar1 - 0xb < 0x10) {
    return (0x60c1800UL >> (param_1 & 0x3f) & 1) != 0;
  }
  return false;
}



ulong isValidFormat(uint param_1)

{
  ulong uVar1;
  
  uVar1 = 1;
  if (0xb8 < param_1) {
    if (param_1 < 0x3b9d2b7d) {
      if (0x3b9d2b5f < param_1) {
        return CONCAT71(0x183e0f,(0x183e0f83UL >> ((ulong)(param_1 + 0xc462d4a0) & 0x3f) & 1) != 0);
      }
      if (0x3b9b9cf7 < param_1) {
        return (ulong)(param_1 + 0xc4643430 < 0xe);
      }
      return (ulong)(0x3b9b9cef < param_1);
    }
    if (param_1 != 0x3ba1de80) {
      if (param_1 < 0x3ba1de81) {
        if (param_1 < 0x3b9f2f1e) {
          return (ulong)(0x3b9f2eff < param_1);
        }
        return (ulong)(param_1 + 0xc46005e0 < 2);
      }
      uVar1 = (ulong)(param_1 + 0xc45e0a10 < 2);
    }
  }
  return uVar1;
}


