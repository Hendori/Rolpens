
/* icu_76_godot::Edits::releaseArray() */

void __thiscall icu_76_godot::Edits::releaseArray(Edits *this)

{
  if (*(Edits **)this != this + 0x1c) {
    uprv_free_76_godot(*(Edits **)this);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Edits::copyArray(icu_76_godot::Edits const&) */

Edits * __thiscall icu_76_godot::Edits::copyArray(Edits *this,Edits *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(this + 0x18)) {
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    return this;
  }
  iVar1 = *(int *)(this + 0xc);
  lVar4 = (long)iVar1;
  if (*(int *)(this + 8) < iVar1) {
    lVar3 = uprv_malloc_76_godot(lVar4 * 2);
    uVar2 = _UNK_00101f68;
    if (lVar3 == 0) {
      *(undefined8 *)(this + 0xc) = __LC0;
      *(undefined8 *)(this + 0x14) = uVar2;
      return this;
    }
    if (*(Edits **)this != this + 0x1c) {
      uprv_free_76_godot();
    }
    iVar1 = *(int *)(this + 0xc);
    lVar4 = (long)iVar1;
    *(long *)this = lVar3;
    *(int *)(this + 8) = iVar1;
  }
  if (iVar1 < 1) {
    return this;
  }
  memcpy(*(void **)this,*(void **)param_1,lVar4 * 2);
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Edits::moveArray(icu_76_godot::Edits&) */

Edits * __thiscall icu_76_godot::Edits::moveArray(Edits *this,Edits *param_1)

{
  int iVar1;
  Edits *pEVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  Edits *pEVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (0 < *(int *)(this + 0x18)) {
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    return this;
  }
  pEVar7 = this + 0x1c;
  if (*(Edits **)this != pEVar7) {
    uprv_free_76_godot();
  }
  uVar5 = _UNK_00101f78;
  uVar4 = __LC1;
  iVar1 = *(int *)(this + 0xc);
  if (100 < iVar1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(Edits **)param_1 = param_1 + 0x1c;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    return this;
  }
  *(Edits **)this = pEVar7;
  *(undefined4 *)(this + 8) = 100;
  if (0 < iVar1) {
    uVar3 = iVar1 * 2;
    pEVar2 = *(Edits **)param_1;
    if (uVar3 < 8) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 != 0) && (this[0x1c] = *pEVar2, (uVar3 & 2) != 0)) {
          *(undefined2 *)(this + (ulong)uVar3 + 0x1a) = *(undefined2 *)(pEVar2 + ((ulong)uVar3 - 2))
          ;
        }
      }
      else {
        *(undefined4 *)(this + 0x1c) = *(undefined4 *)pEVar2;
        *(undefined4 *)(this + (ulong)uVar3 + 0x18) = *(undefined4 *)(pEVar2 + ((ulong)uVar3 - 4));
      }
    }
    else {
      *(undefined8 *)(this + 0x1c) = *(undefined8 *)pEVar2;
      *(undefined8 *)(this + (ulong)uVar3 + 0x14) = *(undefined8 *)(pEVar2 + ((ulong)uVar3 - 8));
      lVar9 = (long)pEVar7 - (long)((ulong)(this + 0x24) & 0xfffffffffffffff8);
      pEVar7 = pEVar2 + -lVar9;
      puVar8 = (undefined8 *)((ulong)(this + 0x24) & 0xfffffffffffffff8);
      for (uVar6 = (ulong)(uVar3 + (int)lVar9 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *(undefined8 *)pEVar7;
        pEVar7 = pEVar7 + ((ulong)bVar10 * -2 + 1) * 8;
        puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
      }
    }
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Edits::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::Edits const&) */

Edits * __thiscall icu_76_godot::Edits::operator=(Edits *this,Edits *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if (this != param_1) {
    auVar1 = *(undefined1 (*) [16])(param_1 + 0xc);
    iVar4 = auVar1._0_4_;
    *(undefined1 (*) [16])(this + 0xc) = auVar1;
    if (0 < auVar1._12_4_) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined8 *)(this + 0xc) = 0;
      return this;
    }
    if (*(int *)(this + 8) < iVar4) {
      lVar3 = uprv_malloc_76_godot((long)iVar4 * 2);
      uVar2 = _UNK_00101f68;
      if (lVar3 == 0) {
        *(undefined8 *)(this + 0xc) = __LC0;
        *(undefined8 *)(this + 0x14) = uVar2;
        return this;
      }
      if (*(Edits **)this != this + 0x1c) {
        uprv_free_76_godot();
      }
      iVar4 = *(int *)(this + 0xc);
      *(long *)this = lVar3;
      *(int *)(this + 8) = iVar4;
    }
    if (0 < iVar4) {
      memcpy(*(void **)this,*(void **)param_1,(long)iVar4 * 2);
      return this;
    }
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Edits::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::Edits&&) */

Edits * __thiscall icu_76_godot::Edits::operator=(Edits *this,Edits *param_1)

{
  undefined1 auVar1 [16];
  Edits *pEVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  Edits *pEVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  int iVar11;
  
  bVar10 = 0;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0xc);
  iVar11 = auVar1._0_4_;
  *(undefined1 (*) [16])(this + 0xc) = auVar1;
  if (0 < auVar1._12_4_) {
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    return this;
  }
  pEVar7 = this + 0x1c;
  if (*(Edits **)this != pEVar7) {
    uprv_free_76_godot();
    iVar11 = *(int *)(this + 0xc);
  }
  uVar5 = _UNK_00101f78;
  uVar4 = __LC1;
  if (100 < iVar11) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(Edits **)param_1 = param_1 + 0x1c;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    return this;
  }
  *(Edits **)this = pEVar7;
  *(undefined4 *)(this + 8) = 100;
  if (0 < iVar11) {
    pEVar2 = *(Edits **)param_1;
    uVar3 = iVar11 * 2;
    if (uVar3 < 8) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 != 0) && (this[0x1c] = *pEVar2, (uVar3 & 2) != 0)) {
          *(undefined2 *)(this + (ulong)uVar3 + 0x1a) = *(undefined2 *)(pEVar2 + ((ulong)uVar3 - 2))
          ;
        }
      }
      else {
        *(undefined4 *)(this + 0x1c) = *(undefined4 *)pEVar2;
        *(undefined4 *)(this + (ulong)uVar3 + 0x18) = *(undefined4 *)(pEVar2 + ((ulong)uVar3 - 4));
      }
    }
    else {
      *(undefined8 *)(this + 0x1c) = *(undefined8 *)pEVar2;
      *(undefined8 *)(this + (ulong)uVar3 + 0x14) = *(undefined8 *)(pEVar2 + ((ulong)uVar3 - 8));
      lVar9 = (long)pEVar7 - (long)((ulong)(this + 0x24) & 0xfffffffffffffff8);
      pEVar7 = pEVar2 + -lVar9;
      puVar8 = (undefined8 *)((ulong)(this + 0x24) & 0xfffffffffffffff8);
      for (uVar6 = (ulong)(uVar3 + (int)lVar9 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *(undefined8 *)pEVar7;
        pEVar7 = pEVar7 + ((ulong)bVar10 * -2 + 1) * 8;
        puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
      }
    }
  }
  return this;
}



