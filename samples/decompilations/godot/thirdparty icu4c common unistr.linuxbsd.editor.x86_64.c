
ulong UnicodeString_charAt(uint param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    uVar3 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar3 = (uint)((short)uVar1 >> 5);
  }
  uVar2 = 0xffffffff;
  if (param_1 < uVar3) {
    if ((uVar1 & 2) == 0) {
      param_2 = *(long *)(param_2 + 0x18);
    }
    else {
      param_2 = param_2 + 10;
    }
    uVar2 = (ulong)*(ushort *)(param_2 + (long)(int)param_1 * 2);
  }
  return uVar2;
}



/* icu_76_godot::UnicodeString::getDynamicClassID() const */

undefined1 * icu_76_godot::UnicodeString::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::Replaceable::clone() const */

undefined8 icu_76_godot::Replaceable::clone(void)

{
  return 0;
}



/* icu_76_godot::UnicodeString::getLength() const */

int __thiscall icu_76_godot::UnicodeString::getLength(UnicodeString *this)

{
  if (-1 < *(short *)(this + 8)) {
    return (int)(*(short *)(this + 8) >> 5);
  }
  return *(int *)(this + 0xc);
}



/* icu_76_godot::Replaceable::hasMetaData() const */

undefined8 icu_76_godot::Replaceable::hasMetaData(void)

{
  return 1;
}



/* icu_76_godot::UnicodeString::hasMetaData() const */

undefined8 icu_76_godot::UnicodeString::hasMetaData(void)

{
  return 0;
}



/* icu_76_godot::UnicodeStringAppendable::~UnicodeStringAppendable() */

void __thiscall
icu_76_godot::UnicodeStringAppendable::~UnicodeStringAppendable(UnicodeStringAppendable *this)

{
  *(undefined ***)this = &PTR__UnicodeStringAppendable_00105258;
  icu_76_godot::Appendable::~Appendable((Appendable *)this);
  return;
}



/* icu_76_godot::UnicodeStringAppendable::~UnicodeStringAppendable() */

