
/* icu_76_godot::BMPSet::~BMPSet() */

void __thiscall icu_76_godot::BMPSet::~BMPSet(BMPSet *this)

{
  return;
}



/* icu_76_godot::set32x64Bits(unsigned int*, int, int) */

void icu_76_godot::set32x64Bits(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = param_2 >> 6;
  uVar6 = param_2 & 0x3f;
  uVar5 = 1 << ((byte)iVar1 & 0x1f);
  if (param_2 + 1 == param_3) {
    param_1[uVar6] = param_1[uVar6] | uVar5;
    return;
  }
  uVar4 = param_3 & 0x3f;
  iVar7 = param_3 >> 6;
  if (iVar1 == iVar7) {
    if (uVar6 < uVar4) {
      puVar2 = param_1 + (int)uVar6;
      do {
        *puVar2 = *puVar2 | uVar5;
        puVar2 = puVar2 + 1;
      } while (puVar2 != param_1 + (ulong)(uVar4 - uVar6) + (long)(int)uVar6);
      return;
    }
  }
  else {
    if (uVar6 != 0) {
      puVar2 = param_1 + (int)uVar6;
      do {
        *puVar2 = *puVar2 | uVar5;
        puVar2 = puVar2 + 1;
      } while (puVar2 != param_1 + (ulong)(0x3f - uVar6) + (long)(int)uVar6 + 1);
      iVar1 = iVar1 + 1;
    }
    if (iVar1 < iVar7) {
      uVar5 = -1 << ((byte)iVar1 & 0x1f);
      if (iVar7 != 0x20) {
        uVar5 = uVar5 & ~(-1 << ((byte)iVar7 & 0x1f));
      }
      puVar2 = param_1;
      do {
        puVar3 = puVar2 + 4;
        *puVar2 = *puVar2 | uVar5;
        puVar2[1] = puVar2[1] | uVar5;
        puVar2[2] = puVar2[2] | uVar5;
        puVar2[3] = puVar2[3] | uVar5;
        puVar2 = puVar3;
      } while (puVar3 != param_1 + 0x40);
    }
    uVar5 = 0x80000000;
    if (iVar7 != 0x20) {
      uVar5 = 1 << ((byte)iVar7 & 0x1f);
    }
    if (uVar4 != 0) {
      puVar2 = param_1 + uVar4;
      do {
        *param_1 = *param_1 | uVar5;
        param_1 = param_1 + 1;
      } while (param_1 != puVar2);
    }
  }
  return;
}



/* icu_76_godot::BMPSet::~BMPSet() */

void __thiscall icu_76_godot::BMPSet::~BMPSet(BMPSet *this)