/* icu_76_godot::Edits::~Edits() */

void __thiscall icu_76_godot::Edits::~Edits(Edits *this)

{
  if (*(Edits **)this != this + 0x1c) {
    uprv_free_76_godot(*(Edits **)this);
    return;
  }
  return;
}



/* icu_76_godot::Edits::reset() */

void __thiscall icu_76_godot::Edits::reset(Edits *this)

{
  *(undefined1 (*) [16])(this + 0xc) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::Edits::growArray() */

undefined8 __thiscall icu_76_godot::Edits::growArray(Edits *this)

{
  Edits *pEVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(this + 8);
  if (*(Edits **)this == this + 0x1c) {
    iVar4 = 2000;
    iVar3 = 2000 - iVar3;
  }
  else {
    if (iVar3 == 0x7fffffff) goto LAB_0010049b;
    iVar4 = iVar3 * 2;
    if (0x3ffffffe < iVar3) {
      iVar4 = 0x7fffffff;
      iVar3 = 0x7fffffff - iVar3;
    }
  }
  if (4 < iVar3) {
    lVar2 = uprv_malloc_76_godot((long)iVar4 * 2);
    if (lVar2 != 0) {
      pEVar1 = *(Edits **)this;
      __memcpy_chk(lVar2,pEVar1,(long)*(int *)(this + 0xc) * 2,(long)iVar4 * 2);
      if (this + 0x1c != pEVar1) {
        uprv_free_76_godot(pEVar1);
      }
      *(long *)this = lVar2;
      *(int *)(this + 8) = iVar4;
      return 1;
    }
    *(undefined4 *)(this + 0x18) = 7;
    return 0;
  }
LAB_0010049b:
  *(undefined4 *)(this + 0x18) = 8;
  return 0;
}



/* icu_76_godot::Edits::append(int) */

void __thiscall icu_76_godot::Edits::append(Edits *this,int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(this + 0xc);
  if (*(int *)(this + 8) <= iVar1) {
    cVar2 = growArray(this);
    if (cVar2 == '\0') {
      return;
    }
    iVar1 = *(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = iVar1 + 1;
  *(short *)(*(long *)this + (long)iVar1 * 2) = (short)param_1;
  return;
}



/* icu_76_godot::Edits::addUnchanged(int) */

void __thiscall icu_76_godot::Edits::addUnchanged(Edits *this,int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  
  if (0 < *(int *)(this + 0x18)) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x18) = 1;
    return;
  }
  iVar6 = *(int *)(this + 0xc);
  lVar5 = (long)iVar6;
  if (0 < iVar6) {
    puVar1 = (ushort *)(*(long *)this + -2 + (long)iVar6 * 2);
    uVar2 = *puVar1;
    if (uVar2 < 0xfff) {
      iVar6 = 0xfff - (uint)uVar2;
      if (param_1 <= iVar6) {
        *puVar1 = uVar2 + (short)param_1;
        return;
      }
      param_1 = param_1 - iVar6;
      *puVar1 = 0xfff;
    }
  }
  uVar3 = param_1;
  if (0xfff < param_1) {
    do {
      if ((int)lVar5 < *(int *)(this + 8)) {
LAB_001005e0:
        *(int *)(this + 0xc) = (int)lVar5 + 1;
        *(undefined2 *)(*(long *)this + lVar5 * 2) = 0xfff;
      }
      else {
        cVar4 = growArray(this);
        if (cVar4 != '\0') {
          lVar5 = (long)*(int *)(this + 0xc);
          goto LAB_001005e0;
        }
      }
      if ((int)(uVar3 - 0x1000) < 0x1000) goto LAB_00100620;
      lVar5 = (long)*(int *)(this + 0xc);
      uVar3 = uVar3 - 0x1000;
    } while( true );
  }
LAB_0010065c:
  if (*(int *)(this + 8) <= (int)lVar5) {
    cVar4 = growArray(this);
    if (cVar4 == '\0') {
      return;
    }
    lVar5 = (long)*(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = (int)lVar5 + 1;
  *(short *)(*(long *)this + lVar5 * 2) = (short)param_1 + -1;
  return;
LAB_00100620:
  param_1 = param_1 & 0xfff;
  if (param_1 == 0) {
    return;
  }
  lVar5 = (long)*(int *)(this + 0xc);
  goto LAB_0010065c;
}



/* icu_76_godot::Edits::addReplace(int, int) [clone .part.0] */

void __thiscall icu_76_godot::Edits::addReplace(Edits *this,int param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ushort uVar10;
  
  iVar5 = param_2 - param_1;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  if (iVar5 != 0) {
    iVar9 = *(int *)(this + 0x10);
    if (iVar5 < 1) {
      if ((iVar9 < 0) && (iVar5 < -0x80000000 - iVar9)) goto LAB_001006db;
    }
    else if ((-1 < iVar9) && (0x7fffffff - iVar9 < iVar5)) {
LAB_001006db:
      *(undefined4 *)(this + 0x18) = 8;
      return;
    }
    *(int *)(this + 0x10) = iVar5 + iVar9;
  }
  iVar5 = *(int *)(this + 0xc);
  lVar6 = (long)iVar5;
  if ((param_1 - 1U < 6) && (param_2 < 8)) {
    uVar7 = param_1 << 0xc | param_2 << 9;
    if (0 < iVar5) {
      puVar1 = (ushort *)(*(long *)this + -2 + (long)iVar5 * 2);
      uVar2 = *puVar1;
      if (((uVar2 - 0x1000 < 0x5fff) && (uVar7 == (uVar2 & 0xfffffe00))) && ((~uVar2 & 0x1ff) != 0))
      {
        *puVar1 = uVar2 + 1;
        return;
      }
    }
    iVar9 = *(int *)(this + 8);
joined_r0x00100843:
    if (iVar9 <= iVar5) {
      cVar4 = growArray(this);
      if (cVar4 == '\0') {
        return;
      }
      lVar6 = (long)*(int *)(this + 0xc);
    }
    *(int *)(this + 0xc) = (int)lVar6 + 1;
    *(short *)(*(long *)this + lVar6 * 2) = (short)uVar7;
    return;
  }
  iVar9 = *(int *)(this + 8);
  uVar2 = (ushort)param_2;
  if ((param_1 < 0x3d) && (param_2 < 0x3d)) {
    uVar7 = (uint)(ushort)((ushort)(param_1 << 6) | uVar2 | 0x7000);
    goto joined_r0x00100843;
  }
  if (iVar9 - iVar5 < 5) {
    cVar4 = growArray(this);
    if (cVar4 == '\0') {
      return;
    }
    lVar6 = (long)*(int *)(this + 0xc);
  }
  lVar3 = *(long *)this;
  iVar5 = (int)lVar6;
  iVar9 = iVar5 + 1;
  if (param_1 < 0x3d) {
    uVar10 = (ushort)(param_1 << 6) | 0x7000;
  }
  else {
    lVar8 = (long)iVar9;
    uVar10 = (ushort)param_1 | 0x8000;
    puVar1 = (ushort *)(lVar3 + lVar8 * 2);
    if (param_1 < 0x8000) {
      *puVar1 = uVar10;
      iVar9 = iVar5 + 2;
      uVar10 = 0x7f40;
    }
    else {
      iVar9 = iVar5 + 3;
      *puVar1 = (ushort)(param_1 >> 0xf) | 0x8000;
      *(ushort *)(lVar3 + 2 + lVar8 * 2) = uVar10;
      uVar10 = ((short)(param_1 >> 0x1e) + 0x3e) * 0x40 | 0x7000;
    }
    if (param_2 < 0x3d) {
      uVar10 = uVar10 | uVar2;
      goto LAB_0010079f;
    }
  }
  lVar8 = (long)iVar9;
  puVar1 = (ushort *)(lVar3 + lVar8 * 2);
  if (param_2 < 0x8000) {
    *puVar1 = uVar2 | 0x8000;
    iVar9 = iVar9 + 1;
    uVar10 = uVar10 | 0x3d;
  }
  else {
    iVar9 = iVar9 + 2;
    *puVar1 = (ushort)(param_2 >> 0xf) | 0x8000;
    uVar10 = uVar10 | (short)(param_2 >> 0x1e) + 0x3eU;
    *(ushort *)(lVar3 + 2 + lVar8 * 2) = uVar2 | 0x8000;
  }
LAB_0010079f:
  *(ushort *)(lVar3 + lVar6 * 2) = uVar10;
  *(int *)(this + 0xc) = iVar9;
  return;
}



/* icu_76_godot::Edits::addReplace(int, int) */

void __thiscall icu_76_godot::Edits::addReplace(Edits *this,int param_1,int param_2)

{
  if (*(int *)(this + 0x18) < 1) {
    if ((param_1 | param_2) < 0) {
      *(undefined4 *)(this + 0x18) = 1;
      return;
    }
    if ((param_1 | param_2) != 0) {
      addReplace(this,param_1,param_2);
      return;
    }
  }
  return;
}



/* icu_76_godot::Edits::copyErrorTo(UErrorCode&) const */

undefined8 __thiscall icu_76_godot::Edits::copyErrorTo(Edits *this,UErrorCode *param_1)

{
  if (*(int *)param_1 < 1) {
    if (*(int *)(this + 0x18) < 1) {
      return 0;
    }
    *(int *)param_1 = *(int *)(this + 0x18);
  }
  return 1;
}



/* icu_76_godot::Edits::Iterator::Iterator(unsigned short const*, int, signed char, signed char) */

void __thiscall
icu_76_godot::Edits::Iterator::Iterator
          (Iterator *this,undefined8 param_1,undefined4 param_2,Iterator param_4,Iterator param_5)

{
  *(undefined8 *)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = param_4;
  this[0x15] = param_5;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::Edits::Iterator::readLength(int) */

uint __thiscall icu_76_godot::Edits::Iterator::readLength(Iterator *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if (0x3c < param_1) {
    iVar2 = *(int *)(this + 8);
    uVar3 = (uint)*(ushort *)(*(long *)this + (long)iVar2 * 2);
    if (param_1 == 0x3d) {
      *(int *)(this + 8) = iVar2 + 1;
      return uVar3 & 0x7fff;
    }
    uVar1 = *(ushort *)(*(long *)this + 2 + (long)iVar2 * 2);
    *(int *)(this + 8) = iVar2 + 2;
    param_1 = (param_1 & 1U) << 0x1e | (uVar3 & 0x7fff) << 0xf | uVar1 & 0x7fff;
  }
  return param_1;
}



/* icu_76_godot::Edits::Iterator::updateNextIndexes() */

void __thiscall icu_76_godot::Edits::Iterator::updateNextIndexes(Iterator *this)

{
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + *(int *)(this + 0x18);
  if (this[0x17] != (Iterator)0x0) {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + *(int *)(this + 0x1c);
  }
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + *(int *)(this + 0x1c);
  return;
}



/* icu_76_godot::Edits::Iterator::updatePreviousIndexes() */

void __thiscall icu_76_godot::Edits::Iterator::updatePreviousIndexes(Iterator *this)

{
  *(int *)(this + 0x20) = *(int *)(this + 0x20) - *(int *)(this + 0x18);
  if (this[0x17] != (Iterator)0x0) {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) - *(int *)(this + 0x1c);
  }
  *(int *)(this + 0x28) = *(int *)(this + 0x28) - *(int *)(this + 0x1c);
  return;
}



/* icu_76_godot::Edits::Iterator::noNext() */

undefined8 __thiscall icu_76_godot::Edits::Iterator::noNext(Iterator *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  return 0;
}



/* icu_76_godot::Edits::Iterator::next(signed char, UErrorCode&) */

undefined8 __thiscall icu_76_godot::Edits::Iterator::next(Iterator *this,char param_2,int *param_3)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  
  if (0 < *param_3) {
    return 0;
  }
  iVar7 = *(int *)(this + 0x10);
  if ((char)this[0x16] < '\x01') {
    if (this[0x16] == (Iterator)0x0) {
      this[0x16] = (Iterator)0x1;
      goto LAB_00100b13;
    }
    if (0 < iVar7) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      this[0x16] = (Iterator)0x1;
      return 1;
    }
    this[0x16] = (Iterator)0x1;
LAB_00100a70:
    iVar7 = *(int *)(this + 8);
    uVar4 = *(uint *)(this + 0xc);
    if ((int)uVar4 <= iVar7) {
LAB_00100b30:
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined2 *)(this + 0x16) = 0;
      return 0;
    }
  }
  else {
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + *(int *)(this + 0x18);
    if (this[0x17] != (Iterator)0x0) {
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + *(int *)(this + 0x1c);
    }
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + *(int *)(this + 0x1c);
LAB_00100b13:
    if (iVar7 < 1) goto LAB_00100a70;
    if (iVar7 != 1) {
      *(int *)(this + 0x10) = iVar7 + -1;
      return 1;
    }
    iVar7 = *(int *)(this + 8);
    uVar4 = *(uint *)(this + 0xc);
    *(undefined4 *)(this + 0x10) = 0;
    if ((int)uVar4 <= iVar7) goto LAB_00100b30;
  }
  uVar9 = (ulong)uVar4;
  lVar2 = *(long *)this;
  iVar3 = iVar7 + 1;
  *(int *)(this + 8) = iVar3;
  uVar1 = *(ushort *)(lVar2 + (long)iVar7 * 2);
  uVar8 = (uint)uVar1;
  if (uVar1 < 0x1000) {
    iVar7 = uVar1 + 1;
    this[0x17] = (Iterator)0x0;
    *(int *)(this + 0x18) = iVar7;
    if ((int)uVar4 <= iVar3) {
      *(int *)(this + 0x1c) = iVar7;
      if (param_2 == '\0') {
        return 1;
      }
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + iVar7;
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + iVar7;
LAB_00100d04:
      this[0x16] = (Iterator)0x0;
      *(undefined8 *)(this + 0x18) = 0;
      return 0;
    }
    lVar6 = (long)iVar3;
    do {
      uVar8 = (uint)*(ushort *)(lVar2 + lVar6 * 2);
      iVar3 = (int)lVar6;
      if (0xfff < uVar8) break;
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 1 + uVar8;
      lVar6 = lVar6 + 1;
      *(int *)(this + 8) = iVar3;
      *(int *)(this + 0x18) = iVar7;
    } while ((int)lVar6 < (int)uVar4);
    *(int *)(this + 0x1c) = iVar7;
    if (param_2 == '\0') {
      return 1;
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + iVar7;
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + iVar7;
    if ((int)uVar4 <= iVar3) goto LAB_00100d04;
    *(int *)(this + 8) = iVar3 + 1;
  }
  this[0x17] = (Iterator)0x1;
  if (uVar8 < 0x7000) {
    iVar7 = (uVar8 & 0x1ff) + 1;
    uVar4 = (int)uVar8 >> 9 & 7;
    if (this[0x15] != (Iterator)0x0) {
      *(int *)(this + 0x18) = ((int)uVar8 >> 0xc) * iVar7;
      *(uint *)(this + 0x1c) = uVar4 * iVar7;
LAB_00100be0:
      do {
        iVar7 = *(int *)(this + 8);
        while( true ) {
          if ((int)uVar9 <= iVar7) {
            return 1;
          }
          uVar1 = *(ushort *)(lVar2 + (long)iVar7 * 2);
          uVar4 = (uint)uVar1;
          uVar8 = (uint)uVar1;
          if (uVar8 < 0x1000) {
            return 1;
          }
          iVar7 = iVar7 + 1;
          *(int *)(this + 8) = iVar7;
          if (0x6fff < uVar8) break;
          iVar3 = (uVar4 & 0x1ff) + 1;
          *(ulong *)(this + 0x18) =
               CONCAT44((int)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) +
                        ((int)(uint)uVar1 >> 9 & 7U) * iVar3,
                        (int)*(undefined8 *)(this + 0x18) + ((int)(uint)uVar1 >> 0xc) * iVar3);
        }
        iVar7 = readLength(this,(int)uVar8 >> 6 & 0x3f);
        *(int *)(this + 0x18) = *(int *)(this + 0x18) + iVar7;
        iVar7 = readLength(this,uVar4 & 0x3f);
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + iVar7;
      } while( true );
    }
    *(int *)(this + 0x18) = (int)uVar8 >> 0xc;
    *(uint *)(this + 0x1c) = uVar4;
    if (iVar7 != 1) {
      *(int *)(this + 0x10) = iVar7;
    }
  }
  else {
    uVar5 = readLength(this,(int)uVar8 >> 6 & 0x3f);
    *(undefined4 *)(this + 0x18) = uVar5;
    uVar5 = readLength(this,uVar8 & 0x3f);
    *(undefined4 *)(this + 0x1c) = uVar5;
    if (this[0x15] != (Iterator)0x0) goto LAB_00100be0;
  }
  return 1;
}



