
void ulocale_close_76_godot(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



long ulocale_getLanguage_76_godot(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



long ulocale_getScript_76_godot(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x14;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



long ulocale_getRegion_76_godot(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1a;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



undefined * ulocale_getVariant_76_godot(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &_LC0;
    if (*(char *)(param_1 + 0xd8) == '\0') {
      return (undefined *)((long)*(int *)(param_1 + 0x20) + *(long *)(param_1 + 0xd0));
    }
  }
  return puVar1;
}



undefined8 ulocale_getLocaleID_76_godot(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}



undefined8 ulocale_getBaseName_76_godot(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = icu_76_godot::Locale::getBaseName();
    return uVar1;
  }
  return 0;
}



undefined8 ulocale_getKeywords_76_godot(UErrorCode *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (0 < *param_2) {
    return 0;
  }
  if (param_1 != (UErrorCode *)0x0) {
    uVar1 = icu_76_godot::Locale::createKeywords(param_1);
    uVar1 = uenum_openFromStringEnumeration_76_godot(uVar1,param_2);
    return uVar1;
  }
  *param_2 = 1;
  return 0;
}



undefined8 ulocale_getUnicodeKeywords_76_godot(UErrorCode *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (0 < *param_2) {
    return 0;
  }
  if (param_1 != (UErrorCode *)0x0) {
    uVar1 = icu_76_godot::Locale::createUnicodeKeywords(param_1);
    uVar1 = uenum_openFromStringEnumeration_76_godot(uVar1,param_2);
    return uVar1;
  }
  *param_2 = 1;
  return 0;
}



bool ulocale_isBogus_76_godot(long param_1)

{
  if (param_1 != 0) {
    return *(char *)(param_1 + 0xd8) != '\0';
  }
  return false;
}



undefined8 ulocale_openForLocaleID_76_godot(int param_1,uint param_2,int *param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_110;
  Locale local_108 [232];
  long local_20;
  
  uVar1 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 < 1) {
    if ((int)param_2 < 0) {
      icu_76_godot::Locale::createFromName((char *)local_108);
      uVar1 = icu_76_godot::Locale::clone();
      icu_76_godot::Locale::~Locale(local_108);
    }
    else {
      local_148 = (long)&local_13c + 1;
      local_140 = 0x28;
      local_13c = 0;
      local_110 = 0;
      icu_76_godot::CharString::append((char *)&local_148,param_1,(UErrorCode *)(ulong)param_2);
      if (*param_3 < 1) {
        icu_76_godot::Locale::createFromName((char *)local_108);
        uVar1 = icu_76_godot::Locale::clone();
        icu_76_godot::Locale::~Locale(local_108);
      }
      if ((char)local_13c != '\0') {
        uprv_free_76_godot(local_148);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ulocale_openForLanguageTag_76_godot(char *param_1,int param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_118;
  int local_110;
  undefined4 uStack_10c;
  Locale local_108 [232];
  long local_20;
  
  uVar3 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 < 1) {
    pcVar1 = param_1;
    iVar2 = param_2;
    if (param_2 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_118,param_1);
      pcVar1 = local_118;
      iVar2 = local_110;
    }
    local_110 = iVar2;
    local_118 = pcVar1;
    uVar3 = 0;
    icu_76_godot::Locale::forLanguageTag(local_108,local_118,CONCAT44(uStack_10c,local_110),param_3)
    ;
    if (*param_3 < 1) {
      uVar3 = icu_76_godot::Locale::clone();
    }
    icu_76_godot::Locale::~Locale(local_108);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4
ulocale_getKeywordValue_76_godot
          (long param_1,char *param_2,int param_3,char *param_4,int param_5,int *param_6)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  char *local_78;
  int local_70;
  undefined4 uStack_6c;
  CheckedArrayByteSink local_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 < 1) {
    if (param_1 != 0) {
      icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(local_68,param_4,param_5);
      pcVar1 = param_2;
      iVar2 = param_3;
      if (param_3 < 0) {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,param_2);
        pcVar1 = local_78;
        iVar2 = local_70;
      }
      local_70 = iVar2;
      local_78 = pcVar1;
      icu_76_godot::Locale::getKeywordValue
                (param_1,local_78,CONCAT44(uStack_6c,local_70),local_68,param_6);
      uVar3 = 0;
      if (*param_6 < 1) {
        if (local_4c == '\0') {
          uVar3 = u_terminateChars_76_godot(param_4,param_5,local_50,param_6);
        }
        else {
          *param_6 = 0xf;
          uVar3 = local_50;
        }
      }
      icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
      goto LAB_001003f9;
    }
    *param_6 = 1;
  }
  uVar3 = 0;
LAB_001003f9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4
ulocale_getUnicodeKeywordValue_76_godot
          (long param_1,char *param_2,int param_3,char *param_4,int param_5,int *param_6)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  char *local_78;
  int local_70;
  undefined4 uStack_6c;
  CheckedArrayByteSink local_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 < 1) {
    if (param_1 != 0) {
      icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(local_68,param_4,param_5);
      pcVar1 = param_2;
      iVar2 = param_3;
      if (param_3 < 0) {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,param_2);
        pcVar1 = local_78;
        iVar2 = local_70;
      }
      local_70 = iVar2;
      local_78 = pcVar1;
      icu_76_godot::Locale::getUnicodeKeywordValue
                (param_1,local_78,CONCAT44(uStack_6c,local_70),local_68,param_6);
      uVar3 = 0;
      if (*param_6 < 1) {
        if (local_4c == '\0') {
          uVar3 = u_terminateChars_76_godot(param_4,param_5,local_50,param_6);
        }
        else {
          *param_6 = 0xf;
          uVar3 = local_50;
        }
      }
      icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
      goto LAB_00100509;
    }
    *param_6 = 1;
  }
  uVar3 = 0;
LAB_00100509:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
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
LAB_0010083f:
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
      goto LAB_0010083f;
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


