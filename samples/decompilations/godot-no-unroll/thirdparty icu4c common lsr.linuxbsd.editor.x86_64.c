
/* icu_76_godot::LSR::LSR(icu_76_godot::LSR&&) */

void __thiscall icu_76_godot::LSR::LSR(LSR *this,LSR *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined4 *)(this + 0x28) = uVar1;
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar6;
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined **)param_1 = &_LC0;
    *(undefined **)(param_1 + 8) = &_LC0;
  }
  return;
}



/* icu_76_godot::LSR::deleteOwned() */

void __thiscall icu_76_godot::LSR::deleteOwned(LSR *this)

{
  uprv_free_76_godot(*(undefined8 *)(this + 0x18));
  return;
}



/* icu_76_godot::LSR::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::LSR&&) */

LSR * __thiscall icu_76_godot::LSR::operator=(LSR *this,LSR *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(this + 0x18) != 0) {
    uprv_free_76_godot();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(long *)(this + 0x18) = lVar3;
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined **)param_1 = &_LC0;
    *(undefined **)(param_1 + 8) = &_LC0;
  }
  return this;
}



/* icu_76_godot::LSR::isEquivalentTo(icu_76_godot::LSR const&) const */

bool __thiscall icu_76_godot::LSR::isEquivalentTo(LSR *this,LSR *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = strcmp(*(char **)this,*(char **)param_1);
  if (iVar1 == 0) {
    iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
    if (((iVar1 == 0) && (*(int *)(this + 0x20) == *(int *)(param_1 + 0x20))) &&
       (bVar2 = true, *(int *)(this + 0x20) < 1)) {
      iVar1 = strcmp(*(char **)(this + 0x10),*(char **)(param_1 + 0x10));
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}



/* icu_76_godot::LSR::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::LSR const&) const */

bool __thiscall icu_76_godot::LSR::operator==(LSR *this,LSR *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = strcmp(*(char **)this,*(char **)param_1);
  if ((((iVar1 == 0) && (iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8)), iVar1 == 0))
      && (*(int *)(this + 0x20) == *(int *)(param_1 + 0x20))) &&
     ((0 < *(int *)(this + 0x20) ||
      (iVar1 = strcmp(*(char **)(this + 0x10),*(char **)(param_1 + 0x10)), bVar2 = false, iVar1 == 0
      )))) {
    bVar2 = *(int *)(this + 0x24) == *(int *)(param_1 + 0x24);
  }
  return bVar2;
}



/* icu_76_godot::LSR::indexForRegion(char const*) */

int icu_76_godot::LSR::indexForRegion(char *param_1)

{
  uint uVar1;
  
  uVar1 = (int)*param_1 - 0x30;
  if (uVar1 < 10) {
    if ((((int)param_1[1] - 0x30U < 10) && ((int)param_1[2] - 0x30U < 10)) && (param_1[3] == '\0'))
    {
      return param_1[2] + -0x2f + (((int)param_1[1] - 0x30U) + uVar1 * 10) * 10;
    }
  }
  else {
    uVar1 = (int)*param_1 - 0x41;
    if (((uVar1 < 0x1a) && ((int)param_1[1] - 0x41U < 0x1a)) && (param_1[2] == '\0')) {
      return param_1[1] + 0x3a8 + uVar1 * 0x1a;
    }
  }
  return 0;
}



/* icu_76_godot::LSR::LSR(char, char const*, char const*, char const*, int, UErrorCode&) */

