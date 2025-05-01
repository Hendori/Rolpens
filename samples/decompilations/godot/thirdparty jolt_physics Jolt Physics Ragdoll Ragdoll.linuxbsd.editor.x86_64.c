
/* _FUN() */

void JPH::GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::{lambda()#1}::_FUN(void)

{
  long lVar1;
  
  lVar1 = (*Allocate)(0x10);
  *(undefined8 *)(lVar1 + 8) = 0;
  return;
}



/* JPH::RagdollSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::RagdollSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::RagdollSettings::Part::sCreateRTTI(JPH::RTTI&) */

void JPH::RagdollSettings::Part::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((BodyCreationSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::RagdollSettings*)::{lambda()#1}::_FUN(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*Allocate)(0x70);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  *(undefined8 *)(puVar1 + 0x1a) = 0;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x16) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::RagdollSettings::Part*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  
  pauVar5 = (undefined1 (*) [16])(*Allocate)(0x110);
  uVar2 = __LC1;
  uVar1 = CONCAT44(_LC6,_UNK_00106318);
  *(undefined2 *)(pauVar5[4] + 8) = 0;
  uVar4 = _LC5;
  *(undefined8 *)pauVar5[1] = uVar2;
  *(undefined8 *)(pauVar5[1] + 8) = uVar1;
  uVar2 = _UNK_00106328;
  uVar1 = __LC4;
  *(undefined8 *)pauVar5[6] = 0x10000003f02;
  *(undefined8 *)(pauVar5[6] + 0xc) = uVar1;
  *(undefined8 *)(pauVar5[7] + 4) = uVar2;
  uVar3 = _LC6;
  *pauVar5 = (undefined1  [16])0x0;
  pauVar5[2] = (undefined1  [16])0x0;
  pauVar5[3] = (undefined1  [16])0x0;
  pauVar5[0xb] = (undefined1  [16])0x0;
  pauVar5[0xc] = (undefined1  [16])0x0;
  pauVar5[0xd] = (undefined1  [16])0x0;
  pauVar5[0xe] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar5[4] = 0;
  *(undefined8 *)pauVar5[5] = 0;
  *(undefined8 *)(pauVar5[5] + 8) = 0xffffffffffffffff;
  *(undefined2 *)(pauVar5[6] + 8) = 0x100;
  *(undefined8 *)(pauVar5[7] + 0xc) = uVar4;
  *(undefined8 *)(pauVar5[8] + 8) = 0;
  pauVar5[9][0] = 0;
  *(undefined4 *)pauVar5[10] = 0;
  *(undefined8 *)pauVar5[0x10] = 0;
  *(undefined4 *)(pauVar5[8] + 4) = uVar3;
  *(undefined4 *)(pauVar5[9] + 4) = uVar3;
  pauVar5[0xf] = (undefined1  [16])0x0;
  return;
}



/* JPH::RagdollSettings::AdditionalConstraint::sCreateRTTI(JPH::RTTI&) */

void JPH::RagdollSettings::AdditionalConstraint::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::{lambda(void*)#1}::_FUN
               (void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)param_1 + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x001001f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(param_1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001001d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(param_1);
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::RagdollSettings::Part*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    plVar2 = *(long **)((long)param_1 + 0x100);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    plVar2 = *(long **)((long)param_1 + 0xf8);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    plVar2 = *(long **)((long)param_1 + 0xf0);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    plVar2 = *(long **)((long)param_1 + 0x50);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0010025a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::RagdollSettings::Part*) */

undefined1 * JPH::GetRTTIOfType(Part *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::RagdollSettings::Part*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::RagdollSettings::Part*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::RagdollSettings::Part*)::rtti,
                      "RagdollSettings::Part",0x110,
                      GetRTTIOfType(JPH::RagdollSettings::Part*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::RagdollSettings::Part*)::{lambda(void*)#1}::_FUN,
                      RagdollSettings::Part::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::RagdollSettings::Part*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::RagdollSettings::Part*)::rtti);
      return GetRTTIOfType(JPH::RagdollSettings::Part*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::RagdollSettings::Part*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*) */

undefined1 * JPH::GetRTTIOfType(AdditionalConstraint *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::rtti,
                      "RagdollSettings::AdditionalConstraint",0x10,
                      GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::{lambda()#1}::_FUN
                      ,GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::{lambda(void*)#1}
                       ::_FUN,RagdollSettings::AdditionalConstraint::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::rtti);
      return GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::RagdollSettings::AdditionalConstraint*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::RagdollSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
    RagdollSettings::~RagdollSettings((RagdollSettings *)param_1);
                    /* WARNING: Could not recover jumptable at 0x001003f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::RagdollSettings*) */

undefined1 * JPH::GetRTTIOfType(RagdollSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::RagdollSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::RagdollSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::RagdollSettings*)::rtti,"RagdollSettings",0x70,
                      GetRTTIOfType(JPH::RagdollSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::RagdollSettings*)::{lambda(void*)#1}::_FUN,
                      RagdollSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::RagdollSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::RagdollSettings*)::rtti);
      return GetRTTIOfType(JPH::RagdollSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::RagdollSettings*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RagdollSettings::Stabilize() */

undefined1 __thiscall JPH::RagdollSettings::Stabilize(RagdollSettings *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  char cVar20;
  undefined1 uVar21;
  int iVar22;
  undefined1 *puVar23;
  int *piVar24;
  long lVar25;
  float *pfVar26;
  float *pfVar27;
  ulong uVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined1 *puVar35;
  ulong uVar36;
  long lVar37;
  int iVar38;
  ulong uVar39;
  ulong uVar40;
  long in_FS_OFFSET;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  ulong local_1b8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [4];
  float afStack_144 [3];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  float local_108 [16];
  undefined1 local_c8 [4];
  float afStack_c4 [3];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = 1;
  iVar22 = (int)*(undefined8 *)(*(long *)(this + 8) + 8);
  if (iVar22 != 0) {
    lVar37 = 0;
    puVar23 = (undefined1 *)(*Reallocate)(0,0,(long)iVar22);
    puVar35 = puVar23;
    do {
      while ((lVar32 = *(long *)(this + 0x20) + lVar37, *(char *)(lVar32 + 0x62) == '\0' &&
             (*(char *)(lVar32 + 0x60) == '\0'))) {
        *puVar35 = 1;
LAB_0010054b:
        puVar35 = puVar35 + 1;
        lVar37 = lVar37 + 0x110;
        if (puVar23 + iVar22 == puVar35) goto LAB_001005e9;
      }
      cVar20 = *(char *)(lVar32 + 0x90);
      *puVar35 = 0;
      if (cVar20 == '\x02') goto LAB_0010054b;
      puVar35 = puVar35 + 1;
      JPH::BodyCreationSettings::GetMassProperties();
      lVar37 = lVar37 + 0x110;
      *(undefined8 *)(lVar32 + 0xa0) = local_198;
      *(undefined8 *)(lVar32 + 0xa8) = uStack_190;
      *(undefined8 *)(lVar32 + 0xb0) = local_188;
      *(undefined8 *)(lVar32 + 0xb8) = uStack_180;
      *(undefined1 (*) [16])(lVar32 + 0xc0) = local_178;
      *(undefined8 *)(lVar32 + 0xd0) = local_168;
      *(undefined8 *)(lVar32 + 0xd8) = uStack_160;
      *(undefined1 *)(lVar32 + 0x90) = 2;
      *(undefined8 *)(lVar32 + 0xe0) = local_158;
      *(undefined8 *)(lVar32 + 0xe8) = uStack_150;
    } while (puVar23 + iVar22 != puVar35);
LAB_001005e9:
    lVar37 = *(long *)(this + 8);
    iVar22 = (int)*(undefined8 *)(lVar37 + 8);
    if (iVar22 < 1) {
      if (puVar23 == (undefined1 *)0x0) {
        uVar21 = 1;
        goto LAB_001004eb;
      }
    }
    else {
      local_1b8 = 0;
      do {
        uVar28 = (ulong)iVar22;
        iVar22 = *(int *)(*(long *)(lVar37 + 0x18) + local_1b8 * 0x48 + 0x40);
        if ((puVar23[local_1b8] == '\0') && ((iVar22 == -1 || (puVar23[iVar22] != '\0')))) {
          lVar32 = 0;
          uVar39 = 1;
          uVar36 = local_1b8 & 0xffffffff;
          piVar24 = (int *)(*Reallocate)(0,0,uVar28 * 4);
          puVar23[local_1b8] = 1;
          *piVar24 = (int)local_1b8;
          lVar37 = *(long *)(this + 8);
          while( true ) {
            iVar22 = (int)*(undefined8 *)(lVar37 + 8);
            if (0 < iVar22) {
              lVar33 = 0;
              uVar40 = uVar39;
              do {
                uVar39 = uVar40;
                if ((puVar23[lVar33] == '\0') &&
                   (*(int *)(*(long *)(lVar37 + 0x18) + lVar33 * 0x48 + 0x40) == (int)uVar36)) {
                  uVar39 = uVar40 + 1;
                  puVar23[lVar33] = 1;
                  if (uVar28 < uVar39) {
                    uVar3 = uVar28 * 2;
                    lVar37 = uVar28 * 4;
                    uVar28 = uVar3;
                    if (uVar3 < uVar39) {
                      uVar28 = uVar39;
                    }
                    piVar24 = (int *)(*Reallocate)(piVar24,lVar37,uVar28 * 4);
                    lVar37 = *(long *)(this + 8);
                  }
                  piVar24[uVar40] = (int)lVar33;
                }
                lVar33 = lVar33 + 1;
                iVar22 = (int)*(undefined8 *)(lVar37 + 8);
                uVar40 = uVar39;
              } while ((int)lVar33 < iVar22);
            }
            lVar32 = lVar32 + 1;
            iVar38 = (int)uVar39;
            if (iVar38 <= (int)lVar32) break;
            uVar36 = (ulong)(uint)piVar24[lVar32];
          }
          if (uVar39 == 1) {
            if (piVar24 == (int *)0x0) goto LAB_00100608;
          }
          else {
            lVar37 = 0;
            if ((long)iVar22 != 0) {
              lVar37 = (*Reallocate)(0,0,(long)iVar22 * 4);
            }
            fVar48 = _LC6;
            *(float *)(lVar37 + (long)*piVar24 * 4) = _LC6;
            if (1 < iVar38) {
              lVar32 = *(long *)(this + 0x20);
              piVar29 = piVar24 + 1;
              lVar33 = *(long *)(*(long *)(this + 8) + 0x18);
              do {
                lVar25 = (long)*piVar29;
                lVar34 = (long)*(int *)(lVar33 + 0x40 + lVar25 * 0x48);
                fVar42 = *(float *)(lVar32 + 0xa0 + lVar25 * 0x110) /
                         *(float *)(lVar32 + 0xa0 + lVar34 * 0x110);
                fVar41 = _LC15;
                if ((_LC15 <= fVar42) && (fVar41 = fVar42, _LC16 < fVar42)) {
                  fVar41 = _LC16;
                }
                fVar41 = fVar41 * *(float *)(lVar37 + lVar34 * 4);
                piVar29 = piVar29 + 1;
                fVar48 = fVar48 + fVar41;
                *(float *)(lVar37 + lVar25 * 4) = fVar41;
              } while (piVar29 != piVar24 + (ulong)(iVar38 - 2) + 2);
            }
            piVar29 = piVar24 + uVar39;
            piVar31 = piVar24;
            if (piVar24 == piVar29) {
              lVar32 = *(long *)(this + 0x10);
              if (lVar32 != 0) goto LAB_00100dc9;
              uVar28 = 0;
              if (0 < iVar38 + -1) goto LAB_001009c2;
            }
            else {
              lVar33 = *(long *)(this + 0x20);
              fVar41 = 0.0;
              piVar30 = piVar24;
              do {
                iVar22 = *piVar30;
                piVar30 = piVar30 + 1;
                fVar41 = fVar41 + *(float *)(lVar33 + 0xa0 + (long)iVar22 * 0x110);
              } while (piVar30 != piVar29);
              piVar30 = piVar24;
              do {
                fVar43 = *(float *)(lVar37 + (long)*piVar30 * 4) * (fVar41 / fVar48);
                lVar32 = (long)*piVar30 * 0x110 + lVar33;
                fVar42 = *(float *)(lVar32 + 0xa0);
                *(float *)(lVar32 + 0xa0) = fVar43;
                fVar43 = fVar43 / fVar42;
                pfVar27 = (float *)(lVar32 + 0xb0);
                do {
                  pfVar26 = pfVar27 + 4;
                  *pfVar27 = *pfVar27 * fVar43;
                  pfVar27[1] = pfVar27[1] * fVar43;
                  pfVar27[2] = pfVar27[2] * fVar43;
                  pfVar27[3] = pfVar27[3] * fVar43;
                  pfVar27 = pfVar26;
                } while ((float *)(lVar32 + 0xf0) != pfVar26);
                uVar19 = CONCAT44(_LC6,_UNK_00106318);
                piVar30 = piVar30 + 1;
                *(undefined8 *)(lVar32 + 0xe0) = __LC1;
                *(undefined8 *)(lVar32 + 0xe8) = uVar19;
              } while (piVar30 != piVar29);
              lVar32 = *(long *)(this + 0x10);
              uVar28 = 0;
              if (lVar32 == 0) {
LAB_0010091a:
                while( true ) {
                  cVar20 = JPH::MassProperties::DecomposePrincipalMomentsOfInertia
                                     ((Mat44 *)(lVar33 + 0xa0 + (long)*piVar31 * 0x110),
                                      (Vec3 *)((long)*piVar31 * 0x60 + uVar28));
                  if (cVar20 == '\0') {
                    if (uVar28 != 0) {
                      (*Free)(uVar28);
                    }
                    if (lVar37 != 0) {
                      (*Free)(lVar37);
                    }
                    (*Free)(piVar24);
                    uVar21 = 0;
                    goto LAB_00100994;
                  }
                  if (piVar29 == piVar31 + 1) break;
                  lVar33 = *(long *)(this + 0x20);
                  piVar31 = piVar31 + 1;
                }
                if (0 < iVar38 + -1) {
LAB_001009c2:
                  lVar33 = (long)(iVar38 + -1);
                  lVar32 = *(long *)(*(long *)(this + 8) + 0x18);
                  do {
                    piVar31 = piVar24 + lVar33;
                    lVar33 = lVar33 + -1;
                    lVar34 = (long)*piVar31 * 0x60;
                    lVar25 = (long)*(int *)(lVar32 + 0x40 + (long)*piVar31 * 0x48) * 0x60 + uVar28;
                    *(float *)(lVar25 + 0x50) =
                         *(float *)(uVar28 + 0x50 + lVar34) + *(float *)(uVar28 + 0x40 + lVar34) +
                         *(float *)(lVar25 + 0x50);
                  } while (0 < (int)lVar33);
                }
                if (piVar24 != piVar29) {
                  lVar32 = *(long *)(this + 0x20);
                  auVar18._8_4_ = _UNK_00106318;
                  auVar18._0_8_ = __LC1;
                  auVar18._12_4_ = _LC6;
                  piVar31 = piVar24;
                  do {
                    while( true ) {
                      iVar22 = *piVar31;
                      pfVar27 = (float *)((long)iVar22 * 0x60 + uVar28);
                      fVar48 = pfVar27[0x14];
                      if (fVar48 == 0.0) break;
                      fVar42 = pfVar27[4];
                      fVar43 = pfVar27[5];
                      fVar4 = pfVar27[6];
                      fVar5 = pfVar27[7];
                      local_98 = auVar18;
                      fVar6 = pfVar27[8];
                      fVar7 = pfVar27[9];
                      fVar8 = pfVar27[10];
                      fVar9 = pfVar27[0xb];
                      local_118 = auVar18;
                      fVar44 = pfVar27[0x10] + pfVar27[0x10];
                      fVar10 = *pfVar27;
                      fVar11 = pfVar27[1];
                      fVar12 = pfVar27[2];
                      fVar13 = pfVar27[3];
                      fVar41 = pfVar27[8];
                      if (fVar44 <= fVar48) {
                        fVar48 = fVar44;
                      }
                      fVar44 = pfVar27[10];
                      auVar45._4_4_ = fVar48;
                      auVar45._0_4_ = fVar48;
                      auVar45._8_4_ = fVar48;
                      auVar45._12_4_ = fVar48;
                      auVar50 = maxps(*(undefined1 (*) [16])(pfVar27 + 0x10),auVar45);
                      *(undefined1 (*) [16])(pfVar27 + 0x10) = auVar50;
                      fVar48 = pfVar27[9];
                      fVar51 = fVar12 * (fVar7 * fVar42 - fVar43 * fVar6) +
                               (fVar6 * fVar4 - fVar42 * fVar8) * fVar11 +
                               fVar10 * (fVar8 * fVar43 - fVar4 * fVar7) + 0.0;
                      auVar46._0_4_ = fVar48 * pfVar27[4] - pfVar27[5] * fVar41;
                      auVar46._4_4_ = pfVar27[1] * fVar41 - fVar48 * *pfVar27;
                      auVar46._8_4_ = pfVar27[5] * *pfVar27 - pfVar27[1] * pfVar27[4];
                      auVar46._12_4_ = 0;
                      auVar52._0_4_ = pfVar27[5] * fVar44 - fVar48 * pfVar27[6];
                      auVar52._4_4_ = fVar48 * pfVar27[2] - pfVar27[1] * fVar44;
                      auVar52._8_4_ = pfVar27[1] * pfVar27[6] - pfVar27[5] * pfVar27[2];
                      auVar52._12_4_ = 0;
                      auVar1._4_4_ = fVar51;
                      auVar1._0_4_ = fVar51;
                      auVar1._8_4_ = fVar51;
                      auVar1._12_4_ = fVar51;
                      local_a8 = divps(auVar46,auVar1);
                      auVar49._0_4_ = pfVar27[6] * fVar41 - fVar44 * pfVar27[4];
                      auVar49._4_4_ = fVar44 * *pfVar27 - pfVar27[2] * fVar41;
                      auVar49._8_4_ = pfVar27[2] * pfVar27[4] - pfVar27[6] * *pfVar27;
                      auVar49._12_4_ = 0;
                      auVar2._4_4_ = fVar51;
                      auVar2._0_4_ = fVar51;
                      auVar2._8_4_ = fVar51;
                      auVar2._12_4_ = fVar51;
                      _local_c8 = divps(auVar52,auVar2);
                      register0x00001204 = SUB128(ZEXT812(0),4);
                      local_148 = auVar50._0_4_;
                      register0x0000120c = 0;
                      local_138 = ZEXT416(auVar50._4_4_) << 0x20;
                      local_128 = ZEXT416(auVar50._8_4_) << 0x40;
                      auVar50._4_4_ = fVar51;
                      auVar50._0_4_ = fVar51;
                      auVar50._8_4_ = fVar51;
                      auVar50._12_4_ = fVar51;
                      local_b8 = divps(auVar49,auVar50);
                      fVar48 = pfVar27[0xc];
                      fVar41 = pfVar27[0xd];
                      fVar44 = pfVar27[0xe];
                      fVar51 = pfVar27[0xf];
                      lVar33 = 0;
                      do {
                        fVar14 = *(float *)(local_148 + lVar33);
                        fVar15 = *(float *)(local_148 + lVar33 + 4);
                        fVar16 = *(float *)(local_148 + lVar33 + 8);
                        fVar17 = *(float *)(local_148 + lVar33 + 0xc);
                        *(float *)((long)local_108 + lVar33) =
                             fVar17 * fVar48 + fVar15 * fVar42 + fVar14 * fVar10 + fVar16 * fVar6;
                        *(float *)((long)local_108 + lVar33 + 4) =
                             fVar17 * fVar41 + fVar15 * fVar43 + fVar14 * fVar11 + fVar16 * fVar7;
                        *(float *)((long)local_108 + lVar33 + 8) =
                             fVar17 * fVar44 + fVar15 * fVar4 + fVar14 * fVar12 + fVar16 * fVar8;
                        *(float *)((long)local_108 + lVar33 + 0xc) =
                             fVar17 * fVar51 + fVar15 * fVar5 + fVar14 * fVar13 + fVar16 * fVar9;
                        lVar33 = lVar33 + 0x10;
                      } while (lVar33 != 0x40);
                      lVar33 = 0;
                      do {
                        fVar48 = *(float *)(local_c8 + lVar33);
                        fVar41 = *(float *)(local_c8 + lVar33 + 4);
                        fVar42 = *(float *)(local_c8 + lVar33 + 8);
                        fVar43 = *(float *)(local_c8 + lVar33 + 0xc);
                        auVar47._0_4_ =
                             fVar43 * local_108[0xc] +
                             fVar48 * local_108[0] + fVar41 * local_108[4] + fVar42 * local_108[8];
                        auVar47._4_4_ =
                             fVar43 * local_108[0xd] +
                             fVar48 * local_108[1] + fVar41 * local_108[5] + fVar42 * local_108[9];
                        auVar47._8_4_ =
                             fVar43 * local_108[0xe] +
                             fVar48 * local_108[2] + fVar41 * local_108[6] + fVar42 * local_108[10];
                        auVar47._12_4_ =
                             fVar43 * local_108[0xf] +
                             fVar48 * local_108[3] + fVar41 * local_108[7] + fVar42 * local_108[0xb]
                        ;
                        *(undefined1 (*) [16])((long)&local_88 + lVar33) = auVar47;
                        lVar33 = lVar33 + 0x10;
                      } while (lVar33 != 0x40);
                      piVar31 = piVar31 + 1;
                      lVar33 = (long)iVar22 * 0x110 + lVar32;
                      *(undefined8 *)(lVar33 + 0xb0) = local_88;
                      *(undefined8 *)(lVar33 + 0xb8) = uStack_80;
                      *(undefined8 *)(lVar33 + 0xc0) = local_78;
                      *(undefined8 *)(lVar33 + 200) = uStack_70;
                      *(undefined8 *)(lVar33 + 0xd0) = local_68;
                      *(undefined8 *)(lVar33 + 0xd8) = uStack_60;
                      *(undefined8 *)(lVar33 + 0xe0) = local_58;
                      *(undefined8 *)(lVar33 + 0xe8) = uStack_50;
                      if (piVar29 == piVar31) goto LAB_00100d3c;
                    }
                    piVar31 = piVar31 + 1;
                  } while (piVar29 != piVar31);
                }
              }
              else {
LAB_00100dc9:
                uVar28 = (*Reallocate)(0,0,lVar32 * 0x60);
                for (uVar39 = uVar28; uVar39 < uVar28 + lVar32 * 0x60; uVar39 = uVar39 + 0x60) {
                  *(undefined4 *)(uVar39 + 0x50) = 0;
                }
                if (piVar24 != piVar29) {
                  lVar33 = *(long *)(this + 0x20);
                  goto LAB_0010091a;
                }
                if (0 < iVar38 + -1) goto LAB_001009c2;
              }
LAB_00100d3c:
              if (uVar28 != 0) {
                (*Free)(uVar28);
              }
            }
            if (lVar37 != 0) {
              (*Free)(lVar37);
            }
          }
          (*Free)(piVar24);
          lVar37 = *(long *)(this + 8);
        }
LAB_00100608:
        local_1b8 = local_1b8 + 1;
        iVar22 = (int)*(undefined8 *)(lVar37 + 8);
      } while ((int)local_1b8 < iVar22);
    }
    uVar21 = 1;
LAB_00100994:
    (*Free)(puVar23);
  }
LAB_001004eb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar21;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RagdollSettings::DisableParentChildCollisions(JPH::Mat44 const*, float) */

void __thiscall
JPH::RagdollSettings::DisableParentChildCollisions
          (RagdollSettings *this,Mat44 *param_1,float param_2)

{
  long *plVar1;
  void *__s;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  Mat44 *pMVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [12];
  undefined1 local_628 [8];
  undefined8 uStack_620;
  undefined1 local_618 [16];
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined **local_598;
  undefined4 local_590;
  undefined2 local_588 [2];
  undefined8 local_584;
  undefined1 local_578 [16];
  float local_568;
  undefined1 local_564;
  undefined8 local_558;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  float local_528;
  float local_524;
  float local_520;
  undefined4 local_51c;
  undefined8 local_518;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  undefined4 local_4dc;
  undefined **local_4d8;
  undefined4 local_4d0;
  undefined8 local_4c8;
  undefined1 local_484 [16];
  undefined4 local_268;
  char local_58;
  long local_40;
  undefined1 auVar38 [16];
  undefined1 auVar44 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = (uint)*(undefined8 *)(*(long *)(this + 8) + 8);
  plVar6 = (long *)(*Allocate)(0x28);
  *(undefined4 *)(plVar6 + 1) = 0;
  *plVar6 = (long)&CollisionDispatch::sCollideShape;
  *(uint *)((long)plVar6 + 0xc) = uVar16;
  plVar6[4] = 0;
  *(undefined1 (*) [16])(plVar6 + 2) = (undefined1  [16])0x0;
  uVar5 = ((uVar16 - 1) * uVar16 >> 1) + 7 >> 3;
  uVar10 = (ulong)uVar5;
  if (uVar5 != 0) {
    lVar13 = (*Reallocate)(0,0,uVar10);
    plVar6[3] = uVar10;
    plVar6[4] = lVar13;
    __s = (void *)(lVar13 + plVar6[2]);
    if (__s < (void *)(lVar13 + uVar10)) {
      memset(__s,0xff,uVar10 - plVar6[2]);
    }
  }
  plVar6[2] = uVar10;
  plVar1 = plVar6 + 1;
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  lVar13 = 0;
  uVar5 = 0;
  if (0 < (int)uVar16) {
    do {
      uVar17 = *(uint *)(*(long *)(*(long *)(this + 8) + 0x18) + 0x40 + lVar13);
      if (-1 < (int)uVar17) {
        uVar18 = uVar17;
        uVar4 = uVar5;
        if (uVar17 < uVar5) {
          uVar18 = uVar5;
          uVar4 = uVar17;
        }
        iVar9 = ((uVar18 - 1) * uVar18 >> 1) + uVar4;
        pbVar14 = (byte *)((long)(iVar9 >> 3) + plVar6[4]);
        *pbVar14 = *pbVar14 & ~(byte)(1 << ((byte)iVar9 & 7));
      }
      uVar5 = uVar5 + 1;
      lVar13 = lVar13 + 0x48;
    } while (uVar5 != uVar16);
    if (param_1 != (Mat44 *)0x0) {
      uVar10 = 0;
      while( true ) {
        lVar13 = uVar10 * 0x110 + *(long *)(this + 0x20);
        plVar7 = (long *)JPH::BodyCreationSettings::GetShape();
        if (*(code **)(*plVar7 + 0x18) == Shape::GetCenterOfMass) {
          fVar33 = 0.0;
          local_628._4_4_ = 0.0;
          local_628._0_4_ = 0.0;
        }
        else {
          auVar51 = (**(code **)(*plVar7 + 0x18))(plVar7);
          fVar33 = auVar51._8_4_;
          local_628._0_4_ = auVar51._0_4_;
          local_628._4_4_ = auVar51._4_4_;
        }
        auVar30 = *(undefined1 (*) [16])param_1;
        fVar29 = auVar30._0_4_;
        fVar31 = auVar30._4_4_;
        fVar32 = auVar30._8_4_;
        fVar34 = *(float *)(param_1 + 0x10);
        fVar50 = *(float *)(param_1 + 0x14);
        fVar21 = *(float *)(param_1 + 0x18);
        fVar20 = *(float *)(param_1 + 0x20);
        fVar24 = *(float *)(param_1 + 0x24);
        fVar25 = *(float *)(param_1 + 0x28);
        local_528 = (float)local_628._0_4_ * fVar29 + (float)local_628._4_4_ * fVar34 +
                    fVar33 * fVar20 + *(float *)(param_1 + 0x30);
        local_524 = (float)local_628._0_4_ * fVar31 + (float)local_628._4_4_ * fVar50 +
                    fVar33 * fVar24 + *(float *)(param_1 + 0x34);
        local_520 = (float)local_628._0_4_ * fVar32 + (float)local_628._4_4_ * fVar21 +
                    fVar33 * fVar25 + *(float *)(param_1 + 0x38);
        fVar49 = fVar32 * fVar32 + fVar31 * fVar31 + fVar29 * fVar29 + 0.0;
        fVar33 = (fVar21 * fVar32 + fVar50 * fVar31 + fVar34 * fVar29 + 0.0) / fVar49;
        auVar27._0_4_ = fVar34 - fVar33 * fVar29;
        auVar27._4_4_ = fVar50 - fVar33 * fVar31;
        auVar27._8_4_ = fVar21 - fVar33 * fVar32;
        auVar27._12_4_ = *(float *)(param_1 + 0x1c) - fVar33 * auVar30._12_4_;
        fVar33 = (fVar25 * fVar32 + fVar31 * fVar24 + fVar20 * fVar29 + 0.0) / fVar49;
        fVar20 = fVar20 - fVar33 * fVar29;
        fVar24 = fVar24 - fVar33 * fVar31;
        fVar25 = fVar25 - fVar33 * fVar32;
        fVar50 = auVar27._8_4_ * auVar27._8_4_ +
                 auVar27._4_4_ * auVar27._4_4_ + auVar27._0_4_ * auVar27._0_4_ + 0.0;
        fVar34 = (auVar27._8_4_ * fVar25 + fVar24 * auVar27._4_4_ + fVar20 * auVar27._0_4_ + 0.0) /
                 fVar50;
        auVar22._0_4_ = fVar20 - fVar34 * auVar27._0_4_;
        auVar22._4_4_ = fVar24 - fVar34 * auVar27._4_4_;
        auVar22._8_4_ = fVar25 - fVar34 * auVar27._8_4_;
        auVar22._12_4_ =
             (*(float *)(param_1 + 0x2c) - fVar33 * auVar30._12_4_) - fVar34 * auVar27._12_4_;
        auVar35._4_4_ = auVar22._8_4_;
        auVar35._0_4_ = auVar22._8_4_;
        auVar35._8_4_ = auVar22._12_4_;
        auVar35._12_4_ = auVar22._12_4_;
        auVar36._4_12_ = auVar35._4_12_;
        auVar36._0_4_ =
             auVar22._8_4_ * auVar22._8_4_ +
             auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_ + 0.0;
        auVar38._0_8_ = auVar36._0_8_;
        auVar38._8_4_ = auVar22._8_4_;
        auVar38._12_4_ = auVar22._8_4_;
        auVar37._8_8_ = auVar38._8_8_;
        auVar37._4_4_ = auVar36._0_4_;
        auVar37._0_4_ = auVar36._0_4_;
        auVar39._4_4_ = fVar50;
        auVar39._0_4_ = fVar49;
        auVar39._8_4_ = auVar36._0_4_;
        auVar39._12_4_ = auVar36._0_4_;
        auVar39 = sqrtps(auVar37,auVar39);
        uVar5 = auVar39._8_4_;
        auVar40._4_4_ = auVar39._4_4_;
        local_618 = auVar39;
        if ((auVar27._4_4_ * fVar29 - fVar31 * auVar27._0_4_) * auVar22._8_4_ +
            (auVar27._0_4_ * fVar32 - fVar29 * auVar27._8_4_) * auVar22._4_4_ +
            (auVar27._8_4_ * fVar31 - fVar32 * auVar27._4_4_) * auVar22._0_4_ + 0.0 < 0.0) {
          uVar5 = uVar5 ^ __LC17;
          local_618._12_4_ = uVar5;
          local_618._8_4_ = uVar5;
          local_618._0_8_ = auVar39._0_8_;
        }
        auVar47._0_4_ = local_618._0_4_;
        auVar47._4_4_ = auVar47._0_4_;
        auVar47._8_4_ = auVar47._0_4_;
        auVar47._12_4_ = auVar47._0_4_;
        auVar30 = divps(auVar30,auVar47);
        auVar40._0_4_ = auVar40._4_4_;
        auVar40._8_4_ = auVar40._4_4_;
        auVar40._12_4_ = auVar40._4_4_;
        local_51c = 0x3f800000;
        local_54c = 0;
        local_53c = 0;
        local_52c = 0;
        auVar39 = divps(auVar27,auVar40);
        local_558 = auVar30._0_8_;
        local_550 = auVar30._8_4_;
        auVar30._4_4_ = uVar5;
        auVar30._0_4_ = uVar5;
        auVar30._8_4_ = uVar5;
        auVar30._12_4_ = uVar5;
        auVar30 = divps(auVar22,auVar30);
        local_548 = auVar39._0_4_;
        local_544 = auVar39._4_4_;
        local_540 = auVar39._8_4_;
        local_538 = auVar30._0_4_;
        local_534 = auVar30._4_4_;
        local_530 = auVar30._8_4_;
        if (uVar10 == uVar16 - 1) break;
        uVar12 = uVar10 + 1;
        pMVar15 = param_1;
        do {
          while( true ) {
            uVar5 = (uint)uVar12;
            uVar18 = (uint)uVar10;
            uVar17 = uVar18;
            if (uVar5 < uVar18) {
              uVar17 = uVar5;
              uVar5 = uVar18;
            }
            uVar17 = ((uVar5 - 1) * uVar5 >> 1) + uVar17;
            uVar5 = uVar17 & 7;
            lVar19 = (long)((int)uVar17 >> 3);
            if ((*(byte *)(plVar6[4] + lVar19) >> uVar5 & 1) != 0) break;
LAB_001012e0:
            uVar12 = uVar12 + 1;
            pMVar15 = pMVar15 + 0x40;
            if ((int)uVar16 <= (int)uVar12) goto LAB_001017f0;
          }
          lVar11 = uVar12 * 0x110 + *(long *)(this + 0x20);
          plVar8 = (long *)JPH::BodyCreationSettings::GetShape();
          if (*(code **)(*plVar8 + 0x18) == Shape::GetCenterOfMass) {
            auVar46 = SUB1612((undefined1  [16])0x0,0);
            local_628._4_4_ = 0.0;
            auVar51 = ZEXT812(0);
          }
          else {
            auVar51 = (**(code **)(*plVar8 + 0x18))();
            uVar26 = auVar51._8_4_;
            local_628._0_4_ = auVar51._0_4_;
            local_628._4_4_ = auVar51._4_4_;
            auVar51._4_4_ = local_628._0_4_;
            auVar51._0_4_ = local_628._0_4_;
            auVar51._8_4_ = local_628._0_4_;
            auVar46._4_4_ = uVar26;
            auVar46._0_4_ = uVar26;
            auVar46._8_4_ = uVar26;
          }
          auVar30 = *(undefined1 (*) [16])(pMVar15 + 0x40);
          fVar25 = auVar30._0_4_;
          fVar29 = auVar30._4_4_;
          fVar31 = auVar30._8_4_;
          fVar33 = *(float *)(pMVar15 + 0x50);
          fVar34 = *(float *)(pMVar15 + 0x54);
          fVar50 = *(float *)(pMVar15 + 0x58);
          fVar21 = *(float *)(pMVar15 + 0x60);
          fVar20 = *(float *)(pMVar15 + 100);
          fVar24 = *(float *)(pMVar15 + 0x68);
          local_4e8 = auVar51._0_4_ * fVar25 + (float)local_628._4_4_ * fVar33 +
                      auVar46._0_4_ * fVar21 + *(float *)(pMVar15 + 0x70);
          local_4e4 = auVar51._4_4_ * fVar29 + (float)local_628._4_4_ * fVar34 +
                      auVar46._4_4_ * fVar20 + *(float *)(pMVar15 + 0x74);
          local_4e0 = auVar51._8_4_ * fVar31 + (float)local_628._4_4_ * fVar50 +
                      auVar46._8_4_ * fVar24 + *(float *)(pMVar15 + 0x78);
          fVar49 = fVar31 * fVar31 + fVar29 * fVar29 + fVar25 * fVar25 + 0.0;
          fVar32 = (fVar50 * fVar31 + fVar34 * fVar29 + fVar33 * fVar25 + 0.0) / fVar49;
          auVar28._0_4_ = fVar33 - fVar32 * fVar25;
          auVar28._4_4_ = fVar34 - fVar32 * fVar29;
          auVar28._8_4_ = fVar50 - fVar32 * fVar31;
          auVar28._12_4_ = *(float *)(pMVar15 + 0x5c) - fVar32 * auVar30._12_4_;
          fVar33 = (fVar24 * fVar31 + fVar29 * fVar20 + fVar21 * fVar25 + 0.0) / fVar49;
          fVar21 = fVar21 - fVar33 * fVar25;
          fVar20 = fVar20 - fVar33 * fVar29;
          fVar24 = fVar24 - fVar33 * fVar31;
          fVar50 = auVar28._8_4_ * auVar28._8_4_ +
                   auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_ + 0.0;
          fVar34 = (auVar28._8_4_ * fVar24 + fVar20 * auVar28._4_4_ + fVar21 * auVar28._0_4_ + 0.0)
                   / fVar50;
          auVar23._0_4_ = fVar21 - fVar34 * auVar28._0_4_;
          auVar23._4_4_ = fVar20 - fVar34 * auVar28._4_4_;
          auVar23._8_4_ = fVar24 - fVar34 * auVar28._8_4_;
          auVar23._12_4_ =
               (*(float *)(pMVar15 + 0x6c) - fVar33 * auVar30._12_4_) - fVar34 * auVar28._12_4_;
          auVar41._4_4_ = auVar23._8_4_;
          auVar41._0_4_ = auVar23._8_4_;
          auVar41._8_4_ = auVar23._12_4_;
          auVar41._12_4_ = auVar23._12_4_;
          auVar42._4_12_ = auVar41._4_12_;
          auVar42._0_4_ =
               auVar23._8_4_ * auVar23._8_4_ +
               auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_ + 0.0;
          auVar44._0_8_ = auVar42._0_8_;
          auVar44._8_4_ = auVar23._8_4_;
          auVar44._12_4_ = auVar23._8_4_;
          auVar43._8_8_ = auVar44._8_8_;
          auVar43._4_4_ = auVar42._0_4_;
          auVar43._0_4_ = auVar42._0_4_;
          auVar2._4_4_ = fVar50;
          auVar2._0_4_ = fVar49;
          auVar2._8_4_ = auVar42._0_4_;
          auVar2._12_4_ = auVar42._0_4_;
          auVar39 = sqrtps(auVar43,auVar2);
          uVar17 = auVar39._8_4_;
          auVar45._4_4_ = auVar39._4_4_;
          _local_628 = auVar39;
          if ((auVar28._4_4_ * fVar25 - fVar29 * auVar28._0_4_) * auVar23._8_4_ +
              (auVar28._0_4_ * fVar31 - fVar25 * auVar28._8_4_) * auVar23._4_4_ +
              (auVar28._8_4_ * fVar29 - fVar31 * auVar28._4_4_) * auVar23._0_4_ + 0.0 < 0.0) {
            uVar17 = uVar17 ^ __LC17;
            uStack_620._4_4_ = uVar17;
            uStack_620._0_4_ = uVar17;
            local_628 = auVar39._0_8_;
          }
          auVar48._0_4_ = SUB164(_local_628,0);
          auVar48._4_4_ = auVar48._0_4_;
          auVar48._8_4_ = auVar48._0_4_;
          auVar48._12_4_ = auVar48._0_4_;
          auVar30 = divps(auVar30,auVar48);
          auVar45._0_4_ = auVar45._4_4_;
          auVar45._8_4_ = auVar45._4_4_;
          auVar45._12_4_ = auVar45._4_4_;
          local_584 = _LC18;
          local_564 = 1;
          local_588[0] = _LC19;
          local_4dc = 0x3f800000;
          local_50c = 0;
          local_4fc = 0;
          local_4ec = 0;
          auVar39 = divps(auVar28,auVar45);
          local_518 = auVar30._0_8_;
          local_510 = auVar30._8_4_;
          auVar3._4_4_ = uVar17;
          auVar3._0_4_ = uVar17;
          auVar3._8_4_ = uVar17;
          auVar3._12_4_ = uVar17;
          auVar30 = divps(auVar23,auVar3);
          local_508 = auVar39._0_4_;
          local_504 = auVar39._4_4_;
          local_500 = auVar39._8_4_;
          local_4f8 = auVar30._0_4_;
          local_4f4 = auVar30._4_4_;
          local_4f0 = auVar30._8_4_;
          local_578 = (undefined1  [16])0x0;
          local_568 = param_2;
          if ((((*(char *)(lVar13 + 0x62) == '\0') && (*(char *)(lVar13 + 0x60) == '\0')) &&
              (*(char *)(lVar11 + 0x62) == '\0')) && (*(char *)(lVar11 + 0x60) == '\0'))
          goto LAB_001012e0;
          local_58 = '\0';
          local_4d8 = &PTR__AnyHitCollisionCollector_001062b8;
          local_484._8_8_ = _LC21;
          local_484._0_8_ = _LC20;
          local_4d0 = 0x7f7fffff;
          local_4c8 = 0;
          local_268 = 0;
          if ((*(char *)(lVar13 + 0x62) == '\0') && (*(char *)(lVar13 + 0x60) == '\0')) {
            local_598 = &PTR__ShapeFilter_00106288;
            local_5a0 = _LC21;
            local_5a8 = _LC21;
            local_590 = 0xffffffff;
            (*(code *)(&CollisionDispatch::sCollideShape)
                      [(ulong)*(byte *)((long)plVar7 + 0x19) +
                       (long)(int)(uint)*(byte *)((long)plVar8 + 0x19) * 0x22])
                      (local_628,uStack_620,local_618._0_8_,local_618._8_8_,plVar8,plVar7,&local_518
                       ,&local_558,&local_5a8,&local_5a0,local_588,&local_4d8,&local_598);
          }
          else {
            local_598 = &PTR__ShapeFilter_00106288;
            local_5a0 = _LC21;
            local_5a8 = _LC21;
            local_590 = 0xffffffff;
            (*(code *)(&CollisionDispatch::sCollideShape)
                      [(ulong)*(byte *)((long)plVar8 + 0x19) +
                       (long)(int)(uint)*(byte *)((long)plVar7 + 0x19) * 0x22])
                      (local_618._0_8_,local_618._8_8_,local_628,uStack_620,plVar7,plVar8,&local_558
                       ,&local_518,&local_5a8,&local_5a0,local_588,&local_4d8,&local_598);
          }
          if (local_58 == '\0') goto LAB_001012e0;
          uVar12 = uVar12 + 1;
          pMVar15 = pMVar15 + 0x40;
          pbVar14 = (byte *)(lVar19 + plVar6[4]);
          *pbVar14 = *pbVar14 & ~(byte)(1 << (sbyte)uVar5);
        } while ((int)uVar12 < (int)uVar16);
LAB_001017f0:
        param_1 = param_1 + 0x40;
        uVar10 = uVar10 + 1;
      }
    }
    lVar13 = 0;
    uVar5 = 0;
    do {
      lVar19 = *(long *)(this + 0x20) + lVar13;
      plVar7 = *(long **)(lVar19 + 0x50);
      *(uint *)(lVar19 + 0x5c) = uVar5;
      if (plVar6 != plVar7) {
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar8 = plVar7 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        *(long **)(lVar19 + 0x50) = plVar6;
        LOCK();
        *(int *)plVar1 = (int)*plVar1 + 1;
        UNLOCK();
      }
      uVar5 = uVar5 + 1;
      lVar13 = lVar13 + 0x110;
    } while (uVar5 != uVar16);
  }
  LOCK();
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RagdollSettings::SaveBinaryState(JPH::StreamOut&, bool, bool) const */

void JPH::RagdollSettings::SaveBinaryState(StreamOut *param_1,bool param_2,bool param_3)

{
  long *plVar1;
  UnorderedMap *pUVar2;
  UnorderedMap *pUVar3;
  StreamOut *pSVar4;
  long lVar5;
  undefined7 in_register_00000031;
  UnorderedMap *pUVar6;
  long lVar7;
  StreamOut *pSVar8;
  long in_FS_OFFSET;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  pUVar6 = (UnorderedMap *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  JPH::Skeleton::SaveBinaryState(*(StreamOut **)(param_1 + 8));
  local_ac = (undefined4)*(undefined8 *)(param_1 + 0x10);
  (**(code **)(*(long *)pUVar6 + 0x10))(pUVar6,&local_ac,4);
  pSVar8 = *(StreamOut **)(param_1 + 0x20);
  pSVar4 = pSVar8 + *(long *)(param_1 + 0x10) * 0x110;
  if (pSVar4 != pSVar8) {
    pUVar2 = (UnorderedMap *)0x0;
    pUVar3 = pUVar2;
    if (param_3) {
      pUVar2 = (UnorderedMap *)local_a8;
      pUVar3 = (UnorderedMap *)local_88;
    }
    do {
      JPH::BodyCreationSettings::SaveWithChildren(pSVar8,pUVar6,pUVar2,pUVar3);
      local_ac = CONCAT31(local_ac._1_3_,*(long *)(pSVar8 + 0x100) != 0);
      (**(code **)(*(long *)pUVar6 + 0x10))(pUVar6,&local_ac,1);
      plVar1 = *(long **)(pSVar8 + 0x100);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,pUVar6);
      }
      pSVar8 = pSVar8 + 0x110;
    } while (pSVar4 != pSVar8);
  }
  local_ac = (undefined4)*(undefined8 *)(param_1 + 0x28);
  (**(code **)(*(long *)pUVar6 + 0x10))(pUVar6,&local_ac,4);
  lVar5 = *(long *)(param_1 + 0x38);
  lVar7 = *(long *)(param_1 + 0x28) * 0x10 + lVar5;
  for (; lVar7 != lVar5; lVar5 = lVar5 + 0x10) {
    (**(code **)(*(long *)pUVar6 + 0x10))(pUVar6,lVar5,8);
    (**(code **)(**(long **)(lVar5 + 8) + 0x20))(*(long **)(lVar5 + 8),pUVar6);
  }
  if (local_68._0_8_ != 0) {
    (*Free)();
  }
  if (local_88._0_8_ != 0) {
    (*Free)();
  }
  if (local_a8._0_8_ != 0) {
    (*Free)();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::RagdollSettings::CalculateBodyIndexToConstraintIndex() */

void __thiscall JPH::RagdollSettings::CalculateBodyIndexToConstraintIndex(RagdollSettings *this)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = *(ulong *)(this + 0x10);
  *(undefined8 *)(this + 0x40) = 0;
  if (*(ulong *)(this + 0x48) < uVar4) {
    uVar5 = (*Reallocate)(*(undefined8 *)(this + 0x50),*(ulong *)(this + 0x48) << 2,uVar4 * 4);
    *(ulong *)(this + 0x48) = uVar4;
    uVar4 = *(ulong *)(this + 0x10);
    *(undefined8 *)(this + 0x50) = uVar5;
  }
  lVar7 = *(long *)(this + 0x20);
  lVar9 = uVar4 * 0x110 + lVar7;
  iVar2 = 0;
  do {
    if (lVar9 == lVar7) {
      return;
    }
    while( true ) {
      lVar6 = *(long *)(this + 0x40);
      uVar1 = *(ulong *)(this + 0x48);
      lVar3 = *(long *)(this + 0x50);
      uVar4 = lVar6 + 1;
      if (*(long *)(lVar7 + 0x100) != 0) break;
      if (uVar1 < uVar4) {
        uVar8 = uVar1 * 2;
        if (uVar1 * 2 < uVar4) {
          uVar8 = uVar4;
        }
        lVar3 = (*Reallocate)(lVar3,uVar1 << 2,uVar8 * 4);
        lVar6 = *(long *)(this + 0x40);
        *(ulong *)(this + 0x48) = uVar8;
        *(long *)(this + 0x50) = lVar3;
        uVar4 = lVar6 + 1;
      }
      lVar7 = lVar7 + 0x110;
      *(ulong *)(this + 0x40) = uVar4;
      *(undefined4 *)(lVar3 + lVar6 * 4) = 0xffffffff;
      if (lVar9 == lVar7) {
        return;
      }
    }
    if (uVar1 < uVar4) {
      uVar8 = uVar1 * 2;
      if (uVar1 * 2 < uVar4) {
        uVar8 = uVar4;
      }
      lVar3 = (*Reallocate)(lVar3,uVar1 << 2,uVar8 * 4);
      lVar6 = *(long *)(this + 0x40);
      *(ulong *)(this + 0x48) = uVar8;
      *(long *)(this + 0x50) = lVar3;
      uVar4 = lVar6 + 1;
    }
    lVar7 = lVar7 + 0x110;
    *(ulong *)(this + 0x40) = uVar4;
    *(int *)(lVar3 + lVar6 * 4) = iVar2;
    iVar2 = iVar2 + 1;
  } while( true );
}



/* JPH::RagdollSettings::CalculateConstraintIndexToBodyIdxPair() */

void __thiscall JPH::RagdollSettings::CalculateConstraintIndexToBodyIdxPair(RagdollSettings *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  lVar15 = *(long *)(this + 0x10);
  *(undefined8 *)(this + 0x58) = 0;
  uVar13 = *(long *)(this + 0x28) + lVar15;
  if (*(ulong *)(this + 0x60) < uVar13) {
    puVar7 = (undefined8 *)(*Allocate)(uVar13 * 8);
    puVar4 = *(undefined8 **)(this + 0x68);
    if (puVar4 != (undefined8 *)0x0) {
      lVar15 = *(long *)(this + 0x58);
      if (puVar7 < puVar4) {
        for (puVar5 = puVar7; puVar5 < puVar7 + lVar15; puVar5 = puVar5 + 1) {
          uVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar5 = uVar3;
        }
      }
      else {
        puVar4 = puVar4 + lVar15 + -1;
        puVar5 = puVar7 + lVar15 + -1;
        if (!CARRY8(lVar15 * 8 - 8,(ulong)puVar7)) {
          do {
            uVar3 = *puVar4;
            puVar6 = puVar5 + -1;
            puVar4 = puVar4 + -1;
            *puVar5 = uVar3;
            puVar5 = puVar6;
          } while (puVar7 <= puVar6);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this + 0x68) = puVar7;
    lVar15 = *(long *)(this + 0x10);
    *(ulong *)(this + 0x60) = uVar13;
  }
  lVar10 = *(long *)(this + 0x20);
  lVar14 = 0;
  lVar15 = lVar15 * 0x110 + lVar10;
  for (; lVar10 != lVar15; lVar10 = lVar10 + 0x110) {
    if (*(long *)(lVar10 + 0x100) != 0) {
      lVar8 = *(long *)(this + 0x58);
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(this + 8) + 0x18) + lVar14 * 0x48 + 0x40);
      uVar13 = lVar8 + 1;
      if (*(ulong *)(this + 0x60) < uVar13) {
        uVar9 = *(ulong *)(this + 0x60) * 2;
        if (uVar13 <= uVar9) {
          uVar13 = uVar9;
        }
        puVar4 = (undefined8 *)(*Allocate)(uVar13 * 8);
        puVar7 = *(undefined8 **)(this + 0x68);
        if (puVar7 != (undefined8 *)0x0) {
          lVar8 = *(long *)(this + 0x58);
          if (puVar4 < puVar7) {
            for (puVar5 = puVar4; puVar5 < puVar4 + lVar8; puVar5 = puVar5 + 1) {
              uVar3 = *puVar7;
              puVar7 = puVar7 + 1;
              *puVar5 = uVar3;
            }
          }
          else {
            puVar7 = puVar7 + lVar8 + -1;
            puVar5 = puVar4 + lVar8 + -1;
            if (!CARRY8(lVar8 * 8 - 8,(ulong)puVar4)) {
              do {
                uVar3 = *puVar7;
                puVar6 = puVar5 + -1;
                puVar7 = puVar7 + -1;
                *puVar5 = uVar3;
                puVar5 = puVar6;
              } while (puVar4 <= puVar6);
            }
          }
          (*Free)();
        }
        lVar8 = *(long *)(this + 0x58);
        *(undefined8 **)(this + 0x68) = puVar4;
        *(ulong *)(this + 0x60) = uVar13;
        uVar13 = lVar8 + 1;
      }
      else {
        puVar4 = *(undefined8 **)(this + 0x68);
      }
      *(ulong *)(this + 0x58) = uVar13;
      puVar4[lVar8] = CONCAT44((int)lVar14,uVar1);
    }
    lVar14 = lVar14 + 1;
  }
  lVar15 = *(long *)(this + 0x28);
  puVar2 = *(undefined4 **)(this + 0x38);
  if (puVar2 + lVar15 * 4 != puVar2) {
    uVar13 = *(ulong *)(this + 0x58);
    puVar12 = puVar2;
    do {
      uVar9 = uVar13 + 1;
      if (*(ulong *)(this + 0x60) < uVar9) {
        uVar13 = *(ulong *)(this + 0x60) * 2;
        if (uVar9 <= uVar13) {
          uVar9 = uVar13;
        }
        puVar4 = (undefined8 *)(*Allocate)(uVar9 * 8);
        puVar7 = *(undefined8 **)(this + 0x68);
        if (puVar7 != (undefined8 *)0x0) {
          lVar10 = *(long *)(this + 0x58);
          if (puVar4 < puVar7) {
            for (puVar5 = puVar4; puVar5 < puVar4 + lVar10; puVar5 = puVar5 + 1) {
              uVar3 = *puVar7;
              puVar7 = puVar7 + 1;
              *puVar5 = uVar3;
            }
          }
          else {
            puVar7 = puVar7 + lVar10 + -1;
            puVar5 = puVar4 + lVar10 + -1;
            if (!CARRY8(lVar10 * 8 - 8,(ulong)puVar4)) {
              do {
                uVar3 = *puVar7;
                puVar6 = puVar5 + -1;
                puVar7 = puVar7 + -1;
                *puVar5 = uVar3;
                puVar5 = puVar6;
              } while (puVar4 <= puVar6);
              (*Free)();
              goto LAB_00102030;
            }
          }
          (*Free)();
        }
LAB_00102030:
        uVar13 = *(ulong *)(this + 0x58);
        *(undefined8 **)(this + 0x68) = puVar4;
        *(ulong *)(this + 0x60) = uVar9;
        uVar9 = uVar13 + 1;
      }
      else {
        puVar4 = *(undefined8 **)(this + 0x68);
      }
      uVar1 = *puVar12;
      *(ulong *)(this + 0x58) = uVar9;
      puVar11 = puVar12 + 4;
      *(undefined4 *)(puVar4 + uVar13) = uVar1;
      *(undefined4 *)((long)(puVar4 + uVar13) + 4) = puVar12[1];
      uVar13 = uVar9;
      puVar12 = puVar11;
    } while (puVar2 + lVar15 * 4 != puVar11);
  }
  return;
}



/* JPH::Ragdoll::~Ragdoll() */

void __thiscall JPH::Ragdoll::~Ragdoll(Ragdoll *this)

{
  long *plVar1;
  long *plVar2;
  RagdollSettings *this_00;
  long *plVar3;
  long *plVar4;
  
  JPH::BodyInterface::DestroyBodies
            ((BodyID *)(*(long *)(this + 0x40) + 0x158),(int)*(undefined8 *)(this + 0x20));
  plVar4 = *(long **)(this + 0x38);
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 0x28) != 0) && (plVar2 = plVar4 + *(long *)(this + 0x28), plVar4 < plVar2)
       ) {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_001021e0:
          plVar4 = plVar4 + 1;
          if (plVar2 <= plVar4) goto LAB_00102210;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_001021e0;
        plVar4 = plVar4 + 1;
        (**(code **)(*plVar3 + 8))();
      } while (plVar4 < plVar2);
LAB_00102210:
      plVar4 = *(long **)(this + 0x38);
    }
    *(undefined8 *)(this + 0x28) = 0;
    (*Free)(plVar4);
  }
  if (*(long *)(this + 0x20) != 0) {
    *(undefined8 *)(this + 0x10) = 0;
    (*Free)();
  }
  this_00 = *(RagdollSettings **)(this + 8);
  if (this_00 != (RagdollSettings *)0x0) {
    LOCK();
    *(int *)this_00 = *(int *)this_00 + -1;
    UNLOCK();
    if (*(int *)this_00 == 0) {
      RagdollSettings::~RagdollSettings(this_00);
                    /* WARNING: Could not recover jumptable at 0x0010222f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this_00);
      return;
    }
  }
  return;
}



/* JPH::RagdollSettings::CreateRagdoll(unsigned int, unsigned long, JPH::PhysicsSystem*) const */

Ragdoll * __thiscall
JPH::RagdollSettings::CreateRagdoll
          (RagdollSettings *this,uint param_1,ulong param_2,PhysicsSystem *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  RagdollSettings *pRVar8;
  Ragdoll *this_00;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  RagdollSettings *pRVar21;
  PhysicsSystem *pPVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  undefined8 *local_90;
  ulong local_88;
  ulong local_80;
  RagdollSettings *local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  undefined8 *local_58;
  RagdollSettings *local_50;
  long local_40;
  undefined1 *puVar20;
  
  puVar19 = auStack_98;
  puVar20 = auStack_98;
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_2;
  local_50 = this;
  this_00 = (Ragdoll *)(*Allocate)(0x48);
  *(undefined4 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(PhysicsSystem **)(this_00 + 0x40) = param_3;
  *(RagdollSettings **)(this_00 + 8) = local_50;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x28) = (undefined1  [16])0x0;
  LOCK();
  *(int *)local_50 = *(int *)local_50 + 1;
  UNLOCK();
  uVar12 = *(ulong *)(local_50 + 0x10);
  if (*(ulong *)(this_00 + 0x18) < uVar12) {
    uVar15 = (*Reallocate)(*(undefined8 *)(this_00 + 0x20),*(ulong *)(this_00 + 0x18) << 2,
                           uVar12 * 4);
    *(ulong *)(this_00 + 0x18) = uVar12;
    *(undefined8 *)(this_00 + 0x20) = uVar15;
    uVar12 = *(ulong *)(local_50 + 0x10);
  }
  uVar23 = *(long *)(local_50 + 0x28) + uVar12;
  if (*(ulong *)(this_00 + 0x30) < uVar23) {
    puVar14 = (undefined8 *)(*Allocate)(uVar23 * 8);
    puVar13 = *(undefined8 **)(this_00 + 0x38);
    if (puVar13 != (undefined8 *)0x0) {
      lVar5 = *(long *)(this_00 + 0x28);
      if (puVar14 < puVar13) {
        for (puVar16 = puVar14; puVar16 < puVar14 + lVar5; puVar16 = puVar16 + 1) {
          uVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          *puVar16 = uVar15;
        }
      }
      else {
        puVar13 = puVar13 + lVar5 + -1;
        puVar16 = puVar14 + lVar5 + -1;
        if (!CARRY8(lVar5 * 8 - 8,(ulong)puVar14)) {
          do {
            uVar15 = *puVar13;
            puVar17 = puVar16 + -1;
            puVar13 = puVar13 + -1;
            *puVar16 = uVar15;
            puVar16 = puVar17;
          } while (puVar14 <= puVar17);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this_00 + 0x38) = puVar14;
    uVar12 = *(ulong *)(local_50 + 0x10);
    *(ulong *)(this_00 + 0x30) = uVar23;
  }
  uVar23 = uVar12 * 8 + 0x17;
  puVar7 = auStack_98;
  while (puVar20 != auStack_98 + -(uVar23 & 0xfffffffffffff000)) {
    puVar19 = puVar7 + -0x1000;
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    puVar20 = puVar7 + -0x1000;
    puVar7 = puVar7 + -0x1000;
  }
  uVar23 = (ulong)((uint)uVar23 & 0xff0);
  lVar5 = -uVar23;
  if (uVar23 != 0) {
    *(undefined8 *)(puVar19 + -8) = *(undefined8 *)(puVar19 + -8);
  }
  lVar24 = *(long *)(local_50 + 0x20);
  uVar23 = (ulong)(puVar19 + lVar5 + 0xf) & 0xfffffffffffffff0;
  lVar25 = 0;
  local_68 = uVar12 * 0x110 + lVar24;
  pRVar21 = local_50;
  local_88 = uVar23;
  local_50 = (RagdollSettings *)(param_3 + 0x158);
  if (lVar24 != local_68) {
    do {
      local_78 = pRVar21;
      *(undefined8 *)(puVar19 + lVar5 + -8) = 0x102405;
      lVar11 = JPH::BodyInterface::CreateBody((BodyCreationSettings *)local_50);
      if (lVar11 == 0) {
        *(undefined8 *)(puVar19 + lVar5 + -8) = 0x10263e;
        Ragdoll::~Ragdoll(this_00);
        *(undefined8 *)(puVar19 + lVar5 + -8) = 0x102647;
        (*Free)(this_00);
        this_00 = (Ragdoll *)0x0;
        goto LAB_00102647;
      }
      plVar2 = *(long **)(lVar24 + 0x100);
      *(long *)(uVar23 + lVar25 * 8) = lVar11;
      *(undefined4 *)(lVar11 + 0x60) = local_58._0_4_;
      *(ulong *)(lVar11 + 0x50) = local_60;
      if (plVar2 != (long *)0x0) {
        uVar15 = *(undefined8 *)
                  (uVar23 + (long)*(int *)(*(long *)(*(long *)(local_78 + 8) + 0x18) + lVar25 * 0x48
                                          + 0x40) * 8);
        pcVar3 = *(code **)(*plVar2 + 0x30);
        *(undefined8 *)(puVar19 + lVar5 + -8) = 0x102458;
        uVar12 = (*pcVar3)(plVar2,uVar15,lVar11);
        if (uVar12 != 0) {
          LOCK();
          *(int *)(uVar12 + 8) = *(int *)(uVar12 + 8) + 1;
          UNLOCK();
        }
        lVar18 = *(long *)(this_00 + 0x28);
        uVar9 = lVar18 + 1;
        if (*(ulong *)(this_00 + 0x30) < uVar9) {
          uVar6 = *(ulong *)(this_00 + 0x30) * 2;
          local_80 = uVar9;
          if (uVar9 <= uVar6) {
            local_80 = uVar6;
          }
          *(undefined8 *)(puVar19 + lVar5 + -8) = 0x10249c;
          local_70 = uVar12;
          puVar13 = (undefined8 *)(*Allocate)(local_80 * 8);
          puVar14 = *(undefined8 **)(this_00 + 0x38);
          if (puVar14 != (undefined8 *)0x0) {
            lVar18 = *(long *)(this_00 + 0x28);
            if (puVar13 < puVar14) {
              for (puVar16 = puVar13; puVar16 < puVar13 + lVar18; puVar16 = puVar16 + 1) {
                uVar15 = *puVar14;
                puVar14 = puVar14 + 1;
                *puVar16 = uVar15;
              }
            }
            else {
              puVar14 = puVar14 + lVar18 + -1;
              puVar16 = puVar13 + lVar18 + -1;
              if (!CARRY8(lVar18 * 8 - 8,(ulong)puVar13)) {
                do {
                  uVar15 = *puVar14;
                  puVar17 = puVar16 + -1;
                  puVar14 = puVar14 + -1;
                  *puVar16 = uVar15;
                  puVar16 = puVar17;
                } while (puVar13 <= puVar17);
              }
            }
            *(undefined8 *)(puVar19 + lVar5 + -8) = 0x1024f5;
            local_90 = puVar13;
            (*Free)();
            puVar13 = local_90;
          }
          lVar18 = *(long *)(this_00 + 0x28);
          *(undefined8 **)(this_00 + 0x38) = puVar13;
          *(ulong *)(this_00 + 0x30) = local_80;
          uVar9 = lVar18 + 1;
          uVar12 = local_70;
        }
        else {
          puVar13 = *(undefined8 **)(this_00 + 0x38);
        }
        *(ulong *)(this_00 + 0x28) = uVar9;
        puVar13[lVar18] = uVar12;
      }
      lVar18 = *(long *)(this_00 + 0x10);
      uVar9 = *(ulong *)(this_00 + 0x18);
      lVar10 = *(long *)(this_00 + 0x20);
      uVar12 = lVar18 + 1;
      if (uVar9 < uVar12) {
        local_70 = uVar12;
        if (uVar12 <= uVar9 * 2) {
          local_70 = uVar9 * 2;
        }
        *(undefined8 *)(puVar19 + lVar5 + -8) = 0x1023b7;
        lVar10 = (*Reallocate)(lVar10,uVar9 << 2,local_70 * 4);
        lVar18 = *(long *)(this_00 + 0x10);
        *(long *)(this_00 + 0x20) = lVar10;
        *(ulong *)(this_00 + 0x18) = local_70;
        uVar12 = lVar18 + 1;
      }
      *(ulong *)(this_00 + 0x10) = uVar12;
      puVar1 = (undefined4 *)(lVar10 + lVar18 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(lVar11 + 0x70);
      }
      lVar25 = lVar25 + 1;
      lVar24 = lVar24 + 0x110;
      pRVar21 = local_78;
    } while (local_68 != lVar24);
  }
  uVar12 = local_88;
  pPVar22 = *(PhysicsSystem **)(pRVar21 + 0x38);
  pRVar8 = (RagdollSettings *)(pPVar22 + *(long *)(pRVar21 + 0x28) * 0x10);
  if (pPVar22 + *(long *)(pRVar21 + 0x28) * 0x10 != pPVar22) {
    do {
      local_50 = pRVar8;
      plVar2 = *(long **)(pPVar22 + 8);
      uVar15 = *(undefined8 *)(uVar12 + (long)*(int *)(pPVar22 + 4) * 8);
      uVar4 = *(undefined8 *)(uVar12 + (long)*(int *)pPVar22 * 8);
      pcVar3 = *(code **)(*plVar2 + 0x30);
      *(undefined8 *)(puVar19 + lVar5 + -8) = 0x102586;
      lVar24 = (*pcVar3)(plVar2,uVar4,uVar15);
      if (lVar24 != 0) {
        LOCK();
        *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
        UNLOCK();
      }
      lVar25 = *(long *)(this_00 + 0x28);
      uVar23 = lVar25 + 1;
      if (*(ulong *)(this_00 + 0x30) < uVar23) {
        uVar9 = *(ulong *)(this_00 + 0x30) * 2;
        if (uVar23 <= uVar9) {
          uVar23 = uVar9;
        }
        *(undefined8 *)(puVar19 + lVar5 + -8) = 0x1025bf;
        puVar13 = (undefined8 *)(*Allocate)(uVar23 * 8);
        puVar14 = *(undefined8 **)(this_00 + 0x38);
        if (puVar14 != (undefined8 *)0x0) {
          lVar25 = *(long *)(this_00 + 0x28);
          local_58 = puVar13;
          if (puVar13 < puVar14) {
            for (puVar16 = puVar13; puVar16 < puVar13 + lVar25; puVar16 = puVar16 + 1) {
              uVar15 = *puVar14;
              puVar14 = puVar14 + 1;
              *puVar16 = uVar15;
            }
          }
          else {
            puVar14 = puVar14 + lVar25 + -1;
            puVar16 = puVar13 + lVar25 + -1;
            if (!CARRY8(lVar25 * 8 - 8,(ulong)puVar13)) {
              do {
                uVar15 = *puVar14;
                puVar17 = puVar16 + -1;
                puVar14 = puVar14 + -1;
                *puVar16 = uVar15;
                puVar16 = puVar17;
              } while (puVar13 <= puVar17);
              *(undefined8 *)(puVar19 + lVar5 + -8) = 0x10279e;
              (*Free)();
              puVar13 = local_58;
              goto LAB_00102618;
            }
          }
          *(undefined8 *)(puVar19 + lVar5 + -8) = 0x10260e;
          (*Free)();
          puVar13 = local_58;
        }
LAB_00102618:
        lVar25 = *(long *)(this_00 + 0x28);
        *(undefined8 **)(this_00 + 0x38) = puVar13;
        *(ulong *)(this_00 + 0x30) = uVar23;
        uVar23 = lVar25 + 1;
      }
      else {
        puVar13 = *(undefined8 **)(this_00 + 0x38);
      }
      *(ulong *)(this_00 + 0x28) = uVar23;
      pPVar22 = pPVar22 + 0x10;
      puVar13[lVar25] = lVar24;
      pRVar8 = local_50;
    } while (local_50 != (RagdollSettings *)pPVar22);
  }
LAB_00102647:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar19 + lVar5 + -8) = &UNK_001027ee;
    __stack_chk_fail();
  }
  return this_00;
}



/* JPH::Ragdoll::AddToPhysicsSystem(JPH::EActivation, bool) */

void __thiscall JPH::Ragdoll::AddToPhysicsSystem(Ragdoll *this,undefined4 param_2,char param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  BodyID *pBVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  undefined1 *puVar8;
  
  puVar7 = auStack_48;
  uVar1 = *(ulong *)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = (long)(int)uVar1 * 4;
  puVar8 = auStack_48;
  puVar3 = auStack_48;
  while (puVar8 != auStack_48 + -(lVar6 + 0x17U & 0xfffffffffffff000)) {
    puVar7 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar8 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  uVar9 = (ulong)((uint)(lVar6 + 0x17U) & 0xff0);
  lVar2 = -uVar9;
  if (uVar9 != 0) {
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  }
  uVar5 = *(undefined8 *)(this + 0x20);
  uVar9 = (ulong)(puVar7 + lVar2 + 0xf) & 0xfffffffffffffff0;
  *(undefined8 *)(puVar7 + lVar2 + -8) = 0x102886;
  __memcpy_chk(uVar9,uVar5,lVar6,lVar6);
  pBVar4 = (BodyID *)(*(long *)(this + 0x40) + 0x158);
  if (param_3 == '\0') {
    pBVar4 = (BodyID *)(*(long *)(this + 0x40) + 0x140);
  }
  *(undefined8 *)(puVar7 + lVar2 + -8) = 0x1028b0;
  uVar5 = JPH::BodyInterface::AddBodiesPrepare(pBVar4,(int)uVar9);
  *(undefined8 *)(puVar7 + lVar2 + -8) = 0x1028c4;
  JPH::BodyInterface::AddBodiesFinalize(pBVar4,uVar9,uVar1 & 0xffffffff,uVar5,param_2);
  lVar6 = *(long *)(this + 0x40);
  uVar5 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(puVar7 + lVar2 + -8) = 0x1028db;
  JPH::ConstraintManager::Add((Constraint **)(lVar6 + 0x2c8),(int)uVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar7 + lVar2 + -8) = RemoveFromPhysicsSystem;
    __stack_chk_fail();
  }
  return;
}



/* JPH::Ragdoll::RemoveFromPhysicsSystem(bool) */

void __thiscall JPH::Ragdoll::RemoveFromPhysicsSystem(Ragdoll *this,bool param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  BodyID *pBVar9;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  undefined1 *puVar8;
  
  puVar7 = auStack_38;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::ConstraintManager::Remove
            ((Constraint **)(*(long *)(this + 0x40) + 0x2c8),(int)*(undefined8 *)(this + 0x38));
  lVar6 = (long)(int)*(undefined8 *)(this + 0x10) * 4;
  puVar8 = auStack_38;
  puVar3 = auStack_38;
  while (puVar8 != auStack_38 + -(lVar6 + 0x17U & 0xfffffffffffff000)) {
    puVar7 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar8 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  uVar5 = (ulong)((uint)(lVar6 + 0x17U) & 0xff0);
  lVar2 = -uVar5;
  if (uVar5 != 0) {
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  }
  uVar1 = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(puVar7 + lVar2 + -8) = 0x1029b2;
  iVar4 = __memcpy_chk((ulong)(puVar7 + lVar2 + 0xf) & 0xfffffffffffffff0,uVar1,lVar6,lVar6);
  pBVar9 = (BodyID *)(*(long *)(this + 0x40) + 0x140);
  if (param_1) {
    pBVar9 = (BodyID *)(*(long *)(this + 0x40) + 0x158);
  }
  *(undefined8 *)(puVar7 + lVar2 + -8) = 0x1029d9;
  JPH::BodyInterface::RemoveBodies(pBVar9,iVar4);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + lVar2 + -8) = &UNK_00102a05;
    __stack_chk_fail();
  }
  return;
}



/* JPH::Ragdoll::Activate(bool) */

void __thiscall JPH::Ragdoll::Activate(Ragdoll *this,bool param_1)

{
  BodyID *pBVar1;
  
  pBVar1 = (BodyID *)(*(long *)(this + 0x40) + 0x158);
  if (!param_1) {
    pBVar1 = (BodyID *)(*(long *)(this + 0x40) + 0x140);
  }
  JPH::BodyInterface::ActivateBodies(pBVar1,(int)*(undefined8 *)(this + 0x20));
  return;
}



/* JPH::Ragdoll::IsActive(bool) const */

uint __thiscall JPH::Ragdoll::IsActive(Ragdoll *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  
  lVar2 = *(long *)(this + 0x20);
  plVar7 = (long *)(*(long *)(this + 0x40) + 0x120);
  if (param_1) {
    plVar7 = (long *)(*(long *)(this + 0x40) + 0x130);
  }
  iVar8 = (int)*(ulong *)(this + 0x10);
  lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,lVar2,*(ulong *)(this + 0x10) & 0xffffffff);
  if (lVar5 == 0) {
    if (iVar8 < 1) {
      return 0;
    }
  }
  else {
    (**(code **)(*plVar7 + 0x38))(plVar7,lVar5);
    if (iVar8 < 1) {
      uVar9 = 0;
      goto LAB_00102aef;
    }
  }
  lVar6 = 0;
  do {
    uVar1 = *(uint *)(lVar2 + lVar6 * 4);
    if (uVar1 == 0xffffffff) {
JPH_Ragdoll_IsActive:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (*(ulong *)plVar7[1] <= (ulong)(uVar1 & 0x7fffff)) goto JPH_Ragdoll_IsActive;
    lVar3 = *(long *)(((ulong *)plVar7[1])[2] + (ulong)(uVar1 & 0x7fffff) * 8);
    uVar9 = ~(uint)lVar3 & 1;
    if ((uVar9 == 0) || (uVar1 != *(uint *)(lVar3 + 0x70))) goto JPH_Ragdoll_IsActive;
    if ((*(long *)(lVar3 + 0x48) != 0) && (*(int *)(*(long *)(lVar3 + 0x48) + 0x70) != -1))
    goto LAB_00102aea;
    lVar6 = lVar6 + 1;
  } while ((int)lVar6 < iVar8);
  uVar9 = 0;
LAB_00102aea:
  if (lVar5 == 0) {
    return uVar9;
  }
LAB_00102aef:
  (**(code **)(*plVar7 + 0x40))(plVar7,lVar5);
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Ragdoll::SetGroupID(unsigned int, bool) */

void __thiscall JPH::Ragdoll::SetGroupID(Ragdoll *this,uint param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  
  lVar2 = *(long *)(this + 0x20);
  iVar8 = (int)*(ulong *)(this + 0x10);
  plVar6 = (long *)(*(long *)(this + 0x40) + 0x120);
  if (param_2) {
    plVar6 = (long *)(*(long *)(this + 0x40) + 0x130);
  }
  lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,lVar2,*(ulong *)(this + 0x10) & 0xffffffff);
  if (lVar5 == 0) {
    if (iVar8 < 1) {
      return;
    }
  }
  else {
    (**(code **)(*plVar6 + 0x48))(plVar6);
    if (iVar8 < 1) goto LAB_00102bf6;
  }
  lVar7 = 0;
  do {
    uVar1 = *(uint *)(lVar2 + lVar7 * 4);
    if (uVar1 == 0xffffffff) {
JPH_Ragdoll_SetGroupID:
      _DAT_00000060 = 0;
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (((*(ulong *)plVar6[1] <= (ulong)(uVar1 & 0x7fffff)) ||
        (uVar3 = *(ulong *)(((ulong *)plVar6[1])[2] + (ulong)(uVar1 & 0x7fffff) * 8),
        (uVar3 & 1) != 0)) || (uVar1 != *(uint *)(uVar3 + 0x70))) goto JPH_Ragdoll_SetGroupID;
    lVar7 = lVar7 + 1;
    *(uint *)(uVar3 + 0x60) = param_1;
  } while ((int)lVar7 < iVar8);
  if (lVar5 == 0) {
    return;
  }
LAB_00102bf6:
                    /* WARNING: Could not recover jumptable at 0x00102c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x50))(plVar6,lVar5);
  return;
}



/* JPH::Ragdoll::SetPose(JPH::Vec3, JPH::Mat44 const*, bool) */

void JPH::Ragdoll::SetPose
               (undefined8 param_1,undefined8 param_2,long param_3,float *param_4,char param_5)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  lVar7 = *(long *)(param_3 + 0x40) + 0x140;
  if (param_5 != '\0') {
    lVar7 = *(long *)(param_3 + 0x40) + 0x158;
  }
  if (0 < *(int *)(param_3 + 0x10)) {
    lVar8 = 0;
    do {
      fVar10 = *param_4;
      fVar11 = param_4[5];
      fVar3 = param_4[10];
      fVar9 = fVar10 + fVar11 + fVar3;
      if (fVar9 < 0.0) {
        if (fVar10 < fVar11) {
          if (fVar11 < fVar3) goto LAB_00102e08;
          fVar10 = _LC6 + (fVar11 - (fVar10 + fVar3));
          if (fVar10 < 0.0) {
            fVar10 = sqrtf(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          fVar11 = _LC24 / fVar10;
          local_48 = CONCAT44(fVar10 * _LC24,(param_4[1] + param_4[4]) * fVar11);
          uStack_40 = CONCAT44((param_4[8] - param_4[2]) * fVar11,(param_4[9] + param_4[6]) * fVar11
                              );
        }
        else if (fVar10 < fVar3) {
LAB_00102e08:
          fVar10 = (fVar3 - (fVar10 + fVar11)) + _LC6;
          if (fVar10 < 0.0) {
            fVar10 = sqrtf(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          fVar11 = _LC24 / fVar10;
          uStack_40 = CONCAT44((param_4[1] - param_4[4]) * fVar11,fVar10 * _LC24);
          local_48 = CONCAT44((param_4[9] + param_4[6]) * fVar11,(param_4[2] + param_4[8]) * fVar11)
          ;
        }
        else {
          fVar10 = _LC6 + (fVar10 - (fVar11 + fVar3));
          if (fVar10 < 0.0) {
            fVar10 = sqrtf(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          fVar11 = _LC24 / fVar10;
          local_48 = CONCAT44((param_4[4] + param_4[1]) * fVar11,fVar10 * _LC24);
          uStack_40 = CONCAT44((param_4[6] - param_4[9]) * fVar11,(param_4[2] + param_4[8]) * fVar11
                              );
        }
      }
      else {
        fVar10 = SQRT(fVar9 + _LC6);
        fVar11 = _LC24 / fVar10;
        local_48 = CONCAT44((param_4[8] - param_4[2]) * fVar11,(param_4[6] - param_4[9]) * fVar11);
        uStack_40 = CONCAT44(fVar10 * _LC24,(param_4[1] - param_4[4]) * fVar11);
      }
      local_38 = (float)param_1;
      fStack_34 = (float)((ulong)param_1 >> 0x20);
      fStack_30 = (float)param_2;
      fStack_2c = (float)((ulong)param_2 >> 0x20);
      pfVar1 = param_4 + 0xc;
      pfVar4 = param_4 + 0xd;
      pfVar5 = param_4 + 0xe;
      pfVar6 = param_4 + 0xf;
      param_4 = param_4 + 0x10;
      local_58 = CONCAT44(fStack_34 + *pfVar4,local_38 + *pfVar1);
      uStack_50 = CONCAT44(fStack_2c + *pfVar6,fStack_30 + *pfVar5);
      lVar2 = lVar8 * 4;
      lVar8 = lVar8 + 1;
      JPH::BodyInterface::SetPositionAndRotation
                (local_58,uStack_50,local_48,uStack_40,lVar7,*(long *)(param_3 + 0x20) + lVar2,1);
    } while ((int)lVar8 < *(int *)(param_3 + 0x10));
  }
  return;
}



/* JPH::Ragdoll::SetPose(JPH::SkeletonPose const&, bool) */

void __thiscall JPH::Ragdoll::SetPose(Ragdoll *this,SkeletonPose *param_1,bool param_2)

{
  SetPose(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),this,
          *(undefined8 *)(param_1 + 0x48),param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Ragdoll::GetPose(JPH::Vec3&, JPH::Mat44*, bool) */

void __thiscall JPH::Ragdoll::GetPose(Ragdoll *this,Vec3 *param_1,Mat44 *param_2,bool param_3)

{
  uint uVar1;
  float fVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  Mat44 *pMVar10;
  Mat44 *pMVar11;
  int iVar12;
  uint *puVar13;
  long *plVar14;
  float fVar15;
  undefined1 auVar16 [12];
  float fVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [12];
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  
  iVar12 = (int)*(ulong *)(this + 0x10);
  if (iVar12 == 0) {
    return;
  }
  puVar13 = *(uint **)(this + 0x20);
  plVar14 = (long *)(*(long *)(this + 0x40) + 0x120);
  if (param_3) {
    plVar14 = (long *)(*(long *)(this + 0x40) + 0x130);
  }
  lVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,puVar13,*(ulong *)(this + 0x10) & 0xffffffff);
  if (lVar9 != 0) {
    (**(code **)(*plVar14 + 0x38))(plVar14,lVar9);
  }
  uVar1 = *puVar13;
  if (uVar1 != 0xffffffff) {
    if ((((ulong)(uVar1 & 0x7fffff) < *(ulong *)plVar14[1]) &&
        (puVar3 = *(undefined8 **)(((ulong *)plVar14[1])[2] + (ulong)(uVar1 & 0x7fffff) * 8),
        ((ulong)puVar3 & 1) == 0)) && (uVar1 == *(uint *)(puVar3 + 0xe))) {
      fVar32 = (float)puVar3[2];
      fVar21 = (float)puVar3[3];
      fVar2 = *(float *)(puVar3 + 1);
      fVar7 = (float)((ulong)puVar3[2] >> 0x20);
      fVar20 = fVar32 + fVar32;
      fVar29 = fVar7 + fVar7;
      fVar17 = (float)((ulong)puVar3[3] >> 0x20);
      fVar15 = fVar17 * (fVar21 + fVar21);
      fVar30 = fVar21 * (fVar21 + fVar21);
      auVar23._0_4_ = fVar21 * fVar20 + fVar29 * fVar17;
      fVar28 = fVar21 * fVar20 - fVar29 * fVar17;
      local_98 = (float)*puVar3;
      fVar8 = local_98;
      fStack_94 = (float)((ulong)*puVar3 >> 0x20);
      fVar22 = fStack_94;
      fVar31 = fVar21 * fVar29 - fVar20 * fVar17;
      fVar21 = fVar20 * fVar17 + fVar21 * fVar29;
      fVar25 = (_LC6 - fVar32 * fVar20) - fVar7 * fVar29;
      auVar23._4_4_ = fVar31;
      auVar23._8_4_ = fVar25;
      auVar23._12_4_ = 0;
      fVar17 = fVar7 * fVar20 + fVar15;
      auVar26._0_4_ = fVar7 * fVar20 - fVar15;
      fVar32 = (_LC6 - fVar30) - fVar32 * fVar20;
      auVar26._4_4_ = fVar32;
      auVar26._8_4_ = fVar21;
      auVar26._12_4_ = 0;
      fVar30 = (_LC6 - fVar7 * fVar29) - fVar30;
      if (*(code **)(*(long *)puVar3[8] + 0x18) == Shape::GetCenterOfMass) {
        auVar18 = SUB1612((undefined1  [16])0x0,0);
        fStack_94 = 0.0;
        auVar33 = ZEXT812(0);
      }
      else {
        auVar33 = (**(code **)(*(long *)puVar3[8] + 0x18))();
        local_98 = auVar33._0_4_;
        fStack_94 = auVar33._4_4_;
        local_98 = 0.0 - local_98;
        fStack_94 = 0.0 - fStack_94;
        auVar18._8_4_ = 0.0 - auVar33._8_4_;
        auVar33._4_4_ = local_98;
        auVar33._0_4_ = local_98;
        auVar33._8_4_ = local_98;
        auVar18._4_4_ = auVar18._8_4_;
        auVar18._0_4_ = auVar18._8_4_;
      }
      fVar7 = _LC6;
      *(ulong *)param_1 =
           CONCAT44(auVar33._4_4_ * fVar17 + fStack_94 * fVar32 + auVar18._4_4_ * fVar31 + fVar22,
                    auVar33._0_4_ * fVar30 + fStack_94 * auVar26._0_4_ +
                    auVar18._0_4_ * auVar23._0_4_ + fVar8);
      uVar6 = __LC1;
      uVar5 = CONCAT44(_LC6,_UNK_00106318);
      *(ulong *)(param_1 + 8) =
           (ulong)(uint)(auVar33._8_4_ * fVar28 + fStack_94 * fVar21 + auVar18._8_4_ * fVar25 +
                        fVar2) | 0x3f80000000000000;
      *(float *)param_2 = fVar30;
      *(float *)(param_2 + 4) = fVar17;
      *(float *)(param_2 + 8) = fVar28;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined1 (*) [16])(param_2 + 0x10) = auVar26;
      *(undefined1 (*) [16])(param_2 + 0x20) = auVar23;
      *(undefined8 *)(param_2 + 0x30) = uVar6;
      *(undefined8 *)(param_2 + 0x38) = uVar5;
      if (1 < iVar12) {
        pMVar10 = param_2 + 0x40;
        do {
          puVar13 = puVar13 + 1;
          uVar1 = *puVar13;
          if (uVar1 == 0xffffffff) {
JPH_Ragdoll_GetPose:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (((*(ulong *)plVar14[1] <= (ulong)(uVar1 & 0x7fffff)) ||
              (puVar3 = *(undefined8 **)(((ulong *)plVar14[1])[2] + (ulong)(uVar1 & 0x7fffff) * 8),
              ((ulong)puVar3 & 1) != 0)) || (uVar1 != *(uint *)(puVar3 + 0xe)))
          goto JPH_Ragdoll_GetPose;
          fVar2 = *(float *)(puVar3 + 1);
          fVar17 = (float)puVar3[2];
          fVar32 = (float)puVar3[3];
          fVar8 = (float)((ulong)puVar3[2] >> 0x20);
          fVar15 = fVar17 + fVar17;
          fVar28 = fVar8 + fVar8;
          fVar22 = (float)((ulong)puVar3[3] >> 0x20);
          fVar21 = fVar22 * (fVar32 + fVar32);
          fVar20 = fVar32 * (fVar32 + fVar32);
          auVar24._0_4_ = fVar32 * fVar15 + fVar28 * fVar22;
          fVar30 = (fVar7 - fVar17 * fVar15) - fVar8 * fVar28;
          fVar25 = fVar32 * fVar15 - fVar28 * fVar22;
          local_a8 = (float)*puVar3;
          fStack_a4 = (float)((ulong)*puVar3 >> 0x20);
          fVar29 = fVar32 * fVar28 - fVar15 * fVar22;
          fVar22 = fVar15 * fVar22 + fVar32 * fVar28;
          auVar24._4_4_ = fVar29;
          auVar24._8_4_ = fVar30;
          auVar24._12_4_ = 0;
          auVar27._0_4_ = fVar8 * fVar15 - fVar21;
          fVar21 = fVar8 * fVar15 + fVar21;
          fVar17 = (fVar7 - fVar20) - fVar17 * fVar15;
          auVar27._4_4_ = fVar17;
          auVar27._8_4_ = fVar22;
          auVar27._12_4_ = 0;
          fVar20 = (fVar7 - fVar8 * fVar28) - fVar20;
          if (*(code **)(*(long *)puVar3[8] + 0x18) == Shape::GetCenterOfMass) {
            auVar19 = SUB1612((undefined1  [16])0x0,0);
            fStack_94 = 0.0;
            auVar16 = ZEXT812(0);
          }
          else {
            auVar33 = (**(code **)(*(long *)puVar3[8] + 0x18))();
            local_98 = auVar33._0_4_;
            fStack_94 = auVar33._4_4_;
            local_98 = 0.0 - local_98;
            fStack_94 = 0.0 - fStack_94;
            auVar19._8_4_ = 0.0 - auVar33._8_4_;
            auVar16._4_4_ = local_98;
            auVar16._0_4_ = local_98;
            auVar16._8_4_ = local_98;
            auVar19._4_4_ = auVar19._8_4_;
            auVar19._0_4_ = auVar19._8_4_;
            fVar7 = _LC6;
          }
          pMVar11 = pMVar10 + 0x40;
          fVar8 = *(float *)param_1;
          fVar32 = *(float *)(param_1 + 4);
          fVar15 = *(float *)(param_1 + 8);
          *(float *)pMVar10 = fVar20;
          *(float *)(pMVar10 + 4) = fVar21;
          *(float *)(pMVar10 + 8) = fVar25;
          *(undefined4 *)(pMVar10 + 0xc) = 0;
          *(undefined1 (*) [16])(pMVar10 + 0x10) = auVar27;
          *(undefined1 (*) [16])(pMVar10 + 0x20) = auVar24;
          *(ulong *)(pMVar10 + 0x30) =
               CONCAT44((auVar16._4_4_ * fVar21 + fStack_94 * fVar17 + auVar19._4_4_ * fVar29 +
                        fStack_a4) - fVar32,
                        (auVar16._0_4_ * fVar20 + fStack_94 * auVar27._0_4_ +
                         auVar19._0_4_ * auVar24._0_4_ + local_a8) - fVar8);
          *(float *)(pMVar10 + 0x38) =
               (auVar16._8_4_ * fVar25 + fStack_94 * fVar22 + auVar19._8_4_ * fVar30 + fVar2) -
               fVar15;
          *(float *)(pMVar10 + 0x3c) = fVar7;
          pMVar10 = pMVar11;
        } while (param_2 + (ulong)(iVar12 - 2) * 0x40 + 0x80 != pMVar11);
      }
      if (lVar9 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001033e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x40))(plVar14,lVar9);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* JPH::Ragdoll::GetPose(JPH::SkeletonPose&, bool) */

void __thiscall JPH::Ragdoll::GetPose(Ragdoll *this,SkeletonPose *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  GetPose(this,(Vec3 *)&local_28,*(Mat44 **)(param_1 + 0x48),param_2);
  *(undefined8 *)(param_1 + 0x10) = local_28;
  *(undefined8 *)(param_1 + 0x18) = uStack_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Ragdoll::ResetWarmStart() */

void __thiscall JPH::Ragdoll::ResetWarmStart(Ragdoll *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x38);
  puVar1 = puVar2 + *(long *)(this + 0x28);
  for (; puVar1 != puVar2; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x28))();
  }
  return;
}



/* JPH::Ragdoll::DriveToPoseUsingKinematics(JPH::Vec3, JPH::Mat44 const*, float, bool) */

void __thiscall
JPH::Ragdoll::DriveToPoseUsingKinematics
          (undefined8 param_1,undefined8 param_2,Ragdoll *this,float *param_4,char param_5)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  lVar7 = *(long *)(this + 0x40) + 0x140;
  if (param_5 != '\0') {
    lVar7 = *(long *)(this + 0x40) + 0x158;
  }
  if (0 < *(int *)(this + 0x10)) {
    lVar8 = 0;
    do {
      fVar10 = *param_4;
      fVar11 = param_4[5];
      fVar3 = param_4[10];
      fVar9 = fVar10 + fVar11 + fVar3;
      if (fVar9 < 0.0) {
        if (fVar10 < fVar11) {
          if (fVar11 < fVar3) goto LAB_00103768;
          fVar10 = _LC6 + (fVar11 - (fVar10 + fVar3));
          if (fVar10 < 0.0) {
            fVar10 = sqrtf(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          fVar11 = _LC24 / fVar10;
          local_48 = CONCAT44(fVar10 * _LC24,(param_4[1] + param_4[4]) * fVar11);
          uStack_40 = CONCAT44((param_4[8] - param_4[2]) * fVar11,(param_4[9] + param_4[6]) * fVar11
                              );
        }
        else if (fVar10 < fVar3) {
LAB_00103768:
          fVar10 = (fVar3 - (fVar10 + fVar11)) + _LC6;
          if (fVar10 < 0.0) {
            fVar10 = sqrtf(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          fVar11 = _LC24 / fVar10;
          uStack_40 = CONCAT44((param_4[1] - param_4[4]) * fVar11,fVar10 * _LC24);
          local_48 = CONCAT44((param_4[9] + param_4[6]) * fVar11,(param_4[2] + param_4[8]) * fVar11)
          ;
        }
        else {
          fVar10 = _LC6 + (fVar10 - (fVar11 + fVar3));
          if (fVar10 < 0.0) {
            fVar10 = sqrtf(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          fVar11 = _LC24 / fVar10;
          local_48 = CONCAT44((param_4[4] + param_4[1]) * fVar11,fVar10 * _LC24);
          uStack_40 = CONCAT44((param_4[6] - param_4[9]) * fVar11,(param_4[2] + param_4[8]) * fVar11
                              );
        }
      }
      else {
        fVar10 = SQRT(fVar9 + _LC6);
        fVar11 = _LC24 / fVar10;
        uStack_40 = CONCAT44(fVar10 * _LC24,(param_4[1] - param_4[4]) * fVar11);
        local_48 = CONCAT44((param_4[8] - param_4[2]) * fVar11,(param_4[6] - param_4[9]) * fVar11);
      }
      local_38 = (float)param_1;
      fStack_34 = (float)((ulong)param_1 >> 0x20);
      fStack_30 = (float)param_2;
      fStack_2c = (float)((ulong)param_2 >> 0x20);
      pfVar1 = param_4 + 0xc;
      pfVar4 = param_4 + 0xd;
      pfVar5 = param_4 + 0xe;
      pfVar6 = param_4 + 0xf;
      param_4 = param_4 + 0x10;
      local_58 = CONCAT44(fStack_34 + *pfVar4,local_38 + *pfVar1);
      uStack_50 = CONCAT44(fStack_2c + *pfVar6,fStack_30 + *pfVar5);
      lVar2 = lVar8 * 4;
      lVar8 = lVar8 + 1;
      JPH::BodyInterface::MoveKinematic
                (local_58,uStack_50,local_48,uStack_40,lVar7,*(long *)(this + 0x20) + lVar2);
    } while ((int)lVar8 < *(int *)(this + 0x10));
  }
  return;
}



/* JPH::Ragdoll::DriveToPoseUsingKinematics(JPH::SkeletonPose const&, float, bool) */

void JPH::Ragdoll::DriveToPoseUsingKinematics(SkeletonPose *param_1,float param_2,bool param_3)

{
  undefined1 in_DL;
  undefined7 in_register_00000031;
  long lVar1;
  
  lVar1 = CONCAT71(in_register_00000031,param_3);
  DriveToPoseUsingKinematics
            (*(Ragdoll **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),param_2,param_1,
             *(undefined8 *)(lVar1 + 0x48),in_DL);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Ragdoll::DriveToPoseUsingMotors(JPH::SkeletonPose const&) */

void __thiscall JPH::Ragdoll::DriveToPoseUsingMotors(Ragdoll *this,SkeletonPose *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  if ((int)uVar9 < 1) {
    return;
  }
  lVar10 = 0;
  do {
    while (iVar5 = *(int *)(*(long *)(*(long *)(this + 8) + 0x50) + lVar10 * 4), iVar5 < 0) {
LAB_00103ae1:
      lVar10 = lVar10 + 1;
      if ((int)uVar9 <= (int)lVar10) {
        return;
      }
    }
    lVar2 = *(long *)(param_1 + 0x30);
    plVar3 = *(long **)(*(long *)(this + 0x38) + (long)iVar5 * 8);
    if ((*(code **)(*plVar3 + 0x18) == SwingTwistConstraint::GetSubType) ||
       (iVar5 = (**(code **)(*plVar3 + 0x18))(plVar3), iVar5 == 6)) {
      JPH::SwingTwistConstraint::SetSwingMotorState(plVar3,2);
      JPH::SwingTwistConstraint::SetTwistMotorState(plVar3,2);
      fVar11 = (float)(__LC11 ^ *(uint *)(plVar3 + 0xc));
      fVar13 = (float)(_UNK_00106334 ^ *(uint *)((long)plVar3 + 100));
      fVar14 = (float)(_UNK_00106338 ^ *(uint *)(plVar3 + 0xd));
      fVar15 = (float)(_UNK_0010633c ^ *(uint *)((long)plVar3 + 0x6c));
      puVar6 = (undefined8 *)(lVar10 * 0x20 + lVar2);
      uVar9 = *puVar6;
      uVar1 = puVar6[1];
      fVar12 = (float)uVar1;
      fVar7 = (float)uVar9;
      fVar4 = (float)((ulong)uVar1 >> 0x20);
      fVar8 = (float)((ulong)uVar9 >> 0x20);
      fVar18 = (fVar15 * fVar7 + fVar11 * fVar4 + fVar13 * fVar12) - fVar14 * fVar8;
      fVar17 = (fVar15 * fVar8 - fVar11 * fVar12) + fVar13 * fVar4 + fVar14 * fVar7;
      fVar19 = (float)plVar3[0xe];
      fVar21 = (float)((ulong)plVar3[0xe] >> 0x20);
      fVar20 = (float)plVar3[0xf];
      fVar22 = (float)((ulong)plVar3[0xf] >> 0x20);
      fVar16 = ((fVar15 * fVar12 + fVar11 * fVar8) - fVar13 * fVar7) + fVar14 * fVar4;
      fVar12 = ((fVar15 * fVar4 - fVar11 * fVar7) - fVar13 * fVar8) - fVar14 * fVar12;
      JPH::SwingTwistConstraint::SetTargetOrientationCS
                (CONCAT44((fVar12 * fVar21 - fVar18 * fVar20) + fVar17 * fVar22 + fVar16 * fVar19,
                          (fVar18 * fVar22 + fVar12 * fVar19 + fVar17 * fVar20) - fVar16 * fVar21),
                 CONCAT44(((fVar12 * fVar22 - fVar18 * fVar19) - fVar17 * fVar21) - fVar16 * fVar20,
                          ((fVar18 * fVar21 + fVar12 * fVar20) - fVar17 * fVar19) + fVar16 * fVar22)
                 ,plVar3);
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      goto LAB_00103ae1;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    lVar10 = lVar10 + 1;
    if ((int)uVar9 <= (int)lVar10) {
      return;
    }
  } while( true );
}



/* JPH::Ragdoll::SetLinearAndAngularVelocity(JPH::Vec3, JPH::Vec3, bool) */

void JPH::Ragdoll::SetLinearAndAngularVelocity
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,char param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  puVar2 = *(undefined4 **)(param_5 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_5 + 0x40) + 0x140;
  if (param_6 != '\0') {
    lVar3 = *(long *)(param_5 + 0x40) + 0x158;
  }
  puVar1 = puVar2 + *(long *)(param_5 + 0x10);
  if (puVar1 != puVar2) {
    do {
      local_34 = *puVar2;
      puVar2 = puVar2 + 1;
      JPH::BodyInterface::SetLinearAndAngularVelocity
                (param_1,param_2,param_3,param_4,lVar3,&local_34);
    } while (puVar1 != puVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Ragdoll::SetLinearVelocity(JPH::Vec3, bool) */

void JPH::Ragdoll::SetLinearVelocity
               (undefined8 param_1,undefined8 param_2,long param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  puVar2 = *(undefined4 **)(param_3 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_3 + 0x40) + 0x140;
  if (param_4 != '\0') {
    lVar3 = *(long *)(param_3 + 0x40) + 0x158;
  }
  puVar1 = puVar2 + *(long *)(param_3 + 0x10);
  if (puVar1 != puVar2) {
    do {
      local_34 = *puVar2;
      puVar2 = puVar2 + 1;
      JPH::BodyInterface::SetLinearVelocity(param_1,param_2,lVar3,&local_34);
    } while (puVar1 != puVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Ragdoll::AddLinearVelocity(JPH::Vec3, bool) */

void JPH::Ragdoll::AddLinearVelocity
               (undefined8 param_1,undefined8 param_2,long param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  puVar2 = *(undefined4 **)(param_3 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_3 + 0x40) + 0x140;
  if (param_4 != '\0') {
    lVar3 = *(long *)(param_3 + 0x40) + 0x158;
  }
  puVar1 = puVar2 + *(long *)(param_3 + 0x10);
  if (puVar1 != puVar2) {
    do {
      local_34 = *puVar2;
      puVar2 = puVar2 + 1;
      JPH::BodyInterface::AddLinearVelocity(param_1,param_2,lVar3,&local_34);
    } while (puVar1 != puVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Ragdoll::AddImpulse(JPH::Vec3, bool) */

void JPH::Ragdoll::AddImpulse(undefined8 param_1,undefined8 param_2,long param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  puVar2 = *(undefined4 **)(param_3 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_3 + 0x40) + 0x140;
  if (param_4 != '\0') {
    lVar3 = *(long *)(param_3 + 0x40) + 0x158;
  }
  puVar1 = puVar2 + *(long *)(param_3 + 0x10);
  if (puVar1 != puVar2) {
    do {
      local_34 = *puVar2;
      puVar2 = puVar2 + 1;
      JPH::BodyInterface::AddImpulse(param_1,param_2,lVar3,&local_34);
    } while (puVar1 != puVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Ragdoll::GetRootTransform(JPH::Vec3&, JPH::Quat&, bool) const */

void JPH::Ragdoll::GetRootTransform(Vec3 *param_1,Quat *param_2,bool param_3)

{
  uint *puVar1;
  Body *this;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  char in_CL;
  undefined7 in_register_00000011;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 in_XMM1_Qa;
  
  puVar6 = (undefined8 *)CONCAT71(in_register_00000011,param_3);
  puVar1 = *(uint **)(param_1 + 0x20);
  plVar7 = (long *)(*(long *)(param_1 + 0x40) + 0x120);
  if (in_CL != '\0') {
    plVar7 = (long *)(*(long *)(param_1 + 0x40) + 0x130);
  }
  if (*puVar1 == 0xffffffff) {
    *(undefined1 (*) [16])param_2 = (undefined1  [16])0x0;
    uVar2 = _UNK_00106318;
    *puVar6 = __LC1;
    puVar6[1] = uVar2;
    return;
  }
  lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar1);
  uVar5 = (ulong)(*puVar1 & 0x7fffff);
  if (((uVar5 < *(ulong *)plVar7[1]) &&
      (this = *(Body **)(((ulong *)plVar7[1])[2] + uVar5 * 8), ((ulong)this & 1) == 0)) &&
     (*puVar1 == *(uint *)(this + 0x70))) {
    uVar8 = Body::GetPosition(this);
    uVar2 = *(undefined8 *)(this + 0x10);
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)param_2 = uVar8;
    *(undefined8 *)(param_2 + 8) = in_XMM1_Qa;
    *puVar6 = uVar2;
    puVar6[1] = uVar3;
  }
  else {
    *(undefined1 (*) [16])param_2 = (undefined1  [16])0x0;
    uVar2 = _UNK_00106318;
    *puVar6 = __LC1;
    puVar6[1] = uVar2;
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00103ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar4);
  return;
}



/* JPH::Ragdoll::GetWorldSpaceBounds(bool) const */

undefined1 (*) [16] JPH::Ragdoll::GetWorldSpaceBounds(bool param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  char in_DL;
  long lVar6;
  long *plVar7;
  long in_RSI;
  undefined7 in_register_00000039;
  undefined1 (*pauVar8) [16];
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pauVar8 = (undefined1 (*) [16])CONCAT71(in_register_00000039,param_1);
  lVar2 = *(long *)(in_RSI + 0x20);
  iVar9 = (int)*(ulong *)(in_RSI + 0x10);
  plVar7 = (long *)(*(long *)(in_RSI + 0x40) + 0x120);
  if (in_DL != '\0') {
    plVar7 = (long *)(*(long *)(in_RSI + 0x40) + 0x130);
  }
  lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,lVar2,*(ulong *)(in_RSI + 0x10) & 0xffffffff);
  uVar4 = _LC0;
  if (lVar5 == 0) {
    *(undefined4 *)*pauVar8 = _LC0;
    *(undefined4 *)(*pauVar8 + 4) = uVar4;
    *(undefined4 *)(*pauVar8 + 8) = uVar4;
    *(undefined4 *)(*pauVar8 + 0xc) = uVar4;
    auVar10._4_4_ = _LC10;
    auVar10._0_4_ = _LC10;
    auVar10._8_4_ = _LC10;
    auVar10._12_4_ = _LC10;
    pauVar8[1] = auVar10;
    if (iVar9 < 1) {
      return pauVar8;
    }
  }
  else {
    (**(code **)(*plVar7 + 0x38))(plVar7,lVar5);
    uVar4 = _LC0;
    *(undefined4 *)*pauVar8 = _LC0;
    *(undefined4 *)(*pauVar8 + 4) = uVar4;
    *(undefined4 *)(*pauVar8 + 8) = uVar4;
    *(undefined4 *)(*pauVar8 + 0xc) = uVar4;
    auVar11._4_4_ = _LC10;
    auVar11._0_4_ = _LC10;
    auVar11._8_4_ = _LC10;
    auVar11._12_4_ = _LC10;
    pauVar8[1] = auVar11;
    if (iVar9 < 1) goto LAB_00103fe2;
  }
  lVar6 = 0;
  do {
    uVar1 = *(uint *)(lVar2 + lVar6 * 4);
    if (uVar1 != 0xffffffff) {
      if ((((ulong)(uVar1 & 0x7fffff) < *(ulong *)plVar7[1]) &&
          (uVar3 = *(ulong *)(((ulong *)plVar7[1])[2] + (ulong)(uVar1 & 0x7fffff) * 8),
          (uVar3 & 1) == 0)) && (uVar1 == *(uint *)(uVar3 + 0x70))) {
        auVar11 = minps(*pauVar8,*(undefined1 (*) [16])(uVar3 + 0x20));
        *pauVar8 = auVar11;
        auVar11 = maxps(pauVar8[1],*(undefined1 (*) [16])(uVar3 + 0x30));
        pauVar8[1] = auVar11;
      }
    }
    lVar6 = lVar6 + 1;
  } while ((int)lVar6 < iVar9);
  if (lVar5 == 0) {
    return pauVar8;
  }
LAB_00103fe2:
  (**(code **)(*plVar7 + 0x40))(plVar7,lVar5);
  return pauVar8;
}



/* JPH::RagdollSettings::sRestoreFromBinaryState(JPH::StreamIn&) */

RagdollSettings * __thiscall
JPH::RagdollSettings::sRestoreFromBinaryState(RagdollSettings *this,StreamIn *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  RagdollSettings *this_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  RagdollSettings *pRVar17;
  long in_FS_OFFSET;
  byte bVar18;
  char local_22d;
  uint local_22c;
  undefined8 local_228;
  long *local_220;
  undefined1 local_218 [16];
  undefined8 *local_208;
  undefined1 local_1f8 [16];
  long *local_1e8;
  undefined1 local_1d8 [16];
  undefined8 *local_1c8;
  int *local_1b8;
  undefined8 local_1b0;
  int local_1a8 [4];
  char local_198;
  long *local_188;
  undefined8 local_180;
  long local_178 [2];
  char local_168;
  long *local_158;
  undefined8 uStack_150;
  long local_148;
  undefined8 uStack_140;
  char local_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined2 local_110;
  long *local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined4 local_f6;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined2 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  char local_58;
  long local_40;
  
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x20] = (RagdollSettings)0x0;
  JPH::Skeleton::sRestoreFromBinaryState((StreamIn *)&local_1b8);
  if (local_198 == '\x02') {
    local_1d8._8_8_ = local_1b8;
    local_1d8._0_8_ = local_1b0;
    Result<JPH::Ref<JPH::RagdollSettings>>::SetError
              ((Result<JPH::Ref<JPH::RagdollSettings>> *)this,(basic_string_view *)local_1d8);
LAB_001049ed:
    if (local_198 == '\x01') {
      if (local_1b8 != (int *)0x0) {
        LOCK();
        *local_1b8 = *local_1b8 + -1;
        UNLOCK();
        if (*local_1b8 == 0) {
          plVar9 = *(long **)(local_1b8 + 6);
          if (plVar9 != (long *)0x0) {
            if ((*(long *)(local_1b8 + 2) != 0) &&
               (plVar11 = plVar9 + *(long *)(local_1b8 + 2) * 9, plVar9 < plVar11)) {
              do {
                if ((long *)plVar9[4] != plVar9 + 6) {
                  (*Free)();
                }
                if ((long *)*plVar9 != plVar9 + 2) {
                  (*Free)();
                }
                plVar9 = plVar9 + 9;
              } while (plVar9 < plVar11);
              plVar9 = *(long **)(local_1b8 + 6);
            }
            local_1b8[2] = 0;
            local_1b8[3] = 0;
            (*Free)(plVar9);
          }
          (*Free)(local_1b8);
        }
      }
    }
    else if ((local_198 == '\x02') && (local_1b8 != local_1a8)) {
      (*Free)();
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return this;
  }
  this_00 = (RagdollSettings *)(*Allocate)(0x70);
  pRVar17 = this_00;
  for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
    *(undefined8 *)pRVar17 = 0;
    pRVar17 = pRVar17 + (ulong)bVar18 * -0x10 + 8;
  }
  LOCK();
  *(int *)this_00 = *(int *)this_00 + 1;
  UNLOCK();
  piVar1 = *(int **)(this_00 + 8);
  if (piVar1 != local_1b8) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar9 = *(long **)(piVar1 + 6);
        if (plVar9 != (long *)0x0) {
          if ((*(long *)(piVar1 + 2) != 0) &&
             (plVar11 = plVar9 + *(long *)(piVar1 + 2) * 9, plVar9 < plVar11)) {
            do {
              if ((long *)plVar9[4] != plVar9 + 6) {
                (*Free)();
              }
              if ((long *)*plVar9 != plVar9 + 2) {
                (*Free)();
              }
              plVar9 = plVar9 + 9;
            } while (plVar9 < plVar11);
            plVar9 = *(long **)(piVar1 + 6);
          }
          piVar1[2] = 0;
          piVar1[3] = 0;
          (*Free)(plVar9);
        }
        (*Free)(piVar1);
      }
    }
    *(int **)(this_00 + 8) = local_1b8;
    if (local_1b8 != (int *)0x0) {
      LOCK();
      *local_1b8 = *local_1b8 + 1;
      UNLOCK();
    }
  }
  local_208 = (undefined8 *)0x0;
  local_1e8 = (long *)0x0;
  local_1c8 = (undefined8 *)0x0;
  local_218 = (undefined1  [16])0x0;
  local_1f8 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  puVar6 = (undefined8 *)(*Allocate)(0x2000);
  if (local_208 != (undefined8 *)0x0) {
    if (puVar6 < local_208) {
      puVar14 = local_208;
      for (puVar10 = puVar6; puVar10 < puVar6 + local_218._0_8_; puVar10 = puVar10 + 1) {
        uVar7 = *puVar14;
        puVar14 = puVar14 + 1;
        *puVar10 = uVar7;
      }
    }
    else {
      puVar10 = local_208 + local_218._0_8_ + -1;
      puVar14 = puVar6 + local_218._0_8_ + -1;
      if (!CARRY8(local_218._0_8_ * 8 - 8,(ulong)puVar6)) {
        do {
          uVar7 = *puVar10;
          puVar13 = puVar14 + -1;
          puVar10 = puVar10 + -1;
          *puVar14 = uVar7;
          puVar14 = puVar13;
        } while (puVar6 <= puVar13);
      }
    }
    (*Free)();
  }
  local_218._8_8_ = 0x400;
  local_208 = puVar6;
  if ((ulong)local_1f8._8_8_ < 0x80) {
    plVar9 = (long *)(*Allocate)(0x400);
    if (local_1e8 != (long *)0x0) {
      if (plVar9 < local_1e8) {
        plVar8 = local_1e8;
        for (plVar11 = plVar9; plVar11 < plVar9 + local_1f8._0_8_; plVar11 = plVar11 + 1) {
          lVar12 = *plVar8;
          plVar8 = plVar8 + 1;
          *plVar11 = lVar12;
        }
      }
      else {
        plVar11 = local_1e8 + local_1f8._0_8_ + -1;
        plVar8 = plVar9 + local_1f8._0_8_ + -1;
        if (!CARRY8(local_1f8._0_8_ * 8 - 8,(ulong)plVar9)) {
          do {
            lVar12 = *plVar11;
            plVar15 = plVar8 + -1;
            plVar11 = plVar11 + -1;
            *plVar8 = lVar12;
            plVar8 = plVar15;
          } while (plVar9 <= plVar15);
        }
      }
      (*Free)();
    }
    local_1f8._8_8_ = 0x80;
    local_1e8 = plVar9;
  }
  if ((ulong)local_1d8._8_8_ < 0x80) {
    puVar6 = (undefined8 *)(*Allocate)(0x400);
    if (local_1c8 != (undefined8 *)0x0) {
      if (puVar6 < local_1c8) {
        puVar14 = local_1c8;
        for (puVar10 = puVar6; puVar10 < puVar6 + local_1d8._0_8_; puVar10 = puVar10 + 1) {
          uVar7 = *puVar14;
          puVar14 = puVar14 + 1;
          *puVar10 = uVar7;
        }
      }
      else {
        puVar10 = local_1c8 + local_1d8._0_8_ + -1;
        puVar14 = puVar6 + local_1d8._0_8_ + -1;
        if (!CARRY8(local_1d8._0_8_ * 8 - 8,(ulong)puVar6)) {
          do {
            uVar7 = *puVar10;
            puVar13 = puVar14 + -1;
            puVar10 = puVar10 + -1;
            *puVar14 = uVar7;
            puVar14 = puVar13;
          } while (puVar6 <= puVar13);
        }
      }
      (*Free)();
    }
    local_1d8._8_8_ = 0x80;
    local_1c8 = puVar6;
  }
  local_22c = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_22c,4);
  Array<JPH::RagdollSettings::Part,JPH::STLAllocator<JPH::RagdollSettings::Part>>::resize
            ((Array<JPH::RagdollSettings::Part,JPH::STLAllocator<JPH::RagdollSettings::Part>> *)
             (this_00 + 0x10),(ulong)local_22c);
  puVar6 = *(undefined8 **)(this_00 + 0x20);
  puVar10 = puVar6 + *(long *)(this_00 + 0x10) * 0x22;
  if (puVar6 != puVar10) {
LAB_0010426f:
    do {
      JPH::BodyCreationSettings::sRestoreWithChildren
                ((StreamIn *)&local_158,(Array *)param_1,(Array *)local_218,(Array *)local_1f8);
      if (local_58 == '\x02') {
        local_228 = uStack_150;
        local_220 = local_158;
        Result<JPH::Ref<JPH::RagdollSettings>>::SetError
                  ((Result<JPH::Ref<JPH::RagdollSettings>> *)this,(basic_string_view *)&local_228);
LAB_001048b6:
        local_138 = local_58;
        if (local_58 == '\x01') {
          if (local_60 != (long *)0x0) {
            LOCK();
            plVar9 = local_60 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)(*local_60 + 8))();
            }
          }
          if (local_68 != (long *)0x0) {
            LOCK();
            plVar9 = local_68 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)(*local_68 + 0x18))();
            }
          }
joined_r0x00104da3:
          if (local_108 != (long *)0x0) {
            LOCK();
            plVar9 = local_108 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)(*local_108 + 0x18))();
            }
          }
        }
        else {
LAB_001048c6:
          if ((local_138 == '\x02') && (local_158 != &local_148)) {
            (*Free)();
          }
        }
        goto LAB_001048e5;
      }
      plVar9 = (long *)puVar6[10];
      *puVar6 = local_158;
      puVar6[1] = uStack_150;
      puVar6[2] = local_148;
      puVar6[3] = uStack_140;
      puVar6[4] = CONCAT71(uStack_137,local_138);
      puVar6[5] = uStack_130;
      puVar6[8] = local_118;
      puVar6[6] = local_128;
      puVar6[7] = uStack_120;
      *(undefined2 *)(puVar6 + 9) = local_110;
      if (plVar9 != local_108) {
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        puVar6[10] = local_108;
        if (local_108 != (long *)0x0) {
          LOCK();
          *(int *)(local_108 + 1) = (int)local_108[1] + 1;
          UNLOCK();
        }
      }
      puVar6[0xb] = local_100;
      *(undefined2 *)(puVar6 + 0xc) = local_f8;
      *(undefined4 *)((long)puVar6 + 0x62) = local_f6;
      *(undefined1 *)((long)puVar6 + 0x66) = local_f2;
      *(undefined1 *)((long)puVar6 + 0x67) = local_f1;
      *(undefined4 *)((long)puVar6 + 0x6c) = local_ec;
      *(undefined4 *)(puVar6 + 0xe) = uStack_e8;
      *(undefined4 *)((long)puVar6 + 0x74) = uStack_e4;
      *(undefined4 *)(puVar6 + 0xf) = uStack_e0;
      *(undefined2 *)(puVar6 + 0xd) = local_f0;
      *(undefined8 *)((long)puVar6 + 0x7c) = local_dc;
      puVar6[0x11] = local_d0;
      *(undefined4 *)((long)puVar6 + 0x84) = local_d4;
      *(undefined1 *)(puVar6 + 0x12) = local_c8;
      *(undefined4 *)((long)puVar6 + 0x94) = local_c4;
      puVar6[0x14] = local_b8;
      puVar6[0x15] = uStack_b0;
      puVar6[0x16] = local_a8;
      puVar6[0x17] = uStack_a0;
      puVar6[0x18] = local_98;
      puVar6[0x19] = uStack_90;
      puVar6[0x1a] = local_88;
      puVar6[0x1b] = uStack_80;
      plVar9 = (long *)puVar6[0x1e];
      puVar6[0x1c] = local_78;
      puVar6[0x1d] = uStack_70;
      if (plVar9 != local_68) {
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        puVar6[0x1e] = local_68;
        if (local_68 != (long *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
      }
      plVar9 = (long *)puVar6[0x1f];
      if (plVar9 != local_60) {
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        puVar6[0x1f] = local_60;
        if (local_60 != (long *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
      }
      local_22d = '\0';
      (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_22d,1);
      if (local_22d != '\0') {
        JPH::ConstraintSettings::sRestoreFromBinaryState((StreamIn *)&local_188);
        plVar9 = local_188;
        if (local_168 == '\x02') {
          local_228 = local_180;
          local_220 = local_188;
          Result<JPH::Ref<JPH::RagdollSettings>>::SetError
                    ((Result<JPH::Ref<JPH::RagdollSettings>> *)this,(basic_string_view *)&local_228)
          ;
          if (local_168 == '\x01') {
            if (local_188 != (long *)0x0) {
              LOCK();
              plVar9 = local_188 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)(*local_188 + 0x18))();
              }
            }
          }
          else if ((local_168 == '\x02') && (local_188 != local_178)) {
            (*Free)();
          }
          goto LAB_001048b6;
        }
        if (local_188 == (long *)0x0) {
          plVar9 = (long *)puVar6[0x20];
          if (plVar9 == (long *)0x0) goto LAB_00104558;
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          plVar8 = (long *)0x0;
          if ((int)*plVar11 == 0) {
LAB_00104820:
            (**(code **)(*plVar9 + 0x18))();
            goto LAB_0010450f;
          }
          puVar6[0x20] = 0;
        }
        else {
          pcVar2 = *(code **)(*local_188 + 8);
          uVar7 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
          plVar8 = (long *)(*pcVar2)(plVar9,uVar7);
          plVar9 = (long *)puVar6[0x20];
          if (plVar9 != plVar8) {
            if (plVar9 != (long *)0x0) {
              LOCK();
              plVar11 = plVar9 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) goto LAB_00104820;
            }
LAB_0010450f:
            puVar6[0x20] = plVar8;
            if (plVar8 != (long *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
          }
        }
        if (local_168 == '\x01') {
          if (local_188 != (long *)0x0) {
            LOCK();
            plVar9 = local_188 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)(*local_188 + 0x18))();
            }
          }
        }
        else if ((local_168 == '\x02') && (local_188 != local_178)) {
          (*Free)();
        }
      }
LAB_00104558:
      if (local_58 != '\x01') {
        if ((local_58 == '\x02') && (local_158 != &local_148)) {
          (*Free)();
        }
LAB_0010425f:
        puVar6 = puVar6 + 0x22;
        if (puVar10 == puVar6) break;
        goto LAB_0010426f;
      }
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar9 = local_60 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)(*local_60 + 8))();
        }
      }
      if (local_68 != (long *)0x0) {
        LOCK();
        plVar9 = local_68 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)(*local_68 + 0x18))();
        }
      }
      if (local_108 == (long *)0x0) goto LAB_0010425f;
      LOCK();
      plVar9 = local_108 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 != 0) goto LAB_0010425f;
      puVar6 = puVar6 + 0x22;
      (**(code **)(*local_108 + 0x18))();
    } while (puVar10 != puVar6);
  }
  local_22c = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_22c,4);
  Array<JPH::RagdollSettings::AdditionalConstraint,JPH::STLAllocator<JPH::RagdollSettings::AdditionalConstraint>>
  ::resize((Array<JPH::RagdollSettings::AdditionalConstraint,JPH::STLAllocator<JPH::RagdollSettings::AdditionalConstraint>>
            *)(this_00 + 0x28),(ulong)local_22c);
  lVar16 = *(long *)(this_00 + 0x38);
  lVar12 = lVar16 + *(long *)(this_00 + 0x28) * 0x10;
joined_r0x00104621:
  if (lVar12 != lVar16) {
    do {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar16,8);
      JPH::ConstraintSettings::sRestoreFromBinaryState((StreamIn *)&local_158);
      plVar9 = local_158;
      if (local_138 == '\x02') {
        local_228 = uStack_150;
        local_220 = local_158;
        Result<JPH::Ref<JPH::RagdollSettings>>::SetError
                  ((Result<JPH::Ref<JPH::RagdollSettings>> *)this,(basic_string_view *)&local_228);
        local_108 = local_158;
        if (local_138 == '\x01') goto joined_r0x00104da3;
        goto LAB_001048c6;
      }
      if (local_158 == (long *)0x0) {
        plVar9 = *(long **)(lVar16 + 8);
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          plVar8 = (long *)0x0;
          if ((int)*plVar11 == 0) {
LAB_00104878:
            (**(code **)(*plVar9 + 0x18))();
            goto LAB_001046d8;
          }
          *(undefined8 *)(lVar16 + 8) = 0;
          goto LAB_001046e8;
        }
      }
      else {
        pcVar2 = *(code **)(*local_158 + 8);
        uVar7 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
        plVar8 = (long *)(*pcVar2)(plVar9,uVar7);
        plVar9 = *(long **)(lVar16 + 8);
        if (plVar9 != plVar8) {
          if (plVar9 != (long *)0x0) {
            LOCK();
            plVar11 = plVar9 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) goto LAB_00104878;
          }
LAB_001046d8:
          *(long **)(lVar16 + 8) = plVar8;
          if (plVar8 != (long *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
        }
LAB_001046e8:
        if (local_138 == '\x01') {
          if (local_158 != (long *)0x0) {
            LOCK();
            plVar9 = local_158 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) goto code_r0x00104714;
          }
        }
        else if ((local_138 == '\x02') && (local_158 != &local_148)) {
          (*Free)();
        }
      }
      lVar16 = lVar16 + 0x10;
      if (lVar12 == lVar16) break;
    } while( true );
  }
  CalculateBodyIndexToConstraintIndex(this_00);
  CalculateConstraintIndexToBodyIdxPair(this_00);
  if (this[0x20] == (RagdollSettings)0x1) {
    pRVar17 = *(RagdollSettings **)this;
    if (pRVar17 != (RagdollSettings *)0x0) {
      LOCK();
      *(int *)pRVar17 = *(int *)pRVar17 + -1;
      UNLOCK();
      if (*(int *)pRVar17 == 0) {
        ~RagdollSettings(pRVar17);
        (*Free)(pRVar17);
        this[0x20] = (RagdollSettings)0x0;
        *(RagdollSettings **)this = this_00;
        goto LAB_00104ceb;
      }
    }
LAB_00104ce4:
    this[0x20] = (RagdollSettings)0x0;
    *(RagdollSettings **)this = this_00;
  }
  else {
    if ((this[0x20] != (RagdollSettings)0x2) || (*(RagdollSettings **)this == this + 0x10))
    goto LAB_00104ce4;
    (*Free)();
    this[0x20] = (RagdollSettings)0x0;
    *(RagdollSettings **)this = this_00;
  }
