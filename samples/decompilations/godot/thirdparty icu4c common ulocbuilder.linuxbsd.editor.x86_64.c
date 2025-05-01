
LocaleBuilder * ulocbld_open_76_godot(undefined8 param_1,ulong param_2)

{
  LocaleBuilder *this;
  
  this = (LocaleBuilder *)icu_76_godot::UMemory::operator_new((UMemory *)0x30,param_2);
  if (this != (LocaleBuilder *)0x0) {
    icu_76_godot::LocaleBuilder::LocaleBuilder(this);
  }
  return this;
}



void ulocbld_close_76_godot(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010003c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



void ulocbld_adoptULocale_76_godot(Locale *param_1,undefined8 param_2)

{
  if (param_1 != (Locale *)0x0) {
    icu_76_godot::LocaleBuilder::setLocale(param_1);
    ulocale_close_76_godot(param_2);
    return;
  }
  return;
}



void ulocbld_setLanguageTag_76_godot(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_28;
  int local_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = param_2;
    iVar2 = param_3;
    if (param_3 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_28,param_2);
      pcVar1 = local_28;
      iVar2 = local_20;
    }
    local_20 = iVar2;
    local_28 = pcVar1;
    icu_76_godot::LocaleBuilder::setLanguageTag(param_1,local_28,CONCAT44(uStack_1c,local_20));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ulocbld_setLanguage_76_godot(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_28;
  int local_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = param_2;
    iVar2 = param_3;
    if (param_3 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_28,param_2);
      pcVar1 = local_28;
      iVar2 = local_20;
    }
    local_20 = iVar2;
    local_28 = pcVar1;
    icu_76_godot::LocaleBuilder::setLanguage(param_1,local_28,CONCAT44(uStack_1c,local_20));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ulocbld_setScript_76_godot(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_28;
  int local_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = param_2;
    iVar2 = param_3;
    if (param_3 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_28,param_2);
      pcVar1 = local_28;
      iVar2 = local_20;
    }
    local_20 = iVar2;
    local_28 = pcVar1;
    icu_76_godot::LocaleBuilder::setScript(param_1,local_28,CONCAT44(uStack_1c,local_20));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ulocbld_setRegion_76_godot(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_28;
  int local_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = param_2;
    iVar2 = param_3;
    if (param_3 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_28,param_2);
      pcVar1 = local_28;
      iVar2 = local_20;
    }
    local_20 = iVar2;
    local_28 = pcVar1;
    icu_76_godot::LocaleBuilder::setRegion(param_1,local_28,CONCAT44(uStack_1c,local_20));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ulocbld_setVariant_76_godot(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_28;
  int local_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = param_2;
    iVar2 = param_3;
    if (param_3 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_28,param_2);
      pcVar1 = local_28;
      iVar2 = local_20;
    }
    local_20 = iVar2;
    local_28 = pcVar1;
    icu_76_godot::LocaleBuilder::setVariant(param_1,local_28,CONCAT44(uStack_1c,local_20));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ulocbld_addUnicodeLocaleAttribute_76_godot(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_28;
  int local_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = param_2;
    iVar2 = param_3;
    if (param_3 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_28,param_2);
      pcVar1 = local_28;
      iVar2 = local_20;
    }
    local_20 = iVar2;
    local_28 = pcVar1;
    icu_76_godot::LocaleBuilder::addUnicodeLocaleAttribute
              (param_1,local_28,CONCAT44(uStack_1c,local_20));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ulocbld_removeUnicodeLocaleAttribute_76_godot(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_28;
  int local_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = param_2;
    iVar2 = param_3;
    if (param_3 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_28,param_2);
      pcVar1 = local_28;
      iVar2 = local_20;
    }
    local_20 = iVar2;
    local_28 = pcVar1;
    icu_76_godot::LocaleBuilder::removeUnicodeLocaleAttribute
              (param_1,local_28,CONCAT44(uStack_1c,local_20));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ulocbld_setExtension_76_godot(long param_1,char param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_38;
  int local_30;
  undefined4 uStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = param_3;
    iVar2 = param_4;
    if (param_4 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_38,param_3);
      pcVar1 = local_38;
      iVar2 = local_30;
    }
    local_30 = iVar2;
    local_38 = pcVar1;
    icu_76_godot::LocaleBuilder::setExtension
              (param_1,(int)param_2,local_38,CONCAT44(uStack_2c,local_30));
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ulocbld_setUnicodeLocaleKeyword_76_godot
               (long param_1,char *param_2,int param_3,char *param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *local_48;
  int local_40;
  undefined4 uStack_3c;
  char *local_38;
  int local_30;
  undefined4 uStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = param_4;
    iVar2 = param_5;
    if (param_5 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_48,param_4);
      pcVar1 = local_48;
      iVar2 = local_40;
    }
    local_40 = iVar2;
    local_48 = pcVar1;
    pcVar1 = param_2;
    iVar2 = param_3;
    if (param_3 < 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_38,param_2);
      pcVar1 = local_38;
      iVar2 = local_30;
    }
    local_30 = iVar2;
    local_38 = pcVar1;
    icu_76_godot::LocaleBuilder::setUnicodeLocaleKeyword
              (param_1,local_38,CONCAT44(uStack_2c,local_30),local_48,CONCAT44(uStack_3c,local_40));
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ulocbld_clear_76_godot(long param_1)

