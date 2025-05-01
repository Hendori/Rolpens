
/* WARNING: Unknown calling convention */

ptrdiff_t safe_write(int fd,bufptr buf,idx_t count)

{
  ssize_t sVar1;
  int *piVar2;
  
  while( true ) {
    do {
      sVar1 = write(fd,buf,count);
      if (-1 < sVar1) {
        return sVar1;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    if (*piVar2 != 0x16) break;
    if (count < 0x7ff00001) {
      return sVar1;
    }
    count = 0x7ff00000;
  }
  return sVar1;
}


