
/* mpoolReqOutline(SwMpool*, unsigned int) */

long mpoolReqOutline(SwMpool *param_1,uint param_2)

{
  return *(long *)param_1 + (ulong)param_2 * 0x48;
}



/* mpoolRetOutline(SwMpool*, unsigned int) */

void mpoolRetOutline(SwMpool *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)param_1 + (ulong)param_2 * 0x48;
  *(undefined4 *)(lVar1 + 8) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return;
}



/* mpoolReqStrokeOutline(SwMpool*, unsigned int) */

long mpoolReqStrokeOutline(SwMpool *param_1,uint param_2)

{
  return *(long *)(param_1 + 8) + (ulong)param_2 * 0x48;
}



/* mpoolRetStrokeOutline(SwMpool*, unsigned int) */

void mpoolRetStrokeOutline(SwMpool *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + (ulong)param_2 * 0x48;
  *(undefined4 *)(lVar1 + 8) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return;
}



/* mpoolReqDashOutline(SwMpool*, unsigned int) */

long mpoolReqDashOutline(SwMpool *param_1,uint param_2)

{
  return *(long *)(param_1 + 0x10) + (ulong)param_2 * 0x48;
}



/* mpoolRetDashOutline(SwMpool*, unsigned int) */

void mpoolRetDashOutline(SwMpool *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + (ulong)param_2 * 0x48;
  *(undefined4 *)(lVar1 + 8) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return;
}



/* mpoolInit(unsigned int) */

undefined8 * mpoolInit(uint param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t __size;
  
  puVar1 = (undefined8 *)calloc(1,0x20);
  __size = (ulong)(param_1 + 1) * 0x48;
  pvVar2 = calloc(1,__size);
  *puVar1 = pvVar2;
  pvVar2 = calloc(1,__size);
  puVar1[1] = pvVar2;
  pvVar2 = calloc(1,__size);
  *(uint *)(puVar1 + 3) = param_1 + 1;
  puVar1[2] = pvVar2;
  return puVar1;
}



/* mpoolClear(SwMpool*) */

undefined8 mpoolClear(SwMpool *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      lVar1 = lVar1 * 0x48;
      puVar3 = (undefined8 *)(*(long *)param_1 + lVar1);
      free((void *)*puVar3);
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar4 = *(long *)param_1 + lVar1;
      free(*(void **)(lVar4 + 0x10));
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      lVar4 = *(long *)param_1 + lVar1;
      free(*(void **)(lVar4 + 0x20));
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      lVar4 = *(long *)param_1 + lVar1;
      free(*(void **)(lVar4 + 0x30));
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + lVar1);
      free((void *)*puVar3);
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar4 = *(long *)(param_1 + 8) + lVar1;
      free(*(void **)(lVar4 + 0x10));
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      lVar4 = *(long *)(param_1 + 8) + lVar1;
      free(*(void **)(lVar4 + 0x20));
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      lVar4 = *(long *)(param_1 + 8) + lVar1;
      free(*(void **)(lVar4 + 0x30));
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar1);
      free((void *)*puVar3);
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar4 = *(long *)(param_1 + 0x10) + lVar1;
      free(*(void **)(lVar4 + 0x10));
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      lVar4 = *(long *)(param_1 + 0x10) + lVar1;
      free(*(void **)(lVar4 + 0x20));
      lVar1 = lVar1 + *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      free(*(void **)(lVar1 + 0x30));
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      lVar1 = lVar2;
    } while ((uint)lVar2 < *(uint *)(param_1 + 0x18));
    return 1;
  }
  return 1;
}



/* mpoolTerm(SwMpool*) */

undefined8 mpoolTerm(SwMpool *param_1)

{
  if (param_1 != (SwMpool *)0x0) {
    mpoolClear(param_1);
    free(*(void **)param_1);
    free(*(void **)(param_1 + 8));
    free(*(void **)(param_1 + 0x10));
    free(param_1);
    return 1;
  }
  return 0;
}


