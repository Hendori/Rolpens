
/* icu_76_godot::UCharCharacterIterator::getDynamicClassID() const */

undefined1 * icu_76_godot::UCharCharacterIterator::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UCharCharacterIterator::first() */

ulong __thiscall icu_76_godot::UCharCharacterIterator::first(UCharCharacterIterator *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 0x10);
  uVar2 = 0xffffffff;
  *(int *)(this + 0xc) = iVar1;
  if (iVar1 < *(int *)(this + 0x14)) {
    uVar2 = (ulong)*(ushort *)(*(long *)(this + 0x18) + (long)iVar1 * 2);
  }
  return uVar2;
}



/* icu_76_godot::UCharCharacterIterator::firstPostInc() */

ulong __thiscall icu_76_godot::UCharCharacterIterator::firstPostInc(UCharCharacterIterator *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 0x10);
  uVar2 = 0xffffffff;
  *(int *)(this + 0xc) = iVar1;
  if (iVar1 < *(int *)(this + 0x14)) {
    *(int *)(this + 0xc) = iVar1 + 1;
    uVar2 = (ulong)*(ushort *)(*(long *)(this + 0x18) + (long)iVar1 * 2);
  }
  return uVar2;
}



/* icu_76_godot::UCharCharacterIterator::last() */

ulong __thiscall icu_76_godot::UCharCharacterIterator::last(UCharCharacterIterator *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 0x14);
  uVar2 = 0xffffffff;
  *(int *)(this + 0xc) = iVar1;
  if (*(int *)(this + 0x10) < iVar1) {
    *(int *)(this + 0xc) = iVar1 + -1;
    uVar2 = (ulong)*(ushort *)(*(long *)(this + 0x18) + (long)(iVar1 + -1) * 2);
  }
  return uVar2;
}



/* icu_76_godot::UCharCharacterIterator::setIndex(int) */

ulong __thiscall
icu_76_godot::UCharCharacterIterator::setIndex(UCharCharacterIterator *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(this + 0x10);
  iVar1 = *(int *)(this + 0x14);
  if (*(int *)(this + 0x10) <= param_1) {
    if (iVar1 < param_1) {
      *(int *)(this + 0xc) = iVar1;
      return 0xffffffff;
    }
    lVar2 = (long)param_1;
  }
  *(int *)(this + 0xc) = (int)lVar2;
  if (iVar1 <= (int)lVar2) {
    return 0xffffffff;
  }
  return (ulong)*(ushort *)(*(long *)(this + 0x18) + lVar2 * 2);
}



/* icu_76_godot::UCharCharacterIterator::current() const */

ulong __thiscall icu_76_godot::UCharCharacterIterator::current(UCharCharacterIterator *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 0xc);
  uVar2 = 0xffffffff;
  if ((*(int *)(this + 0x10) <= iVar1) && (iVar1 < *(int *)(this + 0x14))) {
    uVar2 = (ulong)*(ushort *)(*(long *)(this + 0x18) + (long)iVar1 * 2);
  }
  return uVar2;
}



/* icu_76_godot::UCharCharacterIterator::next() */

ulong __thiscall icu_76_godot::UCharCharacterIterator::next(UCharCharacterIterator *this)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc) + 1;
  if (iVar2 < *(int *)(this + 0x14)) {
    uVar1 = *(ushort *)(*(long *)(this + 0x18) + (long)iVar2 * 2);
    *(int *)(this + 0xc) = iVar2;
    return (ulong)uVar1;
  }
  *(int *)(this + 0xc) = *(int *)(this + 0x14);
  return 0xffffffff;
}



/* icu_76_godot::UCharCharacterIterator::nextPostInc() */

ulong __thiscall icu_76_godot::UCharCharacterIterator::nextPostInc(UCharCharacterIterator *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 0xc);
  uVar2 = 0xffffffff;
  if (iVar1 < *(int *)(this + 0x14)) {
    *(int *)(this + 0xc) = iVar1 + 1;
    uVar2 = (ulong)*(ushort *)(*(long *)(this + 0x18) + (long)iVar1 * 2);
  }
  return uVar2;
}



/* icu_76_godot::UCharCharacterIterator::hasNext() */

