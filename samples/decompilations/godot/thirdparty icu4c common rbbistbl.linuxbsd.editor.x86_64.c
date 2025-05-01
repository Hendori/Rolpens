
/* icu_76_godot::RBBISymbolTable::lookupMatcher(int) const */

undefined8 __thiscall
icu_76_godot::RBBISymbolTable::lookupMatcher(RBBISymbolTable *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0xffff) {
    uVar1 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x60) = 0;
  }
  return uVar1;
}



/* icu_76_godot::RBBISymbolTable::~RBBISymbolTable() */

void __thiscall icu_76_godot::RBBISymbolTable::~RBBISymbolTable(RBBISymbolTable *this)

{
  *(undefined ***)this = &PTR__RBBISymbolTable_00100930;
  uhash_close_76_godot(*(undefined8 *)(this + 0x10));
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x20));
  icu_76_godot::SymbolTable::~SymbolTable((SymbolTable *)this);
  return;
}



/* icu_76_godot::RBBISymbolTable::lookup(icu_76_godot::UnicodeString const&) const */

UnicodeString * icu_76_godot::RBBISymbolTable::lookup(UnicodeString *param_1)

{
  int *piVar1;
  UnicodeString *pUVar2;
  
  pUVar2 = (UnicodeString *)uhash_get_76_godot(*(undefined8 *)(param_1 + 0x10));
  if (pUVar2 != (UnicodeString *)0x0) {
    piVar1 = *(int **)(*(long *)(pUVar2 + 0x48) + 0x10);
    if (*piVar1 != 0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      return (UnicodeString *)(piVar1 + 0xc);
    }
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(piVar1 + 4) + 0x20);
    pUVar2 = param_1 + 0x20;
  }
  return pUVar2;
}



/* icu_76_godot::RBBISymbolTable::lookupNode(icu_76_godot::UnicodeString const&) const */

long icu_76_godot::RBBISymbolTable::lookupNode(UnicodeString *param_1)

{
  long lVar1;
  
  lVar1 = uhash_get_76_godot(*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x48);
  }
  return lVar1;
}



/* icu_76_godot::RBBISymbolTable::parseReference(icu_76_godot::UnicodeString const&,
   icu_76_godot::ParsePosition&, int) const */

UnicodeString *
icu_76_godot::RBBISymbolTable::parseReference
          (UnicodeString *param_1,ParsePosition *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long in_RCX;
  uint uVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  uint uVar7;
  undefined2 uVar8;
  uint in_R8D;
  long lVar9;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  uVar2 = *(uint *)(in_RCX + 8);
  *(code **)param_1 = u_isIDStart_76_godot;
  *(undefined2 *)(param_1 + 8) = 2;
  if ((int)uVar2 < (int)in_R8D) {
    lVar9 = (long)(int)uVar2 * 2;
    uVar7 = uVar2;
    do {
      uVar1 = *(ushort *)(plVar6 + 1);
      if ((short)uVar1 < 0) {
        uVar5 = *(uint *)((long)plVar6 + 0xc);
      }
      else {
        uVar5 = (uint)((short)uVar1 >> 5);
      }
      uVar8 = 0xffff;
      if (uVar7 < uVar5) {
        if ((uVar1 & 2) == 0) {
          lVar4 = plVar6[3];
        }
        else {
          lVar4 = (long)plVar6 + 10;
        }
        uVar8 = *(undefined2 *)(lVar4 + lVar9);
      }
      if ((uVar2 == uVar7) && (cVar3 = u_isIDStart_76_godot(), cVar3 == '\0')) {
        return param_1;
      }
      cVar3 = u_isIDPart_76_godot(uVar8);
      if (cVar3 == '\0') break;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 2;
    } while (in_R8D != uVar7);
    if (uVar2 != uVar7) {
      *(uint *)(in_RCX + 8) = uVar7;
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar2,uVar7,param_1);
    }
  }
  return param_1;
}



/* icu_76_godot::RBBISymbolTable::addEntry(icu_76_godot::UnicodeString const&,
   icu_76_godot::RBBINode*, UErrorCode&) */

void __thiscall
icu_76_godot::RBBISymbolTable::addEntry
          (RBBISymbolTable *this,UnicodeString *param_1,RBBINode *param_2,UErrorCode *param_3)

