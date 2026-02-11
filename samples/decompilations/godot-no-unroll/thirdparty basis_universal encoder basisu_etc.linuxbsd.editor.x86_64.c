
/* basisu::pack_etc1_solid_color_init() */

void basisu::pack_etc1_solid_color_init(void)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ushort uVar11;
  uint uVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  
  puVar6 = g_etc1_inverse_lookup;
  bVar2 = false;
  uVar7 = 0x10;
  do {
    piVar5 = &g_etc1_inten_tables;
    puVar10 = puVar6;
    do {
      puVar4 = puVar10;
      piVar13 = piVar5;
      do {
        iVar1 = *piVar13;
        lVar18 = 0;
        do {
          uVar12 = 0xffffffff;
          uVar3 = 0;
          uVar14 = 0;
          do {
            uVar9 = uVar3;
            uVar8 = (uint)uVar9;
            if (bVar2) {
              uVar17 = uVar8 * 8 | (uint)(uVar9 >> 2);
            }
            else {
              uVar17 = uVar8 << 4 | uVar8;
            }
            iVar15 = uVar17 + iVar1;
            if (0xff < iVar15) {
              iVar15 = 0xff;
            }
            if (iVar15 < 0) {
              iVar15 = 0;
            }
            uVar16 = iVar15 - (int)lVar18;
            uVar17 = -uVar16;
            if (0 < (int)uVar16) {
              uVar17 = uVar16;
            }
            if ((uVar17 < uVar12) && (uVar14 = uVar9, uVar12 = uVar17, uVar17 == 0)) {
              uVar11 = 0;
              goto LAB_001000ec;
            }
            uVar9 = uVar14;
            uVar3 = (ulong)(uVar8 + 1);
            uVar14 = uVar9;
          } while (uVar7 != uVar8 + 1);
          uVar11 = (ushort)(uVar12 << 8);
LAB_001000ec:
          *(ushort *)(puVar4 + lVar18 * 2) = uVar11 | (ushort)uVar9;
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x100);
        puVar4 = puVar4 + 0x2000;
        piVar13 = piVar13 + 1;
      } while (puVar4 != puVar10 + 0x8000);
      piVar5 = piVar5 + 4;
      puVar10 = puVar10 + 0x400;
    } while (piVar5 != (int *)&g_cluster_fit_order_tab);
    puVar6 = puVar6 + 0x200;
    uVar7 = 0x20;
    if (bVar2) {
      return;
    }
    bVar2 = true;
  } while( true );
}



/* basisu::pack_etc1_block_solid_color(basisu::etc_block&, unsigned char const*) */

uint basisu::pack_etc1_block_solid_color(etc_block *param_1,uchar *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  etc_block eVar19;
  uint uVar20;
  etc_block eVar21;
  uint uVar22;
  etc_block eVar23;
  uint uVar24;
  uint local_6c;
  long local_68;
  uint local_54;
  
  uVar24 = 0;
  uVar15 = 0xffffffff;
  uVar22 = 0;
  uVar20 = 0;
  uVar18 = 0;
  bVar1 = param_2[1];
  local_68 = 0;
  local_54 = 1;
  uVar7 = 2;
  while( true ) {
    uVar6 = uVar7;
    uVar17 = (ulong)bVar1;
    uVar9 = (ulong)uVar6;
    bVar1 = param_2[uVar9];
    bVar2 = param_2[local_68];
    local_6c = (uint)local_68;
    iVar11 = bVar2 - 1;
    do {
      if (iVar11 == -1) {
        iVar16 = 0;
        puVar10 = &g_etc1_color8_to_etc_block_config_0_255;
      }
      else {
        puVar10 = &g_etc1_color8_to_etc_block_config_0_255;
        iVar16 = iVar11;
        if (iVar11 != 0) {
          if (iVar11 < 0xff) {
            puVar10 = (ushort *)
                      (g_etc1_color8_to_etc_block_config_1_to_254 + (long)(iVar11 + -1) * 0x18);
          }
          else {
            iVar16 = 0xff;
            puVar10 = &DAT_0010ee02;
          }
        }
      }
      do {
        uVar3 = *puVar10;
        puVar10 = puVar10 + 1;
        bVar13 = (byte)uVar3;
        uVar4 = *(undefined2 *)(g_etc1_inverse_lookup + uVar17 * 2 + (ulong)bVar13 * 0x200);
        uVar5 = *(undefined2 *)(g_etc1_inverse_lookup + (ulong)bVar1 * 2 + (ulong)bVar13 * 0x200);
        uVar12 = (uint)(byte)((ushort)uVar5 >> 8);
        uVar7 = (uint)(byte)((ushort)uVar4 >> 8);
        uVar8 = uVar7 * uVar7 + (iVar16 - (uint)bVar2) * (iVar16 - (uint)bVar2) + uVar12 * uVar12;
        uVar7 = uVar22;
        uVar12 = uVar24;
        if (uVar8 < uVar15) {
          uVar20 = (uint)uVar3;
          bVar14 = (byte)uVar4;
          uVar22 = (uint)bVar14;
          bVar13 = (byte)uVar5;
          uVar24 = (uint)bVar13;
          uVar18 = local_6c;
          uVar7 = (uint)bVar14;
          uVar12 = (uint)bVar13;
          uVar15 = uVar8;
          if (uVar8 == 0) {
            uVar15 = 0;
            goto LAB_00100301;
          }
        }
        uVar24 = uVar12;
        uVar22 = uVar7;
      } while (*puVar10 != 0xffff);
      iVar11 = iVar11 + 1;
    } while (iVar11 != bVar2 + 2);
    local_68 = local_68 + 1;
    if (local_68 == 3) break;
    uVar7 = *(uint *)(pack_etc1_block_solid_color(basisu::etc_block&,unsigned_char_const*)::
                      s_next_comp + local_68 * 4 + 4);
    local_54 = uVar6;
  }
  local_54 = *(uint *)(pack_etc1_block_solid_color(basisu::etc_block&,unsigned_char_const*)::
                       s_next_comp + (ulong)uVar18 * 4);
  uVar9 = (ulong)*(uint *)(pack_etc1_block_solid_color(basisu::etc_block&,unsigned_char_const*)::
                           s_next_comp + (ulong)(uVar18 + 1) * 4);
  local_6c = uVar18;
LAB_00100301:
  param_1[3] = (etc_block)(((byte)((int)uVar20 >> 1) & 7) * '$' | (char)(uVar20 & 1) * '\x02');
  bVar1 = *(byte *)((long)&g_selector_index_to_etc1 + (ulong)((int)uVar20 >> 4 & 3));
  if ((uVar20 & 1) == 0) {
    eVar19 = (etc_block)((byte)(uVar20 >> 8) | (byte)(((int)uVar20 >> 8) << 4));
    eVar21 = (etc_block)((byte)uVar22 | (byte)(uVar22 << 4));
    eVar23 = (etc_block)((byte)uVar24 | (byte)(uVar24 << 4));
  }
  else {
    eVar19 = SUB41(((int)uVar20 >> 8) << 3,0);
    eVar21 = SUB41(uVar22 << 3,0);
    eVar23 = SUB41(uVar24 << 3,0);
  }
  *(ushort *)(param_1 + 6) = -(bVar1 & 1);
  *(ushort *)(param_1 + 4) = -(bVar1 >> 1 & 1);
  param_1[local_6c] = eVar19;
  param_1[local_54] = eVar21;
  param_1[uVar9] = eVar23;
  return uVar15;
}



/* basisu::etc_block::pack_color5(basisu::color_rgba const&, bool, unsigned int) */

uint basisu::etc_block::pack_color5(color_rgba *param_1,bool param_2,uint param_3)

{
  color_rgba cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (uint)(byte)param_1[2];
  uVar4 = (uint)(byte)param_1[1];
  cVar1 = *param_1;
  uVar5 = (uint)(byte)cVar1;
  if (param_2) {
    uVar5 = (((uint)(byte)cVar1 * 0x20 - (uint)(byte)cVar1) + param_3) / 0xff;
    uVar4 = ((uint)(byte)param_1[1] * 0x1f + param_3) / 0xff;
    uVar3 = ((uint)(byte)param_1[2] * 0x1f + param_3) / 0xff;
  }
  uVar2 = 0x1f;
  if (uVar4 < 0x20) {
    uVar2 = uVar4;
  }
  uVar4 = 0x1f;
  if (uVar5 < 0x20) {
    uVar4 = uVar5;
  }
  if (0x1f < uVar3) {
    uVar3 = 0x1f;
  }
  return uVar2 << 5 | uVar4 << 10 | uVar3;
}



/* basisu::etc_block::pack_color5(unsigned int, unsigned int, unsigned int, bool, unsigned int) */

uint basisu::etc_block::pack_color5
               (uint param_1,uint param_2,uint param_3,bool param_4,uint param_5)

{
  uint uVar1;
  
  if (param_4) {
    param_1 = (param_1 * 0x1f + param_5) / 0xff;
    param_2 = (param_2 * 0x1f + param_5) / 0xff;
    param_3 = (param_3 * 0x1f + param_5) / 0xff;
  }
  uVar1 = 0x1f;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
  if (0x1f < param_1) {
    param_1 = 0x1f;
  }
  if (0x1f < param_3) {
    param_3 = 0x1f;
  }
  return uVar1 << 5 | param_1 << 10 | param_3;
}



/* basisu::etc_block::unpack_color5(unsigned short, bool, unsigned int) */

uint basisu::etc_block::unpack_color5(ushort param_1,bool param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0x1f;
  uVar3 = param_1 >> 10 & 0x1f;
  uVar2 = param_1 >> 5 & 0x1f;
  if (param_2) {
    uVar4 = uVar4 >> 2 | uVar4 * 8;
    uVar2 = uVar2 * 8 | uVar2 >> 2;
    uVar3 = uVar3 >> 2 | uVar3 * 8;
  }
  uVar1 = 0xff;
  if (param_3 < 0x100) {
    uVar1 = param_3;
  }
  return (((uVar1 & 0xff) << 8 | uVar4) << 8 | uVar2) << 8 | uVar3;
}



/* basisu::etc_block::unpack_color5(basisu::color_rgba&, unsigned short, bool) */

void basisu::etc_block::unpack_color5(color_rgba *param_1,ushort param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2 & 0x1f;
  uVar2 = param_2 >> 5 & 0x1f;
  uVar3 = param_2 >> 10 & 0x1f;
  if (param_3) {
    uVar1 = uVar1 >> 2 | uVar1 * 8;
    uVar2 = uVar2 >> 2 | uVar2 * 8;
    uVar3 = uVar3 >> 2 | uVar3 * 8;
  }
  *param_1 = SUB41(uVar3,0);
  param_1[1] = SUB41(uVar2,0);
  param_1[2] = SUB41(uVar1,0);
  param_1[3] = (color_rgba)0xff;
  return;
}



/* basisu::etc_block::unpack_color5(unsigned int&, unsigned int&, unsigned int&, unsigned short,
   bool) */

void basisu::etc_block::unpack_color5
               (uint *param_1,uint *param_2,uint *param_3,ushort param_4,bool param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_4 & 0x1f;
  uVar2 = param_4 >> 10 & 0x1f;
  uVar1 = param_4 >> 5 & 0x1f;
  if (param_5) {
    uVar3 = uVar3 >> 2 | uVar3 * 8;
    uVar1 = uVar1 >> 2 | uVar1 * 8;
    uVar2 = uVar2 >> 2 | uVar2 * 8;
  }
  *param_1 = uVar2;
  *param_2 = uVar1;
  *param_3 = uVar3;
  return;
}



/* basisu::etc_block::pack_delta3(basisu::color_rgba_i16 const&) */

uint basisu::etc_block::pack_delta3(color_rgba_i16 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)param_1;
  uVar2 = *(ushort *)(param_1 + 2);
  uVar3 = *(ushort *)(param_1 + 4);
  uVar6 = (uint)uVar1;
  if ((uVar1 & 0x8000) != 0) {
    uVar6 = uVar1 + 8;
  }
  uVar4 = (uint)uVar2;
  if ((uVar2 & 0x8000) != 0) {
    uVar4 = uVar2 + 8;
  }
  uVar5 = (uint)uVar3;
  if ((uVar3 & 0x8000) != 0) {
    uVar5 = uVar3 + 8;
  }
  return uVar4 << 3 | uVar6 << 6 | uVar5;
}



/* basisu::etc_block::pack_delta3(int, int, int) */

uint basisu::etc_block::pack_delta3(int param_1,int param_2,int param_3)

{
  if (param_1 < 0) {
    param_1 = param_1 + 8;
  }
  if (param_2 < 0) {
    param_2 = param_2 + 8;
  }
  if (param_3 < 0) {
    param_3 = param_3 + 8;
  }
  return param_2 * 8 | param_1 << 6 | param_3;
}



/* basisu::etc_block::unpack_delta3(unsigned short) */

ulong basisu::etc_block::unpack_delta3(ushort param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = param_1 >> 6 & 7;
  if ((param_1 & 0x100) != 0) {
    uVar1 = param_1 >> 6 | 0xfffffff8;
  }
  uVar2 = param_1 >> 3 & 7;
  if ((param_1 & 0x20) != 0) {
    uVar2 = param_1 >> 3 | 0xfff8;
  }
  uVar3 = param_1 & 7;
  if ((param_1 & 4) != 0) {
    uVar3 = param_1 | 0xfff8;
  }
  return (ulong)uVar1 & 0xffff | (ulong)uVar2 << 0x10 | (ulong)uVar3 << 0x20 | 0xff000000000000;
}



/* basisu::etc_block::unpack_color5(basisu::color_rgba&, unsigned short, unsigned short, bool,
   unsigned int) */

undefined4
basisu::etc_block::unpack_color5
          (color_rgba *param_1,ushort param_2,ushort param_3,bool param_4,uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = (ulong)param_2;
  uVar2 = unpack_delta3(param_3);
  uVar4 = ((uint)uVar5 & 0x1f) + (int)(short)((ulong)uVar2 >> 0x20);
  uVar6 = ((uint)((uVar5 & 0xffffffff) >> 5) & 0x1f) + ((int)uVar2 >> 0x10);
  uVar1 = ((uint)(uVar5 >> 10) & 0x1f) + (int)(short)uVar2;
  uVar3 = 1;
  if (0x1f < (uVar6 | uVar1 | uVar4)) {
    if (0x1f < (int)uVar1) {
      uVar1 = 0x1f;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    if (0x1f < (int)uVar6) {
      uVar6 = 0x1f;
    }
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    if (0x1f < (int)uVar4) {
      uVar4 = 0x1f;
    }
    uVar3 = 0;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
      uVar3 = 0;
    }
  }
  if (param_4) {
    uVar4 = (int)uVar4 >> 2 | uVar4 * 8;
    uVar6 = (int)uVar6 >> 2 | uVar6 * 8;
    uVar1 = (int)uVar1 >> 2 | uVar1 * 8;
  }
  if (0xff < param_5) {
    param_5 = 0xff;
  }
  *(uint *)param_1 =
       (((param_5 & 0xff) << 8 | uVar4 & 0xff) << 8 | uVar6 & 0xff) << 8 | uVar1 & 0xff;
  return uVar3;
}



/* basisu::etc_block::unpack_color5(unsigned int&, unsigned int&, unsigned int&, unsigned short,
   unsigned short, bool, unsigned int) */

void basisu::etc_block::unpack_color5
               (uint *param_1,uint *param_2,uint *param_3,ushort param_4,ushort param_5,bool param_6
               ,uint param_7)

