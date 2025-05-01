
/* icu_76_godot::BreakIterator::getRuleStatus() const */

undefined8 icu_76_godot::BreakIterator::getRuleStatus(void)

{
  return 0;
}



/* icu_76_godot::BreakIterator::getRuleStatusVec(int*, int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::BreakIterator::getRuleStatusVec
          (BreakIterator *this,int *param_1,int param_2,UErrorCode *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)param_3 < 1) {
    if (param_2 < 1) {
      *(undefined4 *)param_3 = 0xf;
    }
    else {
      *param_1 = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* icu_76_godot::BreakIterator::buildInstance(icu_76_godot::Locale const&, char const*, UErrorCode&)
    */

RuleBasedBreakIterator *
icu_76_godot::BreakIterator::buildInstance(Locale *param_1,char *param_2,UErrorCode *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RuleBasedBreakIterator *pRVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined4 *local_2f0;
  undefined1 *local_2e8;
  uint local_2bc;
  RuleBasedBreakIterator *local_2b8;
  RuleBasedBreakIterator *local_2b0;
  long local_2a8;
  undefined4 local_2a0;
  undefined2 local_29c;
  undefined4 local_270;
  undefined1 local_268 [144];
  undefined1 local_1d8 [140];
  undefined4 local_14c;
  undefined1 local_148 [264];
  long local_40;
  
  pRVar4 = (RuleBasedBreakIterator *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2a0 = 0x28;
  local_2a8 = (long)&local_29c + 1;
  local_14c = 0;
  local_270 = 0;
  local_29c = 0;
  if (0 < *(int *)param_3) goto LAB_001001c5;
  puVar6 = local_268;
  puVar7 = local_1d8;
  ures_initStackObject_76_godot(puVar6);
  ures_initStackObject_76_godot(puVar7);
  uVar2 = ures_openNoDefault_76_godot("icudt76l-brkitr",*(undefined8 *)(param_1 + 0x28),param_3);
  if (*(int *)param_3 < 1) {
    puVar6 = (undefined1 *)ures_getByKeyWithFallback_76_godot(uVar2,"boundaries",puVar6,param_3);
    puVar7 = (undefined1 *)ures_getByKeyWithFallback_76_godot(puVar6,param_2,puVar7,param_3);
    lVar8 = ures_getString_76_godot(puVar7,&local_2bc,param_3);
    if (local_2bc < 0x100) {
      if ((*(int *)param_3 < 1) && (lVar8 != 0)) {
        iVar1 = ures_getLocaleInternal_76_godot(puVar7,param_3);
        icu_76_godot::CharString::append((char *)&local_2a8,iVar1,(UErrorCode *)0xffffffff);
        lVar9 = u_strchr_76_godot(lVar8,0x2e);
        if (lVar9 == 0) {
          lVar8 = 0;
        }
        else {
          uVar10 = lVar9 - lVar8 >> 1;
          u_UCharsToChars_76_godot(lVar9 + 2,&local_14c,4);
          u_UCharsToChars_76_godot(lVar8,local_148,uVar10 & 0xffffffff);
          lVar8 = (long)(int)uVar10;
        }
        local_148[lVar8] = 0;
      }
    }
    else {
      local_2bc = 0;
      if (*(int *)param_3 < 1) {
        *(undefined4 *)param_3 = 0xf;
      }
    }
  }
  local_2e8 = local_148;
  local_2f0 = &local_14c;
  ures_close_76_godot(puVar6);
  ures_close_76_godot(puVar7);
  uVar3 = udata_open_76_godot("icudt76l-brkitr",local_2f0,local_2e8,param_3);
  if ((int)*(uint *)param_3 < 1) {
    pRVar4 = (RuleBasedBreakIterator *)
             icu_76_godot::UMemory::operator_new((UMemory *)0x2f0,(ulong)*(uint *)param_3);
    if (pRVar4 == (RuleBasedBreakIterator *)0x0) {
      ures_close_76_godot(uVar2);
      udata_close_76_godot(uVar3);
      if (*(int *)param_3 < 1) {
        *(undefined4 *)param_3 = 7;
      }
      goto LAB_001001b1;
    }
    pcVar5 = strstr(param_2,"phrase");
    icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator
              (pRVar4,uVar3,pcVar5 != (char *)0x0,param_3);
    if (*(int *)param_3 < 1) {
      local_2b8 = pRVar4 + 0xa5;
      local_2b0 = pRVar4 + 8;
      pcVar5 = (char *)ures_getLocaleByType_76_godot(uVar2,1,param_3);
      icu_76_godot::LocaleBased::setLocaleIDs((char *)&local_2b8,pcVar5);
      strncpy((char *)(pRVar4 + 0x142),*(char **)(param_1 + 0x28),0x9c);
      pRVar4[0x1de] = (RuleBasedBreakIterator)0x0;
      ures_close_76_godot(uVar2);
      iVar1 = *(int *)param_3;
    }
    else {
      ures_close_76_godot(uVar2);
      iVar1 = *(int *)param_3;
    }
    if (0 < iVar1) {
      (**(code **)(*(long *)pRVar4 + 8))(pRVar4);
      goto LAB_001001b1;
    }
  }
  else {
    ures_close_76_godot(uVar2);
LAB_001001b1:
    pRVar4 = (RuleBasedBreakIterator *)0x0;
  }
  if ((char)local_29c != '\0') {
    uprv_free_76_godot(local_2a8);
  }
LAB_001001c5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pRVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::BreakIterator::getAvailableLocales(int&) */

void icu_76_godot::BreakIterator::getAvailableLocales(int *param_1)

{
  icu_76_godot::Locale::getAvailableLocales(param_1);
  return;
}



/* icu_76_godot::BreakIterator::BreakIterator() */

void __thiscall icu_76_godot::BreakIterator::BreakIterator(BreakIterator *this)

{
  this[0x142] = (BreakIterator)0x0;
  *(undefined **)this = &DAT_001013b8;
  this[8] = (BreakIterator)0x0;
  this[0xa5] = (BreakIterator)0x0;
  return;
}



/* icu_76_godot::BreakIterator::BreakIterator(icu_76_godot::BreakIterator const&) */

void __thiscall
icu_76_godot::BreakIterator::BreakIterator(BreakIterator *this,BreakIterator *param_1)

{
  *(undefined **)this = &DAT_001013b8;
  strncpy((char *)(this + 8),(char *)(param_1 + 8),0x9d);
  strncpy((char *)(this + 0xa5),(char *)(param_1 + 0xa5),0x9d);
  strncpy((char *)(this + 0x142),(char *)(param_1 + 0x142),0x9d);
  return;
}



/* icu_76_godot::BreakIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::BreakIterator const&) */

BreakIterator * __thiscall
icu_76_godot::BreakIterator::operator=(BreakIterator *this,BreakIterator *param_1)

{
  if (this != param_1) {
    strncpy((char *)(this + 8),(char *)(param_1 + 8),0x9d);
    strncpy((char *)(this + 0xa5),(char *)(param_1 + 0xa5),0x9d);
    strncpy((char *)(this + 0x142),(char *)(param_1 + 0x142),0x9d);
  }
  return this;
}



/* icu_76_godot::BreakIterator::~BreakIterator() */

void __thiscall icu_76_godot::BreakIterator::~BreakIterator(BreakIterator *this)

{
  *(undefined **)this = &DAT_001013b8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::BreakIterator::~BreakIterator() */

void __thiscall icu_76_godot::BreakIterator::~BreakIterator(BreakIterator *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001013b8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::BreakIterator::makeInstance(icu_76_godot::Locale const&, int, UErrorCode&) */

undefined8
icu_76_godot::BreakIterator::makeInstance(Locale *param_1,int param_2,UErrorCode *param_3)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  size_t sVar5;
  void *pvVar6;
  long in_FS_OFFSET;
  int local_15c;
  void *local_158;
  int local_150;
  void *local_148;
  int local_140;
  undefined4 uStack_13c;
  undefined **local_138;
  int local_130;
  void *local_128;
  undefined4 local_120;
  undefined2 local_11c;
  int local_f0;
  long local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 auStack_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    switch(param_2) {
    case 0:
      uVar4 = buildInstance(param_1,"grapheme",param_3);
      break;
    case 1:
      uVar4 = buildInstance(param_1,"word",param_3);
      break;
    case 2:
      local_68._0_5_ = 0x656e696c;
      local_15c = 0;
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_148,"lb");
      pvVar6 = local_148;
      uVar4 = CONCAT44(uStack_13c,local_140);
      if (local_15c < 1) {
        local_a8 = (long)&local_9c + 1;
        local_a0 = 0x28;
        local_9c = 0;
        local_70 = 0;
        icu_76_godot::CharStringByteSink::CharStringByteSink
                  ((CharStringByteSink *)&local_138,(CharString *)&local_a8);
        local_138 = &PTR__StringByteSink_00101380;
        icu_76_godot::Locale::getKeywordValue(param_1,pvVar6,uVar4,(CharStringByteSink *)&local_138)
        ;
        icu_76_godot::CharString::CharString((CharString *)&local_128,(CharString *)&local_a8);
        local_138 = &PTR__StringByteSink_00101380;
        icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)&local_138);
        if ((char)local_9c != '\0') {
          uprv_free_76_godot(local_a8);
        }
        if ((local_15c < 1) &&
           ((((icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_158,"strict"),
              pvVar6 = local_128, local_150 == local_f0 &&
              ((local_f0 == 0 || (iVar2 = memcmp(local_128,local_158,(long)local_f0), iVar2 == 0))))
             || ((icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_148,"normal"),
                 pvVar6 = local_128, local_140 == local_f0 &&
                 ((local_f0 == 0 || (iVar2 = memcmp(local_128,local_148,(long)local_f0), iVar2 == 0)
                  ))))) ||
            ((icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_138,"loose"),
             pvVar6 = local_128, local_130 == local_f0 &&
             ((local_f0 == 0 || (iVar2 = memcmp(local_128,local_138,(long)local_f0), iVar2 == 0)))))
            ))) {
          sVar5 = strlen(local_68);
          pcVar1 = local_68 + sVar5;
          pcVar1[0] = '_';
          pcVar1[1] = '\0';
          __strcpy_chk(local_68 + sVar5 + 1,pvVar6,auStack_48 + -(long)(local_68 + sVar5 + 1));
        }
      }
      else {
        local_128 = (void *)((long)&local_11c + 1);
        local_120 = 0x28;
        local_f0 = 0;
        local_11c = 0;
      }
      if ((((param_1[8] == (Locale)0x6a) && (param_1[9] == (Locale)0x61)) &&
          (param_1[10] == (Locale)0x0)) ||
         (((param_1[8] == (Locale)0x6b && (param_1[9] == (Locale)0x6f)) &&
          (param_1[10] == (Locale)0x0)))) {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_148,"lw");
        if (local_15c < 1) {
          local_a0 = 0x28;
          local_a8 = (long)&local_9c + 1;
          local_9c = 0;
          local_70 = 0;
          icu_76_godot::CharStringByteSink::CharStringByteSink
                    ((CharStringByteSink *)&local_138,(CharString *)&local_a8);
          local_138 = &PTR__StringByteSink_00101380;
          icu_76_godot::Locale::getKeywordValue
                    (param_1,local_148,CONCAT44(uStack_13c,local_140),
                     (CharStringByteSink *)&local_138,&local_15c);
          icu_76_godot::CharString::CharString((CharString *)&local_e8,(CharString *)&local_a8);
          local_138 = &PTR__StringByteSink_00101380;
          icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)&local_138);
          if ((char)local_9c != '\0') {
            uprv_free_76_godot(local_a8);
          }
        }
        else {
          local_e8 = (long)&local_dc + 1;
          local_e0 = 0x28;
          local_b0 = 0;
          local_dc = 0;
        }
        icu_76_godot::CharString::operator=((CharString *)&local_128,(CharString *)&local_e8);
        if ((char)local_dc != '\0') {
          uprv_free_76_godot(local_e8);
        }
        if (((local_15c < 1) &&
            (icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_138,"phrase"),
            pvVar6 = local_128, local_130 == local_f0)) &&
           ((local_f0 == 0 || (iVar2 = memcmp(local_128,local_138,(long)local_f0), iVar2 == 0)))) {
          sVar5 = strlen(local_68);
          pcVar1 = local_68 + sVar5;
          pcVar1[0] = '_';
          pcVar1[1] = '\0';
          __strcpy_chk(local_68 + sVar5 + 1,pvVar6,auStack_48 + -(long)(local_68 + sVar5 + 1));
        }
      }
      uVar4 = buildInstance(param_1,local_68,param_3);
      if ((char)local_11c != '\0') {
        uprv_free_76_godot(local_128);
      }
      break;
    case 3:
      uVar4 = buildInstance(param_1,"sentence",param_3);
      local_138 = (undefined **)((ulong)local_138 & 0xffffffff00000000);
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      iVar2 = icu_76_godot::Locale::getKeywordValue
                        ((char *)param_1,"ss",(int)local_68,(UErrorCode *)0x20);
      if ((((int)local_138 < 1) && (0 < iVar2)) && (iVar2 = strcmp(local_68,"standard"), iVar2 == 0)
         ) {
        plVar3 = (long *)icu_76_godot::FilteredBreakIteratorBuilder::createInstance
                                   (param_1,(UErrorCode *)&local_138);
        if ((int)local_138 < 1) {
          uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,uVar4,param_3);
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
      break;
    case 4:
      uVar4 = buildInstance(param_1,"title",param_3);
      break;
    default:
      *(undefined4 *)param_3 = 1;
      goto LAB_001008d1;
    }
    if (*(int *)param_3 < 1) goto LAB_001006ac;
  }
