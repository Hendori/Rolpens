
/* icu_76_godot::LocaleBuilder::~LocaleBuilder() */

void __thiscall icu_76_godot::LocaleBuilder::~LocaleBuilder(LocaleBuilder *this)

{
  UMemory *this_00;
  void *in_RSI;
  
  this_00 = *(UMemory **)(this + 0x20);
  *(undefined ***)this = &PTR__LocaleBuilder_00102200;
  if (this_00 != (UMemory *)0x0) {
    if (this_00[0xc] != (UMemory)0x0) {
      uprv_free_76_godot(*(undefined8 *)this_00);
    }
    icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::LocaleBuilder::~LocaleBuilder() */

void __thiscall icu_76_godot::LocaleBuilder::~LocaleBuilder(LocaleBuilder *this)

{
  void *in_RSI;
  
  ~LocaleBuilder(this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* (anonymous namespace)::_isExtensionSubtags(char, char const*, int) */

void (anonymous_namespace)::_isExtensionSubtags(char param_1,char *param_2,int param_3)

{
  char cVar1;
  
  cVar1 = uprv_asciitolower_76_godot((int)param_1);
  if (cVar1 == 'u') {
    ultag_isUnicodeExtensionSubtags_76_godot(param_2,param_3);
    return;
  }
  if (cVar1 != 'x') {
    if (cVar1 != 't') {
      ultag_isExtensionSubtags_76_godot(param_2,param_3);
      return;
    }
    ultag_isTransformedExtensionSubtags_76_godot(param_2,param_3);
    return;
  }
  ultag_isPrivateuseValueSubtags_76_godot(param_2,param_3);
  return;
}



/* icu_76_godot::(anonymous namespace)::setField(icu_76_godot::StringPiece, char*, UErrorCode&, bool
   (*)(char const*, int)) [clone .isra.0] */

void __thiscall
icu_76_godot::(anonymous_namespace)::setField
          (_anonymous_namespace_ *this,int param_2,undefined1 *param_3,int *param_4,code *param_5)

{
  char cVar1;
  
  if (0 < *param_4) {
    return;
  }
  if (param_2 == 0) {
    *param_3 = 0;
  }
  else {
    cVar1 = (*param_5)(this,param_2);
    if (cVar1 == '\0') {
      *param_4 = 1;
      return;
    }
    memcpy(param_3,this,(long)param_2);
    param_3[param_2] = 0;
  }
  return;
}



/* icu_76_godot::(anonymous namespace)::_copyExtensions(icu_76_godot::Locale const&,
   icu_76_godot::StringEnumeration*, icu_76_godot::Locale&, bool, UErrorCode&) */

void icu_76_godot::(anonymous_namespace)::_copyExtensions
               (Locale *param_1,StringEnumeration *param_2,Locale *param_3,bool param_4,
               UErrorCode *param_5)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *__s1;
  size_t sVar6;
  size_t sVar7;
  StringEnumeration *pSVar8;
  char *pcVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  int local_108;
  undefined4 uStack_104;
  char *local_100;
  char local_f8;
  undefined **local_e8;
  char *local_e0;
  char local_d8;
  char *local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  int local_90;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_5 < 1) {
    pSVar8 = (StringEnumeration *)0x0;
    if (param_2 == (StringEnumeration *)0x0) {
      pSVar8 = (StringEnumeration *)icu_76_godot::Locale::createKeywords((UErrorCode *)param_1);
      if (*(int *)param_5 < 1) {
        param_2 = pSVar8;
        if (pSVar8 == (StringEnumeration *)0x0) goto LAB_001004f0;
        goto LAB_001001b8;
      }
    }
    else {
LAB_001001b8:
      while (__s1 = (char *)(**(code **)(*(long *)param_2 + 0x28))(param_2,0,param_5),
            __s1 != (char *)0x0) {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_108,__s1);
        pcVar10 = local_100;
        uVar1 = CONCAT44(uStack_104,local_108);
        if (0 < *(int *)param_5) {
          local_c8 = (char *)((long)&local_bc + 1);
          local_c0 = 0x28;
          local_90 = 0;
          local_bc = 0;
LAB_0010021c:
joined_r0x0010048a:
          if ((char)local_bc != '\0') {
            uprv_free_76_godot(local_c8);
          }
          break;
        }
        local_88 = (long)&local_7c + 1;
        local_7c = 0;
        local_80 = 0x28;
        local_50 = 0;
        icu_76_godot::CharStringByteSink::CharStringByteSink
                  ((CharStringByteSink *)&local_e8,(CharString *)&local_88);
        local_e8 = &PTR__StringByteSink_001021c8;
        icu_76_godot::Locale::getKeywordValue
                  (param_1,uVar1,pcVar10,(CharStringByteSink *)&local_e8,param_5);
        icu_76_godot::CharString::CharString((CharString *)&local_c8,(CharString *)&local_88);
        local_e8 = &PTR__StringByteSink_001021c8;
        icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)&local_e8);
        if ((char)local_7c != '\0') {
          uprv_free_76_godot(local_88);
        }
        if (0 < *(int *)param_5) goto LAB_0010021c;
        iVar4 = strcmp(__s1,"attribute");
        if ((iVar4 == 0) && (0 < local_90)) {
          pcVar9 = local_c8 + local_90;
          pcVar10 = local_c8;
          do {
            cVar2 = '-';
            if (*pcVar10 != '_') {
              cVar2 = uprv_asciitolower_76_godot();
            }
            *pcVar10 = cVar2;
            pcVar10 = pcVar10 + 1;
          } while (pcVar9 != pcVar10);
        }
        iVar4 = local_90;
        pcVar10 = local_c8;
        if (param_4) {
          if (__s1[1] == '\0') {
            cVar2 = uprv_asciitolower_76_godot((int)*__s1);
            cVar3 = uprv_isASCIILetter_76_godot();
            if ((cVar3 == '\0') && (9 < (byte)(cVar2 - 0x30U))) goto LAB_00100479;
            cVar2 = ::(anonymous_namespace)::_isExtensionSubtags(*__s1,pcVar10,iVar4);
            if (cVar2 != '\0') goto LAB_00100387;
            *(undefined4 *)param_5 = 1;
          }
          else {
            iVar5 = strcmp(__s1,"attribute");
            if (iVar5 == 0) {
              cVar2 = ultag_isUnicodeLocaleAttributes_76_godot(pcVar10,iVar4);
            }
            else {
              sVar6 = strlen(__s1);
              ulocimp_toBcpKeyWithFallback_76_godot((StringPiece *)&local_108,sVar6,__s1);
              sVar6 = strlen(pcVar10);
              sVar7 = strlen(__s1);
              ulocimp_toBcpTypeWithFallback_76_godot
                        ((CharStringByteSink *)&local_e8,sVar7,__s1,sVar6,pcVar10);
              if (((local_f8 == '\0') || (local_d8 == '\0')) ||
                 (cVar2 = ultag_isUnicodeLocaleKey_76_godot(local_100,local_108), cVar2 == '\0'))
              goto LAB_00100479;
              cVar2 = ultag_isUnicodeLocaleType_76_godot(local_e0,(int)local_e8);
            }
            if (cVar2 != '\0') goto LAB_00100387;
LAB_00100479:
            *(undefined4 *)param_5 = 1;
          }
          goto joined_r0x0010048a;
        }
LAB_00100387:
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_e8,local_c8);
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_108,__s1);
        icu_76_godot::Locale::setKeywordValue
                  (param_3,CONCAT44(uStack_104,local_108),local_100,local_e8,local_e0,param_5);
        if (0 < *(int *)param_5) goto LAB_0010021c;
        if ((char)local_bc != '\0') {
          uprv_free_76_godot(local_c8);
        }
      }
    }
    if (pSVar8 != (StringEnumeration *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010026c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)pSVar8 + 8))(pSVar8);
        return;
      }
      goto LAB_001005c3;
    }
  }
