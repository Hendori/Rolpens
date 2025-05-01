
/* WARNING: Unknown calling convention */

char * xgethostname(void)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  char *__name;
  long lVar4;
  size_t sVar5;
  char *__ptr;
  long in_FS_OFFSET;
  idx_t size;
  char buf [100];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __name = buf;
  size = 100;
  puVar3 = (uint *)__errno_location();
  lVar4 = 100;
  __ptr = (char *)0x0;
  while( true ) {
    __name[lVar4 + -1] = '\0';
    *puVar3 = 0;
    iVar2 = gethostname(__name,lVar4 - 1U);
    if (iVar2 == 0) {
      sVar5 = strlen(__name);
      if ((long)(sVar5 + 1) < (long)(lVar4 - 1U)) {
        if (__ptr == (char *)0x0) {
          __ptr = (char *)ximemdup(__name,sVar5 + 1);
        }
        goto LAB_001000c9;
      }
      *puVar3 = 0;
    }
    free(__ptr);
    if ((0x24 < *puVar3) || ((0xffffffefffbfeffeU >> ((ulong)*puVar3 & 0x3f) & 1) != 0)) break;
    __name = (char *)xpalloc(0,&size,1,0xffffffffffffffff,1);
    lVar4 = size;
    __ptr = __name;
  }
  __ptr = (char *)0x0;
LAB_001000c9:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


