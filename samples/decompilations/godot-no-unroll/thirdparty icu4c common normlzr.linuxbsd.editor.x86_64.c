
/* icu_76_godot::Normalizer::getDynamicClassID() const */

undefined1 * icu_76_godot::Normalizer::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::Normalizer::~Normalizer() */

void __thiscall icu_76_godot::Normalizer::~Normalizer(Normalizer *this)

{
  *(undefined ***)this = &PTR__Normalizer_001011e8;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x30));
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::Normalizer::~Normalizer() */

void __thiscall icu_76_godot::Normalizer::~Normalizer(Normalizer *this)

{
  void *in_RSI;
  
  ~Normalizer(this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::Normalizer::getStaticClassID() */

undefined1 * icu_76_godot::Normalizer::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::Normalizer::init() */

void __thiscall icu_76_godot::Normalizer::init(Normalizer *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  UErrorCode *pUVar4;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  pUVar4 = (UErrorCode *)&local_24;
  uVar1 = icu_76_godot::Normalizer2Factory::getInstance(*(undefined4 *)(this + 0x18));
  *(undefined8 *)(this + 0x10) = uVar1;
  if (((byte)this[0x1c] & 0x20) != 0) {
    if (*(long **)(this + 8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 8) + 8))();
    }
    puVar2 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x18,(ulong)pUVar4);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = uniset_getUnicode32Instance_76_godot((UErrorCode *)&local_24);
      uVar1 = *(undefined8 *)(this + 0x10);
      *puVar2 = __stack_chk_fail;
      puVar2[1] = uVar1;
      puVar2[2] = uVar3;
    }
    *(undefined8 **)(this + 8) = puVar2;
    *(undefined8 **)(this + 0x10) = puVar2;
  }
  if (0 < local_24) {
    local_24 = 0;
    uVar1 = icu_76_godot::Normalizer2Factory::getNoopInstance((UErrorCode *)&local_24);
    *(undefined8 *)(this + 0x10) = uVar1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer::Normalizer(icu_76_godot::UnicodeString const&, UNormalizationMode) */

void __thiscall
icu_76_godot::Normalizer::Normalizer(Normalizer *this,UnicodeString *param_1,undefined4 param_3)

{
  StringCharacterIterator *this_00;
  
  *(undefined ***)this = &PTR__Normalizer_001011e8;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x1c) = 0;
  this_00 = (StringCharacterIterator *)
            icu_76_godot::UMemory::operator_new((UMemory *)0x60,(ulong)param_1);
  if (this_00 != (StringCharacterIterator *)0x0) {
    icu_76_godot::StringCharacterIterator::StringCharacterIterator(this_00,param_1);
  }
  *(StringCharacterIterator **)(this + 0x20) = this_00;
  *(code **)(this + 0x30) = icu_76_godot::UnicodeString::UnicodeString;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x38) = 2;
  *(undefined4 *)(this + 0x70) = 0;
  init(this);
  return;
}



/* icu_76_godot::Normalizer::Normalizer(icu_76_godot::ConstChar16Ptr, int, UNormalizationMode) */

