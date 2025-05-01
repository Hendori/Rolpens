
/* icu_76_godot::RBBIRuleBuilder::RBBIRuleBuilder(icu_76_godot::UnicodeString const&, UParseError*,
   UErrorCode&) */

void __thiscall
icu_76_godot::RBBIRuleBuilder::RBBIRuleBuilder
          (RBBIRuleBuilder *this,UnicodeString *param_1,UParseError *param_2,UErrorCode *param_3)

{
  int iVar1;
  UVector *pUVar2;
  RBBIRuleScanner *this_00;
  RBBISetBuilder *this_01;
  UErrorCode *pUVar3;
  
  *(undefined ***)this = &PTR__RBBIRuleBuilder_00100970;
  *(UnicodeString **)(this + 0x20) = param_1;
  icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)(this + 0x28),param_1);
  pUVar3 = (UErrorCode *)0x0;
  *(UErrorCode **)(this + 0x10) = param_3;
  *(UParseError **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(RBBIRuleBuilder **)(this + 0x90) = this + 0x70;
  *(undefined2 *)(this + 0x98) = 0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  if (param_2 != (UParseError *)0x0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined1 (*) [16])param_2 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_2 + 0x30) = (undefined1  [16])0x0;
  }
  if (*(int *)param_3 < 1) {
    pUVar2 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,0);
    if (pUVar2 != (UVector *)0x0) {
      pUVar3 = param_3;
      icu_76_godot::UVector::UVector(pUVar2,param_3);
    }
    *(UVector **)(this + 0xa8) = pUVar2;
    pUVar2 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)pUVar3);
    if (pUVar2 != (UVector *)0x0) {
      pUVar3 = param_3;
      icu_76_godot::UVector::UVector(pUVar2,param_3);
    }
    *(UVector **)(this + 0xb8) = pUVar2;
    this_00 = (RBBIRuleScanner *)icu_76_godot::UMemory::operator_new((UMemory *)0xc78,(ulong)pUVar3)
    ;
    if (this_00 != (RBBIRuleScanner *)0x0) {
      pUVar3 = (UErrorCode *)this;
      icu_76_godot::RBBIRuleScanner::RBBIRuleScanner(this_00,this);
    }
    *(RBBIRuleScanner **)(this + 0x68) = this_00;
    this_01 = (RBBISetBuilder *)icu_76_godot::UMemory::operator_new((UMemory *)0x38,(ulong)pUVar3);
    if (this_01 == (RBBISetBuilder *)0x0) {
      iVar1 = *(int *)param_3;
      *(undefined8 *)(this + 0xa0) = 0;
      if (iVar1 < 1) goto LAB_00100158;
    }
    else {
      icu_76_godot::RBBISetBuilder::RBBISetBuilder(this_01,this);
      iVar1 = *(int *)param_3;
      *(RBBISetBuilder **)(this + 0xa0) = this_01;
      if ((iVar1 < 1) &&
         (((*(long *)(this + 0x68) == 0 || (*(long *)(this + 0xa8) == 0)) ||
          (*(long *)(this + 0xb8) == 0)))) {
LAB_00100158:
        *(undefined4 *)param_3 = 7;
        return;
      }
    }
  }
  return;
}



/* icu_76_godot::RBBIRuleBuilder::optimizeTables() */

void __thiscall icu_76_godot::RBBIRuleBuilder::optimizeTables(RBBIRuleBuilder *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    cVar4 = '\0';
    while( true ) {
      cVar2 = icu_76_godot::RBBITableBuilder::findDuplCharClassFrom(*(pair **)(this + 0xb0));
      if (cVar2 == '\0') break;
      icu_76_godot::RBBISetBuilder::mergeCategories(*(undefined8 *)(this + 0xa0),3);
      icu_76_godot::RBBITableBuilder::removeColumn((int)*(undefined8 *)(this + 0xb0));
      cVar4 = cVar2;
    }
    iVar3 = icu_76_godot::RBBITableBuilder::removeDuplicateStates();
    while (0 < iVar3) {
      cVar4 = '\x01';
      iVar3 = icu_76_godot::RBBITableBuilder::removeDuplicateStates();
    }
  } while (cVar4 != '\0');
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::RBBIRuleBuilder::~RBBIRuleBuilder() */

