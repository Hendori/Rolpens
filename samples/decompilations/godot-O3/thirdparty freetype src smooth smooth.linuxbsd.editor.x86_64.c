
void gray_raster_reset(void)

{
  return;
}



undefined8 gray_raster_set_mode(void)

{
  return 0;
}



void ft_smooth_set_mode(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x70) + 0x18))(*(undefined8 *)(param_1 + 0x68))
  ;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ft_smooth_init(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_001021d8;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(lVar1 + 0x158) = __LC0;
  *(undefined8 *)(lVar1 + 0x160) = uVar3;
  *(undefined1 (*) [16])(lVar1 + 0x168) = (undefined1  [16])0x0;
  uVar3 = _UNK_001021e8;
  *(undefined8 *)(lVar1 + 0x178) = __LC1;
  *(undefined8 *)(lVar1 + 0x180) = uVar3;
  (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x70) + 0x10))(uVar2,0,0);
  return 0;
}



void ft_smooth_lcd_spans(int param_1,uint param_2,short *param_3,long *param_4)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  lVar4 = param_4[1];
  lVar3 = *param_4;
  if (param_2 != 0) {
    psVar1 = param_3 + (ulong)param_2 * 3;
    do {
      sVar2 = param_3[1];
      puVar5 = (undefined1 *)(((long)(*param_3 * 3) - (long)(param_1 * (int)lVar4)) + lVar3);
      if (sVar2 != 0) {
        puVar6 = puVar5;
        do {
          puVar7 = puVar6 + 3;
          *puVar6 = (char)param_3[2];
          puVar6 = puVar7;
        } while (puVar7 != puVar5 + (ulong)(ushort)(sVar2 - 1) * 3 + 3);
      }
      param_3 = param_3 + 3;
    } while (psVar1 != param_3);
  }
  return;
}



void ft_smooth_overlap_spans(int param_1,uint param_2,short *param_3,long *param_4)

{
  short *psVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar3 = *param_4;
  if (param_1 < 0) {
    param_1 = param_1 + 3;
  }
  lVar4 = param_4[1];
  if (param_2 != 0) {
    psVar1 = param_3 + (ulong)param_2 * 3;
    do {
      bVar2 = *(byte *)(param_3 + 2);
      if (param_3[1] != 0) {
        iVar6 = 0;
        do {
          iVar7 = *param_3 + iVar6;
          iVar8 = iVar7 + 3;
          if (-1 < iVar7) {
            iVar8 = iVar7;
          }
          iVar6 = iVar6 + 1;
          pbVar5 = (byte *)(((long)(iVar8 >> 2) - (long)((param_1 >> 2) * (int)lVar4)) + lVar3);
          iVar8 = (uint)*pbVar5 + ((int)(bVar2 + 8) >> 4);
          *pbVar5 = (char)iVar8 - (char)((uint)iVar8 >> 8);
        } while ((ushort)iVar6 < (ushort)param_3[1]);
      }
      param_3 = param_3 + 3;
    } while (param_3 != psVar1);
    return;
  }
  return;
}



void gray_raster_done(undefined8 *param_1)

{
  ft_mem_free(*param_1,param_1);
  return;
}



undefined4 gray_convert_glyph_inner(__jmp_buf_tag *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _setjmp(param_1);
  if (iVar1 != 0) {
    return 0x62;
  }
  if (param_2 == 0) {
    uVar2 = FT_Outline_Decompose(&param_1[1].__saved_mask,func_interface);
    return uVar2;
  }
  FT_Trace_Disable();
  uVar2 = FT_Outline_Decompose(&param_1[1].__saved_mask,func_interface);
  FT_Trace_Enable();
  return uVar2;
}



void gray_set_cell(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  param_3 = param_3 - *(int *)(param_1 + 0xd0);
  if (((param_3 < 0) || (*(int *)(param_1 + 0xd8) <= param_3)) ||
     (*(int *)(param_1 + 0xcc) <= param_2)) {
    piVar3 = *(int **)(param_1 + 0xf0);
  }
  else {
    piVar4 = (int *)(*(long *)(param_1 + 0xf8) + (long)param_3 * 8);
    if (param_2 < *(int *)(param_1 + 200)) {
      param_2 = *(int *)(param_1 + 200) + -1;
    }
    iVar5 = **(int **)piVar4;
    piVar2 = *(int **)piVar4;
    if (iVar5 <= param_2) {
      do {
        piVar3 = piVar2;
        if (param_2 == iVar5) goto LAB_00100257;
        iVar5 = **(int **)(piVar3 + 4);
        piVar2 = *(int **)(piVar3 + 4);
      } while (iVar5 <= param_2);
      piVar4 = piVar3 + 4;
    }
    piVar3 = *(int **)(param_1 + 0xe8);
    *(int **)(param_1 + 0xe8) = piVar3 + 6;
    if (*(int **)(param_1 + 0xf0) <= piVar3) {
                    /* WARNING: Subroutine does not return */
      __longjmp_chk(param_1,1);
    }
    uVar1 = *(undefined8 *)piVar4;
    *piVar3 = param_2;
    piVar3[1] = 0;
    piVar3[2] = 0;
    *(undefined8 *)(piVar3 + 4) = uVar1;
    *(int **)piVar4 = piVar3;
  }
LAB_00100257:
  *(int **)(param_1 + 0xe0) = piVar3;
  return;
}



