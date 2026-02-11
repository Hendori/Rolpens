
/* glslang::TConstTraverser::visitConstantUnion(glslang::TIntermConstantUnion*) */

void __thiscall
glslang::TConstTraverser::visitConstantUnion(TConstTraverser *this,TIntermConstantUnion *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  TType *pTVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  TIntermConstantUnion *pTVar12;
  long lVar13;
  TIntermConstantUnion *pTVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  
  lVar13 = *(long *)(this + 0x48);
  plVar4 = *(long **)(this + 0x58);
  if (*(code **)(*plVar4 + 0x38) == TType::getBasicType) {
    uVar22 = (uint)*(byte *)(plVar4 + 1);
    if (*(byte *)(plVar4 + 1) == 0xf) goto LAB_00100220;
LAB_00100049:
    if (uVar22 == 0x10) goto LAB_00100220;
    if (*(byte *)((long)plVar4 + 9) < 0x10) {
      uVar22 = *(byte *)((long)plVar4 + 9) & 0xf;
    }
    else {
      uVar22 = (uint)(*(byte *)((long)plVar4 + 9) >> 4) * (*(byte *)((long)plVar4 + 10) & 0xf);
    }
  }
  else {
    iVar16 = (**(code **)(*plVar4 + 0x38))(plVar4);
    if (iVar16 != 0xf) {
      if (*(code **)(*plVar4 + 0x38) == TType::getBasicType) {
        uVar22 = (uint)*(byte *)(plVar4 + 1);
      }
      else {
        uVar22 = (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      goto LAB_00100049;
    }
LAB_00100220:
    uVar22 = 0;
    puVar18 = *(undefined8 **)(plVar4[0xd] + 8);
    if (puVar18 != *(undefined8 **)(plVar4[0xd] + 0x10)) {
      do {
        pTVar6 = (TType *)*puVar18;
        puVar18 = puVar18 + 4;
        iVar16 = TType::computeNumComponents(pTVar6);
        uVar22 = uVar22 + iVar16;
      } while (*(undefined8 **)(plVar4[0xd] + 0x10) != puVar18);
    }
  }
  if ((plVar4[0xc] != 0) && (lVar17 = *(long *)(plVar4[0xc] + 8), lVar17 != 0)) {
    piVar11 = *(int **)(lVar17 + 8);
    iVar16 = (int)(*(long *)(lVar17 + 0x10) - (long)piVar11 >> 4);
    if (iVar16 < 1) {
      iVar16 = 1;
    }
    else {
      piVar1 = piVar11 + (ulong)(iVar16 - 1) * 4 + 4;
      iVar16 = 1;
      do {
        iVar16 = iVar16 * *piVar11;
        piVar11 = piVar11 + 4;
      } while (piVar11 != piVar1);
    }
    uVar22 = uVar22 * iVar16;
  }
  if ((int)uVar22 <= *(int *)(this + 0x38)) {
    return;
  }
  lVar17 = *(long *)param_1;
  if (this[100] != (TConstTraverser)0x0) {
    uVar9 = *(int *)(this + 0x38) + *(int *)(this + 0x68);
    if (this[0x6c] == (TConstTraverser)0x0) {
      if (*(code **)(lVar17 + 0xf0) == TIntermTyped::getType) {
        pTVar14 = param_1 + 0x20;
      }
      else {
        pTVar14 = (TIntermConstantUnion *)(**(code **)(lVar17 + 0xf0))(param_1);
      }
      iVar23 = TType::computeNumComponents((TType *)pTVar14);
      iVar16 = *(int *)(this + 0x38);
      if ((int)uVar9 <= (int)uVar22) {
        uVar22 = uVar9;
      }
      if ((int)uVar22 <= iVar16) {
        return;
      }
      lVar13 = *(long *)(lVar13 + 8);
      lVar17 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
      iVar24 = 0;
      lVar21 = (long)(iVar16 + 1);
      do {
        puVar18 = (undefined8 *)((long)iVar24 * 0x10 + lVar17);
        *(undefined8 *)(lVar13 + -0x10 + lVar21 * 0x10) = *puVar18;
        *(undefined4 *)(lVar13 + -8 + lVar21 * 0x10) = *(undefined4 *)(puVar18 + 1);
        *(int *)(this + 0x38) = (int)lVar21;
        lVar21 = lVar21 + 1;
        iVar24 = iVar24 + (uint)(1 < iVar23);
      } while (lVar21 != (ulong)(uVar22 - iVar16) + 1 + (long)iVar16);
      return;
    }
    if (*(code **)(lVar17 + 0x148) == TIntermTyped::isMatrix) {
      if ((byte)param_1[0x29] < 0x10) {
LAB_00100620:
        if (*(code **)(lVar17 + 0xf0) == TIntermTyped::getType) {
          pTVar14 = param_1 + 0x20;
        }
        else {
          pTVar14 = (TIntermConstantUnion *)(**(code **)(lVar17 + 0xf0))(param_1);
        }
        iVar16 = TType::computeNumComponents((TType *)pTVar14);
        if (iVar16 != 1) {
          iVar16 = *(int *)(this + 0x38);
          if ((int)uVar22 < (int)uVar9) {
            uVar9 = uVar22;
          }
          if ((int)uVar9 <= iVar16) {
            return;
          }
          lVar17 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
          lVar21 = (long)iVar16 * 0x10 + *(long *)(lVar13 + 8);
          lVar13 = 0;
          do {
            *(undefined8 *)(lVar21 + lVar13) = *(undefined8 *)(lVar17 + lVar13);
            *(undefined4 *)(lVar21 + 8 + lVar13) = *(undefined4 *)(lVar17 + 8 + lVar13);
            lVar13 = lVar13 + 0x10;
          } while (lVar13 != (ulong)(uVar9 - iVar16) << 4);
          *(uint *)(this + 0x38) = uVar9;
          return;
        }
        iVar16 = *(int *)(this + 0x70);
        if (iVar16 < 1) {
          return;
        }
        iVar23 = *(int *)(this + 0x74);
        if (iVar23 < 1) {
          return;
        }
        iVar24 = 0;
        lVar13 = *(long *)(lVar13 + 8);
        do {
          iVar3 = *(int *)(this + 0x38);
          iVar10 = 0;
          lVar17 = (long)iVar3 << 4;
          do {
            while (iVar24 == iVar10) {
              iVar10 = iVar10 + 1;
              puVar18 = *(undefined8 **)(*(long *)(param_1 + 0xc0) + 8);
              *(undefined8 *)(lVar13 + lVar17) = *puVar18;
              *(undefined4 *)(lVar13 + 8 + lVar17) = *(undefined4 *)(puVar18 + 1);
              lVar17 = lVar17 + 0x10;
              if (iVar10 == iVar23) goto LAB_001007c9;
            }
            puVar18 = (undefined8 *)(lVar13 + lVar17);
            iVar10 = iVar10 + 1;
            lVar17 = lVar17 + 0x10;
            *puVar18 = 0;
            *(undefined4 *)(puVar18 + 1) = 2;
          } while (iVar10 != iVar23);
LAB_001007c9:
          iVar24 = iVar24 + 1;
          *(int *)(this + 0x38) = iVar23 + iVar3;
          if (iVar24 == iVar16) {
            return;
          }
        } while( true );
      }
    }
    else {
      cVar8 = (**(code **)(lVar17 + 0x148))(param_1);
      if (cVar8 == '\0') {
        lVar17 = *(long *)param_1;
        goto LAB_00100620;
      }
    }
    if (*(int *)(this + 0x70) < 1) {
      return;
    }
    iVar16 = *(int *)(this + 0x74);
    iVar23 = 0;
    do {
      pTVar14 = param_1 + 0x20;
      iVar24 = 0;
      if (0 < iVar16) {
        do {
          while( true ) {
            iVar16 = iVar16 * iVar23 + *(int *)(this + 0x38) + iVar24;
            pTVar12 = pTVar14;
            if (*(code **)(*(long *)param_1 + 0xf0) != TIntermTyped::getType) {
              pTVar12 = (TIntermConstantUnion *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
            }
            if (*(code **)(*(long *)pTVar12 + 0x70) == TType::getMatrixRows) {
              uVar22 = (byte)pTVar12[10] & 0xf;
            }
            else {
              uVar22 = (**(code **)(*(long *)pTVar12 + 0x70))();
            }
            if ((int)uVar22 <= iVar24) break;
            pTVar12 = pTVar14;
            if (*(code **)(*(long *)param_1 + 0xf0) != TIntermTyped::getType) {
              pTVar12 = (TIntermConstantUnion *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
            }
            if (*(code **)(*(long *)pTVar12 + 0x68) == TType::getMatrixCols) {
              uVar22 = (uint)((byte)pTVar12[9] >> 4);
            }
            else {
              uVar22 = (**(code **)(*(long *)pTVar12 + 0x68))();
            }
            if ((int)uVar22 <= iVar23) break;
            pTVar12 = pTVar14;
            if (*(code **)(*(long *)param_1 + 0xf0) != TIntermTyped::getType) {
              pTVar12 = (TIntermConstantUnion *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
            }
            if (*(code **)(*(long *)pTVar12 + 0x70) == TType::getMatrixRows) {
              uVar22 = (byte)pTVar12[10] & 0xf;
            }
            else {
              uVar22 = (**(code **)(*(long *)pTVar12 + 0x70))();
            }
            puVar18 = (undefined8 *)((long)iVar16 * 0x10 + *(long *)(lVar13 + 8));
            puVar19 = (undefined8 *)
                      ((long)(int)(uVar22 * iVar23 + iVar24) * 0x10 +
                      *(long *)(*(long *)(param_1 + 0xc0) + 8));
            *puVar18 = *puVar19;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar19 + 1);
LAB_00100376:
            iVar16 = *(int *)(this + 0x74);
            iVar24 = iVar24 + 1;
            if (iVar16 <= iVar24) goto LAB_001003fb;
          }
          uVar7 = _LC0;
          puVar18 = (undefined8 *)(*(long *)(lVar13 + 8) + (long)iVar16 * 0x10);
          if (iVar24 == iVar23) {
            *(undefined4 *)(puVar18 + 1) = 2;
            *puVar18 = uVar7;
            goto LAB_00100376;
          }
          iVar16 = *(int *)(this + 0x74);
          iVar24 = iVar24 + 1;
          *puVar18 = 0;
          *(undefined4 *)(puVar18 + 1) = 2;
        } while (iVar24 < iVar16);
      }
LAB_001003fb:
      iVar23 = iVar23 + 1;
      if (*(int *)(this + 0x70) <= iVar23) {
        return;
      }
    } while( true );
  }
  if (*(code **)(lVar17 + 0xf0) == TIntermTyped::getType) {
    pTVar14 = param_1 + 0x20;
  }
  else {
    pTVar14 = (TIntermConstantUnion *)(**(code **)(lVar17 + 0xf0))(param_1);
  }
  if (*(code **)(*(long *)pTVar14 + 0x38) == TType::getBasicType) {
    uVar9 = (uint)(byte)pTVar14[8];
    if (pTVar14[8] == (TIntermConstantUnion)0xf) goto LAB_00100510;
LAB_00100111:
    if (uVar9 == 0x10) goto LAB_00100510;
    if ((byte)pTVar14[9] < 0x10) {
      uVar15 = (byte)pTVar14[9] & 0xf;
    }
    else {
      uVar15 = (uint)((byte)pTVar14[9] >> 4) * ((byte)pTVar14[10] & 0xf);
    }
LAB_00100140:
    if ((*(long *)(pTVar14 + 0x60) == 0) ||
       (lVar17 = *(long *)(*(long *)(pTVar14 + 0x60) + 8), lVar17 == 0)) goto LAB_0010018f;
  }
  else {
    iVar16 = (**(code **)(*(long *)pTVar14 + 0x38))(pTVar14);
    if (iVar16 != 0xf) {
      if (*(code **)(*(long *)pTVar14 + 0x38) == TType::getBasicType) {
        uVar9 = (uint)(byte)pTVar14[8];
      }
      else {
        uVar9 = (**(code **)(*(long *)pTVar14 + 0x38))(pTVar14);
      }
      goto LAB_00100111;
    }
LAB_00100510:
    uVar15 = 0;
    puVar18 = *(undefined8 **)(*(long *)(pTVar14 + 0x68) + 8);
    uVar9 = 0;
    if (puVar18 != *(undefined8 **)(*(long *)(pTVar14 + 0x68) + 0x10)) {
      do {
        pTVar6 = (TType *)*puVar18;
        puVar18 = puVar18 + 4;
        iVar16 = TType::computeNumComponents(pTVar6);
        uVar15 = uVar9 + iVar16;
        uVar9 = uVar15;
      } while (*(undefined8 **)(*(long *)(pTVar14 + 0x68) + 0x10) != puVar18);
      goto LAB_00100140;
    }
    if (*(long *)(pTVar14 + 0x60) == 0) {
      return;
    }
    lVar17 = *(long *)(*(long *)(pTVar14 + 0x60) + 8);
    if (lVar17 == 0) {
      return;
    }
  }
  piVar11 = *(int **)(lVar17 + 8);
  iVar16 = (int)(*(long *)(lVar17 + 0x10) - (long)piVar11 >> 4);
  if (iVar16 < 1) {
    iVar16 = 1;
  }
  else {
    piVar1 = piVar11 + (ulong)(iVar16 - 1) * 4 + 4;
    iVar16 = 1;
    do {
      iVar16 = iVar16 * *piVar11;
      piVar11 = piVar11 + 4;
    } while (piVar11 != piVar1);
  }
  uVar15 = uVar15 * iVar16;
LAB_0010018f:
  if (0 < (int)uVar15) {
    iVar16 = *(int *)(this + 0x38);
    uVar20 = (ulong)iVar16;
    lVar17 = 0;
    lVar21 = uVar20 * 0x10;
    do {
      if ((int)uVar22 <= (int)uVar20) {
        return;
      }
      uVar9 = (int)uVar20 + 1;
      uVar20 = (ulong)uVar9;
      lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
      puVar18 = (undefined8 *)(*(long *)(lVar13 + 8) + lVar17 + lVar21);
      *puVar18 = *(undefined8 *)(lVar5 + lVar17);
      puVar2 = (undefined4 *)(lVar5 + 8 + lVar17);
      lVar17 = lVar17 + 0x10;
      *(undefined4 *)(puVar18 + 1) = *puVar2;
      *(uint *)(this + 0x38) = uVar9;
    } while (uVar9 != iVar16 + uVar15);
  }
  return;
}



/* glslang::TConstTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 __thiscall
glslang::TConstTraverser::visitAggregate(TConstTraverser *this,undefined8 param_2,long *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  TType *this_00;
  bool bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  code *pcVar12;
  
  cVar4 = glslang::TIntermOperator::isConstructor();
  if ((cVar4 == '\0') && ((int)param_3[0x17] != 0xae)) {
    this[0x65] = (TConstTraverser)0x1;
    return 0;
  }
  if (*(code **)(*param_3 + 400) == TIntermAggregate::getSequence) {
    puVar10 = (undefined8 *)param_3[0x19];
    bVar3 = false;
    pcVar12 = TIntermAggregate::getSequence;
    if (param_3[0x1a] - (long)puVar10 == 8) {
LAB_00100974:
      plVar7 = (long *)(**(code **)(*(long *)*puVar10 + 0x18))();
      lVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
      if (lVar5 == 0) {
        lVar5 = *param_3;
        goto LAB_00100b34;
      }
      lVar5 = param_3[0x17];
      this[100] = (TConstTraverser)0x1;
      *(int *)(this + 0x60) = (int)lVar5;
      if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
        plVar7 = param_3 + 4;
      }
      else {
        plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
      }
      if (*(code **)(*plVar7 + 0x38) == TType::getBasicType) {
        uVar9 = (uint)*(byte *)(plVar7 + 1);
        if (*(byte *)(plVar7 + 1) == 0xf) goto LAB_00100b60;
LAB_001009e3:
        if (uVar9 == 0x10) goto LAB_00100b60;
        if (*(byte *)((long)plVar7 + 9) < 0x10) {
          uVar9 = *(byte *)((long)plVar7 + 9) & 0xf;
        }
        else {
          uVar9 = (uint)(*(byte *)((long)plVar7 + 9) >> 4) * (*(byte *)((long)plVar7 + 10) & 0xf);
        }
      }
      else {
        iVar11 = (**(code **)(*plVar7 + 0x38))(plVar7);
        if (iVar11 != 0xf) {
          if (*(code **)(*plVar7 + 0x38) == TType::getBasicType) {
            uVar9 = (uint)*(byte *)(plVar7 + 1);
          }
          else {
            uVar9 = (**(code **)(*plVar7 + 0x38))(plVar7);
          }
          goto LAB_001009e3;
        }
LAB_00100b60:
        uVar9 = 0;
        puVar10 = *(undefined8 **)(plVar7[0xd] + 8);
        if (puVar10 != *(undefined8 **)(plVar7[0xd] + 0x10)) {
          do {
            this_00 = (TType *)*puVar10;
            puVar10 = puVar10 + 4;
            iVar11 = TType::computeNumComponents(this_00);
            uVar9 = uVar9 + iVar11;
          } while (*(undefined8 **)(plVar7[0xd] + 0x10) != puVar10);
        }
      }
      if ((plVar7[0xc] != 0) && (lVar5 = *(long *)(plVar7[0xc] + 8), lVar5 != 0)) {
        piVar8 = *(int **)(lVar5 + 8);
        iVar11 = (int)(*(long *)(lVar5 + 0x10) - (long)piVar8 >> 4);
        if (iVar11 < 1) {
          iVar11 = 1;
        }
        else {
          piVar1 = piVar8 + (ulong)(iVar11 - 1) * 4 + 4;
          iVar11 = 1;
          do {
            iVar11 = iVar11 * *piVar8;
            piVar8 = piVar8 + 4;
          } while (piVar1 != piVar8);
        }
        uVar9 = uVar9 * iVar11;
      }
      lVar5 = *param_3;
      *(uint *)(this + 0x68) = uVar9;
      if (*(code **)(lVar5 + 0xf0) == TIntermTyped::getType) {
        plVar7 = param_3 + 4;
      }
      else {
        plVar7 = (long *)(**(code **)(lVar5 + 0xf0))(param_3);
      }
      if (*(code **)(*plVar7 + 0xe0) == TType::isMatrix) {
        lVar5 = *param_3;
        if (0xf < *(byte *)((long)plVar7 + 9)) {
LAB_00100aa0:
          pcVar12 = *(code **)(lVar5 + 0xf0);
          this[0x6c] = (TConstTraverser)0x1;
          if (pcVar12 == TIntermTyped::getType) {
            plVar7 = param_3 + 4;
          }
          else {
            plVar7 = (long *)(*pcVar12)(param_3);
          }
          if (*(code **)(*plVar7 + 0x68) == TType::getMatrixCols) {
            uVar9 = (uint)(*(byte *)((long)plVar7 + 9) >> 4);
          }
          else {
            uVar9 = (**(code **)(*plVar7 + 0x68))();
          }
          *(uint *)(this + 0x70) = uVar9;
          if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
            plVar7 = param_3 + 4;
          }
          else {
            plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
          }
          if (*(code **)(*plVar7 + 0x70) == TType::getMatrixRows) {
            uVar9 = *(byte *)((long)plVar7 + 10) & 0xf;
          }
          else {
            uVar9 = (**(code **)(*plVar7 + 0x70))();
          }
          *(uint *)(this + 0x74) = uVar9;
          lVar5 = *param_3;
        }
      }
      else {
        cVar4 = (**(code **)(*plVar7 + 0xe0))();
        lVar5 = *param_3;
        if (cVar4 != '\0') goto LAB_00100aa0;
      }
      pcVar12 = *(code **)(lVar5 + 400);
      bVar3 = true;
      goto LAB_00100b3e;
    }
  }
  else {
    lVar6 = (**(code **)(*param_3 + 400))(param_3);
    lVar5 = *param_3;
    if (*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8) == 8) {
      if (*(code **)(lVar5 + 400) == TIntermAggregate::getSequence) {
        puVar10 = (undefined8 *)param_3[0x19];
      }
      else {
        lVar5 = (**(code **)(lVar5 + 400))(param_3);
        puVar10 = *(undefined8 **)(lVar5 + 8);
      }
      goto LAB_00100974;
    }
LAB_00100b34:
    pcVar12 = *(code **)(lVar5 + 400);
    bVar3 = false;
LAB_00100b3e:
    if (pcVar12 != TIntermAggregate::getSequence) {
      plVar7 = (long *)(*pcVar12)(param_3);
      pcVar12 = *(code **)(*param_3 + 400);
      goto LAB_00100894;
    }
  }
  plVar7 = param_3 + 0x18;
LAB_00100894:
  puVar10 = (undefined8 *)plVar7[1];
  while( true ) {
    if (pcVar12 == TIntermAggregate::getSequence) {
      puVar2 = (undefined8 *)param_3[0x1a];
    }
    else {
      lVar5 = (*pcVar12)(param_3);
      puVar2 = *(undefined8 **)(lVar5 + 0x10);
    }
    if (puVar2 == puVar10) break;
    if ((int)param_3[0x17] == 0xae) {
      *(undefined4 *)(this + 0x38) = 0;
    }
    plVar7 = (long *)*puVar10;
    puVar10 = puVar10 + 1;
    (**(code **)(*plVar7 + 0x10))(plVar7,this);
    pcVar12 = *(code **)(*param_3 + 400);
  }
  if (bVar3) {
    this[100] = (TConstTraverser)0x0;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    this[0x6c] = (TConstTraverser)0x0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  return 0;
}



/* glslang::TIntermediate::parseConstTree(TIntermNode*, glslang::TConstUnionArray,
   glslang::TOperator, glslang::TType const&, bool) */

undefined1 __thiscall
glslang::TIntermediate::parseConstTree
          (undefined8 param_1_00,long *param_1,long param_3,undefined4 param_4,undefined8 param_5,
          undefined1 param_6)

{
  undefined1 uVar1;
  long in_FS_OFFSET;
  undefined **local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (param_1 != (long *)0x0) {
    local_a8 = &PTR__TIntermTraverser_001019f8;
    local_a0 = 1;
    local_9c = 0;
    local_90 = glslang::GetThreadPoolAllocator();
    local_a8 = &PTR__TConstTraverser_00101a60;
    local_68 = &PTR__TConstUnionArray_001019d8;
    local_60 = *(undefined8 *)(param_3 + 8);
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_43 = 0;
    local_3c = 0;
    local_38 = 0;
    local_70 = 0;
    local_58 = 0;
    local_50 = param_5;
    local_48 = param_4;
    local_44 = param_6;
    (**(code **)(*param_1 + 0x10))(param_1,&local_a8);
    uVar1 = local_43;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TType::getBasicType() const */

TType __thiscall glslang::TType::getBasicType(TType *this)

{
  return this[8];
}



/* glslang::TType::getMatrixCols() const */

byte __thiscall glslang::TType::getMatrixCols(TType *this)

{
  return (byte)this[9] >> 4;
}



/* glslang::TType::getMatrixRows() const */

byte __thiscall glslang::TType::getMatrixRows(TType *this)

{
  return (byte)this[10] & 0xf;
}



/* glslang::TType::isMatrix() const */

bool __thiscall glslang::TType::isMatrix(TType *this)

{
  return 0xf < (byte)this[9];
}



/* glslang::TConstUnionArray::~TConstUnionArray() */

void __thiscall glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this)

{
  return;
}



/* glslang::TIntermTyped::getType() const */

TIntermTyped * __thiscall glslang::TIntermTyped::getType(TIntermTyped *this)

{
  return this + 0x20;
}



/* glslang::TIntermTyped::isMatrix() const */

bool __thiscall glslang::TIntermTyped::isMatrix(TIntermTyped *this)

{
  return 0xf < (byte)this[0x29];
}



/* glslang::TIntermAggregate::getSequence() */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
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



/* glslang::TConstTraverser::~TConstTraverser() */

void __thiscall glslang::TConstTraverser::~TConstTraverser(TConstTraverser *this)

{
  return;
}



/* glslang::TType::computeNumComponents() const */

uint __thiscall glslang::TType::computeNumComponents(TType *this)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  TType *this_00;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  uint uVar25;
  long *plVar26;
  long *plVar27;
  
  if (*(code **)(*(long *)this + 0x38) == getBasicType) {
    uVar10 = (uint)(byte)this[8];
    if (this[8] != (TType)0xf) {
LAB_00100eab:
      if (uVar10 != 0x10) {
        if ((byte)this[9] < 0x10) {
          uVar10 = (byte)this[9] & 0xf;
        }
        else {
          uVar10 = (uint)((byte)this[9] >> 4) * ((byte)this[10] & 0xf);
        }
        goto LAB_00100ed8;
      }
    }
  }
  else {
    iVar14 = (**(code **)(*(long *)this + 0x38))();
    if (iVar14 != 0xf) {
      if (*(code **)(*(long *)this + 0x38) == getBasicType) {
        uVar10 = (uint)(byte)this[8];
      }
      else {
        uVar10 = (**(code **)(*(long *)this + 0x38))(this);
      }
      goto LAB_00100eab;
    }
  }
  uVar10 = 0;
  plVar26 = *(long **)(*(long *)(this + 0x68) + 8);
  if (plVar26 != *(long **)(*(long *)(this + 0x68) + 0x10)) {
    do {
      plVar3 = (long *)*plVar26;
      if (*(code **)(*plVar3 + 0x38) == getBasicType) {
        uVar11 = (uint)*(byte *)(plVar3 + 1);
        if (*(byte *)(plVar3 + 1) == 0xf) goto LAB_00100fbd;
LAB_00100f75:
        if (uVar11 == 0x10) goto LAB_00100fbd;
        if (*(byte *)((long)plVar3 + 9) < 0x10) {
          uVar11 = *(byte *)((long)plVar3 + 9) & 0xf;
          goto LAB_001010ac;
        }
        uVar11 = (uint)(*(byte *)((long)plVar3 + 9) >> 4) * (*(byte *)((long)plVar3 + 10) & 0xf);
        lVar2 = plVar3[0xc];
      }
      else {
        iVar14 = (**(code **)(*plVar3 + 0x38))(plVar3);
        if (iVar14 != 0xf) {
          if (*(code **)(*plVar3 + 0x38) == getBasicType) {
            uVar11 = (uint)*(byte *)(plVar3 + 1);
          }
          else {
            uVar11 = (**(code **)(*plVar3 + 0x38))(plVar3);
          }
          goto LAB_00100f75;
        }
LAB_00100fbd:
        uVar13 = 0;
        uVar11 = 0;
        plVar16 = *(long **)(plVar3[0xd] + 8);
        if (plVar16 != *(long **)(plVar3[0xd] + 0x10)) {
          do {
            plVar4 = (long *)*plVar16;
            if (*(code **)(*plVar4 + 0x38) == getBasicType) {
              uVar11 = (uint)*(byte *)(plVar4 + 1);
              if (*(byte *)(plVar4 + 1) == 0xf) goto LAB_00101104;
LAB_0010100e:
              if (uVar11 == 0x10) goto LAB_00101104;
              if (*(byte *)((long)plVar4 + 9) < 0x10) {
                uVar11 = *(byte *)((long)plVar4 + 9) & 0xf;
              }
              else {
                uVar11 = (uint)(*(byte *)((long)plVar4 + 9) >> 4) *
                         (*(byte *)((long)plVar4 + 10) & 0xf);
              }
            }
            else {
              iVar14 = (**(code **)(*plVar4 + 0x38))(plVar4);
              if (iVar14 != 0xf) {
                if (*(code **)(*plVar4 + 0x38) == getBasicType) {
                  uVar11 = (uint)*(byte *)(plVar4 + 1);
                }
                else {
                  uVar11 = (**(code **)(*plVar4 + 0x38))(plVar4);
                }
                goto LAB_0010100e;
              }
LAB_00101104:
              uVar25 = 0;
              uVar11 = 0;
              plVar23 = *(long **)(plVar4[0xd] + 8);
              if (plVar23 != *(long **)(plVar4[0xd] + 0x10)) {
                do {
                  plVar5 = (long *)*plVar23;
                  if (*(code **)(*plVar5 + 0x38) == getBasicType) {
                    uVar11 = (uint)*(byte *)(plVar5 + 1);
                    if (*(byte *)(plVar5 + 1) == 0xf) goto LAB_00101208;
LAB_0010115d:
                    if (uVar11 == 0x10) goto LAB_00101208;
                    if (*(byte *)((long)plVar5 + 9) < 0x10) {
                      uVar11 = *(byte *)((long)plVar5 + 9) & 0xf;
                    }
                    else {
                      uVar11 = (uint)(*(byte *)((long)plVar5 + 9) >> 4) *
                               (*(byte *)((long)plVar5 + 10) & 0xf);
                    }
                  }
                  else {
                    iVar14 = (**(code **)(*plVar5 + 0x38))(plVar5);
                    if (iVar14 != 0xf) {
                      if (*(code **)(*plVar5 + 0x38) == getBasicType) {
                        uVar11 = (uint)*(byte *)(plVar5 + 1);
                      }
                      else {
                        uVar11 = (**(code **)(*plVar5 + 0x38))(plVar5);
                      }
                      goto LAB_0010115d;
                    }
LAB_00101208:
                    uVar20 = 0;
                    uVar11 = 0;
                    plVar17 = *(long **)(plVar5[0xd] + 8);
                    if (plVar17 != *(long **)(plVar5[0xd] + 0x10)) {
                      do {
                        plVar6 = (long *)*plVar17;
                        if (*(code **)(*plVar6 + 0x38) == getBasicType) {
                          uVar11 = (uint)*(byte *)(plVar6 + 1);
                          if (*(byte *)(plVar6 + 1) == 0xf) goto LAB_00101300;
LAB_00101258:
                          if (uVar11 == 0x10) goto LAB_00101300;
                          if (*(byte *)((long)plVar6 + 9) < 0x10) {
                            uVar11 = *(byte *)((long)plVar6 + 9) & 0xf;
                          }
                          else {
                            uVar11 = (uint)(*(byte *)((long)plVar6 + 9) >> 4) *
                                     (*(byte *)((long)plVar6 + 10) & 0xf);
                          }
                        }
                        else {
                          iVar14 = (**(code **)(*plVar6 + 0x38))(plVar6);
                          if (iVar14 != 0xf) {
                            if (*(code **)(*plVar6 + 0x38) == getBasicType) {
                              uVar11 = (uint)*(byte *)(plVar6 + 1);
                            }
                            else {
                              uVar11 = (**(code **)(*plVar6 + 0x38))(plVar6);
                            }
                            goto LAB_00101258;
                          }
LAB_00101300:
                          uVar11 = 0;
                          plVar27 = *(long **)(plVar6[0xd] + 8);
                          if (plVar27 != *(long **)(plVar6[0xd] + 0x10)) {
                            do {
                              plVar7 = (long *)*plVar27;
                              if (*(code **)(*plVar7 + 0x38) == getBasicType) {
                                uVar21 = (uint)*(byte *)(plVar7 + 1);
                                if (*(byte *)(plVar7 + 1) == 0xf) goto LAB_00101408;
LAB_00101353:
                                if (uVar21 == 0x10) goto LAB_00101408;
                                if (*(byte *)((long)plVar7 + 9) < 0x10) {
                                  uVar21 = *(byte *)((long)plVar7 + 9) & 0xf;
                                }
                                else {
                                  uVar21 = (uint)(*(byte *)((long)plVar7 + 9) >> 4) *
                                           (*(byte *)((long)plVar7 + 10) & 0xf);
                                }
                              }
                              else {
                                iVar14 = (**(code **)(*plVar7 + 0x38))(plVar7);
                                if (iVar14 != 0xf) {
                                  if (*(code **)(*plVar7 + 0x38) == getBasicType) {
                                    uVar21 = (uint)*(byte *)(plVar7 + 1);
                                  }
                                  else {
                                    uVar21 = (**(code **)(*plVar7 + 0x38))(plVar7);
                                  }
                                  goto LAB_00101353;
                                }
LAB_00101408:
                                uVar21 = 0;
                                plVar22 = *(long **)(plVar7[0xd] + 8);
                                if (*(long **)(plVar7[0xd] + 0x10) != plVar22) {
                                  do {
                                    plVar8 = (long *)*plVar22;
                                    if (*(code **)(*plVar8 + 0x38) == getBasicType) {
                                      uVar19 = (uint)*(byte *)(plVar8 + 1);
                                      if (*(byte *)(plVar8 + 1) == 0xf) goto LAB_00101510;
LAB_00101460:
                                      if (uVar19 == 0x10) goto LAB_00101510;
                                      if (*(byte *)((long)plVar8 + 9) < 0x10) {
                                        uVar19 = *(byte *)((long)plVar8 + 9) & 0xf;
                                      }
                                      else {
                                        uVar19 = (uint)(*(byte *)((long)plVar8 + 9) >> 4) *
                                                 (*(byte *)((long)plVar8 + 10) & 0xf);
                                      }
                                    }
                                    else {
                                      iVar14 = (**(code **)(*plVar8 + 0x38))(plVar8);
                                      if (iVar14 != 0xf) {
                                        if (*(code **)(*plVar8 + 0x38) == getBasicType) {
                                          uVar19 = (uint)*(byte *)(plVar8 + 1);
                                        }
                                        else {
                                          uVar19 = (**(code **)(*plVar8 + 0x38))(plVar8);
                                        }
                                        goto LAB_00101460;
                                      }
LAB_00101510:
                                      uVar19 = 0;
                                      plVar24 = *(long **)(plVar8[0xd] + 8);
                                      if (*(long **)(plVar8[0xd] + 0x10) != plVar24) {
                                        uVar19 = 0;
                                        do {
                                          plVar9 = (long *)*plVar24;
                                          if (*(code **)(*plVar9 + 0x38) == getBasicType) {
                                            uVar15 = (uint)*(byte *)(plVar9 + 1);
                                            if (*(byte *)(plVar9 + 1) == 0xf) goto LAB_00101618;
LAB_00101568:
                                            if (uVar15 == 0x10) goto LAB_00101618;
                                            if (*(byte *)((long)plVar9 + 9) < 0x10) {
                                              uVar15 = *(byte *)((long)plVar9 + 9) & 0xf;
                                            }
                                            else {
                                              uVar15 = (uint)(*(byte *)((long)plVar9 + 9) >> 4) *
                                                       (*(byte *)((long)plVar9 + 10) & 0xf);
                                            }
                                          }
                                          else {
                                            iVar14 = (**(code **)(*plVar9 + 0x38))(plVar9);
                                            if (iVar14 != 0xf) {
                                              if (*(code **)(*plVar9 + 0x38) == getBasicType) {
                                                uVar15 = (uint)*(byte *)(plVar9 + 1);
                                              }
                                              else {
                                                uVar15 = (**(code **)(*plVar9 + 0x38))(plVar9);
                                              }
                                              goto LAB_00101568;
                                            }
LAB_00101618:
                                            uVar15 = 0;
                                            puVar18 = *(undefined8 **)(plVar9[0xd] + 8);
                                            if (puVar18 != *(undefined8 **)(plVar9[0xd] + 0x10)) {
                                              do {
                                                this_00 = (TType *)*puVar18;
                                                puVar18 = puVar18 + 4;
                                                iVar14 = computeNumComponents(this_00);
                                                uVar15 = uVar15 + iVar14;
                                              } while (*(undefined8 **)(plVar9[0xd] + 0x10) !=
                                                       puVar18);
                                            }
                                          }
                                          if ((plVar9[0xc] != 0) &&
                                             (lVar2 = *(long *)(plVar9[0xc] + 8), lVar2 != 0)) {
                                            piVar12 = *(int **)(lVar2 + 8);
                                            iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12
                                                          >> 4);
                                            if (iVar14 < 1) {
                                              iVar14 = 1;
                                            }
                                            else {
                                              piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                                              iVar14 = 1;
                                              do {
                                                iVar14 = iVar14 * *piVar12;
                                                piVar12 = piVar12 + 4;
                                              } while (piVar12 != piVar1);
                                            }
                                            uVar15 = uVar15 * iVar14;
                                          }
                                          uVar19 = uVar19 + uVar15;
                                          plVar24 = plVar24 + 4;
                                        } while (*(long **)(plVar8[0xd] + 0x10) != plVar24);
                                      }
                                    }
                                    if ((plVar8[0xc] != 0) &&
                                       (lVar2 = *(long *)(plVar8[0xc] + 8), lVar2 != 0)) {
                                      piVar12 = *(int **)(lVar2 + 8);
                                      iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
                                      if (iVar14 < 1) {
                                        iVar14 = 1;
                                      }
                                      else {
                                        piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                                        iVar14 = 1;
                                        do {
                                          iVar14 = iVar14 * *piVar12;
                                          piVar12 = piVar12 + 4;
                                        } while (piVar12 != piVar1);
                                      }
                                      uVar19 = uVar19 * iVar14;
                                    }
                                    uVar21 = uVar21 + uVar19;
                                    plVar22 = plVar22 + 4;
                                  } while (*(long **)(plVar7[0xd] + 0x10) != plVar22);
                                }
                              }
                              if ((plVar7[0xc] != 0) &&
                                 (lVar2 = *(long *)(plVar7[0xc] + 8), lVar2 != 0)) {
                                piVar12 = *(int **)(lVar2 + 8);
                                iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
                                if (iVar14 < 1) {
                                  iVar14 = 1;
                                }
                                else {
                                  piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                                  iVar14 = 1;
                                  do {
                                    iVar14 = iVar14 * *piVar12;
                                    piVar12 = piVar12 + 4;
                                  } while (piVar12 != piVar1);
                                }
                                uVar21 = uVar21 * iVar14;
                              }
                              uVar11 = uVar11 + uVar21;
                              plVar27 = plVar27 + 4;
                            } while (*(long **)(plVar6[0xd] + 0x10) != plVar27);
                          }
                        }
                        if ((plVar6[0xc] != 0) && (lVar2 = *(long *)(plVar6[0xc] + 8), lVar2 != 0))
                        {
                          piVar12 = *(int **)(lVar2 + 8);
                          iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
                          if (iVar14 < 1) {
                            iVar14 = 1;
                          }
                          else {
                            piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                            iVar14 = 1;
                            do {
                              iVar14 = iVar14 * *piVar12;
                              piVar12 = piVar12 + 4;
                            } while (piVar12 != piVar1);
                          }
                          uVar11 = uVar11 * iVar14;
                        }
                        uVar11 = uVar20 + uVar11;
                        plVar17 = plVar17 + 4;
                        uVar20 = uVar11;
                      } while (*(long **)(plVar5[0xd] + 0x10) != plVar17);
                    }
                  }
                  if ((plVar5[0xc] != 0) && (lVar2 = *(long *)(plVar5[0xc] + 8), lVar2 != 0)) {
                    piVar12 = *(int **)(lVar2 + 8);
                    iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
                    if (iVar14 < 1) {
                      iVar14 = 1;
                    }
                    else {
                      piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                      iVar14 = 1;
                      do {
                        iVar14 = iVar14 * *piVar12;
                        piVar12 = piVar12 + 4;
                      } while (piVar12 != piVar1);
                    }
                    uVar11 = uVar11 * iVar14;
                  }
                  uVar11 = uVar25 + uVar11;
                  plVar23 = plVar23 + 4;
                  uVar25 = uVar11;
                } while (*(long **)(plVar4[0xd] + 0x10) != plVar23);
              }
            }
            if ((plVar4[0xc] != 0) && (lVar2 = *(long *)(plVar4[0xc] + 8), lVar2 != 0)) {
              piVar12 = *(int **)(lVar2 + 8);
              iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
              if (iVar14 < 1) {
                iVar14 = 1;
              }
              else {
                piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
                iVar14 = 1;
                do {
                  iVar14 = iVar14 * *piVar12;
                  piVar12 = piVar12 + 4;
                } while (piVar12 != piVar1);
              }
              uVar11 = uVar11 * iVar14;
            }
            uVar11 = uVar13 + uVar11;
            plVar16 = plVar16 + 4;
            uVar13 = uVar11;
          } while (*(long **)(plVar3[0xd] + 0x10) != plVar16);
        }
LAB_001010ac:
        lVar2 = plVar3[0xc];
      }
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 8), lVar2 != 0)) {
        piVar12 = *(int **)(lVar2 + 8);
        iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        else {
          piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
          iVar14 = 1;
          do {
            iVar14 = iVar14 * *piVar12;
            piVar12 = piVar12 + 4;
          } while (piVar12 != piVar1);
        }
        uVar11 = uVar11 * iVar14;
      }
      uVar10 = uVar10 + uVar11;
      plVar26 = plVar26 + 4;
    } while (*(long **)(*(long *)(this + 0x68) + 0x10) != plVar26);
  }
LAB_00100ed8:
  if ((*(long *)(this + 0x60) != 0) && (lVar2 = *(long *)(*(long *)(this + 0x60) + 8), lVar2 != 0))
  {
    piVar12 = *(int **)(lVar2 + 8);
    iVar14 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar12 >> 4);
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    else {
      piVar1 = piVar12 + (ulong)(iVar14 - 1) * 4 + 4;
      iVar14 = 1;
      do {
        iVar14 = iVar14 * *piVar12;
        piVar12 = piVar12 + 4;
      } while (piVar12 != piVar1);
    }
    uVar10 = uVar10 * iVar14;
  }
  return uVar10;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TConstTraverser::~TConstTraverser() */

void __thiscall glslang::TConstTraverser::~TConstTraverser(TConstTraverser *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TConstUnionArray::~TConstUnionArray() */

void __thiscall glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


