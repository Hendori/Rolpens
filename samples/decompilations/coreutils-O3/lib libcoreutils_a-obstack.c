
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_and_abort(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext("gnulib","memory exhausted",5);
  __fprintf_chk(_stderr,2,&_LC2,uVar1);
                    /* WARNING: Subroutine does not return */
  exit(_exit_failure);
}



ulong * rpl_obstack_begin(long *param_1,long *param_2,long param_3,code *param_4,long param_5,
                         ulong *param_6)

{
  long lVar1;
  long lVar2;
  void *__src;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long extraout_RDX;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  ulong __n;
  void *__dest;
  bool bVar11;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  uVar7 = param_3 - 1;
  if (param_3 == 0) {
    uVar7 = 0xf;
  }
  param_1[7] = (long)param_4;
  plVar10 = param_2;
  if (param_2 == (long *)0x0) {
    plVar10 = (long *)0xfe0;
  }
  param_1[8] = param_5;
  param_1[6] = uVar7;
  *param_1 = (long)plVar10;
  plVar3 = (long *)(*param_4)();
  param_1[1] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    lVar1 = (long)(plVar3 + 2) + (-(long)(plVar3 + 2) & uVar7);
    lVar2 = *param_1;
    param_1[2] = lVar1;
    param_1[3] = lVar1;
    *plVar3 = lVar2 + (long)plVar3;
    param_1[4] = lVar2 + (long)plVar3;
    plVar3[1] = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf9;
    return (ulong *)0x1;
  }
  (*(code *)obstack_alloc_failed_handler)();
  *(byte *)(plVar10 + 10) = *(byte *)(plVar10 + 10) | 1;
  uVar7 = extraout_RDX - 1;
  if (extraout_RDX == 0) {
    uVar7 = 0xf;
  }
  plVar10[7] = (long)param_4;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0xfe0;
  }
  plVar10[8] = param_5;
  plVar10[9] = (long)param_6;
  *plVar10 = (long)param_2;
  plVar10[6] = uVar7;
  plVar3 = (long *)(*param_4)();
  plVar10[1] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    lVar1 = (long)(plVar3 + 2) + (-(long)(plVar3 + 2) & uVar7);
    lVar2 = *plVar10;
    plVar10[2] = lVar1;
    plVar10[3] = lVar1;
    *plVar3 = lVar2 + (long)plVar3;
    plVar10[4] = lVar2 + (long)plVar3;
    plVar3[1] = 0;
    *(byte *)(plVar10 + 10) = *(byte *)(plVar10 + 10) & 0xf9;
    return (ulong *)0x1;
  }
  (*(code *)obstack_alloc_failed_handler)();
  __n = param_6[3] - param_6[2];
  uVar8 = (long)param_2 + __n;
  uVar7 = param_6[1];
  bVar11 = CARRY8(uVar8,param_6[6]);
  puVar9 = (ulong *)(uVar8 + param_6[6]);
  puVar6 = (ulong *)CONCAT71((int7)((ulong)param_6 >> 8),bVar11);
  puVar5 = (ulong *)((long)puVar9 + (__n >> 3) + 100);
  if (puVar9 < (ulong *)*param_6) {
    puVar9 = (ulong *)*param_6;
  }
  if (puVar9 <= puVar5) {
    puVar9 = puVar5;
  }
  puVar5 = puVar9;
  if ((!CARRY8((ulong)param_2,__n)) && (puVar6 = (ulong *)(ulong)bVar11, puVar6 == (ulong *)0x0)) {
    if ((param_6[10] & 1) == 0) {
      puVar6 = puVar9;
      puVar4 = (ulong *)(*(code *)param_6[7])();
    }
    else {
      puVar6 = (ulong *)param_6[9];
      puVar4 = (ulong *)(*(code *)param_6[7])();
    }
    if (puVar4 != (ulong *)0x0) {
      param_6[1] = (ulong)puVar4;
      puVar4[1] = uVar7;
      __src = (void *)param_6[2];
      param_6[4] = (long)puVar4 + (long)puVar9;
      *puVar4 = (long)puVar4 + (long)puVar9;
      __dest = (void *)((long)(puVar4 + 2) + (-(long)(puVar4 + 2) & param_6[6]));
      puVar5 = (ulong *)memcpy(__dest,__src,__n);
      uVar8 = param_6[10];
      if ((uVar8 & 2) == 0) {
        puVar5 = (ulong *)(uVar7 + 0x10 + (-(uVar7 + 0x10) & param_6[6]));
        if ((ulong *)param_6[2] == puVar5) {
          puVar4[1] = *(ulong *)(uVar7 + 8);
          if ((uVar8 & 1) == 0) {
            puVar5 = (ulong *)(*(code *)param_6[8])(uVar7);
          }
          else {
            puVar5 = (ulong *)(*(code *)param_6[8])(param_6[9],uVar7);
          }
        }
      }
      param_6[2] = (ulong)__dest;
      *(byte *)(param_6 + 10) = (byte)param_6[10] & 0xfd;
      param_6[3] = (long)__dest + __n;
      return puVar5;
    }
  }
  (*(code *)obstack_alloc_failed_handler)();
  puVar6 = (ulong *)puVar6[1];
  if (puVar6 == (ulong *)0x0) {
    return puVar6;
  }
  while ((puVar5 <= puVar6 || ((ulong *)*puVar6 < puVar5))) {
    puVar6 = (ulong *)puVar6[1];
    if (puVar6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x1;
}



ulong * rpl_obstack_begin_1(ulong *param_1,ulong param_2,long param_3,code *param_4,ulong param_5,
                           ulong *param_6)

{
  void *__src;
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong __n;
  void *__dest;
  bool bVar7;
  
  *(byte *)(param_1 + 10) = (byte)param_1[10] | 1;
  uVar4 = param_3 - 1;
  if (param_3 == 0) {
    uVar4 = 0xf;
  }
  param_1[7] = (ulong)param_4;
  if (param_2 == 0) {
    param_2 = 0xfe0;
  }
  param_1[8] = param_5;
  param_1[9] = (ulong)param_6;
  *param_1 = param_2;
  param_1[6] = uVar4;
  puVar1 = (ulong *)(*param_4)();
  param_1[1] = (ulong)puVar1;
  if (puVar1 != (ulong *)0x0) {
    uVar4 = (long)(puVar1 + 2) + (-(long)(puVar1 + 2) & uVar4);
    uVar5 = *param_1;
    param_1[2] = uVar4;
    param_1[3] = uVar4;
    *puVar1 = uVar5 + (long)puVar1;
    param_1[4] = uVar5 + (long)puVar1;
    puVar1[1] = 0;
    *(byte *)(param_1 + 10) = (byte)param_1[10] & 0xf9;
    return (ulong *)0x1;
  }
  (*(code *)obstack_alloc_failed_handler)();
  __n = param_6[3] - param_6[2];
  uVar5 = param_2 + __n;
  uVar4 = param_6[1];
  bVar7 = CARRY8(uVar5,param_6[6]);
  puVar6 = (ulong *)(uVar5 + param_6[6]);
  puVar3 = (ulong *)CONCAT71((int7)((ulong)param_6 >> 8),bVar7);
  puVar1 = (ulong *)((long)puVar6 + (__n >> 3) + 100);
  if (puVar6 < (ulong *)*param_6) {
    puVar6 = (ulong *)*param_6;
  }
  if (puVar6 <= puVar1) {
    puVar6 = puVar1;
  }
  puVar1 = puVar6;
  if ((!CARRY8(param_2,__n)) && (puVar3 = (ulong *)(ulong)bVar7, puVar3 == (ulong *)0x0)) {
    if ((param_6[10] & 1) == 0) {
      puVar3 = puVar6;
      puVar2 = (ulong *)(*(code *)param_6[7])();
    }
    else {
      puVar3 = (ulong *)param_6[9];
      puVar2 = (ulong *)(*(code *)param_6[7])();
    }
    if (puVar2 != (ulong *)0x0) {
      param_6[1] = (ulong)puVar2;
      puVar2[1] = uVar4;
      __src = (void *)param_6[2];
      param_6[4] = (long)puVar2 + (long)puVar6;
      *puVar2 = (long)puVar2 + (long)puVar6;
      __dest = (void *)((long)(puVar2 + 2) + (-(long)(puVar2 + 2) & param_6[6]));
      puVar1 = (ulong *)memcpy(__dest,__src,__n);
      uVar5 = param_6[10];
      if ((uVar5 & 2) == 0) {
        puVar1 = (ulong *)(uVar4 + 0x10 + (-(uVar4 + 0x10) & param_6[6]));
        if ((ulong *)param_6[2] == puVar1) {
          puVar2[1] = *(ulong *)(uVar4 + 8);
          if ((uVar5 & 1) == 0) {
            puVar1 = (ulong *)(*(code *)param_6[8])(uVar4);
          }
          else {
            puVar1 = (ulong *)(*(code *)param_6[8])(param_6[9],uVar4);
          }
        }
      }
      param_6[2] = (ulong)__dest;
      *(byte *)(param_6 + 10) = (byte)param_6[10] & 0xfd;
      param_6[3] = (long)__dest + __n;
      return puVar1;
    }
  }
  (*(code *)obstack_alloc_failed_handler)();
  puVar3 = (ulong *)puVar3[1];
  if (puVar3 == (ulong *)0x0) {
    return puVar3;
  }
  while ((puVar1 <= puVar3 || ((ulong *)*puVar3 < puVar1))) {
    puVar3 = (ulong *)puVar3[1];
    if (puVar3 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x1;
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