void gray_render_line(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_48;
  undefined8 local_40;
  ulong uVar9;
  
  uVar15 = *(ulong *)(param_1 + 0x108);
  uVar12 = (uint)((ulong)param_3 >> 8);
  uVar14 = (uint)(uVar15 >> 8);
  uVar8 = uVar14;
  if ((int)uVar12 <= (int)uVar14) {
    uVar8 = uVar12;
  }
  if ((int)uVar8 < *(int *)(param_1 + 0xd4)) {
    uVar8 = uVar14;
    if ((int)uVar14 <= (int)uVar12) {
      uVar8 = uVar12;
    }
    if (*(int *)(param_1 + 0xd0) <= (int)uVar8) {
      uVar2 = *(ulong *)(param_1 + 0x100);
      uVar9 = (long)uVar15 >> 8 & 0xffffffff;
      uVar10 = uVar15 & 0xff;
      iVar16 = (int)uVar10;
      iVar6 = (int)((ulong)param_2 >> 8);
      uVar21 = uVar2 & 0xff;
      iVar20 = (int)uVar21;
      iVar7 = (int)(uVar2 >> 8);
      uVar23 = (long)uVar2 >> 8 & 0xffffffff;
      if ((iVar7 != iVar6) || (uVar14 != uVar12)) {
        lVar17 = param_3 - uVar15;
        if (lVar17 == 0) {
          gray_set_cell(param_1,iVar6,uVar12);
          goto LAB_001003a9;
        }
        lVar19 = param_2 - uVar2;
        if (lVar19 == 0) {
          if (lVar17 < 1) {
            do {
              iVar6 = (int)uVar10;
              uVar8 = (int)uVar9 - 1;
              uVar9 = (ulong)uVar8;
              uVar10 = 0x100;
              iVar16 = 0x100;
              uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 4);
              *(ulong *)(*(long *)(param_1 + 0xe0) + 4) =
                   CONCAT44((int)((ulong)uVar1 >> 0x20) + -iVar6 * iVar20 * 2,(int)uVar1 - iVar6);
              gray_set_cell(param_1,uVar23,uVar9);
            } while (uVar12 != uVar8);
          }
          else {
            do {
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulong)uVar8;
              iVar6 = 0x100 - (int)uVar10;
              uVar10 = 0;
              iVar16 = 0;
              uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 4);
              *(ulong *)(*(long *)(param_1 + 0xe0) + 4) =
                   CONCAT44((int)((ulong)uVar1 >> 0x20) + iVar6 * iVar20 * 2,(int)uVar1 + iVar6);
              gray_set_cell(param_1,uVar23,uVar9);
            } while (uVar12 != uVar8);
          }
        }
        else {
          local_40 = 0;
          if (iVar7 != iVar6) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = SUB168(SEXT816(0xffffffff),8);
            local_40 = SUB168((auVar4 << 0x40 | ZEXT816(0xffffffff)) / SEXT816(lVar19),0);
          }
          local_48 = 0;
          if (uVar14 != uVar12) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = SUB168(SEXT816(0xffffffff),8);
            local_48 = SUB168((auVar5 << 0x40 | ZEXT816(0xffffffff)) / SEXT816(lVar17),0);
          }
          lVar18 = lVar17 * 0x100;
          lVar22 = iVar16 * lVar19 - iVar20 * lVar17;
          do {
            lVar3 = *(long *)(param_1 + 0xe0);
            lVar11 = lVar22 + lVar19 * -0x100;
            iVar7 = *(int *)(lVar3 + 4);
            iVar13 = *(int *)(lVar3 + 8);
            iVar16 = (int)uVar10;
            iVar20 = (int)uVar21;
            if (lVar11 < 1) {
              if (lVar18 + lVar11 < 1) {
LAB_001005b0:
                lVar11 = lVar18 + lVar22;
                if (lVar11 < 0) goto LAB_00100486;
                uVar23 = (ulong)((int)uVar23 + 1);
                uVar21 = 0;
                uVar8 = (uint)((ulong)(local_40 * lVar11) >> 0x20);
                iVar16 = uVar8 - iVar16;
                uVar10 = (ulong)uVar8;
                iVar7 = iVar7 + iVar16;
                iVar13 = (iVar20 + 0x100) * iVar16 + iVar13;
              }
              else {
                uVar9 = (ulong)((int)uVar9 + 1);
                uVar10 = 0;
                uVar15 = (lVar19 * 0x100 - lVar22) * local_48;
                iVar7 = iVar7 + (0x100 - iVar16);
                uVar21 = uVar15 >> 0x20;
                iVar13 = (iVar20 + (int)(uVar15 >> 0x20)) * (0x100 - iVar16) + iVar13;
              }
            }
            else if (lVar22 < 1) {
              uVar23 = (ulong)((int)uVar23 - 1);
              lVar11 = lVar22 + lVar17 * -0x100;
              uVar8 = (uint)((ulong)(local_40 * lVar22) >> 0x20);
              iVar16 = uVar8 - iVar16;
              uVar10 = (ulong)uVar8;
              iVar7 = iVar7 + iVar16;
              uVar21 = 0x100;
              iVar13 = iVar16 * iVar20 + iVar13;
            }
            else {
              if (lVar11 + lVar18 < 1) goto LAB_001005b0;
LAB_00100486:
              iVar7 = iVar7 - iVar16;
              uVar9 = (ulong)((int)uVar9 - 1);
              lVar11 = lVar22 + lVar19 * 0x100;
              uVar8 = (uint)((ulong)(-local_48 * lVar22) >> 0x20);
              uVar10 = 0x100;
              iVar13 = iVar13 - (iVar20 + uVar8) * iVar16;
              uVar21 = (ulong)uVar8;
            }
            iVar20 = (int)uVar21;
            iVar16 = (int)uVar10;
            *(int *)(lVar3 + 8) = iVar13;
            *(int *)(lVar3 + 4) = iVar7;
            gray_set_cell(param_1,uVar23,uVar9);
            lVar22 = lVar11;
          } while (((int)uVar23 != iVar6) || ((uint)uVar9 != uVar12));
        }
      }
      local_70 = (byte)param_3;
      local_68 = (byte)param_2;
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 4);
      *(ulong *)(*(long *)(param_1 + 0xe0) + 4) =
           CONCAT44(((uint)local_68 + iVar20) * ((uint)local_70 - iVar16) +
                    (int)((ulong)uVar1 >> 0x20),((uint)local_70 - iVar16) + (int)uVar1);
    }
  }
LAB_001003a9:
  *(long *)(param_1 + 0x100) = param_2;
  *(long *)(param_1 + 0x108) = param_3;
  return;
}



undefined8 gray_line_to(long *param_1,undefined8 param_2)

{
  gray_render_line(param_2,*param_1 << 2,param_1[1] * 4);
  return 0;
}



undefined8 gray_move_to(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  gray_set_cell(param_2,lVar1 * 4 >> 8,(lVar2 << 2) >> 8);
  *(long *)(param_2 + 0x100) = lVar1 * 4;
  *(long *)(param_2 + 0x108) = lVar2 << 2;
  return 0;
}



undefined8 gray_convert_glyph(long param_1)