{
  long in_FS_OFFSET;
  color_rgba local_24;
  byte local_23;
  byte local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  unpack_color5(&local_24,param_4,param_5,param_6,param_7);
  *param_1 = (uint)(byte)local_24;
  *param_2 = (uint)local_23;
  *param_3 = (uint)local_22;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::etc_block::unpack_delta3(int&, int&, int&, unsigned short) */

void basisu::etc_block::unpack_delta3(int *param_1,int *param_2,int *param_3,ushort param_4)

{
  *param_1 = param_4 >> 6 & 7;
  *param_2 = param_4 >> 3 & 7;
  *param_3 = param_4 & 7;
  if (3 < *param_1) {
    *param_1 = *param_1 + -8;
  }
  if (3 < *param_2) {
    *param_2 = *param_2 + -8;
  }
  if (3 < *param_3) {
    *param_3 = *param_3 + -8;
  }
  return;
}



/* basisu::etc_block::pack_color4(basisu::color_rgba const&, bool, unsigned int) */

uint basisu::etc_block::pack_color4(color_rgba *param_1,bool param_2,uint param_3)

{
  color_rgba cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (uint)(byte)param_1[2];
  uVar4 = (uint)(byte)param_1[1];
  cVar1 = *param_1;
  uVar5 = (uint)(byte)cVar1;
  if (param_2) {
    uVar5 = (((uint)(byte)cVar1 * 0x10 - (uint)(byte)cVar1) + param_3) / 0xff;
    uVar4 = ((uint)(byte)param_1[1] * 0xf + param_3) / 0xff;
    uVar3 = ((uint)(byte)param_1[2] * 0xf + param_3) / 0xff;
  }
  uVar2 = 0xf;
  if (uVar4 < 0x10) {
    uVar2 = uVar4;
  }
  uVar4 = 0xf;
  if (uVar5 < 0x10) {
    uVar4 = uVar5;
  }
  if (0xf < uVar3) {
    uVar3 = 0xf;
  }
  return uVar2 << 4 | uVar4 << 8 | uVar3;
}



/* basisu::etc_block::pack_color4(unsigned int, unsigned int, unsigned int, bool, unsigned int) */

uint basisu::etc_block::pack_color4
               (uint param_1,uint param_2,uint param_3,bool param_4,uint param_5)

{
  uint uVar1;
  
  if (param_4) {
    param_1 = (param_1 * 0xf + param_5) / 0xff;
    param_2 = (param_2 * 0xf + param_5) / 0xff;
    param_3 = (param_3 * 0xf + param_5) / 0xff;
  }
  uVar1 = 0xf;
  if (param_2 < 0x10) {
    uVar1 = param_2;
  }
  if (0xf < param_1) {
    param_1 = 0xf;
  }
  if (0xf < param_3) {
    param_3 = 0xf;
  }
  return uVar1 << 4 | param_1 << 8 | param_3;
}



/* basisu::etc_block::unpack_color4(unsigned short, bool, unsigned int) */

uint basisu::etc_block::unpack_color4(ushort param_1,bool param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 & 0xf;
  uVar4 = param_1 >> 8 & 0xf;
  uVar2 = param_1 >> 4 & 0xf;
  if (param_2) {
    uVar3 = uVar3 * 0x11;
    uVar2 = uVar2 * 0x11;
    uVar4 = uVar4 * 0x11;
  }
  uVar1 = 0xff;
  if (param_3 < 0x100) {
    uVar1 = param_3;
  }
  return (((uVar1 & 0xff) << 8 | uVar3 & 0xff) << 8 | uVar2 & 0xff) << 8 | uVar4 & 0xff;
}



/* basisu::etc_block::unpack_color4(unsigned int&, unsigned int&, unsigned int&, unsigned short,
   bool) */

void basisu::etc_block::unpack_color4
               (uint *param_1,uint *param_2,uint *param_3,ushort param_4,bool param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_4 & 0xf;
  uVar2 = param_4 >> 8 & 0xf;
  uVar1 = param_4 >> 4 & 0xf;
  if (param_5) {
    uVar3 = uVar3 * 0x11;
    uVar1 = uVar1 * 0x11;
    uVar2 = uVar2 * 0x11;
  }
  *param_1 = uVar2;
  *param_2 = uVar1;
  *param_3 = uVar3;
  return;
}



/* basisu::etc_block::get_diff_subblock_colors(basisu::color_rgba*, unsigned short, unsigned int) */

void basisu::etc_block::get_diff_subblock_colors(color_rgba *param_1,ushort param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  color_rgba cVar6;
  int *piVar7;
  
  piVar7 = &g_etc1_inten_tables + (ulong)param_3 * 4;
  uVar1 = unpack_color5(param_2,true,0);
  iVar5 = *piVar7;
  param_1[3] = (color_rgba)0xff;
  uVar3 = uVar1 & 0xff;
  uVar4 = uVar1 >> 8 & 0xff;
  uVar1 = uVar1 >> 0x10 & 0xff;
  iVar2 = uVar3 + iVar5;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar6 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  *param_1 = cVar6;
  iVar2 = uVar4 + iVar5;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar6 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  iVar5 = iVar5 + uVar1;
  param_1[1] = cVar6;
  if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  cVar6 = SUB41(iVar5,0);
  if (iVar5 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[2] = cVar6;
  iVar5 = piVar7[1];
  param_1[7] = (color_rgba)0xff;
  iVar2 = uVar3 + iVar5;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar6 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[4] = cVar6;
  iVar2 = uVar4 + iVar5;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar6 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  iVar5 = iVar5 + uVar1;
  param_1[5] = cVar6;
  if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  cVar6 = SUB41(iVar5,0);
  if (iVar5 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[6] = cVar6;
  iVar5 = piVar7[2];
  param_1[0xb] = (color_rgba)0xff;
  iVar2 = uVar3 + iVar5;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar6 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[8] = cVar6;
  iVar2 = uVar4 + iVar5;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar6 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  iVar5 = iVar5 + uVar1;
  param_1[9] = cVar6;
  if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  cVar6 = SUB41(iVar5,0);
  if (iVar5 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[10] = cVar6;
  iVar2 = piVar7[3];
  param_1[0xf] = (color_rgba)0xff;
  iVar5 = uVar3 + iVar2;
  if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  cVar6 = SUB41(iVar5,0);
  if (iVar5 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[0xc] = cVar6;
  iVar5 = uVar4 + iVar2;
  if (0xff < (int)(uVar4 + iVar2)) {
    iVar5 = 0xff;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar2 = uVar1 + iVar2;
  param_1[0xd] = SUB41(iVar5,0);
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar6 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[0xe] = cVar6;
  return;
}



/* basisu::etc_block::get_diff_subblock_colors(basisu::color_rgba*, unsigned short, unsigned short,
   unsigned int) */

undefined4
basisu::etc_block::get_diff_subblock_colors
          (color_rgba *param_1,ushort param_2,ushort param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  color_rgba cVar7;
  long in_FS_OFFSET;
  color_rgba local_24;
  byte local_23;
  byte local_22;
  long local_20;
  
  uVar5 = (ulong)param_4;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = unpack_color5(&local_24,param_2,param_3,true,0xff);
  uVar3 = (uint)(byte)local_24;
  iVar6 = (&g_etc1_inten_tables)[uVar5 * 4];
  uVar4 = (uint)local_23;
  param_1[3] = (color_rgba)0xff;
  iVar2 = uVar3 + iVar6;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar7 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar7 = (color_rgba)0x0;
  }
  *param_1 = cVar7;
  iVar2 = uVar4 + iVar6;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar7 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar7 = (color_rgba)0x0;
  }
  iVar6 = iVar6 + (uint)local_22;
  param_1[1] = cVar7;
  if (0xff < iVar6) {
    iVar6 = 0xff;
  }
  cVar7 = SUB41(iVar6,0);
  if (iVar6 < 0) {
    cVar7 = (color_rgba)0x0;
  }
  param_1[2] = cVar7;
  iVar6 = (&DAT_0010d2a4)[uVar5 * 4];
  param_1[7] = (color_rgba)0xff;
  iVar2 = uVar3 + iVar6;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar7 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar7 = (color_rgba)0x0;
  }
  param_1[4] = cVar7;
  iVar2 = uVar4 + iVar6;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar7 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar7 = (color_rgba)0x0;
  }
  iVar6 = iVar6 + (uint)local_22;
  param_1[5] = cVar7;
  if (0xff < iVar6) {
    iVar6 = 0xff;
  }
  cVar7 = SUB41(iVar6,0);
  if (iVar6 < 0) {
    cVar7 = (color_rgba)0x0;
  }
  param_1[6] = cVar7;
  iVar6 = *(int *)(&DAT_0010d2a8 + uVar5 * 0x10);
  param_1[0xb] = (color_rgba)0xff;
  iVar2 = uVar3 + iVar6;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar7 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar7 = (color_rgba)0x0;
  }
  param_1[8] = cVar7;
  iVar2 = uVar4 + iVar6;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar6 = iVar6 + (uint)local_22;
  param_1[9] = SUB41(iVar2,0);
  if (0xff < iVar6) {
    iVar6 = 0xff;
  }
  cVar7 = SUB41(iVar6,0);
  if (iVar6 < 0) {
    cVar7 = (color_rgba)0x0;
  }
  param_1[10] = cVar7;
  iVar2 = *(int *)(&DAT_0010d2ac + uVar5 * 0x10);
  param_1[0xf] = (color_rgba)0xff;
  iVar6 = uVar3 + iVar2;
  if (0xff < iVar6) {
    iVar6 = 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  param_1[0xc] = SUB41(iVar6,0);
  iVar6 = uVar4 + iVar2;
  if (0xff < (int)(uVar4 + iVar2)) {
    iVar6 = 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  iVar2 = (uint)local_22 + iVar2;
  param_1[0xd] = SUB41(iVar6,0);
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar7 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar7 = (color_rgba)0x0;
  }
  param_1[0xe] = cVar7;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::etc_block::get_abs_subblock_colors(basisu::color_rgba*, unsigned short, unsigned int) */

void basisu::etc_block::get_abs_subblock_colors(color_rgba *param_1,ushort param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  color_rgba cVar6;
  int iVar7;
  
  uVar5 = (ulong)param_3;
  param_1[3] = (color_rgba)0xff;
  iVar3 = ((byte)(param_2 >> 8) & 0xf) * 0x11;
  iVar2 = (param_2 >> 4 & 0xf) * 0x11;
  iVar1 = (param_2 & 0xf) * 0x11;
  iVar4 = (&g_etc1_inten_tables)[uVar5 * 4];
  iVar7 = iVar3 + iVar4;
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  cVar6 = SUB41(iVar7,0);
  if (iVar7 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  *param_1 = cVar6;
  iVar7 = iVar2 + iVar4;
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  cVar6 = SUB41(iVar7,0);
  if (iVar7 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  iVar4 = iVar4 + iVar1;
  param_1[1] = cVar6;
  if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  cVar6 = SUB41(iVar4,0);
  if (iVar4 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[2] = cVar6;
  iVar4 = (&DAT_0010d2a4)[uVar5 * 4];
  param_1[7] = (color_rgba)0xff;
  iVar7 = iVar3 + iVar4;
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  cVar6 = SUB41(iVar7,0);
  if (iVar7 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[4] = cVar6;
  iVar7 = iVar2 + iVar4;
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  cVar6 = SUB41(iVar7,0);
  if (iVar7 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  iVar4 = iVar4 + iVar1;
  param_1[5] = cVar6;
  if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  cVar6 = SUB41(iVar4,0);
  if (iVar4 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[6] = cVar6;
  iVar4 = *(int *)(&DAT_0010d2a8 + uVar5 * 0x10);
  param_1[0xb] = (color_rgba)0xff;
  iVar7 = iVar3 + iVar4;
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  cVar6 = SUB41(iVar7,0);
  if (iVar7 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[8] = cVar6;
  iVar7 = iVar2 + iVar4;
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  cVar6 = SUB41(iVar7,0);
  if (iVar7 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  iVar4 = iVar4 + iVar1;
  param_1[9] = cVar6;
  if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  cVar6 = SUB41(iVar4,0);
  if (iVar4 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[10] = cVar6;
  iVar7 = *(int *)(&DAT_0010d2ac + uVar5 * 0x10);
  param_1[0xf] = (color_rgba)0xff;
  iVar3 = iVar3 + iVar7;
  if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  cVar6 = SUB41(iVar3,0);
  if (iVar3 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  iVar2 = iVar2 + iVar7;
  param_1[0xc] = cVar6;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  cVar6 = SUB41(iVar2,0);
  if (iVar2 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[0xd] = cVar6;
  iVar4 = iVar1 + iVar7;
  if (0xff < iVar1 + iVar7) {
    iVar4 = 0xff;
  }
  cVar6 = SUB41(iVar4,0);
  if (iVar4 < 0) {
    cVar6 = (color_rgba)0x0;
  }
  param_1[0xe] = cVar6;
  return;
}



/* basisu::unpack_etc1(basisu::etc_block const&, basisu::color_rgba*, bool) */

undefined8 basisu::unpack_etc1(etc_block *param_1,color_rgba *param_2,bool param_3)

{
  etc_block eVar1;
  etc_block eVar2;
  etc_block eVar3;
  etc_block eVar4;
  color_rgba cVar5;
  uint uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  color_rgba *pcVar11;
  ushort uVar12;
  int iVar13;
  sbyte sVar14;
  ushort uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  color_rgba local_68 [16];
  color_rgba local_58 [24];
  long local_40;
  
  eVar1 = param_1[3];
  eVar2 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = (int)(uint)(byte)eVar1 >> 2 & 7;
  eVar3 = param_1[1];
  uVar6 = (uint)(byte)eVar3;
  eVar4 = param_1[2];
  if (((byte)eVar1 & 2) == 0) {
    uVar12 = (byte)eVar4 & 0xf;
    etc_block::get_abs_subblock_colors
              (local_68,(ushort)(((int)uVar6 >> 4) << 4) |
                        (ushort)(((int)(uint)(byte)eVar2 >> 4) << 8) |
                        (ushort)((int)(uint)(byte)eVar4 >> 4),(int)(uint)(byte)eVar1 >> 5);
    etc_block::get_abs_subblock_colors
              (local_58,(ushort)(((byte)eVar3 & 0xf) << 4) | (ushort)(((byte)eVar2 & 0xf) << 8) |
                        uVar12,uVar16);
    if (param_3) goto LAB_00101095;
LAB_001012a8:
    if (((byte)eVar1 & 1) == 0) {
      iVar13 = 0;
      do {
        bVar8 = (byte)iVar13;
        *(undefined4 *)param_2 =
             *(undefined4 *)
              (local_68 +
              (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                              (ulong)(((int)(uint)(byte)param_1[5] >> (bVar8 & 0x1f)) * 2 & 2U |
                                     (int)(uint)(byte)param_1[7] >> (bVar8 & 0x1f) & 1U)) * 4);
        *(undefined4 *)(param_2 + 4) =
             *(undefined4 *)
              (local_68 +
              (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                              (ulong)(((int)(uint)(byte)param_1[5] >> (bVar8 + 4 & 0x1f)) * 2 & 2U |
                                     (int)(uint)(byte)param_1[7] >> (bVar8 + 4 & 0x1f) & 1U)) * 4);
        iVar13 = iVar13 + 1;
        bVar9 = bVar8 + 0xc & 7;
        *(undefined4 *)(param_2 + 8) =
             *(undefined4 *)
              (local_58 +
              (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                              (ulong)(((int)(uint)(byte)param_1[4] >> (bVar8 & 0x1f)) * 2 & 2U |
                                     (int)(uint)(byte)param_1[6] >> (bVar8 & 0x1f) & 1U)) * 4);
        *(undefined4 *)(param_2 + 0xc) =
             *(undefined4 *)
              (local_58 +
              (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                              (ulong)(((int)(uint)(byte)param_1[4] >> bVar9) * 2 & 2U |
                                     (int)(uint)(byte)param_1[6] >> bVar9 & 1U)) * 4);
        param_2 = param_2 + 0x10;
      } while (iVar13 != 4);
      uVar7 = 1;
      goto LAB_00101281;
    }
    sVar14 = 4;
    pcVar11 = param_2;
    while( true ) {
      bVar8 = sVar14 - 4;
      *(undefined4 *)pcVar11 =
           *(undefined4 *)
            (local_68 +
            (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                            (ulong)(((int)(uint)(byte)param_1[5] >> (bVar8 & 0x1f)) * 2 & 2U |
                                   (int)(uint)(byte)param_1[7] >> (bVar8 & 0x1f) & 1U)) * 4);
      *(undefined4 *)(pcVar11 + 4) =
           *(undefined4 *)
            (local_68 +
            (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                            (ulong)(((int)(uint)(byte)param_1[5] >> sVar14) * 2 & 2U |
                                   (int)(uint)(byte)param_1[7] >> sVar14 & 1U)) * 4);
      *(undefined4 *)(pcVar11 + 8) =
           *(undefined4 *)
            (local_68 +
            (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                            (ulong)(((int)(uint)(byte)param_1[4] >> (bVar8 & 0x1f)) * 2 & 2U |
                                   (int)(uint)(byte)param_1[6] >> (bVar8 & 0x1f) & 1U)) * 4);
      *(undefined4 *)(pcVar11 + 0xc) =
           *(undefined4 *)
            (local_68 +
            (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                            (ulong)(((int)(uint)(byte)param_1[4] >> sVar14) * 2 & 2U |
                                   (int)(uint)(byte)param_1[6] >> sVar14 & 1U)) * 4);
      if (sVar14 != 4) break;
      sVar14 = 5;
      pcVar11 = pcVar11 + 0x10;
    }
    sVar14 = 2;
    pcVar11 = param_2 + 0x20;
    while( true ) {
      *(undefined4 *)pcVar11 =
           *(undefined4 *)
            (local_58 +
            (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                            (ulong)(((int)(uint)(byte)param_1[5] >> sVar14) * 2 & 2U |
                                   (int)(uint)(byte)param_1[7] >> sVar14 & 1U)) * 4);
      *(undefined4 *)(pcVar11 + 4) =
           *(undefined4 *)
            (local_58 +
            (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                            (ulong)(((int)(uint)(byte)param_1[5] >> sVar14 + 4) * 2 & 2U |
                                   (int)(uint)(byte)param_1[7] >> sVar14 + 4 & 1U)) * 4);
      bVar8 = sVar14 + 0xcU & 7;
      *(undefined4 *)(pcVar11 + 8) =
           *(undefined4 *)
            (local_58 +
            (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                            (ulong)(((int)(uint)(byte)param_1[4] >> sVar14) * 2 & 2U |
                                   (int)(uint)(byte)param_1[6] >> sVar14 & 1U)) * 4);
      *(undefined4 *)(pcVar11 + 0xc) =
           *(undefined4 *)
            (local_58 +
            (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                            (ulong)(((int)(uint)(byte)param_1[4] >> bVar8) * 2 & 2U |
                                   (int)(uint)(byte)param_1[6] >> bVar8 & 1U)) * 4);
      if (sVar14 != 2) break;
      sVar14 = 3;
      pcVar11 = pcVar11 + 0x10;
    }
  }
  else {
    uVar15 = (byte)eVar4 & 7 | (ushort)(((byte)eVar2 & 7) << 6) | (ushort)((uVar6 & 7) << 3);
    uVar12 = (ushort)(((int)uVar6 >> 3) << 5) | (ushort)(((int)(uint)(byte)eVar2 >> 3) << 10) |
             (ushort)((int)(uint)(byte)eVar4 >> 3);
    etc_block::get_diff_subblock_colors(local_68,uVar12,(int)(uint)(byte)eVar1 >> 5);
    uVar7 = etc_block::get_diff_subblock_colors(local_58,uVar12,uVar15,uVar16);
    if ((char)uVar7 == '\0') goto LAB_00101281;
    if (!param_3) goto LAB_001012a8;
LAB_00101095:
    if (((byte)eVar1 & 1) == 0) {
      iVar13 = 0;
      do {
        bVar8 = (byte)iVar13;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[5] >> (bVar8 & 0x1f)) * 2 & 2U |
                                        (int)(uint)(byte)param_1[7] >> (bVar8 & 0x1f) & 1U));
        cVar5 = local_68[uVar10 * 4 + 2];
        *(undefined2 *)param_2 = *(undefined2 *)(local_68 + uVar10 * 4);
        param_2[2] = cVar5;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[5] >> (bVar8 + 4 & 0x1f)) * 2 &
                                         2U | (int)(uint)(byte)param_1[7] >> (bVar8 + 4 & 0x1f) & 1U
                                        ));
        cVar5 = local_68[uVar10 * 4 + 2];
        *(undefined2 *)(param_2 + 4) = *(undefined2 *)(local_68 + uVar10 * 4);
        param_2[6] = cVar5;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[4] >> (bVar8 & 0x1f)) * 2 & 2U |
                                        (int)(uint)(byte)param_1[6] >> (bVar8 & 0x1f) & 1U));
        cVar5 = local_58[uVar10 * 4 + 2];
        *(undefined2 *)(param_2 + 8) = *(undefined2 *)(local_58 + uVar10 * 4);
        iVar13 = iVar13 + 1;
        param_2[10] = cVar5;
        bVar8 = bVar8 + 0xc & 7;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[4] >> bVar8) * 2 & 2U |
                                        (int)(uint)(byte)param_1[6] >> bVar8 & 1U));
        cVar5 = local_58[uVar10 * 4 + 2];
        *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(local_58 + uVar10 * 4);
        param_2[0xe] = cVar5;
        param_2 = param_2 + 0x10;
      } while (iVar13 != 4);
    }
    else {
      sVar14 = 4;
      pcVar11 = param_2;
      while( true ) {
        bVar8 = sVar14 - 4;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[5] >> (bVar8 & 0x1f)) * 2 & 2U |
                                        (int)(uint)(byte)param_1[7] >> (bVar8 & 0x1f) & 1U));
        cVar5 = local_68[uVar10 * 4 + 2];
        *(undefined2 *)pcVar11 = *(undefined2 *)(local_68 + uVar10 * 4);
        pcVar11[2] = cVar5;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[5] >> sVar14) * 2 & 2U |
                                        (int)(uint)(byte)param_1[7] >> sVar14 & 1U));
        cVar5 = local_68[uVar10 * 4 + 2];
        *(undefined2 *)(pcVar11 + 4) = *(undefined2 *)(local_68 + uVar10 * 4);
        pcVar11[6] = cVar5;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[4] >> (bVar8 & 0x1f)) * 2 & 2U |
                                        (int)(uint)(byte)param_1[6] >> (bVar8 & 0x1f) & 1U));
        cVar5 = local_68[uVar10 * 4 + 2];
        *(undefined2 *)(pcVar11 + 8) = *(undefined2 *)(local_68 + uVar10 * 4);
        pcVar11[10] = cVar5;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[4] >> sVar14) * 2 & 2U |
                                        (int)(uint)(byte)param_1[6] >> sVar14 & 1U));
        cVar5 = local_68[uVar10 * 4 + 2];
        *(undefined2 *)(pcVar11 + 0xc) = *(undefined2 *)(local_68 + uVar10 * 4);
        pcVar11[0xe] = cVar5;
        if (sVar14 != 4) break;
        sVar14 = 5;
        pcVar11 = pcVar11 + 0x10;
      }
      sVar14 = 2;
      pcVar11 = param_2 + 0x20;
      while( true ) {
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[5] >> sVar14) * 2 & 2U |
                                        (int)(uint)(byte)param_1[7] >> sVar14 & 1U));
        cVar5 = local_58[uVar10 * 4 + 2];
        *(undefined2 *)pcVar11 = *(undefined2 *)(local_58 + uVar10 * 4);
        pcVar11[2] = cVar5;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[5] >> sVar14 + 4) * 2 & 2U |
                                        (int)(uint)(byte)param_1[7] >> sVar14 + 4 & 1U));
        cVar5 = local_58[uVar10 * 4 + 2];
        *(undefined2 *)(pcVar11 + 4) = *(undefined2 *)(local_58 + uVar10 * 4);
        pcVar11[6] = cVar5;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[4] >> sVar14) * 2 & 2U |
                                        (int)(uint)(byte)param_1[6] >> sVar14 & 1U));
        cVar5 = local_58[uVar10 * 4 + 2];
        *(undefined2 *)(pcVar11 + 8) = *(undefined2 *)(local_58 + uVar10 * 4);
        pcVar11[10] = cVar5;
        bVar8 = sVar14 + 0xcU & 7;
        uVar10 = (ulong)*(byte *)((long)&g_etc1_to_selector_index +
                                 (ulong)(((int)(uint)(byte)param_1[4] >> bVar8) * 2 & 2U |
                                        (int)(uint)(byte)param_1[6] >> bVar8 & 1U));
        cVar5 = local_58[uVar10 * 4 + 2];
        *(undefined2 *)(pcVar11 + 0xc) = *(undefined2 *)(local_58 + uVar10 * 4);
        pcVar11[0xe] = cVar5;
        if (sVar14 != 2) break;
        sVar14 = 3;
        pcVar11 = pcVar11 + 0x10;
      }
    }
  }
  uVar7 = 1;