void __thiscall
icu_76_godot::UnicodeStringAppendable::~UnicodeStringAppendable(UnicodeStringAppendable *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UnicodeStringAppendable_00105258;
  icu_76_godot::Appendable::~Appendable((Appendable *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UnicodeString::getCharAt(int) const */

ulong __thiscall icu_76_godot::UnicodeString::getCharAt(UnicodeString *this,int param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  UnicodeString *pUVar4;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    uVar3 = *(uint *)(this + 0xc);
  }
  else {
    uVar3 = (uint)((short)uVar1 >> 5);
  }
  uVar2 = 0xffffffff;
  if ((uint)param_1 < uVar3) {
    if ((uVar1 & 2) == 0) {
      pUVar4 = *(UnicodeString **)(this + 0x18);
    }
    else {
      pUVar4 = this + 10;
    }
    uVar2 = (ulong)*(ushort *)(pUVar4 + (long)param_1 * 2);
  }
  return uVar2;
}



/* icu_76_godot::UnicodeString::~UnicodeString() */

void __thiscall icu_76_godot::UnicodeString::~UnicodeString(UnicodeString *this)

{
  int *piVar1;
  
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  if (((byte)this[8] & 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(long *)(this + 0x18) + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uprv_free_76_godot(*(long *)(this + 0x18) + -4);
    }
  }
  *(undefined **)this = &DAT_00105188;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::UnicodeString::~UnicodeString() */

void __thiscall icu_76_godot::UnicodeString::~UnicodeString(UnicodeString *this)

{
  int *piVar1;
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  if (((byte)this[8] & 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(long *)(this + 0x18) + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uprv_free_76_godot(*(long *)(this + 0x18) + -4);
    }
  }
  *(undefined **)this = &DAT_00105188;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UnicodeString::setTo(signed char, icu_76_godot::ConstChar16Ptr, int) [clone
   .part.0] [clone .isra.0] */

void __thiscall
icu_76_godot::UnicodeString::setTo(UnicodeString *this,char param_2,long param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(this + 8) & 4;
  if (param_3 == 0) {
    if (uVar3 != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(this + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      }
    }
    *(undefined2 *)(this + 8) = 2;
    return;
  }
  if ((param_4 < -1) || ((param_4 == -1 && (param_2 == '\0')))) {
LAB_00100218:
    if (uVar3 != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(this + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      }
    }
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined2 *)(this + 8) = 1;
    *(undefined4 *)(this + 0x10) = 0;
    return;
  }
  if ((param_4 < 0) || (param_2 == '\0')) {
    if (uVar3 != 0) {
LAB_001002d8:
      LOCK();
      piVar1 = (int *)(*(long *)(this + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      }
    }
    if (param_4 == -1) {
      param_4 = u_strlen_76_godot(param_3);
    }
    iVar2 = param_4;
    if (param_2 == '\0') goto joined_r0x001002c8;
  }
  else {
    if (*(short *)(param_3 + (long)param_4 * 2) != 0) goto LAB_00100218;
    if (uVar3 != 0) goto LAB_001002d8;
  }
  iVar2 = param_4 + 1;
joined_r0x001002c8:
  if (param_4 < 0x400) {
    uVar3 = (ushort)(param_4 << 5) | 8;
  }
  else {
    *(int *)(this + 0xc) = param_4;
    uVar3 = 0xffe8;
  }
  *(ushort *)(this + 8) = uVar3;
  *(long *)(this + 0x18) = param_3;
  *(int *)(this + 0x10) = iVar2;
  return;
}



/* icu_76_godot::Replaceable::~Replaceable() */

void __thiscall icu_76_godot::Replaceable::~Replaceable(Replaceable *this)

{
  *(undefined **)this = &DAT_00105188;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::Replaceable::~Replaceable() */

void __thiscall icu_76_godot::Replaceable::~Replaceable(Replaceable *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_00105188;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UnicodeString::getStaticClassID() */

undefined1 * icu_76_godot::UnicodeString::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UnicodeString::addRef() */

void __thiscall icu_76_godot::UnicodeString::addRef(UnicodeString *this)

{
  LOCK();
  *(int *)(*(long *)(this + 0x18) + -4) = *(int *)(*(long *)(this + 0x18) + -4) + 1;
  UNLOCK();
  return;
}



/* icu_76_godot::UnicodeString::removeRef() */

int __thiscall icu_76_godot::UnicodeString::removeRef(UnicodeString *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(*(long *)(this + 0x18) + -4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2 + -1;
}



/* icu_76_godot::UnicodeString::refCount() const */

undefined4 __thiscall icu_76_godot::UnicodeString::refCount(UnicodeString *this)

{
  return *(undefined4 *)(*(long *)(this + 0x18) + -4);
}



/* icu_76_godot::UnicodeString::releaseArray() */

void __thiscall icu_76_godot::UnicodeString::releaseArray(UnicodeString *this)

{
  int *piVar1;
  
  if (((byte)this[8] & 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(long *)(this + 0x18) + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      return;
    }
  }
  return;
}



/* icu_76_godot::UnicodeString::UnicodeString(char16_t) */

void __thiscall icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,wchar16 param_1)

{
  *(wchar16 *)(this + 10) = param_1;
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 0x22;
  return;
}



/* icu_76_godot::UnicodeString::UnicodeString(int) */

void __thiscall icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,int param_1)

{
  undefined2 uVar1;
  
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  if ((uint)param_1 < 0x10000) {
    *(ushort *)(this + 10) = (ushort)param_1;
    uVar1 = 0x22;
  }
  else {
    if (0x10ffff < (uint)param_1) {
      return;
    }
    *(ushort *)(this + 0xc) = (ushort)param_1 & 0x3ff | 0xdc00;
    *(short *)(this + 10) = (short)(param_1 >> 10) + -0x2840;
    uVar1 = 0x42;
  }
  *(undefined2 *)(this + 8) = uVar1;
  return;
}



/* icu_76_godot::UnicodeString::UnicodeString(signed char, icu_76_godot::ConstChar16Ptr, int) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString
          (UnicodeString *this,char param_2,long *param_3,int param_4)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  
  lVar1 = *param_3;
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 8;
  if (lVar1 == 0) {
    *(undefined2 *)(this + 8) = 2;
    return;
  }
  if ((param_4 < -1) || ((param_4 == -1 && (param_2 == '\0')))) {
LAB_001004b6:
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined2 *)(this + 8) = 1;
    *(undefined4 *)(this + 0x10) = 0;
    return;
  }
  if ((param_4 < 0) || (param_2 == '\0')) {
    uVar2 = 8;
    if (param_4 == -1) {
      param_4 = u_strlen_76_godot(lVar1);
      uVar2 = *(ushort *)(this + 8);
    }
    iVar3 = param_4;
    if (param_2 == '\0') goto LAB_001004f6;
  }
  else {
    if (*(short *)(lVar1 + (long)param_4 * 2) != 0) goto LAB_001004b6;
    uVar2 = 8;
  }
  iVar3 = param_4 + 1;
LAB_001004f6:
  if (param_4 < 0x400) {
    uVar2 = uVar2 & 0x1f | (ushort)(param_4 << 5);
  }
  else {
    *(int *)(this + 0xc) = param_4;
    uVar2 = uVar2 | 0xffe0;
  }
  *(ushort *)(this + 8) = uVar2;
  *(long *)(this + 0x18) = lVar1;
  *(int *)(this + 0x10) = iVar3;
  return;
}



/* icu_76_godot::UnicodeString::UnicodeString(char16_t*, int, int) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString
          (UnicodeString *this,wchar16 *param_1,int param_2,int param_3)

{
  wchar16 *pwVar1;
  
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 0;
  if (param_1 == (wchar16 *)0x0) {
    *(undefined2 *)(this + 8) = 2;
    return;
  }
  if ((param_2 < -1 || param_3 < param_2) || (param_3 < 0)) {
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined2 *)(this + 8) = 1;
    *(undefined4 *)(this + 0x10) = 0;
    return;
  }
  if (param_2 == -1) {
    pwVar1 = param_1;
    if (param_1 == param_1 + param_3) {
      param_2 = 0;
      goto LAB_001005f4;
    }
    do {
      if (*pwVar1 == L'\0') break;
      pwVar1 = pwVar1 + 1;
    } while (param_1 + param_3 != pwVar1);
    param_2 = (int)((long)pwVar1 - (long)param_1 >> 1);
  }
  if (0x3ff < param_2) {
    *(int *)(this + 0xc) = param_2;
    *(undefined2 *)(this + 8) = 0xffe0;
    *(wchar16 **)(this + 0x18) = param_1;
    *(int *)(this + 0x10) = param_3;
    return;
  }
LAB_001005f4:
  *(wchar16 **)(this + 0x18) = param_1;
  *(short *)(this + 8) = (short)(param_2 << 5);
  *(int *)(this + 0x10) = param_3;
  return;
}



/* icu_76_godot::UnicodeString::readOnlyAliasFromU16StringView(std::basic_string_view<char16_t,
   std::char_traits<char16_t> >) */

UnicodeString *
icu_76_godot::UnicodeString::readOnlyAliasFromU16StringView
          (UnicodeString *param_1,ulong param_2,undefined8 param_3)

{
  *(undefined ***)param_1 = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(param_1 + 8) = 2;
  if (param_2 < 0x80000000) {
    setTo(param_1,0,param_3,param_2 & 0xffffffff);
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



/* icu_76_godot::UnicodeString::readOnlyAliasFromUnicodeString(icu_76_godot::UnicodeString const&)
    */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::readOnlyAliasFromUnicodeString
          (UnicodeString *this,UnicodeString *param_1)

{
  ushort uVar1;
  int iVar2;
  UnicodeString *pUVar3;
  
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = (int)((short)uVar1 >> 5);
    }
    if ((uVar1 & 0x11) == 0) {
      pUVar3 = param_1 + 10;
      if ((uVar1 & 2) == 0) {
        pUVar3 = *(UnicodeString **)(param_1 + 0x18);
      }
    }
    else {
      pUVar3 = (UnicodeString *)0x0;
    }
    setTo(this,0,pUVar3,iVar2);
    return this;
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 8) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  return this;
}



/* icu_76_godot::UnicodeString::UnicodeString(icu_76_godot::UnicodeString&&) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,UnicodeString *param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  UnicodeString *pUVar4;
  undefined8 *puVar5;
  
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  uVar1 = *(ushort *)(param_1 + 8);
  *(ushort *)(this + 8) = uVar1;
  if ((uVar1 & 2) == 0) {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    if ((short)uVar1 < 0) {
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  if (this != param_1) {
    uVar2 = ((short)uVar1 >> 5) * 2;
    uVar3 = (ulong)(int)uVar2;
    if (7 < uVar3) {
      *(undefined8 *)(this + 10) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(this + uVar3 + 2) = *(undefined8 *)(param_1 + uVar3 + 2);
      pUVar4 = param_1 + (10 - (long)(this + (10 - (long)((ulong)(this + 0x12) & 0xfffffffffffffff8)
                                             )));
      puVar5 = (undefined8 *)((ulong)(this + 0x12) & 0xfffffffffffffff8);
      for (uVar3 = (ulong)(this + (10 - (long)((ulong)(this + 0x12) & 0xfffffffffffffff8)) + uVar3)
                   >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *(undefined8 *)pUVar4;
        pUVar4 = pUVar4 + 8;
        puVar5 = puVar5 + 1;
      }
      return;
    }
    if ((uVar3 & 4) != 0) {
      *(undefined4 *)(this + 10) = *(undefined4 *)(param_1 + 10);
      *(undefined4 *)(this + uVar3 + 6) = *(undefined4 *)(param_1 + uVar3 + 6);
      return;
    }
    if ((uVar3 != 0) && (this[10] = param_1[10], (uVar2 & 2) != 0)) {
      *(undefined2 *)(this + uVar3 + 8) = *(undefined2 *)(param_1 + uVar3 + 8);
      return;
    }
  }
  return;
}



/* icu_76_godot::UnicodeString::allocate(int) */

undefined8 __thiscall icu_76_godot::UnicodeString::allocate(UnicodeString *this,int param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (param_1 < 0x1c) {
    *(undefined2 *)(this + 8) = 2;
    return 1;
  }
  if (param_1 < 0x7ffffff6) {
    uVar2 = (long)param_1 * 2 + 0x15U & 0xfffffffffffffff0;
    puVar1 = (undefined4 *)uprv_malloc_76_godot(uVar2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 1;
      *(undefined4 **)(this + 0x18) = puVar1 + 1;
      *(int *)(this + 0x10) = (int)(uVar2 - 4 >> 1);
      *(undefined2 *)(this + 8) = 4;
      return 1;
    }
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 8) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  return 0;
}



/* icu_76_godot::UnicodeString::UnicodeString(int, int, int) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  long lVar2;
  UnicodeString *pUVar3;
  ushort uVar4;
  
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 0;
  if ((0 < param_3) && ((uint)param_2 < 0x110000)) {
    uVar4 = (ushort)param_2;
    if (param_2 < 0x10000) {
      if (param_1 <= param_3) {
        param_1 = param_3;
      }
      cVar1 = allocate(this,param_1);
      if (cVar1 == '\0') {
        return;
      }
      pUVar3 = this + 10;
      if (((byte)this[8] & 2) == 0) {
        pUVar3 = *(UnicodeString **)(this + 0x18);
      }
      *(ushort *)pUVar3 = uVar4;
      lVar2 = 1;
      if (1 < param_3) {
        if ((param_3 - 1U & 1) != 0) {
          *(ushort *)(pUVar3 + 2) = uVar4;
          lVar2 = 2;
          if (param_3 < 3) goto LAB_00100962;
        }
        do {
          *(ushort *)(pUVar3 + lVar2 * 2) = uVar4;
          *(ushort *)(pUVar3 + lVar2 * 2 + 2) = uVar4;
          lVar2 = lVar2 + 2;
        } while ((int)lVar2 < param_3);
      }
    }
    else {
      if (0x3fffffff < param_3) goto LAB_001009f0;
      param_3 = param_3 * 2;
      if (param_1 < param_3) {
        param_1 = param_3;
      }
      cVar1 = allocate(this,param_1);
      if (cVar1 == '\0') {
        return;
      }
      pUVar3 = this + 10;
      if (((byte)this[8] & 2) == 0) {
        pUVar3 = *(UnicodeString **)(this + 0x18);
      }
      lVar2 = 0;
      do {
        *(short *)(pUVar3 + lVar2 * 2) = (short)(param_2 >> 10) + -0x2840;
        *(ushort *)(pUVar3 + lVar2 * 2 + 2) = uVar4 & 0x3ff | 0xdc00;
        lVar2 = lVar2 + 2;
      } while ((int)lVar2 < param_3);
    }
LAB_00100962:
    if (0x3ff < param_3) {
      *(int *)(this + 0xc) = param_3;
      *(ushort *)(this + 8) = *(ushort *)(this + 8) | 0xffe0;
      return;
    }
    *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0x1f | (ushort)(param_3 << 5);
    return;
  }
LAB_001009f0:
  allocate(this,param_1);
  return;
}



/* icu_76_godot::UnicodeString::copyFrom(icu_76_godot::UnicodeString const&, signed char) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::copyFrom(UnicodeString *this,UnicodeString *param_1,char param_3)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  ushort uVar5;
  UnicodeString *pUVar6;
  UnicodeString *pUVar7;
  int iVar8;
  
  if (this == param_1) {
    return this;
  }
  uVar2 = *(ushort *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    if ((*(ushort *)(this + 8) & 4) != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(this + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      }
    }
    goto LAB_00100aa9;
  }
  if ((*(ushort *)(this + 8) & 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(long *)(this + 0x18) + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      uVar2 = *(ushort *)(param_1 + 8);
    }
    else {
      uVar2 = *(ushort *)(param_1 + 8);
    }
  }
  sVar3 = (short)uVar2 >> 5;
  if (sVar3 == 0) {
    *(undefined2 *)(this + 8) = 2;
    return this;
  }
  *(ushort *)(this + 8) = uVar2;
  uVar5 = uVar2 & 0x1f;
  if (uVar5 == 4) {
    LOCK();
    *(int *)(*(long *)(param_1 + 0x18) + -4) = *(int *)(*(long *)(param_1 + 0x18) + -4) + 1;
    UNLOCK();
    uVar2 = *(ushort *)(this + 8);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
joined_r0x00100bec:
    if ((short)uVar2 < 0) {
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  else {
    if (uVar5 < 5) {
      if (uVar5 != 0) {
        if (uVar5 == 2) {
          memcpy(this + 10,param_1 + 10,(long)(sVar3 * 2));
          return this;
        }
        goto LAB_00100aa9;
      }
    }
    else {
      if (uVar5 != 8) goto LAB_00100aa9;
      if (param_3 != '\0') {
        *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
        *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
        goto joined_r0x00100bec;
      }
    }
    iVar8 = (int)sVar3;
    if ((short)uVar2 < 0) {
      iVar8 = *(int *)(param_1 + 0xc);
    }
    cVar4 = allocate(this,iVar8);
    if (cVar4 == '\0') {
LAB_00100aa9:
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined2 *)(this + 8) = 1;
      *(undefined4 *)(this + 0x10) = 0;
      return this;
    }
    pUVar6 = param_1 + 10;
    if (((byte)param_1[8] & 2) == 0) {
      pUVar6 = *(UnicodeString **)(param_1 + 0x18);
    }
    pUVar7 = this + 10;
    if (((byte)this[8] & 2) == 0) {
      pUVar7 = *(UnicodeString **)(this + 0x18);
    }
    u_memcpy_76_godot(pUVar7,pUVar6,iVar8);
    if (iVar8 < 0x400) {
      *(ushort *)(this + 8) = (ushort)(iVar8 << 5) | *(ushort *)(this + 8) & 0x1f;
    }
    else {
      *(ushort *)(this + 8) = *(ushort *)(this + 8) | 0xffe0;
      *(int *)(this + 0xc) = iVar8;
    }
  }
  return this;
}



/* icu_76_godot::UnicodeString::UnicodeString(icu_76_godot::UnicodeString const&) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,UnicodeString *param_1)

{
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  copyFrom(this,param_1,0);
  return;
}



/* icu_76_godot::UnicodeString::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UnicodeString const&) */

void __thiscall icu_76_godot::UnicodeString::operator=(UnicodeString *this,UnicodeString *param_1)

{
  copyFrom(this,param_1,0);
  return;
}



/* icu_76_godot::UnicodeString::fastCopyFrom(icu_76_godot::UnicodeString const&) */

void __thiscall
icu_76_godot::UnicodeString::fastCopyFrom(UnicodeString *this,UnicodeString *param_1)

{
  copyFrom(this,param_1,1);
  return;
}



/* icu_76_godot::UnicodeString::clone() const */

UObject * icu_76_godot::UnicodeString::clone(void)

{
  int *piVar1;
  UObject *this;
  ulong in_RSI;
  void *in_RDI;
  
  this = (UObject *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,in_RSI);
  if (this != (UObject *)0x0) {
    *(undefined ***)this = &PTR__UnicodeString_001051f0;
    *(undefined2 *)(this + 8) = 2;
    copyFrom((UnicodeString *)this);
    if ((*(ushort *)(this + 8) & 1) == 0) {
      return this;
    }
    if (*(code **)(*(long *)this + 8) != ~UnicodeString) {
      (**(code **)(*(long *)this + 8))(this);
      return (UObject *)0x0;
    }
    *(undefined ***)this = &PTR__UnicodeString_001051f0;
    if ((*(ushort *)(this + 8) & 4) != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(this + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      }
    }
    *(undefined **)this = &DAT_00105188;
    icu_76_godot::UObject::~UObject(this);
    icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RDI);
  }
  return (UObject *)0x0;
}



/* icu_76_godot::UnicodeString::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UnicodeString&&) */

void __thiscall icu_76_godot::UnicodeString::operator=(UnicodeString *this,UnicodeString *param_1)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  UnicodeString *pUVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (((byte)this[8] & 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(long *)(this + 0x18) + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uprv_free_76_godot(*(long *)(this + 0x18) + -4);
    }
  }
  uVar2 = *(ushort *)(param_1 + 8);
  *(ushort *)(this + 8) = uVar2;
  if ((uVar2 & 2) != 0) {
    if (this != param_1) {
      uVar3 = ((short)uVar2 >> 5) * 2;
      uVar4 = (ulong)(int)uVar3;
      if (7 < uVar4) {
        *(undefined8 *)(this + 10) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(this + uVar4 + 2) = *(undefined8 *)(param_1 + uVar4 + 2);
        pUVar5 = param_1 + (10 - (long)(this + (10 - (long)((ulong)(this + 0x12) &
                                                           0xfffffffffffffff8))));
        puVar6 = (undefined8 *)((ulong)(this + 0x12) & 0xfffffffffffffff8);
        for (uVar4 = (ulong)(this + (10 - (long)((ulong)(this + 0x12) & 0xfffffffffffffff8)) + uVar4
                            ) >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *(undefined8 *)pUVar5;
          pUVar5 = pUVar5 + ((ulong)bVar7 * -2 + 1) * 8;
          puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
        }
        return;
      }
      if ((uVar4 & 4) == 0) {
        if ((uVar4 != 0) && (this[10] = param_1[10], (uVar3 & 2) != 0)) {
          *(undefined2 *)(this + uVar4 + 8) = *(undefined2 *)(param_1 + uVar4 + 8);
        }
      }
      else {
        *(undefined4 *)(this + 10) = *(undefined4 *)(param_1 + 10);
        *(undefined4 *)(this + uVar4 + 6) = *(undefined4 *)(param_1 + uVar4 + 6);
      }
    }
    return;
  }
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  if ((short)uVar2 < 0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* icu_76_godot::UnicodeString::copyFieldsFrom(icu_76_godot::UnicodeString&, signed char) */

void __thiscall
icu_76_godot::UnicodeString::copyFieldsFrom(UnicodeString *this,UnicodeString *param_1,char param_3)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  UnicodeString *pUVar4;
  undefined8 *puVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  *(ushort *)(this + 8) = uVar1;
  if ((uVar1 & 2) == 0) {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    if ((short)uVar1 < 0) {
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
    if (param_3 != '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined2 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
  }
  else if (param_1 != this) {
    uVar2 = ((short)uVar1 >> 5) * 2;
    uVar3 = (ulong)(int)uVar2;
    if (7 < uVar3) {
      *(undefined8 *)(this + 10) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(this + uVar3 + 2) = *(undefined8 *)(param_1 + uVar3 + 2);
      pUVar4 = param_1 + (10 - (long)(this + (10 - (long)((ulong)(this + 0x12) & 0xfffffffffffffff8)
                                             )));
      puVar5 = (undefined8 *)((ulong)(this + 0x12) & 0xfffffffffffffff8);
      for (uVar3 = (ulong)(this + (10 - (long)((ulong)(this + 0x12) & 0xfffffffffffffff8)) + uVar3)
                   >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *(undefined8 *)pUVar4;
        pUVar4 = pUVar4 + 8;
        puVar5 = puVar5 + 1;
      }
      return;
    }
    if ((uVar3 & 4) != 0) {
      *(undefined4 *)(this + 10) = *(undefined4 *)(param_1 + 10);
      *(undefined4 *)(this + uVar3 + 6) = *(undefined4 *)(param_1 + uVar3 + 6);
      return;
    }
    if ((uVar3 != 0) && (this[10] = param_1[10], (uVar2 & 2) != 0)) {
      *(undefined2 *)(this + uVar3 + 8) = *(undefined2 *)(param_1 + uVar3 + 8);
      return;
    }
  }
  return;
}



/* icu_76_godot::UnicodeString::swap(icu_76_godot::UnicodeString&) */

void icu_76_godot::UnicodeString::swap(UnicodeString *param_1)

{
  UnicodeString *in_RSI;
  UObject *this;
  long in_FS_OFFSET;
  undefined *local_58;
  undefined2 local_50;
  long local_10;
  
  this = (UObject *)&local_58;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  copyFieldsFrom((UnicodeString *)&local_58,param_1,0);
  copyFieldsFrom(param_1,in_RSI,0);
  copyFieldsFrom(in_RSI,this,0);
  local_50 = 2;
  local_58 = &DAT_00105188;
  icu_76_godot::UObject::~UObject(this);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::unescapeAt(int&) const */

void __thiscall icu_76_godot::UnicodeString::unescapeAt(UnicodeString *this,int *param_1)

{
  if (-1 < *(short *)(this + 8)) {
    u_unescapeAt_76_godot(0x100000,param_1,(int)(*(short *)(this + 8) >> 5),this);
    return;
  }
  u_unescapeAt_76_godot(0x100000,param_1,*(undefined4 *)(this + 0xc),this);
  return;
}



/* icu_76_godot::UnicodeString::doEquals(char16_t const*, int) const */

bool __thiscall
icu_76_godot::UnicodeString::doEquals(UnicodeString *this,wchar16 *param_1,int param_2)

{
  int iVar1;
  
  if (((byte)this[8] & 2) != 0) {
    iVar1 = memcmp(this + 10,param_1,(long)(param_2 * 2));
    return iVar1 == 0;
  }
  iVar1 = memcmp(*(void **)(this + 0x18),param_1,(long)(param_2 * 2));
  return iVar1 == 0;
}



/* icu_76_godot::UnicodeString::doEqualsSubstring(int, int, char16_t const*, int, int) const */

bool __thiscall
icu_76_godot::UnicodeString::doEqualsSubstring
          (UnicodeString *this,int param_1,int param_2,wchar16 *param_3,int param_4,int param_5)

{
  UnicodeString *pUVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  UnicodeString *pUVar7;
  bool bVar8;
  
  uVar2 = *(ushort *)(this + 8);
  if ((uVar2 & 1) != 0) {
    return false;
  }
  if ((short)uVar2 < 0) {
    lVar4 = (long)*(int *)(this + 0xc);
  }
  else {
    lVar4 = (long)((short)uVar2 >> 5);
  }
  lVar6 = (long)param_1;
  if ((int)lVar4 <= param_1) {
    lVar6 = lVar4;
  }
  if (param_1 < 0) {
    lVar6 = 0;
  }
  iVar3 = (int)lVar4 - (int)lVar6;
  if (param_2 < iVar3) {
    iVar3 = param_2;
  }
  iVar5 = 0;
  if (-1 < param_2) {
    iVar5 = iVar3;
  }
  bVar8 = iVar5 == 0;
  if (param_3 != (wchar16 *)0x0) {
    pUVar7 = this + 10;
    if ((uVar2 & 2) == 0) {
      pUVar7 = *(UnicodeString **)(this + 0x18);
    }
    pUVar1 = (UnicodeString *)(param_3 + param_4);
    if (param_5 < 0) {
      param_5 = u_strlen_76_godot(pUVar1 + (long)param_4 * 2);
    }
    bVar8 = false;
    if (param_5 == iVar5) {
      if ((pUVar7 + lVar6 * 2 == pUVar1) || (param_5 == 0)) {
        return true;
      }
      iVar3 = u_memcmp_76_godot(pUVar7 + lVar6 * 2,pUVar1,param_5);
      bVar8 = iVar3 == 0;
    }
  }
  return bVar8;
}



/* icu_76_godot::UnicodeString::doCompare(int, int, char16_t const*, int, int) const */

uint __thiscall
icu_76_godot::UnicodeString::doCompare
          (UnicodeString *this,int param_1,int param_2,wchar16 *param_3,int param_4,int param_5)

{
  UnicodeString *pUVar1;
  ushort uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  UnicodeString *pUVar10;
  bool bVar11;
  
  uVar2 = *(ushort *)(this + 8);
  uVar9 = uVar2 & 1;
  if ((uVar2 & 1) == 0) {
    if ((short)uVar2 < 0) {
      lVar8 = (long)*(int *)(this + 0xc);
    }
    else {
      lVar8 = (long)((short)uVar2 >> 5);
    }
    lVar5 = (long)param_1;
    if ((int)lVar8 <= param_1) {
      lVar5 = lVar8;
    }
    if (param_1 < 0) {
      lVar5 = 0;
    }
    uVar6 = (int)lVar8 - (int)lVar5;
    if (param_2 < (int)uVar6) {
      uVar6 = param_2;
    }
    if (param_2 < 0) {
      uVar6 = 0;
    }
    if (param_3 == (wchar16 *)0x0) {
      return (uint)(uVar6 != 0);
    }
    if ((uVar2 & 2) == 0) {
      pUVar10 = *(UnicodeString **)(this + 0x18);
    }
    else {
      pUVar10 = this + 10;
    }
    pUVar1 = (UnicodeString *)(param_3 + param_4);
    if (param_5 < 0) {
      param_5 = u_strlen_76_godot(pUVar1 + (long)param_4 * 2);
    }
    bVar11 = param_5 != uVar6;
    uVar7 = uVar6;
    if (bVar11) {
      if (!bVar11 || param_5 < (int)uVar6) {
        uVar7 = param_5;
      }
      uVar9 = 0xffffffff;
      if (!bVar11 || param_5 < (int)uVar6) {
        uVar9 = 1;
      }
    }
    if ((0 < (int)uVar7) && (pUVar10 + lVar5 * 2 != pUVar1)) {
      uVar3 = 0;
      do {
        iVar4 = (uint)*(ushort *)(pUVar10 + lVar5 * 2 + uVar3 * 2) -
                (uint)*(ushort *)(pUVar1 + uVar3 * 2);
        if (iVar4 != 0) {
          return iVar4 >> 0xf | 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar7);
    }
  }
  else {
    uVar9 = 0xffffffff;
  }
  return uVar9;
}



/* icu_76_godot::UnicodeString::doCompareCodePointOrder(int, int, char16_t const*, int, int) const
    */

uint __thiscall
icu_76_godot::UnicodeString::doCompareCodePointOrder
          (UnicodeString *this,int param_1,int param_2,wchar16 *param_3,int param_4,int param_5)

{
  ushort uVar1;
  wchar16 *pwVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  UnicodeString *pUVar6;
  long lVar7;
  
  uVar1 = *(ushort *)(this + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(this + 0xc);
    }
    else {
      iVar4 = (int)((short)uVar1 >> 5);
    }
    if (param_1 < 0) {
      lVar7 = 0;
      param_1 = 0;
    }
    else {
      if (iVar4 <= param_1) {
        param_1 = iVar4;
      }
      lVar7 = (long)param_1 * 2;
    }
    iVar5 = iVar4 - param_1;
    if (param_2 < iVar4 - param_1) {
      iVar5 = param_2;
    }
    if (param_2 < 0) {
      iVar5 = 0;
    }
    if (param_3 == (wchar16 *)0x0) {
      param_5 = 0;
      pwVar2 = (wchar16 *)0x0;
    }
    else {
      pwVar2 = param_3 + param_4;
    }
    if ((uVar1 & 2) == 0) {
      pUVar6 = *(UnicodeString **)(this + 0x18);
    }
    else {
      pUVar6 = this + 10;
    }
    iVar4 = uprv_strCompare_76_godot(pUVar6 + lVar7,iVar5,pwVar2,param_5,0,1);
    uVar3 = uVar1 & 1;
    if (iVar4 != 0) {
      uVar3 = iVar4 >> 0xf | 1;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* icu_76_godot::UnicodeString::char32At(int) const */

uint __thiscall icu_76_godot::UnicodeString::char32At(UnicodeString *this,int param_1)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  UnicodeString *pUVar5;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    uVar4 = *(uint *)(this + 0xc);
  }
  else {
    uVar4 = (uint)((short)uVar1 >> 5);
  }
  uVar3 = 0xffff;
  if ((uint)param_1 < uVar4) {
    if ((uVar1 & 2) == 0) {
      pUVar5 = *(UnicodeString **)(this + 0x18);
    }
    else {
      pUVar5 = this + 10;
    }
    lVar2 = (long)param_1 * 2;
    uVar1 = *(ushort *)(pUVar5 + (long)param_1 * 2);
    uVar3 = (uint)uVar1;
    if ((uVar1 & 0xf800) == 0xd800) {
      if ((uVar1 & 0x400) == 0) {
        if ((param_1 + 1U != uVar4) && ((*(ushort *)(pUVar5 + lVar2 + 2) & 0xfffffc00) == 0xdc00)) {
          return *(ushort *)(pUVar5 + lVar2 + 2) + 0xfca02400 + (uint)uVar1 * 0x400;
        }
      }
      else if ((0 < param_1) && ((*(ushort *)(pUVar5 + lVar2 + -2) & 0xfc00) == 0xd800)) {
        return uVar1 + 0xfca02400 + (uint)*(ushort *)(pUVar5 + lVar2 + -2) * 0x400;
      }
    }
  }
  return uVar3;
}



/* icu_76_godot::UnicodeString::getChar32At(int) const */

void __thiscall icu_76_godot::UnicodeString::getChar32At(UnicodeString *this,int param_1)

{
  char32At(this,param_1);
  return;
}



/* icu_76_godot::UnicodeString::getChar32Start(int) const */

int __thiscall icu_76_godot::UnicodeString::getChar32Start(UnicodeString *this,int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  UnicodeString *pUVar4;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    uVar2 = *(uint *)(this + 0xc);
  }
  else {
    uVar2 = (uint)((short)uVar1 >> 5);
  }
  iVar3 = 0;
  if ((uint)param_1 < uVar2) {
    if ((uVar1 & 2) == 0) {
      pUVar4 = *(UnicodeString **)(this + 0x18);
    }
    else {
      pUVar4 = this + 10;
    }
    iVar3 = param_1;
    if (((*(ushort *)(pUVar4 + (long)param_1 * 2) & 0xfc00) == 0xdc00) && (0 < param_1)) {
      return param_1 - (uint)((*(ushort *)(pUVar4 + (long)param_1 * 2 + -2) & 0xfc00) == 0xd800);
    }
  }
  return iVar3;
}



/* icu_76_godot::UnicodeString::getChar32Limit(int) const */

uint __thiscall icu_76_godot::UnicodeString::getChar32Limit(UnicodeString *this,int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  UnicodeString *pUVar4;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    uVar2 = *(uint *)(this + 0xc);
  }
  else {
    uVar2 = (uint)((short)uVar1 >> 5);
  }
  uVar3 = uVar2;
  if ((uint)param_1 < uVar2) {
    if ((uVar1 & 2) == 0) {
      pUVar4 = *(UnicodeString **)(this + 0x18);
    }
    else {
      pUVar4 = this + 10;
    }
    if (param_1 < 1) {
      return param_1;
    }
    uVar3 = param_1;
    if (((param_1 < (int)uVar2) || ((int)uVar2 < 0)) &&
       ((*(ushort *)(pUVar4 + (long)param_1 * 2 + -2) & 0xfc00) == 0xd800)) {
      return param_1 + (uint)((*(ushort *)(pUVar4 + (long)param_1 * 2) & 0xfc00) == 0xdc00);
    }
  }
  return uVar3;
}



/* icu_76_godot::UnicodeString::countChar32(int, int) const */

void __thiscall
icu_76_godot::UnicodeString::countChar32(UnicodeString *this,int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (param_1 < 0) {
    lVar4 = 0;
    param_1 = 0;
  }
  else {
    if (iVar2 <= param_1) {
      param_1 = iVar2;
    }
    lVar4 = (long)param_1 * 2;
  }
  iVar3 = iVar2 - param_1;
  if (param_2 < iVar2 - param_1) {
    iVar3 = param_2;
  }
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = iVar3;
  }
  if ((uVar1 & 2) == 0) {
    u_countChar32_76_godot(*(long *)(this + 0x18) + lVar4,iVar2);
    return;
  }
  u_countChar32_76_godot(this + lVar4 + 10,iVar2);
  return;
}



/* icu_76_godot::UnicodeString::hasMoreChar32Than(int, int, int) const */

void __thiscall
icu_76_godot::UnicodeString::hasMoreChar32Than
          (UnicodeString *this,int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (param_1 < 0) {
    lVar4 = 0;
    param_1 = 0;
  }
  else {
    if (iVar2 <= param_1) {
      param_1 = iVar2;
    }
    lVar4 = (long)param_1 * 2;
  }
  iVar3 = iVar2 - param_1;
  if (param_2 < iVar2 - param_1) {
    iVar3 = param_2;
  }
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = iVar3;
  }
  if ((uVar1 & 2) == 0) {
    u_strHasMoreChar32Than_76_godot(*(long *)(this + 0x18) + lVar4,iVar2,param_3);
    return;
  }
  u_strHasMoreChar32Than_76_godot(this + lVar4 + 10,iVar2,param_3);
  return;
}



/* icu_76_godot::UnicodeString::moveIndex32(int, int) const */

int __thiscall icu_76_godot::UnicodeString::moveIndex32(UnicodeString *this,int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UnicodeString *pUVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    iVar6 = *(int *)(this + 0xc);
  }
  else {
    iVar6 = (int)((short)uVar1 >> 5);
  }
  iVar2 = iVar6;
  if (param_1 <= iVar6) {
    iVar2 = param_1;
  }
  if (param_1 < 0) {
    iVar2 = 0;
  }
  if ((uVar1 & 2) == 0) {
    pUVar5 = *(UnicodeString **)(this + 0x18);
  }
  else {
    pUVar5 = this + 10;
  }
  iVar3 = iVar2;
  if (param_2 < 1) {
    iVar6 = -param_2;
    if (param_2 < 0) {
      do {
        if (iVar2 < 1) {
          return iVar2;
        }
        iVar4 = iVar2 + -1;
        iVar3 = iVar4;
        if ((*(ushort *)(pUVar5 + (long)iVar4 * 2) & 0xfc00) == 0xdc00) {
          if (iVar4 == 0) {
            return 0;
          }
          iVar3 = iVar2 + -2;
          if ((*(ushort *)(pUVar5 + (long)iVar4 * 2 + -2) & 0xfc00) != 0xd800) {
            iVar3 = iVar4;
          }
        }
        iVar2 = iVar3;
        iVar6 = iVar6 + -1;
      } while (0 < iVar6);
    }
  }
  else {
    do {
      if (iVar3 < iVar6) {
        uVar1 = *(ushort *)(pUVar5 + (long)iVar3 * 2);
      }
      else {
        if (-1 < iVar6) {
          return iVar3;
        }
        uVar1 = *(ushort *)(pUVar5 + (long)iVar3 * 2);
        if (uVar1 == 0) {
          return iVar3;
        }
      }
      iVar4 = iVar3 + 1;
      iVar2 = iVar4;
      if ((((uVar1 & 0xfc00) == 0xd800) && (iVar4 != iVar6)) &&
         (iVar2 = iVar3 + 2, (*(ushort *)(pUVar5 + (long)iVar4 * 2) & 0xfc00) != 0xdc00)) {
        iVar2 = iVar4;
      }
      param_2 = param_2 + -1;
      iVar3 = iVar2;
    } while (param_2 != 0);
  }
  return iVar2;
}



/* icu_76_godot::UnicodeString::doExtract(int, int, char16_t*, int) const */

void __thiscall
icu_76_godot::UnicodeString::doExtract
          (UnicodeString *this,int param_1,int param_2,wchar16 *param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UnicodeString *pUVar5;
  long lVar6;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(this + 0xc);
  }
  else {
    iVar3 = (int)((short)uVar1 >> 5);
  }
  if (param_1 < 0) {
    lVar6 = 0;
    param_1 = 0;
  }
  else {
    if (iVar3 <= param_1) {
      param_1 = iVar3;
    }
    lVar6 = (long)param_1 * 2;
  }
  if (param_2 < 0) {
    bVar2 = false;
    iVar4 = 0;
  }
  else {
    iVar4 = iVar3 - param_1;
    if (param_2 < iVar3 - param_1) {
      iVar4 = param_2;
    }
    bVar2 = 0 < iVar4;
  }
  pUVar5 = this + 10;
  if ((uVar1 & 2) == 0) {
    pUVar5 = *(UnicodeString **)(this + 0x18);
  }
  if ((pUVar5 + lVar6 != (UnicodeString *)(param_3 + param_4)) && (bVar2)) {
    memmove((UnicodeString *)(param_3 + param_4),pUVar5 + lVar6,(long)iVar4 * 2);
    return;
  }
  return;
}



/* icu_76_godot::UnicodeString::extract(icu_76_godot::Char16Ptr, int, UErrorCode&) const */

ulong __thiscall
icu_76_godot::UnicodeString::extract(UnicodeString *this,long *param_2,int param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  UnicodeString *pUVar5;
  UnicodeString *pUVar6;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *param_4;
    uVar4 = *(uint *)(this + 0xc);
  }
  else {
    iVar2 = *param_4;
    uVar4 = (uint)((short)uVar1 >> 5);
  }
  if (0 < iVar2) {
    return (ulong)uVar4;
  }
  if (((-1 < param_3) && ((uVar1 & 1) == 0)) &&
     ((pUVar6 = (UnicodeString *)*param_2, param_3 == 0 || (pUVar6 != (UnicodeString *)0x0)))) {
    pUVar5 = this + 10;
    if ((uVar1 & 2) == 0) {
      pUVar5 = *(UnicodeString **)(this + 0x18);
    }
    if (((0 < (int)uVar4) && ((int)uVar4 <= param_3)) && (pUVar5 != pUVar6)) {
      u_memcpy_76_godot(pUVar6,pUVar5,uVar4);
      pUVar6 = (UnicodeString *)*param_2;
    }
    uVar3 = u_terminateUChars_76_godot(pUVar6,param_3,uVar4,param_4);
    return uVar3;
  }
  *param_4 = 1;
  return (ulong)uVar4;
}



/* icu_76_godot::UnicodeString::extract(int, int, char*, int,
   icu_76_godot::UnicodeString::EInvariant) const */

undefined8
icu_76_godot::UnicodeString::extract(long param_1,int param_2,int param_3,long param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if ((param_5 < 0) || ((0 < param_5 && (param_4 == 0)))) goto LAB_001018be;
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    lVar3 = (long)*(int *)(param_1 + 0xc);
  }
  else {
    lVar3 = (long)((short)uVar1 >> 5);
  }
  if (param_2 < 0) {
    param_2 = 0;
LAB_00101922:
    if (param_3 < 0) {
      lVar3 = (long)param_2;
      goto LAB_001018ff;
    }
    iVar2 = (int)lVar3 - param_2;
    if (iVar2 <= param_3) {
      param_3 = iVar2;
    }
    if (param_3 <= param_5) {
      lVar3 = (long)param_2;
      goto LAB_00101901;
    }
  }
  else {
    if (param_2 <= (int)lVar3) goto LAB_00101922;
LAB_001018ff:
    param_3 = 0;
LAB_00101901:
    if ((uVar1 & 2) == 0) {
      param_1 = *(long *)(param_1 + 0x18);
    }
    else {
      param_1 = param_1 + 10;
    }
    u_UCharsToChars_76_godot(param_1 + lVar3 * 2,param_4,param_3);
  }
  local_24 = 0;
  uVar4 = u_terminateChars_76_godot(param_4,param_5,param_3,&local_24);
LAB_001018be:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::tempSubString(int, int) const */

undefined1  [16] icu_76_godot::UnicodeString::tempSubString(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int in_ECX;
  int in_EDX;
  long lVar4;
  undefined4 in_register_00000034;
  long lVar5;
  undefined4 in_register_0000003c;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  uVar3 = *(ushort *)(lVar5 + 8);
  if ((short)uVar3 < 0) {
    iVar1 = *(int *)(lVar5 + 0xc);
  }
  else {
    iVar1 = (int)((short)uVar3 >> 5);
  }
  if (in_EDX < 0) {
    lVar4 = 0;
    in_EDX = 0;
  }
  else {
    if (iVar1 <= in_EDX) {
      in_EDX = iVar1;
    }
    lVar4 = (long)in_EDX * 2;
  }
  iVar2 = iVar1 - in_EDX;
  if (in_ECX < iVar1 - in_EDX) {
    iVar2 = in_ECX;
  }
  if (in_ECX < 0) {
    iVar2 = 0;
  }
  if ((uVar3 & 0x11) == 0) {
    if ((uVar3 & 2) != 0) {
      lVar4 = lVar5 + 10 + lVar4;
      *(undefined ***)CONCAT44(in_register_0000003c,param_1) = &PTR__UnicodeString_001051f0;
      *(undefined2 *)(CONCAT44(in_register_0000003c,param_1) + 8) = 8;
      if (-1 < iVar2) goto LAB_00101a03;
      goto LAB_00101a4c;
    }
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar4 = *(long *)(lVar5 + 0x18) + lVar4;
      *(undefined ***)CONCAT44(in_register_0000003c,param_1) = &PTR__UnicodeString_001051f0;
      *(undefined2 *)(CONCAT44(in_register_0000003c,param_1) + 8) = 8;
      if (iVar2 < 0) goto LAB_00101a4c;
LAB_00101a03:
      uVar3 = *(ushort *)(CONCAT44(in_register_0000003c,param_1) + 8);
      if (iVar2 < 0x400) {
        uVar3 = uVar3 & 0x1f | (ushort)(iVar2 << 5);
      }
      else {
        *(int *)(CONCAT44(in_register_0000003c,param_1) + 0xc) = iVar2;
        uVar3 = uVar3 | 0xffe0;
      }
      *(ushort *)(CONCAT44(in_register_0000003c,param_1) + 8) = uVar3;
      *(long *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = lVar4;
      *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x10) = iVar2;
      auVar6._4_4_ = in_register_0000003c;
      auVar6._0_4_ = param_1;
      auVar6._8_8_ = lVar4;
      return auVar6;
    }
  }
  lVar4 = lVar5 + 10 + lVar4;
  *(undefined ***)CONCAT44(in_register_0000003c,param_1) = &PTR__UnicodeString_001051f0;
LAB_00101a4c:
  *(undefined2 *)(CONCAT44(in_register_0000003c,param_1) + 8) = 1;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x10) = 0;
  auVar7._4_4_ = in_register_0000003c;
  auVar7._0_4_ = param_1;
  auVar7._8_8_ = lVar4;
  return auVar7;
}



