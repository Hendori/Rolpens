
void RBBISetTable_deleter(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  uprv_free_76_godot(param_1);
  return;
}



/* icu_76_godot::RBBIRuleScanner::error(UErrorCode) */

void __thiscall icu_76_godot::RBBIRuleScanner::error(RBBIRuleScanner *this,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(*(long *)(this + 8) + 0x10);
  if (*piVar1 < 1) {
    puVar2 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
    *piVar1 = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(this + 0x1c);
      *(undefined2 *)(puVar2 + 5) = 0;
      *puVar2 = uVar3;
      *(undefined2 *)(puVar2 + 1) = 0;
      return;
    }
  }
  return;
}



/* icu_76_godot::RBBIRuleScanner::fixOpStack(icu_76_godot::RBBINode::OpPrecedence) */

void __thiscall icu_76_godot::RBBIRuleScanner::fixOpStack(RBBIRuleScanner *this,int *param_2)

{
  int iVar1;
  RBBINode *this_00;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  lVar7 = (long)(*(int *)(this + 0x468) + -1);
  this_00 = *(RBBINode **)(this + lVar7 * 8 + 0x148);
  iVar1 = *(int *)(this_00 + 0x28);
  while( true ) {
    if (iVar1 == 0) {
      piVar3 = *(int **)(*(long *)(this + 8) + 0x10);
      if (*piVar3 < 1) {
        puVar4 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
        *piVar3 = 0x10200;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *(undefined8 *)(this + 0x1c);
          *(undefined2 *)(puVar4 + 1) = 0;
          *puVar4 = uVar5;
          *(undefined2 *)(puVar4 + 5) = 0;
          return;
        }
      }
      return;
    }
    iVar6 = (int)lVar7;
    iVar8 = (int)param_2;
    if ((iVar1 < 3) || (iVar1 < iVar8)) break;
    lVar2 = *(long *)(this + lVar7 * 8 + 0x150);
    *(long *)(this_00 + 0x18) = lVar2;
    *(RBBINode **)(lVar2 + 8) = this_00;
    this_00 = *(RBBINode **)(this + lVar7 * 8 + 0x140);
    *(int *)(this + 0x468) = iVar6;
    lVar7 = lVar7 + -1;
    iVar1 = *(int *)(this_00 + 0x28);
  }
  if (2 < iVar8) {
    return;
  }
  if (iVar8 != iVar1) {
    param_2 = *(int **)(*(long *)(this + 8) + 0x10);
    if (*param_2 < 1) {
      puVar4 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
      *param_2 = 0x10207;
      if (puVar4 != (undefined8 *)0x0) {
        uVar5 = *(undefined8 *)(this + 0x1c);
        *(undefined2 *)(puVar4 + 5) = 0;
        *puVar4 = uVar5;
        param_2 = (int *)0x0;
        *(undefined2 *)(puVar4 + 1) = 0;
      }
    }
  }
  *(undefined8 *)(this + (long)iVar6 * 8 + 0x148) =
       *(undefined8 *)(this + (long)(iVar6 + 1) * 8 + 0x148);
  *(int *)(this + 0x468) = iVar6;
  icu_76_godot::RBBINode::~RBBINode(this_00);
  icu_76_godot::UMemory::operator_delete((UMemory *)this_00,param_2);
  return;
}



/* icu_76_godot::RBBIRuleScanner::stripRules(icu_76_godot::UnicodeString const&) */

RBBIRuleScanner * __thiscall
icu_76_godot::RBBIRuleScanner::stripRules(RBBIRuleScanner *this,UnicodeString *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(code **)this = u_hasBinaryProperty_76_godot;
  *(undefined2 *)(this + 8) = 2;
  if (*(short *)(param_1 + 8) < 0) {
    iVar4 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar4 = (int)(*(short *)(param_1 + 8) >> 5);
  }
  if (0 < iVar4) {
    iVar3 = 0;
    do {
      uVar2 = icu_76_godot::UnicodeString::char32At((int)param_1);
      cVar1 = u_hasBinaryProperty_76_godot(uVar2,0x2b);
      if (cVar1 == '\0') {
        icu_76_godot::UnicodeString::append((int)this);
      }
      iVar3 = icu_76_godot::UnicodeString::moveIndex32((int)param_1,iVar3);
    } while (iVar3 < iVar4);
  }
  return this;
}



/* icu_76_godot::RBBIRuleScanner::nextCharLL() */

uint __thiscall icu_76_godot::RBBIRuleScanner::nextCharLL(RBBIRuleScanner *this)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  lVar1 = *(long *)(*(long *)(this + 8) + 0x20);
  if (*(short *)(lVar1 + 8) < 0) {
    iVar6 = *(int *)(lVar1 + 0xc);
  }
  else {
    iVar6 = (int)(*(short *)(lVar1 + 8) >> 5);
  }
  if (iVar6 <= *(int *)(this + 0x14)) {
    return 0xffffffff;
  }
  uVar7 = icu_76_godot::UnicodeString::char32At((int)lVar1);
  if ((uVar7 & 0xfffff800) == 0xd800) {
    piVar2 = *(int **)(*(long *)(this + 8) + 0x10);
    if (0 < *piVar2) {
      return 0xffffffff;
    }
    puVar4 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
    *piVar2 = 0xc;
    if (puVar4 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    uVar5 = *(undefined8 *)(this + 0x1c);
    *(undefined2 *)(puVar4 + 1) = 0;
    *puVar4 = uVar5;
    *(undefined2 *)(puVar4 + 5) = 0;
    return 0xffffffff;
  }
  uVar8 = icu_76_godot::UnicodeString::moveIndex32
                    ((int)*(undefined8 *)(*(long *)(this + 8) + 0x20),*(int *)(this + 0x14));
  *(undefined4 *)(this + 0x14) = uVar8;
  if ((uVar7 != 0xd && uVar7 != 0x85) && (uVar7 != 0x2028)) {
    if (uVar7 != 10) {
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
      goto LAB_001002b2;
    }
    if (*(int *)(this + 0x24) == 0xd) goto LAB_001002b2;
  }
  iVar6 = *(int *)(this + 0x1c);
  *(undefined4 *)(this + 0x20) = 0;
  *(int *)(this + 0x1c) = iVar6 + 1;
  if (this[0x18] != (RBBIRuleScanner)0x0) {
    piVar2 = *(int **)(*(long *)(this + 8) + 0x10);
    if (*piVar2 < 1) {
      piVar3 = *(int **)(*(long *)(this + 8) + 0x18);
      *piVar2 = 0x10208;
      if (piVar3 != (int *)0x0) {
        *piVar3 = iVar6 + 1;
        piVar3[1] = 0;
        *(undefined2 *)(piVar3 + 2) = 0;
        *(undefined2 *)(piVar3 + 10) = 0;
      }
    }
    this[0x18] = (RBBIRuleScanner)0x0;
  }
LAB_001002b2:
  *(uint *)(this + 0x24) = uVar7;
  return uVar7;
}



/* icu_76_godot::RBBIRuleScanner::nextChar(icu_76_godot::RBBIRuleScanner::RBBIRuleChar&) */

