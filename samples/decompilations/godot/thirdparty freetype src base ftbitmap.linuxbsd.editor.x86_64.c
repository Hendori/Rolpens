
void FT_Bitmap_Init(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    *(undefined8 *)param_1[2] = 0;
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
  }
  return;
}



void FT_Bitmap_New(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    *(undefined8 *)param_1[2] = 0;
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
  }
  return;
}



int FT_Bitmap_Copy(undefined8 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  size_t __n;
  void *__src;
  uint uVar8;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  if (param_1 == (undefined8 *)0x0) {
    iVar5 = 0x21;
    goto LAB_00100170;
  }
  if ((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) {
    iVar5 = 6;
    goto LAB_00100170;
  }
  if (param_2 != param_3) {
    uVar2 = *param_1;
    if ((int)param_2[2] < 0) {
      uVar8 = (uint)(0 < (int)param_3[2]);
LAB_001000b4:
      ft_mem_free(uVar2,*(undefined8 *)(param_3 + 4));
      param_3[4] = 0;
      param_3[5] = 0;
      uVar4 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_3 + 2) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_3 + 6) = uVar4;
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
      if (uVar8 != 0) {
        param_3[2] = -param_3[2];
      }
    }
    else {
      if (param_2[2] != 0) {
        uVar8 = param_3[2] >> 0x1f;
        goto LAB_001000b4;
      }
      ft_mem_free(uVar2,*(undefined8 *)(param_3 + 4));
      param_3[4] = 0;
      param_3[5] = 0;
      uVar4 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_3 + 2) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_3 + 6) = uVar4;
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
      uVar8 = 0;
    }
    if (*(long *)(param_2 + 4) != 0) {
      uVar1 = param_2[2];
      uVar3 = -uVar1;
      if (0 < (int)uVar1) {
        uVar3 = uVar1;
      }
      __n = (size_t)(int)uVar3;
      pvVar6 = (void *)ft_mem_qrealloc(uVar2,__n,0,*param_3,0,&local_34);
      *(void **)(param_3 + 4) = pvVar6;
      iVar5 = local_34;
      if (local_34 == 0) {
        if (uVar8 == 0) {
          memcpy(pvVar6,*(void **)(param_2 + 4),*param_2 * __n);
          iVar5 = local_34;
        }
        else {
          uVar7 = (ulong)(*param_3 - 1);
          pvVar6 = (void *)((long)pvVar6 + uVar7 * __n);
          if (*param_3 != 0) {
            __src = *(void **)(param_2 + 4);
            while( true ) {
              pvVar6 = memcpy(pvVar6,__src,__n);
              pvVar6 = (void *)((long)pvVar6 - __n);
              iVar5 = local_34;
              if ((int)uVar7 == 0) break;
              uVar7 = (ulong)((int)uVar7 - 1);
              __src = (void *)((long)__src + __n);
            }
          }
        }
      }
      goto LAB_00100170;
    }
  }
  iVar5 = 0;
LAB_00100170:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



