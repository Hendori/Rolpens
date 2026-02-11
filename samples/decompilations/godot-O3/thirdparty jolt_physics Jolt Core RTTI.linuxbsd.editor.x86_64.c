
/* JPH::RTTI::RTTI(char const*, int, void* (*)(), void (*)(void*)) */

void __thiscall
JPH::RTTI::RTTI(RTTI *this,char *param_1,int param_2,_func_void_ptr *param_3,
               _func_void_void_ptr *param_4)

{
  *(char **)this = param_1;
  *(int *)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  *(_func_void_ptr **)(this + 0x58) = param_3;
  *(_func_void_void_ptr **)(this + 0x60) = param_4;
  return;
}



/* JPH::RTTI::RTTI(char const*, int, void* (*)(), void (*)(void*), void (*)(JPH::RTTI&)) */

void __thiscall
JPH::RTTI::RTTI(RTTI *this,char *param_1,int param_2,_func_void_ptr *param_3,
               _func_void_void_ptr *param_4,_func_void_RTTI_ptr *param_5)

{
  *(char **)this = param_1;
  *(int *)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  *(_func_void_ptr **)(this + 0x58) = param_3;
  *(_func_void_void_ptr **)(this + 0x60) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00100039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_5)(this);
  return;
}



/* JPH::RTTI::GetBaseClassCount() const */

undefined4 __thiscall JPH::RTTI::GetBaseClassCount(RTTI *this)

{
  return *(undefined4 *)(this + 0x10);
}



/* JPH::RTTI::GetBaseClass(int) const */

undefined8 __thiscall JPH::RTTI::GetBaseClass(RTTI *this,int param_1)

{
  return *(undefined8 *)(this + (ulong)(uint)param_1 * 0x10 + 0x18);
}



/* JPH::RTTI::GetHash() const */

uint __thiscall JPH::RTTI::GetHash(RTTI *this)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  
  pcVar3 = *(char **)this;
  cVar1 = *pcVar3;
  if (cVar1 != '\0') {
    uVar4 = 0xcbf29ce484222325;
    do {
      uVar2 = (ulong)cVar1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      uVar4 = (uVar4 ^ uVar2) * 0x100000001b3;
    } while (cVar1 != '\0');
    return (uint)(uVar4 >> 0x20) ^ (uint)uVar4;
  }
  return 0x4fd0bfc1;
}



/* JPH::RTTI::CreateObject() const */

undefined8 __thiscall JPH::RTTI::CreateObject(RTTI *this)

{
  undefined8 uVar1;
  
  if ((*(code **)(this + 0x58) != (code *)0x0) && (*(long *)(this + 0x60) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x001000c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this + 0x58))();
    return uVar1;
  }
  return 0;
}



/* JPH::RTTI::DestructObject(void*) const */

void __thiscall JPH::RTTI::DestructObject(RTTI *this,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001000ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 0x60))(param_1);
  return;
}



/* JPH::RTTI::AddBaseClass(JPH::RTTI const*, int) */

void __thiscall JPH::RTTI::AddBaseClass(RTTI *this,RTTI *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x10);
  *(uint *)(this + 0x10) = uVar1 + 1;
  *(RTTI **)(this + (ulong)uVar1 * 0x10 + 0x18) = param_1;
  *(int *)(this + (ulong)uVar1 * 0x10 + 0x18 + 8) = param_2;
  return;
}



/* JPH::RTTI::TEMPNAMEPLACEHOLDERVALUE(JPH::RTTI const&) const */

bool __thiscall JPH::RTTI::operator==(RTTI *this,RTTI *param_1)

{
  return param_1 == this;
}



/* JPH::RTTI::IsKindOf(JPH::RTTI const*) const */

undefined8 __thiscall JPH::RTTI::IsKindOf(RTTI *this,RTTI *param_1)

