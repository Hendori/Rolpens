
void oggpack_write(undefined1 (*param_1) [16],ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  byte *pbVar4;
  
  if (param_3 < 0x21) {
    lVar1 = *(long *)param_1[2];
    pbVar4 = *(byte **)(param_1[1] + 8);
    if (*(long *)*param_1 < lVar1 + -4) {
LAB_00100090:
      param_2 = *(ulong *)(mask + (long)(int)param_3 * 8) & param_2;
      param_3 = *(int *)(*param_1 + 8) + param_3;
      *pbVar4 = *pbVar4 | (byte)(param_2 << ((byte)*(int *)(*param_1 + 8) & 0x3f));
      if ((((7 < (int)param_3) &&
           (*(char *)(*(long *)(param_1[1] + 8) + 1) =
                 (char)(param_2 >> (8U - (char)*(undefined4 *)(*param_1 + 8) & 0x3f)),
           0xf < (int)param_3)) &&
          (*(char *)(*(long *)(param_1[1] + 8) + 2) =
                (char)(param_2 >> (0x10U - (char)*(undefined4 *)(*param_1 + 8) & 0x3f)),
          0x17 < (int)param_3)) &&
         (*(char *)(*(long *)(param_1[1] + 8) + 3) =
               (char)(param_2 >> (0x18U - (char)*(undefined4 *)(*param_1 + 8) & 0x3f)),
         0x1f < (int)param_3)) {
        if (*(int *)(*param_1 + 8) == 0) {
          *(undefined1 *)(*(long *)(param_1[1] + 8) + 4) = 0;
        }
        else {
          *(char *)(*(long *)(param_1[1] + 8) + 4) =
               (char)(param_2 >> (0x20U - (char)*(int *)(*param_1 + 8) & 0x3f));
        }
      }
      uVar2 = param_3 + 7;
      if (-1 < (int)param_3) {
        uVar2 = param_3;
      }
      *(uint *)(*param_1 + 8) = param_3 & 7;
      *(long *)*param_1 = *(long *)*param_1 + (long)((int)uVar2 >> 3);
      *(long *)(param_1[1] + 8) = *(long *)(param_1[1] + 8) + (long)((int)uVar2 >> 3);
      return;
    }
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    pvVar3 = *(void **)param_1[1];
    if (0x7ffffffffffffeff < lVar1) goto LAB_00100042;
    pvVar3 = realloc(pvVar3,lVar1 + 0x100);
    if (pvVar3 != (void *)0x0) {
      *(void **)param_1[1] = pvVar3;
      pbVar4 = (byte *)((long)pvVar3 + *(long *)*param_1);
      *(long *)param_1[2] = *(long *)param_1[2] + 0x100;
      *(byte **)(param_1[1] + 8) = pbVar4;
      goto LAB_00100090;
    }
  }
  pvVar3 = *(void **)param_1[1];
LAB_00100042:
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  *(undefined8 *)param_1[2] = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  return;
}