void __thiscall icu_76_godot::RBBIRuleBuilder::~RBBIRuleBuilder(RBBIRuleBuilder *this)

{
  RBBISetBuilder *this_00;
  RBBITableBuilder *this_01;
  RBBINode *pRVar1;
  uint uVar2;
  void *pvVar3;
  
  uVar2 = 0;
  *(undefined ***)this = &PTR__RBBIRuleBuilder_00100970;
  while( true ) {
    pvVar3 = (void *)(ulong)uVar2;
    pRVar1 = (RBBINode *)icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0xa8));
    if (pRVar1 == (RBBINode *)0x0) break;
    uVar2 = uVar2 + 1;
    icu_76_godot::RBBINode::~RBBINode(pRVar1);
    icu_76_godot::UMemory::operator_delete((UMemory *)pRVar1,pvVar3);
  }
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa8) + 8))();
  }
  this_00 = *(RBBISetBuilder **)(this + 0xa0);
  if (this_00 != (RBBISetBuilder *)0x0) {
    icu_76_godot::RBBISetBuilder::~RBBISetBuilder(this_00);
    icu_76_godot::UMemory::operator_delete((UMemory *)this_00,pvVar3);
  }
  this_01 = *(RBBITableBuilder **)(this + 0xb0);
  if (this_01 != (RBBITableBuilder *)0x0) {
    icu_76_godot::RBBITableBuilder::~RBBITableBuilder(this_01);
    icu_76_godot::UMemory::operator_delete((UMemory *)this_01,pvVar3);
  }
  pRVar1 = *(RBBINode **)(this + 0x70);
  if (pRVar1 != (RBBINode *)0x0) {
    icu_76_godot::RBBINode::~RBBINode(pRVar1);
    icu_76_godot::UMemory::operator_delete((UMemory *)pRVar1,pvVar3);
  }
  pRVar1 = *(RBBINode **)(this + 0x78);
  if (pRVar1 != (RBBINode *)0x0) {
    icu_76_godot::RBBINode::~RBBINode(pRVar1);
    icu_76_godot::UMemory::operator_delete((UMemory *)pRVar1,pvVar3);
  }
  pRVar1 = *(RBBINode **)(this + 0x80);
  if (pRVar1 != (RBBINode *)0x0) {
    icu_76_godot::RBBINode::~RBBINode(pRVar1);
    icu_76_godot::UMemory::operator_delete((UMemory *)pRVar1,pvVar3);
  }
  pRVar1 = *(RBBINode **)(this + 0x88);
  if (pRVar1 != (RBBINode *)0x0) {
    icu_76_godot::RBBINode::~RBBINode(pRVar1);
    icu_76_godot::UMemory::operator_delete((UMemory *)pRVar1,pvVar3);
  }
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 8))();
  }
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x28));
  return;
}



/* icu_76_godot::RBBIRuleBuilder::~RBBIRuleBuilder() */

void __thiscall icu_76_godot::RBBIRuleBuilder::~RBBIRuleBuilder(RBBIRuleBuilder *this)

