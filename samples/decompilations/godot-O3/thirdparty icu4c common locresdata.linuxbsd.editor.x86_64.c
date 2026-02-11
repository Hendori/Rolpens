
undefined8
uloc_getTableStringWithFallback_76_godot_part_0
          (undefined8 param_1,char *param_2,char *param_3,long param_4,long param_5,
          undefined8 param_6,int *param_7)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_1c8;
  int local_1b0;
  uint local_1ac;
  void *local_1a8;
  int local_1a0;
  void *local_198;
  undefined4 local_190;
  undefined2 local_18c;
  int local_160;
  StackUResourceBundle local_158 [144];
  StackUResourceBundle local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b0 = 0;
  lVar3 = ures_open_76_godot(param_1,param_2,&local_1b0);
  if (local_1b0 < 1) {
    if ((local_1b0 == -0x7f) || ((local_1b0 == -0x80 && (*param_7 != -0x7f)))) {
      *param_7 = local_1b0;
    }
    local_1c8 = 0;
    lVar5 = lVar3;
LAB_001000fc:
    icu_76_godot::StackUResourceBundle::StackUResourceBundle(local_158);
    icu_76_godot::StackUResourceBundle::StackUResourceBundle(local_c8);
    ures_getByKeyWithFallback_76_godot(lVar5,param_3,local_158,&local_1b0);
    if (param_4 != 0) {
      ures_getByKeyWithFallback_76_godot(local_158,param_4,local_158,&local_1b0);
    }
    lVar3 = lVar5;
    if (local_1b0 < 1) {
      local_1c8 = ures_getStringByKeyWithFallback_76_godot(local_158,param_5,param_6,&local_1b0);
      iVar2 = local_1b0;
      if (0 < local_1b0) {
        local_1b0 = 0;
        *param_7 = iVar2;
        iVar2 = strcmp(param_3,"Countries");
        if (iVar2 == 0) {
          lVar4 = uloc_getCurrentCountryID_76_godot(param_5);
        }
        else {
          iVar2 = strcmp(param_3,"Languages");
          if (iVar2 != 0) goto LAB_00100210;
          lVar4 = uloc_getCurrentLanguageID_76_godot(param_5);
        }
        if ((lVar4 == 0) || (param_5 == lVar4)) {
          if (0 < local_1b0) goto LAB_00100140;
        }
        else {
          local_1c8 = ures_getStringByKeyWithFallback_76_godot(local_158,lVar4,param_6,&local_1b0);
          if (0 < local_1b0) goto LAB_00100140;
LAB_00100330:
          *param_7 = local_1b0;
        }
      }
      goto LAB_00100210;
    }
LAB_00100140:
    local_1ac = 0;
    *param_7 = local_1b0;
    local_1b0 = 0;
    iVar2 = ures_getStringByKeyWithFallback_76_godot(local_158,"Fallback",&local_1ac,&local_1b0);
    if (0 < local_1b0) goto LAB_00100330;
    local_198 = (void *)((long)&local_18c + 1);
    local_190 = 0x28;
    local_160 = 0;
    local_18c = 0;
    icu_76_godot::CharString::appendInvariantChars
              ((wchar16 *)&local_198,iVar2,(UErrorCode *)(ulong)local_1ac);
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_1a8,param_2);
    pvVar1 = local_198;
    if ((local_1a0 != local_160) ||
       ((local_160 != 0 && (iVar2 = memcmp(local_198,local_1a8,(long)local_160), iVar2 != 0)))) {
      lVar3 = ures_open_76_godot(param_1,pvVar1,&local_1b0);
      if (lVar5 != 0) {
        ures_close_76_godot(lVar5);
      }
      iVar2 = local_1b0;
      if (0 < local_1b0) goto LAB_001001f6;
      if ((char)local_18c != '\0') {
        uprv_free_76_godot(local_198);
      }
      icu_76_godot::StackUResourceBundle::~StackUResourceBundle(local_c8);
      icu_76_godot::StackUResourceBundle::~StackUResourceBundle(local_158);
      lVar5 = lVar3;
      goto LAB_001000fc;
    }
    iVar2 = 5;
LAB_001001f6:
    *param_7 = iVar2;
    if ((char)local_18c != '\0') {
      uprv_free_76_godot(local_198);
    }
LAB_00100210:
    icu_76_godot::StackUResourceBundle::~StackUResourceBundle(local_c8);
    icu_76_godot::StackUResourceBundle::~StackUResourceBundle(local_158);
  }
  else {
    *param_7 = local_1b0;
    local_1c8 = 0;
  }
  if (lVar3 != 0) {
    ures_close_76_godot(lVar3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1c8;
}



/* (anonymous namespace)::_uloc_getOrientationHelper(char const*, char const*, UErrorCode&) [clone
   .part.0] */

undefined8
(anonymous_namespace)::_uloc_getOrientationHelper(char *param_1,char *param_2,UErrorCode *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  char local_5c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ulocimp_canonicalize_76_godot((char *)&local_68,(UErrorCode *)param_1);
  if (*(int *)param_3 < 1) {
    local_6c = 0;
    puVar2 = (ushort *)
             uloc_getTableStringWithFallback_76_godot_part_0
                       (0,local_68,"layout",0,param_2,&local_6c,param_3);
    if ((*(int *)param_3 < 1) && (local_6c != 0)) {
      uVar1 = *puVar2;
      if (uVar1 == 0x72) {
        uVar3 = 1;
        goto LAB_001003d9;
      }
      if (uVar1 < 0x73) {
        uVar3 = 3;
        if ((uVar1 == 0x62) || (uVar3 = 0, uVar1 == 0x6c)) goto LAB_001003d9;
      }
      else {
        uVar3 = 2;
        if (uVar1 == 0x74) goto LAB_001003d9;
      }
      *(undefined4 *)param_3 = 5;
    }
  }
  uVar3 = 4;
LAB_001003d9:
  if (local_5c != '\0') {
    uprv_free_76_godot(local_68);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 uloc_getTableStringWithFallback_76_godot(void)

{
  undefined8 uVar1;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 < 1) {
    uVar1 = uloc_getTableStringWithFallback_76_godot_part_0();
    return uVar1;
  }
  return 0;
}



undefined8 uloc_getCharacterOrientation_76_godot(char *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)param_2 < 1) {
    uVar1 = (anonymous_namespace)::_uloc_getOrientationHelper(param_1,"characters",param_2);
    return uVar1;
  }
  return 4;
}



undefined8 uloc_getLineOrientation_76_godot(char *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)param_2 < 1) {
    uVar1 = (anonymous_namespace)::_uloc_getOrientationHelper(param_1,"lines",param_2);
    return uVar1;
  }
  return 4;
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
LAB_0010084f:
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
      goto LAB_0010084f;
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