void __thiscall
icu_76_godot::Normalizer::Normalizer
          (Normalizer *this,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  UCharCharacterIterator *pUVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = param_4;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR__Normalizer_001011e8;
  pUVar1 = (UCharCharacterIterator *)
           icu_76_godot::UMemory::operator_new((UMemory *)0x20,(ulong)param_2);
  if (pUVar1 == (UCharCharacterIterator *)0x0) {
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    local_38 = *param_2;
    icu_76_godot::UCharCharacterIterator::UCharCharacterIterator(pUVar1,&local_38,param_3);
    *(UCharCharacterIterator **)(this + 0x20) = pUVar1;
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(code **)(this + 0x30) = icu_76_godot::UnicodeString::UnicodeString;
  *(undefined2 *)(this + 0x38) = 2;
  *(undefined4 *)(this + 0x70) = 0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    init(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer::Normalizer(icu_76_godot::CharacterIterator const&, UNormalizationMode)
    */

void __thiscall
icu_76_godot::Normalizer::Normalizer(Normalizer *this,long *param_1,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__Normalizer_001011e8;
  lVar1 = *param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar2 = (**(code **)(lVar1 + 0x40))(param_1);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(code **)(this + 0x30) = icu_76_godot::UnicodeString::UnicodeString;
  *(undefined2 *)(this + 0x38) = 2;
  *(undefined4 *)(this + 0x70) = 0;
  init(this);
  return;
}



/* icu_76_godot::Normalizer::Normalizer(icu_76_godot::Normalizer const&) */

void __thiscall icu_76_godot::Normalizer::Normalizer(Normalizer *this,Normalizer *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__Normalizer_001011e8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x40))();
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  icu_76_godot::UnicodeString::UnicodeString
            ((UnicodeString *)(this + 0x30),(UnicodeString *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  init(this);
  return;
}



/* icu_76_godot::Normalizer::clone() const */

Normalizer * icu_76_godot::Normalizer::clone(void)

{
  Normalizer *this;
  ulong in_RSI;
  Normalizer *in_RDI;
  
  this = (Normalizer *)icu_76_godot::UMemory::operator_new((UMemory *)0x78,in_RSI);
  if (this != (Normalizer *)0x0) {
    Normalizer(this,in_RDI);
  }
  return this;
}



/* icu_76_godot::Normalizer::hashCode() const */

int __thiscall icu_76_godot::Normalizer::hashCode(Normalizer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(**(long **)(this + 0x20) + 0x20))();
  iVar1 = *(int *)(this + 0x1c);
  iVar2 = *(int *)(this + 0x18);
  iVar4 = icu_76_godot::UnicodeString::doHashCode();
  return iVar4 + iVar1 + iVar3 + iVar2 + *(int *)(this + 0x70) + *(int *)(this + 0x28) +
         *(int *)(this + 0x2c);
}



/* icu_76_godot::Normalizer::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::Normalizer const&) const */

undefined4 __thiscall icu_76_godot::Normalizer::operator==(Normalizer *this,Normalizer *param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  if (this == param_1) {
    return 1;
  }
  if (*(long *)(this + 0x18) != *(long *)(param_1 + 0x18)) {
    return 0;
  }
  cVar3 = (**(code **)(**(long **)(this + 0x20) + 0x18))
                    (*(long **)(this + 0x20),*(undefined8 *)(param_1 + 0x20));
  if (cVar3 == '\0') {
    return 0;
  }
  uVar1 = *(ushort *)(this + 0x38);
  uVar2 = *(ushort *)(param_1 + 0x38);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(this + 0x3c);
    }
    else {
      iVar5 = (int)((short)uVar1 >> 5);
    }
    if ((short)uVar2 < 0) {
      iVar4 = *(int *)(param_1 + 0x3c);
    }
    else {
      iVar4 = (int)((short)uVar2 >> 5);
    }
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if (iVar4 != iVar5) {
      return 0;
    }
    iVar5 = (int)param_1 + 0x3a;
    if ((uVar2 & 2) == 0) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x48);
    }
    cVar3 = icu_76_godot::UnicodeString::doEquals((wchar16 *)(this + 0x30),iVar5);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  else if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x70) != *(int *)(param_1 + 0x70)) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x2c) >> 8),
                  *(int *)(this + 0x2c) == *(int *)(param_1 + 0x2c));
}



/* icu_76_godot::Normalizer::normalize(icu_76_godot::UnicodeString const&, UNormalizationMode, int,
   icu_76_godot::UnicodeString&, UErrorCode&) */

void icu_76_godot::Normalizer::normalize
               (UnicodeString *param_1,undefined4 param_2,ulong param_3,UnicodeString *param_4,
               int *param_5)