{
  void *in_RSI;
  
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::BMPSet::BMPSet(icu_76_godot::BMPSet const&, int const*, int) */

void __thiscall icu_76_godot::BMPSet::BMPSet(BMPSet *this,BMPSet *param_1,int *param_2,int param_3)

{
  BMPSet BVar1;
  undefined8 uVar2;
  
  *(int **)(this + 0x358) = param_2;
  *(undefined ***)this = &PTR__BMPSet_00101520;
  BVar1 = param_1[0x108];
  *(int *)(this + 0x360) = param_3;
  this[0x108] = BVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x90) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0xa0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xb0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xc0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0xd0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 0xe0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(this + 0xf0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0x100) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x114);
  *(undefined8 *)(this + 0x10c) = *(undefined8 *)(param_1 + 0x10c);
  *(undefined8 *)(this + 0x114) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x124);
  *(undefined8 *)(this + 0x11c) = *(undefined8 *)(param_1 + 0x11c);
  *(undefined8 *)(this + 0x124) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x134);
  *(undefined8 *)(this + 300) = *(undefined8 *)(param_1 + 300);
  *(undefined8 *)(this + 0x134) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x144);
  *(undefined8 *)(this + 0x13c) = *(undefined8 *)(param_1 + 0x13c);
  *(undefined8 *)(this + 0x144) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x154);
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)(param_1 + 0x14c);
  *(undefined8 *)(this + 0x154) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x164);
  *(undefined8 *)(this + 0x15c) = *(undefined8 *)(param_1 + 0x15c);
  *(undefined8 *)(this + 0x164) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x174);
  *(undefined8 *)(this + 0x16c) = *(undefined8 *)(param_1 + 0x16c);
  *(undefined8 *)(this + 0x174) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x184);
  *(undefined8 *)(this + 0x17c) = *(undefined8 *)(param_1 + 0x17c);
  *(undefined8 *)(this + 0x184) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x194);
  *(undefined8 *)(this + 0x18c) = *(undefined8 *)(param_1 + 0x18c);
  *(undefined8 *)(this + 0x194) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1a4);
  *(undefined8 *)(this + 0x19c) = *(undefined8 *)(param_1 + 0x19c);
  *(undefined8 *)(this + 0x1a4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1b4);
  *(undefined8 *)(this + 0x1ac) = *(undefined8 *)(param_1 + 0x1ac);
  *(undefined8 *)(this + 0x1b4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1c4);
  *(undefined8 *)(this + 0x1bc) = *(undefined8 *)(param_1 + 0x1bc);
  *(undefined8 *)(this + 0x1c4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1d4);
  *(undefined8 *)(this + 0x1cc) = *(undefined8 *)(param_1 + 0x1cc);
  *(undefined8 *)(this + 0x1d4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1e4);
  *(undefined8 *)(this + 0x1dc) = *(undefined8 *)(param_1 + 0x1dc);
  *(undefined8 *)(this + 0x1e4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 500);
  *(undefined8 *)(this + 0x1ec) = *(undefined8 *)(param_1 + 0x1ec);
  *(undefined8 *)(this + 500) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x204);
  *(undefined8 *)(this + 0x1fc) = *(undefined8 *)(param_1 + 0x1fc);
  *(undefined8 *)(this + 0x204) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x214);
  *(undefined8 *)(this + 0x20c) = *(undefined8 *)(param_1 + 0x20c);
  *(undefined8 *)(this + 0x214) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x224);
  *(undefined8 *)(this + 0x21c) = *(undefined8 *)(param_1 + 0x21c);
  *(undefined8 *)(this + 0x224) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x234);
  *(undefined8 *)(this + 0x22c) = *(undefined8 *)(param_1 + 0x22c);
  *(undefined8 *)(this + 0x234) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x244);
  *(undefined8 *)(this + 0x23c) = *(undefined8 *)(param_1 + 0x23c);
  *(undefined8 *)(this + 0x244) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x254);
  *(undefined8 *)(this + 0x24c) = *(undefined8 *)(param_1 + 0x24c);
  *(undefined8 *)(this + 0x254) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x264);
  *(undefined8 *)(this + 0x25c) = *(undefined8 *)(param_1 + 0x25c);
  *(undefined8 *)(this + 0x264) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x274);
  *(undefined8 *)(this + 0x26c) = *(undefined8 *)(param_1 + 0x26c);
  *(undefined8 *)(this + 0x274) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x284);
  *(undefined8 *)(this + 0x27c) = *(undefined8 *)(param_1 + 0x27c);
  *(undefined8 *)(this + 0x284) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x294);
  *(undefined8 *)(this + 0x28c) = *(undefined8 *)(param_1 + 0x28c);
  *(undefined8 *)(this + 0x294) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x2a4);
  *(undefined8 *)(this + 0x29c) = *(undefined8 *)(param_1 + 0x29c);
  *(undefined8 *)(this + 0x2a4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x2b4);
  *(undefined8 *)(this + 0x2ac) = *(undefined8 *)(param_1 + 0x2ac);
  *(undefined8 *)(this + 0x2b4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x2c4);
  *(undefined8 *)(this + 700) = *(undefined8 *)(param_1 + 700);
  *(undefined8 *)(this + 0x2c4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x2d4);
  *(undefined8 *)(this + 0x2cc) = *(undefined8 *)(param_1 + 0x2cc);
  *(undefined8 *)(this + 0x2d4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x2e4);
  *(undefined8 *)(this + 0x2dc) = *(undefined8 *)(param_1 + 0x2dc);
  *(undefined8 *)(this + 0x2e4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x2f4);
  *(undefined8 *)(this + 0x2ec) = *(undefined8 *)(param_1 + 0x2ec);
  *(undefined8 *)(this + 0x2f4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x304);
  *(undefined8 *)(this + 0x2fc) = *(undefined8 *)(param_1 + 0x2fc);
  *(undefined8 *)(this + 0x304) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x314);
  *(undefined8 *)(this + 0x30c) = *(undefined8 *)(param_1 + 0x30c);
  *(undefined8 *)(this + 0x314) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x324);
  *(undefined8 *)(this + 0x31c) = *(undefined8 *)(param_1 + 0x31c);
  *(undefined8 *)(this + 0x324) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x334);
  *(undefined8 *)(this + 0x32c) = *(undefined8 *)(param_1 + 0x32c);
  *(undefined8 *)(this + 0x334) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x344);
  *(undefined8 *)(this + 0x33c) = *(undefined8 *)(param_1 + 0x33c);
  *(undefined8 *)(this + 0x344) = uVar2;
  *(undefined8 *)(this + 0x34c) = *(undefined8 *)(param_1 + 0x34c);
  return;
}



/* icu_76_godot::BMPSet::initBits() */