/* icu_76_godot::UnicodeString::toUTF8(int, int, char*, int) const */

undefined4 __thiscall
icu_76_godot::UnicodeString::toUTF8
          (UnicodeString *this,int param_1,int param_2,char *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  UnicodeString *pUVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  uVar1 = *(ushort *)(this + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (param_1 < 0) {
    lVar5 = 0;
    param_1 = 0;
  }
  else {
    if (iVar2 <= param_1) {
      param_1 = iVar2;
    }
    lVar5 = (long)param_1 * 2;
  }
  local_14 = 0;
  iVar3 = iVar2 - param_1;
  if (param_2 < iVar2 - param_1) {
    iVar3 = param_2;
  }
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = iVar3;
  }
  if ((uVar1 & 0x11) == 0) {
    pUVar4 = this + 10;
    if ((uVar1 & 2) == 0) {
      pUVar4 = *(UnicodeString **)(this + 0x18);
    }
  }
  else {
    pUVar4 = (UnicodeString *)0x0;
  }
  u_strToUTF8WithSub_76_godot(param_3,param_4,&local_18,pUVar4 + lVar5,iVar2,0xfffd,0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::extract(int, int, char*, unsigned int) const */

undefined8 __thiscall
icu_76_godot::UnicodeString::extract
          (UnicodeString *this,int param_1,int param_2,char *param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((param_4 != 0) && (param_3 == (char *)0x0)) {
    return 0;
  }
  if ((int)param_4 < 0) {
    param_4 = 0x7fffffff;
  }
  uVar1 = toUTF8(this,param_1,param_2,param_3,param_4);
  return uVar1;
}



/* icu_76_godot::UnicodeString::toUTF8(icu_76_godot::ByteSink&) const */

void __thiscall icu_76_godot::UnicodeString::toUTF8(UnicodeString *this,ByteSink *param_1)

{
  undefined8 uVar1;
  long lVar2;
  UnicodeString *pUVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined4 local_454;
  int local_450;
  int local_44c;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)(this + 8) < 0) {
    iVar4 = *(int *)(this + 0xc);
  }
  else {
    iVar4 = (int)(*(short *)(this + 8) >> 5);
  }
  if (iVar4 != 0) {
    local_454 = 0x400;
    iVar5 = 0x400;
    if (iVar4 < 0x401) {
      iVar5 = iVar4;
    }
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))
                      (param_1,iVar5,iVar4 * 3,local_448,0x400,&local_454);
    local_450 = 0;
    local_44c = 0;
    if ((*(ushort *)(this + 8) & 0x11) == 0) {
      pUVar3 = this + 10;
      if ((*(ushort *)(this + 8) & 2) == 0) {
        pUVar3 = *(UnicodeString **)(this + 0x18);
      }
    }
    else {
      pUVar3 = (UnicodeString *)0x0;
    }
    uVar6 = 0;
    u_strToUTF8WithSub_76_godot(uVar1,local_454,&local_450,pUVar3,iVar4,0xfffd,0,&local_44c);
    if (local_44c == 0xf) {
      lVar2 = uprv_malloc_76_godot((long)local_450,uVar6);
      if (lVar2 != 0) {
        local_44c = 0;
        if ((*(ushort *)(this + 8) & 0x11) == 0) {
          pUVar3 = this + 10;
          if ((*(ushort *)(this + 8) & 2) == 0) {
            pUVar3 = *(UnicodeString **)(this + 0x18);
          }
        }
        else {
          pUVar3 = (UnicodeString *)0x0;
        }
        u_strToUTF8WithSub_76_godot(lVar2,local_450,&local_450,pUVar3,iVar4,0xfffd,0);
        if (local_44c < 1) {
          (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2,local_450);
          (**(code **)(*(long *)param_1 + 0x20))(param_1);
        }
        uprv_free_76_godot(lVar2);
      }
    }
    else if (local_44c < 1) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar1,local_450);
      (**(code **)(*(long *)param_1 + 0x20))(param_1);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::toUTF32(int*, int, UErrorCode&) const */

