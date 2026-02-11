
/* WARNING: Type propagation algorithm not settling */

char * skip_str_matching(char *param_1,code *param_2,char param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong unaff_RBX;
  ulong uVar5;
  long in_FS_OFFSET;
  uint local_4c [3];
  long local_40;
  
  cVar1 = *param_1;
  uVar5 = (ulong)(uint)(int)cVar1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (cVar1 == '\0') {
LAB_00100093:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  if (cVar1 < '\0') goto LAB_001000d8;
  do {
    uVar3 = 1;
    uVar2 = 0;
    while( true ) {
      unaff_RBX = unaff_RBX & 0xffff000000000000 | uVar5 | uVar2 << 0x20 | (uVar3 & 0xff) << 0x28;
      cVar1 = (*param_2)(unaff_RBX);
      if (cVar1 != param_3) goto LAB_00100093;
      param_1 = param_1 + (uVar3 & 0xff);
      cVar1 = *param_1;
      uVar5 = (ulong)(uint)(int)cVar1;
      if (cVar1 == '\0') goto LAB_00100093;
      if (-1 < cVar1) break;
LAB_001000d8:
      pcVar4 = param_1 + (2 - (ulong)(param_1[1] == '\0'));
      local_4c[1] = 0;
      uVar3 = mbrtoc32(local_4c,param_1,
                       pcVar4 + (*pcVar4 != '\0') +
                       ((ulong)(pcVar4[*pcVar4 != '\0'] != '\0') - (long)param_1),local_4c + 1);
      uVar2 = uVar5 & 0xff;
      if ((long)uVar3 < 0) {
        uVar3 = 1;
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)local_4c[0];
        uVar2 = 0;
      }
    }
  } while( true );
}



/* WARNING: Type propagation algorithm not settling */

byte * skip_buf_matching(byte *param_1,byte *param_2,code *param_3,char param_4,ulong param_5)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long in_FS_OFFSET;
  uint local_4c [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 <= param_1) {
LAB_001001f8:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  bVar5 = *param_1;
  if ((char)bVar5 < '\0') goto LAB_00100240;
  do {
    uVar4 = (ulong)(uint)(int)(char)bVar5;
    uVar2 = 1;
    uVar3 = 0;
    while( true ) {
      param_5 = param_5 & 0xffff000000000000 | uVar4 | uVar3 << 0x20 | (uVar2 & 0xff) << 0x28;
      cVar1 = (*param_3)(param_5);
      if ((cVar1 != param_4) || (param_1 = param_1 + (uVar2 & 0xff), param_2 <= param_1))
      goto LAB_001001f8;
      bVar5 = *param_1;
      if (-1 < (char)bVar5) break;
LAB_00100240:
      local_4c[1] = 0;
      uVar2 = mbrtoc32(local_4c,param_1,(long)param_2 - (long)param_1,local_4c + 1);
      if ((long)uVar2 < 0) {
        uVar3 = (ulong)bVar5;
        uVar2 = 1;
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)local_4c[0];
        uVar3 = 0;
      }
    }
  } while( true );
}


