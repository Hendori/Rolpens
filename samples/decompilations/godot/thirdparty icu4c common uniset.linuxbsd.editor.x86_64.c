
/* icu_76_godot::UnicodeSet::getDynamicClassID() const */

undefined1 * icu_76_godot::UnicodeSet::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UnicodeSet::hashCode() const */

int __thiscall icu_76_godot::UnicodeSet::hashCode(UnicodeSet *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(this + 0x1c);
  if (0 < iVar1) {
    lVar2 = (long)iVar1;
    piVar3 = *(int **)(this + 0x10);
    do {
      piVar4 = piVar3 + 1;
      iVar1 = iVar1 * 0xf4243 + *piVar3;
      piVar3 = piVar4;
    } while (piVar4 != *(int **)(this + 0x10) + lVar2);
  }
  return iVar1;
}



/* icu_76_godot::UnicodeSet::size() const */

int __thiscall icu_76_godot::UnicodeSet::size(UnicodeSet *this)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(this + 0x1c) < 2) {
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = (iVar1 + *(int *)(*(long *)(this + 0x10) + 4 + lVar2 * 8)) -
              *(int *)(*(long *)(this + 0x10) + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(this + 0x1c) / 2);
  }
  if (*(long *)(this + 0x50) != 0) {
    iVar1 = iVar1 + *(int *)(*(long *)(this + 0x50) + 8);
  }
  return iVar1;
}



/* icu_76_godot::UnicodeSet::isEmpty() const */

undefined4 __thiscall icu_76_godot::UnicodeSet::isEmpty(UnicodeSet *this)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 0x1c) == 1) {
    uVar2 = 1;
    if (*(long *)(this + 0x50) != 0) {
      iVar1 = *(int *)(*(long *)(this + 0x50) + 8);
      return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
    }
  }
  return uVar2;
}



/* icu_76_godot::UnicodeSet::getRangeCount() const */

int __thiscall icu_76_godot::UnicodeSet::getRangeCount(UnicodeSet *this)

{
  return *(int *)(this + 0x1c) / 2;
}



/* icu_76_godot::UnicodeSet::getRangeStart(int) const */

undefined4 __thiscall icu_76_godot::UnicodeSet::getRangeStart(UnicodeSet *this,int param_1)

{
  return *(undefined4 *)(*(long *)(this + 0x10) + (long)(param_1 * 2) * 4);
}



/* icu_76_godot::UnicodeSet::getRangeEnd(int) const */

int __thiscall icu_76_godot::UnicodeSet::getRangeEnd(UnicodeSet *this,int param_1)

{
  return *(int *)(*(long *)(this + 0x10) + 4 + (long)(param_1 * 2) * 4) + -1;
}



/* icu_76_godot::cloneUnicodeString(UElement*, UElement*) */

void icu_76_godot::cloneUnicodeString(UElement *param_1,UElement *param_2)

{
  UnicodeString *this;
  
  this = (UnicodeString *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)param_2);
  if (this != (UnicodeString *)0x0) {
    icu_76_godot::UnicodeString::UnicodeString(this,*(UnicodeString **)param_2);
  }
  *(UnicodeString **)param_1 = this;
  return;
}



/* icu_76_godot::UnicodeSet::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UnicodeSet const&) const */

ulong __thiscall icu_76_godot::UnicodeSet::operator==(UnicodeSet *this,UnicodeSet *param_1)

{
  int iVar1;
  UVector *this_00;
  UVector *pUVar2;
  long lVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(this + 0x1c);
  if (iVar1 != *(int *)(param_1 + 0x1c)) {
    return 0;
  }
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      if (*(int *)(*(long *)(this + 0x10) + lVar3) != *(int *)(*(long *)(param_1 + 0x10) + lVar3)) {
        return 0;
      }
      lVar3 = lVar3 + 4;
    } while ((long)iVar1 * 4 != lVar3);
  }
  this_00 = *(UVector **)(this + 0x50);
  pUVar2 = *(UVector **)(param_1 + 0x50);
  if (this_00 == (UVector *)0x0) {
    if (pUVar2 == (UVector *)0x0) {
      return 1;
    }
  }
  else {
    if (*(int *)(this_00 + 8) != 0) {
      if (pUVar2 == (UVector *)0x0) {
        return 0;
      }
      if (*(int *)(pUVar2 + 8) == 0) {
        return 0;
      }
      uVar4 = icu_76_godot::UVector::operator==(this_00,pUVar2);
      return uVar4;
    }
    if (pUVar2 == (UVector *)0x0) {
      return 1;
    }
  }
  return (ulong)CONCAT31((int3)((uint)*(int *)(pUVar2 + 8) >> 8),*(int *)(pUVar2 + 8) == 0);
}



/* icu_76_godot::UnicodeSet::matchesIndexValue(unsigned char) const */

undefined8 __thiscall icu_76_godot::UnicodeSet::matchesIndexValue(UnicodeSet *this,uchar param_1)

{
  uint uVar1;
  uchar uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (1 < *(int *)(this + 0x1c)) {
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(*(long *)(this + 0x10) + lVar4 * 8);
      uVar3 = *(int *)(*(long *)(this + 0x10) + 4 + lVar4 * 8) - 1;
      uVar6 = uVar1 & 0xff;
      uVar7 = (uint)param_1;
      if ((uVar1 ^ uVar3) < 0x100) {
        if (uVar6 <= uVar7) goto LAB_00100235;
      }
      else {
        if (uVar6 <= uVar7) {
          return 1;
        }
LAB_00100235:
        if (uVar7 <= (uVar3 & 0xff)) {
          return 1;
        }
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(this + 0x1c) / 2);
  }
  lVar4 = *(long *)(this + 0x50);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 8))) {
    iVar5 = 0;
    do {
      lVar4 = icu_76_godot::UVector::elementAt((int)lVar4);
      if ((*(ushort *)(lVar4 + 8) >> 5 != 0) &&
         (uVar2 = icu_76_godot::UnicodeString::char32At((int)lVar4), uVar2 == param_1)) {
        return 1;
      }
      lVar4 = *(long *)(this + 0x50);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar4 + 8));
  }
  return 0;
}



/* non-virtual thunk to icu_76_godot::UnicodeSet::matchesIndexValue(unsigned char) const */

void __thiscall icu_76_godot::UnicodeSet::matchesIndexValue(UnicodeSet *this,uchar param_1)

{
  matchesIndexValue(this + -8,param_1);
  return;
}



/* icu_76_godot::compareUnicodeString(UElement, UElement) */

int icu_76_godot::compareUnicodeString(long param_1,long param_2)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    sVar2 = *(short *)(param_1 + 8);
    iVar6 = *(int *)(param_2 + 0xc);
  }
  else {
    sVar2 = *(short *)(param_1 + 8);
    iVar6 = (int)((short)uVar1 >> 5);
  }
  if (sVar2 < 0) {
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar4 = (uint)(sVar2 >> 5);
  }
  if ((uVar1 & 1) != 0) {
    return (int)(char)(~(byte)sVar2 & 1);
  }
  iVar5 = 0;
  if (iVar6 < 0) {
    iVar5 = iVar6;
  }
  iVar6 = (int)param_2 + 10;
  if ((uVar1 & 2) == 0) {
    iVar6 = (int)*(undefined8 *)(param_2 + 0x18);
  }
  cVar3 = icu_76_godot::UnicodeString::doCompare((int)param_1,0,(wchar16 *)(ulong)uVar4,iVar6,iVar5)
  ;
  return (int)cVar3;
}



/* icu_76_godot::UnicodeSet::compact() */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::compact(UnicodeSet *this)

{
  UnicodeSet *__dest;
  int iVar1;
  UnicodeSet *__src;
  long *plVar2;
  long lVar3;
  
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    __dest = this + 0x60;
    if (*(UnicodeSet **)(this + 0x30) != __dest) {
      uprv_free_76_godot();
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined4 *)(this + 0x38) = 0;
    }
    __src = *(UnicodeSet **)(this + 0x10);
    if (__dest != __src) {
      iVar1 = *(int *)(this + 0x1c);
      if (iVar1 < 0x1a) {
        memcpy(__dest,__src,(long)iVar1 * 4);
        uprv_free_76_godot(__src);
        *(UnicodeSet **)(this + 0x10) = __dest;
        *(undefined4 *)(this + 0x18) = 0x19;
      }
      else if (iVar1 + 7 < *(int *)(this + 0x18)) {
        lVar3 = uprv_realloc_76_godot(__src,(long)iVar1 * 4);
        if (lVar3 != 0) {
          *(long *)(this + 0x10) = lVar3;
          *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x1c);
        }
      }
    }
    plVar2 = *(long **)(this + 0x50);
    if ((plVar2 != (long *)0x0) && ((int)plVar2[1] == 0)) {
      (**(code **)(*plVar2 + 8))();
      *(undefined8 *)(this + 0x50) = 0;
    }
  }
  return this;
}



/* icu_76_godot::UnicodeSet::clear() */

void __thiscall icu_76_godot::UnicodeSet::clear(UnicodeSet *this)

{
  if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) {
    **(undefined4 **)(this + 0x10) = 0x110000;
    *(undefined4 *)(this + 0x1c) = 1;
    if (*(long *)(this + 0x40) != 0) {
      uprv_free_76_godot();
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x48) = 0;
    }
    if (*(long *)(this + 0x50) != 0) {
      icu_76_godot::UVector::removeAllElements();
    }
    this[0x20] = (UnicodeSet)0x0;
    return;
  }
  return;
}



/* icu_76_godot::UnicodeSet::~UnicodeSet() */

void __thiscall icu_76_godot::UnicodeSet::~UnicodeSet(UnicodeSet *this)