void oggpackB_write(undefined1 (*param_1) [16],ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  byte *pbVar4;
  ulong uVar5;
  
  if (param_3 < 0x21) {
    lVar1 = *(long *)param_1[2];
    pbVar4 = *(byte **)(param_1[1] + 8);
    if (*(long *)*param_1 < lVar1 + -4) {
LAB_001001f0:
      uVar5 = (param_2 & *(ulong *)(mask + (long)(int)param_3 * 8)) <<
              (0x20U - (char)param_3 & 0x3f);
      param_3 = param_3 + *(int *)(*param_1 + 8);
      *pbVar4 = *pbVar4 | (byte)(uVar5 >> ((char)*(int *)(*param_1 + 8) + 0x18U & 0x3f));
      if ((((7 < (int)param_3) &&
           (*(char *)(*(long *)(param_1[1] + 8) + 1) =
                 (char)(uVar5 >> ((char)*(undefined4 *)(*param_1 + 8) + 0x10U & 0x3f)),
           0xf < (int)param_3)) &&
          (*(char *)(*(long *)(param_1[1] + 8) + 2) =
                (char)(uVar5 >> ((char)*(undefined4 *)(*param_1 + 8) + 8U & 0x3f)),
          0x17 < (int)param_3)) &&
         (*(char *)(*(long *)(param_1[1] + 8) + 3) =
               (char)(uVar5 >> ((byte)*(undefined4 *)(*param_1 + 8) & 0x3f)), 0x1f < (int)param_3))
      {
        if (*(int *)(*param_1 + 8) == 0) {
          *(undefined1 *)(*(long *)(param_1[1] + 8) + 4) = 0;
        }
        else {
          *(char *)(*(long *)(param_1[1] + 8) + 4) =
               (char)(uVar5 << (8U - (char)*(int *)(*param_1 + 8) & 0x3f));
        }
      }
      uVar2 = param_3 + 7;
      if (-1 < (int)param_3) {
        uVar2 = param_3;
      }
      *(uint *)(*param_1 + 8) = param_3 & 7;
      *(long *)*param_1 = *(long *)*param_1 + (long)((int)uVar2 >> 3);
      *(long *)(param_1[1] + 8) = *(long *)(param_1[1] + 8) + (long)((int)uVar2 >> 3);
      return;
    }
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    pvVar3 = *(void **)param_1[1];
    if (0x7ffffffffffffeff < lVar1) goto LAB_001001a2;
    pvVar3 = realloc(pvVar3,lVar1 + 0x100);
    if (pvVar3 != (void *)0x0) {
      *(void **)param_1[1] = pvVar3;
      pbVar4 = (byte *)((long)pvVar3 + *(long *)*param_1);
      *(long *)param_1[2] = *(long *)param_1[2] + 0x100;
      *(byte **)(param_1[1] + 8) = pbVar4;
      goto LAB_001001f0;
    }
  }
  pvVar3 = *(void **)param_1[1];
LAB_001001a2:
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  *(undefined8 *)param_1[2] = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  return;
}



