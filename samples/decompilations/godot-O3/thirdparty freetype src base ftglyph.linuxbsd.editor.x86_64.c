
void ft_bitmap_glyph_bbox(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  lVar3 = (long)(*(int *)(param_1 + 0x28) << 6);
  *param_2 = lVar3;
  iVar2 = *(int *)(param_1 + 0x30);
  param_2[2] = (ulong)(uint)(iVar1 << 6) + lVar3;
  lVar3 = (long)(*(int *)(param_1 + 0x2c) << 6);
  param_2[3] = lVar3;
  param_2[1] = lVar3 - (ulong)(uint)(iVar2 << 6);
  return;
}



undefined8 ft_outline_glyph_prepare(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x90) = 0x6f75746c;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 200) = uVar2;
  *(undefined8 *)(param_2 + 0xd0) = uVar3;
  *(undefined8 *)(param_2 + 0xe8) = uVar1;
  *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) & 0xfffffffe;
  *(undefined8 *)(param_2 + 0xd8) = uVar4;
  *(undefined8 *)(param_2 + 0xe0) = uVar5;
  return 0;
}



void ft_bitmap_glyph_copy(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *(undefined8 *)(param_2 + 0x28) = param_1[5];
  FT_Bitmap_Copy(uVar1,param_1 + 6,param_2 + 0x30);
  return;
}



void ft_bitmap_glyph_done(undefined8 *param_1)

{
  FT_Bitmap_Done(*param_1,param_1 + 6);
  return;
}



undefined8 ft_bitmap_glyph_init(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_2 + 0x90) != 0x62697473) {
    return 0x12;
  }
  lVar2 = *(long *)(param_2 + 0x128);
  uVar6 = *param_1;
  param_1[5] = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(uint *)(lVar2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    uVar5 = *(undefined8 *)(param_2 + 0xb0);
    uVar6 = *(undefined8 *)(param_2 + 0xb8);
    param_1[6] = *(undefined8 *)(param_2 + 0x98);
    param_1[7] = uVar3;
    param_1[10] = uVar6;
    param_1[8] = uVar4;
    param_1[9] = uVar5;
    *(uint *)(lVar2 + 8) = uVar1 & 0xfffffffe;
    return 0;
  }
  FT_Bitmap_Init(param_1 + 6);
  uVar6 = FT_Bitmap_Copy(uVar6,param_2 + 0x98,param_1 + 6);
  return uVar6;
}



void ft_outline_glyph_bbox(long param_1)

{
  FT_Outline_Get_CBox(param_1 + 0x28);
  return;
}



int ft_outline_glyph_copy(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FT_Outline_New(*param_1,(int)*(short *)((long)param_1 + 0x2a),(int)*(short *)(param_1 + 5)
                         ,param_2 + 0x28);
  if (iVar1 != 0) {
    return iVar1;
  }
  FT_Outline_Copy(param_1 + 5,param_2 + 0x28);
  return 0;
}



int ft_outline_glyph_init(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 0x12;
  if (*(int *)(param_2 + 0x90) == 0x6f75746c) {
    iVar1 = FT_Outline_New(*param_1,(int)*(short *)(param_2 + 0xca),(int)*(short *)(param_2 + 200),
                           param_1 + 5);
    if (iVar1 == 0) {
      FT_Outline_Copy(param_2 + 200,param_1 + 5);
      return 0;
    }
  }
  return iVar1;
}



void ft_outline_glyph_done(undefined8 *param_1)

{
  FT_Outline_Done(*param_1,param_1 + 5);
  return;
}



