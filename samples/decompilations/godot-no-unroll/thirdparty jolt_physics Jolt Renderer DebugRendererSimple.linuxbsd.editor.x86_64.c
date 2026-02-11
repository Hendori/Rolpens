
/* JPH::DebugRendererSimple::DrawGeometry(JPH::Mat44 const&, JPH::AABox const&, float, JPH::Color,
   JPH::Ref<JPH::DebugRenderer::Geometry> const&, JPH::DebugRenderer::ECullMode,
   JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void __thiscall
JPH::DebugRendererSimple::DrawGeometry
          (float param_3,DebugRendererSimple *this,float *param_1,undefined1 (*param_2) [16],
          undefined4 param_5,long *param_6,undefined8 param_7,undefined4 param_8,int param_9)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  long *plVar4;
  ushort uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  float fVar9;
  float fVar10;
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  long lVar29;
  long *plVar30;
  float *pfVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar35 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined8 local_98;
  undefined8 local_88;
  
  plVar4 = *(long **)(*param_6 + 0x18);
  plVar30 = plVar4;
  if (this[0x150] != (DebugRendererSimple)0x0) {
    auVar35 = maxps(*(undefined1 (*) [16])(this + 0x140),*param_2);
    auVar35 = minps(auVar35,param_2[1]);
    fVar33 = auVar35._0_4_ - *(float *)(this + 0x140);
    fVar36 = auVar35._4_4_ - *(float *)(this + 0x144);
    fVar38 = auVar35._8_4_ - *(float *)(this + 0x148);
    lVar29 = *(long *)(*param_6 + 8);
    for (; plVar30 != plVar4 + lVar29 * 2; plVar30 = plVar30 + 2) {
      if (fVar38 * fVar38 + fVar33 * fVar33 + 0.0 + fVar36 * fVar36 <=
          *(float *)(plVar30 + 1) * *(float *)(plVar30 + 1) * param_3) goto LAB_001000c2;
    }
    plVar30 = plVar4 + lVar29 * 2 + -2;
  }
LAB_001000c2:
  pfVar31 = *(float **)(*plVar30 + 0x18);
  pfVar1 = pfVar31 + *(long *)(*plVar30 + 8) * 0x1b;
  if (pfVar1 != pfVar31) {
    uVar3 = CONCAT12((char)((uint)param_5 >> 8),(short)param_5) & 0xff00ff;
    uVar5 = (ushort)(((uint7)(byte)((uint)param_5 >> 0x18) << 0x30) >> 0x28);
    do {
      while( true ) {
        fVar33 = pfVar31[1];
        fVar9 = *param_1;
        fVar10 = param_1[1];
        fVar11 = param_1[2];
        fVar12 = param_1[3];
        fVar13 = param_1[4];
        fVar14 = param_1[5];
        fVar15 = param_1[6];
        fVar16 = param_1[7];
        fVar17 = param_1[8];
        fVar18 = param_1[9];
        fVar19 = param_1[10];
        fVar20 = param_1[0xb];
        fVar34 = param_1[0xc];
        fVar37 = param_1[0xd];
        fVar41 = param_1[0xe];
        fVar44 = param_1[0xf];
        fVar36 = pfVar31[2];
        fVar38 = pfVar31[10];
        fVar39 = fVar33 * fVar15 + *pfVar31 * fVar11 + fVar36 * fVar19 + fVar41;
        fVar42 = fVar33 * fVar16 + *pfVar31 * fVar12 + fVar36 * fVar20 + fVar44;
        local_98 = CONCAT44(fVar33 * fVar14 + (float)*(undefined8 *)pfVar31 * fVar10 +
                            fVar36 * fVar18 + fVar37,
                            fVar33 * fVar13 + (float)*(undefined8 *)pfVar31 * fVar9 +
                            fVar36 * fVar17 + fVar34);
        fVar33 = pfVar31[9];
        fVar36 = pfVar31[0xb];
        fVar2 = pfVar31[0x13];
        fVar40 = fVar38 * fVar15 + fVar33 * fVar11 + fVar36 * fVar19 + fVar41;
        fVar43 = fVar38 * fVar16 + fVar33 * fVar12 + fVar36 * fVar20 + fVar44;
        local_88 = CONCAT44(fVar38 * fVar14 + fVar33 * fVar10 + fVar36 * fVar18 + fVar37,
                            fVar38 * fVar13 + fVar33 * fVar9 + fVar36 * fVar17 + fVar34);
        fVar33 = pfVar31[0x12];
        fVar36 = pfVar31[0x14];
        fVar38 = pfVar31[8];
        fVar34 = fVar33 * fVar9 + fVar2 * fVar13 + fVar36 * fVar17 + fVar34;
        fVar37 = fVar33 * fVar10 + fVar2 * fVar14 + fVar36 * fVar18 + fVar37;
        fVar41 = fVar33 * fVar11 + fVar2 * fVar15 + fVar36 * fVar19 + fVar41;
        fVar44 = fVar33 * fVar12 + fVar2 * fVar16 + fVar36 * fVar20 + fVar44;
        uVar46 = (undefined1)((ushort)((ushort)(byte)((uint)fVar38 >> 0x18) * (uVar5 >> 8)) >> 8);
        uVar48 = (undefined1)
                 ((ushort)((ushort)(byte)((uint)fVar38 >> 8) * (short)(uVar3 >> 0x10)) >> 8);
        uVar45 = (undefined1)
                 ((ushort)((ushort)(byte)((uint)fVar38 >> 0x10) *
                          (short)(CONCAT25(uVar5,CONCAT14((char)((uint)param_5 >> 0x10),param_5)) >>
                                 0x20)) >> 8);
        uVar47 = (undefined1)((ushort)((SUB42(fVar38,0) & 0xff) * (short)uVar3) >> 8);
        auVar6[10] = uVar46;
        auVar6._0_10_ = (unkuint10)0;
        auVar6[0xb] = uVar45;
        auVar7[9] = uVar47;
        auVar7._0_9_ = (unkuint9)0;
        auVar7._10_2_ = auVar6._10_2_;
        auVar28._1_3_ = auVar7._9_3_;
        auVar28[0] = uVar48;
        auVar28._4_8_ = 0;
        auVar25._5_7_ = 0;
        auVar25._0_5_ = SUB125(auVar28 << 0x40,7);
        auVar26._6_6_ = 0;
        auVar26._0_6_ = SUB126(auVar25 << 0x38,6);
        auVar27._7_5_ = 0;
        auVar27._0_7_ = SUB127(auVar26 << 0x30,5);
        auVar8._4_8_ = SUB128(auVar27 << 0x28,4);
        auVar8[3] = uVar46;
        auVar8[2] = uVar45;
        auVar8[1] = uVar48;
        auVar8[0] = uVar47;
        uVar32 = auVar8._0_4_;
        if (param_9 == 0) break;
        if (param_9 == 1) {
          lVar29 = *(long *)this;
LAB_00100122:
          uVar21 = CONCAT44(fVar42,fVar39);
          uVar22 = CONCAT44(fVar43,fVar40);
          (**(code **)(lVar29 + 0x10))(local_98,uVar21,local_88,uVar22,this,uVar32);
          uVar23 = CONCAT44(fVar37,fVar34);
          uVar24 = CONCAT44(fVar44,fVar41);
          (**(code **)(*(long *)this + 0x10))(local_88,uVar22,uVar23,uVar24,this,uVar32);
          (**(code **)(*(long *)this + 0x10))(uVar23,uVar24,local_98,uVar21,this,uVar32);
        }
        pfVar31 = pfVar31 + 0x1b;
        if (pfVar1 == pfVar31) {
          return;
        }
      }
      lVar29 = *(long *)this;
      if (*(code **)(lVar29 + 0x18) == DrawTriangle) goto LAB_00100122;
      pfVar31 = pfVar31 + 0x1b;
      (**(code **)(lVar29 + 0x18))
                (local_98,CONCAT44(fVar42,fVar39),local_88,CONCAT44(fVar43,fVar40),
                 CONCAT44(fVar37,fVar34),CONCAT44(fVar44,fVar41),this,uVar32,param_8);
    } while (pfVar1 != pfVar31);
  }
  return;
}



/* JPH::DebugRendererSimple::CreateTriangleBatch(JPH::DebugRenderer::Vertex const*, int, unsigned
   int const*, int) */

