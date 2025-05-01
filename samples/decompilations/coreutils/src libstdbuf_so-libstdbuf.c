
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void apply_mode(FILE *stream,char *mode)

{
  int iVar1;
  size_t __size;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char *mode_end;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*mode == '0') {
    __size = 0;
    iVar1 = 2;
    pcVar3 = (char *)0x0;
LAB_00100107:
    iVar1 = setvbuf((FILE *)stream,pcVar3,iVar1,__size);
    if (iVar1 != 0) {
      pcVar4 = "stdout";
      iVar1 = fileno((FILE *)stream);
      if (((iVar1 != 1) && (pcVar4 = "stderr", iVar1 != 2)) && (pcVar4 = "stdin", iVar1 != 0)) {
        pcVar4 = "unknown";
      }
      uVar2 = dcgettext(0,"could not set buffering of %s to mode %s\n",5);
      __fprintf_chk(_stderr,2,uVar2,pcVar4,mode);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        free(pcVar3);
        return;
      }
      goto LAB_001002b5;
    }
  }
  else {
    if (*mode == 'L') {
      __size = 0;
      iVar1 = 1;
      pcVar3 = (char *)0x0;
      goto LAB_00100107;
    }
    __size = __isoc23_strtoumax(mode,&mode_end,10);
    if ((__size == 0) || (*mode_end != '\0')) {
      pcVar3 = "stdout";
      iVar1 = fileno((FILE *)stream);
      if (((iVar1 != 1) && (pcVar3 = "stderr", iVar1 != 2)) && (pcVar3 = "stdin", iVar1 != 0)) {
        pcVar3 = "unknown";
      }
      uVar2 = dcgettext(0,"invalid buffering mode %s for %s\n",5);
      __fprintf_chk(_stderr,2,uVar2,mode,pcVar3);
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void stdbuf(void)

{
  char *mode;
  char *mode_00;
  char *mode_01;
  
  mode = getenv("_STDBUF_E");
  mode_00 = getenv("_STDBUF_I");
  mode_01 = getenv("_STDBUF_O");
  if (mode != (char *)0x0) {
    apply_mode(_stderr,mode);
  }
  if (mode_00 != (char *)0x0) {
    apply_mode(_stdin,mode_00);
  }
  if (mode_01 != (char *)0x0) {
    apply_mode(_stdout,mode_01);
    return;
  }
  return;
}