undefined4 __thiscall
icu_76_godot::UnicodeString::toUTF32
          (UnicodeString *this,int *param_1,int param_2,UErrorCode *param_3)

{
  ushort uVar1;
  UnicodeString *pUVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (*(int *)param_3 < 1) {
    uVar1 = *(ushort *)(this + 8);
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(this + 0xc);
    }
    else {
      iVar3 = (int)((short)uVar1 >> 5);
    }
    if ((uVar1 & 0x11) == 0) {
      pUVar2 = this + 10;
      if ((uVar1 & 2) == 0) {
        pUVar2 = *(UnicodeString **)(this + 0x18);
      }
    }
    else {
      pUVar2 = (UnicodeString *)0x0;
    }
    u_strToUTF32WithSub_76_godot(param_1,param_2,&local_14,pUVar2,iVar3,0xfffd,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::indexOf(char16_t const*, int, int, int, int) const */

long __thiscall
icu_76_godot::UnicodeString::indexOf
          (UnicodeString *this,wchar16 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  long lVar2;
  UnicodeString *pUVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(ushort *)(this + 8);
  if (((((uVar1 & 1) != 0) || (param_1 == (wchar16 *)0x0 || param_2 < 0)) || (param_3 == 0)) ||
     ((param_3 < 0 && (param_1[param_2] == L'\0')))) {
    return 0xffffffff;
  }
  if ((short)uVar1 < 0) {
    iVar4 = *(int *)(this + 0xc);
  }
  else {
    iVar4 = (int)((short)uVar1 >> 5);
  }
  if (param_4 < 0) {
    lVar2 = 0;
    param_4 = 0;
  }
  else {
    if (iVar4 <= param_4) {
      param_4 = iVar4;
    }
    lVar2 = (long)param_4 * 2;
  }
  pUVar3 = this + 10;
  iVar5 = iVar4 - param_4;
  if (param_5 < iVar4 - param_4) {
    iVar5 = param_5;
  }
  if (param_5 < 0) {
    iVar5 = 0;
  }
  if ((uVar1 & 2) == 0) {
    pUVar3 = *(UnicodeString **)(this + 0x18);
  }
  lVar2 = u_strFindFirst_76_godot(pUVar3 + lVar2,iVar5);
  if (lVar2 != 0) {
    return lVar2 - (long)pUVar3 >> 1;
  }
  return 0xffffffff;
}



/* icu_76_godot::UnicodeString::doIndexOf(char16_t, int, int) const */

long __thiscall
icu_76_godot::UnicodeString::doIndexOf(UnicodeString *this,wchar16 param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  UnicodeString *pUVar5;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (param_2 < 0) {
    lVar4 = 0;
    param_2 = 0;
  }
  else {
    if (iVar2 <= param_2) {
      param_2 = iVar2;
    }
    lVar4 = (long)param_2 * 2;
  }
  pUVar5 = this + 10;
  iVar3 = iVar2 - param_2;
  if (param_3 < iVar2 - param_2) {
    iVar3 = param_3;
  }
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = iVar3;
  }
  if ((uVar1 & 2) == 0) {
    pUVar5 = *(UnicodeString **)(this + 0x18);
  }
  lVar4 = u_memchr_76_godot(pUVar5 + lVar4,param_1,iVar2);
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  return lVar4 - (long)pUVar5 >> 1;
}



/* icu_76_godot::UnicodeString::doIndexOf(int, int, int) const */

long __thiscall
icu_76_godot::UnicodeString::doIndexOf(UnicodeString *this,int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  UnicodeString *pUVar5;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (param_2 < 0) {
    lVar4 = 0;
    param_2 = 0;
  }
  else {
    if (iVar2 <= param_2) {
      param_2 = iVar2;
    }
    lVar4 = (long)param_2 * 2;
  }
  pUVar5 = this + 10;
  iVar3 = iVar2 - param_2;
  if (param_3 < iVar2 - param_2) {
    iVar3 = param_3;
  }
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = iVar3;
  }
  if ((uVar1 & 2) == 0) {
    pUVar5 = *(UnicodeString **)(this + 0x18);
  }
  lVar4 = u_memchr32_76_godot(pUVar5 + lVar4,param_1,iVar2);
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  return lVar4 - (long)pUVar5 >> 1;
}



/* icu_76_godot::UnicodeString::lastIndexOf(char16_t const*, int, int, int, int) const */

long __thiscall
icu_76_godot::UnicodeString::lastIndexOf
          (UnicodeString *this,wchar16 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  long lVar2;
  UnicodeString *pUVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(ushort *)(this + 8);
  if (((((uVar1 & 1) != 0) || (param_1 == (wchar16 *)0x0 || param_2 < 0)) || (param_3 == 0)) ||
     ((param_3 < 0 && (param_1[param_2] == L'\0')))) {
    return 0xffffffff;
  }
  if ((short)uVar1 < 0) {
    iVar4 = *(int *)(this + 0xc);
  }
  else {
    iVar4 = (int)((short)uVar1 >> 5);
  }
  if (param_4 < 0) {
    lVar2 = 0;
    param_4 = 0;
  }
  else {
    if (iVar4 <= param_4) {
      param_4 = iVar4;
    }
    lVar2 = (long)param_4 * 2;
  }
  pUVar3 = this + 10;
  iVar5 = iVar4 - param_4;
  if (param_5 < iVar4 - param_4) {
    iVar5 = param_5;
  }
  if (param_5 < 0) {
    iVar5 = 0;
  }
  if ((uVar1 & 2) == 0) {
    pUVar3 = *(UnicodeString **)(this + 0x18);
  }
  lVar2 = u_strFindLast_76_godot(pUVar3 + lVar2,iVar5);
  if (lVar2 != 0) {
    return lVar2 - (long)pUVar3 >> 1;
  }
  return 0xffffffff;
}



/* icu_76_godot::UnicodeString::doLastIndexOf(char16_t, int, int) const */

long __thiscall
icu_76_godot::UnicodeString::doLastIndexOf
          (UnicodeString *this,wchar16 param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  UnicodeString *pUVar5;
  
  uVar1 = *(ushort *)(this + 8);
  if ((uVar1 & 1) != 0) {
    return 0xffffffff;
  }
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (param_2 < 0) {
    lVar4 = 0;
    param_2 = 0;
  }
  else {
    if (iVar2 <= param_2) {
      param_2 = iVar2;
    }
    lVar4 = (long)param_2 * 2;
  }
  pUVar5 = this + 10;
  iVar3 = iVar2 - param_2;
  if (param_3 < iVar2 - param_2) {
    iVar3 = param_3;
  }
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = iVar3;
  }
  if ((uVar1 & 2) == 0) {
    pUVar5 = *(UnicodeString **)(this + 0x18);
  }
  lVar4 = u_memrchr_76_godot(pUVar5 + lVar4,param_1,iVar2);
  if (lVar4 != 0) {
    return lVar4 - (long)pUVar5 >> 1;
  }
  return 0xffffffff;
}



/* icu_76_godot::UnicodeString::doLastIndexOf(int, int, int) const */

long __thiscall
icu_76_godot::UnicodeString::doLastIndexOf(UnicodeString *this,int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  UnicodeString *pUVar5;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (param_2 < 0) {
    lVar4 = 0;
    param_2 = 0;
  }
  else {
    if (iVar2 <= param_2) {
      param_2 = iVar2;
    }
    lVar4 = (long)param_2 * 2;
  }
  pUVar5 = this + 10;
  iVar3 = iVar2 - param_2;
  if (param_3 < iVar2 - param_2) {
    iVar3 = param_3;
  }
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = iVar3;
  }
  if ((uVar1 & 2) == 0) {
    pUVar5 = *(UnicodeString **)(this + 0x18);
  }
  lVar4 = u_memrchr32_76_godot(pUVar5 + lVar4,param_1,iVar2);
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  return lVar4 - (long)pUVar5 >> 1;
}



/* icu_76_godot::UnicodeString::setToBogus() */

void __thiscall icu_76_godot::UnicodeString::setToBogus(UnicodeString *this)

{
  int *piVar1;
  
  if (((byte)this[8] & 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(long *)(this + 0x18) + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uprv_free_76_godot(*(long *)(this + 0x18) + -4);
    }
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 8) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}



/* icu_76_godot::UnicodeString::unBogus() */

void __thiscall icu_76_godot::UnicodeString::unBogus(UnicodeString *this)

{
  if (((byte)this[8] & 1) != 0) {
    *(undefined2 *)(this + 8) = 2;
  }
  return;
}



/* icu_76_godot::UnicodeString::setTo(signed char, icu_76_godot::ConstChar16Ptr, int) */

UnicodeString *
icu_76_godot::UnicodeString::setTo(UnicodeString *param_1,char param_2,undefined8 *param_3)

{
  if (((byte)param_1[8] & 0x10) == 0) {
    setTo(param_1,(int)param_2,*param_3);
  }
  return param_1;
}



/* icu_76_godot::UnicodeString::setTo(char16_t*, int, int) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::setTo(UnicodeString *this,wchar16 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  wchar16 *pwVar4;
  undefined2 uVar5;
  
  if ((*(ushort *)(this + 8) & 0x10) != 0) {
    return this;
  }
  uVar3 = *(ushort *)(this + 8) & 4;
  if (param_1 == (wchar16 *)0x0) {
    if (uVar3 != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(this + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      }
    }
    *(undefined2 *)(this + 8) = 2;
    return this;
  }
  if ((param_2 < -1 || param_3 < param_2) || (param_3 < 0)) {
    if (uVar3 != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(this + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      }
    }
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined2 *)(this + 8) = 1;
    *(undefined4 *)(this + 0x10) = 0;
    return this;
  }
  if (param_2 == -1) {
    pwVar4 = param_1;
    if (param_1 != param_1 + param_3) {
      do {
        if (*pwVar4 == L'\0') break;
        pwVar4 = pwVar4 + 1;
      } while (param_1 + param_3 != pwVar4);
      param_2 = (int)((long)pwVar4 - (long)param_1 >> 1);
      iVar2 = param_2;
      if (uVar3 == 0) goto LAB_00102301;
LAB_001023c1:
      param_2 = iVar2;
      LOCK();
      piVar1 = (int *)(*(long *)(this + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      }
      goto LAB_00102301;
    }
    param_2 = 0;
    iVar2 = 0;
    if (uVar3 != 0) goto LAB_001023c1;
  }
  else {
    iVar2 = param_2;
    if (uVar3 != 0) goto LAB_001023c1;
LAB_00102301:
    if (0x3ff < param_2) {
      *(int *)(this + 0xc) = param_2;
      uVar5 = 0xffe0;
      goto LAB_00102311;
    }
  }
  uVar5 = (undefined2)(param_2 << 5);
LAB_00102311:
  *(undefined2 *)(this + 8) = uVar5;
  *(wchar16 **)(this + 0x18) = param_1;
  *(int *)(this + 0x10) = param_3;
  return this;
}



/* icu_76_godot::UnicodeString::doHashCode() const */

int __thiscall icu_76_godot::UnicodeString::doHashCode(UnicodeString *this)