LAB_001004f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001005c3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleBuilder::LocaleBuilder() */

void __thiscall icu_76_godot::LocaleBuilder::LocaleBuilder(LocaleBuilder *this)

{
  this[0x14] = (LocaleBuilder)0x0;
  *(undefined ***)this = &PTR__LocaleBuilder_00102200;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x15) = 0;
  this[0x19] = (LocaleBuilder)0x0;
  *(undefined4 *)(this + 0x1a) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::LocaleBuilder::setLanguage(icu_76_godot::StringPiece) */

long icu_76_godot::LocaleBuilder::setLanguage(long param_1,char *param_2,int param_3)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) < 1) {
    if (param_3 == 0) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    else {
      cVar1 = ultag_isLanguageSubtag_76_godot(param_2,param_3);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 8) = 1;
        return param_1;
      }
      memcpy((void *)(param_1 + 0xc),param_2,(long)param_3);
      *(undefined1 *)(param_1 + 0xc + (long)param_3) = 0;
    }
  }
  return param_1;
}



/* icu_76_godot::LocaleBuilder::setScript(icu_76_godot::StringPiece) */

long icu_76_godot::LocaleBuilder::setScript(long param_1,char *param_2,int param_3)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) < 1) {
    if (param_3 == 0) {
      *(undefined1 *)(param_1 + 0x15) = 0;
    }
    else {
      cVar1 = ultag_isScriptSubtag_76_godot(param_2,param_3);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 8) = 1;
        return param_1;
      }
      memcpy((void *)(param_1 + 0x15),param_2,(long)param_3);
      *(undefined1 *)(param_1 + 0x15 + (long)param_3) = 0;
    }
  }
  return param_1;
}



/* icu_76_godot::LocaleBuilder::setRegion(icu_76_godot::StringPiece) */