{
  UnicodeSetStringSpan *this_00;
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UnicodeSet_00105140;
  *(undefined ***)(this + 8) = &PTR__UnicodeSet_00105258;
  if (*(UnicodeSet **)(this + 0x10) != this + 0x60) {
    uprv_free_76_godot();
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  if (this + 0x60 != *(UnicodeSet **)(this + 0x30)) {
    uprv_free_76_godot();
  }
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  this_00 = *(UnicodeSetStringSpan **)(this + 0x58);
  if (this_00 != (UnicodeSetStringSpan *)0x0) {
    icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(this_00);
    icu_76_godot::UMemory::operator_delete((UMemory *)this_00,in_RSI);
  }
  if (*(long *)(this + 0x40) != 0) {
    uprv_free_76_godot();
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  icu_76_godot::UnicodeFilter::~UnicodeFilter((UnicodeFilter *)this);
  return;
}



/* non-virtual thunk to icu_76_godot::UnicodeSet::~UnicodeSet() */

void __thiscall icu_76_godot::UnicodeSet::~UnicodeSet(UnicodeSet *this)

{
  ~UnicodeSet(this + -8);
  return;
}



/* icu_76_godot::UnicodeSet::~UnicodeSet() */

void __thiscall icu_76_godot::UnicodeSet::~UnicodeSet(UnicodeSet *this)

{
  void *in_RSI;
  
  ~UnicodeSet(this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* non-virtual thunk to icu_76_godot::UnicodeSet::~UnicodeSet() */

void __thiscall icu_76_godot::UnicodeSet::~UnicodeSet(UnicodeSet *this)

{
  void *in_RSI;
  
  ~UnicodeSet(this + -8);
  icu_76_godot::UMemory::operator_delete((UMemory *)(this + -8),in_RSI);
  return;
}



/* icu_76_godot::UnicodeSet::retain(int const*, int, signed char) [clone .part.0] */

void icu_76_godot::UnicodeSet::retain(long param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  
  iVar12 = 1;
  iVar6 = 1;
  piVar2 = *(int **)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x30);
  iVar10 = *param_2;
  uVar11 = 0;
  iVar4 = *piVar2;
  if (param_3 == '\x02') goto LAB_0010067f;
  do {
    if ('\x02' < param_3) {
      if (param_3 == '\x03') goto LAB_00100660;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (param_3 == '\0') goto LAB_00100630;
  } while (param_3 != '\x01');
LAB_00100622:
  bVar15 = SBORROW4(iVar4,iVar10);
  iVar7 = iVar4 - iVar10;
  bVar14 = iVar4 == iVar10;
  if (iVar10 <= iVar4) goto LAB_00100642;
LAB_00100626:
  lVar5 = (long)iVar6;
  iVar6 = iVar6 + 1;
  iVar4 = piVar2[lVar5];
LAB_00100630:
  do {
    bVar15 = SBORROW4(iVar4,iVar10);
    iVar7 = iVar4 - iVar10;
    bVar14 = iVar4 == iVar10;
    if (iVar10 <= iVar4) goto LAB_00100692;
LAB_00100634:
    lVar5 = (long)iVar6;
    iVar6 = iVar6 + 1;
    iVar4 = piVar2[lVar5];
    bVar15 = SBORROW4(iVar4,iVar10);
    iVar7 = iVar4 - iVar10;
    bVar14 = iVar4 == iVar10;
    if (iVar4 < iVar10) goto LAB_00100626;
LAB_00100642:
    if (bVar14 || bVar15 != iVar7 < 0) {
      if (iVar4 != 0x110000) {
        lVar5 = (long)iVar6;
        lVar8 = (long)iVar12;
        iVar6 = iVar6 + 1;
        iVar12 = iVar12 + 1;
        iVar4 = piVar2[lVar5];
        iVar10 = param_2[lVar8];
        goto LAB_0010067f;
      }
LAB_0010079b:
      iVar7 = (int)uVar11 + 1;
      goto LAB_0010079e;
    }
    iVar7 = (int)uVar11;
    uVar11 = (ulong)(iVar7 + 1);
    *(int *)(lVar3 + (long)iVar7 * 4) = iVar10;
    lVar5 = (long)iVar12;
    iVar12 = iVar12 + 1;
    iVar10 = param_2[lVar5];
LAB_00100660:
    iVar7 = (int)uVar11 + 1;
    uVar11 = (ulong)(int)uVar11;
    piVar13 = (int *)(lVar3 + uVar11 * 4);
    bVar15 = SBORROW4(iVar4,iVar10);
    iVar9 = iVar4 - iVar10;
    bVar14 = iVar4 == iVar10;
    if (iVar4 < iVar10) {
      do {
        *piVar13 = iVar4;
        lVar5 = (long)iVar6;
        uVar11 = (ulong)iVar7;
        iVar6 = iVar6 + 1;
        iVar4 = piVar2[lVar5];
LAB_0010067f:
        bVar14 = SBORROW4(iVar4,iVar10);
        iVar7 = iVar4 - iVar10;
        if (iVar10 < iVar4) {
          do {
            lVar5 = (long)iVar12;
            iVar12 = iVar12 + 1;
            iVar10 = param_2[lVar5];
            bVar15 = SBORROW4(iVar4,iVar10);
            iVar7 = iVar4 - iVar10;
            bVar14 = iVar4 == iVar10;
            if (iVar4 < iVar10) goto LAB_00100634;
LAB_00100692:
            if (bVar14 || bVar15 != iVar7 < 0) {
              if (iVar4 == 0x110000) goto LAB_0010079b;
              iVar10 = (int)uVar11;
              uVar11 = (ulong)(iVar10 + 1);
              *(int *)(lVar3 + (long)iVar10 * 4) = iVar4;
              lVar5 = (long)iVar6;
              iVar6 = iVar6 + 1;
              iVar4 = piVar2[lVar5];
              iVar10 = param_2[iVar12];
              iVar12 = iVar12 + 1;
              goto LAB_00100660;
            }
            lVar5 = (long)iVar12;
            iVar12 = iVar12 + 1;
            iVar10 = param_2[lVar5];
            bVar14 = SBORROW4(iVar4,iVar10);
            iVar7 = iVar4 - iVar10;
          } while (iVar10 < iVar4);
        }
        if (bVar14 == iVar7 < 0) {
          if (iVar4 == 0x110000) goto LAB_0010079b;
          lVar5 = (long)iVar6;
          lVar8 = (long)iVar12;
          iVar6 = iVar6 + 1;
          iVar12 = iVar12 + 1;
          iVar4 = piVar2[lVar5];
          iVar10 = param_2[lVar8];
          goto LAB_00100622;
        }
        iVar9 = (int)uVar11;
        *(int *)(lVar3 + (long)iVar9 * 4) = iVar4;
        iVar7 = iVar9 + 2;
        uVar11 = (ulong)(iVar9 + 1);
        iVar4 = piVar2[iVar6];
        iVar6 = iVar6 + 1;
        piVar13 = (int *)(lVar3 + uVar11 * 4);
        bVar15 = SBORROW4(iVar4,iVar10);
        iVar9 = iVar4 - iVar10;
        bVar14 = iVar4 == iVar10;
      } while (iVar4 < iVar10);
    }
    if (!bVar14 && bVar15 == iVar9 < 0) {
      lVar5 = (long)iVar12;
      *piVar13 = iVar10;
      iVar12 = iVar12 + 1;
      iVar10 = param_2[lVar5];
      uVar11 = (ulong)iVar7;
      goto LAB_00100622;
    }
    if (iVar4 == 0x110000) {
LAB_0010079e:
      *(undefined4 *)(lVar3 + uVar11 * 4) = 0x110000;
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      *(long *)(param_1 + 0x10) = lVar3;
      *(int **)(param_1 + 0x30) = piVar2;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = CONCAT44(iVar7,uVar1);
      if (*(long *)(param_1 + 0x40) != 0) {
        uprv_free_76_godot();
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      return;
    }
    *piVar13 = iVar4;
    lVar5 = (long)iVar12;
    iVar12 = iVar12 + 1;
    iVar10 = param_2[lVar5];
    iVar4 = piVar2[iVar6];
    uVar11 = (ulong)iVar7;
    iVar6 = iVar6 + 1;
  } while( true );
}



/* icu_76_godot::UnicodeSet::removeAllStrings() */

void __thiscall icu_76_godot::UnicodeSet::removeAllStrings(UnicodeSet *this)

{
  if ((((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
      (*(long *)(this + 0x50) != 0)) && (*(int *)(*(long *)(this + 0x50) + 8) != 0)) {
    icu_76_godot::UVector::removeAllElements();
    if (*(long *)(this + 0x40) != 0) {
      uprv_free_76_godot();
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x48) = 0;
    }
    return;
  }
  return;
}



/* icu_76_godot::SymbolTable::~SymbolTable() */

void __thiscall icu_76_godot::SymbolTable::~SymbolTable(SymbolTable *this)

{
  return;
}



/* icu_76_godot::SymbolTable::~SymbolTable() */

void __thiscall icu_76_godot::SymbolTable::~SymbolTable(SymbolTable *this)

{
  operator_delete(this,8);
  return;
}



/* icu_76_godot::UnicodeSet::getStaticClassID() */

undefined1 * icu_76_godot::UnicodeSet::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UnicodeSet::hasStrings() const */

undefined4 __thiscall icu_76_godot::UnicodeSet::hasStrings(UnicodeSet *this)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(long *)(this + 0x50) != 0) {
    iVar1 = *(int *)(*(long *)(this + 0x50) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2;
}



/* icu_76_godot::UnicodeSet::stringsSize() const */

undefined4 __thiscall icu_76_godot::UnicodeSet::stringsSize(UnicodeSet *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(this + 0x50) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x50) + 8);
  }
  return uVar1;
}



/* icu_76_godot::UnicodeSet::stringsContains(icu_76_godot::UnicodeString const&) const */

uint __thiscall icu_76_godot::UnicodeSet::stringsContains(UnicodeSet *this,UnicodeString *param_1)

{
  uint uVar1;
  
  if (*(void **)(this + 0x50) != (void *)0x0) {
    uVar1 = icu_76_godot::UVector::indexOf(*(void **)(this + 0x50),(int)param_1);
    return ~uVar1 >> 0x1f;
  }
  return 0;
}



/* icu_76_godot::UnicodeSet::UnicodeSet() */

void __thiscall icu_76_godot::UnicodeSet::UnicodeSet(UnicodeSet *this)

{
  undefined8 uVar1;
  
  this[0x20] = (UnicodeSet)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(UnicodeSet **)(this + 0x10) = this + 0x60;
  uVar1 = _LC0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__UnicodeSet_00105140;
  *(undefined ***)(this + 8) = &PTR__UnicodeSet_00105258;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x60) = 0x110000;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::UnicodeSet::findCodePoint(int) const */

int __thiscall icu_76_godot::UnicodeSet::findCodePoint(UnicodeSet *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(this + 0x10);
  iVar5 = 0;
  if (((*piVar1 <= param_1) && (iVar5 = *(int *)(this + 0x1c) + -1, 0 < iVar5)) &&
     (param_1 < piVar1[(long)iVar5 + -1])) {
    iVar2 = iVar5;
    iVar4 = 0;
    while (iVar5 = iVar2, iVar3 = iVar4 + iVar5 >> 1, iVar4 != iVar3) {
      iVar2 = iVar3;
      if (piVar1[iVar3] <= param_1) {
        iVar2 = iVar5;
        iVar4 = iVar3;
      }
    }
  }
  return iVar5;
}



/* icu_76_godot::UnicodeSet::contains(int) const */

ulong __thiscall icu_76_godot::UnicodeSet::contains(UnicodeSet *this,int param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  plVar1 = *(long **)(this + 0x28);
  while( true ) {
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001009e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(code **)(*plVar1 + 0x10));
      return uVar4;
    }
    lVar2 = *(long *)(this + 0x58);
    if (lVar2 == 0) break;
    this = (UnicodeSet *)(lVar2 + 8);
    plVar1 = *(long **)(lVar2 + 0x30);
  }
  if (0x10ffff < param_1) {
    return 0;
  }
  uVar3 = findCodePoint(this,param_1);
  return (ulong)(uVar3 & 1);
}



/* icu_76_godot::UnicodeSet::span(char16_t const*, int, USetSpanCondition) const [clone .part.0] */

ulong __thiscall
icu_76_godot::UnicodeSet::span(UnicodeSet *this,long param_1,uint param_2,int param_4)

{
  uint uVar1;
  ushort uVar2;
  UVector *pUVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  UnicodeSetStringSpan aUStack_1c8 [252];
  int local_cc;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 0) {
    param_2 = u_strlen_76_godot(param_1);
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(long *)(this + 0x58) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = icu_76_godot::UnicodeSetStringSpan::span
                          (*(long *)(this + 0x58),param_1,param_2,param_4);
        return uVar6;
      }
      goto LAB_00100bf5;
    }
    pUVar3 = *(UVector **)(this + 0x50);
    if ((pUVar3 != (UVector *)0x0) && (*(int *)(pUVar3 + 8) != 0)) {
      icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan
                (aUStack_1c8,this,pUVar3,0x2a - (param_4 == 0));
      if (local_cc != 0) {
        uVar5 = icu_76_godot::UnicodeSetStringSpan::span(aUStack_1c8,param_1,param_2,param_4);
        icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(aUStack_1c8);
        goto LAB_00100b50;
      }
      icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(aUStack_1c8);
    }
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1;
      uVar7 = (uint)*(ushort *)(param_1 + (long)(int)uVar5 * 2);
      if ((((uVar7 & 0xfffffc00) == 0xd800) && (param_2 != uVar1)) &&
         (uVar2 = *(ushort *)(param_1 + 2 + (long)(int)uVar5 * 2), (uVar2 & 0xfc00) == 0xdc00)) {
        uVar1 = uVar5 + 2;
        cVar4 = contains(this,uVar2 + 0xfca02400 + uVar7 * 0x400);
      }
      else {
        cVar4 = contains(this,uVar7);
      }
    } while (((int)cVar4 == (uint)(param_4 != 0)) && (uVar5 = uVar1, (int)uVar1 < (int)param_2));
  }
LAB_00100b50:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar5;
  }
LAB_00100bf5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::contains(int, int) const */

ulong __thiscall icu_76_godot::UnicodeSet::contains(UnicodeSet *this,int param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = findCodePoint(this,param_1);
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar2 = CONCAT71((int7)((ulong)*(long *)(this + 0x10) >> 8),
                     param_2 < *(int *)(*(long *)(this + 0x10) + (long)(int)uVar1 * 4));
  }
  return uVar2 & 0xffffffff;
}



/* icu_76_godot::UnicodeSet::containsAll(icu_76_godot::UnicodeSet const&) const */

bool __thiscall icu_76_godot::UnicodeSet::containsAll(UnicodeSet *this,UnicodeSet *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      uVar3 = findCodePoint(this,*(int *)(lVar5 + lVar4 * 8));
      if (((uVar3 & 1) == 0) ||
         (*(int *)(*(long *)(this + 0x10) + (long)(int)uVar3 * 4) < *(int *)(lVar5 + 4 + lVar4 * 8))
         ) {
        return false;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar1 / 2);
  }
  bVar6 = true;
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 8) != 0)) {
    bVar6 = false;
    if (*(UVector **)(this + 0x50) != (UVector *)0x0) {
      cVar2 = icu_76_godot::UVector::containsAll(*(UVector **)(this + 0x50));
      bVar6 = cVar2 != '\0';
    }
  }
  return bVar6;
}



/* icu_76_godot::UnicodeSet::containsAll(icu_76_godot::UnicodeString const&) const */

bool __thiscall icu_76_godot::UnicodeSet::containsAll(UnicodeSet *this,UnicodeString *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  UnicodeString *pUVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    lVar4 = (long)*(int *)(param_1 + 0xc);
  }
  else {
    lVar4 = (long)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    pUVar5 = param_1 + 10;
    if ((uVar1 & 2) == 0) {
      pUVar5 = *(UnicodeString **)(param_1 + 0x18);
    }
  }
  else {
    pUVar5 = (UnicodeString *)0x0;
  }
  if (((int)lVar4 < 1) || (*(long *)(this + 0x28) == 0)) {
    iVar3 = span(this,pUVar5,lVar4,1);
    sVar2 = *(short *)(param_1 + 8);
  }
  else {
    lVar4 = icu_76_godot::BMPSet::span(*(long *)(this + 0x28),pUVar5,pUVar5 + lVar4 * 2,1);
    sVar2 = *(short *)(param_1 + 8);
    iVar3 = (int)(lVar4 - (long)pUVar5 >> 1);
  }
  if (-1 < sVar2) {
    return sVar2 >> 5 == iVar3;
  }
  return *(int *)(param_1 + 0xc) == iVar3;
}



/* icu_76_godot::UnicodeSet::containsNone(int, int) const */

ulong __thiscall icu_76_godot::UnicodeSet::containsNone(UnicodeSet *this,int param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = findCodePoint(this,param_1);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = CONCAT71((int7)((ulong)*(long *)(this + 0x10) >> 8),
                     param_2 < *(int *)(*(long *)(this + 0x10) + (long)(int)uVar1 * 4));
  }
  return uVar2 & 0xffffffff;
}



/* icu_76_godot::UnicodeSet::containsNone(icu_76_godot::UnicodeSet const&) const */

bool __thiscall icu_76_godot::UnicodeSet::containsNone(UnicodeSet *this,UnicodeSet *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      uVar3 = findCodePoint(this,*(int *)(lVar5 + lVar4 * 8));
      if (((uVar3 & 1) != 0) ||
         (*(int *)(*(long *)(this + 0x10) + (long)(int)uVar3 * 4) < *(int *)(lVar5 + 4 + lVar4 * 8))
         ) {
        return false;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar1 / 2);
  }
  if (((*(UVector **)(this + 0x50) != (UVector *)0x0) && (*(long *)(param_1 + 0x50) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0x50) + 8) != 0)) {
    cVar2 = icu_76_godot::UVector::containsNone(*(UVector **)(this + 0x50));
    return cVar2 != '\0';
  }
  return true;
}



/* icu_76_godot::UnicodeSet::containsNone(icu_76_godot::UnicodeString const&) const */

bool __thiscall icu_76_godot::UnicodeSet::containsNone(UnicodeSet *this,UnicodeString *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  UnicodeString *pUVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    lVar4 = (long)*(int *)(param_1 + 0xc);
  }
  else {
    lVar4 = (long)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    pUVar5 = param_1 + 10;
    if ((uVar1 & 2) == 0) {
      pUVar5 = *(UnicodeString **)(param_1 + 0x18);
    }
  }
  else {
    pUVar5 = (UnicodeString *)0x0;
  }
  if (((int)lVar4 < 1) || (*(long *)(this + 0x28) == 0)) {
    iVar3 = span(this,pUVar5,lVar4,0);
    sVar2 = *(short *)(param_1 + 8);
  }
  else {
    lVar4 = icu_76_godot::BMPSet::span(*(long *)(this + 0x28),pUVar5,pUVar5 + lVar4 * 2,0);
    sVar2 = *(short *)(param_1 + 8);
    iVar3 = (int)(lVar4 - (long)pUVar5 >> 1);
  }
  if (-1 < sVar2) {
    return sVar2 >> 5 == iVar3;
  }
  return *(int *)(param_1 + 0xc) == iVar3;
}



/* icu_76_godot::UnicodeSet::matchRest(icu_76_godot::Replaceable const&, int, int,
   icu_76_godot::UnicodeString const&) */

uint icu_76_godot::UnicodeSet::matchRest
               (Replaceable *param_1,int param_2,int param_3,UnicodeString *param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  UnicodeString *pUVar6;
  int iVar7;
  short sVar8;
  long lVar9;
  
  if (*(short *)(param_4 + 8) < 0) {
    uVar3 = *(uint *)(param_4 + 0xc);
  }
  else {
    uVar3 = (uint)(*(short *)(param_4 + 8) >> 5);
  }
  if (param_2 < param_3) {
    uVar4 = uVar3;
    if (param_3 - param_2 <= (int)uVar3) {
      uVar4 = param_3 - param_2;
    }
    if (1 < (int)uVar4) {
      lVar9 = 2;
      uVar3 = 1;
      do {
        sVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1,param_2 + uVar3);
        uVar1 = *(ushort *)(param_4 + 8);
        if ((short)uVar1 < 0) {
          uVar5 = *(uint *)(param_4 + 0xc);
        }
        else {
          uVar5 = (uint)((short)uVar1 >> 5);
        }
        sVar8 = -1;
        if (uVar3 < uVar5) {
          pUVar6 = param_4 + 10;
          if ((uVar1 & 2) == 0) {
            pUVar6 = *(UnicodeString **)(param_4 + 0x18);
          }
          sVar8 = *(short *)(pUVar6 + lVar9);
        }
        if (sVar2 != sVar8) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        lVar9 = lVar9 + 2;
      } while (uVar4 != uVar3);
    }
  }
  else {
    uVar4 = param_2 - param_3;
    if ((int)uVar3 < param_2 - param_3) {
      uVar4 = uVar3;
    }
    if (1 < (int)uVar4) {
      iVar7 = param_2 + -1;
      lVar9 = (long)(int)uVar3 * 2 + -4;
      do {
        sVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1,iVar7);
        uVar1 = *(ushort *)(param_4 + 8);
        if ((short)uVar1 < 0) {
          uVar5 = *(uint *)(param_4 + 0xc);
        }
        else {
          uVar5 = (uint)((short)uVar1 >> 5);
        }
        sVar8 = -1;
        if ((uVar3 - param_2) + -1 + iVar7 < uVar5) {
          pUVar6 = param_4 + 10;
          if ((uVar1 & 2) == 0) {
            pUVar6 = *(UnicodeString **)(param_4 + 0x18);
          }
          sVar8 = *(short *)(pUVar6 + lVar9);
        }
        if (sVar2 != sVar8) {
          return 0;
        }
        iVar7 = iVar7 + -1;
        lVar9 = lVar9 + -2;
      } while (iVar7 != param_2 - uVar4);
    }
  }
  return uVar4;
}



