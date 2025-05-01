
/* icu_76_godot::_set_addString(USet*, char16_t const*, int) */

void icu_76_godot::_set_addString(USet *param_1,wchar16 *param_2,int param_3)

{
  long in_FS_OFFSET;
  wchar16 *local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,(uint)param_3 >> 0x1f,&local_70);
  icu_76_godot::UnicodeSet::add((UnicodeString *)param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::_set_addRange(USet*, int, int) */

void icu_76_godot::_set_addRange(USet *param_1,int param_2,int param_3)

{
  icu_76_godot::UnicodeSet::add((int)param_1,param_2);
  return;
}



/* icu_76_godot::_set_add(USet*, int) */

void icu_76_godot::_set_add(USet *param_1,int param_2)

{
  icu_76_godot::UnicodeSet::add((int)param_1);
  return;
}



/* icu_76_godot::(anonymous namespace)::maybeOnlyCaseSensitive(icu_76_godot::UnicodeSet const&,
   icu_76_godot::UnicodeSet&) */

UnicodeSet *
icu_76_godot::(anonymous_namespace)::maybeOnlyCaseSensitive(UnicodeSet *param_1,UnicodeSet *param_2)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = icu_76_godot::UnicodeSet::size();
  if (0x1d < iVar1) {
    local_34 = 0;
    icu_76_godot::CharacterProperties::getBinaryPropertySet(0x22,&local_34);
    if (local_34 < 1) {
      iVar1 = icu_76_godot::UnicodeSet::getRangeCount();
      iVar2 = icu_76_godot::UnicodeSet::getRangeCount();
      param_1 = param_2;
      if (iVar2 < iVar1) {
        icu_76_godot::UnicodeSet::retainAll(param_2);
        icu_76_godot::UnicodeSet::retainAll(param_2);
      }
      else {
        icu_76_godot::UnicodeSet::retainAll(param_2);
        icu_76_godot::UnicodeSet::retainAll(param_2);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::UnicodeSet::applyPattern(icu_76_godot::UnicodeString const&,
   icu_76_godot::ParsePosition&, unsigned int, icu_76_godot::SymbolTable const*, UErrorCode&) [clone
   .part.0] */

void __thiscall
icu_76_godot::UnicodeSet::applyPattern
          (UnicodeSet *this,UnicodeString *param_1,ParsePosition *param_2,uint param_3,
          SymbolTable *param_4,UErrorCode *param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  RuleCharacterIterator aRStack_b8 [24];
  long local_a0;
  code *local_88;
  ushort local_80;
  undefined1 local_7e [14];
  int local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = icu_76_godot::UnicodeSet::applyPattern;
  local_80 = 2;
  icu_76_godot::RuleCharacterIterator::RuleCharacterIterator(aRStack_b8,param_1,param_4,param_2);
  icu_76_godot::UnicodeSet::applyPattern
            ((RuleCharacterIterator *)this,(SymbolTable *)aRStack_b8,(UnicodeString *)param_4,
             (uint)(UnicodeString *)&local_88,(_func_UnicodeSet_ptr_int *)(ulong)param_3,0,
             (UErrorCode *)closeOver);
  if (*(int *)param_5 < 1) {
    if (local_a0 == 0) {
      iVar1 = 0;
      if (((local_80 & 0x11) == 0) && (iVar1 = (int)local_7e, (local_80 & 2) == 0)) {
        iVar1 = local_70;
      }
      icu_76_godot::UnicodeSet::setPattern((wchar16 *)this,iVar1);
    }
    else {
      *(undefined4 *)param_5 = 0x10002;
    }
  }
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::UnicodeSet(icu_76_godot::UnicodeString const&, unsigned int,
   icu_76_godot::SymbolTable const*, UErrorCode&) */

void __thiscall
icu_76_godot::UnicodeSet::UnicodeSet
          (UnicodeSet *this,UnicodeString *param_1,uint param_2,SymbolTable *param_3,
          UErrorCode *param_4)

{
  short sVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_4c;
  code *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x20] = (UnicodeSet)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(UnicodeSet **)(this + 0x10) = this + 0x60;
  iVar2 = *(int *)param_4;
  *(undefined8 *)(this + 0x18) = _LC0;
  local_40 = _LC1;
  local_48 = icu_76_godot::ICU_Utility::skipWhitespace;
  *(code **)this = icu_76_godot::ParsePosition::~ParsePosition;
  *(undefined8 *)(this + 8) = 0x1021b8;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  if ((0 < iVar2) ||
     (applyPattern(this,param_1,(ParsePosition *)&local_48,param_2,param_3,param_4),
     0 < *(int *)param_4)) goto LAB_00100355;
  local_4c = (int)local_40;
  if ((param_2 & 1) == 0) {
    sVar1 = *(short *)(param_1 + 8);
    if (sVar1 < 0) goto LAB_00100380;
LAB_00100346:
    iVar2 = (int)(sVar1 >> 5);
  }
  else {
    icu_76_godot::ICU_Utility::skipWhitespace(param_1,&local_4c,1);
    sVar1 = *(short *)(param_1 + 8);
    if (-1 < sVar1) goto LAB_00100346;
LAB_00100380:
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (iVar2 != local_4c) {
    *(undefined4 *)param_4 = 1;
  }
LAB_00100355:
  icu_76_godot::ParsePosition::~ParsePosition((ParsePosition *)&local_48);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::UnicodeSet::UnicodeSet(icu_76_godot::UnicodeString const&,
   icu_76_godot::ParsePosition&, unsigned int, icu_76_godot::SymbolTable const*, UErrorCode&) */

void __thiscall
icu_76_godot::UnicodeSet::UnicodeSet
          (UnicodeSet *this,UnicodeString *param_1,ParsePosition *param_2,uint param_3,
          SymbolTable *param_4,UErrorCode *param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  this[0x20] = (UnicodeSet)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(UnicodeSet **)(this + 0x10) = this + 0x60;
  uVar2 = _LC0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x18) = uVar2;
  iVar1 = *(int *)param_5;
  *(code **)this = icu_76_godot::ParsePosition::~ParsePosition;
  *(undefined8 *)(this + 8) = 0x1021b8;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  if (iVar1 < 1) {
    applyPattern(this,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



/* icu_76_godot::UnicodeSet::applyPattern(icu_76_godot::UnicodeString const&, unsigned int,
   icu_76_godot::SymbolTable const*, UErrorCode&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::applyPattern
          (UnicodeSet *this,UnicodeString *param_1,uint param_2,SymbolTable *param_3,
          UErrorCode *param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_4c;
  code *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = icu_76_godot::ICU_Utility::skipWhitespace;
  local_40 = _LC1;
  if (*(int *)param_4 < 1) {
    if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) {
      applyPattern(this,param_1,(ParsePosition *)&local_48,param_2,param_3,param_4);
      if (*(int *)param_4 < 1) {
        local_4c = (int)local_40;
        if ((param_2 & 1) != 0) {
          icu_76_godot::ICU_Utility::skipWhitespace(param_1,&local_4c,1);
        }
        if (*(short *)(param_1 + 8) < 0) {
          iVar1 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar1 = (int)(*(short *)(param_1 + 8) >> 5);
        }
        if (iVar1 != local_4c) {
          *(undefined4 *)param_4 = 1;
        }
      }
    }
    else {
      *(undefined4 *)param_4 = 0x1e;
    }
  }
  icu_76_godot::ParsePosition::~ParsePosition((ParsePosition *)&local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::applyPattern(icu_76_godot::UnicodeString const&,
   icu_76_godot::ParsePosition&, unsigned int, icu_76_godot::SymbolTable const*, UErrorCode&) */

UnicodeSet * __thiscall
icu_76_godot::UnicodeSet::applyPattern
          (UnicodeSet *this,UnicodeString *param_1,ParsePosition *param_2,uint param_3,
          SymbolTable *param_4,UErrorCode *param_5)

{
  if (0 < *(int *)param_5) {
    return this;
  }
  if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) {
    applyPattern(this,param_1,param_2,param_3,param_4,param_5);
    return this;
  }
  *(undefined4 *)param_5 = 0x1e;
  return this;
}



/* icu_76_godot::UnicodeSet::closeOverCaseInsensitive(bool) */

void __thiscall icu_76_godot::UnicodeSet::closeOverCaseInsensitive(UnicodeSet *this,bool param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  UnicodeString *pUVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  int iVar13;
  UnicodeString *pUVar14;
  int iVar15;
  long in_FS_OFFSET;
  UnicodeSet *local_248;
  code *local_240;
  code *pcStack_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  code *local_218;
  ushort local_210;
  undefined1 local_20e [2];
  uint local_20c;
  undefined1 *local_200;
  UnicodeSet local_1d8 [208];
  UnicodeSet local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeSet::UnicodeSet(local_1d8,this);
  if ((!param_1) && (cVar2 = icu_76_godot::UnicodeSet::hasStrings(), cVar2 != '\0')) {
    icu_76_godot::UVector::removeAllElements();
  }
  local_228 = (undefined1  [16])0x0;
  local_230 = 0x100000;
  local_240 = _set_add;
  pcStack_238 = _set_addRange;
  local_248 = local_1d8;
  icu_76_godot::UnicodeSet::UnicodeSet(local_108,0,0x10ffff);
  iVar3 = (anonymous_namespace)::maybeOnlyCaseSensitive(this,local_108);
  iVar4 = icu_76_godot::UnicodeSet::getRangeCount();
  if (0 < iVar4) {
    iVar13 = 0;
    do {
      while( true ) {
        iVar5 = icu_76_godot::UnicodeSet::getRangeStart(iVar3);
        iVar6 = icu_76_godot::UnicodeSet::getRangeEnd(iVar3);
        if (param_1) break;
        for (; iVar5 <= iVar6; iVar5 = iVar5 + 1) {
          ucase_addCaseClosure_76_godot(iVar5,&local_248);
        }
LAB_001006b4:
        iVar13 = iVar13 + 1;
        if (iVar4 == iVar13) goto LAB_001006c2;
      }
      if (iVar6 < iVar5) goto LAB_001006b4;
      do {
        iVar15 = iVar5 + 1;
        ucase_addSimpleCaseClosure_76_godot(iVar5,&local_248);
        iVar5 = iVar15;
      } while (iVar15 <= iVar6);
      iVar13 = iVar13 + 1;
    } while (iVar4 != iVar13);
  }
LAB_001006c2:
  cVar2 = icu_76_godot::UnicodeSet::hasStrings();
  if (cVar2 != '\0') {
    lVar11 = *(long *)(this + 0x50);
    local_218 = icu_76_godot::UnicodeSet::applyPattern;
    local_210 = 2;
    if (0 < *(int *)(lVar11 + 8)) {
      iVar3 = 0;
      do {
        pUVar8 = (UnicodeString *)icu_76_godot::UVector::elementAt((int)lVar11);
        uVar9 = (uint)(UnicodeString *)&local_218;
        if (param_1) {
          uVar1 = *(ushort *)(pUVar8 + 8);
          if ((uVar1 & 0x11) == 0) {
            pUVar14 = pUVar8 + 10;
            if ((uVar1 & 2) == 0) {
              pUVar14 = *(UnicodeString **)(pUVar8 + 0x18);
            }
          }
          else {
            pUVar14 = (UnicodeString *)0x0;
          }
          if ((short)uVar1 < 0) {
            iVar4 = *(int *)(pUVar8 + 0xc);
          }
          else {
            iVar4 = (int)((short)uVar1 >> 5);
          }
          iVar13 = 0;
          do {
            if (iVar4 <= iVar13) goto LAB_00100900;
            iVar5 = iVar13 + 1;
            uVar10 = (uint)*(ushort *)(pUVar14 + (long)iVar13 * 2);
            if ((((uVar10 & 0xfffffc00) == 0xd800) && (iVar5 != iVar4)) &&
               ((*(ushort *)(pUVar14 + (long)iVar13 * 2 + 2) & 0xfc00) == 0xdc00)) {
              uVar10 = *(ushort *)(pUVar14 + (long)iVar13 * 2 + 2) + 0xfca02400 +
                       (uint)*(ushort *)(pUVar14 + (long)iVar13 * 2) * 0x400;
              iVar5 = iVar13 + 2;
            }
            iVar13 = iVar5;
            uVar7 = u_foldCase_76_godot(uVar10);
          } while (uVar10 == uVar7);
          icu_76_godot::UnicodeString::unBogus();
          uVar10 = local_20c;
          if (-1 < (short)local_210) {
            uVar10 = (int)((short)local_210 >> 5);
          }
          icu_76_godot::UnicodeString::doReplace(uVar9,0,(wchar16 *)(ulong)uVar10,(int)pUVar14,0);
          while (icu_76_godot::UnicodeString::append(uVar9), iVar4 != iVar13) {
            iVar5 = iVar13 + 1;
            uVar1 = *(ushort *)(pUVar14 + (long)iVar13 * 2);
            uVar10 = (uint)uVar1;
            if ((((uVar1 & 0xfc00) == 0xd800) && (iVar4 != iVar5)) &&
               ((*(ushort *)(pUVar14 + (long)iVar13 * 2 + 2) & 0xfc00) == 0xdc00)) {
              uVar10 = *(ushort *)(pUVar14 + (long)iVar13 * 2 + 2) + 0xfca02400 +
                       (uint)uVar1 * 0x400;
              iVar5 = iVar13 + 2;
            }
            iVar13 = iVar5;
            u_foldCase_76_godot(uVar10,0);
          }
          pUVar8 = (UnicodeString *)icu_76_godot::UnicodeSet::remove((UnicodeString *)local_1d8);
          icu_76_godot::UnicodeSet::add(pUVar8);
        }
        else {
          icu_76_godot::UnicodeString::operator=((UnicodeString *)&local_218,pUVar8);
          icu_76_godot::UnicodeString::foldCase(uVar9);
          if ((short)local_210 < 0) {
            uVar9 = local_20c;
            if ((local_210 & 0x11) != 0) goto LAB_001009ec;
LAB_001008d4:
            puVar12 = local_20e;
            if ((local_210 & 2) == 0) {
              puVar12 = local_200;
            }
          }
          else {
            uVar9 = (int)((short)local_210 >> 5);
            if ((local_210 & 0x11) == 0) goto LAB_001008d4;
LAB_001009ec:
            puVar12 = (undefined1 *)0x0;
          }
          cVar2 = ucase_addStringCaseClosure_76_godot(puVar12,uVar9,&local_248);
          if (cVar2 == '\0') {
            icu_76_godot::UnicodeSet::add((UnicodeString *)local_1d8);
          }
        }
LAB_00100900:
        iVar3 = iVar3 + 1;
        lVar11 = *(long *)(this + 0x50);
      } while (iVar3 < *(int *)(lVar11 + 8));
    }
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_218);
  }
  icu_76_godot::UnicodeSet::operator=(this,local_1d8);
  icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
  icu_76_godot::UnicodeSet::~UnicodeSet(local_1d8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeSet::closeOverAddCaseMappings() */

void __thiscall icu_76_godot::UnicodeSet::closeOverAddCaseMappings(UnicodeSet *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  Locale *pLVar9;
  UnicodeString *pUVar10;
  Locale *pLVar11;
  BreakIterator *pBVar12;
  int iVar13;
  long lVar14;
  long in_FS_OFFSET;
  ulong local_318;
  ulong local_310;
  code *local_308;
  undefined2 local_300;
  UnicodeSet local_2c8 [208];
  UnicodeSet local_1f8 [208];
  Locale local_128 [232];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeSet::UnicodeSet(local_2c8,this);
  icu_76_godot::UnicodeSet::UnicodeSet(local_1f8,0,0x10ffff);
  iVar3 = (anonymous_namespace)::maybeOnlyCaseSensitive(this,local_1f8);
  iVar4 = icu_76_godot::UnicodeSet::getRangeCount();
  local_300 = 2;
  local_308 = icu_76_godot::UnicodeSet::applyPattern;
  if (iVar4 < 1) {
LAB_00100cc1:
    cVar2 = icu_76_godot::UnicodeSet::hasStrings();
    if (cVar2 != '\0') {
      icu_76_godot::Locale::Locale(local_128,"",(char *)0x0,(char *)0x0,(char *)0x0);
      local_310 = local_310 & 0xffffffff00000000;
      pLVar9 = (Locale *)
               icu_76_godot::BreakIterator::createWordInstance(local_128,(UErrorCode *)&local_310);
      if (((int)local_310 < 1) && (lVar14 = *(long *)(this + 0x50), 0 < *(int *)(lVar14 + 8))) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          pUVar10 = (UnicodeString *)icu_76_godot::UVector::elementAt((int)lVar14);
          pLVar11 = (Locale *)
                    icu_76_godot::UnicodeString::operator=((UnicodeString *)&local_308,pUVar10);
          icu_76_godot::UnicodeString::toLower(pLVar11);
          icu_76_godot::UnicodeSet::add((UnicodeString *)local_2c8);
          pBVar12 = (BreakIterator *)
                    icu_76_godot::UnicodeString::operator=((UnicodeString *)&local_308,pUVar10);
          icu_76_godot::UnicodeString::toTitle(pBVar12,pLVar9);
          icu_76_godot::UnicodeSet::add((UnicodeString *)local_2c8);
          pLVar11 = (Locale *)
                    icu_76_godot::UnicodeString::operator=((UnicodeString *)&local_308,pUVar10);
          icu_76_godot::UnicodeString::toUpper(pLVar11);
          icu_76_godot::UnicodeSet::add((UnicodeString *)local_2c8);
          uVar8 = icu_76_godot::UnicodeString::operator=((UnicodeString *)&local_308,pUVar10);
          icu_76_godot::UnicodeString::foldCase(uVar8);
          icu_76_godot::UnicodeSet::add((UnicodeString *)local_2c8);
          lVar14 = *(long *)(this + 0x50);
        } while (iVar3 < *(int *)(lVar14 + 8));
      }
      if (pLVar9 != (Locale *)0x0) {
        (**(code **)(*(long *)pLVar9 + 8))(pLVar9);
      }
      icu_76_godot::Locale::~Locale(local_128);
    }
    icu_76_godot::UnicodeSet::operator=(this,local_2c8);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_308);
    icu_76_godot::UnicodeSet::~UnicodeSet(local_1f8);
    icu_76_godot::UnicodeSet::~UnicodeSet(local_2c8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar1 = 0;
  do {
    iVar5 = icu_76_godot::UnicodeSet::getRangeStart(iVar3);
    iVar6 = icu_76_godot::UnicodeSet::getRangeEnd(iVar3);
joined_r0x00100b54:
    if (iVar5 <= iVar6) {
      do {
        iVar7 = ucase_toFullLower_76_godot(iVar5,0,0,&local_318,1);
        iVar13 = (int)local_2c8;
        if (-1 < iVar7) {
          if (iVar7 < 0x20) {
            local_310 = local_318;
            icu_76_godot::UnicodeString::setTo(&local_308,0,&local_310);
            icu_76_godot::UnicodeSet::add((UnicodeString *)local_2c8);
          }
          else {
            icu_76_godot::UnicodeSet::add(iVar13);
          }
        }
        iVar7 = ucase_toFullTitle_76_godot(iVar5,0,0,&local_318,1);
        if (-1 < iVar7) {
          if (iVar7 < 0x20) {
            local_310 = local_318;
            icu_76_godot::UnicodeString::setTo(&local_308,0,&local_310);
            icu_76_godot::UnicodeSet::add((UnicodeString *)local_2c8);
          }
          else {
            icu_76_godot::UnicodeSet::add(iVar13);
          }
        }
        iVar7 = ucase_toFullUpper_76_godot(iVar5,0,0,&local_318);
        if (-1 < iVar7) {
          if (iVar7 < 0x20) {
            local_310 = local_318;
            icu_76_godot::UnicodeString::setTo(&local_308,0,&local_310);
            icu_76_godot::UnicodeSet::add((UnicodeString *)local_2c8);
          }
          else {
            icu_76_godot::UnicodeSet::add(iVar13);
          }
        }
        iVar7 = ucase_toFullFolding_76_godot(iVar5,&local_318,0);
        if (-1 < iVar7) {
          if (iVar7 < 0x20) goto LAB_00100c80;
          icu_76_godot::UnicodeSet::add(iVar13);
        }
        iVar5 = iVar5 + 1;
        if (iVar6 < iVar5) break;
      } while( true );
    }
    iVar1 = iVar1 + 1;
    if (iVar4 == iVar1) goto LAB_00100cc1;
  } while( true );
LAB_00100c80:
  local_310 = local_318;
  icu_76_godot::UnicodeString::setTo(&local_308,0,&local_310);
  iVar5 = iVar5 + 1;
  icu_76_godot::UnicodeSet::add((UnicodeString *)local_2c8);
  goto joined_r0x00100b54;
}



/* icu_76_godot::UnicodeSet::closeOver(int) */

UnicodeSet * __thiscall icu_76_godot::UnicodeSet::closeOver(UnicodeSet *this,int param_1)

{
  uint uVar1;
  
  if (((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x58) == 0)) &&
     (((byte)this[0x20] & 1) == 0)) {
    uVar1 = param_1 & 6;
    if (uVar1 == 4) {
      closeOverAddCaseMappings(this);
    }
    else if (uVar1 == 6) {
      closeOverCaseInsensitive(this,true);
    }
    else if (uVar1 == 2) {
      closeOverCaseInsensitive(this,false);
    }
    return this;
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
LAB_001011df:
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
      goto LAB_001011df;
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


