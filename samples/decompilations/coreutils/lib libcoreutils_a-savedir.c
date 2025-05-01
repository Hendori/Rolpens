
/* WARNING: Unknown calling convention */

int direntry_cmp_inode(void *a,void *b,void *arg)

{
  return (uint)(*(ulong *)((long)b + 8) < *(ulong *)((long)a + 8)) -
         (uint)(*(ulong *)((long)a + 8) < *(ulong *)((long)b + 8));
}



/* WARNING: Unknown calling convention */

int direntry_cmp_name(void *a,void *b,void *arg)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar1 = strcmp((char *)((long)arg + *a),(char *)(*b + (long)arg));
  return iVar1;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "savedir_option": Some values do not have unique names */

char * streamsavedir(DIR *dirp,savedir_option option)

{
  char cVar1;
  __compar_d_fn_t __compar;
  __ino_t _Var2;
  int *piVar3;
  dirent *pdVar4;
  size_t sVar5;
  char *pcVar6;
  char *__arg;
  char *pcVar7;
  long *plVar8;
  size_t __nmemb;
  size_t sVar9;
  long lVar10;
  long in_FS_OFFSET;
  long *local_78;
  idx_t allocated;
  idx_t entries_allocated;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  allocated = 0;
  entries_allocated = 0;
  __compar = (__compar_d_fn_t)comparison_function_table[option];
  if (dirp == (DIR *)0x0) {
    __arg = (char *)0x0;
    goto LAB_001001b2;
  }
  lVar10 = 0;
  __arg = (char *)0x0;
  piVar3 = __errno_location();
  local_78 = (long *)0x0;
  __nmemb = 0;
  while( true ) {
    *piVar3 = 0;
    pdVar4 = readdir((DIR *)dirp);
    if (pdVar4 == (dirent *)0x0) break;
    cVar1 = pdVar4->d_name[0];
    if ((cVar1 == '.') && (cVar1 = pdVar4->d_name[1], cVar1 == '.')) {
      cVar1 = pdVar4->d_name[2];
    }
    if (cVar1 != '\0') {
      sVar5 = strlen(pdVar4->d_name);
      sVar5 = sVar5 + 1;
      if (allocated - lVar10 <= (long)sVar5) {
        __arg = (char *)xpalloc(__arg,&allocated,sVar5 - (allocated - lVar10),0x7ffffffffffffffe,1);
      }
      memcpy(__arg + lVar10,pdVar4->d_name,sVar5);
      sVar9 = __nmemb;
      if (__compar != (__compar_d_fn_t)0x0) {
        if (__nmemb == entries_allocated) {
          local_78 = (long *)xpalloc(local_78,&entries_allocated,1,0xffffffffffffffff,0x10);
        }
        _Var2 = pdVar4->d_ino;
        sVar9 = __nmemb + 1;
        local_78[__nmemb * 2] = lVar10;
        (local_78 + __nmemb * 2)[1] = _Var2;
      }
      lVar10 = lVar10 + sVar5;
      __nmemb = sVar9;
    }
  }
  pcVar6 = (char *)0x0;
  if (*piVar3 == 0) {
    if (__compar != (__compar_d_fn_t)0x0) {
      if (__nmemb == 0) {
        pcVar6 = (char *)ximalloc(lVar10 + 1);
        pcVar7 = pcVar6;
      }
      else {
        qsort_r(local_78,__nmemb,0x10,__compar,__arg);
        pcVar6 = (char *)ximalloc(lVar10 + 1);
        pcVar7 = pcVar6;
        if (0 < (long)__nmemb) {
          plVar8 = local_78;
          do {
            lVar10 = *plVar8;
            plVar8 = plVar8 + 2;
            pcVar7 = stpcpy(pcVar7,__arg + lVar10);
            pcVar7 = pcVar7 + 1;
          } while (plVar8 != local_78 + __nmemb * 2);
        }
      }
      *pcVar7 = '\0';
      goto LAB_001001a1;
    }
    if (lVar10 == allocated) {
      __arg = (char *)xirealloc(__arg,lVar10 + 1);
    }
    __arg[lVar10] = '\0';
  }
  else {
LAB_001001a1:
    free(__arg);
    __arg = pcVar6;
  }
  free(local_78);
LAB_001001b2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __arg;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "savedir_option": Some values do not have unique names */

char * savedir(char *dir,savedir_option option)

{
  int iVar1;
  DIR *dirp;
  char *__ptr;
  
  dirp = opendir(dir);
  if (dirp != (DIR *)0x0) {
    __ptr = streamsavedir((DIR *)dirp,option);
    iVar1 = closedir(dirp);
    if (iVar1 == 0) {
      return __ptr;
    }
    free(__ptr);
  }
  return (char *)0x0;
}