undefined4 __thiscall icu_76_godot::UCharCharacterIterator::hasNext(UCharCharacterIterator *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x14) >> 8),
                  *(int *)(this + 0xc) < *(int *)(this + 0x14));
}



/* icu_76_godot::UCharCharacterIterator::previous() */

ulong __thiscall icu_76_godot::UCharCharacterIterator::previous(UCharCharacterIterator *this)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffff;
  if (*(int *)(this + 0x10) < *(int *)(this + 0xc)) {
    iVar1 = *(int *)(this + 0xc) + -1;
    *(int *)(this + 0xc) = iVar1;
    uVar2 = (ulong)*(ushort *)(*(long *)(this + 0x18) + (long)iVar1 * 2);
  }
  return uVar2;
}



/* icu_76_godot::UCharCharacterIterator::hasPrevious() */

undefined4 __thiscall
icu_76_godot::UCharCharacterIterator::hasPrevious(UCharCharacterIterator *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x10) >> 8),
                  *(int *)(this + 0x10) < *(int *)(this + 0xc));
}



/* icu_76_godot::UCharCharacterIterator::first32() */

uint __thiscall icu_76_godot::UCharCharacterIterator::first32(UCharCharacterIterator *this)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(this + 0x10);
  uVar3 = 0xffff;
  *(int *)(this + 0xc) = iVar2;
  if (iVar2 < *(int *)(this + 0x14)) {
    uVar1 = *(ushort *)(*(long *)(this + 0x18) + (long)iVar2 * 2);
    uVar3 = (uint)uVar1;
    if (((iVar2 + 1 != *(int *)(this + 0x14)) && ((uVar1 & 0xfffffc00) == 0xd800)) &&
       (uVar4 = (uint)*(ushort *)(*(long *)(this + 0x18) + 2 + (long)iVar2 * 2),
       (uVar4 & 0xfffffc00) == 0xdc00)) {
      return uVar4 + 0xfca02400 + (uint)uVar1 * 0x400;
    }
  }
  return uVar3;
}



/* icu_76_godot::UCharCharacterIterator::first32PostInc() */

uint __thiscall icu_76_godot::UCharCharacterIterator::first32PostInc(UCharCharacterIterator *this)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(this + 0x10);
  uVar4 = 0xffff;
  *(int *)(this + 0xc) = iVar3;
  if (iVar3 < *(int *)(this + 0x14)) {
    *(int *)(this + 0xc) = iVar3 + 1;
    uVar1 = *(ushort *)(*(long *)(this + 0x18) + (long)iVar3 * 2);
    uVar4 = (uint)uVar1;
    if ((((uVar1 & 0xfc00) == 0xd800) && (*(int *)(this + 0x14) != iVar3 + 1)) &&
       (uVar2 = *(ushort *)(*(long *)(this + 0x18) + 2 + (long)iVar3 * 2),
       (uVar2 & 0xfc00) == 0xdc00)) {
      *(int *)(this + 0xc) = iVar3 + 2;
      return uVar2 + 0xfca02400 + (uint)uVar1 * 0x400;
    }
  }
  return uVar4;
}



/* icu_76_godot::UCharCharacterIterator::last32() */

uint __thiscall icu_76_godot::UCharCharacterIterator::last32(UCharCharacterIterator *this)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(this + 0x14);
  uVar5 = 0xffff;
  *(int *)(this + 0xc) = iVar4;
  if (*(int *)(this + 0x10) < iVar4) {
    iVar1 = iVar4 + -1;
    *(int *)(this + 0xc) = iVar1;
    uVar2 = *(ushort *)(*(long *)(this + 0x18) + (long)iVar1 * 2);
    uVar5 = (uint)uVar2;
    if ((((uVar2 & 0xfc00) == 0xdc00) && (*(int *)(this + 0x10) < iVar1)) &&
       (uVar3 = *(ushort *)(*(long *)(this + 0x18) + -2 + (long)iVar1 * 2),
       (uVar3 & 0xfc00) == 0xd800)) {
      *(int *)(this + 0xc) = iVar4 + -2;
      uVar5 = uVar2 + 0xfca02400 + (uint)uVar3 * 0x400;
    }
  }
  return uVar5;
}



/* icu_76_godot::UCharCharacterIterator::setIndex32(int) */