{
  ushort uVar1;
  int iVar2;
  UnicodeString *pUVar3;
  
  uVar1 = *(ushort *)(this + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if ((uVar1 & 2) == 0) {
    pUVar3 = *(UnicodeString **)(this + 0x18);
  }
  else {
    pUVar3 = this + 10;
  }
  iVar2 = ustr_hashUCharsN_76_godot(pUVar3,iVar2);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  return iVar2;
}



/* icu_76_godot::UnicodeString::releaseBuffer(int) */

void __thiscall icu_76_godot::UnicodeString::releaseBuffer(UnicodeString *this,int param_1)

{
  int iVar1;
  UnicodeString *pUVar2;
  ushort uVar3;
  long lVar4;
  UnicodeString *pUVar5;
  
  uVar3 = *(ushort *)(this + 8);
  if (((uVar3 & 0x10) == 0) || (param_1 < -1)) {
    return;
  }
  if ((uVar3 & 2) == 0) {
    iVar1 = *(int *)(this + 0x10);
    if (param_1 == -1) {
      pUVar5 = *(UnicodeString **)(this + 0x18);
      lVar4 = (long)iVar1 * 2;
LAB_0010250a:
      pUVar2 = pUVar5;
      if (pUVar5 + lVar4 <= pUVar5) {
        param_1 = 0;
        goto LAB_001024ef;
      }
      do {
        if (*(short *)pUVar2 == 0) break;
        pUVar2 = pUVar2 + 2;
      } while (pUVar2 < pUVar5 + lVar4);
      param_1 = (int)((long)pUVar2 - (long)pUVar5 >> 1);
    }
    else if (iVar1 < param_1) {
      param_1 = iVar1;
    }
    if (0x3ff < param_1) {
      *(int *)(this + 0xc) = param_1;
      uVar3 = uVar3 | 0xffe0;
      goto LAB_001024d0;
    }
  }
  else {
    if (param_1 == -1) {
      pUVar5 = this + 10;
      lVar4 = 0x36;
      goto LAB_0010250a;
    }
    if (0x1b < param_1) {
      param_1 = 0x1b;
    }
  }
LAB_001024ef:
  uVar3 = uVar3 & 0x1f | (ushort)(param_1 << 5);
LAB_001024d0:
  *(ushort *)(this + 8) = uVar3 & 0xffef;
  return;
}



/* icu_76_godot::UnicodeString::cloneArrayIfNeeded(int, int, signed char, int**, signed char) */

undefined8 __thiscall
icu_76_godot::UnicodeString::cloneArrayIfNeeded
          (UnicodeString *this,int param_1,int param_2,char param_4,undefined8 *param_5,char param_6
          )

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  int *piVar4;
  UnicodeString *__dest;
  ushort uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined1 *local_90;
  undefined1 local_78 [56];
  long local_40;
  
  uVar5 = *(ushort *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == -1) && (param_1 = 0x1b, (uVar5 & 2) == 0)) {
    param_1 = *(int *)(this + 0x10);
  }
  if ((uVar5 & 0x11) != 0) {
LAB_0010271f:
    uVar2 = 0;
    goto LAB_0010264c;
  }
  if (((param_6 == '\0') && ((uVar5 & 8) == 0)) &&
     (((uVar5 & 4) == 0 ||
      (uVar5 = *(ushort *)(this + 8), *(int *)(*(long *)(this + 0x18) + -4) < 2)))) {
    iVar6 = 0x1b;
    if ((uVar5 & 2) == 0) {
      iVar6 = *(int *)(this + 0x10);
    }
    if (iVar6 < param_1) goto LAB_001025a6;
  }
  else {
LAB_001025a6:
    uVar3 = uVar5 & 2;
    if (param_2 < 0) {
      param_2 = param_1;
      if ((short)uVar5 < 0) goto LAB_001026ad;
LAB_001025cd:
      iVar6 = (int)((short)uVar5 >> 5);
      if (uVar3 != 0) goto LAB_001025e2;
LAB_001026ba:
      local_90 = *(undefined1 **)(this + 0x18);
LAB_001026c3:
      cVar1 = allocate(this,param_2);
      if ((cVar1 == '\0') &&
         ((param_2 <= param_1 || (cVar1 = allocate(this,param_1), cVar1 == '\0')))) {
        if (uVar3 == 0) {
          *(undefined1 **)(this + 0x18) = local_90;
        }
LAB_001026f8:
        *(ushort *)(this + 8) = uVar5;
        if ((uVar5 & 4) != 0) {
          LOCK();
          piVar4 = (int *)(*(long *)(this + 0x18) + -4);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            uprv_free_76_godot(*(long *)(this + 0x18) + -4);
          }
        }
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined2 *)(this + 8) = 1;
        *(undefined4 *)(this + 0x10) = 0;
        goto LAB_0010271f;
      }
      uVar3 = *(ushort *)(this + 8);
      if (param_4 != '\0') {
        if ((uVar3 & 2) != 0) {
          if (0x1b < iVar6) {
            iVar6 = 0x1b;
          }
          if (local_90 != (undefined1 *)0x0) goto LAB_00102920;
          goto LAB_0010262c;
        }
        if (*(int *)(this + 0x10) < iVar6) {
          iVar6 = *(int *)(this + 0x10);
        }
        if (local_90 != (undefined1 *)0x0) goto LAB_0010283c;
        goto LAB_0010285d;
      }
      *(ushort *)(this + 8) = uVar3 & 0x1f;
    }
    else {
      iVar6 = 0x1b;
      if (param_2 < 0x1c) {
        iVar6 = param_2;
      }
      if (param_1 < 0x1c) {
        param_2 = iVar6;
      }
      if (-1 < (short)uVar5) goto LAB_001025cd;
LAB_001026ad:
      iVar6 = *(int *)(this + 0xc);
      if (uVar3 == 0) goto LAB_001026ba;
LAB_001025e2:
      if ((param_4 == '\0') || (param_2 < 0x1c)) {
        local_90 = (undefined1 *)0x0;
        goto LAB_001026c3;
      }
      if (iVar6 < 1) {
        cVar1 = allocate(this,param_2);
        if (cVar1 == '\0') {
LAB_00102800:
          if ((param_2 <= param_1) || (cVar1 = allocate(this,param_1), cVar1 == '\0'))
          goto LAB_001026f8;
          uVar3 = *(ushort *)(this + 8);
          if ((uVar3 & 2) == 0) {
            local_90 = local_78;
            if (*(int *)(this + 0x10) < iVar6) {
              iVar6 = *(int *)(this + 0x10);
            }
            goto LAB_0010283c;
          }
          local_90 = local_78;
          if (0x1b < iVar6) {
            iVar6 = 0x1b;
          }
LAB_00102920:
          __dest = this + 10;
LAB_00102840:
          if (0 < iVar6) goto LAB_00102849;
        }
        else {
          uVar3 = *(ushort *)(this + 8);
          if (((uVar3 & 2) == 0) && (*(int *)(this + 0x10) < iVar6)) {
            iVar6 = *(int *)(this + 0x10);
          }
          local_90 = local_78;
        }
      }
      else {
        local_90 = local_78;
        __dest = this + 10;
        __memmove_chk(local_90,__dest,(long)iVar6 * 2,0x36);
        cVar1 = allocate(this,param_2);
        if (cVar1 == '\0') goto LAB_00102800;
        uVar3 = *(ushort *)(this + 8);
        if ((uVar3 & 2) == 0) {
          if (*(int *)(this + 0x10) < iVar6) {
            iVar6 = *(int *)(this + 0x10);
          }
LAB_0010283c:
          __dest = *(UnicodeString **)(this + 0x18);
          goto LAB_00102840;
        }
        if (0x1b < iVar6) {
          iVar6 = 0x1b;
        }
LAB_00102849:
        memmove(__dest,local_90,(long)iVar6 * 2);
        uVar3 = *(ushort *)(this + 8);
LAB_0010285d:
        if (0x3ff < iVar6) {
          *(int *)(this + 0xc) = iVar6;
          *(ushort *)(this + 8) = uVar3 | 0xffe0;
          goto joined_r0x00102780;
        }
      }
LAB_0010262c:
      *(ushort *)(this + 8) = uVar3 & 0x1f | (ushort)(iVar6 << 5);
    }
joined_r0x00102780:
    if ((uVar5 & 4) != 0) {
      piVar4 = (int *)(local_90 + -4);
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        if (param_5 == (undefined8 *)0x0) {
          uprv_free_76_godot();
        }
        else {
          *param_5 = piVar4;
        }
      }
    }
  }
  uVar2 = 1;
LAB_0010264c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::UnicodeString(char const*, int,
   icu_76_godot::UnicodeString::EInvariant) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,char *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  ulong uVar5;
  UnicodeString *pUVar6;
  
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  if (param_1 == (char *)0x0) {
    return;
  }
  uVar5 = (ulong)param_2;
  if ((int)param_2 < 0) {
    sVar3 = strlen(param_1);
    uVar5 = sVar3 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  cVar2 = cloneArrayIfNeeded(this,uVar5,uVar5,0,0,0);
  if (cVar2 != '\0') {
    pUVar6 = this + 10;
    if (((byte)this[8] & 2) == 0) {
      pUVar6 = *(UnicodeString **)(this + 0x18);
    }
    u_charsToUChars_76_godot(param_1,pUVar6,uVar5);
    if (iVar4 < 0x400) {
      *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0x1f | (ushort)(iVar4 << 5);
      return;
    }
    *(ushort *)(this + 8) = *(ushort *)(this + 8) | 0xffe0;
    *(int *)(this + 0xc) = iVar4;
    return;
  }
  if (((byte)this[8] & 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(long *)(this + 0x18) + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uprv_free_76_godot(*(long *)(this + 0x18) + -4);
    }
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 8) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}



/* icu_76_godot::UnicodeString::getTerminatedBuffer() */

UnicodeString * __thiscall icu_76_godot::UnicodeString::getTerminatedBuffer(UnicodeString *this)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  UnicodeString *pUVar6;
  long lVar7;
  
  uVar1 = *(ushort *)(this + 8);
  if ((uVar1 & 0x11) != 0) {
    return (UnicodeString *)0x0;
  }
  sVar4 = (short)uVar1 >> 5;
  if ((uVar1 & 2) == 0) {
    pUVar6 = *(UnicodeString **)(this + 0x18);
    iVar5 = *(int *)(this + 0x10);
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(this + 0xc);
      goto LAB_00102b34;
    }
    lVar7 = (long)sVar4;
    if (iVar5 <= sVar4) goto LAB_00102ab8;
    if ((uVar1 & 8) == 0) goto LAB_00102b16;
LAB_00102aae:
    if (*(short *)(pUVar6 + (long)(int)lVar7 * 2) == 0) {
      return pUVar6;
    }
  }
  else {
    pUVar6 = this + 10;
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(this + 0xc);
      iVar5 = 0x1b;
LAB_00102b34:
      lVar7 = (long)iVar2;
      if (iVar2 < iVar5) goto LAB_00102aaa;
      if (iVar2 == 0x7fffffff) {
        return (UnicodeString *)0x0;
      }
    }
    else {
      lVar7 = (long)sVar4;
      if (sVar4 < 0x1b) {
LAB_00102aaa:
        if ((uVar1 & 8) != 0) goto LAB_00102aae;
LAB_00102b16:
        if (((uVar1 & 4) == 0) || (*(int *)(*(long *)(this + 0x18) + -4) == 1)) goto LAB_00102ae1;
      }
    }
  }
LAB_00102ab8:
  cVar3 = cloneArrayIfNeeded(this,(int)lVar7 + 1,0xffffffff,1,0,0);
  if (cVar3 == '\0') {
    return (UnicodeString *)0x0;
  }
  pUVar6 = this + 10;
  if (((byte)this[8] & 2) == 0) {
    pUVar6 = *(UnicodeString **)(this + 0x18);
  }
LAB_00102ae1:
  *(undefined2 *)(pUVar6 + lVar7 * 2) = 0;
  return pUVar6;
}



/* icu_76_godot::UnicodeString::setCharAt(int, char16_t) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::setCharAt(UnicodeString *this,int param_1,wchar16 param_2)

{
  char cVar1;
  long lVar2;
  UnicodeString *pUVar3;
  int iVar4;
  
  if (*(short *)(this + 8) < 0) {
    iVar4 = *(int *)(this + 0xc);
  }
  else {
    iVar4 = (int)(*(short *)(this + 8) >> 5);
  }
  cVar1 = cloneArrayIfNeeded(this,0xffffffff,0xffffffff,1,0,0);
  if ((0 < iVar4) && (cVar1 != '\0')) {
    lVar2 = 0;
    if (-1 < param_1) {
      if (param_1 < iVar4) {
        lVar2 = (long)param_1 * 2;
      }
      else {
        lVar2 = (long)(iVar4 + -1) * 2;
      }
    }
    pUVar3 = this + 10;
    if (((byte)this[8] & 2) == 0) {
      pUVar3 = *(UnicodeString **)(this + 0x18);
    }
    *(wchar16 *)(pUVar3 + lVar2) = param_2;
    return this;
  }
  return this;
}



/* icu_76_godot::UnicodeString::doAppend(char16_t const*, int, int) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::doAppend(UnicodeString *this,wchar16 *param_1,int param_2,int param_3)

{
  int *piVar1;
  UnicodeString *__src;
  ushort uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  UnicodeString *pUVar6;
  ushort uVar7;
  int iVar8;
  wchar16 *pwVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  int local_7c;
  undefined **local_78;
  ushort local_70;
  wchar16 local_6e [7];
  wchar16 *local_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ushort *)(this + 8);
  if ((((uVar2 & 0x11) != 0) || (param_3 == 0)) || (param_1 == (wchar16 *)0x0)) goto LAB_00102d23;
  __src = (UnicodeString *)(param_1 + param_2);
  if (param_3 < 0) {
    param_3 = u_strlen_76_godot(__src);
    if (param_3 == 0) goto LAB_00102d23;
    uVar2 = *(ushort *)(this + 8);
  }
  if ((short)uVar2 < 0) {
    uVar10 = (ulong)*(int *)(this + 0xc);
  }
  else {
    uVar10 = (ulong)((short)uVar2 >> 5);
  }
  iVar8 = 0x1b;
  if ((uVar2 & 2) == 0) {
    iVar8 = *(int *)(this + 0x10);
  }
  iVar5 = (int)uVar10;
  if ((iVar8 - iVar5 < param_3) || ((uVar2 & 0x19) != 0)) {
LAB_00102d48:
    cVar4 = uprv_add32_overflow_76_godot(uVar10 & 0xffffffff,param_3,&local_7c);
    if (cVar4 != '\0') {
      if (((byte)this[8] & 4) != 0) {
        LOCK();
        piVar1 = (int *)(*(long *)(this + 0x18) + -4);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uprv_free_76_godot(*(long *)(this + 0x18) + -4);
        }
      }
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined2 *)(this + 8) = 1;
      *(undefined4 *)(this + 0x10) = 0;
      goto LAB_00102d23;
    }
    uVar2 = *(ushort *)(this + 8);
    pUVar6 = this + 10;
    if ((uVar2 & 2) == 0) {
      pUVar6 = *(UnicodeString **)(this + 0x18);
    }
    if (((((uVar2 & 0x19) == 0) &&
         (((uVar2 & 4) == 0 || (*(int *)(*(long *)(this + 0x18) + -4) == 1)))) &&
        (pUVar6 < __src + (long)param_3 * 2)) && (__src < pUVar6 + (long)iVar5 * 2)) {
      local_70 = 2;
      local_78 = &PTR__UnicodeString_001051f0;
      doAppend((UnicodeString *)&local_78,(wchar16 *)__src,0,param_3);
      if ((local_70 & 1) == 0) {
        pwVar9 = local_6e;
        if ((local_70 & 2) == 0) {
          pwVar9 = local_60;
        }
        this = (UnicodeString *)doAppend(this,pwVar9,0,param_3);
      }
      else {
        if (((byte)this[8] & 4) != 0) {
          LOCK();
          piVar1 = (int *)(*(long *)(this + 0x18) + -4);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            uprv_free_76_godot(*(long *)(this + 0x18) + -4);
          }
        }
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined2 *)(this + 8) = 1;
        *(undefined4 *)(this + 0x10) = 0;
      }
      ~UnicodeString((UnicodeString *)&local_78);
      goto LAB_00102d23;
    }
    iVar5 = (local_7c >> 2) + 0x80;
    iVar8 = local_7c + iVar5;
    if (0x7ffffff5 - local_7c < iVar5) {
      iVar8 = 0x7ffffff5;
    }
    cVar4 = cloneArrayIfNeeded(this,local_7c,iVar8,1,0,0);
    if (cVar4 == '\0') goto LAB_00102d23;
    uVar2 = *(ushort *)(this + 8);
    uVar7 = uVar2 & 2;
LAB_00102cd1:
    pUVar6 = this + 10;
    if (uVar7 == 0) {
      pUVar6 = *(UnicodeString **)(this + 0x18);
    }
    if ((0 < param_3) && (pUVar6 + uVar10 * 2 != __src)) {
      memmove(pUVar6 + uVar10 * 2,__src,(long)param_3 * 2);
      uVar2 = *(ushort *)(this + 8);
    }
  }
  else {
    if ((uVar2 & 4) != 0) {
      if (*(int *)(*(long *)(this + 0x18) + -4) != 1) goto LAB_00102d48;
      uVar2 = *(ushort *)(this + 8);
    }
    uVar7 = uVar2 & 2;
    local_7c = param_3 + iVar5;
    if (4 < param_3) goto LAB_00102cd1;
    pUVar6 = this + 10;
    if (uVar7 == 0) {
      pUVar6 = *(UnicodeString **)(this + 0x18);
    }
    lVar3 = uVar10 * 2;
    *(wchar16 *)(pUVar6 + uVar10 * 2) = *(wchar16 *)__src;
    if (((1 < param_3) && (*(wchar16 *)(pUVar6 + lVar3 + 2) = *(wchar16 *)(__src + 2), param_3 != 2)
        ) && (*(wchar16 *)(pUVar6 + lVar3 + 4) = *(wchar16 *)(__src + 4), param_3 == 4)) {
      *(wchar16 *)(pUVar6 + lVar3 + 6) = *(wchar16 *)(__src + 6);
    }
    uVar2 = *(ushort *)(this + 8);
  }
  if (local_7c < 0x400) {
    *(ushort *)(this + 8) = uVar2 & 0x1f | (ushort)(local_7c << 5);
  }
  else {
    *(int *)(this + 0xc) = local_7c;
    *(ushort *)(this + 8) = uVar2 | 0xffe0;
  }
LAB_00102d23:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::UnicodeString(char16_t const*, int) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,wchar16 *param_1,int param_2)

{
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  doAppend(this,param_1,0,param_2);
  return;
}



/* icu_76_godot::UnicodeString::append(int) */

UnicodeString * __thiscall icu_76_godot::UnicodeString::append(UnicodeString *this,int param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  wchar16 local_14;
  ushort local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_1 < 0x10000) {
    iVar1 = 1;
    local_14 = (wchar16)param_1;
  }
  else {
    if (0x10ffff < (uint)param_1) goto LAB_00103016;
    iVar1 = 2;
    local_12 = (wchar16)param_1 & 0x3ffU | 0xdc00;
    local_14 = (short)(param_1 >> 10) + L'ퟀ';
  }
  this = (UnicodeString *)doAppend(this,&local_14,0,iVar1);
LAB_00103016:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::doAppend(icu_76_godot::UnicodeString const&, int, int) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::doAppend
          (UnicodeString *this,UnicodeString *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  UnicodeString *pUVar4;
  int iVar5;
  
  if (param_3 == 0) {
    return this;
  }
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (iVar2 < param_2) {
    iVar5 = 0;
    goto LAB_001030ac;
  }
  iVar3 = iVar2 - param_2;
  if (param_3 < iVar2 - param_2) {
    iVar3 = param_3;
  }
  iVar2 = param_2;
  iVar5 = 0;
  if (-1 < param_3) {
    iVar5 = iVar3;
  }
LAB_001030ac:
  if ((uVar1 & 2) != 0) {
    pUVar4 = (UnicodeString *)doAppend(this,(wchar16 *)(param_1 + 10),iVar2,iVar5);
    return pUVar4;
  }
  pUVar4 = (UnicodeString *)doAppend(this,*(wchar16 **)(param_1 + 0x18),iVar2,iVar5);
  return pUVar4;
}