int ft_svg_glyph_prepare(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  puVar12 = (undefined8 *)ft_mem_alloc(*(undefined8 *)*param_1,0x80,&local_24);
  if (local_24 == 0) {
    uVar4 = param_1[8];
    uVar5 = param_1[9];
    uVar6 = param_1[10];
    uVar7 = param_1[0xb];
    uVar8 = param_1[0xc];
    uVar9 = param_1[0xd];
    *puVar12 = param_1[5];
    uVar3 = param_1[6];
    puVar12[2] = uVar4;
    puVar12[3] = uVar5;
    uVar4 = param_1[0x10];
    uVar5 = param_1[0x11];
    uVar10 = param_1[0x12];
    uVar11 = param_1[0x13];
    puVar12[1] = uVar3;
    uVar3 = param_1[0xe];
    puVar12[4] = uVar6;
    puVar12[5] = uVar7;
    uVar6 = param_1[0x14];
    uVar7 = param_1[0x15];
    puVar12[8] = uVar3;
    puVar12[6] = uVar8;
    puVar12[7] = uVar9;
    *(undefined4 *)(puVar12 + 9) = *(undefined4 *)(param_1 + 0xf);
    uVar1 = *(undefined2 *)((long)param_1 + 0x7c);
    puVar12[10] = uVar4;
    puVar12[0xb] = uVar5;
    *(undefined2 *)((long)puVar12 + 0x4c) = uVar1;
    uVar2 = *(undefined4 *)(param_1 + 7);
    puVar12[0xc] = uVar10;
    puVar12[0xd] = uVar11;
    puVar12[0xe] = uVar6;
    puVar12[0xf] = uVar7;
    *(undefined4 *)(param_2 + 0x90) = 0x53564720;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined8 **)(param_2 + 0x120) = puVar12;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ft_svg_glyph_transform(long param_1,int *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (int *)0x0) {
    param_2 = (int *)&local_88;
    local_88 = __LC0;
    uStack_80 = _UNK_00101048;
    local_78 = __LC1;
    uStack_70 = _UNK_00101058;
  }
  if (param_3 == (long *)0x0) {
    local_98 = (undefined1  [16])0x0;
    param_3 = (long *)local_98;
  }
  local_48 = *(undefined8 *)param_2;
  uStack_40 = *(undefined8 *)(param_2 + 2);
  local_38 = *(undefined8 *)(param_2 + 4);
  uStack_30 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_1 + 0x80);
  uStack_60 = *(undefined8 *)(param_1 + 0x88);
  local_58 = *(undefined8 *)(param_1 + 0x90);
  uStack_50 = *(undefined8 *)(param_1 + 0x98);
  FT_Matrix_Multiply(&local_48,&local_68);
  lVar3 = (long)*param_2 * (long)*(int *)(param_1 + 0xa0);
  lVar6 = (long)param_2[4] * (long)*(int *)(param_1 + 0xa0);
  lVar4 = (long)param_2[2] * (long)*(int *)(param_1 + 0xa8);
  lVar5 = (long)param_2[6] * (long)*(int *)(param_1 + 0xa8);
  lVar1 = *param_3;
  lVar2 = param_3[1];
  *(undefined8 *)(param_1 + 0x80) = local_68;
  *(undefined8 *)(param_1 + 0x88) = uStack_60;
  *(undefined8 *)(param_1 + 0x90) = local_58;
  *(undefined8 *)(param_1 + 0x98) = uStack_50;
  *(long *)(param_1 + 0xa0) =
       (long)(int)((ulong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) +
       (long)(int)((ulong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + lVar1;
  *(long *)(param_1 + 0xa8) =
       (long)(int)((ulong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) +
       (long)(int)((ulong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + lVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ft_svg_glyph_copy(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  void *__dest;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar11 = 0x12;
  if (*(int *)(param_1 + 2) == 0x53564720) {
    lVar3 = param_1[6];
    iVar11 = 0x25;
    if (lVar3 != 0) {
      uVar5 = param_1[9];
      uVar6 = param_1[0x10];
      uVar7 = param_1[0x11];
      uVar8 = param_1[0x14];
      uVar9 = param_1[0x15];
      uVar4 = *(undefined8 *)*param_1;
      uVar2 = *(undefined4 *)(param_1 + 7);
      *(undefined8 *)(param_2 + 0x40) = param_1[8];
      *(undefined8 *)(param_2 + 0x48) = uVar5;
      uVar5 = param_1[10];
      uVar10 = param_1[0xb];
      *(long *)(param_2 + 0x30) = lVar3;
      *(undefined4 *)(param_2 + 0x38) = uVar2;
      *(undefined8 *)(param_2 + 0x50) = uVar5;
      *(undefined8 *)(param_2 + 0x58) = uVar10;
      uVar5 = param_1[0xd];
      *(undefined8 *)(param_2 + 0x60) = param_1[0xc];
      *(undefined8 *)(param_2 + 0x68) = uVar5;
      *(undefined8 *)(param_2 + 0x70) = param_1[0xe];
      *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0xf);
      uVar1 = *(undefined2 *)((long)param_1 + 0x7c);
      *(undefined8 *)(param_2 + 0x80) = uVar6;
      *(undefined8 *)(param_2 + 0x88) = uVar7;
      uVar5 = param_1[0x12];
      uVar6 = param_1[0x13];
      *(undefined2 *)(param_2 + 0x7c) = uVar1;
      *(undefined8 *)(param_2 + 0x90) = uVar5;
      *(undefined8 *)(param_2 + 0x98) = uVar6;
      *(undefined8 *)(param_2 + 0xa0) = uVar8;
      *(undefined8 *)(param_2 + 0xa8) = uVar9;
      __dest = (void *)ft_mem_qalloc(uVar4,lVar3,&local_24);
      *(void **)(param_2 + 0x28) = __dest;
      iVar11 = local_24;
      if (local_24 == 0) {
        memcpy(__dest,(void *)param_1[5],*(size_t *)(param_2 + 0x30));
        iVar11 = local_24;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ft_svg_glyph_init(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  size_t __n;
  void *__src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  void *__dest;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar13 = 0x12;
  if (*(int *)(param_2 + 0x90) == 0x53564720) {
    puVar3 = *(undefined8 **)(param_2 + 0x120);
    if (puVar3 == (undefined8 *)0x0) {
      iVar13 = 0x25;
    }
    else {
      __n = puVar3[1];
      iVar13 = 0x25;
      if (__n != 0) {
        __dest = (void *)ft_mem_qalloc(*(undefined8 *)*param_1,__n,&local_34);
        param_1[5] = __dest;
        iVar13 = local_34;
        if (local_34 == 0) {
          uVar2 = *(undefined4 *)(param_2 + 0x18);
          uVar4 = puVar3[2];
          uVar5 = puVar3[3];
          param_1[6] = __n;
          uVar6 = puVar3[4];
          uVar7 = puVar3[5];
          uVar8 = puVar3[6];
          uVar9 = puVar3[7];
          param_1[8] = uVar4;
          param_1[9] = uVar5;
          uVar5 = puVar3[10];
          uVar10 = puVar3[0xb];
          __src = (void *)*puVar3;
          *(undefined4 *)(param_1 + 7) = uVar2;
          uVar4 = puVar3[8];
          param_1[10] = uVar6;
          param_1[0xb] = uVar7;
          uVar6 = puVar3[0xc];
          uVar7 = puVar3[0xd];
          uVar11 = puVar3[0xe];
          uVar12 = puVar3[0xf];
          param_1[0xe] = uVar4;
          param_1[0xc] = uVar8;
          param_1[0xd] = uVar9;
          *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(puVar3 + 9);
          uVar1 = *(undefined2 *)((long)puVar3 + 0x4c);
          param_1[0x10] = uVar5;
          param_1[0x11] = uVar10;
          *(undefined2 *)((long)param_1 + 0x7c) = uVar1;
          param_1[0x12] = uVar6;
          param_1[0x13] = uVar7;
          param_1[0x14] = uVar11;
          param_1[0x15] = uVar12;
          memcpy(__dest,__src,__n);
          iVar13 = local_34;
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ft_svg_glyph_done(undefined8 *param_1)

{
  ft_mem_free(*(undefined8 *)*param_1,param_1[5]);
  param_1[5] = 0;
  return;
}



void ft_outline_glyph_transform(long param_1,long param_2,undefined8 *param_3)

{
  if (param_2 != 0) {
    FT_Outline_Transform(param_1 + 0x28);
  }
  if (param_3 != (undefined8 *)0x0) {
    FT_Outline_Translate(param_1 + 0x28,*param_3,param_3[1]);
    return;
  }
  return;
}



int FT_Glyph_Copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 == (undefined8 *)0x0) || (param_1 == (undefined8 *)0x0)) ||
     (puVar2 = (undefined8 *)param_1[1], puVar2 == (undefined8 *)0x0)) {
    local_44 = 6;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    *param_2 = 0;
    puVar7 = (undefined8 *)ft_mem_alloc(*puVar3,*puVar2,&local_44);
    if (local_44 == 0) {
      *puVar7 = puVar3;
      puVar7[1] = puVar2;
      uVar4 = param_1[3];
      uVar5 = param_1[4];
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar2 + 1);
      uVar1 = *(undefined4 *)(param_1 + 2);
      puVar7[3] = uVar4;
      puVar7[4] = uVar5;
      *(undefined4 *)(puVar7 + 2) = uVar1;
      if ((code *)puVar2[4] != (code *)0x0) {
        iVar6 = (*(code *)puVar2[4])(param_1,puVar7);
        if (iVar6 != 0) {
          uVar4 = *(undefined8 *)*puVar7;
          if (*(code **)(puVar7[1] + 0x18) != (code *)0x0) {
            (**(code **)(puVar7[1] + 0x18))(puVar7);
          }
          ft_mem_free(uVar4,puVar7);
          local_44 = iVar6;
          goto LAB_00100850;
        }
      }
      *param_2 = puVar7;
    }
  }
LAB_00100850:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int FT_New_Glyph(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) {
    local_24 = 6;
  }
  else {
    iVar6 = (int)param_2;
    if (iVar6 == 0x62697473) {
      uVar3 = 0x58;
      puVar7 = ft_bitmap_glyph_class;
    }
    else if (iVar6 == 0x6f75746c) {
      uVar3 = 0x50;
      puVar7 = ft_outline_glyph_class;
    }
    else {
      uVar3 = 0xb0;
      puVar7 = ft_svg_glyph_class;
      if (iVar6 != 0x53564720) {
        lVar4 = FT_Lookup_Renderer(param_1,param_2,0);
        if (lVar4 == 0) {
          local_24 = 0x12;
          goto LAB_0010094f;
        }
        puVar7 = (undefined1 *)(lVar4 + 0x28);
        uVar3 = *(undefined8 *)(lVar4 + 0x28);
      }
    }
    uVar2 = *param_1;
    *param_3 = 0;
    puVar5 = (undefined8 *)ft_mem_alloc(uVar2,uVar3,&local_24);
    if (local_24 == 0) {
      uVar1 = *(undefined4 *)(puVar7 + 8);
      *puVar5 = param_1;
      puVar5[1] = puVar7;
      *(undefined4 *)(puVar5 + 2) = uVar1;
      *param_3 = puVar5;
    }
  }
LAB_0010094f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int FT_Get_Glyph(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    iVar3 = 0x25;
    goto LAB_00100a7a;
  }
  if (param_2 == (undefined8 *)0x0) {
    iVar3 = 6;
    goto LAB_00100a7a;
  }
  iVar3 = FT_New_Glyph(*param_1,*(undefined4 *)(param_1 + 0x12),&local_38);
  if (iVar3 != 0) goto LAB_00100a7a;
  if ((param_1[0x10] + 0x1fffff < 0x3fffff) && (lVar1 = param_1[0x11], lVar1 + 0x1fffffU < 0x3fffff)
     ) {
    local_38[3] = param_1[0x10] << 10;
    local_38[4] = lVar1 << 10;
    iVar3 = (**(code **)(local_38[1] + 0x10))(local_38,param_1);
    if (iVar3 == 0) {
      *param_2 = local_38;
      goto LAB_00100a7a;
    }
LAB_00100a4d:
    uVar2 = *(undefined8 *)*local_38;
    if (*(code **)(local_38[1] + 0x18) != (code *)0x0) {
      (**(code **)(local_38[1] + 0x18))(local_38);
    }
    ft_mem_free(uVar2,local_38);
  }
  else {
    iVar3 = 6;
    if (local_38 != (undefined8 *)0x0) goto LAB_00100a4d;
  }
  *param_2 = 0;
LAB_00100a7a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



undefined8 FT_Glyph_Transform(long param_1,long param_2)

{
  code *pcVar1;
  
  if (param_1 == 0) {
    return 6;
  }
  if (*(long *)(param_1 + 8) != 0) {
    pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0x28);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
      if (param_2 != 0) {
        FT_Vector_Transform(param_1 + 0x18,param_2);
      }
      return 0;
    }
    return 0x12;
  }
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FT_Glyph_Get_CBox(long param_1,uint param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_3 == (undefined1 (*) [16])0x0) {
    return;
  }
  *param_3 = (undefined1  [16])0x0;
  param_3[1] = (undefined1  [16])0x0;
  if (((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) &&
     (pcVar3 = *(code **)(*(long *)(param_1 + 8) + 0x30), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1,param_3);
    uVar5 = _UNK_00101068;
    uVar4 = __LC3;
    if ((param_2 & 0xfffffffd) == 1) {
      uVar6 = *(ulong *)(*param_3 + 8) & _UNK_00101068;
      *(ulong *)*param_3 = *(ulong *)*param_3 & __LC3;
      *(ulong *)(*param_3 + 8) = uVar6;
      uVar6 = *(long *)(param_3[1] + 8) + _UNK_00101078;
      *(ulong *)param_3[1] = *(long *)param_3[1] + __LC4 & uVar4;
      *(ulong *)(param_3[1] + 8) = uVar6 & uVar5;
    }
    if (param_2 - 2 < 2) {
      auVar1 = param_3[1];
      auVar2 = *param_3;
      *(int *)param_3[1] = (int)(auVar1._0_8_ >> 6);
      *(int *)(param_3[1] + 4) = auVar1._4_4_ >> 6;
      *(int *)(param_3[1] + 8) = (int)(auVar1._8_8_ >> 6);
      *(int *)(param_3[1] + 0xc) = auVar1._12_4_ >> 6;
      *(int *)*param_3 = (int)(auVar2._0_8_ >> 6);
      *(int *)(*param_3 + 4) = auVar2._4_4_ >> 6;
      *(int *)(*param_3 + 8) = (int)(auVar2._8_8_ >> 6);
      *(int *)(*param_3 + 0xc) = auVar2._12_4_ >> 6;
      return;
    }
  }
  return;
}



ulong FT_Glyph_To_Bitmap(long *param_1,undefined4 param_2,long *param_3,char param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 **ppuVar10;
  bool bVar11;
  long in_FS_OFFSET;
  ulong local_1d8;
  long lStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined8 *local_178 [18];
  undefined4 local_e8;
  undefined8 local_58;
  undefined1 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (long *)0x0) && (plVar1 = (long *)*param_1, plVar1 != (long *)0x0)) {
    puVar2 = (undefined8 *)*plVar1;
    puVar3 = (undefined1 *)plVar1[1];
    if ((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined1 *)0x0)) {
      if (puVar3 == ft_bitmap_glyph_class) {
LAB_00100e67:
        uVar8 = 0;
      }
      else {
        if (*(long *)(puVar3 + 0x38) == 0) goto LAB_00100dd0;
        local_1c8 = (undefined1  [16])0x0;
        ppuVar10 = local_178;
        for (lVar9 = 0x26; lVar9 != 0; lVar9 = lVar9 + -1) {
          *ppuVar10 = (undefined8 *)0x0;
          ppuVar10 = ppuVar10 + 1;
        }
        local_50 = local_1c8;
        local_1b8 = (undefined1  [16])0x0;
        local_1a8 = (undefined1  [16])0x0;
        local_198 = (undefined1  [16])0x0;
        local_188 = (undefined1  [16])0x0;
        local_e8 = *(undefined4 *)(puVar3 + 8);
        local_178[0] = puVar2;
        plVar7 = (long *)ft_mem_alloc(*puVar2,0x58);
        uVar8 = local_1d8 & 0xffffffff;
        if ((int)local_1d8 != 0) goto LAB_00100dd5;
        *plVar7 = (long)puVar2;
        plVar7[1] = (long)ft_bitmap_glyph_class;
        *(undefined4 *)(plVar7 + 2) = 0x62697473;
        if (((param_3 != (long *)0x0) && (plVar1[1] != 0)) &&
           (pcVar4 = *(code **)(plVar1[1] + 0x28), pcVar4 != (code *)0x0)) {
          (*pcVar4)(plVar1,0,param_3);
        }
        uVar6 = (**(code **)(puVar3 + 0x38))(plVar1,local_178);
        bVar11 = param_3 != (long *)0x0 && param_4 == '\0';
        if (uVar6 == 0) {
          uVar6 = FT_Render_Glyph_Internal(*plVar1,local_178,param_2);
          if (puVar3 == ft_svg_glyph_class) goto LAB_00100eb0;
LAB_00100e2c:
          if (bVar11) {
LAB_00100e70:
            local_1d8 = -*param_3;
            lStack_1d0 = -param_3[1];
            if ((plVar1[1] != 0) && (pcVar4 = *(code **)(plVar1[1] + 0x28), pcVar4 != (code *)0x0))
            {
              (*pcVar4)(plVar1,0,&local_1d8);
            }
          }
          if (uVar6 == 0) {
            uVar6 = ft_bitmap_glyph_init(plVar7,local_178);
            if (uVar6 == 0) {
              lVar9 = plVar1[4];
              plVar7[3] = plVar1[3];
              plVar7[4] = lVar9;
              if (param_4 != '\0') {
                uVar5 = *(undefined8 *)*plVar1;
                if (*(code **)(plVar1[1] + 0x18) != (code *)0x0) {
                  (**(code **)(plVar1[1] + 0x18))(plVar1);
                }
                ft_mem_free(uVar5,plVar1);
              }
              *param_1 = (long)plVar7;
              goto LAB_00100e67;
            }
          }
        }
        else {
          if (puVar3 == ft_svg_glyph_class) {
LAB_00100eb0:
            ft_mem_free(*puVar2,local_58);
            local_58 = 0;
            goto LAB_00100e2c;
          }
          if (bVar11) goto LAB_00100e70;
        }
        uVar5 = *(undefined8 *)*plVar7;
        if (*(code **)(plVar7[1] + 0x18) != (code *)0x0) {
          (**(code **)(plVar7[1] + 0x18))(plVar7);
        }
        ft_mem_free(uVar5,plVar7);
        uVar8 = (ulong)uVar6;
      }
      goto LAB_00100dd5;
    }
  }
LAB_00100dd0:
  uVar8 = 6;
LAB_00100dd5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FT_Done_Glyph(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)*param_1;
    if (*(code **)(param_1[1] + 0x18) != (code *)0x0) {
      (**(code **)(param_1[1] + 0x18))();
    }
    ft_mem_free(uVar1,param_1);
    return;
  }
  return;
}