{
  long *plVar1;
  UErrorCode *pUVar2;
  long in_FS_OFFSET;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)param_1[8] & 1) == 0) && (*param_5 < 1)) {
    local_88 = icu_76_godot::UnicodeString::UnicodeString;
    local_80 = 2;
    pUVar2 = (UErrorCode *)param_4;
    if (param_1 == param_4) {
      pUVar2 = (UErrorCode *)&local_88;
    }
    plVar1 = (long *)icu_76_godot::Normalizer2Factory::getInstance(param_2,param_5);
    if (*param_5 < 1) {
      if ((param_3 & 0x20) == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_1,pUVar2,param_5);
      }
      else {
        local_98 = uniset_getUnicode32Instance_76_godot(param_5);
        local_a8 = __stack_chk_fail;
        local_a0 = plVar1;
        icu_76_godot::FilteredNormalizer2::normalize((UnicodeString *)&local_a8,param_1,pUVar2);
        icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2((FilteredNormalizer2 *)&local_a8);
      }
      if ((pUVar2 == (UErrorCode *)&local_88) && (*param_5 < 1)) {
        icu_76_godot::UnicodeString::operator=(param_4,(UnicodeString *)&local_88);
      }
    }
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
  }
  else {
    icu_76_godot::UnicodeString::setToBogus();
    if (*param_5 < 1) {
      *param_5 = 1;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::Normalizer::compose(icu_76_godot::UnicodeString const&, signed char, int,
   icu_76_godot::UnicodeString&, UErrorCode&) */

void icu_76_godot::Normalizer::compose(undefined8 param_1,char param_2)

{
  normalize(param_1,5 - (uint)(param_2 == '\0'));
  return;
}



/* icu_76_godot::Normalizer::decompose(icu_76_godot::UnicodeString const&, signed char, int,
   icu_76_godot::UnicodeString&, UErrorCode&) */

void icu_76_godot::Normalizer::decompose(undefined8 param_1,char param_2)

{
  normalize(param_1,3 - (uint)(param_2 == '\0'));
  return;
}



/* icu_76_godot::Normalizer::quickCheck(icu_76_godot::UnicodeString const&, UNormalizationMode, int,
   UErrorCode&) */

ulong icu_76_godot::Normalizer::quickCheck
                (UErrorCode *param_1,undefined4 param_2,ulong param_3,int *param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  code *local_48;
  long *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)icu_76_godot::Normalizer2Factory::getInstance(param_2,param_4);
  if (*param_4 < 1) {
    if ((param_3 & 0x20) == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_4);
        return uVar3;
      }
      goto LAB_00100787;
    }
    local_38 = uniset_getUnicode32Instance_76_godot(param_4);
    local_48 = __stack_chk_fail;
    local_40 = plVar2;
    uVar1 = icu_76_godot::FilteredNormalizer2::quickCheck((UnicodeString *)&local_48,param_1);
    uVar3 = (ulong)uVar1;
    icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2((FilteredNormalizer2 *)&local_48);
  }
  else {
    uVar3 = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00100787:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer::isNormalized(icu_76_godot::UnicodeString const&, UNormalizationMode,
   int, UErrorCode&) */

ulong icu_76_godot::Normalizer::isNormalized
                (UErrorCode *param_1,undefined4 param_2,ulong param_3,int *param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  code *local_48;
  long *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)icu_76_godot::Normalizer2Factory::getInstance(param_2,param_4);
  if (*param_4 < 1) {
    if ((param_3 & 0x20) == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001007fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2,param_1,param_4);
        return uVar3;
      }
      goto LAB_0010085a;
    }
    local_38 = uniset_getUnicode32Instance_76_godot(param_4);
    local_48 = __stack_chk_fail;
    local_40 = plVar2;
    uVar1 = icu_76_godot::FilteredNormalizer2::isNormalized((UnicodeString *)&local_48,param_1);
    uVar3 = (ulong)uVar1;
    icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2((FilteredNormalizer2 *)&local_48);
  }
  else {
    uVar3 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_0010085a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer::concatenate(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString const&, icu_76_godot::UnicodeString&, UNormalizationMode, int,
   UErrorCode&) */

UnicodeString *
icu_76_godot::Normalizer::concatenate
          (UnicodeString *param_1,UErrorCode *param_2,UnicodeString *param_3,undefined4 param_4,
          uint param_5,int *param_6)

{
  long *plVar1;
  UnicodeString *this;
  long in_FS_OFFSET;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((byte)param_1[8] & 1) == 0) && (((byte)param_2[8] & 1) == 0)) && (*param_6 < 1)) {
    local_88 = icu_76_godot::UnicodeString::UnicodeString;
    local_80 = 2;
    this = param_3;
    if (param_2 == (UErrorCode *)param_3) {
      this = (UnicodeString *)&local_88;
    }
    icu_76_godot::UnicodeString::operator=(this,param_1);
    plVar1 = (long *)icu_76_godot::Normalizer2Factory::getInstance(param_4,param_6);
    if (*param_6 < 1) {
      if ((param_5 & 0x20) == 0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,this,param_2,param_6);
      }
      else {
        local_98 = uniset_getUnicode32Instance_76_godot(param_6);
        local_a8 = __stack_chk_fail;
        local_a0 = plVar1;
        icu_76_godot::FilteredNormalizer2::append((UnicodeString *)&local_a8,this,param_2);
        icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2((FilteredNormalizer2 *)&local_a8);
      }
      if ((this == (UnicodeString *)&local_88) && (*param_6 < 1)) {
        icu_76_godot::UnicodeString::operator=(param_3,(UnicodeString *)&local_88);
      }
    }
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
  }
  else {
    icu_76_godot::UnicodeString::setToBogus();
    if (*param_6 < 1) {
      *param_6 = 1;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* icu_76_godot::Normalizer::reset() */

void __thiscall icu_76_godot::Normalizer::reset(Normalizer *this)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(**(long **)(this + 0x20) + 0xc0))(*(long **)(this + 0x20),0,0);
  *(undefined4 *)(this + 0x70) = 0;
  uVar1 = *(ushort *)(this + 0x38) & 0x1f;
  *(ulong *)(this + 0x28) = CONCAT44(uVar2,uVar2);
  if ((*(ushort *)(this + 0x38) & 1) != 0) {
    uVar1 = 2;
  }
  *(ushort *)(this + 0x38) = uVar1;
  return;
}