int FT_Bitmap_Convert(undefined8 *param_1,ulong *param_2,undefined1 (*param_3) [16],int param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  void *pvVar3;
  byte *__dest;
  byte bVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  byte *__src;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  if (param_1 == (undefined8 *)0x0) {
    iVar11 = 0x21;
  }
  else if ((param_2 == (ulong *)0x0) || (param_3 == (undefined1 (*) [16])0x0)) {
    iVar11 = 6;
  }
  else {
    bVar6 = *(byte *)((long)param_2 + 0x1a);
    uVar1 = *param_1;
    iVar10 = *(int *)(*param_3 + 8);
    __dest = *(byte **)param_3[1];
    if (bVar6 - 1 < 7) {
      iVar12 = *(int *)((long)param_2 + 4);
      if (iVar10 == 0) {
        iVar10 = (int)param_2[1];
      }
      ft_mem_free(uVar1,__dest);
      *(undefined8 *)param_3[2] = 0;
      *param_3 = (undefined1  [16])0x0;
      param_3[1] = (undefined1  [16])0x0;
      param_3[1][10] = 2;
      uVar2 = *param_2;
      *(ulong *)*param_3 = uVar2;
      if ((param_4 != 0) && (iVar12 % param_4 != 0)) {
        iVar11 = iVar12 - iVar12 % param_4;
        iVar12 = iVar11 - param_4;
        if (0 < param_4) {
          iVar12 = param_4 + iVar11;
        }
      }
      __dest = (byte *)ft_mem_qrealloc(uVar1,(long)iVar12,0,uVar2 & 0xffffffff,0,&local_44);
      *(byte **)param_3[1] = __dest;
      iVar11 = local_44;
      if (local_44 != 0) goto LAB_0010040c;
      bVar15 = iVar10 < 0;
      iVar10 = iVar12;
      if (bVar15) {
        iVar10 = -iVar12;
      }
      *(int *)(*param_3 + 8) = iVar10;
      bVar6 = *(byte *)((long)param_2 + 0x1a);
    }
    else {
      local_44 = 6;
    }
    iVar11 = (int)param_2[1];
    __src = (byte *)param_2[2];
    if (iVar11 < 0) {
      __src = __src + -(long)(((int)*param_2 + -1) * iVar11);
    }
    if (iVar10 < 0) {
      __dest = __dest + -(long)((*(int *)*param_3 + -1) * iVar10);
    }
    switch(bVar6) {
    case 1:
      uVar2 = *param_2;
      *(undefined2 *)(param_3[1] + 8) = 2;
      for (iVar11 = (int)uVar2; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar13 = *(uint *)((long)param_2 + 4);
        pbVar7 = __dest;
        pbVar9 = __src;
        if (uVar13 >> 3 != 0) {
          uVar8 = (ulong)(uVar13 >> 3);
          uVar2 = 0;
          do {
            bVar6 = __src[uVar2];
            uVar13 = (uint)bVar6;
            uVar14 = (uint)bVar6;
            *(ulong *)(__dest + uVar2 * 8) =
                 (((((((ulong)(uVar13 & 1) << 8 | (ulong)((int)(uint)bVar6 >> 1 & 1)) << 8 |
                     (ulong)((int)uVar13 >> 2 & 1)) << 8 | (ulong)((int)uVar14 >> 3 & 1)) << 8 |
                   (ulong)((int)uVar14 >> 4 & 1)) << 8 | (ulong)((int)uVar14 >> 5 & 1)) << 8 |
                 (ulong)((int)uVar13 >> 6 & 1)) << 8 | (ulong)(uint)((int)(uint)bVar6 >> 7);
            uVar2 = uVar2 + 1;
          } while (uVar8 != uVar2);
          uVar13 = *(uint *)((long)param_2 + 4);
          pbVar7 = __dest + uVar8 * 8;
          pbVar9 = __src + uVar8;
        }
        if ((uVar13 & 7) != 0) {
          pbVar5 = pbVar7;
          bVar6 = *pbVar9;
          do {
            pbVar9 = pbVar5 + 1;
            *pbVar5 = bVar6 >> 7;
            pbVar5 = pbVar9;
            bVar6 = bVar6 * '\x02';
          } while (pbVar7 + (uVar13 & 7) != pbVar9);
        }
        __src = __src + (int)param_2[1];
        __dest = __dest + *(int *)(*param_3 + 8);
      }
      break;
    case 2:
    case 5:
    case 6:
      uVar2 = *param_2;
      uVar13 = *(uint *)((long)param_2 + 4);
      *(undefined2 *)(param_3[1] + 8) = 0x100;
      for (iVar11 = (int)uVar2; iVar11 != 0; iVar11 = iVar11 + -1) {
        pvVar3 = memcpy(__dest,__src,(ulong)uVar13);
        __src = __src + (int)param_2[1];
        __dest = (byte *)((long)pvVar3 + (long)*(int *)(*param_3 + 8));
      }
      break;
    case 3:
      uVar2 = *param_2;
      *(undefined2 *)(param_3[1] + 8) = 4;
      for (iVar11 = (int)uVar2; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar13 = *(uint *)((long)param_2 + 4);
        pbVar7 = __dest;
        pbVar9 = __src;
        if (uVar13 >> 2 != 0) {
          uVar8 = (ulong)(uVar13 >> 2);
          uVar2 = 0;
          do {
            bVar6 = __src[uVar2];
            *(uint *)(__dest + uVar2 * 4) =
                 (((bVar6 & 3) << 8 | (int)(uint)bVar6 >> 2 & 3U) << 8 | (int)(uint)bVar6 >> 4 & 3U)
                 << 8 | (uint)(bVar6 >> 6);
            uVar2 = uVar2 + 1;
          } while (uVar8 != uVar2);
          uVar13 = *(uint *)((long)param_2 + 4);
          pbVar7 = __dest + uVar8 * 4;
          pbVar9 = __src + uVar8;
        }
        if ((uVar13 & 3) != 0) {
          pbVar5 = pbVar7;
          uVar14 = (uint)*pbVar9;
          do {
            pbVar9 = pbVar5 + 1;
            *pbVar5 = (byte)uVar14 >> 6;
            pbVar5 = pbVar9;
            uVar14 = uVar14 << 2;
          } while (pbVar7 + (uVar13 & 3) != pbVar9);
        }
        __src = __src + (int)param_2[1];
        __dest = __dest + *(int *)(*param_3 + 8);
      }
      break;
    case 4:
      uVar2 = *param_2;
      *(undefined2 *)(param_3[1] + 8) = 0x10;
      for (iVar11 = (int)uVar2; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar13 = *(uint *)((long)param_2 + 4);
        pbVar7 = __dest;
        pbVar9 = __src;
        if (uVar13 >> 1 != 0) {
          uVar8 = (ulong)(uVar13 >> 1);
          uVar2 = 0;
          do {
            bVar6 = __src[uVar2];
            __dest[uVar2 * 2] = (byte)((int)(uint)bVar6 >> 4);
            __dest[uVar2 * 2 + 1] = bVar6 & 0xf;
            uVar2 = uVar2 + 1;
          } while (uVar8 != uVar2);
          uVar13 = *(uint *)((long)param_2 + 4);
          pbVar7 = __dest + uVar8 * 2;
          pbVar9 = __src + uVar8;
        }
        if ((uVar13 & 1) != 0) {
          *pbVar7 = *pbVar9 >> 4;
        }
        __src = __src + (int)param_2[1];
        __dest = __dest + *(int *)(*param_3 + 8);
      }
      break;
    case 7:
      uVar2 = *param_2;
      *(undefined2 *)(param_3[1] + 8) = 0x100;
      for (iVar10 = (int)uVar2; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar13 = *(uint *)((long)param_2 + 4);
        if (uVar13 != 0) {
          pbVar7 = __src;
          pbVar9 = __dest;
          do {
            bVar6 = pbVar7[3];
            bVar4 = 0;
            if (bVar6 != 0) {
              bVar4 = bVar6 - (char)(((ulong)*pbVar7 * (ulong)*pbVar7 * 0x127b +
                                      (ulong)pbVar7[1] * (ulong)pbVar7[1] * 0xb714 +
                                      (ulong)pbVar7[2] * (ulong)pbVar7[2] * 0x3671 >> 0x10) /
                                    (ulong)bVar6);
            }
            pbVar7 = pbVar7 + 4;
            *pbVar9 = bVar4;
            pbVar9 = pbVar9 + 1;
          } while (__src + (ulong)uVar13 * 4 != pbVar7);
          iVar11 = (int)param_2[1];
        }
        __src = __src + iVar11;
        __dest = __dest + *(int *)(*param_3 + 8);
      }
    }
    iVar11 = local_44;
  }
LAB_0010040c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11;
}



