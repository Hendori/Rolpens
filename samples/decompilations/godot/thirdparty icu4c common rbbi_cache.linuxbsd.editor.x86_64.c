
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::RuleBasedBreakIterator::DictionaryCache::populateDictionary(int, int, int, int)
   [clone .part.0] */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::DictionaryCache::populateDictionary
          (DictionaryCache *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  char *pcVar12;
  UErrorCode *pUVar13;
  int iVar14;
  long in_FS_OFFSET;
  int local_50;
  int local_44;
  long local_40;
  
  uVar3 = _UNK_001017b8;
  uVar2 = __LC0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x30) = uVar3;
  icu_76_godot::UVector32::removeAllElements();
  lVar1 = *(long *)this;
  *(int *)(this + 0x34) = param_3;
  *(int *)(this + 0x38) = param_4;
  lVar9 = lVar1 + 0x1e0;
  local_44 = 0;
  utext_setNativeIndex_76_godot(lVar9,(long)param_1);
  uVar6 = utext_current32_76_godot(lVar9);
  pcVar12 = (char *)(ulong)uVar6;
  uVar5 = ucptrie_get_76_godot(*(undefined8 *)(*(long *)(*(long *)this + 0x270) + 0x30),uVar6);
  local_50 = 0;
  uVar7 = (uint)uVar5;
  uVar6 = *(uint *)(*(long *)(*(long *)(*(long *)this + 0x270) + 8) + 8);
  if (0 < local_44) goto LAB_00100220;
  do {
    while( true ) {
      if (*(int *)(lVar1 + 0x1fc) < *(int *)(lVar1 + 0x208)) {
        iVar8 = (**(code **)(*(long *)(lVar1 + 0x218) + 0x40))(lVar9);
      }
      else {
        iVar8 = *(int *)(lVar1 + 0x208) + *(int *)(lVar1 + 0x200);
      }
      if (param_2 <= iVar8) goto joined_r0x00100153;
      if (uVar6 <= uVar7) break;
      utext_next32_76_godot(lVar9);
      uVar7 = utext_current32_76_godot(lVar9);
      pcVar12 = (char *)(ulong)uVar7;
      uVar5 = ucptrie_get_76_godot(*(undefined8 *)(*(long *)(*(long *)this + 0x270) + 0x30),uVar7);
      uVar7 = (uint)uVar5;
    }
    uVar2 = *(undefined8 *)this;
    icu_76_godot::BreakIterator::getLocaleID(uVar2,2,&local_44);
    plVar10 = (long *)icu_76_godot::RuleBasedBreakIterator::getLanguageBreakEngine
                                ((int)uVar2,pcVar12);
    if (plVar10 != (long *)0x0) {
      iVar8 = (**(code **)(*plVar10 + 0x20))
                        (plVar10,lVar9,iVar8,param_2,this + 8,(int)*(char *)(*(long *)this + 0x2e8),
                         &local_44);
      local_50 = local_50 + iVar8;
    }
    uVar7 = utext_current32_76_godot(lVar9);
    pcVar12 = (char *)(ulong)uVar7;
    uVar5 = ucptrie_get_76_godot(*(undefined8 *)(*(long *)(*(long *)this + 0x270) + 0x30),uVar7);
    uVar7 = (uint)uVar5;
  } while (local_44 < 1);
joined_r0x00100153:
  if (local_50 < 1) goto LAB_00100220;
  iVar8 = *(int *)(this + 0x10);
  lVar9 = (long)iVar8;
  iVar14 = (int)(this + 8);
  if (iVar8 < 1) {
    if (param_1 < 0) goto LAB_0010026b;
LAB_0010024b:
    if (0 < param_2) {
      uVar6 = (int)lVar9 + 1;
      pUVar13 = (UErrorCode *)(ulong)uVar6;
      if (-1 < (int)uVar6) goto LAB_001002b9;
LAB_001002c0:
      cVar4 = icu_76_godot::UVector32::expandCapacity(iVar14,pUVar13);
      if (cVar4 != '\0') {
        lVar9 = (long)*(int *)(this + 0x10);
        goto LAB_001002f8;
      }
      iVar8 = *(int *)(this + 0x10);
      goto LAB_001002d8;
    }
    *(undefined4 *)(this + 0x28) = 0;
LAB_00100259:
    *(undefined4 *)(this + 0x2c) = 0;
    iVar8 = 0;
  }
  else {
    piVar11 = *(int **)(this + 0x20);
    if (param_1 < *piVar11) {
LAB_0010026b:
      icu_76_godot::UVector32::insertElementAt(iVar14,param_1,(UErrorCode *)0x0);
      lVar9 = (long)*(int *)(this + 0x10);
      iVar8 = *(int *)(this + 0x10) + -1;
      if (iVar8 < 0) goto LAB_0010024b;
      piVar11 = *(int **)(this + 0x20);
    }
    else {
      iVar8 = iVar8 + -1;
    }
    if (piVar11[iVar8] < param_2) {
      pUVar13 = (UErrorCode *)(ulong)((int)lVar9 + 1);
LAB_001002b9:
      if (*(int *)(this + 0x14) < (int)pUVar13) goto LAB_001002c0;
LAB_001002f8:
      *(int *)(*(long *)(this + 0x20) + lVar9 * 4) = param_2;
      iVar8 = *(int *)(this + 0x10) + 1;
      *(int *)(this + 0x10) = iVar8;
LAB_001002d8:
      *(undefined4 *)(this + 0x28) = 0;
      if (iVar8 < 1) goto LAB_00100259;
      piVar11 = *(int **)(this + 0x20);
      iVar8 = iVar8 + -1;
    }
    else {
      *(undefined4 *)(this + 0x28) = 0;
    }
    *(int *)(this + 0x2c) = *piVar11;
    iVar8 = piVar11[iVar8];
  }
  *(int *)(this + 0x30) = iVar8;
