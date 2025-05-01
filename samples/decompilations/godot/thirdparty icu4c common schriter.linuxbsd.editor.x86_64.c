
/* icu_76_godot::StringCharacterIterator::getDynamicClassID() const */

undefined1 * icu_76_godot::StringCharacterIterator::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::StringCharacterIterator::~StringCharacterIterator() */

void __thiscall
icu_76_godot::StringCharacterIterator::~StringCharacterIterator(StringCharacterIterator *this)

{
  *(undefined ***)this = &PTR__StringCharacterIterator_001006b8;
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x20));
  icu_76_godot::UCharCharacterIterator::~UCharCharacterIterator((UCharCharacterIterator *)this);
  return;
}



/* icu_76_godot::StringCharacterIterator::getText(icu_76_godot::UnicodeString&) */

void __thiscall
icu_76_godot::StringCharacterIterator::getText(StringCharacterIterator *this,UnicodeString *param_1)

{
  icu_76_godot::UnicodeString::operator=(param_1,(UnicodeString *)(this + 0x20));
  return;
}



/* icu_76_godot::StringCharacterIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::ForwardCharacterIterator
   const&) const */

undefined8 __thiscall
icu_76_godot::StringCharacterIterator::operator==
          (StringCharacterIterator *this,ForwardCharacterIterator *param_1)

{
  ushort uVar1;
  ushort uVar2;
  char *__s1;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  if (this == (StringCharacterIterator *)param_1) {
    return 1;
  }
  __s1 = *(char **)(*(long *)(*(long *)this + -8) + 8);
  pcVar3 = *(char **)(*(long *)(*(long *)param_1 + -8) + 8);
  if (__s1 != pcVar3) {
    if (*__s1 == '*') {
      return 0;
    }
    iVar5 = strcmp(__s1,pcVar3 + (*pcVar3 == '*'));
    if (iVar5 != 0) {
      return 0;
    }
  }
  uVar1 = *(ushort *)(this + 0x28);
  uVar2 = *(ushort *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(this + 0x2c);
    }
    else {
      iVar5 = (int)((short)uVar1 >> 5);
    }
    if ((short)uVar2 < 0) {
      iVar6 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar6 = (int)((short)uVar2 >> 5);
    }
    if (iVar6 != iVar5) {
      return 0;
    }
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    iVar5 = (int)param_1 + 0x2a;
    if ((uVar2 & 2) == 0) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x38);
    }
    cVar4 = icu_76_godot::UnicodeString::doEquals((wchar16 *)(this + 0x20),iVar5);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  else if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(int *)(this + 0xc) != *(int *)(param_1 + 0xc)) {
    return 0;
  }
  return CONCAT71((int7)((ulong)*(long *)(param_1 + 0x10) >> 8),
                  *(long *)(this + 0x10) == *(long *)(param_1 + 0x10));
}



/* icu_76_godot::StringCharacterIterator::~StringCharacterIterator() */

