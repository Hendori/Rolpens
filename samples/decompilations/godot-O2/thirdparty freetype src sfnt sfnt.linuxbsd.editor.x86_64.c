
void convert_bytes_to_data(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  if (*(long *)(param_2 + 8) != 0) {
    uVar3 = 0;
    do {
      puVar2 = (undefined1 *)(uVar3 + param_3);
      uVar1 = *puVar2;
      puVar2[3] = 0xff;
      *puVar2 = puVar2[2];
      puVar2[2] = uVar1;
      uVar3 = (ulong)((int)uVar3 + 4);
    } while (uVar3 < *(ulong *)(param_2 + 8));
  }
  return;
}



void warning_callback(void)

{
  return;
}



long get_sfnt_table(long param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return param_1 + 0x130;
  case 1:
    return param_1 + 0x1c8;
  case 2:
    if (*(short *)(param_1 + 0x268) != -1) {
      return param_1 + 0x268;
    }
    break;
  case 3:
    return param_1 + 400;
  case 4:
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      return param_1 + 0x1f8;
    }
    break;
  case 5:
    return param_1 + 0x2f0;
  case 6:
    if (*(long *)(param_1 + 0x3b0) != 0) {
      return param_1 + 0x3b0;
    }
    break;
  default:
    return 0;
  }
  return 0;
}



undefined8
sfnt_table_info(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,ulong *param_5)

{
  undefined8 *puVar1;
  
  if ((param_4 != (undefined8 *)0x0) && (param_5 != (ulong *)0x0)) {
    if (param_3 == (undefined8 *)0x0) {
      *param_5 = (ulong)*(ushort *)(param_1 + 0x120);
    }
    else {
      if (*(ushort *)(param_1 + 0x120) <= param_2) {
        return 0x8e;
      }
      puVar1 = (undefined8 *)((ulong)param_2 * 0x20 + *(long *)(param_1 + 0x128));
      *param_3 = *puVar1;
      *param_4 = puVar1[2];
      *param_5 = puVar1[3];
    }
    return 0;
  }
  return 6;
}



uint sfnt_is_postscript(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x80) {
    uVar1 = (uint)(byte)"0123456789ABCDEF"[(ulong)(param_1 >> 3) + 0x10] & 1 << ((byte)param_1 & 7);
  }
  return uVar1;
}



bool sfnt_is_alphanumeric(uint param_1)

{
  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}



uint sfnt_get_name_id(long param_1,short param_2,uint *param_3,uint *param_4)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x230);
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  if (uVar1 != 0) {
    piVar2 = *(int **)(param_1 + 0x248);
    uVar3 = 0;
LAB_001001ec:
    do {
      if ((*(short *)((long)piVar2 + 6) == param_2) && ((short)piVar2[2] != 0)) {
        if ((((short)*piVar2 == 3) && (*(ushort *)((long)piVar2 + 2) < 2)) &&
           (((short)piVar2[1] == 0x409 || (*param_3 == 0xffffffff)))) {
          *param_3 = uVar3;
        }
        if ((*piVar2 == 1) && (((short)piVar2[1] == 0 || (*param_4 == 0xffffffff)))) {
          *param_4 = uVar3;
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 8;
          if (uVar3 == uVar1) break;
          goto LAB_001001ec;
        }
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 8;
    } while (uVar3 != uVar1);
  }
  if (-1 < (int)*param_3) {
    return 1;
  }
  return ~*param_4 >> 0x1f;
}



int compare_offsets(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(ulong *)(*param_1 + 8) <= *(ulong *)(*param_2 + 8)) {
    iVar1 = -(uint)(*(ulong *)(*param_1 + 8) < *(ulong *)(*param_2 + 8));
  }
  return iVar1;
}



int compare_tags(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(uint *)(*param_1 + 4) <= *(uint *)(*param_2 + 4)) {
    iVar1 = -(uint)(*(uint *)(*param_1 + 4) < *(uint *)(*param_2 + 4));
  }
  return iVar1;
}



long compute_ULong_sum(long param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = param_2 & 0xfffffffffffffffc;
  if (uVar6 == 0) {
    lVar8 = 0;
    if ((param_2 & 3) == 0) {
      return 0;
    }
  }
  else {
    uVar5 = 0;
    lVar8 = 0;
    do {
      pbVar1 = (byte *)(param_1 + uVar5);
      pbVar2 = (byte *)(param_1 + 1 + uVar5);
      pbVar3 = (byte *)(param_1 + 3 + uVar5);
      pbVar4 = (byte *)(param_1 + 2 + uVar5);
      uVar5 = uVar5 + 4;
      lVar8 = lVar8 + ((ulong)*pbVar1 << 0x18 | (ulong)*pbVar2 << 0x10 | (ulong)*pbVar3 |
                      (ulong)*pbVar4 << 8);
    } while (uVar5 < uVar6);
    if ((param_2 & 3) == 0) {
      return lVar8;
    }
    if (param_2 <= uVar6) {
      return lVar8;
    }
  }
  uVar5 = 0;
  do {
    uVar7 = uVar6 + 1;
    uVar5 = uVar5 | (ulong)*(byte *)(param_1 + uVar6) << (sbyte)((~(uint)uVar6 & 3) << 3);
    uVar6 = uVar7;
  } while (uVar7 < param_2);
  return lVar8 + uVar5;
}



undefined8 tt_cmap_init(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 0;
}



undefined1 tt_cmap0_char_index(long param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x100) {
    uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x18) + (ulong)(param_2 + 6));
  }
  return uVar1;
}



char tt_cmap0_char_next(long param_1,uint *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  
  uVar1 = (ulong)(*param_2 + 1);
  lVar2 = uVar1 + *(long *)(param_1 + 0x18);
  while (uVar3 = (uint)uVar1, uVar3 < 0x100) {
    cVar4 = *(char *)(lVar2 + 6);
    lVar2 = lVar2 + 1;
    if (cVar4 != '\0') goto LAB_001003b5;
    uVar1 = (ulong)(uVar3 + 1);
  }
  cVar4 = '\0';
  uVar3 = 0;
LAB_001003b5:
  *param_2 = uVar3;
  return cVar4;
}



undefined8 tt_cmap0_get_info(long param_1,ulong *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 0;
  uVar1 = *(ushort *)(lVar2 + 4);
  *param_2 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
  return 0;
}



long tt_cmap2_get_subheader(long param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_2 < 0x10000) {
    lVar1 = param_1 + 0x206;
    if (param_2 >> 8 == 0) {
      if (*(short *)(param_1 + 6 + (ulong)(param_2 * 2)) == 0) {
        lVar3 = lVar1;
      }
      return lVar3;
    }
    uVar2 = *(ushort *)(param_1 + 6 + (ulong)((param_2 >> 8) * 2));
    lVar3 = (ulong)((ushort)(uVar2 << 8 | uVar2 >> 8) & 0xfff8) + lVar1;
    if (lVar1 == lVar3) {
      lVar3 = 0;
    }
  }
  return lVar3;
}



short tt_cmap2_char_index(long param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  
  puVar1 = (ushort *)tt_cmap2_get_subheader(*(undefined8 *)(param_1 + 0x18));
  sVar3 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar2 = puVar1[3] << 8 | puVar1[3] >> 8;
    uVar4 = (param_2 & 0xff) - (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8);
    if (((ushort)(puVar1[1] << 8 | puVar1[1] >> 8) <= uVar4) || (uVar2 == 0)) {
      return 0;
    }
    uVar2 = *(ushort *)((long)puVar1 + (ulong)(uVar2 + 6 + uVar4 * 2));
    if (uVar2 != 0) {
      sVar3 = (uVar2 << 8 | uVar2 >> 8) + (puVar1[2] << 8 | puVar1[2] >> 8);
    }
  }
  return sVar3;
}



ushort tt_cmap2_char_next(undefined8 param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  ulong uVar7;
  ushort uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar10 = *param_2 + 1;
joined_r0x001004c6:
  if (0xffff < uVar10) {
    iVar11 = 0;
    uVar3 = 0;
LAB_0010053c:
    *param_2 = iVar11;
    return uVar3;
  }
  do {
    uVar12 = (ulong)uVar10;
    puVar6 = (ushort *)tt_cmap2_get_subheader();
    uVar10 = (uint)uVar12;
    if (puVar6 != (ushort *)0x0) {
      while( true ) {
        uVar10 = (uint)uVar12;
        uVar14 = uVar10 & 0xff;
        uVar3 = puVar6[1] << 8 | puVar6[1] >> 8;
        uVar8 = *puVar6 << 8 | *puVar6 >> 8;
        uVar4 = puVar6[3] << 8 | puVar6[3] >> 8;
        uVar5 = (uint)uVar4;
        uVar13 = (uint)uVar3;
        if (uVar14 < (uint)uVar8 + (uint)uVar3) break;
        if (0xff < uVar10) {
          if (uVar5 != 0) goto LAB_001005f0;
          if (uVar10 != 0x100) goto LAB_00100527;
          goto LAB_00100610;
        }
        uVar12 = 0x100;
        puVar6 = (ushort *)tt_cmap2_get_subheader();
        uVar10 = (uint)uVar12;
        if (puVar6 == (ushort *)0x0) goto LAB_00100527;
      }
      if (uVar5 == 0) {
        if (uVar10 == 0x100) {
LAB_00100610:
          *param_2 = 0;
          return uVar4;
        }
      }
      else if (uVar14 < uVar8) {
        uVar7 = (ulong)(uVar5 + 6);
        uVar10 = (uint)uVar8 + (int)(uVar12 >> 8) * 0x100;
        uVar12 = (ulong)uVar10;
        uVar14 = 0;
        if (uVar3 != 0) goto LAB_0010059e;
      }
      else {
LAB_001005f0:
        uVar14 = uVar14 - uVar8;
        uVar7 = (ulong)((uint)uVar4 + uVar14 * 2) + 6;
        if (uVar14 < uVar13) {
LAB_0010059e:
          puVar9 = (undefined1 *)((long)puVar6 + uVar7);
          uVar10 = (uVar13 + (int)uVar12) - uVar14;
          do {
            iVar11 = (int)uVar12;
            uVar2 = *puVar9;
            puVar1 = puVar9 + 1;
            puVar9 = puVar9 + 2;
            if ((CONCAT11(uVar2,*puVar1) != 0) &&
               (uVar3 = CONCAT11(uVar2,*puVar1) + (puVar6[2] << 8 | puVar6[2] >> 8), uVar3 != 0))
            goto LAB_0010053c;
            uVar12 = (ulong)(iVar11 + 1U);
          } while (iVar11 + 1U != uVar10);
        }
        else if (uVar13 == 0) goto LAB_00100550;
        uVar10 = uVar10 - 1;
      }
    }
LAB_00100550:
    if (0xff < uVar10) break;
    uVar10 = uVar10 + 1;
  } while( true );
LAB_00100527:
  uVar10 = (uVar10 & 0xffffff00) + 0x100;
  goto joined_r0x001004c6;
}



undefined8 tt_cmap2_get_info(long param_1,ulong *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 2;
  uVar1 = *(ushort *)(lVar2 + 4);
  *param_2 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
  return 0;
}



undefined8 tt_cmap4_init(long param_1,long param_2)

{
  *(long *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x30) =
       (uint)((ushort)(*(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8) >> 1);
  *(undefined8 *)(param_1 + 0x28) = _LC1;
  return 0;
}



undefined8 tt_cmap4_set_range(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  long lVar4;
  ushort uVar5;
  
  uVar1 = *(uint *)(param_1 + 6);
  if (uVar1 <= param_2) {
    return 0xffffffff;
  }
  uVar2 = uVar1 * 2;
  while( true ) {
    puVar3 = (ushort *)(param_1[3] + 0xe + (ulong)(param_2 * 2));
    uVar5 = *puVar3;
    puVar3 = (ushort *)((long)puVar3 + (ulong)(uVar2 + 2));
    *(uint *)((long)param_1 + 0x3c) = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
    uVar5 = *puVar3;
    puVar3 = (ushort *)((long)puVar3 + (ulong)uVar2);
    *(uint *)(param_1 + 7) = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
    uVar5 = *puVar3;
    puVar3 = (ushort *)((long)puVar3 + (ulong)uVar2);
    *(int *)(param_1 + 8) = (int)(short)(uVar5 << 8 | uVar5 >> 8);
    uVar5 = *puVar3 << 8 | *puVar3 >> 8;
    if ((uVar1 - 1 <= param_2) && (param_1[7] == 0xffff0000ffff)) break;
LAB_001006b8:
    if (uVar5 != 0xffff) {
      lVar4 = (long)puVar3 + (ulong)uVar5;
      if (uVar5 != 0) goto LAB_00100772;
      goto LAB_00100750;
    }
    param_2 = param_2 + 1;
    if (uVar1 == param_2) {
      return 0xffffffff;
    }
  }
  if (uVar5 != 0) {
    if ((long)puVar3 + (ulong)uVar5 + 2 <=
        (ulong)(*(long *)(*param_1 + 0x330) + *(long *)(*param_1 + 0x338))) goto LAB_001006b8;
    *(undefined4 *)(param_1 + 8) = 1;
  }
LAB_00100750:
  lVar4 = 0;
LAB_00100772:
  param_1[9] = lVar4;
  *(uint *)((long)param_1 + 0x34) = param_2;
  return 0;
}



void tt_cmap4_next(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  
  lVar4 = *param_1;
  uVar11 = (int)param_1[5] + 1;
  lVar5 = *(long *)(lVar4 + 0x338);
  lVar6 = *(long *)(lVar4 + 0x330);
  do {
    uVar3 = *(uint *)((long)param_1 + 0x3c);
    iVar7 = (int)param_1[8];
    if (uVar11 < *(uint *)(param_1 + 7)) {
      uVar11 = *(uint *)(param_1 + 7);
    }
    if (uVar3 < uVar11) {
LAB_001007b0:
      iVar7 = tt_cmap4_set_range();
    }
    else {
      if (param_1[9] == 0) {
        do {
          uVar9 = uVar11 + iVar7;
          uVar8 = uVar9 & 0xffff;
          if (uVar8 < *(uint *)(lVar4 + 0x20)) {
            if (uVar8 != 0) {
              *(uint *)(param_1 + 5) = uVar11;
              *(uint *)((long)param_1 + 0x2c) = uVar8;
              return;
            }
          }
          else if ((int)uVar9 < 0) {
            if ((int)(uVar3 + iVar7) < 0) break;
            uVar11 = -iVar7;
          }
          else {
            if ((0xffff < (int)uVar9) || ((int)(uVar3 + iVar7) < 0x10000)) break;
            uVar11 = 0x10000 - iVar7;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 <= uVar3);
        goto LAB_001007b0;
      }
      puVar10 = (undefined1 *)(param_1[9] + (ulong)((uVar11 - (int)param_1[7]) * 2));
      if (puVar10 <= (undefined1 *)(lVar5 + lVar6)) {
        do {
          uVar2 = *puVar10;
          puVar1 = puVar10 + 1;
          puVar10 = puVar10 + 2;
          if ((CONCAT11(uVar2,*puVar1) != 0) &&
             (uVar8 = (uint)CONCAT11(uVar2,*puVar1) + iVar7 & 0xffff, uVar8 != 0)) {
            *(uint *)(param_1 + 5) = uVar11;
            *(uint *)((long)param_1 + 0x2c) = uVar8;
            return;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 <= uVar3);
        goto LAB_001007b0;
      }
      iVar7 = tt_cmap4_set_range();
    }
    if (iVar7 < 0) {
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      return;
    }
  } while( true );
}



uint tt_cmap4_char_map_linear(long *param_1,uint *param_2,byte param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  ushort uVar14;
  uint uVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  
  lVar7 = param_1[3];
  uVar9 = (ushort)(*(ushort *)(lVar7 + 6) << 8 | *(ushort *)(lVar7 + 6) >> 8) >> 1;
  if (uVar9 == 0) {
    return 0;
  }
  uVar22 = 0;
  puVar16 = (undefined1 *)(lVar7 + 0xe);
  lVar8 = *param_1;
  puVar11 = (ushort *)(*(long *)(lVar8 + 0x338) + *(long *)(lVar8 + 0x330));
  uVar23 = (ulong)((uint)uVar9 + (uint)uVar9);
  puVar19 = (ushort *)(lVar7 + 0x10 + uVar23 * 2);
  uVar10 = (uint)param_3 + *param_2;
  do {
    uVar3 = *puVar16;
    puVar1 = puVar16 + 1;
    puVar16 = puVar16 + 2;
    uVar4 = *(undefined1 *)((long)puVar19 + -uVar23);
    uVar5 = *(undefined1 *)((long)puVar19 + -uVar23 + 1);
    uVar18 = (uint)CONCAT11(uVar3,*puVar1);
    if ((uVar10 < CONCAT11(uVar4,uVar5)) && (uVar10 = (uint)CONCAT11(uVar4,uVar5), param_3 == 0)) {
      return 0;
    }
    if (uVar10 <= uVar18) {
      uVar14 = *(ushort *)((long)puVar19 + uVar23) << 8 | *(ushort *)((long)puVar19 + uVar23) >> 8;
      iVar17 = (int)(short)(*puVar19 << 8 | *puVar19 >> 8);
      uVar15 = (uint)uVar14;
      do {
        iVar21 = iVar17;
        if ((uVar22 < uVar9 - 1) ||
           ((ushort)(CONCAT11(uVar3,*puVar1) & CONCAT11(uVar4,uVar5)) != 0xffff)) {
          if (uVar15 == 0xffff) break;
          if (uVar15 == 0) goto LAB_00100ac3;
LAB_00100a08:
          bVar20 = (bool)(param_3 & 1);
          puVar13 = (ushort *)
                    ((long)puVar19 + (uVar15 + (uVar10 - CONCAT11(uVar4,uVar5)) * 2) + uVar23);
          if ((puVar11 < puVar13) && (bVar20 != false)) break;
          uVar6 = *puVar13;
          uVar12 = 0;
          if (uVar6 != 0) {
            uVar12 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8) + iVar17 & 0xffff;
            if (uVar12 < *(uint *)(lVar8 + 0x20)) {
              bVar20 = (bool)(bVar20 & uVar12 == 0);
            }
            else {
              uVar12 = 0;
            }
          }
LAB_00100a58:
          if (bVar20 == false) goto LAB_00100a9b;
LAB_00100a61:
          if (uVar10 == 0xffff) goto LAB_00100a90;
        }
        else {
          if (uVar14 != 0) {
            if ((ushort *)((long)puVar19 + (ulong)uVar14 + uVar23 + 2) <= puVar11) {
              if (uVar15 != 0xffff) goto LAB_00100a08;
              break;
            }
            iVar21 = 1;
          }
LAB_00100ac3:
          uVar2 = uVar10 + iVar21;
          uVar12 = uVar2 & 0xffff;
          if (param_3 == 0) {
            return uVar12;
          }
          if (uVar12 < *(uint *)(lVar8 + 0x20)) {
            bVar20 = uVar12 == 0;
            goto LAB_00100a58;
          }
          if (-1 < (int)uVar2) {
            if (((int)uVar2 < 0x10000) && (0xffff < (int)(uVar18 + iVar21))) {
              uVar10 = 0x10000 - iVar21;
              goto LAB_00100a61;
            }
            break;
          }
          if ((int)(uVar18 + iVar21) < 0) break;
          uVar10 = -iVar21;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 <= uVar18);
    }
    uVar22 = uVar22 + 1;
    puVar19 = puVar19 + 1;
    if (uVar9 == uVar22) {
LAB_00100a90:
      uVar12 = 0;
LAB_00100a9b:
      if (param_3 == 0) {
        return uVar12;
      }
      *param_2 = uVar10;
      return uVar12;
    }
  } while( true );
}



uint tt_cmap4_char_map_binary(long *param_1,uint *param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  ulong uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ushort uVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ushort *puVar25;
  ulong uVar26;
  int local_5c;
  int local_58;
  uint local_40;
  uint uVar18;
  
  lVar1 = *param_1;
  lVar2 = param_1[3];
  uVar3 = (ushort)(*(ushort *)(lVar2 + 6) << 8 | *(ushort *)(lVar2 + 6) >> 8) >> 1;
  if (uVar3 == 0) {
    return 0;
  }
  uVar21 = 0;
  uVar20 = (uint)uVar3;
  uVar12 = (uint)param_3 + *param_2;
  uVar16 = (ulong)((uint)uVar3 + (uint)uVar3 + 2);
  uVar23 = (uint)uVar3;
  do {
    while( true ) {
      puVar5 = (ushort *)(lVar2 + 0xe + (ulong)(uVar23 + uVar21 & 0xfffffffe));
      uVar13 = uVar23 + uVar21 >> 1;
      uVar8 = *puVar5;
      puVar5 = (ushort *)((long)puVar5 + uVar16);
      uVar17 = *puVar5;
      uVar8 = uVar8 << 8 | uVar8 >> 8;
      uVar17 = uVar17 << 8 | uVar17 >> 8;
      uVar18 = (uint)uVar17;
      uVar14 = (uint)uVar8;
      uVar7 = (uint)uVar17;
      uVar24 = uVar13;
      if (uVar7 <= uVar12) break;
      uVar23 = uVar13;
      if (uVar13 <= uVar21) goto LAB_00100c2b;
    }
    if (uVar12 <= uVar14) {
      puVar25 = (ushort *)(*(long *)(lVar1 + 0x330) + *(long *)(lVar1 + 0x338));
      uVar26 = (ulong)((uint)uVar3 + (uint)uVar3);
      puVar5 = (ushort *)((long)puVar5 + uVar26);
      uVar21 = *(uint *)(param_1 + 4) & 2;
      uVar3 = *puVar5;
      puVar5 = (ushort *)((long)puVar5 + uVar26);
      local_5c = (int)(short)(uVar3 << 8 | uVar3 >> 8);
      uVar3 = *puVar5 << 8 | *puVar5 >> 8;
      uVar23 = (uint)uVar3;
      local_58 = local_5c;
      if ((uVar13 < uVar20 - 1) || ((uVar8 & uVar17) != 0xffff)) {
LAB_00100c9f:
        if (uVar21 == 0) {
          if (uVar23 != 0xffff) goto LAB_00100dd6;
          if (param_3 == 0) {
            return 0;
          }
          iVar4 = tt_cmap4_set_range(param_1);
          if (iVar4 != 0) {
            return 0;
          }
          *(uint *)(param_1 + 5) = uVar12;
          goto LAB_00100ef7;
        }
        uVar9 = uVar13 + 1;
        uVar21 = uVar23;
        uVar15 = uVar14;
        local_40 = uVar7;
        if (uVar23 != 0xffff) goto LAB_00100cce;
        if (uVar13 == 0) goto LAB_00101026;
        uVar21 = 0xffff;
      }
      else {
        if (uVar3 == 0) {
          if (uVar21 == 0) {
            uVar14 = 0xffff;
            goto LAB_00100f20;
          }
          local_40 = 0xffff;
          uVar21 = 0;
          uVar15 = 0xffff;
        }
        else {
          if ((ushort *)((long)puVar5 + (ulong)uVar3 + 2) <= puVar25) goto LAB_00100c9f;
          if (uVar21 == 0) {
            local_5c = 1;
            uVar14 = 0xffff;
            goto LAB_00100f20;
          }
          local_58 = 1;
          local_40 = 0xffff;
          uVar21 = 0;
          uVar15 = 0xffff;
        }
LAB_00100cce:
        uVar24 = 0;
        uVar9 = uVar13;
        if (uVar13 == 0) goto LAB_00100d8c;
      }
      uVar24 = uVar13;
      goto LAB_00100d3f;
    }
    uVar21 = uVar13 + 1;
  } while (uVar21 < uVar23);
LAB_00100c2b:
  uVar13 = uVar24;
  uVar23 = 0;
  goto LAB_00100c2e;
  while( true ) {
    puVar10 = (ushort *)((long)puVar10 + uVar16);
    uVar3 = *puVar10;
    puVar10 = (ushort *)((long)puVar10 + uVar26);
    puVar5 = (ushort *)((long)puVar10 + uVar26);
    uVar8 = *puVar10;
    local_40 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
    local_58 = (int)(short)(uVar8 << 8 | uVar8 >> 8);
    uVar21 = (uint)(ushort)(*puVar5 << 8 | *puVar5 >> 8);
    if (uVar21 != 0xffff) {
      uVar9 = uVar22;
    }
    uVar15 = uVar19;
    uVar24 = uVar22;
    if (uVar22 == 0) break;
LAB_00100d3f:
    uVar22 = uVar24 - 1;
    puVar10 = (ushort *)(lVar2 + 0xe + (ulong)(uVar22 * 2));
    uVar3 = *puVar10;
    uVar19 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
    uVar18 = uVar7;
    if (uVar19 < uVar12) {
      if (uVar13 + 1 != uVar9) goto LAB_00100d8c;
      if (uVar13 == uVar24) {
        uVar14 = uVar15;
        local_5c = local_58;
        uVar18 = local_40;
        uVar23 = uVar21;
      }
      goto LAB_00101026;
    }
  }
  if (uVar13 + 1 == uVar9) {
LAB_00101026:
    uVar21 = uVar23;
    if (uVar20 <= uVar9) {
      uVar13 = uVar9 - 1;
      uVar23 = 0;
      goto LAB_00100c2e;
    }
    uVar6 = (ulong)(uVar9 * 2 + 0xe);
    puVar11 = (ushort *)(uVar6 + uVar16 + lVar2);
    puVar10 = (ushort *)(uVar16 + uVar26 * 2 + uVar6 + lVar2);
    uVar23 = uVar9;
    uVar9 = uVar13;
    do {
      uVar24 = uVar23;
      puVar5 = puVar10;
      uVar3 = *(ushort *)((long)puVar11 + (-2 - uVar26));
      uVar8 = *puVar11 << 8 | *puVar11 >> 8;
      uVar15 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
      local_40 = (uint)uVar8;
      if (uVar12 < local_40) {
        uVar24 = uVar24 - 1;
        puVar5 = puVar11;
        uVar15 = uVar14;
        local_40 = uVar18;
        break;
      }
      uVar21 = (uint)(ushort)(*puVar5 << 8 | *puVar5 >> 8);
      local_5c = (int)(short)(*(ushort *)((long)puVar11 + uVar26) << 8 |
                             *(ushort *)((long)puVar11 + uVar26) >> 8);
      if (uVar21 != 0xffff) {
        uVar9 = uVar24;
      }
      puVar11 = puVar11 + 1;
      puVar10 = puVar5 + 1;
      uVar23 = uVar24 + 1;
      uVar14 = uVar15;
      uVar18 = (uint)uVar8;
    } while (uVar20 != uVar24 + 1);
    uVar14 = uVar15;
    local_58 = local_5c;
    if (uVar13 == uVar9) goto LAB_00100c2b;
  }
  else {
    uVar24 = 0;
  }
LAB_00100d8c:
  uVar13 = uVar9;
  if (uVar9 == uVar24) {
    local_5c = local_58;
    uVar14 = uVar15;
    uVar18 = local_40;
    uVar23 = uVar21;
  }
  else {
    puVar5 = (ushort *)(lVar2 + 0xe + (ulong)(uVar9 * 2));
    uVar3 = *puVar5;
    puVar5 = (ushort *)((long)puVar5 + uVar16);
    uVar8 = *puVar5;
    puVar5 = (ushort *)((long)puVar5 + uVar26);
    uVar17 = *puVar5;
    puVar5 = (ushort *)((long)puVar5 + uVar26);
    local_5c = (int)(short)(uVar17 << 8 | uVar17 >> 8);
    uVar14 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
    uVar18 = (uint)(ushort)(uVar8 << 8 | uVar8 >> 8);
    uVar23 = (uint)(ushort)(*puVar5 << 8 | *puVar5 >> 8);
  }
LAB_00100dd6:
  if (uVar23 == 0) {
LAB_00100f20:
    uVar21 = uVar12 + local_5c;
    uVar23 = uVar21 & 0xffff;
    if (param_3 == 0) {
      return uVar23;
    }
    if (*(uint *)(lVar1 + 0x20) <= uVar23) {
      uVar23 = 0;
      if ((int)uVar21 < 0) {
        if (-1 < (int)(local_5c + uVar14)) {
          uVar12 = -local_5c;
          uVar23 = 0;
        }
      }
      else if (((int)uVar21 < 0x10000) && (0xffff < (int)(uVar14 + local_5c))) {
        uVar12 = 0x10000 - local_5c;
      }
    }
    goto LAB_00100e10;
  }
  puVar5 = (ushort *)((long)puVar5 + (ulong)(uVar23 + (uVar12 - uVar18) * 2));
  if ((puVar25 < puVar5) && (uVar23 = 0, (param_3 & 1) != 0)) goto LAB_00100e10;
  uVar3 = *puVar5;
  uVar23 = 0;
  if (uVar3 != 0) {
    uVar23 = (uint)(ushort)((uVar3 << 8 | uVar3 >> 8) + (short)local_5c);
    if (*(uint *)(lVar1 + 0x20) <= uVar23) {
      uVar23 = 0;
    }
  }
LAB_00100c2e:
  if (param_3 == 0) {
    return uVar23;
  }
LAB_00100e10:
  if ((uVar14 < uVar12) && (uVar20 == uVar13 + 1)) {
    return 0;
  }
  iVar4 = tt_cmap4_set_range(param_1);
  if (iVar4 == 0) {
    *(uint *)(param_1 + 5) = uVar12;
    if (uVar23 == 0) {
LAB_00100ef7:
      tt_cmap4_next(param_1);
      uVar23 = *(uint *)((long)param_1 + 0x2c);
      if (uVar23 == 0) {
        return 0;
      }
      uVar12 = *(uint *)(param_1 + 5);
    }
    else {
      *(uint *)((long)param_1 + 0x2c) = uVar23;
    }
  }
  else if (uVar23 == 0) {
    return 0;
  }
  *param_2 = uVar12;
  return uVar23;
}



undefined8 tt_cmap4_char_index(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_4;
  
  uVar1 = 0;
  if (param_2 < 0x10000) {
    local_4 = param_2;
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar1 = tt_cmap4_char_map_binary(param_1,&local_4,0);
      return uVar1;
    }
    uVar1 = tt_cmap4_char_map_linear();
  }
  return uVar1;
}



ulong tt_cmap4_char_next(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (0xfffe < *param_2) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if (*param_2 != *(uint *)(param_1 + 0x28)) {
      uVar2 = tt_cmap4_char_map_binary(param_1,param_2,1);
      return uVar2;
    }
    tt_cmap4_next();
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (uVar1 != 0) {
      *param_2 = *(uint *)(param_1 + 0x28);
    }
    return (ulong)uVar1;
  }
  uVar2 = tt_cmap4_char_map_linear(param_1,param_2,1);
  return uVar2;
}



undefined8 tt_cmap4_get_info(long param_1,ulong *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 4;
  uVar1 = *(ushort *)(lVar2 + 4);
  *param_2 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
  return 0;
}



ushort tt_cmap6_char_index(long param_1,int param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = 0;
  uVar3 = param_2 - (uint)(ushort)(*(ushort *)(lVar1 + 6) << 8 | *(ushort *)(lVar1 + 6) >> 8);
  if (uVar3 < (ushort)(*(ushort *)(lVar1 + 8) << 8 | *(ushort *)(lVar1 + 8) >> 8)) {
    uVar2 = *(ushort *)(lVar1 + (ulong)(uVar3 * 2 + 10));
    uVar2 = uVar2 << 8 | uVar2 >> 8;
  }
  return uVar2;
}



short tt_cmap6_char_next(long param_1,uint *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = *param_2 + 1;
  if (0xffff < uVar5) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  uVar6 = *(ushort *)(lVar3 + 6) << 8 | *(ushort *)(lVar3 + 6) >> 8;
  if (uVar5 < uVar6) {
    uVar5 = (uint)uVar6;
  }
  uVar8 = uVar5 - uVar6;
  puVar4 = (undefined1 *)(lVar3 + 10 + (ulong)(uVar8 * 2));
  uVar7 = (uint)(ushort)(*(ushort *)(lVar3 + 8) << 8 | *(ushort *)(lVar3 + 8) >> 8);
  if (uVar8 < uVar7) {
    do {
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      puVar4 = puVar4 + 2;
      if (CONCAT11(uVar1,uVar2) != 0) {
        *param_2 = uVar5;
        return CONCAT11(uVar1,uVar2);
      }
      if (uVar5 == 0xffff) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6 + uVar7);
  }
  *param_2 = 0;
  return 0;
}



undefined8 tt_cmap6_get_info(long param_1,ulong *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 6;
  uVar1 = *(ushort *)(lVar2 + 4);
  *param_2 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
  return 0;
}



uint tt_cmap8_char_index(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(param_1 + 0x18);
  uVar6 = *(uint *)(lVar2 + 0x200c);
  if (uVar6 != 0) {
    puVar3 = (uint *)(lVar2 + 0x2010);
    do {
      uVar5 = *puVar3;
      uVar1 = puVar3[1];
      puVar4 = puVar3 + 3;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (param_2 < uVar5) break;
      if (param_2 <=
          (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)) {
        param_2 = param_2 - uVar5;
        uVar6 = puVar3[2];
        uVar5 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar6 = 0;
        if (uVar5 <= ~param_2) {
          uVar6 = param_2 + uVar5;
        }
        return uVar6;
      }
      puVar3 = puVar4;
    } while ((uint *)(lVar2 + 0x201c +
                     (ulong)((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                             uVar6 << 0x18) - 1) * 0xc) != puVar4);
    uVar6 = 0;
  }
  return uVar6;
}



uint tt_cmap8_char_next(long *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  lVar1 = param_1[3];
  uVar13 = *(uint *)(lVar1 + 0x200c);
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  uVar6 = *param_2 + 1;
  if (uVar13 == 0) {
LAB_00101510:
    *param_2 = 0;
    return uVar13;
  }
  uVar2 = uVar13 >> 0x18;
  uVar3 = uVar13 & 0xff0000;
  uVar4 = uVar13 & 0xff00;
  uVar5 = uVar13 << 0x18;
  puVar10 = (uint *)(lVar1 + 0x2010);
  do {
    uVar13 = *puVar10;
    uVar8 = puVar10[1];
    puVar11 = puVar10 + 3;
    uVar12 = puVar10[2];
    uVar7 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    if (uVar6 < uVar7) {
      uVar6 = uVar7;
    }
    uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    if (uVar6 <= uVar8) {
      uVar9 = uVar6 - uVar7;
      if ((ulong)uVar12 <= 0xffffffff - (ulong)uVar9) {
        uVar13 = uVar9 + uVar12;
        if (uVar13 == 0) {
          uVar13 = 0;
          if (uVar6 == 0xffffffff) goto LAB_00101510;
          uVar13 = (uVar6 + 1 + uVar12) - uVar7;
          while ((uVar6 = uVar6 + 1, uVar6 <= uVar8 &&
                 (uVar9 = uVar9 + 1, (ulong)uVar12 <= 0xffffffff - (ulong)uVar9))) {
            if (uVar13 != 0) goto LAB_00101520;
            uVar13 = 0;
            if (uVar6 == 0xffffffff) goto LAB_00101510;
            uVar13 = 1;
          }
        }
        else {
LAB_00101520:
          if (uVar13 < *(uint *)(*param_1 + 0x20)) {
            *param_2 = uVar6;
            return uVar13;
          }
        }
      }
    }
    puVar10 = puVar11;
    if ((uint *)(lVar1 + 0x201c + (ulong)((uVar2 | uVar3 >> 8 | uVar4 << 8 | uVar5) - 1) * 0xc) ==
        puVar11) {
      *param_2 = 0;
      return 0;
    }
  } while( true );
}



undefined8 tt_cmap8_get_info(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 8;
  uVar1 = *(uint *)(lVar2 + 8);
  *param_2 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    );
  return 0;
}



ushort tt_cmap10_char_index(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  uVar3 = 0;
  uVar2 = *(uint *)(lVar1 + 0xc);
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (uVar2 <= param_2) {
    param_2 = param_2 - uVar2;
    uVar2 = *(uint *)(lVar1 + 0x10);
    if (param_2 < (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18))
    {
      uVar3 = *(ushort *)(lVar1 + 0x14 + (ulong)(param_2 * 2));
      uVar3 = uVar3 << 8 | uVar3 >> 8;
    }
  }
  return uVar3;
}



short tt_cmap10_char_next(long param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  short sVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar3 = *(long *)(param_1 + 0x18);
  sVar4 = 0;
  uVar7 = *(uint *)(lVar3 + 0xc);
  uVar8 = *(uint *)(lVar3 + 0x10);
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if (*param_2 != 0xffffffff) {
    uVar6 = *param_2 + 1;
    if (uVar6 < uVar7) {
      uVar6 = uVar7;
    }
    puVar5 = (undefined1 *)(lVar3 + 0x14 + (ulong)((uVar6 - uVar7) * 2));
    if (uVar6 - uVar7 < uVar8) {
      do {
        uVar2 = *puVar5;
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        sVar4 = CONCAT11(uVar2,*puVar1);
        if (sVar4 != 0) break;
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar8 + uVar7 != uVar6);
    }
    *param_2 = uVar6;
  }
  return sVar4;
}



undefined8 tt_cmap10_get_info(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 10;
  uVar1 = *(uint *)(lVar2 + 8);
  *param_2 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    );
  return 0;
}



undefined8 tt_cmap12_init(long param_1,long param_2)

{
  uint uVar1;
  
  *(long *)(param_1 + 0x18) = param_2;
  uVar1 = *(uint *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(ulong *)(param_1 + 0x48) =
       (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  return 0;
}



void tt_cmap12_next(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  
  uVar10 = param_1[8];
  uVar2 = param_1[6] + 1;
  if (uVar10 < (ulong)param_1[9]) {
    puVar9 = (uint *)(param_1[3] + 0x10 + uVar10 * 0xc);
    do {
      uVar4 = *puVar9;
      uVar7 = puVar9[1];
      uVar1 = puVar9[2];
      uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar8 = (ulong)uVar6;
      uVar3 = (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                     uVar7 << 0x18);
      uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      if (uVar2 < uVar8) {
        uVar2 = uVar8;
      }
      if ((uVar2 <= uVar3) && ((ulong)uVar4 <= (uVar8 + 0xffffffff) - uVar2)) {
        iVar5 = uVar4 - uVar6;
        uVar7 = iVar5 + (int)uVar2;
        if (uVar7 == 0) {
          if (uVar2 == 0xffffffff) break;
          uVar2 = uVar2 + 1;
          uVar7 = iVar5 + (int)uVar2;
          for (; (uVar2 <= uVar3 && ((ulong)uVar4 <= (uVar8 + 0xffffffff) - uVar2));
              uVar2 = uVar2 + 1) {
            if (uVar7 != 0) goto LAB_00101718;
            uVar7 = 1;
            if (uVar2 == 0xffffffff) goto LAB_00101709;
          }
        }
        else {
LAB_00101718:
          if (uVar7 < *(uint *)(*param_1 + 0x20)) {
            *(uint *)(param_1 + 7) = uVar7;
            param_1[6] = uVar2;
            param_1[8] = uVar10;
            return;
          }
        }
      }
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 3;
    } while (uVar10 != param_1[9]);
  }
LAB_00101709:
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



uint tt_cmap12_char_map_binary(long *param_1,uint *param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1[3] + 0xc);
  if (uVar8 == 0) {
    return uVar8;
  }
  uVar2 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  uVar8 = (uint)param_3 + *param_2;
  uVar7 = 0;
  uVar4 = uVar2;
  do {
    while( true ) {
      uVar5 = uVar4 + uVar7 >> 1;
      puVar1 = (uint *)(param_1[3] + 0x10 + (ulong)(((uVar4 + uVar7 & 0xfffffffe) + uVar5) * 4));
      uVar3 = *puVar1;
      uVar6 = puVar1[1];
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (uVar3 <= uVar8) break;
      uVar4 = uVar5;
      if (uVar5 <= uVar7) goto LAB_001017a0;
    }
    if (uVar8 <= uVar6) {
      uVar4 = puVar1[2];
      uVar3 = uVar8 - uVar3;
      uVar2 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = uVar3 + uVar2;
      if (~uVar3 < uVar2) {
        uVar4 = 0;
      }
      if (param_3 == 0) {
        return uVar4;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      param_1[6] = (ulong)uVar8;
      param_1[8] = (ulong)uVar5;
      if ((*(uint *)(*param_1 + 0x20) <= uVar4) || (uVar4 == 0)) goto LAB_001017c5;
      *(uint *)(param_1 + 7) = uVar4;
      goto LAB_001017d9;
    }
    uVar7 = uVar5 + 1;
  } while (uVar7 < uVar4);
LAB_001017a0:
  uVar4 = 0;
  if ((param_3 != 0) && ((uVar8 <= uVar6 || (uVar5 = uVar5 + 1, uVar2 != uVar5)))) {
    *(undefined1 *)(param_1 + 5) = 1;
    param_1[6] = (ulong)uVar8;
    param_1[8] = (ulong)uVar5;
LAB_001017c5:
    tt_cmap12_next(param_1);
    if ((char)param_1[5] == '\0') {
      uVar8 = *(uint *)(param_1 + 6);
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 7);
      uVar8 = *(uint *)(param_1 + 6);
    }
LAB_001017d9:
    *param_2 = uVar8;
  }
  return uVar4;
}



void tt_cmap12_char_index(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = param_2;
  tt_cmap12_char_map_binary(param_1,&local_4,0);
  return;
}



undefined8 tt_cmap12_get_info(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 0xc;
  uVar1 = *(uint *)(lVar2 + 8);
  *param_2 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    );
  return 0;
}



undefined8 tt_cmap13_init(long param_1,long param_2)

{
  uint uVar1;
  
  *(long *)(param_1 + 0x18) = param_2;
  uVar1 = *(uint *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(ulong *)(param_1 + 0x48) =
       (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  return 0;
}



void tt_cmap13_next(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar6 = param_1[8];
  uVar5 = param_1[6] + 1;
  if (uVar6 < (ulong)param_1[9]) {
    puVar4 = (uint *)(param_1[3] + 0x10 + uVar6 * 0xc);
    do {
      uVar7 = *puVar4;
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                     uVar7 << 0x18);
      if (uVar5 < uVar3) {
        uVar5 = uVar3;
      }
      if (((uVar5 <= (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                     uVar1 << 0x18)) && (uVar2 != 0)) &&
         (uVar7 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18,
         uVar7 < *(uint *)(*param_1 + 0x20))) {
        param_1[6] = uVar5;
        *(uint *)(param_1 + 7) = uVar7;
        param_1[8] = uVar6;
        return;
      }
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar6 != param_1[9]);
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



uint tt_cmap13_char_map_binary(long *param_1,uint *param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1[3] + 0xc);
  if (uVar8 == 0) {
    return uVar8;
  }
  uVar3 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  uVar8 = (uint)param_3 + *param_2;
  uVar7 = 0;
  uVar6 = uVar3;
  do {
    while( true ) {
      uVar4 = uVar6 + uVar7 >> 1;
      puVar1 = (uint *)(param_1[3] + 0x10 + (ulong)(((uVar6 + uVar7 & 0xfffffffe) + uVar4) * 4));
      uVar2 = *puVar1;
      uVar5 = puVar1[1];
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) <= uVar8
         ) break;
      uVar6 = uVar4;
      if (uVar4 <= uVar7) goto LAB_001019a0;
    }
    if (uVar8 <= uVar5) {
      uVar6 = puVar1[2];
      uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (param_3 == 0) {
        return uVar7;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      param_1[6] = (ulong)uVar8;
      param_1[8] = (ulong)uVar4;
      if ((*(uint *)(*param_1 + 0x20) <= uVar7) || (uVar6 == 0)) goto LAB_001019c5;
      *(uint *)(param_1 + 7) = uVar7;
      goto LAB_001019d9;
    }
    uVar7 = uVar4 + 1;
  } while (uVar7 < uVar6);
LAB_001019a0:
  uVar7 = 0;
  if ((param_3 != 0) && ((uVar8 <= uVar5 || (uVar4 = uVar4 + 1, uVar3 != uVar4)))) {
    *(undefined1 *)(param_1 + 5) = 1;
    param_1[6] = (ulong)uVar8;
    param_1[8] = (ulong)uVar4;
LAB_001019c5:
    tt_cmap13_next(param_1);
    if ((char)param_1[5] == '\0') {
      uVar8 = *(uint *)(param_1 + 6);
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 7);
      uVar8 = *(uint *)(param_1 + 6);
    }
LAB_001019d9:
    *param_2 = uVar8;
  }
  return uVar7;
}



void tt_cmap13_char_index(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = param_2;
  tt_cmap13_char_map_binary(param_1,&local_4,0);
  return;
}



undefined8 tt_cmap13_get_info(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 0xd;
  uVar1 = *(uint *)(lVar2 + 8);
  *param_2 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    );
  return 0;
}



undefined8 tt_cmap14_init(long param_1,long param_2)

{
  uint uVar1;
  
  *(long *)(param_1 + 0x18) = param_2;
  uVar1 = *(uint *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(ulong *)(param_1 + 0x28) =
       (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  return 0;
}



undefined8 tt_cmap14_char_index(void)

{
  return 0;
}



undefined8 tt_cmap14_char_next(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}



undefined8 tt_cmap14_get_info(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0xe;
  *param_2 = 0xffffffff;
  return 0;
}



undefined8 tt_cmap14_char_map_def_binary(uint *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar5 = 0;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  while( true ) {
    do {
      uVar4 = uVar3;
      if (uVar4 <= uVar5) {
        return 0;
      }
      uVar3 = uVar4 + uVar5 >> 1;
      pbVar1 = (byte *)((long)param_1 + (ulong)(uVar3 * 4) + 4);
      uVar2 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
    } while (param_2 < uVar2);
    if (param_2 <= pbVar1[3] + uVar2) break;
    uVar5 = uVar3 + 1;
    uVar3 = uVar4;
  }
  return 1;
}



ushort tt_cmap14_char_map_nondef_binary(uint *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar5 = 0;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  while( true ) {
    do {
      uVar4 = uVar3;
      if (uVar4 <= uVar5) {
        return 0;
      }
      uVar3 = uVar4 + uVar5 >> 1;
      pbVar1 = (byte *)((long)param_1 + (ulong)(uVar3 * 5) + 4);
      uVar2 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
    } while (param_2 < uVar2);
    if (param_2 <= uVar2) break;
    uVar5 = uVar3 + 1;
    uVar3 = uVar4;
  }
  return *(ushort *)(pbVar1 + 3) << 8 | *(ushort *)(pbVar1 + 3) >> 8;
}



byte * tt_cmap14_find_variant(uint *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar5 = 0;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  while( true ) {
    do {
      uVar4 = uVar3;
      if (uVar4 <= uVar5) {
        return (byte *)0x0;
      }
      uVar3 = uVar5 + uVar4 >> 1;
      pbVar1 = (byte *)((long)param_1 + (ulong)(uVar3 * 0xb) + 4);
      uVar2 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
    } while (param_2 < uVar2);
    if (param_2 <= uVar2) break;
    uVar5 = uVar3 + 1;
    uVar3 = uVar4;
  }
  return pbVar1 + 3;
}



undefined8 tt_cmap14_char_var_index(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = (ulong)param_3;
  lVar3 = *(long *)(param_1 + 0x18);
  puVar5 = (uint *)tt_cmap14_find_variant(lVar3 + 6,param_4);
  if (puVar5 != (uint *)0x0) {
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar7 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
    ;
    uVar9 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
    ;
    if (uVar7 != 0) {
      iVar4 = tt_cmap14_char_map_def_binary(uVar7 + lVar3,uVar8 & 0xffffffff);
      if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00101c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(param_2,uVar8 & 0xffffffff);
        return uVar6;
      }
    }
    if (uVar9 != 0) {
      uVar6 = tt_cmap14_char_map_nondef_binary(lVar3 + uVar9,uVar8 & 0xffffffff);
      return uVar6;
    }
  }
  return 0;
}



int tt_cmap14_char_var_isdefault(long param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_2;
  lVar3 = *(long *)(param_1 + 0x18);
  puVar5 = (uint *)tt_cmap14_find_variant(lVar3 + 6,param_3);
  if (puVar5 == (uint *)0x0) {
    return -1;
  }
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar7 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  uVar6 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  if ((uVar7 != 0) &&
     (iVar4 = tt_cmap14_char_map_def_binary(uVar7 + lVar3,uVar8 & 0xffffffff), iVar4 != 0)) {
    return 1;
  }
  if (uVar6 == 0) {
    return -1;
  }
  iVar4 = tt_cmap14_char_map_nondef_binary(lVar3 + uVar6,uVar8 & 0xffffffff);
  return -(uint)(iVar4 == 0);
}



undefined8 tt_cmap_unicode_init(long *param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + 0x378) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(lVar1 + 0xb8),param_1,*(undefined4 *)(lVar1 + 0x20),
                       tt_get_glyph_name,0);
    return uVar2;
  }
  return 7;
}



void tt_cmap_unicode_char_index(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00101d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*param_1 + 0x378) + 0x10))();
  return;
}



void tt_cmap_unicode_char_next(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00101d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*param_1 + 0x378) + 0x18))();
  return;
}



undefined8 tt_get_cmap_info(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0x96;
}



undefined8
tt_face_get_colr_layer(long param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  
  lVar2 = *(long *)(param_1 + 0x5c0);
  if (lVar2 == 0) {
    return 0;
  }
  puVar7 = *(ushort **)(param_5 + 2);
  if (puVar7 == (ushort *)0x0) {
    uVar4 = *(ushort *)(lVar2 + 2);
    lVar3 = *(long *)(lVar2 + 8);
    param_5[1] = 0;
    if (uVar4 != 0) {
      uVar10 = 0;
      uVar11 = (uint)uVar4;
      do {
        uVar5 = (uVar11 - uVar10 >> 1) + uVar10;
        puVar7 = (ushort *)((ulong)(uVar5 * 6) + lVar3);
        uVar8 = (uint)(ushort)(*puVar7 << 8 | *puVar7 >> 8);
        if (uVar8 < param_2) {
          uVar10 = uVar5 + 1;
          uVar5 = uVar11;
        }
        else if (uVar8 <= param_2) {
          uVar4 = puVar7[2];
          uVar1 = puVar7[1];
          if (uVar4 == 0) {
            return 0;
          }
          uVar4 = uVar4 << 8 | uVar4 >> 8;
          *param_5 = (uint)uVar4;
          uVar6 = (ulong)((uint)(ushort)(uVar1 << 8 | uVar1 >> 8) * 4);
          if (*(ulong *)(lVar2 + 0x88) < (ulong)uVar4 * 4 + uVar6) {
            return 0;
          }
          puVar9 = *(ushort **)(lVar2 + 0x10);
          puVar7 = (ushort *)(uVar6 + (long)puVar9);
          *(ushort **)(param_5 + 2) = puVar7;
          goto LAB_00101dff;
        }
        uVar11 = uVar5;
      } while (uVar10 < uVar5);
    }
  }
  else if (param_5[1] < *param_5) {
    puVar9 = *(ushort **)(lVar2 + 0x10);
LAB_00101dff:
    if ((puVar9 <= puVar7) &&
       (puVar7 < (ushort *)(*(long *)(lVar2 + 0x88) + *(long *)(lVar2 + 0x80)))) {
      uVar11 = *(uint *)(param_1 + 0x20);
      *(ushort **)(param_5 + 2) = puVar7 + 1;
      *param_3 = (uint)(ushort)(*puVar7 << 8 | *puVar7 >> 8);
      *(ushort **)(param_5 + 2) = puVar7 + 2;
      uVar4 = puVar7[1] << 8 | puVar7[1] >> 8;
      *param_4 = (uint)uVar4;
      if ((*param_3 < uVar11) && ((uVar4 == 0xffff || (uVar4 < *(ushort *)(param_1 + 0x430))))) {
        param_5[1] = param_5[1] + 1;
        return 1;
      }
    }
  }
  return 0;
}



undefined8 get_child_table_pointer(long param_1,long param_2,long *param_3,ulong *param_4)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  pbVar1 = (byte *)*param_3;
  if ((*(byte **)(param_1 + 0x40) <= pbVar1) &&
     (lVar2 = *(long *)(param_1 + 0x88), pbVar1 <= (byte *)(*(long *)(param_1 + 0x80) + -4 + lVar2))
     ) {
    *param_3 = (long)(pbVar1 + 3);
    uVar3 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
    if ((uVar3 != 0) &&
       ((uVar4 = param_2 + (ulong)uVar3, *(ulong *)(param_1 + 0x40) <= uVar4 &&
        (uVar4 < (ulong)(lVar2 + *(long *)(param_1 + 0x80)))))) {
      *param_4 = uVar4;
      return 1;
    }
  }
  return 0;
}



undefined8
get_deltas_for_var_index_base
          (long param_1,long param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar2 = *(long *)(param_1 + 0x380);
  if (param_3 == 0xffffffff) {
    uVar6 = (param_4 & 0xffffffff) << 2;
    uVar7 = (uint)uVar6;
    if (uVar7 < 8) {
      if ((uVar6 & 4) == 0) {
        if (uVar7 != 0) {
          *(undefined1 *)param_5 = 0;
        }
      }
      else {
        *(undefined4 *)param_5 = 0;
        *(undefined4 *)((long)param_5 + ((uVar6 & 0xffffffff) - 4)) = 0;
      }
    }
    else {
      *param_5 = 0;
      *(undefined8 *)((long)param_5 + ((uVar6 & 0xffffffff) - 8)) = 0;
      uVar7 = ((int)param_5 - (int)((ulong)(param_5 + 1) & 0xfffffffffffffff8)) + uVar7 & 0xfffffff8
      ;
      if (7 < uVar7) {
        uVar4 = 0;
        do {
          uVar6 = (ulong)uVar4;
          uVar4 = uVar4 + 8;
          *(undefined8 *)(((ulong)(param_5 + 1) & 0xfffffffffffffff8) + uVar6) = 0;
        } while (uVar4 < uVar7);
      }
    }
  }
  else {
    uVar6 = (param_4 & 0xffffffff) + param_3;
    lVar1 = param_3 * -4;
    do {
      if (*(long *)(param_2 + 0x78) == 0) {
        uVar5 = param_3 & 0xffffffff;
        uVar3 = 0;
      }
      else {
        uVar5 = *(ulong *)(param_2 + 0x68) - 1;
        if (param_3 < *(ulong *)(param_2 + 0x68)) {
          uVar5 = param_3;
        }
        uVar3 = *(undefined4 *)(*(long *)(param_2 + 0x70) + uVar5 * 4);
        uVar5 = (ulong)*(uint *)(*(long *)(param_2 + 0x78) + uVar5 * 4);
      }
      uVar3 = (**(code **)(lVar2 + 0x70))(param_1,param_2 + 0x48,uVar3,uVar5);
      *(undefined4 *)((long)param_5 + param_3 * 4 + lVar1) = uVar3;
      param_3 = param_3 + 1;
    } while (uVar6 != param_3);
  }
  return 1;
}



undefined8 tt_face_get_colr_glyph_paint(long param_1,uint param_2,int param_3,ulong *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  short *psVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  psVar3 = *(short **)(param_1 + 0x5c0);
  if (psVar3 == (short *)0x0) {
    return 0;
  }
  if (*(long *)(psVar3 + 0x40) == 0) {
    return 0;
  }
  if ((*psVar3 == 0) || (uVar7 = *(ulong *)(psVar3 + 0xc), uVar7 == 0)) {
    return 0;
  }
  lVar4 = *(long *)(psVar3 + 0x10);
  if (((lVar4 != 0) && (*param_4 == 0)) && (uVar9 = uVar7 & 0xffffffff, (int)uVar7 != 0)) {
    uVar8 = 0;
    do {
      uVar5 = ((int)uVar9 - uVar8 >> 1) + uVar8;
      puVar1 = (ushort *)(lVar4 + 4 + (ulong)(uVar5 * 6));
      uVar2 = *puVar1;
      uVar6 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
      if (uVar6 < param_2) {
        uVar8 = uVar5 + 1;
      }
      else {
        if (uVar6 <= param_2) {
          uVar8 = *(uint *)(puVar1 + 1);
          uVar7 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                         uVar8 << 0x18);
          if (uVar7 == 0) {
            return 0;
          }
          if (uVar7 <= *(ulong *)(psVar3 + 0x44)) {
            if (lVar4 + uVar7 < *(long *)(psVar3 + 0x40) + *(ulong *)(psVar3 + 0x44)) {
              *param_4 = lVar4 + uVar7;
              *(bool *)(param_4 + 1) = param_3 == 0;
              return 1;
            }
            return 0;
          }
          return 0;
        }
        uVar9 = (ulong)uVar5;
      }
    } while (uVar8 < (uint)uVar9);
  }
  return 0;
}



undefined8 tt_face_get_paint_layers(long param_1,int *param_2,ulong *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  iVar2 = param_2[1];
  if ((iVar2 != *param_2) && (lVar4 = *(long *)(param_1 + 0x5c0), lVar4 != 0)) {
    puVar5 = *(uint **)(param_2 + 2);
    puVar1 = (uint *)((long)puVar5 + (-4 - (ulong)(uint)(iVar2 * 4)));
    puVar6 = *(uint **)(lVar4 + 0x30);
    if ((puVar6 <= puVar1) &&
       ((puVar1 < puVar6 + *(long *)(lVar4 + 0x28) + 1 && (puVar6 <= puVar5)))) {
      lVar7 = *(long *)(lVar4 + 0x80);
      lVar8 = *(long *)(lVar4 + 0x88);
      if (puVar5 <= (uint *)(lVar7 + -4 + lVar8)) {
        uVar3 = *puVar5;
        *(undefined1 *)(param_3 + 1) = 0;
        uVar9 = (long)puVar6 +
                (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18);
        if ((*(ulong *)(lVar4 + 0x40) <= uVar9) && (uVar9 < (ulong)(lVar7 + lVar8))) {
          *param_3 = uVar9;
          *(uint **)(param_2 + 2) = puVar5 + 1;
          param_2[1] = iVar2 + 1;
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined8 tt_face_palette_set(long param_1,uint param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ushort uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(param_1 + 0x5b8);
  if (lVar2 == 0) {
    return 6;
  }
  uVar6 = 6;
  if (param_2 < *(ushort *)(param_1 + 0x418)) {
    uVar6 = 8;
    uVar4 = *(ushort *)(*(long *)(lVar2 + 0x10) + (ulong)(param_2 * 2));
    uVar4 = uVar4 << 8 | uVar4 >> 8;
    if ((uint)*(ushort *)(param_1 + 0x430) + (uint)uVar4 <= (uint)*(ushort *)(lVar2 + 2)) {
      puVar5 = *(undefined1 **)(param_1 + 0x448);
      puVar1 = puVar5 + (ulong)*(ushort *)(param_1 + 0x430) * 4;
      puVar3 = (undefined1 *)((ulong)uVar4 * 4 + *(long *)(lVar2 + 8));
      for (; puVar5 < puVar1; puVar5 = puVar5 + 4) {
        *puVar5 = *puVar3;
        puVar5[1] = puVar3[1];
        puVar5[2] = puVar3[2];
        puVar5[3] = puVar3[3];
        puVar3 = puVar3 + 4;
      }
      uVar6 = 0;
    }
  }
  return uVar6;
}



void extract_svg_doc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  auVar4 = psllw(ZEXT416(uVar1),8);
  *(ulong *)(param_1 + 4) =
       (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  *param_1 = auVar4._0_4_ | CONCAT22((ushort)(uVar1 >> 0x18),(ushort)uVar1 >> 8);
  *(ulong *)(param_1 + 2) =
       (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  return;
}



int tt_face_get_kerning(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  
  lVar2 = *(long *)(param_1 + 0x550);
  if (lVar2 != 0) {
    iVar9 = *(int *)(param_1 + 0x560);
    uVar15 = *(long *)(param_1 + 0x558) + lVar2;
    if ((iVar9 != 0) && (lVar2 + 10U <= uVar15)) {
      iVar16 = 0;
      uVar14 = 1;
      uVar12 = (ulong)param_2 << 0x10 | (ulong)param_3;
      uVar5 = lVar2 + 4;
      do {
        uVar6 = (ushort)(*(ushort *)(uVar5 + 2) << 8 | *(ushort *)(uVar5 + 2) >> 8) + uVar5;
        if (uVar15 <= uVar6) {
          uVar6 = uVar15;
        }
        if ((*(uint *)(param_1 + 0x564) & uVar14) != 0) {
          puVar10 = (uint *)(uVar5 + 0xe);
          uVar7 = *(ushort *)(uVar5 + 6) << 8 | *(ushort *)(uVar5 + 6) >> 8;
          uVar11 = (uint)uVar7;
          if ((long)(uVar6 - (long)puVar10) < (long)(int)(((uint)uVar7 + (uint)uVar7 * 2) * 2)) {
            uVar11 = (uint)((long)(uVar6 - (long)puVar10) / 6);
          }
          uVar7 = *(ushort *)(uVar5 + 4);
          uVar4 = (uint)(byte)uVar7;
          if ((uVar7 & 0xff) == 0) {
            if ((uVar14 & *(uint *)(param_1 + 0x568)) == 0) {
              if (uVar11 != 0) {
LAB_00102479:
                uVar4 = *puVar10;
                if (uVar12 != (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18)) goto LAB_00102470;
                uVar3 = (ushort)puVar10[1] << 8 | (ushort)puVar10[1] >> 8;
LAB_0010248d:
                iVar16 = iVar16 + (short)uVar3;
                if ((uVar7 >> 8 & 8) != 0) {
                  iVar16 = (int)(short)uVar3;
                }
              }
            }
            else {
              while (uVar8 = uVar11, uVar4 < uVar8) {
                uVar11 = uVar8 + uVar4 >> 1;
                puVar13 = (uint *)((ulong)(((uVar8 + uVar4 & 0xfffffffe) + uVar11) * 2) +
                                  (long)puVar10);
                uVar1 = *puVar13;
                uVar5 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                               uVar1 << 0x18);
                if (uVar12 == uVar5) {
                  uVar3 = (ushort)puVar13[1];
                  uVar3 = uVar3 << 8 | uVar3 >> 8;
                  goto LAB_0010248d;
                }
                if (uVar5 < uVar12) {
                  uVar4 = uVar11 + 1;
                  uVar11 = uVar8;
                }
              }
            }
          }
        }
LAB_00102497:
        uVar14 = uVar14 * 2;
        iVar9 = iVar9 + -1;
        if ((iVar9 == 0) || (uVar5 = uVar6, uVar15 < uVar6 + 6)) {
          return iVar16;
        }
      } while( true );
    }
  }
  return 0;
LAB_00102470:
  puVar10 = (uint *)((long)puVar10 + 6);
  if (puVar10 == (uint *)(uVar5 + 0x14 + (ulong)(uVar11 - 1) * 6)) goto LAB_00102497;
  goto LAB_00102479;
}



undefined8 tt_sbit_decoder_load_metrics(long param_1,ulong *param_2,byte *param_3,char param_4)

{
  byte *pbVar1;
  ushort *puVar2;
  
  pbVar1 = (byte *)*param_2;
  puVar2 = *(ushort **)(param_1 + 0x18);
  if (pbVar1 + 5 <= param_3) {
    *puVar2 = (ushort)*pbVar1;
    puVar2[1] = (ushort)pbVar1[1];
    puVar2[2] = (short)(char)pbVar1[2];
    puVar2[3] = (short)(char)pbVar1[3];
    puVar2[4] = (ushort)pbVar1[4];
    if (param_4 == '\0') {
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined1 *)(param_1 + 0x20) = 1;
      *param_2 = (ulong)(pbVar1 + 5);
      return 0;
    }
    if (pbVar1 + 8 <= param_3) {
      puVar2[5] = (short)(char)pbVar1[5];
      puVar2[6] = (short)(char)pbVar1[6];
      puVar2[7] = (ushort)pbVar1[7];
      *(undefined1 *)(param_1 + 0x20) = 1;
      *param_2 = (ulong)(pbVar1 + 8);
      return 0;
    }
  }
  return 6;
}



undefined8
tt_sbit_decoder_load_byte_aligned
          (long param_1,byte *param_2,byte *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  sbyte sVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  byte *pbVar6;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  if (*(long *)(puVar4 + 4) != 0) {
    uVar14 = (uint)(*(ushort **)(param_1 + 0x18))[1];
    if ((int)(param_4 | param_5) < 0) {
      return 3;
    }
    if (puVar4[1] < uVar14 + param_4) {
      return 3;
    }
    uVar2 = **(ushort **)(param_1 + 0x18);
    uVar13 = (uint)uVar2;
    if (*puVar4 < uVar13 + param_5) {
      return 3;
    }
    uVar14 = *(byte *)(param_1 + 0x22) * uVar14;
    if (param_3 < param_2 + (int)(((int)(uVar14 + 7) >> 3) * uVar13)) {
      return 3;
    }
    uVar3 = puVar4[2];
    pbVar12 = (byte *)(*(long *)(puVar4 + 4) + (long)(int)(((int)param_4 >> 3) + param_5 * uVar3));
    param_4 = param_4 & 7;
    if (param_4 == 0) {
      if (uVar2 != 0) {
        uVar8 = uVar14 - 8 >> 3;
        uVar1 = uVar8 + 1;
        do {
          pbVar6 = param_2;
          pbVar5 = param_2;
          pbVar10 = pbVar12;
          uVar9 = uVar14;
          if (7 < uVar14) {
            do {
              pbVar5 = pbVar6 + 1;
              *pbVar10 = *pbVar10 | *pbVar6;
              pbVar10 = pbVar10 + 1;
              pbVar6 = pbVar5;
            } while (pbVar5 != param_2 + uVar1);
            pbVar10 = pbVar12 + uVar1;
            uVar9 = (uVar14 - 8) + uVar8 * -8;
          }
          param_2 = pbVar5;
          if (uVar9 != 0) {
            param_2 = pbVar5 + 1;
            *pbVar10 = *pbVar10 | (byte)(0xff00 >> ((byte)uVar9 & 0x1f)) & *pbVar5;
          }
          pbVar12 = pbVar12 + (int)uVar3;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    else if (uVar2 != 0) {
      uVar8 = 0;
      uVar9 = uVar14 - 8 >> 3;
      uVar1 = uVar9 + 1;
      uVar9 = (uVar14 - 8) + uVar9 * -8;
      pbVar6 = param_2 + uVar1;
      sVar7 = (sbyte)param_4;
      pbVar5 = pbVar12;
      if (uVar14 < 8) goto LAB_0010278a;
LAB_00102730:
      do {
        bVar15 = *param_2;
        param_2 = param_2 + 1;
        *pbVar12 = *pbVar12 | (byte)((bVar15 | uVar8) >> sVar7);
        pbVar12 = pbVar12 + 1;
        uVar8 = (bVar15 | uVar8) << 8;
      } while (param_2 != pbVar6);
      pbVar12 = pbVar5 + uVar1;
      bVar15 = *pbVar12;
      param_2 = pbVar6;
      uVar11 = uVar9;
      if (uVar9 != 0) goto LAB_001027a0;
      do {
        *pbVar12 = (byte)(uVar8 >> sVar7) | bVar15;
        while( true ) {
          pbVar12 = pbVar5 + (int)uVar3;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) {
            return 0;
          }
          pbVar6 = param_2 + uVar1;
          uVar8 = 0;
          pbVar5 = pbVar12;
          if (7 < uVar14) goto LAB_00102730;
LAB_0010278a:
          uVar8 = 0;
          bVar15 = *pbVar12;
          pbVar5 = pbVar12;
          uVar11 = uVar14;
          if (uVar14 == 0) break;
LAB_001027a0:
          uVar8 = (uint)*param_2 & 0xff00U >> ((byte)uVar11 & 0x1f) | uVar8;
          *pbVar12 = bVar15 | (byte)(uVar8 >> sVar7);
          if (8 < (int)(uVar11 + param_4)) {
            pbVar12[1] = pbVar12[1] | (byte)((uVar8 << 8) >> sVar7);
          }
          param_2 = param_2 + 1;
        }
      } while( true );
    }
  }
  return 0;
}



undefined4
tt_sbit_decoder_load_bit_aligned(long param_1,byte *param_2,byte *param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  byte local_40;
  
  uVar4 = (*(ushort **)(param_1 + 0x18))[1];
  puVar7 = *(uint **)(param_1 + 0x10);
  if ((int)(param_4 | param_5) < 0) {
    return 3;
  }
  uVar18 = 3;
  if (uVar4 + param_4 <= puVar7[1]) {
    uVar5 = **(ushort **)(param_1 + 0x18);
    uVar25 = (uint)uVar5;
    if ((uVar25 + param_5 <= *puVar7) &&
       (uVar24 = (uint)*(byte *)(param_1 + 0x22) * (uint)uVar4,
       param_2 + ((int)(uVar25 * uVar24 + 7) >> 3) <= param_3)) {
      if ((uVar24 != 0) && (uVar5 != 0)) {
        uVar6 = puVar7[2];
        uVar22 = param_4 & 7;
        uVar10 = 8 - uVar22;
        pbVar21 = (byte *)((long)(int)(((int)param_4 >> 3) + param_5 * uVar6) +
                          *(long *)(puVar7 + 4));
        uVar8 = uVar24;
        if ((int)uVar10 <= (int)uVar24) {
          uVar8 = uVar10;
        }
        uVar19 = 0;
        uVar12 = 0;
        uVar14 = uVar24 - uVar8;
        uVar23 = uVar25;
        do {
          if (uVar22 == 0) {
            pbVar16 = pbVar21;
            uVar20 = uVar24;
            if (7 < uVar24) goto LAB_0010296a;
LAB_001029ba:
            bVar13 = (byte)uVar19;
            bVar2 = (byte)(0xff00 >> ((byte)uVar20 & 0x1f));
            if ((int)uVar19 < (int)uVar20) {
              if (param_2 < param_3) {
                bVar3 = *param_2;
                param_2 = param_2 + 1;
                uVar12 = uVar12 | bVar3;
              }
              *pbVar16 = (byte)((int)(uVar12 & 0xffff) >> (bVar13 & 0x1f)) & bVar2 | *pbVar16;
              uVar19 = uVar19 + (8 - uVar20);
              uVar12 = uVar12 << 8;
            }
            else {
              uVar19 = uVar19 - uVar20;
              *pbVar16 = bVar2 & (byte)((int)(uVar12 & 0xffff) >> (bVar13 & 0x1f)) | *pbVar16;
            }
          }
          else {
            if (uVar25 == uVar23) {
              uVar12 = (uint)*param_2;
              param_2 = param_2 + 1;
              uVar19 = uVar22;
            }
            else if ((int)uVar19 < (int)uVar8) {
              if (param_2 < param_3) {
                bVar2 = *param_2;
                param_2 = param_2 + 1;
                uVar12 = uVar12 | bVar2;
              }
              uVar19 = uVar19 + (8 - uVar8);
            }
            else {
              uVar12 = uVar12 >> 8 & 0xff;
              uVar19 = uVar19 - uVar8;
            }
            pbVar16 = pbVar21 + 1;
            uVar11 = uVar12 << 8;
            local_40 = (byte)(~(0xff << ((byte)uVar8 & 0x1f)) << ((char)uVar10 - (byte)uVar8 & 0x1f)
                             );
            *pbVar21 = *pbVar21 | (byte)((int)(uVar12 & 0xffff) >> ((byte)uVar19 & 0x1f)) & local_40
            ;
            uVar20 = uVar14;
            uVar12 = uVar11;
            if (7 < (int)uVar14) {
LAB_0010296a:
              uVar17 = uVar20 - 8 >> 3;
              uVar11 = uVar17 + 1;
              pbVar1 = param_2 + uVar11;
              pbVar15 = pbVar16;
              do {
                bVar2 = *param_2;
                param_2 = param_2 + 1;
                uVar9 = uVar12 & 0xffff;
                uVar12 = (uint)bVar2 << 8;
                *pbVar15 = *pbVar15 | (byte)((int)(uVar9 | bVar2) >> ((byte)uVar19 & 0x1f));
                pbVar15 = pbVar15 + 1;
              } while (param_2 != pbVar1);
              pbVar16 = pbVar16 + uVar11;
              param_2 = pbVar1;
              uVar20 = (uVar20 - 8) + uVar17 * -8;
            }
            if (0 < (int)uVar20) goto LAB_001029ba;
          }
          pbVar21 = pbVar21 + (int)uVar6;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      uVar18 = 0;
    }
  }
  return uVar18;
}



void sfnt_get_interface(void)

{
  ft_service_list_lookup(sfnt_services);
  return;
}



int tt_face_load_kern(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (**(code **)(param_1 + 0x340))(param_1,0x6b65726e,param_2,&local_48);
  if (((iVar2 == 0) && (iVar2 = 0x8e, 3 < local_48)) &&
     (iVar2 = FT_Stream_ExtractFrame(param_2,local_48,param_1 + 0x550), iVar2 == 0)) {
    lVar1 = *(long *)(param_1 + 0x550);
    *(ulong *)(param_1 + 0x558) = local_48;
    uVar7 = *(ushort *)(lVar1 + 2);
    local_48 = local_48 + lVar1;
    uVar11 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
    if (0x20 < uVar11) {
      uVar11 = 0x20;
    }
    if ((uVar7 == 0) || (local_48 < lVar1 + 10U)) {
      uVar12 = 0;
      uVar6 = 0;
      uVar4 = 0;
    }
    else {
      uVar13 = 1;
      uVar12 = 0;
      uVar4 = 0;
      uVar9 = lVar1 + 4;
      uVar14 = 0;
      while( true ) {
        uVar7 = *(ushort *)(uVar9 + 2) << 8 | *(ushort *)(uVar9 + 2) >> 8;
        uVar6 = uVar14;
        if (uVar7 < 0xf) break;
        uVar8 = uVar7 + uVar9;
        if (local_48 <= uVar8) {
          uVar8 = local_48;
        }
        if ((((*(ushort *)(uVar9 + 4) & 0xff) == 0) && ((*(ushort *)(uVar9 + 4) >> 8 & 3) == 1)) &&
           (uVar9 + 0xe <= uVar8)) {
          uVar5 = uVar8 - (uVar9 + 0xe);
          uVar3 = (uint)(ushort)(*(ushort *)(uVar9 + 6) << 8 | *(ushort *)(uVar9 + 6) >> 8);
          if ((long)uVar5 < (long)(int)(uVar3 * 6)) {
            uVar3 = (uint)(uVar5 / 6);
          }
          uVar6 = uVar14 | uVar13;
          if (uVar3 != 0) {
            uVar6 = uVar14 | uVar13;
            uVar14 = *(uint *)(uVar9 + 0xe);
            uVar5 = (ulong)(uVar3 - 1);
            puVar10 = (uint *)(uVar9 + 0x14);
            uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     uVar14 << 0x18;
            if (uVar3 - 1 != 0) {
              do {
                uVar3 = *puVar10;
                uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18;
                if (uVar3 < uVar14) goto LAB_00102ba8;
                puVar10 = (uint *)((long)puVar10 + 6);
                uVar5 = uVar5 - 1;
                uVar14 = uVar3;
              } while (uVar5 != 0);
            }
            uVar12 = uVar12 | uVar13;
          }
        }
LAB_00102ba8:
        uVar4 = uVar4 + 1;
        if ((uVar11 <= uVar4) ||
           (uVar13 = 1 << ((byte)uVar4 & 0x1f), uVar9 = uVar8, uVar14 = uVar6, local_48 < uVar8 + 6)
           ) break;
      }
    }
    *(uint *)(param_1 + 0x560) = uVar4;
    *(uint *)(param_1 + 0x564) = uVar6;
    *(uint *)(param_1 + 0x568) = uVar12;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void tt_face_free_sbit(long param_1)

{
  FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x530);
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  return;
}



void tt_face_get_metrics(long param_1,char param_2,uint param_3,short *param_4,ushort *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  int local_4c;
  uint local_48;
  int local_44;
  long local_40;
  
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  puVar3 = *(undefined8 **)(param_1 + 0x388);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = param_1 + 0x1f8;
  lVar9 = *(long *)(param_1 + 0x5a0);
  lVar10 = *(long *)(param_1 + 0x4f0);
  if (param_2 == '\0') {
    lVar8 = param_1 + 400;
    lVar9 = *(long *)(param_1 + 0x598);
    lVar10 = *(long *)(param_1 + 0x4e8);
  }
  uVar6 = *(ushort *)(lVar8 + 0x26);
  if (uVar6 != 0) {
    uVar1 = lVar9 + lVar10;
    if (param_3 < uVar6) {
      if (((ulong)(param_3 * 4) + lVar9 + 4 <= uVar1) &&
         (local_4c = FT_Stream_Seek(), local_4c == 0)) {
        uVar6 = FT_Stream_ReadUShort(uVar2);
        *param_5 = uVar6;
        if (local_4c == 0) {
          sVar7 = FT_Stream_ReadUShort(uVar2,&local_4c);
          *param_4 = sVar7;
          if (local_4c == 0) goto LAB_00102dd5;
        }
      }
    }
    else {
      lVar9 = lVar9 + (int)((uint)uVar6 * 4 + -4);
      if ((lVar9 + 2U <= uVar1) && (local_4c = FT_Stream_Seek(uVar2,lVar9), local_4c == 0)) {
        uVar5 = FT_Stream_ReadUShort(uVar2,&local_4c);
        *param_5 = uVar5;
        if (local_4c == 0) {
          if ((uVar1 < (ulong)((param_3 - uVar6) * 2 + 4) + lVar9 + 2) ||
             (local_4c = FT_Stream_Seek(), local_4c != 0)) {
            *param_4 = 0;
          }
          else {
            sVar7 = FT_Stream_ReadUShort(uVar2,&local_4c);
            *param_4 = sVar7;
          }
          goto LAB_00102dd5;
        }
      }
    }
  }
  *param_4 = 0;
  *param_5 = 0;
LAB_00102dd5:
  if ((puVar3 != (undefined8 *)0x0) && (*(long *)(param_1 + 0x4c0) != 0)) {
    local_48 = (uint)*param_5;
    local_44 = (int)*param_4;
    if (param_2 == '\0') {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(param_1,param_3,&local_48);
      }
      pcVar4 = (code *)puVar3[1];
    }
    else {
      if ((code *)puVar3[3] != (code *)0x0) {
        (*(code *)puVar3[3])(param_1,param_3,&local_48);
      }
      pcVar4 = (code *)puVar3[4];
    }
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_1,param_3,&local_44);
    }
    *param_5 = (ushort)local_48;
    *param_4 = (short)local_44;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * tt_name_ascii_from_other(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  undefined1 *puVar3;
  byte bVar4;
  long lVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  uVar1 = *(ushort *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined1 *)ft_mem_qrealloc(param_2,1,0,uVar1 + 1,0,&local_24);
  if (local_24 == 0) {
    puVar6 = puVar3;
    if (uVar1 != 0) {
      lVar5 = 0;
      do {
        bVar4 = *(byte *)(lVar2 + lVar5);
        if (bVar4 == 0) break;
        if (0x5f < bVar4 - 0x20) {
          bVar4 = 0x3f;
        }
        puVar3[lVar5] = bVar4;
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < (uint)uVar1);
      puVar6 = puVar3 + lVar5;
    }
    *puVar6 = 0;
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}



undefined1 * tt_name_ascii_from_utf16(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  uint uVar7;
  ushort uVar8;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  uVar1 = *(ushort *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = uVar1 >> 1;
  puVar3 = (undefined1 *)ft_mem_qrealloc(param_2,1,0,uVar8 + 1,0,&local_24);
  if (local_24 == 0) {
    puVar5 = puVar3;
    if (uVar1 >> 1 != 0) {
      lVar4 = 0;
      do {
        uVar6 = *(undefined1 *)(lVar2 + 1 + lVar4 * 2);
        uVar7 = (uint)CONCAT11(*(undefined1 *)(lVar2 + lVar4 * 2),uVar6);
        if (uVar7 == 0) break;
        if (0x5f < uVar7 - 0x20) {
          uVar6 = 0x3f;
        }
        puVar3[lVar4] = uVar6;
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < (uint)uVar8);
      puVar5 = puVar3 + lVar4;
    }
    *puVar5 = 0;
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}



void tt_face_free_svg(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x5c8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),lVar1 + 0x10);
    ft_mem_free(uVar2,lVar1);
    return;
  }
  return;
}



int tt_face_get_name(long param_1,ushort param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  long in_FS_OFFSET;
  bool bVar16;
  int local_34;
  long local_30;
  
  uVar1 = *(ushort *)(param_1 + 0x230);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = *(ushort **)(param_1 + 0x248);
  local_34 = 0;
  if (uVar1 == 0) {
LAB_0010339a:
    puVar11 = (ushort *)0x0;
    iVar6 = 0;
    goto LAB_00103284;
  }
  uVar9 = 0;
  bVar16 = false;
  uVar10 = 0xffffffff;
  uVar13 = 0xffffffff;
  lVar12 = -1;
  uVar14 = 0xffffffff;
  puVar7 = puVar11;
  do {
    while (((uVar5 = uVar10, puVar7[3] != param_2 || (puVar7[4] == 0)) ||
           (uVar2 = *puVar7, uVar5 = uVar9, uVar2 == 2))) {
LAB_00103200:
      uVar10 = uVar5;
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 0x10;
      if (uVar9 == uVar1) goto LAB_00103258;
    }
    if (2 < uVar2) {
      uVar5 = uVar10;
      if (((uVar2 == 3) && ((uVar13 == 0xffffffff || ((puVar7[2] & 0x3ff) == 9)))) &&
         ((puVar7[1] < 2 || (puVar7[1] == 10)))) {
        bVar16 = (puVar7[2] & 0x3ff) == 9;
        uVar13 = uVar9;
      }
      goto LAB_00103200;
    }
    if (uVar2 == 0) goto LAB_00103200;
    if (puVar7[2] != 0) {
      uVar5 = uVar10;
      if (puVar7[1] == 0) {
        uVar14 = uVar9;
      }
      goto LAB_00103200;
    }
    lVar12 = (long)(int)uVar9;
    uVar9 = uVar9 + 1;
    puVar7 = puVar7 + 0x10;
  } while (uVar9 != uVar1);
LAB_00103258:
  uVar9 = (uint)lVar12;
  if ((int)uVar9 < 0) {
    if (-1 < (int)uVar13) {
      lVar12 = (long)(int)uVar14;
      uVar9 = uVar14;
      goto joined_r0x0010336e;
    }
    if (-1 < (int)uVar14) {
      lVar12 = (long)(int)uVar14;
      goto LAB_0010326e;
    }
    if ((int)uVar10 < 0) goto LAB_0010339a;
    pcVar15 = tt_name_ascii_from_utf16;
    lVar12 = (long)(int)uVar10 << 5;
LAB_0010327d:
    puVar11 = (ushort *)((long)puVar11 + lVar12);
    iVar6 = 0;
    if (puVar11 == (ushort *)0x0) goto LAB_00103284;
  }
  else {
    if ((int)uVar13 < 0) {
LAB_0010326e:
      lVar12 = lVar12 * 0x20;
      pcVar15 = tt_name_ascii_from_other;
      goto LAB_0010327d;
    }
joined_r0x0010336e:
    if ((-1 < (int)uVar9) && (!bVar16)) goto LAB_0010326e;
    pcVar15 = tt_name_ascii_from_utf16;
    puVar11 = puVar11 + (long)(int)uVar13 * 0x10;
    if ((1 < puVar11[1]) && (puVar11[1] != 10)) goto LAB_0010339a;
  }
  if (*(long *)(puVar11 + 0xc) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x260);
    uVar8 = ft_mem_qrealloc(uVar3,1,0,puVar11[4],0,&local_34);
    *(undefined8 *)(puVar11 + 0xc) = uVar8;
    if (local_34 == 0) {
      local_34 = FT_Stream_Seek(uVar4,*(undefined8 *)(puVar11 + 8));
      if ((local_34 == 0) &&
         (local_34 = FT_Stream_Read(uVar4,*(undefined8 *)(puVar11 + 0xc),puVar11[4]), local_34 == 0)
         ) goto LAB_001032db;
      uVar8 = *(undefined8 *)(puVar11 + 0xc);
    }
    ft_mem_free(uVar3,uVar8);
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[4] = 0;
    puVar11 = (ushort *)0x0;
    iVar6 = local_34;
  }
  else {
LAB_001032db:
    puVar11 = (ushort *)(*pcVar15)(puVar11,uVar3);
    iVar6 = local_34;
  }
LAB_00103284:
  local_34 = iVar6;
  *param_3 = puVar11;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_34;
}



void tt_face_free_colr(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x5c0);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    lVar3 = *(long *)(param_1 + 0x380);
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    (**(code **)(lVar3 + 0x80))(param_1,lVar1 + 0x68);
    (**(code **)(lVar3 + 0x78))(param_1,lVar1 + 0x48);
    FT_Stream_ReleaseFrame(uVar2,lVar1 + 0x80);
    ft_mem_free(uVar4,lVar1);
    return;
  }
  return;
}



void tt_face_free_cpal(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x5b8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),lVar1 + 0x18);
    ft_mem_free(uVar2,lVar1);
    return;
  }
  return;
}



void tt_face_free_ps_names(long param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  if (*(short *)(param_1 + 0x402) == 0) {
    sVar1 = *(short *)(param_1 + 0x404);
  }
  else {
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x408));
    sVar1 = *(short *)(param_1 + 0x404);
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined2 *)(param_1 + 0x402) = 0;
  }
  if (sVar1 == 0) {
    *(undefined1 *)(param_1 + 0x400) = 0;
    return;
  }
  ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x410));
  *(undefined1 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined2 *)(param_1 + 0x404) = 0;
  return;
}



void tt_face_free_name(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x248);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x10);
  if (uVar3 != 0) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x23c) * 0x20 + uVar3;
    if (uVar3 < uVar4) {
      do {
        uVar2 = uVar3 + 0x20;
        ft_mem_free(uVar1,*(undefined8 *)(uVar3 + 0x18));
        *(undefined8 *)(uVar3 + 0x18) = 0;
        uVar3 = uVar2;
      } while (uVar2 < uVar4);
      uVar3 = *(ulong *)(param_1 + 0x248);
    }
    ft_mem_free(uVar1,uVar3);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  uVar3 = *(ulong *)(param_1 + 600);
  if (uVar3 != 0) {
    uVar4 = uVar3 + (ulong)*(uint *)(param_1 + 0x250) * 0x18;
    if (uVar3 < uVar4) {
      do {
        uVar2 = uVar3 + 0x18;
        ft_mem_free(uVar1,*(undefined8 *)(uVar3 + 0x10));
        *(undefined8 *)(uVar3 + 0x10) = 0;
        uVar3 = uVar2;
      } while (uVar2 < uVar4);
      uVar3 = *(ulong *)(param_1 + 600);
    }
    ft_mem_free(uVar1,uVar3);
    *(undefined8 *)(param_1 + 600) = 0;
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23c) = 0;
  return;
}



void sfnt_done_face(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x370);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0xa0) != (code *)0x0) {
        (**(code **)(lVar1 + 0xa0))();
      }
      if (*(code **)(lVar1 + 200) != (code *)0x0) {
        (**(code **)(lVar1 + 200))(param_1);
      }
      if (*(code **)(lVar1 + 0xf0) != (code *)0x0) {
        (**(code **)(lVar1 + 0xf0))(param_1);
        (**(code **)(lVar1 + 0xf8))(param_1);
      }
      if (*(code **)(lVar1 + 0x160) != (code *)0x0) {
        (**(code **)(lVar1 + 0x160))(param_1);
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    if (*(char *)(param_1 + 0x594) != '\0') {
      if (*(long *)(param_1 + 0x570) != 0) {
        FT_Stream_ReleaseFrame(uVar3,param_1 + 0x570);
        uVar3 = *(undefined8 *)(param_1 + 0xc0);
      }
      *(undefined8 *)(param_1 + 0x588) = 0;
      *(undefined1 (*) [16])(param_1 + 0x578) = (undefined1  [16])0x0;
    }
    FT_Stream_ReleaseFrame(uVar3,param_1 + 0x550);
    *(undefined8 *)(param_1 + 0x558) = 0;
    *(undefined8 *)(param_1 + 0x560) = 0;
    *(undefined4 *)(param_1 + 0x568) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined2 *)(param_1 + 0x120) = 0;
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x330);
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined1 (*) [16])(param_1 + 0x4e8) = (undefined1  [16])0x0;
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x220));
      *(undefined8 *)(param_1 + 0x220) = 0;
      ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x228));
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x228) = 0;
    }
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x3a8));
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined2 *)(param_1 + 0x3a2) = 0;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x68))(param_1);
    }
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x548));
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x548) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x4a0));
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x4d0));
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x4e0));
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x420));
    *(undefined8 *)(param_1 + 0x420) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x428));
    *(undefined8 *)(param_1 + 0x428) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0;
    ft_mem_free(uVar2,*(undefined8 *)(param_1 + 0x448));
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    return;
  }
  return;
}



void sfnt_stream_close(undefined8 *param_1)

{
  ft_mem_free(param_1[7],*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  return;
}



void tt_cmap14_done(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    ft_mem_free();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



void tt_cmap_unicode_done(long *param_1)

{
  ft_mem_free(*(undefined8 *)(*param_1 + 0xb8),param_1[4]);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int tt_face_load_svg_doc(long param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  int local_9c;
  ushort local_98 [16];
  ushort local_78;
  ushort local_76;
  ulong local_70;
  ulong local_68;
  undefined8 local_58;
  long local_40;
  
  puVar4 = *(undefined8 **)(param_1 + 0x120);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar17 = *(long *)(param_1 + 8);
  local_9c = 0;
  lVar23 = *(long *)(lVar17 + 0x5c8);
  uVar5 = *(undefined8 *)(lVar17 + 0xb8);
  lVar6 = *(long *)(lVar23 + 8);
  uVar21 = (ulong)(*(ushort *)(lVar23 + 2) - 1);
  if (*(ushort *)(lVar23 + 2) == 0) {
LAB_00103d10:
    iVar16 = 8;
  }
  else {
    lVar1 = lVar6 + 2;
    uVar24 = (ulong)param_2;
    extract_svg_doc(local_98,lVar1);
    extract_svg_doc(&local_58,(ulong)(uint)((int)uVar21 * 0xc) + lVar1);
    uVar15 = (uint)uVar24;
    if (local_98[0] <= uVar15) {
      if ((uVar15 < (ushort)local_58) || (uVar15 <= local_58._2_2_)) {
        uVar22 = 0;
        do {
          uVar15 = (int)uVar21 + (int)uVar22;
          uVar20 = uVar15 >> 1;
          extract_svg_doc(&local_78,(ulong)(((uVar15 & 0xfffffffe) + uVar20) * 4) + lVar1);
          if ((uint)uVar24 < (uint)local_78) {
            uVar21 = (ulong)(uVar20 - 1);
            extract_svg_doc(&local_58,(ulong)((uVar20 - 1) * 4) + lVar1);
          }
          else {
            if ((uint)uVar24 <= (uint)local_76) {
              uVar21 = *(long *)(lVar23 + 0x18) - (lVar6 - *(long *)(lVar23 + 0x10));
              if ((uVar21 < local_70) || (uVar21 - local_70 < local_68)) goto LAB_00103d10;
              pcVar19 = (char *)(lVar6 + local_70);
              pcVar18 = pcVar19;
              if ((6 < local_68) &&
                 (((*pcVar19 == '\x1f' && (pcVar19[1] == -0x75)) && (pcVar19[2] == '\b')))) {
                local_58 = (ulong)(byte)pcVar19[local_68 - 1] << 0x18 |
                           (ulong)(byte)pcVar19[local_68 - 2] << 0x10 |
                           (ulong)(byte)pcVar19[local_68 - 4] |
                           (ulong)(byte)pcVar19[local_68 - 3] << 8;
                pcVar18 = (char *)ft_mem_qalloc(uVar5,local_58,&local_9c);
                iVar16 = local_9c;
                if (local_9c != 0) goto LAB_00103cb5;
                local_9c = FT_Gzip_Uncompress(uVar5,pcVar18,&local_58,pcVar19,local_68);
                if (local_9c != 0) {
                  ft_mem_free(uVar5,pcVar18);
                  goto LAB_00103d10;
                }
                puVar2 = (uint *)(*(long *)(param_1 + 0x128) + 8);
                *puVar2 = *puVar2 | 2;
                lVar17 = *(long *)(param_1 + 8);
                local_68 = local_58;
              }
              uVar14 = _UNK_001134f8;
              uVar13 = __LC2;
              lVar23 = *(long *)(lVar17 + 0xa0);
              *puVar4 = pcVar18;
              uVar3 = *(undefined2 *)(lVar17 + 0x88);
              puVar4[1] = local_68;
              uVar7 = *(undefined8 *)(lVar23 + 0x18);
              uVar8 = *(undefined8 *)(lVar23 + 0x20);
              uVar9 = *(undefined8 *)(lVar23 + 0x28);
              uVar10 = *(undefined8 *)(lVar23 + 0x30);
              uVar11 = *(undefined8 *)(lVar23 + 0x38);
              uVar12 = *(undefined8 *)(lVar23 + 0x40);
              uVar5 = *(undefined8 *)(lVar23 + 0x48);
              puVar4[10] = uVar13;
              puVar4[0xb] = uVar14;
              uVar14 = _UNK_00113508;
              uVar13 = __LC3;
              *(uint *)(puVar4 + 9) = CONCAT22(local_78,uVar3);
              puVar4[8] = uVar5;
              puVar4[0xc] = uVar13;
              puVar4[0xd] = uVar14;
              *(ushort *)((long)puVar4 + 0x4c) = local_76;
              puVar4[2] = uVar7;
              puVar4[3] = uVar8;
              puVar4[4] = uVar9;
              puVar4[5] = uVar10;
              puVar4[6] = uVar11;
              puVar4[7] = uVar12;
              *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
              *(undefined8 **)(param_1 + 0x120) = puVar4;
              iVar16 = 0;
              goto LAB_00103cb5;
            }
            uVar22 = (ulong)(uVar20 + 1);
            extract_svg_doc(local_98,(ulong)((uVar20 + 1) * 4) + lVar1);
          }
        } while ((uint)uVar22 <= (uint)uVar21);
      }
    }
    iVar16 = 0x10;
  }
LAB_00103cb5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int tt_face_load_svg(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_44;
  ulong local_40;
  ushort *local_38;
  long local_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (ushort *)0x0;
  local_44 = (**(code **)(param_1 + 0x340))(param_1,0x53564720,param_2,&local_40);
  if (local_44 == 0) {
    if (local_40 < 0x18) {
      puVar2 = (ushort *)0x0;
LAB_00103e48:
      local_44 = 8;
    }
    else {
      local_44 = FT_Stream_ExtractFrame(param_2,local_40,&local_38);
      if (local_44 == 0) {
        puVar2 = (ushort *)ft_mem_alloc(uVar1,0x20,&local_44);
        if (local_44 == 0) {
          *puVar2 = *local_38 << 8 | *local_38 >> 8;
          uVar4 = *(uint *)(local_38 + 1);
          uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          uVar5 = (ulong)uVar4;
          if (9 < uVar4) {
            if (uVar5 <= local_40 - 0xe) {
              *(ushort **)(puVar2 + 4) = (ushort *)((long)local_38 + uVar5);
              uVar3 = *(ushort *)((long)local_38 + uVar5);
              uVar3 = uVar3 << 8 | uVar3 >> 8;
              puVar2[1] = uVar3;
              if (uVar5 + 2 + (ulong)(((uint)uVar3 + (uint)uVar3 * 2) * 4) <= local_40) {
                *(ushort **)(puVar2 + 8) = local_38;
                *(ulong *)(puVar2 + 0xc) = local_40;
                *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10000;
                *(ushort **)(param_1 + 0x5c8) = puVar2;
                goto LAB_00103e75;
              }
            }
          }
          goto LAB_00103e48;
        }
      }
      else {
        puVar2 = (ushort *)0x0;
      }
    }
  }
  else {
    puVar2 = (ushort *)0x0;
  }
  FT_Stream_ReleaseFrame(param_2,&local_38);
  ft_mem_free(uVar1,puVar2);
  *(undefined8 *)(param_1 + 0x5c8) = 0;
LAB_00103e75:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int tt_sbit_decoder_load_image
              (long *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
              char param_6)

{
  ushort uVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  ushort uVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  char cVar15;
  long lVar16;
  undefined2 uVar17;
  ulong uVar18;
  int iVar19;
  uint *puVar20;
  ushort uVar21;
  code *pcVar22;
  long in_FS_OFFSET;
  uint *local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  puVar20 = (uint *)(param_1[7] + param_1[9]);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (uint *)param_1[10];
  lVar16 = param_1[8];
  local_58 = puVar20;
  if (100 < param_5) {
LAB_001040e0:
    iVar19 = 8;
    goto LAB_001040b9;
  }
  bVar3 = false;
  puVar11 = puVar20;
  for (; lVar16 != 0; lVar16 = lVar16 + -1) {
    uVar21 = (ushort)*puVar11 << 8 | (ushort)*puVar11 >> 8;
    if ((param_2 <=
         (ushort)(*(ushort *)((long)puVar11 + 2) << 8 | *(ushort *)((long)puVar11 + 2) >> 8)) &&
       (uVar21 <= param_2)) {
      if (bVar3) {
        local_58 = puVar11;
      }
      uVar5 = puVar11[1];
      uVar6 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18);
      if ((ulong)((long)puVar2 - (long)puVar20) < uVar6) goto LAB_001040e0;
      puVar7 = (ushort *)(uVar6 + (long)puVar20);
      puVar20 = (uint *)(puVar7 + 4);
      if (puVar2 < puVar20) break;
      uVar5 = *(uint *)(puVar7 + 2);
      uVar1 = puVar7[1];
      uVar10 = *puVar7 << 8 | *puVar7 >> 8;
      uVar6 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18);
      if (0x13 < uVar10) break;
      switch(uVar10) {
      default:
        goto switchD_0010406e_caseD_0;
      case 1:
        puVar20 = (uint *)((ulong)((param_2 - uVar21) * 4) + (long)puVar20);
        puVar11 = puVar20 + 2;
        if (puVar2 < puVar11) goto switchD_0010406e_caseD_0;
        uVar5 = *puVar20;
        uVar13 = puVar20[1];
        uVar8 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18);
        uVar9 = (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                       uVar13 << 0x18);
        local_58 = puVar11;
        if (uVar9 <= uVar8) goto switchD_0010406e_caseD_0;
        break;
      case 2:
        if (puVar7 + 10 <= puVar2) {
          local_58 = (uint *)(puVar7 + 6);
          uVar5 = *(uint *)(puVar7 + 4);
          iVar19 = tt_sbit_decoder_load_metrics(param_1,&local_58,puVar2,1);
          if (iVar19 == 0) {
            uVar12 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18);
            uVar8 = (param_2 - uVar21) * uVar12;
            uVar9 = uVar12 + uVar8;
            goto LAB_001043e7;
          }
        }
        goto switchD_0010406e_caseD_0;
      case 3:
        puVar7 = (ushort *)((long)puVar20 + (ulong)((param_2 - uVar21) * 2));
        puVar20 = (uint *)(puVar7 + 2);
        if (puVar2 < puVar20) goto switchD_0010406e_caseD_0;
        uVar8 = (ulong)(ushort)(*puVar7 << 8 | *puVar7 >> 8);
        uVar9 = (ulong)(ushort)(puVar7[1] << 8 | puVar7[1] >> 8);
        local_58 = puVar20;
        if (uVar9 <= uVar8) goto switchD_0010406e_caseD_0;
        break;
      case 4:
        puVar20 = (uint *)(puVar7 + 6);
        if ((((puVar20 <= puVar2) && (uVar5 = *(uint *)(puVar7 + 4), puVar7 + 8 <= puVar2)) &&
            (uVar12 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                             uVar5 << 0x18), uVar12 <= ((long)puVar2 - (long)puVar20 >> 2) - 1U)) &&
           (uVar12 != 0)) {
          uVar18 = 0;
          goto LAB_00104201;
        }
        goto switchD_0010406e_caseD_0;
      case 5:
      case 0x13:
        if (puVar7 + 0xc <= puVar2) {
          local_58 = (uint *)(puVar7 + 6);
          uVar5 = *(uint *)(puVar7 + 4);
          iVar19 = tt_sbit_decoder_load_metrics(param_1,&local_58,puVar2,1);
          if (iVar19 == 0) {
            uVar13 = *local_58;
            puVar20 = local_58 + 1;
            uVar9 = (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                           uVar13 << 0x18);
            if ((uVar9 <= (ulong)((long)puVar2 - (long)puVar20 >> 1)) && (uVar9 != 0)) {
              uVar8 = 0;
              goto LAB_0010416e;
            }
          }
        }
        goto switchD_0010406e_caseD_0;
      }
      lVar16 = param_1[1];
      uVar12 = uVar9 - uVar8;
      goto LAB_00104297;
    }
    puVar11 = puVar11 + 2;
    bVar3 = true;
  }
  goto switchD_0010406e_caseD_0;
LAB_00104201:
  if (param_2 != (ushort)((ushort)*puVar20 << 8 | (ushort)*puVar20 >> 8)) goto LAB_001041f0;
  local_58 = (uint *)((long)puVar20 + 6);
  uVar8 = (ulong)(ushort)(*(ushort *)((long)puVar20 + 2) << 8 | *(ushort *)((long)puVar20 + 2) >> 8)
  ;
  uVar9 = (ulong)(ushort)(*(ushort *)((long)puVar20 + 6) << 8 | *(ushort *)((long)puVar20 + 6) >> 8)
  ;
  if ((uVar18 < uVar12) && (uVar8 <= uVar9)) {
    uVar12 = uVar9 - uVar8;
LAB_001043e7:
    lVar16 = param_1[1];
    if (uVar12 == 0) {
LAB_001043f7:
      iVar19 = 6;
      goto LAB_001040b9;
    }
LAB_00104297:
    if ((ulong)param_1[6] < uVar6 + uVar9) goto LAB_001043f7;
    iVar19 = FT_Stream_Seek(lVar16,uVar8 + uVar6 + param_1[5]);
    if (iVar19 != 0) goto LAB_001040b9;
    iVar19 = FT_Stream_ExtractFrame(lVar16,uVar12,&local_48);
    if (iVar19 != 0) goto LAB_001040b9;
    uVar21 = uVar1 << 8 | uVar1 >> 8;
    uVar6 = (ulong)uVar21;
    uVar12 = local_48 + uVar12;
    local_50 = local_48;
    if (uVar21 < 0x13) {
      uVar9 = 1L << ((byte)(uVar1 >> 8) & 0x3f);
      if ((uVar9 & 0x402c0) == 0) {
        if ((uVar9 & 0x20106) == 0) goto LAB_0010435a;
        iVar4 = tt_sbit_decoder_load_metrics(param_1,&local_50,uVar12,0);
      }
      else {
        iVar4 = tt_sbit_decoder_load_metrics(param_1,&local_50,uVar12,1);
      }
      if (iVar4 == 0) goto LAB_0010435a;
      goto LAB_00104432;
    }
LAB_0010435a:
    uVar9 = local_50;
    iVar4 = iVar19;
    switch(uVar6 & 0xffff) {
    default:
      iVar4 = 8;
      goto LAB_00104432;
    case 1:
    case 6:
      pcVar22 = tt_sbit_decoder_load_byte_aligned;
      break;
    case 2:
    case 7:
      pcVar22 = tt_sbit_decoder_load_bit_aligned;
      uVar21 = ((ushort *)param_1[3])[1];
      uVar5 = (uint)*(ushort *)param_1[3];
      uVar13 = (uVar21 + 7 >> 3) * uVar5;
      if ((uVar21 * uVar5 + 7 >> 3 < uVar13) && (uVar13 - ((int)uVar12 - (int)local_50) == 0)) {
        pcVar22 = tt_sbit_decoder_load_byte_aligned;
      }
      break;
    case 5:
      pcVar22 = tt_sbit_decoder_load_bit_aligned;
      break;
    case 8:
      uVar9 = local_50 + 1;
      if (local_50 + 1 <= uVar12) goto switchD_00104377_caseD_9;
      goto LAB_00104432;
    case 9:
switchD_00104377_caseD_9:
      local_50 = uVar9;
      pcVar22 = tt_sbit_decoder_load_compound;
      break;
    case 0x11:
    case 0x12:
    case 0x13:
      pcVar22 = tt_sbit_decoder_load_png;
    }
    if (*(char *)((long)param_1 + 0x21) == '\0') {
      if ((char)param_1[4] == '\0') {
        iVar4 = 6;
      }
      else {
        puVar2 = (uint *)param_1[2];
        uVar21 = *(ushort *)param_1[3];
        uVar1 = ((ushort *)param_1[3])[1];
        uVar5 = (uint)uVar1;
        *puVar2 = (uint)uVar21;
        puVar2[1] = (uint)uVar1;
        cVar15 = *(char *)((long)param_1 + 0x22);
        if ((byte)(cVar15 - 1U) < 0x20) {
          uVar13 = (uint)uVar1;
          switch(cVar15) {
          case '\x01':
            uVar17 = 2;
            uVar5 = uVar13 + 7 >> 3;
            break;
          case '\x02':
            cVar15 = '\x03';
            uVar17 = 4;
            uVar5 = uVar13 + 3 >> 2;
            break;
          default:
            goto switchD_001044f1_caseD_3;
          case '\x04':
            uVar17 = 0x10;
            uVar5 = uVar13 + 1 >> 1;
            break;
          case '\b':
            cVar15 = '\x02';
            uVar17 = 0x100;
            break;
          case ' ':
            uVar5 = (uint)uVar1 << 2;
            cVar15 = '\a';
            uVar17 = 0x100;
          }
          puVar2[2] = uVar5;
          lVar14 = (ulong)uVar21 * (long)(int)uVar5;
          *(char *)((long)puVar2 + 0x1a) = cVar15;
          *(undefined2 *)(puVar2 + 6) = uVar17;
          if (lVar14 == 0) goto LAB_00104413;
          if ((param_6 == '\0') &&
             (iVar4 = ft_glyphslot_alloc_bitmap(*(undefined8 *)(*param_1 + 0x98),lVar14), iVar4 == 0
             )) {
            *(undefined1 *)((long)param_1 + 0x21) = 1;
            goto LAB_00104418;
          }
        }
        else {
switchD_001044f1_caseD_3:
          iVar4 = 3;
        }
      }
    }
    else {
LAB_00104413:
      if (param_6 == '\0') {
LAB_00104418:
        iVar4 = (*pcVar22)(param_1,local_50,uVar12,param_3,param_4,param_5);
      }
    }
LAB_00104432:
    iVar19 = iVar4;
    FT_Stream_ReleaseFrame(lVar16,&local_48);
    goto LAB_001040b9;
  }
  goto switchD_0010406e_caseD_0;
LAB_001041f0:
  uVar18 = uVar18 + 1;
  puVar20 = puVar20 + 1;
  if (uVar12 == uVar18) goto switchD_0010406e_caseD_0;
  goto LAB_00104201;
  while (uVar8 = uVar8 + 1, uVar9 != uVar8) {
LAB_0010416e:
    uVar13 = *puVar20;
    puVar20 = (uint *)((long)puVar20 + 2);
    if (param_2 == (ushort)((ushort)uVar13 << 8 | (ushort)uVar13 >> 8)) {
      local_58 = puVar20;
      if (uVar8 < uVar9) {
        uVar12 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                        uVar5 << 0x18);
        uVar8 = uVar8 * uVar12;
        uVar9 = uVar12 + uVar8;
        goto LAB_001043e7;
      }
      break;
    }
  }
switchD_0010406e_caseD_0:
  iVar19 = (-(uint)(param_5 == 0) & 0x88) + 0x15;
LAB_001040b9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int tt_sbit_decoder_load_compound
              (long param_1,ushort *param_2,ushort *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  byte *pbVar9;
  int iVar10;
  ushort *puVar11;
  ushort uVar12;
  ushort *puVar13;
  char local_44;
  char local_42;
  char local_3e;
  char local_3c;
  
  iVar10 = 3;
  puVar13 = param_2 + 1;
  if ((puVar13 <= param_3) &&
     (uVar12 = *param_2 << 8 | *param_2 >> 8,
     (ushort *)((ulong)((uint)uVar12 * 4) + (long)puVar13) <= param_3)) {
    puVar11 = *(ushort **)(param_1 + 0x18);
    uVar3 = puVar11[2];
    uVar4 = puVar11[3];
    uVar5 = puVar11[4];
    uVar6 = puVar11[5];
    uVar7 = puVar11[6];
    uVar8 = puVar11[7];
    if (uVar12 == 0) {
      iVar10 = 0;
    }
    else {
      do {
        puVar11 = puVar13 + 2;
        iVar10 = tt_sbit_decoder_load_image
                           (param_1,*puVar13 << 8 | *puVar13 >> 8,(char)puVar13[1] + param_4,
                            *(char *)((long)puVar13 + 3) + param_5,param_6 + 1,0);
        if (iVar10 != 0) break;
        puVar13 = puVar11;
      } while (puVar11 != param_2 + (ulong)(uVar12 - 1) * 2 + 3);
      puVar11 = *(ushort **)(param_1 + 0x18);
    }
    local_3c = (char)uVar7;
    local_44 = (char)uVar3;
    local_42 = (char)uVar4;
    puVar11[4] = uVar5 & 0xff;
    pbVar9 = *(byte **)(param_1 + 0x10);
    puVar11[6] = (short)local_3c;
    local_3e = (char)uVar6;
    puVar11[2] = (short)local_44;
    puVar11[7] = uVar8 & 0xff;
    bVar1 = pbVar9[4];
    bVar2 = *pbVar9;
    puVar11[3] = (short)local_42;
    puVar11[5] = (short)local_3e;
    puVar11[1] = (ushort)bVar1;
    *puVar11 = (ushort)bVar2;
  }
  return iVar10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void premultiply_data(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined1 auVar13 [16];
  undefined1 (*pauVar14) [16];
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  ulong uVar18;
  byte bVar19;
  uint uVar20;
  byte bVar21;
  ulong uVar22;
  ushort uVar23;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  undefined1 auVar24 [16];
  ushort uVar31;
  ushort uVar32;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  undefined1 in_XMM1 [16];
  undefined1 auVar33 [16];
  ushort uVar40;
  undefined1 auVar41 [16];
  
  auVar13 = __LC8;
  sVar12 = _UNK_0011353e;
  sVar11 = _UNK_0011353c;
  sVar10 = _UNK_0011353a;
  sVar9 = _UNK_00113538;
  sVar8 = _UNK_00113536;
  sVar7 = _UNK_00113534;
  sVar6 = _UNK_00113532;
  sVar5 = __LC7;
  auVar4 = __LC6;
  auVar3 = __LC5;
  uVar2 = *(ulong *)(param_2 + 8);
  uVar18 = 0;
  uVar22 = uVar2 & 0xffffffff;
  if (0xf < uVar2) {
    if ((int)uVar2 == 0xf) {
      uVar22 = 0xf;
      goto LAB_00104829;
    }
    do {
      uVar17 = (int)uVar18 + 0x10;
      pauVar14 = (undefined1 (*) [16])(uVar18 + param_3);
      auVar41._0_2_ = *(ushort *)*pauVar14 >> 8;
      auVar41._2_2_ = *(ushort *)(*pauVar14 + 2) >> 8;
      auVar41._4_2_ = *(ushort *)(*pauVar14 + 4) >> 8;
      auVar41._6_2_ = *(ushort *)(*pauVar14 + 6) >> 8;
      auVar41._8_2_ = *(ushort *)(*pauVar14 + 8) >> 8;
      auVar41._10_2_ = *(ushort *)(*pauVar14 + 10) >> 8;
      auVar41._12_2_ = *(ushort *)(*pauVar14 + 0xc) >> 8;
      auVar41._14_2_ = *(ushort *)(*pauVar14 + 0xe) >> 8;
      auVar33 = pshuflw(in_XMM1,auVar41,0xf5);
      auVar24 = pshuflw(*pauVar14 & auVar3,*pauVar14 & auVar3,0xb1);
      auVar41 = auVar41 | auVar4;
      auVar33 = pshufhw(auVar33,auVar33,0xf5);
      auVar24 = pshufhw(auVar24,auVar24,0xb1);
      uVar23 = auVar24._0_2_ * auVar33._0_2_ + sVar5;
      uVar25 = auVar24._2_2_ * auVar33._2_2_ + sVar6;
      uVar26 = auVar24._4_2_ * auVar33._4_2_ + sVar7;
      uVar27 = auVar24._6_2_ * auVar33._6_2_ + sVar8;
      uVar28 = auVar24._8_2_ * auVar33._8_2_ + sVar9;
      uVar29 = auVar24._10_2_ * auVar33._10_2_ + sVar10;
      uVar30 = auVar24._12_2_ * auVar33._12_2_ + sVar11;
      uVar31 = auVar24._14_2_ * auVar33._14_2_ + sVar12;
      uVar32 = auVar33._0_2_ * auVar41._0_2_ + sVar5;
      uVar34 = auVar33._2_2_ * auVar41._2_2_ + sVar6;
      uVar35 = auVar33._4_2_ * auVar41._4_2_ + sVar7;
      uVar36 = auVar33._6_2_ * auVar41._6_2_ + sVar8;
      uVar37 = auVar33._8_2_ * auVar41._8_2_ + sVar9;
      uVar38 = auVar33._10_2_ * auVar41._10_2_ + sVar10;
      uVar39 = auVar33._12_2_ * auVar41._12_2_ + sVar11;
      uVar40 = auVar33._14_2_ * auVar41._14_2_ + sVar12;
      auVar24._0_2_ = (uVar32 >> 8) + uVar32;
      auVar24._2_2_ = (uVar34 >> 8) + uVar34;
      auVar24._4_2_ = (uVar35 >> 8) + uVar35;
      auVar24._6_2_ = (uVar36 >> 8) + uVar36;
      auVar24._8_2_ = (uVar37 >> 8) + uVar37;
      auVar24._10_2_ = (uVar38 >> 8) + uVar38;
      auVar24._12_2_ = (uVar39 >> 8) + uVar39;
      auVar24._14_2_ = (uVar40 >> 8) + uVar40;
      in_XMM1._0_2_ = (ushort)((uVar23 >> 8) + uVar23) >> 8;
      in_XMM1._2_2_ = (ushort)((uVar25 >> 8) + uVar25) >> 8;
      in_XMM1._4_2_ = (ushort)((uVar26 >> 8) + uVar26) >> 8;
      in_XMM1._6_2_ = (ushort)((uVar27 >> 8) + uVar27) >> 8;
      in_XMM1._8_2_ = (ushort)((uVar28 >> 8) + uVar28) >> 8;
      in_XMM1._10_2_ = (ushort)((uVar29 >> 8) + uVar29) >> 8;
      in_XMM1._12_2_ = (ushort)((uVar30 >> 8) + uVar30) >> 8;
      in_XMM1._14_2_ = (ushort)((uVar31 >> 8) + uVar31) >> 8;
      *pauVar14 = auVar24 & auVar13 | in_XMM1;
      uVar18 = (ulong)uVar17;
    } while (uVar17 < (int)uVar2 - 0xfU);
    uVar22 = (ulong)*(uint *)(param_2 + 8);
  }
  if ((uint)uVar22 <= (uint)uVar18) {
    return;
  }
LAB_00104829:
  do {
    while( true ) {
      pbVar15 = (byte *)(uVar18 + param_3);
      if (pbVar15[3] != 0) break;
      uVar17 = (int)uVar18 + 4;
      uVar18 = (ulong)uVar17;
      pbVar15[2] = 0;
      pbVar15[0] = 0;
      pbVar15[1] = 0;
      if ((uint)uVar22 <= uVar17) {
        return;
      }
    }
    bVar16 = *pbVar15;
    bVar21 = pbVar15[1];
    bVar19 = pbVar15[2];
    uVar17 = (uint)pbVar15[3];
    if (uVar17 != 0xff) {
      uVar20 = bVar19 * uVar17 + 0x80;
      uVar1 = bVar16 * uVar17 + 0x80;
      uVar17 = bVar21 * uVar17 + 0x80;
      bVar19 = (byte)((uVar20 >> 8) + uVar20 >> 8);
      bVar21 = (byte)((uVar17 >> 8) + uVar17 >> 8);
      bVar16 = (byte)((uVar1 >> 8) + uVar1 >> 8);
    }
    uVar17 = (int)uVar18 + 4;
    uVar18 = (ulong)uVar17;
    *pbVar15 = bVar19;
    pbVar15[1] = bVar21;
    pbVar15[2] = bVar16;
  } while (uVar17 < (uint)uVar22);
  return;
}



int write_buf(long *param_1,ulong *param_2,long *param_3,void *param_4,size_t param_5,
             undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar4 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  uVar1 = lVar4 + param_5;
  iVar2 = 10;
  if (uVar1 < 0x1e00001) {
    lVar3 = *param_1;
    if (*param_2 < uVar1) {
      lVar3 = ft_mem_qrealloc(param_6,1,*param_2,uVar1,lVar3,&local_44);
      iVar2 = local_44;
      if (local_44 != 0) goto LAB_0010490f;
      *param_2 = *param_3 + param_5;
      lVar4 = *param_3;
    }
    memcpy((void *)(lVar4 + lVar3),param_4,param_5);
    *param_3 = *param_3 + param_5;
    *param_1 = lVar3;
    iVar2 = local_44;
  }
LAB_0010490f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pad4(undefined8 *param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  ulong local_30;
  undefined2 local_23;
  undefined1 local_21;
  long local_20;
  
  local_38 = *param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = *param_3;
  local_23 = 0;
  local_21 = 0;
  if ((local_30 < 0xfffffffffffffffd) &&
     ((lVar3 = (local_30 + 3 & 0xfffffffffffffffc) - local_30, lVar3 == 0 ||
      (iVar1 = write_buf(&local_38,param_2,&local_30,&local_23,lVar3,param_4), iVar1 == 0)))) {
    *param_1 = local_38;
    *param_3 = local_30;
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



ulong tt_face_colr_blend_layer(long param_1,uint param_2,long param_3,long param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  void *__src;
  long lVar25;
  int iVar26;
  int iVar27;
  long in_FS_OFFSET;
  int iVar28;
  int local_80;
  uint local_44;
  long local_40;
  
  lVar6 = *(long *)(param_3 + 0xa8);
  uVar2 = *(undefined8 *)(param_4 + 0xc0);
  uVar3 = *(undefined8 *)(param_4 + 0x98);
  iVar28 = (int)uVar2;
  iVar12 = (int)((ulong)uVar2 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar22 = (int)uVar3;
  if (lVar6 == 0) {
    iVar12 = *(int *)(param_4 + 0x9c) * 4;
    *(undefined1 *)(param_3 + 0xb2) = 7;
    *(int *)(param_3 + 0xa0) = iVar12;
    *(undefined2 *)(param_3 + 0xb0) = 0x100;
    *(undefined8 *)(param_3 + 0xc0) = uVar2;
    *(undefined8 *)(param_3 + 0x98) = uVar3;
    uVar7 = ft_glyphslot_alloc_bitmap(param_3);
    local_44 = (uint)uVar7;
    if (local_44 != 0) goto LAB_00104e14;
    memset(*(void **)(param_3 + 0xa8),0,(ulong)(uint)(iVar12 * iVar22));
    iVar12 = *(int *)(param_4 + 0xc4);
    iVar22 = *(int *)(param_4 + 0x98);
    uVar13 = *(uint *)(param_3 + 0xa0);
    local_80 = *(int *)(param_3 + 0xc0);
    lVar6 = *(long *)(param_3 + 0xa8);
    iVar27 = *(int *)(param_3 + 0xc4);
    iVar28 = *(int *)(param_4 + 0xc0);
  }
  else {
    local_80 = *(int *)(param_3 + 0xc0);
    iVar15 = iVar28;
    if (local_80 <= iVar28) {
      iVar15 = local_80;
    }
    iVar10 = *(int *)(param_4 + 0x9c) + iVar28;
    iVar20 = *(int *)(param_3 + 0x9c) + local_80;
    iVar16 = iVar20;
    if (iVar20 <= iVar10) {
      iVar16 = iVar10;
    }
    iVar26 = iVar12 - iVar22;
    iVar27 = *(int *)(param_3 + 0xc4);
    iVar24 = iVar27 - *(int *)(param_3 + 0x98);
    iVar4 = iVar24;
    if (iVar26 <= iVar24) {
      iVar4 = iVar26;
    }
    iVar5 = iVar12;
    if (iVar12 <= iVar27) {
      iVar5 = iVar27;
    }
    if ((iVar20 < iVar10 || (iVar28 < local_80 || iVar27 < iVar12)) || (iVar26 < iVar24)) {
      uVar13 = (iVar16 - iVar15) * 4;
      lVar6 = ft_mem_alloc(*(undefined8 *)(param_1 + 0xb8),(iVar5 - iVar4) * uVar13,&local_44);
      uVar7 = (ulong)local_44;
      if (local_44 != 0) goto LAB_00104e14;
      __src = *(void **)(param_3 + 0xa8);
      uVar14 = 0;
      pvVar8 = (void *)((long)(int)((iVar5 - *(int *)(param_3 + 0xc4)) * uVar13) +
                        (long)((*(int *)(param_3 + 0xc0) - iVar15) * 4) + lVar6);
      if (*(int *)(param_3 + 0x98) != 0) {
        do {
          uVar14 = uVar14 + 1;
          pvVar8 = memcpy(pvVar8,__src,(ulong)(uint)(*(int *)(param_3 + 0x9c) * 4));
          pvVar8 = (void *)((long)pvVar8 + (ulong)uVar13);
          __src = (void *)((long)__src + (long)*(int *)(param_3 + 0xa0));
        } while (uVar14 < *(uint *)(param_3 + 0x98));
      }
      ft_glyphslot_set_bitmap(param_3);
      *(int *)(param_3 + 0xc0) = iVar15;
      *(int *)(param_3 + 0xc4) = iVar5;
      lVar6 = *(long *)(param_3 + 0xa8);
      *(int *)(param_3 + 0x9c) = iVar16 - iVar15;
      iVar12 = *(int *)(param_4 + 0xc4);
      *(int *)(param_3 + 0x98) = iVar5 - iVar4;
      iVar22 = *(int *)(param_4 + 0x98);
      *(uint *)(param_3 + 0xa0) = uVar13;
      puVar21 = (uint *)(*(long *)(param_3 + 0x128) + 8);
      *puVar21 = *puVar21 | 1;
      iVar28 = *(int *)(param_4 + 0xc0);
      *(undefined4 *)(param_3 + 0x90) = 0x62697473;
      iVar27 = iVar5;
      local_80 = iVar15;
    }
    else {
      uVar13 = *(uint *)(param_3 + 0xa0);
    }
  }
  if (param_2 == 0xffff) {
    uVar14 = (uint)*(byte *)(param_1 + 0x450);
    if (*(byte *)(param_1 + 0x450) == 0) {
      if (*(long *)(param_1 + 0x428) == 0) {
        bVar9 = 0;
        uVar17 = 0;
        uVar18 = 0xffffffff;
      }
      else {
        uVar18 = 0xff;
        uVar19 = *(ushort *)(*(long *)(param_1 + 0x428) + (ulong)*(ushort *)(param_1 + 0x440) * 2) &
                 2;
        bVar9 = -(uVar19 != 0);
        if (uVar19 != 0) {
          uVar14 = 0xff;
        }
        uVar17 = (uint)bVar9;
      }
    }
    else {
      uVar14 = (uint)*(byte *)(param_1 + 0x451);
      uVar17 = (uint)*(byte *)(param_1 + 0x452);
      bVar9 = *(byte *)(param_1 + 0x453);
      uVar18 = (uint)*(byte *)(param_1 + 0x454);
    }
  }
  else {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x448) + (ulong)param_2 * 4);
    uVar14 = (uint)*pbVar1;
    uVar17 = (uint)pbVar1[1];
    bVar9 = pbVar1[2];
    uVar18 = (uint)pbVar1[3];
  }
  lVar25 = *(long *)(param_4 + 0xa8);
  lVar6 = lVar6 + (long)((iVar28 - local_80) * 4) + (long)(int)((iVar27 - iVar12) * uVar13);
  if (iVar22 != 0) {
    uVar13 = 0;
    do {
      uVar7 = 0;
      lVar23 = 0;
      if (*(int *)(param_4 + 0x9c) != 0) {
        do {
          iVar12 = (int)uVar7;
          puVar21 = (uint *)(uVar7 + lVar6);
          uVar11 = (uint)*(byte *)(lVar25 + lVar23) * (uVar18 & 0xff);
          iVar22 = 0xff - uVar11 / 0xff;
          lVar23 = lVar23 + 1;
          uVar7 = (ulong)(iVar12 + 4);
          *puVar21 = (((((uint)*(byte *)(lVar6 + (ulong)(iVar12 + 3)) * iVar22) / 0xff +
                        uVar11 / 0xff & 0xff) << 8 |
                      ((uint)bVar9 * (uVar11 / 0xff)) / 0xff +
                      ((uint)*(byte *)(lVar6 + (ulong)(iVar12 + 2)) * iVar22) / 0xff & 0xff) << 8 |
                     ((uint)*(byte *)(lVar6 + (ulong)(iVar12 + 1)) * iVar22) / 0xff +
                     (uVar17 * (uVar11 / 0xff)) / 0xff & 0xff) << 8 |
                     ((uint)(byte)*puVar21 * iVar22) / 0xff + ((uVar11 / 0xff) * uVar14) / 0xff &
                     0xff;
        } while ((uint)lVar23 < *(uint *)(param_4 + 0x9c));
      }
      uVar13 = uVar13 + 1;
      lVar25 = lVar25 + *(int *)(param_4 + 0xa0);
      lVar6 = lVar6 + *(int *)(param_3 + 0xa0);
    } while (uVar13 < *(uint *)(param_4 + 0x98));
  }
  uVar7 = 0;
LAB_00104e14:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



int tt_face_load_colr(long param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  int local_54;
  ushort *local_50;
  ulong local_48;
  long local_40;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (ushort *)0x0;
  if (*(long *)(param_1 + 0x5b8) == 0) {
    iVar17 = 3;
    goto LAB_00105014;
  }
  local_54 = (**(code **)(param_1 + 0x340))(param_1,0x434f4c52,param_2,&local_48);
  if (local_54 == 0) {
    lVar8 = FT_Stream_Pos(param_2);
    if ((local_48 < 0xe) ||
       (local_54 = FT_Stream_ExtractFrame(param_2,local_48,&local_50), puVar5 = local_50,
       local_54 != 0)) goto LAB_00104ff6;
    puVar9 = (ushort *)ft_mem_alloc(uVar4,0x90,&local_54);
    iVar17 = local_54;
    if (local_54 == 0) {
      uVar2 = *puVar5;
      uVar6 = uVar2 << 8 | uVar2 >> 8;
      *puVar9 = uVar6;
      if (uVar6 < 2) {
        uVar6 = puVar5[1] << 8 | puVar5[1] >> 8;
        puVar9[1] = uVar6;
        uVar3 = *(uint *)(puVar5 + 2);
        uVar18 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        if ((local_48 <= uVar18) ||
           (local_48 - uVar18 < (ulong)(((uint)uVar6 + (uint)uVar6 * 2) * 2))) goto LAB_001051b0;
        uVar3 = *(uint *)(puVar5 + 4);
        uVar10 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        uVar6 = puVar5[6] << 8 | puVar5[6] >> 8;
        puVar9[2] = uVar6;
        if ((local_48 <= uVar10) || (local_48 - uVar10 < (ulong)((uint)uVar6 * 4)))
        goto LAB_001051b0;
        iVar7 = local_54;
        if (uVar2 != 0x100) goto LAB_00105144;
        if (local_48 < 0x22) goto LAB_001051b0;
        uVar3 = *(uint *)(puVar5 + 7);
        uVar11 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        if (local_48 - 4 <= uVar11) goto LAB_001051b0;
        puVar1 = (uint *)((long)local_50 + uVar11);
        uVar3 = *puVar1;
        uVar13 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        uVar14 = uVar13 * 6;
        if (local_48 - uVar11 < uVar14) goto LAB_001051b0;
        *(ulong *)(puVar9 + 0xc) = uVar13;
        *(uint **)(puVar9 + 0x10) = puVar1;
        uVar3 = *(uint *)(puVar5 + 9);
        uVar11 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        if (local_48 <= uVar11) goto LAB_001051b0;
        if (uVar11 != 0) {
          if (uVar11 < local_48 - 4) {
            puVar16 = (uint *)((long)local_50 + uVar11);
            uVar3 = *puVar16;
            uVar13 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18);
            if (uVar13 * 4 <= local_48 - uVar11) {
              puVar15 = (uint *)(uVar14 + (long)puVar1);
              if (puVar16 + uVar13 <= (uint *)(uVar14 + (long)puVar1)) {
                puVar15 = puVar16 + uVar13;
              }
              goto LAB_001052ae;
            }
          }
          goto LAB_001051b0;
        }
        uVar13 = 0;
        puVar16 = (uint *)0x0;
        puVar15 = (uint *)(uVar14 + (long)puVar1);
LAB_001052ae:
        *(ulong *)(puVar9 + 0x14) = uVar13;
        *(uint **)(puVar9 + 0x18) = puVar16;
        *(uint **)(puVar9 + 0x20) = puVar15;
        uVar3 = *(uint *)(puVar5 + 0xb);
        uVar11 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        if (local_48 <= uVar11) goto LAB_001051b0;
        lVar12 = 0;
        if (uVar11 != 0) {
          lVar12 = (long)local_50 + uVar11;
        }
        *(long *)(puVar9 + 0x1c) = lVar12;
        puVar9[0x24] = 0;
        puVar9[0x25] = 0;
        puVar9[0x28] = 0;
        puVar9[0x29] = 0;
        puVar9[0x2a] = 0;
        puVar9[0x2b] = 0;
        puVar9[0x2c] = 0;
        puVar9[0x2e] = 0;
        puVar9[0x2f] = 0;
        puVar9[0x30] = 0;
        puVar9[0x31] = 0;
        puVar9[0x32] = 0;
        puVar9[0x33] = 0;
        puVar9[0x34] = 0;
        puVar9[0x35] = 0;
        puVar9[0x36] = 0;
        puVar9[0x37] = 0;
        *(undefined1 (*) [16])(puVar9 + 0x38) = (undefined1  [16])0x0;
        if ((*(byte *)(param_1 + 0x4c8) & 1) == 0) goto LAB_00105144;
        uVar3 = *(uint *)(puVar5 + 0xd);
        lVar12 = *(long *)(param_1 + 0x380);
        uVar11 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        if (uVar11 < local_48) {
          uVar3 = *(uint *)(puVar5 + 0xf);
          uVar14 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18);
          if (uVar14 < local_48) {
            if (uVar14 == 0) goto LAB_00105144;
            if ((*(long *)(param_1 + 0x4c0) == 0) &&
               (iVar7 = (**(code **)(lVar12 + 0x20))(param_1,0), iVar7 != 0)) goto LAB_001051b0;
            local_54 = (**(code **)(lVar12 + 0x68))(param_1,lVar8 + uVar14,puVar9 + 0x24);
            if (local_54 == 0) {
              iVar7 = 0;
              if ((puVar9[0x2c] != 0) && (uVar11 != 0)) {
                local_54 = (**(code **)(lVar12 + 0x60))
                                     (param_1,lVar8 + uVar11,puVar9 + 0x34,puVar9 + 0x24);
                if (local_54 != 0) {
                  lVar12 = *(long *)(param_1 + 0x380);
                  goto LAB_001051c1;
                }
                iVar7 = 0;
              }
LAB_00105144:
              local_54 = iVar7;
              *(ushort **)(puVar9 + 0x40) = local_50;
              *(ulong *)(puVar9 + 4) = (long)local_50 + uVar18;
              *(ulong *)(puVar9 + 0x44) = local_48;
              *(ulong *)(puVar9 + 8) = uVar10 + (long)local_50;
              *(ushort **)(param_1 + 0x5c0) = puVar9;
              goto LAB_00105014;
            }
            lVar12 = *(long *)(param_1 + 0x380);
          }
        }
      }
      else {
LAB_001051b0:
        lVar12 = *(long *)(param_1 + 0x380);
      }
LAB_001051c1:
      (**(code **)(lVar12 + 0x80))(param_1,puVar9 + 0x34);
      (**(code **)(lVar12 + 0x78))(param_1,puVar9 + 0x24);
      local_54 = 8;
    }
  }
  else {
LAB_00104ff6:
    puVar9 = (ushort *)0x0;
  }
  FT_Stream_ReleaseFrame(param_2,&local_50);
  ft_mem_free(uVar4,puVar9);
  iVar17 = local_54;
LAB_00105014:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar17;
}



int tt_face_load_hmtx(long param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == '\0') {
    puVar3 = (undefined8 *)(param_1 + 0x598);
    puVar4 = (undefined8 *)(param_1 + 0x4e8);
    uVar2 = 0x686d7478;
  }
  else {
    puVar3 = (undefined8 *)(param_1 + 0x5a0);
    puVar4 = (undefined8 *)(param_1 + 0x4f0);
    uVar2 = 0x766d7478;
  }
  iVar1 = (**(code **)(param_1 + 0x340))(param_1,uVar2,param_2,&local_38);
  if (iVar1 == 0) {
    *puVar4 = local_38;
    uVar2 = FT_Stream_Pos(param_2);
    *puVar3 = uVar2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong tt_face_load_cpal(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ushort uVar13;
  ushort uVar14;
  uint *puVar15;
  undefined1 *puVar16;
  undefined2 *puVar17;
  ushort uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  uint local_54;
  ushort *local_50;
  ulong local_48;
  long local_40;
  
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (ushort *)0x0;
  local_54 = (**(code **)(param_1 + 0x340))(param_1,0x4350414c,param_2,&local_48);
  if (local_54 == 0) {
    if (local_48 < 0xc) {
      puVar9 = (ushort *)0x0;
      goto LAB_0010555a;
    }
    local_54 = FT_Stream_ExtractFrame(param_2,local_48,&local_50);
    puVar8 = local_50;
    if (local_54 == 0) {
      puVar9 = (ushort *)ft_mem_alloc(uVar7,0x28,&local_54);
      if (local_54 == 0) {
        uVar3 = *puVar8;
        uVar13 = uVar3 << 8 | uVar3 >> 8;
        *puVar9 = uVar13;
        if (uVar13 < 2) {
          uVar13 = puVar8[1] << 8 | puVar8[1] >> 8;
          *(ushort *)(param_1 + 0x430) = uVar13;
          uVar14 = puVar8[2] << 8 | puVar8[2] >> 8;
          *(ushort *)(param_1 + 0x418) = uVar14;
          uVar19 = uVar14 + 0xc + (uint)uVar14;
          uVar18 = puVar8[3] << 8 | puVar8[3] >> 8;
          puVar9[1] = uVar18;
          uVar4 = *(uint *)(puVar8 + 4);
          uVar12 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18);
          if ((((uVar19 <= local_48) && (uVar12 < local_48)) &&
              ((ulong)((uint)uVar18 * 4) <= local_48 - uVar12)) && (uVar13 <= uVar18)) {
            *(ushort **)(puVar9 + 8) = puVar8 + 6;
            *(ulong *)(puVar9 + 4) = uVar12 + (long)local_50;
            if (uVar3 == 0x100) {
              if (local_48 < uVar19 + 0xc) goto LAB_0010555a;
              puVar15 = (uint *)((long)(puVar8 + 6) + (ulong)(uVar19 - 0xc));
              uVar4 = *puVar15;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar12 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18);
              if (uVar12 != 0) {
                if ((local_48 <= uVar12) || (local_48 - uVar12 < (ulong)(uVar19 - 0xc)))
                goto LAB_0010555a;
                puVar10 = (undefined2 *)ft_mem_qrealloc(uVar7,2,0,uVar14,0,&local_54);
                if (local_54 != 0) goto LAB_00105562;
                uVar3 = *(ushort *)(param_1 + 0x418);
                puVar16 = (undefined1 *)((long)local_50 + uVar12);
                for (puVar17 = puVar10; puVar17 < puVar10 + uVar3; puVar17 = puVar17 + 1) {
                  uVar2 = *puVar16;
                  puVar1 = puVar16 + 1;
                  puVar16 = puVar16 + 2;
                  *puVar17 = CONCAT11(uVar2,*puVar1);
                }
                *(undefined2 **)(param_1 + 0x428) = puVar10;
              }
              uVar12 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                              uVar5 << 0x18);
              if (uVar12 != 0) {
                if ((local_48 <= uVar12) ||
                   (local_48 - uVar12 < (ulong)((uint)*(ushort *)(param_1 + 0x418) * 2)))
                goto LAB_0010555a;
                puVar10 = (undefined2 *)
                          ft_mem_qrealloc(uVar7,2,0,(uint)*(ushort *)(param_1 + 0x418),0,&local_54);
                if (local_54 != 0) goto LAB_00105562;
                uVar3 = *(ushort *)(param_1 + 0x418);
                puVar16 = (undefined1 *)(uVar12 + (long)local_50);
                for (puVar17 = puVar10; puVar17 < puVar10 + uVar3; puVar17 = puVar17 + 1) {
                  uVar2 = *puVar16;
                  puVar1 = puVar16 + 1;
                  puVar16 = puVar16 + 2;
                  *puVar17 = CONCAT11(uVar2,*puVar1);
                }
                *(undefined2 **)(param_1 + 0x420) = puVar10;
              }
              uVar12 = (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                              uVar6 << 0x18);
              if (uVar12 == 0) {
                uVar13 = *(ushort *)(param_1 + 0x430);
              }
              else {
                if ((local_48 <= uVar12) ||
                   (local_48 - uVar12 < (ulong)((uint)*(ushort *)(param_1 + 0x430) * 2)))
                goto LAB_0010555a;
                puVar10 = (undefined2 *)
                          ft_mem_qrealloc(uVar7,2,0,(uint)*(ushort *)(param_1 + 0x430),0,&local_54);
                if (local_54 != 0) goto LAB_00105562;
                uVar3 = *(ushort *)(param_1 + 0x430);
                puVar16 = (undefined1 *)(uVar12 + (long)local_50);
                for (puVar17 = puVar10; puVar17 < puVar10 + uVar3; puVar17 = puVar17 + 1) {
                  uVar2 = *puVar16;
                  puVar1 = puVar16 + 1;
                  puVar16 = puVar16 + 2;
                  *puVar17 = CONCAT11(uVar2,*puVar1);
                }
                *(undefined2 **)(param_1 + 0x438) = puVar10;
                uVar13 = *(ushort *)(param_1 + 0x430);
              }
            }
            *(ulong *)(puVar9 + 0x10) = local_48;
            *(ushort **)(puVar9 + 0xc) = local_50;
            *(ushort **)(param_1 + 0x5b8) = puVar9;
            uVar11 = ft_mem_realloc(uVar7,4,0,uVar13,0,&local_54);
            *(undefined8 *)(param_1 + 0x448) = uVar11;
            if (local_54 != 0) goto LAB_00105562;
            uVar12 = tt_face_palette_set(param_1,0);
            if ((int)uVar12 == 0) goto LAB_00105587;
          }
        }
LAB_0010555a:
        local_54 = 8;
      }
    }
    else {
      puVar9 = (ushort *)0x0;
    }
  }
  else {
    puVar9 = (ushort *)0x0;
  }
LAB_00105562:
  FT_Stream_ReleaseFrame(param_2,&local_50);
  ft_mem_free(uVar7,puVar9);
  uVar12 = (ulong)local_54;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
LAB_00105587:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int tt_face_load_strike_metrics(long param_1,ulong param_2,ushort *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  
  if (*(long *)(param_1 + 0x548) == 0) {
    if (*(uint *)(param_1 + 0x544) <= param_2) {
      return 6;
    }
  }
  else {
    if ((ulong)(long)*(int *)(param_1 + 0x38) <= param_2) {
      return 6;
    }
    param_2 = (ulong)*(uint *)(*(long *)(param_1 + 0x548) + param_2 * 4);
  }
  uVar13 = *(uint *)(param_1 + 0x540);
  if (2 < uVar13) {
    if (uVar13 != 3) {
      return 2;
    }
    iVar10 = 3;
    uVar13 = *(uint *)(*(long *)(param_1 + 0x530) + 8 + param_2 * 4);
    uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    if ((ulong)(uVar13 + 4) <= *(ulong *)(param_1 + 0x5b0)) {
      uVar11 = *(undefined8 *)(param_1 + 0xc0);
      iVar10 = FT_Stream_Seek(uVar11,(ulong)uVar13 + *(long *)(param_1 + 0x5a8));
      if ((iVar10 == 0) && (iVar10 = FT_Stream_EnterFrame(uVar11,4), iVar10 == 0)) {
        uVar13 = FT_Stream_GetUShort(uVar11);
        auVar16._8_8_ = extraout_XMM0_Qb;
        auVar16._0_8_ = extraout_XMM0_Qa;
        auVar16 = pshuflw(auVar16,ZEXT416(uVar13),0);
        FT_Stream_GetUShort(uVar11);
        FT_Stream_ExitFrame(uVar11);
        *(int *)param_3 = auVar16._0_4_;
        uVar11 = FT_DivFix((uVar13 & 0xffff) << 6,*(undefined2 *)(param_1 + 0x152));
        sVar7 = *(short *)(param_1 + 0x198);
        lVar12 = (long)(int)uVar11;
        lVar14 = sVar7 * lVar12;
        sVar8 = *(short *)(param_1 + 0x19a);
        *(long *)(param_3 + 0xc) = lVar14 + 0x8000 + (lVar14 >> 0x3f) >> 0x10;
        lVar15 = sVar8 * lVar12;
        lVar14 = (((int)sVar7 - (int)sVar8) + (int)*(short *)(param_1 + 0x19c)) * lVar12;
        *(long *)(param_3 + 0x10) = lVar15 + 0x8000 + (lVar15 >> 0x3f) >> 0x10;
        *(long *)(param_3 + 0x14) = (long)(int)((ulong)(lVar14 + 0x8000 + (lVar14 >> 0x3f)) >> 0x10)
        ;
        uVar9 = *(ushort *)(param_1 + 0x19e);
        *(undefined8 *)(param_3 + 4) = uVar11;
        lVar12 = (ulong)uVar9 * lVar12;
        *(undefined8 *)(param_3 + 8) = uVar11;
        *(long *)(param_3 + 0x18) = lVar12 + 0x8000 + (lVar12 >> 0x3f) >> 0x10;
      }
    }
    return iVar10;
  }
  if (uVar13 == 0) {
    return 2;
  }
  lVar14 = *(long *)(param_1 + 0x530) + 8 + param_2 * 0x30;
  bVar1 = *(byte *)(lVar14 + 0x2c);
  *param_3 = (ushort)bVar1;
  bVar2 = *(byte *)(lVar14 + 0x2d);
  param_3[1] = (ushort)bVar2;
  cVar3 = *(char *)(lVar14 + 0x10);
  lVar12 = (long)((int)cVar3 << 6);
  *(long *)(param_3 + 0xc) = lVar12;
  cVar4 = *(char *)(lVar14 + 0x11);
  lVar15 = (long)((int)cVar4 << 6);
  *(long *)(param_3 + 0x10) = lVar15;
  cVar5 = *(char *)(lVar14 + 0x19);
  if ((int)cVar4 << 6 < 1) {
    if (cVar3 == '\0' && cVar4 == '\0') {
      if (*(char *)(lVar14 + 0x18) == '\0' && cVar5 == '\0') {
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
        lVar12 = (ulong)bVar2 << 6;
        *(long *)(param_3 + 0xc) = lVar12;
        lVar15 = lVar12;
        goto LAB_00105a9a;
      }
      lVar12 = (long)((int)*(char *)(lVar14 + 0x18) << 6);
      lVar15 = (long)((int)cVar5 << 6);
      *(long *)(param_3 + 0xc) = lVar12;
      *(long *)(param_3 + 0x10) = lVar15;
    }
  }
  else if (cVar5 < '\0') {
    *(long *)(param_3 + 0x10) = -lVar15;
    lVar15 = lVar12 + lVar15;
    goto LAB_00105a9a;
  }
  lVar15 = lVar12 - lVar15;
LAB_00105a9a:
  if (lVar15 == 0) {
    *(ulong *)(param_3 + 0x14) = (ulong)bVar2 * 0x40;
    *(ulong *)(param_3 + 0x10) = lVar12 + (ulong)bVar2 * -0x40;
  }
  else {
    *(long *)(param_3 + 0x14) = lVar15;
  }
  uVar6 = *(undefined2 *)(param_1 + 0x152);
  *(long *)(param_3 + 0x18) =
       (long)(int)(((int)*(char *)(lVar14 + 0x16) + (uint)*(byte *)(lVar14 + 0x12) +
                   (int)*(char *)(lVar14 + 0x17)) * 0x40);
  uVar11 = FT_DivFix((ulong)bVar1 << 6,uVar6);
  uVar6 = *(undefined2 *)(param_1 + 0x152);
  *(undefined8 *)(param_3 + 4) = uVar11;
  uVar11 = FT_DivFix((uint)param_3[1] << 6,uVar6);
  *(undefined8 *)(param_3 + 8) = uVar11;
  return 0;
}



int tt_face_load_gasp(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = (**(code **)(param_1 + 0x340))(param_1,0x67617370,param_2,0);
  if (local_44 == 0) {
    local_44 = FT_Stream_EnterFrame(param_2,4);
    if (local_44 == 0) {
      uVar2 = FT_Stream_GetUShort(param_2);
      *(undefined2 *)(param_1 + 0x3a0) = uVar2;
      uVar3 = FT_Stream_GetUShort(param_2);
      FT_Stream_ExitFrame(param_2);
      if (*(ushort *)(param_1 + 0x3a0) < 2) {
        uVar5 = (ulong)uVar3;
        puVar4 = (undefined2 *)ft_mem_qrealloc(uVar1,4,0,uVar5,0,&local_44);
        if (local_44 != 0) goto LAB_00105d27;
        local_44 = FT_Stream_EnterFrame(param_2,uVar5 * 4);
        if (local_44 != 0) goto LAB_00105d27;
        if (uVar3 != 0) {
          puVar6 = puVar4;
          do {
            puVar7 = puVar6 + 2;
            uVar2 = FT_Stream_GetUShort(param_2);
            *puVar6 = uVar2;
            uVar2 = FT_Stream_GetUShort(param_2);
            puVar6[1] = uVar2;
            puVar6 = puVar7;
          } while (puVar7 != puVar4 + uVar5 * 2);
        }
        *(undefined2 **)(param_1 + 0x3a8) = puVar4;
        *(ushort *)(param_1 + 0x3a2) = uVar3;
        FT_Stream_ExitFrame(param_2);
      }
      else {
        local_44 = 8;
        *(undefined2 *)(param_1 + 0x3a2) = 0;
      }
    }
  }
  puVar4 = (undefined2 *)0x0;
LAB_00105d27:
  ft_mem_free(uVar1,puVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void tt_face_set_sbit_strike(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FT_Match_Size(param_1,param_2,0,param_3);
  return;
}



int tt_face_load_sbit(long param_1,undefined8 param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  iVar3 = (**(code **)(param_1 + 0x340))(param_1,0x43424c43,param_2,&local_50);
  if (iVar3 == 0) {
    uVar5 = 2;
LAB_00105fa5:
    *(undefined4 *)(param_1 + 0x540) = uVar5;
    if (local_50 < 8) goto LAB_00105f3e;
LAB_00105fb3:
    uVar7 = FT_Stream_Pos(param_2);
    uVar4 = *(uint *)(param_1 + 0x540);
    if (2 < uVar4) {
      if (uVar4 != 3) {
        *(undefined1 (*) [16])(param_1 + 0x5a8) = (undefined1  [16])0x0;
LAB_0010619a:
        iVar3 = (**(code **)(param_1 + 0x340))(param_1,0x43424454,param_2,&local_48);
        if (((iVar3 == 0) ||
            (iVar3 = (**(code **)(param_1 + 0x340))(param_1,0x45424454,param_2,&local_48),
            iVar3 == 0)) ||
           (iVar3 = (**(code **)(param_1 + 0x340))(param_1,0x62646174,param_2,&local_48), iVar3 == 0
           )) {
          uVar7 = FT_Stream_Pos(param_2);
          *(undefined8 *)(param_1 + 0x5a8) = uVar7;
          *(ulong *)(param_1 + 0x5b0) = local_48;
          local_50 = local_48;
        }
        else {
          local_50 = *(ulong *)(param_1 + 0x5b0);
        }
LAB_00106279:
        if (local_50 == 0) goto LAB_0010620b;
        goto LAB_00106215;
      }
      iVar3 = FT_Stream_EnterFrame(param_2,8);
      if (iVar3 != 0) goto LAB_00106175;
      sVar1 = FT_Stream_GetUShort(param_2);
      uVar2 = FT_Stream_GetUShort(param_2);
      uVar4 = FT_Stream_GetULong(param_2);
      FT_Stream_ExitFrame(param_2);
      if (sVar1 == 0) {
        puVar6 = *(uint **)(param_1 + 0x530);
        iVar3 = 2;
      }
      else {
        if (((uVar2 & 0xfffd) != 1) || (0xffff < uVar4)) goto LAB_00105f3e;
        if (uVar2 == 3) {
          *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x40000;
        }
        if (local_50 < (ulong)uVar4 * 4 + 8) {
          uVar4 = (uint)(local_50 - 8 >> 2);
        }
        lVar8 = FT_Stream_Pos(param_2);
        iVar3 = FT_Stream_Seek(param_2,lVar8 + -8);
        if (iVar3 == 0) {
          uVar10 = (ulong)(uVar4 * 4 + 8);
          *(ulong *)(param_1 + 0x538) = uVar10;
          iVar3 = FT_Stream_ExtractFrame(param_2,uVar10,param_1 + 0x530);
          if (iVar3 == 0) {
            *(uint *)(param_1 + 0x544) = uVar4;
            iVar3 = *(int *)(param_1 + 0x540);
            goto LAB_0010624f;
          }
        }
LAB_00106175:
        puVar6 = *(uint **)(param_1 + 0x530);
      }
      goto LAB_00105f4b;
    }
    if (uVar4 == 0) {
      *(undefined1 (*) [16])(param_1 + 0x5a8) = (undefined1  [16])0x0;
LAB_0010620b:
      *(undefined4 *)(param_1 + 0x544) = 0;
LAB_00106215:
      iVar3 = 0;
      goto LAB_00105f77;
    }
    iVar3 = FT_Stream_ExtractFrame(param_2,local_50,param_1 + 0x530);
    if (iVar3 != 0) goto LAB_00106175;
    puVar6 = *(uint **)(param_1 + 0x530);
    *(ulong *)(param_1 + 0x538) = local_50;
    uVar4 = *puVar6;
    uVar9 = puVar6[1];
    uVar11 = (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    if (uVar11 == 0x20000) {
      if (uVar9 < 0x10000) goto LAB_0010622c;
      iVar3 = 3;
    }
    else {
      if (((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 & 0xfeff) == 0x200) || (uVar11 == 0x30000)) {
        if (0xffff < uVar9) {
          iVar3 = 3;
          goto LAB_00105f4b;
        }
LAB_0010622c:
        if (local_50 < (ulong)uVar9 * 0x30 + 8) {
          uVar9 = (uint)((local_50 - 8) / 0x30);
        }
        *(uint *)(param_1 + 0x544) = uVar9;
        iVar3 = *(int *)(param_1 + 0x540);
LAB_0010624f:
        *(undefined1 (*) [16])(param_1 + 0x5a8) = (undefined1  [16])0x0;
        if (iVar3 == 3) {
          *(undefined8 *)(param_1 + 0x5a8) = uVar7;
          *(ulong *)(param_1 + 0x5b0) = local_50;
          goto LAB_00106279;
        }
        if (iVar3 != 0) goto LAB_0010619a;
        goto LAB_0010620b;
      }
      iVar3 = 2;
    }
LAB_00105f57:
    FT_Stream_ReleaseFrame(param_2,param_1 + 0x530);
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x340))(param_1,0x45424c43,param_2,&local_50);
    if ((iVar3 != 0) &&
       (iVar3 = (**(code **)(param_1 + 0x340))(param_1,0x626c6f63,param_2,&local_50), iVar3 != 0)) {
      iVar3 = (**(code **)(param_1 + 0x340))(param_1,0x73626978,param_2,&local_50);
      uVar5 = 3;
      if (iVar3 == 0) goto LAB_00105fa5;
      goto LAB_00106175;
    }
    *(undefined4 *)(param_1 + 0x540) = 1;
    if (7 < local_50) goto LAB_00105fb3;
LAB_00105f3e:
    puVar6 = *(uint **)(param_1 + 0x530);
    iVar3 = 3;
LAB_00105f4b:
    if (puVar6 != (uint *)0x0) goto LAB_00105f57;
  }
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
LAB_00105f77:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



void tt_face_load_pclt(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x50434c54,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FT_Stream_ReadFields(param_2,pclt_fields_16,param_1 + 0x3b0);
  return;
}



int tt_face_load_name(long param_1,long param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ushort *puVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  int local_5c;
  int local_4c;
  long local_48;
  long local_40;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(long *)(param_1 + 0x260) = param_2;
  local_4c = (**(code **)(param_1 + 0x340))(param_1,0x6e616d65,param_2,&local_48);
  if (local_4c == 0) {
    lVar4 = FT_Stream_Pos(param_2);
    local_4c = FT_Stream_ReadFields(param_2,name_table_fields_15,param_1 + 0x238);
    if (local_4c == 0) {
      iVar12 = *(int *)(param_1 + 0x23c);
      uVar14 = lVar4 + 6 + (ulong)(uint)(iVar12 * 0xc);
      uVar5 = local_48 + lVar4;
      if (uVar5 < uVar14) {
        local_4c = 0x91;
      }
      else if (*(short *)(param_1 + 0x238) == 1) {
        local_4c = FT_Stream_Seek(param_2,uVar14);
        if (local_4c == 0) {
          uVar2 = FT_Stream_ReadUShort(param_2,&local_4c);
          *(uint *)(param_1 + 0x250) = (uint)uVar2;
          if (local_4c == 0) {
            puVar7 = (ushort *)ft_mem_qrealloc(uVar1,0x18,0,uVar2,0,&local_4c);
            if ((local_4c != 0) ||
               (local_4c = FT_Stream_EnterFrame(param_2,*(int *)(param_1 + 0x250) * 4),
               local_4c != 0)) {
              lVar6 = 0;
              goto LAB_001063d4;
            }
            uVar14 = uVar14 + ((uint)uVar2 * 4 + 2);
            local_4c = 0;
            if ((puVar7 != (ushort *)0x0) &&
               (uVar3 = *(uint *)(param_1 + 0x250), puVar7 < puVar7 + (ulong)uVar3 * 0xc)) {
              local_4c = 0;
              puVar11 = puVar7;
              do {
                local_4c = FT_Stream_ReadFields(param_2,langTag_record_fields_14);
                uVar8 = (ulong)*(uint *)(param_1 + 0x240) + lVar4 + *(long *)(puVar11 + 4);
                *(ulong *)(puVar11 + 4) = uVar8;
                if ((uVar8 < uVar14) || (uVar5 < uVar8 + *puVar11)) {
                  *puVar11 = 0;
                }
                puVar11[8] = 0;
                puVar11[9] = 0;
                puVar11[10] = 0;
                puVar11[0xb] = 0;
                puVar11 = puVar11 + 0xc;
              } while (puVar11 < puVar7 + (ulong)uVar3 * 0xc);
            }
            *(ushort **)(param_1 + 600) = puVar7;
            FT_Stream_ExitFrame(param_2);
            local_4c = FT_Stream_Seek(param_2,lVar4 + 6);
            iVar12 = *(int *)(param_1 + 0x23c);
            goto LAB_00106480;
          }
        }
      }
      else {
LAB_00106480:
        lVar6 = ft_mem_qrealloc(uVar1,0x20,0,iVar12,0,&local_4c);
        if ((local_4c != 0) ||
           (local_4c = FT_Stream_EnterFrame(param_2,*(int *)(param_1 + 0x23c) * 0xc), local_4c != 0)
           ) {
          puVar7 = (ushort *)0x0;
          goto LAB_001063d4;
        }
        iVar12 = *(int *)(param_1 + 0x23c);
        if (iVar12 == 0) {
          local_5c = 0;
          uVar13 = 0;
        }
        else {
          local_5c = 0;
          local_4c = 0;
          lVar10 = lVar6;
          do {
            local_4c = FT_Stream_ReadFields(param_2,name_record_fields_13);
            if ((local_4c == 0) && (*(ushort *)(lVar10 + 8) != 0)) {
              uVar8 = (ulong)*(uint *)(param_1 + 0x240) + lVar4 + *(long *)(lVar10 + 0x10);
              *(ulong *)(lVar10 + 0x10) = uVar8;
              if (((uVar14 <= uVar8) && (*(ushort *)(lVar10 + 8) + uVar8 <= uVar5)) &&
                 (((*(short *)(param_1 + 0x238) != 1 || (-1 < (short)*(ushort *)(lVar10 + 4))) ||
                  ((uVar3 = *(ushort *)(lVar10 + 4) - 0x8000, uVar3 < *(uint *)(param_1 + 0x250) &&
                   (*(short *)(*(long *)(param_1 + 600) + (ulong)uVar3 * 0x18) != 0)))))) {
                local_5c = local_5c + 1;
                *(undefined8 *)(lVar10 + 0x18) = 0;
                lVar10 = lVar10 + 0x20;
              }
            }
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          uVar13 = *(undefined4 *)(param_1 + 0x23c);
        }
        uVar9 = ft_mem_qrealloc(uVar1,0x20,uVar13,local_5c,lVar6,&local_4c);
        *(undefined8 *)(param_1 + 0x248) = uVar9;
        *(int *)(param_1 + 0x23c) = local_5c;
        FT_Stream_ExitFrame(param_2);
        *(short *)(param_1 + 0x230) = (short)*(undefined4 *)(param_1 + 0x23c);
      }
    }
  }
  puVar7 = (ushort *)0x0;
  lVar6 = 0;
LAB_001063d4:
  ft_mem_free(uVar1,lVar6);
  ft_mem_free(uVar1,puVar7);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_4c;
}



int tt_face_load_maxp(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x6d617870,param_2);
  if (iVar1 == 0) {
    iVar2 = FT_Stream_ReadFields(param_2,maxp_fields_7,param_1 + 0x1c8);
    iVar1 = iVar2;
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x1e2) = 0;
      *(undefined2 *)(param_1 + 0x1ea) = 0;
      *(undefined1 (*) [16])(param_1 + 0x1d2) = (undefined1  [16])0x0;
      if ((0xffff < *(long *)(param_1 + 0x1c8)) &&
         (iVar1 = FT_Stream_ReadFields(param_2,maxp_fields_extra_6,param_1 + 0x1c8), iVar1 == 0)) {
        if (*(ushort *)(param_1 + 0x1e0) < 0x40) {
          *(undefined2 *)(param_1 + 0x1e0) = 0x40;
        }
        iVar1 = iVar2;
        if (0xfffb < *(ushort *)(param_1 + 0x1dc)) {
          *(undefined2 *)(param_1 + 0x1dc) = 0xfffb;
        }
      }
    }
  }
  return iVar1;
}



void tt_face_load_hhea(long param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 == '\0') {
    iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x68686561,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    lVar2 = param_1 + 400;
  }
  else {
    lVar2 = param_1 + 0x1f8;
    iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x76686561);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FT_Stream_ReadFields(param_2,metrics_header_fields_5,lVar2);
  if (iVar1 == 0) {
    *(undefined1 (*) [16])(lVar2 + 0x28) = (undefined1  [16])0x0;
  }
  return;
}



int Load_SBit_Png(long param_1,uint param_2,uint param_3,int param_4,ushort *param_5,
                 undefined8 param_6,undefined8 param_7,undefined4 param_8,char param_9,char param_10
                 )

{
  int iVar1;
  __jmp_buf_tag *__env;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  long local_80;
  long local_78;
  long local_70;
  undefined1 local_68 [88];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  iVar1 = 6;
  local_70 = 0;
  if ((int)(param_2 | param_3) < 0) goto LAB_00106a69;
  if (param_9 == '\0') {
    if (*(uint *)(param_1 + 0x9c) < param_5[1] + param_2) goto LAB_00106a69;
    if ((*(uint *)(param_1 + 0x98) < *param_5 + param_3) || (param_4 != 0x20)) {
      iVar1 = 6;
      goto LAB_00106a69;
    }
    if (*(char *)(param_1 + 0xb2) != '\a') goto LAB_00106a69;
  }
  FT_Stream_OpenMemory(local_68,param_7,param_8);
  local_80 = png_create_read_struct("1.6.45",&local_98,error_callback,warning_callback);
  if (local_80 == 0) {
    iVar1 = 0x40;
    goto LAB_00106a69;
  }
  local_78 = png_create_info_struct(local_80);
  if (local_78 == 0) {
    local_98 = 0x40;
    png_destroy_read_struct(&local_80,0,0);
    iVar1 = local_98;
    goto LAB_00106a69;
  }
  __env = (__jmp_buf_tag *)png_set_longjmp_fn(local_80,__longjmp_chk,200);
  iVar1 = _setjmp(__env);
  if (iVar1 == 0) {
    png_set_read_fn(local_80,local_68,read_data_from_FT_Stream);
    png_read_info(local_80,local_78);
    png_get_IHDR(local_80,local_78,&local_94,&local_90,&local_8c,&local_88,&local_84,0,0);
    if (local_98 == 0) {
      if (param_9 == '\0') {
        if ((param_5[1] == local_94) && (*param_5 == local_90)) goto LAB_00106b61;
      }
      else if ((local_90 < 0x8000) && (local_94 < 0x8000)) {
        *param_5 = (ushort)local_90;
        param_5[1] = (ushort)local_94;
        *(undefined1 *)(param_1 + 0xb2) = 7;
        *(uint *)(param_1 + 0xa0) = local_94 << 2;
        *(undefined2 *)(param_1 + 0xb0) = 0x100;
        *(ulong *)(param_1 + 0x98) = CONCAT44(local_94,local_90);
LAB_00106b61:
        if (local_88 == 3) {
          png_set_palette_to_rgb(local_80);
        }
        if (local_88 == 0) {
          png_set_expand_gray_1_2_4_to_8(local_80);
        }
        iVar1 = png_get_valid(local_80,local_78,0x10);
        if (iVar1 != 0) {
          png_set_tRNS_to_alpha(local_80);
        }
        if (local_8c == 0x10) {
          png_set_strip_16(local_80);
        }
        if (local_8c < 8) {
          png_set_packing(local_80);
        }
        if ((local_88 & 0xfffffffb) == 0) {
          png_set_gray_to_rgb(local_80);
        }
        if (local_84 != 0) {
          png_set_interlace_handling(local_80);
        }
        png_set_filler(local_80,0xff,1);
        png_read_update_info(local_80,local_78);
        png_get_IHDR(local_80,local_78,&local_94,&local_90,&local_8c,&local_88,&local_84,0,0);
        if ((local_8c != 8) || ((local_88 & 0xfffffffb) != 2)) goto LAB_00106a2a;
        if (param_10 == '\0') {
          if (local_88 == 2) {
            png_set_read_user_transform_fn(local_80,0x100000);
          }
          else {
            png_set_read_user_transform_fn(local_80,premultiply_data);
          }
          if ((param_9 == '\0') ||
             (local_98 = ft_glyphslot_alloc_bitmap
                                   (param_1,(ulong)*(uint *)(param_1 + 0x98) *
                                            (long)*(int *)(param_1 + 0xa0)), local_98 == 0)) {
            local_70 = ft_mem_qrealloc(param_6,8,0,local_90,0,&local_98);
            if (local_98 == 0) {
              if (0 < (int)local_90) {
                lVar3 = 0;
                iVar1 = *(int *)(param_1 + 0xa0);
                lVar2 = (long)(int)(param_2 << 2) + (long)(int)(iVar1 * param_3);
                do {
                  lVar4 = *(long *)(param_1 + 0xa8) + lVar2;
                  lVar2 = lVar2 + iVar1;
                  *(long *)(local_70 + lVar3) = lVar4;
                  lVar3 = lVar3 + 8;
                } while (lVar3 != (ulong)local_90 * 8);
              }
              png_read_image(local_80,local_70);
              png_read_end(local_80,local_78);
            }
            else {
              local_98 = 0x40;
            }
          }
        }
      }
      else {
        local_98 = 10;
      }
    }
  }
  else {
LAB_00106a2a:
    local_98 = 3;
  }
  ft_mem_free(param_6,local_70);
  local_70 = 0;
  png_destroy_read_struct(&local_80,&local_78,0);
  FT_Stream_Close(local_68);
  iVar1 = local_98;
LAB_00106a69:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8
tt_sbit_decoder_load_png
          (long *param_1,uint *param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (3 < param_3 - (long)param_2) {
    uVar2 = *param_2;
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    if ((ulong)uVar2 <= (ulong)(param_3 - (long)(param_2 + 1))) {
      uVar1 = Load_SBit_Png(*(undefined8 *)(*param_1 + 0x98),param_4,param_5,
                            *(undefined1 *)((long)param_1 + 0x22),param_1[3],
                            *(undefined8 *)(param_1[1] + 0x38),param_2 + 1,uVar2,0,0);
      return uVar1;
    }
  }
  return 3;
}



void error_callback(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)png_get_error_ptr();
  *puVar1 = 0x40;
  uVar2 = png_set_longjmp_fn(param_1,__longjmp_chk,200);
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(uVar2,1);
}



int ReadBase128(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  iVar4 = 0;
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  do {
    uVar1 = FT_Stream_ReadByte(param_1,&local_34);
    iVar2 = local_34;
    if (local_34 != 0) goto LAB_00106f58;
    if (((iVar4 == 0) && ((char)uVar1 == -0x80)) || ((uVar3 & 0xfe000000) != 0)) break;
    uVar3 = uVar3 << 7 | (ulong)(uVar1 & 0x7f);
    if (-1 < (char)uVar1) {
      *param_2 = uVar3;
      goto LAB_00106f58;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 5);
  iVar2 = 8;
LAB_00106f58:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int Read255UShort(undefined8 param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  bVar1 = FT_Stream_ReadByte(param_1,&local_24);
  if (local_24 != 0) goto LAB_00106fde;
  if (bVar1 == 0xfd) {
    uVar2 = FT_Stream_ReadUShort(param_1,&local_24);
    if (local_24 != 0) goto LAB_00106fde;
  }
  else {
    if (bVar1 == 0xff) {
      bVar1 = FT_Stream_ReadByte(param_1,&local_24);
      if (local_24 == 0) {
        *param_2 = bVar1 + 0xfd;
      }
      goto LAB_00106fde;
    }
    if (bVar1 == 0xfe) {
      bVar1 = FT_Stream_ReadByte(param_1,&local_24);
      if (local_24 == 0) {
        *param_2 = bVar1 + 0x1fa;
      }
      goto LAB_00106fde;
    }
    uVar2 = (ushort)bVar1;
  }
  *param_2 = uVar2;
LAB_00106fde:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_24;
}



undefined8 tt_cmap0_validate(long param_1,long param_2)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (*(ulong *)(param_2 + 0xd0) < param_1 + 4U) {
    ft_validator_error(param_2,8);
  }
  uVar1 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  if ((*(ulong *)(param_2 + 0xd0) < (ulong)uVar1 + param_1) || (uVar1 < 0x106)) {
    ft_validator_error(param_2,8);
  }
  if (*(int *)(param_2 + 0xd8) != 0) {
    pbVar3 = (byte *)(param_1 + 6);
    do {
      while (pbVar2 = pbVar3 + 1, *(uint *)(param_2 + 0xe0) <= (uint)*pbVar3) {
        ft_validator_error(param_2,0x10);
        pbVar3 = pbVar2;
        if (pbVar2 == (byte *)(param_1 + 0x106)) {
          return 0;
        }
      }
      pbVar3 = pbVar2;
    } while (pbVar2 != (byte *)(param_1 + 0x106));
  }
  return 0;
}



undefined8 tt_cmap2_validate(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  
  if (*(ulong *)(param_2 + 0xd0) < param_1 + 4U) {
    ft_validator_error(param_2,8);
  }
  uVar7 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  puVar1 = (undefined1 *)(param_1 + (ulong)uVar7);
  if ((*(undefined1 **)(param_2 + 0xd0) < puVar1) || (uVar7 < 0x206)) {
    ft_validator_error(param_2,8);
  }
  puVar10 = (ushort *)(param_1 + 6);
  uVar12 = 0;
  puVar13 = (ushort *)(param_1 + 0x206);
  do {
    uVar7 = *puVar10;
    bVar4 = *(byte *)((long)puVar10 + 1);
    puVar10 = puVar10 + 1;
    if ((1 < *(uint *)(param_2 + 0xd8)) && ((bVar4 & 7) != 0)) {
      ft_validator_error(param_2,8);
    }
    uVar8 = (uint)(ushort)(CONCAT11((char)uVar7,bVar4) >> 3);
    if (uVar12 < uVar8) {
      uVar12 = uVar8;
    }
  } while (puVar10 != puVar13);
  puVar2 = (undefined1 *)((long)puVar13 + (ulong)(uVar12 * 8 + 8));
  if (*(undefined1 **)(param_2 + 0xd0) < puVar2) {
    ft_validator_error(param_2,8);
  }
  uVar8 = 0;
  do {
    puVar10 = puVar13 + 4;
    uVar7 = puVar13[1] << 8 | puVar13[1] >> 8;
    if (uVar7 != 0) {
      uVar5 = puVar13[2];
      uVar6 = puVar13[3];
      if ((1 < *(uint *)(param_2 + 0xd8)) &&
         ((uVar11 = *puVar13 << 8 | *puVar13 >> 8, 0xff < uVar11 || (0x100 - uVar11 < (uint)uVar7)))
         ) {
        ft_validator_error(param_2,8);
      }
      if (uVar6 != 0) {
        puVar3 = (undefined1 *)((long)puVar13 + (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8) + 6);
        if ((puVar3 < puVar2) || (puVar1 < puVar3 + ((uint)uVar7 + (uint)uVar7))) {
          ft_validator_error(param_2,9);
        }
        if ((*(int *)(param_2 + 0xd8) != 0) &&
           (puVar9 = (ushort *)((ulong)((uint)uVar7 + (uint)uVar7) + (long)puVar10),
           puVar10 < puVar9)) {
          do {
            while( true ) {
              uVar7 = *puVar10;
              puVar3 = (undefined1 *)((long)puVar10 + 1);
              puVar10 = puVar10 + 1;
              uVar7 = CONCAT11((char)uVar7,*puVar3);
              if ((uVar7 == 0) ||
                 (((uint)uVar7 + (int)(short)(uVar5 << 8 | uVar5 >> 8) & 0xffff) <
                  *(uint *)(param_2 + 0xe0))) break;
              ft_validator_error(param_2,0x10);
              if (puVar9 <= puVar10) goto LAB_0010733c;
            }
          } while (puVar10 < puVar9);
LAB_0010733c:
          puVar10 = (ushort *)
                    ((long)puVar13 +
                    ((ulong)((long)puVar9 + (-9 - (long)puVar13)) & 0xfffffffffffffffe) + 10);
        }
      }
    }
    uVar8 = uVar8 + 1;
    puVar13 = puVar10;
    if (uVar12 < uVar8) {
      return 0;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x001077cb) */

uint tt_cmap4_validate(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  ushort uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint local_68;
  uint local_44;
  uint local_40;
  
  if (*(ulong *)(param_2 + 0xd0) < param_1 + 4U) {
    ft_validator_error(param_2,8);
  }
  uVar11 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  iVar17 = (int)param_1;
  if (*(ulong *)(param_2 + 0xd0) < (ulong)uVar11 + param_1) {
    if (*(int *)(param_2 + 0xd8) == 0) {
      local_68 = (int)*(undefined8 *)(param_2 + 0xd0) - iVar17;
    }
    else {
      ft_validator_error(param_2,8);
      local_68 = (int)*(undefined8 *)(param_2 + 0xd0) - iVar17;
    }
  }
  else {
    local_68 = (uint)uVar11;
  }
  if (local_68 < (uint)((int)*(undefined8 *)(param_2 + 0xd0) - iVar17)) {
    if (1 < *(uint *)(param_2 + 0xd8)) {
      ft_validator_error(param_2,8);
    }
    local_68 = (int)*(undefined8 *)(param_2 + 0xd0) - iVar17;
  }
  if (local_68 < 0x10) {
    ft_validator_error(param_2,8);
    uVar11 = *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8;
    uVar14 = (uint)uVar11;
    if (1 < *(uint *)(param_2 + 0xd8)) goto LAB_00107423;
    local_40 = (uint)(uVar11 >> 1);
  }
  else {
    uVar11 = *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8;
    uVar14 = (uint)uVar11;
    if (1 < *(uint *)(param_2 + 0xd8)) {
LAB_00107423:
      if ((uVar11 & 1) != 0) {
        ft_validator_error(param_2,8);
      }
    }
    local_40 = uVar14 >> 1;
    if (local_40 * 8 + 0x10 <= local_68) goto LAB_00107444;
  }
  ft_validator_error(param_2,8);
LAB_00107444:
  if (1 < *(uint *)(param_2 + 0xd8)) {
    uVar9 = *(undefined2 *)(param_1 + 10);
    uVar11 = *(ushort *)(param_1 + 8) << 8 | *(ushort *)(param_1 + 8) >> 8;
    uVar16 = *(ushort *)(param_1 + 0xc) << 8 | *(ushort *)(param_1 + 0xc) >> 8;
    if (((uVar11 | uVar16) & 1) != 0) {
      ft_validator_error(param_2,8);
    }
    uVar19 = (uint)(uVar11 >> 1);
    if ((((local_40 < uVar19) || ((uVar11 & 0xfffffffe) < local_40)) ||
        ((uVar16 >> 1) + uVar19 != local_40)) ||
       (1 << ((byte)((ushort)uVar9 >> 8) & 0x1f) != uVar19)) {
      ft_validator_error(param_2,8);
    }
  }
  uVar13 = (ulong)(uVar14 & 0xfffe);
  lVar3 = param_1 + 0x10 + uVar13;
  lVar12 = lVar3 + uVar13;
  puVar2 = (undefined1 *)(lVar12 + uVar13) + uVar13;
  if ((1 < *(uint *)(param_2 + 0xd8)) &&
     (*(short *)(param_1 + 0xe + (ulong)(local_40 * 2 - 2)) != -1)) {
    ft_validator_error(param_2,8);
  }
  if (local_40 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = 0;
    uVar18 = 0;
    puVar21 = (undefined1 *)(lVar12 + uVar13);
    uVar14 = 0;
    uVar19 = 0;
    do {
      while( true ) {
        uVar5 = *(undefined1 *)(param_1 + 0xe + uVar18 * 2);
        uVar6 = *(undefined1 *)(lVar3 + uVar18 * 2);
        uVar7 = *(undefined1 *)(lVar3 + 1 + uVar18 * 2);
        uVar11 = CONCAT11(uVar6,uVar7);
        uVar8 = *(undefined1 *)(param_1 + 0xf + uVar18 * 2);
        uVar22 = (uint)CONCAT11(uVar6,uVar7);
        uVar16 = CONCAT11(uVar5,uVar8);
        uVar20 = (uint)CONCAT11(uVar5,uVar8);
        uVar5 = *(undefined1 *)(lVar12 + uVar18 * 2);
        uVar6 = *(undefined1 *)(lVar12 + 1 + uVar18 * 2);
        uVar10 = CONCAT11(*puVar21,puVar21[1]);
        if (uVar20 < uVar22) {
          ft_validator_error(param_2,8);
        }
        iVar17 = (int)uVar18;
        if ((uVar22 <= uVar19) && (iVar17 != 0)) {
          if (*(int *)(param_2 + 0xd8) == 0) {
            if ((uVar22 < uVar14) || (uVar20 < uVar19)) {
              local_44 = local_44 | 1;
            }
            else {
              local_44 = local_44 | 2;
            }
          }
          else {
            ft_validator_error(param_2,8);
          }
        }
        uVar14 = uVar22;
        uVar19 = uVar20;
        if (uVar10 != 0) break;
LAB_001075d8:
        uVar18 = uVar18 + 1;
        puVar21 = puVar21 + 2;
        if (uVar18 == local_40) {
          return local_44;
        }
      }
      if (uVar10 == 0xffff) {
        if (((1 < *(uint *)(param_2 + 0xd8)) || (local_40 - 1 != iVar17)) ||
           ((uVar11 & uVar16) != 0xffff)) {
          ft_validator_error(param_2,8);
        }
        goto LAB_001075d8;
      }
      puVar15 = puVar21 + uVar10;
      if (*(int *)(param_2 + 0xd8) == 0) {
        if ((local_40 - 1 != iVar17) || ((uVar16 & uVar11) != 0xffff)) {
          if ((puVar15 < puVar2) ||
             (*(undefined1 **)(param_2 + 0xd0) < puVar15 + ((uVar20 - uVar22) * 2 + 2)))
          goto LAB_001075a2;
          if (*(int *)(param_2 + 0xd8) != 0) goto LAB_001076f8;
        }
        goto LAB_001075d8;
      }
      if ((puVar15 < puVar2) ||
         ((undefined1 *)((ulong)local_68 + param_1) < puVar15 + ((uVar20 - uVar22) * 2 + 2))) {
LAB_001075a2:
        ft_validator_error(param_2,8);
      }
      if (*(int *)(param_2 + 0xd8) == 0) goto LAB_001075d8;
LAB_001076f8:
      if (uVar20 <= uVar22) goto LAB_001075d8;
      puVar4 = puVar15 + (ulong)((uVar20 - 1) - uVar22) * 2 + 2;
      do {
        while( true ) {
          uVar7 = *puVar15;
          puVar1 = puVar15 + 1;
          puVar15 = puVar15 + 2;
          if ((CONCAT11(uVar7,*puVar1) == 0) ||
             (((uint)CONCAT11(uVar7,*puVar1) + (int)CONCAT11(uVar5,uVar6) & 0xffff) <
              *(uint *)(param_2 + 0xe0))) break;
          ft_validator_error(param_2,0x10);
          if (puVar15 == puVar4) goto LAB_00107780;
        }
      } while (puVar15 != puVar4);
LAB_00107780:
      uVar18 = uVar18 + 1;
      puVar21 = puVar21 + 2;
    } while (uVar18 != local_40);
  }
  return local_44;
}



undefined8 tt_cmap6_validate(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  
  puVar5 = (undefined1 *)(param_1 + 10);
  if (*(undefined1 **)(param_2 + 0xd0) < puVar5) {
    ft_validator_error(param_2,8);
  }
  uVar4 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  uVar6 = *(ushort *)(param_1 + 8) << 8 | *(ushort *)(param_1 + 8) >> 8;
  if ((*(ulong *)(param_2 + 0xd0) < (ulong)uVar4 + param_1) ||
     ((uint)uVar4 < uVar6 + 10 + (uint)uVar6)) {
    ft_validator_error(param_2,8);
  }
  if ((*(int *)(param_2 + 0xd8) != 0) && (uVar6 != 0)) {
    puVar2 = (undefined1 *)(param_1 + (ulong)(uVar6 + 5) * 2);
    do {
      while (uVar3 = *puVar5, puVar1 = puVar5 + 1, puVar5 = puVar5 + 2,
            *(uint *)(param_2 + 0xe0) <= (uint)CONCAT11(uVar3,*puVar1)) {
        ft_validator_error(param_2,0x10);
        if (puVar2 == puVar5) {
          return 0;
        }
      }
    } while (puVar2 != puVar5);
  }
  return 0;
}



undefined8 tt_cmap8_validate(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  uint local_48;
  
  puVar6 = (uint *)(param_1 + 0x2010);
  if (*(uint **)(param_2 + 0xd0) < puVar6) {
    ft_validator_error(param_2,8);
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (((uint)((int)*(undefined8 *)(param_2 + 0xd0) - (int)param_1) < uVar2) || (uVar2 < 0x2010)) {
    ft_validator_error(param_2,8);
  }
  uVar2 = *(uint *)(param_1 + 0x200c);
  param_1 = param_1 + 0xc;
  uVar5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if ((uint)((int)*(undefined8 *)(param_2 + 0xd0) - (int)puVar6) / 0xc < uVar5) {
    ft_validator_error(param_2,8);
  }
  else if (uVar2 == 0) {
    return 0;
  }
  local_48 = 0;
  uVar2 = 0;
  do {
    uVar4 = *puVar6;
    uVar3 = puVar6[1];
    uVar1 = puVar6[2];
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if (uVar3 < uVar4) {
      ft_validator_error(param_2,8);
    }
    if ((local_48 != 0) && (uVar4 <= uVar2)) {
      ft_validator_error(param_2,8);
    }
    if (*(int *)(param_2 + 0xd8) != 0) {
      uVar2 = uVar3 - uVar4;
      if ((*(uint *)(param_2 + 0xe0) < uVar2) ||
         ((*(uint *)(param_2 + 0xe0) + uVar4) - uVar3 <=
          (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18))) {
        ft_validator_error(param_2,0x10);
      }
      if (uVar4 < 0x10000) {
        if (0xffff < uVar3) {
          ft_validator_error(param_2,8);
        }
        if (uVar2 != 0xffffffff) {
          do {
            if (((uint)*(byte *)(param_1 + (ulong)(uVar4 >> 3 & 0x1fff)) & 0x80 >> ((byte)uVar4 & 7)
                ) != 0) {
              ft_validator_error(param_2,8);
            }
            bVar7 = uVar3 != uVar4;
            uVar4 = uVar4 + 1;
          } while (bVar7);
        }
      }
      else if (uVar2 != 0xffffffff) {
        do {
          if (((uint)*(byte *)(param_1 + (ulong)(uVar4 >> 0x13)) &
              0x80 >> ((byte)(uVar4 >> 0x10) & 7)) == 0) {
            ft_validator_error(param_2,8);
          }
          if (((uint)*(byte *)(param_1 + (ulong)(uVar4 >> 3 & 0x1fff)) & 0x80 >> ((byte)uVar4 & 7))
              == 0) {
            ft_validator_error(param_2,8);
          }
          bVar7 = uVar3 != uVar4;
          uVar4 = uVar4 + 1;
        } while (bVar7);
      }
    }
    local_48 = local_48 + 1;
    puVar6 = puVar6 + 3;
    uVar2 = uVar3;
  } while (local_48 < uVar5);
  return 0;
}



undefined8 tt_cmap10_validate(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  puVar6 = (undefined1 *)(param_1 + 0x14);
  if (*(undefined1 **)(param_2 + 0xd0) < puVar6) {
    ft_validator_error(param_2,8);
  }
  uVar3 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar5 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  uVar7 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
  if (((ulong)(*(long *)(param_2 + 0xd0) - param_1) < uVar5) || (uVar5 < 0x14)) {
    ft_validator_error(param_2,8);
  }
  else if (uVar5 - 0x14 >> 1 < uVar7) {
    ft_validator_error(param_2,8);
    if (*(int *)(param_2 + 0xd8) == 0) {
      return 0;
    }
    goto LAB_00107e76;
  }
  if (*(int *)(param_2 + 0xd8) == 0) {
    return 0;
  }
  if (uVar7 == 0) {
    return 0;
  }
LAB_00107e76:
  do {
    uVar2 = *puVar6;
    puVar1 = puVar6 + 1;
    puVar6 = puVar6 + 2;
    if (*(uint *)(param_2 + 0xe0) <= (uint)CONCAT11(uVar2,*puVar1)) {
      ft_validator_error(param_2,0x10);
    }
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  return 0;
}



undefined8 tt_cmap12_validate(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  if (*(uint **)(param_2 + 0xd0) < (uint *)(param_1 + 0x10U)) {
    ft_validator_error(param_2,8);
  }
  uVar8 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 0xc);
  uVar7 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18);
  uVar5 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
  if (((ulong)(*(long *)(param_2 + 0xd0) - param_1) < uVar7) || (uVar7 < 0x10)) {
    ft_validator_error(param_2,8);
  }
  else if ((uVar7 - 0x10) / 0xc < uVar5) {
    ft_validator_error(param_2,8);
    goto LAB_00107f58;
  }
  if (uVar5 == 0) {
    return 0;
  }
LAB_00107f58:
  uVar7 = 0;
  puVar3 = (uint *)(param_1 + 0x10U);
  uVar8 = 0;
  do {
    uVar4 = *puVar3;
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (uVar4 < uVar6) {
      ft_validator_error(param_2,8);
    }
    if ((uVar7 != 0) && (uVar6 <= uVar8)) {
      ft_validator_error(param_2,8);
    }
    if ((*(int *)(param_2 + 0xd8) != 0) &&
       ((*(uint *)(param_2 + 0xe0) < uVar4 - uVar6 ||
        ((*(uint *)(param_2 + 0xe0) + uVar6) - uVar4 <=
         (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18))))) {
      ft_validator_error(param_2,0x10);
    }
    uVar7 = uVar7 + 1;
    puVar3 = puVar3 + 3;
    uVar8 = uVar4;
  } while (uVar7 < uVar5);
  return 0;
}



undefined8 tt_cmap13_validate(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  if (*(uint **)(param_2 + 0xd0) < (uint *)(param_1 + 0x10U)) {
    ft_validator_error(param_2,8);
  }
  uVar7 = *(uint *)(param_1 + 4);
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar5 = (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
  uVar6 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  if (((ulong)(*(long *)(param_2 + 0xd0) - param_1) < uVar5) || (uVar5 < 0x10)) {
    ft_validator_error(param_2,8);
  }
  else if ((uVar5 - 0x10) / 0xc < uVar6) {
    ft_validator_error(param_2,8);
    goto LAB_001080d6;
  }
  if (uVar6 == 0) {
    return 0;
  }
LAB_001080d6:
  uVar5 = 0;
  puVar4 = (uint *)(param_1 + 0x10U);
  uVar7 = 0;
  do {
    while( true ) {
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = puVar4[2];
      if (uVar2 < uVar3) {
        ft_validator_error(param_2,8);
      }
      if ((uVar5 != 0) && (uVar3 <= uVar7)) {
        ft_validator_error(param_2,8);
      }
      uVar7 = uVar2;
      if ((*(int *)(param_2 + 0xd8) == 0) ||
         ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) <
          *(uint *)(param_2 + 0xe0))) break;
      uVar5 = uVar5 + 1;
      ft_validator_error(param_2,0x10);
      puVar4 = puVar4 + 3;
      if (uVar6 <= uVar5) {
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 3;
  } while (uVar5 < uVar6);
  return 0;
}



undefined8 tt_cmap14_validate(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong local_78;
  
  if (*(byte **)(param_2 + 0xd0) < (byte *)(param_1 + 10U)) {
    ft_validator_error(param_2,8);
  }
  uVar5 = *(uint *)(param_1 + 6);
  uVar2 = *(uint *)(param_1 + 2);
  uVar7 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18);
  uVar8 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  if (((ulong)(*(long *)(param_2 + 0xd0) - param_1) < uVar8) || (uVar8 < 10)) {
    ft_validator_error(param_2,8);
  }
  else if ((uVar8 - 10) / 0xb < uVar7) {
    ft_validator_error(param_2,8);
    goto LAB_00108273;
  }
  if (uVar7 == 0) {
    return 0;
  }
LAB_00108273:
  uVar5 = 1;
  local_78 = 0;
  pbVar11 = (byte *)(param_1 + 10U);
  do {
    uVar4 = (uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8 | (uint)pbVar11[2];
    uVar2 = *(uint *)(pbVar11 + 3);
    uVar9 = *(uint *)(pbVar11 + 7);
    uVar12 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                    );
    uVar10 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
                    );
    uVar6 = uVar10;
    if (uVar10 <= uVar12) {
      uVar6 = uVar12;
    }
    if (uVar8 <= uVar6) {
      ft_validator_error(param_2,8);
    }
    if (uVar4 < uVar5) {
      ft_validator_error(param_2,8);
    }
    if (uVar12 != 0) {
      puVar3 = (uint *)(param_1 + uVar12);
      if (*(uint **)(param_2 + 0xd0) < puVar3 + 1) {
        ft_validator_error(param_2,8);
      }
      uVar5 = *puVar3;
      uVar6 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18);
      if ((ulong)(*(long *)(param_2 + 0xd0) - (long)(puVar3 + 1)) >> 2 < uVar6) {
        ft_validator_error(param_2,8);
      }
      else if (uVar6 == 0) goto joined_r0x001082a9;
      uVar12 = 0;
      uVar5 = 0;
      do {
        while( true ) {
          uVar9 = (uint)(byte)puVar3[uVar12 + 1] << 0x10 |
                  (uint)*(byte *)((long)puVar3 + uVar12 * 4 + 5) << 8 |
                  (uint)*(byte *)((long)puVar3 + uVar12 * 4 + 6);
          uVar2 = *(byte *)((long)puVar3 + uVar12 * 4 + 7) + uVar9;
          if (uVar2 < 0x110000) break;
          ft_validator_error(param_2,8);
          if (uVar5 <= uVar9) goto LAB_001083b5;
LAB_00108408:
          uVar12 = uVar12 + 1;
          uVar5 = uVar2 + 1;
          ft_validator_error(param_2,8);
          if (uVar6 <= uVar12) goto joined_r0x001082a9;
        }
        if (uVar9 < uVar5) goto LAB_00108408;
LAB_001083b5:
        uVar12 = uVar12 + 1;
        uVar5 = uVar2 + 1;
      } while (uVar12 < uVar6);
    }
joined_r0x001082a9:
    if (uVar10 != 0) {
      puVar3 = (uint *)(param_1 + uVar10) + 1;
      if (*(uint **)(param_2 + 0xd0) < puVar3) {
        ft_validator_error(param_2,8);
      }
      uVar5 = *(uint *)(param_1 + uVar10);
      uVar6 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18);
      if ((ulong)(*(long *)(param_2 + 0xd0) - (long)puVar3) / 5 < uVar6) {
        ft_validator_error(param_2,8);
      }
      else if (uVar6 == 0) goto LAB_001082af;
      uVar5 = 0;
      uVar10 = 0;
      do {
        while( true ) {
          uVar1 = *(ushort *)((long)puVar3 + 3);
          uVar2 = (uint)(byte)*puVar3 << 0x10 | (uint)*(byte *)((long)puVar3 + 1) << 8 |
                  (uint)*(byte *)((long)puVar3 + 2);
          if (0x10ffff < uVar2) {
            ft_validator_error(param_2,8);
          }
          if (uVar2 < uVar5) {
            ft_validator_error(param_2,8);
          }
          uVar5 = uVar2 + 1;
          if ((*(int *)(param_2 + 0xd8) == 0) ||
             ((uint)(ushort)(uVar1 << 8 | uVar1 >> 8) < *(uint *)(param_2 + 0xe0))) break;
          uVar10 = uVar10 + 1;
          ft_validator_error(param_2,0x10);
          puVar3 = (uint *)((long)puVar3 + 5U);
          if (uVar6 <= uVar10) goto LAB_001082af;
        }
        uVar10 = uVar10 + 1;
        puVar3 = (uint *)((long)puVar3 + 5U);
      } while (uVar10 < uVar6);
    }
LAB_001082af:
    uVar5 = uVar4 + 1;
    local_78 = local_78 + 1;
    pbVar11 = pbVar11 + 0xb;
    if (uVar7 <= local_78) {
      return 0;
    }
  } while( true );
}



ulong tt_cmap12_char_next(long param_1,uint *param_2)

{
  ulong uVar1;
  
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(ulong *)(param_1 + 0x30) == (ulong)*param_2)) {
    tt_cmap12_next();
    uVar1 = 0;
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar1 = (ulong)*(uint *)(param_1 + 0x38);
      *param_2 = (uint)*(undefined8 *)(param_1 + 0x30);
    }
    return uVar1;
  }
  uVar1 = tt_cmap12_char_map_binary(param_1,param_2,1);
  return uVar1;
}



ulong tt_cmap13_char_next(long param_1,uint *param_2)

{
  ulong uVar1;
  
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(ulong *)(param_1 + 0x30) == (ulong)*param_2)) {
    tt_cmap13_next();
    uVar1 = 0;
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar1 = (ulong)*(uint *)(param_1 + 0x38);
      *param_2 = (uint)*(undefined8 *)(param_1 + 0x30);
    }
    return uVar1;
  }
  uVar1 = tt_cmap13_char_map_binary(param_1,param_2,1);
  return uVar1;
}



void tt_face_load_cmap(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x636d6170,param_2,param_1 + 0x338);
  if (iVar1 == 0) {
    iVar1 = FT_Stream_ExtractFrame(param_2,*(undefined8 *)(param_1 + 0x338),param_1 + 0x330);
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 0x338) = 0;
      return;
    }
  }
  return;
}



undefined8 tt_face_get_ps_name_part_0(long param_1,ulong param_2,undefined8 *param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  ulong local_48;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x378);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
    uVar7 = 7;
    goto LAB_001087d5;
  }
  uVar7 = (**(code **)(lVar2 + 0x20))(0);
  lVar8 = *(long *)(param_1 + 0x2f0);
  *param_3 = uVar7;
  if (lVar8 == 0x10000) {
    if (0x101 < (uint)param_2) goto LAB_001087d3;
    param_2 = param_2 & 0xffffffff;
LAB_0010884c:
    uVar7 = (**(code **)(lVar2 + 0x20))(param_2);
    *param_3 = uVar7;
  }
  else if ((lVar8 == 0x20000) || (lVar8 == 0x25000)) {
    if (*(char *)(param_1 + 0x400) == '\0') {
      lVar3 = *(long *)(param_1 + 0xc0);
      local_50 = 0;
      local_50 = (**(code **)(param_1 + 0x340))(param_1,0x706f7374,lVar3,&local_48);
      if (local_50 != 0) goto LAB_001089e0;
      if (local_48 < 0x22) {
LAB_00108899:
        *(undefined1 *)(param_1 + 0x400) = 1;
        goto LAB_00108809;
      }
      local_50 = FT_Stream_Skip(lVar3,0x20);
      if (local_50 == 0) {
        uVar6 = FT_Stream_ReadUShort(lVar3,&local_50);
        if (local_50 == 0) {
          uVar1 = (ushort)uVar6;
          if (*(ushort *)(param_1 + 0x1d0) <= (ushort)(uVar1 - 1)) goto LAB_00108899;
          uVar11 = (ulong)uVar6 & 0xffff;
          uVar15 = local_48 - 0x22;
          uVar7 = *(undefined8 *)(lVar3 + 0x38);
          if (lVar8 == 0x20000) {
            if (uVar15 < uVar11 * 2) goto LAB_001089ec;
            lVar8 = ft_mem_qrealloc(uVar7,2,0,uVar11,0,&local_4c);
            if (local_4c == 0) {
              local_4c = FT_Stream_EnterFrame(lVar3,uVar6 * 2 & 0x1fffe);
              if (local_4c != 0) goto LAB_00108b1c;
              lVar10 = *(long *)(lVar3 + 0x40);
              uVar13 = 0;
              uVar5 = 0;
              do {
                uVar4 = CONCAT11(*(undefined1 *)(lVar10 + uVar13),
                                 *(undefined1 *)(lVar10 + 1 + uVar13));
                *(ushort *)(lVar8 + uVar13) = uVar4;
                if (uVar5 < uVar4) {
                  uVar5 = uVar4;
                }
                uVar13 = uVar13 + 2;
              } while (uVar13 != uVar11 * 2);
              FT_Stream_ExitFrame(lVar3);
              if (uVar5 < 0x101) {
                uVar5 = 0x101;
              }
              lVar10 = 0;
              uVar5 = uVar5 - 0x101;
              if (uVar5 == 0) {
LAB_00108af0:
                *(ushort *)(param_1 + 0x402) = uVar1;
                *(ushort *)(param_1 + 0x404) = uVar5;
                *(long *)(param_1 + 0x408) = lVar8;
                *(long *)(param_1 + 0x410) = lVar10;
                goto LAB_00108899;
              }
              uVar15 = uVar15 - uVar13;
              lVar10 = ft_mem_qalloc(uVar7,uVar15 + 1 + (ulong)uVar5 * 8,&local_4c);
              if (local_4c == 0) {
                lVar9 = (ulong)uVar5 * 8 + lVar10;
                local_4c = FT_Stream_Read(lVar3,lVar9,uVar15);
                if (local_4c == 0) {
                  uVar11 = 0;
                  uVar13 = 0;
                  while( true ) {
                    uVar14 = uVar11 & 0xffffffff;
                    if ((uVar15 <= uVar13) || (uVar5 <= (ushort)uVar11)) break;
                    uVar6 = (uint)*(byte *)(lVar9 + uVar13);
                    if (0x3f < uVar6) {
                      local_4c = 3;
                      goto LAB_00108b1f;
                    }
                    *(byte *)(lVar9 + uVar13) = 0;
                    *(ulong *)(lVar10 + uVar11 * 8) = lVar9 + 1 + uVar13;
                    uVar13 = uVar13 + (uVar6 + 1);
                    uVar11 = uVar11 + 1;
                  }
                  *(undefined1 *)(lVar9 + uVar15) = 0;
                  if ((ushort)uVar14 < uVar5) {
                    puVar12 = (undefined8 *)(lVar10 + (uVar11 & 0xffff) * 8);
                    do {
                      uVar6 = (int)uVar14 + 1;
                      uVar14 = (ulong)uVar6;
                      *puVar12 = (undefined1 *)(lVar9 + uVar15);
                      puVar12 = puVar12 + 1;
                    } while ((ushort)uVar6 < uVar5);
                  }
                  goto LAB_00108af0;
                }
              }
            }
            else {
LAB_00108b1c:
              lVar10 = 0;
            }
LAB_00108b1f:
            ft_mem_free(uVar7,lVar10);
            ft_mem_free(uVar7,lVar8);
          }
          else if ((uVar1 < 0x183) && (uVar11 <= uVar15)) {
            lVar8 = ft_mem_qrealloc(uVar7,2,0,uVar11,0,&local_4c);
            if ((local_4c == 0) && (local_4c = FT_Stream_EnterFrame(lVar3,uVar11), local_4c == 0)) {
              lVar10 = *(long *)(lVar3 + 0x40);
              lVar9 = 0;
              do {
                uVar6 = (int)*(char *)(lVar10 + lVar9) + (int)lVar9;
                if (0x101 < uVar6) {
                  uVar6 = 0;
                }
                *(short *)(lVar8 + lVar9 * 2) = (short)uVar6;
                lVar9 = lVar9 + 1;
              } while ((ushort)lVar9 < uVar1);
              FT_Stream_ExitFrame(lVar3);
              *(long *)(param_1 + 0x408) = lVar8;
              *(undefined1 *)(param_1 + 0x400) = 1;
              *(ushort *)(param_1 + 0x402) = uVar1;
              goto LAB_00108809;
            }
            ft_mem_free(uVar7,lVar8);
          }
          else {
LAB_001089ec:
            local_4c = 3;
          }
          *(undefined1 *)(param_1 + 0x400) = 1;
          if (local_4c != 0) goto LAB_001087d3;
          goto LAB_00108809;
        }
      }
LAB_001089e0:
      *(undefined1 *)(param_1 + 0x400) = 1;
    }
    else {
LAB_00108809:
      if ((uint)param_2 < (uint)*(ushort *)(param_1 + 0x402)) {
        uVar1 = *(ushort *)(*(long *)(param_1 + 0x408) + (param_2 & 0xffffffff) * 2);
        param_2 = (ulong)uVar1;
        if (uVar1 < 0x102) goto LAB_0010884c;
        *param_3 = *(undefined8 *)(*(long *)(param_1 + 0x410) + -0x810 + param_2 * 8);
      }
    }
  }
LAB_001087d3:
  uVar7 = 0;
LAB_001087d5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8 tt_face_get_ps_name(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 < *(ushort *)(param_1 + 0x1d0)) {
    uVar1 = tt_face_get_ps_name_part_0();
    return uVar1;
  }
  return 0x10;
}



void tt_face_load_bhed(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x62686564,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FT_Stream_ReadFields(param_2,header_fields_17,param_1 + 0x130);
  return;
}



ulong tt_face_load_post(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(param_1 + 0x340))(param_1,0x706f7374,param_2,0);
  if ((int)uVar2 == 0) {
    uVar2 = FT_Stream_ReadFields(param_2,post_fields_12,param_1 + 0x2f0);
    if (((int)uVar2 == 0) &&
       (uVar1 = *(ulong *)(param_1 + 0x2f0), uVar1 != 0x25000 && uVar1 != 0x20000)) {
      uVar2 = uVar2 & 0xffffffff;
      if ((uVar1 & 0xfffffffffffdffff) != 0x10000) {
        uVar2 = 0x9a;
      }
      return uVar2;
    }
  }
  return uVar2;
}



ulong tt_face_load_os2(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (**(code **)(param_1 + 0x340))(param_1,0x4f532f32,param_2,0);
  uVar3 = (ulong)uVar2;
  if (uVar2 == 0) {
    lVar1 = param_1 + 0x268;
    uVar2 = FT_Stream_ReadFields(param_2,os2_fields_11,lVar1);
    uVar3 = (ulong)uVar2;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined8 *)(param_1 + 0x2e4) = 0;
      *(undefined2 *)(param_1 + 0x2ec) = 0xffff;
      *(undefined1 (*) [16])(param_1 + 0x2d0) = (undefined1  [16])0x0;
      if (*(short *)(param_1 + 0x268) != 0) {
        uVar2 = FT_Stream_ReadFields(param_2,os2_fields_extra1_10,lVar1);
        if (uVar2 == 0) {
          if (*(ushort *)(param_1 + 0x268) < 2) {
            return uVar3;
          }
          uVar2 = FT_Stream_ReadFields(param_2,os2_fields_extra2_9,lVar1);
          if (uVar2 == 0) {
            if (*(ushort *)(param_1 + 0x268) < 5) {
              return uVar3;
            }
            uVar3 = FT_Stream_ReadFields(param_2,os2_fields_extra5_8,lVar1);
            return uVar3;
          }
        }
        uVar3 = (ulong)uVar2;
      }
    }
  }
  return uVar3;
}



ulong read_data_from_FT_Stream(long param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ushort uVar19;
  ushort uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  uint uStack_b8;
  uint uStack_b4;
  ulong uStack_b0;
  ushort uStack_a8;
  long lStack_a0;
  long alStack_90 [2];
  ulong uStack_80;
  ulong uStack_78;
  long lStack_68;
  long lStack_58;
  size_t sStack_50;
  long lStack_48;
  void *pvStack_40;
  
  lVar8 = png_get_io_ptr();
  iVar5 = FT_Stream_EnterFrame(lVar8);
  if (iVar5 == 0) {
    memcpy(param_2,*(void **)(lVar8 + 0x40),param_3);
    uVar9 = FT_Stream_ExitFrame(lVar8);
    return uVar9;
  }
  puVar10 = (undefined4 *)png_get_error_ptr(param_1);
  lVar15 = 0;
  *puVar10 = 0x54;
  lVar16 = param_1;
  png_error();
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = *(undefined8 *)(lVar15 + 0x38);
  lStack_58 = lVar8;
  sStack_50 = param_3;
  lStack_48 = param_1;
  pvStack_40 = param_2;
  lStack_a0 = FT_Stream_Pos(lVar15);
  uVar6 = FT_Stream_ReadULong(lVar15,&uStack_b8);
  uStack_b0 = (ulong)uVar6;
  uVar9 = (ulong)uStack_b8;
  if (uStack_b8 != 0) goto LAB_00108f41;
  uVar9 = FT_Stream_ReadFields(lVar15,offset_table_fields_19,&uStack_b0);
  uStack_b8 = (uint)uVar9;
  if (uStack_b8 != 0) goto LAB_00108f41;
  if (uStack_b0 == 0x4f54544f) {
    uVar20 = uStack_a8;
    if (uStack_a8 != 0) {
LAB_00108fb1:
      *(ushort *)(lVar16 + 0x120) = uVar20;
      *(ulong *)(lVar16 + 0x118) = uStack_b0;
      uVar11 = ft_mem_qrealloc(uVar11,0x20,0,uVar20,0,&uStack_b8);
      *(undefined8 *)(lVar16 + 0x128) = uVar11;
      uVar9 = (ulong)uStack_b8;
      if (uStack_b8 != 0) goto LAB_00108f41;
      uVar9 = FT_Stream_Seek(lVar15,lStack_a0 + 0xc);
      uStack_b8 = (uint)uVar9;
      if (uStack_b8 != 0) goto LAB_00108f41;
      uVar9 = FT_Stream_EnterFrame(lVar15,(ulong)uStack_a8 << 4);
      uStack_b8 = (uint)uVar9;
      if (uStack_b8 != 0) goto LAB_00108f41;
      if (uStack_a8 == 0) {
        *(undefined2 *)(lVar16 + 0x120) = 0;
        FT_Stream_ExitFrame(lVar15);
      }
      else {
        uVar19 = 0;
        uVar20 = 0;
        do {
          uVar6 = FT_Stream_GetULong(lVar15);
          uVar9 = (ulong)uVar6;
          uVar6 = FT_Stream_GetULong(lVar15);
          uVar7 = FT_Stream_GetULong(lVar15);
          uVar18 = (ulong)uVar7;
          uVar7 = FT_Stream_GetULong(lVar15);
          if (uVar18 <= *(ulong *)(lVar15 + 8)) {
            uVar14 = (ulong)uVar7;
            uVar13 = *(ulong *)(lVar15 + 8) - uVar18;
            if (uVar13 < uVar14) {
              if ((uVar9 != 0x686d7478) && (uVar9 != 0x766d7478)) goto LAB_0010906a;
              uVar14 = (ulong)((uint)uVar13 & 0xfffffffc);
            }
            uVar13 = 0;
            puVar17 = *(ulong **)(lVar16 + 0x128);
            if (uVar19 != 0) {
              uVar13 = (ulong)uVar19;
              puVar12 = puVar17;
              do {
                if (uVar9 == *puVar12) goto LAB_0010906a;
                puVar12 = puVar12 + 4;
              } while (puVar12 != puVar17 + uVar13 * 4);
            }
            uVar19 = uVar19 + 1;
            puVar17 = puVar17 + uVar13 * 4;
            *puVar17 = uVar9;
            puVar17[1] = (ulong)uVar6;
            puVar17[2] = uVar18;
            puVar17[3] = uVar14;
          }
LAB_0010906a:
          uVar20 = uVar20 + 1;
        } while (uVar20 < uStack_a8);
        *(ushort *)(lVar16 + 0x120) = uVar19;
        FT_Stream_ExitFrame(lVar15);
        if (uVar19 != 0) {
          uVar9 = (ulong)uStack_b8;
          goto LAB_00108f41;
        }
      }
    }
  }
  else {
    lVar8 = lStack_a0 + 0xc;
    uVar9 = FT_Stream_Seek(lVar15,lVar8);
    uStack_b4 = (uint)uVar9;
    if (uStack_b4 != 0) goto LAB_00108f41;
    if (uStack_a8 != 0) {
      uVar20 = 0;
      bVar1 = false;
      bVar2 = 0;
      bVar3 = 0;
      uStack_b4 = 0;
      uVar19 = 1;
      do {
        uStack_b4 = FT_Stream_ReadFields(lVar15,table_dir_entry_fields_18,alStack_90);
        if (uStack_b4 != 0) {
          uStack_a8 = uVar19 - 1;
          break;
        }
        bVar4 = bVar2;
        if (uStack_80 <= *(ulong *)(lVar15 + 8)) {
          if (*(ulong *)(lVar15 + 8) - uStack_80 < uStack_78) {
            if ((alStack_90[0] == 0x686d7478) || (alStack_90[0] == 0x766d7478)) {
              uVar20 = uVar20 + 1;
            }
          }
          else {
            uVar20 = uVar20 + 1;
            if ((alStack_90[0] == 0x68656164) || (alStack_90[0] == 0x62686564)) {
              if (uStack_78 < 0x36) {
                uVar9 = 0x8e;
                goto LAB_00108f41;
              }
              uVar9 = FT_Stream_Seek(lVar15,uStack_80 + 0xc);
              uStack_b4 = (uint)uVar9;
              if (uStack_b4 != 0) goto LAB_00108f41;
              FT_Stream_ReadULong(lVar15,&uStack_b4);
              uVar9 = (ulong)uStack_b4;
              if (uStack_b4 != 0) goto LAB_00108f41;
              uVar9 = FT_Stream_Seek(lVar15,(ulong)uVar19 * 0x10 + lVar8);
              uStack_b4 = (uint)uVar9;
              if (uStack_b4 != 0) goto LAB_00108f41;
              bVar1 = true;
            }
            else if (alStack_90[0] == 0x53494e47) {
              bVar3 = 1;
            }
            else {
              bVar4 = 1;
              if (alStack_90[0] != 0x4d455441) {
                bVar4 = bVar2;
              }
            }
          }
        }
        bVar2 = bVar4;
        bVar21 = uVar19 < uStack_a8;
        uVar19 = uVar19 + 1;
      } while (bVar21);
      if (uVar20 != 0) {
        uVar9 = 0x8e;
        if (!(bool)(bVar3 & bVar2) && !bVar1) goto LAB_00108f41;
        uStack_b8 = 0;
        goto LAB_00108fb1;
      }
    }
  }
  uVar9 = 2;
LAB_00108f41:
  if (lStack_68 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



ulong tt_face_load_font_dir(long param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ushort uVar15;
  ushort uVar16;
  long in_FS_OFFSET;
  bool bVar17;
  uint local_90;
  uint local_8c;
  ulong local_88;
  ushort local_80;
  long local_78;
  long local_68 [2];
  ulong local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  local_78 = FT_Stream_Pos(param_2);
  uVar5 = FT_Stream_ReadULong(param_2,&local_90);
  local_88 = (ulong)uVar5;
  uVar7 = (ulong)local_90;
  if (local_90 != 0) goto LAB_00108f41;
  uVar7 = FT_Stream_ReadFields(param_2,offset_table_fields_19,&local_88);
  local_90 = (uint)uVar7;
  if (local_90 != 0) goto LAB_00108f41;
  if (local_88 == 0x4f54544f) {
    uVar16 = local_80;
    if (local_80 != 0) {
LAB_00108fb1:
      *(ushort *)(param_1 + 0x120) = uVar16;
      *(ulong *)(param_1 + 0x118) = local_88;
      uVar8 = ft_mem_qrealloc(uVar8,0x20,0,uVar16,0,&local_90);
      *(undefined8 *)(param_1 + 0x128) = uVar8;
      uVar7 = (ulong)local_90;
      if (local_90 != 0) goto LAB_00108f41;
      uVar7 = FT_Stream_Seek(param_2,local_78 + 0xc);
      local_90 = (uint)uVar7;
      if (local_90 != 0) goto LAB_00108f41;
      uVar7 = FT_Stream_EnterFrame(param_2,(ulong)local_80 << 4);
      local_90 = (uint)uVar7;
      if (local_90 != 0) goto LAB_00108f41;
      if (local_80 == 0) {
        *(undefined2 *)(param_1 + 0x120) = 0;
        FT_Stream_ExitFrame(param_2);
      }
      else {
        uVar15 = 0;
        uVar16 = 0;
        do {
          uVar5 = FT_Stream_GetULong(param_2);
          uVar7 = (ulong)uVar5;
          uVar5 = FT_Stream_GetULong(param_2);
          uVar6 = FT_Stream_GetULong(param_2);
          uVar14 = (ulong)uVar6;
          uVar6 = FT_Stream_GetULong(param_2);
          if (uVar14 <= *(ulong *)(param_2 + 8)) {
            uVar12 = (ulong)uVar6;
            uVar11 = *(ulong *)(param_2 + 8) - uVar14;
            if (uVar11 < uVar12) {
              if ((uVar7 != 0x686d7478) && (uVar7 != 0x766d7478)) goto LAB_0010906a;
              uVar12 = (ulong)((uint)uVar11 & 0xfffffffc);
            }
            uVar11 = 0;
            puVar13 = *(ulong **)(param_1 + 0x128);
            if (uVar15 != 0) {
              uVar11 = (ulong)uVar15;
              puVar9 = puVar13;
              do {
                if (uVar7 == *puVar9) goto LAB_0010906a;
                puVar9 = puVar9 + 4;
              } while (puVar9 != puVar13 + uVar11 * 4);
            }
            uVar15 = uVar15 + 1;
            puVar13 = puVar13 + uVar11 * 4;
            *puVar13 = uVar7;
            puVar13[1] = (ulong)uVar5;
            puVar13[2] = uVar14;
            puVar13[3] = uVar12;
          }
LAB_0010906a:
          uVar16 = uVar16 + 1;
        } while (uVar16 < local_80);
        *(ushort *)(param_1 + 0x120) = uVar15;
        FT_Stream_ExitFrame(param_2);
        if (uVar15 != 0) {
          uVar7 = (ulong)local_90;
          goto LAB_00108f41;
        }
      }
    }
  }
  else {
    lVar10 = local_78 + 0xc;
    uVar7 = FT_Stream_Seek(param_2,lVar10);
    local_8c = (uint)uVar7;
    if (local_8c != 0) goto LAB_00108f41;
    if (local_80 != 0) {
      uVar16 = 0;
      bVar1 = false;
      bVar2 = 0;
      bVar3 = 0;
      local_8c = 0;
      uVar15 = 1;
      do {
        local_8c = FT_Stream_ReadFields(param_2,table_dir_entry_fields_18,local_68);
        if (local_8c != 0) {
          local_80 = uVar15 - 1;
          break;
        }
        bVar4 = bVar2;
        if (local_58 <= *(ulong *)(param_2 + 8)) {
          if (*(ulong *)(param_2 + 8) - local_58 < local_50) {
            if ((local_68[0] == 0x686d7478) || (local_68[0] == 0x766d7478)) {
              uVar16 = uVar16 + 1;
            }
          }
          else {
            uVar16 = uVar16 + 1;
            if ((local_68[0] == 0x68656164) || (local_68[0] == 0x62686564)) {
              if (local_50 < 0x36) {
                uVar7 = 0x8e;
                goto LAB_00108f41;
              }
              uVar7 = FT_Stream_Seek(param_2,local_58 + 0xc);
              local_8c = (uint)uVar7;
              if (local_8c != 0) goto LAB_00108f41;
              FT_Stream_ReadULong(param_2,&local_8c);
              uVar7 = (ulong)local_8c;
              if (local_8c != 0) goto LAB_00108f41;
              uVar7 = FT_Stream_Seek(param_2,(ulong)uVar15 * 0x10 + lVar10);
              local_8c = (uint)uVar7;
              if (local_8c != 0) goto LAB_00108f41;
              bVar1 = true;
            }
            else if (local_68[0] == 0x53494e47) {
              bVar3 = 1;
            }
            else {
              bVar4 = 1;
              if (local_68[0] != 0x4d455441) {
                bVar4 = bVar2;
              }
            }
          }
        }
        bVar2 = bVar4;
        bVar17 = uVar15 < local_80;
        uVar15 = uVar15 + 1;
      } while (bVar17);
      if (uVar16 != 0) {
        uVar7 = 0x8e;
        if (!(bool)(bVar3 & bVar2) && !bVar1) goto LAB_00108f41;
        local_90 = 0;
        goto LAB_00108fb1;
      }
    }
  }
  uVar7 = 2;
LAB_00108f41:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



int tt_face_load_sbit_image
              (long param_1,long param_2,uint param_3,ulong param_4,long param_5,long param_6,
              short *param_7)

{
  uint *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  int local_e0;
  undefined1 local_ca [2];
  ushort local_c8 [4];
  undefined4 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  long local_98;
  undefined8 local_90;
  long local_88;
  short *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = *(uint *)(param_1 + 0x540);
  if (uVar8 < 3) {
    if (uVar8 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      uVar8 = *(uint *)(*(long *)(param_1 + 0x548) + param_2 * 4);
      iVar7 = 0x8e;
      if (*(long *)(param_1 + 0x5b0) != 0) {
        iVar7 = FT_Stream_Seek(uVar3,*(undefined8 *)(param_1 + 0x5a8));
        if (iVar7 == 0) {
          local_50 = *(long *)(param_1 + 0x530);
          uVar12 = *(ulong *)(param_1 + 0x538);
          local_88 = *(long *)(param_1 + 0x98) + 0x98;
          local_80 = param_7;
          local_70 = *(undefined8 *)(param_1 + 0x5a8);
          uStack_68 = *(undefined8 *)(param_1 + 0x5b0);
          local_78 = 0;
          lStack_48 = local_50 + uVar12;
          lVar11 = (ulong)uVar8 * 0x30;
          local_98 = param_1;
          local_90 = uVar3;
          if (lVar11 + 0x37U <= uVar12) {
            puVar1 = (uint *)(local_50 + 8 + lVar11);
            uVar8 = *puVar1;
            local_60 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                              uVar8 << 0x18);
            uVar8 = puVar1[2];
            local_58 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                              uVar8 << 0x18);
            local_76 = *(undefined1 *)((long)puVar1 + 0x2e);
            if ((local_60 <= uVar12) && (local_58 <= uVar12 - local_60 >> 3)) {
              iVar7 = tt_sbit_decoder_load_image
                                (&local_98,param_3,0,0,0,(uint)((param_4 & 0xffffffff) >> 0x16) & 1)
              ;
              if (iVar7 == 0) {
LAB_001096ab:
                iVar7 = 0;
                if (((param_4 & 0x500000) == 0) && (*(char *)(param_6 + 0x1a) == '\a')) {
                  uVar3 = **(undefined8 **)(param_1 + 0x98);
                  FT_Bitmap_Init(local_c8);
                  iVar7 = FT_Bitmap_Convert(uVar3,param_6,local_c8,1);
                  if (iVar7 == 0) {
                    *(undefined1 *)(param_6 + 0x1a) = local_ae;
                    uVar3 = *(undefined8 *)(param_1 + 0x98);
                    *(undefined4 *)(param_6 + 8) = local_c0;
                    *(undefined2 *)(param_6 + 0x18) = local_b0;
                    ft_glyphslot_set_bitmap(uVar3,local_b8);
                    puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0x98) + 0x128) + 8);
                    *puVar1 = *puVar1 | 1;
                  }
                  else {
                    FT_Bitmap_Done(uVar3,local_c8);
                  }
                }
              }
              goto LAB_00109550;
            }
          }
LAB_00109768:
          iVar7 = 3;
        }
      }
      goto LAB_00109550;
    }
  }
  else if (uVar8 == 3) {
    lVar11 = *(long *)(param_1 + 0x530);
    uVar8 = *(uint *)(*(long *)(param_1 + 0x548) + param_2 * 4);
    param_7[0] = 0;
    param_7[1] = 0;
    uVar8 = *(uint *)(lVar11 + 8 + (ulong)uVar8 * 4);
    if (param_3 <= *(uint *)(param_1 + 0x20)) {
      local_e0 = 5;
      uVar12 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18);
      do {
        if (*(ulong *)(param_1 + 0x5b0) <= uVar12) goto LAB_00109768;
        if (*(ulong *)(param_1 + 0x5b0) - uVar12 < (ulong)(param_3 * 4 + 0xc)) goto LAB_00109768;
        iVar7 = FT_Stream_Seek(param_5,uVar12 + 4 + *(long *)(param_1 + 0x5a8) +
                                       (ulong)(param_3 * 4));
        if (iVar7 != 0) goto LAB_00109550;
        iVar7 = FT_Stream_EnterFrame(param_5,8);
        if (iVar7 != 0) goto LAB_00109550;
        uVar8 = FT_Stream_GetULong(param_5);
        uVar9 = FT_Stream_GetULong(param_5);
        FT_Stream_ExitFrame(param_5);
        if (uVar8 == uVar9) {
          iVar7 = 0x9d;
          goto LAB_00109550;
        }
        if (uVar9 < uVar8) goto LAB_00109768;
        uVar10 = uVar9 - uVar8;
        if ((uVar10 < 8) || (*(long *)(param_1 + 0x5b0) - uVar12 < (ulong)uVar9)) goto LAB_00109768;
        iVar7 = FT_Stream_Seek(param_5,*(long *)(param_1 + 0x5a8) + uVar12 + (ulong)uVar8);
        if (iVar7 != 0) goto LAB_00109550;
        iVar7 = FT_Stream_EnterFrame(param_5,uVar10);
        if (iVar7 != 0) goto LAB_00109550;
        sVar4 = FT_Stream_GetUShort(param_5);
        sVar5 = FT_Stream_GetUShort(param_5);
        uVar8 = FT_Stream_GetULong(param_5);
        if (uVar8 == 0x706e6720) {
          iVar7 = Load_SBit_Png(*(undefined8 *)(param_1 + 0x98),0,0,0x20,param_7,
                                *(undefined8 *)(param_5 + 0x38),*(undefined8 *)(param_5 + 0x40),
                                uVar10 - 8,1,(uint)((param_4 & 0xffffffff) >> 0x16) & 1);
          FT_Stream_ExitFrame(param_5);
          if (iVar7 != 0) goto LAB_00109550;
          tt_face_get_metrics(param_1,0,param_3,local_ca,local_c8);
          uVar6 = *(ushort *)(param_1 + 0x152);
          param_7[2] = sVar4;
          param_7[5] = sVar4;
          param_7[6] = sVar5;
          param_7[3] = *param_7 + sVar5;
          uVar2 = *(ushort *)(*(long *)(param_1 + 0xa0) + 0x18);
          param_7[4] = (short)((int)((uint)local_c8[0] * (uint)uVar2) / (int)(uint)uVar6);
          if (*(char *)(param_1 + 0x1f0) == '\0') {
            if (*(short *)(param_1 + 0x268) == -1) {
              sVar4 = *(short *)(param_1 + 0x198);
              sVar5 = *(short *)(param_1 + 0x19a);
            }
            else {
              sVar4 = *(short *)(param_1 + 0x2c2);
              sVar5 = *(short *)(param_1 + 0x2c4);
            }
            local_c8[0] = sVar4 - sVar5;
            uVar8 = (uint)uVar2;
            uVar9 = (uint)uVar6;
            if (sVar4 < sVar5) {
              local_c8[0] = sVar5 - sVar4;
              uVar8 = (uint)uVar2;
              uVar9 = (uint)uVar6;
            }
          }
          else {
            tt_face_get_metrics(param_1,1,param_3,local_ca,local_c8);
            uVar9 = (uint)*(ushort *)(param_1 + 0x152);
            uVar8 = (uint)*(ushort *)(*(long *)(param_1 + 0xa0) + 0x18);
          }
          param_7[7] = (short)((int)(local_c8[0] * uVar8) / (int)uVar9);
          goto LAB_001096ab;
        }
        if (0x706e6720 < uVar8) {
          if ((uVar8 != 0x7267626c) && (uVar8 != 0x74696666)) {
LAB_0010974e:
            FT_Stream_ExitFrame(param_5);
            iVar7 = 7;
            goto LAB_00109550;
          }
LAB_0010971f:
          FT_Stream_ExitFrame(param_5);
          goto LAB_00109730;
        }
        if (uVar8 != 0x64757065) {
          if (uVar8 != 0x6a706720) goto LAB_0010974e;
          goto LAB_0010971f;
        }
        local_e0 = local_e0 + -1;
        if (local_e0 == 0) {
          FT_Stream_ExitFrame(param_5);
          goto LAB_00109768;
        }
        uVar6 = FT_Stream_GetUShort();
        param_3 = (uint)uVar6;
        FT_Stream_ExitFrame(param_5);
      } while ((uint)uVar6 <= *(uint *)(param_1 + 0x20));
    }
    iVar7 = 6;
    goto LAB_00109550;
  }
LAB_00109730:
  iVar7 = 2;
LAB_00109550:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void tt_face_build_cmaps_isra_0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  undefined4 local_134;
  undefined **local_120;
  long local_110;
  long local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined2 local_fa;
  __jmp_buf_tag local_f8;
  int local_1c;
  uint local_18;
  long local_10;
  
  lVar2 = *(long *)(param_1 + 0x330);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (3 < *(ulong *)(param_1 + 0x338))) {
    uVar5 = (uint)CONCAT11(*(undefined1 *)(lVar2 + 2),*(undefined1 *)(lVar2 + 3));
    puVar1 = (undefined1 *)(lVar2 + *(ulong *)(param_1 + 0x338));
    puVar4 = (undefined1 *)(lVar2 + 4);
    while ((uVar5 != 0 && (puVar4 + 8 <= puVar1))) {
      local_fc = CONCAT11(*puVar4,puVar4[1]);
      local_100 = 0;
      local_fa = CONCAT11(puVar4[2],puVar4[3]);
      uVar6 = (uint)(byte)puVar4[4] << 0x18 | (uint)(byte)puVar4[5] << 0x10 | (uint)(byte)puVar4[7]
              | (uint)(byte)puVar4[6] << 8;
      local_108 = param_1;
      if ((uVar6 != 0) && ((ulong)uVar6 <= *(long *)(param_1 + 0x338) - 2U)) {
        puVar8 = (undefined1 *)((ulong)uVar6 + lVar2);
        local_120 = &tt_cmap_classes;
        puVar3 = tt_cmap_classes;
        while (puVar3 != (undefined *)0x0) {
          puVar3 = *local_120;
          if (*(uint *)(puVar3 + 0x50) == (uint)CONCAT11(*puVar8,puVar8[1])) {
            local_134 = 0;
            ft_validator_init(&local_f8,puVar8,puVar1,0);
            local_18 = (uint)*(ushort *)(param_1 + 0x1d0);
            iVar7 = _setjmp(&local_f8);
            if (iVar7 == 0) {
              local_134 = (**(code **)(puVar3 + 0x58))(puVar8,&local_f8);
            }
            if ((local_1c == 0) &&
               (iVar7 = FT_CMap_New(puVar3,puVar8,&local_108,&local_110), iVar7 == 0)) {
              *(undefined4 *)(local_110 + 0x20) = local_134;
            }
            break;
          }
          local_120 = local_120 + 1;
          puVar3 = *local_120;
        }
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 8;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * get_apple_string_isra_0(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = (char *)ft_mem_qalloc(param_1,(ulong)*(ushort *)(param_3 + 8) + 1,&local_44);
  if (local_44 == 0) {
    local_44 = FT_Stream_Seek(param_2,*(undefined8 *)(param_3 + 0x10));
    if (local_44 == 0) {
      local_44 = FT_Stream_EnterFrame(param_2,*(undefined2 *)(param_3 + 8));
      if (local_44 == 0) {
        pcVar4 = *(char **)(param_2 + 0x40);
        if (*(ushort *)(param_3 + 8) == 0) {
          *pcVar2 = '\0';
          FT_Stream_ExitFrame(param_2);
        }
        else {
          pcVar3 = pcVar4 + *(ushort *)(param_3 + 8);
          pcVar5 = pcVar2;
          do {
            iVar1 = (*param_4)((int)*pcVar4);
            pcVar6 = pcVar5;
            if (iVar1 != 0) {
              pcVar6 = pcVar5 + 1;
              *pcVar5 = *pcVar4;
            }
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar6;
          } while (pcVar4 != pcVar3);
          *pcVar6 = '\0';
          FT_Stream_ExitFrame(param_2);
          if (pcVar2 != pcVar6) goto LAB_00109cd1;
        }
      }
    }
    ft_mem_free(param_1,pcVar2);
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined2 *)(param_3 + 8) = 0;
    ft_mem_free(param_1,*(undefined8 *)(param_3 + 0x18));
    *(undefined8 *)(param_3 + 0x18) = 0;
  }
  pcVar2 = (char *)0x0;
LAB_00109cd1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * get_win_string_isra_0(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  char *pcVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = (char *)ft_mem_qalloc(param_1,(*(ushort *)(param_3 + 8) >> 1) + 1,&local_44);
  if (local_44 == 0) {
    local_44 = FT_Stream_Seek(param_2,*(undefined8 *)(param_3 + 0x10));
    if (local_44 == 0) {
      local_44 = FT_Stream_EnterFrame(param_2,*(undefined2 *)(param_3 + 8));
      if (local_44 == 0) {
        pcVar5 = *(char **)(param_2 + 0x40);
        uVar2 = *(ushort *)(param_3 + 8) >> 1;
        if (uVar2 == 0) {
          *pcVar4 = '\0';
          FT_Stream_ExitFrame(param_2);
        }
        else {
          pcVar1 = pcVar5 + (ulong)uVar2 * 2;
          pcVar6 = pcVar4;
          do {
            pcVar7 = pcVar6;
            if (*pcVar5 == '\0') {
              iVar3 = (*param_4)((int)pcVar5[1]);
              if (iVar3 != 0) {
                pcVar7 = pcVar6 + 1;
                *pcVar6 = pcVar5[1];
              }
            }
            pcVar5 = pcVar5 + 2;
            pcVar6 = pcVar7;
          } while (pcVar5 != pcVar1);
          *pcVar7 = '\0';
          FT_Stream_ExitFrame(param_2);
          if (pcVar4 != pcVar7) goto LAB_00109e2b;
        }
      }
    }
    ft_mem_free(param_1,pcVar4);
    *(undefined2 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    ft_mem_free(param_1,*(undefined8 *)(param_3 + 0x18));
    *(undefined8 *)(param_3 + 0x18) = 0;
  }
  pcVar4 = (char *)0x0;
LAB_00109e2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * sfnt_get_ps_name(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  size_t sVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  char *pcVar14;
  code *pcVar15;
  byte *pbVar16;
  byte bVar17;
  uint uVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  byte *pbVar23;
  char *pcVar24;
  uint *puVar25;
  ushort uVar26;
  int *piVar27;
  long in_FS_OFFSET;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  long *local_78;
  long local_70;
  char *local_68;
  int local_60;
  uint uStack_5c;
  uint local_58 [4];
  byte local_45 [5];
  long local_40;
  
  pcVar10 = *(char **)(param_1 + 0x4a0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar7 = pcVar10;
  if (pcVar10 != (char *)0x0) goto LAB_00109ece;
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (((*(ulong *)(param_1 + 8) & 0x7fff0000) == 0 && ((*(byte *)(param_1 + 0x11) & 0x80) == 0)))) {
    cVar1 = sfnt_get_name_id(param_1,6,&local_68,&local_60);
    if (cVar1 == '\0') goto LAB_00109ece;
    if ((((int)local_68 == -1) ||
        (pcVar7 = (char *)get_win_string_isra_0
                                    (*(undefined8 *)(param_1 + 0xb8),
                                     *(undefined8 *)(param_1 + 0x260),
                                     (long)(int)local_68 * 0x20 + *(long *)(param_1 + 0x248),
                                     sfnt_is_postscript), pcVar7 == (char *)0x0)) &&
       (pcVar7 = pcVar10, local_60 != -1)) {
      pcVar7 = (char *)get_apple_string_isra_0
                                 (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x260),
                                  (long)local_60 * 0x20 + *(long *)(param_1 + 0x248),
                                  sfnt_is_postscript);
    }
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0xb8);
    lVar21 = *(long *)(param_1 + 0x380);
    if (*(long *)(param_1 + 0x4d0) == 0) {
      piVar27 = &local_80;
      cVar1 = sfnt_get_name_id(param_1,0x19,piVar27,&local_7c);
      if ((((cVar1 == '\0') && (cVar1 = sfnt_get_name_id(param_1,0x10,piVar27), cVar1 == '\0')) &&
          (cVar1 = sfnt_get_name_id(param_1,1,piVar27), cVar1 == '\0')) ||
         (((local_80 == -1 ||
           (pcVar10 = (char *)get_win_string_isra_0
                                        (uVar13,*(undefined8 *)(param_1 + 0x260),
                                         (long)local_80 * 0x20 + *(long *)(param_1 + 0x248),
                                         sfnt_is_alphanumeric), pcVar10 == (char *)0x0)) &&
          ((local_7c == -1 ||
           (pcVar10 = (char *)get_apple_string_isra_0
                                        (*(undefined8 *)(param_1 + 0xb8),
                                         *(undefined8 *)(param_1 + 0x260),
                                         (long)local_7c * 0x20 + *(long *)(param_1 + 0x248),
                                         sfnt_is_alphanumeric), pcVar10 == (char *)0x0))))))
      goto LAB_00109f75;
      sVar9 = strlen(pcVar10);
      uVar3 = (uint)sVar9;
      if (0x5b < uVar3) {
        pcVar10[0x5b] = '\0';
        uVar3 = 0x5b;
      }
      *(char **)(param_1 + 0x4d0) = pcVar10;
      *(uint *)(param_1 + 0x4d8) = uVar3;
    }
    (**(code **)(lVar21 + 0x88))(param_1,&local_84,&local_78,0,&local_70);
    if (((*(ulong *)(param_1 + 8) & 0x7fff0000) == 0) || ((*(byte *)(param_1 + 0x11) & 0x80) != 0))
    {
LAB_0010a128:
      lVar21 = *(long *)(local_70 + 0x10);
      pcVar10 = (char *)ft_mem_qalloc(uVar13,local_84 * 0x11 + 1 + *(int *)(param_1 + 0x4d8),
                                      &local_88);
      if (local_88 != 0) goto LAB_00109f75;
      strcpy(pcVar10,*(char **)(param_1 + 0x4d0));
      pbVar23 = (byte *)(pcVar10 + *(uint *)(param_1 + 0x4d8));
      if (local_84 != 0) {
        uVar3 = 0;
        do {
          if (*local_78 != *(long *)(lVar21 + 0x10)) {
            *pbVar23 = 0x5f;
            uVar2 = (uint)*local_78;
            uVar26 = (ushort)*local_78;
            if (uVar2 == 0) {
              pbVar23[1] = 0x30;
              pbVar23 = pbVar23 + 2;
            }
            else {
              pbVar16 = pbVar23 + 1;
              if ((int)uVar2 < 0) {
                pbVar23[1] = 0x2d;
                uVar2 = -uVar2;
                pbVar16 = pbVar23 + 2;
                uVar26 = (ushort)uVar2;
              }
              uVar2 = uVar2 >> 0x10;
              pbVar23 = local_45;
              if (uVar2 != 0) {
                do {
                  pbVar19 = pbVar23 + 1;
                  *pbVar23 = (char)uVar2 + (char)(uVar2 / 10) * -10 + 0x30;
                  uVar2 = uVar2 / 10;
                  pbVar23 = pbVar19;
                } while (uVar2 != 0);
                pbVar12 = pbVar16;
                if (local_45 < pbVar19) {
                  do {
                    pbVar11 = pbVar23 + -1;
                    *pbVar12 = pbVar23[-1];
                    pbVar23 = pbVar11;
                    pbVar12 = pbVar12 + 1;
                  } while (pbVar11 != local_45);
                  pbVar16 = pbVar16 + ((long)pbVar19 - (long)local_45);
                }
              }
              pbVar23 = pbVar16;
              if (uVar26 != 0) {
                *pbVar16 = 0x2e;
                uVar2 = ((uint)uVar26 + (uint)uVar26 * 4) * 2 + 5;
                pbVar16[1] = (char)(uVar2 >> 0x10) + 0x30;
                uVar2 = ((uVar2 & 0xffff) + (uVar2 & 0xffff) * 4) * 2;
                pbVar19 = pbVar16 + 2;
                while (pbVar19 != pbVar16 + 6) {
                  pbVar23 = pbVar19 + 1;
                  uVar4 = uVar2 + 0xffff;
                  if (-1 < (int)uVar2) {
                    uVar4 = uVar2;
                  }
                  uVar5 = ((int)uVar4 >> 0x10) + 0x30;
                  *pbVar19 = (byte)uVar5;
                  uVar4 = (int)uVar2 % 0x10000;
                  pbVar12 = pbVar19;
                  if ((uVar2 & 0xfffe) == 0) goto LAB_0010a2c1;
                  uVar2 = uVar4 * 10;
                  pbVar19 = pbVar23;
                }
                uVar5 = (uint)pbVar19[-1];
                pbVar12 = pbVar19 + -1;
                pbVar23 = pbVar19;
                uVar4 = uVar2;
LAB_0010a2c1:
                cVar1 = (char)uVar5;
                if (((long)pbVar12 - (long)pbVar16 == 5) && ((int)uVar4 < 0x542e0)) {
                  if (cVar1 != '1') {
                    if (uVar4 == 0x2a120) {
                      if ((uVar5 & 1) != 0) {
LAB_0010a7bc:
                        pbVar23[-1] = cVar1 - 1;
                        goto LAB_0010a2f8;
                      }
                    }
                    else if ((int)uVar4 < 0x2a120) {
                      if (cVar1 != '0') goto LAB_0010a7bc;
                      goto LAB_0010a2e8;
                    }
                    goto LAB_0010a2d9;
                  }
                  pbVar23[-1] = 0x30;
                }
                else {
LAB_0010a2d9:
                  if (cVar1 != '0') goto LAB_0010a2f8;
                }
LAB_0010a2e8:
                do {
                  pbVar23 = pbVar12;
                  *pbVar23 = 0;
                  pbVar12 = pbVar23 + -1;
                } while (pbVar23[-1] == 0x30);
              }
            }
LAB_0010a2f8:
            uVar13 = *(undefined8 *)(lVar21 + 0x20);
            bVar17 = (byte)((ulong)uVar13 >> 0x18);
            if ((bVar17 != 0x20) &&
               (((int)(char)bVar17 - 0x30U < 10 || ((byte)((bVar17 & 0xdf) + 0xbf) < 0x1a)))) {
              *pbVar23 = bVar17;
              uVar13 = *(undefined8 *)(lVar21 + 0x20);
              pbVar23 = pbVar23 + 1;
            }
            bVar17 = (byte)((ulong)uVar13 >> 0x10);
            if ((bVar17 != 0x20) &&
               (((int)(char)bVar17 - 0x30U < 10 || ((byte)((bVar17 & 0xdf) + 0xbf) < 0x1a)))) {
              *pbVar23 = bVar17;
              uVar13 = *(undefined8 *)(lVar21 + 0x20);
              pbVar23 = pbVar23 + 1;
            }
            bVar17 = (byte)((ulong)uVar13 >> 8);
            if ((bVar17 != 0x20) &&
               (((int)(char)bVar17 - 0x30U < 10 || ((byte)((bVar17 & 0xdf) + 0xbf) < 0x1a)))) {
              *pbVar23 = bVar17;
              uVar13 = *(undefined8 *)(lVar21 + 0x20);
              pbVar23 = pbVar23 + 1;
            }
            bVar17 = (byte)uVar13;
            if ((bVar17 != 0x20) &&
               (((int)(char)bVar17 - 0x30U < 10 || ((byte)((bVar17 & 0xdf) + 0xbf) < 0x1a)))) {
              *pbVar23 = bVar17;
              pbVar23 = pbVar23 + 1;
            }
          }
          local_78 = local_78 + 1;
          uVar3 = uVar3 + 1;
          lVar21 = lVar21 + 0x30;
        } while (uVar3 < local_84);
      }
      *pbVar23 = 0;
      pbVar23 = pbVar23 + 1;
    }
    else {
      lVar21 = *(long *)(param_1 + 0x370);
      pcVar15 = *(code **)(lVar21 + 0x148);
      lVar20 = ((ulong)((uint)(*(ulong *)(param_1 + 8) >> 0x10) & 0x7fff) - 1) * 0x10;
      lVar8 = *(long *)(local_70 + 0x18) + lVar20;
      iVar22 = *(int *)(lVar8 + 0xc);
      local_68 = (char *)0x0;
      if ((iVar22 - 0x100U < 0x7f00) || (iVar22 == 6)) {
        (*pcVar15)(param_1,iVar22,&local_68);
        pcVar10 = local_68;
        if (local_68 == (char *)0x0) {
          pcVar15 = *(code **)(lVar21 + 0x148);
          lVar8 = lVar20 + *(long *)(local_70 + 0x18);
          goto LAB_0010a061;
        }
        sVar9 = strlen(local_68);
        pbVar23 = (byte *)(pcVar10 + sVar9 + 1);
      }
      else {
LAB_0010a061:
        (*pcVar15)(param_1,*(undefined2 *)(lVar8 + 8),&local_60);
        if ((char *)CONCAT44(uStack_5c,local_60) == (char *)0x0) goto LAB_0010a128;
        sVar9 = strlen((char *)CONCAT44(uStack_5c,local_60));
        pcVar10 = (char *)ft_mem_qalloc(uVar13,(ulong)(*(int *)(param_1 + 0x4d8) + 1) + 1 + sVar9,
                                        &local_88);
        if (local_88 != 0) goto LAB_00109f75;
        strcpy(pcVar10,*(char **)(param_1 + 0x4d0));
        uVar3 = *(uint *)(param_1 + 0x4d8);
        pcVar10[uVar3] = '-';
        pbVar16 = (byte *)CONCAT44(uStack_5c,local_60);
        pbVar23 = (byte *)(pcVar10 + uVar3 + 1);
        bVar17 = *pbVar16;
        while (bVar17 != 0) {
          if (((int)(char)bVar17 - 0x30U < 10) || ((byte)((bVar17 & 0xdf) + 0xbf) < 0x1a)) {
            *pbVar23 = bVar17;
            pbVar23 = pbVar23 + 1;
          }
          pbVar19 = pbVar16 + 1;
          pbVar16 = pbVar16 + 1;
          bVar17 = *pbVar19;
        }
        *pbVar23 = 0;
        pbVar23 = pbVar23 + 1;
        ft_mem_free(uVar13,CONCAT44(uStack_5c,local_60));
      }
    }
    pcVar7 = pcVar10;
    if ((long)pbVar23 - (long)pcVar10 < 0x80) goto LAB_00109f75;
    uVar2 = (uint)((long)pbVar23 - (long)pcVar10);
    uVar3 = uVar2 + 0xf;
    if (-1 < (int)uVar2) {
      uVar3 = uVar2;
    }
    iVar22 = (int)uVar3 >> 4;
    pbVar23 = (byte *)(pcVar10 + (int)(uVar3 & 0xfffffff0));
    if (-iVar22 == 0) {
      uVar6 = 0x75bcd15;
      uVar5 = 0x75bcd15;
      uVar4 = 0x75bcd15;
      uVar3 = 0x75bcd15;
    }
    else {
      uVar6 = 0x75bcd15;
      uVar5 = 0x75bcd15;
      uVar4 = 0x75bcd15;
      uVar3 = 0x75bcd15;
      pbVar16 = pbVar23 + (long)(iVar22 * -4) * 4;
      do {
        pbVar19 = pbVar16 + 0x10;
        uVar3 = (*(int *)pbVar16 * -0x34f28000 | (uint)(*(int *)pbVar16 * 0x239b961b) >> 0x11) *
                -0x54f16877 ^ uVar3;
        uVar3 = ((uVar3 >> 0xd | uVar3 << 0x13) + uVar4) * 5 + 0x561ccd1b;
        uVar4 = (*(int *)(pbVar16 + 4) * -0x68770000 |
                (uint)(*(int *)(pbVar16 + 4) * -0x54f16877) >> 0x10) * 0x38b34ae5 ^ uVar4;
        uVar4 = ((uVar4 >> 0xf | uVar4 << 0x11) + uVar5) * 5 + 0xbcaa747;
        uVar5 = ((uint)(*(int *)(pbVar16 + 8) * 0x38b34ae5) >> 0xf |
                *(int *)(pbVar16 + 8) * -0x6a360000) * -0x5e1c746d ^ uVar5;
        uVar5 = ((uVar5 << 0xf | uVar5 >> 0x11) + uVar6) * 5 + 0x96cd1c35;
        uVar6 = ((uint)(*(int *)(pbVar16 + 0xc) * -0x5e1c746d) >> 0xe |
                *(int *)(pbVar16 + 0xc) * 0x2e4c0000) * 0x239b961b ^ uVar6;
        uVar6 = ((uVar6 << 0xd | uVar6 >> 0x13) + uVar3) * 5 + 0x32ac3b17;
        pbVar16 = pbVar19;
      } while (pbVar19 != pbVar23 + ((ulong)(iVar22 - 1) + (long)-iVar22) * 0x10 + 0x10);
    }
    switch(uVar2 & 0xf) {
    case 0:
      goto switchD_0010a546_caseD_0;
    case 1:
      uVar18 = 0;
      goto LAB_0010a5f9;
    case 2:
      uVar18 = 0;
      goto LAB_0010a5ef;
    case 3:
      uVar18 = 0;
      goto LAB_0010a5e5;
    case 4:
      goto switchD_0010a546_caseD_4;
    case 5:
      uVar18 = 0;
      goto LAB_0010a5c5;
    case 6:
      uVar18 = 0;
      goto LAB_0010a5bb;
    case 7:
      uVar18 = 0;
      goto LAB_0010a5b1;
    case 8:
      goto switchD_0010a546_caseD_8;
    case 9:
      uVar18 = 0;
      goto LAB_0010a590;
    case 10:
      uVar18 = 0;
      goto LAB_0010a586;
    case 0xb:
      uVar18 = 0;
      goto LAB_0010a57c;
    case 0xc:
      goto switchD_0010a546_caseD_c;
    case 0xd:
      uVar18 = 0;
      goto LAB_0010a55b;
    case 0xe:
      uVar18 = 0;
      break;
    case 0xf:
      uVar18 = (uint)pbVar23[0xe] << 0x10;
    }
    uVar18 = (uint)pbVar23[0xd] << 8 ^ uVar18;
LAB_0010a55b:
    uVar6 = uVar6 ^ ((pbVar23[0xc] ^ uVar18) * -0x5e1c746d >> 0xe |
                    (pbVar23[0xc] ^ uVar18) * 0x2e4c0000) * 0x239b961b;
switchD_0010a546_caseD_c:
    uVar18 = (uint)pbVar23[0xb] << 0x18;
LAB_0010a57c:
    uVar18 = (uint)pbVar23[10] << 0x10 ^ uVar18;
LAB_0010a586:
    uVar18 = (uint)pbVar23[9] << 8 ^ uVar18;
LAB_0010a590:
    uVar5 = uVar5 ^ ((pbVar23[8] ^ uVar18) * 0x38b34ae5 >> 0xf | (pbVar23[8] ^ uVar18) * -0x6a360000
                    ) * -0x5e1c746d;
switchD_0010a546_caseD_8:
    uVar18 = (uint)pbVar23[7] << 0x18;
LAB_0010a5b1:
    uVar18 = (uint)pbVar23[6] << 0x10 ^ uVar18;
LAB_0010a5bb:
    uVar18 = (uint)pbVar23[5] << 8 ^ uVar18;
LAB_0010a5c5:
    uVar4 = uVar4 ^ ((pbVar23[4] ^ uVar18) * -0x68770000 |
                    (pbVar23[4] ^ uVar18) * -0x54f16877 >> 0x10) * 0x38b34ae5;
switchD_0010a546_caseD_4:
    uVar18 = (uint)pbVar23[3] << 0x18;
LAB_0010a5e5:
    uVar18 = (uint)pbVar23[2] << 0x10 ^ uVar18;
LAB_0010a5ef:
    uVar18 = (uint)pbVar23[1] << 8 ^ uVar18;
LAB_0010a5f9:
    uVar3 = uVar3 ^ ((*pbVar23 ^ uVar18) * -0x34f28000 | (*pbVar23 ^ uVar18) * 0x239b961b >> 0x11) *
                    -0x54f16877;
switchD_0010a546_caseD_0:
    uVar18 = (uVar3 ^ uVar2) + (uVar4 ^ uVar2) + (uVar5 ^ uVar2) + (uVar6 ^ uVar2);
    uVar3 = (uVar4 ^ uVar2) + uVar18;
    uVar4 = (uVar5 ^ uVar2) + uVar18;
    uVar2 = (uVar6 ^ uVar2) + uVar18;
    uVar5 = (uVar18 >> 0x10 ^ uVar18) * -0x7a143595;
    uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
    uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
    uVar6 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
    uVar6 = uVar6 ^ uVar6 >> 0x10;
    uVar3 = (uVar4 ^ uVar4 >> 0x10) * -0x7a143595;
    uVar4 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
    uVar4 = uVar4 ^ uVar4 >> 0x10;
    uVar3 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
    pcVar10 = pcVar10 + *(uint *)(param_1 + 0x4d8);
    *pcVar10 = '-';
    pcVar24 = pcVar10 + 0x18;
    uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
    pcVar10[0x21] = '.';
    pcVar10[0x22] = '.';
    pcVar10[0x23] = '.';
    pcVar10[0x24] = '\0';
    uVar3 = uVar3 ^ uVar3 >> 0x10;
    local_58[0] = uVar6 + uVar4 + (uVar5 ^ uVar5 >> 0x10) + uVar3;
    local_58[2] = uVar4 + local_58[0];
    local_58[3] = uVar3 + local_58[0];
    local_58[1] = uVar6 + local_58[0];
    puVar25 = local_58 + 3;
    do {
      pcVar10 = pcVar24 + 8;
      uVar3 = *puVar25;
      do {
        pcVar14 = pcVar10 + -1;
        *pcVar10 = "0123456789ABCDEF"[uVar3 & 0xf];
        pcVar10 = pcVar14;
        uVar3 = uVar3 >> 4;
      } while (pcVar14 != pcVar24);
      puVar25 = puVar25 + -1;
      pcVar24 = pcVar24 + -8;
    } while (puVar25 != &uStack_5c);
  }
LAB_00109f75:
  *(char **)(param_1 + 0x4a0) = pcVar7;
LAB_00109ece:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void stream_close(undefined8 *param_1)

{
  ft_mem_free(param_1[7],*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  return;
}



void tt_face_load_head(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x68656164,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FT_Stream_ReadFields(param_2,header_fields_17,param_1 + 0x130);
  return;
}



uint sfnt_get_name_index(long param_1,char *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (-1 < (long)uVar1) {
    if (uVar1 < 0xffffffff) {
      uVar3 = (uint)uVar1;
      if (uVar3 == 0) goto LAB_0010aa3c;
    }
    else {
      uVar3 = 0xffffffff;
    }
    uVar4 = 0;
    do {
      if (((uVar4 < *(ushort *)(param_1 + 0x1d0)) &&
          (iVar2 = tt_face_get_ps_name_part_0(param_1,uVar4,&local_38), iVar2 == 0)) &&
         (iVar2 = strcmp(param_2,local_38), iVar2 == 0)) goto LAB_0010aa3e;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
LAB_0010aa3c:
  uVar4 = 0;
LAB_0010aa3e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 tt_get_glyph_name(long param_1,uint param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (param_2 < *(ushort *)(param_1 + 0x1d0)) {
      tt_face_get_ps_name_part_0(param_1,param_2,&local_18);
      uVar1 = local_18;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
  local_18 = uVar1;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int sfnt_get_glyph_name(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    iVar1 = 0x23;
  }
  else {
    iVar1 = 0x10;
    if ((uint)param_2 < (uint)*(ushort *)(param_1 + 0x1d0)) {
      iVar1 = tt_face_get_ps_name_part_0(param_1,param_2,&local_28);
      if (iVar1 == 0) {
        ft_mem_strcpyn(param_3,local_28,param_4);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tt_face_goto_table(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x128);
  plVar3 = plVar1 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
  while( true ) {
    if (plVar3 <= plVar1) {
      return 0x8e;
    }
    if ((param_2 == *plVar1) && (plVar1[3] != 0)) break;
    plVar1 = plVar1 + 4;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = plVar1[3];
  }
  uVar2 = FT_Stream_Seek(param_3,plVar1[2]);
  return uVar2;
}



undefined8 sfnt_load_table(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x128);
    plVar5 = plVar2 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
    while( true ) {
      if (plVar5 <= plVar2) {
        return 0x8e;
      }
      if ((param_2 == *plVar2) && (plVar2[3] != 0)) break;
      plVar2 = plVar2 + 4;
    }
    param_3 = param_3 + plVar2[2];
    lVar1 = plVar2[3];
  }
  lVar4 = lVar1;
  if ((param_5 != (long *)0x0) && (lVar4 = *param_5, *param_5 == 0)) {
    *param_5 = lVar1;
    return 0;
  }
  uVar3 = FT_Stream_ReadAt(*(undefined8 *)(param_1 + 0xc0),param_3,param_4,lVar4);
  return uVar3;
}



undefined8 tt_face_load_any(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x128);
    plVar5 = plVar2 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
    while( true ) {
      if (plVar5 <= plVar2) {
        return 0x8e;
      }
      if ((param_2 == *plVar2) && (plVar2[3] != 0)) break;
      plVar2 = plVar2 + 4;
    }
    param_3 = param_3 + plVar2[2];
    lVar1 = plVar2[3];
  }
  lVar4 = lVar1;
  if ((param_5 != (long *)0x0) && (lVar4 = *param_5, *param_5 == 0)) {
    *param_5 = lVar1;
    return 0;
  }
  uVar3 = FT_Stream_ReadAt(*(undefined8 *)(param_1 + 0xc0),param_3,param_4,lVar4);
  return uVar3;
}



undefined4 tt_face_find_bdf_prop(long param_1,char *param_2,undefined4 *param_3)

{
  ushort *puVar1;
  void *__s;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  short *psVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  void *pvVar11;
  long *plVar12;
  ulong uVar13;
  ushort uVar14;
  long *plVar15;
  uint *puVar16;
  ushort *puVar17;
  uint *puVar18;
  ushort *puVar19;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  *param_3 = 0;
  if (*(char *)(param_1 + 0x594) != '\0') {
    uVar9 = *(uint *)(param_1 + 0x590);
    puVar19 = (ushort *)(*(long *)(param_1 + 0x570) + 8);
    puVar16 = (uint *)((ulong)(uVar9 * 4) + (long)puVar19);
LAB_0010ad60:
    if ((lVar3 != 0) && (param_2 != (char *)0x0)) {
      sVar10 = strlen(param_2);
      if (sVar10 == 0) {
        return 6;
      }
      if (uVar9 == 0) {
        return 6;
      }
      puVar17 = puVar19 + (ulong)uVar9 * 2;
      do {
        uVar14 = *puVar19;
        puVar1 = puVar19 + 1;
        puVar19 = puVar19 + 2;
        uVar7 = *puVar1 << 8 | *puVar1 >> 8;
        if (*(ushort *)(lVar3 + 0x1a) == (ushort)(uVar14 << 8 | uVar14 >> 8)) {
          if (uVar7 == 0) {
            return 6;
          }
          puVar18 = (uint *)((long)puVar16 + (ulong)uVar7 * 10);
          do {
            uVar9 = puVar16[1];
            if (((ushort)uVar9 & 0x1000) != 0) {
              uVar2 = *puVar16;
              uVar4 = *(ulong *)(param_1 + 0x588);
              uVar13 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                              uVar2 << 0x18);
              if ((uVar13 < uVar4) && (sVar10 < uVar4 - uVar13)) {
                lVar3 = *(long *)(param_1 + 0x580);
                iVar8 = strncmp(param_2,(char *)(uVar13 + lVar3),uVar4 - uVar13);
                if (iVar8 == 0) {
                  uVar2 = *(uint *)((long)puVar16 + 6);
                  uVar14 = (ushort)uVar9 >> 8 & 0xf;
                  uVar9 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18;
                  if (uVar14 == 2) {
                    *param_3 = 2;
                    param_3[2] = uVar9;
                    return 0;
                  }
                  if (uVar14 < 3) {
                    if (uVar9 < uVar4) {
                      __s = (void *)(lVar3 + (ulong)uVar9);
                      pvVar11 = memchr(__s,0,uVar4);
                      if (pvVar11 != (void *)0x0) {
                        *param_3 = 1;
                        *(void **)(param_3 + 2) = __s;
                        return 0;
                      }
                    }
                  }
                  else if (uVar14 == 3) {
                    *param_3 = 3;
                    param_3[2] = uVar9;
                    return 0;
                  }
                }
              }
            }
            puVar16 = (uint *)((long)puVar16 + 10);
          } while (puVar16 != puVar18);
          return 6;
        }
        puVar16 = (uint *)((long)puVar16 + (ulong)((uint)uVar7 * 10));
      } while (puVar19 != puVar17);
    }
    return 6;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined1 (*) [16])(param_1 + 0x570) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined1 (*) [16])(param_1 + 0x580) = (undefined1  [16])0x0;
  plVar12 = *(long **)(param_1 + 0x128);
  plVar15 = plVar12 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
  while( true ) {
    if (plVar15 <= plVar12) {
      return 8;
    }
    if ((*plVar12 == 0x42444620) && (plVar12[3] != 0)) break;
    plVar12 = plVar12 + 4;
  }
  uVar4 = plVar12[3];
  iVar8 = FT_Stream_Seek(uVar5,plVar12[2]);
  if (uVar4 < 8) {
    return 8;
  }
  if (iVar8 != 0) {
    return 8;
  }
  iVar8 = FT_Stream_ExtractFrame(uVar5,uVar4,param_1 + 0x570);
  if (iVar8 != 0) {
    return 8;
  }
  psVar6 = *(short **)(param_1 + 0x570);
  *(ulong *)(param_1 + 0x578) = (long)psVar6 + uVar4;
  uVar9 = *(uint *)(psVar6 + 2);
  uVar14 = psVar6[1] << 8 | (ushort)psVar6[1] >> 8;
  uVar13 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18);
  if ((((*psVar6 == 0x100) && (7 < uVar13)) && ((ulong)uVar14 <= uVar13 - 8 >> 2)) &&
     (uVar13 + 1 <= uVar4)) {
    puVar19 = (ushort *)(psVar6 + 4);
    *(ulong *)(param_1 + 0x588) = uVar4 - uVar13;
    puVar16 = (uint *)((ulong)((uint)uVar14 * 4) + (long)puVar19);
    uVar9 = (uint)uVar14;
    *(uint *)(param_1 + 0x590) = (uint)uVar14;
    *(uint **)(param_1 + 0x580) = (uint *)((long)psVar6 + uVar13);
    puVar18 = puVar16;
    if (uVar9 != 0) {
      puVar17 = puVar19;
      do {
        puVar1 = puVar17 + 1;
        puVar17 = puVar17 + 2;
        uVar7 = *puVar1 << 8 | *puVar1 >> 8;
        puVar18 = (uint *)((long)puVar18 + (ulong)(((uint)uVar7 + (uint)uVar7 * 4) * 2));
      } while ((ushort *)(psVar6 + (ulong)(uVar14 + 2) * 2) != puVar17);
    }
    if (puVar18 <= (uint *)((long)psVar6 + uVar13)) {
      *(undefined1 *)(param_1 + 0x594) = 1;
      goto LAB_0010ad60;
    }
  }
  FT_Stream_ReleaseFrame(uVar5,param_1 + 0x570);
  *(undefined1 (*) [16])(param_1 + 0x570) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined1 (*) [16])(param_1 + 0x580) = (undefined1  [16])0x0;
  return 8;
}



undefined8 sfnt_get_charset_id(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_48 [2];
  undefined8 local_40;
  int local_38 [2];
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = tt_face_find_bdf_prop(param_1,"CHARSET_REGISTRY",local_38);
  if ((int)uVar1 == 0) {
    uVar1 = tt_face_find_bdf_prop(param_1,"CHARSET_ENCODING",local_48);
    if ((int)uVar1 == 0) {
      if ((local_38[0] == 1) && (local_48[0] == 1)) {
        *param_2 = local_40;
        *param_3 = local_30;
      }
      else {
        uVar1 = 6;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint * tt_cmap14_variants(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  uVar7 = *(ulong *)(param_1 + 0x28);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_1 + 0x18);
  local_34 = 0;
  iVar2 = (int)uVar7;
  uVar8 = iVar2 + 1;
  puVar3 = *(uint **)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x30) < uVar8) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    puVar3 = (uint *)ft_mem_qrealloc(param_2,4,*(uint *)(param_1 + 0x30),uVar8,puVar3,&local_34);
    *(uint **)(param_1 + 0x38) = puVar3;
    if (local_34 != 0) {
      puVar3 = (uint *)0x0;
      goto LAB_0010b23f;
    }
    *(uint *)(param_1 + 0x30) = uVar8;
  }
  puVar5 = puVar3;
  if (iVar2 != 0) {
    uVar7 = uVar7 & 0xffffffff;
    pbVar4 = (byte *)(lVar1 + 10);
    do {
      puVar6 = puVar5 + 1;
      *puVar5 = (uint)*pbVar4 << 0x10 | (uint)pbVar4[1] << 8 | (uint)pbVar4[2];
      pbVar4 = pbVar4 + 0xb;
      puVar5 = puVar6;
    } while (puVar3 + uVar7 != puVar6);
    puVar5 = puVar3 + uVar7;
  }
  *puVar5 = 0;
LAB_0010b23f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010b390) */

undefined4 * tt_cmap14_get_nondef_chars(long param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  long lVar8;
  long in_FS_OFFSET;
  
  uVar1 = *param_2;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = *(undefined4 **)(param_1 + 0x38);
  uVar7 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (*(uint *)(param_1 + 0x30) < uVar7 + 1) {
    *(undefined8 *)(param_1 + 0x40) = param_3;
    puVar3 = (undefined4 *)ft_mem_qrealloc();
    *(undefined4 **)(param_1 + 0x38) = puVar3;
    *(uint *)(param_1 + 0x30) = uVar7 + 1;
  }
  lVar8 = 0;
  puVar4 = param_2 + 1;
  puVar6 = puVar3;
  if (uVar1 != 0) {
    do {
      puVar3[lVar8] =
           (uint)(byte)*puVar4 << 0x10 | (uint)*(byte *)((long)puVar4 + 1) << 8 |
           (uint)*(byte *)((long)puVar4 + 2);
      lVar8 = lVar8 + 1;
      puVar4 = (uint *)((long)puVar4 + 5);
    } while ((uint)lVar8 < uVar7);
    uVar5 = 1;
    if (uVar1 != 0) {
      uVar5 = uVar7;
    }
    puVar6 = puVar3 + uVar5;
  }
  *puVar6 = 0;
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}



uint * tt_cmap14_get_def_chars(long param_1,uint *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  uVar5 = *param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  if (uVar5 == 0) {
    local_34 = 0;
    puVar4 = *(uint **)(param_1 + 0x38);
    puVar10 = puVar4;
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar9 = 1;
      uVar2 = 0;
      goto LAB_0010b48b;
    }
  }
  else {
    uVar7 = (ulong)(uVar13 - 1);
    pbVar3 = (byte *)((long)param_2 + 7);
    iVar6 = 0;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 4;
      iVar6 = iVar6 + 1 + (uint)bVar1;
    } while (pbVar3 != (byte *)((long)param_2 + uVar7 * 4 + 0xb));
    uVar9 = iVar6 + 1;
    uVar2 = *(uint *)(param_1 + 0x30);
    local_34 = 0;
    puVar4 = *(uint **)(param_1 + 0x38);
    if (uVar2 < uVar9) {
LAB_0010b48b:
      local_34 = 0;
      *(undefined8 *)(param_1 + 0x40) = param_3;
      puVar4 = (uint *)ft_mem_qrealloc(param_3,4,uVar2,uVar9,puVar4,&local_34);
      *(uint **)(param_1 + 0x38) = puVar4;
      if (local_34 != 0) {
        puVar4 = (uint *)0x0;
        goto LAB_0010b469;
      }
      *(uint *)(param_1 + 0x30) = uVar9;
      puVar10 = puVar4;
      if (uVar5 == 0) goto LAB_0010b463;
      uVar7 = (ulong)(uVar13 - 1);
    }
    puVar8 = puVar4;
    puVar11 = param_2 + 1;
    do {
      puVar12 = puVar11 + 1;
      uVar5 = (uint)(byte)*puVar11 << 0x10 | (uint)*(byte *)((long)puVar11 + 1) << 8 |
              (uint)*(byte *)((long)puVar11 + 2);
      puVar10 = puVar8 + (ulong)*(byte *)((long)puVar11 + 3) + 1;
      do {
        *puVar8 = uVar5;
        puVar8 = puVar8 + 1;
        uVar5 = uVar5 + 1;
      } while (puVar8 != puVar10);
      puVar8 = puVar10;
      puVar11 = puVar12;
    } while (puVar12 != param_2 + uVar7 + 2);
  }
LAB_0010b463:
  *puVar10 = 0;
LAB_0010b469:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



long tt_cmap14_variant_chars(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int local_44;
  long local_40;
  
  lVar6 = *(long *)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (uint *)tt_cmap14_find_variant(lVar6 + 6,param_3);
  if (puVar4 == (uint *)0x0) {
LAB_0010b8a8:
    lVar6 = 0;
  }
  else {
    uVar3 = *puVar4;
    uVar18 = puVar4[1];
    uVar8 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar3 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    uVar13 = (ulong)uVar3;
    if (uVar3 == 0 && uVar8 == 0) goto LAB_0010b8a8;
    if ((ulong)uVar8 == 0) {
      lVar14 = *(long *)(in_FS_OFFSET + 0x28);
joined_r0x0010b73e:
      if (local_40 == lVar14) {
        lVar6 = tt_cmap14_get_nondef_chars(param_1,lVar6 + uVar13,param_2);
        return lVar6;
      }
      goto LAB_0010b8b7;
    }
    puVar4 = (uint *)((ulong)uVar8 + lVar6);
    if (uVar13 == 0) {
LAB_0010b6c0:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar6 = tt_cmap14_get_def_chars(param_1,puVar4,param_2);
        return lVar6;
      }
      goto LAB_0010b8b7;
    }
    uVar3 = *puVar4;
    puVar12 = (uint *)(lVar6 + uVar13);
    pbVar5 = (byte *)((long)puVar4 + 7);
    uVar18 = *puVar12;
    uVar8 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if (uVar3 == 0) {
      if (uVar18 != 0) {
LAB_0010b760:
        lVar14 = *(long *)(in_FS_OFFSET + 0x28);
        goto joined_r0x0010b73e;
      }
      goto LAB_0010b6c0;
    }
    iVar9 = 0;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 4;
      iVar9 = iVar9 + 1 + (uint)bVar2;
    } while (pbVar5 != (byte *)((long)puVar4 + (ulong)(uVar8 - 1) * 4 + 0xb));
    if (uVar18 == 0) goto LAB_0010b6c0;
    if (iVar9 == 0) goto LAB_0010b760;
    uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    uVar3 = iVar9 + 1 + uVar18;
    lVar6 = *(long *)(param_1 + 0x38);
    local_44 = 0;
    if (*(uint *)(param_1 + 0x30) < uVar3) {
      *(undefined8 *)(param_1 + 0x40) = param_2;
      lVar6 = ft_mem_qrealloc(param_2,4,*(uint *)(param_1 + 0x30),uVar3,lVar6,&local_44);
      *(long *)(param_1 + 0x38) = lVar6;
      if (local_44 != 0) goto LAB_0010b8a8;
      *(uint *)(param_1 + 0x30) = uVar3;
    }
    pbVar5 = (byte *)((long)puVar12 + 9);
    uVar20 = 1;
    uVar19 = (uint)*(byte *)((long)puVar4 + 7);
    uVar10 = (uint)(byte)puVar4[1] << 0x10 | (uint)*(byte *)((long)puVar4 + 5) << 8 |
             (uint)*(byte *)((long)puVar4 + 6);
    uVar3 = uVar10 + uVar19;
    uVar11 = 1;
    uVar7 = (uint)(byte)puVar12[1] << 0x10 | (uint)*(byte *)((long)puVar12 + 5) << 8 |
            (uint)*(byte *)((long)puVar12 + 6);
    iVar9 = 0;
    puVar4 = puVar4 + 2;
    while( true ) {
      while (uVar7 <= uVar3) {
        if (uVar7 < uVar10) {
          lVar14 = (long)iVar9;
          iVar9 = iVar9 + 1;
          *(uint *)(lVar6 + lVar14 * 4) = uVar7;
        }
        uVar11 = uVar11 + 1;
        if (uVar18 < uVar11) {
          if (uVar20 <= uVar8) {
            puVar12 = (uint *)(lVar6 + (long)iVar9 * 4);
            do {
              *puVar12 = uVar10;
              puVar12 = puVar12 + 1;
              bVar21 = uVar3 != uVar10;
              uVar10 = uVar10 + 1;
            } while (bVar21);
            iVar9 = iVar9 + 1 + uVar19;
            if (uVar20 < uVar8) {
              puVar12 = puVar4;
              do {
                puVar17 = puVar12 + 1;
                bVar2 = *(byte *)((long)puVar12 + 3);
                uVar3 = (uint)(byte)*puVar12 << 0x10 | (uint)*(byte *)((long)puVar12 + 1) << 8 |
                        (uint)*(byte *)((long)puVar12 + 2);
                puVar12 = (uint *)(lVar6 + (long)iVar9 * 4);
                iVar1 = uVar3 + 1;
                do {
                  *puVar12 = uVar3;
                  uVar3 = uVar3 + 1;
                  puVar12 = puVar12 + 1;
                } while (uVar3 != iVar1 + (uint)bVar2);
                iVar9 = iVar9 + 1 + (uint)bVar2;
                puVar12 = puVar17;
              } while (puVar17 != puVar4 + (ulong)((uVar8 - 1) - uVar20) + 1);
            }
          }
          goto LAB_0010b785;
        }
        uVar7 = (uint)*pbVar5 << 0x10 | (uint)pbVar5[1] << 8 | (uint)pbVar5[2];
        pbVar5 = pbVar5 + 5;
      }
      puVar12 = (uint *)(lVar6 + (long)iVar9 * 4);
      do {
        *puVar12 = uVar10;
        puVar12 = puVar12 + 1;
        bVar21 = uVar3 != uVar10;
        uVar10 = uVar10 + 1;
      } while (bVar21);
      uVar20 = uVar20 + 1;
      iVar1 = iVar9 + 1 + uVar19;
      iVar9 = iVar1;
      if (uVar8 < uVar20) break;
      uVar19 = (uint)*(byte *)((long)puVar4 + 3);
      uVar10 = (uint)(byte)*puVar4 << 0x10 | (uint)*(byte *)((long)puVar4 + 1) << 8 |
               (uint)*(byte *)((long)puVar4 + 2);
      uVar3 = uVar10 + uVar19;
      puVar4 = puVar4 + 1;
    }
    if (uVar11 <= uVar18) {
      iVar9 = iVar1 + 1;
      *(uint *)(lVar6 + (long)iVar1 * 4) = uVar7;
      if (uVar11 < uVar18) {
        puVar4 = (uint *)(lVar6 + 4 + (long)iVar1 * 4);
        pbVar15 = pbVar5;
        do {
          pbVar16 = pbVar15 + 5;
          *puVar4 = (uint)*pbVar15 << 0x10 | (uint)pbVar15[1] << 8 | (uint)pbVar15[2];
          puVar4 = puVar4 + 1;
          pbVar15 = pbVar16;
        } while (pbVar16 != pbVar5 + (ulong)((uVar18 - 1) - uVar11) * 5 + 5);
        iVar9 = (uVar18 - uVar11) + iVar9;
      }
    }
LAB_0010b785:
    *(undefined4 *)(lVar6 + (long)iVar9 * 4) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
LAB_0010b8b7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint * tt_cmap14_char_variants(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  puVar4 = *(uint **)(param_1 + 0x38);
  local_44 = 0;
  iVar3 = (int)*(undefined8 *)(param_1 + 0x28);
  uVar10 = iVar3 + 1;
  if (*(uint *)(param_1 + 0x30) < uVar10) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    puVar4 = (uint *)ft_mem_qrealloc(param_2,4,*(uint *)(param_1 + 0x30),uVar10,puVar4,&local_44);
    *(uint **)(param_1 + 0x38) = puVar4;
    if (local_44 != 0) {
      puVar4 = (uint *)0x0;
      goto LAB_0010b993;
    }
    *(uint *)(param_1 + 0x30) = uVar10;
  }
  puVar6 = puVar4;
  if (iVar3 != 0) {
    pbVar8 = (byte *)(lVar2 + (ulong)(iVar3 - 1) * 0xb + 0x15);
    puVar5 = puVar4;
    pbVar11 = (byte *)(lVar2 + 10);
    do {
      while( true ) {
        uVar10 = *(uint *)(pbVar11 + 3);
        uVar1 = *(uint *)(pbVar11 + 7);
        pbVar12 = pbVar11 + 0xb;
        uVar7 = (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                       uVar10 << 0x18);
        uVar9 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18);
        if (((uVar7 == 0) ||
            (iVar3 = tt_cmap14_char_map_def_binary(uVar7 + *(long *)(param_1 + 0x18),param_3),
            iVar3 == 0)) &&
           ((uVar9 == 0 ||
            (iVar3 = tt_cmap14_char_map_nondef_binary(*(long *)(param_1 + 0x18) + uVar9,param_3),
            iVar3 == 0)))) break;
        *puVar5 = (uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8 | (uint)pbVar11[2];
        puVar6 = puVar5 + 1;
        puVar5 = puVar5 + 1;
        pbVar11 = pbVar12;
        if (pbVar8 == pbVar12) goto LAB_0010b98d;
      }
      puVar6 = puVar5;
      pbVar11 = pbVar12;
    } while (pbVar8 != pbVar12);
  }
LAB_0010b98d:
  *puVar6 = 0;
LAB_0010b993:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



int reconstruct_font(long param_1,ulong param_2,long *param_3,long param_4,long *param_5,
                    ulong *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ushort uVar8;
  ushort uVar9;
  byte bVar10;
  ushort uVar11;
  short sVar12;
  undefined2 uVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined2 *puVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined1 *puVar25;
  ulong uVar26;
  uint *puVar27;
  undefined1 *puVar28;
  byte bVar29;
  uint uVar30;
  int iVar31;
  byte *pbVar32;
  byte *pbVar33;
  undefined1 *puVar34;
  long *plVar35;
  long *plVar36;
  char cVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  ushort *puVar41;
  char cVar42;
  undefined1 uVar43;
  ulong uVar44;
  uint *puVar45;
  ulong uVar46;
  ulong uVar47;
  byte bVar48;
  uint uVar49;
  byte bVar50;
  int iVar51;
  undefined2 *puVar52;
  ulong uVar53;
  uint uVar54;
  long lVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_1d8;
  long local_1c8;
  long *local_1b0;
  ushort *local_180;
  long local_170;
  ulong local_168;
  ulong local_158;
  uint *local_150;
  long local_148;
  ushort *local_140;
  ulong local_120;
  int local_118;
  long local_108;
  ushort local_fe;
  uint local_fc;
  long local_f8;
  bool local_f0;
  uint local_ec;
  int local_9c;
  int local_98;
  int local_94;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong uStack_50;
  byte local_48 [8];
  long local_40;
  
  uVar22 = *param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = *(ushort *)(param_4 + 0x18);
  local_9c = 0;
  local_80 = 0xc;
  local_88 = (ulong)uVar11 * 0x10 + 0xc;
  local_1d8 = *param_5;
  uVar30 = (uint)uVar11;
  local_90 = uVar22;
  if (uVar30 == 0) {
    *(undefined1 (*) [16])(param_5 + 3) = (undefined1  [16])0x0;
    local_1b0 = (long *)ft_mem_alloc(param_8,0x50,&local_9c);
    if (local_9c == 0) {
      FT_Stream_OpenMemory(local_1b0,param_1,param_2);
      goto LAB_0010c3f3;
    }
  }
  else {
    plVar20 = param_3;
    do {
      lVar38 = *plVar20;
      if (*(int *)(lVar38 + 4) == 0x676c7966) {
        cVar42 = '\0';
        goto LAB_0010bafb;
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != param_3 + (ulong)(uVar11 - 1) + 1);
    cVar42 = '\x01';
    lVar38 = 0;
LAB_0010bafb:
    param_5[3] = lVar38;
    plVar20 = param_3;
    do {
      lVar23 = *plVar20;
      if (*(int *)(lVar23 + 4) == 0x6c6f6361) {
        cVar37 = '\0';
        goto LAB_0010bb2b;
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != param_3 + (ulong)(uVar11 - 1) + 1);
    cVar37 = '\x01';
    lVar23 = 0;
LAB_0010bb2b:
    param_5[4] = lVar23;
    iVar15 = 8;
    if (cVar37 != cVar42) goto LAB_0010bf6c;
    if (lVar38 == 0) {
      local_1b0 = (long *)ft_mem_alloc(param_8,0x50,&local_9c);
      if (local_9c == 0) {
        FT_Stream_OpenMemory(local_1b0,param_1,param_2);
LAB_0010bb9b:
        local_1c8 = 0;
        local_fe = 0;
        local_158 = 0;
        bVar56 = false;
LAB_0010bbe8:
        lVar23 = param_3[local_1c8];
        uVar5 = *(ulong *)(lVar23 + 8);
        lVar38 = *(long *)(lVar23 + 0x20);
        uVar1 = *(uint *)(lVar23 + 4);
        uVar21 = *(ulong *)(lVar23 + 0x18);
        uVar44 = *(ulong *)(lVar23 + 0x28);
        uVar26 = *(ulong *)(lVar23 + 0x30);
        local_9c = FT_Stream_Seek(local_1b0,lVar38);
        uVar53 = local_88;
        uVar22 = local_90;
        if (local_9c == 0) {
          if (param_2 < lVar38 + uVar44) goto LAB_0010bf35;
          if (uVar1 == 0x68686561) {
            local_60 = (ulong)local_60._4_4_ << 0x20;
            iVar15 = FT_Stream_Skip(local_1b0,0x22);
            local_60 = CONCAT44(local_60._4_4_,iVar15);
            if (iVar15 != 0) goto LAB_0010c08c;
            local_fe = FT_Stream_ReadUShort(local_1b0,&local_60);
            if (((int)local_60 != 0) ||
               (*(ushort *)((long)param_5 + 10) = local_fe, (uVar21 & 0x100) != 0))
            goto LAB_0010c08c;
          }
          else {
            *(ushort *)((long)param_5 + 10) = local_fe;
            if ((uVar21 & 0x100) != 0) {
              if (uVar1 == 0x676c7966) {
                local_98 = 0;
                local_78 = local_90;
                local_f8 = FT_Stream_Pos(local_1b0);
                local_70 = uVar53;
                plVar20 = (long *)ft_mem_qrealloc(param_8,0x18,0,7,0,&local_98);
                if ((((local_98 != 0) || (local_98 = FT_Stream_Skip(local_1b0,2), local_98 != 0)) ||
                    (uVar11 = FT_Stream_ReadUShort(local_1b0,&local_98), local_98 != 0)) ||
                   ((uVar14 = FT_Stream_ReadUShort(local_1b0,&local_98), local_98 != 0 ||
                    (sVar12 = FT_Stream_ReadUShort(local_1b0,&local_98), local_98 != 0)))) {
                  local_180 = (ushort *)0x0;
                  local_148 = 0;
                  goto LAB_0010c305;
                }
                uVar21 = (ulong)uVar14;
                *(ushort *)(param_5 + 1) = uVar14;
                lVar38 = (-(ulong)(sVar12 == 0) & 0xfffffffffffffffe) + 4;
                if (((uVar21 + 1) * lVar38 - *(long *)(param_5[4] + 8) != 0) ||
                   (*(ulong *)(param_5[3] + 0x10) < 0x24)) {
LAB_0010cdb4:
                  local_150 = (uint *)0x0;
                  local_168 = 0;
                  local_180 = (ushort *)0x0;
                  local_140 = (ushort *)0x0;
                  local_148 = 0;
                  goto LAB_0010cde4;
                }
                uVar17 = 0x24;
                plVar35 = plVar20;
                do {
                  uVar16 = FT_Stream_ReadULong();
                  if (local_98 != 0) {
                    local_168 = 0;
                    local_180 = (ushort *)0x0;
                    local_148 = 0;
                    goto LAB_0010cf20;
                  }
                  lVar23 = *(long *)(param_5[3] + 0x10);
                  if (lVar23 - (ulong)uVar17 < (ulong)uVar16) {
                    local_168 = 0;
                    local_180 = (ushort *)0x0;
                    local_148 = 0;
                    goto LAB_0010cf59;
                  }
                  lVar24 = (ulong)uVar17 + local_f8;
                  plVar35[2] = (ulong)uVar16;
                  plVar36 = plVar35 + 3;
                  uVar17 = uVar17 + uVar16;
                  *plVar35 = lVar24;
                  plVar35[1] = lVar24;
                  plVar35 = plVar36;
                } while (plVar36 != plVar20 + 0x15);
                if ((uVar11 & 1) == 0) {
                  local_f8 = 0;
                }
                else {
                  if (lVar23 - (ulong)uVar17 < (ulong)(uVar14 + 7 >> 3)) goto LAB_0010cdb4;
                  local_f8 = local_f8 + (ulong)uVar17;
                }
                local_fc = (uint)uVar14;
                uVar44 = (ulong)(int)(local_fc + 1);
                local_148 = ft_mem_qrealloc(param_8,8,0,uVar44,0,&local_98);
                local_180 = (ushort *)0x0;
                if (local_98 != 0) {
LAB_0010c305:
                  local_150 = (uint *)0x0;
                  local_168 = 0;
                  local_140 = (ushort *)0x0;
                  local_90 = uVar22;
                  goto LAB_0010c320;
                }
                plVar20[0x10] = (ulong)((local_fc + 0x1f >> 5) << 2) + plVar20[0x10];
                local_180 = (ushort *)ft_mem_qalloc(param_8,0x1400,&local_98);
                if (local_98 != 0) goto LAB_0010c305;
                lVar23 = ft_mem_qrealloc(param_8,2,0,uVar21,0,&local_98);
                param_5[2] = lVar23;
                if (local_98 != 0) goto LAB_0010c305;
                local_120 = 0x1400;
                local_168 = 0;
                for (local_108 = 0; (uint)local_108 < local_fc; local_108 = local_108 + 1) {
                  local_98 = FT_Stream_Seek(local_1b0);
                  if ((local_98 != 0) || (bVar10 = FT_Stream_ReadByte(local_1b0), local_98 != 0))
                  goto LAB_0010cf20;
                  uVar16 = 0x80 >> ((byte)local_108 & 7);
                  uVar17 = bVar10 & uVar16;
                  local_98 = FT_Stream_Seek(local_1b0);
                  if ((local_98 != 0) || (uVar11 = FT_Stream_ReadUShort(), local_98 != 0))
                  goto LAB_0010cf20;
                  plVar20[1] = plVar20[1] + 2;
                  if (uVar11 == 0xffff) {
                    local_68 = local_68 & 0xffffffffffff0000;
                    if (uVar17 == 0) goto LAB_0010d9f3;
                    lVar23 = plVar20[0xd];
                    local_60 = local_60 & 0xffffffff00000000;
                    iVar15 = FT_Stream_Seek(local_1b0,lVar23);
                    local_60 = CONCAT44(local_60._4_4_,iVar15);
                    if (iVar15 != 0) goto LAB_0010d9f3;
                    uVar22 = 0x20;
                    uVar17 = 0;
                    while ((uVar22 & 0x20) != 0) {
                      uVar22 = FT_Stream_ReadUShort(local_1b0,&local_60);
                      if ((int)local_60 != 0) goto LAB_0010d9f3;
                      uVar17 = uVar17 | (uint)(uVar22 >> 8) & 1;
                      uVar26 = -(ulong)((uVar22 & 1) == 0) & 0xfffffffffffffffe;
                      lVar24 = uVar26 + 6;
                      if ((uVar22 & 8) == 0) {
                        if ((uVar22 & 0x40) == 0) {
                          if ((uVar22 & 0x80) != 0) {
                            lVar24 = uVar26 + 0xe;
                          }
                        }
                        else {
                          lVar24 = uVar26 + 10;
                        }
                      }
                      else {
                        lVar24 = uVar26 + 8;
                      }
                      iVar15 = FT_Stream_Skip(local_1b0,lVar24);
                      uVar22 = uVar22 & 0xffffffff;
                      local_60 = CONCAT44(local_60._4_4_,iVar15);
                      if (iVar15 != 0) goto LAB_0010d9f3;
                    }
                    lVar24 = FT_Stream_Pos(local_1b0);
                    lVar24 = lVar24 - lVar23;
                    if ((int)local_60 != 0) goto LAB_0010d9f3;
                    if ((char)uVar17 != '\0') {
                      local_98 = FT_Stream_Seek(local_1b0,plVar20[10]);
                      if ((local_98 != 0) ||
                         (local_98 = Read255UShort(local_1b0,&local_68), local_98 != 0))
                      goto LAB_0010d9f3;
                      lVar23 = FT_Stream_Pos(local_1b0);
                      plVar20[10] = lVar23;
                    }
                    uVar11 = (ushort)local_68 << 8;
                    uVar14 = (ushort)local_68 >> 8;
                    uVar22 = local_68 & 0xffff;
                    local_150 = (uint *)(uVar22 + 0xc + lVar24);
                    if (local_120 < local_150) {
                      local_180 = (ushort *)
                                  ft_mem_qrealloc(param_8,1,local_120,local_150,local_180,&local_98)
                      ;
                      if (local_98 != 0) goto LAB_0010d9f3;
                    }
                    else {
                      local_150 = (uint *)local_120;
                    }
                    *local_180 = 0xffff;
                    local_98 = FT_Stream_Seek(local_1b0,plVar20[0x10]);
                    if ((((local_98 != 0) ||
                         (uVar13 = FT_Stream_ReadUShort(local_1b0,&local_98), local_98 != 0)) ||
                        (local_98 = FT_Stream_Seek(local_1b0,plVar20[0x10]), local_98 != 0)) ||
                       (local_98 = FT_Stream_Read(local_1b0,local_180 + 1,8), local_98 != 0))
                    goto LAB_0010d9f3;
                    plVar20[0x10] = plVar20[0x10] + 8;
                    local_98 = FT_Stream_Seek(local_1b0,plVar20[0xd]);
                    if ((local_98 != 0) ||
                       (local_98 = FT_Stream_Read(local_1b0,local_180 + 5,lVar24), local_98 != 0))
                    goto LAB_0010d9f3;
                    plVar20[0xd] = plVar20[0xd] + lVar24;
                    uVar26 = lVar24 + 10;
                    if ((char)uVar17 != '\0') {
                      *(ushort *)((long)local_180 + lVar24 + 10) = uVar11 | uVar14;
                      local_98 = FT_Stream_Seek(local_1b0,plVar20[0x13]);
                      if ((local_98 != 0) ||
                         (local_98 = FT_Stream_Read(local_1b0,(long)local_180 + lVar24 + 0xc,uVar22)
                         , local_98 != 0)) goto LAB_0010d9f3;
                      plVar20[0x13] = plVar20[0x13] + uVar22;
                      uVar26 = uVar22 + lVar24 + 0xc;
                    }
                    local_120 = (ulong)local_150;
                  }
                  else {
                    if (uVar11 != 0) {
                      local_f0 = false;
                      if (local_f8 != 0) {
                        local_98 = FT_Stream_Seek(local_1b0,(ulong)((uint)local_108 >> 3) + local_f8
                                                 );
                        if ((local_98 != 0) ||
                           (uVar49 = FT_Stream_ReadByte(local_1b0,&local_98), local_98 != 0))
                        goto LAB_0010d9f3;
                        local_f0 = (uVar49 & 0xff & uVar16) != 0;
                      }
                      local_140 = (ushort *)ft_mem_qrealloc(param_8,2,0,(ulong)uVar11,0,&local_98);
                      if ((local_98 == 0) && (local_98 = FT_Stream_Seek(local_1b0), local_98 == 0))
                      {
                        uVar22 = 0;
                        puVar41 = local_140;
                        do {
                          local_98 = 0;
                          local_98 = Read255UShort(local_1b0);
                          if (local_98 != 0) goto LAB_0010c8be;
                          uVar26 = local_68 & 0xffff;
                          *puVar41 = (ushort)local_68;
                          bVar56 = CARRY8(uVar26,uVar22);
                          uVar22 = uVar26 + uVar22;
                          uVar46 = (ulong)bVar56;
                          if (bVar56) goto LAB_0010c8be;
                          puVar41 = puVar41 + 1;
                        } while (local_140 + uVar11 != puVar41);
                        lVar23 = FT_Stream_Pos(local_1b0);
                        plVar20[4] = lVar23;
                        if (uVar22 <= (ulong)plVar20[8]) {
                          lVar24 = plVar20[7];
                          lVar55 = plVar20[10];
                          lVar7 = *local_1b0;
                          lVar23 = lVar7 + lVar55;
                          if ((ulong)(lVar55 - plVar20[9]) <= (ulong)plVar20[0xb]) {
                            uVar26 = (plVar20[0xb] + plVar20[9]) - lVar55;
                            local_150 = (uint *)ft_mem_qrealloc(param_8,0xc,0);
                            if ((local_98 == 0) && (uVar22 <= uVar26)) {
                              uVar16 = 0;
                              uVar49 = 0;
                              local_ec = 0;
                              uVar47 = 0;
                              while (uVar40 = (ulong)local_ec, uVar40 < uVar22) {
                                bVar10 = *(byte *)(lVar24 + lVar7 + uVar40);
                                uVar18 = bVar10 & 0x7f;
                                bVar29 = (byte)uVar18;
                                if (bVar29 < 0x54) {
                                  uVar39 = uVar47 + 1;
                                  if ((0xfffffffffffffffe < uVar47) || (uVar26 < uVar39))
                                  goto LAB_0010d0e9;
                                  bVar48 = *(byte *)(lVar23 + uVar47);
                                  bVar50 = bVar10 & 1;
                                  if (9 < bVar29) {
                                    if (bVar29 < 0x14) {
                                      iVar15 = (uint)bVar48 + (uVar18 - 10 & 0xe) * 0x80;
                                      if (bVar50 == 0) {
                                        iVar15 = -iVar15;
                                        iVar31 = 0;
                                        goto LAB_0010d254;
                                      }
                                      iVar31 = 0;
                                    }
                                    else {
                                      iVar15 = (uVar18 - 0x14 & 0x30) + 1 + ((int)(uint)bVar48 >> 4)
                                      ;
                                      if (bVar50 == 0) {
                                        iVar15 = -iVar15;
                                      }
                                      iVar31 = (uVar18 - 0x14 & 0xc) * 4 + 1 + (bVar48 & 0xf);
                                      if ((bVar10 & 2) == 0) {
                                        iVar31 = -iVar31;
                                      }
                                    }
                                    goto LAB_0010d611;
                                  }
                                  iVar31 = (bVar10 & 0xe) * 0x80 + (uint)bVar48;
                                  iVar15 = 0;
                                  if (bVar50 == 0) {
                                    iVar31 = -iVar31;
                                  }
LAB_0010d254:
                                  if ((int)uVar49 < 1) goto LAB_0010d646;
                                }
                                else {
                                  if (bVar29 < 0x78) {
                                    uVar39 = uVar47 + 2;
                                    if ((0xfffffffffffffffd < uVar47) || (uVar26 < uVar39))
                                    goto LAB_0010d0e9;
                                    iVar15 = ((int)(uVar18 - 0x54) / 0xc) * 0x100 + 1 +
                                             (uint)*(byte *)(lVar23 + uVar47);
                                    if ((bVar10 & 1) == 0) {
                                      iVar15 = -iVar15;
                                    }
                                    iVar31 = ((int)(uVar18 - 0x54) % 0xc >> 2) * 0x100 + 1 +
                                             (uint)*(byte *)(lVar23 + 1 + uVar47);
                                    if ((bVar10 & 2) == 0) {
                                      iVar31 = -iVar31;
                                    }
                                  }
                                  else if (bVar29 < 0x7c) {
                                    uVar39 = uVar47 + 3;
                                    if ((uVar26 < uVar39) || (0xfffffffffffffffc < uVar47))
                                    goto LAB_0010d0e9;
                                    bVar48 = *(byte *)(lVar23 + 1 + uVar47);
                                    iVar15 = (uint)*(byte *)(lVar23 + uVar47) * 0x10 +
                                             ((int)(uint)bVar48 >> 4);
                                    if ((bVar10 & 1) == 0) {
                                      iVar15 = -iVar15;
                                    }
                                    iVar31 = (bVar48 & 0xf) * 0x100 +
                                             (uint)*(byte *)(lVar23 + 2 + uVar47);
                                    if (bVar29 >> 1 == 0x3c) {
                                      iVar31 = -iVar31;
                                    }
                                  }
                                  else {
                                    uVar39 = uVar47 + 4;
                                    if ((0xfffffffffffffffb < uVar47) || (uVar26 < uVar39))
                                    goto LAB_0010d0e9;
                                    iVar15 = (uint)*(byte *)(lVar23 + uVar47) * 0x100 +
                                             (uint)*(byte *)(lVar23 + 1 + uVar47);
                                    if ((bVar10 & 1) == 0) {
                                      iVar15 = -iVar15;
                                    }
                                    iVar31 = (uint)*(byte *)(lVar23 + 2 + uVar47) * 0x100 +
                                             (uint)*(byte *)(lVar23 + 3 + uVar47);
                                    if (bVar29 >> 1 == 0x3e) {
                                      iVar31 = -iVar31;
                                    }
                                  }
LAB_0010d611:
                                  if ((int)uVar49 < 1) {
LAB_0010d646:
                                    if ((uVar49 != 0) && (iVar15 < (int)(-0x80000000 - uVar49)))
                                    goto LAB_0010d0e9;
                                  }
                                  else if ((int)(0x7fffffff - uVar49) < iVar15) goto LAB_0010d0e9;
                                }
                                uVar49 = uVar49 + iVar15;
                                if ((int)uVar16 < 1) {
                                  if ((uVar16 != 0) && (iVar31 < (int)(-0x80000000 - uVar16)))
                                  goto LAB_0010d0e9;
                                }
                                else if ((int)(0x7fffffff - uVar16) < iVar31) goto LAB_0010d0e9;
                                uVar16 = uVar16 + iVar31;
                                local_ec = local_ec + 1;
                                puVar45 = local_150 + uVar40 * 3;
                                *puVar45 = uVar49;
                                puVar45[1] = uVar16;
                                *(byte *)(puVar45 + 2) = (byte)~bVar10 >> 7;
                                uVar47 = uVar39;
                              }
                              plVar20[7] = plVar20[7] + uVar22;
                              plVar20[10] = plVar20[10] + uVar47;
                              local_98 = FT_Stream_Seek(local_1b0);
                              if ((local_98 == 0) &&
                                 (local_98 = Read255UShort(local_1b0,&local_60), local_98 == 0)) {
                                lVar23 = FT_Stream_Pos(local_1b0);
                                plVar20[10] = lVar23;
                                if (uVar22 < 0x8000000) {
                                  uVar9 = (ushort)local_60;
                                  uVar47 = local_60 & 0xffff;
                                  iVar15 = uVar11 + 0xc + (uint)uVar11;
                                  uVar14 = (ushort)local_60 << 8;
                                  uVar8 = (ushort)local_60 >> 8;
                                  uVar26 = uVar22 * 5 + (long)iVar15 + uVar47;
                                  if ((uVar26 <= local_120) ||
                                     (local_180 = (ushort *)
                                                  ft_mem_qrealloc(param_8,1,local_120,uVar26,
                                                                  local_180), local_120 = uVar26,
                                     local_98 == 0)) {
                                    *local_180 = uVar11 << 8 | uVar11 >> 8;
                                    if (uVar17 == 0) {
                                      uVar16 = 0;
                                      uVar17 = 0;
                                      if (uVar22 != 0) {
                                        uVar17 = *local_150;
                                        uVar16 = local_150[1];
                                      }
                                      uVar39 = 0;
                                      uVar40 = (ulong)uVar16;
                                      uVar26 = (ulong)uVar17;
                                      puVar45 = local_150;
                                      while( true ) {
                                        puVar27 = puVar45 + 3;
                                        uVar39 = uVar39 + 1;
                                        if (uVar22 <= uVar39) break;
                                        uVar49 = *puVar27;
                                        uVar18 = puVar45[4];
                                        if ((int)uVar49 < (int)uVar17) {
                                          uVar17 = uVar49;
                                        }
                                        if ((int)uVar18 < (int)uVar16) {
                                          uVar16 = uVar18;
                                        }
                                        if ((int)uVar26 < (int)uVar49) {
                                          uVar26 = (ulong)uVar49;
                                        }
                                        puVar45 = puVar27;
                                        if ((int)uVar40 < (int)uVar18) {
                                          uVar40 = (ulong)uVar18;
                                        }
                                      }
                                      uVar13 = (undefined2)uVar17;
                                      *(ulong *)(local_180 + 1) =
                                           (((((((uVar40 & 0xff) << 8 | uVar40 >> 8 & 0xff) << 8 |
                                               uVar26 & 0xff) << 8 | uVar26 >> 8 & 0xff) << 8 |
                                             (ulong)(uVar16 & 0xff)) << 8 |
                                            (ulong)(uVar16 >> 8 & 0xff)) << 8 |
                                           (ulong)(uVar17 & 0xff)) << 8 | (ulong)(byte)(uVar17 >> 8)
                                      ;
                                    }
                                    else {
                                      local_98 = FT_Stream_Seek(local_1b0,plVar20[0x10]);
                                      if ((((local_98 != 0) ||
                                           (uVar13 = FT_Stream_ReadUShort(local_1b0,&local_98),
                                           local_98 != 0)) ||
                                          (local_98 = FT_Stream_Seek(local_1b0,plVar20[0x10]),
                                          local_98 != 0)) ||
                                         (local_98 = FT_Stream_Read(local_1b0,local_180 + 1,8),
                                         local_98 != 0)) goto LAB_0010d0e9;
                                      plVar20[0x10] = plVar20[0x10] + 8;
                                    }
                                    uVar17 = 0;
                                    iVar31 = *local_140 - 1;
                                    lVar23 = 10;
                                    puVar41 = local_180 + 5;
                                    while( true ) {
                                      *(char *)puVar41 = (char)((uint)iVar31 >> 8);
                                      uVar17 = uVar17 + 1;
                                      *(char *)((long)puVar41 + 1) = (char)iVar31;
                                      if (uVar11 <= uVar17) break;
                                      iVar31 = iVar31 + (uint)*(ushort *)
                                                               ((long)local_140 + lVar23 + -8);
                                      lVar23 = lVar23 + 2;
                                      puVar41 = puVar41 + 1;
                                      if (0xffff < iVar31) goto LAB_0010d0e9;
                                    }
                                    puVar41[1] = uVar14 | uVar8;
                                    local_98 = FT_Stream_Seek(local_1b0,plVar20[0x13]);
                                    if ((local_98 == 0) &&
                                       (local_98 = FT_Stream_Read(local_1b0,
                                                                  (long)local_180 + lVar23 + 4,
                                                                  uVar47), local_98 == 0)) {
                                      local_118 = (int)uVar22;
                                      uVar18 = 0;
                                      plVar20[0x13] = plVar20[0x13] + uVar47;
                                      uVar54 = 0;
                                      cVar42 = '\0';
                                      uVar49 = (uint)uVar9 + iVar15;
                                      puVar45 = local_150;
                                      uVar17 = 0;
                                      uVar16 = 0;
                                      bVar10 = 0xff;
                                      for (iVar15 = 0; iVar15 != local_118; iVar15 = iVar15 + 1) {
                                        uVar2 = puVar45[1];
                                        uVar3 = *puVar45;
                                        iVar31 = uVar2 - uVar16;
                                        bVar29 = (iVar15 == 0 & local_f0) << 6 |
                                                 (char)puVar45[2] != '\0';
                                        iVar51 = uVar3 - uVar17;
                                        if (iVar51 == 0) {
                                          bVar29 = bVar29 | 0x10;
                                        }
                                        else if (iVar51 + 0xffU < 0x1ff) {
                                          bVar48 = 0x12;
                                          if (iVar51 < 1) {
                                            bVar48 = 2;
                                          }
                                          uVar18 = uVar18 + 1;
                                          bVar29 = bVar29 | bVar48;
                                        }
                                        else {
                                          uVar18 = uVar18 + 2;
                                        }
                                        if (iVar31 == 0) {
                                          bVar29 = bVar29 | 0x20;
                                        }
                                        else if (iVar31 + 0xffU < 0x1ff) {
                                          bVar48 = 0x24;
                                          if (iVar31 < 1) {
                                            bVar48 = 4;
                                          }
                                          uVar54 = uVar54 + 1;
                                          bVar29 = bVar29 | bVar48;
                                        }
                                        else {
                                          uVar54 = uVar54 + 2;
                                        }
                                        if ((bVar10 == bVar29) && (cVar42 != -1)) {
                                          cVar42 = cVar42 + '\x01';
                                          pbVar32 = (byte *)((long)local_180 + (ulong)(uVar49 - 1));
                                          *pbVar32 = *pbVar32 | 8;
                                        }
                                        else {
                                          if (cVar42 != '\0') {
                                            if (local_120 <= uVar49) goto LAB_0010d0e9;
                                            *(char *)((long)local_180 + (ulong)uVar49) = cVar42;
                                            uVar49 = uVar49 + 1;
                                          }
                                          if (local_120 <= uVar49) goto LAB_0010d0e9;
                                          *(byte *)((long)local_180 + (ulong)uVar49) = bVar29;
                                          uVar49 = uVar49 + 1;
                                          cVar42 = '\0';
                                        }
                                        puVar45 = puVar45 + 3;
                                        uVar17 = uVar3;
                                        uVar16 = uVar2;
                                        bVar10 = bVar29;
                                      }
                                      if (cVar42 != '\0') {
                                        if (local_120 <= uVar49) goto LAB_0010d0e9;
                                        *(char *)((long)local_180 + (ulong)uVar49) = cVar42;
                                        uVar49 = uVar49 + 1;
                                      }
                                      if (((!CARRY4(uVar54,uVar18)) &&
                                          (!CARRY4(uVar54 + uVar18,uVar49))) &&
                                         (uVar54 + uVar18 + uVar49 <= local_120)) {
                                        uVar26 = (ulong)(uVar18 + uVar49);
                                        iVar31 = 0;
                                        iVar15 = 0;
                                        for (; uVar22 * 0xc - uVar46 != 0; uVar46 = uVar46 + 0xc) {
                                          iVar51 = *(int *)((long)local_150 + uVar46 + 4);
                                          iVar4 = *(int *)((long)local_150 + uVar46);
                                          iVar31 = iVar51 - iVar31;
                                          iVar15 = iVar4 - iVar15;
                                          if (iVar15 != 0) {
                                            uVar47 = (ulong)uVar49;
                                            if (iVar15 + 0xffU < 0x1ff) {
                                              if (iVar15 < 0) {
                                                iVar15 = -iVar15;
                                              }
                                              *(char *)(uVar47 + (long)local_180) = (char)iVar15;
                                              uVar49 = uVar49 + 1;
                                            }
                                            else {
                                              uVar49 = uVar49 + 2;
                                              *(ushort *)(uVar47 + (long)local_180) =
                                                   (ushort)iVar15 << 8 | (ushort)iVar15 >> 8;
                                            }
                                          }
                                          if (iVar31 != 0) {
                                            puVar41 = (ushort *)(uVar26 + (long)local_180);
                                            if (iVar31 + 0xffU < 0x1ff) {
                                              if (iVar31 < 0) {
                                                iVar31 = -iVar31;
                                              }
                                              *(char *)puVar41 = (char)iVar31;
                                              uVar26 = (ulong)((int)uVar26 + 1);
                                            }
                                            else {
                                              uVar26 = (ulong)((int)uVar26 + 2);
                                              *puVar41 = (ushort)iVar31 << 8 | (ushort)iVar31 >> 8;
                                            }
                                          }
                                          iVar31 = iVar51;
                                          iVar15 = iVar4;
                                        }
                                        ft_mem_free(param_8,local_150);
                                        ft_mem_free(param_8,local_140);
                                        goto LAB_0010d91f;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_0010d0e9;
                          }
                        }
                      }
LAB_0010c8be:
                      local_150 = (uint *)0x0;
                      goto LAB_0010d0e9;
                    }
                    if (uVar17 != 0) goto LAB_0010cf59;
                    uVar26 = 0;
                    uVar13 = 0;
                  }
LAB_0010d91f:
                  *(ulong *)(local_148 + local_108 * 8) = local_70 - uVar53;
                  iVar15 = write_buf(&local_78,param_7,&local_70,local_180,uVar26,param_8);
                  if ((iVar15 != 0) ||
                     (iVar15 = pad4(&local_78,param_7,&local_70,param_8), iVar15 != 0))
                  goto LAB_0010d9f3;
                  lVar23 = compute_ULong_sum(local_180,uVar26);
                  local_168 = local_168 + lVar23;
                  *(undefined2 *)(param_5[2] + local_108 * 2) = uVar13;
                }
                lVar23 = local_70 - *(long *)(param_5[3] + 0x30);
                *(long *)(param_5[3] + 8) = lVar23;
                *(ulong *)(param_5[4] + 0x30) = local_70;
                *(long *)(local_148 + uVar21 * 8) = lVar23;
                local_60 = local_70;
                local_94 = 0;
                lVar38 = lVar38 * uVar44;
                local_68 = local_78;
                puVar25 = (undefined1 *)ft_mem_qalloc(param_8,lVar38,&local_94);
                if (local_94 == 0) {
                  uVar22 = 0;
                  puVar28 = puVar25;
                  do {
                    uVar21 = *(ulong *)(local_148 + uVar22 * 8);
                    if (sVar12 == 0) {
                      iVar15 = 9;
                      puVar34 = puVar28 + 2;
                      uVar43 = (undefined1)(uVar21 >> 1);
                    }
                    else {
                      puVar34 = puVar28 + 4;
                      *(ushort *)(puVar28 + 2) = (ushort)uVar21 << 8 | (ushort)uVar21 >> 8;
                      iVar15 = 0x18;
                      uVar43 = (undefined1)(uVar21 >> 0x10);
                    }
                    uVar22 = uVar22 + 1;
                    puVar28[1] = uVar43;
                    *puVar28 = (char)(uVar21 >> iVar15);
                    puVar28 = puVar34;
                  } while (uVar22 < uVar44);
                  local_158 = compute_ULong_sum(puVar25,lVar38);
                  iVar15 = write_buf(&local_68,param_7,&local_60,puVar25,lVar38,param_8);
                  if (iVar15 != 0) {
                    if (local_94 == 0) {
                      local_94 = 8;
                    }
                    goto LAB_0010dd88;
                  }
                  local_78 = local_68;
                  local_70 = local_60;
                  ft_mem_free(param_8,puVar25);
                }
                else {
LAB_0010dd88:
                  ft_mem_free(param_8,puVar25);
                }
                if (local_94 != 0) {
LAB_0010d9f3:
                  local_150 = (uint *)0x0;
                  local_140 = (ushort *)0x0;
LAB_0010d0e9:
                  uVar22 = local_78;
                  local_90 = local_78;
                  if (local_98 == 0) goto LAB_0010cde4;
                  goto LAB_0010c320;
                }
                local_90 = local_78;
                local_88 = local_70;
                *(ulong *)(param_5[4] + 8) = local_70 - *(long *)(param_5[4] + 0x30);
                ft_mem_free(param_8,plVar20);
                ft_mem_free(param_8,local_148);
                ft_mem_free(param_8,0);
                ft_mem_free(param_8,local_180);
                ft_mem_free(param_8,0);
                goto LAB_0010c37c;
              }
              local_168 = local_158;
              uVar53 = uVar26;
              if (uVar1 == 0x6c6f6361) goto LAB_0010bcd2;
              if (uVar1 != 0x686d7478) goto LAB_0010bf35;
              uVar11 = local_fe;
              if (!bVar56) {
                lVar38 = 0;
                local_60 = (ulong)local_60._4_4_ << 0x20;
                do {
                  lVar23 = param_3[lVar38];
                  if (*(int *)(lVar23 + 4) == 0x6d617870) goto LAB_0010bff9;
                  lVar38 = lVar38 + 1;
                } while ((int)lVar38 < (int)uVar30);
                lVar23 = 0;
LAB_0010bff9:
                lVar38 = 0;
                while (lVar24 = param_3[lVar38], *(int *)(lVar24 + 4) != 0x68656164) {
                  lVar38 = lVar38 + 1;
                  if ((int)uVar30 <= (int)lVar38) goto LAB_0010bf35;
                }
                if ((lVar23 == 0) || (param_5[4] == 0)) goto LAB_0010bf35;
                iVar15 = FT_Stream_Seek(local_1b0,*(undefined8 *)(lVar23 + 0x20));
                local_60 = CONCAT44(local_60._4_4_,iVar15);
                if (iVar15 != 0) goto LAB_0010c08c;
                iVar15 = FT_Stream_Skip(local_1b0,8);
                local_60 = CONCAT44(local_60._4_4_,iVar15);
                if (iVar15 != 0) goto LAB_0010c08c;
                uVar11 = FT_Stream_ReadUShort(local_1b0,&local_60);
                if ((int)local_60 != 0) goto LAB_0010c08c;
                uVar6 = *(undefined8 *)(lVar24 + 0x20);
                *(ushort *)(param_5 + 1) = uVar11;
                iVar15 = FT_Stream_Seek(local_1b0,uVar6);
                local_60 = CONCAT44(local_60._4_4_,iVar15);
                if (iVar15 != 0) goto LAB_0010c08c;
                iVar15 = FT_Stream_Skip(local_1b0,0x32);
                local_60 = CONCAT44(local_60._4_4_,iVar15);
                if (iVar15 != 0) goto LAB_0010c08c;
                sVar12 = FT_Stream_ReadUShort(local_1b0,&local_60);
                if ((int)local_60 != 0) goto LAB_0010c08c;
                lVar38 = ft_mem_qrealloc(param_8,2,0,(ulong)uVar11,0,&local_60);
                param_5[2] = lVar38;
                if ((int)local_60 != 0) goto LAB_0010c08c;
                local_170 = *(long *)(param_5[4] + 0x20);
                if (uVar11 != 0) {
                  lVar38 = 0;
                  do {
                    iVar15 = FT_Stream_Seek(local_1b0,local_170);
                    local_60 = CONCAT44(local_60._4_4_,iVar15);
                    if (iVar15 != 0) goto LAB_0010c08c;
                    local_170 = local_170 + (-(ulong)(sVar12 == 0) & 0xfffffffffffffffe) + 4;
                    if (sVar12 == 0) {
                      uVar14 = FT_Stream_ReadUShort();
                      if ((int)local_60 != 0) goto LAB_0010c08c;
                      uVar22 = (ulong)uVar14 * 2;
                    }
                    else {
                      uVar17 = FT_Stream_ReadULong(local_1b0,&local_60);
                      uVar22 = (ulong)uVar17;
                      if ((int)local_60 != 0) goto LAB_0010c08c;
                    }
                    iVar15 = FT_Stream_Seek(local_1b0,uVar22 + *(long *)(param_5[3] + 0x20));
                    local_60 = CONCAT44(local_60._4_4_,iVar15);
                    if (iVar15 != 0) break;
                    iVar15 = FT_Stream_Skip(local_1b0,2);
                    local_60 = CONCAT44(local_60._4_4_,iVar15);
                    if (iVar15 != 0) break;
                    uVar13 = FT_Stream_ReadUShort(local_1b0,&local_60);
                    *(undefined2 *)(param_5[2] + lVar38) = uVar13;
                    if ((int)local_60 != 0) goto LAB_0010c08c;
                    lVar38 = lVar38 + 2;
                  } while ((ulong)uVar11 * 2 != lVar38);
                }
                if ((int)local_60 != 0) goto LAB_0010c08c;
                uVar11 = *(ushort *)((long)param_5 + 10);
              }
              uVar53 = local_88;
              local_70 = local_70 & 0xffffffff00000000;
              lVar38 = param_5[2];
              uVar14 = *(ushort *)(param_5 + 1);
              local_60 = local_88;
              local_68 = local_90;
              bVar10 = FT_Stream_ReadByte(local_1b0,&local_70);
              if ((((int)local_70 == 0) && ((byte)(bVar10 - 1) < 3)) &&
                 ((ushort)(uVar11 - 1) < uVar14)) {
                uVar22 = (ulong)uVar11;
                puVar19 = (undefined2 *)ft_mem_qrealloc(param_8,2,0,uVar22,0,&local_70);
                if ((int)local_70 != 0) {
                  puVar25 = (undefined1 *)0x0;
                  lVar23 = 0;
                  goto LAB_0010c1d6;
                }
                lVar23 = ft_mem_qrealloc(param_8,2,0,uVar14,0,&local_70);
                if ((int)local_70 != 0) {
LAB_0010cb65:
                  puVar25 = (undefined1 *)0x0;
                  goto LAB_0010c1d6;
                }
                puVar52 = puVar19;
                do {
                  uVar13 = FT_Stream_ReadUShort(local_1b0,&local_70);
                  if ((int)local_70 != 0) goto LAB_0010cb65;
                  *puVar52 = uVar13;
                  puVar52 = puVar52 + 1;
                } while (puVar19 + uVar22 != puVar52);
                lVar24 = 0;
                if ((bVar10 & 1) == 0) {
                  lVar24 = 0;
                  do {
                    uVar13 = FT_Stream_ReadUShort(local_1b0,&local_70);
                    if ((int)local_70 != 0) goto LAB_0010cb65;
                    *(undefined2 *)(lVar23 + lVar24) = uVar13;
                    lVar24 = lVar24 + 2;
                  } while (uVar22 * 2 != lVar24);
                }
                else {
                  do {
                    *(undefined2 *)(lVar23 + lVar24) = *(undefined2 *)(lVar38 + lVar24);
                    lVar24 = lVar24 + 2;
                  } while (uVar22 * 2 != lVar24);
                }
                if ((uint)uVar11 < (uint)uVar14) {
                  lVar55 = uVar22 * 2;
                  lVar24 = ((ulong)((uVar14 - 1) - (uint)uVar11) + 1 + uVar22) * 2;
                  if ((bVar10 & 2) == 0) {
                    do {
                      uVar13 = FT_Stream_ReadUShort(local_1b0,&local_70);
                      if ((int)local_70 != 0) goto LAB_0010cb65;
                      *(undefined2 *)(lVar23 + lVar55) = uVar13;
                      lVar55 = lVar55 + 2;
                    } while (lVar24 != lVar55);
                  }
                  else {
                    do {
                      *(undefined2 *)(lVar23 + lVar55) = *(undefined2 *)(lVar38 + lVar55);
                      lVar55 = lVar55 + 2;
                    } while (lVar24 != lVar55);
                  }
                }
                iVar15 = ((uint)uVar11 + (uint)uVar14) * 2;
                puVar25 = (undefined1 *)ft_mem_qalloc(param_8,iVar15,&local_70);
                if ((int)local_70 != 0) goto LAB_0010c1d6;
                lVar38 = 0;
                puVar28 = puVar25;
                do {
                  puVar34 = puVar28;
                  if ((int)lVar38 < (int)(uint)uVar11) {
                    puVar34 = puVar28 + 2;
                    *puVar28 = *(undefined1 *)((long)puVar19 + lVar38 * 2 + 1);
                    puVar28[1] = (char)puVar19[lVar38];
                  }
                  *puVar34 = *(undefined1 *)(lVar23 + 1 + lVar38 * 2);
                  lVar24 = lVar38 * 2;
                  lVar38 = lVar38 + 1;
                  puVar28 = puVar34 + 2;
                  puVar34[1] = (char)*(undefined2 *)(lVar23 + lVar24);
                } while ((int)lVar38 < (int)(uint)uVar14);
                local_168 = compute_ULong_sum(puVar25,iVar15);
                iVar15 = write_buf(&local_68,param_7,&local_60,puVar25,iVar15,param_8);
                if (iVar15 != 0) goto LAB_0010c1d6;
                local_90 = local_68;
                local_88 = local_60;
                ft_mem_free(param_8,puVar19);
                ft_mem_free(param_8,lVar23);
                ft_mem_free(param_8,puVar25);
                iVar15 = (int)local_70;
                goto joined_r0x0010cd8c;
              }
              puVar25 = (undefined1 *)0x0;
              lVar23 = 0;
              puVar19 = (undefined2 *)0x0;
LAB_0010c1d6:
              ft_mem_free(param_8,puVar19);
              ft_mem_free(param_8,lVar23);
              ft_mem_free(param_8,puVar25);
              goto LAB_0010c08c;
            }
            if (uVar1 == 0x68656164) {
              if (0xb < uVar44) {
                *(undefined4 *)(param_1 + 8 + lVar38) = 0;
                goto LAB_0010bc86;
              }
              goto LAB_0010bf35;
            }
          }
LAB_0010bc86:
          uVar53 = local_88;
          lVar38 = param_1 + lVar38;
          local_168 = compute_ULong_sum(lVar38,uVar44);
          iVar15 = write_buf(&local_90,param_7,&local_88,lVar38,uVar44,param_8);
joined_r0x0010cd8c:
          if (iVar15 == 0) goto LAB_0010bcd2;
          goto LAB_0010c08c;
        }
      }
    }
    else {
      if ((((byte)((ulong)*(undefined8 *)(lVar38 + 0x18) >> 8) ^
           (byte)((ulong)*(undefined8 *)(lVar23 + 0x18) >> 8)) & 1) != 0) goto LAB_0010bf6c;
      local_1b0 = (long *)ft_mem_alloc(param_8,0x50,&local_9c);
      if (local_9c == 0) {
        FT_Stream_OpenMemory(local_1b0,param_1,param_2);
        goto LAB_0010bb9b;
      }
    }
  }
  goto LAB_0010bf48;
LAB_0010cf20:
  local_150 = (uint *)0x0;
  local_140 = (ushort *)0x0;
  local_90 = local_78;
  goto LAB_0010c320;
LAB_0010cf59:
  local_150 = (uint *)0x0;
  local_140 = (ushort *)0x0;
  uVar22 = local_78;
LAB_0010cde4:
  local_98 = 8;
  local_90 = uVar22;
LAB_0010c320:
  ft_mem_free(param_8,plVar20);
  ft_mem_free(param_8,local_148);
  ft_mem_free(param_8,local_140);
  ft_mem_free(param_8,local_180);
  ft_mem_free(param_8,local_150);
LAB_0010c37c:
  if (local_98 != 0) goto LAB_0010c08c;
  bVar56 = true;
LAB_0010bcd2:
  local_58 = (((((((local_168 & 0xff) << 8 | local_168 >> 8 & 0xff) << 8 | local_168 >> 0x10 & 0xff)
                 << 8 | local_168 >> 0x18 & 0xff) << 8 | (ulong)(uVar1 & 0xff)) << 8 |
              (ulong)(uVar1 >> 8 & 0xff)) << 8 | (ulong)(uVar1 >> 0x10 & 0xff)) << 8 |
             (ulong)(uVar1 >> 0x18);
  uStack_50 = (((((((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 8 | uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18 & 0xff) << 8 | uVar53 & 0xff) << 8 | uVar53 >> 8 & 0xff) << 8 |
              uVar53 >> 0x10 & 0xff) << 8 | uVar53 >> 0x18 & 0xff;
  write_buf(&local_90,param_7,&local_80,&local_58,0x10,param_8);
  lVar38 = 0;
  pbVar32 = (byte *)&local_58;
  do {
    pbVar33 = pbVar32 + 4;
    lVar38 = lVar38 + ((ulong)*pbVar32 << 0x18 | (ulong)pbVar32[1] << 0x10 | (ulong)pbVar32[3] |
                      (ulong)pbVar32[2] << 8);
    pbVar32 = pbVar33;
  } while (local_48 != pbVar33);
  local_1d8 = local_1d8 + local_168 + lVar38;
  iVar15 = pad4(&local_90,param_7,&local_88,param_8);
  if ((iVar15 != 0) || (local_88 < uVar5 + uVar53)) goto LAB_0010c08c;
  local_1c8 = local_1c8 + 1;
  if ((int)uVar30 <= (int)local_1c8) goto code_r0x0010bea3;
  goto LAB_0010bbe8;
code_r0x0010bea3:
  plVar20 = param_3 + (ulong)(uVar30 - 1) + 1;
  do {
    lVar38 = *param_3;
    if (*(int *)(lVar38 + 4) == 0x68656164) {
      uVar22 = *(ulong *)(lVar38 + 8);
      param_5[5] = lVar38;
      if (uVar22 < 0xc) goto LAB_0010c08c;
      uVar30 = 0xb1b0afba - (int)local_1d8;
      *(uint *)(local_90 + 8 + *(long *)(lVar38 + 0x30)) =
           uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 * 0x1000000;
      *(ulong *)(param_4 + 0x78) = local_88;
      *param_6 = local_90;
      goto LAB_0010bf4b;
    }
    param_3 = param_3 + 1;
  } while (plVar20 != param_3);
LAB_0010c3f3:
  param_5[5] = 0;
LAB_0010c08c:
  uVar22 = local_90;
  if (local_9c == 0) {
LAB_0010bf35:
    local_9c = 8;
    uVar22 = local_90;
  }
LAB_0010bf48:
  *param_6 = uVar22;
LAB_0010bf4b:
  FT_Stream_Close(local_1b0);
  ft_mem_free(param_8,local_1b0);
  iVar15 = local_9c;
LAB_0010bf6c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sfnt_init_face(ulong param_1,ulong *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte *pbVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  size_t __n;
  void *__s1;
  void *__s2;
  undefined1 *puVar21;
  undefined8 uVar22;
  long *plVar23;
  uint uVar24;
  long lVar25;
  ulong *puVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  void *pvVar30;
  byte *pbVar31;
  int iVar32;
  uint *puVar33;
  long in_FS_OFFSET;
  bool bVar34;
  ulong local_188;
  long *local_180;
  ulong *local_178;
  ulong local_170;
  uint local_168;
  long *local_160;
  undefined1 *local_158;
  ulong local_150;
  ulong local_148;
  uint local_128;
  int local_118;
  int local_114;
  undefined1 *local_110;
  ulong local_108;
  ulong local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulong local_c8;
  long local_c0;
  ulong local_b8;
  undefined2 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  ulong local_98;
  int local_90;
  undefined4 uStack_8c;
  long local_88;
  ulong local_80;
  int local_78;
  undefined4 uStack_74;
  ulong local_70;
  undefined8 local_68;
  ulong local_60;
  ushort local_58 [4];
  ulong uStack_50;
  long local_48;
  long local_40;
  
  uVar14 = param_2[0x16];
  uVar19 = *(undefined8 *)(uVar14 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_178 = (ulong *)param_2[0x6e];
  if (local_178 == (ulong *)0x0) {
    local_178 = (ulong *)FT_Get_Module_Interface(uVar19,&_LC14);
    if (local_178 == (ulong *)0x0) {
      iVar32 = 0xb;
      goto LAB_0010e6c8;
    }
    param_2[0x6e] = (ulong)local_178;
    uVar14 = param_2[0x16];
    param_2[0x68] = *local_178;
  }
  uVar14 = ft_module_get_service(uVar14,"postscript-cmaps",1);
  param_2[0x6f] = uVar14;
  if (param_2[0x70] == 0) {
    uVar15 = FT_Get_Module(uVar19,"truetype");
    uVar14 = ft_module_get_service(uVar15,"multi-masters",0);
    param_2[0x70] = uVar14;
    if (param_2[0x71] == 0) goto LAB_0010ebc8;
LAB_0010e0c6:
    uVar14 = param_2[0x72];
  }
  else {
    if (param_2[0x71] != 0) goto LAB_0010e0c6;
LAB_0010ebc8:
    uVar19 = FT_Get_Module(uVar19,"truetype");
    uVar20 = ft_module_get_service(uVar19,"metrics-variations",0);
    uVar14 = param_2[0x72];
    param_2[0x71] = uVar20;
  }
  if (uVar14 == 0) {
    uVar14 = ft_module_get_service(param_2[0x16],"metrics-variations",0);
    param_2[0x72] = uVar14;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x38);
  param_2[0x1f] = 0;
  local_170 = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = (undefined1  [16])0x0;
  local_128 = param_3;
LAB_0010e110:
  uVar15 = FT_Stream_Pos(param_1);
  iVar9 = FT_Stream_ReadULong(param_1,&local_118);
  iVar32 = local_118;
  if (local_118 != 0) goto LAB_0010e6c8;
  if (iVar9 == 0x774f4646) {
    local_118 = FT_Stream_Seek(param_1,uVar15);
    iVar32 = local_118;
    if (local_118 != 0) goto LAB_0010e6c8;
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    local_100 = local_100 & 0xffffffff00000000;
    iVar32 = FT_Stream_ReadFields(param_1,woff_header_fields_2,&local_c8);
    local_100 = CONCAT44(local_100._4_4_,iVar32);
    if (iVar32 != 0) goto LAB_0010e6c8;
    if (((local_c0 != 0x774f4646) && (local_c0 != 0x74746366)) &&
       ((local_b8 == *(ulong *)(param_1 + 8) &&
        ((((local_b0 != 0 && ((ulong)local_b0 * 0x14 + 0x2c < local_b8)) &&
          ((ulong)local_b0 * 0x10 + 0xc < local_a8)) &&
         (uVar14 = (ulong)((uint)local_a8 & 3), (local_a8 & 3) == 0)))))) {
      if (local_98 == 0) {
        if (CONCAT44(uStack_8c,local_90) == 0 && local_88 == 0) goto LAB_0010e512;
        goto LAB_0010e748;
      }
      if ((CONCAT44(uStack_8c,local_90) != 0) && (local_88 == 0)) goto LAB_0010e748;
LAB_0010e512:
      if ((local_80 == 0) && (CONCAT44(uStack_74,local_78) != 0)) goto LAB_0010e748;
      local_158 = (undefined1 *)ft_mem_qalloc(uVar15,0xc,&local_100);
      if ((int)local_100 == 0) {
        local_150 = ft_mem_alloc(uVar15,0x50,&local_100);
        if ((int)local_100 == 0) {
          if (local_b0 == 0) {
            uVar10 = 0xff;
            uVar12 = 0xff;
            bVar5 = 0xff;
          }
          else {
            uVar10 = 0x1f;
            if (local_b0 != 0) {
              for (; local_b0 >> uVar10 == 0; uVar10 = uVar10 - 1) {
              }
            }
            bVar5 = (byte)uVar10;
            uVar12 = 0;
            uVar10 = uVar10 & 0xff;
          }
          iVar32 = 0x10 << (bVar5 & 0x1f);
          uVar11 = (uint)local_b0 * 0x10 - iVar32;
          uVar6 = (ushort)iVar32;
          *local_158 = (char)((ulong)local_c0 >> 0x18);
          local_158[1] = (char)((ulong)local_c0 >> 0x10);
          local_158[2] = (char)((ulong)local_c0 >> 8);
          local_158[3] = (char)local_c0;
          local_158[4] = local_b0._1_1_;
          *(ushort *)(local_158 + 6) = uVar6 << 8 | uVar6 >> 8;
          local_158[5] = (char)local_b0;
          *(uint *)(local_158 + 8) =
               (((uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff) << 8 | uVar10) << 8 | uVar12;
          puVar17 = (uint *)ft_mem_qrealloc(uVar15,0x30,0,local_b0,0,&local_100);
          local_180 = (long *)0x0;
          if ((int)local_100 == 0) {
            local_180 = (long *)ft_mem_qrealloc(uVar15,8,0,local_b0,0,&local_100);
            if ((int)local_100 == 0) {
              iVar32 = FT_Stream_EnterFrame(param_1,(ulong)local_b0 * 0x14);
              local_100 = CONCAT44(local_100._4_4_,iVar32);
              if (iVar32 == 0) {
                uVar10 = 0;
                puVar33 = puVar17;
                if (local_b0 != 0) {
                  do {
                    uVar12 = FT_Stream_GetULong(param_1);
                    *puVar33 = uVar12;
                    uVar12 = FT_Stream_GetULong(param_1);
                    *(ulong *)(puVar33 + 2) = (ulong)uVar12;
                    uVar12 = FT_Stream_GetULong(param_1);
                    *(ulong *)(puVar33 + 4) = (ulong)uVar12;
                    uVar12 = FT_Stream_GetULong(param_1);
                    *(ulong *)(puVar33 + 6) = (ulong)uVar12;
                    uVar12 = FT_Stream_GetULong(param_1);
                    *(ulong *)(puVar33 + 8) = (ulong)uVar12;
                    uVar12 = *puVar33;
                    if (uVar12 <= uVar10) {
                      FT_Stream_ExitFrame(param_1);
                      local_100 = CONCAT44(local_100._4_4_,8);
                      goto LAB_0010e660;
                    }
                    local_180[uVar14] = (long)puVar33;
                    uVar14 = uVar14 + 1;
                    puVar33 = puVar33 + 0xc;
                    uVar10 = uVar12;
                  } while ((int)uVar14 < (int)(uint)local_b0);
                }
                FT_Stream_ExitFrame(param_1);
                qsort(local_180,(ulong)local_b0,8,compare_offsets);
                uVar20 = (ulong)local_b0;
                uVar14 = uVar20 * 0x14 + 0x2c;
                uVar27 = uVar20 * 0x10 + 0xc;
                if (local_b0 == 0) {
                  uVar27 = 0xc;
                  uVar14 = 0x2c;
                }
                else {
                  plVar23 = local_180;
                  do {
                    lVar29 = *plVar23;
                    if (((*(ulong *)(lVar29 + 8) != uVar14) ||
                        (uVar1 = *(ulong *)(lVar29 + 0x10), local_b8 < uVar1)) ||
                       ((local_b8 - uVar1 < uVar14 ||
                        (((uVar2 = *(ulong *)(lVar29 + 0x18), local_a8 < uVar2 ||
                          (local_a8 - uVar2 < uVar27)) || (uVar2 < uVar1)))))) goto LAB_0010f5bc;
                    plVar23 = plVar23 + 1;
                    *(ulong *)(lVar29 + 0x28) = uVar27;
                    uVar14 = uVar14 + ((int)uVar1 + 3U & 0xfffffffc);
                    uVar27 = uVar27 + ((int)uVar2 + 3U & 0xfffffffc);
                  } while (local_180 + uVar20 != plVar23);
                }
                if ((((local_98 == 0) ||
                     ((local_98 == uVar14 &&
                      (uVar14 = uVar14 + CONCAT44(uStack_8c,local_90), uVar14 <= local_b8)))) &&
                    ((local_80 == 0 ||
                     ((local_80 == ((int)uVar14 + 3U & 0xfffffffc) &&
                      (uVar14 = CONCAT44(uStack_74,local_78) + local_80, uVar14 <= local_b8)))))) &&
                   ((local_a8 == uVar27 && (local_b8 == uVar14)))) {
                  local_158 = (undefined1 *)
                              ft_mem_qrealloc(uVar15,1,0xc,uVar27,local_158,&local_100);
                  if ((int)local_100 == 0) {
                    puVar21 = local_158 + 0xc;
                    puVar33 = puVar17;
                    for (iVar32 = 0; iVar32 < (int)(uint)local_b0; iVar32 = iVar32 + 1) {
                      *puVar21 = (char)(*puVar33 >> 0x18);
                      puVar21[1] = (char)(*puVar33 >> 0x10);
                      puVar21[2] = (char)(*puVar33 >> 8);
                      puVar21[3] = (char)*puVar33;
                      puVar21[4] = (char)((ulong)*(undefined8 *)(puVar33 + 8) >> 0x18);
                      puVar21[5] = (char)((ulong)*(undefined8 *)(puVar33 + 8) >> 0x10);
                      puVar21[6] = (char)((ulong)*(undefined8 *)(puVar33 + 8) >> 8);
                      puVar21[7] = (char)*(undefined8 *)(puVar33 + 8);
                      puVar21[8] = (char)((ulong)*(undefined8 *)(puVar33 + 10) >> 0x18);
                      puVar21[9] = (char)((ulong)*(undefined8 *)(puVar33 + 10) >> 0x10);
                      puVar21[10] = (char)((ulong)*(undefined8 *)(puVar33 + 10) >> 8);
                      puVar21[0xb] = (char)*(undefined8 *)(puVar33 + 10);
                      puVar21[0xc] = (char)((ulong)*(undefined8 *)(puVar33 + 6) >> 0x18);
                      puVar21[0xd] = (char)((ulong)*(undefined8 *)(puVar33 + 6) >> 0x10);
                      puVar21[0xe] = (char)((ulong)*(undefined8 *)(puVar33 + 6) >> 8);
                      puVar21[0xf] = (char)*(undefined8 *)(puVar33 + 6);
                      iVar9 = FT_Stream_Seek(param_1,*(undefined8 *)(puVar33 + 2));
                      local_100 = CONCAT44(local_100._4_4_,iVar9);
                      if (iVar9 != 0) goto LAB_0010e660;
                      iVar9 = FT_Stream_EnterFrame(param_1,*(undefined8 *)(puVar33 + 4));
                      local_100 = CONCAT44(local_100._4_4_,iVar9);
                      if (iVar9 != 0) goto LAB_0010e660;
                      if (*(size_t *)(puVar33 + 4) != *(size_t *)(puVar33 + 6)) {
                        local_f8._0_8_ = *(size_t *)(puVar33 + 6);
                        iVar9 = FT_Gzip_Uncompress(uVar15,local_158 + *(long *)(puVar33 + 10),
                                                   local_f8);
                        local_100 = CONCAT44(local_100._4_4_,iVar9);
                        if (iVar9 == 0) {
                          if (*(long *)(puVar33 + 6) == local_f8._0_8_) goto LAB_0010fcee;
                          local_100 = CONCAT44(local_100._4_4_,8);
                        }
                        FT_Stream_ExitFrame(param_1);
                        goto LAB_0010e660;
                      }
                      memcpy(local_158 + *(long *)(puVar33 + 10),*(void **)(param_1 + 0x40),
                             *(size_t *)(puVar33 + 4));
LAB_0010fcee:
                      FT_Stream_ExitFrame(param_1);
                      for (uVar14 = *(long *)(puVar33 + 6) + *(long *)(puVar33 + 10);
                          (uVar14 & 3) != 0; uVar14 = uVar14 + 1) {
                        local_158[uVar14] = 0;
                      }
                      puVar33 = puVar33 + 0xc;
                      puVar21 = puVar21 + 0x10;
                    }
                    FT_Stream_OpenMemory(local_150,local_158,local_a8);
                    uVar14 = param_2[2];
                    uVar20 = param_2[0x18];
                    *(undefined8 *)(local_150 + 0x38) = *(undefined8 *)(param_1 + 0x38);
                    *(code **)(local_150 + 0x30) = sfnt_stream_close;
                    FT_Stream_Free(uVar20,(uint)(uVar14 >> 10) & 1);
                    param_2[2] = param_2[2] & 0xfffffffffffffbff;
                    param_2[0x18] = local_150;
                  }
                }
                else {
LAB_0010f5bc:
                  local_100 = CONCAT44(local_100._4_4_,8);
                }
              }
            }
          }
        }
        else {
          local_180 = (long *)0x0;
          puVar17 = (uint *)0x0;
        }
      }
      else {
        local_150 = 0;
        puVar17 = (uint *)0x0;
        local_180 = (long *)0x0;
      }
LAB_0010e660:
      ft_mem_free(uVar15,puVar17);
      ft_mem_free(uVar15,local_180);
      if ((int)local_100 == 0) {
LAB_0010e880:
        local_118 = 0;
      }
      else {
        ft_mem_free(uVar15,local_158);
        FT_Stream_Close(local_150);
        ft_mem_free(uVar15,local_150);
        local_118 = (int)local_100;
        iVar32 = (int)local_100;
        if ((int)local_100 != 0) goto LAB_0010e6c8;
      }
LAB_0010e888:
      param_1 = param_2[0x18];
      goto LAB_0010e110;
    }
  }
  else {
    if (iVar9 != 0x774f4632) {
      if ((iVar9 == 0x10000) || (iVar9 == 0x74746366)) {
        param_2[0x1f] = 0x74746366;
        if (iVar9 == 0x74746366) {
          local_118 = FT_Stream_ReadFields(param_1,ttc_header_fields_3,param_2 + 0x1f);
          iVar32 = local_118;
          if (local_118 != 0) goto LAB_0010e6c8;
          if (param_2[0x21] == 0) goto LAB_0010e748;
          iVar32 = 10;
          if (*(ulong *)(param_1 + 8) >> 5 < param_2[0x21]) goto LAB_0010e6c8;
          uVar14 = ft_mem_qrealloc(uVar19,8,0);
          param_2[0x22] = uVar14;
          iVar32 = local_118;
          if ((local_118 != 0) ||
             (local_118 = FT_Stream_EnterFrame(param_1,param_2[0x21] * 4), iVar32 = local_118,
             local_118 != 0)) goto LAB_0010e6c8;
          lVar29 = 0;
          if (0 < (long)param_2[0x21]) {
            do {
              uVar10 = FT_Stream_GetULong(param_1);
              *(ulong *)(param_2[0x22] + lVar29 * 8) = (ulong)uVar10;
              lVar29 = lVar29 + 1;
            } while (lVar29 < (long)param_2[0x21]);
          }
          FT_Stream_ExitFrame(param_1);
          local_f8._0_4_ = local_118;
          iVar32 = local_118;
          if (local_118 != 0) goto LAB_0010e6c8;
LAB_0010e9a2:
          uVar10 = -local_128;
          if (0 < (int)local_128) {
            uVar10 = local_128;
          }
          uVar14 = (ulong)uVar10 & 0xffff;
          if (-1 < (int)local_128) {
            if ((long)uVar14 < (long)param_2[0x21]) {
LAB_0010ec28:
              lVar29 = uVar14 * 8;
              goto LAB_0010ea28;
            }
LAB_0010e9c5:
            iVar32 = 6;
            goto LAB_0010e6c8;
          }
          lVar29 = 0;
          if (((int)uVar14 != 0) &&
             (uVar14 = (ulong)((int)uVar14 + -1), (long)uVar14 < (long)param_2[0x21]))
          goto LAB_0010ec28;
LAB_0010ea28:
          uVar14 = param_2[0x18];
          iVar32 = FT_Stream_Seek(uVar14,*(undefined8 *)(param_2[0x22] + lVar29));
          local_f8._0_4_ = iVar32;
          if (iVar32 != 0) goto LAB_0010e6c8;
          iVar32 = (*(code *)local_178[0x16])(param_2,uVar14);
          local_f8._0_4_ = iVar32;
          if (iVar32 != 0) goto LAB_0010e6c8;
          uVar20 = param_2[0x17];
          iVar32 = (*(code *)param_2[0x68])(param_2,0x66766172,uVar14);
          if ((iVar32 == 0) && (0x13 < local_c8)) {
            iVar32 = FT_Stream_ReadULong(uVar14,local_f8);
            if (local_f8._0_4_ != 0) goto LAB_0010eaaf;
            uVar6 = FT_Stream_ReadUShort(uVar14,local_f8);
            local_188 = (ulong)uVar6;
            if (local_f8._0_4_ != 0) goto LAB_0010eaaf;
            iVar9 = FT_Stream_Skip(uVar14,2);
            local_f8._0_4_ = iVar9;
            if (iVar9 != 0) goto LAB_0010eaaf;
            uVar6 = FT_Stream_ReadUShort(uVar14,local_f8);
            if (local_f8._0_4_ != 0) goto LAB_0010eaaf;
            uVar8 = FT_Stream_ReadUShort(uVar14,local_f8);
            if (local_f8._0_4_ != 0) goto LAB_0010eaaf;
            uVar7 = FT_Stream_ReadUShort(uVar14,local_f8);
            if (local_f8._0_4_ != 0) goto LAB_0010eaaf;
            uVar12 = FT_Stream_ReadUShort(uVar14,local_f8);
            if (local_f8._0_4_ != 0) goto LAB_0010eaaf;
            uVar11 = (uint)param_2[0x99];
            if ((iVar32 != 0x10000) || (uVar8 != 0x14)) {
              uVar11 = uVar11 & 1;
              goto LAB_0010eac9;
            }
            if (0x3ffd < (ushort)(uVar6 - 1)) {
LAB_0010f198:
              uVar11 = uVar11 & 1;
              uVar8 = 0x14;
              goto LAB_0010eac9;
            }
            uVar24 = uVar12 & 0xffff;
            if ((((uVar24 != (uint)uVar6 * 4 + 4) && (uVar24 != (uint)uVar6 * 4 + 6)) ||
                (0x7eff < uVar7)) ||
               (local_c8 <
                (long)(int)(((uint)uVar6 + (uint)uVar6 * 4) * 4) + local_188 +
                (long)(int)(uVar24 * uVar7))) goto LAB_0010f198;
            uVar8 = 0x14;
            *(uint *)(param_2 + 0x99) = uVar11 | 1;
LAB_0010ecc3:
            local_180 = (long *)local_f8;
            __s2 = (void *)0x0;
            __n = (size_t)(int)((uint)uVar6 * 4);
            local_168 = (uint)uVar6;
            __s1 = (void *)ft_mem_qalloc(uVar20,__n,local_180);
            if (local_f8._0_4_ == 0) {
              __s2 = (void *)ft_mem_qalloc(uVar20,__n,local_180);
              if (local_f8._0_4_ == 0) {
                lVar28 = FT_Stream_Pos(uVar14);
                lVar29 = local_188 + lVar28 + -8;
                if (uVar6 != 0) {
                  pvVar30 = __s1;
                  do {
                    uVar13 = FT_Stream_ReadAt(uVar14,lVar29,pvVar30,4);
                    pvVar30 = (void *)((long)pvVar30 + 4);
                    lVar29 = lVar29 + (ulong)uVar8;
                    local_f8._0_4_ = uVar13;
                  } while (pvVar30 != (void *)((long)__s1 + (ulong)uVar6 * 4));
                  uVar12 = uVar12 & 0xffff;
                }
                lVar29 = local_188 + lVar28 + -0xc + (long)(int)(uVar8 * local_168);
                uVar11 = 0;
                if (uVar7 == 0) {
                  *(undefined4 *)((long)param_2 + 0x4dc) = 1;
                  uVar7 = 0;
                }
                else {
                  do {
                    uVar24 = uVar11;
                    uVar13 = FT_Stream_ReadAt(uVar14,lVar29,__s2,__n);
                    local_f8._0_4_ = uVar13;
                    iVar32 = memcmp(__s1,__s2,__n);
                    if (iVar32 == 0) {
                      *(uint *)((long)param_2 + 0x4dc) = uVar24 + 1;
                      if (uVar24 != uVar7) goto LAB_0010eada;
                      goto LAB_0010ef13;
                    }
                    lVar29 = lVar29 + (ulong)(uVar12 & 0xffff);
                    uVar11 = uVar24 + 1;
                  } while ((uint)uVar7 != uVar24 + 1);
                  *(uint *)((long)param_2 + 0x4dc) = uVar24 + 2;
                }
LAB_0010ef13:
                uVar7 = uVar7 + 1;
              }
            }
          }
          else {
LAB_0010eaaf:
            uVar12 = 0;
            uVar8 = 0;
            uVar6 = 0;
            local_188 = 0;
            uVar11 = (uint)param_2[0x99] & 1;
LAB_0010eac9:
            if (uVar11 != 0) {
              uVar7 = 0;
              goto LAB_0010ecc3;
            }
            __s2 = (void *)0x0;
            __s1 = (void *)0x0;
            uVar7 = 0;
          }
LAB_0010eada:
          ft_mem_free(uVar20,__s1);
          ft_mem_free(uVar20,__s2);
          iVar32 = (*(code *)param_2[0x68])(param_2,0x676c7966,uVar14,0);
          if (((iVar32 == 0) ||
              (iVar32 = (*(code *)param_2[0x68])(param_2,0x43464632,uVar14,0), iVar32 == 0)) ||
             (iVar32 = (*(code *)param_2[0x68])(param_2,0x43464620,uVar14,0), iVar32 != 0)) {
            uVar12 = (uint)uVar7;
          }
          else {
            uVar7 = 0;
            uVar12 = 0;
          }
          if ((int)uVar12 < (int)uVar10 >> 0x10) {
            uVar14 = 0;
            if (-1 < (int)local_128) goto LAB_0010e9c5;
          }
          else {
            uVar14 = (ulong)uVar7 << 0x10;
          }
          param_2[3] = uVar14;
          param_2[1] = (long)(int)local_128;
          if (local_170 == 0) {
            local_170 = param_2[0x21];
          }
          *param_2 = local_170;
          iVar32 = local_f8._0_4_;
LAB_0010e6c8:
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return iVar32;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else {
        if ((((iVar9 != 0x4f54544f) && (iVar9 != 0x74727565)) && (iVar9 != 0x74797031)) &&
           (((iVar9 != -0x5a949d9c && (iVar9 != -0x5a938c8c)) && (iVar32 = 2, iVar9 != 0x20000))))
        goto LAB_0010e6c8;
        param_2[0x1f] = 0x74746366;
      }
      uVar14 = _UNK_00113558;
      param_2[0x20] = __LC19;
      param_2[0x21] = uVar14;
      puVar18 = (undefined8 *)ft_mem_qalloc(uVar19,8,&local_118);
      param_2[0x22] = (ulong)puVar18;
      iVar32 = local_118;
      if (local_118 == 0) {
        *puVar18 = uVar15;
        auVar4._12_4_ = 0;
        auVar4._0_12_ = local_f8._4_12_;
        local_f8 = auVar4 << 0x20;
        goto LAB_0010e9a2;
      }
      goto LAB_0010e6c8;
    }
    local_118 = FT_Stream_Seek(param_1,uVar15);
    iVar32 = local_118;
    if (local_118 != 0) goto LAB_0010e6c8;
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    local_114 = 0;
    local_110 = (undefined1 *)0x0;
    local_f8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    local_114 = FT_Stream_ReadFields(param_1,woff2_header_fields_1,&local_c8);
    iVar32 = local_114;
    if (local_114 != 0) goto LAB_0010e6c8;
    if ((((local_c0 != 0x774f4632) && (local_b8 == *(ulong *)(param_1 + 8))) && (local_b0 != 0)) &&
       ((ulong)local_b0 * 0x14 + 0x30 < local_b8)) {
      uVar14 = CONCAT44(uStack_8c,local_90);
      if (local_98 == 0) {
        if (uVar14 == 0 && local_88 == 0) goto joined_r0x0010e736;
        goto LAB_0010e748;
      }
      if (uVar14 == 0) {
        if (local_98 < local_b8) {
joined_r0x0010e736:
          if (local_80 == 0) {
            if (CONCAT44(uStack_74,local_78) == 0) {
LAB_0010e251:
              local_48 = 0;
              pbVar16 = (byte *)ft_mem_qrealloc(uVar15,0x38,0,(ulong)local_b0,0);
              if (local_114 == 0) {
                local_160 = (long *)ft_mem_qrealloc(uVar15,8,0,local_b0);
                if (local_114 != 0) goto LAB_0010e92f;
                if (local_b0 == 0) {
                  lVar29 = -8;
                }
                else {
                  lVar29 = 0;
                  uVar14 = 0;
                  pbVar31 = pbVar16;
                  do {
                    uVar10 = FT_Stream_ReadByte(param_1,&local_114);
                    bVar5 = (byte)uVar10;
                    *pbVar31 = bVar5;
                    if (local_114 != 0) goto LAB_0010e92f;
                    if ((char)(uVar10 & 0x3f) != '?') {
                      iVar32 = *(int *)(
                                       "pamcdaehaehhxtmhpxameman2/SOtsop tvcmgpffylgacolperp FFCGROVTDBECLBEpsagxmdhnrekHSTLTLCPXMDVaehvxtmvESABFEDGSOPGBUSGCSBEFTSJHTAMTDBCCLBCRLOCLAPC GVSxibstncaravatadbcolbnlsbravccsdftaefxtmfravfravgytshtsujracltromxromdbpoporpkartfpaZfliStalGcolGtaeFlliS"
                                       + (ulong)(uVar10 & 0x3f) * 4);
                      *(int *)(pbVar31 + 4) = iVar32;
                      if (iVar32 != 0) goto LAB_0010e382;
LAB_0010f3b2:
                      local_114 = 8;
                      goto LAB_0010e92f;
                    }
                    iVar32 = FT_Stream_ReadULong(param_1,&local_114);
                    *(int *)(pbVar31 + 4) = iVar32;
                    if (local_114 != 0) goto LAB_0010e92f;
                    bVar5 = *pbVar31;
LAB_0010e382:
                    if ((iVar32 == 0x676c7966) || (iVar32 == 0x6c6f6361)) {
                      bVar34 = bVar5 >> 6 == 0;
                    }
                    else {
                      bVar34 = bVar5 >> 6 != 0;
                    }
                    local_114 = ReadBase128(param_1,pbVar31 + 8);
                    if (local_114 != 0) goto LAB_0010e92f;
                    uVar20 = *(ulong *)(pbVar31 + 8);
                    *(ulong *)(pbVar31 + 0x10) = uVar20;
                    if (bVar34 == false) {
LAB_0010e300:
                      uVar27 = uVar20 + uVar14;
                      if (CARRY8(uVar20,uVar14)) {
                        local_114 = 8;
                        local_150 = 0;
                        local_148 = 0;
                        uVar22 = local_e8._0_8_;
                        goto LAB_0010e7cd;
                      }
                    }
                    else {
                      local_114 = ReadBase128(param_1,pbVar31 + 0x10);
                      if (local_114 != 0) goto LAB_0010e92f;
                      uVar20 = *(ulong *)(pbVar31 + 0x10);
                      if (*(int *)(pbVar31 + 4) != 0x6c6f6361) goto LAB_0010e300;
                      uVar27 = uVar14;
                      if (uVar20 != 0) goto LAB_0010f3b2;
                    }
                    *(ulong *)(pbVar31 + 0x18) = (ulong)CONCAT11(bVar34,bVar5 >> 6);
                    *(ulong *)(pbVar31 + 0x20) = uVar14;
                    *(ulong *)(pbVar31 + 0x28) = uVar20;
                    pbVar31[0x30] = 0;
                    pbVar31[0x31] = 0;
                    pbVar31[0x32] = 0;
                    pbVar31[0x33] = 0;
                    pbVar31[0x34] = 0;
                    pbVar31[0x35] = 0;
                    pbVar31[0x36] = 0;
                    pbVar31[0x37] = 0;
                    local_160[lVar29] = (long)pbVar31;
                    lVar29 = lVar29 + 1;
                    pbVar31 = pbVar31 + 0x38;
                    uVar14 = uVar27;
                  } while ((int)lVar29 < (int)(uint)local_b0);
                  lVar29 = (ulong)local_b0 * 8 + -8;
                }
                uVar14 = *(ulong *)(*(long *)((long)local_160 + lVar29) + 0x28);
                puVar26 = (ulong *)(*(long *)((long)local_160 + lVar29) + 0x20);
                local_70 = uVar14 + *puVar26;
                if (CARRY8(uVar14,*puVar26)) goto LAB_0010f3a5;
                local_60 = 0;
                local_58[0] = 1;
                if (local_c0 == 0x74746366) {
                  uVar10 = FT_Stream_ReadULong(param_1,&local_114);
                  local_60 = (ulong)uVar10;
                  if (local_114 == 0) {
                    if ((uVar10 - 0x10000 & 0xfffeffff) != 0) goto LAB_0010f3a5;
                    local_114 = Read255UShort(param_1,local_58);
                    if (local_114 == 0) {
                      if (local_58[0] == 0) goto LAB_0010f3a5;
                      local_48 = ft_mem_realloc(uVar15,0x18,0,local_58[0]);
                      if (local_114 == 0) {
                        for (local_150 = 0; (int)local_150 < (int)(uint)local_58[0];
                            local_150 = local_150 + 1) {
                          puVar26 = (ulong *)(local_48 + local_150 * 0x18);
                          local_114 = Read255UShort(param_1,puVar26 + 1);
                          if (local_114 != 0) goto LAB_0010e92f;
                          uVar10 = FT_Stream_ReadULong(param_1,&local_114);
                          *puVar26 = (ulong)uVar10;
                          if (local_114 != 0) goto LAB_0010e92f;
                          uVar14 = ft_mem_qrealloc(uVar15,2,0);
                          puVar26[2] = uVar14;
                          if (local_114 != 0) goto LAB_0010e92f;
                          if ((short)puVar26[1] != 0) {
                            uVar14 = 0;
                            uVar20 = 0;
                            uVar27 = 0;
                            iVar32 = local_114;
                            do {
                              local_114 = iVar32;
                              local_114 = Read255UShort(param_1);
                              if (local_114 != 0) goto LAB_0010e92f;
                              if (local_b0 <= (ushort)local_100) goto LAB_0010f3a5;
                              *(ushort *)(puVar26[2] + uVar27 * 2) = (ushort)local_100;
                              if (*(int *)(local_160[local_100 & 0xffff] + 4) == 0x6c6f6361) {
                                uVar20 = local_100 & 0xffff;
                              }
                              else if (*(int *)(local_160[local_100 & 0xffff] + 4) == 0x676c7966) {
                                uVar14 = local_100 & 0xffff;
                              }
                              uVar27 = uVar27 + 1;
                              iVar32 = 0;
                            } while (uVar27 < (ushort)puVar26[1]);
                            uVar10 = (uint)uVar14;
                            uVar12 = (uint)uVar20;
                            if ((uVar10 != 0 || uVar12 != 0) &&
                               ((uVar12 < uVar10 || (uVar12 - uVar10 != 1)))) goto LAB_0010f3a5;
                          }
                        }
                        goto LAB_0010f284;
                      }
                    }
                  }
                  goto LAB_0010e92f;
                }
                local_48 = 0;
LAB_0010f284:
                local_68 = FT_Stream_Pos(param_1);
                uVar10 = (int)local_a0 + 3 + (int)local_68 & 0xfffffffc;
                uVar14 = (ulong)uVar10;
                if (local_b8 < uVar14) {
LAB_0010f3a5:
                  local_114 = 8;
                }
                else {
                  if (local_98 != 0) {
                    if (uVar14 != local_98) goto LAB_0010f3a5;
                    uVar14 = (ulong)(local_90 + uVar10 + 3 & 0xfffffffc);
                  }
                  if (local_80 != 0) {
                    if (local_80 != uVar14) goto LAB_0010f3a5;
                    uVar14 = (ulong)((int)uVar14 + local_78 + 3U & 0xfffffffc);
                  }
                  if ((local_b8 + 3 & 0xfffffffffffffffc) != uVar14) goto LAB_0010f3a5;
                  local_170 = (ulong)local_58[0];
                  uVar6 = -(ushort)local_128;
                  if (0 < (int)local_128) {
                    uVar6 = (ushort)local_128;
                  }
                  uVar10 = (uint)uVar6;
                  if ((int)local_128 < 0) {
                    uVar12 = 0;
                    if ((uVar10 != 0) && ((int)(uVar10 - 1) < (int)(uint)local_58[0])) {
                      uVar12 = uVar10 - 1;
                    }
                  }
                  else {
                    uVar12 = uVar10;
                    if (local_58[0] <= uVar10) {
                      local_114 = 6;
                      goto LAB_0010e92f;
                    }
                  }
                  if (local_60 == 0) {
LAB_0010f804:
                    local_108 = (ulong)local_b0 * 0x10 + 0xc;
                    if (local_108 < local_a8) {
                      local_108 = local_a8;
                      if (local_b8 < local_a8 >> 6) {
                        local_108 = local_b8 << 6;
                      }
                      if (0x3ffffff < local_108) {
                        local_108 = 0x4000000;
                      }
                    }
                    puVar21 = (undefined1 *)ft_mem_qalloc(uVar15,local_108,&local_114);
                    local_110 = puVar21;
                    if (local_114 == 0) {
                      local_148 = ft_mem_alloc(uVar15,0x50,&local_114);
                      iVar32 = local_114;
                      if (local_114 == 0) {
                        *puVar21 = (char)((ulong)local_c0 >> 0x18);
                        puVar21[1] = (char)((ulong)local_c0 >> 0x10);
                        puVar21[2] = (char)((ulong)local_c0 >> 8);
                        puVar21[3] = (char)local_c0;
                        if (local_b0 != 0) {
                          puVar21[4] = (char)(local_b0 >> 8);
                          iVar32 = 0x1f;
                          if (local_b0 != 0) {
                            for (; local_b0 >> iVar32 == 0; iVar32 = iVar32 + -1) {
                            }
                          }
                          puVar21[8] = 0;
                          puVar21[5] = (char)local_b0;
                          uVar6 = (ushort)(0x10 << ((byte)iVar32 & 0x1f));
                          uVar8 = local_b0 * 0x10 - uVar6;
                          puVar21[9] = (byte)iVar32;
                          *(ushort *)(puVar21 + 6) = uVar6 << 8 | uVar6 >> 8;
                          *(ushort *)(puVar21 + 10) = uVar8 * 0x100 | uVar8 >> 8;
                        }
                        uVar22 = compute_ULong_sum(puVar21,0xc);
                        local_f8._0_8_ = uVar22;
                        qsort(local_160,(ulong)local_b0,8,compare_tags);
                        if (1 < local_b0) {
                          plVar23 = local_160 + 1;
                          lVar29 = *local_160;
                          do {
                            lVar28 = *plVar23;
                            if (*(int *)(lVar28 + 4) == *(int *)(lVar29 + 4)) {
                              iVar32 = 8;
                              goto LAB_0010f9a1;
                            }
                            plVar23 = plVar23 + 1;
                            lVar29 = lVar28;
                          } while (local_160 + (ulong)(local_b0 - 2) + 2 != plVar23);
                        }
                        if (local_70 == 0) {
                          local_114 = 8;
                          iVar32 = local_114;
                        }
                        else {
                          iVar32 = 10;
                          if (local_70 < 0x4000001) {
                            local_150 = ft_mem_qalloc(uVar15,local_70,&local_114);
                            if ((local_114 == 0) &&
                               (local_114 = FT_Stream_EnterFrame(param_1,local_a0),
                               uVar14 = local_70, local_114 == 0)) {
                              local_100 = local_70;
                              iVar32 = BrotliDecoderDecompress
                                                 (local_a0,*(undefined8 *)(param_1 + 0x40),
                                                  &local_100,local_150);
                              if (iVar32 == 1) {
                                local_114 = (uint)(local_100 != uVar14) << 3;
                              }
                              else {
                                local_114 = 8;
                              }
                              FT_Stream_ExitFrame(param_1);
                              if (local_114 == 0) {
                                local_114 = reconstruct_font(local_150,local_70,local_160,&local_c8,
                                                             local_f8,&local_110,&local_108,uVar15);
                                uVar22 = local_e8._0_8_;
                                if ((local_114 == 0) &&
                                   ((local_108 <= uStack_50 ||
                                    (local_110 = (undefined1 *)
                                                 ft_mem_qrealloc(uVar15,1,local_108,uStack_50),
                                    local_114 == 0)))) {
                                  FT_Stream_OpenMemory(local_148,local_110,uStack_50);
                                  uVar14 = param_2[2];
                                  uVar20 = param_2[0x18];
                                  *(undefined8 *)(local_148 + 0x38) =
                                       *(undefined8 *)(param_1 + 0x38);
                                  *(code **)(local_148 + 0x30) = stream_close;
                                  FT_Stream_Free(uVar20,(uint)(uVar14 >> 10) & 1);
                                  param_2[2] = param_2[2] & 0xfffffffffffffbff;
                                  param_2[0x18] = local_148;
                                  local_128 = (int)local_128 >> 0x1f;
                                }
                                goto LAB_0010e7cd;
                              }
                            }
                            uVar22 = 0;
                            goto LAB_0010e7cd;
                          }
                        }
                      }
LAB_0010f9a1:
                      local_114 = iVar32;
                      local_150 = 0;
                      uVar22 = 0;
                      goto LAB_0010e7cd;
                    }
                  }
                  else {
                    plVar23 = (long *)((long)(int)uVar12 * 0x18 + local_48);
                    lVar29 = ft_mem_qrealloc(uVar15,8,0,(short)plVar23[1]);
                    if (local_114 == 0) {
                      uVar6 = *(ushort *)(plVar23 + 1);
                      if (uVar6 != 0) {
                        lVar28 = plVar23[2];
                        lVar25 = 0;
                        do {
                          *(long *)(lVar29 + lVar25 * 8) =
                               local_160[*(ushort *)(lVar28 + lVar25 * 2)];
                          lVar25 = lVar25 + 1;
                        } while ((int)lVar25 < (int)(uint)uVar6);
                      }
                      local_160 = (long *)ft_mem_qrealloc(uVar15,8,local_b0,uVar6);
                      if (local_114 == 0) {
                        uVar6 = *(ushort *)(plVar23 + 1);
                        lVar28 = 0;
                        if (uVar6 != 0) {
                          do {
                            local_160[lVar28] = *(long *)(lVar29 + lVar28 * 8);
                            lVar28 = lVar28 + 1;
                          } while ((int)lVar28 < (int)(uint)uVar6);
                        }
                        ft_mem_free(uVar15,lVar29);
                        local_c0 = *plVar23;
                        local_b0 = *(ushort *)(plVar23 + 1);
                        goto LAB_0010f804;
                      }
                    }
                  }
                }
LAB_0010e92f:
                local_150 = 0;
                local_148 = 0;
                uVar22 = 0;
              }
              else {
                local_150 = 0;
                uVar22 = 0;
                local_148 = 0;
                local_160 = (long *)0x0;
              }
LAB_0010e7cd:
              ft_mem_free(uVar15,pbVar16);
              ft_mem_free(uVar15,local_160);
              ft_mem_free(uVar15,local_150);
              ft_mem_free(uVar15,uVar22);
              auVar3._8_8_ = 0;
              auVar3._0_8_ = local_e8._8_8_;
              local_e8 = auVar3 << 0x40;
              if (local_48 != 0) {
                if (local_58[0] != 0) {
                  iVar32 = 0;
                  lVar29 = local_48;
                  do {
                    iVar32 = iVar32 + 1;
                    ft_mem_free(uVar15,*(undefined8 *)(lVar29 + 0x10));
                    *(undefined8 *)(lVar29 + 0x10) = 0;
                    lVar29 = lVar29 + 0x18;
                  } while (iVar32 < (int)(uint)local_58[0]);
                }
                ft_mem_free(uVar15,local_48);
                local_48 = 0;
              }
              if (local_114 == 0) goto LAB_0010e880;
              ft_mem_free(uVar15,local_110);
              local_110 = (undefined1 *)0x0;
              if (local_148 != 0) {
                FT_Stream_Close(local_148);
                ft_mem_free(uVar15,local_148);
              }
              local_118 = local_114;
              iVar32 = local_114;
              if (local_114 == 0) goto LAB_0010e888;
              goto LAB_0010e6c8;
            }
          }
          else if ((local_80 < local_b8) && (CONCAT44(uStack_74,local_78) <= local_b8 - local_80))
          goto LAB_0010e251;
        }
      }
      else if (((local_88 != 0) && (local_98 < local_b8)) && (uVar14 <= local_b8 - local_98))
      goto joined_r0x0010e736;
    }
  }
LAB_0010e748:
  iVar32 = 8;
  goto LAB_0010e6c8;
}



ulong sfnt_load_face(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4,long *param_5)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined2 *puVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  ushort uVar26;
  long in_FS_OFFSET;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  int local_a0;
  uint local_9c;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  long local_50;
  long local_40;
  
  lVar2 = *(long *)(param_2 + 0x370);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 1) {
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
  }
  else {
    bVar5 = false;
    bVar4 = false;
    plVar21 = param_5 + (long)param_4 * 2;
    bVar7 = false;
    do {
      while (bVar3 = bVar7, lVar17 = *param_5, lVar17 == 0x69677066) {
        param_5 = param_5 + 2;
        bVar3 = true;
        bVar7 = true;
        if (plVar21 == param_5) goto LAB_001100d8;
      }
      if (lVar17 == 0x69677073) {
        bVar4 = true;
      }
      else if (lVar17 == 0x69736278) {
        bVar5 = true;
      }
      param_5 = param_5 + 2;
      bVar7 = bVar3;
    } while (plVar21 != param_5);
  }
LAB_001100d8:
  if (*(long *)(*(long *)(param_2 + 0xf0) + 0x68) == 0) {
    plVar21 = *(long **)(param_2 + 0x128);
    plVar23 = plVar21 + (ulong)*(ushort *)(param_2 + 0x120) * 4;
    plVar18 = plVar21;
    if (plVar21 < plVar23) {
      do {
        while (plVar19 = plVar21, *plVar18 == 0x676c7966) {
          if (plVar18[3] != 0) goto LAB_001100ea;
          plVar18 = plVar18 + 4;
          if (plVar23 <= plVar18) goto LAB_00110831;
        }
        plVar18 = plVar18 + 4;
      } while (plVar18 < plVar23);
LAB_00110831:
      do {
        if ((*plVar19 == 0x43464620) && (plVar19[3] != 0)) goto LAB_001100ea;
        plVar19 = plVar19 + 4;
      } while (plVar19 < plVar23);
      do {
        if ((*plVar21 == 0x43464632) && (plVar21[3] != 0)) {
          bVar7 = true;
          bVar8 = true;
          goto LAB_00110ba6;
        }
        plVar21 = plVar21 + 4;
      } while (plVar21 < plVar23);
    }
    bVar7 = false;
    bVar8 = false;
LAB_00110ba6:
    iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x43424c43,param_1,0);
    bVar27 = iVar10 == 0;
    iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x43424454,param_1,0);
    bVar28 = iVar10 == 0;
    local_a0 = (**(code **)(param_2 + 0x340))(param_2,0x45424c43,param_1,0);
    local_9c = (**(code **)(param_2 + 0x340))(param_2,0x626c6f63,param_1,0);
    iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x73626978,param_1,0);
    bVar29 = !bVar5 && iVar10 == 0;
    if (((bVar8) || (*(code **)(lVar2 + 0x88) == (code *)0x0)) ||
       (uVar11 = (**(code **)(lVar2 + 0x88))(param_2,param_1), local_7c = uVar11, uVar11 != 0))
    goto LAB_00110172;
    bVar5 = true;
    local_7c = 0;
    bVar8 = bVar29;
    if (bVar29) goto LAB_00110177;
  }
  else {
LAB_001100ea:
    iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x43424c43,param_1,0);
    bVar27 = iVar10 == 0;
    iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x43424454,param_1,0);
    bVar28 = iVar10 == 0;
    local_a0 = (**(code **)(param_2 + 0x340))(param_2,0x45424c43,param_1,0);
    local_9c = (**(code **)(param_2 + 0x340))(param_2,0x626c6f63,param_1,0);
    iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x73626978,param_1,0);
    bVar29 = false;
    bVar7 = bVar5;
    if (!bVar5) {
      bVar29 = iVar10 == 0;
      bVar7 = true;
    }
LAB_00110172:
    uVar11 = local_7c;
    bVar8 = false;
LAB_00110177:
    bVar5 = bVar8;
    local_7c = uVar11;
    uVar12 = (**(code **)(lVar2 + 0x30))(param_2,param_1);
    local_7c = (uint)uVar12;
    if (local_7c != 0) goto LAB_001106b0;
  }
  if ((bVar28) || (bVar27)) {
    bVar7 = false;
  }
  uVar12 = 8;
  if (0x3ff0 < (ushort)(*(short *)(param_2 + 0x152) - 0x10U)) goto LAB_001106b0;
  local_7c = (**(code **)(lVar2 + 0x48))(param_2,param_1);
  local_7c = (**(code **)(lVar2 + 0x40))(param_2,param_1);
  local_7c = (**(code **)(lVar2 + 0x60))(param_2,param_1);
  uVar11 = (**(code **)(lVar2 + 0x58))(param_2,param_1);
  local_7c = uVar11;
  if (!bVar5) {
    uVar12 = (**(code **)(lVar2 + 0x38))(param_2,param_1,0);
    local_7c = (uint)uVar12;
    if (local_7c == 0) {
      uVar12 = (**(code **)(lVar2 + 0xb8))(param_2,param_1,0);
      local_7c = (uint)uVar12;
      if ((char)uVar12 == -0x72) {
        local_7c = 0x93;
        plVar21 = *(long **)(*(long *)(param_2 + 0xf0) + 0x68);
        uVar12 = 0x93;
joined_r0x00110caf:
        if ((plVar21 == (long *)0x0) || (*(long *)(*plVar21 + 0x10) == 0)) goto LAB_001106b0;
        *(undefined2 *)(param_2 + 0x1b6) = 0;
        goto LAB_00110b6a;
      }
      if (local_7c != 0) goto LAB_001106b0;
    }
    else {
      if ((char)uVar12 != -0x72) goto LAB_001106b0;
      if (*(long *)(param_2 + 0x118) != 0x74727565) {
        local_7c = 0x8f;
        plVar21 = *(long **)(*(long *)(param_2 + 0xf0) + 0x68);
        uVar12 = 0x8f;
        goto joined_r0x00110caf;
      }
      bVar7 = false;
LAB_00110b6a:
      local_7c = 0;
    }
    uVar12 = (**(code **)(lVar2 + 0x38))(param_2,param_1,1);
    local_7c = (uint)uVar12;
    if (local_7c == 0) {
      uVar12 = (**(code **)(lVar2 + 0xb8))(param_2,param_1,1);
      local_7c = (uint)uVar12;
      if (local_7c != 0) goto LAB_00110918;
      *(undefined1 *)(param_2 + 0x1f0) = 1;
    }
    else {
LAB_00110918:
      if ((char)uVar12 != -0x72) goto LAB_001106b0;
    }
    local_7c = (**(code **)(lVar2 + 0x50))(param_2,param_1);
    if (local_7c != 0) {
      *(undefined2 *)(param_2 + 0x268) = 0xffff;
    }
  }
  if ((*(code **)(lVar2 + 0xc0) != (code *)0x0) &&
     (((local_a0 == 0 || bVar27) || local_9c == 0) || bVar29)) {
    local_7c = (**(code **)(lVar2 + 0xc0))(param_2,param_1);
  }
  if (*(code **)(lVar2 + 0xe0) != (code *)0x0) {
    local_7c = (**(code **)(lVar2 + 0xe0))(param_2,param_1);
    local_7c = (**(code **)(lVar2 + 0xe8))(param_2,param_1);
  }
  if (*(code **)(lVar2 + 0x158) != (code *)0x0) {
    local_7c = (**(code **)(lVar2 + 0x158))(param_2,param_1);
  }
  local_7c = (**(code **)(lVar2 + 0x80))(param_2,param_1);
  local_7c = (**(code **)(lVar2 + 0x78))(param_2,param_1);
  lVar17 = param_2 + 0x28;
  local_7c = (**(code **)(lVar2 + 0x70))(param_2,param_1);
  *(undefined1 (*) [16])(param_2 + 0x28) = (undefined1  [16])0x0;
  *(ulong *)(param_2 + 0x20) = (ulong)*(ushort *)(param_2 + 0x1d0);
  if ((*(short *)(param_2 + 0x268) != -1) && ((*(byte *)(param_2 + 0x2bd) & 1) != 0)) {
    if (bVar3) {
LAB_001102e2:
      uVar12 = tt_face_get_name(param_2,1,lVar17);
      local_7c = (uint)uVar12;
      if (local_7c != 0) goto LAB_001106b0;
    }
    else {
      uVar12 = tt_face_get_name(param_2,0x10,lVar17);
      local_7c = (uint)uVar12;
      if (local_7c != 0) goto LAB_001106b0;
      if (*(long *)(param_2 + 0x28) == 0) {
        local_7c = 0;
        goto LAB_001102e2;
      }
    }
    if (!bVar4) {
      uVar12 = tt_face_get_name(param_2,0x11,param_2 + 0x30);
      local_7c = (uint)uVar12;
      if (local_7c != 0) goto LAB_001106b0;
    }
    lVar17 = *(long *)(param_2 + 0x30);
    goto joined_r0x001107a0;
  }
  uVar12 = tt_face_get_name(param_2,0x15,lVar17);
  local_7c = (uint)uVar12;
  if (local_7c != 0) goto LAB_001106b0;
  uVar6 = 0;
  if (*(long *)(param_2 + 0x28) == 0) {
    lVar22 = 0;
    if (!bVar3) {
      uVar12 = tt_face_get_name(param_2,0x10,lVar17);
      local_7c = (uint)uVar12;
      if (local_7c != 0) goto LAB_001106b0;
      lVar22 = *(long *)(param_2 + 0x28);
    }
    local_7c = 0;
    uVar6 = local_7c;
    if (lVar22 == 0) {
      uVar12 = tt_face_get_name(param_2,1,lVar17);
      local_7c = (uint)uVar12;
      uVar6 = local_7c;
      if (local_7c != 0) goto LAB_001106b0;
    }
  }
  local_7c = uVar6;
  uVar12 = tt_face_get_name(param_2,0x16,param_2 + 0x30);
  local_7c = (uint)uVar12;
  if (local_7c != 0) goto LAB_001106b0;
  lVar17 = *(long *)(param_2 + 0x30);
  if (bVar4) {
joined_r0x001107a0:
    if (lVar17 == 0) {
      uVar12 = tt_face_get_name(param_2,2,param_2 + 0x30);
      local_7c = (uint)uVar12;
      if (local_7c != 0) goto LAB_001106b0;
      lVar17 = *(long *)(param_2 + 0x30);
    }
  }
  else if (lVar17 == 0) {
    uVar12 = tt_face_get_name(param_2,0x11,param_2 + 0x30);
    local_7c = (uint)uVar12;
    if (local_7c != 0) goto LAB_001106b0;
    lVar17 = *(long *)(param_2 + 0x30);
    goto joined_r0x001107a0;
  }
  uVar13 = ft_mem_strdup(*(undefined8 *)(param_2 + 0xb8),lVar17,&local_7c);
  *(undefined8 *)(param_2 + 0x4e0) = uVar13;
  uVar12 = (ulong)local_7c;
  if (local_7c != 0) goto LAB_001106b0;
  uVar12 = *(ulong *)(param_2 + 0x10);
  if (((*(int *)(param_2 + 0x540) - 2U < 2) || (*(long *)(param_2 + 0x5c0) != 0)) ||
     (*(long *)(param_2 + 0x5c8) != 0)) {
    uVar12 = uVar12 | 0x4000;
  }
  uVar14 = uVar12;
  if (bVar7) {
    uVar14 = uVar12 | 1;
    if (bVar29) {
      uVar14 = uVar12 | 0x20000;
    }
  }
  uVar12 = uVar14 | 0x18;
  if ((uVar11 == 0) && (*(long *)(param_2 + 0x2f0) != 0x30000)) {
    uVar12 = uVar14 | 0x218;
  }
  if (*(long *)(param_2 + 0x308) != 0) {
    uVar12 = uVar12 | 4;
  }
  if (*(char *)(param_2 + 0x1f0) != '\0') {
    uVar12 = uVar12 | 0x20;
  }
  if (*(int *)(param_2 + 0x564) != 0) {
    uVar12 = uVar12 | 0x40;
  }
  *(ulong *)(param_2 + 0x10) = (ulong)(*(uint *)(param_2 + 0x4c8) & 1) << 8 | uVar12;
  if ((bVar7) && (*(short *)(param_2 + 0x268) != -1)) {
    uVar12 = (ulong)((*(ushort *)(param_2 + 700) & 0x201) != 0);
    if ((*(ushort *)(param_2 + 700) & 0x20) != 0) {
      uVar12 = uVar12 | 2;
    }
  }
  else {
    uVar12 = (ulong)(*(ushort *)(param_2 + 0x180) & 1) * 2;
    if ((*(ushort *)(param_2 + 0x180) & 2) != 0) {
      uVar12 = uVar12 | 1;
    }
  }
  *(ulong *)(param_2 + 0x18) = *(ulong *)(param_2 + 0x18) | uVar12;
  tt_face_build_cmaps_isra_0(param_2);
  if (*(int *)(param_2 + 0x48) < 1) {
LAB_00110a99:
    if ((*(byte *)(param_2 + 0x11) & 2) != 0) {
      local_70 = 0x10003756e6963;
      local_78 = param_2;
      uVar12 = FT_CMap_New(tt_cmap_unicode_class_rec,0,&local_78,0);
      if ((((uint)uVar12 != 0) && ((char)uVar12 != '\a')) && (((uint)uVar12 & 0xff) != 0xa3))
      goto LAB_001106b0;
      local_7c = 0;
    }
  }
  else {
    plVar18 = *(long **)(param_2 + 0x50);
    bVar3 = false;
    plVar21 = plVar18 + *(int *)(param_2 + 0x48);
    do {
      lVar17 = *plVar18;
      puVar15 = &tt_encodings_4;
      do {
        if (((uint)*(ushort *)(lVar17 + 0xc) == *puVar15) &&
           (((uint)*(ushort *)(lVar17 + 0xe) == puVar15[1] || (puVar15[1] == 0xffffffff)))) {
          uVar11 = puVar15[2];
          if ((uVar11 == 0x756e6963) || (uVar11 == 0x73796d62)) {
            bVar3 = true;
          }
          goto LAB_00110494;
        }
        puVar15 = puVar15 + 3;
      } while (puVar15 != (uint *)&DAT_001128c4);
      uVar11 = 0;
LAB_00110494:
      plVar18 = plVar18 + 1;
      *(uint *)(lVar17 + 8) = uVar11;
    } while (plVar21 != plVar18);
    if (!bVar3) goto LAB_00110a99;
  }
  uVar14 = (ulong)*(uint *)(param_2 + 0x544);
  if (*(uint *)(param_2 + 0x544) == 0) {
LAB_0011093d:
    uVar12 = *(ulong *)(param_2 + 0x10);
  }
  else {
    uVar26 = *(ushort *)(param_2 + 0x152);
    uVar13 = *(undefined8 *)(param_2 + 0xb8);
    if (uVar26 == 0) {
      iVar10 = 1;
      uVar26 = 1;
    }
    else {
      iVar10 = (int)*(short *)(param_2 + 0x26a);
      if (*(short *)(param_2 + 0x268) == -1) {
        uVar26 = 1;
        iVar10 = 1;
      }
    }
    uVar16 = ft_mem_realloc(uVar13,0x20,0,uVar14,0,&local_7c);
    *(undefined8 *)(param_2 + 0x40) = uVar16;
    uVar12 = (ulong)local_7c;
    if (local_7c != 0) goto LAB_001106b0;
    lVar17 = ft_mem_qrealloc(uVar13,4,0,uVar14,0,&local_7c);
    uVar12 = (ulong)local_7c;
    if (local_7c != 0) goto LAB_001106b0;
    uVar24 = 0;
    local_9c = 0;
    uVar12 = uVar24;
    do {
      lVar22 = *(long *)(param_2 + 0x40);
      local_7c = (**(code **)(lVar2 + 0xd8))(param_2,uVar12,&local_78);
      if (local_7c == 0) {
        puVar20 = (undefined2 *)(uVar24 * 0x20 + lVar22);
        *puVar20 = (short)(local_50 >> 6);
        lVar25 = (local_78 & 0xffff) << 6;
        puVar20[1] = (short)((int)(iVar10 * (uint)(ushort)local_78 + (uint)(uVar26 >> 1)) /
                            (int)(uint)uVar26);
        *(long *)(puVar20 + 8) = lVar25;
        lVar22 = (long)(int)((uint)local_78._2_2_ << 6);
        *(long *)(puVar20 + 0xc) = lVar22;
        *(long *)(puVar20 + 4) = lVar22;
        if ((local_78._2_2_ != 0) && ((int)lVar25 != 0)) {
          local_9c = local_9c + 1;
          *(int *)(lVar17 + uVar24 * 4) = (int)uVar12;
          uVar24 = (ulong)local_9c;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar14 != uVar12);
    uVar13 = ft_mem_qrealloc(uVar13,4,uVar14,uVar24,lVar17,&local_7c);
    if (local_9c == 0) goto LAB_0011093d;
    *(undefined8 *)(param_2 + 0x548) = uVar13;
    uVar12 = *(ulong *)(param_2 + 0x10) | 2;
    *(ulong *)(param_2 + 0x10) = uVar12;
    *(uint *)(param_2 + 0x38) = local_9c;
  }
  if ((uVar12 & 3) == 0) {
    uVar12 = uVar12 | 1;
    *(ulong *)(param_2 + 0x10) = uVar12;
  }
  if ((uVar12 & 0x20001) != 0) {
    *(long *)(param_2 + 0x68) = (long)*(short *)(param_2 + 0x178);
    *(long *)(param_2 + 0x70) = (long)*(short *)(param_2 + 0x17a);
    *(long *)(param_2 + 0x78) = (long)*(short *)(param_2 + 0x17c);
    *(long *)(param_2 + 0x80) = (long)*(short *)(param_2 + 0x17e);
    *(undefined2 *)(param_2 + 0x88) = *(undefined2 *)(param_2 + 0x152);
    if (*(short *)(param_2 + 0x268) == -1) {
      uVar1 = *(undefined4 *)(param_2 + 0x198);
      *(undefined4 *)(param_2 + 0x8a) = uVar1;
      *(short *)(param_2 + 0x8e) =
           ((short)uVar1 + *(short *)(param_2 + 0x19c)) - (short)((uint)uVar1 >> 0x10);
    }
    else if ((*(byte *)(param_2 + 700) & 0x80) == 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x198);
      *(undefined4 *)(param_2 + 0x8a) = uVar1;
      *(short *)(param_2 + 0x8e) =
           ((short)uVar1 + *(short *)(param_2 + 0x19c)) - (short)((uint)uVar1 >> 0x10);
      if ((*(ulong *)(param_2 + 0x88) & 0xffffffff0000) == 0) {
        if ((*(ulong *)(param_2 + 0x2c0) & 0xffffffff0000) != 0) goto LAB_00110d33;
        *(ushort *)(param_2 + 0x8e) = *(ushort *)(param_2 + 0x2c8) + *(ushort *)(param_2 + 0x2ca);
        *(uint *)(param_2 + 0x8a) =
             (uint)*(ushort *)(param_2 + 0x2ca) * -0x10000 | (uint)*(ushort *)(param_2 + 0x2c8);
      }
    }
    else {
LAB_00110d33:
      uVar1 = *(undefined4 *)(param_2 + 0x2c2);
      *(undefined4 *)(param_2 + 0x8a) = uVar1;
      *(short *)(param_2 + 0x8e) =
           ((short)uVar1 + *(short *)(param_2 + 0x2c6)) - (short)((uint)uVar1 >> 0x10);
    }
    *(undefined2 *)(param_2 + 0x90) = *(undefined2 *)(param_2 + 0x19e);
    if (*(char *)(param_2 + 0x1f0) == '\0') {
      uVar9 = *(undefined2 *)(param_2 + 0x8e);
    }
    else {
      uVar9 = *(undefined2 *)(param_2 + 0x206);
    }
    *(undefined2 *)(param_2 + 0x92) = uVar9;
    *(short *)(param_2 + 0x96) = *(short *)(param_2 + 0x302);
    *(short *)(param_2 + 0x94) = *(short *)(param_2 + 0x300) - *(short *)(param_2 + 0x302) / 2;
  }
  uVar12 = (ulong)local_7c;
LAB_001106b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tt_face_get_colorline_stops(long param_1,long *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  ushort *local_50;
  undefined8 local_48;
  long local_40 [2];
  
  lVar1 = *(long *)(param_1 + 0x5c0);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (((lVar1 == 0) || (*(long *)(lVar1 + 0x80) == 0)) || (param_3 == (uint *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar8 = param_3[1];
    uVar6 = 0;
    if (uVar8 < *param_3) {
      uVar2 = param_3[4];
      local_50 = *(ushort **)(param_3 + 2);
      uVar9 = (-(uint)((char)uVar2 == '\0') & 0xfffffffc) + 10;
      if ((*(ushort **)(lVar1 + 0x40) <= local_50) &&
         ((ulong)(((*param_3 - 1) - uVar8) * uVar9) + (long)local_50 <=
          (*(long *)(lVar1 + 0x80) - (ulong)uVar9) + *(long *)(lVar1 + 0x88))) {
        lVar4 = (long)(short)(*local_50 << 8 | *local_50 >> 8) << 2;
        *param_2 = lVar4;
        *(ushort *)(param_2 + 1) = local_50[1] << 8 | local_50[1] >> 8;
        uVar7 = local_50[2] << 8 | local_50[2] >> 8;
        *(ushort *)((long)param_2 + 10) = uVar7;
        if ((char)uVar2 == '\0') {
          local_50 = local_50 + 3;
        }
        else {
          uVar2 = *(uint *)(local_50 + 3);
          local_50 = local_50 + 5;
          uVar12 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18);
          if (uVar12 != 0xffffffff) {
            lVar4 = *(long *)(param_1 + 0x380);
            plVar11 = &local_48;
            do {
              if (*(long *)(lVar1 + 0x78) == 0) {
                uVar5 = uVar12 & 0xffffffff;
                uVar3 = 0;
              }
              else {
                uVar5 = *(ulong *)(lVar1 + 0x68) - 1;
                if (uVar12 < *(ulong *)(lVar1 + 0x68)) {
                  uVar5 = uVar12;
                }
                uVar3 = *(undefined4 *)(*(long *)(lVar1 + 0x70) + uVar5 * 4);
                uVar5 = (ulong)*(uint *)(*(long *)(lVar1 + 0x78) + uVar5 * 4);
              }
              plVar10 = (long *)((long)plVar11 + 4);
              uVar12 = uVar12 + 1;
              uVar3 = (**(code **)(lVar4 + 0x70))(param_1,lVar1 + 0x48,uVar3,uVar5);
              *(undefined4 *)plVar11 = uVar3;
              plVar11 = plVar10;
            } while (plVar10 != local_40);
            uVar8 = param_3[1];
            lVar4 = *param_2 + (long)(int)local_48 * 4;
            uVar7 = *(short *)((long)param_2 + 10) + local_48._4_2_;
          }
          *param_2 = lVar4;
          *(ushort *)((long)param_2 + 10) = uVar7;
        }
        uVar6 = 1;
        param_3[1] = uVar8 + 1;
        *(ushort **)(param_3 + 2) = local_50;
      }
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tt_face_get_color_glyph_clipbox(long param_1,uint param_2,long *param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  
  lVar16 = *(long *)(param_1 + 0x5c0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar16 != 0) && (pcVar1 = *(char **)(lVar16 + 0x38), pcVar1 != (char *)0x0)) {
    uVar18 = *(ulong *)(lVar16 + 0x88);
    lVar15 = *(long *)(lVar16 + 0x80) + uVar18;
    if ((pcVar1 <= (char *)(lVar15 - 5U)) && (*pcVar1 == '\x01')) {
      uVar6 = *(uint *)(pcVar1 + 1);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar18;
      lVar7 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar5 = (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                     uVar6 << 0x18);
      if (uVar5 <= lVar7 + (uVar18 - lVar7 >> 1) >> 2) {
        if ((pcVar1 + 5 <= (ushort *)(lVar15 + uVar5 * -7)) && (uVar5 != 0)) {
          puVar8 = (ushort *)(pcVar1 + 5);
          do {
            puVar9 = (ushort *)((long)puVar8 + 7);
            if (((ushort)(*puVar8 << 8 | *puVar8 >> 8) <= param_2) &&
               (param_2 <= (ushort)(puVar8[1] << 8 | puVar8[1] >> 8))) {
              pbVar4 = (byte *)(pcVar1 + ((uint)(byte)puVar8[2] << 0x10 |
                                          (uint)*(byte *)((long)puVar8 + 5) << 8 |
                                         (uint)(byte)puVar8[3]));
              if ((pbVar4 <= (byte *)(lVar15 - 1U)) &&
                 ((*pbVar4 < 3 && (pbVar4 + 1 <= (byte *)(lVar15 - 8U))))) {
                lVar7 = *(long *)(param_1 + 0xa0);
                lVar10 = (long)(short)(*(ushort *)(pbVar4 + 1) << 8 | *(ushort *)(pbVar4 + 1) >> 8)
                         * (long)*(int *)(lVar7 + 0x20);
                lVar14 = lVar10 + 0x8000 + (lVar10 >> 0x3f) >> 0x10;
                lVar10 = (long)(short)(*(ushort *)(pbVar4 + 3) << 8 | *(ushort *)(pbVar4 + 3) >> 8)
                         * (long)*(int *)(lVar7 + 0x28);
                lVar11 = lVar10 + 0x8000 + (lVar10 >> 0x3f) >> 0x10;
                lVar10 = (long)(short)(*(ushort *)(pbVar4 + 5) << 8 | *(ushort *)(pbVar4 + 5) >> 8)
                         * (long)*(int *)(lVar7 + 0x20);
                lVar13 = lVar10 + 0x8000 + (lVar10 >> 0x3f) >> 0x10;
                lVar10 = (long)(short)(*(ushort *)(pbVar4 + 7) << 8 | *(ushort *)(pbVar4 + 7) >> 8)
                         * (long)*(int *)(lVar7 + 0x28);
                lVar10 = lVar10 + 0x8000 + (lVar10 >> 0x3f) >> 0x10;
                if (*pbVar4 != 2) goto LAB_001111dc;
                local_88 = (undefined1  [16])0x0;
                if (pbVar4 + 9 <= (byte *)(lVar15 + -4)) {
                  uVar6 = *(uint *)(pbVar4 + 9);
                  uVar18 = (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                  uVar6 << 0x18);
                  if (uVar18 != 0xffffffff) {
                    lVar15 = *(long *)(param_1 + 0x380);
                    plVar12 = (long *)local_88;
                    do {
                      if (*(long *)(lVar16 + 0x78) == 0) {
                        uVar5 = uVar18 & 0xffffffff;
                        uVar3 = 0;
                      }
                      else {
                        uVar5 = *(ulong *)(lVar16 + 0x68) - 1;
                        if (uVar18 < *(ulong *)(lVar16 + 0x68)) {
                          uVar5 = uVar18;
                        }
                        uVar3 = *(undefined4 *)(*(long *)(lVar16 + 0x70) + uVar5 * 4);
                        uVar5 = (ulong)*(uint *)(*(long *)(lVar16 + 0x78) + uVar5 * 4);
                      }
                      plVar19 = (long *)((long)plVar12 + 4);
                      uVar3 = (**(code **)(lVar15 + 0x70))(param_1,lVar16 + 0x48,uVar3,uVar5);
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)plVar12 = uVar3;
                      plVar12 = plVar19;
                    } while (&local_78 != plVar19);
                    lVar7 = *(long *)(param_1 + 0xa0);
                  }
                  lVar16 = (long)(int)local_88._0_4_ * (long)*(int *)(lVar7 + 0x20);
                  lVar14 = lVar14 + (int)((ulong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                  lVar16 = (long)(int)local_88._4_4_ * (long)*(int *)(lVar7 + 0x28);
                  lVar11 = lVar11 + (int)((ulong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                  lVar16 = (long)(int)local_88._8_4_ * (long)*(int *)(lVar7 + 0x20);
                  lVar13 = lVar13 + (int)((ulong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                  lVar16 = (long)(int)local_88._12_4_ * (long)*(int *)(lVar7 + 0x28);
                  lVar10 = lVar10 + (int)((ulong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
LAB_001111dc:
                  uVar17 = 1;
                  plVar12 = (long *)local_88;
                  local_68 = lVar13;
                  local_58 = lVar13;
                  lVar16 = *(long *)(param_1 + 0xf0);
                  local_78 = lVar14;
                  lStack_70 = lVar10;
                  lStack_60 = lVar10;
                  local_88._8_8_ = lVar11;
                  local_88._0_8_ = lVar14;
                  lStack_50 = lVar11;
                  uVar6 = *(uint *)(lVar16 + 0x30);
                  do {
                    if ((uVar6 & 1) != 0) {
                      FT_Vector_Transform(plVar12);
                      lVar16 = *(long *)(param_1 + 0xf0);
                      uVar6 = *(uint *)(lVar16 + 0x30);
                    }
                    if ((uVar6 & 2) != 0) {
                      lVar15 = *(long *)(lVar16 + 0x28);
                      *plVar12 = *(long *)(lVar16 + 0x20) + *plVar12;
                      plVar12[1] = lVar15 + plVar12[1];
                    }
                    plVar12 = plVar12 + 2;
                  } while (plVar12 != &local_48);
                  *param_3 = local_88._0_8_;
                  param_3[1] = local_88._8_8_;
                  param_3[2] = local_78;
                  param_3[3] = lStack_70;
                  param_3[4] = local_68;
                  param_3[5] = lStack_60;
                  param_3[6] = local_58;
                  param_3[7] = lStack_50;
                  goto LAB_00111039;
                }
              }
              break;
            }
            puVar8 = puVar9;
          } while ((ushort *)(pcVar1 + uVar5 * 7 + 5) != puVar9);
        }
      }
    }
  }
  uVar17 = 0;
LAB_00111039:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



ulong tt_face_get_paint(long param_1,uint *param_2,ulong param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  uint *puVar6;
  char cVar7;
  short sVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  char cVar14;
  ulong uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte bVar19;
  ulong uVar20;
  uint *local_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  lVar9 = *(long *)(param_1 + 0x5c0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = local_80;
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
     (lVar11 = *(long *)(lVar9 + 0x80), lVar11 == 0)) {
    uVar15 = 0;
    goto LAB_00111528;
  }
  uVar15 = param_3 & 0xffffffff;
  if ((char)param_3 != '\0') {
    lVar9 = *(long *)(param_1 + 0xa0);
    lVar13 = *(long *)(param_1 + 0xf0);
    *param_4 = 0xc;
    *(uint **)(param_4 + 2) = param_2;
    lVar11 = *(long *)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    *(undefined1 *)(param_4 + 4) = 0;
    uStack_70 = 0;
    uVar16 = *(uint *)(lVar13 + 0x30);
    local_68 = 0;
    local_78 = (uint *)(lVar11 + 0x20 >> 6);
    lStack_60 = lVar9 + 0x20 >> 6;
    if ((uVar16 & 1) != 0) {
      FT_Matrix_Multiply(lVar13,&local_78);
      lVar13 = *(long *)(param_1 + 0xf0);
      uVar16 = *(uint *)(lVar13 + 0x30);
    }
    *(uint **)(param_4 + 6) = local_78;
    *(undefined8 *)(param_4 + 8) = uStack_70;
    *(undefined8 *)(param_4 + 0xc) = local_68;
    *(long *)(param_4 + 0xe) = lStack_60;
    if ((uVar16 & 2) == 0) {
      param_4[10] = 0;
      param_4[0xb] = 0;
      lVar9 = 0;
    }
    else {
      *(long *)(param_4 + 10) = *(long *)(lVar13 + 0x20) << 10;
      lVar9 = *(long *)(lVar13 + 0x28) << 10;
    }
    *(long *)(param_4 + 0x10) = lVar9;
    uVar15 = 1;
    puVar1 = local_80;
    goto LAB_00111528;
  }
  local_78 = (uint *)0x0;
  local_48 = 0;
  local_58 = (undefined1  [16])0x0;
  if ((param_2 == (uint *)0x0) || (puVar6 = *(uint **)(lVar9 + 0x40), param_2 < puVar6))
  goto LAB_00111528;
  lVar13 = *(long *)(lVar9 + 0x88);
  puVar2 = (uint *)(lVar11 + -2 + lVar13);
  if (puVar2 < param_2) goto LAB_00111528;
  bVar4 = (byte)*param_2;
  local_80 = (uint *)((long)param_2 + 1);
  uVar20 = (ulong)bVar4;
  uVar16 = (uint)bVar4;
  *param_4 = uVar16;
  puVar1 = local_80;
  if (0x20 < uVar16) goto LAB_00111528;
  if (uVar16 == 1) {
    bVar4 = *(byte *)((long)param_2 + 1);
    if (*(ulong *)(lVar9 + 0x28) < (ulong)bVar4) goto LAB_00111528;
    local_80 = (uint *)((long)param_2 + 6);
    uVar16 = *(uint *)((long)param_2 + 2);
    uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
    puVar1 = local_80;
    if (*(ulong *)(lVar9 + 0x28) < (ulong)(bVar4 + uVar16)) goto LAB_00111528;
    param_4[2] = (uint)bVar4;
    lVar9 = *(long *)(lVar9 + 0x30);
    param_4[3] = 0;
    *(ulong *)(param_4 + 4) = lVar9 + 4 + (ulong)(uVar16 * 4);
    goto LAB_001115f3;
  }
  if (bVar4 - 2 < 2) {
    if ((local_80 < puVar6) || (puVar2 = (uint *)(lVar11 + -4 + lVar13), puVar2 < local_80))
    goto LAB_00111528;
    local_80 = (uint *)((long)param_2 + 5);
    *(ushort *)(param_4 + 2) =
         *(ushort *)((long)param_2 + 1) << 8 | *(ushort *)((long)param_2 + 1) >> 8;
    *(ushort *)((long)param_4 + 10) =
         *(ushort *)((long)param_2 + 3) << 8 | *(ushort *)((long)param_2 + 3) >> 8;
    if (uVar16 == 3) {
      puVar1 = local_80;
      if ((puVar2 < local_80) || (local_80 < puVar6)) goto LAB_00111528;
      uVar16 = *(uint *)((long)param_2 + 5);
      uVar15 = (ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                      uVar16 << 0x18);
      if (uVar15 == 0xffffffff) {
        sVar8 = 0;
      }
      else {
        if (*(long *)(lVar9 + 0x78) == 0) {
          uVar12 = 0;
        }
        else {
          if (*(ulong *)(lVar9 + 0x68) <= uVar15) {
            uVar15 = *(ulong *)(lVar9 + 0x68) - 1;
          }
          uVar12 = *(undefined4 *)(*(long *)(lVar9 + 0x70) + uVar15 * 4);
          uVar15 = (ulong)*(uint *)(*(long *)(lVar9 + 0x78) + uVar15 * 4);
        }
        sVar8 = (**(code **)(*(long *)(param_1 + 0x380) + 0x70))(param_1,lVar9 + 0x48,uVar12,uVar15)
        ;
      }
      *(short *)((long)param_4 + 10) = *(short *)((long)param_4 + 10) + sVar8;
    }
    *param_4 = 2;
    goto LAB_001115f3;
  }
  if (bVar4 == 0xb) {
    if ((puVar2 < local_80) || (local_80 < puVar6)) goto LAB_00111528;
    param_4[2] = (uint)(ushort)(*(ushort *)((long)param_2 + 1) << 8 |
                               *(ushort *)((long)param_2 + 1) >> 8);
    goto LAB_001115f3;
  }
  cVar7 = get_child_table_pointer(lVar9);
  cVar14 = (char)param_3;
  puVar1 = local_80;
  if (cVar7 == '\0') goto LAB_00111528;
  bVar19 = (byte)uVar20;
  switch(bVar19) {
  case 4:
    goto switchD_001117c4_caseD_4;
  case 5:
    cVar14 = '\x01';
switchD_001117c4_caseD_4:
    if (((local_78 < puVar6) || ((uint *)(lVar11 + -3 + lVar13) < local_78)) ||
       (2 < (byte)*local_78)) goto LAB_00111528;
    param_4[2] = (uint)(byte)*local_78;
    uVar5 = *(ushort *)((long)local_78 + 1);
    *(byte **)(param_4 + 6) = (byte *)((long)local_78 + 3);
    param_4[5] = 0;
    *(char *)(param_4 + 8) = cVar14;
    param_4[4] = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
    if ((local_80 < puVar6) || ((uint *)(lVar11 + -0xc + lVar13) < local_80)) goto LAB_00111528;
    puVar1 = local_80 + 3;
    *(long *)(param_4 + 10) = (long)(short)((ushort)*local_80 << 8 | (ushort)*local_80 >> 8) << 0x10
    ;
    *(long *)(param_4 + 0xc) =
         (long)(short)(*(ushort *)((long)local_80 + 2) << 8 | *(ushort *)((long)local_80 + 2) >> 8)
         << 0x10;
    *(long *)(param_4 + 0xe) =
         (long)(short)((ushort)local_80[1] << 8 | (ushort)local_80[1] >> 8) << 0x10;
    *(long *)(param_4 + 0x10) =
         (long)(short)(*(ushort *)((long)local_80 + 6) << 8 | *(ushort *)((long)local_80 + 6) >> 8)
         << 0x10;
    *(long *)(param_4 + 0x12) =
         (long)(short)((ushort)local_80[2] << 8 | (ushort)local_80[2] >> 8) << 0x10;
    *(long *)(param_4 + 0x14) =
         (long)(short)(*(ushort *)((long)local_80 + 10) << 8 | *(ushort *)((long)local_80 + 10) >> 8
                      ) << 0x10;
    if (cVar14 != '\0') {
      if ((puVar1 < puVar6) || ((uint *)(lVar11 + -4 + lVar13) < puVar1)) goto LAB_00111528;
      uVar16 = local_80[3];
      local_80 = local_80 + 4;
      cVar7 = get_deltas_for_var_index_base
                        (param_1,lVar9,
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18,6,local_58);
      puVar1 = local_80;
      if (cVar7 == '\0') goto LAB_00111528;
      *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)local_58._0_4_ * 0x10000;
      *(long *)(param_4 + 0xc) = *(long *)(param_4 + 0xc) + (long)(int)local_58._4_4_ * 0x10000;
      *(long *)(param_4 + 0xe) = *(long *)(param_4 + 0xe) + (long)(int)local_58._8_4_ * 0x10000;
      *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + (long)(int)local_58._12_4_ * 0x10000;
      *(long *)(param_4 + 0x12) = *(long *)(param_4 + 0x12) + (long)(int)local_48 * 0x10000;
      *(long *)(param_4 + 0x14) = *(long *)(param_4 + 0x14) + (long)local_48._4_4_ * 0x10000;
    }
    local_80 = puVar1;
    *param_4 = 4;
    break;
  case 6:
    goto switchD_001117c4_caseD_6;
  case 7:
    cVar14 = '\x01';
switchD_001117c4_caseD_6:
    if (((local_78 < puVar6) || ((uint *)(lVar11 + -3 + lVar13) < local_78)) ||
       (2 < (byte)*local_78)) goto LAB_00111528;
    param_4[2] = (uint)(byte)*local_78;
    uVar5 = *(ushort *)((long)local_78 + 1);
    *(byte **)(param_4 + 6) = (byte *)((long)local_78 + 3);
    param_4[5] = 0;
    *(char *)(param_4 + 8) = cVar14;
    param_4[4] = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
    if ((local_80 < puVar6) || ((uint *)(lVar11 + -0xc + lVar13) < local_80)) goto LAB_00111528;
    *(long *)(param_4 + 10) = (long)(short)((ushort)*local_80 << 8 | (ushort)*local_80 >> 8) << 0x10
    ;
    *(long *)(param_4 + 0xc) =
         (long)(short)(*(ushort *)((long)local_80 + 2) << 8 | *(ushort *)((long)local_80 + 2) >> 8)
         << 0x10;
    lVar10 = (long)(short)((ushort)local_80[1] << 8 | (ushort)local_80[1] >> 8) << 0x10;
    if (lVar10 < 0) {
      lVar10 = 0x7fffffff;
    }
    *(long *)(param_4 + 0xe) = lVar10;
    puVar1 = local_80 + 3;
    *(long *)(param_4 + 0x10) =
         (long)(short)(*(ushort *)((long)local_80 + 6) << 8 | *(ushort *)((long)local_80 + 6) >> 8)
         << 0x10;
    *(long *)(param_4 + 0x12) =
         (long)(short)((ushort)local_80[2] << 8 | (ushort)local_80[2] >> 8) << 0x10;
    lVar10 = (long)(short)(*(ushort *)((long)local_80 + 10) << 8 |
                          *(ushort *)((long)local_80 + 10) >> 8) << 0x10;
    if (lVar10 < 0) {
      lVar10 = 0x7fffffff;
    }
    *(long *)(param_4 + 0x14) = lVar10;
    if (cVar14 != '\0') {
      if ((puVar1 < puVar6) || ((uint *)(lVar11 + -4 + lVar13) < puVar1)) goto LAB_00111528;
      uVar16 = local_80[3];
      local_80 = local_80 + 4;
      cVar7 = get_deltas_for_var_index_base
                        (param_1,lVar9,
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18,6,local_58);
      puVar1 = local_80;
      if (cVar7 == '\0') goto LAB_00111528;
      *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)local_58._0_4_ * 0x10000;
      *(long *)(param_4 + 0xc) = *(long *)(param_4 + 0xc) + (long)(int)local_58._4_4_ * 0x10000;
      *(long *)(param_4 + 0xe) = *(long *)(param_4 + 0xe) + (long)(int)local_58._8_4_ * 0x10000;
      *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + (long)(int)local_58._12_4_ * 0x10000;
      *(long *)(param_4 + 0x12) = *(long *)(param_4 + 0x12) + (long)(int)local_48 * 0x10000;
      *(long *)(param_4 + 0x14) = *(long *)(param_4 + 0x14) + (long)local_48._4_4_ * 0x10000;
    }
    local_80 = puVar1;
    *param_4 = 6;
    break;
  case 8:
    goto switchD_001117c4_caseD_8;
  case 9:
    cVar14 = '\x01';
switchD_001117c4_caseD_8:
    if (((local_78 < puVar6) || ((uint *)(lVar11 + -3 + lVar13) < local_78)) ||
       (2 < (byte)*local_78)) goto LAB_00111528;
    param_4[2] = (uint)(byte)*local_78;
    uVar5 = *(ushort *)((long)local_78 + 1);
    *(byte **)(param_4 + 6) = (byte *)((long)local_78 + 3);
    param_4[5] = 0;
    *(char *)(param_4 + 8) = cVar14;
    param_4[4] = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
    if ((local_80 < puVar6) || ((uint *)(lVar11 + -8 + lVar13) < local_80)) goto LAB_00111528;
    puVar1 = local_80 + 2;
    *(long *)(param_4 + 10) = (long)(short)((ushort)*local_80 << 8 | (ushort)*local_80 >> 8) << 0x10
    ;
    *(long *)(param_4 + 0xc) =
         (long)(short)(*(ushort *)((long)local_80 + 2) << 8 | *(ushort *)((long)local_80 + 2) >> 8)
         << 0x10;
    *(long *)(param_4 + 0xe) =
         (long)(short)((ushort)local_80[1] << 8 | (ushort)local_80[1] >> 8) << 2;
    *(long *)(param_4 + 0x10) =
         (long)(short)(*(ushort *)((long)local_80 + 6) << 8 | *(ushort *)((long)local_80 + 6) >> 8)
         << 2;
    if (cVar14 != '\0') {
      if ((puVar1 < puVar6) || ((uint *)(lVar11 + -4 + lVar13) < puVar1)) goto LAB_00111528;
      uVar16 = local_80[2];
      local_80 = local_80 + 3;
      cVar7 = get_deltas_for_var_index_base
                        (param_1,lVar9,
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18,4,local_58);
      puVar1 = local_80;
      if (cVar7 == '\0') goto LAB_00111528;
      *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)local_58._0_4_ * 0x10000;
      *(long *)(param_4 + 0xc) = *(long *)(param_4 + 0xc) + (long)(int)local_58._4_4_ * 0x10000;
      *(long *)(param_4 + 0xe) = *(long *)(param_4 + 0xe) + (long)(int)local_58._8_4_ * 4;
      *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + (long)(int)local_58._12_4_ * 4;
    }
    local_80 = puVar1;
    *param_4 = 8;
    break;
  case 10:
    if ((local_80 < puVar6) || (puVar2 < local_80)) goto LAB_00111528;
    *(undefined1 *)(param_4 + 4) = 0;
    *(uint **)(param_4 + 2) = local_78;
    param_4[6] = (uint)(ushort)((ushort)*local_80 << 8 | (ushort)*local_80 >> 8);
    break;
  default:
    if (bVar4 - 0x10 < 8) {
      *(undefined1 *)(param_4 + 4) = 0;
      *(uint **)(param_4 + 2) = local_78;
      if ((puVar2 < local_80) || (local_80 < puVar6)) goto LAB_00111528;
      puVar1 = (uint *)((long)local_80 + 2);
      lVar10 = (long)(short)((ushort)*local_80 << 8 | (ushort)*local_80 >> 8) << 2;
      *(long *)(param_4 + 6) = lVar10;
      if (bVar4 - 0x10 < 4) {
        if ((puVar1 < puVar6) || (puVar2 < puVar1)) goto LAB_00111528;
        lVar10 = (long)(short)(*(ushort *)((long)local_80 + 2) << 8 |
                              *(ushort *)((long)local_80 + 2) >> 8) << 2;
        puVar1 = local_80 + 1;
      }
      local_80 = puVar1;
      *(long *)(param_4 + 8) = lVar10;
      if ((bVar19 & 0xfa) == 0x12) {
        puVar1 = local_80;
        if ((local_80 < puVar6) || ((uint *)(lVar11 + -4 + lVar13) < local_80)) goto LAB_00111528;
        *(long *)(param_4 + 10) =
             (long)(short)((ushort)*local_80 << 8 | (ushort)*local_80 >> 8) << 0x10;
        lVar10 = (long)(short)(*(ushort *)((long)local_80 + 2) << 8 |
                              *(ushort *)((long)local_80 + 2) >> 8) << 0x10;
        local_80 = local_80 + 1;
      }
      else {
        lVar10 = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
      }
      *(long *)(param_4 + 0xc) = lVar10;
      if ((0xaa0000UL >> (uVar20 & 0x3f) & 1) != 0) {
        puVar1 = local_80;
        if ((local_80 < puVar6) || ((uint *)(lVar11 + -4 + lVar13) < local_80)) goto LAB_00111528;
        uVar16 = *local_80;
        local_80 = local_80 + 1;
        uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        if (bVar4 == 0x11) {
          cVar7 = get_deltas_for_var_index_base(param_1,lVar9,uVar16,2,local_58);
          puVar1 = local_80;
          if (cVar7 == '\0') goto LAB_00111528;
          *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)(int)local_58._0_4_ * 4;
          *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)(int)local_58._4_4_ * 4;
        }
        if (*param_4 == 0x13) {
          cVar7 = get_deltas_for_var_index_base(param_1,lVar9,uVar16,4,local_58);
          puVar1 = local_80;
          if (cVar7 == '\0') goto LAB_00111528;
          *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)(int)local_58._0_4_ * 4;
          *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)(int)local_58._4_4_ * 4;
          *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)local_58._8_4_ * 0x10000;
          *(long *)(param_4 + 0xc) = *(long *)(param_4 + 0xc) + (long)(int)local_58._12_4_ * 0x10000
          ;
        }
        if (*param_4 == 0x15) {
          cVar7 = get_deltas_for_var_index_base(param_1,lVar9,uVar16,1,local_58);
          puVar1 = local_80;
          if (cVar7 == '\0') goto LAB_00111528;
          *(long *)(param_4 + 6) = (long)(int)local_58._0_4_ * 4 + *(long *)(param_4 + 6);
          *(long *)(param_4 + 8) = (long)(int)local_58._0_4_ * 4 + *(long *)(param_4 + 8);
        }
        if (*param_4 == 0x17) {
          cVar7 = get_deltas_for_var_index_base(param_1,lVar9,uVar16,3,local_58);
          puVar1 = local_80;
          if (cVar7 == '\0') goto LAB_00111528;
          *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)(int)local_58._0_4_ * 4;
          *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)(int)local_58._0_4_ * 4;
          *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)local_58._4_4_ * 0x10000;
          *(long *)(param_4 + 0xc) = *(long *)(param_4 + 0xc) + (long)(int)local_58._8_4_ * 0x10000;
        }
      }
      *param_4 = 0x10;
    }
    else if ((byte)(bVar19 - 0x18) < 4) {
      *(undefined1 *)(param_4 + 4) = 0;
      *(uint **)(param_4 + 2) = local_78;
      if ((local_80 < puVar6) || (puVar2 < local_80)) goto LAB_00111528;
      puVar1 = (uint *)((long)local_80 + 2);
      *(long *)(param_4 + 6) = (long)(short)((ushort)*local_80 << 8 | (ushort)*local_80 >> 8) << 2;
      if (bVar4 - 0x1a < 2) {
        if ((puVar1 < puVar6) || ((uint *)(lVar11 + -4 + lVar13) < puVar1)) goto LAB_00111528;
        *(long *)(param_4 + 8) =
             (long)(short)(*(ushort *)((long)local_80 + 2) << 8 |
                          *(ushort *)((long)local_80 + 2) >> 8) << 0x10;
        lVar10 = (long)(short)((ushort)local_80[1] << 8 | (ushort)local_80[1] >> 8) << 0x10;
        local_80 = (uint *)((long)local_80 + 6);
      }
      else {
        lVar10 = 0;
        param_4[8] = 0;
        param_4[9] = 0;
        local_80 = puVar1;
      }
      *(long *)(param_4 + 10) = lVar10;
      if ((bVar19 & 0xfd) == 0x19) {
        puVar1 = local_80;
        if ((local_80 < puVar6) || ((uint *)(lVar11 + -4 + lVar13) < local_80)) goto LAB_00111528;
        uVar16 = *local_80;
        uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        if (bVar4 == 0x1b) {
          local_80 = local_80 + 1;
          cVar7 = get_deltas_for_var_index_base(param_1,lVar9,uVar16,3,local_58);
          puVar1 = local_80;
          if (cVar7 == '\0') goto LAB_00111528;
          *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)(int)local_58._0_4_ * 4;
          *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)(int)local_58._4_4_ * 0x10000;
          *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)local_58._8_4_ * 0x10000;
        }
        else {
          local_80 = local_80 + 1;
          cVar7 = get_deltas_for_var_index_base(param_1,lVar9,uVar16,1,local_58);
          puVar1 = local_80;
          if (cVar7 == '\0') goto LAB_00111528;
          *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)(int)local_58._0_4_ * 4;
        }
      }
      *param_4 = 0x18;
    }
    else if (bVar4 - 0x1c < 4) {
      *(undefined1 *)(param_4 + 4) = 0;
      *(uint **)(param_4 + 2) = local_78;
      if ((local_80 < puVar6) || (puVar2 = (uint *)(lVar11 + -4 + lVar13), puVar2 < local_80))
      goto LAB_00111528;
      puVar1 = local_80 + 1;
      *(long *)(param_4 + 6) = (long)(short)((ushort)*local_80 << 8 | (ushort)*local_80 >> 8) << 2;
      *(long *)(param_4 + 8) =
           (long)(short)(*(ushort *)((long)local_80 + 2) << 8 | *(ushort *)((long)local_80 + 2) >> 8
                        ) << 2;
      if (bVar4 - 0x1e < 2) {
        if ((puVar1 < puVar6) || (puVar2 < puVar1)) goto LAB_00111528;
        *(long *)(param_4 + 10) =
             (long)(short)((ushort)local_80[1] << 8 | (ushort)local_80[1] >> 8) << 0x10;
        lVar11 = (long)(short)(*(ushort *)((long)local_80 + 6) << 8 |
                              *(ushort *)((long)local_80 + 6) >> 8) << 0x10;
        local_80 = local_80 + 2;
      }
      else {
        param_4[10] = 0;
        param_4[0xb] = 0;
        lVar11 = 0;
        local_80 = puVar1;
      }
      *(long *)(param_4 + 0xc) = lVar11;
      if ((bVar19 & 0xfd) == 0x1d) {
        puVar1 = local_80;
        if ((puVar2 < local_80) || (local_80 < puVar6)) goto LAB_00111528;
        uVar16 = *local_80;
        local_80 = local_80 + 1;
        uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        if (bVar4 == 0x1d) {
          cVar7 = get_deltas_for_var_index_base(param_1,lVar9,uVar16,2,local_58);
          puVar1 = local_80;
          if (cVar7 == '\0') goto LAB_00111528;
          *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)(int)local_58._0_4_ * 4;
          *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)(int)local_58._4_4_ * 4;
          if (*param_4 != 0x1f) goto LAB_001121f1;
        }
        cVar7 = get_deltas_for_var_index_base(param_1,lVar9,uVar16,4,local_58);
        puVar1 = local_80;
        if (cVar7 == '\0') goto LAB_00111528;
        *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)(int)local_58._0_4_ * 4;
        *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)(int)local_58._4_4_ * 4;
        *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)local_58._8_4_ * 0x10000;
        *(long *)(param_4 + 0xc) = *(long *)(param_4 + 0xc) + (long)(int)local_58._12_4_ * 0x10000;
      }
LAB_001121f1:
      *param_4 = 0x1c;
    }
    else {
      if (bVar4 != 0x20) goto LAB_00111528;
      *(undefined1 *)(param_4 + 4) = 0;
      *(uint **)(param_4 + 2) = local_78;
      if ((local_80 < puVar6) || ((uint *)(lVar11 + -1 + lVar13) < local_80)) goto LAB_00111528;
      puVar1 = (uint *)((long)local_80 + 1U);
      if (0x1b < (byte)*local_80) goto LAB_00111528;
      param_4[6] = (uint)(byte)*local_80;
      local_80 = (uint *)((long)local_80 + 1U);
      cVar7 = get_child_table_pointer(lVar9,param_2,&local_80,&local_78);
      puVar1 = local_80;
      if (cVar7 == '\0') goto LAB_00111528;
      *(undefined1 *)(param_4 + 10) = 0;
      *(uint **)(param_4 + 8) = local_78;
    }
    break;
  case 0xc:
  case 0xd:
    *(undefined1 *)(param_4 + 4) = 0;
    *(uint **)(param_4 + 2) = local_78;
    cVar7 = get_child_table_pointer(lVar9,param_2,&local_80,&local_78);
    puVar1 = local_80;
    if (((cVar7 == '\0') || (local_80 = local_78, puVar1 = local_80, local_78 < puVar6)) ||
       ((uint *)(lVar11 + -0x18 + lVar13) < local_78)) goto LAB_00111528;
    uVar16 = *local_78;
    local_80 = local_78 + 6;
    *(long *)(param_4 + 6) =
         (long)(int)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                    uVar16 << 0x18);
    uVar16 = local_78[1];
    *(long *)(param_4 + 0xc) =
         (long)(int)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                    uVar16 << 0x18);
    uVar16 = local_78[2];
    *(long *)(param_4 + 8) =
         (long)(int)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                    uVar16 << 0x18);
    uVar16 = local_78[3];
    *(long *)(param_4 + 0xe) =
         (long)(int)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                    uVar16 << 0x18);
    uVar16 = local_78[4];
    *(long *)(param_4 + 10) =
         (long)(int)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                    uVar16 << 0x18);
    uVar16 = local_78[5];
    *(long *)(param_4 + 0x10) =
         (long)(int)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                    uVar16 << 0x18);
    if (bVar4 == 0xd) {
      puVar1 = local_80;
      if ((local_80 < puVar6) || ((uint *)(lVar11 + -4 + lVar13) < local_80)) goto LAB_00111528;
      local_80 = local_78 + 7;
      uVar16 = local_78[6];
      cVar7 = get_deltas_for_var_index_base
                        (param_1,lVar9,
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18,6,local_58);
      puVar1 = local_80;
      if (cVar7 == '\0') goto LAB_00111528;
      auVar17._4_4_ = local_58._8_4_;
      auVar17._0_4_ = local_58._0_4_;
      auVar17._8_4_ = local_58._8_4_;
      auVar17._12_4_ = -(uint)((int)local_58._8_4_ < 0);
      auVar18._0_8_ = CONCAT44(-(uint)((int)local_48 < 0),(int)local_48);
      auVar18._8_4_ = local_58._4_4_;
      auVar18._12_4_ = -(uint)((int)local_58._4_4_ < 0);
      *(long *)(param_4 + 6) =
           CONCAT44(-(uint)((int)local_58._0_4_ < 0),local_58._0_4_) + *(long *)(param_4 + 6);
      *(long *)(param_4 + 8) = auVar17._8_8_ + *(long *)(param_4 + 8);
      *(long *)(param_4 + 10) = auVar18._0_8_ + *(long *)(param_4 + 10);
      *(long *)(param_4 + 0xc) = auVar18._8_8_ + *(long *)(param_4 + 0xc);
      *(long *)(param_4 + 0xe) = (long)(int)local_58._12_4_ + *(long *)(param_4 + 0xe);
      *(long *)(param_4 + 0x10) = (long)local_48._4_4_ + *(long *)(param_4 + 0x10);
    }
    *param_4 = 0xc;
    break;
  case 0xe:
  case 0xf:
    *(undefined1 *)(param_4 + 4) = 0;
    *(uint **)(param_4 + 2) = local_78;
    if ((local_80 < puVar6) || (puVar3 = (uint *)(lVar11 + -4 + lVar13), puVar3 < local_80))
    goto LAB_00111528;
    puVar1 = local_80 + 1;
    *(long *)(param_4 + 6) = (long)(short)((ushort)*local_80 << 8 | (ushort)*local_80 >> 8) << 0x10;
    *(long *)(param_4 + 8) =
         (long)(short)(*(ushort *)((long)local_80 + 2) << 8 | *(ushort *)((long)local_80 + 2) >> 8)
         << 0x10;
    if (bVar4 == 0xf) {
      if ((puVar1 < puVar6) || (puVar3 < puVar1)) goto LAB_00111528;
      uVar16 = local_80[1];
      local_80 = local_80 + 2;
      cVar7 = get_deltas_for_var_index_base
                        (param_1,lVar9,
                         uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18,2,local_58,puVar2,uVar20,param_2);
      puVar1 = local_80;
      if (cVar7 == '\0') goto LAB_00111528;
      *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)(int)local_58._0_4_ * 0x10000;
      *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)(int)local_58._4_4_ * 0x10000;
    }
    local_80 = puVar1;
    *param_4 = 0xe;
  }
LAB_001115f3:
  uVar15 = 1;
  puVar1 = local_80;
LAB_00111528:
  local_80 = puVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_sfnt_table_cold(void)

{
  return 0;
}


