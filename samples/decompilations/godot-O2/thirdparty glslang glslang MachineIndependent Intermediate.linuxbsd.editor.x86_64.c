
/* glslang::canSignedIntTypeRepresentAllUnsignedValues(glslang::TBasicType, glslang::TBasicType) */

bool glslang::canSignedIntTypeRepresentAllUnsignedValues(int param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (uint)param_2;
  if (param_1 == 8) {
    return (uVar1 & 0xfffffffd) == 5;
  }
  bVar2 = false;
  if (param_1 == 10) {
    if (uVar1 < 10) {
      bVar2 = (0x2a0UL >> (param_2 & 0x3f) & 1) != 0;
    }
  }
  else if (param_1 == 6) {
    return uVar1 == 5;
  }
  return bVar2;
}



/* WARNING: Type propagation algorithm not settling */
/* glslang::TIntermediate::mapTypeToConstructorOp(glslang::TType const&) const [clone .part.0] */

int glslang::TIntermediate::mapTypeToConstructorOp(TType *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  TType *pTVar6;
  
  if (*(code **)(*(long *)param_1 + 0x38) == TType::getBasicType) {
    uVar3 = (uint)(byte)param_1[8];
  }
  else {
    uVar3 = (**(code **)(*(long *)param_1 + 0x38))();
  }
  switch(uVar3) {
  case 1:
    lVar5 = *(long *)param_1;
    if (*(code **)(lVar5 + 0xe0) == TType::isMatrix) {
      if ((byte)param_1[9] < 0x10) {
LAB_001005f0:
        if (*(code **)(lVar5 + 0x60) == TType::getVectorSize) {
          uVar3 = (byte)param_1[9] & 0xf;
        }
        else {
          uVar3 = (**(code **)(lVar5 + 0x60))(param_1);
        }
        if (3 < uVar3 - 1) {
          return 0;
        }
        return *(int *)(CSWTCH_1339 + (ulong)(uVar3 - 1) * 4);
      }
    }
    else {
      cVar2 = (**(code **)(lVar5 + 0xe0))(param_1);
      lVar5 = *(long *)param_1;
      if (cVar2 == '\0') goto LAB_001005f0;
    }
    if (*(code **)(lVar5 + 0x68) == TType::getMatrixCols) {
      uVar3 = (uint)((byte)param_1[9] >> 4);
    }
    else {
      uVar3 = (**(code **)(lVar5 + 0x68))(param_1);
    }
    if (uVar3 == 3) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x1ea;
    }
    else if (uVar3 == 4) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x1ed;
    }
    else {
      if (uVar3 != 2) {
        return 0;
      }
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x1e7;
    }
    goto joined_r0x0010095b;
  case 2:
    lVar5 = *(long *)param_1;
    if (*(code **)(lVar5 + 0x68) == TType::getMatrixCols) {
      bVar1 = (byte)param_1[9] >> 4;
      if (bVar1 == 0) {
LAB_001005a0:
        if (*(code **)(lVar5 + 0x60) == TType::getVectorSize) {
          uVar3 = (byte)param_1[9] & 0xf;
        }
        else {
          uVar3 = (**(code **)(lVar5 + 0x60))(param_1);
        }
        if (3 < uVar3 - 1) {
          return 0;
        }
        return *(int *)(CSWTCH_1343 + (ulong)(uVar3 - 1) * 4);
      }
LAB_00100194:
      uVar3 = (uint)bVar1;
    }
    else {
      iVar4 = (**(code **)(lVar5 + 0x68))(param_1);
      if (iVar4 == 0) {
        lVar5 = *(long *)param_1;
        goto LAB_001005a0;
      }
      if (*(code **)(*(long *)param_1 + 0x68) == TType::getMatrixCols) {
        bVar1 = (byte)param_1[9] >> 4;
        goto LAB_00100194;
      }
      uVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
    }
    if (uVar3 == 3) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x211;
    }
    else if (uVar3 == 4) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x214;
    }
    else {
      if (uVar3 != 2) {
        return 0;
      }
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x20e;
    }
    goto joined_r0x0010095b;
  case 3:
    lVar5 = *(long *)param_1;
    if (*(code **)(lVar5 + 0x68) == TType::getMatrixCols) {
      bVar1 = (byte)param_1[9] >> 4;
      if (bVar1 == 0) {
LAB_001006e0:
        if (*(code **)(lVar5 + 0x60) == TType::getVectorSize) {
          uVar3 = (byte)param_1[9] & 0xf;
        }
        else {
          uVar3 = (**(code **)(lVar5 + 0x60))(param_1);
        }
        if (3 < uVar3 - 1) {
          return 0;
        }
        return uVar3 + 0x233;
      }
LAB_00100214:
      uVar3 = (uint)bVar1;
    }
    else {
      iVar4 = (**(code **)(lVar5 + 0x68))(param_1);
      if (iVar4 == 0) {
        lVar5 = *(long *)param_1;
        goto LAB_001006e0;
      }
      if (*(code **)(*(long *)param_1 + 0x68) == TType::getMatrixCols) {
        bVar1 = (byte)param_1[9] >> 4;
        goto LAB_00100214;
      }
      uVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
    }
    if (uVar3 == 3) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x239;
    }
    else if (uVar3 == 4) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x23c;
    }
    else {
      if (uVar3 != 2) {
        return 0;
      }
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x236;
    }
    goto joined_r0x0010095b;
  case 4:
    if (*(code **)(*(long *)param_1 + 0x60) == TType::getVectorSize) {
      uVar3 = (byte)param_1[9] & 0xf;
    }
    else {
      uVar3 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
    }
    if (uVar3 - 1 < 4) {
      return *(int *)(CSWTCH_1344 + (ulong)(uVar3 - 1) * 4);
    }
    break;
  case 5:
    if (*(code **)(*(long *)param_1 + 0x60) == TType::getVectorSize) {
      uVar3 = (byte)param_1[9] & 0xf;
    }
    else {
      uVar3 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
    }
    if (uVar3 - 1 < 4) {
      return *(int *)(CSWTCH_1345 + (ulong)(uVar3 - 1) * 4);
    }
    break;
  case 6:
    if (*(code **)(*(long *)param_1 + 0x60) == TType::getVectorSize) {
      uVar3 = (byte)param_1[9] & 0xf;
    }
    else {
      uVar3 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
    }
    if (uVar3 - 1 < 4) {
      return *(int *)(CSWTCH_1346 + (ulong)(uVar3 - 1) * 4);
    }
    break;
  case 7:
    if (*(code **)(*(long *)param_1 + 0x60) == TType::getVectorSize) {
      uVar3 = (byte)param_1[9] & 0xf;
    }
    else {
      uVar3 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
    }
    if (uVar3 - 1 < 4) {
      return *(int *)(CSWTCH_1347 + (ulong)(uVar3 - 1) * 4);
    }
    break;
  case 8:
    lVar5 = *(long *)param_1;
    if (*(code **)(lVar5 + 0x68) == TType::getMatrixCols) {
      bVar1 = (byte)param_1[9] >> 4;
      if (bVar1 == 0) {
LAB_00100670:
        if (*(code **)(lVar5 + 0x60) == TType::getVectorSize) {
          uVar3 = (byte)param_1[9] & 0xf;
        }
        else {
          uVar3 = (**(code **)(lVar5 + 0x60))(param_1);
        }
        if (3 < uVar3 - 1) {
          return 0;
        }
        return *(int *)(CSWTCH_1340 + (ulong)(uVar3 - 1) * 4);
      }
LAB_00100394:
      uVar3 = (uint)bVar1;
    }
    else {
      iVar4 = (**(code **)(lVar5 + 0x68))(param_1);
      if (iVar4 == 0) {
        lVar5 = *(long *)param_1;
        goto LAB_00100670;
      }
      if (*(code **)(*(long *)param_1 + 0x68) == TType::getMatrixCols) {
        bVar1 = (byte)param_1[9] >> 4;
        goto LAB_00100394;
      }
      uVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
    }
    if (uVar3 == 3) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x21a;
    }
    else if (uVar3 == 4) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x21d;
    }
    else {
      if (uVar3 != 2) {
        return 0;
      }
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x217;
    }
    goto joined_r0x0010095b;
  case 9:
    lVar5 = *(long *)param_1;
    if (*(code **)(lVar5 + 0x68) == TType::getMatrixCols) {
      bVar1 = (byte)param_1[9] >> 4;
      if (bVar1 == 0) {
LAB_00100790:
        if (*(code **)(lVar5 + 0x60) == TType::getVectorSize) {
          uVar3 = (byte)param_1[9] & 0xf;
        }
        else {
          uVar3 = (**(code **)(lVar5 + 0x60))(param_1);
        }
        if (3 < uVar3 - 1) {
          return 0;
        }
        return *(int *)(CSWTCH_1341 + (ulong)(uVar3 - 1) * 4);
      }
LAB_00100414:
      uVar3 = (uint)bVar1;
    }
    else {
      iVar4 = (**(code **)(lVar5 + 0x68))(param_1);
      if (iVar4 == 0) {
        lVar5 = *(long *)param_1;
        goto LAB_00100790;
      }
      if (*(code **)(*(long *)param_1 + 0x68) == TType::getMatrixCols) {
        bVar1 = (byte)param_1[9] >> 4;
        goto LAB_00100414;
      }
      uVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
    }
    if (uVar3 == 3) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x223;
    }
    else if (uVar3 == 4) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x226;
    }
    else {
      if (uVar3 != 2) {
        return 0;
      }
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x220;
    }
    goto joined_r0x0010095b;
  case 10:
    if (*(code **)(*(long *)param_1 + 0x60) == TType::getVectorSize) {
      uVar3 = (byte)param_1[9] & 0xf;
    }
    else {
      uVar3 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
    }
    if (uVar3 - 1 < 4) {
      return *(int *)(CSWTCH_1348 + (ulong)(uVar3 - 1) * 4);
    }
    break;
  case 0xb:
    if (*(code **)(*(long *)param_1 + 0x60) == TType::getVectorSize) {
      uVar3 = (byte)param_1[9] & 0xf;
    }
    else {
      uVar3 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
    }
    if (uVar3 - 1 < 4) {
      return *(int *)(CSWTCH_1349 + (ulong)(uVar3 - 1) * 4);
    }
    break;
  case 0xc:
    lVar5 = *(long *)param_1;
    if (*(code **)(lVar5 + 0x68) == TType::getMatrixCols) {
      bVar1 = (byte)param_1[9] >> 4;
      if (bVar1 == 0) {
LAB_00100728:
        if (*(code **)(lVar5 + 0x60) == TType::getVectorSize) {
          uVar3 = (byte)param_1[9] & 0xf;
        }
        else {
          uVar3 = (**(code **)(lVar5 + 0x60))(param_1);
        }
        if (3 < uVar3 - 1) {
          return 0;
        }
        return *(int *)(CSWTCH_1342 + (ulong)(uVar3 - 1) * 4);
      }
LAB_00100514:
      uVar3 = (uint)bVar1;
    }
    else {
      iVar4 = (**(code **)(lVar5 + 0x68))(param_1);
      if (iVar4 == 0) {
        lVar5 = *(long *)param_1;
        goto LAB_00100728;
      }
      if (*(code **)(*(long *)param_1 + 0x68) == TType::getMatrixCols) {
        bVar1 = (byte)param_1[9] >> 4;
        goto LAB_00100514;
      }
      uVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
    }
    if (uVar3 == 3) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x22c;
    }
    else if (uVar3 == 4) {
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x22f;
    }
    else {
      if (uVar3 != 2) {
        return 0;
      }
      if (*(code **)(*(long *)param_1 + 0x70) == TType::getMatrixRows) {
        uVar3 = (byte)param_1[10] & 0xf;
      }
      else {
        uVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
      }
      iVar4 = uVar3 + 0x229;
    }
joined_r0x0010095b:
    if (uVar3 - 2 < 3) {
      return iVar4;
    }
    break;
  case 0xe:
    if (*(code **)(*(long *)param_1 + 0x40) == TType::getSampler) {
      pTVar6 = param_1 + 0x80;
    }
    else {
      pTVar6 = (TType *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
    }
    if (((byte)pTVar6[2] & 0x10) != 0) {
      return 0x242;
    }
    break;
  case 0xf:
    return 0x241;
  case 0x11:
    return 0x247;
  case 0x12:
    return 0x244;
  }
  return 0;
}



/* glslang::TIntermTyped::propagatePrecision(glslang::TPrecisionQualifier) */

void __thiscall glslang::TIntermTyped::propagatePrecision(TIntermTyped *this,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  TIntermTyped *pTVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  TIntermTyped TVar11;
  long lVar12;
  
  if (*(code **)(*(long *)this + 0x108) == getQualifier) {
    pTVar7 = this + 0x30;
  }
  else {
    pTVar7 = (TIntermTyped *)(**(code **)(*(long *)this + 0x108))();
  }
  if (((byte)pTVar7[0xb] & 0xe) != 0) {
    return;
  }
  lVar10 = *(long *)this;
  if (*(code **)(lVar10 + 0x100) == getBasicType) {
    TVar11 = this[0x28];
    if (TVar11 != (TIntermTyped)0x8) {
LAB_00100c56:
      if (TVar11 != (TIntermTyped)0x9) {
LAB_00100c60:
        uVar2 = (uint)(byte)TVar11;
        if (TVar11 != (TIntermTyped)0x1) {
LAB_00100c6a:
          if (uVar2 != 3) {
            return;
          }
          goto LAB_00100c73;
        }
      }
    }
  }
  else {
    iVar1 = (**(code **)(lVar10 + 0x100))(this);
    if (iVar1 != 8) {
      lVar10 = *(long *)this;
      if (*(code **)(lVar10 + 0x100) == getBasicType) {
        TVar11 = this[0x28];
        goto LAB_00100c56;
      }
      iVar1 = (**(code **)(lVar10 + 0x100))(this);
      if (iVar1 != 9) {
        lVar10 = *(long *)this;
        if (*(code **)(lVar10 + 0x100) == getBasicType) {
          TVar11 = this[0x28];
          goto LAB_00100c60;
        }
        iVar1 = (**(code **)(lVar10 + 0x100))(this);
        if (iVar1 != 1) {
          if (*(code **)(*(long *)this + 0x100) == getBasicType) {
            uVar2 = (uint)(byte)this[0x28];
          }
          else {
            uVar2 = (**(code **)(*(long *)this + 0x100))(this);
          }
          goto LAB_00100c6a;
        }
      }
    }
LAB_00100c73:
    lVar10 = *(long *)this;
  }
  if (*(code **)(lVar10 + 0x108) == getQualifier) {
    pTVar7 = this + 0x30;
  }
  else {
    pTVar7 = (TIntermTyped *)(**(code **)(lVar10 + 0x108))(this);
    lVar10 = *(long *)this;
  }
  pTVar7[0xb] = (TIntermTyped)((byte)pTVar7[0xb] & 0xf1 | ((byte)param_2 & 7) * '\x02');
  plVar3 = (long *)(**(code **)(lVar10 + 0x40))(this);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x38))(this);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x30))(this);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)this + 0x48))(this);
        if (plVar3 != (long *)0x0) {
          if (*(code **)(*plVar3 + 400) == TIntermSelection::getTrueBlock) {
            plVar9 = (long *)plVar3[0x18];
          }
          else {
            plVar9 = (long *)(**(code **)(*plVar3 + 400))(plVar3);
          }
          plVar9 = (long *)(**(code **)(*plVar9 + 0x18))();
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x128))(plVar9,param_2);
            if (*(code **)(*plVar3 + 0x1a0) == TIntermSelection::getFalseBlock) {
              plVar3 = (long *)plVar3[0x19];
            }
            else {
              plVar3 = (long *)(**(code **)(*plVar3 + 0x1a0))(plVar3);
            }
            plVar3 = (long *)(**(code **)(*plVar3 + 0x18))();
            if (plVar3 != (long *)0x0) goto LAB_00100cff;
          }
        }
      }
      else {
        if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
          plVar3 = plVar3 + 0x18;
        }
        else {
          plVar3 = (long *)(**(code **)(*plVar3 + 400))(plVar3);
        }
        uVar4 = glslang::GetThreadPoolAllocator();
        lVar10 = plVar3[2];
        lVar12 = plVar3[1];
        lVar5 = 0;
        if (lVar10 != lVar12) {
          lVar5 = glslang::TPoolAllocator::allocate(uVar4);
          lVar10 = plVar3[2];
          lVar12 = plVar3[1];
        }
        if (lVar10 != lVar12) {
          lVar10 = lVar10 - lVar12;
          lVar6 = 0;
          do {
            *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(lVar12 + lVar6);
            lVar6 = lVar6 + 8;
          } while (lVar10 != lVar6);
          if (lVar10 != 0) {
            uVar4 = 0;
            do {
              plVar3 = (long *)(**(code **)(**(long **)(lVar5 + uVar4 * 8) + 0x18))();
              if (plVar3 == (long *)0x0) {
                return;
              }
              (**(code **)(*plVar3 + 0x128))(plVar3,param_2);
              uVar4 = (ulong)((int)uVar4 + 1);
            } while (uVar4 < (ulong)(lVar10 >> 3));
          }
        }
      }
      return;
    }
    pcVar8 = *(code **)(*plVar3 + 0x188);
    if (pcVar8 == TIntermUnary::getOperand) {
      plVar3 = (long *)plVar3[0x18];
      goto LAB_00100cff;
    }
  }
  else {
    if (*(code **)(*plVar3 + 400) == TIntermBinary::getLeft) {
      plVar9 = (long *)plVar3[0x18];
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar3 + 400))(plVar3);
    }
    (**(code **)(*plVar9 + 0x128))(plVar9,param_2);
    pcVar8 = *(code **)(*plVar3 + 0x198);
    if (pcVar8 == TIntermBinary::getRight) {
      plVar3 = (long *)plVar3[0x19];
      goto LAB_00100cff;
    }
  }
  plVar3 = (long *)(*pcVar8)(plVar3);
LAB_00100cff:
                    /* WARNING: Could not recover jumptable at 0x00100d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x128))(plVar3,param_2);
  return;
}



/* glslang::TIntermAggregate::updatePrecision() */

void __thiscall glslang::TIntermAggregate::updatePrecision(TIntermAggregate *this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  TIntermAggregate TVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  TIntermAggregate *pTVar13;
  
  lVar10 = *(long *)this;
  if (*(code **)(lVar10 + 0x100) == TIntermTyped::getBasicType) {
    TVar9 = this[0x28];
    if (TVar9 != (TIntermAggregate)0x8) {
LAB_00101000:
      uVar3 = (uint)(byte)TVar9;
      if (TVar9 != (TIntermAggregate)0x9) {
LAB_00101008:
        if (uVar3 != 1) {
          return;
        }
        goto LAB_00101025;
      }
    }
  }
  else {
    iVar2 = (**(code **)(lVar10 + 0x100))(this);
    if (iVar2 != 8) {
      lVar10 = *(long *)this;
      if (*(code **)(lVar10 + 0x100) == TIntermTyped::getBasicType) {
        TVar9 = this[0x28];
        goto LAB_00101000;
      }
      iVar2 = (**(code **)(lVar10 + 0x100))(this);
      if (iVar2 != 9) {
        if (*(code **)(*(long *)this + 0x100) == TIntermTyped::getBasicType) {
          uVar3 = (uint)(byte)this[0x28];
        }
        else {
          uVar3 = (**(code **)(*(long *)this + 0x100))(this);
        }
        goto LAB_00101008;
      }
    }
LAB_00101025:
    lVar10 = *(long *)this;
  }
  if (*(code **)(lVar10 + 400) == getSequence) {
    pTVar13 = this + 0xc0;
  }
  else {
    pTVar13 = (TIntermAggregate *)(**(code **)(lVar10 + 400))(this);
  }
  uVar4 = glslang::GetThreadPoolAllocator();
  lVar10 = *(long *)(pTVar13 + 0x10);
  lVar12 = *(long *)(pTVar13 + 8);
  if (lVar10 == lVar12) {
    lVar5 = 0;
    if (lVar10 == lVar12) goto LAB_0010111b;
  }
  else {
    lVar5 = glslang::TPoolAllocator::allocate(uVar4);
    lVar10 = *(long *)(pTVar13 + 0x10);
    lVar12 = *(long *)(pTVar13 + 8);
    if (lVar10 == lVar12) {
LAB_0010111b:
      bVar11 = 0;
      uVar4 = 0;
      goto LAB_00101137;
    }
  }
  lVar10 = lVar10 - lVar12;
  lVar6 = 0;
  do {
    *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(lVar12 + lVar6);
    lVar6 = lVar6 + 8;
  } while (lVar10 != lVar6);
  uVar4 = lVar10 >> 3;
  if (lVar10 == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = 0;
    uVar7 = 0;
    do {
      plVar8 = (long *)(**(code **)(**(long **)(lVar5 + uVar7 * 8) + 0x18))();
      if (*(code **)(*plVar8 + 0x108) == TIntermTyped::getQualifier) {
        plVar8 = plVar8 + 6;
      }
      else {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x108))();
      }
      bVar1 = *(byte *)((long)plVar8 + 0xb) >> 1 & 7;
      if (bVar11 < bVar1) {
        bVar11 = bVar1;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < uVar4);
  }
LAB_00101137:
  if (*(code **)(*(long *)this + 0x108) == TIntermTyped::getQualifier) {
    pTVar13 = this + 0x30;
  }
  else {
    pTVar13 = (TIntermAggregate *)(**(code **)(*(long *)this + 0x108))(this);
  }
  pTVar13[0xb] = (TIntermAggregate)((byte)pTVar13[0xb] & 0xf1 | bVar11 * '\x02');
  uVar7 = 0;
  if (uVar4 == 0) {
    return;
  }
  do {
    plVar8 = (long *)(**(code **)(**(long **)(lVar5 + uVar7 * 8) + 0x18))();
    (**(code **)(*plVar8 + 0x128))(plVar8,bVar11);
    uVar7 = (ulong)((int)uVar7 + 1);
  } while (uVar7 < uVar4);
  return;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >*) [clone .isra.0] */

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
        for (lVar2 = *(long *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
          for (lVar3 = *(long *)(lVar2 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
            for (lVar4 = *(long *)(lVar3 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
              for (lVar5 = *(long *)(lVar4 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
                for (lVar6 = *(long *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
                  for (lVar7 = *(long *)(lVar6 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10))
                  {
                    for (lVar8 = *(long *)(lVar7 + 0x18); lVar8 != 0;
                        lVar8 = *(long *)(lVar8 + 0x10)) {
                      _M_erase(*(_Rb_tree_node **)(lVar8 + 0x18));
                    }
                  }
                }
              }
            }
          }
        }
      }
      param_1 = *(_Rb_tree_node **)(param_1 + 0x10);
    } while (param_1 != (_Rb_tree_node *)0x0);
    return;
  }
  return;
}



/* TIntermNode*& std::vector<TIntermNode*, glslang::pool_allocator<TIntermNode*>
   >::emplace_back<TIntermNode*>(TIntermNode*&&) [clone .isra.0] */

TIntermNode ** __thiscall
std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::emplace_back<TIntermNode*>
          (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *this,TIntermNode **param_1)

{
  undefined8 *puVar1;
  TIntermNode *pTVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  TIntermNode **ppTVar6;
  long lVar7;
  TIntermNode **ppTVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 != *(undefined8 **)(this + 0x18)) {
    pTVar2 = *param_1;
    *puVar1 = pTVar2;
    *(undefined8 **)(this + 0x10) = puVar1 + 1;
    return (TIntermNode **)pTVar2;
  }
  puVar3 = *(undefined8 **)(this + 8);
  puVar11 = (undefined8 *)((long)puVar1 - (long)puVar3);
  uVar5 = (long)puVar11 >> 3;
  if (uVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar1 == puVar3) {
    uVar9 = uVar5 + 1;
    if (0xfffffffffffffffe < uVar5) goto LAB_00101480;
    if (0xfffffffffffffff < uVar9) {
      uVar9 = 0xfffffffffffffff;
    }
    lVar10 = uVar9 * 8;
LAB_00101457:
    ppTVar6 = (TIntermNode **)glslang::TPoolAllocator::allocate(*(ulong *)this);
    lVar10 = (long)ppTVar6 + lVar10;
    *(TIntermNode **)((long)ppTVar6 + (long)puVar11) = *param_1;
    ppTVar8 = ppTVar6 + 1;
    if (puVar1 == puVar3) goto LAB_00101417;
  }
  else {
    uVar9 = uVar5 * 2;
    if (uVar9 < uVar5) {
LAB_00101480:
      lVar10 = 0x7ffffffffffffff8;
      goto LAB_00101457;
    }
    if (uVar9 != 0) {
      if (0xfffffffffffffff < uVar9) {
        uVar9 = 0xfffffffffffffff;
      }
      lVar10 = uVar9 * 8;
      goto LAB_00101457;
    }
    lVar10 = 0;
    *puVar11 = *param_1;
    ppTVar6 = (TIntermNode **)0x0;
  }
  lVar4 = 0;
  do {
    lVar7 = lVar4;
    *(undefined8 *)((long)ppTVar6 + lVar7) = *(undefined8 *)((long)puVar3 + lVar7);
    lVar4 = lVar7 + 8;
  } while (lVar7 + 8 != (long)puVar1 - (long)puVar3);
  ppTVar8 = (TIntermNode **)((long)ppTVar6 + lVar7 + 0x10);
LAB_00101417:
  *(TIntermNode ***)(this + 8) = ppTVar6;
  *(TIntermNode ***)(this + 0x10) = ppTVar8;
  *(long *)(this + 0x18) = lVar10;
  return ppTVar6;
}



/* void std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */

void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
     _M_construct<char_const*>(ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  
  __n = param_3 - (long)param_2;
  if (__n < 0x10) {
    __dest = (undefined1 *)param_1[1];
    if (__n == 1) {
      *__dest = *param_2;
      param_1[2] = 1;
      *(undefined1 *)(param_1[1] + 1) = 0;
      return;
    }
    if (__n == 0) {
      param_1[2] = 0;
      *__dest = 0;
      return;
    }
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (undefined1 *)glslang::TPoolAllocator::allocate(*param_1);
    param_1[3] = __n;
    param_1[1] = (ulong)__dest;
  }
  memcpy(__dest,param_2,__n);
  param_1[2] = __n;
  *(undefined1 *)(param_1[1] + __n) = 0;
  return;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar5 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar4 = plVar1[0xc];
            goto LAB_001015db;
          }
          goto LAB_00101609;
        }
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_001015db:
          if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_00101609;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xf8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_00101609:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001017cd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001017cd;
      }
      plVar1 = (long *)param_1[4];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar5 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar4 = plVar1[0xc];
            goto LAB_00101658;
          }
          goto LAB_00101679;
        }
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_00101658:
          if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) goto LAB_00101666;
          goto LAB_00101679;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_00101666;
LAB_00101679:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001017fd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00101666:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001017fd;
      }
      plVar1 = (long *)param_1[8];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar5 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar4 = plVar1[0xc];
            goto LAB_001016c8;
          }
          goto LAB_001016e9;
        }
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_001016c8:
          if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) goto LAB_001016d6;
          goto LAB_001016e9;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_001016d6;
LAB_001016e9:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010182d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_001016d6:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010182d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar5 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar4 = plVar1[0xc];
            goto LAB_00101738;
          }
          goto LAB_00101759;
        }
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_00101738:
          if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) goto LAB_00101746;
          goto LAB_00101759;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_00101746;
LAB_00101759:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010185d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00101746:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010185d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_0010191e;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0010191e:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xf8) == isUnsizedArray) {
    if (*(code **)(lVar2 + 0xe8) != isArray) {
      cVar1 = (**(code **)(lVar2 + 0xe8))();
      if (cVar1 != '\0') {
        lVar3 = param_1[0xc];
        goto LAB_001019aa;
      }
      goto LAB_001019c6;
    }
    lVar3 = param_1[0xc];
    if (lVar3 != 0) {
LAB_001019aa:
      if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
        return true;
      }
      goto LAB_001019c6;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xf8))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_001019c6:
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_001019d9:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_001019d9;
  }
  return false;
}



/* std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >* std::_Rb_tree<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >,
   std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > const, std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> >
   >, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > > >::_M_copy<false,
   std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >
   >::_Reuse_or_alloc_node>(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > > >*, std::_Rb_tree_node_base*,
   std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > > >::_Reuse_or_alloc_node&) [clone .isra.0] */

_Rb_tree_node *
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
::
_M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>::_Reuse_or_alloc_node>
          (_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Reuse_or_alloc_node *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  _Rb_tree_node_base *p_Var4;
  ulong uVar5;
  _Rb_tree_node *p_Var6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  long lVar10;
  undefined4 *puVar11;
  _Rb_tree_node_base *p_Var12;
  
  p_Var9 = *(_Rb_tree_node_base **)(param_3 + 8);
  if (p_Var9 == (_Rb_tree_node_base *)0x0) {
    p_Var9 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(**(ulong **)(param_3 + 0x10));
  }
  else {
    lVar2 = *(long *)(p_Var9 + 8);
    *(long *)(param_3 + 8) = lVar2;
    if (lVar2 == 0) {
      *(undefined8 *)param_3 = 0;
    }
    else if (p_Var9 == *(_Rb_tree_node_base **)(lVar2 + 0x18)) {
      lVar10 = *(long *)(lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      if (lVar10 != 0) {
        lVar2 = *(long *)(lVar10 + 0x18);
        *(long *)(param_3 + 8) = lVar10;
        if (lVar2 != 0) {
          do {
            lVar10 = lVar2;
            lVar2 = *(long *)(lVar10 + 0x18);
          } while (*(long *)(lVar10 + 0x18) != 0);
          *(long *)(param_3 + 8) = lVar10;
        }
        if (*(long *)(lVar10 + 0x10) != 0) {
          *(long *)(param_3 + 8) = *(long *)(lVar10 + 0x10);
        }
      }
    }
    else {
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
  }
  uVar5 = glslang::GetThreadPoolAllocator();
  uVar3 = *(ulong *)(param_1 + 0x30);
  p_Var8 = p_Var9 + 0x38;
  *(_Rb_tree_node_base **)(p_Var9 + 0x28) = p_Var8;
  p_Var12 = *(_Rb_tree_node_base **)(param_1 + 0x28);
  *(ulong *)(p_Var9 + 0x20) = uVar5;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      p_Var9[0x38] = *p_Var12;
    }
    else if (uVar3 != 0) goto LAB_00101db2;
  }
  else {
    if ((long)uVar3 < 0) goto LAB_00101e6e;
    p_Var8 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar5);
    *(ulong *)(p_Var9 + 0x38) = uVar3;
    *(_Rb_tree_node_base **)(p_Var9 + 0x28) = p_Var8;
LAB_00101db2:
    memcpy(p_Var8,p_Var12,uVar3);
    p_Var8 = *(_Rb_tree_node_base **)(p_Var9 + 0x28);
  }
  *(ulong *)(p_Var9 + 0x30) = uVar3;
  p_Var8[uVar3] = (_Rb_tree_node_base)0x0;
  uVar5 = glslang::GetThreadPoolAllocator();
  uVar3 = *(ulong *)(param_1 + 0x58);
  p_Var8 = p_Var9 + 0x60;
  *(_Rb_tree_node_base **)(p_Var9 + 0x50) = p_Var8;
  p_Var12 = *(_Rb_tree_node_base **)(param_1 + 0x50);
  *(ulong *)(p_Var9 + 0x48) = uVar5;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      p_Var9[0x60] = *p_Var12;
      goto LAB_00101ac4;
    }
    if (uVar3 == 0) goto LAB_00101ac4;
  }
  else {
    if ((long)uVar3 < 0) {
LAB_00101e6e:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    p_Var8 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar5);
    *(ulong *)(p_Var9 + 0x60) = uVar3;
    *(_Rb_tree_node_base **)(p_Var9 + 0x50) = p_Var8;
  }
  memcpy(p_Var8,p_Var12,uVar3);
  p_Var8 = *(_Rb_tree_node_base **)(p_Var9 + 0x50);
LAB_00101ac4:
  *(ulong *)(p_Var9 + 0x58) = uVar3;
  p_Var8[uVar3] = (_Rb_tree_node_base)0x0;
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(p_Var9 + 0x10) = 0;
  *(undefined8 *)(p_Var9 + 0x18) = 0;
  *(_Rb_tree_node_base **)(p_Var9 + 8) = param_2;
  p_Var6 = *(_Rb_tree_node **)(param_1 + 0x18);
  *(undefined4 *)p_Var9 = uVar1;
  if (p_Var6 != (_Rb_tree_node *)0x0) {
    p_Var6 = _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>::_Reuse_or_alloc_node>
                       (p_Var6,p_Var9,param_3);
    *(_Rb_tree_node **)(p_Var9 + 0x18) = p_Var6;
  }
  puVar11 = *(undefined4 **)(param_1 + 0x10);
  if (puVar11 == (undefined4 *)0x0) {
    return (_Rb_tree_node *)p_Var9;
  }
  p_Var8 = *(_Rb_tree_node_base **)(param_3 + 8);
  p_Var12 = p_Var9;
  if (p_Var8 == (_Rb_tree_node_base *)0x0) goto LAB_00101c14;
LAB_00101b21:
  lVar2 = *(long *)(p_Var8 + 8);
  *(long *)(param_3 + 8) = lVar2;
  p_Var7 = p_Var8;
  if (lVar2 == 0) {
    *(undefined8 *)param_3 = 0;
  }
  else if (p_Var8 == *(_Rb_tree_node_base **)(lVar2 + 0x18)) {
    lVar10 = *(long *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (lVar10 != 0) {
      lVar2 = *(long *)(lVar10 + 0x18);
      *(long *)(param_3 + 8) = lVar10;
      if (lVar2 != 0) {
        do {
          lVar10 = lVar2;
          lVar2 = *(long *)(lVar10 + 0x18);
        } while (*(long *)(lVar10 + 0x18) != 0);
        *(long *)(param_3 + 8) = lVar10;
      }
      if (*(long *)(lVar10 + 0x10) != 0) {
        *(long *)(param_3 + 8) = *(long *)(lVar10 + 0x10);
      }
    }
  }
  else {
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  do {
    uVar5 = glslang::GetThreadPoolAllocator();
    uVar3 = *(ulong *)(puVar11 + 0xc);
    p_Var8 = p_Var7 + 0x38;
    *(_Rb_tree_node_base **)(p_Var7 + 0x28) = p_Var8;
    p_Var4 = *(_Rb_tree_node_base **)(puVar11 + 10);
    *(ulong *)(p_Var7 + 0x20) = uVar5;
    if (uVar3 < 0x10) {
      if (uVar3 == 1) {
        p_Var7[0x38] = *p_Var4;
      }
      else if (uVar3 != 0) goto LAB_00101cba;
    }
    else {
      if ((long)uVar3 < 0) goto LAB_00101e6e;
      p_Var8 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar5);
      *(ulong *)(p_Var7 + 0x38) = uVar3;
      *(_Rb_tree_node_base **)(p_Var7 + 0x28) = p_Var8;
LAB_00101cba:
      memcpy(p_Var8,p_Var4,uVar3);
      p_Var8 = *(_Rb_tree_node_base **)(p_Var7 + 0x28);
    }
    *(ulong *)(p_Var7 + 0x30) = uVar3;
    p_Var8[uVar3] = (_Rb_tree_node_base)0x0;
    uVar5 = glslang::GetThreadPoolAllocator();
    uVar3 = *(ulong *)(puVar11 + 0x16);
    p_Var8 = p_Var7 + 0x60;
    *(_Rb_tree_node_base **)(p_Var7 + 0x50) = p_Var8;
    p_Var4 = *(_Rb_tree_node_base **)(puVar11 + 0x14);
    *(ulong *)(p_Var7 + 0x48) = uVar5;
    if (uVar3 < 0x10) {
      if (uVar3 == 1) {
        p_Var7[0x60] = *p_Var4;
      }
      else if (uVar3 != 0) goto LAB_00101c7a;
    }
    else {
      if ((long)uVar3 < 0) goto LAB_00101e6e;
      p_Var8 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar5);
      *(ulong *)(p_Var7 + 0x60) = uVar3;
      *(_Rb_tree_node_base **)(p_Var7 + 0x50) = p_Var8;
LAB_00101c7a:
      memcpy(p_Var8,p_Var4,uVar3);
      p_Var8 = *(_Rb_tree_node_base **)(p_Var7 + 0x50);
    }
    *(ulong *)(p_Var7 + 0x58) = uVar3;
    p_Var8[uVar3] = (_Rb_tree_node_base)0x0;
    uVar1 = *puVar11;
    *(undefined8 *)(p_Var7 + 0x10) = 0;
    *(undefined8 *)(p_Var7 + 0x18) = 0;
    *(undefined4 *)p_Var7 = uVar1;
    *(_Rb_tree_node_base **)(p_Var12 + 0x10) = p_Var7;
    *(_Rb_tree_node_base **)(p_Var7 + 8) = p_Var12;
    if (*(_Rb_tree_node **)(puVar11 + 6) != (_Rb_tree_node *)0x0) {
      p_Var6 = _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>::_Reuse_or_alloc_node>
                         (*(_Rb_tree_node **)(puVar11 + 6),p_Var7,param_3);
      *(_Rb_tree_node **)(p_Var7 + 0x18) = p_Var6;
    }
    puVar11 = *(undefined4 **)(puVar11 + 4);
    if (puVar11 == (undefined4 *)0x0) {
      return (_Rb_tree_node *)p_Var9;
    }
    p_Var8 = *(_Rb_tree_node_base **)(param_3 + 8);
    p_Var12 = p_Var7;
    if (p_Var8 != (_Rb_tree_node_base *)0x0) goto LAB_00101b21;
LAB_00101c14:
    p_Var7 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(**(ulong **)(param_3 + 0x10));
  } while( true );
}



/* glslang::TIntermediate::addBinaryNode(glslang::TOperator, glslang::TIntermTyped*,
   glslang::TIntermTyped*, glslang::TSourceLoc const&) const */

undefined8 * __thiscall
glslang::TIntermediate::addBinaryNode
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  
  uVar4 = glslang::GetThreadPoolAllocator();
  puVar5 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar4);
  puVar5[2] = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 3) = 0;
  puVar5[4] = &PTR__TType_00117c00;
  *(ushort *)((long)puVar5 + 0x4c) = *(ushort *)((long)puVar5 + 0x4c) | 0xfff;
  *(byte *)(puVar5 + 8) = *(byte *)(puVar5 + 8) & 0xf0;
  *(undefined1 (*) [16])(puVar5 + 0x15) = (undefined1  [16])0x0;
  *(uint *)(puVar5 + 5) = *(uint *)(puVar5 + 5) & 0xf8000000 | 0x101;
  puVar5[7] = puVar5[7] & 0x8000000400000000;
  *(undefined1 (*) [16])(puVar5 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0x12) = (undefined1  [16])0x0;
  puVar5[6] = 0;
  *(ulong *)((long)puVar5 + 0x4d) =
       (ulong)((uint)*(undefined8 *)((long)puVar5 + 0x4d) & 0xffc00f) | 0xffffffffff001fc0;
  iVar1 = *(int *)((long)param_5 + 0xc);
  *(uint *)(puVar5 + 0x14) = *(uint *)(puVar5 + 0x14) & 0x9fc00000;
  *(ulong *)((long)puVar5 + 0x55) =
       *(ulong *)((long)puVar5 + 0x55) & 0xfe000000800000 | 0x1ffffff7fffff;
  puVar5[0xd] = 0xffffffff00000000;
  *(undefined2 *)(puVar5 + 0xf) = 0;
  *(undefined8 *)((long)puVar5 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((long)puVar5 + 0x5d) = 0;
  *(undefined4 *)((long)puVar5 + 100) = 0xfffff800;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0x17) = param_2;
  *(undefined4 *)((long)puVar5 + 0xbc) = 0;
  *puVar5 = &TIntermMethod::vtable;
  if (iVar1 == 0) {
    if (*(code **)*param_3 == TIntermNode::getLoc) {
      param_5 = param_3 + 1;
      goto LAB_00101fbe;
    }
    puVar6 = (undefined8 *)(**(code **)*param_3)(param_3);
    puVar7 = (undefined *)*puVar5;
    uVar3 = puVar6[1];
    pcVar2 = *(code **)(puVar7 + 0x180);
    puVar5[1] = *puVar6;
    puVar5[2] = uVar3;
    puVar5[3] = puVar6[2];
    if (pcVar2 != TIntermBinary::setLeft) {
      (*pcVar2)(puVar5,param_3);
      puVar7 = (undefined *)*puVar5;
      goto LAB_00101fdd;
    }
  }
  else {
LAB_00101fbe:
    uVar3 = param_5[1];
    puVar7 = &TIntermMethod::vtable;
    puVar5[1] = *param_5;
    puVar5[2] = uVar3;
    puVar5[3] = param_5[2];
  }
  puVar5[0x18] = param_3;
LAB_00101fdd:
  if (*(code **)(puVar7 + 0x188) == TIntermBinary::setRight) {
    puVar5[0x19] = param_4;
    return puVar5;
  }
  (**(code **)(puVar7 + 0x188))(puVar5,param_4);
  return puVar5;
}



/* glslang::TIntermediate::addBinaryNode(glslang::TOperator, glslang::TIntermTyped*,
   glslang::TIntermTyped*, glslang::TSourceLoc const&, glslang::TType const&) const */

long * glslang::TIntermediate::addBinaryNode(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long in_R9;
  
  plVar6 = (long *)addBinaryNode();
  if (*(code **)(*plVar6 + 0xe8) == TIntermTyped::setType) {
    lVar3 = *(long *)(in_R9 + 0x18);
    uVar1 = *(undefined1 *)(in_R9 + 8);
    uVar2 = *(undefined4 *)(in_R9 + 0x80);
    plVar6[6] = *(long *)(in_R9 + 0x10);
    plVar6[7] = lVar3;
    lVar3 = *(long *)(in_R9 + 0x20);
    lVar4 = *(long *)(in_R9 + 0x28);
    *(undefined4 *)(plVar6 + 0x14) = uVar2;
    plVar6[8] = lVar3;
    plVar6[9] = lVar4;
    lVar3 = *(long *)(in_R9 + 0x30);
    lVar4 = *(long *)(in_R9 + 0x38);
    *(undefined1 *)(plVar6 + 5) = uVar1;
    plVar6[10] = lVar3;
    plVar6[0xb] = lVar4;
    lVar3 = *(long *)(in_R9 + 0x48);
    plVar6[0xc] = *(long *)(in_R9 + 0x40);
    plVar6[0xd] = lVar3;
    lVar3 = *(long *)(in_R9 + 0x58);
    plVar6[0xe] = *(long *)(in_R9 + 0x50);
    plVar6[0xf] = lVar3;
    bVar8 = *(byte *)(in_R9 + 9) & 0xf;
    *(byte *)((long)plVar6 + 0x29) = *(byte *)((long)plVar6 + 0x29) & 0xf0 | bVar8;
    *(byte *)((long)plVar6 + 0x29) = bVar8 | *(byte *)(in_R9 + 9) & 0xf0;
    bVar8 = *(byte *)((long)plVar6 + 0x2a);
    bVar9 = *(byte *)(in_R9 + 10) & 0xf;
    *(byte *)((long)plVar6 + 0x2a) = bVar8 & 0xf0 | bVar9;
    bVar10 = *(byte *)(in_R9 + 10) & 0x10;
    *(byte *)((long)plVar6 + 0x2a) = bVar8 & 0xe0 | bVar9 | bVar10;
    lVar4 = *(long *)(in_R9 + 0x70);
    lVar5 = *(long *)(in_R9 + 0x78);
    plVar6[0x10] = *(long *)(in_R9 + 0x60);
    lVar3 = *(long *)(in_R9 + 0x68);
    plVar6[0x12] = lVar4;
    plVar6[0x13] = lVar5;
    plVar6[0x11] = lVar3;
    lVar3 = *(long *)(in_R9 + 0x90);
    plVar6[0x15] = *(long *)(in_R9 + 0x88);
    plVar6[0x16] = lVar3;
    bVar7 = *(byte *)(in_R9 + 10) & 0x20;
    *(byte *)((long)plVar6 + 0x2a) = bVar8 & 0xc0 | bVar9 | bVar10 | bVar7;
    *(byte *)((long)plVar6 + 0x2a) =
         bVar8 & 0x80 | bVar9 | bVar10 | bVar7 | *(byte *)(in_R9 + 10) & 0x40;
    *(ushort *)((long)plVar6 + 0x2a) =
         *(ushort *)((long)plVar6 + 0x2a) & 0xfc7f | *(ushort *)(in_R9 + 10) & 0x380;
    *(byte *)((long)plVar6 + 0x2b) =
         *(byte *)((long)plVar6 + 0x2b) & 0xfb | *(byte *)(in_R9 + 0xb) & 4;
    return plVar6;
  }
  (**(code **)(*plVar6 + 0xe8))(plVar6,in_R9);
  return plVar6;
}



/* glslang::TIntermediate::addIndex(glslang::TOperator, glslang::TIntermTyped*,
   glslang::TIntermTyped*, glslang::TSourceLoc const&) */

void glslang::TIntermediate::addIndex(void)

{
  addBinaryNode();
  return;
}



/* glslang::TIntermediate::isConversionAllowed(glslang::TOperator, glslang::TIntermTyped*) const */

ulong __thiscall
glslang::TIntermediate::isConversionAllowed(undefined8 param_1,int param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *extraout_RDX;
  undefined1 auVar5 [16];
  
  if (*(code **)(*param_3 + 0x100) == TIntermTyped::getBasicType) {
    uVar1 = (uint)*(byte *)(param_3 + 5);
    plVar3 = param_3;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x100))(param_3);
    plVar3 = extraout_RDX;
  }
  if (uVar1 < 0xf) {
    if (uVar1 < 0xd) {
      uVar4 = CONCAT71((int7)((ulong)plVar3 >> 8),uVar1 != 0);
      goto LAB_001021f7;
    }
  }
  else {
    uVar4 = 1;
    if (uVar1 != 0x11) goto LAB_001021f7;
  }
  uVar4 = 1;
  if (param_2 != 5) {
    if (*(code **)(*param_3 + 0x100) == TIntermTyped::getBasicType) {
      uVar1 = (uint)*(byte *)(param_3 + 5);
    }
    else {
      uVar1 = (**(code **)(*param_3 + 0x100))(param_3);
    }
    if ((uVar1 == 0xe) && (param_2 == 0x249)) {
      lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar2 != 0) {
        auVar5 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar4 = CONCAT71(auVar5._9_7_,*(int *)(auVar5._0_8_ + 0xb8) == 0x242);
        goto LAB_001021f7;
      }
    }
    return 0;
  }
LAB_001021f7:
  return uVar4 & 0xffffffff;
}



/* glslang::TIntermediate::buildConvertOp(glslang::TBasicType, glslang::TBasicType,
   glslang::TOperator&) const */

undefined8 __thiscall
glslang::TIntermediate::buildConvertOp
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  switch(param_2) {
  default:
switchD_001022b0_caseD_0:
    return 0;
  case 1:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 2:
      *param_4 = 0x95;
      break;
    case 3:
      *param_4 = 0x80;
      break;
    case 4:
      *param_4 = 0x37;
      break;
    case 5:
      *param_4 = 0x3a;
      break;
    case 6:
      *param_4 = 0x4b;
      break;
    case 7:
      *param_4 = 0x4e;
      break;
    case 8:
      *param_4 = 0x5f;
      break;
    case 9:
      *param_4 = 0x62;
      break;
    case 10:
      *param_4 = 0x73;
      break;
    case 0xb:
      *param_4 = 0x76;
      break;
    case 0xc:
      *param_4 = 0x26;
    }
    break;
  case 2:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x8b;
      break;
    case 3:
      *param_4 = 0x81;
      break;
    case 4:
      *param_4 = 0x38;
      break;
    case 5:
      *param_4 = 0x3b;
      break;
    case 6:
      *param_4 = 0x4c;
      break;
    case 7:
      *param_4 = 0x4f;
      break;
    case 8:
      *param_4 = 0x60;
      break;
    case 9:
      *param_4 = 99;
      break;
    case 10:
      *param_4 = 0x74;
      break;
    case 0xb:
      *param_4 = 0x77;
      break;
    case 0xc:
      *param_4 = 0x27;
    }
    break;
  case 3:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x8a;
      break;
    case 2:
      *param_4 = 0x94;
      break;
    case 4:
      *param_4 = 0x36;
      break;
    case 5:
      *param_4 = 0x39;
      break;
    case 6:
      *param_4 = 0x4a;
      break;
    case 7:
      *param_4 = 0x4d;
      break;
    case 8:
      *param_4 = 0x5e;
      break;
    case 9:
      *param_4 = 0x61;
      break;
    case 10:
      *param_4 = 0x72;
      break;
    case 0xb:
      *param_4 = 0x75;
      break;
    case 0xc:
      *param_4 = 0x25;
    }
    break;
  case 4:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x82;
      break;
    case 2:
      *param_4 = 0x8c;
      break;
    case 3:
      *param_4 = 0x78;
      break;
    case 5:
      *param_4 = 0x2f;
      break;
    case 6:
      *param_4 = 0x3c;
      break;
    case 7:
      *param_4 = 0x43;
      break;
    case 8:
      *param_4 = 0x50;
      break;
    case 9:
      *param_4 = 0x57;
      break;
    case 10:
      *param_4 = 100;
      break;
    case 0xb:
      *param_4 = 0x6b;
      break;
    case 0xc:
      *param_4 = 0x1d;
    }
    break;
  case 5:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x86;
      break;
    case 2:
      *param_4 = 0x90;
      break;
    case 3:
      *param_4 = 0x7c;
      break;
    case 4:
      *param_4 = 0x2b;
      break;
    case 6:
      *param_4 = 0x3f;
      break;
    case 7:
      *param_4 = 0x47;
      break;
    case 8:
      *param_4 = 0x53;
      break;
    case 9:
      *param_4 = 0x5b;
      break;
    case 10:
      *param_4 = 0x67;
      break;
    case 0xb:
      *param_4 = 0x6f;
      break;
    case 0xc:
      *param_4 = 0x1e;
    }
    break;
  case 6:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x83;
      break;
    case 2:
      *param_4 = 0x8d;
      break;
    case 3:
      *param_4 = 0x79;
      break;
    case 4:
      *param_4 = 0x28;
      break;
    case 5:
      *param_4 = 0x30;
      break;
    case 7:
      *param_4 = 0x44;
      break;
    case 8:
      *param_4 = 0x51;
      break;
    case 9:
      *param_4 = 0x58;
      break;
    case 10:
      *param_4 = 0x65;
      break;
    case 0xb:
      *param_4 = 0x6c;
      break;
    case 0xc:
      *param_4 = 0x1f;
    }
    break;
  case 7:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x87;
      break;
    case 2:
      *param_4 = 0x91;
      break;
    case 3:
      *param_4 = 0x7d;
      break;
    case 4:
      *param_4 = 0x2c;
      break;
    case 5:
      *param_4 = 0x33;
      break;
    case 6:
      *param_4 = 0x40;
      break;
    case 8:
      *param_4 = 0x54;
      break;
    case 9:
      *param_4 = 0x5c;
      break;
    case 10:
      *param_4 = 0x68;
      break;
    case 0xb:
      *param_4 = 0x70;
      break;
    case 0xc:
      *param_4 = 0x20;
    }
    break;
  case 8:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x84;
      break;
    case 2:
      *param_4 = 0x8e;
      break;
    case 3:
      *param_4 = 0x7a;
      break;
    case 4:
      *param_4 = 0x29;
      break;
    case 5:
      *param_4 = 0x31;
      break;
    case 6:
      *param_4 = 0x3d;
      break;
    case 7:
      *param_4 = 0x45;
      break;
    case 9:
      *param_4 = 0x59;
      break;
    case 10:
      *param_4 = 0x66;
      break;
    case 0xb:
      *param_4 = 0x6d;
      break;
    case 0xc:
      *param_4 = 0x21;
    }
    break;
  case 9:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x88;
      break;
    case 2:
      *param_4 = 0x92;
      break;
    case 3:
      *param_4 = 0x7e;
      break;
    case 4:
      *param_4 = 0x2d;
      break;
    case 5:
      *param_4 = 0x34;
      break;
    case 6:
      *param_4 = 0x41;
      break;
    case 7:
      *param_4 = 0x48;
      break;
    case 8:
      *param_4 = 0x55;
      break;
    case 10:
      *param_4 = 0x69;
      break;
    case 0xb:
      *param_4 = 0x71;
      break;
    case 0xc:
      *param_4 = 0x22;
      break;
    case 0xe:
      *param_4 = 0x55;
    }
    break;
  case 10:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x85;
      break;
    case 2:
      *param_4 = 0x8f;
      break;
    case 3:
      *param_4 = 0x7b;
      break;
    case 4:
      *param_4 = 0x2a;
      break;
    case 5:
      *param_4 = 0x32;
      break;
    case 6:
      *param_4 = 0x3e;
      break;
    case 7:
      *param_4 = 0x46;
      break;
    case 8:
      *param_4 = 0x52;
      break;
    case 9:
      *param_4 = 0x5a;
      break;
    case 0xb:
      *param_4 = 0x6e;
      break;
    case 0xc:
      *param_4 = 0x23;
    }
    break;
  case 0xb:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x89;
      break;
    case 2:
      *param_4 = 0x93;
      break;
    case 3:
      *param_4 = 0x7f;
      break;
    case 4:
      *param_4 = 0x2e;
      break;
    case 5:
      *param_4 = 0x35;
      break;
    case 6:
      *param_4 = 0x42;
      break;
    case 7:
      *param_4 = 0x49;
      break;
    case 8:
      *param_4 = 0x56;
      break;
    case 9:
      *param_4 = 0x5d;
      break;
    case 10:
      *param_4 = 0x6a;
      break;
    case 0xc:
      *param_4 = 0x24;
    }
    break;
  case 0xc:
    switch(param_3) {
    default:
      goto switchD_001022b0_caseD_0;
    case 1:
      *param_4 = 0x1b;
      break;
    case 2:
      *param_4 = 0x1c;
      break;
    case 3:
      *param_4 = 0x1a;
      break;
    case 4:
      *param_4 = 0x12;
      break;
    case 5:
      *param_4 = 0x13;
      break;
    case 6:
      *param_4 = 0x14;
      break;
    case 7:
      *param_4 = 0x15;
      break;
    case 8:
      *param_4 = 0x16;
      break;
    case 9:
      *param_4 = 0x17;
      break;
    case 10:
      *param_4 = 0x18;
      break;
    case 0xb:
      *param_4 = 0x19;
    }
  }
  return 1;
}



/* glslang::TIntermediate::addUniShapeConversion(glslang::TOperator, glslang::TType const&,
   glslang::TIntermTyped*) */

undefined8 glslang::TIntermediate::addUniShapeConversion(void)

{
  undefined8 in_RCX;
  
  return in_RCX;
}



/* glslang::TIntermediate::addBiShapeConversion(glslang::TOperator, glslang::TIntermTyped*&,
   glslang::TIntermTyped*&) */

void glslang::TIntermediate::addBiShapeConversion(void)

{
  return;
}



/* glslang::TIntermediate::isIntegralPromotion(glslang::TBasicType, glslang::TBasicType) const */

bool __thiscall
glslang::TIntermediate::isIntegralPromotion(undefined8 param_1,int param_2,int param_3)

{
  if (param_3 != 8) {
    return false;
  }
  return param_2 - 4U < 4;
}



/* glslang::TIntermediate::isFPPromotion(glslang::TBasicType, glslang::TBasicType) const */

bool __thiscall glslang::TIntermediate::isFPPromotion(undefined8 param_1,uint param_2,int param_3)

{
  if (param_3 != 2) {
    return false;
  }
  return (param_2 & 0xfffffffd) == 1;
}



/* glslang::TIntermediate::isIntegralConversion(glslang::TBasicType, glslang::TBasicType) const */

long __thiscall
glslang::TIntermediate::isIntegralConversion(TIntermediate *this,int param_2,uint param_3)

{
  long lVar1;
  undefined7 uVar2;
  
  if (6 < param_2 - 4U) {
    return 0;
  }
  lVar1 = (long)&switchD_00102a4e::switchdataD_001121b4 +
          (long)(int)(&switchD_00102a4e::switchdataD_001121b4)[param_2 - 4U];
  uVar2 = (undefined7)((ulong)lVar1 >> 8);
  switch(param_2) {
  case 4:
    if (param_3 < 8) {
      return CONCAT71(uVar2,4 < param_3);
    }
    break;
  case 5:
    if (param_3 < 8) {
      return CONCAT71(uVar2,5 < param_3);
    }
    break;
  case 6:
    lVar1 = 1;
    if (param_3 == 7) {
      return lVar1;
    }
    break;
  case 8:
    if (param_3 == 9) {
      return CONCAT71(uVar2,399 < *(int *)(this + 100));
    }
  case 9:
    return CONCAT71(uVar2,param_3 - 10 < 2);
  case 10:
    return CONCAT71(uVar2,param_3 == 0xb);
  }
  return CONCAT71((int7)((ulong)lVar1 >> 8),param_3 - 9 < 3);
}



/* glslang::TIntermediate::isFPConversion(glslang::TBasicType, glslang::TBasicType) const */

uint __thiscall glslang::TIntermediate::isFPConversion(undefined8 param_1,int param_2,int param_3)

{
  undefined8 in_RAX;
  
  return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),param_3 == 1) &
         CONCAT31((int3)((uint)param_3 >> 8),param_2 == 3);
}



/* glslang::TIntermediate::isFPIntegralConversion(glslang::TBasicType, glslang::TBasicType) const */

bool __thiscall
glslang::TIntermediate::isFPIntegralConversion(undefined8 param_1,uint param_2,int param_3)

{
  if (9 < param_2) {
    if (param_2 - 10 < 2) {
      return param_3 == 2;
    }
    return false;
  }
  if (param_2 < 8) {
    if (param_2 - 4 < 4) {
      return param_3 - 1U < 3;
    }
    return false;
  }
  return param_3 - 1U < 2;
}



/* glslang::TIntermediate::canImplicitlyPromote(glslang::TBasicType, glslang::TBasicType,
   glslang::TOperator) const */

ulong glslang::TIntermediate::canImplicitlyPromote(TIntermediate *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 100);
  uVar2 = (ulong)param_3;
  if (iVar6 == 8) {
    if (iVar5 < 0x136) {
      return 0;
    }
  }
  else if (iVar5 == 0x6e) {
    return 0;
  }
  if (param_2 == param_3) {
    return 1;
  }
  if (param_3 == 8) {
    if (3 < param_2 - 4) goto LAB_00102c2d;
    if (param_1[0x5c8] != (TIntermediate)0x0) {
      return 1;
    }
    if (iVar6 == 8) {
      return 0;
    }
switchD_00102d36_caseD_7:
    if (param_2 != 6) {
      return 0;
    }
LAB_00102d5e:
    return (ulong)(*(uint *)(param_1 + 0x5c8) >> 10 & 1);
  }
  if (param_3 == 2) {
    if ((param_2 & 0xfffffffd) == 1) {
      if (param_1[0x5c8] != (TIntermediate)0x0) {
        return 1;
      }
      if (iVar6 == 8) {
        return 0;
      }
      if (param_2 < 8) {
        if (5 < param_2) {
          if ((iVar5 < 400) && ((*(uint *)(param_1 + 0x5c8) & 0x200) == 0)) {
            return 0;
          }
          return (ulong)(*(uint *)(param_1 + 0x5c8) >> 10 & 1);
        }
        if (param_2 != 1) {
          if (param_2 != 3) {
            return 0;
          }
          uVar4 = *(uint *)(param_1 + 0x5c8);
          if ((iVar5 < 400) && ((uVar4 & 0x200) == 0)) {
            return 0;
          }
          goto LAB_00102c00;
        }
      }
      else if (3 < param_2 - 8) {
        return 0;
      }
      goto LAB_00102ee5;
    }
LAB_00102c2d:
    uVar1 = isIntegralConversion(param_1,param_2,uVar2);
    if ((char)uVar1 == '\0') {
      if (9 < param_2) {
        if (1 < param_2 - 10) {
          if (iVar6 == 8) {
            return uVar1;
          }
          goto LAB_00102cc8;
        }
        if ((int)uVar2 == 2) {
          if (param_1[0x5c8] != (TIntermediate)0x0) {
            return 1;
          }
          if (iVar6 == 8) {
            return uVar1;
          }
LAB_00102ee5:
          if (iVar5 < 400) {
            return (ulong)(*(uint *)(param_1 + 0x5c8) >> 9 & 1);
          }
          return 1;
        }
LAB_00102e4f:
        if (iVar6 == 8) {
          return 0;
        }
        uVar4 = (int)uVar2 - 9;
        if (2 < uVar4) {
          return 0;
        }
        switch((int)uVar2) {
        case 9:
          if (7 < param_2) {
            return 0;
          }
switchD_00102d36_caseD_9:
          if (param_2 < 6) {
            return 0;
          }
          goto LAB_00102d5e;
        case 0xb:
          return CONCAT71((int7)((ulong)((long)&switchD_00102e77::switchdataD_00112220 +
                                        (long)(int)(&switchD_00102e77::switchdataD_00112220)[uVar4])
                                >> 8),param_2 - 8 < 3);
        }
        goto switchD_00102d36_caseD_7;
      }
LAB_00102cf2:
      iVar3 = (int)uVar2;
      if (param_2 < 8) {
        if (3 < param_2 - 4) {
          if (iVar6 == 8) {
            return 0;
          }
          goto LAB_00102cc8;
        }
        if (2 < iVar3 - 1U) {
          if (iVar6 == 8) {
            return 0;
          }
          switch(iVar3) {
          case 7:
          case 8:
          case 10:
            goto switchD_00102d36_caseD_7;
          case 9:
          case 0xb:
            goto switchD_00102d36_caseD_9;
          default:
            return 0;
          }
        }
      }
      else if (1 < iVar3 - 1U) {
        if (iVar6 != 8) {
          if (2 < iVar3 - 9U) {
            return 0;
          }
          switch(iVar3) {
          case 10:
            return CONCAT71((int7)((ulong)((long)&switchD_00102da5::switchdataD_00112214 +
                                          (long)(int)(&switchD_00102da5::switchdataD_00112214)
                                                     [iVar3 - 9U]) >> 8),param_2 == 8);
          case 0xb:
            return 1;
          }
          if (param_2 != 8) {
            return 0;
          }
          if (iVar5 < 400) {
            uVar2 = IsRequestedExtension(param_1,"GL_ARB_gpu_shader5");
            return uVar2;
          }
          return 1;
        }
        goto LAB_00102ea9;
      }
LAB_00102cb0:
      if (param_1[0x5c8] != (TIntermediate)0x0) {
        return 1;
      }
      goto LAB_00102cbe;
    }
    if (param_1[0x5c8] != (TIntermediate)0x0) {
      return 1;
    }
    if (iVar6 != 8) goto LAB_00102cc8;
  }
  else {
    uVar1 = isIntegralConversion(param_1,param_2,uVar2);
    if ((char)uVar1 != '\0') goto LAB_00102cb0;
    if ((param_2 == 3) && ((int)uVar2 == 1)) {
      uVar4 = *(uint *)(param_1 + 0x5c8);
      if ((char)uVar4 != '\0') {
        return 1;
      }
      if (iVar6 == 8) {
        return uVar1;
      }
LAB_00102c00:
      return (ulong)(uVar4 >> 0xb & 1);
    }
    if (param_2 < 10) goto LAB_00102cf2;
    if (param_2 - 10 < 2) goto LAB_00102e4f;
LAB_00102cbe:
    if (iVar6 != 8) {
LAB_00102cc8:
      if (0xb < (uint)uVar2) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00102ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&DAT_001121d0 + *(int *)(&DAT_001121d0 + uVar2 * 4)))();
      return uVar2;
    }
    if ((int)uVar2 == 1) {
      if (1 < param_2 - 8) {
        return 0;
      }
      goto LAB_00102ebd;
    }
  }
LAB_00102ea9:
  if ((int)uVar2 != 9) {
    return 0;
  }
  if (param_2 != 8) {
    return 0;
  }
LAB_00102ebd:
  return (ulong)(*(uint *)(param_1 + 0x5c8) >> 8 & 1);
}



/* glslang::TIntermediate::getConversionDestinationType(glslang::TBasicType, glslang::TBasicType,
   glslang::TOperator) const */

undefined8 *
glslang::TIntermediate::getConversionDestinationType
          (undefined8 *param_1,long param_2,uint param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar4 = (ulong)param_3;
  uVar3 = (ulong)param_4;
  if (*(int *)(param_2 + 0x60) == 8) {
    if ((*(int *)(param_2 + 100) < 0x136) || ((*(byte *)(param_2 + 0x5c9) & 1) == 0))
    goto LAB_001030d7;
  }
  else if (*(int *)(param_2 + 100) == 0x6e) {
LAB_001030d7:
    *param_1 = _LC10;
    return param_1;
  }
  if (param_3 == 2) {
    cVar1 = canImplicitlyPromote(param_2,uVar3,2,param_5);
    if (cVar1 != '\0') goto LAB_00103236;
    if (param_4 == 2) {
      cVar1 = canImplicitlyPromote(param_2,2,2,param_5);
      if (cVar1 != '\0') goto LAB_00103236;
LAB_00103150:
      if ((0x550UL >> (uVar4 & 0x3f) & 1) == 0) goto LAB_001031f8;
      if (0xb < param_4) goto LAB_00103210;
LAB_00103168:
      if ((0xaa0UL >> (uVar3 & 0x3f) & 1) != 0) goto LAB_0010306a;
    }
    else {
      if (param_4 == 1) {
LAB_00103262:
        cVar1 = canImplicitlyPromote(param_2,param_3,1,param_5);
        if (cVar1 != '\0') goto LAB_00103116;
        goto LAB_00103150;
      }
      if (param_4 == 3) goto LAB_001031a5;
LAB_001031f8:
      if ((0xaa0UL >> (uVar4 & 0x3f) & 1) != 0) goto LAB_00103052;
    }
  }
  else {
    if (param_4 == 2) {
      cVar1 = canImplicitlyPromote(param_2,param_3,2,param_5);
      if (cVar1 == '\0') {
        if (param_3 == 1) {
          cVar1 = canImplicitlyPromote(param_2,2,1,param_5);
          if (cVar1 != '\0') goto LAB_00103116;
        }
        else {
LAB_00103140:
          if (param_3 == 3) goto LAB_00103180;
          if (param_3 < 0xb) goto LAB_00103150;
LAB_001032e8:
          if (param_3 < 0xc) goto LAB_00103052;
        }
        goto LAB_00103210;
      }
LAB_00103236:
      uVar2 = 2;
      goto LAB_0010311b;
    }
    if (param_3 == 1) {
      cVar1 = canImplicitlyPromote(param_2,param_4,1,param_5);
      if (cVar1 != '\0') goto LAB_00103116;
      if (param_4 == 1) goto LAB_00103262;
LAB_001031a0:
      if (param_4 != 3) goto LAB_00103210;
LAB_001031a5:
      cVar1 = canImplicitlyPromote(param_2,param_3,3,param_5);
      if (cVar1 != '\0') goto LAB_00103195;
      if (param_3 < 0xb) goto LAB_00103150;
      if (0xb < param_3) goto LAB_00103210;
LAB_0010305b:
      if ((0x550UL >> (uVar3 & 0x3f) & 1) == 0) goto LAB_00103168;
    }
    else {
      if (param_4 == 1) {
        cVar1 = canImplicitlyPromote(param_2,param_3,1,param_5);
        if (cVar1 == '\0') goto LAB_00103140;
LAB_00103116:
        uVar2 = 1;
        goto LAB_0010311b;
      }
      if (param_3 == 3) {
LAB_00103180:
        cVar1 = canImplicitlyPromote(param_2,uVar3,3,param_5);
        if (cVar1 == '\0') goto LAB_001031a0;
LAB_00103195:
        uVar2 = 3;
        goto LAB_0010311b;
      }
      if (param_4 == 3) goto LAB_001031a5;
      if (10 < param_3) goto LAB_001032e8;
      if ((0x550UL >> (uVar4 & 0x3f) & 1) == 0) goto LAB_001031f8;
LAB_00103052:
      if (param_4 < 0xb) goto LAB_0010305b;
      if (0xb < param_4) goto LAB_00103210;
    }
LAB_0010306a:
    cVar1 = canImplicitlyPromote(param_2,param_3,uVar3,param_5);
    if ((cVar1 != '\0') ||
       (cVar1 = canImplicitlyPromote(param_2,uVar3,param_3,param_5), cVar1 != '\0')) {
      if (param_3 < 0xb) {
        bVar5 = (0x550UL >> (uVar4 & 0x3f) & 1) != 0;
        if (((!bVar5) || (10 < param_4)) || ((0x550UL >> (uVar3 & 0x3f) & 1) == 0)) {
          if ((0xaa0UL >> (uVar4 & 0x3f) & 1) != 0) goto LAB_001032b5;
          goto LAB_0010332b;
        }
      }
      else {
        bVar5 = false;
LAB_001032b5:
        if ((0xaa0UL >> (uVar3 & 0x3f) & 1) == 0) {
          uVar2 = param_3;
          if (*(int *)(CSWTCH_1144 + (ulong)(param_4 - 4) * 4) <
              *(int *)(CSWTCH_1144 + (ulong)(param_3 - 4) * 4)) goto LAB_0010311b;
LAB_0010332b:
          if (((0xaa0UL >> (uVar3 & 0x3f) & 1) != 0) &&
             (uVar2 = param_4,
             *(int *)(CSWTCH_1144 + (ulong)(param_3 - 4) * 4) <
             *(int *)(CSWTCH_1144 + (ulong)(param_4 - 4) * 4))) goto LAB_0010311b;
          if (bVar5) {
            cVar1 = canSignedIntTypeRepresentAllUnsignedValues(param_3,uVar3);
            uVar2 = param_3;
            if (cVar1 != '\0') goto LAB_0010311b;
            if (param_3 != 0xb) {
              uVar2 = *(uint *)(CSWTCH_1106 + (ulong)(param_3 - 4) * 4);
              goto LAB_0010311b;
            }
          }
          else if ((param_4 < 0xb) && ((0x550UL >> (uVar3 & 0x3f) & 1) != 0)) {
            cVar1 = canSignedIntTypeRepresentAllUnsignedValues(param_4,param_3);
            uVar2 = param_4;
            if (cVar1 == '\0') {
              uVar2 = *(uint *)(CSWTCH_1106 + (ulong)(param_4 - 4) * 4);
            }
            goto LAB_0010311b;
          }
          goto LAB_00103210;
        }
      }
      uVar2 = param_4;
      if (*(int *)(CSWTCH_1144 + (ulong)(param_4 - 4) * 4) <=
          *(int *)(CSWTCH_1144 + (ulong)(param_3 - 4) * 4)) {
        uVar2 = param_3;
      }
      goto LAB_0010311b;
    }
  }
LAB_00103210:
  uVar2 = 0x18;
LAB_0010311b:
  *param_1 = CONCAT44(uVar2,uVar2);
  return param_1;
}



/* glslang::TIntermediate::mapTypeToConstructorOp(glslang::TType const&) const */

undefined8 __thiscall
glslang::TIntermediate::mapTypeToConstructorOp(TIntermediate *this,TType *param_1)

{
  undefined8 uVar1;
  TType *pTVar2;
  
  if (*(code **)(*(long *)param_1 + 0x58) == TType::getQualifier) {
    pTVar2 = param_1 + 0x10;
  }
  else {
    pTVar2 = (TType *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
  }
  if (((byte)pTVar2[0xc] & 2) != 0) {
    return 0x243;
  }
  if (((byte)param_1[10] & 0x20) != 0) {
    return 0x245;
  }
  if (((byte)param_1[10] & 0x40) == 0) {
    uVar1 = mapTypeToConstructorOp(param_1);
    return uVar1;
  }
  return 0x246;
}



/* glslang::TIntermediate::addSelection(glslang::TIntermTyped*, glslang::TIntermNodePair,
   glslang::TSourceLoc const&) */

void glslang::TIntermediate::addSelection
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar2 = glslang::GetThreadPoolAllocator();
  puVar3 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar2);
  *(ushort *)((long)puVar3 + 0x4c) = *(ushort *)((long)puVar3 + 0x4c) | 0xfff;
  puVar3[4] = &PTR__TType_00117c00;
  puVar3[0x19] = param_4;
  *(byte *)(puVar3 + 8) = *(byte *)(puVar3 + 8) & 0xf0;
  *(uint *)(puVar3 + 5) =
       CONCAT22((short)((uint)*(undefined4 *)(puVar3 + 5) >> 0x10),0x100) & 0xf800ffff;
  puVar3[7] = puVar3[7] & 0x8000000400000000;
  *(uint *)(puVar3 + 0x14) = *(uint *)(puVar3 + 0x14) & 0x9fc00000;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(ulong *)((long)puVar3 + 0x4d) =
       (ulong)((uint)*(undefined8 *)((long)puVar3 + 0x4d) & 0xffc00f) | 0xffffffffff001fc0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(ulong *)((long)puVar3 + 0x55) =
       *(ulong *)((long)puVar3 + 0x55) & 0xfe000000800000 | 0x1ffffff7fffff;
  *(undefined2 *)(puVar3 + 0xf) = 0;
  puVar3[6] = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((long)puVar3 + 0x5d) = 0;
  *(undefined4 *)((long)puVar3 + 100) = 0xfffff800;
  puVar3[0xd] = 0xffffffff00000000;
  puVar3[0xe] = 0;
  *puVar3 = &TIntermConstantUnion::vtable;
  *(undefined2 *)(puVar3 + 0x1a) = 1;
  *(undefined1 (*) [16])(puVar3 + 0x15) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  puVar3[0x17] = param_2;
  puVar3[0x18] = param_3;
  *(undefined1 *)((long)puVar3 + 0xd2) = 0;
  uVar1 = param_5[1];
  puVar3[1] = *param_5;
  puVar3[2] = uVar1;
  puVar3[3] = param_5[2];
  return;
}



/* glslang::TIntermediate::addMethod(glslang::TIntermTyped*, glslang::TType const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const*,
   glslang::TSourceLoc const&) */

long * __thiscall
glslang::TIntermediate::addMethod
          (TIntermediate *this,TIntermTyped *param_1,TType *param_2,basic_string *param_3,
          TSourceLoc *param_4)

{
  TType TVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 *__src;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *__dest;
  byte bVar10;
  byte bVar11;
  
  uVar7 = glslang::GetThreadPoolAllocator();
  plVar8 = (long *)glslang::TPoolAllocator::allocate(uVar7);
  plVar8[2] = 0;
  plVar8[1] = 0;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = (long)&PTR_getLoc_00118050;
  plVar8[4] = (long)&PTR__TType_00117c00;
  *(uint *)(plVar8 + 0x14) = *(uint *)(plVar8 + 0x14) & 0x9fc00000;
  *(byte *)(plVar8 + 8) = *(byte *)(plVar8 + 8) & 0xf0;
  *(undefined1 (*) [16])(plVar8 + 0x15) = (undefined1  [16])0x0;
  *(uint *)(plVar8 + 5) = CONCAT22((short)((uint)(int)plVar8[5] >> 0x10),0x100) & 0xf800ffff;
  *(undefined1 (*) [16])(plVar8 + 0x10) = (undefined1  [16])0x0;
  *(ulong *)((long)plVar8 + 0x4d) =
       *(ulong *)((long)plVar8 + 0x4d) & 0xffffff0000ffc07f | 0xffff001f80;
  *(undefined1 (*) [16])(plVar8 + 0x12) = (undefined1  [16])0x0;
  plVar8[0xb] = CONCAT71((uint7)((ulong)plVar8[0xb] >> 8) & 0xffffffff,0xff);
  *(undefined8 *)((long)plVar8 + 100) = 0xfffff800;
  *(undefined2 *)(plVar8 + 0xf) = 0;
  plVar8[6] = 0;
  *(ulong *)((long)plVar8 + 0x4c) =
       *(ulong *)((long)plVar8 + 0x4c) & 0xffffffff8000 | 0xffff000000004fff;
  *(undefined8 *)((long)plVar8 + 0x44) = 0xffffffffffffffff;
  *(ulong *)((long)plVar8 + 0x54) = *(ulong *)((long)plVar8 + 0x54) | 0x1ffff007fffffff;
  *(undefined1 *)(plVar8 + 0xc) = 0;
  plVar8[7] = plVar8[7] & 0x8000000400000000;
  *(undefined1 *)((long)plVar8 + 0x5c) = 0;
  *(undefined4 *)((long)plVar8 + 0x6c) = 0xffffffff;
  plVar8[0xe] = 0;
  lVar4 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x80);
  *(TType *)(plVar8 + 5) = param_2[8];
  plVar8[6] = lVar4;
  plVar8[7] = lVar5;
  lVar4 = *(long *)(param_2 + 0x20);
  lVar5 = *(long *)(param_2 + 0x28);
  *(undefined4 *)(plVar8 + 0x14) = uVar3;
  plVar8[8] = lVar4;
  plVar8[9] = lVar5;
  lVar4 = *(long *)(param_2 + 0x38);
  plVar8[10] = *(long *)(param_2 + 0x30);
  plVar8[0xb] = lVar4;
  lVar4 = *(long *)(param_2 + 0x48);
  plVar8[0xc] = *(long *)(param_2 + 0x40);
  plVar8[0xd] = lVar4;
  lVar4 = *(long *)(param_2 + 0x58);
  plVar8[0xe] = *(long *)(param_2 + 0x50);
  plVar8[0xf] = lVar4;
  TVar1 = param_2[9];
  *(byte *)((long)plVar8 + 0x29) = *(byte *)((long)plVar8 + 0x29) & 0xf0 | (byte)TVar1 & 0xf;
  *(byte *)((long)plVar8 + 0x29) = (byte)TVar1 & 0xf | (byte)param_2[9] & 0xf0;
  bVar2 = *(byte *)((long)plVar8 + 0x2a);
  bVar10 = (byte)param_2[10] & 0xf;
  *(byte *)((long)plVar8 + 0x2a) = bVar2 & 0xf0 | bVar10;
  bVar11 = (byte)param_2[10] & 0x10;
  *(byte *)((long)plVar8 + 0x2a) = bVar2 & 0xe0 | bVar10 | bVar11;
  lVar5 = *(long *)(param_2 + 0x70);
  lVar6 = *(long *)(param_2 + 0x78);
  lVar4 = *(long *)(param_2 + 0x68);
  plVar8[0x10] = *(long *)(param_2 + 0x60);
  plVar8[0x12] = lVar5;
  plVar8[0x13] = lVar6;
  plVar8[0x11] = lVar4;
  lVar4 = *(long *)(param_2 + 0x90);
  plVar8[0x15] = *(long *)(param_2 + 0x88);
  plVar8[0x16] = lVar4;
  TVar1 = param_2[10];
  *(byte *)((long)plVar8 + 0x2a) = bVar2 & 0xc0 | bVar10 | bVar11 | (byte)TVar1 & 0x20;
  *(byte *)((long)plVar8 + 0x2a) =
       bVar2 & 0x80 | bVar10 | bVar11 | (byte)TVar1 & 0x20 | (byte)param_2[10] & 0x40;
  *(ushort *)((long)plVar8 + 0x2a) =
       *(ushort *)((long)plVar8 + 0x2a) & 0xfc7f | *(ushort *)(param_2 + 10) & 0x380;
  TVar1 = param_2[0xb];
  plVar8[0x17] = (long)param_1;
  *(byte *)((long)plVar8 + 0x2b) = *(byte *)((long)plVar8 + 0x2b) & 0xfb | (byte)TVar1 & 4;
  *plVar8 = (long)frexp;
  uVar9 = glslang::GetThreadPoolAllocator();
  uVar7 = *(ulong *)(param_3 + 0x10);
  __dest = plVar8 + 0x1b;
  plVar8[0x19] = (long)__dest;
  __src = *(undefined1 **)(param_3 + 8);
  plVar8[0x18] = uVar9;
  if (uVar7 < 0x10) {
    if (uVar7 == 1) {
      *(undefined1 *)(plVar8 + 0x1b) = *__src;
      goto LAB_0010385a;
    }
    if (uVar7 == 0) goto LAB_0010385a;
  }
  else {
    if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (long *)glslang::TPoolAllocator::allocate(uVar9);
    plVar8[0x1b] = uVar7;
    plVar8[0x19] = (long)__dest;
  }
  memcpy(__dest,__src,uVar7);
  __dest = (long *)plVar8[0x19];
LAB_0010385a:
  plVar8[0x1a] = uVar7;
  *(undefined1 *)((long)__dest + uVar7) = 0;
  if (*(code **)(*plVar8 + 8) != TIntermNode::setLoc) {
    (**(code **)(*plVar8 + 8))(plVar8,param_4);
    return plVar8;
  }
  lVar4 = *(long *)(param_4 + 8);
  plVar8[1] = *(long *)param_4;
  plVar8[2] = lVar4;
  plVar8[3] = *(long *)(param_4 + 0x10);
  return plVar8;
}



/* glslang::TIntermediate::addConstantUnion(glslang::TConstUnionArray const&, glslang::TType const&,
   glslang::TSourceLoc const&, bool) const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,TConstUnionArray *param_1,TType *param_2,TSourceLoc *param_3,
          bool param_4)

{
  TType TVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  
  uVar7 = glslang::GetThreadPoolAllocator();
  puVar8 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar7);
  *puVar8 = &PTR_getLoc_00118050;
  puVar8[4] = &PTR__TType_00117c00;
  *(byte *)(puVar8 + 8) = *(byte *)(puVar8 + 8) & 0xf0;
  *(undefined8 *)((long)puVar8 + 100) = 0xfffff800;
  *(uint *)(puVar8 + 5) =
       CONCAT22((short)((uint)*(undefined4 *)(puVar8 + 5) >> 0x10),0x100) & 0xf800ffff;
  puVar8[1] = 0;
  *(ulong *)((long)puVar8 + 0x4d) =
       *(ulong *)((long)puVar8 + 0x4d) & 0xffffff0000ffc07f | 0xffff001f80;
  puVar8[2] = 0;
  puVar8[0xb] = CONCAT71((uint7)((ulong)puVar8[0xb] >> 8) & 0xffffffff,0xff);
  *(undefined2 *)(puVar8 + 0xf) = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(uint *)(puVar8 + 0x14) = *(uint *)(puVar8 + 0x14) & 0x9fc00000;
  *(ulong *)((long)puVar8 + 0x4c) =
       *(ulong *)((long)puVar8 + 0x4c) & 0xffffffff8000 | 0xffff000000004fff;
  puVar8[6] = 0;
  *(ulong *)((long)puVar8 + 0x54) = *(ulong *)((long)puVar8 + 0x54) | 0x1ffff007fffffff;
  *(undefined8 *)((long)puVar8 + 0x44) = 0xffffffffffffffff;
  puVar8[7] = puVar8[7] & 0x8000000400000000;
  *(undefined1 *)(puVar8 + 0xc) = 0;
  *(undefined1 *)((long)puVar8 + 0x5c) = 0;
  *(undefined4 *)((long)puVar8 + 0x6c) = 0xffffffff;
  puVar8[0xe] = 0;
  *(undefined1 (*) [16])(puVar8 + 0x15) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 0x12) = (undefined1  [16])0x0;
  TVar1 = param_2[8];
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x80);
  puVar8[6] = *(undefined8 *)(param_2 + 0x10);
  puVar8[7] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(puVar8 + 0x14) = uVar3;
  puVar8[8] = uVar4;
  puVar8[9] = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  *(TType *)(puVar8 + 5) = TVar1;
  puVar8[10] = uVar4;
  puVar8[0xb] = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  puVar8[0xc] = *(undefined8 *)(param_2 + 0x40);
  puVar8[0xd] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  puVar8[0xe] = *(undefined8 *)(param_2 + 0x50);
  puVar8[0xf] = uVar4;
  TVar1 = param_2[9];
  *(byte *)((long)puVar8 + 0x29) = *(byte *)((long)puVar8 + 0x29) & 0xf0 | (byte)TVar1 & 0xf;
  *(byte *)((long)puVar8 + 0x29) = (byte)TVar1 & 0xf | (byte)param_2[9] & 0xf0;
  bVar2 = *(byte *)((long)puVar8 + 0x2a);
  bVar9 = (byte)param_2[10] & 0xf;
  *(byte *)((long)puVar8 + 0x2a) = bVar2 & 0xf0 | bVar9;
  bVar10 = (byte)param_2[10] & 0x10;
  *(byte *)((long)puVar8 + 0x2a) = bVar2 & 0xe0 | bVar9 | bVar10;
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  puVar8[0x10] = *(undefined8 *)(param_2 + 0x60);
  puVar8[0x11] = uVar4;
  puVar8[0x12] = uVar5;
  puVar8[0x13] = uVar6;
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  puVar8[0x15] = *(undefined8 *)(param_2 + 0x88);
  puVar8[0x16] = uVar4;
  TVar1 = param_2[10];
  *(byte *)((long)puVar8 + 0x2a) = bVar2 & 0xc0 | bVar9 | bVar10 | (byte)TVar1 & 0x20;
  *(byte *)((long)puVar8 + 0x2a) =
       bVar2 & 0x80 | bVar9 | bVar10 | (byte)TVar1 & 0x20 | (byte)param_2[10] & 0x40;
  *(ushort *)((long)puVar8 + 0x2a) =
       *(ushort *)((long)puVar8 + 0x2a) & 0xfc7f | *(ushort *)(param_2 + 10) & 0x380;
  TVar1 = param_2[0xb];
  *puVar8 = &TIntermLoop::vtable;
  puVar8[0x17] = &PTR__TConstUnionArray_00117de8;
  *(byte *)((long)puVar8 + 0x2b) = *(byte *)((long)puVar8 + 0x2b) & 0xfb | (byte)TVar1 & 4;
  uVar4 = *(undefined8 *)param_3;
  uVar5 = *(undefined8 *)(param_3 + 8);
  puVar8[0x18] = *(undefined8 *)(param_1 + 8);
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  *(byte *)(puVar8 + 7) = *(byte *)(puVar8 + 7) & 0x80 | 2;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  *(bool *)(puVar8 + 0x19) = param_4;
  puVar8[3] = uVar4;
  return;
}



/* glslang::TIntermediate::addConstantUnion(signed char, glslang::TSourceLoc const&, bool) const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,undefined1 param_2,TSourceLoc *param_3,bool param_4)

{
  ulong uVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)puVar3;
  puVar2[3] = (ulong)(puVar3 + 4);
  *puVar3 = 0;
  puVar2[2] = (ulong)(puVar3 + 4);
  *(undefined1 *)puVar3 = param_2;
  puVar3[2] = 4;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x104;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  local_78 = 0;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_40 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_3,param_4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(unsigned char, glslang::TSourceLoc const&, bool) const
    */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,uchar param_1,TSourceLoc *param_2,bool param_3)

{
  ulong uVar1;
  ulong *puVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (uint *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)puVar3;
  puVar2[3] = (ulong)(puVar3 + 4);
  puVar2[2] = (ulong)(puVar3 + 4);
  *puVar3 = (uint)param_1;
  puVar3[2] = 9;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x105;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_40 = (undefined1  [16])0x0;
  local_78 = 0;
  local_58 = (undefined1  [16])0x0;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(short, glslang::TSourceLoc const&, bool) const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,short param_1,TSourceLoc *param_2,bool param_3)

{
  ulong uVar1;
  ulong *puVar2;
  short *psVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  psVar3 = (short *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)psVar3;
  puVar2[3] = (ulong)(psVar3 + 8);
  psVar3[0] = 0;
  psVar3[1] = 0;
  puVar2[2] = (ulong)(psVar3 + 8);
  *psVar3 = param_1;
  psVar3[4] = 6;
  psVar3[5] = 0;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x106;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  local_78 = 0;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_40 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(unsigned short, glslang::TSourceLoc const&, bool) const
    */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,ushort param_1,TSourceLoc *param_2,bool param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ushort *puVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (ushort *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)puVar3;
  puVar2[3] = (ulong)(puVar3 + 8);
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar2[2] = (ulong)(puVar3 + 8);
  *puVar3 = param_1;
  puVar3[4] = 7;
  puVar3[5] = 0;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x107;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  local_78 = 0;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_40 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(int, glslang::TSourceLoc const&, bool) const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,int param_1,TSourceLoc *param_2,bool param_3)

{
  ulong uVar1;
  ulong *puVar2;
  int *piVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  piVar3 = (int *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)piVar3;
  puVar2[3] = (ulong)(piVar3 + 4);
  puVar2[2] = (ulong)(piVar3 + 4);
  *piVar3 = param_1;
  piVar3[2] = 8;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x108;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_40 = (undefined1  [16])0x0;
  local_78 = 0;
  local_58 = (undefined1  [16])0x0;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(unsigned int, glslang::TSourceLoc const&, bool) const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,uint param_1,TSourceLoc *param_2,bool param_3)

{
  ulong uVar1;
  ulong *puVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (uint *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)puVar3;
  puVar2[3] = (ulong)(puVar3 + 4);
  puVar2[2] = (ulong)(puVar3 + 4);
  *puVar3 = param_1;
  puVar3[2] = 9;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x109;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_40 = (undefined1  [16])0x0;
  local_78 = 0;
  local_58 = (undefined1  [16])0x0;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(long long, glslang::TSourceLoc const&, bool) const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,longlong param_1,TSourceLoc *param_2,bool param_3)

{
  ulong uVar1;
  ulong *puVar2;
  longlong *plVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  plVar3 = (longlong *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)plVar3;
  puVar2[3] = (ulong)(plVar3 + 2);
  puVar2[2] = (ulong)(plVar3 + 2);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = 10;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x10a;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_40 = (undefined1  [16])0x0;
  local_78 = 0;
  local_58 = (undefined1  [16])0x0;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(unsigned long long, glslang::TSourceLoc const&, bool)
   const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,ulonglong param_1,TSourceLoc *param_2,bool param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulonglong *puVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (ulonglong *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)puVar3;
  puVar2[3] = (ulong)(puVar3 + 2);
  puVar2[2] = (ulong)(puVar3 + 2);
  *puVar3 = param_1;
  *(undefined4 *)(puVar3 + 1) = 0xb;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x10b;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_40 = (undefined1  [16])0x0;
  local_78 = 0;
  local_58 = (undefined1  [16])0x0;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(bool, glslang::TSourceLoc const&, bool) const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,bool param_1,TSourceLoc *param_2,bool param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)puVar3;
  puVar2[3] = (ulong)(puVar3 + 4);
  *puVar3 = 0;
  puVar2[2] = (ulong)(puVar3 + 4);
  *(bool *)puVar3 = param_1;
  puVar3[2] = 0xc;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x10c;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  local_78 = 0;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_40 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(double, glslang::TBasicType, glslang::TSourceLoc const&,
   bool) const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (double param_1,TIntermediate *this,uint param_3,TSourceLoc *param_4,bool param_5)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  double *pdVar4;
  int iVar5;
  long in_FS_OFFSET;
  double local_f0;
  undefined **local_e8;
  ulong *local_e0;
  undefined **local_d8;
  uint local_d0;
  undefined8 local_c8;
  ulong local_c0;
  byte local_b8;
  undefined8 local_b4;
  undefined1 uStack_ac;
  uint7 local_ab;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  uint local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = param_1;
  if ((*(int *)(this + 0x60) == 8) && ((param_3 & 0xfffffffd) == 1)) {
    local_d8 = (undefined **)((ulong)local_d8 & 0xffffffff00000000);
    frexp(param_1,(int *)&local_d8);
    iVar5 = -0x7e;
    if (param_3 != 1) {
      iVar5 = -0xe;
    }
    iVar1 = 0xf;
    if (param_3 == 1) {
      iVar1 = 0x7f;
    }
    if (iVar1 < (int)local_d8) {
      local_f0 = _LC12;
    }
    else if ((int)local_d8 < iVar5) {
      local_f0 = 0.0;
    }
  }
  local_e8 = &PTR__TConstUnionArray_00117de8;
  uVar2 = glslang::GetThreadPoolAllocator();
  puVar3 = (ulong *)glslang::TPoolAllocator::allocate(uVar2);
  uVar2 = glslang::GetThreadPoolAllocator();
  puVar3[1] = 0;
  *puVar3 = uVar2;
  puVar3[2] = 0;
  puVar3[3] = 0;
  pdVar4 = (double *)glslang::TPoolAllocator::allocate(uVar2);
  local_d0 = CONCAT31(local_d0._1_3_,(char)param_3);
  puVar3[1] = (ulong)pdVar4;
  puVar3[3] = (ulong)(pdVar4 + 2);
  puVar3[2] = (ulong)(pdVar4 + 2);
  *(undefined4 *)(pdVar4 + 1) = 2;
  *pdVar4 = local_f0;
  local_d8 = &PTR__TType_00117c00;
  local_58 = local_58 & 0x9fc00000;
  local_b8 = local_b8 & 0xf0;
  local_d0 = CONCAT22((short)((local_d0 & 0xf80000ff) >> 0x10),
                      CONCAT11(1,(char)(local_d0 & 0xf80000ff)));
  local_94 = 0xfffff800;
  local_80 = 0;
  local_98 = 0;
  local_c8 = 0;
  local_8c = 0xffffffff;
  local_50 = (undefined1  [16])0x0;
  uStack_9c = 0;
  local_ab = local_ab & 0xffc000 | 0xffffffff001fcf;
  local_78 = (undefined1  [16])0x0;
  uStack_ac = 0xff;
  local_b4 = 0xffffffffffffffff;
  uVar2 = CONCAT44(local_a0,uStack_a4) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_a4 = (undefined4)uVar2;
  local_a0 = (undefined4)(uVar2 >> 0x20);
  local_68 = (undefined1  [16])0x0;
  local_88 = 0;
  local_c0 = local_c0 & 0x8000000400000000 | 2;
  local_e0 = puVar3;
  addConstantUnion(this,(TConstUnionArray *)&local_e8,(TType *)&local_d8,param_4,param_5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addConstantUnion(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*, glslang::TSourceLoc const&, bool) const */

void __thiscall
glslang::TIntermediate::addConstantUnion
          (TIntermediate *this,basic_string *param_1,TSourceLoc *param_2,bool param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined **local_d8;
  ulong *local_d0;
  undefined **local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulong local_b0;
  byte local_a8;
  undefined8 local_a4;
  undefined1 uStack_9c;
  uint7 local_9b;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = &PTR__TConstUnionArray_00117de8;
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (ulong *)glslang::TPoolAllocator::allocate(uVar1);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2[1] = 0;
  *puVar2 = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar1);
  puVar2[1] = (ulong)puVar3;
  puVar2[3] = (ulong)(puVar3 + 2);
  puVar2[2] = (ulong)(puVar3 + 2);
  *puVar3 = param_1;
  *(undefined4 *)(puVar3 + 1) = 0x17;
  local_c8 = &PTR__TType_00117c00;
  local_48 = local_48 & 0x9fc00000;
  local_a8 = local_a8 & 0xf0;
  local_c0 = local_c0 & 0xf8000000 | 0x117;
  local_84 = 0xfffff800;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a4 = 0xffffffffffffffff;
  uStack_8c = 0;
  local_9b = local_9b & 0xffc000 | 0xffffffff001fcf;
  local_7c = 0xffffffff;
  uStack_9c = 0xff;
  uVar1 = CONCAT44(local_90,uStack_94) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
  uStack_94 = (undefined4)uVar1;
  local_90 = (undefined4)(uVar1 >> 0x20);
  local_b0 = local_b0 & 0x8000000400000000 | 2;
  local_40 = (undefined1  [16])0x0;
  local_78 = 0;
  local_58 = (undefined1  [16])0x0;
  local_d0 = puVar2;
  addConstantUnion(this,(TConstUnionArray *)&local_d8,(TType *)&local_c8,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::pushSelector(glslang::TVector<TIntermNode*>&, int const&,
   glslang::TSourceLoc const&) */

void __thiscall
glslang::TIntermediate::pushSelector
          (TIntermediate *this,TVector *param_1,int *param_2,TSourceLoc *param_3)

{
  long in_FS_OFFSET;
  TIntermNode *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (TIntermNode *)addConstantUnion(this,*param_2,param_3,false);
  std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::emplace_back<TIntermNode*>
            ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)param_1,&local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::pushSelector(glslang::TVector<TIntermNode*>&, glslang::TMatrixSelector
   const&, glslang::TSourceLoc const&) */

void __thiscall
glslang::TIntermediate::pushSelector
          (TIntermediate *this,TVector *param_1,TMatrixSelector *param_2,TSourceLoc *param_3)

{
  long in_FS_OFFSET;
  TIntermNode *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (TIntermNode *)addConstantUnion(this,*(int *)param_2,param_3,false);
  std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::emplace_back<TIntermNode*>
            ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)param_1,&local_38);
  local_38 = (TIntermNode *)addConstantUnion(this,*(int *)(param_2 + 4),param_3,false);
  std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::emplace_back<TIntermNode*>
            ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)param_1,&local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::traverseLValueBase(glslang::TIntermTyped const*, bool, bool,
   std::function<bool (TIntermNode const&)>) */

long * glslang::TIntermediate::traverseLValueBase
                 (long *param_1,char param_2,char param_3,long param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  do {
    plVar4 = (long *)(**(code **)(*param_1 + 0xa0))(param_1);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(param_4 + 0x10) != 0) {
        (**(code **)(param_4 + 0x18))(param_4,param_1);
        return param_1;
      }
      return param_1;
    }
    iVar1 = (int)plVar4[0x17];
    if ((3 < iVar1 - 0xb6U) && (iVar1 != 0x341)) {
      return (long *)0x0;
    }
    if (param_2 == '\0') {
      if (iVar1 == 0xb9) {
        return (long *)0x0;
      }
      if (iVar1 == 0x341) {
        return (long *)0x0;
      }
      if (iVar1 - 0xb6U != 2) {
        if (*(code **)(*plVar4 + 400) == TIntermBinary::getLeft) {
          plVar5 = (long *)plVar4[0x18];
        }
        else {
          plVar5 = (long *)(**(code **)(*plVar4 + 400))(plVar4);
        }
        if (*(code **)(*plVar5 + 0xf0) == TIntermTyped::getType) {
          plVar5 = plVar5 + 4;
        }
        else {
          plVar5 = (long *)(**(code **)(*plVar5 + 0xf0))();
        }
        if (*(code **)(*plVar5 + 0xd8) == TType::isVector) {
          if ((*(byte *)((long)plVar5 + 9) & 0xf) < 2) {
            bVar3 = *(byte *)((long)plVar5 + 10) >> 4 & 1;
            goto LAB_0010538a;
          }
LAB_001052b5:
          lVar6 = *plVar4;
        }
        else {
          bVar3 = (**(code **)(*plVar5 + 0xd8))();
LAB_0010538a:
          lVar6 = *plVar4;
          if (bVar3 == 0) {
            if (*(code **)(lVar6 + 400) == TIntermBinary::getLeft) {
              plVar5 = (long *)plVar4[0x18];
            }
            else {
              plVar5 = (long *)(**(code **)(lVar6 + 400))(plVar4);
            }
            if (*(code **)(*plVar5 + 0xf0) == TIntermTyped::getType) {
              plVar5 = plVar5 + 4;
            }
            else {
              plVar5 = (long *)(**(code **)(*plVar5 + 0xf0))();
            }
            cVar2 = (**(code **)(*plVar5 + 0xc0))();
            if (cVar2 == '\0') goto LAB_00105318;
            goto LAB_001052b5;
          }
        }
        if (*(code **)(lVar6 + 400) == TIntermBinary::getLeft) {
          plVar5 = (long *)plVar4[0x18];
        }
        else {
          plVar5 = (long *)(**(code **)(lVar6 + 400))(plVar4);
        }
        if (*(code **)(*plVar5 + 0xf0) == TIntermTyped::getType) {
          plVar5 = plVar5 + 4;
        }
        else {
          plVar5 = (long *)(**(code **)(*plVar5 + 0xf0))();
        }
        if (*(code **)(*plVar5 + 0xe8) == TType::isArray) {
          if (plVar5[0xc] == 0) {
            return (long *)0x0;
          }
        }
        else {
          cVar2 = (**(code **)(*plVar5 + 0xe8))();
          if (cVar2 == '\0') {
            return (long *)0x0;
          }
        }
      }
    }
LAB_00105318:
    if ((*(long *)(param_4 + 0x10) != 0) &&
       (cVar2 = (**(code **)(param_4 + 0x18))(param_4,param_1), cVar2 == '\0')) {
      return param_1;
    }
    if (*(code **)(*plVar4 + 400) == TIntermBinary::getLeft) {
      param_1 = (long *)plVar4[0x18];
    }
    else {
      param_1 = (long *)(**(code **)(*plVar4 + 400))(plVar4);
    }
    if ((param_3 != '\0') && ((char)param_1[5] == '\x12')) {
      return param_1;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TIntermediate::addLoop(TIntermNode*, glslang::TIntermTyped*, glslang::TIntermTyped*,
   bool, glslang::TSourceLoc const&) */

void __thiscall
glslang::TIntermediate::addLoop
          (TIntermediate *this,TIntermNode *param_1,TIntermTyped *param_2,TIntermTyped *param_3,
          bool param_4,TSourceLoc *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = glslang::GetThreadPoolAllocator();
  puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar3);
  uVar2 = _UNK_00118268;
  uVar1 = __LC14;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  puVar4[1] = 0;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0;
  *(undefined8 *)((long)puVar4 + 0x3c) = uVar1;
  *(undefined8 *)((long)puVar4 + 0x44) = uVar2;
  uVar1 = *(undefined8 *)param_5;
  uVar2 = *(undefined8 *)(param_5 + 8);
  *(undefined2 *)((long)puVar4 + 0x39) = 0;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  *puVar4 = glslang::PropagateNoContraction;
  puVar4[4] = param_1;
  puVar4[5] = param_2;
  puVar4[6] = param_3;
  *(bool *)(puVar4 + 7) = param_4;
  puVar4[3] = uVar1;
  return;
}



/* glslang::TIntermediate::addBranch(glslang::TOperator, glslang::TSourceLoc const&) */

void __thiscall
glslang::TIntermediate::addBranch(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = glslang::GetThreadPoolAllocator();
  puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar3);
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  puVar4[1] = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *puVar4 = operator_new;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  uVar1 = param_3[2];
  *(undefined4 *)(puVar4 + 4) = param_2;
  puVar4[5] = 0;
  puVar4[3] = uVar1;
  return;
}



/* glslang::TIntermediate::addBranch(glslang::TOperator, glslang::TIntermTyped*, glslang::TSourceLoc
   const&) */

void __thiscall
glslang::TIntermediate::addBranch
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = glslang::GetThreadPoolAllocator();
  puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar3);
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  puVar4[1] = 0;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  *puVar4 = operator_new;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  uVar1 = param_4[2];
  *(undefined4 *)(puVar4 + 4) = param_2;
  puVar4[5] = param_3;
  puVar4[3] = uVar1;
  return;
}



/* glslang::TIntermBranch::updatePrecision(glslang::TPrecisionQualifier) */

void __thiscall glslang::TIntermBranch::updatePrecision(TIntermBranch *this,int param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  byte bVar5;
  
  plVar1 = *(long **)(this + 0x28);
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (*(code **)(*plVar1 + 0x100) == TIntermTyped::getBasicType) {
    bVar5 = *(byte *)(plVar1 + 5);
    if (bVar5 == 8) goto LAB_00105648;
LAB_00105635:
    uVar3 = (uint)bVar5;
    if (bVar5 == 9) goto LAB_00105648;
  }
  else {
    iVar2 = (**(code **)(*plVar1 + 0x100))(plVar1);
    if (iVar2 == 8) goto LAB_00105648;
    if (*(code **)(*plVar1 + 0x100) == TIntermTyped::getBasicType) {
      bVar5 = *(byte *)(plVar1 + 5);
      goto LAB_00105635;
    }
    iVar2 = (**(code **)(*plVar1 + 0x100))(plVar1);
    if (iVar2 == 9) goto LAB_00105648;
    if (*(code **)(*plVar1 + 0x100) == TIntermTyped::getBasicType) {
      uVar3 = (uint)*(byte *)(plVar1 + 5);
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x100))(plVar1);
    }
  }
  if (uVar3 != 1) {
    return;
  }
LAB_00105648:
  if (param_2 != 0) {
    if (*(code **)(*plVar1 + 0x108) == TIntermTyped::getQualifier) {
      plVar4 = plVar1 + 6;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar1 + 0x108))(plVar1);
    }
    if ((*(byte *)((long)plVar4 + 0xb) & 0xe) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0010567f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x128))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* glslang::TIntermediate::postProcess(TIntermNode*, EShLanguage) */

undefined8 glslang::TIntermediate::postProcess(TIntermediate *param_1,long *param_2)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined **local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*param_2 + 0x30))(param_2);
    if ((plVar1 != (long *)0x0) && ((int)plVar1[0x17] == 0)) {
      if (*(code **)(*plVar1 + 0x188) == TIntermAggregate::setOperator) {
        *(undefined4 *)(plVar1 + 0x17) = 1;
      }
      else {
        (**(code **)(*plVar1 + 0x188))(plVar1,1);
      }
    }
    glslang::PropagateNoContraction(param_1);
    if (*(int *)(param_1 + 0x508) == 1) {
      local_50 = 1;
      local_58 = &PTR__TIntermTraverser_00117e08;
      local_4c = 0;
      local_40 = glslang::GetThreadPoolAllocator();
      local_38 = 0;
      local_58 = &PTR__TextureUpgradeAndSamplerRemovalTransform_001181e0;
      local_30 = 0;
      local_28 = 0;
      (**(code **)(*param_2 + 0x10))(param_2,&local_58);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addToCallGraph(TInfoSink&, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

void __thiscall
glslang::TIntermediate::addToCallGraph
          (TIntermediate *this,TInfoSink *param_1,basic_string *param_2,basic_string *param_3)

{
  size_t __n;
  _List_node_base *p_Var1;
  ulong uVar2;
  size_t __n_00;
  int iVar3;
  _List_node_base *p_Var4;
  ulong uVar5;
  _List_node_base *p_Var6;
  TIntermediate *pTVar7;
  
  pTVar7 = *(TIntermediate **)(this + 0x48);
  if (pTVar7 != this + 0x48) {
    __n = *(size_t *)(param_2 + 0x10);
    do {
      if (*(size_t *)(pTVar7 + 0x20) != __n) break;
      if ((__n != 0) &&
         (iVar3 = memcmp(*(void **)(pTVar7 + 0x18),*(void **)(param_2 + 8),__n), iVar3 != 0)) break;
      __n_00 = *(size_t *)(pTVar7 + 0x48);
      if (__n_00 == *(size_t *)(param_3 + 0x10)) {
        if ((__n_00 == 0) ||
           (iVar3 = memcmp(*(void **)(pTVar7 + 0x40),*(void **)(param_3 + 8),__n_00), iVar3 == 0)) {
          return;
        }
      }
      pTVar7 = *(TIntermediate **)pTVar7;
    } while (pTVar7 != this + 0x48);
  }
  p_Var4 = (_List_node_base *)operator_new(0x68);
  uVar5 = glslang::GetThreadPoolAllocator();
  p_Var1 = *(_List_node_base **)(param_2 + 8);
  uVar2 = *(ulong *)(param_2 + 0x10);
  p_Var6 = p_Var4 + 0x28;
  *(ulong *)(p_Var4 + 0x10) = uVar5;
  *(_List_node_base **)(p_Var4 + 0x18) = p_Var6;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      p_Var4[0x28] = *p_Var1;
    }
    else if (uVar2 != 0) goto LAB_00105979;
  }
  else {
    if ((long)uVar2 < 0) goto LAB_001059e0;
    p_Var6 = (_List_node_base *)glslang::TPoolAllocator::allocate(uVar5);
    *(ulong *)(p_Var4 + 0x28) = uVar2;
    *(_List_node_base **)(p_Var4 + 0x18) = p_Var6;
LAB_00105979:
    memcpy(p_Var6,p_Var1,uVar2);
    p_Var6 = *(_List_node_base **)(p_Var4 + 0x18);
  }
  *(ulong *)(p_Var4 + 0x20) = uVar2;
  p_Var6[uVar2] = (_List_node_base)0x0;
  uVar5 = glslang::GetThreadPoolAllocator();
  p_Var1 = *(_List_node_base **)(param_3 + 8);
  uVar2 = *(ulong *)(param_3 + 0x10);
  p_Var6 = p_Var4 + 0x50;
  *(ulong *)(p_Var4 + 0x38) = uVar5;
  *(_List_node_base **)(p_Var4 + 0x40) = p_Var6;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      p_Var4[0x50] = *p_Var1;
      goto LAB_001058c6;
    }
    if (uVar2 == 0) goto LAB_001058c6;
  }
  else {
    if ((long)uVar2 < 0) {
LAB_001059e0:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    p_Var6 = (_List_node_base *)glslang::TPoolAllocator::allocate(uVar5);
    *(ulong *)(p_Var4 + 0x50) = uVar2;
    *(_List_node_base **)(p_Var4 + 0x40) = p_Var6;
  }
  memcpy(p_Var6,p_Var1,uVar2);
  p_Var6 = *(_List_node_base **)(p_Var4 + 0x40);
LAB_001058c6:
  *(ulong *)(p_Var4 + 0x48) = uVar2;
  p_Var6[uVar2] = (_List_node_base)0x0;
  std::__detail::_List_node_base::_M_hook(p_Var4);
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  return;
}



/* glslang::TIntermediate::removeTree() */

void __thiscall glslang::TIntermediate::removeTree(TIntermediate *this)

{
  if (*(TIntermNode **)(this + 0x80) != (TIntermNode *)0x0) {
    glslang::RemoveAllTreeNodes(*(TIntermNode **)(this + 0x80));
    return;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* glslang::TIntermediate::isSpecializationOperation(glslang::TIntermOperator const&) const */

undefined8 __thiscall
glslang::TIntermediate::isSpecializationOperation(TIntermediate *this,TIntermOperator *param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  long *plVar4;
  TIntermOperator *pTVar5;
  long *plVar6;
  
  if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
    pTVar5 = param_1 + 0x20;
  }
  else {
    pTVar5 = (TIntermOperator *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
  }
  if (*(code **)(*(long *)pTVar5 + 0x130) == TType::isFloatingDomain) {
    if (2 < (byte)((char)pTVar5[8] - 1U)) {
LAB_00105aa6:
      plVar4 = (long *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
      if (plVar4 != (long *)0x0) {
        if (*(code **)(*plVar4 + 400) == TIntermBinary::getLeft) {
          plVar6 = (long *)plVar4[0x18];
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar4 + 400))(plVar4);
        }
        if (*(code **)(*plVar6 + 0xf0) == TIntermTyped::getType) {
          plVar6 = plVar6 + 4;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0xf0))();
        }
        if (*(code **)(*plVar6 + 0x130) == TType::isFloatingDomain) {
          if ((byte)((char)plVar6[1] - 1U) < 3) {
            return 0;
          }
        }
        else {
          cVar3 = (**(code **)(*plVar6 + 0x130))();
          if (cVar3 != '\0') {
            return 0;
          }
        }
        if (*(code **)(*plVar4 + 0x198) == TIntermBinary::getRight) {
          plVar4 = (long *)plVar4[0x19];
        }
        else {
          plVar4 = (long *)(**(code **)(*plVar4 + 0x198))(plVar4);
        }
        if (*(code **)(*plVar4 + 0xf0) == TIntermTyped::getType) {
          plVar4 = plVar4 + 4;
        }
        else {
          plVar4 = (long *)(**(code **)(*plVar4 + 0xf0))();
        }
        if (*(code **)(*plVar4 + 0x130) == TType::isFloatingDomain) {
          if ((byte)((char)plVar4[1] - 1U) < 3) {
            return 0;
          }
        }
        else {
          cVar3 = (**(code **)(*plVar4 + 0x130))();
          if (cVar3 != '\0') {
            return 0;
          }
        }
      }
      uVar1 = *(uint *)(param_1 + 0xb8);
      if (uVar1 < 0x72) {
        if (uVar1 < 0x3c) {
          if (0x2d < uVar1 - 8) {
            return 0;
          }
          uVar2 = 0x3fff1fe3fc0b00 >> ((ulong)uVar1 & 0x3f);
        }
        else {
          uVar2 = 0x3fff03fff03fff >> ((ulong)(uVar1 - 0x3c) & 0x3f);
        }
      }
      else {
        if (0x1d < uVar1 - 0x9c) {
          return 0;
        }
        uVar2 = 0x3f8bcfffL >> ((ulong)(uVar1 - 0x9c) & 0x3f);
      }
      goto joined_r0x00105bd1;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)pTVar5 + 0x130))();
    if (cVar3 == '\0') goto LAB_00105aa6;
  }
  if (0x39 < *(int *)(param_1 + 0xb8) - 0x80U) {
    return 0;
  }
  uVar2 = 0x3c0000000300c03 >> ((ulong)(*(int *)(param_1 + 0xb8) - 0x80U) & 0x3f);
joined_r0x00105bd1:
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* glslang::TIntermediate::isNonuniformPropagating(glslang::TOperator) const */

bool __thiscall glslang::TIntermediate::isNonuniformPropagating(undefined8 param_1,uint param_2)

{
  if (0xf < param_2) {
    return param_2 - 0x9c < 0x1e && (0x3ffbcfffUL >> ((ulong)(param_2 - 0x9c) & 0x3f) & 1) != 0;
  }
  return 7 < param_2;
}



/* glslang::TIntermOperator::modifiesState() const */

undefined4 __thiscall glslang::TIntermOperator::modifiesState(TIntermOperator *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xb8);
  if (uVar1 < 0x10) {
    return CONCAT31((int3)(uVar1 >> 8),0xb < uVar1);
  }
  return CONCAT31((int3)(uVar1 - 0x249 >> 8),uVar1 - 0x249 < 0xf);
}



/* glslang::TIntermOperator::isConstructor() const */

undefined4 __thiscall glslang::TIntermOperator::isConstructor(TIntermOperator *this)

{
  return CONCAT31((int3)(*(int *)(this + 0xb8) - 0x1dbU >> 8),*(int *)(this + 0xb8) - 0x1dbU < 0x6d)
  ;
}



/* glslang::TIntermUnary::updatePrecision() */

void __thiscall glslang::TIntermUnary::updatePrecision(TIntermUnary *this)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  TIntermUnary TVar6;
  TIntermUnary *pTVar7;
  
  if (*(code **)(*(long *)this + 0x100) == TIntermTyped::getBasicType) {
    TVar6 = this[0x28];
    if (TVar6 == (TIntermUnary)0x8) goto LAB_00105d40;
LAB_00105d1d:
    uVar4 = (uint)(byte)TVar6;
    if (TVar6 == (TIntermUnary)0x9) goto LAB_00105d40;
  }
  else {
    iVar3 = (**(code **)(*(long *)this + 0x100))();
    if (iVar3 == 8) goto LAB_00105d40;
    if (*(code **)(*(long *)this + 0x100) == TIntermTyped::getBasicType) {
      TVar6 = this[0x28];
      goto LAB_00105d1d;
    }
    iVar3 = (**(code **)(*(long *)this + 0x100))(this);
    if (iVar3 == 9) goto LAB_00105d40;
    if (*(code **)(*(long *)this + 0x100) == TIntermTyped::getBasicType) {
      uVar4 = (uint)(byte)this[0x28];
    }
    else {
      uVar4 = (**(code **)(*(long *)this + 0x100))(this);
    }
  }
  if (uVar4 != 1) {
    return;
  }
LAB_00105d40:
  pcVar2 = *(code **)(**(long **)(this + 0xc0) + 0x108);
  plVar5 = *(long **)(this + 0xc0) + 6;
  if (pcVar2 != TIntermTyped::getQualifier) {
    plVar5 = (long *)(*pcVar2)();
  }
  bVar1 = *(byte *)((long)plVar5 + 0xb);
  if (*(code **)(*(long *)this + 0x108) == TIntermTyped::getQualifier) {
    pTVar7 = this + 0x30;
  }
  else {
    pTVar7 = (TIntermUnary *)(**(code **)(*(long *)this + 0x108))(this);
  }
  if ((bVar1 >> 1 & 7) <= ((byte)pTVar7[0xb] >> 1 & 7)) {
    return;
  }
  pcVar2 = *(code **)(**(long **)(this + 0xc0) + 0x108);
  if (pcVar2 == TIntermTyped::getQualifier) {
    plVar5 = *(long **)(this + 0xc0) + 6;
  }
  else {
    plVar5 = (long *)(*pcVar2)();
  }
  bVar1 = *(byte *)((long)plVar5 + 0xb);
  if (*(code **)(*(long *)this + 0x108) == TIntermTyped::getQualifier) {
    pTVar7 = this + 0x30;
  }
  else {
    pTVar7 = (TIntermUnary *)(**(code **)(*(long *)this + 0x108))(this);
  }
  pTVar7[0xb] = (TIntermUnary)((byte)pTVar7[0xb] & 0xf1 | (bVar1 >> 1 & 7) * '\x02');
  return;
}



/* glslang::TIntermediate::promoteBinary(glslang::TIntermBinary&) */

ulong __thiscall glslang::TIntermediate::promoteBinary(TIntermediate *this,TIntermBinary *param_1)

{
  TIntermBinary TVar1;
  TType TVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  TIntermBinary *pTVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  TType *pTVar19;
  TType *pTVar20;
  long *plVar21;
  long lVar22;
  byte bVar23;
  undefined8 extraout_RDX;
  code *pcVar24;
  long in_FS_OFFSET;
  undefined8 uVar25;
  undefined8 in_stack_ffffffffffffff10;
  TType local_d8 [152];
  long local_40;
  
  uVar9 = *(uint *)(param_1 + 0xb8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar22 = *(long *)param_1;
  if (*(code **)(lVar22 + 400) == TIntermBinary::getLeft) {
    plVar21 = *(long **)(param_1 + 0xc0);
  }
  else {
    in_stack_ffffffffffffff10 = 0x106345;
    plVar21 = (long *)(**(code **)(lVar22 + 400))(param_1);
    lVar22 = *(long *)param_1;
  }
  if (*(code **)(lVar22 + 0x198) == TIntermBinary::getRight) {
    plVar16 = *(long **)(param_1 + 200);
  }
  else {
    in_stack_ffffffffffffff10 = 0x106375;
    plVar16 = (long *)(**(code **)(lVar22 + 0x198))(param_1);
  }
  if (*(code **)(*plVar21 + 0x150) != TIntermTyped::isArray) {
    in_stack_ffffffffffffff10 = 0x1061cd;
    cVar5 = (**(code **)(*plVar21 + 0x150))(plVar21);
    if (cVar5 == '\0') {
      lVar22 = *plVar16;
      goto LAB_001061d9;
    }
LAB_0010635d:
    lVar22 = *plVar16;
LAB_00105f10:
    if (*(code **)(lVar22 + 0xf0) == TIntermTyped::getType) {
      pTVar20 = (TType *)(plVar16 + 4);
    }
    else {
      pTVar20 = (TType *)(**(code **)(lVar22 + 0xf0))(plVar16);
    }
    if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
      pTVar19 = (TType *)(plVar21 + 4);
    }
    else {
      pTVar19 = (TType *)(**(code **)(*plVar21 + 0xf0))(plVar21);
    }
    in_stack_ffffffffffffff10 = 0x105f47;
    cVar5 = TType::operator==(pTVar19,pTVar20);
    if (cVar5 != '\0') goto LAB_00105f4f;
    goto switchD_00106721_caseD_24d;
  }
  lVar22 = *plVar16;
  if (plVar21[0x10] != 0) goto LAB_00105f10;
LAB_001061d9:
  if (*(code **)(lVar22 + 0x150) == TIntermTyped::isArray) {
    if (plVar16[0x10] != 0) goto LAB_00105f10;
  }
  else {
    in_stack_ffffffffffffff10 = 0x106355;
    cVar5 = (**(code **)(lVar22 + 0x150))(plVar16);
    if (cVar5 != '\0') goto LAB_0010635d;
  }
  if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
    uVar12 = (uint)*(byte *)(plVar21 + 5);
  }
  else {
    in_stack_ffffffffffffff10 = 0x1063b9;
    uVar12 = (**(code **)(*plVar21 + 0x100))(plVar21);
  }
  lVar22 = *plVar16;
  if (uVar12 == 0xf) goto LAB_00105f10;
  if (*(code **)(lVar22 + 0x100) == TIntermTyped::getBasicType) {
    uVar12 = (uint)*(byte *)(plVar16 + 5);
  }
  else {
    in_stack_ffffffffffffff10 = 0x106d85;
    uVar12 = (**(code **)(lVar22 + 0x100))(plVar16);
  }
  if (uVar12 == 0xf) goto LAB_0010635d;
LAB_00105f4f:
  pTVar20 = (TType *)(plVar21 + 4);
  pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
  if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
    if (pcVar24 == TIntermTyped::setType) goto LAB_00105f80;
LAB_00106410:
    in_stack_ffffffffffffff10 = 0x106415;
    (*pcVar24)(param_1);
  }
  else {
    in_stack_ffffffffffffff10 = 0x1063f9;
    pTVar20 = (TType *)(**(code **)(*plVar21 + 0xf0))(plVar21);
    if (pcVar24 != TIntermTyped::setType) goto LAB_00106410;
LAB_00105f80:
    lVar22 = *(long *)(pTVar20 + 0x18);
    TVar1 = *(TIntermBinary *)(pTVar20 + 8);
    uVar11 = *(undefined4 *)(pTVar20 + 0x80);
    *(long *)(param_1 + 0x30) = *(long *)(pTVar20 + 0x10);
    *(long *)(param_1 + 0x38) = lVar22;
    lVar22 = *(long *)(pTVar20 + 0x20);
    lVar3 = *(long *)(pTVar20 + 0x28);
    *(undefined4 *)(param_1 + 0xa0) = uVar11;
    *(long *)(param_1 + 0x40) = lVar22;
    *(long *)(param_1 + 0x48) = lVar3;
    lVar22 = *(long *)(pTVar20 + 0x30);
    lVar3 = *(long *)(pTVar20 + 0x38);
    param_1[0x28] = TVar1;
    *(long *)(param_1 + 0x50) = lVar22;
    *(long *)(param_1 + 0x58) = lVar3;
    lVar22 = *(long *)(pTVar20 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(pTVar20 + 0x40);
    *(long *)(param_1 + 0x68) = lVar22;
    lVar22 = *(long *)(pTVar20 + 0x58);
    *(long *)(param_1 + 0x70) = *(long *)(pTVar20 + 0x50);
    *(long *)(param_1 + 0x78) = lVar22;
    TVar2 = pTVar20[9];
    param_1[0x29] = (TIntermBinary)((byte)param_1[0x29] & 0xf0 | (byte)TVar2 & 0xf);
    param_1[0x29] = (TIntermBinary)((byte)TVar2 & 0xf | (byte)pTVar20[9] & 0xf0);
    TVar1 = param_1[0x2a];
    bVar6 = (byte)pTVar20[10] & 0xf;
    param_1[0x2a] = (TIntermBinary)((byte)TVar1 & 0xf0 | bVar6);
    bVar23 = (byte)pTVar20[10] & 0x10;
    param_1[0x2a] = (TIntermBinary)((byte)TVar1 & 0xe0 | bVar6 | bVar23);
    lVar3 = *(long *)(pTVar20 + 0x70);
    lVar4 = *(long *)(pTVar20 + 0x78);
    *(long *)(param_1 + 0x80) = *(long *)(pTVar20 + 0x60);
    lVar22 = *(long *)(pTVar20 + 0x68);
    *(long *)(param_1 + 0x90) = lVar3;
    *(long *)(param_1 + 0x98) = lVar4;
    *(long *)(param_1 + 0x88) = lVar22;
    lVar22 = *(long *)(pTVar20 + 0x90);
    *(long *)(param_1 + 0xa8) = *(long *)(pTVar20 + 0x88);
    *(long *)(param_1 + 0xb0) = lVar22;
    TVar2 = pTVar20[10];
    param_1[0x2a] = (TIntermBinary)((byte)TVar1 & 0xc0 | bVar6 | bVar23 | (byte)TVar2 & 0x20);
    param_1[0x2a] =
         (TIntermBinary)
         ((byte)TVar1 & 0x80 | bVar6 | bVar23 | (byte)TVar2 & 0x20 | (byte)pTVar20[10] & 0x40);
    *(ushort *)(param_1 + 0x2a) =
         *(ushort *)(param_1 + 0x2a) & 0xfc7f | *(ushort *)(pTVar20 + 10) & 0x380;
    param_1[0x2b] = (TIntermBinary)((byte)param_1[0x2b] & 0xfb | (byte)pTVar20[0xb] & 4);
  }
  if (*(code **)(*(long *)param_1 + 0xf8) == TIntermTyped::getWritableType) {
    pTVar14 = param_1 + 0x20;
  }
  else {
    in_stack_ffffffffffffff10 = 0x106425;
    pTVar14 = (TIntermBinary *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
  }
  if (*(code **)(*(long *)pTVar14 + 0x50) == TType::getQualifier) {
    pTVar14 = pTVar14 + 0x10;
  }
  else {
    in_stack_ffffffffffffff10 = 0x106432;
    pTVar14 = (TIntermBinary *)(**(code **)(*(long *)pTVar14 + 0x50))();
  }
  uVar25 = _LC3;
  pTVar14[0x30] = (TIntermBinary)0x0;
  pTVar14[0x10] = (TIntermBinary)((byte)pTVar14[0x10] & 0xf0);
  *(undefined8 *)(pTVar14 + 0x14) = uVar25;
  uVar25 = 0;
  *(undefined4 *)(pTVar14 + 0x34) = 0xfffff800;
  *(uint *)(pTVar14 + 0x1c) = *(uint *)(pTVar14 + 0x1c) & 0xffc00000 | 0x1fcfff;
  *(ulong *)(pTVar14 + 0x20) = *(ulong *)(pTVar14 + 0x20) | 0x7fffffffffffffff;
  *(long *)(pTVar14 + 0x38) = -0x100000000;
  *(long *)(pTVar14 + 0x40) = 0;
  *(undefined2 *)(pTVar14 + 0x48) = 0;
  *(ulong *)(pTVar14 + 0x28) = (ulong)((uint)*(long *)(pTVar14 + 0x28) & 0xfe000000) | 0x1ffffff;
  *(long *)pTVar14 = 0;
  *(ulong *)(pTVar14 + 8) = *(ulong *)(pTVar14 + 8) & 0x8000000400000000;
  lVar22 = *plVar21;
  if (*(code **)(lVar22 + 0x150) != TIntermTyped::isArray) {
    in_stack_ffffffffffffff10 = 0x106445;
    cVar5 = (**(code **)(lVar22 + 0x150))(plVar21);
    if (cVar5 == '\0') {
      lVar22 = *plVar21;
      goto LAB_00106159;
    }
LAB_00106268:
    if (uVar9 < 0xa8) {
      if (0xa5 < uVar9) {
        if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
          uVar9 = (uint)*(byte *)(plVar21 + 5);
        }
        else {
          uVar9 = (**(code **)(*plVar21 + 0x100))(plVar21);
        }
        if (uVar9 != 0xe) {
          pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
          TType::TType(local_d8,0xc,0,1,0,0,0);
          if (pcVar24 == TIntermTyped::setType) {
            TType::shallowCopy((TType *)(param_1 + 0x20),local_d8);
          }
          else {
            (*pcVar24)(param_1,local_d8);
          }
          goto LAB_0010627e;
        }
      }
      goto switchD_00106721_caseD_24d;
    }
    if (uVar9 != 0x249) goto switchD_00106721_caseD_24d;
LAB_0010627e:
    uVar15 = 1;
    goto LAB_00106283;
  }
  if (plVar21[0x10] != 0) goto LAB_00106268;
LAB_00106159:
  if (*(code **)(lVar22 + 0x100) != TIntermTyped::getBasicType) {
    in_stack_ffffffffffffff10 = 0x106259;
    iVar7 = (**(code **)(lVar22 + 0x100))(plVar21);
    if (iVar7 != 0xf) {
      if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
        uVar12 = (uint)*(byte *)(plVar21 + 5);
      }
      else {
        in_stack_ffffffffffffff10 = 0x106478;
        uVar12 = (**(code **)(*plVar21 + 0x100))(plVar21);
      }
      goto LAB_0010617d;
    }
    goto LAB_00106268;
  }
  uVar12 = (uint)*(byte *)(plVar21 + 5);
  if (*(byte *)(plVar21 + 5) == 0xf) goto LAB_00106268;
LAB_0010617d:
  if (uVar12 == 0xe) goto LAB_00106268;
  if (0xb5 < uVar9) {
    if (uVar9 == 0x251) {
switchD_001061c0_caseD_0:
      if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
        uVar12 = (uint)*(byte *)(plVar21 + 5);
      }
      else {
        uVar12 = (**(code **)(*plVar21 + 0x100))(plVar21);
      }
      if (uVar12 != 0xc) {
        if (*(code **)(*plVar16 + 0x100) == TIntermTyped::getBasicType) {
          uVar12 = (uint)*(byte *)(plVar16 + 5);
        }
        else {
          uVar12 = (**(code **)(*plVar16 + 0x100))(plVar16);
        }
        if (uVar12 != 0xc) {
          if (uVar9 < 0xb6) goto LAB_00106551;
          if (uVar9 != 0x24c) goto LAB_00106798;
LAB_0010656f:
          if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
            uVar12 = (uint)*(byte *)(plVar21 + 5);
          }
          else {
            uVar12 = (**(code **)(*plVar21 + 0x100))(plVar21);
          }
          if (*(code **)(*plVar16 + 0x100) == TIntermTyped::getBasicType) {
            uVar10 = (uint)*(byte *)(plVar16 + 5);
          }
          else {
            uVar10 = (**(code **)(*plVar16 + 0x100))(plVar16);
          }
          if (uVar12 == uVar10) goto LAB_001065a8;
        }
      }
      goto switchD_00106721_caseD_24d;
    }
    if (uVar9 < 0x252) {
      if (uVar9 - 0x24a < 3) goto switchD_001061c0_caseD_0;
    }
    else if (uVar9 - 0x252 < 6) goto switchD_001061c0_caseD_4;
LAB_001065a8:
    if (*(code **)(*plVar21 + 0xf0) != TIntermTyped::getType) {
      lVar22 = (**(code **)(*plVar21 + 0xf0))(plVar21);
      if (((*(byte *)(lVar22 + 10) & 0x20) != 0) || ((*(byte *)(lVar22 + 10) & 0x40) != 0)) {
        lVar22 = *plVar21;
LAB_00106f5e:
        if (*(code **)(lVar22 + 0xf0) == TIntermTyped::getType) {
          bVar6 = *(byte *)((long)plVar21 + 0x2a);
          goto LAB_00106d8f;
        }
        plVar18 = (long *)(**(code **)(lVar22 + 0xf0))(plVar21);
        bVar6 = *(byte *)((long)plVar18 + 10);
        goto LAB_00106d99;
      }
LAB_001065d0:
      if (*(code **)(*plVar16 + 0xf0) == TIntermTyped::getType) {
        plVar18 = plVar16 + 4;
      }
      else {
        plVar18 = (long *)(**(code **)(*plVar16 + 0xf0))(plVar16);
      }
      lVar22 = *plVar21;
      if (((*(byte *)((long)plVar18 + 10) & 0x20) != 0) ||
         ((*(byte *)((long)plVar18 + 10) & 0x40) != 0)) goto LAB_00106f5e;
      if (*(code **)(lVar22 + 0x160) == TIntermTyped::isScalar) {
        cVar5 = TType::isScalar((TType *)(plVar21 + 4));
      }
      else {
        cVar5 = (**(code **)(lVar22 + 0x160))(plVar21);
      }
      if (cVar5 != '\0') {
        if (*(code **)(*plVar16 + 0x160) == TIntermTyped::isScalar) {
          cVar5 = TType::isScalar((TType *)(plVar16 + 4));
        }
        else {
          cVar5 = (**(code **)(*plVar16 + 0x160))(plVar16);
        }
        if (cVar5 != '\0') goto LAB_0010627e;
      }
      if (*(code **)(*plVar21 + 0x158) == TIntermTyped::isVector) {
        if ((*(byte *)((long)plVar21 + 0x29) & 0xf) < 2) {
          bVar6 = *(byte *)((long)plVar21 + 0x2a) >> 4 & 1;
          goto LAB_0010734c;
        }
LAB_00106682:
        cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16);
        if (cVar5 != '\0') {
          iVar7 = (**(code **)(*plVar21 + 0x130))(plVar21);
          iVar8 = (**(code **)(*plVar16 + 0x130))(plVar16);
          if ((iVar7 != iVar8) && (iVar7 = (**(code **)(*plVar16 + 0x130))(plVar16), 1 < iVar7))
          goto switchD_00106721_caseD_24d;
        }
      }
      else {
        bVar6 = (**(code **)(*plVar21 + 0x158))(plVar21);
LAB_0010734c:
        if (bVar6 != 0) goto LAB_00106682;
      }
      if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
        uVar12 = (uint)*(byte *)(plVar21 + 5);
      }
      else {
        uVar12 = (**(code **)(*plVar21 + 0x100))(plVar21);
      }
      if (uVar9 < 0xa6) {
        if (0x9b < uVar9) {
          switch(uVar9) {
          case 0x9e:
            goto switchD_0010728d_caseD_9e;
          default:
            goto switchD_00106721_caseD_24a;
          case 0xa1:
          case 0xa2:
            goto switchD_00106721_caseD_256;
          }
        }
      }
      else {
        switch(uVar9) {
        case 0x249:
          iVar7 = (**(code **)(*plVar21 + 0x130))(plVar21);
          iVar8 = (**(code **)(*plVar16 + 0x130))(plVar16);
          if (iVar7 == iVar8) {
            iVar7 = (**(code **)(*plVar21 + 0x138))(plVar21);
            iVar8 = (**(code **)(*plVar16 + 0x138))(plVar16);
            if (iVar7 == iVar8) {
              iVar7 = (**(code **)(*plVar21 + 0x140))(plVar21);
              iVar8 = (**(code **)(*plVar16 + 0x140))(plVar16);
              if (iVar7 == iVar8) goto switchD_00106721_caseD_24a;
            }
          }
          break;
        case 0x24a:
        case 0x24b:
        case 0x251:
        case 0x252:
        case 0x253:
        case 0x254:
        case 0x255:
switchD_00106721_caseD_24a:
          cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
          if (((cVar5 == '\0') || (cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16), cVar5 == '\0'))
             && ((cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21), cVar5 == '\0' ||
                 (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 == '\0')))) {
            iVar7 = (**(code **)(*plVar21 + 0x100))(plVar21);
            iVar8 = (**(code **)(*plVar16 + 0x100))(plVar16);
            if (iVar7 == iVar8) {
              cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
              if ((cVar5 == '\0') ||
                 (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 == '\0')) {
LAB_00106b0b:
                cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21);
                if ((cVar5 != '\0') &&
                   (cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16), cVar5 != '\0')) {
                  iVar7 = (**(code **)(*plVar21 + 0x130))(plVar21);
                  iVar8 = (**(code **)(*plVar16 + 0x130))(plVar16);
                  if (iVar7 != iVar8) break;
                }
                cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16);
                if ((cVar5 != '\0') ||
                   (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 != '\0')) {
                  pTVar20 = (TType *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
                  pTVar19 = (TType *)(**(code **)(*plVar16 + 0xf0))(plVar16);
                  TType::shallowCopy(pTVar20,pTVar19);
                  plVar16 = (long *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
                  puVar17 = (undefined8 *)(**(code **)(*plVar16 + 0x50))(plVar16);
                  uVar25 = _LC3;
                  *(byte *)(puVar17 + 2) = *(byte *)(puVar17 + 2) & 0xf0;
                  *(undefined8 *)((long)puVar17 + 0x14) = uVar25;
                  *(undefined1 *)(puVar17 + 6) = 0;
                  *(undefined4 *)((long)puVar17 + 0x34) = 0xfffff800;
                  *(uint *)((long)puVar17 + 0x1c) =
                       *(uint *)((long)puVar17 + 0x1c) & 0xffc00000 | 0x1fcfff;
                  puVar17[4] = puVar17[4] | 0x7fffffffffffffff;
                  puVar17[7] = 0xffffffff00000000;
                  *(undefined2 *)(puVar17 + 9) = 0;
                  *puVar17 = 0;
                  puVar17[5] = (ulong)((uint)puVar17[5] & 0xfe000000) | 0x1ffffff;
                  puVar17[8] = 0;
                  puVar17[1] = puVar17[1] & 0x800000141fff0000;
                }
                goto LAB_00106c2e;
              }
              iVar7 = (**(code **)(*plVar21 + 0x138))(plVar21);
              iVar8 = (**(code **)(*plVar16 + 0x138))(plVar16);
              if (iVar7 == iVar8) {
                iVar7 = (**(code **)(*plVar21 + 0x140))(plVar21);
                iVar8 = (**(code **)(*plVar16 + 0x140))(plVar16);
                if (iVar7 == iVar8) goto LAB_00106b0b;
              }
            }
          }
          break;
        case 0x24c:
          cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
          if ((cVar5 == '\0') && (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 != '\0'))
          {
            cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21);
            if (cVar5 != '\0') {
              iVar7 = (**(code **)(*plVar21 + 0x130))(plVar21);
              iVar8 = (**(code **)(*plVar16 + 0x140))(plVar16);
              if (iVar7 == iVar8) {
                iVar7 = (**(code **)(*plVar21 + 0x130))(plVar21);
                iVar8 = (**(code **)(*plVar16 + 0x138))(plVar16);
                if (iVar7 == iVar8) {
                  *(undefined4 *)(param_1 + 0xb8) = 0x24d;
                  goto LAB_0010627e;
                }
              }
            }
          }
          else {
            cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
            if ((cVar5 == '\0') || (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 != '\0')
               ) {
              cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
              if ((cVar5 == '\0') ||
                 (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 == '\0')) {
                cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
                if ((cVar5 == '\0') &&
                   (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 == '\0')) {
                  cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21);
                  if (((cVar5 != '\0') &&
                      (cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16), cVar5 != '\0')) ||
                     ((cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21), cVar5 == '\0' &&
                      (cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16), cVar5 == '\0'))))
                  goto LAB_00106c44;
                  cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21);
                  if (cVar5 != '\0') {
                    *(undefined4 *)(param_1 + 0xb8) = 0x24e;
                    goto LAB_0010627e;
                  }
                }
              }
              else {
                iVar7 = (**(code **)(*plVar21 + 0x138))(plVar21);
                iVar8 = (**(code **)(*plVar16 + 0x138))(plVar16);
                if (iVar7 == iVar8) {
                  iVar7 = (**(code **)(*plVar21 + 0x138))(plVar21);
                  iVar8 = (**(code **)(*plVar16 + 0x140))(plVar16);
                  if (iVar7 == iVar8) {
                    *(undefined4 *)(param_1 + 0xb8) = 0x250;
                    goto LAB_0010627e;
                  }
                }
              }
            }
            else {
              cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16);
              if (cVar5 == '\0') {
                *(undefined4 *)(param_1 + 0xb8) = 0x24f;
                goto LAB_0010627e;
              }
            }
          }
          break;
        case 0x256:
        case 599:
switchD_00106721_caseD_256:
          cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16);
          if (cVar5 != '\0') {
            cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21);
            if (cVar5 == '\0') break;
            iVar7 = (**(code **)(*plVar16 + 0x130))(plVar16);
            iVar8 = (**(code **)(*plVar21 + 0x130))(plVar21);
            if (iVar7 != iVar8) {
              uVar15 = 0;
              goto LAB_00106283;
            }
          }
LAB_00106c2e:
          if ((0x24c < uVar9) || (0x248 < uVar9)) {
LAB_00106c44:
            pTVar20 = (TType *)(**(code **)(*plVar21 + 0xf0))(plVar21);
            pTVar19 = (TType *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001068b9;
            goto LAB_00106c7c;
          }
          goto LAB_0010627e;
        }
      }
      goto switchD_00106721_caseD_24d;
    }
    bVar6 = *(byte *)((long)plVar21 + 0x2a);
    if ((bVar6 & 0x20) == 0) {
      if ((bVar6 & 0x40) == 0) goto LAB_001065d0;
LAB_00106d8f:
      plVar18 = plVar21 + 4;
LAB_00106d99:
      if (((bVar6 >> 5 & 1) != 0) || ((*(byte *)((long)plVar18 + 10) & 0x40) != 0))
      goto LAB_00106da3;
    }
    else {
LAB_00106da3:
      if (*(code **)(*plVar16 + 0xf0) == TIntermTyped::getType) {
        if (((*(byte *)((long)plVar16 + 0x2a) & 0x20) != 0) ||
           ((*(byte *)((long)plVar16 + 0x2a) & 0x40) != 0)) {
LAB_00106dc3:
          pTVar20 = (TType *)(plVar16 + 4);
LAB_00106dc7:
          if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
            pTVar19 = (TType *)(plVar21 + 4);
          }
          else {
            pTVar19 = (TType *)(**(code **)(*plVar21 + 0xf0))(plVar21);
          }
          cVar5 = TType::operator==(pTVar19,pTVar20);
          if (cVar5 == '\0') goto switchD_00106721_caseD_24d;
        }
      }
      else {
        lVar22 = (**(code **)(*plVar16 + 0xf0))(plVar16);
        if (((*(byte *)(lVar22 + 10) & 0x20) != 0) || ((*(byte *)(lVar22 + 10) & 0x40) != 0)) {
          if (*(code **)(*plVar16 + 0xf0) == TIntermTyped::getType) goto LAB_00106dc3;
          pTVar20 = (TType *)(**(code **)(*plVar16 + 0xf0))(plVar16);
          goto LAB_00106dc7;
        }
      }
    }
    if (uVar9 == 0x9f) {
LAB_00106f92:
      if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
        plVar21 = plVar21 + 4;
      }
      else {
        plVar21 = (long *)(**(code **)(*plVar21 + 0xf0))(plVar21);
      }
      if (((*(byte *)((long)plVar21 + 10) & 0x20) == 0) &&
         ((*(byte *)((long)plVar21 + 10) & 0x40) == 0)) goto switchD_00106721_caseD_24d;
      if (*(code **)(*plVar16 + 0xf0) == TIntermTyped::getType) {
        plVar16 = plVar16 + 4;
      }
      else {
        plVar16 = (long *)(**(code **)(*plVar16 + 0xf0))(plVar16);
      }
      if ((*(byte *)((long)plVar16 + 10) & 0x20) == 0) {
        uVar15 = (ulong)(*(byte *)((long)plVar16 + 10) >> 6 & 1);
        goto LAB_00106283;
      }
    }
    else {
      if (0x9f < uVar9) {
        if (uVar9 != 0x249) {
          if (uVar9 != 0x24c) goto switchD_00106721_caseD_24d;
          goto LAB_00106e0b;
        }
        goto LAB_00106f92;
      }
      if (uVar9 != 0x9e) {
        if (uVar9 < 0x9c) goto switchD_00106721_caseD_24d;
        goto LAB_00106f92;
      }
LAB_00106e0b:
      if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
        plVar18 = plVar21 + 4;
      }
      else {
        plVar18 = (long *)(**(code **)(*plVar21 + 0xf0))(plVar21);
      }
      if ((*(byte *)((long)plVar18 + 10) & 0x20) != 0) {
        if (*(code **)(*plVar16 + 0xf0) == TIntermTyped::getType) {
          plVar18 = plVar16 + 4;
        }
        else {
          plVar18 = (long *)(**(code **)(*plVar16 + 0xf0))(plVar16);
        }
        if ((*(byte *)((long)plVar18 + 10) & 0x20) != 0) goto switchD_00106721_caseD_24d;
      }
      if (uVar9 == 0x24c) {
        if (*(code **)(*plVar16 + 0xf0) == TIntermTyped::getType) {
          plVar18 = plVar16 + 4;
        }
        else {
          plVar18 = (long *)(**(code **)(*plVar16 + 0xf0))(plVar16);
        }
        if ((*(byte *)((long)plVar18 + 10) & 0x20) != 0) goto switchD_00106721_caseD_24d;
      }
      plVar18 = plVar21 + 4;
      if (*(code **)(*plVar21 + 0xf0) != TIntermTyped::getType) {
        plVar18 = (long *)(**(code **)(*plVar21 + 0xf0))(plVar21);
      }
      pcVar24 = *(code **)(*plVar16 + 0xf0);
      if (((*(byte *)((long)plVar18 + 10) & 0x20) == 0) &&
         ((*(byte *)((long)plVar18 + 10) & 0x40) == 0)) {
LAB_00106eab:
        uVar11 = 0xb2;
        if (uVar9 == 0x24c) {
          uVar11 = 0x24f;
        }
        *(undefined4 *)(param_1 + 0xb8) = uVar11;
LAB_00106ec5:
        if (pcVar24 == TIntermTyped::getType) {
          bVar6 = *(byte *)((long)plVar16 + 0x2a);
LAB_00106ed2:
          if ((bVar6 & 0x20) != 0) goto LAB_00107163;
          plVar21 = plVar16 + 4;
LAB_00106ede:
          if ((*(byte *)((long)plVar21 + 10) & 0x40) == 0) goto LAB_0010627e;
        }
        else {
          plVar21 = (long *)(*pcVar24)(plVar16);
          if ((*(byte *)((long)plVar21 + 10) & 0x20) == 0) goto LAB_00106ede;
        }
        pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
        if (*(code **)(*plVar16 + 0xf0) == TIntermTyped::getType) goto LAB_00106f06;
        pTVar20 = (TType *)(**(code **)(*plVar16 + 0xf0))(plVar16);
      }
      else {
        if (pcVar24 != TIntermTyped::getType) {
          lVar22 = (*pcVar24)(plVar16);
          if ((*(byte *)(lVar22 + 10) & 0x20) == 0) {
            pcVar24 = *(code **)(*plVar16 + 0xf0);
            if ((*(byte *)(lVar22 + 10) & 0x40) == 0) goto LAB_00106eab;
          }
          else {
            pcVar24 = *(code **)(*plVar16 + 0xf0);
          }
          goto LAB_00106ec5;
        }
        bVar6 = *(byte *)((long)plVar16 + 0x2a);
        if ((bVar6 & 0x20) == 0) {
          if ((bVar6 & 0x40) == 0) goto LAB_00106eab;
          goto LAB_00106ed2;
        }
LAB_00107163:
        pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
LAB_00106f06:
        pTVar20 = (TType *)(plVar16 + 4);
      }
      if (pcVar24 == TIntermTyped::setType) {
        TType::shallowCopy((TType *)(param_1 + 0x20),pTVar20);
      }
      else {
        (*pcVar24)(param_1);
      }
    }
    goto LAB_0010627e;
  }
  if (uVar9 < 0x9c) goto LAB_001065a8;
  switch(uVar9 - 0x9c) {
  case 0:
  case 1:
  case 2:
  case 3:
    goto switchD_001061c0_caseD_0;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
switchD_001061c0_caseD_4:
    if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
      uVar12 = (uint)*(byte *)(plVar21 + 5);
    }
    else {
      uVar12 = (**(code **)(*plVar21 + 0x100))(plVar21);
    }
    cVar5 = isTypeInt(uVar12);
    if (cVar5 == '\0') {
      if (*(code **)(*plVar16 + 0x100) == TIntermTyped::getBasicType) {
        uVar12 = (uint)*(byte *)(plVar16 + 5);
      }
      else {
        uVar12 = (**(code **)(*plVar16 + 0x100))(plVar16);
      }
      cVar5 = isTypeInt(uVar12);
      if (cVar5 == '\0') break;
    }
    if (*(code **)(*plVar21 + 0x148) == TIntermTyped::isMatrix) {
      if (0xf < *(byte *)((long)plVar21 + 0x29)) break;
LAB_00106526:
      if (*(code **)(*plVar16 + 0x148) == TIntermTyped::isMatrix) {
        if (0xf < *(byte *)((long)plVar16 + 0x29)) break;
      }
      else {
        cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16);
        if (cVar5 != '\0') {
          uVar15 = 0;
          goto LAB_00106283;
        }
      }
      if (uVar9 < 0xb6) {
LAB_00106551:
        uVar15 = 1L << ((char)uVar9 + 100U & 0x3f);
        goto LAB_00106560;
      }
      if (4 < uVar9 - 0x251) goto LAB_001065a8;
LAB_00106798:
      if (*(code **)(*plVar16 + 0xf0) == TIntermTyped::getType) {
        pTVar20 = (TType *)(plVar16 + 4);
      }
      else {
        pTVar20 = (TType *)(**(code **)(*plVar16 + 0xf0))(plVar16);
      }
      if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
        pTVar19 = (TType *)(plVar21 + 4);
      }
      else {
        pTVar19 = (TType *)(**(code **)(*plVar21 + 0xf0))(plVar21);
      }
      cVar5 = TType::operator==(pTVar19,pTVar20);
      if (cVar5 == '\0') goto LAB_0010656f;
      goto LAB_0010627e;
    }
    cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
    if (cVar5 == '\0') goto LAB_00106526;
    uVar15 = 0;
    goto LAB_00106283;
  case 10:
  case 0xb:
    pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
    uVar25 = 0;
    TType::TType(local_d8,0xc,0,1,0,0);
    if (pcVar24 == TIntermTyped::setType) {
      TType::shallowCopy((TType *)(param_1 + 0x20),local_d8);
    }
    else {
      (*pcVar24)(param_1,local_d8,extraout_RDX,uVar25);
    }
    goto LAB_00106873;
  default:
    uVar15 = 1L << ((byte)(uVar9 - 0x9c) & 0x3f);
    if ((uVar15 & 0x383f000) == 0) {
LAB_00106560:
      if ((uVar15 & 0x39b) == 0) {
        if ((uVar15 & 4) != 0) goto LAB_0010656f;
        goto LAB_001065a8;
      }
      goto LAB_00106798;
    }
LAB_00106873:
    if (*(code **)(*plVar16 + 0xf0) == TIntermTyped::getType) {
      pTVar20 = (TType *)(plVar16 + 4);
    }
    else {
      pTVar20 = (TType *)(**(code **)(*plVar16 + 0xf0))(plVar16);
    }
    if (*(code **)(*plVar21 + 0xf0) == TIntermTyped::getType) {
      pTVar19 = (TType *)(plVar21 + 4);
    }
    else {
      pTVar19 = (TType *)(**(code **)(*plVar21 + 0xf0))(plVar21);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001068b9:
      uVar15 = TType::operator==(pTVar19,pTVar20);
      return uVar15;
    }
    goto LAB_00106c7c;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
      uVar9 = (uint)*(byte *)(plVar21 + 5);
    }
    else {
      in_stack_ffffffffffffff10 = 0x10711b;
      uVar9 = (**(code **)(*plVar21 + 0x100))(plVar21);
    }
    if (uVar9 != 0xc) {
LAB_00106809:
      pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
      if (*(code **)(*plVar21 + 0x130) == TIntermTyped::getVectorSize) {
        uVar9 = *(byte *)((long)plVar21 + 0x29) & 0xf;
      }
      else {
        in_stack_ffffffffffffff10 = 0x10710f;
        uVar9 = (**(code **)(*plVar21 + 0x130))(plVar21);
      }
      TType::TType(local_d8,0xc,0,uVar9,0,0,0);
      if (pcVar24 == TIntermTyped::setType) {
        TType::shallowCopy((TType *)(param_1 + 0x20),local_d8);
      }
      else {
        (*pcVar24)(param_1,local_d8,in_stack_ffffffffffffff10);
      }
      goto LAB_00106873;
    }
    break;
  case 0x17:
  case 0x18:
  case 0x19:
    if (*(code **)(*plVar21 + 0x100) == TIntermTyped::getBasicType) {
      uVar9 = (uint)*(byte *)(plVar21 + 5);
    }
    else {
      in_stack_ffffffffffffff10 = 0x107082;
      uVar9 = (**(code **)(*plVar21 + 0x100))(plVar21);
    }
    if (uVar9 == 0xc) {
      lVar22 = *plVar21;
      if (*(code **)(lVar22 + 0x148) == TIntermTyped::isMatrix) {
        if (*(byte *)((long)plVar21 + 0x29) < 0x10) {
LAB_0010692e:
          if (*(code **)(lVar22 + 0x158) == TIntermTyped::isVector) {
            if (1 < (*(byte *)((long)plVar21 + 0x29) & 0xf)) break;
            bVar6 = *(byte *)((long)plVar21 + 0x2a) >> 4 & 1;
          }
          else {
            in_stack_ffffffffffffff10 = 0x1071f2;
            bVar6 = (**(code **)(lVar22 + 0x158))(plVar21);
          }
          if (bVar6 != 0) {
            uVar15 = 0;
            goto LAB_00106283;
          }
          goto LAB_00106809;
        }
      }
      else {
        in_stack_ffffffffffffff10 = 0x1071a7;
        cVar5 = (**(code **)(lVar22 + 0x148))(plVar21);
        if (cVar5 == '\0') {
          lVar22 = *plVar21;
          goto LAB_0010692e;
        }
      }
    }
  }
switchD_00106721_caseD_24d:
  uVar15 = 0;
LAB_00106283:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
LAB_00106c7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_0010728d_caseD_9e:
  cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 != '\0')) {
    cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21);
    if (cVar5 == '\0') {
      *(undefined4 *)(param_1 + 0xb8) = 0xb2;
      pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
      lVar22 = *plVar16;
      plVar21 = plVar16;
LAB_00107568:
      uVar11 = (**(code **)(lVar22 + 0x140))(plVar21);
      uVar13 = (**(code **)(*plVar16 + 0x138))(plVar16);
      TType::TType(local_d8,uVar12,0,0,uVar13,uVar11,0,uVar25);
      (*pcVar24)(param_1,local_d8);
    }
    else {
      iVar7 = (**(code **)(*plVar21 + 0x130))(plVar21);
      iVar8 = (**(code **)(*plVar16 + 0x140))(plVar16);
      if (iVar7 != iVar8) goto switchD_00106721_caseD_24d;
      *(undefined4 *)(param_1 + 0xb8) = 0xb0;
      pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
      uVar11 = (**(code **)(*plVar16 + 0x138))(plVar16);
LAB_00107313:
      TType::TType(local_d8,uVar12,0,uVar11,0,0,0,pTVar20);
      (*pcVar24)(param_1,local_d8);
    }
    goto LAB_0010627e;
  }
  cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
  if ((cVar5 == '\0') || (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 != '\0')) {
    cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
    if ((cVar5 == '\0') || (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 == '\0')) {
      cVar5 = (**(code **)(*plVar21 + 0x148))(plVar21);
      if ((cVar5 == '\0') && (cVar5 = (**(code **)(*plVar16 + 0x148))(plVar16), cVar5 == '\0')) {
        cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21);
        if (((cVar5 == '\0') || (cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16), cVar5 == '\0'))
           && ((cVar5 = (**(code **)(*plVar21 + 0x158))(plVar21), cVar5 != '\0' ||
               (cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16), cVar5 != '\0')))) {
          lVar22 = *plVar16;
          *(undefined4 *)(param_1 + 0xb8) = 0xaf;
          cVar5 = (**(code **)(lVar22 + 0x158))(plVar16);
          if (cVar5 != '\0') {
            pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
            uVar11 = (**(code **)(*plVar16 + 0x130))(plVar16);
            goto LAB_00107313;
          }
        }
        goto LAB_0010627e;
      }
    }
    else {
      iVar7 = (**(code **)(*plVar21 + 0x138))(plVar21);
      iVar8 = (**(code **)(*plVar16 + 0x140))(plVar16);
      if (iVar7 == iVar8) {
        *(undefined4 *)(param_1 + 0xb8) = 0x129;
        pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
        lVar22 = *plVar21;
        goto LAB_00107568;
      }
    }
  }
  else {
    cVar5 = (**(code **)(*plVar16 + 0x158))(plVar16);
    if (cVar5 == '\0') {
      *(undefined4 *)(param_1 + 0xb8) = 0xb2;
      goto LAB_0010627e;
    }
    iVar7 = (**(code **)(*plVar21 + 0x138))(plVar21);
    iVar8 = (**(code **)(*plVar16 + 0x130))(plVar16);
    if (iVar7 == iVar8) {
      *(undefined4 *)(param_1 + 0xb8) = 0xb1;
      pcVar24 = *(code **)(*(long *)param_1 + 0xe8);
      uVar11 = (**(code **)(*plVar21 + 0x140))(plVar21);
      goto LAB_00107313;
    }
  }
  goto switchD_00106721_caseD_24d;
}



/* glslang::TIntermediate::promoteAggregate(glslang::TIntermAggregate&) */

undefined8 __thiscall
glslang::TIntermediate::promoteAggregate(TIntermediate *this,TIntermAggregate *param_1)

{
  if (*(code **)(*(long *)param_1 + 400) == TIntermAggregate::getSequence) {
    return 1;
  }
  (**(code **)(*(long *)param_1 + 400))(param_1);
  return 1;
}



/* glslang::TIntermBinary::updatePrecision() */

void __thiscall glslang::TIntermBinary::updatePrecision(TIntermBinary *this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  TIntermBinary TVar6;
  TIntermBinary *pTVar7;
  byte bVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(*(long *)this + 0x100) == TIntermTyped::getBasicType) {
    TVar6 = this[0x28];
    if (TVar6 != (TIntermBinary)0x8) {
LAB_001077b3:
      uVar3 = (uint)(byte)TVar6;
      if (TVar6 != (TIntermBinary)0x9) {
LAB_001077b8:
        if (uVar3 != 1) {
          return;
        }
      }
    }
  }
  else {
    iVar2 = (**(code **)(*(long *)this + 0x100))();
    if (iVar2 != 8) {
      if (*(code **)(*(long *)this + 0x100) == TIntermTyped::getBasicType) {
        TVar6 = this[0x28];
        goto LAB_001077b3;
      }
      iVar2 = (**(code **)(*(long *)this + 0x100))(this);
      if (iVar2 != 9) {
        if (*(code **)(*(long *)this + 0x100) == TIntermTyped::getBasicType) {
          uVar3 = (uint)(byte)this[0x28];
        }
        else {
          uVar3 = (**(code **)(*(long *)this + 0x100))(this);
        }
        goto LAB_001077b8;
      }
    }
  }
  plVar5 = *(long **)(this + 0xc0);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x108);
  if (*(int *)(this + 0xb8) - 0xa1U < 2) {
    if (UNRECOVERED_JUMPTABLE == TIntermTyped::getQualifier) {
      plVar5 = plVar5 + 6;
    }
    else {
      plVar5 = (long *)(*UNRECOVERED_JUMPTABLE)();
    }
    bVar8 = *(byte *)((long)plVar5 + 0xb);
    if (*(code **)(*(long *)this + 0x108) == TIntermTyped::getQualifier) {
      pTVar7 = this + 0x30;
    }
    else {
      pTVar7 = (TIntermBinary *)(**(code **)(*(long *)this + 0x108))(this);
    }
    pTVar7[0xb] = (TIntermBinary)((byte)pTVar7[0xb] & 0xf1 | (bVar8 >> 1 & 7) * '\x02');
    return;
  }
  if (UNRECOVERED_JUMPTABLE == TIntermTyped::getQualifier) {
    plVar5 = plVar5 + 6;
  }
  else {
    plVar5 = (long *)(*UNRECOVERED_JUMPTABLE)();
  }
  bVar8 = *(byte *)((long)plVar5 + 0xb) >> 1 & 7;
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 200) + 0x108);
  if (UNRECOVERED_JUMPTABLE == TIntermTyped::getQualifier) {
    plVar5 = *(long **)(this + 200) + 6;
  }
  else {
    plVar5 = (long *)(*UNRECOVERED_JUMPTABLE)();
  }
  bVar1 = *(byte *)((long)plVar5 + 0xb) >> 1 & 7;
  if (bVar8 <= bVar1) {
    bVar8 = bVar1;
  }
  if (*(code **)(*(long *)this + 0x108) == TIntermTyped::getQualifier) {
    this[0x3b] = (TIntermBinary)(bVar8 * '\x02' | (byte)this[0x3b] & 0xf1);
LAB_00107876:
    if (((byte)this[0x3b] & 0xe) == 0) {
      return;
    }
    plVar5 = *(long **)(this + 0xc0);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x128);
  }
  else {
    lVar4 = (**(code **)(*(long *)this + 0x108))(this);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x108);
    *(byte *)(lVar4 + 0xb) = *(byte *)(lVar4 + 0xb) & 0xf1 | bVar8 * '\x02';
    if (UNRECOVERED_JUMPTABLE == TIntermTyped::getQualifier) goto LAB_00107876;
    lVar4 = (*UNRECOVERED_JUMPTABLE)(this);
    if ((*(byte *)(lVar4 + 0xb) & 0xe) == 0) {
      return;
    }
    plVar5 = *(long **)(this + 0xc0);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x128);
    if (*(code **)(*(long *)this + 0x108) != TIntermTyped::getQualifier) {
      pTVar7 = (TIntermBinary *)(**(code **)(*(long *)this + 0x108))(this);
      goto LAB_00107896;
    }
  }
  pTVar7 = this + 0x30;
LAB_00107896:
  (*UNRECOVERED_JUMPTABLE)(plVar5,(byte)pTVar7[0xb] >> 1 & 7);
  plVar5 = *(long **)(this + 200);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x128);
  if (*(code **)(*(long *)this + 0x108) == TIntermTyped::getQualifier) {
    pTVar7 = this + 0x30;
  }
  else {
    pTVar7 = (TIntermBinary *)(**(code **)(*(long *)this + 0x108))(this);
  }
                    /* WARNING: Could not recover jumptable at 0x001078e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar5,(byte)pTVar7[0xb] >> 1 & 7);
  return;
}



/* glslang::TIntermediate::promoteConstantUnion(glslang::TBasicType, glslang::TIntermConstantUnion*)
   const */

long * __thiscall
glslang::TIntermediate::promoteConstantUnion(TIntermediate *this,undefined4 param_2,long *param_3)

{
  double dVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  TType *this_00;
  ushort *puVar21;
  short *psVar22;
  ulong *puVar23;
  long *plVar24;
  TSourceLoc *pTVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  long in_FS_OFFSET;
  undefined **local_e8;
  ulong *local_e0;
  TType local_d8 [152];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
    this_00 = (TType *)(param_3 + 4);
  }
  else {
    this_00 = (TType *)(**(code **)(*param_3 + 0xf0))(param_3);
  }
  iVar13 = TType::computeNumComponents(this_00);
  local_e8 = &PTR__TConstUnionArray_00117de8;
  if (iVar13 == 0) {
    local_e0 = (ulong *)0x0;
  }
  else {
    uVar16 = glslang::GetThreadPoolAllocator();
    puVar17 = (ulong *)glslang::TPoolAllocator::allocate(uVar16);
    uVar16 = glslang::GetThreadPoolAllocator();
    if ((ulong)(long)iVar13 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    *puVar17 = uVar16;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar18 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar16);
    puVar17[1] = (ulong)puVar18;
    puVar17[3] = (ulong)(puVar18 + (long)iVar13 * 4);
    puVar19 = puVar18;
    do {
      *puVar19 = 0;
      puVar20 = puVar19 + 4;
      puVar19[2] = 8;
      puVar19 = puVar20;
    } while (puVar20 != puVar18 + (long)iVar13 * 4);
    lVar29 = 0;
    puVar17[2] = (ulong)puVar20;
    iVar27 = 0;
    local_e0 = puVar17;
    do {
      if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
        plVar24 = param_3 + 4;
      }
      else {
        plVar24 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
      }
      if (*(code **)(*plVar24 + 0x38) == TType::getBasicType) {
        uVar28 = (uint)*(byte *)(plVar24 + 1);
      }
      else {
        uVar28 = (**(code **)(*plVar24 + 0x38))();
      }
      switch(uVar28) {
      default:
switchD_00107cee_caseD_0:
        goto LAB_00107bc3;
      case 1:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 2;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 2:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 2;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 3:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 2;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 4:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = (char)(int)dVar1;
          break;
        case 5:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = (char)(int)dVar1;
          break;
        case 6:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 6;
          *(undefined2 *)(uVar16 + lVar29) = (short)(int)dVar1;
          break;
        case 7:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 7;
          *(undefined2 *)(uVar16 + lVar29) = (short)(int)dVar1;
          break;
        case 8:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((int *)(uVar16 + lVar29))[2] = 8;
          *(int *)(uVar16 + lVar29) = (int)dVar1;
          break;
        case 9:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 9;
          *(undefined4 *)(uVar16 + lVar29) = (int)(long)dVar1;
          break;
        case 10:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((long *)(uVar16 + lVar29) + 1) = 10;
          *(long *)(uVar16 + lVar29) = (long)dVar1;
          break;
        case 0xb:
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          puVar23 = (ulong *)(puVar17[1] + lVar29);
          if (_LC17 <= dVar1) {
            *puVar23 = (long)(dVar1 - _LC17);
            *puVar23 = *puVar23 ^ 0x8000000000000000;
          }
          else {
            *puVar23 = (long)dVar1;
          }
          *(undefined4 *)(puVar23 + 1) = 0xb;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
          *(bool *)(uVar16 + lVar29) = dVar1 != 0.0;
        }
        break;
      case 2:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 2;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 2:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 2;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 3:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 2;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 4:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = (char)(int)dVar1;
          break;
        case 5:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = (char)(int)dVar1;
          break;
        case 6:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 6;
          *(undefined2 *)(uVar16 + lVar29) = (short)(int)dVar1;
          break;
        case 7:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 7;
          *(undefined2 *)(uVar16 + lVar29) = (short)(int)dVar1;
          break;
        case 8:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((int *)(uVar16 + lVar29))[2] = 8;
          *(int *)(uVar16 + lVar29) = (int)dVar1;
          break;
        case 9:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 9;
          *(undefined4 *)(uVar16 + lVar29) = (int)(long)dVar1;
          break;
        case 10:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((long *)(uVar16 + lVar29) + 1) = 10;
          *(long *)(uVar16 + lVar29) = (long)dVar1;
          break;
        case 0xb:
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          puVar23 = (ulong *)(puVar17[1] + lVar29);
          if (_LC17 <= dVar1) {
            *puVar23 = (long)(dVar1 - _LC17);
            *puVar23 = *puVar23 ^ 0x8000000000000000;
          }
          else {
            *puVar23 = (long)dVar1;
          }
          *(undefined4 *)(puVar23 + 1) = 0xb;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
          *(bool *)(uVar16 + lVar29) = dVar1 != 0.0;
        }
        break;
      case 3:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 2;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 2:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 2;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 3:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 2;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 4:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = (char)(int)dVar1;
          break;
        case 5:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = (char)(int)dVar1;
          break;
        case 6:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 6;
          *(undefined2 *)(uVar16 + lVar29) = (short)(int)dVar1;
          break;
        case 7:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 7;
          *(undefined2 *)(uVar16 + lVar29) = (short)(int)dVar1;
          break;
        case 8:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((int *)(uVar16 + lVar29))[2] = 8;
          *(int *)(uVar16 + lVar29) = (int)dVar1;
          break;
        case 9:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 9;
          *(undefined4 *)(uVar16 + lVar29) = (int)(long)dVar1;
          break;
        case 10:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((long *)(uVar16 + lVar29) + 1) = 10;
          *(long *)(uVar16 + lVar29) = (long)dVar1;
          break;
        case 0xb:
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          puVar23 = (ulong *)(puVar17[1] + lVar29);
          if (_LC17 <= dVar1) {
            *puVar23 = (long)(dVar1 - _LC17);
            *puVar23 = *puVar23 ^ 0x8000000000000000;
          }
          else {
            *puVar23 = (long)dVar1;
          }
          *(undefined4 *)(puVar23 + 1) = 0xb;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          dVar1 = *(double *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
          *(bool *)(uVar16 + lVar29) = dVar1 != 0.0;
        }
        break;
      case 4:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          cVar4 = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)(int)cVar4;
          break;
        case 2:
          uVar16 = puVar17[1];
          cVar4 = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)(int)cVar4;
          break;
        case 3:
          uVar16 = puVar17[1];
          cVar4 = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)(int)cVar4;
          break;
        case 4:
          uVar16 = puVar17[1];
          uVar3 = *(undefined1 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = uVar3;
          break;
        case 5:
          uVar16 = puVar17[1];
          uVar3 = *(undefined1 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = uVar3;
          break;
        case 6:
          cVar4 = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29);
          psVar22 = (short *)(puVar17[1] + lVar29);
          psVar22[4] = 6;
          psVar22[5] = 0;
          *psVar22 = (short)cVar4;
          break;
        case 7:
          cVar4 = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29);
          psVar22 = (short *)(puVar17[1] + lVar29);
          psVar22[4] = 7;
          psVar22[5] = 0;
          *psVar22 = (short)cVar4;
          break;
        case 8:
          uVar16 = puVar17[1];
          cVar4 = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((int *)(uVar16 + lVar29))[2] = 8;
          *(int *)(uVar16 + lVar29) = (int)cVar4;
          break;
        case 9:
          uVar16 = puVar17[1];
          cVar4 = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((int *)(uVar16 + lVar29))[2] = 9;
          *(int *)(uVar16 + lVar29) = (int)cVar4;
          break;
        case 10:
          uVar16 = puVar17[1];
          cVar4 = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((long *)(uVar16 + lVar29) + 1) = 10;
          *(long *)(uVar16 + lVar29) = (long)cVar4;
          break;
        case 0xb:
          uVar16 = puVar17[1];
          cVar4 = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((long *)(uVar16 + lVar29) + 1) = 0xb;
          *(long *)(uVar16 + lVar29) = (long)cVar4;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          *(bool *)(uVar16 + lVar29) = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29) != '\0';
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
        }
        break;
      case 5:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)bVar2;
          break;
        case 2:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)bVar2;
          break;
        case 3:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)bVar2;
          break;
        case 4:
          uVar16 = puVar17[1];
          uVar3 = *(undefined1 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = uVar3;
          break;
        case 5:
          uVar16 = puVar17[1];
          uVar3 = *(undefined1 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = uVar3;
          break;
        case 6:
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          puVar21 = (ushort *)(puVar17[1] + lVar29);
          puVar21[4] = 6;
          puVar21[5] = 0;
          *puVar21 = (ushort)bVar2;
          break;
        case 7:
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          puVar21 = (ushort *)(puVar17[1] + lVar29);
          puVar21[4] = 7;
          puVar21[5] = 0;
          *puVar21 = (ushort)bVar2;
          break;
        case 8:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((uint *)(uVar16 + lVar29))[2] = 8;
          *(uint *)(uVar16 + lVar29) = (uint)bVar2;
          break;
        case 9:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((uint *)(uVar16 + lVar29))[2] = 9;
          *(uint *)(uVar16 + lVar29) = (uint)bVar2;
          break;
        case 10:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((ulong *)(uVar16 + lVar29) + 1) = 10;
          *(ulong *)(uVar16 + lVar29) = (ulong)bVar2;
          break;
        case 0xb:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((ulong *)(uVar16 + lVar29) + 1) = 0xb;
          *(ulong *)(uVar16 + lVar29) = (ulong)bVar2;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          *(bool *)(uVar16 + lVar29) = *(char *)(*(long *)(param_3[0x18] + 8) + lVar29) != '\0';
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
        }
        break;
      case 6:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          sVar5 = *(short *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)(int)sVar5;
          break;
        case 2:
          uVar16 = puVar17[1];
          sVar5 = *(short *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)(int)sVar5;
          break;
        case 3:
          uVar16 = puVar17[1];
          sVar5 = *(short *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)(int)sVar5;
          break;
        case 4:
          uVar16 = puVar17[1];
          uVar6 = *(undefined2 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar6;
          break;
        case 5:
          uVar16 = puVar17[1];
          uVar6 = *(undefined2 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar6;
          break;
        case 6:
          uVar16 = puVar17[1];
          uVar6 = *(undefined2 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 6;
          *(undefined2 *)(uVar16 + lVar29) = uVar6;
          break;
        case 7:
          uVar16 = puVar17[1];
          uVar6 = *(undefined2 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 7;
          *(undefined2 *)(uVar16 + lVar29) = uVar6;
          break;
        case 8:
          uVar16 = puVar17[1];
          sVar5 = *(short *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((int *)(uVar16 + lVar29))[2] = 8;
          *(int *)(uVar16 + lVar29) = (int)sVar5;
          break;
        case 9:
          uVar16 = puVar17[1];
          sVar5 = *(short *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((int *)(uVar16 + lVar29))[2] = 9;
          *(int *)(uVar16 + lVar29) = (int)sVar5;
          break;
        case 10:
          uVar16 = puVar17[1];
          sVar5 = *(short *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((long *)(uVar16 + lVar29) + 1) = 10;
          *(long *)(uVar16 + lVar29) = (long)sVar5;
          break;
        case 0xb:
          uVar16 = puVar17[1];
          sVar5 = *(short *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((long *)(uVar16 + lVar29) + 1) = 0xb;
          *(long *)(uVar16 + lVar29) = (long)sVar5;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          *(bool *)(uVar16 + lVar29) = *(short *)(*(long *)(param_3[0x18] + 8) + lVar29) != 0;
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
        }
        break;
      case 7:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          uVar7 = *(ushort *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)uVar7;
          break;
        case 2:
          uVar16 = puVar17[1];
          uVar7 = *(ushort *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)uVar7;
          break;
        case 3:
          uVar16 = puVar17[1];
          uVar7 = *(ushort *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)uVar7;
          break;
        case 4:
          uVar16 = puVar17[1];
          uVar6 = *(undefined2 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar6;
          break;
        case 5:
          uVar16 = puVar17[1];
          uVar6 = *(undefined2 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar6;
          break;
        case 6:
          uVar16 = puVar17[1];
          uVar6 = *(undefined2 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 6;
          *(undefined2 *)(uVar16 + lVar29) = uVar6;
          break;
        case 7:
          uVar16 = puVar17[1];
          uVar6 = *(undefined2 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 7;
          *(undefined2 *)(uVar16 + lVar29) = uVar6;
          break;
        case 8:
          uVar16 = puVar17[1];
          uVar7 = *(ushort *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((uint *)(uVar16 + lVar29))[2] = 8;
          *(uint *)(uVar16 + lVar29) = (uint)uVar7;
          break;
        case 9:
          uVar16 = puVar17[1];
          uVar7 = *(ushort *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((uint *)(uVar16 + lVar29))[2] = 9;
          *(uint *)(uVar16 + lVar29) = (uint)uVar7;
          break;
        case 10:
          uVar16 = puVar17[1];
          uVar7 = *(ushort *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((ulong *)(uVar16 + lVar29) + 1) = 10;
          *(ulong *)(uVar16 + lVar29) = (ulong)uVar7;
          break;
        case 0xb:
          uVar16 = puVar17[1];
          uVar7 = *(ushort *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((ulong *)(uVar16 + lVar29) + 1) = 0xb;
          *(ulong *)(uVar16 + lVar29) = (ulong)uVar7;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          *(bool *)(uVar16 + lVar29) = *(short *)(*(long *)(param_3[0x18] + 8) + lVar29) != 0;
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
        }
        break;
      case 8:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          iVar8 = *(int *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)iVar8;
          break;
        case 2:
          uVar16 = puVar17[1];
          iVar8 = *(int *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)iVar8;
          break;
        case 3:
          uVar16 = puVar17[1];
          iVar8 = *(int *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)iVar8;
          break;
        case 4:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar9;
          break;
        case 5:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar9;
          break;
        case 6:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 6;
          *(undefined2 *)(uVar16 + lVar29) = (short)uVar9;
          break;
        case 7:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 7;
          *(undefined2 *)(uVar16 + lVar29) = (short)uVar9;
          break;
        case 8:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 8;
          *(undefined4 *)(uVar16 + lVar29) = uVar9;
          break;
        case 9:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 9;
          *(undefined4 *)(uVar16 + lVar29) = uVar9;
          break;
        case 10:
          uVar16 = puVar17[1];
          iVar8 = *(int *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((long *)(uVar16 + lVar29) + 1) = 10;
          *(long *)(uVar16 + lVar29) = (long)iVar8;
          break;
        case 0xb:
          uVar16 = puVar17[1];
          iVar8 = *(int *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((long *)(uVar16 + lVar29) + 1) = 0xb;
          *(long *)(uVar16 + lVar29) = (long)iVar8;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          iVar8 = *(int *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
          *(bool *)(uVar16 + lVar29) = iVar8 != 0;
        }
        break;
      case 9:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          uVar28 = *(uint *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)uVar28;
          break;
        case 2:
          uVar16 = puVar17[1];
          uVar28 = *(uint *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)uVar28;
          break;
        case 3:
          uVar16 = puVar17[1];
          uVar28 = *(uint *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)uVar28;
          break;
        case 4:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar9;
          break;
        case 5:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar9;
          break;
        case 6:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 6;
          *(undefined2 *)(uVar16 + lVar29) = (short)uVar9;
          break;
        case 7:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 7;
          *(undefined2 *)(uVar16 + lVar29) = (short)uVar9;
          break;
        case 8:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 8;
          *(undefined4 *)(uVar16 + lVar29) = uVar9;
          break;
        case 9:
          uVar16 = puVar17[1];
          uVar9 = *(undefined4 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 9;
          *(undefined4 *)(uVar16 + lVar29) = uVar9;
          break;
        case 10:
          uVar16 = puVar17[1];
          uVar28 = *(uint *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((ulong *)(uVar16 + lVar29) + 1) = 10;
          *(ulong *)(uVar16 + lVar29) = (ulong)uVar28;
          break;
        case 0xb:
          uVar16 = puVar17[1];
          uVar28 = *(uint *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((ulong *)(uVar16 + lVar29) + 1) = 0xb;
          *(ulong *)(uVar16 + lVar29) = (ulong)uVar28;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          iVar8 = *(int *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
          *(bool *)(uVar16 + lVar29) = iVar8 != 0;
        }
        break;
      case 10:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          lVar11 = *(long *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)lVar11;
          break;
        case 2:
          uVar16 = puVar17[1];
          lVar11 = *(long *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)lVar11;
          break;
        case 3:
          uVar16 = puVar17[1];
          lVar11 = *(long *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)lVar11;
          break;
        case 4:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar12;
          break;
        case 5:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar12;
          break;
        case 6:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 6;
          *(undefined2 *)(uVar16 + lVar29) = (short)uVar12;
          break;
        case 7:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 7;
          *(undefined2 *)(uVar16 + lVar29) = (short)uVar12;
          break;
        case 8:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 8;
          *(undefined4 *)(uVar16 + lVar29) = (int)uVar12;
          break;
        case 9:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 9;
          *(undefined4 *)(uVar16 + lVar29) = (int)uVar12;
          break;
        case 10:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 10;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 0xb:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 0xb;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          *(bool *)(uVar16 + lVar29) = *(long *)(*(long *)(param_3[0x18] + 8) + lVar29) != 0;
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
        }
        break;
      case 0xb:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          uVar10 = *(ulong *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)uVar10;
          break;
        case 2:
          uVar16 = puVar17[1];
          uVar10 = *(ulong *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)uVar10;
          break;
        case 3:
          uVar16 = puVar17[1];
          uVar10 = *(ulong *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)uVar10;
          break;
        case 4:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar12;
          break;
        case 5:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = (char)uVar12;
          break;
        case 6:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 6;
          *(undefined2 *)(uVar16 + lVar29) = (short)uVar12;
          break;
        case 7:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined2 *)(uVar16 + lVar29) + 4) = 7;
          *(undefined2 *)(uVar16 + lVar29) = (short)uVar12;
          break;
        case 8:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 8;
          *(undefined4 *)(uVar16 + lVar29) = (int)uVar12;
          break;
        case 9:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((undefined4 *)(uVar16 + lVar29))[2] = 9;
          *(undefined4 *)(uVar16 + lVar29) = (int)uVar12;
          break;
        case 10:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 10;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 0xb:
          uVar16 = puVar17[1];
          uVar12 = *(undefined8 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined8 *)(uVar16 + lVar29) + 1) = 0xb;
          *(undefined8 *)(uVar16 + lVar29) = uVar12;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          *(bool *)(uVar16 + lVar29) = *(long *)(*(long *)(param_3[0x18] + 8) + lVar29) != 0;
          *(undefined4 *)(uVar16 + lVar29 + 8) = 0xc;
        }
        break;
      case 0xc:
        switch(param_2) {
        default:
          goto switchD_00107cee_caseD_0;
        case 1:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)bVar2;
          break;
        case 2:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)bVar2;
          break;
        case 3:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((double *)(uVar16 + lVar29) + 1) = 2;
          *(double *)(uVar16 + lVar29) = (double)bVar2;
          break;
        case 4:
          uVar16 = puVar17[1];
          uVar3 = *(undefined1 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 4;
          *(undefined1 *)(uVar16 + lVar29) = uVar3;
          break;
        case 5:
          uVar16 = puVar17[1];
          uVar3 = *(undefined1 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 5;
          *(undefined1 *)(uVar16 + lVar29) = uVar3;
          break;
        case 6:
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          puVar21 = (ushort *)(puVar17[1] + lVar29);
          puVar21[4] = 6;
          puVar21[5] = 0;
          *puVar21 = (ushort)bVar2;
          break;
        case 7:
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          puVar21 = (ushort *)(puVar17[1] + lVar29);
          puVar21[4] = 7;
          puVar21[5] = 0;
          *puVar21 = (ushort)bVar2;
          break;
        case 8:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((uint *)(uVar16 + lVar29))[2] = 8;
          *(uint *)(uVar16 + lVar29) = (uint)bVar2;
          break;
        case 9:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          ((uint *)(uVar16 + lVar29))[2] = 9;
          *(uint *)(uVar16 + lVar29) = (uint)bVar2;
          break;
        case 10:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((ulong *)(uVar16 + lVar29) + 1) = 10;
          *(ulong *)(uVar16 + lVar29) = (ulong)bVar2;
          break;
        case 0xb:
          uVar16 = puVar17[1];
          bVar2 = *(byte *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((ulong *)(uVar16 + lVar29) + 1) = 0xb;
          *(ulong *)(uVar16 + lVar29) = (ulong)bVar2;
          break;
        case 0xc:
          uVar16 = puVar17[1];
          uVar3 = *(undefined1 *)(*(long *)(param_3[0x18] + 8) + lVar29);
          *(undefined4 *)((undefined1 *)(uVar16 + lVar29) + 8) = 0xc;
          *(undefined1 *)(uVar16 + lVar29) = uVar3;
        }
      }
      iVar27 = iVar27 + 1;
      lVar29 = lVar29 + 0x10;
    } while (iVar27 < iVar13);
  }
  puVar15 = (undefined8 *)*param_3;
  if ((code *)puVar15[0x1e] == TIntermTyped::getType) {
    plVar24 = param_3 + 4;
  }
  else {
    plVar24 = (long *)(*(code *)puVar15[0x1e])(param_3);
    puVar15 = (undefined8 *)*param_3;
  }
  if ((code *)*puVar15 == TIntermNode::getLoc) {
    pTVar25 = (TSourceLoc *)(param_3 + 1);
  }
  else {
    pTVar25 = (TSourceLoc *)(*(code *)*puVar15)(param_3);
  }
  lVar29 = *plVar24;
  if (*(code **)(lVar29 + 0x70) == TType::getMatrixRows) {
    uVar28 = *(byte *)((long)plVar24 + 10) & 0xf;
  }
  else {
    uVar28 = (**(code **)(lVar29 + 0x70))(plVar24);
    lVar29 = *plVar24;
  }
  if (*(code **)(lVar29 + 0x68) == TType::getMatrixCols) {
    uVar14 = (uint)(*(byte *)((long)plVar24 + 9) >> 4);
  }
  else {
    uVar14 = (**(code **)(lVar29 + 0x68))(plVar24);
    lVar29 = *plVar24;
  }
  if (*(code **)(lVar29 + 0x60) == TType::getVectorSize) {
    uVar26 = *(byte *)((long)plVar24 + 9) & 0xf;
  }
  else {
    uVar26 = (**(code **)(lVar29 + 0x60))(plVar24);
    lVar29 = *plVar24;
  }
  if (*(code **)(lVar29 + 0x58) == TType::getQualifier) {
    plVar24 = plVar24 + 2;
  }
  else {
    plVar24 = (long *)(**(code **)(lVar29 + 0x58))(plVar24);
  }
  TType::TType(local_d8,param_2,*(byte *)(plVar24 + 1) & 0x7f,uVar26,uVar14,uVar28,0);
  param_3 = (long *)addConstantUnion(this,(TConstUnionArray *)&local_e8,local_d8,pTVar25,false);
LAB_00107bc3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermAggregate::setPragmaTable(glslang::TPragmaTable const&) */

void __thiscall
glslang::TIntermAggregate::setPragmaTable(TIntermAggregate *this,TPragmaTable *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  ulong uVar3;
  TPragmaTable *pTVar4;
  undefined8 uVar5;
  _Rb_tree_node *p_Var6;
  _Rb_tree_node *p_Var7;
  long lVar8;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  TPragmaTable *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = glslang::GetThreadPoolAllocator();
  pTVar4 = (TPragmaTable *)glslang::TPoolAllocator::allocate(uVar3);
  uVar5 = glslang::GetThreadPoolAllocator();
  p_Var1 = (_Rb_tree_node_base *)(pTVar4 + 0x10);
  *(undefined4 *)(pTVar4 + 0x10) = 0;
  *(undefined8 *)pTVar4 = uVar5;
  *(undefined8 *)(pTVar4 + 0x18) = 0;
  *(_Rb_tree_node_base **)(pTVar4 + 0x20) = p_Var1;
  *(_Rb_tree_node_base **)(pTVar4 + 0x28) = p_Var1;
  *(undefined8 *)(pTVar4 + 0x30) = 0;
  *(TPragmaTable **)(this + 0x130) = pTVar4;
  if (param_1 != pTVar4) {
    *(undefined8 *)(pTVar4 + 0x18) = 0;
    p_Var2 = *(_Rb_tree_node **)(param_1 + 0x18);
    *(_Rb_tree_node_base **)(pTVar4 + 0x20) = p_Var1;
    *(_Rb_tree_node_base **)(pTVar4 + 0x28) = p_Var1;
    *(undefined8 *)(pTVar4 + 0x30) = 0;
    local_38 = (undefined1  [16])0x0;
    local_28 = pTVar4;
    if (p_Var2 != (_Rb_tree_node *)0x0) {
      p_Var6 = std::
               _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
               ::
               _M_copy<false,std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>::_Reuse_or_alloc_node>
                         (p_Var2,p_Var1,(_Reuse_or_alloc_node *)local_38);
      p_Var2 = p_Var6;
      do {
        p_Var7 = p_Var2;
        p_Var2 = *(_Rb_tree_node **)(p_Var7 + 0x10);
      } while (p_Var2 != (_Rb_tree_node *)0x0);
      *(_Rb_tree_node **)(pTVar4 + 0x20) = p_Var7;
      p_Var2 = p_Var6;
      do {
        p_Var7 = p_Var2;
        p_Var2 = *(_Rb_tree_node **)(p_Var7 + 0x18);
      } while (p_Var2 != (_Rb_tree_node *)0x0);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(_Rb_tree_node **)(pTVar4 + 0x28) = p_Var7;
      *(_Rb_tree_node **)(pTVar4 + 0x18) = p_Var6;
      *(undefined8 *)(pTVar4 + 0x30) = uVar5;
      for (lVar8 = local_38._0_8_; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x10)) {
        std::
        _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
        ::_M_erase(*(_Rb_tree_node **)(lVar8 + 0x18));
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TIntermediate::specConstantPropagates(glslang::TIntermTyped const&,
   glslang::TIntermTyped const&) */

byte __thiscall
glslang::TIntermediate::specConstantPropagates
          (TIntermediate *this,TIntermTyped *param_1,TIntermTyped *param_2)

{
  long lVar1;
  code *pcVar2;
  TIntermTyped *pTVar3;
  
  if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
    pTVar3 = param_1 + 0x20;
  }
  else {
    pTVar3 = (TIntermTyped *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
  }
  if (*(code **)(*(long *)pTVar3 + 0x58) == TType::getQualifier) {
    pTVar3 = pTVar3 + 0x10;
  }
  else {
    pTVar3 = (TIntermTyped *)(**(code **)(*(long *)pTVar3 + 0x58))();
  }
  lVar1 = *(long *)param_2;
  if (((byte)pTVar3[0xc] & 1) == 0) goto LAB_00109b52;
  if (*(code **)(lVar1 + 0xf0) == TIntermTyped::getType) {
    pTVar3 = param_2 + 0x20;
    pcVar2 = *(code **)(*(long *)(param_2 + 0x20) + 0x58);
    if (pcVar2 == TType::getQualifier) goto LAB_00109b2c;
LAB_00109c18:
    pTVar3 = (TIntermTyped *)(*pcVar2)();
  }
  else {
    pTVar3 = (TIntermTyped *)(**(code **)(lVar1 + 0xf0))(param_2);
    pcVar2 = *(code **)(*(long *)pTVar3 + 0x58);
    if (pcVar2 != TType::getQualifier) goto LAB_00109c18;
LAB_00109b2c:
    pTVar3 = pTVar3 + 0x10;
  }
  if (((byte)pTVar3[8] & 0x7f) == 2) {
    return 1;
  }
  if (((byte)pTVar3[0xc] & 1) != 0) {
    return 1;
  }
  lVar1 = *(long *)param_2;
LAB_00109b52:
  pTVar3 = param_2 + 0x20;
  if (*(code **)(lVar1 + 0xf0) != TIntermTyped::getType) {
    pTVar3 = (TIntermTyped *)(**(code **)(lVar1 + 0xf0))(param_2);
  }
  if (*(code **)(*(long *)pTVar3 + 0x58) == TType::getQualifier) {
    pTVar3 = pTVar3 + 0x10;
  }
  else {
    pTVar3 = (TIntermTyped *)(**(code **)(*(long *)pTVar3 + 0x58))();
  }
  if (((byte)pTVar3[0xc] & 1) == 0) {
    return (byte)pTVar3[0xc] & 1;
  }
  if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
    pTVar3 = param_1 + 0x20;
  }
  else {
    pTVar3 = (TIntermTyped *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
  }
  if (*(code **)(*(long *)pTVar3 + 0x58) == TType::getQualifier) {
    pTVar3 = pTVar3 + 0x10;
  }
  else {
    pTVar3 = (TIntermTyped *)(**(code **)(*(long *)pTVar3 + 0x58))();
  }
  if (((byte)pTVar3[8] & 0x7f) == 2) {
    return 1;
  }
  return (byte)pTVar3[0xc] & 1;
}



/* glslang::TIntermediate::performTextureUpgradeAndSamplerRemovalTransformation(TIntermNode*) */

void __thiscall
glslang::TIntermediate::performTextureUpgradeAndSamplerRemovalTransformation
          (TIntermediate *this,TIntermNode *param_1)

{
  long in_FS_OFFSET;
  undefined **local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 1;
  local_3c = 0;
  local_48 = &PTR__TIntermTraverser_00117e08;
  local_30 = glslang::GetThreadPoolAllocator();
  local_28 = 0;
  local_48 = &PTR__TextureUpgradeAndSamplerRemovalTransform_001181e0;
  local_20 = 0;
  local_18 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::getResourceName(glslang::TResourceType) */

char * glslang::TIntermediate::getResourceName(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "shift-sampler-binding";
  case 1:
    return "shift-texture-binding";
  case 2:
    return "shift-image-binding";
  case 3:
    return "shift-UBO-binding";
  case 4:
    return "shift-ssbo-binding";
  case 5:
    return "shift-uav-binding";
  default:
    return (char *)0x0;
  }
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    puVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      if (*(byte *)(plVar1 + 1) == param_3) {
        return param_1;
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00109ead:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00109ead;
      }
      plVar1 = (long *)param_1[4];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00109efc;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00109edd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
          if (lVar5 != lVar4) {
LAB_00109efc:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00109edd;
      }
      plVar1 = (long *)param_1[8];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00109f34;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00109f15:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
          if (lVar5 != lVar4) {
LAB_00109f34:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00109f15;
      }
      plVar1 = (long *)param_1[0xc];
      if (param_3 == *(byte *)(plVar1 + 1)) goto LAB_00109f6c;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00109f4d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
          if (lVar5 != lVar4) {
LAB_00109f6c:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00109f4d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_00109fc8;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>
                      ((TType *)*param_1,param_3);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>
                    ((TType *)*param_1,param_3);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_00109fc8:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>
                    ((TType *)*param_1,param_3);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0 < lVar7 >> 7) {
    plVar1 = param_1;
LAB_0010a020:
    do {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar6;
      lVar4 = *plVar1;
      if (param_3 == plVar1) {
LAB_0010a070:
        if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a08d:
            lVar4 = *(long *)(plVar1[0xd] + 0x10);
            lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
            if (lVar4 != lVar5) {
              return plVar6;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010a08d;
        }
      }
      else {
        if (*(code **)(lVar4 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') {
            return plVar6;
          }
          lVar4 = *plVar1;
          goto LAB_0010a070;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
          return plVar6;
        }
      }
      plVar1 = (long *)plVar6[4];
      lVar4 = *plVar1;
      if (param_3 == plVar1) {
LAB_0010a0f0:
        if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a10d:
            lVar4 = *(long *)(plVar1[0xd] + 0x10);
            lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
            if (lVar4 != lVar5) {
LAB_0010a0d6:
              return plVar6 + 4;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010a10d;
        }
      }
      else {
        if (*(code **)(lVar4 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010a0d6;
          lVar4 = *plVar1;
          goto LAB_0010a0f0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_0010a0d6;
      }
      plVar1 = (long *)plVar6[8];
      lVar4 = *plVar1;
      if (param_3 == plVar1) {
LAB_0010a170:
        if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a18d:
            lVar4 = *(long *)(plVar1[0xd] + 0x10);
            lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
            if (lVar4 != lVar5) {
LAB_0010a156:
              return plVar6 + 8;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010a18d;
        }
      }
      else {
        if (*(code **)(lVar4 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010a156;
          lVar4 = *plVar1;
          goto LAB_0010a170;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_0010a156;
      }
      plVar1 = (long *)plVar6[0xc];
      lVar4 = *plVar1;
      if (param_3 == plVar1) {
LAB_0010a1f0:
        if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
          if (1 < (byte)((char)plVar1[1] - 0xfU)) goto LAB_0010a22a;
        }
        else {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 == '\0') {
            plVar1 = plVar6 + 0x10;
            if (param_1 + (lVar7 >> 7) * 0x10 == plVar6 + 0x10) break;
            goto LAB_0010a020;
          }
        }
        lVar4 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
        if (lVar4 != lVar5) {
LAB_0010a1d6:
          return plVar6 + 0xc;
        }
      }
      else {
        if (*(code **)(lVar4 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0010a1d6;
          lVar4 = *plVar1;
          goto LAB_0010a1f0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_0010a1d6;
      }
LAB_0010a22a:
      plVar1 = plVar6 + 0x10;
    } while (param_1 + (lVar7 >> 7) * 0x10 != plVar6 + 0x10);
    param_1 = plVar6 + 0x10;
    lVar7 = (long)param_2 - (long)param_1;
  }
  lVar7 = lVar7 >> 5;
  if (lVar7 != 2) {
    if (lVar7 != 3) {
      if (lVar7 != 1) {
        return param_2;
      }
      goto LAB_0010a2fd;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>
                      ((TType *)*param_1,param_3);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>
                    ((TType *)*param_1,param_3);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0010a2fd:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>
                    ((TType *)*param_1,param_3);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = (long)param_2 - (long)param_1;
  if (0 < lVar2 >> 7) {
    puVar3 = param_1 + (lVar2 >> 7) * 0x10;
    do {
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (*param_1);
      if (bVar1) {
        return param_1;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[4]);
      if (bVar1) {
        return param_1 + 4;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[8]);
      if (bVar1) {
        return param_1 + 8;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[0xc]);
      if (bVar1) {
        return param_1 + 0xc;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar3);
    lVar2 = (long)param_2 - (long)param_1;
  }
  lVar2 = lVar2 >> 5;
  if (lVar2 != 2) {
    if (lVar2 != 3) {
      if (lVar2 != 1) {
        return param_2;
      }
      goto LAB_0010a3e1;
    }
    bVar1 = glslang::TType::
            contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar1) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar1) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0010a3e1:
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar1) {
    return param_2;
  }
  return param_1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_0010a488:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_0010a4b0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_0010a488;
        }
LAB_0010a4b0:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a63d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a63d;
      }
      plVar1 = (long *)param_1[4];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_0010a4f4:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) goto LAB_0010a503;
          goto LAB_0010a510;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_0010a4f4;
        }
LAB_0010a510:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a66d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010a503:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a66d;
      }
      plVar1 = (long *)param_1[8];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_0010a554:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) goto LAB_0010a563;
          goto LAB_0010a570;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_0010a554;
        }
LAB_0010a570:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a69d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010a563:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a69d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_0010a5b4:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) goto LAB_0010a5c3;
          goto LAB_0010a5d0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_0010a5b4;
        }
LAB_0010a5d0:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0010a6cd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0010a5c3:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0010a6cd;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_0010a78e;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0010a78e:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TIntermediate::addSymbol(long long, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, glslang::TType const&,
   glslang::TConstUnionArray const&, glslang::TIntermTyped*, glslang::TSourceLoc const&) */

undefined8 * __thiscall
glslang::TIntermediate::addSymbol
          (TIntermediate *this,longlong param_1,basic_string *param_2,TType *param_3,
          TConstUnionArray *param_4,TIntermTyped *param_5,TSourceLoc *param_6)

{
  TType TVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  
  uVar6 = glslang::GetThreadPoolAllocator();
  puVar7 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar6);
  puVar7[2] = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  *puVar7 = &PTR_getLoc_00118050;
  puVar7[4] = &PTR__TType_00117c00;
  *(undefined1 (*) [16])(puVar7 + 0x15) = (undefined1  [16])0x0;
  *(byte *)(puVar7 + 8) = *(byte *)(puVar7 + 8) & 0xf0;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  *(uint *)(puVar7 + 5) =
       CONCAT22((short)((uint)*(undefined4 *)(puVar7 + 5) >> 0x10),0x100) & 0xf800ffff;
  *(undefined1 (*) [16])(puVar7 + 0x10) = (undefined1  [16])0x0;
  *(ulong *)((long)puVar7 + 0x4d) =
       *(ulong *)((long)puVar7 + 0x4d) & 0xffffff0000ffc07f | 0xffff001f80;
  *(undefined1 (*) [16])(puVar7 + 0x12) = (undefined1  [16])0x0;
  puVar7[0xb] = CONCAT71((uint7)((ulong)puVar7[0xb] >> 8) & 0xffffffff,0xff);
  *(undefined8 *)((long)puVar7 + 100) = 0xfffff800;
  *(undefined2 *)(puVar7 + 0xf) = 0;
  puVar7[6] = 0;
  *(uint *)(puVar7 + 0x14) = *(uint *)(puVar7 + 0x14) & 0x9fc00000;
  *(ulong *)((long)puVar7 + 0x4c) =
       *(ulong *)((long)puVar7 + 0x4c) & 0xffffffff8000 | 0xffff000000004fff;
  *(undefined8 *)((long)puVar7 + 0x44) = 0xffffffffffffffff;
  *(ulong *)((long)puVar7 + 0x54) = *(ulong *)((long)puVar7 + 0x54) | 0x1ffff007fffffff;
  *(undefined1 *)((long)puVar7 + 0x5c) = 0;
  puVar7[7] = puVar7[7] & 0x8000000400000000;
  *(undefined4 *)((long)puVar7 + 0x6c) = 0xffffffff;
  puVar7[0xe] = 0;
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *(undefined4 *)(param_3 + 0x80);
  *(TType *)(puVar7 + 5) = param_3[8];
  puVar7[6] = uVar8;
  puVar7[7] = uVar4;
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  *(undefined4 *)(puVar7 + 0x14) = uVar3;
  puVar7[8] = uVar8;
  puVar7[9] = uVar4;
  uVar8 = *(undefined8 *)(param_3 + 0x38);
  puVar7[10] = *(undefined8 *)(param_3 + 0x30);
  puVar7[0xb] = uVar8;
  uVar8 = *(undefined8 *)(param_3 + 0x48);
  puVar7[0xc] = *(undefined8 *)(param_3 + 0x40);
  puVar7[0xd] = uVar8;
  uVar8 = *(undefined8 *)(param_3 + 0x58);
  puVar7[0xe] = *(undefined8 *)(param_3 + 0x50);
  puVar7[0xf] = uVar8;
  TVar1 = param_3[9];
  *(byte *)((long)puVar7 + 0x29) = *(byte *)((long)puVar7 + 0x29) & 0xf0 | (byte)TVar1 & 0xf;
  *(byte *)((long)puVar7 + 0x29) = (byte)TVar1 & 0xf | (byte)param_3[9] & 0xf0;
  bVar2 = *(byte *)((long)puVar7 + 0x2a);
  bVar9 = (byte)param_3[10] & 0xf;
  *(byte *)((long)puVar7 + 0x2a) = bVar2 & 0xf0 | bVar9;
  bVar10 = (byte)param_3[10] & 0x10;
  *(byte *)((long)puVar7 + 0x2a) = bVar2 & 0xe0 | bVar9 | bVar10;
  uVar4 = *(undefined8 *)(param_3 + 0x70);
  uVar5 = *(undefined8 *)(param_3 + 0x78);
  uVar8 = *(undefined8 *)(param_3 + 0x68);
  puVar7[0x10] = *(undefined8 *)(param_3 + 0x60);
  puVar7[0x12] = uVar4;
  puVar7[0x13] = uVar5;
  puVar7[0x11] = uVar8;
  uVar8 = *(undefined8 *)(param_3 + 0x90);
  puVar7[0x15] = *(undefined8 *)(param_3 + 0x88);
  puVar7[0x16] = uVar8;
  TVar1 = param_3[10];
  *(byte *)((long)puVar7 + 0x2a) = bVar2 & 0xc0 | bVar9 | bVar10 | (byte)TVar1 & 0x20;
  *(byte *)((long)puVar7 + 0x2a) =
       bVar2 & 0x80 | bVar9 | bVar10 | (byte)TVar1 & 0x20 | (byte)param_3[10] & 0x40;
  *(ushort *)((long)puVar7 + 0x2a) =
       *(ushort *)((long)puVar7 + 0x2a) & 0xfc7f | *(ushort *)(param_3 + 10) & 0x380;
  TVar1 = param_3[0xb];
  puVar7[0x17] = param_1;
  *(undefined4 *)(puVar7 + 0x18) = 0xffffffff;
  *(byte *)((long)puVar7 + 0x2b) = *(byte *)((long)puVar7 + 0x2b) & 0xfb | (byte)TVar1 & 4;
  *puVar7 = &TIntermUnary::vtable;
  uVar8 = glslang::GetThreadPoolAllocator();
  *(undefined1 *)(puVar7 + 0x1c) = 0;
  puVar7[0x19] = uVar8;
  puVar7[0x1a] = puVar7 + 0x1c;
  puVar7[0x1e] = &PTR__TConstUnionArray_00117de8;
  puVar7[0x1b] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x20] = 0;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (puVar7 + 0x19),param_2);
  uVar4 = *(undefined8 *)(param_6 + 8);
  uVar8 = *(undefined8 *)(param_4 + 8);
  puVar7[1] = *(undefined8 *)param_6;
  puVar7[2] = uVar4;
  uVar4 = *(undefined8 *)(param_6 + 0x10);
  puVar7[0x1f] = uVar8;
  puVar7[0x20] = param_5;
  puVar7[3] = uVar4;
  return puVar7;
}



/* glslang::TIntermediate::addSymbol(glslang::TIntermSymbol const&) */

void __thiscall glslang::TIntermediate::addSymbol(TIntermediate *this,TIntermSymbol *param_1)

{
  TIntermTyped *pTVar1;
  undefined8 *puVar2;
  TIntermSymbol *pTVar3;
  longlong lVar4;
  basic_string *pbVar5;
  TIntermSymbol *pTVar6;
  
  puVar2 = *(undefined8 **)param_1;
  if ((code *)*puVar2 == TIntermNode::getLoc) {
    pTVar3 = param_1 + 8;
  }
  else {
    pTVar3 = (TIntermSymbol *)(*(code *)*puVar2)(param_1);
    puVar2 = *(undefined8 **)param_1;
  }
  pTVar1 = *(TIntermTyped **)(param_1 + 0x100);
  if ((code *)puVar2[0x1e] == TIntermTyped::getType) {
    pTVar6 = param_1 + 0x20;
  }
  else {
    pTVar6 = (TIntermSymbol *)(*(code *)puVar2[0x1e])(param_1);
    puVar2 = *(undefined8 **)param_1;
  }
  if ((code *)puVar2[0x32] == TIntermSymbol::getName_abi_cxx11_) {
    pbVar5 = (basic_string *)(param_1 + 200);
  }
  else {
    pbVar5 = (basic_string *)(*(code *)puVar2[0x32])(param_1);
    puVar2 = *(undefined8 **)param_1;
  }
  if ((code *)puVar2[0x30] == TIntermSymbol::getId) {
    lVar4 = *(longlong *)(param_1 + 0xb8);
  }
  else {
    lVar4 = (*(code *)puVar2[0x30])(param_1);
  }
  addSymbol(this,lVar4,pbVar5,(TType *)pTVar6,(TConstUnionArray *)(param_1 + 0xf0),pTVar1,
            (TSourceLoc *)pTVar3);
  return;
}



/* glslang::TIntermediate::addSymbol(glslang::TVariable const&, glslang::TSourceLoc const&) */

void __thiscall
glslang::TIntermediate::addSymbol(TIntermediate *this,TVariable *param_1,TSourceLoc *param_2)

{
  long lVar1;
  TIntermTyped *pTVar2;
  longlong lVar3;
  basic_string *pbVar4;
  TVariable *pTVar5;
  TVariable *pTVar6;
  
  lVar1 = *(long *)param_1;
  if (*(code **)(lVar1 + 0xd8) == TVariable::getConstSubtree) {
    pTVar2 = *(TIntermTyped **)(param_1 + 0xd8);
  }
  else {
    pTVar2 = (TIntermTyped *)(**(code **)(lVar1 + 0xd8))(param_1);
    lVar1 = *(long *)param_1;
  }
  if (*(code **)(lVar1 + 0xb8) == TVariable::getConstArray) {
    pTVar6 = param_1 + 200;
  }
  else {
    pTVar6 = (TVariable *)(**(code **)(lVar1 + 0xb8))(param_1);
    lVar1 = *(long *)param_1;
  }
  if (*(code **)(lVar1 + 0x60) == TVariable::getType) {
    pTVar5 = param_1 + 0x28;
  }
  else {
    pTVar5 = (TVariable *)(**(code **)(lVar1 + 0x60))(param_1);
    lVar1 = *(long *)param_1;
  }
  if (*(code **)(lVar1 + 0x18) == TSymbol::getName_abi_cxx11_) {
    pbVar4 = *(basic_string **)(param_1 + 8);
  }
  else {
    pbVar4 = (basic_string *)(**(code **)(lVar1 + 0x18))(param_1);
    lVar1 = *(long *)param_1;
  }
  if (*(code **)(lVar1 + 0x78) == TSymbol::getUniqueId) {
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
    lVar3 = (**(code **)(lVar1 + 0x78))(param_1);
  }
  addSymbol(this,lVar3,pbVar4,(TType *)pTVar5,(TConstUnionArray *)pTVar6,pTVar2,param_2);
  return;
}



/* glslang::TIntermediate::addSymbol(glslang::TVariable const&) */

void __thiscall glslang::TIntermediate::addSymbol(TIntermediate *this,TVariable *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  addSymbol(this,param_1,(TSourceLoc *)&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addSymbol(glslang::TType const&, glslang::TSourceLoc const&) */

void __thiscall
glslang::TIntermediate::addSymbol(TIntermediate *this,TType *param_1,TSourceLoc *param_2)

{
  long in_FS_OFFSET;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &PTR__TConstUnionArray_00117de8;
  local_58 = glslang::GetThreadPoolAllocator();
  local_50 = local_40;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_58,&_LC25,&_LC25);
  addSymbol(this,0,(basic_string *)&local_58,param_1,(TConstUnionArray *)&local_68,
            (TIntermTyped *)0x0,param_2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addUnaryNode(glslang::TOperator, glslang::TIntermTyped*,
   glslang::TSourceLoc const&) const */

long * __thiscall
glslang::TIntermediate::addUnaryNode
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = glslang::GetThreadPoolAllocator();
  plVar3 = (long *)glslang::TPoolAllocator::allocate(uVar2);
  plVar3[2] = 0;
  plVar3[1] = 0;
  *(undefined4 *)(plVar3 + 3) = 0;
  plVar3[4] = (long)&PTR__TType_00117c00;
  *(ushort *)((long)plVar3 + 0x4c) = *(ushort *)((long)plVar3 + 0x4c) | 0xfff;
  *(byte *)(plVar3 + 8) = *(byte *)(plVar3 + 8) & 0xf0;
  plVar3[6] = 0;
  *(uint *)(plVar3 + 5) = *(uint *)(plVar3 + 5) & 0xf8000000 | 0x101;
  plVar3[7] = plVar3[7] & 0x8000000400000000;
  *(uint *)(plVar3 + 0x14) = *(uint *)(plVar3 + 0x14) & 0x9fc00000;
  *(undefined8 *)((long)plVar3 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar3 + 0x5d) = 0;
  *(ulong *)((long)plVar3 + 0x4d) =
       (ulong)((uint)*(undefined8 *)((long)plVar3 + 0x4d) & 0xffc00f) | 0xffffffffff001fc0;
  *(undefined4 *)((long)plVar3 + 100) = 0xfffff800;
  *(ulong *)((long)plVar3 + 0x55) =
       *(ulong *)((long)plVar3 + 0x55) & 0xfe000000800000 | 0x1ffffff7fffff;
  plVar3[0xd] = -0x100000000;
  *(undefined2 *)(plVar3 + 0xf) = 0;
  plVar3[0xe] = 0;
  *(undefined4 *)(plVar3 + 0x17) = param_2;
  *(undefined4 *)((long)plVar3 + 0xbc) = 0;
  *plVar3 = (long)glslang::TIntermediate::computeBufferReferenceTypeSize;
  plVar3[0x18] = 0;
  *(undefined1 (*) [16])(plVar3 + 0x15) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar3 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar3 + 0x12) = (undefined1  [16])0x0;
  TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)(plVar3 + 0x19));
  if (*(int *)((long)param_4 + 0xc) == 0) {
    if (*(code **)*param_3 == TIntermNode::getLoc) {
      param_4 = param_3 + 1;
    }
    else {
      param_4 = (long *)(**(code **)*param_3)(param_3);
    }
  }
  lVar1 = param_4[1];
  plVar3[1] = *param_4;
  plVar3[2] = lVar1;
  plVar3[3] = param_4[2];
  if (*(code **)(*plVar3 + 0x180) == TIntermUnary::setOperand) {
    plVar3[0x18] = (long)param_3;
    return plVar3;
  }
  (**(code **)(*plVar3 + 0x180))(plVar3,param_3);
  return plVar3;
}



/* glslang::TIntermediate::addUnaryNode(glslang::TOperator, glslang::TIntermTyped*,
   glslang::TSourceLoc const&, glslang::TType const&) const */

long * glslang::TIntermediate::addUnaryNode(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long in_R8;
  
  plVar6 = (long *)addUnaryNode();
  if (*(code **)(*plVar6 + 0xe8) == TIntermTyped::setType) {
    lVar3 = *(long *)(in_R8 + 0x18);
    uVar1 = *(undefined1 *)(in_R8 + 8);
    uVar2 = *(undefined4 *)(in_R8 + 0x80);
    plVar6[6] = *(long *)(in_R8 + 0x10);
    plVar6[7] = lVar3;
    lVar3 = *(long *)(in_R8 + 0x20);
    lVar4 = *(long *)(in_R8 + 0x28);
    *(undefined4 *)(plVar6 + 0x14) = uVar2;
    plVar6[8] = lVar3;
    plVar6[9] = lVar4;
    lVar3 = *(long *)(in_R8 + 0x30);
    lVar4 = *(long *)(in_R8 + 0x38);
    *(undefined1 *)(plVar6 + 5) = uVar1;
    plVar6[10] = lVar3;
    plVar6[0xb] = lVar4;
    lVar3 = *(long *)(in_R8 + 0x48);
    plVar6[0xc] = *(long *)(in_R8 + 0x40);
    plVar6[0xd] = lVar3;
    lVar3 = *(long *)(in_R8 + 0x58);
    plVar6[0xe] = *(long *)(in_R8 + 0x50);
    plVar6[0xf] = lVar3;
    bVar8 = *(byte *)(in_R8 + 9) & 0xf;
    *(byte *)((long)plVar6 + 0x29) = *(byte *)((long)plVar6 + 0x29) & 0xf0 | bVar8;
    *(byte *)((long)plVar6 + 0x29) = bVar8 | *(byte *)(in_R8 + 9) & 0xf0;
    bVar8 = *(byte *)((long)plVar6 + 0x2a);
    bVar9 = *(byte *)(in_R8 + 10) & 0xf;
    *(byte *)((long)plVar6 + 0x2a) = bVar8 & 0xf0 | bVar9;
    bVar10 = *(byte *)(in_R8 + 10) & 0x10;
    *(byte *)((long)plVar6 + 0x2a) = bVar8 & 0xe0 | bVar9 | bVar10;
    lVar4 = *(long *)(in_R8 + 0x70);
    lVar5 = *(long *)(in_R8 + 0x78);
    plVar6[0x10] = *(long *)(in_R8 + 0x60);
    lVar3 = *(long *)(in_R8 + 0x68);
    plVar6[0x12] = lVar4;
    plVar6[0x13] = lVar5;
    plVar6[0x11] = lVar3;
    lVar3 = *(long *)(in_R8 + 0x90);
    plVar6[0x15] = *(long *)(in_R8 + 0x88);
    plVar6[0x16] = lVar3;
    bVar7 = *(byte *)(in_R8 + 10) & 0x20;
    *(byte *)((long)plVar6 + 0x2a) = bVar8 & 0xc0 | bVar9 | bVar10 | bVar7;
    *(byte *)((long)plVar6 + 0x2a) =
         bVar8 & 0x80 | bVar9 | bVar10 | bVar7 | *(byte *)(in_R8 + 10) & 0x40;
    *(ushort *)((long)plVar6 + 0x2a) =
         *(ushort *)((long)plVar6 + 0x2a) & 0xfc7f | *(ushort *)(in_R8 + 10) & 0x380;
    *(byte *)((long)plVar6 + 0x2b) =
         *(byte *)((long)plVar6 + 0x2b) & 0xfb | *(byte *)(in_R8 + 0xb) & 4;
    return plVar6;
  }
  (**(code **)(*plVar6 + 0xe8))(plVar6,in_R8);
  return plVar6;
}



/* glslang::TIntermediate::createConversion(glslang::TBasicType, glslang::TIntermTyped*) const */

TIntermOperator * __thiscall
glslang::TIntermediate::createConversion(TIntermediate *this,int param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  TIntermOperator *pTVar7;
  long lVar8;
  long *plVar9;
  TIntermOperator *pTVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  undefined4 local_dc;
  TType local_d8 [152];
  long local_40;
  
  uVar13 = param_2 - 4;
  lVar8 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(lVar8 + 0x100) == TIntermTyped::getBasicType) {
    pcVar11 = TIntermTyped::getBasicType;
    if ((char)param_3[5] != '\x04') {
LAB_0010b154:
      if ((char)param_3[5] != '\x05') {
LAB_0010b15b:
        if ((char)param_3[5] != '\x06') {
LAB_0010b162:
          if ((char)param_3[5] != '\a') {
LAB_0010b169:
            if ((char)param_3[5] != '\b') {
LAB_0010b170:
              if ((char)param_3[5] != '\t') {
LAB_0010b177:
                uVar5 = (uint)*(byte *)(param_3 + 5);
                if (*(byte *)(param_3 + 5) != 10) {
LAB_0010b184:
                  bVar15 = uVar5 == 0xb;
                  bVar14 = bVar15 || 1 < uVar13;
                  goto LAB_0010b58b;
                }
                bVar15 = true;
                uVar5 = 10;
                bVar14 = true;
                goto LAB_0010b5db;
              }
            }
          }
        }
      }
    }
    pcVar11 = *(code **)(lVar8 + 0x100);
    bVar15 = true;
    bVar16 = false;
    if (pcVar11 != TIntermTyped::getBasicType) goto LAB_0010b5fe;
LAB_0010b1b7:
    uVar5 = (uint)*(byte *)(param_3 + 5);
    if (*(byte *)(param_3 + 5) != 4) goto LAB_0010b1c4;
    goto LAB_0010b3a8;
  }
  iVar4 = (**(code **)(lVar8 + 0x100))(param_3);
  lVar8 = *param_3;
  pcVar11 = *(code **)(lVar8 + 0x100);
  if (iVar4 != 4) {
    if (pcVar11 == TIntermTyped::getBasicType) goto LAB_0010b154;
    iVar4 = (*pcVar11)(param_3);
    lVar8 = *param_3;
    pcVar11 = *(code **)(lVar8 + 0x100);
    if (iVar4 != 5) {
      if (pcVar11 == TIntermTyped::getBasicType) goto LAB_0010b15b;
      iVar4 = (*pcVar11)(param_3);
      lVar8 = *param_3;
      pcVar11 = *(code **)(lVar8 + 0x100);
      if (iVar4 != 6) {
        if (pcVar11 == TIntermTyped::getBasicType) goto LAB_0010b162;
        iVar4 = (*pcVar11)(param_3);
        lVar8 = *param_3;
        pcVar11 = *(code **)(lVar8 + 0x100);
        if (iVar4 != 7) {
          if (pcVar11 == TIntermTyped::getBasicType) goto LAB_0010b169;
          iVar4 = (*pcVar11)(param_3);
          lVar8 = *param_3;
          pcVar11 = *(code **)(lVar8 + 0x100);
          if (iVar4 != 8) {
            if (pcVar11 == TIntermTyped::getBasicType) goto LAB_0010b170;
            iVar4 = (*pcVar11)(param_3);
            pcVar11 = *(code **)(*param_3 + 0x100);
            if (iVar4 != 9) {
              if (pcVar11 == TIntermTyped::getBasicType) goto LAB_0010b177;
              iVar4 = (*pcVar11)(param_3);
              pcVar11 = *(code **)(*param_3 + 0x100);
              if (iVar4 != 10) {
                if (pcVar11 == TIntermTyped::getBasicType) {
                  uVar5 = (uint)*(byte *)(param_3 + 5);
                }
                else {
                  uVar5 = (*pcVar11)(param_3);
                  pcVar11 = *(code **)(*param_3 + 0x100);
                }
                goto LAB_0010b184;
              }
            }
          }
        }
      }
    }
  }
  bVar15 = true;
  bVar14 = true;
LAB_0010b58b:
  if (pcVar11 == TIntermTyped::getBasicType) {
    bVar1 = *(byte *)(param_3 + 5);
    if (bVar1 == 3) goto LAB_0010b652;
LAB_0010b64d:
    uVar5 = (uint)bVar1;
    if (bVar1 == 1) goto LAB_0010b652;
LAB_0010b5db:
    bVar16 = uVar5 == 2;
  }
  else {
    iVar4 = (*pcVar11)(param_3);
    if (iVar4 != 3) {
      if (*(code **)(*param_3 + 0x100) == TIntermTyped::getBasicType) {
        bVar1 = *(byte *)(param_3 + 5);
        goto LAB_0010b64d;
      }
      iVar4 = (**(code **)(*param_3 + 0x100))(param_3);
      if (iVar4 != 1) {
        if (*(code **)(*param_3 + 0x100) == TIntermTyped::getBasicType) {
          uVar5 = (uint)*(byte *)(param_3 + 5);
        }
        else {
          uVar5 = (**(code **)(*param_3 + 0x100))(param_3);
        }
        goto LAB_0010b5db;
      }
    }
LAB_0010b652:
    bVar16 = true;
  }
  if (bVar14) {
    pcVar11 = *(code **)(*param_3 + 0x100);
    if (pcVar11 == TIntermTyped::getBasicType) goto LAB_0010b1b7;
LAB_0010b5fe:
    iVar4 = (*pcVar11)(param_3);
    if (iVar4 == 4) {
LAB_0010b3a8:
      if (7 < uVar13) goto LAB_0010b3b2;
    }
    else {
      if (*(code **)(*param_3 + 0x100) == TIntermTyped::getBasicType) {
        uVar5 = (uint)*(byte *)(param_3 + 5);
      }
      else {
        uVar5 = (**(code **)(*param_3 + 0x100))(param_3);
      }
LAB_0010b1c4:
      if (uVar5 == 5) goto LAB_0010b3a8;
    }
    if ((1 < param_2 - 6U) || (bVar15)) {
LAB_0010b3c3:
      if (*(code **)(*param_3 + 0x100) != TIntermTyped::getBasicType) {
        iVar4 = (**(code **)(*param_3 + 0x100))(param_3);
        if (iVar4 == 6) goto LAB_0010b3e8;
        if (*(code **)(*param_3 + 0x100) == TIntermTyped::getBasicType) {
          uVar5 = (uint)*(byte *)(param_3 + 5);
        }
        else {
          uVar5 = (**(code **)(*param_3 + 0x100))(param_3);
        }
LAB_0010b3df:
        if (uVar5 == 7) goto LAB_0010b3e8;
        goto LAB_0010b1f6;
      }
      uVar5 = (uint)*(byte *)(param_3 + 5);
      if (*(byte *)(param_3 + 5) != 6) goto LAB_0010b3df;
LAB_0010b3e8:
      if (7 < uVar13) goto LAB_0010b1e6;
      if (!bVar16) goto LAB_0010b1ff;
      goto LAB_0010b400;
    }
LAB_0010b1e6:
    if ((*(uint *)(this + 0x5c8) & 0x405) == 0) goto LAB_0010b488;
LAB_0010b1f6:
    if (bVar16) {
LAB_0010b400:
      if (*(code **)(*param_3 + 0x100) == TIntermTyped::getBasicType) {
        uVar5 = (uint)*(byte *)(param_3 + 5);
      }
      else {
        uVar5 = (**(code **)(*param_3 + 0x100))(param_3);
      }
      if ((2 < param_2 - 1U) && (uVar5 == 3)) goto LAB_0010b209;
    }
    else {
LAB_0010b1ff:
      if (param_2 != 3) goto LAB_0010b400;
LAB_0010b209:
      if ((*(uint *)(this + 0x5c8) & 0x821) == 0) goto LAB_0010b488;
    }
    local_dc = 0;
    if (*(code **)(*param_3 + 0x100) == TIntermTyped::getBasicType) {
      uVar5 = (uint)*(byte *)(param_3 + 5);
    }
    else {
      uVar5 = (**(code **)(*param_3 + 0x100))(param_3);
    }
    cVar3 = buildConvertOp(this,param_2,uVar5,&local_dc);
    if (cVar3 != '\0') {
      lVar8 = *param_3;
      if (*(code **)(lVar8 + 0x140) == TIntermTyped::getMatrixRows) {
        uVar5 = *(byte *)((long)param_3 + 0x2a) & 0xf;
      }
      else {
        uVar5 = (**(code **)(lVar8 + 0x140))(param_3);
        lVar8 = *param_3;
      }
      if (*(code **)(lVar8 + 0x138) == TIntermTyped::getMatrixCols) {
        uVar6 = (uint)(*(byte *)((long)param_3 + 0x29) >> 4);
      }
      else {
        uVar6 = (**(code **)(lVar8 + 0x138))(param_3);
        lVar8 = *param_3;
      }
      if (*(code **)(lVar8 + 0x130) == TIntermTyped::getVectorSize) {
        uVar12 = *(byte *)((long)param_3 + 0x29) & 0xf;
      }
      else {
        uVar12 = (**(code **)(lVar8 + 0x130))(param_3);
      }
      TType::TType(local_d8,param_2,0,uVar12,uVar6,uVar5,0);
      if (*(code **)*param_3 == TIntermNode::getLoc) {
        plVar9 = param_3 + 1;
      }
      else {
        plVar9 = (long *)(**(code **)*param_3)(param_3);
      }
      uVar2 = local_dc;
      pTVar7 = (TIntermOperator *)addUnaryNode(this,local_dc,param_3,plVar9,local_d8);
      lVar8 = (**(code **)(*param_3 + 0x28))(param_3);
      if ((lVar8 != 0) &&
         ((uVar5 = *(uint *)(this + 0x5c8), (uVar5 & 1) != 0 ||
          (((((uVar5 & 2) != 0 || (1 < uVar13)) && (((uVar5 & 0x404) != 0 || (1 < param_2 - 6U))))
           && (((uVar5 & 0x820) != 0 || (param_2 != 3)))))))) {
        plVar9 = (long *)(**(code **)(*param_3 + 0x28))(param_3);
        pTVar10 = (TIntermOperator *)(**(code **)(*plVar9 + 0x188))(plVar9,uVar2,local_d8);
        if (pTVar10 != (TIntermOperator *)0x0) goto LAB_0010b37c;
      }
      plVar9 = param_3 + 4;
      if (*(code **)(*param_3 + 0xf0) != TIntermTyped::getType) {
        plVar9 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
      }
      if (*(code **)(*plVar9 + 0x58) == TType::getQualifier) {
        plVar9 = plVar9 + 2;
      }
      else {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x58))();
      }
      pTVar10 = pTVar7;
      if (((*(byte *)((long)plVar9 + 0xc) & 1) != 0) &&
         (cVar3 = isSpecializationOperation(this,pTVar7), cVar3 != '\0')) {
        if (*(code **)(*(long *)pTVar7 + 0xf8) == TIntermTyped::getWritableType) {
          pTVar7 = pTVar7 + 0x20;
        }
        else {
          pTVar7 = (TIntermOperator *)(**(code **)(*(long *)pTVar7 + 0xf8))(pTVar7);
        }
        if (*(code **)(*(long *)pTVar7 + 0x50) == TType::getQualifier) {
          pTVar7 = pTVar7 + 0x10;
        }
        else {
          pTVar7 = (TIntermOperator *)(**(code **)(*(long *)pTVar7 + 0x50))();
        }
        *(ulong *)(pTVar7 + 8) = *(ulong *)(pTVar7 + 8) & 0xfffffffeffffff80 | 0x100000002;
      }
      goto LAB_0010b37c;
    }
  }
  else {
LAB_0010b3b2:
    if (((byte)this[0x5c8] & 3) != 0) goto LAB_0010b3c3;
  }
LAB_0010b488:
  pTVar10 = (TIntermOperator *)0x0;
LAB_0010b37c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pTVar10;
}



/* glslang::TIntermediate::addConversion(glslang::TBasicType, glslang::TIntermTyped*) const */

void glslang::TIntermediate::addConversion(void)

{
  createConversion();
  return;
}



/* glslang::TIntermediate::addPairConversion(glslang::TOperator, glslang::TIntermTyped*,
   glslang::TIntermTyped*) */

undefined1 (*) [16]
glslang::TIntermediate::addPairConversion
          (undefined1 (*param_1) [16],TIntermediate *param_2,int param_3,long *param_4,long *param_5
          )

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  TType *pTVar7;
  TType *pTVar8;
  long *plVar9;
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = isConversionAllowed(param_2,param_3,param_4);
  if ((cVar1 == '\0') || (cVar1 = isConversionAllowed(param_2,param_3,param_5), cVar1 == '\0'))
  goto LAB_0010b873;
  if (*(code **)(*param_5 + 0xf0) == TIntermTyped::getType) {
    pTVar8 = (TType *)(param_5 + 4);
  }
  else {
    pTVar8 = (TType *)(**(code **)(*param_5 + 0xf0))(param_5);
  }
  if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
    pTVar7 = (TType *)(param_4 + 4);
  }
  else {
    pTVar7 = (TType *)(**(code **)(*param_4 + 0xf0))(param_4);
  }
  cVar1 = TType::operator==(pTVar7,pTVar8);
  if (cVar1 == '\0') {
    if (*(code **)(*param_4 + 0x168) == TIntermTyped::isStruct) {
      if (1 < (byte)((char)param_4[5] - 0xfU)) {
LAB_0010b91f:
        if (*(code **)(*param_5 + 0x168) == TIntermTyped::isStruct) {
          if (1 < (byte)((char)param_5[5] - 0xfU)) {
LAB_0010b942:
            plVar9 = param_4 + 4;
            if (*(code **)(*param_4 + 0xf0) != TIntermTyped::getType) {
              plVar9 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
            }
            if (*(code **)(*plVar9 + 0xe8) == TType::isArray) {
              if (plVar9[0xc] == 0) {
LAB_0010b97f:
                if (*(code **)(*param_5 + 0xf0) == TIntermTyped::getType) {
                  plVar9 = param_5 + 4;
                }
                else {
                  plVar9 = (long *)(**(code **)(*param_5 + 0xf0))(param_5);
                }
                if (*(code **)(*plVar9 + 0xe8) == TType::isArray) {
                  if (plVar9[0xc] == 0) {
LAB_0010b9b4:
                    plVar9 = param_4 + 4;
                    if (*(code **)(*param_4 + 0xf0) != TIntermTyped::getType) {
                      plVar9 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
                    }
                    if (((*(byte *)((long)plVar9 + 10) & 0x20) == 0) &&
                       ((*(byte *)((long)plVar9 + 10) & 0x40) == 0)) {
                      if (*(code **)(*param_5 + 0xf0) == TIntermTyped::getType) {
                        plVar9 = param_5 + 4;
                      }
                      else {
                        plVar9 = (long *)(**(code **)(*param_5 + 0xf0))(param_5);
                      }
                      if (((*(byte *)((long)plVar9 + 10) & 0x20) == 0) &&
                         ((*(byte *)((long)plVar9 + 10) & 0x40) == 0)) goto LAB_0010ba10;
                    }
                    goto LAB_0010baa8;
                  }
                }
                else {
                  cVar1 = (**(code **)(*plVar9 + 0xe8))();
                  if (cVar1 == '\0') goto LAB_0010b9b4;
                }
              }
            }
            else {
              cVar1 = (**(code **)(*plVar9 + 0xe8))();
              if (cVar1 == '\0') goto LAB_0010b97f;
            }
          }
        }
        else {
          cVar1 = (**(code **)(*param_5 + 0x168))(param_5);
          if (cVar1 == '\0') goto LAB_0010b942;
        }
      }
    }
    else {
      cVar1 = (**(code **)(*param_4 + 0x168))(param_4);
      if (cVar1 == '\0') goto LAB_0010b91f;
    }
LAB_0010b873:
    *param_1 = (undefined1  [16])0x0;
  }
  else {
LAB_0010ba10:
    if (param_3 == 1) {
LAB_0010bab8:
      if (*(code **)(*param_4 + 0x100) == TIntermTyped::getBasicType) {
        uVar3 = (uint)*(byte *)(param_4 + 5);
      }
      else {
        uVar3 = (**(code **)(*param_4 + 0x100))(param_4);
      }
      if (*(code **)(*param_5 + 0x100) == TIntermTyped::getBasicType) {
        uVar2 = (uint)*(byte *)(param_5 + 5);
        if (uVar3 != *(byte *)(param_5 + 5)) {
LAB_0010baf3:
          if (*(code **)(*param_4 + 0x100) == TIntermTyped::getBasicType) {
            uVar3 = (uint)*(byte *)(param_4 + 5);
          }
          else {
            uVar3 = (**(code **)(*param_4 + 0x100))(param_4);
          }
          getConversionDestinationType(&local_48,param_2,uVar3,uVar2,param_3);
          if ((local_44 == 0x18) || (local_48 == 0x18)) goto LAB_0010b873;
          if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
            plVar9 = param_4 + 4;
          }
          else {
            plVar9 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
          }
          if (*(code **)(*plVar9 + 0x38) == TType::getBasicType) {
            uVar3 = (uint)*(byte *)(plVar9 + 1);
          }
          else {
            uVar3 = (**(code **)(*plVar9 + 0x38))();
          }
          if (uVar3 != local_44) {
            lVar5 = (**(code **)(*param_4 + 0x28))(param_4);
            if (lVar5 == 0) {
              param_4 = (long *)createConversion(param_2,local_44,param_4);
            }
            else {
              uVar6 = (**(code **)(*param_4 + 0x28))(param_4);
              param_4 = (long *)promoteConstantUnion(param_2,local_44,uVar6);
            }
          }
          if (*(code **)(*param_5 + 0xf0) == TIntermTyped::getType) {
            plVar9 = param_5 + 4;
          }
          else {
            plVar9 = (long *)(**(code **)(*param_5 + 0xf0))(param_5);
          }
          if (*(code **)(*plVar9 + 0x38) == TType::getBasicType) {
            uVar3 = (uint)*(byte *)(plVar9 + 1);
          }
          else {
            uVar3 = (**(code **)(*plVar9 + 0x38))();
          }
          if (uVar3 != local_48) {
            lVar5 = (**(code **)(*param_5 + 0x28))(param_5);
            if (lVar5 == 0) {
              param_5 = (long *)createConversion(param_2,local_48,param_5);
            }
            else {
              uVar6 = (**(code **)(*param_5 + 0x28))(param_5);
              param_5 = (long *)promoteConstantUnion(param_2,local_48,uVar6);
            }
          }
        }
      }
      else {
        uVar2 = (**(code **)(*param_5 + 0x100))(param_5);
        if (uVar3 != uVar2) {
          if (*(code **)(*param_5 + 0x100) == TIntermTyped::getBasicType) {
            uVar2 = (uint)*(byte *)(param_5 + 5);
          }
          else {
            uVar2 = (**(code **)(*param_5 + 0x100))(param_5);
          }
          goto LAB_0010baf3;
        }
      }
    }
    else if (param_3 - 0x9cU < 0x1a) {
      uVar4 = 1L << ((byte)(param_3 - 0x9cU) & 0x3f);
      if ((uVar4 & 0x7bcf9f) != 0) goto LAB_0010bab8;
      if ((uVar4 & 0x3800000) == 0) {
        if ((uVar4 & 0x60) == 0) goto LAB_0010bc38;
        if (*(code **)(*param_4 + 0x100) == TIntermTyped::getBasicType) {
          uVar3 = (uint)*(byte *)(param_4 + 5);
        }
        else {
          uVar3 = (**(code **)(*param_4 + 0x100))(param_4);
        }
        cVar1 = isTypeInt(uVar3);
        if (cVar1 == '\0') goto LAB_0010b873;
        if (*(code **)(*param_5 + 0x100) == TIntermTyped::getBasicType) {
          uVar3 = (uint)*(byte *)(param_5 + 5);
        }
        else {
          uVar3 = (**(code **)(*param_5 + 0x100))(param_5);
        }
        cVar1 = isTypeInt(uVar3);
        goto joined_r0x0010ba9c;
      }
    }
    else {
LAB_0010bc38:
      if (*(code **)(*param_5 + 0xf0) == TIntermTyped::getType) {
        pTVar8 = (TType *)(param_5 + 4);
      }
      else {
        pTVar8 = (TType *)(**(code **)(*param_5 + 0xf0))(param_5);
      }
      if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
        pTVar7 = (TType *)(param_4 + 4);
      }
      else {
        pTVar7 = (TType *)(**(code **)(*param_4 + 0xf0))(param_4);
      }
      cVar1 = TType::operator==(pTVar7,pTVar8);
joined_r0x0010ba9c:
      if (cVar1 == '\0') goto LAB_0010b873;
    }
LAB_0010baa8:
    *(long **)*param_1 = param_5;
    *(long **)(*param_1 + 8) = param_4;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* glslang::TIntermediate::addConversion(glslang::TOperator, glslang::TType const&,
   glslang::TIntermTyped*) */

long * __thiscall
glslang::TIntermediate::addConversion
          (TIntermediate *this,ulong param_2,TType *param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  TType *pTVar9;
  
  cVar2 = isConversionAllowed(this,param_2,param_4);
  if (cVar2 == '\0') {
    return (long *)0x0;
  }
  if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
    pTVar9 = (TType *)(param_4 + 4);
  }
  else {
    pTVar9 = (TType *)(**(code **)(*param_4 + 0xf0))(param_4);
  }
  cVar2 = TType::operator==(param_3,pTVar9);
  if (cVar2 != '\0') {
    return param_4;
  }
  if (*(code **)(*(long *)param_3 + 0x128) == TType::isStruct) {
    if ((byte)((char)param_3[8] - 0xfU) < 2) {
      return (long *)0x0;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)param_3 + 0x128))(param_3);
    if (cVar2 != '\0') {
      return (long *)0x0;
    }
  }
  if (*(code **)(*param_4 + 0x168) == TIntermTyped::isStruct) {
    if ((byte)((char)param_4[5] - 0xfU) < 2) {
      return (long *)0x0;
    }
  }
  else {
    cVar2 = (**(code **)(*param_4 + 0x168))(param_4);
    if (cVar2 != '\0') {
      return (long *)0x0;
    }
  }
  if (*(code **)(*(long *)param_3 + 0xe8) == TType::isArray) {
    if (*(long *)(param_3 + 0x60) != 0) {
      return (long *)0x0;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)param_3 + 0xe8))(param_3);
    if (cVar2 != '\0') {
      return (long *)0x0;
    }
  }
  plVar8 = param_4 + 4;
  if (*(code **)(*param_4 + 0xf0) != TIntermTyped::getType) {
    plVar8 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
  }
  if (*(code **)(*plVar8 + 0xe8) == TType::isArray) {
    if (plVar8[0xc] != 0) {
      return (long *)0x0;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar8 + 0xe8))();
    if (cVar2 != '\0') {
      return (long *)0x0;
    }
  }
  plVar8 = param_4 + 4;
  if (*(code **)(*param_4 + 0xf0) != TIntermTyped::getType) {
    plVar8 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
  }
  uVar3 = (uint)param_2;
  if (((*(byte *)((long)plVar8 + 10) & 0x20) == 0) && ((*(byte *)((long)plVar8 + 10) & 0x40) == 0))
  {
    if (599 < uVar3) {
      if ((uVar3 != 0x30a) && (uVar3 != 0x31c)) goto LAB_0010bfcd;
      goto LAB_0010c05d;
    }
    if (0x233 < uVar3) {
      uVar5 = 1L << ((char)param_2 - 0x34U & 0x3f);
      if ((uVar5 & 0x3ede62000) == 0) {
        if ((uVar5 & 0xc00000000) != 0) {
          if (*(code **)(*(long *)param_3 + 0x38) == TType::getBasicType) {
            uVar3 = (uint)(byte)param_3[8];
          }
          else {
            uVar3 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
          }
          cVar2 = isTypeInt(uVar3);
          if (cVar2 == '\0') {
            return (long *)0x0;
          }
          if (*(code **)(*param_4 + 0x100) == TIntermTyped::getBasicType) {
            uVar3 = (uint)*(byte *)(param_4 + 5);
          }
          else {
            uVar3 = (**(code **)(*param_4 + 0x100))(param_4);
          }
          cVar2 = isTypeInt(uVar3);
          if (cVar2 == '\0') {
            return (long *)0x0;
          }
          return param_4;
        }
        if ((uVar5 & 1) == 0) goto LAB_0010bfcd;
        if (uVar3 == 0x234) {
          bVar1 = (byte)this[0x5c8] & 0x21;
          goto joined_r0x0010c34f;
        }
        goto LAB_0010c144;
      }
      goto LAB_0010c05d;
    }
    if (0x1e5 < uVar3) goto LAB_0010bfcd;
    if (uVar3 < 0x1db) {
      if (uVar3 < 0xe0) {
        if (uVar3 < 0xc3) {
          if (9 < uVar3) {
            if (uVar3 != 0xa0) goto LAB_0010bfcd;
            goto LAB_0010c05d;
          }
          if (uVar3 == 0) goto LAB_0010bfcd;
          uVar5 = 0x212L >> (param_2 & 0x3f);
        }
        else {
          uVar5 = 0x1fc00081L >> ((ulong)(uVar3 - 0xc3) & 0x3f);
        }
      }
      else {
        if (0x118 < uVar3) {
          if (uVar3 != 0x1d5) goto LAB_0010bfcd;
          goto LAB_0010c05d;
        }
        if (uVar3 < 0xe2) goto LAB_0010bfcd;
        uVar5 = 0x77000000000007 >> ((ulong)(uVar3 - 0xe2) & 0x3f);
      }
      if ((uVar5 & 1) == 0) {
LAB_0010bfcd:
        if (*(code **)(*(long *)param_3 + 0x38) == TType::getBasicType) {
          uVar3 = (uint)(byte)param_3[8];
        }
        else {
          uVar3 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
        }
        if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
          plVar8 = param_4 + 4;
        }
        else {
          plVar8 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
        }
        if (*(code **)(*plVar8 + 0x38) == TType::getBasicType) {
          uVar4 = (uint)*(byte *)(plVar8 + 1);
        }
        else {
          uVar4 = (**(code **)(*plVar8 + 0x38))();
        }
        if (uVar3 == uVar4) {
          return param_4;
        }
        return (long *)0x0;
      }
      goto LAB_0010c05d;
    }
    if (uVar3 < 0x1e1) {
      if (uVar3 < 0x1df) {
        if (1 < uVar3 - 0x1dd) goto LAB_0010c144;
        bVar1 = (byte)this[0x5c8] & 3;
      }
      else {
        bVar1 = (byte)this[0x5c8] & 5;
      }
joined_r0x0010c34f:
      if (bVar1 == 0) goto LAB_0010c268;
    }
  }
  else {
    if (1 < uVar3 - 0x245) {
      return (long *)0x0;
    }
LAB_0010c05d:
    if (*(code **)(*(long *)param_3 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)(byte)param_3[8];
    }
    else {
      uVar3 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
    }
    lVar6 = *param_4;
    if (uVar3 == 0x12) {
LAB_0010c313:
      if (*(code **)(lVar6 + 0xf0) == TIntermTyped::getType) {
        pTVar9 = (TType *)(param_4 + 4);
      }
      else {
        pTVar9 = (TType *)(**(code **)(lVar6 + 0xf0))(param_4);
      }
      cVar2 = TType::operator==(param_3,pTVar9);
      if (cVar2 != '\0') {
        return param_4;
      }
      return (long *)0x0;
    }
    if (*(code **)(lVar6 + 0xf0) == TIntermTyped::getType) {
      plVar8 = param_4 + 4;
    }
    else {
      plVar8 = (long *)(**(code **)(lVar6 + 0xf0))(param_4);
    }
    if (*(code **)(*plVar8 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)*(byte *)(plVar8 + 1);
    }
    else {
      uVar3 = (**(code **)(*plVar8 + 0x38))();
    }
    if (uVar3 == 0x12) {
      lVar6 = *param_4;
      goto LAB_0010c313;
    }
    if (*(code **)(*(long *)param_3 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)(byte)param_3[8];
    }
    else {
      uVar3 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
    }
    if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
      plVar8 = param_4 + 4;
    }
    else {
      plVar8 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
    }
    if (*(code **)(*plVar8 + 0x38) == TType::getBasicType) {
      uVar4 = (uint)*(byte *)(plVar8 + 1);
    }
    else {
      uVar4 = (**(code **)(*plVar8 + 0x38))();
    }
    if (uVar3 == uVar4) {
      return param_4;
    }
    if (*(code **)(*(long *)param_3 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)(byte)param_3[8];
    }
    else {
      uVar3 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
    }
    if (*(code **)(*param_4 + 0x100) == TIntermTyped::getBasicType) {
      uVar4 = (uint)*(byte *)(param_4 + 5);
    }
    else {
      uVar4 = (**(code **)(*param_4 + 0x100))(param_4);
    }
    cVar2 = canImplicitlyPromote(this,uVar4,uVar3,param_2 & 0xffffffff);
    if (cVar2 == '\0') {
      return (long *)0x0;
    }
  }
LAB_0010c144:
  lVar6 = (**(code **)(*param_4 + 0x28))(param_4);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*param_4 + 0x28))(param_4);
    if (*(code **)(*(long *)param_3 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)(byte)param_3[8];
    }
    else {
      uVar3 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
    }
    plVar8 = (long *)promoteConstantUnion(this,uVar3,uVar7);
    return plVar8;
  }
LAB_0010c268:
  if (*(code **)(*(long *)param_3 + 0x38) == TType::getBasicType) {
    uVar3 = (uint)(byte)param_3[8];
  }
  else {
    uVar3 = (**(code **)(*(long *)param_3 + 0x38))(param_3);
  }
  plVar8 = (long *)createConversion(this,uVar3,param_4);
  return plVar8;
}



/* glslang::TIntermediate::promoteUnary(glslang::TIntermUnary&) */

undefined8 __thiscall
glslang::TIntermediate::promoteUnary(TIntermediate *this,TIntermUnary *param_1)

{
  TIntermUnary TVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  TIntermUnary *pTVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  byte bVar14;
  long in_FS_OFFSET;
  TType aTStack_c8 [152];
  long local_30;
  
  uVar4 = *(uint *)(param_1 + 0xb8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0x188) == TIntermUnary::getOperand) {
    plVar8 = *(long **)(param_1 + 0xc0);
  }
  else {
    plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x188))(param_1);
  }
  lVar13 = *plVar8;
  pcVar2 = *(code **)(lVar13 + 0x100);
  if (uVar4 == 0xb) {
    if (pcVar2 == TIntermTyped::getBasicType) {
      uVar10 = (ulong)*(byte *)(plVar8 + 5);
    }
    else {
      uVar10 = (*pcVar2)(plVar8);
    }
    if ((uint)uVar10 < 0xb) {
      if (((0x550UL >> (uVar10 & 0x3f) & 1) == 0) && ((0xaa0UL >> (uVar10 & 0x3f) & 1) == 0)) {
        uVar7 = 0;
        goto LAB_0010c7e2;
      }
    }
    else if (0xb < (uint)uVar10) {
      uVar7 = 0;
      goto LAB_0010c7e2;
    }
LAB_0010c5f1:
    lVar6 = *(long *)param_1;
    lVar13 = *plVar8;
  }
  else {
    if (0xb < uVar4) {
      if (uVar4 - 0xc < 4) goto LAB_0010c81a;
LAB_0010c850:
      if (pcVar2 == TIntermTyped::getBasicType) {
        uVar4 = (uint)*(byte *)(plVar8 + 5);
      }
      else {
        uVar4 = (*pcVar2)(plVar8);
      }
      if (uVar4 != 1) {
LAB_0010c86d:
        uVar7 = 0;
        goto LAB_0010c7e2;
      }
      goto LAB_0010c5f1;
    }
    if (uVar4 == 8) {
LAB_0010c81a:
      if (pcVar2 == TIntermTyped::getBasicType) {
        uVar10 = (ulong)*(byte *)(plVar8 + 5);
      }
      else {
        uVar10 = (*pcVar2)(plVar8);
        lVar13 = *plVar8;
      }
      if ((uint)uVar10 < 0xb) {
        if (((0x550UL >> (uVar10 & 0x3f) & 1) == 0) && ((0xaa0UL >> (uVar10 & 0x3f) & 1) == 0)) {
LAB_0010c949:
          if (*(code **)(lVar13 + 0x100) == TIntermTyped::getBasicType) {
            bVar11 = *(byte *)(plVar8 + 5);
            if (bVar11 == 1) goto LAB_0010c846;
LAB_0010c96b:
            uVar4 = (uint)bVar11;
            if (bVar11 == 3) {
              lVar6 = *(long *)param_1;
              goto LAB_0010c5f8;
            }
LAB_0010c975:
            if (uVar4 != 2) {
              uVar7 = 0;
              goto LAB_0010c7e2;
            }
          }
          else {
            iVar5 = (**(code **)(lVar13 + 0x100))(plVar8);
            if (iVar5 != 1) {
              lVar13 = *plVar8;
              if (*(code **)(lVar13 + 0x100) == TIntermTyped::getBasicType) {
                bVar11 = *(byte *)(plVar8 + 5);
                goto LAB_0010c96b;
              }
              iVar5 = (**(code **)(lVar13 + 0x100))(plVar8);
              if (iVar5 != 3) {
                if (*(code **)(*plVar8 + 0x100) == TIntermTyped::getBasicType) {
                  uVar4 = (uint)*(byte *)(plVar8 + 5);
                }
                else {
                  uVar4 = (**(code **)(*plVar8 + 0x100))(plVar8);
                }
                goto LAB_0010c975;
              }
            }
          }
          goto LAB_0010c5f1;
        }
      }
      else if (0xb < (uint)uVar10) goto LAB_0010c949;
LAB_0010c846:
      lVar6 = *(long *)param_1;
    }
    else {
      if (uVar4 != 9) goto LAB_0010c850;
      if (pcVar2 == TIntermTyped::getBasicType) {
        uVar4 = (uint)*(byte *)(plVar8 + 5);
      }
      else {
        uVar4 = (*pcVar2)(plVar8);
      }
      if (uVar4 == 0xc) goto LAB_0010c5f1;
      TType::TType(aTStack_c8,0xc,0,1,0,0,0);
      plVar8 = (long *)addConversion(this,9,aTStack_c8,plVar8);
      if (plVar8 == (long *)0x0) goto LAB_0010c86d;
      lVar6 = *(long *)param_1;
      if (*(code **)(lVar6 + 0x180) == TIntermUnary::setOperand) {
        *(long **)(param_1 + 0xc0) = plVar8;
        lVar13 = *plVar8;
      }
      else {
        (**(code **)(lVar6 + 0x180))(param_1,plVar8);
        lVar6 = *(long *)param_1;
        lVar13 = *plVar8;
      }
    }
  }
LAB_0010c5f8:
  pcVar2 = *(code **)(lVar6 + 0xe8);
  if (*(code **)(lVar13 + 0xf0) == TIntermTyped::getType) {
    plVar8 = plVar8 + 4;
    if (pcVar2 != TIntermTyped::setType) goto LAB_0010c9b8;
LAB_0010c62a:
    lVar13 = plVar8[3];
    TVar1 = *(TIntermUnary *)(plVar8 + 1);
    lVar3 = plVar8[0x10];
    *(long *)(param_1 + 0x30) = plVar8[2];
    *(long *)(param_1 + 0x38) = lVar13;
    lVar13 = plVar8[4];
    lVar6 = plVar8[5];
    *(int *)(param_1 + 0xa0) = (int)lVar3;
    *(long *)(param_1 + 0x40) = lVar13;
    *(long *)(param_1 + 0x48) = lVar6;
    lVar13 = plVar8[6];
    lVar6 = plVar8[7];
    param_1[0x28] = TVar1;
    *(long *)(param_1 + 0x50) = lVar13;
    *(long *)(param_1 + 0x58) = lVar6;
    lVar13 = plVar8[9];
    *(long *)(param_1 + 0x60) = plVar8[8];
    *(long *)(param_1 + 0x68) = lVar13;
    lVar13 = plVar8[0xb];
    *(long *)(param_1 + 0x70) = plVar8[10];
    *(long *)(param_1 + 0x78) = lVar13;
    bVar11 = *(byte *)((long)plVar8 + 9) & 0xf;
    param_1[0x29] = (TIntermUnary)((byte)param_1[0x29] & 0xf0 | bVar11);
    param_1[0x29] = (TIntermUnary)(bVar11 | *(byte *)((long)plVar8 + 9) & 0xf0);
    TVar1 = param_1[0x2a];
    bVar11 = *(byte *)((long)plVar8 + 10) & 0xf;
    param_1[0x2a] = (TIntermUnary)((byte)TVar1 & 0xf0 | bVar11);
    bVar12 = *(byte *)((long)plVar8 + 10) & 0x10;
    param_1[0x2a] = (TIntermUnary)((byte)TVar1 & 0xe0 | bVar11 | bVar12);
    lVar6 = plVar8[0xe];
    lVar3 = plVar8[0xf];
    *(long *)(param_1 + 0x80) = plVar8[0xc];
    lVar13 = plVar8[0xd];
    *(long *)(param_1 + 0x90) = lVar6;
    *(long *)(param_1 + 0x98) = lVar3;
    *(long *)(param_1 + 0x88) = lVar13;
    lVar13 = plVar8[0x12];
    *(long *)(param_1 + 0xa8) = plVar8[0x11];
    *(long *)(param_1 + 0xb0) = lVar13;
    bVar14 = *(byte *)((long)plVar8 + 10) & 0x20;
    param_1[0x2a] = (TIntermUnary)((byte)TVar1 & 0xc0 | bVar11 | bVar12 | bVar14);
    param_1[0x2a] =
         (TIntermUnary)
         ((byte)TVar1 & 0x80 | bVar11 | bVar12 | bVar14 | *(byte *)((long)plVar8 + 10) & 0x40);
    *(ushort *)(param_1 + 0x2a) =
         *(ushort *)(param_1 + 0x2a) & 0xfc7f | *(ushort *)((long)plVar8 + 10) & 0x380;
    param_1[0x2b] = (TIntermUnary)((byte)param_1[0x2b] & 0xfb | *(byte *)((long)plVar8 + 0xb) & 4);
  }
  else {
    plVar8 = (long *)(**(code **)(lVar13 + 0xf0))(plVar8);
    if (pcVar2 == TIntermTyped::setType) goto LAB_0010c62a;
LAB_0010c9b8:
    (*pcVar2)(param_1);
  }
  if (*(code **)(*(long *)param_1 + 0xf8) == TIntermTyped::getWritableType) {
    pTVar9 = param_1 + 0x20;
  }
  else {
    pTVar9 = (TIntermUnary *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
  }
  if (*(code **)(*(long *)pTVar9 + 0x50) == TType::getQualifier) {
    pTVar9 = pTVar9 + 0x10;
  }
  else {
    pTVar9 = (TIntermUnary *)(**(code **)(*(long *)pTVar9 + 0x50))();
  }
  pTVar9[0x10] = (TIntermUnary)((byte)pTVar9[0x10] & 0xf0);
  *(undefined8 *)(pTVar9 + 0x14) = 0xffffffffffffffff;
  pTVar9[0x30] = (TIntermUnary)0x0;
  *(undefined4 *)(pTVar9 + 0x34) = 0xfffff800;
  *(uint *)(pTVar9 + 0x1c) = *(uint *)(pTVar9 + 0x1c) & 0xffc00000 | 0x1fcfff;
  *(ulong *)(pTVar9 + 0x20) = *(ulong *)(pTVar9 + 0x20) | 0x7fffffffffffffff;
  *(long *)(pTVar9 + 0x38) = -0x100000000;
  *(long *)(pTVar9 + 0x40) = 0;
  *(long *)pTVar9 = 0;
  *(ulong *)(pTVar9 + 0x28) = (ulong)((uint)*(long *)(pTVar9 + 0x28) & 0xfe000000) | 0x1ffffff;
  *(undefined2 *)(pTVar9 + 0x48) = 0;
  *(ulong *)(pTVar9 + 8) = *(ulong *)(pTVar9 + 8) & 0x800000141fff0000;
  uVar7 = 1;
LAB_0010c7e2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* glslang::TIntermediate::promote(glslang::TIntermOperator*) */

undefined8 __thiscall glslang::TIntermediate::promote(TIntermediate *this,TIntermOperator *param_1)

{
  long lVar1;
  TIntermUnary *pTVar2;
  undefined8 uVar3;
  TIntermBinary *pTVar4;
  long *plVar5;
  
  if (param_1 == (TIntermOperator *)0x0) {
    return 0;
  }
  lVar1 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  if (lVar1 != 0) {
    pTVar2 = (TIntermUnary *)(**(code **)(*(long *)param_1 + 0x38))();
    uVar3 = promoteUnary(this,pTVar2);
    return uVar3;
  }
  lVar1 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  if (lVar1 != 0) {
    pTVar4 = (TIntermBinary *)(**(code **)(*(long *)param_1 + 0x40))();
    uVar3 = promoteBinary(this,pTVar4);
    return uVar3;
  }
  lVar1 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x30))(param_1);
    if (*(code **)(*plVar5 + 400) != TIntermAggregate::getSequence) {
      (**(code **)(*plVar5 + 400))(plVar5);
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* glslang::TIntermediate::addUnaryMath(glslang::TOperator, glslang::TIntermTyped*,
   glslang::TSourceLoc const&) */

TIntermOperator * __thiscall
glslang::TIntermediate::addUnaryMath
          (TIntermediate *this,uint param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  TIntermOperator *pTVar5;
  long lVar6;
  long *plVar7;
  TIntermOperator *pTVar8;
  uint uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  TType local_d8 [152];
  long local_40;
  code *UNRECOVERED_JUMPTABLE;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (long *)0x0) {
LAB_0010cdc0:
    pTVar5 = (TIntermOperator *)0x0;
  }
  else {
    if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
      plVar7 = param_3 + 4;
    }
    else {
      plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
    }
    if (*(code **)(*plVar7 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)*(byte *)(plVar7 + 1);
    }
    else {
      uVar3 = (**(code **)(*plVar7 + 0x38))();
    }
    if (uVar3 == 0x10) goto LAB_0010cdc0;
    if (param_2 == 9) {
      if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
        plVar7 = param_3 + 4;
      }
      else {
        plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
      }
      if (*(code **)(*plVar7 + 0x38) == TType::getBasicType) {
        uVar3 = (uint)*(byte *)(plVar7 + 1);
      }
      else {
        uVar3 = (**(code **)(*plVar7 + 0x38))();
      }
      if (uVar3 == 0xc) {
        if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
          plVar7 = param_3 + 4;
        }
        else {
          plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
        }
        if (*(code **)(*plVar7 + 0xe0) == TType::isMatrix) {
          if (*(byte *)((long)plVar7 + 9) < 0x10) {
LAB_0010ce37:
            plVar7 = param_3 + 4;
            if (*(code **)(*param_3 + 0xf0) != TIntermTyped::getType) {
              plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
            }
            if (*(code **)(*plVar7 + 0xe8) == TType::isArray) {
              if (plVar7[0xc] == 0) {
LAB_0010ce73:
                plVar7 = param_3 + 4;
                if (*(code **)(*param_3 + 0xf0) != TIntermTyped::getType) {
                  plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
                }
                UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0xd8);
                if (UNRECOVERED_JUMPTABLE != TType::isVector) goto LAB_0010cf00;
                if (1 < (*(byte *)((long)plVar7 + 9) & 0xf)) goto LAB_0010cdc0;
                bVar2 = *(byte *)((long)plVar7 + 10) >> 4 & 1;
                goto LAB_0010cf02;
              }
            }
            else {
              cVar1 = (**(code **)(*plVar7 + 0xe8))();
              if (cVar1 == '\0') goto LAB_0010ce73;
            }
          }
        }
        else {
          cVar1 = (**(code **)(*plVar7 + 0xe0))();
          if (cVar1 == '\0') goto LAB_0010ce37;
        }
      }
      goto LAB_0010cdc0;
    }
    if (9 < param_2) {
      if (param_2 - 0xc < 4) goto LAB_0010cc39;
      switch(param_2) {
      case 0x1db:
        uVar10 = 8;
        break;
      case 0x1dc:
        uVar10 = 9;
        break;
      case 0x1dd:
        uVar10 = 4;
        break;
      case 0x1de:
        uVar10 = 5;
        break;
      case 0x1df:
        uVar10 = 6;
        break;
      case 0x1e0:
        uVar10 = 7;
        break;
      case 0x1e1:
        uVar10 = 10;
        break;
      case 0x1e2:
        uVar10 = 0xb;
        break;
      case 0x1e3:
        uVar10 = 0xc;
        break;
      case 0x1e4:
        uVar10 = 1;
        break;
      case 0x1e5:
        uVar10 = 2;
        break;
      default:
        goto switchD_0010cedd_caseD_1e6;
      case 0x234:
        uVar10 = 3;
      }
      lVar6 = *param_3;
      if (*(code **)(lVar6 + 0x158) == TIntermTyped::isVector) {
        bVar2 = 1;
        if ((*(byte *)((long)param_3 + 0x29) & 0xf) < 2) {
          bVar2 = *(byte *)((long)param_3 + 0x2a) >> 4 & 1;
        }
      }
      else {
        bVar2 = (**(code **)(lVar6 + 0x158))(param_3);
        lVar6 = *param_3;
      }
      if (*(code **)(lVar6 + 0x140) == TIntermTyped::getMatrixRows) {
        uVar3 = *(byte *)((long)param_3 + 0x2a) & 0xf;
      }
      else {
        uVar3 = (**(code **)(lVar6 + 0x140))(param_3);
        lVar6 = *param_3;
      }
      if (*(code **)(lVar6 + 0x138) == TIntermTyped::getMatrixCols) {
        uVar4 = (uint)(*(byte *)((long)param_3 + 0x29) >> 4);
      }
      else {
        uVar4 = (**(code **)(lVar6 + 0x138))(param_3);
        lVar6 = *param_3;
      }
      if (*(code **)(lVar6 + 0x130) == TIntermTyped::getVectorSize) {
        uVar9 = *(byte *)((long)param_3 + 0x29) & 0xf;
      }
      else {
        uVar9 = (**(code **)(lVar6 + 0x130))(param_3);
      }
      TType::TType(local_d8,uVar10,0,uVar9,uVar4,uVar3,bVar2);
      pTVar5 = (TIntermOperator *)addConversion(this,param_2,local_d8,param_3);
      if (pTVar5 == (TIntermOperator *)0x0) goto LAB_0010cdc0;
      plVar7 = (long *)(**(code **)(*(long *)pTVar5 + 0x38))(pTVar5);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x198))();
      }
      goto LAB_0010cdc2;
    }
    if (param_2 != 8) goto switchD_0010cedd_caseD_1e6;
LAB_0010cc39:
    if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
      plVar7 = param_3 + 4;
    }
    else {
      plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
    }
    if (*(code **)(*plVar7 + 0x38) == TType::getBasicType) {
      uVar3 = (uint)*(byte *)(plVar7 + 1);
    }
    else {
      uVar3 = (**(code **)(*plVar7 + 0x38))();
    }
    if (uVar3 == 0xf) goto LAB_0010cdc0;
    if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
      plVar7 = param_3 + 4;
    }
    else {
      plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0xe8);
    if (UNRECOVERED_JUMPTABLE == TType::isArray) {
      if (plVar7[0xc] == 0) goto switchD_0010cedd_caseD_1e6;
      goto LAB_0010cdc0;
    }
LAB_0010cf00:
    bVar2 = (*UNRECOVERED_JUMPTABLE)();
LAB_0010cf02:
    if (bVar2 != 0) goto LAB_0010cdc0;
switchD_0010cedd_caseD_1e6:
    pTVar5 = (TIntermOperator *)addUnaryNode(this,param_2,param_3,param_4);
    cVar1 = promote(this,pTVar5);
    if (cVar1 == '\0') goto LAB_0010cdc0;
    (**(code **)(*(long *)pTVar5 + 0x198))(pTVar5);
    if (*(code **)(*(long *)pTVar5 + 0x188) == TIntermUnary::getOperand) {
      plVar7 = *(long **)(pTVar5 + 0xc0);
    }
    else {
      plVar7 = (long *)(**(code **)(*(long *)pTVar5 + 0x188))(pTVar5);
    }
    lVar6 = (**(code **)(*plVar7 + 0x28))();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar5 + 0x188);
    if (lVar6 != 0) {
      if (UNRECOVERED_JUMPTABLE == TIntermUnary::getOperand) {
        plVar7 = *(long **)(pTVar5 + 0xc0);
      }
      else {
        plVar7 = (long *)(*UNRECOVERED_JUMPTABLE)(pTVar5);
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x28))();
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x188);
      if (*(code **)(*(long *)pTVar5 + 0xf0) != TIntermTyped::getType) {
        (**(code **)(*(long *)pTVar5 + 0xf0))(pTVar5);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cd7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pTVar5 = (TIntermOperator *)(*UNRECOVERED_JUMPTABLE)(plVar7,param_2);
        return pTVar5;
      }
      goto LAB_0010d3ae;
    }
    if (UNRECOVERED_JUMPTABLE == TIntermUnary::getOperand) {
      plVar7 = *(long **)(pTVar5 + 0xc0);
    }
    else {
      plVar7 = (long *)(*UNRECOVERED_JUMPTABLE)(pTVar5);
    }
    if (*(code **)(*plVar7 + 0xf0) == TIntermTyped::getType) {
      plVar7 = plVar7 + 4;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0xf0))();
    }
    if (*(code **)(*plVar7 + 0x58) == TType::getQualifier) {
      plVar7 = plVar7 + 2;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x58))();
    }
    if (((*(byte *)((long)plVar7 + 0xc) & 1) != 0) &&
       (cVar1 = isSpecializationOperation(this,pTVar5), cVar1 != '\0')) {
      if (*(code **)(*(long *)pTVar5 + 0xf8) == TIntermTyped::getWritableType) {
        pTVar8 = pTVar5 + 0x20;
      }
      else {
        pTVar8 = (TIntermOperator *)(**(code **)(*(long *)pTVar5 + 0xf8))(pTVar5);
      }
      if (*(code **)(*(long *)pTVar8 + 0x50) == TType::getQualifier) {
        pTVar8 = pTVar8 + 0x10;
      }
      else {
        pTVar8 = (TIntermOperator *)(**(code **)(*(long *)pTVar8 + 0x50))();
      }
      *(ulong *)(pTVar8 + 8) = *(ulong *)(pTVar8 + 8) & 0xfffffffeffffff80 | 0x100000002;
    }
    if (*(code **)(*(long *)pTVar5 + 0x188) == TIntermUnary::getOperand) {
      plVar7 = *(long **)(pTVar5 + 0xc0);
    }
    else {
      plVar7 = (long *)(**(code **)(*(long *)pTVar5 + 0x188))(pTVar5);
    }
    if (*(code **)(*plVar7 + 0x108) == TIntermTyped::getQualifier) {
      plVar7 = plVar7 + 6;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x108))();
    }
    if ((*(byte *)((long)plVar7 + 0xc) & 2) != 0) {
      uVar3 = *(uint *)(pTVar5 + 0xb8);
      if (uVar3 < 0x10) {
        if (7 < uVar3) goto LAB_0010d20a;
      }
      else if ((uVar3 - 0x9c < 0x1e) && ((0x3ffbcfffUL >> ((ulong)(uVar3 - 0x9c) & 0x3f) & 1) != 0))
      {
LAB_0010d20a:
        if (*(code **)(*(long *)pTVar5 + 0xf8) == TIntermTyped::getWritableType) {
          pTVar8 = pTVar5 + 0x20;
        }
        else {
          pTVar8 = (TIntermOperator *)(**(code **)(*(long *)pTVar5 + 0xf8))(pTVar5);
        }
        if (*(code **)(*(long *)pTVar8 + 0x50) == TType::getQualifier) {
          pTVar8 = pTVar8 + 0x10;
        }
        else {
          pTVar8 = (TIntermOperator *)(**(code **)(*(long *)pTVar8 + 0x50))();
        }
        pTVar8[0xc] = (TIntermOperator)((byte)pTVar8[0xc] | 2);
      }
    }
  }
LAB_0010cdc2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pTVar5;
  }
LAB_0010d3ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::setAggregateOperator(TIntermNode*, glslang::TOperator, glslang::TType
   const&, glslang::TSourceLoc const&) */

void __thiscall
glslang::TIntermediate::setAggregateOperator
          (TIntermediate *this,long *param_1,undefined4 param_3,long param_4,long *param_5)

{
  TIntermAggregate TVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  TIntermAggregate *this_00;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long *local_40 [2];
  
  local_40[0] = param_1;
  if (param_1 == (long *)0x0) {
    uVar8 = glslang::GetThreadPoolAllocator();
    this_00 = (TIntermAggregate *)glslang::TPoolAllocator::allocate(uVar8);
    TIntermAggregate::TIntermAggregate(this_00);
  }
  else {
    this_00 = (TIntermAggregate *)(**(code **)(*param_1 + 0x30))(param_1);
    if ((this_00 == (TIntermAggregate *)0x0) || (*(int *)(this_00 + 0xb8) != 0)) {
      uVar8 = glslang::GetThreadPoolAllocator();
      this_00 = (TIntermAggregate *)glslang::TPoolAllocator::allocate(uVar8);
      TIntermAggregate::TIntermAggregate(this_00);
      puVar4 = *(undefined8 **)(this_00 + 0xd0);
      if (puVar4 == *(undefined8 **)(this_00 + 0xd8)) {
        std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
        _M_realloc_insert<TIntermNode*const&>
                  ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(this_00 + 0xc0),
                   puVar4,local_40);
      }
      else {
        *puVar4 = param_1;
        *(undefined8 **)(this_00 + 0xd0) = puVar4 + 1;
      }
    }
  }
  lVar7 = *(long *)this_00;
  if (*(code **)(lVar7 + 0x188) == TIntermAggregate::setOperator) {
    *(undefined4 *)(this_00 + 0xb8) = param_3;
  }
  else {
    (**(code **)(lVar7 + 0x188))(this_00,param_3);
    lVar7 = *(long *)this_00;
  }
  if (*(int *)((long)param_5 + 0xc) == 0) {
    if (param_1 == (long *)0x0) goto LAB_0010d467;
    pcVar3 = *(code **)(lVar7 + 8);
    if (*(code **)*param_1 == TIntermNode::getLoc) {
      param_5 = param_1 + 1;
    }
    else {
      param_5 = (long *)(**(code **)*param_1)(param_1);
    }
  }
  else {
    pcVar3 = *(code **)(lVar7 + 8);
  }
  if (pcVar3 == TIntermNode::setLoc) {
    lVar7 = param_5[1];
    *(long *)(this_00 + 8) = *param_5;
    *(long *)(this_00 + 0x10) = lVar7;
    *(long *)(this_00 + 0x18) = param_5[2];
    lVar7 = *(long *)this_00;
  }
  else {
    (*pcVar3)(this_00,param_5);
    lVar7 = *(long *)this_00;
  }
LAB_0010d467:
  if (*(code **)(lVar7 + 0xe8) == TIntermTyped::setType) {
    lVar7 = *(long *)(param_4 + 0x18);
    TVar1 = *(TIntermAggregate *)(param_4 + 8);
    uVar2 = *(undefined4 *)(param_4 + 0x80);
    *(long *)(this_00 + 0x30) = *(long *)(param_4 + 0x10);
    *(long *)(this_00 + 0x38) = lVar7;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar5 = *(long *)(param_4 + 0x28);
    *(undefined4 *)(this_00 + 0xa0) = uVar2;
    *(long *)(this_00 + 0x40) = lVar7;
    *(long *)(this_00 + 0x48) = lVar5;
    lVar7 = *(long *)(param_4 + 0x30);
    lVar5 = *(long *)(param_4 + 0x38);
    this_00[0x28] = TVar1;
    *(long *)(this_00 + 0x50) = lVar7;
    *(long *)(this_00 + 0x58) = lVar5;
    lVar7 = *(long *)(param_4 + 0x48);
    *(long *)(this_00 + 0x60) = *(long *)(param_4 + 0x40);
    *(long *)(this_00 + 0x68) = lVar7;
    lVar7 = *(long *)(param_4 + 0x58);
    *(long *)(this_00 + 0x70) = *(long *)(param_4 + 0x50);
    *(long *)(this_00 + 0x78) = lVar7;
    bVar9 = *(byte *)(param_4 + 9) & 0xf;
    this_00[0x29] = (TIntermAggregate)((byte)this_00[0x29] & 0xf0 | bVar9);
    this_00[0x29] = (TIntermAggregate)(bVar9 | *(byte *)(param_4 + 9) & 0xf0);
    TVar1 = this_00[0x2a];
    bVar9 = *(byte *)(param_4 + 10) & 0xf;
    this_00[0x2a] = (TIntermAggregate)((byte)TVar1 & 0xf0 | bVar9);
    bVar10 = *(byte *)(param_4 + 10) & 0x10;
    this_00[0x2a] = (TIntermAggregate)((byte)TVar1 & 0xe0 | bVar9 | bVar10);
    lVar5 = *(long *)(param_4 + 0x70);
    lVar6 = *(long *)(param_4 + 0x78);
    *(long *)(this_00 + 0x80) = *(long *)(param_4 + 0x60);
    lVar7 = *(long *)(param_4 + 0x68);
    *(long *)(this_00 + 0x90) = lVar5;
    *(long *)(this_00 + 0x98) = lVar6;
    *(long *)(this_00 + 0x88) = lVar7;
    lVar7 = *(long *)(param_4 + 0x90);
    *(long *)(this_00 + 0xa8) = *(long *)(param_4 + 0x88);
    *(long *)(this_00 + 0xb0) = lVar7;
    bVar11 = *(byte *)(param_4 + 10) & 0x20;
    this_00[0x2a] = (TIntermAggregate)((byte)TVar1 & 0xc0 | bVar9 | bVar10 | bVar11);
    this_00[0x2a] =
         (TIntermAggregate)
         ((byte)TVar1 & 0x80 | bVar9 | bVar10 | bVar11 | *(byte *)(param_4 + 10) & 0x40);
    *(ushort *)(this_00 + 0x2a) =
         *(ushort *)(this_00 + 0x2a) & 0xfc7f | *(ushort *)(param_4 + 10) & 0x380;
    this_00[0x2b] = (TIntermAggregate)((byte)this_00[0x2b] & 0xfb | *(byte *)(param_4 + 0xb) & 4);
  }
  else {
    (**(code **)(lVar7 + 0xe8))(this_00,param_4);
  }
  glslang::TIntermediate::fold((TIntermAggregate *)this);
  return;
}



/* glslang::TIntermediate::addBuiltInFunctionCall(glslang::TSourceLoc const&, glslang::TOperator,
   bool, TIntermNode*, glslang::TType const&) */

long __thiscall
glslang::TIntermediate::addBuiltInFunctionCall
          (TIntermediate *this,undefined8 param_1,ulong param_3,char param_4,long *param_5,
          undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_4 == '\0') {
    lVar2 = setAggregateOperator(this,param_5,param_3,param_6,param_1);
    return lVar2;
  }
  plVar1 = (long *)(**(code **)(*param_5 + 0x18))();
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (lVar2 != 0) {
    plVar3 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    lVar2 = (**(code **)(*plVar3 + 0x188))(plVar3,param_3 & 0xffffffff,param_6);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  plVar3 = plVar1 + 1;
  if (*(code **)*plVar1 != TIntermNode::getLoc) {
    plVar3 = (long *)(**(code **)*plVar1)(plVar1);
  }
  lVar2 = addUnaryNode(this,param_3 & 0xffffffff,plVar1,plVar3,param_6);
  return lVar2;
}



/* glslang::TIntermediate::addBinaryMath(glslang::TOperator, glslang::TIntermTyped*,
   glslang::TIntermTyped*, glslang::TSourceLoc const&) */

TIntermOperator * __thiscall
glslang::TIntermediate::addBinaryMath
          (TIntermediate *this,int param_2,long *param_3,long *param_4,TSourceLoc *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  TIntermOperator *pTVar6;
  long *plVar7;
  long lVar8;
  TIntermOperator *pTVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  TType *pTVar14;
  TType *pTVar15;
  TIntermTyped *pTVar16;
  TIntermTyped *pTVar17;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
      plVar7 = param_3 + 4;
    }
    else {
      plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
    }
    if (*(code **)(*plVar7 + 0x38) == TType::getBasicType) {
      uVar2 = (uint)*(byte *)(plVar7 + 1);
    }
    else {
      uVar2 = (**(code **)(*plVar7 + 0x38))();
    }
    if (uVar2 == 0x10) goto LAB_0010d848;
    if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
      plVar7 = param_4 + 4;
    }
    else {
      plVar7 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
    }
    if (*(code **)(*plVar7 + 0x38) == TType::getBasicType) {
      uVar2 = (uint)*(byte *)(plVar7 + 1);
    }
    else {
      uVar2 = (**(code **)(*plVar7 + 0x38))();
    }
    if (uVar2 == 0x10) goto LAB_0010d848;
    cVar1 = (char)param_3[5];
    if (1 < param_2 - 0x9cU) {
LAB_0010d838:
      if (cVar1 != '\x12') {
LAB_0010df56:
        if ((char)param_4[5] != '\x12') {
LAB_0010df61:
          addPairConversion(&local_d8,this,param_2,param_3,param_4);
          if ((local_d0 != 0) && (local_d8 != 0)) {
            pTVar6 = (TIntermOperator *)addBinaryNode(this,param_2,local_d0,local_d8,param_5);
            cVar1 = promote(this,pTVar6);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)pTVar6 + 0x1a0))(pTVar6);
              if (*(code **)(*(long *)pTVar6 + 400) == TIntermBinary::getLeft) {
                plVar7 = *(long **)(pTVar6 + 0xc0);
              }
              else {
                plVar7 = (long *)(**(code **)(*(long *)pTVar6 + 400))(pTVar6);
              }
              plVar7 = (long *)(**(code **)(*plVar7 + 0x28))();
              if (*(code **)(*(long *)pTVar6 + 0x198) == TIntermBinary::getRight) {
                plVar13 = *(long **)(pTVar6 + 200);
              }
              else {
                plVar13 = (long *)(**(code **)(*(long *)pTVar6 + 0x198))(pTVar6);
              }
              lVar8 = (**(code **)(*plVar13 + 0x28))();
              if (((plVar7 != (long *)0x0) && (lVar8 != 0)) &&
                 (pTVar9 = (TIntermOperator *)
                           (**(code **)(*plVar7 + 0x180))
                                     (plVar7,*(undefined4 *)(pTVar6 + 0xb8),lVar8),
                 pTVar9 != (TIntermOperator *)0x0)) goto LAB_0010d84a;
              lVar8 = *(long *)pTVar6;
              if (*(code **)(lVar8 + 0x198) == TIntermBinary::getRight) {
                pTVar17 = *(TIntermTyped **)(pTVar6 + 200);
              }
              else {
                pTVar17 = (TIntermTyped *)(**(code **)(lVar8 + 0x198))(pTVar6);
                lVar8 = *(long *)pTVar6;
              }
              if (*(code **)(lVar8 + 400) == TIntermBinary::getLeft) {
                pTVar16 = *(TIntermTyped **)(pTVar6 + 0xc0);
              }
              else {
                pTVar16 = (TIntermTyped *)(**(code **)(lVar8 + 400))(pTVar6);
              }
              cVar1 = specConstantPropagates(this,pTVar16,pTVar17);
              if ((cVar1 != '\0') && (cVar1 = isSpecializationOperation(this,pTVar6), cVar1 != '\0')
                 ) {
                if (*(code **)(*(long *)pTVar6 + 0xf8) == TIntermTyped::getWritableType) {
                  pTVar9 = pTVar6 + 0x20;
                }
                else {
                  pTVar9 = (TIntermOperator *)(**(code **)(*(long *)pTVar6 + 0xf8))(pTVar6);
                }
                if (*(code **)(*(long *)pTVar9 + 0x50) == TType::getQualifier) {
                  pTVar9 = pTVar9 + 0x10;
                }
                else {
                  pTVar9 = (TIntermOperator *)(**(code **)(*(long *)pTVar9 + 0x50))();
                }
                *(ulong *)(pTVar9 + 8) = *(ulong *)(pTVar9 + 8) & 0xfffffffeffffff80 | 0x100000002;
              }
              if (*(code **)(*(long *)pTVar6 + 400) == TIntermBinary::getLeft) {
                plVar7 = *(long **)(pTVar6 + 0xc0);
              }
              else {
                plVar7 = (long *)(**(code **)(*(long *)pTVar6 + 400))(pTVar6);
              }
              if (*(code **)(*plVar7 + 0x108) == TIntermTyped::getQualifier) {
                plVar7 = plVar7 + 6;
              }
              else {
                plVar7 = (long *)(**(code **)(*plVar7 + 0x108))();
              }
              pTVar9 = pTVar6;
              if ((*(byte *)((long)plVar7 + 0xc) & 2) == 0) {
                if (*(code **)(*(long *)pTVar6 + 0x198) == TIntermBinary::getRight) {
                  plVar7 = *(long **)(pTVar6 + 200);
                }
                else {
                  plVar7 = (long *)(**(code **)(*(long *)pTVar6 + 0x198))(pTVar6);
                }
                if (*(code **)(*plVar7 + 0x108) == TIntermTyped::getQualifier) {
                  plVar7 = plVar7 + 6;
                }
                else {
                  plVar7 = (long *)(**(code **)(*plVar7 + 0x108))();
                }
                if ((*(byte *)((long)plVar7 + 0xc) & 2) == 0) goto LAB_0010d84a;
              }
              uVar2 = *(uint *)(pTVar6 + 0xb8);
              if (uVar2 < 0x10) {
                if (uVar2 < 8) goto LAB_0010d84a;
              }
              else if ((0x1d < uVar2 - 0x9c) ||
                      ((0x3ffbcfffUL >> ((ulong)(uVar2 - 0x9c) & 0x3f) & 1) == 0))
              goto LAB_0010d84a;
              if (*(code **)(*(long *)pTVar6 + 0xf8) == TIntermTyped::getWritableType) {
                pTVar6 = pTVar6 + 0x20;
              }
              else {
                pTVar6 = (TIntermOperator *)(**(code **)(*(long *)pTVar6 + 0xf8))(pTVar6);
              }
              if (*(code **)(*(long *)pTVar6 + 0x50) == TType::getQualifier) {
                pTVar6 = pTVar6 + 0x10;
              }
              else {
                pTVar6 = (TIntermOperator *)(**(code **)(*(long *)pTVar6 + 0x50))();
              }
              pTVar6[0xc] = (TIntermOperator)((byte)pTVar6[0xc] | 2);
              goto LAB_0010d84a;
            }
          }
        }
      }
      goto LAB_0010d848;
    }
    if (cVar1 == '\x12') {
      if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
        plVar7 = param_3 + 4;
      }
      else {
        plVar7 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
      }
      if (*(code **)(*plVar7 + 0xa8) == TType::getReferentType) {
        plVar7 = (long *)plVar7[0xd];
      }
      else {
        plVar7 = (long *)(**(code **)(*plVar7 + 0xa8))();
      }
      lVar8 = *plVar7;
      if (*(code **)(lVar8 + 0x1a8) == TType::containsUnsizedArray) {
        if (*(code **)(lVar8 + 0xf8) == TType::isUnsizedArray) {
          if (*(code **)(lVar8 + 0xe8) == TType::isArray) {
            lVar4 = plVar7[0xc];
            if (lVar4 == 0) goto LAB_0010d9dd;
LAB_0010d9c6:
            if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) goto LAB_0010d848;
          }
          else {
            cVar1 = (**(code **)(lVar8 + 0xe8))(plVar7);
            if (cVar1 != '\0') {
              lVar4 = plVar7[0xc];
              goto LAB_0010d9c6;
            }
          }
          lVar8 = *plVar7;
        }
        else {
          cVar1 = (**(code **)(lVar8 + 0xf8))(plVar7);
          if (cVar1 != '\0') goto LAB_0010d848;
          lVar8 = *plVar7;
        }
LAB_0010d9dd:
        if (*(code **)(lVar8 + 0x128) == TType::isStruct) {
          if ((byte)((char)plVar7[1] - 0xfU) < 2) {
LAB_0010def1:
            lVar8 = *(long *)(plVar7[0xd] + 0x10);
            lVar4 = std::
                    __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar7[0xd] + 8),lVar8);
            if (lVar8 != lVar4) goto LAB_0010d848;
          }
        }
        else {
          cVar1 = (**(code **)(lVar8 + 0x128))(plVar7);
          if (cVar1 != '\0') goto LAB_0010def1;
        }
      }
      else {
        cVar1 = (**(code **)(lVar8 + 0x1a8))(plVar7);
        if (cVar1 != '\0') goto LAB_0010d848;
      }
      if ((char)param_4[5] == '\x12') goto LAB_0010db6e;
    }
    else {
      if ((char)param_4[5] != '\x12') {
LAB_0010d88c:
        if (param_2 != 0x9c) {
LAB_0010df50:
          param_2 = 0x9d;
          goto LAB_0010df56;
        }
        if ((char)param_4[5] == '\x12') {
LAB_0010d8ab:
          if (*(code **)(*param_3 + 0x100) == TIntermTyped::getBasicType) {
            uVar5 = (ulong)*(byte *)(param_3 + 5);
          }
          else {
            uVar5 = (**(code **)(*param_3 + 0x100))(param_3);
          }
          if ((uint)uVar5 < 0xb) {
            if (((0x550UL >> (uVar5 & 0x3f) & 1) != 0) || ((0xaa0UL >> (uVar5 & 0x3f) & 1) != 0)) {
LAB_0010e209:
              if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
                pTVar15 = (TType *)(param_4 + 4);
                pTVar14 = pTVar15;
              }
              else {
                pTVar14 = (TType *)(**(code **)(*param_4 + 0xf0))(param_4);
                if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
                  pTVar15 = (TType *)(param_4 + 4);
                }
                else {
                  pTVar15 = (TType *)(**(code **)(*param_4 + 0xf0))(param_4);
                }
              }
              iVar3 = glslang::TIntermediate::computeBufferReferenceTypeSize(pTVar15);
              uVar10 = addConstantUnion(this,(long)iVar3,param_5,true);
              TType::TType((TType *)&local_d8,0xb,0,1,0,0,0);
              uVar11 = addBuiltInFunctionCall(this,param_5,0x97,1,param_4,(TType *)&local_d8);
              uVar12 = createConversion(this,10,param_3);
              uVar12 = addBinaryMath(this,0x9e,uVar12,uVar10,param_5);
              param_2 = 0x9c;
              goto LAB_0010db0f;
            }
          }
          else if ((uint)uVar5 < 0xc) goto LAB_0010e209;
          cVar1 = (char)param_3[5];
          param_2 = 0x9c;
          goto LAB_0010d838;
        }
LAB_0010e45b:
        param_2 = 0x9c;
        goto LAB_0010df61;
      }
LAB_0010db6e:
      if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
        plVar7 = param_4 + 4;
      }
      else {
        plVar7 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
      }
      if (*(code **)(*plVar7 + 0xa8) == TType::getReferentType) {
        plVar7 = (long *)plVar7[0xd];
      }
      else {
        plVar7 = (long *)(**(code **)(*plVar7 + 0xa8))();
      }
      lVar8 = *plVar7;
      if (*(code **)(lVar8 + 0x1a8) == TType::containsUnsizedArray) {
        if (*(code **)(lVar8 + 0xf8) == TType::isUnsizedArray) {
          if (*(code **)(lVar8 + 0xe8) == TType::isArray) {
            lVar4 = plVar7[0xc];
            if (lVar4 == 0) goto LAB_0010dbfb;
LAB_0010dbe6:
            if (**(int **)(*(long *)(lVar4 + 8) + 8) == 0) goto LAB_0010d848;
          }
          else {
            cVar1 = (**(code **)(lVar8 + 0xe8))(plVar7);
            if (cVar1 != '\0') {
              lVar4 = plVar7[0xc];
              goto LAB_0010dbe6;
            }
          }
          lVar8 = *plVar7;
        }
        else {
          cVar1 = (**(code **)(lVar8 + 0xf8))(plVar7);
          if (cVar1 != '\0') goto LAB_0010d848;
          lVar8 = *plVar7;
        }
LAB_0010dbfb:
        if (*(code **)(lVar8 + 0x128) == TType::isStruct) {
          if (1 < (byte)((char)plVar7[1] - 0xfU)) goto LAB_0010da0f;
LAB_0010dc22:
          lVar8 = *(long *)(plVar7[0xd] + 0x10);
          lVar4 = std::
                  __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar7[0xd] + 8),lVar8);
          if (lVar8 != lVar4) goto LAB_0010d848;
        }
        else {
          cVar1 = (**(code **)(lVar8 + 0x128))(plVar7);
          if (cVar1 != '\0') goto LAB_0010dc22;
        }
      }
      else {
        cVar1 = (**(code **)(lVar8 + 0x1a8))(plVar7);
        if (cVar1 != '\0') goto LAB_0010d848;
      }
    }
LAB_0010da0f:
    if ((char)param_3[5] != '\x12') goto LAB_0010d88c;
    if (*(code **)(*param_4 + 0x100) == TIntermTyped::getBasicType) {
      uVar5 = (ulong)*(byte *)(param_4 + 5);
    }
    else {
      uVar5 = (**(code **)(*param_4 + 0x100))(param_4);
    }
    if ((uint)uVar5 < 0xb) {
      if (((0x550UL >> (uVar5 & 0x3f) & 1) == 0) && ((0xaa0UL >> (uVar5 & 0x3f) & 1) == 0))
      goto LAB_0010dc57;
LAB_0010da50:
      if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
        pTVar14 = (TType *)(param_3 + 4);
        pTVar15 = pTVar14;
      }
      else {
        pTVar14 = (TType *)(**(code **)(*param_3 + 0xf0))(param_3);
        if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
          pTVar15 = (TType *)(param_3 + 4);
        }
        else {
          pTVar15 = (TType *)(**(code **)(*param_3 + 0xf0))(param_3);
        }
      }
      iVar3 = glslang::TIntermediate::computeBufferReferenceTypeSize(pTVar15);
      uVar11 = addConstantUnion(this,(long)iVar3,param_5,true);
      TType::TType((TType *)&local_d8,0xb,0,1,0,0,0);
      uVar12 = addBuiltInFunctionCall(this,param_5,0x97,1,param_3,(TType *)&local_d8);
      uVar10 = createConversion(this,10,param_4);
      uVar11 = addBinaryMath(this,0x9e,uVar10,uVar11,param_5);
LAB_0010db0f:
      uVar11 = addBinaryMath(this,param_2,uVar12,uVar11,param_5);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pTVar6 = (TIntermOperator *)addBuiltInFunctionCall(this,param_5,0x96,1,uVar11,pTVar14);
        return pTVar6;
      }
      goto LAB_0010e438;
    }
    if ((uint)uVar5 < 0xc) goto LAB_0010da50;
LAB_0010dc57:
    if (param_2 == 0x9c) {
      if ((char)param_4[5] == '\x12') goto LAB_0010d8ab;
      if ((char)param_3[5] != '\x12') goto LAB_0010e45b;
LAB_0010d848:
      pTVar9 = (TIntermOperator *)0x0;
LAB_0010d84a:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return pTVar9;
      }
LAB_0010e438:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((char)param_3[5] != '\x12') goto LAB_0010df50;
    if ((char)param_4[5] != '\x12') goto LAB_0010d848;
    if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
      pTVar14 = (TType *)(param_3 + 4);
    }
    else {
      pTVar14 = (TType *)(**(code **)(*param_3 + 0xf0))(param_3);
    }
    iVar3 = glslang::TIntermediate::computeBufferReferenceTypeSize(pTVar14);
    plVar7 = (long *)addConstantUnion(this,(long)iVar3,param_5,true);
    uVar5 = 0;
    TType::TType((TType *)&local_d8,0xb,0,1,0,0,0);
    uVar11 = addBuiltInFunctionCall(this,param_5,0x97,1,param_3,(TType *)&local_d8);
    uVar5 = uVar5 & 0xffffffff00000000;
    TType::TType((TType *)&local_d8,0xb,0,1,0,0,uVar5);
    uVar10 = addBuiltInFunctionCall(this,param_5,0x97,1,param_4,(TType *)&local_d8);
    uVar5 = uVar5 & 0xffffffff00000000;
    TType::TType((TType *)&local_d8,10,0,1,0,0,uVar5);
    uVar11 = addBuiltInFunctionCall(this,param_5,0x6e,1,uVar11,(TType *)&local_d8);
    TType::TType((TType *)&local_d8,10,0,1,0,0,uVar5 & 0xffffffff00000000);
    uVar10 = addBuiltInFunctionCall(this,param_5,0x6e,1,uVar10);
    param_2 = 0x9f;
    param_3 = (long *)addBinaryMath(this,0x9d,uVar11,uVar10);
    param_4 = plVar7;
  } while( true );
}



/* glslang::TIntermediate::addAssign(glslang::TOperator, glslang::TIntermTyped*,
   glslang::TIntermTyped*, glslang::TSourceLoc const&) */

TIntermOperator * __thiscall
glslang::TIntermediate::addAssign
          (TIntermediate *this,int param_2,long *param_3,long *param_4,undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  TIntermSymbol *pTVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  TIntermOperator *pTVar8;
  
  pcVar5 = *(code **)(*param_3 + 0xf0);
  if (pcVar5 != TIntermTyped::getType) goto LAB_0010e6ac;
LAB_0010e4b8:
  plVar6 = param_3 + 4;
  pcVar5 = *(code **)(param_3[4] + 0x38);
  if (pcVar5 != TType::getBasicType) goto LAB_0010e6c4;
  do {
    uVar3 = (uint)*(byte *)(plVar6 + 1);
    while( true ) {
      if (uVar3 == 0x10) {
        return (TIntermOperator *)0x0;
      }
      if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
        plVar6 = param_4 + 4;
      }
      else {
        plVar6 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
      }
      if (*(code **)(*plVar6 + 0x38) == TType::getBasicType) {
        uVar3 = (uint)*(byte *)(plVar6 + 1);
      }
      else {
        uVar3 = (**(code **)(*plVar6 + 0x38))();
      }
      if (uVar3 == 0x10) {
        return (TIntermOperator *)0x0;
      }
      if ((1 < param_2 - 0x24aU) || ((char)param_3[5] != '\x12')) {
        if (*(code **)(*param_3 + 0xf0) == TIntermTyped::getType) {
          plVar6 = param_3 + 4;
        }
        else {
          plVar6 = (long *)(**(code **)(*param_3 + 0xf0))(param_3);
        }
        lVar7 = addConversion(this,param_2,plVar6,param_4);
        if (lVar7 == 0) {
          return (TIntermOperator *)0x0;
        }
        if (*(code **)(*param_3 + 0xf0) != TIntermTyped::getType) {
          (**(code **)(*param_3 + 0xf0))(param_3);
        }
        pTVar8 = (TIntermOperator *)addBinaryNode(this,param_2,param_3,lVar7,param_5);
        cVar1 = promote(this,pTVar8);
        if (cVar1 == '\0') {
          return (TIntermOperator *)0x0;
        }
        (**(code **)(*(long *)pTVar8 + 0x1a0))(pTVar8);
        return pTVar8;
      }
      if (*(code **)(*param_4 + 0xf0) == TIntermTyped::getType) {
        plVar6 = param_4 + 4;
      }
      else {
        plVar6 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
      }
      pcVar5 = *(code **)(*plVar6 + 0xc0);
      if (pcVar5 == TType::isScalar) {
        pcVar5 = *(code **)(*plVar6 + 0xd8);
        if (pcVar5 == TType::isVector) {
          if (1 < (*(byte *)((long)plVar6 + 9) & 0xf)) {
            return (TIntermOperator *)0x0;
          }
          bVar2 = *(byte *)((long)plVar6 + 10) >> 4 & 1;
        }
        else {
          bVar2 = (*pcVar5)();
        }
        if (bVar2 != 0) {
          return (TIntermOperator *)0x0;
        }
        lVar7 = *plVar6;
        if (*(code **)(lVar7 + 0xe0) == TType::isMatrix) {
          if (0xf < *(byte *)((long)plVar6 + 9)) {
            return (TIntermOperator *)0x0;
          }
        }
        else {
          cVar1 = (**(code **)(lVar7 + 0xe0))();
          if (cVar1 != '\0') {
            return (TIntermOperator *)0x0;
          }
          lVar7 = *plVar6;
        }
        if (*(code **)(lVar7 + 0x128) == TType::isStruct) {
          if ((byte)((char)plVar6[1] - 0xfU) < 2) {
            return (TIntermOperator *)0x0;
          }
        }
        else {
          cVar1 = (**(code **)(lVar7 + 0x128))();
          if (cVar1 != '\0') {
            return (TIntermOperator *)0x0;
          }
          lVar7 = *plVar6;
        }
        if (*(code **)(lVar7 + 0xe8) == TType::isArray) {
          if (plVar6[0xc] != 0) {
            return (TIntermOperator *)0x0;
          }
        }
        else {
          cVar1 = (**(code **)(lVar7 + 0xe8))();
          if (cVar1 != '\0') {
            return (TIntermOperator *)0x0;
          }
        }
      }
      else {
        cVar1 = (*pcVar5)();
        if (cVar1 == '\0') {
          return (TIntermOperator *)0x0;
        }
      }
      plVar6 = param_4 + 4;
      if (*(code **)(*param_4 + 0xf0) != TIntermTyped::getType) {
        plVar6 = (long *)(**(code **)(*param_4 + 0xf0))(param_4);
      }
      if (*(code **)(*plVar6 + 0x138) == TType::isIntegerDomain) {
        bVar2 = *(byte *)(plVar6 + 1);
        if (bVar2 < 0xc) {
          if (bVar2 < 4) {
            return (TIntermOperator *)0x0;
          }
        }
        else if (bVar2 != 0xd) {
          return (TIntermOperator *)0x0;
        }
      }
      else {
        cVar1 = (**(code **)(*plVar6 + 0x138))();
        if (cVar1 == '\0') {
          return (TIntermOperator *)0x0;
        }
      }
      param_4 = (long *)addBinaryMath(this,(param_2 != 0x24a) + 0x9c,param_3,param_4,param_5);
      if (param_4 == (long *)0x0) {
        return (TIntermOperator *)0x0;
      }
      param_2 = 0x249;
      pTVar4 = (TIntermSymbol *)(**(code **)(*param_3 + 0x60))(param_3);
      param_3 = (long *)addSymbol(this,pTVar4);
      pcVar5 = *(code **)(*param_3 + 0xf0);
      if (pcVar5 == TIntermTyped::getType) goto LAB_0010e4b8;
LAB_0010e6ac:
      plVar6 = (long *)(*pcVar5)(param_3);
      pcVar5 = *(code **)(*plVar6 + 0x38);
      if (pcVar5 == TType::getBasicType) break;
LAB_0010e6c4:
      uVar3 = (*pcVar5)();
    }
  } while( true );
}



/* glslang::TIntermediate::makeAggregate(glslang::TSourceLoc const&) */

undefined8 * __thiscall
glslang::TIntermediate::makeAggregate(TIntermediate *this,TSourceLoc *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = glslang::GetThreadPoolAllocator();
  puVar3 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar2);
  puVar3[2] = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[4] = &PTR__TType_00117c00;
  *(ushort *)((long)puVar3 + 0x4c) = *(ushort *)((long)puVar3 + 0x4c) | 0xfff;
  *(byte *)(puVar3 + 8) = *(byte *)(puVar3 + 8) & 0xf0;
  puVar3[6] = 0;
  *(uint *)(puVar3 + 5) = *(uint *)(puVar3 + 5) & 0xf8000000 | 0x101;
  puVar3[7] = puVar3[7] & 0x8000000400000000;
  *(uint *)(puVar3 + 0x14) = *(uint *)(puVar3 + 0x14) & 0x9fc00000;
  *(undefined8 *)((long)puVar3 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((long)puVar3 + 0x5d) = 0;
  *(ulong *)((long)puVar3 + 0x4d) =
       (ulong)((uint)*(undefined8 *)((long)puVar3 + 0x4d) & 0xffc00f) | 0xffffffffff001fc0;
  *(undefined4 *)((long)puVar3 + 100) = 0xfffff800;
  *(ulong *)((long)puVar3 + 0x55) =
       *(ulong *)((long)puVar3 + 0x55) & 0xfe000000800000 | 0x1ffffff7fffff;
  puVar3[0xd] = 0xffffffff00000000;
  *(undefined2 *)(puVar3 + 0xf) = 0;
  puVar3[0xe] = 0;
  puVar3[0x17] = 0;
  *puVar3 = &PTR_getLoc_00117e70;
  *(undefined1 (*) [16])(puVar3 + 0x15) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  uVar4 = glslang::GetThreadPoolAllocator();
  puVar3[0x19] = 0;
  puVar3[0x18] = uVar4;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  uVar4 = glslang::GetThreadPoolAllocator();
  puVar3[0x1d] = 0;
  puVar3[0x1c] = uVar4;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  uVar4 = glslang::GetThreadPoolAllocator();
  *(undefined1 *)(puVar3 + 0x23) = 0;
  puVar3[0x20] = uVar4;
  puVar3[0x21] = puVar3 + 0x23;
  puVar3[0x22] = 0;
  *(undefined1 *)(puVar3 + 0x25) = 0;
  puVar3[0x26] = 0;
  TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)(puVar3 + 0x27));
  uVar4 = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(puVar3 + 0x2d) = 0;
  puVar3[1] = uVar4;
  puVar3[2] = uVar1;
  puVar3[3] = *(undefined8 *)(param_1 + 0x10);
  return puVar3;
}



/* glslang::TIntermediate::makeAggregate(TIntermNode*, glslang::TSourceLoc const&) */

long * __thiscall
glslang::TIntermediate::makeAggregate(TIntermediate *this,TIntermNode *param_1,TSourceLoc *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  TIntermNode *local_20;
  
  if (param_1 == (TIntermNode *)0x0) {
    return (long *)0x0;
  }
  local_20 = param_1;
  uVar2 = glslang::GetThreadPoolAllocator();
  plVar3 = (long *)glslang::TPoolAllocator::allocate(uVar2);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *(undefined4 *)(plVar3 + 3) = 0;
  *plVar3 = (long)&PTR_getLoc_00118050;
  TType::TType((TType *)(plVar3 + 4),0,0,1,0,0,0);
  *(undefined1 *)(plVar3 + 5) = 1;
  plVar3[7] = plVar3[7] & 0x8000000400000000;
  *(uint *)(plVar3 + 0x14) = *(uint *)(plVar3 + 0x14) & 0x9fc00000;
  *(byte *)(plVar3 + 8) = *(byte *)(plVar3 + 8) & 0xf0;
  plVar3[6] = 0;
  *(uint *)((long)plVar3 + 0x4c) = *(uint *)((long)plVar3 + 0x4c) & 0xffc00000 | 0x1fcfff;
  plVar3[10] = plVar3[10] | 0x7fffffffffffffff;
  *(undefined8 *)((long)plVar3 + 0x44) = 0xffffffffffffffff;
  *(undefined1 *)(plVar3 + 0xc) = 0;
  *(undefined4 *)((long)plVar3 + 0x6c) = 0xffffffff;
  plVar3[0xb] = (ulong)((uint)plVar3[0xb] & 0xfe000000) | 0x1ffffff;
  *(undefined8 *)((long)plVar3 + 100) = 0xfffff800;
  *(undefined2 *)(plVar3 + 0xf) = 0;
  plVar3[0xe] = 0;
  *(undefined1 (*) [16])(plVar3 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar3 + 0x12) = (undefined1  [16])0x0;
  *(uint *)(plVar3 + 5) =
       CONCAT22((short)((*(uint *)(plVar3 + 5) & 0xf80000ff) >> 0x10),
                CONCAT11(1,(char)(*(uint *)(plVar3 + 5) & 0xf80000ff)));
  plVar3[0x17] = 0;
  *plVar3 = (long)&PTR_getLoc_00117e70;
  *(undefined1 (*) [16])(plVar3 + 0x15) = (undefined1  [16])0x0;
  lVar4 = glslang::GetThreadPoolAllocator();
  plVar3[0x19] = 0;
  plVar3[0x18] = lVar4;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  lVar4 = glslang::GetThreadPoolAllocator();
  plVar3[0x1d] = 0;
  plVar3[0x1c] = lVar4;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  lVar4 = glslang::GetThreadPoolAllocator();
  *(undefined1 *)(plVar3 + 0x23) = 0;
  plVar3[0x20] = lVar4;
  plVar3[0x21] = (long)(plVar3 + 0x23);
  plVar3[0x22] = 0;
  *(undefined1 *)(plVar3 + 0x25) = 0;
  plVar3[0x26] = 0;
  TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)(plVar3 + 0x27));
  puVar1 = (undefined8 *)plVar3[0x1a];
  *(undefined4 *)(plVar3 + 0x2d) = 0;
  if (puVar1 == (undefined8 *)plVar3[0x1b]) {
    std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
    _M_realloc_insert<TIntermNode*const&>
              ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(plVar3 + 0x18),puVar1,
               &local_20,0x10ea52);
  }
  else {
    *puVar1 = param_1;
    plVar3[0x1a] = (long)(puVar1 + 1);
  }
  if (*(code **)(*plVar3 + 8) == TIntermNode::setLoc) {
    lVar4 = *(long *)(param_2 + 8);
    plVar3[1] = *(long *)param_2;
    plVar3[2] = lVar4;
    plVar3[3] = *(long *)(param_2 + 0x10);
    return plVar3;
  }
  (**(code **)(*plVar3 + 8))(plVar3,param_2);
  return plVar3;
}



/* glslang::TIntermediate::makeAggregate(TIntermNode*) */

long * __thiscall glslang::TIntermediate::makeAggregate(TIntermediate *this,TIntermNode *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  TIntermNode *pTVar6;
  TIntermNode *local_20;
  
  if (param_1 == (TIntermNode *)0x0) {
    return (long *)0x0;
  }
  local_20 = param_1;
  uVar3 = glslang::GetThreadPoolAllocator();
  plVar4 = (long *)glslang::TPoolAllocator::allocate(uVar3);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *(undefined4 *)(plVar4 + 3) = 0;
  *plVar4 = (long)&PTR_getLoc_00118050;
  TType::TType((TType *)(plVar4 + 4),0,0,1,0,0,0);
  *(undefined1 *)(plVar4 + 5) = 1;
  plVar4[7] = plVar4[7] & 0x8000000400000000;
  *(uint *)(plVar4 + 0x14) = *(uint *)(plVar4 + 0x14) & 0x9fc00000;
  *(byte *)(plVar4 + 8) = *(byte *)(plVar4 + 8) & 0xf0;
  plVar4[6] = 0;
  *(uint *)((long)plVar4 + 0x4c) = *(uint *)((long)plVar4 + 0x4c) & 0xffc00000 | 0x1fcfff;
  plVar4[10] = plVar4[10] | 0x7fffffffffffffff;
  *(undefined8 *)((long)plVar4 + 0x44) = 0xffffffffffffffff;
  *(undefined1 *)(plVar4 + 0xc) = 0;
  *(undefined4 *)((long)plVar4 + 0x6c) = 0xffffffff;
  plVar4[0xb] = (ulong)((uint)plVar4[0xb] & 0xfe000000) | 0x1ffffff;
  *(undefined8 *)((long)plVar4 + 100) = 0xfffff800;
  *(undefined2 *)(plVar4 + 0xf) = 0;
  plVar4[0xe] = 0;
  *(undefined1 (*) [16])(plVar4 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar4 + 0x12) = (undefined1  [16])0x0;
  *(uint *)(plVar4 + 5) =
       CONCAT22((short)((*(uint *)(plVar4 + 5) & 0xf80000ff) >> 0x10),
                CONCAT11(1,(char)(*(uint *)(plVar4 + 5) & 0xf80000ff)));
  plVar4[0x17] = 0;
  *plVar4 = (long)&PTR_getLoc_00117e70;
  *(undefined1 (*) [16])(plVar4 + 0x15) = (undefined1  [16])0x0;
  lVar5 = glslang::GetThreadPoolAllocator();
  plVar4[0x19] = 0;
  plVar4[0x18] = lVar5;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  lVar5 = glslang::GetThreadPoolAllocator();
  plVar4[0x1d] = 0;
  plVar4[0x1c] = lVar5;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  lVar5 = glslang::GetThreadPoolAllocator();
  *(undefined1 *)(plVar4 + 0x23) = 0;
  plVar4[0x20] = lVar5;
  plVar4[0x21] = (long)(plVar4 + 0x23);
  plVar4[0x22] = 0;
  *(undefined1 *)(plVar4 + 0x25) = 0;
  plVar4[0x26] = 0;
  TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)(plVar4 + 0x27));
  puVar1 = (undefined8 *)plVar4[0x1a];
  *(undefined4 *)(plVar4 + 0x2d) = 0;
  if (puVar1 == (undefined8 *)plVar4[0x1b]) {
    std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
    _M_realloc_insert<TIntermNode*const&>
              ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(plVar4 + 0x18),puVar1,
               &local_20,0x10eccf);
  }
  else {
    *puVar1 = param_1;
    plVar4[0x1a] = (long)(puVar1 + 1);
  }
  pcVar2 = *(code **)(*plVar4 + 8);
  if ((code *)**(undefined8 **)param_1 == TIntermNode::getLoc) {
    pTVar6 = param_1 + 8;
  }
  else {
    pTVar6 = (TIntermNode *)(*(code *)**(undefined8 **)param_1)(param_1);
  }
  if (pcVar2 == TIntermNode::setLoc) {
    lVar5 = *(long *)(pTVar6 + 8);
    plVar4[1] = *(long *)pTVar6;
    plVar4[2] = lVar5;
    plVar4[3] = *(long *)(pTVar6 + 0x10);
    return plVar4;
  }
  (*pcVar2)(plVar4);
  return plVar4;
}



/* glslang::TIntermediate::addShapeConversion(glslang::TType const&, glslang::TIntermTyped*) */

TIntermTyped * __thiscall
glslang::TIntermediate::addShapeConversion(TIntermediate *this,TType *param_1,TIntermTyped *param_2)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  TIntermTyped *pTVar7;
  TType *pTVar8;
  long lVar9;
  uint uVar10;
  
  if (*(code **)(*(long *)param_2 + 0xf0) == TIntermTyped::getType) {
    pTVar7 = param_2 + 0x20;
  }
  else {
    pTVar7 = (TIntermTyped *)(**(code **)(*(long *)param_2 + 0xf0))(param_2);
  }
  cVar2 = TType::operator==((TType *)pTVar7,param_1);
  if (cVar2 != '\0') {
    return param_2;
  }
  if (*(code **)(*(long *)param_2 + 0xf0) == TIntermTyped::getType) {
    pTVar7 = param_2 + 0x20;
  }
  else {
    pTVar7 = (TIntermTyped *)(**(code **)(*(long *)param_2 + 0xf0))(param_2);
  }
  if (*(code **)(*(long *)pTVar7 + 0x128) == TType::isStruct) {
    if ((byte)((char)pTVar7[8] - 0xfU) < 2) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)pTVar7 + 0x128))();
    if (cVar2 != '\0') {
      return param_2;
    }
  }
  pTVar7 = param_2 + 0x20;
  if (*(code **)(*(long *)param_2 + 0xf0) != TIntermTyped::getType) {
    pTVar7 = (TIntermTyped *)(**(code **)(*(long *)param_2 + 0xf0))(param_2);
  }
  if (*(code **)(*(long *)pTVar7 + 0xe8) == TType::isArray) {
    if (*(long *)(pTVar7 + 0x60) != 0) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)pTVar7 + 0xe8))();
    if (cVar2 != '\0') {
      return param_2;
    }
  }
  lVar9 = *(long *)param_1;
  if (*(code **)(lVar9 + 0x128) == TType::isStruct) {
    if ((byte)((char)param_1[8] - 0xfU) < 2) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar9 + 0x128))(param_1);
    if (cVar2 != '\0') {
      return param_2;
    }
    lVar9 = *(long *)param_1;
  }
  if (*(code **)(lVar9 + 0xe8) == TType::isArray) {
    if (*(long *)(param_1 + 0x60) != 0) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar9 + 0xe8))(param_1);
    if (cVar2 != '\0') {
      return param_2;
    }
    lVar9 = *(long *)param_1;
  }
  if (*(code **)(lVar9 + 0x58) == TType::getQualifier) {
    pTVar8 = param_1 + 0x10;
  }
  else {
    pTVar8 = (TType *)(**(code **)(lVar9 + 0x58))(param_1);
  }
  uVar4 = 0x243;
  if (((byte)pTVar8[0xc] & 2) == 0) {
    uVar4 = 0x245;
    if ((((byte)param_1[10] & 0x20) == 0) && (uVar4 = 0x246, ((byte)param_1[10] & 0x40) == 0)) {
      uVar4 = mapTypeToConstructorOp(param_1);
    }
  }
  if (*(code **)(*(long *)param_2 + 0xf0) == TIntermTyped::getType) {
    pTVar7 = param_2 + 0x20;
  }
  else {
    pTVar7 = (TIntermTyped *)(**(code **)(*(long *)param_2 + 0xf0))(param_2);
  }
  pcVar1 = *(code **)(*(long *)pTVar7 + 200);
  if (pcVar1 == TType::isScalarOrVec1) {
    cVar2 = (**(code **)(*(long *)pTVar7 + 0xc0))();
    if (cVar2 == '\0') {
      bVar3 = (byte)pTVar7[10] >> 4 & 1;
      goto LAB_0010f0e7;
    }
LAB_0010f258:
    if (*(code **)(*(long *)param_1 + 0xd8) == TType::isVector) {
      if (1 < ((byte)param_1[9] & 0xf)) goto LAB_0010f282;
      bVar3 = (byte)param_1[10] >> 4 & 1;
    }
    else {
      bVar3 = (**(code **)(*(long *)param_1 + 0xd8))(param_1);
    }
    if (bVar3 != 0) goto LAB_0010f282;
  }
  else {
    bVar3 = (*pcVar1)(pTVar7);
LAB_0010f0e7:
    if (bVar3 != 0) goto LAB_0010f258;
  }
  pTVar7 = param_2 + 0x20;
  if (*(code **)(*(long *)param_2 + 0xf0) != TIntermTyped::getType) {
    pTVar7 = (TIntermTyped *)(**(code **)(*(long *)param_2 + 0xf0))(param_2);
  }
  if (*(code **)(*(long *)pTVar7 + 0xd8) == TType::isVector) {
    if (((byte)pTVar7[9] & 0xf) < 2) {
      bVar3 = (byte)pTVar7[10] >> 4 & 1;
      goto LAB_0010f2fa;
    }
LAB_0010f12f:
    cVar2 = (**(code **)(*(long *)param_1 + 0xc0))(param_1);
    if (cVar2 != '\0') goto LAB_0010f282;
  }
  else {
    bVar3 = (**(code **)(*(long *)pTVar7 + 0xd8))();
LAB_0010f2fa:
    if (bVar3 != 0) goto LAB_0010f12f;
  }
  if (*(code **)(*(long *)param_2 + 0x158) == TIntermTyped::isVector) {
    if (((byte)param_2[0x29] & 0xf) < 2) {
      bVar3 = (byte)param_2[0x2a] >> 4 & 1;
      goto LAB_0010f34a;
    }
  }
  else {
    bVar3 = (**(code **)(*(long *)param_2 + 0x158))(param_2);
LAB_0010f34a:
    if (bVar3 == 0) {
      return param_2;
    }
  }
  if (*(code **)(*(long *)param_1 + 0xd8) == TType::isVector) {
    if (((byte)param_1[9] & 0xf) < 2) {
      bVar3 = (byte)param_1[10] >> 4 & 1;
      goto LAB_0010f3ce;
    }
  }
  else {
    bVar3 = (**(code **)(*(long *)param_1 + 0xd8))(param_1);
LAB_0010f3ce:
    if (bVar3 == 0) {
      return param_2;
    }
  }
  if (*(code **)(*(long *)param_2 + 0x130) == TIntermTyped::getVectorSize) {
    uVar10 = (byte)param_2[0x29] & 0xf;
  }
  else {
    uVar10 = (**(code **)(*(long *)param_2 + 0x130))(param_2);
  }
  if (*(code **)(*(long *)param_1 + 0x60) == TType::getVectorSize) {
    uVar5 = (byte)param_1[9] & 0xf;
  }
  else {
    uVar5 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
  }
  if ((int)uVar10 <= (int)uVar5) {
    return param_2;
  }
LAB_0010f282:
  pTVar7 = param_2 + 8;
  if ((code *)**(undefined8 **)param_2 != TIntermNode::getLoc) {
    pTVar7 = (TIntermTyped *)(*(code *)**(undefined8 **)param_2)(param_2);
  }
  uVar6 = makeAggregate(this,(TIntermNode *)param_2);
  pTVar7 = (TIntermTyped *)setAggregateOperator(this,uVar6,uVar4,param_1,pTVar7);
  return pTVar7;
}



/* glslang::TIntermediate::growAggregate(TIntermNode*, TIntermNode*) */

long * __thiscall
glslang::TIntermediate::growAggregate(TIntermediate *this,TIntermNode *param_1,TIntermNode *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *pvVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  TIntermNode *local_c8;
  TIntermNode *local_c0;
  TType local_b8 [8];
  undefined4 local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long local_48;
  long lStack_40;
  undefined4 local_38;
  long local_30;
  long lStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = param_2;
  local_c0 = param_1;
  if (param_1 == (TIntermNode *)0x0) {
    if (param_2 == (TIntermNode *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_0010f494;
    }
LAB_0010f4c9:
    uVar2 = glslang::GetThreadPoolAllocator();
    plVar1 = (long *)glslang::TPoolAllocator::allocate(uVar2);
    plVar1[1] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    plVar1[2] = 0;
    *plVar1 = (long)&PTR_getLoc_00118050;
    uVar2 = 0;
    TType::TType((TType *)(plVar1 + 4),0,0,1,0,0,0);
    TType::TType(local_b8,1,0,1,0,0,uVar2 & 0xffffffff00000000);
    *(undefined4 *)(plVar1 + 0x14) = local_38;
    plVar1[6] = local_a8;
    plVar1[7] = lStack_a0;
    plVar1[8] = local_98;
    plVar1[9] = lStack_90;
    plVar1[10] = local_88;
    plVar1[0xb] = lStack_80;
    *(uint *)(plVar1 + 5) = *(uint *)(plVar1 + 5) & 0xffe00000 | local_b0 & 0x1fffff;
    plVar1[0xc] = local_78;
    plVar1[0xd] = lStack_70;
    plVar1[0xe] = local_68;
    plVar1[0xf] = lStack_60;
    plVar1[0x12] = local_48;
    plVar1[0x13] = lStack_40;
    plVar1[0x10] = local_58;
    plVar1[0x17] = 0;
    plVar1[0x11] = local_50;
    plVar1[0x15] = local_30;
    plVar1[0x16] = lStack_28;
    *(ushort *)((long)plVar1 + 0x2a) =
         *(ushort *)((long)plVar1 + 0x2a) & 0xf81f | local_b0._2_2_ & 0x7e0;
    *plVar1 = (long)&PTR_getLoc_00117e70;
    lVar3 = glslang::GetThreadPoolAllocator();
    plVar1[0x19] = 0;
    plVar1[0x18] = lVar3;
    plVar1[0x1a] = 0;
    plVar1[0x1b] = 0;
    lVar3 = glslang::GetThreadPoolAllocator();
    plVar1[0x1d] = 0;
    plVar1[0x1c] = lVar3;
    plVar1[0x1e] = 0;
    plVar1[0x1f] = 0;
    lVar3 = glslang::GetThreadPoolAllocator();
    *(undefined1 *)(plVar1 + 0x23) = 0;
    plVar1[0x20] = lVar3;
    plVar1[0x21] = (long)(plVar1 + 0x23);
    plVar1[0x22] = 0;
    *(undefined1 *)(plVar1 + 0x25) = 0;
    plVar1[0x26] = 0;
    TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)(plVar1 + 0x27));
    *(undefined4 *)(plVar1 + 0x2d) = 0;
    if (param_1 != (TIntermNode *)0x0) {
      puVar5 = (undefined8 *)plVar1[0x1a];
      if (puVar5 == (undefined8 *)plVar1[0x1b]) {
        std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
        _M_realloc_insert<TIntermNode*const&>
                  ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(plVar1 + 0x18),
                   puVar5,&local_c0);
      }
      else {
        *puVar5 = param_1;
        plVar1[0x1a] = (long)(puVar5 + 1);
      }
    }
  }
  else {
    plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x30))(param_1);
    if ((plVar1 == (long *)0x0) || ((int)plVar1[0x17] != 0)) goto LAB_0010f4c9;
  }
  if (param_2 == (TIntermNode *)0x0) goto LAB_0010f494;
  if (*(code **)(*plVar1 + 400) == TIntermAggregate::getSequence) {
    pvVar4 = (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(plVar1 + 0x18);
    puVar5 = (undefined8 *)plVar1[0x1a];
    if (puVar5 == (undefined8 *)plVar1[0x1b]) {
LAB_0010f6f6:
      std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
      _M_realloc_insert<TIntermNode*const&>(pvVar4,puVar5,&local_c8);
      goto LAB_0010f494;
    }
  }
  else {
    pvVar4 = (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)
             (**(code **)(*plVar1 + 400))(plVar1);
    puVar5 = *(undefined8 **)(pvVar4 + 0x10);
    if (puVar5 == *(undefined8 **)(pvVar4 + 0x18)) goto LAB_0010f6f6;
  }
  *puVar5 = param_2;
  *(undefined8 **)(pvVar4 + 0x10) = puVar5 + 1;
LAB_0010f494:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::growAggregate(TIntermNode*, TIntermNode*, glslang::TSourceLoc const&) */

long * __thiscall
glslang::TIntermediate::growAggregate
          (TIntermediate *this,TIntermNode *param_1,TIntermNode *param_2,TSourceLoc *param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)growAggregate(this,param_1,param_2);
  if (plVar2 != (long *)0x0) {
    if (*(code **)(*plVar2 + 8) != TIntermNode::setLoc) {
      (**(code **)(*plVar2 + 8))(plVar2,param_3);
      return plVar2;
    }
    lVar1 = *(long *)(param_3 + 8);
    plVar2[1] = *(long *)param_3;
    plVar2[2] = lVar1;
    plVar2[3] = *(long *)(param_3 + 0x10);
  }
  return plVar2;
}



/* glslang::TIntermediate::addSymbolLinkageNode(glslang::TIntermAggregate*&, glslang::TSymbol
   const&) */

void __thiscall
glslang::TIntermediate::addSymbolLinkageNode
          (TIntermediate *this,TIntermAggregate **param_1,TSymbol *param_2)

{
  TVariable *pTVar1;
  TIntermNode *pTVar2;
  TIntermAggregate *pTVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar1 = (TVariable *)(**(code **)(*(long *)param_2 + 0x50))(param_2);
  if (pTVar1 == (TVariable *)0x0) {
    plVar4 = (long *)(**(code **)(*(long *)param_2 + 0x58))(param_2);
    if (*(code **)(*plVar4 + 0xb0) == TAnonMember::getAnonContainer) {
      pTVar1 = (TVariable *)plVar4[5];
    }
    else {
      pTVar1 = (TVariable *)(**(code **)(*plVar4 + 0xb0))();
    }
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  pTVar2 = (TIntermNode *)addSymbol(this,pTVar1,(TSourceLoc *)&local_38);
  pTVar3 = (TIntermAggregate *)growAggregate(this,(TIntermNode *)*param_1,pTVar2);
  *param_1 = pTVar3;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addSymbolLinkageNode(glslang::TIntermAggregate*&, glslang::TSymbolTable&,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&)
    */

void __thiscall
glslang::TIntermediate::addSymbolLinkageNode
          (TIntermediate *this,TIntermAggregate **param_1,TSymbolTable *param_2,
          basic_string *param_3)

{
  long *plVar1;
  long lVar2;
  void *__s2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  TSymbol *pTVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  
  lVar2 = *(long *)param_2;
  lVar8 = (long)((int)(*(long *)(param_2 + 8) - lVar2 >> 3) + -2);
  do {
    lVar11 = *(long *)(lVar2 + 8 + lVar8 * 8);
    plVar12 = *(long **)(lVar11 + 0x18);
    plVar1 = (long *)(lVar11 + 0x10);
    if (plVar12 == (long *)0x0) {
LAB_0010f981:
      bVar13 = true;
    }
    else {
      __s2 = *(void **)(param_3 + 8);
      uVar3 = *(ulong *)(param_3 + 0x10);
      plVar10 = plVar1;
      do {
        while( true ) {
          uVar4 = plVar12[6];
          uVar9 = uVar3;
          if (uVar4 <= uVar3) {
            uVar9 = uVar4;
          }
          if (uVar9 != 0) break;
LAB_0010f8fc:
          lVar11 = uVar4 - uVar3;
          if (lVar11 < 0x80000000) {
            if (-0x80000001 < lVar11) {
              iVar6 = (int)lVar11;
              goto LAB_0010f916;
            }
            goto LAB_0010f8d0;
          }
LAB_0010f91a:
          plVar5 = (long *)plVar12[2];
          plVar10 = plVar12;
          plVar12 = plVar5;
          if (plVar5 == (long *)0x0) goto LAB_0010f926;
        }
        iVar6 = memcmp((void *)plVar12[5],__s2,uVar9);
        if (iVar6 == 0) goto LAB_0010f8fc;
LAB_0010f916:
        if (-1 < iVar6) goto LAB_0010f91a;
LAB_0010f8d0:
        plVar12 = (long *)plVar12[3];
      } while (plVar12 != (long *)0x0);
LAB_0010f926:
      bVar13 = true;
      if (plVar1 != plVar10) {
        uVar4 = plVar10[6];
        uVar9 = uVar3;
        if (uVar4 <= uVar3) {
          uVar9 = uVar4;
        }
        if (uVar9 == 0) {
LAB_0010f960:
          lVar11 = uVar3 - uVar4;
          if (lVar11 < 0x80000000) {
            if (lVar11 < -0x80000000) goto LAB_0010f981;
            iVar6 = (int)lVar11;
            goto LAB_0010f97d;
          }
        }
        else {
          iVar6 = memcmp(__s2,(void *)plVar10[5],uVar9);
          if (iVar6 == 0) goto LAB_0010f960;
LAB_0010f97d:
          if (iVar6 < 0) goto LAB_0010f981;
        }
        plVar12 = (long *)plVar10[9];
        bVar13 = plVar12 == (long *)0x0;
      }
    }
    uVar3 = (ulong)lVar8 >> 0x18;
    lVar8 = lVar8 + -1;
    if ((bVar13 & (byte)~(byte)uVar3 >> 7) == 0) {
      if (plVar12 != (long *)0x0) {
        pTVar7 = (TSymbol *)(**(code **)(*plVar12 + 0x48))(plVar12);
        addSymbolLinkageNode(this,param_1,pTVar7);
        return;
      }
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TIntermediate::addSymbolLinkageNodes(glslang::TIntermAggregate*&, EShLanguage,
   glslang::TSymbolTable&) */

void __thiscall
glslang::TIntermediate::addSymbolLinkageNodes
          (TIntermediate *this,TIntermAggregate **param_1,int param_3,TSymbolTable *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 **__s2;
  undefined1 *puVar5;
  long lVar6;
  TIntermNode *pTVar7;
  TIntermediate *pTVar8;
  TIntermediate *pTVar9;
  TIntermediate *pTVar10;
  long in_FS_OFFSET;
  undefined1 *local_70;
  undefined1 **local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) goto LAB_0010fa1f;
  local_68 = (undefined1 **)glslang::GetThreadPoolAllocator();
  local_60 = local_50;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_68,"gl_VertexID");
  addSymbolLinkageNode(this,param_1,param_4,(basic_string *)&local_68);
  if (*(int *)(this + 100) < 0x8c) {
    local_70 = (undefined1 *)0x15;
    local_68 = &local_58;
    __s2 = (undefined1 **)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
    puVar2 = local_70;
    puVar1 = _UNK_00118278;
    local_58 = local_70;
    *__s2 = __LC29;
    __s2[1] = puVar1;
    *(undefined8 *)((long)__s2 + 0xd) = 0x6465636e6174736e;
    local_60 = local_70;
    *(undefined1 *)((long)__s2 + (long)local_70) = 0;
    pTVar10 = *(TIntermediate **)(this + 0x98);
    pTVar8 = this + 0x90;
    local_68 = __s2;
    if (pTVar10 == (TIntermediate *)0x0) {
LAB_0010fcd0:
      __s2 = local_68;
      if (*(int *)(this + 100) < 0x8c) {
        if (local_68 != &local_58) {
          operator_delete(local_68,(ulong)(local_58 + 1));
        }
        goto LAB_0010fa1f;
      }
    }
    else {
      do {
        puVar1 = *(undefined1 **)(pTVar10 + 0x28);
        puVar5 = puVar2;
        if (puVar1 <= puVar2) {
          puVar5 = puVar1;
        }
        if ((puVar5 == (undefined1 *)0x0) ||
           (iVar3 = memcmp(*(void **)(pTVar10 + 0x20),__s2,(size_t)puVar5), iVar3 == 0)) {
          lVar6 = (long)puVar1 - (long)puVar2;
          if (0x7fffffff < lVar6) goto LAB_0010fc31;
          if (-0x80000001 < lVar6) {
            iVar3 = (int)lVar6;
            goto LAB_0010fc2d;
          }
LAB_0010fbe0:
          pTVar9 = *(TIntermediate **)(pTVar10 + 0x18);
        }
        else {
LAB_0010fc2d:
          if (iVar3 < 0) goto LAB_0010fbe0;
LAB_0010fc31:
          pTVar9 = *(TIntermediate **)(pTVar10 + 0x10);
          pTVar8 = pTVar10;
        }
        pTVar10 = pTVar9;
      } while (pTVar9 != (TIntermediate *)0x0);
      if (this + 0x90 == pTVar8) goto LAB_0010fcd0;
      puVar1 = *(undefined1 **)(pTVar8 + 0x28);
      puVar5 = puVar2;
      if (puVar1 <= puVar2) {
        puVar5 = puVar1;
      }
      if ((puVar5 == (undefined1 *)0x0) ||
         (iVar3 = memcmp(__s2,*(void **)(pTVar8 + 0x20),(size_t)puVar5), iVar3 == 0)) {
        lVar6 = (long)puVar2 - (long)puVar1;
        if (lVar6 < 0x80000000) {
          if (lVar6 < -0x80000000) goto LAB_0010fcd0;
          iVar3 = (int)lVar6;
          goto LAB_0010fc9f;
        }
      }
      else {
LAB_0010fc9f:
        if (iVar3 < 0) goto LAB_0010fcd0;
      }
    }
    if (__s2 != &local_58) {
      operator_delete(__s2,(ulong)(local_58 + 1));
    }
  }
  local_68 = (undefined1 **)glslang::GetThreadPoolAllocator();
  local_60 = local_50;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_68,"gl_InstanceID");
  addSymbolLinkageNode(this,param_1,param_4,(basic_string *)&local_68);
LAB_0010fa1f:
  pTVar7 = (TIntermNode *)*param_1;
  if (*(code **)(*(long *)pTVar7 + 0x188) == TIntermAggregate::setOperator) {
    *(undefined4 *)(pTVar7 + 0xb8) = 3;
  }
  else {
    (**(code **)(*(long *)pTVar7 + 0x188))(pTVar7,3);
    pTVar7 = (TIntermNode *)*param_1;
  }
  uVar4 = growAggregate(this,*(TIntermNode **)(this + 0x80),pTVar7);
  *(undefined8 *)(this + 0x80) = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TIntermediate::addForLoop(TIntermNode*, TIntermNode*, glslang::TIntermTyped*,
   glslang::TIntermTyped*, bool, glslang::TSourceLoc const&, glslang::TIntermLoop*&) */

long * __thiscall
glslang::TIntermediate::addForLoop
          (TIntermediate *this,TIntermNode *param_1,TIntermNode *param_2,TIntermTyped *param_3,
          TIntermTyped *param_4,bool param_5,TSourceLoc *param_6,TIntermLoop **param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  TIntermLoop *pTVar4;
  long lVar5;
  TIntermNode *pTVar6;
  long *plVar7;
  
  uVar3 = glslang::GetThreadPoolAllocator();
  pTVar4 = (TIntermLoop *)glslang::TPoolAllocator::allocate(uVar3);
  uVar2 = _UNK_00118268;
  uVar1 = __LC14;
  *(undefined8 *)(pTVar4 + 0x10) = 0;
  *(undefined4 *)(pTVar4 + 0x18) = 0;
  *(undefined8 *)(pTVar4 + 8) = 0;
  *(undefined8 *)(pTVar4 + 0x4c) = 0;
  *(undefined8 *)(pTVar4 + 0x3c) = uVar1;
  *(undefined8 *)(pTVar4 + 0x44) = uVar2;
  uVar1 = *(undefined8 *)param_6;
  uVar2 = *(undefined8 *)(param_6 + 8);
  *(code **)pTVar4 = glslang::PropagateNoContraction;
  *(undefined2 *)(pTVar4 + 0x39) = 0;
  *(TIntermNode **)(pTVar4 + 0x20) = param_1;
  *(TIntermTyped **)(pTVar4 + 0x28) = param_3;
  *(TIntermTyped **)(pTVar4 + 0x30) = param_4;
  pTVar4[0x38] = (TIntermLoop)param_5;
  *param_7 = pTVar4;
  *(undefined8 *)(pTVar4 + 8) = uVar1;
  *(undefined8 *)(pTVar4 + 0x10) = uVar2;
  *(undefined8 *)(pTVar4 + 0x18) = *(undefined8 *)(param_6 + 0x10);
  if (param_2 != (TIntermNode *)0x0) {
    lVar5 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
    if (lVar5 != 0) {
      pTVar6 = (TIntermNode *)(**(code **)(*(long *)param_2 + 0x30))(param_2);
      goto LAB_0010fdea;
    }
  }
  pTVar6 = (TIntermNode *)makeAggregate(this,param_2,param_6);
LAB_0010fdea:
  if ((pTVar6 != (TIntermNode *)0x0) && (*(int *)(pTVar6 + 0xb8) - 1U < 2)) {
    *(undefined4 *)(pTVar6 + 0xb8) = 0;
  }
  plVar7 = (long *)growAggregate(this,pTVar6,(TIntermNode *)*param_7);
  if (*(code **)(*plVar7 + 0x188) == TIntermAggregate::setOperator) {
    *(uint *)(plVar7 + 0x17) = (byte)this[0x270] + 1;
    return plVar7;
  }
  (**(code **)(*plVar7 + 0x188))(plVar7);
  return plVar7;
}



/* glslang::TIntermediate::addSelection(glslang::TIntermTyped*, glslang::TIntermTyped*,
   glslang::TIntermTyped*, glslang::TSourceLoc const&) */

TIntermNode * __thiscall
glslang::TIntermediate::addSelection
          (TIntermediate *this,TIntermTyped *param_1,TIntermTyped *param_2,TIntermTyped *param_3,
          TSourceLoc *param_4)

{
  TIntermNode TVar1;
  TIntermNode TVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  TIntermNode *pTVar11;
  ulong uVar12;
  TIntermAggregate *this_00;
  TIntermNode *pTVar13;
  TType *pTVar14;
  TType *pTVar15;
  TIntermTyped *pTVar16;
  TIntermNode *pTVar17;
  byte bVar18;
  uint uVar19;
  long in_FS_OFFSET;
  undefined8 uStack_100;
  TIntermNode *local_e8;
  TIntermNode *local_e0;
  TType local_d8 [8];
  undefined4 local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long local_68;
  long lStack_60;
  undefined4 local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_2 + 0x100) == TIntermTyped::getBasicType) {
    uVar19 = (uint)(byte)param_2[0x28];
  }
  else {
    uVar19 = (**(code **)(*(long *)param_2 + 0x100))(param_2);
  }
  if (uVar19 == 0) {
    if (*(code **)(*(long *)param_3 + 0x100) == TIntermTyped::getBasicType) {
      uVar19 = (uint)(byte)param_3[0x28];
    }
    else {
      uVar19 = (**(code **)(*(long *)param_3 + 0x100))(param_3);
    }
    if (uVar19 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pTVar13 = (TIntermNode *)addSelection(this,param_1,param_2,param_3,param_4);
        return pTVar13;
      }
      goto LAB_0011086a;
    }
  }
  addPairConversion(&local_e8,this,1,param_2,param_3);
  if ((local_e0 == (TIntermNode *)0x0) || (local_e8 == (TIntermNode *)0x0)) {
LAB_0011005f:
    local_e8 = (TIntermNode *)0x0;
  }
  else {
    if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
      pTVar16 = param_1 + 0x20;
    }
    else {
      pTVar16 = (TIntermTyped *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
    }
    pcVar4 = *(code **)(*(long *)pTVar16 + 200);
    if (pcVar4 == TType::isScalarOrVec1) {
      cVar7 = (**(code **)(*(long *)pTVar16 + 0xc0))();
      if (cVar7 == '\0') {
        bVar8 = (byte)pTVar16[10] >> 4 & 1;
        goto LAB_0010ff92;
      }
LAB_00110090:
      if (*(code **)(*(long *)local_e0 + 0xf0) == TIntermTyped::getType) {
        pTVar15 = (TType *)(local_e0 + 0x20);
      }
      else {
        pTVar15 = (TType *)(**(code **)(*(long *)local_e0 + 0xf0))(local_e0);
      }
      if (*(code **)(*(long *)local_e8 + 0xf0) == TIntermTyped::getType) {
        pTVar14 = (TType *)(local_e8 + 0x20);
      }
      else {
        pTVar14 = (TType *)(**(code **)(*(long *)local_e8 + 0xf0))(local_e8);
      }
      cVar7 = TType::operator==(pTVar14,pTVar15);
      if (cVar7 == '\0') goto LAB_0011005f;
      lVar10 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
      if (((lVar10 == 0) ||
          (lVar10 = (**(code **)(*(long *)local_e0 + 0x28))(local_e0), lVar10 == 0)) ||
         (lVar10 = (**(code **)(*(long *)local_e8 + 0x28))(local_e8), lVar10 == 0)) {
        uVar12 = glslang::GetThreadPoolAllocator();
        uStack_100 = 0x110142;
        pTVar11 = (TIntermNode *)glslang::TPoolAllocator::allocate(uVar12);
        pTVar13 = local_e0 + 0x20;
        if (*(code **)(*(long *)local_e0 + 0xf0) != TIntermTyped::getType) {
          uStack_100 = 0x110805;
          pTVar13 = (TIntermNode *)(**(code **)(*(long *)local_e0 + 0xf0))(local_e0);
        }
        *(undefined ***)pTVar11 = &PTR_getLoc_00118050;
        *(long *)(pTVar11 + 8) = 0;
        *(long *)(pTVar11 + 0x10) = 0;
        *(undefined4 *)(pTVar11 + 0x18) = 0;
        TType::TType((TType *)(pTVar11 + 0x20),0,0,1,0,0);
        lVar10 = *(long *)(pTVar13 + 0x18);
        TVar1 = pTVar13[8];
        uVar3 = *(undefined4 *)(pTVar13 + 0x80);
        *(long *)(pTVar11 + 0x30) = *(long *)(pTVar13 + 0x10);
        *(long *)(pTVar11 + 0x38) = lVar10;
        lVar10 = *(long *)(pTVar13 + 0x20);
        lVar5 = *(long *)(pTVar13 + 0x28);
        *(undefined4 *)(pTVar11 + 0xa0) = uVar3;
        *(long *)(pTVar11 + 0x40) = lVar10;
        *(long *)(pTVar11 + 0x48) = lVar5;
        lVar10 = *(long *)(pTVar13 + 0x30);
        lVar5 = *(long *)(pTVar13 + 0x38);
        pTVar11[0x28] = TVar1;
        *(long *)(pTVar11 + 0x50) = lVar10;
        *(long *)(pTVar11 + 0x58) = lVar5;
        lVar10 = *(long *)(pTVar13 + 0x48);
        *(long *)(pTVar11 + 0x60) = *(long *)(pTVar13 + 0x40);
        *(long *)(pTVar11 + 0x68) = lVar10;
        lVar10 = *(long *)(pTVar13 + 0x58);
        *(long *)(pTVar11 + 0x70) = *(long *)(pTVar13 + 0x50);
        *(long *)(pTVar11 + 0x78) = lVar10;
        TVar1 = pTVar13[9];
        pTVar11[0x29] = (TIntermNode)((byte)pTVar11[0x29] & 0xf0 | (byte)TVar1 & 0xf);
        pTVar11[0x29] = (TIntermNode)((byte)TVar1 & 0xf | (byte)pTVar13[9] & 0xf0);
        TVar1 = pTVar11[0x2a];
        bVar8 = (byte)pTVar13[10] & 0xf;
        pTVar11[0x2a] = (TIntermNode)((byte)TVar1 & 0xf0 | bVar8);
        bVar18 = (byte)pTVar13[10] & 0x10;
        pTVar11[0x2a] = (TIntermNode)((byte)TVar1 & 0xe0 | bVar8 | bVar18);
        lVar10 = *(long *)(pTVar13 + 0x70);
        lVar5 = *(long *)(pTVar13 + 0x78);
        *(long *)(pTVar11 + 0x80) = *(long *)(pTVar13 + 0x60);
        *(long *)(pTVar11 + 0x90) = lVar10;
        *(long *)(pTVar11 + 0x98) = lVar5;
        *(long *)(pTVar11 + 0x88) = *(long *)(pTVar13 + 0x68);
        lVar10 = *(long *)(pTVar13 + 0x90);
        *(long *)(pTVar11 + 0xa8) = *(long *)(pTVar13 + 0x88);
        *(long *)(pTVar11 + 0xb0) = lVar10;
        TVar2 = pTVar13[10];
        pTVar11[0x2a] = (TIntermNode)((byte)TVar1 & 0xc0 | bVar8 | bVar18 | (byte)TVar2 & 0x20);
        pTVar11[0x2a] =
             (TIntermNode)
             ((byte)TVar1 & 0x80 | bVar8 | bVar18 | (byte)TVar2 & 0x20 | (byte)pTVar13[10] & 0x40);
        *(ushort *)(pTVar11 + 0x2a) =
             *(ushort *)(pTVar11 + 0x2a) & 0xfc7f | *(ushort *)(pTVar13 + 10) & 0x380;
        TVar1 = pTVar13[0xb];
        *(TIntermTyped **)(pTVar11 + 0xb8) = param_1;
        *(TIntermNode **)(pTVar11 + 0xc0) = local_e0;
        *(TIntermNode **)(pTVar11 + 200) = local_e8;
        *(undefined2 *)(pTVar11 + 0xd0) = 1;
        pTVar11[0xd2] = (TIntermNode)0x0;
        pTVar11[0x2b] = (TIntermNode)((byte)pTVar11[0x2b] & 0xfb | (byte)TVar1 & 4);
        lVar10 = *(long *)param_4;
        lVar5 = *(long *)(param_4 + 8);
        *(undefined **)pTVar11 = &TIntermConstantUnion::vtable;
        *(long *)(pTVar11 + 8) = lVar10;
        *(long *)(pTVar11 + 0x10) = lVar5;
        *(long *)(pTVar11 + 0x18) = *(long *)(param_4 + 0x10);
        if (*(code **)(*(long *)local_e8 + 0x108) == TIntermTyped::getQualifier) {
          pTVar13 = local_e8 + 0x30;
        }
        else {
          pTVar13 = (TIntermNode *)
                    (**(code **)(*(long *)local_e8 + 0x108))(local_e8,uStack_100,(byte)TVar1 & 4,0);
        }
        bVar8 = (byte)pTVar13[0xb] >> 1 & 7;
        if (*(code **)(*(long *)local_e0 + 0x108) == TIntermTyped::getQualifier) {
          pTVar13 = local_e0 + 0x30;
        }
        else {
          pTVar13 = (TIntermNode *)(**(code **)(*(long *)local_e0 + 0x108))(local_e0);
        }
        pTVar17 = pTVar11 + 0x30;
        bVar18 = (byte)pTVar13[0xb] >> 1 & 7;
        if (bVar8 <= bVar18) {
          bVar8 = bVar18;
        }
        if (*(code **)(*(long *)pTVar11 + 0x108) != TIntermTyped::getQualifier) {
          pTVar17 = (TIntermNode *)(**(code **)(*(long *)pTVar11 + 0x108))(pTVar11);
        }
        pTVar17[0xb] = (TIntermNode)((byte)pTVar17[0xb] & 0xf1 | bVar8 * '\x02');
        if (*(code **)(*(long *)param_1 + 0x108) == TIntermTyped::getQualifier) {
          pTVar16 = param_1 + 0x30;
        }
        else {
          pTVar16 = (TIntermTyped *)(**(code **)(*(long *)param_1 + 0x108))(param_1);
        }
        if (((((byte)pTVar16[8] & 0x7f) == 2) || (((byte)pTVar16[0xc] & 1) != 0)) &&
           (cVar7 = specConstantPropagates(this,(TIntermTyped *)local_e0,(TIntermTyped *)local_e8),
           cVar7 != '\0')) {
LAB_001106cf:
          pTVar13 = pTVar11 + 0x30;
          if (*(code **)(*(long *)pTVar11 + 0x108) != TIntermTyped::getQualifier) {
            pTVar13 = (TIntermNode *)(**(code **)(*(long *)pTVar11 + 0x108))(pTVar11);
          }
          *(ulong *)(pTVar13 + 8) = *(ulong *)(pTVar13 + 8) & 0xfffffffeffffff80 | 0x100000002;
          local_e8 = pTVar11;
        }
        else {
          pTVar16 = param_1 + 0x30;
          if (*(code **)(*(long *)param_1 + 0x108) != TIntermTyped::getQualifier) {
            pTVar16 = (TIntermTyped *)(**(code **)(*(long *)param_1 + 0x108))(param_1);
          }
          if (((byte)pTVar16[0xc] & 1) != 0) {
            if (*(code **)(*(long *)local_e0 + 0x108) == TIntermTyped::getQualifier) {
              local_e0 = local_e0 + 0x30;
            }
            else {
              local_e0 = (TIntermNode *)(**(code **)(*(long *)local_e0 + 0x108))(local_e0);
            }
            if ((((byte)local_e0[8] & 0x7f) == 2) || (((byte)local_e0[0xc] & 1) != 0)) {
              if (*(code **)(*(long *)local_e8 + 0x108) == TIntermTyped::getQualifier) {
                local_e8 = local_e8 + 0x30;
              }
              else {
                local_e8 = (TIntermNode *)(**(code **)(*(long *)local_e8 + 0x108))(local_e8);
              }
              if ((((byte)local_e8[8] & 0x7f) == 2) || (((byte)local_e8[0xc] & 1) != 0))
              goto LAB_001106cf;
            }
          }
          if (*(code **)(*(long *)pTVar11 + 0x108) == TIntermTyped::getQualifier) {
            pTVar13 = pTVar11 + 0x30;
          }
          else {
            pTVar13 = (TIntermNode *)(**(code **)(*(long *)pTVar11 + 0x108))(pTVar11);
          }
          pTVar13[0x10] = (TIntermNode)((byte)pTVar13[0x10] & 0xf0);
          *(undefined8 *)(pTVar13 + 0x14) = 0xffffffffffffffff;
          pTVar13[0x30] = (TIntermNode)0x0;
          *(undefined4 *)(pTVar13 + 0x34) = 0xfffff800;
          *(uint *)(pTVar13 + 0x1c) = *(uint *)(pTVar13 + 0x1c) & 0xffc00000 | 0x1fcfff;
          *(ulong *)(pTVar13 + 0x20) = *(ulong *)(pTVar13 + 0x20) | 0x7fffffffffffffff;
          *(long *)(pTVar13 + 0x38) = -0x100000000;
          *(long *)(pTVar13 + 0x40) = 0;
          *(long *)pTVar13 = 0;
          *(ulong *)(pTVar13 + 0x28) =
               (ulong)((uint)*(long *)(pTVar13 + 0x28) & 0xfe000000) | 0x1ffffff;
          *(undefined2 *)(pTVar13 + 0x48) = 0;
          *(ulong *)(pTVar13 + 8) = *(ulong *)(pTVar13 + 8) & 0x800000141fff0000;
          local_e8 = pTVar11;
        }
      }
      else {
        lVar10 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
        if (**(char **)(*(long *)(lVar10 + 0xc0) + 8) != '\0') {
          local_e8 = local_e0;
        }
      }
    }
    else {
      bVar8 = (*pcVar4)(pTVar16);
LAB_0010ff92:
      if (bVar8 != 0) goto LAB_00110090;
      if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
        pTVar16 = param_1 + 0x20;
      }
      else {
        pTVar16 = (TIntermTyped *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
      }
      if (*(code **)(*(long *)pTVar16 + 0x60) == TType::getVectorSize) {
        uVar19 = (byte)pTVar16[9] & 0xf;
      }
      else {
        uVar19 = (**(code **)(*(long *)pTVar16 + 0x60))();
      }
      if (*(code **)(*(long *)local_e0 + 0xf0) == TIntermTyped::getType) {
        pTVar13 = local_e0 + 0x20;
      }
      else {
        pTVar13 = (TIntermNode *)(**(code **)(*(long *)local_e0 + 0xf0))(local_e0);
      }
      if (*(code **)(*(long *)pTVar13 + 0x38) == TType::getBasicType) {
        uVar9 = (uint)(byte)pTVar13[8];
      }
      else {
        uVar9 = (**(code **)(*(long *)pTVar13 + 0x38))();
      }
      TType::TType(local_d8,uVar9,0,uVar19,0,0);
      if (*(code **)(*(long *)local_e0 + 0xf0) == TIntermTyped::getType) {
        pTVar15 = (TType *)(local_e0 + 0x20);
      }
      else {
        pTVar15 = (TType *)(**(code **)(*(long *)local_e0 + 0xf0))(local_e0);
      }
      if (*(code **)(*(long *)local_e8 + 0xf0) == TIntermTyped::getType) {
        pTVar14 = (TType *)(local_e8 + 0x20);
      }
      else {
        pTVar14 = (TType *)(**(code **)(*(long *)local_e8 + 0xf0))(local_e8);
      }
      cVar7 = TType::operator==(pTVar14,pTVar15);
      if (cVar7 == '\0') goto LAB_0011005f;
      uVar12 = glslang::GetThreadPoolAllocator();
      this_00 = (TIntermAggregate *)glslang::TPoolAllocator::allocate(uVar12);
      TIntermAggregate::TIntermAggregate(this_00);
      uVar6 = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)(this_00 + 8) = *(undefined8 *)param_4;
      *(undefined8 *)(this_00 + 0x10) = uVar6;
      *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)(param_4 + 0x10);
      pTVar13 = (TIntermNode *)growAggregate(this,(TIntermNode *)this_00,local_e8);
      pTVar13 = (TIntermNode *)growAggregate(this,pTVar13,local_e0);
      local_e8 = (TIntermNode *)growAggregate(this,pTVar13,(TIntermNode *)param_1);
      if (*(code **)(*(long *)local_e8 + 0xe8) == TIntermTyped::setType) {
        *(long *)(local_e8 + 0x30) = local_c8;
        *(long *)(local_e8 + 0x38) = lStack_c0;
        *(undefined4 *)(local_e8 + 0xa0) = local_58;
        *(long *)(local_e8 + 0x40) = local_b8;
        *(long *)(local_e8 + 0x48) = lStack_b0;
        *(long *)(local_e8 + 0x50) = local_a8;
        *(long *)(local_e8 + 0x58) = lStack_a0;
        *(long *)(local_e8 + 0x60) = local_98;
        *(long *)(local_e8 + 0x68) = lStack_90;
        *(uint *)(local_e8 + 0x28) = *(uint *)(local_e8 + 0x28) & 0xffe00000 | local_d0 & 0x1fffff;
        *(long *)(local_e8 + 0x70) = local_88;
        *(long *)(local_e8 + 0x78) = lStack_80;
        *(long *)(local_e8 + 0x80) = local_78;
        *(long *)(local_e8 + 0x90) = local_68;
        *(long *)(local_e8 + 0x98) = lStack_60;
        *(long *)(local_e8 + 0x88) = local_70;
        *(long *)(local_e8 + 0xa8) = local_50;
        *(long *)(local_e8 + 0xb0) = lStack_48;
        *(ushort *)(local_e8 + 0x2a) =
             *(ushort *)(local_e8 + 0x2a) & 0xf81f | local_d0._2_2_ & 0x7e0;
      }
      else {
        (**(code **)(*(long *)local_e8 + 0xe8))(local_e8,local_d8);
      }
      *(undefined4 *)(local_e8 + 0xb8) = 0xdd;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e8;
  }
LAB_0011086a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TIntermediate::addComma(glslang::TIntermTyped*, glslang::TIntermTyped*,
   glslang::TSourceLoc const&) */

long * __thiscall
glslang::TIntermediate::addComma
          (TIntermediate *this,TIntermTyped *param_1,TIntermTyped *param_2,TSourceLoc *param_3)

{
  TIntermTyped TVar1;
  byte bVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  TIntermTyped *pTVar10;
  byte bVar11;
  byte bVar12;
  
  plVar7 = (long *)growAggregate(this,(TIntermNode *)param_1,(TIntermNode *)param_2);
  lVar8 = _DAT_00000000;
  if (plVar7 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar7 + 8);
    if (pcVar4 == TIntermNode::setLoc) {
      lVar8 = *(long *)(param_3 + 8);
      plVar7[1] = *(long *)param_3;
      plVar7[2] = lVar8;
      plVar7[3] = *(long *)(param_3 + 0x10);
      lVar8 = *plVar7;
    }
    else {
      (*pcVar4)(plVar7,param_3);
      lVar8 = *plVar7;
    }
  }
  plVar9 = (long *)(**(code **)(lVar8 + 0x30))(plVar7);
  if (*(code **)(*plVar9 + 0x188) == TIntermAggregate::setOperator) {
    *(undefined4 *)(plVar9 + 0x17) = 0xae;
  }
  else {
    (**(code **)(*plVar9 + 0x188))(plVar9,0xae);
  }
  pcVar4 = *(code **)(*plVar7 + 0xe8);
  if (*(code **)(*(long *)param_2 + 0xf0) == TIntermTyped::getType) {
    pTVar10 = param_2 + 0x20;
  }
  else {
    pTVar10 = (TIntermTyped *)(**(code **)(*(long *)param_2 + 0xf0))(param_2);
  }
  if (pcVar4 == TIntermTyped::setType) {
    lVar8 = *(long *)(pTVar10 + 0x18);
    TVar1 = pTVar10[8];
    uVar3 = *(undefined4 *)(pTVar10 + 0x80);
    plVar7[6] = *(long *)(pTVar10 + 0x10);
    plVar7[7] = lVar8;
    lVar8 = *(long *)(pTVar10 + 0x20);
    lVar5 = *(long *)(pTVar10 + 0x28);
    *(undefined4 *)(plVar7 + 0x14) = uVar3;
    plVar7[8] = lVar8;
    plVar7[9] = lVar5;
    lVar8 = *(long *)(pTVar10 + 0x30);
    lVar5 = *(long *)(pTVar10 + 0x38);
    *(TIntermTyped *)(plVar7 + 5) = TVar1;
    plVar7[10] = lVar8;
    plVar7[0xb] = lVar5;
    lVar8 = *(long *)(pTVar10 + 0x48);
    plVar7[0xc] = *(long *)(pTVar10 + 0x40);
    plVar7[0xd] = lVar8;
    lVar8 = *(long *)(pTVar10 + 0x58);
    plVar7[0xe] = *(long *)(pTVar10 + 0x50);
    plVar7[0xf] = lVar8;
    TVar1 = pTVar10[9];
    *(byte *)((long)plVar7 + 0x29) = *(byte *)((long)plVar7 + 0x29) & 0xf0 | (byte)TVar1 & 0xf;
    *(byte *)((long)plVar7 + 0x29) = (byte)TVar1 & 0xf | (byte)pTVar10[9] & 0xf0;
    bVar2 = *(byte *)((long)plVar7 + 0x2a);
    bVar11 = (byte)pTVar10[10] & 0xf;
    *(byte *)((long)plVar7 + 0x2a) = bVar2 & 0xf0 | bVar11;
    bVar12 = (byte)pTVar10[10] & 0x10;
    *(byte *)((long)plVar7 + 0x2a) = bVar2 & 0xe0 | bVar11 | bVar12;
    lVar5 = *(long *)(pTVar10 + 0x70);
    lVar6 = *(long *)(pTVar10 + 0x78);
    plVar7[0x10] = *(long *)(pTVar10 + 0x60);
    lVar8 = *(long *)(pTVar10 + 0x68);
    plVar7[0x12] = lVar5;
    plVar7[0x13] = lVar6;
    plVar7[0x11] = lVar8;
    lVar8 = *(long *)(pTVar10 + 0x90);
    plVar7[0x15] = *(long *)(pTVar10 + 0x88);
    plVar7[0x16] = lVar8;
    TVar1 = pTVar10[10];
    *(byte *)((long)plVar7 + 0x2a) = bVar2 & 0xc0 | bVar11 | bVar12 | (byte)TVar1 & 0x20;
    *(byte *)((long)plVar7 + 0x2a) =
         bVar2 & 0x80 | bVar11 | bVar12 | (byte)TVar1 & 0x20 | (byte)pTVar10[10] & 0x40;
    *(ushort *)((long)plVar7 + 0x2a) =
         *(ushort *)((long)plVar7 + 0x2a) & 0xfc7f | *(ushort *)(pTVar10 + 10) & 0x380;
    *(byte *)((long)plVar7 + 0x2b) = *(byte *)((long)plVar7 + 0x2b) & 0xfb | (byte)pTVar10[0xb] & 4;
  }
  else {
    (*pcVar4)(plVar7);
  }
  if (*(code **)(*plVar7 + 0xf8) == TIntermTyped::getWritableType) {
    plVar9 = plVar7 + 4;
  }
  else {
    plVar9 = (long *)(**(code **)(*plVar7 + 0xf8))(plVar7);
  }
  if (*(code **)(*plVar9 + 0x50) == TType::getQualifier) {
    plVar9 = plVar9 + 2;
  }
  else {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x50))();
  }
  *(byte *)(plVar9 + 2) = *(byte *)(plVar9 + 2) & 0xf0;
  *(undefined8 *)((long)plVar9 + 0x14) = 0xffffffffffffffff;
  *(undefined1 *)(plVar9 + 6) = 0;
  *(undefined4 *)((long)plVar9 + 0x34) = 0xfffff800;
  *(uint *)((long)plVar9 + 0x1c) = *(uint *)((long)plVar9 + 0x1c) & 0xffc00000 | 0x1fcfff;
  plVar9[4] = plVar9[4] | 0x7fffffffffffffff;
  plVar9[7] = -0x100000000;
  plVar9[8] = 0;
  *plVar9 = 0;
  plVar9[5] = (ulong)((uint)plVar9[5] & 0xfe000000) | 0x1ffffff;
  *(undefined2 *)(plVar9 + 9) = 0;
  plVar9[1] = plVar9[1] & 0x800000141fff0000;
  return plVar7;
}



/* glslang::TIntermediate::mergeAggregate(TIntermNode*, TIntermNode*) */

long * __thiscall
glslang::TIntermediate::mergeAggregate
          (TIntermediate *this,TIntermNode *param_1,TIntermNode *param_2)

{
  undefined8 *__src;
  undefined8 *__dest;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *pvVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  size_t __n;
  size_t __n_00;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  TIntermNode *local_e8;
  TIntermNode *local_e0;
  TType local_d8 [8];
  undefined4 local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long local_68;
  long lStack_60;
  undefined4 local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = param_2;
  local_e0 = param_1;
  if (param_1 == (TIntermNode *)0x0) {
    if (param_2 == (TIntermNode *)0x0) {
      plVar3 = (long *)0x0;
      goto LAB_00110d1a;
    }
LAB_00110d59:
    uVar10 = glslang::GetThreadPoolAllocator();
    plVar3 = (long *)glslang::TPoolAllocator::allocate(uVar10);
    plVar3[1] = 0;
    *(undefined4 *)(plVar3 + 3) = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_getLoc_00118050;
    uVar10 = 0;
    TType::TType((TType *)(plVar3 + 4),0,0,1,0,0,0);
    TType::TType(local_d8,1,0,1,0,0,uVar10 & 0xffffffff00000000);
    *(undefined4 *)(plVar3 + 0x14) = local_58;
    plVar3[6] = local_c8;
    plVar3[7] = lStack_c0;
    plVar3[8] = local_b8;
    plVar3[9] = lStack_b0;
    plVar3[10] = local_a8;
    plVar3[0xb] = lStack_a0;
    *(uint *)(plVar3 + 5) = *(uint *)(plVar3 + 5) & 0xffe00000 | local_d0 & 0x1fffff;
    plVar3[0xc] = local_98;
    plVar3[0xd] = lStack_90;
    plVar3[0xe] = local_88;
    plVar3[0xf] = lStack_80;
    plVar3[0x12] = local_68;
    plVar3[0x13] = lStack_60;
    plVar3[0x10] = local_78;
    plVar3[0x17] = 0;
    plVar3[0x11] = local_70;
    plVar3[0x15] = local_50;
    plVar3[0x16] = lStack_48;
    *(ushort *)((long)plVar3 + 0x2a) =
         *(ushort *)((long)plVar3 + 0x2a) & 0xf81f | local_d0._2_2_ & 0x7e0;
    *plVar3 = (long)&PTR_getLoc_00117e70;
    lVar7 = glslang::GetThreadPoolAllocator();
    plVar3[0x19] = 0;
    plVar3[0x18] = lVar7;
    plVar3[0x1a] = 0;
    plVar3[0x1b] = 0;
    lVar7 = glslang::GetThreadPoolAllocator();
    plVar3[0x1d] = 0;
    plVar3[0x1c] = lVar7;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
    lVar7 = glslang::GetThreadPoolAllocator();
    *(undefined1 *)(plVar3 + 0x23) = 0;
    plVar3[0x20] = lVar7;
    plVar3[0x21] = (long)(plVar3 + 0x23);
    plVar3[0x22] = 0;
    *(undefined1 *)(plVar3 + 0x25) = 0;
    plVar3[0x26] = 0;
    TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)(plVar3 + 0x27));
    *(undefined4 *)(plVar3 + 0x2d) = 0;
    if (param_1 != (TIntermNode *)0x0) {
      puVar9 = (undefined8 *)plVar3[0x1a];
      if (puVar9 == (undefined8 *)plVar3[0x1b]) {
        std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
        _M_realloc_insert<TIntermNode*const&>
                  ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(plVar3 + 0x18),
                   puVar9,&local_e0);
      }
      else {
        *puVar9 = param_1;
        plVar3[0x1a] = (long)(puVar9 + 1);
      }
    }
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x30))(param_1);
    if ((plVar3 == (long *)0x0) || ((int)plVar3[0x17] != 0)) goto LAB_00110d59;
  }
  plVar4 = (long *)(**(code **)(*(long *)param_2 + 0x30))(param_2);
  if ((plVar4 == (long *)0x0) || ((int)plVar4[0x17] != 0)) {
    if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
      pvVar5 = (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(plVar3 + 0x18);
      puVar9 = (undefined8 *)plVar3[0x1a];
      if (puVar9 == (undefined8 *)plVar3[0x1b]) {
LAB_00111096:
        std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
        _M_realloc_insert<TIntermNode*const&>(pvVar5,puVar9,&local_e8);
        goto LAB_00110d1a;
      }
    }
    else {
      pvVar5 = (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)
               (**(code **)(*plVar3 + 400))(plVar3);
      puVar9 = *(undefined8 **)(pvVar5 + 0x10);
      if (puVar9 == *(undefined8 **)(pvVar5 + 0x18)) goto LAB_00111096;
    }
    *puVar9 = param_2;
    *(undefined8 **)(pvVar5 + 0x10) = puVar9 + 1;
    goto LAB_00110d1a;
  }
  if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
    puVar6 = (ulong *)(plVar3 + 0x18);
  }
  else {
    puVar6 = (ulong *)(**(code **)(*plVar3 + 400))(plVar3);
  }
  if (*(code **)(*plVar4 + 400) == TIntermAggregate::getSequence) {
    puVar9 = (undefined8 *)plVar4[0x1a];
LAB_00110c14:
    plVar4 = plVar4 + 0x18;
  }
  else {
    lVar7 = (**(code **)(*plVar4 + 400))(plVar4);
    puVar9 = *(undefined8 **)(lVar7 + 0x10);
    if (*(code **)(*plVar4 + 400) == TIntermAggregate::getSequence) goto LAB_00110c14;
    plVar4 = (long *)(**(code **)(*plVar4 + 400))(plVar4);
  }
  __src = (undefined8 *)plVar4[1];
  if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
    plVar4 = plVar3 + 0x18;
  }
  else {
    plVar4 = (long *)(**(code **)(*plVar3 + 400))(plVar3);
  }
  __dest = (undefined8 *)plVar4[2];
  puVar1 = (undefined8 *)puVar6[1];
  if (__src == puVar9) goto LAB_00110d1a;
  puVar2 = (undefined8 *)puVar6[2];
  uVar8 = (long)puVar9 - (long)__src;
  uVar10 = (long)uVar8 >> 3;
  if (uVar8 <= puVar6[3] - (long)puVar2) {
    uVar12 = (long)puVar2 - (long)__dest;
    if (uVar8 < uVar12) {
      __n_00 = 0;
      do {
        *(undefined8 *)((long)puVar2 + __n_00) = *(undefined8 *)((long)puVar2 + (__n_00 - uVar8));
        __n_00 = __n_00 + 8;
      } while (uVar8 != __n_00);
      __n = (long)puVar2 + (-(long)__dest - uVar8);
      puVar6[2] = (long)puVar2 + uVar8;
      if ((long)__n < 9) {
        if (__n == 8) {
          puVar2[-1] = *__dest;
        }
      }
      else {
        memmove((void *)((long)puVar2 - __n),__dest,__n);
      }
      uVar12 = uVar8;
      if (8 < (long)uVar8) {
        memmove(__dest,__src,__n_00);
        goto LAB_00110d1a;
      }
    }
    else {
      puVar1 = (undefined8 *)((long)__src + uVar12);
      lVar7 = 0;
      if (puVar9 != puVar1) {
        do {
          *(undefined8 *)((long)puVar2 + lVar7) = *(undefined8 *)((long)puVar1 + lVar7);
          lVar7 = lVar7 + 8;
        } while ((long)puVar9 - (long)puVar1 != lVar7);
      }
      lVar11 = uVar10 - ((long)uVar12 >> 3);
      lVar7 = 0;
      if (__dest != puVar2) {
        do {
          *(undefined8 *)((long)puVar2 + lVar7 + lVar11 * 8) = *(undefined8 *)((long)__dest + lVar7)
          ;
          lVar7 = lVar7 + 8;
        } while (lVar7 != (long)puVar2 - (long)__dest);
      }
      puVar6[2] = (long)puVar2 + uVar12 + lVar11 * 8;
      if (8 < (long)uVar12) {
        memmove(__dest,__src,uVar12);
        goto LAB_00110d1a;
      }
    }
    if (uVar12 == 8) {
      *__dest = *__src;
    }
    goto LAB_00110d1a;
  }
  uVar12 = (long)puVar2 - (long)puVar1 >> 3;
  if (0xfffffffffffffff - uVar12 < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_range_insert");
  }
  if ((ulong)((long)puVar2 - (long)puVar1) < uVar8) {
    uVar10 = uVar10 + uVar12;
LAB_00110fe3:
    if (uVar10 != 0) {
      if (0xfffffffffffffff < uVar10) {
        uVar10 = 0xfffffffffffffff;
      }
      lVar7 = uVar10 * 8;
      goto LAB_00110fb3;
    }
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = 0x7ffffffffffffff8;
    uVar10 = uVar12 * 2;
    if (uVar12 <= uVar10) goto LAB_00110fe3;
LAB_00110fb3:
    uVar8 = glslang::TPoolAllocator::allocate(*puVar6);
    uVar10 = uVar8 + lVar7;
  }
  uVar12 = uVar8;
  if (__dest != puVar1) {
    lVar7 = 0;
    do {
      *(undefined8 *)(uVar8 + lVar7) = *(undefined8 *)((long)puVar1 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != (long)__dest - (long)puVar1);
    uVar12 = lVar7 + uVar8;
  }
  lVar7 = 0;
  do {
    *(undefined8 *)(uVar12 + lVar7) = *(undefined8 *)((long)__src + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != (long)puVar9 - (long)__src);
  uVar12 = uVar12 + lVar7;
  if (__dest != puVar2) {
    lVar7 = 0;
    do {
      *(undefined8 *)(uVar12 + lVar7) = *(undefined8 *)((long)__dest + lVar7);
      lVar7 = lVar7 + 8;
    } while ((long)puVar2 - (long)__dest != lVar7);
    uVar12 = uVar12 + ((long)puVar2 - (long)__dest);
  }
  puVar6[1] = uVar8;
  puVar6[2] = uVar12;
  puVar6[3] = uVar10;
LAB_00110d1a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar3;
}



/* glslang::TIntermediate::mergeAggregate(TIntermNode*, TIntermNode*, glslang::TSourceLoc const&) */

long * __thiscall
glslang::TIntermediate::mergeAggregate
          (TIntermediate *this,TIntermNode *param_1,TIntermNode *param_2,TSourceLoc *param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)mergeAggregate(this,param_1,param_2);
  if (plVar2 != (long *)0x0) {
    if (*(code **)(*plVar2 + 8) != TIntermNode::setLoc) {
      (**(code **)(*plVar2 + 8))(plVar2,param_3);
      return plVar2;
    }
    lVar1 = *(long *)(param_3 + 8);
    plVar2[1] = *(long *)param_3;
    plVar2[2] = lVar1;
    plVar2[3] = *(long *)(param_3 + 0x10);
  }
  return plVar2;
}



/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
  return;
}



/* glslang::TType::hideMember() */

void __thiscall glslang::TType::hideMember(TType *this)

{
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xf000 | 0x100;
  return;
}



/* glslang::TType::hiddenMember() const */

bool __thiscall glslang::TType::hiddenMember(TType *this)

{
  return this[8] == (TType)0x0;
}



/* glslang::TType::getTypeName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getTypeName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x78);
}



/* glslang::TType::getFieldName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getFieldName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x70);
}



/* glslang::TType::getBasicType() const */

TType __thiscall glslang::TType::getBasicType(TType *this)

{
  return this[8];
}



/* glslang::TType::getSampler() const */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getSampler() */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getQualifier() */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getQualifier() const */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getVectorSize() const */

byte __thiscall glslang::TType::getVectorSize(TType *this)

{
  return (byte)this[9] & 0xf;
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



/* glslang::TType::getOuterArraySize() const */

undefined4 __thiscall glslang::TType::getOuterArraySize(TType *this)

{
  return **(undefined4 **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
}



/* glslang::TType::getOuterArrayNode() const */

undefined8 __thiscall glslang::TType::getOuterArrayNode(TType *this)

{
  return *(undefined8 *)(*(long *)(*(long *)(*(long *)(this + 0x60) + 8) + 8) + 8);
}



/* glslang::TType::getImplicitArraySize() const */

int __thiscall glslang::TType::getImplicitArraySize(TType *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



/* glslang::TType::getArraySizes() const */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getArraySizes() */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getReferentType() const */

undefined8 __thiscall glslang::TType::getReferentType(TType *this)

{
  return *(undefined8 *)(this + 0x68);
}



/* glslang::TType::getTypeParameters() const */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::getTypeParameters() */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::isVector() const */

byte __thiscall glslang::TType::isVector(TType *this)

{
  if (1 < ((byte)this[9] & 0xf)) {
    return 1;
  }
  return (byte)this[10] >> 4 & 1;
}



/* glslang::TType::isMatrix() const */

bool __thiscall glslang::TType::isMatrix(TType *this)

{
  return 0xf < (byte)this[9];
}



/* glslang::TType::isArray() const */

bool __thiscall glslang::TType::isArray(TType *this)

{
  return *(long *)(this + 0x60) != 0;
}



/* glslang::TType::isArrayVariablyIndexed() const */

undefined1 __thiscall glslang::TType::isArrayVariablyIndexed(TType *this)

{
  return *(undefined1 *)(*(long *)(this + 0x60) + 0x15);
}



/* glslang::TType::setArrayVariablyIndexed() */

void __thiscall glslang::TType::setArrayVariablyIndexed(TType *this)

{
  *(undefined1 *)(*(long *)(this + 0x60) + 0x15) = 1;
  return;
}



/* glslang::TType::updateImplicitArraySize(int) */

void __thiscall glslang::TType::updateImplicitArraySize(TType *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < param_1) {
    iVar1 = param_1;
  }
  *(int *)(*(long *)(this + 0x60) + 0x10) = iVar1;
  return;
}



/* glslang::TType::setImplicitlySized(bool) */

void __thiscall glslang::TType::setImplicitlySized(TType *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0x60) + 0x14) = param_1;
  return;
}



/* glslang::TType::isStruct() const */

undefined4 __thiscall glslang::TType::isStruct(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 0xf >> 8),(byte)((byte)this[8] - 0xf) < 2);
}



/* glslang::TType::isFloatingDomain() const */

undefined4 __thiscall glslang::TType::isFloatingDomain(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 1 >> 8),(byte)((byte)this[8] - 1) < 3);
}



/* glslang::TType::isIntegerDomain() const */

bool __thiscall glslang::TType::isIntegerDomain(TType *this)

{
  TType TVar1;
  
  TVar1 = this[8];
  if ((byte)TVar1 < 0xc) {
    return 3 < (byte)TVar1;
  }
  return TVar1 == (TType)0xd;
}



/* glslang::TType::isOpaque() const */

undefined8 __thiscall glslang::TType::isOpaque(TType *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((byte)this[8] < 0x15) {
    uVar1 = CONCAT71(0x1a60,(0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0);
  }
  return uVar1;
}



/* glslang::TType::isParameterized() const */

bool __thiscall glslang::TType::isParameterized(TType *this)

{
  return *(long *)(this + 0x88) != 0;
}



/* glslang::TConstUnionArray::~TConstUnionArray() */

void __thiscall glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this)

{
  return;
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



/* glslang::TIntermSymbol::getId() const */

undefined8 __thiscall glslang::TIntermSymbol::getId(TIntermSymbol *this)

{
  return *(undefined8 *)(this + 0xb8);
}



/* glslang::TIntermSymbol::getName[abi:cxx11]() const */

TIntermSymbol * __thiscall glslang::TIntermSymbol::getName_abi_cxx11_(TIntermSymbol *this)

{
  return this + 200;
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



/* glslang::TIntermAggregate::getAsAggregate() */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getAsAggregate(TIntermAggregate *this)

{
  return this;
}



/* glslang::TIntermAggregate::getAsAggregate() const */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getAsAggregate(TIntermAggregate *this)

{
  return this;
}



/* glslang::TIntermAggregate::setOperator(glslang::TOperator) */

void __thiscall glslang::TIntermAggregate::setOperator(TIntermAggregate *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb8) = param_2;
  return;
}



/* glslang::TIntermAggregate::getSequence() */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
}



/* glslang::TIntermAggregate::getSequence() const */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
}



/* glslang::TIntermAggregate::getName[abi:cxx11]() const */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getName_abi_cxx11_(TIntermAggregate *this)

{
  return this + 0x100;
}



/* glslang::TIntermAggregate::setUserDefined() */

void __thiscall glslang::TIntermAggregate::setUserDefined(TIntermAggregate *this)

{
  this[0x128] = (TIntermAggregate)0x1;
  return;
}



/* glslang::TIntermAggregate::isUserDefined() */

TIntermAggregate __thiscall glslang::TIntermAggregate::isUserDefined(TIntermAggregate *this)

{
  return this[0x128];
}



/* glslang::TIntermAggregate::getQualifierList() */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getQualifierList(TIntermAggregate *this)

{
  return this + 0xe0;
}



/* glslang::TIntermAggregate::getQualifierList() const */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getQualifierList(TIntermAggregate *this)

{
  return this + 0xe0;
}



/* glslang::TIntermSelection::getTrueBlock() const */

undefined8 __thiscall glslang::TIntermSelection::getTrueBlock(TIntermSelection *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermSelection::getFalseBlock() const */

undefined8 __thiscall glslang::TIntermSelection::getFalseBlock(TIntermSelection *this)

{
  return *(undefined8 *)(this + 200);
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



/* glslang::TSymbol::getName[abi:cxx11]() const */

undefined8 __thiscall glslang::TSymbol::getName_abi_cxx11_(TSymbol *this)

{
  return *(undefined8 *)(this + 8);
}



/* glslang::TSymbol::getUniqueId() const */

undefined8 __thiscall glslang::TSymbol::getUniqueId(TSymbol *this)

{
  return *(undefined8 *)(this + 0x10);
}



/* glslang::TVariable::getType() const */

TVariable * __thiscall glslang::TVariable::getType(TVariable *this)

{
  return this + 0x28;
}



/* glslang::TVariable::getConstArray() const */

TVariable * __thiscall glslang::TVariable::getConstArray(TVariable *this)

{
  return this + 200;
}



/* glslang::TVariable::getConstSubtree() const */

undefined8 __thiscall glslang::TVariable::getConstSubtree(TVariable *this)

{
  return *(undefined8 *)(this + 0xd8);
}



/* glslang::TAnonMember::getAnonContainer() const */

undefined8 __thiscall glslang::TAnonMember::getAnonContainer(TAnonMember *this)

{
  return *(undefined8 *)(this + 0x28);
}



/* glslang::TextureUpgradeAndSamplerRemovalTransform::~TextureUpgradeAndSamplerRemovalTransform() */

void __thiscall
glslang::TextureUpgradeAndSamplerRemovalTransform::~TextureUpgradeAndSamplerRemovalTransform
          (TextureUpgradeAndSamplerRemovalTransform *this)

{
  return;
}



/* glslang::TType::isBuiltIn() const */

bool __thiscall glslang::TType::isBuiltIn(TType *this)

{
  long lVar1;
  
  if (*(code **)(*(long *)this + 0x58) == getQualifier) {
    return 0x7f < *(ushort *)(this + 0x18);
  }
  lVar1 = (**(code **)(*(long *)this + 0x58))();
  return 0x7f < *(ushort *)(lVar1 + 8);
}



/* glslang::TType::isAttachmentEXT() const */

bool __thiscall glslang::TType::isAttachmentEXT(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x8;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\b';
}



/* glslang::TType::isImage() const */

undefined4 __thiscall glslang::TType::isImage(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar3 = (**(code **)(*(long *)this + 0x40))();
      uVar2 = 0;
      if ((*(byte *)(lVar3 + 2) & 8) != 0) {
        iVar1 = *(byte *)(lVar3 + 1) - 7;
        uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1 < (byte)iVar1);
      }
      return uVar2;
    }
    if (((byte)this[0x82] & 8) != 0) {
      return CONCAT31((int3)((byte)this[0x81] - 7 >> 8),1 < (byte)((byte)this[0x81] - 7));
    }
  }
  return 0;
}



/* glslang::TType::isSubpass() const */

bool __thiscall glslang::TType::isSubpass(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x7;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\a';
}



/* glslang::TType::isTexture() const */

byte __thiscall glslang::TType::isTexture(TType *this)

{
  byte bVar1;
  long lVar2;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar2 = (**(code **)(*(long *)this + 0x40))();
      if ((*(byte *)(lVar2 + 2) & 0x20) == 0) {
        bVar1 = *(byte *)(lVar2 + 2) >> 3 & 1 ^ 1;
      }
      else {
        bVar1 = 0;
      }
      return bVar1;
    }
    if (((byte)this[0x82] & 0x20) == 0) {
      return (byte)this[0x82] >> 3 & 1 ^ 1;
    }
  }
  return 0;
}



/* glslang::TextureUpgradeAndSamplerRemovalTransform::visitSymbol(glslang::TIntermSymbol*) */

void __thiscall
glslang::TextureUpgradeAndSamplerRemovalTransform::visitSymbol
          (TextureUpgradeAndSamplerRemovalTransform *this,TIntermSymbol *param_1)

{
  uint uVar1;
  TIntermSymbol *pTVar2;
  
  if (*(code **)(*(long *)param_1 + 0x100) == TIntermTyped::getBasicType) {
    uVar1 = (uint)(byte)param_1[0x28];
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1 + 0x100))(param_1);
  }
  if (uVar1 == 0xe) {
    if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
      pTVar2 = param_1 + 0x20;
    }
    else {
      pTVar2 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
    }
    if (*(code **)(*(long *)pTVar2 + 0x40) == TType::getSampler) {
      pTVar2 = pTVar2 + 0x80;
    }
    else {
      pTVar2 = (TIntermSymbol *)(**(code **)(*(long *)pTVar2 + 0x40))();
    }
    if ((((byte)pTVar2[2] & 0x20) == 0) && (((byte)pTVar2[2] & 8) == 0)) {
      if (*(code **)(*(long *)param_1 + 0xf8) == TIntermTyped::getWritableType) {
        pTVar2 = param_1 + 0x20;
      }
      else {
        pTVar2 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
      }
      if (*(code **)(*(long *)pTVar2 + 0x48) == TType::getSampler) {
        pTVar2 = pTVar2 + 0x80;
      }
      else {
        pTVar2 = (TIntermSymbol *)(**(code **)(*(long *)pTVar2 + 0x48))();
      }
      pTVar2[2] = (TIntermSymbol)((byte)pTVar2[2] | 0x10);
      return;
    }
  }
  return;
}



/* glslang::TType::isSizedArray() const */

undefined4 __thiscall glslang::TType::isSizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2;
}



/* glslang::TType::isUnsizedArray() const */

undefined4 __thiscall glslang::TType::isUnsizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  return uVar2;
}



/* glslang::TType::isImplicitlySizedArray() const */

undefined1 __thiscall glslang::TType::isImplicitlySizedArray(TType *this)

{
  undefined1 uVar1;
  char cVar2;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar2 == '\0') {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  return uVar1;
}



/* glslang::TType::isScalarOrVector() const */

uint __thiscall glslang::TType::isScalarOrVector(TType *this)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (*(code **)(lVar3 + 0xe0) == isMatrix) {
    if (0xf < (byte)this[9]) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0xe0))();
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0x128))(this);
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0xe8) == isArray) {
    uVar2 = (uint)CONCAT71(0x1114,*(long *)(this + 0x60) != 0);
  }
  else {
    uVar2 = (**(code **)(lVar3 + 0xe8))(this);
  }
  return uVar2 ^ 1;
}



/* glslang::TType::isScalar() const */

uint __thiscall glslang::TType::isScalar(TType *this)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  
  if (*(code **)(*(long *)this + 0xd8) == isVector) {
    if (1 < ((byte)this[9] & 0xf)) {
      return 0;
    }
    bVar1 = (byte)this[10] >> 4 & 1;
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0xd8))();
  }
  if (bVar1 == 0) {
    lVar4 = *(long *)this;
    if (*(code **)(lVar4 + 0xe0) == isMatrix) {
      if (0xf < (byte)this[9]) {
        return 0;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe0))(this);
      if (cVar2 != '\0') {
        return 0;
      }
      lVar4 = *(long *)this;
    }
    if (*(code **)(lVar4 + 0x128) == isStruct) {
      if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_00112921:
        if (*(code **)(lVar4 + 0xe8) == isArray) {
          uVar3 = (uint)CONCAT71(0x1114,*(long *)(this + 0x60) != 0);
        }
        else {
          uVar3 = (**(code **)(lVar4 + 0xe8))(this);
        }
        return uVar3 ^ 1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(this);
      if (cVar2 == '\0') {
        lVar4 = *(long *)this;
        goto LAB_00112921;
      }
    }
  }
  return 0;
}



/* glslang::TType::isUnusableName() const */

bool __thiscall glslang::TType::isUnusableName(TType *this)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if (1 < (byte)((char)this[8] - 0xfU)) {
      return false;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x128))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return *(long *)(this + 0x68) == 0;
}



/* glslang::TType::getCumulativeArraySize() const */

int __thiscall glslang::TType::getCumulativeArraySize(TType *this)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = *(long *)(*(long *)(this + 0x60) + 8);
  if (lVar2 != 0) {
    piVar3 = *(int **)(lVar2 + 8);
    iVar4 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar3 >> 4);
    if (0 < iVar4) {
      piVar1 = piVar3 + (ulong)(iVar4 - 1) * 4 + 4;
      iVar4 = 1;
      do {
        iVar4 = iVar4 * *piVar3;
        piVar3 = piVar3 + 4;
      } while (piVar3 != piVar1);
      return iVar4;
    }
  }
  return 1;
}



/* glslang::TType::isBindlessTexture() const */

TType __thiscall glslang::TType::isBindlessTexture(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x168);
  if (pcVar1 == isTexture) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 0x20) == 0) && (((byte)pTVar3[2] & 8) == 0)) {
        return this[0x58];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x58];
    }
  }
  return (TType)0x0;
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



/* glslang::TType::isBindlessImage() const */

TType __thiscall glslang::TType::isBindlessImage(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x158);
  if (pcVar1 == isImage) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 8) != 0) && (1 < (byte)((char)pTVar3[1] - 7U))) {
        return this[0x59];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x59];
    }
  }
  return (TType)0x0;
}



/* glslang::TIntermAggregate::~TIntermAggregate() */

void __thiscall glslang::TIntermAggregate::~TIntermAggregate(TIntermAggregate *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR_getLoc_00117e70;
  if ((*(long *)(this + 0x130) != 0) &&
     (lVar1 = *(long *)(*(long *)(this + 0x130) + 0x18), lVar1 != 0)) {
    do {
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
      ::_M_erase(*(_Rb_tree_node **)(lVar1 + 0x18));
      lVar1 = *(long *)(lVar1 + 0x10);
    } while (lVar1 != 0);
    return;
  }
  return;
}



/* glslang::TIntermAggregate::~TIntermAggregate() */

void __thiscall glslang::TIntermAggregate::~TIntermAggregate(TIntermAggregate *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR_getLoc_00117e70;
  if ((*(long *)(this + 0x130) != 0) &&
     (lVar1 = *(long *)(*(long *)(this + 0x130) + 0x18), lVar1 != 0)) {
    do {
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
      ::_M_erase(*(_Rb_tree_node **)(lVar1 + 0x18));
      lVar1 = *(long *)(lVar1 + 0x10);
    } while (lVar1 != 0);
    return;
  }
  return;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (0 < lVar6 >> 7) {
    plVar7 = param_1 + (lVar6 >> 7) * 0x10;
    do {
      plVar2 = (long *)*param_1;
      bVar1 = *(byte *)(plVar2 + 1);
      if (bVar1 < 0xd) {
        return param_1;
      }
      if (bVar1 == 0x12) {
        return param_1;
      }
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00112f5d:
          lVar6 = *(long *)(plVar2[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar6);
          if (lVar6 != lVar5) {
            return param_1;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00112f5d;
      }
      plVar2 = (long *)param_1[4];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_00112e5f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00112f9d:
          lVar6 = *(long *)(plVar2[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar6);
          if (lVar6 != lVar5) {
LAB_00112e5f:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00112f9d;
      }
      plVar2 = (long *)param_1[8];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_00112e9f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00112fcd:
          lVar6 = *(long *)(plVar2[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar6);
          if (lVar6 != lVar5) {
LAB_00112e9f:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00112fcd;
      }
      plVar2 = (long *)param_1[0xc];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_00112edf;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_00112ffd:
          lVar6 = *(long *)(plVar2[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar6);
          if (lVar6 != lVar5) {
LAB_00112edf:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_00112ffd;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar7);
    lVar6 = (long)param_2 - (long)param_1;
  }
  lVar6 = lVar6 >> 5;
  if (lVar6 != 2) {
    if (lVar6 != 3) {
      if (lVar6 != 1) {
        return param_2;
      }
      goto LAB_00113047;
    }
    bVar4 = glslang::TType::
            contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar4) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar4 = glslang::TType::
          contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar4) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_00113047:
  bVar4 = glslang::TType::
          contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar4) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsNonOpaque() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsNonOpaque() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  
  bVar1 = *(byte *)(param_1 + 1);
  if ((bVar1 < 0xd) || (bVar1 == 0x12)) {
    return true;
  }
  if (*(code **)(*param_1 + 0x128) == isStruct) {
    if ((byte)(bVar1 - 0xf) < 2) {
LAB_001130b8:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x128))();
    if (cVar3 != '\0') goto LAB_001130b8;
  }
  return false;
}



/* glslang::TType::containsNonOpaque() const */

ulong __thiscall glslang::TType::containsNonOpaque(TType *this)

{
  TType TVar1;
  long lVar2;
  char cVar3;
  undefined1 auVar4 [16];
  
  TVar1 = this[8];
  if (((byte)TVar1 < 0xd) || (TVar1 == (TType)0x12)) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)TVar1 - 0xfU) < 2) {
LAB_00113140:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar4 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return CONCAT71(auVar4._9_7_,lVar2 != auVar4._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))();
    if (cVar3 != '\0') goto LAB_00113140;
  }
  return 0;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113395:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113395;
      }
      plVar1 = (long *)param_1[4];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0011331a;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0011331a;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001132fd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0011331a:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001132fd;
      }
      plVar1 = (long *)param_1[8];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0011334a;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0011334a;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011332d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0011334a:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011332d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0011337a;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0011337a;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011335d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0011337a:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011335d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_0011348c;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_0011348c:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsArray() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsArray() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    if (param_1[0xc] != 0) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_001134f1:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_001134f1;
  }
  return false;
}



/* glslang::TType::containsArray() const */

bool __thiscall glslang::TType::containsArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) != 0) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00113589:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00113589;
  }
  return false;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::setFieldName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall glslang::TType::setFieldName(TType *this,basic_string *param_1)

{
  char *__s;
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  
  __s = *(char **)(param_1 + 8);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar1);
  uVar3 = glslang::GetThreadPoolAllocator();
  *puVar2 = uVar3;
  puVar2[1] = puVar2 + 3;
  if (__s != (char *)0x0) {
    sVar4 = strlen(__s);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(puVar2,__s,__s + sVar4);
    *(undefined8 **)(this + 0x70) = puVar2;
    return;
  }
  std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0 < lVar7 >> 7) {
    puVar8 = param_1 + (lVar7 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      pcVar2 = *(code **)(*plVar1 + 0x148);
      if (pcVar2 == glslang::TType::isBuiltIn) {
        pcVar2 = *(code **)(*plVar1 + 0x58);
        if (pcVar2 == glslang::TType::getQualifier) {
          plVar6 = plVar1 + 2;
        }
        else {
          plVar6 = (long *)(*pcVar2)(plVar1);
        }
        if (0x7f < *(ushort *)(plVar6 + 1)) {
          return param_1;
        }
      }
      else {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 != '\0') {
          return param_1;
        }
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001138e5:
          lVar7 = *(long *)(plVar1[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar7);
          if (lVar7 != lVar5) {
            return param_1;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar3 != '\0') goto LAB_001138e5;
      }
      plVar1 = (long *)param_1[4];
      pcVar2 = *(code **)(*plVar1 + 0x148);
      if (pcVar2 == glslang::TType::isBuiltIn) {
        pcVar2 = *(code **)(*plVar1 + 0x58);
        if (pcVar2 == glslang::TType::getQualifier) {
          plVar6 = plVar1 + 2;
        }
        else {
          plVar6 = (long *)(*pcVar2)(plVar1);
        }
        if (0x7f < *(ushort *)(plVar6 + 1)) goto LAB_0011386a;
      }
      else {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 != '\0') {
          return param_1 + 4;
        }
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011384d:
          lVar7 = *(long *)(plVar1[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar7);
          if (lVar7 != lVar5) {
LAB_0011386a:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar3 != '\0') goto LAB_0011384d;
      }
      plVar1 = (long *)param_1[8];
      pcVar2 = *(code **)(*plVar1 + 0x148);
      if (pcVar2 == glslang::TType::isBuiltIn) {
        pcVar2 = *(code **)(*plVar1 + 0x58);
        if (pcVar2 == glslang::TType::getQualifier) {
          plVar6 = plVar1 + 2;
        }
        else {
          plVar6 = (long *)(*pcVar2)(plVar1);
        }
        if (0x7f < *(ushort *)(plVar6 + 1)) goto LAB_0011389a;
      }
      else {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 != '\0') {
          return param_1 + 8;
        }
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011387d:
          lVar7 = *(long *)(plVar1[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar7);
          if (lVar7 != lVar5) {
LAB_0011389a:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar3 != '\0') goto LAB_0011387d;
      }
      plVar1 = (long *)param_1[0xc];
      pcVar2 = *(code **)(*plVar1 + 0x148);
      if (pcVar2 == glslang::TType::isBuiltIn) {
        pcVar2 = *(code **)(*plVar1 + 0x58);
        if (pcVar2 == glslang::TType::getQualifier) {
          plVar6 = plVar1 + 2;
        }
        else {
          plVar6 = (long *)(*pcVar2)(plVar1);
        }
        if (0x7f < *(ushort *)(plVar6 + 1)) goto LAB_001138ca;
      }
      else {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 != '\0') {
          return param_1 + 0xc;
        }
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001138ad:
          lVar7 = *(long *)(plVar1[0xd] + 0x10);
          lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar7);
          if (lVar7 != lVar5) {
LAB_001138ca:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar3 != '\0') goto LAB_001138ad;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar8);
    lVar7 = (long)param_2 - (long)param_1;
  }
  lVar7 = lVar7 >> 5;
  if (lVar7 != 2) {
    if (lVar7 != 3) {
      if (lVar7 != 1) {
        return param_2;
      }
      goto LAB_00113a10;
    }
    bVar4 = glslang::TType::
            contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar4) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar4 = glslang::TType::
          contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar4) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_00113a10:
  bVar4 = glslang::TType::
          contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar4) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsBuiltIn() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsBuiltIn() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x148);
  if (pcVar1 == isBuiltIn) {
    pcVar1 = *(code **)(*param_1 + 0x58);
    if (pcVar1 == getQualifier) {
      plVar5 = param_1 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)();
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return true;
    }
  }
  else {
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      return true;
    }
  }
  if (*(code **)(*param_1 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_00113a99:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x128))(param_1);
    if (cVar3 != '\0') goto LAB_00113a99;
  }
  return false;
}



/* glslang::TType::containsBuiltIn() const */

bool __thiscall glslang::TType::containsBuiltIn(TType *this)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  TType *pTVar5;
  
  pcVar1 = *(code **)(*(long *)this + 0x148);
  if (pcVar1 == isBuiltIn) {
    pcVar1 = *(code **)(*(long *)this + 0x58);
    if (pcVar1 == getQualifier) {
      pTVar5 = this + 0x10;
    }
    else {
      pTVar5 = (TType *)(*pcVar1)();
    }
    if (0x7f < *(ushort *)(pTVar5 + 8)) {
      return true;
    }
  }
  else {
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      return true;
    }
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00113b39:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar3 != '\0') goto LAB_00113b39;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x140))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113d95:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113d95;
      }
      plVar1 = (long *)param_1[4];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_00113c4c;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_00113c4c;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113dcd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00113c4c:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113dcd;
      }
      plVar1 = (long *)param_1[8];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_00113cac;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_00113cac;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113dfd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00113cac:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113dfd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_00113d0c;
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_00113d0c;
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113e2d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00113d0c:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113e2d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_00113e77;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_00113e77:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* bool glslang::TType::contains<glslang::TType::containsOpaque() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsOpaque() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */

bool glslang::TType::
     contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x140) == isOpaque) {
    if ((*(byte *)(param_1 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(param_1 + 1) & 0x3f) & 1) != 0)) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x140))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_00113f01:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_00113f01;
  }
  return false;
}



/* glslang::TType::containsOpaque() const */

bool __thiscall glslang::TType::containsOpaque(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x140) == isOpaque) {
    if (((byte)this[8] < 0x15) && ((0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0)) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x140))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00113f99:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00113f99;
  }
  return false;
}



/* glslang::TType::containsUnsizedArray() const */

bool __thiscall glslang::TType::containsUnsizedArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xf8) == isUnsizedArray) {
    if (*(code **)(lVar2 + 0xe8) != isArray) {
      cVar1 = (**(code **)(lVar2 + 0xe8))();
      if (cVar1 != '\0') {
        lVar3 = *(long *)(this + 0x60);
        goto LAB_0011402a;
      }
      goto LAB_00114046;
    }
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_0011402a:
      if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
        return true;
      }
      goto LAB_00114046;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xf8))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00114046:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00114059:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00114059;
  }
  return false;
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



/* glslang::TType::isScalarOrVec1() const */

byte __thiscall glslang::TType::isScalarOrVec1(TType *this)

{
  TType TVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  
  pcVar2 = *(code **)(*(long *)this + 0xc0);
  if (pcVar2 == isScalar) {
    pcVar2 = *(code **)(*(long *)this + 0xd8);
    if (pcVar2 == isVector) {
      TVar1 = this[10];
      bVar3 = (byte)TVar1 >> 4 & 1;
      if (1 < ((byte)this[9] & 0xf)) goto LAB_00114123;
    }
    else {
      bVar3 = (*pcVar2)();
    }
    if (bVar3 == 0) {
      lVar5 = *(long *)this;
      if (*(code **)(lVar5 + 0xe0) == isMatrix) {
        if ((byte)this[9] < 0x10) {
LAB_0011414c:
          if (*(code **)(lVar5 + 0x128) == isStruct) {
            if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_0011416b:
              if (*(code **)(lVar5 + 0xe8) == isArray) {
                if (*(long *)(this + 0x60) == 0) {
                  return 1;
                }
              }
              else {
                cVar4 = (**(code **)(lVar5 + 0xe8))(this);
                if (cVar4 == '\0') {
                  return 1;
                }
              }
            }
          }
          else {
            cVar4 = (**(code **)(lVar5 + 0x128))(this);
            if (cVar4 == '\0') {
              lVar5 = *(long *)this;
              goto LAB_0011416b;
            }
          }
        }
      }
      else {
        cVar4 = (**(code **)(lVar5 + 0xe0))(this);
        if (cVar4 == '\0') {
          lVar5 = *(long *)this;
          goto LAB_0011414c;
        }
      }
    }
  }
  else {
    cVar4 = (*pcVar2)();
    if (cVar4 != '\0') {
      return 1;
    }
  }
  TVar1 = this[10];
LAB_00114123:
  return (byte)TVar1 >> 4 & 1;
}



/* glslang::isTypeInt(glslang::TBasicType) */

bool glslang::isTypeInt(uint param_1)

{
  bool bVar1;
  
  if (10 < param_1) {
    return param_1 < 0xc;
  }
  bVar1 = (0x550UL >> ((ulong)param_1 & 0x3f) & 1) != 0;
  if (bVar1) {
    return bVar1;
  }
  return (0xaa0UL >> ((ulong)param_1 & 0x3f) & 1) != 0;
}



/* glslang::TSpirvType::TEMPNAMEPLACEHOLDERVALUE(glslang::TSpirvType const&) const */

undefined4 __thiscall glslang::TSpirvType::operator==(TSpirvType *this,TSpirvType *param_1)

{
  size_t __n;
  TSpirvTypeParameter *pTVar1;
  int iVar2;
  undefined4 uVar3;
  TSpirvTypeParameter *pTVar4;
  TSpirvTypeParameter *this_00;
  
  uVar3 = 0;
  __n = *(size_t *)(this + 0x10);
  if (__n == *(size_t *)(param_1 + 0x10)) {
    if (((__n == 0) ||
        (iVar2 = memcmp(*(void **)(this + 8),*(void **)(param_1 + 8),__n), iVar2 == 0)) &&
       (uVar3 = 0, *(int *)(this + 0x28) == *(int *)(param_1 + 0x28))) {
      pTVar1 = *(TSpirvTypeParameter **)(this + 0x40);
      this_00 = *(TSpirvTypeParameter **)(this + 0x38);
      pTVar4 = *(TSpirvTypeParameter **)(param_1 + 0x38);
      if ((long)pTVar1 - (long)this_00 == *(long *)(param_1 + 0x40) - (long)pTVar4) {
        for (; this_00 != pTVar1; this_00 = this_00 + 0x10) {
          uVar3 = glslang::TSpirvTypeParameter::operator==(this_00,pTVar4);
          if ((char)uVar3 == '\0') {
            return uVar3;
          }
          pTVar4 = pTVar4 + 0x10;
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* glslang::TType::TType(glslang::TBasicType, glslang::TStorageQualifier, int, int, int, bool) */

void __thiscall
glslang::TType::TType
          (TType *this,TType param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          byte param_7)

{
  this[8] = param_2;
  *(undefined ***)this = &PTR__TType_00117c00;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x44) = 0xfffff800;
  *(undefined8 *)(this + 0x24) = 0xffffffffffffffff;
  this[0x40] = (TType)0x0;
  *(uint *)(this + 0x80) = *(uint *)(this + 0x80) & 0x9fc00000;
  this[0x20] = (TType)((byte)this[0x20] & 0xf0);
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined2 *)(this + 0x58) = 0;
  *(uint *)(this + 8) =
       (param_5 & 0xf) << 0xc | (param_4 & 0xf) << 8 | (param_6 & 0xf) << 0x10 |
       (uint)(param_4 == 1 & param_7) << 0x14 | *(uint *)(this + 8) & 0xf80000ff;
  *(ulong *)(this + 0x2d) = *(ulong *)(this + 0x2d) & 0xffffff0000ffc07f | 0xffff001f80;
  *(ulong *)(this + 0x38) = (ulong)((uint)*(undefined8 *)(this + 0x38) & 0xfe07ff00) | 0x1f800ff;
  *(ulong *)(this + 0x2c) = *(ulong *)(this + 0x2c) & 0xffffffff8000 | 0xffff000000004fff;
  *(ulong *)(this + 0x34) = *(ulong *)(this + 0x34) | 0x7ff007fffffff;
  *(ulong *)(this + 0x18) = *(ulong *)(this + 0x18) & 0x8000000400000000 | (ulong)(param_3 & 0x7f);
  return;
}



/* glslang::TType::shallowCopy(glslang::TType const&) */

void __thiscall glslang::TType::shallowCopy(TType *this,TType *param_1)

{
  TType TVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TType TVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  TVar5 = param_1[8];
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x80) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  this[8] = TVar5;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = uVar3;
  TVar5 = param_1[9];
  this[9] = (TType)((byte)this[9] & 0xf0 | (byte)TVar5 & 0xf);
  this[9] = (TType)((byte)TVar5 & 0xf | (byte)param_1[9] & 0xf0);
  TVar5 = this[10];
  TVar1 = param_1[10];
  this[10] = (TType)((byte)TVar5 & 0xf0 | (byte)TVar1 & 0xf);
  TVar5 = (TType)((byte)TVar5 & 0xe0 | (byte)TVar1 & 0xf | (byte)param_1[10] & 0x10);
  this[10] = TVar5;
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = uVar3;
  if (*(code **)(*(long *)this + 0x128) != isStruct) {
    (**(code **)(*(long *)this + 0x128))();
    TVar5 = this[10];
  }
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x90) = uVar3;
  TVar1 = param_1[10];
  this[10] = (TType)((byte)TVar5 & 0xdf | (byte)TVar1 & 0x20);
  this[10] = (TType)((byte)TVar5 & 0x9f | (byte)TVar1 & 0x20 | (byte)param_1[10] & 0x40);
  *(ushort *)(this + 10) = *(ushort *)(this + 10) & 0xfc7f | *(ushort *)(param_1 + 10) & 0x380;
  this[0xb] = (TType)((byte)this[0xb] & 0xfb | (byte)param_1[0xb] & 4);
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
LAB_0011457b:
      if (uVar10 != 0x10) {
        if ((byte)this[9] < 0x10) {
          uVar10 = (byte)this[9] & 0xf;
        }
        else {
          uVar10 = (uint)((byte)this[9] >> 4) * ((byte)this[10] & 0xf);
        }
        goto LAB_001145a4;
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
      goto LAB_0011457b;
    }
  }
  uVar10 = 0;
  plVar21 = *(long **)(*(long *)(this + 0x68) + 8);
  if (plVar21 != *(long **)(*(long *)(this + 0x68) + 0x10)) {
    do {
      plVar3 = (long *)*plVar21;
      if (*(code **)(*plVar3 + 0x38) == getBasicType) {
        uVar16 = (uint)*(byte *)(plVar3 + 1);
        if (*(byte *)(plVar3 + 1) == 0xf) goto LAB_0011471e;
LAB_0011466b:
        if (uVar16 == 0x10) goto LAB_0011471e;
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
          goto LAB_0011466b;
        }
LAB_0011471e:
        uVar16 = 0;
        uVar11 = 0;
        plVar27 = *(long **)(plVar3[0xd] + 8);
        if (plVar27 != *(long **)(plVar3[0xd] + 0x10)) {
          do {
            plVar4 = (long *)*plVar27;
            if (*(code **)(*plVar4 + 0x38) == getBasicType) {
              uVar11 = (uint)*(byte *)(plVar4 + 1);
              if (*(byte *)(plVar4 + 1) == 0xf) goto LAB_0011482d;
LAB_0011476f:
              if (uVar11 == 0x10) goto LAB_0011482d;
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
                goto LAB_0011476f;
              }
LAB_0011482d:
              uVar11 = 0;
              plVar22 = *(long **)(plVar4[0xd] + 8);
              if (plVar22 != *(long **)(plVar4[0xd] + 0x10)) {
                do {
                  plVar5 = (long *)*plVar22;
                  if (*(code **)(*plVar5 + 0x38) == getBasicType) {
                    uVar19 = (uint)*(byte *)(plVar5 + 1);
                    if (*(byte *)(plVar5 + 1) == 0xf) goto LAB_0011494a;
LAB_00114884:
                    if (uVar19 == 0x10) goto LAB_0011494a;
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
                      goto LAB_00114884;
                    }
LAB_0011494a:
                    uVar19 = 0;
                    plVar28 = *(long **)(plVar5[0xd] + 8);
                    if (plVar28 != *(long **)(plVar5[0xd] + 0x10)) {
                      do {
                        plVar6 = (long *)*plVar28;
                        if (*(code **)(*plVar6 + 0x38) == getBasicType) {
                          uVar12 = (uint)*(byte *)(plVar6 + 1);
                          if (*(byte *)(plVar6 + 1) == 0xf) goto LAB_00114a78;
LAB_001149a2:
                          if (uVar12 == 0x10) goto LAB_00114a78;
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
                            goto LAB_001149a2;
                          }
LAB_00114a78:
                          uVar12 = 0;
                          plVar25 = *(long **)(plVar6[0xd] + 8);
                          if (plVar25 != *(long **)(plVar6[0xd] + 0x10)) {
                            uVar12 = 0;
                            do {
                              plVar7 = (long *)*plVar25;
                              if (*(code **)(*plVar7 + 0x38) == getBasicType) {
                                uVar15 = (uint)*(byte *)(plVar7 + 1);
                                if (*(byte *)(plVar7 + 1) == 0xf) goto LAB_00114ba0;
LAB_00114ad1:
                                if (uVar15 == 0x10) goto LAB_00114ba0;
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
                                  goto LAB_00114ad1;
                                }
LAB_00114ba0:
                                uVar15 = 0;
                                uVar24 = 0;
                                plVar29 = *(long **)(plVar7[0xd] + 8);
                                if (*(long **)(plVar7[0xd] + 0x10) != plVar29) {
                                  do {
                                    plVar8 = (long *)*plVar29;
                                    if (*(code **)(*plVar8 + 0x38) == getBasicType) {
                                      uVar24 = (uint)*(byte *)(plVar8 + 1);
                                      if (*(byte *)(plVar8 + 1) == 0xf) goto LAB_00114cc0;
LAB_00114bf6:
                                      if (uVar24 == 0x10) goto LAB_00114cc0;
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
                                        goto LAB_00114bf6;
                                      }
LAB_00114cc0:
                                      uVar24 = 0;
                                      plVar26 = *(long **)(plVar8[0xd] + 8);
                                      if (*(long **)(plVar8[0xd] + 0x10) != plVar26) {
                                        uVar24 = 0;
                                        do {
                                          plVar9 = (long *)*plVar26;
                                          if (*(code **)(*plVar9 + 0x38) == getBasicType) {
                                            uVar14 = (uint)*(byte *)(plVar9 + 1);
                                            if (*(byte *)(plVar9 + 1) == 0xf) goto LAB_00114de0;
LAB_00114d16:
                                            if (uVar14 == 0x10) goto LAB_00114de0;
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
                                              goto LAB_00114d16;
                                            }
LAB_00114de0:
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
                                                   (int)piVar17 & 0x10U) == 0) goto LAB_00114d92;
                                              iVar18 = *piVar17;
                                              for (piVar17 = piVar1;
                                                  piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                                                  piVar17 = piVar17 + 8) {
LAB_00114d92:
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
                                            & 0x10U) == 0) goto LAB_00114c74;
                                        iVar18 = *piVar17;
                                        for (piVar17 = piVar1;
                                            piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                                            piVar17 = piVar17 + 8) {
LAB_00114c74:
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
                                      0x10U) == 0) goto LAB_00114b58;
                                  iVar18 = *piVar17;
                                  for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4
                                      ; piVar17 = piVar17 + 8) {
LAB_00114b58:
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
                                0) goto LAB_00114a30;
                            iVar18 = *piVar17;
                            for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                                piVar17 = piVar17 + 8) {
LAB_00114a30:
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
                      goto LAB_00114908;
                      iVar18 = *piVar17;
                      for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                          piVar17 = piVar17 + 8) {
LAB_00114908:
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
                goto LAB_001147f0;
                iVar18 = *piVar17;
                for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4;
                    piVar17 = piVar17 + 8) {
LAB_001147f0:
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
          goto LAB_001146ed;
          iVar18 = *piVar17;
          for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4; piVar17 = piVar17 + 8)
          {
LAB_001146ed:
            iVar18 = iVar18 * *piVar17 * piVar17[4];
          }
        }
        uVar11 = uVar11 * iVar18;
      }
      uVar10 = uVar10 + uVar11;
      plVar21 = plVar21 + 4;
    } while (*(long **)(*(long *)(this + 0x68) + 0x10) != plVar21);
  }
LAB_001145a4:
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
      if (((int)(piVar1 + (ulong)(iVar13 - 1) * 4) - (int)piVar17 & 0x10U) == 0) goto LAB_001145f5;
      iVar18 = *piVar17;
      for (piVar17 = piVar1; piVar17 != piVar1 + (ulong)(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
LAB_001145f5:
        iVar18 = iVar18 * *piVar17 * piVar17[4];
      }
    }
    uVar10 = uVar10 * iVar18;
  }
  return uVar10;
}



/* glslang::TType::TEMPNAMEPLACEHOLDERVALUE(glslang::TType const&) const */

ulong __thiscall glslang::TType::operator==(TType *this,TType *param_1)

{
  TType TVar1;
  TType TVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  size_t __n;
  TSpirvTypeParameter *pTVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  TSpirvTypeParameter *pTVar18;
  int *piVar19;
  TSpirvTypeParameter *this_00;
  int *piVar20;
  long local_50;
  
  if (this[8] != param_1[8]) {
    return 0;
  }
  if (this[8] == (TType)0xe) {
    if (*(short *)(this + 0x80) != *(short *)(param_1 + 0x80)) {
      return 0;
    }
    TVar2 = this[0x82];
    if ((((byte)param_1[0x82] ^ (byte)TVar2) & 3) != 0) {
      return 0;
    }
    TVar1 = param_1[0x82];
    if (((byte)TVar2 >> 2 & 1) != ((byte)TVar1 >> 2 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 3 & 1) != ((byte)TVar1 >> 3 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 4 & 1) != ((byte)TVar1 >> 4 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 5 & 1) != ((byte)TVar1 >> 5 & 1)) {
      return 0;
    }
    if (((byte)this[0x83] >> 5 & 1) != ((byte)param_1[0x83] >> 5 & 1)) {
      return 0;
    }
    if (((byte)this[0x83] >> 6 & 1) != ((byte)param_1[0x83] >> 6 & 1)) {
      return 0;
    }
  }
  if ((((byte)this[9] ^ (byte)param_1[9]) & 0xf) != 0) {
    return 0;
  }
  if (0xf < ((byte)this[9] ^ (byte)param_1[9])) {
    return 0;
  }
  TVar2 = this[10];
  if ((((byte)param_1[10] ^ (byte)TVar2) & 0x1f) != 0) {
    return 0;
  }
  if (((byte)TVar2 >> 5 & 1) != ((byte)param_1[10] >> 5 & 1)) {
    return 0;
  }
  if (((byte)TVar2 >> 6 & 1) != ((byte)param_1[10] >> 6 & 1)) {
    return 0;
  }
  bVar7 = sameStructType(this,param_1,(int *)0x0,(int *)0x0);
  if (bVar7 == 0) {
    return 0;
  }
  if (*(code **)(*(long *)this + 0x38) == getBasicType) {
    uVar11 = (uint)(byte)this[8];
  }
  else {
    uVar11 = (**(code **)(*(long *)this + 0x38))(this);
  }
  if (*(code **)(*(long *)param_1 + 0x38) == getBasicType) {
    uVar10 = (uint)(byte)param_1[8];
  }
  else {
    uVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  }
  if ((uVar11 == 0x12) != (uVar10 == 0x12)) {
    return 0;
  }
  if (*(code **)(*(long *)this + 0x38) == getBasicType) {
    uVar11 = (uint)(byte)this[8];
  }
  else {
    uVar11 = (**(code **)(*(long *)this + 0x38))(this);
  }
  if (uVar11 == 0x12) {
LAB_0011530c:
    if ((*(TType **)(this + 0x68) != *(TType **)(param_1 + 0x68)) &&
       (cVar8 = operator==(*(TType **)(this + 0x68),*(TType **)(param_1 + 0x68)), cVar8 == '\0')) {
      return 0;
    }
  }
  else {
    if (*(code **)(*(long *)param_1 + 0x38) == getBasicType) {
      uVar11 = (uint)(byte)param_1[8];
    }
    else {
      uVar11 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
    }
    if (uVar11 == 0x12) goto LAB_0011530c;
  }
  lVar12 = *(long *)(this + 0x60);
  lVar16 = *(long *)(param_1 + 0x60);
  if (lVar12 == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar12 + 8);
    lVar16 = *(long *)(lVar16 + 8);
    if (lVar3 == 0) {
      if (lVar16 == 0) goto LAB_001153a8;
    }
    else if (lVar16 != 0) {
      piVar4 = *(int **)(lVar3 + 0x10);
      piVar19 = *(int **)(lVar3 + 8);
      piVar20 = *(int **)(lVar16 + 8);
      if ((long)piVar4 - (long)piVar19 == *(long *)(lVar16 + 0x10) - (long)piVar20) {
        for (; piVar19 != piVar4; piVar19 = piVar19 + 4) {
          if (*piVar19 != *piVar20) {
LAB_001156e0:
            lVar12 = *(long *)(this + 0x60);
            goto LAB_00115378;
          }
          plVar14 = *(long **)(piVar19 + 2);
          plVar13 = *(long **)(piVar20 + 2);
          if (plVar14 != (long *)0x0) {
            if (((plVar13 != (long *)0x0) &&
                (lVar12 = (**(code **)(*plVar14 + 0x60))(plVar14), lVar12 != 0)) &&
               (lVar12 = (**(code **)(*plVar13 + 0x60))(plVar13), lVar12 != 0)) {
              plVar14 = (long *)(**(code **)(*plVar14 + 0x60))(plVar14);
              if (*(code **)(*plVar14 + 0x180) == TIntermSymbol::getId) {
                lVar12 = plVar14[0x17];
              }
              else {
                lVar12 = (**(code **)(*plVar14 + 0x180))();
              }
              plVar14 = (long *)(**(code **)(*plVar13 + 0x60))(plVar13);
              if (*(code **)(*plVar14 + 0x180) == TIntermSymbol::getId) {
                lVar16 = plVar14[0x17];
              }
              else {
                lVar16 = (**(code **)(*plVar14 + 0x180))();
              }
              if (lVar12 == lVar16) goto LAB_001156ee;
            }
            goto LAB_001156e0;
          }
          if (plVar13 != (long *)0x0) goto LAB_001156e0;
LAB_001156ee:
          piVar20 = piVar20 + 4;
        }
        goto LAB_001153a8;
      }
    }
LAB_00115378:
    if (*(char *)(lVar12 + 0x14) == '\0') {
      return 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x60) + 0x14) == '\0') {
      return 0;
    }
    if ((*(int *)(*(long *)(param_1 + 0x60) + 0x10) != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
      return 0;
    }
  }
LAB_001153a8:
  piVar4 = *(int **)(this + 0x88);
  piVar19 = *(int **)(param_1 + 0x88);
  if (piVar4 == (int *)0x0) {
    if (piVar19 != (int *)0x0) {
      return 0;
    }
  }
  else {
    if (piVar19 == (int *)0x0) {
      return 0;
    }
    if (*piVar4 != *piVar19) {
      return 0;
    }
    lVar12 = *(long *)(*(long *)(piVar4 + 2) + 8);
    lVar16 = *(long *)(*(long *)(piVar19 + 2) + 8);
    if (lVar12 == 0) {
      if (lVar16 != 0) {
        return 0;
      }
    }
    else {
      if (lVar16 == 0) {
        return 0;
      }
      piVar20 = *(int **)(lVar12 + 8);
      piVar5 = *(int **)(lVar12 + 0x10);
      piVar17 = *(int **)(lVar16 + 8);
      if ((long)piVar5 - (long)piVar20 != *(long *)(lVar16 + 0x10) - (long)piVar17) {
        return 0;
      }
      for (; piVar20 != piVar5; piVar20 = piVar20 + 4) {
        if (*piVar20 != *piVar17) {
          return 0;
        }
        plVar14 = *(long **)(piVar17 + 2);
        plVar13 = *(long **)(piVar20 + 2);
        if (plVar13 == (long *)0x0) {
          if (plVar14 != (long *)0x0) {
            return 0;
          }
        }
        else {
          if (plVar14 == (long *)0x0) {
            return 0;
          }
          lVar12 = (**(code **)(*plVar13 + 0x60))(plVar13);
          if (lVar12 == 0) {
            return 0;
          }
          lVar12 = (**(code **)(*plVar14 + 0x60))();
          if (lVar12 == 0) {
            return 0;
          }
          plVar13 = (long *)(**(code **)(*plVar13 + 0x60))(plVar13);
          if (*(code **)(*plVar13 + 0x180) == TIntermSymbol::getId) {
            local_50 = plVar13[0x17];
          }
          else {
            local_50 = (**(code **)(*plVar13 + 0x180))();
          }
          plVar14 = (long *)(**(code **)(*plVar14 + 0x60))();
          if (*(code **)(*plVar14 + 0x180) == TIntermSymbol::getId) {
            lVar12 = plVar14[0x17];
          }
          else {
            lVar12 = (**(code **)(*plVar14 + 0x180))();
          }
          if (local_50 != lVar12) {
            return 0;
          }
        }
        piVar17 = piVar17 + 4;
      }
    }
    if ((*piVar4 == 0x16) &&
       (cVar8 = TSpirvType::operator==(*(TSpirvType **)(piVar4 + 4),*(TSpirvType **)(piVar19 + 4)),
       cVar8 == '\0')) {
      return 0;
    }
  }
  if (((*(ushort *)(this + 10) ^ *(ushort *)(param_1 + 10)) & 0x380) == 0) {
    lVar12 = *(long *)(param_1 + 0x90);
    lVar16 = *(long *)(this + 0x90);
    if (lVar16 == 0) {
      return (ulong)CONCAT11((char)((*(ushort *)(this + 10) ^ *(ushort *)(param_1 + 10)) >> 8),
                             lVar12 == 0);
    }
    if ((lVar12 != 0) && (__n = *(size_t *)(lVar16 + 0x10), __n == *(size_t *)(lVar12 + 0x10))) {
      if (((__n == 0) ||
          (iVar9 = memcmp(*(void **)(lVar16 + 8),*(void **)(lVar12 + 8),__n), iVar9 == 0)) &&
         (*(int *)(lVar16 + 0x28) == *(int *)(lVar12 + 0x28))) {
        pTVar6 = *(TSpirvTypeParameter **)(lVar16 + 0x40);
        this_00 = *(TSpirvTypeParameter **)(lVar16 + 0x38);
        pTVar18 = *(TSpirvTypeParameter **)(lVar12 + 0x38);
        if ((long)pTVar6 - (long)this_00 == *(long *)(lVar12 + 0x40) - (long)pTVar18) {
          while( true ) {
            if (this_00 == pTVar6) {
              return (ulong)bVar7;
            }
            uVar15 = glslang::TSpirvTypeParameter::operator==(this_00,pTVar18);
            if ((char)uVar15 == '\0') break;
            this_00 = this_00 + 0x10;
            pTVar18 = pTVar18 + 0x10;
          }
          return uVar15;
        }
      }
    }
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */
/* glslang::TType::sameStructType(glslang::TType const&, int*, int*) const */

undefined8 __thiscall
glslang::TType::sameStructType(TType *this,TType *param_1,int *param_2,int *param_3)

{
  size_t sVar1;
  bool bVar2;
  TType TVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  TType *this_00;
  
  if (param_2 != (int *)0x0) {
    *param_2 = -1;
    *param_3 = -1;
  }
  if (*(code **)(*(long *)this + 0x128) != isStruct) {
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 == '\0') {
      pcVar6 = *(code **)(*(long *)param_1 + 0x128);
      if (pcVar6 != isStruct) goto LAB_00115b88;
LAB_0011583a:
      if (1 < (byte)((char)param_1[8] - 0xfU)) {
        return 1;
      }
    }
LAB_0011584a:
    if (*(code **)(*(long *)this + 0x128) == isStruct) {
      TVar3 = this[8];
      goto LAB_00115862;
    }
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 != '\0') goto LAB_0011586a;
    goto LAB_00115885;
  }
  TVar3 = this[8];
  if (1 < (byte)((char)TVar3 - 0xfU)) {
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 == isStruct) goto LAB_0011583a;
LAB_00115b88:
    cVar4 = (*pcVar6)(param_1);
    if (cVar4 == '\0') {
      return 1;
    }
    goto LAB_0011584a;
  }
LAB_00115862:
  if ((byte)((char)TVar3 - 0xfU) < 2) {
LAB_0011586a:
    if (*(code **)(*(long *)param_1 + 0x128) == isStruct) {
      if ((byte)((char)param_1[8] - 0xfU) < 2) {
LAB_001158f0:
        if (*(long *)(this + 0x68) == *(long *)(param_1 + 0x68)) {
          return 1;
        }
      }
    }
    else {
      cVar4 = (**(code **)(*(long *)param_1 + 0x128))(param_1);
      if (cVar4 != '\0') goto LAB_001158f0;
    }
LAB_00115885:
    if (*(code **)(*(long *)this + 0x128) == isStruct) {
      TVar3 = this[8];
      goto LAB_0011589d;
    }
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 == '\0') {
      return 0;
    }
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 != isStruct) goto LAB_00115b70;
  }
  else {
LAB_0011589d:
    if (1 < (byte)((char)TVar3 - 0xfU)) {
      return 0;
    }
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 != isStruct) {
LAB_00115b70:
      cVar4 = (*pcVar6)(param_1);
      if (cVar4 == '\0') {
        return 0;
      }
      goto LAB_001158c3;
    }
  }
  if (1 < (byte)((char)param_1[8] - 0xfU)) {
    return 0;
  }
LAB_001158c3:
  sVar1 = *(size_t *)(*(long *)(this + 0x78) + 0x10);
  if (sVar1 == *(size_t *)(*(long *)(param_1 + 0x78) + 0x10)) {
    plVar14 = *(long **)(*(long *)(this + 0x78) + 8);
    if (sVar1 == 0) {
      bVar2 = false;
    }
    else {
      iVar5 = memcmp(plVar14,*(void **)(*(long *)(param_1 + 0x78) + 8),sVar1);
      if (iVar5 != 0) {
        return 0;
      }
      bVar2 = false;
      if (sVar1 == 0xc) {
        if ((*plVar14 != 0x65567265505f6c67) || (bVar2 = false, (int)plVar14[1] != 0x78657472)) {
          bVar2 = true;
        }
        bVar2 = !bVar2;
      }
    }
    lVar9 = *(long *)(this + 0x68);
    lVar12 = *(long *)(lVar9 + 8);
    lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
    if (((param_2 != (int *)0x0) || (lVar16 - lVar8 == lVar7 - lVar12)) || (bVar2)) {
      uVar10 = 0;
      uVar11 = 0;
LAB_001159a0:
      uVar13 = lVar16 - lVar8 >> 5;
      if (uVar11 < (ulong)(lVar7 - lVar12 >> 5)) {
        if (param_2 != (int *)0x0) {
          *param_2 = (int)uVar11;
          *param_3 = (int)uVar10;
        }
        lVar15 = uVar11 * 0x20;
        if (uVar13 <= uVar10) {
          plVar14 = *(long **)(lVar12 + lVar15);
          pcVar6 = *(code **)(*plVar14 + 0x18);
          if (pcVar6 == hiddenMember) {
            if ((char)plVar14[1] == '\0') goto LAB_00115ce0;
            pcVar6 = *(code **)(*plVar14 + 0x30);
            if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_00115c7f;
LAB_00115dd0:
            lVar9 = (*pcVar6)();
            lVar12 = *(long *)(lVar9 + 0x10);
          }
          else {
            cVar4 = (*pcVar6)();
            if (cVar4 != '\0') goto LAB_00115d62;
            plVar14 = *(long **)(*(long *)(*(long *)(this + 0x68) + 8) + lVar15);
            pcVar6 = *(code **)(*plVar14 + 0x30);
            if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_00115dd0;
LAB_00115c7f:
            lVar9 = plVar14[0xe];
            lVar12 = *(long *)(lVar9 + 0x10);
          }
          if (lVar12 == 0x16) {
            plVar14 = *(long **)(lVar9 + 8);
            if ((*plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164) ||
               (*(long *)((long)plVar14 + 0xe) != 0x564e6e6f69746973)) goto LAB_00115cc0;
          }
          else if ((lVar12 != 0x14) ||
                  ((plVar14 = *(long **)(lVar9 + 8),
                   *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 ||
                   ((int)plVar14[2] != 0x564e7765)))) {
LAB_00115cc0:
            if (param_2 == (int *)0x0) {
              return 0;
            }
            *param_3 = -1;
            return 0;
          }
          goto LAB_00115d62;
        }
        lVar16 = uVar10 * 0x20;
        pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x30);
        if (pcVar6 == getFieldName_abi_cxx11_) {
          lVar7 = (*(long **)(lVar8 + lVar16))[0xe];
        }
        else {
          lVar7 = (*pcVar6)();
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
        }
        this_00 = *(TType **)(lVar12 + lVar15);
        if (*(code **)(*(long *)this_00 + 0x30) == getFieldName_abi_cxx11_) {
          lVar8 = *(long *)(this_00 + 0x70);
        }
        else {
          lVar8 = (**(code **)(*(long *)this_00 + 0x30))(this_00);
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
          this_00 = *(TType **)(lVar12 + lVar15);
        }
        sVar1 = *(size_t *)(lVar8 + 0x10);
        if (sVar1 == *(size_t *)(lVar7 + 0x10)) {
          if ((sVar1 == 0) ||
             (iVar5 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar7 + 8),sVar1), iVar5 == 0)) {
            cVar4 = operator==(this_00,*(TType **)
                                        (*(long *)(*(long *)(param_1 + 0x68) + 8) + lVar16));
            if (cVar4 == '\0') {
              return 0;
            }
            goto LAB_00115d62;
          }
        }
        if (*(code **)(*(long *)this_00 + 0x18) == hiddenMember) {
          if (this_00[8] != (TType)0x0) goto LAB_00115a4e;
LAB_00115f20:
          lVar7 = *(long *)(lVar9 + 0x10);
          uVar11 = uVar11 + 1;
          lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
          lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
          goto LAB_001159a0;
        }
        cVar4 = (**(code **)(*(long *)this_00 + 0x18))(this_00);
        if (cVar4 != '\0') {
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
          goto LAB_00115f20;
        }
LAB_00115a4e:
        lVar12 = *(long *)(param_1 + 0x68);
        lVar8 = *(long *)(lVar12 + 8);
        pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x18);
        if (pcVar6 == hiddenMember) {
          if ((char)(*(long **)(lVar8 + lVar16))[1] == '\0') {
LAB_00115fe0:
            lVar9 = *(long *)(this + 0x68);
            lVar16 = *(long *)(lVar12 + 0x10);
            uVar10 = uVar10 + 1;
            lVar7 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)(lVar9 + 8);
            goto LAB_001159a0;
          }
        }
        else {
          cVar4 = (*pcVar6)();
          if (cVar4 != '\0') {
            lVar12 = *(long *)(param_1 + 0x68);
            lVar8 = *(long *)(lVar12 + 8);
            goto LAB_00115fe0;
          }
        }
        if (!bVar2) {
          return 0;
        }
        plVar14 = *(long **)(*(long *)(*(long *)(this + 0x68) + 8) + lVar15);
        pcVar6 = *(code **)(*plVar14 + 0x30);
        if (pcVar6 == getFieldName_abi_cxx11_) {
          lVar9 = plVar14[0xe];
        }
        else {
          lVar9 = (*pcVar6)();
        }
        if (*(long *)(lVar9 + 0x10) == 0x16) {
          plVar14 = *(long **)(lVar9 + 8);
          if ((*plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164) &&
             (*(long *)((long)plVar14 + 0xe) == 0x564e6e6f69746973)) goto LAB_00115d6a;
LAB_00115ae8:
          lVar12 = *(long *)(param_1 + 0x68);
          lVar8 = *(long *)(lVar12 + 8);
          pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x30);
          if (pcVar6 == getFieldName_abi_cxx11_) {
            lVar15 = (*(long **)(lVar8 + lVar16))[0xe];
          }
          else {
            lVar15 = (*pcVar6)();
            lVar12 = *(long *)(param_1 + 0x68);
            lVar8 = *(long *)(lVar12 + 8);
          }
          lVar9 = *(long *)(this + 0x68);
          uVar10 = uVar10 + 1;
          lVar16 = *(long *)(lVar12 + 0x10);
          lVar7 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)(lVar9 + 8);
          if (*(long *)(lVar15 + 0x10) == 0x16) {
            plVar14 = *(long **)(lVar15 + 8);
            if ((*plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164) &&
               (*(long *)((long)plVar14 + 0xe) == 0x564e6e6f69746973)) goto LAB_001159a0;
          }
          else if ((*(long *)(lVar15 + 0x10) == 0x14) &&
                  ((plVar14 = *(long **)(lVar15 + 8),
                   *plVar14 == 0x7469736f505f6c67 && plVar14[1] == 0x69567265506e6f69 &&
                   ((int)plVar14[2] == 0x564e7765)))) goto LAB_001159a0;
          uVar11 = uVar11 + 1;
          goto LAB_001159a0;
        }
        if (((*(long *)(lVar9 + 0x10) != 0x14) ||
            (plVar14 = *(long **)(lVar9 + 8),
            *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69)) ||
           ((int)plVar14[2] != 0x564e7765)) goto LAB_00115ae8;
      }
      else {
        if (uVar13 <= uVar10) {
          return 1;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)uVar11;
          *param_3 = (int)uVar10;
        }
        plVar14 = *(long **)(lVar8 + uVar10 * 0x20);
        pcVar6 = *(code **)(*plVar14 + 0x18);
        if (pcVar6 == hiddenMember) {
          if ((char)plVar14[1] == '\0') {
LAB_00115ce0:
            uVar11 = uVar11 + 1;
            uVar10 = uVar10 + 1;
            goto LAB_001159a0;
          }
          pcVar6 = *(code **)(*plVar14 + 0x30);
          if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_00115bf1;
LAB_00115e80:
          lVar9 = (*pcVar6)();
          lVar12 = *(long *)(lVar9 + 0x10);
        }
        else {
          cVar4 = (*pcVar6)();
          if (cVar4 != '\0') goto LAB_00115d62;
          plVar14 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 8) + uVar10 * 0x20);
          pcVar6 = *(code **)(*plVar14 + 0x30);
          if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_00115e80;
LAB_00115bf1:
          lVar9 = plVar14[0xe];
          lVar12 = *(long *)(lVar9 + 0x10);
        }
        if (lVar12 == 0x16) {
          plVar14 = *(long **)(lVar9 + 8);
          if ((*plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164) ||
             (*(long *)((long)plVar14 + 0xe) != 0x564e6e6f69746973)) goto LAB_00115c38;
        }
        else if ((lVar12 != 0x14) ||
                ((plVar14 = *(long **)(lVar9 + 8),
                 *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 ||
                 ((int)plVar14[2] != 0x564e7765)))) {
LAB_00115c38:
          if (param_2 == (int *)0x0) {
            return 0;
          }
          *param_2 = -1;
          return 0;
        }
LAB_00115d62:
        uVar10 = uVar10 + 1;
      }
LAB_00115d6a:
      uVar11 = uVar11 + 1;
      lVar9 = *(long *)(this + 0x68);
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
      lVar12 = *(long *)(lVar9 + 8);
      lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
      goto LAB_001159a0;
    }
  }
  return 0;
}



/* glslang::TIntermediate::IsRequestedExtension(char const*) const */

uint __thiscall glslang::TIntermediate::IsRequestedExtension(TIntermediate *this,char *param_1)

{
  TIntermediate *pTVar1;
  ulong uVar2;
  ulong uVar3;
  size_t *__s2;
  int iVar4;
  uint uVar5;
  size_t __n;
  long lVar6;
  size_t *psVar7;
  ulong uVar8;
  TIntermediate *pTVar9;
  TIntermediate *pTVar10;
  long in_FS_OFFSET;
  ulong local_70;
  size_t *local_68;
  ulong local_60;
  size_t local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = local_58;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
    goto LAB_001163d4;
  }
  __n = strlen(param_1);
  local_70 = __n;
  if (__n < 0x10) {
    psVar7 = local_58;
    if (__n == 1) {
      local_58[0] = CONCAT71(local_58[0]._1_7_,*param_1);
    }
    else if (__n != 0) goto LAB_001163a6;
  }
  else {
    local_68 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
    local_58[0] = local_70;
    psVar7 = local_68;
LAB_001163a6:
    memcpy(psVar7,param_1,__n);
    psVar7 = local_68;
  }
  __s2 = local_68;
  uVar3 = local_70;
  *(undefined1 *)((long)psVar7 + local_70) = 0;
  pTVar10 = *(TIntermediate **)(this + 0x98);
  pTVar9 = this + 0x90;
  local_60 = local_70;
  if (pTVar10 == (TIntermediate *)0x0) {
LAB_001163c0:
    uVar5 = 0;
  }
  else {
    do {
      while( true ) {
        uVar2 = *(ulong *)(pTVar10 + 0x28);
        uVar8 = uVar3;
        if (uVar2 <= uVar3) {
          uVar8 = uVar2;
        }
        if ((uVar8 != 0) && (iVar4 = memcmp(*(void **)(pTVar10 + 0x20),__s2,uVar8), iVar4 != 0))
        break;
        lVar6 = uVar2 - uVar3;
        if (lVar6 < 0x80000000) {
          if (-0x80000001 < lVar6) {
            iVar4 = (int)lVar6;
            break;
          }
          goto LAB_00116270;
        }
LAB_001162bc:
        pTVar1 = pTVar10 + 0x10;
        pTVar9 = pTVar10;
        pTVar10 = *(TIntermediate **)pTVar1;
        if (*(TIntermediate **)pTVar1 == (TIntermediate *)0x0) goto LAB_001162c8;
      }
      if (-1 < iVar4) goto LAB_001162bc;
LAB_00116270:
      pTVar10 = *(TIntermediate **)(pTVar10 + 0x18);
    } while (pTVar10 != (TIntermediate *)0x0);
LAB_001162c8:
    uVar5 = 0;
    if (this + 0x90 != pTVar9) {
      uVar2 = *(ulong *)(pTVar9 + 0x28);
      uVar8 = uVar3;
      if (uVar2 <= uVar3) {
        uVar8 = uVar2;
      }
      if ((uVar8 == 0) || (uVar5 = memcmp(__s2,*(void **)(pTVar9 + 0x20),uVar8), uVar5 == 0)) {
        uVar5 = 1;
        lVar6 = uVar3 - uVar2;
        if (0x7fffffff < lVar6) goto LAB_00116323;
        if (lVar6 < -0x80000000) goto LAB_001163c0;
        uVar5 = (uint)lVar6;
      }
      uVar5 = ~uVar5 >> 0x1f;
    }
  }
LAB_00116323:
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_001163d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::isIntegralConversion(glslang::TBasicType, glslang::TBasicType) const
   [clone .cold] */

undefined8 glslang::TIntermediate::isIntegralConversion(void)

{
  return 0;
}



/* bool glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const */

bool __thiscall
glslang::TType::
contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>
          (TType *this,uint param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if ((byte)this[8] == param_2) {
    return true;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00116476:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,param_2);
      return lVar1 != lVar3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00116476;
  }
  return false;
}



/* glslang::TType::containsBasicType(glslang::TBasicType) const */

ulong __thiscall glslang::TType::containsBasicType(TType *this,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  
  if ((byte)this[8] == param_2) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00116506:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar3 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,param_2);
      return CONCAT71(auVar3._9_7_,lVar1 != auVar3._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00116506;
  }
  return 0;
}



/* bool glslang::TType::contains<glslang::TType::containsStructure() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsStructure() const::{lambda(glslang::TType const*)#1}) const
    */

bool __thiscall
glslang::TType::
contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>
          (TType *this,TType *param_2)

{
  TType TVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  
  pcVar4 = *(code **)(*(long *)this + 0x128);
  if (this == param_2) {
LAB_00116590:
    if (pcVar4 != isStruct) {
      cVar3 = (*pcVar4)(this);
      if (cVar3 == '\0') {
        return false;
      }
      goto LAB_001165b9;
    }
    TVar1 = this[8];
  }
  else {
    if (pcVar4 != isStruct) {
      cVar3 = (*pcVar4)();
      if (cVar3 != '\0') {
        return true;
      }
      pcVar4 = *(code **)(*(long *)this + 0x128);
      goto LAB_00116590;
    }
    TVar1 = this[8];
    if ((byte)((char)TVar1 - 0xfU) < 2) {
      return true;
    }
  }
  if (1 < (byte)((char)TVar1 - 0xfU)) {
    return false;
  }
LAB_001165b9:
  lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
  lVar5 = std::
          __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2,param_2);
  return lVar2 != lVar5;
}



/* glslang::TType::containsStructure() const */

bool __thiscall glslang::TType::containsStructure(TType *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00116626:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,this);
      return lVar1 != lVar3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00116626;
  }
  return false;
}



/* bool glslang::TType::contains<glslang::TType::containsSampler() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsSampler() const::{lambda(glslang::TType const*)#1}) const */

bool glslang::TType::
     contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if ((char)param_1[1] == '\x0e') {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))();
      }
      if (((*plVar4 & 0x200000) == 0) && ((*plVar4 & 0x80000) == 0)) {
        return true;
      }
      goto LAB_00116720;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_00116770;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00116720:
    lVar2 = *param_1;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if ((char)param_1[1] != '\x0e') goto LAB_0011668f;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))(param_1);
      }
      if (((*plVar4 & 0x80000) != 0) && (1 < (byte)(*(char *)((long)plVar4 + 1) - 7U))) {
        return true;
      }
    }
    else {
LAB_00116770:
      cVar1 = (*pcVar5)(param_1);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *param_1;
  }
LAB_0011668f:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_001166c1:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_001166c1;
  }
  return false;
}



/* glslang::TType::containsSampler() const */

bool __thiscall glslang::TType::containsSampler(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  TType *pTVar4;
  code *pcVar5;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if (this[8] == (TType)0xe) {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))();
      }
      if ((((byte)pTVar4[2] & 0x20) == 0) && (((byte)pTVar4[2] & 8) == 0)) {
        return true;
      }
      goto LAB_00116870;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_001168c0;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00116870:
    lVar2 = *(long *)this;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if (this[8] != (TType)0xe) goto LAB_001167df;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))(this);
      }
      if ((((byte)pTVar4[2] & 8) != 0) && (1 < (byte)((char)pTVar4[1] - 7U))) {
        return true;
      }
    }
    else {
LAB_001168c0:
      cVar1 = (*pcVar5)(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *(long *)this;
  }
LAB_001167df:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00116811:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00116811;
  }
  return false;
}



/* bool glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const */

bool glslang::TType::
     contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    lVar3 = param_1[0xc];
    if (lVar3 != 0) {
LAB_0011694a:
      if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
        return true;
      }
      goto LAB_0011695e;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar3 = param_1[0xc];
      goto LAB_0011694a;
    }
LAB_0011695e:
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_00116971:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_00116971;
  }
  return false;
}



/* glslang::TType::containsSpecializationSize() const */

bool __thiscall glslang::TType::containsSpecializationSize(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_001169ea:
      if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
        return true;
      }
      goto LAB_001169fe;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar3 = *(long *)(this + 0x60);
      goto LAB_001169ea;
    }
LAB_001169fe:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00116a11:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00116a11;
  }
  return false;
}



/* void std::vector<TIntermNode*, glslang::pool_allocator<TIntermNode*>
   >::_M_realloc_insert<TIntermNode* const&>(__gnu_cxx::__normal_iterator<TIntermNode**,
   std::vector<TIntermNode*, glslang::pool_allocator<TIntermNode*> > >, TIntermNode* const&) */

void __thiscall
std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
_M_realloc_insert<TIntermNode*const&>
          (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *this,long param_2,
          undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(this + 0x10);
  lVar3 = *(long *)(this + 8);
  uVar2 = lVar1 - lVar3 >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (lVar3 == lVar1) {
    uVar5 = uVar2 + 1;
    if (0xfffffffffffffffe < uVar2) goto LAB_00116b10;
    if (0xfffffffffffffff < uVar5) {
      uVar5 = 0xfffffffffffffff;
    }
    lVar7 = uVar5 * 8;
LAB_00116b1a:
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    lVar7 = lVar4 + lVar7;
    lVar6 = lVar4 + 8;
    *(undefined8 *)(lVar4 + (param_2 - lVar3)) = *param_3;
    if (param_2 != lVar3) {
LAB_00116aa9:
      lVar6 = 0;
      do {
        *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar6 != param_2 - lVar3);
      lVar6 = lVar4 + 8 + lVar6;
    }
    if (param_2 == lVar1) goto LAB_00116af4;
  }
  else {
    uVar5 = uVar2 * 2;
    if (uVar5 < uVar2) {
LAB_00116b10:
      lVar7 = 0x7ffffffffffffff8;
      goto LAB_00116b1a;
    }
    if (uVar5 != 0) {
      if (0xfffffffffffffff < uVar5) {
        uVar5 = 0xfffffffffffffff;
      }
      lVar7 = uVar5 * 8;
      goto LAB_00116b1a;
    }
    lVar4 = 0;
    lVar7 = 0;
    lVar6 = 8;
    *(undefined8 *)(param_2 - lVar3) = *param_3;
    if (param_2 != lVar3) goto LAB_00116aa9;
  }
  lVar3 = 0;
  do {
    *(undefined8 *)(lVar6 + lVar3) = *(undefined8 *)(param_2 + lVar3);
    lVar3 = lVar3 + 8;
  } while (lVar3 != lVar1 - param_2);
  lVar6 = lVar6 + lVar3;
LAB_00116af4:
  *(long *)(this + 8) = lVar4;
  *(long *)(this + 0x10) = lVar6;
  *(long *)(this + 0x18) = lVar7;
  return;
}



/* std::vector<TIntermNode*, glslang::pool_allocator<TIntermNode*> >::_M_default_append(unsigned
   long) */

void __thiscall
std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::_M_default_append
          (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    return;
  }
  __s = *(void **)(this + 0x10);
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x18) - (long)__s >> 3) < param_1) {
    uVar6 = (long)__s - (long)pvVar2 >> 3;
    if (0xfffffffffffffff - uVar6 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar6;
    uVar3 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar3 = uVar1;
    }
    if ((param_1 <= uVar6) && (uVar3 = uVar6 * 2, 0xfffffffffffffff < uVar3)) {
      uVar3 = 0xfffffffffffffff;
    }
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    memset((void *)(lVar4 + ((long)__s - (long)pvVar2)),0,param_1 * 8);
    lVar5 = 0;
    if (pvVar2 != __s) {
      do {
        *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)((long)pvVar2 + lVar5);
        lVar5 = lVar5 + 8;
      } while ((long)__s - (long)pvVar2 != lVar5);
    }
    *(long *)(this + 8) = lVar4;
    *(ulong *)(this + 0x10) = lVar4 + uVar1 * 8;
    *(ulong *)(this + 0x18) = lVar4 + uVar3 * 8;
    return;
  }
  memset(__s,0,param_1 * 8);
  *(void **)(this + 0x10) = (void *)(param_1 * 8 + (long)__s);
  return;
}



/* std::vector<glslang::TStorageQualifier, glslang::pool_allocator<glslang::TStorageQualifier>
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<glslang::TStorageQualifier,glslang::pool_allocator<glslang::TStorageQualifier>>::
_M_default_append(vector<glslang::TStorageQualifier,glslang::pool_allocator<glslang::TStorageQualifier>>
                  *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    return;
  }
  __s = *(void **)(this + 0x10);
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x18) - (long)__s >> 2) < param_1) {
    uVar6 = (long)__s - (long)pvVar2 >> 2;
    if (0x1fffffffffffffff - uVar6 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar6;
    uVar3 = 0x1fffffffffffffff;
    if (uVar1 < 0x2000000000000000) {
      uVar3 = uVar1;
    }
    if ((param_1 <= uVar6) && (uVar3 = uVar6 * 2, 0x1fffffffffffffff < uVar3)) {
      uVar3 = 0x1fffffffffffffff;
    }
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    memset((void *)(lVar4 + ((long)__s - (long)pvVar2)),0,param_1 * 4);
    lVar5 = 0;
    if (pvVar2 != __s) {
      do {
        *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)((long)pvVar2 + lVar5);
        lVar5 = lVar5 + 4;
      } while ((long)__s - (long)pvVar2 != lVar5);
    }
    *(long *)(this + 8) = lVar4;
    *(ulong *)(this + 0x10) = lVar4 + uVar1 * 4;
    *(ulong *)(this + 0x18) = lVar4 + uVar3 * 4;
    return;
  }
  memset(__s,0,param_1 * 4);
  *(void **)(this + 0x10) = (void *)(param_1 * 4 + (long)__s);
  return;
}



/* glslang::TextureUpgradeAndSamplerRemovalTransform::visitAggregate(glslang::TVisit,
   glslang::TIntermAggregate*) */

undefined8 __thiscall
glslang::TextureUpgradeAndSamplerRemovalTransform::visitAggregate
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  vector<glslang::TStorageQualifier,glslang::pool_allocator<glslang::TStorageQualifier>> *this;
  vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *this_00;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *param_3;
  if (*(code **)(lVar7 + 400) == TIntermAggregate::getSequence) {
    this_00 = (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(param_3 + 0x18);
  }
  else {
    this_00 = (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)
              (**(code **)(lVar7 + 400))(param_3);
    lVar7 = *param_3;
  }
  if (*(code **)(lVar7 + 0x1c0) == TIntermAggregate::getQualifierList) {
    lVar7 = *(long *)(this_00 + 8);
    this = (vector<glslang::TStorageQualifier,glslang::pool_allocator<glslang::TStorageQualifier>> *
           )(param_3 + 0x1c);
    if (*(long *)(this_00 + 0x10) == lVar7) {
LAB_00117120:
      lVar7 = *(long *)(this + 8);
      if (lVar7 == *(long *)(this + 0x10)) {
        return 1;
      }
      goto LAB_0011705b;
    }
  }
  else {
    this = (vector<glslang::TStorageQualifier,glslang::pool_allocator<glslang::TStorageQualifier>> *
           )(**(code **)(lVar7 + 0x1c0))(param_3);
    lVar7 = *(long *)(this_00 + 8);
    if (*(long *)(this_00 + 0x10) == lVar7) goto LAB_00117120;
  }
  uVar9 = 0;
  uVar8 = 0;
  do {
    plVar4 = (long *)(**(code **)(**(long **)(lVar7 + uVar9 * 8) + 0x60))();
    if (plVar4 == (long *)0x0) {
LAB_00116ed0:
      lVar7 = *(long *)(this_00 + 8);
LAB_00116ed4:
      plVar4 = *(long **)(lVar7 + uVar9 * 8);
      plVar2 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4);
      if ((plVar2 != (long *)0x0) && ((int)plVar2[0x17] == 0x242)) {
        if (*(code **)(*plVar2 + 400) == TIntermAggregate::getSequence) {
          puVar5 = (undefined8 *)plVar2[0x19];
          if (puVar5 != (undefined8 *)plVar2[0x1a]) {
LAB_00116ff6:
            plVar4 = (long *)*puVar5;
          }
        }
        else {
          lVar7 = (**(code **)(*plVar2 + 400))(plVar2);
          if (*(long *)(lVar7 + 8) != *(long *)(lVar7 + 0x10)) {
            if (*(code **)(*plVar2 + 400) == TIntermAggregate::getSequence) {
              puVar5 = (undefined8 *)plVar2[0x19];
            }
            else {
              lVar7 = (**(code **)(*plVar2 + 400))(plVar2);
              puVar5 = *(undefined8 **)(lVar7 + 8);
            }
            goto LAB_00116ff6;
          }
        }
      }
      lVar7 = *(long *)(this_00 + 8);
      lVar6 = *(long *)(this + 8);
      *(long **)(lVar7 + uVar8 * 8) = plVar4;
      if (*(long *)(this + 0x10) != lVar6) {
        *(undefined4 *)(lVar6 + uVar8 * 4) = *(undefined4 *)(lVar6 + uVar9 * 4);
      }
      uVar8 = uVar8 + 1;
    }
    else {
      if (*(code **)(*plVar4 + 0x100) == TIntermTyped::getBasicType) {
        uVar1 = (uint)*(byte *)(plVar4 + 5);
      }
      else {
        uVar1 = (**(code **)(*plVar4 + 0x100))(plVar4);
      }
      if (uVar1 != 0xe) goto LAB_00116ed0;
      if (*(code **)(*plVar4 + 0xf0) == TIntermTyped::getType) {
        plVar4 = plVar4 + 4;
      }
      else {
        plVar4 = (long *)(**(code **)(*plVar4 + 0xf0))(plVar4);
      }
      if (*(code **)(*plVar4 + 0x40) == TType::getSampler) {
        plVar4 = plVar4 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
      }
      lVar7 = *(long *)(this_00 + 8);
      if ((*plVar4 & 0x200000) == 0) goto LAB_00116ed4;
    }
    uVar9 = uVar9 + 1;
    uVar3 = *(long *)(this_00 + 0x10) - lVar7 >> 3;
  } while (uVar9 < uVar3);
  if (uVar3 < uVar8) {
    std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::_M_default_append
              (this_00,uVar8 - uVar3);
    lVar6 = *(long *)(this + 0x10);
    lVar7 = *(long *)(this + 8);
    if (lVar6 == lVar7) {
      return 1;
    }
  }
  else {
    if ((uVar8 < uVar3) && (lVar7 = lVar7 + uVar8 * 8, *(long *)(this_00 + 0x10) != lVar7)) {
      *(long *)(this_00 + 0x10) = lVar7;
    }
    lVar6 = *(long *)(this + 0x10);
    lVar7 = *(long *)(this + 8);
    if (lVar6 == lVar7) {
      return 1;
    }
  }
  uVar9 = lVar6 - lVar7 >> 2;
  if (uVar9 < uVar8) {
    std::vector<glslang::TStorageQualifier,glslang::pool_allocator<glslang::TStorageQualifier>>::
    _M_default_append(this,uVar8 - uVar9);
    return 1;
  }
  if (uVar9 <= uVar8) {
    return 1;
  }
  lVar7 = lVar7 + uVar8 * 4;
  if (lVar6 == lVar7) {
    return 1;
  }
LAB_0011705b:
  *(long *)(this + 0x10) = lVar7;
  return 1;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_assign(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          basic_string *param_1)

{
  ulong __n;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
  ulong uVar1;
  ulong uVar2;
  
  if (this == (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1) {
    return;
  }
  __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if (__dest == this + 0x18) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x18);
  }
  if (uVar1 < __n) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    uVar1 = uVar1 * 2;
    uVar2 = 0x7fffffffffffffff;
    if (uVar1 < 0x8000000000000000) {
      uVar2 = uVar1;
    }
    if (uVar1 <= __n) {
      uVar2 = __n;
    }
    __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             glslang::TPoolAllocator::allocate(*(ulong *)this);
    *(ulong *)(this + 0x18) = uVar2;
    *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) = __dest
    ;
  }
  else if (__n == 0) goto LAB_001171ac;
  if (__n == 1) {
    *__dest = **(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (param_1 + 8);
    __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
  }
  else {
    memcpy(__dest,*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                   (param_1 + 8),__n);
    __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
  }
LAB_001171ac:
  *(ulong *)(this + 0x10) = __n;
  __dest[__n] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
  return;
}



/* glslang::TIntermAggregate::setName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall glslang::TIntermAggregate::setName(TIntermAggregate *this,basic_string *param_1)

{
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             (this + 0x100),param_1);
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace_cold(char*, unsigned long, char const*, unsigned long, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
_M_replace_cold(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
               char *param_1,ulong param_2,char *param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  char *pcVar2;
  size_t __n;
  byte bVar3;
  
  bVar3 = 0;
  if (param_4 - 1 < param_2) {
    if (param_4 == 1) {
      *param_1 = *param_3;
    }
    else {
      memmove(param_1,param_3,param_4);
    }
  }
  if ((param_5 != 0) && (param_4 != param_2)) {
    if (param_5 == 1) {
      param_1[param_4] = param_1[param_2];
    }
    else {
      memmove(param_1 + param_4,param_1 + param_2,param_5);
    }
  }
  if (param_2 < param_4) {
    pcVar2 = param_1 + param_2;
    if (pcVar2 < param_3 + param_4) {
      if (param_3 < pcVar2) {
        __n = (long)pcVar2 - (long)param_3;
        if (__n == 1) {
          *param_1 = *param_3;
        }
        else {
          memmove(param_1,param_3,__n);
        }
        pcVar2 = param_1 + param_4;
        param_1 = param_1 + __n;
        lVar1 = param_4 - __n;
        if (lVar1 != 1) {
          if (lVar1 == 0) {
            return;
          }
          for (; lVar1 != 0; lVar1 = lVar1 + -1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      else {
        pcVar2 = param_3 + (param_4 - param_2);
        if (param_4 != 1) {
          for (; param_4 != 0; param_4 = param_4 - 1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      *param_1 = *pcVar2;
    }
    else {
      if (param_4 != 1) {
        memmove(param_1,param_3,param_4);
        return;
      }
      *param_1 = *param_3;
    }
  }
  return;
}



/* glslang::TSpirvInstruction::TSpirvInstruction() */

void __thiscall glslang::TSpirvInstruction::TSpirvInstruction(TSpirvInstruction *this)

{
  undefined8 uVar1;
  TSpirvInstruction *pTVar2;
  
  uVar1 = glslang::GetThreadPoolAllocator();
  pTVar2 = this + 0x18;
  this[0x18] = (TSpirvInstruction)0x0;
  *(undefined8 *)this = uVar1;
  *(TSpirvInstruction **)(this + 8) = pTVar2;
  *(undefined8 *)(this + 0x10) = 0;
  if (pTVar2 == (TSpirvInstruction *)&_LC25) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_replace_cold((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)this,
                    "",0,"",0,0);
    pTVar2 = *(TSpirvInstruction **)(this + 8);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *pTVar2 = (TSpirvInstruction)0x0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  return;
}



/* glslang::TIntermAggregate::TIntermAggregate() */

void __thiscall glslang::TIntermAggregate::TIntermAggregate(TIntermAggregate *this)

{
  undefined8 uVar1;
  
  *(undefined ***)(this + 0x20) = &PTR__TType_00117c00;
  *(ushort *)(this + 0x4c) = *(ushort *)(this + 0x4c) | 0xfff;
  this[0x40] = (TIntermAggregate)((byte)this[0x40] & 0xf0);
  *(undefined8 *)(this + 8) = 0;
  *(uint *)(this + 0x28) = *(uint *)(this + 0x28) & 0xf8000000 | 0x101;
  *(ulong *)(this + 0x38) = *(ulong *)(this + 0x38) & 0x8000000400000000;
  *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) & 0x9fc00000;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)(this + 0x4d) =
       (ulong)((uint)*(undefined8 *)(this + 0x4d) & 0xffc00f) | 0xffffffffff001fc0;
  *(undefined8 *)(this + 0x30) = 0;
  *(ulong *)(this + 0x55) = *(ulong *)(this + 0x55) & 0xfe000000800000 | 0x1ffffff7fffff;
  *(undefined8 *)(this + 0x68) = 0xffffffff00000000;
  *(undefined2 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x5d) = 0;
  *(undefined4 *)(this + 100) = 0xfffff800;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined ***)this = &PTR_getLoc_00117e70;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  uVar1 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = uVar1;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  uVar1 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = uVar1;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  uVar1 = glslang::GetThreadPoolAllocator();
  this[0x118] = (TIntermAggregate)0x0;
  *(undefined8 *)(this + 0x100) = uVar1;
  *(TIntermAggregate **)(this + 0x108) = this + 0x118;
  *(undefined8 *)(this + 0x110) = 0;
  this[0x128] = (TIntermAggregate)0x0;
  *(undefined8 *)(this + 0x130) = 0;
  TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)(this + 0x138));
  *(undefined4 *)(this + 0x168) = 0;
  return;
}



/* glslang::TIntermTyped* glslang::TIntermediate::addSwizzle<int>(glslang::TSwizzleSelectors<int>&,
   glslang::TSourceLoc const&) */

TIntermTyped * __thiscall
glslang::TIntermediate::addSwizzle<int>
          (TIntermediate *this,TSwizzleSelectors *param_1,TSourceLoc *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  TIntermTyped *pTVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  TIntermNode *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = glslang::GetThreadPoolAllocator();
  pTVar5 = (TIntermTyped *)glslang::TPoolAllocator::allocate(uVar4);
  *(undefined8 *)(pTVar5 + 0x10) = 0;
  *(undefined8 *)(pTVar5 + 8) = 0;
  *(undefined4 *)(pTVar5 + 0x18) = 0;
  *(undefined ***)(pTVar5 + 0x20) = &PTR__TType_00117c00;
  *(ushort *)(pTVar5 + 0x4c) = *(ushort *)(pTVar5 + 0x4c) | 0xfff;
  pTVar5[0x40] = (TIntermTyped)((byte)pTVar5[0x40] & 0xf0);
  *(undefined8 *)(pTVar5 + 0x30) = 0;
  *(uint *)(pTVar5 + 0x28) = *(uint *)(pTVar5 + 0x28) & 0xf8000000 | 0x101;
  *(ulong *)(pTVar5 + 0x38) = *(ulong *)(pTVar5 + 0x38) & 0x8000000400000000;
  *(uint *)(pTVar5 + 0xa0) = *(uint *)(pTVar5 + 0xa0) & 0x9fc00000;
  *(undefined8 *)(pTVar5 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)(pTVar5 + 0x5d) = 0;
  *(ulong *)(pTVar5 + 0x4d) =
       (ulong)((uint)*(undefined8 *)(pTVar5 + 0x4d) & 0xffc00f) | 0xffffffffff001fc0;
  *(undefined4 *)(pTVar5 + 100) = 0xfffff800;
  *(ulong *)(pTVar5 + 0x55) = *(ulong *)(pTVar5 + 0x55) & 0xfe000000800000 | 0x1ffffff7fffff;
  *(undefined8 *)(pTVar5 + 0x68) = 0xffffffff00000000;
  *(undefined2 *)(pTVar5 + 0x78) = 0;
  *(undefined8 *)(pTVar5 + 0x70) = 0;
  *(undefined8 *)(pTVar5 + 0xb8) = 1;
  *(undefined ***)pTVar5 = &PTR_getLoc_00117e70;
  *(undefined1 (*) [16])(pTVar5 + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pTVar5 + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pTVar5 + 0x90) = (undefined1  [16])0x0;
  uVar6 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(pTVar5 + 200) = 0;
  *(undefined8 *)(pTVar5 + 0xc0) = uVar6;
  *(undefined8 *)(pTVar5 + 0xd0) = 0;
  *(undefined8 *)(pTVar5 + 0xd8) = 0;
  uVar6 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(pTVar5 + 0xe8) = 0;
  *(undefined8 *)(pTVar5 + 0xe0) = uVar6;
  *(undefined8 *)(pTVar5 + 0xf0) = 0;
  *(undefined8 *)(pTVar5 + 0xf8) = 0;
  uVar6 = glslang::GetThreadPoolAllocator();
  pTVar5[0x118] = (TIntermTyped)0x0;
  *(undefined8 *)(pTVar5 + 0x100) = uVar6;
  *(TIntermTyped **)(pTVar5 + 0x108) = pTVar5 + 0x118;
  *(undefined8 *)(pTVar5 + 0x110) = 0;
  *(undefined8 *)(pTVar5 + 0x130) = 0;
  TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)(pTVar5 + 0x138));
  uVar6 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  iVar2 = *(int *)param_1;
  *(undefined4 *)(pTVar5 + 0x168) = 0;
  *(undefined8 *)(pTVar5 + 8) = uVar6;
  *(undefined8 *)(pTVar5 + 0x10) = uVar3;
  *(undefined8 *)(pTVar5 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  if (0 < iVar2) {
    lVar7 = 0;
    do {
      lVar1 = lVar7 * 4;
      lVar7 = lVar7 + 1;
      local_48 = (TIntermNode *)addConstantUnion(this,*(int *)(param_1 + lVar1 + 4),param_2,false);
      std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::emplace_back<TIntermNode*>
                ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(pTVar5 + 0xc0),
                 &local_48);
    } while ((int)lVar7 < *(int *)param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pTVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermTyped*
   glslang::TIntermediate::addSwizzle<glslang::TMatrixSelector>(glslang::TSwizzleSelectors<glslang::TMatrixSelector>&,
   glslang::TSourceLoc const&) */

TIntermTyped * __thiscall
glslang::TIntermediate::addSwizzle<glslang::TMatrixSelector>
          (TIntermediate *this,TSwizzleSelectors *param_1,TSourceLoc *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  TIntermTyped *pTVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = glslang::GetThreadPoolAllocator();
  pTVar4 = (TIntermTyped *)glslang::TPoolAllocator::allocate(uVar3);
  *(undefined8 *)(pTVar4 + 0x10) = 0;
  *(undefined8 *)(pTVar4 + 8) = 0;
  *(undefined4 *)(pTVar4 + 0x18) = 0;
  *(undefined ***)(pTVar4 + 0x20) = &PTR__TType_00117c00;
  *(ushort *)(pTVar4 + 0x4c) = *(ushort *)(pTVar4 + 0x4c) | 0xfff;
  pTVar4[0x40] = (TIntermTyped)((byte)pTVar4[0x40] & 0xf0);
  *(undefined8 *)(pTVar4 + 0x30) = 0;
  *(uint *)(pTVar4 + 0x28) = *(uint *)(pTVar4 + 0x28) & 0xf8000000 | 0x101;
  *(ulong *)(pTVar4 + 0x38) = *(ulong *)(pTVar4 + 0x38) & 0x8000000400000000;
  *(uint *)(pTVar4 + 0xa0) = *(uint *)(pTVar4 + 0xa0) & 0x9fc00000;
  *(undefined8 *)(pTVar4 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)(pTVar4 + 0x5d) = 0;
  *(ulong *)(pTVar4 + 0x4d) =
       (ulong)((uint)*(undefined8 *)(pTVar4 + 0x4d) & 0xffc00f) | 0xffffffffff001fc0;
  *(undefined4 *)(pTVar4 + 100) = 0xfffff800;
  *(ulong *)(pTVar4 + 0x55) = *(ulong *)(pTVar4 + 0x55) & 0xfe000000800000 | 0x1ffffff7fffff;
  *(undefined8 *)(pTVar4 + 0x68) = 0xffffffff00000000;
  *(undefined2 *)(pTVar4 + 0x78) = 0;
  *(undefined8 *)(pTVar4 + 0x70) = 0;
  *(undefined8 *)(pTVar4 + 0xb8) = 1;
  *(undefined ***)pTVar4 = &PTR_getLoc_00117e70;
  *(undefined1 (*) [16])(pTVar4 + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pTVar4 + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pTVar4 + 0x90) = (undefined1  [16])0x0;
  uVar5 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(pTVar4 + 200) = 0;
  *(undefined8 *)(pTVar4 + 0xc0) = uVar5;
  *(undefined8 *)(pTVar4 + 0xd0) = 0;
  *(undefined8 *)(pTVar4 + 0xd8) = 0;
  uVar5 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(pTVar4 + 0xe8) = 0;
  *(undefined8 *)(pTVar4 + 0xe0) = uVar5;
  *(undefined8 *)(pTVar4 + 0xf0) = 0;
  *(undefined8 *)(pTVar4 + 0xf8) = 0;
  uVar5 = glslang::GetThreadPoolAllocator();
  pTVar4[0x118] = (TIntermTyped)0x0;
  *(undefined8 *)(pTVar4 + 0x100) = uVar5;
  *(TIntermTyped **)(pTVar4 + 0x108) = pTVar4 + 0x118;
  *(undefined8 *)(pTVar4 + 0x110) = 0;
  *(undefined8 *)(pTVar4 + 0x130) = 0;
  TSpirvInstruction::TSpirvInstruction((TSpirvInstruction *)(pTVar4 + 0x138));
  uVar5 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)param_1;
  *(undefined4 *)(pTVar4 + 0x168) = 0;
  *(undefined8 *)(pTVar4 + 8) = uVar5;
  *(undefined8 *)(pTVar4 + 0x10) = uVar2;
  *(undefined8 *)(pTVar4 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      local_48 = *(undefined8 *)(param_1 + lVar6 * 8 + 4);
      lVar6 = lVar6 + 1;
      pushSelector(this,(TVector *)(pTVar4 + 0xc0),(TMatrixSelector *)&local_48,param_2);
    } while ((int)lVar6 < *(int *)param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pTVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TConstUnionArray::~TConstUnionArray() */

void __thiscall glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermAggregate::TIntermAggregate() */

void __thiscall glslang::TIntermAggregate::TIntermAggregate(TIntermAggregate *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TSpirvInstruction::TSpirvInstruction() */

void __thiscall glslang::TSpirvInstruction::TSpirvInstruction(TSpirvInstruction *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::TType(glslang::TBasicType, glslang::TStorageQualifier, int, int, int, bool) */

void __thiscall glslang::TType::TType(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermAggregate::~TIntermAggregate() */

void __thiscall glslang::TIntermAggregate::~TIntermAggregate(TIntermAggregate *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TextureUpgradeAndSamplerRemovalTransform::~TextureUpgradeAndSamplerRemovalTransform() */

void __thiscall
glslang::TextureUpgradeAndSamplerRemovalTransform::~TextureUpgradeAndSamplerRemovalTransform
          (TextureUpgradeAndSamplerRemovalTransform *this)

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