LAB_00100220:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::RuleBasedBreakIterator::DictionaryCache::DictionaryCache(icu_76_godot::RuleBasedBreakIterator*,
   UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::DictionaryCache::DictionaryCache
          (DictionaryCache *this,RuleBasedBreakIterator *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(RuleBasedBreakIterator **)this = param_1;
  icu_76_godot::UVector32::UVector32((UVector32 *)(this + 8),param_2);
  uVar2 = _UNK_001017b8;
  uVar1 = __LC0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::RuleBasedBreakIterator::DictionaryCache::reset() */

void __thiscall icu_76_godot::RuleBasedBreakIterator::DictionaryCache::reset(DictionaryCache *this)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x38) = 0;
  uVar1 = _UNK_001017b8;
  *(undefined8 *)(this + 0x28) = __LC0;
  *(undefined8 *)(this + 0x30) = uVar1;
  icu_76_godot::UVector32::removeAllElements();
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::DictionaryCache::following(int, int*, int*) */

undefined8 __thiscall
icu_76_godot::RuleBasedBreakIterator::DictionaryCache::following
          (DictionaryCache *this,int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 extraout_RAX;
  uint uVar3;
  int *piVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  
  if ((*(int *)(this + 0x30) <= param_1) || (param_1 < *(int *)(this + 0x2c))) {
LAB_001003d0:
    *(undefined4 *)(this + 0x28) = 0xffffffff;
    return 0;
  }
  iVar2 = *(int *)(this + 0x28);
  uVar1 = *(uint *)(this + 0x10);
  if ((iVar2 < 0) || ((int)uVar1 <= iVar2)) {
    *(undefined4 *)(this + 0x28) = 0;
    if ((int)uVar1 < 1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = *(long *)(this + 0x20);
  }
  else {
    lVar6 = *(long *)(this + 0x20);
    if (param_1 == *(int *)(lVar6 + (long)iVar2 * 4)) {
      *(int *)(this + 0x28) = iVar2 + 1;
      if ((int)uVar1 <= iVar2 + 1) goto LAB_001003d0;
      *param_2 = *(int *)(lVar6 + 4 + (long)iVar2 * 4);
      iVar2 = *(int *)(this + 0x38);
      goto LAB_001003e6;
    }
    *(undefined4 *)(this + 0x28) = 0;
  }
  lVar5 = 0;
  piVar4 = (int *)0x0;
  while (*(int *)(lVar6 + lVar5) <= param_1) {
    uVar3 = (int)piVar4 + 1;
    piVar4 = (int *)(ulong)uVar3;
    lVar5 = lVar5 + 4;
    *(uint *)(this + 0x28) = uVar3;
    if (uVar3 == uVar1) {
      following((int)lVar5,(int *)CONCAT44(in_register_00000034,param_1),piVar4);
      return extraout_RAX;
    }
  }
  *param_2 = *(int *)(lVar6 + lVar5);
  iVar2 = *(int *)(this + 0x38);
LAB_001003e6:
  *param_3 = iVar2;
  return 1;
}



/* icu_76_godot::RuleBasedBreakIterator::DictionaryCache::preceding(int, int*, int*) */

undefined8 __thiscall
icu_76_godot::RuleBasedBreakIterator::DictionaryCache::preceding
          (DictionaryCache *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 extraout_RAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_register_00000034;
  
  if ((param_1 <= *(int *)(this + 0x2c)) || (*(int *)(this + 0x30) < param_1)) goto LAB_001004f4;
  if (*(int *)(this + 0x30) == param_1) {
    iVar3 = *(int *)(this + 0x10);
    iVar1 = iVar3 + -1;
    *(int *)(this + 0x28) = iVar1;
    if (iVar1 < 1) goto LAB_001004f0;
LAB_0010050d:
    if (param_1 == *(int *)(*(long *)(this + 0x20) + (long)iVar1 * 4)) {
      *(int *)(this + 0x28) = iVar1 + -1;
      iVar1 = *(int *)(*(long *)(this + 0x20) + -4 + (long)iVar1 * 4);
      *param_2 = iVar1;
      iVar3 = *(int *)(this + 0x38);
      if (*(int *)(this + 0x2c) == iVar1) {
        iVar3 = *(int *)(this + 0x34);
      }
      goto LAB_001004e5;
    }
  }
  else {
    iVar1 = *(int *)(this + 0x28);
    if (iVar1 < 1) {
LAB_001004f0:
      if (iVar1 == 0) {
LAB_001004f4:
        *(undefined4 *)(this + 0x28) = 0xffffffff;
        return 0;
      }
      iVar3 = *(int *)(this + 0x10);
    }
    else {
      iVar3 = *(int *)(this + 0x10);
      if (iVar1 < iVar3) goto LAB_0010050d;
    }
  }
  iVar1 = iVar3 + -1;
  *(int *)(this + 0x28) = iVar1;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  piVar4 = (int *)((long)iVar1 << 2);
  while (0 < iVar3 - iVar1) {
    iVar2 = *(int *)(*(long *)(this + 0x20) + (long)piVar4);
    if (iVar2 < param_1) goto LAB_001004d8;
LAB_00100493:
    iVar1 = iVar1 + -1;
    piVar4 = piVar4 + -1;
    *(int *)(this + 0x28) = iVar1;
    if (iVar1 == -1) {
      preceding((int)this,(int *)CONCAT44(in_register_00000034,param_1),piVar4);
      return extraout_RAX;
    }
  }
  if (param_1 < 1) {
    do {
      iVar1 = iVar1 + -1;
      piVar4 = piVar4 + -1;
      *(int *)(this + 0x28) = iVar1;
    } while (iVar3 - iVar1 < 1);
    iVar2 = *(int *)(*(long *)(this + 0x20) + (long)piVar4);
    if (param_1 <= iVar2) goto LAB_00100493;
  }
  else {
    iVar2 = 0;
  }
LAB_001004d8:
  *param_2 = iVar2;
  iVar3 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x2c) == iVar2) {
    iVar3 = *(int *)(this + 0x34);
  }
LAB_001004e5:
  *param_3 = iVar3;
  return 1;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::populatePreceding(UErrorCode&) [clone .part.0]
    */

undefined8 icu_76_godot::RuleBasedBreakIterator::BreakCache::populatePreceding(UErrorCode *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined2 uVar11;
  uint uVar12;
  int iVar13;
  DictionaryCache *this;
  int iVar14;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + (long)iVar6 * 4 + 0x20);
  if (iVar1 != 0) {
    local_48 = 0;
    local_44 = 0;
    cVar4 = DictionaryCache::preceding
                      (*(DictionaryCache **)(*(long *)(param_1 + 8) + 0x290),iVar1,&local_48,
                       &local_44);
    iVar5 = iVar1;
    if (cVar4 == '\0') {
      do {
        if ((iVar5 + -0x1e < 1) ||
           (iVar5 = icu_76_godot::RuleBasedBreakIterator::handleSafePrevious
                              ((int)*(undefined8 *)(param_1 + 8)), iVar5 + 1U < 2))
        goto LAB_00100820;
        *(int *)(*(long *)(param_1 + 8) + 0x27c) = iVar5;
        iVar6 = icu_76_godot::RuleBasedBreakIterator::handleNext();
        local_48 = iVar6;
        if (iVar6 <= iVar5 + 4) {
          utext_setNativeIndex_76_godot(*(long *)(param_1 + 8) + 0x1e0,(long)iVar6);
          lVar7 = utext_getPreviousNativeIndex_76_godot(*(long *)(param_1 + 8) + 0x1e0);
          if (iVar5 == lVar7) {
            local_48 = icu_76_godot::RuleBasedBreakIterator::handleNext();
            iVar6 = local_48;
          }
        }
        local_44 = *(int *)(*(long *)(param_1 + 8) + 0x280);
      } while (iVar1 <= iVar6);
      goto LAB_00100659;
    }
    uVar12 = iVar6 - 1;
    uVar10 = uVar12 & 0x7f;
    if (uVar10 == *(uint *)(param_1 + 0x14)) {
      *(uint *)(param_1 + 0x14) = uVar10 - 1 & 0x7f;
    }
    *(int *)(param_1 + (long)(int)uVar10 * 4 + 0x20) = local_48;
    *(short *)(param_1 + (long)(int)uVar10 * 2 + 0x220) = (short)local_44;
    *(uint *)(param_1 + 0x10) = uVar10;
    *(ulong *)(param_1 + 0x18) = CONCAT44(uVar12,local_48) & 0x7fffffffff;
    goto LAB_00100b88;
  }
  goto LAB_0010058a;
LAB_00100820:
  do {
    local_48 = 0;
    local_44 = 0;
  } while (iVar1 < 1);
  iVar6 = 0;
LAB_00100659:
  iVar14 = local_44;
  iVar13 = (int)param_1 + 800;
  icu_76_godot::UVector32::removeAllElements();
  iVar5 = *(int *)(param_1 + 0x328);
  uVar12 = iVar5 + 1;
  if (((int)uVar12 < 0) || (*(int *)(param_1 + 0x32c) < (int)uVar12)) {
    cVar4 = icu_76_godot::UVector32::expandCapacity(iVar13,(UErrorCode *)(ulong)uVar12);
    if (cVar4 != '\0') {
      iVar5 = *(int *)(param_1 + 0x328);
      goto LAB_00100ae4;
    }
    iVar5 = *(int *)(param_1 + 0x328);
  }
  else {
LAB_00100ae4:
    *(int *)(*(long *)(param_1 + 0x338) + (long)iVar5 * 4) = iVar6;
    iVar5 = *(int *)(param_1 + 0x328) + 1;
    *(int *)(param_1 + 0x328) = iVar5;
  }
  uVar12 = iVar5 + 1;
  if (((int)uVar12 < 0) || (*(int *)(param_1 + 0x32c) < (int)uVar12)) {
    cVar4 = icu_76_godot::UVector32::expandCapacity(iVar13,(UErrorCode *)(ulong)uVar12);
    if (cVar4 != '\0') {
      iVar5 = *(int *)(param_1 + 0x328);
      goto LAB_00100ac3;
    }
  }
  else {
LAB_00100ac3:
    *(int *)(*(long *)(param_1 + 0x338) + (long)iVar5 * 4) = iVar14;
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
  }
LAB_001006c4:
  do {
    *(int *)(*(long *)(param_1 + 8) + 0x27c) = iVar6;
    local_48 = icu_76_godot::RuleBasedBreakIterator::handleNext();
    lVar7 = *(long *)(param_1 + 8);
    local_44 = *(int *)(lVar7 + 0x280);
    if (local_48 == -1) break;
    if (*(int *)(lVar7 + 0x2a8) == 0) {
LAB_001006ff:
      iVar6 = local_48;
      if (iVar1 <= local_48) break;
      iVar5 = *(int *)(param_1 + 0x328);
      uVar12 = iVar5 + 1;
      if (((int)uVar12 < 0) || (*(int *)(param_1 + 0x32c) < (int)uVar12)) {
        cVar4 = icu_76_godot::UVector32::expandCapacity(iVar13,(UErrorCode *)(ulong)uVar12);
        if (cVar4 != '\0') {
          iVar5 = *(int *)(param_1 + 0x328);
          goto LAB_00100a27;
        }
        iVar5 = *(int *)(param_1 + 0x328);
      }
      else {
LAB_00100a27:
        *(int *)(*(long *)(param_1 + 0x338) + (long)iVar5 * 4) = iVar6;
        iVar5 = *(int *)(param_1 + 0x328) + 1;
        *(int *)(param_1 + 0x328) = iVar5;
      }
      iVar3 = local_44;
      uVar12 = iVar5 + 1;
      if (((int)uVar12 < 0) || (*(int *)(param_1 + 0x32c) < (int)uVar12)) {
        cVar4 = icu_76_godot::UVector32::expandCapacity(iVar13,(UErrorCode *)(ulong)uVar12);
        iVar14 = local_44;
        if (cVar4 == '\0') goto LAB_001006c4;
        iVar5 = *(int *)(param_1 + 0x328);
      }
      *(int *)(*(long *)(param_1 + 0x338) + (long)iVar5 * 4) = iVar3;
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
      iVar14 = local_44;
      goto LAB_001006c4;
    }
    this = *(DictionaryCache **)(lVar7 + 0x290);
    if (1 < local_48 - iVar6) {
      DictionaryCache::populateDictionary(this,iVar6,local_48,iVar14,local_44);
      this = *(DictionaryCache **)(*(long *)(param_1 + 8) + 0x290);
    }
    bVar2 = false;
    while (cVar4 = DictionaryCache::following(this,iVar6,&local_48,&local_44), iVar6 = local_48,
          cVar4 != '\0') {
      if (iVar1 <= local_48) goto LAB_00100708;
      iVar5 = *(int *)(param_1 + 0x328);
      uVar12 = iVar5 + 1;
      if (((int)uVar12 < 0) || (*(int *)(param_1 + 0x32c) < (int)uVar12)) {
        cVar4 = icu_76_godot::UVector32::expandCapacity(iVar13,(UErrorCode *)(ulong)uVar12);
        if (cVar4 != '\0') {
          iVar5 = *(int *)(param_1 + 0x328);
          goto LAB_0010099a;
        }
        iVar5 = *(int *)(param_1 + 0x328);
      }
      else {
LAB_0010099a:
        *(int *)(*(long *)(param_1 + 0x338) + (long)iVar5 * 4) = iVar6;
        iVar5 = *(int *)(param_1 + 0x328) + 1;
        *(int *)(param_1 + 0x328) = iVar5;
      }
      iVar14 = local_44;
      uVar12 = iVar5 + 1;
      if (((int)uVar12 < 0) || (*(int *)(param_1 + 0x32c) < (int)uVar12)) {
        cVar4 = icu_76_godot::UVector32::expandCapacity(iVar13,(UErrorCode *)(ulong)uVar12);
        if (cVar4 != '\0') {
          iVar5 = *(int *)(param_1 + 0x328);
          goto LAB_001009c7;
        }
      }
      else {
LAB_001009c7:
        *(int *)(*(long *)(param_1 + 0x338) + (long)iVar5 * 4) = iVar14;
        *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
      }
      bVar2 = true;
      this = *(DictionaryCache **)(*(long *)(param_1 + 8) + 0x290);
    }
    if (!bVar2) goto LAB_001006ff;
    iVar14 = local_44;
  } while (local_48 < iVar1);
LAB_00100708:
  iVar6 = *(int *)(param_1 + 0x328);
  if (iVar6 != 0) {
    if (iVar6 < 1) {
      local_44 = 0;
      local_48 = 0;
    }
    else {
      iVar1 = iVar6 + -1;
      *(int *)(param_1 + 0x328) = iVar1;
      local_44 = *(int *)(*(long *)(param_1 + 0x338) + (long)iVar1 * 4);
      if (iVar1 == 0) {
        iVar6 = 0;
        local_48 = 0;
      }
      else {
        iVar6 = iVar6 + -2;
        *(int *)(param_1 + 0x328) = iVar6;
        local_48 = *(int *)(*(long *)(param_1 + 0x338) + (long)iVar6 * 4);
      }
    }
    uVar12 = *(int *)(param_1 + 0x10) - 1U & 0x7f;
    if (uVar12 == *(uint *)(param_1 + 0x14)) {
      *(uint *)(param_1 + 0x14) = uVar12 - 1 & 0x7f;
    }
    *(int *)(param_1 + (long)(int)uVar12 * 4 + 0x20) = local_48;
    *(short *)(param_1 + (long)(int)uVar12 * 2 + 0x220) = (short)local_44;
    *(uint *)(param_1 + 0x10) = uVar12;
    *(uint *)(param_1 + 0x1c) = uVar12;
    *(int *)(param_1 + 0x18) = local_48;
    uVar10 = uVar12;
    while (iVar6 != 0) {
      if (iVar6 < 1) {
        iVar6 = *(int *)(param_1 + 0x328);
        uVar11 = 0;
      }
      else {
        iVar6 = iVar6 + -1;
        *(int *)(param_1 + 0x328) = iVar6;
        uVar11 = (undefined2)*(undefined4 *)(*(long *)(param_1 + 0x338) + (long)iVar6 * 4);
      }
      uVar9 = 0;
      if (0 < iVar6) {
        *(int *)(param_1 + 0x328) = iVar6 + -1;
        uVar9 = *(undefined4 *)(*(long *)(param_1 + 0x338) + (long)(iVar6 + -1) * 4);
      }
      uVar10 = uVar10 - 1 & 0x7f;
      if (uVar10 == *(uint *)(param_1 + 0x14)) {
        if (uVar12 == uVar10) break;
        *(uint *)(param_1 + 0x14) = uVar10 - 1 & 0x7f;
      }
      *(undefined4 *)(param_1 + (long)(int)uVar10 * 4 + 0x20) = uVar9;
      *(undefined2 *)(param_1 + (long)(int)uVar10 * 2 + 0x220) = uVar11;
      iVar6 = *(int *)(param_1 + 0x328);
      *(uint *)(param_1 + 0x10) = uVar10;
    }
LAB_00100b88:
    uVar8 = 1;
    goto LAB_0010058c;
  }
LAB_0010058a:
  uVar8 = 0;
LAB_0010058c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::previous(UErrorCode&) [clone .part.0] */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::previous(BreakCache *this,UErrorCode *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  
  uVar2 = *(uint *)(this + 0x1c);
  if (uVar2 == *(uint *)(this + 0x10)) {
    if (*(int *)param_1 < 1) {
      populatePreceding((UErrorCode *)this);
      bVar4 = *(uint *)(this + 0x1c) == uVar2;
      uVar5 = *(undefined4 *)(this + 0x18);
    }
    else {
      uVar5 = *(undefined4 *)(this + 0x18);
      bVar4 = true;
    }
  }
  else {
    uVar1 = uVar2 - 1;
    uVar5 = *(undefined4 *)(this + (ulong)(uVar1 & 0x7f) * 4 + 0x20);
    bVar4 = uVar2 == (uVar1 & 0x7f);
    *(ulong *)(this + 0x18) = CONCAT44(uVar1,uVar5) & 0x7fffffffff;
  }
  lVar3 = *(long *)(this + 8);
  *(bool *)(lVar3 + 0x2d8) = bVar4;
  *(undefined4 *)(lVar3 + 0x27c) = uVar5;
  *(uint *)(lVar3 + 0x280) = (uint)*(ushort *)(this + (long)*(int *)(this + 0x1c) * 2 + 0x220);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::DictionaryCache::populateDictionary(int, int, int, int) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::DictionaryCache::populateDictionary
          (DictionaryCache *this,int param_1,int param_2,int param_3,int param_4)

{
  if (1 < param_2 - param_1) {
    populateDictionary(this,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::BreakCache(icu_76_godot::RuleBasedBreakIterator*,
   UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::BreakCache
          (BreakCache *this,RuleBasedBreakIterator *param_1,UErrorCode *param_2)

{
  *(RuleBasedBreakIterator **)(this + 8) = param_1;
  *(undefined ***)this = &PTR__BreakCache_001017a0;
  icu_76_godot::UVector32::UVector32((UVector32 *)(this + 800),param_2);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x220) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::reset(int, int) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::reset(BreakCache *this,int param_1,int param_2)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(int *)(this + 0x20) = param_1;
  *(short *)(this + 0x220) = (short)param_2;
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::current() */

undefined4 __thiscall icu_76_godot::RuleBasedBreakIterator::BreakCache::current(BreakCache *this)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  *(undefined4 *)(lVar2 + 0x27c) = *(undefined4 *)(this + 0x18);
  uVar1 = *(ushort *)(this + (long)*(int *)(this + 0x1c) * 2 + 0x220);
  *(undefined1 *)(lVar2 + 0x2d8) = 0;
  *(uint *)(lVar2 + 0x280) = (uint)uVar1;
  return *(undefined4 *)(this + 0x18);
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::previous(UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::previous(BreakCache *this,UErrorCode *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (*(int *)param_1 < 1) {
    uVar2 = *(uint *)(this + 0x1c);
    if (uVar2 == *(uint *)(this + 0x10)) {
      populatePreceding((UErrorCode *)this);
      uVar5 = *(uint *)(this + 0x1c);
      uVar6 = *(undefined4 *)(this + 0x18);
    }
    else {
      uVar1 = uVar2 - 1;
      uVar6 = *(undefined4 *)(this + (ulong)(uVar1 & 0x7f) * 4 + 0x20);
      uVar5 = uVar1 & 0x7f;
      *(ulong *)(this + 0x18) = CONCAT44(uVar1,uVar6) & 0x7fffffffff;
    }
    lVar4 = *(long *)(this + 8);
    *(undefined4 *)(lVar4 + 0x27c) = uVar6;
    iVar3 = *(int *)(this + 0x1c);
    *(bool *)(lVar4 + 0x2d8) = uVar2 == uVar5;
    *(uint *)(lVar4 + 0x280) = (uint)*(ushort *)(this + (long)iVar3 * 2 + 0x220);
    return;
  }
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::seek(int) */

undefined8 __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::seek(BreakCache *this,int param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  
  uVar2 = (ulong)*(int *)(this + 0x10);
  uVar5 = 0;
  iVar3 = *(int *)(this + uVar2 * 4 + 0x20);
  if (iVar3 <= param_1) {
    uVar7 = (ulong)*(int *)(this + 0x14);
    iVar6 = *(int *)(this + uVar7 * 4 + 0x20);
    if (param_1 <= iVar6) {
      if (iVar3 == param_1) {
        uVar2 = CONCAT44(*(int *)(this + 0x10),iVar3);
      }
      else if (iVar6 == param_1) {
        uVar2 = CONCAT44(*(int *)(this + 0x14),iVar6);
      }
      else {
        while( true ) {
          iVar6 = (int)uVar2;
          iVar3 = (int)uVar7;
          if (iVar6 == iVar3) break;
          uVar1 = (int)((uint)(iVar3 < iVar6) * 0x80 + iVar6 + iVar3) / 2;
          uVar4 = uVar1 & 0x7f;
          if (param_1 < *(int *)(this + (ulong)(uVar1 & 0x7f) * 4 + 0x20)) {
            uVar7 = (ulong)uVar4;
          }
          else {
            uVar2 = (ulong)(uVar4 + 1 & 0x7f);
          }
        }
        uVar2 = CONCAT44(iVar6 - 1U,*(undefined4 *)(this + (ulong)(iVar6 - 1U & 0x7f) * 4 + 0x20)) &
                0x7fffffffff;
      }
      *(ulong *)(this + 0x18) = uVar2;
      uVar5 = 1;
    }
  }
  return uVar5;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::populateFollowing() */

undefined4 __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::populateFollowing(BreakCache *this)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  DictionaryCache *this_00;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  lVar3 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *(int *)(this + 0x14);
  local_48 = 0;
  iVar2 = *(int *)(this + (long)iVar7 * 4 + 0x20);
  uVar1 = *(ushort *)(this + (long)iVar7 * 2 + 0x220);
  local_44 = 0;
  uVar5 = DictionaryCache::following(*(DictionaryCache **)(lVar3 + 0x290),iVar2,&local_48,&local_44)
  ;
  if ((char)uVar5 == '\0') {
    *(int *)(lVar3 + 0x27c) = iVar2;
    local_48 = icu_76_godot::RuleBasedBreakIterator::handleNext();
    if (local_48 == -1) goto LAB_0010105b;
    lVar3 = *(long *)(this + 8);
    local_44 = *(int *)(lVar3 + 0x280);
    if (*(int *)(lVar3 + 0x2a8) != 0) {
      this_00 = *(DictionaryCache **)(lVar3 + 0x290);
      if (1 < local_48 - iVar2) {
        DictionaryCache::populateDictionary(this_00,iVar2,local_48,(uint)uVar1,local_44);
        this_00 = *(DictionaryCache **)(*(long *)(this + 8) + 0x290);
      }
      cVar4 = DictionaryCache::following(this_00,iVar2,&local_48,&local_44);
      if (cVar4 != '\0') {
        iVar7 = *(int *)(this + 0x14);
        uVar6 = iVar7 + 1U & 0x7f;
        if (uVar6 == *(uint *)(this + 0x10)) {
          *(uint *)(this + 0x10) = uVar6 + 6 & 0x7f;
        }
        *(int *)(this + (long)(int)uVar6 * 4 + 0x20) = local_48;
        *(short *)(this + (long)(int)uVar6 * 2 + 0x220) = (short)local_44;
        *(uint *)(this + 0x1c) = uVar6;
        *(ulong *)(this + 0x14) = CONCAT44(local_48,iVar7 + 1U) & 0xffffffff0000007f;
        goto LAB_00101055;
      }
    }
    uVar6 = *(int *)(this + 0x14) + 1U & 0x7f;
    if (uVar6 == *(uint *)(this + 0x10)) {
      *(uint *)(this + 0x10) = uVar6 + 6 & 0x7f;
    }
    iVar7 = 6;
    *(int *)(this + (long)(int)uVar6 * 4 + 0x20) = local_48;
    *(short *)(this + (long)(int)uVar6 * 2 + 0x220) = (short)local_44;
    *(uint *)(this + 0x14) = uVar6;
    *(uint *)(this + 0x1c) = uVar6;
    *(int *)(this + 0x18) = local_48;
    do {
      local_48 = icu_76_godot::RuleBasedBreakIterator::handleNext();
      if ((local_48 == -1) || (*(int *)(*(long *)(this + 8) + 0x2a8) != 0)) break;
      uVar5 = *(undefined4 *)(*(long *)(this + 8) + 0x280);
      uVar6 = *(int *)(this + 0x14) + 1U & 0x7f;
      if (uVar6 == *(uint *)(this + 0x10)) {
        *(uint *)(this + 0x10) = uVar6 + 6 & 0x7f;
      }
      *(int *)(this + (long)(int)uVar6 * 4 + 0x20) = local_48;
      *(short *)(this + (long)(int)uVar6 * 2 + 0x220) = (short)uVar5;
      *(uint *)(this + 0x14) = uVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    uVar6 = iVar7 + 1U & 0x7f;
    if (uVar6 == *(uint *)(this + 0x10)) {
      *(uint *)(this + 0x10) = uVar6 + 6 & 0x7f;
    }
    *(int *)(this + (long)(int)uVar6 * 4 + 0x20) = local_48;
    *(short *)(this + (long)(int)uVar6 * 2 + 0x220) = (short)local_44;
    *(uint *)(this + 0x1c) = uVar6;
    *(ulong *)(this + 0x14) = CONCAT44(local_48,iVar7 + 1U) & 0xffffffff0000007f;
  }
LAB_00101055:
  uVar5 = 1;
LAB_0010105b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::nextOL() */

void __thiscall icu_76_godot::RuleBasedBreakIterator::BreakCache::nextOL(BreakCache *this)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = populateFollowing(this);
  lVar2 = *(long *)(this + 8);
  uVar1 = *(undefined4 *)(this + 0x18);
  *(bool *)(lVar2 + 0x2d8) = cVar3 == '\0';
  *(undefined4 *)(lVar2 + 0x27c) = uVar1;
  *(uint *)(lVar2 + 0x280) = (uint)*(ushort *)(this + (long)*(int *)(this + 0x1c) * 2 + 0x220);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear(int, UErrorCode&) [clone .part.0]
    */

undefined8 __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear
          (BreakCache *this,int param_1,UErrorCode *param_2)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined4 uVar11;
  
  if ((*(int *)(this + (long)*(int *)(this + 0x10) * 4 + 0x20) + -0xe <= param_1) &&
     (iVar10 = *(int *)(this + (long)*(int *)(this + 0x14) * 4 + 0x20), param_1 <= iVar10 + 0xe))
  goto LAB_00101147;
  uVar3 = 0;
  iVar10 = 0;
  if (0xf < param_1) {
    iVar5 = icu_76_godot::RuleBasedBreakIterator::handleSafePrevious((int)*(undefined8 *)(this + 8))
    ;
    iVar6 = *(int *)(this + 0x14);
    iVar10 = *(int *)(this + (long)iVar6 * 4 + 0x20);
    if ((iVar10 < param_1) && (iVar5 + -0xf <= iVar10)) goto LAB_0010118b;
    if (iVar5 < 0xf) {
      if (param_1 + 0xf < *(int *)(this + (long)*(int *)(this + 0x10) * 4 + 0x20)) {
        *(undefined8 *)(this + 0x10) = 0;
        iVar10 = 0;
        iVar6 = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined4 *)(this + 0x20) = 0;
        *(undefined2 *)(this + 0x220) = 0;
        goto LAB_0010118b;
      }
      goto LAB_00101147;
    }
    *(int *)(*(long *)(this + 8) + 0x27c) = iVar5;
    iVar10 = icu_76_godot::RuleBasedBreakIterator::handleNext();
    if (iVar10 == -1) {
LAB_0010140d:
      iVar10 = utext_nativeLength_76_godot(*(long *)(this + 8) + 0x1e0);
    }
    else if (iVar10 <= iVar5 + 4) {
      utext_setNativeIndex_76_godot(*(long *)(this + 8) + 0x1e0,(long)iVar10);
      lVar7 = utext_getPreviousNativeIndex_76_godot(*(long *)(this + 8) + 0x1e0);
      if ((iVar5 == lVar7) &&
         (iVar10 = icu_76_godot::RuleBasedBreakIterator::handleNext(), iVar10 == -1))
      goto LAB_0010140d;
    }
    uVar3 = *(undefined2 *)(*(long *)(this + 8) + 0x280);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = iVar10;
  *(undefined4 *)(this + 0x1c) = 0;
  *(int *)(this + 0x20) = iVar10;
  *(undefined2 *)(this + 0x220) = uVar3;
LAB_00101147:
  if (iVar10 < param_1) {
    do {
      cVar2 = populateFollowing(this);
      if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar6 = *(int *)(this + 0x14);
      iVar10 = *(int *)(this + (long)iVar6 * 4 + 0x20);
LAB_0010118b:
    } while (iVar10 < param_1);
    *(int *)(this + 0x1c) = iVar6;
    *(int *)(this + 0x18) = iVar10;
    while (param_1 < iVar10) {
      while (*(int *)param_2 < 1) {
        uVar4 = *(uint *)(this + 0x1c);
        if (uVar4 == *(uint *)(this + 0x10)) {
          populatePreceding((UErrorCode *)this);
          uVar8 = *(uint *)(this + 0x1c);
          uVar11 = *(undefined4 *)(this + 0x18);
        }
        else {
          uVar1 = uVar4 - 1;
          uVar11 = *(undefined4 *)(this + (ulong)(uVar1 & 0x7f) * 4 + 0x20);
          uVar8 = uVar1 & 0x7f;
          *(ulong *)(this + 0x18) = CONCAT44(uVar1,uVar11) & 0x7fffffffff;
        }
        lVar7 = *(long *)(this + 8);
        *(undefined4 *)(lVar7 + 0x27c) = uVar11;
        iVar10 = *(int *)(this + 0x1c);
        *(bool *)(lVar7 + 0x2d8) = uVar4 == uVar8;
        *(uint *)(lVar7 + 0x280) = (uint)*(ushort *)(this + (long)iVar10 * 2 + 0x220);
        iVar10 = *(int *)(this + 0x18);
        if (iVar10 <= param_1) {
          return 1;
        }
      }
    }
  }
  else {
    uVar9 = (ulong)*(int *)(this + 0x10);
    iVar10 = *(int *)(this + uVar9 * 4 + 0x20);
    if (param_1 < iVar10) {
      do {
        if (*(int *)param_2 < 1) {
          populatePreceding((UErrorCode *)this);
          uVar9 = (ulong)*(int *)(this + 0x10);
          iVar10 = *(int *)(this + uVar9 * 4 + 0x20);
        }
      } while (param_1 < iVar10);
      *(int *)(this + 0x1c) = (int)uVar9;
      *(int *)(this + 0x18) = iVar10;
      if (iVar10 < param_1) {
        while( true ) {
          if ((int)uVar9 == *(int *)(this + 0x14)) {
            cVar2 = populateFollowing(this);
            lVar7 = *(long *)(this + 8);
            uVar11 = *(undefined4 *)(this + 0x18);
            *(bool *)(lVar7 + 0x2d8) = cVar2 == '\0';
            *(undefined4 *)(lVar7 + 0x27c) = uVar11;
            *(uint *)(lVar7 + 0x280) =
                 (uint)*(ushort *)(this + (long)*(int *)(this + 0x1c) * 2 + 0x220);
            iVar10 = *(int *)(this + 0x18);
          }
          else {
            lVar7 = *(long *)(this + 8);
            uVar4 = (int)uVar9 + 1U & 0x7f;
            *(uint *)(this + 0x1c) = uVar4;
            uVar11 = *(undefined4 *)(this + (ulong)uVar4 * 4 + 0x20);
            *(undefined4 *)(lVar7 + 0x27c) = uVar11;
            *(undefined4 *)(this + 0x18) = uVar11;
            *(uint *)(lVar7 + 0x280) =
                 (uint)*(ushort *)(this + (long)*(int *)(this + 0x1c) * 2 + 0x220);
            iVar10 = *(int *)(this + 0x18);
          }
          if (param_1 <= iVar10) break;
          uVar9 = (ulong)*(uint *)(this + 0x1c);
        }
        if ((param_1 < iVar10) && (*(int *)param_2 < 1)) {
          previous(this,param_2);
        }
      }
    }
  }
  return 1;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear(int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear
          (BreakCache *this,int param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)param_2 < 1) {
    uVar1 = populateNear(this,param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::following(int, UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::following
          (BreakCache *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  BreakCache *this_00;
  
  if (0 < *(int *)param_2) {
    return;
  }
  if (((*(int *)(this + 0x18) == param_1) ||
      (this_00 = this, cVar4 = seek(this,param_1), cVar4 != '\0')) ||
     (cVar4 = populateNear(this_00,param_1,param_2), cVar4 != '\0')) {
    lVar3 = *(long *)(this + 8);
    iVar1 = *(int *)(this + 0x1c);
    *(undefined1 *)(lVar3 + 0x2d8) = 0;
    if (iVar1 == *(int *)(this + 0x14)) {
      cVar4 = populateFollowing(this);
      lVar3 = *(long *)(this + 8);
      uVar2 = *(undefined4 *)(this + 0x18);
      *(bool *)(lVar3 + 0x2d8) = cVar4 == '\0';
      *(undefined4 *)(lVar3 + 0x27c) = uVar2;
      *(uint *)(lVar3 + 0x280) = (uint)*(ushort *)(this + (long)*(int *)(this + 0x1c) * 2 + 0x220);
      return;
    }
    uVar5 = iVar1 + 1U & 0x7f;
    *(uint *)(this + 0x1c) = uVar5;
    uVar2 = *(undefined4 *)(this + (ulong)uVar5 * 4 + 0x20);
    *(undefined4 *)(lVar3 + 0x27c) = uVar2;
    *(undefined4 *)(this + 0x18) = uVar2;
    *(uint *)(lVar3 + 0x280) = (uint)*(ushort *)(this + (long)*(int *)(this + 0x1c) * 2 + 0x220);
  }
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::preceding(int, UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::preceding
          (BreakCache *this,int param_1,UErrorCode *param_2)

{
  ushort uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  BreakCache *this_00;
  
  if (0 < *(int *)param_2) {
    return;
  }
  if (param_1 != *(int *)(this + 0x18)) {
    this_00 = this;
    cVar3 = seek(this,param_1);
    if (cVar3 == '\0') {
      cVar3 = populateNear(this_00,param_1,param_2);
      if (cVar3 == '\0') {
        return;
      }
      iVar4 = *(int *)(this + 0x18);
      if (iVar4 == param_1) {
        if (0 < *(int *)param_2) {
          return;
        }
        goto LAB_0010152b;
      }
    }
    else {
      iVar4 = *(int *)(this_00 + 0x18);
      if (param_1 == iVar4) goto LAB_0010152b;
    }
    lVar2 = *(long *)(this + 8);
    *(int *)(lVar2 + 0x27c) = iVar4;
    uVar1 = *(ushort *)(this + (long)*(int *)(this + 0x1c) * 2 + 0x220);
    *(undefined1 *)(lVar2 + 0x2d8) = 0;
    *(uint *)(lVar2 + 0x280) = (uint)uVar1;
    return;
  }
LAB_0010152b:
  previous(this,param_2);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::populatePreceding(UErrorCode&) */

undefined8 __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::populatePreceding
          (BreakCache *this,UErrorCode *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)param_1 < 1) {
    uVar1 = populatePreceding((UErrorCode *)this);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::addFollowing(int, int,
   icu_76_godot::RuleBasedBreakIterator::BreakCache::UpdatePositionValues) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::addFollowing
          (BreakCache *this,undefined4 param_1,undefined2 param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x14) + 1U & 0x7f;
  if (*(uint *)(this + 0x10) == uVar1) {
    *(uint *)(this + 0x10) = uVar1 + 6 & 0x7f;
  }
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x20) = param_1;
  *(undefined2 *)(this + (long)(int)uVar1 * 2 + 0x220) = param_3;
  *(uint *)(this + 0x14) = uVar1;
  if (param_4 != 1) {
    return;
  }
  *(uint *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x18) = param_1;
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::addPreceding(int, int,
   icu_76_godot::RuleBasedBreakIterator::BreakCache::UpdatePositionValues) */

undefined8 __thiscall
icu_76_godot::RuleBasedBreakIterator::BreakCache::addPreceding
          (BreakCache *this,undefined4 param_1,undefined2 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x14);
  uVar2 = *(int *)(this + 0x10) - 1U & 0x7f;
  if (uVar1 == uVar2) {
    if ((*(uint *)(this + 0x1c) == uVar1) && (param_4 == 0)) {
      return 0;
    }
    *(uint *)(this + 0x14) = uVar1 - 1 & 0x7f;
  }
  *(undefined4 *)(this + (long)(int)uVar2 * 4 + 0x20) = param_1;
  *(undefined2 *)(this + (long)(int)uVar2 * 2 + 0x220) = param_3;
  *(uint *)(this + 0x10) = uVar2;
  if (param_4 == 1) {
    *(uint *)(this + 0x1c) = uVar2;
    *(undefined4 *)(this + 0x18) = param_1;
  }
  return 1;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::dumpCache() */

void icu_76_godot::RuleBasedBreakIterator::BreakCache::dumpCache(void)

{
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::DictionaryCache::~DictionaryCache() */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::DictionaryCache::~DictionaryCache(DictionaryCache *this)

{
  icu_76_godot::UVector32::~UVector32((UVector32 *)(this + 8));
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::~BreakCache() */

void __thiscall icu_76_godot::RuleBasedBreakIterator::BreakCache::~BreakCache(BreakCache *this)

{
  *(undefined ***)this = &PTR__BreakCache_001017a0;
  icu_76_godot::UVector32::~UVector32((UVector32 *)(this + 800));
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::~BreakCache() */

void __thiscall icu_76_godot::RuleBasedBreakIterator::BreakCache::~BreakCache(BreakCache *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__BreakCache_001017a0;
  icu_76_godot::UVector32::~UVector32((UVector32 *)(this + 800));
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::DictionaryCache::following(int, int*, int*) [clone .cold]
    */

void icu_76_godot::RuleBasedBreakIterator::DictionaryCache::following
               (int param_1,int *param_2,int *param_3)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* icu_76_godot::RuleBasedBreakIterator::DictionaryCache::preceding(int, int*, int*) [clone .cold]
    */

void icu_76_godot::RuleBasedBreakIterator::DictionaryCache::preceding
               (int param_1,int *param_2,int *param_3)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear(int, UErrorCode&) [clone .part.0]
   [clone .cold] */

void icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear(int param_1,UErrorCode *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