/* icu_76_godot::UnicodeSet::matches(icu_76_godot::Replaceable const&, int&, int, signed char) */

undefined8 __thiscall
icu_76_godot::UnicodeSet::matches
          (UnicodeSet *this,Replaceable *param_1,int *param_2,int param_3,char param_5)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  UnicodeString *pUVar7;
  UnicodeString *pUVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  short sVar13;
  uint uVar14;
  ushort uVar15;
  int local_48;
  
  iVar2 = *param_2;
  if (iVar2 == param_3) {
    cVar3 = contains(this,0xffff);
    if (cVar3 == '\0') {
      return 0;
    }
    if (param_5 == '\0') {
      return 2;
    }
    return 1;
  }
  if ((*(long *)(this + 0x50) != 0) && (*(int *)(*(long *)(this + 0x50) + 8) != 0)) {
    uVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1,iVar2);
    lVar11 = *(long *)(this + 0x50);
    if (0 < *(int *)(lVar11 + 8)) {
      iVar12 = 0;
      local_48 = 0;
      do {
        pUVar8 = (UnicodeString *)icu_76_godot::UVector::elementAt((int)lVar11);
        uVar1 = *(ushort *)(pUVar8 + 8);
        sVar13 = (short)uVar1 >> 5;
        if (sVar13 != 0) {
          if (iVar2 < param_3) {
            if ((short)uVar1 < 0) {
              uVar14 = *(uint *)(pUVar8 + 0xc);
              uVar10 = 0;
              goto LAB_00101159;
            }
            lVar11 = 0;
LAB_00101169:
            if ((uVar1 & 2) == 0) {
              pUVar7 = *(UnicodeString **)(pUVar8 + 0x18);
            }
            else {
              pUVar7 = pUVar8 + 10;
            }
            uVar15 = *(ushort *)(pUVar7 + lVar11);
          }
          else {
            if ((short)uVar1 < 0) {
              uVar14 = *(uint *)(pUVar8 + 0xc);
              uVar10 = uVar14 - 1;
            }
            else {
              uVar14 = (uint)sVar13;
              uVar10 = (uint)(short)(sVar13 + -1);
            }
LAB_00101159:
            uVar15 = 0xffff;
            if (uVar10 < uVar14) {
              lVar11 = (long)(int)uVar10 * 2;
              goto LAB_00101169;
            }
          }
          if ((uVar4 < uVar15) && (iVar2 < param_3)) {
LAB_0010124d:
            if (local_48 == 0) goto LAB_0010125f;
            iVar12 = *param_2;
            goto LAB_00101320;
          }
          if (uVar4 == uVar15) {
            iVar5 = matchRest(param_1,*param_2,param_3,pUVar8);
            if (param_5 != '\0') {
              iVar6 = *param_2 - param_3;
              if (iVar2 < param_3) {
                iVar6 = param_3 - *param_2;
              }
              if (iVar6 == iVar5) {
                return 1;
              }
            }
            if (*(short *)(pUVar8 + 8) < 0) {
              iVar6 = *(int *)(pUVar8 + 0xc);
            }
            else {
              iVar6 = (int)(*(short *)(pUVar8 + 8) >> 5);
            }
            if (iVar5 == iVar6) {
              if (local_48 < iVar5) {
                local_48 = iVar5;
              }
              if ((iVar5 < local_48) && (iVar2 < param_3)) goto LAB_0010124d;
            }
          }
        }
        lVar11 = *(long *)(this + 0x50);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar11 + 8));
      if (local_48 != 0) {
        iVar12 = *param_2;
        if (param_3 <= iVar2) {
          local_48 = -local_48;
        }
LAB_00101320:
        *param_2 = iVar12 + local_48;
        return 2;
      }
    }
  }
LAB_0010125f:
  uVar9 = icu_76_godot::UnicodeFilter::matches(this,param_1,param_2,param_3,(int)param_5);
  return uVar9;
}



/* non-virtual thunk to icu_76_godot::UnicodeSet::matches(icu_76_godot::Replaceable const&, int&,
   int, signed char) */

void __thiscall icu_76_godot::UnicodeSet::matches(UnicodeSet *this)

{
  matches(this + -8);
  return;
}



/* icu_76_godot::UnicodeSet::indexOf(int) const */

int __thiscall icu_76_godot::UnicodeSet::indexOf(UnicodeSet *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((uint)param_1 < 0x110000) {
    iVar2 = **(int **)(this + 0x10);
    if (iVar2 <= param_1) {
      iVar4 = 0;
      piVar3 = *(int **)(this + 0x10) + 1;
      do {
        if (param_1 < *piVar3) {
          return (param_1 + iVar4) - iVar2;
        }
        iVar1 = *piVar3 - iVar2;
        iVar2 = piVar3[1];
        iVar4 = iVar4 + iVar1;
        piVar3 = piVar3 + 2;
      } while (iVar2 <= param_1);
    }
  }
  return -1;
}



/* icu_76_godot::UnicodeSet::charAt(int) const */

int __thiscall icu_76_godot::UnicodeSet::charAt(UnicodeSet *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((-1 < param_1) && (0 < (int)(*(uint *)(this + 0x1c) & 0xfffffffe))) {
    piVar3 = *(int **)(this + 0x10);
    piVar1 = piVar3 + (ulong)((*(uint *)(this + 0x1c) & 0xfffffffe) - 1 >> 1) * 2 + 2;
    do {
      iVar2 = piVar3[1] - *piVar3;
      if (param_1 < iVar2) {
        return *piVar3 + param_1;
      }
      piVar3 = piVar3 + 2;
      param_1 = param_1 - iVar2;
    } while (piVar3 != piVar1);
  }
  return -1;
}



/* icu_76_godot::UnicodeSet::getSingleCP(icu_76_godot::UnicodeString const&) */

ulong icu_76_godot::UnicodeSet::getSingleCP(UnicodeString *param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 1) goto LAB_00101448;
  }
  else {
    if ((short)uVar1 >> 5 == 1) {
LAB_00101448:
      if ((uVar1 & 2) == 0) {
        return (ulong)**(ushort **)(param_1 + 0x18);
      }
      return (ulong)*(ushort *)(param_1 + 10);
    }
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (iVar2 == 2) {
    uVar3 = icu_76_godot::UnicodeString::char32At((int)param_1);
    if ((int)uVar3 < 0x10000) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  return 0xffffffff;
}



/* icu_76_godot::UnicodeSet::contains(icu_76_godot::UnicodeString const&) const */

ulong __thiscall icu_76_godot::UnicodeSet::contains(UnicodeSet *this,UnicodeString *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = getSingleCP(param_1);
  if (-1 < iVar1) {
    uVar3 = contains(this,iVar1);
    return uVar3;
  }
  uVar3 = 0;
  if (*(void **)(this + 0x50) != (void *)0x0) {
    uVar2 = icu_76_godot::UVector::indexOf(*(void **)(this + 0x50),(int)param_1);
    uVar3 = (ulong)(~uVar2 >> 0x1f);
  }
  return uVar3;
}



/* icu_76_godot::UnicodeSet::getString(int) const */

void icu_76_godot::UnicodeSet::getString(int param_1)

{
  undefined4 in_register_0000003c;
  
  icu_76_godot::UVector::elementAt
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x50));
  return;
}



/* icu_76_godot::UnicodeSet::serialize(unsigned short*, int, UErrorCode&) const */

int __thiscall
icu_76_godot::UnicodeSet::serialize
          (UnicodeSet *this,ushort *param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  
  if (0 < *(int *)param_3) {
    return 0;
  }
  if ((param_2 < 0) || ((0 < param_2 && (param_1 == (ushort *)0x0)))) {
    *(undefined4 *)param_3 = 1;
    return 0;
  }
  iVar6 = *(int *)(this + 0x1c);
  uVar9 = iVar6 - 1;
  if (uVar9 == 0) {
    if (param_2 == 0) {
      *(undefined4 *)param_3 = 0xf;
    }
    else {
      *param_1 = 0;
    }
    return 1;
  }
  piVar10 = *(int **)(this + 0x10);
  if (piVar10[(long)(int)uVar9 + -1] < 0x10000) {
    uVar8 = uVar9;
    if (0x7fff < (int)uVar9) goto LAB_00101630;
joined_r0x00101686:
    if (param_2 < iVar6) {
LAB_00101578:
      *(undefined4 *)param_3 = 0xf;
      return iVar6;
    }
    *param_1 = (ushort)uVar9;
    puVar4 = param_1 + 1;
    puVar2 = param_1;
    if (0 < (int)uVar8) goto LAB_001015cc;
    uVar8 = 0;
  }
  else if (*piVar10 < 0x10000) {
    if (0 < (int)uVar9) {
      uVar8 = 0;
      piVar7 = piVar10;
      do {
        if (0xffff < *piVar7) break;
        uVar8 = uVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar9 != uVar8);
      uVar9 = uVar9 * 2 - uVar8;
      goto LAB_00101592;
    }
    uVar9 = uVar9 * 2;
    puVar4 = param_1 + 1;
    uVar8 = 0;
    *param_1 = (ushort)uVar9;
    iVar6 = uVar9 + 1;
  }
  else {
    uVar9 = uVar9 * 2;
    uVar8 = 0;
LAB_00101592:
    if (0x7fff < (int)uVar9) {
LAB_00101630:
      *(undefined4 *)param_3 = 8;
      return 0;
    }
    if ((int)uVar9 <= (int)uVar8) {
      iVar6 = uVar9 + 1;
      goto joined_r0x00101686;
    }
    iVar6 = uVar9 + 2;
    if (param_2 < iVar6) goto LAB_00101578;
    param_1[1] = (ushort)uVar8;
    puVar4 = param_1 + 2;
    puVar2 = param_1 + 1;
    *param_1 = (ushort)uVar9 | 0x8000;
    if (uVar8 == 0) goto LAB_001015fe;
LAB_001015cc:
    lVar5 = 0;
    do {
      *(short *)((long)puVar2 + lVar5 + 2) = (short)*(undefined4 *)((long)piVar10 + lVar5 * 2);
      lVar5 = lVar5 + 2;
    } while ((long)(int)uVar8 * 2 != lVar5);
    piVar10 = piVar10 + uVar8;
    puVar4 = puVar4 + uVar8;
  }
  if ((int)uVar9 <= (int)uVar8) {
    return iVar6;
  }
LAB_001015fe:
  uVar3 = 0;
  do {
    iVar1 = piVar10[uVar3];
    puVar4[uVar3 * 2 + 1] = (ushort)iVar1;
    puVar4[uVar3 * 2] = (ushort)((uint)iVar1 >> 0x10);
    uVar3 = uVar3 + 1;
  } while (((uVar9 - 1) - uVar8 >> 1) + 1 != uVar3);
  return iVar6;
}



/* icu_76_godot::UnicodeSet::allocateStrings(UErrorCode&) */

undefined8 __thiscall
icu_76_godot::UnicodeSet::allocateStrings(UnicodeSet *this,UErrorCode *param_1)

{
  int iVar1;
  UVector *this_00;
  undefined8 uVar2;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  this_00 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)param_1);
  if (this_00 == (UVector *)0x0) {
    *(undefined8 *)(this + 0x50) = 0;
    uVar2 = 0;
    *(undefined4 *)param_1 = 7;
  }
  else {
    icu_76_godot::UVector::UVector
              (this_00,(_func_void_void_ptr *)&uprv_deleteUObject_76_godot,
               (_func_signed_UElement_UElement *)&uhash_compareUnicodeString_76_godot,1,param_1);
    iVar1 = *(int *)param_1;
    *(UVector **)(this + 0x50) = this_00;
    uVar2 = 1;
    if (0 < iVar1) {
      icu_76_godot::UVector::~UVector(this_00);
      *(undefined8 *)(this + 0x50) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* icu_76_godot::UnicodeSet::_add(icu_76_godot::UnicodeString const&) */

void __thiscall icu_76_godot::UnicodeSet::_add(UnicodeSet *this,UnicodeString *param_1)

{
  char cVar1;
  UnicodeString *this_00;
  UErrorCode *pUVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) != 0) || (*(long *)(this + 0x58) != 0)) ||
     (((byte)this[0x20] & 1) != 0)) goto LAB_00101763;
  local_24 = 0;
  pUVar2 = (UErrorCode *)param_1;
  if (*(long *)(this + 0x50) == 0) {
    pUVar2 = (UErrorCode *)&local_24;
    cVar1 = allocateStrings(this,pUVar2);
    if (cVar1 != '\0') goto LAB_001017a2;
  }
  else {
LAB_001017a2:
    this_00 = (UnicodeString *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar2);
    if (this_00 != (UnicodeString *)0x0) {
      icu_76_godot::UnicodeString::UnicodeString(this_00,param_1);
      icu_76_godot::UVector::sortedInsert
                (*(void **)(this + 0x50),(_func_int_UElement_UElement *)this_00,
                 (UErrorCode *)compareUnicodeString);
      if (local_24 < 1) goto LAB_00101763;
    }
  }
  clear(this);
  this[0x20] = (UnicodeSet)0x1;
LAB_00101763:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::UnicodeSet::nextCapacity(int) */

int icu_76_godot::UnicodeSet::nextCapacity(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x19) {
    return param_1 + 0x19;
  }
  if (param_1 < 0x9c5) {
    return param_1 * 5;
  }
  iVar1 = param_1 * 2;
  if (0x110001 < iVar1) {
    iVar1 = 0x110001;
  }
  return iVar1;
}



/* icu_76_godot::UnicodeSet::ensureCapacity(int) */

undefined8 __thiscall icu_76_godot::UnicodeSet::ensureCapacity(UnicodeSet *this,int param_1)

{
  UnicodeSet *pUVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar2 = 0x110001;
  if (param_1 < 0x110002) {
    iVar2 = param_1;
  }
  if (iVar2 <= *(int *)(this + 0x18)) {
    return 1;
  }
  iVar5 = iVar2 + 0x19;
  if (0x18 < param_1) {
    if (param_1 < 0x9c5) {
      iVar5 = iVar2 * 5;
    }
    else {
      iVar5 = iVar2 * 2;
      if (0x110001 < iVar2 * 2) {
        iVar5 = 0x110001;
      }
    }
  }
  lVar3 = uprv_malloc_76_godot((long)iVar5 << 2);
  if (lVar3 == 0) {
    clear(this);
    this[0x20] = (UnicodeSet)0x1;
    uVar4 = 0;
  }
  else {
    pUVar1 = *(UnicodeSet **)(this + 0x10);
    __memcpy_chk(lVar3,pUVar1,(long)*(int *)(this + 0x1c) << 2,(long)iVar5 << 2);
    if (pUVar1 != this + 0x60) {
      uprv_free_76_godot(pUVar1);
    }
    *(long *)(this + 0x10) = lVar3;
    uVar4 = 1;
    *(int *)(this + 0x18) = iVar5;
  }
  return uVar4;
}



