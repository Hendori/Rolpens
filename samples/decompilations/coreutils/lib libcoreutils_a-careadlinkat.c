
/* WARNING: Unknown calling convention */

char * careadlinkat(int fd,char *filename,char *buffer,size_t buffer_size,allocator *alloc,
                   _func_ssize_t_int_char_ptr_char_ptr_size_t *preadlinkat)

{
  int iVar1;
  long lVar2;
  ssize_t sVar3;
  int *piVar4;
  void *__dest;
  char *pcVar5;
  size_t sVar6;
  size_t __n;
  long in_FS_OFFSET;
  char stack_buf [1024];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (alloc == (allocator *)0x0) {
    alloc = (allocator *)&stdlib_allocator;
  }
  if (buffer == (char *)0x0) {
    buffer = stack_buf;
    sVar6 = 0x400;
    pcVar5 = buffer;
  }
  else {
    sVar6 = 0x7fffffffffffffff;
    pcVar5 = buffer;
    if (buffer_size < 0x8000000000000000) {
      sVar6 = buffer_size;
    }
  }
  do {
    sVar3 = (*preadlinkat)(fd,filename,buffer,sVar6);
    if (sVar3 < 0) {
      if (pcVar5 != buffer) {
        piVar4 = __errno_location();
        iVar1 = *piVar4;
        (*alloc->free)(buffer);
        *piVar4 = iVar1;
      }
      goto LAB_001000dc;
    }
    if (sVar3 < (long)sVar6) {
      buffer[sVar3] = '\0';
      __n = sVar3 + 1;
      if (buffer != stack_buf) {
        if (((((long)sVar6 <= (long)__n) || (pcVar5 == buffer)) ||
            (alloc->reallocate == (_func_void_ptr_void_ptr_size_t *)0x0)) ||
           (pcVar5 = (char *)(*alloc->reallocate)(buffer,__n), pcVar5 == (char *)0x0)) {
          pcVar5 = buffer;
        }
        goto LAB_001000de;
      }
      __dest = (*alloc->allocate)(__n);
      if (__dest != (void *)0x0) {
        pcVar5 = (char *)memcpy(__dest,buffer,__n);
        goto LAB_001000de;
      }
      break;
    }
    if (pcVar5 != buffer) {
      (*alloc->free)(buffer);
    }
    if (0x3ffffffffffffffe < (long)sVar6) {
      piVar4 = __errno_location();
      *piVar4 = 0x24;
      goto LAB_001000dc;
    }
    __n = sVar6 * 2 + 1;
    buffer = (char *)(*alloc->allocate)(__n);
    sVar6 = __n;
  } while (buffer != (char *)0x0);
  if (alloc->die != (_func_void_size_t *)0x0) {
    (*alloc->die)(__n);
  }
  piVar4 = __errno_location();
  *piVar4 = 0xc;
LAB_001000dc:
  pcVar5 = (char *)0x0;
LAB_001000de:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar5;
}


