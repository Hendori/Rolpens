
/* WARNING: Unknown calling convention */

_Bool acl_errno_valid(int errnum)

{
  if (errnum != 0x26) {
    if (0x26 < errnum) {
      return errnum != 0x5f;
    }
    if (errnum != 0x10) {
      return errnum != 0x16;
    }
  }
  return false;
}


