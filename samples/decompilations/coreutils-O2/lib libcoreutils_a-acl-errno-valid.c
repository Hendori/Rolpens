
bool acl_errno_valid(int param_1)

{
  if (param_1 != 0x26) {
    if (0x26 < param_1) {
      return param_1 != 0x5f;
    }
    if (param_1 != 0x10) {
      return param_1 != 0x16;
    }
  }
  return false;
}