LAB_00104ceb:
  LOCK();
  *(int *)this_00 = *(int *)this_00 + 1;
  UNLOCK();
  this[0x20] = (RagdollSettings)0x1;
LAB_001048e5:
  if (local_1c8 != (undefined8 *)0x0) {
    if (local_1d8._0_8_ != 0) {
      puVar6 = local_1c8 + local_1d8._0_8_;
      puVar10 = local_1c8;
joined_r0x00104906:
      if (puVar10 < puVar6) {
        do {
          plVar9 = (long *)*puVar10;
          if (plVar9 != (long *)0x0) {
            LOCK();
            plVar11 = plVar9 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 != 0) goto code_r0x00104a6e;
            (**(code **)(*plVar9 + 0x18))();
          }
          puVar10 = puVar10 + 1;
          if (puVar6 <= puVar10) break;
        } while( true );
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_1d8._8_8_;
    local_1d8 = auVar3 << 0x40;
    (*Free)(local_1c8);
  }
  if (local_1e8 != (long *)0x0) {
    if (local_1f8._0_8_ != 0) {
      plVar9 = local_1e8 + local_1f8._0_8_;
      plVar11 = local_1e8;
joined_r0x00104946:
      if (plVar11 < plVar9) {
        do {
          plVar8 = (long *)*plVar11;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar15 = plVar8 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              if (*(code **)(*plVar8 + 0x18) == PhysicsMaterial::~PhysicsMaterial)
              goto code_r0x00104980;
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          plVar11 = plVar11 + 1;
          if (plVar9 <= plVar11) break;
        } while( true );
      }
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_1f8._8_8_;
    local_1f8 = auVar4 << 0x40;
    (*Free)(local_1e8);
  }
  if (local_208 != (undefined8 *)0x0) {
    if (local_218._0_8_ != 0) {
      puVar6 = local_208 + local_218._0_8_;
      puVar10 = local_208;
joined_r0x001049c8:
      if (puVar10 < puVar6) {
        do {
          plVar9 = (long *)*puVar10;
          if (plVar9 != (long *)0x0) {
            LOCK();
            plVar11 = plVar9 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 != 0) goto code_r0x00104aa6;
            (**(code **)(*plVar9 + 8))();
          }
          puVar10 = puVar10 + 1;
          if (puVar6 <= puVar10) break;
        } while( true );
      }
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_218._8_8_;
    local_218 = auVar5 << 0x40;
    (*Free)(local_208);
  }
  LOCK();
  *(int *)this_00 = *(int *)this_00 + -1;
  UNLOCK();
  if (*(int *)this_00 == 0) {
    ~RagdollSettings(this_00);
    (*Free)(this_00);
  }
  goto LAB_001049ed;
code_r0x00104714:
  lVar16 = lVar16 + 0x10;
  (**(code **)(*local_158 + 0x18))();
  goto joined_r0x00104621;
code_r0x00104a6e:
  puVar10 = puVar10 + 1;
  goto joined_r0x00104906;
code_r0x00104980:
  (*Free)();
  plVar11 = plVar11 + 1;
  goto joined_r0x00104946;
code_r0x00104aa6:
  puVar10 = puVar10 + 1;
  goto joined_r0x001049c8;
}



/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&) const */

