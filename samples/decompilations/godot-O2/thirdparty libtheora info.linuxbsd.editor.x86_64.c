
bool oc_tagcompare(char *param_1,long param_2,int param_3)

{
  __int32_t **pp_Var1;
  long lVar2;
  bool bVar3;
  
  if (0 < param_3) {
    pp_Var1 = __ctype_toupper_loc();
    lVar2 = 1;
    do {
      if ((*pp_Var1)[*(char *)(param_2 + -1 + lVar2)] != (*pp_Var1)[param_1[lVar2 + -1]]) {
        return true;
      }
      bVar3 = param_3 != lVar2;
      lVar2 = lVar2 + 1;
    } while (bVar3);
    param_1 = param_1 + param_3;
  }
  return *param_1 != '=';
}



void th_info_init(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 (*) [16])((long)param_1 + 0x23) = (undefined1  [16])0x0;
  *param_1 = 0x203;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 3) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x1e) = 6;
  *(undefined1 (*) [16])((long)param_1 + 0x13) = (undefined1  [16])0x0;
  return;
}



void th_info_clear(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  return;
}



void th_comment_init(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  return;
}



void th_comment_add(long *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  
  pvVar3 = realloc((void *)*param_1,(long)((int)param_1[2] + 2) << 3);
  if (pvVar3 != (void *)0x0) {
    *param_1 = (long)pvVar3;
    pvVar4 = realloc((void *)param_1[1],(long)((int)param_1[2] + 2) << 2);
    if (pvVar4 != (void *)0x0) {
      param_1[1] = (long)pvVar4;
      sVar5 = strlen(param_2);
      *(int *)((long)pvVar4 + (long)(int)param_1[2] * 4) = (int)sVar5;
      lVar1 = param_1[2];
      sVar5 = (size_t)((int)sVar5 + 1);
      pvVar4 = malloc(sVar5);
      *(void **)((long)pvVar3 + (long)(int)lVar1 * 8) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        memcpy(*(void **)(*param_1 + (long)(int)lVar1 * 8),param_2,sVar5);
        iVar2 = (int)param_1[2] + 1;
        *(int *)(param_1 + 2) = iVar2;
        *(undefined8 *)(*param_1 + (long)iVar2 * 8) = 0;
      }
    }
  }
  return;
}



void th_comment_add_tag(undefined8 param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  void *__ptr;
  long lVar4;
  size_t __size;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen(param_3);
  __size = (size_t)((int)sVar3 + 2 + (int)sVar2);
  __ptr = malloc(__size);
  if (__ptr != (void *)0x0) {
    lVar4 = (long)(int)sVar2;
    __memcpy_chk(__ptr,param_2,lVar4,__size);
    uVar1 = lVar4 + 1;
    *(undefined1 *)((long)__ptr + lVar4) = 0x3d;
    if (__size < uVar1) {
      __size = uVar1;
    }
    __memcpy_chk(uVar1 + (long)__ptr,param_3,(long)((int)sVar3 + 1),__size - uVar1);
    th_comment_add(param_1,__ptr);
    free(__ptr);
    return;
  }
  return;
}



long th_comment_query(long *param_1,char *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  
  sVar5 = strlen(param_2);
  lVar3 = param_1[2];
  if (0 < (int)lVar3) {
    lVar1 = *param_1;
    iVar6 = 0;
    lVar7 = 0;
    do {
      lVar2 = *(long *)(lVar1 + lVar7 * 8);
      iVar4 = oc_tagcompare(lVar2,param_2,(int)sVar5);
      if ((iVar4 == 0) && (bVar8 = param_3 == iVar6, iVar6 = iVar6 + 1, bVar8)) {
        return lVar2 + 1 + (long)(int)sVar5;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != (int)lVar3);
  }
  return 0;
}



int th_comment_query_count(long *param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  int iVar5;
  
  sVar3 = strlen(param_2);
  if (0 < (int)param_1[2]) {
    puVar4 = (undefined8 *)*param_1;
    iVar5 = 0;
    puVar1 = puVar4 + (int)param_1[2];
    do {
      iVar2 = oc_tagcompare(*puVar4,param_2,sVar3 & 0xffffffff);
      iVar5 = iVar5 + (uint)(iVar2 == 0);
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
    return iVar5;
  }
  return 0;
}



void th_comment_clear(undefined1 (*param_1) [16])

{
  long lVar1;
  long lVar2;
  
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (0 < *(int *)param_1[1]) {
      lVar2 = 0;
      do {
        lVar1 = lVar2 * 8;
        lVar2 = lVar2 + 1;
        free(*(void **)(*(long *)*param_1 + lVar1));
      } while (lVar2 < *(int *)param_1[1]);
    }
    free(*(void **)*param_1);
    free(*(void **)(*param_1 + 8));
    free(*(void **)(param_1[1] + 8));
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    return;
  }
  return;
}