/* icu_76_godot::UnicodeSet::UnicodeSet(unsigned short const*, int,
   icu_76_godot::UnicodeSet::ESerialization, UErrorCode&) */

void __thiscall
icu_76_godot::UnicodeSet::UnicodeSet
          (UnicodeSet *this,ushort *param_1,int param_2,int param_4,int *param_5)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  *(UnicodeSet **)(this + 0x10) = this + 0x60;
  uVar5 = _LC0;
  *(undefined ***)this = &PTR__UnicodeSet_00105140;
  *(undefined ***)(this + 8) = &PTR__UnicodeSet_00105258;
  *(undefined8 *)(this + 0x18) = uVar5;
  iVar11 = *param_5;
  this[0x20] = (UnicodeSet)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  if (0 < iVar11) {
    *(undefined4 *)(this + 0x60) = 0x110000;
    this[0x20] = (UnicodeSet)0x1;
    return;
  }
  if ((param_1 == (ushort *)0x0 || param_2 < 1) || (param_4 != 0)) {
    *param_5 = 1;
    clear(this);
    this[0x20] = (UnicodeSet)0x1;
    return;
  }
  uVar3 = *param_1;
  iVar11 = 1;
  uVar9 = (uint)uVar3;
  if ((short)uVar3 < 0) {
    uVar9 = (uint)param_1[1];
    iVar11 = 2;
  }
  iVar10 = (int)((uVar3 & 0x7fff) - uVar9) / 2;
  iVar2 = iVar10 + uVar9;
  cVar6 = ensureCapacity(this,iVar2 + 1);
  if (cVar6 == '\0') {
    return;
  }
  lVar4 = *(long *)(this + 0x10);
  if (uVar9 == 0) {
    if (iVar2 != 0) {
      lVar8 = 0;
      goto LAB_00101a25;
    }
    lVar7 = 0;
  }
  else {
    lVar8 = (long)(int)uVar9;
    lVar7 = 0;
    do {
      *(uint *)(lVar4 + lVar7 * 4) = (uint)param_1[iVar11 + lVar7];
      lVar7 = lVar7 + 1;
    } while (lVar8 != lVar7);
    if ((int)uVar9 < iVar2) {
LAB_00101a25:
      param_1 = param_1 + (int)(iVar11 + uVar9);
      do {
        uVar3 = *param_1;
        puVar1 = param_1 + 1;
        param_1 = param_1 + 2;
        *(uint *)(lVar4 + lVar8 * 4) = (uint)uVar3 * 0x10000 + (uint)*puVar1;
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < iVar2);
      iVar11 = iVar10 + -1;
      if (iVar2 <= (int)uVar9) {
        iVar11 = 0;
      }
      uVar9 = uVar9 + 1 + iVar11;
      lVar8 = (long)(int)uVar9;
    }
    lVar7 = lVar8 * 4;
    if (*(int *)(lVar4 + -4 + lVar8 * 4) == 0x110000) goto LAB_00101a7d;
  }
  *(undefined4 *)(lVar4 + lVar7) = 0x110000;
  uVar9 = uVar9 + 1;
LAB_00101a7d:
  *(uint *)(this + 0x1c) = uVar9;
  return;
}



/* icu_76_godot::UnicodeSet::add(int) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::add(UnicodeSet *this,int param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  
  iVar8 = 0x10ffff;
  if (param_1 < 0x110000) {
    iVar8 = param_1;
  }
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  uVar6 = findCodePoint(this,iVar8);
  if ((uVar6 & 1) != 0) {
    return this;
  }
  if (*(long *)(this + 0x28) != 0) {
    return this;
  }
  if (*(long *)(this + 0x58) != 0) {
    return this;
  }
  if (((byte)this[0x20] & 1) != 0) {
    return this;
  }
  lVar7 = *(long *)(this + 0x10);
  lVar2 = (long)(int)uVar6 * 4;
  if (*(int *)(lVar7 + lVar2) + -1 == iVar8) {
    *(int *)(lVar7 + lVar2) = iVar8;
    if (0x10fffe < param_1) {
      cVar5 = ensureCapacity(this,*(int *)(this + 0x1c) + 1);
      if (cVar5 == '\0') {
        return this;
      }
      iVar4 = *(int *)(this + 0x1c);
      lVar7 = *(long *)(this + 0x10);
      *(int *)(this + 0x1c) = iVar4 + 1;
      *(undefined4 *)(lVar7 + (long)iVar4 * 4) = 0x110000;
    }
    if ((0 < (int)uVar6) && (piVar3 = (int *)(lVar7 + -4 + lVar2), *piVar3 == iVar8)) {
      piVar1 = (int *)(lVar7 + (long)*(int *)(this + 0x1c) * 4);
      if (piVar3 + 2 < piVar1) {
        memmove(piVar3,piVar3 + 2,((long)piVar1 + (-9 - (long)piVar3) & 0xfffffffffffffffcU) + 4);
      }
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -2;
    }
  }
  else {
    if (0 < (int)uVar6) {
      piVar3 = (int *)(lVar7 + -4 + lVar2);
      iVar4 = *piVar3;
      if (iVar4 == iVar8) {
        *piVar3 = iVar4 + 1;
        goto LAB_00101bc8;
      }
    }
    cVar5 = ensureCapacity(this,*(int *)(this + 0x1c) + 2);
    if (cVar5 == '\0') {
      return this;
    }
    memmove((void *)(*(long *)(this + 0x10) + lVar2 + 8),(void *)(*(long *)(this + 0x10) + lVar2),
            (long)(int)(*(int *)(this + 0x1c) - uVar6) << 2);
    lVar7 = *(long *)(this + 0x10);
    *(int *)(lVar7 + (long)(int)uVar6 * 4) = iVar8;
    *(int *)(lVar7 + 4 + lVar2) = iVar8 + 1;
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 2;
  }
LAB_00101bc8:
  if (*(long *)(this + 0x40) != 0) {
    uprv_free_76_godot();
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  return this;
}



/* icu_76_godot::UnicodeSet::addAll(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::addAll(UnicodeSet *this,UnicodeString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar1 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar1 = (int)(*(short *)(param_1 + 8) >> 5);
    }
    if (iVar1 <= iVar3) break;
    uVar2 = icu_76_godot::UnicodeString::char32At((int)param_1);
    add(this,uVar2);
    iVar3 = iVar3 + 1 + (uint)(0xffff < uVar2);
  }
  return this;
}



/* icu_76_godot::UnicodeSet::add(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::add(UnicodeSet *this,UnicodeString *param_1)

{
  int iVar1;
  
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    iVar1 = getSingleCP(param_1);
    if (iVar1 < 0) {
      if (((*(void **)(this + 0x50) == (void *)0x0) ||
          (iVar1 = icu_76_godot::UVector::indexOf(*(void **)(this + 0x50),(int)param_1), iVar1 < 0))
         && (_add(this,param_1), *(long *)(this + 0x40) != 0)) {
        uprv_free_76_godot();
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined4 *)(this + 0x48) = 0;
      }
    }
    else {
      add(this,iVar1);
    }
  }
  return this;
}



/* icu_76_godot::UnicodeSet::createFrom(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::createFrom(UnicodeSet *this,UnicodeString *param_1)

{
  undefined8 uVar1;
  UnicodeSet *this_00;
  
  this_00 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)param_1);
  if (this_00 != (UnicodeSet *)0x0) {
    this_00[0x20] = (UnicodeSet)0x0;
    *(undefined4 *)(this_00 + 0x38) = 0;
    *(UnicodeSet **)(this_00 + 0x10) = this_00 + 0x60;
    uVar1 = _LC0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x18) = uVar1;
    *(undefined4 *)(this_00 + 0x48) = 0;
    *(undefined4 *)(this_00 + 0x60) = 0x110000;
    *(undefined ***)this_00 = &PTR__UnicodeSet_00105140;
    *(undefined ***)(this_00 + 8) = &PTR__UnicodeSet_00105258;
    *(undefined1 (*) [16])(this_00 + 0x28) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x50) = (undefined1  [16])0x0;
    add(this_00,(UnicodeString *)this);
  }
  return this_00;
}



/* icu_76_godot::UnicodeSet::createFromAll(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::createFromAll(UnicodeSet *this,UnicodeString *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  UnicodeSet *this_00;
  int iVar4;
  
  this_00 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)param_1);
  if (this_00 != (UnicodeSet *)0x0) {
    this_00[0x20] = (UnicodeSet)0x0;
    iVar4 = 0;
    *(undefined4 *)(this_00 + 0x38) = 0;
    *(UnicodeSet **)(this_00 + 0x10) = this_00 + 0x60;
    uVar1 = _LC0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined ***)this_00 = &PTR__UnicodeSet_00105140;
    *(undefined ***)(this_00 + 8) = &PTR__UnicodeSet_00105258;
    *(undefined8 *)(this_00 + 0x18) = uVar1;
    *(undefined4 *)(this_00 + 0x48) = 0;
    *(undefined4 *)(this_00 + 0x60) = 0x110000;
    *(undefined1 (*) [16])(this_00 + 0x28) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x50) = (undefined1  [16])0x0;
    while( true ) {
      if (*(short *)(this + 8) < 0) {
        iVar2 = *(int *)(this + 0xc);
      }
      else {
        iVar2 = (int)(*(short *)(this + 8) >> 5);
      }
      if (iVar2 <= iVar4) break;
      uVar3 = icu_76_godot::UnicodeString::char32At((int)this);
      add(this_00,uVar3);
      iVar4 = iVar4 + 1 + (uint)(0xffff < uVar3);
    }
  }
  return this_00;
}



/* icu_76_godot::UnicodeSet::complement() */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::complement(UnicodeSet *this)

{
  int *__dest;
  char cVar1;
  int iVar2;
  
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    __dest = *(int **)(this + 0x10);
    if (*__dest == 0) {
      memmove(__dest,__dest + 1,(long)(*(int *)(this + 0x1c) + -1) << 2);
      iVar2 = *(int *)(this + 0x1c) + -1;
    }
    else {
      cVar1 = ensureCapacity(this,*(int *)(this + 0x1c) + 1);
      if (cVar1 == '\0') {
        return this;
      }
      memmove((void *)((long)*(void **)(this + 0x10) + 4),*(void **)(this + 0x10),
              (long)*(int *)(this + 0x1c) << 2);
      **(undefined4 **)(this + 0x10) = 0;
      iVar2 = *(int *)(this + 0x1c) + 1;
    }
    *(int *)(this + 0x1c) = iVar2;
    if (*(long *)(this + 0x40) != 0) {
      uprv_free_76_godot();
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x48) = 0;
    }
  }
  return this;
}



/* icu_76_godot::UnicodeSet::ensureBufferCapacity(int) */

undefined8 __thiscall icu_76_godot::UnicodeSet::ensureBufferCapacity(UnicodeSet *this,int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = 0x110001;
  if (param_1 < 0x110002) {
    iVar1 = param_1;
  }
  if (iVar1 <= *(int *)(this + 0x38)) {
    return 1;
  }
  iVar4 = iVar1 + 0x19;
  if (0x18 < param_1) {
    if (param_1 < 0x9c5) {
      iVar4 = iVar1 * 5;
    }
    else {
      iVar4 = iVar1 * 2;
      if (0x110001 < iVar1 * 2) {
        iVar4 = 0x110001;
      }
    }
  }
  lVar2 = uprv_malloc_76_godot((long)iVar4 << 2);
  if (lVar2 == 0) {
    clear(this);
    this[0x20] = (UnicodeSet)0x1;
    uVar3 = 0;
  }
  else {
    if (*(UnicodeSet **)(this + 0x30) != this + 0x60) {
      uprv_free_76_godot();
    }
    *(long *)(this + 0x30) = lVar2;
    uVar3 = 1;
    *(int *)(this + 0x38) = iVar4;
  }
  return uVar3;
}



/* icu_76_godot::UnicodeSet::add(int const*, int, signed char) [clone .part.0] */

void __thiscall
icu_76_godot::UnicodeSet::add(UnicodeSet *this,int *param_1,int param_2,char param_4)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  bool bVar16;
  
  cVar5 = ensureBufferCapacity(this,*(int *)(this + 0x1c) + param_2);
  if (cVar5 == '\0') {
    return;
  }
  piVar2 = *(int **)(this + 0x10);
  iVar11 = *param_1;
  iVar6 = 0;
  iVar13 = 1;
  lVar3 = *(long *)(this + 0x30);
  iVar7 = 1;
  lVar9 = 0;
  iVar8 = *piVar2;
  if (param_4 == '\x02') goto LAB_00102149;
  do {
    if ('\x02' < param_4) {
      if (param_4 == '\x03') goto LAB_001021dd;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (param_4 == '\0') goto LAB_001020e2;
  } while (param_4 != '\x01');
LAB_001020ca:
  bVar16 = SBORROW4(iVar8,iVar11);
  iVar4 = iVar8 - iVar11;
  bVar15 = iVar8 == iVar11;
  if (iVar11 <= iVar8) goto LAB_00102123;
LAB_001020ce:
  *(int *)(lVar3 + lVar9 * 4) = iVar8;
  lVar9 = (long)iVar7;
  iVar6 = iVar6 + 1;
  iVar7 = iVar7 + 1;
  iVar8 = piVar2[lVar9];
  lVar9 = (long)iVar6;
LAB_001020e2:
  do {
    lVar10 = lVar9 * 4;
    bVar16 = SBORROW4(iVar8,iVar11);
    iVar4 = iVar8 - iVar11;
    bVar15 = iVar8 == iVar11;
    if (iVar11 <= iVar8) goto LAB_0010216d;
LAB_001020ee:
    if ((iVar6 < 1) || (*(int *)(lVar3 + -4 + lVar10) < iVar8)) {
      iVar6 = iVar6 + 1;
      *(int *)(lVar3 + lVar10) = iVar8;
      iVar8 = piVar2[iVar7];
      lVar9 = (long)iVar6;
    }
    else {
      iVar6 = iVar6 + -1;
      iVar4 = piVar2[iVar7];
      lVar9 = (long)iVar6;
      iVar8 = *(int *)(lVar3 + lVar9 * 4);
      if (iVar8 < iVar4) {
        iVar8 = iVar4;
      }
    }
    iVar7 = iVar7 + 1;
    bVar16 = SBORROW4(iVar8,iVar11);
    iVar4 = iVar8 - iVar11;
    bVar15 = iVar8 == iVar11;
    if (iVar8 < iVar11) goto LAB_001020ce;
LAB_00102123:
    if (!bVar15 && bVar16 == iVar4 < 0) {
LAB_0010224e:
      lVar10 = (long)iVar13;
      iVar13 = iVar13 + 1;
      iVar11 = param_1[lVar10];
LAB_001021dd:
      iVar6 = iVar6 + 1;
      piVar14 = (int *)(lVar3 + lVar9 * 4);
      if (iVar8 < iVar11) goto LAB_001021c3;
      goto joined_r0x001021ee;
    }
    if (iVar8 == 0x110000) goto LAB_001022c6;
    lVar10 = (long)iVar7;
    lVar12 = (long)iVar13;
    iVar7 = iVar7 + 1;
    iVar13 = iVar13 + 1;
    iVar8 = piVar2[lVar10];
    iVar11 = param_1[lVar12];
LAB_00102149:
    bVar15 = SBORROW4(iVar8,iVar11);
    iVar4 = iVar8 - iVar11;
    if (iVar11 < iVar8) break;
LAB_001021a8:
    if (bVar15 == iVar4 < 0) {
      if (iVar8 == 0x110000) {
LAB_001022c6:
        iVar6 = iVar6 + 1;
LAB_001022c9:
        *(undefined4 *)(lVar3 + lVar9 * 4) = 0x110000;
        uVar1 = *(undefined4 *)(this + 0x38);
        *(long *)(this + 0x10) = lVar3;
        *(int **)(this + 0x30) = piVar2;
        *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x18);
        *(ulong *)(this + 0x18) = CONCAT44(iVar6,uVar1);
        if (*(long *)(this + 0x40) == 0) {
          return;
        }
        uprv_free_76_godot();
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined4 *)(this + 0x48) = 0;
        return;
      }
      lVar10 = (long)iVar7;
      lVar12 = (long)iVar13;
      iVar7 = iVar7 + 1;
      iVar13 = iVar13 + 1;
      iVar8 = piVar2[lVar10];
      iVar11 = param_1[lVar12];
      goto LAB_001020ca;
    }
    lVar10 = (long)iVar7;
    iVar6 = iVar6 + 1;
    piVar14 = (int *)(lVar3 + lVar9 * 4);
    iVar7 = iVar7 + 1;
    iVar8 = piVar2[lVar10];
    if (iVar8 < iVar11) {
LAB_001021c3:
      iVar8 = iVar11;
    }