/* icu_76_godot::UnicodeString::doAppend(std::basic_string_view<char16_t, std::char_traits<char16_t>
   >) */

void icu_76_godot::UnicodeString::doAppend(UnicodeString *param_1,ulong param_2,wchar16 *param_3)

{
  int *piVar1;
  
  if (((*(ushort *)(param_1 + 8) & 0x11) == 0) && (param_2 != 0)) {
    if (param_2 < 0x80000000) {
      doAppend(param_1,param_3,0,(int)param_2);
      return;
    }
    if ((*(ushort *)(param_1 + 8) & 4) != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(param_1 + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(param_1 + 0x18) + -4);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  return;
}



/* icu_76_godot::UnicodeStringAppendable::appendCodeUnit(char16_t) */

bool __thiscall
icu_76_godot::UnicodeStringAppendable::appendCodeUnit(UnicodeStringAppendable *this,wchar16 param_1)

{
  long lVar1;
  wchar16 local_c [6];
  
  local_c[0] = param_1;
  lVar1 = UnicodeString::doAppend(*(UnicodeString **)(this + 8),local_c,0,1);
  return (*(byte *)(lVar1 + 8) & 0x11) == 0;
}



/* icu_76_godot::UnicodeStringAppendable::appendCodePoint(int) */

bool __thiscall
icu_76_godot::UnicodeStringAppendable::appendCodePoint(UnicodeStringAppendable *this,int param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  wchar16 local_14;
  ushort local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_1 < 0x10000) {
    iVar2 = 1;
    local_14 = (wchar16)param_1;
  }
  else {
    bVar3 = false;
    if (0x10ffff < (uint)param_1) goto LAB_001031f1;
    iVar2 = 2;
    local_12 = (wchar16)param_1 & 0x3ffU | 0xdc00;
    local_14 = (short)(param_1 >> 10) + L'ퟀ';
  }
  lVar1 = UnicodeString::doAppend(*(UnicodeString **)(this + 8),&local_14,0,iVar2);
  bVar3 = (*(byte *)(lVar1 + 8) & 0x11) == 0;
LAB_001031f1:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeStringAppendable::appendString(char16_t const*, int) */

bool __thiscall
icu_76_godot::UnicodeStringAppendable::appendString
          (UnicodeStringAppendable *this,wchar16 *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = UnicodeString::doAppend(*(UnicodeString **)(this + 8),param_1,0,param_2);
  return (*(byte *)(lVar1 + 8) & 0x11) == 0;
}



/* icu_76_godot::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString const&) */

icu_76_godot * __thiscall
icu_76_godot::operator+(icu_76_godot *this,UnicodeString *param_1,UnicodeString *param_2)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  UnicodeString *pUVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UnicodeString *pUVar8;
  long in_FS_OFFSET;
  int local_7c;
  undefined **local_78;
  ushort local_70;
  undefined4 local_68;
  long local_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)(param_2 + 8) < 0) {
    iVar7 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar7 = (int)(*(short *)(param_2 + 8) >> 5);
  }
  if (*(short *)(param_1 + 8) < 0) {
    cVar2 = uprv_add32_overflow_76_godot(*(undefined4 *)(param_1 + 0xc),iVar7,&local_7c);
  }
  else {
    cVar2 = uprv_add32_overflow_76_godot((int)(*(short *)(param_1 + 8) >> 5),iVar7,&local_7c);
  }
  if (cVar2 != '\0') {
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined ***)this = &PTR__UnicodeString_001051f0;
    *(undefined2 *)(this + 8) = 1;
    *(undefined4 *)(this + 0x10) = 0;
    local_70 = 1;
    local_60 = 0;
    local_68 = 0;
    local_78 = (undefined **)&DAT_00105188;
    icu_76_godot::UObject::~UObject((UObject *)&local_78);
    goto LAB_00103382;
  }
  if (local_7c != 0x7fffffff) {
    local_7c = local_7c + 1;
  }
  UnicodeString::UnicodeString((UnicodeString *)&local_78,local_7c,0,0);
  uVar3 = *(ushort *)(param_1 + 8);
  if ((short)uVar3 < 0) {
    iVar7 = *(int *)(param_1 + 0xc);
    if (iVar7 == 0) goto LAB_00103325;
    iVar5 = iVar7;
    iVar6 = 0;
    if (-1 < iVar7) {
      iVar5 = 0;
      iVar6 = iVar7;
    }
LAB_001033c3:
    pUVar4 = param_1 + 10;
    if ((uVar3 & 2) == 0) {
      pUVar4 = *(UnicodeString **)(param_1 + 0x18);
    }
    pUVar4 = (UnicodeString *)
             UnicodeString::doAppend((UnicodeString *)&local_78,(wchar16 *)pUVar4,iVar5,iVar6);
    uVar3 = *(ushort *)(param_2 + 8);
    if (-1 < (short)uVar3) goto LAB_00103332;
LAB_001033e9:
    iVar7 = *(int *)(param_2 + 0xc);
    if (iVar7 != 0) {
      if (iVar7 < 0) {
        iVar5 = 0;
        iVar6 = iVar7;
      }
      else {
        iVar6 = 0;
        iVar5 = iVar7;
      }
      goto LAB_001033fc;
    }
  }
  else {
    if ((short)uVar3 >> 5 != 0) {
      iVar5 = 0;
      iVar6 = (int)((short)uVar3 >> 5);
      goto LAB_001033c3;
    }
LAB_00103325:
    uVar3 = *(ushort *)(param_2 + 8);
    pUVar4 = (UnicodeString *)&local_78;
    if ((short)uVar3 < 0) goto LAB_001033e9;
LAB_00103332:
    if ((short)uVar3 >> 5 != 0) {
      iVar5 = (int)((short)uVar3 >> 5);
      iVar6 = 0;
LAB_001033fc:
      pUVar8 = param_2 + 10;
      if ((uVar3 & 2) == 0) {
        pUVar8 = *(UnicodeString **)(param_2 + 0x18);
      }
      pUVar4 = (UnicodeString *)UnicodeString::doAppend(pUVar4,(wchar16 *)pUVar8,iVar6,iVar5);
    }
  }
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  UnicodeString::copyFrom((UnicodeString *)this,pUVar4,0);
  local_78 = &PTR__UnicodeString_001051f0;
  if ((local_70 & 4) != 0) {
    LOCK();
    piVar1 = (int *)(local_60 + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uprv_free_76_godot(local_60 + -4);
    }
  }
  local_78 = (undefined **)&DAT_00105188;
  icu_76_godot::UObject::~UObject((UObject *)&local_78);
LAB_00103382:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::unistr_internalConcat(icu_76_godot::UnicodeString const&,
   std::basic_string_view<char16_t, std::char_traits<char16_t> >) */

UnicodeString *
icu_76_godot::unistr_internalConcat
          (UnicodeString *param_1,long param_2,ulong param_3,wchar16 *param_4)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  UnicodeString *pUVar4;
  int iVar5;
  int iVar6;
  wchar16 *pwVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_8c;
  undefined **local_88;
  ushort local_80;
  undefined4 local_78;
  long local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0x80000000) {
    if (*(short *)(param_2 + 8) < 0) {
      iVar8 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar8 = (int)(*(short *)(param_2 + 8) >> 5);
    }
    cVar3 = uprv_add32_overflow_76_godot(iVar8,param_3 & 0xffffffff,&local_8c);
    if (cVar3 == '\0') {
      if (local_8c != 0x7fffffff) {
        local_8c = local_8c + 1;
      }
      UnicodeString::UnicodeString((UnicodeString *)&local_88,local_8c,0,0);
      uVar2 = *(ushort *)(param_2 + 8);
      pUVar4 = (UnicodeString *)&local_88;
      if ((short)uVar2 < 0) {
        iVar8 = *(int *)(param_2 + 0xc);
        if (iVar8 != 0) {
          iVar5 = 0;
          iVar6 = iVar8;
          if (-1 < iVar8) {
            iVar6 = 0;
            iVar5 = iVar8;
          }
          goto LAB_00103667;
        }
      }
      else if ((short)uVar2 >> 5 != 0) {
        iVar5 = (int)((short)uVar2 >> 5);
        iVar6 = 0;
LAB_00103667:
        pwVar7 = (wchar16 *)(param_2 + 10);
        if ((uVar2 & 2) == 0) {
          pwVar7 = *(wchar16 **)(param_2 + 0x18);
        }
        pUVar4 = (UnicodeString *)
                 UnicodeString::doAppend((UnicodeString *)&local_88,pwVar7,iVar6,iVar5);
      }
      if ((((byte)pUVar4[8] & 0x11) == 0) && (param_3 != 0)) {
        pUVar4 = (UnicodeString *)UnicodeString::doAppend(pUVar4,param_4,0,(int)param_3);
      }
      *(undefined ***)param_1 = &PTR__UnicodeString_001051f0;
      *(undefined2 *)(param_1 + 8) = 2;
      UnicodeString::copyFrom(param_1,pUVar4,0);
      local_88 = &PTR__UnicodeString_001051f0;
      if ((local_80 & 4) != 0) {
        LOCK();
        piVar1 = (int *)(local_70 + -4);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uprv_free_76_godot(local_70 + -4);
        }
      }
      local_88 = (undefined **)&DAT_00105188;
      icu_76_godot::UObject::~UObject((UObject *)&local_88);
      goto LAB_00103613;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_80 = 1;
  local_70 = 0;
  local_78 = 0;
  local_88 = (undefined **)&DAT_00105188;
  icu_76_godot::UObject::~UObject((UObject *)&local_88);
LAB_00103613:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::unescape() const */

void icu_76_godot::UnicodeString::unescape(void)

{
  wchar16 *pwVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long in_RSI;
  UnicodeString *in_RDI;
  wchar16 *pwVar10;
  long in_FS_OFFSET;
  int local_38;
  wchar16 local_34;
  ushort local_32;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)(in_RSI + 8) < 0) {
    iVar9 = *(int *)(in_RSI + 0xc);
  }
  else {
    iVar9 = (int)(*(short *)(in_RSI + 8) >> 5);
  }
  UnicodeString(in_RDI,iVar9,0,0);
  if (((byte)in_RDI[8] & 1) == 0) {
    uVar3 = *(ushort *)(in_RSI + 8);
    if ((uVar3 & 0x11) == 0) {
      pwVar10 = (wchar16 *)(in_RSI + 10);
      if ((uVar3 & 2) == 0) {
        pwVar10 = *(wchar16 **)(in_RSI + 0x18);
      }
    }
    else {
      pwVar10 = (wchar16 *)0x0;
    }
    if ((short)uVar3 < 0) {
      iVar9 = *(int *)(in_RSI + 0xc);
    }
    else {
      iVar9 = (int)((short)uVar3 >> 5);
    }
    local_38 = 0;
LAB_0010378e:
    iVar8 = local_38;
    lVar6 = (long)local_38;
    bVar2 = false;
    do {
      iVar4 = (int)lVar6;
      if (iVar9 == iVar4) {
        if (bVar2) {
          local_38 = iVar9;
        }
        doAppend(in_RDI,pwVar10,iVar8,iVar9 - iVar8);
        goto LAB_001037cb;
      }
      pwVar1 = pwVar10 + lVar6;
      lVar6 = lVar6 + 1;
      bVar2 = true;
    } while (*pwVar1 != L'\\');
    iVar7 = iVar4 - local_38;
    local_38 = iVar4 + 1;
    doAppend(in_RDI,pwVar10,iVar8,iVar7);
    if (*(short *)(in_RSI + 8) < 0) {
      iVar8 = *(int *)(in_RSI + 0xc);
    }
    else {
      iVar8 = (int)(*(short *)(in_RSI + 8) >> 5);
    }
    uVar5 = u_unescapeAt_76_godot(0x100000,&local_38,iVar8);
    if (-1 < (int)uVar5) {
      if (0xffff < uVar5) goto LAB_00103870;
      iVar8 = 1;
      local_34 = (wchar16)uVar5;
      goto LAB_00103845;
    }
    uVar3 = 2;
    if ((*(ushort *)(in_RDI + 8) & 1) == 0) {
      uVar3 = *(ushort *)(in_RDI + 8) & 0x1f;
    }
    *(ushort *)(in_RDI + 8) = uVar3;
  }
LAB_001037cb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00103870:
  if (uVar5 < 0x110000) {
    iVar8 = 2;
    local_32 = (wchar16)uVar5 & 0x3ffU | 0xdc00;
    local_34 = (short)((int)uVar5 >> 10) + L'ퟀ';
LAB_00103845:
    doAppend(in_RDI,&local_34,0,iVar8);
  }
  goto LAB_0010378e;
}



