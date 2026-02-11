
undefined8 pfr_cmap_init(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(*param_1 + 0x248);
  puVar3 = *(uint **)(*param_1 + 600);
  *(uint *)(param_1 + 3) = uVar1;
  param_1[4] = (long)puVar3;
  if (1 < uVar1) {
    puVar4 = puVar3 + 4;
    uVar5 = *puVar3;
    do {
      uVar2 = *puVar4;
      if (uVar2 <= uVar5) {
        return 8;
      }
      puVar4 = puVar4 + 4;
      uVar5 = uVar2;
    } while (puVar4 != puVar3 + (ulong)(uVar1 - 2) * 4 + 8);
  }
  return 0;
}



void pfr_cmap_done(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



uint pfr_cmap_char_index(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar1 = uVar3 >> 1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      while( true ) {
        uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x10);
        if (uVar2 == param_2) {
          return uVar1 + 1;
        }
        if (param_2 <= uVar2) break;
        uVar4 = uVar1 + 1;
        uVar1 = (uVar1 + param_2) - uVar2;
        if (uVar1 < uVar3) goto LAB_001000ab;
LAB_001000cd:
        uVar1 = (uVar3 - uVar4 >> 1) + uVar4;
        if (uVar3 <= uVar4) goto LAB_001000d9;
      }
      uVar2 = (uVar1 + param_2) - uVar2;
      bVar5 = uVar1 <= uVar2;
      uVar3 = uVar1;
      uVar1 = uVar2;
      if (bVar5) goto LAB_001000cd;
LAB_001000ab:
      if (uVar1 < uVar4) goto LAB_001000cd;
    } while (uVar4 < uVar3);
LAB_001000d9:
    uVar3 = 0;
  }
  return uVar3;
}



uint pfr_cmap_char_next(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar5 = *param_2;
  uVar3 = 0;
  if (uVar6 != 0) {
    do {
      uVar5 = uVar5 + 1;
      uVar3 = 0;
      uVar2 = uVar6 >> 1;
      uVar4 = uVar6;
      while( true ) {
        uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar2 * 0x10);
        if (uVar1 == uVar5) break;
        if (uVar1 < uVar5) {
          uVar3 = (ulong)(uVar2 + 1);
          uVar1 = (uVar2 + uVar5) - uVar1;
          if (uVar1 < uVar4) goto LAB_0010012c;
LAB_0010014f:
          uVar1 = (uint)uVar3;
          uVar2 = (uVar4 - uVar1 >> 1) + uVar1;
          if (uVar4 <= uVar1) {
LAB_0010015b:
            uVar5 = (uint)uVar3;
            if (uVar6 <= uVar5) {
              *param_2 = 0;
              return 0;
            }
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar5 + 1;
              uVar3 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + uVar3 * 0x10);
            }
            goto LAB_00100172;
          }
        }
        else {
          uVar1 = (uVar2 + uVar5) - uVar1;
          uVar4 = uVar2;
          if (uVar2 <= uVar1) goto LAB_0010014f;
LAB_0010012c:
          uVar2 = uVar1;
          if (uVar2 < (uint)uVar3) goto LAB_0010014f;
          if (uVar4 <= (uint)uVar3) goto LAB_0010015b;
        }
      }
    } while (uVar2 == 0);
    uVar6 = uVar2 + 1;
    uVar3 = (ulong)uVar5;
  }
LAB_00100172:
  *param_2 = (uint)uVar3;
  return uVar6;
}



undefined8 pfr_get_advance(long param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  uVar1 = 6;
  if (param_2 != 0) {
    if ((param_1 != 0) && (param_2 - 1U < *(uint *)(param_1 + 0x248))) {
      *param_3 = (long)*(int *)((ulong)(param_2 - 1U) * 0x10 + *(long *)(param_1 + 600) + 4);
      uVar1 = 0;
    }
  }
  return uVar1;
}



void pfr_glyph_close_contour(long param_1)

{
  short sVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  iVar4 = 0;
  sVar1 = *(short *)(lVar3 + 0x62);
  sVar2 = *(short *)(lVar3 + 0x60);
  iVar5 = sVar1 + -1;
  if (0 < sVar2) {
    iVar4 = (int)*(short *)(*(long *)(lVar3 + 0x78) + -2 + (long)sVar2 * 2);
  }
  if (iVar4 < iVar5) {
    plVar6 = (long *)((long)iVar4 * 0x10 + *(long *)(lVar3 + 0x68));
    plVar7 = (long *)(*(long *)(lVar3 + 0x68) + (long)iVar5 * 0x10);
    if ((*plVar6 != *plVar7) || (plVar6[1] != plVar7[1])) goto LAB_0010024c;
    iVar5 = sVar1 + -2;
    *(short *)(lVar3 + 0x62) = sVar1 + -1;
  }
  if (iVar5 < iVar4) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    return;
  }
LAB_0010024c:
  *(short *)(lVar3 + 0x60) = sVar2 + 1;
  *(short *)(*(long *)(lVar3 + 0x78) + (long)sVar2 * 2) = (short)iVar5;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



undefined8 pfr_face_get_kerning(long param_1,int param_2,int param_3,undefined1 (*param_4) [16])

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  byte bVar12;
  byte bVar13;
  uint *puVar14;
  
  uVar10 = param_2 - 1;
  uVar7 = param_3 - 1;
  *param_4 = (undefined1  [16])0x0;
  uVar9 = uVar7;
  if (uVar7 <= uVar10) {
    uVar9 = uVar10;
  }
  if (*(uint *)(param_1 + 0x248) <= uVar9) {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x268);
  uVar9 = *(int *)(*(long *)(param_1 + 600) + (ulong)uVar10 * 0x10) << 0x10 |
          (uint)*(ushort *)(*(long *)(param_1 + 600) + (ulong)uVar7 * 0x10);
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  while ((uVar9 < *(uint *)(plVar8 + 3) || (*(uint *)((long)plVar8 + 0x1c) < uVar9))) {
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0xc0);
  uVar4 = FT_Stream_Seek(lVar2,plVar8[2]);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = FT_Stream_EnterFrame(lVar2,(uint)*(byte *)(plVar8 + 1) * *(int *)((long)plVar8 + 0xc));
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  bVar1 = *(byte *)(plVar8 + 1);
  uVar7 = *(uint *)((long)plVar8 + 0xc);
  puVar11 = *(uint **)(lVar2 + 0x40);
  iVar3 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  bVar13 = *(byte *)((long)plVar8 + 9) & 2;
  bVar12 = *(byte *)((long)plVar8 + 9) & 1;
  uVar10 = 0x80000000 >> (((byte)iVar3 ^ 0x1f) & 0x1f);
  uVar6 = (ulong)(uVar7 * uVar10);
  iVar3 = bVar1 - uVar10;
  if (iVar3 == 0) {
LAB_001003d0:
    while (uVar7 < (uint)uVar6) {
      uVar6 = (ulong)((uint)uVar6 >> 1);
      puVar5 = (uint *)(uVar6 + (long)puVar11);
      if (bVar12 == 0) {
        puVar14 = (uint *)((long)puVar5 + 2);
        uVar10 = (uint)(byte)*puVar5 << 0x10 | (uint)*(byte *)((long)puVar5 + 1);
      }
      else {
        uVar10 = *puVar5;
        puVar14 = puVar5 + 1;
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
      }
      if (uVar10 == uVar9) goto LAB_00100405;
      if (uVar10 < uVar9) {
        puVar11 = puVar5;
      }
    }
    if (bVar12 == 0) {
      puVar14 = (uint *)((long)puVar11 + 2);
      uVar7 = (uint)(byte)*puVar11 << 0x10 | (uint)*(byte *)((long)puVar11 + 1);
    }
    else {
      uVar7 = *puVar11;
      puVar14 = puVar11 + 1;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    }
    if (uVar7 != uVar9) goto LAB_00100425;
  }
  else {
    puVar5 = (uint *)((ulong)(iVar3 * uVar7) + (long)puVar11);
    if (bVar12 == 0) {
      puVar14 = (uint *)((long)puVar5 + 2);
      uVar10 = (uint)*(byte *)((long)puVar5 + 1) | (uint)(byte)*puVar5 << 0x10;
    }
    else {
      puVar14 = puVar5 + 1;
      uVar10 = *puVar5;
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    }
    if (uVar10 != uVar9) {
      if (uVar10 < uVar9) {
        puVar11 = (uint *)((long)puVar14 + (2 - (ulong)(bVar13 == 0)));
      }
      goto LAB_001003d0;
    }
  }
LAB_00100405:
  uVar9 = (uint)(byte)*puVar14;
  if (bVar13 != 0) {
    uVar9 = (uint)(short)((ushort)*puVar14 << 8 | (ushort)*puVar14 >> 8);
  }
  *(long *)*param_4 = (long)(int)((int)*(short *)((long)plVar8 + 10) + uVar9);
LAB_00100425:
  FT_Stream_ExitFrame(lVar2);
  return 0;
}



int pfr_extra_item_load_bitmap_info(long param_1,ushort *param_2,undefined8 *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  byte bVar10;
  byte bVar11;
  ushort *puVar12;
  byte bVar13;
  ulong uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  puVar9 = (ushort *)(param_1 + 5);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  if (puVar9 <= param_2) {
    bVar2 = *(byte *)(param_1 + 4);
    bVar3 = *(byte *)(param_1 + 3);
    uVar14 = (ulong)*(uint *)(param_3 + 0x11);
    lVar7 = param_3[0x12];
    uVar15 = *(uint *)(param_3 + 0x11) + (uint)bVar2;
    if (*(uint *)((long)param_3 + 0x8c) < uVar15) {
      uVar15 = uVar15 + 3 & 0xfffffffc;
      lVar7 = ft_mem_realloc(*param_3,0x28,uVar14,uVar15,lVar7,&local_44);
      param_3[0x12] = lVar7;
      iVar4 = local_44;
      if (local_44 != 0) goto LAB_0010067d;
      uVar14 = (ulong)*(uint *)(param_3 + 0x11);
      *(uint *)((long)param_3 + 0x8c) = uVar15;
    }
    bVar11 = bVar3 & 4;
    bVar13 = bVar3 & 8;
    bVar10 = bVar3 & 0x10;
    if ((ushort *)
        ((ulong)(((((((uint)(byte)((bVar3 & 1) + 8) - (uint)((bVar3 & 2) == 0)) -
                    (uint)(bVar11 == 0)) - (uint)(bVar13 == 0)) + 4) - (uint)(bVar10 == 0)) *
                (uint)bVar2) + (long)puVar9) <= param_2) {
      if (bVar2 != 0) {
        puVar6 = (uint *)(lVar7 + uVar14 * 0x28);
        puVar1 = puVar6 + (ulong)bVar2 * 10;
        do {
          while( true ) {
            uVar15 = (uint)(byte)*puVar9;
            puVar8 = (ushort *)((long)puVar9 + 1);
            if ((bVar3 & 1) != 0) {
              puVar8 = puVar9 + 1;
              uVar15 = (uint)(ushort)(*puVar9 << 8 | *puVar9 >> 8);
            }
            *puVar6 = uVar15;
            if ((bVar3 & 2) == 0) break;
            puVar9 = puVar8 + 1;
            puVar6[1] = (uint)(ushort)(*puVar8 << 8 | *puVar8 >> 8);
            puVar6[2] = (uint)(byte)*puVar9;
            if (bVar11 != 0) goto LAB_00100562;
LAB_00100614:
            puVar8 = (ushort *)((long)puVar9 + 3);
            puVar6[5] = (uint)(ushort)(*(ushort *)((long)puVar9 + 1) << 8 |
                                      *(ushort *)((long)puVar9 + 1) >> 8);
            if (bVar13 == 0) goto LAB_00100630;
LAB_0010058e:
            puVar12 = (ushort *)((long)puVar8 + 3);
            puVar6[6] = (uint)(byte)*puVar8 << 0x10 | (uint)*(byte *)((long)puVar8 + 1) << 8 |
                        (uint)(byte)puVar8[1];
            if (bVar10 != 0) goto LAB_001005b6;
LAB_0010064a:
            puVar5 = puVar6 + 10;
            puVar9 = (ushort *)((long)puVar12 + 1);
            puVar6[7] = (uint)(byte)*puVar12;
            puVar6 = puVar5;
            if (puVar5 == puVar1) goto LAB_00100662;
          }
          puVar9 = (ushort *)((long)puVar8 + 1);
          puVar6[1] = (uint)(byte)*puVar8;
          puVar6[2] = (uint)*(byte *)puVar9;
          if (bVar11 == 0) goto LAB_00100614;
LAB_00100562:
          puVar8 = puVar9 + 2;
          puVar6[5] = (uint)*(byte *)((long)puVar9 + 1) << 0x10 | (uint)(byte)puVar9[1] << 8 |
                      (uint)*(byte *)((long)puVar9 + 3);
          if (bVar13 != 0) goto LAB_0010058e;
LAB_00100630:
          puVar12 = puVar8 + 1;
          puVar6[6] = (uint)(ushort)(*puVar8 << 8 | *puVar8 >> 8);
          if (bVar10 == 0) goto LAB_0010064a;
LAB_001005b6:
          puVar5 = puVar6 + 10;
          puVar9 = puVar12 + 1;
          puVar6[7] = (uint)(ushort)(*puVar12 << 8 | *puVar12 >> 8);
          puVar6 = puVar5;
        } while (puVar5 != puVar1);
      }
LAB_00100662:
      *(uint *)(param_3 + 0x11) = (int)uVar14 + (uint)bVar2;
      iVar4 = local_44;
      goto LAB_0010067d;
    }
  }
  iVar4 = 8;
LAB_0010067d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pfr_slot_done(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x158);
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined1 (*) [16])(param_1 + 0x138) = (undefined1  [16])0x0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x150));
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined1 (*) [16])(param_1 + 0x150) = (undefined1  [16])0x0;
  return;
}