joined_r0x001021ee:
    if (iVar8 == 0x110000) goto LAB_001022c9;
    *piVar14 = iVar8;
    lVar9 = (long)iVar13;
    iVar13 = iVar13 + 1;
    iVar8 = piVar2[iVar7];
    iVar11 = param_1[lVar9];
    iVar7 = iVar7 + 1;
    lVar9 = (long)iVar6;
  } while( true );
  while( true ) {
    *(int *)(lVar3 + lVar9 * 4) = iVar11;
    lVar9 = (long)iVar13;
    iVar6 = iVar6 + 1;
    iVar13 = iVar13 + 1;
    iVar11 = param_1[lVar9];
    lVar9 = (long)iVar6;
    lVar10 = lVar9 * 4;
    bVar16 = SBORROW4(iVar8,iVar11);
    iVar4 = iVar8 - iVar11;
    bVar15 = iVar8 == iVar11;
    if (iVar8 < iVar11) break;
LAB_0010216d:
    if (bVar15 || bVar16 != iVar4 < 0) {
      if (iVar8 == 0x110000) goto LAB_001022c6;
      if ((iVar6 < 1) || (*(int *)(lVar3 + -4 + lVar10) < iVar8)) {
        iVar6 = iVar6 + 1;
        *(int *)(lVar3 + lVar10) = iVar8;
        iVar8 = piVar2[iVar7];
        lVar9 = (long)iVar6;
      }
      else {
        iVar6 = iVar6 + -1;
        iVar11 = piVar2[iVar7];
        lVar9 = (long)iVar6;
        iVar8 = *(int *)(lVar3 + lVar9 * 4);
        if (iVar8 < iVar11) {
          iVar8 = iVar11;
        }
      }
      iVar7 = iVar7 + 1;
      goto LAB_0010224e;
    }
    if ((iVar6 < 1) || (*(int *)(lVar3 + -4 + lVar10) < iVar11)) {
      iVar6 = iVar6 + 1;
      *(int *)(lVar3 + lVar10) = iVar11;
      iVar11 = param_1[iVar13];
      lVar9 = (long)iVar6;
    }
    else {
      iVar6 = iVar6 + -1;
      iVar4 = param_1[iVar13];
      lVar9 = (long)iVar6;
      iVar11 = *(int *)(lVar3 + lVar9 * 4);
      if (iVar11 < iVar4) {
        iVar11 = iVar4;
      }
    }
    iVar13 = iVar13 + 1;
    bVar15 = SBORROW4(iVar8,iVar11);
    iVar4 = iVar8 - iVar11;
    if (iVar8 <= iVar11) goto LAB_001021a8;
  }
  goto LAB_001020ee;
}



/* icu_76_godot::UnicodeSet::addAll(icu_76_godot::UnicodeSet const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::addAll(UnicodeSet *this,UnicodeSet *param_1)

{
  int iVar1;
  UnicodeString *pUVar2;
  int iVar3;
  long lVar4;
  
  if ((((0 < *(int *)(param_1 + 0x1c)) && (*(long *)(param_1 + 0x10) != 0)) &&
      (*(long *)(this + 0x28) == 0)) &&
     ((*(long *)(this + 0x58) == 0 && (((byte)this[0x20] & 1) == 0)))) {
    add();
  }
  lVar4 = *(long *)(param_1 + 0x50);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 8))) {
    iVar3 = 0;
    do {
      while( true ) {
        pUVar2 = (UnicodeString *)icu_76_godot::UVector::elementAt((int)lVar4);
        if ((*(void **)(this + 0x50) != (void *)0x0) &&
           (iVar1 = icu_76_godot::UVector::indexOf(*(void **)(this + 0x50),(int)pUVar2), -1 < iVar1)
           ) break;
        iVar3 = iVar3 + 1;
        _add(this,pUVar2);
        lVar4 = *(long *)(param_1 + 0x50);
        if (*(int *)(lVar4 + 8) <= iVar3) {
          return this;
        }
      }
      lVar4 = *(long *)(param_1 + 0x50);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(lVar4 + 8));
  }
  return this;
}



/* icu_76_godot::UnicodeSet::addMatchSetTo(icu_76_godot::UnicodeSet&) const */

void __thiscall icu_76_godot::UnicodeSet::addMatchSetTo(UnicodeSet *this,UnicodeSet *param_1)

{
  addAll(param_1,this);
  return;
}



/* non-virtual thunk to icu_76_godot::UnicodeSet::addMatchSetTo(icu_76_godot::UnicodeSet&) const */

void __thiscall icu_76_godot::UnicodeSet::addMatchSetTo(UnicodeSet *this,UnicodeSet *param_1)

{
  addAll(param_1,this + -8);
  return;
}



/* icu_76_godot::UnicodeSet::add(int, int) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::add(UnicodeSet *this,int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_2c;
  int local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0x10ffff;
  if (param_1 < 0x110000) {
    iVar3 = param_1;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar5 = 0x10ffff;
  if (param_2 < 0x110000) {
    iVar5 = param_2;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (iVar5 <= iVar3) {
    if (iVar5 == iVar3) {
      add(this,iVar5);
    }
    goto LAB_001024a2;
  }
  iVar1 = *(int *)(this + 0x1c);
  iVar5 = iVar5 + 1;
  if (((long)iVar1 & 1U) == 0) {
LAB_00102487:
    local_24 = 0x110000;
    local_2c = iVar3;
    local_28 = iVar5;
    if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
       (((byte)this[0x20] & 1) == 0)) {
      add(this,&local_2c,2,0);
    }
  }
  else {
    if (iVar1 == 1) {
      iVar6 = -2;
    }
    else {
      iVar6 = *(int *)(*(long *)(this + 0x10) + -8 + (long)iVar1 * 4);
      if (iVar3 < iVar6) goto LAB_00102487;
    }
    if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
       (((byte)this[0x20] & 1) == 0)) {
      lVar4 = (long)iVar1 * 4;
      if (iVar6 == iVar3) {
        *(int *)(*(long *)(this + 0x10) + -8 + lVar4) = iVar5;
        if (iVar5 == 0x110000) {
          *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
        }
      }
      else {
        *(int *)(*(long *)(this + 0x10) + -4 + lVar4) = iVar3;
        if (iVar5 == 0x110000) {
          cVar2 = ensureCapacity(this,*(int *)(this + 0x1c) + 1);
          if (cVar2 != '\0') {
            iVar3 = *(int *)(this + 0x1c);
            *(int *)(this + 0x1c) = iVar3 + 1;
            *(undefined4 *)(*(long *)(this + 0x10) + (long)iVar3 * 4) = 0x110000;
          }
        }
        else {
          cVar2 = ensureCapacity(this,*(int *)(this + 0x1c) + 2);
          if (cVar2 != '\0') {
            iVar3 = *(int *)(this + 0x1c);
            lVar4 = *(long *)(this + 0x10);
            *(int *)(this + 0x1c) = iVar3 + 1;
            *(int *)(lVar4 + (long)iVar3 * 4) = iVar5;
            iVar3 = *(int *)(this + 0x1c);
            *(int *)(this + 0x1c) = iVar3 + 1;
            *(undefined4 *)(lVar4 + (long)iVar3 * 4) = 0x110000;
          }
        }
      }
      if (*(long *)(this + 0x40) != 0) {
        uprv_free_76_godot();
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined4 *)(this + 0x48) = 0;
      }
    }
  }
LAB_001024a2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::UnicodeSet(int, int) */

void __thiscall icu_76_godot::UnicodeSet::UnicodeSet(UnicodeSet *this,int param_1,int param_2)

{
  undefined8 uVar1;
  
  this[0x20] = (UnicodeSet)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(UnicodeSet **)(this + 0x10) = this + 0x60;
  uVar1 = _LC0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x60) = 0x110000;
  *(undefined ***)this = &PTR__UnicodeSet_00105140;
  *(undefined ***)(this + 8) = &PTR__UnicodeSet_00105258;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  add(this,param_1,param_2);
  return;
}



/* icu_76_godot::UnicodeSet::remove(int, int) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::remove(UnicodeSet *this,int param_1,int param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10ffff < param_1) {
    param_1 = 0x10ffff;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (0x10ffff < param_2) {
    param_2 = 0x10ffff;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_1 <= param_2) {
    local_18 = param_2 + 1;
    local_14 = 0x110000;
    local_1c = param_1;
    if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
       (((byte)this[0x20] & 1) == 0)) {
      cVar1 = ensureBufferCapacity(this,*(int *)(this + 0x1c) + 2);
      if (cVar1 != '\0') {
        retain(this,&local_1c,2);
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::remove(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::remove(UnicodeSet *this,UnicodeString *param_1)

{
  char cVar1;
  int iVar2;
  
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    iVar2 = getSingleCP(param_1);
    if (iVar2 < 0) {
      if (*(void **)(this + 0x50) != (void *)0x0) {
        cVar1 = icu_76_godot::UVector::removeElement(*(void **)(this + 0x50));
        if ((cVar1 != '\0') && (*(long *)(this + 0x40) != 0)) {
          uprv_free_76_godot();
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined4 *)(this + 0x48) = 0;
        }
      }
    }
    else {
      remove(this,iVar2,iVar2);
    }
  }
  return this;
}



/* icu_76_godot::UnicodeSet::remove(int) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::remove(UnicodeSet *this,int param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0x110000;
  if (0x10ffff < param_1) {
    param_1 = 0x10ffff;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  local_18 = param_1 + 1;
  local_1c = param_1;
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    cVar1 = ensureBufferCapacity(this,*(int *)(this + 0x1c) + 2);
    if (cVar1 != '\0') {
      retain(this,&local_1c,2);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::retain(int) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::retain(UnicodeSet *this,int param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0x110000;
  if (0x10ffff < param_1) {
    param_1 = 0x10ffff;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  local_18 = param_1 + 1;
  local_1c = param_1;
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    cVar1 = ensureBufferCapacity(this,*(int *)(this + 0x1c) + 2);
    if (cVar1 != '\0') {
      retain(this,&local_1c,0);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::retain(int, int) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::retain(UnicodeSet *this,int param_1,int param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10ffff < param_1) {
    param_1 = 0x10ffff;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (0x10ffff < param_2) {
    param_2 = 0x10ffff;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_2 < param_1) {
    if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) {
      **(undefined4 **)(this + 0x10) = 0x110000;
      *(undefined4 *)(this + 0x1c) = 1;
      if (*(long *)(this + 0x40) != 0) {
        uprv_free_76_godot();
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined4 *)(this + 0x48) = 0;
      }
      if (*(long *)(this + 0x50) != 0) {
        icu_76_godot::UVector::removeAllElements();
      }
      this[0x20] = (UnicodeSet)0x0;
    }
  }
  else {
    local_18 = param_2 + 1;
    local_14 = 0x110000;
    local_1c = param_1;
    if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
       (((byte)this[0x20] & 1) == 0)) {
      cVar1 = ensureBufferCapacity(this,*(int *)(this + 0x1c) + 2);
      if (cVar1 != '\0') {
        retain(this,&local_1c,0);
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::retain(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::retain(UnicodeSet *this,UnicodeString *param_1)

{
  int iVar1;
  
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    iVar1 = getSingleCP(param_1);
    if (iVar1 < 0) {
      if ((*(void **)(this + 0x50) != (void *)0x0) &&
         (iVar1 = icu_76_godot::UVector::indexOf(*(void **)(this + 0x50),(int)param_1), -1 < iVar1))
      {
        if ((*(int *)(this + 0x1c) + 1U < 3) && (iVar1 = size(this), iVar1 == 1)) {
          return this;
        }
        clear(this);
        _add(this,param_1);
        return this;
      }
      clear(this);
    }
    else {
      retain(this,iVar1,iVar1);
    }
  }
  return this;
}



/* icu_76_godot::UnicodeSet::swapBuffers() */

void __thiscall icu_76_godot::UnicodeSet::swapBuffers(UnicodeSet *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}



/* icu_76_godot::UnicodeSet::setToBogus() */

void __thiscall icu_76_godot::UnicodeSet::setToBogus(UnicodeSet *this)

{
  if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) {
    **(undefined4 **)(this + 0x10) = 0x110000;
    *(undefined4 *)(this + 0x1c) = 1;
    if (*(long *)(this + 0x40) != 0) {
      uprv_free_76_godot();
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x48) = 0;
    }
    if (*(long *)(this + 0x50) != 0) {
      icu_76_godot::UVector::removeAllElements();
    }
  }
  this[0x20] = (UnicodeSet)0x1;
  return;
}



/* icu_76_godot::UnicodeSet::exclusiveOr(int const*, int, signed char) */