{
  short sVar1;
  long *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  int *piVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  uint __c;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  long in_FS_OFFSET;
  undefined8 uVar24;
  undefined1 local_4030 [16384];
  
  puVar18 = &stack0xffffffffffffffd0;
  do {
    puVar11 = puVar18;
    *(undefined8 *)(puVar11 + -0x1000) = *(undefined8 *)(puVar11 + -0x1000);
    puVar18 = puVar11 + -0x1000;
  } while (puVar11 + -0x1000 != local_4030);
  iVar19 = *(int *)(param_1 + 0xd4);
  iVar22 = *(int *)(param_1 + 0xd0);
  iVar14 = iVar19 - iVar22;
  *(undefined8 *)(puVar11 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar16 = (ulong)iVar14;
  *(undefined1 **)(puVar11 + -0x1118) = puVar11 + -0x1008;
  puVar18 = puVar11 + 0x2fd0;
  *(undefined4 *)(puVar11 + 0x2fd8) = 0;
  *(undefined8 *)(puVar11 + 0x2fd0) = 0x7fffffff;
  *(undefined8 *)(puVar11 + 0x2fe0) = 0;
  uVar24 = *(undefined8 *)(puVar11 + -0x1118);
  *(undefined1 **)(param_1 + 0xf0) = puVar18;
  *(undefined8 *)(param_1 + 0xf8) = uVar24;
  if (0x55 < uVar16) {
    uVar10 = (uVar16 + 0x54) / 0x55;
    iVar14 = (int)(((uVar16 - 1) + uVar10) / uVar10);
  }
  if (iVar19 <= iVar22) {
LAB_00100e56:
    uVar8 = 0;
LAB_00100e58:
    if (*(long *)(puVar11 + 0x2ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar11 + -0x1120) = &UNK_00100ea2;
    __stack_chk_fail();
  }
  piVar12 = (int *)(puVar11 + -0x1088);
LAB_00100819:
  iVar15 = iVar22 + iVar14;
  *(int *)(puVar11 + -0x10ec) = iVar14;
  *(int *)(puVar11 + -0x10f4) = iVar19;
  iVar14 = iVar15;
  if (iVar19 <= iVar15) {
    iVar14 = iVar19;
  }
  *(int *)(puVar11 + -0x1084) = iVar22;
  *(int *)(puVar11 + -0x10f0) = iVar15;
  *(int *)(puVar11 + -0x1088) = iVar14;
  uVar24 = CONCAT44(iVar14,iVar22);
  piVar23 = piVar12;
LAB_00100860:
  iVar19 = (int)((ulong)uVar24 >> 0x20) - (int)uVar24;
  if (0 < iVar19) {
    plVar2 = *(long **)(param_1 + 0xf8);
    *plVar2 = (long)puVar18;
    if (iVar19 != 1) {
      plVar6 = plVar2 + 1;
      do {
        plVar7 = plVar6 + 1;
        *plVar6 = *(long *)(param_1 + 0xf0);
        plVar6 = plVar7;
      } while (plVar2 + (ulong)(iVar19 - 2) + 2 != plVar7);
    }
    puVar18 = *(undefined1 **)(param_1 + 0xf0);
  }
  lVar17 = *(long *)(puVar11 + -0x1118);
  *(undefined1 **)(param_1 + 0xe0) = puVar18;
  *(int *)(param_1 + 0xd8) = iVar19;
  *(undefined8 *)(param_1 + 0xd0) = uVar24;
  *(ulong *)(param_1 + 0xe8) = lVar17 + (((long)iVar19 * 8 + 0x17U) / 0x18) * 0x18;
  *(undefined8 *)(puVar11 + -0x1120) = 0x100908;
  uVar8 = gray_convert_glyph_inner(param_1);
  if ((int)uVar8 == 0) {
    uVar4 = *(uint *)(param_1 + 0x130) & 2;
    if (*(long *)(param_1 + 0x148) == 0) {
      iVar19 = *(int *)(param_1 + 0xd0);
      uVar4 = (-(uint)(uVar4 == 0) & 0x7fffff00) + 0x100;
      if (iVar19 < *(int *)(param_1 + 0xd4)) {
        *(int **)(puVar11 + -0x1108) = piVar23;
        *(int **)(puVar11 + -0x1100) = piVar12;
        uVar5 = uVar4 >> 0x1f;
        iVar22 = iVar19;
        do {
          iVar14 = 0;
          puVar20 = *(uint **)(*(long *)(param_1 + 0xf8) + (long)(iVar22 - iVar19) * 8);
          iVar19 = *(int *)(param_1 + 200);
          lVar17 = *(long *)(param_1 + 0x138) - (long)(*(int *)(param_1 + 0x140) * iVar22);
          if (puVar20 == *(uint **)(param_1 + 0xf0)) goto switchD_00100d60_caseD_0;
          do {
            uVar9 = *puVar20;
            uVar16 = (ulong)(int)uVar9;
            if ((iVar14 != 0) && (iVar19 < (int)uVar9)) {
              __c = iVar14 >> 9;
              if ((__c & uVar4) != 0) {
                __c = ~__c;
              }
              if ((0xff < (int)__c) && ((char)uVar5 != '\0')) {
                __c = 0xff;
              }
              puVar18 = (undefined1 *)(iVar19 + lVar17);
              uVar13 = (undefined1)__c;
              switch(uVar9 - iVar19) {
              default:
                *(uint *)(puVar11 + -0x1110) = uVar5;
                *(undefined8 *)(puVar11 + -0x1120) = 0x100e2f;
                memset(puVar18,__c,(long)(int)(uVar9 - iVar19));
                uVar16 = (ulong)(int)*puVar20;
                uVar5 = *(uint *)(puVar11 + -0x1110);
                goto LAB_00100cbd;
              case 1:
                goto LAB_00100cb7;
              case 2:
                goto LAB_00100cb1;
              case 3:
                goto LAB_00100cab;
              case 4:
                goto LAB_00100ca5;
              case 5:
                goto LAB_00100c9f;
              case 6:
                break;
              case 7:
                *puVar18 = uVar13;
                puVar18 = puVar18 + 1;
              }
              *puVar18 = uVar13;
              puVar18 = puVar18 + 1;
LAB_00100c9f:
              *puVar18 = uVar13;
              puVar18 = puVar18 + 1;
LAB_00100ca5:
              *puVar18 = uVar13;
              puVar18 = puVar18 + 1;
LAB_00100cab:
              *puVar18 = uVar13;
              puVar18 = puVar18 + 1;
LAB_00100cb1:
              *puVar18 = uVar13;
              puVar18 = puVar18 + 1;
LAB_00100cb7:
              *puVar18 = uVar13;
              uVar16 = (ulong)(int)*puVar20;
            }
LAB_00100cbd:
            iVar14 = iVar14 + puVar20[1] * 0x200;
            if ((iVar14 - puVar20[2] != 0) && (*(int *)(param_1 + 200) <= (int)uVar16)) {
              uVar9 = (int)(iVar14 - puVar20[2]) >> 9;
              if ((uVar4 & uVar9) != 0) {
                uVar9 = ~uVar9;
              }
              if ((0xff < (int)uVar9) && ((char)uVar5 != '\0')) {
                uVar9 = 0xff;
              }
              *(char *)(lVar17 + uVar16) = (char)uVar9;
              uVar16 = (ulong)*puVar20;
            }
            puVar20 = *(uint **)(puVar20 + 4);
            iVar19 = (int)uVar16 + 1;
          } while (puVar20 != *(uint **)(param_1 + 0xf0));
          if (iVar14 == 0) goto switchD_00100d60_caseD_0;
          uVar9 = iVar14 >> 9;
          if ((uVar4 & uVar9) != 0) {
            uVar9 = ~uVar9;
          }
          if ((0xff < (int)uVar9) && ((char)uVar5 != '\0')) {
            uVar9 = 0xff;
          }
          puVar18 = (undefined1 *)(iVar19 + lVar17);
          iVar19 = *(int *)(param_1 + 0xcc) - iVar19;
          uVar13 = (undefined1)uVar9;
          switch(iVar19) {
          case 0:
            break;
          case 1:
            *puVar18 = uVar13;
            break;
          case 2:
            goto LAB_00100dd2;
          case 3:
            goto LAB_00100dcc;
          case 4:
            goto LAB_00100dc6;
          case 5:
            goto LAB_00100dc0;
          case 6:
            goto LAB_00100dba;
          case 7:
            *puVar18 = uVar13;
            puVar18 = puVar18 + 1;
LAB_00100dba:
            *puVar18 = uVar13;
            puVar18 = puVar18 + 1;
LAB_00100dc0:
            *puVar18 = uVar13;
            puVar18 = puVar18 + 1;
LAB_00100dc6:
            *puVar18 = uVar13;
            puVar18 = puVar18 + 1;
LAB_00100dcc:
            *puVar18 = uVar13;
            puVar18 = puVar18 + 1;
LAB_00100dd2:
            *puVar18 = uVar13;
            puVar18[1] = uVar13;
            break;
          default:
            *(uint *)(puVar11 + -0x1110) = uVar5;
            *(undefined8 *)(puVar11 + -0x1120) = 0x100e8d;
            memset(puVar18,uVar9,(long)iVar19);
            uVar5 = *(uint *)(puVar11 + -0x1110);
          }
switchD_00100d60_caseD_0:
          iVar22 = iVar22 + 1;
          if (*(int *)(param_1 + 0xd4) <= iVar22) goto LAB_00100e43;
          iVar19 = *(int *)(param_1 + 0xd0);
        } while( true );
      }
    }
    else {
      iVar19 = *(int *)(param_1 + 0xd0);
      uVar4 = (-(uint)(uVar4 == 0) & 0x7fffff00) + 0x100;
      if (iVar19 < *(int *)(param_1 + 0xd4)) {
        *(int **)(puVar11 + -0x1110) = piVar23;
        *(int **)(puVar11 + -0x1108) = piVar12;
        iVar22 = iVar19;
        while( true ) {
          iVar14 = *(int *)(param_1 + 200);
          iVar15 = 0;
          iVar21 = 0;
          piVar12 = *(int **)(*(long *)(param_1 + 0xf8) + (long)(iVar22 - iVar19) * 8);
          if (piVar12 != *(int **)(param_1 + 0xf0)) {
            do {
              iVar19 = *piVar12;
              if ((iVar21 != 0) && (iVar14 < iVar19)) {
                uVar5 = iVar21 >> 9;
                if ((uVar5 & uVar4) != 0) {
                  uVar5 = ~uVar5;
                }
                if ((0xff < (int)uVar5) && ((int)uVar4 < 0)) {
                  uVar5 = 0xff;
                }
                lVar17 = (long)iVar15;
                iVar15 = iVar15 + 1;
                lVar17 = lVar17 * 6;
                puVar11[lVar17 + -0x10e4] = (char)uVar5;
                *(short *)(puVar11 + lVar17 + -0x10e8) = (short)iVar14;
                *(short *)(puVar11 + lVar17 + -0x10e6) = (short)iVar19 - (short)iVar14;
                if (iVar15 == 0x10) {
                  uVar24 = *(undefined8 *)(param_1 + 0x150);
                  pcVar3 = *(code **)(param_1 + 0x148);
                  *(undefined8 *)(puVar11 + -0x1120) = 0x100a57;
                  (*pcVar3)(iVar22,0x10,puVar11 + -0x10e8,uVar24);
                  iVar19 = *piVar12;
                  iVar15 = 0;
                }
              }
              iVar21 = iVar21 + piVar12[1] * 0x200;
              if ((iVar21 - piVar12[2] != 0) && (*(int *)(param_1 + 200) <= iVar19)) {
                uVar5 = iVar21 - piVar12[2] >> 9;
                if ((uVar4 & uVar5) != 0) {
                  uVar5 = ~uVar5;
                }
                if ((0xff < (int)uVar5) && ((int)uVar4 < 0)) {
                  uVar5 = 0xff;
                }
                lVar17 = (long)iVar15;
                iVar15 = iVar15 + 1;
                lVar17 = lVar17 * 6;
                puVar11[lVar17 + -0x10e4] = (char)uVar5;
                *(short *)(puVar11 + lVar17 + -0x10e8) = (short)iVar19;
                *(undefined2 *)(puVar11 + lVar17 + -0x10e6) = 1;
                if (iVar15 == 0x10) {
                  uVar24 = *(undefined8 *)(param_1 + 0x150);
                  pcVar3 = *(code **)(param_1 + 0x148);
                  *(undefined8 *)(puVar11 + -0x1120) = 0x100ad5;
                  (*pcVar3)(iVar22,0x10,puVar11 + -0x10e8,uVar24);
                  iVar19 = *piVar12;
                  iVar15 = 0;
                }
              }
              piVar12 = *(int **)(piVar12 + 4);
              iVar14 = iVar19 + 1;
            } while (piVar12 != *(int **)(param_1 + 0xf0));
            if (iVar21 != 0) {
              uVar5 = iVar21 >> 9;
              if ((uVar4 & uVar5) != 0) {
                uVar5 = ~uVar5;
              }
              if ((0xff < (int)uVar5) && ((int)uVar4 < 0)) {
                uVar5 = 0xff;
              }
              lVar17 = (long)iVar15;
              sVar1 = *(short *)(param_1 + 0xcc);
              iVar15 = iVar15 + 1;
              lVar17 = lVar17 * 6;
              puVar11[lVar17 + -0x10e4] = (char)uVar5;
              *(short *)(puVar11 + lVar17 + -0x10e8) = (short)iVar14;
              *(short *)(puVar11 + lVar17 + -0x10e6) = sVar1 - (short)iVar14;
            }
            if (iVar15 != 0) {
              uVar24 = *(undefined8 *)(param_1 + 0x150);
              pcVar3 = *(code **)(param_1 + 0x148);
              *(undefined8 *)(puVar11 + -0x1120) = 0x100b5d;
              (*pcVar3)(iVar22,iVar15,puVar11 + -0x10e8,uVar24);
            }
          }
          iVar22 = iVar22 + 1;
          if (*(int *)(param_1 + 0xd4) <= iVar22) break;
          iVar19 = *(int *)(param_1 + 0xd0);
        }
        piVar23 = *(int **)(puVar11 + -0x1110);
        piVar12 = *(int **)(puVar11 + -0x1108);
      }
    }
    goto LAB_00100b86;
  }
  if (((int)uVar8 != 0x62) || (iVar19 >> 1 == 0)) goto LAB_00100e58;
  piVar23[2] = iVar22;
  piVar23 = piVar23 + 1;
  *piVar23 = (iVar19 >> 1) + (int)uVar24;
  if (piVar12 <= piVar23) goto LAB_00100938;
  goto LAB_00100b8f;
LAB_00100e43:
  piVar23 = *(int **)(puVar11 + -0x1108);
  piVar12 = *(int **)(puVar11 + -0x1100);
LAB_00100b86:
  piVar23 = piVar23 + -1;
  if (piVar23 < piVar12) goto LAB_00100b8f;
LAB_00100938:
  iVar22 = piVar23[1];
  puVar18 = *(undefined1 **)(param_1 + 0xf0);
  uVar24 = CONCAT44((int)*(undefined8 *)piVar23,(int)((ulong)*(undefined8 *)piVar23 >> 0x20));
  goto LAB_00100860;
LAB_00100b8f:
  iVar19 = *(int *)(puVar11 + -0x10f4);
  iVar22 = *(int *)(puVar11 + -0x10f0);
  iVar14 = *(int *)(puVar11 + -0x10ec);
  if (iVar19 <= iVar22) goto LAB_00100e56;
  puVar18 = *(undefined1 **)(param_1 + 0xf0);
  goto LAB_00100819;
}



undefined8 gray_raster_render(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 auStack_168 [200];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  int local_28;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  psVar1 = (short *)param_2[1];
  piVar2 = (int *)*param_2;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_00101010;
  uVar4 = 0x13;
  if ((*(uint *)(param_2 + 2) & 1) == 0) goto LAB_00100fda;
  if (psVar1 != (short *)0x0) {
    if ((psVar1[1] == 0) || (*psVar1 < 1)) goto LAB_00100fd8;
    if ((*(long *)(psVar1 + 0xc) != 0) && (*(long *)(psVar1 + 4) != 0)) {
      uVar4 = 0x14;
      if ((int)psVar1[1] != *(short *)(*(long *)(psVar1 + 0xc) + -2 + (long)*psVar1 * 2) + 1)
      goto LAB_00100fda;
      local_58 = *(undefined8 *)psVar1;
      uStack_50 = *(undefined8 *)(psVar1 + 4);
      local_48 = *(undefined8 *)(psVar1 + 8);
      uStack_40 = *(undefined8 *)(psVar1 + 0xc);
      local_38 = *(undefined8 *)(psVar1 + 0x10);
      if ((*(uint *)(param_2 + 2) & 2) == 0) {
        if (piVar2 != (int *)0x0) {
          if ((piVar2[1] == 0) || (iVar3 = *piVar2, iVar3 == 0)) goto LAB_00100fd8;
          lVar5 = *(long *)(piVar2 + 4);
          if (lVar5 != 0) {
            local_28 = piVar2[2];
            if (-1 < local_28) {
              lVar5 = lVar5 + (ulong)(uint)((iVar3 + -1) * local_28);
            }
            local_20 = 0;
            local_18 = 0;
            local_a0 = 0;
            local_98 = 0;
            local_9c = piVar2[1];
            local_30 = lVar5;
            goto LAB_00100fbd;
          }
        }
LAB_00101010:
        uVar4 = 6;
      }
      else {
        if (param_2[3] != 0) {
          local_18 = param_2[7];
          local_a0 = (int)param_2[8];
          local_98 = (int)param_2[9];
          iVar3 = *(int *)(param_2 + 0xb);
          local_9c = (int)param_2[10];
          local_20 = param_2[3];
LAB_00100fbd:
          local_94 = iVar3;
          if ((local_a0 < local_9c) && (local_98 < iVar3)) {
            uVar4 = gray_convert_glyph(auStack_168);
            goto LAB_00100fda;
          }
        }
LAB_00100fd8:
        uVar4 = 0;
      }
      goto LAB_00100fda;
    }
  }
  uVar4 = 0x14;
LAB_00100fda:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int gray_raster_new(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)ft_mem_alloc(param_1,8,&local_24);
  if (local_24 == 0) {
    *puVar1 = param_1;
  }
  *param_2 = puVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ft_smooth_get_cbox(long param_1,long param_2,undefined1 (*param_3) [16])

{
  *param_3 = (undefined1  [16])0x0;
  param_3[1] = (undefined1  [16])0x0;
  if (*(int *)(param_2 + 0x90) != *(int *)(param_1 + 0x20)) {
    return;
  }
  FT_Outline_Get_CBox(param_2 + 200,param_3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101468) */
/* WARNING: Removing unreachable block (ram,0x00101479) */

int ft_smooth_render(long param_1,long param_2,uint param_3,long *param_4)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long in_FS_OFFSET;
  int local_bc;
  long local_b8;
  int local_b0;
  long local_a8;
  long local_a0;
  undefined4 local_98;
  code *local_90;
  long *local_70;
  undefined1 local_68 [16];
  ulong local_58;
  ulong local_50;
  long local_40;
  
  lVar2 = param_2 + 200;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(param_2 + 0x128);
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if ((1 < param_3 - 3) && (1 < param_3)) {
      local_bc = 0x13;
      goto LAB_001011b1;
    }
    if ((*(uint *)(lVar9 + 8) & 1) != 0) {
      ft_mem_free(uVar3,*(undefined8 *)(param_2 + 0xa8));
      *(undefined8 *)(param_2 + 0xa8) = 0;
      puVar1 = (uint *)(*(long *)(param_2 + 0x128) + 8);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    cVar7 = ft_glyphslot_preset_bitmap(param_2,param_3,param_4);
    if (cVar7 != '\0') {
      local_bc = 0x62;
      lVar9 = *(long *)(param_2 + 0x128);
      goto LAB_001011b1;
    }
    if ((*(int *)(param_2 + 0x98) == 0) || (*(int *)(param_2 + 0xa0) == 0)) {
      *(undefined4 *)(param_2 + 0x90) = 0x62697473;
      local_bc = 0;
      goto LAB_001011e0;
    }
    uVar10 = ft_mem_realloc(uVar3,(long)*(int *)(param_2 + 0xa0),0);
    *(undefined8 *)(param_2 + 0xa8) = uVar10;
    puVar1 = (uint *)(*(long *)(param_2 + 0x128) + 8);
    *puVar1 = *puVar1 | 1;
    iVar13 = *(int *)(param_2 + 0x98) << 6;
    uVar19 = (ulong)(*(int *)(param_2 + 0xc0) * -0x40);
    if (*(char *)(param_2 + 0xb2) == '\x06') {
      iVar13 = iVar13 / 3;
    }
    uVar12 = (long)iVar13 + (long)(*(int *)(param_2 + 0xc4) * -0x40);
    if (param_4 != (long *)0x0) {
      uVar19 = uVar19 + *param_4;
      uVar12 = uVar12 + param_4[1];
    }
    uVar17 = uVar19 | uVar12;
    if (uVar17 != 0) {
      FT_Outline_Translate(lVar2,uVar19,uVar12);
    }
    if (1 < param_3) {
      lVar9 = *(long *)(param_1 + 8);
      iVar13 = *(int *)(param_2 + 0xa0);
      uVar8 = *(uint *)(param_2 + 0x98);
      if (param_3 != 3) {
        *(int *)(param_2 + 0xa0) = iVar13 * 3;
        *(uint *)(param_2 + 0x98) = uVar8 / 3;
        local_98 = 1;
        local_a8 = param_2 + 0x98;
        local_a0 = lVar2;
        FT_Outline_Translate(lVar2);
        local_bc = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_a8);
        lVar15 = *(long *)(lVar9 + 0x160);
        lVar14 = *(long *)(lVar9 + 0x158);
        if (local_bc == 0) {
          lVar16 = *(long *)(lVar9 + 0x168);
          *(long *)(param_2 + 0xa8) = *(long *)(param_2 + 0xa8) + (long)iVar13;
          FT_Outline_Translate(lVar2,lVar15 - *(long *)(lVar9 + 0x170),lVar16 - lVar14);
          local_bc = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_a8);
          lVar16 = *(long *)(param_2 + 0xa8) - (long)iVar13;
          lVar15 = *(long *)(lVar9 + 0x170);
          lVar14 = *(long *)(lVar9 + 0x168);
          if (local_bc == 0) {
            lVar5 = *(long *)(lVar9 + 0x178);
            lVar6 = *(long *)(lVar9 + 0x180);
            *(long *)(param_2 + 0xa8) = lVar16 + iVar13 * 2;
            FT_Outline_Translate(lVar2,lVar15 - lVar6,lVar5 - lVar14);
            local_bc = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_a8);
            lVar14 = *(long *)(lVar9 + 0x178);
            lVar15 = *(long *)(lVar9 + 0x180);
            *(long *)(param_2 + 0xa8) = *(long *)(param_2 + 0xa8) - (long)(iVar13 * 2);
            lVar14 = -lVar14;
          }
          else {
            *(long *)(param_2 + 0xa8) = lVar16;
            lVar14 = -lVar14;
          }
        }
        else {
          lVar14 = -lVar14;
        }
        FT_Outline_Translate(lVar2,lVar15,lVar14);
        *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) / 3;
        *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) * 3;
        goto LAB_0010141a;
      }
      local_90 = ft_smooth_lcd_spans;
      local_70 = &local_b8;
      local_58 = (ulong)*(uint *)(param_2 + 0x9c);
      local_98 = 3;
      local_50 = (ulong)uVar8;
      local_b8 = *(long *)(param_2 + 0xa8);
      local_68 = (undefined1  [16])0x0;
      if (-1 < iVar13) {
        local_b8 = local_b8 + (ulong)((uVar8 - 1) * iVar13);
      }
      local_b0 = iVar13;
      local_a0 = lVar2;
      FT_Outline_Translate(lVar2,-*(long *)(lVar9 + 0x158),-*(long *)(lVar9 + 0x160));
      local_bc = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_a8);
      lVar15 = *(long *)(lVar9 + 0x158);
      lVar14 = *(long *)(lVar9 + 0x160);
      if (local_bc == 0) {
        local_b8 = local_b8 + 1;
        FT_Outline_Translate
                  (lVar2,lVar15 - *(long *)(lVar9 + 0x168),lVar14 - *(long *)(lVar9 + 0x170));
        local_bc = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_a8);
        lVar15 = *(long *)(lVar9 + 0x168);
        lVar14 = *(long *)(lVar9 + 0x170);
        if (local_bc == 0) {
          local_b8 = local_b8 + 1;
          FT_Outline_Translate
                    (lVar2,lVar15 - *(long *)(lVar9 + 0x178),lVar14 - *(long *)(lVar9 + 0x180));
          local_bc = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_a8);
          FT_Outline_Translate(lVar2,*(undefined8 *)(lVar9 + 0x178),*(undefined8 *)(lVar9 + 0x180));
          goto LAB_0010141a;
        }
      }
      FT_Outline_Translate(lVar2,lVar15,lVar14);
      lVar9 = *(long *)(param_2 + 0x128);
      goto LAB_001011b9;
    }
    if ((*(byte *)(param_2 + 0xe8) & 0x40) == 0) {
      local_98 = 1;
      local_a8 = param_2 + 0x98;
      local_a0 = lVar2;
      local_bc = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_a8);
    }
    else {
      plVar20 = *(long **)(param_2 + 0xd0);
      plVar18 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        plVar18 = plVar20 + (long)*(short *)(param_2 + 0xca) * 2;
      }
      uVar8 = *(int *)(param_2 + 0x9c) << 2;
      if (0x7fff < uVar8) {
        local_bc = 0x62;
        lVar9 = *(long *)(param_2 + 0x128);
        goto LAB_001011b9;
      }
      local_70 = &local_b8;
      local_90 = ft_smooth_overlap_spans;
      local_b8 = *(long *)(param_2 + 0xa8);
      local_b0 = *(int *)(param_2 + 0xa0);
      local_50 = (ulong)(uint)(*(int *)(param_2 + 0x98) * 4);
      local_98 = 3;
      local_68 = (undefined1  [16])0x0;
      if (-1 < local_b0) {
        local_b8 = local_b8 + (ulong)(uint)((*(int *)(param_2 + 0x98) + -1) * local_b0);
      }
      uVar10 = *(undefined8 *)(param_1 + 0x68);
      pcVar4 = *(code **)(param_1 + 0x70);
      plVar11 = plVar20;
      local_58 = (ulong)uVar8;
      if (plVar20 < plVar18) {
        do {
          *plVar11 = *plVar11 << 2;
          plVar11[1] = plVar11[1] << 2;
          plVar11 = plVar11 + 2;
        } while (plVar11 < plVar18);
        local_a0 = lVar2;
        local_bc = (*pcVar4)(uVar10,&local_a8);
        do {
          lVar9 = *plVar20;
          lVar15 = lVar9 + 3;
          if (-1 < lVar9) {
            lVar15 = lVar9;
          }
          lVar9 = plVar20[1];
          *plVar20 = lVar15 >> 2;
          lVar15 = lVar9 + 3;
          if (-1 < lVar9) {
            lVar15 = lVar9;
          }
          plVar11 = plVar20 + 2;
          plVar20[1] = lVar15 >> 2;
          plVar20 = plVar11;
        } while (plVar11 < plVar18);
      }
      else {
        local_a0 = lVar2;
        local_bc = (*pcVar4)(uVar10,&local_a8);
      }
    }