Vertex * JPH::DebugRendererSimple::CreateTriangleBatch
                   (Vertex *param_1,int param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 in_register_00000034;
  uint *in_R8;
  int in_R9D;
  long lVar8;
  
  plVar4 = (long *)(*Allocate)(0x28,CONCAT44(in_register_00000034,param_2));
  *plVar4 = (long)&PTR__BatchImpl_001008c8;
  plVar4[3] = 0;
  *(undefined4 *)(plVar4 + 4) = 0;
  *(undefined1 (*) [16])(plVar4 + 1) = (undefined1  [16])0x0;
  if ((((param_3 == (uint *)0x0) || (param_4 == 0)) || (in_R8 == (uint *)0x0)) ||
     ((in_R9D == 0 || (lVar8 = (long)(in_R9D / 3), lVar8 == 0)))) {
    *(long **)param_1 = plVar4;
  }
  else {
    puVar5 = (undefined8 *)(*Reallocate)(0,0,lVar8 * 0x6c);
    plVar4[3] = (long)puVar5;
    plVar4[1] = lVar8;
    plVar4[2] = lVar8;
    puVar6 = puVar5;
    do {
      puVar7 = (undefined8 *)((long)puVar6 + 0x6c);
      puVar1 = param_3 + (ulong)*in_R8 * 9;
      uVar3 = *(undefined8 *)(puVar1 + 2);
      *puVar6 = *(undefined8 *)puVar1;
      puVar6[1] = uVar3;
      uVar3 = *(undefined8 *)(puVar1 + 6);
      puVar6[2] = *(undefined8 *)(puVar1 + 4);
      puVar6[3] = uVar3;
      *(uint *)(puVar6 + 4) = puVar1[8];
      puVar1 = param_3 + (ulong)in_R8[1] * 9;
      uVar3 = *(undefined8 *)(puVar1 + 2);
      *(undefined8 *)((long)puVar6 + 0x24) = *(undefined8 *)puVar1;
      *(undefined8 *)((long)puVar6 + 0x2c) = uVar3;
      uVar3 = *(undefined8 *)(puVar1 + 6);
      *(undefined8 *)((long)puVar6 + 0x34) = *(undefined8 *)(puVar1 + 4);
      *(undefined8 *)((long)puVar6 + 0x3c) = uVar3;
      *(uint *)((long)puVar6 + 0x44) = puVar1[8];
      puVar1 = param_3 + (ulong)in_R8[2] * 9;
      uVar3 = *(undefined8 *)(puVar1 + 2);
      puVar6[9] = *(undefined8 *)puVar1;
      puVar6[10] = uVar3;
      uVar3 = *(undefined8 *)(puVar1 + 6);
      puVar6[0xb] = *(undefined8 *)(puVar1 + 4);
      puVar6[0xc] = uVar3;
      *(uint *)(puVar6 + 0xd) = puVar1[8];
      puVar6 = puVar7;
      in_R8 = in_R8 + 3;
    } while (puVar7 != (undefined8 *)((long)puVar5 + lVar8 * 0x6c));
    pcVar2 = *(code **)(*plVar4 + 0x10);
    *(long **)param_1 = plVar4;
    if (pcVar2 != BatchImpl::AddRef) {
      (*pcVar2)(plVar4);
      return param_1;
    }
  }
  LOCK();
  *(int *)(plVar4 + 4) = (int)plVar4[4] + 1;
  UNLOCK();
  return param_1;
}