/* icu_76_godot::Edits::mergeAndAppend(icu_76_godot::Edits const&, icu_76_godot::Edits const&,
   UErrorCode&) */

Edits * __thiscall
icu_76_godot::Edits::mergeAndAppend(Edits *this,Edits *param_1,Edits *param_2,UErrorCode *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    iVar7 = *(int *)(this + 0x18);
    if (iVar7 < 1) {
      local_9c = *(undefined4 *)(param_1 + 0xc);
      local_a8 = *(undefined8 *)param_1;
      local_a0 = 0;
      local_98 = 0;
      uVar9 = 0;
      uVar3 = 0;
      iVar6 = 0;
      local_6c = *(undefined4 *)(param_2 + 0xc);
      iVar7 = 0;
      local_78 = *(undefined8 *)param_2;
      cVar2 = '\x01';
      cVar1 = '\x01';
      local_80 = 0;
      local_70 = 0;
      local_68 = 0;
      local_50 = 0;
      local_90 = (undefined1  [16])0x0;
      local_60 = (undefined1  [16])0x0;
      iVar5 = 0;
      iVar4 = 0;
LAB_00100e18:
      if (iVar5 == 0) goto LAB_00100e95;
LAB_00100e1d:
      if (iVar4 != 0) goto LAB_00100e68;
      do {
        if (cVar1 == '\0') {
LAB_00101100:
          if (iVar5 == 0) {
            if ((uVar3 | uVar9) == 0) {
LAB_00101115:
              if ((*(int *)param_3 < 1) && (0 < *(int *)(this + 0x18))) {
                *(int *)param_3 = *(int *)(this + 0x18);
              }
            }
            else {
              if (*(int *)(this + 0x18) < 1) {
                if (-1 < (int)(uVar3 | uVar9)) {
                  addReplace(this,uVar3,uVar9);
                  goto LAB_00101115;
                }
                *(undefined4 *)(this + 0x18) = 1;
              }
              if (*(int *)param_3 < 1) {
                *(undefined4 *)param_3 = *(undefined4 *)(this + 0x18);
              }
            }
          }
          else {
LAB_00100fa0:
            if (0 < *(int *)param_3) goto LAB_00100d5f;
            iVar7 = *(int *)(this + 0x18);
            if (0 < iVar7) break;
            *(undefined4 *)param_3 = 1;
          }
          goto LAB_00100d5f;
        }
        cVar1 = Iterator::next((Iterator *)&local_a8,0,param_3);
        if (cVar1 == '\0') goto LAB_00101100;
        iVar4 = local_90._4_4_;
        iVar7 = local_90._0_4_;
        if (local_90._4_4_ == 0) {
          uVar3 = uVar3 + local_90._0_4_;
          if ((local_60._0_4_ == iVar5) || (local_68._7_1_ == '\0')) {
            if (*(int *)(this + 0x18) < 1) {
              if ((int)(uVar3 | uVar9) < 0) {
                *(undefined4 *)(this + 0x18) = 1;
              }
              else if ((uVar3 | uVar9) != 0) {
                addReplace(this,uVar3,uVar9);
              }
            }
            uVar9 = 0;
            uVar3 = 0;
          }
          goto LAB_00100e18;
        }
        if (iVar5 == 0) goto LAB_00100fa0;
LAB_00100e68:
        if (local_98._7_1_ == '\0') {
          if (local_68._7_1_ == '\0') {
            if (((uVar3 | uVar9) != 0) && (*(int *)(this + 0x18) < 1)) {
              if ((int)(uVar3 | uVar9) < 0) {
                *(undefined4 *)(this + 0x18) = 1;
              }
              else {
                addReplace(this,uVar3,uVar9);
              }
            }
            iVar4 = iVar6;
            if (iVar7 <= iVar6) {
              iVar4 = iVar7;
            }
            uVar9 = 0;
            addUnchanged(this,iVar4);
            iVar6 = iVar6 - iVar4;
            iVar7 = iVar7 - iVar4;
            uVar3 = 0;
            iVar5 = iVar6;
            iVar4 = iVar7;
            goto LAB_00100e18;
          }
          if (iVar4 < iVar5) {
LAB_00100f5f:
            uVar3 = uVar3 + iVar7;
            uVar9 = uVar9 + iVar6;
            iVar6 = 0;
            iVar5 = iVar5 - iVar4;
            iVar4 = 0;
            goto LAB_00100e18;
          }
          if (*(int *)(this + 0x18) < 1) {
            uVar8 = iVar5 + uVar3 | uVar9 + iVar6;
            if ((int)uVar8 < 0) {
              *(undefined4 *)(this + 0x18) = 1;
            }
            else if (uVar8 != 0) {
              addReplace(this,iVar5 + uVar3,uVar9 + iVar6);
            }
          }
          iVar7 = iVar4 - iVar5;
          uVar9 = 0;
          uVar3 = 0;
          iVar4 = iVar7;
        }
        else {
          uVar8 = uVar3 + iVar7;
          if (local_68._7_1_ == '\0') {
            if (iVar4 <= iVar5) {
              if (*(int *)(this + 0x18) < 1) {
                uVar3 = iVar4 + uVar9 | uVar8;
                if ((int)uVar3 < 0) {
                  *(undefined4 *)(this + 0x18) = 1;
                }
                else if (uVar3 != 0) {
                  addReplace(this,uVar8,iVar4 + uVar9);
                }
              }
              iVar6 = iVar5 - iVar4;
              uVar9 = 0;
              uVar3 = 0;
              iVar5 = iVar6;
              iVar4 = 0;
              goto LAB_00100e18;
            }
          }
          else {
            if (iVar4 == iVar5) {
              if (*(int *)(this + 0x18) < 1) {
                uVar3 = uVar9 + iVar6 | uVar8;
                if ((int)uVar3 < 0) {
                  *(undefined4 *)(this + 0x18) = 1;
                  uVar9 = 0;
                  uVar3 = 0;
                  iVar4 = 0;
                  goto LAB_00100e95;
                }
                if (uVar3 != 0) {
                  addReplace(this,uVar8,uVar9 + iVar6);
                }
              }
              uVar9 = 0;
              uVar3 = 0;
              iVar4 = 0;
              goto LAB_00100e95;
            }
            if (iVar4 < iVar5) goto LAB_00100f5f;
          }
          uVar9 = uVar9 + iVar6;
          iVar7 = 0;
          iVar4 = iVar4 - iVar5;
          uVar3 = uVar8;
        }
LAB_00100e95:
        if (cVar2 != '\0') {
          while( true ) {
            cVar2 = Iterator::next((Iterator *)&local_78,0,param_3);
            if (cVar2 == '\0') break;
            iVar6 = local_60._4_4_;
            iVar5 = local_60._0_4_;
            if (local_60._0_4_ != 0) goto LAB_00100e1d;
            uVar9 = uVar9 + local_60._4_4_;
            if ((iVar4 == 0) || (local_98._7_1_ == '\0')) {
              if (*(int *)(this + 0x18) < 1) {
                if ((int)(uVar9 | uVar3) < 0) {
                  *(undefined4 *)(this + 0x18) = 1;
                }
                else if ((uVar9 | uVar3) != 0) {
                  addReplace(this,uVar3,uVar9);
                }
              }
              uVar9 = 0;
              uVar3 = 0;
            }
          }
        }
        if (iVar4 != 0) goto LAB_00100fa0;
        iVar5 = 0;
        cVar2 = '\0';
      } while( true );
    }
    *(int *)param_3 = iVar7;
  }
