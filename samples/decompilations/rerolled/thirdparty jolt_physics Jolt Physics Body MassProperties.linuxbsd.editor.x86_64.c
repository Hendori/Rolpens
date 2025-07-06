/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::MassProperties*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::MassProperties::sCreateRTTI(JPH::RTTI&) */

void JPH::MassProperties::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::MassProperties*)::{lambda()#1}::_FUN(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*Allocate)(0x50);
  *puVar1 = 0;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x10) = (undefined1  [16])0x0;
  return;
}



/* JPH::GetRTTIOfType(JPH::MassProperties*) */

undefined1 * JPH::GetRTTIOfType(MassProperties *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::MassProperties*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::MassProperties*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::MassProperties*)::rtti,"MassProperties",0x50,
                      GetRTTIOfType(JPH::MassProperties*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::MassProperties*)::{lambda(void*)#1}::_FUN,
                      MassProperties::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::MassProperties*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::MassProperties*)::rtti);
      return GetRTTIOfType(JPH::MassProperties*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::MassProperties*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MassProperties::SetMassAndInertiaOfSolidBox(JPH::Vec3, float) */

void JPH::MassProperties::SetMassAndInertiaOfSolidBox
               (undefined8 param_1,float param_2,float param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  param_3 = param_3 * fVar3 * fVar4 * param_2;
  *param_4 = param_3;
  param_3 = param_3 / _LC3;
  *(undefined1 (*) [16])(param_4 + 4) =
       ZEXT416((uint)((param_2 * param_2 + fVar4 * fVar4) * param_3));
  *(undefined1 (*) [16])(param_4 + 8) =
       ZEXT416((uint)((param_2 * param_2 + fVar3 * fVar3) * param_3)) << 0x20;
  uVar2 = _UNK_00101048;
  uVar1 = __LC4;
  *(undefined1 (*) [16])(param_4 + 0xc) =
       ZEXT416((uint)((fVar4 * fVar4 + fVar3 * fVar3) * param_3)) << 0x40;
  *(undefined8 *)(param_4 + 0x10) = uVar1;
  *(undefined8 *)(param_4 + 0x12) = uVar2;
  return;
}



/* JPH::MassProperties::ScaleToMass(float) */

void __thiscall JPH::MassProperties::ScaleToMass(MassProperties *this,float param_1)

{
  MassProperties *pMVar1;
  MassProperties *pMVar2;
  float fVar3;
  
  fVar3 = *(float *)this;
  if (0.0 < fVar3) {
    *(float *)this = param_1;
    fVar3 = param_1 / fVar3;
    pMVar1 = this + 0x10;
    do {
      pMVar2 = pMVar1 + 0x10;
      *(float *)pMVar1 = *(float *)pMVar1 * fVar3;
      *(float *)(pMVar1 + 4) = *(float *)(pMVar1 + 4) * fVar3;
      *(float *)(pMVar1 + 8) = *(float *)(pMVar1 + 8) * fVar3;
      *(float *)(pMVar1 + 0xc) = *(float *)(pMVar1 + 0xc) * fVar3;
      pMVar1 = pMVar2;
    } while (pMVar2 != this + 0x40);
    return;
  }
  *(float *)this = param_1;
  return;
}



/* JPH::MassProperties::sGetEquivalentSolidBoxSize(float, JPH::Vec3) */

undefined1  [16] __thiscall
JPH::MassProperties::sGetEquivalentSolidBoxSize(float param_1,undefined8 param_2,float param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = (float)param_2;
  uStack_24 = (float)((ulong)param_2 >> 0x20);
  param_1 = _LC3 / param_1;
  local_28 = param_1 * local_28;
  uStack_24 = param_1 * uStack_24;
  param_1 = param_1 * param_3;
  fVar2 = ((uStack_24 + local_28) - param_1) * _LC5;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar3 = ((local_28 - uStack_24) + param_1) * _LC5;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  fVar4 = ((uStack_24 - local_28) + param_1) * _LC5;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  auVar1._4_4_ = fVar3;
  auVar1._0_4_ = fVar4;
  auVar1._8_4_ = fVar2;
  auVar1._12_4_ = fVar2;
  return auVar1;
}



/* JPH::MassProperties::Scale(JPH::Vec3) */

void JPH::MassProperties::Scale(undefined8 param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_18;
  float fStack_14;
  
  fVar3 = _LC5 * param_3[0xe] + param_3[9] * _LC5 + param_3[4] * _LC5 + 0.0;
  local_18 = (float)param_1;
  fStack_14 = (float)((ulong)param_1 >> 0x20);
  fVar4 = (fVar3 - param_3[4]) * local_18 * local_18;
  fVar5 = (fVar3 - param_3[9]) * fStack_14 * fStack_14;
  fVar7 = (fVar3 - param_3[0xe]) * param_2 * param_2;
  fVar8 = param_3[8] * local_18 * fStack_14;
  fVar3 = param_2 * local_18 * (float)*(undefined8 *)(param_3 + 0xc);
  fVar6 = fStack_14 * param_2 * (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
  param_3[0xe] = fVar4 + fVar5;
  param_3[6] = fVar3;
  *(ulong *)(param_3 + 0xc) = CONCAT44(fVar6,fVar3);
  param_3[10] = fVar6;
  fVar3 = (float)((uint)(local_18 * fStack_14 * param_2) & _LC6);
  *(ulong *)(param_3 + 4) = CONCAT44(fVar8,fVar7 + fVar5);
  *(ulong *)(param_3 + 8) = CONCAT44(fVar7 + fVar4,fVar8);
  *param_3 = *param_3 * fVar3;
  pfVar1 = param_3 + 4;
  do {
    pfVar2 = pfVar1 + 4;
    *pfVar1 = *pfVar1 * fVar3;
    pfVar1[1] = pfVar1[1] * fVar3;
    pfVar1[2] = pfVar1[2] * fVar3;
    pfVar1[3] = pfVar1[3] * fVar3;
    pfVar1 = pfVar2;
  } while (pfVar2 != param_3 + 0x14);
  param_3[0x13] = 1.0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MassProperties::Rotate(JPH::Mat44 const&) */

void __thiscall JPH::MassProperties::Rotate(MassProperties *this,Mat44 *param_1)

{
  MassProperties *pMVar1;
  float fVar2;
  float fVar3;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  long lVar21;
  long in_FS_OFFSET;
  float local_58 [18];
  long local_10;
  
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0xc);
  fVar6 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14);
  fVar8 = *(float *)(param_1 + 0x18);
  fVar9 = *(float *)(param_1 + 0x1c);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar21 = 0;
  fVar10 = *(float *)(param_1 + 0x20);
  fVar11 = *(float *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x28);
  fVar13 = *(float *)(param_1 + 0x2c);
  do {
    pMVar1 = this + lVar21 + 0x10;
    fVar14 = *(float *)pMVar1;
    fVar15 = *(float *)(pMVar1 + 4);
    fVar16 = *(float *)(pMVar1 + 8);
    *(float *)((long)local_58 + lVar21) = fVar16 * fVar10 + fVar14 * fVar2 + fVar15 * fVar6;
    *(float *)((long)local_58 + lVar21 + 4) = fVar16 * fVar11 + fVar14 * fVar3 + fVar15 * fVar7;
    *(float *)((long)local_58 + lVar21 + 8) = fVar16 * fVar12 + fVar14 * fVar4 + fVar15 * fVar8;
    *(float *)((long)local_58 + lVar21 + 0xc) = fVar16 * fVar13 + fVar14 * fVar5 + fVar15 * fVar9;
    lVar21 = lVar21 + 0x10;
  } while (lVar21 != 0x30);
  *(float *)(this + 0x10) = fVar6 * local_58[4] + fVar2 * local_58[0] + fVar10 * local_58[8];
  *(float *)(this + 0x14) = fVar6 * local_58[5] + fVar2 * local_58[1] + fVar10 * local_58[9];
  *(float *)(this + 0x18) = fVar6 * local_58[6] + fVar2 * local_58[2] + fVar10 * local_58[10];
  *(float *)(this + 0x1c) = fVar6 * local_58[7] + fVar2 * local_58[3] + fVar10 * local_58[0xb];
  *(float *)(this + 0x20) = fVar7 * local_58[4] + fVar3 * local_58[0] + fVar11 * local_58[8];
  *(float *)(this + 0x24) = fVar7 * local_58[5] + fVar3 * local_58[1] + fVar11 * local_58[9];
  *(float *)(this + 0x28) = fVar7 * local_58[6] + fVar3 * local_58[2] + fVar11 * local_58[10];
  *(float *)(this + 0x2c) = fVar7 * local_58[7] + fVar3 * local_58[3] + fVar11 * local_58[0xb];
  uVar20 = _LC7;
  uVar19 = _UNK_00101048;
  uVar18 = _UNK_00101044;
  uVar17 = __LC4;
  *(float *)(this + 0x30) = fVar8 * local_58[4] + fVar4 * local_58[0] + fVar12 * local_58[8];
  *(float *)(this + 0x34) = fVar8 * local_58[5] + fVar4 * local_58[1] + fVar12 * local_58[9];
  *(float *)(this + 0x38) = fVar8 * local_58[6] + fVar4 * local_58[2] + fVar12 * local_58[10];
  *(float *)(this + 0x3c) = fVar8 * local_58[7] + fVar4 * local_58[3] + fVar12 * local_58[0xb];
  *(undefined4 *)(this + 0x40) = uVar17;
  *(undefined4 *)(this + 0x44) = uVar18;
  *(undefined4 *)(this + 0x48) = uVar19;
  *(undefined4 *)(this + 0x4c) = uVar20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MassProperties::Translate(JPH::Vec3) */

void JPH::MassProperties::Translate(undefined8 param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fStack_134;
  undefined1 local_118 [4];
  float afStack_114 [3];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8 [50];
  long local_10;
  
  fVar11 = _LC7;
  fVar10 = _UNK_00101048;
  fVar9 = _UNK_00101044;
  fVar8 = __LC4;
  fStack_134 = (float)((ulong)param_1 >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar13 = (float)param_1;
  local_d8[0xc] = __LC4;
  local_d8[0xd] = _UNK_00101044;
  local_d8[0xe] = _UNK_00101048;
  local_d8[0xf] = _LC7;
  local_e8 = __LC4;
  fStack_e4 = _UNK_00101044;
  fStack_e0 = _UNK_00101048;
  fStack_dc = _LC7;
  local_d8[0] = fVar13 * fVar13;
  local_d8[1] = fVar13 * fStack_134;
  local_d8[2] = fVar13 * param_2;
  local_d8[3] = fVar13 * 0.0;
  local_d8[4] = fStack_134 * fVar13;
  local_d8[5] = fStack_134 * fStack_134;
  local_d8[6] = fStack_134 * param_2;
  local_d8[7] = fStack_134 * 0.0;
  local_d8[8] = param_2 * fVar13;
  local_d8[9] = param_2 * fStack_134;
  local_d8[10] = param_2 * param_2;
  local_d8[0xb] = param_2 * 0.0;
  fVar13 = param_2 * param_2 + fStack_134 * fStack_134 + fVar13 * fVar13 + 0.0;
  lVar12 = 0;
  _local_118 = ZEXT416((uint)fVar13);
  local_108 = ZEXT416((uint)fVar13) << 0x20;
  local_f8 = ZEXT416((uint)fVar13) << 0x40;
  do {
    fVar13 = *(float *)(local_118 + lVar12 + 4);
    fVar3 = *(float *)(local_118 + lVar12 + 8);
    fVar4 = *(float *)(local_118 + lVar12 + 0xc);
    *(float *)((long)local_d8 + lVar12 + 0x40) =
         *(float *)(local_118 + lVar12) - *(float *)((long)local_d8 + lVar12);
    *(float *)((long)local_d8 + lVar12 + 0x44) = fVar13 - *(float *)((long)local_d8 + lVar12 + 4);
    *(float *)((long)local_d8 + lVar12 + 0x48) = fVar3 - *(float *)((long)local_d8 + lVar12 + 8);
    *(float *)((long)local_d8 + lVar12 + 0x4c) = fVar4 - *(float *)((long)local_d8 + lVar12 + 0xc);
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x40);
  fVar13 = *param_3;
  lVar12 = 0;
  do {
    *(float *)((long)local_d8 + lVar12 + 0x80) = *(float *)((long)local_d8 + lVar12 + 0x40) * fVar13
    ;
    *(float *)((long)local_d8 + lVar12 + 0x84) = *(float *)((long)local_d8 + lVar12 + 0x44) * fVar13
    ;
    *(float *)((long)local_d8 + lVar12 + 0x88) = *(float *)((long)local_d8 + lVar12 + 0x48) * fVar13
    ;
    *(float *)((long)local_d8 + lVar12 + 0x8c) = *(float *)((long)local_d8 + lVar12 + 0x4c) * fVar13
    ;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x40);
  lVar12 = 0;
  do {
    pfVar1 = (float *)((long)param_3 + lVar12 + 0x10);
    fVar13 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    fVar5 = *(float *)((long)local_d8 + lVar12 + 0x84);
    fVar6 = *(float *)((long)local_d8 + lVar12 + 0x88);
    fVar7 = *(float *)((long)local_d8 + lVar12 + 0x8c);
    pfVar2 = (float *)((long)param_3 + lVar12 + 0x10);
    *pfVar2 = *pfVar1 + *(float *)((long)local_d8 + lVar12 + 0x80);
    pfVar2[1] = fVar13 + fVar5;
    pfVar2[2] = fVar3 + fVar6;
    pfVar2[3] = fVar4 + fVar7;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x40);
  param_3[0x10] = fVar8;
  param_3[0x11] = fVar9;
  param_3[0x12] = fVar10;
  param_3[0x13] = fVar11;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::MassProperties::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::MassProperties::SaveBinaryState(MassProperties *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
                    /* WARNING: Could not recover jumptable at 0x0010076a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,0x40);
  return;
}



/* JPH::MassProperties::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::MassProperties::RestoreBinaryState(MassProperties *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
                    /* WARNING: Could not recover jumptable at 0x001007aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,0x40);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MassProperties::DecomposePrincipalMomentsOfInertia(JPH::Mat44&, JPH::Vec3&) const */

bool __thiscall
JPH::MassProperties::DecomposePrincipalMomentsOfInertia
          (MassProperties *this,Mat44 *param_1,Vec3 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  Matrix *pMVar10;
  Matrix *pMVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  MassProperties *pMVar15;
  uint *puVar16;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined4 local_a8;
  Vector local_a4 [12];
  Matrix local_98 [36];
  Matrix local_74 [12];
  Matrix local_68 [4];
  Matrix aMStack_64 [4];
  Matrix aMStack_60 [8];
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar10 = local_98;
  pMVar15 = this + 0x10;
  do {
    pMVar11 = pMVar10 + 0xc;
    *(undefined8 *)pMVar10 = *(undefined8 *)pMVar15;
    *(undefined4 *)(pMVar10 + 8) = *(undefined4 *)(pMVar15 + 8);
    pMVar10 = pMVar11;
    pMVar15 = pMVar15 + 0x10;
  } while (local_74 != pMVar11);
  _local_68 = ZEXT416(_LC13);
  local_48 = 0x3f800000;
  local_58 = ZEXT416(_LC13);
  bVar9 = EigenValueSymmetric<JPH::Vector<3u>,JPH::Matrix<3u,3u>>(local_98,local_68,local_a4);
  if (bVar9) {
    local_a8 = 2;
    lVar14 = 0;
    puVar16 = (uint *)((long)&local_b0 + 4);
    local_b0 = _LC14;
    uVar12 = 0;
    while( true ) {
      uVar5 = *puVar16;
      fVar2 = *(float *)(local_a4 + (ulong)uVar5 * 4);
      if (*(float *)(local_a4 + uVar12 * 4) <= fVar2 && fVar2 != *(float *)(local_a4 + uVar12 * 4))
      {
        if (puVar16 != (uint *)&local_b0) {
          memmove((void *)((long)puVar16 + lVar14),&local_b0,4 - lVar14);
        }
        local_b0 = CONCAT44(local_b0._4_4_,uVar5);
        uVar7 = __LC15;
        uVar8 = _UNK_00101088;
      }
      else {
        uVar12 = (ulong)puVar16[-1];
        puVar6 = puVar16;
        uVar7 = __LC15;
        uVar8 = _UNK_00101088;
        if (fVar2 < *(float *)(local_a4 + uVar12 * 4) || fVar2 == *(float *)(local_a4 + uVar12 * 4))
        {
          *puVar16 = uVar5;
        }
        else {
          do {
            puVar13 = puVar6 + -1;
            *puVar6 = (uint)uVar12;
            uVar12 = (ulong)puVar6[-2];
            puVar6 = puVar13;
          } while (*(float *)(local_a4 + uVar12 * 4) <= fVar2 &&
                   fVar2 != *(float *)(local_a4 + uVar12 * 4));
          *puVar13 = uVar5;
        }
      }
      __LC15 = uVar7;
      _UNK_00101088 = uVar8;
      if (lVar14 == -4) break;
      lVar14 = lVar14 + -4;
      puVar16 = puVar16 + 1;
      uVar12 = local_b0 & 0xffffffff;
    }
    lVar14 = 0;
    *(undefined1 (*) [16])param_1 = ZEXT416(_LC13);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    uVar7 = _UNK_00101098;
    *(undefined8 *)(param_1 + 0x20) = __LC16;
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    uVar7 = _UNK_00101048;
    *(undefined8 *)(param_1 + 0x30) = __LC4;
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    do {
      uVar5 = *(uint *)((long)&local_b0 + lVar14);
      *(undefined4 *)(param_1 + lVar14 * 4 + 0xc) = 0;
      lVar1 = (long)(int)uVar5 * 0xc;
      uVar3 = *(undefined4 *)(local_68 + lVar1 + 8);
      *(ulong *)(param_1 + lVar14 * 4) =
           CONCAT44(*(undefined4 *)(local_68 + lVar1 + 4),*(undefined4 *)(local_68 + lVar1));
      uVar4 = *(undefined4 *)(local_a4 + (ulong)uVar5 * 4);
      *(undefined4 *)(param_1 + lVar14 * 4 + 8) = uVar3;
      *(undefined4 *)(param_2 + lVar14) = uVar4;
      lVar14 = lVar14 + 4;
    } while (lVar14 != 0xc);
    if ((*(float *)(param_1 + 0x14) * *(float *)param_1 -
        *(float *)(param_1 + 4) * *(float *)(param_1 + 0x10)) * *(float *)(param_1 + 0x28) +
        (*(float *)(param_1 + 0x10) * *(float *)(param_1 + 8) -
        *(float *)param_1 * *(float *)(param_1 + 0x18)) * *(float *)(param_1 + 0x24) +
        *(float *)(param_1 + 0x20) *
        (*(float *)(param_1 + 0x18) * *(float *)(param_1 + 4) -
        *(float *)(param_1 + 8) * *(float *)(param_1 + 0x14)) + 0.0 < 0.0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(ulong *)(param_1 + 0x20) =
           CONCAT44(0.0 - *(float *)(param_1 + 0x24),0.0 - *(float *)(param_1 + 0x20));
      *(float *)(param_1 + 0x28) = 0.0 - *(float *)(param_1 + 0x28);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* bool JPH::EigenValueSymmetric<JPH::Vector<3u>, JPH::Matrix<3u, 3u> >(JPH::Matrix<3u, 3u> const&,
   JPH::Matrix<3u, 3u>&, JPH::Vector<3u>&) */

bool JPH::EigenValueSymmetric<JPH::Vector<3u>,JPH::Matrix<3u,3u>>
               (Matrix *param_1,Matrix *param_2,Vector *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  Matrix *pMVar14;
  Matrix *pMVar15;
  Matrix *pMVar16;
  undefined8 *puVar17;
  int iVar18;
  Matrix *pMVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_80;
  float local_78 [4];
  undefined8 local_68;
  undefined4 local_60;
  float local_5c;
  undefined4 uStack_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  iVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = *(undefined8 *)param_1;
  local_60 = *(undefined4 *)(param_1 + 8);
  local_5c = (float)*(undefined8 *)(param_1 + 0xc);
  uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  local_54 = *(float *)(param_1 + 0x14);
  local_50 = *(undefined8 *)(param_1 + 0x18);
  local_48 = *(float *)(param_1 + 0x20);
  local_80 = CONCAT44(uStack_58,(int)*(undefined8 *)param_1);
  *(undefined8 *)param_3 = local_80;
  uVar8 = _LC11;
  uVar7 = _LC6;
  fVar6 = _LC7;
  fVar5 = _LC12;
  fVar4 = _LC10;
  fVar3 = _LC8;
  fVar2 = _LC5;
  local_78[0] = local_48;
  local_78[3] = 0.0;
  *(float *)(param_3 + 8) = local_48;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
LAB_00100be0:
  fVar20 = ((float)((uint)local_50._4_4_ & uVar7) +
           (float)((uint)local_50 & uVar7) + (float)((uint)local_5c & uVar7) + 0.0) / fVar5;
  if (fVar3 <= fVar20) {
    fVar22 = fVar3;
    if (iVar18 < 4) {
      fVar22 = _LC9 * fVar20;
    }
    puVar17 = &local_68;
    lVar13 = 0;
    lVar11 = 1;
    pMVar14 = param_2;
    do {
      lVar10 = lVar11;
      puVar12 = puVar17;
      do {
        fVar20 = *(float *)((long)puVar12 + 0xc);
        fVar21 = (float)((uint)fVar20 & uVar7) * fVar4;
        if (((iVar18 < 5) ||
            (fVar21 + (float)(*(uint *)(param_3 + lVar11 * 4 + -4) & uVar7) !=
             (float)(*(uint *)(param_3 + lVar11 * 4 + -4) & uVar7))) ||
           (fVar21 + (float)(*(uint *)(param_3 + lVar10 * 4) & uVar7) !=
            (float)(*(uint *)(param_3 + lVar10 * 4) & uVar7))) {
          if (fVar22 < (float)((uint)fVar20 & uVar7)) {
            fVar1 = *(float *)(param_3 + lVar11 * 4 + -4);
            fVar23 = *(float *)(param_3 + lVar10 * 4) - fVar1;
            if (fVar21 + (float)((uint)fVar23 & uVar7) == (float)((uint)fVar23 & uVar7)) {
              fVar23 = fVar20 / fVar23;
              fVar21 = fVar23 * fVar23 + fVar6;
            }
            else {
              fVar24 = (fVar23 * fVar2) / fVar20;
              fVar23 = fVar6 / ((float)((uint)fVar24 & uVar7) + SQRT(fVar24 * fVar24 + fVar6));
              fVar21 = fVar23 * fVar23 + fVar6;
              if (fVar24 < 0.0) {
                fVar23 = (float)((uint)fVar23 ^ uVar8);
              }
            }
            *(undefined4 *)((long)puVar12 + 0xc) = 0;
            fVar24 = (fVar6 / SQRT(fVar21)) * fVar23;
            fVar23 = fVar23 * fVar20;
            fVar25 = fVar24 / (fVar6 / SQRT(fVar21) + fVar6);
            local_78[lVar11] = local_78[lVar11] - fVar23;
            fVar20 = local_78[lVar10 + 1];
            *(float *)(param_3 + lVar11 * 4 + -4) = fVar1 - fVar23;
            fVar21 = *(float *)(param_3 + lVar10 * 4);
            local_78[lVar10 + 1] = fVar20 + fVar23;
            fVar20 = local_5c;
            *(float *)(param_3 + lVar10 * 4) = fVar23 + fVar21;
            if ((int)lVar11 == 1) {
              if ((int)lVar10 != 2) goto LAB_00100df1;
              local_5c = local_5c - (fVar25 * local_5c + local_50._4_4_) * fVar24;
              fVar21 = local_50._4_4_;
LAB_00100e22:
              local_50 = CONCAT44((fVar20 - fVar25 * fVar21) * fVar24 + fVar21,(uint)local_50);
            }
            else {
              fVar21 = *(float *)((long)puVar12 + lVar13 + 0xc);
              local_5c = local_5c - (fVar25 * local_5c + fVar21) * fVar24;
              *(float *)((long)puVar12 + lVar13 + 0xc) =
                   (fVar20 - fVar25 * fVar21) * fVar24 + fVar21;
              if ((int)lVar10 == 1) {
LAB_00100df1:
                fVar20 = (&local_54)[lVar11];
                fVar21 = local_50._4_4_;
                (&local_54)[lVar11] = fVar20 - (fVar25 * fVar20 + local_50._4_4_) * fVar24;
                goto LAB_00100e22;
              }
            }
            pMVar15 = pMVar14;
            pMVar19 = param_2 + lVar10 * 0xc;
            do {
              fVar20 = *(float *)pMVar15;
              pMVar16 = pMVar15 + 4;
              fVar21 = *(float *)pMVar19;
              *(float *)pMVar15 = fVar20 - (fVar25 * fVar20 + fVar21) * fVar24;
              *(float *)pMVar19 = (fVar20 - fVar25 * fVar21) * fVar24 + fVar21;
              pMVar15 = pMVar16;
              pMVar19 = pMVar19 + 4;
            } while (pMVar16 != pMVar14 + 0xc);
          }
        }
        else {
          *(undefined4 *)((long)puVar12 + 0xc) = 0;
        }
        lVar10 = lVar10 + 1;
        puVar12 = (undefined8 *)((long)puVar12 + 0xc);
      } while ((int)lVar10 != 3);
      lVar13 = lVar13 + -4;
      puVar17 = puVar17 + 2;
      if (lVar11 != 1) goto LAB_00100eb0;
      lVar11 = 2;
      pMVar14 = pMVar14 + 0xc;
    } while( true );
  }
  bVar9 = true;
  goto LAB_00100fb0;
LAB_00100eb0:
  lVar11 = 0;
  do {
    fVar20 = *(float *)((long)&local_80 + lVar11) + *(float *)((long)local_78 + lVar11 + 4);
    *(undefined4 *)((long)local_78 + lVar11 + 4) = 0;
    *(float *)((long)&local_80 + lVar11) = fVar20;
    *(float *)(param_3 + lVar11) = fVar20;
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0xc);
  iVar18 = iVar18 + 1;
  if (iVar18 == 0x32) {
    bVar9 = false;
LAB_00100fb0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return bVar9;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00100be0;
}



/* JPH::GetRTTIOfType(JPH::MassProperties*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC17;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



