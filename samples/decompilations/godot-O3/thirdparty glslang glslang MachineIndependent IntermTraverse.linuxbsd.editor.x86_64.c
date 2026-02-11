
/* glslang::TIntermMethod::traverse(glslang::TIntermTraverser*) */

void glslang::TIntermMethod::traverse(TIntermTraverser *param_1)

{
  return;
}



/* glslang::TIntermBranch::traverse(glslang::TIntermTraverser*) */

void __thiscall glslang::TIntermBranch::traverse(TIntermBranch *this,TIntermTraverser *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (((param_1[8] != (TIntermTraverser)0x0) &&
      (*(code **)(*(long *)param_1 + 0x48) != TIntermTraverser::visitBranch)) &&
     (cVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1,0,this), cVar4 == '\0')) {
    return;
  }
  plVar10 = *(long **)(this + 0x28);
  if (plVar10 == (long *)0x0) goto LAB_00100086;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar5;
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar5) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  if (puVar1 == *(undefined8 **)(param_1 + 0x30)) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    puVar12 = (undefined8 *)((long)puVar1 - (long)puVar2);
    uVar6 = (long)puVar12 >> 3;
    if (uVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    if (puVar1 == puVar2) {
      uVar9 = uVar6 + 1;
      if (0xfffffffffffffffe < uVar6) goto LAB_001001a8;
      if (0xfffffffffffffff < uVar9) {
        uVar9 = 0xfffffffffffffff;
      }
      lVar11 = uVar9 * 8;
LAB_0010017f:
      lVar7 = glslang::TPoolAllocator::allocate(*(ulong *)(param_1 + 0x18));
      plVar10 = *(long **)(this + 0x28);
      lVar11 = lVar7 + lVar11;
      *(TIntermBranch **)(lVar7 + (long)puVar12) = this;
      lVar8 = lVar7 + 8;
      if (puVar1 != puVar2) goto LAB_00100126;
    }
    else {
      uVar9 = uVar6 * 2;
      if (uVar9 < uVar6) {
LAB_001001a8:
        lVar11 = 0x7ffffffffffffff8;
        goto LAB_0010017f;
      }
      if (uVar9 != 0) {
        if (0xfffffffffffffff < uVar9) {
          uVar9 = 0xfffffffffffffff;
        }
        lVar11 = uVar9 * 8;
        goto LAB_0010017f;
      }
      *puVar12 = this;
      lVar11 = 0;
      lVar7 = 0;
LAB_00100126:
      lVar8 = 0;
      do {
        *(undefined8 *)(lVar7 + lVar8) = *(undefined8 *)((long)puVar2 + lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != (long)puVar1 - (long)puVar2);
      lVar8 = lVar7 + 8 + lVar8;
    }
    *(long *)(param_1 + 0x20) = lVar7;
    *(long *)(param_1 + 0x28) = lVar8;
    *(long *)(param_1 + 0x30) = lVar11;
  }
  else {
    *puVar1 = this;
    *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
  }
  (**(code **)(*plVar10 + 0x10))(plVar10,param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
LAB_00100086:
  if ((param_1[10] != (TIntermTraverser)0x0) &&
     (*(code **)(*(long *)param_1 + 0x48) != TIntermTraverser::visitBranch)) {
                    /* WARNING: Could not recover jumptable at 0x001000d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x48))(param_1,2,this);
    return;
  }
  return;
}



/* glslang::TIntermConstantUnion::traverse(glslang::TIntermTraverser*) */

void __thiscall
glslang::TIntermConstantUnion::traverse(TIntermConstantUnion *this,TIntermTraverser *param_1)

{
  if (*(code **)(*(long *)param_1 + 0x18) == TIntermTraverser::visitConstantUnion) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(param_1,this);
  return;
}



/* glslang::TIntermSymbol::traverse(glslang::TIntermTraverser*) */

void __thiscall glslang::TIntermSymbol::traverse(TIntermSymbol *this,TIntermTraverser *param_1)

{
  if (*(code **)(*(long *)param_1 + 0x10) == TIntermTraverser::visitSymbol) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this);
  return;
}



/* glslang::TIntermSymbol::getAccessName[abi:cxx11]() const */

TIntermSymbol * __thiscall glslang::TIntermSymbol::getAccessName_abi_cxx11_(TIntermSymbol *this)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  TIntermSymbol *pTVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (*(code **)(lVar3 + 0x100) == TIntermTyped::getBasicType) {
    uVar1 = (uint)(byte)this[0x28];
  }
  else {
    uVar1 = (**(code **)(lVar3 + 0x100))();
    lVar3 = *(long *)this;
  }
  if (uVar1 == 0x10) {
    if (*(code **)(lVar3 + 0xf0) == TIntermTyped::getType) {
      pTVar2 = this + 0x20;
    }
    else {
      pTVar2 = (TIntermSymbol *)(**(code **)(lVar3 + 0xf0))();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar2 + 0x28);
    if (UNRECOVERED_JUMPTABLE == TType::getTypeName_abi_cxx11_) {
      return *(TIntermSymbol **)(pTVar2 + 0x78);
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 400);
    if (UNRECOVERED_JUMPTABLE == getName_abi_cxx11_) {
      return this + 200;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001002e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar2 = (TIntermSymbol *)(*UNRECOVERED_JUMPTABLE)();
  return pTVar2;
}



/* glslang::TIntermSelection::traverse(glslang::TIntermTraverser*) */

void __thiscall
glslang::TIntermSelection::traverse(TIntermSelection *this,TIntermTraverser *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (((param_1[8] != (TIntermTraverser)0x0) &&
      (*(code **)(*(long *)param_1 + 0x30) != TIntermTraverser::visitSelection)) &&
     (cVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,0,this), cVar5 == '\0')) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar6;
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar6) {
    iVar4 = iVar6;
  }
  *(int *)(param_1 + 0x10) = iVar4;
  if (puVar1 != *(undefined8 **)(param_1 + 0x30)) {
    *puVar1 = this;
    *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
    goto LAB_00100363;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  puVar12 = (undefined8 *)((long)puVar1 - (long)puVar3);
  uVar7 = (long)puVar12 >> 3;
  if (uVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar1 == puVar3) {
    uVar10 = uVar7 + 1;
    if (0xfffffffffffffffe < uVar7) goto LAB_001004e0;
    if (0xfffffffffffffff < uVar10) {
      uVar10 = 0xfffffffffffffff;
    }
    lVar11 = uVar10 * 8;
LAB_001004ea:
    lVar8 = glslang::TPoolAllocator::allocate(*(ulong *)(param_1 + 0x18));
    *(TIntermSelection **)(lVar8 + (long)puVar12) = this;
    lVar11 = lVar8 + lVar11;
    lVar9 = lVar8 + 8;
    if (puVar1 != puVar3) goto LAB_0010048e;
  }
  else {
    uVar10 = uVar7 * 2;
    if (uVar10 < uVar7) {
LAB_001004e0:
      lVar11 = 0x7ffffffffffffff8;
      goto LAB_001004ea;
    }
    if (uVar10 != 0) {
      if (0xfffffffffffffff < uVar10) {
        uVar10 = 0xfffffffffffffff;
      }
      lVar11 = uVar10 * 8;
      goto LAB_001004ea;
    }
    *puVar12 = this;
    lVar8 = 0;
    lVar11 = 0;
LAB_0010048e:
    lVar9 = 0;
    do {
      *(undefined8 *)(lVar8 + lVar9) = *(undefined8 *)((long)puVar3 + lVar9);
      lVar9 = lVar9 + 8;
    } while (lVar9 != (long)puVar1 - (long)puVar3);
    lVar9 = lVar8 + 8 + lVar9;
  }
  *(long *)(param_1 + 0x20) = lVar8;
  *(long *)(param_1 + 0x28) = lVar9;
  *(long *)(param_1 + 0x30) = lVar11;
LAB_00100363:
  if (param_1[0xb] == (TIntermTraverser)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 0x10))(*(long **)(this + 0xb8),param_1);
    plVar2 = *(long **)(this + 0xc0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    plVar2 = *(long **)(this + 200);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
  }
  else {
    plVar2 = *(long **)(this + 200);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    plVar2 = *(long **)(this + 0xc0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    (**(code **)(**(long **)(this + 0xb8) + 0x10))(*(long **)(this + 0xb8),param_1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
  if ((param_1[10] != (TIntermTraverser)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != TIntermTraverser::visitSelection)) {
                    /* WARNING: Could not recover jumptable at 0x001004d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(param_1,2,this);
    return;
  }
  return;
}



/* glslang::TIntermLoop::traverse(glslang::TIntermTraverser*) */

void __thiscall glslang::TIntermLoop::traverse(TIntermLoop *this,TIntermTraverser *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (((param_1[8] != (TIntermTraverser)0x0) &&
      (*(code **)(*(long *)param_1 + 0x40) != TIntermTraverser::visitLoop)) &&
     (cVar5 = (**(code **)(*(long *)param_1 + 0x40))(param_1,0,this), cVar5 == '\0')) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar6;
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar6) {
    iVar4 = iVar6;
  }
  *(int *)(param_1 + 0x10) = iVar4;
  if (puVar1 != *(undefined8 **)(param_1 + 0x30)) {
    *puVar1 = this;
    *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
    goto LAB_001005c3;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  puVar12 = (undefined8 *)((long)puVar1 - (long)puVar3);
  uVar7 = (long)puVar12 >> 3;
  if (uVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar1 == puVar3) {
    uVar10 = uVar7 + 1;
    if (0xfffffffffffffffe < uVar7) goto LAB_00100730;
    if (0xfffffffffffffff < uVar10) {
      uVar10 = 0xfffffffffffffff;
    }
    lVar11 = uVar10 * 8;
LAB_0010073a:
    lVar8 = glslang::TPoolAllocator::allocate(*(ulong *)(param_1 + 0x18));
    *(TIntermLoop **)(lVar8 + (long)puVar12) = this;
    lVar11 = lVar8 + lVar11;
    lVar9 = lVar8 + 8;
    if (puVar1 != puVar3) goto LAB_001006de;
  }
  else {
    uVar10 = uVar7 * 2;
    if (uVar10 < uVar7) {
LAB_00100730:
      lVar11 = 0x7ffffffffffffff8;
      goto LAB_0010073a;
    }
    if (uVar10 != 0) {
      if (0xfffffffffffffff < uVar10) {
        uVar10 = 0xfffffffffffffff;
      }
      lVar11 = uVar10 * 8;
      goto LAB_0010073a;
    }
    *puVar12 = this;
    lVar11 = 0;
    lVar8 = 0;
LAB_001006de:
    lVar9 = 0;
    do {
      *(undefined8 *)(lVar8 + lVar9) = *(undefined8 *)((long)puVar3 + lVar9);
      lVar9 = lVar9 + 8;
    } while (lVar9 != (long)puVar1 - (long)puVar3);
    lVar9 = lVar8 + 8 + lVar9;
  }
  *(long *)(param_1 + 0x20) = lVar8;
  *(long *)(param_1 + 0x28) = lVar9;
  *(long *)(param_1 + 0x30) = lVar11;
LAB_001005c3:
  if (param_1[0xb] == (TIntermTraverser)0x0) {
    plVar2 = *(long **)(this + 0x28);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    plVar2 = *(long **)(this + 0x20);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    plVar2 = *(long **)(this + 0x30);
  }
  else {
    plVar2 = *(long **)(this + 0x30);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    plVar2 = *(long **)(this + 0x20);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    plVar2 = *(long **)(this + 0x28);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
  if ((param_1[10] != (TIntermTraverser)0x0) &&
     (*(code **)(*(long *)param_1 + 0x40) != TIntermTraverser::visitLoop)) {
                    /* WARNING: Could not recover jumptable at 0x00100729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x40))(param_1,2,this);
    return;
  }
  return;
}



/* glslang::TIntermUnary::traverse(glslang::TIntermTraverser*) */

void __thiscall glslang::TIntermUnary::traverse(TIntermUnary *this,TIntermTraverser *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (((param_1[8] != (TIntermTraverser)0x0) &&
      (*(code **)(*(long *)param_1 + 0x28) != TIntermTraverser::visitUnary)) &&
     (cVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,0,this), cVar4 == '\0')) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar5;
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar5) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  if (puVar1 != *(undefined8 **)(param_1 + 0x30)) {
    *puVar1 = this;
    *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
    goto LAB_00100813;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar11 = (undefined8 *)((long)puVar1 - (long)puVar2);
  uVar6 = (long)puVar11 >> 3;
  if (uVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar1 == puVar2) {
    uVar9 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) goto LAB_00100920;
    if (0xfffffffffffffff < uVar9) {
      uVar9 = 0xfffffffffffffff;
    }
    lVar10 = uVar9 * 8;
LAB_0010092a:
    lVar7 = glslang::TPoolAllocator::allocate(*(ulong *)(param_1 + 0x18));
    *(TIntermUnary **)(lVar7 + (long)puVar11) = this;
    lVar10 = lVar7 + lVar10;
    lVar8 = lVar7 + 8;
    if (puVar1 != puVar2) goto LAB_001008e6;
  }
  else {
    uVar9 = uVar6 * 2;
    if (uVar9 < uVar6) {
LAB_00100920:
      lVar10 = 0x7ffffffffffffff8;
      goto LAB_0010092a;
    }
    if (uVar9 != 0) {
      if (0xfffffffffffffff < uVar9) {
        uVar9 = 0xfffffffffffffff;
      }
      lVar10 = uVar9 * 8;
      goto LAB_0010092a;
    }
    *puVar11 = this;
    lVar10 = 0;
    lVar7 = 0;
LAB_001008e6:
    lVar8 = 0;
    do {
      *(undefined8 *)(lVar7 + lVar8) = *(undefined8 *)((long)puVar2 + lVar8);
      lVar8 = lVar8 + 8;
    } while (lVar8 != (long)puVar1 - (long)puVar2);
    lVar8 = lVar7 + 8 + lVar8;
  }
  *(long *)(param_1 + 0x20) = lVar7;
  *(long *)(param_1 + 0x28) = lVar8;
  *(long *)(param_1 + 0x30) = lVar10;
LAB_00100813:
  (**(code **)(**(long **)(this + 0xc0) + 0x10))(*(long **)(this + 0xc0),param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
  if ((param_1[10] != (TIntermTraverser)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != TIntermTraverser::visitUnary)) {
                    /* WARNING: Could not recover jumptable at 0x00100871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x28))(param_1,2,this);
    return;
  }
  return;
}



/* glslang::TIntermBinary::traverse(glslang::TIntermTraverser*) */

void __thiscall glslang::TIntermBinary::traverse(TIntermBinary *this,TIntermTraverser *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (((param_1[8] != (TIntermTraverser)0x0) &&
      (*(code **)(*(long *)param_1 + 0x20) != TIntermTraverser::visitBinary)) &&
     (cVar5 = (**(code **)(*(long *)param_1 + 0x20))(param_1,0,this), cVar5 == '\0')) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar6;
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar6) {
    iVar4 = iVar6;
  }
  *(int *)(param_1 + 0x10) = iVar4;
  if (puVar1 == *(undefined8 **)(param_1 + 0x30)) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar12 = (undefined8 *)((long)puVar1 - (long)puVar3);
    uVar7 = (long)puVar12 >> 3;
    if (uVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    if (puVar1 == puVar3) {
      uVar10 = uVar7 + 1;
      if (0xfffffffffffffffe < uVar7) goto LAB_00100bf0;
      if (0xfffffffffffffff < uVar10) {
        uVar10 = 0xfffffffffffffff;
      }
      lVar11 = uVar10 * 8;
LAB_00100bfa:
      lVar8 = glslang::TPoolAllocator::allocate(*(ulong *)(param_1 + 0x18));
      *(TIntermBinary **)(lVar8 + (long)puVar12) = this;
      lVar11 = lVar8 + lVar11;
      lVar9 = lVar8 + 8;
      if (puVar1 != puVar3) goto LAB_00100b6a;
    }
    else {
      uVar10 = uVar7 * 2;
      if (uVar10 < uVar7) {
LAB_00100bf0:
        lVar11 = 0x7ffffffffffffff8;
        goto LAB_00100bfa;
      }
      if (uVar10 != 0) {
        if (0xfffffffffffffff < uVar10) {
          uVar10 = 0xfffffffffffffff;
        }
        lVar11 = uVar10 * 8;
        goto LAB_00100bfa;
      }
      *puVar12 = this;
      lVar11 = 0;
      lVar8 = 0;
LAB_00100b6a:
      lVar9 = 0;
      do {
        *(undefined8 *)(lVar8 + lVar9) = *(undefined8 *)((long)puVar3 + lVar9);
        lVar9 = lVar9 + 8;
      } while (lVar9 != (long)puVar1 - (long)puVar3);
      lVar9 = lVar8 + 8 + lVar9;
    }
    *(long *)(param_1 + 0x20) = lVar8;
    *(long *)(param_1 + 0x28) = lVar9;
    *(long *)(param_1 + 0x30) = lVar11;
  }
  else {
    *puVar1 = this;
    *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
  }
  if (param_1[0xb] == (TIntermTraverser)0x0) {
    plVar2 = *(long **)(this + 0xc0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    if (((param_1[9] != (TIntermTraverser)0x0) &&
        (*(code **)(*(long *)param_1 + 0x20) != TIntermTraverser::visitBinary)) &&
       (cVar5 = (**(code **)(*(long *)param_1 + 0x20))(param_1,1,this), cVar5 == '\0'))
    goto LAB_00100bb5;
    plVar2 = *(long **)(this + 200);
  }
  else {
    plVar2 = *(long **)(this + 200);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    if (((param_1[9] != (TIntermTraverser)0x0) &&
        (*(code **)(*(long *)param_1 + 0x20) != TIntermTraverser::visitBinary)) &&
       (cVar5 = (**(code **)(*(long *)param_1 + 0x20))(param_1,1,this), cVar5 == '\0')) {
LAB_00100bb5:
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
      return;
    }
    plVar2 = *(long **)(this + 0xc0);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
  if ((param_1[10] != (TIntermTraverser)0x0) &&
     (*(code **)(*(long *)param_1 + 0x20) != TIntermTraverser::visitBinary)) {
                    /* WARNING: Could not recover jumptable at 0x00100be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x20))(param_1,2,this);
    return;
  }
  return;
}



/* glslang::TIntermSwitch::traverse(glslang::TIntermTraverser*) */

void __thiscall glslang::TIntermSwitch::traverse(TIntermSwitch *this,TIntermTraverser *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (((param_1[8] != (TIntermTraverser)0x0) &&
      (*(code **)(*(long *)param_1 + 0x50) != TIntermTraverser::visitSwitch)) &&
     (cVar4 = (**(code **)(*(long *)param_1 + 0x50))(param_1,0,this), cVar4 == '\0')) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar5;
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar5) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  if (puVar1 != *(undefined8 **)(param_1 + 0x30)) {
    *puVar1 = this;
    *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
    goto LAB_00100cd3;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar11 = (undefined8 *)((long)puVar1 - (long)puVar2);
  uVar6 = (long)puVar11 >> 3;
  if (uVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar1 == puVar2) {
    uVar9 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) goto LAB_00100e10;
    if (0xfffffffffffffff < uVar9) {
      uVar9 = 0xfffffffffffffff;
    }
    lVar10 = uVar9 * 8;
LAB_00100e1a:
    lVar7 = glslang::TPoolAllocator::allocate(*(ulong *)(param_1 + 0x18));
    *(TIntermSwitch **)(lVar7 + (long)puVar11) = this;
    lVar10 = lVar7 + lVar10;
    lVar8 = lVar7 + 8;
    if (puVar1 != puVar2) goto LAB_00100dbe;
  }
  else {
    uVar9 = uVar6 * 2;
    if (uVar9 < uVar6) {
LAB_00100e10:
      lVar10 = 0x7ffffffffffffff8;
      goto LAB_00100e1a;
    }
    if (uVar9 != 0) {
      if (0xfffffffffffffff < uVar9) {
        uVar9 = 0xfffffffffffffff;
      }
      lVar10 = uVar9 * 8;
      goto LAB_00100e1a;
    }
    *puVar11 = this;
    lVar7 = 0;
    lVar10 = 0;
LAB_00100dbe:
    lVar8 = 0;
    do {
      *(undefined8 *)(lVar7 + lVar8) = *(undefined8 *)((long)puVar2 + lVar8);
      lVar8 = lVar8 + 8;
    } while (lVar8 != (long)puVar1 - (long)puVar2);
    lVar8 = lVar7 + 8 + lVar8;
  }
  *(long *)(param_1 + 0x20) = lVar7;
  *(long *)(param_1 + 0x28) = lVar8;
  *(long *)(param_1 + 0x30) = lVar10;
LAB_00100cd3:
  if (param_1[0xb] == (TIntermTraverser)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 0x10))(*(long **)(this + 0x20),param_1);
    (**(code **)(**(long **)(this + 0x28) + 0x10))(*(long **)(this + 0x28),param_1);
  }
  else {
    (**(code **)(**(long **)(this + 0x28) + 0x10))(*(long **)(this + 0x28),param_1);
    (**(code **)(**(long **)(this + 0x20) + 0x10))(*(long **)(this + 0x20),param_1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
  if ((param_1[10] != (TIntermTraverser)0x0) &&
     (*(code **)(*(long *)param_1 + 0x50) != TIntermTraverser::visitSwitch)) {
                    /* WARNING: Could not recover jumptable at 0x00100e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x50))(param_1,2,this);
    return;
  }
  return;
}



/* glslang::TIntermAggregate::traverse(glslang::TIntermTraverser*) */

void __thiscall
glslang::TIntermAggregate::traverse(TIntermAggregate *this,TIntermTraverser *param_1)

{
  TIntermTraverser TVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  TIntermTraverser TVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  
  if (((param_1[8] != (TIntermTraverser)0x0) &&
      (*(code **)(*(long *)param_1 + 0x38) != TIntermTraverser::visitAggregate)) &&
     (cVar5 = (**(code **)(*(long *)param_1 + 0x38))(param_1,0,this), cVar5 == '\0')) {
    return;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar7;
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar7) {
    iVar4 = iVar7;
  }
  *(int *)(param_1 + 0x10) = iVar4;
  if (puVar2 == *(undefined8 **)(param_1 + 0x30)) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar14 = (undefined8 *)((long)puVar2 - (long)puVar3);
    uVar9 = (long)puVar14 >> 3;
    if (uVar9 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    if (puVar2 == puVar3) {
      uVar12 = uVar9 + 1;
      if (0xfffffffffffffffe < uVar9) goto LAB_0010112d;
      if (0xfffffffffffffff < uVar12) {
        uVar12 = 0xfffffffffffffff;
      }
      lVar15 = uVar12 * 8;
LAB_00101137:
      lVar10 = glslang::TPoolAllocator::allocate(*(ulong *)(param_1 + 0x18));
      *(TIntermAggregate **)(lVar10 + (long)puVar14) = this;
      lVar15 = lVar10 + lVar15;
      lVar11 = lVar10 + 8;
      if (puVar2 != puVar3) goto LAB_001010ce;
    }
    else {
      uVar12 = uVar9 * 2;
      if (uVar12 < uVar9) {
LAB_0010112d:
        lVar15 = 0x7ffffffffffffff8;
        goto LAB_00101137;
      }
      if (uVar12 != 0) {
        if (0xfffffffffffffff < uVar12) {
          uVar12 = 0xfffffffffffffff;
        }
        lVar15 = uVar12 * 8;
        goto LAB_00101137;
      }
      *puVar14 = this;
      lVar10 = 0;
      lVar15 = 0;
LAB_001010ce:
      lVar11 = 0;
      do {
        *(undefined8 *)(lVar10 + lVar11) = *(undefined8 *)((long)puVar3 + lVar11);
        lVar11 = lVar11 + 8;
      } while ((long)puVar2 - (long)puVar3 != lVar11);
      lVar11 = lVar10 + 8 + ((long)puVar2 - (long)puVar3);
    }
    *(long *)(param_1 + 0x20) = lVar10;
    *(long *)(param_1 + 0x28) = lVar11;
    *(long *)(param_1 + 0x30) = lVar15;
  }
  else {
    *puVar2 = this;
    *(undefined8 **)(param_1 + 0x28) = puVar2 + 1;
  }
  TVar6 = param_1[0xb];
  plVar13 = *(long **)(this + 200);
  plVar8 = *(long **)(this + 0xd0);
  if (TVar6 == (TIntermTraverser)0x0) {
    if (plVar13 == plVar8) goto LAB_00101018;
    TVar6 = (TIntermTraverser)0x1;
    do {
      (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,param_1);
      if (TVar6 == (TIntermTraverser)0x0) {
LAB_0010100b:
        plVar8 = *(long **)(this + 0xd0);
      }
      else {
        TVar1 = param_1[9];
        plVar8 = *(long **)(this + 0xd0);
        if (((TVar1 != (TIntermTraverser)0x0) && (TVar6 = TVar1, *plVar13 != plVar8[-1])) &&
           (*(code **)(*(long *)param_1 + 0x38) != TIntermTraverser::visitAggregate)) {
          TVar6 = (TIntermTraverser)(**(code **)(*(long *)param_1 + 0x38))(param_1,1,this);
          goto LAB_0010100b;
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar8 != plVar13);
  }
  else {
    if (plVar13 == plVar8) {
LAB_00101018:
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
      goto LAB_00101021;
    }
LAB_00100f5d:
    do {
      (**(code **)(*(long *)plVar8[-1] + 0x10))((long *)plVar8[-1],param_1);
      if (TVar6 != (TIntermTraverser)0x0) {
        TVar1 = param_1[9];
        if (((TVar1 == (TIntermTraverser)0x0) ||
            (TVar6 = TVar1, plVar8[-1] == **(long **)(this + 200))) ||
           (*(code **)(*(long *)param_1 + 0x38) == TIntermTraverser::visitAggregate)) {
          plVar8 = plVar8 + -1;
          if (plVar8 == *(long **)(this + 200)) break;
          goto LAB_00100f5d;
        }
        TVar6 = (TIntermTraverser)(**(code **)(*(long *)param_1 + 0x38))(param_1,1,this);
      }
      plVar8 = plVar8 + -1;
    } while (plVar8 != *(long **)(this + 200));
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
  if (TVar6 == (TIntermTraverser)0x0) {
    return;
  }
LAB_00101021:
  if ((param_1[10] != (TIntermTraverser)0x0) &&
     (*(code **)(*(long *)param_1 + 0x38) != TIntermTraverser::visitAggregate)) {
                    /* WARNING: Could not recover jumptable at 0x0010105b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x38))(param_1,2,this);
    return;
  }
  return;
}



/* glslang::TType::getTypeName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getTypeName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x78);
}



/* TIntermNode::getLoc() const */

TIntermNode * __thiscall TIntermNode::getLoc(TIntermNode *this)

{
  return this + 8;
}



/* TIntermNode::setLoc(glslang::TSourceLoc const&) */

void __thiscall TIntermNode::setLoc(TIntermNode *this,TSourceLoc *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* TIntermNode::getAsTyped() */

undefined8 TIntermNode::getAsTyped(void)

{
  return 0;
}



/* TIntermNode::getAsOperator() */

undefined8 TIntermNode::getAsOperator(void)

{
  return 0;
}



/* TIntermNode::getAsConstantUnion() */

undefined8 TIntermNode::getAsConstantUnion(void)

{
  return 0;
}



/* TIntermNode::getAsAggregate() */

undefined8 TIntermNode::getAsAggregate(void)

{
  return 0;
}



/* TIntermNode::getAsUnaryNode() */

undefined8 TIntermNode::getAsUnaryNode(void)

{
  return 0;
}



/* TIntermNode::getAsBinaryNode() */

undefined8 TIntermNode::getAsBinaryNode(void)

{
  return 0;
}



/* TIntermNode::getAsSelectionNode() */

undefined8 TIntermNode::getAsSelectionNode(void)

{
  return 0;
}



/* TIntermNode::getAsSwitchNode() */

undefined8 TIntermNode::getAsSwitchNode(void)

{
  return 0;
}



/* TIntermNode::getAsMethodNode() */

undefined8 TIntermNode::getAsMethodNode(void)

{
  return 0;
}



/* TIntermNode::getAsSymbolNode() */

undefined8 TIntermNode::getAsSymbolNode(void)

{
  return 0;
}



/* TIntermNode::getAsBranchNode() */

undefined8 TIntermNode::getAsBranchNode(void)

{
  return 0;
}



/* TIntermNode::getAsLoopNode() */

undefined8 TIntermNode::getAsLoopNode(void)

{
  return 0;
}



/* TIntermNode::getAsTyped() const */

undefined8 TIntermNode::getAsTyped(void)

{
  return 0;
}



/* TIntermNode::getAsOperator() const */

undefined8 TIntermNode::getAsOperator(void)

{
  return 0;
}



/* TIntermNode::getAsConstantUnion() const */

undefined8 TIntermNode::getAsConstantUnion(void)

{
  return 0;
}



/* TIntermNode::getAsAggregate() const */

undefined8 TIntermNode::getAsAggregate(void)

{
  return 0;
}



/* TIntermNode::getAsUnaryNode() const */

undefined8 TIntermNode::getAsUnaryNode(void)

{
  return 0;
}



/* TIntermNode::getAsBinaryNode() const */

undefined8 TIntermNode::getAsBinaryNode(void)

{
  return 0;
}



/* TIntermNode::getAsSelectionNode() const */

undefined8 TIntermNode::getAsSelectionNode(void)

{
  return 0;
}



/* TIntermNode::getAsSwitchNode() const */

undefined8 TIntermNode::getAsSwitchNode(void)

{
  return 0;
}



/* TIntermNode::getAsMethodNode() const */

undefined8 TIntermNode::getAsMethodNode(void)

{
  return 0;
}



/* TIntermNode::getAsSymbolNode() const */

undefined8 TIntermNode::getAsSymbolNode(void)

{
  return 0;
}



/* TIntermNode::getAsBranchNode() const */

undefined8 TIntermNode::getAsBranchNode(void)

{
  return 0;
}



/* TIntermNode::getAsLoopNode() const */

undefined8 TIntermNode::getAsLoopNode(void)

{
  return 0;
}



/* glslang::TIntermTyped::getAsTyped() */

TIntermTyped * __thiscall glslang::TIntermTyped::getAsTyped(TIntermTyped *this)

{
  return this;
}



/* glslang::TIntermTyped::getAsTyped() const */

TIntermTyped * __thiscall glslang::TIntermTyped::getAsTyped(TIntermTyped *this)

{
  return this;
}



/* glslang::TIntermTyped::getType() const */

TIntermTyped * __thiscall glslang::TIntermTyped::getType(TIntermTyped *this)

{
  return this + 0x20;
}



/* glslang::TIntermTyped::getWritableType() */

TIntermTyped * __thiscall glslang::TIntermTyped::getWritableType(TIntermTyped *this)

{
  return this + 0x20;
}



/* glslang::TIntermTyped::getBasicType() const */

TIntermTyped __thiscall glslang::TIntermTyped::getBasicType(TIntermTyped *this)

{
  return this[0x28];
}



/* glslang::TIntermTyped::getQualifier() */

TIntermTyped * __thiscall glslang::TIntermTyped::getQualifier(TIntermTyped *this)

{
  return this + 0x30;
}



/* glslang::TIntermTyped::getQualifier() const */

TIntermTyped * __thiscall glslang::TIntermTyped::getQualifier(TIntermTyped *this)

{
  return this + 0x30;
}



/* glslang::TIntermTyped::getArraySizes() */

undefined8 __thiscall glslang::TIntermTyped::getArraySizes(TIntermTyped *this)

{
  return *(undefined8 *)(this + 0x80);
}



/* glslang::TIntermTyped::getArraySizes() const */

undefined8 __thiscall glslang::TIntermTyped::getArraySizes(TIntermTyped *this)

{
  return *(undefined8 *)(this + 0x80);
}



/* glslang::TIntermTyped::getVectorSize() const */

byte __thiscall glslang::TIntermTyped::getVectorSize(TIntermTyped *this)

{
  return (byte)this[0x29] & 0xf;
}



/* glslang::TIntermTyped::getMatrixCols() const */

byte __thiscall glslang::TIntermTyped::getMatrixCols(TIntermTyped *this)

{
  return (byte)this[0x29] >> 4;
}



/* glslang::TIntermTyped::getMatrixRows() const */

byte __thiscall glslang::TIntermTyped::getMatrixRows(TIntermTyped *this)

{
  return (byte)this[0x2a] & 0xf;
}



/* glslang::TIntermTyped::isMatrix() const */

bool __thiscall glslang::TIntermTyped::isMatrix(TIntermTyped *this)

{
  return 0xf < (byte)this[0x29];
}



/* glslang::TIntermTyped::isArray() const */

bool __thiscall glslang::TIntermTyped::isArray(TIntermTyped *this)

{
  return *(long *)(this + 0x80) != 0;
}



/* glslang::TIntermTyped::isVector() const */

byte __thiscall glslang::TIntermTyped::isVector(TIntermTyped *this)

{
  if (1 < ((byte)this[0x29] & 0xf)) {
    return 1;
  }
  return (byte)this[0x2a] >> 4 & 1;
}



/* glslang::TIntermTyped::isStruct() const */

undefined4 __thiscall glslang::TIntermTyped::isStruct(TIntermTyped *this)

{
  return CONCAT31((int3)((byte)this[0x28] - 0xf >> 8),(byte)((byte)this[0x28] - 0xf) < 2);
}



/* glslang::TIntermTyped::isFloatingDomain() const */

undefined4 __thiscall glslang::TIntermTyped::isFloatingDomain(TIntermTyped *this)

{
  return CONCAT31((int3)((byte)this[0x28] - 1 >> 8),(byte)((byte)this[0x28] - 1) < 3);
}



/* glslang::TIntermTyped::isIntegerDomain() const */

bool __thiscall glslang::TIntermTyped::isIntegerDomain(TIntermTyped *this)

{
  TIntermTyped TVar1;
  
  TVar1 = this[0x28];
  if ((byte)TVar1 < 0xc) {
    return 3 < (byte)TVar1;
  }
  return TVar1 == (TIntermTyped)0xd;
}



/* glslang::TIntermLoop::getAsLoopNode() */

TIntermLoop * __thiscall glslang::TIntermLoop::getAsLoopNode(TIntermLoop *this)

{
  return this;
}



/* glslang::TIntermLoop::getAsLoopNode() const */

TIntermLoop * __thiscall glslang::TIntermLoop::getAsLoopNode(TIntermLoop *this)

{
  return this;
}



/* glslang::TIntermBranch::getAsBranchNode() */

TIntermBranch * __thiscall glslang::TIntermBranch::getAsBranchNode(TIntermBranch *this)

{
  return this;
}



/* glslang::TIntermBranch::getAsBranchNode() const */

TIntermBranch * __thiscall glslang::TIntermBranch::getAsBranchNode(TIntermBranch *this)

{
  return this;
}



/* glslang::TIntermMethod::getAsMethodNode() */

TIntermMethod * __thiscall glslang::TIntermMethod::getAsMethodNode(TIntermMethod *this)

{
  return this;
}



/* glslang::TIntermMethod::getAsMethodNode() const */

TIntermMethod * __thiscall glslang::TIntermMethod::getAsMethodNode(TIntermMethod *this)

{
  return this;
}



/* glslang::TIntermMethod::getMethodName[abi:cxx11]() const */

TIntermMethod * __thiscall glslang::TIntermMethod::getMethodName_abi_cxx11_(TIntermMethod *this)

{
  return this + 0xc0;
}



/* glslang::TIntermMethod::getObject() const */

undefined8 __thiscall glslang::TIntermMethod::getObject(TIntermMethod *this)

{
  return *(undefined8 *)(this + 0xb8);
}



/* glslang::TIntermSymbol::getId() const */

undefined8 __thiscall glslang::TIntermSymbol::getId(TIntermSymbol *this)

{
  return *(undefined8 *)(this + 0xb8);
}



/* glslang::TIntermSymbol::changeId(long long) */

void __thiscall glslang::TIntermSymbol::changeId(TIntermSymbol *this,longlong param_1)

{
  *(longlong *)(this + 0xb8) = param_1;
  return;
}



/* glslang::TIntermSymbol::getName[abi:cxx11]() const */

TIntermSymbol * __thiscall glslang::TIntermSymbol::getName_abi_cxx11_(TIntermSymbol *this)

{
  return this + 200;
}



/* glslang::TIntermSymbol::getAsSymbolNode() */

TIntermSymbol * __thiscall glslang::TIntermSymbol::getAsSymbolNode(TIntermSymbol *this)

{
  return this;
}



/* glslang::TIntermSymbol::getAsSymbolNode() const */

TIntermSymbol * __thiscall glslang::TIntermSymbol::getAsSymbolNode(TIntermSymbol *this)

{
  return this;
}



/* glslang::TIntermSymbol::switchId(long long) */

void __thiscall glslang::TIntermSymbol::switchId(TIntermSymbol *this,longlong param_1)

{
  *(longlong *)(this + 0xb8) = param_1;
  return;
}



/* glslang::TIntermConstantUnion::getAsConstantUnion() */

TIntermConstantUnion * __thiscall
glslang::TIntermConstantUnion::getAsConstantUnion(TIntermConstantUnion *this)

{
  return this;
}



/* glslang::TIntermConstantUnion::getAsConstantUnion() const */

TIntermConstantUnion * __thiscall
glslang::TIntermConstantUnion::getAsConstantUnion(TIntermConstantUnion *this)

{
  return this;
}



/* glslang::TIntermOperator::getAsOperator() */

TIntermOperator * __thiscall glslang::TIntermOperator::getAsOperator(TIntermOperator *this)

{
  return this;
}



/* glslang::TIntermOperator::getAsOperator() const */

TIntermOperator * __thiscall glslang::TIntermOperator::getAsOperator(TIntermOperator *this)

{
  return this;
}



/* glslang::TIntermBinary::setLeft(glslang::TIntermTyped*) */

void __thiscall glslang::TIntermBinary::setLeft(TIntermBinary *this,TIntermTyped *param_1)

{
  *(TIntermTyped **)(this + 0xc0) = param_1;
  return;
}



/* glslang::TIntermBinary::setRight(glslang::TIntermTyped*) */

void __thiscall glslang::TIntermBinary::setRight(TIntermBinary *this,TIntermTyped *param_1)

{
  *(TIntermTyped **)(this + 200) = param_1;
  return;
}



/* glslang::TIntermBinary::getLeft() const */

undefined8 __thiscall glslang::TIntermBinary::getLeft(TIntermBinary *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermBinary::getRight() const */

undefined8 __thiscall glslang::TIntermBinary::getRight(TIntermBinary *this)

{
  return *(undefined8 *)(this + 200);
}



/* glslang::TIntermBinary::getAsBinaryNode() */

TIntermBinary * __thiscall glslang::TIntermBinary::getAsBinaryNode(TIntermBinary *this)

{
  return this;
}



/* glslang::TIntermBinary::getAsBinaryNode() const */

TIntermBinary * __thiscall glslang::TIntermBinary::getAsBinaryNode(TIntermBinary *this)

{
  return this;
}



/* glslang::TIntermUnary::setOperand(glslang::TIntermTyped*) */

void __thiscall glslang::TIntermUnary::setOperand(TIntermUnary *this,TIntermTyped *param_1)

{
  *(TIntermTyped **)(this + 0xc0) = param_1;
  return;
}



/* glslang::TIntermUnary::getOperand() */

undefined8 __thiscall glslang::TIntermUnary::getOperand(TIntermUnary *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermUnary::getOperand() const */

undefined8 __thiscall glslang::TIntermUnary::getOperand(TIntermUnary *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermUnary::getAsUnaryNode() */

TIntermUnary * __thiscall glslang::TIntermUnary::getAsUnaryNode(TIntermUnary *this)

{
  return this;
}



/* glslang::TIntermUnary::getAsUnaryNode() const */

TIntermUnary * __thiscall glslang::TIntermUnary::getAsUnaryNode(TIntermUnary *this)

{
  return this;
}



/* glslang::TIntermSelection::getCondition() const */

undefined8 __thiscall glslang::TIntermSelection::getCondition(TIntermSelection *this)

{
  return *(undefined8 *)(this + 0xb8);
}



/* glslang::TIntermSelection::setCondition(glslang::TIntermTyped*) */

void __thiscall
glslang::TIntermSelection::setCondition(TIntermSelection *this,TIntermTyped *param_1)

{
  *(TIntermTyped **)(this + 0xb8) = param_1;
  return;
}



/* glslang::TIntermSelection::getTrueBlock() const */

undefined8 __thiscall glslang::TIntermSelection::getTrueBlock(TIntermSelection *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermSelection::setTrueBlock(glslang::TIntermTyped*) */

void __thiscall
glslang::TIntermSelection::setTrueBlock(TIntermSelection *this,TIntermTyped *param_1)

{
  *(TIntermTyped **)(this + 0xc0) = param_1;
  return;
}



/* glslang::TIntermSelection::getFalseBlock() const */

undefined8 __thiscall glslang::TIntermSelection::getFalseBlock(TIntermSelection *this)

{
  return *(undefined8 *)(this + 200);
}



/* glslang::TIntermSelection::setFalseBlock(glslang::TIntermTyped*) */

void __thiscall
glslang::TIntermSelection::setFalseBlock(TIntermSelection *this,TIntermTyped *param_1)

{
  *(TIntermTyped **)(this + 200) = param_1;
  return;
}



/* glslang::TIntermSelection::getAsSelectionNode() */

TIntermSelection * __thiscall glslang::TIntermSelection::getAsSelectionNode(TIntermSelection *this)

{
  return this;
}



/* glslang::TIntermSelection::getAsSelectionNode() const */

TIntermSelection * __thiscall glslang::TIntermSelection::getAsSelectionNode(TIntermSelection *this)

{
  return this;
}



/* glslang::TIntermSwitch::getCondition() const */

undefined8 __thiscall glslang::TIntermSwitch::getCondition(TIntermSwitch *this)

{
  return *(undefined8 *)(this + 0x20);
}



/* glslang::TIntermSwitch::getBody() const */

undefined8 __thiscall glslang::TIntermSwitch::getBody(TIntermSwitch *this)

{
  return *(undefined8 *)(this + 0x28);
}



/* glslang::TIntermSwitch::getAsSwitchNode() */

TIntermSwitch * __thiscall glslang::TIntermSwitch::getAsSwitchNode(TIntermSwitch *this)

{
  return this;
}



/* glslang::TIntermSwitch::getAsSwitchNode() const */

TIntermSwitch * __thiscall glslang::TIntermSwitch::getAsSwitchNode(TIntermSwitch *this)

{
  return this;
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



/* glslang::TIntermSwitch::~TIntermSwitch() */

void __thiscall glslang::TIntermSwitch::~TIntermSwitch(TIntermSwitch *this)

{
  return;
}



/* glslang::TIntermBranch::~TIntermBranch() */

void __thiscall glslang::TIntermBranch::~TIntermBranch(TIntermBranch *this)

{
  return;
}



/* glslang::TIntermLoop::~TIntermLoop() */

void __thiscall glslang::TIntermLoop::~TIntermLoop(TIntermLoop *this)

{
  return;
}



/* glslang::TIntermSelection::~TIntermSelection() */

void __thiscall glslang::TIntermSelection::~TIntermSelection(TIntermSelection *this)

{
  return;
}



/* glslang::TIntermBinary::~TIntermBinary() */

void __thiscall glslang::TIntermBinary::~TIntermBinary(TIntermBinary *this)

{
  return;
}



/* glslang::TIntermConstantUnion::~TIntermConstantUnion() */

void __thiscall glslang::TIntermConstantUnion::~TIntermConstantUnion(TIntermConstantUnion *this)

{
  return;
}



/* glslang::TIntermUnary::~TIntermUnary() */

void __thiscall glslang::TIntermUnary::~TIntermUnary(TIntermUnary *this)

{
  return;
}



/* glslang::TIntermSymbol::~TIntermSymbol() */

void __thiscall glslang::TIntermSymbol::~TIntermSymbol(TIntermSymbol *this)

{
  return;
}



/* glslang::TIntermMethod::~TIntermMethod() */

void __thiscall glslang::TIntermMethod::~TIntermMethod(TIntermMethod *this)

{
  return;
}



/* glslang::TIntermTyped::setType(glslang::TType const&) */

void __thiscall glslang::TIntermTyped::setType(TIntermTyped *this,TType *param_1)

{
  TType TVar1;
  TIntermTyped TVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  *(TType *)(this + 0x28) = param_1[8];
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0xa0) = uVar3;
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x48) = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x58) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x68) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x78) = uVar4;
  TVar1 = param_1[9];
  this[0x29] = (TIntermTyped)((byte)this[0x29] & 0xf0 | (byte)TVar1 & 0xf);
  this[0x29] = (TIntermTyped)((byte)TVar1 & 0xf | (byte)param_1[9] & 0xf0);
  TVar2 = this[0x2a];
  bVar7 = (byte)param_1[10] & 0xf;
  this[0x2a] = (TIntermTyped)((byte)TVar2 & 0xf0 | bVar7);
  bVar8 = (byte)param_1[10] & 0x10;
  this[0x2a] = (TIntermTyped)((byte)TVar2 & 0xe0 | bVar7 | bVar8);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x90) = uVar5;
  *(undefined8 *)(this + 0x98) = uVar6;
  *(undefined8 *)(this + 0x88) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0xb0) = uVar4;
  TVar1 = param_1[10];
  this[0x2a] = (TIntermTyped)((byte)TVar2 & 0xc0 | bVar7 | bVar8 | (byte)TVar1 & 0x20);
  this[0x2a] = (TIntermTyped)
               ((byte)TVar2 & 0x80 | bVar7 | bVar8 | (byte)TVar1 & 0x20 | (byte)param_1[10] & 0x40);
  *(ushort *)(this + 0x2a) = *(ushort *)(this + 0x2a) & 0xfc7f | *(ushort *)(param_1 + 10) & 0x380;
  this[0x2b] = (TIntermTyped)((byte)this[0x2b] & 0xfb | (byte)param_1[0xb] & 4);
  return;
}



/* glslang::TIntermTyped::isScalar() const */

bool __thiscall glslang::TIntermTyped::isScalar(TIntermTyped *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (((byte)this[0x29] & 0xf) < 2) {
    bVar1 = (bool)((byte)this[0x2a] >> 4 & 1);
    if (((byte)this[0x2a] >> 4 & 1) != 0) {
      return false;
    }
    if (((byte)this[0x29] < 0x10) && (1 < (byte)((char)this[0x28] - 0xfU))) {
      return *(long *)(this + 0x80) == 0;
    }
  }
  return bVar1;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermMethod::~TIntermMethod() */

void __thiscall glslang::TIntermMethod::~TIntermMethod(TIntermMethod *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermSymbol::~TIntermSymbol() */

void __thiscall glslang::TIntermSymbol::~TIntermSymbol(TIntermSymbol *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermUnary::~TIntermUnary() */

void __thiscall glslang::TIntermUnary::~TIntermUnary(TIntermUnary *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermConstantUnion::~TIntermConstantUnion() */

void __thiscall glslang::TIntermConstantUnion::~TIntermConstantUnion(TIntermConstantUnion *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermBinary::~TIntermBinary() */

void __thiscall glslang::TIntermBinary::~TIntermBinary(TIntermBinary *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermSelection::~TIntermSelection() */

void __thiscall glslang::TIntermSelection::~TIntermSelection(TIntermSelection *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermLoop::~TIntermLoop() */

void __thiscall glslang::TIntermLoop::~TIntermLoop(TIntermLoop *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermBranch::~TIntermBranch() */

void __thiscall glslang::TIntermBranch::~TIntermBranch(TIntermBranch *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermSwitch::~TIntermSwitch() */

void __thiscall glslang::TIntermSwitch::~TIntermSwitch(TIntermSwitch *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


