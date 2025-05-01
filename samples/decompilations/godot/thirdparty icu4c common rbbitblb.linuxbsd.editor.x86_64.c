
/* icu_76_godot::RBBITableBuilder::RBBITableBuilder(icu_76_godot::RBBIRuleBuilder*,
   icu_76_godot::RBBINode**, UErrorCode&) */

void __thiscall
icu_76_godot::RBBITableBuilder::RBBITableBuilder
          (RBBITableBuilder *this,RBBIRuleBuilder *param_1,RBBINode **param_2,UErrorCode *param_3)

{
  int iVar1;
  UVector *this_00;
  
  *(RBBINode ***)(this + 8) = param_2;
  iVar1 = *(int *)param_3;
  *(RBBIRuleBuilder **)this = param_1;
  *(UErrorCode **)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  if (iVar1 < 1) {
    this_00 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)param_1);
    if (this_00 != (UVector *)0x0) {
      icu_76_godot::UVector::UVector(this_00,param_3);
      *(UVector **)(this + 0x18) = this_00;
      return;
    }
    iVar1 = *(int *)param_3;
    *(undefined8 *)(this + 0x18) = 0;
    if (iVar1 < 1) {
      *(undefined4 *)param_3 = 7;
    }
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::calcNullable(icu_76_godot::RBBINode*) */

void __thiscall
icu_76_godot::RBBITableBuilder::calcNullable(RBBITableBuilder *this,RBBINode *param_1)

{
  int iVar1;
  RBBINode RVar2;
  
  if (param_1 == (RBBINode *)0x0) {
    return;
  }
  iVar1 = *(int *)param_1;
  if ((iVar1 == 0) || (iVar1 == 6)) {
LAB_001000e0:
    param_1[0x78] = (RBBINode)0x0;
    return;
  }
  if (iVar1 - 4U < 2) {
LAB_001000d5:
    param_1[0x78] = (RBBINode)0x1;
    return;
  }
  calcNullable(this,*(RBBINode **)(param_1 + 0x10));
  calcNullable(this,*(RBBINode **)(param_1 + 0x18));
  iVar1 = *(int *)param_1;
  if (iVar1 == 9) {
    RVar2 = (RBBINode)0x1;
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x78) != '\0') goto LAB_00100107;
  }
  else {
    if (iVar1 != 8) {
      if ((iVar1 - 10U & 0xfffffffd) != 0) goto LAB_001000e0;
      goto LAB_001000d5;
    }
    RVar2 = *(RBBINode *)(*(long *)(param_1 + 0x10) + 0x78);
    if (RVar2 == (RBBINode)0x0) goto LAB_00100107;
  }
  RVar2 = (RBBINode)(*(char *)(*(long *)(param_1 + 0x18) + 0x78) != '\0');
LAB_00100107:
  param_1[0x78] = RVar2;
  return;
}



/* icu_76_godot::RBBITableBuilder::addRuleRootNodes(icu_76_godot::UVector*, icu_76_godot::RBBINode*)
    */

void __thiscall
icu_76_godot::RBBITableBuilder::addRuleRootNodes
          (RBBITableBuilder *this,UVector *param_1,RBBINode *param_2)

{
  if (param_2 == (RBBINode *)0x0) {
    return;
  }
  while( true ) {
    if (0 < **(int **)(this + 0x10)) {
      return;
    }
    if (((UErrorCode *)param_2)[0x81] != (UErrorCode)0x0) break;
    addRuleRootNodes(this,param_1,*(RBBINode **)((UErrorCode *)param_2 + 0x10));
    param_2 = *(RBBINode **)((UErrorCode *)param_2 + 0x18);
    if (param_2 == (RBBINode *)0x0) {
      return;
    }
  }
  icu_76_godot::UVector::addElement(param_1,(UErrorCode *)param_2);
  return;
}



/* icu_76_godot::RBBITableBuilder::mapLookAheadRules() */

void icu_76_godot::RBBITableBuilder::mapLookAheadRules(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UErrorCode *pUVar4;
  int iVar5;
  UVector32 *this;
  long lVar6;
  int *piVar7;
  bool bVar8;
  ulong in_RSI;
  long in_RDI;
  long lVar9;
  int iVar10;
  int iVar11;
  
  this = (UVector32 *)icu_76_godot::UMemory::operator_new((UMemory *)0x20,in_RSI);
  if (this == (UVector32 *)0x0) {
    *(undefined8 *)(in_RDI + 0x28) = 0;
    **(undefined4 **)(in_RDI + 0x10) = 7;
  }
  else {
    pUVar4 = *(UErrorCode **)(in_RDI + 0x10);
    iVar5 = icu_76_godot::RBBIRuleScanner::numRules();
    icu_76_godot::UVector32::UVector32(this,iVar5 + 1,pUVar4);
    *(UVector32 **)(in_RDI + 0x28) = this;
    if (**(int **)(in_RDI + 0x10) < 1) {
      icu_76_godot::RBBIRuleScanner::numRules();
      icu_76_godot::UVector32::setSize((int)this);
      lVar9 = *(long *)(in_RDI + 0x18);
      if (0 < *(int *)(lVar9 + 8)) {
        iVar5 = 0;
        do {
          lVar6 = icu_76_godot::UVector::elementAt((int)lVar9);
          lVar9 = *(long *)(lVar6 + 0x20);
          if (0 < *(int *)(lVar9 + 8)) {
            iVar11 = 0;
            bVar8 = false;
            iVar10 = 0;
            do {
              piVar7 = (int *)icu_76_godot::UVector::elementAt((int)lVar9);
              iVar3 = iVar10;
              if (*piVar7 == 4) {
                iVar1 = piVar7[0x1f];
                bVar8 = true;
                if (-1 < iVar1) {
                  iVar2 = *(int *)(*(long *)(in_RDI + 0x28) + 8);
                  if ((0 < iVar2) && (iVar1 < iVar2)) {
                    iVar3 = *(int *)(*(long *)(*(long *)(in_RDI + 0x28) + 0x18) + (long)iVar1 * 4);
                    bVar8 = iVar3 != 0 && iVar10 == 0;
                    if (iVar3 == 0 || iVar10 != 0) {
                      bVar8 = true;
                      iVar3 = iVar10;
                    }
                  }
                }
              }
              iVar10 = iVar3;
              lVar9 = *(long *)(lVar6 + 0x20);
              iVar11 = iVar11 + 1;
              iVar3 = *(int *)(lVar9 + 8);
            } while (iVar11 < iVar3);
            if (bVar8) {
              if (iVar10 == 0) {
                iVar10 = *(int *)(in_RDI + 0x30) + 1;
                *(int *)(in_RDI + 0x30) = iVar10;
              }
              if (0 < iVar3) {
                iVar11 = 0;
                do {
                  piVar7 = (int *)icu_76_godot::UVector::elementAt((int)lVar9);
                  if (*piVar7 == 4) {
                    icu_76_godot::UVector32::setElementAt
                              ((int)*(undefined8 *)(in_RDI + 0x28),iVar10);
                  }
                  lVar9 = *(long *)(lVar6 + 0x20);
                  iVar11 = iVar11 + 1;
                } while (iVar11 < *(int *)(lVar9 + 8));
              }
            }
          }
          lVar9 = *(long *)(in_RDI + 0x18);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar9 + 8));
        return;
      }
    }
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::mergeRuleStatusVals() */

void __thiscall icu_76_godot::RBBITableBuilder::mergeRuleStatusVals(RBBITableBuilder *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int local_44;
  
  if (*(int *)(*(long *)(*(long *)this + 0xb8) + 8) == 0) {
    icu_76_godot::UVector::addElement((int)*(long *)(*(long *)this + 0xb8),(UErrorCode *)0x1);
    icu_76_godot::UVector::addElement((int)*(undefined8 *)(*(long *)this + 0xb8),(UErrorCode *)0x0);
  }
  lVar9 = *(long *)(this + 0x18);
  local_44 = 0;
  if (0 < *(int *)(lVar9 + 8)) {
    do {
      lVar7 = icu_76_godot::UVector::elementAt((int)lVar9);
      lVar9 = *(long *)(lVar7 + 0x10);
      if (lVar9 == 0) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
      }
      else {
        *(undefined4 *)(lVar7 + 0x18) = 0xffffffff;
        lVar10 = *(long *)(*(long *)this + 0xb8);
        iVar8 = *(int *)(lVar10 + 8);
        if (0 < iVar8) {
          iVar8 = 0;
          do {
            iVar2 = icu_76_godot::UVector::elementAti((int)lVar10);
            iVar4 = *(int *)(lVar9 + 8);
            iVar2 = iVar8 + 1 + iVar2;
            iVar3 = icu_76_godot::UVector::elementAti((int)*(undefined8 *)(*(long *)this + 0xb8));
            if (iVar3 == iVar4) {
              iVar4 = *(int *)(lVar9 + 8);
              iVar3 = 0;
              if (0 < iVar4) {
                do {
                  iVar4 = icu_76_godot::UVector::elementAti((int)lVar9);
                  iVar5 = icu_76_godot::UVector::elementAti
                                    ((int)*(undefined8 *)(*(long *)this + 0xb8));
                  if (iVar4 != iVar5) {
                    iVar4 = *(int *)(lVar9 + 8);
                    break;
                  }
                  iVar4 = *(int *)(lVar9 + 8);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar4);
              }
              if (iVar4 == iVar3) {
                *(int *)(lVar7 + 0x18) = iVar8;
                goto joined_r0x001004a4;
              }
            }
            lVar10 = *(long *)(*(long *)this + 0xb8);
            iVar8 = iVar2;
          } while (iVar2 < *(int *)(lVar10 + 8));
          iVar8 = *(int *)(lVar7 + 0x18);
joined_r0x001004a4:
          if (iVar8 != -1) goto LAB_001004b0;
          lVar10 = *(long *)(*(long *)this + 0xb8);
          iVar8 = *(int *)(lVar10 + 8);
        }
        uVar6 = *(uint *)(lVar9 + 8);
        *(int *)(lVar7 + 0x18) = iVar8;
        icu_76_godot::UVector::addElement((int)lVar10,(UErrorCode *)(ulong)uVar6);
        if (0 < *(int *)(lVar9 + 8)) {
          iVar8 = 0;
          do {
            iVar8 = iVar8 + 1;
            uVar1 = *(undefined8 *)(*(long *)this + 0xb8);
            uVar6 = icu_76_godot::UVector::elementAti((int)lVar9);
            icu_76_godot::UVector::addElement((int)uVar1,(UErrorCode *)(ulong)uVar6);
          } while (iVar8 < *(int *)(lVar9 + 8));
        }
      }
LAB_001004b0:
      lVar9 = *(long *)(this + 0x18);
      local_44 = local_44 + 1;
    } while (local_44 < *(int *)(lVar9 + 8));
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::sortedAdd(icu_76_godot::UVector**, int) */

void __thiscall
icu_76_godot::RBBITableBuilder::sortedAdd(RBBITableBuilder *this,UVector **param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  UVector *this_00;
  uint uVar3;
  
  this_00 = *param_1;
  if (this_00 == (UVector *)0x0) {
    this_00 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)param_1);
    if (this_00 == (UVector *)0x0) {
      *param_1 = (UVector *)0x0;
      return;
    }
    icu_76_godot::UVector::UVector(this_00,*(UErrorCode **)(this + 0x10));
    *param_1 = this_00;
  }
  if (0 < **(int **)(this + 0x10)) {
    return;
  }
  uVar1 = *(uint *)(this_00 + 8);
  uVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = icu_76_godot::UVector::elementAti((int)this_00);
      if (iVar2 == param_2) {
        return;
      }
    } while ((iVar2 <= param_2) && (uVar3 = uVar3 + 1, uVar3 != uVar1));
  }
  icu_76_godot::UVector::insertElementAt((int)this_00,param_2,(UErrorCode *)(ulong)uVar3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100998) */
