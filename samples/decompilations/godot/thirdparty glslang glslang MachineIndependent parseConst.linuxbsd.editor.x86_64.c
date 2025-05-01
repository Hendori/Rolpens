
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
  int iVar11;
  int *piVar12;
  TIntermConstantUnion *pTVar13;
  long lVar14;
  TIntermConstantUnion *pTVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  
  lVar14 = *(long *)(this + 0x48);
  plVar4 = *(long **)(this + 0x58);
  if (*(code **)(*plVar4 + 0x38) == TType::getBasicType) {
    uVar23 = (uint)*(byte *)(plVar4 + 1);
    if (*(byte *)(plVar4 + 1) == 0xf) goto LAB_00100260;
LAB_00100049:
    if (uVar23 == 0x10) goto LAB_00100260;
    if (*(byte *)((long)plVar4 + 9) < 0x10) {
      uVar23 = *(byte *)((long)plVar4 + 9) & 0xf;
    }
    else {
      uVar23 = (uint)(*(byte *)((long)plVar4 + 9) >> 4) * (*(byte *)((long)plVar4 + 10) & 0xf);
    }
  }
  else {
    iVar10 = (**(code **)(*plVar4 + 0x38))(plVar4);
    if (iVar10 != 0xf) {
      if (*(code **)(*plVar4 + 0x38) == TType::getBasicType) {
        uVar23 = (uint)*(byte *)(plVar4 + 1);
      }
      else {
        uVar23 = (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      goto LAB_00100049;
    }
LAB_00100260:
    uVar23 = 0;
    puVar18 = *(undefined8 **)(plVar4[0xd] + 8);
    if (puVar18 != *(undefined8 **)(plVar4[0xd] + 0x10)) {
      do {
        pTVar6 = (TType *)*puVar18;
        puVar18 = puVar18 + 4;
        iVar10 = TType::computeNumComponents(pTVar6);
        uVar23 = uVar23 + iVar10;
      } while (*(undefined8 **)(plVar4[0xd] + 0x10) != puVar18);
    }
  }
  if ((plVar4[0xc] != 0) && (lVar17 = *(long *)(plVar4[0xc] + 8), lVar17 != 0)) {
    piVar12 = *(int **)(lVar17 + 8);
    iVar10 = (int)(*(long *)(lVar17 + 0x10) - (long)piVar12 >> 4);
    if (iVar10 < 1) {
      iVar16 = 1;
    }
    else {
      piVar1 = piVar12 + 4;
      iVar16 = 1;
      if (((int)(piVar1 + (ulong)(iVar10 - 1) * 4) - (int)piVar12 & 0x10U) == 0) goto LAB_001000d0;
      iVar16 = *piVar12;
      for (piVar12 = piVar1; piVar12 != piVar1 + (ulong)(iVar10 - 1) * 4; piVar12 = piVar12 + 8) {
LAB_001000d0:
        iVar16 = iVar16 * *piVar12 * piVar12[4];
      }
    }
    uVar23 = uVar23 * iVar16;
  }
  if ((int)uVar23 <= *(int *)(this + 0x38)) {
    return;
  }
  lVar17 = *(long *)param_1;
  if (this[100] != (TConstTraverser)0x0) {
    uVar9 = *(int *)(this + 0x38) + *(int *)(this + 0x68);
    if (this[0x6c] == (TConstTraverser)0x0) {
      if (*(code **)(lVar17 + 0xf0) == TIntermTyped::getType) {
        pTVar15 = param_1 + 0x20;
      }
      else {
        pTVar15 = (TIntermConstantUnion *)(**(code **)(lVar17 + 0xf0))(param_1);
      }
      iVar16 = TType::computeNumComponents((TType *)pTVar15);
      iVar10 = *(int *)(this + 0x38);
      if ((int)uVar9 <= (int)uVar23) {
        uVar23 = uVar9;
      }
      if ((int)uVar23 <= iVar10) {
        return;
      }
      lVar14 = *(long *)(lVar14 + 8);
      lVar17 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
      iVar24 = 0;
      lVar21 = (long)(iVar10 + 1);
      do {
        puVar18 = (undefined8 *)((long)iVar24 * 0x10 + lVar17);
        *(undefined8 *)(lVar14 + -0x10 + lVar21 * 0x10) = *puVar18;
        *(undefined4 *)(lVar14 + -8 + lVar21 * 0x10) = *(undefined4 *)(puVar18 + 1);
        *(int *)(this + 0x38) = (int)lVar21;
        lVar21 = lVar21 + 1;
        iVar24 = iVar24 + (uint)(1 < iVar16);
      } while (lVar21 != (ulong)(uVar23 - iVar10) + 1 + (long)iVar10);
      return;
    }
    if (*(code **)(lVar17 + 0x148) == TIntermTyped::isMatrix) {
      if ((byte)param_1[0x29] < 0x10) {
LAB_00100660:
        if (*(code **)(lVar17 + 0xf0) == TIntermTyped::getType) {
          pTVar15 = param_1 + 0x20;
        }
        else {
          pTVar15 = (TIntermConstantUnion *)(**(code **)(lVar17 + 0xf0))(param_1);
        }
        iVar10 = TType::computeNumComponents((TType *)pTVar15);
        if (iVar10 != 1) {
          iVar10 = *(int *)(this + 0x38);
          if ((int)uVar23 < (int)uVar9) {
            uVar9 = uVar23;
          }
          if ((int)uVar9 <= iVar10) {
            return;
          }
          lVar17 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
          lVar21 = (long)iVar10 * 0x10 + *(long *)(lVar14 + 8);
          lVar14 = 0;
          do {
            *(undefined8 *)(lVar21 + lVar14) = *(undefined8 *)(lVar17 + lVar14);
            *(undefined4 *)(lVar21 + 8 + lVar14) = *(undefined4 *)(lVar17 + 8 + lVar14);
            lVar14 = lVar14 + 0x10;
          } while (lVar14 != (ulong)(uVar9 - iVar10) << 4);
          *(uint *)(this + 0x38) = uVar9;
          return;
        }
        iVar10 = *(int *)(this + 0x70);
        if (iVar10 < 1) {
          return;
        }
        iVar16 = *(int *)(this + 0x74);
        if (iVar16 < 1) {
          return;
        }
        iVar24 = 0;
        lVar14 = *(long *)(lVar14 + 8);
        do {
          iVar3 = *(int *)(this + 0x38);
          iVar11 = 0;
          lVar17 = (long)iVar3 << 4;
          do {
            while (iVar24 != iVar11) {
              puVar18 = (undefined8 *)(lVar14 + lVar17);
              iVar11 = iVar11 + 1;
              lVar17 = lVar17 + 0x10;
              *puVar18 = 0;
              *(undefined4 *)(puVar18 + 1) = 2;
              if (iVar11 == iVar16) goto LAB_00100809;
            }
            iVar11 = iVar11 + 1;
            puVar18 = *(undefined8 **)(*(long *)(param_1 + 0xc0) + 8);
            *(undefined8 *)(lVar14 + lVar17) = *puVar18;
            *(undefined4 *)(lVar14 + 8 + lVar17) = *(undefined4 *)(puVar18 + 1);
            lVar17 = lVar17 + 0x10;
          } while (iVar11 != iVar16);
LAB_00100809:
          iVar24 = iVar24 + 1;
          *(int *)(this + 0x38) = iVar16 + iVar3;
          if (iVar24 == iVar10) {
            return;
          }
        } while( true );
      }
    }
    else {
      cVar8 = (**(code **)(lVar17 + 0x148))(param_1);
      if (cVar8 == '\0') {
        lVar17 = *(long *)param_1;
        goto LAB_00100660;
      }
    }
    if (*(int *)(this + 0x70) < 1) {
      return;
    }
    iVar10 = *(int *)(this + 0x74);
    iVar16 = 0;
    do {
      pTVar15 = param_1 + 0x20;
      iVar24 = 0;
      if (0 < iVar10) {
        do {
          while( true ) {
            iVar10 = iVar10 * iVar16 + *(int *)(this + 0x38) + iVar24;
            pTVar13 = pTVar15;
            if (*(code **)(*(long *)param_1 + 0xf0) != TIntermTyped::getType) {
              pTVar13 = (TIntermConstantUnion *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
            }
            if (*(code **)(*(long *)pTVar13 + 0x70) == TType::getMatrixRows) {
              uVar23 = (byte)pTVar13[10] & 0xf;
            }
            else {
              uVar23 = (**(code **)(*(long *)pTVar13 + 0x70))();
            }
            if ((int)uVar23 <= iVar24) break;
            pTVar13 = pTVar15;
            if (*(code **)(*(long *)param_1 + 0xf0) != TIntermTyped::getType) {
              pTVar13 = (TIntermConstantUnion *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
            }
            if (*(code **)(*(long *)pTVar13 + 0x68) == TType::getMatrixCols) {
              uVar23 = (uint)((byte)pTVar13[9] >> 4);
            }
            else {
              uVar23 = (**(code **)(*(long *)pTVar13 + 0x68))();
            }
            if ((int)uVar23 <= iVar16) break;
            pTVar13 = pTVar15;
            if (*(code **)(*(long *)param_1 + 0xf0) != TIntermTyped::getType) {
              pTVar13 = (TIntermConstantUnion *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
            }
            if (*(code **)(*(long *)pTVar13 + 0x70) == TType::getMatrixRows) {
              uVar23 = (byte)pTVar13[10] & 0xf;
            }
            else {
              uVar23 = (**(code **)(*(long *)pTVar13 + 0x70))();
            }
            puVar18 = (undefined8 *)((long)iVar10 * 0x10 + *(long *)(lVar14 + 8));
            puVar19 = (undefined8 *)
                      ((long)(int)(uVar23 * iVar16 + iVar24) * 0x10 +
                      *(long *)(*(long *)(param_1 + 0xc0) + 8));
            *puVar18 = *puVar19;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar19 + 1);
LAB_001003b6:
            iVar10 = *(int *)(this + 0x74);
            iVar24 = iVar24 + 1;
            if (iVar10 <= iVar24) goto LAB_0010043b;
          }
          uVar7 = _LC0;
          puVar18 = (undefined8 *)(*(long *)(lVar14 + 8) + (long)iVar10 * 0x10);
          if (iVar24 == iVar16) {
            *(undefined4 *)(puVar18 + 1) = 2;
            *puVar18 = uVar7;
            goto LAB_001003b6;
          }
          iVar10 = *(int *)(this + 0x74);
          iVar24 = iVar24 + 1;
          *puVar18 = 0;
          *(undefined4 *)(puVar18 + 1) = 2;
        } while (iVar24 < iVar10);
      }
LAB_0010043b:
      iVar16 = iVar16 + 1;
      if (*(int *)(this + 0x70) <= iVar16) {
        return;
      }
    } while( true );
  }
  if (*(code **)(lVar17 + 0xf0) == TIntermTyped::getType) {
    pTVar15 = param_1 + 0x20;
  }
  else {
    pTVar15 = (TIntermConstantUnion *)(**(code **)(lVar17 + 0xf0))(param_1);
  }
  if (*(code **)(*(long *)pTVar15 + 0x38) == TType::getBasicType) {
    uVar9 = (uint)(byte)pTVar15[8];
    if (pTVar15[8] == (TIntermConstantUnion)0xf) goto LAB_00100550;
LAB_00100135:
    if (uVar9 == 0x10) goto LAB_00100550;
    if ((byte)pTVar15[9] < 0x10) {
      uVar22 = (byte)pTVar15[9] & 0xf;
    }
    else {
      uVar22 = (uint)((byte)pTVar15[9] >> 4) * ((byte)pTVar15[10] & 0xf);
    }
LAB_00100165:
    if ((*(long *)(pTVar15 + 0x60) == 0) ||
       (lVar17 = *(long *)(*(long *)(pTVar15 + 0x60) + 8), lVar17 == 0)) goto LAB_001001d4;
  }
  else {
    iVar10 = (**(code **)(*(long *)pTVar15 + 0x38))(pTVar15);
    if (iVar10 != 0xf) {
      if (*(code **)(*(long *)pTVar15 + 0x38) == TType::getBasicType) {
        uVar9 = (uint)(byte)pTVar15[8];
      }
      else {
        uVar9 = (**(code **)(*(long *)pTVar15 + 0x38))(pTVar15);
      }
      goto LAB_00100135;
    }
LAB_00100550:
    uVar22 = 0;
    puVar18 = *(undefined8 **)(*(long *)(pTVar15 + 0x68) + 8);
    uVar9 = 0;
    if (puVar18 != *(undefined8 **)(*(long *)(pTVar15 + 0x68) + 0x10)) {
      do {
        pTVar6 = (TType *)*puVar18;
        puVar18 = puVar18 + 4;
        iVar10 = TType::computeNumComponents(pTVar6);
        uVar22 = uVar9 + iVar10;
        uVar9 = uVar22;
      } while (*(undefined8 **)(*(long *)(pTVar15 + 0x68) + 0x10) != puVar18);
      goto LAB_00100165;
    }
    if (*(long *)(pTVar15 + 0x60) == 0) {
      return;
    }
    lVar17 = *(long *)(*(long *)(pTVar15 + 0x60) + 8);
    if (lVar17 == 0) {
      return;
    }
  }
  piVar12 = *(int **)(lVar17 + 8);
  iVar10 = (int)(*(long *)(lVar17 + 0x10) - (long)piVar12 >> 4);
  if (iVar10 < 1) {
    iVar16 = 1;
  }
  else {
    piVar1 = piVar12 + 4;
    iVar16 = 1;
    if (((int)(piVar1 + (ulong)(iVar10 - 1) * 4) - (int)piVar12 & 0x10U) == 0) goto LAB_001001c0;
    iVar16 = *piVar12;
    for (piVar12 = piVar1; piVar12 != piVar1 + (ulong)(iVar10 - 1) * 4; piVar12 = piVar12 + 8) {
LAB_001001c0:
      iVar16 = iVar16 * *piVar12 * piVar12[4];
    }
  }
  uVar22 = uVar22 * iVar16;
LAB_001001d4:
  if (0 < (int)uVar22) {
    iVar10 = *(int *)(this + 0x38);
    uVar20 = (ulong)iVar10;
    lVar17 = 0;
    lVar21 = uVar20 * 0x10;
    do {
      if ((int)uVar23 <= (int)uVar20) {
        return;
      }
      uVar9 = (int)uVar20 + 1;
      uVar20 = (ulong)uVar9;
      lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
      puVar18 = (undefined8 *)(*(long *)(lVar14 + 8) + lVar17 + lVar21);
      *puVar18 = *(undefined8 *)(lVar5 + lVar17);
      puVar2 = (undefined4 *)(lVar5 + 8 + lVar17);
      lVar17 = lVar17 + 0x10;
      *(undefined4 *)(puVar18 + 1) = *puVar2;
      *(uint *)(this + 0x38) = uVar9;
    } while (uVar9 != iVar10 + uVar22);
  }
  return;
}



/* glslang::TConstTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 __thiscall
glslang::TConstTraverser::visitAggregate(TConstTraverser *this,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  TType *this_00;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  code *pcVar12;
  int *piVar13;
  
  cVar3 = glslang::TIntermOperator::isConstructor();
  if ((cVar3 == '\0') && ((int)param_3[0x17] != 0xae)) {
    this[0x65] = (TConstTraverser)0x1;
    return 0;
  }
  if (*(code **)(*param_3 + 400) == TIntermAggregate::getSequence) {
    puVar10 = (undefined8 *)param_3[0x19];
    bVar2 = false;
    pcVar12 = TIntermAggregate::getSequence;
    if (param_3[0x1a] - (long)puVar10 == 8) {
LAB_001009b4:
      plVar7 = (long *)(**(code **)(*(long *)*puVar10 + 0x18))();
      lVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
      if (lVar5 == 0) {
        lVar5 = *param_3;
        goto LAB_00100b84;
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
        if (*(byte *)(plVar7 + 1) == 0xf) goto LAB_00100bb0;
LAB_00100a23:
        if (uVar9 == 0x10) goto LAB_00100bb0;
        if (*(byte *)((long)plVar7 + 9) < 0x10) {
          uVar9 = *(byte *)((long)plVar7 + 9) & 0xf;
        }
        else {
          uVar9 = (uint)(*(byte *)((long)plVar7 + 9) >> 4) * (*(byte *)((long)plVar7 + 10) & 0xf);
        }
      }
      else {
        iVar4 = (**(code **)(*plVar7 + 0x38))(plVar7);
        if (iVar4 != 0xf) {
          if (*(code **)(*plVar7 + 0x38) == TType::getBasicType) {
            uVar9 = (uint)*(byte *)(plVar7 + 1);
          }
          else {
            uVar9 = (**(code **)(*plVar7 + 0x38))(plVar7);
          }
          goto LAB_00100a23;
        }
LAB_00100bb0:
        uVar9 = 0;
        puVar10 = *(undefined8 **)(plVar7[0xd] + 8);
        if (puVar10 != *(undefined8 **)(plVar7[0xd] + 0x10)) {
          do {
            this_00 = (TType *)*puVar10;
            puVar10 = puVar10 + 4;
            iVar4 = TType::computeNumComponents(this_00);
            uVar9 = uVar9 + iVar4;
          } while (*(undefined8 **)(plVar7[0xd] + 0x10) != puVar10);
        }
      }
      if ((plVar7[0xc] != 0) && (lVar5 = *(long *)(plVar7[0xc] + 8), lVar5 != 0)) {
        piVar8 = *(int **)(lVar5 + 8);
        iVar4 = (int)(*(long *)(lVar5 + 0x10) - (long)piVar8 >> 4);
        if (iVar4 < 1) {
          iVar11 = 1;
        }
        else {
          iVar11 = 1;
          piVar13 = piVar8 + 4 + (ulong)(iVar4 - 1) * 4;
          if (((int)piVar13 - (int)piVar8 & 0x10U) == 0) goto LAB_00100bf0;
          iVar11 = *piVar8;
          for (piVar8 = piVar8 + 4; piVar13 != piVar8; piVar8 = piVar8 + 0x10) {
LAB_00100bf0:
            iVar11 = iVar11 * *piVar8 * piVar8[4];
            if (piVar13 == piVar8 + 8) break;
            iVar11 = iVar11 * piVar8[8] * piVar8[0xc];
          }
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
LAB_00100aeb:
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
        cVar3 = (**(code **)(*plVar7 + 0xe0))();
        lVar5 = *param_3;
        if (cVar3 != '\0') goto LAB_00100aeb;
      }
      pcVar12 = *(code **)(lVar5 + 400);
      bVar2 = true;
      goto LAB_00100b8e;
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
      goto LAB_001009b4;
    }
LAB_00100b84:
    pcVar12 = *(code **)(lVar5 + 400);
    bVar2 = false;
LAB_00100b8e:
    if (pcVar12 != TIntermAggregate::getSequence) {
      plVar7 = (long *)(*pcVar12)(param_3);
      pcVar12 = *(code **)(*param_3 + 400);
      goto LAB_001008d4;
    }
  }
  plVar7 = param_3 + 0x18;
LAB_001008d4:
  puVar10 = (undefined8 *)plVar7[1];
  while( true ) {
    if (pcVar12 == TIntermAggregate::getSequence) {
      puVar1 = (undefined8 *)param_3[0x1a];
    }
    else {
      lVar5 = (*pcVar12)(param_3);
      puVar1 = *(undefined8 **)(lVar5 + 0x10);
    }
    if (puVar1 == puVar10) break;
    if ((int)param_3[0x17] == 0xae) {
      *(undefined4 *)(this + 0x38) = 0;
    }
    plVar7 = (long *)*puVar10;
    puVar10 = puVar10 + 1;
    (**(code **)(*plVar7 + 0x10))(plVar7,this);
    pcVar12 = *(code **)(*param_3 + 400);
  }
  if (bVar2) {
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
    local_a8 = &PTR__TIntermTraverser_00101b88;
    local_a0 = 1;
    local_9c = 0;
    local_90 = glslang::GetThreadPoolAllocator();
    local_a8 = &PTR__TConstTraverser_00101bf0;
    local_68 = &PTR__TConstUnionArray_00101b68;
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
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  
  if (*(code **)(*(long *)this + 0x38) == getBasicType) {
    uVar10 = (uint)(byte)this[8];
    if (this[8] != (TType)0xf) {
LAB_00100f2b:
      if (uVar10 != 0x10) {
        if ((byte)this[9] < 0x10) {
          uVar10 = (byte)this[9] & 0xf;
        }
        else {
          uVar10 = (uint)((byte)this[9] >> 4) * ((byte)this[10] & 0xf);
        }
        goto LAB_00100f54;
      }
    }
  }
  else {
    iVar13 = (**(code **)(*(long *)this + 0x38))();
    if (iVar13 != 0xf) {
      if (*(code **)(*(long *)this + 0x38) == getBasicType) {
        uVar10 = (uint)(byte)this[8];
      }
      else {
        uVar10 = (**(code **)(*(long *)this + 0x38))(this);
      }
      goto LAB_00100f2b;
    }
  }
  uVar10 = 0;
  plVar21 = *(long **)(*(long *)(this + 0x68) + 8);
  if (plVar21 != *(long **)(*(long *)(this + 0x68) + 0x10)) {
    do {
      plVar3 = (long *)*plVar21;
      if (*(code **)(*plVar3 + 0x38) == getBasicType) {
        uVar16 = (uint)*(byte *)(plVar3 + 1);
        if (*(byte *)(plVar3 + 1) == 0xf) goto LAB_001010ce;
LAB_0010101b:
        if (uVar16 == 0x10) goto LAB_001010ce;
        if (*(byte *)((long)plVar3 + 9) < 0x10) {
          uVar11 = *(byte *)((long)plVar3 + 9) & 0xf;
        }
        else {
          uVar11 = (uint)(*(byte *)((long)plVar3 + 9) >> 4) * (*(byte *)((long)plVar3 + 10) & 0xf);
        }
      }
      else {
        iVar13 = (**(code **)(*plVar3 + 0x38))(plVar3);
        if (iVar13 != 0xf) {
          if (*(code **)(*plVar3 + 0x38) == getBasicType) {
            uVar16 = (uint)*(byte *)(plVar3 + 1);
          }
          else {
            uVar16 = (**(code **)(*plVar3 + 0x38))(plVar3);
          }
          goto LAB_0010101b;
        }
LAB_001010ce:
        uVar16 = 0;
        uVar11 = 0;
        plVar27 = *(long **)(plVar3[0xd] + 8);
        if (plVar27 != *(long **)(plVar3[0xd] + 0x10)) {
          do {
            plVar4 = (long *)*plVar27;
            if (*(code **)(*plVar4 + 0x38) == getBasicType) {
              uVar11 = (uint)*(byte *)(plVar4 + 1);
              if (*(byte *)(plVar4 + 1) == 0xf) goto LAB_001011dd;
LAB_0010111f:
              if (uVar11 == 0x10) goto LAB_001011dd;
              if (*(byte *)((long)plVar4 + 9) < 0x10) {
                uVar11 = *(byte *)((long)plVar4 + 9) & 0xf;
              }
              else {
                uVar11 = (*(byte *)((long)plVar4 + 10) & 0xf) *
                         (uint)(*(byte *)((long)plVar4 + 9) >> 4);
              }
            }
            else {
              iVar13 = (**(code **)(*plVar4 + 0x38))(plVar4);
              if (iVar13 != 0xf) {
                if (*(code **)(*plVar4 + 0x38) == getBasicType) {
                  uVar11 = (uint)*(byte *)(plVar4 + 1);
                }
                else {
                  uVar11 = (**(code **)(*plVar4 + 0x38))(plVar4);
                }
                goto LAB_0010111f;
              }
LAB_001011dd:
              uVar11 = 0;
              plVar22 = *(long **)(plVar4[0xd] + 8);
              if (plVar22 != *(long **)(plVar4[0xd] + 0x10)) {
                do {
                  plVar5 = (long *)*plVar22;
                  if (*(code **)(*plVar5 + 0x38) == getBasicType) {
                    uVar19 = (uint)*(byte *)(plVar5 + 1);
                    if (*(byte *)(plVar5 + 1) == 0xf) goto LAB_001012fa;
LAB_00101234:
                    if (uVar19 == 0x10) goto LAB_001012fa;
                    if (*(byte *)((long)plVar5 + 9) < 0x10) {
                      uVar19 = *(byte *)((long)plVar5 + 9) & 0xf;
                    }
                    else {
                      uVar19 = (*(byte *)((long)plVar5 + 10) & 0xf) *
                               (uint)(*(byte *)((long)plVar5 + 9) >> 4);
                    }
                  }
                  else {
                    iVar13 = (**(code **)(*plVar5 + 0x38))(plVar5);
                    if (iVar13 != 0xf) {
                      if (*(code **)(*plVar5 + 0x38) == getBasicType) {
                        uVar19 = (uint)*(byte *)(plVar5 + 1);
                      }
                      else {
                        uVar19 = (**(code **)(*plVar5 + 0x38))(plVar5);
                      }
                      goto LAB_00101234;
                    }
LAB_001012fa:
                    uVar19 = 0;
                    plVar28 = *(long **)(plVar5[0xd] + 8);
                    if (plVar28 != *(long **)(plVar5[0xd] + 0x10)) {
                      do {
                        plVar6 = (long *)*plVar28;
                        if (*(code **)(*plVar6 + 0x38) == getBasicType) {
                          uVar12 = (uint)*(byte *)(plVar6 + 1);
                          if (*(byte *)(plVar6 + 1) == 0xf) goto LAB_00101428;
LAB_00101352:
                          if (uVar12 == 0x10) goto LAB_00101428;
                          if (*(byte *)((long)plVar6 + 9) < 0x10) {
                            uVar12 = *(byte *)((long)plVar6 + 9) & 0xf;
                          }
                          else {
                            uVar12 = (uint)(*(byte *)((long)plVar6 + 9) >> 4) *
                                     (*(byte *)((long)plVar6 + 10) & 0xf);
                          }
                        }
                        else {
                          iVar13 = (**(code **)(*plVar6 + 0x38))(plVar6);
                          if (iVar13 != 0xf) {
                            if (*(code **)(*plVar6 + 0x38) == getBasicType) {
                              uVar12 = (uint)*(byte *)(plVar6 + 1);
                            }
                            else {
                              uVar12 = (**(code **)(*plVar6 + 0x38))(plVar6);
                            }
                            goto LAB_00101352;
                          }
LAB_00101428:
                          uVar12 = 0;
                          plVar25 = *(long **)(plVar6[0xd] + 8);
                          if (plVar25 != *(long **)(plVar6[0xd] + 0x10)) {
                            uVar12 = 0;
                            do {
                              plVar7 = (long *)*plVar25;
                              if (*(code **)(*plVar7 + 0x38) == getBasicType) {
                                uVar15 = (uint)*(byte *)(plVar7 + 1);
                                if (*(byte *)(plVar7 + 1) == 0xf) goto LAB_00101550;
LAB_00101481:
                                if (uVar15 == 0x10) goto LAB_00101550;
                                if (*(byte *)((long)plVar7 + 9) < 0x10) {
                                  uVar24 = *(byte *)((long)plVar7 + 9) & 0xf;
                                }
                                else {
                                  uVar24 = (uint)(*(byte *)((long)plVar7 + 9) >> 4) *
                                           (*(byte *)((long)plVar7 + 10) & 0xf);
                                }
                              }
                              else {
                                iVar13 = (**(code **)(*plVar7 + 0x38))(plVar7);
                                if (iVar13 != 0xf) {
                                  if (*(code **)(*plVar7 + 0x38) == getBasicType) {
                                    uVar15 = (uint)*(byte *)(plVar7 + 1);
                                  }
                                  else {
                                    uVar15 = (**(code **)(*plVar7 + 0x38))(plVar7);
                                  }
                                  goto LAB_00101481;
                                }
LAB_00101550:
                                uVar15 = 0;
                                uVar24 = 0;
                                plVar29 = *(long **)(plVar7[0xd] + 8);
                                if (*(long **)(plVar7[0xd] + 0x10) != plVar29) {
                                  do {
                                    plVar8 = (long *)*plVar29;
                                    if (*(code **)(*plVar8 + 0x38) == getBasicType) {
                                      uVar24 = (uint)*(byte *)(plVar8 + 1);
                                      if (*(byte *)(plVar8 + 1) == 0xf) goto LAB_00101670;
LAB_001015a6:
                                      if (uVar24 == 0x10) goto LAB_00101670;
                                      if (*(byte *)((long)plVar8 + 9) < 0x10) {
                                        uVar24 = *(byte *)((long)plVar8 + 9) & 0xf;
                                      }
                                      else {
                                        uVar24 = (uint)(*(byte *)((long)plVar8 + 9) >> 4) *
                                                 (*(byte *)((long)plVar8 + 10) & 0xf);
                                      }
                                    }
                                    else {
                                      iVar13 = (**(code **)(*plVar8 + 0x38))(plVar8);
                                      if (iVar13 != 0xf) {
                                        if (*(code **)(*plVar8 + 0x38) == getBasicType) {
                                          uVar24 = (uint)*(byte *)(plVar8 + 1);
                                        }
                                        else {
                                          uVar24 = (**(code **)(*plVar8 + 0x38))(plVar8);
                                        }
                                        goto LAB_001015a6;
                                      }
LAB_00101670:
                                      uVar24 = 0;
                                      plVar26 = *(long **)(plVar8[0xd] + 8);
                                      if (*(long **)(plVar8[0xd] + 0x10) != plVar26) {
                                        uVar24 = 0;
                                        do {
                                          plVar9 = (long *)*plVar26;
                                          if (*(code **)(*plVar9 + 0x38) == getBasicType) {
                                            uVar14 = (uint)*(byte *)(plVar9 + 1);
                                            if (*(byte *)(plVar9 + 1) == 0xf) goto LAB_00101790;
LAB_001016c6:
                                            if (uVar14 == 0x10) goto LAB_00101790;
                                            if (*(byte *)((long)plVar9 + 9) < 0x10) {
                                              uVar20 = *(byte *)((long)plVar9 + 9) & 0xf;
                                            }
                                            else {
                                              uVar20 = (uint)(*(byte *)((long)plVar9 + 9) >> 4) *
                                                       (*(byte *)((long)plVar9 + 10) & 0xf);
                                            }
                                          }
                                          else {
                                            iVar13 = (**(code **)(*plVar9 + 0x38))(plVar9);
                                            if (iVar13 != 0xf) {
                                              if (*(code **)(*plVar9 + 0x38) == getBasicType) {
                                                uVar14 = (uint)*(byte *)(plVar9 + 1);
                                              }
                                              else {
                                                uVar14 = (**(code **)(*plVar9 + 0x38))(plVar9);
                                              }
                                              goto LAB_001016c6;
                                            }
LAB_00101790:
                                            uVar20 = 0;
                                            puVar23 = *(undefined8 **)(plVar9[0xd] + 8);
                                            uVar14 = 0;
                                            if (puVar23 != *(undefined8 **)(plVar9[0xd] + 0x10)) {
                                              do {
                                                this_00 = (TType *)*puVar23;
                                                puVar23 = puVar23 + 4;
                                                iVar13 = computeNumComponents(this_00);
                                                uVar20 = uVar14 + iVar13;
                                                uVar14 = uVar20;
                                              } while (*(undefined8 **)(plVar9[0xd] + 0x10) !=
                                                       puVar23);
                                            }
                                          }
                                          if ((plVar9[0xc] != 0) &&
                                             (lVar2 = *(long *)(plVar9[0xc] + 8), lVar2 != 0)) {
                                            piVar17 = *(int **)(lVar2 + 8);
                                            iVar13 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar17
                                                          >> 4);
                                            if (iVar13 < 1) {
                                              iVar18 = 1;
                                            }
                                            else {
                                              piVar1 = piVar17 + 4;
                                              iVar18 = 1;
                                              if (((int)(piVar1 + (ulong)(iVar13 - 1) * 4) -
                                                   (int)piVar17 & 0x10U) == 0) goto LAB_00101742;
                                              iVar18 = *piVar17;
                                              for (piVar17 = piVar1;
                                                  piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                                                  piVar17 = piVar17 + 8) {
LAB_00101742:
                                                iVar18 = iVar18 * *piVar17 * piVar17[4];
                                              }
                                            }
                                            uVar20 = uVar20 * iVar18;
                                          }
                                          uVar24 = uVar24 + uVar20;
                                          plVar26 = plVar26 + 4;
                                        } while (*(long **)(plVar8[0xd] + 0x10) != plVar26);
                                      }
                                    }
                                    if ((plVar8[0xc] != 0) &&
                                       (lVar2 = *(long *)(plVar8[0xc] + 8), lVar2 != 0)) {
                                      piVar17 = *(int **)(lVar2 + 8);
                                      iVar13 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar17 >> 4);
                                      if (iVar13 < 1) {
                                        iVar18 = 1;
                                      }
                                      else {
                                        piVar1 = piVar17 + 4;
                                        iVar18 = 1;
                                        if (((int)(piVar1 + (ulong)(iVar13 - 1) * 4) - (int)piVar17
                                            & 0x10U) == 0) goto LAB_00101624;
                                        iVar18 = *piVar17;
                                        for (piVar17 = piVar1;
                                            piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                                            piVar17 = piVar17 + 8) {
LAB_00101624:
                                          iVar18 = iVar18 * *piVar17 * piVar17[4];
                                        }
                                      }
                                      uVar24 = uVar24 * iVar18;
                                    }
                                    uVar24 = uVar15 + uVar24;
                                    plVar29 = plVar29 + 4;
                                    uVar15 = uVar24;
                                  } while (*(long **)(plVar7[0xd] + 0x10) != plVar29);
                                }
                              }
                              if ((plVar7[0xc] != 0) &&
                                 (lVar2 = *(long *)(plVar7[0xc] + 8), lVar2 != 0)) {
                                piVar17 = *(int **)(lVar2 + 8);
                                iVar13 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar17 >> 4);
                                if (iVar13 < 1) {
                                  iVar18 = 1;
                                }
                                else {
                                  piVar1 = piVar17 + 4;
                                  iVar18 = 1;
                                  if (((int)(piVar1 + (ulong)(iVar13 - 1) * 4) - (int)piVar17 &
                                      0x10U) == 0) goto LAB_00101508;
                                  iVar18 = *piVar17;
                                  for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4
                                      ; piVar17 = piVar17 + 8) {
LAB_00101508:
                                    iVar18 = iVar18 * *piVar17 * piVar17[4];
                                  }
                                }
                                uVar24 = uVar24 * iVar18;
                              }
                              uVar12 = uVar12 + uVar24;
                              plVar25 = plVar25 + 4;
                            } while (*(long **)(plVar6[0xd] + 0x10) != plVar25);
                          }
                        }
                        if ((plVar6[0xc] != 0) && (lVar2 = *(long *)(plVar6[0xc] + 8), lVar2 != 0))
                        {
                          piVar17 = *(int **)(lVar2 + 8);
                          iVar13 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar17 >> 4);
                          if (iVar13 < 1) {
                            iVar18 = 1;
                          }
                          else {
                            piVar1 = piVar17 + 4;
                            iVar18 = 1;
                            if (((int)(piVar1 + (ulong)(iVar13 - 1) * 4) - (int)piVar17 & 0x10U) ==
                                0) goto LAB_001013e0;
                            iVar18 = *piVar17;
                            for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                                piVar17 = piVar17 + 8) {
LAB_001013e0:
                              iVar18 = iVar18 * *piVar17 * piVar17[4];
                            }
                          }
                          uVar12 = uVar12 * iVar18;
                        }
                        uVar19 = uVar19 + uVar12;
                        plVar28 = plVar28 + 4;
                      } while (*(long **)(plVar5[0xd] + 0x10) != plVar28);
                    }
                  }
                  if ((plVar5[0xc] != 0) && (lVar2 = *(long *)(plVar5[0xc] + 8), lVar2 != 0)) {
                    piVar17 = *(int **)(lVar2 + 8);
                    iVar13 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar17 >> 4);
                    if (iVar13 < 1) {
                      iVar18 = 1;
                    }
                    else {
                      piVar1 = piVar17 + 4;
                      iVar18 = 1;
                      if (((int)(piVar1 + (ulong)(iVar13 - 1) * 4) - (int)piVar17 & 0x10U) == 0)
                      goto LAB_001012b8;
                      iVar18 = *piVar17;
                      for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                          piVar17 = piVar17 + 8) {
LAB_001012b8:
                        iVar18 = iVar18 * *piVar17 * piVar17[4];
                      }
                    }
                    uVar19 = uVar19 * iVar18;
                  }
                  uVar11 = uVar11 + uVar19;
                  plVar22 = plVar22 + 4;
                } while (*(long **)(plVar4[0xd] + 0x10) != plVar22);
              }
            }
            if ((plVar4[0xc] != 0) && (lVar2 = *(long *)(plVar4[0xc] + 8), lVar2 != 0)) {
              piVar17 = *(int **)(lVar2 + 8);
              iVar13 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar17 >> 4);
              if (iVar13 < 1) {
                iVar18 = 1;
              }
              else {
                piVar1 = piVar17 + 4;
                iVar18 = 1;
                if (((int)(piVar1 + (ulong)(iVar13 - 1) * 4) - (int)piVar17 & 0x10U) == 0)
                goto LAB_001011a0;
                iVar18 = *piVar17;
                for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                    piVar17 = piVar17 + 8) {
LAB_001011a0:
                  iVar18 = iVar18 * *piVar17 * piVar17[4];
                }
              }
              uVar11 = uVar11 * iVar18;
            }
            uVar11 = uVar16 + uVar11;
            plVar27 = plVar27 + 4;
            uVar16 = uVar11;
          } while (*(long **)(plVar3[0xd] + 0x10) != plVar27);
        }
      }
      if ((plVar3[0xc] != 0) && (lVar2 = *(long *)(plVar3[0xc] + 8), lVar2 != 0)) {
        piVar17 = *(int **)(lVar2 + 8);
        iVar13 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar17 >> 4);
        if (iVar13 < 1) {
          iVar18 = 1;
        }
        else {
          piVar1 = piVar17 + 4;
          iVar18 = 1;
          if (((int)(piVar1 + (ulong)(iVar13 - 1) * 4) - (int)piVar17 & 0x10U) == 0)
          goto LAB_0010109d;
          iVar18 = *piVar17;
          for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4; piVar17 = piVar17 + 8)
          {
LAB_0010109d:
            iVar18 = iVar18 * *piVar17 * piVar17[4];
          }
        }
        uVar11 = uVar11 * iVar18;
      }
      uVar10 = uVar10 + uVar11;
      plVar21 = plVar21 + 4;
    } while (*(long **)(*(long *)(this + 0x68) + 0x10) != plVar21);
  }
LAB_00100f54:
  if ((*(long *)(this + 0x60) != 0) && (lVar2 = *(long *)(*(long *)(this + 0x60) + 8), lVar2 != 0))
  {
    piVar17 = *(int **)(lVar2 + 8);
    iVar13 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar17 >> 4);
    if (iVar13 < 1) {
      iVar18 = 1;
    }
    else {
      piVar1 = piVar17 + 4;
      iVar18 = 1;
      if (((int)(piVar1 + (ulong)(iVar13 - 1) * 4) - (int)piVar17 & 0x10U) == 0) goto LAB_00100fa5;
      iVar18 = *piVar17;
      for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
LAB_00100fa5:
        iVar18 = iVar18 * *piVar17 * piVar17[4];
      }
    }
    uVar10 = uVar10 * iVar18;
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


