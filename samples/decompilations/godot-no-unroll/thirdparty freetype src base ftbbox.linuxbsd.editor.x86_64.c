
undefined8 BBox_Move_To(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 < param_2[2]) {
    param_2[2] = lVar1;
  }
  if (param_2[4] < lVar1) {
    param_2[4] = lVar1;
  }
  lVar1 = param_1[1];
  if (lVar1 < param_2[3]) {
    param_2[3] = lVar1;
  }
  if (param_2[5] < lVar1) {
    param_2[5] = lVar1;
  }
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  return 0;
}



undefined8 BBox_Line_To(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return 0;
}



long cubic_peak(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar4 = -(uint)param_1;
  if (-1 < param_1) {
    uVar4 = (uint)param_1;
  }
  uVar8 = -(uint)param_2;
  if (-1 < param_2) {
    uVar8 = (uint)param_2;
  }
  uVar9 = -(uint)param_3;
  if (-1 < param_3) {
    uVar9 = (uint)param_3;
  }
  uVar5 = -(uint)param_4;
  if (-1 < param_4) {
    uVar5 = (uint)param_4;
  }
  uVar5 = uVar4 | uVar8 | uVar9 | uVar5;
  uVar4 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  iVar10 = (uVar4 ^ 0x1f) - 4;
  if (iVar10 < 1) {
    bVar3 = 4 - (char)(uVar4 ^ 0x1f);
    param_1 = param_1 >> (bVar3 & 0x3f);
    param_2 = param_2 >> (bVar3 & 0x3f);
    param_3 = param_3 >> (bVar3 & 0x3f);
    param_4 = param_4 >> (bVar3 & 0x3f);
  }
  else {
    if (2 < iVar10) {
      iVar10 = 2;
    }
    lVar6 = (long)(1 << ((byte)iVar10 & 0x1f));
    param_1 = param_1 * lVar6;
    param_2 = param_2 * lVar6;
    param_3 = param_3 * lVar6;
    param_4 = param_4 * lVar6;
  }
  while ((0 < param_2 || (0 < param_3))) {
    lVar6 = param_1 + param_2;
    lVar2 = param_3 + param_4;
    lVar1 = lVar2 + param_3 + param_2;
    param_3 = param_3 + param_2 + lVar6;
    lVar7 = lVar1 + param_3 >> 3;
    if (lVar2 < lVar6) {
      param_3 = param_3 >> 2;
      param_2 = lVar6 >> 1;
      param_4 = lVar7;
    }
    else {
      param_2 = lVar1 >> 2;
      param_3 = lVar2 >> 1;
      param_1 = lVar7;
    }
    if (((param_1 == param_2) && (lVar6 = param_1, param_3 <= param_1)) ||
       ((param_3 == param_4 && (lVar6 = param_4, param_2 <= param_4)))) goto LAB_00100121;
  }
  lVar6 = 0;
LAB_00100121:
  lVar2 = lVar6 << (-(byte)iVar10 & 0x3f);
  if (0 < iVar10) {
    lVar2 = lVar6 >> ((byte)iVar10 & 0x3f);
  }
  return lVar2;
}



void BBox_Cubic_Check(long param_1,long param_2,long param_3,long param_4,long *param_5,
                     long *param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  if (param_3 <= param_2) {
    lVar1 = param_2;
  }
  lVar2 = *param_6;
  if (lVar2 < lVar1) {
    lVar1 = cubic_peak(param_1 - lVar2,param_2 - lVar2,param_3 - lVar2,param_4 - lVar2);
    *param_6 = lVar2 + lVar1;
  }
  lVar1 = *param_5;
  lVar2 = param_3;
  if (param_2 <= param_3) {
    lVar2 = param_2;
  }
  if (lVar2 < lVar1) {
    lVar2 = cubic_peak(lVar1 - param_1,lVar1 - param_2,lVar1 - param_3,lVar1 - param_4);
    *param_5 = lVar1 - lVar2;
  }
  return;
}



undefined8 BBox_Cubic_To(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  if ((((lVar1 < (long)param_4[2]) || ((long)param_4[4] < lVar1)) || ((long)param_4[4] < lVar2)) ||
     (lVar2 < (long)param_4[2])) {
    BBox_Cubic_Check(*param_4,lVar1,lVar2,*param_3,param_4 + 2,param_4 + 4);
  }
  lVar1 = param_1[1];
  lVar2 = param_2[1];
  if (((lVar1 < (long)param_4[3]) || ((long)param_4[5] < lVar1)) ||
     (((long)param_4[5] < lVar2 || (lVar2 < (long)param_4[3])))) {
    BBox_Cubic_Check(param_4[1],lVar1,lVar2,param_3[1],param_4 + 3,param_4 + 5);
  }
  uVar3 = param_3[1];
  *param_4 = *param_3;
  param_4[1] = uVar3;
  return 0;
}