void __thiscall icu_76_godot::BMPSet::initBits(BMPSet *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar6 = 0;
  lVar1 = *(long *)(this + 0x358);
  iVar10 = *(int *)(this + 0x360);
  do {
    iVar2 = *(int *)(lVar1 + (long)iVar6 * 4);
    if (iVar6 + 1 < iVar10) {
      iVar9 = *(int *)(lVar1 + 4 + (long)iVar6 * 4);
      iVar6 = iVar6 + 2;
    }
    else {
      iVar9 = 0x110000;
      iVar6 = iVar6 + 1;
    }
    if (0xff < iVar2) break;
    lVar3 = (long)(iVar2 + 1);
    do {
      this[lVar3 + 7] = (BMPSet)0x1;
      iVar2 = (int)lVar3;
      if (iVar9 <= iVar2) break;
      lVar3 = lVar3 + 1;
    } while (iVar2 < 0x100);
  } while (iVar9 < 0x101);
  iVar6 = 1;
  puVar4 = (uint *)(lVar1 + 4);
  lVar3 = 0;
  iVar2 = 1;
  if (1 < iVar10) {
    do {
      uVar11 = *puVar4;
      iVar9 = (int)lVar3 + 2;
      iVar2 = iVar6 + 2;
      puVar4 = puVar4 + 2;
      if (0x80 < (int)uVar11) goto LAB_0010051f;
      lVar3 = (long)iVar9;
      iVar6 = iVar2;
    } while (iVar2 < iVar10);
  }
  uVar11 = 0x110000;
  iVar9 = iVar2;
LAB_0010051f:
  uVar8 = *(uint *)(lVar1 + lVar3 * 4);
  uVar7 = 0x80;
  if (0x7f < (int)uVar8) {
    uVar7 = uVar8;
  }
  if ((int)uVar8 < 0x800) {
    iVar10 = iVar9;
    do {
      while( true ) {
        uVar8 = 0x800;
        if ((int)uVar11 < 0x801) {
          uVar8 = uVar11;
        }
        set32x64Bits((uint *)(this + 0x10c),uVar7,uVar8);
        if (0x800 < (int)uVar11) {
          uVar7 = 0x800;
          goto LAB_001005aa;
        }
        iVar9 = iVar10 + 1;
        uVar7 = *(uint *)(lVar1 + (long)iVar10 * 4);
        if (iVar9 < *(int *)(this + 0x360)) break;
        uVar11 = 0x110000;
        iVar10 = iVar9;
        if (0x7ff < (int)uVar7) goto LAB_0010059e;
      }
      uVar11 = *(uint *)(lVar1 + 4 + (long)iVar10 * 4);
      iVar9 = iVar10 + 2;
      iVar10 = iVar9;
    } while ((int)uVar7 < 0x800);
  }
LAB_0010059e:
  iVar10 = iVar9;
  if (0xffff < (int)uVar7) {
    return;
  }
LAB_001005aa:
  uVar8 = 0x800;
  do {
    uVar5 = 0x10000;
    if ((int)uVar11 < 0x10001) {
      uVar5 = uVar11;
    }
    if ((int)uVar7 <= (int)uVar8) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < (int)uVar5) {
      if ((uVar7 & 0x3f) != 0) {
        iVar6 = ((int)uVar7 >> 6) + 1;
        uVar8 = iVar6 * 0x40;
        *(uint *)(this + (ulong)((int)uVar7 >> 6 & 0x3f) * 4 + 0x20c) =
             *(uint *)(this + (ulong)((int)uVar7 >> 6 & 0x3f) * 4 + 0x20c) |
             0x10001 << ((byte)((int)uVar7 >> 0xc) & 0x1f);
        uVar7 = uVar8;
        if (uVar5 == uVar8 || SBORROW4(uVar5,uVar8) != (int)(uVar5 + iVar6 * -0x40) < 0)
        goto LAB_00100660;
      }
      uVar11 = (int)uVar5 >> 6;
      if ((int)uVar7 < (int)(uVar5 & 0xffffffc0)) {
        set32x64Bits((uint *)(this + 0x20c),(int)uVar7 >> 6,uVar11);
        if ((uVar5 & 0x3f) != 0) goto LAB_00100634;
        goto LAB_00100660;
      }
      if ((uVar5 & 0x3f) != 0) {
LAB_00100634:
        *(uint *)(this + (ulong)(uVar11 & 0x3f) * 4 + 0x20c) =
             *(uint *)(this + (ulong)(uVar11 & 0x3f) * 4 + 0x20c) |
             0x10001 << ((byte)((int)uVar5 >> 0xc) & 0x1f);
        uVar8 = (uVar11 + 1) * 0x40;
        uVar5 = uVar8;
        goto LAB_00100660;
      }
    }
    else {
LAB_00100660:
      if (uVar5 == 0x10000) {
        return;
      }
    }
    uVar7 = *(uint *)(lVar1 + (long)iVar10 * 4);
    if (iVar10 + 1 < *(int *)(this + 0x360)) {
      uVar11 = *(uint *)(lVar1 + 4 + (long)iVar10 * 4);
      iVar10 = iVar10 + 2;
      if (0xffff < (int)uVar7) {
        return;
      }
    }
    else {
      uVar11 = 0x110000;
      iVar10 = iVar10 + 1;
      if (0xffff < (int)uVar7) {
        return;
      }
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::BMPSet::overrideIllegal() */

void __thiscall icu_76_godot::BMPSet::overrideIllegal(BMPSet *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  BMPSet *pBVar7;
  BMPSet *pBVar8;
  
  uVar4 = _UNK_00101568;
  uVar3 = __LC2;
  uVar2 = _UNK_00101548;
  uVar1 = __LC0;
  if (this[0x108] != (BMPSet)0x0) {
    pBVar8 = this + 0x10c;
    do {
      pBVar7 = pBVar8 + 0x10;
      *(ulong *)pBVar8 = *(ulong *)pBVar8 | uVar1;
      *(ulong *)(pBVar8 + 8) = *(ulong *)(pBVar8 + 8) | uVar2;
      uVar4 = _UNK_00101558;
      uVar3 = __LC1;
      pBVar8 = pBVar7;
    } while (pBVar7 != this + 0x20c);
    do {
      pBVar8 = pBVar7 + 0x10;
      *(ulong *)pBVar7 = *(ulong *)pBVar7 | uVar3;
      *(ulong *)(pBVar7 + 8) = *(ulong *)(pBVar7 + 8) | uVar4;
      uVar6 = _UNK_00101578;
      uVar5 = __LC3;
      uVar2 = _UNK_00101568;
      uVar1 = __LC2;
      pBVar7 = pBVar8;
    } while (pBVar8 != this + 0x28c);
    do {
      pBVar7 = pBVar8 + 0x10;
      *(ulong *)pBVar8 = *(ulong *)pBVar8 & uVar1 | uVar5;
      *(ulong *)(pBVar8 + 8) = *(ulong *)(pBVar8 + 8) & uVar2 | uVar6;
      pBVar8 = pBVar7;
    } while (pBVar7 != this + 0x30c);
    return;
  }
  pBVar8 = this + 0x28c;
  do {
    pBVar7 = pBVar8 + 0x10;
    *(ulong *)pBVar8 = *(ulong *)pBVar8 & uVar3;
    *(ulong *)(pBVar8 + 8) = *(ulong *)(pBVar8 + 8) & uVar4;
    pBVar8 = pBVar7;
  } while (this + 0x30c != pBVar7);
  return;
}



/* icu_76_godot::BMPSet::findCodePoint(int, int, int) const */

int __thiscall icu_76_godot::BMPSet::findCodePoint(BMPSet *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(this + 0x358);
  iVar2 = param_2;
  if (*(int *)(lVar1 + (long)param_2 * 4) <= param_1) {
    iVar2 = param_3;
    if (param_2 < param_3) {
      if (*(int *)(lVar1 + -4 + (long)param_3 * 4) <= param_1) {
        return param_3;
      }
      while( true ) {
        iVar2 = param_3;
        param_3 = param_2 + iVar2 >> 1;
        if (param_2 == param_3) break;
        if (*(int *)(lVar1 + (long)param_3 * 4) <= param_1) {
          param_2 = param_3;
          param_3 = iVar2;
        }
      }
    }
  }
  return iVar2;
}



/* icu_76_godot::BMPSet::contains(int) const */

uint __thiscall icu_76_godot::BMPSet::contains(BMPSet *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((uint)param_1 < 0x100) {
    return (uint)(byte)this[(long)param_1 + 8];
  }
  if (0x7ff < (uint)param_1) {
    if ((param_1 - 0xe000U < 0x2000) || ((uint)param_1 < 0xd800)) {
      iVar2 = param_1 >> 0xc;
      uVar1 = *(uint *)(this + (ulong)(param_1 >> 6 & 0x3f) * 4 + 0x20c) >> ((byte)iVar2 & 0x1f) &
              0x10001;
      if (1 < uVar1) {
        uVar1 = findCodePoint(this,param_1,*(int *)(this + (long)iVar2 * 4 + 0x30c),
                              *(int *)(this + (long)(iVar2 + 1) * 4 + 0x30c));
        return uVar1 & 1;
      }
    }
    else {
      uVar1 = 0;
      if ((uint)param_1 < 0x110000) {
        uVar1 = findCodePoint(this,param_1,*(int *)(this + 0x340),*(int *)(this + 0x350));
        return uVar1 & 1;
      }
    }
    return uVar1;
  }
  return CONCAT31((int3)(*(uint *)(this + (ulong)(param_1 & 0x3f) * 4 + 0x10c) >> 8),
                  (*(uint *)(this + (ulong)(param_1 & 0x3f) * 4 + 0x10c) >> (param_1 >> 6 & 0x1fU) &
                  1) != 0);
}



/* icu_76_godot::BMPSet::BMPSet(int const*, int) */

void __thiscall icu_76_godot::BMPSet::BMPSet(BMPSet *this,int *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  *(undefined ***)this = &PTR__BMPSet_00101520;
  lVar6 = 1;
  *(int **)(this + 0x358) = param_1;
  uVar7 = (ulong)(param_2 - 1U);
  *(int *)(this + 0x360) = param_2;
  iVar4 = (int)this;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  puVar5 = (undefined8 *)((ulong)(this + 0x10) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)((iVar4 - (int)(undefined8 *)((ulong)(this + 0x10) & 0xfffffffffffffff8)) +
                       0x108U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined8 *)(this + 0x10c) = 0;
  *(undefined8 *)(this + 0x204) = 0;
  puVar5 = (undefined8 *)((ulong)(this + 0x114) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)((iVar4 - (int)(undefined8 *)((ulong)(this + 0x114) & 0xfffffffffffffff8)) +
                       0x20cU >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined8 *)(this + 0x20c) = 0;
  *(undefined8 *)(this + 0x304) = 0;
  puVar5 = (undefined8 *)((ulong)(this + 0x214) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)((iVar4 - (int)(undefined8 *)((ulong)(this + 0x214) & 0xfffffffffffffff8)) +
                       0x30cU >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar2 = findCodePoint(this,0x800,0,param_2 - 1U);
  *(undefined4 *)(this + 0x30c) = uVar2;
  do {
    uVar2 = findCodePoint(this,(int)lVar6 << 0xc,*(int *)(this + lVar6 * 4 + 0x308),(int)uVar7);
    *(undefined4 *)(this + lVar6 * 4 + 0x30c) = uVar2;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x11);
  *(int *)(this + 0x350) = (int)uVar7;
  bVar1 = findCodePoint(this,0xfffd,*(int *)(this + 0x348),*(int *)(this + 0x34c));
  this[0x108] = (BMPSet)(bVar1 & 1);
  initBits(this);
  overrideIllegal(this);
  return;
}



/* icu_76_godot::BMPSet::span(char16_t const*, char16_t const*, USetSpanCondition) const */

ushort * __thiscall
icu_76_godot::BMPSet::span(BMPSet *this,ushort *param_1,ushort *param_2,int param_4)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  ushort *puVar4;
  
  if (param_4 == 0) {
    do {
      uVar1 = *param_1;
      puVar4 = param_1;
      if (uVar1 < 0x100) {
        if (this[(ulong)uVar1 + 8] != (BMPSet)0x0) {
          return param_1;
        }
      }
      else if (uVar1 < 0x800) {
        uVar3 = *(uint *)(this + (ulong)(uVar1 & 0x3f) * 4 + 0x10c) >> (uVar1 >> 6 & 0x1f) & 1;
joined_r0x00100b1e:
        if (uVar3 != 0) {
          return param_1;
        }
      }
      else {
        if ((ushort)(uVar1 + 0x2800) < 0x800) {
          if (((uVar1 < 0xdc00) && (puVar4 = param_1 + 1, puVar4 != param_2)) &&
             ((ushort)(param_1[1] + 0x2400) < 0x400)) {
            uVar2 = findCodePoint(this,(uint)uVar1 * 0x400 + -0x35fdc00 + (uint)param_1[1],
                                  *(int *)(this + 0x34c),*(int *)(this + 0x350));
            if ((uVar2 & 1) != 0) {
              return param_1;
            }
            goto LAB_00100aa8;
          }
          uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + 0x340),*(int *)(this + 0x344));
        }
        else {
          uVar3 = *(uint *)(this + (ulong)(uVar1 >> 6 & 0x3f) * 4 + 0x20c) >> (byte)(uVar1 >> 0xc) &
                  0x10001;
          if (uVar3 < 2) goto joined_r0x00100b1e;
          uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + (ulong)(uVar1 >> 0xc) * 4 + 0x30c),
                                *(int *)(this + (long)(int)((uVar1 >> 0xc) + 1) * 4 + 0x30c));
        }
        puVar4 = param_1;
        if ((uVar2 & 1) != 0) {
          return param_1;
        }
      }
LAB_00100aa8:
      param_1 = puVar4 + 1;
    } while (param_1 < param_2);
  }
  else {
    do {
      uVar1 = *param_1;
      puVar4 = param_1;
      if (uVar1 < 0x100) {
        if (this[(ulong)uVar1 + 8] == (BMPSet)0x0) {
          return param_1;
        }
      }
      else if (uVar1 < 0x800) {
        uVar3 = *(uint *)(this + (ulong)(uVar1 & 0x3f) * 4 + 0x10c) >> (uVar1 >> 6 & 0x1f) & 1;
joined_r0x00100b66:
        if (uVar3 == 0) {
          return param_1;
        }
      }
      else {
        if ((ushort)(uVar1 + 0x2800) < 0x800) {
          if (((uVar1 < 0xdc00) && (puVar4 = param_1 + 1, puVar4 != param_2)) &&
             ((ushort)(param_1[1] + 0x2400) < 0x400)) {
            uVar2 = findCodePoint(this,(uint)uVar1 * 0x400 + -0x35fdc00 + (uint)param_1[1],
                                  *(int *)(this + 0x34c),*(int *)(this + 0x350));
            if ((uVar2 & 1) == 0) {
              return param_1;
            }
            goto LAB_00100a60;
          }
          uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + 0x340),*(int *)(this + 0x344));
        }
        else {
          uVar3 = *(uint *)(this + (ulong)(uVar1 >> 6 & 0x3f) * 4 + 0x20c) >> (byte)(uVar1 >> 0xc) &
                  0x10001;
          if (uVar3 < 2) goto joined_r0x00100b66;
          uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + (ulong)(uVar1 >> 0xc) * 4 + 0x30c),
                                *(int *)(this + (long)(int)((uVar1 >> 0xc) + 1) * 4 + 0x30c));
        }
        puVar4 = param_1;
        if ((uVar2 & 1) == 0) {
          return param_1;
        }
      }