uint __thiscall
icu_76_godot::UCharCharacterIterator::setIndex32(UCharCharacterIterator *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  
  iVar1 = *(int *)(this + 0x10);
  iVar2 = *(int *)(this + 0x14);
  if (param_1 < iVar1) {
    param_1 = iVar1;
    if (iVar2 <= iVar1) goto LAB_001003a8;
    lVar5 = *(long *)(this + 0x18);
    uVar7 = *(ushort *)(lVar5 + (long)iVar1 * 2);
    uVar3 = (uint)uVar7;
    uVar7 = uVar7 & 0xfc00;
  }
  else {
    if (iVar2 < param_1) {
      param_1 = iVar2;
    }
    if (iVar2 <= param_1) {
LAB_001003a8:
      *(int *)(this + 0xc) = param_1;
      return 0xffff;
    }
    lVar5 = *(long *)(this + 0x18);
    lVar6 = (long)param_1;
    uVar7 = *(ushort *)(lVar5 + lVar6 * 2);
    uVar3 = (uint)uVar7;
    uVar7 = uVar7 & 0xfc00;
    if ((iVar1 < param_1) && (uVar7 == 0xdc00)) {
      if ((*(ushort *)(lVar5 + -2 + lVar6 * 2) & 0xfc00) != 0xd800) {
        *(int *)(this + 0xc) = param_1;
        return uVar3;
      }
      uVar7 = *(ushort *)(lVar5 + (long)(param_1 + -1) * 2);
      uVar3 = (uint)uVar7;
      *(int *)(this + 0xc) = param_1 + -1;
      if ((uVar7 & 0xfc00) != 0xd800) {
        return uVar3;
      }
      uVar4 = (uint)*(ushort *)(lVar5 + lVar6 * 2);
      goto LAB_001003d8;
    }
  }
  *(int *)(this + 0xc) = param_1;
  if (((param_1 + 1 == iVar2) || (uVar7 != 0xd800)) ||
     (uVar4 = (uint)*(ushort *)(lVar5 + (long)(param_1 + 1) * 2), (uVar4 & 0xfffffc00) != 0xdc00)) {
    return uVar3;
  }
LAB_001003d8:
  return uVar3 * 0x400 + -0x35fdc00 + uVar4;
}



/* icu_76_godot::UCharCharacterIterator::current32() const */

uint __thiscall icu_76_godot::UCharCharacterIterator::current32(UCharCharacterIterator *this)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = *(int *)(this + 0xc);
  uVar6 = 0xffff;
  if ((*(int *)(this + 0x10) <= iVar3) && (iVar3 < *(int *)(this + 0x14))) {
    lVar4 = *(long *)(this + 0x18);
    lVar5 = (long)iVar3 * 2;
    uVar1 = *(ushort *)(lVar4 + (long)iVar3 * 2);
    uVar6 = (uint)uVar1;
    if ((uVar1 & 0xf800) == 0xd800) {
      if ((uVar1 & 0x400) == 0) {
        if ((*(int *)(this + 0x14) != iVar3 + 1) &&
           (uVar7 = (uint)*(ushort *)(lVar4 + 2 + lVar5), (uVar7 & 0xfffffc00) == 0xdc00)) {
          return uVar7 + 0xfca02400 + (uint)uVar1 * 0x400;
        }
      }
      else if ((*(int *)(this + 0x10) < iVar3) &&
              (uVar2 = *(ushort *)(lVar4 + -2 + lVar5), (uVar2 & 0xfc00) == 0xd800)) {
        return uVar1 + 0xfca02400 + (uint)uVar2 * 0x400;
      }
    }
  }
  return uVar6;
}



/* icu_76_godot::UCharCharacterIterator::next32() */