void __thiscall icu_76_godot::RBBIRuleScanner::nextChar(RBBIRuleScanner *this,RBBIRuleChar *param_1)

{
  RBBIRuleScanner RVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x14);
  iVar5 = nextCharLL(this);
  param_1[4] = (RBBIRuleChar)0x0;
  *(int *)param_1 = iVar5;
  if (iVar5 == 0x27) {
    iVar5 = icu_76_godot::UnicodeString::char32At((int)*(undefined8 *)(*(long *)(this + 8) + 0x20));
    if (iVar5 != 0x27) {
      RVar1 = this[0x18];
      this[0x18] = (RBBIRuleScanner)(RVar1 == (RBBIRuleScanner)0x0);
      param_1[4] = (RBBIRuleChar)0x0;
      *(uint *)param_1 = (RVar1 != (RBBIRuleScanner)0x0) + 0x28;
      return;
    }
    iVar5 = nextCharLL(this);
    param_1[4] = (RBBIRuleChar)0x1;
    *(int *)param_1 = iVar5;
  }
  if (iVar5 != -1) {
    if (this[0x18] != (RBBIRuleScanner)0x0) {
      param_1[4] = (RBBIRuleChar)0x1;
      return;
    }
    if (iVar5 == 0x23) {
      iVar5 = *(int *)(this + 0x10);
      do {
        while( true ) {
          iVar7 = nextCharLL(this);
          *(int *)param_1 = iVar7;
          if (iVar7 < 0xe) break;
          if ((iVar7 == 0x85) || (iVar7 == 0x2028)) goto LAB_0010048e;
        }
      } while ((iVar7 < -1) || ((0x4801UL >> ((ulong)(iVar7 + 1) & 0x3f) & 1) == 0));
LAB_0010048e:
      if (*(int *)(this + 0x14) + -1 <= iVar5) {
        return;
      }
      do {
        iVar7 = iVar5 + 1;
        icu_76_godot::UnicodeString::setCharAt((int)*(undefined8 *)(this + 8) + 0x28,(wchar16)iVar5)
        ;
        iVar5 = iVar7;
      } while (iVar7 < *(int *)(this + 0x14) + -1);
      iVar5 = *(int *)param_1;
    }
    if (iVar5 == 0x5c) {
      param_1[4] = (RBBIRuleChar)0x1;
      iVar5 = *(int *)(this + 0x14);
      uVar6 = icu_76_godot::UnicodeString::unescapeAt(*(int **)(*(long *)(this + 8) + 0x20));
      *(undefined4 *)param_1 = uVar6;
      iVar7 = *(int *)(this + 0x14);
      if (iVar7 == iVar5) {
        piVar2 = *(int **)(*(long *)(this + 8) + 0x10);
        if (*piVar2 < 1) {
          puVar3 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
          *piVar2 = 0x10201;
          if (puVar3 != (undefined8 *)0x0) {
            uVar4 = *(undefined8 *)(this + 0x1c);
            *(undefined2 *)(puVar3 + 5) = 0;
            *puVar3 = uVar4;
            *(undefined2 *)(puVar3 + 1) = 0;
          }
        }
      }
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + (iVar7 - iVar5);
    }
  }
  return;
}



/* icu_76_godot::RBBIRuleScanner::pushNewNode(icu_76_godot::RBBINode::NodeType) */

RBBINode * __thiscall
icu_76_godot::RBBIRuleScanner::pushNewNode(RBBIRuleScanner *this,ulong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  RBBINode *pRVar4;
  
  piVar1 = *(int **)(*(long *)(this + 8) + 0x10);
  if (*piVar1 < 1) {
    if (*(int *)(this + 0x468) < 99) {
      *(int *)(this + 0x468) = *(int *)(this + 0x468) + 1;
      pRVar4 = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,param_2);
      if (pRVar4 != (RBBINode *)0x0) {
        icu_76_godot::RBBINode::RBBINode(pRVar4,param_2 & 0xffffffff);
        *(RBBINode **)(this + (long)*(int *)(this + 0x468) * 8 + 0x148) = pRVar4;
        return pRVar4;
      }
      *(undefined8 *)(this + (long)*(int *)(this + 0x468) * 8 + 0x148) = 0;
      **(undefined4 **)(*(long *)(this + 8) + 0x10) = 7;
      return (RBBINode *)0x0;
    }
    puVar2 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
    *piVar1 = 0x10203;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(this + 0x1c);
      *(undefined2 *)(puVar2 + 1) = 0;
      *puVar2 = uVar3;
      *(undefined2 *)(puVar2 + 5) = 0;
    }
  }
  return (RBBINode *)0x0;
}



/* icu_76_godot::RBBIRuleScanner::numRules() */

undefined4 __thiscall icu_76_godot::RBBIRuleScanner::numRules(RBBIRuleScanner *this)

{
  return *(undefined4 *)(this + 0xc50);
}



/* icu_76_godot::RBBIRuleScanner::~RBBIRuleScanner() */

void __thiscall icu_76_godot::RBBIRuleScanner::~RBBIRuleScanner(RBBIRuleScanner *this)

{
  RBBINode *this_00;
  int iVar1;
  UnicodeSet *this_01;
  UnicodeSet *pUVar2;
  void *in_RSI;
  
  *(undefined ***)this = &PTR__RBBIRuleScanner_001028d0;
  if (*(long **)(this + 0x470) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x470) + 8))();
  }
  if (*(long *)(this + 0x478) != 0) {
    uhash_close_76_godot();
    *(undefined8 *)(this + 0x478) = 0;
  }
  iVar1 = *(int *)(this + 0x468);
  while (0 < iVar1) {
    this_00 = *(RBBINode **)(this + (long)iVar1 * 8 + 0x148);
    if (this_00 != (RBBINode *)0x0) {
      icu_76_godot::RBBINode::~RBBINode(this_00);
      icu_76_godot::UMemory::operator_delete((UMemory *)this_00,in_RSI);
    }
    iVar1 = *(int *)(this + 0x468) + -1;
    *(int *)(this + 0x468) = iVar1;
  }
  this_01 = (UnicodeSet *)(this + 0xb88);
  do {
    pUVar2 = this_01 + -200;
    icu_76_godot::UnicodeSet::~UnicodeSet(this_01);
    this_01 = pUVar2;
  } while (pUVar2 != (UnicodeSet *)(this + 0x3b8));
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x30));
  return;
}



/* icu_76_godot::RBBIRuleScanner::~RBBIRuleScanner() */

void __thiscall icu_76_godot::RBBIRuleScanner::~RBBIRuleScanner(RBBIRuleScanner *this)