{
  RTTI *pRVar1;
  RTTI *pRVar2;
  RTTI *pRVar3;
  RTTI *pRVar4;
  RTTI *pRVar5;
  RTTI *pRVar6;
  RTTI *pRVar7;
  RTTI *pRVar8;
  RTTI *pRVar9;
  RTTI *pRVar10;
  undefined8 uVar11;
  RTTI *pRVar12;
  RTTI *pRVar13;
  RTTI *pRVar14;
  RTTI *pRVar15;
  RTTI *pRVar16;
  RTTI *pRVar17;
  RTTI *pRVar18;
  RTTI *pRVar19;
  RTTI *pRVar20;
  
  if (this == param_1) {
    return 1;
  }
  pRVar18 = this + 0x18;
  pRVar1 = pRVar18 + (ulong)*(uint *)(this + 0x10) * 0x10;
  if ((ulong)*(uint *)(this + 0x10) != 0) {
    do {
      pRVar10 = *(RTTI **)pRVar18;
      if (pRVar10 == param_1) {
        return 1;
      }
      pRVar16 = pRVar10 + 0x18;
      pRVar2 = pRVar16 + (ulong)*(uint *)(pRVar10 + 0x10) * 0x10;
      if ((ulong)*(uint *)(pRVar10 + 0x10) != 0) {
        do {
          pRVar10 = *(RTTI **)pRVar16;
          if (param_1 == pRVar10) {
            return 1;
          }
          pRVar20 = pRVar10 + 0x18;
          pRVar3 = pRVar20 + (ulong)*(uint *)(pRVar10 + 0x10) * 0x10;
          if ((ulong)*(uint *)(pRVar10 + 0x10) != 0) {
            do {
              pRVar10 = *(RTTI **)pRVar20;
              if (param_1 == pRVar10) {
                return 1;
              }
              pRVar15 = pRVar10 + 0x18;
              pRVar9 = pRVar15 + (ulong)*(uint *)(pRVar10 + 0x10) * 0x10;
              if ((ulong)*(uint *)(pRVar10 + 0x10) != 0) {
                do {
                  pRVar10 = *(RTTI **)pRVar15;
                  if (param_1 == pRVar10) {
                    return 1;
                  }
                  pRVar19 = pRVar10 + 0x18;
                  pRVar4 = pRVar19 + (ulong)*(uint *)(pRVar10 + 0x10) * 0x10;
                  if ((ulong)*(uint *)(pRVar10 + 0x10) != 0) {
                    do {
                      pRVar10 = *(RTTI **)pRVar19;
                      if (param_1 == pRVar10) {
                        return 1;
                      }
                      pRVar17 = pRVar10 + 0x18;
                      pRVar5 = pRVar17 + (ulong)*(uint *)(pRVar10 + 0x10) * 0x10;
                      if ((ulong)*(uint *)(pRVar10 + 0x10) != 0) {
                        do {
                          pRVar10 = *(RTTI **)pRVar17;
                          if (param_1 == pRVar10) {
                            return 1;
                          }
                          pRVar14 = pRVar10 + 0x18;
                          pRVar6 = pRVar14 + (ulong)*(uint *)(pRVar10 + 0x10) * 0x10;
                          if ((ulong)*(uint *)(pRVar10 + 0x10) != 0) {
                            do {
                              pRVar10 = *(RTTI **)pRVar14;
                              if (param_1 == pRVar10) {
                                return 1;
                              }
                              pRVar12 = pRVar10 + 0x18;
                              pRVar7 = pRVar12 + (ulong)*(uint *)(pRVar10 + 0x10) * 0x10;
                              if ((ulong)*(uint *)(pRVar10 + 0x10) != 0) {
                                do {
                                  pRVar10 = *(RTTI **)pRVar12;
                                  if (param_1 == pRVar10) {
                                    return 1;
                                  }
                                  pRVar13 = pRVar10 + 0x18;
                                  pRVar8 = pRVar13 + (ulong)*(uint *)(pRVar10 + 0x10) * 0x10;
                                  if ((ulong)*(uint *)(pRVar10 + 0x10) != 0) {
                                    do {
                                      uVar11 = IsKindOf(*(RTTI **)pRVar13,param_1);
                                      if ((char)uVar11 != '\0') {
                                        return uVar11;
                                      }
                                      pRVar13 = pRVar13 + 0x10;
                                    } while (pRVar8 != pRVar13);
                                  }
                                  pRVar12 = pRVar12 + 0x10;
                                } while (pRVar7 != pRVar12);
                              }
                              pRVar14 = pRVar14 + 0x10;
                            } while (pRVar6 != pRVar14);
                          }
                          pRVar17 = pRVar17 + 0x10;
                        } while (pRVar5 != pRVar17);
                      }
                      pRVar19 = pRVar19 + 0x10;
                    } while (pRVar4 != pRVar19);
                  }
                  pRVar15 = pRVar15 + 0x10;
                } while (pRVar9 != pRVar15);
              }
              pRVar20 = pRVar20 + 0x10;
            } while (pRVar3 != pRVar20);
          }
          pRVar16 = pRVar16 + 0x10;
        } while (pRVar2 != pRVar16);
      }
      pRVar18 = pRVar18 + 0x10;
    } while (pRVar1 != pRVar18);
  }
  return 0;
}



