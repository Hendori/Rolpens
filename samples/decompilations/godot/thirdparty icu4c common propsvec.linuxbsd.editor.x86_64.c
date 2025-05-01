
/* upvec_compareRows(void const*, void const*, void const*) */

uint upvec_compareRows(void *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 2;
  iVar4 = *(int *)((long)param_1 + 8);
  do {
    uVar1 = *(uint *)((long)param_3 + (long)iVar3 * 4);
    uVar2 = *(uint *)((long)param_2 + (long)iVar3 * 4);
    if (uVar2 != uVar1) {
      return -(uint)(uVar2 < uVar1) | 1;
    }
    iVar3 = iVar3 + 1;
    if (*(int *)((long)param_1 + 8) == iVar3) {
      iVar3 = 0;
    }
    iVar4 = iVar4 + -1;
  } while (0 < iVar4);
  return 0;
}



void upvec_compactToUTrie2Handler_76_godot
               (undefined8 *param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined4 *param_7)

{
  undefined8 uVar1;
  
  if (param_2 < 0x110000) {
    utrie2_setRange32_76_godot(*param_1);
    return;
  }
  if (param_2 == 0x110001) {
    *(int *)((long)param_1 + 0xc) = param_4;
    return;
  }
  if (param_2 == 0x200000) {
    *(int *)(param_1 + 2) = param_4;
    if (0xffff < param_4) {
      *param_7 = 8;
      return;
    }
    uVar1 = utrie2_open_76_godot
                      (*(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc),param_7);
    *param_1 = uVar1;
    return;
  }
  if (param_2 != 0x110000) {
    return;
  }
  *(int *)(param_1 + 1) = param_4;
  return;
}



uint * upvec_compact_76_godot_part_0(long *param_1,code *param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  void *__s1;
  void *pvVar11;
  int iVar12;
  long lVar13;
  int local_48;
  
  iVar3 = (int)param_1[2];
  local_48 = (int)param_1[1];
  *(undefined1 *)(param_1 + 3) = 1;
  puVar8 = param_4;
  uprv_sortArray_76_godot(*param_1,iVar3,local_48 * 4,upvec_compareRows,param_1,0);
  if ((int)*param_4 < 1) {
    iVar1 = local_48 + -2;
    lVar7 = (long)iVar1;
    local_48 = 2 - local_48;
    if (iVar3 < 1) {
      puVar8 = param_4;
      (*param_2)(param_3,0x200000,0x200000,0,*param_1 + lVar7 * -4,iVar1);
      if ((int)*param_4 < 1) {
LAB_00100435:
        uVar6 = local_48 / iVar1 + 1;
        puVar8 = (uint *)(ulong)uVar6;
        *(uint *)(param_1 + 2) = uVar6;
      }
    }
    else {
      iVar12 = 0;
      lVar2 = lVar7 * 4 + 8;
      pvVar11 = (void *)(*param_1 + 8);
      iVar9 = local_48;
      do {
        __s1 = pvVar11;
        iVar4 = *(int *)((long)__s1 + -8);
        if ((iVar9 < 0) ||
           (iVar5 = memcmp(__s1,(void *)(lVar7 * -4 + -8 + (long)__s1),(long)(iVar1 * 4)),
           iVar5 != 0)) {
          iVar9 = iVar9 + iVar1;
        }
        if (0x10ffff < iVar4) {
          (*param_2)(param_3,iVar4,iVar4,iVar9,__s1,iVar1,param_4);
          if (0 < (int)*param_4) {
            return (uint *)(ulong)*param_4;
          }
        }
        iVar12 = iVar12 + 1;
        pvVar11 = (void *)(lVar2 + (long)__s1);
      } while (iVar3 != iVar12);
      puVar8 = (uint *)(*param_2)(param_3,0x200000,0x200000,iVar1 + iVar9,__s1,iVar1,param_4);
      if ((int)*param_4 < 1) {
        iVar9 = 0;
        lVar10 = *param_1;
        pvVar11 = (void *)(lVar10 + 8);
        do {
          iVar12 = *(int *)((long)pvVar11 + -4);
          iVar4 = *(int *)((long)pvVar11 + -8);
          if (local_48 < 0) {
LAB_001003b0:
            local_48 = local_48 + iVar1;
            lVar13 = (long)local_48;
            memmove((void *)(lVar10 + lVar13 * 4),pvVar11,lVar7 * 4);
          }
          else {
            lVar13 = (long)local_48;
            iVar5 = memcmp(pvVar11,(void *)(lVar10 + lVar13 * 4),(long)(iVar1 * 4));
            if (iVar5 != 0) goto LAB_001003b0;
          }
          if ((iVar4 < 0x110000) &&
             (puVar8 = (uint *)(*param_2)(param_3,iVar4,iVar12 + -1,local_48,*param_1 + lVar13 * 4,
                                          iVar1,param_4), 0 < (int)*param_4)) {
            return puVar8;
          }
          iVar9 = iVar9 + 1;
          pvVar11 = (void *)((long)pvVar11 + lVar2);
          if (iVar3 == iVar9) goto LAB_00100435;
          lVar10 = *param_1;
        } while( true );
      }
    }
  }
  return puVar8;
}