LAB_001008d1:
  uVar4 = 0;
LAB_001006ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* icu_76_godot::BreakIterator::createInstance(icu_76_godot::Locale const&, int, UErrorCode&) */

undefined8
icu_76_godot::BreakIterator::createInstance(Locale *param_1,int param_2,UErrorCode *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)param_3 < 1) {
    uVar1 = makeInstance(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::BreakIterator::createWordInstance(icu_76_godot::Locale const&, UErrorCode&) */

undefined8 icu_76_godot::BreakIterator::createWordInstance(Locale *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)param_2 < 1) {
    uVar1 = makeInstance(param_1,1,param_2);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::BreakIterator::createLineInstance(icu_76_godot::Locale const&, UErrorCode&) */

undefined8 icu_76_godot::BreakIterator::createLineInstance(Locale *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)param_2 < 1) {
    uVar1 = makeInstance(param_1,2,param_2);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::BreakIterator::createCharacterInstance(icu_76_godot::Locale const&, UErrorCode&) */

undefined8 icu_76_godot::BreakIterator::createCharacterInstance(Locale *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)param_2 < 1) {
    uVar1 = makeInstance(param_1,0,param_2);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::BreakIterator::createSentenceInstance(icu_76_godot::Locale const&, UErrorCode&) */

undefined8 icu_76_godot::BreakIterator::createSentenceInstance(Locale *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)param_2 < 1) {
    uVar1 = makeInstance(param_1,3,param_2);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::BreakIterator::createTitleInstance(icu_76_godot::Locale const&, UErrorCode&) */

undefined8 icu_76_godot::BreakIterator::createTitleInstance(Locale *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)param_2 < 1) {
    uVar1 = makeInstance(param_1,4,param_2);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::BreakIterator::getLocale(ULocDataLocaleType, UErrorCode&) const */

BreakIterator * __thiscall
icu_76_godot::BreakIterator::getLocale(BreakIterator *this,long param_2,int param_3)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 2) {
    icu_76_godot::Locale::Locale
              ((Locale *)this,(char *)(param_2 + 0x142),(char *)0x0,(char *)0x0,(char *)0x0);
  }
  else {
    local_28 = param_2 + 0xa5;
    local_20 = param_2 + 8;
    icu_76_godot::LocaleBased::getLocale(this,&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::BreakIterator::getLocaleID(ULocDataLocaleType, UErrorCode&) const */

long icu_76_godot::BreakIterator::getLocaleID(long param_1,int param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_1 + 0x142;
  if (param_2 != 2) {
    local_28 = param_1 + 0xa5;
    local_20 = param_1 + 8;
    lVar1 = icu_76_godot::LocaleBased::getLocaleID(&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::BreakIterator::BreakIterator(icu_76_godot::Locale const&, icu_76_godot::Locale
   const&) */

void __thiscall
icu_76_godot::BreakIterator::BreakIterator(BreakIterator *this,Locale *param_1,Locale *param_2)

{
  long in_FS_OFFSET;
  BreakIterator *local_28;
  BreakIterator *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined **)this = &DAT_001013b8;
  local_28 = this + 0xa5;
  local_20 = this + 8;
  icu_76_godot::LocaleBased::setLocaleIDs((Locale *)&local_28,param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink() */

void __thiscall
icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink
          (StringByteSink<icu_76_godot::CharString> *this)

{
  *(undefined ***)this = &PTR__StringByteSink_00101380;
  icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)this);
  return;
}



/* icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink() */

void __thiscall
icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink
          (StringByteSink<icu_76_godot::CharString> *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__StringByteSink_00101380;
  icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
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
LAB_0010111f:
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
      goto LAB_0010111f;
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



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink() */

void __thiscall
icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink
          (StringByteSink<icu_76_godot::CharString> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