LAB_00100a60:
      param_1 = puVar4 + 1;
    } while (param_1 < param_2);
  }
  return param_1;
}



/* WARNING: Type propagation algorithm not settling */
/* icu_76_godot::BMPSet::spanBack(char16_t const*, char16_t const*, USetSpanCondition) const */

long __thiscall icu_76_godot::BMPSet::spanBack(BMPSet *this,long param_1,long param_2,int param_4)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (param_4 == 0) {
LAB_00100d50:
    while( true ) {
      lVar4 = param_2;
      uVar1 = *(ushort *)(lVar4 + -2);
      param_2 = lVar4 + -2;
      if (uVar1 < 0x100) {
        if (this[(ulong)uVar1 + 8] != (BMPSet)0x0) {
          return lVar4;
        }
        goto LAB_00100d48;
      }
      if (0x7ff < uVar1) break;
      if ((*(uint *)(this + (ulong)(uVar1 & 0x3f) * 4 + 0x10c) >> (uVar1 >> 6 & 0x1f) & 1) != 0) {
        return lVar4;
      }
      if (param_2 == param_1) {
        return param_2;
      }
    }
    if ((ushort)(uVar1 + 0x2800) < 0x800) {
      if ((uVar1 < 0xdc00) || (param_2 == param_1)) {
        uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + 0x340),*(int *)(this + 0x344));
        goto joined_r0x00100f70;
      }
      if (0x3ff < (ushort)(*(ushort *)(lVar4 + -4) + 0x2800)) {
        uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + 0x340),*(int *)(this + 0x344));
        if ((uVar2 & 1) != 0) {
          return lVar4;
        }
        goto LAB_00100d50;
      }
      uVar2 = findCodePoint(this,uVar1 + 0xfca02400 + (uint)*(ushort *)(lVar4 + -4) * 0x400,
                            *(int *)(this + 0x34c),*(int *)(this + 0x350));
      if ((uVar2 & 1) != 0) {
        return lVar4;
      }
      param_2 = lVar4 + -4;
    }
    else {
      uVar3 = *(uint *)(this + (ulong)(uVar1 >> 6 & 0x3f) * 4 + 0x20c) >> (byte)(uVar1 >> 0xc) &
              0x10001;
      if (uVar3 < 2) {
        if (uVar3 != 0) {
          return lVar4;
        }
      }
      else {
        uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + (ulong)(uVar1 >> 0xc) * 4 + 0x30c),
                              *(int *)(this + (long)(int)((uVar1 >> 0xc) + 1) * 4 + 0x30c));