/* icu_76_godot::RBBITableBuilder::setAdd(icu_76_godot::UVector*, icu_76_godot::UVector*) */

void __thiscall
icu_76_godot::RBBITableBuilder::setAdd(RBBITableBuilder *this,UVector *param_1,UVector *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  long in_FS_OFFSET;
  long local_180;
  long *local_168;
  long local_158 [16];
  long *local_d8;
  int local_d0;
  char local_cc;
  long local_c8 [17];
  long local_40;
  
  iVar10 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = local_c8;
  bVar2 = false;
  local_d0 = 0x10;
  local_cc = '\0';
  if (iVar10 < 0x11) {
    local_168 = local_158;
    if (iVar5 < 0x11) goto LAB_001006d1;
LAB_001008d8:
    local_180 = (long)iVar5 << 3;
    plVar8 = (long *)uprv_malloc_76_godot(local_180);
    plVar3 = local_168;
    if (plVar8 == (long *)0x0) goto joined_r0x00100948;
    if (local_cc != '\0') {
      uprv_free_76_godot(local_d8);
    }
    local_cc = '\x01';
    local_d8 = plVar8;
    local_d0 = iVar5;
  }
  else {
    local_168 = (long *)uprv_malloc_76_godot((long)iVar10 * 8);
    plVar3 = local_158;
    if (local_168 == (long *)0x0) goto joined_r0x00100948;
    bVar2 = true;
    if (local_d0 < iVar5) {
      plVar3 = local_168;
      if (iVar5 < 1) goto joined_r0x00100948;
      goto LAB_001008d8;
    }
LAB_001006d1:
    local_180 = (long)iVar5 << 3;
  }
  plVar8 = local_d8;
  icu_76_godot::UVector::toArray((void **)param_1);
  icu_76_godot::UVector::toArray((void **)param_2);
  icu_76_godot::UVector::setSize((int)param_1,(UErrorCode *)(ulong)(uint)(iVar10 + iVar5));
  plVar3 = local_168;
  if (**(int **)(this + 0x10) < 1) {
    plVar9 = local_168 + iVar10;
    uVar11 = 0;
    plVar12 = (long *)(local_180 + (long)plVar8);
    uVar4 = uVar11;
    if ((plVar8 < plVar12) && (uVar4 = 0, local_168 < plVar9)) {
      do {
        lVar1 = *plVar8;
        uVar11 = uVar11 + 1;
        iVar10 = (int)*local_168;
        if (*local_168 == lVar1) {
          icu_76_godot::UVector::setElementAt(param_1,iVar10);
          local_168 = local_168 + 1;
LAB_0010075a:
          plVar8 = plVar8 + 1;
        }
        else {
          iVar5 = memcmp(local_168,plVar8,8);
          if (-1 < iVar5) {
            icu_76_godot::UVector::setElementAt(param_1,(int)lVar1);
            goto LAB_0010075a;
          }
          local_168 = local_168 + 1;
          icu_76_godot::UVector::setElementAt(param_1,iVar10);
        }
        uVar4 = uVar11;
        if (plVar12 <= plVar8) goto LAB_001007c3;
      } while (local_168 < plVar9);
    }
    else {
LAB_001007c3:
      uVar11 = uVar4;
      plVar6 = local_168;
      if (local_168 < plVar9) {
        do {
          plVar7 = plVar6 + 1;
          icu_76_godot::UVector::setElementAt(param_1,(int)*plVar6);
          plVar6 = plVar7;
        } while (plVar7 < plVar9);
        uVar11 = uVar11 + 1 + (int)((ulong)((long)plVar9 + (-1 - (long)local_168)) >> 3);
      }
    }
    plVar9 = plVar8;
    if (plVar8 < plVar12) {
      do {
        plVar6 = plVar9 + 1;
        icu_76_godot::UVector::setElementAt(param_1,(int)*plVar9);
        plVar9 = plVar6;
      } while (plVar6 < plVar12);
      uVar11 = uVar11 + 1 + (int)((ulong)((long)plVar12 + (-1 - (long)plVar8)) >> 3);
    }
    icu_76_godot::UVector::setSize((int)param_1,(UErrorCode *)(ulong)uVar11);
  }
joined_r0x00100948:
  if (local_cc != '\0') {
    uprv_free_76_godot(local_d8);
  }
  if (bVar2) {
    uprv_free_76_godot(plVar3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::calcFirstPos(icu_76_godot::RBBINode*) */

void __thiscall
icu_76_godot::RBBITableBuilder::calcFirstPos(RBBITableBuilder *this,RBBINode *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == (RBBINode *)0x0) {
    return;
  }
  if (3 < *(int *)param_1 - 3U) {
    calcFirstPos(this,*(RBBINode **)(param_1 + 0x10));
    calcFirstPos(this,*(RBBINode **)(param_1 + 0x18));
    iVar1 = *(int *)param_1;
    if (iVar1 == 9) {
      setAdd(this,*(UVector **)(param_1 + 0x88),*(UVector **)(*(long *)(param_1 + 0x10) + 0x88));
      lVar2 = *(long *)(param_1 + 0x18);
    }
    else if (iVar1 == 8) {
      setAdd(this,*(UVector **)(param_1 + 0x88),*(UVector **)(*(long *)(param_1 + 0x10) + 0x88));
      if (*(char *)(*(long *)(param_1 + 0x10) + 0x78) == '\0') {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x18);
    }
    else {
      if (2 < iVar1 - 10U) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x10);
    }
    setAdd(this,*(UVector **)(param_1 + 0x88),*(UVector **)(lVar2 + 0x88));
    return;
  }
  icu_76_godot::UVector::addElement(*(void **)(param_1 + 0x88),(UErrorCode *)param_1);
  return;
}



/* icu_76_godot::RBBITableBuilder::calcLastPos(icu_76_godot::RBBINode*) */

void __thiscall
icu_76_godot::RBBITableBuilder::calcLastPos(RBBITableBuilder *this,RBBINode *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == (RBBINode *)0x0) {
    return;
  }
  if (3 < *(int *)param_1 - 3U) {
    calcLastPos(this,*(RBBINode **)(param_1 + 0x10));
    calcLastPos(this,*(RBBINode **)(param_1 + 0x18));
    iVar1 = *(int *)param_1;
    if (iVar1 == 9) {
      setAdd(this,*(UVector **)(param_1 + 0x90),*(UVector **)(*(long *)(param_1 + 0x10) + 0x90));
      lVar2 = *(long *)(param_1 + 0x18);
    }
    else {
      if (iVar1 == 8) {
        setAdd(this,*(UVector **)(param_1 + 0x90),*(UVector **)(*(long *)(param_1 + 0x18) + 0x90));
        if (*(char *)(*(long *)(param_1 + 0x18) + 0x78) == '\0') {
          return;
        }
      }
      else if (2 < iVar1 - 10U) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x10);
    }
    setAdd(this,*(UVector **)(param_1 + 0x90),*(UVector **)(lVar2 + 0x90));
    return;
  }
  icu_76_godot::UVector::addElement(*(void **)(param_1 + 0x90),(UErrorCode *)param_1);
  return;
}