LAB_0010141a:
    if (local_bc != 0) {
      lVar9 = *(long *)(param_2 + 0x128);
      goto LAB_001011b9;
    }
    *(undefined4 *)(param_2 + 0x90) = 0x62697473;
  }
  else {
    local_bc = 6;
LAB_001011b1:
    uVar17 = 0;
    uVar12 = 0;
    uVar19 = 0;
LAB_001011b9:
    if ((*(byte *)(lVar9 + 8) & 1) != 0) {
      ft_mem_free(uVar3,*(undefined8 *)(param_2 + 0xa8));
      *(undefined8 *)(param_2 + 0xa8) = 0;
      puVar1 = (uint *)(*(long *)(param_2 + 0x128) + 8);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  if (uVar17 != 0) {
    FT_Outline_Translate(lVar2,-uVar19,-uVar12);
  }
LAB_001011e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_bc;
}



undefined8 ft_smooth_transform(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 6;
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if (param_3 != 0) {
      FT_Outline_Transform(param_2 + 200,param_3);
    }
    if (param_4 != (undefined8 *)0x0) {
      FT_Outline_Translate(param_2 + 200,*param_4,param_4[1]);
    }
    uVar1 = 0;
  }
  return uVar1;
}



void gray_render_cubic_isra_0
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  long local_358;
  long local_350;
  long local_348;
  long local_340;
  long local_338;
  long local_330;
  long local_328;
  long local_320;
  long local_40;
  int iVar12;
  
  param_5 = param_5 << 2;
  param_2 = param_2 * 4;
  param_3 = param_3 << 2;
  local_358 = param_6 * 4;
  local_328 = *(long *)(param_1 + 0x100);
  local_320 = *(long *)(param_1 + 0x108);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_350 = param_7 * 4;
  param_4 = param_4 * 4;
  iVar2 = *(int *)(param_1 + 0xd4);
  iVar10 = (int)((ulong)local_350 >> 8);
  iVar14 = (int)((ulong)param_5 >> 8);
  iVar11 = (int)((ulong)param_3 >> 8);
  iVar12 = (int)((ulong)local_320 >> 8);
  local_348 = param_4;
  local_340 = param_5;
  local_338 = param_2;
  local_330 = param_3;
  if (((((iVar10 < iVar2) || (iVar14 < iVar2)) || (iVar11 < iVar2)) || (iVar12 < iVar2)) &&
     (((iVar2 = *(int *)(param_1 + 0xd0), iVar2 <= iVar10 || (iVar2 <= iVar14)) ||
      ((iVar2 <= iVar11 || (iVar2 <= iVar12)))))) {
    lVar13 = local_328 * 2;
    lVar15 = local_320 * 2;
    plVar5 = &local_358;
    lVar3 = local_358;
    lVar8 = local_328;
    lVar9 = local_320;
    lVar4 = local_350;
    do {
      while( true ) {
        lVar17 = lVar3;
        lVar3 = param_4 * -3 + lVar17 * 2 + lVar8;
        if (lVar3 < 1) {
          lVar3 = -lVar3;
        }
        if (lVar3 < 0x81) break;
LAB_00101cb0:
        lVar16 = lVar4 + param_5;
        plVar5[0xc] = lVar8;
        lVar3 = lVar17 + param_4 + param_4 + param_2;
        plVar5[0xd] = lVar9;
        lVar7 = lVar8 + param_2 + param_4 + param_2;
        plVar5[2] = lVar17 + param_4 >> 1;
        plVar5[4] = lVar3 >> 2;
        lVar17 = lVar16 + param_5 + param_3;
        lVar4 = lVar9 + param_3 + param_5 + param_3;
        param_2 = lVar8 + param_2 >> 1;
        param_4 = lVar7 >> 2;
        lVar3 = lVar7 + lVar3 >> 3;
        param_3 = lVar9 + param_3 >> 1;
        plVar5[10] = param_2;
        param_5 = lVar4 >> 2;
        plVar5[8] = param_4;
        lVar4 = lVar17 + lVar4 >> 3;
        plVar5[6] = lVar3;
        plVar5[0xb] = param_3;
        plVar5[9] = param_5;
        plVar5[3] = lVar16 >> 1;
        plVar5[5] = lVar17 >> 2;
        plVar5[7] = lVar4;
        plVar5 = plVar5 + 6;
      }
      lVar3 = param_5 * -3 + lVar4 * 2 + lVar9;
      if (lVar3 < 1) {
        lVar3 = -lVar3;
      }
      if (0x80 < lVar3) goto LAB_00101cb0;
      lVar3 = param_2 * -3 + lVar17 + lVar13;
      if (lVar3 < 1) {
        lVar3 = -lVar3;
      }
      if (0x80 < lVar3) goto LAB_00101cb0;
      lVar3 = param_3 * -3 + lVar4 + lVar15;
      if (lVar3 < 1) {
        lVar3 = -lVar3;
      }
      if (0x80 < lVar3) goto LAB_00101cb0;
      gray_render_line(param_1,lVar17,lVar4);
      if (plVar5 == &local_358) goto LAB_00101d80;
      param_4 = plVar5[-4];
      param_5 = plVar5[-3];
      param_2 = plVar5[-2];
      param_3 = plVar5[-1];
      lVar13 = lVar17 * 2;
      plVar6 = plVar5 + -6;
      plVar1 = plVar5 + -5;
      lVar15 = lVar4 * 2;
      plVar5 = plVar6;
      lVar3 = *plVar6;
      lVar8 = lVar17;
      lVar9 = lVar4;
      lVar4 = *plVar1;
    } while( true );
  }
  *(long *)(param_1 + 0x100) = local_358;
  *(long *)(param_1 + 0x108) = local_350;