/* icu_76_godot::UnicodeString::doReplace(int, int, char16_t const*, int, int) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::doReplace
          (UnicodeString *this,int param_1,int param_2,wchar16 *param_3,int param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  UnicodeString *pUVar4;
  UnicodeString *pUVar5;
  wchar16 *pwVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long in_FS_OFFSET;
  long local_90;
  undefined **local_88;
  ushort local_80;
  wchar16 local_7e [7];
  wchar16 *local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(ushort *)(this + 8);
  uVar7 = uVar3 & 0x11;
  if ((uVar3 & 0x11) != 0) goto LAB_00103b23;
  if ((short)uVar3 < 0) {
    iVar11 = *(int *)(this + 0xc);
  }
  else {
    iVar11 = (int)((short)uVar3 >> 5);
  }
  iVar12 = param_1;
  if (((uVar3 & 8) == 0) || (param_5 != 0)) {
    if (iVar11 == param_1) goto LAB_00103c58;
    if (param_3 == (wchar16 *)0x0) {
      param_5 = 0;
    }
    else {
      param_3 = param_3 + param_4;
      if (param_5 < 0) {
        param_5 = u_strlen_76_godot(param_3);
        uVar3 = *(ushort *)(this + 8);
      }
    }
    goto LAB_00103970;
  }
  if (param_1 == 0) {
    lVar9 = 0;
    iVar12 = 0;
    if (-1 < param_2) {
      iVar12 = param_2;
      if (iVar11 <= param_2) {
        iVar12 = iVar11;
      }
      iVar11 = iVar11 - iVar12;
      lVar9 = (long)iVar12 * 2;
    }
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + lVar9;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) - iVar12;
    if (iVar11 < 0x400) {
      *(ushort *)(this + 8) = uVar3 & 0x1f | (ushort)(iVar11 << 5);
    }
    else {
      *(int *)(this + 0xc) = iVar11;
      *(ushort *)(this + 8) = uVar3 | 0xffe0;
    }
  }
  else {
    if (param_1 < 0) {
      if (iVar11 <= param_2) {
        iVar12 = 0;
LAB_00103e8b:
        uVar3 = uVar3 & 0x1f | uVar7;
        goto LAB_00103e73;
      }
      if (iVar11 == 0) goto LAB_00103c58;
      if (param_3 == (wchar16 *)0x0) {
        iVar12 = 0;
        param_5 = 0;
      }
      else {
        iVar12 = 0;
        param_5 = 0;
        param_3 = param_3 + param_4;
      }
    }
    else {
      if (iVar11 <= param_1) {
        iVar12 = iVar11;
      }
      if (iVar11 - iVar12 <= param_2) {
        uVar7 = (ushort)(iVar12 << 5);
        if (iVar12 < 0x400) goto LAB_00103e8b;
        *(int *)(this + 0xc) = iVar12;
        uVar3 = uVar3 | 0xffe0;
LAB_00103e73:
        *(ushort *)(this + 8) = uVar3;
        *(int *)(this + 0x10) = iVar12;
        goto LAB_00103b23;
      }
      if (iVar11 <= param_1) {
LAB_00103c58:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          pUVar5 = (UnicodeString *)doAppend(this,param_3,param_4,param_5);
          return pUVar5;
        }
        goto LAB_00103edb;
      }
      if (param_3 == (wchar16 *)0x0) {
        param_5 = 0;
      }
      else {
        param_5 = 0;
        param_3 = param_3 + param_4;
      }
    }
LAB_00103970:
    if ((short)uVar3 < 0) {
      iVar8 = *(int *)(this + 0xc);
    }
    else {
      iVar8 = (int)((short)uVar3 >> 5);
    }
    iVar10 = iVar12;
    if (iVar8 <= iVar12) {
      iVar10 = iVar8;
    }
    if (iVar12 < 0) {
      iVar10 = 0;
    }
    if (param_2 < 0) {
      param_2 = 0;
      iVar12 = iVar11;
    }
    else {
      if (iVar8 - iVar10 <= param_2) {
        param_2 = iVar8 - iVar10;
      }
      iVar12 = iVar11 - param_2;
    }
    if (0x7fffffff - iVar12 < param_5) {
      if ((uVar3 & 4) != 0) {
        LOCK();
        piVar1 = (int *)(*(long *)(this + 0x18) + -4);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uprv_free_76_godot(*(long *)(this + 0x18) + -4);
        }
      }
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined2 *)(this + 8) = 1;
      *(undefined4 *)(this + 0x10) = 0;
    }
    else {
      iVar12 = iVar12 + param_5;
      if ((uVar3 & 2) == 0) {
        pUVar5 = *(UnicodeString **)(this + 0x18);
        if ((uVar3 & 0x19) == 0) {
LAB_001039d9:
          if (((((uVar3 & 4) == 0) || (*(int *)(*(long *)(this + 0x18) + -4) == 1)) &&
              (pUVar5 < (UnicodeString *)((long)param_3 + (long)param_5 * 2))) &&
             (param_3 < pUVar5 + (long)iVar11 * 2)) {
            local_80 = 2;
            local_88 = &PTR__UnicodeString_001051f0;
            doAppend((UnicodeString *)&local_88,param_3,0,param_5);
            if ((local_80 & 1) == 0) {
              pwVar6 = local_7e;
              if ((local_80 & 2) == 0) {
                pwVar6 = local_70;
              }
              this = (UnicodeString *)doReplace(this,iVar10,param_2,pwVar6,0,param_5);
            }
            else {
              if (((byte)this[8] & 4) != 0) {
                LOCK();
                piVar1 = (int *)(*(long *)(this + 0x18) + -4);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  uprv_free_76_godot(*(long *)(this + 0x18) + -4);
                }
              }
              *(undefined8 *)(this + 0x18) = 0;
              *(undefined2 *)(this + 8) = 1;
              *(undefined4 *)(this + 0x10) = 0;
            }
            ~UnicodeString((UnicodeString *)&local_88);
            goto LAB_00103b23;
          }
          pUVar4 = pUVar5;
          if (((byte)this[8] & 2) != 0) goto LAB_00103a07;
        }
LAB_00103bbd:
        iVar8 = 0x7ffffff5;
        if ((iVar12 >> 2) + 0x80 <= 0x7ffffff5 - iVar12) goto LAB_00103a23;
      }
      else {
        pUVar5 = this + 10;
        pUVar4 = pUVar5;
        if ((uVar3 & 0x19) == 0) goto LAB_001039d9;
LAB_00103a07:
        pUVar5 = pUVar4;
        if (0x1b < iVar12) {
          pUVar5 = (UnicodeString *)&local_88;
          u_memcpy_76_godot(pUVar5,pUVar4,iVar11);
          goto LAB_00103bbd;
        }
LAB_00103a23:
        iVar8 = iVar12 + (iVar12 >> 2) + 0x80;
      }
      local_90 = 0;
      cVar2 = cloneArrayIfNeeded(this,iVar12,iVar8,0,&local_90,0);
      if (cVar2 != '\0') {
        pUVar4 = this + 10;
        if (((byte)this[8] & 2) == 0) {
          pUVar4 = *(UnicodeString **)(this + 0x18);
        }
        if (pUVar5 == pUVar4) {
          if (param_5 != param_2) {
            iVar11 = iVar11 - (param_2 + iVar10);
            if (0 < iVar11) {
              memmove(pUVar4 + (long)(param_5 + iVar10) * 2,pUVar4 + (long)(param_2 + iVar10) * 2,
                      (long)iVar11 * 2);
            }
          }
        }
        else {
          if (0 < iVar10) {
            pUVar4 = (UnicodeString *)memmove(pUVar4,pUVar5,(long)iVar10 * 2);
          }
          iVar11 = iVar11 - (param_2 + iVar10);
          if (0 < iVar11) {
            memmove(pUVar4 + (long)(param_5 + iVar10) * 2,pUVar5 + (long)(param_2 + iVar10) * 2,
                    (long)iVar11 * 2);
          }
        }
        if (0 < param_5) {
          memmove(pUVar4 + (long)iVar10 * 2,param_3,(long)param_5 * 2);
        }
        if (iVar12 < 0x400) {
          uVar3 = *(ushort *)(this + 8) & 0x1f | (short)iVar12 * 0x20;
        }
        else {
          *(int *)(this + 0xc) = iVar12;
          uVar3 = *(ushort *)(this + 8) | 0xffe0;
        }
        *(ushort *)(this + 8) = uVar3;
        if (local_90 != 0) {
          uprv_free_76_godot();
        }
      }
    }
  }
LAB_00103b23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_00103edb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::replace(int, int, int) */