void __thiscall
icu_76_godot::UnicodeSet::exclusiveOr(UnicodeSet *this,int *param_1,int param_2,char param_4)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  
  if (*(long *)(this + 0x28) == 0) {
    if (((*(long *)(this + 0x58) == 0) && (((byte)this[0x20] & 1) == 0)) &&
       (cVar6 = ensureBufferCapacity(this,*(int *)(this + 0x1c) + param_2), cVar6 != '\0')) {
      piVar2 = *(int **)(this + 0x10);
      iVar14 = 1;
      iVar13 = *param_1;
      iVar9 = *piVar2;
      if ((byte)(param_4 - 1U) < 2) {
        if (iVar13 == 0) {
          iVar13 = param_1[1];
        }
        else {
          iVar13 = 0;
          iVar14 = 0;
        }
      }
      lVar3 = *(long *)(this + 0x30);
      iVar8 = 1;
      lVar12 = 0;
      iVar7 = 1;
      while( true ) {
        while( true ) {
          iVar4 = iVar9 - iVar13;
          while (piVar5 = (int *)(lVar3 + lVar12 * 4), iVar9 < iVar13) {
            *piVar5 = iVar9;
            lVar12 = (long)iVar7;
            iVar7 = iVar7 + 1;
            iVar9 = piVar2[iVar8];
            iVar8 = iVar8 + 1;
            iVar4 = iVar9 - iVar13;
          }
          if (iVar9 == iVar13 || SBORROW4(iVar9,iVar13) != iVar4 < 0) break;
          *piVar5 = iVar13;
          lVar12 = (long)iVar14;
          iVar14 = iVar14 + 1;
          iVar13 = param_1[lVar12];
          lVar12 = (long)iVar7;
          iVar7 = iVar7 + 1;
        }
        if (iVar9 == 0x110000) break;
        lVar10 = (long)iVar8;
        lVar11 = (long)iVar14;
        iVar8 = iVar8 + 1;
        iVar14 = iVar14 + 1;
        iVar9 = piVar2[lVar10];
        iVar13 = param_1[lVar11];
      }
      *piVar5 = 0x110000;
      uVar1 = *(undefined4 *)(this + 0x38);
      *(long *)(this + 0x10) = lVar3;
      *(int **)(this + 0x30) = piVar2;
      *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x18);
      *(ulong *)(this + 0x18) = CONCAT44(iVar7,uVar1);
      if (*(long *)(this + 0x40) != 0) {
        uprv_free_76_godot();
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined4 *)(this + 0x48) = 0;
      }
    }
    return;
  }
  return;
}



/* icu_76_godot::UnicodeSet::complementAll(icu_76_godot::UnicodeSet const&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::complementAll(UnicodeSet *this,UnicodeSet *param_1)

{
  char cVar1;
  UnicodeString *pUVar2;
  long lVar3;
  int iVar4;
  
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    exclusiveOr(this,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),0);
    lVar3 = *(long *)(param_1 + 0x50);
    if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 8))) {
      iVar4 = 0;
      do {
        pUVar2 = (UnicodeString *)icu_76_godot::UVector::elementAt((int)lVar3);
        if ((*(void **)(this + 0x50) == (void *)0x0) ||
           (cVar1 = icu_76_godot::UVector::removeElement(*(void **)(this + 0x50)), cVar1 == '\0')) {
          _add(this,pUVar2);
        }
        lVar3 = *(long *)(param_1 + 0x50);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar3 + 8));
    }
  }
  return this;
}



/* icu_76_godot::UnicodeSet::complementAll(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::complementAll(UnicodeSet *this,UnicodeString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined **local_f8;
  undefined **ppuStack_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined4 local_98 [26];
  long local_30;
  
  iVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98[0] = 0x110000;
  local_e8 = local_98;
  local_f8 = &PTR__UnicodeSet_00105140;
  ppuStack_f0 = &PTR__UnicodeSet_00105258;
  local_e0 = _LC0;
  local_d0 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  while( true ) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar1 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar1 = (int)(*(short *)(param_1 + 8) >> 5);
    }
    if (iVar1 <= iVar3) break;
    uVar2 = icu_76_godot::UnicodeString::char32At((int)param_1);
    add((UnicodeSet *)&local_f8,uVar2);
    iVar3 = iVar3 + 1 + (uint)(0xffff < uVar2);
  }
  complementAll(this,(UnicodeSet *)&local_f8);
  ~UnicodeSet((UnicodeSet *)&local_f8);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::UnicodeSet::complement(int, int) */

void __thiscall icu_76_godot::UnicodeSet::complement(UnicodeSet *this,int param_1,int param_2)

{
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    if (0x10ffff < param_1) {
      param_1 = 0x10ffff;
    }
    if (param_1 < 0) {
      param_1 = 0;
    }
    if (0x10ffff < param_2) {
      param_2 = 0x10ffff;
    }
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (param_1 <= param_2) {
      local_18 = param_2 + 1;
      local_14 = 0x110000;
      local_1c = param_1;
      exclusiveOr(this,&local_1c,2);
    }
    if (*(long *)(this + 0x40) != 0) {
      uprv_free_76_godot();
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x48) = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::complement(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::complement(UnicodeSet *this,UnicodeString *param_1)

{
  int iVar1;
  
  if (*(long *)(this + 0x28) != 0) {
    return this;
  }
  if (*(long *)(this + 0x58) != 0) {
    return this;
  }
  if (((byte)this[0x20] & 1) != 0) {
    return this;
  }
  iVar1 = getSingleCP(param_1);
  if (iVar1 < 0) {
    if ((*(void **)(this + 0x50) == (void *)0x0) ||
       (iVar1 = icu_76_godot::UVector::indexOf(*(void **)(this + 0x50),(int)param_1), iVar1 < 0)) {
      _add(this,param_1);
    }
    else {
      icu_76_godot::UVector::removeElement(*(void **)(this + 0x50));
    }
    if (*(long *)(this + 0x40) != 0) {
      uprv_free_76_godot();
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x48) = 0;
    }
    return this;
  }
  complement(this,iVar1,iVar1);
  return this;
}



/* icu_76_godot::UnicodeSet::complement(int) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::complement(UnicodeSet *this,int param_1)

{
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    local_14 = 0x110000;
    if (0x10ffff < param_1) {
      param_1 = 0x10ffff;
    }
    if (param_1 < 0) {
      param_1 = 0;
    }
    local_18 = param_1 + 1;
    local_1c = param_1;
    exclusiveOr(this,&local_1c,2,0);
    if (*(long *)(this + 0x40) != 0) {
      uprv_free_76_godot();
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x48) = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::set(int, int) */

void __thiscall icu_76_godot::UnicodeSet::set(UnicodeSet *this,int param_1,int param_2)

{
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) {
    **(undefined4 **)(this + 0x10) = 0x110000;
    *(undefined4 *)(this + 0x1c) = 1;
    if (*(long *)(this + 0x40) != 0) {
      uprv_free_76_godot();
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x48) = 0;
    }
    if (*(long *)(this + 0x50) != 0) {
      icu_76_godot::UVector::removeAllElements();
    }
    this[0x20] = (UnicodeSet)0x0;
    if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) {
      if (0x10ffff < param_1) {
        param_1 = 0x10ffff;
      }
      if (param_1 < 0) {
        param_1 = 0;
      }
      if (0x10ffff < param_2) {
        param_2 = 0x10ffff;
      }
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (param_1 <= param_2) {
        local_18 = param_2 + 1;
        local_14 = 0x110000;
        local_1c = param_1;
        exclusiveOr(this,&local_1c,2);
      }
      if (*(long *)(this + 0x40) != 0) {
        uprv_free_76_godot();
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined4 *)(this + 0x48) = 0;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::add(int const*, int, signed char) */

void icu_76_godot::UnicodeSet::add(long param_1,long param_2)

{
  if ((((*(long *)(param_1 + 0x28) == 0) && (*(long *)(param_1 + 0x58) == 0)) && (param_2 != 0)) &&
     ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    add();
    return;
  }
  return;
}



/* icu_76_godot::UnicodeSet::retain(int const*, int, signed char) */

void __thiscall
icu_76_godot::UnicodeSet::retain(UnicodeSet *this,undefined8 param_1,int param_2,char param_4)

{
  char cVar1;
  
  if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) {
    if (((byte)this[0x20] & 1) == 0) {
      cVar1 = ensureBufferCapacity(this,*(int *)(this + 0x1c) + param_2);
      if (cVar1 != '\0') {
        retain(this,param_1,(int)param_4);
        return;
      }
    }
    return;
  }
  return;
}



/* icu_76_godot::UnicodeSet::retainAll(icu_76_godot::UnicodeSet const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::retainAll(UnicodeSet *this,UnicodeSet *param_1)

{
  UVector *pUVar1;
  
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    retain(this,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),0);
    pUVar1 = *(UVector **)(this + 0x50);
    if ((pUVar1 != (UVector *)0x0) && (*(int *)(pUVar1 + 8) != 0)) {
      if ((*(long *)(param_1 + 0x50) == 0) || (*(int *)(*(long *)(param_1 + 0x50) + 8) == 0)) {
        icu_76_godot::UVector::removeAllElements();
      }
      else {
        icu_76_godot::UVector::retainAll(pUVar1);
      }
    }
  }
  return this;
}



/* icu_76_godot::UnicodeSet::retainAll(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::retainAll(UnicodeSet *this,UnicodeString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined **local_f8;
  undefined **ppuStack_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined4 local_98 [26];
  long local_30;
  
  iVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98[0] = 0x110000;
  local_e8 = local_98;
  local_f8 = &PTR__UnicodeSet_00105140;
  ppuStack_f0 = &PTR__UnicodeSet_00105258;
  local_e0 = _LC0;
  local_d0 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  while( true ) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar1 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar1 = (int)(*(short *)(param_1 + 8) >> 5);
    }
    if (iVar1 <= iVar3) break;
    uVar2 = icu_76_godot::UnicodeString::char32At((int)param_1);
    add((UnicodeSet *)&local_f8,uVar2);
    iVar3 = iVar3 + 1 + (uint)(0xffff < uVar2);
  }
  retainAll(this,(UnicodeSet *)&local_f8);
  ~UnicodeSet((UnicodeSet *)&local_f8);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::UnicodeSet::removeAll(icu_76_godot::UnicodeSet const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::removeAll(UnicodeSet *this,UnicodeSet *param_1)

{
  UVector *pUVar1;
  
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    retain(this,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),2);
    pUVar1 = *(UVector **)(this + 0x50);
    if (((pUVar1 != (UVector *)0x0) && (*(int *)(pUVar1 + 8) != 0)) &&
       ((*(long *)(param_1 + 0x50) != 0 && (*(int *)(*(long *)(param_1 + 0x50) + 8) != 0)))) {
      icu_76_godot::UVector::removeAll(pUVar1);
    }
  }
  return this;
}



/* icu_76_godot::UnicodeSet::removeAll(icu_76_godot::UnicodeString const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::removeAll(UnicodeSet *this,UnicodeString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined **local_f8;
  undefined **ppuStack_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined4 local_98 [26];
  long local_30;
  
  iVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98[0] = 0x110000;
  local_e8 = local_98;
  local_f8 = &PTR__UnicodeSet_00105140;
  ppuStack_f0 = &PTR__UnicodeSet_00105258;
  local_e0 = _LC0;
  local_d0 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  while( true ) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar1 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar1 = (int)(*(short *)(param_1 + 8) >> 5);
    }
    if (iVar1 <= iVar3) break;
    uVar2 = icu_76_godot::UnicodeString::char32At((int)param_1);
    add((UnicodeSet *)&local_f8,uVar2);
    iVar3 = iVar3 + 1 + (uint)(0xffff < uVar2);
  }
  removeAll(this,(UnicodeSet *)&local_f8);
  ~UnicodeSet((UnicodeSet *)&local_f8);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::UnicodeSet::_appendToPat(icu_76_godot::UnicodeString&, int, signed char) */

void icu_76_godot::UnicodeSet::_appendToPat(UnicodeString *param_1,uint param_2,char param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined2 local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == '\0') {
    cVar1 = icu_76_godot::ICU_Utility::shouldAlwaysBeEscaped(param_2);
  }
  else {
    cVar1 = icu_76_godot::ICU_Utility::isUnprintable(param_2);
  }
  if (cVar1 != '\0') {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      icu_76_godot::ICU_Utility::escape(param_1,param_2);
      return;
    }
    goto LAB_00103700;
  }
  if ((int)param_2 < 0x3b) {
    if ((0x23 < (int)param_2) && ((0x400205000000000U >> ((ulong)param_2 & 0x3f) & 1) != 0))
    goto LAB_00103663;
LAB_001036c0:
    cVar1 = icu_76_godot::PatternProps::isWhiteSpace(param_2);
    if (cVar1 != '\0') goto LAB_00103663;
  }
  else {
    if ((0x22 < param_2 - 0x5b) || ((0x50000000fU >> ((ulong)(param_2 - 0x5b) & 0x3f) & 1) == 0))
    goto LAB_001036c0;
LAB_00103663:
    local_22 = 0x5c;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_22,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    icu_76_godot::UnicodeString::append((int)param_1);
    return;
  }
LAB_00103700:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::_appendToPat(icu_76_godot::UnicodeString&, icu_76_godot::UnicodeString
   const&, signed char) */

void icu_76_godot::UnicodeSet::_appendToPat(undefined8 param_1,long param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(short *)(param_2 + 8) < 0) {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar1 = (int)(*(short *)(param_2 + 8) >> 5);
    }
    if (iVar1 <= iVar3) break;
    uVar2 = icu_76_godot::UnicodeString::char32At((int)param_2);
    _appendToPat(param_1,uVar2,(int)param_3);
    iVar3 = iVar3 + 1 + (uint)(0xffff < uVar2);
  }
  return;
}



/* icu_76_godot::UnicodeSet::_appendToPat(icu_76_godot::UnicodeString&, int, int, signed char) */