undefined8 pfr_slot_init(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x128);
  *(undefined1 (*) [16])(param_1 + 0x150) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  *(undefined1 (*) [16])(param_1 + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x140) = (undefined1  [16])0x0;
  FT_GlyphLoader_Rewind(uVar1);
  return 0;
}



int pfr_extra_item_load_stem_snaps(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  if (param_3[0xd] == 0) {
    iVar2 = 8;
    if (param_2 < param_1 + 1) goto LAB_001007f1;
    bVar1 = *param_1;
    uVar5 = (bVar1 & 0xf) + (uint)(bVar1 >> 4);
    if (param_2 < param_1 + 1 + uVar5 * 2) goto LAB_001007f1;
    lVar3 = ft_mem_qrealloc(*param_3,4,0,(ulong)uVar5,0,&local_34);
    iVar2 = local_34;
    if (local_34 != 0) goto LAB_001007f1;
    param_3[0xd] = lVar3;
    param_3[0xb] = lVar3 + (ulong)(bVar1 & 0xf) * 4;
    if (uVar5 != 0) {
      uVar4 = 0;
      do {
        *(int *)(lVar3 + uVar4 * 4) = (int)CONCAT11(param_1[uVar4 * 2 + 1],param_1[uVar4 * 2 + 2]);
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
      goto LAB_001007f1;
    }
  }
  iVar2 = 0;
LAB_001007f1:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int pfr_extra_item_load_kerning_pairs(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int iVar10;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  uVar4 = *param_3;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  puVar8 = (undefined8 *)ft_mem_alloc(uVar4,0x20,&local_34);
  iVar10 = local_34;
  if (local_34 == 0) {
    pbVar1 = param_1 + 4;
    if (pbVar1 <= param_2) {
      bVar2 = *param_1;
      *(byte *)(puVar8 + 1) = bVar2;
      *(ushort *)((long)puVar8 + 10) = *(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8
      ;
      bVar3 = param_1[3];
      *(byte *)((long)puVar8 + 9) = bVar3;
      puVar8[2] = pbVar1 + ((ulong)*(uint *)(param_3 + 1) - param_3[0x1d]);
      uVar6 = -(uint)((bVar3 & 1) == 0) & 0xfffffffe;
      iVar7 = uVar6 + 5;
      if ((bVar3 & 2) != 0) {
        iVar7 = uVar6 + 6;
      }
      *(int *)((long)puVar8 + 0xc) = iVar7;
      if (pbVar1 + (uint)bVar2 * iVar7 <= param_2) {
        if (bVar2 == 0) {
          ft_mem_free(uVar4);
          iVar10 = local_34;
        }
        else {
          puVar9 = (uint *)(pbVar1 + iVar7 * (bVar2 - 1));
          if ((bVar3 & 1) == 0) {
            *(uint *)(puVar8 + 3) = (uint)param_1[4] << 0x10 | (uint)param_1[5];
            uVar6 = (uint)*(byte *)((long)puVar9 + 1) | (uint)(byte)*puVar9 << 0x10;
          }
          else {
            uVar6 = *(uint *)(param_1 + 4);
            *(uint *)(puVar8 + 3) =
                 uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
            uVar6 = *puVar9;
            uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          }
          *(uint *)((long)puVar8 + 0x1c) = uVar6;
          puVar5 = (undefined8 *)param_3[0x1b];
          *puVar8 = 0;
          *puVar5 = puVar8;
          *(uint *)(param_3 + 0x19) = *(int *)(param_3 + 0x19) + (uint)bVar2;
          param_3[0x1b] = puVar8;
        }
        goto LAB_001009f0;
      }
    }
    ft_mem_free(uVar4);
    iVar10 = 8;
  }
LAB_001009f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int pfr_extra_item_load_font_id(void *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  void *__dest;
  ulong __n;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar1 = 0;
  if (param_3[0xe] == 0) {
    __dest = (void *)ft_mem_qalloc(*param_3,(int)(param_2 - (long)param_1) + 1,&local_24);
    param_3[0xe] = __dest;
    iVar1 = local_24;
    if (local_24 == 0) {
      __n = param_2 - (long)param_1 & 0xffffffff;
      memcpy(__dest,param_1,__n);
      *(undefined1 *)(param_3[0xe] + __n) = 0;
      iVar1 = local_24;
    }
  }
  local_24 = iVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int pfr_aux_name_load(void *param_1,uint param_2,undefined8 param_3,long *param_4)

{
  void *__dest;
  long lVar1;
  size_t __n;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  __n = (size_t)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  if (*param_4 != 0) {
    ft_mem_free(param_3);
    *param_4 = 0;
  }
  if (param_2 == 0) {
LAB_00100b64:
    __dest = (void *)0x0;
  }
  else {
    param_2 = param_2 - 1;
    if (*(char *)((long)param_1 + (ulong)param_2) == '\0') {
      if (param_2 == 0) goto LAB_00100b64;
      __n = (size_t)param_2;
    }
    lVar1 = 0;
    do {
      if (0x5f < (byte)(*(char *)((long)param_1 + lVar1) - 0x20U)) goto LAB_00100b64;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < (uint)__n);
    __dest = (void *)ft_mem_qalloc(param_3,(uint)__n + 1,&local_34);
    if (local_34 == 0) {
      __dest = memcpy(__dest,param_1,__n);
      *(undefined1 *)((long)__dest + __n) = 0;
    }
  }
  *param_4 = (long)__dest;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_34;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pfr_get_service(void)

{
  ft_service_list_lookup(pfr_services);
  return;
}



undefined8
pfr_get_metrics(long param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1a8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x1ac);
  }
  if (lVar1 == 0) {
    uVar3 = 0x10000;
    uVar2 = 0x10000;
  }
  else {
    uVar2 = FT_DivFix((uint)*(ushort *)(lVar1 + 0x18) << 6,*(undefined4 *)(param_1 + 0x1ac));
    uVar3 = FT_DivFix((uint)*(ushort *)(lVar1 + 0x1a) << 6,*(undefined4 *)(param_1 + 0x1ac));
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = uVar2;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar3;
  }
  return 0;
}



undefined8 pfr_get_kerning(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  pfr_face_get_kerning();
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1ac)) {
    if (*param_4 == 0) {
      lVar1 = param_4[1];
    }
    else {
      lVar2 = FT_MulDiv();
      lVar1 = param_4[1];
      *param_4 = lVar2;
    }
    if (lVar1 != 0) {
      lVar1 = FT_MulDiv(lVar1,*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
      param_4[1] = lVar1;
      return 0;
    }
  }
  return 0;
}



void pfr_face_done(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x208));
  *(undefined8 *)(param_1 + 0x208) = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x210));
  *(undefined8 *)(param_1 + 0x210) = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x218));
  *(undefined8 *)(param_1 + 0x218) = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x200));
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x228));
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 600));
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x238));
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x268);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    ft_mem_free(uVar1,puVar3);
    puVar3 = puVar2;
  }
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined1 (*) [16])(param_1 + 0x268) = (undefined1  [16])0x0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



undefined8 pfr_glyph_line_to_isra_0(long param_1,char param_2,undefined8 *param_3)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 == '\0') {
    return 8;
  }
  sVar1 = *(short *)(param_1 + 0x62);
  if (*(uint *)(param_1 + 8) < (uint)(*(short *)(param_1 + 0x1a) + 1 + (int)sVar1)) {
    uVar2 = FT_GlyphLoader_CheckPoints(param_1,1,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    sVar1 = *(short *)(param_1 + 0x62);
  }
  uVar2 = param_3[1];
  puVar3 = (undefined8 *)((long)sVar1 * 0x10 + *(long *)(param_1 + 0x68));
  *puVar3 = *param_3;
  puVar3[1] = uVar2;
  *(undefined1 *)(*(long *)(param_1 + 0x70) + (long)sVar1) = 1;
  *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + 1;
  return 0;
}