long icu_76_godot::LocaleBuilder::setRegion(long param_1,char *param_2,int param_3)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) < 1) {
    if (param_3 == 0) {
      *(undefined1 *)(param_1 + 0x1a) = 0;
    }
    else {
      cVar1 = ultag_isRegionSubtag_76_godot(param_2,param_3);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 8) = 1;
        return param_1;
      }
      memcpy((void *)(param_1 + 0x1a),param_2,(long)param_3);
      *(undefined1 *)(param_1 + 0x1a + (long)param_3) = 0;
    }
  }
  return param_1;
}



/* icu_76_godot::LocaleBuilder::setVariant(icu_76_godot::StringPiece) */

long icu_76_godot::LocaleBuilder::setVariant(long param_1,void *param_2,uint param_3)

{
  char *pcVar1;
  UMemory *this;
  char cVar2;
  UMemory *pUVar3;
  char *pcVar4;
  void *pvVar5;
  
  if (*(int *)(param_1 + 8) < 1) {
    if (param_3 == 0) {
      pUVar3 = *(UMemory **)(param_1 + 0x20);
      if (pUVar3 != (UMemory *)0x0) {
        if (pUVar3[0xc] != (UMemory)0x0) {
          uprv_free_76_godot(*(undefined8 *)pUVar3);
        }
        icu_76_godot::UMemory::operator_delete(pUVar3,param_2);
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      pUVar3 = (UMemory *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)param_2);
      if (pUVar3 == (UMemory *)0x0) {
        if (*(int *)(param_1 + 8) < 1) {
          *(undefined4 *)(param_1 + 8) = 7;
        }
      }
      else {
        *(UMemory **)pUVar3 = pUVar3 + 0xd;
        *(undefined4 *)(pUVar3 + 8) = 0x28;
        *(undefined4 *)(pUVar3 + 0x38) = 0;
        *(undefined2 *)(pUVar3 + 0xc) = 0;
        icu_76_godot::CharString::append((char *)pUVar3,(int)param_2,(UErrorCode *)(ulong)param_3);
        if (*(int *)(param_1 + 8) < 1) {
          pvVar5 = (void *)(long)*(int *)(pUVar3 + 0x38);
          pcVar4 = *(char **)pUVar3;
          if (0 < *(int *)(pUVar3 + 0x38)) {
            pcVar1 = pcVar4 + (long)pvVar5;
            do {
              cVar2 = '-';
              if (*pcVar4 != '_') {
                cVar2 = uprv_asciitolower_76_godot();
              }
              *pcVar4 = cVar2;
              pcVar4 = pcVar4 + 1;
            } while (pcVar4 != pcVar1);
            pcVar4 = *(char **)pUVar3;
            pvVar5 = (void *)(ulong)*(uint *)(pUVar3 + 0x38);
          }
          cVar2 = ultag_isVariantSubtags_76_godot(pcVar4,(int)pvVar5);
          if (cVar2 != '\0') {
            this = *(UMemory **)(param_1 + 0x20);
            if (this != (UMemory *)0x0) {
              if (this[0xc] != (UMemory)0x0) {
                uprv_free_76_godot(*(undefined8 *)this);
              }
              icu_76_godot::UMemory::operator_delete(this,pvVar5);
            }
            *(UMemory **)(param_1 + 0x20) = pUVar3;
            return param_1;
          }
          if (pUVar3[0xc] != (UMemory)0x0) {
            uprv_free_76_godot(*(undefined8 *)pUVar3);
          }
          icu_76_godot::UMemory::operator_delete(pUVar3,pvVar5);
          *(undefined4 *)(param_1 + 8) = 1;
        }
      }
    }
  }
  return param_1;
}



/* icu_76_godot::LocaleBuilder::setUnicodeLocaleKeyword(icu_76_godot::StringPiece,
   icu_76_godot::StringPiece) */

long icu_76_godot::LocaleBuilder::setUnicodeLocaleKeyword
               (long param_1,char *param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  char cVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 8)) {
    return param_1;
  }
  cVar1 = ultag_isUnicodeLocaleKey_76_godot(param_2,(int)param_3);
  if ((cVar1 == '\0') ||
     (((int)param_5 != 0 &&
      (cVar1 = ultag_isUnicodeLocaleType_76_godot(param_4,(int)param_5), cVar1 == '\0')))) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) {
      icu_76_godot::Locale::getRoot();
      lVar2 = icu_76_godot::Locale::clone();
      *(long *)(param_1 + 0x28) = lVar2;
      if (lVar2 == 0) {
        *(undefined4 *)(param_1 + 8) = 7;
        return param_1;
      }
    }
    icu_76_godot::Locale::setUnicodeKeywordValue(lVar2,param_2,param_3,param_4,param_5,param_1 + 8);
  }
  return param_1;
}



/* icu_76_godot::LocaleBuilder::addUnicodeLocaleAttribute(icu_76_godot::StringPiece) */