LAB_00100d5f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::Edits::Iterator::previous(UErrorCode&) */

undefined8 __thiscall icu_76_godot::Edits::Iterator::previous(Iterator *this,UErrorCode *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  iVar8 = *(int *)(this + 0x10);
  iVar5 = *(int *)(this + 8);
  if (-1 < (char)this[0x16]) {
    if (this[0x16] != (Iterator)0x0) {
      if (0 < iVar8) {
        this[0x16] = (Iterator)0xff;
        *(int *)(this + 8) = iVar5 + -1;
        return 1;
      }
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + *(int *)(this + 0x18);
      if (this[0x17] != (Iterator)0x0) {
        *(int *)(this + 0x24) = *(int *)(this + 0x24) + *(int *)(this + 0x1c);
      }
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + *(int *)(this + 0x1c);
      this[0x16] = (Iterator)0xff;
      goto LAB_001012f8;
    }
    this[0x16] = (Iterator)0xff;
  }
  if (0 < iVar8) {
    if (iVar8 <= (int)(*(ushort *)(*(long *)this + (long)iVar5 * 2) & 0x1ff)) {
      *(int *)(this + 0x10) = iVar8 + 1;
      *(int *)(this + 0x20) = *(int *)(this + 0x20) - *(int *)(this + 0x18);
      if (this[0x17] != (Iterator)0x0) {
        *(int *)(this + 0x24) = *(int *)(this + 0x24) - *(int *)(this + 0x1c);
      }
      *(int *)(this + 0x28) = *(int *)(this + 0x28) - *(int *)(this + 0x1c);
      return 1;
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
LAB_001012f8:
  if (iVar5 < 1) {
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined2 *)(this + 0x16) = 0;
    return 0;
  }
  iVar8 = iVar5 + -1;
  lVar10 = *(long *)this;
  *(int *)(this + 8) = iVar8;
  uVar7 = *(ushort *)(lVar10 + (long)iVar8 * 2);
  uVar2 = (uint)uVar7;
  if (0xfff < uVar2) {
    this[0x17] = (Iterator)0x1;
    uVar1 = (uint)uVar7;
    if (uVar2 < 0x7000) {
      iVar5 = (int)uVar1 >> 0xc;
      uVar2 = (int)uVar1 >> 9 & 7;
      uVar7 = (uVar7 & 0x1ff) + 1;
      if (this[0x15] == (Iterator)0x0) {
        *(int *)(this + 0x18) = iVar5;
        *(uint *)(this + 0x1c) = uVar2;
        if (uVar7 != 1) {
          *(undefined4 *)(this + 0x10) = 1;
        }
        *(uint *)(this + 0x28) = *(int *)(this + 0x28) - uVar2;
        uVar11 = CONCAT44((int)uVar1 >> 9,iVar5) & 0x7ffffffff;
        *(ulong *)(this + 0x20) =
             CONCAT44((int)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) - (int)(uVar11 >> 0x20),
                      (int)*(undefined8 *)(this + 0x20) - (int)uVar11);
        return 1;
      }
      *(uint *)(this + 0x18) = iVar5 * (uint)uVar7;
      *(uint *)(this + 0x1c) = uVar2 * uVar7;
    }
    else {
      lVar9 = (long)(iVar5 + -2);
      if (uVar7 < 0x8000) {
        uVar4 = readLength(this,(int)uVar1 >> 6 & 0x3f);
        *(undefined4 *)(this + 0x18) = uVar4;
        uVar4 = readLength(this,uVar7 & 0x3f);
        *(undefined4 *)(this + 0x1c) = uVar4;
      }
      else {
        do {
          lVar6 = lVar9;
          uVar7 = *(ushort *)(lVar10 + lVar6 * 2);
          uVar2 = (uint)uVar7;
          lVar9 = lVar6 + -1;
        } while (0x7fff < uVar2);
        *(int *)(this + 8) = (int)lVar6 + 1;
        uVar4 = readLength(this,(int)(uint)uVar7 >> 6 & 0x3f);
        *(undefined4 *)(this + 0x18) = uVar4;
        uVar4 = readLength(this,uVar2 & 0x3f);
        *(int *)(this + 8) = (int)lVar6;
        *(undefined4 *)(this + 0x1c) = uVar4;
      }
      if (this[0x15] == (Iterator)0x0) {
        iVar8 = (int)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
        *(int *)(this + 0x28) = *(int *)(this + 0x28) - iVar8;
        *(ulong *)(this + 0x20) =
             CONCAT44((int)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) - iVar8,
                      (int)*(undefined8 *)(this + 0x20) - (int)*(undefined8 *)(this + 0x18));
        return 1;
      }
      iVar8 = *(int *)(this + 8);
    }
    if (0 < iVar8) {
      lVar9 = (long)iVar8;
      do {
        uVar2 = (uint)*(ushort *)(lVar10 + -2 + lVar9 * 2);
        if (uVar2 < 0x1000) break;
        iVar8 = (int)lVar9 + -1;
        *(int *)(this + 8) = iVar8;
        if (uVar2 < 0x7000) {
          iVar8 = (uVar2 & 0x1ff) + 1;
          *(ulong *)(this + 0x18) =
               CONCAT44((int)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) +
                        ((int)uVar2 >> 9 & 7U) * iVar8,
                        (int)*(undefined8 *)(this + 0x18) + ((int)uVar2 >> 0xc) * iVar8);
        }
        else if (uVar2 < 0x8000) {
          *(int *)(this + 8) = (int)lVar9;
          iVar5 = readLength(this,(int)uVar2 >> 6 & 0x3f);
          *(int *)(this + 0x18) = *(int *)(this + 0x18) + iVar5;
          iVar5 = readLength(this,uVar2 & 0x3f);
          *(int *)(this + 8) = iVar8;
          *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + iVar5;
        }
        lVar9 = lVar9 + -1;
      } while (0 < (int)lVar9);
    }
    iVar8 = (int)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
    *(int *)(this + 0x28) = *(int *)(this + 0x28) - iVar8;
    *(ulong *)(this + 0x20) =
         CONCAT44((int)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) - iVar8,
                  (int)*(undefined8 *)(this + 0x20) - (int)*(undefined8 *)(this + 0x18));
    return 1;
  }
  iVar3 = uVar2 + 1;
  this[0x17] = (Iterator)0x0;
  *(int *)(this + 0x18) = iVar3;
  if (iVar8 != 0) {
    lVar9 = (long)(int)(iVar5 - 2U);
    do {
      uVar2 = (uint)*(ushort *)(lVar10 + lVar9 * 2);
      if (0xfff < uVar2) break;
      *(int *)(this + 8) = (int)lVar9;
      iVar3 = iVar3 + 1 + uVar2;
      lVar9 = lVar9 + -1;
      *(int *)(this + 0x18) = iVar3;
    } while (((long)iVar5 + -3) - (ulong)(iVar5 - 2U) != lVar9);
  }
  *(int *)(this + 0x20) = *(int *)(this + 0x20) - iVar3;
  *(int *)(this + 0x28) = *(int *)(this + 0x28) - iVar3;
  *(int *)(this + 0x1c) = iVar3;
  return 1;
}



