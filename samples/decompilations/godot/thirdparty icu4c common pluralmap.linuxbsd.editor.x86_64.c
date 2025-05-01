
/* icu_76_godot::PluralMapBase::toCategory(char const*) */

ulong icu_76_godot::PluralMapBase::toCategory(char *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = strcmp(param_1,(&gPluralForms)[uVar2]);
    if (iVar1 == 0) {
      return uVar2 & 0xffffffff;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 6);
  return 0xffffffff;
}



/* icu_76_godot::PluralMapBase::toCategory(icu_76_godot::UnicodeString const&) */

ulong icu_76_godot::PluralMapBase::toCategory(UnicodeString *param_1)

{
  char *__s1;
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  char *local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (char *)((long)&local_5c + 1);
  local_60 = 0x28;
  local_30 = 0;
  local_5c = 0;
  icu_76_godot::CharString::appendInvariantChars((UnicodeString *)&local_68,param_1);
  __s1 = local_68;
  uVar2 = 0;
  do {
    iVar1 = strcmp(__s1,(&gPluralForms)[uVar2]);
    if (iVar1 == 0) goto LAB_001000dd;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 6);
  uVar2 = 0xffffffff;
LAB_001000dd:
  if ((char)local_5c != '\0') {
    uprv_free_76_godot(local_68);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 0xffffffff;
}



/* icu_76_godot::PluralMapBase::getCategoryName(icu_76_godot::PluralMapBase::Category) */

undefined * icu_76_godot::PluralMapBase::getCategoryName(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (param_1 < 6) {
    puVar1 = (&gPluralForms)[(int)param_1];
  }
  return puVar1;
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
LAB_0010041f:
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
      goto LAB_0010041f;
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


