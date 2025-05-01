
/* icu_76_godot::RBBISetBuilder::RBBISetBuilder(icu_76_godot::RBBIRuleBuilder*) */

void __thiscall
icu_76_godot::RBBISetBuilder::RBBISetBuilder(RBBISetBuilder *this,RBBIRuleBuilder *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x28) = 0;
  *(RBBIRuleBuilder **)this = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  this[0x34] = (RBBISetBuilder)0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::RBBISetBuilder::~RBBISetBuilder() */

void __thiscall icu_76_godot::RBBISetBuilder::~RBBISetBuilder(RBBISetBuilder *this)

{
  UMemory *pUVar1;
  UMemory *this_00;
  void *in_RSI;
  
  this_00 = *(UMemory **)(this + 0x10);
  while (this_00 != (UMemory *)0x0) {
    pUVar1 = *(UMemory **)(this_00 + 0x18);
    if (*(long **)(this_00 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this_00 + 0x10) + 8))();
    }
    icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
    this_00 = pUVar1;
  }
  ucptrie_close_76_godot(*(undefined8 *)(this + 0x20));
  umutablecptrie_close_76_godot(*(undefined8 *)(this + 0x18));
  return;
}



/* icu_76_godot::RBBISetBuilder::buildTrie() */

void __thiscall icu_76_godot::RBBISetBuilder::buildTrie(RBBISetBuilder *this)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = umutablecptrie_open_76_godot(0,0,*(undefined8 *)(this + 8));
  puVar1 = *(undefined4 **)(this + 0x10);
  *(undefined8 *)(this + 0x18) = uVar2;
  while ((puVar1 != (undefined4 *)0x0 && (**(int **)(this + 8) < 1))) {
    umutablecptrie_setRange_76_godot(*(undefined8 *)(this + 0x18),*puVar1,puVar1[1],puVar1[2]);
    puVar1 = *(undefined4 **)(puVar1 + 6);
  }
  return;
}



/* icu_76_godot::RBBISetBuilder::mergeCategories(std::pair<int, int>) */

void __thiscall
icu_76_godot::RBBISetBuilder::mergeCategories(RBBISetBuilder *this,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)((ulong)param_2 >> 0x20);
  for (lVar2 = *(long *)(this + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x18)) {
    while (iVar1 = *(int *)(lVar2 + 8), iVar1 != iVar3) {
      if (iVar3 < iVar1) {
        *(int *)(lVar2 + 8) = iVar1 + -1;
      }
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 == 0) goto LAB_00100134;
    }
    *(int *)(lVar2 + 8) = (int)param_2;
  }
LAB_00100134:
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  if (iVar3 <= *(int *)(this + 0x30)) {
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + -1;
  }
  return;
}



/* icu_76_godot::RBBISetBuilder::getTrieSize() */

ulong __thiscall icu_76_godot::RBBISetBuilder::getTrieSize(RBBISetBuilder *this)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (0 < **(int **)(this + 8)) {
    return 0;
  }
  if (*(long *)(this + 0x20) == 0) {
    uVar1 = umutablecptrie_buildImmutable_76_godot
                      (*(undefined8 *)(this + 0x18),0,(*(int *)(this + 0x2c) < 0xfd) * '\x02');
    *(undefined8 *)(this + 0x20) = uVar1;
    uVar2 = ucptrie_toBinary_76_godot(uVar1,0,0,*(undefined8 *)(this + 8));
    *(int *)(this + 0x28) = (int)uVar2;
    if (**(int **)(this + 8) == 0xf) {
      **(int **)(this + 8) = 0;
      return uVar2;
    }
  }
  else {
    uVar2 = (ulong)*(uint *)(this + 0x28);
  }
  return uVar2;
}



/* icu_76_godot::RBBISetBuilder::serializeTrie(unsigned char*) */

void __thiscall icu_76_godot::RBBISetBuilder::serializeTrie(RBBISetBuilder *this,uchar *param_1)

{
  ucptrie_toBinary_76_godot
            (*(undefined8 *)(this + 0x20),param_1,*(undefined4 *)(this + 0x28),
             *(undefined8 *)(this + 8));
  return;
}



/* icu_76_godot::RBBISetBuilder::addValToSet(icu_76_godot::RBBINode*, unsigned int) */

void __thiscall
icu_76_godot::RBBISetBuilder::addValToSet(RBBISetBuilder *this,RBBINode *param_1,uint param_2)