joined_r0x00100f70:
        if ((uVar2 & 1) != 0) {
          return lVar4;
        }
      }
    }
LAB_00100d48:
    if (param_2 == param_1) {
      return param_2;
    }
    goto LAB_00100d50;
  }
  do {
    while( true ) {
      lVar4 = param_2;
      uVar1 = *(ushort *)(lVar4 + -2);
      param_2 = lVar4 + -2;
      if (0xff < uVar1) break;
      if (this[(ulong)uVar1 + 8] == (BMPSet)0x0) {
        return lVar4;
      }
LAB_00100d00:
      if (param_2 == param_1) {
        return param_2;
      }
    }
    if (uVar1 < 0x800) {
      uVar3 = *(uint *)(this + (ulong)(uVar1 & 0x3f) * 4 + 0x10c) >> (uVar1 >> 6 & 0x1f) & 1;
joined_r0x00100d36:
      if (uVar3 == 0) {
        return lVar4;
      }
      goto LAB_00100d00;
    }
    if (0x7ff < (ushort)(uVar1 + 0x2800)) {
      uVar3 = *(uint *)(this + (ulong)(uVar1 >> 6 & 0x3f) * 4 + 0x20c) >> (byte)(uVar1 >> 0xc) &
              0x10001;
      if (uVar3 < 2) goto joined_r0x00100d36;
      uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + (ulong)(uVar1 >> 0xc) * 4 + 0x30c),
                            *(int *)(this + (long)(int)((uVar1 >> 0xc) + 1) * 4 + 0x30c));