undefined8 JPH::ShapeFilter::ShouldCollide(Shape *param_1,SubShapeID *param_2)

{
  return 1;
}



/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&, JPH::Shape const*,
   JPH::SubShapeID const&) const */

undefined8
JPH::ShapeFilter::ShouldCollide
          (Shape *param_1,SubShapeID *param_2,Shape *param_3,SubShapeID *param_4)

{
  return 1;
}



/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
  return;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::SwingTwistConstraint::GetSubType() const */

undefined8 JPH::SwingTwistConstraint::GetSubType(void)

{
  return 6;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::~AnyHitCollisionCollector() */

void __thiscall
JPH::
AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::~AnyHitCollisionCollector
          (AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00105184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::Reset() */

void __thiscall
JPH::
AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::Reset(AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
        *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  this[0x480] = (AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
                 )0x0;
  return;
}



/* JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>::
     OnBody(Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>::
     SetUserData(ulong param_1)

{
  return;
}



/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
  operator_delete(this,0x10);
  return;
}



/* JPH::AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::~AnyHitCollisionCollector() */

void __thiscall
JPH::
AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::~AnyHitCollisionCollector
          (AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
  operator_delete(this,0x490);
  return;
}



/* JPH::AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::AddHit(JPH::CollideShapeResult const&) */

void __thiscall
JPH::
AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::AddHit(AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
         *this,CollideShapeResult *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(undefined4 *)(this + 8) = 0xff7fffff;
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x28) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x48) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x54) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x58) = uVar2;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(uint *)(param_1 + 0x40);
  if ((param_1 + 0x40 != (CollideShapeResult *)(this + 0x60)) &&
     (*(undefined4 *)(this + 0x60) = 0, uVar3 != 0)) {
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + lVar5 + 0x50 + 8);
      *(undefined8 *)(this + lVar5 + 0x70) = *(undefined8 *)(param_1 + lVar5 + 0x50);
      *(undefined8 *)(this + lVar5 + 0x70 + 8) = uVar4;
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar5);
    *(uint *)(this + 0x60) = uVar3;
  }
  uVar3 = *(uint *)(param_1 + 0x250);
  if ((param_1 + 0x250 != (CollideShapeResult *)(this + 0x270)) &&
     (*(undefined4 *)(this + 0x270) = 0, uVar3 != 0)) {
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + lVar5 + 0x260 + 8);
      *(undefined8 *)(this + lVar5 + 0x280) = *(undefined8 *)(param_1 + lVar5 + 0x260);
      *(undefined8 *)(this + lVar5 + 0x280 + 8) = uVar4;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != (ulong)uVar3 << 4);
    *(uint *)(this + 0x270) = uVar3;
  }
  this[0x480] = (AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
                 )0x1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::GetPosition() const */