/* JPH::DebugRendererSimple::CreateTriangleBatch(JPH::DebugRenderer::Triangle const*, int) */

Triangle * JPH::DebugRendererSimple::CreateTriangleBatch(Triangle *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  int in_ECX;
  undefined8 *in_RDX;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 in_register_00000034;
  long lVar9;
  
  plVar3 = (long *)(*Allocate)(0x28,CONCAT44(in_register_00000034,param_2));
  *plVar3 = (long)&PTR__BatchImpl_001008c8;
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 4) = 0;
  *(undefined1 (*) [16])(plVar3 + 1) = (undefined1  [16])0x0;
  if ((in_RDX == (undefined8 *)0x0) || (in_ECX == 0)) {
    *(long **)param_1 = plVar3;
    LOCK();
    *(int *)(plVar3 + 4) = (int)plVar3[4] + 1;
    UNLOCK();
  }
  else {
    lVar9 = (long)in_ECX * 0x6c;
    lVar4 = (*Reallocate)(0,0,lVar9);
    lVar6 = plVar3[1];
    plVar3[3] = lVar4;
    plVar3[2] = (lVar9 >> 2) * -0x7b425ed097b425ed;
    puVar5 = (undefined8 *)(lVar4 + lVar6 * 0x6c);
    puVar7 = in_RDX;
    do {
      lVar6 = lVar6 + 1;
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      plVar3[1] = lVar6;
      puVar8 = (undefined8 *)((long)puVar7 + 0x6c);
      *puVar5 = uVar1;
      puVar5[1] = uVar2;
      uVar1 = puVar7[3];
      puVar5[2] = puVar7[2];
      puVar5[3] = uVar1;
      uVar1 = puVar7[5];
      puVar5[4] = puVar7[4];
      puVar5[5] = uVar1;
      uVar1 = puVar7[7];
      puVar5[6] = puVar7[6];
      puVar5[7] = uVar1;
      uVar1 = puVar7[9];
      puVar5[8] = puVar7[8];
      puVar5[9] = uVar1;
      uVar1 = puVar7[0xb];
      puVar5[10] = puVar7[10];
      puVar5[0xb] = uVar1;
      uVar1 = *(undefined8 *)((long)puVar7 + 100);
      *(undefined8 *)((long)puVar5 + 0x5c) = *(undefined8 *)((long)puVar7 + 0x5c);
      *(undefined8 *)((long)puVar5 + 100) = uVar1;
      puVar5 = (undefined8 *)((long)puVar5 + 0x6c);
      puVar7 = puVar8;
    } while (puVar8 != (undefined8 *)((long)in_RDX + lVar9));
    lVar6 = *plVar3;
    *(long **)param_1 = plVar3;
    if (*(code **)(lVar6 + 0x10) == BatchImpl::AddRef) {
      LOCK();
      *(int *)(plVar3 + 4) = (int)plVar3[4] + 1;
      UNLOCK();
      return param_1;
    }
    (**(code **)(lVar6 + 0x10))(plVar3);
  }
  return param_1;
}