{
  if (param_1 != 0) {
    icu_76_godot::LocaleBuilder::clear();
    return;
  }
  return;
}



void ulocbld_clearExtensions_76_godot(long param_1)

{
  if (param_1 != 0) {
    icu_76_godot::LocaleBuilder::clearExtensions();
    return;
  }
  return;
}



undefined8 ulocbld_copyErrorTo_76_godot(UErrorCode *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (UErrorCode *)0x0) {
    uVar1 = icu_76_godot::LocaleBuilder::copyErrorTo(param_1);
    return uVar1;
  }
  *param_2 = 1;
  return 1;
}



void ulocbld_setLocale_76_godot(Locale *param_1,char *param_2,int param_3)

{
  size_t __n;
  long in_FS_OFFSET;
  Locale aLStack_298 [224];
  Locale local_1b8 [224];
  undefined1 local_d8 [168];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Locale *)0x0) goto LAB_001005ac;
  icu_76_godot::Locale::Locale(aLStack_298);
  if ((param_3 < 0) || (__n = (size_t)param_3, param_2[__n] == '\0')) {
LAB_0010057e:
    icu_76_godot::Locale::Locale(local_1b8,param_2,(char *)0x0,(char *)0x0,(char *)0x0);
    icu_76_godot::Locale::operator=(aLStack_298,local_1b8);
    icu_76_godot::Locale::~Locale(local_1b8);
  }
  else {
    if (param_3 < 0x9d) {
      param_2 = (char *)memcpy(local_d8,param_2,__n);
      local_d8[__n] = 0;
      goto LAB_0010057e;
    }
    icu_76_godot::Locale::setToBogus();
  }
  icu_76_godot::LocaleBuilder::setLocale(param_1);
  icu_76_godot::Locale::~Locale(aLStack_298);
LAB_001005ac:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



long ulocbld_buildULocale_76_godot(long param_1,int *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  Locale aLStack_108 [232];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    icu_76_godot::LocaleBuilder::build(aLStack_108);
    if (*param_2 < 1) {
      lVar1 = icu_76_godot::Locale::clone();
      if (lVar1 == 0) {
        *param_2 = 7;
      }
    }
    icu_76_godot::Locale::~Locale(aLStack_108);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ulocbld_buildLocaleID_76_godot(long param_1,void *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  Locale aLStack_128 [40];
  char *local_100;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    if (param_1 != 0) {
      uVar2 = 0;
      icu_76_godot::LocaleBuilder::build(aLStack_128);
      if (*param_4 < 1) {
        sVar3 = strlen(local_100);
        iVar1 = (int)sVar3;
        if ((0 < iVar1) && (iVar1 <= param_3)) {
          memcpy(param_2,local_100,(long)iVar1);
        }
        uVar2 = u_terminateChars_76_godot(param_2,param_3,sVar3 & 0xffffffff,param_4);
      }
      icu_76_godot::Locale::~Locale(aLStack_128);
      goto LAB_00100760;
    }
    *param_4 = 1;
  }
  uVar2 = 0;
LAB_00100760:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ulocbld_buildLanguageTag_76_godot(long param_1,char *param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_148 [24];
  undefined4 local_130;
  char local_12c;
  Locale local_128 [232];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    if (param_1 != 0) {
      uVar1 = 0;
      icu_76_godot::LocaleBuilder::build(local_128);
      if (*param_4 < 1) {
        icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_148,param_2,param_3);
        icu_76_godot::Locale::toLanguageTag((ByteSink *)local_128,aCStack_148);
        if (*param_4 < 1) {
          if (local_12c == '\0') {
            uVar1 = u_terminateChars_76_godot(param_2,param_3,local_130,param_4);
          }
          else {
            *param_4 = 0xf;
            uVar1 = local_130;
          }
        }
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_148);
      }
      icu_76_godot::Locale::~Locale(local_128);
      goto LAB_00100802;
    }
    *param_4 = 1;
  }
  uVar1 = 0;
LAB_00100802:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
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
LAB_00100b8f:
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
      goto LAB_00100b8f;
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