{
  void *in_RSI;
  
  ~RBBIRuleScanner(this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::RBBIRuleScanner::RBBIRuleScanner(icu_76_godot::RBBIRuleBuilder*) */

void __thiscall
icu_76_godot::RBBIRuleScanner::RBBIRuleScanner(RBBIRuleScanner *this,RBBIRuleBuilder *param_1)

{
  int *piVar1;
  UErrorCode *pUVar2;
  int iVar3;
  RBBISymbolTable *this_00;
  undefined8 uVar4;
  long lVar5;
  UnicodeSet *pUVar6;
  RBBIRuleScanner *pRVar7;
  long in_FS_OFFSET;
  code *local_148;
  undefined2 local_140;
  UnicodeSet local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (RBBIRuleScanner)0x0;
  *(code **)(this + 0x30) = u_hasBinaryProperty_76_godot;
  *(undefined2 *)(this + 0x38) = 2;
  *(undefined ***)this = &PTR__RBBIRuleScanner_001028d0;
  pUVar6 = (UnicodeSet *)(this + 0x480);
  do {
    pRVar7 = (RBBIRuleScanner *)(pUVar6 + 200);
    icu_76_godot::UnicodeSet::UnicodeSet(pUVar6);
    pUVar6 = (UnicodeSet *)pRVar7;
  } while (this + 0xc50 != pRVar7);
  piVar1 = *(int **)(param_1 + 0x10);
  this[0x18] = (RBBIRuleScanner)0x0;
  *(undefined2 *)(this + 0x46c) = 0;
  this[0x46e] = (RBBIRuleScanner)0x0;
  *(undefined1 (*) [16])(this + 0x470) = (undefined1  [16])0x0;
  iVar3 = *piVar1;
  *(RBBIRuleBuilder **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined2 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0xc50) = 0;
  if (iVar3 < 1) {
    local_148 = u_hasBinaryProperty_76_godot;
    lVar5 = 0;
    local_140 = 2;
    do {
      lVar5 = lVar5 + 1;
    } while ((&gRuleSet_rule_char_pattern)[lVar5] != 0);
    icu_76_godot::UnicodeString::doAppend((UnicodeString *)&local_148);
    icu_76_godot::UnicodeSet::UnicodeSet(local_108,(UnicodeString *)&local_148,(UErrorCode *)piVar1)
    ;
    icu_76_godot::UnicodeSet::operator=((UnicodeSet *)(this + 0x6d8),local_108);
    icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_148);
    iVar3 = icu_76_godot::UnicodeSet::add((int)this + 0x7a0,9);
    iVar3 = icu_76_godot::UnicodeSet::add(iVar3);
    iVar3 = icu_76_godot::UnicodeSet::add(iVar3);
    iVar3 = icu_76_godot::UnicodeSet::add(iVar3,0x200e);
    icu_76_godot::UnicodeSet::add(iVar3,0x2028);
    pUVar2 = *(UErrorCode **)(param_1 + 0x10);
    lVar5 = 0;
    local_148 = u_hasBinaryProperty_76_godot;
    local_140 = 2;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(gRuleSet_name_char_pattern + lVar5 * 2) != 0);
    icu_76_godot::UnicodeString::doAppend((UnicodeString *)&local_148);
    icu_76_godot::UnicodeSet::UnicodeSet(local_108,(UnicodeString *)&local_148,pUVar2);
    icu_76_godot::UnicodeSet::operator=((UnicodeSet *)(this + 0x548),local_108);
    icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_148);
    pUVar2 = *(UErrorCode **)(param_1 + 0x10);
    local_148 = u_hasBinaryProperty_76_godot;
    local_140 = 2;
    lVar5 = 0;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(gRuleSet_name_start_char_pattern + lVar5 * 2) != 0);
    icu_76_godot::UnicodeString::doAppend((UnicodeString *)&local_148);
    icu_76_godot::UnicodeSet::UnicodeSet(local_108,(UnicodeString *)&local_148,pUVar2);
    icu_76_godot::UnicodeSet::operator=((UnicodeSet *)(this + 0x610),local_108);
    icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_148);
    pUVar2 = *(UErrorCode **)(param_1 + 0x10);
    lVar5 = 0;
    local_148 = u_hasBinaryProperty_76_godot;
    local_140 = 2;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(gRuleSet_digit_char_pattern + lVar5 * 2) != 0);
    icu_76_godot::UnicodeString::doAppend((UnicodeString *)&local_148);
    icu_76_godot::UnicodeSet::UnicodeSet(local_108,(UnicodeString *)&local_148,pUVar2);
    pUVar6 = local_108;
    icu_76_godot::UnicodeSet::operator=((UnicodeSet *)(this + 0x480),local_108);
    icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_148);
    iVar3 = **(int **)(param_1 + 0x10);
    if (iVar3 == 1) {
      **(int **)(param_1 + 0x10) = 0x1020a;
    }
    else if (iVar3 < 1) {
      this_00 = (RBBISymbolTable *)
                icu_76_godot::UMemory::operator_new((UMemory *)0x70,(ulong)pUVar6);
      if (this_00 == (RBBISymbolTable *)0x0) {
        *(undefined8 *)(this + 0x470) = 0;
        **(undefined4 **)(param_1 + 0x10) = 7;
      }
      else {
        icu_76_godot::RBBISymbolTable::RBBISymbolTable
                  (this_00,this,*(UnicodeString **)(param_1 + 0x20),*(UErrorCode **)(param_1 + 0x10)
                  );
        *(RBBISymbolTable **)(this + 0x470) = this_00;
        uVar4 = uhash_open_76_godot(&uhash_hashUnicodeString_76_godot,
                                    &uhash_compareUnicodeString_76_godot,0,
                                    *(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(this + 0x478) = uVar4;
        if (**(int **)(param_1 + 0x10) < 1) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uhash_setValueDeleter_76_godot(uVar4,0x100000);
            return;
          }
          goto LAB_00100ad3;
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100ad3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RBBIRuleScanner::findSetFor(icu_76_godot::UnicodeString const&,
   icu_76_godot::RBBINode*, icu_76_godot::UnicodeSet*) [clone .part.0] */

void __thiscall
icu_76_godot::RBBIRuleScanner::findSetFor
          (RBBIRuleScanner *this,UnicodeString *param_1,RBBINode *param_2,UnicodeSet *param_3)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  RBBINode *pRVar5;
  undefined8 *puVar6;
  UnicodeString *pUVar7;
  uint uVar8;
  RBBINode *pRVar9;
  
  pUVar7 = param_1;
  if (param_3 == (UnicodeSet *)0x0) {
    if (*(short *)(param_1 + 8) < 0) {
      uVar8 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar8 = (uint)(*(short *)(param_1 + 8) >> 5);
    }
    pUVar7 = (UnicodeString *)0x0;
    cVar4 = icu_76_godot::UnicodeString::doCompare
                      ((int)param_1,0,(wchar16 *)(ulong)uVar8,0x102440,0);
    if (cVar4 == '\0') {
      param_3 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)pUVar7);
      if (param_3 != (UnicodeSet *)0x0) {
        pUVar7 = (UnicodeString *)0x0;
        icu_76_godot::UnicodeSet::UnicodeSet(param_3,0,0x10ffff);
      }
    }
    else {
      pUVar7 = (UnicodeString *)0x0;
      uVar8 = icu_76_godot::UnicodeString::char32At((int)param_1);
      param_3 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)pUVar7);
      if (param_3 != (UnicodeSet *)0x0) {
        pUVar7 = (UnicodeString *)(ulong)uVar8;
        icu_76_godot::UnicodeSet::UnicodeSet(param_3,uVar8,uVar8);
      }
    }
  }
  pRVar5 = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,(ulong)pUVar7);
  if (pRVar5 == (RBBINode *)0x0) {
    error(this,7);
    if (param_3 != (UnicodeSet *)0x0) {
      icu_76_godot::UnicodeSet::~UnicodeSet(param_3);
      return;
    }
  }
  else {
    icu_76_godot::RBBINode::RBBINode(pRVar5,1);
    *(RBBINode **)(pRVar5 + 8) = param_2;
    *(UnicodeSet **)(pRVar5 + 0x20) = param_3;
    *(RBBINode **)(param_2 + 0x10) = pRVar5;
    icu_76_godot::UnicodeString::operator=((UnicodeString *)(pRVar5 + 0x30),param_1);
    pRVar9 = pRVar5;
    icu_76_godot::UVector::addElement(*(void **)(*(long *)(this + 8) + 0xa8),pRVar5);
    puVar6 = (undefined8 *)uprv_malloc_76_godot(0x10);
    pUVar7 = (UnicodeString *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pRVar9);
    if (pUVar7 != (UnicodeString *)0x0) {
      icu_76_godot::UnicodeString::UnicodeString(pUVar7,param_1);
      if ((param_3 != (UnicodeSet *)0x0) && (puVar6 != (undefined8 *)0x0)) {
        lVar1 = *(long *)(this + 8);
        *puVar6 = pUVar7;
        puVar6[1] = pRVar5;
        uhash_put_76_godot(*(undefined8 *)(this + 0x478),pUVar7,puVar6,*(undefined8 *)(lVar1 + 0x10)
                          );
        return;
      }
      icu_76_godot::UnicodeString::~UnicodeString(pUVar7);
    }
    uprv_free_76_godot(puVar6);
    if (param_3 != (UnicodeSet *)0x0) {
      icu_76_godot::UnicodeSet::~UnicodeSet(param_3);
    }
    piVar2 = *(int **)(*(long *)(this + 8) + 0x10);
    if (*piVar2 < 1) {
      puVar6 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
      *piVar2 = 7;
      if (puVar6 != (undefined8 *)0x0) {
        uVar3 = *(undefined8 *)(this + 0x1c);
        *(undefined2 *)(puVar6 + 5) = 0;
        *puVar6 = uVar3;
        *(undefined2 *)(puVar6 + 1) = 0;
      }
    }
  }
  return;
}