LAB_00101281:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Type propagation algorithm not settling */
/* basisu::etc_block::evaluate_etc1_error(basisu::color_rgba const*, bool, int) const */

long __thiscall
basisu::etc_block::evaluate_etc1_error(etc_block *this,color_rgba *param_1,bool param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  color_rgba *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  color_rgba local_78;
  byte local_77 [71];
  long local_30;
  
  pcVar6 = &local_78;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  unpack_etc1(this,&local_78,false);
  if (param_3 < 0) {
    lVar7 = 0;
    do {
      iVar1 = (uint)(byte)*param_1 - (uint)*(byte *)pcVar6;
      if (param_2) {
        lVar4 = (long)(int)(((uint)(byte)param_1[1] - (uint)((byte *)pcVar6)[1]) * 0x5c +
                            iVar1 * 0x1b + ((uint)(byte)param_1[2] - (uint)((byte *)pcVar6)[2]) * 9)
        ;
        lVar3 = iVar1 * 0x80 - lVar4;
        lVar8 = (int)(((uint)(byte)param_1[2] - (uint)((byte *)pcVar6)[2]) * 0x80) - lVar4;
        uVar2 = ((uint)((int)(lVar3 * lVar3 >> 7) * 0x1a) >> 7) +
                ((uint)((int)(lVar8 * lVar8 >> 7) * 3) >> 7) + (int)(lVar4 * lVar4 >> 7);
      }
      else {
        uVar2 = iVar1 * iVar1 +
                ((uint)(byte)param_1[1] - (uint)((byte *)pcVar6)[1]) *
                ((uint)(byte)param_1[1] - (uint)((byte *)pcVar6)[1]) +
                ((uint)(byte)param_1[2] - (uint)((byte *)pcVar6)[2]) *
                ((uint)(byte)param_1[2] - (uint)((byte *)pcVar6)[2]);
      }
      pcVar6 = (color_rgba *)((byte *)pcVar6 + 4);
      lVar7 = lVar7 + (ulong)uVar2;
      param_1 = param_1 + 4;
    } while ((color_rgba *)((long)local_77 + 0x3fU) != pcVar6);
  }
  else {
    lVar7 = 0;
    lVar3 = ((long)param_3 + (ulong)((byte)this[3] & 1) * 2) * 0x20;
    puVar5 = (uint *)(g_etc1_pixel_indices + lVar3);
    do {
      while( true ) {
        uVar10 = (ulong)*puVar5;
        lVar4 = uVar10 * 4;
        pcVar6 = param_1 + lVar4;
        if (!param_2) break;
        puVar5 = puVar5 + 1;
        lVar8 = (long)(int)(((uint)(byte)pcVar6[1] - (uint)local_77[uVar10 * 4]) * 0x5c +
                            ((uint)(byte)*pcVar6 - (uint)(byte)(&local_78)[uVar10 * 4]) * 0x1b +
                           ((uint)(byte)pcVar6[2] - (uint)local_77[uVar10 * 4 + 1]) * 9);
        lVar4 = (int)(((uint)(byte)*pcVar6 - (uint)(byte)(&local_78)[uVar10 * 4]) * 0x80) - lVar8;
        lVar9 = (int)(((uint)(byte)pcVar6[2] - (uint)local_77[uVar10 * 4 + 1]) * 0x80) - lVar8;
        lVar7 = lVar7 + (ulong)(((uint)((int)(lVar4 * lVar4 >> 7) * 0x1a) >> 7) +
                                ((uint)((int)(lVar9 * lVar9 >> 7) * 3) >> 7) +
                               (int)(lVar8 * lVar8 >> 7));
        if ((uint *)(g_etc1_pixel_indices + lVar3 + 0x20) == puVar5) goto LAB_001017c0;
      }
      puVar5 = puVar5 + 1;
      lVar7 = lVar7 + (ulong)(((uint)(byte)*pcVar6 - (uint)(byte)(&local_78)[lVar4]) *
                              ((uint)(byte)*pcVar6 - (uint)(byte)(&local_78)[lVar4]) +
                              ((uint)(byte)pcVar6[1] - (uint)local_77[lVar4]) *
                              ((uint)(byte)pcVar6[1] - (uint)local_77[lVar4]) +
                             ((uint)(byte)pcVar6[2] - (uint)local_77[lVar4 + 1]) *
                             ((uint)(byte)pcVar6[2] - (uint)local_77[lVar4 + 1]));
    } while ((uint *)(g_etc1_pixel_indices + lVar3 + 0x20) != puVar5);
  }
LAB_001017c0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}



/* basisu::etc_block::get_subblock_pixels(basisu::color_rgba*, int) const */

void __thiscall
basisu::etc_block::get_subblock_pixels(etc_block *this,color_rgba *param_1,int param_2)

{
  etc_block eVar1;
  long lVar2;
  long in_FS_OFFSET;
  color_rgba acStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      unpack_etc1(this,param_1,false);
      return;
    }
  }
  else {
    unpack_etc1(this,acStack_68,false);
    eVar1 = this[3];
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) =
           *(undefined4 *)
            (acStack_68 +
            (ulong)*(uint *)(g_etc1_pixel_indices +
                            lVar2 + ((long)param_2 + (ulong)((byte)eVar1 & 1) * 2) * 0x20) * 4);
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x20);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::etc1_optimizer::check_for_redundant_solution(basisu::etc1_solution_coordinates const&) */

undefined8 __thiscall
basisu::etc1_optimizer::check_for_redundant_solution
          (etc1_optimizer *this,etc1_solution_coordinates *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  
  uVar1 = basisu::hash_hsieh((uchar *)param_1,3);
  uVar2 = uVar1 >> 10;
  uVar5 = (ulong)(uVar1 >> 3 & 0x7f);
  uVar3 = (ulong)((uVar2 & 0x3ff) >> 3);
  if (((byte)this[uVar5 + 0x100] >> (uVar1 & 7) & 1) == 0) {
    bVar4 = (byte)uVar2 & 7;
  }
  else {
    bVar4 = (byte)(uVar2 & 7);
    if (((byte)this[uVar3 + 0x100] >> (uVar2 & 7) & 1) != 0) {
      return 0;
    }
  }
  this[uVar5 + 0x100] =
       (etc1_optimizer)((byte)this[uVar5 + 0x100] | (byte)(1 << (sbyte)(uVar1 & 7)));
  this[uVar3 + 0x100] = (etc1_optimizer)((byte)this[uVar3 + 0x100] | (byte)(1 << bVar4));
  return 1;
}



/* basisu::etc1_optimizer::evaluate_solution_slow(basisu::etc1_solution_coordinates const&,
   basisu::etc1_optimizer::potential_solution&, basisu::etc1_optimizer::potential_solution*) */

char __thiscall
basisu::etc1_optimizer::evaluate_solution_slow
          (etc1_optimizer *this,etc1_solution_coordinates *param_1,potential_solution *param_2,
          potential_solution *param_3)