void __thiscall
icu_76_godot::UnicodeString::replace(UnicodeString *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  wchar16 local_14;
  ushort local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_3 < 0x10000) {
    iVar1 = 1;
    local_14 = (wchar16)param_3;
  }
  else {
    iVar1 = 0;
    if ((uint)param_3 < 0x110000) {
      iVar1 = 2;
      local_12 = (wchar16)param_3 & 0x3ffU | 0xdc00;
      local_14 = (short)(param_3 >> 10) + L'ퟀ';
    }
  }
  doReplace(this,param_1,param_2,&local_14,0,iVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::doReplace(int, int, icu_76_godot::UnicodeString const&, int, int) */

void __thiscall
icu_76_godot::UnicodeString::doReplace
          (UnicodeString *this,int param_1,int param_2,UnicodeString *param_3,int param_4,
          int param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(ushort *)(param_3 + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  iVar4 = param_4;
  if (iVar2 <= param_4) {
    iVar4 = iVar2;
  }
  if (param_4 < 0) {
    iVar4 = 0;
  }
  iVar3 = iVar2 - iVar4;
  if (param_5 < iVar2 - iVar4) {
    iVar3 = param_5;
  }
  iVar2 = 0;
  if (-1 < param_5) {
    iVar2 = iVar3;
  }
  if ((uVar1 & 2) != 0) {
    doReplace(this,param_1,param_2,(wchar16 *)(param_3 + 10),iVar4,iVar2);
    return;
  }
  doReplace(this,param_1,param_2,*(wchar16 **)(param_3 + 0x18),iVar4,iVar2);
  return;
}



/* icu_76_godot::UnicodeString::doReplace(int, int, std::basic_string_view<char16_t,
   std::char_traits<char16_t> >) */

void icu_76_godot::UnicodeString::doReplace
               (UnicodeString *param_1,int param_2,int param_3,ulong param_4,wchar16 *param_5)

{
  int *piVar1;
  
  if ((*(ushort *)(param_1 + 8) & 0x11) != 0) {
    return;
  }
  if (param_4 < 0x80000000) {
    doReplace(param_1,param_2,param_3,param_5,0,(int)param_4);
    return;
  }
  if ((*(ushort *)(param_1 + 8) & 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(long *)(param_1 + 0x18) + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uprv_free_76_godot(*(long *)(param_1 + 0x18) + -4);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* icu_76_godot::UnicodeString::copy(int, int, int) */

void __thiscall
icu_76_godot::UnicodeString::copy(UnicodeString *this,int param_1,int param_2,int param_3)

{
  wchar16 *pwVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 <= param_1) {
    return;
  }
  pwVar1 = (wchar16 *)uprv_malloc_76_godot((long)(param_2 - param_1) * 2);
  if (pwVar1 != (wchar16 *)0x0) {
    iVar3 = 0;
    if (-1 < param_1) {
      if (*(short *)(this + 8) < 0) {
        iVar3 = *(int *)(this + 0xc);
      }
      else {
        iVar3 = (int)(*(short *)(this + 8) >> 5);
      }
      if (param_1 <= iVar3) {
        iVar3 = param_1;
      }
    }
    iVar2 = 0;
    if (-1 < param_2) {
      if (*(short *)(this + 8) < 0) {
        iVar2 = *(int *)(this + 0xc);
      }
      else {
        iVar2 = (int)(*(short *)(this + 8) >> 5);
      }
      if (param_2 <= iVar2) {
        iVar2 = param_2;
      }
    }
    doExtract(this,iVar3,iVar2 - iVar3,pwVar1,0);
    doReplace(this,param_3,0,pwVar1,0,param_2 - param_1);
    uprv_free_76_godot(pwVar1);
    return;
  }
  return;
}



/* icu_76_godot::UnicodeString::handleReplaceBetween(int, int, icu_76_godot::UnicodeString const&)
    */

void __thiscall
icu_76_godot::UnicodeString::handleReplaceBetween
          (UnicodeString *this,int param_1,int param_2,UnicodeString *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_3 + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_3 + 0xc);
    iVar3 = 0;
    if (iVar2 < 0) goto LAB_0010417e;
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  iVar3 = iVar2;
  iVar2 = 0;
LAB_0010417e:
  if ((uVar1 & 2) == 0) {
    doReplace(this,param_1,param_2 - param_1,*(wchar16 **)(param_3 + 0x18),iVar2,iVar3);
    return;
  }
  doReplace(this,param_1,param_2 - param_1,(wchar16 *)(param_3 + 10),iVar2,iVar3);
  return;
}



/* icu_76_godot::UnicodeString::UnicodeString(icu_76_godot::UnicodeString const&, int, int) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString
          (UnicodeString *this,UnicodeString *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  UnicodeString *pUVar4;
  int iVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
  }
  iVar5 = iVar2;
  if (param_2 <= iVar2) {
    iVar5 = param_2;
  }
  if (param_2 < 0) {
    iVar5 = 0;
  }
  iVar3 = iVar2 - iVar5;
  if (param_3 < iVar2 - iVar5) {
    iVar3 = param_3;
  }
  pUVar4 = param_1 + 10;
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = iVar3;
  }
  if ((uVar1 & 2) == 0) {
    pUVar4 = *(UnicodeString **)(param_1 + 0x18);
  }
  doReplace(this,0,0,(wchar16 *)pUVar4,iVar5,iVar2);
  return;
}



/* icu_76_godot::UnicodeString::UnicodeString(icu_76_godot::UnicodeString const&, int) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,UnicodeString *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  UnicodeString *pUVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_1 + 8);
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  if (param_2 < 0) {
    if (-1 < (short)uVar1) {
      iVar4 = 0;
      iVar5 = (int)((short)uVar1 >> 5);
      goto LAB_00104276;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    param_2 = 0;
    iVar6 = iVar2;
LAB_00104266:
    iVar4 = param_2;
    if (iVar2 <= param_2) {
      iVar4 = iVar2;
    }
  }
  else {
    if (-1 < (short)uVar1) {
      iVar2 = (int)((short)uVar1 >> 5);
      if (iVar2 < param_2) {
        param_2 = iVar2;
      }
      iVar6 = iVar2 - param_2;
      goto LAB_00104266;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 < param_2) {
      param_2 = iVar2;
    }
    iVar4 = 0;
    iVar6 = iVar2 - param_2;
    if (-1 < param_2) goto LAB_00104266;
  }
  iVar5 = 0;
  if ((-1 < iVar6) && (iVar5 = iVar6, iVar2 - iVar4 <= iVar6)) {
    iVar5 = iVar2 - iVar4;
  }
LAB_00104276:
  pUVar3 = param_1 + 10;
  if ((uVar1 & 2) == 0) {
    pUVar3 = *(UnicodeString **)(param_1 + 0x18);
  }
  doReplace(this,0,0,(wchar16 *)pUVar3,iVar4,iVar5);
  return;
}



/* icu_76_godot::UnicodeString::extractBetween(int, int, icu_76_godot::UnicodeString&) const */

void __thiscall
icu_76_godot::UnicodeString::extractBetween
          (UnicodeString *this,int param_1,int param_2,UnicodeString *param_3)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  UnicodeString *pUVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(ushort *)(this + 8);
  sVar3 = (short)uVar1 >> 5;
  if (param_1 < 0) {
    param_1 = 0;
    iVar7 = 0;
    if (param_2 < 0) goto LAB_00104346;
    iVar4 = 0;
    if (-1 < (short)uVar1) goto LAB_00104336;
    iVar4 = *(int *)(this + 0xc);
  }
  else if ((short)uVar1 < 0) {
    if (*(int *)(this + 0xc) < param_1) {
      param_1 = *(int *)(this + 0xc);
    }
    iVar7 = 0;
    if (param_2 < 0) goto LAB_00104346;
    iVar4 = *(int *)(this + 0xc);
  }
  else {
    if (sVar3 <= param_1) {
      param_1 = (int)sVar3;
    }
    iVar7 = 0;
    iVar4 = param_1;
    if (param_2 < 0) goto LAB_00104346;
LAB_00104336:
    param_1 = iVar4;
    iVar4 = (int)sVar3;
  }
  iVar7 = param_2;
  if (iVar4 <= param_2) {
    iVar7 = iVar4;
  }
LAB_00104346:
  iVar7 = iVar7 - param_1;
  if (*(short *)(param_3 + 8) < 0) {
    iVar4 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar4 = (int)(*(short *)(param_3 + 8) >> 5);
  }
  if ((short)uVar1 < 0) {
    iVar5 = *(int *)(this + 0xc);
  }
  else {
    iVar5 = (int)sVar3;
  }
  iVar8 = param_1;
  if (iVar5 <= param_1) {
    iVar8 = iVar5;
  }
  if (param_1 < 0) {
    iVar8 = 0;
  }
  iVar2 = iVar5 - iVar8;
  if (iVar7 < iVar5 - iVar8) {
    iVar2 = iVar7;
  }
  iVar5 = 0;
  if (-1 < iVar7) {
    iVar5 = iVar2;
  }
  pUVar6 = this + 10;
  if ((uVar1 & 2) == 0) {
    pUVar6 = *(UnicodeString **)(this + 0x18);
  }
  doReplace(param_3,0,iVar4,(wchar16 *)pUVar6,iVar8,iVar5);
  return;
}



/* icu_76_godot::UnicodeString::findAndReplace(int, int, icu_76_godot::UnicodeString const&, int,
   int, icu_76_godot::UnicodeString const&, int, int) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::findAndReplace
          (UnicodeString *this,int param_1,int param_2,UnicodeString *param_3,int param_4,
          int param_5,UnicodeString *param_6,int param_7,int param_8)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UnicodeString *pUVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  uVar1 = *(ushort *)(this + 8);
  if ((((uVar1 & 1) == 0) && (uVar4 = *(ushort *)(param_3 + 8), (uVar4 & 1) == 0)) &&
     (uVar2 = *(ushort *)(param_6 + 8), (uVar2 & 1) == 0)) {
    if ((short)uVar1 < 0) {
      iVar10 = *(int *)(this + 0xc);
    }
    else {
      iVar10 = (int)((short)uVar1 >> 5);
    }
    iVar13 = param_1;
    if (iVar10 <= param_1) {
      iVar13 = iVar10;
    }
    if (param_1 < 0) {
      iVar13 = 0;
    }
    iVar14 = iVar10 - iVar13;
    if (param_2 < iVar10 - iVar13) {
      iVar14 = param_2;
    }
    if (param_2 < 0) {
      iVar14 = 0;
    }
    if ((short)uVar4 < 0) {
      iVar10 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar10 = (int)((short)uVar4 >> 5);
    }
    iVar11 = param_4;
    if (iVar10 <= param_4) {
      iVar11 = iVar10;
    }
    if (param_4 < 0) {
      iVar11 = 0;
    }
    iVar15 = iVar10 - iVar11;
    if (param_5 < iVar10 - iVar11) {
      iVar15 = param_5;
    }
    if (param_5 < 0) {
      iVar15 = 0;
    }
    if ((short)uVar2 < 0) {
      iVar10 = *(int *)(param_6 + 0xc);
    }
    else {
      iVar10 = (int)((short)uVar2 >> 5);
    }
    iVar7 = iVar10;
    if (param_7 < iVar10) {
      iVar7 = param_7;
    }
    if (param_7 < 0) {
      iVar7 = 0;
    }
    iVar3 = iVar10 - iVar7;
    if (param_8 < iVar10 - iVar7) {
      iVar3 = param_8;
    }
    if (param_8 < 0) {
      iVar3 = 0;
    }
    if (((iVar15 != 0) && (iVar15 <= iVar14)) && (0 < iVar14)) {
      iVar10 = 0;
      if (-1 < iVar11) {
        iVar10 = iVar11;
      }
      while ((uVar4 & 1) == 0) {
        if ((short)uVar4 < 0) {
          iVar8 = *(int *)(param_3 + 0xc);
        }
        else {
          iVar8 = (int)((short)uVar4 >> 5);
        }
        if ((-1 < iVar11) && (iVar8 < iVar10)) {
          return this;
        }
        if (iVar15 < 0) {
          return this;
        }
        iVar8 = iVar8 - iVar10;
        iVar6 = iVar15;
        if ((iVar8 < iVar15) && (iVar6 = iVar8, iVar8 < 1)) {
          return this;
        }
        pUVar9 = param_3 + 10;
        if ((uVar4 & 2) == 0) {
          pUVar9 = *(UnicodeString **)(param_3 + 0x18);
        }
        iVar8 = indexOf(this,(wchar16 *)pUVar9,iVar10,iVar6,iVar13,iVar14);
        if (iVar8 < 0) {
          return this;
        }
        uVar1 = *(ushort *)(param_6 + 8);
        if ((short)uVar1 < 0) {
          iVar6 = *(int *)(param_6 + 0xc);
        }
        else {
          iVar6 = (int)((short)uVar1 >> 5);
        }
        iVar12 = iVar7;
        if (iVar6 <= iVar7) {
          iVar12 = iVar6;
        }
        if (iVar7 < 0) {
          iVar12 = 0;
        }
        iVar5 = iVar6 - iVar12;
        if (iVar3 < iVar6 - iVar12) {
          iVar5 = iVar3;
        }
        iVar6 = 0;
        if (-1 < iVar3) {
          iVar6 = iVar5;
        }
        pUVar9 = param_6 + 10;
        if ((uVar1 & 2) == 0) {
          pUVar9 = *(UnicodeString **)(param_6 + 0x18);
        }
        doReplace(this,iVar8,iVar15,(wchar16 *)pUVar9,iVar12,iVar6);
        iVar6 = (iVar8 + iVar15) - iVar13;
        iVar13 = iVar8 + iVar3;
        iVar14 = iVar14 - iVar6;
        if (iVar14 < iVar15) {
          return this;
        }
        if (iVar14 < 1) {
          return this;
        }
        uVar4 = *(ushort *)(param_3 + 8);
      }
    }
  }
  return this;
}



/* icu_76_godot::UnicodeString::doReverse(int, int) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::doReverse(UnicodeString *this,int param_1,int param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  UnicodeString *pUVar6;
  long lVar7;
  UnicodeString *pUVar8;
  UnicodeString *pUVar9;
  UnicodeString *pUVar10;
  int iVar11;
  UnicodeString *pUVar12;
  
  if (param_2 < 2) {
    return this;
  }
  cVar5 = cloneArrayIfNeeded(this,0xffffffff,0xffffffff,1,0);
  if (cVar5 != '\0') {
    uVar2 = *(ushort *)(this + 8);
    if ((short)uVar2 < 0) {
      iVar11 = *(int *)(this + 0xc);
    }
    else {
      iVar11 = (int)((short)uVar2 >> 5);
    }
    if (param_1 < 0) {
      param_1 = 0;
    }
    else {
      if (iVar11 < param_1) {
        return this;
      }
      iVar11 = iVar11 - param_1;
    }
    if ((param_2 <= iVar11) || (param_2 = iVar11, 1 < iVar11)) {
      pUVar10 = this + 10;
      if ((uVar2 & 2) == 0) {
        pUVar10 = *(UnicodeString **)(this + 0x18);
      }
      bVar4 = false;
      pUVar10 = pUVar10 + (long)param_1 * 2;
      lVar1 = (long)param_2 * 2 + -2;
      pUVar12 = pUVar10;
      pUVar8 = pUVar10 + lVar1;
      do {
        uVar2 = *(ushort *)pUVar12;
        uVar3 = *(ushort *)pUVar8;
        pUVar6 = pUVar12 + 2;
        *(ushort *)pUVar12 = uVar3;
        pUVar9 = pUVar8 + -2;
        *(ushort *)pUVar8 = uVar2;
        bVar4 = (bool)(bVar4 | ((uVar3 & 0xfc00) == 0xd800 || (uVar2 & 0xfc00) == 0xd800));
        pUVar12 = pUVar6;
        pUVar8 = pUVar9;
      } while (pUVar6 < pUVar9);
      lVar7 = ((long)param_2 * 2 - 3U >> 2) * 2 + 2;
      if (pUVar10 + lVar1 + -2 < pUVar10 + -1) {
        lVar7 = 2;
      }
      if ((*(ushort *)(pUVar10 + lVar7) & 0xfc00) == 0xd800 || bVar4) {
        pUVar10 = this + 10;
        if (((byte)this[8] & 2) == 0) {
          pUVar10 = *(UnicodeString **)(this + 0x18);
        }
        pUVar10 = pUVar10 + (long)param_1 * 2;
        pUVar12 = pUVar10 + lVar1;
        for (; pUVar10 < pUVar12; pUVar10 = pUVar10 + 4) {
          while (((*(ushort *)pUVar10 & 0xfc00) != 0xdc00 ||
                 ((*(ushort *)(pUVar10 + 2) & 0xfc00) != 0xd800))) {
            pUVar10 = pUVar10 + 2;
            if (pUVar12 <= pUVar10) {
              return this;
            }
          }
          *(uint *)pUVar10 = CONCAT22(*(ushort *)pUVar10,*(ushort *)(pUVar10 + 2));
        }
      }
    }
    return this;
  }
  return this;
}



/* icu_76_godot::UnicodeString::padLeading(int, char16_t) */

undefined8 __thiscall
icu_76_godot::UnicodeString::padLeading(UnicodeString *this,int param_1,wchar16 param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  UnicodeString *__src;
  
  if (*(short *)(this + 8) < 0) {
    iVar4 = *(int *)(this + 0xc);
  }
  else {
    iVar4 = (int)(*(short *)(this + 8) >> 5);
  }
  if ((param_1 <= iVar4) ||
     (cVar2 = cloneArrayIfNeeded(this,param_1,0xffffffff,1,0,0), cVar2 == '\0')) {
    return 0;
  }
  __src = this + 10;
  if (((byte)this[8] & 2) == 0) {
    __src = *(UnicodeString **)(this + 0x18);
  }
  if (0 < iVar4) {
    memmove(__src + (long)(param_1 - iVar4) * 2,__src,(long)iVar4 * 2);
  }
  uVar1 = (param_1 - iVar4) - 1;
  lVar3 = (long)(int)uVar1;
  if ((uVar1 & 1) == 0) {
    *(wchar16 *)(__src + lVar3 * 2) = param_2;
    lVar3 = lVar3 + -1;
    if ((int)lVar3 == -1) goto LAB_00104914;
  }
  do {
    *(wchar16 *)(__src + lVar3 * 2) = param_2;
    *(wchar16 *)(__src + lVar3 * 2 + -2) = param_2;
    lVar3 = lVar3 + -2;
  } while ((int)lVar3 != -1);
LAB_00104914:
  if (param_1 < 0x400) {
    *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0x1f | (ushort)(param_1 << 5);
  }
  else {
    *(int *)(this + 0xc) = param_1;
    *(ushort *)(this + 8) = *(ushort *)(this + 8) | 0xffe0;
  }
  return 1;
}



/* icu_76_godot::UnicodeString::padTrailing(int, char16_t) */

undefined8 __thiscall
icu_76_godot::UnicodeString::padTrailing(UnicodeString *this,int param_1,wchar16 param_2)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  UnicodeString *pUVar6;
  int iVar7;
  
  if (*(short *)(this + 8) < 0) {
    iVar7 = *(int *)(this + 0xc);
  }
  else {
    iVar7 = (int)(*(short *)(this + 8) >> 5);
  }
  if (param_1 <= iVar7) {
    return 0;
  }
  cVar3 = cloneArrayIfNeeded(this,param_1,0xffffffff,1,0,0);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar2 = *(ushort *)(this + 8);
  pUVar6 = this + 10;
  if ((uVar2 & 2) == 0) {
    pUVar6 = *(UnicodeString **)(this + 0x18);
  }
  iVar1 = param_1 + -1;
  if (iVar1 < iVar7) goto LAB_00104a47;
  lVar4 = (long)iVar1;
  *(wchar16 *)(pUVar6 + lVar4 * 2) = param_2;
  lVar5 = lVar4 + -1;
  if (iVar7 <= (int)lVar5) {
    if ((iVar1 - iVar7 & 1U) != 0) {
      *(wchar16 *)(pUVar6 + lVar5 * 2) = param_2;
      lVar5 = lVar4 + -2;
      if ((int)lVar5 < iVar7) goto LAB_00104a43;
    }
    do {
      *(wchar16 *)(pUVar6 + lVar5 * 2) = param_2;
      *(wchar16 *)(pUVar6 + lVar5 * 2 + -2) = param_2;
      lVar5 = lVar5 + -2;
    } while (iVar7 <= (int)lVar5);
  }
LAB_00104a43:
  uVar2 = *(ushort *)(this + 8);
LAB_00104a47:
  if (param_1 < 0x400) {
    *(ushort *)(this + 8) = uVar2 & 0x1f | (ushort)(param_1 << 5);
  }
  else {
    *(int *)(this + 0xc) = param_1;
    *(ushort *)(this + 8) = uVar2 | 0xffe0;
  }
  return 1;
}



/* icu_76_godot::UnicodeString::getBuffer(int) */

UnicodeString * __thiscall icu_76_godot::UnicodeString::getBuffer(UnicodeString *this,int param_1)

{
  ushort uVar1;
  char cVar2;
  UnicodeString *pUVar3;
  
  if (param_1 < -1) {
    return (UnicodeString *)0x0;
  }
  cVar2 = cloneArrayIfNeeded(this,param_1,0xffffffff,1,0,0);
  if (cVar2 != '\0') {
    uVar1 = *(ushort *)(this + 8);
    *(ushort *)(this + 8) = uVar1 & 0x1f | 0x10;
    pUVar3 = this + 10;
    if ((uVar1 & 2) == 0) {
      pUVar3 = *(UnicodeString **)(this + 0x18);
    }
    return pUVar3;
  }
  return (UnicodeString *)0x0;
}



/* icu_76_godot::UnicodeString::fromUTF32(int const*, int) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::fromUTF32(UnicodeString *this,int *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined2 *)(this + 8) = 2;
  iVar4 = 0x1b;
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  if (0x1b < param_2) {
    iVar4 = param_2 + 4 + (param_2 >> 4);
  }
  while( true ) {
    uVar2 = getBuffer(this,iVar4);
    local_34 = 0;
    uVar3 = 0x1b;
    if (((byte)this[8] & 2) == 0) {
      uVar3 = *(undefined4 *)(this + 0x10);
    }
    u_strFromUTF32WithSub_76_godot(uVar2,uVar3,&local_38,param_1,param_2,0xfffd);
    iVar4 = local_38;
    releaseBuffer(this,local_38);
    if (local_34 != 0xf) break;
    iVar4 = iVar4 + 1;
  }
  if (0 < local_34) {
    if (((byte)this[8] & 4) != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(this + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(this + 0x18) + -4);
      }
    }
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined2 *)(this + 8) = 1;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::UnicodeString::setToUTF8(icu_76_godot::StringPiece) */

UnicodeString *
icu_76_godot::UnicodeString::setToUTF8(UnicodeString *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)param_1[8] & 1) != 0) {
    *(undefined2 *)(param_1 + 8) = 2;
  }
  iVar3 = param_3 + 1;
  if (param_3 < 0x1c) {
    iVar3 = 0x1b;
  }
  uVar2 = getBuffer(param_1,iVar3);
  local_24 = 0;
  uVar4 = 0x1b;
  if (((byte)param_1[8] & 2) == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  u_strFromUTF8WithSub_76_godot(uVar2,uVar4,&local_28,param_2,param_3,0xfffd);
  releaseBuffer(param_1,local_28);
  if (0 < local_24) {
    if (((byte)param_1[8] & 4) != 0) {
      LOCK();
      piVar1 = (int *)(*(long *)(param_1 + 0x18) + -4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uprv_free_76_godot(*(long *)(param_1 + 0x18) + -4,local_24,0,&local_24);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::fromUTF8(icu_76_godot::StringPiece) */

undefined8 * icu_76_godot::UnicodeString::fromUTF8(undefined8 *param_1)

{
  *param_1 = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(param_1 + 1) = 2;
  setToUTF8();
  return param_1;
}



/* icu_76_godot::UnicodeString::UnicodeString(char const*, int) */

void __thiscall
icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,char *param_1,int param_2)

{
  size_t sVar1;
  
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  if ((param_2 != 0 && -2 < param_2) && (param_1 != (char *)0x0)) {
    if (param_2 == -1) {
      sVar1 = strlen(param_1);
      param_2 = (int)sVar1;
    }
    setToUTF8(this,param_1,param_2);
    return;
  }
  return;
}



/* icu_76_godot::UnicodeString::UnicodeString(char const*) */

void __thiscall icu_76_godot::UnicodeString::UnicodeString(UnicodeString *this,char *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__UnicodeString_001051f0;
  *(undefined2 *)(this + 8) = 2;
  if (param_1 != (char *)0x0) {
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_28,param_1);
    setToUTF8(this,local_28,local_20);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeStringAppendable::reserveAppendCapacity(int) */

void __thiscall
icu_76_godot::UnicodeStringAppendable::reserveAppendCapacity
          (UnicodeStringAppendable *this,int param_1)

{
  UnicodeString *pUVar1;
  int iVar2;
  
  pUVar1 = *(UnicodeString **)(this + 8);
  if (*(short *)(pUVar1 + 8) < 0) {
    iVar2 = *(int *)(pUVar1 + 0xc);
  }
  else {
    iVar2 = (int)(*(short *)(pUVar1 + 8) >> 5);
  }
  UnicodeString::cloneArrayIfNeeded(pUVar1,param_1 + iVar2,0xffffffff,1,0,0);
  return;
}



/* icu_76_godot::UnicodeStringAppendable::getAppendBuffer(int, int, char16_t*, int, int*) */

wchar16 * __thiscall
icu_76_godot::UnicodeStringAppendable::getAppendBuffer
          (UnicodeStringAppendable *this,int param_1,int param_2,wchar16 *param_3,int param_4,
          int *param_5)

{
  UnicodeString *pUVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if ((param_1 < 1) || (param_4 < param_1)) {
    *param_5 = 0;
    return (wchar16 *)0x0;
  }
  pUVar1 = *(UnicodeString **)(this + 8);
  if (*(short *)(pUVar1 + 8) < 0) {
    lVar6 = (long)*(int *)(pUVar1 + 0xc);
  }
  else {
    lVar6 = (long)(*(short *)(pUVar1 + 8) >> 5);
  }
  iVar5 = (int)lVar6;
  iVar4 = param_2;
  if (param_2 <= param_1) {
    iVar4 = param_1;
  }
  if ((iVar4 <= 0x7ffffff5 - iVar5) &&
     (cVar2 = UnicodeString::cloneArrayIfNeeded(pUVar1,param_1 + iVar5,param_2 + iVar5,1,0,0),
     cVar2 != '\0')) {
    lVar3 = *(long *)(this + 8);
    iVar4 = 0x1b;
    if ((*(byte *)(lVar3 + 8) & 2) == 0) {
      iVar4 = *(int *)(lVar3 + 0x10);
    }
    *param_5 = iVar4 - iVar5;
    if ((*(byte *)(lVar3 + 8) & 2) == 0) {
      lVar3 = *(long *)(lVar3 + 0x18);
    }
    else {
      lVar3 = lVar3 + 10;
    }
    return (wchar16 *)(lVar3 + lVar6 * 2);
  }
  *param_5 = param_4;
  return param_3;
}



int uhash_hashUnicodeString_76_godot(long param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = (int)((short)uVar1 >> 5);
    }
    if ((uVar1 & 2) == 0) {
      param_1 = *(long *)(param_1 + 0x18);
    }
    else {
      param_1 = param_1 + 10;
    }
    iVar2 = ustr_hashUCharsN_76_godot(param_1,iVar2);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    return iVar2;
  }
  return 0;
}



ulong uhash_compareUnicodeString_76_godot(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 extraout_var;
  void *__s2;
  void *__s1;
  int iVar3;
  int iVar4;
  
  if (param_1 == param_2) {
    return 1;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 8);
  uVar2 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
    return (ulong)(uVar2 & 1);
  }
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = (int)((short)uVar1 >> 5);
  }
  if ((short)uVar2 < 0) {
    iVar4 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar4 = (int)((short)uVar2 >> 5);
  }
  if ((iVar4 == iVar3) && ((uVar2 & 1) == 0)) {
    if ((uVar2 & 2) == 0) {
      __s2 = *(void **)(param_2 + 0x18);
    }
    else {
      __s2 = (void *)(param_2 + 10);
    }
    if ((uVar1 & 2) == 0) {
      __s1 = *(void **)(param_1 + 0x18);
    }
    else {
      __s1 = (void *)(param_1 + 10);
    }
    iVar3 = memcmp(__s1,__s2,(long)(iVar3 * 2));
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),iVar3 == 0);
  }
  return (ulong)(uVar1 & 1);
}