/* icu_76_godot::RBBIRuleScanner::findSetFor(icu_76_godot::UnicodeString const&,
   icu_76_godot::RBBINode*, icu_76_godot::UnicodeSet*) */

void __thiscall
icu_76_godot::RBBIRuleScanner::findSetFor
          (RBBIRuleScanner *this,UnicodeString *param_1,RBBINode *param_2,UnicodeSet *param_3)

{
  long lVar1;
  
  lVar1 = uhash_get_76_godot(*(undefined8 *)(this + 0x478));
  if (lVar1 != 0) {
    if (param_3 != (UnicodeSet *)0x0) {
      icu_76_godot::UnicodeSet::~UnicodeSet(param_3);
    }
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar1 + 8);
    return;
  }
  findSetFor(this,param_1,param_2,param_3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101040) */
/* WARNING: Removing unreachable block (ram,0x00101050) */
/* WARNING: Removing unreachable block (ram,0x00100f58) */
/* WARNING: Removing unreachable block (ram,0x00101058) */
/* WARNING: Removing unreachable block (ram,0x00101067) */
/* WARNING: Removing unreachable block (ram,0x00100f85) */
/* WARNING: Removing unreachable block (ram,0x00100fc7) */
/* icu_76_godot::RBBIRuleScanner::scanSet() */

void icu_76_godot::RBBIRuleScanner::scanSet(void)

{
  UnicodeString *pUVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  char cVar10;
  UnicodeSet *this;
  RBBINode *pRVar11;
  long lVar12;
  ulong in_RSI;
  RBBIRuleScanner *in_RDI;
  long in_FS_OFFSET;
  code *local_118;
  undefined8 local_110;
  UnicodeSet local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = icu_76_godot::UnicodeSet::applyPatternIgnoreSpace;
  local_110 = _LC2;
  if (**(int **)(*(long *)(in_RDI + 8) + 0x10) < 1) {
    uVar2 = *(undefined4 *)(in_RDI + 0x10);
    local_110 = CONCAT44((int)((ulong)_LC2 >> 0x20),uVar2);
    this = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,in_RSI);
    if (this == (UnicodeSet *)0x0) {
      lVar12 = *(long *)(in_RDI + 8);
      piVar6 = *(int **)(lVar12 + 0x10);
      if (*piVar6 < 1) {
        *piVar6 = 7;
        puVar7 = *(undefined8 **)(lVar12 + 0x18);
        if (puVar7 != (undefined8 *)0x0) {
          uVar8 = *(undefined8 *)(in_RDI + 0x1c);
          *(undefined2 *)(puVar7 + 1) = 0;
          *puVar7 = uVar8;
          *(undefined2 *)(puVar7 + 5) = 0;
        }
      }
    }
    else {
      icu_76_godot::UnicodeSet::UnicodeSet(this);
      icu_76_godot::UnicodeSet::applyPatternIgnoreSpace
                ((UnicodeString *)this,*(ParsePosition **)(*(long *)(in_RDI + 8) + 0x20),
                 (SymbolTable *)&local_118,*(UErrorCode **)(in_RDI + 0x470));
      icu_76_godot::UnicodeSet::UnicodeSet(local_108,this);
      icu_76_godot::UnicodeSet::removeAllStrings();
      cVar10 = icu_76_godot::UnicodeSet::isEmpty();
      if (cVar10 == '\0') {
        iVar9 = (int)local_110;
        iVar3 = **(int **)(*(long *)(in_RDI + 8) + 0x10);
        while (iVar3 < 1) {
          if (iVar9 <= *(int *)(in_RDI + 0x14)) {
            pRVar11 = (RBBINode *)pushNewNode();
            if (**(int **)(*(long *)(in_RDI + 8) + 0x10) < 1) {
              uVar4 = *(undefined4 *)(in_RDI + 0x14);
              plVar5 = *(long **)(*(long *)(in_RDI + 8) + 0x20);
              pUVar1 = (UnicodeString *)(pRVar11 + 0x30);
              lVar12 = *plVar5;
              *(ulong *)(pRVar11 + 0x70) = CONCAT44(uVar4,uVar2);
              (**(code **)(lVar12 + 0x18))(plVar5,uVar2,uVar4,pUVar1);
              lVar12 = uhash_get_76_godot(*(undefined8 *)(in_RDI + 0x478),pUVar1);
              if (lVar12 == 0) {
                findSetFor(in_RDI,pUVar1,pRVar11,this);
                icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
              }
              else {
                icu_76_godot::UnicodeSet::~UnicodeSet(this);
                *(undefined8 *)(pRVar11 + 0x10) = *(undefined8 *)(lVar12 + 8);
                icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
              }
              goto LAB_00100dc3;
            }
            break;
          }
          nextCharLL(in_RDI);
          iVar3 = **(int **)(*(long *)(in_RDI + 8) + 0x10);
        }
      }
      else {
        piVar6 = *(int **)(*(long *)(in_RDI + 8) + 0x10);
        if (*piVar6 < 1) {
          puVar7 = *(undefined8 **)(*(long *)(in_RDI + 8) + 0x18);
          *piVar6 = 0x1020b;
          if (puVar7 != (undefined8 *)0x0) {
            uVar8 = *(undefined8 *)(in_RDI + 0x1c);
            *(undefined2 *)(puVar7 + 1) = 0;
            *puVar7 = uVar8;
            *(undefined2 *)(puVar7 + 5) = 0;
          }
        }
      }
      icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
      icu_76_godot::UnicodeSet::~UnicodeSet(this);
    }
  }