void __thiscall
icu_76_godot::StringCharacterIterator::~StringCharacterIterator(StringCharacterIterator *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__StringCharacterIterator_001006b8;
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x20));
  icu_76_godot::UCharCharacterIterator::~UCharCharacterIterator((UCharCharacterIterator *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::StringCharacterIterator::clone() const */

UCharCharacterIterator * icu_76_godot::StringCharacterIterator::clone(void)

{
  UCharCharacterIterator *this;
  UCharCharacterIterator *pUVar1;
  ulong in_RSI;
  UCharCharacterIterator *in_RDI;
  
  this = (UCharCharacterIterator *)icu_76_godot::UMemory::operator_new((UMemory *)0x60,in_RSI);
  if (this != (UCharCharacterIterator *)0x0) {
    icu_76_godot::UCharCharacterIterator::UCharCharacterIterator(this,in_RDI);
    *(undefined ***)this = &PTR__StringCharacterIterator_001006b8;
    icu_76_godot::UnicodeString::UnicodeString
              ((UnicodeString *)(this + 0x20),(UnicodeString *)(in_RDI + 0x20));
    if ((*(ushort *)(this + 0x28) & 0x11) == 0) {
      if ((*(ushort *)(this + 0x28) & 2) == 0) {
        pUVar1 = *(UCharCharacterIterator **)(this + 0x38);
      }
      else {
        pUVar1 = this + 0x2a;
      }
    }
    else {
      pUVar1 = (UCharCharacterIterator *)0x0;
    }
    *(UCharCharacterIterator **)(this + 0x18) = pUVar1;
  }
  return this;
}



/* icu_76_godot::StringCharacterIterator::getStaticClassID() */

undefined1 * icu_76_godot::StringCharacterIterator::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::StringCharacterIterator::StringCharacterIterator() */

void __thiscall
icu_76_godot::StringCharacterIterator::StringCharacterIterator(StringCharacterIterator *this)

{
  icu_76_godot::UCharCharacterIterator::UCharCharacterIterator((UCharCharacterIterator *)this);
  *(undefined ***)this = &PTR__StringCharacterIterator_001006b8;
  *(code **)(this + 0x20) = __stack_chk_fail;
  *(undefined2 *)(this + 0x28) = 2;
  return;
}



/* icu_76_godot::StringCharacterIterator::StringCharacterIterator(icu_76_godot::UnicodeString
   const&) */

void __thiscall
icu_76_godot::StringCharacterIterator::StringCharacterIterator
          (StringCharacterIterator *this,UnicodeString *param_1)

{
  ushort uVar1;
  StringCharacterIterator *pSVar2;
  int iVar3;
  long in_FS_OFFSET;
  UnicodeString *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = (int)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      local_28 = *(UnicodeString **)(param_1 + 0x18);
    }
    else {
      local_28 = param_1 + 10;
    }
  }
  else {
    local_28 = (UnicodeString *)0x0;
  }
  icu_76_godot::UCharCharacterIterator::UCharCharacterIterator
            ((UCharCharacterIterator *)this,&local_28,iVar3);
  *(undefined ***)this = &PTR__StringCharacterIterator_001006b8;
  icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)(this + 0x20),param_1);
  if ((*(ushort *)(this + 0x28) & 0x11) == 0) {
    if ((*(ushort *)(this + 0x28) & 2) == 0) {
      pSVar2 = *(StringCharacterIterator **)(this + 0x38);
    }
    else {
      pSVar2 = this + 0x2a;
    }
  }
  else {
    pSVar2 = (StringCharacterIterator *)0x0;
  }
  *(StringCharacterIterator **)(this + 0x18) = pSVar2;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::StringCharacterIterator::StringCharacterIterator(icu_76_godot::UnicodeString
   const&, int) */

void __thiscall
icu_76_godot::StringCharacterIterator::StringCharacterIterator
          (StringCharacterIterator *this,UnicodeString *param_1,int param_2)

{
  ushort uVar1;
  StringCharacterIterator *pSVar2;
  int iVar3;
  long in_FS_OFFSET;
  UnicodeString *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = (int)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      local_28 = *(UnicodeString **)(param_1 + 0x18);
    }
    else {
      local_28 = param_1 + 10;
    }
  }
  else {
    local_28 = (UnicodeString *)0x0;
  }
  icu_76_godot::UCharCharacterIterator::UCharCharacterIterator
            ((UCharCharacterIterator *)this,&local_28,iVar3,param_2);
  *(undefined ***)this = &PTR__StringCharacterIterator_001006b8;
  icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)(this + 0x20),param_1);
  if ((*(ushort *)(this + 0x28) & 0x11) == 0) {
    if ((*(ushort *)(this + 0x28) & 2) == 0) {
      pSVar2 = *(StringCharacterIterator **)(this + 0x38);
    }
    else {
      pSVar2 = this + 0x2a;
    }
  }
  else {
    pSVar2 = (StringCharacterIterator *)0x0;
  }
  *(StringCharacterIterator **)(this + 0x18) = pSVar2;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::StringCharacterIterator::StringCharacterIterator(icu_76_godot::UnicodeString
   const&, int, int, int) */