void icu_76_godot::UnicodeSet::_appendToPat
               (wchar16 *param_1,undefined8 param_2,int param_3,char param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined2 local_32;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _appendToPat(param_1,param_2,(int)param_4);
  iVar1 = (int)param_2;
  if (iVar1 == param_3) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if ((iVar1 + 1 != param_3) || (iVar1 == 0xdbff)) {
      local_32 = 0x2d;
      icu_76_godot::UnicodeString::doAppend(param_1,(int)&local_32,0);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _appendToPat(param_1,param_3,(int)param_4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::_generatePattern(icu_76_godot::UnicodeString&, signed char) const */

void __thiscall
icu_76_godot::UnicodeSet::_generatePattern(UnicodeSet *this,wchar16 *param_1,char param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long in_FS_OFFSET;
  uint local_64;
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_42 = 0x5b;
  iVar10 = (int)&local_42;
  icu_76_godot::UnicodeString::doAppend(param_1,iVar10,0);
  uVar7 = *(uint *)(this + 0x1c);
  local_64 = uVar7 & 0xfffffffe;
  if ((int)uVar7 < 4) {
    if ((int)local_64 < 1) {
LAB_001039dd:
      if ((*(long *)(this + 0x50) != 0) && (0 < *(int *)(*(long *)(this + 0x50) + 8))) {
        local_64 = 0;
        do {
          iVar14 = 0;
          local_42 = 0x7b;
          icu_76_godot::UnicodeString::doAppend(param_1,iVar10,0);
          lVar13 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x50));
          while( true ) {
            if (*(short *)(lVar13 + 8) < 0) {
              iVar5 = *(int *)(lVar13 + 0xc);
            }
            else {
              iVar5 = (int)(*(short *)(lVar13 + 8) >> 5);
            }
            if (iVar5 <= iVar14) break;
            uVar7 = icu_76_godot::UnicodeString::char32At((int)lVar13);
            _appendToPat(param_1,uVar7,(int)param_3);
            iVar14 = iVar14 + 1 + (uint)(0xffff < uVar7);
          }
          local_42 = 0x7d;
          icu_76_godot::UnicodeString::doAppend(param_1,iVar10,0);
          local_64 = local_64 + 1;
        } while ((int)local_64 < *(int *)(*(long *)(this + 0x50) + 8));
      }
      local_42 = 0x5d;
      icu_76_godot::UnicodeString::doAppend(param_1,iVar10,0);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_64 = 2;
    piVar9 = *(int **)(this + 0x10);
    iVar14 = 0;
  }
  else {
    piVar9 = *(int **)(this + 0x10);
    if ((uVar7 & 1) == 0 && *piVar9 == 0) {
      if ((*(long *)(this + 0x50) == 0) || (iVar14 = 0, *(int *)(*(long *)(this + 0x50) + 8) == 0))
      {
        local_42 = 0x5e;
        iVar14 = 1;
        icu_76_godot::UnicodeString::doAppend(param_1,iVar10,0);
        local_64 = local_64 - 1;
        piVar9 = *(int **)(this + 0x10);
      }
    }
    else {
      iVar14 = 0;
    }
  }
  iVar5 = (int)param_3;
  do {
    lVar8 = (long)iVar14;
    piVar11 = piVar9 + lVar8;
    lVar13 = lVar8 * 4 + 4;
    iVar6 = iVar14;
    if (piVar9[lVar8 + 1] - 0xd801U < 0x400) {
      do {
        iVar3 = iVar6;
        iVar6 = iVar3 + 2;
        iVar12 = iVar6;
        if ((int)local_64 <= iVar6) goto LAB_0010397a;
        piVar11 = piVar11 + 2;
      } while (*piVar11 < 0xdc00);
      lVar8 = (long)iVar6 << 2;
      while (piVar11 = (int *)((long)piVar9 + lVar8), *piVar11 < 0xe000) {
        lVar4 = lVar8 + 4;
        iVar12 = iVar12 + 2;
        lVar8 = lVar8 + 8;
        _appendToPat(param_1,*piVar11,*(int *)((long)piVar9 + lVar4) + -1,iVar5);
        if ((int)local_64 <= iVar12) break;
        piVar9 = *(int **)(this + 0x10);
      }
LAB_0010397a:
      if (iVar14 < iVar6) {
        do {
          piVar9 = (int *)(*(long *)(this + 0x10) + lVar13);
          puVar1 = (undefined4 *)(*(long *)(this + 0x10) + -4 + lVar13);
          lVar13 = lVar13 + 8;
          _appendToPat(param_1,*puVar1,*piVar9 + -1,iVar5);
          bVar2 = iVar14 < iVar3;
          iVar14 = iVar14 + 2;
        } while (bVar2);
      }
    }
    else {
      _appendToPat(param_1,*piVar11,piVar9[lVar8 + 1] + -1,iVar5);
      iVar12 = iVar14 + 2;
    }
    iVar14 = iVar12;
    if ((int)local_64 <= iVar14) goto LAB_001039dd;
    piVar9 = *(int **)(this + 0x10);
  } while( true );
}



/* icu_76_godot::UnicodeSet::_toPattern(icu_76_godot::UnicodeString&, signed char) const */

UnicodeString * __thiscall
icu_76_godot::UnicodeSet::_toPattern(UnicodeSet *this,UnicodeString *param_1,char param_3)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  UnicodeString *pUVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  
  lVar12 = *(long *)(this + 0x40);
  if (lVar12 == 0) {
    pUVar7 = (UnicodeString *)_generatePattern(this,param_1,(int)param_3);
    return pUVar7;
  }
  iVar8 = *(int *)(this + 0x48);
  iVar10 = 0;
  iVar6 = 0;
  if (iVar8 < 1) {
    return param_1;
  }
  do {
    iVar2 = iVar6 + 1;
    uVar3 = *(ushort *)(lVar12 + (long)iVar6 * 2);
    uVar11 = (uint)uVar3;
    if ((((uVar11 & 0xfffffc00) == 0xd800) && (iVar2 != iVar8)) &&
       (uVar9 = (uint)*(ushort *)(lVar12 + 2 + (long)iVar6 * 2), (uVar9 & 0xfffffc00) == 0xdc00)) {
      uVar11 = uVar9 + 0xfca02400 + (uint)uVar3 * 0x400;
      iVar2 = iVar6 + 2;
    }
    iVar6 = iVar2;
    if (param_3 == '\0') {
      cVar5 = icu_76_godot::ICU_Utility::shouldAlwaysBeEscaped(uVar11);
      if (cVar5 != '\0') goto LAB_00103c1b;
LAB_00103c5c:
      iVar10 = iVar10 + 1;
      icu_76_godot::UnicodeString::append((int)param_1);
      if (uVar11 != 0x5c) goto LAB_00103c36;
      iVar8 = *(int *)(this + 0x48);
    }
    else {
      cVar5 = icu_76_godot::ICU_Utility::isUnprintable(uVar11);
      if (cVar5 == '\0') goto LAB_00103c5c;
LAB_00103c1b:
      if (iVar10 % 2 == 1) {
        uVar3 = *(ushort *)(param_1 + 8);
        if ((short)uVar3 < 0) {
          uVar4 = *(uint *)(param_1 + 0xc);
          uVar9 = uVar4 - 1;
          if ((uVar4 == 1) && ((uVar3 & 1) != 0)) goto LAB_00103d68;
          if (uVar9 < uVar4) {
            if ((int)uVar9 < 0x400) goto LAB_00103cc5;
            *(uint *)(param_1 + 0xc) = uVar9;
            *(ushort *)(param_1 + 8) = uVar3 | 0xffe0;
          }
        }
        else {
          sVar1 = ((short)uVar3 >> 5) + -1;
          uVar9 = (uint)sVar1;
          if ((sVar1 == 0) && ((uVar3 & 1) != 0)) {
LAB_00103d68:
            icu_76_godot::UnicodeString::unBogus();
          }
          else if (uVar9 < (uint)(int)((short)uVar3 >> 5)) {
LAB_00103cc5:
            *(ushort *)(param_1 + 8) = uVar3 & 0x1f | (ushort)(uVar9 << 5);
          }
        }
      }
      icu_76_godot::ICU_Utility::escape(param_1,uVar11);
LAB_00103c36:
      iVar8 = *(int *)(this + 0x48);
      iVar10 = 0;
    }
    if (iVar8 <= iVar6) {
      return param_1;
    }
    lVar12 = *(long *)(this + 0x40);
  } while( true );
}



/* icu_76_godot::UnicodeSet::toPattern(icu_76_godot::UnicodeString&, signed char) const */

void __thiscall icu_76_godot::UnicodeSet::toPattern(UnicodeSet *this,long param_1,char param_3)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = (int)((short)uVar1 >> 5);
    }
    if (iVar2 != 0) {
      *(ushort *)(param_1 + 8) = uVar1 & 0x1f;
    }
  }
  else {
    icu_76_godot::UnicodeString::unBogus();
  }
  _toPattern(this,param_1,(int)param_3);
  return;
}



/* non-virtual thunk to icu_76_godot::UnicodeSet::toPattern(icu_76_godot::UnicodeString&, signed
   char) const */

void __thiscall icu_76_godot::UnicodeSet::toPattern(UnicodeSet *this,long param_1,char param_3)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = (int)((short)uVar1 >> 5);
    }
    if (iVar2 != 0) {
      *(ushort *)(param_1 + 8) = uVar1 & 0x1f;
    }
  }
  else {
    icu_76_godot::UnicodeString::unBogus();
  }
  _toPattern(this + -8,param_1,(int)param_3);
  return;
}



/* icu_76_godot::UnicodeSet::releasePattern() */

void __thiscall icu_76_godot::UnicodeSet::releasePattern(UnicodeSet *this)

{
  if (*(long *)(this + 0x40) != 0) {
    uprv_free_76_godot();
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  return;
}



/* icu_76_godot::UnicodeSet::setPattern(char16_t const*, int) */

void __thiscall icu_76_godot::UnicodeSet::setPattern(UnicodeSet *this,wchar16 *param_1,int param_2)

{
  long lVar1;
  
  if (*(long *)(this + 0x40) != 0) {
    uprv_free_76_godot();
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  lVar1 = uprv_malloc_76_godot((long)(param_2 + 1) * 2);
  *(long *)(this + 0x40) = lVar1;
  if (lVar1 != 0) {
    *(int *)(this + 0x48) = param_2;
    u_memcpy_76_godot(lVar1,param_1,param_2);
    *(undefined2 *)(*(long *)(this + 0x40) + (long)*(int *)(this + 0x48) * 2) = 0;
  }
  return;
}



/* icu_76_godot::UnicodeSet::UnicodeSet(icu_76_godot::UnicodeSet const&, signed char) */

void __thiscall icu_76_godot::UnicodeSet::UnicodeSet(UnicodeSet *this,long param_1)

{
  int iVar1;
  void *__src;
  char cVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x20] = (UnicodeSet)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(UnicodeSet **)(this + 0x10) = this + 0x60;
  *(undefined8 *)(this + 0x18) = _LC0;
  *(undefined ***)this = &PTR__UnicodeSet_00105140;
  *(undefined ***)(this + 8) = &PTR__UnicodeSet_00105258;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  cVar2 = ensureCapacity(this,iVar1);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c);
    __src = *(void **)(param_1 + 0x10);
    *(int *)(this + 0x1c) = iVar1;
    memcpy(*(void **)(this + 0x10),__src,(long)iVar1 << 2);
    if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 8) != 0)) {
      local_24 = 0;
      cVar2 = allocateStrings(this,(UErrorCode *)&local_24);
      if ((cVar2 == '\0') ||
         (icu_76_godot::UVector::assign
                    (*(UVector **)(this + 0x50),
                     *(_func_void_UElement_ptr_UElement_ptr **)(param_1 + 0x50),
                     (UErrorCode *)cloneUnicodeString), 0 < local_24)) {
        clear(this);
        this[0x20] = (UnicodeSet)0x1;
        goto LAB_00103f64;
      }
    }
    if (*(wchar16 **)(param_1 + 0x40) != (wchar16 *)0x0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        setPattern(this,*(wchar16 **)(param_1 + 0x40),*(int *)(param_1 + 0x48));
        return;
      }
      goto LAB_00104031;
    }
  }
LAB_00103f64:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104031:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::cloneAsThawed() const */

UnicodeSet * icu_76_godot::UnicodeSet::cloneAsThawed(void)

{
  UnicodeSet *pUVar1;
  ulong in_RSI;
  
  pUVar1 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,in_RSI);
  if (pUVar1 != (UnicodeSet *)0x0) {
    UnicodeSet(pUVar1);
  }
  return pUVar1;
}



/* icu_76_godot::UnicodeSet::copyFrom(icu_76_godot::UnicodeSet const&, signed char) [clone .part.0]
    */

void __thiscall icu_76_godot::UnicodeSet::copyFrom(UnicodeSet *this,long param_1,char param_3)

{
  int iVar1;
  char cVar2;
  BMPSet *this_00;
  UnicodeSetStringSpan *this_01;
  void *__src;
  _func_void_UElement_ptr_UElement_ptr *p_Var3;
  UVector *pUVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = ensureCapacity(this,*(int *)(param_1 + 0x1c));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c);
    __src = *(void **)(param_1 + 0x10);
    *(int *)(this + 0x1c) = iVar1;
    memcpy(*(void **)(this + 0x10),__src,(long)iVar1 << 2);
    if ((*(long *)(param_1 + 0x28) != 0) && (param_3 == '\0')) {
      this_00 = (BMPSet *)icu_76_godot::UMemory::operator_new((UMemory *)0x368,(ulong)__src);
      if (this_00 == (BMPSet *)0x0) {
        *(undefined8 *)(this + 0x28) = 0;
        clear(this);
        this[0x20] = (UnicodeSet)0x1;
        goto LAB_001040af;
      }
      icu_76_godot::BMPSet::BMPSet
                (this_00,*(BMPSet **)(param_1 + 0x28),*(int **)(this + 0x10),*(int *)(this + 0x1c));
      *(BMPSet **)(this + 0x28) = this_00;
    }
    p_Var3 = *(_func_void_UElement_ptr_UElement_ptr **)(param_1 + 0x50);
    pUVar4 = *(UVector **)(this + 0x50);
    if ((p_Var3 == (_func_void_UElement_ptr_UElement_ptr *)0x0) || (*(int *)(p_Var3 + 8) == 0)) {
      if ((pUVar4 != (UVector *)0x0) && (*(int *)(pUVar4 + 8) != 0)) {
        icu_76_godot::UVector::removeAllElements();
      }
LAB_00104168:
      if ((*(long *)(param_1 + 0x58) != 0) && (param_3 == '\0')) {
        this_01 = (UnicodeSetStringSpan *)
                  icu_76_godot::UMemory::operator_new((UMemory *)0x188,(ulong)p_Var3);
        if (this_01 == (UnicodeSetStringSpan *)0x0) {
          *(undefined8 *)(this + 0x58) = 0;
          goto LAB_00104142;
        }
        icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan
                  (this_01,*(UnicodeSetStringSpan **)(param_1 + 0x58),*(UVector **)(this + 0x50));
        *(UnicodeSetStringSpan **)(this + 0x58) = this_01;
      }
      if (*(long *)(this + 0x40) != 0) {
        uprv_free_76_godot();
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined4 *)(this + 0x48) = 0;
      }
      if (*(wchar16 **)(param_1 + 0x40) != (wchar16 *)0x0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          setPattern(this,*(wchar16 **)(param_1 + 0x40),*(int *)(param_1 + 0x48));
          return;
        }
        goto LAB_00104268;
      }
    }
    else {
      local_34 = 0;
      if (pUVar4 == (UVector *)0x0) {
        cVar2 = allocateStrings(this,(UErrorCode *)&local_34);
        if (cVar2 != '\0') {
          pUVar4 = *(UVector **)(this + 0x50);
          p_Var3 = *(_func_void_UElement_ptr_UElement_ptr **)(param_1 + 0x50);
          goto LAB_0010412b;
        }
      }
      else {
LAB_0010412b:
        icu_76_godot::UVector::assign(pUVar4,p_Var3,(UErrorCode *)cloneUnicodeString);
        if (local_34 < 1) goto LAB_00104168;
      }
LAB_00104142:
      clear(this);
      this[0x20] = (UnicodeSet)0x1;
    }
  }
LAB_001040af:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104268:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::copyFrom(icu_76_godot::UnicodeSet const&, signed char) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::copyFrom(UnicodeSet *this,UnicodeSet *param_1,char param_3)

{
  if (((this != param_1) && (*(long *)(this + 0x28) == 0)) && (*(long *)(this + 0x58) == 0)) {
    if (((byte)param_1[0x20] & 1) == 0) {
      copyFrom(this,param_1,(int)param_3);
    }
    else {
      clear(this);
      this[0x20] = (UnicodeSet)0x1;
    }
    return this;
  }
  return this;
}



/* icu_76_godot::UnicodeSet::clone() const */

UnicodeSet * icu_76_godot::UnicodeSet::clone(void)

