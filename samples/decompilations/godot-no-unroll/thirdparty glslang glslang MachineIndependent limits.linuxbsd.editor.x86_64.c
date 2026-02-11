
/* glslang::TIndexTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 __thiscall
glslang::TIndexTraverser::visitAggregate
          (TIndexTraverser *this,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_3 + 0x17) != 4) {
    return 1;
  }
  puVar1 = (undefined8 *)*param_3;
  this[0x40] = (TIndexTraverser)0x1;
  if ((code *)*puVar1 == TIntermNode::getLoc) {
    param_3 = param_3 + 1;
  }
  else {
    param_3 = (undefined8 *)(*(code *)*puVar1)(param_3);
  }
  uVar2 = param_3[1];
  *(undefined8 *)(this + 0x48) = *param_3;
  *(undefined8 *)(this + 0x50) = uVar2;
  *(undefined8 *)(this + 0x58) = param_3[2];
  return 1;
}



/* glslang::TInductiveTraverser::visitUnary(glslang::TVisit, glslang::TIntermUnary*) */

undefined8 __thiscall
glslang::TInductiveTraverser::visitUnary(TInductiveTraverser *this,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  
  cVar2 = glslang::TIntermOperator::modifiesState();
  if (cVar2 != '\0') {
    if (*(code **)(*param_3 + 0x188) == TIntermUnary::getOperand) {
      plVar4 = (long *)param_3[0x18];
    }
    else {
      plVar4 = (long *)(**(code **)(*param_3 + 0x188))(param_3);
    }
    lVar3 = (**(code **)(*plVar4 + 0x60))();
    if (lVar3 != 0) {
      if (*(code **)(*param_3 + 0x188) == TIntermUnary::getOperand) {
        plVar4 = (long *)param_3[0x18];
      }
      else {
        plVar4 = (long *)(**(code **)(*param_3 + 0x188))(param_3);
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
      if (*(code **)(*plVar4 + 0x180) == TIntermSymbol::getId) {
        lVar3 = plVar4[0x17];
      }
      else {
        lVar3 = (**(code **)(*plVar4 + 0x180))();
      }
      if (lVar3 == *(long *)(this + 0x38)) {
        puVar1 = (undefined8 *)*param_3;
        this[0x48] = (TInductiveTraverser)0x1;
        if ((code *)*puVar1 == TIntermNode::getLoc) {
          param_3 = param_3 + 1;
        }
        else {
          param_3 = (long *)(*(code *)*puVar1)(param_3);
        }
        lVar3 = param_3[1];
        *(long *)(this + 0x50) = *param_3;
        *(long *)(this + 0x58) = lVar3;
        *(long *)(this + 0x60) = param_3[2];
        return 1;
      }
    }
  }
  return 1;
}



/* glslang::TIndexTraverser::visitSymbol(glslang::TIntermSymbol*) */

void __thiscall glslang::TIndexTraverser::visitSymbol(TIndexTraverser *this,TIntermSymbol *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  TIntermSymbol *pTVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *(long *)(this + 0x38);
  lVar1 = lVar2 + 8;
  if (*(code **)(*(long *)param_1 + 0x180) == TIntermSymbol::getId) {
    lVar5 = *(long *)(param_1 + 0xb8);
  }
  else {
    lVar5 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  lVar8 = lVar1;
  if (lVar2 != 0) {
    do {
      while( true ) {
        lVar7 = lVar2;
        if (*(long *)(lVar7 + 0x20) < lVar5) break;
        lVar2 = *(long *)(lVar7 + 0x10);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 0x10) == 0) goto LAB_001001e1;
      }
      lVar2 = *(long *)(lVar7 + 0x18);
    } while (*(long *)(lVar7 + 0x18) != 0);
LAB_001001e1:
    if ((lVar1 != lVar8) && (*(long *)(lVar8 + 0x20) <= lVar5)) {
      return;
    }
  }
  puVar3 = *(undefined8 **)param_1;
  this[0x40] = (TIndexTraverser)0x1;
  pTVar6 = param_1 + 8;
  if ((code *)*puVar3 != TIntermNode::getLoc) {
    pTVar6 = (TIntermSymbol *)(*(code *)*puVar3)(param_1);
  }
  uVar4 = *(undefined8 *)(pTVar6 + 8);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)pTVar6;
  *(undefined8 *)(this + 0x50) = uVar4;
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(pTVar6 + 0x10);
  return;
}