LAB_00100dc3:
  icu_76_godot::ParsePosition::~ParsePosition((ParsePosition *)&local_118);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RBBIRuleScanner::doParseActions(int) */

bool __thiscall icu_76_godot::RBBIRuleScanner::doParseActions(RBBIRuleScanner *this,int param_1)

{
  int *piVar1;
  RBBINode *this_00;
  RBBINode *this_01;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  RBBINode *pRVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  void *pvVar16;
  long *plVar17;
  long in_FS_OFFSET;
  undefined4 uVar18;
  wchar16 *local_c0;
  UnicodeString local_b8 [8];
  ushort local_b0;
  int local_ac;
  code *local_78;
  ushort local_70;
  undefined1 local_6e [2];
  int local_6c;
  int local_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case 0:
    piVar1 = *(int **)(*(long *)(this + 8) + 0x10);
    iVar13 = *piVar1;
    if (*(long *)(*(long *)(this + (long)*(int *)(this + 0x468) * 8 + 0x148) + 0x10) != 0) {
      bVar3 = iVar13 < 1;
      goto LAB_00101118;
    }
    if (iVar13 < 1) {
      puVar6 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
      *piVar1 = 0x10209;
      goto joined_r0x001013b1;
    }
    break;
  case 1:
    pRVar8 = (RBBINode *)pushNewNode(this,0);
    if (**(int **)(*(long *)(this + 8) + 0x10) < 1) {
      local_c0 = L"any";
      icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,1,&local_c0);
      lVar9 = uhash_get_76_godot(*(undefined8 *)(this + 0x478),(UnicodeString *)&local_78);
      if (lVar9 == 0) {
        findSetFor(this,(UnicodeString *)&local_78,pRVar8,(UnicodeSet *)0x0);
      }
      else {
        *(undefined8 *)(pRVar8 + 0x10) = *(undefined8 *)(lVar9 + 8);
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
      uVar15 = *(ulong *)(this + 0x10);
      uVar18 = (undefined4)(uVar15 >> 0x20);
      plVar17 = *(long **)(*(long *)(this + 8) + 0x20);
      *(ulong *)(pRVar8 + 0x70) = uVar15;
LAB_00101339:
      uVar15 = uVar15 & 0xffffffff;
      goto LAB_0010133d;
    }
    break;
  case 2:
    fixOpStack(this,1);
    if (**(int **)(*(long *)(this + 8) + 0x10) < 1) {
      iVar13 = *(int *)(this + 0x468);
      lVar9 = **(long **)(*(long *)(this + 8) + 0x20);
      pRVar8 = *(RBBINode **)(this + (long)iVar13 * 8 + 0x138);
      this_00 = *(RBBINode **)(this + (long)iVar13 * 8 + 0x140);
      this_01 = *(RBBINode **)(this + (long)iVar13 * 8 + 0x148);
      *(ulong *)(this_01 + 0x70) =
           CONCAT44(*(undefined4 *)(this + 0x10),*(undefined4 *)(pRVar8 + 0x70));
      (**(code **)(lVar9 + 0x18))();
      *(RBBINode **)(this_00 + 0x10) = this_01;
      plVar17 = *(long **)(this + 0x470);
      *(RBBINode **)(this_01 + 8) = this_00;
      (**(code **)(*plVar17 + 0x30))(plVar17,this_00 + 0x30,this_00);
      uVar5 = **(uint **)(*(long *)(this + 8) + 0x10);
      pvVar16 = (void *)(ulong)uVar5;
      if (0 < (int)uVar5) {
        puVar6 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
        if (puVar6 != (undefined8 *)0x0) {
          uVar14 = *(undefined8 *)(this + 0x1c);
          *(undefined2 *)(puVar6 + 5) = 0;
          *puVar6 = uVar14;
          *(undefined2 *)(puVar6 + 1) = 0;
        }
        icu_76_godot::RBBINode::~RBBINode(this_01);
        icu_76_godot::UMemory::operator_delete((UMemory *)this_01,pvVar16);
        icu_76_godot::RBBINode::~RBBINode(this_00);
        icu_76_godot::UMemory::operator_delete((UMemory *)this_00,pvVar16);
      }
      icu_76_godot::RBBINode::~RBBINode(pRVar8);
      icu_76_godot::UMemory::operator_delete((UMemory *)pRVar8,pvVar16);
      *(int *)(this + 0x468) = *(int *)(this + 0x468) + -3;
      bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
      goto LAB_00101118;
    }
    break;
  case 3:
    fixOpStack(this,1);
    lVar9 = *(long *)(this + 8);
    if (**(int **)(lVar9 + 0x10) < 1) {
      lVar7 = *(long *)(this + (long)*(int *)(this + 0x468) * 8 + 0x148);
      lVar11 = lVar7;
      if (this[0x46d] != (RBBIRuleScanner)0x0) {
        lVar10 = pushNewNode(this,6);
        lVar11 = pushNewNode(this,8);
        lVar9 = *(long *)(this + 8);
        if (0 < **(int **)(lVar9 + 0x10)) break;
        iVar13 = *(int *)(this + 0x468);
        *(int *)(this + 0x468) = iVar13 + -2;
        *(long *)(lVar11 + 0x10) = lVar7;
        *(long *)(lVar11 + 0x18) = lVar10;
        *(long *)(this + (long)(iVar13 + -2) * 8 + 0x148) = lVar11;
        uVar18 = *(undefined4 *)(this + 0xc50);
        *(undefined1 *)(lVar10 + 0x80) = 1;
        *(undefined4 *)(lVar10 + 0x7c) = uVar18;
      }
      *(undefined1 *)(lVar11 + 0x81) = 1;
      if ((*(char *)(lVar9 + 0x98) != '\0') && (this[0x46e] == (RBBIRuleScanner)0x0)) {
        *(undefined1 *)(lVar11 + 0x82) = 1;
      }
      plVar17 = (long *)(lVar9 + 0x88);
      if (this[0x46c] == (RBBIRuleScanner)0x0) {
        plVar17 = *(long **)(lVar9 + 0x90);
      }
      lVar7 = *plVar17;
      if (lVar7 == 0) {
        piVar1 = *(int **)(lVar9 + 0x10);
        *plVar17 = lVar11;
        iVar13 = *piVar1;
      }
      else {
        lVar9 = pushNewNode(this,9);
        iVar13 = **(int **)(*(long *)(this + 8) + 0x10);
        if (0 < iVar13) break;
        *(long *)(lVar9 + 0x10) = lVar7;
        *(long *)(lVar7 + 8) = lVar9;
        *(long *)(lVar9 + 0x18) = lVar11;
        *(long *)(lVar11 + 8) = lVar9;
        *plVar17 = lVar9;
      }
      this[0x46e] = (RBBIRuleScanner)0x0;
      *(undefined2 *)(this + 0x46c) = 0;
      bVar3 = iVar13 < 1;
      *(undefined4 *)(this + 0x468) = 0;
      goto LAB_00101118;
    }
    break;
  case 4:
    piVar1 = *(int **)(this + (long)*(int *)(this + 0x468) * 8 + 0x148);
    lVar9 = *(long *)(this + 8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
      iVar13 = *(int *)(this + 0x10);
      plVar17 = *(long **)(lVar9 + 0x20);
      piVar1[0x1d] = iVar13;
      (**(code **)(*plVar17 + 0x18))(plVar17,piVar1[0x1c] + 1,iVar13,piVar1 + 0xc);
      uVar14 = (**(code **)(**(long **)(this + 0x470) + 0x28))
                         (*(long **)(this + 0x470),piVar1 + 0xc);
      *(undefined8 *)(piVar1 + 4) = uVar14;
      bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
      goto LAB_00101118;
    }
    goto LAB_0010149a;
  case 5:
    break;
  case 6:
    fixOpStack(this,4);
    uVar14 = 8;
    lVar9 = *(long *)(this + (long)*(int *)(this + 0x468) * 8 + 0x148);
    *(int *)(this + 0x468) = *(int *)(this + 0x468) + -1;
    goto LAB_0010128d;
  case 7:
  case 0xc:
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 8:
    fixOpStack(this,4);
    uVar14 = 9;
    lVar9 = *(long *)(this + (long)*(int *)(this + 0x468) * 8 + 0x148);
    *(int *)(this + 0x468) = *(int *)(this + 0x468) + -1;
    goto LAB_0010128d;
  case 9:
    fixOpStack(this,2);
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 10:
    pushNewNode(this,7);
    *(int *)(this + 0xc50) = *(int *)(this + 0xc50) + 1;
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 0xb:
    uVar14 = 0xf;
    goto LAB_00101176;
  case 0xd:
    this[0x46e] = (RBBIRuleScanner)0x1;
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 0xe:
    icu_76_godot::UnicodeString::UnicodeString
              (local_b8,*(UnicodeString **)(*(long *)(this + 8) + 0x20),*(int *)(this + 0xc54),
               *(int *)(this + 0x10) - *(int *)(this + 0xc54));
    local_c0 = L"chain";
    icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,1,&local_c0,5);
    uVar2 = local_70;
    if ((local_b0 & 1) == 0) {
      iVar13 = local_ac;
      if (-1 < (short)local_b0) {
        iVar13 = (int)((short)local_b0 >> 5);
      }
      iVar12 = local_6c;
      if (-1 < (short)local_70) {
        iVar12 = (int)((short)local_70 >> 5);
      }
      if (((local_70 & 1) == 0) && (iVar12 == iVar13)) {
        iVar13 = (int)local_6e;
        if ((local_70 & 2) == 0) {
          iVar13 = local_60;
        }
        cVar4 = icu_76_godot::UnicodeString::doEquals((wchar16 *)local_b8,iVar13);
        if (cVar4 != '\0') {
          icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
          goto LAB_00101893;
        }
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
LAB_001019b3:
      local_c0 = L"forward";
      icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,1,&local_c0,7);
      uVar2 = local_70;
      if ((local_b0 & 1) == 0) {
        iVar13 = local_ac;
        if (-1 < (short)local_b0) {
          iVar13 = (int)((short)local_b0 >> 5);
        }
        iVar12 = local_6c;
        if (-1 < (short)local_70) {
          iVar12 = (int)((short)local_70 >> 5);
        }
        if (((local_70 & 1) == 0) && (iVar12 == iVar13)) {
          iVar13 = (int)local_6e;
          if ((local_70 & 2) == 0) {
            iVar13 = local_60;
          }
          cVar4 = icu_76_godot::UnicodeString::doEquals((wchar16 *)local_b8,iVar13);
          if (cVar4 != '\0') {
            icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
            goto LAB_001019fc;
          }
        }
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
      }
      else {
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
        if ((uVar2 & 1) != 0) {
LAB_001019fc:
          *(long *)(*(long *)(this + 8) + 0x90) = *(long *)(this + 8) + 0x70;
          goto LAB_0010189e;
        }
      }
      local_c0 = L"reverse";
      icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,1,&local_c0,7);
      uVar2 = local_70;
      if ((local_b0 & 1) == 0) {
        iVar13 = local_ac;
        if (-1 < (short)local_b0) {
          iVar13 = (int)((short)local_b0 >> 5);
        }
        iVar12 = local_6c;
        if (-1 < (short)local_70) {
          iVar12 = (int)((short)local_70 >> 5);
        }
        if (((local_70 & 1) == 0) && (iVar12 == iVar13)) {
          iVar13 = (int)local_6e;
          if ((local_70 & 2) == 0) {
            iVar13 = local_60;
          }
          cVar4 = icu_76_godot::UnicodeString::doEquals((wchar16 *)local_b8,iVar13);
          if (cVar4 != '\0') {
            icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
            goto LAB_00101b4e;
          }
        }
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
      }
      else {
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
        if ((uVar2 & 1) != 0) {
LAB_00101b4e:
          *(long *)(*(long *)(this + 8) + 0x90) = *(long *)(this + 8) + 0x78;
          goto LAB_0010189e;
        }
      }
      local_c0 = L"safe_forward";
      icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,1,&local_c0,0xc);
      uVar2 = local_70;
      if ((local_b0 & 1) == 0) {
        if (-1 < (short)local_b0) {
          local_ac = (int)((short)local_b0 >> 5);
        }
        if (-1 < (short)local_70) {
          local_6c = (int)((short)local_70 >> 5);
        }
        if (((local_70 & 1) == 0) && (local_6c == local_ac)) {
          iVar13 = (int)local_6e;
          if ((local_70 & 2) == 0) {
            iVar13 = local_60;
          }
          cVar4 = icu_76_godot::UnicodeString::doEquals((wchar16 *)local_b8,iVar13);
          if (cVar4 != '\0') {
            icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
            goto LAB_00101ca6;
          }
        }
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
      }
      else {
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
        if ((uVar2 & 1) != 0) {
LAB_00101ca6:
          *(long *)(*(long *)(this + 8) + 0x90) = *(long *)(this + 8) + 0x80;
          goto LAB_0010189e;
        }
      }
      local_c0 = L"safe_reverse";
      icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,1,&local_c0,0xc);
      cVar4 = UnicodeString::operator==(local_b8,(UnicodeString *)&local_78);
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
      if (cVar4 == '\0') {
        local_c0 = L"lookAheadHardBreak";
        icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,1,&local_c0,0x12);
        cVar4 = UnicodeString::operator==(local_b8,(UnicodeString *)&local_78);
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
        if (cVar4 == '\0') {
          local_c0 = L"quoted_literals_only";
          icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,1,&local_c0,0x14);
          cVar4 = UnicodeString::operator==(local_b8,(UnicodeString *)&local_78);
          icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
          if (cVar4 == '\0') {
            local_c0 = L"unquoted_literals";
            icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,1,&local_c0,0x11);
            cVar4 = UnicodeString::operator==(local_b8,(UnicodeString *)&local_78);
            icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
            if (cVar4 == '\0') {
              error(this,0x1020c);
            }
            else {
              local_70 = 2;
              local_78 = u_hasBinaryProperty_76_godot;
              for (lVar9 = 0; (&gRuleSet_rule_char_pattern)[lVar9] != 0; lVar9 = lVar9 + 1) {
              }
              icu_76_godot::UnicodeString::doAppend((UnicodeString *)&local_78);
              icu_76_godot::UnicodeSet::applyPattern
                        ((UnicodeString *)(this + 0x6d8),(UnicodeString *)&local_78);
              icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
            }
          }
          else {
            icu_76_godot::UnicodeSet::clear();
          }
        }
        else {
          *(undefined1 *)(*(long *)(this + 8) + 0x99) = 1;
        }
      }
      else {
        *(long *)(*(long *)(this + 8) + 0x90) = *(long *)(this + 8) + 0x88;
      }
    }
    else {
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
      if ((uVar2 & 1) == 0) goto LAB_001019b3;
LAB_00101893:
      *(undefined1 *)(*(long *)(this + 8) + 0x98) = 1;
    }