/* icu_76_godot::Edits::Iterator::findIndex(int, signed char, UErrorCode&) [clone .part.0] */

undefined8 __thiscall
icu_76_godot::Edits::Iterator::findIndex
          (Iterator *this,int param_1,char param_3,UErrorCode *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = *(int *)(this + 0x1c);
  if (param_3 == '\0') {
    iVar4 = *(int *)(this + 0x28);
  }
  else {
    iVar4 = *(int *)(this + 0x20);
    iVar5 = *(int *)(this + 0x18);
  }
  if (param_1 < iVar4) {
    if (iVar4 >> 1 <= param_1) {
      while( true ) {
        do {
          previous(this,param_4);
          if (param_3 == '\0') {
            iVar5 = *(int *)(this + 0x28);
          }
          else {
            iVar5 = *(int *)(this + 0x20);
          }
          if (iVar5 <= param_1) {
            return 0;
          }
          iVar4 = *(int *)(this + 0x10);
        } while (iVar4 < 1);
        iVar6 = *(int *)(this + 0x18);
        iVar7 = *(int *)(this + 0x1c);
        iVar1 = iVar6;
        if (param_3 == '\0') {
          iVar1 = iVar7;
        }
        iVar8 = ((*(ushort *)(*(long *)this + (long)*(int *)(this + 8) * 2) & 0x1ff) + 1) - iVar4;
        iVar9 = (int)*(undefined8 *)(this + 0x20);
        iVar2 = (int)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
        if (iVar5 - iVar8 * iVar1 <= param_1) break;
        *(undefined4 *)(this + 0x10) = 0;
        *(int *)(this + 0x28) = *(int *)(this + 0x28) - iVar7 * iVar8;
        *(ulong *)(this + 0x20) = CONCAT44(iVar2 - iVar7 * iVar8,iVar9 - iVar8 * iVar6);
      }
      iVar5 = ((iVar5 - param_1) + -1) / iVar1 + 1;
      *(int *)(this + 0x10) = iVar4 + iVar5;
      *(int *)(this + 0x28) = *(int *)(this + 0x28) - iVar7 * iVar5;
      *(ulong *)(this + 0x20) = CONCAT44(iVar2 - iVar7 * iVar5,iVar9 - iVar6 * iVar5);
      return 0;
    }
    this[0x16] = (Iterator)0x0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  }
  else if (param_1 < iVar4 + iVar5) {
    return 0;
  }
  while( true ) {
    cVar3 = next(this,0,param_4);
    if (cVar3 == '\0') {
      return 1;
    }
    iVar5 = *(int *)(this + 0x18);
    iVar4 = *(int *)(this + 0x1c);
    if (param_3 == '\0') {
      iVar7 = *(int *)(this + 0x28);
      iVar6 = iVar4;
    }
    else {
      iVar7 = *(int *)(this + 0x20);
      iVar6 = iVar5;
    }
    if (param_1 < iVar7 + iVar6) break;
    iVar1 = *(int *)(this + 0x10);
    if (1 < iVar1) {
      if (param_1 < iVar6 * iVar1 + iVar7) {
        iVar6 = (param_1 - iVar7) / iVar6;
        *(int *)(this + 0x28) = *(int *)(this + 0x28) + iVar4 * iVar6;
        *(int *)(this + 0x10) = iVar1 - iVar6;
        *(ulong *)(this + 0x20) =
             CONCAT44((int)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) + iVar4 * iVar6,
                      (int)*(undefined8 *)(this + 0x20) + iVar5 * iVar6);
        return 0;
      }
      *(undefined4 *)(this + 0x10) = 0;
      *(int *)(this + 0x18) = iVar5 * iVar1;
      *(int *)(this + 0x1c) = iVar4 * iVar1;
    }
  }
  return 0;
}



