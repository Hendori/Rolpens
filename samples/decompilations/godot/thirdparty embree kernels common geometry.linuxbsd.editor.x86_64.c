
/* embree::Geometry::setNumPrimitives(unsigned int) */

void __thiscall embree::Geometry::setNumPrimitives(Geometry *this,uint param_1)

{
  if (*(uint *)(this + 0x20) != param_1) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
    this[0x3e] = (Geometry)((byte)this[0x3e] & 0xe7);
    *(uint *)(this + 0x20) = param_1;
  }
  return;
}



/* embree::Geometry::setNumTimeSteps(unsigned int) */

void __thiscall embree::Geometry::setNumTimeSteps(Geometry *this,uint param_1)

{
  if (*(uint *)(this + 0x24) != param_1) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
    this[0x3e] = (Geometry)((byte)this[0x3e] & 0xe7);
    *(uint *)(this + 0x24) = param_1;
    *(float *)(this + 0x28) = (float)(param_1 - 1);
  }
  return;
}



/* embree::Geometry::commit() */

void __thiscall embree::Geometry::commit(Geometry *this)

{
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  this[0x3e] = (Geometry)((byte)this[0x3e] & 0xe7 | 8);
  return;
}



/* embree::Geometry::postCommit() */

void embree::Geometry::postCommit(void)

{
  return;
}



/* embree::Geometry::setUserData(void*) */

void __thiscall embree::Geometry::setUserData(Geometry *this,void *param_1)

{
  *(void **)(this + 0x18) = param_1;
  return;
}



/* embree::Geometry::preCommit() */

void __thiscall embree::Geometry::preCommit(Geometry *this)

