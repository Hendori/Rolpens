
byte * mbschr(byte *param_1,int param_2)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  long in_FS_OFFSET;
  undefined1 local_2c [4];
  undefined4 local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = __ctype_get_mb_cur_max();
  if ((sVar2 < 2) || (bVar6 = (byte)param_2, bVar6 < 0x30)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      pbVar3 = (byte *)strchr((char *)param_1,param_2);
      return pbVar3;
    }
  }
  else {
    for (; bVar1 = *param_1, bVar1 != 0; param_1 = param_1 + uVar5) {
      if ((char)bVar1 < '\0') {
        pbVar3 = param_1 + (2 - (ulong)(param_1[1] == 0));
        local_28[0] = 0;
        uVar4 = mbrtoc32(local_2c,param_1,
                         pbVar3 + (*pbVar3 != 0) +
                         ((ulong)(pbVar3[*pbVar3 != 0] != 0) - (long)param_1),local_28);
        if (((long)uVar4 < 0) || (uVar5 = uVar4 & 0xff, (char)uVar4 == '\x01')) {
          if (*param_1 != bVar6) goto LAB_001000b8;
          goto LAB_001000da;
        }
      }
      else {
        if (bVar1 == bVar6) goto LAB_001000da;
LAB_001000b8:
        uVar5 = 1;
      }
    }
    param_1 = (byte *)0x0;
LAB_001000da:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