void __thiscall
icu_76_godot::LSR::LSR
          (LSR *this,char param_1,char *param_2,char *param_3,char *param_4,int param_5,
          UErrorCode *param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_98 [2];
  uint local_90;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(char **)(this + 0x10) = param_4;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  uVar3 = indexForRegion(param_4);
  iVar1 = *(int *)param_6;
  *(int *)(this + 0x24) = param_5;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x28) = 0;
  if (iVar1 < 1) {
    local_88 = (long)&local_7c + 1;
    local_80 = 0x28;
    local_50 = 0;
    local_7c = 0;
    cVar6 = (char)(UErrorCode *)&local_88;
    pcVar4 = (char *)icu_76_godot::CharString::append(cVar6,(UErrorCode *)(ulong)(uint)(int)param_1)
    ;
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_98,param_2);
    cVar2 = icu_76_godot::CharString::append(pcVar4,local_98[0],(UErrorCode *)(ulong)local_90);
    icu_76_godot::CharString::append(cVar2,(UErrorCode *)0x0);
    lVar7 = (long)local_50;
    pcVar4 = (char *)icu_76_godot::CharString::append(cVar6,(UErrorCode *)(ulong)(uint)(int)param_1)
    ;
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_98,param_3);
    icu_76_godot::CharString::append(pcVar4,local_98[0],(UErrorCode *)(ulong)local_90);
    lVar5 = icu_76_godot::CharString::cloneData((UErrorCode *)&local_88);
    iVar1 = *(int *)param_6;
    *(long *)(this + 0x18) = lVar5;
    if (iVar1 < 1) {
      *(long *)this = lVar5;
      *(long *)(this + 8) = lVar5 + lVar7;
    }
    if ((char)local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::LSR::LSR(icu_76_godot::StringPiece, icu_76_godot::StringPiece,
   icu_76_godot::StringPiece, int, UErrorCode&) */

void __thiscall
icu_76_godot::LSR::LSR
          (LSR *this,int param_2,ulong param_3,int param_4,ulong param_5,undefined4 param_6,
          char *param_7,ulong param_8,int *param_9)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  uVar4 = indexForRegion(param_7);
  iVar1 = *param_9;
  *(undefined4 *)(this + 0x24) = param_6;
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x28) = 0;
  if (iVar1 < 1) {
    local_88 = (long)&local_7c + 1;
    local_80 = 0x28;
    local_50 = 0;
    local_7c = 0;
    cVar3 = icu_76_godot::CharString::append
                      ((char *)&local_88,param_2,(UErrorCode *)(param_3 & 0xffffffff));
    icu_76_godot::CharString::append(cVar3,(UErrorCode *)0x0);
    iVar2 = local_50;
    cVar3 = icu_76_godot::CharString::append
                      ((char *)&local_88,param_4,(UErrorCode *)(param_5 & 0xffffffff));
    icu_76_godot::CharString::append(cVar3,(UErrorCode *)0x0);
    lVar6 = (long)local_50;
    icu_76_godot::CharString::append
              ((char *)&local_88,(int)param_7,(UErrorCode *)(param_8 & 0xffffffff));
    lVar5 = icu_76_godot::CharString::cloneData((UErrorCode *)&local_88);
    iVar1 = *param_9;
    *(long *)(this + 0x18) = lVar5;
    if (iVar1 < 1) {
      *(long *)this = lVar5;
      *(long *)(this + 8) = iVar2 + lVar5;
      *(long *)(this + 0x10) = lVar5 + lVar6;
    }
    if ((char)local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::LSR::setHashCode() */

LSR * __thiscall icu_76_godot::LSR::setHashCode(LSR *this)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  
  if (*(int *)(this + 0x28) != 0) {
    return this;
  }
  pcVar1 = *(char **)this;
  sVar4 = strlen(pcVar1);
  iVar2 = ustr_hashCharsN_76_godot(pcVar1,sVar4 & 0xffffffff);
  pcVar1 = *(char **)(this + 8);
  sVar4 = strlen(pcVar1);
  iVar3 = ustr_hashCharsN_76_godot(pcVar1,sVar4 & 0xffffffff);
  *(int *)(this + 0x28) =
       ((iVar3 + iVar2 * 0x25) * 0x25 + *(int *)(this + 0x20)) * 0x25 + *(int *)(this + 0x24);
  return this;
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
LAB_001008bf:
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
      goto LAB_001008bf;
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