{
  long lVar1;
  RBBINode *pRVar2;
  RBBINode *pRVar3;
  ulong uVar4;
  
  pRVar2 = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,(ulong)param_1);
  if (pRVar2 != (RBBINode *)0x0) {
    uVar4 = 3;
    icu_76_godot::RBBINode::RBBINode(pRVar2);
    lVar1 = *(long *)(param_1 + 0x10);
    *(uint *)(pRVar2 + 0x7c) = param_2 & 0xffff;
    if (lVar1 == 0) {
      *(RBBINode **)(param_1 + 0x10) = pRVar2;
      *(RBBINode **)(pRVar2 + 8) = param_1;
      return;
    }
    pRVar3 = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,uVar4);
    if (pRVar3 != (RBBINode *)0x0) {
      icu_76_godot::RBBINode::RBBINode(pRVar3,9);
      lVar1 = *(long *)(param_1 + 0x10);
      *(RBBINode **)(pRVar3 + 0x18) = pRVar2;
      *(long *)(pRVar3 + 0x10) = lVar1;
      *(RBBINode **)(lVar1 + 8) = pRVar3;
      *(RBBINode **)(pRVar2 + 8) = pRVar3;
      *(RBBINode **)(param_1 + 0x10) = pRVar3;
      *(RBBINode **)(pRVar3 + 8) = param_1;
      return;
    }
  }
  **(undefined4 **)(this + 8) = 7;
  return;
}



/* icu_76_godot::RBBISetBuilder::addValToSets(icu_76_godot::UVector*, unsigned int) */

void __thiscall
icu_76_godot::RBBISetBuilder::addValToSets(RBBISetBuilder *this,UVector *param_1,uint param_2)

{
  RBBINode *pRVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 8)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      pRVar1 = (RBBINode *)icu_76_godot::UVector::elementAt((int)param_1);
      addValToSet(this,pRVar1,param_2);
    } while (iVar2 < *(int *)(param_1 + 8));
    return;
  }
  return;
}



/* icu_76_godot::RBBISetBuilder::getNumCharCategories() const */

int __thiscall icu_76_godot::RBBISetBuilder::getNumCharCategories(RBBISetBuilder *this)

{
  return *(int *)(this + 0x2c) + 3;
}



/* icu_76_godot::RBBISetBuilder::getDictCategoriesStart() const */

undefined4 __thiscall icu_76_godot::RBBISetBuilder::getDictCategoriesStart(RBBISetBuilder *this)

{
  return *(undefined4 *)(this + 0x30);
}



/* icu_76_godot::RBBISetBuilder::sawBOF() const */

RBBISetBuilder __thiscall icu_76_godot::RBBISetBuilder::sawBOF(RBBISetBuilder *this)

{
  return this[0x34];
}



/* icu_76_godot::RBBISetBuilder::getFirstChar(int) const */

undefined4 __thiscall icu_76_godot::RBBISetBuilder::getFirstChar(RBBISetBuilder *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x10);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = *(undefined4 **)(puVar1 + 6);
  }
  return *puVar1;
}



/* icu_76_godot::RangeDescriptor::RangeDescriptor(icu_76_godot::RangeDescriptor const&, UErrorCode&)
    */

void __thiscall
icu_76_godot::RangeDescriptor::RangeDescriptor
          (RangeDescriptor *this,RangeDescriptor *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  UVector *this_00;
  UErrorCode *pUVar2;
  long lVar3;
  int iVar4;
  
  uVar1 = *(undefined8 *)param_1;
  iVar4 = *(int *)param_2;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)this = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 0xc);
  if (0 < iVar4) {
    return;
  }
  this_00 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)param_1);
  if (this_00 == (UVector *)0x0) {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)param_2 = 7;
  }
  else {
    icu_76_godot::UVector::UVector(this_00,param_2);
    iVar4 = *(int *)param_2;
    *(UVector **)(this + 0x10) = this_00;
    if ((iVar4 < 1) && (lVar3 = *(long *)(param_1 + 0x10), 0 < *(int *)(lVar3 + 8))) {
      iVar4 = 0;
      while( true ) {
        iVar4 = iVar4 + 1;
        pUVar2 = (UErrorCode *)icu_76_godot::UVector::elementAt((int)lVar3);
        icu_76_godot::UVector::addElement(this_00,pUVar2);
        lVar3 = *(long *)(param_1 + 0x10);
        if (*(int *)(lVar3 + 8) <= iVar4) break;
        this_00 = *(UVector **)(this + 0x10);
      }
    }
  }
  return;
}



