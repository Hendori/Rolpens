
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void testfile(char *param_1)

{
  __off_t __n;
  int iVar1;
  FILE *__stream;
  void *__ptr;
  size_t sVar2;
  long in_FS_OFFSET;
  stat sStack_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = stat(param_1,&sStack_b8);
  if ((-1 < iVar1) && ((sStack_b8.st_mode & 0xf000) == 0x8000)) {
    __printf_chk(2,0x100105,param_1);
    fflush(_stdout);
    __stream = fopen(param_1,"rb");
    __n = sStack_b8.st_size;
    if (__stream != (FILE *)0x0) {
      __ptr = malloc(sStack_b8.st_size);
      if (__ptr != (void *)0x0) {
        sVar2 = fread(__ptr,1,__n,__stream);
        if (sStack_b8.st_size != sVar2) {
          OPENSSL_die("assertion failed: s == (size_t)st.st_size","fuzz/test-corpus.c",0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        FuzzerTestOneInput(__ptr,sVar2);
        free(__ptr);
      }
      fclose(__stream);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 main(int param_1,long param_2)

{
  bool bVar1;
  size_t sVar2;
  char *pcVar3;
  void *__ptr;
  size_t sVar4;
  char *__dest;
  long lVar5;
  long in_FS_OFFSET;
  long local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  long local_40;
  
  lVar5 = 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_2;
  local_4c = param_1;
  FuzzerInitialize(&local_4c,&local_58);
  local_50 = 1;
  if (1 < local_4c) {
    do {
      bVar1 = false;
      __ptr = (void *)0x0;
      pcVar3 = *(char **)(local_58 + lVar5);
      sVar2 = strlen(pcVar3);
      local_48 = 0;
      while (pcVar3 = (char *)OPENSSL_DIR_read(&local_48,pcVar3), pcVar3 != (char *)0x0) {
        __dest = (char *)((long)__ptr + sVar2);
        sVar4 = sVar2;
        if (__ptr == (void *)0x0) {
          __ptr = malloc(0x1000);
          if (__ptr == (void *)0x0) {
            OPENSSL_DIR_end(&local_48);
            goto LAB_0010027d;
          }
          __strcpy_chk(__ptr,*(undefined8 *)(local_58 + lVar5),0x1000);
          sVar4 = sVar2 + 1;
          __dest = (char *)((long)__ptr + sVar4);
          *(undefined2 *)((long)__ptr + sVar2) = _LC4;
        }
        bVar1 = true;
        strcpy(__dest,pcVar3);
        testfile(__ptr);
        pcVar3 = *(char **)(local_58 + lVar5);
        sVar2 = sVar4;
      }
      OPENSSL_DIR_end(&local_48);
      if (!bVar1) {
        testfile(*(undefined8 *)(local_58 + lVar5));
      }
LAB_0010027d:
      lVar5 = lVar5 + 8;
      free(__ptr);
      local_50 = local_50 + 1;
    } while (local_50 < local_4c);
  }
  FuzzerCleanup();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