/* icu_76_godot::Normalizer::setIndexOnly(int) */

void icu_76_godot::Normalizer::setIndexOnly(int param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 in_register_0000003c;
  long lVar3;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  (**(code **)(**(long **)(lVar3 + 0x20) + 0x78))();
  uVar1 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0xc);
  *(undefined4 *)(lVar3 + 0x70) = 0;
  uVar2 = *(ushort *)(lVar3 + 0x38) & 0x1f;
  if ((*(ushort *)(lVar3 + 0x38) & 1) != 0) {
    uVar2 = 2;
  }
  *(ulong *)(lVar3 + 0x28) = CONCAT44(uVar1,uVar1);
  *(ushort *)(lVar3 + 0x38) = uVar2;
  return;
}



/* icu_76_godot::Normalizer::getIndex() const */

undefined4 __thiscall icu_76_godot::Normalizer::getIndex(Normalizer *this)

{
  undefined4 uVar1;
  
  if (-1 < *(short *)(this + 0x38)) {
    uVar1 = *(undefined4 *)(this + 0x2c);
    if (*(int *)(this + 0x70) < (int)(*(short *)(this + 0x38) >> 5)) {
      uVar1 = *(undefined4 *)(this + 0x28);
    }
    return uVar1;
  }
  uVar1 = *(undefined4 *)(this + 0x2c);
  if (*(int *)(this + 0x70) < *(int *)(this + 0x3c)) {
    uVar1 = *(undefined4 *)(this + 0x28);
  }
  return uVar1;
}