{
  long lVar1;
  void *pvVar2;
  UnicodeString *pUVar3;
  
  if (0 < *(int *)param_3) {
    return;
  }
  pUVar3 = param_1;
  lVar1 = uhash_get_76_godot(*(undefined8 *)(this + 0x10));
  if (lVar1 == 0) {
    pvVar2 = icu_76_godot::UMemory::operator_new((UMemory *)0x50,(ulong)pUVar3);
    if (pvVar2 != (void *)0x0) {
      *(undefined8 *)((long)pvVar2 + 0x48) = 0;
      *(code **)((long)pvVar2 + 8) = u_isIDStart_76_godot;
      *(undefined2 *)((long)pvVar2 + 0x10) = 2;
      icu_76_godot::UnicodeString::operator=((UnicodeString *)((long)pvVar2 + 8),param_1);
      *(RBBINode **)((long)pvVar2 + 0x48) = param_2;
      uhash_put_76_godot(*(undefined8 *)(this + 0x10),(UnicodeString *)((long)pvVar2 + 8),pvVar2,
                         param_3);
      return;
    }
    *(undefined4 *)param_3 = 7;
  }
  else {
    *(undefined4 *)param_3 = 0x10206;
  }
  return;
}



/* icu_76_godot::RBBISymbolTable::~RBBISymbolTable() */

void __thiscall icu_76_godot::RBBISymbolTable::~RBBISymbolTable(RBBISymbolTable *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__RBBISymbolTable_00100930;
  uhash_close_76_godot(*(undefined8 *)(this + 0x10));
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x20));
  icu_76_godot::SymbolTable::~SymbolTable((SymbolTable *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



void RBBISymbolTableEntry_deleter(UMemory *param_1,void *param_2)

{
  RBBINode *this;
  RBBINode *this_00;
  
  if (param_1 != (UMemory *)0x0) {
    this_00 = *(RBBINode **)(param_1 + 0x48);
    this = *(RBBINode **)(this_00 + 0x10);
    if (this != (RBBINode *)0x0) {
      icu_76_godot::RBBINode::~RBBINode(this);
      icu_76_godot::UMemory::operator_delete((UMemory *)this,param_2);
      this_00 = *(RBBINode **)(param_1 + 0x48);
    }
    *(undefined8 *)(this_00 + 0x10) = 0;
    icu_76_godot::RBBINode::~RBBINode(this_00);
    icu_76_godot::UMemory::operator_delete((UMemory *)this_00,param_2);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(param_1 + 8));
    icu_76_godot::UMemory::operator_delete(param_1,param_2);
    return;
  }
  return;
}



/* icu_76_godot::RBBISymbolTable::RBBISymbolTable(icu_76_godot::RBBIRuleScanner*,
   icu_76_godot::UnicodeString const&, UErrorCode&) */

void __thiscall
icu_76_godot::RBBISymbolTable::RBBISymbolTable
          (RBBISymbolTable *this,RBBIRuleScanner *param_1,UnicodeString *param_2,UErrorCode *param_3
          )

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__RBBISymbolTable_00100930;
  *(UnicodeString **)(this + 8) = param_2;
  *(RBBIRuleScanner **)(this + 0x18) = param_1;
  icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)(this + 0x20),L'\xffff');
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  uVar2 = uhash_open_76_godot(&uhash_hashUnicodeString_76_godot,&uhash_compareUnicodeString_76_godot
                              ,0,param_3);
  iVar1 = *(int *)param_3;
  *(undefined8 *)(this + 0x10) = uVar2;
  if (0 < iVar1) {
    return;
  }
  uhash_setValueDeleter_76_godot(uVar2,RBBISymbolTableEntry_deleter);
  return;
}



/* icu_76_godot::RBBISymbolTableEntry::RBBISymbolTableEntry() */

void __thiscall icu_76_godot::RBBISymbolTableEntry::RBBISymbolTableEntry(RBBISymbolTableEntry *this)

{
  *(undefined8 *)(this + 0x48) = 0;
  *(code **)(this + 8) = u_isIDStart_76_godot;
  *(undefined2 *)(this + 0x10) = 2;
  return;
}



/* icu_76_godot::RBBISymbolTableEntry::~RBBISymbolTableEntry() */

void __thiscall
icu_76_godot::RBBISymbolTableEntry::~RBBISymbolTableEntry(RBBISymbolTableEntry *this)

{
  RBBINode *this_00;
  RBBINode *this_01;
  void *in_RSI;
  
  this_01 = *(RBBINode **)(this + 0x48);
  this_00 = *(RBBINode **)(this_01 + 0x10);
  if (this_00 != (RBBINode *)0x0) {
    icu_76_godot::RBBINode::~RBBINode(this_00);
    icu_76_godot::UMemory::operator_delete((UMemory *)this_00,in_RSI);
    this_01 = *(RBBINode **)(this + 0x48);
  }
  *(undefined8 *)(this_01 + 0x10) = 0;
  icu_76_godot::RBBINode::~RBBINode(this_01);
  icu_76_godot::UMemory::operator_delete((UMemory *)this_01,in_RSI);
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 8));
  return;
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
LAB_0010072f:
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
      goto LAB_0010072f;
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


