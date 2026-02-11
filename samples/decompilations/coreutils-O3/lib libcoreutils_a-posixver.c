
long posix2_version(void)

{
  char *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = getenv("_POSIX2_VERSION");
  if (((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) ||
     (lVar2 = __isoc23_strtol(pcVar1,&local_18,10), *local_18 != '\0')) {
    lVar2 = 0x31069;
  }
  else if (lVar2 < -0x80000000) {
    lVar2 = 0x80000000;
  }
  else if (0x7fffffff < lVar2) {
    lVar2 = 0x7fffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}


