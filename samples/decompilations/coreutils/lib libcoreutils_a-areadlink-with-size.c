
/* WARNING: Unknown calling convention */

char * areadlink_with_size(char *file,size_t size)

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
    if (__size != 0x80) goto LAB_001000cb;
    if (size != 0) goto LAB_001000cb;
    __size = 0x80;
    __ptr = (char *)0x0;
    pcVar3 = stackbuf;
LAB_00100086:
    uVar2 = __readlink_chk(file,pcVar3,__size,__size);
    if ((long)uVar2 < 0) {
      free(__ptr);
      goto LAB_001000e8;
    }
    if (uVar2 < __size) {
      pcVar3[uVar2] = '\0';
      uVar2 = uVar2 + 1;
      if (__ptr != (char *)0x0) {
        if ((__size <= uVar2) || (pcVar3 = (char *)realloc(__ptr,uVar2), pcVar3 == (char *)0x0)) {
          pcVar3 = __ptr;
        }
        goto LAB_001000ea;
      }
      pvVar5 = malloc(uVar2);
      if (pvVar5 != (void *)0x0) {
        pcVar3 = (char *)__memcpy_chk(pvVar5,pcVar3,uVar2,uVar2);
        goto LAB_001000ea;
      }
      goto LAB_001000e8;
    }
    free(__ptr);
    if (0x3fffffffffffffff < __size) {
      if (__size != 0x7fffffffffffffff) break;
      goto LAB_00100148;
    }
    __size = __size * 2;
  } while( true );
  __size = 0x7fffffffffffffff;
LAB_001000cb:
  __ptr = (char *)malloc(__size);
  pcVar3 = __ptr;
  if (__ptr == (char *)0x0) {
LAB_00100148:
    piVar4 = __errno_location();
    *piVar4 = 0xc;
LAB_001000e8:
    pcVar3 = (char *)0x0;
LAB_001000ea:
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return pcVar3;
  }
  goto LAB_00100086;
}