LAB_00101d80:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8
gray_cubic_to(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  gray_render_cubic_isra_0(param_4,*param_1,param_1[1],*param_2,param_2[1],*param_3,param_3[1]);
  return 0;
}



undefined8 gray_conic_to(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar15;
  
  lVar18 = *(long *)(param_3 + 0x108);
  iVar8 = *(int *)(param_3 + 0xd4);
  lVar10 = *(long *)(param_3 + 0x100);
  lVar19 = *param_2 * 4;
  lVar17 = param_2[1] * 4;
  lVar3 = param_1[1] * 4;
  iVar11 = (int)((ulong)lVar18 >> 8);
  iVar14 = (int)((ulong)lVar3 >> 8);
  iVar15 = (int)((ulong)lVar17 >> 8);
  if ((((iVar11 < iVar8) || (iVar14 < iVar8)) || (iVar15 < iVar8)) &&
     (((iVar8 = *(int *)(param_3 + 0xd0), iVar8 <= iVar11 || (iVar8 <= iVar14)) || (iVar8 <= iVar15)
      ))) {
    lVar16 = *param_1 * 4 - lVar10;
    lVar3 = lVar3 - lVar18;
    lVar13 = (lVar19 + *param_1 * -4) - lVar16;
    lVar12 = (lVar17 + param_1[1] * -4) - lVar3;
    lVar4 = -lVar13;
    if (0 < lVar13) {
      lVar4 = lVar13;
    }
    lVar9 = -lVar12;
    if (0 < lVar12) {
      lVar9 = lVar12;
    }
    if (lVar4 < lVar9) {
      lVar4 = lVar9;
    }
    iVar8 = 0;
    if (lVar4 < 0x41) {
      gray_render_line(param_3,lVar19,lVar17);
    }
    else {
      do {
        lVar4 = lVar4 >> 2;
        iVar8 = iVar8 + 1;
      } while (0x40 < lVar4);
      iVar11 = 1 << ((byte)iVar8 & 0x1f);
      uVar2 = iVar8 * -2 + 0x21;
      uVar1 = (0x10 - iVar8) * 2;
      if (iVar8 < 3) {
        lVar10 = lVar10 << 0x20;
        lVar18 = lVar18 << 0x20;
        bVar5 = (byte)uVar2;
        bVar6 = (byte)(0x21U - iVar8);
        bVar7 = (byte)uVar1;
        lVar19 = (lVar16 << (bVar6 & 0x3f)) + (lVar13 << (bVar7 & 0x3f));
        lVar3 = (lVar3 << (bVar6 & 0x3f)) + (lVar12 << (bVar7 & 0x3f));
        do {
          lVar10 = lVar10 + lVar19;
          lVar18 = lVar18 + lVar3;
          lVar19 = lVar19 + (lVar13 << (bVar5 & 0x3f));
          lVar3 = lVar3 + (lVar12 << (bVar5 & 0x3f));
          gray_render_line(param_3,lVar10 >> 0x20,lVar18 >> 0x20);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      else {
        lVar10 = lVar10 << 0x20;
        lVar18 = lVar18 << 0x20;
        lVar19 = (lVar13 << (ulong)uVar1) + (lVar16 << (ulong)(0x21U - iVar8));
        do {
          lVar3 = lVar12 + lVar3;
          lVar10 = lVar10 + lVar19;
          lVar18 = lVar18 + lVar3;
          lVar19 = lVar19 + (lVar13 << (ulong)uVar2);
          gray_render_line(param_3,(long)(int)((ulong)lVar10 >> 0x20),
                           (long)(int)((ulong)lVar18 >> 0x20));
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
  }
  else {
    *(long *)(param_3 + 0x100) = lVar19;
    *(long *)(param_3 + 0x108) = lVar17;
  }
  return 0;
}


