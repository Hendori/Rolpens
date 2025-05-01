
/* WARNING: Unknown calling convention */

idx_t full_read(int fd,void *buf,idx_t count)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  if (count < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = safe_read(fd,buf,count);
      if (lVar1 < 0) {
        return lVar3;
      }
      if (lVar1 == 0) {
        piVar2 = __errno_location();
        *piVar2 = 0;
        return lVar3;
      }
      count = count - lVar1;
      lVar3 = lVar3 + lVar1;
      buf = (void *)((long)buf + lVar1);
    } while (0 < count);
  }
  return lVar3;
}