/* glslang::TInductiveTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */

undefined8 __thiscall
glslang::TInductiveTraverser::visitBinary
          (TInductiveTraverser *this,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  
  cVar2 = glslang::TIntermOperator::modifiesState();
  if (cVar2 != '\0') {
    if (*(code **)(*param_3 + 400) == TIntermBinary::getLeft) {
      plVar4 = (long *)param_3[0x18];
    }
    else {
      plVar4 = (long *)(**(code **)(*param_3 + 400))(param_3);
    }
    lVar3 = (**(code **)(*plVar4 + 0x60))();
    if (lVar3 != 0) {
      if (*(code **)(*param_3 + 400) == TIntermBinary::getLeft) {
        plVar4 = (long *)param_3[0x18];
      }
      else {
        plVar4 = (long *)(**(code **)(*param_3 + 400))(param_3);
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
      if (*(code **)(*plVar4 + 0x180) == TIntermSymbol::getId) {
        lVar3 = plVar4[0x17];
      }
      else {
        lVar3 = (**(code **)(*plVar4 + 0x180))();
      }
      if (lVar3 == *(long *)(this + 0x38)) {
        puVar1 = (undefined8 *)*param_3;
        this[0x48] = (TInductiveTraverser)0x1;
        if ((code *)*puVar1 == TIntermNode::getLoc) {
          param_3 = param_3 + 1;
        }
        else {
          param_3 = (long *)(*(code *)*puVar1)(param_3);
        }
        lVar3 = param_3[1];
        *(long *)(this + 0x50) = *param_3;
        *(long *)(this + 0x58) = lVar3;
        *(long *)(this + 0x60) = param_3[2];
        return 1;
      }
    }
  }
  return 1;
}



/* glslang::TInductiveTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 __thiscall
glslang::TInductiveTraverser::visitAggregate
          (TInductiveTraverser *this,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  void *__s2;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  bool bVar15;
  long *local_60;
  
  if ((int)param_3[0x17] != 4) {
    return 1;
  }
  if (*(code **)(*param_3 + 400) == TIntermAggregate::getSequence) {
    plVar7 = param_3 + 0x18;
  }
  else {
    plVar7 = (long *)(**(code **)(*param_3 + 400))(param_3);
  }
  lVar5 = plVar7[1];
  if (0 < (int)(plVar7[2] - lVar5 >> 3)) {
    uVar10 = 0;
    do {
      lVar5 = (**(code **)(**(long **)(lVar5 + uVar10 * 8) + 0x60))();
      if (lVar5 != 0) {
        plVar6 = (long *)(**(code **)(**(long **)(plVar7[1] + uVar10 * 8) + 0x60))();
        if (*(code **)(*plVar6 + 0x180) == TIntermSymbol::getId) {
          lVar5 = plVar6[0x17];
        }
        else {
          lVar5 = (**(code **)(*plVar6 + 0x180))();
        }
        if (lVar5 == *(long *)(this + 0x38)) {
          plVar6 = *(long **)(this + 0x40);
          if (*(code **)(*param_3 + 0x1a8) == TIntermAggregate::getName_abi_cxx11_) {
            local_60 = param_3 + 0x20;
          }
          else {
            local_60 = (long *)(**(code **)(*param_3 + 0x1a8))(param_3);
          }
          lVar5 = *plVar6;
          lVar8 = (long)((int)(plVar6[1] - lVar5 >> 3) + -2);
          do {
            lVar11 = *(long *)(lVar5 + 8 + lVar8 * 8);
            plVar13 = *(long **)(lVar11 + 0x18);
            plVar6 = (long *)(lVar11 + 0x10);
            if (plVar13 == (long *)0x0) {
LAB_00100589:
              bVar15 = true;
            }
            else {
              uVar1 = local_60[2];
              __s2 = (void *)local_60[1];
              plVar14 = plVar6;
              do {
                while( true ) {
                  plVar12 = plVar13;
                  uVar2 = plVar12[6];
                  uVar9 = uVar1;
                  if (uVar2 <= uVar1) {
                    uVar9 = uVar2;
                  }
                  if (uVar9 != 0) break;
LAB_001004ef:
                  lVar11 = uVar2 - uVar1;
                  if (lVar11 < 0x80000000) {
                    if (-0x80000001 < lVar11) {
                      iVar4 = (int)lVar11;
                      goto LAB_00100508;
                    }
                    goto LAB_001004c0;
                  }
LAB_0010050c:
                  plVar13 = (long *)plVar12[2];
                  plVar14 = plVar12;
                  if (plVar13 == (long *)0x0) goto LAB_00100519;
                }
                iVar4 = memcmp((void *)plVar12[5],__s2,uVar9);
                if (iVar4 == 0) goto LAB_001004ef;
LAB_00100508:
                if (-1 < iVar4) goto LAB_0010050c;
LAB_001004c0:
                plVar13 = (long *)plVar12[3];
              } while (plVar13 != (long *)0x0);
LAB_00100519:
              bVar15 = true;
              if (plVar6 != plVar14) {
                uVar2 = plVar14[6];
                uVar9 = uVar1;
                if (uVar2 <= uVar1) {
                  uVar9 = uVar2;
                }
                if (uVar9 == 0) {
LAB_00100560:
                  lVar11 = uVar1 - uVar2;
                  if (lVar11 < 0x80000000) {
                    if (lVar11 < -0x80000000) goto LAB_00100589;
                    iVar4 = (int)lVar11;
                    goto LAB_00100581;
                  }
                }
                else {
                  iVar4 = memcmp(__s2,(void *)plVar14[5],uVar9);
                  if (iVar4 == 0) goto LAB_00100560;
LAB_00100581:
                  if (iVar4 < 0) goto LAB_00100589;
                }
                plVar13 = (long *)plVar14[9];
                bVar15 = plVar13 == (long *)0x0;
              }
            }
            uVar1 = (ulong)lVar8 >> 0x18;
            lVar8 = lVar8 + -1;
          } while ((bVar15 & (byte)~(byte)uVar1 >> 7) != 0);
          plVar6 = (long *)(**(code **)(*plVar13 + 0x38))(plVar13);
          if (*(code **)(*plVar6 + 0x138) == TFunction::operator[]) {
            lVar5 = plVar6[6] + uVar10 * 0x18;
          }
          else {
            lVar5 = (**(code **)(*plVar6 + 0x138))(plVar6,uVar10 & 0xffffffff);
          }
          plVar6 = *(long **)(lVar5 + 8);
          if (*(code **)(*plVar6 + 0x58) == TType::getQualifier) {
            bVar3 = *(byte *)(plVar6 + 3) & 0x7f;
            if (bVar3 != 0x11) {
LAB_0010060b:
              if (bVar3 != 0x12) goto LAB_001003c0;
            }
          }
          else {
            lVar5 = (**(code **)(*plVar6 + 0x58))(plVar6);
            if ((*(byte *)(lVar5 + 8) & 0x7f) != 0x11) {
              if (*(code **)(*plVar6 + 0x58) == TType::getQualifier) {
                bVar3 = *(byte *)(plVar6 + 3) & 0x7f;
              }
              else {
                lVar5 = (**(code **)(*plVar6 + 0x58))(plVar6);
                bVar3 = *(byte *)(lVar5 + 8) & 0x7f;
              }
              goto LAB_0010060b;
            }
          }
          this[0x48] = (TInductiveTraverser)0x1;
          plVar6 = param_3 + 1;
          if (*(code **)*param_3 != TIntermNode::getLoc) {
            plVar6 = (long *)(**(code **)*param_3)(param_3);
          }
          lVar5 = plVar6[1];
          *(long *)(this + 0x50) = *plVar6;
          *(long *)(this + 0x58) = lVar5;
          *(long *)(this + 0x60) = plVar6[2];
        }
      }
LAB_001003c0:
      lVar5 = plVar7[1];
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)(plVar7[2] - lVar5 >> 3));
  }
  return 1;
}



/* glslang::TParseContext::inductiveLoopBodyCheck(TIntermNode*, long long, glslang::TSymbolTable&)
    */

void __thiscall
glslang::TParseContext::inductiveLoopBodyCheck
          (TParseContext *this,TIntermNode *param_1,longlong param_2,TSymbolTable *param_3)

{
  long in_FS_OFFSET;
  undefined **local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  TSymbolTable *local_58;
  char local_50;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 1;
  local_8c = 0;
  local_98 = &PTR__TIntermTraverser_00100b48;
  local_80 = glslang::GetThreadPoolAllocator();
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_98 = &PTR__TInductiveTraverser_00100bb0;
  local_50 = '\0';
  local_60 = param_2;
  local_58 = param_3;
  if (param_1 != (TIntermNode *)0x0) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_98);
    if (local_50 != '\0') {
      (**(code **)(*(long *)this + 0x158))
                (this,local_48,"inductive loop index modified","limitations",&_LC1);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TParseContext::constantIndexExpressionCheck(TIntermNode*) */

void __thiscall
glslang::TParseContext::constantIndexExpressionCheck(TParseContext *this,TIntermNode *param_1)

{
  long in_FS_OFFSET;
  undefined **local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  TParseContext *local_50;
  char local_48;
  undefined1 local_40 [32];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 1;
  local_7c = 0;
  local_88 = &PTR__TIntermTraverser_00100b48;
  local_70 = glslang::GetThreadPoolAllocator();
  local_48 = '\0';
  local_88 = &PTR__TIndexTraverser_00100c18;
  local_50 = this + 0x7548;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_88);
  if (local_48 != '\0') {
    (**(code **)(*(long *)this + 0x158))
              (this,local_40,"Non-constant-index-expression","limitations",&_LC1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TType::getQualifier() const */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* TIntermNode::getLoc() const */

TIntermNode * __thiscall TIntermNode::getLoc(TIntermNode *this)

{
  return this + 8;
}



/* glslang::TIntermSymbol::getId() const */

undefined8 __thiscall glslang::TIntermSymbol::getId(TIntermSymbol *this)

{
  return *(undefined8 *)(this + 0xb8);
}



/* glslang::TIntermBinary::getLeft() const */

undefined8 __thiscall glslang::TIntermBinary::getLeft(TIntermBinary *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermUnary::getOperand() */

undefined8 __thiscall glslang::TIntermUnary::getOperand(TIntermUnary *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermAggregate::getSequence() */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
}



/* glslang::TIntermAggregate::getName[abi:cxx11]() const */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getName_abi_cxx11_(TIntermAggregate *this)

{
  return this + 0x100;
}



/* glslang::TIntermTraverser::~TIntermTraverser() */

void __thiscall glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this)

{
  return;
}



/* glslang::TIntermTraverser::visitSymbol(glslang::TIntermSymbol*) */

void glslang::TIntermTraverser::visitSymbol(TIntermSymbol *param_1)

{
  return;
}



/* glslang::TIntermTraverser::visitConstantUnion(glslang::TIntermConstantUnion*) */

void glslang::TIntermTraverser::visitConstantUnion(TIntermConstantUnion *param_1)

{
  return;
}



/* glslang::TIntermTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */

undefined8 glslang::TIntermTraverser::visitBinary(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitUnary(glslang::TVisit, glslang::TIntermUnary*) */

undefined8 glslang::TIntermTraverser::visitUnary(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitSelection(glslang::TVisit, glslang::TIntermSelection*) */

undefined8 glslang::TIntermTraverser::visitSelection(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 glslang::TIntermTraverser::visitAggregate(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitLoop(glslang::TVisit, glslang::TIntermLoop*) */

undefined8 glslang::TIntermTraverser::visitLoop(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitBranch(glslang::TVisit, glslang::TIntermBranch*) */

undefined8 glslang::TIntermTraverser::visitBranch(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitSwitch(glslang::TVisit, glslang::TIntermSwitch*) */

undefined8 glslang::TIntermTraverser::visitSwitch(void)

{
  return 1;
}



/* glslang::TFunction::operator[](int) */

long __thiscall glslang::TFunction::operator[](TFunction *this,int param_1)

{
  return *(long *)(this + 0x30) + (long)param_1 * 0x18;
}



/* glslang::TInductiveTraverser::~TInductiveTraverser() */

void __thiscall glslang::TInductiveTraverser::~TInductiveTraverser(TInductiveTraverser *this)

{
  return;
}



/* glslang::TIndexTraverser::~TIndexTraverser() */

void __thiscall glslang::TIndexTraverser::~TIndexTraverser(TIndexTraverser *this)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIndexTraverser::~TIndexTraverser() */

void __thiscall glslang::TIndexTraverser::~TIndexTraverser(TIndexTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TInductiveTraverser::~TInductiveTraverser() */

void __thiscall glslang::TInductiveTraverser::~TInductiveTraverser(TInductiveTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermTraverser::~TIntermTraverser() */

void __thiscall glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


