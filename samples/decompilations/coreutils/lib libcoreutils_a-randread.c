
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void randread_error(void *file_name)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  iVar1 = _exit_failure;
  if (_exit_failure != 0) {
    uVar2 = quote();
    piVar3 = __errno_location();
    if (*piVar3 == 0) {
      uVar4 = dcgettext(0,"%s: end of file",5);
    }
    else {
      uVar4 = dcgettext(0,"%s: read error",5);
    }
    error(iVar1,*piVar3,uVar4,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("exit_failure","lib/randread.c",0x6b,"randread_error");
}



/* WARNING: Unknown calling convention */

randread_source * randread_new(char *name,size_t bytes_bound)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  FILE *pFVar4;
  FILE *__stream;
  randread_source *prVar5;
  size_t __n;
  long lVar6;
  int *piVar7;
  undefined1 *puVar8;
  
  if (bytes_bound == 0) {
    prVar5 = (randread_source *)xmalloc(0x1038);
    prVar5->source = (FILE *)0x0;
    prVar5->handler = randread_error;
    prVar5->handler_arg = (void *)0x0;
    return prVar5;
  }
  if (name == (char *)0x0) {
    prVar5 = (randread_source *)xmalloc(0x1038);
    prVar5->source = (FILE *)0x0;
    puVar1 = (undefined1 *)((long)&prVar5->buf + 8);
    puVar2 = (undefined1 *)((long)&prVar5->buf + 0x808);
    prVar5->handler = randread_error;
    prVar5->handler_arg = (void *)0x0;
    (prVar5->buf).isaac.buffered = 0;
    puVar8 = puVar1;
    do {
      while( true ) {
        if (puVar2 <= puVar8) {
          isaac_seed(puVar1);
          return prVar5;
        }
        lVar6 = getrandom(puVar8,(long)puVar2 - (long)puVar8,0);
        if (lVar6 < 0) break;
        puVar8 = puVar8 + lVar6;
      }
      piVar7 = __errno_location();
    } while (*piVar7 == 4);
    piVar7 = __errno_location();
    pFVar4 = prVar5->source;
    iVar3 = *piVar7;
    __explicit_bzero_chk(prVar5,0x1038,0x1038);
    free(prVar5);
    if (pFVar4 != (FILE *)0x0) {
      rpl_fclose(pFVar4);
    }
    *piVar7 = iVar3;
  }
  else {
    __stream = (FILE *)fopen_safer(name,&_LC4);
    if (__stream != (FILE *)0x0) {
      prVar5 = (randread_source *)xmalloc(0x1038);
      prVar5->source = (FILE *)__stream;
      prVar5->handler = randread_error;
      prVar5->handler_arg = name;
      __n = 0x1000;
      if (bytes_bound < 0x1001) {
        __n = bytes_bound;
      }
      setvbuf(__stream,(prVar5->buf).c,0,__n);
      return prVar5;
    }
  }
  return (randread_source *)0x0;
}



/* WARNING: Unknown calling convention */

void randread_set_handler(randread_source *s,_func_void_void_ptr *handler)

{
  s->handler = handler;
  return;
}



/* WARNING: Unknown calling convention */

void randread_set_handler_arg(randread_source *s,void *handler_arg)

{
  s->handler_arg = handler_arg;
  return;
}



/* WARNING: Unknown calling convention */

void randread(randread_source *s,void *buf,size_t size)

{
  undefined1 *puVar1;
  char *pcVar2;
  size_t sVar3;
  uint *puVar4;
  FILE *__stream;
  uint uVar5;
  size_t sVar6;
  void *pvVar7;
  ulong __n;
  ulong local_40;
  
  __stream = (FILE *)s->source;
  if (__stream != (FILE *)0x0) {
    while( true ) {
      sVar3 = fread_unlocked(buf,1,size,__stream);
      puVar4 = (uint *)__errno_location();
      buf = (void *)((long)buf + sVar3);
      size = size - sVar3;
      if (size == 0) break;
      pvVar7 = s->handler_arg;
      uVar5 = s->source->_flags & 0x20;
      if (uVar5 != 0) {
        uVar5 = *puVar4;
      }
      *puVar4 = uVar5;
      (*s->handler)(pvVar7);
      __stream = (FILE *)s->source;
    }
    return;
  }
  __n = (s->buf).isaac.buffered;
  puVar1 = (undefined1 *)((long)&s->buf + 8);
  pcVar2 = (s->buf).c + 0x820;
  sVar6 = size;
  if (__n < size) {
    do {
      pvVar7 = (void *)((long)buf + __n);
      sVar6 = sVar6 - __n;
      memcpy(buf,pcVar2 + (0x800 - __n),__n);
      local_40 = (ulong)((uint)pvVar7 & 7);
      size = sVar6;
      if (((ulong)pvVar7 & 7) == 0) {
        while (buf = (void *)((long)pvVar7 + (sVar6 - size)), ((uint)sVar6 & 0x7ff) != size) {
          isaac_refill(puVar1,buf);
          size = size - 0x800;
          if (size == 0) {
            (s->buf).isaac.buffered = 0;
            return;
          }
        }
        __n = 0x800;
        isaac_refill(puVar1,pcVar2);
        goto LAB_00100399;
      }
      __n = 0x800;
      isaac_refill(puVar1,pcVar2);
      buf = pvVar7;
    } while (0x800 < sVar6);
    local_40 = 0;
  }
  else {
    local_40 = 0x800 - __n;
  }
LAB_00100399:
  memcpy(buf,pcVar2 + local_40,size);
  (s->buf).isaac.buffered = __n - size;
  return;
}



/* WARNING: Unknown calling convention */

int randread_free(randread_source *s)

{
  FILE *pFVar1;
  int iVar2;
  
  pFVar1 = s->source;
  __explicit_bzero_chk(s,0x1038,0xffffffffffffffff);
  free(s);
  if (pFVar1 != (FILE *)0x0) {
    iVar2 = rpl_fclose(pFVar1);
    return iVar2;
  }
  return 0;
}