int pfr_glyph_load_rec(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  ushort *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined2 *puVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  ushort *puVar25;
  ushort *puVar26;
  byte bVar27;
  uint uVar28;
  short sVar30;
  long lVar31;
  long in_FS_OFFSET;
  uint local_c0;
  byte local_b8;
  int local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  ulong uVar29;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = FT_Stream_Seek(param_2,param_3 + param_4);
  if ((iVar7 != 0) || (iVar8 = FT_Stream_EnterFrame(param_2,param_5), iVar7 = iVar8, iVar8 != 0))
  goto LAB_00100f52;
  pbVar3 = *(byte **)(param_2 + 0x40);
  puVar24 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = (ushort *)(pbVar3 + param_5);
  puVar26 = (ushort *)(pbVar3 + 1);
  if ((param_5 == 0) || (-1 < (char)*pbVar3)) {
    local_8c = 0;
    if ((puVar1 < puVar26) || (bVar2 = *pbVar3, (char)bVar2 < '\0')) goto LAB_001012d8;
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 2) != 0) {
        puVar26 = (ushort *)(pbVar3 + 2);
        if (puVar1 < puVar26) goto LAB_001012d8;
        uVar29 = (ulong)pbVar3[1];
        puVar25 = puVar26;
        if ((bVar2 & 1) == 0) {
          local_c0 = 0;
          uVar18 = (ulong)pbVar3[1];
          goto LAB_00100ffe;
        }
LAB_001012b3:
        puVar26 = (ushort *)((long)puVar25 + 1);
        if (puVar1 < puVar26) goto LAB_001012d8;
        local_c0 = (uint)(byte)*puVar25;
        uVar18 = (ulong)((uint)(byte)*puVar25 + (int)uVar29);
        goto LAB_00100ffe;
      }
      if ((bVar2 & 1) != 0) {
        uVar29 = 0;
        puVar25 = puVar26;
        goto LAB_001012b3;
      }
      local_c0 = 0;
      uVar29 = 0;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
    }
    else {
      puVar26 = (ushort *)(pbVar3 + 2);
      if (puVar1 < puVar26) goto LAB_001012d8;
      bVar4 = pbVar3[1] >> 4;
      local_c0 = (uint)bVar4;
      uVar28 = pbVar3[1] & 0xf;
      uVar29 = (ulong)uVar28;
      uVar18 = (ulong)(uVar28 + bVar4);
LAB_00100ffe:
      lVar14 = *(long *)(param_1 + 8);
      uVar28 = (uint)uVar18;
      if (*(uint *)(param_1 + 4) < uVar28) {
        lVar14 = ft_mem_realloc(*puVar24,8,*(uint *)(param_1 + 4),uVar28 + 7 & 0xfffffff8,lVar14,
                                &local_8c);
        *(long *)(param_1 + 8) = lVar14;
        iVar9 = local_8c;
        iVar7 = local_8c;
        if (local_8c != 0) goto LAB_001012dd;
        *(uint *)(param_1 + 4) = uVar28 + 7 & 0xfffffff8;
        *(ulong *)(param_1 + 0x10) = lVar14 + uVar29 * 8;
      }
      else {
        *(ulong *)(param_1 + 0x10) = lVar14 + uVar29 * 8;
        if (uVar28 == 0) goto LAB_001014fb;
      }
      uVar10 = 0;
      uVar20 = 0;
      iVar7 = 0;
      do {
        puVar25 = puVar26;
        if ((uVar10 & 7) == 0) {
          puVar25 = (ushort *)((long)puVar26 + 1);
          if (puVar1 < puVar25) goto LAB_001012d8;
          uVar20 = (ulong)(byte)*puVar26;
        }
        if ((uVar20 & 1) == 0) {
          puVar26 = (ushort *)((long)puVar25 + 1);
          if (puVar1 < puVar26) goto LAB_001012d8;
          iVar7 = iVar7 + (uint)(byte)*puVar25;
        }
        else {
          puVar26 = puVar25 + 1;
          if (puVar1 < puVar26) goto LAB_001012d8;
          iVar7 = (int)(short)(*puVar25 << 8 | *puVar25 >> 8);
        }
        uVar20 = uVar20 >> 1;
        *(long *)(lVar14 + uVar10 * 8) = (long)iVar7;
        uVar10 = uVar10 + 1;
      } while (uVar18 != uVar10);
    }
LAB_001014fb:
    puVar25 = puVar26;
    if ((bVar2 & 8) != 0) {
      puVar25 = (ushort *)((long)puVar26 + 1);
      if (puVar25 <= puVar1) {
        uVar28 = (uint)(byte)*puVar26;
        if ((byte)*puVar26 == 0) {
          local_8c = 0;
          goto LAB_00101505;
        }
        if ((ushort *)((long)puVar26 + 3U) <= puVar1) {
          for (puVar25 = (ushort *)
                         ((ulong)*(byte *)((long)puVar26 + 1) + (long)((long)puVar26 + 3U));
              puVar25 <= puVar1; puVar25 = (ushort *)((ulong)(byte)*puVar25 + (long)(puVar25 + 1)))
          {
            uVar28 = uVar28 - 1;
            if (uVar28 == 0) {
              local_8c = 0;
              goto LAB_00101505;
            }
            if (puVar1 < puVar25 + 1) break;
          }
        }
      }
      goto LAB_001012d8;
    }
LAB_00101505:
    *(undefined1 *)(param_1 + 0x30) = 0;
    local_88 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
LAB_0010152c:
    do {
      puVar26 = (ushort *)((long)puVar25 + 1);
      if (puVar1 < puVar26) goto LAB_001012d8;
      bVar2 = (byte)*puVar25;
      uVar20 = (ulong)(bVar2 & 0xf);
      uVar28 = bVar2 & 0xf;
      uVar18 = (ulong)uVar28;
      switch(bVar2) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        pfr_glyph_close_contour(param_1);
        FT_GlyphLoader_Add(*(undefined8 *)(param_1 + 0x28));
        iVar9 = local_8c;
        iVar7 = local_8c;
        goto LAB_001012dd;
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
        uVar28 = 1;
        break;
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
        if (uVar28 < (uint)uVar29) {
          local_88._0_8_ = *(undefined8 *)(*(long *)(param_1 + 8) + uVar20 * 8);
          goto LAB_001016db;
        }
        goto LAB_001012d8;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
        if (uVar28 < local_c0) {
          local_88._0_8_ = local_58._0_8_;
          local_58._8_8_ = *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar20 * 8);
LAB_001016db:
          local_88._8_8_ = local_58._8_8_;
          local_58._0_8_ = local_88._0_8_;
          goto LAB_001016f0;
        }
        goto LAB_001012d8;
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        uVar18 = 0xb8e;
        uVar28 = 3;
        break;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
        uVar18 = 0xe2b;
        uVar28 = 3;
        break;
      default:
        uVar28 = 4;
      }
      lVar14 = 0;
      do {
        uVar19 = (uint)uVar18 & 3;
        if (uVar19 == 1) {
          if (puVar1 < puVar26 + 1) goto LAB_001012d8;
          uVar6 = *puVar26;
          puVar26 = puVar26 + 1;
          lVar31 = (long)(short)(uVar6 << 8 | uVar6 >> 8);
        }
        else if (uVar19 == 2) {
          if (puVar1 < (ushort *)((long)puVar26 + 1U)) goto LAB_001012d8;
          uVar6 = *puVar26;
          puVar26 = (ushort *)((long)puVar26 + 1U);
          lVar31 = (long)(char)(byte)uVar6 + local_58._0_8_;
        }
        else {
          lVar31 = local_58._0_8_;
          if ((uVar18 & 3) == 0) {
            if ((puVar1 < (ushort *)((long)puVar26 + 1U)) ||
               (uVar6 = *puVar26, (uint)uVar29 <= (uint)(byte)uVar6)) goto LAB_001012d8;
            puVar26 = (ushort *)((long)puVar26 + 1U);
            lVar31 = *(long *)(*(long *)(param_1 + 8) + (ulong)(byte)uVar6 * 8);
          }
        }
        lVar23 = lVar14 * 0x10;
        *(long *)(local_88 + lVar23) = lVar31;
        uVar19 = (uint)(uVar18 >> 2) & 3;
        if (uVar19 == 1) {
          if (puVar1 < puVar26 + 1) goto LAB_001012d8;
          uVar6 = *puVar26;
          puVar26 = puVar26 + 1;
          lVar31 = (long)(short)(uVar6 << 8 | uVar6 >> 8);
        }
        else if (uVar19 == 2) {
          if (puVar1 < (ushort *)((long)puVar26 + 1U)) goto LAB_001012d8;
          uVar6 = *puVar26;
          puVar26 = (ushort *)((long)puVar26 + 1U);
          lVar31 = (long)(char)(byte)uVar6 + local_58._8_8_;
        }
        else {
          lVar31 = local_58._8_8_;
          if ((uVar18 >> 2 & 3) == 0) {
            if ((puVar1 < (ushort *)((long)puVar26 + 1U)) ||
               (uVar6 = *puVar26, local_c0 <= (byte)uVar6)) goto LAB_001012d8;
            puVar26 = (ushort *)((long)puVar26 + 1U);
            lVar31 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)(byte)uVar6 * 8);
          }
        }
        *(long *)(local_88 + lVar23 + 8) = lVar31;
        if (((int)lVar14 == 0) && (uVar28 == 4)) {
          if (puVar1 < (ushort *)((long)puVar26 + 1U)) goto LAB_001012d8;
          uVar18 = (ulong)(byte)*puVar26;
          uVar28 = 3;
          puVar26 = (ushort *)((long)puVar26 + 1U);
        }
        else {
          uVar18 = uVar18 >> 4;
        }
        lVar14 = lVar14 + 1;
        local_58._8_8_ = *(undefined8 *)(local_88 + lVar23 + 8);
        local_58._0_8_ = *(undefined8 *)(local_88 + lVar23);
      } while ((uint)lVar14 < uVar28);
      if (5 < bVar2 >> 4) {
        if (*(char *)(param_1 + 0x30) == '\0') {
          local_8c = 8;
          iVar9 = local_8c;
          iVar7 = local_8c;
          break;
        }
        lVar14 = *(long *)(param_1 + 0x28);
        sVar30 = *(short *)(lVar14 + 0x62);
        if (*(uint *)(lVar14 + 8) < (uint)(*(short *)(lVar14 + 0x1a) + 3 + (int)sVar30)) {
          iVar9 = FT_GlyphLoader_CheckPoints(lVar14,3,0);
          iVar7 = iVar9;
          if (iVar9 != 0) break;
          sVar30 = *(short *)(lVar14 + 0x62);
        }
        puVar24 = (undefined8 *)((long)sVar30 * 0x10 + *(long *)(lVar14 + 0x68));
        puVar16 = (undefined2 *)((long)sVar30 + *(long *)(lVar14 + 0x70));
        *puVar24 = local_88._0_8_;
        puVar24[1] = local_88._8_8_;
        puVar24[2] = local_78;
        puVar24[3] = uStack_70;
        puVar24[4] = local_68;
        puVar24[5] = uStack_60;
        *puVar16 = 0x202;
        *(undefined1 *)(puVar16 + 1) = 1;
        *(short *)(lVar14 + 0x62) = *(short *)(lVar14 + 0x62) + 3;
        local_8c = 0;
        puVar25 = puVar26;
        goto LAB_0010152c;
      }
      if (3 < bVar2 >> 4) {
        lVar14 = *(long *)(param_1 + 0x28);
        pfr_glyph_close_contour(param_1);
        *(undefined1 *)(param_1 + 0x30) = 1;
        if (((*(uint *)(lVar14 + 8) <
              (uint)(*(short *)(lVar14 + 0x1a) + 1 + (int)*(short *)(lVar14 + 0x62))) ||
            (*(uint *)(lVar14 + 0xc) <
             (uint)(*(short *)(lVar14 + 0x18) + 1 + (int)*(short *)(lVar14 + 0x60)))) &&
           (iVar9 = FT_GlyphLoader_CheckPoints(lVar14,1,1), iVar7 = iVar9, iVar9 != 0)) break;
      }
