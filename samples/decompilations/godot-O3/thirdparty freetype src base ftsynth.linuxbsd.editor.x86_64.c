
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FT_GlyphSlot_Oblique(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x90) == 0x6f75746c)) {
    local_38 = __LC0;
    uStack_30 = _UNK_001002a8;
    local_28 = __LC1;
    uStack_20 = _UNK_001002b8;
    FT_Outline_Transform(param_1 + 200,&local_38);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FT_GlyphSlot_Slant(long param_1,undefined8 param_2,long param_3)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x90) == 0x6f75746c)) {
    local_28 = -param_3;
    local_38 = 0x10000;
    local_20 = 0x10000;
    local_30 = param_2;
    FT_Outline_Transform(param_1 + 200,&local_38);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FT_GlyphSlot_AdjustWeight(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x12);
  uVar1 = *param_1;
  if ((iVar2 == 0x6f75746c) || (iVar2 == 0x62697473)) {
    param_2 = (ulong)*(ushort *)(*(long *)(param_1[1] + 0xa0) + 0x18) * param_2;
    lVar3 = param_2 + 0x3ff;
    if (-1 < param_2) {
      lVar3 = param_2;
    }
    param_3 = (ulong)*(ushort *)(*(long *)(param_1[1] + 0xa0) + 0x1a) * param_3;
    uVar4 = lVar3 >> 10;
    lVar3 = param_3 + 0x3ff;
    if (-1 < param_3) {
      lVar3 = param_3;
    }
    uVar5 = lVar3 >> 10;
    if (iVar2 == 0x6f75746c) {
      FT_Outline_EmboldenXY(param_1 + 0x19,uVar4,uVar5);
    }
    else {
      uVar4 = uVar4 & 0xffffffffffffffc0;
      if (uVar4 == 0) {
        uVar4 = 0x40;
      }
      uVar5 = uVar5 & 0xffffffffffffffc0;
      if ((lVar3 >> 0x10) + 0x80000000U >> 0x20 != 0) {
        return;
      }
      iVar2 = FT_GlyphSlot_Own_Bitmap(param_1);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FT_Bitmap_Embolden(uVar1,param_1 + 0x13,uVar4,uVar5);
      if (iVar2 != 0) {
        return;
      }
    }
    if (param_1[0x10] != 0) {
      param_1[0x10] = param_1[0x10] + uVar4;
    }
    if (param_1[0x11] != 0) {
      param_1[0x11] = param_1[0x11] + uVar5;
    }
    param_1[0xd] = param_1[0xd] + uVar5;
    param_1[6] = uVar4 + param_1[6];
    param_1[7] = uVar5 + param_1[7];
    param_1[9] = param_1[9] + uVar5;
    param_1[10] = param_1[10] + uVar4;
    if (*(int *)(param_1 + 0x12) == 0x62697473) {
      *(int *)((long)param_1 + 0xc4) = *(int *)((long)param_1 + 0xc4) + (int)((long)uVar5 >> 6);
    }
  }
  return;
}



void FT_GlyphSlot_Embolden(undefined8 param_1)

{
  FT_GlyphSlot_AdjustWeight(param_1,0xaaa,0xaaa);
  return;
}


