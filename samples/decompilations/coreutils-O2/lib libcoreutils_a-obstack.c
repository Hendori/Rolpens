
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_and_abort(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext("gnulib","memory exhausted",5);
  __fprintf_chk(_stderr,2,&_LC2,uVar1);
                    /* WARNING: Subroutine does not return */
  exit(_exit_failure);
}



void rpl_obstack_begin(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  _obstack_begin_worker();
  return;
}



void rpl_obstack_begin_1(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_6;
  _obstack_begin_worker();
  return;
}



ulong * rpl_obstack_newchunk(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong __n;
  void *__dest;
  bool bVar7;
  
  __n = param_1[3] - param_1[2];
  uVar5 = param_2 + __n;
  uVar1 = param_1[1];
  bVar7 = CARRY8(uVar5,param_1[6]);
  puVar6 = (ulong *)(uVar5 + param_1[6]);
  puVar4 = (ulong *)CONCAT71((int7)((ulong)param_1 >> 8),bVar7);
  puVar3 = (ulong *)((long)puVar6 + (__n >> 3) + 100);
  if (puVar6 < (ulong *)*param_1) {
    puVar6 = (ulong *)*param_1;
  }
  if (puVar6 <= puVar3) {
    puVar6 = puVar3;
  }
  puVar3 = puVar6;
  if ((!CARRY8(param_2,__n)) && (puVar4 = (ulong *)(ulong)bVar7, puVar4 == (ulong *)0x0)) {
    if ((param_1[10] & 1) == 0) {
      puVar4 = puVar6;
      puVar2 = (ulong *)(*(code *)param_1[7])();
    }
    else {
      puVar4 = (ulong *)param_1[9];
      puVar2 = (ulong *)(*(code *)param_1[7])();
    }
    if (puVar2 != (ulong *)0x0) {
      param_1[1] = (ulong)puVar2;
      puVar2[1] = uVar1;
      __src = (void *)param_1[2];
      param_1[4] = (long)puVar2 + (long)puVar6;
      *puVar2 = (long)puVar2 + (long)puVar6;
      __dest = (void *)((long)(puVar2 + 2) + (-(long)(puVar2 + 2) & param_1[6]));
      puVar3 = (ulong *)memcpy(__dest,__src,__n);
      uVar5 = param_1[10];
      if ((uVar5 & 2) == 0) {
        puVar3 = (ulong *)(uVar1 + 0x10 + (-(uVar1 + 0x10) & param_1[6]));
        if ((ulong *)param_1[2] == puVar3) {
          puVar2[1] = *(ulong *)(uVar1 + 8);
          if ((uVar5 & 1) == 0) {
            puVar3 = (ulong *)(*(code *)param_1[8])(uVar1);
          }
          else {
            puVar3 = (ulong *)(*(code *)param_1[8])(param_1[9],uVar1);
          }
        }
      }
      param_1[2] = (ulong)__dest;
      *(byte *)(param_1 + 10) = (byte)param_1[10] & 0xfd;
      param_1[3] = (long)__dest + __n;
      return puVar3;
    }
  }
  (*(code *)obstack_alloc_failed_handler)();
  puVar4 = (ulong *)puVar4[1];
  if (puVar4 == (ulong *)0x0) {
    return puVar4;
  }
  while ((puVar3 <= puVar4 || ((ulong *)*puVar4 < puVar3))) {
    puVar4 = (ulong *)puVar4[1];
    if (puVar4 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x1;
}



ulong * rpl_obstack_allocated_p(long param_1,ulong *param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 8);
  if (puVar1 == (ulong *)0x0) {
    return puVar1;
  }
  while ((param_2 <= puVar1 || ((ulong *)*puVar1 < param_2))) {
    puVar1 = (ulong *)puVar1[1];
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x1;
}



void rpl_obstack_free(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  
  puVar3 = *(ulong **)(param_1 + 8);
  while( true ) {
    if (puVar3 == (ulong *)0x0) {
      if (param_2 == (ulong *)0x0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      rpl_obstack_free_cold();
    }
    if ((puVar3 < param_2) && (param_2 <= (ulong *)*puVar3)) break;
    puVar1 = (ulong *)puVar3[1];
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      (**(code **)(param_1 + 0x40))(puVar3);
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
      puVar3 = puVar1;
    }
    else {
      (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48));
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
      puVar3 = puVar1;
    }
  }
  uVar2 = *puVar3;
  *(ulong **)(param_1 + 0x18) = param_2;
  *(ulong **)(param_1 + 0x10) = param_2;
  *(ulong *)(param_1 + 0x20) = uVar2;
  *(ulong **)(param_1 + 8) = puVar3;
  return;
}



long rpl_obstack_memory_used(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  for (plVar1 = *(long **)(param_1 + 8); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + (*plVar1 - (long)plVar1);
  }
  return lVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rpl_obstack_free_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


