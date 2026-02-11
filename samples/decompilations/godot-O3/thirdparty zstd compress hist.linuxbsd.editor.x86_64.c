
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong HIST_count_parallel_wksp
                (void *param_1,uint *param_2,uint *param_3,long param_4,int param_5,uint *param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  size_t __n;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  __n = (ulong)(*param_2 + 1) << 2;
  if (param_4 == 0) {
    memset(param_1,0,__n);
    *param_2 = 0;
    uVar9 = 0;
  }
  else {
    puVar8 = (uint *)((long)param_3 + param_4);
    param_6[0] = 0;
    param_6[1] = 0;
    puVar7 = param_3 + 1;
    puVar1 = param_6 + 0x100;
    param_6[0x3fe] = 0;
    param_6[0x3ff] = 0;
    puVar10 = (undefined8 *)((ulong)(param_6 + 2) & 0xfffffffffffffff8);
    for (uVar9 = (ulong)(((int)param_6 -
                         (int)(undefined8 *)((ulong)(param_6 + 2) & 0xfffffffffffffff8)) + 0x1000U
                        >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    uVar6 = *param_3;
    if (puVar7 < (uint *)((long)puVar8 - 0xfU)) {
      do {
        uVar21 = *puVar7;
        puVar11 = puVar7 + 4;
        param_6[uVar6 & 0xff] = param_6[uVar6 & 0xff] + 1;
        puVar1[uVar6 >> 8 & 0xff] = puVar1[uVar6 >> 8 & 0xff] + 1;
        param_6[(ulong)(uVar6 >> 0x10 & 0xff) + 0x200] =
             param_6[(ulong)(uVar6 >> 0x10 & 0xff) + 0x200] + 1;
        param_6[(ulong)(uVar6 >> 0x18) + 0x300] = param_6[(ulong)(uVar6 >> 0x18) + 0x300] + 1;
        uVar6 = puVar7[1];
        param_6[uVar21 & 0xff] = param_6[uVar21 & 0xff] + 1;
        puVar1[uVar21 >> 8 & 0xff] = puVar1[uVar21 >> 8 & 0xff] + 1;
        param_6[(ulong)(uVar21 >> 0x10 & 0xff) + 0x200] =
             param_6[(ulong)(uVar21 >> 0x10 & 0xff) + 0x200] + 1;
        param_6[(ulong)(uVar21 >> 0x18) + 0x300] = param_6[(ulong)(uVar21 >> 0x18) + 0x300] + 1;
        uVar21 = puVar7[2];
        param_6[uVar6 & 0xff] = param_6[uVar6 & 0xff] + 1;
        puVar1[uVar6 >> 8 & 0xff] = puVar1[uVar6 >> 8 & 0xff] + 1;
        param_6[(ulong)(uVar6 >> 0x10 & 0xff) + 0x200] =
             param_6[(ulong)(uVar6 >> 0x10 & 0xff) + 0x200] + 1;
        param_6[(ulong)(uVar6 >> 0x18) + 0x300] = param_6[(ulong)(uVar6 >> 0x18) + 0x300] + 1;
        uVar6 = puVar7[3];
        param_6[uVar21 & 0xff] = param_6[uVar21 & 0xff] + 1;
        puVar1[uVar21 >> 8 & 0xff] = puVar1[uVar21 >> 8 & 0xff] + 1;
        param_6[(ulong)(uVar21 >> 0x10 & 0xff) + 0x200] =
             param_6[(ulong)(uVar21 >> 0x10 & 0xff) + 0x200] + 1;
        param_6[(ulong)(uVar21 >> 0x18) + 0x300] = param_6[(ulong)(uVar21 >> 0x18) + 0x300] + 1;
        puVar7 = puVar11;
      } while (puVar11 < (uint *)((long)puVar8 - 0xfU));
      param_3 = (uint *)((long)param_3 + (param_4 - 0x14U & 0xfffffffffffffff0) + 0x10);
    }
    if (param_3 < puVar8) {
      do {
        uVar6 = *param_3;
        param_3 = (uint *)((long)param_3 + 1);
        param_6[(byte)uVar6] = param_6[(byte)uVar6] + 1;
      } while (puVar8 != param_3);
    }
    iVar5 = _UNK_0010057c;
    iVar4 = _UNK_00100578;
    iVar3 = _UNK_00100574;
    iVar2 = __LC0;
    uVar6 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar17 = 0;
    puVar7 = param_6;
    do {
      puVar8 = puVar7 + 4;
      uVar12 = puVar7[0x300] + puVar7[0x200] + puVar7[0x100] + *puVar7;
      uVar13 = puVar7[0x301] + puVar7[0x201] + puVar7[0x101] + puVar7[1];
      uVar14 = puVar7[0x302] + puVar7[0x202] + puVar7[0x102] + puVar7[2];
      uVar15 = puVar7[0x303] + puVar7[0x203] + puVar7[0x103] + puVar7[3];
      *puVar7 = uVar12;
      puVar7[1] = uVar13;
      puVar7[2] = uVar14;
      puVar7[3] = uVar15;
      uVar16 = -(uint)((int)(uVar6 - iVar2) < (int)(uVar12 - iVar2));
      uVar18 = -(uint)((int)(uVar21 - iVar3) < (int)(uVar13 - iVar3));
      uVar19 = -(uint)((int)(uVar22 - iVar4) < (int)(uVar14 - iVar4));
      uVar20 = -(uint)((int)(uVar17 - iVar5) < (int)(uVar15 - iVar5));
      uVar6 = ~uVar16 & uVar6 | uVar12 & uVar16;
      uVar21 = ~uVar18 & uVar21 | uVar13 & uVar18;
      uVar22 = ~uVar19 & uVar22 | uVar14 & uVar19;
      uVar17 = ~uVar20 & uVar17 | uVar15 & uVar20;
      puVar7 = puVar8;
    } while (puVar1 != puVar8);
    uVar9 = 0xff;
    uVar12 = 0xff;
    uVar13 = -(uint)((int)(uVar6 - iVar2) < (int)(uVar22 - iVar2));
    uVar14 = -(uint)((int)(uVar21 - iVar3) < (int)(uVar17 - iVar3));
    uVar22 = ~uVar13 & uVar6 | uVar22 & uVar13;
    uVar21 = ~uVar14 & uVar21 | uVar17 & uVar14;
    uVar17 = -(uint)((int)(uVar22 - iVar2) < (int)(uVar21 - iVar2));
    uVar6 = param_6[0xff];
    while (uVar6 == 0) {
      uVar12 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar12;
      uVar6 = param_6[uVar9];
    }
    if ((param_5 == 0) || (uVar9 = 0xffffffffffffffd0, uVar12 <= *param_2)) {
      *param_2 = uVar12;
      memmove(param_1,param_6,__n);
      uVar9 = (ulong)(~uVar17 & uVar22 | uVar21 & uVar17);
    }
  }
  return uVar9;
}



bool HIST_isError(ulong param_1)

{
  return 0xffffffffffffff88 < param_1;
}



uint HIST_count_simple(void *param_1,uint *param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar10;
  ulong uVar9;
  
  uVar6 = *param_2;
  uVar9 = (ulong)uVar6;
  pvVar8 = memset(param_1,0,(ulong)(uVar6 + 1) << 2);
  if (param_4 != 0) {
    pbVar1 = param_3 + param_4;
    if (param_3 < pbVar1) {
      do {
        bVar3 = *param_3;
        param_3 = param_3 + 1;
        piVar2 = (int *)((long)pvVar8 + (ulong)bVar3 * 4);
        *piVar2 = *piVar2 + 1;
      } while (pbVar1 != param_3);
    }
    iVar4 = *(int *)((long)pvVar8 + uVar9 * 4);
    while (iVar4 == 0) {
      uVar6 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar6;
      iVar4 = *(int *)((long)pvVar8 + uVar9 * 4);
    }
    *param_2 = uVar6;
    uVar7 = 0;
    uVar10 = 0;
    do {
      uVar5 = *(uint *)((long)pvVar8 + (ulong)uVar7 * 4);
      if (uVar10 < uVar5) {
        uVar10 = uVar5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= uVar6);
    return uVar10;
  }
  *param_2 = 0;
  return 0;
}



ulong HIST_countFast_wksp(void)

{
  uint uVar1;
  ulong uVar2;
  ulong in_RCX;
  ulong in_R8;
  ulong in_R9;
  
  if (in_RCX < 0x5dc) {
    uVar1 = HIST_count_simple();
    return (ulong)uVar1;
  }
  if ((in_R8 & 3) == 0) {
    if (0xfff < in_R9) {
      uVar2 = HIST_count_parallel_wksp();
      return uVar2;
    }
    return 0xffffffffffffffbe;
  }
  return 0xffffffffffffffff;
}



ulong HIST_count_wksp(undefined8 param_1,uint *param_2,undefined8 param_3,ulong param_4,
                     ulong param_5,ulong param_6)

{
  uint uVar1;
  ulong uVar2;
  
  if ((param_5 & 3) != 0) {
    return 0xffffffffffffffff;
  }
  if (param_6 < 0x1000) {
    return 0xffffffffffffffbe;
  }
  if (*param_2 < 0xff) {
    uVar2 = HIST_count_parallel_wksp();
    return uVar2;
  }
  *param_2 = 0xff;
  if (0x5db < param_4) {
    uVar2 = HIST_count_parallel_wksp();
    return uVar2;
  }
  uVar1 = HIST_count_simple();
  return (ulong)uVar1;
}



ulong HIST_countFast(void)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong in_RCX;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RCX < 0x5dc) {
    uVar2 = HIST_count_simple();
    uVar3 = (ulong)uVar2;
  }
  else {
    uVar3 = HIST_count_parallel_wksp();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong HIST_count(undefined8 param_1,uint *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 < 0xff) {
    uVar3 = HIST_count_parallel_wksp();
  }
  else {
    *param_2 = 0xff;
    if (param_4 < 0x5dc) {
      uVar2 = HIST_count_simple();
      uVar3 = (ulong)uVar2;
    }
    else {
      uVar3 = HIST_count_parallel_wksp();
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