undefined1  [16] __thiscall JPH::Body::GetPosition(Body *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [12];
  
  auVar16 = ZEXT812(0);
  if (*(code **)(**(long **)(this + 0x40) + 0x18) != Shape::GetCenterOfMass) {
    auVar16 = (**(code **)(**(long **)(this + 0x40) + 0x18))();
  }
  fVar7 = auVar16._8_4_;
  fVar8 = *(float *)(this + 0x1c);
  fVar1 = *(float *)(this + 0x10);
  fVar5 = auVar16._0_4_;
  fVar15 = auVar16._4_4_;
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x18);
  fVar10 = (float)(*(uint *)(this + 0x10) ^ __LC11);
  fVar11 = (float)(*(uint *)(this + 0x14) ^ _UNK_00106334);
  fVar12 = (float)(*(uint *)(this + 0x18) ^ _UNK_00106338);
  fVar13 = (float)(*(uint *)(this + 0x1c) ^ _UNK_0010633c);
  fVar14 = (fVar8 * fVar5 + fVar1 * 0.0 + fVar2 * fVar7) - fVar3 * fVar15;
  fVar9 = (fVar8 * fVar15 - fVar1 * fVar7) + fVar2 * 0.0 + fVar3 * fVar5;
  fVar6 = ((fVar8 * fVar7 + fVar1 * fVar15) - fVar2 * fVar5) + fVar3 * 0.0;
  fVar8 = ((fVar8 * 0.0 - fVar1 * fVar5) - fVar2 * fVar15) - fVar3 * fVar7;
  auVar4._4_4_ = *(float *)(this + 4) -
                 (fVar6 * fVar10 + fVar9 * fVar13 + (fVar11 * fVar8 - fVar14 * fVar12));
  auVar4._0_4_ = *(float *)this -
                 ((fVar9 * fVar12 + fVar14 * fVar13 + fVar10 * fVar8) - fVar6 * fVar11);
  auVar4._8_4_ = *(float *)(this + 8) -
                 (fVar6 * fVar13 + ((fVar14 * fVar11 + fVar12 * fVar8) - fVar9 * fVar10));
  auVar4._12_4_ =
       *(float *)(this + 0xc) -
       (((fVar13 * fVar8 - fVar14 * fVar10) - fVar9 * fVar11) - fVar6 * fVar12);
  return auVar4;
}