/* icu_76_godot::Normalizer::startIndex() const */

undefined4 __thiscall icu_76_godot::Normalizer::startIndex(Normalizer *this)

{
  return *(undefined4 *)(*(long *)(this + 0x20) + 0x10);
}



/* icu_76_godot::Normalizer::endIndex() const */

undefined4 __thiscall icu_76_godot::Normalizer::endIndex(Normalizer *this)

{
  return *(undefined4 *)(*(long *)(this + 0x20) + 0x14);
}



/* icu_76_godot::Normalizer::setMode(UNormalizationMode) */

void __thiscall icu_76_godot::Normalizer::setMode(Normalizer *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x18) = param_2;
  init(this);
  return;
}



/* icu_76_godot::Normalizer::getUMode() const */

undefined4 __thiscall icu_76_godot::Normalizer::getUMode(Normalizer *this)

{
  return *(undefined4 *)(this + 0x18);
}



/* icu_76_godot::Normalizer::setOption(int, signed char) */

void __thiscall icu_76_godot::Normalizer::setOption(Normalizer *this,uint param_1,char param_3)

{
  uint uVar1;
  
  uVar1 = ~param_1 & *(uint *)(this + 0x1c);
  if (param_3 != '\0') {
    uVar1 = *(uint *)(this + 0x1c) | param_1;
  }
  *(uint *)(this + 0x1c) = uVar1;
  init(this);
  return;
}



/* icu_76_godot::Normalizer::getOption(int) const */

bool __thiscall icu_76_godot::Normalizer::getOption(Normalizer *this,int param_1)

{
  return (param_1 & *(uint *)(this + 0x1c)) != 0;
}



/* icu_76_godot::Normalizer::setText(icu_76_godot::UnicodeString const&, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::Normalizer::setText(Normalizer *this,UnicodeString *param_1,UErrorCode *param_2)

{
  undefined8 in_RAX;
  StringCharacterIterator *this_00;
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if (0 < *(int *)param_2) {
    return in_RAX;
  }
  this_00 = (StringCharacterIterator *)
            icu_76_godot::UMemory::operator_new((UMemory *)0x60,(ulong)param_1);
  if (this_00 != (StringCharacterIterator *)0x0) {
    icu_76_godot::StringCharacterIterator::StringCharacterIterator(this_00,param_1);
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
    *(StringCharacterIterator **)(this + 0x20) = this_00;
    uVar1 = reset(this);
    return uVar1;
  }
  *(undefined4 *)param_2 = 7;
  return uStack_28;
}



/* icu_76_godot::Normalizer::setText(icu_76_godot::CharacterIterator const&, UErrorCode&) */

void __thiscall
icu_76_godot::Normalizer::setText(Normalizer *this,CharacterIterator *param_1,UErrorCode *param_2)

{
  long lVar1;
  
  if (0 < *(int *)param_2) {
    return;
  }
  lVar1 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  if (lVar1 != 0) {
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
    *(long *)(this + 0x20) = lVar1;
    reset(this);
    return;
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::Normalizer::setText(icu_76_godot::ConstChar16Ptr, int, UErrorCode&) */

void __thiscall
icu_76_godot::Normalizer::setText
          (Normalizer *this,undefined8 *param_2,undefined4 param_3,int *param_4)

{
  UCharCharacterIterator *pUVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    pUVar1 = (UCharCharacterIterator *)
             icu_76_godot::UMemory::operator_new((UMemory *)0x20,(ulong)param_2);
    if (pUVar1 != (UCharCharacterIterator *)0x0) {
      local_38 = *param_2;
      icu_76_godot::UCharCharacterIterator::UCharCharacterIterator(pUVar1,&local_38,param_3);
      if (*(long **)(this + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x20) + 8))();
      }
      *(UCharCharacterIterator **)(this + 0x20) = pUVar1;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        reset(this);
        return;
      }
      goto LAB_00100cd3;
    }
    *param_4 = 7;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100cd3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer::getText(icu_76_godot::UnicodeString&) */