/* icu_76_godot::RBBITableBuilder::calcFollowPos(icu_76_godot::RBBINode*) [clone .part.0] */

void __thiscall
icu_76_godot::RBBITableBuilder::calcFollowPos(RBBITableBuilder *this,RBBINode *param_1)

{
  RBBINode *pRVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  pRVar1 = *(RBBINode **)(param_1 + 0x10);
  if (((pRVar1 != (RBBINode *)0x0) && (*(int *)pRVar1 != 6)) && (*(int *)pRVar1 != 3)) {
    calcFollowPos(this,pRVar1);
  }
  pRVar1 = *(RBBINode **)(param_1 + 0x18);
  if (((pRVar1 != (RBBINode *)0x0) && (*(int *)pRVar1 != 6)) && (*(int *)pRVar1 != 3)) {
    calcFollowPos(this,pRVar1);
  }
  iVar2 = *(int *)param_1;
  if (iVar2 == 8) {
    uVar5 = 0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
    if (*(int *)(lVar3 + 8) == 0) {
      return;
    }
    do {
      uVar5 = uVar5 + 1;
      lVar4 = icu_76_godot::UVector::elementAt((int)lVar3);
      setAdd(this,*(UVector **)(lVar4 + 0x98),*(UVector **)(*(long *)(param_1 + 0x18) + 0x88));
    } while (uVar5 < *(uint *)(lVar3 + 8));
    iVar2 = *(int *)param_1;
  }
  if ((iVar2 - 10U < 2) && (lVar3 = *(long *)(param_1 + 0x90), *(int *)(lVar3 + 8) != 0)) {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      lVar3 = icu_76_godot::UVector::elementAt((int)lVar3);
      setAdd(this,*(UVector **)(lVar3 + 0x98),*(UVector **)(param_1 + 0x88));
      lVar3 = *(long *)(param_1 + 0x90);
    } while (uVar5 < *(uint *)(lVar3 + 8));
    return;
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::calcFollowPos(icu_76_godot::RBBINode*) */

void __thiscall
icu_76_godot::RBBITableBuilder::calcFollowPos(RBBITableBuilder *this,RBBINode *param_1)

{
  if (((param_1 != (RBBINode *)0x0) && (*(int *)param_1 != 6)) && (*(int *)param_1 != 3)) {
    calcFollowPos(this,param_1);
    return;
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::bofFixup() */

void __thiscall icu_76_godot::RBBITableBuilder::bofFixup(RBBITableBuilder *this)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  if (**(int **)(this + 0x10) < 1) {
    lVar1 = *(long *)(*(long *)(**(long **)(this + 8) + 0x10) + 0x10);
    lVar2 = *(long *)(*(long *)(*(long *)(**(long **)(this + 8) + 0x10) + 0x18) + 0x88);
    if (0 < *(int *)(lVar2 + 8)) {
      iVar4 = 0;
      do {
        piVar3 = (int *)icu_76_godot::UVector::elementAt((int)lVar2);
        if ((*piVar3 == 3) && (piVar3[0x1f] == *(int *)(lVar1 + 0x7c))) {
          setAdd(this,*(UVector **)(lVar1 + 0x98),*(UVector **)(piVar3 + 0x26));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar2 + 8));
    }
    return;
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::setEquals(icu_76_godot::UVector*, icu_76_godot::UVector*) */

void icu_76_godot::RBBITableBuilder::setEquals(UVector *param_1,UVector *param_2)

{
  icu_76_godot::UVector::equals(param_2);
  return;
}



/* icu_76_godot::RBBITableBuilder::findDuplCharClassFrom(std::pair<int, int>*) */

undefined8 __thiscall
icu_76_godot::RBBITableBuilder::findDuplCharClassFrom(RBBITableBuilder *this,pair *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  
  iVar1 = *(int *)(*(long *)(this + 0x18) + 8);
  iVar2 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
  iVar8 = *(int *)param_1;
  do {
    if (iVar2 + -1 <= iVar8) {
      return 0;
    }
    iVar3 = icu_76_godot::RBBISetBuilder::getDictCategoriesStart();
    iVar4 = iVar2;
    if (iVar8 < iVar3) {
      iVar4 = icu_76_godot::RBBISetBuilder::getDictCategoriesStart();
    }
    iVar3 = *(int *)param_1;
    iVar8 = iVar3 + 1;
    *(int *)(param_1 + 4) = iVar8;
    if (iVar8 < iVar4) {
      do {
        if (0 < iVar1) goto LAB_00100e05;
        iVar8 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 4) = iVar8 + 1;
      } while (iVar8 + 1 < iVar4);
LAB_00100e93:
      iVar8 = iVar3 + 1;
    }
    *(int *)param_1 = iVar8;
  } while( true );
LAB_00100e05:
  iVar8 = 0;
  do {
    lVar5 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x18));
    lVar5 = *(long *)(lVar5 + 0x28);
    iVar3 = *(int *)param_1;
    if (iVar3 < 0) {
      iVar7 = *(int *)(param_1 + 4);
      if ((-1 < iVar7) && (iVar9 = *(int *)(lVar5 + 8), 0 < iVar9)) {
LAB_00100e75:
        if (iVar7 < iVar9) {
          lVar5 = *(long *)(lVar5 + 0x18);
          sVar10 = 0;
LAB_00100e38:
          sVar6 = *(short *)(lVar5 + (long)iVar7 * 4);
LAB_00100e40:
          if (sVar10 != sVar6) break;
        }
      }
    }
    else {
      iVar9 = *(int *)(lVar5 + 8);
      if (0 < iVar9) {
        iVar7 = *(int *)(param_1 + 4);
        if (iVar3 < iVar9) {
          lVar5 = *(long *)(lVar5 + 0x18);
          sVar6 = 0;
          sVar10 = *(short *)(lVar5 + (long)iVar3 * 4);
          if ((-1 < iVar7) && (iVar7 < iVar9)) goto LAB_00100e38;
          goto LAB_00100e40;
        }
        if (-1 < iVar7) goto LAB_00100e75;
      }
    }
    iVar8 = iVar8 + 1;
    if (iVar1 == iVar8) {
      return 1;
    }
  } while( true );
  *(int *)(param_1 + 4) = iVar7 + 1;
  if (iVar4 <= iVar7 + 1) goto LAB_00100e93;
  goto LAB_00100e05;
}



/* icu_76_godot::RBBITableBuilder::removeColumn(int) */

void icu_76_godot::RBBITableBuilder::removeColumn(int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 in_register_0000003c;
  
  lVar2 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 0x18);
  iVar1 = *(int *)(lVar2 + 8);
  if (0 < iVar1) {
    iVar3 = 0;
    while( true ) {
      iVar3 = iVar3 + 1;
      lVar2 = icu_76_godot::UVector::elementAt((int)lVar2);
      icu_76_godot::UVector32::removeElementAt((int)*(undefined8 *)(lVar2 + 0x28));
      if (iVar1 == iVar3) break;
      lVar2 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 0x18);
    }
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::findDuplicateState(std::pair<int, int>*) */

undefined8 __thiscall
icu_76_godot::RBBITableBuilder::findDuplicateState(RBBITableBuilder *this,pair *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  
  iVar1 = *(int *)(*(long *)(this + 0x18) + 8);
  iVar4 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
  iVar10 = *(int *)param_1;
  do {
    if (iVar1 + -1 <= iVar10) {
      return 0;
    }
    lVar6 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x18));
    iVar10 = *(int *)param_1 + 1;
    *(int *)(param_1 + 4) = iVar10;
    if (iVar10 < iVar1) {
      do {
        lVar7 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x18));
        if (((*(int *)(lVar6 + 4) == *(int *)(lVar7 + 4)) &&
            (*(int *)(lVar6 + 8) == *(int *)(lVar7 + 8))) &&
           (*(int *)(lVar6 + 0x18) == *(int *)(lVar7 + 0x18))) {
          if (iVar4 < 1) {
            return 1;
          }
          lVar9 = 0;
          iVar5 = 0;
          iVar10 = *(int *)(*(long *)(lVar6 + 0x28) + 8);
          iVar2 = *(int *)(*(long *)(lVar7 + 0x28) + 8);
          do {
            if (iVar10 < 1) {
              while ((iVar2 < 1 || (iVar2 <= iVar5))) {
                lVar9 = lVar9 + 4;
                iVar5 = iVar5 + 1;
                if (iVar4 == iVar5) {
                  return 1;
                }
              }
LAB_00101098:
              iVar11 = 0;
LAB_0010104b:
              iVar8 = *(int *)(*(long *)(*(long *)(lVar7 + 0x28) + 0x18) + lVar9);
            }
            else {
              while (iVar10 - iVar5 < 1) {
                if ((0 < iVar2) && (iVar5 < iVar2)) goto LAB_00101098;
                iVar5 = iVar5 + 1;
                lVar9 = lVar9 + 4;
                if (iVar4 == iVar5) {
                  return 1;
                }
              }
              iVar11 = *(int *)(*(long *)(*(long *)(lVar6 + 0x28) + 0x18) + lVar9);
              iVar8 = 0;
              if ((0 < iVar2) && (iVar5 < iVar2)) goto LAB_0010104b;
            }
            if (iVar8 != iVar11) {
              iVar3 = *(int *)(param_1 + 4);
              if (*(int *)param_1 == iVar11) {
                if (iVar8 != iVar3) goto LAB_001010f0;
              }
              else {
                if (iVar3 != iVar11) {
LAB_001010f0:
                  iVar11 = iVar3 + 1;
                  *(int *)(param_1 + 4) = iVar11;
                  goto joined_r0x001010fc;
                }
                if (iVar8 != *(int *)param_1) goto LAB_00100fe3;
              }
            }
            iVar5 = iVar5 + 1;
            lVar9 = lVar9 + 4;
            if (iVar4 == iVar5) {
              return 1;
            }
          } while( true );
        }
        iVar11 = *(int *)(param_1 + 4);
LAB_00100fe3:
        iVar11 = iVar11 + 1;
        *(int *)(param_1 + 4) = iVar11;
joined_r0x001010fc:
      } while (iVar11 < iVar1);
      iVar10 = *(int *)param_1 + 1;
    }
    *(int *)param_1 = iVar10;
  } while( true );
}