{
  uint uVar1;
  etc1_solution_coordinates eVar2;
  etc1_solution_coordinates eVar3;
  etc1_solution_coordinates eVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  uint uVar25;
  void *__ptr;
  uint uVar26;
  int *piVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  long in_FS_OFFSET;
  byte bVar33;
  char local_6d;
  byte local_58 [8];
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6d = check_for_redundant_solution(this,param_1);
  if (local_6d != '\0') {
    piVar12 = *(int **)this;
    param_2[0x28] = (potential_solution)0x0;
    if ((char)piVar12[0xc] == '\0') {
LAB_00101a6c:
      eVar2 = *param_1;
      eVar3 = param_1[1];
      eVar4 = param_1[2];
      if (param_1[8] == (etc1_solution_coordinates)0x0) {
        uVar16 = (uint)(byte)eVar2 << 3 | (uint)((byte)eVar2 >> 2);
        uVar25 = (uint)((byte)eVar3 >> 2) | (uint)(byte)eVar3 << 3;
        uVar14 = (uint)(byte)eVar4 << 3 | (uint)((byte)eVar4 >> 2);
      }
      else {
        uVar16 = (uint)(byte)eVar2 | (uint)(byte)eVar2 << 4;
        uVar25 = (uint)(byte)eVar3 << 4 | (uint)(byte)eVar3;
        uVar14 = (uint)(byte)eVar4 << 4 | (uint)(byte)eVar4;
      }
      uVar6 = piVar12[3];
      lVar8 = *(long *)(piVar12 + 0xe);
      uVar1 = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x7fffffffffffffff;
      piVar19 = &g_etc1_inten_tables;
      do {
        pbVar22 = local_58;
        piVar27 = piVar19;
        if ((1 < *piVar12) ||
           (g_eval_dist_tables[(long)*(int *)(this + 0x2c) + (ulong)uVar1 * 0x100] != '\0')) {
          do {
            iVar17 = *piVar27;
            pbVar22[3] = 0xff;
            iVar18 = (uVar16 & 0xff) + iVar17;
            if (0xff < iVar18) {
              iVar18 = 0xff;
            }
            bVar13 = (byte)iVar18;
            if (iVar18 < 0) {
              bVar13 = 0;
            }
            *pbVar22 = bVar13;
            iVar18 = (uVar25 & 0xff) + iVar17;
            if (0xff < iVar18) {
              iVar18 = 0xff;
            }
            bVar13 = (byte)iVar18;
            if (iVar18 < 0) {
              bVar13 = 0;
            }
            iVar17 = iVar17 + (uVar14 & 0xff);
            pbVar22[1] = bVar13;
            if (0xff < iVar17) {
              iVar17 = 0xff;
            }
            if (iVar17 < 0) {
              iVar17 = 0;
            }
            pbVar23 = pbVar22 + 4;
            pbVar22[2] = (byte)iVar17;
            pbVar22 = pbVar23;
            piVar27 = piVar27 + 1;
          } while (local_48 != pbVar23);
          pbVar22 = *(byte **)(piVar12 + 4);
          if (uVar6 == 0) {
            uVar24 = 0;
            if (*(long *)(param_2 + 0x20) == 0) goto LAB_00101b23;
          }
          else {
            lVar15 = 0;
            uVar24 = 0;
            pbVar23 = pbVar22;
            while( true ) {
              if (lVar8 == 0) {
                if ((char)piVar12[1] == '\0') {
                  uVar32 = (uint)*pbVar23;
                  bVar13 = pbVar23[1];
                  bVar5 = pbVar23[2];
                  iVar18 = uVar32 - local_58[0];
                  iVar17 = (uint)bVar13 - (uint)local_58[1];
                  iVar29 = (uint)bVar5 - (uint)local_58[2];
                  uVar26 = iVar17 * iVar17 + iVar18 * iVar18 + iVar29 * iVar29;
                  iVar17 = (uint)*pbVar23 - (uint)local_58[4];
                  iVar29 = (uint)bVar13 - (uint)local_58[5];
                  iVar18 = (uint)bVar5 - (uint)local_58[6];
                  uVar30 = iVar29 * iVar29 + iVar17 * iVar17 + iVar18 * iVar18;
                  bVar33 = uVar30 < uVar26;
                  if (!(bool)bVar33) {
                    uVar30 = uVar26;
                  }
                  iVar29 = uVar32 - local_50;
                  iVar17 = (uint)bVar13 - (uint)local_4f;
                  iVar18 = (uint)bVar5 - (uint)local_4e;
                  uVar26 = iVar17 * iVar17 + iVar29 * iVar29 + iVar18 * iVar18;
                  if (uVar26 < uVar30) {
                    bVar33 = 2;
                    uVar30 = uVar26;
                  }
                  iVar29 = uVar32 - local_4c;
                  iVar17 = (uint)bVar13 - (uint)local_4b;
                  iVar18 = (uint)bVar5 - (uint)local_4a;
                  uVar26 = iVar18 * iVar18 + iVar17 * iVar17 + iVar29 * iVar29;
                }
                else {
                  bVar13 = *pbVar23;
                  iVar18 = (uint)bVar13 - (uint)local_58[0];
                  bVar5 = pbVar23[2];
                  uVar26 = (uint)pbVar23[1];
                  iVar17 = (uint)bVar5 - (uint)local_58[2];
                  lVar20 = (long)(int)(iVar18 * 0x1b + (uVar26 - local_58[1]) * 0x5c + iVar17 * 9);
                  lVar28 = iVar18 * 0x80 - lVar20;
                  lVar31 = iVar17 * 0x80 - lVar20;
                  uVar32 = ((uint)((int)(lVar28 * lVar28 >> 7) * 0x1a) >> 7) +
                           ((uint)((int)(lVar31 * lVar31 >> 7) * 3) >> 7) +
                           (int)(lVar20 * lVar20 >> 7);
                  iVar18 = (uint)bVar13 - (uint)local_58[4];
                  iVar17 = (uint)bVar5 - (uint)local_58[6];
                  lVar20 = (long)(int)(iVar18 * 0x1b + ((uint)pbVar23[1] - (uint)local_58[5]) * 0x5c
                                      + iVar17 * 9);
                  lVar28 = iVar18 * 0x80 - lVar20;
                  lVar31 = iVar17 * 0x80 - lVar20;
                  uVar30 = ((uint)((int)(lVar28 * lVar28 >> 7) * 0x1a) >> 7) +
                           ((uint)((int)(lVar31 * lVar31 >> 7) * 3) >> 7) +
                           (int)(lVar20 * lVar20 >> 7);
                  bVar33 = uVar30 < uVar32;
                  if (!(bool)bVar33) {
                    uVar30 = uVar32;
                  }
                  iVar18 = (uint)bVar13 - (uint)local_50;
                  iVar17 = (uint)bVar5 - (uint)local_4e;
                  lVar31 = (long)(int)(iVar18 * 0x1b + (uVar26 - local_4f) * 0x5c + iVar17 * 9);
                  lVar20 = iVar18 * 0x80 - lVar31;
                  lVar28 = iVar17 * 0x80 - lVar31;
                  uVar32 = ((uint)((int)(lVar28 * lVar28 >> 7) * 3) >> 7) +
                           ((uint)((int)(lVar20 * lVar20 >> 7) * 0x1a) >> 7) +
                           (int)(lVar31 * lVar31 >> 7);
                  if (uVar32 < uVar30) {
                    bVar33 = 2;
                    uVar30 = uVar32;
                  }
                  iVar18 = (uint)bVar13 - (uint)local_4c;
                  iVar17 = (uint)bVar5 - (uint)local_4a;
                  lVar31 = (long)(int)(iVar18 * 0x1b + (uVar26 - local_4b) * 0x5c + iVar17 * 9);
                  lVar20 = iVar18 * 0x80 - lVar31;
                  lVar28 = iVar17 * 0x80 - lVar31;
                  uVar26 = ((uint)((int)(lVar28 * lVar28 >> 7) * 3) >> 7) +
                           ((uint)((int)(lVar20 * lVar20 >> 7) * 0x1a) >> 7) +
                           (int)(lVar31 * lVar31 >> 7);
                }
                bVar13 = 3;
                if (uVar30 <= uVar26) {
                  uVar26 = uVar30;
                  bVar13 = bVar33;
                }
                uVar11 = (ulong)uVar26;
              }
              else {
                bVar13 = *(byte *)(lVar8 + lVar15);
                if ((char)piVar12[1] == '\0') {
                  lVar20 = (ulong)bVar13 * 4;
                  iVar18 = (uint)*pbVar23 - (uint)local_58[lVar20];
                  uVar11 = (ulong)(((uint)pbVar23[1] - (uint)local_58[lVar20 + 1]) *
                                   ((uint)pbVar23[1] - (uint)local_58[lVar20 + 1]) + iVar18 * iVar18
                                  + ((uint)pbVar23[2] - (uint)local_58[lVar20 + 2]) *
                                    ((uint)pbVar23[2] - (uint)local_58[lVar20 + 2]));
                }
                else {
                  uVar11 = (ulong)bVar13;
                  lVar31 = (long)(int)(((uint)*pbVar23 - (uint)local_58[uVar11 * 4]) * 0x1b +
                                       ((uint)pbVar23[1] - (uint)local_58[uVar11 * 4 + 1]) * 0x5c +
                                      ((uint)pbVar23[2] - (uint)local_58[uVar11 * 4 + 2]) * 9);
                  lVar20 = (int)(((uint)*pbVar23 - (uint)local_58[uVar11 * 4]) * 0x80) - lVar31;
                  lVar28 = (int)(((uint)pbVar23[2] - (uint)local_58[uVar11 * 4 + 2]) * 0x80) -
                           lVar31;
                  uVar11 = (ulong)(((uint)((int)(lVar28 * lVar28 >> 7) * 3) >> 7) +
                                   ((uint)((int)(lVar20 * lVar20 >> 7) * 0x1a) >> 7) +
                                  (int)(lVar31 * lVar31 >> 7));
                }
              }
              uVar24 = uVar24 + uVar11;
              *(byte *)(*(long *)(this + 0xf0) + lVar15) = bVar13;
              if (*(ulong *)(param_2 + 0x20) <= uVar24) goto LAB_00101b23;
              lVar15 = lVar15 + 1;
              if (pbVar23 + 4 == pbVar22 + (ulong)uVar6 * 4) break;
              piVar12 = *(int **)this;
              pbVar23 = pbVar23 + 4;
            }
          }
          uVar9 = *(undefined8 *)(this + 0xf0);
          *(ulong *)(param_2 + 0x20) = uVar24;
          *(uint *)(param_2 + 4) = uVar1;
          uVar10 = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(param_2 + 0x10) = uVar9;
          *(undefined8 *)(this + 0xf0) = uVar10;
          uVar7 = *(undefined4 *)(param_2 + 0x18);
          *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(this + 0xf8);
          *(undefined4 *)(this + 0xf8) = uVar7;
          uVar7 = *(undefined4 *)(param_2 + 0x1c);
          *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(this + 0xfc);
          *(undefined4 *)(this + 0xfc) = uVar7;
          param_2[0x28] = (potential_solution)0x1;
        }
LAB_00101b23:
        uVar1 = uVar1 + 1;
        piVar19 = piVar19 + 4;
        if (uVar1 == 8) goto LAB_00101e08;
        piVar12 = *(int **)this;
      } while( true );
    }
    iVar17 = (uint)(byte)*param_1 - (uint)*(byte *)(piVar12 + 0xb);
    iVar21 = (uint)(byte)param_1[1] - (uint)*(byte *)((long)piVar12 + 0x2d);
    iVar29 = (uint)(byte)param_1[2] - (uint)*(byte *)((long)piVar12 + 0x2e);
    iVar18 = iVar21;
    if (iVar17 <= iVar21) {
      iVar18 = iVar17;
    }
    if (iVar29 < iVar18) {
      iVar18 = iVar29;
    }
    if (-5 < iVar18) {
      if (iVar17 < iVar21) {
        iVar17 = iVar21;
      }
      if (iVar17 < iVar29) {
        iVar17 = iVar29;
      }
      if (iVar17 < 4) goto LAB_00101a6c;
    }
  }
  goto LAB_00101e35;
LAB_00101e08:
  uVar7 = *(undefined4 *)param_1;
  *(undefined4 *)param_2 = uVar7;
  param_2[8] = *(potential_solution *)(*(long *)this + 0x18);
  if ((param_3 != (potential_solution *)0x0) &&
     (*(ulong *)(param_2 + 0x20) < *(ulong *)(param_3 + 0x20))) {
    *(undefined4 *)param_3 = uVar7;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
    param_3[8] = param_2[8];
    if (param_3 + 0x10 != param_2 + 0x10) {
      uVar14 = *(uint *)(param_2 + 0x18);
      __ptr = *(void **)(param_3 + 0x10);
      if (*(uint *)(param_3 + 0x1c) < uVar14) {
        if (__ptr != (void *)0x0) {
          free(__ptr);
          *(undefined8 *)(param_3 + 0x10) = 0;
          *(undefined8 *)(param_3 + 0x18) = 0;
          uVar14 = *(uint *)(param_2 + 0x18);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)(param_3 + 0x10),SUB41(uVar14,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1
                   ,false);
        uVar14 = *(uint *)(param_2 + 0x18);
        __ptr = *(void **)(param_3 + 0x10);
      }
      else if (*(int *)(param_3 + 0x18) != 0) {
        *(undefined4 *)(param_3 + 0x18) = 0;
        uVar14 = *(uint *)(param_2 + 0x18);
      }
      if ((__ptr != (void *)0x0) && (*(void **)(param_2 + 0x10) != (void *)0x0)) {
        memcpy(__ptr,*(void **)(param_2 + 0x10),(ulong)uVar14);
        uVar14 = *(uint *)(param_2 + 0x18);
      }
      *(uint *)(param_3 + 0x18) = uVar14;
    }
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    param_3[0x28] = param_2[0x28];
    goto LAB_00101e3a;
  }
LAB_00101e35:
  local_6d = '\0';
LAB_00101e3a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_6d;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::etc1_optimizer::evaluate_solution_fast(basisu::etc1_solution_coordinates const&,
   basisu::etc1_optimizer::potential_solution&, basisu::etc1_optimizer::potential_solution*) */

char __thiscall
basisu::etc1_optimizer::evaluate_solution_fast
          (etc1_optimizer *this,etc1_solution_coordinates *param_1,potential_solution *param_2,
          potential_solution *param_3)

{
  uint uVar1;
  etc1_solution_coordinates eVar2;
  etc1_solution_coordinates eVar3;
  etc1_solution_coordinates eVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  ulong uVar23;
  byte *pbVar24;
  void *__ptr;
  byte *pbVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  undefined4 *puVar29;
  uint uVar30;
  long in_FS_OFFSET;
  uint uVar31;
  int local_c0;
  char local_a5;
  undefined8 local_78;
  uint local_70;
  uint local_68 [4];
  byte local_58 [14];
  byte local_4a;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar10 = check_for_redundant_solution(this,param_1);
  if (cVar10 != '\0') {
    piVar22 = *(int **)this;
    if ((char)piVar22[0xc] == '\0') {
LAB_00102394:
      eVar2 = *param_1;
      eVar3 = param_1[1];
      eVar4 = param_1[2];
      if (param_1[8] == (etc1_solution_coordinates)0x0) {
        uVar11 = (uint)(byte)eVar2 << 3 | (uint)((byte)eVar2 >> 2);
        uVar30 = (uint)((byte)eVar4 >> 2) | (uint)(byte)eVar4 << 3;
        uVar20 = (uint)((byte)eVar3 >> 2) | (uint)(byte)eVar3 << 3;
      }
      else {
        uVar11 = (uint)(byte)eVar2 | (uint)(byte)eVar2 << 4;
        uVar30 = (uint)(byte)eVar4 << 4 | (uint)(byte)eVar4;
        uVar20 = (uint)(byte)eVar3 << 4 | (uint)(byte)eVar3;
      }
      uVar5 = piVar22[3];
      iVar12 = *piVar22;
      local_a5 = '\0';
      *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
      if (iVar12 != 0) {
        local_a5 = (char)piVar22[1];
      }
      uVar1 = uVar5 - 1;
      puVar29 = &DAT_0010d310;
      local_c0 = 7;
      do {
        lVar26 = 0;
        pbVar25 = local_58;
        do {
          iVar15 = *(int *)((long)puVar29 + lVar26);
          pbVar25[3] = 0xff;
          iVar12 = iVar15 + (uVar11 & 0xff);
          if (0xff < iVar12) {
            iVar12 = 0xff;
          }
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          iVar16 = iVar15 + (uVar20 & 0xff);
          if (0xff < iVar16) {
            iVar16 = 0xff;
          }
          *pbVar25 = (byte)iVar12;
          if (iVar16 < 0) {
            iVar16 = 0;
          }
          iVar15 = iVar15 + (uVar30 & 0xff);
          if (0xff < iVar15) {
            iVar15 = 0xff;
          }
          pbVar25[1] = (byte)iVar16;
          if (iVar15 < 0) {
            iVar15 = 0;
          }
          pbVar25[2] = (byte)iVar15;
          *(int *)((long)local_68 + lVar26) = iVar12 + iVar16 + iVar15;
          lVar26 = lVar26 + 4;
          pbVar25 = pbVar25 + 4;
        } while (lVar26 != 0x10);
        pbVar25 = *(byte **)(piVar22 + 4);
        puVar7 = *(uint **)(this + 0x68);
        uVar31 = local_68[1] + local_68[0];
        uVar13 = puVar7[uVar1];
        local_70 = local_68[2] + local_68[3];
        local_78 = CONCAT44(local_68[2] + local_68[1],uVar31);
        if (local_a5 == '\0') {
          if (uVar13 * 2 < uVar31) {
            if (uVar13 < local_68[0]) {
              iVar12 = local_68[0] - uVar13;
              if (iVar12 < 1) {
                iVar12 = -iVar12;
              }
              if (*(ulong *)(param_2 + 0x20) <= (ulong)(long)iVar12) goto LAB_00102550;
            }
            memset(*(void **)(this + 0xf0),0,(ulong)uVar5);
            if (uVar5 == 0) goto LAB_00102cf8;
            uVar23 = 0;
            pbVar17 = pbVar25;
            do {
              pbVar24 = pbVar17 + 4;
              uVar23 = uVar23 + (long)(int)(((uint)local_58[0] - (uint)*pbVar17) *
                                            ((uint)local_58[0] - (uint)*pbVar17) +
                                            ((uint)local_58[1] - (uint)pbVar17[1]) *
                                            ((uint)local_58[1] - (uint)pbVar17[1]) +
                                           ((uint)local_58[2] - (uint)pbVar17[2]) *
                                           ((uint)local_58[2] - (uint)pbVar17[2]));
              pbVar17 = pbVar24;
            } while (pbVar25 + (ulong)uVar5 * 4 != pbVar24);
          }
          else {
            uVar13 = *puVar7;
            uVar31 = uVar13 * 2;
            if (uVar31 < local_70) {
              if (uVar5 == 0) goto LAB_00102cf8;
              lVar26 = 0;
              uVar28 = 0;
              uVar13 = 0;
              uVar23 = 0;
              uVar19 = 0;
              while( true ) {
                while (uVar31 < *(uint *)((long)&local_78 + uVar19 * 4)) {
                  uVar28 = uVar28 + 1;
                  uVar31 = *(uint *)(*(long *)(this + 0x60) + lVar26);
                  lVar26 = lVar26 + 4;
                  *(char *)(*(long *)(this + 0xf0) + (ulong)uVar31) = (char)uVar13;
                  pbVar17 = pbVar25 + (ulong)uVar31 * 4;
                  lVar14 = uVar19 * 4;
                  iVar12 = (uint)local_58[lVar14] - (uint)*pbVar17;
                  uVar23 = uVar23 + (long)(int)(iVar12 * iVar12 +
                                                ((uint)local_58[lVar14 + 1] - (uint)pbVar17[1]) *
                                                ((uint)local_58[lVar14 + 1] - (uint)pbVar17[1]) +
                                               ((uint)local_58[lVar14 + 2] - (uint)pbVar17[2]) *
                                               ((uint)local_58[lVar14 + 2] - (uint)pbVar17[2]));
                  if (uVar5 == uVar28) goto LAB_00102690;
                  uVar31 = *(int *)(*(long *)(this + 0x68) + lVar26) * 2;
                }
                uVar13 = uVar13 + 1;
                if (2 < uVar13) break;
                uVar19 = (ulong)uVar13;
              }
              if (uVar28 < uVar5) {
                lVar26 = (ulong)uVar28 * 4;
                do {
                  puVar7 = (uint *)(*(long *)(this + 0x60) + lVar26);
                  lVar26 = lVar26 + 4;
                  pbVar17 = pbVar25 + (ulong)*puVar7 * 4;
                  *(undefined1 *)(*(long *)(this + 0xf0) + (ulong)*puVar7) = 3;
                  uVar23 = uVar23 + (long)(int)(((uint)local_58[0xc] - (uint)*pbVar17) *
                                                ((uint)local_58[0xc] - (uint)*pbVar17) +
                                                ((uint)local_58[0xd] - (uint)pbVar17[1]) *
                                                ((uint)local_58[0xd] - (uint)pbVar17[1]) +
                                               ((uint)local_4a - (uint)pbVar17[2]) *
                                               ((uint)local_4a - (uint)pbVar17[2]));
                } while (((ulong)uVar28 + 1 + (ulong)(uVar1 - uVar28)) * 4 != lVar26);
              }
            }
            else {
              if (local_68[3] < uVar13) {
                iVar12 = uVar13 - local_68[3];
                if (iVar12 < 1) {
                  iVar12 = -iVar12;
                }
                if (*(ulong *)(param_2 + 0x20) <= (ulong)(long)iVar12) goto LAB_00102550;
              }
              memset(*(void **)(this + 0xf0),3,(ulong)uVar5);
              if (uVar5 == 0) goto LAB_00102cf8;
              uVar23 = 0;
              pbVar17 = pbVar25;
              do {
                pbVar24 = pbVar17 + 4;
                uVar23 = uVar23 + (long)(int)(((uint)local_58[0xc] - (uint)*pbVar17) *
                                              ((uint)local_58[0xc] - (uint)*pbVar17) +
                                              ((uint)local_58[0xd] - (uint)pbVar17[1]) *
                                              ((uint)local_58[0xd] - (uint)pbVar17[1]) +
                                             ((uint)local_4a - (uint)pbVar17[2]) *
                                             ((uint)local_4a - (uint)pbVar17[2]));
                pbVar17 = pbVar24;
              } while (pbVar25 + (ulong)uVar5 * 4 != pbVar24);
            }
          }
          goto LAB_00102690;
        }
        if (uVar13 * 2 < uVar31) {
          if (local_68[0] <= uVar13) {
LAB_001028e0:
            memset(*(void **)(this + 0xf0),0,(ulong)uVar5);
            if (uVar5 == 0) goto LAB_00102cf8;
            uVar23 = 0;
            pbVar17 = pbVar25;
            do {
              pbVar24 = pbVar17 + 4;
              lVar18 = (long)(int)(((uint)local_58[1] - (uint)pbVar17[1]) * 0x5c +
                                   ((uint)local_58[0] - (uint)*pbVar17) * 0x1b +
                                  ((uint)local_58[2] - (uint)pbVar17[2]) * 9);
              lVar26 = (int)(((uint)local_58[0] - (uint)*pbVar17) * 0x80) - lVar18;
              lVar14 = (int)(((uint)local_58[2] - (uint)pbVar17[2]) * 0x80) - lVar18;
              uVar23 = uVar23 + (((uint)((int)(lVar26 * lVar26 >> 7) * 0x1a) >> 7) +
                                 ((uint)((int)(lVar14 * lVar14 >> 7) * 3) >> 7) +
                                (int)(lVar18 * lVar18 >> 7));
              pbVar17 = pbVar24;
            } while (pbVar25 + (ulong)uVar5 * 4 != pbVar24);
            goto LAB_00102690;
          }
          iVar12 = local_68[0] - uVar13;
          if (iVar12 < 1) {
            iVar12 = -iVar12;
          }
          if ((ulong)(long)iVar12 < *(ulong *)(param_2 + 0x20)) goto LAB_001028e0;
        }
        else {
          uVar13 = *puVar7;
          uVar31 = uVar13 * 2;
          if (uVar31 < local_70) {
            if (uVar5 == 0) goto LAB_00102cf8;
            lVar26 = 0;
            uVar28 = 0;
            uVar13 = 0;
            uVar23 = 0;
            uVar19 = 0;
            while( true ) {
              while (uVar31 < *(uint *)((long)&local_78 + uVar19 * 4)) {
                uVar28 = uVar28 + 1;
                puVar7 = (uint *)(*(long *)(this + 0x60) + lVar26);
                lVar26 = lVar26 + 4;
                pbVar17 = pbVar25 + (ulong)*puVar7 * 4;
                *(char *)(*(long *)(this + 0xf0) + (ulong)*puVar7) = (char)uVar13;
                lVar18 = (long)(int)(((uint)local_58[uVar19 * 4 + 1] - (uint)pbVar17[1]) * 0x5c +
                                     ((uint)local_58[uVar19 * 4] - (uint)*pbVar17) * 0x1b +
                                    ((uint)local_58[uVar19 * 4 + 2] - (uint)pbVar17[2]) * 9);
                lVar14 = (int)(((uint)local_58[uVar19 * 4] - (uint)*pbVar17) * 0x80) - lVar18;
                lVar27 = (int)(((uint)local_58[uVar19 * 4 + 2] - (uint)pbVar17[2]) * 0x80) - lVar18;
                uVar23 = uVar23 + (((uint)((int)(lVar14 * lVar14 >> 7) * 0x1a) >> 7) +
                                   ((uint)((int)(lVar27 * lVar27 >> 7) * 3) >> 7) +
                                  (int)(lVar18 * lVar18 >> 7));
                if (uVar5 == uVar28) goto LAB_00102690;
                uVar31 = *(int *)(*(long *)(this + 0x68) + lVar26) * 2;
              }
              uVar13 = uVar13 + 1;
              if (2 < uVar13) break;
              uVar19 = (ulong)uVar13;
            }
            if (uVar28 < uVar5) {
              lVar26 = (ulong)uVar28 * 4;
              do {
                puVar7 = (uint *)(*(long *)(this + 0x60) + lVar26);
                lVar26 = lVar26 + 4;
                pbVar17 = pbVar25 + (ulong)*puVar7 * 4;
                *(undefined1 *)(*(long *)(this + 0xf0) + (ulong)*puVar7) = 3;
                lVar18 = (long)(int)(((uint)local_58[0xd] - (uint)pbVar17[1]) * 0x5c +
                                     ((uint)local_58[0xc] - (uint)*pbVar17) * 0x1b +
                                    ((uint)local_4a - (uint)pbVar17[2]) * 9);
                lVar14 = (int)(((uint)local_58[0xc] - (uint)*pbVar17) * 0x80) - lVar18;
                lVar27 = (int)(((uint)local_4a - (uint)pbVar17[2]) * 0x80) - lVar18;
                uVar23 = uVar23 + (((uint)((int)(lVar14 * lVar14 >> 7) * 0x1a) >> 7) +
                                   ((uint)((int)(lVar27 * lVar27 >> 7) * 3) >> 7) +
                                  (int)(lVar18 * lVar18 >> 7));
              } while (((ulong)uVar28 + 1 + (ulong)(uVar1 - uVar28)) * 4 != lVar26);
            }
          }
          else {
            if (local_68[3] < uVar13) {
              iVar12 = uVar13 - local_68[3];
              if (iVar12 < 1) {
                iVar12 = -iVar12;
              }
              if (*(ulong *)(param_2 + 0x20) <= (ulong)(long)iVar12) goto LAB_00102550;
            }
            memset(*(void **)(this + 0xf0),3,(ulong)uVar5);
            if (uVar5 == 0) {
LAB_00102cf8:
              uVar23 = 0;
            }
            else {
              uVar23 = 0;
              pbVar17 = pbVar25;
              do {
                pbVar24 = pbVar17 + 4;
                lVar18 = (long)(int)(((uint)local_58[0xd] - (uint)pbVar17[1]) * 0x5c +
                                     ((uint)local_58[0xc] - (uint)*pbVar17) * 0x1b +
                                    ((uint)local_4a - (uint)pbVar17[2]) * 9);
                lVar26 = (int)(((uint)local_58[0xc] - (uint)*pbVar17) * 0x80) - lVar18;
                lVar14 = (int)(((uint)local_4a - (uint)pbVar17[2]) * 0x80) - lVar18;
                uVar23 = uVar23 + (((uint)((int)(lVar26 * lVar26 >> 7) * 0x1a) >> 7) +
                                   ((uint)((int)(lVar14 * lVar14 >> 7) * 3) >> 7) +
                                  (int)(lVar18 * lVar18 >> 7));
                pbVar17 = pbVar24;
              } while (pbVar25 + (ulong)uVar5 * 4 != pbVar24);
            }
          }
LAB_00102690:
          if (uVar23 < *(ulong *)(param_2 + 0x20)) {
            uVar8 = *(undefined8 *)(this + 0xf0);
            *(ulong *)(param_2 + 0x20) = uVar23;
            *(int *)(param_2 + 4) = local_c0;
            uVar9 = *(undefined8 *)(param_2 + 0x10);
            *(undefined8 *)(param_2 + 0x10) = uVar8;
            *(undefined8 *)(this + 0xf0) = uVar9;
            uVar6 = *(undefined4 *)(param_2 + 0x18);
            *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(this + 0xf8);
            *(undefined4 *)(this + 0xf8) = uVar6;
            uVar6 = *(undefined4 *)(param_2 + 0x1c);
            *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(this + 0xfc);
            *(undefined4 *)(this + 0xfc) = uVar6;
            param_2[0x28] = (potential_solution)0x1;
            if (uVar23 == 0) goto LAB_001026f8;
          }
        }
LAB_00102550:
        local_c0 = local_c0 + -1;
        puVar29 = puVar29 + -4;
        if (local_c0 == -1) goto LAB_001026f8;
        piVar22 = *(int **)this;
      } while( true );
    }
    iVar15 = (uint)(byte)*param_1 - (uint)*(byte *)(piVar22 + 0xb);
    iVar21 = (uint)(byte)param_1[1] - (uint)*(byte *)((long)piVar22 + 0x2d);
    iVar16 = (uint)(byte)param_1[2] - (uint)*(byte *)((long)piVar22 + 0x2e);
    iVar12 = iVar21;
    if (iVar15 <= iVar21) {
      iVar12 = iVar15;
    }
    if (iVar16 < iVar12) {
      iVar12 = iVar16;
    }
    if (-5 < iVar12) {
      if (iVar15 < iVar21) {
        iVar15 = iVar21;
      }
      if (iVar15 < iVar16) {
        iVar15 = iVar16;
      }
      if (iVar15 < 4) goto LAB_00102394;
    }
    param_2[0x28] = (potential_solution)0x0;
    cVar10 = '\0';
    goto LAB_001025b9;
  }
  goto LAB_0010272d;
LAB_001026f8:
  uVar6 = *(undefined4 *)param_1;
  *(undefined4 *)param_2 = uVar6;
  param_2[8] = *(potential_solution *)(*(long *)this + 0x18);
  if ((param_3 != (potential_solution *)0x0) &&
     (*(ulong *)(param_2 + 0x20) < *(ulong *)(param_3 + 0x20))) {
    *(undefined4 *)param_3 = uVar6;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
    param_3[8] = param_2[8];
    if (param_3 + 0x10 != param_2 + 0x10) {
      uVar11 = *(uint *)(param_2 + 0x18);
      __ptr = *(void **)(param_3 + 0x10);
      if (*(uint *)(param_3 + 0x1c) < uVar11) {
        if (__ptr != (void *)0x0) {
          free(__ptr);
          *(undefined8 *)(param_3 + 0x10) = 0;
          *(undefined8 *)(param_3 + 0x18) = 0;
          uVar11 = *(uint *)(param_2 + 0x18);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)(param_3 + 0x10),SUB41(uVar11,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1
                   ,false);
        uVar11 = *(uint *)(param_2 + 0x18);
        __ptr = *(void **)(param_3 + 0x10);
      }
      else if (*(int *)(param_3 + 0x18) != 0) {
        *(undefined4 *)(param_3 + 0x18) = 0;
        uVar11 = *(uint *)(param_2 + 0x18);
      }
      if ((__ptr != (void *)0x0) && (*(void **)(param_2 + 0x10) != (void *)0x0)) {
        memcpy(__ptr,*(void **)(param_2 + 0x10),(ulong)uVar11);
        uVar11 = *(uint *)(param_2 + 0x18);
      }
      *(uint *)(param_3 + 0x18) = uVar11;
    }
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    param_3[0x28] = param_2[0x28];
    goto LAB_001025b9;
  }
LAB_0010272d:
  cVar10 = '\0';
LAB_001025b9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar10;
}



/* basisu::etc1_optimizer::refine_solution(unsigned int) */

void __thiscall basisu::etc1_optimizer::refine_solution(etc1_optimizer *this,uint param_1)

{
  byte *pbVar1;
  etc1_optimizer eVar2;
  etc1_optimizer eVar3;
  etc1_optimizer eVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  uint local_6c;
  etc1_solution_coordinates local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined1 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(uint *)(*(long *)this + 0xc);
  if (param_1 != 0) {
    local_6c = 0;
    while( true ) {
      eVar2 = this[0x90];
      eVar3 = this[0x91];
      eVar4 = this[0x92];
      pbVar9 = *(byte **)(this + 0xa0);
      if (this[0x98] == (etc1_optimizer)0x0) {
        uVar12 = (uint)((byte)eVar3 >> 2) | (uint)(byte)eVar3 << 3;
        uVar13 = (uint)((byte)eVar2 >> 2) | (uint)(byte)eVar2 << 3;
        uVar11 = (uint)((byte)eVar4 >> 2) | (uint)(byte)eVar4 << 3;
      }
      else {
        uVar12 = (uint)(byte)eVar3 << 4 | (uint)(byte)eVar3;
        uVar13 = (uint)(byte)eVar2 << 4 | (uint)(byte)eVar2;
        uVar11 = (uint)(byte)eVar4 << 4 | (uint)(byte)eVar4;
      }
      if (uVar6 == 0) break;
      pbVar1 = pbVar9 + uVar6;
      iVar15 = 0;
      iVar16 = 0;
      iVar14 = 0;
      do {
        bVar5 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar8 = (&g_etc1_inten_tables)[(ulong)bVar5 + (ulong)*(uint *)(this + 0x94) * 4];
        iVar10 = iVar8 + (uVar13 & 0xff);
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        iVar14 = iVar14 + (iVar10 - (uVar13 & 0xff));
        iVar10 = iVar8 + (uVar12 & 0xff);
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        iVar8 = iVar8 + (uVar11 & 0xff);
        iVar16 = iVar16 + (iVar10 - (uVar12 & 0xff));
        if (0xff < iVar8) {
          iVar8 = 0xff;
        }
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar15 = iVar15 + (iVar8 - (uVar11 & 0xff));
      } while (pbVar9 != pbVar1);
      if ((iVar14 == 0 && iVar16 == 0) && iVar15 == 0) break;
      iVar10 = *(int *)(this + 0x10);
      fVar17 = (float)uVar6;
      local_49 = 0xff;
      fVar18 = (float)iVar10;
      local_48 = 0;
      iVar8 = (int)(((*(float *)(this + 0x14) - (float)iVar14 / fVar17) * fVar18) / _LC0 + _LC1);
      iVar14 = iVar8;
      if (iVar10 <= iVar8) {
        iVar14 = iVar10;
      }
      local_4c = SUB41(iVar14,0);
      if (iVar8 < 0) {
        local_4c = (etc1_solution_coordinates)0x0;
      }
      iVar16 = (int)(((*(float *)(this + 0x18) - (float)iVar16 / fVar17) * fVar18) / _LC0 + _LC1);
      iVar14 = iVar16;
      if (iVar10 <= iVar16) {
        iVar14 = iVar10;
      }
      local_4b = (undefined1)iVar14;
      if (iVar16 < 0) {
        local_4b = 0;
      }
      iVar14 = (int)(((*(float *)(this + 0x1c) - (float)iVar15 / fVar17) * fVar18) / _LC0 + _LC1);
      if (iVar14 < iVar10) {
        iVar10 = iVar14;
      }
      local_4a = (undefined1)iVar10;
      if (iVar14 < 0) {
        local_4a = 0;
      }
      local_44 = (undefined1)(*(int **)this)[6];
      if (**(int **)this < 1) {
        cVar7 = evaluate_solution_fast
                          (this,&local_4c,(potential_solution *)(this + 0xc0),
                           (potential_solution *)(this + 0x90));
      }
      else {
        cVar7 = evaluate_solution_slow
                          (this,&local_4c,(potential_solution *)(this + 0xc0),
                           (potential_solution *)(this + 0x90));
      }
      if ((cVar7 == '\0') || (local_6c = local_6c + 1, param_1 == local_6c)) break;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::etc1_optimizer::compute_internal_neighborhood(int, int, int) [clone .part.0] */

void __thiscall
basisu::etc1_optimizer::compute_internal_neighborhood
          (etc1_optimizer *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined1 local_84;
  etc1_solution_coordinates local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined1 local_44;
  long local_40;
  
  piVar11 = *(int **)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (piVar11[10] < 1) {
LAB_0010328e:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar13 = 0;
  lVar1 = (ulong)(piVar11[10] - 1) * 4;
  do {
    lVar12 = *(long *)(piVar11 + 8);
    iVar2 = *(int *)(lVar12 + lVar13);
    iVar8 = iVar2 + param_3;
    if (-1 < iVar8) {
      if (*(int *)(this + 0x10) < iVar8) goto LAB_0010328e;
      lVar7 = 0;
      while( true ) {
        iVar3 = *(int *)(lVar12 + lVar7);
        iVar9 = param_2 + iVar3;
        if (-1 < iVar9) break;
LAB_00103255:
        if (lVar1 - lVar7 == 0) goto LAB_0010327d;
        piVar11 = *(int **)this;
        lVar7 = lVar7 + 4;
        lVar12 = *(long *)(piVar11 + 8);
      }
      if (iVar9 <= *(int *)(this + 0x10)) {
        lVar14 = 0;
        do {
          iVar4 = *(int *)(lVar12 + lVar14);
          iVar6 = iVar4 + param_1;
          if (-1 < iVar6) {
            if (*(int *)(this + 0x10) < iVar6) goto LAB_00103255;
            local_4c = SUB41(iVar6,0);
            local_84 = (undefined1)iVar8;
            local_4a = local_84;
            local_4b = (undefined1)iVar9;
            local_44 = (undefined1)piVar11[6];
            local_49 = 0xff;
            local_48 = 0;
            if (*piVar11 < 1) {
              cVar5 = evaluate_solution_fast
                                (this,&local_4c,(potential_solution *)(this + 0xc0),
                                 (potential_solution *)(this + 0x90));
            }
            else {
              cVar5 = evaluate_solution_slow
                                (this,&local_4c,(potential_solution *)(this + 0xc0),
                                 (potential_solution *)(this + 0x90));
            }
            if ((cVar5 != '\0') && (*(char *)((long)*(int **)this + 0x31) != '\0')) {
              uVar10 = 2;
              if (**(int **)this != 0) {
                uVar10 = (-(uint)((iVar2 == 0 && iVar4 == 0) && iVar3 == 0) & 2) + 2;
              }
              refine_solution(this,uVar10);
            }
          }
          if (lVar1 - lVar14 == 0) goto LAB_00103255;
          piVar11 = *(int **)this;
          lVar14 = lVar14 + 4;
          lVar12 = *(long *)(piVar11 + 8);
        } while( true );
      }
    }
LAB_0010327d:
    if (lVar1 - lVar13 == 0) goto LAB_0010328e;
    piVar11 = *(int **)this;
    lVar13 = lVar13 + 4;
  } while( true );
}



/* basisu::etc1_optimizer::compute_internal_neighborhood(int, int, int) */

void __thiscall
basisu::etc1_optimizer::compute_internal_neighborhood
          (etc1_optimizer *this,int param_1,int param_2,int param_3)

{
  if (*(long *)(this + 0xb0) != 0) {
    compute_internal_neighborhood(this,param_1,param_2,param_3);
    return;
  }
  return;
}



/* basisu::etc1_optimizer::compute_internal_cluster_fit(unsigned int) */

void __thiscall
basisu::etc1_optimizer::compute_internal_cluster_fit(etc1_optimizer *this,uint param_1)

{
  etc1_optimizer eVar1;
  etc1_optimizer eVar2;
  etc1_optimizer eVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  etc1_solution_coordinates eVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  etc1_solution_coordinates local_4c;
  etc1_solution_coordinates local_4b;
  etc1_solution_coordinates local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined1 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((this[0xb8] == (etc1_optimizer)0x0) || ((uint)(byte)this[0x90] != *(uint *)(this + 0x20)))
      || ((uint)(byte)this[0x91] != *(uint *)(this + 0x24))) ||
     ((uint)(byte)this[0x92] != *(uint *)(this + 0x28))) {
    local_44 = (undefined1)(*(int **)this)[6];
    local_4c = SUB41(*(uint *)(this + 0x20),0);
    local_4b = SUB41(*(uint *)(this + 0x24),0);
    local_4a = SUB41(*(uint *)(this + 0x28),0);
    local_49 = 0xff;
    local_48 = 0;
    if (**(int **)this < 1) {
      evaluate_solution_fast
                (this,&local_4c,(potential_solution *)(this + 0xc0),
                 (potential_solution *)(this + 0x90));
    }
    else {
      evaluate_solution_slow
                (this,&local_4c,(potential_solution *)(this + 0xc0),
                 (potential_solution *)(this + 0x90));
    }
    if ((*(long *)(this + 0xb0) == 0) || (this[0xb8] == (etc1_optimizer)0x0)) goto LAB_001035ef;
  }
  else if (*(long *)(this + 0xb0) == 0) goto LAB_001035ef;
  if (param_1 != 0) {
    puVar9 = &g_cluster_fit_order_tab;
    fVar16 = _LC1;
    fVar17 = _LC0;
    fVar18 = _LC2;
    do {
      eVar1 = this[0x90];
      eVar2 = this[0x91];
      eVar3 = this[0x92];
      if (this[0x98] == (etc1_optimizer)0x0) {
        uVar12 = (uint)((byte)eVar1 >> 2) | (uint)(byte)eVar1 << 3;
        uVar11 = (uint)((byte)eVar2 >> 2) | (uint)(byte)eVar2 << 3;
        uVar10 = (uint)((byte)eVar3 >> 2) | (uint)(byte)eVar3 << 3;
      }
      else {
        uVar12 = (uint)(byte)eVar1 << 4 | (uint)(byte)eVar1;
        uVar11 = (uint)(byte)eVar2 << 4 | (uint)(byte)eVar2;
        uVar10 = (uint)(byte)eVar3 << 4 | (uint)(byte)eVar3;
      }
      lVar6 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar13 = 0;
      do {
        iVar5 = (&g_etc1_inten_tables)[(ulong)*(uint *)(this + 0x94) * 4 + lVar6];
        bVar4 = puVar9[lVar6];
        iVar8 = iVar5 + (uVar12 & 0xff);
        if (0xff < iVar8) {
          iVar8 = 0xff;
        }
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar13 = iVar13 + (iVar8 - (uVar12 & 0xff)) * (uint)bVar4;
        iVar8 = iVar5 + (uVar11 & 0xff);
        if (0xff < iVar8) {
          iVar8 = 0xff;
        }
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar5 = iVar5 + (uVar10 & 0xff);
        iVar15 = iVar15 + (iVar8 - (uVar11 & 0xff)) * (uint)bVar4;
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        lVar6 = lVar6 + 1;
        iVar14 = iVar14 + (iVar5 - (uVar10 & 0xff)) * (uint)bVar4;
      } while (lVar6 != 4);
      if ((iVar13 != 0 || iVar15 != 0) || iVar14 != 0) {
        iVar8 = *(int *)(this + 0x10);
        fVar19 = (float)iVar8;
        iVar5 = (int)(((*(float *)(this + 0x14) - (float)iVar13 * fVar18) * fVar19) / fVar17 +
                     fVar16);
        iVar13 = iVar5;
        if (iVar8 <= iVar5) {
          iVar13 = iVar8;
        }
        eVar7 = (etc1_solution_coordinates)0x0;
        local_4c = SUB41(iVar13,0);
        if (iVar5 < 0) {
          local_4c = eVar7;
        }
        iVar15 = (int)(((*(float *)(this + 0x18) - (float)iVar15 * fVar18) * fVar19) / fVar17 +
                      fVar16);
        iVar13 = iVar15;
        if (iVar8 <= iVar15) {
          iVar13 = iVar8;
        }
        local_4b = SUB41(iVar13,0);
        if (iVar15 < 0) {
          local_4b = eVar7;
        }
        iVar13 = (int)(((*(float *)(this + 0x1c) - (float)iVar14 * fVar18) * fVar19) / fVar17 +
                      fVar16);
        if (iVar13 < iVar8) {
          iVar8 = iVar13;
        }
        local_4a = SUB41(iVar8,0);
        if (iVar13 < 0) {
          local_4a = eVar7;
        }
        local_44 = (undefined1)(*(int **)this)[6];
        local_49 = 0xff;
        local_48 = 0;
        if (**(int **)this < 1) {
          evaluate_solution_fast
                    (this,&local_4c,(potential_solution *)(this + 0xc0),
                     (potential_solution *)(this + 0x90));
        }
        else {
          evaluate_solution_slow
                    (this,&local_4c,(potential_solution *)(this + 0xc0),
                     (potential_solution *)(this + 0x90));
        }
        fVar16 = _LC1;
        fVar17 = _LC0;
        fVar18 = _LC2;
        if (*(long *)(this + 0xb0) == 0) break;
      }
      puVar9 = puVar9 + 4;
    } while (&g_cluster_fit_order_tab + (ulong)param_1 * 4 != puVar9);
  }
LAB_001035ef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::etc1_optimizer::compute() */

etc1_optimizer __thiscall basisu::etc1_optimizer::compute(etc1_optimizer *this)

{
  etc1_optimizer eVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  void *__src;
  uint uVar6;
  
  piVar2 = *(int **)this;
  if (*(long *)(piVar2 + 0xe) == 0) {
    uVar6 = piVar2[3];
    if (*(char *)((long)piVar2 + 5) == '\0') goto LAB_001036e2;
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      compute_internal_cluster_fit(this,4);
    }
    else {
      if (iVar5 != 1) goto LAB_00103770;
      compute_internal_cluster_fit(this,0x10);
    }
  }
  else {
    iVar5 = *piVar2;
    if (iVar5 < 2) {
      return (etc1_optimizer)0x0;
    }
    uVar6 = piVar2[3];
    if (*(char *)((long)piVar2 + 5) == '\0') {
LAB_001036e2:
      if (*(long *)(this + 0xb0) != 0) {
        compute_internal_neighborhood
                  (this,*(int *)(this + 0x20),*(int *)(this + 0x24),*(int *)(this + 0x28));
      }
    }
    else {
LAB_00103770:
      if (iVar5 != 2) {
        compute_internal_cluster_fit(this,0xa5);
        eVar1 = this[0xb8];
        puVar3 = *(undefined8 **)(this + 8);
        goto joined_r0x0010370b;
      }
      compute_internal_cluster_fit(this,0x40);
    }
  }
  eVar1 = this[0xb8];
  puVar3 = *(undefined8 **)(this + 8);
joined_r0x0010370b:
  if (eVar1 == (etc1_optimizer)0x0) {
    *puVar3 = 0xffffffff;
    return (etc1_optimizer)0x0;
  }
  __src = *(void **)(*(long *)this + 0x38);
  if (__src == (void *)0x0) {
    __src = *(void **)(this + 0xa0);
  }
  *puVar3 = *(undefined8 *)(this + 0xb0);
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(this + 0x90);
  lVar4 = *(long *)(this + 8);
  *(etc1_optimizer *)(lVar4 + 0x20) = this[0x98];
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0x94);
  memcpy(*(void **)(lVar4 + 0x18),__src,(ulong)uVar6);
  *(uint *)(*(long *)(this + 8) + 0x10) = uVar6;
  return eVar1;
}



/* basisu::pack_eac_a8(basisu::pack_eac_a8_results&, unsigned char const*, unsigned int, unsigned
   int, unsigned int, unsigned int) */

ulong basisu::pack_eac_a8(pack_eac_a8_results *param_1,uchar *param_2,uint param_3,uint param_4,
                         uint param_5,uint param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  
  uVar15 = *(uint *)(param_1 + 0x18);
  if (param_3 != uVar15) {
    if (param_3 < uVar15) {
      *(uint *)(param_1 + 0x18) = param_3;
    }
    else {
      if (*(uint *)(param_1 + 0x1c) < param_3) {
        basisu::elemental_vector::increase_capacity
                  ((int)param_1 + 0x10,SUB41(param_3,0),(uint)(uVar15 + 1 == param_3),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar15 = *(uint *)(param_1 + 0x18);
      }
      memset((void *)((ulong)uVar15 + *(long *)(param_1 + 0x10)),0,(ulong)(param_3 - uVar15));
      *(uint *)(param_1 + 0x18) = param_3;
    }
  }
  uVar15 = *(uint *)(param_1 + 0x28);
  if (param_3 != uVar15) {
    if (param_3 < uVar15) {
      *(uint *)(param_1 + 0x28) = param_3;
    }
    else {
      if (*(uint *)(param_1 + 0x2c) < param_3) {
        basisu::elemental_vector::increase_capacity
                  ((int)param_1 + 0x20,SUB41(param_3,0),(uint)(uVar15 + 1 == param_3),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar15 = *(uint *)(param_1 + 0x28);
      }
      memset((void *)((ulong)uVar15 + *(long *)(param_1 + 0x20)),0,(ulong)(param_3 - uVar15));
      *(uint *)(param_1 + 0x28) = param_3;
    }
  }
  if (param_3 == 0) {
    uVar15 = 0;
    uVar8 = 0xffffff01;
    uVar4 = 0xff;
  }
  else {
    uVar15 = 0;
    uVar4 = 0xff;
    pbVar7 = param_2;
    do {
      uVar8 = (uint)*pbVar7;
      if (*pbVar7 < uVar4) {
        uVar4 = uVar8;
      }
      if (uVar15 < uVar8) {
        uVar15 = uVar8;
      }
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 != param_2 + param_3);
    uVar8 = uVar15 - uVar4;
    if (uVar15 == uVar4) {
      *(uint *)param_1 = uVar15;
      *(undefined8 *)(param_1 + 4) = 0x10000000d;
      uVar21 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar21) = 4;
        uVar21 = uVar21 + 1;
      } while (uVar21 != param_3);
      return 0;
    }
  }
  uVar21 = 0xffffffffffffffff;
  puVar13 = &g_etc2_eac_tables;
  uVar20 = 0;
  do {
    if ((param_6 >> (uVar20 & 0x1f) & 1) != 0) {
      fVar23 = (float)((int)(char)puVar13[7] - (int)(char)puVar13[3]);
      fVar22 = roundf(((float)-(int)(char)puVar13[3] / fVar23) * ((float)uVar15 - (float)uVar4) +
                      (float)uVar4);
      uVar9 = (int)fVar22 - param_4;
      if (0xff < uVar9) {
        uVar9 = ~((int)uVar9 >> 0x1f);
      }
      uVar5 = (int)fVar22 + param_4;
      uVar12 = uVar9 & 0xff;
      bVar3 = (byte)uVar5;
      if (0xff < uVar5) {
        bVar3 = ~(byte)((int)uVar5 >> 0x1f);
      }
      fVar22 = roundf((float)uVar8 / fVar23);
      iVar14 = (int)fVar22 - param_5;
      if (0xf < iVar14) {
        iVar14 = 0xf;
      }
      if (iVar14 < 1) {
        iVar14 = 1;
      }
      iVar10 = (int)fVar22 + param_5;
      if (0xf < iVar10) {
        iVar10 = 0xf;
      }
      if (iVar10 < 1) {
        iVar10 = 1;
      }
      iVar6 = iVar10 + 1;
      if ((uVar9 & 0xff) <= (uint)bVar3) {
LAB_00103a00:
        uVar2 = uVar21;
        iVar17 = iVar14;
        if (iVar14 <= iVar10) {
          do {
            if (param_3 != 0) {
              do {
                uVar19 = 0;
                uVar21 = 0;
                while( true ) {
                  uVar11 = 0;
                  uVar16 = 0;
                  uVar9 = 0xffffffff;
                  do {
                    uVar5 = (char)puVar13[uVar11] * iVar17 + uVar12;
                    if (0xff < uVar5) {
                      uVar5 = ~((int)uVar5 >> 0x1f);
                    }
                    uVar18 = (uint)param_2[uVar19] - (uVar5 & 0xff);
                    uVar5 = -uVar18;
                    if (0 < (int)uVar18) {
                      uVar5 = uVar18;
                    }
                    if (uVar5 < uVar9) {
                      uVar16 = uVar11 & 0xffffffff;
                      uVar9 = uVar5;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 != 8);
                  *(char *)(*(long *)(param_1 + 0x20) + uVar19) = (char)uVar16;
                  uVar21 = uVar21 + uVar9 * uVar9;
                  if (uVar2 <= uVar21) break;
                  uVar19 = uVar19 + 1;
                  if (param_3 == uVar19) goto LAB_00103abe;
                }
                iVar17 = iVar17 + 1;
                uVar21 = uVar2;
              } while (iVar6 != iVar17);
              break;
            }
            if (uVar2 == 0) goto LAB_00103c4f;
            uVar21 = 0;
LAB_00103abe:
            uVar1 = *(undefined8 *)(param_1 + 0x10);
            *(uint *)param_1 = uVar12;
            *(int *)(param_1 + 8) = iVar17;
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
            *(undefined8 *)(param_1 + 0x20) = uVar1;
            uVar1 = *(undefined8 *)(param_1 + 0x18);
            *(uint *)(param_1 + 4) = uVar20;
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
            *(undefined8 *)(param_1 + 0x28) = uVar1;
            if (uVar21 == 0) {
              return 0;
            }
            iVar17 = iVar17 + 1;
            uVar2 = uVar21;
          } while (iVar17 != iVar6);
        }
        goto LAB_00103b4c;
      }
    }
LAB_001038e4:
    uVar20 = uVar20 + 1;
    puVar13 = puVar13 + 8;
    if (uVar20 == 0x10) {
      return uVar21;
    }
  } while( true );
LAB_00103c4f:
  do {
    iVar17 = iVar17 + 1;
  } while (iVar17 != iVar6);
  uVar21 = 0;
LAB_00103b4c:
  uVar12 = uVar12 + 1;
  if ((int)(uint)bVar3 < (int)uVar12) goto LAB_001038e4;
  goto LAB_00103a00;
}



/* basisu::pack_eac_a8(basisu::eac_a8_block*, unsigned char const*, unsigned int, unsigned int,
   unsigned int) */

void basisu::pack_eac_a8(eac_a8_block *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5
                        )

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  eac_a8_block eVar7;
  ulong uVar6;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  long in_FS_OFFSET;
  eac_a8_block local_78 [4];
  byte local_74;
  char local_70;
  byte *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_40;
  
  iVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (byte *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  pack_eac_a8((pack_eac_a8_results *)local_78,param_2,0x10,param_3,param_4,param_5);
  uVar10 = (ulong)(byte)param_1[3];
  uVar9 = (ulong)(byte)param_1[4];
  uVar8 = (ulong)(byte)param_1[5];
  *param_1 = local_78[0];
  uVar11 = (ulong)(byte)param_1[7];
  eVar7 = param_1[6];
  param_1[1] = (eac_a8_block)(local_70 << 4 | local_74 & 0xf);
  uVar3 = (ulong)(byte)param_1[2];
  pbVar12 = local_68;
  do {
    pbVar13 = pbVar12 + 4;
    iVar5 = iVar14 * -3 + 0x2d;
    do {
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      bVar4 = (byte)iVar5;
      iVar5 = iVar5 + -0xc;
      uVar6 = (ulong)bVar1 << (bVar4 & 0x3f) |
              (uVar3 << 0x28 | uVar10 << 0x20 | uVar11 | uVar9 << 0x18 | uVar8 << 0x10 |
              (ulong)(byte)eVar7 << 8) & ~(7L << (bVar4 & 0x3f));
      uVar8 = uVar6 >> 0x10 & 0xff;
      uVar9 = uVar6 >> 0x18 & 0xff;
      uVar10 = uVar6 >> 0x20 & 0xff;
      uVar2 = (uint)(uVar6 >> 0x20);
      uVar3 = uVar6 >> 0x28 & 0xff;
      eVar7 = SUB81(uVar6 >> 8,0);
      *(uint *)(param_1 + 2) =
           ((((uint)(uVar6 >> 0x10) & 0xff) << 8 | (uint)(uVar6 >> 0x18) & 0xff) << 8 | uVar2 & 0xff
           ) << 8 | uVar2 >> 8 & 0xff;
      uVar11 = uVar6 & 0xff;
      *(ushort *)(param_1 + 6) = (ushort)uVar6 << 8 | (ushort)uVar6 >> 8;
    } while (pbVar13 != pbVar12);
    iVar14 = iVar14 + 1;
    pbVar12 = pbVar13;
  } while (iVar14 != 4);
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  if (local_68 != (byte *)0x0) {
    free(local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::etc1_optimizer::init(basisu::etc1_optimizer::params const&,
   basisu::etc1_optimizer::results&) */

void __thiscall basisu::etc1_optimizer::init(etc1_optimizer *this,params *param_1,results *param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint *puVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  bool bVar23;
  uint uVar24;
  int iVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long in_FS_OFFSET;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  ulong local_70;
  float local_50;
  float fStack_4c;
  
  bVar32 = 0;
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  *(params **)this = param_1;
  uVar17 = *(uint *)(this + 0x78);
  uVar6 = *(uint *)(param_1 + 0xc);
  *(results **)(this + 8) = param_2;
  iVar13 = (int)this;
  bVar23 = SUB41(uVar6,0);
  if (uVar6 != uVar17) {
    if (uVar6 < uVar17) {
      *(uint *)(this + 0x78) = uVar6;
    }
    else {
      if (*(uint *)(this + 0x7c) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  (iVar13 + 0x70,bVar23,(uint)(uVar17 + 1 == uVar6),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar17 = *(uint *)(this + 0x78);
      }
      memset((void *)((ulong)uVar17 + *(long *)(this + 0x70)),0,(ulong)(uVar6 - uVar17));
      *(uint *)(this + 0x78) = uVar6;
    }
  }
  uVar17 = *(uint *)(this + 0x88);
  if (uVar6 != uVar17) {
    if (uVar6 < uVar17) {
      *(uint *)(this + 0x88) = uVar6;
    }
    else {
      if (*(uint *)(this + 0x8c) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  (iVar13 + 0x80,bVar23,(uint)(uVar17 + 1 == uVar6),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar17 = *(uint *)(this + 0x88);
      }
      memset((void *)((ulong)uVar17 + *(long *)(this + 0x80)),0,(ulong)(uVar6 - uVar17));
      *(uint *)(this + 0x88) = uVar6;
    }
  }
  uVar17 = *(uint *)(this + 0xf8);
  if (uVar6 != uVar17) {
    if (uVar6 < uVar17) {
      *(uint *)(this + 0xf8) = uVar6;
    }
    else {
      if (*(uint *)(this + 0xfc) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  (iVar13 + 0xf0,bVar23,(uint)(uVar17 + 1 == uVar6),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar17 = *(uint *)(this + 0xf8);
      }
      memset((void *)((ulong)uVar17 + *(long *)(this + 0xf0)),0,(ulong)(uVar6 - uVar17));
      *(uint *)(this + 0xf8) = uVar6;
    }
  }
  uVar17 = *(uint *)(this + 0xd8);
  if (uVar6 != uVar17) {
    if (uVar6 < uVar17) {
      *(uint *)(this + 0xd8) = uVar6;
    }
    else {
      if (*(uint *)(this + 0xdc) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  (iVar13 + 0xd0,bVar23,(uint)(uVar17 + 1 == uVar6),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar17 = *(uint *)(this + 0xd8);
      }
      memset((void *)((ulong)uVar17 + *(long *)(this + 0xd0)),0,(ulong)(uVar6 - uVar17));
      *(uint *)(this + 0xd8) = uVar6;
    }
  }
  uVar17 = *(uint *)(this + 0xa8);
  if (uVar6 != uVar17) {
    if (uVar6 < uVar17) {
      *(uint *)(this + 0xa8) = uVar6;
    }
    else {
      if (*(uint *)(this + 0xac) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  (iVar13 + 0xa0,bVar23,(uint)(uVar17 + 1 == uVar6),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar17 = *(uint *)(this + 0xa8);
      }
      memset((void *)((ulong)uVar17 + *(long *)(this + 0xa0)),0,(ulong)(uVar6 - uVar17));
      *(uint *)(this + 0xa8) = uVar6;
    }
  }
  *(uint *)(this + 0x10) = (-(uint)(*(char *)(*(long *)this + 0x18) == '\0') & 0x10) + 0xf;
  uVar17 = *(uint *)(this + 0x38);
  if (uVar6 != uVar17) {
    if (uVar6 < uVar17) {
      *(uint *)(this + 0x38) = uVar6;
    }
    else {
      if (*(uint *)(this + 0x3c) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  (iVar13 + 0x30,bVar23,(uint)(uVar17 + 1 == uVar6),
                   (_func_void_void_ptr_void_ptr_uint *)0x2,false);
        uVar17 = *(uint *)(this + 0x38);
      }
      memset((void *)(*(long *)(this + 0x30) + (ulong)uVar17 * 2),0,(ulong)(uVar6 - uVar17) * 2);
      *(uint *)(this + 0x38) = uVar6;
    }
  }
  uVar17 = *(uint *)(this + 0x58);
  if (uVar6 != uVar17) {
    if (uVar6 < uVar17) {
      *(uint *)(this + 0x58) = uVar6;
    }
    else {
      if (*(uint *)(this + 0x5c) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  (iVar13 + 0x50,bVar23,(uint)(uVar17 + 1 == uVar6),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar17 = *(uint *)(this + 0x58);
      }
      memset((void *)(*(long *)(this + 0x50) + (ulong)uVar17 * 4),0,(ulong)(uVar6 - uVar17) << 2);
      *(uint *)(this + 0x58) = uVar6;
    }
  }
  uVar17 = *(uint *)(this + 0x48);
  if (uVar6 != uVar17) {
    if (uVar6 < uVar17) {
      *(uint *)(this + 0x48) = uVar6;
    }
    else {
      if (*(uint *)(this + 0x4c) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  (iVar13 + 0x40,bVar23,(uint)(uVar17 + 1 == uVar6),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar17 = *(uint *)(this + 0x48);
      }
      memset((void *)(*(long *)(this + 0x40) + (ulong)uVar17 * 4),0,(ulong)(uVar6 - uVar17) << 2);
      *(uint *)(this + 0x48) = uVar6;
    }
  }
  piVar9 = *(int **)this;
  if (uVar6 == 0) {
    local_70 = 0;
    auVar34 = ZEXT816(0);
    iVar21 = -0xff;
    fVar38 = 0.0;
  }
  else {
    local_70 = (ulong)uVar6;
    lVar10 = *(long *)(this + 0x50);
    uVar27 = 0;
    lVar11 = *(long *)(piVar9 + 4);
    fVar38 = 0.0;
    uVar29 = 0;
    local_50 = 0.0;
    fStack_4c = 0.0;
    uVar28 = 0;
    uVar18 = 0;
    lVar12 = *(long *)(this + 0x30);
    uVar31 = 0xff;
    uVar17 = 0xff;
    uVar30 = 0xff;
    do {
      fVar35 = local_50;
      bVar2 = *(byte *)(lVar11 + uVar18 * 4);
      bVar3 = *(byte *)(lVar11 + 1 + uVar18 * 4);
      bVar4 = *(byte *)(lVar11 + 2 + uVar18 * 4);
      uVar24 = (uint)bVar2;
      if (uVar24 < uVar17) {
        uVar17 = uVar24;
      }
      if (bVar3 < uVar30) {
        uVar30 = (uint)bVar3;
      }
      uVar20 = (uint)bVar4;
      if (uVar20 < uVar31) {
        uVar31 = uVar20;
      }
      if (uVar28 < uVar24) {
        uVar28 = (uint)bVar2;
      }
      if (uVar29 < bVar3) {
        uVar29 = (uint)bVar3;
      }
      fStack_4c = fStack_4c + (float)bVar3;
      if (uVar27 < uVar20) {
        uVar27 = (uint)bVar4;
      }
      *(ushort *)(lVar12 + uVar18 * 2) =
           (ushort)bVar3 + (ushort)*(byte *)(lVar11 + uVar18 * 4) + (ushort)bVar4;
      fVar38 = fVar38 + (float)bVar4;
      *(int *)(lVar10 + uVar18 * 4) = (int)uVar18;
      uVar18 = uVar18 + 1;
      local_50 = fVar35 + (float)bVar2;
    } while (uVar18 != local_70);
    auVar34._0_4_ = (float)bVar2 + fVar35;
    iVar21 = uVar27 - uVar31;
    if ((int)(uVar27 - uVar31) < (int)(uVar29 - uVar30)) {
      iVar21 = uVar29 - uVar30;
    }
    auVar33._0_12_ = ZEXT812(0);
    auVar33._12_4_ = fStack_4c;
    auVar34._8_8_ = auVar33._8_8_;
    auVar34._4_4_ = fStack_4c;
    if (iVar21 < (int)(uVar28 - uVar17)) {
      iVar21 = uVar28 - uVar17;
    }
  }
  fVar35 = _LC0;
  iVar16 = *(int *)(this + 0x10);
  iVar7 = *piVar9;
  fVar39 = (float)local_70;
  *(int *)(this + 0x2c) = iVar21;
  fVar15 = _LC1;
  auVar37._4_4_ = fVar39;
  auVar37._0_4_ = fVar39;
  auVar37._8_8_ = _LC4;
  auVar34 = divps(auVar34,auVar37);
  fVar36 = (float)iVar16;
  *(float *)(this + 0x1c) = fVar38 / fVar39;
  *(long *)(this + 0x14) = auVar34._0_8_;
  iVar25 = (int)(long)((auVar34._0_4_ * fVar36) / fVar35 + fVar15);
  iVar21 = iVar25;
  if (iVar16 <= iVar25) {
    iVar21 = iVar16;
  }
  if (iVar25 < 0) {
    iVar21 = 0;
  }
  *(int *)(this + 0x20) = iVar21;
  iVar25 = (int)(long)((auVar34._4_4_ * fVar36) / fVar35 + fVar15);
  iVar21 = iVar25;
  if (iVar16 <= iVar25) {
    iVar21 = iVar16;
  }
  if (iVar25 < 0) {
    iVar21 = 0;
  }
  *(int *)(this + 0x24) = iVar21;
  iVar21 = (int)(long)((fVar36 * (fVar38 / fVar39)) / fVar35 + fVar15);
  if (iVar21 < iVar16) {
    iVar16 = iVar21;
  }
  if (iVar21 < 0) {
    iVar16 = 0;
  }
  *(int *)(this + 0x28) = iVar16;
  if (iVar7 == 0) {
    lVar10 = *(long *)(this + 0x30);
    uVar18 = 0;
    lVar11 = *(long *)(this + 0x50);
    if (uVar6 == 0) {
      *(long *)(this + 0x60) = lVar11;
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x40);
    }
    else {
      do {
        *(int *)(lVar11 + uVar18 * 4) = (int)uVar18;
        uVar18 = uVar18 + 1;
      } while (local_70 != uVar18);
      local_70 = local_70 * 4;
      puVar1 = (uint *)(lVar11 + local_70);
      lVar12 = 0x3f;
      if ((long)local_70 >> 2 != 0) {
        for (; (ulong)((long)local_70 >> 2) >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      std::
      __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_short>(unsigned_int,unsigned_int*,unsigned_short_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (lVar11,puVar1,(long)(int)lVar12 * 2,lVar10);
      if (local_70 < 0x41) {
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_short>(unsigned_int,unsigned_int*,unsigned_short_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (lVar11,puVar1,lVar10);
      }
      else {
        puVar22 = (uint *)(lVar11 + 0x40);
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_short>(unsigned_int,unsigned_int*,unsigned_short_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (lVar11,puVar22,lVar10);
        for (; puVar1 != puVar22; puVar22 = puVar22 + 1) {
          while( true ) {
            uVar17 = *puVar22;
            uVar18 = (ulong)puVar22[-1];
            uVar5 = *(ushort *)(lVar10 + (ulong)uVar17 * 2);
            puVar14 = puVar22;
            if (*(ushort *)(lVar10 + uVar18 * 2) <= uVar5) break;
            do {
              puVar19 = puVar14 + -1;
              *puVar14 = (uint)uVar18;
              uVar18 = (ulong)puVar14[-2];
              puVar14 = puVar19;
            } while (uVar5 < *(ushort *)(lVar10 + uVar18 * 2));
            puVar22 = puVar22 + 1;
            *puVar19 = uVar17;
            if (puVar1 == puVar22) goto LAB_00104503;
          }
          *puVar22 = uVar17;
        }
      }
LAB_00104503:
      lVar10 = *(long *)(this + 0x50);
      lVar11 = *(long *)(this + 0x40);
      uVar18 = 0;
      lVar12 = *(long *)(this + 0x30);
      *(long *)(this + 0x60) = lVar10;
      *(long *)(this + 0x68) = lVar11;
      do {
        *(uint *)(lVar11 + uVar18) =
             (uint)*(ushort *)(lVar12 + (ulong)*(uint *)(lVar10 + uVar18) * 2);
        uVar18 = uVar18 + 4;
      } while (local_70 != uVar18);
    }
  }
  this[0x98] = (etc1_optimizer)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0xb8] = (etc1_optimizer)0x0;
  *(undefined8 *)(this + 0xb0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  puVar26 = (undefined8 *)((ulong)(this + 0x108) & 0xfffffffffffffff8);
  for (uVar18 = (ulong)((iVar13 - (int)(undefined8 *)((ulong)(this + 0x108) & 0xfffffffffffffff8)) +
                        0x180U >> 3); uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar26 = 0;
    puVar26 = puVar26 + (ulong)bVar32 * -2 + 1;
  }
  if (lVar8 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<unsigned int*,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned short>(unsigned int, unsigned
   int*, unsigned short const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, unsigned
   int*, __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned short>(unsigned int,
   unsigned int*, unsigned short const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_short>(unsigned_int,unsigned_int*,unsigned_short_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (uint *param_1,uint *param_2,long param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  size_t __n;
  uint *puVar5;
  uint *puVar6;
  
  if (param_1 == param_2) {
    return;
  }
  puVar5 = param_1 + 1;
  do {
    if (param_2 == puVar5) {
      return;
    }
    while( true ) {
      uVar3 = *puVar5;
      puVar6 = puVar5 + 1;
      uVar2 = *(ushort *)(param_3 + (ulong)uVar3 * 2);
      if (uVar2 < *(ushort *)(param_3 + (ulong)*param_1 * 2)) break;
      uVar4 = (ulong)puVar5[-1];
      uVar1 = *(ushort *)(param_3 + uVar4 * 2);
      while (uVar2 < uVar1) {
        *puVar5 = (uint)uVar4;
        uVar4 = (ulong)puVar5[-2];
        puVar5 = puVar5 + -1;
        uVar1 = *(ushort *)(param_3 + uVar4 * 2);
      }
      *puVar5 = uVar3;
      puVar5 = puVar6;
      if (param_2 == puVar6) {
        return;
      }
    }
    __n = (long)puVar5 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *puVar5 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)puVar5),param_1,__n);
    }
    *param_1 = uVar3;
    puVar5 = puVar6;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<unsigned int*, long, unsigned int,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned short>(unsigned int, unsigned
   int*, unsigned short const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, long,
   long, unsigned int, __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned
   short>(unsigned int, unsigned int*, unsigned short const*)::{lambda(unsigned int, unsigned
   int)#1}>) */

void std::
     __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_short>(unsigned_int,unsigned_int*,unsigned_short_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (long param_1,long param_2,ulong param_3,uint param_4,long param_5)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)(param_3 - 1) / 2;
  lVar7 = param_2;
  if (param_2 < lVar8) {
    do {
      lVar3 = (lVar7 + 1) * 2;
      lVar5 = (lVar7 + 1) * 8;
      puVar4 = (uint *)(param_1 + lVar5);
      uVar6 = *puVar4;
      if (*(ushort *)(param_5 + (ulong)uVar6 * 2) <
          *(ushort *)(param_5 + (ulong)*(uint *)(param_1 + -4 + lVar5) * 2)) {
        lVar3 = lVar3 + -1;
        puVar4 = (uint *)(param_1 + lVar3 * 4);
        uVar6 = *puVar4;
      }
      *(uint *)(param_1 + lVar7 * 4) = uVar6;
      lVar7 = lVar3;
    } while (lVar3 < lVar8);
    if ((param_3 & 1) == 0) goto LAB_0010c770;
  }
  else {
    puVar4 = (uint *)(param_1 + param_2 * 4);
    lVar3 = param_2;
    if ((param_3 & 1) != 0) goto LAB_0010c755;
LAB_0010c770:
    if ((long)(param_3 - 2) / 2 == lVar3) {
      lVar7 = lVar3 * 2;
      lVar3 = lVar7 + 1;
      *puVar4 = *(uint *)(param_1 + -4 + (lVar7 + 2) * 4);
      puVar4 = (uint *)(param_1 + lVar3 * 4);
    }
  }
  lVar7 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
  if (param_2 < lVar3) {
    uVar2 = *(ushort *)(param_5 + (ulong)param_4 * 2);
    while( true ) {
      lVar8 = lVar7 >> 1;
      puVar1 = (uint *)(param_1 + lVar8 * 4);
      puVar4 = (uint *)(param_1 + lVar3 * 4);
      uVar6 = *puVar1;
      if (uVar2 <= *(ushort *)(param_5 + (ulong)uVar6 * 2)) break;
      *puVar4 = uVar6;
      lVar7 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
      lVar3 = lVar8;
      if (lVar8 <= param_2) {
        *puVar1 = param_4;
        return;
      }
    }
  }
LAB_0010c755:
  *puVar4 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<unsigned int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned short>(unsigned int, unsigned
   int*, unsigned short const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, unsigned
   int*, long, __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned short>(unsigned int,
   unsigned int*, unsigned short const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_short>(unsigned_int,unsigned_int*,unsigned_short_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (ulong *param_1,uint *param_2,long param_3,long param_4)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (lVar4 < 0x41) {
    return;
  }
  puVar1 = (uint *)((long)param_1 + 4);
  puVar11 = param_2;
  if (param_3 != 0) {
    do {
      uVar10 = *param_1;
      param_3 = param_3 + -1;
      puVar6 = (uint *)((long)param_1 + (lVar4 >> 3) * 4);
      uVar8 = *puVar6;
      uVar13 = (uint)uVar10;
      uVar2 = *(ushort *)(param_4 + (ulong)puVar11[-1] * 2);
      uVar7 = *(ushort *)(param_4 + (ulong)*(uint *)((long)param_1 + 4) * 2);
      uVar9 = uVar10 & 0xffffffff;
      uVar3 = *(ushort *)(param_4 + (ulong)uVar8 * 2);
      puVar5 = puVar11;
      param_2 = puVar1;
      if (uVar7 < uVar3) {
        if (uVar3 < uVar2) {
LAB_0010c916:
          *(uint *)param_1 = uVar8;
          *puVar6 = uVar13;
          uVar10 = (ulong)*(uint *)((long)param_1 + 4);
          uVar9 = (ulong)puVar11[-1];
          uVar7 = *(ushort *)(param_4 + (ulong)(uint)*param_1 * 2);
        }
        else {
          if (uVar2 <= uVar7) goto LAB_0010c84c;
LAB_0010c8c8:
          *(uint *)param_1 = puVar11[-1];
          puVar11[-1] = uVar13;
          uVar10 = (ulong)*(uint *)((long)param_1 + 4);
          uVar7 = *(ushort *)(param_4 + (ulong)(uint)*param_1 * 2);
        }
      }
      else {
        if (uVar2 <= uVar7) {
          if (uVar3 < uVar2) goto LAB_0010c8c8;
          goto LAB_0010c916;
        }
LAB_0010c84c:
        *param_1 = CONCAT44(uVar13,(int)(uVar10 >> 0x20));
        uVar10 = uVar9;
        uVar9 = (ulong)puVar11[-1];
      }
      while( true ) {
        uVar13 = (uint)uVar9;
        uVar8 = (uint)uVar10;
        uVar2 = *(ushort *)(param_4 + uVar10 * 2);
        while (uVar2 < uVar7) {
          uVar8 = param_2[1];
          param_2 = param_2 + 1;
          uVar2 = *(ushort *)(param_4 + (ulong)uVar8 * 2);
        }
        uVar2 = *(ushort *)(param_4 + uVar9 * 2);
        puVar6 = puVar5;
        while (puVar5 = puVar6 + -1, uVar7 < uVar2) {
          uVar13 = puVar6[-2];
          puVar6 = puVar5;
          uVar2 = *(ushort *)(param_4 + (ulong)uVar13 * 2);
        }
        if (puVar5 <= param_2) break;
        *param_2 = uVar13;
        *puVar5 = uVar8;
        uVar7 = *(ushort *)(param_4 + (ulong)(uint)*param_1 * 2);
        uVar10 = (ulong)param_2[1];
        param_2 = param_2 + 1;
        uVar9 = (ulong)puVar6[-2];
      }
      __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_short>(unsigned_int,unsigned_int*,unsigned_short_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (param_2,puVar11,param_3,param_4);
      lVar4 = (long)param_2 - (long)param_1;
      if (lVar4 < 0x41) {
        return;
      }
      puVar11 = param_2;
    } while (param_3 != 0);
  }
  for (lVar12 = (lVar4 >> 2) + -2 >> 1;
      __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_short>(unsigned_int,unsigned_int*,unsigned_short_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (param_1,lVar12,lVar4 >> 2,*(undefined4 *)((long)param_1 + lVar12 * 4),param_4),
      lVar12 != 0; lVar12 = lVar12 + -1) {
  }
  do {
    param_2 = param_2 + -1;
    uVar8 = *param_2;
    *param_2 = (uint)*param_1;
    __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_short>(unsigned_int,unsigned_int*,unsigned_short_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
              (param_1,0,(long)param_2 - (long)param_1 >> 2,uVar8,param_4);
  } while (4 < (long)param_2 - (long)param_1);
  return;
}



/* basisu::g_etc2_eac_tables */

void basisu::_GLOBAL__sub_I_g_etc2_eac_tables(void)

{
  return;
}