{
  if (((byte)this[0x3e] & 0x18) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setIntersectionFilterFunctionN(void (*)(RTCFilterFunctionNArguments const*)) */

void __thiscall
embree::Geometry::setIntersectionFilterFunctionN
          (Geometry *this,_func_void_RTCFilterFunctionNArguments_ptr *param_1)

{
  if ((1 << ((byte)this[0x3c] & 0x1f) & 0x2ef7777fU) != 0) {
    *(_func_void_RTCFilterFunctionNArguments_ptr **)(this + 0x40) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setOcclusionFilterFunctionN(void (*)(RTCFilterFunctionNArguments const*)) */

void __thiscall
embree::Geometry::setOcclusionFilterFunctionN
          (Geometry *this,_func_void_RTCFilterFunctionNArguments_ptr *param_1)

{
  if ((1 << ((byte)this[0x3c] & 0x1f) & 0x2ef7777fU) != 0) {
    *(_func_void_RTCFilterFunctionNArguments_ptr **)(this + 0x48) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::interpolateN(RTCInterpolateNArguments const*) */

void __thiscall embree::Geometry::interpolateN(Geometry *this,RTCInterpolateNArguments *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  long lVar24;
  ulong uVar25;
  undefined4 *puVar26;
  long in_FS_OFFSET;
  undefined1 local_18e0 [8];
  undefined4 local_18d8;
  undefined4 local_18d4;
  undefined4 local_18d0;
  undefined8 local_18cc;
  undefined4 *local_18c0;
  undefined4 *local_18b8;
  undefined4 *local_18b0;
  undefined1 *local_18a8;
  undefined1 *local_18a0;
  undefined1 *local_1898;
  uint local_1890;
  undefined4 local_1880 [256];
  undefined4 local_1480 [256];
  undefined4 local_1080 [256];
  undefined1 local_c80 [1024];
  undefined1 local_880 [1024];
  undefined1 local_480 [1080];
  long local_48;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x40);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x50);
  lVar8 = *(long *)(param_1 + 0x18);
  lVar9 = *(long *)(param_1 + 0x58);
  lVar10 = *(long *)(param_1 + 0x20);
  lVar11 = *(long *)(param_1 + 0x60);
  uVar12 = *(undefined8 *)(param_1 + 0x2c);
  lVar13 = *(long *)(param_1 + 0x38);
  if (0x100 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar14 = (undefined4 *)0x0;
  puVar17 = local_1880;
  if (lVar13 == 0) {
    puVar17 = puVar14;
  }
  puVar26 = local_1480;
  if (lVar5 == 0) {
    puVar26 = puVar14;
  }
  puVar18 = local_1080;
  if (lVar5 == 0) {
    puVar18 = puVar14;
  }
  if (lVar7 == 0) {
    puVar23 = (undefined1 *)0x0;
    puVar22 = (undefined1 *)0x0;
    puVar21 = (undefined1 *)0x0;
  }
  else {
    puVar23 = local_480;
    puVar22 = local_880;
    puVar21 = local_c80;
  }
  if (uVar2 != 0) {
    uVar25 = 0;
    lVar24 = (ulong)uVar1 * 4;
    do {
      uVar19 = uVar25 & 0xffffffff;
      if (lVar3 != 0) {
        while (*(int *)(lVar3 + uVar25 * 4) == 0) {
          uVar25 = uVar25 + 1;
          if (uVar25 == uVar2) goto LAB_00100462;
          uVar19 = uVar25 & 0xffffffff;
        }
      }
      local_18d8 = *(undefined4 *)(lVar6 + uVar25 * 4);
      local_18d4 = *(undefined4 *)(lVar8 + uVar25 * 4);
      local_18d0 = *(undefined4 *)(lVar10 + uVar25 * 4);
      local_18cc = uVar12;
      local_18c0 = puVar17;
      local_18b8 = puVar26;
      local_18b0 = puVar18;
      local_18a8 = puVar21;
      local_18a0 = puVar22;
      local_1898 = puVar23;
      local_1890 = uVar1;
      (**(code **)(*(long *)this + 0x98))(this,local_18e0);
      if (lVar13 == 0) {
        if (lVar5 == 0) {
          if ((lVar7 != 0) && (uVar1 != 0)) goto LAB_001003f8;
        }
        else if (uVar1 != 0) goto LAB_001003a4;
      }
      else {
        puVar14 = puVar17;
        uVar20 = uVar19;
        if (uVar1 != 0) {
          do {
            puVar15 = puVar14 + 1;
            *(undefined4 *)(lVar13 + uVar20 * 4) = *puVar14;
            puVar14 = puVar15;
            uVar20 = (ulong)((int)uVar20 + uVar2);
          } while (puVar17 + uVar1 != puVar15);
          if (lVar5 != 0) {
LAB_001003a4:
            lVar16 = 0;
            uVar20 = uVar19;
            do {
              *(undefined4 *)(lVar5 + uVar20 * 4) = *(undefined4 *)((long)puVar26 + lVar16);
              puVar14 = (undefined4 *)((long)puVar18 + lVar16);
              lVar16 = lVar16 + 4;
              *(undefined4 *)(lVar4 + uVar20 * 4) = *puVar14;
              uVar20 = (ulong)((int)uVar20 + uVar2);
            } while (lVar24 != lVar16);
          }
          if (lVar7 != 0) {
LAB_001003f8:
            lVar16 = 0;
            do {
              *(undefined4 *)(lVar7 + uVar19 * 4) = *(undefined4 *)(puVar21 + lVar16);
              *(undefined4 *)(lVar9 + uVar19 * 4) = *(undefined4 *)(puVar22 + lVar16);
              puVar14 = (undefined4 *)(puVar23 + lVar16);
              lVar16 = lVar16 + 4;
              *(undefined4 *)(lVar11 + uVar19 * 4) = *puVar14;
              uVar19 = (ulong)((int)uVar19 + uVar2);
            } while (lVar24 != lVar16);
          }
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar2 != uVar25);
  }
LAB_00100462:
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::Geometry::enable() */

void __thiscall embree::Geometry::enable(Geometry *this)

{
  if (((byte)this[0x3e] & 0x20) == 0) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
    this[0x3e] = (Geometry)((byte)this[0x3e] | 0x20);
  }
  return;
}



/* embree::Geometry::disable() */

void __thiscall embree::Geometry::disable(Geometry *this)

{
  if (((byte)this[0x3e] & 0x20) != 0) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
    this[0x3e] = (Geometry)((byte)this[0x3e] & 0xdf);
  }
  return;
}



/* embree::Geometry::~Geometry() */

void __thiscall embree::Geometry::~Geometry(Geometry *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Geometry_00100d10;
  plVar2 = *(long **)(this + 0x10);
  if (*(code **)(*plVar2 + 0x18) != RefCount::refDec) {
                    /* WARNING: Could not recover jumptable at 0x00100588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))();
    return;
  }
  LOCK();
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if ((plVar2 != (long *)0x0) && (*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0010057a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* embree::Geometry::~Geometry() */

void __thiscall embree::Geometry::~Geometry(Geometry *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Geometry_00100d10;
  plVar2 = *(long **)(this + 0x10);
  if (*(code **)(*plVar2 + 0x18) == RefCount::refDec) {
    LOCK();
    plVar1 = plVar2 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if ((plVar2 != (long *)0x0) && (*plVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    embree::alignedUSMFree(this);
    return;
  }
  (**(code **)(*plVar2 + 0x18))();
  embree::alignedUSMFree(this);
  return;
}



/* embree::Geometry::Geometry(embree::Device*, embree::Geometry::GType, unsigned int, unsigned int)
    */

void __thiscall
embree::Geometry::Geometry
          (Geometry *this,long *param_1,Geometry param_3,undefined4 param_4,int param_5)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  this[0x3c] = param_3;
  *(undefined ***)this = &PTR__Geometry_00100d10;
  *(undefined4 *)(this + 0x20) = param_4;
  *(undefined8 *)(this + 0x2c) = 0x3f80000000000000;
  *(undefined8 *)(this + 8) = 0;
  *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xff8000ff | 0x210000;
  lVar1 = *param_1;
  *(long **)(this + 0x10) = param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
  *(undefined8 *)(this + 0x18) = 0;
  *(int *)(this + 0x24) = param_5;
  *(undefined8 *)(this + 0x34) = 0x100000001;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(float *)(this + 0x28) = (float)(param_5 - 1);
  if (UNRECOVERED_JUMPTABLE == RefCount::refInc) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



/* embree::Geometry::setTimeRange(embree::BBox<float>) */

void __thiscall embree::Geometry::setTimeRange(undefined8 param_1,Geometry *this)

{
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  this[0x3e] = (Geometry)((byte)this[0x3e] & 0xe7);
  *(undefined8 *)(this + 0x2c) = param_1;
  return;
}



/* embree::Geometry::getTimeRange() const */

undefined8 __thiscall embree::Geometry::getTimeRange(Geometry *this)

{
  return *(undefined8 *)(this + 0x2c);
}



/* embree::Geometry::update() */

void __thiscall embree::Geometry::update(Geometry *this)

{
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  this[0x3e] = (Geometry)((byte)this[0x3e] & 0xe7);
  return;
}



/* embree::Geometry::setPointQueryFunction(bool (*)(RTCPointQueryFunctionArguments*)) */

void __thiscall
embree::Geometry::setPointQueryFunction
          (Geometry *this,_func_bool_RTCPointQueryFunctionArguments_ptr *param_1)

{
  *(_func_bool_RTCPointQueryFunctionArguments_ptr **)(this + 0x50) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::Geometry::pointQuery(embree::PointQueryK<1>*, embree::PointQueryContext*) */

uint __thiscall
embree::Geometry::pointQuery(Geometry *this,PointQueryK *param_1,PointQueryContext *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  float *pfVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_30;
  
  local_48 = *(undefined4 *)(param_2 + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = *(undefined8 *)(param_2 + 0x10);
  local_60 = *(undefined8 *)(param_2 + 0x38);
  local_58 = *(undefined8 *)(param_2 + 0x40);
  local_50 = *(undefined8 *)(param_2 + 0x28);
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    pcVar14 = *(code **)(this + 0x50);
    uVar12 = 0;
    if (pcVar14 != (code *)0x0) goto LAB_00100761;
  }
  else {
    uVar12 = (**(code **)(param_2 + 0x20))(&local_68);
    pcVar14 = *(code **)(this + 0x50);
    if (pcVar14 != (code *)0x0) {
LAB_00100761:
      uVar13 = (*pcVar14)(&local_68);
      uVar12 = uVar12 | uVar13;
    }
    fVar16 = _LC4;
    if ((char)uVar12 != '\0') {
      iVar1 = *(int *)(*(long *)(param_2 + 0x28) + 0x84);
      if (iVar1 != 0) {
        fVar30 = *(float *)(*(long *)(param_2 + 0x10) + 0x10);
        if (*(int *)(param_2 + 0x18) == 2) {
          if (fVar30 == _LC4) {
            *(float *)(param_2 + 0x50) = _LC4;
            *(float *)(param_2 + 0x54) = fVar16;
            *(float *)(param_2 + 0x58) = fVar16;
            *(float *)(param_2 + 0x5c) = fVar16;
          }
          else {
            fVar16 = (float)((uint)fVar30 ^ __LC5);
            pfVar15 = (float *)(*(long *)(param_2 + 0x28) + (ulong)(iVar1 - 1) * 0x40);
            auVar26._4_4_ = _LC4;
            auVar26._0_4_ = _LC4;
            auVar26._8_4_ = _LC4;
            auVar26._12_4_ = _LC4;
            auVar23._4_4_ = _LC8;
            auVar23._0_4_ = _LC8;
            auVar23._8_4_ = _LC8;
            auVar23._12_4_ = _LC8;
            fVar39 = pfVar15[4] * fVar16;
            fVar40 = pfVar15[5] * fVar16;
            fVar41 = pfVar15[6] * fVar16;
            fVar42 = pfVar15[7] * fVar16;
            fVar17 = fVar16 * *pfVar15;
            fVar20 = fVar16 * pfVar15[1];
            fVar21 = fVar16 * pfVar15[2];
            fVar22 = fVar16 * pfVar15[3];
            fVar47 = pfVar15[4] * fVar30;
            fVar48 = pfVar15[5] * fVar30;
            fVar49 = pfVar15[6] * fVar30;
            fVar50 = pfVar15[7] * fVar30;
            fVar31 = pfVar15[8] * fVar16 + pfVar15[0xc];
            fVar32 = pfVar15[9] * fVar16 + pfVar15[0xd];
            fVar33 = pfVar15[10] * fVar16 + pfVar15[0xe];
            fVar34 = pfVar15[0xb] * fVar16 + pfVar15[0xf];
            fVar35 = *pfVar15 * fVar30;
            fVar36 = pfVar15[1] * fVar30;
            fVar37 = pfVar15[2] * fVar30;
            fVar38 = pfVar15[3] * fVar30;
            fVar16 = pfVar15[8] * fVar30 + pfVar15[0xc];
            fVar28 = pfVar15[9] * fVar30 + pfVar15[0xd];
            fVar29 = pfVar15[10] * fVar30 + pfVar15[0xe];
            fVar30 = pfVar15[0xb] * fVar30 + pfVar15[0xf];
            fVar43 = fVar31 + fVar39;
            fVar44 = fVar32 + fVar40;
            fVar45 = fVar33 + fVar41;
            fVar46 = fVar34 + fVar42;
            fVar31 = fVar31 + fVar47;
            fVar32 = fVar32 + fVar48;
            fVar33 = fVar33 + fVar49;
            fVar34 = fVar34 + fVar50;
            fVar39 = fVar39 + fVar16;
            fVar40 = fVar40 + fVar28;
            fVar41 = fVar41 + fVar29;
            fVar42 = fVar42 + fVar30;
            fVar16 = fVar16 + fVar47;
            fVar28 = fVar28 + fVar48;
            fVar29 = fVar29 + fVar49;
            fVar30 = fVar30 + fVar50;
            fVar47 = fVar43 + fVar35;
            fVar48 = fVar44 + fVar36;
            fVar49 = fVar45 + fVar37;
            fVar50 = fVar46 + fVar38;
            fVar43 = fVar43 + fVar17;
            fVar44 = fVar44 + fVar20;
            fVar45 = fVar45 + fVar21;
            fVar46 = fVar46 + fVar22;
            fVar51 = fVar17 + fVar39;
            fVar52 = fVar20 + fVar40;
            fVar53 = fVar21 + fVar41;
            fVar54 = fVar22 + fVar42;
            fVar39 = fVar39 + fVar35;
            fVar40 = fVar40 + fVar36;
            fVar41 = fVar41 + fVar37;
            fVar42 = fVar42 + fVar38;
            auVar10._4_4_ = fVar44;
            auVar10._0_4_ = fVar43;
            auVar10._8_4_ = fVar45;
            auVar10._12_4_ = fVar46;
            auVar27 = minps(auVar26,auVar10);
            auVar11._4_4_ = fVar44;
            auVar11._0_4_ = fVar43;
            auVar11._8_4_ = fVar45;
            auVar11._12_4_ = fVar46;
            auVar24 = maxps(auVar23,auVar11);
            auVar6._4_4_ = fVar52;
            auVar6._0_4_ = fVar51;
            auVar6._8_4_ = fVar53;
            auVar6._12_4_ = fVar54;
            auVar27 = minps(auVar27,auVar6);
            auVar7._4_4_ = fVar52;
            auVar7._0_4_ = fVar51;
            auVar7._8_4_ = fVar53;
            auVar7._12_4_ = fVar54;
            auVar24 = maxps(auVar24,auVar7);
            fVar43 = fVar17 + fVar31;
            fVar44 = fVar20 + fVar32;
            fVar45 = fVar21 + fVar33;
            fVar46 = fVar22 + fVar34;
            auVar18._0_4_ = fVar17 + fVar16;
            auVar18._4_4_ = fVar20 + fVar28;
            auVar18._8_4_ = fVar21 + fVar29;
            auVar18._12_4_ = fVar22 + fVar30;
            fVar31 = fVar31 + fVar35;
            fVar32 = fVar32 + fVar36;
            fVar33 = fVar33 + fVar37;
            fVar34 = fVar34 + fVar38;
            fVar16 = fVar16 + fVar35;
            fVar28 = fVar28 + fVar36;
            fVar29 = fVar29 + fVar37;
            fVar30 = fVar30 + fVar38;
            auVar8._4_4_ = fVar44;
            auVar8._0_4_ = fVar43;
            auVar8._8_4_ = fVar45;
            auVar8._12_4_ = fVar46;
            auVar27 = minps(auVar27,auVar8);
            auVar9._4_4_ = fVar44;
            auVar9._0_4_ = fVar43;
            auVar9._8_4_ = fVar45;
            auVar9._12_4_ = fVar46;
            auVar24 = maxps(auVar24,auVar9);
            auVar27 = minps(auVar27,auVar18);
            auVar24 = maxps(auVar24,auVar18);
            auVar4._4_4_ = fVar48;
            auVar4._0_4_ = fVar47;
            auVar4._8_4_ = fVar49;
            auVar4._12_4_ = fVar50;
            auVar27 = minps(auVar27,auVar4);
            auVar5._4_4_ = fVar48;
            auVar5._0_4_ = fVar47;
            auVar5._8_4_ = fVar49;
            auVar5._12_4_ = fVar50;
            auVar24 = maxps(auVar24,auVar5);
            auVar2._4_4_ = fVar40;
            auVar2._0_4_ = fVar39;
            auVar2._8_4_ = fVar41;
            auVar2._12_4_ = fVar42;
            auVar27 = minps(auVar27,auVar2);
            auVar3._4_4_ = fVar40;
            auVar3._0_4_ = fVar39;
            auVar3._8_4_ = fVar41;
            auVar3._12_4_ = fVar42;
            auVar24 = maxps(auVar24,auVar3);
            auVar19._4_4_ = fVar32;
            auVar19._0_4_ = fVar31;
            auVar19._8_4_ = fVar33;
            auVar19._12_4_ = fVar34;
            auVar27 = minps(auVar27,auVar19);
            auVar25._4_4_ = fVar32;
            auVar25._0_4_ = fVar31;
            auVar25._8_4_ = fVar33;
            auVar25._12_4_ = fVar34;
            auVar19 = maxps(auVar24,auVar25);
            auVar24._4_4_ = fVar28;
            auVar24._0_4_ = fVar16;
            auVar24._8_4_ = fVar29;
            auVar24._12_4_ = fVar30;
            auVar25 = minps(auVar27,auVar24);
            auVar27._4_4_ = fVar28;
            auVar27._0_4_ = fVar16;
            auVar27._8_4_ = fVar29;
            auVar27._12_4_ = fVar30;
            auVar24 = maxps(auVar19,auVar27);
            fVar16 = (auVar24._4_4_ - auVar25._4_4_) * _LC10;
            fVar30 = (auVar24._8_4_ - auVar25._8_4_) * _LC10;
            fVar17 = (auVar24._12_4_ - auVar25._12_4_) * _LC10;
            *(float *)(param_2 + 0x50) = (auVar24._0_4_ - auVar25._0_4_) * _LC10;
            *(float *)(param_2 + 0x54) = fVar16;
            *(float *)(param_2 + 0x58) = fVar30;
            *(float *)(param_2 + 0x5c) = fVar17;
          }
        }
        else {
          *(float *)(param_1 + 0x10) = fVar30 * *(float *)(param_2 + 0x30);
        }
      }
      goto LAB_0010077b;
    }
  }
  uVar12 = 0;
LAB_0010077b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* embree::Geometry::updateBuffer(RTCBufferType, unsigned int) */

void embree::Geometry::updateBuffer(long param_1)

{
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xe7;
  return;
}



/* embree::Geometry::verify() */

undefined8 embree::Geometry::verify(void)

{
  return 1;
}



/* embree::Geometry::getCompactVertexArray() const */

undefined8 embree::Geometry::getCompactVertexArray(void)

{
  return 0;
}



/* embree::Geometry::enableFilterFunctionFromArguments(bool) */

void __thiscall embree::Geometry::enableFilterFunctionFromArguments(Geometry *this,bool param_1)

{
  this[0x3e] = (Geometry)((byte)this[0x3e] & 0xbf | (byte)((param_1 & 1) << 6));
  return;
}



/* embree::Geometry::createPrimRefArray(embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&, embree::range<unsigned
   long> const&, unsigned long, unsigned int) const */

vector_t *
embree::Geometry::createPrimRefArray
          (vector_t *param_1,vector_t *param_2,range *param_3,ulong param_4,uint param_5)

{
  long lVar1;
  undefined4 in_register_00000084;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_2 + 0x168))
            (param_1,param_2,*(undefined8 *)(param_3 + 0x20),CONCAT44(in_register_00000084,param_5))
  ;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Geometry::createPrimRefMBArray(embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&,
   embree::vector_t<embree::SubGridBuildData,
   embree::aligned_monitored_allocator<embree::SubGridBuildData, 4ul> >&, embree::BBox<float>
   const&, embree::range<unsigned long> const&, unsigned long, unsigned int) const */

vector_t *
embree::Geometry::createPrimRefMBArray
          (vector_t *param_1,vector_t *param_2,BBox *param_3,range *param_4,ulong param_5,
          uint param_6)

{
  long lVar1;
  undefined4 in_register_0000008c;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_2 + 0x188))
            (param_1,param_2,param_3,param_5,CONCAT44(in_register_0000008c,param_6),
             in_stack_00000008,in_stack_00000010);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Geometry::vlinearBounds(unsigned long, embree::BBox<float> const&,
   embree::SubGridBuildData const*) const */

ulong embree::Geometry::vlinearBounds(ulong param_1,BBox *param_2,SubGridBuildData *param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_2 + 0x1d0))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
}



/* embree::Geometry::vlinearBounds(embree::Vec3fa const&, float, float,
   embree::LinearSpace3<embree::Vec3fa> const&, unsigned long, embree::BBox<float> const&) const */

void embree::Geometry::vlinearBounds
               (Vec3fa *param_1,float param_2,float param_3,LinearSpace3 *param_4,ulong param_5,
               BBox *param_6)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vlinearBounds(unsigned long, embree::BBox<float> const&) const */

void embree::Geometry::vlinearBounds(ulong param_1,BBox *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vbounds(embree::Vec3fa const&, float, float,
   embree::LinearSpace3<embree::Vec3fa> const&, unsigned long, unsigned long) const */

void embree::Geometry::vbounds
               (Vec3fa *param_1,float param_2,float param_3,LinearSpace3 *param_4,ulong param_5,
               ulong param_6)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::computeAlignedSpaceMB(unsigned long, embree::BBox<float>) const */

void embree::Geometry::computeAlignedSpaceMB(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::computeAlignedSpace(unsigned long) const */

void embree::Geometry::computeAlignedSpace(ulong param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::createPrimRefMBArray(embree::vector_t<embree::PrimRefMB,
   embree::aligned_monitored_allocator<embree::PrimRefMB, 16ul> >&, embree::BBox<float> const&,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */

void embree::Geometry::createPrimRefMBArray
               (vector_t *param_1,BBox *param_2,range *param_3,ulong param_4,uint param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::createPrimRefArray(embree::PrimRef*, embree::range<unsigned long> const&,
   unsigned long, unsigned int) const */

void embree::Geometry::createPrimRefArray
               (PrimRef *param_1,range *param_2,ulong param_3,uint param_4)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setOccludedFunctionN(void (*)(RTCOccludedFunctionNArguments const*)) */

void embree::Geometry::setOccludedFunctionN(_func_void_RTCOccludedFunctionNArguments_ptr *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setIntersectFunctionN(void (*)(RTCIntersectFunctionNArguments const*)) */

void embree::Geometry::setIntersectFunctionN(_func_void_RTCIntersectFunctionNArguments_ptr *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setBoundsFunction(void (*)(RTCBoundsFunctionArguments const*), void*) */

void embree::Geometry::setBoundsFunction
               (_func_void_RTCBoundsFunctionArguments_ptr *param_1,void *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getTransform(unsigned long, float) */

void embree::Geometry::getTransform(ulong param_1,float param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getTransform(float) */

void embree::Geometry::getTransform(float param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setQuaternionDecomposition(embree::AffineSpaceT<embree::LinearSpace3<embree::Vec3fx>
   > const&, unsigned int) */

void embree::Geometry::setQuaternionDecomposition(AffineSpaceT *param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setTransform(embree::AffineSpaceT<embree::LinearSpace3<embree::Vec3fa> >
   const&, unsigned int) */

void embree::Geometry::setTransform(AffineSpaceT *param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setInstancedScenes(RTCSceneTy* const*, unsigned long) */

void embree::Geometry::setInstancedScenes(RTCSceneTy **param_1,ulong param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setInstancedScene(embree::Ref<embree::Scene> const&) */

void embree::Geometry::setInstancedScene(Ref *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getOppositeHalfEdge(unsigned int, unsigned int) */

void embree::Geometry::getOppositeHalfEdge(uint param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getPreviousHalfEdge(unsigned int) */

void embree::Geometry::getPreviousHalfEdge(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getNextHalfEdge(unsigned int) */

void embree::Geometry::getNextHalfEdge(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getFace(unsigned int) */

void embree::Geometry::getFace(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getFirstHalfEdge(unsigned int) */

void embree::Geometry::getFirstHalfEdge(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setDisplacementFunction(void (*)(RTCDisplacementFunctionNArguments const*)) */

void embree::Geometry::setDisplacementFunction
               (_func_void_RTCDisplacementFunctionNArguments_ptr *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setVertexAttributeTopology(unsigned int, unsigned int) */

void embree::Geometry::setVertexAttributeTopology(uint param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setSubdivisionMode(unsigned int, RTCSubdivisionMode) */

void embree::Geometry::setSubdivisionMode(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::interpolate(RTCInterpolateArguments const*) */

void embree::Geometry::interpolate(RTCInterpolateArguments *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setTessellationRate(float) */

void embree::Geometry::setTessellationRate(float param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setTopologyCount(unsigned int) */

void embree::Geometry::setTopologyCount(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vlinearBounds(embree::LinearSpace3<embree::Vec3fa> const&, unsigned long,
   embree::BBox<float> const&) const */

void embree::Geometry::vlinearBounds(LinearSpace3 *param_1,ulong param_2,BBox *param_3)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vbounds(embree::LinearSpace3<embree::Vec3fa> const&, unsigned long) const */

void embree::Geometry::vbounds(LinearSpace3 *param_1,ulong param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::vbounds(unsigned long) const */

void embree::Geometry::vbounds(ulong param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::computeDirection(unsigned int, unsigned long) const */

void embree::Geometry::computeDirection(uint param_1,ulong param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::computeDirection(unsigned int) const */

void embree::Geometry::computeDirection(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::createPrimRefArrayMB(embree::PrimRef*, embree::BBox<float> const&,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */

void embree::Geometry::createPrimRefArrayMB
               (PrimRef *param_1,BBox *param_2,range *param_3,ulong param_4,uint param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::createPrimRefArrayMB(embree::vector_t<embree::PrimRef,
   embree::aligned_monitored_allocator<embree::PrimRef, 32ul> >&, unsigned long,
   embree::range<unsigned long> const&, unsigned long, unsigned int) const */

void embree::Geometry::createPrimRefArrayMB
               (vector_t *param_1,ulong param_2,range *param_3,ulong param_4,uint param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setMaxRadiusScale(float) */

void embree::Geometry::setMaxRadiusScale(float param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setVertexAttributeCount(unsigned int) */

void embree::Geometry::setVertexAttributeCount(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::getBuffer(RTCBufferType, unsigned int) */

void embree::Geometry::getBuffer(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setBuffer(RTCBufferType, unsigned int, RTCFormat, embree::Ref<embree::Buffer>
   const&, unsigned long, unsigned long, unsigned int) */

void embree::Geometry::setBuffer(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setMask(unsigned int) */

void embree::Geometry::setMask(uint param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::addElementsToCount(embree::GeometryCounts&) const */

void embree::Geometry::addElementsToCount(GeometryCounts *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::preCommit() [clone .cold] */

void embree::Geometry::preCommit(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setIntersectionFilterFunctionN(void (*)(RTCFilterFunctionNArguments const*))
   [clone .cold] */

void embree::Geometry::setIntersectionFilterFunctionN
               (_func_void_RTCFilterFunctionNArguments_ptr *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::setOcclusionFilterFunctionN(void (*)(RTCFilterFunctionNArguments const*))
   [clone .cold] */

void embree::Geometry::setOcclusionFilterFunctionN
               (_func_void_RTCFilterFunctionNArguments_ptr *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Geometry::interpolateN(RTCInterpolateNArguments const*) [clone .cold] */

void embree::Geometry::interpolateN(RTCInterpolateNArguments *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::RefCount::refDec() */

void __thiscall embree::RefCount::refDec(RefCount *this)

{
  RefCount *pRVar1;
  
  LOCK();
  pRVar1 = this + 8;
  *(long *)pRVar1 = *(long *)pRVar1 + -1;
  UNLOCK();
  if ((this != (RefCount *)0x0) && (*(long *)pRVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00100c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}