void icu_76_godot::Normalizer::getText(UnicodeString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100cfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0xd0))();
  return;
}



/* icu_76_godot::Normalizer::clearBuffer() */

void __thiscall icu_76_godot::Normalizer::clearBuffer(Normalizer *this)

{
  ushort uVar1;
  
  *(undefined4 *)(this + 0x70) = 0;
  uVar1 = *(ushort *)(this + 0x38) & 0x1f;
  if ((*(ushort *)(this + 0x38) & 1) != 0) {
    uVar1 = 2;
  }
  *(ushort *)(this + 0x38) = uVar1;
  return;
}



/* icu_76_godot::Normalizer::nextNormalize() */

uint __thiscall icu_76_godot::Normalizer::nextNormalize(Normalizer *this)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  int local_7c;
  UnicodeString local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x2c);
  uVar4 = *(ushort *)(this + 0x38) & 0x1f;
  if ((*(ushort *)(this + 0x38) & 1) != 0) {
    uVar4 = 2;
  }
  *(ushort *)(this + 0x38) = uVar4;
  (**(code **)(**(long **)(this + 0x20) + 0x78))();
  uVar5 = (**(code **)(**(long **)(this + 0x20) + 0x38))();
  if ((char)uVar5 != '\0') {
    iVar6 = (**(code **)(**(long **)(this + 0x20) + 0x30))();
    icu_76_godot::UnicodeString::UnicodeString(local_78,iVar6);
    while( true ) {
      cVar3 = (**(code **)(**(long **)(this + 0x20) + 0x38))();
      if (cVar3 == '\0') break;
      plVar1 = *(long **)(this + 0x10);
      pcVar2 = *(code **)(*plVar1 + 0x78);
      uVar7 = (**(code **)(**(long **)(this + 0x20) + 0x30))();
      cVar3 = (*pcVar2)(plVar1,uVar7);
      if (cVar3 != '\0') {
        (**(code **)(**(long **)(this + 0x20) + 200))(*(long **)(this + 0x20),0xffffffff,1);
        break;
      }
      icu_76_godot::UnicodeString::append((int)local_78);
    }
    local_7c = 0;
    uVar5 = 0;
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(*(long *)(this + 0x20) + 0xc);
    (**(code **)(**(long **)(this + 0x10) + 0x18))
              (*(long **)(this + 0x10),local_78,this + 0x30,&local_7c);
    if (local_7c < 1) {
      uVar5 = (uint)(*(ushort *)(this + 0x38) >> 5 != 0);
    }
    icu_76_godot::UnicodeString::~UnicodeString(local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer::current() */

undefined8 __thiscall icu_76_godot::Normalizer::current(Normalizer *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(short *)(this + 0x38) < 0) {
    iVar2 = *(int *)(this + 0x3c);
  }
  else {
    iVar2 = (int)(*(short *)(this + 0x38) >> 5);
  }
  if ((iVar2 <= *(int *)(this + 0x70)) && (cVar1 = nextNormalize(this), cVar1 == '\0')) {
    return 0xffff;
  }
  uVar3 = icu_76_godot::UnicodeString::char32At((int)this + 0x30);
  return uVar3;
}



/* icu_76_godot::Normalizer::next() */

undefined8 __thiscall icu_76_godot::Normalizer::next(Normalizer *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(short *)(this + 0x38) < 0) {
    iVar2 = *(int *)(this + 0x3c);
  }
  else {
    iVar2 = (int)(*(short *)(this + 0x38) >> 5);
  }
  if ((iVar2 <= *(int *)(this + 0x70)) && (cVar1 = nextNormalize(this), cVar1 == '\0')) {
    return 0xffff;
  }
  uVar3 = icu_76_godot::UnicodeString::char32At((int)this + 0x30);
  *(uint *)(this + 0x70) = *(int *)(this + 0x70) + (0xffff < (uint)uVar3) + 1;
  return uVar3;
}