/* icu_76_godot::RangeDescriptor::RangeDescriptor(UErrorCode&) */

void __thiscall
icu_76_godot::RangeDescriptor::RangeDescriptor(RangeDescriptor *this,UErrorCode *param_1)

{
  int iVar1;
  UVector *this_00;
  
  iVar1 = *(int *)param_1;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  if (0 < iVar1) {
    return;
  }
  this_00 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)param_1);
  if (this_00 == (UVector *)0x0) {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)param_1 = 7;
  }
  else {
    icu_76_godot::UVector::UVector(this_00,param_1);
    *(UVector **)(this + 0x10) = this_00;
  }
  return;
}



/* icu_76_godot::RangeDescriptor::~RangeDescriptor() */

void __thiscall icu_76_godot::RangeDescriptor::~RangeDescriptor(RangeDescriptor *this)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001004a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}



/* icu_76_godot::RangeDescriptor::split(int, UErrorCode&) */

void __thiscall
icu_76_godot::RangeDescriptor::split(RangeDescriptor *this,int param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  RangeDescriptor *this_00;
  undefined4 in_register_00000034;
  RangeDescriptor *pRVar2;
  
  this_00 = (RangeDescriptor *)
            icu_76_godot::UMemory::operator_new
                      ((UMemory *)0x20,CONCAT44(in_register_00000034,param_1));
  if (this_00 == (RangeDescriptor *)0x0) {
    *(undefined4 *)param_2 = 7;
  }
  else {
    pRVar2 = this;
    RangeDescriptor(this_00,this,param_2);
    if (0 < *(int *)param_2) {
      if (*(long **)(this_00 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(this_00 + 0x10) + 8))();
      }
      icu_76_godot::UMemory::operator_delete((UMemory *)this_00,pRVar2);
      return;
    }
    uVar1 = *(undefined8 *)(this + 0x18);
    *(int *)this_00 = param_1;
    *(int *)(this + 4) = param_1 + -1;
    *(undefined8 *)(this_00 + 0x18) = uVar1;
    *(RangeDescriptor **)(this + 0x18) = this_00;
  }
  return;
}



/* icu_76_godot::RangeDescriptor::isDictionaryRange() */

undefined8 __thiscall icu_76_godot::RangeDescriptor::isDictionaryRange(RangeDescriptor *this)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  lVar3 = *(long *)(this + 0x10);
  if (0 < *(int *)(lVar3 + 8)) {
    iVar5 = 0;
    do {
      lVar3 = icu_76_godot::UVector::elementAt((int)lVar3);
      if (((*(long *)(lVar3 + 8) != 0) &&
          (piVar1 = *(int **)(*(long *)(lVar3 + 8) + 8), piVar1 != (int *)0x0)) && (*piVar1 == 2)) {
        if ((short)piVar1[0xe] < 0) {
          uVar4 = piVar1[0xf];
        }
        else {
          uVar4 = (uint)(short)((short)piVar1[0xe] >> 5);
        }
        cVar2 = icu_76_godot::UnicodeString::doCompare
                          ((int)piVar1 + 0x30,0,(wchar16 *)(ulong)uVar4,0x100a84,0);
        if (cVar2 == '\0') {
          return 1;
        }
      }
      lVar3 = *(long *)(this + 0x10);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar3 + 8));
  }
  return 0;
}



/* icu_76_godot::RBBISetBuilder::buildRanges() */

void icu_76_godot::RBBISetBuilder::buildRanges(void)