/* icu_76_godot::RBBITableBuilder::findDuplicateSafeState(std::pair<int, int>*) */

undefined8 __thiscall
icu_76_godot::RBBITableBuilder::findDuplicateSafeState(RBBITableBuilder *this,pair *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  lVar7 = *(long *)(this + 0x20);
  iVar3 = *(int *)(lVar7 + 8);
  if (iVar3 + -1 <= *(int *)param_1) {
    return 0;
  }
LAB_0010116c:
  lVar7 = icu_76_godot::UVector::elementAt((int)lVar7);
  iVar13 = *(int *)param_1 + 1;
  *(int *)(param_1 + 4) = iVar13;
  if (iVar13 < iVar3) {
LAB_00101198:
    lVar8 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x20));
    uVar1 = *(ushort *)(lVar7 + 8);
    if ((short)uVar1 < 0) {
      uVar15 = *(uint *)(lVar7 + 0xc);
    }
    else {
      uVar15 = (uint)((short)uVar1 >> 5);
    }
    if ((int)uVar15 < 1) {
      return 1;
    }
    uVar2 = *(ushort *)(lVar8 + 8);
    lVar11 = 0;
    uVar6 = 0;
    do {
      if (uVar6 < uVar15) {
        lVar10 = lVar7 + 10;
        if ((uVar1 & 2) == 0) {
          lVar10 = *(long *)(lVar7 + 0x18);
        }
        uVar14 = (uint)*(ushort *)(lVar10 + lVar11);
        uVar12 = (int)((short)uVar2 >> 5);
        if ((short)uVar2 < 0) {
          uVar12 = *(uint *)(lVar8 + 0xc);
        }
        uVar9 = 0xffff;
        uVar4 = (uint)*(ushort *)(lVar10 + lVar11);
        if (uVar6 < uVar12) {
LAB_00101216:
          uVar14 = uVar4;
          lVar10 = lVar8 + 10;
          if ((uVar2 & 2) == 0) {
            lVar10 = *(long *)(lVar8 + 0x18);
          }
          uVar9 = (uint)*(ushort *)(lVar10 + lVar11);
        }
        if (uVar9 != uVar14) {
          uVar12 = *(uint *)param_1;
          uVar4 = *(uint *)(param_1 + 4);
          uVar5 = uVar4;
          if (((uVar12 != uVar14) && (uVar5 = uVar12, uVar14 != uVar4)) || (uVar9 != uVar5))
          goto LAB_00101268;
        }
      }
      else {
        uVar12 = (int)((short)uVar2 >> 5);
        if ((short)uVar2 < 0) {
          uVar12 = *(uint *)(lVar8 + 0xc);
        }
        uVar4 = 0xffff;
        if (uVar6 < uVar12) goto LAB_00101216;
      }
      lVar11 = lVar11 + 2;
      uVar6 = uVar6 + 1;
      if (uVar6 == uVar15) {
        return 1;
      }
    } while( true );
  }
  goto LAB_00101280;
LAB_00101268:
  *(uint *)(param_1 + 4) = uVar4 + 1;
  if (iVar3 <= (int)(uVar4 + 1)) goto code_r0x0010127c;
  goto LAB_00101198;
code_r0x0010127c:
  iVar13 = uVar12 + 1;
LAB_00101280:
  *(int *)param_1 = iVar13;
  if (iVar3 + -1 <= iVar13) {
    return 0;
  }
  lVar7 = *(long *)(this + 0x20);
  goto LAB_0010116c;
}



/* icu_76_godot::RBBITableBuilder::removeSafeState(std::pair<int, int>) */

void icu_76_godot::RBBITableBuilder::removeSafeState(long param_1)

