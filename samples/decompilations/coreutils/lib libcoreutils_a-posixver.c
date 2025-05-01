
/* WARNING: Unknown calling convention */

int posix2_version(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  long in_FS_OFFSET;
  char *e;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = getenv("_POSIX2_VERSION");
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    lVar3 = __isoc23_strtol(pcVar2,&e,10);
    if (*e == '\0') {
      if (lVar3 < -0x80000000) {
        iVar1 = -0x80000000;
      }
      else {
        if (0x7fffffff < lVar3) {
          lVar3 = 0x7fffffff;
        }
        iVar1 = (int)lVar3;
      }
      goto LAB_00100033;
    }
  }
  iVar1 = 0x31069;
LAB_00100033:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


