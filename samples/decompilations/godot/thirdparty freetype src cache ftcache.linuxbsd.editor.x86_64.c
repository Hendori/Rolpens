
undefined4 ftc_basic_family_compare(long param_1,long param_2)

{
  if ((((*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x10)) &&
       (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x18))) &&
      ((*(int *)(param_1 + 0x38) == 0) != (*(int *)(param_2 + 0x20) != 0))) &&
     ((*(int *)(param_1 + 0x38) != 0 ||
      ((*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x24) &&
       (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x28))))))) {
    return CONCAT31((int3)((uint)*(int *)(param_2 + 0x30) >> 8),
                    *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x30));
  }
  return 0;
}



undefined8 ftc_basic_family_init(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x70) + 0x40);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  return 0;
}



undefined8 ftc_cmap_node_weight(void)

{
  return 0x28;
}



bool ftc_cmap_node_remove_faceid(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return *(long *)(param_1 + 0x28) == param_2;
}



undefined4 ftc_gnode_compare(long param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (*(long *)(param_1 + 0x28) != *(long *)(param_2 + 2)) {
    return 0;
  }
  return CONCAT31((int3)((uint)*param_2 >> 8),*(int *)(param_1 + 0x30) == *param_2);
}



long ftc_inode_weight(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (*(int *)(lVar2 + 0x10) == 0x62697473) {
    iVar1 = *(int *)(lVar2 + 0x38);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    return (ulong)*(uint *)(lVar2 + 0x30) * (long)iVar1 + 0x98;
  }
  if (*(int *)(lVar2 + 0x10) != 0x6f75746c) {
    return 0x40;
  }
  return (long)*(short *)(lVar2 + 0x2a) * 0x11 + 0x90 + (long)*(short *)(lVar2 + 0x28) * 2;
}



bool ftc_size_node_compare_faceid(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x18) == param_2;
}



bool ftc_face_node_compare(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x10) == param_2;
}



long ftc_snode_weight(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1 + 0x40;
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar4 = 0x1c0;
    do {
      if (*(long *)(lVar3 + 0x10) != 0) {
        uVar1 = *(ushort *)(lVar3 + 6);
        uVar2 = -uVar1;
        if (0 < (short)uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = lVar4 + (ulong)uVar2 * (ulong)*(byte *)(lVar3 + 1);
      }
      lVar3 = lVar3 + 0x18;
    } while (param_1 + 0x58 + (ulong)(*(int *)(param_1 + 0x38) - 1) * 0x18 != lVar3);
    return lVar4;
  }
  return 0x1c0;
}



void FTC_MruList_Remove(int *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)param_2[1];
  plVar2 = (long *)*param_2;
  plVar3 = *(long **)(param_1 + 2);
  *plVar1 = (long)plVar2;
  plVar2[1] = (long)plVar1;
  if (param_2 == plVar2) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else if (param_2 == plVar3) {
    *(long **)(param_1 + 2) = plVar2;
  }
  *param_1 = *param_1 + -1;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(code **)(param_1 + 0xe) != (code *)0x0) {
    (**(code **)(param_1 + 0xe))(param_2,*(undefined8 *)(param_1 + 4));
  }
  ft_mem_free(uVar4,param_2);
  return;
}



undefined8
ftc_basic_gnode_compare_faceid(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (param_4 == (undefined1 *)0x0) {
    if (param_2 != *(long *)(lVar2 + 0x28)) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    *param_4 = 0;
    if (*(long *)(lVar2 + 0x28) != param_2) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (lVar2 == 0) {
      return 1;
    }
  }
  piVar1 = (int *)(lVar2 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return 1;
  }
  FTC_MruList_Remove(param_3 + 0x78,lVar2);
  return 1;
}



void ftc_cmap_node_free(undefined8 param_1,long param_2)

{
  ft_mem_free(*(undefined8 *)(param_2 + 0x60),param_1);
  return;
}