void __thiscall
icu_76_godot::StringCharacterIterator::StringCharacterIterator
          (StringCharacterIterator *this,UnicodeString *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  StringCharacterIterator *pSVar2;
  int iVar3;
  long in_FS_OFFSET;
  UnicodeString *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = (int)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      local_28 = *(UnicodeString **)(param_1 + 0x18);
    }
    else {
      local_28 = param_1 + 10;
    }
  }
  else {
    local_28 = (UnicodeString *)0x0;
  }
  icu_76_godot::UCharCharacterIterator::UCharCharacterIterator
            ((UCharCharacterIterator *)this,&local_28,iVar3,param_2,param_3,param_4);
  *(undefined ***)this = &PTR__StringCharacterIterator_001006b8;
  icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)(this + 0x20),param_1);
  if ((*(ushort *)(this + 0x28) & 0x11) == 0) {
    if ((*(ushort *)(this + 0x28) & 2) == 0) {
      pSVar2 = *(StringCharacterIterator **)(this + 0x38);
    }
    else {
      pSVar2 = this + 0x2a;
    }
  }
  else {
    pSVar2 = (StringCharacterIterator *)0x0;
  }
  *(StringCharacterIterator **)(this + 0x18) = pSVar2;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::StringCharacterIterator::StringCharacterIterator(icu_76_godot::StringCharacterIterator
   const&) */

void __thiscall
icu_76_godot::StringCharacterIterator::StringCharacterIterator
          (StringCharacterIterator *this,StringCharacterIterator *param_1)

{
  icu_76_godot::UCharCharacterIterator::UCharCharacterIterator
            ((UCharCharacterIterator *)this,(UCharCharacterIterator *)param_1);
  *(undefined ***)this = &PTR__StringCharacterIterator_001006b8;
  icu_76_godot::UnicodeString::UnicodeString
            ((UnicodeString *)(this + 0x20),(UnicodeString *)(param_1 + 0x20));
  if ((*(ushort *)(this + 0x28) & 0x11) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
    return;
  }
  if ((*(ushort *)(this + 0x28) & 2) == 0) {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x38);
    return;
  }
  *(StringCharacterIterator **)(this + 0x18) = this + 0x2a;
  return;
}



/* icu_76_godot::StringCharacterIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringCharacterIterator
   const&) */

StringCharacterIterator * __thiscall
icu_76_godot::StringCharacterIterator::operator=
          (StringCharacterIterator *this,StringCharacterIterator *param_1)

{
  icu_76_godot::UCharCharacterIterator::operator=
            ((UCharCharacterIterator *)this,(UCharCharacterIterator *)param_1);
  icu_76_godot::UnicodeString::operator=
            ((UnicodeString *)(this + 0x20),(UnicodeString *)(param_1 + 0x20));
  if ((*(ushort *)(this + 0x28) & 0x11) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
    return this;
  }
  if ((*(ushort *)(this + 0x28) & 2) == 0) {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x38);
    return this;
  }
  *(StringCharacterIterator **)(this + 0x18) = this + 0x2a;
  return this;
}



/* icu_76_godot::StringCharacterIterator::setText(icu_76_godot::UnicodeString const&) */

void __thiscall
icu_76_godot::StringCharacterIterator::setText(StringCharacterIterator *this,UnicodeString *param_1)

{
  ushort uVar1;
  int iVar2;
  long in_FS_OFFSET;
  StringCharacterIterator *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeString::operator=((UnicodeString *)(this + 0x20),param_1);
  uVar1 = *(ushort *)(this + 0x28);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0x2c);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      local_18 = *(StringCharacterIterator **)(this + 0x38);
    }
    else {
      local_18 = this + 0x2a;
    }
  }
  else {
    local_18 = (StringCharacterIterator *)0x0;
  }
  icu_76_godot::UCharCharacterIterator::setText(this,&local_18,iVar2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