LAB_0010189e:
    icu_76_godot::UnicodeString::~UnicodeString(local_b8);
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 0xf:
    *(undefined4 *)(this + 0xc54) = *(undefined4 *)(this + 0x10);
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 0x10:
    this[0x46c] = (RBBIRuleScanner)0x1;
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 0x11:
    pRVar8 = (RBBINode *)pushNewNode(this,0);
    if (**(int **)(*(long *)(this + 8) + 0x10) < 1) {
      icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)&local_78,*(int *)(this + 0x28));
      lVar9 = uhash_get_76_godot(*(undefined8 *)(this + 0x478),(UnicodeString *)&local_78);
      if (lVar9 == 0) {
        findSetFor(this,(UnicodeString *)&local_78,pRVar8,(UnicodeSet *)0x0);
      }
      else {
        *(undefined8 *)(pRVar8 + 0x10) = *(undefined8 *)(lVar9 + 8);
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
      uVar15 = *(ulong *)(this + 0x10);
      plVar17 = *(long **)(*(long *)(this + 8) + 0x20);
      uVar18 = (undefined4)(uVar15 >> 0x20);
      *(ulong *)(pRVar8 + 0x70) = uVar15;
      goto LAB_00101339;
    }
    break;
  case 0x12:
  case 0x1f:
    goto switchD_001010f2_caseD_12;
  case 0x13:
    piVar1 = *(int **)(*(long *)(this + 8) + 0x10);
    if (0 < *piVar1) break;
    puVar6 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
    *piVar1 = 0x10205;
    goto joined_r0x00101241;
  case 0x14:
    scanSet();
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 0x15:
    lVar9 = pushNewNode(this,4);
    if (**(int **)(*(long *)(this + 8) + 0x10) < 1) {
      plVar17 = *(long **)(*(long *)(this + 8) + 0x20);
      *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(this + 0xc50);
      uVar15 = *(ulong *)(this + 0x10);
      *(ulong *)(lVar9 + 0x70) = uVar15;
      (**(code **)(*plVar17 + 0x18))(plVar17,uVar15 & 0xffffffff,uVar15 >> 0x20,lVar9 + 0x30);
      this[0x46d] = (RBBIRuleScanner)0x1;
      bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
      goto LAB_00101118;
    }
    break;
  case 0x16:
    uVar14 = 7;
    *(undefined4 *)(*(long *)(this + (long)(*(int *)(this + 0x468) + -1) * 8 + 0x148) + 0x70) =
         *(undefined4 *)(this + 0x14);