LAB_001016f0:
      local_8c = pfr_glyph_line_to_isra_0
                           (*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),local_88
                           );
      puVar25 = puVar26;
      iVar9 = local_8c;
      iVar7 = local_8c;
    } while (local_8c == 0);
  }
  else {
    uVar28 = *(uint *)(param_1 + 0x18);
    local_8c = 0;
    if ((puVar26 <= puVar1) && (bVar2 = *pbVar3, (char)bVar2 < '\0')) {
      local_b8 = bVar2 & 0x3f;
      if ((bVar2 & 0x40) == 0) {
LAB_001010dd:
        uVar19 = uVar28 + (bVar2 & 0x3f);
        if (*(uint *)(param_1 + 0x1c) < uVar19) {
          uVar19 = uVar19 + 3 & 0xfffffffc;
          if (0x40 < uVar19) goto LAB_001012d8;
          lVar14 = ft_mem_realloc(*puVar24,0x20,*(uint *)(param_1 + 0x1c),uVar19,
                                  *(undefined8 *)(param_1 + 0x20));
          *(long *)(param_1 + 0x20) = lVar14;
          iVar9 = local_8c;
          iVar7 = local_8c;
          if (local_8c == 0) {
            *(uint *)(param_1 + 0x1c) = uVar19;
            plVar21 = (long *)(lVar14 + (ulong)uVar28 * 0x20);
            if (local_b8 != 0) goto LAB_00101160;
            FT_Stream_ExitFrame(param_2);
            goto LAB_0010137d;
          }
          goto LAB_001012dd;
        }
        plVar21 = (long *)((ulong)uVar28 * 0x20 + *(long *)(param_1 + 0x20));
        if (local_b8 == 0) {
LAB_00101355:
          iVar7 = local_8c;
          FT_Stream_ExitFrame(param_2);
          if (iVar7 != 0) goto LAB_00100f52;
LAB_0010137d:
          uVar19 = *(int *)(param_1 + 0x18) - uVar28;
          iVar7 = iVar8;
          if (uVar19 != 0) {
            lVar14 = *(long *)(param_1 + 0x20);
            lVar31 = (ulong)uVar28 << 5;
            uVar17 = (uint)*(ushort *)((long)puVar24 + 0x1a);
            do {
              sVar30 = (short)uVar17;
              iVar7 = pfr_glyph_load_rec(param_1,param_2,param_3,
                                         *(undefined4 *)(lVar14 + lVar31 + 0x18),
                                         *(undefined4 *)(lVar14 + lVar31 + 0x1c));
              if (iVar7 != 0) break;
              lVar14 = *(long *)(param_1 + 0x20);
              uVar17 = (uint)*(short *)((long)puVar24 + 0x1a);
              lVar11 = (long)sVar30 * 0x10;
              plVar21 = (long *)(lVar14 + lVar31);
              iVar7 = uVar17 - (int)sVar30;
              lVar23 = *plVar21;
              if ((lVar23 == 0x10000) && (plVar21[1] == 0x10000)) {
                if (0 < iVar7) {
                  lVar23 = plVar21[2];
                  iVar9 = *(int *)((long)plVar21 + 0x14);
                  plVar12 = (long *)(puVar24[4] + lVar11);
                  plVar21 = plVar12 + 2;
                  plVar13 = plVar21;
                  while( true ) {
                    plVar15 = plVar13;
                    *plVar12 = *plVar12 + (long)(int)lVar23;
                    plVar12[1] = plVar12[1] + (long)iVar9;
                    if (plVar21 + (ulong)(iVar7 - 1) * 2 == plVar15) break;
                    plVar13 = plVar15 + 2;
                    plVar12 = plVar15;
                  }
                }
              }
              else {
                plVar12 = (long *)(lVar11 + puVar24[4]);
                if (0 < iVar7) {
                  lVar11 = plVar21[2];
                  lVar5 = plVar21[1];
                  iVar9 = *(int *)((long)plVar21 + 0x14);
                  plVar21 = plVar12;
                  do {
                    plVar13 = plVar21 + 2;
                    lVar22 = (long)(int)*plVar21 * (long)(int)lVar23;
                    *plVar21 = (long)((int)((ulong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10) +
                                     (int)lVar11);
                    lVar22 = (long)(int)plVar21[1] * (long)(int)lVar5;
                    plVar21[1] = (long)((int)((ulong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10) +
                                       iVar9);
                    plVar21 = plVar13;
                  } while (plVar13 != plVar12 + (long)iVar7 * 2);
                }
              }
              lVar31 = lVar31 + 0x20;
              iVar7 = iVar8;
            } while (((ulong)uVar19 + (ulong)uVar28) * 0x20 != lVar31);
          }
          goto LAB_00100f52;
        }
LAB_00101160:
        puVar25 = (ushort *)((long)puVar26 + 1);
        if (puVar25 <= puVar1) {
          uVar19 = 0;
          do {
            bVar4 = (byte)*puVar26;
            *plVar21 = 0x10000;
            if ((bVar4 & 0x10) != 0) {
              puVar25 = (ushort *)((long)puVar26 + 3);
              if (puVar1 < puVar25) break;
              *plVar21 = (long)((int)(short)(*(ushort *)((long)puVar26 + 1) << 8 |
                                            *(ushort *)((long)puVar26 + 1) >> 8) << 4);
            }
            plVar21[1] = 0x10000;
            puVar26 = puVar25;
            if ((bVar4 & 0x20) != 0) {
              puVar26 = puVar25 + 1;
              if (puVar1 < puVar26) break;
              plVar21[1] = (long)((int)(short)(*puVar25 << 8 | *puVar25 >> 8) << 4);
            }
            if ((bVar4 & 3) == 1) {
              puVar25 = puVar26 + 1;
              if (puVar1 < puVar25) break;
              iVar7 = (int)(short)(*puVar26 << 8 | *puVar26 >> 8);
            }
            else if ((bVar4 & 3) == 2) {
              puVar25 = (ushort *)((long)puVar26 + 1);
              if (puVar1 < puVar25) break;
              iVar7 = (int)(char)(byte)*puVar26;
            }
            else {
              iVar7 = 0;
              puVar25 = puVar26;
            }
            bVar27 = bVar4 >> 2 & 3;
            if (bVar27 == 1) {
              puVar26 = puVar25 + 1;
              if (puVar1 < puVar26) break;
              iVar9 = (int)(short)(*puVar25 << 8 | *puVar25 >> 8);
            }
            else if (bVar27 == 2) {
              puVar26 = (ushort *)((long)puVar25 + 1);
              if (puVar1 < puVar26) break;
              iVar9 = (int)(char)(byte)*puVar25;
            }
            else {
              iVar9 = 0;
              puVar26 = puVar25;
            }
            *(int *)(plVar21 + 2) = iVar7;
            *(int *)((long)plVar21 + 0x14) = iVar9;
            if ((bVar4 & 0x40) == 0) {
              puVar25 = (ushort *)((long)puVar26 + 1);
              if (puVar1 < puVar25) break;
              uVar17 = (uint)(byte)*puVar26;
            }
            else {
              puVar25 = puVar26 + 1;
              if (puVar1 < puVar25) break;
              uVar17 = (uint)(ushort)(*puVar26 << 8 | *puVar26 >> 8);
            }
            *(uint *)((long)plVar21 + 0x1c) = uVar17;
            if ((char)bVar4 < '\0') {
              puVar26 = (ushort *)((long)puVar25 + 3);
              if (puVar1 < puVar26) break;
              uVar17 = (uint)(byte)*puVar25 << 0x10 | (uint)*(byte *)((long)puVar25 + 1) << 8 |
                       (uint)(byte)puVar25[1];
            }
            else {
              puVar26 = puVar25 + 1;
              if (puVar1 < puVar26) break;
              uVar17 = (uint)(ushort)(*puVar25 << 8 | *puVar25 >> 8);
            }
            uVar19 = uVar19 + 1;
            *(uint *)(plVar21 + 3) = uVar17;
            plVar21 = plVar21 + 4;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            if ((bVar2 & 0x3f) <= uVar19) goto LAB_00101355;
            puVar25 = (ushort *)((long)puVar26 + 1);
          } while (puVar25 <= puVar1);
        }
      }
      else {
        puVar26 = (ushort *)(pbVar3 + 2);
        if (puVar26 <= puVar1) {
          uVar19 = (uint)pbVar3[1];
          if (pbVar3[1] == 0) goto LAB_001010dd;
          if (pbVar3 + 4 <= puVar1) {
            for (puVar26 = (ushort *)((long)(pbVar3 + 4) + (ulong)pbVar3[2]); puVar26 <= puVar1;
                puVar26 = (ushort *)((ulong)(byte)*puVar26 + (long)(puVar26 + 1))) {
              uVar19 = uVar19 - 1;
              if (uVar19 == 0) goto LAB_001010dd;
              if (puVar1 < puVar26 + 1) break;
            }
          }
        }
      }
    }
LAB_001012d8:
    iVar9 = local_8c;
    iVar7 = 8;
  }
LAB_001012dd:
  local_8c = iVar9;
  FT_Stream_ExitFrame(param_2);
LAB_00100f52:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pfr_slot_load(long param_1,long param_2,int param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  bool bVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  uint *puVar17;
  ulong uVar18;
  ushort *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  ushort *puVar28;
  int iVar29;
  long lVar30;
  undefined1 *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  ushort *puVar40;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  ulong local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  lVar36 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar24 = param_3 + -1 + (uint)(param_3 == 0);
  if ((lVar36 != 0) && (uVar24 < *(uint *)(lVar36 + 0x248))) {
    if ((param_4 & 9) == 0) {
      lVar30 = *(long *)(lVar36 + 0xc0);
      lVar27 = *(long *)(lVar36 + 600);
      puVar39 = *(uint **)(lVar36 + 0x228);
      if (*(uint *)(lVar36 + 0x220) != 0) {
        puVar17 = puVar39 + (ulong)*(uint *)(lVar36 + 0x220) * 10;
        do {
          if ((*puVar39 == (uint)*(ushort *)(param_2 + 0x18)) &&
             (puVar39[1] == (uint)*(ushort *)(param_2 + 0x1a))) {
            uVar34 = puVar39[2];
            iVar12 = FT_Stream_Seek(lVar30,(ulong)puVar39[6] + *(long *)(lVar36 + 0x278));
            if ((iVar12 == 0) &&
               (iVar12 = FT_Stream_EnterFrame
                                   (lVar30,(((uVar34 & 1) + (uint)((uVar34 & 2) != 0) + 5) -
                                           (uint)((uVar34 & 4) == 0)) * puVar39[7]), iVar12 == 0)) {
              uVar34 = puVar39[2];
              uVar32 = puVar39[7];
              puVar17 = (uint *)((ulong)uVar24 * 0x10 + lVar27);
              uVar38 = uVar34 & 1;
              uVar23 = *puVar17;
              puVar19 = *(ushort **)(lVar30 + 0x40);
              uVar37 = (uVar38 + ((uVar34 & 2) != 0) + 5) - (uint)((uVar34 & 4) == 0);
              if ((uVar34 & 0x40) != 0) goto LAB_00102025;
              puVar28 = *(ushort **)(lVar30 + 0x48);
              puVar39[2] = uVar34 | 0x80;
              puVar40 = (ushort *)((long)puVar19 + (ulong)(uVar32 * uVar37));
              if (puVar28 < puVar40) goto LAB_00101fdd;
              puVar28 = puVar19;
              uVar20 = 0xffffffffffffffff;
              goto joined_r0x00101faa;
            }
            break;
          }
          puVar39 = puVar39 + 10;
        } while (puVar39 != puVar17);
      }
    }
    goto LAB_00101c07;
  }
  goto LAB_00101e30;
joined_r0x00101faa:
  if (puVar40 <= puVar28) goto LAB_00102015;
  uVar18 = (ulong)(byte)*puVar28;
  if (uVar38 != 0) {
    uVar18 = (ulong)(ushort)(*puVar28 << 8 | *puVar28 >> 8);
  }
  if ((long)uVar18 <= (long)uVar20) goto LAB_00101fdd;
  puVar28 = (ushort *)((long)puVar28 + (ulong)uVar37);
  uVar20 = uVar18;
  goto joined_r0x00101faa;
LAB_00101fdd:
  puVar39[2] = uVar34 & 0xffffff7f | 0x40;
  goto LAB_00101fea;
LAB_00102015:
  uVar13 = uVar34 | 0xc0;
  uVar34 = uVar34 | 0xc0;
  puVar39[2] = uVar13;
LAB_00102025:
  if ((uVar34 & 0x80) != 0) {
    uVar33 = 0;
    uVar13 = uVar32 >> 1;
    if (uVar32 != 0) {
LAB_00102059:
      puVar28 = (ushort *)((ulong)(uVar37 * uVar13) + (long)puVar19);
      uVar25 = (uint)(byte)*puVar28;
      puVar40 = (ushort *)((long)puVar28 + 1);
      if (uVar38 != 0) {
        puVar40 = puVar28 + 1;
        uVar25 = (uint)(ushort)(*puVar28 << 8 | *puVar28 >> 8);
      }
      uVar10 = uVar13;
      if (uVar23 < uVar25) {
LAB_00102048:
        uVar32 = uVar10;
        uVar13 = (uVar13 + uVar23) - uVar25;
        if ((uVar32 <= uVar13) || (uVar13 < uVar33)) {
          uVar13 = (uVar32 - uVar33 >> 1) + uVar33;
        }
        if (uVar32 <= uVar33) goto LAB_00101fea;
        goto LAB_00102059;
      }
      if (uVar25 < uVar23) {
        uVar33 = uVar13 + 1;
        uVar10 = uVar32;
        goto LAB_00102048;
      }
      if ((uVar34 & 2) == 0) {
        local_70 = (ulong)(byte)*puVar40;
        puVar19 = (ushort *)((long)puVar40 + 1);
      }
      else {
        puVar19 = puVar40 + 1;
        local_70 = (ulong)(ushort)(*puVar40 << 8 | *puVar40 >> 8);
      }
      if ((uVar34 & 4) == 0) {
        uVar20 = (ulong)(ushort)(*puVar19 << 8 | *puVar19 >> 8);
      }
      else {
        uVar20 = (ulong)((uint)(byte)*puVar19 << 0x10 | (uint)*(byte *)((long)puVar19 + 1) << 8 |
                        (uint)(byte)puVar19[1]);
      }
      FT_Stream_ExitFrame(lVar30);
      if (local_70 == 0) goto LAB_00101c07;
      lVar35 = (long)(int)puVar17[1];
      iVar12 = *(int *)(lVar36 + 0x1a8);
      lVar27 = lVar35;
      if (*(int *)(lVar36 + 0x1ac) != iVar12) {
        lVar27 = FT_MulDiv(lVar35,iVar12);
        iVar12 = *(int *)(lVar36 + 0x1ac);
        lVar35 = (long)(int)puVar17[1];
      }
      *(long *)(param_1 + 0x70) = lVar27;
      local_80 = FT_MulDiv((ulong)*(ushort *)(param_2 + 0x18) << 8,lVar35,iVar12);
      iVar12 = FT_Stream_Seek(lVar30,*(uint *)(lVar36 + 0x130) + uVar20);
      if ((iVar12 != 0) || (iVar12 = FT_Stream_EnterFrame(lVar30,local_70), iVar12 != 0))
      goto LAB_00101c07;
      pbVar8 = *(byte **)(lVar30 + 0x40);
      puVar19 = *(ushort **)(lVar30 + 0x48);
      if (puVar19 < pbVar8 + 1) goto LAB_00101fea;
      bVar22 = *pbVar8;
      bVar11 = bVar22 & 3;
      if (bVar11 == 2) {
        puVar40 = (ushort *)(pbVar8 + 5);
        if (puVar19 < puVar40) goto LAB_00101fea;
        local_78 = (long)(short)(*(ushort *)(pbVar8 + 3) << 8 | *(ushort *)(pbVar8 + 3) >> 8);
        lVar27 = (long)(short)(*(ushort *)(pbVar8 + 1) << 8 | *(ushort *)(pbVar8 + 1) >> 8);
      }
      else if (bVar11 == 3) {
        puVar40 = (ushort *)(pbVar8 + 7);
        if (puVar19 < puVar40) goto LAB_00101fea;
        lVar27 = (long)((int)((uint)pbVar8[1] << 0x18 | (uint)pbVar8[2] << 0x10 |
                             (uint)pbVar8[3] << 8) >> 8);
        local_78 = (long)((int)((uint)pbVar8[6] << 8 |
                               (uint)pbVar8[4] << 0x18 | (uint)pbVar8[5] << 0x10) >> 8);
      }
      else if (bVar11 == 1) {
        puVar40 = (ushort *)(pbVar8 + 3);
        if (puVar19 < puVar40) goto LAB_00101fea;
        lVar27 = (long)(char)pbVar8[1];
        local_78 = (long)(char)pbVar8[2];
      }
      else {
        puVar40 = (ushort *)(pbVar8 + 2);
        if (puVar19 < puVar40) goto LAB_00101fea;
        local_78 = (long)((char)(pbVar8[1] << 4) >> 4);
        lVar27 = (long)((char)pbVar8[1] >> 4);
      }
      bVar11 = bVar22 >> 2 & 3;
      if (bVar11 == 2) {
        puVar28 = puVar40 + 1;
        if (puVar19 < puVar28) goto LAB_00101fea;
        uVar20 = (ulong)(byte)*puVar40;
        uVar18 = (ulong)*(byte *)((long)puVar40 + 1);
      }
      else if (bVar11 == 3) {
        puVar28 = puVar40 + 2;
        if (puVar19 < puVar28) goto LAB_00101fea;
        uVar20 = (ulong)(ushort)(*puVar40 << 8 | *puVar40 >> 8);
        uVar18 = (ulong)(ushort)(puVar40[1] << 8 | puVar40[1] >> 8);
      }
      else if (bVar11 == 1) {
        if (puVar19 < (ushort *)((long)puVar40 + 1U)) goto LAB_00101fea;
        uVar18 = (ulong)((byte)*puVar40 & 0xf);
        uVar20 = (ulong)(byte)((byte)*puVar40 >> 4);
        puVar28 = (ushort *)((long)puVar40 + 1U);
      }
      else {
        uVar18 = 0;
        uVar20 = 0;
        puVar28 = puVar40;
      }
      bVar11 = bVar22 >> 4 & 3;
      if (bVar11 == 2) {
        puVar40 = puVar28 + 1;
        if (puVar19 < puVar40) goto LAB_00101fea;
        local_80 = (long)(short)(*puVar28 << 8 | *puVar28 >> 8);
      }
      else if (bVar11 == 3) {
        puVar40 = (ushort *)((long)puVar28 + 3);
        if (puVar19 < puVar40) goto LAB_00101fea;
        local_80 = (long)((int)((uint)*(byte *)((long)puVar28 + 1) << 0x10 |
                                (uint)(byte)*puVar28 << 0x18 | (uint)(byte)puVar28[1] << 8) >> 8);
      }
      else {
        puVar40 = puVar28;
        if (bVar11 == 1) {
          puVar40 = (ushort *)((long)puVar28 + 1);
          if (puVar19 < puVar40) goto LAB_00101fea;
          local_80 = (long)((int)(char)(byte)*puVar28 << 8);
        }
      }
      bVar22 = bVar22 >> 6;
      if (bVar22 == 1) {
        if (local_70 * 0xf < uVar20 * uVar18) goto LAB_00101fea;
      }
      else if (bVar22 == 2) {
        if ((local_70 + 1 >> 1) * 0xff < uVar20 * uVar18) goto LAB_00101fea;
      }
      else if ((bVar22 != 0) || (local_70 < uVar20 * uVar18 + 7 >> 3)) goto LAB_00101fea;
      *(int *)(param_1 + 0x9c) = (int)uVar20;
      *(ulong *)(param_1 + 0x30) = uVar20 * 0x40;
      *(ulong *)(param_1 + 0x38) = uVar18 << 6;
      iVar12 = (int)uVar20 + 7 >> 3;
      *(long *)(param_1 + 0x58) = (long)(uVar20 * -0x40) >> 1;
      *(long *)(param_1 + 0x40) = lVar27 << 6;
      *(undefined1 *)(param_1 + 0xb2) = 1;
      *(long *)(param_1 + 0x48) = local_78 << 6;
      *(undefined8 *)(param_1 + 0x60) = 0;
      uVar14 = *(undefined8 *)(param_2 + 0x40);
      *(int *)(param_1 + 0x98) = (int)uVar18;
      *(int *)(param_1 + 0xa0) = iVar12;
      *(undefined8 *)(param_1 + 0x68) = uVar14;
      *(undefined4 *)(param_1 + 0x90) = 0x62697473;
      *(ulong *)(param_1 + 0x50) = (local_80 >> 2) + 0x20U & 0xffffffffffffffc0;
      *(int *)(param_1 + 0xc0) = (int)lVar27;
      *(int *)(param_1 + 0xc4) = (int)uVar18 + (int)local_78;
      if ((param_4 & 0x400000) != 0) goto LAB_00102387;
      iVar12 = ft_glyphslot_alloc_bitmap(param_1,(long)iVar12 * uVar18);
      if (iVar12 != 0) goto LAB_00101fea;
      iVar12 = *(int *)(param_1 + 0x98);
      puVar19 = *(ushort **)(lVar30 + 0x48);
      if ((iVar12 != 0) && (iVar6 = *(int *)(param_1 + 0x9c), iVar6 != 0)) {
        puVar21 = *(undefined1 **)(param_1 + 0xa8);
        iVar26 = *(int *)(param_1 + 0xa0);
        uVar24 = iVar12 * iVar6;
        if ((*(uint *)(lVar36 + 0x144) & 2) == 0) {
          iVar12 = (iVar12 + -1) * iVar26;
          iVar26 = -iVar26;
          puVar21 = puVar21 + iVar12;
        }
        if (bVar22 == 1) {
          uVar32 = 0;
          uVar34 = 0;
          uVar23 = 0;
          uVar37 = 0x80;
          iVar29 = 1;
          bVar9 = true;
          puVar31 = puVar21;
          iVar12 = iVar6;
          for (; uVar24 != 0; uVar24 = uVar24 - 1) {
            if (bVar9) {
              do {
                if (iVar29 == 0) {
                  iVar29 = 1;
                  uVar34 = uVar32;
                }
                else {
                  if (puVar19 <= puVar40) break;
                  uVar1 = *puVar40;
                  iVar29 = 0;
                  puVar40 = (ushort *)((long)puVar40 + 1);
                  uVar34 = (int)(uint)(byte)uVar1 >> 4;
                  uVar32 = (byte)uVar1 & 0xf;
                }
              } while (uVar34 == 0);
            }
            uVar23 = uVar23 | -iVar29 & uVar37;
            iVar12 = iVar12 + -1;
            if (iVar12 == 0) {
              *puVar21 = (char)uVar23;
              puVar21 = puVar31 + iVar26;
              uVar23 = 0;
              uVar37 = 0x80;
              puVar31 = puVar21;
              iVar12 = iVar6;
            }
            else {
              uVar37 = uVar37 >> 1;
              if (uVar37 == 0) {
                *puVar21 = (char)uVar23;
                uVar37 = 0x80;
                puVar21 = puVar21 + 1;
                uVar23 = 0;
              }
            }
            uVar34 = uVar34 - 1;
            bVar9 = (int)uVar34 < 1;
          }
          if (uVar37 != 0x80) {
            *puVar21 = (char)uVar23;
          }
        }
        else if (bVar22 == 2) {
          uVar32 = 0;
          uVar37 = 0x80;
          bVar9 = true;
          uVar23 = 1;
          uVar34 = 0;
          puVar31 = puVar21;
          iVar12 = iVar6;
          for (; uVar24 != 0; uVar24 = uVar24 - 1) {
            if (bVar9) {
              do {
                if (puVar19 <= puVar40) break;
                uVar1 = *puVar40;
                uVar34 = (uint)(byte)uVar1;
                puVar40 = (ushort *)((long)puVar40 + 1);
                uVar23 = uVar23 ^ 1;
              } while ((byte)uVar1 == 0);
            }
            uVar32 = uVar32 | -uVar23 & uVar37;
            iVar12 = iVar12 + -1;
            if (iVar12 == 0) {
              *puVar21 = (char)uVar32;
              puVar21 = puVar31 + iVar26;
              uVar32 = 0;
              uVar37 = 0x80;
              puVar31 = puVar21;
              iVar12 = iVar6;
            }
            else {
              uVar37 = uVar37 >> 1;
              if (uVar37 == 0) {
                *puVar21 = (char)uVar32;
                uVar37 = 0x80;
                puVar21 = puVar21 + 1;
                uVar32 = 0;
              }
            }
            uVar34 = uVar34 - 1;
            bVar9 = (int)uVar34 < 1;
          }
          if (uVar37 != 0x80) {
            *puVar21 = (char)uVar32;
          }
        }
        else {
          uVar32 = 0x80;
          uVar34 = ((int)puVar19 - (int)puVar40) * 8;
          if (uVar24 < uVar34) {
            uVar34 = uVar24;
          }
          uVar23 = 0;
          bVar22 = 0;
          puVar31 = puVar21;
          iVar12 = iVar6;
          for (uVar24 = uVar34; uVar24 != 0; uVar24 = uVar24 - 1) {
            if ((((byte)uVar34 ^ (byte)uVar24) & 7) == 0) {
              bVar22 = (byte)*puVar40;
              puVar40 = (ushort *)((long)puVar40 + 1);
            }
            if ((bVar22 & 0x80) != 0) {
              uVar23 = uVar23 | uVar32;
            }
            bVar22 = bVar22 * '\x02';
            iVar12 = iVar12 + -1;
            if (iVar12 == 0) {
              *puVar21 = (char)uVar23;
              puVar21 = puVar31 + iVar26;
              uVar23 = 0;
              uVar32 = 0x80;
              puVar31 = puVar21;
              iVar12 = iVar6;
            }
            else {
              uVar32 = uVar32 >> 1;
              if (uVar32 == 0) {
                *puVar21 = (char)uVar23;
                uVar32 = 0x80;
                puVar21 = puVar21 + 1;
                uVar23 = 0;
              }
            }
          }
          if (uVar32 != 0x80) {
            *puVar21 = (char)uVar23;
          }
        }
      }
LAB_00102387:
      FT_Stream_ExitFrame(lVar30);
      uVar14 = 0;
      goto LAB_00101e35;
    }
  }
LAB_00101fea:
  FT_Stream_ExitFrame(lVar30);
LAB_00101c07:
  if ((param_4 & 0x4000) == 0) {
    lVar30 = (ulong)uVar24 * 0x10 + *(long *)(lVar36 + 600);
    *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
    *(undefined4 *)(param_1 + 200) = 0;
    uVar3 = *(undefined4 *)(lVar30 + 8);
    uVar4 = *(undefined4 *)(lVar30 + 0xc);
    uVar14 = *(undefined8 *)(lVar36 + 0xc0);
    uVar5 = *(undefined4 *)(lVar36 + 0x130);
    FT_GlyphLoader_Rewind(*(undefined8 *)(param_1 + 0x158));
    *(undefined4 *)(param_1 + 0x148) = 0;
    uVar14 = pfr_glyph_load_rec(param_1 + 0x130,uVar14,uVar5,uVar4,uVar3);
    if ((int)uVar14 == 0) {
      lVar27 = *(long *)(param_1 + 0x158);
      uVar14 = *(undefined8 *)(lVar27 + 0x20);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar27 + 0x18);
      *(undefined8 *)(param_1 + 0xd0) = uVar14;
      uVar14 = *(undefined8 *)(lVar27 + 0x30);
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar27 + 0x28);
      *(undefined8 *)(param_1 + 0xe0) = uVar14;
      uVar14 = *(undefined8 *)(lVar27 + 0x38);
      *(undefined8 *)(param_1 + 0xe8) = uVar14;
      uVar24 = (uint)uVar14 & 0xfffffffe;
      uVar1 = *(ushort *)(param_2 + 0x1a);
      *(uint *)(param_1 + 0xe8) = uVar24 | 4;
      if (uVar1 < 0x18) {
        *(uint *)(param_1 + 0xe8) = uVar24 | 0x104;
      }
      iVar12 = *(int *)(lVar36 + 0x1ac);
      iVar6 = *(int *)(lVar36 + 0x1a8);
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      lVar30 = (long)*(int *)(lVar30 + 4);
      if (iVar12 != iVar6) {
        lVar30 = FT_MulDiv();
      }
      if ((*(byte *)(lVar36 + 0x1d0) & 1) == 0) {
        *(long *)(param_1 + 0x50) = lVar30;
        lVar36 = *(long *)(param_1 + 0x68);
      }
      else {
        *(long *)(param_1 + 0x68) = lVar30;
        lVar36 = lVar30;
        lVar30 = *(long *)(param_1 + 0x50);
      }
      *(long *)(param_1 + 0x70) = lVar30;
      *(long *)(param_1 + 0x78) = lVar36;
      *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
      if ((~param_4 & 1) != 0) {
        sVar2 = *(short *)(param_1 + 0xca);
        plVar7 = *(long **)(param_1 + 0xd0);
        iVar12 = *(int *)(param_2 + 0x28);
        iVar6 = *(int *)(param_2 + 0x20);
        if (0 < sVar2) {
          plVar15 = plVar7;
          do {
            plVar16 = plVar15 + 2;
            lVar27 = (long)(int)*plVar15 * (long)iVar6;
            *plVar15 = (long)(int)((ulong)(lVar27 + 0x8000 + (lVar27 >> 0x3f)) >> 0x10);
            lVar27 = (long)(int)plVar15[1] * (long)iVar12;
            plVar15[1] = (long)(int)((ulong)(lVar27 + 0x8000 + (lVar27 >> 0x3f)) >> 0x10);
            plVar15 = plVar16;
          } while (plVar16 != plVar7 + (ulong)(uint)(int)sVar2 * 2);
        }
        lVar30 = (long)(int)lVar30 * (long)iVar6;
        lVar36 = (long)(int)lVar36 * (long)iVar12;
        *(long *)(param_1 + 0x50) = (long)(int)((ulong)(lVar30 + 0x8000 + (lVar30 >> 0x3f)) >> 0x10)
        ;
        *(long *)(param_1 + 0x68) = (long)(int)((ulong)(lVar36 + 0x8000 + (lVar36 >> 0x3f)) >> 0x10)
        ;
      }
      FT_Outline_Get_CBox(param_1 + 200,&local_68);
      uVar14 = 0;
      *(long *)(param_1 + 0x40) = local_68;
      *(long *)(param_1 + 0x48) = lStack_60;
      *(long *)(param_1 + 0x30) = local_58 - local_68;
      *(long *)(param_1 + 0x38) = lStack_50 - lStack_60;
    }
  }
  else {
LAB_00101e30:
    uVar14 = 6;
  }
LAB_00101e35:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong pfr_face_init(long param_1,ulong *param_2,ulong param_3)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ushort *puVar12;
  int *piVar13;
  undefined2 *puVar14;
  uint *puVar15;
  ushort *puVar16;
  short sVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  long lVar22;
  ulong uVar23;
  ushort uVar24;
  ulong uVar25;
  ushort *puVar26;
  short sVar27;
  uint uVar28;
  ushort *puVar29;
  byte bVar30;
  short sVar31;
  code *pcVar32;
  long in_FS_OFFSET;
  ushort *local_98;
  byte local_90;
  byte local_80;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = FT_Stream_Seek(param_1,0);
  if ((iVar6 == 0) &&
     (iVar6 = FT_Stream_ReadFields(param_1,pfr_header_fields,param_2 + 0x1f), iVar6 == 0)) {
    local_5c = 0;
    *(int *)((long)param_2 + 0x11c) = *(int *)((long)param_2 + 0x11c) + (int)param_2[0x28] * 0x10000
    ;
    if (((int)param_2[0x1f] == 0x50465230) &&
       (((*(uint *)((long)param_2 + 0xfc) < 5 && (0x39 < *(uint *)((long)param_2 + 0x104))) &&
        ((int)param_2[0x20] == 0xd0a)))) {
      uVar28 = *(uint *)((long)param_2 + 0x10c);
      uVar11 = FT_Stream_Seek(param_1,(ulong)uVar28);
      local_58 = (ulong *)CONCAT44(local_58._4_4_,(int)uVar11);
      if ((int)uVar11 != 0) goto LAB_001027da;
      uVar5 = FT_Stream_ReadUShort(param_1,&local_58);
      uVar19 = (ulong)uVar5;
      uVar11 = (ulong)local_58 & 0xffffffff;
      if ((uint)local_58 != 0) goto LAB_001027da;
      if (((0x3332 < uVar5) || (*(ulong *)(param_1 + 8) - (ulong)uVar28 <= uVar19 * 5 + 2)) ||
         (*(ulong *)(param_1 + 8) <= (ulong)((uint)uVar5 * 0x17 + 0x5f))) {
        uVar11 = 8;
        goto LAB_001027da;
      }
      local_5c = 0;
      *param_2 = uVar19;
      if ((int)(uint)param_3 < 0) goto LAB_001027da;
      uVar28 = (uint)param_3 & 0xffff;
      if (uVar19 <= (param_3 & 0xffff)) {
LAB_00102e50:
        uVar11 = 6;
        goto LAB_001027da;
      }
      uVar19 = param_2[0x28];
      uVar11 = FT_Stream_Seek(param_1,*(undefined4 *)((long)param_2 + 0x10c));
      local_58 = (ulong *)CONCAT44(local_58._4_4_,(int)uVar11);
      if ((int)uVar11 != 0) goto LAB_001027da;
      uVar7 = FT_Stream_ReadUShort(param_1,&local_58);
      uVar11 = (ulong)local_58 & 0xffffffff;
      if ((uint)local_58 != 0) goto LAB_001027da;
      if ((uVar7 & 0xffff) <= uVar28) goto LAB_00102e50;
      uVar11 = FT_Stream_Skip(param_1,uVar28 * 5);
      local_58 = (ulong *)CONCAT44(local_58._4_4_,(int)uVar11);
      if ((int)uVar11 != 0) goto LAB_001027da;
      uVar5 = FT_Stream_ReadUShort(param_1,&local_58);
      uVar11 = (ulong)local_58 & 0xffffffff;
      if ((uint)local_58 != 0) goto LAB_001027da;
      uVar8 = FT_Stream_ReadUOffset(param_1,&local_58);
      uVar11 = (ulong)local_58 & 0xffffffff;
      if ((uint)local_58 != 0) goto LAB_001027da;
      *(undefined4 *)(param_2 + 0x2d) = uVar8;
      *(uint *)((long)param_2 + 0x164) = (uint)uVar5;
      uVar11 = FT_Stream_Seek(param_1,uVar8);
      local_58 = (ulong *)CONCAT44(local_58._4_4_,(int)uVar11);
      if ((int)uVar11 != 0) goto LAB_001027da;
      uVar11 = FT_Stream_EnterFrame(param_1,(ulong)uVar5);
      local_58 = (ulong *)CONCAT44(local_58._4_4_,(int)uVar11);
      if ((int)uVar11 != 0) goto LAB_001027da;
      pbVar4 = *(byte **)(param_1 + 0x40);
      puVar16 = (ushort *)(pbVar4 + uVar5);
      puVar12 = (ushort *)(pbVar4 + 0xd);
      if (puVar16 < puVar12) {
LAB_00103538:
        local_58 = (ulong *)CONCAT44(local_58._4_4_,8);
      }
      else {
        *(int *)((long)param_2 + 0x16c) =
             (int)((uint)*pbVar4 << 0x18 | (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8) >> 8;
        *(int *)(param_2 + 0x2e) =
             (int)((uint)pbVar4[3] << 0x18 | (uint)pbVar4[4] << 0x10 | (uint)pbVar4[5] << 8) >> 8;
        *(int *)((long)param_2 + 0x174) =
             (int)((uint)pbVar4[6] << 0x18 | (uint)pbVar4[7] << 0x10 | (uint)pbVar4[8] << 8) >> 8;
        *(int *)(param_2 + 0x2f) =
             (int)((uint)pbVar4[9] << 0x18 | (uint)pbVar4[10] << 0x10 | (uint)pbVar4[0xb] << 8) >> 8
        ;
        bVar2 = pbVar4[0xc];
        if ((bVar2 & 4) == 0) {
          if ((bVar2 & 0x10) != 0) {
            uVar28 = 0;
            goto LAB_00103556;
          }
        }
        else {
          iVar6 = -(uint)((bVar2 & 8) == 0);
          uVar28 = iVar6 + 2;
          if ((bVar2 & 3) == 0) {
            uVar28 = iVar6 + 5;
          }
          bVar30 = bVar2 & 0x10;
          if ((bVar2 & 0x10) == 0) {
            if (puVar16 < (ushort *)((long)puVar12 + (ulong)uVar28)) goto LAB_00103538;
LAB_00102aae:
            if ((bVar2 & 8) == 0) {
              puVar26 = (ushort *)(pbVar4 + 0xe);
              uVar28 = (uint)pbVar4[0xd];
            }
            else {
              puVar26 = (ushort *)(pbVar4 + 0xf);
              uVar28 = (uint)(short)(*(ushort *)(pbVar4 + 0xd) << 8 | *(ushort *)(pbVar4 + 0xd) >> 8
                                    );
            }
            *(uint *)(param_2 + 0x30) = uVar28;
            puVar12 = puVar26;
            if ((bVar2 & 3) == 0) {
              puVar12 = (ushort *)((long)puVar26 + 3);
              *(int *)(param_2 + 0x31) =
                   (int)((uint)(byte)*puVar26 << 0x18 | (uint)*(byte *)((long)puVar26 + 1) << 0x10 |
                        (uint)(byte)puVar26[1] << 8) >> 8;
            }
            if (bVar30 == 0) goto LAB_00102b25;
          }
          else {
LAB_00103556:
            if (puVar16 < (ushort *)((ulong)(((bVar2 & 0x20) != 0) + uVar28 + 1) + (long)puVar12))
            goto LAB_00103538;
            if ((bVar2 & 4) != 0) {
              bVar30 = 0x10;
              goto LAB_00102aae;
            }
          }
          uVar28 = (uint)(byte)*puVar12;
          if ((bVar2 & 0x20) == 0) {
            puVar12 = (ushort *)((long)puVar12 + 1);
          }
          else {
            uVar5 = *puVar12;
            puVar12 = puVar12 + 1;
            uVar28 = (uint)(short)(uVar5 << 8 | uVar5 >> 8);
          }
          *(uint *)((long)param_2 + 0x184) = uVar28;
        }
LAB_00102b25:
        puVar26 = puVar12;
        if ((bVar2 & 0x40) != 0) {
          puVar26 = (ushort *)((long)puVar12 + 1);
          if (puVar16 < puVar26) goto LAB_00103538;
          for (uVar28 = (uint)(byte)*puVar12; uVar28 != 0; uVar28 = uVar28 - 1) {
            if ((puVar16 < puVar26 + 1) ||
               (puVar26 = (ushort *)((ulong)(byte)*puVar26 + (long)(puVar26 + 1)), puVar16 < puVar26
               )) goto LAB_00103538;
          }
          local_58 = (ulong *)((ulong)local_58._4_4_ << 0x20);
        }
        if (puVar16 < (ushort *)((long)puVar26 + 5U)) goto LAB_00103538;
        uVar28 = (uint)(ushort)(*puVar26 << 8 | *puVar26 >> 8);
        *(uint *)((long)param_2 + 0x18c) = uVar28;
        *(uint *)(param_2 + 0x32) =
             (uint)(byte)puVar26[1] << 0x10 | (uint)*(byte *)((long)puVar26 + 3) << 8 |
             (uint)(byte)puVar26[2];
        if ((int)uVar19 != 0) {
          if (puVar16 < puVar26 + 3) goto LAB_00103538;
          *(uint *)((long)param_2 + 0x18c) = (uint)*(byte *)((long)puVar26 + 5) * 0x10000 + uVar28;
        }
      }
      FT_Stream_ExitFrame(param_1);
      local_5c = (uint)local_58;
      uVar11 = (ulong)local_58 & 0xffffffff;
      if ((uint)local_58 != 0) goto LAB_001027da;
      uVar19 = *(ulong *)(param_1 + 0x38);
      uVar28 = (uint)param_2[0x32];
      param_2[0x4d] = 0;
      uVar7 = *(uint *)((long)param_2 + 0x18c);
      param_2[0x33] = uVar19;
      *(uint *)(param_2 + 0x34) = uVar28;
      param_2[0x4e] = (ulong)(param_2 + 0x4d);
      uVar11 = FT_Stream_Seek(param_1,(ulong)uVar28);
      local_58 = (ulong *)CONCAT44(local_58._4_4_,(int)uVar11);
      if ((int)uVar11 != 0) goto LAB_001027da;
      uVar11 = FT_Stream_EnterFrame(param_1,(ulong)uVar7);
      local_58 = (ulong *)CONCAT44(local_58._4_4_,(int)uVar11);
      if ((int)uVar11 != 0) goto LAB_001027da;
      puVar26 = *(ushort **)(param_1 + 0x40);
      puVar16 = (ushort *)((long)puVar26 + (ulong)uVar7);
      puVar12 = (ushort *)((long)puVar26 + 0xf);
      param_2[0x50] = (ulong)puVar26;
      if (puVar16 < puVar12) {
LAB_00102e60:
        local_58 = (ulong *)CONCAT44(local_58._4_4_,8);
      }
      else {
        *(uint *)((long)param_2 + 0x1a4) = (uint)(ushort)(*puVar26 << 8 | *puVar26 >> 8);
        uVar7 = (uint)(ushort)(puVar26[1] << 8 | puVar26[1] >> 8);
        *(uint *)(param_2 + 0x35) = uVar7;
        uVar10 = (uint)(ushort)(puVar26[2] << 8 | puVar26[2] >> 8);
        *(uint *)((long)param_2 + 0x1ac) = uVar10;
        param_2[0x36] = (long)(short)(puVar26[3] << 8 | puVar26[3] >> 8);
        param_2[0x37] = (long)(short)(puVar26[4] << 8 | puVar26[4] >> 8);
        param_2[0x38] = (long)(short)(puVar26[5] << 8 | puVar26[5] >> 8);
        param_2[0x39] = (long)(short)(puVar26[6] << 8 | puVar26[6] >> 8);
        bVar2 = (byte)puVar26[7];
        *(uint *)(param_2 + 0x3a) = (uint)bVar2;
        if ((uVar10 == 0) || (uVar7 == 0)) goto LAB_00102e60;
        if ((bVar2 & 4) == 0) {
          puVar12 = (ushort *)((long)puVar26 + 0x11);
          if (puVar16 < puVar12) goto LAB_00102e60;
          *(int *)((long)param_2 + 0x1d4) =
               (int)(short)(*(ushort *)((long)puVar26 + 0xf) << 8 |
                           *(ushort *)((long)puVar26 + 0xf) >> 8);
        }
        puVar26 = puVar12;
        if ((char)bVar2 < '\0') {
          puVar26 = (ushort *)((long)puVar12 + 1);
          if (puVar26 <= puVar16) {
            if ((byte)*puVar12 == 0) {
              local_58 = (ulong *)((ulong)local_58._4_4_ << 0x20);
              goto LAB_00102cfb;
            }
            puVar29 = (ushort *)((long)puVar12 + 3);
            if (puVar29 <= puVar16) {
              bVar30 = (byte)puVar12[1];
              puVar26 = (ushort *)((ulong)*(byte *)((long)puVar12 + 1) + (long)puVar29);
              if (puVar26 <= puVar16) {
                uVar7 = (uint)(byte)*puVar12;
                do {
                  pcVar32 = pfr_extra_item_load_bitmap_info;
                  puVar15 = &pfr_phy_font_extra_items;
                  do {
                    if ((uint)bVar30 == *puVar15) {
                      iVar6 = (*pcVar32)(puVar29,puVar26,param_2 + 0x33);
                      if (iVar6 != 0) goto LAB_0010352f;
                      break;
                    }
                    pcVar32 = *(code **)(puVar15 + 6);
                    puVar15 = puVar15 + 4;
                  } while (pcVar32 != (code *)0x0);
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) {
                    local_58 = (ulong *)((ulong)local_58 & 0xffffffff00000000);
                    goto LAB_00102cfb;
                  }
                  puVar29 = puVar26 + 1;
                  if (puVar16 < puVar29) break;
                  bVar30 = *(byte *)((long)puVar26 + 1);
                  puVar26 = (ushort *)((long)puVar29 + (ulong)(byte)*puVar26);
                } while (puVar26 <= puVar16);
                iVar6 = 8;
LAB_0010352f:
                local_58 = (ulong *)CONCAT44(local_58._4_4_,iVar6);
                goto LAB_00102e68;
              }
            }
          }
          goto LAB_00102e60;
        }
LAB_00102cfb:
        puVar12 = (ushort *)((long)puVar26 + 3);
        if (puVar16 < puVar12) goto LAB_00102e60;
        uVar7 = (uint)(byte)*puVar26 << 0x10 | (uint)*(byte *)((long)puVar26 + 1) << 8 |
                (uint)(byte)puVar26[1];
        puVar29 = puVar12;
        if (uVar7 != 0) {
          uVar11 = (ulong)uVar7;
          puVar29 = (ushort *)((long)puVar12 + uVar11);
          if (puVar16 < puVar29) goto LAB_00102e60;
          puVar26 = (ushort *)((long)puVar26 + 7);
          if (puVar26 <= puVar29) {
            while( true ) {
              uVar5 = *puVar12 << 8 | *puVar12 >> 8;
              if ((uVar5 < 4) || (uVar23 = (ulong)uVar5, uVar11 < uVar23)) break;
              uVar3 = puVar12[1];
              puVar1 = (ushort *)((long)puVar12 + uVar23);
              uVar24 = uVar3 << 8 | uVar3 >> 8;
              if (uVar3 == 0x200) {
                if (puVar12 + 0x12 <= puVar1) {
                  *(int *)(param_2 + 0x3b) = (int)(short)(puVar12[7] << 8 | puVar12[7] >> 8);
                  *(int *)((long)param_2 + 0x1dc) = (int)(short)(puVar12[8] << 8 | puVar12[8] >> 8);
                  *(int *)(param_2 + 0x3c) = (int)(short)(puVar12[9] << 8 | puVar12[9] >> 8);
                }
              }
              else {
                puVar18 = param_2 + 0x43;
                if (uVar24 != 3) {
                  if (uVar24 != 1) goto LAB_00102da8;
                  puVar18 = param_2 + 0x42;
                }
                uVar7 = pfr_aux_name_load(puVar26,uVar5 - 4,uVar19,puVar18);
                local_58 = (ulong *)CONCAT44(local_58._4_4_,uVar7);
                if (uVar7 != 0) {
                  uVar11 = (ulong)uVar7;
                  goto LAB_001027da;
                }
              }
LAB_00102da8:
              uVar11 = uVar11 - uVar23;
              if ((uVar11 == 0) || (puVar26 = puVar1 + 2, puVar12 = puVar1, puVar29 < puVar26))
              break;
            }
          }
        }
        local_98 = (ushort *)((long)puVar29 + 1);
        if (puVar16 < local_98) goto LAB_00102e60;
        bVar30 = (byte)*puVar29;
        uVar7 = (uint)bVar30;
        *(uint *)(param_2 + 0x46) = uVar7;
        if (puVar16 < (ushort *)((ulong)((uint)bVar30 + (uint)bVar30) + (long)local_98))
        goto LAB_00102e60;
        uVar11 = ft_mem_qrealloc(uVar19,4,0,(ulong)bVar30,0,&local_58);
        param_2[0x47] = uVar11;
        if ((uint)local_58 == 0) {
          if (uVar7 != 0) {
            lVar22 = 0;
            do {
              *(int *)(uVar11 + lVar22 * 4) =
                   (int)CONCAT11(*(byte *)((long)puVar29 + lVar22 * 2 + 1),(byte)puVar29[lVar22 + 1]
                                );
              lVar22 = lVar22 + 1;
            } while ((uint)lVar22 < uVar7);
            local_98 = local_98 + bVar30;
          }
          puVar12 = local_98 + 4;
          if (puVar12 <= puVar16) {
            *(uint *)(param_2 + 0x48) = (uint)(byte)*local_98;
            *(uint *)((long)param_2 + 0x244) = (uint)*(byte *)((long)local_98 + 1);
            *(uint *)(param_2 + 0x3f) = (uint)(ushort)(local_98[1] << 8 | local_98[1] >> 8);
            *(uint *)(param_2 + 0x3d) = (uint)(ushort)(local_98[2] << 8 | local_98[2] >> 8);
            uVar5 = local_98[3] << 8 | local_98[3] >> 8;
            param_2[0x4a] = (ulong)((long)puVar12 + ((ulong)uVar28 - *(long *)(param_1 + 0x40)));
            uVar28 = (uint)uVar5;
            *(uint *)(param_2 + 0x49) = uVar28;
            if (uVar28 != 0) {
              local_90 = bVar2 & 2;
              iVar6 = -(uint)((bVar2 & 2) == 0);
              iVar9 = iVar6 + 5;
              if ((bVar2 & 4) != 0) {
                iVar9 = iVar6 + 7;
              }
              local_80 = bVar2 & 0x10;
              if ((ushort *)
                  ((ulong)(((((iVar9 - (uint)((bVar2 & 8) == 0)) - (uint)((bVar2 & 0x10) == 0)) + 3)
                           - (uint)((bVar2 & 0x20) == 0)) * uVar28) + (long)puVar12) <= puVar16) {
                puVar15 = (uint *)ft_mem_qrealloc(uVar19,0x10,0,uVar5,0,&local_58);
                param_2[0x4b] = (ulong)puVar15;
                if ((uint)local_58 == 0) {
                  uVar7 = 0;
                  do {
                    uVar10 = (uint)(byte)*puVar12;
                    puVar16 = (ushort *)((long)puVar12 + 1);
                    if (local_90 != 0) {
                      puVar16 = puVar12 + 1;
                      uVar10 = (uint)(ushort)(*puVar12 << 8 | *puVar12 >> 8);
                    }
                    *puVar15 = uVar10;
                    if ((bVar2 & 4) == 0) {
                      uVar10 = *(uint *)((long)param_2 + 0x1d4);
                    }
                    else {
                      uVar5 = *puVar16;
                      puVar16 = puVar16 + 1;
                      uVar10 = (uint)(short)(uVar5 << 8 | uVar5 >> 8);
                    }
                    puVar15[1] = uVar10;
                    puVar16 = (ushort *)((long)puVar16 + (ulong)((bVar2 & 8) != 0));
                    if (local_80 == 0) {
                      puVar26 = (ushort *)((long)puVar16 + 1);
                      uVar10 = (uint)(byte)*puVar16;
                    }
                    else {
                      puVar26 = puVar16 + 1;
                      uVar10 = (uint)(ushort)(*puVar16 << 8 | *puVar16 >> 8);
                    }
                    puVar15[2] = uVar10;
                    if ((bVar2 & 0x20) == 0) {
                      puVar12 = puVar26 + 1;
                      uVar10 = (uint)(ushort)(*puVar26 << 8 | *puVar26 >> 8);
                    }
                    else {
                      puVar12 = (ushort *)((long)puVar26 + 3);
                      uVar10 = (uint)(byte)*puVar26 << 0x10 |
                               (uint)*(byte *)((long)puVar26 + 1) << 8 | (uint)(byte)puVar26[1];
                    }
                    puVar15[3] = uVar10;
                    uVar7 = uVar7 + 1;
                    puVar15 = puVar15 + 4;
                  } while (uVar7 < uVar28);
                }
                goto LAB_00102e68;
              }
            }
          }
          goto LAB_00102e60;
        }
      }
LAB_00102e68:
      FT_Stream_ExitFrame(param_1);
      uVar11 = FT_Stream_Pos(param_1);
      param_2[0x50] = 0;
      param_2[0x4f] = uVar11;
      local_5c = (uint)local_58;
      if ((uint)local_58 != 0) {
        uVar11 = (ulong)local_58 & 0xffffffff;
        goto LAB_001027da;
      }
      uVar19 = param_2[2];
      uVar28 = (uint)param_2[0x49];
      param_2[1] = param_3 & 0xffff;
      uVar11 = uVar19 | 1;
      param_2[4] = (ulong)uVar28 + 1;
      param_2[2] = uVar11;
      if (uVar28 != 0) {
        uVar7 = 0;
        piVar13 = (int *)(param_2[0x4b] + 0xc);
        do {
          if (*piVar13 != 0) {
            if (uVar28 != uVar7) {
              uVar28 = (uint)param_2[0x44];
              goto LAB_00102f06;
            }
            break;
          }
          uVar7 = uVar7 + 1;
          piVar13 = piVar13 + 4;
        } while (uVar28 != uVar7);
      }
      uVar28 = (uint)param_2[0x44];
      uVar11 = 3;
      if (uVar28 == 0) goto LAB_001027da;
      uVar11 = uVar19 & 0xfffffffffffffffe;
LAB_00102f06:
      uVar7 = (uint)param_2[0x3a] & 4;
      if (uVar7 == 0) {
        uVar11 = uVar11 | 4;
      }
      uVar19 = uVar11 | 0x10;
      if (((uint)param_2[0x3a] & 1) != 0) {
        uVar19 = uVar11 | 0x20;
      }
      if (uVar28 != 0) {
        uVar19 = uVar19 | 2;
      }
      param_2[2] = uVar19;
      if ((int)param_2[0x4c] != 0) {
        param_2[2] = param_2[2] | 0x40;
      }
      param_2[5] = param_2[0x42];
      if (param_2[0x42] == 0) {
        param_2[5] = param_2[0x41];
      }
      *(undefined4 *)(param_2 + 7) = 0;
      param_2[8] = 0;
      param_2[6] = param_2[0x43];
      sVar31 = (short)param_2[0x37];
      sVar27 = (short)param_2[0x39];
      *(short *)((long)param_2 + 0x8a) = sVar27;
      *(short *)((long)param_2 + 0x8c) = sVar31;
      uVar10 = (uint)param_2[0x35] & 0xffff;
      uVar11 = (ulong)uVar10;
      *(short *)(param_2 + 0x11) = (short)(uint)param_2[0x35];
      param_2[0xd] = param_2[0x36];
      param_2[0xe] = param_2[0x37];
      param_2[0xf] = param_2[0x38];
      param_2[0x10] = param_2[0x39];
      sVar17 = (short)((ulong)(uVar10 * 0xc) / 10);
      if ((int)sVar17 < (int)sVar27 - (int)sVar31) {
        sVar17 = sVar27 - sVar31;
      }
      *(short *)((long)param_2 + 0x8e) = sVar17;
      if (uVar28 != 0) {
        puVar14 = (undefined2 *)ft_mem_qrealloc(param_2[0x17],0x20,0,(ulong)uVar28,0,&local_5c);
        param_2[8] = (ulong)puVar14;
        uVar11 = (ulong)local_5c;
        if (local_5c != 0) goto LAB_001027da;
        piVar13 = (int *)param_2[0x45];
        puVar20 = puVar14;
        do {
          iVar6 = piVar13[1];
          iVar9 = *piVar13;
          puVar21 = puVar20 + 0x10;
          piVar13 = piVar13 + 10;
          *puVar20 = (short)iVar6;
          uVar11 = (ulong)(uint)(iVar6 << 6);
          puVar20[1] = (short)iVar9;
          *(ulong *)(puVar20 + 4) = uVar11;
          *(ulong *)(puVar20 + 8) = (ulong)(uint)(iVar9 << 6);
          *(ulong *)(puVar20 + 0xc) = uVar11;
          puVar20 = puVar21;
        } while (puVar21 != puVar14 + (ulong)uVar28 * 0x10);
        *(uint *)(param_2 + 7) = uVar28;
        uVar7 = (uint)param_2[0x3a] & 4;
        uVar10 = (uint)(ushort)param_2[0x11];
        uVar11 = (ulong)(int)uVar10;
      }
      if (uVar7 == 0) {
        uVar28 = (uint)*(ushort *)((long)param_2 + 0x1d4);
      }
      else {
        uVar19 = param_2[0x4b];
        if ((uint)param_2[0x49] == 0) {
          uVar28 = 0;
        }
        else {
          uVar25 = (ulong)(uint)param_2[0x49] * 0x10;
          uVar23 = uVar19 + uVar25;
          uVar28 = 0;
          if ((uVar25 & 0x10) != 0) {
            if (0 < (int)*(uint *)(uVar19 + 4)) {
              uVar28 = *(uint *)(uVar19 + 4);
            }
            uVar19 = uVar19 + 0x10;
            if (uVar19 == uVar23) goto LAB_0010301d;
          }
          do {
            if ((int)uVar28 < (int)*(uint *)(uVar19 + 4)) {
              uVar28 = *(uint *)(uVar19 + 4);
            }
            if ((int)uVar28 < (int)*(uint *)(uVar19 + 0x14)) {
              uVar28 = *(uint *)(uVar19 + 0x14);
            }
            uVar19 = uVar19 + 0x20;
          } while (uVar19 != uVar23);
        }
      }
LAB_0010301d:
      param_2[0x12] =
           (((ulong)(uVar10 / 0x1e) << 0x10 |
            (ulong)(-(int)((long)(uVar11 * 0x66666667) >> 0x22) & 0xffff)) << 0x10 |
           (ulong)*(ushort *)((long)param_2 + 0x8e)) << 0x10 | (ulong)(uVar28 & 0xffff);
      local_50 = 0x10003756e6963;
      local_58 = param_2;
      uVar11 = FT_CMap_New(pfr_cmap_class_rec,0,&local_58,0);
      if ((int)param_2[0x4c] != 0) {
        param_2[2] = param_2[2] | 0x40;
      }
      goto LAB_001027da;
    }
  }
  uVar11 = 2;
LAB_001027da:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