void oggpack_writecopy_helper
               (undefined1 (*param_1) [16],void *param_2,ulong param_3,code *UNRECOVERED_JUMPTABLE,
               int param_5)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  size_t __size;
  ulong uVar6;
  size_t __n;
  
  iVar4 = *(int *)(*param_1 + 8);
  uVar6 = param_3 + 7;
  if (-1 < (long)param_3) {
    uVar6 = param_3;
  }
  __n = (long)uVar6 >> 3;
  lVar1 = (long)iVar4 + param_3;
  lVar5 = lVar1 + 7;
  if (-1 < lVar1) {
    lVar5 = lVar1;
  }
  lVar5 = (lVar5 >> 3) + *(long *)*param_1;
  if (lVar5 < *(long *)param_1[2]) {
LAB_00100344:
    if (iVar4 == 0) {
      memmove(*(void **)(param_1[1] + 8),param_2,__n);
      lVar5 = *(long *)(param_1[1] + 8);
      *(size_t *)*param_1 = *(long *)*param_1 + __n;
      puVar3 = (undefined1 *)(lVar5 + __n);
      *(undefined1 **)(param_1[1] + 8) = puVar3;
      *puVar3 = 0;
    }
    else {
      lVar5 = 0;
      if (7 < (long)param_3) {
        do {
          puVar3 = (undefined1 *)((long)param_2 + lVar5);
          lVar5 = lVar5 + 1;
          (*UNRECOVERED_JUMPTABLE)(param_1,*puVar3,8);
        } while (lVar5 < (long)__n);
      }
    }
    if ((param_3 & 7) != 0) {
      uVar6 = (ulong)*(byte *)((long)param_2 + __n);
      if (param_5 != 0) {
        uVar6 = (ulong)((int)(uint)*(byte *)((long)param_2 + __n) >>
                       (8U - (char)((long)param_3 % 8) & 0x1f));
      }
                    /* WARNING: Could not recover jumptable at 0x001003bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar6,(long)param_3 % 8 & 0xffffffff);
      return;
    }
  }
  else {
    pvVar2 = *(void **)param_1[1];
    if (*(long *)(param_1[1] + 8) != 0) {
      __size = lVar5 + 0x100;
      *(size_t *)param_1[2] = __size;
      pvVar2 = realloc(pvVar2,__size);
      if (pvVar2 != (void *)0x0) {
        *(void **)param_1[1] = pvVar2;
        *(long *)(param_1[1] + 8) = (long)pvVar2 + *(long *)*param_1;
        iVar4 = *(int *)(*param_1 + 8);
        goto LAB_00100344;
      }
      pvVar2 = *(void **)param_1[1];
    }
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
    }
    *(undefined8 *)param_1[2] = 0;
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
  }
  return;
}



void oggpack_writeinit(undefined1 (*param_1) [16])

{
  undefined1 *puVar1;
  
  *(undefined8 *)param_1[2] = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  puVar1 = (undefined1 *)malloc(0x100);
  *(undefined8 *)param_1[2] = 0x100;
  *puVar1 = 0;
  *(undefined1 **)param_1[1] = puVar1;
  *(undefined1 **)(param_1[1] + 8) = puVar1;
  return;
}



void oggpackB_writeinit(undefined1 (*param_1) [16])

{
  undefined1 *puVar1;
  
  *(undefined8 *)param_1[2] = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  puVar1 = (undefined1 *)malloc(0x100);
  *(undefined8 *)param_1[2] = 0x100;
  *puVar1 = 0;
  *(undefined1 **)param_1[1] = puVar1;
  *(undefined1 **)(param_1[1] + 8) = puVar1;
  return;
}



int oggpack_writecheck(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return -(uint)(*(long *)(param_1 + 0x20) == 0);
  }
  return -1;
}



int oggpackB_writecheck(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return -(uint)(*(long *)(param_1 + 0x20) == 0);
  }
  return -1;
}



void oggpack_writetrunc(long *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_1[3] != 0) {
    uVar2 = (uint)param_2 & 7;
    *(uint *)(param_1 + 1) = uVar2;
    pbVar1 = (byte *)(param_1[2] + (param_2 >> 3));
    *param_1 = param_2 >> 3;
    param_1[3] = (long)pbVar1;
    *pbVar1 = *pbVar1 & (byte)*(undefined8 *)(mask + (ulong)uVar2 * 8);
  }
  return;
}



void oggpackB_writetrunc(long *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_1[3] != 0) {
    uVar2 = (uint)param_2 & 7;
    *(uint *)(param_1 + 1) = uVar2;
    pbVar1 = (byte *)(param_1[2] + (param_2 >> 3));
    *param_1 = param_2 >> 3;
    param_1[3] = (long)pbVar1;
    *pbVar1 = *pbVar1 & (byte)*(undefined4 *)(mask8B + (ulong)uVar2 * 4);
  }
  return;
}



void oggpack_writealign(long param_1)

{
  if (7 < 8 - *(int *)(param_1 + 8)) {
    return;
  }
  oggpack_write(param_1,0);
  return;
}



void oggpackB_writealign(long param_1)

{
  if (7 < 8 - *(int *)(param_1 + 8)) {
    return;
  }
  oggpackB_write(param_1,0);
  return;
}



void oggpack_writecopy(void)

{
  oggpack_writecopy_helper();
  return;
}



void oggpackB_writecopy(void)

{
  oggpack_writecopy_helper();
  return;
}



void oggpack_reset(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[3] = (undefined1 *)param_1[2];
    *(undefined1 *)param_1[2] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



void oggpackB_reset(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[3] = (undefined1 *)param_1[2];
    *(undefined1 *)param_1[2] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



void oggpack_writeclear(undefined1 (*param_1) [16])

{
  if (*(void **)param_1[1] != (void *)0x0) {
    free(*(void **)param_1[1]);
  }
  *(undefined8 *)param_1[2] = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  return;
}



void oggpackB_writeclear(undefined1 (*param_1) [16])

{
  if (*(void **)param_1[1] != (void *)0x0) {
    free(*(void **)param_1[1]);
  }
  *(undefined8 *)param_1[2] = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  return;
}



void oggpack_readinit(undefined1 (*param_1) [16],undefined8 param_2,int param_3)

{
  *param_1 = (undefined1  [16])0x0;
  *(long *)param_1[2] = (long)param_3;
  *(undefined8 *)param_1[1] = param_2;
  *(undefined8 *)(param_1[1] + 8) = param_2;
  return;
}



void oggpackB_readinit(undefined1 (*param_1) [16],undefined8 param_2,int param_3)

{
  *param_1 = (undefined1  [16])0x0;
  *(long *)param_1[2] = (long)param_3;
  *(undefined8 *)param_1[1] = param_2;
  *(undefined8 *)(param_1[1] + 8) = param_2;
  return;
}



ulong oggpack_look(long *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  
  if (0x20 < param_2) {
    return 0xffffffffffffffff;
  }
  iVar4 = param_2 + (int)param_1[1];
  if (param_1[4] + -4 <= *param_1) {
    if (param_1[4] - (long)(iVar4 + 7 >> 3) < *param_1) {
      return 0xffffffffffffffff;
    }
    if (iVar4 == 0) {
      return 0;
    }
  }
  pbVar1 = (byte *)param_1[3];
  bVar3 = (byte)(int)param_1[1];
  uVar2 = (int)(uint)*pbVar1 >> (bVar3 & 0x1f);
  if (8 < iVar4) {
    uVar2 = (uint)pbVar1[1] << (8 - bVar3 & 0x1f) | uVar2;
    if (iVar4 < 0x11) {
LAB_001007c0:
      return (long)(int)uVar2 & *(ulong *)(mask + (long)(int)param_2 * 8);
    }
    uVar2 = (uint)pbVar1[2] << (0x10 - bVar3 & 0x1f) | uVar2;
    if (0x18 < iVar4) {
      uVar2 = (uint)pbVar1[3] << (0x18 - bVar3 & 0x1f) | uVar2;
      if (iVar4 < 0x21) goto LAB_001007c0;
      uVar2 = (uint)pbVar1[4] << (0x20 - bVar3 & 0x1f) | uVar2;
    }
  }
  return (long)(int)uVar2 & *(ulong *)(mask + (long)(int)param_2 * 8);
}



ulong oggpackB_look(long *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  
  if (0x20 < 0x20U - param_2) {
    return 0xffffffffffffffff;
  }
  iVar1 = (int)param_1[1] + param_2;
  if (param_1[4] + -4 <= *param_1) {
    if (param_1[4] - (long)(iVar1 + 7 >> 3) < *param_1) {
      return 0xffffffffffffffff;
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  pbVar2 = (byte *)param_1[3];
  bVar3 = (byte)(int)param_1[1];
  uVar4 = (uint)*pbVar2 << (bVar3 + 0x18 & 0x1f);
  if ((((8 < iVar1) && (uVar4 = (uint)pbVar2[1] << (bVar3 + 0x10 & 0x1f) | uVar4, 0x10 < iVar1)) &&
      (uVar4 = (uint)pbVar2[2] << (bVar3 + 8 & 0x1f) | uVar4, 0x18 < iVar1)) &&
     (uVar4 = (uint)pbVar2[3] << (bVar3 & 0x1f) | uVar4, 0x20 < iVar1)) {
    uVar4 = (int)(uint)pbVar2[4] >> (8 - bVar3 & 0x1f) | uVar4;
  }
  return (ulong)((uVar4 >> ((byte)((int)(0x20U - param_2) >> 1) & 0x3f)) >>
                ((byte)(0x21 - param_2 >> 1) & 0x3f));
}



ulong oggpack_look1(long *param_1)

{
  if (*param_1 < param_1[4]) {
    return (ulong)((int)(uint)*(byte *)param_1[3] >> ((byte)(int)param_1[1] & 0x1f) & 1);
  }
  return 0xffffffffffffffff;
}



ulong oggpackB_look1(long *param_1)

{
  if (*param_1 < param_1[4]) {
    return (ulong)((int)(uint)*(byte *)param_1[3] >> (7U - (char)(int)param_1[1] & 0x1f) & 1);
  }
  return 0xffffffffffffffff;
}



void oggpack_adv(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 + (int)param_1[1];
  if (*param_1 <= param_1[4] - (long)((int)(uVar2 + 7) >> 3)) {
    uVar1 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 1) = uVar2 & 7;
    param_1[3] = param_1[3] + (long)((int)uVar1 >> 3);
    *param_1 = (long)((int)uVar1 >> 3) + *param_1;
    return;
  }
  *param_1 = param_1[4];
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



void oggpackB_adv(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 + (int)param_1[1];
  if (*param_1 <= param_1[4] - (long)((int)(uVar2 + 7) >> 3)) {
    uVar1 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 1) = uVar2 & 7;
    param_1[3] = param_1[3] + (long)((int)uVar1 >> 3);
    *param_1 = (long)((int)uVar1 >> 3) + *param_1;
    return;
  }
  *param_1 = param_1[4];
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



void oggpack_adv1(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1] + 1;
  if (iVar1 < 8) {
    *(int *)(param_1 + 1) = iVar1;
    return;
  }
  param_1[3] = param_1[3] + 1;
  *param_1 = *param_1 + 1;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



void oggpackB_adv1(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1] + 1;
  if (iVar1 < 8) {
    *(int *)(param_1 + 1) = iVar1;
    return;
  }
  param_1[3] = param_1[3] + 1;
  *param_1 = *param_1 + 1;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



ulong oggpack_read(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  
  lVar1 = param_1[4];
  if (param_2 < 0x21) {
    lVar2 = *param_1;
    uVar3 = *(ulong *)(mask + (long)(int)param_2 * 8);
    param_2 = param_2 + (int)param_1[1];
    if (lVar1 + -4 <= lVar2) {
      if (lVar1 - ((int)(param_2 + 7) >> 3) < lVar2) goto LAB_00100b48;
      if (param_2 == 0) {
        return 0;
      }
    }
    pbVar4 = (byte *)param_1[3];
    bVar6 = (byte)(int)param_1[1];
    uVar5 = (int)(uint)*pbVar4 >> (bVar6 & 0x1f);
    if ((((8 < (int)param_2) &&
         (uVar5 = (uint)pbVar4[1] << (8 - bVar6 & 0x1f) | uVar5, 0x10 < (int)param_2)) &&
        (uVar5 = (uint)pbVar4[2] << (0x10 - bVar6 & 0x1f) | uVar5, 0x18 < (int)param_2)) &&
       (uVar5 = (uint)pbVar4[3] << (0x18 - bVar6 & 0x1f) | uVar5, 0x20 < (int)param_2)) {
      uVar5 = (uint)pbVar4[4] << (0x20 - bVar6 & 0x1f) | uVar5;
    }
    uVar7 = param_2 + 7;
    if (-1 < (int)param_2) {
      uVar7 = param_2;
    }
    *(uint *)(param_1 + 1) = param_2 & 7;
    param_1[3] = (long)(pbVar4 + ((int)uVar7 >> 3));
    *param_1 = ((int)uVar7 >> 3) + lVar2;
    return (long)(int)uVar5 & uVar3;
  }
LAB_00100b48:
  *param_1 = lVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return 0xffffffffffffffff;
}



ulong oggpackB_read(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = param_1[4];
  uVar6 = (ulong)(0x20 - param_2);
  if (uVar6 < 0x21) {
    lVar2 = *param_1;
    uVar7 = param_2 + (int)param_1[1];
    if (lVar1 <= lVar2 + 4) {
      if (lVar1 - ((int)(uVar7 + 7) >> 3) < lVar2) goto LAB_00100c70;
      if (uVar7 == 0) {
        return 0;
      }
    }
    pbVar3 = (byte *)param_1[3];
    bVar4 = (byte)(int)param_1[1];
    uVar5 = (uint)*pbVar3 << (bVar4 + 0x18 & 0x1f);
    if ((((8 < (int)uVar7) &&
         (uVar5 = (uint)pbVar3[1] << (bVar4 + 0x10 & 0x1f) | uVar5, 0x10 < (int)uVar7)) &&
        (uVar5 = (uint)pbVar3[2] << (bVar4 + 8 & 0x1f) | uVar5, 0x18 < (int)uVar7)) &&
       (uVar5 = (uint)pbVar3[3] << (bVar4 & 0x1f) | uVar5, 0x20 < (int)uVar7)) {
      uVar5 = (int)(uint)pbVar3[4] >> (8 - bVar4 & 0x1f) | uVar5;
    }
    uVar8 = uVar7 + 7;
    if (-1 < (int)uVar7) {
      uVar8 = uVar7;
    }
    *(uint *)(param_1 + 1) = uVar7 & 7;
    param_1[3] = (long)(pbVar3 + ((int)uVar8 >> 3));
    *param_1 = ((int)uVar8 >> 3) + lVar2;
    return (ulong)((uVar5 >> ((byte)((long)uVar6 >> 1) & 0x3f)) >>
                  ((byte)((long)(uVar6 + 1) >> 1) & 0x3f));
  }
LAB_00100c70:
  *param_1 = lVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return 0xffffffffffffffff;
}



ulong oggpack_read1(long *param_1)

{
  ulong uVar1;
  int iVar2;
  
  if (param_1[4] <= *param_1) {
    *param_1 = param_1[4];
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    return 0xffffffffffffffff;
  }
  iVar2 = (int)param_1[1] + 1;
  uVar1 = (ulong)((int)(uint)*(byte *)param_1[3] >> ((byte)(int)param_1[1] & 0x1f) & 1);
  if (7 < iVar2) {
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[3] = (long)((byte *)param_1[3] + 1);
    *param_1 = *param_1 + 1;
    return uVar1;
  }
  *(int *)(param_1 + 1) = iVar2;
  return uVar1;
}



ulong oggpackB_read1(long *param_1)

{
  ulong uVar1;
  int iVar2;
  
  if (param_1[4] <= *param_1) {
    *param_1 = param_1[4];
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    return 0xffffffffffffffff;
  }
  iVar2 = (int)param_1[1] + 1;
  uVar1 = (ulong)((int)(uint)*(byte *)param_1[3] >> (7U - (char)(int)param_1[1] & 0x1f) & 1);
  if (7 < iVar2) {
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[3] = (long)((byte *)param_1[3] + 1);
    *param_1 = *param_1 + 1;
    return uVar1;
  }
  *(int *)(param_1 + 1) = iVar2;
  return uVar1;
}



long oggpack_bytes(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1] + 7;
  iVar1 = (int)param_1[1] + 0xe;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return (long)(iVar1 >> 3) + *param_1;
}



long oggpack_bits(long *param_1)

{
  return (long)(int)param_1[1] + *param_1 * 8;
}



long oggpackB_bytes(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1] + 7;
  iVar1 = (int)param_1[1] + 0xe;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return (long)(iVar1 >> 3) + *param_1;
}



long oggpackB_bits(long *param_1)

{
  return (long)(int)param_1[1] + *param_1 * 8;
}



undefined8 oggpack_get_buffer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 oggpackB_get_buffer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