/* JPH::RTTI::CastTo(void const*, JPH::RTTI const*) const */

void * __thiscall JPH::RTTI::CastTo(RTTI *this,void *param_1,RTTI *param_2)

{
  RTTI *pRVar1;
  RTTI *pRVar2;
  void *pvVar3;
  RTTI *pRVar4;
  void *pvVar5;
  RTTI *pRVar6;
  RTTI *pRVar7;
  RTTI *pRVar8;
  RTTI *pRVar9;
  RTTI *pRVar10;
  void *pvVar11;
  RTTI *pRVar12;
  RTTI *pRVar13;
  void *pvVar14;
  void *pvVar15;
  RTTI *pRVar16;
  RTTI *pRVar17;
  RTTI *pRVar18;
  RTTI *pRVar19;
  void *pvVar20;
  void *pvVar21;
  RTTI *pRVar22;
  void *pvVar23;
  void *pvVar24;
  RTTI *pRVar25;
  RTTI *pRVar26;
  RTTI *pRVar27;
  RTTI *pRVar28;
  
  if (this != param_2) {
    pRVar25 = this + 0x18;
    pRVar1 = pRVar25 + (ulong)*(uint *)(this + 0x10) * 0x10;
    if ((ulong)*(uint *)(this + 0x10) != 0) {
      do {
        pvVar11 = (void *)((long)param_1 + (long)*(int *)(pRVar25 + 8));
        pRVar13 = *(RTTI **)pRVar25;
        if (pRVar13 == param_2) {
          if (pvVar11 != (void *)0x0) {
            return pvVar11;
          }
        }
        else {
          pRVar28 = pRVar13 + 0x18;
          pRVar2 = pRVar28 + (ulong)*(uint *)(pRVar13 + 0x10) * 0x10;
          if ((ulong)*(uint *)(pRVar13 + 0x10) != 0) {
            do {
              pvVar3 = (void *)((long)pvVar11 + (long)*(int *)(pRVar28 + 8));
              pRVar13 = *(RTTI **)pRVar28;
              if (param_2 == pRVar13) {
                if (pvVar3 != (void *)0x0) {
                  return pvVar3;
                }
              }
              else {
                pRVar27 = pRVar13 + 0x18;
                pRVar4 = pRVar27 + (ulong)*(uint *)(pRVar13 + 0x10) * 0x10;
                if ((ulong)*(uint *)(pRVar13 + 0x10) != 0) {
                  do {
                    pvVar5 = (void *)((long)pvVar3 + (long)*(int *)(pRVar27 + 8));
                    pRVar13 = *(RTTI **)pRVar27;
                    if (param_2 == pRVar13) {
                      if (pvVar5 != (void *)0x0) {
                        return pvVar5;
                      }
                    }
                    else {
                      pRVar26 = pRVar13 + 0x18;
                      pRVar6 = pRVar26 + (ulong)*(uint *)(pRVar13 + 0x10) * 0x10;
                      if ((ulong)*(uint *)(pRVar13 + 0x10) != 0) {
                        do {
                          pvVar14 = (void *)((long)*(int *)(pRVar26 + 8) + (long)pvVar5);
                          pRVar13 = *(RTTI **)pRVar26;
                          if (param_2 == pRVar13) {
                            if (pvVar14 != (void *)0x0) {
                              return pvVar14;
                            }
                          }
                          else {
                            pRVar22 = pRVar13 + 0x18;
                            pRVar7 = pRVar22 + (ulong)*(uint *)(pRVar13 + 0x10) * 0x10;
                            if ((ulong)*(uint *)(pRVar13 + 0x10) != 0) {
                              do {
                                pvVar20 = (void *)((long)*(int *)(pRVar22 + 8) + (long)pvVar14);
                                pRVar13 = *(RTTI **)pRVar22;
                                if (param_2 == pRVar13) {
                                  if (pvVar20 != (void *)0x0) {
                                    return pvVar20;
                                  }
                                }
                                else {
                                  pRVar19 = pRVar13 + 0x18;
                                  pRVar8 = pRVar19 + (ulong)*(uint *)(pRVar13 + 0x10) * 0x10;
                                  if ((ulong)*(uint *)(pRVar13 + 0x10) != 0) {
                                    do {
                                      pRVar13 = *(RTTI **)pRVar19;
                                      pvVar23 = (void *)((long)*(int *)(pRVar19 + 8) + (long)pvVar20
                                                        );
                                      if (param_2 == pRVar13) {
                                        if (pvVar23 != (void *)0x0) {
                                          return pvVar23;
                                        }
                                      }
                                      else {
                                        pRVar18 = pRVar13 + 0x18;
                                        pRVar12 = pRVar18 + (ulong)*(uint *)(pRVar13 + 0x10) * 0x10;
                                        if ((ulong)*(uint *)(pRVar13 + 0x10) != 0) {
                                          do {
                                            pRVar13 = *(RTTI **)pRVar18;
                                            pvVar24 = (void *)((long)*(int *)(pRVar18 + 8) +
                                                              (long)pvVar23);
                                            if (param_2 == pRVar13) {
                                              if (pvVar24 != (void *)0x0) {
                                                return pvVar24;
                                              }
                                            }
                                            else {
                                              pRVar16 = pRVar13 + 0x18;
                                              pRVar9 = pRVar16 + (ulong)*(uint *)(pRVar13 + 0x10) *
                                                                 0x10;
                                              if ((ulong)*(uint *)(pRVar13 + 0x10) != 0) {
                                                do {
                                                  pRVar13 = *(RTTI **)pRVar16;
                                                  pvVar21 = (void *)((long)*(int *)(pRVar16 + 8) +
                                                                    (long)pvVar24);
                                                  if (param_2 == pRVar13) {
                                                    if (pvVar21 != (void *)0x0) {
                                                      return pvVar21;
                                                    }
                                                  }
                                                  else {
                                                    pRVar17 = pRVar13 + 0x18;
                                                    pRVar10 = pRVar17 + (ulong)*(uint *)(pRVar13 +
                                                                                        0x10) * 0x10
                                                    ;
                                                    if ((ulong)*(uint *)(pRVar13 + 0x10) != 0) {
                                                      do {
                                                        pvVar15 = (void *)CastTo(*(RTTI **)pRVar17,
                                                                                 (void *)((long)*(
                                                  int *)(pRVar17 + 8) + (long)pvVar21),param_2);
                                                  if (pvVar15 != (void *)0x0) {
                                                    return pvVar15;
                                                  }
                                                  pRVar17 = pRVar17 + 0x10;
                                                  } while (pRVar10 != pRVar17);
                                                  }
                                                  }
                                                  pRVar16 = pRVar16 + 0x10;
                                                } while (pRVar9 != pRVar16);
                                              }
                                            }
                                            pRVar18 = pRVar18 + 0x10;
                                          } while (pRVar12 != pRVar18);
                                        }
                                      }
                                      pRVar19 = pRVar19 + 0x10;
                                    } while (pRVar8 != pRVar19);
                                  }
                                }
                                pRVar22 = pRVar22 + 0x10;
                              } while (pRVar7 != pRVar22);
                            }
                          }
                          pRVar26 = pRVar26 + 0x10;
                        } while (pRVar6 != pRVar26);
                      }
                    }
                    pRVar27 = pRVar27 + 0x10;
                  } while (pRVar4 != pRVar27);
                }
              }
              pRVar28 = pRVar28 + 0x10;
            } while (pRVar2 != pRVar28);
          }
        }
        pRVar25 = pRVar25 + 0x10;
      } while (pRVar1 != pRVar25);
    }
    param_1 = (void *)0x0;
  }
  return param_1;
}



/* JPH::RTTI::RTTI(char const*, int, void* (*)(), void (*)(void*)) */

void JPH::RTTI::_GLOBAL__sub_I_RTTI(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC0;
  }
  return;
}