long icu_76_godot::LocaleBuilder::addUnicodeLocaleAttribute
               (long param_1,int param_2,UErrorCode *param_3)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  char cVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  char cVar12;
  long in_FS_OFFSET;
  StringPiece *local_160;
  int local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined **local_118;
  uint local_110;
  undefined4 uStack_10c;
  char *local_108;
  undefined4 local_100;
  undefined2 local_fc;
  int local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  int local_90;
  char *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = (char *)((long)&local_fc + 1);
  local_100 = 0x28;
  local_d0 = 0;
  local_fc = 0;
  icu_76_godot::CharString::append((char *)&local_108,param_2,param_3);
  if (0 < *(int *)(param_1 + 8)) goto LAB_00100a1b;
  if (0 < local_d0) {
    pcVar6 = local_108 + local_d0;
    pcVar8 = local_108;
    do {
      cVar2 = '-';
      if (*pcVar8 != '_') {
        cVar2 = uprv_asciitolower_76_godot();
      }
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
    } while (pcVar6 != pcVar8);
  }
  cVar2 = ultag_isUnicodeLocaleAttribute_76_godot(local_108,local_d0);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 8) = 1;
    goto LAB_00100a1b;
  }
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 == 0) {
    icu_76_godot::Locale::getRoot();
    lVar10 = icu_76_godot::Locale::clone();
    *(long *)(param_1 + 0x28) = lVar10;
    if (lVar10 == 0) {
      *(undefined4 *)(param_1 + 8) = 7;
    }
    else {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_118,local_108);
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_128,"attribute");
      icu_76_godot::Locale::setKeywordValue
                (lVar10,local_128,local_120,local_118,CONCAT44(uStack_10c,local_110),param_1 + 8);
    }
    goto LAB_00100a1b;
  }
  local_12c = 0;
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_128,"attribute");
  uVar1 = local_120;
  uVar9 = local_128;
  if (local_12c < 1) {
    pcVar6 = (char *)((long)&local_7c + 1);
    local_7c = 0;
    local_80 = 0x28;
    local_50 = 0;
    local_88 = pcVar6;
    icu_76_godot::CharStringByteSink::CharStringByteSink
              ((CharStringByteSink *)&local_118,(CharString *)&local_88);
    local_118 = &PTR__StringByteSink_001021c8;
    icu_76_godot::Locale::getKeywordValue
              (lVar10,uVar9,uVar1,(CharStringByteSink *)&local_118,&local_12c);
    icu_76_godot::CharString::CharString((CharString *)&local_c8,(CharString *)&local_88);
    local_118 = &PTR__StringByteSink_001021c8;
    icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)&local_118);
    if ((char)local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
    local_160 = (StringPiece *)&local_118;
    if (0 < local_12c) goto LAB_00100b44;
    lVar10 = (long)local_90;
    if (0 < local_90) {
      pcVar11 = local_c8 + lVar10;
      pcVar8 = local_c8;
      do {
        cVar3 = '-';
        if (*pcVar8 != '_') {
          cVar3 = uprv_asciitolower_76_godot();
        }
        *pcVar8 = cVar3;
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 != pcVar11);
      lVar10 = (long)local_90;
    }
    pcVar11 = local_c8 + lVar10;
    local_80 = 0x28;
    local_50 = 0;
    local_7c = 0;
    pcVar8 = local_c8;
    cVar3 = '\0';
    local_88 = pcVar6;
    if (local_c8 < pcVar11) {
      do {
        pcVar6 = local_108;
        cVar7 = (char)(CharString *)&local_88;
        cVar12 = cVar2;
        if (cVar3 == '\0') {
          iVar4 = strcmp(pcVar8,local_108);
          if (iVar4 == 0) goto LAB_00100bd6;
          cVar12 = cVar3;
          if (0 < iVar4) {
            if (local_50 != 0) {
              icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
              pcVar6 = local_108;
            }
            icu_76_godot::StringPiece::StringPiece(local_160,pcVar6);
            icu_76_godot::CharString::append
                      ((char *)&local_88,(int)local_118,(UErrorCode *)(ulong)local_110);
            cVar12 = cVar2;
          }
        }
        if (local_50 != 0) {
          icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
        }
        icu_76_godot::StringPiece::StringPiece(local_160,pcVar8);
        icu_76_godot::CharString::append
                  ((char *)&local_88,(int)local_118,(UErrorCode *)(ulong)local_110);
        sVar5 = strlen(pcVar8);
        pcVar8 = pcVar8 + sVar5 + 1;
        cVar3 = cVar12;
      } while (pcVar8 < pcVar11);
      if (cVar12 == '\0') {
        if (local_50 != 0) {
          icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
        }
        goto LAB_00100f06;
      }
    }
    else {
LAB_00100f06:
      icu_76_godot::StringPiece::StringPiece(local_160,local_108);
      icu_76_godot::CharString::append
                ((char *)&local_88,(int)local_118,(UErrorCode *)(ulong)local_110);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    local_c8 = (char *)((long)&local_bc + 1);
    local_c0 = 0x28;
    local_90 = 0;
    local_bc = 0;
LAB_00100b44:
    local_160 = (StringPiece *)&local_118;
    icu_76_godot::StringPiece::StringPiece(local_160,local_108);
    local_7c = 0;
    local_80 = 0x28;
    local_50 = 0;
    local_88 = (char *)((long)&local_7c + 1);
    icu_76_godot::CharString::append
              ((char *)&local_88,(int)local_118,(UErrorCode *)(ulong)local_110);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
  }
  local_160 = (StringPiece *)&local_118;
  icu_76_godot::StringPiece::StringPiece(local_160,local_88);
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_128,"attribute");
  icu_76_godot::Locale::setKeywordValue
            (uVar9,local_128,local_120,local_118,CONCAT44(uStack_10c,local_110),param_1 + 8);