{
  int iVar1;
  wchar16 wVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  icu_76_godot::UVector::removeElementAt((int)*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x20);
  iVar1 = *(int *)(lVar3 + 8);
  if (0 < iVar1) {
    iVar5 = 0;
    while( true ) {
      lVar3 = icu_76_godot::UVector::elementAt((int)lVar3);
      if (*(short *)(lVar3 + 8) < 0) {
        lVar4 = (long)*(int *)(lVar3 + 0xc);
      }
      else {
        lVar4 = (long)(*(short *)(lVar3 + 8) >> 5);
      }
      if (0 < (int)lVar4) {
        lVar6 = 0;
        do {
          wVar2 = (wchar16)lVar6;
          lVar6 = lVar6 + 1;
          icu_76_godot::UnicodeString::setCharAt((int)lVar3,wVar2);
        } while (lVar4 != lVar6);
      }
      iVar5 = iVar5 + 1;
      if (iVar5 == iVar1) break;
      lVar3 = *(long *)(param_1 + 0x20);
    }
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::getTableSize() const */

int __thiscall icu_76_godot::RBBITableBuilder::getTableSize(RBBITableBuilder *this)

{
  int iVar1;
  int iVar2;
  
  if (**(long **)(this + 8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(long *)(this + 0x18) + 8);
  iVar2 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
  if (0xff < *(int *)(*(long *)(this + 0x18) + 8)) {
    return (iVar2 * 2 + 6) * iVar1 + 0x14;
  }
  return (iVar2 + 3) * iVar1 + 0x14;
}



/* icu_76_godot::RBBITableBuilder::use8BitsForTable() const */

undefined8 __thiscall icu_76_godot::RBBITableBuilder::use8BitsForTable(RBBITableBuilder *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(int *)(*(long *)(this + 0x18) + 8) < 0x100);
}



/* icu_76_godot::RBBITableBuilder::exportTable(void*) */

void __thiscall icu_76_godot::RBBITableBuilder::exportTable(RBBITableBuilder *this,void *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  uint uVar11;
  
  if (0 < **(int **)(this + 0x10)) {
    return;
  }
  if (**(long **)(this + 8) != 0) {
    iVar3 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
    if ((iVar3 < 0x8000) && (*(int *)(*(long *)(this + 0x18) + 8) < 0x8000)) {
      *(int *)param_1 = *(int *)(*(long *)(this + 0x18) + 8);
      uVar4 = icu_76_godot::RBBISetBuilder::getDictCategoriesStart();
      *(undefined4 *)((long)param_1 + 8) = uVar4;
      iVar1 = *(int *)(this + 0x30);
      *(undefined4 *)((long)param_1 + 0x10) = 0;
      iVar5 = iVar1 + 1;
      if (iVar1 == 1) {
        iVar5 = 0;
      }
      *(int *)((long)param_1 + 0xc) = iVar5;
      if (*(int *)(*(long *)(this + 0x18) + 8) < 0x100) {
        *(undefined4 *)((long)param_1 + 0x10) = 4;
        iVar5 = iVar3 + 3;
      }
      else {
        iVar5 = iVar3 * 2 + 6;
      }
      *(int *)((long)param_1 + 4) = iVar5;
      if (*(char *)(*(long *)this + 0x99) != '\0') {
        *(uint *)((long)param_1 + 0x10) = *(uint *)((long)param_1 + 0x10) | 1;
      }
      cVar2 = icu_76_godot::RBBISetBuilder::sawBOF();
      if (cVar2 != '\0') {
        *(uint *)((long)param_1 + 0x10) = *(uint *)((long)param_1 + 0x10) | 2;
      }
                    /* WARNING: Load size is inaccurate */
      if (*param_1 != 0) {
        uVar11 = 0;
        do {
          while( true ) {
            lVar6 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x18));
            puVar8 = (undefined2 *)
                     ((long)param_1 + (ulong)(uVar11 * *(int *)((long)param_1 + 4)) + 0x14);
            if (0xff < *(int *)(*(long *)(this + 0x18) + 8)) break;
            *(char *)puVar8 = (char)*(undefined4 *)(lVar6 + 4);
            *(char *)((long)puVar8 + 1) = (char)*(undefined4 *)(lVar6 + 8);
            *(char *)(puVar8 + 1) = (char)*(undefined4 *)(lVar6 + 0x18);
            lVar7 = 0;
            if (0 < iVar3) {
              do {
                uVar9 = 0;
                iVar5 = *(int *)(*(long *)(lVar6 + 0x28) + 8);
                if ((0 < iVar5) && ((int)lVar7 < iVar5)) {
                  uVar9 = *(undefined1 *)(*(long *)(*(long *)(lVar6 + 0x28) + 0x18) + lVar7 * 4);
                }
                *(undefined1 *)((long)puVar8 + lVar7 + 3) = uVar9;
                lVar7 = lVar7 + 1;
              } while (iVar3 != lVar7);
            }
LAB_00101658:
            uVar11 = uVar11 + 1;
                    /* WARNING: Load size is inaccurate */
            if (*param_1 <= uVar11) {
              return;
            }
          }
          *puVar8 = (short)*(undefined4 *)(lVar6 + 4);
          puVar8[1] = (short)*(undefined4 *)(lVar6 + 8);
          puVar8[2] = (short)*(undefined4 *)(lVar6 + 0x18);
          if (iVar3 < 1) goto LAB_00101658;
          lVar7 = 0;
          do {
            uVar10 = 0;
            iVar5 = *(int *)(*(long *)(lVar6 + 0x28) + 8);
            if ((0 < iVar5) && ((int)lVar7 < iVar5)) {
              uVar10 = *(undefined2 *)(*(long *)(*(long *)(lVar6 + 0x28) + 0x18) + lVar7 * 4);
            }
            puVar8[lVar7 + 3] = uVar10;
            lVar7 = lVar7 + 1;
          } while (iVar3 != lVar7);
          uVar11 = uVar11 + 1;
                    /* WARNING: Load size is inaccurate */
        } while (uVar11 < *param_1);
      }
    }
    else {
      **(undefined4 **)(this + 0x10) = 0x10200;
    }
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::buildSafeReverseTable(UErrorCode&) */

void __thiscall
icu_76_godot::RBBITableBuilder::buildSafeReverseTable(RBBITableBuilder *this,UErrorCode *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  UVector *this_00;
  UnicodeString *pUVar9;
  long lVar10;
  UnicodeString *this_01;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  UErrorCode *pUVar15;
  long lVar16;
  wchar16 wVar17;
  long in_FS_OFFSET;
  long local_c0;
  UnicodeString *local_b8;
  undefined8 local_90;
  undefined *local_88;
  ushort local_80;
  undefined1 local_7e [2];
  uint local_7c;
  undefined1 *local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 2;
  local_88 = &uhash_compareUnicodeString_76_godot;
  pUVar15 = param_1;
  iVar5 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
  iVar7 = *(int *)(*(long *)(this + 0x18) + 8);
  if (0 < iVar5) {
    lVar8 = (long)iVar5;
    local_c0 = 0;
    do {
      lVar16 = 0;
      do {
        if (1 < iVar7) {
          goto LAB_00101898;
        }
        lVar16 = lVar16 + 1;
      } while (lVar8 != lVar16);
LAB_00101788:
      local_c0 = local_c0 + 1;
    } while (lVar8 != local_c0);
  }
  local_b8 = (UnicodeString *)&local_88;
  this_00 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)pUVar15);
  if (this_00 == (UVector *)0x0) {
    if (*(int *)param_1 < 1) {
      *(undefined4 *)param_1 = 7;
    }
  }
  else {
    icu_76_godot::UVector::UVector
              (this_00,(_func_void_void_ptr *)&uprv_deleteUObject_76_godot,
               (_func_signed_UElement_UElement *)&uhash_compareUnicodeString_76_godot,iVar5 + 2,
               param_1);
    pUVar9 = (UnicodeString *)(ulong)*(uint *)param_1;
    if ((int)*(uint *)param_1 < 1) {
      *(UVector **)(this + 0x20) = this_00;
      if (iVar5 < -1) {
        icu_76_godot::UVector::elementAt((int)this_00);
      }
      else {
        iVar7 = 0;
        do {
          pUVar9 = (UnicodeString *)
                   icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar9);
          if (pUVar9 == (UnicodeString *)0x0) {
            if (*(int *)param_1 < 1) {
              *(undefined4 *)param_1 = 7;
            }
          }
          else {
            icu_76_godot::UnicodeString::UnicodeString(pUVar9,iVar5,0,iVar5 + 4);
          }
          icu_76_godot::UVector::adoptElement(*(void **)(this + 0x20),(UErrorCode *)pUVar9);
          bVar2 = iVar7 <= iVar5;
          iVar7 = iVar7 + 1;
        } while (bVar2);
        if (0 < *(int *)param_1) goto LAB_00101842;
        pUVar9 = (UnicodeString *)
                 icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x20));
        if (0 < iVar5) {
          iVar7 = 0;
          do {
            iVar14 = iVar7 + 1;
            icu_76_godot::UnicodeString::setCharAt((int)pUVar9,(wchar16)iVar7);
            iVar7 = iVar14;
          } while (iVar5 != iVar14);
          iVar7 = 2;
          do {
            this_01 = (UnicodeString *)
                      icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x20));
            icu_76_godot::UnicodeString::operator=(this_01,pUVar9);
            bVar2 = iVar7 <= iVar5;
            iVar7 = iVar7 + 1;
          } while (bVar2);
        }
      }
      lVar8 = 0;
      uVar13 = 0;
      while( true ) {
        uVar3 = local_7c;
        if (-1 < (short)local_80) {
          uVar3 = (int)((short)local_80 >> 5);
        }
        if ((int)uVar3 <= (int)uVar13) break;
        wVar17 = L'\xffff';
        if (uVar13 < uVar3) {
          puVar11 = local_7e;
          if ((local_80 & 2) == 0) {
            puVar11 = local_70;
          }
          wVar17 = *(wchar16 *)(puVar11 + lVar8);
        }
        uVar13 = uVar13 + 2;
        lVar8 = lVar8 + 4;
        iVar7 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x20));
        icu_76_godot::UnicodeString::setCharAt(iVar7,wVar17);
      }
      local_90 = 1;
      while (cVar4 = findDuplicateSafeState(this,(pair *)&local_90), cVar4 != '\0') {
        removeSafeState(this,local_90);
      }
    }
    else {
      icu_76_godot::UVector::~UVector(this_00);
    }
  }
LAB_00101842:
  icu_76_godot::UnicodeString::~UnicodeString(local_b8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00101898:
  iVar12 = 1;
  iVar14 = -1;
  do {
    lVar10 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x18));
    pUVar15 = (UErrorCode *)0x0;
    iVar1 = *(int *)(*(long *)(lVar10 + 0x28) + 8);
    if ((0 < iVar1) && ((int)local_c0 < iVar1)) {
      pUVar15 = (UErrorCode *)
                (ulong)*(uint *)(*(long *)(*(long *)(lVar10 + 0x28) + 0x18) + local_c0 * 4);
    }
    lVar10 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x18));
    iVar1 = *(int *)(*(long *)(lVar10 + 0x28) + 8);
    iVar6 = 0;
    if ((0 < iVar1) && (iVar6 = 0, (int)lVar16 < iVar1)) {
      iVar6 = *(int *)(*(long *)(*(long *)(lVar10 + 0x28) + 0x18) + lVar16 * 4);
    }
    if ((-1 < iVar14) && (iVar6 != iVar14)) goto joined_r0x0010199e;
    iVar12 = iVar12 + 1;
    iVar14 = iVar6;
  } while (iVar7 != iVar12);
  local_90._0_2_ = (undefined2)local_c0;
  iVar14 = (int)(UErrorCode *)&local_90;
  icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_88,iVar14,0);
  local_90 = CONCAT62(local_90._2_6_,(short)lVar16);
  pUVar15 = (UErrorCode *)&local_90;
  icu_76_godot::UnicodeString::doAppend((wchar16 *)&local_88,iVar14,0);
joined_r0x0010199e:
  if (lVar8 == lVar16 + 1) goto LAB_00101788;
  lVar16 = lVar16 + 1;
  goto LAB_00101898;
}



/* icu_76_godot::RBBITableBuilder::getSafeTableSize() const */

int __thiscall icu_76_godot::RBBITableBuilder::getSafeTableSize(RBBITableBuilder *this)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(this + 0x20) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(long *)(this + 0x20) + 8);
  iVar2 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
  if (0xff < *(int *)(*(long *)(this + 0x20) + 8)) {
    return (iVar2 * 2 + 6) * iVar1 + 0x14;
  }
  return (iVar2 + 3) * iVar1 + 0x14;
}



/* icu_76_godot::RBBITableBuilder::use8BitsForSafeTable() const */

undefined8 __thiscall icu_76_godot::RBBITableBuilder::use8BitsForSafeTable(RBBITableBuilder *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x20) >> 8),
                  *(int *)(*(long *)(this + 0x20) + 8) < 0x100);
}



/* icu_76_godot::RBBITableBuilder::exportSafeTable(void*) */

