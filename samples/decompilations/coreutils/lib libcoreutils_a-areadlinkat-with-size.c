
/* WARNING: Unknown calling convention */

char * areadlinkat_with_size(int fd,char *file,size_t size)

{
  long lVar1;
  ulong uVar2;
  char *__ptr;
  char *pcVar3;
  int *piVar4;
  void *pvVar5;
  size_t sVar6;
  size_t __size;
  long in_FS_OFFSET;
  char stackbuf [128];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sVar6 = 0x400;
  if (size < 0x401) {
    sVar6 = size;
  }
  __size = 0x80;
  if (size != 0) {
    __size = sVar6 + 1;
  }
  do {
    if (__size != 0x80) goto LAB_001000d8;
    if (size != 0) goto LAB_001000d8;
    __size = 0x80;
    __ptr = (char *)0x0;
    pcVar3 = stackbuf;
    while( true ) {
      uVar2 = __readlinkat_chk(fd,file,pcVar3,__size,__size);
      if ((long)uVar2 < 0) {
        free(__ptr);
        goto LAB_001000f8;
      }
      if (uVar2 < __size) {
        pcVar3[uVar2] = '\0';
        uVar2 = uVar2 + 1;
        if (__ptr != (char *)0x0) {
          if ((__size <= uVar2) || (pcVar3 = (char *)realloc(__ptr,uVar2), pcVar3 == (char *)0x0)) {
            pcVar3 = __ptr;
          }
          goto LAB_001000fa;
        }
        pvVar5 = malloc(uVar2);
        if (pvVar5 != (void *)0x0) {
          pcVar3 = (char *)__memcpy_chk(pvVar5,pcVar3,uVar2,uVar2);
          goto LAB_001000fa;
        }
        goto LAB_001000f8;
      }
      free(__ptr);
      if (__size < 0x4000000000000000) break;
      if (__size == 0x7fffffffffffffff) {
        piVar4 = __errno_location();
        *piVar4 = 0xc;
        goto LAB_001000f8;
      }
      __size = 0x7fffffffffffffff;
LAB_001000d8:
      __ptr = (char *)malloc(__size);
      pcVar3 = __ptr;
      if (__ptr == (char *)0x0) {
LAB_001000f8:
        pcVar3 = (char *)0x0;
LAB_001000fa:
        if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return pcVar3;
      }
    }
    __size = __size * 2;
  } while( true );
}


