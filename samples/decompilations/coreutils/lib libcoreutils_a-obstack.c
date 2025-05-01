
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void print_and_abort(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext("gnulib","memory exhausted",5);
  __fprintf_chk(_stderr,2,&_LC2,uVar1);
                    /* WARNING: Subroutine does not return */
  exit(_exit_failure);
}



/* WARNING: Unknown calling convention */

int rpl_obstack_begin(obstack *h,size_t size,size_t alignment,_func_void_ptr_size_t *chunkfun,
                     _func_void_void_ptr *freefun)

{
  int iVar1;
  
  h->field_0x50 = h->field_0x50 & 0xfe;
  (h->chunkfun).plain = chunkfun;
  (h->freefun).plain = freefun;
  iVar1 = _obstack_begin_worker(h,size,alignment);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int rpl_obstack_begin_1(obstack *h,size_t size,size_t alignment,
                       _func_void_ptr_void_ptr_size_t *chunkfun,
                       _func_void_void_ptr_void_ptr *freefun,void *arg)

{
  int iVar1;
  
  h->field_0x50 = h->field_0x50 | 1;
  (h->chunkfun).extra = chunkfun;
  (h->freefun).extra = freefun;
  h->extra_arg = arg;
  iVar1 = _obstack_begin_worker(h,size,alignment);
  return iVar1;
}



/* WARNING: Unknown calling convention */

void rpl_obstack_newchunk(obstack *h,size_t length)

{
  byte bVar1;
  _obstack_chunk *p_Var2;
  char *__src;
  _obstack_chunk *p_Var3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong __n;
  char *pcVar8;
  bool bVar9;
  
  __n = (long)h->next_free - (long)h->object_base;
  uVar5 = length + __n;
  p_Var2 = h->chunk;
  bVar9 = CARRY8(uVar5,h->alignment_mask);
  puVar6 = (ulong *)(uVar5 + h->alignment_mask);
  puVar4 = (ulong *)CONCAT71((int7)((ulong)h >> 8),bVar9);
  puVar7 = (ulong *)((long)puVar6 + (__n >> 3) + 100);
  if (puVar6 < (ulong *)h->chunk_size) {
    puVar6 = (ulong *)h->chunk_size;
  }
  if (puVar6 <= puVar7) {
    puVar6 = puVar7;
  }
  puVar7 = puVar6;
  if ((!CARRY8(length,__n)) && (puVar4 = (ulong *)(ulong)bVar9, puVar4 == (ulong *)0x0)) {
    if ((h->field_0x50 & 1) == 0) {
      puVar4 = puVar6;
      p_Var3 = (_obstack_chunk *)(*(h->chunkfun).plain)((size_t)puVar6);
    }
    else {
      puVar4 = (ulong *)h->extra_arg;
      p_Var3 = (_obstack_chunk *)(*(h->chunkfun).plain)((size_t)puVar4);
    }
    if (p_Var3 != (_obstack_chunk *)0x0) {
      pcVar8 = (char *)((long)&p_Var3->limit + (long)puVar6);
      h->chunk = p_Var3;
      p_Var3->prev = p_Var2;
      __src = h->object_base;
      h->chunk_limit = pcVar8;
      p_Var3->limit = pcVar8;
      pcVar8 = (char *)((long)&p_Var3[1].limit + (-(long)(p_Var3 + 1) & h->alignment_mask));
      memcpy(pcVar8,__src,__n);
      bVar1 = h->field_0x50;
      if (((bVar1 & 2) == 0) &&
         (h->object_base ==
          (char *)((long)&p_Var2[1].limit + (-(long)(p_Var2 + 1) & h->alignment_mask)))) {
        p_Var3->prev = p_Var2->prev;
        if ((bVar1 & 1) == 0) {
          (*(h->freefun).plain)(p_Var2);
        }
        else {
          (*(h->freefun).plain)(h->extra_arg);
        }
      }
      h->object_base = pcVar8;
      h->field_0x50 = h->field_0x50 & 0xfd;
      h->next_free = pcVar8 + __n;
      return;
    }
  }
  (*obstack_alloc_failed_handler)();
  puVar4 = (ulong *)puVar4[1];
  if (puVar4 == (ulong *)0x0) {
    return;
  }
  while ((puVar7 <= puVar4 || ((ulong *)*puVar4 < puVar7))) {
    puVar4 = (ulong *)puVar4[1];
    if (puVar4 == (ulong *)0x0) {
      return;
    }
  }
  return;
}



/* WARNING: Unknown calling convention */

int rpl_obstack_allocated_p(obstack *h,void *obj)

{
  _obstack_chunk *p_Var1;
  
  p_Var1 = h->chunk;
  if (p_Var1 == (_obstack_chunk *)0x0) {
    return 0;
  }
  while ((obj <= p_Var1 || (p_Var1->limit < obj))) {
    p_Var1 = p_Var1->prev;
    if (p_Var1 == (_obstack_chunk *)0x0) {
      return 0;
    }
  }
  return 1;
}



/* WARNING: Unknown calling convention */

void rpl_obstack_free(obstack *h,void *obj)

{
  _obstack_chunk *p_Var1;
  char *pcVar2;
  _obstack_chunk *p_Var3;
  
  p_Var3 = h->chunk;
  while( true ) {
    if (p_Var3 == (_obstack_chunk *)0x0) {
      if (obj == (void *)0x0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      rpl_obstack_free_cold();
    }
    if ((p_Var3 < obj) && (obj <= p_Var3->limit)) break;
    p_Var1 = p_Var3->prev;
    if ((h->field_0x50 & 1) == 0) {
      (*(h->freefun).plain)(p_Var3);
      h->field_0x50 = h->field_0x50 | 2;
      p_Var3 = p_Var1;
    }
    else {
      (*(h->freefun).plain)(h->extra_arg);
      h->field_0x50 = h->field_0x50 | 2;
      p_Var3 = p_Var1;
    }
  }
  pcVar2 = p_Var3->limit;
  h->next_free = (char *)obj;
  h->object_base = (char *)obj;
  h->chunk_limit = pcVar2;
  h->chunk = p_Var3;
  return;
}



/* WARNING: Unknown calling convention */

size_t rpl_obstack_memory_used(obstack *h)

{
  _obstack_chunk *p_Var1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  for (p_Var1 = h->chunk; p_Var1 != (_obstack_chunk *)0x0; p_Var1 = p_Var1->prev) {
    pcVar2 = p_Var1->limit + ((long)pcVar2 - (long)p_Var1);
  }
  return (size_t)pcVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rpl_obstack_free_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