LAB_00100bd6:
  if ((char)local_7c != '\0') {
    uprv_free_76_godot(local_88);
  }
  if ((char)local_bc != '\0') {
    uprv_free_76_godot(local_c8);
  }
LAB_00100a1b:
  if ((char)local_fc != '\0') {
    uprv_free_76_godot(local_108);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::LocaleBuilder::removeUnicodeLocaleAttribute(icu_76_godot::StringPiece) */

long icu_76_godot::LocaleBuilder::removeUnicodeLocaleAttribute
               (long param_1,int param_2,UErrorCode *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  char cVar11;
  long in_FS_OFFSET;
  int local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined **local_118;
  uint local_110;
  undefined4 uStack_10c;
  char *local_108;
  undefined4 local_100;
  undefined2 local_fc;
  int local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  int local_90;
  char *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = (char *)((long)&local_fc + 1);
  local_100 = 0x28;
  local_d0 = 0;
  local_fc = 0;
  icu_76_godot::CharString::append((char *)&local_108,param_2,param_3);
  if (*(int *)(param_1 + 8) < 1) {
    if (0 < local_d0) {
      pcVar1 = local_108 + local_d0;
      pcVar8 = local_108;
      do {
        cVar4 = '-';
        if (*pcVar8 != '_') {
          cVar4 = uprv_asciitolower_76_godot();
        }
        *pcVar8 = cVar4;
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 != pcVar1);
    }
    cVar4 = ultag_isUnicodeLocaleAttribute_76_godot(local_108,local_d0);
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1 + 8) = 1;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x28);
      if (lVar9 != 0) {
        local_12c = 0;
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_128,"attribute");
        uVar3 = local_120;
        uVar2 = local_128;
        if (local_12c < 1) {
          local_7c = 0;
          pcVar1 = (char *)((long)&local_7c + 1);
          local_80 = 0x28;
          local_50 = 0;
          local_88 = pcVar1;
          icu_76_godot::CharStringByteSink::CharStringByteSink
                    ((CharStringByteSink *)&local_118,(CharString *)&local_88);
          local_118 = &PTR__StringByteSink_001021c8;
          icu_76_godot::Locale::getKeywordValue
                    (lVar9,uVar2,uVar3,(CharStringByteSink *)&local_118,&local_12c);
          icu_76_godot::CharString::CharString((CharString *)&local_c8,(CharString *)&local_88);
          local_118 = &PTR__StringByteSink_001021c8;
          icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)&local_118);
          if ((char)local_7c != '\0') {
            uprv_free_76_godot(local_88);
          }
          pcVar8 = local_c8;
          if ((local_12c < 1) && (local_90 != 0)) {
            if (0 < local_90) {
              lVar9 = 0;
              do {
                cVar5 = pcVar8[lVar9];
                if ((cVar5 == '_') || (cVar5 == '-')) {
                  cVar5 = '\0';
                }
                else {
                  cVar5 = uprv_asciitolower_76_godot();
                }
                pcVar8[lVar9] = cVar5;
                lVar9 = lVar9 + 1;
              } while ((int)lVar9 < local_90);
            }
            pcVar10 = local_c8 + local_90;
            local_7c = 0;
            local_80 = 0x28;
            local_50 = 0;
            pcVar8 = local_c8;
            local_88 = pcVar1;
            cVar5 = '\0';
            if (local_c8 < pcVar10) {
              do {
                iVar6 = strcmp(pcVar8,local_108);
                cVar11 = cVar4;
                if (iVar6 != 0) {
                  if (local_50 != 0) {
                    icu_76_godot::CharString::append
                              ((char)(CharString *)&local_88,(UErrorCode *)0x5f);
                  }
                  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_118,pcVar8);
                  icu_76_godot::CharString::append
                            ((char *)&local_88,(int)local_118,(UErrorCode *)(ulong)local_110);
                  cVar11 = cVar5;
                }
                sVar7 = strlen(pcVar8);
                pcVar8 = pcVar8 + sVar7 + 1;
                cVar5 = cVar11;
              } while (pcVar8 < pcVar10);
              if (cVar11 != '\0') {
                uVar2 = *(undefined8 *)(param_1 + 0x28);
                icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_118,local_88);
                icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_128,"attribute");
                icu_76_godot::Locale::setKeywordValue
                          (uVar2,local_128,local_120,local_118,CONCAT44(uStack_10c,local_110),
                           param_1 + 8);
              }
              if ((char)local_7c != '\0') {
                uprv_free_76_godot(local_88);
              }
            }
          }
        }
        else {
          local_c8 = (char *)((long)&local_bc + 1);
          local_c0 = 0x28;
          local_90 = 0;
          local_bc = 0;
        }
        if ((char)local_bc != '\0') {
          uprv_free_76_godot(local_c8);
        }
      }
    }
  }
  if ((char)local_fc != '\0') {
    uprv_free_76_godot(local_108);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::LocaleBuilder::clear() */

void icu_76_godot::LocaleBuilder::clear(void)

{
  UMemory *this;
  void *in_RSI;
  long in_RDI;
  
  this = *(UMemory **)(in_RDI + 0x20);
  *(undefined4 *)(in_RDI + 8) = 0;
  *(undefined1 *)(in_RDI + 0xc) = 0;
  *(undefined1 *)(in_RDI + 0x15) = 0;
  *(undefined1 *)(in_RDI + 0x1a) = 0;
  if (this != (UMemory *)0x0) {
    if (this[0xc] != (UMemory)0x0) {
      uprv_free_76_godot(*(undefined8 *)this);
    }
    icu_76_godot::UMemory::operator_delete(this,in_RSI);
  }
  *(undefined8 *)(in_RDI + 0x20) = 0;
  if (*(long **)(in_RDI + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(in_RDI + 0x28) + 8))();
  }
  *(undefined8 *)(in_RDI + 0x28) = 0;
  return;
}



