
/* WARNING: Unknown calling convention */

ptrdiff_t vsnzprintf(char *str,size_t size,char *format,__va_list_tag *args)

{
  char *__src;
  size_t __n;
  int *piVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  size_t lenbuf;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lenbuf = size;
  __src = (char *)vasnprintf(str,&lenbuf);
  sVar2 = lenbuf;
  if (__src != (char *)0x0) {
    if (str != __src) {
      if (size != 0) {
        __n = size - 1;
        if (lenbuf < size) {
          __n = lenbuf;
        }
        memcpy(str,__src,__n);
        str[__n] = '\0';
      }
      free(__src);
    }
    if (-1 < (long)sVar2) goto LAB_00100056;
    piVar1 = __errno_location();
    *piVar1 = 0xc;
  }
  sVar2 = 0xffffffffffffffff;
LAB_00100056:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