LAB_00101176:
    pushNewNode(this,uVar14);
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 0x17:
    lVar9 = pushNewNode(this,5);
    if (0 < **(int **)(*(long *)(this + 8) + 0x10)) break;
    *(undefined4 *)(lVar9 + 0x7c) = 0;
    *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(this + 0x10);
    goto LAB_001012b1;
  case 0x18:
    lVar9 = pushNewNode(this,2);
    if (**(int **)(*(long *)(this + 8) + 0x10) < 1) {
      *(undefined4 *)(lVar9 + 0x70) = *(undefined4 *)(this + 0x10);
      goto LAB_001012b1;
    }
    break;
  case 0x19:
    lVar7 = *(long *)(this + (long)*(int *)(this + 0x468) * 8 + 0x148);
    uVar5 = u_charDigitValue_76_godot(*(undefined4 *)(this + 0x28));
    lVar9 = (ulong)uVar5 + (long)*(int *)(lVar7 + 0x7c) * 10;
    if (lVar9 < 0x80000000) {
      *(int *)(lVar7 + 0x7c) = (int)lVar9;
      bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
      goto LAB_00101118;
    }
switchD_001010f2_caseD_12:
    piVar1 = *(int **)(*(long *)(this + 8) + 0x10);
    if (0 < *piVar1) break;
    puVar6 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
    *piVar1 = 0x10203;
joined_r0x00101241:
    if (puVar6 == (undefined8 *)0x0) break;
    goto LAB_00101250;
  case 0x1a:
    piVar1 = *(int **)(*(long *)(this + 8) + 0x10);
    if (0 < *piVar1) break;
    puVar6 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
    *piVar1 = 0x1020d;
    goto joined_r0x001013b1;
  case 0x1b:
    uVar18 = *(undefined4 *)(this + 0x14);
    pRVar8 = *(RBBINode **)(this + (long)*(int *)(this + 0x468) * 8 + 0x148);
    plVar17 = *(long **)(*(long *)(this + 8) + 0x20);
    *(undefined4 *)(pRVar8 + 0x74) = uVar18;
    uVar15 = (ulong)*(uint *)(pRVar8 + 0x70);
LAB_0010133d:
    (**(code **)(*plVar17 + 0x18))(plVar17,uVar15,uVar18,pRVar8 + 0x30);
    bVar3 = **(int **)(*(long *)(this + 8) + 0x10) < 1;
    goto LAB_00101118;
  case 0x1c:
    uVar14 = 0xb;
    lVar9 = *(long *)(this + (long)*(int *)(this + 0x468) * 8 + 0x148);
    *(int *)(this + 0x468) = *(int *)(this + 0x468) + -1;
    goto LAB_0010128d;
  case 0x1d:
    uVar14 = 0xc;
    lVar9 = *(long *)(this + (long)*(int *)(this + 0x468) * 8 + 0x148);
    *(int *)(this + 0x468) = *(int *)(this + 0x468) + -1;
    goto LAB_0010128d;
  case 0x1e:
    uVar14 = 10;
    lVar9 = *(long *)(this + (long)*(int *)(this + 0x468) * 8 + 0x148);
    *(int *)(this + 0x468) = *(int *)(this + 0x468) + -1;