uint __thiscall icu_76_godot::UCharCharacterIterator::next32(UCharCharacterIterator *this)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = *(int *)(this + 0xc);
  iVar3 = *(int *)(this + 0x14);
  if (iVar2 < iVar3) {
    lVar4 = *(long *)(this + 0x18);
    iVar6 = iVar2 + 1;
    *(int *)(this + 0xc) = iVar6;
    if ((((*(ushort *)(lVar4 + (long)iVar2 * 2) & 0xfc00) == 0xd800) && (iVar3 != iVar6)) &&
       ((*(ushort *)(lVar4 + 2 + (long)iVar2 * 2) & 0xfc00) == 0xdc00)) {
      iVar6 = iVar2 + 2;
      *(int *)(this + 0xc) = iVar6;
    }
    if (iVar6 < iVar3) {
      uVar1 = *(ushort *)(lVar4 + (long)iVar6 * 2);
      uVar5 = (uint)uVar1;
      if (iVar6 + 1 == iVar3) {
        return uVar5;
      }
      if ((uVar1 & 0xfffffc00) != 0xd800) {
        return uVar5;
      }
      uVar7 = (uint)*(ushort *)(lVar4 + 2 + (long)iVar6 * 2);
      if ((uVar7 & 0xfffffc00) != 0xdc00) {
        return uVar5;
      }
      return uVar7 + 0xfca02400 + (uint)uVar1 * 0x400;
    }
  }
  *(int *)(this + 0xc) = iVar3;
  return 0xffff;
}



/* icu_76_godot::UCharCharacterIterator::next32PostInc() */

uint __thiscall icu_76_godot::UCharCharacterIterator::next32PostInc(UCharCharacterIterator *this)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(this + 0xc);
  uVar4 = 0xffff;
  if (iVar3 < *(int *)(this + 0x14)) {
    *(int *)(this + 0xc) = iVar3 + 1;
    uVar1 = *(ushort *)(*(long *)(this + 0x18) + (long)iVar3 * 2);
    uVar4 = (uint)uVar1;
    if ((((uVar1 & 0xfc00) == 0xd800) && (*(int *)(this + 0x14) != iVar3 + 1)) &&
       (uVar2 = *(ushort *)(*(long *)(this + 0x18) + 2 + (long)iVar3 * 2),
       (uVar2 & 0xfc00) == 0xdc00)) {
      *(int *)(this + 0xc) = iVar3 + 2;
      return uVar2 + 0xfca02400 + (uint)uVar1 * 0x400;
    }
  }
  return uVar4;
}



/* icu_76_godot::UCharCharacterIterator::previous32() */

uint __thiscall icu_76_godot::UCharCharacterIterator::previous32(UCharCharacterIterator *this)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(this + 0xc);
  uVar5 = 0xffff;
  if (*(int *)(this + 0x10) < iVar4) {
    iVar1 = iVar4 + -1;
    *(int *)(this + 0xc) = iVar1;
    uVar2 = *(ushort *)(*(long *)(this + 0x18) + (long)iVar1 * 2);
    uVar5 = (uint)uVar2;
    if ((((uVar2 & 0xfc00) == 0xdc00) && (*(int *)(this + 0x10) < iVar1)) &&
       (uVar3 = *(ushort *)(*(long *)(this + 0x18) + -2 + (long)iVar1 * 2),
       (uVar3 & 0xfc00) == 0xd800)) {
      *(int *)(this + 0xc) = iVar4 + -2;
      return uVar2 + 0xfca02400 + (uint)uVar3 * 0x400;
    }
  }
  return uVar5;
}



/* icu_76_godot::UCharCharacterIterator::move(int, icu_76_godot::CharacterIterator::EOrigin) */

int __thiscall
icu_76_godot::UCharCharacterIterator::move(UCharCharacterIterator *this,int param_1,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10);
  if (param_3 == 1) {
    param_1 = *(int *)(this + 0xc) + param_1;
    *(int *)(this + 0xc) = param_1;
  }
  else if (param_3 == 2) {
    param_1 = *(int *)(this + 0x14) + param_1;
    *(int *)(this + 0xc) = param_1;
  }
  else if (param_3 == 0) {
    param_1 = param_1 + iVar1;
    *(int *)(this + 0xc) = param_1;
  }
  else {
    param_1 = *(int *)(this + 0xc);
  }
  if (iVar1 <= param_1) {
    iVar1 = *(int *)(this + 0x14);
    if (iVar1 < param_1) {
      *(int *)(this + 0xc) = iVar1;
      param_1 = iVar1;
    }
    return param_1;
  }
  *(int *)(this + 0xc) = iVar1;
  return iVar1;
}