ulong FT_Bitmap_Embolden(undefined8 *param_1,uint *param_2,long param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  void *__src;
  uint uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  long in_FS_OFFSET;
  undefined8 local_a8;
  uint local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    uVar5 = 0x21;
    goto LAB_00100808;
  }
  if ((param_2 == (uint *)0x0) || (*(long *)(param_2 + 4) == 0)) {
    uVar5 = 6;
    goto LAB_00100808;
  }
  uVar5 = 6;
  if ((0x7fffffff < param_3 + 0x20 >> 6) || (0x7fffffff < param_4 + 0x20 >> 6)) goto LAB_00100808;
  uVar10 = (int)param_3 + 0x20;
  uVar7 = (int)param_4 + 0x20;
  iVar11 = (int)uVar10 >> 6;
  local_70 = (int)uVar7 >> 6;
  iVar15 = (int)(uVar10 | uVar7) >> 6;
  if (iVar15 == 0) goto switchD_00100800_caseD_7;
  if (iVar15 < 0) goto LAB_00100808;
  uVar9 = *(undefined1 *)((long)param_2 + 0x1a);
  switch(uVar9) {
  case 1:
    uVar10 = param_2[2];
    uVar7 = param_2[1];
    if (8 < iVar11) {
      iVar11 = 8;
    }
    local_a8 = *param_1;
    uVar13 = *param_2;
    uVar19 = -uVar10;
    if (0 < (int)uVar10) {
      uVar19 = uVar10;
    }
    goto switchD_001008fd_caseD_1;
  case 3:
  case 4:
    local_68 = (undefined1  [16])0x0;
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    uVar5 = FT_Bitmap_Convert(param_1,param_2,local_68,1);
    if ((int)uVar5 != 0) goto LAB_00100808;
    ft_mem_free(*param_1);
    *(undefined8 *)(param_2 + 8) = local_48;
    *(undefined8 *)(param_2 + 4) = local_58._0_8_;
    *(undefined8 *)(param_2 + 6) = local_58._8_8_;
    uVar9 = *(undefined1 *)((long)param_2 + 0x1a);
    *(undefined8 *)param_2 = local_68._0_8_;
    *(undefined8 *)(param_2 + 2) = local_68._8_8_;
  default:
    local_a8 = *param_1;
    uVar10 = param_2[2];
    uVar7 = param_2[1];
    uVar13 = *param_2;
    uVar19 = -uVar10;
    if (0 < (int)uVar10) {
      uVar19 = uVar10;
    }
    break;
  case 5:
    iVar11 = iVar11 * 3;
    goto LAB_0010090e;
  case 6:
    local_70 = local_70 * 3;
LAB_0010090e:
    uVar10 = param_2[2];
    local_a8 = *param_1;
    uVar7 = param_2[1];
    uVar13 = *param_2;
    uVar19 = -uVar10;
    if (0 < (int)uVar10) {
      uVar19 = uVar10;
    }
    goto switchD_001008fd_caseD_2;
  case 7:
    goto switchD_00100800_caseD_7;
  }
  switch(uVar9) {
  default:
    uVar5 = 0x12;
    goto LAB_00100808;
  case 1:
switchD_001008fd_caseD_1:
    iVar15 = 1;
    uVar10 = iVar11 + 7 + uVar7 >> 3;
    break;
  case 2:
  case 5:
  case 6:
switchD_001008fd_caseD_2:
    uVar10 = iVar11 + uVar7;
    iVar15 = 8;
    break;
  case 3:
    iVar15 = 2;
    uVar10 = iVar11 + 3 + uVar7 >> 2;
    break;
  case 4:
    iVar15 = 4;
    uVar10 = iVar11 + 1 + uVar7 >> 1;
  }
  if ((local_70 == 0) && (uVar10 <= uVar19)) {
    pbVar21 = *(byte **)(param_2 + 4);
    uVar7 = (iVar11 + uVar7) * iVar15;
    if (uVar7 < uVar19 * 8) {
      pbVar20 = pbVar21 + (uVar7 >> 3);
      if (uVar13 != 0) {
        do {
          pbVar21 = pbVar21 + (int)uVar19;
          pbVar18 = pbVar20;
          if ((uVar7 & 7) != 0) {
            *pbVar20 = *pbVar20 & (byte)(0xff00 >> (sbyte)(uVar7 & 7));
            pbVar18 = pbVar20 + 1;
          }
          if (pbVar18 < pbVar21) {
            memset(pbVar18,0,(long)pbVar21 - (long)pbVar18);
          }
          pbVar20 = pbVar20 + (int)uVar19;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        pbVar21 = *(byte **)(param_2 + 4);
        uVar13 = *param_2;
      }
    }
    uVar10 = param_2[2];
  }
  else {
    pbVar21 = (byte *)ft_mem_qrealloc(local_a8,uVar10,0,local_70 + uVar13,0,local_68);
    uVar5 = (ulong)(uint)local_68._0_4_;
    if (local_68._0_4_ != 0) goto LAB_00100808;
    __src = *(void **)(param_2 + 4);
    pvVar6 = (void *)((ulong)(uVar19 * *param_2) + (long)__src);
    uVar5 = (ulong)(uVar10 * local_70);
    uVar7 = iVar15 * uVar7 + 7 >> 3;
    uVar8 = (ulong)uVar7;
    uVar13 = uVar10 - uVar7;
    if ((int)param_2[2] < 1) {
      pbVar20 = pbVar21;
      if (__src < pvVar6) {
        do {
          memcpy(pbVar20,__src,uVar8);
          __src = (void *)((long)__src + (long)(int)uVar19);
          memset(pbVar20 + uVar8,0,(ulong)uVar13);
          pbVar20 = pbVar20 + uVar8 + uVar13;
        } while (__src < pvVar6);
      }
      memset(pbVar20,0,uVar5);
    }
    else {
      pbVar21 = (byte *)memset(pbVar21,0,uVar5);
      uVar8 = (ulong)uVar7;
      pbVar20 = pbVar21 + uVar5;
      for (; __src < pvVar6; __src = (void *)((long)__src + (long)(int)uVar19)) {
        memcpy(pbVar20,__src,uVar8);
        pbVar18 = pbVar20 + uVar8;
        pbVar20 = pbVar20 + uVar8 + uVar13;
        memset(pbVar18,0,(ulong)uVar13);
      }
    }
    ft_mem_free(local_a8,*(undefined8 *)(param_2 + 4));
    *(byte **)(param_2 + 4) = pbVar21;
    if ((int)param_2[2] < 0) {
      uVar10 = -uVar10;
      uVar13 = *param_2;
      param_2[2] = uVar10;
    }
    else {
      param_2[2] = uVar10;
      uVar13 = *param_2;
    }
  }
  if ((int)uVar10 < 1) {
    uVar10 = -uVar10;
    uVar5 = (ulong)((uVar13 - 1) * uVar10);
  }
  else {
    uVar5 = (ulong)(int)(local_70 * uVar10);
  }
  pbVar21 = pbVar21 + uVar5;
  if (uVar13 != 0) {
    uVar7 = uVar10 - 1;
    uVar13 = 0;
    do {
      if (uVar10 != 0) {
        iVar15 = -uVar7;
        pbVar20 = pbVar21 + (int)uVar7;
        uVar19 = (-2 - iVar11) + uVar10;
        uVar14 = uVar7;
        do {
          uVar17 = uVar14 - 1;
          bVar1 = *pbVar20;
          uVar5 = (ulong)uVar17;
          if (iVar11 != 0) {
            do {
              while (iVar12 = (int)uVar5, *(char *)((long)param_2 + 0x1a) != '\x01') {
                if (iVar12 < 0) goto LAB_00100b99;
                if ((uint)(ushort)param_2[6] <= (uint)*pbVar20 + (uint)pbVar21[uVar5]) {
                  *pbVar20 = (char)(ushort)param_2[6] - 1;
                  goto LAB_00100b99;
                }
                uVar4 = (uint)*pbVar20 + (uint)pbVar21[uVar5];
                *pbVar20 = (byte)uVar4;
                if ((ushort)param_2[6] - 1 == (uVar4 & 0xff)) goto LAB_00100b99;
LAB_00100b58:
                uVar5 = (ulong)(iVar12 - 1U);
                if (iVar12 - 1U == uVar19) goto LAB_00100b99;
              }
              cVar2 = (char)uVar5;
              bVar3 = (byte)((int)(uint)bVar1 >> ((char)uVar14 - cVar2 & 0x1fU)) | *pbVar20;
              *pbVar20 = bVar3;
              if (uVar14 == 0) goto LAB_00100b58;
              uVar5 = (ulong)(iVar12 - 1U);
              *pbVar20 = bVar3 | pbVar20[-1] << ((char)iVar15 + '\b' + cVar2 & 0x1fU);
            } while (iVar12 - 1U != uVar19);
          }
LAB_00100b99:
          pbVar20 = pbVar20 + -1;
          uVar19 = uVar19 - 1;
          iVar15 = iVar15 + 1;
          uVar14 = uVar17;
        } while (uVar17 != 0xffffffff);
      }
      lVar16 = (long)(int)param_2[2];
      iVar15 = 1;
      if (local_70 != 0) {
        if (uVar10 == 0) {
          do {
            iVar15 = iVar15 + 1;
          } while (iVar15 != local_70 + 1);
        }
        else {
          while( true ) {
            pbVar20 = pbVar21 + -lVar16;
            do {
              *pbVar20 = *pbVar20 | pbVar20[lVar16];
              pbVar20 = pbVar20 + 1;
            } while (pbVar20 != pbVar21 + ((int)uVar10 - lVar16));
            iVar15 = iVar15 + 1;
            lVar16 = (long)(int)param_2[2];
            if (local_70 + 1 == iVar15) break;
            lVar16 = (long)(int)(param_2[2] * iVar15);
          }
        }
      }
      uVar13 = uVar13 + 1;
      pbVar21 = pbVar21 + lVar16;
    } while (uVar13 < *param_2);
    local_70 = local_70 + *param_2;
  }
  param_2[1] = param_2[1] + iVar11;
  *param_2 = local_70;
switchD_00100800_caseD_7:
  uVar5 = 0;
LAB_00100808:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



ulong FT_Bitmap_Blend(undefined8 *param_1,uint *param_2,ulong param_3,ulong param_4,
                     undefined1 (*param_5) [16],ulong *param_6,uint param_7)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  int iVar14;
  byte *pbVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  void *__src;
  uint *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  void *pvVar23;
  void *pvVar24;
  uint *puVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long in_FS_OFFSET;
  undefined8 uVar30;
  ulong local_d8;
  int local_c8;
  ulong local_c0;
  long local_b8;
  uint local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 0;
  if (((param_1 != (undefined8 *)0x0) && (param_5 != (undefined1 (*) [16])0x0)) &&
     (bVar16 = param_2 == (uint *)0x0 || param_6 == (ulong *)0x0,
     param_2 != (uint *)0x0 && param_6 != (ulong *)0x0)) {
    cVar2 = param_5[1][10];
    uVar9 = *param_1;
    if (cVar2 == '\0') {
      uVar10 = 0;
      if (*(char *)((long)param_2 + 0x1a) == '\0') goto LAB_001012fd;
LAB_00100f07:
      uVar10 = 0;
      if ((param_2[1] == 0) || (*param_2 == 0)) goto LAB_001012fd;
      uVar26 = (ulong)(*param_2 << 6);
      param_4 = param_4 & 0xffffffffffffffc0;
      param_3 = param_3 & 0xffffffffffffffc0;
      if ((long)(uVar26 + 0x8000000000000040) <= (long)param_4) {
        uVar10 = (ulong)(param_2[1] << 6);
        lVar28 = param_4 - uVar26;
        if ((long)param_3 <= (long)(0x7fffffffffffffbf - uVar10)) {
          iVar27 = *(int *)(*param_5 + 4);
          local_b8 = lVar28;
          local_c0 = param_3;
          if (iVar27 == 0) {
            uVar26 = (long)uVar26 >> 6;
            local_c8 = (int)uVar26;
            iVar14 = (int)((long)uVar10 >> 6);
            if ((iVar14 != 0) && (local_c8 != 0)) {
              if (cVar2 != '\0') {
                lVar29 = 0x7fffffffffffffff;
                local_d8 = 0x7fffffffffffffff;
                goto LAB_00101440;
              }
              uVar30 = CONCAT44(iVar14,local_c8);
              goto LAB_00100fc6;
            }
LAB_001015e0:
            uVar10 = 0;
            goto LAB_001012fd;
          }
          iVar4 = *(int *)*param_5;
          if (iVar4 != 0) {
            uVar26 = param_6[1] & 0xffffffffffffffc0;
            if ((long)((ulong)(uint)(iVar4 << 6) + 0x8000000000000000) <= (long)uVar26) {
              lVar29 = uVar26 - (uint)(iVar4 << 6);
              local_d8 = *param_6 & 0xffffffffffffffc0;
              if ((long)local_d8 <= (long)(0x7fffffffffffffff - (ulong)(uint)(iVar27 << 6))) {
                local_c0 = local_d8;
                if ((long)param_3 <= (long)local_d8) {
                  local_c0 = param_3;
                }
                lVar12 = (uint)(iVar27 << 6) + local_d8;
                lVar11 = uVar10 + param_3;
                if ((long)(uVar10 + param_3) < lVar12) {
                  lVar11 = lVar12;
                }
                uVar10 = lVar11 - local_c0;
                if (lVar29 < lVar28) {
                  local_b8 = lVar29;
                }
                if ((long)param_4 < (long)uVar26) {
                  param_4 = uVar26;
                }
                uVar26 = param_4 - local_b8;
                goto LAB_001013fe;
              }
            }
            goto LAB_001012f8;
          }
          lVar29 = 0x7fffffffffffffff;
          local_d8 = 0x7fffffffffffffff;
LAB_001013fe:
          uVar26 = (long)uVar26 >> 6;
          local_c8 = (int)uVar26;
          iVar14 = (int)((long)uVar10 >> 6);
          uVar30 = CONCAT44(iVar14,local_c8);
          if ((iVar14 == 0) || (local_c8 == 0)) goto LAB_001015e0;
          if (iVar4 == 0) {
            if (cVar2 == '\0') goto LAB_00100fc6;
LAB_00101440:
            iVar27 = iVar14 * 4;
            iVar4 = *(int *)(*param_5 + 8);
            lVar11 = (long)iVar27;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
            if (SUB168((auVar6 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar11),0) <
                (long)(int)uVar26) goto LAB_001012f8;
            lVar12 = ft_mem_alloc(uVar9,(long)(iVar27 * (int)uVar26),&local_6c);
            uVar10 = (ulong)local_6c;
            if (local_6c != 0) goto LAB_001012fd;
            if (*(int *)(*param_5 + 8) < 0) {
              __src = *(void **)param_5[1];
            }
            else {
              __src = *(void **)param_5[1];
              if (iVar4 < 1) {
                iVar4 = -iVar4;
              }
              pvVar24 = (void *)((((uVar26 & 0xffffffff) - (lVar29 >> 6)) - (ulong)*(uint *)*param_5
                                 ) * lVar11 + ((long)local_d8 >> 6) * 4 + lVar12);
              pvVar13 = (void *)((long)(*(int *)*param_5 * iVar4) + (long)__src);
              if (__src < pvVar13) {
                do {
                  pvVar23 = (void *)((long)__src + (long)iVar4);
                  pvVar24 = memcpy(pvVar24,__src,(long)iVar4);
                  pvVar24 = (void *)((long)pvVar24 + lVar11);
                  __src = pvVar23;
                } while (pvVar23 < pvVar13);
                __src = *(void **)param_5[1];
              }
            }
            ft_mem_free(uVar9,__src);
            iVar4 = *(int *)(*param_5 + 8);
            *(int *)(*param_5 + 4) = iVar14;
            *(int *)*param_5 = local_c8;
            if (iVar4 < 0) {
              iVar27 = iVar14 * -4;
            }
            *(int *)(*param_5 + 8) = iVar27;
            *(long *)param_5[1] = lVar12;
LAB_001015d7:
            bVar8 = false;
          }
          else {
            local_d8 = local_d8 - local_c0;
            lVar29 = lVar29 - local_b8;
            if (cVar2 != '\0') {
              if ((iVar27 != iVar14) || (iVar4 != local_c8)) goto LAB_00101440;
              goto LAB_001015d7;
            }
LAB_00100fc6:
            iVar14 = iVar14 * 4;
            param_5[1][10] = 7;
            *(undefined2 *)(param_5[1] + 8) = 0x100;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
            *(int *)(*param_5 + 8) = iVar14;
            *(undefined8 *)*param_5 = uVar30;
            if (SUB168((auVar5 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816((long)iVar14),0) <
                (long)local_c8) goto LAB_001012f8;
            uVar9 = ft_mem_alloc(uVar9,(long)(iVar14 * local_c8),&local_6c,iVar14 * local_c8);
            *(undefined8 *)param_5[1] = uVar9;
            uVar10 = (ulong)local_6c;
            if (local_6c != 0) goto LAB_001012fd;
            bVar16 = true;
            bVar8 = true;
          }
          bVar7 = false;
          puVar20 = param_2;
          if (*(char *)((long)param_2 + 0x1a) == '\x02') {
LAB_001010a0:
            iVar27 = *(int *)(*param_5 + 8);
            if (-1 < iVar27) {
              pbVar15 = *(byte **)(puVar20 + 4);
              pbVar1 = pbVar15 + (int)(*puVar20 * puVar20[2]);
              puVar19 = (uint *)((((ulong)*(uint *)*param_5 - (lVar28 - local_b8 >> 6)) -
                                 (ulong)*puVar20) * (long)iVar27 + ((long)(param_3 - local_c0) >> 4)
                                + *(long *)param_5[1]);
              if (pbVar15 < pbVar1) {
                do {
                  uVar3 = puVar20[1];
                  pbVar21 = pbVar15;
                  puVar25 = puVar19;
                  if (pbVar15 < pbVar15 + uVar3) {
                    do {
                      pbVar22 = pbVar21 + 1;
                      uVar17 = (uint)*pbVar21 * (param_7 >> 0x18);
                      uVar18 = uVar17 / 0xff;
                      iVar27 = 0xff - uVar18;
                      uVar17 = uVar17 / 0xff;
                      *puVar25 = (((((uint)*(byte *)((long)puVar25 + 3) * iVar27) / 0xff + uVar17 &
                                   0xff) << 8 |
                                  ((param_7 >> 0x10 & 0xff) * uVar17) / 0xff +
                                  ((uint)*(byte *)((long)puVar25 + 2) * iVar27) / 0xff & 0xff) << 8
                                 | ((uint)*(byte *)((long)puVar25 + 1) * iVar27) / 0xff +
                                   ((param_7 >> 8 & 0xff) * uVar17) / 0xff & 0xff) << 8 |
                                 ((uint)(byte)*puVar25 * iVar27) / 0xff +
                                 ((param_7 & 0xff) * uVar18) / 0xff & 0xff;
                      pbVar21 = pbVar22;
                      puVar25 = puVar25 + 1;
                    } while (pbVar15 + uVar3 != pbVar22);
                    iVar27 = *(int *)(*param_5 + 8);
                  }
                  pbVar15 = pbVar15 + (int)puVar20[2];
                  puVar19 = (uint *)((long)puVar19 + (long)iVar27);
                } while (pbVar15 < pbVar1);
              }
            }
            *param_6 = local_c0;
            param_6[1] = (ulong)(uint)(local_c8 << 6) + local_b8;
            if ((local_6c != 0) && (bVar16)) goto LAB_0010167f;
          }
          else {
            puVar20 = (uint *)local_68;
            local_68 = (undefined1  [16])0x0;
            local_48 = 0;
            local_58 = (undefined1  [16])0x0;
            uVar10 = FT_Bitmap_Convert(param_1,param_2,puVar20,1);
            bVar7 = true;
            local_6c = (uint)uVar10;
            if (local_6c == 0) goto LAB_001010a0;
            if (!bVar8) goto LAB_001012fd;
            bVar7 = false;
LAB_0010167f:
            ft_mem_free(*param_1,*(undefined8 *)param_5[1]);
            *(undefined8 *)param_5[2] = 0;
            *param_5 = (undefined1  [16])0x0;
            param_5[1] = (undefined1  [16])0x0;
          }
          if (bVar7) {
            ft_mem_free(*param_1,local_58._0_8_);
          }
          uVar10 = (ulong)local_6c;
          goto LAB_001012fd;
        }
      }
    }
    else if ((cVar2 == '\a') && (*(long *)param_5[1] != 0)) {
      uVar10 = 0;
      if (*(char *)((long)param_2 + 0x1a) == '\0') goto LAB_001012fd;
      if (-1 < (int)(param_2[2] ^ *(uint *)(*param_5 + 8))) goto LAB_00100f07;
    }
  }
LAB_001012f8:
  uVar10 = 6;
LAB_001012fd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



undefined8 FT_GlyphSlot_Own_Bitmap(undefined8 *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (undefined8 *)0x0) && (*(int *)(param_1 + 0x12) == 0x62697473)) &&
     ((*(byte *)(param_1[0x25] + 8) & 1) == 0)) {
    local_18 = 0;
    local_38 = (undefined1  [16])0x0;
    local_28 = (undefined1  [16])0x0;
    uVar1 = FT_Bitmap_Copy(*param_1,param_1 + 0x13,local_38);
    if ((int)uVar1 != 0) goto LAB_001016ff;
    param_1[0x17] = local_18;
    param_1[0x13] = local_38._0_8_;
    param_1[0x14] = local_38._8_8_;
    param_1[0x15] = local_28._0_8_;
    param_1[0x16] = local_28._8_8_;
    *(uint *)(param_1[0x25] + 8) = *(uint *)(param_1[0x25] + 8) | 1;
  }
  uVar1 = 0;
LAB_001016ff:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FT_Bitmap_Done(undefined8 *param_1,undefined1 (*param_2) [16])

{
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 != (undefined1 (*) [16])0x0) {
    ft_mem_free(*param_1,*(undefined8 *)param_2[1]);
    *(undefined8 *)param_2[2] = 0;
    *param_2 = (undefined1  [16])0x0;
    param_2[1] = (undefined1  [16])0x0;
    return 0;
  }
  return 6;
}