LAB_0010128d:
    lVar7 = pushNewNode(this,uVar14);
    if (**(int **)(*(long *)(this + 8) + 0x10) < 1) {
      *(long *)(lVar7 + 0x10) = lVar9;
      *(long *)(lVar9 + 8) = lVar7;
LAB_001012b1:
      bVar3 = true;
      goto LAB_00101118;
    }
    break;
  default:
    lVar9 = *(long *)(this + 8);
LAB_0010149a:
    if (**(int **)(lVar9 + 0x10) < 1) {
      puVar6 = *(undefined8 **)(lVar9 + 0x18);
      **(int **)(lVar9 + 0x10) = 0x10200;
joined_r0x001013b1:
      if (puVar6 != (undefined8 *)0x0) {
LAB_00101250:
        uVar14 = *(undefined8 *)(this + 0x1c);
        *(undefined2 *)(puVar6 + 5) = 0;
        *puVar6 = uVar14;
        *(undefined2 *)(puVar6 + 1) = 0;
      }
    }
  }
  bVar3 = false;
LAB_00101118:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RBBIRuleScanner::parse() */

void __thiscall icu_76_godot::RBBIRuleScanner::parse(RBBIRuleScanner *this)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  RBBIRuleScanner RVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  if (0 < **(int **)(*(long *)(this + 8) + 0x10)) {
    return;
  }
  nextChar(this,(RBBIRuleChar *)(this + 0x28));
  if (0 < **(int **)(*(long *)(this + 8) + 0x10)) {
    return;
  }
  uVar7 = 1;
LAB_00101fc0:
  piVar11 = (int *)(gRuleParseStateTable + uVar7 * 8);
  do {
    bVar1 = *(byte *)(piVar11 + 1);
    if (bVar1 < 0x7f) {
      if ((this[0x2c] == (RBBIRuleScanner)0x0) && ((uint)bVar1 == *(uint *)(this + 0x28))) break;
    }
    else {
      if (bVar1 == 0xff) break;
      if (bVar1 == 0xfe) {
        RVar6 = this[0x2c];
joined_r0x00101fff:
        if (RVar6 != (RBBIRuleScanner)0x0) break;
      }
      else if (bVar1 == 0xfd) {
        if ((this[0x2c] != (RBBIRuleScanner)0x0) && ((*(uint *)(this + 0x28) & 0xffffffdf) == 0x50))
        break;
      }
      else if (bVar1 == 0xfc) {
        if (*(int *)(this + 0x28) == -1) {
          cVar5 = doParseActions(this,*piVar11);
          goto joined_r0x001020c5;
        }
      }
      else if ((((byte)(bVar1 + 0x80) < 0x70) && (this[0x2c] == (RBBIRuleScanner)0x0)) &&
              (*(int *)(this + 0x28) != -1)) {
        RVar6 = (RBBIRuleScanner)
                icu_76_godot::UnicodeSet::contains((int)this + 0x480 + (bVar1 - 0x80) * 200);
        goto joined_r0x00101fff;
      }
    }
    piVar11 = piVar11 + 2;
  } while( true );
  cVar5 = doParseActions(this,*piVar11);
joined_r0x001020c5:
  if (cVar5 == '\0') {
    lVar8 = *(long *)(this + 8);
    piVar10 = *(int **)(lVar8 + 0x10);
    iVar9 = *piVar10;
    goto LAB_0010207d;
  }
  bVar1 = *(byte *)((long)piVar11 + 6);
  if (bVar1 != 0) {
    iVar2 = *(int *)(this + 0x140);
    iVar9 = iVar2 + 1;
    *(int *)(this + 0x140) = iVar9;
    if (99 < iVar9) {
      piVar10 = *(int **)(*(long *)(this + 8) + 0x10);
      if (*piVar10 < 1) {
        puVar3 = *(undefined8 **)(*(long *)(this + 8) + 0x18);
        *piVar10 = 0x10200;
        if (puVar3 != (undefined8 *)0x0) {
          uVar4 = *(undefined8 *)(this + 0x1c);
          *(undefined2 *)(puVar3 + 1) = 0;
          *puVar3 = uVar4;
          *(undefined2 *)(puVar3 + 5) = 0;
        }
      }
      *(int *)(this + 0x140) = iVar2;
      iVar9 = iVar2;
    }
    *(ushort *)(this + (long)iVar9 * 2 + 0x78) = (ushort)bVar1;
  }
  if (*(char *)((long)piVar11 + 7) != '\0') {
    nextChar(this,(RBBIRuleChar *)(this + 0x28));
  }
  lVar8 = *(long *)(this + 8);
  uVar7 = (ulong)*(byte *)((long)piVar11 + 5);
  piVar10 = *(int **)(lVar8 + 0x10);
  iVar9 = *piVar10;
  if (*(byte *)((long)piVar11 + 5) == 0xff) {
    iVar2 = *(int *)(this + 0x140);
    uVar7 = (ulong)*(ushort *)(this + (long)iVar2 * 2 + 0x78);
    *(int *)(this + 0x140) = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      if (iVar9 < 1) {
        puVar3 = *(undefined8 **)(lVar8 + 0x18);
        *piVar10 = 0x10200;
        if (puVar3 != (undefined8 *)0x0) {
          uVar4 = *(undefined8 *)(this + 0x1c);
          *(undefined2 *)(puVar3 + 1) = 0;
          *puVar3 = uVar4;
          *(undefined2 *)(puVar3 + 5) = 0;
        }
      }
      *(int *)(this + 0x140) = iVar2;
      return;
    }
  }
  if (0 < iVar9 || (short)uVar7 == 0) {
LAB_0010207d:
    if (0 < iVar9) {
      return;
    }
    if (*(long *)(lVar8 + 0x70) != 0) {
      return;
    }
    puVar3 = *(undefined8 **)(lVar8 + 0x18);
    *piVar10 = 0x10203;
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    uVar4 = *(undefined8 *)(this + 0x1c);
    *(undefined2 *)(puVar3 + 5) = 0;
    *puVar3 = uVar4;
    *(undefined2 *)(puVar3 + 1) = 0;
    return;
  }
  goto LAB_00101fc0;
}



/* icu_76_godot::UnicodeString::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UnicodeString const&) const
    */

ushort __thiscall
icu_76_godot::UnicodeString::operator==(UnicodeString *this,UnicodeString *param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(this + 8);
  uVar2 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    return uVar2 & 1;
  }
  if ((short)uVar1 < 0) {
    iVar6 = *(int *)(this + 0xc);
  }
  else {
    iVar6 = (int)((short)uVar1 >> 5);
  }
  if ((short)uVar2 < 0) {
    iVar5 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar5 = (int)((short)uVar2 >> 5);
  }
  bVar3 = ~(byte)uVar2 & iVar5 == iVar6;
  if (bVar3 != 0) {
    if ((uVar2 & 2) == 0) {
      iVar6 = (int)*(undefined8 *)(param_1 + 0x18);
    }
    else {
      iVar6 = (int)param_1 + 10;
    }
    cVar4 = icu_76_godot::UnicodeString::doEquals((wchar16 *)this,iVar6);
    return (ushort)(cVar4 != '\0');
  }
  return (ushort)bVar3;
}