/* icu_76_godot::Edits::Iterator::findIndex(int, signed char, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::Edits::Iterator::findIndex(Iterator *this,int param_1,char param_3,int *param_4)

{
  undefined8 uVar1;
  
  if ((*param_4 < 1) && (-1 < param_1)) {
    uVar1 = findIndex(this,param_1,(int)param_3);
    return uVar1;
  }
  return 0xffffffff;
}



/* icu_76_godot::Edits::Iterator::destinationIndexFromSourceIndex(int, UErrorCode&) */

int __thiscall
icu_76_godot::Edits::Iterator::destinationIndexFromSourceIndex
          (Iterator *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)param_2) {
    return 0;
  }
  if (-1 < param_1) {
    iVar2 = findIndex(this,param_1,1,param_2);
    if (-1 < iVar2) {
      iVar1 = *(int *)(this + 0x28);
      if (iVar2 != 0) {
        return iVar1;
      }
      if (*(int *)(this + 0x20) == param_1) {
        return iVar1;
      }
      if (this[0x17] == (Iterator)0x0) {
        return iVar1 + (param_1 - *(int *)(this + 0x20));
      }
      return iVar1 + *(int *)(this + 0x1c);
    }
  }
  return 0;
}



/* icu_76_godot::Edits::Iterator::sourceIndexFromDestinationIndex(int, UErrorCode&) */