/* icu_76_godot::UCharCharacterIterator::move32(int, icu_76_godot::CharacterIterator::EOrigin) */

int __thiscall
icu_76_godot::UCharCharacterIterator::move32(UCharCharacterIterator *this,int param_1,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if (param_3 == 1) {
    iVar4 = *(int *)(this + 0xc);
    if (param_1 < 1) {
      param_1 = -param_1;
      if (param_1 != 0) {
        do {
          if (iVar4 <= *(int *)(this + 0x10)) {
            return iVar4;
          }
          iVar3 = iVar4 + -1;
          *(int *)(this + 0xc) = iVar3;
          if ((((*(ushort *)(*(long *)(this + 0x18) + (long)iVar3 * 2) & 0xfc00) == 0xdc00) &&
              (*(int *)(this + 0x10) < iVar3)) &&
             ((*(ushort *)(*(long *)(this + 0x18) + -2 + (long)iVar3 * 2) & 0xfc00) == 0xd800)) {
            iVar3 = iVar4 + -2;
            *(int *)(this + 0xc) = iVar3;
          }
          param_1 = param_1 + -1;
          iVar4 = iVar3;
        } while (param_1 != 0);
        return iVar3;
      }
    }
    else {
      iVar3 = *(int *)(this + 0x14);
      if (iVar4 < iVar3) goto LAB_0010072b;
      while (iVar3 < 0) {
        lVar5 = *(long *)(this + 0x18);
        uVar1 = *(ushort *)(lVar5 + (long)iVar4 * 2);
        iVar2 = iVar4;
        if (uVar1 == 0) {
          return iVar4;
        }
        while( true ) {
          iVar4 = iVar2 + 1;
          *(int *)(this + 0xc) = iVar4;
          if ((((uVar1 & 0xfc00) == 0xd800) && (iVar4 != iVar3)) &&
             ((*(ushort *)(lVar5 + (long)iVar4 * 2) & 0xfc00) == 0xdc00)) {
            iVar4 = iVar2 + 2;
            *(int *)(this + 0xc) = iVar4;
          }
          param_1 = param_1 + -1;
          if (param_1 == 0) {
            return iVar4;
          }
          if (iVar3 <= iVar4) break;
LAB_0010072b:
          lVar5 = *(long *)(this + 0x18);
          uVar1 = *(ushort *)(lVar5 + (long)iVar4 * 2);
          iVar2 = iVar4;
        }
      }
    }
  }
  else if (param_3 == 2) {
    iVar4 = *(int *)(this + 0x14);
    *(int *)(this + 0xc) = iVar4;
    if (param_1 < 0) {
      param_1 = -param_1;
      while (*(int *)(this + 0x10) < iVar4) {
        iVar3 = iVar4 + -1;
        *(int *)(this + 0xc) = iVar3;
        if ((((*(ushort *)(*(long *)(this + 0x18) + (long)iVar3 * 2) & 0xfc00) == 0xdc00) &&
            (*(int *)(this + 0x10) < iVar3)) &&
           ((*(ushort *)(*(long *)(this + 0x18) + -2 + (long)iVar3 * 2) & 0xfc00) == 0xd800)) {
          iVar3 = iVar4 + -2;
          *(int *)(this + 0xc) = iVar3;
        }
        param_1 = param_1 + -1;
        iVar4 = iVar3;
        if (param_1 == 0) {
          return iVar3;
        }
      }
    }
  }
  else {
    if (param_3 != 0) {
      return *(int *)(this + 0xc);
    }
    iVar4 = *(int *)(this + 0x10);
    *(int *)(this + 0xc) = iVar4;
    if (0 < param_1) {
      iVar3 = *(int *)(this + 0x14);
      iVar2 = iVar4;
      if (iVar4 < iVar3) goto LAB_0010079f;
      while (iVar3 < 0) {
        lVar5 = *(long *)(this + 0x18);
        uVar1 = *(ushort *)(lVar5 + (long)iVar4 * 2);
        iVar2 = iVar4;
        if (uVar1 == 0) {
          return iVar4;
        }
        while( true ) {
          iVar4 = iVar2 + 1;
          *(int *)(this + 0xc) = iVar4;
          if ((((uVar1 & 0xfc00) == 0xd800) && (iVar4 != iVar3)) &&
             ((*(ushort *)(lVar5 + (long)iVar4 * 2) & 0xfc00) == 0xdc00)) {
            iVar4 = iVar2 + 2;
            *(int *)(this + 0xc) = iVar4;
          }
          param_1 = param_1 + -1;
          if (param_1 == 0) {
            return iVar4;
          }
          iVar2 = iVar4;
          if (iVar3 <= iVar4) break;
LAB_0010079f:
          lVar5 = *(long *)(this + 0x18);
          uVar1 = *(ushort *)(lVar5 + (long)iVar2 * 2);
        }
      }
    }
  }
  return iVar4;
}



