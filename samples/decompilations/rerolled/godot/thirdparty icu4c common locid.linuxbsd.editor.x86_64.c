/* icu_76_godot::Locale::getDynamicClassID() const */

undefined1 * icu_76_godot::Locale::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* _FUN(char const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readLanguageAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char_const*)#1}::_FUN(char *param_1)

{
  return;
}



/* icu_76_godot::(anonymous namespace)::cleanupKnownCanonicalized() */

undefined8 icu_76_godot::(anonymous_namespace)::cleanupKnownCanonicalized(void)

{
  LOCK();
  gKnownCanonicalizedInitOnce = 0;
  UNLOCK();
  if (gKnownCanonicalized != 0) {
    uhash_close_76_godot();
    return 1;
  }
  return 1;
}



/* icu_76_godot::Locale::~Locale() */

void __thiscall icu_76_godot::Locale::~Locale(Locale *this)

{
  Locale *pLVar1;
  Locale *pLVar2;
  
  *(undefined ***)this = &PTR__Locale_00108690;
  pLVar1 = *(Locale **)(this + 0xd0);
  pLVar2 = *(Locale **)(this + 0x28);
  if (pLVar1 != pLVar2) {
    if (pLVar1 == this + 0x30) {
      *(undefined8 *)(this + 0xd0) = 0;
      goto LAB_001000cb;
    }
    uprv_free_76_godot(pLVar1);
    pLVar2 = *(Locale **)(this + 0x28);
  }
  *(undefined8 *)(this + 0xd0) = 0;
  if (pLVar2 == this + 0x30) {
    icu_76_godot::UObject::~UObject((UObject *)this);
    return;
  }
LAB_001000cb:
  uprv_free_76_godot();
  *(undefined8 *)(this + 0x28) = 0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::(anonymous namespace)::AliasData::cleanup() */

undefined8 icu_76_godot::(anonymous_namespace)::AliasData::cleanup(void)

{
  UMemory *this;
  UMemory *this_00;
  void *in_RSI;
  
  this_00 = gSingleton;
  LOCK();
  gInitOnce = 0;
  UNLOCK();
  if (gSingleton != (UMemory *)0x0) {
    this = *(UMemory **)(gSingleton + 0x30);
    if (this != (UMemory *)0x0) {
      if (this[0xc] != (UMemory)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      icu_76_godot::UMemory::operator_delete(this,in_RSI);
    }
    uhash_close_76_godot(*(undefined8 *)(this_00 + 0x28));
    uhash_close_76_godot(*(undefined8 *)(this_00 + 0x20));
    uhash_close_76_godot(*(undefined8 *)(this_00 + 0x18));
    uhash_close_76_godot(*(undefined8 *)(this_00 + 0x10));
    uhash_close_76_godot(*(undefined8 *)(this_00 + 8));
    icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
  }
  return 1;
}



/* _FUN(UElement, UElement) */

bool icu_76_godot::(anonymous_namespace)::AliasReplacer::AliasReplacer(UErrorCode&)::
     {lambda(UElement,UElement)#1}::_FUN(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,param_2);
  return iVar1 == 0;
}



/* _FUN(UElement, UElement) */

void icu_76_godot::(anonymous_namespace)::AliasReplacer::
     replaceTransformedExtensions(icu_76_godot::CharString&,icu_76_godot::CharString&,UErrorCode&)::
     {lambda(UElement,UElement)#1}::_FUN(char *param_1,char *param_2)

{
  strcmp(param_1,param_2);
  return;
}



/* icu_76_godot::(anonymous namespace)::loadKnownCanonicalized(UErrorCode&) */

void icu_76_godot::(anonymous_namespace)::loadKnownCanonicalized(UErrorCode *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  ucln_common_registerCleanup_76_godot(8,cleanupKnownCanonicalized);
  lVar1 = uhash_open_76_godot(&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,0,param_1);
  if (*(int *)param_1 < 1) {
    lVar3 = 1;
    do {
      uhash_puti_76_godot(lVar1,*(undefined8 *)(lVar3 * 8 + 0x1087b8),1,param_1);
      iVar2 = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (iVar2 != 0xb2 && *(int *)param_1 < 1);
    if (*(int *)param_1 < 1) {
      gKnownCanonicalized = lVar1;
      return;
    }
  }
  if (lVar1 == 0) {
    return;
  }
  uhash_close_76_godot(lVar1);
  return;
}



/* icu_76_godot::KeywordEnumeration::~KeywordEnumeration() */

void __thiscall icu_76_godot::KeywordEnumeration::~KeywordEnumeration(KeywordEnumeration *this)

{
  *(undefined ***)this = &PTR__KeywordEnumeration_001086b8;
  if (this[0x84] == (KeywordEnumeration)0x0) {
    icu_76_godot::StringEnumeration::~StringEnumeration((StringEnumeration *)this);
    return;
  }
  uprv_free_76_godot(*(undefined8 *)(this + 0x78));
  icu_76_godot::StringEnumeration::~StringEnumeration((StringEnumeration *)this);
  return;
}



/* icu_76_godot::Locale::initBaseName(UErrorCode&) [clone .part.0] */

void __thiscall icu_76_godot::Locale::initBaseName(Locale *this,UErrorCode *param_1)

{
  char *__s;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  __s = *(char **)(this + 0x28);
  pcVar2 = strchr(__s,0x40);
  pcVar3 = strchr(__s,0x3d);
  if ((pcVar2 == (char *)0x0 || pcVar3 == (char *)0x0) || (pcVar3 <= pcVar2)) {
    *(char **)(this + 0xd0) = __s;
  }
  else {
    iVar1 = (int)pcVar2 - (int)__s;
    lVar4 = uprv_malloc_76_godot((long)(iVar1 + 1));
    if (lVar4 == 0) {
      *(undefined4 *)param_1 = 7;
    }
    else {
      *(long *)(this + 0xd0) = lVar4;
      lVar4 = __strncpy_chk(lVar4,*(undefined8 *)(this + 0x28),(long)iVar1,(long)(iVar1 + 1));
      *(undefined1 *)(lVar4 + iVar1) = 0;
      if (iVar1 < *(int *)(this + 0x20)) {
        *(int *)(this + 0x20) = iVar1;
      }
    }
  }
  return;
}



/* _FUN(void*) */

void __thiscall
icu_76_godot::(anonymous_namespace)::AliasReplacer::
replace(icu_76_godot::Locale_const&,icu_76_godot::CharString&,UErrorCode&)::{lambda(void*)#1}::_FUN
          (_lambda_void___1_ *this,void *param_1)

{
  if (this == (_lambda_void___1_ *)0x0) {
    return;
  }
  if (this[0xc] == (_lambda_void___1_)0x0) {
    icu_76_godot::UMemory::operator_delete((UMemory *)this,param_1);
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,param_1);
  return;
}



/* icu_76_godot::(anonymous namespace)::AliasDataBuilder::readAlias(UResourceBundle*,
   icu_76_godot::UniqueCharStrings*, icu_76_godot::LocalMemory<char const*>&,
   icu_76_godot::LocalMemory<int>&, int&, void (*)(char const*), void (*)(char16_t const*),
   UErrorCode&) [clone .part.0] [clone .constprop.0] */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::readAlias
               (UResourceBundle *param_1,UniqueCharStrings *param_2,LocalMemory *param_3,
               LocalMemory *param_4,int *param_5,_func_void_char_ptr *param_6,
               _func_void_wchar16_ptr *param_7,UErrorCode *param_8)

{
  wchar16 *pwVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  wchar16 *pwVar9;
  
  iVar3 = ures_getSize_76_godot();
  *param_5 = iVar3;
  if ((0 < iVar3) &&
     (puVar5 = (undefined8 *)uprv_malloc_76_godot((long)iVar3 * 8), puVar5 != (undefined8 *)0x0)) {
    uprv_free_76_godot(*(undefined8 *)param_3);
    iVar3 = *param_5;
    *(undefined8 **)param_3 = puVar5;
    if ((0 < iVar3) &&
       (piVar6 = (int *)uprv_malloc_76_godot((long)iVar3 << 2), piVar6 != (int *)0x0)) {
      uprv_free_76_godot(*(undefined8 *)param_4);
      iVar3 = *(int *)param_8;
      *(int **)param_4 = piVar6;
      do {
        if (0 < iVar3) {
          return;
        }
        cVar2 = ures_hasNext_76_godot(param_1);
        if (cVar2 == '\0') {
          return;
        }
        lVar7 = ures_getNextResource_76_godot(param_1,0,param_8);
        pcVar8 = (char *)ures_getKey_76_godot(lVar7);
        pwVar9 = (wchar16 *)ures_getStringByKey_76_godot(lVar7,"replacement",0,param_8);
        if (0 < *(int *)param_8) {
          if (lVar7 == 0) {
            return;
          }
          ures_close_76_godot(lVar7);
          return;
        }
        (*param_6)(pcVar8);
        (*param_7)(pwVar9);
        iVar3 = *(int *)param_8;
        *puVar5 = pcVar8;
        if (iVar3 < 1) {
          if (param_2[0xb0] != (UniqueCharStrings)0x0) {
            *(undefined4 *)param_8 = 0x1e;
            goto LAB_00100586;
          }
          iVar3 = uhash_geti_76_godot(param_2);
          if (iVar3 == 0) {
            icu_76_godot::CharString::append
                      ((char)*(undefined8 *)(param_2 + 0x50),(UErrorCode *)0x0);
            pwVar1 = *(wchar16 **)(param_2 + 0x50);
            iVar3 = *(int *)(pwVar1 + 0x1c);
            uVar4 = u_strlen_76_godot(pwVar9);
            icu_76_godot::CharString::appendInvariantChars
                      (pwVar1,(int)pwVar9,(UErrorCode *)(ulong)uVar4);
            uhash_puti_76_godot(param_2,pwVar9,iVar3,param_8);
          }
        }
        else {
LAB_00100586:
          iVar3 = -1;
        }
        *piVar6 = iVar3;
        if (lVar7 != 0) {
          ures_close_76_godot(lVar7);
        }
        iVar3 = *(int *)param_8;
        piVar6 = piVar6 + 1;
        puVar5 = puVar5 + 1;
      } while( true );
    }
  }
  *(undefined4 *)param_8 = 7;
  return;
}



/* _FUN(char16_t const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readSubdivisionAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char16_t_const*)#1}::_FUN(wchar16 *param_1)

{
  return;
}



/* _FUN(char16_t const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readLanguageAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char16_t_const*)#1}::_FUN(wchar16 *param_1)

{
  return;
}



/* _FUN(char const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readScriptAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char_const*)#1}::_FUN(char *param_1)

{
  return;
}



/* _FUN(char16_t const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readScriptAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char16_t_const*)#1}::_FUN(wchar16 *param_1)

{
  return;
}



/* _FUN(char const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readTerritoryAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char_const*)#1}::_FUN(char *param_1)

{
  return;
}



/* _FUN(char16_t const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readTerritoryAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char16_t_const*)#1}::_FUN(wchar16 *param_1)

{
  return;
}



/* _FUN(char const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readVariantAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char_const*)#1}::_FUN(char *param_1)

{
  return;
}



/* _FUN(char16_t const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readVariantAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char16_t_const*)#1}::_FUN(wchar16 *param_1)

{
  return;
}



/* _FUN(char const*) */

void icu_76_godot::(anonymous_namespace)::AliasDataBuilder::
     readSubdivisionAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
     ::{lambda(char_const*)#1}::_FUN(char *param_1)

{
  return;
}



/* _FUN(UElement, UElement) */

void icu_76_godot::(anonymous_namespace)::AliasReplacer::
     outputToString(icu_76_godot::CharString&,UErrorCode&)::{lambda(UElement,UElement)#1}::_FUN
               (char *param_1,char *param_2)

{
  strcmp(param_1,param_2);
  return;
}



/* _FUN(UElement, UElement) */

void icu_76_godot::(anonymous_namespace)::AliasReplacer::
     replace(icu_76_godot::Locale_const&,icu_76_godot::CharString&,UErrorCode&)::
     {lambda(UElement,UElement)#1}::_FUN(char *param_1,char *param_2)

{
  strcmp(param_1,param_2);
  return;
}



/* icu_76_godot::UnicodeKeywordEnumeration::~UnicodeKeywordEnumeration() */

void __thiscall
icu_76_godot::UnicodeKeywordEnumeration::~UnicodeKeywordEnumeration(UnicodeKeywordEnumeration *this)

{
  *(undefined ***)this = &PTR__KeywordEnumeration_001086b8;
  if (this[0x84] == (UnicodeKeywordEnumeration)0x0) {
    icu_76_godot::StringEnumeration::~StringEnumeration((StringEnumeration *)this);
    return;
  }
  uprv_free_76_godot(*(undefined8 *)(this + 0x78));
  icu_76_godot::StringEnumeration::~StringEnumeration((StringEnumeration *)this);
  return;
}



/* icu_76_godot::KeywordEnumeration::~KeywordEnumeration() */

void __thiscall icu_76_godot::KeywordEnumeration::~KeywordEnumeration(KeywordEnumeration *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__KeywordEnumeration_001086b8;
  if (this[0x84] != (KeywordEnumeration)0x0) {
    uprv_free_76_godot(*(undefined8 *)(this + 0x78));
  }
  icu_76_godot::StringEnumeration::~StringEnumeration((StringEnumeration *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UnicodeKeywordEnumeration::~UnicodeKeywordEnumeration() */

void __thiscall
icu_76_godot::UnicodeKeywordEnumeration::~UnicodeKeywordEnumeration(UnicodeKeywordEnumeration *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__KeywordEnumeration_001086b8;
  if (this[0x84] != (UnicodeKeywordEnumeration)0x0) {
    uprv_free_76_godot(*(undefined8 *)(this + 0x78));
  }
  icu_76_godot::StringEnumeration::~StringEnumeration((StringEnumeration *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::(anonymous namespace)::AliasReplacer::replaceLanguage(bool, bool, bool,
   icu_76_godot::UVector&, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::(anonymous_namespace)::AliasReplacer::replaceLanguage
          (AliasReplacer *this,bool param_1,bool param_2,bool param_3,UVector *param_4,
          UErrorCode *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  UErrorCode *pUVar7;
  char *__s;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  char *__s1;
  char *__s_00;
  char *pcVar12;
  char *__s2;
  char *pcVar13;
  long in_FS_OFFSET;
  bool bVar14;
  int local_ec;
  char *local_d0;
  int local_c4;
  char *local_c0;
  undefined8 local_98;
  uint local_90;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_5) goto LAB_00100798;
  if (param_2) {
    pcVar3 = *(char **)(this + 0x10);
    if (pcVar3 == (char *)0x0) goto LAB_00100798;
    if (param_3) {
      local_c4 = *(int *)(this + 0x28);
      if (local_c4 == 0) goto LAB_00100798;
      local_c0 = "und";
      if (param_1) {
        local_c0 = *(char **)this;
      }
      goto LAB_00100789;
    }
    local_c4 = 1;
    local_c0 = "und";
    if (param_1) {
      local_c0 = *(char **)this;
    }
  }
  else if (param_3) {
    local_c4 = *(int *)(this + 0x28);
    if (local_c4 == 0) goto LAB_00100798;
    local_c0 = "und";
    pcVar3 = (char *)0x0;
    if (param_1) {
      local_c0 = *(char **)this;
    }
LAB_00100789:
    if (local_c4 < 1) goto LAB_00100798;
  }
  else {
    local_c0 = "und";
    if (param_1) {
      local_c0 = *(char **)this;
    }
    local_c4 = 1;
    pcVar3 = (char *)0x0;
  }
  __s_00 = (char *)0x0;
  local_ec = 0;
  while( true ) {
    if (param_3) {
      __s_00 = (char *)icu_76_godot::UVector::elementAt((int)this + 0x20);
    }
    if ((__s_00 != (char *)0x0) && (sVar4 = strlen(__s_00), sVar4 < 4)) {
      __s_00 = (char *)0x0;
    }
    local_80 = 0x28;
    local_50 = 0;
    local_7c = 0;
    local_88 = (long)&local_7c + 1;
    if (0 < *(int *)param_5) break;
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_98,local_c0);
    icu_76_godot::CharString::append((char *)&local_88,(int)local_98,(UErrorCode *)(ulong)local_90);
    cVar1 = (char)&local_88;
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      pcVar5 = (char *)icu_76_godot::CharString::append(cVar1,(UErrorCode *)0x5f);
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_98,pcVar3);
      icu_76_godot::CharString::append(pcVar5,(int)local_98,(UErrorCode *)(ulong)local_90);
    }
    if ((__s_00 != (char *)0x0) && (*__s_00 != '\0')) {
      pcVar5 = (char *)icu_76_godot::CharString::append(cVar1,(UErrorCode *)0x5f);
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_98,__s_00);
      icu_76_godot::CharString::append(pcVar5,(int)local_98,(UErrorCode *)(ulong)local_90);
    }
    if (0 < *(int *)param_5) {
      uVar8 = 0;
LAB_00100c95:
      if ((char)local_7c != '\0') {
        uprv_free_76_godot(local_88);
      }
      goto LAB_0010079a;
    }
    pcVar5 = (char *)uhash_get_76_godot(*(undefined8 *)(*(long *)(this + 0x48) + 8),local_88);
    if (pcVar5 != (char *)0x0) {
      if (*(int *)param_5 < 1) {
        uVar10 = 0x5f;
        pcVar6 = strchr(pcVar5,0x5f);
        if (pcVar6 == (char *)0x0) {
          iVar2 = strcmp(pcVar5,"und");
          pcVar6 = *(char **)this;
          __s1 = *(char **)(this + 8);
          local_d0 = (char *)0x0;
          pcVar11 = *(char **)(this + 0x10);
          if (iVar2 == 0) {
            pcVar5 = pcVar6;
          }
          bVar14 = pcVar5 == (char *)0x0;
          __s = (char *)0x0;
          __s2 = __s1;
          goto LAB_00100b3b;
        }
        pUVar7 = (UErrorCode *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,uVar10);
        if (pUVar7 == (UErrorCode *)0x0) {
          if (*(int *)param_5 < 1) {
            *(undefined4 *)param_5 = 7;
          }
        }
        else {
          sVar4 = strlen(pcVar5);
          *(UErrorCode **)pUVar7 = pUVar7 + 0xd;
          *(undefined2 *)(pUVar7 + 0xc) = 0;
          *(undefined4 *)(pUVar7 + 8) = 0x28;
          *(undefined4 *)(pUVar7 + 0x38) = 0;
          icu_76_godot::CharString::append
                    ((char *)pUVar7,(int)pcVar5,(UErrorCode *)(sVar4 & 0xffffffff));
        }
        icu_76_godot::UVector::adoptElement(param_4,pUVar7);
        if (0 < *(int *)param_5) goto LAB_00100b18;
        pcVar5 = *(char **)pUVar7;
        pcVar6 = strchr(pcVar5,0x5f);
        *pcVar6 = '\0';
        pcVar11 = pcVar6 + 1;
        __s = strchr(pcVar11,0x5f);
        pcVar13 = pcVar11;
        if (__s == (char *)0x0) {
          uVar10 = strlen(pcVar11);
          if (uVar10 == 4) {
            cVar1 = uprv_isASCIILetter_76_godot((int)pcVar6[1]);
            if (cVar1 == '\0') goto LAB_00100ec8;
LAB_00100f04:
            iVar2 = strcmp(pcVar5,"und");
            if (iVar2 == 0) {
              pcVar6 = *(char **)this;
              __s1 = *(char **)(this + 8);
              local_d0 = (char *)0x0;
              pcVar9 = (char *)0x0;
              pcVar5 = pcVar6;
              pcVar13 = __s;
            }
            else {
              __s1 = *(char **)(this + 8);
              pcVar6 = *(char **)this;
              local_d0 = (char *)0x0;
              pcVar9 = (char *)0x0;
              pcVar13 = __s;
            }
            goto LAB_00100a6b;
          }
          pcVar12 = (char *)0x0;
          pcVar6 = __s;
          if (1 < uVar10 - 2) goto LAB_00100a2b;
          iVar2 = strcmp(pcVar5,"und");
          if (iVar2 == 0) {
            pcVar6 = *(char **)this;
            __s1 = *(char **)(this + 8);
            local_d0 = (char *)0x0;
            pcVar5 = pcVar6;
            __s2 = __s1;
          }
          else {
            pcVar6 = *(char **)this;
            __s1 = *(char **)(this + 8);
            local_d0 = (char *)0x0;
            __s2 = __s1;
          }
        }
        else {
          *__s = '\0';
          uVar10 = (long)__s - (long)pcVar11;
          if (uVar10 == 4) {
            cVar1 = uprv_isASCIILetter_76_godot((int)pcVar6[1]);
            if (cVar1 != '\0') {
              pcVar6 = strchr(__s,0x5f);
              pcVar12 = pcVar11;
              if (pcVar6 == (char *)0x0) {
                uVar10 = strlen(__s);
                if (uVar10 - 2 < 2) goto LAB_00100f04;
                pcVar6 = (char *)0x0;
                pcVar11 = __s;
                goto LAB_00100a2b;
              }
              *pcVar6 = '\0';
              uVar10 = (long)pcVar6 - (long)__s;
              pcVar13 = __s;
              __s = pcVar6;
              goto joined_r0x00100de6;
            }
LAB_00100ec8:
            pcVar12 = (char *)0x0;
LAB_00100a35:
            pcVar13 = (char *)0x0;
            pcVar9 = pcVar11;
            local_d0 = __s;
          }
          else {
            pcVar12 = (char *)0x0;
joined_r0x00100de6:
            pcVar6 = __s;
            pcVar11 = pcVar13;
            if (uVar10 - 2 < 2) {
              local_d0 = strchr(__s,0x5f);
              if (local_d0 == (char *)0x0) {
                uVar10 = strlen(__s);
              }
              else {
                *local_d0 = '\0';
                uVar10 = (long)local_d0 - (long)__s;
              }
              pcVar9 = __s;
              if (uVar10 < 4) {
                pcVar9 = (char *)0x0;
                local_d0 = __s;
              }
            }
            else {
LAB_00100a2b:
              __s = pcVar6;
              if (3 < uVar10) goto LAB_00100a35;
              pcVar13 = (char *)0x0;
              pcVar9 = (char *)0x0;
              local_d0 = pcVar11;
            }
          }
          iVar2 = strcmp(pcVar5,"und");
          pcVar6 = *(char **)this;
          __s1 = *(char **)(this + 8);
          if (iVar2 == 0) {
            pcVar5 = pcVar6;
          }
          __s = pcVar9;
          pcVar11 = pcVar12;
          __s2 = __s1;
          if (pcVar12 != (char *)0x0) {
LAB_00100a6b:
            __s = pcVar9;
            __s2 = __s1;
            if ((*pcVar11 != '\0') && (__s1 == (char *)0x0)) {
              __s1 = (char *)0x0;
              __s2 = pcVar11;
            }
          }
        }
        bVar14 = pcVar5 == (char *)0x0;
        pcVar11 = *(char **)(this + 0x10);
        if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) goto LAB_00100b3b;
        if (pcVar11 != (char *)0x0) goto LAB_00100b46;
      }
      else {
LAB_00100b18:
        __s1 = *(char **)(this + 8);
        pcVar11 = *(char **)(this + 0x10);
        bVar14 = true;
        local_d0 = (char *)0x0;
        pcVar6 = *(char **)this;
        pcVar5 = (char *)0x0;
        __s = (char *)0x0;
        __s2 = __s1;
LAB_00100b3b:
        pcVar13 = (char *)0x0;
        if (pcVar3 == (char *)0x0) {
LAB_00100b46:
          pcVar13 = pcVar11;
        }
      }
      if (__s != (char *)0x0) {
        if (*__s == '\0') {
          __s = (char *)0x0;
        }
        else if (__s_00 != (char *)0x0) {
          __s = __s_00;
        }
      }
      if ((((pcVar5 == (char *)0x0 && pcVar6 == (char *)0x0) ||
           (((pcVar6 == (char *)0x0) == bVar14 && (iVar2 = strcmp(pcVar6,pcVar5), iVar2 == 0)))) &&
          ((__s2 == (char *)0x0 && __s1 == (char *)0x0 ||
           (((__s1 == (char *)0x0) == (__s2 == (char *)0x0) &&
            (iVar2 = strcmp(__s1,__s2), iVar2 == 0)))))) &&
         ((pcVar13 == (char *)0x0 && pcVar11 == (char *)0x0 ||
          (((pcVar11 == (char *)0x0) == (pcVar13 == (char *)0x0) &&
           (iVar2 = strcmp(pcVar11,pcVar13), iVar2 == 0)))))) {
        if (__s_00 == (char *)0x0 && __s == (char *)0x0) {
LAB_00100c4b:
          if (local_d0 == (char *)0x0) goto LAB_00100cb8;
          goto LAB_00100c53;
        }
        if ((__s_00 == (char *)0x0) != (__s == (char *)0x0)) goto LAB_00100c53;
        iVar2 = strcmp(__s_00,__s);
        if (iVar2 == 0) goto LAB_00100c4b;
        *(char **)this = pcVar5;
        *(char **)(this + 0x10) = pcVar13;
        *(char **)(this + 8) = __s2;
LAB_00100c75:
        if (*__s == '\0') {
LAB_00100cf8:
          icu_76_godot::UVector::removeElementAt((int)this + 0x20);
          uVar8 = 1;
          goto LAB_00100c95;
        }
        icu_76_godot::UVector::setElementAt(this + 0x20,(int)__s);
      }
      else {
LAB_00100c53:
        *(char **)this = pcVar5;
        *(char **)(this + 0x10) = pcVar13;
        *(char **)(this + 8) = __s2;
        if (__s_00 != (char *)0x0) {
          if (__s != (char *)0x0) goto LAB_00100c75;
          goto LAB_00100cf8;
        }
      }
      uVar8 = 1;
      goto LAB_00100c95;
    }
LAB_00100cb8:
    if ((char)local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
    local_ec = local_ec + 1;
    if (local_ec == local_c4) break;
  }
LAB_00100798:
  uVar8 = 0;
LAB_0010079a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* (anonymous namespace)::locale_cleanup() */

undefined8 (anonymous_namespace)::locale_cleanup(void)

{
  UObject *this;
  UObject *pUVar1;
  UObject *pUVar2;
  void *in_RSI;
  
  if (icu_76_godot::gLocaleCache != (UObject *)0x0) {
    this = icu_76_godot::gLocaleCache + *(long *)(icu_76_godot::gLocaleCache + -8) * 0xe0;
    if (icu_76_godot::gLocaleCache != this) {
      pUVar2 = this + -0xb0;
      pUVar1 = this;
      do {
        while( true ) {
          this = pUVar1 + -0xe0;
          if ((code *)**(undefined8 **)(pUVar1 + -0xe0) == icu_76_godot::Locale::~Locale) break;
          pUVar2 = pUVar2 + -0xe0;
          (*(code *)**(undefined8 **)(pUVar1 + -0xe0))(this);
          pUVar1 = this;
          if (icu_76_godot::gLocaleCache == this) goto LAB_001010b0;
        }
        *(undefined ***)this = &PTR__Locale_00108690;
        if ((*(UObject **)(pUVar1 + -0x10) != *(UObject **)(pUVar1 + -0xb8)) &&
           (*(UObject **)(pUVar1 + -0x10) != pUVar2)) {
          uprv_free_76_godot();
        }
        *(undefined8 *)(pUVar1 + -0x10) = 0;
        if (*(UObject **)(pUVar1 + -0xb8) != pUVar2) {
          uprv_free_76_godot();
          *(undefined8 *)(pUVar1 + -0xb8) = 0;
        }
        pUVar2 = pUVar2 + -0xe0;
        icu_76_godot::UObject::~UObject(this);
        pUVar1 = this;
      } while (icu_76_godot::gLocaleCache != this);
    }
LAB_001010b0:
    icu_76_godot::UMemory::operator_delete__((UMemory *)(this + -8),in_RSI);
  }
  icu_76_godot::gLocaleCache = (UObject *)0x0;
  LOCK();
  icu_76_godot::gLocaleCacheInitOnce = 0;
  UNLOCK();
  if (icu_76_godot::gDefaultLocalesHashT != 0) {
    uhash_close_76_godot();
    icu_76_godot::gDefaultLocalesHashT = 0;
  }
  icu_76_godot::gDefaultLocale = 0;
  return 1;
}



/* icu_76_godot::Locale::~Locale() */

void __thiscall icu_76_godot::Locale::~Locale(Locale *this)

{
  Locale *pLVar1;
  void *in_RSI;
  Locale *pLVar2;
  
  *(undefined ***)this = &PTR__Locale_00108690;
  pLVar1 = *(Locale **)(this + 0xd0);
  pLVar2 = *(Locale **)(this + 0x28);
  if (pLVar1 == pLVar2) {
LAB_0010114c:
    *(undefined8 *)(this + 0xd0) = 0;
    if (pLVar2 == this + 0x30) goto LAB_0010115c;
  }
  else {
    if (pLVar1 != this + 0x30) {
      uprv_free_76_godot(pLVar1);
      pLVar2 = *(Locale **)(this + 0x28);
      goto LAB_0010114c;
    }
    *(undefined8 *)(this + 0xd0) = 0;
  }
  uprv_free_76_godot();
  *(undefined8 *)(this + 0x28) = 0;
LAB_0010115c:
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::Locale::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::Locale const&) [clone .part.0] */

void __thiscall icu_76_godot::Locale::operator=(Locale *this,Locale *param_1)

{
  Locale *pLVar1;
  long lVar2;
  Locale *pLVar3;
  Locale *pLVar4;
  
  pLVar4 = *(Locale **)(this + 0xd0);
  pLVar3 = *(Locale **)(this + 0x28);
  pLVar1 = this + 0x30;
  if (pLVar4 == pLVar3) {
LAB_001011d3:
    *(undefined8 *)(this + 0xd0) = 0;
    pLVar4 = pLVar1;
    if (pLVar3 != pLVar1) goto LAB_001012b6;
  }
  else {
    if (pLVar4 != pLVar1) {
      uprv_free_76_godot(pLVar4);
      pLVar3 = *(Locale **)(this + 0x28);
      goto LAB_001011d3;
    }
    *(undefined8 *)(this + 0xd0) = 0;
LAB_001012b6:
    uprv_free_76_godot();
    *(Locale **)(this + 0x28) = pLVar4;
  }
  this[0x30] = (Locale)0x0;
  this[8] = (Locale)0x0;
  this[0x14] = (Locale)0x0;
  this[0x1a] = (Locale)0x0;
  this[0xd8] = (Locale)0x1;
  pLVar1 = *(Locale **)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = 0;
  if (pLVar1 == param_1 + 0x30) {
    __strcpy_chk(pLVar4,pLVar1,0x9d);
LAB_0010122d:
    lVar2 = *(long *)(param_1 + 0xd0);
    if (lVar2 == *(long *)(param_1 + 0x28)) {
LAB_001012e1:
      *(undefined8 *)(this + 0xd0) = *(undefined8 *)(this + 0x28);
      goto LAB_00101254;
    }
  }
  else {
    if (pLVar1 != (Locale *)0x0) {
      lVar2 = uprv_strdup_76_godot();
      *(long *)(this + 0x28) = lVar2;
      if (lVar2 == 0) {
        return;
      }
      goto LAB_0010122d;
    }
    *(undefined8 *)(this + 0x28) = 0;
    lVar2 = *(long *)(param_1 + 0xd0);
    if (lVar2 == *(long *)(param_1 + 0x28)) goto LAB_001012e1;
  }
  if (lVar2 != 0) {
    lVar2 = uprv_strdup_76_godot();
    *(long *)(this + 0xd0) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
LAB_00101254:
  __strcpy_chk(this + 8,param_1 + 8,0xc);
  __strcpy_chk(this + 0x14,param_1 + 0x14,6);
  __strcpy_chk(this + 0x1a,param_1 + 0x1a,4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  this[0xd8] = param_1[0xd8];
  return;
}



/* (anonymous namespace)::deleteLocale(void*) */

void __thiscall (anonymous_namespace)::deleteLocale(_anonymous_namespace_ *this,void *param_1)

{
  _anonymous_namespace_ *p_Var1;
  _anonymous_namespace_ *p_Var2;
  
  if (this == (_anonymous_namespace_ *)0x0) {
    return;
  }
  if (*(code **)(*(long *)this + 8) != icu_76_godot::Locale::~Locale) {
                    /* WARNING: Could not recover jumptable at 0x001013be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  *(undefined ***)this = &PTR__Locale_00108690;
  p_Var1 = *(_anonymous_namespace_ **)(this + 0xd0);
  p_Var2 = *(_anonymous_namespace_ **)(this + 0x28);
  if (p_Var1 == p_Var2) {
LAB_00101368:
    *(undefined8 *)(this + 0xd0) = 0;
    if (p_Var2 == this + 0x30) goto LAB_00101378;
  }
  else {
    if (p_Var1 != this + 0x30) {
      uprv_free_76_godot(p_Var1);
      p_Var2 = *(_anonymous_namespace_ **)(this + 0x28);
      goto LAB_00101368;
    }
    *(undefined8 *)(this + 0xd0) = 0;
  }
  uprv_free_76_godot();
  *(undefined8 *)(this + 0x28) = 0;
LAB_00101378:
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,param_1);
  return;
}



/* icu_76_godot::Locale::getStaticClassID() */

undefined1 * icu_76_godot::Locale::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::Locale::Locale(icu_76_godot::Locale::ELocaleType) */

void __thiscall icu_76_godot::Locale::Locale(Locale *this)

{
  Locale *pLVar1;
  
  pLVar1 = this + 0x30;
  *(undefined ***)this = &PTR__Locale_00108690;
  *(Locale **)(this + 0x28) = pLVar1;
  *(undefined8 *)(this + 0xd0) = 0;
  uprv_free_76_godot(0);
  *(undefined8 *)(this + 0xd0) = 0;
  if (pLVar1 != *(Locale **)(this + 0x28)) {
    uprv_free_76_godot();
    *(Locale **)(this + 0x28) = pLVar1;
  }
  this[0x30] = (Locale)0x0;
  this[8] = (Locale)0x0;
  this[0x14] = (Locale)0x0;
  this[0x1a] = (Locale)0x0;
  this[0xd8] = (Locale)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}



/* icu_76_godot::Locale::Locale(icu_76_godot::Locale const&) */

void __thiscall icu_76_godot::Locale::Locale(Locale *this,Locale *param_1)

{
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined ***)this = &PTR__Locale_00108690;
  *(Locale **)(this + 0x28) = this + 0x30;
  if (this != param_1) {
    operator=(this,param_1);
    return;
  }
  return;
}



/* icu_76_godot::Locale::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::Locale const&) */

Locale * __thiscall icu_76_godot::Locale::operator=(Locale *this,Locale *param_1)

{
  if (this != param_1) {
    operator=(this,param_1);
  }
  return this;
}



/* icu_76_godot::Locale::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::Locale&&) */

Locale * __thiscall icu_76_godot::Locale::operator=(Locale *this,Locale *param_1)

{
  Locale *pLVar1;
  Locale *pLVar2;
  Locale *pLVar3;
  Locale *pLVar4;
  
  pLVar3 = *(Locale **)(this + 0xd0);
  pLVar1 = this + 0x30;
  pLVar4 = *(Locale **)(this + 0x28);
  if (pLVar3 == pLVar4) {
LAB_001014e3:
    if (pLVar1 == pLVar4) goto LAB_001014f0;
  }
  else if (pLVar3 != pLVar1) {
    uprv_free_76_godot(pLVar3);
    pLVar4 = *(Locale **)(this + 0x28);
    goto LAB_001014e3;
  }
  uprv_free_76_godot();
  pLVar4 = pLVar1;
LAB_001014f0:
  pLVar1 = param_1 + 0x30;
  if ((*(Locale **)(param_1 + 0x28) == pLVar1) ||
     (pLVar3 = *(Locale **)(param_1 + 0x28), pLVar1 == *(Locale **)(param_1 + 0xd0))) {
    pLVar4 = (Locale *)__strcpy_chk(pLVar4,pLVar1,0x9d);
    pLVar3 = *(Locale **)(param_1 + 0x28);
    if (pLVar1 == *(Locale **)(param_1 + 0x28)) {
      pLVar3 = pLVar4;
    }
  }
  *(Locale **)(this + 0x28) = pLVar3;
  pLVar2 = *(Locale **)(param_1 + 0xd0);
  if ((pLVar1 != pLVar2) && (pLVar4 = pLVar2, pLVar2 == *(Locale **)(param_1 + 0x28))) {
    pLVar4 = pLVar3;
  }
  *(Locale **)(this + 0xd0) = pLVar4;
  __strcpy_chk(this + 8,param_1 + 8,0xc);
  __strcpy_chk(this + 0x14,param_1 + 0x14,6);
  __strcpy_chk(this + 0x1a,param_1 + 0x1a,4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  this[0xd8] = param_1[0xd8];
  *(Locale **)(param_1 + 0x28) = pLVar1;
  *(Locale **)(param_1 + 0xd0) = pLVar1;
  return this;
}



/* icu_76_godot::Locale::Locale(icu_76_godot::Locale&&) */

void __thiscall icu_76_godot::Locale::Locale(Locale *this,Locale *param_1)

{
  *(undefined ***)this = &PTR__Locale_00108690;
  *(Locale **)(this + 0x28) = this + 0x30;
  *(Locale **)(this + 0xd0) = this + 0x30;
  operator=(this,param_1);
  return;
}



/* icu_76_godot::Locale::clone() const */

Locale * icu_76_godot::Locale::clone(void)

{
  Locale *this;
  ulong in_RSI;
  Locale *in_RDI;
  
  this = (Locale *)icu_76_godot::UMemory::operator_new((UMemory *)0xe0,in_RSI);
  if (this != (Locale *)0x0) {
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined ***)this = &PTR__Locale_00108690;
    *(Locale **)(this + 0x28) = this + 0x30;
    if (this != in_RDI) {
      operator=(this,in_RDI);
    }
  }
  return this;
}



/* icu_76_godot::Locale::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::Locale const&) const */

undefined8 __thiscall icu_76_godot::Locale::operator==(Locale *this,Locale *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = strcmp(*(char **)(param_1 + 0x28),*(char **)(this + 0x28));
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}



/* ulocimp_getKnownCanonicalizedLocaleForTest_76_godot(int&) */

undefined ** ulocimp_getKnownCanonicalizedLocaleForTest_76_godot(int *param_1)

{
  *param_1 = 0xb2;
  return &icu_76_godot::(anonymous_namespace)::KNOWN_CANONICALIZED;
}



/* icu_76_godot::Locale::initBaseName(UErrorCode&) */

void __thiscall icu_76_godot::Locale::initBaseName(Locale *this,UErrorCode *param_1)

{
  if (*(int *)param_1 < 1) {
    initBaseName(this,param_1);
    return;
  }
  return;
}



/* icu_76_godot::Locale::hashCode() const */

void __thiscall icu_76_godot::Locale::hashCode(Locale *this)

{
  char *__s;
  size_t sVar1;
  
  __s = *(char **)(this + 0x28);
  sVar1 = strlen(__s);
  ustr_hashCharsN_76_godot(__s,sVar1 & 0xffffffff);
  return;
}



/* icu_76_godot::Locale::setToBogus() */

void __thiscall icu_76_godot::Locale::setToBogus(Locale *this)

{
  Locale *pLVar1;
  Locale *pLVar2;
  Locale *pLVar3;
  
  pLVar1 = this + 0x30;
  pLVar2 = *(Locale **)(this + 0xd0);
  pLVar3 = *(Locale **)(this + 0x28);
  if (pLVar2 == pLVar3) {
LAB_00101702:
    *(undefined8 *)(this + 0xd0) = 0;
    pLVar2 = pLVar1;
    if (pLVar1 == pLVar3) goto LAB_00101712;
  }
  else {
    if (pLVar2 != pLVar1) {
      uprv_free_76_godot(pLVar2);
      pLVar3 = *(Locale **)(this + 0x28);
      goto LAB_00101702;
    }
    *(undefined8 *)(this + 0xd0) = 0;
  }
  uprv_free_76_godot();
  *(Locale **)(this + 0x28) = pLVar2;
LAB_00101712:
  this[0x30] = (Locale)0x0;
  this[8] = (Locale)0x0;
  this[0x14] = (Locale)0x0;
  this[0x1a] = (Locale)0x0;
  this[0xd8] = (Locale)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}



/* icu_76_godot::Locale::toLanguageTag(icu_76_godot::ByteSink&, UErrorCode&) const */

void __thiscall
icu_76_godot::Locale::toLanguageTag(Locale *this,ByteSink *param_1,UErrorCode *param_2)

{
  if (0 < *(int *)param_2) {
    return;
  }
  if (this[0xd8] != (Locale)0x0) {
    *(undefined4 *)param_2 = 1;
    return;
  }
  ulocimp_toLanguageTag_76_godot(*(char **)(this + 0x28),param_1,false,param_2);
  return;
}



/* icu_76_godot::Locale::getISO3Language() const */

void __thiscall icu_76_godot::Locale::getISO3Language(Locale *this)

{
  uloc_getISO3Language_76_godot(*(undefined8 *)(this + 0x28));
  return;
}



/* icu_76_godot::Locale::getISO3Country() const */

void __thiscall icu_76_godot::Locale::getISO3Country(Locale *this)

{
  uloc_getISO3Country_76_godot(*(undefined8 *)(this + 0x28));
  return;
}



/* icu_76_godot::Locale::getLCID() const */

void __thiscall icu_76_godot::Locale::getLCID(Locale *this)

{
  uloc_getLCID_76_godot(*(undefined8 *)(this + 0x28));
  return;
}



/* icu_76_godot::Locale::getISOCountries() */

void icu_76_godot::Locale::getISOCountries(void)

{
  uloc_getISOCountries_76_godot();
  return;
}



/* icu_76_godot::Locale::getISOLanguages() */

void icu_76_godot::Locale::getISOLanguages(void)

{
  uloc_getISOLanguages_76_godot();
  return;
}



/* icu_76_godot::Locale::createKeywords(UErrorCode&) const */

StringEnumeration * __thiscall
icu_76_godot::Locale::createKeywords(Locale *this,UErrorCode *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  StringEnumeration *this_00;
  long in_FS_OFFSET;
  long local_78;
  char local_6c;
  uint local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 < 1) {
    pcVar4 = *(char **)(this + 0x28);
    pcVar3 = strchr(pcVar4,0x40);
    pcVar4 = strchr(pcVar4,0x3d);
    if (pcVar3 != (char *)0x0) {
      if (pcVar3 < pcVar4) {
        ulocimp_getKeywords_76_godot((char *)&local_78,(char)pcVar3 + '\x01',true,(UErrorCode *)0x0)
        ;
        if ((*(int *)param_1 < 1) && (local_40 != 0)) {
          this_00 = (StringEnumeration *)
                    icu_76_godot::UMemory::operator_new((UMemory *)0xc0,(ulong)local_40);
          lVar2 = local_78;
          if (this_00 == (StringEnumeration *)0x0) {
            *(undefined4 *)param_1 = 7;
            goto LAB_00101860;
          }
          icu_76_godot::StringEnumeration::StringEnumeration(this_00);
          *(undefined4 *)(this_00 + 0x80) = 0x28;
          *(undefined2 *)(this_00 + 0x84) = 0;
          iVar1 = *(int *)param_1;
          *(undefined ***)this_00 = &PTR__KeywordEnumeration_001086b8;
          *(StringEnumeration **)(this_00 + 0x78) = this_00 + 0x85;
          *(undefined4 *)(this_00 + 0xb0) = 0;
          *(StringEnumeration **)(this_00 + 0xb8) = this_00 + 0x85;
          if ((iVar1 < 1) && (local_40 != 0)) {
            if ((lVar2 == 0) || ((int)local_40 < 0)) {
              *(undefined4 *)param_1 = 1;
            }
            else {
              icu_76_godot::CharString::append
                        ((char *)(this_00 + 0x78),(int)lVar2,(UErrorCode *)(ulong)local_40);
              *(undefined8 *)(this_00 + 0xb8) = *(undefined8 *)(this_00 + 0x78);
            }
          }
        }
        else {
LAB_00101860:
          this_00 = (StringEnumeration *)0x0;
        }
        if (local_6c != '\0') {
          uprv_free_76_godot(local_78);
        }
        goto LAB_00101888;
      }
      *(undefined4 *)param_1 = 3;
    }
  }
  this_00 = (StringEnumeration *)0x0;
LAB_00101888:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::createUnicodeKeywords(UErrorCode&) const */

StringEnumeration * __thiscall
icu_76_godot::Locale::createUnicodeKeywords(Locale *this,UErrorCode *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  StringEnumeration *this_00;
  long in_FS_OFFSET;
  long local_78;
  char local_6c;
  uint local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 < 1) {
    pcVar4 = *(char **)(this + 0x28);
    pcVar3 = strchr(pcVar4,0x40);
    pcVar4 = strchr(pcVar4,0x3d);
    if (pcVar3 != (char *)0x0) {
      if (pcVar3 < pcVar4) {
        ulocimp_getKeywords_76_godot((char *)&local_78,(char)pcVar3 + '\x01',true,(UErrorCode *)0x0)
        ;
        if ((*(int *)param_1 < 1) && (local_40 != 0)) {
          this_00 = (StringEnumeration *)
                    icu_76_godot::UMemory::operator_new((UMemory *)0xc0,(ulong)local_40);
          lVar2 = local_78;
          if (this_00 == (StringEnumeration *)0x0) {
            *(undefined4 *)param_1 = 7;
            goto LAB_001019f0;
          }
          icu_76_godot::StringEnumeration::StringEnumeration(this_00);
          *(undefined4 *)(this_00 + 0x80) = 0x28;
          *(undefined2 *)(this_00 + 0x84) = 0;
          iVar1 = *(int *)param_1;
          *(undefined ***)this_00 = &PTR__KeywordEnumeration_001086b8;
          *(StringEnumeration **)(this_00 + 0x78) = this_00 + 0x85;
          *(undefined4 *)(this_00 + 0xb0) = 0;
          *(StringEnumeration **)(this_00 + 0xb8) = this_00 + 0x85;
          if ((iVar1 < 1) && (local_40 != 0)) {
            if ((lVar2 == 0) || ((int)local_40 < 0)) {
              *(undefined4 *)param_1 = 1;
            }
            else {
              icu_76_godot::CharString::append
                        ((char *)(this_00 + 0x78),(int)lVar2,(UErrorCode *)(ulong)local_40);
              *(undefined8 *)(this_00 + 0xb8) = *(undefined8 *)(this_00 + 0x78);
            }
          }
          *(undefined ***)this_00 = &PTR__UnicodeKeywordEnumeration_00108720;
        }
        else {
LAB_001019f0:
          this_00 = (StringEnumeration *)0x0;
        }
        if (local_6c != '\0') {
          uprv_free_76_godot(local_78);
        }
        goto LAB_00101a18;
      }
      *(undefined4 *)param_1 = 3;
    }
  }
  this_00 = (StringEnumeration *)0x0;
LAB_00101a18:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::getKeywordValue(char const*, char*, int, UErrorCode&) const */

void icu_76_godot::Locale::getKeywordValue
               (char *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  uloc_getKeywordValue_76_godot(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* icu_76_godot::Locale::getKeywordValue(icu_76_godot::StringPiece, icu_76_godot::ByteSink&,
   UErrorCode&) const */

void icu_76_godot::Locale::getKeywordValue
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5)

{
  if (0 < *param_5) {
    return;
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    *param_5 = 1;
    return;
  }
  ulocimp_getKeywordValue_76_godot(*(undefined8 *)(param_1 + 0x28),(long)param_3,param_2);
  return;
}



/* icu_76_godot::Locale::getUnicodeKeywordValue(icu_76_godot::StringPiece, icu_76_godot::ByteSink&,
   UErrorCode&) const */

void icu_76_godot::Locale::getUnicodeKeywordValue
               (long param_1,undefined8 param_2,int param_3,long *param_4,int *param_5)

{
  long in_FS_OFFSET;
  int local_108 [2];
  undefined8 local_100;
  char local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  char local_d8;
  long local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  int local_90;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *param_5) goto LAB_00101b93;
  ulocimp_toLegacyKeyWithFallback_76_godot(local_108,(long)param_3,param_2);
  if (local_f8 == '\0') {
    *param_5 = 1;
    goto LAB_00101b93;
  }
  if (*param_5 < 1) {
    local_88 = (long)&local_7c + 1;
    local_7c = 0;
    local_80 = 0x28;
    local_50 = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink
              ((CharStringByteSink *)&local_e8,(CharString *)&local_88);
    local_e8 = &PTR__StringByteSink_00108658;
    if (*param_5 < 1) {
      if (*(char *)(param_1 + 0xd8) == '\0') {
        ulocimp_getKeywordValue_76_godot
                  (*(undefined8 *)(param_1 + 0x28),(long)local_108[0],local_100,
                   (CharStringByteSink *)&local_e8,param_5);
      }
      else {
        *param_5 = 1;
      }
    }
    icu_76_godot::CharString::CharString((CharString *)&local_c8,(CharString *)&local_88);
    local_e8 = &PTR__StringByteSink_00108658;
    icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)&local_e8);
    if ((char)local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
    if (0 < *param_5) goto LAB_00101c24;
    ulocimp_toBcpTypeWithFallback_76_godot
              ((CharStringByteSink *)&local_e8,(long)param_3,param_2,(long)local_90,local_c8);
    if (local_d8 == '\0') {
      *param_5 = 1;
      goto LAB_00101c24;
    }
    (**(code **)(*param_4 + 0x10))(param_4,local_e0,(ulong)local_e8 & 0xffffffff);
  }
  else {
    local_c8 = (long)&local_bc + 1;
    local_c0 = 0x28;
    local_90 = 0;
    local_bc = 0;
LAB_00101c24:
  }
  if ((char)local_bc != '\0') {
    uprv_free_76_godot(local_c8);
  }
LAB_00101b93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::getBaseName() const */

undefined8 __thiscall icu_76_godot::Locale::getBaseName(Locale *this)

{
  return *(undefined8 *)(this + 0xd0);
}



/* icu_76_godot::Locale::Iterator::~Iterator() */

void __thiscall icu_76_godot::Locale::Iterator::~Iterator(Iterator *this)

{
  return;
}



/* icu_76_godot::Locale::Iterator::~Iterator() */

void __thiscall icu_76_godot::Locale::Iterator::~Iterator(Iterator *this)

{
  operator_delete(this,8);
  return;
}



/* icu_76_godot::Locale::setKeywordValue(icu_76_godot::StringPiece, icu_76_godot::StringPiece,
   UErrorCode&) */

void icu_76_godot::Locale::setKeywordValue
               (Locale *param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
               UErrorCode *param_6)

{
  Locale *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  CheckedArrayByteSink local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_6 < 1) {
    if (param_3 == 0) {
      *(undefined4 *)param_6 = 1;
    }
    else {
      if (*(int *)param_6 == -0x7c) {
        *(undefined4 *)param_6 = 0;
      }
      pLVar1 = *(Locale **)(param_1 + 0x28);
      sVar5 = strlen((char *)pLVar1);
      iVar2 = (int)sVar5;
      iVar8 = iVar2 + 1;
      if (pLVar1 == param_1 + 0x30) {
        iVar8 = 0x9d;
      }
      lVar6 = locale_getKeywordsStart_76_godot(pLVar1);
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) {
        local_80 = 0;
        iVar3 = iVar2;
      }
      else {
        iVar3 = (int)lVar6 - (int)lVar7;
        local_80 = (long)(iVar2 - iVar3);
      }
      while( true ) {
        icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink
                  (local_68,(char *)(lVar7 + iVar3),(iVar8 - iVar3) + -1);
        iVar4 = ulocimp_setKeywordValue_76_godot
                          (local_80,*(long *)(param_1 + 0x28) + (long)iVar3,(long)param_3,param_2,
                           (long)param_5,param_4,local_68);
        if (*(int *)param_6 != 0xf) break;
        iVar8 = iVar3 + 1 + iVar4;
        lVar7 = uprv_malloc_76_godot((long)iVar8,param_6);
        if (lVar7 == 0) {
          *(undefined4 *)param_6 = 7;
          goto LAB_00101f64;
        }
        pLVar1 = *(Locale **)(param_1 + 0x28);
        __memcpy_chk(lVar7,pLVar1,(long)(iVar2 + 1),(long)iVar8);
        if (param_1 + 0x30 != pLVar1) {
          if (pLVar1 == *(Locale **)(param_1 + 0xd0)) {
            *(long *)(param_1 + 0xd0) = lVar7;
          }
          uprv_free_76_godot(pLVar1);
        }
        *(long *)(param_1 + 0x28) = lVar7;
        *(undefined4 *)param_6 = 0;
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
        lVar7 = *(long *)(param_1 + 0x28);
      }
      if (*(int *)param_6 < 1) {
        u_terminateChars_76_godot(*(undefined8 *)(param_1 + 0x28),iVar8,iVar3 + iVar4,param_6);
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
        if ((*(long *)(param_1 + 0xd0) == *(long *)(param_1 + 0x28)) && (*(int *)param_6 < 1)) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            initBaseName(param_1,param_6);
            return;
          }
          goto LAB_00102025;
        }
      }
      else {
LAB_00101f64:
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102025:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::setUnicodeKeywordValue(icu_76_godot::StringPiece,
   icu_76_godot::StringPiece, UErrorCode&) */

void icu_76_godot::Locale::setUnicodeKeywordValue
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
               int *param_6)

{
  long in_FS_OFFSET;
  undefined4 local_78 [2];
  undefined8 local_70;
  char local_68;
  undefined4 local_58 [2];
  undefined8 local_50;
  char local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 < 1) {
    ulocimp_toLegacyKeyWithFallback_76_godot(local_78,(long)param_3,param_2);
    if (local_68 != '\0') {
      if (param_5 == 0) {
        local_50 = 0;
        local_58[0] = 0;
      }
      else {
        ulocimp_toLegacyTypeWithFallback_76_godot
                  (local_58,(long)param_3,param_2,(long)param_5,param_4);
        if (local_48 == '\0') goto LAB_00102120;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        setKeywordValue(param_1,local_70,local_78[0],local_50,local_58[0],param_6);
        return;
      }
      goto LAB_0010212c;
    }
LAB_00102120:
    *param_6 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010212c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::(anonymous namespace)::AliasReplacer::replace(icu_76_godot::Locale const&,
   icu_76_godot::CharString&, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::(anonymous_namespace)::AliasReplacer::replace
          (AliasReplacer *this,Locale *param_1,CharString *param_2,UErrorCode *param_3)

{
  AliasReplacer *pAVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined **ppuVar8;
  UMemory *pUVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  UResourceBundle *pUVar14;
  UResourceBundle *pUVar15;
  UResourceBundle *pUVar16;
  UResourceBundle *pUVar17;
  UResourceBundle *pUVar18;
  Locale *pLVar19;
  char *pcVar20;
  CharString *__s;
  undefined8 uVar21;
  size_t sVar22;
  UErrorCode *pUVar23;
  long lVar24;
  char *pcVar25;
  long *plVar26;
  char *pcVar27;
  void *pvVar28;
  size_t sVar29;
  UErrorCode *pUVar30;
  Locale *pLVar31;
  long lVar32;
  long lVar33;
  UErrorCode *extraout_RDX;
  long lVar34;
  int iVar35;
  char *pcVar36;
  code *pcVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  long in_FS_OFFSET;
  code *pcVar41;
  undefined **local_4d0;
  UErrorCode *local_4b0;
  long local_4a0;
  UErrorCode *local_498;
  long local_488;
  long local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  long local_450;
  long local_448;
  long local_440;
  long local_438;
  int local_414;
  int local_410;
  int local_40c;
  int local_408;
  int local_404;
  long local_400;
  long local_3f8;
  long local_3f0;
  long local_3e8;
  long local_3e0;
  long local_3d8;
  long local_3d0;
  UErrorCode *local_3c8;
  uint local_3c0;
  undefined4 uStack_3bc;
  char local_3b8;
  long local_3a8 [6];
  undefined **local_378;
  uint local_370;
  undefined4 uStack_36c;
  UErrorCode *local_348;
  undefined4 local_340;
  undefined2 local_33c;
  int local_310;
  char *local_308;
  undefined4 local_300;
  undefined2 local_2fc;
  int local_2d0;
  char *local_2c8;
  undefined4 local_2c0;
  undefined2 local_2bc;
  int local_290;
  long local_288;
  undefined4 local_280;
  undefined2 local_27c;
  undefined4 local_250;
  long local_248;
  undefined4 local_240;
  undefined2 local_23c;
  undefined4 local_210;
  undefined **local_208;
  undefined4 local_200;
  undefined1 local_1fc [28];
  undefined1 *local_1e0;
  undefined1 local_1d8 [8];
  undefined4 local_1d0;
  undefined1 *local_138;
  undefined **local_128;
  undefined4 local_120;
  undefined1 local_11c [14];
  UErrorCode local_10e [14];
  char *local_100;
  char local_f8 [8];
  undefined4 local_f0;
  UMemory *local_d8;
  int local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  char local_bc;
  undefined1 local_b8 [64];
  char local_78;
  char *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    if ((AliasData::gInitOnce == 2) ||
       (cVar10 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&AliasData::gInitOnce),
       cVar10 == '\0')) {
      if (0 < DAT_001078a4) {
        *(int *)param_3 = DAT_001078a4;
        *(void **)(this + 0x48) = AliasData::gSingleton;
        goto LAB_0010219d;
      }
      iVar35 = *(int *)param_3;
    }
    else {
      pvVar28 = (void *)0x0;
      ucln_common_registerCleanup_76_godot(7,AliasData::cleanup);
      iVar35 = *(int *)param_3;
      if (iVar35 < 1) {
        lVar24 = ures_openDirect_76_godot(0,"metadata",param_3);
        lVar13 = ures_getByKey_76_godot(lVar24,"alias",0,param_3);
        pUVar14 = (UResourceBundle *)ures_getByKey_76_godot(lVar13,"language",0,param_3);
        pUVar15 = (UResourceBundle *)ures_getByKey_76_godot(lVar13,"script",0,param_3);
        pUVar16 = (UResourceBundle *)ures_getByKey_76_godot(lVar13,"territory",0,param_3);
        pUVar17 = (UResourceBundle *)ures_getByKey_76_godot(lVar13,"variant",0,param_3);
        pUVar18 = (UResourceBundle *)ures_getByKey_76_godot(lVar13,"subdivision",0,param_3);
        if (*(int *)param_3 < 1) {
          pcVar37 = (code *)&uhash_hashUChars_76_godot;
          local_c8 = local_b8;
          local_414 = 0;
          local_410 = 0;
          local_40c = 0;
          local_408 = 0;
          local_404 = 0;
          local_d8 = (UMemory *)0x0;
          local_d0 = 0;
          local_c0 = 8;
          local_bc = '\0';
          local_78 = '\0';
          uhash_init_76_godot((UniqueCharStrings *)&local_128,&uhash_hashUChars_76_godot,
                              &uhash_compareUChars_76_godot,&uhash_compareLong_76_godot);
          if (*(int *)param_3 < 1) {
            local_d8 = (UMemory *)
                       icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pcVar37);
            if (local_d8 == (UMemory *)0x0) {
              *(undefined4 *)param_3 = 7;
              local_d8 = (UMemory *)0x0;
              goto LAB_00102a9d;
            }
            *(undefined4 *)(local_d8 + 8) = 0x28;
            *(undefined2 *)(local_d8 + 0xc) = 0;
            iVar35 = *(int *)param_3;
            *(UMemory **)local_d8 = local_d8 + 0xd;
            *(undefined4 *)(local_d8 + 0x38) = 0;
            local_400 = 0;
            local_3f8 = 0;
            if (0 < iVar35) goto LAB_00102a9d;
            pcVar37 = (code *)&local_128;
            AliasDataBuilder::readAlias
                      (pUVar14,(UniqueCharStrings *)&local_128,(LocalMemory *)&local_400,
                       (LocalMemory *)&local_3f8,&local_414,
                       AliasDataBuilder::
                       readLanguageAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                       ::{lambda(char_const*)#1}::_FUN,
                       AliasDataBuilder::
                       readLanguageAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                       ::{lambda(char16_t_const*)#1}::_FUN,param_3);
            lVar40 = local_3f8;
            lVar34 = local_400;
            local_438 = local_400;
            local_3f0 = 0;
            local_3e8 = 0;
            local_480 = local_3f8;
            if (0 < *(int *)param_3) goto LAB_00102ab2;
            pcVar37 = AliasDataBuilder::
                      readScriptAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                      ::{lambda(char16_t_const*)#1}::_FUN;
            AliasDataBuilder::readAlias
                      (pUVar15,(UniqueCharStrings *)&local_128,(LocalMemory *)&local_3f0,
                       (LocalMemory *)&local_3e8,&local_410,
                       AliasDataBuilder::
                       readScriptAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                       ::{lambda(char_const*)#1}::_FUN,
                       AliasDataBuilder::
                       readScriptAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                       ::{lambda(char16_t_const*)#1}::_FUN,param_3);
            lVar3 = local_3e8;
            lVar33 = local_3f0;
            local_448 = local_3f0;
            local_3e0 = 0;
            local_3d8 = 0;
            local_4a0 = local_3e8;
            if (0 < *(int *)param_3) goto LAB_00102ac7;
            pcVar37 = (code *)&local_128;
            AliasDataBuilder::readAlias
                      (pUVar16,(UniqueCharStrings *)&local_128,(LocalMemory *)&local_3e0,
                       (LocalMemory *)&local_3d8,&local_40c,
                       AliasDataBuilder::
                       readTerritoryAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                       ::{lambda(char_const*)#1}::_FUN,
                       AliasDataBuilder::
                       readTerritoryAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                       ::{lambda(char16_t_const*)#1}::_FUN,param_3);
            lVar5 = local_3d8;
            lVar4 = local_3e0;
            local_450 = local_3e0;
            local_3d0 = 0;
            local_3c8 = (UErrorCode *)0x0;
            local_488 = local_3d8;
            if (0 < *(int *)param_3) goto LAB_00102adc;
            pcVar37 = (code *)&local_128;
            AliasDataBuilder::readAlias
                      (pUVar17,(UniqueCharStrings *)&local_128,(LocalMemory *)&local_3d0,
                       (LocalMemory *)&local_3c8,&local_408,
                       AliasDataBuilder::
                       readVariantAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                       ::{lambda(char_const*)#1}::_FUN,
                       AliasDataBuilder::
                       readVariantAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                       ::{lambda(char16_t_const*)#1}::_FUN,param_3);
            pUVar30 = local_3c8;
            lVar6 = local_3d0;
            local_440 = local_3d0;
            local_3a8[0] = 0;
            local_378 = (undefined **)0x0;
            local_498 = local_3c8;
            if (*(int *)param_3 < 1) {
              pcVar41 = AliasDataBuilder::
                        readSubdivisionAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                        ::{lambda(char16_t_const*)#1}::_FUN;
              pcVar37 = (code *)&local_128;
              AliasDataBuilder::readAlias
                        (pUVar18,(UniqueCharStrings *)&local_128,(LocalMemory *)local_3a8,
                         (LocalMemory *)&local_378,&local_404,
                         AliasDataBuilder::
                         readSubdivisionAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                         ::{lambda(char_const*)#1}::_FUN,
                         AliasDataBuilder::
                         readSubdivisionAlias(UResourceBundle*,icu_76_godot::UniqueCharStrings*,icu_76_godot::LocalMemory<char_const*>&,icu_76_godot::LocalMemory<int>&,int&,UErrorCode&)
                         ::{lambda(char16_t_const*)#1}::_FUN,param_3);
              if (*(int *)param_3 < 1) {
                local_78 = '\x01';
                local_468 = uhash_openSize_76_godot
                                      (&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,
                                       &uhash_compareChars_76_godot,0x1ea,param_3,pcVar41);
                iVar35 = local_414;
                if (*(int *)param_3 < 1) {
                  lVar39 = 0;
                  do {
                    if (iVar35 <= (int)lVar39) break;
                    iVar38 = *(int *)(lVar40 + lVar39 * 4);
                    if ((local_78 == '\0') || (iVar38 < 1)) {
                      lVar32 = 0;
                    }
                    else {
                      lVar32 = (long)iVar38 + *(long *)local_d8;
                    }
                    lVar2 = lVar39 * 8;
                    lVar39 = lVar39 + 1;
                    uhash_put_76_godot(local_468,*(undefined8 *)(lVar34 + lVar2),lVar32,param_3);
                  } while (*(int *)param_3 < 1);
                }
                local_460 = uhash_openSize_76_godot
                                      (&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,
                                       &uhash_compareChars_76_godot,1,param_3);
                iVar35 = local_410;
                if (*(int *)param_3 < 1) {
                  lVar34 = 0;
                  do {
                    if (iVar35 <= (int)lVar34) break;
                    iVar38 = *(int *)(lVar3 + lVar34 * 4);
                    if ((local_78 == '\0') || (iVar38 < 1)) {
                      lVar40 = 0;
                    }
                    else {
                      lVar40 = (long)iVar38 + *(long *)local_d8;
                    }
                    lVar39 = lVar34 * 8;
                    lVar34 = lVar34 + 1;
                    uhash_put_76_godot(local_460,*(undefined8 *)(lVar33 + lVar39),lVar40,param_3);
                  } while (*(int *)param_3 < 1);
                }
                local_470 = uhash_openSize_76_godot
                                      (&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,
                                       &uhash_compareChars_76_godot,0x28a,param_3);
                iVar35 = local_40c;
                if (*(int *)param_3 < 1) {
                  lVar34 = 0;
                  do {
                    if (iVar35 <= (int)lVar34) break;
                    iVar38 = *(int *)(lVar5 + lVar34 * 4);
                    if ((local_78 == '\0') || (iVar38 < 1)) {
                      lVar40 = 0;
                    }
                    else {
                      lVar40 = (long)iVar38 + *(long *)local_d8;
                    }
                    lVar33 = lVar34 * 8;
                    lVar34 = lVar34 + 1;
                    uhash_put_76_godot(local_470,*(undefined8 *)(lVar4 + lVar33),lVar40,param_3);
                  } while (*(int *)param_3 < 1);
                }
                local_478 = uhash_openSize_76_godot
                                      (&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,
                                       &uhash_compareChars_76_godot,2,param_3);
                iVar35 = local_408;
                if (*(int *)param_3 < 1) {
                  lVar34 = 0;
                  do {
                    if (iVar35 <= (int)lVar34) break;
                    if ((local_78 == '\0') || (*(int *)(pUVar30 + lVar34 * 4) < 1)) {
                      lVar40 = 0;
                    }
                    else {
                      lVar40 = (long)*(int *)(pUVar30 + lVar34 * 4) + *(long *)local_d8;
                    }
                    lVar33 = lVar34 * 8;
                    lVar34 = lVar34 + 1;
                    uhash_put_76_godot(local_478,*(undefined8 *)(lVar6 + lVar33),lVar40,param_3);
                  } while (*(int *)param_3 < 1);
                }
                pcVar37 = (code *)&uhash_compareChars_76_godot;
                uVar21 = uhash_openSize_76_godot
                                   (&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,
                                    &uhash_compareChars_76_godot,2);
                ppuVar8 = local_378;
                lVar34 = local_3a8[0];
                iVar35 = local_404;
                local_4d0 = local_378;
                if (*(int *)param_3 < 1) {
                  lVar40 = 0;
                  do {
                    if (iVar35 <= (int)lVar40) {
                      pvVar28 = icu_76_godot::UMemory::operator_new((UMemory *)0x38,(ulong)pcVar37);
                      pUVar9 = local_d8;
                      if (pvVar28 != (void *)0x0) {
                        local_d8 = (UMemory *)0x0;
                        *(undefined8 *)((long)pvVar28 + 0x28) = uVar21;
                        uVar21 = 0;
                        *(undefined8 *)((long)pvVar28 + 8) = local_468;
                        *(UMemory **)((long)pvVar28 + 0x30) = pUVar9;
                        *(undefined8 *)((long)pvVar28 + 0x10) = local_460;
                        *(undefined8 *)((long)pvVar28 + 0x18) = local_470;
                        *(undefined8 *)((long)pvVar28 + 0x20) = local_478;
                        uhash_close_76_godot(0);
                        uhash_close_76_godot(0);
                        uhash_close_76_godot(0);
                        uhash_close_76_godot(0);
                        uhash_close_76_godot(0);
                        local_478 = 0;
                        local_470 = 0;
                        local_460 = 0;
                        local_468 = 0;
                        goto LAB_0010417c;
                      }
                      *(undefined4 *)param_3 = 7;
                      break;
                    }
                    iVar38 = *(int *)((long)ppuVar8 + lVar40 * 4);
                    if ((iVar38 < 1) || (local_78 == '\0')) {
                      lVar33 = 0;
                    }
                    else {
                      lVar33 = (long)iVar38 + *(long *)local_d8;
                    }
                    pcVar37 = *(code **)(lVar34 + lVar40 * 8);
                    lVar40 = lVar40 + 1;
                    uhash_put_76_godot(uVar21,pcVar37,lVar33,param_3);
                  } while (*(int *)param_3 < 1);
                }
                pvVar28 = (void *)0x0;
LAB_0010417c:
                uhash_close_76_godot(uVar21);
                uhash_close_76_godot(local_478);
                uhash_close_76_godot(local_470);
                uhash_close_76_godot(local_460);
                uhash_close_76_godot(local_468);
              }
              else {
                local_4d0 = local_378;
                pvVar28 = (void *)0x0;
                lVar34 = local_3a8[0];
              }
            }
            else {
              local_4d0 = (undefined **)0x0;
              lVar34 = 0;
              pvVar28 = (void *)0x0;
            }
          }
          else {
LAB_00102a9d:
            local_480 = 0;
            local_438 = 0;
LAB_00102ab2:
            local_448 = 0;
            local_4a0 = 0;
LAB_00102ac7:
            local_450 = 0;
            local_488 = 0;
LAB_00102adc:
            local_498 = (UErrorCode *)0x0;
            pvVar28 = (void *)0x0;
            local_440 = 0;
            local_4d0 = (undefined **)0x0;
            lVar34 = 0;
          }
          uprv_free_76_godot(local_4d0);
          uprv_free_76_godot(lVar34);
          uprv_free_76_godot(local_498);
          uprv_free_76_godot(local_440);
          uprv_free_76_godot(local_488);
          uprv_free_76_godot(local_450);
          uprv_free_76_godot(local_4a0);
          uprv_free_76_godot(local_448);
          uprv_free_76_godot(local_480);
          uprv_free_76_godot(local_438);
          uhash_close_76_godot((UniqueCharStrings *)&local_128);
          pUVar9 = local_d8;
          if (local_d8 != (UMemory *)0x0) {
            if (local_d8[0xc] != (UMemory)0x0) {
              uprv_free_76_godot(*(undefined8 *)local_d8);
            }
            icu_76_godot::UMemory::operator_delete(pUVar9,pcVar37);
          }
          lVar34 = 0;
          if (0 < local_d0) {
            do {
              if (*(long **)(local_c8 + lVar34 * 8) != (long *)0x0) {
                (**(code **)(**(long **)(local_c8 + lVar34 * 8) + 8))();
              }
              lVar34 = lVar34 + 1;
            } while ((int)lVar34 < local_d0);
          }
          if (local_bc != '\0') {
            uprv_free_76_godot(local_c8);
          }
        }
        if (pUVar18 != (UResourceBundle *)0x0) {
          ures_close_76_godot();
        }
        if (pUVar17 != (UResourceBundle *)0x0) {
          ures_close_76_godot();
        }
        if (pUVar16 != (UResourceBundle *)0x0) {
          ures_close_76_godot();
        }
        if (pUVar15 != (UResourceBundle *)0x0) {
          ures_close_76_godot();
        }
        if (pUVar14 != (UResourceBundle *)0x0) {
          ures_close_76_godot();
        }
        if (lVar13 != 0) {
          ures_close_76_godot();
        }
        if (lVar24 == 0) {
          iVar35 = *(int *)param_3;
        }
        else {
          ures_close_76_godot(lVar24);
          iVar35 = *(int *)param_3;
        }
      }
      DAT_001078a4 = iVar35;
      AliasData::gSingleton = pvVar28;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&AliasData::gInitOnce);
      iVar35 = *(int *)param_3;
    }
    *(void **)(this + 0x48) = AliasData::gSingleton;
    if (iVar35 < 1) {
      pLVar31 = (Locale *)0x0;
      *(undefined4 *)(param_2 + 0x38) = 0;
      iVar35 = 0x107b1e;
      **(undefined1 **)param_2 = 0;
      *(Locale **)this = param_1 + 8;
      pLVar19 = param_1 + 8;
      if (param_1[8] == (Locale)0x0) {
        pLVar19 = pLVar31;
      }
      *(Locale **)this = pLVar19;
      *(Locale **)(this + 8) = param_1 + 0x14;
      pLVar19 = param_1 + 0x14;
      if (param_1[0x14] == (Locale)0x0) {
        pLVar19 = pLVar31;
      }
      *(Locale **)(this + 8) = pLVar19;
      *(Locale **)(this + 0x10) = param_1 + 0x1a;
      pLVar19 = param_1 + 0x1a;
      if (param_1[0x1a] == (Locale)0x0) {
        pLVar19 = pLVar31;
      }
      *(Locale **)(this + 0x10) = pLVar19;
      if (param_1[0xd8] == (Locale)0x0) {
        iVar35 = *(int *)(param_1 + 0x20) + (int)*(undefined8 *)(param_1 + 0xd0);
      }
      local_348 = (UErrorCode *)((long)&local_33c + 1);
      local_340 = 0x28;
      local_310 = 0;
      local_33c = 0;
      icu_76_godot::CharString::append((char *)&local_348,iVar35,(UErrorCode *)0xffffffff);
      pUVar30 = local_348;
      if (local_310 == 0) {
LAB_001025d0:
        if (0 < *(int *)param_3) goto LAB_00102512;
        pAVar1 = this + 0x20;
        iVar35 = 0;
        icu_76_godot::UVector::sort
                  ((_func_int_UElement_UElement *)pAVar1,
                   (UErrorCode *)
                   replace(icu_76_godot::Locale_const&,icu_76_godot::CharString&,UErrorCode&)::
                   {lambda(UElement,UElement)#1}::_FUN);
        icu_76_godot::UVector::UVector
                  ((UVector *)local_3a8,
                   replace(icu_76_godot::Locale_const&,icu_76_godot::CharString&,UErrorCode&)::
                   {lambda(void*)#1}::_FUN,(_func_signed_UElement_UElement *)0x0,10,param_3);
        if (*(int *)param_3 < 1) {
LAB_00102650:
          cVar10 = replaceLanguage(this,true,true,true,(UVector *)local_3a8,param_3);
          if ((((cVar10 != '\0') ||
               (cVar10 = replaceLanguage(this,true,true,false,(UVector *)local_3a8,param_3),
               cVar10 != '\0')) ||
              (cVar10 = replaceLanguage(this,true,false,true,(UVector *)local_3a8,param_3),
              cVar10 != '\0')) ||
             ((cVar10 = replaceLanguage(this,true,false,false,(UVector *)local_3a8,param_3),
              cVar10 != '\0' ||
              (cVar10 = replaceLanguage(this,false,false,true,(UVector *)local_3a8,param_3),
              cVar10 != '\0')))) goto LAB_00102960;
          if (0 < *(int *)param_3) goto LAB_0010296e;
          if (*(long *)(this + 0x10) != 0) {
            __s = (CharString *)uhash_get_76_godot(*(undefined8 *)(*(long *)(this + 0x48) + 0x18));
            if (__s != (CharString *)0x0) {
              pcVar20 = strchr((char *)__s,0x20);
              if (pcVar20 == (char *)0x0) {
LAB_00102cde:
                *(CharString **)(this + 0x10) = __s;
                goto LAB_00102960;
              }
              icu_76_godot::LocaleBuilder::LocaleBuilder((LocaleBuilder *)&local_208);
              pcVar36 = *(char **)this;
              if (pcVar36 == (char *)0x0) {
                pcVar36 = "und";
              }
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_378,pcVar36);
              uVar21 = icu_76_godot::LocaleBuilder::setLanguage
                                 ((LocaleBuilder *)&local_208,local_378,
                                  CONCAT44(uStack_36c,local_370));
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3c8,*(char **)(this + 8))
              ;
              icu_76_godot::LocaleBuilder::setScript
                        (uVar21,local_3c8,CONCAT44(uStack_3bc,local_3c0));
              icu_76_godot::LocaleBuilder::build((UErrorCode *)&local_128);
              icu_76_godot::LocaleBuilder::~LocaleBuilder((LocaleBuilder *)&local_208);
              pUVar30 = param_3;
              Locale::addLikelySubtags((Locale *)&local_128,param_3);
              if (local_10e[0] == (UErrorCode)0x0) {
LAB_001028a3:
                if (*(int *)param_3 < 1) {
                  local_4b0 = (UErrorCode *)
                              icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar30);
                  if (local_4b0 == (UErrorCode *)0x0) {
LAB_0010470b:
                    if (*(int *)param_3 < 1) {
                      *(undefined4 *)param_3 = 7;
                    }
                  }
                  else {
                    *(UMemory **)local_4b0 = (UMemory *)local_4b0 + 0xd;
                    *(undefined4 *)((UMemory *)local_4b0 + 8) = 0x28;
                    *(undefined4 *)((UMemory *)local_4b0 + 0x38) = 0;
                    *(undefined2 *)((UMemory *)local_4b0 + 0xc) = 0;
                    icu_76_godot::CharString::append
                              ((char *)local_4b0,(int)__s,
                               (UErrorCode *)(ulong)(uint)((int)pcVar20 - (int)__s));
                    if (*(int *)param_3 < 1) goto LAB_00102c4b;
                    if (((UMemory *)local_4b0)[0xc] != (UMemory)0x0) {
                      uprv_free_76_godot(*(undefined8 *)local_4b0);
                    }
                    icu_76_godot::UMemory::operator_delete((UMemory *)local_4b0,__s);
                    if (*(int *)param_3 < 1) {
                      uVar21 = replace((Locale *)local_4b0,__s,extraout_RDX);
                      return uVar21;
                    }
                  }
                }
              }
              else {
                pUVar30 = local_10e;
                sVar22 = strlen((char *)pUVar30);
                pUVar23 = (UErrorCode *)strstr((char *)__s,(char *)pUVar30);
                if (pUVar23 == (UErrorCode *)0x0) goto LAB_001028a3;
                local_4b0 = (UErrorCode *)
                            icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar30);
                if (local_4b0 == (UErrorCode *)0x0) goto LAB_0010470b;
                *(UMemory **)local_4b0 = (UMemory *)local_4b0 + 0xd;
                *(undefined4 *)((UMemory *)local_4b0 + 8) = 0x28;
                *(undefined4 *)((UMemory *)local_4b0 + 0x38) = 0;
                *(undefined2 *)((UMemory *)local_4b0 + 0xc) = 0;
                icu_76_godot::CharString::append
                          ((char *)local_4b0,(int)pUVar23,(UErrorCode *)(sVar22 & 0xffffffff));
                if (0 < *(int *)param_3) {
                  pUVar30 = pUVar23;
                  if (((UMemory *)local_4b0)[0xc] != (UMemory)0x0) {
                    uprv_free_76_godot(*(undefined8 *)local_4b0);
                    pUVar30 = pUVar23;
                  }
                  icu_76_godot::UMemory::operator_delete((UMemory *)local_4b0,pUVar30);
                  goto LAB_001028a3;
                }
LAB_00102c4b:
                __s = *(CharString **)local_4b0;
                icu_76_godot::UVector::adoptElement((UVector *)local_3a8,local_4b0);
                if (*(int *)param_3 < 1) {
                  local_128 = &PTR__Locale_00108690;
                  if ((local_58 != local_f8) && (local_58 != local_100)) {
                    uprv_free_76_godot(local_58);
                  }
                  local_58 = (char *)0x0;
                  if (local_100 != local_f8) {
                    uprv_free_76_godot();
                    local_100 = (char *)0x0;
                  }
                  icu_76_godot::UObject::~UObject((UObject *)&local_128);
                  goto LAB_00102cde;
                }
              }
              local_128 = &PTR__Locale_00108690;
              if ((local_58 != local_f8) && (local_58 != local_100)) {
                uprv_free_76_godot(local_58);
              }
              local_58 = (char *)0x0;
              if (local_100 != local_f8) {
                uprv_free_76_godot();
                local_100 = (char *)0x0;
              }
              icu_76_godot::UObject::~UObject((UObject *)&local_128);
            }
            if (0 < *(int *)param_3) goto LAB_0010296e;
          }
          if (*(long *)(this + 8) != 0) {
            lVar24 = uhash_get_76_godot(*(undefined8 *)(*(long *)(this + 0x48) + 0x10));
            if (lVar24 != 0) {
              *(long *)(this + 8) = lVar24;
              goto LAB_00102960;
            }
            if (0 < *(int *)param_3) goto LAB_0010296e;
          }
          iVar38 = (int)pAVar1;
          if (0 < *(int *)(this + 0x28)) {
            iVar11 = 0;
            while( true ) {
              pcVar20 = (char *)icu_76_godot::UVector::elementAt(iVar38);
              pcVar36 = (char *)uhash_get_76_godot(*(undefined8 *)(*(long *)(this + 0x48) + 0x20),
                                                   pcVar20);
              if ((pcVar36 != (char *)0x0) &&
                 ((pcVar20 == (char *)0x0 || (iVar12 = strcmp(pcVar20,pcVar36), iVar12 != 0))))
              break;
              iVar11 = iVar11 + 1;
              if (*(int *)(this + 0x28) <= iVar11) {
                if (*(int *)param_3 < 1) goto LAB_00102e01;
                goto LAB_0010296e;
              }
            }
            icu_76_godot::UVector::setElementAt(pAVar1,(int)pcVar36);
            iVar11 = strcmp(pcVar20,"heploc");
            if ((iVar11 == 0) && (iVar11 = 0, 0 < *(int *)(this + 0x28))) {
              do {
                pcVar20 = (char *)icu_76_godot::UVector::elementAt(iVar38);
                iVar12 = strcmp(pcVar20,"hepburn");
                if (iVar12 == 0) {
                  icu_76_godot::UVector::removeElementAt(iVar38);
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < *(int *)(this + 0x28));
            }
            goto LAB_00102960;
          }
LAB_00102e01:
          pcVar20 = (char *)locale_getKeywordsStart_76_godot(*(undefined8 *)(param_1 + 0x28));
          if ((((iVar35 == 0) && (*(int *)(this + 0x28) < 2)) && (pcVar20 == (char *)0x0)) ||
             (0 < *(int *)param_3)) goto LAB_0010296e;
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_378,*(char **)this);
          icu_76_godot::CharString::append
                    ((char *)param_2,(int)local_378,(UErrorCode *)(ulong)local_370);
          cVar10 = (char)param_2;
          if ((*(char **)(this + 8) != (char *)0x0) && (**(char **)(this + 8) != '\0')) {
            pcVar36 = (char *)icu_76_godot::CharString::append(cVar10,(UErrorCode *)0x5f);
            icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_378,*(char **)(this + 8));
            icu_76_godot::CharString::append(pcVar36,(int)local_378,(UErrorCode *)(ulong)local_370);
          }
          if ((*(char **)(this + 0x10) != (char *)0x0) && (**(char **)(this + 0x10) != '\0')) {
            pcVar36 = (char *)icu_76_godot::CharString::append(cVar10,(UErrorCode *)0x5f);
            icu_76_godot::StringPiece::StringPiece
                      ((StringPiece *)&local_378,*(char **)(this + 0x10));
            icu_76_godot::CharString::append(pcVar36,(int)local_378,(UErrorCode *)(ulong)local_370);
          }
          if (0 < *(int *)(this + 0x28)) {
            if (((*(char **)(this + 8) == (char *)0x0) || (**(char **)(this + 8) == '\0')) &&
               ((*(char **)(this + 0x10) == (char *)0x0 || (**(char **)(this + 0x10) == '\0')))) {
              icu_76_godot::CharString::append(cVar10,(UErrorCode *)0x5f);
            }
            iVar11 = 0;
            icu_76_godot::UVector::sort
                      ((_func_int_UElement_UElement *)pAVar1,
                       (UErrorCode *)
                       outputToString(icu_76_godot::CharString&,UErrorCode&)::
                       {lambda(UElement,UElement)#1}::_FUN);
            iVar35 = *(int *)(param_2 + 0x38);
            if (0 < *(int *)(this + 0x28)) {
              do {
                pcVar36 = (char *)icu_76_godot::CharString::append(cVar10,(UErrorCode *)0x5f);
                iVar11 = iVar11 + 1;
                pcVar25 = (char *)icu_76_godot::UVector::elementAt(iVar38);
                icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_378,pcVar25);
                icu_76_godot::CharString::append
                          (pcVar36,(int)local_378,(UErrorCode *)(ulong)local_370);
              } while (iVar11 < *(int *)(this + 0x28));
            }
            T_CString_toUpperCase_76_godot((long)iVar35 + *(long *)param_2);
          }
          if ((*(char **)(this + 0x18) != (char *)0x0) && (**(char **)(this + 0x18) != '\0')) {
            icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_378,"und_");
            local_208 = (undefined **)(local_1fc + 1);
            local_1fc._0_2_ = 0;
            local_200 = 0x28;
            local_1d0 = 0;
            icu_76_godot::CharString::append
                      ((char *)&local_208,(int)local_378,(UErrorCode *)(ulong)local_370);
            icu_76_godot::StringPiece::StringPiece
                      ((StringPiece *)&local_378,*(char **)(this + 0x18));
            icu_76_godot::CharString::append
                      ((char *)&local_208,(int)local_378,(UErrorCode *)(ulong)local_370);
            Locale::Locale((Locale *)&local_128,(char *)local_208,(char *)0x0,(char *)0x0,
                           (char *)0x0);
            icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_378,local_100 + 1);
            icu_76_godot::CharString::append
                      ((char *)param_2,(int)local_378,(UErrorCode *)(ulong)local_370);
            local_128 = &PTR__Locale_00108690;
            if ((local_58 != local_f8) && (local_58 != local_100)) {
              uprv_free_76_godot(local_58);
            }
            local_58 = (char *)0x0;
            if (local_100 != local_f8) {
              uprv_free_76_godot();
              local_100 = (char *)0x0;
            }
            icu_76_godot::UObject::~UObject((UObject *)&local_128);
            if (local_1fc[0] != '\0') {
              uprv_free_76_godot(local_208);
            }
          }
          if (0 < *(int *)param_3) goto LAB_0010296e;
          if (pcVar20 == (char *)0x0) {
LAB_0010322a:
            pcVar20 = *(char **)param_2;
            iVar35 = strcmp(pcVar20,*(char **)(param_1 + 0x28));
            if (iVar35 == 0) {
              *(undefined4 *)(param_2 + 0x38) = 0;
              *pcVar20 = '\0';
              goto LAB_0010296e;
            }
            uVar21 = 1;
            goto LAB_00102970;
          }
          local_208 = &PTR__Locale_00108690;
          local_138 = (undefined1 *)0x0;
          local_1e0 = local_1d8;
          Locale::operator=((Locale *)&local_208,param_1);
          plVar26 = (long *)Locale::createKeywords(param_1,param_3);
          if ((0 < *(int *)param_3) || (plVar26 == (long *)0x0)) {
            icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_378,pcVar20);
            icu_76_godot::CharString::append
                      ((char *)param_2,(int)local_378,(UErrorCode *)(ulong)local_370);
            if (plVar26 != (long *)0x0) goto LAB_001032f7;
LAB_0010330c:
            local_208 = &PTR__Locale_00108690;
            if ((local_138 != local_1d8) && (local_138 != local_1e0)) {
              uprv_free_76_godot(local_138);
            }
            local_138 = (undefined1 *)0x0;
            if (local_1e0 != local_1d8) {
              uprv_free_76_godot();
              local_1e0 = (undefined1 *)0x0;
            }
            icu_76_godot::UObject::~UObject((UObject *)&local_208);
            if (0 < *(int *)param_3) goto LAB_0010296e;
            goto LAB_0010322a;
          }
          iVar35 = 0;
LAB_00103b00:
          do {
            do {
              pcVar36 = (char *)(**(code **)(*plVar26 + 0x28))(plVar26,0,param_3);
              if (pcVar36 == (char *)0x0) {
                if (iVar35 != 0) {
                  pcVar20 = (char *)locale_getKeywordsStart_76_godot(local_1e0);
                }
                icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_378,pcVar20);
                icu_76_godot::CharString::append
                          ((char *)param_2,(int)local_378,(UErrorCode *)(ulong)local_370);
LAB_001032f7:
                (**(code **)(*plVar26 + 8))();
                goto LAB_0010330c;
              }
            } while ((((*pcVar36 != 's') || (pcVar36[1] != 'd')) || (pcVar36[2] != '\0')) &&
                    ((((*pcVar36 != 'r' || (pcVar36[1] != 'g')) || (pcVar36[2] != '\0')) &&
                     ((*pcVar36 != 't' || (pcVar36[1] != '\0'))))));
            icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3c8,pcVar36);
            uVar7 = local_3c0;
            pUVar30 = local_3c8;
            if (*(int *)param_3 < 1) {
              local_128 = (undefined **)(local_11c + 1);
              local_120 = 0x28;
              local_f0 = 0;
              local_11c._0_2_ = 0;
              icu_76_godot::CharStringByteSink::CharStringByteSink
                        ((CharStringByteSink *)&local_378,(CharString *)&local_128);
              local_378 = &PTR__StringByteSink_00108658;
              if (*(int *)param_3 < 1) {
                if (param_1[0xd8] == (Locale)0x0) {
                  ulocimp_getKeywordValue_76_godot
                            (*(undefined8 *)(param_1 + 0x28),(long)(int)uVar7,pUVar30,
                             (StringPiece *)&local_378,param_3);
                }
                else {
                  *(undefined4 *)param_3 = 1;
                }
              }
              icu_76_godot::CharString::CharString
                        ((CharString *)&local_308,(CharString *)&local_128);
              local_378 = &PTR__StringByteSink_00108658;
              icu_76_godot::CharStringByteSink::~CharStringByteSink
                        ((CharStringByteSink *)&local_378);
              if (local_11c[0] != '\0') {
                uprv_free_76_godot(local_128);
              }
              if (0 < *(int *)param_3) goto LAB_00103ba3;
              local_2c8 = (char *)((long)&local_2bc + 1);
              local_2c0 = 0x28;
              local_290 = 0;
              local_2bc = 0;
              sVar22 = strlen(pcVar36);
              iVar38 = local_2d0;
              pcVar25 = local_308;
              if (sVar22 != 2) {
                pcVar27 = (char *)ultag_getTKeyStart_76_godot(local_308);
                if (pcVar27 == pcVar25) {
LAB_00104040:
                  if (pcVar27 == (char *)0x0) goto LAB_0010404c;
LAB_00103d61:
                  icu_76_godot::UVector::UVector((UVector *)&local_378,param_3);
                  iVar38 = *(int *)param_3;
                  while (iVar38 < 1) {
                    pcVar25 = strchr(pcVar27,0x2d);
                    if (pcVar25 == (char *)0x0) goto LAB_00104391;
                    pcVar25 = (char *)ultag_getTKeyStart_76_godot(pcVar25);
                    if (pcVar25 == (char *)0x0) {
                      icu_76_godot::UVector::insertElementAt
                                ((StringPiece *)&local_378,(int)pcVar27,
                                 (UErrorCode *)(ulong)local_370);
                      if (*(int *)param_3 < 1) {
                        iVar38 = 0;
                        icu_76_godot::UVector::sort
                                  ((_func_int_UElement_UElement *)&local_378,
                                   (UErrorCode *)
                                   replaceTransformedExtensions(icu_76_godot::CharString&,icu_76_godot::CharString&,UErrorCode&)
                                   ::{lambda(UElement,UElement)#1}::_FUN);
                        if ((int)local_370 < 1) goto LAB_001046e0;
                        goto LAB_0010448e;
                      }
                      break;
                    }
                    pcVar25[-1] = '\0';
                    icu_76_godot::UVector::insertElementAt
                              ((StringPiece *)&local_378,(int)pcVar27,(UErrorCode *)(ulong)local_370
                              );
                    pcVar27 = pcVar25;
                    iVar38 = *(int *)param_3;
                  }
                  goto LAB_00103eca;
                }
                if (pcVar27 != (char *)0x0) {
                  iVar38 = ((int)pcVar27 - (int)pcVar25) + -1;
                  if (0 < iVar38) goto LAB_00103f0b;
                  goto LAB_00103d61;
                }
                if (0 < iVar38) {
LAB_00103f0b:
                  icu_76_godot::LocaleBuilder::LocaleBuilder((LocaleBuilder *)&local_248);
                  icu_76_godot::LocaleBuilder::setLanguageTag
                            ((LocaleBuilder *)&local_248,pcVar25,iVar38);
                  icu_76_godot::LocaleBuilder::build((UErrorCode *)&local_128);
                  icu_76_godot::LocaleBuilder::~LocaleBuilder((LocaleBuilder *)&local_248);
                  Locale::canonicalize((Locale *)&local_128,param_3);
                  if (*(int *)param_3 < 1) {
                    local_248 = (long)&local_23c + 1;
                    local_240 = 0x28;
                    local_210 = 0;
                    local_23c = 0;
                    icu_76_godot::CharStringByteSink::CharStringByteSink
                              ((CharStringByteSink *)&local_378,(CharString *)&local_248);
                    local_378 = &PTR__StringByteSink_00108658;
                    if (*(int *)param_3 < 1) {
                      if (local_50 == '\0') {
                        ulocimp_toLanguageTag_76_godot
                                  (local_100,(ByteSink *)&local_378,false,param_3);
                      }
                      else {
                        *(undefined4 *)param_3 = 1;
                      }
                    }
                    icu_76_godot::CharString::CharString
                              ((CharString *)&local_288,(CharString *)&local_248);
                    local_378 = &PTR__StringByteSink_00108658;
                    icu_76_godot::CharStringByteSink::~CharStringByteSink
                              ((CharStringByteSink *)&local_378);
                    if ((char)local_23c != '\0') {
                      uprv_free_76_godot(local_248);
                    }
                  }
                  else {
                    local_288 = (long)&local_27c + 1;
                    local_280 = 0x28;
                    local_250 = 0;
                    local_27c = 0;
                  }
                  icu_76_godot::CharString::operator=
                            ((CharString *)&local_2c8,(CharString *)&local_288);
                  if ((char)local_27c != '\0') {
                    uprv_free_76_godot(local_288);
                  }
                  if (0 < *(int *)param_3) {
                    local_128 = &PTR__Locale_00108690;
                    if ((local_100 != local_58) && (local_58 != local_f8)) {
                      uprv_free_76_godot();
                    }
                    local_58 = (char *)0x0;
                    if (local_100 != local_f8) {
                      uprv_free_76_godot();
                      local_100 = (char *)0x0;
                    }
                    icu_76_godot::UObject::~UObject((UObject *)&local_128);
                    goto LAB_00103e6a;
                  }
                  T_CString_toLowerCase_76_godot(local_2c8);
                  local_128 = &PTR__Locale_00108690;
                  if ((local_100 != local_58) && (local_58 != local_f8)) {
                    uprv_free_76_godot();
                  }
                  local_58 = (char *)0x0;
                  if (local_100 != local_f8) {
                    uprv_free_76_godot();
                    local_100 = (char *)0x0;
                  }
                  icu_76_godot::UObject::~UObject((UObject *)&local_128);
                  goto LAB_00104040;
                }
                goto LAB_0010404c;
              }
              pcVar25 = (char *)uhash_get_76_godot(*(undefined8 *)(*(long *)(this + 0x48) + 0x28));
              if (pcVar25 != (char *)0x0) {
                pcVar27 = strchr(pcVar25,0x20);
                if (pcVar27 == (char *)0x0) {
                  sVar22 = strlen(pcVar25);
                }
                else {
                  sVar22 = (long)pcVar27 - (long)pcVar25;
                }
                if (sVar22 - 2 < 7) {
                  icu_76_godot::CharString::append
                            ((char *)&local_2c8,(int)pcVar25,(UErrorCode *)(sVar22 & 0xffffffff));
                  if (sVar22 == 2) {
                    icu_76_godot::CharString::append((char *)&local_2c8,0x107b70,(UErrorCode *)0x4);
                  }
                }
                goto LAB_00103e19;
              }
              goto LAB_00103e6a;
            }
            local_308 = (char *)((long)&local_2fc + 1);
            local_300 = 0x28;
            local_2d0 = 0;
            local_2fc = 0;
LAB_00103ba3:
            *(undefined4 *)param_3 = 0;
          } while ((char)local_2fc == '\0');
          goto LAB_00103bb8;
        }
LAB_0010296e:
        uVar21 = 0;
LAB_00102970:
        icu_76_godot::UVector::~UVector((UVector *)local_3a8);
      }
      else {
        if (*(int *)param_3 < 1) {
          T_CString_toLowerCase_76_godot(local_348);
          while( true ) {
            pcVar20 = strchr((char *)pUVar30,0x5f);
            if ((pcVar20 == (char *)0x0) || (0 < *(int *)param_3)) break;
            *pcVar20 = '\0';
            if ((*pUVar30 != (UErrorCode)0x0) &&
               (iVar35 = icu_76_godot::UVector::indexOf(this + 0x20,(int)pUVar30), iVar35 < 0)) {
              icu_76_godot::UVector::addElement(this + 0x20,pUVar30);
            }
            pUVar30 = (UErrorCode *)(pcVar20 + 1);
          }
          if (*pUVar30 != (UErrorCode)0x0) {
            iVar35 = icu_76_godot::UVector::indexOf(this + 0x20,(int)pUVar30);
            if (iVar35 < 0) {
              icu_76_godot::UVector::addElement(this + 0x20,pUVar30);
            }
          }
          goto LAB_001025d0;
        }
LAB_00102512:
        uVar21 = 0;
      }
      if ((char)local_33c != '\0') {
        uprv_free_76_godot(local_348);
      }
      goto LAB_001021a0;
    }
  }
  else {
    *(undefined8 *)(this + 0x48) = 0;
  }
LAB_0010219d:
  uVar21 = 0;
LAB_001021a0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102960:
  iVar35 = iVar35 + 1;
  if (0 < *(int *)param_3) goto LAB_0010296e;
  goto LAB_00102650;
  while( true ) {
    *pcVar25 = '\0';
    pcVar25 = pcVar25 + 1;
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3c8,pcVar27);
    cVar10 = icu_76_godot::CharString::append
                       ((char *)&local_2c8,(int)local_3c8,(UErrorCode *)(ulong)local_3c0);
    icu_76_godot::CharString::append(cVar10,(UErrorCode *)0x2d);
    sVar22 = strlen(pcVar25);
    sVar29 = strlen(pcVar27);
    ulocimp_toBcpType_76_godot((StringPiece *)&local_3c8,sVar29,pcVar27,sVar22,pcVar25);
    if (local_3b8 == '\0') {
      pUVar30 = (UErrorCode *)strlen(pcVar25);
    }
    else {
      pcVar25 = (char *)CONCAT44(uStack_3bc,local_3c0);
      pUVar30 = local_3c8;
    }
    iVar38 = iVar38 + 1;
    icu_76_godot::CharString::append((char *)&local_2c8,(int)pcVar25,pUVar30);
    if ((int)local_370 <= iVar38) break;
LAB_0010448e:
    if (0 < local_290) {
      icu_76_godot::CharString::append((char)&local_2c8,(UErrorCode *)0x2d);
    }
    pcVar27 = (char *)icu_76_godot::UVector::elementAt((int)(StringPiece *)&local_378);
    pcVar25 = strchr(pcVar27,0x2d);
    if (pcVar25 == (char *)0x0) goto LAB_00104391;
  }
LAB_001046e0:
  icu_76_godot::UVector::~UVector((UVector *)&local_378);
LAB_0010404c:
  if (0 < *(int *)param_3) goto LAB_00104059;
LAB_00103e19:
  iVar35 = iVar35 + 1;
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_378,local_2c8);
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_3c8,pcVar36);
  Locale::setKeywordValue
            ((Locale *)&local_208,local_3c8,CONCAT44(uStack_3bc,local_3c0),local_378,
             CONCAT44(uStack_36c,local_370),param_3);
LAB_00103e6a:
  if (*(int *)param_3 < 1) {
    if ((char)local_2bc != '\0') {
      uprv_free_76_godot(local_2c8);
    }
    if ((char)local_2fc != '\0') {
LAB_00103bb8:
      uprv_free_76_godot(local_308);
    }
    goto LAB_00103b00;
  }
LAB_00104059:
  if ((char)local_2bc != '\0') {
    uprv_free_76_godot(local_2c8);
  }
  if ((char)local_2fc != '\0') {
    uprv_free_76_godot(local_308);
  }
  (**(code **)(*plVar26 + 8))();
  local_208 = &PTR__Locale_00108690;
  if ((local_138 != local_1e0) && (local_138 != local_1d8)) {
    uprv_free_76_godot(local_138);
  }
  local_138 = (undefined1 *)0x0;
  if (local_1e0 != local_1d8) {
    uprv_free_76_godot();
    local_1e0 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)&local_208);
  goto LAB_0010296e;
LAB_00104391:
  *(undefined4 *)param_3 = 1;
LAB_00103eca:
  icu_76_godot::UVector::~UVector((UVector *)&local_378);
  goto LAB_00103e6a;
}



/* icu_76_godot::Locale::init(char const*, signed char) */

Locale * __thiscall icu_76_godot::Locale::init(Locale *this,long param_1,char param_3)

{
  undefined4 uVar1;
  char *__s;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  Locale *pLVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  Locale *pLVar14;
  Locale *pLVar15;
  long in_FS_OFFSET;
  int local_144;
  int local_12c;
  UErrorCode local_128 [4];
  undefined1 auStack_124 [12];
  undefined1 local_118 [16];
  UVector local_108 [40];
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined1 local_b8 [8];
  char *pcStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  pLVar9 = this + 0x30;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xd8] = (Locale)0x0;
  pLVar14 = *(Locale **)(this + 0xd0);
  pLVar15 = *(Locale **)(this + 0x28);
  if (pLVar14 == pLVar15) {
LAB_001047d0:
    *(undefined8 *)(this + 0xd0) = 0;
    pLVar14 = pLVar9;
    if (pLVar9 != pLVar15) goto LAB_00104926;
  }
  else {
    if (pLVar14 != pLVar9) {
      uprv_free_76_godot(pLVar14);
      pLVar15 = *(Locale **)(this + 0x28);
      goto LAB_001047d0;
    }
    *(undefined8 *)(this + 0xd0) = 0;
LAB_00104926:
    uprv_free_76_godot();
    *(Locale **)(this + 0x28) = pLVar14;
  }
  local_98 = 0;
  local_c8 = 0;
  _local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  if (param_1 == 0) {
    umtx_lock_76_godot(gDefaultLocaleMutex);
    pLVar9 = gDefaultLocale;
    if (gDefaultLocale == (Locale *)0x0) {
      umtx_unlock_76_godot();
      auVar3._12_4_ = 0;
      auVar3._0_12_ = auStack_124;
      _local_128 = auVar3 << 0x20;
      pLVar9 = (Locale *)locale_set_default_internal((char *)0x0,local_128);
    }
    else {
      umtx_unlock_76_godot();
    }
    if (this != pLVar9) {
      operator=(this,pLVar9);
    }
    goto LAB_001048e6;
  }
  this[0x1a] = (Locale)0x0;
  this[0x14] = (Locale)0x0;
  this[8] = (Locale)0x0;
  local_12c = 0;
  if (param_3 == '\0') {
    iVar5 = uloc_getName_76_godot();
    if (local_12c == 0xf) goto LAB_0010494d;
LAB_0010486e:
    if (0x9c < iVar5) goto LAB_0010494d;
LAB_0010487b:
    pLVar9 = *(Locale **)(this + 0x28);
    if ((local_12c < 1) && (local_12c != -0x7c)) {
      *(int *)(this + 0x20) = iVar5;
      local_b8 = (undefined1  [8])pLVar9;
      pcVar7 = strchr((char *)pLVar9,0x40);
      lVar11 = 0;
      while( true ) {
        __s = *(char **)(local_b8 + lVar11 * 8);
        local_144 = (int)lVar11;
        pcVar8 = strchr(__s,0x5f);
        if (pcVar8 == (char *)0x0) break;
        if (lVar11 == 3) {
          local_144 = 3;
          break;
        }
        if ((pcVar7 != (char *)0x0) && (pcVar7 <= pcVar8)) break;
        uVar2 = *(undefined8 *)(local_b8 + lVar11 * 8);
        *(char **)(local_b8 + lVar11 * 8 + 8) = pcVar8 + 1;
        *(int *)(local_d8 + lVar11 * 4) = (int)pcVar8 - (int)uVar2;
        lVar11 = lVar11 + 1;
      }
      pcVar8 = strchr(__s,0x40);
      pcVar7 = strchr(__s,0x2e);
      if (pcVar7 == (char *)0x0 && pcVar8 == (char *)0x0) {
        iVar5 = iVar5 - ((int)__s - (int)pLVar9);
      }
      else {
        if ((pcVar8 != (char *)0x0) && ((pcVar7 == (char *)0x0 || (pcVar8 <= pcVar7)))) {
          pcVar7 = pcVar8;
        }
        iVar5 = (int)pcVar7 - (int)__s;
      }
      *(int *)(local_d8 + (long)local_144 * 4) = iVar5;
      if ((int)local_d8._0_4_ < 0xc) {
        if (0 < (int)local_d8._0_4_) {
          if ((uint)local_d8._0_4_ < 8) {
            if ((local_d8 & (undefined1  [16])0x4) == (undefined1  [16])0x0) {
              if ((local_d8._0_4_ != 0) &&
                 (this[8] = *pLVar9, (local_d8 & (undefined1  [16])0x2) != (undefined1  [16])0x0)) {
                *(undefined2 *)(this + (ulong)(uint)local_d8._0_4_ + 6) =
                     *(undefined2 *)(pLVar9 + ((ulong)(uint)local_d8._0_4_ - 2));
              }
            }
            else {
              *(undefined4 *)(this + 8) = *(undefined4 *)pLVar9;
              *(undefined4 *)(this + (ulong)(uint)local_d8._0_4_ + 4) =
                   *(undefined4 *)(pLVar9 + ((ulong)(uint)local_d8._0_4_ - 4));
            }
          }
          else {
            *(undefined8 *)(this + 8) = *(undefined8 *)pLVar9;
            *(undefined8 *)(this + (uint)local_d8._0_4_) =
                 *(undefined8 *)(pLVar9 + ((ulong)(uint)local_d8._0_4_ - 8));
            uVar13 = (int)(this + (8 - ((ulong)(this + 0x10) & 0xfffffffffffffff8))) +
                     local_d8._0_4_ & 0xfffffff8;
            if (7 < uVar13) {
              uVar12 = 0;
              do {
                uVar10 = (int)uVar12 + 8;
                *(undefined8 *)(((ulong)(this + 0x10) & 0xfffffffffffffff8) + uVar12) =
                     *(undefined8 *)
                      (pLVar9 + (uVar12 - (long)(this + (8 - ((ulong)(this + 0x10) &
                                                             0xfffffffffffffff8)))));
                uVar12 = (ulong)uVar10;
              } while (uVar10 < uVar13);
            }
          }
          this[(long)(int)local_d8._0_4_ + 8] = (Locale)0x0;
        }
        iVar5 = 1;
        uVar13 = local_d8._4_4_;
        if (local_d8._4_4_ == 4) {
          pcVar7 = pcStack_b0;
          cVar4 = uprv_isASCIILetter_76_godot((int)*pcStack_b0);
          if ((((cVar4 != '\0') &&
               (cVar4 = uprv_isASCIILetter_76_godot((int)pcVar7[1]), cVar4 != '\0')) &&
              (cVar4 = uprv_isASCIILetter_76_godot((int)pcVar7[2]), cVar4 != '\0')) &&
             (cVar4 = uprv_isASCIILetter_76_godot((int)pcVar7[3]), cVar4 != '\0')) {
            uVar1 = *(undefined4 *)pcVar7;
            iVar5 = 2;
            this[0x18] = (Locale)0x0;
            *(undefined4 *)(this + 0x14) = uVar1;
            uVar13 = local_d8._8_4_;
            goto LAB_00104aaf;
          }
          iVar5 = 1;
LAB_00104b47:
          *(int *)(this + 0x20) =
               (int)*(undefined8 *)(local_b8 + (long)iVar5 * 8) - (int)*(undefined8 *)(this + 0x28);
        }
        else {
LAB_00104aaf:
          if (uVar13 - 2 < 2) {
            lVar11 = *(long *)(local_b8 + (long)iVar5 * 8);
            if (uVar13 != 0) {
              uVar12 = 0;
              do {
                uVar10 = (int)uVar12 + 1;
                this[uVar12 + 0x1a] = *(Locale *)(lVar11 + uVar12);
                uVar12 = (ulong)uVar10;
              } while (uVar10 < uVar13);
            }
            iVar5 = iVar5 + 1;
            this[(long)(int)uVar13 + 0x1a] = (Locale)0x0;
            uVar13 = *(uint *)(local_d8 + (long)iVar5 * 4);
          }
          else if (uVar13 == 0) {
            iVar5 = iVar5 + 1;
            uVar13 = *(uint *)(local_d8 + (long)iVar5 * 4);
          }
          if (0 < (int)uVar13) goto LAB_00104b47;
        }
        local_12c = 0;
        initBaseName(this,(UErrorCode *)&local_12c);
        if (0 < local_12c) goto LAB_00104af3;
        if ((((param_3 == '\0') ||
             ((pcVar7 = *(char **)(this + 0x28), *pcVar7 == 'c' && (pcVar7[1] == '\0')))) ||
            ((*pcVar7 == 'e' && ((pcVar7[1] == 'n' && (pcVar7[2] == '\0')))))) ||
           (iVar5 = strcmp(pcVar7,"en_US"), iVar5 == 0)) goto LAB_001048e6;
        if (((anonymous_namespace)::gKnownCanonicalizedInitOnce == 2) ||
           (cVar4 = icu_76_godot::umtx_initImplPreInit
                              ((UInitOnce *)&(anonymous_namespace)::gKnownCanonicalizedInitOnce),
           cVar4 == '\0')) {
          iVar5 = DAT_001078bc;
          if (DAT_001078bc < 1) goto LAB_00104c96;
        }
        else {
          (anonymous_namespace)::loadKnownCanonicalized((UErrorCode *)&local_12c);
          DAT_001078bc = local_12c;
          icu_76_godot::umtx_initImplPostInit
                    ((UInitOnce *)&(anonymous_namespace)::gKnownCanonicalizedInitOnce);
LAB_00104c96:
          iVar5 = local_12c;
          if ((local_12c < 1) &&
             (iVar6 = uhash_geti_76_godot((anonymous_namespace)::gKnownCanonicalized,pcVar7),
             iVar5 = local_12c, iVar6 != 0)) goto LAB_001048e6;
        }
        local_12c = iVar5;
        local_88 = (long)&local_7c + 1;
        local_80 = 0x28;
        local_50 = 0;
        local_7c = 0;
        if (local_12c < 1) {
          _local_128 = (undefined1  [16])0x0;
          local_118 = (undefined1  [16])0x0;
          icu_76_godot::UVector::UVector
                    (local_108,(_func_void_void_ptr *)0x0,
                     (anonymous_namespace)::AliasReplacer::AliasReplacer(UErrorCode&)::
                     {lambda(UElement,UElement)#1}::_FUN,(UErrorCode *)&local_12c);
          local_e0 = 0;
          cVar4 = (anonymous_namespace)::AliasReplacer::replace
                            ((AliasReplacer *)local_128,this,(CharString *)&local_88,
                             (UErrorCode *)&local_12c);
          icu_76_godot::UVector::~UVector(local_108);
          if (cVar4 != '\0') {
            init(this,local_88,0);
          }
          if (local_12c < 1) {
            if ((char)local_7c != '\0') {
              uprv_free_76_godot(local_88);
            }
            goto LAB_001048e6;
          }
          if ((char)local_7c != '\0') {
            uprv_free_76_godot(local_88);
          }
        }
        goto LAB_00104af3;
      }
    }
  }
  else {
    iVar5 = uloc_canonicalize_76_godot(param_1,*(undefined8 *)(this + 0x28),0x9d);
    if (local_12c != 0xf) goto LAB_0010486e;
LAB_0010494d:
    lVar11 = uprv_malloc_76_godot((long)(iVar5 + 1));
    if (lVar11 != 0) {
      *(long *)(this + 0x28) = lVar11;
      local_12c = 0;
      if (param_3 == '\0') {
        iVar5 = uloc_getName_76_godot(param_1,lVar11,iVar5 + 1);
      }
      else {
        iVar5 = uloc_canonicalize_76_godot();
      }
      goto LAB_0010487b;
    }
LAB_00104af3:
    pLVar9 = *(Locale **)(this + 0x28);
  }
  if ((*(Locale **)(this + 0xd0) != pLVar9) && (*(Locale **)(this + 0xd0) != pLVar14)) {
    uprv_free_76_godot();
    pLVar9 = *(Locale **)(this + 0x28);
  }
  *(undefined8 *)(this + 0xd0) = 0;
  if (pLVar14 != pLVar9) {
    uprv_free_76_godot(pLVar9);
    *(Locale **)(this + 0x28) = pLVar14;
  }
  this[0x30] = (Locale)0x0;
  this[8] = (Locale)0x0;
  this[0x14] = (Locale)0x0;
  this[0x1a] = (Locale)0x0;
  this[0xd8] = (Locale)0x1;
  *(undefined4 *)(this + 0x20) = 0;
LAB_001048e6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::locale_set_default_internal(char const*, UErrorCode&) */

Locale * icu_76_godot::locale_set_default_internal(char *param_1,UErrorCode *param_2)

{
  Locale *pLVar1;
  Locale *pLVar2;
  UErrorCode *pUVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong local_78;
  char local_6c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  umtx_lock_76_godot(gDefaultLocaleMutex);
  if (param_1 == (char *)0x0) {
    pUVar3 = (UErrorCode *)uprv_getDefaultLocaleID_76_godot();
    ulocimp_canonicalize_76_godot((char *)&local_78,pUVar3);
  }
  else {
    ulocimp_getName_76_godot((char *)&local_78,(UErrorCode *)param_1);
  }
  pLVar1 = gDefaultLocale;
  if (0 < *(int *)param_2) goto joined_r0x0010504c;
  if (gDefaultLocalesHashT == 0) {
    gDefaultLocalesHashT =
         uhash_open_76_godot(&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,0,param_2);
    pLVar1 = gDefaultLocale;
    if (0 < *(int *)param_2) goto joined_r0x0010504c;
    uhash_setValueDeleter_76_godot(gDefaultLocalesHashT,::(anonymous_namespace)::deleteLocale);
    ucln_common_registerCleanup_76_godot(6,::(anonymous_namespace)::locale_cleanup);
  }
  uVar4 = local_78;
  pLVar2 = (Locale *)uhash_get_76_godot(gDefaultLocalesHashT);
  if (pLVar2 == (Locale *)0x0) {
    pLVar2 = (Locale *)icu_76_godot::UMemory::operator_new((UMemory *)0xe0,uVar4);
    if (pLVar2 == (Locale *)0x0) {
      *(undefined4 *)param_2 = 7;
      pLVar1 = gDefaultLocale;
      goto joined_r0x0010504c;
    }
    pLVar1 = pLVar2 + 0x30;
    *(undefined8 *)(pLVar2 + 0xd0) = 0;
    *(undefined ***)pLVar2 = &PTR__Locale_00108690;
    *(Locale **)(pLVar2 + 0x28) = pLVar1;
    uprv_free_76_godot(0);
    *(undefined8 *)(pLVar2 + 0xd0) = 0;
    if (pLVar1 != *(Locale **)(pLVar2 + 0x28)) {
      uprv_free_76_godot();
      *(Locale **)(pLVar2 + 0x28) = pLVar1;
    }
    pLVar2[0x30] = (Locale)0x0;
    pLVar2[8] = (Locale)0x0;
    pLVar2[0x14] = (Locale)0x0;
    pLVar2[0x1a] = (Locale)0x0;
    pLVar2[0xd8] = (Locale)0x1;
    *(undefined4 *)(pLVar2 + 0x20) = 0;
    Locale::init(pLVar2,local_78,0);
    uhash_put_76_godot(gDefaultLocalesHashT,*(undefined8 *)(pLVar2 + 0x28),pLVar2,param_2);
    pLVar1 = gDefaultLocale;
    if (0 < *(int *)param_2) goto joined_r0x0010504c;
  }
  pLVar1 = pLVar2;
joined_r0x0010504c:
  gDefaultLocale = pLVar1;
  if (local_6c != '\0') {
    uprv_free_76_godot(local_78);
  }
  umtx_unlock_76_godot(gDefaultLocaleMutex);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pLVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void locale_set_default_76_godot(char *param_1)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  icu_76_godot::locale_set_default_internal(param_1,(UErrorCode *)&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::getDefault() */

long icu_76_godot::Locale::getDefault(void)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  umtx_lock_76_godot(gDefaultLocaleMutex);
  lVar1 = gDefaultLocale;
  if (gDefaultLocale == 0) {
    umtx_unlock_76_godot();
    local_24 = 0;
    lVar1 = locale_set_default_internal((char *)0x0,(UErrorCode *)&local_24);
  }
  else {
    umtx_unlock_76_godot();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::setDefault(icu_76_godot::Locale const&, UErrorCode&) */

void icu_76_godot::Locale::setDefault(Locale *param_1,UErrorCode *param_2)

{
  if (0 < *(int *)param_2) {
    return;
  }
  locale_set_default_internal(*(char **)(param_1 + 0x28),param_2);
  return;
}



undefined8 locale_get_default_76_godot(void)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  umtx_lock_76_godot(icu_76_godot::gDefaultLocaleMutex);
  lVar1 = icu_76_godot::gDefaultLocale;
  if (icu_76_godot::gDefaultLocale == 0) {
    umtx_unlock_76_godot();
    local_24 = 0;
    lVar1 = icu_76_godot::locale_set_default_internal((char *)0x0,(UErrorCode *)&local_24);
  }
  else {
    umtx_unlock_76_godot();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(undefined8 *)(lVar1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::Locale() */

void __thiscall icu_76_godot::Locale::Locale(Locale *this)

{
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined ***)this = &PTR__Locale_00108690;
  *(Locale **)(this + 0x28) = this + 0x30;
  init(this,0,0);
  return;
}



/* icu_76_godot::Locale::Locale(char const*, char const*, char const*, char const*) */

void __thiscall
icu_76_godot::Locale::Locale(Locale *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  Locale *pLVar1;
  uint uVar2;
  size_t sVar3;
  char *pcVar4;
  Locale *pLVar5;
  UErrorCode *pUVar6;
  char cVar7;
  Locale *pLVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long *local_b8;
  uint local_b0;
  uint local_ac;
  undefined8 local_98;
  uint local_90;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  pLVar1 = this + 0x30;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(Locale **)(this + 0x28) = pLVar1;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined ***)this = &PTR__Locale_00108690;
  if (param_1 == (char *)0x0 && param_2 == (char *)0x0) {
    if (param_3 == (char *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        init(this,0,0);
        return;
      }
      goto LAB_00105771;
    }
    local_88 = (long)&local_7c + 1;
    local_80 = 0x28;
    local_50 = 0;
    local_7c = 0;
    icu_76_godot::CharString::append((char *)&local_88,0,(UErrorCode *)0x0);
    local_b0 = 0;
    cVar7 = *param_3;
    while (cVar7 == '_') {
      param_3 = param_3 + 1;
LAB_00105394:
      cVar7 = *param_3;
    }
    sVar3 = strlen(param_3);
    uVar10 = (uint)sVar3;
    uVar11 = sVar3 & 0xffffffff;
    if (0x15555555 < uVar10) {
      pLVar5 = *(Locale **)(this + 0xd0);
      pLVar8 = *(Locale **)(this + 0x28);
      if ((pLVar1 != pLVar5) && (pLVar5 != pLVar8)) goto LAB_001055d5;
      goto LAB_001055e1;
    }
    if ((int)uVar10 < 2) goto LAB_00105532;
    pcVar4 = param_3 + (long)(int)uVar10 + -1;
    do {
      uVar10 = (uint)uVar11;
      if (*pcVar4 != '_') break;
      uVar10 = uVar10 - 1;
      uVar11 = (ulong)uVar10;
      pcVar4 = pcVar4 + -1;
    } while (uVar10 != 1);
    if (param_4 != (char *)0x0) goto LAB_001053e7;
LAB_00105550:
    iVar9 = (int)param_3;
    uVar2 = 0;
LAB_00105553:
    local_b8 = &local_88;
    icu_76_godot::CharString::append((char)local_b8,(UErrorCode *)0x5f);
    if (local_b0 != 0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_98,param_2);
      icu_76_godot::CharString::append((char *)local_b8,(int)local_98,(UErrorCode *)(ulong)local_90)
      ;
    }
    local_b8 = &local_88;
    local_ac = uVar10;
    if (uVar10 != 0) {
      pcVar4 = (char *)icu_76_godot::CharString::append((char)local_b8,(UErrorCode *)0x5f);
      icu_76_godot::CharString::append(pcVar4,iVar9,(UErrorCode *)(ulong)uVar10);
    }
LAB_00105410:
    local_b8 = &local_88;
    if (uVar2 != 0) {
      pcVar4 = strchr(param_4,0x3d);
      cVar7 = (char)local_b8;
      if (pcVar4 == (char *)0x0) {
        icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
        if (local_ac == 0) {
          icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
        }
      }
      else {
        icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x40);
      }
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_98,param_4);
      icu_76_godot::CharString::append((char *)local_b8,(int)local_98,(UErrorCode *)(ulong)local_90)
      ;
    }
LAB_00105464:
    init(this,local_88,0);
    if ((char)local_7c == '\0') goto LAB_00105623;
LAB_0010548a:
    uprv_free_76_godot(local_88);
  }
  else if (param_1 == (char *)0x0) {
    pUVar6 = (UErrorCode *)0x0;
LAB_001054c9:
    local_88 = (long)&local_7c + 1;
    local_80 = 0x28;
    local_50 = 0;
    local_7c = 0;
    icu_76_godot::CharString::append((char *)&local_88,(int)param_1,pUVar6);
    if (param_2 == (char *)0x0) {
      local_b0 = 0;
LAB_00105526:
      if (param_3 != (char *)0x0) goto LAB_00105394;
      uVar10 = 0;
LAB_00105532:
      if (param_4 == (char *)0x0) {
        if (local_b0 != 0 || uVar10 != 0) goto LAB_00105550;
        goto LAB_00105464;
      }
LAB_001053e7:
      iVar9 = (int)param_3;
      sVar3 = strlen(param_4);
      uVar2 = (uint)sVar3;
      if (uVar2 < 0x15555556) {
        local_ac = local_b0 | uVar10;
        if ((local_b0 | uVar10) != 0) goto LAB_00105553;
        goto LAB_00105410;
      }
    }
    else {
      sVar3 = strlen(param_2);
      local_b0 = (uint)sVar3;
      if (local_b0 < 0x15555556) goto LAB_00105526;
    }
    pLVar5 = *(Locale **)(this + 0xd0);
    pLVar8 = *(Locale **)(this + 0x28);
    if ((pLVar5 != pLVar8) && (pLVar1 != pLVar5)) {
LAB_001055d5:
      uprv_free_76_godot(pLVar5);
      pLVar8 = *(Locale **)(this + 0x28);
    }
LAB_001055e1:
    *(undefined8 *)(this + 0xd0) = 0;
    if (pLVar1 != pLVar8) {
      uprv_free_76_godot();
      *(Locale **)(this + 0x28) = pLVar1;
    }
    this[0x30] = (Locale)0x0;
    this[8] = (Locale)0x0;
    this[0x14] = (Locale)0x0;
    this[0x1a] = (Locale)0x0;
    this[0xd8] = (Locale)0x1;
    *(undefined4 *)(this + 0x20) = 0;
    if ((char)local_7c != '\0') goto LAB_0010548a;
  }
  else {
    sVar3 = strlen(param_1);
    pUVar6 = (UErrorCode *)(sVar3 & 0xffffffff);
    if ((uint)sVar3 < 0x15555556) goto LAB_001054c9;
    uprv_free_76_godot(0);
    *(undefined8 *)(this + 0xd0) = 0;
    if (pLVar1 != *(Locale **)(this + 0x28)) {
      uprv_free_76_godot();
      *(Locale **)(this + 0x28) = pLVar1;
    }
    this[0x30] = (Locale)0x0;
    this[8] = (Locale)0x0;
    this[0x14] = (Locale)0x0;
    this[0x1a] = (Locale)0x0;
    this[0xd8] = (Locale)0x1;
    *(undefined4 *)(this + 0x20) = 0;
  }
LAB_00105623:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105771:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::locale_init(UErrorCode&) [clone .part.0] */

void (anonymous_namespace)::locale_init(UErrorCode *param_1)

{
  long in_FS_OFFSET;
  undefined **local_128 [5];
  undefined1 *local_100;
  undefined1 local_f8 [160];
  undefined1 *local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ucln_common_registerCleanup_76_godot(6,locale_cleanup);
  icu_76_godot::Locale::Locale((Locale *)local_128,"",(char *)0x0,(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0xfc0,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_f8) && (local_58 != local_100)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"en",(char *)0x0,(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_f8) && (local_58 != local_100)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"fr",(char *)0x0,(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0xe0,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_f8) && (local_58 != local_100)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"de",(char *)0x0,(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x1c0,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_f8) && (local_58 != local_100)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"it",(char *)0x0,(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x2a0,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_f8) && (local_58 != local_100)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"ja",(char *)0x0,(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x380,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_f8) && (local_58 != local_100)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"ko",(char *)0x0,(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x460,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"zh",(char *)0x0,(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x540,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"fr","FR",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x620,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"de","DE",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x700,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"it","IT",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x7e0,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"ja","JP",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x8c0,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"ko","KR",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0x9a0,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"zh","CN",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0xa80,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"zh","TW",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0xb60,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"en","GB",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0xc40,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"en","US",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0xd20,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"en","CA",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0xe00,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  icu_76_godot::Locale::Locale((Locale *)local_128,"fr","CA",(char *)0x0,(char *)0x0);
  icu_76_godot::Locale::operator=(icu_76_godot::gLocaleCache + 0xee0,(Locale *)local_128);
  local_128[0] = &PTR__Locale_00108690;
  if ((local_58 != local_100) && (local_58 != local_f8)) {
    uprv_free_76_godot(local_58);
  }
  local_58 = (undefined1 *)0x0;
  if (local_100 != local_f8) {
    uprv_free_76_godot();
    local_100 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_128);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::locale_init(UErrorCode&) */

void __thiscall (anonymous_namespace)::locale_init(_anonymous_namespace_ *this,UErrorCode *param_1)

{
  Locale *pLVar1;
  undefined8 *puVar2;
  Locale *pLVar3;
  Locale *this_00;
  Locale *pLVar4;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)icu_76_godot::UMemory::operator_new__((UMemory *)0x10a8,(ulong)param_1);
  if (puVar2 == (undefined8 *)0x0) {
    icu_76_godot::gLocaleCache = (Locale *)0x0;
    *(undefined4 *)this = 7;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pLVar1 = (Locale *)(puVar2 + 1);
    *puVar2 = 0x13;
    this_00 = pLVar1;
    do {
      pLVar3 = this_00 + 0x30;
      *(undefined ***)this_00 = &PTR__Locale_00108690;
      *(Locale **)(this_00 + 0x28) = pLVar3;
      *(undefined8 *)(this_00 + 0xd0) = 0;
      this_00[0xd8] = (Locale)0x0;
      uprv_free_76_godot(0);
      *(undefined8 *)(this_00 + 0xd0) = 0;
      if (pLVar3 != *(Locale **)(this_00 + 0x28)) {
        uprv_free_76_godot();
        *(Locale **)(this_00 + 0x28) = pLVar3;
      }
      umtx_lock_76_godot(icu_76_godot::gDefaultLocaleMutex);
      pLVar3 = icu_76_godot::gDefaultLocale;
      if (icu_76_godot::gDefaultLocale == (Locale *)0x0) {
        umtx_unlock_76_godot();
        pLVar4 = (Locale *)0x0;
        local_44 = 0;
        pLVar3 = (Locale *)
                 icu_76_godot::locale_set_default_internal((char *)0x0,(UErrorCode *)&local_44);
      }
      else {
        pLVar4 = (Locale *)icu_76_godot::gDefaultLocaleMutex;
        umtx_unlock_76_godot();
      }
      if (this_00 != pLVar3) {
        pLVar4 = this_00;
        icu_76_godot::Locale::operator=(this_00,pLVar3);
      }
      this_00 = this_00 + 0xe0;
    } while (this_00 != (Locale *)(puVar2 + 0x215));
    icu_76_godot::gLocaleCache = pLVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      locale_init((UErrorCode *)pLVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getLocaleCache() */

undefined8 icu_76_godot::Locale::getLocaleCache(void)

{
  char cVar1;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return gLocaleCache;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getEnglish() */

undefined8 icu_76_godot::Locale::getEnglish(void)

{
  char cVar1;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return gLocaleCache;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getLocale(int) */

long __thiscall icu_76_godot::Locale::getLocale(Locale *this,int param_1)

{
  char cVar1;
  long lVar2;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init
                ((_anonymous_namespace_ *)&local_24,
                 (UErrorCode *)CONCAT44(in_register_00000034,param_1));
      _DAT_0010791c = local_24;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + (long)(int)this * 0xe0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getPRC() */

long icu_76_godot::Locale::getPRC(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0xa80;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getFrench() */

long icu_76_godot::Locale::getFrench(void)

{
  char cVar1;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return gLocaleCache + (ulong)(-(uint)(gLocaleCache != 0) & 0xe0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getKorea() */

long icu_76_godot::Locale::getKorea(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0x9a0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getFrance() */

long icu_76_godot::Locale::getFrance(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0x620;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getUK() */

long icu_76_godot::Locale::getUK(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0xc40;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getKorean() */

long icu_76_godot::Locale::getKorean(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0x460;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getSimplifiedChinese() */

long icu_76_godot::Locale::getSimplifiedChinese(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0xa80;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getUS() */

long icu_76_godot::Locale::getUS(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0xd20;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getGerman() */

long icu_76_godot::Locale::getGerman(void)

{
  char cVar1;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return gLocaleCache + (ulong)(gLocaleCache != 0) * 0x1c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getItalian() */

long icu_76_godot::Locale::getItalian(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0x2a0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getChinese() */

long icu_76_godot::Locale::getChinese(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0x540;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getCanada() */

long icu_76_godot::Locale::getCanada(void)

{
  char cVar1;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return gLocaleCache + (ulong)(gLocaleCache != 0) * 0xe00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getChina() */

long icu_76_godot::Locale::getChina(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0xa80;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getTaiwan() */

long icu_76_godot::Locale::getTaiwan(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0xb60;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getJapan() */

long icu_76_godot::Locale::getJapan(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0x8c0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getCanadaFrench() */

long icu_76_godot::Locale::getCanadaFrench(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0xee0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getGermany() */

long icu_76_godot::Locale::getGermany(void)

{
  char cVar1;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return gLocaleCache + (ulong)(gLocaleCache != 0) * 0x700;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getItaly() */

long icu_76_godot::Locale::getItaly(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0x7e0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getJapanese() */

long icu_76_godot::Locale::getJapanese(void)

{
  char cVar1;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return gLocaleCache + (ulong)(gLocaleCache != 0) * 0x380;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getRoot() */

long icu_76_godot::Locale::getRoot(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0xfc0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::Locale::getTraditionalChinese() */

long icu_76_godot::Locale::getTraditionalChinese(void)

{
  char cVar1;
  long lVar2;
  UErrorCode *in_RSI;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (gLocaleCacheInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLocaleCacheInitOnce);
    if (cVar1 != '\0') {
      ::(anonymous_namespace)::locale_init((_anonymous_namespace_ *)&local_14,in_RSI);
      _DAT_0010791c = local_14;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLocaleCacheInitOnce);
    }
  }
  lVar2 = gLocaleCache;
  if (gLocaleCache != 0) {
    lVar2 = gLocaleCache + 0xb60;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::addLikelySubtags(UErrorCode&) */

void __thiscall icu_76_godot::Locale::addLikelySubtags(Locale *this,UErrorCode *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  char local_5c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 < 1) {
    ulocimp_addLikelySubtags_76_godot((char *)&local_68,*(UErrorCode **)(this + 0x28));
    if (*(int *)param_1 < 1) {
      init(this,local_68,0);
      if (this[0xd8] != (Locale)0x0) {
        *(undefined4 *)param_1 = 1;
      }
    }
    if (local_5c != '\0') {
      uprv_free_76_godot(local_68);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::minimizeSubtags(bool, UErrorCode&) */

void __thiscall icu_76_godot::Locale::minimizeSubtags(Locale *this,bool param_1,UErrorCode *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  char local_5c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    ulocimp_minimizeSubtags_76_godot
              ((char *)&local_68,SUB81(*(undefined8 *)(this + 0x28),0),(UErrorCode *)(ulong)param_1)
    ;
    if (*(int *)param_2 < 1) {
      init(this,local_68,0);
      if (this[0xd8] != (Locale)0x0) {
        *(undefined4 *)param_2 = 1;
      }
    }
    if (local_5c != '\0') {
      uprv_free_76_godot(local_68);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::minimizeSubtags(UErrorCode&) */

void __thiscall icu_76_godot::Locale::minimizeSubtags(Locale *this,UErrorCode *param_1)

{
  minimizeSubtags(this,false,param_1);
  return;
}



/* icu_76_godot::Locale::canonicalize(UErrorCode&) */

void __thiscall icu_76_godot::Locale::canonicalize(Locale *this,UErrorCode *param_1)

{
  long in_FS_OFFSET;
  int local_78 [2];
  uint local_70;
  long local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 < 1) {
    if (this[0xd8] == (Locale)0x0) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)local_78,*(char **)(this + 0x28));
      local_68 = (long)&local_5c + 1;
      local_60 = 0x28;
      local_30 = 0;
      local_5c = 0;
      icu_76_godot::CharString::append((char *)&local_68,local_78[0],(UErrorCode *)(ulong)local_70);
      if (*(int *)param_1 < 1) {
        init(this,local_68,1);
        if (this[0xd8] != (Locale)0x0) {
          *(undefined4 *)param_1 = 1;
        }
      }
      if ((char)local_5c != '\0') {
        uprv_free_76_godot(local_68);
      }
    }
    else {
      *(undefined4 *)param_1 = 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::forLanguageTag(icu_76_godot::StringPiece, UErrorCode&) */

Locale * icu_76_godot::Locale::forLanguageTag(Locale *param_1,int param_2,uint param_3,int *param_4)

{
  Locale *pLVar1;
  int iVar2;
  long in_FS_OFFSET;
  uint local_8c;
  undefined8 local_88;
  char local_7c;
  long local_40;
  
  pLVar1 = param_1 + 0x30;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(Locale **)(param_1 + 0x28) = pLVar1;
  *(undefined ***)param_1 = &PTR__Locale_00108690;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uprv_free_76_godot(0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (pLVar1 != *(Locale **)(param_1 + 0x28)) {
    uprv_free_76_godot();
    *(Locale **)(param_1 + 0x28) = pLVar1;
  }
  param_1[0x30] = (Locale)0x0;
  param_1[8] = (Locale)0x0;
  param_1[0x14] = (Locale)0x0;
  param_1[0x1a] = (Locale)0x0;
  param_1[0xd8] = (Locale)0x1;
  iVar2 = *param_4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar2 < 1) {
    ulocimp_forLanguageTag_76_godot
              ((char *)&local_88,param_2,(int *)(ulong)param_3,(UErrorCode *)&local_8c);
    if ((*param_4 < 1) &&
       ((local_8c != param_3 || (init(param_1,local_88,0), param_1[0xd8] != (Locale)0x0)))) {
      *param_4 = 1;
    }
    if (local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::Locale::createFromName(char const*) */

Locale * __thiscall icu_76_godot::Locale::createFromName(Locale *this,char *param_1)

{
  Locale *pLVar1;
  long in_FS_OFFSET;
  undefined4 local_10c;
  undefined **local_108 [5];
  undefined1 *local_e0;
  undefined1 local_d8 [160];
  undefined1 *local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
    umtx_lock_76_godot(gDefaultLocaleMutex);
    pLVar1 = gDefaultLocale;
    if (gDefaultLocale == (Locale *)0x0) {
      umtx_unlock_76_godot();
      local_10c = 0;
      pLVar1 = (Locale *)locale_set_default_internal((char *)0x0,(UErrorCode *)&local_10c);
    }
    else {
      umtx_unlock_76_godot();
    }
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined ***)this = &PTR__Locale_00108690;
    *(Locale **)(this + 0x28) = this + 0x30;
    if (this != pLVar1) {
      operator=(this,pLVar1);
    }
  }
  else {
    Locale((Locale *)local_108,"",(char *)0x0,(char *)0x0,(char *)0x0);
    init((Locale *)local_108,param_1,0);
    *(Locale **)(this + 0x28) = this + 0x30;
    *(undefined ***)this = &PTR__Locale_00108690;
    *(Locale **)(this + 0xd0) = this + 0x30;
    operator=(this,(Locale *)local_108);
    local_108[0] = &PTR__Locale_00108690;
    if ((local_38 != local_e0) && (local_38 != local_d8)) {
      uprv_free_76_godot(local_38);
    }
    local_38 = (undefined1 *)0x0;
    if (local_e0 != local_d8) {
      uprv_free_76_godot();
      local_e0 = (undefined1 *)0x0;
    }
    icu_76_godot::UObject::~UObject((UObject *)local_108);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::createCanonical(char const*) */

Locale * __thiscall icu_76_godot::Locale::createCanonical(Locale *this,char *param_1)

{
  Locale(this,"",(char *)0x0,(char *)0x0,(char *)0x0);
  init(this,param_1,1);
  return this;
}



/* icu_76_godot::Locale::setFromPOSIXID(char const*) */

void __thiscall icu_76_godot::Locale::setFromPOSIXID(Locale *this,char *param_1)

{
  init(this,param_1,1);
  return;
}



/* ulocimp_isCanonicalizedLocaleForTest_76_godot(char const*) */

bool ulocimp_isCanonicalizedLocaleForTest_76_godot(char *param_1)

{
  bool bVar1;
  char cVar2;
  long in_FS_OFFSET;
  int local_1ac;
  AliasReplacer local_1a8 [16];
  undefined1 local_198 [16];
  UVector local_188 [40];
  undefined8 local_160;
  long local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined4 local_120;
  undefined **local_118 [5];
  undefined1 *local_f0;
  undefined1 local_e8 [160];
  undefined1 *local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::Locale::Locale((Locale *)local_118,param_1,(char *)0x0,(char *)0x0,(char *)0x0);
  local_158 = (long)&local_14c + 1;
  local_14c = 0;
  local_1a8[0] = (AliasReplacer)0x0;
  local_1a8[1] = (AliasReplacer)0x0;
  local_1a8[2] = (AliasReplacer)0x0;
  local_1a8[3] = (AliasReplacer)0x0;
  local_1a8[4] = (AliasReplacer)0x0;
  local_1a8[5] = (AliasReplacer)0x0;
  local_1a8[6] = (AliasReplacer)0x0;
  local_1a8[7] = (AliasReplacer)0x0;
  local_1a8[8] = (AliasReplacer)0x0;
  local_1a8[9] = (AliasReplacer)0x0;
  local_1a8[10] = (AliasReplacer)0x0;
  local_1a8[0xb] = (AliasReplacer)0x0;
  local_1a8[0xc] = (AliasReplacer)0x0;
  local_1a8[0xd] = (AliasReplacer)0x0;
  local_1a8[0xe] = (AliasReplacer)0x0;
  local_1a8[0xf] = (AliasReplacer)0x0;
  local_198 = (undefined1  [16])0x0;
  local_1ac = 0;
  local_150 = 0x28;
  local_120 = 0;
  icu_76_godot::UVector::UVector
            (local_188,(_func_void_void_ptr *)0x0,
             icu_76_godot::(anonymous_namespace)::AliasReplacer::AliasReplacer(UErrorCode&)::
             {lambda(UElement,UElement)#1}::_FUN,(UErrorCode *)&local_1ac);
  local_160 = 0;
  cVar2 = icu_76_godot::(anonymous_namespace)::AliasReplacer::replace
                    (local_1a8,(Locale *)local_118,(CharString *)&local_158,(UErrorCode *)&local_1ac
                    );
  icu_76_godot::UVector::~UVector(local_188);
  bVar1 = local_1ac < 1;
  if ((char)local_14c != '\0') {
    uprv_free_76_godot(local_158);
  }
  local_118[0] = &PTR__Locale_00108690;
  if ((local_48 != local_f0) && (local_48 != local_e8)) {
    uprv_free_76_godot(local_48);
  }
  local_48 = (undefined1 *)0x0;
  if (local_f0 != local_e8) {
    uprv_free_76_godot();
    local_f0 = (undefined1 *)0x0;
  }
  icu_76_godot::UObject::~UObject((UObject *)local_118);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar2 == '\0' && bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::KeywordEnumeration::getDynamicClassID() const */

undefined1 * icu_76_godot::KeywordEnumeration::getDynamicClassID(void)

{
  return &fgClassID;
}



/* icu_76_godot::KeywordEnumeration::reset(UErrorCode&) */

void __thiscall
icu_76_godot::KeywordEnumeration::reset(KeywordEnumeration *this,UErrorCode *param_1)

{
  if (*(int *)param_1 < 1) {
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)(this + 0x78);
  }
  return;
}



/* icu_76_godot::KeywordEnumeration::next(int*, UErrorCode&) */

char * __thiscall
icu_76_godot::KeywordEnumeration::next(KeywordEnumeration *this,int *param_1,UErrorCode *param_2)

{
  char *__s;
  size_t sVar1;
  
  if ((*(int *)param_2 < 1) && (__s = *(char **)(this + 0xb8), *__s != '\0')) {
    sVar1 = strlen(__s);
    *(char **)(this + 0xb8) = __s + (long)(int)sVar1 + 1;
    if (param_1 != (int *)0x0) {
      *param_1 = (int)sVar1;
    }
    return __s;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  return (char *)0x0;
}



/* icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink() */

void __thiscall
icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink
          (StringByteSink<icu_76_godot::CharString> *this)

{
  *(undefined ***)this = &PTR__StringByteSink_00108658;
  icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)this);
  return;
}



/* icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink() */

void __thiscall
icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink
          (StringByteSink<icu_76_godot::CharString> *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__StringByteSink_00108658;
  icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::KeywordEnumeration::snext(UErrorCode&) */

undefined8 __thiscall
icu_76_godot::KeywordEnumeration::snext(KeywordEnumeration *this,UErrorCode *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  if (*(int *)param_1 < 1) {
    local_24 = 0;
    iVar1 = (**(code **)(*(long *)this + 0x28))(this,&local_24,param_1);
    uVar2 = icu_76_godot::StringEnumeration::setChars
                      ((char *)this,iVar1,(UErrorCode *)(ulong)local_24);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeKeywordEnumeration::count(UErrorCode&) const */

int __thiscall
icu_76_godot::UnicodeKeywordEnumeration::count(UnicodeKeywordEnumeration *this,UErrorCode *param_1)

{
  char cVar1;
  char *__s;
  long lVar2;
  size_t sVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)param_1 < 1) {
    __s = *(char **)(this + 0x78);
    cVar1 = *__s;
    iVar4 = 0;
    while (cVar1 != '\0') {
      lVar2 = uloc_toUnicodeLocaleKey_76_godot(__s);
      iVar4 = (iVar4 + 1) - (uint)(lVar2 == 0);
      sVar3 = strlen(__s);
      __s = __s + sVar3 + 1;
      cVar1 = *__s;
    }
  }
  return iVar4;
}



/* icu_76_godot::KeywordEnumeration::count(UErrorCode&) const */

int __thiscall icu_76_godot::KeywordEnumeration::count(KeywordEnumeration *this,UErrorCode *param_1)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)param_1 < 1) {
    __s = *(char **)(this + 0x78);
    cVar1 = *__s;
    iVar3 = 0;
    while (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
      sVar2 = strlen(__s);
      __s = __s + sVar2 + 1;
      cVar1 = *__s;
    }
  }
  return iVar3;
}



/* icu_76_godot::UnicodeKeywordEnumeration::next(int*, UErrorCode&) */

char * __thiscall
icu_76_godot::UnicodeKeywordEnumeration::next
          (UnicodeKeywordEnumeration *this,int *param_1,UErrorCode *param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((*(int *)param_2 < 1) && (pcVar3 = *(char **)(this + 0xb8), *pcVar3 != '\0')) {
    sVar1 = strlen(pcVar3);
    pcVar2 = pcVar3 + (long)(int)sVar1 + 1;
    while( true ) {
      *(char **)(this + 0xb8) = pcVar2;
      pcVar3 = (char *)uloc_toUnicodeLocaleKey_76_godot(pcVar3);
      if (pcVar3 != (char *)0x0) break;
      if ((0 < *(int *)param_2) || (pcVar3 = *(char **)(this + 0xb8), *pcVar3 == '\0'))
      goto LAB_00107f70;
      sVar1 = strlen(pcVar3);
      pcVar2 = pcVar3 + (long)(int)sVar1 + 1;
    }
    if (param_1 != (int *)0x0) {
      sVar1 = strlen(pcVar3);
      *param_1 = (int)sVar1;
      return pcVar3;
    }
  }
  else {
LAB_00107f70:
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



/* icu_76_godot::KeywordEnumeration::clone() const */

StringEnumeration * icu_76_godot::KeywordEnumeration::clone(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  StringEnumeration *this;
  ulong in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  this = (StringEnumeration *)icu_76_godot::UMemory::operator_new((UMemory *)0xc0,in_RSI);
  if (this != (StringEnumeration *)0x0) {
    uVar3 = *(undefined8 *)(in_RDI + 0xb8);
    lVar4 = *(long *)(in_RDI + 0x78);
    uVar1 = *(uint *)(in_RDI + 0xb0);
    icu_76_godot::StringEnumeration::StringEnumeration(this);
    *(undefined2 *)(this + 0x84) = 0;
    *(undefined ***)this = &PTR__KeywordEnumeration_001086b8;
    *(StringEnumeration **)(this + 0x78) = this + 0x85;
    *(undefined4 *)(this + 0x80) = 0x28;
    *(undefined4 *)(this + 0xb0) = 0;
    *(StringEnumeration **)(this + 0xb8) = this + 0x85;
    if ((0 < (int)uVar1) && (lVar4 != 0)) {
      iVar5 = (int)lVar4;
      icu_76_godot::CharString::append((char *)(this + 0x78),iVar5,(UErrorCode *)(ulong)uVar1);
      *(long *)(this + 0xb8) = (long)((int)uVar3 - iVar5) + *(long *)(this + 0x78);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
LAB_0010837f:
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
      goto LAB_0010837f;
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



/* icu_76_godot::(anonymous namespace)::AliasReplacer::replace(icu_76_godot::Locale const&,
   icu_76_godot::CharString&, UErrorCode&) [clone .cold] */

void icu_76_godot::(anonymous_namespace)::AliasReplacer::replace
               (Locale *param_1,CharString *param_2,UErrorCode *param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



