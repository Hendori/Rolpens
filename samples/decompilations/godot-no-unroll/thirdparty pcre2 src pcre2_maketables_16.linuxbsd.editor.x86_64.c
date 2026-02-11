
void * pcre2_maketables_16(undefined8 *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  __int32_t **pp_Var5;
  long lVar6;
  ushort **ppuVar7;
  __int32_t **pp_Var8;
  ulong uVar9;
  ushort *puVar10;
  byte bVar11;
  undefined8 *puVar12;
  long lVar13;
  byte bVar14;
  
  bVar14 = 0;
  if (param_1 == (undefined8 *)0x0) {
    pvVar4 = malloc(0x440);
  }
  else {
    pvVar4 = (void *)(*(code *)*param_1)(0x440,param_1[2]);
  }
  if (pvVar4 != (void *)0x0) {
    pp_Var5 = __ctype_tolower_loc();
    lVar6 = 0;
    do {
      *(char *)((long)pvVar4 + lVar6) = (char)(*pp_Var5)[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x100);
    ppuVar7 = __ctype_b_loc();
    lVar6 = 0;
    do {
      if ((*(byte *)((long)*ppuVar7 + lVar6 * 2 + 1) & 2) == 0) {
        iVar3 = (*pp_Var5)[lVar6];
      }
      else {
        pp_Var8 = __ctype_toupper_loc();
        iVar3 = (*pp_Var8)[lVar6];
      }
      if (0xff < iVar3) {
        iVar3 = (int)lVar6;
      }
      *(char *)((long)pvVar4 + lVar6 + 0x100) = (char)iVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x100);
    lVar6 = (long)pvVar4 + 0x200;
    *(undefined8 *)((long)pvVar4 + 0x200) = 0;
    puVar12 = (undefined8 *)((long)pvVar4 + 0x208U & 0xfffffffffffffff8);
    *(undefined8 *)((long)pvVar4 + 0x338) = 0;
    uVar9 = (ulong)(((int)lVar6 - (int)puVar12) + 0x140U >> 3);
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
    }
    lVar13 = 0;
    puVar10 = *ppuVar7;
    do {
      uVar2 = puVar10[lVar13];
      iVar3 = (int)lVar13 >> 3;
      bVar14 = (byte)lVar13;
      if ((uVar2 & 0x800) != 0) {
        pbVar1 = (byte *)(lVar6 + (iVar3 + 0x40));
        *pbVar1 = *pbVar1 | (byte)(1 << (bVar14 & 7));
        uVar2 = (*ppuVar7)[lVar13];
      }
      if ((uVar2 & 0x100) != 0) {
        pbVar1 = (byte *)(lVar6 + (iVar3 + 0x60));
        *pbVar1 = *pbVar1 | (byte)(1 << (bVar14 & 7));
        uVar2 = (*ppuVar7)[lVar13];
      }
      if ((uVar2 & 0x200) != 0) {
        pbVar1 = (byte *)(lVar6 + (iVar3 + 0x80));
        *pbVar1 = *pbVar1 | (byte)(1 << (bVar14 & 7));
        uVar2 = (*ppuVar7)[lVar13];
      }
      if ((uVar2 & 8) != 0) {
        pbVar1 = (byte *)(lVar6 + (iVar3 + 0xa0));
        *pbVar1 = *pbVar1 | (byte)(1 << (bVar14 & 7));
      }
      if (lVar13 == 0x5f) {
        *(byte *)((long)pvVar4 + 0x2ab) = *(byte *)((long)pvVar4 + 0x2ab) | 0x80;
      }
      puVar10 = *ppuVar7;
      uVar2 = puVar10[lVar13];
      if ((uVar2 & 0x2000) != 0) {
        *(byte *)(lVar6 + iVar3) = *(byte *)(lVar6 + iVar3) | (byte)(1 << (bVar14 & 7));
        puVar10 = *ppuVar7;
        uVar2 = puVar10[lVar13];
      }
      if ((uVar2 & 0x1000) != 0) {
        pbVar1 = (byte *)(lVar6 + (iVar3 + 0x20));
        *pbVar1 = *pbVar1 | (byte)(1 << (bVar14 & 7));
        puVar10 = *ppuVar7;
        uVar2 = puVar10[lVar13];
      }
      if ((short)uVar2 < 0) {
        pbVar1 = (byte *)(lVar6 + (iVar3 + 0xc0));
        *pbVar1 = *pbVar1 | (byte)(1 << (bVar14 & 7));
        puVar10 = *ppuVar7;
        uVar2 = puVar10[lVar13];
      }
      if ((uVar2 & 0x4000) != 0) {
        pbVar1 = (byte *)(lVar6 + (iVar3 + 0xe0));
        *pbVar1 = *pbVar1 | (byte)(1 << (bVar14 & 7));
        puVar10 = *ppuVar7;
        uVar2 = puVar10[lVar13];
      }
      if ((uVar2 & 4) != 0) {
        pbVar1 = (byte *)(lVar6 + (iVar3 + 0x100));
        *pbVar1 = *pbVar1 | (byte)(1 << (bVar14 & 7));
        puVar10 = *ppuVar7;
        uVar2 = puVar10[lVar13];
      }
      if ((uVar2 & 2) != 0) {
        pbVar1 = (byte *)(lVar6 + (iVar3 + 0x120));
        *pbVar1 = *pbVar1 | (byte)(1 << (bVar14 & 7));
        puVar10 = *ppuVar7;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x100);
    lVar6 = 0;
    while( true ) {
      uVar2 = puVar10[lVar6];
      bVar11 = (byte)(uVar2 >> 0xd) & 1;
      bVar14 = bVar11 + 2;
      if ((uVar2 & 0x400) == 0) {
        bVar14 = bVar11;
      }
      if ((uVar2 & 0x200) != 0) {
        bVar14 = bVar14 + 4;
      }
      if ((uVar2 & 0x800) != 0) {
        bVar14 = bVar14 + 8;
      }
      if (((uVar2 & 8) != 0) || ((int)lVar6 == 0x5f)) {
        bVar14 = bVar14 + 0x10;
      }
      *(byte *)((long)pvVar4 + lVar6 + 0x340) = bVar14;
      lVar6 = lVar6 + 1;
      if (lVar6 == 0x100) break;
      puVar10 = *ppuVar7;
    }
  }
  return pvVar4;
}



void pcre2_maketables_free_16(long param_1,void *param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00100353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(param_2,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  free(param_2);
  return;
}


