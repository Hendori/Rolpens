
/* WARNING: Unknown calling convention */

char * mbschr(char *string,int c)

{
  long lVar1;
  byte bVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  bVar2 = (byte)c;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sVar3 = __ctype_get_mb_cur_max();
  if ((sVar3 < 2) || (bVar2 < 0x30)) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = strchr(string,c);
      return pcVar4;
    }
  }
  else {
    for (; *string != 0; string = (char *)((byte *)string + uVar6)) {
      if (*string < '\0') {
        pbVar7 = (byte *)string + (2 - (ulong)(((byte *)string)[1] == 0));
        mbs.__count = 0;
        uVar5 = mbrtoc32(&ch,string,
                         pbVar7 + (*pbVar7 != 0) +
                         ((ulong)(pbVar7[*pbVar7 != 0] != 0) - (long)string),&mbs);
        if (((long)uVar5 < 0) || (uVar6 = uVar5 & 0xff, (char)uVar5 == '\x01')) {
          if (*string != bVar2) goto LAB_001000b0;
          goto LAB_001000d2;
        }
      }
      else {
        if (*string == bVar2) goto LAB_001000d2;
LAB_001000b0:
        uVar6 = 1;
      }
    }
    string = (char *)0x0;
LAB_001000d2:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return string;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