joined_r0x00100f48:
      if ((uVar2 & 1) == 0) {
        return lVar4;
      }
      goto LAB_00100d00;
    }
    if ((uVar1 < 0xdc00) || (param_1 == param_2)) {
      uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + 0x340),*(int *)(this + 0x344));
      goto joined_r0x00100f48;
    }
    if ((ushort)(*(ushort *)(lVar4 + -4) + 0x2800) < 0x400) {
      uVar2 = findCodePoint(this,uVar1 + 0xfca02400 + (uint)*(ushort *)(lVar4 + -4) * 0x400,
                            *(int *)(this + 0x34c),*(int *)(this + 0x350));
      if ((uVar2 & 1) == 0) {
        return lVar4;
      }
      param_2 = lVar4 + -4;
      goto LAB_00100d00;
    }
    uVar2 = findCodePoint(this,(uint)uVar1,*(int *)(this + 0x340),*(int *)(this + 0x344));
    if ((uVar2 & 1) == 0) {
      return lVar4;
    }
  } while( true );
}



/* icu_76_godot::BMPSet::spanUTF8(unsigned char const*, int, USetSpanCondition) const */

byte * __thiscall icu_76_godot::BMPSet::spanUTF8(BMPSet *this,byte *param_1,int param_2,int param_4)

