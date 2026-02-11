
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* get_2d_percentile_table(unsigned int, unsigned int) */

undefined4 * get_2d_percentile_table(uint param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  long lVar10;
  
  puVar5 = (undefined4 *)operator_new__(0x2000);
  uVar3 = _LC1;
  uVar4 = param_2 << 8 | param_1;
  if (uVar4 == 0x608) {
    uVar7 = 0x370;
    puVar9 = block_pcd_8x6;
    goto LAB_00100081;
  }
  if ((int)uVar4 < 0x609) {
    if (uVar4 == 0x506) {
      uVar7 = 0x184;
      puVar9 = block_pcd_6x5;
      goto LAB_00100081;
    }
    if ((int)uVar4 < 0x507) {
      puVar9 = block_pcd_5x4;
      uVar7 = 0x142;
      if (uVar4 == 0x405) goto LAB_00100081;
      puVar9 = block_pcd_5x5;
      uVar7 = 0x102;
      if (uVar4 == 0x505) goto LAB_00100081;
      puVar9 = block_pcd_4x4;
      uVar7 = 0xb8;
      if (uVar4 == 0x404) goto LAB_00100081;
    }
    else {
      uVar7 = 0x3ba;
      puVar9 = block_pcd_10x5;
      if (uVar4 == 0x50a) goto LAB_00100081;
      uVar7 = 0x301;
      puVar9 = block_pcd_6x6;
      if (uVar4 == 0x606) goto LAB_00100081;
      uVar7 = 0x2fb;
      puVar9 = block_pcd_8x5;
      if (uVar4 == 0x508) goto LAB_00100081;
    }
  }
  else {
    if (uVar4 == 0xa0a) {
      uVar7 = 0x447;
      puVar9 = block_pcd_10x10;
      goto LAB_00100081;
    }
    if ((int)uVar4 < 0xa0b) {
      uVar7 = 0x478;
      puVar9 = block_pcd_8x8;
      if (uVar4 == 0x808) goto LAB_00100081;
      uVar7 = 0x45f;
      puVar9 = block_pcd_10x8;
      if (uVar4 == 0x80a) goto LAB_00100081;
      uVar7 = 0x39a;
      puVar9 = block_pcd_10x6;
      if (uVar4 == 0x60a) goto LAB_00100081;
    }
    else {
      uVar7 = 1099;
      puVar9 = block_pcd_12x10;
      if (uVar4 == 0xa0c) goto LAB_00100081;
      uVar7 = 0x59b;
      puVar9 = block_pcd_12x12;
      if (uVar4 == 0xc0c) goto LAB_00100081;
    }
  }
  puVar9 = (undefined1 *)0x0;
  uVar7 = _DAT_00000006;
LAB_00100081:
  puVar6 = puVar5;
  do {
    *puVar6 = uVar3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar3;
    puVar6[3] = uVar3;
    puVar6 = puVar6 + 4;
  } while (puVar5 + 0x800 != puVar6);
  lVar10 = 0;
  while( true ) {
    uVar4 = (uint)*(ushort *)(puVar9 + lVar10 + 10);
    puVar8 = *(ushort **)(puVar9 + lVar10 * 4 + 0x10);
    if (*(ushort *)(puVar9 + lVar10 + 2) != 0) {
      puVar1 = puVar8 + (ulong)(*(ushort *)(puVar9 + lVar10 + 2) - 1) + 1;
      do {
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar4 = (uVar2 >> 0xb) + uVar4;
        puVar5[uVar2 & 0x7ff] = (float)uVar4 / (float)uVar7;
      } while (puVar8 != puVar1);
    }
    if (lVar10 == 2) break;
    uVar7 = *(ushort *)(puVar9 + 8);
    lVar10 = 2;
  }
  return puVar5;
}



/* is_legal_2d_block_size(unsigned int, unsigned int) */

bool is_legal_2d_block_size(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 << 8 | param_2;
  if (uVar1 < 0xa0b) {
    if (0xa04 < uVar1) {
      return (0x2bUL >> ((ulong)(uVar1 - 0xa05) & 0x3f) & 1) != 0;
    }
    if (0x606 < uVar1) {
      if (0x806 < uVar1) {
        return uVar1 == 0x808;
      }
      return 0x804 < uVar1;
    }
    bVar2 = true;
    if ((uVar1 < 0x605) && (uVar1 != 0x404)) {
      return uVar1 - 0x504 < 2;
    }
  }
  else {
    bVar2 = (uVar1 - 0xc0a & 0xfffffffd) == 0;
  }
  return bVar2;
}



/* is_legal_3d_block_size(unsigned int, unsigned int, unsigned int) */

bool is_legal_3d_block_size(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_1 << 0x10 | param_2 << 8 | param_3;
  if (uVar1 != 0x50404) {
    if (uVar1 < 0x50405) {
      if (uVar1 != 0x40303) {
        if (uVar1 < 0x40304) {
          return uVar1 == 0x30303;
        }
        return uVar1 - 0x40403 < 2;
      }
    }
    else if (uVar1 != 0x60505) {
      if (uVar1 < 0x60506) {
        return uVar1 - 0x50504 < 2;
      }
      return uVar1 - 0x60605 < 2;
    }
  }
  return true;
}


