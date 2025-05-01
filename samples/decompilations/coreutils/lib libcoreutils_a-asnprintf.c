
/* WARNING: Unknown calling convention */

char * asnprintf(char *resultbuf,size_t *lengthp,char *format,...)

{
  long lVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  va_list args;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = (char *)vasnprintf();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


