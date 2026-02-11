
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void apply_mode(FILE *param_1,char *param_2)

{
  int iVar1;
  size_t __size;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == '0') {
    __size = 0;
    iVar1 = 2;
    pcVar3 = (char *)0x0;
LAB_00100107:
    iVar1 = setvbuf(param_1,pcVar3,iVar1,__size);
    if (iVar1 != 0) {
      pcVar4 = "stdout";
      iVar1 = fileno(param_1);
      if (((iVar1 != 1) && (pcVar4 = "stderr", iVar1 != 2)) && (pcVar4 = "stdin", iVar1 != 0)) {
        pcVar4 = "unknown";
      }
      uVar2 = dcgettext(0,"could not set buffering of %s to mode %s\n",5);
      __fprintf_chk(_stderr,2,uVar2,pcVar4,param_2);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        free(pcVar3);
        return;
      }
      goto LAB_001002b5;
    }
  }
  else {
    if (*param_2 == 'L') {
      __size = 0;
      iVar1 = 1;
      pcVar3 = (char *)0x0;
      goto LAB_00100107;
    }
    __size = __isoc23_strtoumax(param_2,&local_28,10);
    if ((__size == 0) || (*local_28 != '\0')) {
      pcVar3 = "stdout";
      iVar1 = fileno(param_1);
      if (((iVar1 != 1) && (pcVar3 = "stderr", iVar1 != 2)) && (pcVar3 = "stdin", iVar1 != 0)) {
        pcVar3 = "unknown";
      }
      uVar2 = dcgettext(0,"invalid buffering mode %s for %s\n",5);
      __fprintf_chk(_stderr,2,uVar2,param_2,pcVar3);
    }
    else {
      pcVar3 = (char *)malloc(__size);
      iVar1 = 0;
      if (pcVar3 != (char *)0x0) goto LAB_00100107;
      uVar2 = dcgettext(0,"failed to allocate a %ju byte stdio buffer\n",5);
      __fprintf_chk(_stderr,2,uVar2,__size);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001002b5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void stdbuf(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar1 = getenv("_STDBUF_E");
  pcVar2 = getenv("_STDBUF_I");
  pcVar3 = getenv("_STDBUF_O");
  if (pcVar1 != (char *)0x0) {
    apply_mode(_stderr,pcVar1);
  }
  if (pcVar2 != (char *)0x0) {
    apply_mode(_stdin,pcVar2);
  }
  if (pcVar3 != (char *)0x0) {
    apply_mode(_stdout,pcVar3);
    return;
  }
  return;
}