/* icu_76_godot::Normalizer::first() */

void __thiscall icu_76_godot::Normalizer::first(Normalizer *this)

{
  reset(this);
  next(this);
  return;
}



/* icu_76_godot::Normalizer::previousNormalize() */

ulong __thiscall icu_76_godot::Normalizer::previousNormalize(Normalizer *this)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_6c;
  code *local_68;
  undefined2 local_60;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x28);
  uVar2 = *(ushort *)(this + 0x38) & 0x1f;
  if ((*(ushort *)(this + 0x38) & 1) != 0) {
    uVar2 = 2;
  }
  *(ushort *)(this + 0x38) = uVar2;
  (**(code **)(**(long **)(this + 0x20) + 0x78))();
  uVar4 = (**(code **)(**(long **)(this + 0x20) + 0xb8))();
  uVar5 = (ulong)uVar4;
  if ((char)uVar4 != '\0') {
    local_68 = icu_76_godot::UnicodeString::UnicodeString;
    local_60 = 2;
    do {
      cVar1 = (**(code **)(**(long **)(this + 0x20) + 0xb8))();
      if (cVar1 == '\0') break;
      uVar4 = (**(code **)(**(long **)(this + 0x20) + 0xb0))();
      uVar5 = (ulong)uVar4;
      icu_76_godot::UnicodeString::replace((int)(UnicodeString *)&local_68,0,0);
      cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x78))();
    } while (cVar1 == '\0');
    local_6c = 0;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(*(long *)(this + 0x20) + 0xc);
    (**(code **)(**(long **)(this + 0x10) + 0x18))
              (*(long **)(this + 0x10),(UnicodeString *)&local_68,this + 0x30,&local_6c);
    if (*(short *)(this + 0x38) < 0) {
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 0x3c);
      uVar5 = CONCAT71((int7)(uVar5 >> 8),local_6c < 1);
    }
    else {
      sVar3 = *(short *)(this + 0x38) >> 5;
      uVar5 = 0;
      *(int *)(this + 0x70) = (int)sVar3;
      if (local_6c < 1) {
        uVar5 = (ulong)(sVar3 != 0);
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_68);
        goto LAB_001010a0;
      }
    }
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_68);
  }
LAB_001010a0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer::previous() */

undefined8 __thiscall icu_76_godot::Normalizer::previous(Normalizer *this)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(this + 0x70) < 1) && (cVar1 = previousNormalize(this), cVar1 == '\0')) {
    return 0xffff;
  }
  uVar2 = icu_76_godot::UnicodeString::char32At((int)this + 0x30);
  *(uint *)(this + 0x70) = *(int *)(this + 0x70) - ((0xffff < (uint)uVar2) + 1);
  return uVar2;
}



/* icu_76_godot::Normalizer::last() */

undefined8 __thiscall icu_76_godot::Normalizer::last(Normalizer *this)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (**(code **)(**(long **)(this + 0x20) + 0xc0))(*(long **)(this + 0x20),0,2);
  *(undefined4 *)(this + 0x70) = 0;
  uVar2 = *(ushort *)(this + 0x38) & 0x1f;
  *(ulong *)(this + 0x28) = CONCAT44(uVar3,uVar3);
  if ((*(ushort *)(this + 0x38) & 1) != 0) {
    uVar2 = 2;
  }
  *(ushort *)(this + 0x38) = uVar2;
  cVar1 = previousNormalize(this);
  uVar4 = 0xffff;
  if (cVar1 != '\0') {
    uVar4 = icu_76_godot::UnicodeString::char32At((int)this + 0x30);
    *(uint *)(this + 0x70) = *(int *)(this + 0x70) - ((0xffff < (uint)uVar4) + 1);
  }
  return uVar4;
}