void __thiscall
icu_76_godot::RBBITableBuilder::exportSafeTable(RBBITableBuilder *this,void *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  uint uVar12;
  
  if (0 < **(int **)(this + 0x10)) {
    return;
  }
  if (*(long *)(this + 0x20) != 0) {
    iVar3 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
    if (iVar3 < 0x8000) {
      lVar4 = *(long *)(this + 0x20);
      iVar2 = *(int *)(lVar4 + 8);
      if (iVar2 < 0x8000) {
        *(int *)param_1 = iVar2;
        *(undefined4 *)((long)param_1 + 0x10) = 0;
        if (*(int *)(lVar4 + 8) < 0x100) {
          *(undefined4 *)((long)param_1 + 0x10) = 4;
          iVar7 = iVar3 + 3;
        }
        else {
          iVar7 = iVar3 * 2 + 6;
        }
        *(int *)((long)param_1 + 4) = iVar7;
        if (iVar2 == 0) {
          return;
        }
        uVar12 = 0;
        while( true ) {
          lVar4 = icu_76_godot::UVector::elementAt((int)lVar4);
          puVar8 = (undefined4 *)
                   ((long)param_1 + (ulong)(uVar12 * *(int *)((long)param_1 + 4)) + 0x14);
          if (*(int *)(*(long *)(this + 0x20) + 8) < 0x100) {
            *(undefined1 *)((long)puVar8 + 2) = 0;
            lVar5 = 0;
            *(undefined2 *)puVar8 = 0;
            if (0 < iVar3) {
              do {
                uVar1 = *(ushort *)(lVar4 + 8);
                if ((short)uVar1 < 0) {
                  uVar9 = *(uint *)(lVar4 + 0xc);
                }
                else {
                  uVar9 = (uint)((short)uVar1 >> 5);
                }
                uVar10 = 0xff;
                if ((uint)lVar5 < uVar9) {
                  lVar6 = lVar4 + 10;
                  if ((uVar1 & 2) == 0) {
                    lVar6 = *(long *)(lVar4 + 0x18);
                  }
                  uVar10 = *(undefined1 *)(lVar6 + lVar5 * 2);
                }
                *(undefined1 *)((long)puVar8 + lVar5 + 3) = uVar10;
                lVar5 = lVar5 + 1;
              } while (lVar5 != iVar3);
            }
          }
          else {
            *puVar8 = 0;
            *(undefined2 *)(puVar8 + 1) = 0;
            if (0 < iVar3) {
              lVar5 = 0;
              do {
                uVar1 = *(ushort *)(lVar4 + 8);
                if ((short)uVar1 < 0) {
                  uVar9 = *(uint *)(lVar4 + 0xc);
                }
                else {
                  uVar9 = (uint)((short)uVar1 >> 5);
                }
                uVar11 = 0xffff;
                if ((uint)lVar5 < uVar9) {
                  lVar6 = lVar4 + 10;
                  if ((uVar1 & 2) == 0) {
                    lVar6 = *(long *)(lVar4 + 0x18);
                  }
                  uVar11 = *(undefined2 *)(lVar6 + lVar5 * 2);
                }
                *(undefined2 *)((long)puVar8 + lVar5 * 2 + 6) = uVar11;
                lVar5 = lVar5 + 1;
              } while (lVar5 != iVar3);
            }
          }
          uVar12 = uVar12 + 1;
                    /* WARNING: Load size is inaccurate */
          if (*param_1 <= uVar12) break;
          lVar4 = *(long *)(this + 0x20);
        }
        return;
      }
    }
    **(undefined4 **)(this + 0x10) = 0x10200;
  }
  return;
}



/* icu_76_godot::RBBIStateDescriptor::RBBIStateDescriptor(int, UErrorCode*) */

void __thiscall
icu_76_godot::RBBIStateDescriptor::RBBIStateDescriptor
          (RBBIStateDescriptor *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  UVector32 *this_00;
  undefined4 in_register_00000034;
  
  *this = (RBBIStateDescriptor)0x0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  this_00 = (UVector32 *)
            icu_76_godot::UMemory::operator_new
                      ((UMemory *)0x20,CONCAT44(in_register_00000034,param_1));
  if (this_00 == (UVector32 *)0x0) {
    iVar1 = *(int *)param_2;
    *(undefined8 *)(this + 0x28) = 0;
    if (iVar1 < 1) {
      *(undefined4 *)param_2 = 7;
    }
  }
  else {
    icu_76_godot::UVector32::UVector32(this_00,param_1 + 1,param_2);
    iVar1 = *(int *)param_2;
    *(UVector32 **)(this + 0x28) = this_00;
    if (iVar1 < 1) {
      icu_76_godot::UVector32::setSize((int)this_00);
      return;
    }
  }
  return;
}



/* icu_76_godot::RBBIStateDescriptor::~RBBIStateDescriptor() */

void __thiscall icu_76_godot::RBBIStateDescriptor::~RBBIStateDescriptor(RBBIStateDescriptor *this)

{
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::~RBBITableBuilder() */

void __thiscall icu_76_godot::RBBITableBuilder::~RBBITableBuilder(RBBITableBuilder *this)

{
  RBBIStateDescriptor *this_00;
  uint uVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x18);
  if (0 < (int)plVar3[1]) {
    uVar1 = 0;
    do {
      pvVar2 = (void *)(ulong)uVar1;
      this_00 = (RBBIStateDescriptor *)icu_76_godot::UVector::elementAt((int)plVar3);
      if (this_00 != (RBBIStateDescriptor *)0x0) {
        RBBIStateDescriptor::~RBBIStateDescriptor(this_00);
        icu_76_godot::UMemory::operator_delete((UMemory *)this_00,pvVar2);
      }
      plVar3 = *(long **)(this + 0x18);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)plVar3[1]);
  }
  (**(code **)(*plVar3 + 8))();
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101ef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x28) + 8))();
    return;
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::removeState(std::pair<int, int>) */

void __thiscall icu_76_godot::RBBITableBuilder::removeState(RBBITableBuilder *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  RBBIStateDescriptor *this_00;
  long lVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  pvVar6 = (void *)(param_2 >> 0x20);
  this_00 = (RBBIStateDescriptor *)
            icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x18));
  iVar5 = (int)(param_2 >> 0x20);
  icu_76_godot::UVector::removeElementAt((int)*(undefined8 *)(this + 0x18));
  if (this_00 != (RBBIStateDescriptor *)0x0) {
    RBBIStateDescriptor::~RBBIStateDescriptor(this_00);
    icu_76_godot::UMemory::operator_delete((UMemory *)this_00,pvVar6);
  }
  iVar1 = *(int *)(*(long *)(this + 0x18) + 8);
  iVar3 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
  if (0 < iVar1) {
    iVar9 = 0;
    do {
      lVar4 = icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x18));
      if (0 < iVar3) {
        lVar10 = 0;
        do {
          lVar2 = *(long *)(lVar4 + 0x28);
          iVar7 = 0;
          if ((0 < *(int *)(lVar2 + 8)) && (iVar7 = 0, (int)lVar10 < *(int *)(lVar2 + 8))) {
            iVar7 = *(int *)(*(long *)(lVar2 + 0x18) + lVar10 * 4);
          }
          iVar8 = (int)param_2;
          if (iVar5 != iVar7) {
            iVar8 = iVar7 - (uint)(iVar5 < iVar7);
          }
          lVar10 = lVar10 + 1;
          icu_76_godot::UVector32::setElementAt((int)lVar2,iVar8);
        } while (iVar3 != lVar10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar1);
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::removeDuplicateStates() */

int __thiscall icu_76_godot::RBBITableBuilder::removeDuplicateStates(RBBITableBuilder *this)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  iVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 3;
  while( true ) {
    cVar1 = findDuplicateState(this,(pair *)&local_28);
    if (cVar1 == '\0') break;
    iVar2 = iVar2 + 1;
    removeState(this,local_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RBBITableBuilder::buildStateTable() [clone .part.0] */

void icu_76_godot::RBBITableBuilder::buildStateTable(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  RBBIStateDescriptor *this;
  UVector *pUVar4;
  RBBIStateDescriptor *this_00;
  char *pcVar5;
  int *piVar6;
  long lVar7;
  RBBIStateDescriptor *this_01;
  uint uVar8;
  ulong in_RSI;
  UErrorCode *pUVar9;
  RBBITableBuilder *in_RDI;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar3 = icu_76_godot::RBBISetBuilder::getNumCharCategories();
  uVar8 = iVar3 - 1;
  this = (RBBIStateDescriptor *)icu_76_godot::UMemory::operator_new((UMemory *)0x30,in_RSI);
  if (this == (RBBIStateDescriptor *)0x0) {
    **(undefined4 **)(in_RDI + 0x10) = 7;
    return;
  }
  pUVar9 = (UErrorCode *)(ulong)uVar8;
  RBBIStateDescriptor::RBBIStateDescriptor(this,uVar8,*(UErrorCode **)(in_RDI + 0x10));
  pUVar4 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)pUVar9);
  if (pUVar4 == (UVector *)0x0) {
    puVar1 = *(undefined4 **)(in_RDI + 0x10);
    *(undefined8 *)(this + 0x20) = 0;
    *puVar1 = 7;
  }
  else {
    pUVar9 = *(UErrorCode **)(in_RDI + 0x10);
    icu_76_godot::UVector::UVector(pUVar4,pUVar9);
    piVar6 = *(int **)(in_RDI + 0x10);
    *(UVector **)(this + 0x20) = pUVar4;
    if ((*piVar6 < 1) &&
       (pUVar9 = (UErrorCode *)this,
       icu_76_godot::UVector::addElement(*(void **)(in_RDI + 0x18),(UErrorCode *)this),
       **(int **)(in_RDI + 0x10) < 1)) {
      this_00 = (RBBIStateDescriptor *)
                icu_76_godot::UMemory::operator_new((UMemory *)0x30,(ulong)pUVar9);
      if (this_00 == (RBBIStateDescriptor *)0x0) {
        **(undefined4 **)(in_RDI + 0x10) = 7;
      }
      else {
        pUVar9 = (UErrorCode *)(ulong)uVar8;
        RBBIStateDescriptor::RBBIStateDescriptor(this_00,uVar8,*(UErrorCode **)(in_RDI + 0x10));
        if (**(int **)(in_RDI + 0x10) < 1) {
          pUVar4 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)pUVar9);
          if (pUVar4 == (UVector *)0x0) {
            *(undefined8 *)(this_00 + 0x20) = 0;
            **(undefined4 **)(in_RDI + 0x10) = 7;
          }
          else {
            pUVar9 = *(UErrorCode **)(in_RDI + 0x10);
            icu_76_godot::UVector::UVector(pUVar4,pUVar9);
            *(UVector **)(this_00 + 0x20) = pUVar4;
            if (**(int **)(in_RDI + 0x10) < 1) {
              setAdd(in_RDI,pUVar4,*(UVector **)(**(long **)(in_RDI + 8) + 0x88));
              pUVar9 = (UErrorCode *)this_00;
              icu_76_godot::UVector::addElement(*(void **)(in_RDI + 0x18),(UErrorCode *)this_00);
              if (**(int **)(in_RDI + 0x10) < 1) {
                do {
                  do {
                    lVar7 = *(long *)(in_RDI + 0x18);
                    if (*(int *)(lVar7 + 8) < 2) {
                      return;
                    }
                    iVar10 = 1;
                    while (pcVar5 = (char *)icu_76_godot::UVector::elementAt((int)lVar7),
                          *pcVar5 != '\0') {
                      lVar7 = *(long *)(in_RDI + 0x18);
                      iVar10 = iVar10 + 1;
                      if (*(int *)(lVar7 + 8) <= iVar10) {
                        return;
                      }
                    }
                    *pcVar5 = '\x01';
                    iVar10 = 1;
                  } while ((int)uVar8 < 1);
                  do {
                    lVar7 = *(long *)(pcVar5 + 0x20);
                    pUVar4 = (UVector *)0x0;
                    pUVar9 = (UErrorCode *)0x0;
                    if (0 < *(int *)(lVar7 + 8)) {
                      do {
                        while( true ) {
                          iVar12 = (int)pUVar9;
                          piVar6 = (int *)icu_76_godot::UVector::elementAt((int)lVar7);
                          if ((*piVar6 != 3) || (piVar6[0x1f] != iVar10)) break;
                          if (pUVar4 == (UVector *)0x0) {
                            pUVar4 = (UVector *)
                                     icu_76_godot::UMemory::operator_new
                                               ((UMemory *)0x28,(ulong)pUVar9);
                            if (pUVar4 == (UVector *)0x0) goto LAB_001023f3;
                            icu_76_godot::UVector::UVector(pUVar4,*(UErrorCode **)(in_RDI + 0x10));
                          }
                          uVar11 = iVar12 + 1;
                          pUVar9 = (UErrorCode *)(ulong)uVar11;
                          setAdd(in_RDI,pUVar4,*(UVector **)(piVar6 + 0x26));
                          lVar7 = *(long *)(pcVar5 + 0x20);
                          if (*(int *)(lVar7 + 8) <= (int)uVar11) goto LAB_001022c0;
                        }
                        lVar7 = *(long *)(pcVar5 + 0x20);
                        uVar11 = iVar12 + 1;
                        pUVar9 = (UErrorCode *)(ulong)uVar11;
                      } while ((int)uVar11 < *(int *)(lVar7 + 8));
LAB_001022c0:
                      if (pUVar4 != (UVector *)0x0) {
                        lVar7 = *(long *)(in_RDI + 0x18);
                        iVar12 = 0;
                        pUVar9 = (UErrorCode *)(ulong)*(uint *)(lVar7 + 8);
                        if (0 < (int)*(uint *)(lVar7 + 8)) {
                          do {
                            lVar7 = icu_76_godot::UVector::elementAt((int)lVar7);
                            pUVar9 = *(UErrorCode **)(lVar7 + 0x20);
                            cVar2 = icu_76_godot::UVector::equals(pUVar4);
                            if (cVar2 != '\0') {
                              (**(code **)(*(long *)pUVar4 + 8))(pUVar4);
                              goto LAB_00102314;
                            }
                            lVar7 = *(long *)(in_RDI + 0x18);
                            iVar12 = iVar12 + 1;
                          } while (iVar12 < *(int *)(lVar7 + 8));
                        }
                        this_01 = (RBBIStateDescriptor *)
                                  icu_76_godot::UMemory::operator_new((UMemory *)0x30,(ulong)pUVar9)
                        ;
                        if (this_01 == (RBBIStateDescriptor *)0x0) {
LAB_001023f3:
                          **(undefined4 **)(in_RDI + 0x10) = 7;
                          goto LAB_0010217c;
                        }
                        pUVar9 = (UErrorCode *)(ulong)uVar8;
                        RBBIStateDescriptor::RBBIStateDescriptor
                                  (this_01,uVar8,*(UErrorCode **)(in_RDI + 0x10));
                        if (0 < **(int **)(in_RDI + 0x10)) goto LAB_0010217c;
                        *(UVector **)(this_01 + 0x20) = pUVar4;
                        icu_76_godot::UVector::addElement
                                  (*(void **)(in_RDI + 0x18),(UErrorCode *)this_01);
                        if (0 < **(int **)(in_RDI + 0x10)) {
                          return;
                        }
                        iVar12 = *(int *)(*(long *)(in_RDI + 0x18) + 8) + -1;
LAB_00102314:
                        icu_76_godot::UVector32::setElementAt
                                  ((int)*(undefined8 *)(pcVar5 + 0x28),iVar12);
                      }
                    }
                    iVar10 = iVar10 + 1;
                  } while (iVar3 != iVar10);
                } while( true );
              }
            }
          }
        }
LAB_0010217c:
        RBBIStateDescriptor::~RBBIStateDescriptor(this_00);
        icu_76_godot::UMemory::operator_delete((UMemory *)this_00,pUVar9);
      }
    }
  }
  RBBIStateDescriptor::~RBBIStateDescriptor(this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,pUVar9);
  return;
}