/* JPH::RagdollSettings::Part::~Part() */

void __thiscall JPH::RagdollSettings::Part::~Part(Part *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x100);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  plVar2 = *(long **)(this + 0xf8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0xf0);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  plVar2 = *(long **)(this + 0x50);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001054d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::RagdollSettings::~RagdollSettings() */

void __thiscall JPH::RagdollSettings::~RagdollSettings(RagdollSettings *this)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(this + 0x68) != 0) {
    *(undefined8 *)(this + 0x58) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x50) != 0) {
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)();
  }
  uVar3 = *(ulong *)(this + 0x38);
  if (uVar3 != 0) {
    if ((*(long *)(this + 0x28) != 0) &&
       (uVar5 = *(long *)(this + 0x28) * 0x10 + uVar3, uVar3 < uVar5)) {
      do {
        while (plVar4 = *(long **)(uVar3 + 8), plVar4 == (long *)0x0) {
LAB_001055b0:
          uVar3 = uVar3 + 0x10;
          if (uVar5 <= uVar3) goto LAB_001055e0;
        }
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_001055b0;
        uVar3 = uVar3 + 0x10;
        (**(code **)(*plVar4 + 0x18))();
      } while (uVar3 < uVar5);
LAB_001055e0:
      uVar3 = *(ulong *)(this + 0x38);
    }
    *(undefined8 *)(this + 0x28) = 0;
    (*Free)(uVar3);
  }
  uVar3 = *(ulong *)(this + 0x20);
  if (uVar3 != 0) {
    if ((*(long *)(this + 0x10) != 0) &&
       (uVar5 = *(long *)(this + 0x10) * 0x110 + uVar3, uVar3 < uVar5)) {
      do {
        plVar4 = *(long **)(uVar3 + 0x100);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        plVar4 = *(long **)(uVar3 + 0xf8);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        plVar4 = *(long **)(uVar3 + 0xf0);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        plVar4 = *(long **)(uVar3 + 0x50);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        uVar3 = uVar3 + 0x110;
      } while (uVar3 < uVar5);
      uVar3 = *(ulong *)(this + 0x20);
    }
    *(undefined8 *)(this + 0x10) = 0;
    (*Free)(uVar3);
  }
  piVar2 = *(int **)(this + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      plVar4 = *(long **)(piVar2 + 6);
      if (plVar4 != (long *)0x0) {
        if ((*(long *)(piVar2 + 2) != 0) &&
           (plVar1 = plVar4 + *(long *)(piVar2 + 2) * 9, plVar4 < plVar1)) {
          do {
            if ((long *)plVar4[4] != plVar4 + 6) {
              (*Free)();
            }
            if ((long *)*plVar4 != plVar4 + 2) {
              (*Free)();
            }
            plVar4 = plVar4 + 9;
          } while (plVar4 < plVar1);
          plVar4 = *(long **)(piVar2 + 6);
        }
        piVar2[2] = 0;
        piVar2[3] = 0;
        (*Free)(plVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x0010575b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(piVar2);
      return;
    }
  }
  return;
}



