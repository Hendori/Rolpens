
void initbuffer(undefined1 (*param_1) [16])

{
  *(undefined8 *)param_1[1] = 0;
  *param_1 = (undefined1  [16])0x0;
  return;
}



long * readlinebuffer_delim(long *param_1,_IO_FILE *param_2,char param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  
  pcVar4 = (char *)param_1[2];
  pcVar5 = pcVar4 + *param_1;
  pcVar6 = pcVar4;
  if ((param_2->_flags & 0x10) != 0) {
    return (long *)0x0;
  }
  do {
    pbVar1 = (byte *)param_2->_IO_read_ptr;
    if (pbVar1 < param_2->_IO_read_end) {
      param_2->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar3 = (uint)*pbVar1;
LAB_00100088:
      cVar7 = (char)uVar3;
      if (pcVar6 == pcVar5) goto LAB_00100096;
    }
    else {
      uVar3 = __uflow(param_2);
      if (uVar3 != 0xffffffff) goto LAB_00100088;
      if (pcVar4 == pcVar6) {
        return (long *)0x0;
      }
      if ((param_2->_flags & 0x20) != 0) {
        return (long *)0x0;
      }
      if (pcVar6[-1] == param_3) goto LAB_00100143;
      if (pcVar6 != pcVar5) {
        *pcVar6 = param_3;
        pcVar6 = pcVar6 + 1;
        goto LAB_00100143;
      }
      uVar3 = (uint)param_3;
      cVar7 = param_3;
LAB_00100096:
      lVar2 = *param_1;
      pcVar4 = (char *)xpalloc(pcVar4,param_1,1,0xffffffffffffffff,1);
      pcVar6 = pcVar4 + lVar2;
      param_1[2] = (long)pcVar4;
      pcVar5 = pcVar4 + *param_1;
    }
    *pcVar6 = cVar7;
    pcVar6 = pcVar6 + 1;
    if ((int)param_3 == uVar3) {
LAB_00100143:
      param_1[1] = (long)pcVar6 - (long)pcVar4;
      return param_1;
    }
  } while( true );
}



void readlinebuffer(undefined8 param_1,undefined8 param_2)

{
  readlinebuffer_delim(param_1,param_2,10);
  return;
}



void freebuffer(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  return;
}