/* JPH::DebugRendererSimple::DebugRendererSimple() */

void __thiscall JPH::DebugRendererSimple::DebugRendererSimple(DebugRendererSimple *this)

{
  JPH::DebugRenderer::DebugRenderer((DebugRenderer *)this);
  this[0x150] = (DebugRendererSimple)0x0;
  *(undefined **)this = &DAT_001008f8;
  JPH::DebugRenderer::Initialize();
  return;
}



/* JPH::DebugRendererSimple::DrawTriangle(JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Color,
   JPH::DebugRenderer::ECastShadow) */

void JPH::DebugRendererSimple::DrawTriangle
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long *param_7,undefined4 param_8)

{
  (**(code **)(*param_7 + 0x10))();
  (**(code **)(*param_7 + 0x10))(param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00100713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_7 + 0x10))(param_5,param_6,param_1,param_2,param_7,param_8);
  return;
}



/* JPH::DebugRendererSimple::BatchImpl::~BatchImpl() */

void __thiscall JPH::DebugRendererSimple::BatchImpl::~BatchImpl(BatchImpl *this)

{
  *(undefined ***)this = &PTR__BatchImpl_001008c8;
  if (*(long *)(this + 0x18) != 0) {
    *(undefined8 *)(this + 8) = 0;
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x0010074d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::DebugRendererSimple::BatchImpl::AddRef() */

void __thiscall JPH::DebugRendererSimple::BatchImpl::AddRef(BatchImpl *this)

{
  LOCK();
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  UNLOCK();
  return;
}



/* JPH::DebugRendererSimple::BatchImpl::Release() */

void __thiscall JPH::DebugRendererSimple::BatchImpl::Release(BatchImpl *this)

{
  BatchImpl *pBVar1;
  
  LOCK();
  pBVar1 = this + 0x20;
  *(int *)pBVar1 = *(int *)pBVar1 + -1;
  UNLOCK();
  if (*(int *)pBVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0010077e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* JPH::DebugRendererSimple::BatchImpl::~BatchImpl() */

void __thiscall JPH::DebugRendererSimple::BatchImpl::~BatchImpl(BatchImpl *this)

{
  *(undefined ***)this = &PTR__BatchImpl_001008c8;
  if (*(long *)(this + 0x18) != 0) {
    *(undefined8 *)(this + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x001007b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(*(long *)(this + 0x18));
    return;
  }
  return;
}



/* JPH::DebugRendererSimple::DebugRendererSimple() */

void JPH::DebugRendererSimple::_GLOBAL__sub_I_DebugRendererSimple(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC1;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::DebugRendererSimple::BatchImpl::~BatchImpl() */

void __thiscall JPH::DebugRendererSimple::BatchImpl::~BatchImpl(BatchImpl *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


