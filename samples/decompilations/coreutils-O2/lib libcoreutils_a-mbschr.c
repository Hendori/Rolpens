
byte * mbschr(byte *param_1,int param_2)

{
  size_t sVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long in_FS_OFFSET;
  undefined1 local_2c [4];
  undefined4 local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = __ctype_get_mb_cur_max();
  if ((sVar1 < 2) || (bVar5 = (byte)param_2, bVar5 < 0x30)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      pbVar2 = (byte *)strchr((char *)param_1,param_2);
      return pbVar2;
    }
  }
  else {
    for (; *param_1 != 0; param_1 = param_1 + uVar4) {
      if ((char)*param_1 < '\0') {
        pbVar2 = param_1 + (2 - (ulong)(param_1[1] == 0));
        local_28[0] = 0;
        uVar3 = mbrtoc32(local_2c,param_1,
                         pbVar2 + (*pbVar2 != 0) +
                         ((ulong)(pbVar2[*pbVar2 != 0] != 0) - (long)param_1),local_28);
        if (((long)uVar3 < 0) || (uVar4 = uVar3 & 0xff, (char)uVar3 == '\x01')) {
          if (*param_1 != bVar5) goto LAB_001000b0;
          goto LAB_001000d2;
        }
      }
      else {
        if (*param_1 == bVar5) goto LAB_001000d2;
LAB_001000b0:
        uVar4 = 1;
      }
    }
    param_1 = (byte *)0x0;
LAB_001000d2:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