{
  byte bVar1;
  BMPSet BVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  pbVar8 = param_1 + param_2;
  uVar5 = (ulong)*param_1;
  if (-1 < (char)*param_1) {
    if (param_4 == 0) {
      do {
        if (this[uVar5 + 8] != (BMPSet)0x0) {
          return param_1;
        }
        param_1 = param_1 + 1;
        if (pbVar8 == param_1) {
          return pbVar8;
        }
        uVar5 = (ulong)*param_1;
      } while (-1 < (char)*param_1);
    }
    else {
      BVar2 = this[uVar5 + 8];
      while( true ) {
        if (BVar2 == (BMPSet)0x0) {
          return param_1;
        }
        param_1 = param_1 + 1;
        if (pbVar8 == param_1) {
          return pbVar8;
        }
        if ((char)*param_1 < '\0') break;
        BVar2 = this[(ulong)*param_1 + 8];
      }
    }
    param_2 = (int)pbVar8 - (int)param_1;
  }
  uVar9 = (uint)(param_4 != 0);
  pbVar7 = pbVar8;
  if ((char)pbVar8[-1] < '\0') {
    if (pbVar8[-1] < 0xc0) {
      if (1 < param_2) {
        if (pbVar8[-2] < 0xe0) {
          if (((((byte)(pbVar8[-2] + 0x80) < 0x40) && (param_2 != 2)) && (0xef < pbVar8[-3])) &&
             (pbVar7 = pbVar8 + -3, (int)(char)this[0x108] != uVar9)) {
            pbVar8 = pbVar7;
          }
        }
        else {
          pbVar7 = pbVar8 + -2;
          if ((int)(char)this[0x108] != uVar9) {
            pbVar8 = pbVar7;
          }
        }
      }
    }
    else {
      pbVar7 = pbVar8 + -1;
      if ((int)(char)this[0x108] != uVar9) {
        pbVar8 = pbVar7;
      }
    }
  }
  do {
    while( true ) {
      if (pbVar7 <= param_1) {
        return pbVar8;
      }
      bVar3 = *param_1;
      uVar5 = (ulong)bVar3;
      uVar4 = (uint)bVar3;
      if (-1 < (char)bVar3) {
        if (param_4 == 0) {
          do {
            if (this[uVar5 + 8] != (BMPSet)0x0) {
              return param_1;
            }
            param_1 = param_1 + 1;
            if (param_1 == pbVar7) {
              return pbVar8;
            }
            bVar3 = *param_1;
            uVar5 = (ulong)bVar3;
            uVar4 = (uint)bVar3;
          } while (-1 < (char)bVar3);
        }
        else {
          BVar2 = this[uVar5 + 8];
          while( true ) {
            if (BVar2 == (BMPSet)0x0) {
              return param_1;
            }
            param_1 = param_1 + 1;
            if (param_1 == pbVar7) {
              return pbVar8;
            }
            bVar3 = *param_1;
            uVar4 = (uint)bVar3;
            if ((char)bVar3 < '\0') break;
            BVar2 = this[(ulong)bVar3 + 8];
          }
        }
      }
      bVar3 = (byte)uVar4;
      if (0xdf < bVar3) break;
      if ((bVar3 < 0xc0) || (0x3f < (byte)(param_1[1] + 0x80))) {
LAB_00101218:
        if ((int)(char)this[0x108] != uVar9) {
          return param_1;
        }
        param_1 = param_1 + 1;
      }
      else {
        if ((*(uint *)(this + (ulong)(byte)(param_1[1] + 0x80) * 4 + 0x10c) >> (bVar3 & 0x1f) & 1)
            != uVar9) {
          return param_1;
        }
        param_1 = param_1 + 2;
      }
    }
    bVar1 = param_1[1] + 0x80;
    if (bVar3 < 0xf0) {
      if ((0x3f < bVar1) || (0x3f < (byte)(param_1[2] + 0x80))) goto LAB_00101218;
      uVar4 = uVar4 & 0xf;
      uVar6 = *(uint *)(this + (ulong)bVar1 * 4 + 0x20c) >> (bVar3 & 0xf) & 0x10001;
      if (1 < uVar6) {
        uVar6 = findCodePoint(this,uVar4 << 0xc | (uint)(byte)(param_1[2] + 0x80) | (uint)bVar1 << 6
                              ,*(int *)(this + (long)(int)uVar4 * 4 + 0x30c),
                              *(int *)(this + (long)(int)(uVar4 + 1) * 4 + 0x30c));
        uVar6 = uVar6 & 1;
      }
      if (uVar6 != uVar9) {
        return param_1;
      }
      param_1 = param_1 + 3;
    }
    else {
      if (((0x3f < bVar1) || (0x3f < (byte)(param_1[2] + 0x80))) ||
         (0x3f < (byte)(param_1[3] + 0x80))) goto LAB_00101218;
      uVar4 = (uVar4 - 0xf0) * 0x40000 | (uint)(byte)(param_1[3] + 0x80) | (uint)bVar1 << 0xc |
              (uint)(byte)(param_1[2] + 0x80) << 6;
      if (uVar4 - 0x10000 < 0x100000) {
        uVar4 = findCodePoint(this,uVar4,*(int *)(this + 0x34c),*(int *)(this + 0x350));
        uVar4 = uVar4 & 1;
      }
      else {
        uVar4 = (uint)(char)this[0x108];
      }
      if (uVar9 != uVar4) {
        return param_1;
      }
      param_1 = param_1 + 4;
    }
  } while( true );
}