int __thiscall
icu_76_godot::Edits::Iterator::sourceIndexFromDestinationIndex
          (Iterator *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)param_2) {
    return 0;
  }
  if (-1 < param_1) {
    iVar2 = findIndex(this,param_1,0,param_2);
    if (-1 < iVar2) {
      iVar1 = *(int *)(this + 0x20);
      if (iVar2 != 0) {
        return iVar1;
      }
      if (*(int *)(this + 0x28) == param_1) {
        return iVar1;
      }
      if (this[0x17] == (Iterator)0x0) {
        return iVar1 + (param_1 - *(int *)(this + 0x28));
      }
      return iVar1 + *(int *)(this + 0x18);
    }
  }
  return 0;
}



/* icu_76_godot::Edits::Iterator::toString(icu_76_godot::UnicodeString&) const */

UnicodeString * __thiscall
icu_76_godot::Edits::Iterator::toString(Iterator *this,UnicodeString *param_1)

{
  icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,0x101ee8,0);
  icu_76_godot::ICU_Utility::appendNumber(param_1,*(int *)(this + 0x20),10,1);
  icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,0x101ef6,0);
  icu_76_godot::ICU_Utility::appendNumber
            (param_1,*(int *)(this + 0x18) + *(int *)(this + 0x20),10,1);
  if (this[0x17] == (Iterator)0x0) {
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,0x101f10,0);
  }
  else {
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,0x101efc,0);
  }
  icu_76_godot::ICU_Utility::appendNumber(param_1,*(int *)(this + 0x28),10,1);
  icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,0x101ef6,0);
  icu_76_godot::ICU_Utility::appendNumber
            (param_1,*(int *)(this + 0x1c) + *(int *)(this + 0x28),10,1);
  if (this[0x17] != (Iterator)0x0) {
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,0x101f24,0);
    icu_76_godot::ICU_Utility::appendNumber(param_1,*(int *)(this + 0x24),10,1);
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,0x101ef6,0);
    icu_76_godot::ICU_Utility::appendNumber
              (param_1,*(int *)(this + 0x1c) + *(int *)(this + 0x24),10,1);
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,0x101f36,0);
    return param_1;
  }
  icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,0x101f40,0);
  return param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,int param_1,int param_3)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  if ((0x28 < param_1) && (param_3 < 1)) {
    lVar1 = uprv_malloc_76_godot((long)param_1);
    if (lVar1 != 0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar1;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
    }
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  __src = *(MaybeStackArray **)param_1;
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  *(MaybeStackArray **)this = __src;
  *(int *)(this + 8) = iVar1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return;
  }
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return;
}