{
  void *in_RSI;
  
  ~RBBIRuleBuilder(this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::RBBIRuleBuilder::flattenData() [clone .part.0] */

undefined8 * __thiscall icu_76_godot::RBBIRuleBuilder::flattenData(RBBIRuleBuilder *this)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  RBBIRuleBuilder *pRVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  int local_8c;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::RBBIRuleScanner::stripRules(local_88);
  icu_76_godot::UnicodeString::operator=((UnicodeString *)(this + 0x28),local_88);
  icu_76_godot::UnicodeString::~UnicodeString(local_88);
  iVar2 = icu_76_godot::RBBITableBuilder::getTableSize();
  uVar15 = iVar2 + 7U & 0xfffffff8;
  iVar2 = icu_76_godot::RBBITableBuilder::getSafeTableSize();
  uVar3 = iVar2 + 7U & 0xfffffff8;
  iVar2 = icu_76_godot::RBBISetBuilder::getTrieSize();
  local_8c = 0;
  uVar13 = iVar2 + 7U & 0xfffffff8;
  uVar1 = *(ushort *)(this + 0x30);
  uVar17 = *(int *)(*(long *)(this + 0xb8) + 8) * 4 + 7U & 0xfffffff8;
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0x34);
    if ((uVar1 & 0x11) != 0) goto LAB_001006bd;
LAB_00100476:
    pRVar9 = this + 0x32;
    if ((uVar1 & 2) == 0) {
      pRVar9 = *(RBBIRuleBuilder **)(this + 0x40);
    }
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
    if ((uVar1 & 0x11) == 0) goto LAB_00100476;
LAB_001006bd:
    pRVar9 = (RBBIRuleBuilder *)0x0;
  }
  u_strToUTF8WithSub_76_godot(0,0,&local_8c,pRVar9,iVar2,0xfffd,0,*(undefined8 *)(this + 0x10));
  **(undefined4 **)(this + 0x10) = 0;
  uVar4 = local_8c + 8U & 0xfffffff8;
  iVar2 = uVar15 + 0x50;
  iVar10 = iVar2 + uVar3;
  iVar5 = iVar10 + uVar17 + uVar13 + uVar4;
  uVar16 = (ulong)iVar5;
  puVar7 = (undefined8 *)uprv_malloc_76_godot(uVar16);
  if (puVar7 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    **(undefined4 **)(this + 0x10) = 7;
    goto LAB_00100668;
  }
  __memset_chk(puVar7,0,uVar16,uVar16);
  *puVar7 = 0x60000b1a0;
  *(int *)(puVar7 + 1) = iVar5;
  uVar6 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
  *(int *)(puVar7 + 4) = iVar10;
  *(undefined4 *)((long)puVar7 + 0xc) = uVar6;
  *(uint *)(puVar7 + 6) = iVar10 + uVar13;
  *(uint *)((long)puVar7 + 0x14) = uVar15;
  *(undefined4 *)(puVar7 + 2) = 0x50;
  *(int *)(puVar7 + 3) = iVar2;
  *(uint *)((long)puVar7 + 0x24) = uVar13;
  *(uint *)((long)puVar7 + 0x1c) = uVar3;
  *(uint *)((long)puVar7 + 0x34) = uVar17;
  *(int *)((long)puVar7 + 0x2c) = local_8c;
  *(uint *)(puVar7 + 5) = iVar10 + uVar13 + uVar17;
  uVar8 = 0x38;
  if (0x37 < uVar16) {
    uVar8 = uVar16;
  }
  __memset_chk(puVar7 + 7,0,0x18,uVar8 - 0x38);
  icu_76_godot::RBBITableBuilder::exportTable(*(void **)(this + 0xb0));
  icu_76_godot::RBBITableBuilder::exportSafeTable(*(void **)(this + 0xb0));
  icu_76_godot::RBBISetBuilder::serializeTrie(*(uchar **)(this + 0xa0));
  lVar14 = *(long *)(this + 0xb8);
  uVar3 = *(uint *)(puVar7 + 6);
  if (0 < *(int *)(lVar14 + 8)) {
    lVar11 = 0;
    do {
      uVar6 = icu_76_godot::UVector::elementAti((int)lVar14);
      lVar14 = *(long *)(this + 0xb8);
      *(undefined4 *)((long)puVar7 + lVar11 * 4 + (ulong)uVar3) = uVar6;
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < *(int *)(lVar14 + 8));
  }
  uVar1 = *(ushort *)(this + 0x30);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(this + 0x34);
    if ((uVar1 & 0x11) != 0) goto LAB_001006d5;