/* icu_76_godot::BMPSet::spanBackUTF8(unsigned char const*, int, USetSpanCondition) const */

int __thiscall icu_76_godot::BMPSet::spanBackUTF8(BMPSet *this,long param_1,int param_2,int param_4)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int local_2c;
  
  do {
    iVar9 = param_2 + -1;
    pbVar5 = (byte *)(iVar9 + param_1);
    uVar7 = (ulong)*pbVar5;
    if (-1 < (char)*pbVar5) {
      bVar2 = false;
      if (param_4 == 0) {
        do {
          if (this[uVar7 + 8] != (BMPSet)0x0) goto LAB_00101394;
          if (iVar9 == 0) {
            return 0;
          }
          pbVar1 = pbVar5 + -1;
          uVar7 = (ulong)*pbVar1;
          iVar9 = iVar9 + -1;
          pbVar5 = pbVar5 + -1;
          bVar2 = true;
        } while (-1 < (char)*pbVar1);
      }
      else {
        do {
          if (this[uVar7 + 8] == (BMPSet)0x0) {
LAB_00101394:
            if (bVar2) {
              param_2 = iVar9 + 1;
            }
            return param_2;
          }
          if (iVar9 == 0) {
            return 0;
          }
          pbVar1 = pbVar5 + -1;
          uVar7 = (ulong)*pbVar1;
          iVar9 = iVar9 + -1;
          pbVar5 = pbVar5 + -1;
          bVar2 = true;
        } while (-1 < (char)*pbVar1);
      }
    }
    local_2c = iVar9;
    uVar3 = utf8_prevCharSafeBody_76_godot(param_1,0,&local_2c,uVar7,0xfffffffd);
    param_2 = local_2c;
    if ((int)uVar3 < 0x800) {
      uVar4 = *(uint *)(this + (ulong)(uVar3 & 0x3f) * 4 + 0x10c) >>
              ((byte)((int)uVar3 >> 6) & 0x1f) & 1;
    }
    else {
      if ((int)uVar3 < 0x10000) {
        iVar6 = (int)uVar3 >> 0xc;
        uVar4 = *(uint *)(this + (ulong)((int)uVar3 >> 6 & 0x3f) * 4 + 0x20c) >>
                ((byte)iVar6 & 0x1f) & 0x10001;
        if (uVar4 < 2) goto joined_r0x0010148f;
        iVar8 = *(int *)(this + (long)iVar6 * 4 + 0x30c);
        iVar6 = *(int *)(this + (long)(iVar6 + 1) * 4 + 0x30c);
      }
      else {
        iVar6 = *(int *)(this + 0x350);
        iVar8 = *(int *)(this + 0x34c);
      }
      uVar4 = findCodePoint(this,uVar3,iVar8,iVar6);
      uVar4 = uVar4 & 1;
      param_2 = local_2c;
    }
joined_r0x0010148f:
    if (uVar4 != (param_4 != 0)) {
      return iVar9 + 1;
    }
    if (param_2 < 1) {
      return 0;
    }
  } while( true );
}


