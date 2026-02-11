
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void randread_error(void)

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



long * randread_new(long param_1,ulong param_2)

{
  int iVar1;
  FILE *__stream;
  long *plVar2;
  size_t __n;
  long *__ptr;
  long lVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    plVar2 = (long *)xmalloc(0x1038);
    *plVar2 = 0;
    plVar2[1] = 0x100000;
    plVar2[2] = 0;
    return plVar2;
  }
  if (param_1 == 0) {
    __ptr = (long *)xmalloc(0x1038);
    *__ptr = 0;
    __ptr[1] = 0x100000;
    __ptr[2] = 0;
    __ptr[3] = 0;
    plVar2 = __ptr + 4;
    do {
      while( true ) {
        if (__ptr + 0x104 <= plVar2) {
          isaac_seed(__ptr + 4);
          return __ptr;
        }
        lVar3 = getrandom(plVar2,(long)(__ptr + 0x104) - (long)plVar2,0);
        if (lVar3 < 0) break;
        plVar2 = (long *)((long)plVar2 + lVar3);
      }
      piVar4 = __errno_location();
    } while (*piVar4 == 4);
    piVar4 = __errno_location();
    lVar3 = *__ptr;
    iVar1 = *piVar4;
    __explicit_bzero_chk(__ptr,0x1038,0x1038);
    free(__ptr);
    if (lVar3 != 0) {
      rpl_fclose(lVar3);
    }
    *piVar4 = iVar1;
  }
  else {
    __stream = (FILE *)fopen_safer(param_1,&_LC4);
    if (__stream != (FILE *)0x0) {
      plVar2 = (long *)xmalloc(0x1038);
      *plVar2 = (long)__stream;
      plVar2[1] = 0x100000;
      plVar2[2] = param_1;
      __n = 0x1000;
      if (param_2 < 0x1001) {
        __n = param_2;
      }
      setvbuf(__stream,(char *)(plVar2 + 3),0,__n);
      return plVar2;
    }
  }
  return (long *)0x0;
}



void randread_set_handler(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



void randread_set_handler_arg(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



void randread(long *param_1,void *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  size_t sVar5;
  uint *puVar6;
  FILE *__stream;
  ulong uVar7;
  void *pvVar8;
  ulong __n;
  ulong local_40;
  
  __stream = (FILE *)*param_1;
  if (__stream != (FILE *)0x0) {
    while( true ) {
      sVar5 = fread_unlocked(param_2,1,param_3,__stream);
      puVar6 = (uint *)__errno_location();
      param_2 = (void *)((long)param_2 + sVar5);
      param_3 = param_3 - sVar5;
      if (param_3 == 0) break;
      lVar3 = param_1[2];
      uVar4 = *(uint *)*param_1 & 0x20;
      if ((*(uint *)*param_1 & 0x20) != 0) {
        uVar4 = *puVar6;
      }
      *puVar6 = uVar4;
      (*(code *)param_1[1])(lVar3);
      __stream = (FILE *)*param_1;
    }
    return;
  }
  __n = param_1[3];
  plVar1 = param_1 + 4;
  plVar2 = param_1 + 0x107;
  uVar7 = param_3;
  if (__n < param_3) {
    do {
      pvVar8 = (void *)((long)param_2 + __n);
      uVar7 = uVar7 - __n;
      memcpy(param_2,(void *)((0x800 - __n) + (long)plVar2),__n);
      local_40 = (ulong)((uint)pvVar8 & 7);
      param_3 = uVar7;
      if (((ulong)pvVar8 & 7) == 0) {
        while (param_2 = (void *)((long)pvVar8 + (uVar7 - param_3)),
              ((uint)uVar7 & 0x7ff) != param_3) {
          isaac_refill(plVar1,param_2);
          param_3 = param_3 - 0x800;
          if (param_3 == 0) {
            param_1[3] = 0;
            return;
          }
        }
        __n = 0x800;
        isaac_refill(plVar1,plVar2);
        goto LAB_00100399;
      }
      __n = 0x800;
      isaac_refill(plVar1,plVar2);
      param_2 = pvVar8;
    } while (0x800 < uVar7);
    local_40 = 0;
  }
  else {
    local_40 = 0x800 - __n;
  }
LAB_00100399:
  memcpy(param_2,(void *)((long)plVar2 + local_40),param_3);
  param_1[3] = __n - param_3;
  return;
}



undefined8 randread_free(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  __explicit_bzero_chk(param_1,0x1038,0xffffffffffffffff);
  free(param_1);
  if (lVar1 != 0) {
    uVar2 = rpl_fclose(lVar1);
    return uVar2;
  }
  return 0;
}