/* icu_76_godot::UCharCharacterIterator::~UCharCharacterIterator() */

void __thiscall
icu_76_godot::UCharCharacterIterator::~UCharCharacterIterator(UCharCharacterIterator *this)

{
  *(undefined ***)this = &PTR__UCharCharacterIterator_00100d18;
  icu_76_godot::CharacterIterator::~CharacterIterator((CharacterIterator *)this);
  return;
}



/* icu_76_godot::UCharCharacterIterator::~UCharCharacterIterator() */

void __thiscall
icu_76_godot::UCharCharacterIterator::~UCharCharacterIterator(UCharCharacterIterator *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UCharCharacterIterator_00100d18;
  icu_76_godot::CharacterIterator::~CharacterIterator((CharacterIterator *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UCharCharacterIterator::hashCode() const */

uint __thiscall icu_76_godot::UCharCharacterIterator::hashCode(UCharCharacterIterator *this)

{
  uint uVar1;
  
  uVar1 = ustr_hashUCharsN_76_godot(*(undefined8 *)(this + 0x18),*(undefined4 *)(this + 8));
  return *(uint *)(this + 0xc) ^ *(uint *)(this + 0x10) ^ *(uint *)(this + 0x14) ^ uVar1;
}



/* icu_76_godot::UCharCharacterIterator::clone() const */

CharacterIterator * icu_76_godot::UCharCharacterIterator::clone(void)

{
  CharacterIterator *this;
  ulong in_RSI;
  CharacterIterator *in_RDI;
  
  this = (CharacterIterator *)icu_76_godot::UMemory::operator_new((UMemory *)0x20,in_RSI);
  if (this != (CharacterIterator *)0x0) {
    icu_76_godot::CharacterIterator::CharacterIterator(this,in_RDI);
    *(undefined ***)this = &PTR__UCharCharacterIterator_00100d18;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(in_RDI + 0x18);
  }
  return this;
}



/* icu_76_godot::UCharCharacterIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::ForwardCharacterIterator
   const&) const */

bool __thiscall
icu_76_godot::UCharCharacterIterator::operator==
          (UCharCharacterIterator *this,ForwardCharacterIterator *param_1)

{
  char *__s1;
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  if (this == (UCharCharacterIterator *)param_1) {
    return true;
  }
  __s1 = *(char **)(*(long *)(*(long *)this + -8) + 8);
  pcVar1 = *(char **)(*(long *)(*(long *)param_1 + -8) + 8);
  if (__s1 != pcVar1) {
    if (*__s1 == '*') {
      return false;
    }
    iVar2 = strcmp(__s1,pcVar1 + (*pcVar1 == '*'));
    if (iVar2 != 0) {
      return false;
    }
  }
  bVar3 = false;
  if ((*(long *)(this + 0x18) == *(long *)(param_1 + 0x18)) &&
     (bVar3 = false, *(long *)(this + 8) == *(long *)(param_1 + 8))) {
    bVar3 = *(long *)(this + 0x10) == *(long *)(param_1 + 0x10);
  }
  return bVar3;
}



/* icu_76_godot::UCharCharacterIterator::getStaticClassID() */

undefined1 * icu_76_godot::UCharCharacterIterator::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UCharCharacterIterator::UCharCharacterIterator() */

void __thiscall
icu_76_godot::UCharCharacterIterator::UCharCharacterIterator(UCharCharacterIterator *this)

{
  icu_76_godot::CharacterIterator::CharacterIterator((CharacterIterator *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__UCharCharacterIterator_00100d18;
  return;
}



/* icu_76_godot::UCharCharacterIterator::UCharCharacterIterator(icu_76_godot::ConstChar16Ptr, int)
    */

void __thiscall
icu_76_godot::UCharCharacterIterator::UCharCharacterIterator
          (UCharCharacterIterator *this,long *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*param_2 != 0) && (iVar1 = param_3, param_3 < 0)) {
    iVar1 = u_strlen_76_godot();
  }
  icu_76_godot::CharacterIterator::CharacterIterator((CharacterIterator *)this,iVar1);
  *(undefined ***)this = &PTR__UCharCharacterIterator_00100d18;
  *(long *)(this + 0x18) = *param_2;
  return;
}



/* icu_76_godot::UCharCharacterIterator::UCharCharacterIterator(icu_76_godot::ConstChar16Ptr, int,
   int) */

void __thiscall
icu_76_godot::UCharCharacterIterator::UCharCharacterIterator
          (UCharCharacterIterator *this,long *param_2,int param_3,int param_4)

{
  if (*param_2 == 0) {
    param_3 = 0;
  }
  else if (param_3 < 0) {
    param_3 = u_strlen_76_godot();
  }
  icu_76_godot::CharacterIterator::CharacterIterator((CharacterIterator *)this,param_3,param_4);
  *(undefined ***)this = &PTR__UCharCharacterIterator_00100d18;
  *(long *)(this + 0x18) = *param_2;
  return;
}



/* icu_76_godot::UCharCharacterIterator::UCharCharacterIterator(icu_76_godot::ConstChar16Ptr, int,
   int, int, int) */

void __thiscall
icu_76_godot::UCharCharacterIterator::UCharCharacterIterator
          (UCharCharacterIterator *this,long *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  if (*param_2 == 0) {
    param_3 = 0;
  }
  else if (param_3 < 0) {
    param_3 = u_strlen_76_godot();
  }
  icu_76_godot::CharacterIterator::CharacterIterator
            ((CharacterIterator *)this,param_3,param_4,param_5,param_6);
  *(undefined ***)this = &PTR__UCharCharacterIterator_00100d18;
  *(long *)(this + 0x18) = *param_2;
  return;
}



/* icu_76_godot::UCharCharacterIterator::UCharCharacterIterator(icu_76_godot::UCharCharacterIterator
   const&) */

void __thiscall
icu_76_godot::UCharCharacterIterator::UCharCharacterIterator
          (UCharCharacterIterator *this,UCharCharacterIterator *param_1)

{
  icu_76_godot::CharacterIterator::CharacterIterator
            ((CharacterIterator *)this,(CharacterIterator *)param_1);
  *(undefined ***)this = &PTR__UCharCharacterIterator_00100d18;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* icu_76_godot::UCharCharacterIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UCharCharacterIterator
   const&) */

UCharCharacterIterator * __thiscall
icu_76_godot::UCharCharacterIterator::operator=
          (UCharCharacterIterator *this,UCharCharacterIterator *param_1)

{
  icu_76_godot::CharacterIterator::operator=((CharacterIterator *)this,(CharacterIterator *)param_1)
  ;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return this;
}



/* icu_76_godot::UCharCharacterIterator::setText(icu_76_godot::ConstChar16Ptr, int) */

void __thiscall
icu_76_godot::UCharCharacterIterator::setText
          (UCharCharacterIterator *this,long *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  *(undefined8 *)(this + 0xc) = 0;
  if (param_3 < 0) {
    param_3 = 0;
  }
  *(long *)(this + 0x18) = lVar1;
  if (lVar1 == 0) {
    param_3 = 0;
  }
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0x14) = param_3;
  return;
}



/* icu_76_godot::UCharCharacterIterator::getText(icu_76_godot::UnicodeString&) */

void __thiscall
icu_76_godot::UCharCharacterIterator::getText(UCharCharacterIterator *this,UnicodeString *param_1)

{
  long in_FS_OFFSET;
  UnicodeString aUStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeString::UnicodeString
            (aUStack_68,*(wchar16 **)(this + 0x18),*(int *)(this + 8));
  icu_76_godot::UnicodeString::operator=(param_1,aUStack_68);
  icu_76_godot::UnicodeString::~UnicodeString(aUStack_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