/* JPH::Ragdoll::IsActive(bool) const [clone .cold] */

void JPH::Ragdoll::IsActive(bool param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Ragdoll::SetGroupID(unsigned int, bool) [clone .cold] */

void JPH::Ragdoll::SetGroupID(uint param_1,bool param_2)

{
  code *pcVar1;
  
  _DAT_00000060 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JPH::Ragdoll::GetPose(JPH::Vec3&, JPH::Mat44*, bool) [clone .cold] */

void JPH::Ragdoll::GetPose(Vec3 *param_1,Mat44 *param_2,bool param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Result<JPH::Ref<JPH::RagdollSettings> >::SetError(std::basic_string_view<char,
   std::char_traits<char> > const&) */

void __thiscall
JPH::Result<JPH::Ref<JPH::RagdollSettings>>::SetError
          (Result<JPH::Ref<JPH::RagdollSettings>> *this,basic_string_view *param_1)

{
  ulong __n;
  Result<JPH::Ref<JPH::RagdollSettings>> *__src;
  RagdollSettings *this_00;
  Result<JPH::Ref<JPH::RagdollSettings>> *__dest;
  
  if (this[0x20] == (Result<JPH::Ref<JPH::RagdollSettings>>)0x1) {
    this_00 = *(RagdollSettings **)this;
    if (this_00 != (RagdollSettings *)0x0) {
      LOCK();
      *(int *)this_00 = *(int *)this_00 + -1;
      UNLOCK();
      if (*(int *)this_00 == 0) {
        RagdollSettings::~RagdollSettings(this_00);
        (*Free)(this_00);
      }
    }
  }
  else if ((this[0x20] == (Result<JPH::Ref<JPH::RagdollSettings>>)0x2) &&
          (*(Result<JPH::Ref<JPH::RagdollSettings>> **)this != this + 0x10)) {
    (*Free)();
  }
  __dest = this + 0x10;
  __n = *(ulong *)param_1;
  __src = *(Result<JPH::Ref<JPH::RagdollSettings>> **)(param_1 + 8);
  this[0x20] = (Result<JPH::Ref<JPH::RagdollSettings>>)0x0;
  *(Result<JPH::Ref<JPH::RagdollSettings>> **)this = __dest;
  if ((__src == (Result<JPH::Ref<JPH::RagdollSettings>> *)0x0) && (__n != 0)) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_001058ec:
    std::__throw_length_error("basic_string::_M_create");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = *__src;
      goto LAB_00105845;
    }
    if (__n == 0) goto LAB_00105845;
  }
  else {
    if ((long)__n < 0) goto LAB_001058ec;
    __dest = (Result<JPH::Ref<JPH::RagdollSettings>> *)(*Allocate)(__n + 1);
    *(ulong *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::RagdollSettings>> **)this = __dest;
  }
  memcpy(__dest,__src,__n);
  __dest = *(Result<JPH::Ref<JPH::RagdollSettings>> **)this;
LAB_00105845:
  *(ulong *)(this + 8) = __n;
  __dest[__n] = (Result<JPH::Ref<JPH::RagdollSettings>>)0x0;
  this[0x20] = (Result<JPH::Ref<JPH::RagdollSettings>>)0x2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Array<JPH::RagdollSettings::Part, JPH::STLAllocator<JPH::RagdollSettings::Part>
   >::resize(unsigned long) */

void __thiscall
JPH::Array<JPH::RagdollSettings::Part,JPH::STLAllocator<JPH::RagdollSettings::Part>>::resize
          (Array<JPH::RagdollSettings::Part,JPH::STLAllocator<JPH::RagdollSettings::Part>> *this,
          ulong param_1)

{
  long *plVar1;
  undefined4 uVar2;
  Part PVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Part *pPVar18;
  Part *pPVar19;
  long lVar20;
  ulong uVar21;
  Part *pPVar22;
  Part *pPVar23;
  
  lVar20 = param_1 * 0x110;
  uVar5 = *(ulong *)this;
  if (param_1 < uVar5) {
    lVar6 = *(long *)(this + 0x10);
    for (uVar21 = lVar6 + lVar20; uVar21 < lVar6 + uVar5 * 0x110; uVar21 = uVar21 + 0x110) {
      plVar7 = *(long **)(uVar21 + 0x100);
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      plVar7 = *(long **)(uVar21 + 0xf8);
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      plVar7 = *(long **)(uVar21 + 0xf0);
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      plVar7 = *(long **)(uVar21 + 0x50);
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    }
  }
  if (param_1 <= *(ulong *)(this + 8)) {
    pPVar23 = *(Part **)(this + 0x10);
    goto LAB_0010595e;
  }
  pPVar23 = (Part *)(*Allocate)(lVar20);
  pPVar18 = *(Part **)(this + 0x10);
  if (pPVar18 != (Part *)0x0) {
    lVar6 = *(long *)this;
    if (pPVar23 < pPVar18) {
      if (pPVar23 < pPVar23 + lVar6 * 0x110) {
        pPVar22 = (Part *)0x0;
        pPVar19 = pPVar23;
        if (pPVar23 != (Part *)0x0) goto LAB_00105bb6;
        while( true ) {
          RagdollSettings::Part::~Part(pPVar18);
          pPVar18 = pPVar18 + 0x110;
          pPVar19 = pPVar22 + 0x110;
          if (pPVar23 + lVar6 * 0x110 <= pPVar22 + 0x110) break;
LAB_00105bb6:
          uVar8 = *(undefined8 *)(pPVar18 + 0x40);
          uVar9 = *(undefined8 *)(pPVar18 + 8);
          uVar10 = *(undefined8 *)(pPVar18 + 0x20);
          uVar11 = *(undefined8 *)(pPVar18 + 0x28);
          uVar12 = *(undefined8 *)(pPVar18 + 0x30);
          uVar13 = *(undefined8 *)(pPVar18 + 0x38);
          *(undefined8 *)pPVar19 = *(undefined8 *)pPVar18;
          *(undefined8 *)(pPVar19 + 8) = uVar9;
          uVar9 = *(undefined8 *)(pPVar18 + 0x10);
          uVar14 = *(undefined8 *)(pPVar18 + 0x18);
          uVar15 = *(undefined8 *)(pPVar18 + 0x6c);
          uVar16 = *(undefined8 *)(pPVar18 + 0x74);
          *(undefined8 *)(pPVar19 + 0x40) = uVar8;
          uVar4 = *(undefined2 *)(pPVar18 + 0x48);
          *(undefined8 *)(pPVar19 + 0x10) = uVar9;
          *(undefined8 *)(pPVar19 + 0x18) = uVar14;
          uVar2 = *(undefined4 *)(pPVar18 + 0x84);
          *(undefined2 *)(pPVar19 + 0x48) = uVar4;
          uVar8 = *(undefined8 *)(pPVar18 + 0x50);
          *(undefined8 *)(pPVar19 + 0x20) = uVar10;
          *(undefined8 *)(pPVar19 + 0x28) = uVar11;
          *(undefined8 *)(pPVar19 + 0x50) = uVar8;
          uVar8 = *(undefined8 *)(pPVar18 + 0x58);
          *(undefined8 *)(pPVar19 + 0x30) = uVar12;
          *(undefined8 *)(pPVar19 + 0x38) = uVar13;
          *(undefined8 *)(pPVar18 + 0x50) = 0;
          *(undefined8 *)(pPVar19 + 0x58) = uVar8;
          uVar4 = *(undefined2 *)(pPVar18 + 0x60);
          *(undefined8 *)(pPVar19 + 0x6c) = uVar15;
          *(undefined8 *)(pPVar19 + 0x74) = uVar16;
          *(undefined2 *)(pPVar19 + 0x60) = uVar4;
          *(undefined4 *)(pPVar19 + 0x62) = *(undefined4 *)(pPVar18 + 0x62);
          pPVar19[0x66] = pPVar18[0x66];
          pPVar19[0x67] = pPVar18[0x67];
          *(undefined2 *)(pPVar19 + 0x68) = *(undefined2 *)(pPVar18 + 0x68);
          *(undefined8 *)(pPVar19 + 0x7c) = *(undefined8 *)(pPVar18 + 0x7c);
          *(undefined4 *)(pPVar19 + 0x84) = uVar2;
          uVar2 = *(undefined4 *)(pPVar18 + 0x94);
          uVar8 = *(undefined8 *)(pPVar18 + 0xa0);
          uVar9 = *(undefined8 *)(pPVar18 + 0xa8);
          uVar10 = *(undefined8 *)(pPVar18 + 0xb0);
          uVar11 = *(undefined8 *)(pPVar18 + 0xb8);
          *(undefined8 *)(pPVar19 + 0x88) = *(undefined8 *)(pPVar18 + 0x88);
          uVar12 = *(undefined8 *)(pPVar18 + 0xc0);
          uVar13 = *(undefined8 *)(pPVar18 + 200);
          PVar3 = pPVar18[0x90];
          uVar14 = *(undefined8 *)(pPVar18 + 0xd0);
          uVar15 = *(undefined8 *)(pPVar18 + 0xd8);
          *(undefined4 *)(pPVar19 + 0x94) = uVar2;
          uVar16 = *(undefined8 *)(pPVar18 + 0xe0);
          uVar17 = *(undefined8 *)(pPVar18 + 0xe8);
          *(undefined8 *)(pPVar19 + 0xa0) = uVar8;
          *(undefined8 *)(pPVar19 + 0xa8) = uVar9;
          pPVar19[0x90] = PVar3;
          *(undefined8 *)(pPVar19 + 0xb0) = uVar10;
          *(undefined8 *)(pPVar19 + 0xb8) = uVar11;
          *(undefined8 *)(pPVar19 + 0xc0) = uVar12;
          *(undefined8 *)(pPVar19 + 200) = uVar13;
          *(undefined8 *)(pPVar19 + 0xd0) = uVar14;
          *(undefined8 *)(pPVar19 + 0xd8) = uVar15;
          *(undefined8 *)(pPVar19 + 0xe0) = uVar16;
          *(undefined8 *)(pPVar19 + 0xe8) = uVar17;
          uVar8 = *(undefined8 *)(pPVar18 + 0xf0);
          uVar9 = *(undefined8 *)(pPVar18 + 0xf8);
          *(undefined8 *)(pPVar18 + 0xf0) = 0;
          *(undefined8 *)(pPVar19 + 0xf0) = uVar8;
          *(undefined8 *)(pPVar19 + 0xf8) = uVar9;
          uVar8 = *(undefined8 *)(pPVar18 + 0x100);
          *(undefined8 *)(pPVar18 + 0xf8) = 0;
          *(undefined8 *)(pPVar18 + 0x100) = 0;
          *(undefined8 *)(pPVar19 + 0x100) = uVar8;
          pPVar22 = pPVar19;
        }
LAB_00105f04:
        pPVar18 = *(Part **)(this + 0x10);
      }
    }
    else {
      uVar5 = lVar6 * 0x110 - 0x110;
      pPVar19 = pPVar18 + uVar5;
      pPVar22 = pPVar23 + uVar5;
      if (!CARRY8(uVar5,(ulong)pPVar23)) {
        do {
          uVar8 = *(undefined8 *)pPVar19;
          uVar9 = *(undefined8 *)(pPVar19 + 8);
          pPVar18 = pPVar22 + -0x110;
          uVar10 = *(undefined8 *)(pPVar19 + 0x10);
          uVar11 = *(undefined8 *)(pPVar19 + 0x18);
          uVar12 = *(undefined8 *)(pPVar19 + 0x20);
          uVar13 = *(undefined8 *)(pPVar19 + 0x28);
          *(undefined8 *)(pPVar22 + 0x40) = *(undefined8 *)(pPVar19 + 0x40);
          uVar4 = *(undefined2 *)(pPVar19 + 0x48);
          *(undefined8 *)pPVar22 = uVar8;
          *(undefined8 *)(pPVar22 + 8) = uVar9;
          uVar9 = *(undefined8 *)(pPVar19 + 0x6c);
          uVar14 = *(undefined8 *)(pPVar19 + 0x74);
          uVar15 = *(undefined8 *)(pPVar19 + 0x30);
          uVar16 = *(undefined8 *)(pPVar19 + 0x38);
          *(undefined2 *)(pPVar22 + 0x48) = uVar4;
          uVar8 = *(undefined8 *)(pPVar19 + 0x50);
          *(undefined8 *)(pPVar22 + 0x10) = uVar10;
          *(undefined8 *)(pPVar22 + 0x18) = uVar11;
          uVar2 = *(undefined4 *)(pPVar19 + 0x84);
          *(undefined8 *)(pPVar22 + 0x50) = uVar8;
          uVar8 = *(undefined8 *)(pPVar19 + 0x58);
          *(undefined8 *)(pPVar22 + 0x20) = uVar12;
          *(undefined8 *)(pPVar22 + 0x28) = uVar13;
          *(undefined8 *)(pPVar22 + 0x30) = uVar15;
          *(undefined8 *)(pPVar22 + 0x38) = uVar16;
          *(undefined8 *)(pPVar19 + 0x50) = 0;
          *(undefined8 *)(pPVar22 + 0x58) = uVar8;
          uVar4 = *(undefined2 *)(pPVar19 + 0x60);
          *(undefined8 *)(pPVar22 + 0x6c) = uVar9;
          *(undefined8 *)(pPVar22 + 0x74) = uVar14;
          *(undefined2 *)(pPVar22 + 0x60) = uVar4;
          *(undefined4 *)(pPVar22 + 0x62) = *(undefined4 *)(pPVar19 + 0x62);
          pPVar22[0x66] = pPVar19[0x66];
          pPVar22[0x67] = pPVar19[0x67];
          *(undefined2 *)(pPVar22 + 0x68) = *(undefined2 *)(pPVar19 + 0x68);
          *(undefined8 *)(pPVar22 + 0x7c) = *(undefined8 *)(pPVar19 + 0x7c);
          *(undefined4 *)(pPVar22 + 0x84) = uVar2;
          uVar2 = *(undefined4 *)(pPVar19 + 0x94);
          uVar8 = *(undefined8 *)(pPVar19 + 0xa0);
          uVar9 = *(undefined8 *)(pPVar19 + 0xa8);
          uVar10 = *(undefined8 *)(pPVar19 + 0xb0);
          uVar11 = *(undefined8 *)(pPVar19 + 0xb8);
          uVar12 = *(undefined8 *)(pPVar19 + 0xc0);
          uVar13 = *(undefined8 *)(pPVar19 + 200);
          *(undefined8 *)(pPVar22 + 0x88) = *(undefined8 *)(pPVar19 + 0x88);
          PVar3 = pPVar19[0x90];
          uVar14 = *(undefined8 *)(pPVar19 + 0xd0);
          uVar15 = *(undefined8 *)(pPVar19 + 0xd8);
          *(undefined4 *)(pPVar22 + 0x94) = uVar2;
          uVar16 = *(undefined8 *)(pPVar19 + 0xe0);
          uVar17 = *(undefined8 *)(pPVar19 + 0xe8);
          *(undefined8 *)(pPVar22 + 0xa0) = uVar8;
          *(undefined8 *)(pPVar22 + 0xa8) = uVar9;
          pPVar22[0x90] = PVar3;
          *(undefined8 *)(pPVar22 + 0xb0) = uVar10;
          *(undefined8 *)(pPVar22 + 0xb8) = uVar11;
          *(undefined8 *)(pPVar22 + 0xc0) = uVar12;
          *(undefined8 *)(pPVar22 + 200) = uVar13;
          *(undefined8 *)(pPVar22 + 0xd0) = uVar14;
          *(undefined8 *)(pPVar22 + 0xd8) = uVar15;
          *(undefined8 *)(pPVar22 + 0xe0) = uVar16;
          *(undefined8 *)(pPVar22 + 0xe8) = uVar17;
          uVar8 = *(undefined8 *)(pPVar19 + 0xf0);
          uVar9 = *(undefined8 *)(pPVar19 + 0xf8);
          *(undefined8 *)(pPVar19 + 0xf0) = 0;
          *(undefined8 *)(pPVar22 + 0xf0) = uVar8;
          *(undefined8 *)(pPVar22 + 0xf8) = uVar9;
          uVar8 = *(undefined8 *)(pPVar19 + 0x100);
          *(undefined8 *)(pPVar19 + 0xf8) = 0;
          *(undefined8 *)(pPVar19 + 0x100) = 0;
          *(undefined8 *)(pPVar22 + 0x100) = uVar8;
          RagdollSettings::Part::~Part(pPVar19);
          pPVar19 = pPVar19 + -0x110;
          pPVar22 = pPVar18;
        } while (pPVar23 <= pPVar18);
        goto LAB_00105f04;
      }
    }
    (*Free)(pPVar18);
  }
  *(Part **)(this + 0x10) = pPVar23;
  *(ulong *)(this + 8) = param_1;
LAB_0010595e:
  pPVar18 = pPVar23 + *(long *)this * 0x110;
  pPVar23 = pPVar23 + lVar20;
  if ((pPVar18 < pPVar23) &&
     ((pPVar18 != (Part *)0x0 || (pPVar18 = (Part *)0x110, (Part *)0x110 < pPVar23)))) {
    do {
      uVar9 = __LC1;
      uVar8 = CONCAT44(_LC6,_UNK_00106318);
      *(undefined2 *)(pPVar18 + 0x48) = 0;
      uVar10 = _LC5;
      pPVar19 = pPVar18 + 0x110;
      *(undefined1 (*) [16])pPVar18 = (undefined1  [16])0x0;
      *(undefined8 *)(pPVar18 + 0x10) = uVar9;
      *(undefined8 *)(pPVar18 + 0x18) = uVar8;
      uVar9 = _UNK_00106328;
      uVar8 = __LC4;
      *(undefined1 (*) [16])(pPVar18 + 0x20) = (undefined1  [16])0x0;
      *(undefined8 *)(pPVar18 + 0x6c) = uVar8;
      *(undefined8 *)(pPVar18 + 0x74) = uVar9;
      uVar2 = _LC6;
      *(undefined1 (*) [16])(pPVar18 + 0x30) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pPVar18 + 0xb0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pPVar18 + 0xc0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pPVar18 + 0xd0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pPVar18 + 0xe0) = (undefined1  [16])0x0;
      *(undefined8 *)(pPVar18 + 0x40) = 0;
      *(undefined8 *)(pPVar18 + 0x50) = 0;
      *(undefined8 *)(pPVar18 + 0x58) = 0xffffffffffffffff;
      *(undefined2 *)(pPVar18 + 0x60) = 0x3f02;
      *(undefined4 *)(pPVar18 + 0x62) = 0x1000000;
      pPVar18[0x66] = (Part)0x0;
      pPVar18[0x67] = (Part)0x0;
      *(undefined2 *)(pPVar18 + 0x68) = 0x100;
      *(undefined8 *)(pPVar18 + 0x7c) = uVar10;
      *(undefined4 *)(pPVar18 + 0x84) = uVar2;
      *(undefined8 *)(pPVar18 + 0x88) = 0;
      pPVar18[0x90] = (Part)0x0;
      *(undefined4 *)(pPVar18 + 0x94) = uVar2;
      *(undefined4 *)(pPVar18 + 0xa0) = 0;
      *(undefined1 (*) [16])(pPVar18 + 0xf0) = (undefined1  [16])0x0;
      *(undefined8 *)(pPVar18 + 0x100) = 0;
      pPVar18 = pPVar19;
    } while (pPVar19 < pPVar23);
  }
  *(ulong *)this = param_1;
  return;
}



/* JPH::Array<JPH::RagdollSettings::AdditionalConstraint,
   JPH::STLAllocator<JPH::RagdollSettings::AdditionalConstraint> >::resize(unsigned long) */

void __thiscall
JPH::
Array<JPH::RagdollSettings::AdditionalConstraint,JPH::STLAllocator<JPH::RagdollSettings::AdditionalConstraint>>
::resize(Array<JPH::RagdollSettings::AdditionalConstraint,JPH::STLAllocator<JPH::RagdollSettings::AdditionalConstraint>>
         *this,ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  uVar2 = *(ulong *)this;
  if (param_1 < uVar2) {
    lVar3 = *(long *)(this + 0x10);
    for (uVar9 = lVar3 + param_1 * 0x10; uVar9 < lVar3 + uVar2 * 0x10; uVar9 = uVar9 + 0x10) {
      plVar4 = *(long **)(uVar9 + 8);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
    }
  }
  if (*(ulong *)(this + 8) < param_1) {
    puVar6 = (undefined8 *)(*Allocate)(param_1 * 0x10);
    puVar5 = *(undefined8 **)(this + 0x10);
    if (puVar5 != (undefined8 *)0x0) {
      lVar3 = *(long *)this;
      if (puVar6 < puVar5) {
        if (puVar6 < puVar6 + lVar3 * 2) {
          puVar7 = puVar6;
          puVar8 = puVar5;
          puVar10 = puVar5;
          if (puVar6 == (undefined8 *)0x0) {
            plVar4 = (long *)puVar5[1];
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar4 + 0x18))(plVar4);
              }
              puVar8 = *(undefined8 **)(this + 0x10);
            }
            puVar7 = (undefined8 *)0x0;
            goto LAB_00106036;
          }
          do {
            *puVar7 = *puVar10;
            puVar7[1] = puVar10[1];
            puVar5 = puVar10;
LAB_00106036:
            puVar7 = puVar7 + 2;
            puVar10 = puVar5 + 2;
            puVar5 = puVar8;
          } while (puVar7 < puVar6 + lVar3 * 2);
        }
      }
      else {
        puVar8 = puVar6 + lVar3 * 2 + -2;
        puVar7 = puVar5 + lVar3 * 2 + -2;
        if (!CARRY8(lVar3 * 0x10 - 0x10,(ulong)puVar6)) {
          do {
            puVar10 = puVar8 + -2;
            *puVar8 = *puVar7;
            puVar8[1] = puVar7[1];
            puVar8 = puVar10;
            puVar7 = puVar7 + -2;
          } while (puVar6 <= puVar10);
        }
      }
      (*Free)(puVar5);
    }
    *(undefined8 **)(this + 0x10) = puVar6;
    *(ulong *)(this + 8) = param_1;
  }
  else {
    puVar6 = *(undefined8 **)(this + 0x10);
  }
  puVar5 = puVar6 + *(long *)this * 2;
  if (puVar5 < puVar6 + param_1 * 2) {
    if (puVar5 == (undefined8 *)0x0) goto LAB_00105fa0;
    do {
      puVar5[1] = 0;
LAB_00105fa0:
      puVar5 = puVar5 + 2;
    } while (puVar5 < puVar6 + param_1 * 2);
  }
  *(ulong *)this = param_1;
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::RagdollSettings::Part*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC20;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RagdollSettings::~RagdollSettings() */

void __thiscall JPH::RagdollSettings::~RagdollSettings(RagdollSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RagdollSettings::Part::~Part() */

void __thiscall JPH::RagdollSettings::Part::~Part(Part *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::~AnyHitCollisionCollector() */

void __thiscall
JPH::
AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::~AnyHitCollisionCollector
          (AnyHitCollisionCollector<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