{
  RangeDescriptor RVar1;
  int *piVar2;
  undefined8 uVar3;
  UnicodeString *pUVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  UVector *this;
  UErrorCode *pUVar11;
  RBBINode *pRVar12;
  int iVar13;
  uint uVar14;
  RangeDescriptor *pRVar15;
  ulong in_RSI;
  long lVar16;
  RBBISetBuilder *in_RDI;
  RangeDescriptor *this_00;
  long in_FS_OFFSET;
  code *local_c8;
  undefined2 local_c0;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x20,in_RSI);
  if (puVar10 == (undefined8 *)0x0) {
    *(undefined8 *)(in_RDI + 0x10) = 0;
    **(undefined4 **)(in_RDI + 8) = 7;
  }
  else {
    pUVar11 = *(UErrorCode **)(in_RDI + 8);
    *puVar10 = 0;
    iVar6 = *(int *)pUVar11;
    *(undefined4 *)(puVar10 + 1) = 0;
    *(undefined2 *)((long)puVar10 + 0xc) = 0;
    *(undefined1 (*) [16])(puVar10 + 2) = (undefined1  [16])0x0;
    if (iVar6 < 1) {
      this = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,in_RSI);
      if (this == (UVector *)0x0) {
        piVar2 = *(int **)(in_RDI + 8);
        puVar10[2] = 0;
        *(undefined4 *)pUVar11 = 7;
        iVar6 = *piVar2;
        *(undefined8 **)(in_RDI + 0x10) = puVar10;
      }
      else {
        icu_76_godot::UVector::UVector(this,pUVar11);
        piVar2 = *(int **)(in_RDI + 8);
        puVar10[2] = this;
        *(undefined8 **)(in_RDI + 0x10) = puVar10;
        iVar6 = *piVar2;
      }
      *puVar10 = _LC1;
      if (iVar6 < 1) {
        while (pUVar11 = (UErrorCode *)
                         icu_76_godot::UVector::elementAt
                                   ((int)*(undefined8 *)(*(long *)in_RDI + 0xa8)),
              pUVar11 != (UErrorCode *)0x0) {
          uVar3 = *(undefined8 *)(pUVar11 + 0x20);
          iVar6 = icu_76_godot::UnicodeSet::getRangeCount();
          pRVar15 = *(RangeDescriptor **)(in_RDI + 0x10);
          if (0 < iVar6) {
            iVar13 = 0;
            do {
              iVar7 = icu_76_godot::UnicodeSet::getRangeStart((int)uVar3);
              iVar8 = icu_76_godot::UnicodeSet::getRangeEnd((int)uVar3);
              iVar9 = *(int *)(pRVar15 + 4);
              while (iVar9 < iVar7) {
                pRVar15 = *(RangeDescriptor **)(pRVar15 + 0x18);
                iVar9 = *(int *)(pRVar15 + 4);
              }
              if (*(int *)pRVar15 < iVar7) {
                RangeDescriptor::split(pRVar15,iVar7,*(UErrorCode **)(in_RDI + 8));
                if (0 < **(int **)(in_RDI + 8)) goto LAB_0010066b;
              }
              else {
                if (((iVar8 < iVar9) &&
                    (RangeDescriptor::split(pRVar15,iVar8 + 1,*(UErrorCode **)(in_RDI + 8)),
                    0 < **(int **)(in_RDI + 8))) ||
                   ((iVar9 = icu_76_godot::UVector::indexOf(*(void **)(pRVar15 + 0x10),(int)pUVar11)
                    , iVar9 == -1 &&
                    (icu_76_godot::UVector::addElement(*(void **)(pRVar15 + 0x10),pUVar11),
                    0 < **(int **)(in_RDI + 8))))) goto LAB_0010066b;
                if (*(int *)(pRVar15 + 4) == iVar8) {
                  iVar13 = iVar13 + 1;
                }
                pRVar15 = *(RangeDescriptor **)(pRVar15 + 0x18);
              }
            } while (iVar13 < iVar6);
          }
        }
        pRVar15 = *(RangeDescriptor **)(in_RDI + 0x10);
        if (pRVar15 == (RangeDescriptor *)0x0) {
          iVar6 = *(int *)(in_RDI + 0x2c);
          iVar13 = 0;
          *(int *)(in_RDI + 0x30) = iVar6 + 3;
        }
        else {
          iVar13 = 0;
          this_00 = pRVar15;
LAB_0010082a:
          do {
            if (pRVar15 == this_00) {
              iVar6 = *(int *)(this_00 + 8);
            }
            else {
              cVar5 = icu_76_godot::UVector::equals(*(UVector **)(this_00 + 0x10));
              if (cVar5 == '\0') {
                pRVar15 = *(RangeDescriptor **)(pRVar15 + 0x18);
                goto LAB_0010082a;
              }
              iVar6 = *(int *)(pRVar15 + 8);
              RVar1 = pRVar15[0xc];
              *(int *)(this_00 + 8) = iVar6;
              this_00[0xc] = RVar1;
            }
            if (iVar6 == 0) {
              this_00[0xd] = (RangeDescriptor)0x1;
              cVar5 = RangeDescriptor::isDictionaryRange(this_00);
              if (cVar5 == '\0') {
                lVar16 = *(long *)(this_00 + 0x10);
                iVar6 = *(int *)(lVar16 + 8);
                uVar14 = *(int *)(in_RDI + 0x2c) + 3;
                *(int *)(in_RDI + 0x2c) = *(int *)(in_RDI + 0x2c) + 1;
                *(uint *)(this_00 + 8) = uVar14;
                iVar9 = 0;
                if (0 < iVar6) {
                  do {
                    iVar9 = iVar9 + 1;
                    pRVar12 = (RBBINode *)icu_76_godot::UVector::elementAt((int)lVar16);
                    addValToSet(in_RDI,pRVar12,uVar14);
                  } while (iVar9 < *(int *)(lVar16 + 8));
                }
              }
              else {
                iVar13 = iVar13 + 1;
                this_00[0xc] = (RangeDescriptor)0x1;
                *(int *)(this_00 + 8) = iVar13;
              }
            }
            this_00 = *(RangeDescriptor **)(this_00 + 0x18);
            pRVar15 = *(RangeDescriptor **)(in_RDI + 0x10);
          } while (this_00 != (RangeDescriptor *)0x0);
          iVar6 = *(int *)(in_RDI + 0x2c);
          *(int *)(in_RDI + 0x30) = iVar6 + 3;
          if (pRVar15 != (RangeDescriptor *)0x0) {
            do {
              if (pRVar15[0xc] != (RangeDescriptor)0x0) {
                uVar14 = *(int *)(in_RDI + 0x30) + -1 + *(int *)(pRVar15 + 8);
                *(uint *)(pRVar15 + 8) = uVar14;
                if ((pRVar15[0xd] != (RangeDescriptor)0x0) &&
                   (lVar16 = *(long *)(pRVar15 + 0x10), 0 < *(int *)(lVar16 + 8))) {
                  iVar6 = 0;
                  do {
                    iVar6 = iVar6 + 1;
                    pRVar12 = (RBBINode *)icu_76_godot::UVector::elementAt((int)lVar16);
                    addValToSet(in_RDI,pRVar12,uVar14);
                  } while (iVar6 < *(int *)(lVar16 + 8));
                }
              }
              pRVar15 = *(RangeDescriptor **)(pRVar15 + 0x18);
            } while (pRVar15 != (RangeDescriptor *)0x0);
            iVar6 = *(int *)(in_RDI + 0x2c);
          }
        }
        lVar16 = 0;
        *(int *)(in_RDI + 0x2c) = iVar13 + iVar6;
        local_c8 = icu_76_godot::UnicodeSet::contains;
        local_c0 = 2;
        do {
          lVar16 = lVar16 + 1;
        } while (*(short *)(&_LC2 + lVar16 * 2) != 0);
        icu_76_godot::UnicodeString::doAppend((UnicodeString *)&local_c8);
        lVar16 = 0;
        local_88 = icu_76_godot::UnicodeSet::contains;
        local_80 = 2;
        do {
          lVar16 = lVar16 + 1;
        } while (*(short *)(&_LC3 + lVar16 * 2) != 0);
        icu_76_godot::UnicodeString::doAppend((UnicodeString *)&local_88);
        while (pRVar12 = (RBBINode *)
                         icu_76_godot::UVector::elementAt
                                   ((int)*(undefined8 *)(*(long *)in_RDI + 0xa8)),
              pRVar12 != (RBBINode *)0x0) {
          pUVar4 = *(UnicodeString **)(pRVar12 + 0x20);
          cVar5 = icu_76_godot::UnicodeSet::contains(pUVar4);
          if (cVar5 != '\0') {
            addValToSet(in_RDI,pRVar12,1);
          }
          cVar5 = icu_76_godot::UnicodeSet::contains(pUVar4);
          if (cVar5 != '\0') {
            addValToSet(in_RDI,pRVar12,2);
            in_RDI[0x34] = (RBBISetBuilder)0x1;
          }
        }
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_c8);
      }
    }
    else {
      *(undefined8 **)(in_RDI + 0x10) = puVar10;
      *puVar10 = _LC1;
    }
  }
LAB_0010066b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