undefined8 BBox_Conic_To(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  lVar1 = param_3[2];
  if (lVar2 < param_3[2]) {
    param_3[2] = lVar2;
    lVar1 = lVar2;
  }
  if (param_3[4] < lVar2) {
    param_3[4] = lVar2;
  }
  lVar3 = param_2[1];
  if (lVar3 < param_3[3]) {
    param_3[3] = lVar3;
  }
  if (param_3[5] < lVar3) {
    param_3[5] = lVar3;
  }
  lVar3 = *param_1;
  if ((lVar3 < lVar1) || (param_3[4] < lVar3)) {
    lVar2 = FT_MulDiv(*param_3 - lVar3,lVar2 - lVar3,(*param_3 - lVar3) + (lVar2 - lVar3));
    lVar3 = lVar3 + lVar2;
    if (lVar3 < param_3[2]) {
      param_3[2] = lVar3;
    }
    if (param_3[4] < lVar3) {
      param_3[4] = lVar3;
    }
  }
  lVar2 = param_1[1];
  if ((lVar2 < param_3[3]) || (param_3[5] < lVar2)) {
    lVar1 = FT_MulDiv(param_3[1] - lVar2,param_2[1] - lVar2,
                      (param_3[1] - lVar2) + (param_2[1] - lVar2));
    lVar2 = lVar2 + lVar1;
    if (lVar2 < param_3[3]) {
      param_3[3] = lVar2;
    }
    if (param_3[5] < lVar2) {
      param_3[5] = lVar2;
    }
  }
  lVar2 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = lVar2;
  return 0;
}



undefined8 FT_Outline_Get_BBox(short *param_1,undefined1 (*param_2) [16])

{
  byte *pbVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined1 (*) [16])0x0) {
    uVar5 = 6;
  }
  else if (param_1 == (short *)0x0) {
    uVar5 = 0x14;
  }
  else {
    sVar2 = param_1[1];
    if ((sVar2 == 0) || (*param_1 < 1)) {
      uVar5 = 0;
      *param_2 = (undefined1  [16])0x0;
      param_2[1] = (undefined1  [16])0x0;
    }
    else {
      plVar6 = *(long **)(param_1 + 4);
      if (sVar2 < 1) {
        lVar16 = -0x7fffffff;
        lVar7 = -0x7fffffff;
        lVar8 = 0x7fffffff;
        lVar15 = 0x7fffffff;
      }
      else {
        lVar16 = -0x7fffffff;
        lVar7 = -0x7fffffff;
        lVar8 = 0x7fffffff;
        lVar15 = 0x7fffffff;
        lVar14 = -0x7fffffff;
        pbVar1 = *(byte **)(param_1 + 8) + 1;
        lVar13 = -0x7fffffff;
        lVar11 = 0x7fffffff;
        lVar12 = 0x7fffffff;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar10 = pbVar1;
        while( true ) {
          lVar3 = *plVar6;
          lVar4 = plVar6[1];
          if (lVar3 < lVar12) {
            lVar12 = lVar3;
          }
          if (lVar13 < lVar3) {
            lVar13 = lVar3;
          }
          if (lVar4 < lVar11) {
            lVar11 = lVar4;
          }
          if (lVar14 < lVar4) {
            lVar14 = lVar4;
          }
          if ((*pbVar9 & 3) == 1) {
            if (lVar3 < lVar15) {
              lVar15 = lVar3;
            }
            if (lVar7 < lVar3) {
              lVar7 = lVar3;
            }
            if (lVar4 < lVar8) {
              lVar8 = lVar4;
            }
            if (lVar16 < lVar4) {
              lVar16 = lVar4;
            }
          }
          plVar6 = plVar6 + 2;
          if (pbVar10 == pbVar1 + ((int)sVar2 - 1)) break;
          pbVar9 = pbVar10;
          pbVar10 = pbVar10 + 1;
        }
        if (((lVar7 < lVar13 || lVar12 < lVar15) || lVar11 < lVar8) || (lVar16 < lVar14)) {
          local_68 = lVar15;
          lStack_60 = lVar8;
          local_58 = lVar7;
          lStack_50 = lVar16;
          uVar5 = FT_Outline_Decompose(param_1,bbox_interface,local_78);
          if ((int)uVar5 == 0) {
            uVar5 = 0;
            *(long *)*param_2 = local_68;
            *(long *)(*param_2 + 8) = lStack_60;
            *(long *)param_2[1] = local_58;
            *(long *)(param_2[1] + 8) = lStack_50;
          }
          goto LAB_0010051f;
        }
      }
      *(long *)*param_2 = lVar15;
      uVar5 = 0;
      *(long *)(*param_2 + 8) = lVar8;
      *(long *)param_2[1] = lVar7;
      *(long *)(param_2[1] + 8) = lVar16;
    }
  }
LAB_0010051f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