/* icu_76_godot::LocaleBuilder::setLocale(icu_76_godot::Locale const&) */

LocaleBuilder * __thiscall
icu_76_godot::LocaleBuilder::setLocale(LocaleBuilder *this,Locale *param_1)

{
  LocaleBuilder *pLVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  _anonymous_namespace_ *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_30;
  
  pLVar1 = this + 8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  clear();
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_48,(char *)(param_1 + 8));
  (anonymous_namespace)::setField
            (local_48,local_40,this + 0xc,pLVar1,ultag_isLanguageSubtag_76_godot);
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_48,(char *)(param_1 + 0x14));
  (anonymous_namespace)::setField
            (local_48,local_40,this + 0x15,pLVar1,ultag_isScriptSubtag_76_godot);
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_48,(char *)(param_1 + 0x1a));
  (anonymous_namespace)::setField
            (local_48,local_40,this + 0x1a,pLVar1,ultag_isRegionSubtag_76_godot);
  pcVar3 = "";
  if (param_1[0xd8] == (Locale)0x0) {
    pcVar3 = (char *)((long)*(int *)(param_1 + 0x20) + *(long *)(param_1 + 0xd0));
  }
  icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_48,pcVar3);
  setVariant(this,local_48,CONCAT44(uStack_3c,local_40));
  lVar2 = icu_76_godot::Locale::clone();
  *(long *)(this + 0x28) = lVar2;
  if (lVar2 == 0) {
    *(undefined4 *)(this + 8) = 7;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleBuilder::clearExtensions() */

LocaleBuilder * __thiscall icu_76_godot::LocaleBuilder::clearExtensions(LocaleBuilder *this)

{
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  *(undefined8 *)(this + 0x28) = 0;
  return this;
}



/* icu_76_godot::makeBogusLocale() */

icu_76_godot * __thiscall icu_76_godot::makeBogusLocale(icu_76_godot *this)

{
  icu_76_godot::Locale::Locale((Locale *)this);
  icu_76_godot::Locale::setToBogus();
  return this;
}



/* icu_76_godot::LocaleBuilder::copyExtensionsFrom(icu_76_godot::Locale const&, UErrorCode&) */

void __thiscall
icu_76_godot::LocaleBuilder::copyExtensionsFrom
          (LocaleBuilder *this,Locale *param_1,UErrorCode *param_2)

{
  int iVar1;
  StringEnumeration *pSVar2;
  Locale *pLVar3;
  
  if (0 < *(int *)param_2) {
    return;
  }
  pSVar2 = (StringEnumeration *)icu_76_godot::Locale::createKeywords((UErrorCode *)param_1);
  if (*(int *)param_2 < 1) {
    if (pSVar2 != (StringEnumeration *)0x0) {
      iVar1 = (**(code **)(*(long *)pSVar2 + 0x20))(pSVar2,param_2);
      if (iVar1 != 0) {
        pLVar3 = *(Locale **)(this + 0x28);
        if (pLVar3 == (Locale *)0x0) {
          icu_76_godot::Locale::getRoot();
          pLVar3 = (Locale *)icu_76_godot::Locale::clone();
          *(Locale **)(this + 0x28) = pLVar3;
          if (pLVar3 == (Locale *)0x0) {
            *(undefined4 *)(this + 8) = 7;
            goto LAB_001015a6;
          }
        }
        (anonymous_namespace)::_copyExtensions(param_1,pSVar2,pLVar3,false,param_2);
      }
LAB_001015a6:
                    /* WARNING: Could not recover jumptable at 0x001015bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pSVar2 + 8))(pSVar2);
      return;
    }
  }
  else if (pSVar2 != (StringEnumeration *)0x0) goto LAB_001015a6;
  return;
}



/* icu_76_godot::LocaleBuilder::copyErrorTo(UErrorCode&) const */

undefined4 __thiscall
icu_76_godot::LocaleBuilder::copyErrorTo(LocaleBuilder *this,UErrorCode *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)param_1 < 1) {
    iVar1 = *(int *)(this + 8);
    *(int *)param_1 = iVar1;
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
  }
  return uVar2;
}



/* icu_76_godot::LocaleBuilder::setLanguageTag(icu_76_godot::StringPiece) */

LocaleBuilder *
icu_76_godot::LocaleBuilder::setLanguageTag
          (LocaleBuilder *param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  Locale aLStack_108 [232];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::Locale::forLanguageTag(aLStack_108,param_2,param_3,param_1 + 8);
  if (*(int *)(param_1 + 8) < 1) {
    setLocale(param_1,aLStack_108);
  }
  icu_76_godot::Locale::~Locale(aLStack_108);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleBuilder::setExtension(char, icu_76_godot::StringPiece) */

long icu_76_godot::LocaleBuilder::setExtension(long param_1,char param_2,int param_3,uint param_4)

{
  UErrorCode *pUVar1;
  UErrorCode *pUVar2;
  Locale *pLVar3;
  undefined8 uVar4;
  char cVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  char local_1cc [4];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  undefined4 uStack_1ac;
  char *local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  uint local_170;
  char *local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined4 local_130;
  Locale local_128 [232];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1cc[0] = param_2;
  if (0 < *(int *)(param_1 + 8)) goto LAB_001016d9;
  cVar5 = uprv_isASCIILetter_76_godot((int)param_2);
  if ((cVar5 == '\0') && (9 < (byte)(param_2 - 0x30U))) {
    *(undefined4 *)(param_1 + 8) = 1;
    goto LAB_001016d9;
  }
  pUVar1 = (UErrorCode *)(param_1 + 8);
  local_19c = 0;
  local_1a8 = (char *)((long)&local_19c + 1);
  local_1a0 = 0x28;
  local_170 = 0;
  icu_76_godot::CharString::append((char *)&local_1a8,param_3,(UErrorCode *)(ulong)param_4);
  if (*(int *)(param_1 + 8) < 1) {
    if (0 < (int)local_170) {
      pcVar7 = local_1a8 + (int)local_170;
      pcVar9 = local_1a8;
      do {
        cVar5 = '-';
        if (*pcVar9 != '_') {
          cVar5 = uprv_asciitolower_76_godot();
        }
        *pcVar9 = cVar5;
        pcVar9 = pcVar9 + 1;
      } while (pcVar9 != pcVar7);
    }
    if ((local_170 == 0) ||
       (cVar5 = ::(anonymous_namespace)::_isExtensionSubtags(local_1cc[0],local_1a8,local_170),
       cVar5 != '\0')) {
      if (*(long *)(param_1 + 0x28) == 0) {
        icu_76_godot::Locale::getRoot();
        lVar8 = icu_76_godot::Locale::clone();
        *(long *)(param_1 + 0x28) = lVar8;
        if (lVar8 == 0) {
          *(undefined4 *)(param_1 + 8) = 7;
          goto LAB_00101777;
        }
      }
      cVar5 = uprv_asciitolower_76_godot((int)local_1cc[0]);
      if (cVar5 == 'u') {
        if (*(int *)(param_1 + 8) < 1) {
          pUVar2 = *(UErrorCode **)(param_1 + 0x28);
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_1b8,"");
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_1c8,"attribute");
          icu_76_godot::Locale::setKeywordValue
                    (pUVar2,local_1c8,local_1c0,local_1b8,CONCAT44(uStack_1ac,local_1b0),pUVar1);
          plVar6 = (long *)icu_76_godot::Locale::createUnicodeKeywords(pUVar2);
          if (*(int *)(param_1 + 8) < 1) {
            if (plVar6 != (long *)0x0) {
              while (pcVar7 = (char *)(**(code **)(*plVar6 + 0x28))(plVar6,0,pUVar1),
                    pcVar7 != (char *)0x0) {
                icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_1b8,pcVar7);
                icu_76_godot::Locale::setUnicodeKeywordValue
                          (pUVar2,local_1b8,CONCAT44(uStack_1ac,local_1b0),0,0,pUVar1);
              }
LAB_001018a9:
              (**(code **)(*plVar6 + 8))(plVar6);
              if (0 < *(int *)(param_1 + 8)) goto LAB_00101777;
            }
            if (param_4 != 0) {
              pLVar3 = *(Locale **)(param_1 + 0x28);
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_1b8,"und-u-");
              local_168 = (char *)((long)&local_15c + 1);
              local_160 = 0x28;
              local_130 = 0;
              local_15c = 0;
              icu_76_godot::CharString::append
                        ((char *)&local_168,(int)local_1b8,(UErrorCode *)(ulong)local_1b0);
              icu_76_godot::CharString::append
                        ((char *)&local_168,(int)local_1a8,(UErrorCode *)(ulong)local_170);
              icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_1b8,local_168);
              icu_76_godot::Locale::forLanguageTag
                        (local_128,local_1b8,CONCAT44(uStack_1ac,local_1b0));
              (anonymous_namespace)::_copyExtensions
                        (local_128,(StringEnumeration *)0x0,pLVar3,false,pUVar1);
              icu_76_godot::Locale::~Locale(local_128);
              if ((char)local_15c != '\0') {
                uprv_free_76_godot(local_168);
              }
            }
          }
          else if (plVar6 != (long *)0x0) goto LAB_001018a9;
        }
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_1b8,local_1a8);
        icu_76_godot::Locale::setKeywordValue
                  (uVar4,local_1cc,1,local_1b8,CONCAT44(uStack_1ac,local_1b0),pUVar1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
LAB_00101777:
  if ((char)local_19c != '\0') {
    uprv_free_76_godot(local_1a8);
  }
LAB_001016d9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::LocaleBuilder::build(UErrorCode&) */

UErrorCode * icu_76_godot::LocaleBuilder::build(UErrorCode *param_1)

{
  char *pcVar1;
  UErrorCode *in_RDX;
  long in_RSI;
  char cVar2;
  long in_FS_OFFSET;
  int local_178 [2];
  uint local_170;
  char *local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined4 local_130;
  Locale local_128 [232];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RDX < 1) {
    if (*(int *)(in_RSI + 8) < 1) {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)local_178,(char *)(in_RSI + 0xc));
      local_15c = 0;
      local_168 = (char *)((long)&local_15c + 1);
      local_160 = 0x28;
      local_130 = 0;
      icu_76_godot::CharString::append
                ((char *)&local_168,local_178[0],(UErrorCode *)(ulong)local_170);
      cVar2 = (char)&local_168;
      if (*(char *)(in_RSI + 0x15) != '\0') {
        pcVar1 = (char *)icu_76_godot::CharString::append(cVar2,(UErrorCode *)0x2d);
        icu_76_godot::StringPiece::StringPiece((StringPiece *)local_178,(char *)(in_RSI + 0x15));
        icu_76_godot::CharString::append(pcVar1,local_178[0],(UErrorCode *)(ulong)local_170);
      }
      if (*(char *)(in_RSI + 0x1a) != '\0') {
        pcVar1 = (char *)icu_76_godot::CharString::append(cVar2,(UErrorCode *)0x2d);
        icu_76_godot::StringPiece::StringPiece((StringPiece *)local_178,(char *)(in_RSI + 0x1a));
        icu_76_godot::CharString::append(pcVar1,local_178[0],(UErrorCode *)(ulong)local_170);
      }
      if (*(long *)(in_RSI + 0x20) != 0) {
        pcVar1 = (char *)icu_76_godot::CharString::append(cVar2,(UErrorCode *)0x2d);
        icu_76_godot::StringPiece::StringPiece
                  ((StringPiece *)local_178,(char *)**(undefined8 **)(in_RSI + 0x20));
        icu_76_godot::CharString::append(pcVar1,local_178[0],(UErrorCode *)(ulong)local_170);
      }
      if (*(int *)in_RDX < 1) {
        icu_76_godot::Locale::Locale(local_128,local_168,(char *)0x0,(char *)0x0,(char *)0x0);
        if (*(Locale **)(in_RSI + 0x28) != (Locale *)0x0) {
          (anonymous_namespace)::_copyExtensions
                    (*(Locale **)(in_RSI + 0x28),(StringEnumeration *)0x0,local_128,true,in_RDX);
        }
        if (*(int *)in_RDX < 1) {
          icu_76_godot::Locale::Locale((Locale *)param_1,local_128);
        }
        else {
          icu_76_godot::Locale::Locale((Locale *)param_1);
          icu_76_godot::Locale::setToBogus();
        }
        icu_76_godot::Locale::~Locale(local_128);
      }
      else {
        icu_76_godot::Locale::Locale((Locale *)param_1);
        icu_76_godot::Locale::setToBogus();
      }
      if ((char)local_15c != '\0') {
        uprv_free_76_godot(local_168);
      }
      goto LAB_00101a90;
    }
    *(int *)in_RDX = *(int *)(in_RSI + 8);
  }
  icu_76_godot::Locale::Locale((Locale *)param_1);
  icu_76_godot::Locale::setToBogus();
LAB_00101a90:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink() */

void __thiscall
icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink
          (StringByteSink<icu_76_godot::CharString> *this)

{
  *(undefined ***)this = &PTR__StringByteSink_001021c8;
  icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)this);
  return;
}



/* icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink() */

void __thiscall
icu_76_godot::StringByteSink<icu_76_godot::CharString>::~StringByteSink
          (StringByteSink<icu_76_godot::CharString> *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__StringByteSink_001021c8;
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
LAB_00101fcf:
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
      goto LAB_00101fcf;
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