undefined4 ftc_cache_init(undefined8 *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  uVar1 = _LC0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = 0x10;
  *param_1 = uVar1;
  uVar1 = ft_mem_realloc(param_1[0xc],8,0,8,0,&local_14);
  param_1[2] = uVar1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong FTC_Manager_RegisterCache(long param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 6;
  uVar6 = 6;
  if (param_1 == 0) {
    if (param_3 != (long *)0x0) {
      *param_3 = 0;
    }
  }
  else if (param_3 != (long *)0x0) {
    if (*(uint *)(param_1 + 0xb0) < 0x10) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      lVar7 = ft_mem_qalloc(uVar3,param_2[5],&local_34);
      uVar6 = (ulong)local_34;
      if (local_34 == 0) {
        *(long *)(lVar7 + 0x58) = param_1;
        *(undefined8 *)(lVar7 + 0x60) = uVar3;
        uVar4 = param_2[1];
        uVar1 = *(undefined4 *)(param_1 + 0xb0);
        *(undefined8 *)(lVar7 + 0x18) = *param_2;
        *(undefined8 *)(lVar7 + 0x20) = uVar4;
        uVar4 = param_2[3];
        *(undefined8 *)(lVar7 + 0x28) = param_2[2];
        *(undefined8 *)(lVar7 + 0x30) = uVar4;
        uVar4 = param_2[5];
        *(undefined8 *)(lVar7 + 0x38) = param_2[4];
        *(undefined8 *)(lVar7 + 0x40) = uVar4;
        uVar4 = param_2[6];
        uVar5 = param_2[7];
        *(undefined8 **)(lVar7 + 0x70) = param_2;
        *(undefined4 *)(lVar7 + 0x68) = uVar1;
        *(undefined8 *)(lVar7 + 0x48) = uVar4;
        *(undefined8 *)(lVar7 + 0x50) = uVar5;
        uVar6 = (*(code *)param_2[6])(lVar7);
        local_34 = (uint)uVar6;
        if (local_34 == 0) {
          uVar2 = *(uint *)(param_1 + 0xb0);
          *(uint *)(param_1 + 0xb0) = uVar2 + 1;
          *(long *)(param_1 + 0x30 + (ulong)uVar2 * 8) = lVar7;
        }
        else {
          (*(code *)param_2[7])(lVar7);
          ft_mem_free(uVar3,lVar7);
          uVar6 = (ulong)local_34;
          lVar7 = 0;
        }
      }
    }
    else {
      uVar6 = 0x70;
      lVar7 = 0;
    }
    *param_3 = lVar7;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



int ftc_cmap_node_new(long *param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ft_mem_qalloc(*(undefined8 *)(param_3 + 0x60),0x138,&local_24);
  if (local_24 == 0) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + 0x28) = *param_2;
    *(ulong *)(lVar2 + 0x30) =
         CONCAT44(*(undefined4 *)((long)param_2 + 0xc),uVar1) & 0xffffff80ffffffff;
    *(undefined4 *)(lVar2 + 0x38) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x44) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x48) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x4c) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x50) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x54) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x58) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x5c) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x60) = 0xffffffff;
    *(undefined4 *)(lVar2 + 100) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x68) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x6c) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x70) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x74) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x78) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x7c) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x80) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x84) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x88) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x8c) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x90) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x94) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x98) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x9c) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xa0) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xa4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xa8) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xac) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xb0) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xb4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xb8) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xbc) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xc0) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xc4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 200) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xcc) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xd0) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xd4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xd8) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xdc) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xe0) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xe4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xe8) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xec) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xf0) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xf4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xf8) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xfc) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x100) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x104) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x108) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x10c) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x110) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x114) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x118) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x11c) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x120) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x124) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x128) = 0xffffffff;
    *(undefined4 *)(lVar2 + 300) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x130) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x134) = 0xffffffff;
  }
  *param_1 = lVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ftc_cache_resize(uint *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  uVar10 = *param_1;
  uVar11 = (ulong)uVar10;
  lVar7 = *(long *)(param_1 + 2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (ulong)(param_1[1] + 1);
  uVar6 = (ulong)(param_1[1] + 1 >> 1);
  uVar13 = uVar12;
  if (lVar7 < 0) goto LAB_0010066a;
  while ((long)uVar11 < lVar7) {
    lVar4 = *(long *)(param_1 + 4);
    iVar2 = (int)uVar11;
    uVar10 = iVar2 - 1;
    uVar11 = (ulong)uVar10;
    lVar1 = *(long *)(lVar4 + uVar11 * 8);
    if (uVar10 < 8) break;
    if ((uint)uVar6 == uVar10) {
      lVar4 = ft_mem_qrealloc(*(undefined8 *)(param_1 + 0x18),8,uVar12,uVar11,lVar4,&local_44);
      *(long *)(param_1 + 4) = lVar4;
      if (local_44 != 0) break;
      lVar7 = *(long *)(param_1 + 2);
      uVar12 = (ulong)uVar10;
      param_1[1] = iVar2 - 2;
    }
    plVar5 = (long *)(lVar4 + (uVar11 - uVar6) * 8);
    lVar4 = *plVar5;
    if (*plVar5 != 0) {
      do {
        lVar9 = lVar4;
        lVar4 = *(long *)(lVar9 + 0x10);
      } while (lVar4 != 0);
      plVar5 = (long *)(lVar9 + 0x10);
    }
    *plVar5 = lVar1;
    lVar7 = lVar7 + -2;
    while( true ) {
      *(long *)(param_1 + 2) = lVar7;
      uVar10 = (uint)uVar11;
      *param_1 = uVar10;
      uVar6 = uVar12 >> 1;
      uVar13 = uVar12;
      if (-1 < lVar7) break;
LAB_0010066a:
      lVar4 = *(long *)(param_1 + 4);
      uVar12 = uVar13;
      if ((uint)uVar13 == uVar10) {
        uVar3 = (uint)uVar13 * 2;
        lVar4 = ft_mem_qrealloc(*(undefined8 *)(param_1 + 0x18),8,uVar11,uVar3,lVar4,&local_44);
        *(long *)(param_1 + 4) = lVar4;
        if (local_44 != 0) goto LAB_00100757;
        lVar7 = *(long *)(param_1 + 2);
        uVar12 = (ulong)uVar3;
        param_1[1] = uVar3 - 1;
        uVar6 = uVar13;
      }
      plVar5 = (long *)(lVar4 + (uVar11 - uVar6) * 8);
      lVar1 = *plVar5;
      lVar9 = 0;
      while (lVar8 = lVar9, lVar1 != 0) {
        while (lVar9 = lVar1, (uVar6 & *(ulong *)(lVar9 + 0x18)) != 0) {
          *plVar5 = *(long *)(lVar9 + 0x10);
          *(long *)(lVar9 + 0x10) = lVar8;
          lVar1 = *plVar5;
          lVar8 = lVar9;
          if (*plVar5 == 0) goto LAB_001006bb;
        }
        plVar5 = (long *)(lVar9 + 0x10);
        lVar9 = lVar8;
        lVar1 = *plVar5;
      }
LAB_001006bb:
      *(long *)(lVar4 + uVar11 * 8) = lVar9;
      uVar11 = (ulong)(uVar10 + 1);
      lVar7 = lVar7 + 2;
    }
  }
LAB_00100757:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ftc_node_destroy(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  puVar3 = *(uint **)(param_2 + 0x30 + (ulong)*(ushort *)(param_1 + 4) * 8);
  lVar7 = (**(code **)(puVar3 + 8))(param_1,puVar3);
  plVar9 = (long *)param_1[1];
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) - lVar7;
  plVar4 = (long *)*param_1;
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar9 = (long)plVar4;
  plVar4[1] = (long)plVar9;
  if (param_1 == plVar4) {
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else if (param_1 == plVar5) {
    *(long **)(param_2 + 0x10) = plVar4;
  }
  uVar1 = puVar3[1];
  uVar6 = param_1[3];
  uVar2 = *puVar3;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  uVar8 = (ulong)(uVar1 & (uint)uVar6);
  if (uVar2 <= uVar8) {
    uVar8 = uVar1 >> 1 & uVar6;
  }
  plVar9 = (long *)(*(long *)(puVar3 + 4) + uVar8 * 8);
  plVar4 = (long *)*plVar9;
  do {
    if (plVar4 == (long *)0x0) {
LAB_00100837:
                    /* WARNING: Could not recover jumptable at 0x00100846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar3 + 0xe))(param_1,puVar3);
      return;
    }
    if (param_1 == plVar4) {
      *plVar9 = param_1[2];
      param_1[2] = 0;
      *(long *)(puVar3 + 2) = *(long *)(puVar3 + 2) + 1;
      ftc_cache_resize(puVar3);
      goto LAB_00100837;
    }
    plVar9 = plVar4 + 2;
    plVar4 = (long *)plVar4[2];
  } while( true );
}



uint FTC_Manager_FlushN(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 == 0) || (param_2 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = *(long *)(lVar1 + 8);
    do {
      lVar2 = *(long *)(lVar3 + 8);
      if (*(short *)(lVar3 + 0x22) < 1) {
        uVar4 = uVar4 + 1;
        ftc_node_destroy(lVar3,param_1);
      }
    } while ((lVar3 != lVar1) && (lVar3 = lVar2, uVar4 < param_2));
  }
  return uVar4;
}



int ftc_snode_load(long param_1,long param_2,int param_3,long *param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *__dest;
  long lVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  short sVar12;
  long in_FS_OFFSET;
  int local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = param_3 - *(int *)(param_1 + 0x30);
  iVar3 = 6;
  if (*(uint *)(param_1 + 0x38) <= uVar8) goto LAB_0010097d;
  puVar1 = (undefined2 *)(param_1 + 0x40 + (ulong)uVar8 * 0x18);
  iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x20) + 0x30))
                    (*(long *)(param_1 + 0x28),param_3,param_2,&local_38);
  if ((iVar3 == 0) && (lVar5 = *(long *)(local_38 + 0x98), *(int *)(lVar5 + 0x90) == 0x62697473)) {
    uVar8 = *(uint *)(lVar5 + 0x98);
    uVar4 = (ulong)uVar8;
    if ((0xff < uVar8) || (0xff < *(uint *)(lVar5 + 0x9c))) goto LAB_0010095c;
    iVar3 = *(int *)(lVar5 + 0xa0);
    sVar12 = (short)iVar3;
    if ((((iVar3 != sVar12) ||
         (cVar10 = (char)*(int *)(lVar5 + 0xc0), *(int *)(lVar5 + 0xc0) != (int)cVar10)) ||
        (cVar11 = (char)*(int *)(lVar5 + 0xc4), *(int *)(lVar5 + 0xc4) != (int)cVar11)) ||
       ((lVar7 = *(long *)(lVar5 + 0x80) + 0x20 >> 6, cVar6 = (char)lVar7, (int)cVar6 != (int)lVar7
        || (lVar7 = *(long *)(lVar5 + 0x88) + 0x20 >> 6, cVar9 = (char)lVar7,
           (int)cVar9 != (int)lVar7)))) goto LAB_0010095c;
    *(char *)puVar1 = (char)*(uint *)(lVar5 + 0x9c);
    *(char *)((long)puVar1 + 1) = (char)uVar8;
    *(char *)(puVar1 + 1) = cVar10;
    *(char *)((long)puVar1 + 3) = cVar11;
    *(char *)(puVar1 + 4) = cVar6;
    *(char *)((long)puVar1 + 9) = cVar9;
    cVar10 = *(char *)(lVar5 + 0xb0);
    puVar1[3] = sVar12;
    puVar1[2] = CONCAT11(cVar10 + -1,*(undefined1 *)(lVar5 + 0xb2));
    lVar7 = *(long *)(lVar5 + 0x128);
    uVar8 = *(uint *)(lVar7 + 8);
    if ((uVar8 & 1) == 0) {
      iVar2 = -iVar3;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      __dest = (void *)ft_mem_qalloc(*(undefined8 *)(param_2 + 8),(long)iVar2 * uVar4,&local_3c);
      *(void **)(puVar1 + 8) = __dest;
      if (local_3c == 0) {
        memcpy(__dest,*(void **)(lVar5 + 0xa8),(long)iVar2 * uVar4);
        iVar3 = local_3c;
        if (param_4 != (long *)0x0) goto LAB_00100ad6;
      }
      else {
        if (param_4 == (long *)0x0) {
          iVar3 = local_3c;
          if ((char)local_3c == '@') goto LAB_0010097d;
          *puVar1 = 0xff;
          *(undefined8 *)(puVar1 + 8) = 0;
          goto LAB_0010097b;
        }
LAB_00100ad6:
        sVar12 = puVar1[3];
        lVar5 = (long)sVar12;
        if (sVar12 < 0) {
          lVar5 = (long)-(int)sVar12;
        }
        *param_4 = lVar5 * (ulong)*(byte *)((long)puVar1 + 1);
        iVar3 = local_3c;
      }
      if (iVar3 != 0) {
        if ((char)iVar3 == '@') goto LAB_0010097d;
        goto LAB_0010095c;
      }
    }
    else {
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(lVar5 + 0xa8);
      *(uint *)(lVar7 + 8) = uVar8 & 0xfffffffe;
      if (param_4 != (long *)0x0) {
        if (sVar12 < 0) {
          *param_4 = uVar4 * (long)-iVar3;
        }
        else {
          *param_4 = uVar4 * (long)iVar3;
        }
      }
    }
  }
  else {
LAB_0010095c:
    *(undefined8 *)(puVar1 + 8) = 0;
    *puVar1 = 0xff;
    if (param_4 != (long *)0x0) {
      *param_4 = 0;
    }
  }
LAB_0010097b:
  iVar3 = 0;
LAB_0010097d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



undefined8 ftc_snode_compare(long param_1,int *param_2,long param_3,undefined1 *param_4)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  iVar3 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x28) == *(long *)(param_2 + 2)) &&
     (uVar10 = iVar3 - *(int *)(param_1 + 0x30), uVar10 < *(uint *)(param_1 + 0x38))) {
    pcVar2 = (char *)(param_1 + 0x40 + (ulong)uVar10 * 0x18);
    uVar9 = 1;
    if ((*(long *)(pcVar2 + 0x10) == 0) && (*pcVar2 == -1)) {
      lVar4 = *(long *)(param_3 + 0x58);
      *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
      uVar10 = 4;
      lVar11 = lVar4;
      while (iVar7 = ftc_snode_load(param_1,lVar11,iVar3,&local_48), iVar7 != 0) {
        if (((char)iVar7 != '@') || (uVar8 = FTC_Manager_FlushN(lVar4,uVar10), uVar8 == 0)) {
LAB_00100c62:
          *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + -1;
          uVar9 = 0;
          goto LAB_00100ba2;
        }
        if (param_4 == (undefined1 *)0x0) {
          if (uVar8 == 0) goto LAB_00100c62;
        }
        else {
          *param_4 = 1;
        }
        if (uVar10 == uVar8) {
          uVar6 = uVar10 * 2;
          uVar10 = *(uint *)(lVar4 + 0x28);
          uVar5 = uVar6;
          if (uVar10 <= uVar6) {
            uVar5 = uVar10;
          }
          if (uVar8 <= uVar6) {
            uVar10 = uVar5;
          }
        }
        lVar11 = *(long *)(param_3 + 0x58);
      }
      lVar4 = *(long *)(param_3 + 0x58);
      *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + -1;
      plVar1 = (long *)(lVar4 + 0x20);
      *plVar1 = *plVar1 + local_48;
      uVar9 = 1;
    }
  }
LAB_00100ba2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



void ftc_size_node_done(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FT_Done_Size();
    return;
  }
  return;
}



undefined4 ftc_cmap_node_compare(long param_1,long *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if ((*(long *)(param_1 + 0x28) == *param_2) && (*(int *)(param_1 + 0x30) == (int)param_2[1])) {
    uVar1 = *(int *)((long)param_2 + 0xc) - *(int *)(param_1 + 0x34);
    return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x80);
  }
  return 0;
}



undefined8 ftc_size_node_compare(long param_1,long *param_2)

{
  if ((*(long *)(param_1 + 0x18) == *param_2) && (*(long *)(param_1 + 0x20) == param_2[1])) {
    if (((*(int *)(param_1 + 0x28) == 0) != ((int)param_2[2] != 0)) &&
       ((*(int *)(param_1 + 0x28) != 0 ||
        ((*(int *)(param_1 + 0x2c) == *(int *)((long)param_2 + 0x14) &&
         (*(int *)(param_1 + 0x30) == (int)param_2[3])))))) {
      FT_Activate_Size(*(undefined8 *)(param_1 + 0x10));
      return 1;
    }
  }
  return 0;
}



int ftc_face_node_init(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  iVar1 = (*(code *)param_3[0x2a])(param_2,*param_3,param_3[0x29],param_1 + 0x18);
  if ((iVar1 == 0) && (*(long *)(*(long *)(param_1 + 0x18) + 0xa0) != 0)) {
    FT_Done_Size();
  }
  return iVar1;
}



int FTC_Cache_NewNode(uint *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  long *plVar14;
  long *plVar15;
  long *local_48;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x16);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = 4;
  do {
    iVar7 = (**(code **)(param_1 + 6))(&local_48,param_3,param_1);
    plVar5 = local_48;
    if (iVar7 == 0) {
      lVar1 = *(long *)(param_1 + 4);
      *(short *)(local_48 + 4) = (short)param_1[0x1a];
      *(undefined2 *)((long)local_48 + 0x22) = 0;
      uVar11 = param_1[1];
      local_48[3] = param_2;
      uVar9 = (ulong)((uint)param_2 & uVar11);
      if (uVar9 < *param_1) {
        lVar12 = uVar9 << 3;
      }
      else {
        lVar12 = (uVar11 >> 1 & param_2) * 8;
      }
      local_48[2] = *(long *)(lVar1 + lVar12);
      *(long *)(lVar1 + lVar12) = (long)local_48;
      *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + -1;
      ftc_cache_resize(param_1);
      lVar1 = *(long *)(param_1 + 0x16);
      plVar2 = *(long **)(lVar1 + 0x10);
      plVar14 = plVar5;
      plVar15 = plVar5;
      if (plVar2 != (long *)0x0) {
        plVar15 = (long *)plVar2[1];
        plVar2[1] = (long)plVar5;
        *plVar15 = (long)plVar5;
        plVar14 = plVar2;
      }
      *plVar5 = (long)plVar14;
      plVar5[1] = (long)plVar15;
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
      *(long **)(lVar1 + 0x10) = plVar5;
      lVar12 = (**(code **)(param_1 + 8))(plVar5,param_1);
      uVar9 = lVar12 + *(long *)(lVar1 + 0x20);
      *(ulong *)(lVar1 + 0x20) = uVar9;
      if (*(ulong *)(lVar1 + 0x18) <= uVar9) {
        sVar6 = *(short *)((long)plVar5 + 0x22);
        lVar12 = *(long *)(lVar1 + 0x10);
        *(short *)((long)plVar5 + 0x22) = sVar6 + 1;
        if (lVar12 != 0) {
          lVar13 = *(long *)(lVar12 + 8);
          do {
            lVar3 = *(long *)(lVar13 + 8);
            if (*(short *)(lVar13 + 0x22) < 1) {
              ftc_node_destroy(lVar13,lVar1);
            }
          } while ((lVar12 != lVar13) &&
                  (lVar13 = lVar3, *(ulong *)(lVar1 + 0x18) < *(ulong *)(lVar1 + 0x20)));
          sVar6 = *(short *)((long)plVar5 + 0x22) + -1;
        }
        *(short *)((long)plVar5 + 0x22) = sVar6;
      }
LAB_00100e42:
      *param_4 = local_48;
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return iVar7;
    }
    if (((char)iVar7 != '@') || (uVar8 = FTC_Manager_FlushN(lVar1,uVar11), uVar8 == 0)) {
      local_48 = (long *)0x0;
      goto LAB_00100e42;
    }
    if (uVar11 == uVar8) {
      uVar4 = uVar11 * 2;
      uVar11 = *(uint *)(lVar1 + 0x28);
      uVar10 = uVar4;
      if (uVar11 <= uVar4) {
        uVar10 = uVar11;
      }
      if (uVar8 <= uVar4) {
        uVar11 = uVar10;
      }
    }
  } while( true );
}



void ftc_cache_done(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar8 = *(long *)(param_1 + 4);
  if (lVar8 != 0) {
    uVar1 = *param_1;
    lVar3 = *(long *)(param_1 + 0x16);
    if (uVar1 != 0) {
      lVar9 = 0;
      do {
        plVar10 = *(long **)(lVar8 + lVar9);
        if (*(long **)(lVar8 + lVar9) != (long *)0x0) {
          do {
            plVar4 = *(long **)(lVar3 + 0x10);
            plVar5 = (long *)plVar10[2];
            plVar6 = (long *)plVar10[1];
            plVar7 = (long *)*plVar10;
            plVar10[2] = 0;
            *plVar6 = (long)plVar7;
            plVar7[1] = (long)plVar6;
            if (plVar7 == plVar10) {
              *(undefined8 *)(lVar3 + 0x10) = 0;
            }
            else if (plVar4 == plVar10) {
              *(long **)(lVar3 + 0x10) = plVar7;
            }
            *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + -1;
            lVar8 = (**(code **)(param_1 + 8))(plVar10,param_1);
            *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) - lVar8;
            (**(code **)(param_1 + 0xe))(plVar10,param_1);
            plVar10 = plVar5;
          } while (plVar5 != (long *)0x0);
          lVar8 = *(long *)(param_1 + 4);
        }
        lVar9 = lVar9 + 8;
      } while ((ulong)uVar1 * 8 - lVar9 != 0);
    }
  }
  ft_mem_free(uVar2);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void ftc_face_node_done(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  lVar1 = *(long *)(param_2 + 0x108);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(lVar1 + 8);
    do {
      while (lVar3 = *(long *)(lVar4 + 8), lVar2 == *(long *)(lVar4 + 0x18)) {
        FTC_MruList_Remove(param_2 + 0x100,lVar4);
        bVar5 = lVar1 == lVar4;
        lVar4 = lVar3;
        if (bVar5) goto LAB_0010110a;
      }
      bVar5 = lVar1 != lVar4;
      lVar4 = lVar3;
    } while (bVar5);
  }
LAB_0010110a:
  FT_Done_Face(*(undefined8 *)(param_1 + 0x18));
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  return;
}



void ftc_inode_free(long param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  if (*(long *)(param_1 + 0x38) != 0) {
    FT_Done_Glyph();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FTC_MruList_Remove(param_2 + 0x78);
      ft_mem_free(uVar2,param_1);
      return;
    }
  }
  ft_mem_free(uVar2,param_1);
  return;
}



ulong ftc_inode_new(long *param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = ft_mem_qalloc(*(undefined8 *)(param_3 + 0x60),0x40,&local_34);
  uVar5 = (ulong)local_34;
  lVar6 = lVar4;
  if (local_34 == 0) {
    lVar2 = *(long *)(param_2 + 2);
    uVar1 = *param_2;
    lVar3 = *(long *)(*(long *)(param_3 + 0x70) + 0x40);
    *(long *)(lVar4 + 0x28) = lVar2;
    *(undefined4 *)(lVar4 + 0x30) = uVar1;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    uVar5 = (**(code **)(lVar3 + 0x28))(lVar2,uVar1,param_3,lVar4 + 0x38);
    local_34 = (uint)uVar5;
    if (local_34 != 0) {
      lVar6 = 0;
      ftc_inode_free(lVar4,param_3);
      uVar5 = (ulong)local_34;
    }
  }
  *param_1 = lVar6;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ftc_gcache_init(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  uVar2 = _LC0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = 0x10;
  *param_1 = uVar2;
  uVar2 = ft_mem_realloc(param_1[0xc],8,0,8,0,&local_14);
  param_1[2] = uVar2;
  if (local_14 == 0) {
    puVar1 = *(undefined8 **)(param_1[0xe] + 0x40);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    uVar2 = puVar1[1];
    param_1[0x12] = *puVar1;
    param_1[0x13] = uVar2;
    uVar2 = puVar1[3];
    param_1[0x14] = puVar1[2];
    param_1[0x15] = uVar2;
    uVar2 = puVar1[4];
    param_1[0x11] = param_1;
    param_1[0x16] = uVar2;
    param_1[0x17] = param_1[0xc];
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ftc_snode_free(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  if (iVar2 != 0) {
    lVar4 = param_1 + 0x40;
    do {
      lVar5 = lVar4 + 0x18;
      ft_mem_free(uVar3,*(undefined8 *)(lVar4 + 0x10));
      *(undefined8 *)(lVar4 + 0x10) = 0;
      lVar4 = lVar5;
    } while (lVar5 != param_1 + 0x58 + (ulong)(iVar2 - 1) * 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FTC_MruList_Remove(param_2 + 0x78);
    }
  }
  ft_mem_free(uVar3,param_1);
  return;
}



ulong ftc_snode_new(long *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined2 *puVar9;
  uint uVar10;
  long lVar11;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar2 = *(long *)(param_2 + 2);
  uVar1 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(undefined8 *)(param_3 + 0x60);
  uVar5 = (**(code **)(*(long *)(*(long *)(param_3 + 0x70) + 0x40) + 0x28))
                    (lVar2,*(undefined8 *)(param_3 + 0x58));
  if (uVar1 < uVar5) {
    lVar8 = ft_mem_qalloc(uVar3,0x1c0,&local_44);
    uVar7 = (ulong)local_44;
    lVar11 = lVar8;
    if (local_44 == 0) {
      *(long *)(lVar8 + 0x28) = lVar2;
      uVar6 = uVar1 & 0xfffffff0;
      uVar10 = uVar5 - uVar6;
      *(uint *)(lVar8 + 0x30) = uVar6;
      if (0x10 < uVar10) {
        uVar10 = 0x10;
      }
      *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
      *(uint *)(lVar8 + 0x38) = uVar10;
      uVar4 = _LC1;
      if (uVar5 != uVar6) {
        uVar5 = 0;
        puVar9 = (undefined2 *)(lVar8 + 0x40);
        do {
          uVar5 = uVar5 + 1;
          *puVar9 = uVar4;
          *(undefined8 *)(puVar9 + 8) = 0;
          puVar9 = puVar9 + 0xc;
        } while (uVar5 < uVar10);
      }
      uVar7 = ftc_snode_load(lVar8,*(undefined8 *)(param_3 + 0x58),uVar1,0);
      local_44 = (uint)uVar7;
      if (local_44 != 0) {
        lVar11 = 0;
        ftc_snode_free(lVar8,param_3);
        uVar7 = (ulong)local_44;
      }
    }
  }
  else {
    uVar7 = 6;
    lVar11 = 0;
  }
  *param_1 = lVar11;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ftc_gcache_done(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  ftc_cache_done();
  plVar4 = *(long **)(param_1 + 0x80);
  if (plVar4 != (long *)0x0) {
    do {
      plVar3 = (long *)*plVar4;
      plVar1 = (long *)plVar4[1];
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
      *plVar1 = (long)plVar3;
      plVar3[1] = (long)plVar1;
      if (plVar4 == plVar3) {
        plVar3 = (long *)0;
      }
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
      *(long **)(param_1 + 0x80) = plVar3;
      if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
        (**(code **)(param_1 + 0xb0))(plVar4,*(undefined8 *)(param_1 + 0x88));
      }
      ft_mem_free(uVar2,plVar4);
      plVar4 = *(long **)(param_1 + 0x80);
    } while (plVar4 != (long *)0x0);
  }
  return;
}



ulong FTC_MruList_New(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long in_FS_OFFSET;
  long *plVar9;
  long *plVar10;
  uint local_34;
  long local_30;
  
  uVar8 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] - 1 < uVar8) {
    plVar7 = *(long **)(param_1 + 2);
    pcVar2 = *(code **)(param_1 + 0xc);
    plVar5 = (long *)plVar7[1];
    if (pcVar2 != (code *)0x0) {
      if (plVar7 != plVar5) {
        lVar3 = *plVar5;
        plVar10 = (long *)plVar5[1];
        *plVar10 = lVar3;
        *(long **)(lVar3 + 8) = plVar10;
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar5;
        plVar7[1] = (long)plVar5;
        *plVar5 = (long)plVar7;
        plVar5[1] = (long)puVar4;
        *(long **)(param_1 + 2) = plVar5;
      }
      uVar6 = (*pcVar2)(plVar5,param_2,*(undefined8 *)(param_1 + 4));
      local_34 = (uint)uVar6;
      if (local_34 == 0) goto LAB_00101630;
      uVar8 = *param_1;
      plVar7 = *(long **)(param_1 + 2);
    }
    puVar4 = (undefined8 *)plVar5[1];
    plVar10 = (long *)*plVar5;
    *puVar4 = plVar10;
    plVar10[1] = (long)puVar4;
    if (plVar5 == plVar10) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else if (plVar5 == plVar7) {
      *(long **)(param_1 + 2) = plVar10;
    }
    *param_1 = uVar8 - 1;
    plVar7 = plVar5;
    if (*(code **)(param_1 + 0xe) != (code *)0x0) {
      (**(code **)(param_1 + 0xe))(plVar5,*(undefined8 *)(param_1 + 4));
    }
  }
  else {
    plVar5 = (long *)ft_mem_alloc(uVar1,*(undefined8 *)(param_1 + 6),&local_34);
    uVar6 = (ulong)local_34;
    plVar7 = plVar5;
    if (local_34 != 0) goto LAB_00101630;
  }
  uVar6 = (**(code **)(param_1 + 10))(plVar7,param_2,*(undefined8 *)(param_1 + 4));
  local_34 = (uint)uVar6;
  if (local_34 == 0) {
    plVar5 = *(long **)(param_1 + 2);
    plVar9 = plVar7;
    plVar10 = plVar7;
    if (plVar5 != (long *)0x0) {
      plVar10 = (long *)plVar5[1];
      plVar5[1] = (long)plVar7;
      *plVar10 = (long)plVar7;
      plVar9 = plVar5;
    }
    *plVar7 = (long)plVar9;
    plVar7[1] = (long)plVar10;
    *param_1 = *param_1 + 1;
    *(long **)(param_1 + 2) = plVar7;
    plVar5 = plVar7;
  }
  else {
    if (*(code **)(param_1 + 0xe) != (code *)0x0) {
      (**(code **)(param_1 + 0xe))(plVar7,*(undefined8 *)(param_1 + 4));
    }
    plVar5 = (long *)0x0;
    ft_mem_free(uVar1,plVar7);
    uVar6 = (ulong)local_34;
  }
LAB_00101630:
  *param_3 = plVar5;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FTC_ImageCache_New(undefined8 param_1,undefined8 param_2)

{
  FTC_Manager_RegisterCache(param_1,ftc_basic_image_cache_class,param_2);
  return;
}



ulong FTC_ImageCache_Lookup
                (uint *param_1,ulong *param_2,uint param_3,long *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_RBP;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long in_FS_OFFSET;
  long *local_88;
  long *local_80;
  uint local_78 [2];
  long *local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  undefined8 local_54;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (long *)0x0) {
    uVar10 = 6;
  }
  else {
    *param_4 = 0;
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    uVar4 = *param_2;
    iVar1 = (int)param_2[2];
    local_58 = 1;
    uVar14 = param_2[1];
    plVar5 = *(long **)(param_1 + 0x20);
    local_54 = 0;
    local_70 = plVar5;
    local_78[0] = param_3;
    local_68 = uVar4;
    local_60 = uVar14;
    local_48 = iVar1;
    if (plVar5 != (long *)0x0) {
      do {
        if ((((uVar4 == local_70[5]) && (uVar14 == local_70[6])) && ((int)local_70[7] != 0)) &&
           (iVar1 == (int)local_70[9])) {
          if (local_70 != plVar5) {
            lVar6 = *local_70;
            plVar15 = (long *)local_70[1];
            *plVar15 = lVar6;
            *(long **)(lVar6 + 8) = plVar15;
            puVar7 = (undefined8 *)plVar5[1];
            *puVar7 = local_70;
            plVar5[1] = (long)local_70;
            *local_70 = (long)plVar5;
            local_70[1] = (long)puVar7;
            *(long **)(param_1 + 0x20) = local_70;
          }
          goto LAB_0010185c;
        }
        local_70 = (long *)*local_70;
      } while (plVar5 != local_70);
    }
    uVar10 = FTC_MruList_New(param_1 + 0x1e,local_78,&local_88);
    local_70 = local_88;
    if ((int)uVar10 == 0) {
LAB_0010185c:
      plVar5 = local_70;
      iVar2 = (int)local_70[2];
      lVar6 = *(long *)(param_1 + 4);
      uVar3 = *param_1;
      *(int *)(local_70 + 2) = iVar2 + 1;
      uVar14 = (uVar4 >> 3 ^ uVar4 << 7) + (uVar14 & 0xffffffff) + (ulong)param_3 +
               (ulong)(uint)(iVar1 * 0x1f) + (ulong)(uint)((int)(uVar14 >> 0x20) * 7);
      uVar10 = (ulong)(param_1[1] & (uint)uVar14);
      if (uVar3 <= uVar10) {
        uVar10 = param_1[1] >> 1 & uVar14;
      }
      plVar15 = (long *)(lVar6 + uVar10 * 8);
      local_80 = (long *)*plVar15;
      local_88 = local_70;
      if (local_80 != (long *)0x0) {
        bVar9 = false;
        plVar11 = local_80;
        plVar12 = plVar15;
        do {
          if (((plVar11[3] == uVar14) && (local_70 == (long *)plVar11[5])) &&
             (*(uint *)(plVar11 + 6) == local_78[0])) {
            plVar13 = local_80;
            if (bVar9) {
              plVar13 = unaff_RBP;
            }
            if (plVar11 != local_80) {
              *plVar12 = plVar11[2];
              plVar11[2] = *plVar15;
              *plVar15 = (long)plVar11;
            }
            lVar6 = *(long *)(param_1 + 0x16);
            plVar5 = *(long **)(lVar6 + 0x10);
            if (plVar5 != plVar11) {
              lVar8 = *plVar11;
              plVar15 = (long *)plVar11[1];
              *plVar15 = lVar8;
              *(long **)(lVar8 + 8) = plVar15;
              puVar7 = (undefined8 *)plVar5[1];
              *puVar7 = plVar11;
              plVar5[1] = (long)plVar11;
              *plVar11 = (long)plVar5;
              plVar11[1] = (long)puVar7;
              *(long **)(lVar6 + 0x10) = plVar11;
            }
            *(int *)(local_70 + 2) = iVar2;
            local_80 = plVar13;
            if (iVar2 == 0) {
              FTC_MruList_Remove(param_1 + 0x1e,local_70);
            }
            *param_4 = plVar13[7];
            if (param_5 == (undefined8 *)0x0) goto LAB_001019a7;
            goto LAB_0010199f;
          }
          unaff_RBP = (long *)plVar11[2];
          plVar12 = plVar11 + 2;
          bVar9 = true;
          plVar11 = unaff_RBP;
        } while (unaff_RBP != (long *)0x0);
      }
      uVar10 = FTC_Cache_NewNode(param_1,uVar14,local_78,&local_80);
      plVar13 = local_80;
      plVar15 = plVar5 + 2;
      *(int *)plVar15 = (int)*plVar15 + -1;
      if ((int)*plVar15 == 0) {
        FTC_MruList_Remove(param_1 + 0x1e,plVar5);
        uVar10 = uVar10 & 0xffffffff;
      }
      if ((int)uVar10 == 0) {
        *param_4 = plVar13[7];
        if (param_5 != (undefined8 *)0x0) {
LAB_0010199f:
          *param_5 = plVar13;
          *(short *)((long)plVar13 + 0x22) = *(short *)((long)plVar13 + 0x22) + 1;
        }
LAB_001019a7:
        uVar10 = 0;
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



ulong FTC_ImageCache_LookupScaler
                (uint *param_1,ulong *param_2,int param_3,uint param_4,long *param_5,
                undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_RBP;
  long *plVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long *local_88;
  long *local_80;
  uint local_78 [2];
  long *local_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong uStack_50;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = 6;
  bVar9 = param_5 == (long *)0x0 || param_2 == (ulong *)0x0;
  if (param_5 != (long *)0x0 && param_2 != (ulong *)0x0) {
    *param_5 = 0;
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = 0;
    }
    local_68 = *param_2;
    uVar10 = param_2[1];
    uVar2 = *param_2;
    uVar15 = 0;
    uVar12 = param_2[2];
    uStack_50 = param_2[3];
    uStack_60._4_4_ = (int)(uVar10 >> 0x20);
    iVar11 = uStack_60._4_4_;
    local_58._0_4_ = (int)uVar12;
    local_58._4_4_ = (int)(uVar12 >> 0x20);
    if ((int)local_58 == 0) {
      plVar3 = *(long **)(param_1 + 0x20);
      uVar15 = (ulong)(uint)(local_58._4_4_ * 0x21 ^ (int)uStack_50 * 0x3d);
    }
    else {
      plVar3 = *(long **)(param_1 + 0x20);
    }
    local_70 = plVar3;
    local_78[0] = param_4;
    uStack_60 = uVar10;
    local_58 = uVar12;
    local_48 = param_3;
    if (plVar3 != (long *)0x0) {
      do {
        if (((((uVar2 == local_70[5]) && (local_70[6] == uVar10)) &&
             (((int)local_70[7] == 0) != ((int)local_58 != 0))) &&
            (((int)local_70[7] != 0 ||
             ((*(int *)((long)local_70 + 0x3c) == local_58._4_4_ &&
              ((int)local_70[8] == (int)uStack_50)))))) && (param_3 == (int)local_70[9])) {
          if (local_70 != plVar3) {
            lVar4 = *local_70;
            plVar5 = (long *)local_70[1];
            *plVar5 = lVar4;
            *(long **)(lVar4 + 8) = plVar5;
            puVar6 = (undefined8 *)plVar3[1];
            *puVar6 = local_70;
            plVar3[1] = (long)local_70;
            *local_70 = (long)plVar3;
            local_70[1] = (long)puVar6;
            *(long **)(param_1 + 0x20) = local_70;
          }
          goto LAB_00101c00;
        }
        local_70 = (long *)*local_70;
      } while (plVar3 != local_70);
    }
    uVar12 = FTC_MruList_New(param_1 + 0x1e,local_78,&local_88);
    local_70 = local_88;
    if ((int)uVar12 == 0) {
LAB_00101c00:
      plVar3 = local_70;
      iVar1 = (int)local_70[2];
      lVar4 = *(long *)(param_1 + 4);
      *(int *)(local_70 + 2) = iVar1 + 1;
      uVar15 = (uVar2 >> 3 ^ uVar2 << 7) + (ulong)(uint)(iVar11 * 7) + (uVar10 & 0xffffffff) +
               (ulong)param_4 + (ulong)(uint)(param_3 * 0x1f) + uVar15;
      uVar12 = (ulong)(param_1[1] & (uint)uVar15);
      if (*param_1 <= uVar12) {
        uVar12 = param_1[1] >> 1 & uVar15;
      }
      plVar13 = (long *)(lVar4 + uVar12 * 8);
      local_80 = (long *)*plVar13;
      plVar5 = plVar13;
      plVar7 = local_80;
      while (local_88 = local_70, plVar7 != (long *)0x0) {
        if (((plVar7[3] == uVar15) && (local_70 == (long *)plVar7[5])) &&
           (*(uint *)(plVar7 + 6) == local_78[0])) {
          plVar14 = local_80;
          if (bVar9) {
            plVar14 = unaff_RBP;
          }
          if (local_80 != plVar7) {
            *plVar5 = plVar7[2];
            plVar7[2] = *plVar13;
            *plVar13 = (long)plVar7;
          }
          lVar4 = *(long *)(param_1 + 0x16);
          plVar3 = *(long **)(lVar4 + 0x10);
          if (plVar3 != plVar7) {
            lVar8 = *plVar7;
            plVar5 = (long *)plVar7[1];
            *plVar5 = lVar8;
            *(long **)(lVar8 + 8) = plVar5;
            puVar6 = (undefined8 *)plVar3[1];
            *puVar6 = plVar7;
            plVar3[1] = (long)plVar7;
            *plVar7 = (long)plVar3;
            plVar7[1] = (long)puVar6;
            *(long **)(lVar4 + 0x10) = plVar7;
          }
          *(int *)(local_70 + 2) = iVar1;
          local_80 = plVar14;
          if (iVar1 == 0) {
            FTC_MruList_Remove(param_1 + 0x1e,local_70);
          }
          goto LAB_00101d38;
        }
        plVar5 = plVar7 + 2;
        bVar9 = true;
        plVar7 = (long *)plVar7[2];
        unaff_RBP = plVar7;
      }
      uVar12 = FTC_Cache_NewNode(param_1,uVar15,local_78,&local_80);
      plVar14 = local_80;
      plVar5 = plVar3 + 2;
      *(int *)plVar5 = (int)*plVar5 + -1;
      if ((int)*plVar5 == 0) {
        FTC_MruList_Remove(param_1 + 0x1e,plVar3);
        uVar12 = uVar12 & 0xffffffff;
      }
      if ((int)uVar12 == 0) {
LAB_00101d38:
        *param_5 = plVar14[7];
        if (param_6 != (undefined8 *)0x0) {
          *param_6 = plVar14;
          *(short *)((long)plVar14 + 0x22) = *(short *)((long)plVar14 + 0x22) + 1;
        }
        uVar12 = 0;
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



void FTC_SBitCache_New(undefined8 param_1,undefined8 param_2)

{
  FTC_Manager_RegisterCache(param_1,ftc_basic_sbit_cache_class,param_2);
  return;
}



ulong FTC_SBitCache_Lookup
                (uint *param_1,ulong *param_2,uint param_3,long *param_4,undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long in_FS_OFFSET;
  uint *local_c0;
  long *local_a0;
  char local_89;
  long *local_88;
  long *local_80;
  uint local_78 [2];
  long *local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  undefined8 local_54;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 == (long *)0x0) {
    uVar10 = 6;
    goto LAB_0010217a;
  }
  *param_4 = 0;
  uVar2 = *param_2;
  uVar11 = param_2[1];
  local_58 = 1;
  iVar9 = (int)param_2[2];
  plVar3 = *(long **)(param_1 + 0x20);
  local_54 = 0;
  local_70 = plVar3;
  local_78[0] = param_3;
  local_68 = uVar2;
  local_60 = uVar11;
  local_48 = iVar9;
  if (plVar3 != (long *)0x0) {
    do {
      if ((((uVar2 == local_70[5]) && (local_70[6] == uVar11)) && ((int)local_70[7] != 0)) &&
         (iVar9 == (int)local_70[9])) {
        if (local_70 != plVar3) {
          lVar4 = *local_70;
          plVar15 = (long *)local_70[1];
          *plVar15 = lVar4;
          *(long **)(lVar4 + 8) = plVar15;
          puVar5 = (undefined8 *)plVar3[1];
          *puVar5 = local_70;
          plVar3[1] = (long)local_70;
          *local_70 = (long)plVar3;
          local_70[1] = (long)puVar5;
          *(long **)(param_1 + 0x20) = local_70;
        }
        goto LAB_00101ff0;
      }
      local_70 = (long *)*local_70;
    } while (plVar3 != local_70);
  }
  uVar10 = FTC_MruList_New(param_1 + 0x1e,local_78,&local_88);
  local_70 = local_88;
  if ((int)uVar10 != 0) goto LAB_0010217a;
LAB_00101ff0:
  plVar3 = local_70;
  local_c0 = local_78;
  uVar1 = *param_1;
  *(int *)(local_70 + 2) = (int)local_70[2] + 1;
  local_89 = '\0';
  uVar10 = (uVar2 >> 3 ^ uVar2 << 7) + (uVar11 & 0xffffffff) + (ulong)(param_3 >> 4) +
           (ulong)(uint)(iVar9 * 0x1f) + (ulong)(uint)((int)(uVar11 >> 0x20) * 7);
  uVar11 = (ulong)(param_1[1] & (uint)uVar10);
  if (uVar1 <= uVar11) {
    uVar11 = param_1[1] >> 1 & uVar10;
  }
  local_a0 = (long *)(*(long *)(param_1 + 4) + uVar11 * 8);
  plVar15 = (long *)*local_a0;
  local_88 = local_70;
  local_80 = plVar15;
  if (plVar15 != (long *)0x0) {
    plVar14 = local_a0;
    do {
      if ((plVar15[3] == uVar10) &&
         (local_80 = plVar15, cVar8 = ftc_snode_compare(plVar15,local_c0,param_1,&local_89),
         plVar13 = local_80, cVar8 != '\0')) {
        if (local_89 == '\0') {
          plVar12 = (long *)*local_a0;
          goto LAB_0010223a;
        }
        uVar11 = (ulong)(param_1[1] & (uint)uVar10);
        if (*param_1 <= uVar11) {
          uVar11 = param_1[1] >> 1 & uVar10;
        }
        local_a0 = (long *)(*(long *)(param_1 + 4) + uVar11 * 8);
        plVar12 = (long *)*local_a0;
        plVar7 = plVar12;
        if (plVar15 != plVar12) goto LAB_00102120;
        goto LAB_00102256;
      }
      plVar14 = plVar15 + 2;
      plVar15 = (long *)plVar15[2];
      local_80 = plVar15;
    } while (plVar15 != (long *)0x0);
  }
LAB_00102128:
  uVar10 = FTC_Cache_NewNode(param_1,uVar10,local_c0,&local_80);
  plVar13 = local_80;
  plVar15 = plVar3 + 2;
  *(int *)plVar15 = (int)*plVar15 + -1;
  iVar9 = (int)uVar10;
  if ((int)*plVar15 == 0) {
    FTC_MruList_Remove(param_1 + 0x1e,plVar3);
    uVar10 = uVar10 & 0xffffffff;
  }
  if (iVar9 != 0) goto LAB_0010217a;
  goto LAB_00102150;
  while (plVar7 = (long *)plVar14[2], plVar15 != (long *)plVar14[2]) {
LAB_00102120:
    plVar14 = plVar7;
    if (plVar14 == (long *)0x0) goto LAB_00102128;
  }
  plVar14 = plVar14 + 2;
LAB_0010223a:
  if (plVar15 != plVar12) {
    *plVar14 = plVar15[2];
    plVar15[2] = *local_a0;
    *local_a0 = (long)plVar15;
  }
LAB_00102256:
  lVar4 = *(long *)(param_1 + 0x16);
  plVar14 = *(long **)(lVar4 + 0x10);
  iVar9 = (int)plVar3[2] + -1;
  if (plVar15 != plVar14) {
    lVar6 = *plVar15;
    plVar12 = (long *)plVar15[1];
    *plVar12 = lVar6;
    *(long **)(lVar6 + 8) = plVar12;
    puVar5 = (undefined8 *)plVar14[1];
    *puVar5 = plVar15;
    plVar14[1] = (long)plVar15;
    *plVar15 = (long)plVar14;
    plVar15[1] = (long)puVar5;
    *(long **)(lVar4 + 0x10) = plVar15;
  }
  *(int *)(plVar3 + 2) = iVar9;
  if (iVar9 == 0) {
    FTC_MruList_Remove(param_1 + 0x1e,plVar3);
  }
LAB_00102150:
  *param_4 = (long)(plVar13 + (ulong)(param_3 - (int)plVar13[6]) * 3 + 8);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = plVar13;
    *(short *)((long)plVar13 + 0x22) = *(short *)((long)plVar13 + 0x22) + 1;
  }
  uVar10 = 0;
LAB_0010217a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



ulong FTC_SBitCache_LookupScaler
                (uint *param_1,ulong *param_2,int param_3,uint param_4,long *param_5,
                undefined8 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long in_FS_OFFSET;
  char local_89;
  long *local_88;
  long *local_80;
  uint local_78 [2];
  long *local_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong uStack_50;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if ((param_5 == (long *)0x0) || (param_2 == (ulong *)0x0)) {
    uVar11 = 6;
    goto LAB_00102657;
  }
  *param_5 = 0;
  uVar11 = param_2[2];
  uStack_50 = param_2[3];
  uVar15 = 0;
  local_68 = *param_2;
  uVar7 = param_2[1];
  uVar2 = *param_2;
  local_58._0_4_ = (int)uVar11;
  uStack_60._4_4_ = (int)(uVar7 >> 0x20);
  iVar10 = uStack_60._4_4_;
  local_58._4_4_ = (int)(uVar11 >> 0x20);
  if ((int)local_58 == 0) {
    uVar15 = (ulong)(uint)(local_58._4_4_ * 0x21 ^ (int)uStack_50 * 0x3d);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  local_70 = plVar3;
  local_78[0] = param_4;
  uStack_60 = uVar7;
  local_58 = uVar11;
  local_48 = param_3;
  if (plVar3 != (long *)0x0) {
    do {
      if (((((uVar2 == local_70[5]) && (local_70[6] == uVar7)) &&
           (((int)local_70[7] == 0) != ((int)local_58 != 0))) &&
          (((int)local_70[7] != 0 ||
           ((*(int *)((long)local_70 + 0x3c) == local_58._4_4_ &&
            ((int)local_70[8] == (int)uStack_50)))))) && (param_3 == (int)local_70[9])) {
        if (local_70 != plVar3) {
          lVar4 = *local_70;
          plVar16 = (long *)local_70[1];
          *plVar16 = lVar4;
          *(long **)(lVar4 + 8) = plVar16;
          puVar5 = (undefined8 *)plVar3[1];
          *puVar5 = local_70;
          plVar3[1] = (long)local_70;
          *local_70 = (long)plVar3;
          local_70[1] = (long)puVar5;
          *(long **)(param_1 + 0x20) = local_70;
        }
        goto LAB_0010243c;
      }
      local_70 = (long *)*local_70;
    } while (plVar3 != local_70);
  }
  uVar11 = FTC_MruList_New(param_1 + 0x1e,local_78,&local_88);
  local_70 = local_88;
  if ((int)uVar11 != 0) goto LAB_00102657;
LAB_0010243c:
  plVar3 = local_70;
  uVar1 = *param_1;
  *(int *)(local_70 + 2) = (int)local_70[2] + 1;
  local_89 = '\0';
  uVar15 = (uVar2 >> 3 ^ uVar2 << 7) + (ulong)(uint)(iVar10 * 7) + (uVar7 & 0xffffffff) +
           (ulong)(param_4 >> 4) + (ulong)(uint)(param_3 * 0x1f) + uVar15;
  uVar11 = (ulong)(param_1[1] & (uint)uVar15);
  if (uVar1 <= uVar11) {
    uVar11 = param_1[1] >> 1 & uVar15;
  }
  plVar12 = (long *)(*(long *)(param_1 + 4) + uVar11 * 8);
  plVar16 = (long *)*plVar12;
  local_88 = local_70;
  local_80 = plVar16;
  if (plVar16 != (long *)0x0) {
    plVar13 = plVar12;
    do {
      if ((plVar16[3] == uVar15) &&
         (local_80 = plVar16, cVar9 = ftc_snode_compare(plVar16,local_78,param_1,&local_89),
         plVar14 = local_80, cVar9 != '\0')) {
        if (local_89 == '\0') {
          if (plVar16 == (long *)*plVar12) goto LAB_001026db;
          goto LAB_001026c9;
        }
        uVar11 = (ulong)(param_1[1] & (uint)uVar15);
        if (*param_1 <= uVar11) {
          uVar11 = param_1[1] >> 1 & uVar15;
        }
        plVar12 = (long *)(uVar11 * 8 + *(long *)(param_1 + 4));
        plVar8 = (long *)*plVar12;
        if ((long *)*plVar12 == plVar16) goto LAB_001026db;
        goto LAB_00102580;
      }
      plVar13 = plVar16 + 2;
      plVar16 = (long *)plVar16[2];
      local_80 = plVar16;
    } while (plVar16 != (long *)0x0);
  }
LAB_00102588:
  uVar11 = FTC_Cache_NewNode(param_1,uVar15,local_78,&local_80);
  plVar14 = local_80;
  plVar16 = plVar3 + 2;
  *(int *)plVar16 = (int)*plVar16 + -1;
  if ((int)*plVar16 == 0) {
    FTC_MruList_Remove(param_1 + 0x1e,plVar3);
    uVar11 = uVar11 & 0xffffffff;
  }
  if ((int)uVar11 != 0) goto LAB_00102657;
  goto LAB_001025bc;
  while (plVar8 = (long *)plVar13[2], (long *)plVar13[2] != plVar16) {
LAB_00102580:
    plVar13 = plVar8;
    if (plVar13 == (long *)0x0) goto LAB_00102588;
  }
  plVar13 = plVar13 + 2;
LAB_001026c9:
  *plVar13 = plVar16[2];
  plVar16[2] = *plVar12;
  *plVar12 = (long)plVar16;
LAB_001026db:
  lVar4 = *(long *)(param_1 + 0x16);
  plVar12 = *(long **)(lVar4 + 0x10);
  iVar10 = (int)plVar3[2] + -1;
  if (plVar12 != plVar16) {
    lVar6 = *plVar16;
    plVar13 = (long *)plVar16[1];
    *plVar13 = lVar6;
    *(long **)(lVar6 + 8) = plVar13;
    puVar5 = (undefined8 *)plVar12[1];
    *puVar5 = plVar16;
    plVar12[1] = (long)plVar16;
    *plVar16 = (long)plVar12;
    plVar16[1] = (long)puVar5;
    *(long **)(lVar4 + 0x10) = plVar16;
  }
  *(int *)(plVar3 + 2) = iVar10;
  if (iVar10 == 0) {
    FTC_MruList_Remove(param_1 + 0x1e,plVar3);
  }
LAB_001025bc:
  *param_5 = (long)(plVar14 + (ulong)(param_4 - (int)plVar14[6]) * 3 + 8);
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = plVar14;
    *(short *)((long)plVar14 + 0x22) = *(short *)((long)plVar14 + 0x22) + 1;
  }
  uVar11 = 0;
LAB_00102657:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



void FTC_CMapCache_New(undefined8 param_1,undefined8 param_2)

{
  FTC_Manager_RegisterCache(param_1,ftc_cmap_cache_class,param_2);
  return;
}



undefined8 FTC_Manager_LookupSize(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == (long *)0x0) || (param_2 == (long *)0x0)) {
    uVar5 = 6;
  }
  else {
    *param_3 = 0;
    if (param_1 == 0) {
      uVar5 = 0x27;
    }
    else {
      plVar1 = *(long **)(param_1 + 0x108);
      if (plVar1 != (long *)0x0) {
        plVar6 = plVar1;
        do {
          if ((((plVar6[3] == *param_2) && (plVar6[4] == param_2[1])) &&
              (((int)plVar6[5] == 0) != ((int)param_2[2] != 0))) &&
             (((int)plVar6[5] != 0 ||
              ((*(int *)((long)plVar6 + 0x2c) == *(int *)((long)param_2 + 0x14) &&
               ((int)plVar6[6] == (int)param_2[3])))))) {
            FT_Activate_Size(plVar6[2]);
            local_38 = plVar6;
            if ((plVar1 != plVar6) && (plVar1 = *(long **)(param_1 + 0x108), plVar6 != plVar1)) {
              lVar2 = *plVar6;
              plVar3 = (long *)plVar6[1];
              *plVar3 = lVar2;
              *(long **)(lVar2 + 8) = plVar3;
              puVar4 = (undefined8 *)plVar1[1];
              *puVar4 = plVar6;
              plVar1[1] = (long)plVar6;
              *plVar6 = (long)plVar1;
              plVar6[1] = (long)puVar4;
              *(long **)(param_1 + 0x108) = plVar6;
            }
            goto LAB_001028a0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar1 != plVar6);
      }
      uVar5 = FTC_MruList_New(param_1 + 0x100,param_2,&local_38);
      if ((int)uVar5 == 0) {
LAB_001028a0:
        *param_3 = local_38[2];
        uVar5 = 0;
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8
ftc_basic_family_load_glyph(long param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FTC_Manager_LookupSize(*(undefined8 *)(param_3 + 0x58),param_1 + 0x28,&local_40);
  if ((int)uVar3 == 0) {
    lVar2 = *local_40;
    uVar3 = FT_Load_Glyph(lVar2,param_2,*(undefined4 *)(param_1 + 0x48));
    if ((int)uVar3 == 0) {
      lVar2 = *(long *)(lVar2 + 0x98);
      iVar1 = *(int *)(lVar2 + 0x90);
      if ((iVar1 == 0x62697473 || iVar1 == 0x6f75746c) || (uVar3 = 6, iVar1 == 0x53564720)) {
        uVar3 = FT_Get_Glyph(lVar2,&local_38);
        if ((int)uVar3 == 0) {
          *param_4 = local_38;
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ftc_basic_family_load_bitmap
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FTC_Manager_LookupSize(param_3,param_1 + 0x28,&local_38);
  if (iVar2 == 0) {
    uVar1 = *local_38;
    iVar2 = FT_Load_Glyph(uVar1,param_2,*(uint *)(param_1 + 0x48) | 4);
    if (iVar2 == 0) {
      *param_4 = uVar1;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FTC_Manager_LookupFace(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (long *)0x0) {
    uVar6 = 6;
  }
  else {
    *param_3 = 0;
    if (param_1 == 0) {
      uVar6 = 0x27;
    }
    else {
      plVar1 = *(long **)(param_1 + 0xc0);
      plVar5 = plVar1;
      if (plVar1 != (long *)0x0) {
        do {
          if (param_2 == plVar5[2]) {
            local_18 = plVar5;
            if (plVar5 != plVar1) {
              lVar2 = *plVar5;
              plVar3 = (long *)plVar5[1];
              *plVar3 = lVar2;
              *(long **)(lVar2 + 8) = plVar3;
              puVar4 = (undefined8 *)plVar1[1];
              *puVar4 = plVar5;
              plVar1[1] = (long)plVar5;
              *plVar5 = (long)plVar1;
              plVar5[1] = (long)puVar4;
              *(long **)(param_1 + 0xc0) = plVar5;
            }
            goto LAB_00102ac8;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar1 != plVar5);
      }
      uVar6 = FTC_MruList_New(param_1 + 0xb8,param_2,&local_18);
      if ((int)uVar6 == 0) {
LAB_00102ac8:
        *param_3 = local_18[3];
        uVar6 = 0;
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined4 ftc_basic_family_get_count(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FTC_Manager_LookupFace(param_2,*(undefined8 *)(param_1 + 0x28),&local_18);
  uVar2 = 0;
  if ((iVar1 == 0) && (local_18 != 0)) {
    uVar2 = *(undefined4 *)(local_18 + 0x20);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong FTC_CMapCache_Lookup(uint *param_1,ulong param_2,int param_3,uint param_4,long *param_5)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long in_FS_OFFSET;
  long *local_60;
  ulong local_58;
  int local_50;
  uint local_4c;
  long local_40;
  
  lVar16 = (long)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0) {
    lVar16 = 0;
  }
  if (param_1 != (uint *)0x0) {
    iVar15 = (int)lVar16;
    uVar13 = (param_2 >> 3 ^ param_2 << 7) + (ulong)(param_4 >> 7) + (ulong)(uint)(iVar15 * 0xd3);
    uVar8 = (ulong)(param_1[1] & (uint)uVar13);
    if (*param_1 <= uVar8) {
      uVar8 = param_1[1] >> 1 & uVar13;
    }
    plVar9 = (long *)(*(long *)(param_1 + 4) + uVar8 * 8);
    plVar2 = (long *)*plVar9;
    local_60 = plVar2;
    local_58 = param_2;
    local_50 = iVar15;
    local_4c = param_4;
    if (plVar2 != (long *)0x0) {
      bVar6 = false;
      plVar11 = plVar9;
      plVar12 = plVar2;
      do {
        if ((((plVar12[3] == uVar13) && (param_2 == plVar12[5])) && (iVar15 == (int)plVar12[6])) &&
           (uVar14 = param_4 - *(int *)((long)plVar12 + 0x34), uVar8 = (ulong)uVar14, uVar14 < 0x80)
           ) {
          if (bVar6) {
            local_60 = param_5;
          }
          if (plVar12 != plVar2) {
            *plVar11 = plVar12[2];
            plVar12[2] = *plVar9;
            *plVar9 = (long)plVar12;
          }
          lVar3 = *(long *)(param_1 + 0x16);
          plVar2 = *(long **)(lVar3 + 0x10);
          if (plVar2 != plVar12) {
            lVar4 = *plVar12;
            plVar9 = (long *)plVar12[1];
            *plVar9 = lVar4;
            *(long **)(lVar4 + 8) = plVar9;
            puVar5 = (undefined8 *)plVar2[1];
            *puVar5 = plVar12;
            plVar2[1] = (long)plVar12;
            *plVar12 = (long)plVar2;
            plVar12[1] = (long)puVar5;
            *(long **)(lVar3 + 0x10) = plVar12;
          }
          goto LAB_00102d10;
        }
        plVar11 = plVar12 + 2;
        plVar12 = (long *)plVar12[2];
        bVar6 = true;
        param_5 = plVar12;
      } while (plVar12 != (long *)0x0);
    }
    iVar7 = FTC_Cache_NewNode(param_1,uVar13,&local_58,&local_60);
    if ((iVar7 == 0) &&
       (uVar14 = param_4 - *(int *)((long)local_60 + 0x34), uVar8 = (ulong)uVar14,
       plVar12 = local_60, uVar14 < 0x80)) {
LAB_00102d10:
      uVar1 = *(ushort *)((long)plVar12 + uVar8 * 2 + 0x38);
      uVar8 = (ulong)uVar1;
      if (uVar1 != 0xffff) goto LAB_00102d1d;
      iVar7 = FTC_Manager_LookupFace(*(undefined8 *)(param_1 + 0x16),plVar12[5],&local_60);
      plVar2 = local_60;
      if (iVar7 == 0) {
        if (iVar15 < (int)local_60[9]) {
          lVar3 = local_60[0x15];
          if (param_3 < 0) {
            uVar8 = FT_Get_Char_Index(local_60,param_4);
            uVar10 = (undefined2)uVar8;
          }
          else {
            local_60[0x15] = *(long *)(local_60[10] + lVar16 * 8);
            uVar8 = FT_Get_Char_Index(local_60,param_4);
            plVar2[0x15] = lVar3;
            uVar10 = (undefined2)uVar8;
          }
        }
        else {
          uVar10 = 0;
          uVar8 = 0;
        }
        *(undefined2 *)
         ((long)plVar12 + (ulong)(param_4 - *(int *)((long)plVar12 + 0x34)) * 2 + 0x38) = uVar10;
        goto LAB_00102d1d;
      }
    }
  }
  uVar8 = 0;
LAB_00102d1d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



int ftc_scaler_lookup_size(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  iVar1 = FTC_Manager_LookupFace(param_1,*param_2,&local_40);
  uVar2 = local_38;
  if ((iVar1 == 0) && (iVar1 = FT_New_Size(local_40,&local_38), uVar2 = local_38, iVar1 == 0)) {
    FT_Activate_Size();
    if (*(int *)(param_2 + 2) == 0) {
      iVar1 = FT_Set_Char_Size(local_40,*(undefined4 *)(param_2 + 1),
                               *(undefined4 *)((long)param_2 + 0xc),
                               *(undefined4 *)((long)param_2 + 0x14),*(undefined4 *)(param_2 + 3));
    }
    else {
      iVar1 = FT_Set_Pixel_Sizes(local_40,*(undefined4 *)(param_2 + 1),
                                 *(undefined4 *)((long)param_2 + 0xc));
    }
    uVar2 = local_38;
    if (iVar1 != 0) {
      FT_Done_Size();
      uVar2 = 0;
    }
  }
  *param_3 = uVar2;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void ftc_size_node_reset(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FT_Done_Size(*(undefined8 *)(param_1 + 0x10));
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  ftc_scaler_lookup_size(param_3,param_2,param_1 + 0x10);
  return;
}



void ftc_size_node_init(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  ftc_scaler_lookup_size(param_3,param_2,param_1 + 0x10);
  return;
}



int FTC_Manager_New(undefined8 *param_1,int param_2,int param_3,long param_4,long param_5,
                   undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    local_44 = 0x21;
  }
  else if ((param_7 == (undefined8 *)0x0) || (param_5 == 0)) {
    local_44 = 6;
  }
  else {
    uVar1 = *param_1;
    puVar11 = (undefined8 *)ft_mem_qalloc(uVar1,0x158,&local_44);
    uVar10 = ftc_size_list_class._24_8_;
    uVar9 = ftc_size_list_class._16_8_;
    uVar8 = ftc_size_list_class._8_8_;
    uVar7 = ftc_size_list_class._0_8_;
    uVar6 = ftc_face_list_class._32_8_;
    uVar5 = ftc_face_list_class._24_8_;
    uVar4 = ftc_face_list_class._16_8_;
    uVar3 = ftc_face_list_class._8_8_;
    uVar2 = ftc_face_list_class._0_8_;
    if (local_44 == 0) {
      if (param_2 == 0) {
        param_2 = 2;
      }
      if (param_3 == 0) {
        param_3 = 4;
      }
      if (param_4 == 0) {
        param_4 = 200000;
      }
      puVar11[4] = 0;
      puVar11[0x1e] = uVar6;
      uVar6 = ftc_size_list_class._32_8_;
      puVar11[3] = param_4;
      puVar11[0x2a] = param_5;
      puVar11[0x29] = param_6;
      *(undefined4 *)(puVar11 + 0x17) = 0;
      *(int *)((long)puVar11 + 0xbc) = param_2;
      puVar11[0x18] = 0;
      puVar11[0x19] = puVar11;
      puVar11[0x1f] = uVar1;
      *(undefined4 *)(puVar11 + 0x20) = 0;
      *(int *)((long)puVar11 + 0x104) = param_3;
      puVar11[0x21] = 0;
      puVar11[0x27] = uVar6;
      puVar11[0x22] = puVar11;
      puVar11[0x28] = uVar1;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 5) = 0;
      *(undefined4 *)(puVar11 + 0x16) = 0;
      *puVar11 = param_1;
      puVar11[1] = uVar1;
      puVar11[0x1a] = uVar2;
      puVar11[0x1b] = uVar3;
      puVar11[0x1c] = uVar4;
      puVar11[0x1d] = uVar5;
      puVar11[0x23] = uVar7;
      puVar11[0x24] = uVar8;
      puVar11[0x25] = uVar9;
      puVar11[0x26] = uVar10;
      *param_7 = puVar11;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FTC_Manager_Done(undefined1 (*param_1) [16])

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 == (undefined1 (*) [16])0x0) {
    return;
  }
  if (*(long *)*param_1 != 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    if (*(int *)param_1[0xb] != 0) {
      plVar3 = (long *)(param_1[3] + (ulong)(*(int *)param_1[0xb] - 1) * 8);
      do {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x50))(lVar2);
          ft_mem_free(uVar1,lVar2);
          *plVar3 = 0;
        }
        plVar3 = plVar3 + -1;
      } while (plVar3 != (long *)(param_1[2] + 8));
    }
    lVar2 = *(long *)(param_1[0x10] + 8);
    *(undefined4 *)param_1[0xb] = 0;
    while (lVar2 != 0) {
      FTC_MruList_Remove(param_1 + 0x10);
      lVar2 = *(long *)(param_1[0x10] + 8);
    }
    lVar2 = *(long *)param_1[0xc];
    while (lVar2 != 0) {
      FTC_MruList_Remove(param_1[0xb] + 8);
      lVar2 = *(long *)param_1[0xc];
    }
    *param_1 = (undefined1  [16])0x0;
    ft_mem_free(uVar1,param_1);
    return;
  }
  return;
}



void FTC_Manager_Reset(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1 == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x108);
  if (plVar5 != (long *)0x0) {
    do {
      plVar4 = (long *)*plVar5;
      plVar1 = (long *)plVar5[1];
      uVar2 = *(undefined8 *)(param_1 + 0x140);
      *plVar1 = (long)plVar4;
      plVar4[1] = (long)plVar1;
      if (plVar4 == plVar5) {
        plVar4 = (long *)0;
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
      *(long **)(param_1 + 0x108) = plVar4;
      if (*(code **)(param_1 + 0x138) != (code *)0x0) {
        (**(code **)(param_1 + 0x138))(plVar5,*(undefined8 *)(param_1 + 0x110));
      }
      ft_mem_free(uVar2,plVar5);
      plVar5 = *(long **)(param_1 + 0x108);
    } while (plVar5 != (long *)0x0);
  }
  lVar3 = *(long *)(param_1 + 0xc0);
  while (lVar3 != 0) {
    FTC_MruList_Remove(param_1 + 0xb8);
    lVar3 = *(long *)(param_1 + 0xc0);
  }
  FTC_Manager_FlushN(param_1,*(undefined4 *)(param_1 + 0x28));
  return;
}



void FTC_Manager_RemoveFaceID(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  char cVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_68;
  long local_58;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0xc0);
    if (lVar2 != 0) {
      lVar9 = *(long *)(lVar2 + 8);
      do {
        while (lVar3 = *(long *)(lVar9 + 8), param_2 == *(long *)(lVar9 + 0x10)) {
          FTC_MruList_Remove(param_1 + 0xb8,lVar9);
          bVar12 = lVar2 == lVar9;
          lVar9 = lVar3;
          if (bVar12) goto LAB_00103384;
        }
        bVar12 = lVar2 != lVar9;
        lVar9 = lVar3;
      } while (bVar12);
    }
LAB_00103384:
    local_58 = 0;
    if (*(int *)(param_1 + 0xb0) != 0) {
      do {
        puVar4 = *(uint **)(param_1 + 0x30 + local_58 * 8);
        uVar1 = *puVar4;
        lVar2 = *(long *)(puVar4 + 0x16);
        if (uVar1 != 0) {
          local_68 = 0;
          plVar10 = (long *)0x0;
LAB_001033e8:
          plVar11 = (long *)(local_68 + *(long *)(puVar4 + 4));
LAB_001033f8:
          plVar5 = (long *)*plVar11;
          while (plVar6 = plVar5, plVar6 != (long *)0x0) {
            local_41 = 0;
            cVar8 = (**(code **)(puVar4 + 0xc))(plVar6,param_2,puVar4,&local_41);
            if (cVar8 == '\0') goto LAB_001034b8;
            *plVar11 = plVar6[2];
            plVar6[2] = (long)plVar10;
            plVar10 = plVar6;
            plVar5 = (long *)*plVar11;
          }
          local_41 = 0;
          local_68 = local_68 + 8;
          if ((ulong)uVar1 << 3 != local_68) goto LAB_001033e8;
          while (plVar10 != (long *)0x0) {
            plVar11 = (long *)plVar10[2];
            lVar9 = (**(code **)(puVar4 + 8))(plVar10,puVar4);
            plVar5 = (long *)plVar10[1];
            *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) - lVar9;
            plVar6 = (long *)*plVar10;
            plVar7 = *(long **)(lVar2 + 0x10);
            *plVar5 = (long)plVar6;
            plVar6[1] = (long)plVar5;
            if (plVar6 == plVar10) {
              *(undefined8 *)(lVar2 + 0x10) = 0;
            }
            else if (plVar7 == plVar10) {
              *(long **)(lVar2 + 0x10) = plVar6;
            }
            *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
            (**(code **)(puVar4 + 0xe))(plVar10,puVar4);
            *(long *)(puVar4 + 2) = *(long *)(puVar4 + 2) + 1;
            plVar10 = plVar11;
          }
        }
        ftc_cache_resize(puVar4);
        local_58 = local_58 + 1;
      } while ((uint)local_58 < *(uint *)(param_1 + 0xb0));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001034b8:
  plVar11 = plVar6 + 2;
  goto LAB_001033f8;
}



void FTC_Node_Unref(long param_1,long param_2)

{
  if (((param_1 != 0) && (param_2 != 0)) &&
     ((uint)*(ushort *)(param_1 + 0x20) < *(uint *)(param_2 + 0xb0))) {
    *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + -1;
  }
  return;
}