{
  undefined8 uVar1;
  UnicodeSet *pUVar2;
  ulong in_RSI;
  UnicodeSet *in_RDI;
  
  pUVar2 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,in_RSI);
  if (pUVar2 != (UnicodeSet *)0x0) {
    pUVar2[0x20] = (UnicodeSet)0x0;
    *(undefined4 *)(pUVar2 + 0x38) = 0;
    *(UnicodeSet **)(pUVar2 + 0x10) = pUVar2 + 0x60;
    uVar1 = _LC0;
    *(undefined8 *)(pUVar2 + 0x40) = 0;
    *(undefined ***)pUVar2 = &PTR__UnicodeSet_00105140;
    *(undefined ***)(pUVar2 + 8) = &PTR__UnicodeSet_00105258;
    *(undefined8 *)(pUVar2 + 0x18) = uVar1;
    *(undefined4 *)(pUVar2 + 0x48) = 0;
    *(undefined1 (*) [16])(pUVar2 + 0x28) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pUVar2 + 0x50) = (undefined1  [16])0x0;
    if (pUVar2 != in_RDI) {
      if (((byte)in_RDI[0x20] & 1) == 0) {
        copyFrom(pUVar2);
      }
      else {
        *(undefined4 *)(pUVar2 + 0x60) = 0x110000;
        pUVar2[0x20] = (UnicodeSet)0x1;
      }
    }
  }
  return pUVar2;
}



/* icu_76_godot::UnicodeSet::UnicodeSet(icu_76_godot::UnicodeSet const&) */

void __thiscall icu_76_godot::UnicodeSet::UnicodeSet(UnicodeSet *this,UnicodeSet *param_1)

{
  undefined8 uVar1;
  
  this[0x20] = (UnicodeSet)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(UnicodeSet **)(this + 0x10) = this + 0x60;
  uVar1 = _LC0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__UnicodeSet_00105140;
  *(undefined ***)(this + 8) = &PTR__UnicodeSet_00105258;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  if (this == param_1) {
    return;
  }
  if (((byte)param_1[0x20] & 1) == 0) {
    copyFrom(this,param_1,0);
    return;
  }
  *(undefined4 *)(this + 0x60) = 0x110000;
  this[0x20] = (UnicodeSet)0x1;
  return;
}



/* icu_76_godot::UnicodeSet::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UnicodeSet const&) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::operator=(UnicodeSet *this,UnicodeSet *param_1)

{
  if (((this != param_1) && (*(long *)(this + 0x28) == 0)) && (*(long *)(this + 0x58) == 0)) {
    if (((byte)param_1[0x20] & 1) == 0) {
      copyFrom(this,param_1,0);
    }
    else {
      clear(this);
      this[0x20] = (UnicodeSet)0x1;
    }
    return this;
  }
  return this;
}



/* icu_76_godot::UnicodeSet::freeze() */

void icu_76_godot::UnicodeSet::freeze(void)

{
  uint uVar1;
  int iVar2;
  UnicodeSetStringSpan *this;
  BMPSet *this_00;
  UnicodeSet *in_RSI;
  UnicodeSet *in_RDI;
  
  if (*(long *)(in_RDI + 0x28) != 0) {
    return;
  }
  if (*(long *)(in_RDI + 0x58) != 0) {
    return;
  }
  if (((byte)in_RDI[0x20] & 1) != 0) {
    return;
  }
  compact(in_RDI);
  if ((*(long *)(in_RDI + 0x50) == 0) ||
     (uVar1 = *(uint *)(*(long *)(in_RDI + 0x50) + 8), in_RSI = (UnicodeSet *)(ulong)uVar1,
     uVar1 == 0)) {
    if (*(long *)(in_RDI + 0x58) != 0) {
      return;
    }
  }
  else {
    this = (UnicodeSetStringSpan *)
           icu_76_godot::UMemory::operator_new((UMemory *)0x188,(ulong)in_RSI);
    if (this == (UnicodeSetStringSpan *)0x0) {
      *(undefined8 *)(in_RDI + 0x58) = 0;
      clear(in_RDI);
      in_RDI[0x20] = (UnicodeSet)0x1;
      return;
    }
    in_RSI = in_RDI;
    icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan
              (this,in_RDI,*(UVector **)(in_RDI + 0x50),0x3f);
    iVar2 = *(int *)(this + 0xfc);
    *(UnicodeSetStringSpan **)(in_RDI + 0x58) = this;
    if (iVar2 != 0) {
      return;
    }
    icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(this);
    icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
    *(undefined8 *)(in_RDI + 0x58) = 0;
  }
  this_00 = (BMPSet *)icu_76_godot::UMemory::operator_new((UMemory *)0x368,(ulong)in_RSI);
  if (this_00 == (BMPSet *)0x0) {
    *(undefined8 *)(in_RDI + 0x28) = 0;
    clear(in_RDI);
    in_RDI[0x20] = (UnicodeSet)0x1;
  }
  else {
    icu_76_godot::BMPSet::BMPSet(this_00,*(int **)(in_RDI + 0x10),*(int *)(in_RDI + 0x1c));
    *(BMPSet **)(in_RDI + 0x28) = this_00;
  }
  return;
}



/* icu_76_godot::UnicodeSet::span(char16_t const*, int, USetSpanCondition) const */

long icu_76_godot::UnicodeSet::span(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  if ((0 < param_3) && (*(long *)(param_1 + 0x28) != 0)) {
    lVar1 = icu_76_godot::BMPSet::span
                      (*(long *)(param_1 + 0x28),param_2,param_2 + (long)param_3 * 2);
    return lVar1 - param_2 >> 1;
  }
  lVar1 = span();
  return lVar1;
}



/* icu_76_godot::UnicodeSet::spanBack(char16_t const*, int, USetSpanCondition) const */

ulong __thiscall
icu_76_godot::UnicodeSet::spanBack(UnicodeSet *this,long param_1,int param_2,int param_4)

{
  ushort uVar1;
  UVector *pUVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  UnicodeSetStringSpan aUStack_1b8 [252];
  int local_bc;
  long local_30;
  
  uVar9 = (ulong)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 1) {
    if (param_2 != 0) {
      uVar4 = u_strlen_76_godot(param_1);
      uVar9 = (ulong)uVar4;
      if (uVar4 != 0) goto LAB_00104670;
    }
    uVar8 = 0;
  }
  else if (*(long *)(this + 0x28) == 0) {
LAB_00104670:
    if (*(long *)(this + 0x58) != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar9 = icu_76_godot::UnicodeSetStringSpan::spanBack
                          (*(long *)(this + 0x58),param_1,uVar9 & 0xffffffff,param_4);
        return uVar9;
      }
      goto LAB_001047e2;
    }
    pUVar2 = *(UVector **)(this + 0x50);
    if ((pUVar2 == (UVector *)0x0) || (*(int *)(pUVar2 + 8) == 0)) {
LAB_00104720:
      do {
        uVar7 = (int)uVar9 - 1;
        uVar8 = (ulong)uVar7;
        uVar1 = *(ushort *)(param_1 + (long)(int)uVar7 * 2);
        uVar4 = (uint)uVar1;
        uVar10 = (uint)(param_4 != 0);
        if ((uVar4 & 0xfffffc00) == 0xdc00) {
          if ((int)uVar7 < 1) {
            cVar3 = contains(this,(uint)uVar1);
            if ((int)cVar3 != uVar10) {
              uVar8 = uVar9 & 0xffffffff;
            }
            goto LAB_00104630;
          }
          uVar5 = (uint)*(ushort *)(param_1 + -2 + (long)(int)uVar7 * 2);
          if ((uVar5 & 0xfffffc00) == 0xd800) {
            uVar8 = (ulong)((int)uVar9 - 2);
            uVar4 = uVar4 + 0xfca02400 + uVar5 * 0x400;
            goto LAB_0010474d;
          }
          cVar3 = contains(this,uVar4);
          if ((int)cVar3 != uVar10) goto LAB_001047a0;
        }
        else {
LAB_0010474d:
          uVar7 = (uint)uVar8;
          cVar3 = contains(this,uVar4);
          if ((int)cVar3 != uVar10) {
LAB_001047a0:
            uVar8 = uVar9 & 0xffffffff;
            goto LAB_00104630;
          }
          if ((int)uVar7 < 1) goto LAB_00104630;
        }
        uVar9 = (ulong)uVar7;
      } while( true );
    }
    icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan
              (aUStack_1b8,this,pUVar2,0x1a - (param_4 == 0));
    if (local_bc == 0) {
      icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(aUStack_1b8);
      goto LAB_00104720;
    }
    uVar4 = icu_76_godot::UnicodeSetStringSpan::spanBack
                      (aUStack_1b8,param_1,uVar9 & 0xffffffff,param_4);
    uVar8 = (ulong)uVar4;
    icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(aUStack_1b8);
  }
  else {
    lVar6 = icu_76_godot::BMPSet::spanBack(*(long *)(this + 0x28),param_1,param_1 + uVar9 * 2);
    uVar8 = lVar6 - param_1 >> 1;
  }
LAB_00104630:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8 & 0xffffffff;
  }
LAB_001047e2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::spanUTF8(char const*, int, USetSpanCondition) const */

ulong __thiscall
icu_76_godot::UnicodeSet::spanUTF8(UnicodeSet *this,char *param_1,ulong param_3,int param_4)

{
  UVector *pUVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  UnicodeSetStringSpan aUStack_1c8 [256];
  int local_c8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_3 < 1) {
    if ((int)param_3 != 0) {
      sVar5 = strlen(param_1);
      param_3 = sVar5 & 0xffffffff;
      if ((int)sVar5 != 0) goto LAB_00104878;
    }
    uVar4 = 0;
  }
  else {
    param_3 = param_3 & 0xffffffff;
    if (*(long *)(this + 0x28) == 0) {
LAB_00104878:
      uVar9 = (uint)param_3;
      if (*(long *)(this + 0x58) != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = icu_76_godot::UnicodeSetStringSpan::spanUTF8
                            (*(long *)(this + 0x58),param_1,param_3,param_4);
          return uVar6;
        }
        goto LAB_00104a9e;
      }
      pUVar1 = *(UVector **)(this + 0x50);
      if ((pUVar1 == (UVector *)0x0) || (*(int *)(pUVar1 + 8) == 0)) {
LAB_00104920:
        uVar4 = 0;
        do {
          uVar13 = uVar4 + 1;
          bVar7 = param_1[(int)uVar4];
          uVar11 = (uint)bVar7;
          uVar12 = (uint)(param_4 != 0);
          if ((char)bVar7 < '\0') {
            if (uVar13 == uVar9) {
LAB_001049c0:
              cVar2 = contains(this,0xfffd);
              if ((int)cVar2 == uVar12) {
                uVar4 = uVar9;
              }
              goto LAB_00104839;
            }
            uVar10 = (uint)bVar7;
            if (bVar7 < 0xe0) {
              if (0xc1 < uVar10) {
                uVar10 = uVar11 & 0x1f;
LAB_00104a2b:
                lVar8 = (long)(int)uVar13;
                uVar11 = 0xfffd;
                if ((byte)(param_1[lVar8] + 0x80U) < 0x40) {
                  uVar13 = uVar13 + 1;
                  uVar11 = (uint)(byte)(param_1[lVar8] + 0x80U) | uVar10 << 6;
                }
                goto LAB_00104943;
              }
            }
            else if (uVar10 < 0xf0) {
              uVar10 = uVar10 & 0xf;
              bVar7 = param_1[(int)uVar13] & 0x3f;
              if (((uint)(int)(char)(&_LC2)[uVar11 & 0xf] >> ((byte)param_1[(int)uVar13] >> 5) & 1)
                  != 0) {
LAB_001049a7:
                uVar13 = uVar13 + 1;
                if (uVar13 == uVar9) goto LAB_001049c0;
                uVar10 = (uint)bVar7 | uVar10 << 6;
                goto LAB_00104a2b;
              }
            }
            else {
              uVar10 = uVar10 - 0xf0;
              if (((int)uVar10 < 5) &&
                 (lVar8 = (long)(int)uVar13,
                 ((uint)(int)(char)(&DAT_00105078)[(byte)param_1[lVar8] >> 4] >> (uVar10 & 0x1f) & 1
                 ) != 0)) {
                uVar13 = uVar4 + 2;
                if (uVar13 == uVar9) {
                  cVar2 = contains(this,0xfffd);
                  if (uVar12 == (int)cVar2) {
                    uVar4 = uVar9;
                  }
                  goto LAB_00104839;
                }
                bVar7 = param_1[(int)uVar13] + 0x80;
                if (bVar7 < 0x40) {
                  uVar10 = uVar10 * 0x40 | (byte)param_1[lVar8] & 0x3f;
                  goto LAB_001049a7;
                }
              }
            }
            uVar11 = 0xfffd;
          }
LAB_00104943:
          cVar2 = contains(this,uVar11);
          if (((int)cVar2 != uVar12) || (uVar4 = uVar13, (int)uVar9 <= (int)uVar13))
          goto LAB_00104839;
        } while( true );
      }
      icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan
                (aUStack_1c8,this,pUVar1,0x26 - (param_4 == 0));
      if (local_c8 == 0) {
        icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(aUStack_1c8);
        goto LAB_00104920;
      }
      uVar4 = icu_76_godot::UnicodeSetStringSpan::spanUTF8(aUStack_1c8,param_1,param_3,param_4);
      icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(aUStack_1c8);
    }
    else {
      iVar3 = icu_76_godot::BMPSet::spanUTF8();
      uVar4 = iVar3 - (int)param_1;
    }
  }
LAB_00104839:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar4;
  }
LAB_00104a9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::spanBackUTF8(char const*, int, USetSpanCondition) const */

int __thiscall
icu_76_godot::UnicodeSet::spanBackUTF8(UnicodeSet *this,char *param_1,ulong param_3,int param_4)

{
  byte bVar1;
  UVector *pUVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  int local_1bc;
  UnicodeSetStringSpan local_1b8 [256];
  int local_b8;
  long local_30;
  
  local_1bc = (int)param_3;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_1bc < 1) {
    if (local_1bc != 0) {
      sVar6 = strlen(param_1);
      local_1bc = (int)sVar6;
      param_3 = sVar6 & 0xffffffff;
      if (local_1bc != 0) goto LAB_00104b3c;
    }
    iVar4 = 0;
  }
  else {
    if (*(long *)(this + 0x28) != 0) {
      iVar4 = icu_76_godot::BMPSet::spanBackUTF8();
      goto LAB_00104af8;
    }
LAB_00104b3c:
    if (*(long *)(this + 0x58) == 0) {
      pUVar2 = *(UVector **)(this + 0x50);
      if ((pUVar2 != (UVector *)0x0) && (*(int *)(pUVar2 + 8) != 0)) {
        icu_76_godot::UnicodeSetStringSpan::UnicodeSetStringSpan
                  (local_1b8,this,pUVar2,0x16 - (param_4 == 0));
        if (local_b8 != 0) {
          iVar4 = icu_76_godot::UnicodeSetStringSpan::spanBackUTF8
                            (local_1b8,param_1,local_1bc,param_4);
          icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(local_1b8);
          goto LAB_00104af8;
        }
        icu_76_godot::UnicodeSetStringSpan::~UnicodeSetStringSpan(local_1b8);
      }
      iVar4 = local_1bc;
      do {
        local_1bc = iVar4 + -1;
        bVar1 = param_1[local_1bc];
        uVar5 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          uVar5 = utf8_prevCharSafeBody_76_godot(param_1,0,&local_1bc,bVar1,0xfffffffd);
        }
        cVar3 = contains(this,uVar5);
      } while (((int)cVar3 == (uint)(param_4 != 0)) && (iVar4 = local_1bc, 0 < local_1bc));
    }
    else {
      iVar4 = icu_76_godot::UnicodeSetStringSpan::spanBackUTF8
                        (*(long *)(this + 0x58),param_1,param_3,param_4);
    }
  }
LAB_00104af8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00104f1f:
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
      goto LAB_00104f1f;
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


