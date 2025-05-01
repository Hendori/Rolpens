
/* WARNING: Unknown calling convention */

off64_t vfzprintf(FILE *fp,char *format,__va_list_tag *args)

{
  long lVar1;
  char *__ptr;
  size_t sVar2;
  int *piVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  size_t lenbuf;
  char buf [2000];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lenbuf = 2000;
  __ptr = (char *)vasnprintf(buf,&lenbuf,format,args);
  sVar4 = lenbuf;
  if (__ptr == (char *)0x0) {
    fseterr(fp);
  }
  else if ((long)lenbuf < 0) {
    if (__ptr != buf) {
      free(__ptr);
    }
    fseterr(fp);
    piVar3 = __errno_location();
    *piVar3 = 0xc;
  }
  else {
    sVar2 = fwrite(__ptr,1,lenbuf,(FILE *)fp);
    if (sVar4 <= sVar2) {
      if (__ptr != buf) {
        free(__ptr);
      }
      goto LAB_0010008b;
    }
    if (__ptr != buf) {
      free(__ptr);
    }
  }
  sVar4 = 0xffffffffffffffff;
LAB_0010008b:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