/* icu_76_godot::RBBITableBuilder::buildStateTable() */

void __thiscall icu_76_godot::RBBITableBuilder::buildStateTable(RBBITableBuilder *this)

{
  if (0 < **(int **)(this + 0x10)) {
    return;
  }
  buildStateTable();
  return;
}



/* icu_76_godot::RBBITableBuilder::calcChainedFollowPos(icu_76_godot::RBBINode*,
   icu_76_godot::RBBINode*) */

void __thiscall
icu_76_godot::RBBITableBuilder::calcChainedFollowPos
          (RBBITableBuilder *this,RBBINode *param_1,RBBINode *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  long in_FS_OFFSET;
  UVector local_c8 [8];
  int local_c0;
  UVector local_98 [8];
  int local_90;
  UVector local_68 [8];
  int local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UVector::UVector(local_c8,*(UErrorCode **)(this + 0x10));
  if (**(int **)(this + 0x10) < 1) {
    icu_76_godot::RBBINode::findNodes(param_1,local_c8,3);
    if (*(int *)*(UErrorCode **)(this + 0x10) < 1) {
      icu_76_godot::UVector::UVector(local_98,*(UErrorCode **)(this + 0x10));
      addRuleRootNodes(this,local_98,param_1);
      icu_76_godot::UVector::UVector(local_68,*(UErrorCode **)(this + 0x10));
      if (0 < local_90) {
        iVar4 = 0;
        do {
          while (lVar2 = icu_76_godot::UVector::elementAt((int)local_98),
                *(char *)(lVar2 + 0x82) != '\0') {
            iVar4 = iVar4 + 1;
            setAdd(this,local_68,*(UVector **)(lVar2 + 0x88));
            if (local_90 <= iVar4) goto LAB_00102589;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_90);
      }
LAB_00102589:
      if (**(int **)(this + 0x10) < 1) {
        iVar4 = 0;
        if (0 < local_c0) {
          do {
            lVar2 = icu_76_godot::UVector::elementAt((int)local_c8);
            iVar1 = icu_76_godot::UVector::indexOf(*(void **)(lVar2 + 0x98),(int)param_2);
            if ((-1 < iVar1) && (0 < local_60)) {
              iVar1 = 0;
              do {
                piVar3 = (int *)icu_76_godot::UVector::elementAt((int)local_68);
                if ((*piVar3 == 3) && (*(int *)(lVar2 + 0x7c) == piVar3[0x1f])) {
                  setAdd(this,*(UVector **)(lVar2 + 0x98),*(UVector **)(piVar3 + 0x26));
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < local_60);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_c0);
        }
        icu_76_godot::UVector::~UVector(local_68);
        icu_76_godot::UVector::~UVector(local_98);
        icu_76_godot::UVector::~UVector(local_c8);
        goto LAB_001024c7;
      }
      icu_76_godot::UVector::~UVector(local_68);
      icu_76_godot::UVector::~UVector(local_98);
    }
  }
  icu_76_godot::UVector::~UVector(local_c8);
LAB_001024c7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::flagAcceptingStates() */

void __thiscall icu_76_godot::RBBITableBuilder::flagAcceptingStates(RBBITableBuilder *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  UVector aUStack_68 [8];
  int local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)*(UErrorCode **)(this + 0x10) < 1) {
    icu_76_godot::UVector::UVector(aUStack_68,*(UErrorCode **)(this + 0x10));
    if (((**(int **)(this + 0x10) < 1) &&
        (icu_76_godot::RBBINode::findNodes(**(undefined8 **)(this + 8),aUStack_68,6),
        **(int **)(this + 0x10) < 1)) && (iVar8 = 0, 0 < local_60)) {
      do {
        iVar9 = 0;
        lVar4 = icu_76_godot::UVector::elementAt((int)aUStack_68);
        lVar5 = *(long *)(this + 0x18);
        if (0 < *(int *)(lVar5 + 8)) {
          do {
            lVar5 = icu_76_godot::UVector::elementAt((int)lVar5);
            iVar2 = icu_76_godot::UVector::indexOf(*(void **)(lVar5 + 0x20),(int)lVar4);
            if (-1 < iVar2) {
              iVar2 = *(int *)(lVar5 + 4);
              if (iVar2 == 0) {
                iVar1 = *(int *)(lVar4 + 0x7c);
                lVar7 = (long)iVar1;
                lVar6 = *(long *)(this + 0x28);
                if (iVar1 < 0) {
LAB_001027b4:
                  uVar3 = 0;
                }
                else if (*(int *)(lVar6 + 8) < 1) {
                  *(undefined4 *)(lVar5 + 4) = 1;
                  if (iVar1 == 0) goto LAB_00102775;
                  uVar3 = 0;
                }
                else {
                  if (iVar1 < *(int *)(lVar6 + 8)) {
                    iVar2 = *(int *)(*(long *)(lVar6 + 0x18) + (long)iVar1 * 4);
                    *(int *)(lVar5 + 4) = iVar2;
                    if (iVar2 != 0) goto LAB_00102770;
                    *(undefined4 *)(lVar5 + 4) = 1;
                    if (iVar1 == 0) goto LAB_00102775;
                  }
                  else {
                    *(undefined4 *)(lVar5 + 4) = 1;
                  }
LAB_00102803:
                  if ((*(int *)(lVar6 + 8) < 1) || (*(int *)(lVar6 + 8) <= (int)lVar7))
                  goto LAB_001027b4;
                  uVar3 = *(undefined4 *)(*(long *)(lVar6 + 0x18) + lVar7 * 4);
                }
                *(undefined4 *)(lVar5 + 4) = uVar3;
              }
              else {
LAB_00102770:
                if (iVar2 == 1) {
                  iVar2 = *(int *)(lVar4 + 0x7c);
                  lVar7 = (long)iVar2;
                  if (iVar2 != 0) {
                    lVar6 = *(long *)(this + 0x28);
                    if (-1 < iVar2) goto LAB_00102803;
                    goto LAB_001027b4;
                  }
                }
              }
            }
LAB_00102775:
            lVar5 = *(long *)(this + 0x18);
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(lVar5 + 8));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_60);
    }
    icu_76_godot::UVector::~UVector(aUStack_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::flagLookAheadStates() */

void __thiscall icu_76_godot::RBBITableBuilder::flagLookAheadStates(RBBITableBuilder *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  UVector aUStack_68 [8];
  int local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)*(UErrorCode **)(this + 0x10) < 1) {
    icu_76_godot::UVector::UVector(aUStack_68,*(UErrorCode **)(this + 0x10));
    icu_76_godot::RBBINode::findNodes
              (**(undefined8 **)(this + 8),aUStack_68,4,*(undefined8 *)(this + 0x10));
    if ((**(int **)(this + 0x10) < 1) && (iVar6 = 0, 0 < local_60)) {
      do {
        iVar7 = 0;
        lVar3 = icu_76_godot::UVector::elementAt((int)aUStack_68);
        lVar4 = *(long *)(this + 0x18);
        if (0 < *(int *)(lVar4 + 8)) {
          do {
            lVar4 = icu_76_godot::UVector::elementAt((int)lVar4);
            iVar2 = icu_76_godot::UVector::indexOf(*(void **)(lVar4 + 0x20),(int)lVar3);
            if (-1 < iVar2) {
              iVar2 = *(int *)(lVar3 + 0x7c);
              uVar5 = 0;
              if (((-1 < iVar2) &&
                  (iVar1 = *(int *)(*(long *)(this + 0x28) + 8), uVar5 = 0, 0 < iVar1)) &&
                 (iVar2 < iVar1)) {
                uVar5 = *(undefined4 *)(*(long *)(*(long *)(this + 0x28) + 0x18) + (long)iVar2 * 4);
              }
              *(undefined4 *)(lVar4 + 8) = uVar5;
            }
            lVar4 = *(long *)(this + 0x18);
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar4 + 8));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_60);
    }
    icu_76_godot::UVector::~UVector(aUStack_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::flagTaggedStates() */

void __thiscall icu_76_godot::RBBITableBuilder::flagTaggedStates(RBBITableBuilder *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  UVector aUStack_68 [8];
  int local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)*(UErrorCode **)(this + 0x10) < 1) {
    icu_76_godot::UVector::UVector(aUStack_68,*(UErrorCode **)(this + 0x10));
    if (((**(int **)(this + 0x10) < 1) &&
        (icu_76_godot::RBBINode::findNodes(**(undefined8 **)(this + 8),aUStack_68,5),
        **(int **)(this + 0x10) < 1)) && (0 < local_60)) {
      iVar4 = 0;
      do {
        lVar2 = icu_76_godot::UVector::elementAt((int)aUStack_68);
        lVar3 = *(long *)(this + 0x18);
        if (0 < *(int *)(lVar3 + 8)) {
          iVar5 = 0;
          do {
            lVar3 = icu_76_godot::UVector::elementAt((int)lVar3);
            iVar1 = icu_76_godot::UVector::indexOf(*(void **)(lVar3 + 0x20),(int)lVar2);
            if (-1 < iVar1) {
              sortedAdd(this,(UVector **)(lVar3 + 0x10),*(int *)(lVar2 + 0x7c));
            }
            lVar3 = *(long *)(this + 0x18);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(lVar3 + 8));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_60);
    }
    icu_76_godot::UVector::~UVector(aUStack_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::RBBITableBuilder::buildForwardTable() */

void __thiscall icu_76_godot::RBBITableBuilder::buildForwardTable(RBBITableBuilder *this)

{
  UErrorCode *pUVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  RBBINode *pRVar5;
  RBBINode *pRVar6;
  undefined8 *puVar7;
  void *pvVar8;
  int *piVar9;
  
  piVar9 = *(int **)(this + 0x10);
  if (0 < *piVar9) {
    return;
  }
  puVar7 = *(undefined8 **)(this + 8);
  pUVar1 = (UErrorCode *)*puVar7;
  if (pUVar1 == (UErrorCode *)0x0) {
    return;
  }
  uVar4 = icu_76_godot::RBBINode::flattenVariables(pUVar1,(int)piVar9);
  *puVar7 = uVar4;
  if (0 < **(int **)(this + 0x10)) {
    return;
  }
  cVar3 = icu_76_godot::RBBISetBuilder::sawBOF();
  if (cVar3 != '\0') {
    pRVar5 = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,(ulong)piVar9);
    if (pRVar5 == (RBBINode *)0x0) {
      pRVar5 = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,(ulong)piVar9);
      if (pRVar5 != (RBBINode *)0x0) {
        pvVar8 = (void *)0x3;
        icu_76_godot::RBBINode::RBBINode(pRVar5);
        goto LAB_00102ca5;
      }
      goto LAB_00102cc3;
    }
    pvVar8 = (void *)0x8;
    icu_76_godot::RBBINode::RBBINode(pRVar5);
    pRVar6 = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,(ulong)pvVar8);
    if (pRVar6 == (RBBINode *)0x0) goto LAB_00102ca5;
    piVar9 = (int *)0x3;
    icu_76_godot::RBBINode::RBBINode(pRVar6);
    puVar7 = *(undefined8 **)(this + 8);
    *(RBBINode **)(pRVar5 + 0x10) = pRVar6;
    *(undefined8 *)(pRVar5 + 0x18) = *puVar7;
    *(RBBINode **)(pRVar6 + 8) = pRVar5;
    *(undefined4 *)(pRVar6 + 0x7c) = 2;
    *puVar7 = pRVar5;
  }
  pRVar5 = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,(ulong)piVar9);
  if (pRVar5 != (RBBINode *)0x0) {
    pvVar8 = (void *)0x8;
    icu_76_godot::RBBINode::RBBINode(pRVar5);
    lVar2 = **(long **)(this + 8);
    *(long *)(pRVar5 + 0x10) = lVar2;
    *(RBBINode **)(lVar2 + 8) = pRVar5;
    pRVar6 = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,(ulong)pvVar8);
    if (pRVar6 != (RBBINode *)0x0) {
      icu_76_godot::RBBINode::RBBINode(pRVar6,6);
      puVar7 = *(undefined8 **)(this + 8);
      *(RBBINode **)(pRVar5 + 0x18) = pRVar6;
      *(RBBINode **)(pRVar6 + 8) = pRVar5;
      *puVar7 = pRVar5;
      icu_76_godot::RBBINode::flattenSets();
      puVar7 = *(undefined8 **)(this + 8);
      calcNullable(this,(RBBINode *)*puVar7);
      calcFirstPos(this,(RBBINode *)*puVar7);
      calcLastPos(this,(RBBINode *)**(undefined8 **)(this + 8));
      pRVar5 = (RBBINode *)**(undefined8 **)(this + 8);
      if (((pRVar5 != (RBBINode *)0x0) && (*(int *)pRVar5 != 6)) && (*(int *)pRVar5 != 3)) {
        calcFollowPos(this,pRVar5);
      }
      if (*(char *)(*(long *)this + 0x98) != '\0') {
        calcChainedFollowPos(this,(RBBINode *)**(undefined8 **)(this + 8),pRVar6);
      }
      cVar3 = icu_76_godot::RBBISetBuilder::sawBOF();
      if (cVar3 != '\0') {
        bofFixup(this);
      }
      if (**(int **)(this + 0x10) < 1) {
        buildStateTable();
      }
      mapLookAheadRules();
      flagAcceptingStates(this);
      flagLookAheadStates(this);
      flagTaggedStates(this);
      mergeRuleStatusVals(this);
      return;
    }
    *(undefined8 *)(pRVar5 + 0x18) = 0;
LAB_00102ca5:
    **(undefined4 **)(this + 0x10) = 7;
    icu_76_godot::RBBINode::~RBBINode(pRVar5);
    icu_76_godot::UMemory::operator_delete((UMemory *)pRVar5,pvVar8);
    return;
  }
LAB_00102cc3:
  **(undefined4 **)(this + 0x10) = 7;
  return;
}