LAB_0010062c:
    pRVar9 = this + 0x32;
    if ((uVar1 & 2) == 0) {
      pRVar9 = *(RBBIRuleBuilder **)(this + 0x40);
    }
  }
  else {
    iVar2 = (int)((short)uVar1 >> 5);
    if ((uVar1 & 0x11) == 0) goto LAB_0010062c;
LAB_001006d5:
    pRVar9 = (RBBIRuleBuilder *)0x0;
  }
  u_strToUTF8WithSub_76_godot
            ((ulong)*(uint *)(puVar7 + 5) + (long)puVar7,uVar4,&local_8c,pRVar9,iVar2,0xfffd,0,
             *(undefined8 *)(this + 0x10));
  puVar12 = (undefined8 *)0x0;
  if (**(int **)(this + 0x10) < 1) {
    puVar12 = puVar7;
    puVar7 = (undefined8 *)0x0;
  }
LAB_00100668:
  uprv_free_76_godot(puVar7);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RBBIRuleBuilder::flattenData() */

undefined8 __thiscall icu_76_godot::RBBIRuleBuilder::flattenData(RBBIRuleBuilder *this)

{
  undefined8 uVar1;
  
  if (**(int **)(this + 0x10) < 1) {
    uVar1 = flattenData(this);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::RBBIRuleBuilder::build(UErrorCode&) */

undefined8 __thiscall
icu_76_godot::RBBIRuleBuilder::build(RBBIRuleBuilder *this,UErrorCode *param_1)

{
  RBBITableBuilder *this_00;
  undefined8 uVar1;
  UErrorCode *pUVar2;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  pUVar2 = param_1;
  icu_76_godot::RBBIRuleScanner::parse();
  if (*(int *)param_1 < 1) {
    icu_76_godot::RBBISetBuilder::buildRanges();
    this_00 = (RBBITableBuilder *)icu_76_godot::UMemory::operator_new((UMemory *)0x38,(ulong)pUVar2)
    ;
    if (this_00 == (RBBITableBuilder *)0x0) {
      *(undefined8 *)(this + 0xb0) = 0;
      *(undefined4 *)param_1 = 7;
    }
    else {
      icu_76_godot::RBBITableBuilder::RBBITableBuilder
                (this_00,this,(RBBINode **)(this + 0x70),param_1);
      *(RBBITableBuilder **)(this + 0xb0) = this_00;
      icu_76_godot::RBBITableBuilder::buildForwardTable();
      optimizeTables(this);
      icu_76_godot::RBBITableBuilder::buildSafeReverseTable(*(UErrorCode **)(this + 0xb0));
      icu_76_godot::RBBISetBuilder::buildTrie();
      uVar1 = 0;
      if (**(int **)(this + 0x10) < 1) {
        uVar1 = flattenData(this);
      }
      if (*(int *)param_1 < 1) {
        return uVar1;
      }
    }
  }
  return 0;
}



/* icu_76_godot::RBBIRuleBuilder::createRuleBasedBreakIterator(icu_76_godot::UnicodeString const&,
   UParseError*, UErrorCode&) */

RuleBasedBreakIterator *
icu_76_godot::RBBIRuleBuilder::createRuleBasedBreakIterator
          (UnicodeString *param_1,UParseError *param_2,UErrorCode *param_3)

{
  RBBIDataHeader *pRVar1;
  RuleBasedBreakIterator *this;
  UErrorCode *pUVar2;
  long in_FS_OFFSET;
  RBBIRuleBuilder aRStack_f8 [200];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RBBIRuleBuilder(aRStack_f8,param_1,param_2,param_3);
  if (*(int *)param_3 < 1) {
    pUVar2 = param_3;
    pRVar1 = (RBBIDataHeader *)build(aRStack_f8,param_3);
    if (*(int *)param_3 < 1) {
      this = (RuleBasedBreakIterator *)
             icu_76_godot::UMemory::operator_new((UMemory *)0x2f0,(ulong)pUVar2);
      if (this == (RuleBasedBreakIterator *)0x0) {
        if (*(int *)param_3 < 1) {
          *(undefined4 *)param_3 = 7;
        }
      }
      else {
        icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator(this,pRVar1,param_3);
        if (*(int *)param_3 < 1) goto LAB_0010087b;
        icu_76_godot::RuleBasedBreakIterator::~RuleBasedBreakIterator(this);
      }
    }
  }
  this = (RuleBasedBreakIterator *)0x0;
LAB_0010087b:
  ~RBBIRuleBuilder(aRStack_f8);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


