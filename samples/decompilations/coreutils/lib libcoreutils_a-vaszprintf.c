
/* WARNING: Unknown calling convention */

ptrdiff_t vaszprintf(char **resultp,char *format,__va_list_tag *args)

{
  char *__ptr;
  int *piVar1;
  long in_FS_OFFSET;
  size_t length;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (char *)vasnprintf(0,&length,format,args);
  if (__ptr != (char *)0x0) {
    if (-1 < (long)length) {
      *resultp = __ptr;
      goto LAB_0010003e;
    }
    free(__ptr);
    piVar1 = __errno_location();
    *piVar1 = 0xc;
  }
  length = 0xffffffffffffffff;
LAB_0010003e:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return length;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