undefined8 * upvec_open_76_godot(int param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*param_2 < 1) {
    if (param_1 < 1) {
      *param_2 = 1;
    }
    else {
      param_1 = param_1 + 2;
      puVar2 = (undefined8 *)uprv_malloc_76_godot(0x20);
      puVar3 = (undefined8 *)uprv_malloc_76_godot((long)(param_1 * 0x4000));
      if ((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) {
        *puVar2 = puVar3;
        *(int *)(puVar2 + 1) = param_1;
        *(undefined8 *)((long)puVar2 + 0x14) = 0;
        *(undefined4 *)((long)puVar2 + 0x1c) = 0;
        *(undefined8 *)((long)puVar2 + 0xc) = 0x300001000;
        __memset_chk(puVar3,0,(long)(param_1 * 0xc),(long)(param_1 * 0x4000));
        uVar1 = _LC1;
        *puVar3 = _LC0;
        puVar3 = (undefined8 *)((long)puVar3 + (long)param_1 * 4);
        *puVar3 = uVar1;
        *(undefined8 *)((long)puVar3 + (long)param_1 * 4) = _LC2;
        return puVar2;
      }
      uprv_free_76_godot(puVar2);
      uprv_free_76_godot(puVar3);
      *param_2 = 7;
    }
  }
  return (undefined8 *)0x0;
}



void upvec_close_76_godot(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    uprv_free_76_godot(*param_1);
    uprv_free_76_godot(param_1);
    return;
  }
  return;
}



void upvec_setValue_76_godot
               (UPropsVectors *param_1,uint param_2,int param_3,uint param_4,uint param_5,
               uint param_6,int *param_7)

{
  void *__src;
  size_t __n;
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  void *__src_00;
  int *piVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  bool bVar16;
  long local_78;
  int local_70;
  int local_60;
  
  if (0 < *param_7) {
    return;
  }
  if (((((int)(param_2 | param_4) < 0) || (param_1 == (UPropsVectors *)0x0)) ||
      (bVar6 = param_3 < (int)param_2 || 0x110001 < param_3,
      param_3 < (int)param_2 || 0x110001 < param_3)) ||
     (iVar1 = *(int *)(param_1 + 8), iVar1 + -2 <= (int)param_4)) {
    *param_7 = 1;
    return;
  }
  if (param_1[0x18] != (UPropsVectors)0x0) {
    *param_7 = 0x1e;
    return;
  }
  param_5 = param_5 & param_6;
  iVar7 = param_3 + 1;
  puVar9 = (uint *)_findRow(param_1,param_2);
  __src_00 = (void *)_findRow(param_1,param_3);
  lVar11 = (long)(int)(param_4 + 2);
  if ((*puVar9 == param_2) || ((puVar9[lVar11] & param_6) == param_5)) {
    puVar15 = (uint *)((long)__src_00 + lVar11 * 4);
    if ((iVar7 == *(int *)((long)__src_00 + 4)) || (param_5 == (*puVar15 & param_6)))
    goto LAB_001007a2;
    local_70 = 0;
    uVar13 = 1;
    bVar16 = true;
  }
  else if (iVar7 == *(int *)((long)__src_00 + 4)) {
    bVar16 = false;
    uVar13 = 0;
    bVar6 = true;
    local_70 = 1;
  }
  else {
    local_70 = 1;
    bVar6 = true;
    bVar16 = (*(uint *)((long)__src_00 + lVar11 * 4) & param_6) != param_5;
    uVar13 = (uint)bVar16;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = local_70 + iVar2 + uVar13;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 < iVar8) {
    if (iVar3 < 0x10000) {
      local_60 = 0x10000;
    }
    else {
      local_60 = 0x110002;
      if (0x110001 < iVar3) {
        *param_7 = 5;
        return;
      }
    }
    lVar14 = uprv_malloc_76_godot();
    if (lVar14 == 0) {
      *param_7 = 7;
      return;
    }
    lVar4 = *(long *)param_1;
    lVar12 = (long)iVar2 * (long)iVar1 * 4;
    lVar14 = __memcpy_chk(lVar14,lVar4,lVar12,(long)(local_60 * iVar1 * 4));
    __src_00 = (void *)((long)__src_00 + (lVar14 - lVar4));
    puVar15 = (uint *)((long)puVar9 + (lVar14 - lVar4));
    uprv_free_76_godot(lVar4);
    *(long *)param_1 = lVar14;
    *(int *)(param_1 + 0xc) = local_60;
  }
  else {
    lVar14 = *(long *)param_1;
    lVar12 = (long)(iVar2 * iVar1) * 4;
    puVar15 = puVar9;
  }
  local_78 = (long)iVar1;
  __n = local_78 * 4;
  __src = (void *)((long)__src_00 + __n);
  lVar14 = (lVar14 + lVar12) - (long)__src;
  if (0 < (int)(lVar14 >> 2)) {
    memmove((void *)((long)__src_00 + (long)(int)((local_70 + 1 + uVar13) * iVar1) * 4),__src,
            (long)(int)lVar14);
  }
  *(int *)(param_1 + 0x10) = iVar8;
  puVar9 = puVar15;
  if (bVar6) {
    puVar9 = (uint *)memmove(puVar15 + local_78,puVar15,
                             (long)(iVar1 + (int)((long)__src_00 - (long)puVar15 >> 2)) << 2);
    *puVar9 = param_2;
    puVar15[1] = param_2;
    __src_00 = __src;
  }
  if (bVar16) {
    piVar10 = (int *)memcpy((void *)((long)__src_00 + __n),__src_00,__n);
    *piVar10 = iVar7;
    *(int *)((long)__src_00 + 4) = iVar7;
  }
  puVar15 = (uint *)((long)__src_00 + lVar11 * 4);
LAB_001007a2:
  local_78 = (long)iVar1;
  auVar5._8_8_ = (long)__src_00 - *(long *)param_1 >> 0x3f;
  auVar5._0_8_ = (long)__src_00 - *(long *)param_1 >> 2;
  *(int *)(param_1 + 0x14) = SUB164(auVar5 / SEXT816(local_78),0);
  puVar9 = puVar9 + lVar11;
  *puVar9 = *puVar9 & ~param_6 | param_5;
  while (puVar9 != puVar15) {
    puVar9 = puVar9 + local_78;
    *puVar9 = *puVar9 & ~param_6 | param_5;
  }
  return;
}