/* icu_76_godot::MaybeStackArray<char,
   40>::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::MaybeStackArray<char, 40>&&) */

MaybeStackArray<char,40> * __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator=
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uprv_free_76_godot(*(undefined8 *)this);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  __src = *(MaybeStackArray **)param_1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)this = __src;
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return this;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getCapacity() const */

undefined4 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getCapacity(MaybeStackArray<char,40> *this)

{
  return *(undefined4 *)(this + 8);
}



/* icu_76_godot::MaybeStackArray<char, 40>::getAlias() const */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getAlias(MaybeStackArray<char,40> *this)

{
  return *(undefined8 *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getArrayLimit() const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::getArrayLimit(MaybeStackArray<char,40> *this)

{
  return (long)*(int *)(this + 8) + *(long *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::aliasInstead(char*, int) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::aliasInstead
          (MaybeStackArray<char,40> *this,char *param_1,int param_2)

{
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      *(char **)this = param_1;
      *(int *)(this + 8) = param_2;
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      return;
    }
    uprv_free_76_godot(*(undefined8 *)this);
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    *(char **)this = param_1;
    *(int *)(this + 8) = param_2;
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resize(int, int) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::resize
          (MaybeStackArray<char,40> *this,int param_1,int param_2)

{
  MaybeStackArray<char,40> MVar1;
  long lVar2;
  
  if (0 < param_1) {
    lVar2 = uprv_malloc_76_godot((long)param_1);
    if (lVar2 != 0) {
      if (param_2 < 1) {
        MVar1 = this[0xc];
      }
      else {
        if (*(int *)(this + 8) < param_2) {
          param_2 = *(int *)(this + 8);
        }
        if (param_1 < param_2) {
          param_2 = param_1;
        }
        __memcpy_chk(lVar2,*(undefined8 *)this,(long)param_2,(long)param_1);
        MVar1 = this[0xc];
      }
      if (MVar1 != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar2;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      return lVar2;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::orphanOrClone(int, int&) */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::orphanOrClone
          (MaybeStackArray<char,40> *this,int param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uVar2 = *(undefined8 *)this;
LAB_00101d9f:
    *param_2 = param_1;
    *(MaybeStackArray<char,40> **)this = this + 0xd;
    *(undefined4 *)(this + 8) = 0x28;
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    return uVar2;
  }
  if (0 < param_1) {
    if (*(int *)(this + 8) < param_1) {
      param_1 = *(int *)(this + 8);
    }
    lVar3 = (long)param_1;
    lVar1 = uprv_malloc_76_godot(lVar3);
    if (lVar1 != 0) {
      uVar2 = __memcpy_chk(lVar1,*(undefined8 *)this,lVar3,lVar3);
      goto LAB_00101d9f;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::copyFrom(icu_76_godot::MaybeStackArray<char, 40> const&,
   UErrorCode&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::copyFrom
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1,UErrorCode *param_2)

{
  int iVar1;
  void *__src;
  void *__dest;
  
  if (0 < *(int *)param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    __dest = (void *)uprv_malloc_76_godot((long)iVar1);
    if (__dest != (void *)0x0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(void **)this = __dest;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      __src = *(void **)param_1;
      *(int *)(this + 8) = iVar1;
      memcpy(__dest,__src,(long)iVar1);
      return;
    }
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::releaseArray() */

void __thiscall icu_76_godot::MaybeStackArray<char,40>::releaseArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resetToStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::resetToStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