undefined4 upvec_getValue_76_godot(UPropsVectors *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (param_1[0x18] != (UPropsVectors)0x0) {
    return 0;
  }
  if (param_2 < 0x110002) {
    if (-1 < param_3) {
      if (param_3 < *(int *)(param_1 + 8) + -2) {
        lVar2 = _findRow(param_1,param_2);
        uVar1 = *(undefined4 *)(lVar2 + (long)(param_3 + 2) * 4);
      }
      return uVar1;
    }
    return 0;
  }
  return 0;
}



undefined4 * upvec_getRow_76_godot(long *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  
  if ((((char)param_1[3] == '\0') && (-1 < param_2)) && (param_2 < (int)param_1[2])) {
    puVar1 = (undefined4 *)(*param_1 + (long)(param_2 * (int)param_1[1]) * 4);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *puVar1;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = puVar1[1] + -1;
    }
    return puVar1 + 2;
  }
  return (undefined4 *)0x0;
}



void upvec_compact_76_godot(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  if (*param_4 < 1) {
    if (param_2 == 0) {
      *param_4 = 1;
      return;
    }
    if (*(char *)(param_1 + 0x18) == '\0') {
      upvec_compact_76_godot_part_0();
      return;
    }
  }
  return;
}



undefined8 upvec_getArray_76_godot(undefined8 *param_1,undefined4 *param_2,int *param_3)

{
  if (*(char *)(param_1 + 3) != '\0') {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 2);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)(param_1 + 1) + -2;
    }
    return *param_1;
  }
  return 0;
}



undefined8
upvec_cloneArray_76_godot(undefined8 *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (0 < *param_4) {
    return 0;
  }
  if (*(char *)(param_1 + 3) == '\0') {
    *param_4 = 1;
  }
  else {
    lVar3 = (long)((*(int *)(param_1 + 1) + -2) * *(int *)(param_1 + 2) * 4);
    lVar1 = uprv_malloc_76_godot(lVar3);
    if (lVar1 != 0) {
      uVar2 = __memcpy_chk(lVar1,*param_1,lVar3,lVar3);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(param_1 + 2);
      }
      if (param_3 != (int *)0x0) {
        *param_3 = *(int *)(param_1 + 1) + -2;
      }
      return uVar2;
    }
    *param_4 = 7;
  }
  return 0;
}



undefined8 upvec_compactToUTrie2WithRowIndexes_76_godot(long param_1,int *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((*param_2 < 1) && (*(char *)(param_1 + 0x18) == '\0')) {
    upvec_compact_76_godot_part_0(param_1,upvec_compactToUTrie2Handler_76_godot,&local_28,param_2);
  }
  utrie2_freeze_76_godot(local_28,0,param_2);
  uVar1 = local_28;
  if (0 < *param_2) {
    utrie2_close_76_godot(local_28);
    uVar1 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


