
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<embree::PrimRefMB*, long, embree::PrimRefMB,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::PrimRefMB*, long, long, embree::PrimRefMB,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__adjust_heap<embree::PrimRefMB*,long,embree::PrimRefMB,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  
  lVar21 = (long)(param_3 - 1) / 2;
  lVar20 = param_2;
  if (param_2 < lVar21) {
    do {
      lVar18 = (lVar20 + 1) * 2;
      lVar16 = (lVar20 + 1) * 0xa0;
      lVar1 = param_1 + -0x50 + lVar16;
      puVar17 = (undefined8 *)(lVar16 + param_1);
      if (CONCAT44(*(undefined4 *)((long)puVar17 + 0x1c),*(undefined4 *)((long)puVar17 + 0xc)) <
          CONCAT44(*(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0xc))) {
        lVar18 = lVar18 + -1;
        puVar17 = (undefined8 *)(lVar18 * 0x50 + param_1);
      }
      uVar2 = puVar17[1];
      puVar19 = (undefined8 *)(lVar20 * 0x50 + param_1);
      *puVar19 = *puVar17;
      puVar19[1] = uVar2;
      uVar2 = puVar17[3];
      puVar19[2] = puVar17[2];
      puVar19[3] = uVar2;
      uVar2 = puVar17[5];
      puVar19[4] = puVar17[4];
      puVar19[5] = uVar2;
      uVar2 = puVar17[7];
      puVar19[6] = puVar17[6];
      puVar19[7] = uVar2;
      *(undefined4 *)(puVar19 + 8) = *(undefined4 *)(puVar17 + 8);
      *(undefined4 *)((long)puVar19 + 0x44) = *(undefined4 *)((long)puVar17 + 0x44);
      lVar20 = lVar18;
    } while (lVar18 < lVar21);
  }
  else {
    puVar17 = (undefined8 *)(param_2 * 0x50 + param_1);
    lVar18 = param_2;
  }
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar18)) {
    lVar20 = lVar18 + 1;
    lVar18 = lVar20 * 2 + -1;
    puVar19 = (undefined8 *)(param_1 + -0x50 + lVar20 * 0xa0);
    uVar2 = puVar19[1];
    *puVar17 = *puVar19;
    puVar17[1] = uVar2;
    uVar2 = puVar19[3];
    puVar17[2] = puVar19[2];
    puVar17[3] = uVar2;
    uVar2 = puVar19[5];
    puVar17[4] = puVar19[4];
    puVar17[5] = uVar2;
    uVar2 = puVar19[7];
    puVar17[6] = puVar19[6];
    puVar17[7] = uVar2;
    *(undefined4 *)(puVar17 + 8) = *(undefined4 *)(puVar19 + 8);
    *(undefined4 *)((long)puVar17 + 0x44) = *(undefined4 *)((long)puVar19 + 0x44);
    puVar17 = (undefined8 *)(lVar18 * 0x50 + param_1);
  }
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  uVar7 = param_4[4];
  uVar8 = param_4[5];
  uVar9 = param_4[6];
  uVar10 = param_4[7];
  uVar11 = *(undefined8 *)(param_4 + 8);
  uVar12 = *(undefined8 *)(param_4 + 10);
  uVar13 = *(undefined8 *)(param_4 + 0xc);
  uVar14 = *(undefined8 *)(param_4 + 0xe);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  lVar20 = (lVar18 + -1) - (lVar18 + -1 >> 0x3f);
  if (param_2 < lVar18) {
    do {
      lVar21 = lVar20 >> 1;
      puVar19 = (undefined8 *)(lVar21 * 0x50 + param_1);
      puVar17 = (undefined8 *)(lVar18 * 0x50 + param_1);
      if (CONCAT44(uVar10,uVar6) <=
          CONCAT44(*(undefined4 *)((long)puVar19 + 0x1c),*(undefined4 *)((long)puVar19 + 0xc)))
      break;
      uVar15 = puVar19[1];
      *puVar17 = *puVar19;
      puVar17[1] = uVar15;
      uVar15 = puVar19[3];
      puVar17[2] = puVar19[2];
      puVar17[3] = uVar15;
      uVar15 = puVar19[5];
      puVar17[4] = puVar19[4];
      puVar17[5] = uVar15;
      uVar15 = puVar19[7];
      puVar17[6] = puVar19[6];
      puVar17[7] = uVar15;
      *(undefined4 *)(puVar17 + 8) = *(undefined4 *)(puVar19 + 8);
      *(undefined4 *)((long)puVar17 + 0x44) = *(undefined4 *)((long)puVar19 + 0x44);
      lVar20 = (lVar21 + -1) - (lVar21 + -1 >> 0x3f);
      puVar17 = puVar19;
      lVar18 = lVar21;
    } while (param_2 < lVar21);
  }
  puVar17[8] = uVar2;
  *(undefined4 *)puVar17 = uVar3;
  *(undefined4 *)((long)puVar17 + 4) = uVar4;
  *(undefined4 *)(puVar17 + 1) = uVar5;
  *(undefined4 *)((long)puVar17 + 0xc) = uVar6;
  *(undefined4 *)(puVar17 + 2) = uVar7;
  *(undefined4 *)((long)puVar17 + 0x14) = uVar8;
  *(undefined4 *)(puVar17 + 3) = uVar9;
  *(undefined4 *)((long)puVar17 + 0x1c) = uVar10;
  puVar17[4] = uVar11;
  puVar17[5] = uVar12;
  puVar17[6] = uVar13;
  puVar17[7] = uVar14;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<embree::PrimRefMB*,
   __gnu_cxx::__ops::_Val_less_iter>(embree::PrimRefMB*, __gnu_cxx::__ops::_Val_less_iter) [clone
   .isra.0] */

void std::__unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
               (undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  
  uVar1 = *(undefined4 *)((long)param_1 + 0x1c);
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  uVar3 = param_1[8];
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  uVar10 = *param_1;
  uVar11 = param_1[1];
  uVar14 = CONCAT44(*(undefined4 *)((long)param_1 + -0x34),*(undefined4 *)((long)param_1 + -0x44));
  puVar13 = param_1 + -10;
  while (puVar12 = puVar13, CONCAT44(uVar1,uVar2) < uVar14) {
    puVar12[10] = *puVar12;
    puVar12[0xb] = puVar12[1];
    *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(puVar12 + 8);
    puVar12[0xc] = puVar12[2];
    puVar12[0xd] = puVar12[3];
    puVar12[0xe] = puVar12[4];
    puVar12[0xf] = puVar12[5];
    puVar12[0x10] = puVar12[6];
    puVar12[0x11] = puVar12[7];
    *(undefined4 *)((long)puVar12 + 0x94) = *(undefined4 *)((long)puVar12 + 0x44);
    puVar13 = puVar12 + -10;
    param_1 = puVar12;
    uVar14 = CONCAT44(*(undefined4 *)((long)puVar12 + -0x34),*(undefined4 *)((long)puVar12 + -0x44))
    ;
  }
  param_1[8] = uVar3;
  *param_1 = uVar10;
  param_1[1] = uVar11;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<embree::PrimRefMB*,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::PrimRefMB*, embree::PrimRefMB*,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if ((param_1 != param_2) && (puVar13 = param_1 + 10, param_2 != puVar13)) {
    do {
      puVar14 = puVar13 + 10;
      if (CONCAT44(*(undefined4 *)((long)puVar13 + 0x1c),*(undefined4 *)((long)puVar13 + 0xc)) <
          CONCAT44(*(undefined4 *)((long)param_1 + 0x1c),*(undefined4 *)((long)param_1 + 0xc))) {
        uVar3 = *puVar13;
        uVar4 = puVar13[1];
        uVar5 = puVar13[2];
        uVar6 = puVar13[3];
        uVar7 = puVar13[4];
        uVar8 = puVar13[5];
        uVar9 = puVar13[6];
        uVar10 = puVar13[7];
        uVar1 = *(undefined4 *)(puVar13 + 8);
        uVar2 = *(undefined4 *)((long)puVar13 + 0x44);
        if (0 < (long)puVar13 - (long)param_1) {
          puVar11 = puVar13;
          do {
            puVar12 = puVar11 + -10;
            *puVar11 = puVar11[-10];
            puVar11[1] = puVar11[-9];
            puVar11[4] = puVar11[-6];
            puVar11[5] = puVar11[-5];
            puVar11[2] = puVar11[-8];
            puVar11[3] = puVar11[-7];
            *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(puVar11 + -2);
            puVar11[6] = puVar11[-4];
            puVar11[7] = puVar11[-3];
            *(undefined4 *)((long)puVar11 + 0x44) = *(undefined4 *)((long)puVar11 + -0xc);
            puVar11 = puVar12;
          } while (puVar12 != puVar13 + ((long)puVar13 - (long)param_1 >> 4) * -2);
        }
        *param_1 = uVar3;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        param_1[3] = uVar6;
        param_1[4] = uVar7;
        param_1[5] = uVar8;
        param_1[6] = uVar9;
        param_1[7] = uVar10;
        *(undefined4 *)(param_1 + 8) = uVar1;
        *(undefined4 *)((long)param_1 + 0x44) = uVar2;
      }
      else {
        __unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>();
      }
      puVar13 = puVar14;
    } while (param_2 != puVar14);
    return;
  }
  return;
}



/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::splitFallback(embree::SetMB const&,
   embree::SetMB&, embree::SetMB&) [clone .isra.0] */

void embree::sse2::BVHBuilderMSMBlur::
     BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
     ::splitFallback(SetMB *param_1,SetMB *param_2,SetMB *param_3)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  float local_68;
  float local_44;
  
  uVar3 = *(ulong *)(param_1 + 0x60);
  uVar4 = *(ulong *)(param_1 + 0x68);
  lVar5 = *(long *)(param_1 + 0x90);
  uVar8 = uVar3 + 1 + uVar4 >> 1;
  fVar13 = _LC3;
  fVar19 = _LC3;
  if (uVar3 < uVar8) {
    lVar9 = 0;
    pauVar6 = (undefined1 (*) [16])(uVar3 * 0x50 + *(long *)(lVar5 + 0x20));
    uVar11 = 0;
    uVar15 = CONCAT44(_LC8,_LC8);
    auVar23._8_4_ = _LC8;
    auVar23._0_8_ = uVar15;
    auVar23._12_4_ = _LC8;
    uVar17 = CONCAT44(_LC10,_LC10);
    auVar25._8_4_ = _LC8;
    auVar25._0_8_ = uVar15;
    auVar25._12_4_ = _LC8;
    auVar24._8_4_ = _LC10;
    auVar24._0_8_ = uVar17;
    auVar24._12_4_ = _LC10;
    auVar27._8_4_ = _LC10;
    auVar27._0_8_ = uVar17;
    auVar27._12_4_ = _LC10;
    auVar28._8_4_ = _LC8;
    auVar28._0_8_ = uVar15;
    auVar28._12_4_ = _LC8;
    auVar29._8_4_ = _LC10;
    auVar29._0_8_ = uVar17;
    auVar29._12_4_ = _LC10;
    fVar31 = 0.0;
    fVar14 = 0.0;
    do {
      auVar29 = minps(auVar29,*pauVar6);
      auVar28 = maxps(auVar28,pauVar6[1]);
      auVar27 = minps(auVar27,pauVar6[2]);
      auVar25 = maxps(auVar25,pauVar6[3]);
      lVar9 = lVar9 + (ulong)*(uint *)(pauVar6[2] + 0xc);
      fVar12 = *(float *)(pauVar6[4] + 4);
      auVar21._0_4_ =
           *(float *)pauVar6[3] * _LC12 + *(float *)pauVar6[1] * _LC12 +
           *(float *)pauVar6[2] * _LC12 + *(float *)*pauVar6 * _LC12;
      auVar21._4_4_ =
           *(float *)(pauVar6[3] + 4) * _LC12 + *(float *)(pauVar6[1] + 4) * _LC12 +
           *(float *)(pauVar6[2] + 4) * _LC12 + *(float *)(*pauVar6 + 4) * _LC12;
      auVar21._8_4_ =
           *(float *)(pauVar6[3] + 8) * _LC12 + *(float *)(pauVar6[1] + 8) * _LC12 +
           *(float *)(pauVar6[2] + 8) * _LC12 + *(float *)(*pauVar6 + 8) * _LC12;
      auVar21._12_4_ =
           *(float *)(pauVar6[3] + 0xc) * _LC12 + *(float *)(pauVar6[1] + 0xc) * _LC12 +
           *(float *)(pauVar6[2] + 0xc) * _LC12 + *(float *)(*pauVar6 + 0xc) * _LC12;
      fVar30 = fVar12;
      if (fVar12 <= fVar14) {
        fVar30 = fVar14;
      }
      auVar24 = minps(auVar24,auVar21);
      auVar23 = maxps(auVar23,auVar21);
      fVar14 = *(float *)pauVar6[4];
      if (fVar14 <= fVar19) {
        fVar19 = fVar14;
      }
      if (uVar11 < *(uint *)(pauVar6[3] + 0xc)) {
        uVar11 = (ulong)*(uint *)(pauVar6[3] + 0xc);
        fVar31 = fVar14;
        fVar13 = fVar12;
      }
      pauVar6 = pauVar6 + 5;
      fVar14 = fVar30;
    } while ((undefined1 (*) [16])(*(long *)(lVar5 + 0x20) + uVar8 * 0x50) != pauVar6);
  }
  else {
    fVar30 = 0.0;
    uVar11 = 0;
    lVar9 = 0;
    fVar31 = 0.0;
    uVar15 = CONCAT44(_LC8,_LC8);
    uVar17 = CONCAT44(_LC10,_LC10);
    auVar23._8_4_ = _LC8;
    auVar23._0_8_ = uVar15;
    auVar23._12_4_ = _LC8;
    auVar24._8_4_ = _LC10;
    auVar24._0_8_ = uVar17;
    auVar24._12_4_ = _LC10;
    auVar25._8_4_ = _LC8;
    auVar25._0_8_ = uVar15;
    auVar25._12_4_ = _LC8;
    auVar27._8_4_ = _LC10;
    auVar27._0_8_ = uVar17;
    auVar27._12_4_ = _LC10;
    auVar28._8_4_ = _LC8;
    auVar28._0_8_ = uVar15;
    auVar28._12_4_ = _LC8;
    auVar29._8_4_ = _LC10;
    auVar29._0_8_ = uVar17;
    auVar29._12_4_ = _LC10;
  }
  auVar18._4_4_ = _LC10;
  auVar18._0_4_ = _LC10;
  auVar16._4_4_ = _LC8;
  auVar16._0_4_ = _LC8;
  auVar18._8_4_ = _LC10;
  auVar16._8_4_ = _LC8;
  auVar18._12_4_ = _LC10;
  auVar16._12_4_ = _LC8;
  auVar21 = auVar16;
  auVar22 = auVar18;
  local_88 = auVar18;
  local_78 = auVar16;
  fVar14 = _LC3;
  if (uVar8 < uVar4) {
    fVar12 = 0.0;
    lVar7 = 0;
    pauVar6 = (undefined1 (*) [16])(uVar8 * 0x50 + *(long *)(lVar5 + 0x20));
    uVar10 = 0;
    local_44 = _LC3;
    fVar20 = 0.0;
    do {
      local_88 = minps(local_88,*pauVar6);
      local_78 = maxps(local_78,pauVar6[1]);
      auVar22 = minps(auVar22,pauVar6[2]);
      auVar21 = maxps(auVar21,pauVar6[3]);
      lVar7 = lVar7 + (ulong)*(uint *)(pauVar6[2] + 0xc);
      fVar1 = *(float *)pauVar6[4];
      if (fVar1 <= fVar14) {
        fVar14 = fVar1;
      }
      auVar26._0_4_ =
           *(float *)pauVar6[3] * _LC12 + *(float *)pauVar6[1] * _LC12 +
           *(float *)pauVar6[2] * _LC12 + *(float *)*pauVar6 * _LC12;
      auVar26._4_4_ =
           *(float *)(pauVar6[3] + 4) * _LC12 + *(float *)(pauVar6[1] + 4) * _LC12 +
           *(float *)(pauVar6[2] + 4) * _LC12 + *(float *)(*pauVar6 + 4) * _LC12;
      auVar26._8_4_ =
           *(float *)(pauVar6[3] + 8) * _LC12 + *(float *)(pauVar6[1] + 8) * _LC12 +
           *(float *)(pauVar6[2] + 8) * _LC12 + *(float *)(*pauVar6 + 8) * _LC12;
      auVar26._12_4_ =
           *(float *)(pauVar6[3] + 0xc) * _LC12 + *(float *)(pauVar6[1] + 0xc) * _LC12 +
           *(float *)(pauVar6[2] + 0xc) * _LC12 + *(float *)(*pauVar6 + 0xc) * _LC12;
      auVar18 = minps(auVar18,auVar26);
      auVar16 = maxps(auVar16,auVar26);
      fVar2 = *(float *)(pauVar6[4] + 4);
      local_68 = fVar2;
      if (fVar2 <= fVar20) {
        local_68 = fVar20;
      }
      if (uVar10 < *(uint *)(pauVar6[3] + 0xc)) {
        uVar10 = (ulong)*(uint *)(pauVar6[3] + 0xc);
        local_44 = fVar2;
        fVar12 = fVar1;
      }
      pauVar6 = pauVar6 + 5;
      fVar20 = local_68;
    } while ((undefined1 (*) [16])(*(long *)(lVar5 + 0x20) + uVar4 * 0x50) != pauVar6);
  }
  else {
    local_44 = _LC3;
    local_68 = 0.0;
    fVar12 = 0.0;
    uVar10 = 0;
    lVar7 = 0;
  }
  fVar1 = *(float *)(param_1 + 0x88);
  fVar20 = *(float *)(param_1 + 0x8c);
  *(float *)(param_2 + 0x84) = fVar13;
  *(long *)(param_2 + 0x90) = lVar5;
  if (fVar20 <= fVar30) {
    fVar30 = fVar20;
  }
  *(ulong *)(param_2 + 0x60) = uVar3;
  if (fVar1 <= fVar19) {
    fVar1 = fVar19;
  }
  *(ulong *)(param_2 + 0x68) = uVar8;
  *(long *)(param_2 + 0x70) = lVar9;
  *(ulong *)(param_2 + 0x78) = uVar11;
  *(float *)(param_2 + 0x88) = fVar1;
  *(undefined1 (*) [16])param_2 = auVar29;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar28;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar27;
  *(undefined1 (*) [16])(param_2 + 0x30) = auVar25;
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar24;
  *(undefined1 (*) [16])(param_2 + 0x50) = auVar23;
  *(float *)(param_2 + 0x80) = fVar31;
  *(float *)(param_2 + 0x8c) = fVar30;
  uVar15 = *(undefined8 *)(param_1 + 0x90);
  fVar13 = *(float *)(param_1 + 0x88);
  fVar19 = *(float *)(param_1 + 0x8c);
  *(undefined8 *)param_3 = local_88._0_8_;
  *(undefined8 *)(param_3 + 8) = local_88._8_8_;
  *(float *)(param_3 + 0x80) = fVar12;
  if (fVar13 <= fVar14) {
    fVar13 = fVar14;
  }
  *(undefined8 *)(param_3 + 0x10) = local_78._0_8_;
  *(undefined8 *)(param_3 + 0x18) = local_78._8_8_;
  *(long *)(param_3 + 0x70) = lVar7;
  *(ulong *)(param_3 + 0x78) = uVar10;
  *(undefined1 (*) [16])(param_3 + 0x20) = auVar22;
  *(undefined1 (*) [16])(param_3 + 0x30) = auVar21;
  *(undefined1 (*) [16])(param_3 + 0x40) = auVar18;
  *(undefined1 (*) [16])(param_3 + 0x50) = auVar16;
  *(float *)(param_3 + 0x84) = local_44;
  *(ulong *)(param_3 + 0x60) = uVar8;
  if (fVar19 <= local_68) {
    local_68 = fVar19;
  }
  *(ulong *)(param_3 + 0x68) = uVar4;
  *(undefined8 *)(param_3 + 0x90) = uVar15;
  *(float *)(param_3 + 0x88) = fVar13;
  *(float *)(param_3 + 0x8c) = local_68;
  return;
}



/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::splitFallback(embree::SetMB const&,
   embree::SetMB&, embree::SetMB&) [clone .isra.0] */

void embree::sse2::BVHBuilderMSMBlur::
     BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
     ::splitFallback(SetMB *param_1,SetMB *param_2,SetMB *param_3)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  float local_68;
  float local_44;
  
  uVar3 = *(ulong *)(param_1 + 0x60);
  uVar4 = *(ulong *)(param_1 + 0x68);
  lVar5 = *(long *)(param_1 + 0x90);
  uVar8 = uVar3 + 1 + uVar4 >> 1;
  fVar13 = _LC3;
  fVar19 = _LC3;
  if (uVar3 < uVar8) {
    lVar9 = 0;
    pauVar6 = (undefined1 (*) [16])(uVar3 * 0x50 + *(long *)(lVar5 + 0x20));
    uVar11 = 0;
    uVar15 = CONCAT44(_LC8,_LC8);
    auVar23._8_4_ = _LC8;
    auVar23._0_8_ = uVar15;
    auVar23._12_4_ = _LC8;
    uVar17 = CONCAT44(_LC10,_LC10);
    auVar25._8_4_ = _LC8;
    auVar25._0_8_ = uVar15;
    auVar25._12_4_ = _LC8;
    auVar24._8_4_ = _LC10;
    auVar24._0_8_ = uVar17;
    auVar24._12_4_ = _LC10;
    auVar27._8_4_ = _LC10;
    auVar27._0_8_ = uVar17;
    auVar27._12_4_ = _LC10;
    auVar28._8_4_ = _LC8;
    auVar28._0_8_ = uVar15;
    auVar28._12_4_ = _LC8;
    auVar29._8_4_ = _LC10;
    auVar29._0_8_ = uVar17;
    auVar29._12_4_ = _LC10;
    fVar31 = 0.0;
    fVar14 = 0.0;
    do {
      auVar29 = minps(auVar29,*pauVar6);
      auVar28 = maxps(auVar28,pauVar6[1]);
      auVar27 = minps(auVar27,pauVar6[2]);
      auVar25 = maxps(auVar25,pauVar6[3]);
      lVar9 = lVar9 + (ulong)*(uint *)(pauVar6[2] + 0xc);
      fVar12 = *(float *)(pauVar6[4] + 4);
      auVar21._0_4_ =
           *(float *)pauVar6[3] * _LC12 + *(float *)pauVar6[1] * _LC12 +
           *(float *)pauVar6[2] * _LC12 + *(float *)*pauVar6 * _LC12;
      auVar21._4_4_ =
           *(float *)(pauVar6[3] + 4) * _LC12 + *(float *)(pauVar6[1] + 4) * _LC12 +
           *(float *)(pauVar6[2] + 4) * _LC12 + *(float *)(*pauVar6 + 4) * _LC12;
      auVar21._8_4_ =
           *(float *)(pauVar6[3] + 8) * _LC12 + *(float *)(pauVar6[1] + 8) * _LC12 +
           *(float *)(pauVar6[2] + 8) * _LC12 + *(float *)(*pauVar6 + 8) * _LC12;
      auVar21._12_4_ =
           *(float *)(pauVar6[3] + 0xc) * _LC12 + *(float *)(pauVar6[1] + 0xc) * _LC12 +
           *(float *)(pauVar6[2] + 0xc) * _LC12 + *(float *)(*pauVar6 + 0xc) * _LC12;
      fVar30 = fVar12;
      if (fVar12 <= fVar14) {
        fVar30 = fVar14;
      }
      auVar24 = minps(auVar24,auVar21);
      auVar23 = maxps(auVar23,auVar21);
      fVar14 = *(float *)pauVar6[4];
      if (fVar14 <= fVar19) {
        fVar19 = fVar14;
      }
      if (uVar11 < *(uint *)(pauVar6[3] + 0xc)) {
        uVar11 = (ulong)*(uint *)(pauVar6[3] + 0xc);
        fVar31 = fVar14;
        fVar13 = fVar12;
      }
      pauVar6 = pauVar6 + 5;
      fVar14 = fVar30;
    } while ((undefined1 (*) [16])(*(long *)(lVar5 + 0x20) + uVar8 * 0x50) != pauVar6);
  }
  else {
    fVar30 = 0.0;
    uVar11 = 0;
    lVar9 = 0;
    fVar31 = 0.0;
    uVar15 = CONCAT44(_LC8,_LC8);
    uVar17 = CONCAT44(_LC10,_LC10);
    auVar23._8_4_ = _LC8;
    auVar23._0_8_ = uVar15;
    auVar23._12_4_ = _LC8;
    auVar24._8_4_ = _LC10;
    auVar24._0_8_ = uVar17;
    auVar24._12_4_ = _LC10;
    auVar25._8_4_ = _LC8;
    auVar25._0_8_ = uVar15;
    auVar25._12_4_ = _LC8;
    auVar27._8_4_ = _LC10;
    auVar27._0_8_ = uVar17;
    auVar27._12_4_ = _LC10;
    auVar28._8_4_ = _LC8;
    auVar28._0_8_ = uVar15;
    auVar28._12_4_ = _LC8;
    auVar29._8_4_ = _LC10;
    auVar29._0_8_ = uVar17;
    auVar29._12_4_ = _LC10;
  }
  auVar18._4_4_ = _LC10;
  auVar18._0_4_ = _LC10;
  auVar16._4_4_ = _LC8;
  auVar16._0_4_ = _LC8;
  auVar18._8_4_ = _LC10;
  auVar16._8_4_ = _LC8;
  auVar18._12_4_ = _LC10;
  auVar16._12_4_ = _LC8;
  auVar21 = auVar16;
  auVar22 = auVar18;
  local_88 = auVar18;
  local_78 = auVar16;
  fVar14 = _LC3;
  if (uVar8 < uVar4) {
    fVar12 = 0.0;
    lVar7 = 0;
    pauVar6 = (undefined1 (*) [16])(uVar8 * 0x50 + *(long *)(lVar5 + 0x20));
    uVar10 = 0;
    local_44 = _LC3;
    fVar20 = 0.0;
    do {
      local_88 = minps(local_88,*pauVar6);
      local_78 = maxps(local_78,pauVar6[1]);
      auVar22 = minps(auVar22,pauVar6[2]);
      auVar21 = maxps(auVar21,pauVar6[3]);
      lVar7 = lVar7 + (ulong)*(uint *)(pauVar6[2] + 0xc);
      fVar1 = *(float *)pauVar6[4];
      if (fVar1 <= fVar14) {
        fVar14 = fVar1;
      }
      auVar26._0_4_ =
           *(float *)pauVar6[3] * _LC12 + *(float *)pauVar6[1] * _LC12 +
           *(float *)pauVar6[2] * _LC12 + *(float *)*pauVar6 * _LC12;
      auVar26._4_4_ =
           *(float *)(pauVar6[3] + 4) * _LC12 + *(float *)(pauVar6[1] + 4) * _LC12 +
           *(float *)(pauVar6[2] + 4) * _LC12 + *(float *)(*pauVar6 + 4) * _LC12;
      auVar26._8_4_ =
           *(float *)(pauVar6[3] + 8) * _LC12 + *(float *)(pauVar6[1] + 8) * _LC12 +
           *(float *)(pauVar6[2] + 8) * _LC12 + *(float *)(*pauVar6 + 8) * _LC12;
      auVar26._12_4_ =
           *(float *)(pauVar6[3] + 0xc) * _LC12 + *(float *)(pauVar6[1] + 0xc) * _LC12 +
           *(float *)(pauVar6[2] + 0xc) * _LC12 + *(float *)(*pauVar6 + 0xc) * _LC12;
      auVar18 = minps(auVar18,auVar26);
      auVar16 = maxps(auVar16,auVar26);
      fVar2 = *(float *)(pauVar6[4] + 4);
      local_68 = fVar2;
      if (fVar2 <= fVar20) {
        local_68 = fVar20;
      }
      if (uVar10 < *(uint *)(pauVar6[3] + 0xc)) {
        uVar10 = (ulong)*(uint *)(pauVar6[3] + 0xc);
        local_44 = fVar2;
        fVar12 = fVar1;
      }
      pauVar6 = pauVar6 + 5;
      fVar20 = local_68;
    } while ((undefined1 (*) [16])(*(long *)(lVar5 + 0x20) + uVar4 * 0x50) != pauVar6);
  }
  else {
    local_44 = _LC3;
    local_68 = 0.0;
    fVar12 = 0.0;
    uVar10 = 0;
    lVar7 = 0;
  }
  fVar1 = *(float *)(param_1 + 0x88);
  fVar20 = *(float *)(param_1 + 0x8c);
  *(float *)(param_2 + 0x84) = fVar13;
  *(long *)(param_2 + 0x90) = lVar5;
  if (fVar20 <= fVar30) {
    fVar30 = fVar20;
  }
  *(ulong *)(param_2 + 0x60) = uVar3;
  if (fVar1 <= fVar19) {
    fVar1 = fVar19;
  }
  *(ulong *)(param_2 + 0x68) = uVar8;
  *(long *)(param_2 + 0x70) = lVar9;
  *(ulong *)(param_2 + 0x78) = uVar11;
  *(float *)(param_2 + 0x88) = fVar1;
  *(undefined1 (*) [16])param_2 = auVar29;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar28;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar27;
  *(undefined1 (*) [16])(param_2 + 0x30) = auVar25;
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar24;
  *(undefined1 (*) [16])(param_2 + 0x50) = auVar23;
  *(float *)(param_2 + 0x80) = fVar31;
  *(float *)(param_2 + 0x8c) = fVar30;
  uVar15 = *(undefined8 *)(param_1 + 0x90);
  fVar13 = *(float *)(param_1 + 0x88);
  fVar19 = *(float *)(param_1 + 0x8c);
  *(undefined8 *)param_3 = local_88._0_8_;
  *(undefined8 *)(param_3 + 8) = local_88._8_8_;
  *(float *)(param_3 + 0x80) = fVar12;
  if (fVar13 <= fVar14) {
    fVar13 = fVar14;
  }
  *(undefined8 *)(param_3 + 0x10) = local_78._0_8_;
  *(undefined8 *)(param_3 + 0x18) = local_78._8_8_;
  *(long *)(param_3 + 0x70) = lVar7;
  *(ulong *)(param_3 + 0x78) = uVar10;
  *(undefined1 (*) [16])(param_3 + 0x20) = auVar22;
  *(undefined1 (*) [16])(param_3 + 0x30) = auVar21;
  *(undefined1 (*) [16])(param_3 + 0x40) = auVar18;
  *(undefined1 (*) [16])(param_3 + 0x50) = auVar16;
  *(float *)(param_3 + 0x84) = local_44;
  *(ulong *)(param_3 + 0x60) = uVar8;
  if (fVar19 <= local_68) {
    local_68 = fVar19;
  }
  *(ulong *)(param_3 + 0x68) = uVar4;
  *(undefined8 *)(param_3 + 0x90) = uVar15;
  *(float *)(param_3 + 0x88) = fVar13;
  *(float *)(param_3 + 0x8c) = local_68;
  return;
}



/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::splitByGeometry(embree::SetMB const&,
   embree::SetMB&, embree::SetMB&) [clone .isra.0] */

void embree::sse2::BVHBuilderMSMBlur::
     BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
     ::splitByGeometry(SetMB *param_1,SetMB *param_2,SetMB *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  float local_118;
  float local_100;
  float local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_98;
  float local_94;
  
  fVar2 = _LC12;
  uVar25 = 0;
  fVar36 = 0.0;
  uVar26 = 0;
  lVar23 = 0;
  lVar8 = *(long *)(param_1 + 0x60);
  lVar9 = *(long *)(param_1 + 0x68);
  local_98 = 0.0;
  lVar24 = 0;
  lVar18 = *(long *)(*(long *)(param_1 + 0x90) + 0x20);
  local_94 = 0.0;
  pauVar17 = (undefined1 (*) [16])(lVar8 * 0x50 + lVar18);
  auVar31._0_8_ = CONCAT44(_LC8,_LC8);
  auVar31._8_4_ = _LC8;
  auVar31._12_4_ = _LC8;
  auVar32._0_8_ = CONCAT44(_LC10,_LC10);
  auVar32._8_4_ = _LC10;
  auVar32._12_4_ = _LC10;
  iVar7 = *(int *)(*pauVar17 + 0xc);
  local_100 = 0.0;
  auVar42._8_4_ = _LC8;
  auVar42._0_8_ = auVar31._0_8_;
  auVar42._12_4_ = _LC8;
  auVar34._8_4_ = _LC8;
  auVar34._0_8_ = auVar31._0_8_;
  auVar34._12_4_ = _LC8;
  auVar35._8_4_ = _LC10;
  auVar35._0_8_ = auVar32._0_8_;
  auVar35._12_4_ = _LC10;
  pauVar21 = (undefined1 (*) [16])(lVar18 + -0x50 + lVar9 * 0x50);
  auVar41._8_4_ = _LC10;
  auVar41._0_8_ = auVar32._0_8_;
  auVar41._12_4_ = _LC10;
  local_118 = _LC3;
  local_fc = _LC3;
  fVar30 = _LC3;
  fVar33 = _LC3;
  local_148 = auVar32;
  local_138 = auVar31;
  local_128 = auVar31;
  local_f8 = auVar31;
  local_e8 = auVar32;
  local_d8 = auVar32;
  for (; pauVar17 <= pauVar21; pauVar17 = pauVar17 + 5) {
    pauVar22 = pauVar21;
    if (iVar7 == *(int *)(*pauVar17 + 0xc)) {
      uVar19 = *(uint *)(pauVar17[2] + 0xc);
      auVar41 = minps(auVar41,*pauVar17);
      auVar28._0_4_ =
           *(float *)pauVar17[3] * fVar2 + *(float *)pauVar17[1] * fVar2 +
           *(float *)pauVar17[2] * fVar2 + *(float *)*pauVar17 * fVar2;
      auVar28._4_4_ =
           *(float *)(pauVar17[3] + 4) * fVar2 + *(float *)(pauVar17[1] + 4) * fVar2 +
           *(float *)(pauVar17[2] + 4) * fVar2 + *(float *)(*pauVar17 + 4) * fVar2;
      auVar28._8_4_ =
           *(float *)(pauVar17[3] + 8) * fVar2 + *(float *)(pauVar17[1] + 8) * fVar2 +
           *(float *)(pauVar17[2] + 8) * fVar2 + *(float *)(*pauVar17 + 8) * fVar2;
      auVar28._12_4_ =
           *(float *)(pauVar17[3] + 0xc) * fVar2 + *(float *)(pauVar17[1] + 0xc) * fVar2 +
           *(float *)(pauVar17[2] + 0xc) * fVar2 + *(float *)(*pauVar17 + 0xc) * fVar2;
      local_138 = maxps(local_138,pauVar17[1]);
      local_148 = minps(local_148,pauVar17[2]);
      auVar35 = minps(auVar35,auVar28);
      auVar34 = maxps(auVar34,auVar28);
      fVar1 = *(float *)pauVar17[4];
      local_128 = maxps(local_128,pauVar17[3]);
      if (fVar1 <= fVar33) {
        fVar33 = fVar1;
      }
      fVar27 = *(float *)(pauVar17[4] + 4);
      fVar40 = fVar27;
      if (fVar27 <= local_100) {
        fVar40 = local_100;
      }
      local_100 = fVar40;
      if (uVar26 < *(uint *)(pauVar17[3] + 0xc)) {
        uVar26 = (ulong)*(uint *)(pauVar17[3] + 0xc);
        fVar36 = fVar1;
        local_118 = fVar27;
      }
    }
    else {
      while( true ) {
        auVar4 = pauVar22[1];
        auVar28 = pauVar22[3];
        auVar5 = *pauVar22;
        auVar6 = pauVar22[2];
        auVar29._0_8_ =
             CONCAT44(auVar5._4_4_ * fVar2 + auVar6._4_4_ * fVar2 +
                      auVar28._4_4_ * fVar2 + auVar4._4_4_ * fVar2,
                      auVar5._0_4_ * fVar2 + auVar6._0_4_ * fVar2 +
                      auVar28._0_4_ * fVar2 + auVar4._0_4_ * fVar2);
        auVar29._8_4_ =
             auVar5._8_4_ * fVar2 + auVar6._8_4_ * fVar2 +
             auVar28._8_4_ * fVar2 + auVar4._8_4_ * fVar2;
        auVar29._12_4_ =
             auVar5._12_4_ * fVar2 + auVar6._12_4_ * fVar2 +
             auVar28._12_4_ * fVar2 + auVar4._12_4_ * fVar2;
        fVar1 = *(float *)pauVar22[4];
        if (iVar7 == *(int *)(*pauVar22 + 0xc)) break;
        local_d8 = minps(local_d8,auVar5);
        fVar27 = *(float *)(pauVar22[4] + 4);
        auVar32 = minps(auVar32,auVar29);
        auVar31 = maxps(auVar31,auVar29);
        local_f8 = maxps(local_f8,auVar4);
        local_e8 = minps(local_e8,auVar6);
        auVar42 = maxps(auVar42,auVar28);
        lVar23 = lVar23 + (ulong)*(uint *)(pauVar22[2] + 0xc);
        fVar40 = fVar27;
        if (fVar27 <= local_98) {
          fVar40 = local_98;
        }
        if (fVar1 <= fVar30) {
          fVar30 = fVar1;
        }
        if (uVar25 < *(uint *)(pauVar22[3] + 0xc)) {
          uVar25 = (ulong)*(uint *)(pauVar22[3] + 0xc);
          local_fc = fVar27;
          local_94 = fVar1;
        }
        pauVar22 = pauVar22 + -5;
        local_98 = fVar40;
        if (pauVar22 < pauVar17) goto LAB_00100df1;
      }
      uVar19 = *(uint *)(pauVar22[2] + 0xc);
      auVar41 = minps(auVar41,auVar5);
      if (fVar1 <= fVar33) {
        fVar33 = fVar1;
      }
      auVar12._8_4_ = auVar29._8_4_;
      auVar12._0_8_ = auVar29._0_8_;
      auVar12._12_4_ = auVar29._12_4_;
      auVar34 = maxps(auVar34,auVar12);
      local_138 = maxps(local_138,auVar4);
      fVar27 = *(float *)(pauVar22[4] + 4);
      auVar4._8_4_ = auVar29._8_4_;
      auVar4._0_8_ = auVar29._0_8_;
      auVar4._12_4_ = auVar29._12_4_;
      auVar35 = minps(auVar35,auVar4);
      fVar40 = fVar27;
      if (fVar27 <= local_100) {
        fVar40 = local_100;
      }
      local_148 = minps(local_148,auVar6);
      local_128 = maxps(local_128,auVar28);
      uVar20 = (ulong)*(uint *)(pauVar22[3] + 0xc);
      if (*(uint *)(pauVar22[3] + 0xc) <= uVar26) {
        uVar20 = uVar26;
        fVar27 = local_118;
        fVar1 = fVar36;
      }
      auVar4 = pauVar17[2];
      auVar28 = pauVar17[3];
      pauVar21 = pauVar17 + 1;
      uVar10 = *(undefined8 *)*pauVar21;
      uVar16 = *(undefined8 *)(pauVar17[1] + 8);
      auVar6 = *pauVar17;
      auVar42 = maxps(auVar42,auVar28);
      lVar23 = lVar23 + (ulong)*(uint *)(pauVar17[2] + 0xc);
      local_d8 = minps(local_d8,auVar6);
      fVar36 = auVar28._0_4_ * fVar2 + *(float *)*pauVar21 * fVar2 +
               auVar4._0_4_ * fVar2 + auVar6._0_4_ * fVar2;
      fVar37 = auVar28._4_4_ * fVar2 + *(float *)(pauVar17[1] + 4) * fVar2 +
               auVar4._4_4_ * fVar2 + auVar6._4_4_ * fVar2;
      fVar38 = auVar28._8_4_ * fVar2 + *(float *)(pauVar17[1] + 8) * fVar2 +
               auVar4._8_4_ * fVar2 + auVar6._8_4_ * fVar2;
      fVar39 = auVar28._12_4_ * fVar2 + *(float *)(pauVar17[1] + 0xc) * fVar2 +
               auVar4._12_4_ * fVar2 + auVar6._12_4_ * fVar2;
      fVar3 = *(float *)(pauVar17[4] + 4);
      local_f8 = maxps(local_f8,*pauVar21);
      auVar13._4_4_ = fVar37;
      auVar13._0_4_ = fVar36;
      auVar13._8_4_ = fVar38;
      auVar13._12_4_ = fVar39;
      auVar32 = minps(auVar32,auVar13);
      auVar14._4_4_ = fVar37;
      auVar14._0_4_ = fVar36;
      auVar14._8_4_ = fVar38;
      auVar14._12_4_ = fVar39;
      auVar31 = maxps(auVar31,auVar14);
      fVar37 = *(float *)pauVar17[4];
      if (fVar37 <= fVar30) {
        fVar30 = fVar37;
      }
      local_e8 = minps(local_e8,auVar4);
      fVar38 = fVar3;
      if (fVar3 <= local_98) {
        fVar38 = local_98;
      }
      uVar26 = (ulong)*(uint *)(pauVar17[3] + 0xc);
      if (*(uint *)(pauVar17[3] + 0xc) <= uVar25) {
        uVar26 = uVar25;
        fVar37 = local_94;
        fVar3 = local_fc;
      }
      uVar25 = uVar26;
      local_c8 = auVar5._0_8_;
      uStack_c0 = auVar5._8_8_;
      uVar11 = *(undefined8 *)pauVar17[4];
      pauVar21 = pauVar22 + -5;
      *(undefined8 *)*pauVar17 = local_c8;
      *(undefined8 *)(*pauVar17 + 8) = uStack_c0;
      uVar15 = *(undefined8 *)(pauVar22[1] + 8);
      *(undefined8 *)pauVar17[1] = *(undefined8 *)pauVar22[1];
      *(undefined8 *)(pauVar17[1] + 8) = uVar15;
      uVar15 = *(undefined8 *)(pauVar22[2] + 8);
      *(undefined8 *)pauVar17[2] = *(undefined8 *)pauVar22[2];
      *(undefined8 *)(pauVar17[2] + 8) = uVar15;
      uVar15 = *(undefined8 *)(pauVar22[3] + 8);
      *(undefined8 *)pauVar17[3] = *(undefined8 *)pauVar22[3];
      *(undefined8 *)(pauVar17[3] + 8) = uVar15;
      *(undefined4 *)pauVar17[4] = *(undefined4 *)pauVar22[4];
      *(undefined4 *)(pauVar17[4] + 4) = *(undefined4 *)(pauVar22[4] + 4);
      *(undefined8 *)pauVar22[4] = uVar11;
      *pauVar22 = auVar6;
      *(undefined8 *)pauVar22[1] = uVar10;
      *(undefined8 *)(pauVar22[1] + 8) = uVar16;
      pauVar22[2] = auVar4;
      pauVar22[3] = auVar28;
      uVar26 = uVar20;
      fVar36 = fVar1;
      local_118 = fVar27;
      local_100 = fVar40;
      local_fc = fVar3;
      local_98 = fVar38;
      local_94 = fVar37;
    }
    lVar24 = lVar24 + (ulong)uVar19;
  }
LAB_00100df1:
  fVar2 = *(float *)(param_1 + 0x8c);
  fVar1 = *(float *)(param_1 + 0x88);
  lVar18 = ((long)pauVar17 - lVar18 >> 4) * -0x3333333333333333;
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  *(undefined1 (*) [16])(param_2 + 0x50) = auVar34;
  *(undefined1 (*) [16])param_2 = auVar41;
  if (fVar1 <= fVar33) {
    fVar1 = fVar33;
  }
  if (fVar2 <= local_100) {
    local_100 = fVar2;
  }
  *(long *)(param_2 + 0x60) = lVar8;
  *(undefined8 *)(param_2 + 0x10) = local_138._0_8_;
  *(undefined8 *)(param_2 + 0x18) = local_138._8_8_;
  *(long *)(param_2 + 0x70) = lVar24;
  *(undefined8 *)(param_2 + 0x20) = local_148._0_8_;
  *(undefined8 *)(param_2 + 0x28) = local_148._8_8_;
  *(float *)(param_2 + 0x8c) = local_100;
  *(ulong *)(param_2 + 0x78) = uVar26;
  *(undefined8 *)(param_2 + 0x90) = uVar10;
  *(long *)(param_2 + 0x68) = lVar18;
  *(undefined8 *)(param_2 + 0x30) = local_128._0_8_;
  *(undefined8 *)(param_2 + 0x38) = local_128._8_8_;
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar35;
  *(float *)(param_2 + 0x80) = fVar36;
  *(float *)(param_2 + 0x84) = local_118;
  *(float *)(param_2 + 0x88) = fVar1;
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x88);
  fVar33 = *(float *)(param_1 + 0x8c);
  *(undefined8 *)param_3 = local_d8._0_8_;
  *(undefined8 *)(param_3 + 8) = local_d8._8_8_;
  *(undefined1 (*) [16])(param_3 + 0x30) = auVar42;
  if (fVar2 <= fVar30) {
    fVar2 = fVar30;
  }
  *(undefined8 *)(param_3 + 0x10) = local_f8._0_8_;
  *(undefined8 *)(param_3 + 0x18) = local_f8._8_8_;
  *(undefined8 *)(param_3 + 0x20) = local_e8._0_8_;
  *(undefined8 *)(param_3 + 0x28) = local_e8._8_8_;
  *(undefined1 (*) [16])(param_3 + 0x40) = auVar32;
  *(undefined1 (*) [16])(param_3 + 0x50) = auVar31;
  *(long *)(param_3 + 0x70) = lVar23;
  if (fVar33 <= local_98) {
    local_98 = fVar33;
  }
  *(ulong *)(param_3 + 0x78) = uVar25;
  *(float *)(param_3 + 0x84) = local_fc;
  *(undefined8 *)(param_3 + 0x90) = uVar10;
  *(long *)(param_3 + 0x60) = lVar18;
  *(long *)(param_3 + 0x68) = lVar9;
  *(float *)(param_3 + 0x80) = local_94;
  *(float *)(param_3 + 0x88) = fVar2;
  *(float *)(param_3 + 0x8c) = local_98;
  return;
}



/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::splitByGeometry(embree::SetMB const&,
   embree::SetMB&, embree::SetMB&) [clone .isra.0] */

void embree::sse2::BVHBuilderMSMBlur::
     BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
     ::splitByGeometry(SetMB *param_1,SetMB *param_2,SetMB *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  float local_118;
  float local_100;
  float local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_98;
  float local_94;
  
  fVar2 = _LC12;
  uVar25 = 0;
  fVar36 = 0.0;
  uVar26 = 0;
  lVar23 = 0;
  lVar8 = *(long *)(param_1 + 0x60);
  lVar9 = *(long *)(param_1 + 0x68);
  local_98 = 0.0;
  lVar24 = 0;
  lVar18 = *(long *)(*(long *)(param_1 + 0x90) + 0x20);
  local_94 = 0.0;
  pauVar17 = (undefined1 (*) [16])(lVar8 * 0x50 + lVar18);
  auVar31._0_8_ = CONCAT44(_LC8,_LC8);
  auVar31._8_4_ = _LC8;
  auVar31._12_4_ = _LC8;
  auVar32._0_8_ = CONCAT44(_LC10,_LC10);
  auVar32._8_4_ = _LC10;
  auVar32._12_4_ = _LC10;
  iVar7 = *(int *)(*pauVar17 + 0xc);
  local_100 = 0.0;
  auVar42._8_4_ = _LC8;
  auVar42._0_8_ = auVar31._0_8_;
  auVar42._12_4_ = _LC8;
  auVar34._8_4_ = _LC8;
  auVar34._0_8_ = auVar31._0_8_;
  auVar34._12_4_ = _LC8;
  auVar35._8_4_ = _LC10;
  auVar35._0_8_ = auVar32._0_8_;
  auVar35._12_4_ = _LC10;
  pauVar21 = (undefined1 (*) [16])(lVar18 + -0x50 + lVar9 * 0x50);
  auVar41._8_4_ = _LC10;
  auVar41._0_8_ = auVar32._0_8_;
  auVar41._12_4_ = _LC10;
  local_118 = _LC3;
  local_fc = _LC3;
  fVar30 = _LC3;
  fVar33 = _LC3;
  local_148 = auVar32;
  local_138 = auVar31;
  local_128 = auVar31;
  local_f8 = auVar31;
  local_e8 = auVar32;
  local_d8 = auVar32;
  for (; pauVar17 <= pauVar21; pauVar17 = pauVar17 + 5) {
    pauVar22 = pauVar21;
    if (iVar7 == *(int *)(*pauVar17 + 0xc)) {
      uVar19 = *(uint *)(pauVar17[2] + 0xc);
      auVar41 = minps(auVar41,*pauVar17);
      auVar28._0_4_ =
           *(float *)pauVar17[3] * fVar2 + *(float *)pauVar17[1] * fVar2 +
           *(float *)pauVar17[2] * fVar2 + *(float *)*pauVar17 * fVar2;
      auVar28._4_4_ =
           *(float *)(pauVar17[3] + 4) * fVar2 + *(float *)(pauVar17[1] + 4) * fVar2 +
           *(float *)(pauVar17[2] + 4) * fVar2 + *(float *)(*pauVar17 + 4) * fVar2;
      auVar28._8_4_ =
           *(float *)(pauVar17[3] + 8) * fVar2 + *(float *)(pauVar17[1] + 8) * fVar2 +
           *(float *)(pauVar17[2] + 8) * fVar2 + *(float *)(*pauVar17 + 8) * fVar2;
      auVar28._12_4_ =
           *(float *)(pauVar17[3] + 0xc) * fVar2 + *(float *)(pauVar17[1] + 0xc) * fVar2 +
           *(float *)(pauVar17[2] + 0xc) * fVar2 + *(float *)(*pauVar17 + 0xc) * fVar2;
      local_138 = maxps(local_138,pauVar17[1]);
      local_148 = minps(local_148,pauVar17[2]);
      auVar35 = minps(auVar35,auVar28);
      auVar34 = maxps(auVar34,auVar28);
      fVar1 = *(float *)pauVar17[4];
      local_128 = maxps(local_128,pauVar17[3]);
      if (fVar1 <= fVar33) {
        fVar33 = fVar1;
      }
      fVar27 = *(float *)(pauVar17[4] + 4);
      fVar40 = fVar27;
      if (fVar27 <= local_100) {
        fVar40 = local_100;
      }
      local_100 = fVar40;
      if (uVar26 < *(uint *)(pauVar17[3] + 0xc)) {
        uVar26 = (ulong)*(uint *)(pauVar17[3] + 0xc);
        fVar36 = fVar1;
        local_118 = fVar27;
      }
    }
    else {
      while( true ) {
        auVar4 = pauVar22[1];
        auVar28 = pauVar22[3];
        auVar5 = *pauVar22;
        auVar6 = pauVar22[2];
        auVar29._0_8_ =
             CONCAT44(auVar5._4_4_ * fVar2 + auVar6._4_4_ * fVar2 +
                      auVar28._4_4_ * fVar2 + auVar4._4_4_ * fVar2,
                      auVar5._0_4_ * fVar2 + auVar6._0_4_ * fVar2 +
                      auVar28._0_4_ * fVar2 + auVar4._0_4_ * fVar2);
        auVar29._8_4_ =
             auVar5._8_4_ * fVar2 + auVar6._8_4_ * fVar2 +
             auVar28._8_4_ * fVar2 + auVar4._8_4_ * fVar2;
        auVar29._12_4_ =
             auVar5._12_4_ * fVar2 + auVar6._12_4_ * fVar2 +
             auVar28._12_4_ * fVar2 + auVar4._12_4_ * fVar2;
        fVar1 = *(float *)pauVar22[4];
        if (iVar7 == *(int *)(*pauVar22 + 0xc)) break;
        local_d8 = minps(local_d8,auVar5);
        fVar27 = *(float *)(pauVar22[4] + 4);
        auVar32 = minps(auVar32,auVar29);
        auVar31 = maxps(auVar31,auVar29);
        local_f8 = maxps(local_f8,auVar4);
        local_e8 = minps(local_e8,auVar6);
        auVar42 = maxps(auVar42,auVar28);
        lVar23 = lVar23 + (ulong)*(uint *)(pauVar22[2] + 0xc);
        fVar40 = fVar27;
        if (fVar27 <= local_98) {
          fVar40 = local_98;
        }
        if (fVar1 <= fVar30) {
          fVar30 = fVar1;
        }
        if (uVar25 < *(uint *)(pauVar22[3] + 0xc)) {
          uVar25 = (ulong)*(uint *)(pauVar22[3] + 0xc);
          local_fc = fVar27;
          local_94 = fVar1;
        }
        pauVar22 = pauVar22 + -5;
        local_98 = fVar40;
        if (pauVar22 < pauVar17) goto LAB_00101431;
      }
      uVar19 = *(uint *)(pauVar22[2] + 0xc);
      auVar41 = minps(auVar41,auVar5);
      if (fVar1 <= fVar33) {
        fVar33 = fVar1;
      }
      auVar12._8_4_ = auVar29._8_4_;
      auVar12._0_8_ = auVar29._0_8_;
      auVar12._12_4_ = auVar29._12_4_;
      auVar34 = maxps(auVar34,auVar12);
      local_138 = maxps(local_138,auVar4);
      fVar27 = *(float *)(pauVar22[4] + 4);
      auVar4._8_4_ = auVar29._8_4_;
      auVar4._0_8_ = auVar29._0_8_;
      auVar4._12_4_ = auVar29._12_4_;
      auVar35 = minps(auVar35,auVar4);
      fVar40 = fVar27;
      if (fVar27 <= local_100) {
        fVar40 = local_100;
      }
      local_148 = minps(local_148,auVar6);
      local_128 = maxps(local_128,auVar28);
      uVar20 = (ulong)*(uint *)(pauVar22[3] + 0xc);
      if (*(uint *)(pauVar22[3] + 0xc) <= uVar26) {
        uVar20 = uVar26;
        fVar27 = local_118;
        fVar1 = fVar36;
      }
      auVar4 = pauVar17[2];
      auVar28 = pauVar17[3];
      pauVar21 = pauVar17 + 1;
      uVar10 = *(undefined8 *)*pauVar21;
      uVar16 = *(undefined8 *)(pauVar17[1] + 8);
      auVar6 = *pauVar17;
      auVar42 = maxps(auVar42,auVar28);
      lVar23 = lVar23 + (ulong)*(uint *)(pauVar17[2] + 0xc);
      local_d8 = minps(local_d8,auVar6);
      fVar36 = auVar28._0_4_ * fVar2 + *(float *)*pauVar21 * fVar2 +
               auVar4._0_4_ * fVar2 + auVar6._0_4_ * fVar2;
      fVar37 = auVar28._4_4_ * fVar2 + *(float *)(pauVar17[1] + 4) * fVar2 +
               auVar4._4_4_ * fVar2 + auVar6._4_4_ * fVar2;
      fVar38 = auVar28._8_4_ * fVar2 + *(float *)(pauVar17[1] + 8) * fVar2 +
               auVar4._8_4_ * fVar2 + auVar6._8_4_ * fVar2;
      fVar39 = auVar28._12_4_ * fVar2 + *(float *)(pauVar17[1] + 0xc) * fVar2 +
               auVar4._12_4_ * fVar2 + auVar6._12_4_ * fVar2;
      fVar3 = *(float *)(pauVar17[4] + 4);
      local_f8 = maxps(local_f8,*pauVar21);
      auVar13._4_4_ = fVar37;
      auVar13._0_4_ = fVar36;
      auVar13._8_4_ = fVar38;
      auVar13._12_4_ = fVar39;
      auVar32 = minps(auVar32,auVar13);
      auVar14._4_4_ = fVar37;
      auVar14._0_4_ = fVar36;
      auVar14._8_4_ = fVar38;
      auVar14._12_4_ = fVar39;
      auVar31 = maxps(auVar31,auVar14);
      fVar37 = *(float *)pauVar17[4];
      if (fVar37 <= fVar30) {
        fVar30 = fVar37;
      }
      local_e8 = minps(local_e8,auVar4);
      fVar38 = fVar3;
      if (fVar3 <= local_98) {
        fVar38 = local_98;
      }
      uVar26 = (ulong)*(uint *)(pauVar17[3] + 0xc);
      if (*(uint *)(pauVar17[3] + 0xc) <= uVar25) {
        uVar26 = uVar25;
        fVar37 = local_94;
        fVar3 = local_fc;
      }
      uVar25 = uVar26;
      local_c8 = auVar5._0_8_;
      uStack_c0 = auVar5._8_8_;
      uVar11 = *(undefined8 *)pauVar17[4];
      pauVar21 = pauVar22 + -5;
      *(undefined8 *)*pauVar17 = local_c8;
      *(undefined8 *)(*pauVar17 + 8) = uStack_c0;
      uVar15 = *(undefined8 *)(pauVar22[1] + 8);
      *(undefined8 *)pauVar17[1] = *(undefined8 *)pauVar22[1];
      *(undefined8 *)(pauVar17[1] + 8) = uVar15;
      uVar15 = *(undefined8 *)(pauVar22[2] + 8);
      *(undefined8 *)pauVar17[2] = *(undefined8 *)pauVar22[2];
      *(undefined8 *)(pauVar17[2] + 8) = uVar15;
      uVar15 = *(undefined8 *)(pauVar22[3] + 8);
      *(undefined8 *)pauVar17[3] = *(undefined8 *)pauVar22[3];
      *(undefined8 *)(pauVar17[3] + 8) = uVar15;
      *(undefined4 *)pauVar17[4] = *(undefined4 *)pauVar22[4];
      *(undefined4 *)(pauVar17[4] + 4) = *(undefined4 *)(pauVar22[4] + 4);
      *(undefined8 *)pauVar22[4] = uVar11;
      *pauVar22 = auVar6;
      *(undefined8 *)pauVar22[1] = uVar10;
      *(undefined8 *)(pauVar22[1] + 8) = uVar16;
      pauVar22[2] = auVar4;
      pauVar22[3] = auVar28;
      uVar26 = uVar20;
      fVar36 = fVar1;
      local_118 = fVar27;
      local_100 = fVar40;
      local_fc = fVar3;
      local_98 = fVar38;
      local_94 = fVar37;
    }
    lVar24 = lVar24 + (ulong)uVar19;
  }
LAB_00101431:
  fVar2 = *(float *)(param_1 + 0x8c);
  fVar1 = *(float *)(param_1 + 0x88);
  lVar18 = ((long)pauVar17 - lVar18 >> 4) * -0x3333333333333333;
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  *(undefined1 (*) [16])(param_2 + 0x50) = auVar34;
  *(undefined1 (*) [16])param_2 = auVar41;
  if (fVar1 <= fVar33) {
    fVar1 = fVar33;
  }
  if (fVar2 <= local_100) {
    local_100 = fVar2;
  }
  *(long *)(param_2 + 0x60) = lVar8;
  *(undefined8 *)(param_2 + 0x10) = local_138._0_8_;
  *(undefined8 *)(param_2 + 0x18) = local_138._8_8_;
  *(long *)(param_2 + 0x70) = lVar24;
  *(undefined8 *)(param_2 + 0x20) = local_148._0_8_;
  *(undefined8 *)(param_2 + 0x28) = local_148._8_8_;
  *(float *)(param_2 + 0x8c) = local_100;
  *(ulong *)(param_2 + 0x78) = uVar26;
  *(undefined8 *)(param_2 + 0x90) = uVar10;
  *(long *)(param_2 + 0x68) = lVar18;
  *(undefined8 *)(param_2 + 0x30) = local_128._0_8_;
  *(undefined8 *)(param_2 + 0x38) = local_128._8_8_;
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar35;
  *(float *)(param_2 + 0x80) = fVar36;
  *(float *)(param_2 + 0x84) = local_118;
  *(float *)(param_2 + 0x88) = fVar1;
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x88);
  fVar33 = *(float *)(param_1 + 0x8c);
  *(undefined8 *)param_3 = local_d8._0_8_;
  *(undefined8 *)(param_3 + 8) = local_d8._8_8_;
  *(undefined1 (*) [16])(param_3 + 0x30) = auVar42;
  if (fVar2 <= fVar30) {
    fVar2 = fVar30;
  }
  *(undefined8 *)(param_3 + 0x10) = local_f8._0_8_;
  *(undefined8 *)(param_3 + 0x18) = local_f8._8_8_;
  *(undefined8 *)(param_3 + 0x20) = local_e8._0_8_;
  *(undefined8 *)(param_3 + 0x28) = local_e8._8_8_;
  *(undefined1 (*) [16])(param_3 + 0x40) = auVar32;
  *(undefined1 (*) [16])(param_3 + 0x50) = auVar31;
  *(long *)(param_3 + 0x70) = lVar23;
  if (fVar33 <= local_98) {
    local_98 = fVar33;
  }
  *(ulong *)(param_3 + 0x78) = uVar25;
  *(float *)(param_3 + 0x84) = local_fc;
  *(undefined8 *)(param_3 + 0x90) = uVar10;
  *(long *)(param_3 + 0x60) = lVar18;
  *(long *)(param_3 + 0x68) = lVar9;
  *(float *)(param_3 + 0x80) = local_94;
  *(float *)(param_3 + 0x88) = fVar2;
  *(float *)(param_3 + 0x8c) = local_98;
  return;
}



/* embree::sse2::BVH4Triangle4iMBSceneBuilderSAH(void*, embree::Scene*, unsigned long) */

void embree::sse2::BVH4Triangle4iMBSceneBuilderSAH(void *param_1,Scene *param_2,ulong param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNBuilderMBlurSAH_00124798;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = 4;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  puVar1[6] = 4;
  puVar1[7] = 0x1c;
  puVar1[8] = 0x100000;
  return;
}



/* embree::sse2::BVH4Triangle4vMBSceneBuilderSAH(void*, embree::Scene*, unsigned long) */

void embree::sse2::BVH4Triangle4vMBSceneBuilderSAH(void *param_1,Scene *param_2,ulong param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNBuilderMBlurSAH_001247e0;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = 4;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  puVar1[6] = 4;
  puVar1[7] = 0x1c;
  puVar1[8] = 0x100000;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<embree::PrimRefMB*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::PrimRefMB*, embree::PrimRefMB*, long,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long in_FS_OFFSET;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar24 = (long)param_2 - (long)param_1;
  if (0x500 < lVar24) {
    puVar28 = param_1 + 10;
    puVar29 = param_2;
    if (param_3 != 0) {
      do {
        param_3 = param_3 + -1;
        uVar4 = *(undefined4 *)param_1;
        uVar5 = *(undefined4 *)((long)param_1 + 4);
        uVar6 = *(undefined4 *)(param_1 + 1);
        uVar7 = *(undefined4 *)((long)param_1 + 0xc);
        uVar8 = *(undefined4 *)(param_1 + 2);
        uVar9 = *(undefined4 *)((long)param_1 + 0x14);
        uVar10 = *(undefined4 *)(param_1 + 3);
        uVar11 = *(undefined4 *)((long)param_1 + 0x1c);
        uVar12 = *(undefined4 *)(param_1 + 4);
        uVar13 = *(undefined4 *)((long)param_1 + 0x24);
        uVar14 = *(undefined4 *)(param_1 + 5);
        uVar15 = *(undefined4 *)((long)param_1 + 0x2c);
        uVar26 = CONCAT44(*(undefined4 *)((long)param_1 + 0x6c),
                          *(undefined4 *)((long)param_1 + 0x5c));
        uVar16 = *(undefined4 *)(param_1 + 6);
        uVar17 = *(undefined4 *)((long)param_1 + 0x34);
        uVar18 = *(undefined4 *)(param_1 + 7);
        uVar19 = *(undefined4 *)((long)param_1 + 0x3c);
        uVar1 = *(undefined4 *)(param_1 + 8);
        uVar2 = *(undefined4 *)((long)param_1 + 0x44);
        puVar25 = param_1 + ((lVar24 >> 4) * -0x3333333333333333 >> 1) * 10;
        uVar27 = CONCAT44(*(undefined4 *)((long)puVar25 + 0x1c),*(undefined4 *)((long)puVar25 + 0xc)
                         );
        uVar30 = CONCAT44(*(undefined4 *)((long)puVar29 + -0x34),
                          *(undefined4 *)((long)puVar29 + -0x44));
        param_2 = puVar28;
        puVar31 = puVar29;
        if (uVar26 < uVar27) {
          if (uVar27 < uVar30) {
            uVar3 = puVar25[1];
            *param_1 = *puVar25;
            param_1[1] = uVar3;
            uVar3 = puVar25[3];
            param_1[2] = puVar25[2];
            param_1[3] = uVar3;
            uVar3 = puVar25[5];
            param_1[4] = puVar25[4];
            param_1[5] = uVar3;
            uVar3 = puVar25[7];
            param_1[6] = puVar25[6];
            param_1[7] = uVar3;
LAB_00101bdf:
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar25 + 8);
            *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)puVar25 + 0x44);
            *(undefined4 *)puVar25 = uVar4;
            *(undefined4 *)((long)puVar25 + 4) = uVar5;
            *(undefined4 *)(puVar25 + 1) = uVar6;
            *(undefined4 *)((long)puVar25 + 0xc) = uVar7;
            *(undefined4 *)(puVar25 + 2) = uVar8;
            *(undefined4 *)((long)puVar25 + 0x14) = uVar9;
            *(undefined4 *)(puVar25 + 3) = uVar10;
            *(undefined4 *)((long)puVar25 + 0x1c) = uVar11;
            *(undefined4 *)(puVar25 + 4) = uVar12;
            *(undefined4 *)((long)puVar25 + 0x24) = uVar13;
            *(undefined4 *)(puVar25 + 5) = uVar14;
            *(undefined4 *)((long)puVar25 + 0x2c) = uVar15;
            *(undefined4 *)(puVar25 + 6) = uVar16;
            *(undefined4 *)((long)puVar25 + 0x34) = uVar17;
            *(undefined4 *)(puVar25 + 7) = uVar18;
            *(undefined4 *)((long)puVar25 + 0x3c) = uVar19;
            *(undefined4 *)(puVar25 + 8) = uVar1;
            *(undefined4 *)((long)puVar25 + 0x44) = uVar2;
          }
          else {
            if (uVar30 <= uVar26) goto LAB_00101c13;
LAB_00101a58:
            uVar3 = puVar29[-9];
            *param_1 = puVar29[-10];
            param_1[1] = uVar3;
            uVar3 = puVar29[-7];
            param_1[2] = puVar29[-8];
            param_1[3] = uVar3;
            uVar3 = puVar29[-5];
            param_1[4] = puVar29[-6];
            param_1[5] = uVar3;
            uVar3 = puVar29[-3];
            param_1[6] = puVar29[-4];
            param_1[7] = uVar3;
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar29 + -2);
            *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)puVar29 + -0xc);
            *(undefined4 *)(puVar29 + -10) = uVar4;
            *(undefined4 *)((long)puVar29 + -0x4c) = uVar5;
            *(undefined4 *)(puVar29 + -9) = uVar6;
            *(undefined4 *)((long)puVar29 + -0x44) = uVar7;
            *(undefined4 *)(puVar29 + -8) = uVar8;
            *(undefined4 *)((long)puVar29 + -0x3c) = uVar9;
            *(undefined4 *)(puVar29 + -7) = uVar10;
            *(undefined4 *)((long)puVar29 + -0x34) = uVar11;
            *(undefined4 *)(puVar29 + -6) = uVar12;
            *(undefined4 *)((long)puVar29 + -0x2c) = uVar13;
            *(undefined4 *)(puVar29 + -5) = uVar14;
            *(undefined4 *)((long)puVar29 + -0x24) = uVar15;
            *(undefined4 *)(puVar29 + -4) = uVar16;
            *(undefined4 *)((long)puVar29 + -0x1c) = uVar17;
            *(undefined4 *)(puVar29 + -3) = uVar18;
            *(undefined4 *)((long)puVar29 + -0x14) = uVar19;
            *(undefined4 *)(puVar29 + -2) = uVar1;
            *(undefined4 *)((long)puVar29 + -0xc) = uVar2;
          }
        }
        else {
          if (uVar30 <= uVar26) {
            if (uVar27 < uVar30) goto LAB_00101a58;
            uVar3 = puVar25[1];
            *param_1 = *puVar25;
            param_1[1] = uVar3;
            uVar3 = puVar25[3];
            param_1[2] = puVar25[2];
            param_1[3] = uVar3;
            uVar3 = puVar25[5];
            param_1[4] = puVar25[4];
            param_1[5] = uVar3;
            uVar3 = puVar25[7];
            param_1[6] = puVar25[6];
            param_1[7] = uVar3;
            goto LAB_00101bdf;
          }
LAB_00101c13:
          uVar3 = param_1[10];
          uVar21 = param_1[0xb];
          uVar22 = param_1[0xc];
          uVar23 = param_1[0xd];
          *(undefined4 *)(param_1 + 10) = uVar4;
          *(undefined4 *)((long)param_1 + 0x54) = uVar5;
          *(undefined4 *)(param_1 + 0xb) = uVar6;
          *(undefined4 *)((long)param_1 + 0x5c) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = uVar8;
          *(undefined4 *)((long)param_1 + 100) = uVar9;
          *(undefined4 *)(param_1 + 0xd) = uVar10;
          *(undefined4 *)((long)param_1 + 0x6c) = uVar11;
          *param_1 = uVar3;
          param_1[1] = uVar21;
          param_1[2] = uVar22;
          param_1[3] = uVar23;
          param_1[8] = param_1[0x12];
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xe);
          *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_1 + 0x74);
          *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_1 + 0xf);
          *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_1 + 0x7c);
          param_1[6] = param_1[0x10];
          param_1[7] = param_1[0x11];
          *(undefined4 *)(param_1 + 0xe) = uVar12;
          *(undefined4 *)((long)param_1 + 0x74) = uVar13;
          *(undefined4 *)(param_1 + 0xf) = uVar14;
          *(undefined4 *)((long)param_1 + 0x7c) = uVar15;
          *(undefined4 *)(param_1 + 0x10) = uVar16;
          *(undefined4 *)((long)param_1 + 0x84) = uVar17;
          *(undefined4 *)(param_1 + 0x11) = uVar18;
          *(undefined4 *)((long)param_1 + 0x8c) = uVar19;
          *(undefined4 *)(param_1 + 0x12) = uVar1;
          *(undefined4 *)((long)param_1 + 0x94) = uVar2;
        }
        while( true ) {
          uVar26 = CONCAT44(*(undefined4 *)((long)param_1 + 0x1c),
                            *(undefined4 *)((long)param_1 + 0xc));
          for (; CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),*(undefined4 *)((long)param_2 + 0xc)
                         ) < uVar26; param_2 = param_2 + 10) {
          }
          uVar27 = CONCAT44(*(undefined4 *)((long)puVar31 + -0x34),
                            *(undefined4 *)((long)puVar31 + -0x44));
          while (puVar25 = puVar31 + -10, uVar26 < uVar27) {
            uVar27 = CONCAT44(*(undefined4 *)((long)puVar31 + -0x84),
                              *(undefined4 *)((long)puVar31 + -0x94));
            puVar31 = puVar25;
          }
          if (puVar25 <= param_2) break;
          uVar3 = puVar31[-9];
          uVar1 = *(undefined4 *)param_2;
          uVar2 = *(undefined4 *)((long)param_2 + 4);
          uVar4 = *(undefined4 *)(param_2 + 1);
          uVar5 = *(undefined4 *)((long)param_2 + 0xc);
          uVar6 = *(undefined4 *)(param_2 + 2);
          uVar7 = *(undefined4 *)((long)param_2 + 0x14);
          uVar8 = *(undefined4 *)(param_2 + 3);
          uVar9 = *(undefined4 *)((long)param_2 + 0x1c);
          uVar10 = *(undefined4 *)(param_2 + 4);
          uVar11 = *(undefined4 *)((long)param_2 + 0x24);
          uVar12 = *(undefined4 *)(param_2 + 5);
          uVar13 = *(undefined4 *)((long)param_2 + 0x2c);
          *param_2 = *puVar25;
          param_2[1] = uVar3;
          uVar14 = *(undefined4 *)((long)puVar31 + -0x3c);
          uVar15 = *(undefined4 *)(puVar31 + -7);
          uVar16 = *(undefined4 *)((long)puVar31 + -0x34);
          uVar17 = *(undefined4 *)(param_2 + 6);
          uVar18 = *(undefined4 *)((long)param_2 + 0x34);
          uVar19 = *(undefined4 *)(param_2 + 7);
          uVar20 = *(undefined4 *)((long)param_2 + 0x3c);
          uVar3 = param_2[8];
          *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar31 + -8);
          *(undefined4 *)((long)param_2 + 0x14) = uVar14;
          *(undefined4 *)(param_2 + 3) = uVar15;
          *(undefined4 *)((long)param_2 + 0x1c) = uVar16;
          uVar14 = *(undefined4 *)((long)puVar31 + -0x2c);
          uVar15 = *(undefined4 *)(puVar31 + -5);
          uVar16 = *(undefined4 *)((long)puVar31 + -0x24);
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar31 + -6);
          *(undefined4 *)((long)param_2 + 0x24) = uVar14;
          *(undefined4 *)(param_2 + 5) = uVar15;
          *(undefined4 *)((long)param_2 + 0x2c) = uVar16;
          uVar21 = puVar31[-3];
          param_2[6] = puVar31[-4];
          param_2[7] = uVar21;
          *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar31 + -2);
          *(undefined4 *)((long)param_2 + 0x44) = *(undefined4 *)((long)puVar31 + -0xc);
          puVar31[-2] = uVar3;
          *(undefined4 *)puVar25 = uVar1;
          *(undefined4 *)((long)puVar31 + -0x4c) = uVar2;
          *(undefined4 *)(puVar31 + -9) = uVar4;
          *(undefined4 *)((long)puVar31 + -0x44) = uVar5;
          *(undefined4 *)(puVar31 + -8) = uVar6;
          *(undefined4 *)((long)puVar31 + -0x3c) = uVar7;
          *(undefined4 *)(puVar31 + -7) = uVar8;
          *(undefined4 *)((long)puVar31 + -0x34) = uVar9;
          *(undefined4 *)(puVar31 + -6) = uVar10;
          *(undefined4 *)((long)puVar31 + -0x2c) = uVar11;
          *(undefined4 *)(puVar31 + -5) = uVar12;
          *(undefined4 *)((long)puVar31 + -0x24) = uVar13;
          *(undefined4 *)(puVar31 + -4) = uVar17;
          *(undefined4 *)((long)puVar31 + -0x1c) = uVar18;
          *(undefined4 *)(puVar31 + -3) = uVar19;
          *(undefined4 *)((long)puVar31 + -0x14) = uVar20;
          param_2 = param_2 + 10;
          puVar31 = puVar25;
        }
        __introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (param_2,puVar29,param_3);
        lVar24 = (long)param_2 - (long)param_1;
        if (lVar24 < 0x501) goto LAB_00101d36;
        puVar29 = param_2;
      } while (param_3 != 0);
    }
    __heap_select<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>(param_1,param_2,param_2);
    do {
      uVar3 = param_1[1];
      local_88 = *(undefined4 *)(param_2 + -10);
      uStack_84 = *(undefined4 *)((long)param_2 + -0x4c);
      uStack_80 = *(undefined4 *)(param_2 + -9);
      uStack_7c = *(undefined4 *)((long)param_2 + -0x44);
      puVar28 = param_2 + -10;
      local_78 = *(undefined4 *)(param_2 + -8);
      uStack_74 = *(undefined4 *)((long)param_2 + -0x3c);
      uStack_70 = *(undefined4 *)(param_2 + -7);
      uStack_6c = *(undefined4 *)((long)param_2 + -0x34);
      local_68 = *(undefined4 *)(param_2 + -6);
      uStack_64 = *(undefined4 *)((long)param_2 + -0x2c);
      uStack_60 = *(undefined4 *)(param_2 + -5);
      uStack_5c = *(undefined4 *)((long)param_2 + -0x24);
      *puVar28 = *param_1;
      param_2[-9] = uVar3;
      uVar3 = param_1[3];
      local_58 = *(undefined4 *)(param_2 + -4);
      uStack_54 = *(undefined4 *)((long)param_2 + -0x1c);
      uStack_50 = *(undefined4 *)(param_2 + -3);
      uStack_4c = *(undefined4 *)((long)param_2 + -0x14);
      local_48 = *(undefined4 *)(param_2 + -2);
      local_44 = *(undefined4 *)((long)param_2 + -0xc);
      param_2[-8] = param_1[2];
      param_2[-7] = uVar3;
      uVar3 = param_1[5];
      param_2[-6] = param_1[4];
      param_2[-5] = uVar3;
      uVar3 = param_1[7];
      param_2[-4] = param_1[6];
      param_2[-3] = uVar3;
      *(undefined4 *)(param_2 + -2) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)((long)param_2 + -0xc) = *(undefined4 *)((long)param_1 + 0x44);
      __adjust_heap<embree::PrimRefMB*,long,embree::PrimRefMB,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,0,((long)puVar28 - (long)param_1 >> 4) * -0x3333333333333333,&local_88);
      param_2 = puVar28;
    } while (0x50 < (long)puVar28 - (long)param_1);
  }
LAB_00101d36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB, 32ul>::find(embree::SetMB const&,
   unsigned long) [clone .isra.0] */

HeuristicArrayBinningMB<embree::PrimRefMB,32ul> * __thiscall
embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::find
          (HeuristicArrayBinningMB<embree::PrimRefMB,32ul> *this,SetMB *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  BinInfoT_conflict *pBVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  long lVar13;
  long lVar14;
  BinInfoT_conflict *pBVar15;
  float *pfVar16;
  ulong uVar17;
  ulong uVar18;
  BinInfoT_conflict *pBVar19;
  embree *peVar20;
  embree *peVar21;
  embree *this_00;
  embree *peVar22;
  undefined1 (*pauVar23) [16];
  int iVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  byte bVar26;
  float fVar27;
  uint uVar31;
  uint uVar32;
  undefined1 auVar29 [16];
  uint uVar28;
  undefined1 auVar30 [16];
  uint uVar33;
  uint uVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint uVar45;
  uint uVar46;
  undefined1 auVar44 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar47 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 local_37f0 [16];
  uint local_37e0;
  uint uStack_37dc;
  uint uStack_37d8;
  uint uStack_37d4;
  undefined1 local_37d0 [16];
  undefined1 local_37c0 [16];
  undefined1 local_37b0 [16];
  undefined1 local_37a0 [16];
  undefined1 local_3790 [16];
  undefined1 local_3780 [16];
  undefined1 local_3770 [16];
  undefined1 local_3760 [16];
  undefined1 local_3750 [16];
  undefined1 local_3740 [16];
  undefined1 local_3730 [16];
  undefined1 local_3720 [16];
  undefined1 local_3710 [8];
  float fStack_3708;
  float fStack_3704;
  undefined1 local_3700 [16];
  long local_36f0;
  ulong *local_36e8;
  long *local_36e0;
  ulong *local_36d8;
  undefined1 local_36d0 [16];
  undefined1 local_36c0 [16];
  ulong local_36b0 [2];
  float local_36a0;
  float fStack_369c;
  float fStack_3698;
  float fStack_3694;
  float local_3690 [3];
  uint uStack_3684;
  float local_3680 [80];
  BinInfoT_conflict aBStack_3540 [192];
  BinInfoT_conflict local_3480 [16];
  undefined1 local_3470 [16];
  undefined1 local_3460 [16];
  undefined1 local_3450 [16];
  undefined1 local_3440 [16];
  undefined1 local_3430 [16];
  undefined1 local_3420 [16];
  undefined1 local_3410 [16];
  undefined1 local_3400 [16];
  undefined1 local_33f0 [16];
  undefined1 local_33e0 [16];
  undefined1 local_33d0 [5952];
  BinInfoT_conflict local_1c90 [4];
  BinInfoT_conflict aBStack_1c8c [4];
  BinInfoT_conflict aBStack_1c88 [4];
  BinInfoT_conflict aBStack_1c84 [4];
  BinInfoT_conflict local_1c80 [4];
  int aiStack_1c7c [123];
  embree aeStack_1a90 [4];
  int aiStack_1a8c [3];
  embree local_1a80 [4];
  int aiStack_1a7c [47];
  embree local_19c0 [5952];
  embree local_280 [568];
  long local_48;
  
  bVar26 = 0;
  local_37d0._4_4_ = _LC10;
  local_37d0._0_4_ = _LC10;
  local_37d0._8_4_ = _LC10;
  local_37d0._12_4_ = _LC10;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar15 = local_3480;
  pBVar19 = local_1c80;
  do {
    *(undefined1 (*) [16])(pBVar15 + 0x80) = local_37d0;
    pBVar10 = pBVar15 + 0xc0;
    *(undefined4 *)(pBVar15 + 0x90) = _LC8;
    *(undefined4 *)(pBVar15 + 0x94) = _LC8;
    *(undefined4 *)(pBVar15 + 0x98) = _LC8;
    *(undefined4 *)(pBVar15 + 0x9c) = _LC8;
    *(undefined1 (*) [16])(pBVar15 + 0xa0) = local_37d0;
    *(undefined4 *)(pBVar15 + 0xb0) = _LC8;
    *(undefined4 *)(pBVar15 + 0xb4) = _LC8;
    *(undefined4 *)(pBVar15 + 0xb8) = _LC8;
    *(undefined4 *)(pBVar15 + 0xbc) = _LC8;
    *(undefined1 (*) [16])(pBVar15 + 0x40) = local_37d0;
    *(undefined4 *)(pBVar15 + 0x50) = _LC8;
    *(undefined4 *)(pBVar15 + 0x54) = _LC8;
    *(undefined4 *)(pBVar15 + 0x58) = _LC8;
    *(undefined4 *)(pBVar15 + 0x5c) = _LC8;
    *(undefined1 (*) [16])(pBVar15 + 0x60) = local_37d0;
    *(undefined4 *)(pBVar15 + 0x70) = _LC8;
    *(undefined4 *)(pBVar15 + 0x74) = _LC8;
    *(undefined4 *)(pBVar15 + 0x78) = _LC8;
    *(undefined4 *)(pBVar15 + 0x7c) = _LC8;
    *(undefined1 (*) [16])pBVar15 = local_37d0;
    *(undefined4 *)(pBVar15 + 0x10) = _LC8;
    *(undefined4 *)(pBVar15 + 0x14) = _LC8;
    *(undefined4 *)(pBVar15 + 0x18) = _LC8;
    *(undefined4 *)(pBVar15 + 0x1c) = _LC8;
    *(undefined1 (*) [16])(pBVar15 + 0x20) = local_37d0;
    *(undefined4 *)(pBVar15 + 0x30) = _LC8;
    *(undefined4 *)(pBVar15 + 0x34) = _LC8;
    *(undefined4 *)(pBVar15 + 0x38) = _LC8;
    *(undefined4 *)(pBVar15 + 0x3c) = _LC8;
    *(undefined1 (*) [16])pBVar19 = (undefined1  [16])0x0;
    pBVar15 = pBVar10;
    pBVar19 = pBVar19 + 0x10;
  } while (local_1c80 != pBVar10);
  uVar18 = *(ulong *)(param_1 + 0x60);
  uVar25 = *(ulong *)(param_1 + 0x68) - uVar18;
  fVar27 = (float)uVar25 * __LC22 + __LC23;
  if (__LC24 <= fVar27) {
    local_36b0[0] = (long)(fVar27 - __LC24) ^ 0x8000000000000000;
  }
  else {
    local_36b0[0] = (ulong)fVar27;
  }
  local_36a0 = *(float *)(param_1 + 0x40);
  fStack_369c = *(float *)(param_1 + 0x44);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  fStack_3698 = *(float *)(param_1 + 0x48);
  fStack_3694 = *(float *)(param_1 + 0x4c);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  auVar29._0_4_ = *(float *)(param_1 + 0x50) - local_36a0;
  auVar29._4_4_ = *(float *)(param_1 + 0x54) - fStack_369c;
  auVar29._8_4_ = *(float *)(param_1 + 0x58) - fStack_3698;
  auVar29._12_4_ = *(float *)(param_1 + 0x5c) - fStack_3694;
  if (0x20 < local_36b0[0]) {
    local_36b0[0] = 0x20;
  }
  auVar34._4_4_ = _LC26;
  auVar34._0_4_ = _LC26;
  auVar34._8_4_ = _LC26;
  auVar34._12_4_ = _LC26;
  auVar34 = maxps(auVar34,auVar29);
  auVar30._0_4_ = (float)(long)local_36b0[0] * __LC27;
  auVar30._4_4_ = auVar30._0_4_;
  auVar30._8_4_ = auVar30._0_4_;
  auVar30._12_4_ = auVar30._0_4_;
  auVar29 = divps(auVar30,auVar34);
  local_3690[0] = (float)(-(uint)(_LC26 < auVar34._0_4_) & auVar29._0_4_);
  local_3690[1] = (float)(-(uint)(_LC26 < auVar34._4_4_) & auVar29._4_4_);
  local_3690[2] = (float)(-(uint)(_LC26 < auVar34._8_4_) & auVar29._8_4_);
  uStack_3684 = -(uint)(_LC26 < auVar34._12_4_) & auVar29._12_4_;
  local_36f0 = *(long *)(*(long *)(param_1 + 0x90) + 0x20);
  if (uVar25 < 0xc00) {
    pauVar23 = (undefined1 (*) [16])(local_36f0 + uVar18 * 0x50);
    local_37c0._4_4_ = _LC8;
    local_37c0._8_4_ = _LC8;
    local_37c0._12_4_ = _LC8;
    if (uVar25 != 0) {
      uVar9 = (int)local_36b0[0] - 1;
      if (uVar25 != 1) {
        pauVar11 = pauVar23;
        do {
          pauVar12 = pauVar11 + 10;
          auVar29 = pauVar11[6];
          auVar30 = pauVar11[5];
          auVar34 = pauVar11[7];
          uVar28 = (uint)(((*(float *)pauVar11[3] * _LC12 + *(float *)pauVar11[1] * _LC12 +
                           *(float *)pauVar11[2] * _LC12 + *(float *)*pauVar11 * _LC12) - local_36a0
                          ) * local_3690[0] + _LC17);
          uVar31 = (uint)(((*(float *)(pauVar11[3] + 4) * _LC12 +
                            *(float *)(pauVar11[1] + 4) * _LC12 +
                           *(float *)(pauVar11[2] + 4) * _LC12 + *(float *)(*pauVar11 + 4) * _LC12)
                          - fStack_369c) * local_3690[1] + _LC17);
          uVar32 = (uint)(((*(float *)(pauVar11[3] + 8) * _LC12 +
                            *(float *)(pauVar11[1] + 8) * _LC12 +
                           *(float *)(pauVar11[2] + 8) * _LC12 + *(float *)(*pauVar11 + 8) * _LC12)
                          - fStack_3698) * local_3690[2] + _LC17);
          uVar33 = -(uint)((int)uVar28 < (int)uVar9);
          uVar35 = -(uint)((int)uVar31 < (int)uVar9);
          uVar37 = -(uint)((int)uVar32 < (int)uVar9);
          uVar28 = uVar33 & uVar28 | ~uVar33 & uVar9;
          uVar31 = uVar35 & uVar31 | ~uVar35 & uVar9;
          uVar33 = uVar37 & uVar32 | ~uVar37 & uVar9;
          uVar17 = (ulong)(~-(uint)((int)uVar28 < 0) & uVar28);
          lVar14 = uVar17 * 0xc0;
          pBVar15 = local_3480 + lVar14;
          uVar28 = (uint)(((*(float *)pauVar11[8] * _LC12 + auVar29._0_4_ * _LC12 +
                           auVar34._0_4_ * _LC12 + auVar30._0_4_ * _LC12) - local_36a0) *
                          local_3690[0] + _LC17);
          uVar32 = (uint)(((*(float *)(pauVar11[8] + 4) * _LC12 + auVar29._4_4_ * _LC12 +
                           auVar34._4_4_ * _LC12 + auVar30._4_4_ * _LC12) - fStack_369c) *
                          local_3690[1] + _LC17);
          uVar35 = (uint)(((*(float *)(pauVar11[8] + 8) * _LC12 + auVar29._8_4_ * _LC12 +
                           auVar34._8_4_ * _LC12 + auVar30._8_4_ * _LC12) - fStack_3698) *
                          local_3690[2] + _LC17);
          uVar37 = -(uint)((int)uVar28 < (int)uVar9);
          uVar45 = -(uint)((int)uVar32 < (int)uVar9);
          uVar46 = -(uint)((int)uVar35 < (int)uVar9);
          uVar28 = uVar37 & uVar28 | ~uVar37 & uVar9;
          uVar32 = uVar45 & uVar32 | ~uVar45 & uVar9;
          uVar35 = uVar46 & uVar35 | ~uVar46 & uVar9;
          auVar44 = minps(*(undefined1 (*) [16])pBVar15,*pauVar11);
          *(undefined1 (*) [16])pBVar15 = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_3470 + lVar14),pauVar11[1]);
          *(undefined1 (*) [16])(local_3470 + lVar14) = auVar44;
          auVar44 = minps(*(undefined1 (*) [16])(local_3460 + lVar14),pauVar11[2]);
          *(undefined1 (*) [16])(local_3460 + lVar14) = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_3450 + lVar14),pauVar11[3]);
          *(undefined1 (*) [16])(local_3450 + lVar14) = auVar44;
          uVar18 = (ulong)(~-(uint)((int)uVar31 < 0) & uVar31);
          lVar14 = uVar18 * 0xc0;
          auVar44 = minps(*(undefined1 (*) [16])(local_3440 + lVar14),*pauVar11);
          *(undefined1 (*) [16])(local_3440 + lVar14) = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_3430 + lVar14),pauVar11[1]);
          *(undefined1 (*) [16])(local_3430 + lVar14) = auVar44;
          auVar44 = minps(*(undefined1 (*) [16])(local_3420 + lVar14),pauVar11[2]);
          *(undefined1 (*) [16])(local_3420 + lVar14) = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_3410 + lVar14),pauVar11[3]);
          *(undefined1 (*) [16])(local_3410 + lVar14) = auVar44;
          uVar1 = (ulong)(~-(uint)((int)uVar33 < 0) & uVar33);
          lVar14 = uVar1 * 0xc0;
          auVar44 = minps(*(undefined1 (*) [16])(local_3400 + lVar14),*pauVar11);
          *(undefined1 (*) [16])(local_3400 + lVar14) = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_33f0 + lVar14),pauVar11[1]);
          *(undefined1 (*) [16])(local_33f0 + lVar14) = auVar44;
          auVar44 = minps(*(undefined1 (*) [16])(local_33e0 + lVar14),pauVar11[2]);
          *(undefined1 (*) [16])(local_33e0 + lVar14) = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_33d0 + lVar14),pauVar11[3]);
          *(undefined1 (*) [16])(local_33d0 + lVar14) = auVar44;
          iVar24 = *(int *)(pauVar11[2] + 0xc);
          *(int *)(local_3480 + (uVar17 + 0x180) * 0x10) =
               *(int *)(local_3480 + (uVar17 + 0x180) * 0x10) + iVar24;
          uVar17 = (ulong)(~-(uint)((int)uVar28 < 0) & uVar28);
          aiStack_1c7c[uVar1 * 4 + 1] = aiStack_1c7c[uVar1 * 4 + 1] + iVar24;
          lVar14 = uVar17 * 0xc0;
          aiStack_1c7c[uVar18 * 4] = aiStack_1c7c[uVar18 * 4] + iVar24;
          pBVar15 = local_3480 + lVar14;
          auVar44 = minps(*(undefined1 (*) [16])pBVar15,auVar30);
          *(undefined1 (*) [16])pBVar15 = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_3470 + lVar14),auVar29);
          *(undefined1 (*) [16])(local_3470 + lVar14) = auVar44;
          auVar44 = minps(*(undefined1 (*) [16])(local_3460 + lVar14),auVar34);
          *(undefined1 (*) [16])(local_3460 + lVar14) = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_3450 + lVar14),pauVar11[8]);
          *(undefined1 (*) [16])(local_3450 + lVar14) = auVar44;
          uVar18 = (ulong)(~-(uint)((int)uVar32 < 0) & uVar32);
          lVar14 = uVar18 * 0xc0;
          auVar44 = minps(*(undefined1 (*) [16])(local_3440 + lVar14),auVar30);
          *(undefined1 (*) [16])(local_3440 + lVar14) = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_3430 + lVar14),auVar29);
          *(undefined1 (*) [16])(local_3430 + lVar14) = auVar44;
          auVar44 = minps(*(undefined1 (*) [16])(local_3420 + lVar14),auVar34);
          *(undefined1 (*) [16])(local_3420 + lVar14) = auVar44;
          auVar44 = maxps(*(undefined1 (*) [16])(local_3410 + lVar14),pauVar11[8]);
          *(undefined1 (*) [16])(local_3410 + lVar14) = auVar44;
          uVar1 = (ulong)(~-(uint)((int)uVar35 < 0) & uVar35);
          lVar14 = uVar1 * 0xc0;
          auVar30 = minps(*(undefined1 (*) [16])(local_3400 + lVar14),auVar30);
          *(undefined1 (*) [16])(local_3400 + lVar14) = auVar30;
          auVar29 = maxps(*(undefined1 (*) [16])(local_33f0 + lVar14),auVar29);
          *(undefined1 (*) [16])(local_33f0 + lVar14) = auVar29;
          auVar29 = minps(*(undefined1 (*) [16])(local_33e0 + lVar14),auVar34);
          *(undefined1 (*) [16])(local_33e0 + lVar14) = auVar29;
          auVar29 = maxps(*(undefined1 (*) [16])(local_33d0 + lVar14),pauVar11[8]);
          *(undefined1 (*) [16])(local_33d0 + lVar14) = auVar29;
          iVar24 = *(int *)(pauVar11[7] + 0xc);
          *(int *)(local_3480 + (uVar17 + 0x180) * 0x10) =
               *(int *)(local_3480 + (uVar17 + 0x180) * 0x10) + iVar24;
          aiStack_1c7c[uVar18 * 4] = aiStack_1c7c[uVar18 * 4] + iVar24;
          aiStack_1c7c[uVar1 * 4 + 1] = aiStack_1c7c[uVar1 * 4 + 1] + iVar24;
          pauVar11 = pauVar12;
        } while (pauVar23 + (uVar25 - 2 >> 1) * 10 + 10 != pauVar12);
        uVar18 = (uVar25 - 2 & 0xfffffffffffffffe) + 2;
        if (uVar25 <= uVar18) goto joined_r0x001025dc;
        pauVar23 = pauVar23 + uVar18 * 5;
      }
      auVar29 = pauVar23[1];
      auVar30 = pauVar23[3];
      auVar34 = pauVar23[2];
      auVar44 = *pauVar23;
      iVar24 = *(int *)(pauVar23[2] + 0xc);
      uVar28 = (uint)(((auVar30._0_4_ * _LC12 + auVar29._0_4_ * _LC12 +
                       _LC12 * auVar44._0_4_ + auVar34._0_4_ * _LC12) - local_36a0) * local_3690[0]
                     + _LC17);
      uVar31 = (uint)(((auVar30._4_4_ * _LC12 + auVar29._4_4_ * _LC12 +
                       _LC12 * auVar44._4_4_ + auVar34._4_4_ * _LC12) - fStack_369c) * local_3690[1]
                     + _LC17);
      uVar32 = (uint)(((auVar30._8_4_ * _LC12 + auVar29._8_4_ * _LC12 +
                       _LC12 * auVar44._8_4_ + auVar34._8_4_ * _LC12) - fStack_3698) * local_3690[2]
                     + _LC17);
      uVar33 = -(uint)((int)uVar28 < (int)uVar9);
      uVar35 = -(uint)((int)uVar31 < (int)uVar9);
      uVar37 = -(uint)((int)uVar32 < (int)uVar9);
      uVar28 = uVar33 & uVar28 | ~uVar33 & uVar9;
      uVar31 = uVar35 & uVar31 | ~uVar35 & uVar9;
      uVar9 = uVar37 & uVar32 | ~uVar37 & uVar9;
      lVar14 = (long)(int)(~-(uint)((int)uVar28 < 0) & uVar28);
      lVar13 = lVar14 * 0xc0;
      pBVar15 = local_3480 + lVar13;
      *(int *)(local_3480 + (lVar14 + 0x180) * 0x10) =
           *(int *)(local_3480 + (lVar14 + 0x180) * 0x10) + iVar24;
      auVar47 = minps(*(undefined1 (*) [16])pBVar15,auVar44);
      *(undefined1 (*) [16])pBVar15 = auVar47;
      auVar47 = maxps(*(undefined1 (*) [16])(local_3470 + lVar13),auVar29);
      *(undefined1 (*) [16])(local_3470 + lVar13) = auVar47;
      auVar47 = minps(*(undefined1 (*) [16])(local_3460 + lVar13),auVar34);
      *(undefined1 (*) [16])(local_3460 + lVar13) = auVar47;
      auVar47 = maxps(*(undefined1 (*) [16])(local_3450 + lVar13),auVar30);
      *(undefined1 (*) [16])(local_3450 + lVar13) = auVar47;
      lVar14 = (long)(int)(~-(uint)((int)uVar31 < 0) & uVar31);
      lVar13 = lVar14 * 0xc0;
      aiStack_1c7c[lVar14 * 4] = aiStack_1c7c[lVar14 * 4] + iVar24;
      auVar47 = minps(*(undefined1 (*) [16])(local_3440 + lVar13),auVar44);
      *(undefined1 (*) [16])(local_3440 + lVar13) = auVar47;
      auVar47 = maxps(*(undefined1 (*) [16])(local_3430 + lVar13),auVar29);
      *(undefined1 (*) [16])(local_3430 + lVar13) = auVar47;
      auVar47 = minps(*(undefined1 (*) [16])(local_3420 + lVar13),auVar34);
      *(undefined1 (*) [16])(local_3420 + lVar13) = auVar47;
      auVar47 = maxps(*(undefined1 (*) [16])(local_3410 + lVar13),auVar30);
      *(undefined1 (*) [16])(local_3410 + lVar13) = auVar47;
      lVar14 = (long)(int)(~-(uint)((int)uVar9 < 0) & uVar9);
      lVar13 = lVar14 * 0xc0;
      aiStack_1c7c[lVar14 * 4 + 1] = aiStack_1c7c[lVar14 * 4 + 1] + iVar24;
      auVar44 = minps(*(undefined1 (*) [16])(local_3400 + lVar13),auVar44);
      *(undefined1 (*) [16])(local_3400 + lVar13) = auVar44;
      auVar29 = maxps(*(undefined1 (*) [16])(local_33f0 + lVar13),auVar29);
      *(undefined1 (*) [16])(local_33f0 + lVar13) = auVar29;
      auVar29 = minps(*(undefined1 (*) [16])(local_33e0 + lVar13),auVar34);
      *(undefined1 (*) [16])(local_33e0 + lVar13) = auVar29;
      auVar29 = maxps(*(undefined1 (*) [16])(local_33d0 + lVar13),auVar30);
      *(undefined1 (*) [16])(local_33d0 + lVar13) = auVar29;
    }
  }
  else {
    local_36e8 = local_36b0;
    local_36e0 = &local_36f0;
    this_00 = local_1a80;
    local_36d8 = local_36e8;
    parallel_reduce_internal<unsigned_long,embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::bin_parallel<embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRefMB>(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::bin_parallel<embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRefMB>(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>const&,embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>const&)_2_>
              (this_00,uVar25 + 0x3ff >> 10,uVar18,*(ulong *)(param_1 + 0x68),0x400,local_3480,
               (_lambda_embree__range<unsigned_long>_const___1_ *)&local_36e0,
               (_lambda_embree__sse2__BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>_>_const__embree__sse2__BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>_>_const___2_
                *)&local_36e8);
    peVar22 = local_19c0;
    local_37d0._4_12_ = _UNK_00124874;
    local_37d0._0_4_ = _LC10;
    pBVar15 = local_3480;
    pBVar19 = local_3480;
    peVar21 = this_00;
    do {
      do {
        uVar3 = *(undefined8 *)(this_00 + 8);
        uVar4 = *(undefined8 *)(this_00 + 0x20);
        uVar5 = *(undefined8 *)(this_00 + 0x28);
        peVar20 = this_00 + 0x40;
        *(undefined8 *)pBVar15 = *(undefined8 *)this_00;
        *(undefined8 *)(pBVar15 + 8) = uVar3;
        uVar3 = *(undefined8 *)(this_00 + 0x10);
        uVar6 = *(undefined8 *)(this_00 + 0x18);
        *(undefined8 *)(pBVar15 + 0x20) = uVar4;
        *(undefined8 *)(pBVar15 + 0x28) = uVar5;
        *(undefined8 *)(pBVar15 + 0x10) = uVar3;
        *(undefined8 *)(pBVar15 + 0x18) = uVar6;
        uVar3 = *(undefined8 *)(this_00 + 0x38);
        *(undefined8 *)(pBVar15 + 0x30) = *(undefined8 *)(this_00 + 0x30);
        *(undefined8 *)(pBVar15 + 0x38) = uVar3;
        pBVar15 = pBVar15 + 0x40;
        this_00 = peVar20;
      } while (peVar22 != peVar20);
      this_00 = peVar21 + 0xc0;
      peVar22 = peVar22 + 0xc0;
      pBVar15 = pBVar19 + 0xc0;
      pBVar19 = pBVar15;
      peVar21 = this_00;
    } while (this_00 != local_280);
    uVar3 = CONCAT44(fStack_369c,local_36a0);
    uVar4 = CONCAT44(fStack_3694,fStack_3698);
    pBVar15 = local_1c80;
    for (lVar14 = 0x40; local_37c0._4_4_ = _UNK_00124864, local_37c0._8_4_ = _UNK_00124868,
        local_37c0._12_4_ = _UNK_0012486c, lVar14 != 0; lVar14 = lVar14 + -1) {
      *(undefined8 *)pBVar15 = *(undefined8 *)this_00;
      this_00 = this_00 + (ulong)bVar26 * -0x10 + 8;
      pBVar15 = pBVar15 + (ulong)bVar26 * -0x10 + 8;
    }
  }
joined_r0x001025dc:
  if (local_36b0[0] == 1) {
    local_36d0 = local_37d0;
    local_36c0 = (undefined1  [16])0x0;
  }
  else {
    auVar55._4_4_ = local_37c0._4_4_;
    auVar55._0_4_ = _LC8;
    auVar55._8_4_ = local_37c0._8_4_;
    auVar55._12_4_ = local_37c0._12_4_;
    auVar53._4_4_ = local_37c0._4_4_;
    auVar53._0_4_ = _LC8;
    auVar53._8_4_ = local_37c0._8_4_;
    auVar53._12_4_ = local_37c0._12_4_;
    auVar50._4_4_ = local_37c0._4_4_;
    auVar50._0_4_ = _LC8;
    auVar50._8_4_ = local_37c0._8_4_;
    auVar50._12_4_ = local_37c0._12_4_;
    auVar47._4_4_ = local_37c0._4_4_;
    auVar47._0_4_ = _LC8;
    auVar47._8_4_ = local_37c0._8_4_;
    auVar47._12_4_ = local_37c0._12_4_;
    local_3700 = (undefined1  [16])0x0;
    auVar44._4_4_ = local_37c0._4_4_;
    auVar44._0_4_ = _LC8;
    auVar44._8_4_ = local_37c0._8_4_;
    auVar44._12_4_ = local_37c0._12_4_;
    auVar54._4_4_ = local_37c0._4_4_;
    auVar54._0_4_ = _LC8;
    auVar54._8_4_ = local_37c0._8_4_;
    auVar54._12_4_ = local_37c0._12_4_;
    pfVar16 = local_3690 + local_36b0[0] * 4;
    pBVar15 = aBStack_3540 + local_36b0[0] * 0xc0;
    auVar29 = local_37d0;
    local_3750 = local_37d0;
    local_3740 = local_37d0;
    local_3730 = local_37d0;
    local_3720 = local_37d0;
    _local_3710 = local_37d0;
    lVar14 = local_36b0[0] * 0x10;
    do {
      auVar44 = maxps(auVar44,*(undefined1 (*) [16])(pBVar15 + 0x10));
      pBVar19 = pBVar15 + -0xc0;
      iVar24 = *(int *)(local_1c90 + lVar14 + 8);
      iVar2 = *(int *)(local_1c90 + lVar14 + 0xc);
      local_3700._0_4_ = local_3700._0_4_ + *(int *)(local_1c80 + lVar14 + -0x10);
      local_3700._4_4_ = local_3700._4_4_ + *(int *)((long)aiStack_1c7c + lVar14 + -0x10);
      auVar54 = maxps(auVar54,*(undefined1 (*) [16])(pBVar15 + 0x30));
      local_3720 = minps(local_3720,*(undefined1 (*) [16])(pBVar15 + 0x20));
      *(undefined4 *)(local_1a80 + lVar14 + -0x10) = local_3700._0_4_;
      *(undefined4 *)((long)aiStack_1a7c + lVar14 + -0x10) = local_3700._4_4_;
      *(int *)((long)aiStack_1c7c + lVar14 + 500) = local_3700._8_4_ + iVar24;
      *(int *)((long)aiStack_1c7c + lVar14 + 0x1f8) = local_3700._12_4_ + iVar2;
      auVar47 = maxps(auVar47,*(undefined1 (*) [16])(pBVar15 + 0x50));
      auVar50 = maxps(auVar50,*(undefined1 (*) [16])(pBVar15 + 0x70));
      local_3700._8_4_ = local_3700._8_4_ + iVar24;
      local_3700._12_4_ = local_3700._12_4_ + iVar2;
      _local_3710 = minps(_local_3710,*(undefined1 (*) [16])pBVar15);
      fVar27 = auVar54._4_4_ - local_3720._4_4_;
      fVar38 = auVar54._8_4_ - local_3720._8_4_;
      auVar53 = maxps(auVar53,*(undefined1 (*) [16])(pBVar15 + 0x90));
      auVar29 = minps(auVar29,*(undefined1 (*) [16])(pBVar15 + 0x80));
      auVar55 = maxps(auVar55,*(undefined1 (*) [16])(pBVar15 + 0xb0));
      fVar40 = auVar44._4_4_ - SUB164(_local_3710,4);
      fVar42 = auVar44._8_4_ - SUB164(_local_3710,8);
      local_3740 = minps(local_3740,*(undefined1 (*) [16])(pBVar15 + 0x60));
      fVar36 = auVar50._4_4_ - local_3740._4_4_;
      fVar39 = auVar50._8_4_ - local_3740._8_4_;
      local_3730 = minps(local_3730,*(undefined1 (*) [16])(pBVar15 + 0x40));
      fVar41 = auVar47._4_4_ - local_3730._4_4_;
      fVar43 = auVar47._8_4_ - local_3730._8_4_;
      *pfVar16 = _LC12 * (fVar40 * fVar42 +
                          (fVar40 + fVar42) * (auVar44._0_4_ - SUB164(_local_3710,0)) +
                         (fVar27 + fVar38) * (auVar54._0_4_ - local_3720._0_4_) + fVar27 * fVar38);
      local_3750 = minps(local_3750,*(undefined1 (*) [16])(pBVar15 + 0xa0));
      fVar27 = auVar55._4_4_ - local_3750._4_4_;
      fVar38 = auVar55._8_4_ - local_3750._8_4_;
      fVar40 = auVar53._4_4_ - auVar29._4_4_;
      fVar42 = auVar53._8_4_ - auVar29._8_4_;
      pfVar16[1] = _LC12 * (fVar41 * fVar43 + (fVar41 + fVar43) * (auVar47._0_4_ - local_3730._0_4_)
                           + (fVar36 + fVar39) * (auVar50._0_4_ - local_3740._0_4_) +
                             fVar36 * fVar39);
      pfVar16[2] = _LC12 * (fVar40 * fVar42 + (fVar40 + fVar42) * (auVar53._0_4_ - auVar29._0_4_) +
                           (fVar27 + fVar38) * (auVar55._0_4_ - local_3750._0_4_) + fVar27 * fVar38)
      ;
      pfVar16[3] = 0.0;
      pfVar16 = pfVar16 + -4;
      pBVar15 = pBVar19;
      lVar14 = lVar14 + -0x10;
    } while (local_3480 != pBVar19);
    local_36d0 = local_37d0;
    iVar24 = (1 << ((byte)param_2 & 0x1f)) + -1;
    local_36c0 = (undefined1  [16])0x0;
    if (1 < local_36b0[0]) {
      lVar14 = 0x10;
      local_3700 = (undefined1  [16])0x0;
      uVar18 = param_2 & 0xffffffff;
      local_37c0._0_4_ = _LC8;
      local_37a0._4_4_ = local_37c0._4_4_;
      local_37a0._0_4_ = _LC8;
      local_37a0._8_4_ = local_37c0._8_4_;
      local_37a0._12_4_ = local_37c0._12_4_;
      local_3780._4_4_ = local_37c0._4_4_;
      local_3780._0_4_ = _LC8;
      local_3780._8_4_ = local_37c0._8_4_;
      local_3780._12_4_ = local_37c0._12_4_;
      local_3760._4_4_ = local_37c0._4_4_;
      local_3760._0_4_ = _LC8;
      local_3760._8_4_ = local_37c0._8_4_;
      local_3760._12_4_ = local_37c0._12_4_;
      local_3740._4_4_ = local_37c0._4_4_;
      local_3740._0_4_ = _LC8;
      local_3740._8_4_ = local_37c0._8_4_;
      local_3740._12_4_ = local_37c0._12_4_;
      local_3720 = (undefined1  [16])0x0;
      local_37f0._4_4_ = local_37c0._4_4_;
      local_37f0._0_4_ = _LC8;
      local_37f0._8_4_ = local_37c0._8_4_;
      local_37f0._12_4_ = local_37c0._12_4_;
      local_37b0 = local_37d0;
      local_3790 = local_37d0;
      local_3770 = local_37d0;
      local_3750 = local_37d0;
      local_3730 = local_37d0;
      _local_3710 = local_37d0;
      local_37e0 = __LC30;
      uStack_37dc = _UNK_00124894;
      uStack_37d8 = _UNK_00124898;
      uStack_37d4 = _UNK_0012489c;
      do {
        local_3740 = maxps(local_3740,*(undefined1 (*) [16])(pBVar19 + 0x10));
        local_3730 = minps(local_3730,*(undefined1 (*) [16])pBVar19);
        local_3760 = maxps(local_3760,*(undefined1 (*) [16])(pBVar19 + 0x30));
        local_3750 = minps(local_3750,*(undefined1 (*) [16])(pBVar19 + 0x20));
        local_3790 = minps(local_3790,*(undefined1 (*) [16])(pBVar19 + 0x60));
        fVar48 = local_3740._4_4_ - local_3730._4_4_;
        fVar49 = local_3740._8_4_ - local_3730._8_4_;
        fVar42 = local_3760._4_4_ - local_3750._4_4_;
        fVar43 = local_3760._8_4_ - local_3750._8_4_;
        local_3770 = minps(local_3770,*(undefined1 (*) [16])(pBVar19 + 0x40));
        local_37a0 = maxps(local_37a0,*(undefined1 (*) [16])(pBVar19 + 0x70));
        local_3720._0_4_ = local_3720._0_4_ + *(int *)(local_1c90 + lVar14);
        local_3720._4_4_ = local_3720._4_4_ + *(int *)(local_1c90 + lVar14 + 4);
        local_3720._8_4_ = local_3720._8_4_ + *(int *)(local_1c90 + lVar14 + 8);
        local_3720._12_4_ = local_3720._12_4_ + *(int *)(local_1c90 + lVar14 + 0xc);
        local_3780 = maxps(local_3780,*(undefined1 (*) [16])(pBVar19 + 0x50));
        fVar40 = local_37a0._4_4_ - local_3790._4_4_;
        fVar41 = local_37a0._8_4_ - local_3790._8_4_;
        fVar36 = local_3780._4_4_ - local_3770._4_4_;
        fVar38 = local_3780._8_4_ - local_3770._8_4_;
        local_37b0 = minps(local_37b0,*(undefined1 (*) [16])(pBVar19 + 0x80));
        local_37c0 = maxps(local_37c0,*(undefined1 (*) [16])(pBVar19 + 0x90));
        local_37d0 = minps(local_37d0,*(undefined1 (*) [16])(pBVar19 + 0xa0));
        local_37f0 = maxps(local_37f0,*(undefined1 (*) [16])(pBVar19 + 0xb0));
        fVar27 = local_37c0._4_4_ - local_37b0._4_4_;
        fVar39 = local_37c0._8_4_ - local_37b0._8_4_;
        fVar51 = local_37f0._4_4_ - local_37d0._4_4_;
        fVar52 = local_37f0._8_4_ - local_37d0._8_4_;
        fVar39 = _LC12 * (fVar27 * fVar39 +
                          (fVar27 + fVar39) * (local_37c0._0_4_ - local_37b0._0_4_) +
                         (fVar51 + fVar52) * (local_37f0._0_4_ - local_37d0._0_4_) + fVar51 * fVar52
                         );
        uVar9 = (uint)(local_3720._0_4_ + iVar24) >> uVar18;
        uVar28 = (uint)(local_3720._4_4_ + iVar24) >> uVar18;
        uVar31 = (uint)(local_3720._8_4_ + iVar24) >> uVar18;
        uVar32 = (uint)(local_3720._12_4_ + iVar24) >> uVar18;
        uVar33 = (uint)(iVar24 + *(int *)(local_1a80 + lVar14)) >> uVar18;
        uVar35 = (uint)(iVar24 + *(int *)((long)aiStack_1a7c + lVar14)) >> uVar18;
        uVar37 = (uint)(iVar24 + *(int *)((long)aiStack_1a7c + lVar14 + 4)) >> uVar18;
        uVar45 = (uint)(iVar24 + *(int *)((long)aiStack_1a7c + lVar14 + 8)) >> uVar18;
        pfVar16 = (float *)((long)local_3680 + lVar14);
        lVar13 = lVar14 + 4;
        lVar7 = lVar14 + 8;
        lVar8 = lVar14 + 0xc;
        lVar14 = lVar14 + 0x10;
        fVar27 = (fVar48 * fVar49 + (fVar48 + fVar49) * (local_3740._0_4_ - local_3730._0_4_) +
                 (fVar42 + fVar43) * (local_3760._0_4_ - local_3750._0_4_) + fVar42 * fVar43) *
                 _LC12 * ((float)(int)(uVar9 & _LC6) + (float)((int)uVar9 >> 0x1f & __LC29)) +
                 ((float)(int)(uVar33 & _LC6) + (float)((int)uVar33 >> 0x1f & __LC29)) * *pfVar16;
        fVar36 = _LC12 * (fVar36 * fVar38 +
                          (fVar36 + fVar38) * (local_3780._0_4_ - local_3770._0_4_) +
                         (fVar40 + fVar41) * (local_37a0._0_4_ - local_3790._0_4_) + fVar40 * fVar41
                         ) *
                 ((float)(int)(uVar28 & _UNK_001248a4) +
                 (float)((int)uVar28 >> 0x1f & _UNK_001248b4)) +
                 ((float)(int)(uVar35 & _UNK_001248a4) +
                 (float)((int)uVar35 >> 0x1f & _UNK_001248b4)) *
                 *(float *)((long)local_3680 + lVar13);
        fVar38 = fVar39 * ((float)(int)(uVar31 & _UNK_001248a8) +
                          (float)((int)uVar31 >> 0x1f & _UNK_001248b8)) +
                 ((float)(int)(uVar37 & _UNK_001248a8) +
                 (float)((int)uVar37 >> 0x1f & _UNK_001248b8)) *
                 *(float *)((long)local_3680 + lVar7);
        fVar39 = fVar39 * ((float)(int)(uVar32 & _UNK_001248ac) +
                          (float)((int)uVar32 >> 0x1f & _UNK_001248bc)) +
                 ((float)(int)(uVar45 & _UNK_001248ac) +
                 (float)((int)uVar45 >> 0x1f & _UNK_001248bc)) *
                 *(float *)((long)local_3680 + lVar8);
        uVar9 = -(uint)(fVar27 < (float)local_3710._0_4_);
        uVar28 = -(uint)(fVar36 < (float)local_3710._4_4_);
        uVar31 = -(uint)(fVar38 < fStack_3708);
        uVar32 = -(uint)(fVar39 < fStack_3704);
        local_3700._0_4_ = local_37e0 & uVar9 | ~uVar9 & local_3700._0_4_;
        local_3700._4_4_ = uStack_37dc & uVar28 | ~uVar28 & local_3700._4_4_;
        local_3700._8_4_ = uStack_37d8 & uVar31 | ~uVar31 & local_3700._8_4_;
        local_3700._12_4_ = uStack_37d4 & uVar32 | ~uVar32 & local_3700._12_4_;
        local_3710._0_4_ = uVar9 & (uint)fVar27 | ~uVar9 & local_3710._0_4_;
        local_3710._4_4_ = uVar28 & (uint)fVar36 | ~uVar28 & local_3710._4_4_;
        fStack_3708 = (float)(uVar31 & (uint)fVar38 | ~uVar31 & (uint)fStack_3708);
        fStack_3704 = (float)(uVar32 & (uint)fVar39 | ~uVar32 & (uint)fStack_3704);
        pBVar19 = pBVar19 + 0xc0;
        local_37e0 = local_37e0 + __LC30;
        uStack_37dc = uStack_37dc + _UNK_00124894;
        uStack_37d8 = uStack_37d8 + _UNK_00124898;
        uStack_37d4 = uStack_37d4 + _UNK_0012489c;
      } while (lVar14 != local_36b0[0] * 0x10);
      local_36c0._4_4_ = local_3700._4_4_;
      local_36c0._0_4_ = local_3700._0_4_;
      local_36c0._8_4_ = local_3700._8_4_;
      local_36c0._12_4_ = local_3700._12_4_;
      local_36d0._4_4_ = local_3710._4_4_;
      local_36d0._0_4_ = local_3710._0_4_;
      local_36d0._8_4_ = fStack_3708;
      local_36d0._12_4_ = fStack_3704;
    }
  }
  uVar25 = 0;
  iVar24 = 0;
  uVar18 = 0xffffffff;
  fVar27 = _LC10;
  do {
    if (((local_3690[uVar25] != 0.0) && (*(float *)(local_36d0 + uVar25 * 4) < fVar27)) &&
       (*(int *)(local_36c0 + uVar25 * 4) != 0)) {
      uVar18 = uVar25 & 0xffffffff;
      fVar27 = *(float *)(local_36d0 + uVar25 * 4);
      iVar24 = *(int *)(local_36c0 + uVar25 * 4);
    }
    uVar25 = uVar25 + 1;
  } while (uVar25 != 3);
  *(undefined4 *)(this + 0xc) = 0;
  *(float *)this = fVar27;
  *(int *)(this + 4) = (int)uVar18;
  *(int *)(this + 8) = iVar24;
  *(ulong *)(this + 0x10) = local_36b0[0];
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar4;
  *(float *)(this + 0x30) = local_3690[0];
  *(float *)(this + 0x34) = local_3690[1];
  *(float *)(this + 0x38) = local_3690[2];
  *(uint *)(this + 0x3c) = uStack_3684;
  fVar36 = *(float *)(param_1 + 0x8c);
  fVar38 = *(float *)(param_1 + 0x88);
  *(uint *)(this + 0xc) = (uint)((int)uVar18 == -1);
  *(float *)this = (fVar36 - fVar38) * fVar27;
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > embree::parallel_reduce_internal<unsigned
   long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::range<unsigned
   long> const&)#1}, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const
   (embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)>(unsigned long, unsigned long,
   unsigned long, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::range<unsigned
   long> const&)#1} const&, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const (
   const&)(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)) [clone .isra.0] */

ulong embree::
      parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,
                PrimInfoMBT_conflict *param_5,
                _lambda_embree__range<unsigned_long>_const___1_ *param_6,
                _func_PrimInfoMBT_PrimInfoMBT_ptr_PrimInfoMBT_ptr *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_20f8;
  ulong local_20f0;
  ulong local_20e8;
  long local_20e0;
  long local_20d8;
  undefined8 local_20d0;
  undefined8 uStack_20c8;
  ulong *local_20c0;
  undefined1 *puStack_20b8;
  _lambda_embree__range<unsigned_long>_const___1_ *local_20b0;
  undefined8 uStack_20a8;
  undefined8 local_20a0;
  undefined8 uStack_2098;
  undefined8 local_2090;
  undefined8 uStack_2088;
  undefined8 local_2080;
  undefined8 uStack_2078;
  undefined8 local_2070;
  undefined8 uStack_2068;
  undefined8 local_2060;
  undefined8 local_2058;
  undefined8 local_2050;
  undefined8 local_2048;
  undefined1 local_2040 [8064];
  undefined1 *local_c0;
  ulong local_b8;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_20f8 = param_4;
  local_20f0 = param_3;
  local_20e8 = param_2;
  uVar2 = embree::TaskScheduler::threadCount();
  if (0x200 < local_20e8) {
    local_20e8 = 0x200;
  }
  if (uVar2 < local_20e8) {
    local_20e8 = uVar2;
  }
  local_b8 = local_20e8;
  if (local_20e8 * 0x90 < 0x2001) {
    local_c0 = local_2040;
  }
  else {
    local_c0 = (undefined1 *)embree::alignedMalloc(local_20e8 * 0x90,0x40);
  }
  local_20d0 = &local_20f0;
  uStack_20c8 = &local_20f8;
  local_20c0 = &local_20e8;
  puStack_20b8 = local_2040;
  local_20b0 = param_6;
  if (local_20e8 != 0) {
    local_20e0 = 0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImNS_11PrimInfoMBTINS_5LBBoxINS_6Vec3faEEEEEZNS_4sse227HeuristicMBlurTemporalSplitINS_9PrimRefMBENS9_18RecalculatePrimRefINS_12TriangleMeshEEELm2EE5splitERKNS9_8BinSplitILm32EEERKNS_5SetMBERSK_SN_EUlRKNS_5rangeImEEE_FKS8_RST_SU_EEET0_T_SX_SX_SX_RKSW_RKT1_RKT2_EUlmE_EEvSX_SZ_EUlSR_E_EEvSX_SX_SX_SZ_PNS0_16TaskGroupContextE_isra_0
              (0,local_20e8,1,&local_20d0,&local_20e0);
    embree::TaskScheduler::wait();
    if (local_20e0 != 0) {
      local_20d8 = local_20e0;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20d8);
      goto LAB_0010368d;
    }
  }
  uVar1 = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_5;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_5 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_5 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_5 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_5 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_5 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_5 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_5 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_5 + 0x80);
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_5 + 0x88);
  if (local_20e8 != 0) {
    do {
      uVar2 = uVar2 + 1;
      (*param_7)((PrimInfoMBT_conflict *)&local_20d0,(PrimInfoMBT_conflict *)param_1);
      *(undefined8 *)(param_1 + 0x70) = local_2060;
      *(undefined4 *)param_1 = (undefined4)local_20d0;
      *(undefined4 *)(param_1 + 4) = local_20d0._4_4_;
      *(undefined4 *)(param_1 + 8) = (undefined4)uStack_20c8;
      *(undefined4 *)(param_1 + 0xc) = uStack_20c8._4_4_;
      *(ulong **)(param_1 + 0x10) = local_20c0;
      *(undefined1 **)(param_1 + 0x18) = puStack_20b8;
      *(undefined8 *)(param_1 + 0x78) = local_2058;
      *(_lambda_embree__range<unsigned_long>_const___1_ **)(param_1 + 0x20) = local_20b0;
      *(undefined8 *)(param_1 + 0x28) = uStack_20a8;
      *(undefined8 *)(param_1 + 0x80) = local_2050;
      *(undefined8 *)(param_1 + 0x30) = local_20a0;
      *(undefined8 *)(param_1 + 0x38) = uStack_2098;
      *(undefined8 *)(param_1 + 0x88) = local_2048;
      *(undefined8 *)(param_1 + 0x40) = local_2090;
      *(undefined8 *)(param_1 + 0x48) = uStack_2088;
      *(undefined8 *)(param_1 + 0x50) = local_2080;
      *(undefined8 *)(param_1 + 0x58) = uStack_2078;
      *(undefined8 *)(param_1 + 0x60) = local_2070;
      *(undefined8 *)(param_1 + 0x68) = uStack_2068;
    } while (uVar2 < local_20e8);
  }
  if (local_c0 != local_2040) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_0010368d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Builder::deleteGeometry(unsigned long) */

void embree::Builder::deleteGeometry(ulong param_1)

{
  return;
}



/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMvMB<4>
   >::~BVHNBuilderMBlurSAH() */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>>::
~BVHNBuilderMBlurSAH(BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>> *this)

{
  return;
}



/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::~BVHNBuilderMBlurSAH() */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>>::
~BVHNBuilderMBlurSAH(BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  return;
}



/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMvMB<4> >::clear() */

void embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>>::clear(void)

{
  return;
}



/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMi<4> >::clear() */

void embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>>::clear(void)

{
  return;
}



/* embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   >::merge2(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&) */

void __thiscall
embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2
          (PrimInfoMBT<embree::LBBox<embree::Vec3fa>> *this,PrimInfoMBT_conflict *param_1,
          PrimInfoMBT_conflict *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  auVar13 = *(undefined1 (*) [16])param_1;
  *(undefined1 (*) [16])this = auVar13;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x10);
  *(undefined1 (*) [16])(this + 0x10) = auVar2;
  auVar3 = *(undefined1 (*) [16])(param_1 + 0x20);
  *(undefined1 (*) [16])(this + 0x20) = auVar3;
  auVar4 = *(undefined1 (*) [16])(param_1 + 0x30);
  *(undefined1 (*) [16])(this + 0x30) = auVar4;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x40);
  *(undefined1 (*) [16])(this + 0x40) = auVar5;
  auVar6 = *(undefined1 (*) [16])(param_1 + 0x50);
  *(undefined1 (*) [16])(this + 0x50) = auVar6;
  lVar7 = *(long *)(param_1 + 0x60);
  *(long *)(this + 0x60) = lVar7;
  lVar8 = *(long *)(param_1 + 0x68);
  *(long *)(this + 0x68) = lVar8;
  lVar9 = *(long *)(param_1 + 0x70);
  uVar10 = *(ulong *)(param_1 + 0x78);
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  *(long *)(this + 0x70) = lVar9;
  *(ulong *)(this + 0x78) = uVar10;
  *(undefined8 *)(this + 0x80) = uVar11;
  *(undefined8 *)(this + 0x88) = uVar12;
  auVar13 = minps(auVar13,*(undefined1 (*) [16])param_2);
  *(undefined1 (*) [16])this = auVar13;
  auVar13 = maxps(auVar2,*(undefined1 (*) [16])(param_2 + 0x10));
  *(undefined1 (*) [16])(this + 0x10) = auVar13;
  auVar13 = minps(auVar3,*(undefined1 (*) [16])(param_2 + 0x20));
  *(undefined1 (*) [16])(this + 0x20) = auVar13;
  auVar13 = maxps(auVar4,*(undefined1 (*) [16])(param_2 + 0x30));
  *(undefined1 (*) [16])(this + 0x30) = auVar13;
  auVar13 = minps(auVar5,*(undefined1 (*) [16])(param_2 + 0x40));
  *(undefined1 (*) [16])(this + 0x40) = auVar13;
  auVar13 = maxps(auVar6,*(undefined1 (*) [16])(param_2 + 0x50));
  *(undefined1 (*) [16])(this + 0x50) = auVar13;
  fVar1 = *(float *)(this + 0x88);
  if (*(float *)(param_2 + 0x88) <= *(float *)(this + 0x88)) {
    fVar1 = *(float *)(param_2 + 0x88);
  }
  *(float *)(this + 0x88) = fVar1;
  fVar1 = *(float *)(param_2 + 0x8c);
  if (*(float *)(param_2 + 0x8c) <= *(float *)(this + 0x8c)) {
    fVar1 = *(float *)(this + 0x8c);
  }
  *(float *)(this + 0x8c) = fVar1;
  *(long *)(this + 0x60) = lVar7 + *(long *)(param_2 + 0x60);
  *(long *)(this + 0x68) = lVar8 + *(long *)(param_2 + 0x68);
  *(long *)(this + 0x70) = lVar9 + *(long *)(param_2 + 0x70);
  if (uVar10 < *(ulong *)(param_2 + 0x78)) {
    *(ulong *)(this + 0x78) = *(ulong *)(param_2 + 0x78);
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_2 + 0x84);
  }
  return;
}



/* embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,
   2ul>::TemporalBinInfo::merge2(embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo const&,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo const&) */

TemporalBinInfo * __thiscall
embree::sse2::
HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
::TemporalBinInfo::merge2(TemporalBinInfo *this,TemporalBinInfo *param_1,TemporalBinInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  auVar8 = *(undefined1 (*) [16])(param_1 + 0x10);
  *(undefined1 (*) [16])(this + 0x10) = auVar8;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x20);
  *(undefined1 (*) [16])(this + 0x20) = auVar1;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x30);
  *(undefined1 (*) [16])(this + 0x30) = auVar2;
  auVar3 = *(undefined1 (*) [16])(param_1 + 0x40);
  *(undefined1 (*) [16])(this + 0x40) = auVar3;
  auVar4 = *(undefined1 (*) [16])(param_1 + 0x50);
  *(undefined1 (*) [16])(this + 0x50) = auVar4;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x60);
  *(undefined1 (*) [16])(this + 0x60) = auVar5;
  auVar6 = *(undefined1 (*) [16])(param_1 + 0x70);
  *(undefined1 (*) [16])(this + 0x70) = auVar6;
  auVar7 = *(undefined1 (*) [16])(param_1 + 0x80);
  *(undefined1 (*) [16])(this + 0x80) = auVar7;
  *(long *)this = *(long *)this + *(long *)param_2;
  *(long *)(this + 8) = *(long *)(this + 8) + *(long *)(param_2 + 8);
  auVar8 = minps(auVar8,*(undefined1 (*) [16])(param_2 + 0x10));
  *(undefined1 (*) [16])(this + 0x10) = auVar8;
  auVar8 = maxps(auVar1,*(undefined1 (*) [16])(param_2 + 0x20));
  *(undefined1 (*) [16])(this + 0x20) = auVar8;
  auVar8 = minps(auVar2,*(undefined1 (*) [16])(param_2 + 0x30));
  *(undefined1 (*) [16])(this + 0x30) = auVar8;
  auVar8 = maxps(auVar3,*(undefined1 (*) [16])(param_2 + 0x40));
  *(undefined1 (*) [16])(this + 0x40) = auVar8;
  auVar8 = minps(auVar4,*(undefined1 (*) [16])(param_2 + 0x50));
  *(undefined1 (*) [16])(this + 0x50) = auVar8;
  auVar8 = maxps(auVar5,*(undefined1 (*) [16])(param_2 + 0x60));
  *(undefined1 (*) [16])(this + 0x60) = auVar8;
  auVar8 = minps(auVar6,*(undefined1 (*) [16])(param_2 + 0x70));
  *(undefined1 (*) [16])(this + 0x70) = auVar8;
  auVar8 = maxps(auVar7,*(undefined1 (*) [16])(param_2 + 0x80));
  *(undefined1 (*) [16])(this + 0x80) = auVar8;
  return this;
}



/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMvMB<4>
   >::~BVHNBuilderMBlurSAH() */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>>::
~BVHNBuilderMBlurSAH(BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::~BVHNBuilderMBlurSAH() */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>>::
~BVHNBuilderMBlurSAH(BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* embree::Scene::BuildProgressMonitorInterface::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::Scene::BuildProgressMonitorInterface::operator()
          (BuildProgressMonitorInterface *this,ulong param_1)

{
  if (-1 < (long)param_1) {
    embree::Scene::progressMonitor((double)(long)param_1);
    return;
  }
  embree::Scene::progressMonitor((double)param_1);
  return;
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
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
                    /* WARNING: Could not recover jumptable at 0x00103959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::findFallback(embree::SetMB const&) [clone .isra.0]
    */

SetMB * embree::sse2::BVHBuilderMSMBlur::
        BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
        ::findFallback(SetMB *param_1)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  long in_RDX;
  char in_SIL;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = *(ulong *)(in_RDX + 0x68);
  uVar8 = *(ulong *)(in_RDX + 0x60);
  if (uVar2 != uVar8) {
    lVar9 = uVar8 * 0x50;
    lVar3 = *(long *)(*(long *)(in_RDX + 0x90) + 0x20);
    uVar4 = uVar8 + 1;
    if (uVar4 < uVar2) {
      piVar6 = (int *)(lVar3 + 0x5c + lVar9);
      do {
        if (*(int *)(lVar3 + 0xc + lVar9) != *piVar6) {
          *(undefined8 *)param_1 = 0;
          *(undefined8 *)(param_1 + 8) = 0x300000000;
          return param_1;
        }
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 0x14;
      } while (uVar4 < uVar2);
    }
    if ((in_SIL != '\0') && (uVar8 < uVar2)) {
      puVar5 = (uint *)(lVar3 + 0x3c + lVar9);
      do {
        fVar1 = (float)puVar5[1];
        fVar12 = (float)*puVar5;
        fVar11 = (float)puVar5[2] - fVar1;
        fVar10 = ((*(float *)(in_RDX + 0x88) - fVar1) / fVar11) * _LC0 * fVar12;
        if ((float)((uint)fVar10 & _LC6) < _LC1) {
          fVar10 = (float)((uint)((float)(int)fVar10 -
                                 (float)(-(uint)(fVar10 < (float)(int)fVar10) & _LC3)) |
                          ~_LC6 & (uint)fVar10);
        }
        iVar7 = 0;
        if (0.0 <= fVar10) {
          iVar7 = (int)fVar10;
        }
        fVar10 = ((*(float *)(in_RDX + 0x8c) - fVar1) / fVar11) * _LC5 * fVar12;
        if ((float)((uint)fVar10 & _LC6) < _LC1) {
          fVar10 = (float)((uint)((float)(int)fVar10 +
                                 (float)(-(uint)((float)(int)fVar10 < fVar10) & _LC3)) |
                          ~_LC6 & (uint)fVar10);
        }
        if (fVar12 <= fVar10) {
          fVar10 = fVar12;
        }
        if (1 < (int)fVar10 - iVar7) {
          *(undefined8 *)param_1 = 0;
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(float *)(param_1 + 8) = ((float)(((int)fVar10 + iVar7) / 2) * fVar11) / fVar12 + fVar1;
          return param_1;
        }
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 0x14;
      } while (uVar8 < uVar2);
    }
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x100000000;
  return param_1;
}



/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::findFallback(embree::SetMB const&) [clone .isra.0]
    */

SetMB * embree::sse2::BVHBuilderMSMBlur::
        BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
        ::findFallback(SetMB *param_1)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  long in_RDX;
  char in_SIL;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = *(ulong *)(in_RDX + 0x68);
  uVar8 = *(ulong *)(in_RDX + 0x60);
  if (uVar2 != uVar8) {
    lVar9 = uVar8 * 0x50;
    lVar3 = *(long *)(*(long *)(in_RDX + 0x90) + 0x20);
    uVar4 = uVar8 + 1;
    if (uVar4 < uVar2) {
      piVar6 = (int *)(lVar3 + 0x5c + lVar9);
      do {
        if (*(int *)(lVar3 + 0xc + lVar9) != *piVar6) {
          *(undefined8 *)param_1 = 0;
          *(undefined8 *)(param_1 + 8) = 0x300000000;
          return param_1;
        }
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 0x14;
      } while (uVar4 < uVar2);
    }
    if ((in_SIL != '\0') && (uVar8 < uVar2)) {
      puVar5 = (uint *)(lVar3 + 0x3c + lVar9);
      do {
        fVar1 = (float)puVar5[1];
        fVar12 = (float)*puVar5;
        fVar11 = (float)puVar5[2] - fVar1;
        fVar10 = ((*(float *)(in_RDX + 0x88) - fVar1) / fVar11) * _LC0 * fVar12;
        if ((float)((uint)fVar10 & _LC6) < _LC1) {
          fVar10 = (float)((uint)((float)(int)fVar10 -
                                 (float)(-(uint)(fVar10 < (float)(int)fVar10) & _LC3)) |
                          ~_LC6 & (uint)fVar10);
        }
        iVar7 = 0;
        if (0.0 <= fVar10) {
          iVar7 = (int)fVar10;
        }
        fVar10 = ((*(float *)(in_RDX + 0x8c) - fVar1) / fVar11) * _LC5 * fVar12;
        if ((float)((uint)fVar10 & _LC6) < _LC1) {
          fVar10 = (float)((uint)((float)(int)fVar10 +
                                 (float)(-(uint)((float)(int)fVar10 < fVar10) & _LC3)) |
                          ~_LC6 & (uint)fVar10);
        }
        if (fVar12 <= fVar10) {
          fVar10 = fVar12;
        }
        if (1 < (int)fVar10 - iVar7) {
          *(undefined8 *)param_1 = 0;
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(float *)(param_1 + 8) = ((float)(((int)fVar10 + iVar7) / 2) * fVar11) / fVar12 + fVar1;
          return param_1;
        }
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 0x14;
      } while (uVar8 < uVar2);
    }
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x100000000;
  return param_1;
}



/* embree::FastAllocator::reset() */

void __thiscall embree::FastAllocator::reset(FastAllocator *this)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  FastAllocator *pFVar4;
  long lVar5;
  FastAllocator *pFVar6;
  ulong uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  pFVar6 = this + 0xf8;
  plVar8 = &local_48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pFVar4 = this + 0xb8;
  do {
    while (*(long *)pFVar4 != 0) {
      lVar5 = *(long *)(*(long *)pFVar4 + 0x18);
      *(long *)(*(long *)pFVar4 + 0x18) = *(long *)pFVar6;
      LOCK();
      *(long *)pFVar6 = *(long *)pFVar4;
      UNLOCK();
      LOCK();
      *(long *)pFVar4 = lVar5;
      UNLOCK();
    }
    LOCK();
    *(long *)pFVar4 = 0;
    UNLOCK();
    pFVar4 = pFVar4 + 8;
  } while (pFVar4 != pFVar6);
  LOCK();
  *(undefined8 *)(this + 0x118) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x120) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x128) = 0;
  UNLOCK();
  pFVar4 = this + 0x100;
  while (*(long *)pFVar6 != 0) {
    puVar2 = *(ulong **)pFVar6;
    uVar7 = *puVar2;
    if (*puVar2 < puVar2[1]) {
      uVar7 = puVar2[1];
    }
    LOCK();
    puVar2[1] = uVar7;
    UNLOCK();
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    lVar5 = *(long *)(*(long *)pFVar6 + 0x18);
    *(long *)(*(long *)pFVar6 + 0x18) = *(long *)pFVar4;
    LOCK();
    *(long *)pFVar4 = *(long *)pFVar6;
    UNLOCK();
    LOCK();
    *(long *)pFVar6 = lVar5;
    UNLOCK();
  }
  lVar5 = *(long *)(this + 0x100);
  local_48 = lVar5;
  for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x18)) {
    while (*(int *)(lVar5 + 0x28) != 2) {
      plVar8 = (long *)(lVar5 + 0x18);
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) goto LAB_00103eb7;
    }
    *plVar8 = *(undefined8 *)(lVar5 + 0x18);
  }
LAB_00103eb7:
  LOCK();
  *(long *)pFVar4 = local_48;
  UNLOCK();
  pFVar6 = this + 0x78;
  do {
    LOCK();
    *(long *)pFVar6 = 0;
    UNLOCK();
    LOCK();
    *(long *)(pFVar6 + 0x40) = 0;
    UNLOCK();
    pFVar6 = pFVar6 + 8;
  } while (pFVar6 != this + 0xb8);
  plVar8 = *(long **)(this + 0x130);
  plVar3 = *(long **)(this + 0x138);
  if (plVar3 != plVar8) {
    do {
      while( true ) {
        lVar5 = *plVar8;
        if (this != *(FastAllocator **)(lVar5 + 8)) break;
        embree::MutexSys::lock();
        if (this == *(FastAllocator **)(lVar5 + 8)) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x118);
          *plVar1 = *plVar1 + *(long *)(lVar5 + 0xa8) + *(long *)(lVar5 + 0x68);
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x120);
          *plVar1 = *plVar1 + (((*(long *)(lVar5 + 0x98) + *(long *)(lVar5 + 0x58)) -
                               *(long *)(lVar5 + 0x50)) - *(long *)(lVar5 + 0x90));
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x128);
          *plVar1 = *plVar1 + *(long *)(lVar5 + 0xb0) + *(long *)(lVar5 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar5 + 0x48) = 0;
          *(undefined8 *)(lVar5 + 0x58) = 0;
          *(undefined8 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x68) = 0;
          *(undefined8 *)(lVar5 + 0x70) = 0;
          *(undefined8 *)(lVar5 + 0x60) = 0;
          *(undefined8 *)(lVar5 + 0x88) = 0;
          *(undefined8 *)(lVar5 + 0x98) = 0;
          *(undefined8 *)(lVar5 + 0x90) = 0;
          *(undefined8 *)(lVar5 + 0xa8) = 0;
          *(undefined8 *)(lVar5 + 0xb0) = 0;
          *(undefined8 *)(lVar5 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar5 + 8) = 0;
          UNLOCK();
        }
        plVar8 = plVar8 + 1;
        embree::MutexSys::unlock();
        if (plVar3 == plVar8) goto LAB_00104008;
      }
      plVar8 = plVar8 + 1;
    } while (plVar3 != plVar8);
LAB_00104008:
    if (*(long *)(this + 0x130) != *(long *)(this + 0x138)) {
      *(long *)(this + 0x138) = *(long *)(this + 0x130);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FastAllocator::init_estimate(unsigned long) */

void __thiscall embree::FastAllocator::init_estimate(FastAllocator *this,ulong param_1)

{
  FastAllocator *pFVar1;
  long lVar2;
  FastAllocator *pFVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  pFVar3 = this + 0xb8;
  pFVar1 = this + 0xf8;
  do {
    while (*(long *)pFVar3 != 0) {
      lVar2 = *(long *)(*(long *)pFVar3 + 0x18);
      *(long *)(*(long *)pFVar3 + 0x18) = *(long *)pFVar1;
      LOCK();
      *(long *)pFVar1 = *(long *)pFVar3;
      UNLOCK();
      LOCK();
      *(long *)pFVar3 = lVar2;
      UNLOCK();
    }
    LOCK();
    *(long *)pFVar3 = 0;
    UNLOCK();
    pFVar3 = pFVar3 + 8;
  } while (pFVar1 != pFVar3);
  if ((*(long *)(this + 0xf8) != 0) || (*(long *)(this + 0x100) != 0)) {
    reset(this);
    return;
  }
  *(ulong *)(this + 0x18) = param_1;
  uVar6 = 3;
  this[0x10a] = (FastAllocator)0x0;
  uVar5 = param_1 / 0x14 + 0x7f & 0xffffffffffffff80;
  uVar4 = 0x1fffc0;
  if (uVar5 < 0x1fffc1) {
    uVar4 = uVar5;
  }
  if (uVar4 < 0x400) {
    uVar4 = 0x400;
  }
  *(ulong *)(this + 0x28) = uVar4;
  *(ulong *)(this + 0x20) = uVar4;
  if (param_1 <= uVar4 * 0x50) {
    uVar6 = (ulong)(uVar4 * 0x28 < param_1);
  }
  *(ulong *)(this + 8) = uVar6;
  if (uVar4 * 0xa0 < param_1) {
    *(undefined8 *)(this + 8) = 7;
    if (uVar4 * 0x140 < param_1) {
LAB_001041f5:
      *(undefined8 *)(this + 0x10) = 0x1040;
      *(ulong *)(this + 0x20) = uVar4 * 2;
      goto LAB_00104161;
    }
  }
  else {
    if (uVar4 * 0x140 < param_1) goto LAB_001041f5;
    if (0x1040 < uVar5) {
      uVar5 = 0x1040;
    }
    if (uVar5 < 0x400) {
      uVar5 = 0x400;
    }
    *(ulong *)(this + 0x10) = uVar5;
    if (param_1 != 0) goto LAB_00104161;
    *(undefined8 *)(this + 0x28) = 0x1fffc0;
  }
  *(undefined8 *)(this + 0x10) = 0x1040;
LAB_00104161:
  LOCK();
  *(undefined8 *)(this + 0x110) = 0;
  UNLOCK();
  lVar2 = *(long *)this;
  if (*(long *)(lVar2 + 0x4e0) != 0) {
    *(long *)(this + 0x20) = *(long *)(lVar2 + 0x4e0);
  }
  if ((((0 < *(int *)(lVar2 + 0x4e8)) &&
       (*(undefined8 *)(this + 8) = 0, 1 < *(int *)(lVar2 + 0x4e8))) &&
      (*(undefined8 *)(this + 8) = 1, 3 < *(int *)(lVar2 + 0x4e8))) &&
     (*(undefined8 *)(this + 8) = 3, 7 < *(int *)(lVar2 + 0x4e8))) {
    *(undefined8 *)(this + 8) = 7;
  }
  if (*(long *)(lVar2 + 0x4f0) != 0) {
    *(long *)(this + 0x10) = *(long *)(lVar2 + 0x4f0);
  }
  if (*(int *)(lVar2 + 0x4f8) != -1) {
    this[0x10a] = (FastAllocator)(*(int *)(lVar2 + 0x4f8) != 0);
  }
  return;
}



/* embree::FastAllocator::Block::create(embree::Device*, bool, unsigned long, unsigned long,
   embree::FastAllocator::Block*, embree::FastAllocator::AllocationType) */

undefined8 *
embree::FastAllocator::Block::create
          (long *param_1,char param_2,ulong param_3,long param_4,undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  bool local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == 1) {
    if (0x1fffbf < param_3) {
      uVar2 = param_3 + 0x103f & 0xfffffffffffff000;
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x20))(param_1,uVar2,0);
      }
      uVar4 = param_4 + 0x103fU & 0xfffffffffffff000;
      puVar1 = (undefined8 *)embree::os_malloc(uVar4,&local_31);
      *puVar1 = 0;
      puVar1[1] = uVar2 - 0x40;
      puVar1[2] = uVar4 - 0x40;
      puVar1[3] = param_5;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 1;
      *(bool *)((long)puVar1 + 0x2c) = local_31;
      goto LAB_001042e0;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_6 != 0) goto LAB_001042e0;
    if (param_3 == 0x3fffc0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x20))(param_1,0x400040,0);
      }
      if (param_2 == '\0') {
        puVar1 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
      }
      else {
        puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,0x400000,0x40);
      }
      pvVar3 = (void *)((ulong)puVar1 & 0xffffffffffe00000);
      embree::os_advise(pvVar3,0x200000);
      embree::os_advise((void *)((long)pvVar3 + 0x200000),0x200000);
      embree::os_advise((void *)((long)pvVar3 + 0x400000),0x200000);
      *puVar1 = 0;
      puVar1[1] = 0x3fffc0;
      puVar1[2] = 0x3fffc0;
      puVar1[3] = param_5;
      puVar1[4] = 0x40;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined1 *)((long)puVar1 + 0x2c) = 0;
      goto LAB_001042e0;
    }
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_3 + 0x80,0);
  }
  if (param_2 == '\0') {
    puVar1 = (undefined8 *)embree::alignedMalloc(param_3 + 0x40,0x40);
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,param_3 + 0x40,0x40);
  }
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = param_3;
  puVar1[3] = param_5;
  puVar1[4] = 0x40;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
LAB_001042e0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar1;
}



/* embree::FastAllocator::malloc(unsigned long&, unsigned long, bool) */

void __thiscall
embree::FastAllocator::malloc(FastAllocator *this,ulong *param_1,ulong param_2,bool param_3)

{
  FastAllocator *pFVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  FastAllocator *pFVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  
  do {
    uVar4 = embree::TaskScheduler::threadID();
    lVar2 = (uVar4 & *(ulong *)(this + 8)) * 8;
    pFVar1 = this + lVar2 + 0x78;
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 != (ulong *)0x0) {
      puVar9 = *(undefined8 **)this;
      if (puVar9 != (undefined8 *)0x0) {
        puVar9 = puVar9 + 0xa9;
      }
      uVar4 = -param_2 & (param_2 - 1) + *param_1;
      if (puVar3[2] < *puVar3 + uVar4) {
        if (param_3) {
          LOCK();
          uVar6 = *puVar3;
          *puVar3 = *puVar3 + uVar4;
          UNLOCK();
          goto LAB_0010452a;
        }
      }
      else {
        LOCK();
        uVar6 = *puVar3;
        *puVar3 = *puVar3 + uVar4;
        UNLOCK();
        if ((uVar4 + uVar6 <= puVar3[2]) || (param_3)) {
LAB_0010452a:
          if (uVar6 <= puVar3[2]) {
            uVar5 = puVar3[2] - uVar6;
            if (uVar4 < puVar3[2] - uVar6) {
              uVar5 = uVar4;
            }
            *param_1 = uVar5;
            if ((puVar9 != (undefined8 *)0x0) && (puVar3[1] < uVar5 + uVar6)) {
              uVar4 = puVar3[1];
              if (puVar3[1] <= uVar6) {
                uVar4 = uVar6;
              }
              (**(code **)*puVar9)(puVar9,(uVar5 + uVar6) - uVar4,1);
            }
            if ((long)puVar3 + uVar6 + 0x40 != 0) {
              return;
            }
          }
        }
      }
      if (this[0x109] == (FastAllocator)0x0) {
LAB_0010473a:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_0010473a;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar3 == *(ulong **)pFVar1) {
        pFVar8 = this + lVar2 + 0xb8;
        uVar10 = *(undefined4 *)(this + 0x148);
        uVar4 = (param_2 - 1) + *param_1 & -param_2;
        uVar6 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar6 = *(ulong *)(this + 0x20);
        }
        uVar7 = *(undefined8 *)pFVar8;
        if (uVar4 < uVar6) {
          uVar4 = uVar6;
        }
LAB_00104604:
        uVar7 = Block::create(*(undefined8 *)this,this[0x108],uVar4,uVar4,uVar7,uVar10);
        LOCK();
        *(undefined8 *)pFVar1 = uVar7;
        UNLOCK();
        LOCK();
        *(undefined8 *)pFVar8 = uVar7;
        UNLOCK();
      }
    }
    else {
      embree::MutexSys::lock();
      if (puVar3 == *(ulong **)pFVar1) {
        if (*(long *)(this + 0x100) == 0) {
          LOCK();
          pFVar8 = this + 0x110;
          lVar2 = *(long *)pFVar8;
          *(long *)pFVar8 = *(long *)pFVar8 + 1;
          UNLOCK();
          uVar10 = *(undefined4 *)(this + 0x148);
          uVar7 = *(undefined8 *)(this + 0xf8);
          pFVar8 = this + 0xf8;
          uVar4 = 0x10;
          if (lVar2 + 1U < 0x11) {
            uVar4 = lVar2 + 1U;
          }
          uVar4 = *(long *)(this + 0x20) << ((byte)uVar4 & 0x3f);
          if (*(ulong *)(this + 0x28) < uVar4) {
            uVar4 = *(ulong *)(this + 0x28);
          }
          goto LAB_00104604;
        }
        uVar7 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
        *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
        LOCK();
        *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
        UNLOCK();
        LOCK();
        *(undefined8 *)pFVar1 = *(undefined8 *)(this + 0x100);
        UNLOCK();
        LOCK();
        *(undefined8 *)(this + 0x100) = uVar7;
        UNLOCK();
      }
    }
    embree::MutexSys::unlock();
  } while( true );
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<embree::FastAllocator::ThreadLocal2*,
   std::allocator<embree::FastAllocator::ThreadLocal2*>
   >::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*
   const&>(__gnu_cxx::__normal_iterator<embree::FastAllocator::ThreadLocal2**,
   std::vector<embree::FastAllocator::ThreadLocal2*,
   std::allocator<embree::FastAllocator::ThreadLocal2*> > >, embree::FastAllocator::ThreadLocal2*
   const&) */

void __thiscall
std::
vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>::
_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
          (vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
           *this,void *param_2,undefined8 *param_3)

{
  void *__src;
  ulong uVar1;
  void *pvVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  ulong uVar4;
  size_t __n_00;
  
  pvVar2 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar1 = (long)pvVar2 - (long)__src >> 3;
  if (uVar1 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar2) {
    if (0xfffffffffffffffe < uVar1) goto LAB_00104840;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00104840:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_001047c9;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_001047c9:
  *(undefined8 *)((long)__dest + __n) = *param_3;
  if (0 < (long)__n) {
    memmove(__dest,__src,__n);
  }
  __n_00 = (long)pvVar2 - (long)param_2;
  pvVar2 = (void *)((long)__dest + __n + 8);
  if (0 < (long)__n_00) {
    pvVar2 = memmove(pvVar2,param_2,__n_00);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
  }
  *(void **)this = __dest;
  *(size_t *)(this + 8) = __n_00 + (long)pvVar2;
  *(long *)(this + 0x10) = lVar3;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > >
   >::_M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >*,
   std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > > > >,
   std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >&&) */

void __thiscall
std::
vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
::
_M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
          (vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar5 = *(undefined8 **)(this + 8);
  puVar1 = *(undefined8 **)this;
  uVar3 = (long)puVar5 - (long)puVar1 >> 3;
  if (uVar3 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar1 == puVar5) {
    if (0xfffffffffffffffe < uVar3) goto LAB_001049d0;
    uVar8 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar8 = uVar3 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_001049da:
    puVar7 = (undefined8 *)operator_new(uVar8);
    lVar10 = uVar8 + (long)puVar7;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar1)) = *param_3;
    puVar4 = puVar7 + 1;
    *param_3 = 0;
    if (param_2 != puVar1) {
LAB_00104941:
      puVar4 = puVar1;
      puVar9 = puVar7;
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar9 = uVar2;
        puVar9 = puVar9 + 1;
      } while (puVar4 != param_2);
      puVar4 = (undefined8 *)((long)puVar7 + (long)param_2 + (8 - (long)puVar1));
    }
    if (param_2 == puVar5) goto LAB_00104994;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar3) {
LAB_001049d0:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_001049da;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_001049da;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)((long)param_2 - (long)puVar1) = *param_3;
    puVar4 = (undefined8 *)&DAT_00000008;
    *param_3 = 0;
    if (param_2 != puVar1) goto LAB_00104941;
  }
  puVar9 = (undefined8 *)(((long)puVar5 - (long)param_2) + (long)puVar4);
  puVar5 = puVar4;
  do {
    uVar2 = *param_2;
    puVar6 = puVar5 + 1;
    param_2 = param_2 + 1;
    *puVar5 = uVar2;
    puVar5 = puVar6;
    puVar4 = puVar9;
  } while (puVar6 != puVar9);
LAB_00104994:
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,*(long *)(this + 0x10) - (long)puVar1);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar4;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__heap_select<embree::PrimRefMB*,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::PrimRefMB*, embree::PrimRefMB*, embree::PrimRefMB*,
   __gnu_cxx::__ops::_Iter_less_iter) */

void std::__heap_select<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x50 < (long)param_2 - (long)param_1) {
    lVar7 = (((long)param_2 - (long)param_1 >> 4) * -0x3333333333333333 + -2) / 2;
    while (__adjust_heap<embree::PrimRefMB*,long,embree::PrimRefMB,__gnu_cxx::__ops::_Iter_less_iter>
                     (), lVar7 != 0) {
      lVar7 = lVar7 + -1;
    }
  }
  if (param_2 < param_3) {
    do {
      while (CONCAT44(*(undefined4 *)((long)param_1 + 0x1c),*(undefined4 *)((long)param_1 + 0xc)) <=
             CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),*(undefined4 *)((long)param_2 + 0xc))) {
        param_2 = param_2 + 10;
        if (param_3 <= param_2) goto LAB_00104c21;
      }
      uVar5 = param_1[1];
      puVar6 = param_2 + 10;
      *param_2 = *param_1;
      param_2[1] = uVar5;
      uVar5 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar5;
      uVar2 = *(undefined4 *)((long)param_1 + 0x24);
      uVar3 = *(undefined4 *)(param_1 + 5);
      uVar4 = *(undefined4 *)((long)param_1 + 0x2c);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)((long)param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 5) = uVar3;
      *(undefined4 *)((long)param_2 + 0x2c) = uVar4;
      uVar5 = param_1[7];
      param_2[6] = param_1[6];
      param_2[7] = uVar5;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)((long)param_2 + 0x44) = *(undefined4 *)((long)param_1 + 0x44);
      __adjust_heap<embree::PrimRefMB*,long,embree::PrimRefMB,__gnu_cxx::__ops::_Iter_less_iter>();
      param_2 = puVar6;
    } while (puVar6 < param_3);
  }
LAB_00104c21:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::SetMB::deterministic_order() const */

void __thiscall embree::SetMB::deterministic_order(SetMB *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = *(long *)(*(long *)(this + 0x90) + 0x20) + *(long *)(this + 0x68) * 0x50;
  lVar5 = *(long *)(*(long *)(this + 0x90) + 0x20) + *(long *)(this + 0x60) * 0x50;
  if (lVar1 == lVar5) {
    return;
  }
  lVar3 = *(long *)(this + 0x68) * 0x50 + *(long *)(this + 0x60) * -0x50;
  uVar4 = (lVar3 >> 4) * -0x3333333333333333;
  if (uVar4 == 0) {
    std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
              (lVar5,lVar1,0xfffffffffffffffe);
  }
  else {
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
              (lVar5,lVar1,(long)(int)lVar2 * 2);
    if (0x500 < lVar3) {
      lVar3 = lVar5 + 0x500;
      std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>(lVar5,lVar3);
      for (; lVar1 != lVar3; lVar3 = lVar3 + 0x50) {
        std::__unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>(lVar3);
      }
      return;
    }
  }
  std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>(lVar5,lVar1);
  return;
}



/* embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>
   >(embree::sse2::RecalculatePrimRef<embree::TriangleMesh> const&)
   const::{lambda(embree::range<unsigned long>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long> const&) const */

_func_linearBounds_RecalculatePrimRef_ptr * __thiscall
const::{lambda(embree::range<unsigned_long>const&)#1}::operator()
          (_lambda_embree__range<unsigned_long>const___1_ *this,range *param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong *in_RDX;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  uVar6 = _LC10;
  local_58._4_4_ = _LC8;
  local_68._0_8_ = CONCAT44(_LC10,_LC10);
  local_68._8_4_ = _LC10;
  local_68._12_4_ = _LC10;
  *(undefined1 (*) [16])this = local_68;
  *(undefined4 *)(this + 0x10) = local_58._4_4_;
  *(undefined4 *)(this + 0x14) = local_58._4_4_;
  *(undefined4 *)(this + 0x18) = local_58._4_4_;
  *(undefined4 *)(this + 0x1c) = local_58._4_4_;
  *(undefined1 (*) [16])(this + 0x20) = local_68;
  *(undefined4 *)(this + 0x30) = local_58._4_4_;
  *(undefined4 *)(this + 0x34) = local_58._4_4_;
  *(undefined4 *)(this + 0x38) = local_58._4_4_;
  *(undefined4 *)(this + 0x3c) = local_58._4_4_;
  fVar5 = _LC3;
  uVar10 = *in_RDX;
  if (uVar10 < in_RDX[1]) {
    local_58._0_4_ = local_58._4_4_;
    local_58._8_4_ = local_58._4_4_;
    local_58._12_4_ = local_58._4_4_;
    auVar42._8_4_ = uVar6;
    auVar42._0_8_ = local_68._0_8_;
    auVar42._12_4_ = uVar6;
    local_78._4_4_ = local_58._4_4_;
    local_78._0_4_ = local_58._4_4_;
    local_78._8_4_ = local_58._4_4_;
    local_78._12_4_ = local_58._4_4_;
    do {
      lVar14 = *(long *)param_1;
      lVar8 = uVar10 * 0x50 + *(long *)(*(long *)(lVar14 + 0x90) + 0x20);
      lVar2 = *(long *)(*(long *)(**(long **)(param_1 + 8) + 0x1e0) +
                       (ulong)*(uint *)(lVar8 + 0xc) * 8);
      fVar20 = *(float *)(lVar2 + 0x2c);
      fVar1 = *(float *)(lVar2 + 0x28);
      fVar18 = *(float *)(lVar2 + 0x30) - fVar20;
      fVar29 = (*(float *)(lVar14 + 0x88) - fVar20) / fVar18;
      fVar18 = (*(float *)(lVar14 + 0x8c) - fVar20) / fVar18;
      fVar19 = fVar1 * fVar29;
      fVar34 = fVar1 * fVar18;
      fVar20 = fVar19;
      if ((float)(_LC6 & (uint)fVar19) < _LC1) {
        fVar20 = (float)(~_LC6 & (uint)fVar19 |
                        (uint)((float)(int)fVar19 -
                              (float)(-(uint)(fVar19 < (float)(int)fVar19) & (uint)fVar5)));
      }
      fVar21 = fVar34;
      if ((float)(_LC6 & (uint)fVar34) < _LC1) {
        fVar21 = (float)(~_LC6 & (uint)fVar34 |
                        (uint)((float)(int)fVar34 +
                              (float)(-(uint)((float)(int)fVar34 < fVar34) & (uint)fVar5)));
      }
      iVar7 = (int)fVar20;
      if (fVar20 <= 0.0) {
        lVar14 = 0;
        iVar17 = 0;
      }
      else {
        fVar19 = fVar19 - fVar20;
        lVar14 = (long)iVar7 * 0x30;
        iVar17 = iVar7;
      }
      lVar3 = *(long *)(lVar2 + 0xd0);
      fVar20 = fVar21;
      if (fVar1 <= fVar21) {
        fVar20 = fVar1;
      }
      if (iVar7 < 0) {
        iVar7 = -1;
      }
      iVar4 = (int)fVar1 + 1;
      if ((int)fVar21 < (int)fVar1 + 1) {
        iVar4 = (int)fVar21;
      }
      puVar12 = (uint *)((ulong)*(uint *)(lVar8 + 0x1c) * *(long *)(lVar2 + 0x60) +
                        *(long *)(lVar2 + 0x58));
      uVar9 = (ulong)*puVar12;
      lVar2 = *(long *)(lVar14 + lVar3);
      lVar14 = ((long *)(lVar14 + lVar3))[1];
      auVar40 = *(undefined1 (*) [16])(lVar2 + uVar9 * lVar14);
      uVar11 = (ulong)puVar12[1];
      uVar13 = (ulong)puVar12[2];
      auVar32 = *(undefined1 (*) [16])(lVar2 + lVar14 * uVar11);
      auVar31 = *(undefined1 (*) [16])(lVar2 + lVar14 * uVar13);
      auVar24 = minps(auVar40,auVar32);
      auVar40 = maxps(auVar40,auVar32);
      plVar15 = (long *)((long)(int)fVar20 * 0x30 + lVar3);
      lVar14 = *plVar15;
      lVar2 = plVar15[1];
      auVar24 = minps(auVar24,auVar31);
      auVar41 = maxps(auVar40,auVar31);
      auVar40 = *(undefined1 (*) [16])(lVar14 + lVar2 * uVar9);
      auVar32 = *(undefined1 (*) [16])(lVar14 + lVar2 * uVar13);
      auVar31 = *(undefined1 (*) [16])(lVar14 + lVar2 * uVar11);
      auVar25 = minps(auVar40,auVar31);
      auVar31 = maxps(auVar40,auVar31);
      auVar40 = minps(auVar25,auVar32);
      auVar32 = maxps(auVar31,auVar32);
      fVar27 = auVar41._0_4_;
      fVar21 = auVar32._0_4_;
      fVar28 = auVar41._4_4_;
      fVar22 = auVar32._4_4_;
      fVar23 = auVar32._8_4_;
      fVar26 = auVar32._12_4_;
      fVar35 = auVar41._12_4_;
      fVar30 = auVar41._8_4_;
      fStack_84 = auVar24._4_4_;
      fStack_80 = auVar24._8_4_;
      fStack_7c = auVar24._12_4_;
      fStack_94 = auVar40._4_4_;
      fStack_90 = auVar40._8_4_;
      fStack_8c = auVar40._12_4_;
      local_88 = auVar24._0_4_;
      local_98 = auVar40._0_4_;
      if (iVar4 - iVar7 == 1) {
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
          fVar1 = fVar5;
        }
        else {
          fVar1 = fVar5 - fVar19;
        }
        fVar20 = fVar20 - fVar34;
        auVar32._0_4_ = fVar19 * fVar21 + fVar1 * fVar27;
        auVar32._4_4_ = fVar19 * fVar22 + fVar1 * fVar28;
        auVar32._8_4_ = fVar19 * fVar23 + fVar1 * fVar30;
        auVar32._12_4_ = fVar19 * fVar26 + fVar1 * fVar35;
        auVar40._0_4_ = fVar19 * local_98 + fVar1 * local_88;
        auVar40._4_4_ = fVar19 * fStack_94 + fVar1 * fStack_84;
        auVar40._8_4_ = fVar19 * fStack_90 + fVar1 * fStack_80;
        auVar40._12_4_ = fVar19 * fStack_8c + fVar1 * fStack_7c;
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
          fVar1 = fVar5;
        }
        else {
          fVar1 = fVar5 - fVar20;
        }
        auVar24._0_4_ = fVar27 * fVar20 + fVar21 * fVar1;
        auVar24._4_4_ = fVar28 * fVar20 + fVar22 * fVar1;
        auVar24._8_4_ = fVar30 * fVar20 + fVar23 * fVar1;
        auVar24._12_4_ = fVar35 * fVar20 + fVar26 * fVar1;
        auVar31._0_4_ = fVar20 * local_88 + fVar1 * local_98;
        auVar31._4_4_ = fVar20 * fStack_84 + fVar1 * fStack_94;
        auVar31._8_4_ = fVar20 * fStack_80 + fVar1 * fStack_90;
        auVar31._12_4_ = fVar20 * fStack_7c + fVar1 * fStack_8c;
      }
      else {
        plVar16 = (long *)((long)(iVar17 + 1) * 0x30 + lVar3);
        plVar15 = (long *)((long)((int)fVar20 + -1) * 0x30 + lVar3);
        lVar14 = *plVar16;
        lVar2 = plVar16[1];
        auVar40 = *(undefined1 (*) [16])(lVar14 + uVar9 * lVar2);
        auVar32 = *(undefined1 (*) [16])(lVar14 + uVar11 * lVar2);
        auVar31 = *(undefined1 (*) [16])(lVar14 + lVar2 * uVar13);
        lVar14 = *plVar15;
        lVar2 = plVar15[1];
        auVar24 = minps(auVar40,auVar32);
        auVar40 = maxps(auVar40,auVar32);
        auVar33 = minps(auVar24,auVar31);
        auVar36 = maxps(auVar40,auVar31);
        auVar40 = *(undefined1 (*) [16])(lVar14 + uVar9 * lVar2);
        auVar32 = *(undefined1 (*) [16])(lVar14 + uVar11 * lVar2);
        auVar31 = *(undefined1 (*) [16])(lVar14 + lVar2 * uVar13);
        auVar24 = maxps(auVar40,auVar32);
        auVar40 = minps(auVar40,auVar32);
        auVar25 = maxps(auVar24,auVar31);
        auVar41 = minps(auVar40,auVar31);
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
          fVar37 = fVar5;
        }
        else {
          fVar37 = fVar5 - fVar19;
        }
        fVar20 = fVar20 - fVar34;
        local_48 = auVar33._0_4_;
        fStack_44 = auVar33._4_4_;
        fStack_40 = auVar33._8_4_;
        fStack_3c = auVar33._12_4_;
        auVar32._0_4_ = auVar36._0_4_ * fVar19 + fVar27 * fVar37;
        auVar32._4_4_ = auVar36._4_4_ * fVar19 + fVar28 * fVar37;
        auVar32._8_4_ = auVar36._8_4_ * fVar19 + fVar30 * fVar37;
        auVar32._12_4_ = auVar36._12_4_ * fVar19 + fVar35 * fVar37;
        auVar40._0_4_ = fVar19 * local_48 + fVar37 * local_88;
        auVar40._4_4_ = fVar19 * fStack_44 + fVar37 * fStack_84;
        auVar40._8_4_ = fVar19 * fStack_40 + fVar37 * fStack_80;
        auVar40._12_4_ = fVar19 * fStack_3c + fVar37 * fStack_7c;
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
          fVar19 = fVar5;
        }
        else {
          fVar19 = fVar5 - fVar20;
        }
        iVar7 = iVar7 + 1;
        auVar24._0_4_ = auVar25._0_4_ * fVar20 + fVar21 * fVar19;
        auVar24._4_4_ = auVar25._4_4_ * fVar20 + fVar22 * fVar19;
        auVar24._8_4_ = auVar25._8_4_ * fVar20 + fVar23 * fVar19;
        auVar24._12_4_ = auVar25._12_4_ * fVar20 + fVar26 * fVar19;
        auVar31._0_4_ = fVar20 * auVar41._0_4_ + fVar19 * local_98;
        auVar31._4_4_ = fVar20 * auVar41._4_4_ + fVar19 * fStack_94;
        auVar31._8_4_ = fVar20 * auVar41._8_4_ + fVar19 * fStack_90;
        auVar31._12_4_ = fVar20 * auVar41._12_4_ + fVar19 * fStack_8c;
        if (iVar7 < iVar4) {
          plVar15 = (long *)((long)iVar7 * 0x30 + lVar3);
          do {
            lVar14 = plVar15[1];
            lVar2 = *plVar15;
            fVar20 = (float)iVar7;
            iVar7 = iVar7 + 1;
            plVar15 = plVar15 + 6;
            fVar30 = (fVar20 / fVar1 - fVar29) / (fVar18 - fVar29);
            fVar35 = fVar5 - fVar30;
            auVar25 = *(undefined1 (*) [16])(lVar2 + uVar9 * lVar14);
            auVar41 = *(undefined1 (*) [16])(lVar2 + uVar11 * lVar14);
            auVar33 = *(undefined1 (*) [16])(lVar2 + lVar14 * uVar13);
            auVar36 = maxps(auVar25,auVar41);
            auVar25 = minps(auVar25,auVar41);
            fVar20 = auVar40._4_4_;
            fVar19 = auVar40._8_4_;
            fVar34 = auVar40._12_4_;
            fVar37 = auVar32._4_4_;
            fVar38 = auVar32._8_4_;
            fVar39 = auVar32._12_4_;
            auVar36 = maxps(auVar36,auVar33);
            auVar25 = minps(auVar25,auVar33);
            fVar21 = auVar31._4_4_;
            fVar22 = auVar31._8_4_;
            fVar23 = auVar31._12_4_;
            fVar26 = auVar24._4_4_;
            fVar27 = auVar24._8_4_;
            fVar28 = auVar24._12_4_;
            auVar41._0_4_ = auVar25._0_4_ - (fVar30 * auVar31._0_4_ + fVar35 * auVar40._0_4_);
            auVar41._4_4_ = auVar25._4_4_ - (fVar30 * fVar21 + fVar35 * fVar20);
            auVar41._8_4_ = auVar25._8_4_ - (fVar30 * fVar22 + fVar35 * fVar19);
            auVar41._12_4_ = auVar25._12_4_ - (fVar30 * fVar23 + fVar35 * fVar34);
            auVar33._0_4_ = auVar36._0_4_ - (fVar30 * auVar24._0_4_ + fVar35 * auVar32._0_4_);
            auVar33._4_4_ = auVar36._4_4_ - (fVar30 * fVar26 + fVar35 * fVar37);
            auVar33._8_4_ = auVar36._8_4_ - (fVar30 * fVar27 + fVar35 * fVar38);
            auVar33._12_4_ = auVar36._12_4_ - (fVar30 * fVar28 + fVar35 * fVar39);
            auVar25 = minps(auVar41,(undefined1  [16])0x0);
            auVar41 = maxps(auVar33,(undefined1  [16])0x0);
            auVar40._0_4_ = auVar40._0_4_ + auVar25._0_4_;
            auVar40._4_4_ = fVar20 + auVar25._4_4_;
            auVar40._8_4_ = fVar19 + auVar25._8_4_;
            auVar40._12_4_ = fVar34 + auVar25._12_4_;
            auVar31._0_4_ = auVar31._0_4_ + auVar25._0_4_;
            auVar31._4_4_ = fVar21 + auVar25._4_4_;
            auVar31._8_4_ = fVar22 + auVar25._8_4_;
            auVar31._12_4_ = fVar23 + auVar25._12_4_;
            auVar32._0_4_ = auVar32._0_4_ + auVar41._0_4_;
            auVar32._4_4_ = fVar37 + auVar41._4_4_;
            auVar32._8_4_ = fVar38 + auVar41._8_4_;
            auVar32._12_4_ = fVar39 + auVar41._12_4_;
            auVar24._0_4_ = auVar24._0_4_ + auVar41._0_4_;
            auVar24._4_4_ = fVar26 + auVar41._4_4_;
            auVar24._8_4_ = fVar27 + auVar41._8_4_;
            auVar24._12_4_ = fVar28 + auVar41._12_4_;
          } while (iVar4 != iVar7);
        }
      }
      auVar42 = minps(auVar42,auVar40);
      uVar10 = uVar10 + 1;
      local_78 = maxps(local_78,auVar32);
      local_68 = minps(local_68,auVar31);
      local_58 = maxps(local_58,auVar24);
      *(undefined1 (*) [16])this = auVar42;
      *(undefined1 (*) [16])(this + 0x10) = local_78;
      *(undefined1 (*) [16])(this + 0x20) = local_68;
      *(undefined1 (*) [16])(this + 0x30) = local_58;
    } while (uVar10 < in_RDX[1]);
  }
  return (_func_linearBounds_RecalculatePrimRef_ptr *)this;
}



/* embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::range<unsigned
   long> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long> const&) const */

_lambda_embree__range<unsigned_long>const___1_ * __thiscall
embree::sse2::
HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::
{lambda(embree::range<unsigned_long>const&)#1}::operator()
          (_lambda_embree__range<unsigned_long>const___1_ *this,range *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [16];
  ulong *in_RDX;
  undefined8 *puVar14;
  int iVar15;
  float fVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  int iVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar42;
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int local_94;
  
  uVar9 = _LC10;
  uVar8 = _LC8;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  auVar26._4_4_ = uVar9;
  auVar26._0_4_ = uVar9;
  auVar26._8_4_ = uVar9;
  auVar26._12_4_ = uVar9;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x88) = 0x3f800000;
  *(undefined1 (*) [16])this = auVar26;
  *(undefined4 *)(this + 0x10) = uVar8;
  *(undefined4 *)(this + 0x14) = uVar8;
  *(undefined4 *)(this + 0x18) = uVar8;
  *(undefined4 *)(this + 0x1c) = uVar8;
  *(undefined1 (*) [16])(this + 0x20) = auVar26;
  *(undefined4 *)(this + 0x30) = uVar8;
  *(undefined4 *)(this + 0x34) = uVar8;
  *(undefined4 *)(this + 0x38) = uVar8;
  *(undefined4 *)(this + 0x3c) = uVar8;
  *(undefined1 (*) [16])(this + 0x40) = auVar26;
  *(undefined4 *)(this + 0x50) = uVar8;
  *(undefined4 *)(this + 0x54) = uVar8;
  *(undefined4 *)(this + 0x58) = uVar8;
  *(undefined4 *)(this + 0x5c) = uVar8;
  uVar10 = _LC6;
  uVar23 = *in_RDX;
  if (uVar23 < in_RDX[1]) {
    do {
      puVar12 = (undefined8 *)(uVar23 * 0x50 + *(long *)(*(long *)param_1 + 0x20));
      fVar35 = **(float **)(param_1 + 8);
      if ((_LC14 * *(float *)((long)puVar12 + 0x44) <= fVar35) ||
         (fVar30 = (*(float **)(param_1 + 8))[1], fVar30 <= _LC15 * *(float *)(puVar12 + 8))) {
        uVar7 = puVar12[1];
        puVar14 = (undefined8 *)
                  ((uVar23 - *(long *)(*(long *)(param_1 + 0x20) + 0x60)) * 0x50 +
                  *(long *)(**(long **)(param_1 + 0x18) + 0x20));
        *puVar14 = *puVar12;
        puVar14[1] = uVar7;
        uVar7 = puVar12[3];
        puVar14[2] = puVar12[2];
        puVar14[3] = uVar7;
        uVar7 = puVar12[5];
        puVar14[4] = puVar12[4];
        puVar14[5] = uVar7;
        uVar7 = puVar12[7];
        puVar14[6] = puVar12[6];
        puVar14[7] = uVar7;
        *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(puVar12 + 8);
        *(undefined4 *)((long)puVar14 + 0x44) = *(undefined4 *)((long)puVar12 + 0x44);
      }
      else {
        fVar27 = *(float *)((long)puVar12 + 0xc);
        fVar45 = *(float *)((long)puVar12 + 0x1c);
        lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x1e0) +
                         (ulong)(uint)fVar27 * 8);
        fVar1 = *(float *)(lVar4 + 0x2c);
        fVar2 = *(float *)(lVar4 + 0x30);
        fVar16 = *(float *)(lVar4 + 0x28);
        fVar46 = (fVar30 - fVar1) / (fVar2 - fVar1);
        fVar53 = (fVar35 - fVar1) / (fVar2 - fVar1);
        fVar47 = fVar46 * fVar16;
        fVar30 = fVar16 * fVar53;
        fVar35 = fVar30;
        if ((float)((uint)fVar30 & uVar10) < _LC1) {
          fVar35 = (float)(~uVar10 & (uint)fVar30 |
                          (uint)((float)(int)fVar30 -
                                (float)(-(uint)(fVar30 < (float)(int)fVar30) & (uint)_LC3)));
        }
        fVar36 = fVar47;
        if ((float)((uint)fVar47 & uVar10) < _LC1) {
          fVar36 = (float)(~uVar10 & (uint)fVar47 |
                          (uint)((float)(int)fVar47 +
                                (float)(-(uint)((float)(int)fVar47 < fVar47) & (uint)_LC3)));
        }
        iVar11 = (int)fVar35;
        if (fVar35 <= 0.0) {
          local_94 = 0;
          lVar18 = 0;
        }
        else {
          fVar30 = fVar30 - fVar35;
          lVar18 = (long)iVar11 * 0x30;
          local_94 = iVar11;
        }
        lVar5 = *(long *)(lVar4 + 0xd0);
        fVar35 = fVar36;
        if (fVar16 <= fVar36) {
          fVar35 = fVar16;
        }
        iVar24 = -1;
        if (-1 < iVar11) {
          iVar24 = iVar11;
        }
        iVar15 = (int)fVar16;
        iVar11 = iVar15 + 1;
        if ((int)fVar36 < iVar15 + 1) {
          iVar11 = (int)fVar36;
        }
        puVar20 = (uint *)((ulong)(uint)fVar45 * *(long *)(lVar4 + 0x60) + *(long *)(lVar4 + 0x58));
        uVar17 = (ulong)*puVar20;
        lVar6 = ((long *)(lVar18 + lVar5))[1];
        lVar18 = *(long *)(lVar18 + lVar5);
        auVar26 = *(undefined1 (*) [16])(lVar18 + uVar17 * lVar6);
        uVar19 = (ulong)puVar20[1];
        uVar21 = (ulong)puVar20[2];
        auVar54 = *(undefined1 (*) [16])(lVar18 + lVar6 * uVar19);
        auVar38 = *(undefined1 (*) [16])(lVar18 + lVar6 * uVar21);
        auVar28 = maxps(auVar26,auVar54);
        auVar26 = minps(auVar26,auVar54);
        plVar22 = (long *)((long)(int)fVar35 * 0x30 + lVar5);
        auVar29 = maxps(auVar28,auVar38);
        auVar28 = minps(auVar26,auVar38);
        lVar18 = *plVar22;
        lVar6 = plVar22[1];
        auVar26 = *(undefined1 (*) [16])(lVar18 + lVar6 * uVar17);
        auVar54 = *(undefined1 (*) [16])(lVar18 + lVar6 * uVar21);
        auVar38 = *(undefined1 (*) [16])(lVar18 + lVar6 * uVar19);
        auVar37 = minps(auVar26,auVar38);
        auVar26 = maxps(auVar26,auVar38);
        auVar38 = minps(auVar37,auVar54);
        auVar26 = maxps(auVar26,auVar54);
        fVar36 = auVar28._0_4_;
        fVar39 = auVar28._4_4_;
        fVar34 = auVar28._8_4_;
        fVar44 = auVar29._0_4_;
        fVar48 = auVar26._0_4_;
        fVar25 = auVar29._4_4_;
        fVar52 = auVar29._8_4_;
        fVar50 = auVar26._4_4_;
        fVar51 = auVar26._8_4_;
        fStack_b4 = auVar38._4_4_;
        fStack_b0 = auVar38._8_4_;
        local_b8 = auVar38._0_4_;
        if (iVar11 - iVar24 == 1) {
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
            fVar43 = _LC3;
          }
          else {
            fVar43 = _LC3 - fVar30;
          }
          fVar31 = fVar30 * local_b8 + fVar43 * fVar36;
          fVar32 = fVar30 * fStack_b4 + fVar43 * fVar39;
          fVar33 = fVar30 * fStack_b0 + fVar43 * fVar34;
          fVar35 = fVar35 - fVar47;
          fVar47 = fVar30 * fVar48 + fVar43 * fVar44;
          fVar42 = fVar30 * fVar50 + fVar43 * fVar25;
          fVar43 = fVar30 * fVar51 + fVar43 * fVar52;
          if (fVar35 <= 0.0) {
            fVar35 = 0.0;
            fVar30 = _LC3;
          }
          else {
            fVar30 = _LC3 - fVar35;
          }
          fVar48 = fVar44 * fVar35 + fVar48 * fVar30;
          fVar50 = fVar25 * fVar35 + fVar50 * fVar30;
          fVar51 = fVar52 * fVar35 + fVar51 * fVar30;
          fVar36 = fVar35 * fVar36 + local_b8 * fVar30;
          fVar39 = fVar35 * fVar39 + fStack_b4 * fVar30;
          fVar30 = fVar35 * fVar34 + fStack_b0 * fVar30;
        }
        else {
          plVar22 = (long *)((long)(local_94 + 1) * 0x30 + lVar5);
          lVar18 = *plVar22;
          lVar6 = plVar22[1];
          auVar54 = *(undefined1 (*) [16])(lVar18 + uVar17 * lVar6);
          auVar37 = *(undefined1 (*) [16])(lVar18 + uVar19 * lVar6);
          auVar3 = *(undefined1 (*) [16])(lVar18 + lVar6 * uVar21);
          auVar41 = maxps(auVar54,auVar37);
          auVar54 = minps(auVar54,auVar37);
          auVar41 = maxps(auVar41,auVar3);
          auVar55 = minps(auVar54,auVar3);
          plVar22 = (long *)((long)((int)fVar35 + -1) * 0x30 + lVar5);
          lVar18 = *plVar22;
          lVar6 = plVar22[1];
          auVar54 = *(undefined1 (*) [16])(lVar18 + uVar17 * lVar6);
          auVar37 = *(undefined1 (*) [16])(lVar18 + uVar19 * lVar6);
          auVar3 = *(undefined1 (*) [16])(lVar18 + lVar6 * uVar21);
          auVar49 = maxps(auVar54,auVar37);
          auVar54 = minps(auVar54,auVar37);
          auVar37 = maxps(auVar49,auVar3);
          auVar54 = minps(auVar54,auVar3);
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
            fVar40 = _LC3;
          }
          else {
            fVar40 = _LC3 - fVar30;
          }
          fVar35 = fVar35 - fVar47;
          fVar47 = auVar41._0_4_ * fVar30 + fVar44 * fVar40;
          fVar42 = auVar41._4_4_ * fVar30 + fVar25 * fVar40;
          fVar43 = auVar41._8_4_ * fVar30 + fVar52 * fVar40;
          fVar44 = auVar41._12_4_ * fVar30 + auVar29._12_4_ * fVar40;
          fVar31 = fVar30 * auVar55._0_4_ + fVar40 * fVar36;
          fVar32 = fVar30 * auVar55._4_4_ + fVar40 * fVar39;
          fVar33 = fVar30 * auVar55._8_4_ + fVar40 * fVar34;
          fVar34 = fVar30 * auVar55._12_4_ + fVar40 * auVar28._12_4_;
          if (fVar35 <= 0.0) {
            fVar35 = 0.0;
            fVar25 = _LC3;
          }
          else {
            fVar25 = _LC3 - fVar35;
          }
          iVar24 = iVar24 + 1;
          fStack_ac = auVar38._12_4_;
          fVar48 = auVar37._0_4_ * fVar35 + fVar48 * fVar25;
          fVar50 = auVar37._4_4_ * fVar35 + fVar50 * fVar25;
          fVar51 = auVar37._8_4_ * fVar35 + fVar51 * fVar25;
          fVar52 = auVar37._12_4_ * fVar35 + auVar26._12_4_ * fVar25;
          fVar36 = fVar35 * auVar54._0_4_ + fVar25 * local_b8;
          fVar39 = fVar35 * auVar54._4_4_ + fVar25 * fStack_b4;
          fVar30 = fVar35 * auVar54._8_4_ + fVar25 * fStack_b0;
          fVar35 = fVar35 * auVar54._12_4_ + fVar25 * fStack_ac;
          if (iVar24 < iVar11) {
            plVar22 = (long *)((long)iVar24 * 0x30 + lVar5);
            do {
              lVar18 = plVar22[1];
              lVar5 = *plVar22;
              fVar25 = (float)iVar24;
              iVar24 = iVar24 + 1;
              plVar22 = plVar22 + 6;
              fVar25 = (fVar25 / fVar16 - fVar53) / (fVar46 - fVar53);
              fVar40 = _LC3 - fVar25;
              auVar26 = *(undefined1 (*) [16])(lVar5 + uVar17 * lVar18);
              auVar54 = *(undefined1 (*) [16])(lVar5 + uVar19 * lVar18);
              auVar38 = *(undefined1 (*) [16])(lVar5 + lVar18 * uVar21);
              auVar28 = maxps(auVar26,auVar54);
              auVar26 = minps(auVar26,auVar54);
              auVar28 = maxps(auVar28,auVar38);
              auVar26 = minps(auVar26,auVar38);
              auVar54._0_4_ = auVar26._0_4_ - (fVar40 * fVar31 + fVar25 * fVar36);
              auVar54._4_4_ = auVar26._4_4_ - (fVar40 * fVar32 + fVar25 * fVar39);
              auVar54._8_4_ = auVar26._8_4_ - (fVar40 * fVar33 + fVar25 * fVar30);
              auVar54._12_4_ = auVar26._12_4_ - (fVar40 * fVar34 + fVar25 * fVar35);
              auVar38._0_4_ = auVar28._0_4_ - (fVar25 * fVar48 + fVar40 * fVar47);
              auVar38._4_4_ = auVar28._4_4_ - (fVar25 * fVar50 + fVar40 * fVar42);
              auVar38._8_4_ = auVar28._8_4_ - (fVar25 * fVar51 + fVar40 * fVar43);
              auVar38._12_4_ = auVar28._12_4_ - (fVar25 * fVar52 + fVar40 * fVar44);
              auVar26 = minps(auVar54,(undefined1  [16])0x0);
              auVar54 = maxps(auVar38,(undefined1  [16])0x0);
              fVar31 = fVar31 + auVar26._0_4_;
              fVar32 = fVar32 + auVar26._4_4_;
              fVar33 = fVar33 + auVar26._8_4_;
              fVar34 = fVar34 + auVar26._12_4_;
              fVar36 = fVar36 + auVar26._0_4_;
              fVar39 = fVar39 + auVar26._4_4_;
              fVar30 = fVar30 + auVar26._8_4_;
              fVar35 = fVar35 + auVar26._12_4_;
              fVar47 = fVar47 + auVar54._0_4_;
              fVar42 = fVar42 + auVar54._4_4_;
              fVar43 = fVar43 + auVar54._8_4_;
              fVar44 = fVar44 + auVar54._12_4_;
              fVar48 = fVar48 + auVar54._0_4_;
              fVar50 = fVar50 + auVar54._4_4_;
              fVar51 = fVar51 + auVar54._8_4_;
              fVar52 = fVar52 + auVar54._12_4_;
            } while (iVar11 != iVar24);
          }
        }
        fVar35 = fVar53 * _LC0 * fVar16;
        if ((float)((uint)fVar35 & uVar10) < _LC1) {
          fVar35 = (float)((uint)((float)(int)fVar35 -
                                 (float)(-(uint)(fVar35 < (float)(int)fVar35) & (uint)_LC3)) |
                          ~uVar10 & (uint)fVar35);
        }
        iVar11 = 0;
        if (0.0 <= fVar35) {
          iVar11 = (int)fVar35;
        }
        fVar35 = _LC5 * fVar46 * fVar16;
        if ((float)((uint)fVar35 & uVar10) < _LC1) {
          fVar35 = (float)((uint)((float)(int)fVar35 +
                                 (float)(-(uint)((float)(int)fVar35 < fVar35) & (uint)_LC3)) |
                          ~uVar10 & (uint)fVar35);
        }
        if (fVar35 < fVar16) {
          iVar15 = (int)fVar35;
        }
        fVar16 = (float)(iVar15 - iVar11);
        fVar35 = (float)(*(int *)(lVar4 + 0x24) + -1);
        auVar29._4_4_ = fVar42;
        auVar29._0_4_ = fVar47;
        auVar29._8_4_ = fVar43;
        auVar29._12_4_ = fVar45;
        auVar3._4_4_ = fVar50;
        auVar3._0_4_ = fVar48;
        auVar3._8_4_ = fVar51;
        auVar3._12_4_ = fVar35;
        fVar47 = fVar47 * _LC12;
        fVar42 = fVar42 * _LC12;
        fVar43 = fVar43 * _LC12;
        fVar45 = fVar45 * _LC12;
        auVar37._4_4_ = fVar39;
        auVar37._0_4_ = fVar36;
        auVar37._8_4_ = fVar30;
        auVar37._12_4_ = fVar16;
        fVar48 = fVar48 * _LC12;
        fVar50 = fVar50 * _LC12;
        fVar51 = fVar51 * _LC12;
        fVar46 = fVar35 * _LC12;
        auVar28._4_4_ = fVar32;
        auVar28._0_4_ = fVar31;
        auVar28._8_4_ = fVar33;
        auVar28._12_4_ = fVar27;
        fVar36 = fVar36 * _LC12;
        fVar39 = fVar39 * _LC12;
        fVar30 = fVar30 * _LC12;
        fVar53 = fVar16 * _LC12;
        fVar31 = _LC12 * fVar31;
        fVar32 = _LC12 * fVar32;
        fVar33 = _LC12 * fVar33;
        fVar27 = _LC12 * fVar27;
        pauVar13 = (undefined1 (*) [16])
                   ((uVar23 - *(long *)(*(long *)(param_1 + 0x20) + 0x60)) * 0x50 +
                   *(long *)(**(long **)(param_1 + 0x18) + 0x20));
        *pauVar13 = auVar28;
        pauVar13[1] = auVar29;
        pauVar13[2] = auVar37;
        pauVar13[3] = auVar3;
        *(float *)pauVar13[4] = fVar1;
        *(float *)(pauVar13[4] + 4) = fVar2;
        auVar41._0_4_ = fVar48 + fVar47 + fVar31 + fVar36;
        auVar41._4_4_ = fVar50 + fVar42 + fVar32 + fVar39;
        auVar41._8_4_ = fVar51 + fVar43 + fVar33 + fVar30;
        auVar41._12_4_ = fVar46 + fVar45 + fVar27 + fVar53;
        auVar26 = minps(*(undefined1 (*) [16])this,auVar28);
        *(undefined1 (*) [16])this = auVar26;
        auVar26 = maxps(*(undefined1 (*) [16])(this + 0x10),auVar29);
        *(undefined1 (*) [16])(this + 0x10) = auVar26;
        auVar26 = minps(*(undefined1 (*) [16])(this + 0x20),auVar37);
        *(undefined1 (*) [16])(this + 0x20) = auVar26;
        *(long *)(this + 0x68) = *(long *)(this + 0x68) + 1;
        auVar26 = maxps(*(undefined1 (*) [16])(this + 0x30),auVar3);
        *(ulong *)(this + 0x70) = *(long *)(this + 0x70) + (ulong)(uint)fVar16;
        *(undefined1 (*) [16])(this + 0x30) = auVar26;
        auVar26 = minps(*(undefined1 (*) [16])(this + 0x40),auVar41);
        *(undefined1 (*) [16])(this + 0x40) = auVar26;
        auVar26 = maxps(*(undefined1 (*) [16])(this + 0x50),auVar41);
        fVar30 = *(float *)(this + 0x88);
        if (fVar1 <= *(float *)(this + 0x88)) {
          fVar30 = fVar1;
        }
        *(undefined1 (*) [16])(this + 0x50) = auVar26;
        *(float *)(this + 0x88) = fVar30;
        fVar30 = fVar2;
        if (fVar2 <= *(float *)(this + 0x8c)) {
          fVar30 = *(float *)(this + 0x8c);
        }
        *(float *)(this + 0x8c) = fVar30;
        if (*(ulong *)(this + 0x78) < (ulong)(uint)fVar35) {
          *(ulong *)(this + 0x78) = (ulong)(uint)fVar35;
          *(float *)(this + 0x80) = fVar1;
          *(float *)(this + 0x84) = fVar2;
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < in_RDX[1]);
  }
  return this;
}



/* embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::range<unsigned
   long> const&)#3}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long> const&) const */

_lambda_embree__range<unsigned_long>const___3_ * __thiscall
embree::sse2::
HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::
{lambda(embree::range<unsigned_long>const&)#3}::operator()
          (_lambda_embree__range<unsigned_long>const___3_ *this,range *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  ulong *in_RDX;
  ulong uVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  undefined1 auVar46 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int local_a0;
  int local_8c;
  
  uVar11 = _LC10;
  uVar10 = _LC8;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  auVar28._4_4_ = uVar11;
  auVar28._0_4_ = uVar11;
  auVar28._8_4_ = uVar11;
  auVar28._12_4_ = uVar11;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x88) = 0x3f800000;
  *(undefined1 (*) [16])this = auVar28;
  *(undefined4 *)(this + 0x10) = uVar10;
  *(undefined4 *)(this + 0x14) = uVar10;
  *(undefined4 *)(this + 0x18) = uVar10;
  *(undefined4 *)(this + 0x1c) = uVar10;
  *(undefined1 (*) [16])(this + 0x20) = auVar28;
  *(undefined4 *)(this + 0x30) = uVar10;
  *(undefined4 *)(this + 0x34) = uVar10;
  *(undefined4 *)(this + 0x38) = uVar10;
  *(undefined4 *)(this + 0x3c) = uVar10;
  *(undefined1 (*) [16])(this + 0x40) = auVar28;
  *(undefined4 *)(this + 0x50) = uVar10;
  *(undefined4 *)(this + 0x54) = uVar10;
  *(undefined4 *)(this + 0x58) = uVar10;
  *(undefined4 *)(this + 0x5c) = uVar10;
  uVar12 = _LC6;
  uVar22 = *in_RDX;
  if (uVar22 < in_RDX[1]) {
    do {
      fVar9 = _LC12;
      pauVar20 = (undefined1 (*) [16])(uVar22 * 0x50 + *(long *)(*(long *)param_1 + 0x20));
      fVar36 = **(float **)(param_1 + 8);
      if ((fVar36 < _LC14 * *(float *)(pauVar20[4] + 4)) &&
         (fVar23 = (*(float **)(param_1 + 8))[1], _LC15 * *(float *)pauVar20[4] < fVar23)) {
        fVar4 = *(float *)(*pauVar20 + 0xc);
        fVar45 = *(float *)(pauVar20[1] + 0xc);
        lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x1e0) +
                         (ulong)(uint)fVar4 * 8);
        fVar1 = *(float *)(lVar5 + 0x2c);
        fVar2 = *(float *)(lVar5 + 0x30);
        fVar27 = *(float *)(lVar5 + 0x28);
        fVar50 = (fVar36 - fVar1) / (fVar2 - fVar1);
        fVar23 = (fVar23 - fVar1) / (fVar2 - fVar1);
        fVar31 = fVar27 * fVar50;
        fVar51 = fVar27 * fVar23;
        fVar36 = fVar31;
        if ((float)((uint)fVar31 & uVar12) < _LC1) {
          fVar36 = (float)(~uVar12 & (uint)fVar31 |
                          (uint)((float)(int)fVar31 -
                                (float)(-(uint)(fVar31 < (float)(int)fVar31) & (uint)_LC3)));
        }
        fVar37 = fVar51;
        if ((float)((uint)fVar51 & uVar12) < _LC1) {
          fVar37 = (float)(~uVar12 & (uint)fVar51 |
                          (uint)((float)(int)fVar51 +
                                (float)(-(uint)((float)(int)fVar51 < fVar51) & (uint)_LC3)));
        }
        iVar17 = (int)fVar36;
        if (fVar36 <= 0.0) {
          local_8c = 0;
          lVar16 = 0;
        }
        else {
          fVar31 = fVar31 - fVar36;
          lVar16 = (long)iVar17 * 0x30;
          local_8c = iVar17;
        }
        iVar15 = -1;
        if (-1 < iVar17) {
          iVar15 = iVar17;
        }
        local_a0 = (int)fVar27;
        fVar36 = fVar37;
        if (fVar27 <= fVar37) {
          fVar36 = fVar27;
        }
        iVar17 = local_a0 + 1;
        if ((int)fVar37 < local_a0 + 1) {
          iVar17 = (int)fVar37;
        }
        lVar6 = *(long *)(lVar5 + 0xd0);
        puVar13 = (uint *)((ulong)(uint)fVar45 * *(long *)(lVar5 + 0x60) + *(long *)(lVar5 + 0x58));
        uVar18 = (ulong)*puVar13;
        lVar7 = *(long *)(lVar16 + lVar6);
        lVar16 = ((long *)(lVar16 + lVar6))[1];
        auVar28 = *(undefined1 (*) [16])(lVar7 + uVar18 * lVar16);
        uVar19 = (ulong)puVar13[1];
        auVar25 = *(undefined1 (*) [16])(lVar7 + lVar16 * uVar19);
        uVar21 = (ulong)puVar13[2];
        auVar29 = maxps(auVar28,auVar25);
        auVar25 = minps(auVar28,auVar25);
        plVar14 = (long *)((long)(int)fVar36 * 0x30 + lVar6);
        auVar28 = *(undefined1 (*) [16])(lVar7 + lVar16 * uVar21);
        lVar16 = *plVar14;
        lVar7 = plVar14[1];
        auVar30 = maxps(auVar29,auVar28);
        auVar26 = minps(auVar25,auVar28);
        auVar28 = *(undefined1 (*) [16])(lVar16 + lVar7 * uVar18);
        auVar25 = *(undefined1 (*) [16])(lVar16 + lVar7 * uVar21);
        auVar29 = *(undefined1 (*) [16])(lVar16 + lVar7 * uVar19);
        auVar38 = minps(auVar28,auVar29);
        auVar28 = maxps(auVar28,auVar29);
        auVar29 = minps(auVar38,auVar25);
        auVar28 = maxps(auVar28,auVar25);
        fVar37 = auVar26._0_4_;
        fVar39 = auVar26._4_4_;
        fVar35 = auVar26._8_4_;
        fVar44 = auVar30._0_4_;
        fVar47 = auVar28._0_4_;
        fVar24 = auVar30._4_4_;
        fVar40 = auVar30._8_4_;
        fVar48 = auVar28._4_4_;
        fVar49 = auVar28._8_4_;
        fStack_b4 = auVar29._4_4_;
        fStack_b0 = auVar29._8_4_;
        local_b8 = auVar29._0_4_;
        if (iVar17 - iVar15 == 1) {
          if (fVar31 <= 0.0) {
            fVar31 = 0.0;
            fVar43 = _LC3;
          }
          else {
            fVar43 = _LC3 - fVar31;
          }
          fVar32 = fVar31 * local_b8 + fVar43 * fVar37;
          fVar33 = fVar31 * fStack_b4 + fVar43 * fVar39;
          fVar34 = fVar31 * fStack_b0 + fVar43 * fVar35;
          fVar36 = fVar36 - fVar51;
          fVar41 = fVar31 * fVar47 + fVar43 * fVar44;
          fVar42 = fVar31 * fVar48 + fVar43 * fVar24;
          fVar43 = fVar31 * fVar49 + fVar43 * fVar40;
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
            fVar31 = _LC3;
          }
          else {
            fVar31 = _LC3 - fVar36;
          }
          fVar51 = fVar44 * fVar36 + fVar47 * fVar31;
          fVar47 = fVar24 * fVar36 + fVar48 * fVar31;
          fVar48 = fVar40 * fVar36 + fVar49 * fVar31;
          fVar37 = fVar36 * fVar37 + local_b8 * fVar31;
          fVar39 = fVar36 * fVar39 + fStack_b4 * fVar31;
          fVar31 = fVar36 * fVar35 + fStack_b0 * fVar31;
        }
        else {
          plVar14 = (long *)((long)(local_8c + 1) * 0x30 + lVar6);
          lVar16 = *plVar14;
          lVar7 = plVar14[1];
          auVar25 = *(undefined1 (*) [16])(lVar16 + uVar18 * lVar7);
          auVar38 = *(undefined1 (*) [16])(lVar16 + uVar19 * lVar7);
          auVar3 = *(undefined1 (*) [16])(lVar16 + lVar7 * uVar21);
          auVar52 = minps(auVar25,auVar38);
          auVar25 = maxps(auVar25,auVar38);
          auVar53 = minps(auVar52,auVar3);
          auVar52 = maxps(auVar25,auVar3);
          plVar14 = (long *)((long)((int)fVar36 + -1) * 0x30 + lVar6);
          lVar16 = *plVar14;
          lVar7 = plVar14[1];
          auVar25 = *(undefined1 (*) [16])(lVar16 + uVar18 * lVar7);
          auVar38 = *(undefined1 (*) [16])(lVar16 + uVar19 * lVar7);
          auVar3 = *(undefined1 (*) [16])(lVar16 + lVar7 * uVar21);
          auVar46 = maxps(auVar25,auVar38);
          auVar25 = minps(auVar25,auVar38);
          auVar38 = maxps(auVar46,auVar3);
          auVar25 = minps(auVar25,auVar3);
          if (fVar31 <= 0.0) {
            fVar31 = 0.0;
            fVar8 = _LC3;
          }
          else {
            fVar8 = _LC3 - fVar31;
          }
          fVar41 = auVar52._0_4_ * fVar31 + fVar44 * fVar8;
          fVar42 = auVar52._4_4_ * fVar31 + fVar24 * fVar8;
          fVar43 = auVar52._8_4_ * fVar31 + fVar40 * fVar8;
          fVar44 = auVar52._12_4_ * fVar31 + auVar30._12_4_ * fVar8;
          fVar32 = fVar31 * auVar53._0_4_ + fVar8 * fVar37;
          fVar33 = fVar31 * auVar53._4_4_ + fVar8 * fVar39;
          fVar34 = fVar31 * auVar53._8_4_ + fVar8 * fVar35;
          fVar35 = fVar31 * auVar53._12_4_ + fVar8 * auVar26._12_4_;
          fVar36 = fVar36 - fVar51;
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
            fVar24 = _LC3;
          }
          else {
            fVar24 = _LC3 - fVar36;
          }
          iVar15 = iVar15 + 1;
          fStack_ac = auVar29._12_4_;
          fVar51 = auVar38._0_4_ * fVar36 + fVar47 * fVar24;
          fVar47 = auVar38._4_4_ * fVar36 + fVar48 * fVar24;
          fVar48 = auVar38._8_4_ * fVar36 + fVar49 * fVar24;
          fVar49 = auVar38._12_4_ * fVar36 + auVar28._12_4_ * fVar24;
          fVar37 = fVar36 * auVar25._0_4_ + fVar24 * local_b8;
          fVar39 = fVar36 * auVar25._4_4_ + fVar24 * fStack_b4;
          fVar31 = fVar36 * auVar25._8_4_ + fVar24 * fStack_b0;
          fVar36 = fVar36 * auVar25._12_4_ + fVar24 * fStack_ac;
          if (iVar15 < iVar17) {
            plVar14 = (long *)(lVar6 + (long)iVar15 * 0x30);
            do {
              lVar16 = plVar14[1];
              lVar6 = *plVar14;
              fVar24 = (float)iVar15;
              iVar15 = iVar15 + 1;
              plVar14 = plVar14 + 6;
              fVar24 = (fVar24 / fVar27 - fVar50) / (fVar23 - fVar50);
              fVar40 = _LC3 - fVar24;
              auVar28 = *(undefined1 (*) [16])(lVar6 + uVar18 * lVar16);
              auVar25 = *(undefined1 (*) [16])(lVar6 + uVar19 * lVar16);
              auVar29 = *(undefined1 (*) [16])(lVar6 + lVar16 * uVar21);
              auVar26 = maxps(auVar28,auVar25);
              auVar28 = minps(auVar28,auVar25);
              auVar26 = maxps(auVar26,auVar29);
              auVar28 = minps(auVar28,auVar29);
              auVar25._0_4_ = auVar28._0_4_ - (fVar40 * fVar32 + fVar24 * fVar37);
              auVar25._4_4_ = auVar28._4_4_ - (fVar40 * fVar33 + fVar24 * fVar39);
              auVar25._8_4_ = auVar28._8_4_ - (fVar40 * fVar34 + fVar24 * fVar31);
              auVar25._12_4_ = auVar28._12_4_ - (fVar40 * fVar35 + fVar24 * fVar36);
              auVar29._0_4_ = auVar26._0_4_ - (fVar24 * fVar51 + fVar40 * fVar41);
              auVar29._4_4_ = auVar26._4_4_ - (fVar24 * fVar47 + fVar40 * fVar42);
              auVar29._8_4_ = auVar26._8_4_ - (fVar24 * fVar48 + fVar40 * fVar43);
              auVar29._12_4_ = auVar26._12_4_ - (fVar24 * fVar49 + fVar40 * fVar44);
              auVar28 = minps(auVar25,(undefined1  [16])0x0);
              auVar25 = maxps(auVar29,(undefined1  [16])0x0);
              fVar32 = fVar32 + auVar28._0_4_;
              fVar33 = fVar33 + auVar28._4_4_;
              fVar34 = fVar34 + auVar28._8_4_;
              fVar35 = fVar35 + auVar28._12_4_;
              fVar37 = fVar37 + auVar28._0_4_;
              fVar39 = fVar39 + auVar28._4_4_;
              fVar31 = fVar31 + auVar28._8_4_;
              fVar36 = fVar36 + auVar28._12_4_;
              fVar41 = fVar41 + auVar25._0_4_;
              fVar42 = fVar42 + auVar25._4_4_;
              fVar43 = fVar43 + auVar25._8_4_;
              fVar44 = fVar44 + auVar25._12_4_;
              fVar51 = fVar51 + auVar25._0_4_;
              fVar47 = fVar47 + auVar25._4_4_;
              fVar48 = fVar48 + auVar25._8_4_;
              fVar49 = fVar49 + auVar25._12_4_;
            } while (iVar17 != iVar15);
          }
        }
        fVar36 = fVar50 * _LC0 * fVar27;
        if ((float)((uint)fVar36 & uVar12) < _LC1) {
          fVar36 = (float)((uint)((float)(int)fVar36 -
                                 (float)(-(uint)(fVar36 < (float)(int)fVar36) & (uint)_LC3)) |
                          ~uVar12 & (uint)fVar36);
        }
        iVar17 = 0;
        if (0.0 <= fVar36) {
          iVar17 = (int)fVar36;
        }
        fVar36 = fVar23 * _LC5 * fVar27;
        if ((float)((uint)fVar36 & uVar12) < _LC1) {
          fVar36 = (float)((uint)((float)(int)fVar36 +
                                 (float)(-(uint)((float)(int)fVar36 < fVar36) & (uint)_LC3)) |
                          ~uVar12 & (uint)fVar36);
        }
        if (fVar36 < fVar27) {
          local_a0 = (int)fVar36;
        }
        fVar23 = (float)(*(int *)(lVar5 + 0x24) + -1);
        auVar30._4_4_ = fVar42;
        auVar30._0_4_ = fVar41;
        auVar30._8_4_ = fVar43;
        auVar30._12_4_ = fVar45;
        fVar36 = (float)(local_a0 - iVar17);
        auVar3._4_4_ = fVar47;
        auVar3._0_4_ = fVar51;
        auVar3._8_4_ = fVar48;
        auVar3._12_4_ = fVar23;
        fVar41 = fVar41 * _LC12;
        fVar42 = fVar42 * _LC12;
        fVar43 = fVar43 * _LC12;
        fVar45 = fVar45 * _LC12;
        auVar38._4_4_ = fVar39;
        auVar38._0_4_ = fVar37;
        auVar38._8_4_ = fVar31;
        auVar38._12_4_ = fVar36;
        fVar51 = fVar51 * _LC12;
        fVar47 = fVar47 * _LC12;
        fVar48 = fVar48 * _LC12;
        fVar27 = fVar23 * _LC12;
        auVar26._4_4_ = fVar33;
        auVar26._0_4_ = fVar32;
        auVar26._8_4_ = fVar34;
        auVar26._12_4_ = fVar4;
        pauVar20[1] = auVar30;
        *pauVar20 = auVar26;
        pauVar20[2] = auVar38;
        pauVar20[3] = auVar3;
        *(float *)pauVar20[4] = fVar1;
        *(float *)(pauVar20[4] + 4) = fVar2;
        auVar52._0_4_ = fVar51 + fVar41 + fVar9 * fVar32 + fVar37 * fVar9;
        auVar52._4_4_ = fVar47 + fVar42 + fVar9 * fVar33 + fVar39 * fVar9;
        auVar52._8_4_ = fVar48 + fVar43 + fVar9 * fVar34 + fVar31 * fVar9;
        auVar52._12_4_ = fVar27 + fVar45 + fVar9 * fVar4 + fVar36 * fVar9;
        auVar28 = minps(*(undefined1 (*) [16])this,auVar26);
        *(undefined1 (*) [16])this = auVar28;
        auVar28 = maxps(*(undefined1 (*) [16])(this + 0x10),auVar30);
        *(undefined1 (*) [16])(this + 0x10) = auVar28;
        auVar28 = minps(*(undefined1 (*) [16])(this + 0x20),auVar38);
        *(undefined1 (*) [16])(this + 0x20) = auVar28;
        auVar28 = maxps(*(undefined1 (*) [16])(this + 0x30),auVar3);
        *(undefined1 (*) [16])(this + 0x30) = auVar28;
        *(long *)(this + 0x68) = *(long *)(this + 0x68) + 1;
        auVar28 = minps(*(undefined1 (*) [16])(this + 0x40),auVar52);
        *(ulong *)(this + 0x70) = *(long *)(this + 0x70) + (ulong)(uint)fVar36;
        *(undefined1 (*) [16])(this + 0x40) = auVar28;
        auVar28 = maxps(*(undefined1 (*) [16])(this + 0x50),auVar52);
        fVar36 = *(float *)(this + 0x88);
        if (fVar1 <= *(float *)(this + 0x88)) {
          fVar36 = fVar1;
        }
        *(undefined1 (*) [16])(this + 0x50) = auVar28;
        *(float *)(this + 0x88) = fVar36;
        fVar36 = fVar2;
        if (fVar2 <= *(float *)(this + 0x8c)) {
          fVar36 = *(float *)(this + 0x8c);
        }
        *(float *)(this + 0x8c) = fVar36;
        if (*(ulong *)(this + 0x78) < (ulong)(uint)fVar23) {
          *(ulong *)(this + 0x78) = (ulong)(uint)fVar23;
          *(float *)(this + 0x80) = fVar1;
          *(float *)(this + 0x84) = fVar2;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < in_RDX[1]);
  }
  return this;
}



/* embree::bin_parallel<embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRefMB>(embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa>
   >&, embree::PrimRefMB const*, unsigned long, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long> const&) const */

_lambda_embree__range<unsigned_long>const___1_ * __thiscall
embree::
bin_parallel<embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRefMB>(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)
::{lambda(embree::range<unsigned_long>const&)#1}::operator()
          (_lambda_embree__range<unsigned_long>const___1_ *this,range *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int *piVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  uint uVar12;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var13;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var14;
  long lVar15;
  long *in_RDX;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  uint uVar23;
  uint uVar25;
  uint uVar26;
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar31;
  uint uVar32;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  uint uVar35;
  
  uVar10 = _LC10;
  uVar9 = _LC8;
  p_Var14 = this;
  p_Var18 = this + 0x1800;
  do {
    *(undefined4 *)(p_Var14 + 0x80) = uVar10;
    *(undefined4 *)(p_Var14 + 0x84) = uVar10;
    *(undefined4 *)(p_Var14 + 0x88) = uVar10;
    *(undefined4 *)(p_Var14 + 0x8c) = uVar10;
    p_Var13 = p_Var14 + 0xc0;
    *(undefined4 *)(p_Var14 + 0x90) = uVar9;
    *(undefined4 *)(p_Var14 + 0x94) = uVar9;
    *(undefined4 *)(p_Var14 + 0x98) = uVar9;
    *(undefined4 *)(p_Var14 + 0x9c) = uVar9;
    *(undefined4 *)(p_Var14 + 0xa0) = uVar10;
    *(undefined4 *)(p_Var14 + 0xa4) = uVar10;
    *(undefined4 *)(p_Var14 + 0xa8) = uVar10;
    *(undefined4 *)(p_Var14 + 0xac) = uVar10;
    *(undefined4 *)(p_Var14 + 0xb0) = uVar9;
    *(undefined4 *)(p_Var14 + 0xb4) = uVar9;
    *(undefined4 *)(p_Var14 + 0xb8) = uVar9;
    *(undefined4 *)(p_Var14 + 0xbc) = uVar9;
    *(undefined4 *)(p_Var14 + 0x40) = uVar10;
    *(undefined4 *)(p_Var14 + 0x44) = uVar10;
    *(undefined4 *)(p_Var14 + 0x48) = uVar10;
    *(undefined4 *)(p_Var14 + 0x4c) = uVar10;
    *(undefined4 *)(p_Var14 + 0x50) = uVar9;
    *(undefined4 *)(p_Var14 + 0x54) = uVar9;
    *(undefined4 *)(p_Var14 + 0x58) = uVar9;
    *(undefined4 *)(p_Var14 + 0x5c) = uVar9;
    *(undefined4 *)(p_Var14 + 0x60) = uVar10;
    *(undefined4 *)(p_Var14 + 100) = uVar10;
    *(undefined4 *)(p_Var14 + 0x68) = uVar10;
    *(undefined4 *)(p_Var14 + 0x6c) = uVar10;
    *(undefined4 *)(p_Var14 + 0x70) = uVar9;
    *(undefined4 *)(p_Var14 + 0x74) = uVar9;
    *(undefined4 *)(p_Var14 + 0x78) = uVar9;
    *(undefined4 *)(p_Var14 + 0x7c) = uVar9;
    *(undefined4 *)p_Var14 = uVar10;
    *(undefined4 *)(p_Var14 + 4) = uVar10;
    *(undefined4 *)(p_Var14 + 8) = uVar10;
    *(undefined4 *)(p_Var14 + 0xc) = uVar10;
    *(undefined4 *)(p_Var14 + 0x10) = uVar9;
    *(undefined4 *)(p_Var14 + 0x14) = uVar9;
    *(undefined4 *)(p_Var14 + 0x18) = uVar9;
    *(undefined4 *)(p_Var14 + 0x1c) = uVar9;
    *(undefined4 *)(p_Var14 + 0x20) = uVar10;
    *(undefined4 *)(p_Var14 + 0x24) = uVar10;
    *(undefined4 *)(p_Var14 + 0x28) = uVar10;
    *(undefined4 *)(p_Var14 + 0x2c) = uVar10;
    *(undefined4 *)(p_Var14 + 0x30) = uVar9;
    *(undefined4 *)(p_Var14 + 0x34) = uVar9;
    *(undefined4 *)(p_Var14 + 0x38) = uVar9;
    *(undefined4 *)(p_Var14 + 0x3c) = uVar9;
    *(undefined1 (*) [16])p_Var18 = (undefined1  [16])0x0;
    fVar11 = _LC17;
    fVar8 = _LC12;
    p_Var14 = p_Var13;
    p_Var18 = p_Var18 + 0x10;
  } while (this + 0x1800 != p_Var13);
  piVar6 = *(int **)(param_1 + 8);
  pauVar19 = (undefined1 (*) [16])(*in_RDX * 0x50 + **(long **)param_1);
  uVar20 = in_RDX[1] - *in_RDX;
  if (uVar20 == 0) {
    return this;
  }
  if (uVar20 != 1) {
    pauVar16 = pauVar19;
    do {
      auVar28 = pauVar16[1];
      auVar1 = pauVar16[3];
      auVar30 = *pauVar16;
      auVar24 = pauVar16[2];
      auVar27 = pauVar16[6];
      auVar2 = pauVar16[5];
      auVar3 = pauVar16[7];
      uVar12 = *piVar6 - 1;
      uVar23 = (uint)(((auVar1._0_4_ * fVar8 + auVar28._0_4_ * fVar8 +
                       auVar24._0_4_ * fVar8 + auVar30._0_4_ * fVar8) - (float)piVar6[4]) *
                      (float)piVar6[8] + fVar11);
      uVar25 = (uint)(((auVar1._4_4_ * fVar8 + auVar28._4_4_ * fVar8 +
                       auVar24._4_4_ * fVar8 + auVar30._4_4_ * fVar8) - (float)piVar6[5]) *
                      (float)piVar6[9] + fVar11);
      uVar26 = (uint)(((auVar1._8_4_ * fVar8 + auVar28._8_4_ * fVar8 +
                       auVar24._8_4_ * fVar8 + auVar30._8_4_ * fVar8) - (float)piVar6[6]) *
                      (float)piVar6[10] + fVar11);
      uVar29 = -(uint)((int)uVar23 < (int)uVar12);
      uVar31 = -(uint)((int)uVar25 < (int)uVar12);
      uVar32 = -(uint)((int)uVar26 < (int)uVar12);
      uVar23 = uVar23 & uVar29 | ~uVar29 & uVar12;
      uVar25 = uVar25 & uVar31 | ~uVar31 & uVar12;
      uVar29 = uVar26 & uVar32 | ~uVar32 & uVar12;
      auVar4 = pauVar16[8];
      uVar17 = (ulong)(~-(uint)((int)uVar23 < 0) & uVar23);
      p_Var14 = this + uVar17 * 0xc0;
      uVar23 = (uint)(((auVar4._0_4_ * fVar8 + auVar27._0_4_ * fVar8 +
                       auVar3._0_4_ * fVar8 + auVar2._0_4_ * fVar8) - (float)piVar6[4]) *
                      (float)piVar6[8] + fVar11);
      uVar26 = (uint)(((auVar4._4_4_ * fVar8 + auVar27._4_4_ * fVar8 +
                       auVar3._4_4_ * fVar8 + auVar2._4_4_ * fVar8) - (float)piVar6[5]) *
                      (float)piVar6[9] + fVar11);
      uVar31 = (uint)(((auVar4._8_4_ * fVar8 + auVar27._8_4_ * fVar8 +
                       auVar3._8_4_ * fVar8 + auVar2._8_4_ * fVar8) - (float)piVar6[6]) *
                      (float)piVar6[10] + fVar11);
      uVar32 = -(uint)((int)uVar23 < (int)uVar12);
      uVar34 = -(uint)((int)uVar26 < (int)uVar12);
      uVar35 = -(uint)((int)uVar31 < (int)uVar12);
      uVar23 = uVar32 & uVar23 | ~uVar32 & uVar12;
      uVar26 = uVar34 & uVar26 | ~uVar34 & uVar12;
      uVar12 = uVar35 & uVar31 | ~uVar35 & uVar12;
      auVar33 = minps(*(undefined1 (*) [16])p_Var14,auVar30);
      *(undefined1 (*) [16])p_Var14 = auVar33;
      auVar33 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x10),auVar28);
      *(undefined1 (*) [16])(p_Var14 + 0x10) = auVar33;
      auVar33 = minps(*(undefined1 (*) [16])(p_Var14 + 0x20),auVar24);
      *(undefined1 (*) [16])(p_Var14 + 0x20) = auVar33;
      auVar33 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x30),auVar1);
      *(undefined1 (*) [16])(p_Var14 + 0x30) = auVar33;
      uVar21 = (ulong)(~-(uint)((int)uVar25 < 0) & uVar25);
      uVar7 = (ulong)(~-(uint)((int)uVar29 < 0) & uVar29);
      p_Var14 = this + uVar21 * 0xc0 + 0x40;
      auVar33 = minps(*(undefined1 (*) [16])p_Var14,auVar30);
      *(undefined1 (*) [16])p_Var14 = auVar33;
      auVar33 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x10),auVar28);
      *(undefined1 (*) [16])(p_Var14 + 0x10) = auVar33;
      auVar33 = minps(*(undefined1 (*) [16])(p_Var14 + 0x20),auVar24);
      *(undefined1 (*) [16])(p_Var14 + 0x20) = auVar33;
      auVar33 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x30),auVar1);
      *(undefined1 (*) [16])(p_Var14 + 0x30) = auVar33;
      p_Var14 = this + uVar7 * 0xc0 + 0x80;
      auVar30 = minps(*(undefined1 (*) [16])p_Var14,auVar30);
      auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x10),auVar28);
      *(undefined1 (*) [16])p_Var14 = auVar30;
      *(undefined1 (*) [16])(p_Var14 + 0x10) = auVar28;
      auVar30 = minps(*(undefined1 (*) [16])(p_Var14 + 0x20),auVar24);
      auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x30),auVar1);
      *(undefined1 (*) [16])(p_Var14 + 0x20) = auVar30;
      *(undefined1 (*) [16])(p_Var14 + 0x30) = auVar28;
      iVar5 = *(int *)(pauVar16[2] + 0xc);
      *(int *)(this + uVar17 * 0x10 + 0x1800) = *(int *)(this + uVar17 * 0x10 + 0x1800) + iVar5;
      uVar17 = (ulong)(~-(uint)((int)uVar23 < 0) & uVar23);
      *(int *)(this + uVar21 * 0x10 + 0x1804) = *(int *)(this + uVar21 * 0x10 + 0x1804) + iVar5;
      *(int *)(this + uVar7 * 0x10 + 0x1808) = *(int *)(this + uVar7 * 0x10 + 0x1808) + iVar5;
      p_Var14 = this + uVar17 * 0xc0;
      auVar28 = minps(*(undefined1 (*) [16])p_Var14,auVar2);
      *(undefined1 (*) [16])p_Var14 = auVar28;
      auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x10),auVar27);
      *(undefined1 (*) [16])(p_Var14 + 0x10) = auVar28;
      auVar28 = minps(*(undefined1 (*) [16])(p_Var14 + 0x20),auVar3);
      *(undefined1 (*) [16])(p_Var14 + 0x20) = auVar28;
      auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x30),auVar4);
      *(undefined1 (*) [16])(p_Var14 + 0x30) = auVar28;
      uVar21 = (ulong)(~-(uint)((int)uVar26 < 0) & uVar26);
      uVar7 = (ulong)(~-(uint)((int)uVar12 < 0) & uVar12);
      p_Var14 = this + uVar21 * 0xc0 + 0x40;
      auVar28 = minps(*(undefined1 (*) [16])p_Var14,auVar2);
      *(undefined1 (*) [16])p_Var14 = auVar28;
      auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x10),auVar27);
      *(undefined1 (*) [16])(p_Var14 + 0x10) = auVar28;
      auVar28 = minps(*(undefined1 (*) [16])(p_Var14 + 0x20),auVar3);
      *(undefined1 (*) [16])(p_Var14 + 0x20) = auVar28;
      auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x30),auVar4);
      *(undefined1 (*) [16])(p_Var14 + 0x30) = auVar28;
      p_Var14 = this + uVar7 * 0xc0 + 0x80;
      auVar28 = minps(*(undefined1 (*) [16])p_Var14,auVar2);
      *(undefined1 (*) [16])p_Var14 = auVar28;
      auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x10),auVar27);
      *(undefined1 (*) [16])(p_Var14 + 0x10) = auVar28;
      auVar28 = minps(*(undefined1 (*) [16])(p_Var14 + 0x20),auVar3);
      *(undefined1 (*) [16])(p_Var14 + 0x20) = auVar28;
      auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x30),auVar4);
      *(undefined1 (*) [16])(p_Var14 + 0x30) = auVar28;
      iVar5 = *(int *)(pauVar16[7] + 0xc);
      *(int *)(this + uVar17 * 0x10 + 0x1800) = *(int *)(this + uVar17 * 0x10 + 0x1800) + iVar5;
      *(int *)(this + uVar21 * 0x10 + 0x1804) = *(int *)(this + uVar21 * 0x10 + 0x1804) + iVar5;
      *(int *)(this + uVar7 * 0x10 + 0x1808) = *(int *)(this + uVar7 * 0x10 + 0x1808) + iVar5;
      bVar22 = pauVar19 + (uVar20 - 2 >> 1) * 10 != pauVar16;
      pauVar16 = pauVar16 + 10;
    } while (bVar22);
    uVar21 = (uVar20 - 2 & 0xfffffffffffffffe) + 2;
    if (uVar20 <= uVar21) {
      return this;
    }
    pauVar19 = pauVar19 + uVar21 * 5;
  }
  auVar28 = pauVar19[1];
  auVar1 = pauVar19[3];
  auVar30 = pauVar19[2];
  auVar24 = *pauVar19;
  iVar5 = *(int *)(pauVar19[2] + 0xc);
  uVar12 = (int)*(undefined8 *)piVar6 - 1;
  uVar23 = (uint)(((auVar1._0_4_ * fVar8 + auVar28._0_4_ * fVar8 +
                   fVar8 * auVar24._0_4_ + auVar30._0_4_ * fVar8) - (float)piVar6[4]) *
                  (float)piVar6[8] + fVar11);
  uVar25 = (uint)(((auVar1._4_4_ * fVar8 + auVar28._4_4_ * fVar8 +
                   fVar8 * auVar24._4_4_ + auVar30._4_4_ * fVar8) - (float)piVar6[5]) *
                  (float)piVar6[9] + fVar11);
  uVar26 = (uint)(((auVar1._8_4_ * fVar8 + auVar28._8_4_ * fVar8 +
                   fVar8 * auVar24._8_4_ + auVar30._8_4_ * fVar8) - (float)piVar6[6]) *
                  (float)piVar6[10] + fVar11);
  uVar29 = -(uint)((int)uVar23 < (int)uVar12);
  uVar31 = -(uint)((int)uVar25 < (int)uVar12);
  uVar32 = -(uint)((int)uVar26 < (int)uVar12);
  uVar23 = uVar29 & uVar23 | ~uVar29 & uVar12;
  uVar25 = uVar31 & uVar25 | ~uVar31 & uVar12;
  uVar12 = uVar32 & uVar26 | ~uVar32 & uVar12;
  lVar15 = (long)(int)(~-(uint)((int)uVar23 < 0) & uVar23);
  p_Var14 = this + lVar15 * 0xc0;
  *(int *)(this + lVar15 * 0x10 + 0x1800) = *(int *)(this + lVar15 * 0x10 + 0x1800) + iVar5;
  auVar27 = minps(*(undefined1 (*) [16])p_Var14,auVar24);
  *(undefined1 (*) [16])p_Var14 = auVar27;
  auVar27 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x10),auVar28);
  *(undefined1 (*) [16])(p_Var14 + 0x10) = auVar27;
  auVar27 = minps(*(undefined1 (*) [16])(p_Var14 + 0x20),auVar30);
  *(undefined1 (*) [16])(p_Var14 + 0x20) = auVar27;
  auVar27 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x30),auVar1);
  *(undefined1 (*) [16])(p_Var14 + 0x30) = auVar27;
  lVar15 = (long)(int)(~-(uint)((int)uVar25 < 0) & uVar25);
  p_Var14 = this + lVar15 * 0xc0 + 0x40;
  *(int *)(this + lVar15 * 0x10 + 0x1804) = *(int *)(this + lVar15 * 0x10 + 0x1804) + iVar5;
  auVar27 = minps(*(undefined1 (*) [16])p_Var14,auVar24);
  *(undefined1 (*) [16])p_Var14 = auVar27;
  auVar27 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x10),auVar28);
  *(undefined1 (*) [16])(p_Var14 + 0x10) = auVar27;
  auVar27 = minps(*(undefined1 (*) [16])(p_Var14 + 0x20),auVar30);
  *(undefined1 (*) [16])(p_Var14 + 0x20) = auVar27;
  auVar27 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x30),auVar1);
  *(undefined1 (*) [16])(p_Var14 + 0x30) = auVar27;
  lVar15 = (long)(int)(~-(uint)((int)uVar12 < 0) & uVar12);
  p_Var14 = this + lVar15 * 0xc0 + 0x80;
  *(int *)(this + lVar15 * 0x10 + 0x1808) = *(int *)(this + lVar15 * 0x10 + 0x1808) + iVar5;
  auVar24 = minps(*(undefined1 (*) [16])p_Var14,auVar24);
  *(undefined1 (*) [16])p_Var14 = auVar24;
  auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x10),auVar28);
  *(undefined1 (*) [16])(p_Var14 + 0x10) = auVar28;
  auVar28 = minps(*(undefined1 (*) [16])(p_Var14 + 0x20),auVar30);
  *(undefined1 (*) [16])(p_Var14 + 0x20) = auVar28;
  auVar28 = maxps(*(undefined1 (*) [16])(p_Var14 + 0x30),auVar1);
  *(undefined1 (*) [16])(p_Var14 + 0x30) = auVar28;
  return this;
}



/* embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,
   2ul>::TemporalBinInfo::bin(embree::PrimRefMB const*, unsigned long, unsigned long,
   embree::BBox<float>, embree::SetMB const&, embree::sse2::RecalculatePrimRef<embree::TriangleMesh>
   const&) */

void __thiscall
embree::sse2::
HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
::TemporalBinInfo::bin
          (undefined8 param_1_00,TemporalBinInfo *this,long param_1,ulong param_2,ulong param_3,
          long param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  fVar22 = (float)((ulong)param_1_00 >> 0x20);
  fVar15 = (float)param_1_00;
  fVar18 = *(float *)(param_6 + 0x80);
  puVar6 = (uint *)(param_1 + 0xc + param_2 * 0x50);
  fVar16 = *(float *)(param_6 + 0x84) - fVar18;
  uVar8 = *(ulong *)(param_6 + 0x78);
  fVar17 = roundf((((fVar22 * _LC12 + _LC12 * fVar15) - fVar18) / fVar16) * (float)uVar8);
  fVar18 = (fVar17 / (float)uVar8) * fVar16 + fVar18;
  if (((fVar15 < fVar18) && (fVar18 < fVar22)) && (param_2 < param_3)) {
    do {
      fVar16 = _LC3;
      fVar17 = _LC14 * (float)puVar6[0xe];
      if ((fVar15 < fVar17) && (_LC15 * (float)puVar6[0xd] < fVar18)) {
        lVar1 = *(long *)(*(long *)(*param_7 + 0x1e0) + (ulong)*puVar6 * 8);
        fVar17 = *(float *)(lVar1 + 0x2c);
        fVar21 = *(float *)(lVar1 + 0x28);
        fVar19 = *(float *)(lVar1 + 0x30) - fVar17;
        fVar30 = (fVar15 - fVar17) / fVar19;
        fVar19 = (fVar18 - fVar17) / fVar19;
        fVar20 = fVar21 * fVar30;
        fVar41 = fVar21 * fVar19;
        fVar17 = fVar20;
        if ((float)(_LC6 & (uint)fVar20) < _LC1) {
          fVar17 = (float)(~_LC6 & (uint)fVar20 |
                          (uint)((float)(int)fVar20 -
                                (float)(-(uint)(fVar20 < (float)(int)fVar20) & (uint)_LC3)));
        }
        fVar42 = fVar41;
        if ((float)(_LC6 & (uint)fVar41) < _LC1) {
          fVar42 = (float)(~_LC6 & (uint)fVar41 |
                          (uint)((float)(int)fVar41 +
                                (float)(-(uint)((float)(int)fVar41 < fVar41) & (uint)_LC3)));
        }
        iVar5 = (int)fVar17;
        if (fVar17 <= 0.0) {
          iVar7 = 0;
          lVar12 = 0;
        }
        else {
          fVar20 = fVar20 - fVar17;
          lVar12 = (long)iVar5 * 0x30;
          iVar7 = iVar5;
        }
        lVar2 = *(long *)(lVar1 + 0xd0);
        fVar17 = fVar42;
        if (fVar21 <= fVar42) {
          fVar17 = fVar21;
        }
        if (iVar5 < 0) {
          iVar5 = -1;
        }
        iVar3 = (int)fVar21 + 1;
        if ((int)fVar42 < (int)fVar21 + 1) {
          iVar3 = (int)fVar42;
        }
        puVar10 = (uint *)((ulong)puVar6[4] * *(long *)(lVar1 + 0x60) + *(long *)(lVar1 + 0x58));
        uVar8 = (ulong)*puVar10;
        lVar1 = *(long *)(lVar12 + lVar2);
        lVar12 = ((long *)(lVar12 + lVar2))[1];
        auVar32 = *(undefined1 (*) [16])(lVar1 + uVar8 * lVar12);
        uVar9 = (ulong)puVar10[1];
        uVar11 = (ulong)puVar10[2];
        auVar36 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar9);
        auVar35 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar11);
        auVar47 = maxps(auVar32,auVar36);
        auVar32 = minps(auVar32,auVar36);
        plVar13 = (long *)((long)(int)fVar17 * 0x30 + lVar2);
        lVar1 = *plVar13;
        lVar12 = plVar13[1];
        auVar48 = maxps(auVar47,auVar35);
        auVar33 = minps(auVar32,auVar35);
        auVar32 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar8);
        auVar36 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar11);
        auVar35 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar9);
        auVar47 = minps(auVar32,auVar35);
        auVar35 = maxps(auVar32,auVar35);
        auVar32 = minps(auVar47,auVar36);
        auVar36 = maxps(auVar35,auVar36);
        fVar39 = auVar48._0_4_;
        fVar42 = auVar33._0_4_;
        fVar24 = auVar33._4_4_;
        fVar25 = auVar33._8_4_;
        fVar26 = auVar33._12_4_;
        fVar28 = auVar36._0_4_;
        fVar44 = auVar48._4_4_;
        fVar29 = auVar36._4_4_;
        fVar31 = auVar36._8_4_;
        fVar38 = auVar36._12_4_;
        fVar46 = auVar48._12_4_;
        fVar45 = auVar48._8_4_;
        fStack_64 = auVar32._4_4_;
        fStack_60 = auVar32._8_4_;
        fStack_5c = auVar32._12_4_;
        local_68 = auVar32._0_4_;
        if (iVar3 - iVar5 == 1) {
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
            fVar21 = _LC3;
          }
          else {
            fVar21 = _LC3 - fVar20;
          }
          fVar17 = fVar17 - fVar41;
          auVar32._0_4_ = fVar20 * local_68 + fVar21 * fVar42;
          auVar32._4_4_ = fVar20 * fStack_64 + fVar21 * fVar24;
          auVar32._8_4_ = fVar20 * fStack_60 + fVar21 * fVar25;
          auVar32._12_4_ = fVar20 * fStack_5c + fVar21 * fVar26;
          auVar36._0_4_ = fVar20 * fVar28 + fVar21 * fVar39;
          auVar36._4_4_ = fVar20 * fVar29 + fVar21 * fVar44;
          auVar36._8_4_ = fVar20 * fVar31 + fVar21 * fVar45;
          auVar36._12_4_ = fVar20 * fVar38 + fVar21 * fVar46;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
            fVar21 = _LC3;
          }
          else {
            fVar21 = _LC3 - fVar17;
          }
          auVar47._0_4_ = fVar39 * fVar17 + fVar28 * fVar21;
          auVar47._4_4_ = fVar44 * fVar17 + fVar29 * fVar21;
          auVar47._8_4_ = fVar45 * fVar17 + fVar31 * fVar21;
          auVar47._12_4_ = fVar46 * fVar17 + fVar38 * fVar21;
          auVar35._0_4_ = fVar17 * fVar42 + fVar21 * local_68;
          auVar35._4_4_ = fVar17 * fVar24 + fVar21 * fStack_64;
          auVar35._8_4_ = fVar17 * fVar25 + fVar21 * fStack_60;
          auVar35._12_4_ = fVar17 * fVar26 + fVar21 * fStack_5c;
        }
        else {
          plVar14 = (long *)((long)(iVar7 + 1) * 0x30 + lVar2);
          plVar13 = (long *)((long)((int)fVar17 + -1) * 0x30 + lVar2);
          lVar1 = *plVar14;
          lVar12 = plVar14[1];
          auVar32 = *(undefined1 (*) [16])(lVar1 + uVar8 * lVar12);
          auVar36 = *(undefined1 (*) [16])(lVar1 + uVar9 * lVar12);
          auVar35 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar11);
          lVar1 = *plVar13;
          lVar12 = plVar13[1];
          auVar47 = minps(auVar32,auVar36);
          auVar32 = maxps(auVar32,auVar36);
          auVar40 = minps(auVar47,auVar35);
          auVar43 = maxps(auVar32,auVar35);
          auVar32 = *(undefined1 (*) [16])(lVar1 + uVar8 * lVar12);
          auVar36 = *(undefined1 (*) [16])(lVar1 + uVar9 * lVar12);
          auVar35 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar11);
          auVar47 = maxps(auVar32,auVar36);
          auVar32 = minps(auVar32,auVar36);
          auVar33 = maxps(auVar47,auVar35);
          auVar48 = minps(auVar32,auVar35);
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
            fVar49 = _LC3;
          }
          else {
            fVar49 = _LC3 - fVar20;
          }
          fVar17 = fVar17 - fVar41;
          local_58 = auVar40._0_4_;
          fStack_54 = auVar40._4_4_;
          fStack_50 = auVar40._8_4_;
          fStack_4c = auVar40._12_4_;
          auVar36._0_4_ = auVar43._0_4_ * fVar20 + fVar39 * fVar49;
          auVar36._4_4_ = auVar43._4_4_ * fVar20 + fVar44 * fVar49;
          auVar36._8_4_ = auVar43._8_4_ * fVar20 + fVar45 * fVar49;
          auVar36._12_4_ = auVar43._12_4_ * fVar20 + fVar46 * fVar49;
          auVar32._0_4_ = fVar20 * local_58 + fVar49 * fVar42;
          auVar32._4_4_ = fVar20 * fStack_54 + fVar49 * fVar24;
          auVar32._8_4_ = fVar20 * fStack_50 + fVar49 * fVar25;
          auVar32._12_4_ = fVar20 * fStack_4c + fVar49 * fVar26;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
            fVar20 = _LC3;
          }
          else {
            fVar20 = _LC3 - fVar17;
          }
          iVar5 = iVar5 + 1;
          auVar47._0_4_ = auVar33._0_4_ * fVar17 + fVar28 * fVar20;
          auVar47._4_4_ = auVar33._4_4_ * fVar17 + fVar29 * fVar20;
          auVar47._8_4_ = auVar33._8_4_ * fVar17 + fVar31 * fVar20;
          auVar47._12_4_ = auVar33._12_4_ * fVar17 + fVar38 * fVar20;
          auVar35._0_4_ = fVar17 * auVar48._0_4_ + fVar20 * local_68;
          auVar35._4_4_ = fVar17 * auVar48._4_4_ + fVar20 * fStack_64;
          auVar35._8_4_ = fVar17 * auVar48._8_4_ + fVar20 * fStack_60;
          auVar35._12_4_ = fVar17 * auVar48._12_4_ + fVar20 * fStack_5c;
          if (iVar5 < iVar3) {
            plVar13 = (long *)((long)iVar5 * 0x30 + lVar2);
            do {
              lVar1 = plVar13[1];
              lVar12 = *plVar13;
              fVar17 = (float)iVar5;
              iVar5 = iVar5 + 1;
              plVar13 = plVar13 + 6;
              fVar31 = (fVar17 / fVar21 - fVar30) / (fVar19 - fVar30);
              fVar38 = _LC3 - fVar31;
              auVar33 = *(undefined1 (*) [16])(lVar12 + uVar8 * lVar1);
              auVar48 = *(undefined1 (*) [16])(lVar12 + uVar9 * lVar1);
              auVar40 = *(undefined1 (*) [16])(lVar12 + lVar1 * uVar11);
              auVar43 = maxps(auVar33,auVar48);
              auVar33 = minps(auVar33,auVar48);
              fVar17 = auVar32._4_4_;
              fVar20 = auVar32._8_4_;
              fVar41 = auVar32._12_4_;
              fVar39 = auVar36._4_4_;
              fVar44 = auVar36._8_4_;
              fVar45 = auVar36._12_4_;
              auVar43 = maxps(auVar43,auVar40);
              auVar33 = minps(auVar33,auVar40);
              fVar42 = auVar35._4_4_;
              fVar24 = auVar35._8_4_;
              fVar25 = auVar35._12_4_;
              fVar26 = auVar47._4_4_;
              fVar28 = auVar47._8_4_;
              fVar29 = auVar47._12_4_;
              auVar48._0_4_ = auVar33._0_4_ - (fVar31 * auVar35._0_4_ + fVar38 * auVar32._0_4_);
              auVar48._4_4_ = auVar33._4_4_ - (fVar31 * fVar42 + fVar38 * fVar17);
              auVar48._8_4_ = auVar33._8_4_ - (fVar31 * fVar24 + fVar38 * fVar20);
              auVar48._12_4_ = auVar33._12_4_ - (fVar31 * fVar25 + fVar38 * fVar41);
              auVar40._0_4_ = auVar43._0_4_ - (fVar31 * auVar47._0_4_ + fVar38 * auVar36._0_4_);
              auVar40._4_4_ = auVar43._4_4_ - (fVar31 * fVar26 + fVar38 * fVar39);
              auVar40._8_4_ = auVar43._8_4_ - (fVar31 * fVar28 + fVar38 * fVar44);
              auVar40._12_4_ = auVar43._12_4_ - (fVar31 * fVar29 + fVar38 * fVar45);
              auVar33 = minps(auVar48,(undefined1  [16])0x0);
              auVar48 = maxps(auVar40,(undefined1  [16])0x0);
              auVar32._0_4_ = auVar32._0_4_ + auVar33._0_4_;
              auVar32._4_4_ = fVar17 + auVar33._4_4_;
              auVar32._8_4_ = fVar20 + auVar33._8_4_;
              auVar32._12_4_ = fVar41 + auVar33._12_4_;
              auVar35._0_4_ = auVar35._0_4_ + auVar33._0_4_;
              auVar35._4_4_ = fVar42 + auVar33._4_4_;
              auVar35._8_4_ = fVar24 + auVar33._8_4_;
              auVar35._12_4_ = fVar25 + auVar33._12_4_;
              auVar36._0_4_ = auVar36._0_4_ + auVar48._0_4_;
              auVar36._4_4_ = fVar39 + auVar48._4_4_;
              auVar36._8_4_ = fVar44 + auVar48._8_4_;
              auVar36._12_4_ = fVar45 + auVar48._12_4_;
              auVar47._0_4_ = auVar47._0_4_ + auVar48._0_4_;
              auVar47._4_4_ = fVar26 + auVar48._4_4_;
              auVar47._8_4_ = fVar28 + auVar48._8_4_;
              auVar47._12_4_ = fVar29 + auVar48._12_4_;
            } while (iVar3 != iVar5);
          }
        }
        auVar33 = minps(*(undefined1 (*) [16])(this + 0x10),auVar32);
        auVar32 = maxps(*(undefined1 (*) [16])(this + 0x20),auVar36);
        *(undefined1 (*) [16])(this + 0x10) = auVar33;
        *(undefined1 (*) [16])(this + 0x20) = auVar32;
        auVar32 = minps(*(undefined1 (*) [16])(this + 0x30),auVar35);
        *(undefined1 (*) [16])(this + 0x30) = auVar32;
        auVar32 = maxps(*(undefined1 (*) [16])(this + 0x40),auVar47);
        *(undefined1 (*) [16])(this + 0x40) = auVar32;
        fVar17 = _LC14;
        fVar21 = (float)puVar6[0xd];
        fVar20 = (float)puVar6[0xc];
        fVar19 = ((fVar15 - fVar21) / ((float)puVar6[0xe] - fVar21)) * _LC0 * fVar20;
        if ((float)(_LC6 & (uint)fVar19) < _LC1) {
          fVar19 = (float)((uint)((float)(int)fVar19 -
                                 (float)(-(uint)(fVar19 < (float)(int)fVar19) & (uint)fVar16)) |
                          ~_LC6 & (uint)fVar19);
        }
        iVar5 = 0;
        if (0.0 <= fVar19) {
          iVar5 = (int)fVar19;
        }
        fVar21 = _LC5 * ((fVar18 - fVar21) / ((float)puVar6[0xe] - fVar21)) * fVar20;
        if ((float)(_LC6 & (uint)fVar21) < _LC1) {
          fVar21 = (float)((uint)((float)(int)fVar21 +
                                 (float)(-(uint)((float)(int)fVar21 < fVar21) & (uint)fVar16)) |
                          ~_LC6 & (uint)fVar21);
        }
        if (fVar20 <= fVar21) {
          fVar21 = fVar20;
        }
        *(long *)this = *(long *)this + (long)((int)fVar21 - iVar5);
        fVar17 = fVar17 * (float)puVar6[0xe];
      }
      fVar21 = _LC3;
      fVar16 = _LC1;
      if ((fVar18 < fVar17) && (_LC15 * (float)puVar6[0xd] < fVar22)) {
        lVar1 = *(long *)(*(long *)(*param_7 + 0x1e0) + (ulong)*puVar6 * 8);
        fVar17 = *(float *)(lVar1 + 0x2c);
        fVar19 = *(float *)(lVar1 + 0x28);
        fVar20 = *(float *)(lVar1 + 0x30) - fVar17;
        fVar41 = (fVar18 - fVar17) / fVar20;
        fVar20 = (fVar22 - fVar17) / fVar20;
        fVar30 = fVar19 * fVar41;
        fVar42 = fVar19 * fVar20;
        fVar17 = fVar30;
        if ((float)(_LC6 & (uint)fVar30) < _LC1) {
          fVar17 = (float)(~_LC6 & (uint)fVar30 |
                          (uint)((float)(int)fVar30 -
                                (float)(-(uint)(fVar30 < (float)(int)fVar30) & (uint)_LC3)));
        }
        fVar24 = fVar42;
        if ((float)(_LC6 & (uint)fVar42) < _LC1) {
          fVar24 = (float)(~_LC6 & (uint)fVar42 |
                          (uint)((float)(int)fVar42 +
                                (float)(-(uint)((float)(int)fVar42 < fVar42) & (uint)_LC3)));
        }
        iVar5 = (int)fVar17;
        if (fVar17 <= 0.0) {
          iVar7 = 0;
          lVar12 = 0;
        }
        else {
          fVar30 = fVar30 - fVar17;
          lVar12 = (long)iVar5 * 0x30;
          iVar7 = iVar5;
        }
        lVar2 = *(long *)(lVar1 + 0xd0);
        fVar17 = fVar24;
        if (fVar19 <= fVar24) {
          fVar17 = fVar19;
        }
        if (iVar5 < 0) {
          iVar5 = -1;
        }
        iVar3 = (int)fVar19 + 1;
        if ((int)fVar24 < (int)fVar19 + 1) {
          iVar3 = (int)fVar24;
        }
        puVar10 = (uint *)((ulong)puVar6[4] * *(long *)(lVar1 + 0x60) + *(long *)(lVar1 + 0x58));
        uVar8 = (ulong)*puVar10;
        lVar1 = *(long *)(lVar12 + lVar2);
        lVar12 = ((long *)(lVar12 + lVar2))[1];
        auVar32 = *(undefined1 (*) [16])(lVar1 + uVar8 * lVar12);
        uVar9 = (ulong)puVar10[1];
        uVar11 = (ulong)puVar10[2];
        auVar36 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar9);
        auVar35 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar11);
        auVar33 = maxps(auVar32,auVar36);
        auVar32 = minps(auVar32,auVar36);
        plVar13 = (long *)((long)(int)fVar17 * 0x30 + lVar2);
        lVar1 = *plVar13;
        lVar12 = plVar13[1];
        auVar47 = minps(auVar32,auVar35);
        auVar48 = maxps(auVar33,auVar35);
        auVar32 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar8);
        auVar36 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar11);
        auVar35 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar9);
        auVar33 = maxps(auVar32,auVar35);
        auVar32 = minps(auVar32,auVar35);
        auVar35 = maxps(auVar33,auVar36);
        auVar32 = minps(auVar32,auVar36);
        fVar44 = auVar48._0_4_;
        fVar24 = auVar32._0_4_;
        fVar25 = auVar32._4_4_;
        fVar26 = auVar32._8_4_;
        fVar28 = auVar32._12_4_;
        fVar29 = auVar35._0_4_;
        fVar45 = auVar48._4_4_;
        fVar31 = auVar35._4_4_;
        fVar38 = auVar35._8_4_;
        fVar39 = auVar35._12_4_;
        fVar49 = auVar48._12_4_;
        fVar46 = auVar48._8_4_;
        fStack_64 = auVar47._4_4_;
        fStack_60 = auVar47._8_4_;
        fStack_5c = auVar47._12_4_;
        local_68 = auVar47._0_4_;
        if (iVar3 - iVar5 == 1) {
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
            fVar19 = _LC3;
          }
          else {
            fVar19 = _LC3 - fVar30;
          }
          fVar17 = fVar17 - fVar42;
          auVar33._0_4_ = fVar30 * fVar24 + fVar19 * local_68;
          auVar33._4_4_ = fVar30 * fVar25 + fVar19 * fStack_64;
          auVar33._8_4_ = fVar30 * fVar26 + fVar19 * fStack_60;
          auVar33._12_4_ = fVar30 * fVar28 + fVar19 * fStack_5c;
          auVar43._0_4_ = fVar30 * fVar29 + fVar19 * fVar44;
          auVar43._4_4_ = fVar30 * fVar31 + fVar19 * fVar45;
          auVar43._8_4_ = fVar30 * fVar38 + fVar19 * fVar46;
          auVar43._12_4_ = fVar30 * fVar39 + fVar19 * fVar49;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
            fVar19 = _LC3;
          }
          else {
            fVar19 = _LC3 - fVar17;
          }
          auVar27._0_4_ = fVar44 * fVar17 + fVar29 * fVar19;
          auVar27._4_4_ = fVar45 * fVar17 + fVar31 * fVar19;
          auVar27._8_4_ = fVar46 * fVar17 + fVar38 * fVar19;
          auVar27._12_4_ = fVar49 * fVar17 + fVar39 * fVar19;
          auVar23._0_4_ = fVar17 * local_68 + fVar19 * fVar24;
          auVar23._4_4_ = fVar17 * fStack_64 + fVar19 * fVar25;
          auVar23._8_4_ = fVar17 * fStack_60 + fVar19 * fVar26;
          auVar23._12_4_ = fVar17 * fStack_5c + fVar19 * fVar28;
        }
        else {
          plVar14 = (long *)((long)(iVar7 + 1) * 0x30 + lVar2);
          plVar13 = (long *)((long)((int)fVar17 + -1) * 0x30 + lVar2);
          lVar1 = *plVar14;
          lVar12 = plVar14[1];
          auVar32 = *(undefined1 (*) [16])(lVar1 + uVar8 * lVar12);
          auVar36 = *(undefined1 (*) [16])(lVar1 + uVar9 * lVar12);
          auVar35 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar11);
          lVar1 = *plVar13;
          lVar12 = plVar13[1];
          auVar47 = minps(auVar32,auVar36);
          auVar32 = maxps(auVar32,auVar36);
          auVar33 = minps(auVar47,auVar35);
          auVar48 = maxps(auVar32,auVar35);
          auVar32 = *(undefined1 (*) [16])(lVar1 + uVar8 * lVar12);
          auVar36 = *(undefined1 (*) [16])(lVar1 + uVar9 * lVar12);
          auVar35 = *(undefined1 (*) [16])(lVar1 + lVar12 * uVar11);
          auVar47 = maxps(auVar32,auVar36);
          auVar36 = minps(auVar32,auVar36);
          auVar32 = maxps(auVar47,auVar35);
          auVar36 = minps(auVar36,auVar35);
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
            fVar4 = _LC3;
          }
          else {
            fVar4 = _LC3 - fVar30;
          }
          fVar17 = fVar17 - fVar42;
          local_58 = auVar33._0_4_;
          fStack_54 = auVar33._4_4_;
          fStack_50 = auVar33._8_4_;
          fStack_4c = auVar33._12_4_;
          auVar43._0_4_ = auVar48._0_4_ * fVar30 + fVar44 * fVar4;
          auVar43._4_4_ = auVar48._4_4_ * fVar30 + fVar45 * fVar4;
          auVar43._8_4_ = auVar48._8_4_ * fVar30 + fVar46 * fVar4;
          auVar43._12_4_ = auVar48._12_4_ * fVar30 + fVar49 * fVar4;
          auVar33._0_4_ = fVar30 * local_58 + fVar4 * local_68;
          auVar33._4_4_ = fVar30 * fStack_54 + fVar4 * fStack_64;
          auVar33._8_4_ = fVar30 * fStack_50 + fVar4 * fStack_60;
          auVar33._12_4_ = fVar30 * fStack_4c + fVar4 * fStack_5c;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
            fVar30 = _LC3;
          }
          else {
            fVar30 = _LC3 - fVar17;
          }
          iVar5 = iVar5 + 1;
          auVar27._0_4_ = auVar32._0_4_ * fVar17 + fVar29 * fVar30;
          auVar27._4_4_ = auVar32._4_4_ * fVar17 + fVar31 * fVar30;
          auVar27._8_4_ = auVar32._8_4_ * fVar17 + fVar38 * fVar30;
          auVar27._12_4_ = auVar32._12_4_ * fVar17 + fVar39 * fVar30;
          auVar23._0_4_ = fVar17 * auVar36._0_4_ + fVar30 * fVar24;
          auVar23._4_4_ = fVar17 * auVar36._4_4_ + fVar30 * fVar25;
          auVar23._8_4_ = fVar17 * auVar36._8_4_ + fVar30 * fVar26;
          auVar23._12_4_ = fVar17 * auVar36._12_4_ + fVar30 * fVar28;
          if (iVar5 < iVar3) {
            plVar13 = (long *)((long)iVar5 * 0x30 + lVar2);
            do {
              lVar1 = plVar13[1];
              lVar12 = *plVar13;
              fVar17 = (float)iVar5;
              iVar5 = iVar5 + 1;
              plVar13 = plVar13 + 6;
              fVar38 = (fVar17 / fVar19 - fVar41) / (fVar20 - fVar41);
              fVar39 = _LC3 - fVar38;
              auVar32 = *(undefined1 (*) [16])(lVar12 + uVar8 * lVar1);
              auVar36 = *(undefined1 (*) [16])(lVar12 + uVar9 * lVar1);
              auVar35 = *(undefined1 (*) [16])(lVar12 + lVar1 * uVar11);
              auVar47 = maxps(auVar32,auVar36);
              auVar32 = minps(auVar32,auVar36);
              fVar17 = auVar33._4_4_;
              fVar30 = auVar33._8_4_;
              fVar42 = auVar33._12_4_;
              fVar44 = auVar43._4_4_;
              fVar45 = auVar43._8_4_;
              fVar46 = auVar43._12_4_;
              auVar36 = maxps(auVar47,auVar35);
              auVar32 = minps(auVar32,auVar35);
              fVar24 = auVar23._4_4_;
              fVar25 = auVar23._8_4_;
              fVar26 = auVar23._12_4_;
              fVar28 = auVar27._4_4_;
              fVar29 = auVar27._8_4_;
              fVar31 = auVar27._12_4_;
              auVar34._0_4_ = auVar32._0_4_ - (fVar38 * auVar23._0_4_ + fVar39 * auVar33._0_4_);
              auVar34._4_4_ = auVar32._4_4_ - (fVar38 * fVar24 + fVar39 * fVar17);
              auVar34._8_4_ = auVar32._8_4_ - (fVar38 * fVar25 + fVar39 * fVar30);
              auVar34._12_4_ = auVar32._12_4_ - (fVar38 * fVar26 + fVar39 * fVar42);
              auVar37._0_4_ = auVar36._0_4_ - (fVar38 * auVar27._0_4_ + fVar39 * auVar43._0_4_);
              auVar37._4_4_ = auVar36._4_4_ - (fVar38 * fVar28 + fVar39 * fVar44);
              auVar37._8_4_ = auVar36._8_4_ - (fVar38 * fVar29 + fVar39 * fVar45);
              auVar37._12_4_ = auVar36._12_4_ - (fVar38 * fVar31 + fVar39 * fVar46);
              auVar32 = minps(auVar34,(undefined1  [16])0x0);
              auVar36 = maxps(auVar37,(undefined1  [16])0x0);
              auVar33._0_4_ = auVar33._0_4_ + auVar32._0_4_;
              auVar33._4_4_ = fVar17 + auVar32._4_4_;
              auVar33._8_4_ = fVar30 + auVar32._8_4_;
              auVar33._12_4_ = fVar42 + auVar32._12_4_;
              auVar23._0_4_ = auVar23._0_4_ + auVar32._0_4_;
              auVar23._4_4_ = fVar24 + auVar32._4_4_;
              auVar23._8_4_ = fVar25 + auVar32._8_4_;
              auVar23._12_4_ = fVar26 + auVar32._12_4_;
              auVar43._0_4_ = auVar43._0_4_ + auVar36._0_4_;
              auVar43._4_4_ = fVar44 + auVar36._4_4_;
              auVar43._8_4_ = fVar45 + auVar36._8_4_;
              auVar43._12_4_ = fVar46 + auVar36._12_4_;
              auVar27._0_4_ = auVar27._0_4_ + auVar36._0_4_;
              auVar27._4_4_ = fVar28 + auVar36._4_4_;
              auVar27._8_4_ = fVar29 + auVar36._8_4_;
              auVar27._12_4_ = fVar31 + auVar36._12_4_;
            } while (iVar3 != iVar5);
          }
        }
        auVar36 = minps(*(undefined1 (*) [16])(this + 0x50),auVar33);
        auVar32 = maxps(*(undefined1 (*) [16])(this + 0x60),auVar43);
        *(undefined1 (*) [16])(this + 0x50) = auVar36;
        *(undefined1 (*) [16])(this + 0x60) = auVar32;
        auVar32 = minps(*(undefined1 (*) [16])(this + 0x70),auVar23);
        *(undefined1 (*) [16])(this + 0x70) = auVar32;
        auVar32 = maxps(*(undefined1 (*) [16])(this + 0x80),auVar27);
        *(undefined1 (*) [16])(this + 0x80) = auVar32;
        fVar17 = (float)puVar6[0xd];
        fVar20 = (float)puVar6[0xc];
        fVar19 = ((fVar18 - fVar17) / ((float)puVar6[0xe] - fVar17)) * _LC0 * fVar20;
        if ((float)(_LC6 & (uint)fVar19) < fVar16) {
          fVar19 = (float)((uint)((float)(int)fVar19 -
                                 (float)(-(uint)(fVar19 < (float)(int)fVar19) & (uint)fVar21)) |
                          ~_LC6 & (uint)fVar19);
        }
        iVar5 = 0;
        if (0.0 <= fVar19) {
          iVar5 = (int)fVar19;
        }
        fVar16 = ((fVar22 - fVar17) / ((float)puVar6[0xe] - fVar17)) * _LC5 * fVar20;
        if ((float)(_LC6 & (uint)fVar16) < _LC1) {
          fVar16 = (float)((uint)((float)(int)fVar16 +
                                 (float)(-(uint)((float)(int)fVar16 < fVar16) & (uint)fVar21)) |
                          ~_LC6 & (uint)fVar16);
        }
        if (fVar20 <= fVar16) {
          fVar16 = fVar20;
        }
        *(long *)(this + 8) = *(long *)(this + 8) + (long)((int)fVar16 - iVar5);
      }
      puVar6 = puVar6 + 0x14;
    } while (puVar6 != (uint *)(param_1 + 0xc + param_3 * 0x50));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimRefMB_const&)#1},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)#2},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#3}>
::
partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined1 (*pauVar16) [12];
  undefined1 (*pauVar17) [12];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  float fVar26;
  ulong uVar27;
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  long lVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  uint uVar35;
  int iVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  undefined8 uStack_150;
  undefined1 local_148 [8];
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  
  fVar26 = _LC12;
  lVar39 = 0;
  uVar40 = 0;
  uVar33 = 0;
  lVar32 = 0;
  plVar13 = *(long **)this;
  local_ec = 0.0;
  local_e0 = 0.0;
  lVar14 = *plVar13;
  plVar15 = (long *)plVar13[2];
  local_f4 = 0.0;
  local_108._4_4_ = _LC8;
  local_108._0_4_ = _LC8;
  local_108._8_4_ = _LC8;
  local_108._12_4_ = _LC8;
  uVar37 = plVar13[1] * param_1;
  local_158._4_4_ = _LC10;
  local_158._0_4_ = _LC10;
  uStack_150._0_4_ = (float)_LC10;
  uStack_150._4_4_ = _LC10;
  local_118._4_4_ = _LC8;
  local_118._0_4_ = _LC8;
  local_118._8_4_ = _LC8;
  local_118._12_4_ = _LC8;
  local_138._4_4_ = _LC10;
  local_138._0_4_ = _LC10;
  local_138._8_4_ = _LC10;
  local_138._12_4_ = _LC10;
  local_148._4_4_ = _LC8;
  local_148._0_4_ = _LC8;
  uStack_140._0_4_ = (float)_LC8;
  uStack_140._4_4_ = _LC8;
  uVar27 = uVar37 / (ulong)plVar13[6];
  local_128._4_4_ = _LC10;
  local_128._0_4_ = _LC10;
  local_128._8_4_ = _LC10;
  local_128._12_4_ = _LC10;
  lVar38 = 0;
  local_dc = _LC3;
  local_f8 = _LC3;
  local_e4 = _LC3;
  local_e8 = _LC3;
  local_f0 = 0.0;
  local_168._4_4_ = _LC10;
  local_168._0_4_ = _LC10;
  local_168._8_4_ = _LC10;
  local_168._12_4_ = _LC10;
  local_178._4_4_ = _LC8;
  local_178._0_4_ = _LC8;
  local_178._8_4_ = _LC8;
  local_178._12_4_ = _LC8;
  local_188._4_4_ = _LC10;
  local_188._0_4_ = _LC10;
  local_188._8_4_ = _LC10;
  local_188._12_4_ = _LC10;
  lVar34 = 1;
  local_198._4_4_ = _LC8;
  local_198._0_4_ = _LC8;
  local_198._8_4_ = _LC8;
  local_198._12_4_ = _LC8;
  local_1a8._4_4_ = _LC10;
  local_1a8._0_4_ = _LC10;
  local_1a8._8_4_ = _LC10;
  local_1a8._12_4_ = _LC10;
  pauVar30 = (undefined1 (*) [16])(uVar27 * 0x50 + lVar14);
  local_1b8._4_4_ = _LC8;
  local_1b8._0_4_ = _LC8;
  local_1b8._8_4_ = _LC8;
  local_1b8._12_4_ = _LC8;
  pauVar28 = (undefined1 (*) [16])
             (lVar14 + -0x50 + ((plVar13[1] + uVar37) / (ulong)plVar13[6]) * 0x50);
  while( true ) {
    if (pauVar28 < pauVar30) break;
    auVar5 = pauVar30[3];
    auVar6 = pauVar30[1];
    auVar7 = pauVar30[2];
    auVar8 = *pauVar30;
    lVar31 = *plVar15;
    auVar22 = *(undefined1 (*) [12])(lVar31 + 0x20);
    auVar23 = *(undefined1 (*) [12])(lVar31 + 0x30);
    pauVar16 = (undefined1 (*) [12])plVar15[1];
    auVar24 = *pauVar16;
    pauVar17 = (undefined1 (*) [12])plVar15[2];
    auVar25 = *pauVar17;
    fVar41 = auVar5._0_4_ * fVar26 + auVar6._0_4_ * fVar26 +
             auVar7._0_4_ * fVar26 + auVar8._0_4_ * fVar26;
    fVar42 = auVar5._4_4_ * fVar26 + auVar6._4_4_ * fVar26 +
             auVar7._4_4_ * fVar26 + auVar8._4_4_ * fVar26;
    fVar43 = auVar5._8_4_ * fVar26 + auVar6._8_4_ * fVar26 +
             auVar7._8_4_ * fVar26 + auVar8._8_4_ * fVar26;
    fVar44 = auVar5._12_4_ * fVar26 + auVar6._12_4_ * fVar26 +
             auVar7._12_4_ * fVar26 + auVar8._12_4_ * fVar26;
    auVar49._0_4_ =
         -(uint)((int)((fVar41 - *(float *)*(undefined1 (*) [12])(lVar31 + 0x20)) *
                       *(float *)*(undefined1 (*) [12])(lVar31 + 0x30) + _LC17) < *(int *)*pauVar16)
         & *(uint *)*pauVar17;
    auVar49._4_4_ =
         -(uint)((int)((fVar42 - *(float *)(lVar31 + 0x24)) * *(float *)(lVar31 + 0x34) +
                      _UNK_00124884) < *(int *)(*pauVar16 + 4)) & *(uint *)(*pauVar17 + 4);
    auVar49._8_4_ =
         -(uint)((int)((fVar43 - *(float *)(lVar31 + 0x28)) * *(float *)(lVar31 + 0x38) +
                      _UNK_00124888) < *(int *)(*pauVar16 + 8)) & *(uint *)(*pauVar17 + 8);
    auVar49._12_4_ =
         -(uint)((int)((fVar44 - *(float *)(lVar31 + 0x2c)) * *(float *)(lVar31 + 0x3c) +
                      _UNK_0012488c) < *(int *)pauVar16[1]) & *(uint *)pauVar17[1];
    uVar35 = movmskps((int)pauVar17,auVar49);
    uVar37 = (ulong)uVar35;
    pauVar29 = pauVar28;
    auVar49 = _local_158;
    auVar50 = local_128;
    auVar51 = local_138;
    auVar52 = _local_148;
    if (uVar35 == 0) {
      while( true ) {
        auVar9 = pauVar29[3];
        auVar10 = pauVar29[1];
        auVar11 = pauVar29[2];
        auVar12 = *pauVar29;
        local_138._0_4_ = auVar24._0_4_;
        local_138._4_4_ = auVar24._4_4_;
        local_138._8_4_ = auVar24._8_4_;
        fVar45 = auVar11._0_4_ * fVar26 + auVar12._0_4_ * fVar26 +
                 auVar9._0_4_ * fVar26 + auVar10._0_4_ * fVar26;
        fVar46 = auVar11._4_4_ * fVar26 + auVar12._4_4_ * fVar26 +
                 auVar9._4_4_ * fVar26 + auVar10._4_4_ * fVar26;
        fVar47 = auVar11._8_4_ * fVar26 + auVar12._8_4_ * fVar26 +
                 auVar9._8_4_ * fVar26 + auVar10._8_4_ * fVar26;
        fVar48 = auVar11._12_4_ * fVar26 + auVar12._12_4_ * fVar26 +
                 auVar9._12_4_ * fVar26 + auVar10._12_4_ * fVar26;
        local_158._0_4_ = auVar22._0_4_;
        local_158._4_4_ = auVar22._4_4_;
        uStack_150._0_4_ = auVar22._8_4_;
        local_148._0_4_ = auVar23._0_4_;
        local_148._4_4_ = auVar23._4_4_;
        uStack_140._0_4_ = auVar23._8_4_;
        local_128._0_4_ = auVar25._0_4_;
        local_128._4_4_ = auVar25._4_4_;
        local_128._8_4_ = auVar25._8_4_;
        auVar53._0_4_ =
             -(uint)((int)((fVar45 - (float)local_158._0_4_) * (float)local_148._0_4_ + _LC17) <
                    (int)local_138._0_4_) & local_128._0_4_;
        auVar53._4_4_ =
             -(uint)((int)((fVar46 - (float)local_158._4_4_) * (float)local_148._4_4_ +
                          _UNK_00124884) < (int)local_138._4_4_) & local_128._4_4_;
        auVar53._8_4_ =
             -(uint)((int)((fVar47 - (float)uStack_150) * (float)uStack_140 + _UNK_00124888) <
                    (int)local_138._8_4_) & local_128._8_4_;
        auVar53._12_4_ =
             -(uint)((int)((fVar48 - *(float *)(lVar31 + 0x2c)) * *(float *)(lVar31 + 0x3c) +
                          _UNK_0012488c) < *(int *)pauVar16[1]) & *(uint *)pauVar17[1];
        iVar36 = movmskps((int)uVar37,auVar53);
        fVar3 = *(float *)pauVar29[4];
        if (iVar36 != 0) break;
        fVar4 = *(float *)(pauVar29[4] + 4);
        local_118 = maxps(local_118,auVar9);
        auVar19._4_4_ = fVar46;
        auVar19._0_4_ = fVar45;
        auVar19._8_4_ = fVar47;
        auVar19._12_4_ = fVar48;
        _local_158 = minps(auVar49,auVar19);
        local_128 = minps(auVar50,auVar12);
        _local_148 = maxps(auVar52,auVar10);
        lVar39 = lVar39 + 1;
        local_138 = minps(auVar51,auVar11);
        auVar50._4_4_ = fVar46;
        auVar50._0_4_ = fVar45;
        auVar50._8_4_ = fVar47;
        auVar50._12_4_ = fVar48;
        local_108 = maxps(local_108,auVar50);
        lVar38 = lVar38 + (ulong)*(uint *)(pauVar29[2] + 0xc);
        fVar45 = fVar4;
        if (fVar4 <= local_ec) {
          fVar45 = local_ec;
        }
        uVar37 = (ulong)*(uint *)(pauVar29[3] + 0xc);
        if (fVar3 <= local_e8) {
          local_e8 = fVar3;
        }
        if (uVar33 < uVar37) {
          uVar33 = uVar37;
          local_e0 = fVar3;
          local_dc = fVar4;
        }
        pauVar29 = pauVar29 + -5;
        auVar49 = _local_158;
        auVar50 = local_128;
        auVar51 = local_138;
        auVar52 = _local_148;
        local_ec = fVar45;
        if (pauVar29 < pauVar30) goto LAB_0010783d;
      }
      uVar35 = *(uint *)(pauVar29[2] + 0xc);
      auVar21._4_4_ = fVar42;
      auVar21._0_4_ = fVar41;
      auVar21._8_4_ = fVar43;
      auVar21._12_4_ = fVar44;
      local_178 = maxps(local_178,auVar9);
      local_1a8 = minps(local_1a8,auVar12);
      auVar9._4_4_ = fVar46;
      auVar9._0_4_ = fVar45;
      auVar9._8_4_ = fVar47;
      auVar9._12_4_ = fVar48;
      local_168 = minps(local_168,auVar9);
      local_188 = minps(local_188,auVar11);
      local_198 = maxps(local_198,auVar10);
      auVar10._4_4_ = fVar46;
      auVar10._0_4_ = fVar45;
      auVar10._8_4_ = fVar47;
      auVar10._12_4_ = fVar48;
      local_1b8 = maxps(local_1b8,auVar10);
      fVar41 = *(float *)(pauVar29[4] + 4);
      if (fVar3 <= local_f8) {
        local_f8 = fVar3;
      }
      fVar42 = fVar41;
      if (fVar41 <= local_f4) {
        fVar42 = local_f4;
      }
      uVar37 = (ulong)*(uint *)(pauVar29[3] + 0xc);
      if (*(uint *)(pauVar29[3] + 0xc) <= uVar40) {
        uVar37 = uVar40;
        fVar41 = local_e4;
        fVar3 = local_f0;
      }
      lVar39 = lVar39 + 1;
      local_128 = minps(auVar50,auVar8);
      lVar38 = lVar38 + (ulong)*(uint *)(pauVar30[2] + 0xc);
      _local_148 = maxps(auVar52,auVar6);
      local_138 = minps(auVar51,auVar7);
      local_118 = maxps(local_118,auVar5);
      _local_158 = minps(auVar49,auVar21);
      local_108 = maxps(local_108,auVar21);
      fVar43 = *(float *)pauVar30[4];
      if (fVar43 <= local_e8) {
        local_e8 = fVar43;
      }
      fVar44 = *(float *)(pauVar30[4] + 4);
      fVar45 = fVar44;
      if (fVar44 <= local_ec) {
        fVar45 = local_ec;
      }
      uVar40 = (ulong)*(uint *)(pauVar30[3] + 0xc);
      if (*(uint *)(pauVar30[3] + 0xc) <= uVar33) {
        uVar40 = uVar33;
        fVar43 = local_e0;
        fVar44 = local_dc;
      }
      uVar33 = uVar40;
      *pauVar30 = auVar12;
      uVar20 = *(undefined8 *)(pauVar29[1] + 8);
      uVar18 = *(undefined8 *)pauVar30[4];
      pauVar28 = pauVar29 + -5;
      *(undefined8 *)pauVar30[1] = *(undefined8 *)pauVar29[1];
      *(undefined8 *)(pauVar30[1] + 8) = uVar20;
      uVar20 = *(undefined8 *)(pauVar29[2] + 8);
      *(undefined8 *)pauVar30[2] = *(undefined8 *)pauVar29[2];
      *(undefined8 *)(pauVar30[2] + 8) = uVar20;
      uVar20 = *(undefined8 *)(pauVar29[3] + 8);
      *(undefined8 *)pauVar30[3] = *(undefined8 *)pauVar29[3];
      *(undefined8 *)(pauVar30[3] + 8) = uVar20;
      *(undefined4 *)pauVar30[4] = *(undefined4 *)pauVar29[4];
      *(undefined4 *)(pauVar30[4] + 4) = *(undefined4 *)(pauVar29[4] + 4);
      *(undefined8 *)pauVar29[4] = uVar18;
      *pauVar29 = auVar8;
      pauVar29[1] = auVar6;
      pauVar29[2] = auVar7;
      pauVar29[3] = auVar5;
      uVar40 = uVar37;
      local_f4 = fVar42;
      local_f0 = fVar3;
      local_ec = fVar45;
      local_e4 = fVar41;
      local_e0 = fVar43;
      local_dc = fVar44;
    }
    else {
      fVar3 = *(float *)(pauVar30[4] + 4);
      uVar35 = *(uint *)(pauVar30[2] + 0xc);
      local_1a8 = minps(local_1a8,auVar8);
      local_198 = maxps(local_198,auVar6);
      local_188 = minps(local_188,auVar7);
      auVar6._4_4_ = fVar42;
      auVar6._0_4_ = fVar41;
      auVar6._8_4_ = fVar43;
      auVar6._12_4_ = fVar44;
      local_1b8 = maxps(local_1b8,auVar6);
      local_178 = maxps(local_178,auVar5);
      auVar5._4_4_ = fVar42;
      auVar5._0_4_ = fVar41;
      auVar5._8_4_ = fVar43;
      auVar5._12_4_ = fVar44;
      local_168 = minps(local_168,auVar5);
      fVar41 = *(float *)pauVar30[4];
      fVar42 = fVar3;
      if (fVar3 <= local_f4) {
        fVar42 = local_f4;
      }
      if (fVar41 <= local_f8) {
        local_f8 = fVar41;
      }
      local_f4 = fVar42;
      if (uVar40 < *(uint *)(pauVar30[3] + 0xc)) {
        uVar40 = (ulong)*(uint *)(pauVar30[3] + 0xc);
        local_f0 = fVar41;
        local_e4 = fVar3;
      }
    }
    lVar32 = lVar32 + (ulong)uVar35;
    pauVar30 = pauVar30 + 5;
    lVar34 = lVar34 + 1;
  }
LAB_0010783d:
  *(ulong *)(*(long *)this + 0x40 + param_1 * 8) = uVar27;
  *(ulong *)(*(long *)this + 0x280 + param_1 * 8) =
       ((long)pauVar30 - lVar14 >> 4) * -0x3333333333333333 - uVar27;
  lVar14 = *(long *)this;
  lVar31 = param_1 * 0x90;
  puVar1 = (undefined8 *)(lVar14 + 0xcc0 + lVar31);
  puVar2 = (undefined8 *)(lVar14 + 0xd20 + lVar31);
  *puVar1 = local_1a8._0_8_;
  puVar1[1] = local_1a8._8_8_;
  puVar1[10] = local_1b8._0_8_;
  puVar1[0xb] = local_1b8._8_8_;
  puVar1[2] = local_198._0_8_;
  puVar1[3] = local_198._8_8_;
  puVar1[4] = local_188._0_8_;
  puVar1[5] = local_188._8_8_;
  puVar1[6] = local_178._0_8_;
  puVar1[7] = local_178._8_8_;
  puVar1[8] = local_168._0_8_;
  puVar1[9] = local_168._8_8_;
  puVar2[1] = lVar34 + -1;
  *puVar2 = 0;
  *(long *)(lVar14 + lVar31 + 0xd30) = lVar32;
  *(ulong *)(lVar14 + lVar31 + 0xd38) = uVar40;
  *(float *)(puVar1 + 0x10) = local_f0;
  *(float *)((long)puVar1 + 0x84) = local_e4;
  *(float *)(puVar1 + 0x11) = local_f8;
  *(float *)((long)puVar1 + 0x8c) = local_f4;
  lVar14 = *(long *)this;
  puVar1 = (undefined8 *)(lVar14 + 0x30c0 + lVar31);
  puVar2 = (undefined8 *)(lVar14 + 0x3120 + lVar31);
  *puVar1 = local_128._0_8_;
  puVar1[1] = local_128._8_8_;
  puVar1[2] = local_148;
  puVar1[3] = uStack_140;
  puVar1[4] = local_138._0_8_;
  puVar1[5] = local_138._8_8_;
  puVar1[6] = local_118._0_8_;
  puVar1[7] = local_118._8_8_;
  puVar1[8] = local_158;
  puVar1[9] = uStack_150;
  puVar1[10] = local_108._0_8_;
  puVar1[0xb] = local_108._8_8_;
  *puVar2 = 0;
  puVar2[1] = lVar39;
  *(long *)(lVar14 + lVar31 + 0x3130) = lVar38;
  *(ulong *)(lVar14 + lVar31 + 0x3138) = uVar33;
  *(float *)(puVar1 + 0x10) = local_e0;
  *(float *)(puVar1 + 0x11) = local_e8;
  *(float *)((long)puVar1 + 0x84) = local_dc;
  *(float *)((long)puVar1 + 0x8c) = local_ec;
  return;
}



/* embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned
   long)#2}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimRefMB_const&)#1},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)#2},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#3}>
::
partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&)
::{lambda(unsigned_long)#2}::operator()(_lambda_unsigned_long__2_ *this,ulong param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  undefined4 local_38;
  undefined4 uStack_34;
  
  plVar1 = *(long **)(this + 8);
  lVar23 = plVar1[0x98];
  uVar17 = param_1 * **(long **)this;
  uVar21 = plVar1[0x99] - lVar23;
  uVar13 = uVar17 / (ulong)plVar1[6];
  uVar19 = uVar13;
  if (uVar13 < uVar21) {
    plVar25 = plVar1 + 0x98;
  }
  else {
    plVar26 = plVar1 + 0x9a;
    do {
      plVar25 = plVar26;
      lVar23 = *plVar25;
      uVar19 = uVar19 - uVar21;
      uVar21 = plVar25[1] - lVar23;
      plVar26 = plVar25 + 2;
    } while (uVar21 <= uVar19);
  }
  lVar22 = plVar1[0x118];
  uVar20 = plVar1[0x119] - lVar22;
  uVar18 = uVar13;
  if (uVar13 < uVar20) {
    plVar26 = plVar1 + 0x118;
  }
  else {
    plVar12 = plVar1 + 0x11a;
    do {
      plVar26 = plVar12;
      lVar22 = *plVar26;
      uVar18 = uVar18 - uVar20;
      uVar20 = plVar26[1] - lVar22;
      plVar12 = plVar26 + 2;
    } while (uVar20 <= uVar18);
  }
  uVar21 = uVar21 - uVar19;
  uVar13 = (**(long **)this + uVar17) / (ulong)plVar1[6] - uVar13;
  uVar20 = uVar20 - uVar18;
  puVar24 = (undefined8 *)((lVar23 + uVar19) * 0x50 + *plVar1);
  puVar16 = (undefined8 *)(*plVar1 + (lVar22 + uVar18) * 0x50);
  uVar19 = uVar13;
  if (uVar21 <= uVar13) {
    uVar19 = uVar21;
  }
  if (uVar20 < uVar19) {
    uVar19 = uVar20;
  }
  if (uVar13 == 0) {
    return;
  }
  do {
    if (uVar20 == 0) {
      uVar20 = plVar26[3] - plVar26[2];
      puVar16 = (undefined8 *)(plVar26[2] * 0x50 + *plVar1);
      uVar19 = uVar13;
      if (uVar20 <= uVar13) {
        uVar19 = uVar20;
      }
      if (uVar21 < uVar19) {
        uVar19 = uVar21;
      }
      plVar26 = plVar26 + 2;
    }
    uVar13 = uVar13 - uVar19;
    uVar21 = uVar21 - uVar19;
    uVar20 = uVar20 - uVar19;
    puVar14 = puVar24;
    puVar15 = puVar16;
    uVar17 = uVar19;
    if (uVar19 != 0) {
      do {
        uVar2 = puVar15[1];
        uVar3 = *puVar14;
        uVar4 = puVar14[1];
        uVar5 = puVar14[2];
        uVar6 = puVar14[3];
        uVar7 = puVar14[4];
        uVar8 = puVar14[5];
        *puVar14 = *puVar15;
        puVar14[1] = uVar2;
        uVar9 = puVar15[3];
        uVar10 = puVar14[6];
        uVar11 = puVar14[7];
        uVar2 = puVar14[8];
        puVar14[2] = puVar15[2];
        puVar14[3] = uVar9;
        uVar9 = puVar15[5];
        puVar14[4] = puVar15[4];
        puVar14[5] = uVar9;
        uVar9 = puVar15[7];
        puVar14[6] = puVar15[6];
        puVar14[7] = uVar9;
        *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(puVar15 + 8);
        *(undefined4 *)((long)puVar14 + 0x44) = *(undefined4 *)((long)puVar15 + 0x44);
        puVar15[6] = uVar10;
        puVar15[7] = uVar11;
        local_38 = (undefined4)uVar2;
        *puVar15 = uVar3;
        puVar15[1] = uVar4;
        *(undefined4 *)(puVar15 + 8) = local_38;
        uStack_34 = (undefined4)((ulong)uVar2 >> 0x20);
        puVar15[2] = uVar5;
        puVar15[3] = uVar6;
        puVar15[4] = uVar7;
        puVar15[5] = uVar8;
        *(undefined4 *)((long)puVar15 + 0x44) = uStack_34;
        uVar17 = uVar17 - 1;
        puVar14 = puVar14 + 10;
        puVar15 = puVar15 + 10;
      } while (uVar17 != 0);
      puVar16 = puVar16 + uVar19 * 10;
      puVar24 = puVar24 + uVar19 * 10;
      if (uVar13 == 0) {
        return;
      }
    }
    if (uVar21 == 0) {
      uVar21 = plVar25[3] - plVar25[2];
      puVar24 = (undefined8 *)(plVar25[2] * 0x50 + *plVar1);
      uVar19 = uVar20;
      if (uVar13 <= uVar20) {
        uVar19 = uVar13;
      }
      if (uVar21 < uVar19) {
        uVar19 = uVar21;
      }
      plVar25 = plVar25 + 2;
    }
    else {
      uVar19 = 0;
    }
  } while( true );
}



/* embree::parallel_reduce_internal<unsigned long, embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> >, embree::bin_parallel<embree::sse2::BinInfoT<32ul,
   embree::PrimRefMB, embree::LBBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRefMB>(embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa>
   >&, embree::PrimRefMB const*, unsigned long, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long> const&)#1},
   embree::bin_parallel<embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRefMB>(embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa>
   >&, embree::PrimRefMB const*, unsigned long, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> > const&, embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> > const&)#2}>(unsigned long, unsigned long, unsigned long, unsigned
   long, embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa> > const&,
   embree::bin_parallel<embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRefMB>(embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa>
   >&, embree::PrimRefMB const*, unsigned long, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::bin_parallel<embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRefMB>(embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa>
   >&, embree::PrimRefMB const*, unsigned long, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> > const&, embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_reduce_internal<unsigned_long,embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::bin_parallel<embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRefMB>(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::{lambda(embree::range<unsigned_long>const&)#1},embree::bin_parallel<embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRefMB>(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::{lambda(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>const&,embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::...const&,embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>const&)#2}const&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var16;
  long lVar17;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var18;
  ulong uVar19;
  undefined4 *puVar20;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var21;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  long in_FS_OFFSET;
  byte bVar26;
  _lambda_embree__range<unsigned_long>const___1_ local_1a80 [192];
  _lambda_embree__range<unsigned_long>const___1_ local_19c0 [5952];
  _lambda_embree__range<unsigned_long>const___1_ local_280 [504];
  undefined8 local_88;
  long local_48;
  
  bVar26 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var22 = local_1a80;
  bin_parallel<embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRefMB>(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)
  ::{lambda(embree::range<unsigned_long>const&)#1}::operator()(p_Var22,*(range **)(this + 0x20));
  p_Var18 = local_19c0;
  puVar23 = (undefined4 *)(param_1 * 0x1a00 + *(long *)(*(long *)(this + 0x18) + 0x1a00));
  puVar20 = puVar23;
  puVar24 = puVar23;
  p_Var21 = p_Var22;
  do {
    do {
      uVar1 = *(undefined4 *)(p_Var22 + 4);
      uVar2 = *(undefined4 *)(p_Var22 + 8);
      uVar3 = *(undefined4 *)(p_Var22 + 0xc);
      uVar4 = *(undefined4 *)(p_Var22 + 0x10);
      uVar5 = *(undefined4 *)(p_Var22 + 0x14);
      uVar6 = *(undefined4 *)(p_Var22 + 0x18);
      uVar7 = *(undefined4 *)(p_Var22 + 0x1c);
      p_Var16 = p_Var22 + 0x40;
      uVar8 = *(undefined4 *)(p_Var22 + 0x20);
      uVar9 = *(undefined4 *)(p_Var22 + 0x24);
      uVar10 = *(undefined4 *)(p_Var22 + 0x28);
      uVar11 = *(undefined4 *)(p_Var22 + 0x2c);
      uVar12 = *(undefined4 *)(p_Var22 + 0x30);
      uVar13 = *(undefined4 *)(p_Var22 + 0x34);
      uVar14 = *(undefined4 *)(p_Var22 + 0x38);
      uVar15 = *(undefined4 *)(p_Var22 + 0x3c);
      *puVar20 = *(undefined4 *)p_Var22;
      puVar20[1] = uVar1;
      puVar20[2] = uVar2;
      puVar20[3] = uVar3;
      puVar20[4] = uVar4;
      puVar20[5] = uVar5;
      puVar20[6] = uVar6;
      puVar20[7] = uVar7;
      puVar20[8] = uVar8;
      puVar20[9] = uVar9;
      puVar20[10] = uVar10;
      puVar20[0xb] = uVar11;
      puVar20[0xc] = uVar12;
      puVar20[0xd] = uVar13;
      puVar20[0xe] = uVar14;
      puVar20[0xf] = uVar15;
      p_Var22 = p_Var16;
      puVar20 = puVar20 + 0x10;
    } while (p_Var18 != p_Var16);
    p_Var22 = p_Var21 + 0xc0;
    p_Var18 = p_Var18 + 0xc0;
    puVar20 = puVar24 + 0x30;
    puVar24 = puVar20;
    p_Var21 = p_Var22;
  } while (p_Var22 != local_280);
  lVar17 = (long)puVar23 + (0x1800 - (long)((ulong)(puVar23 + 0x602) & 0xfffffffffffffff8));
  *(undefined8 *)(puVar23 + 0x600) = *(undefined8 *)p_Var22;
  *(undefined8 *)(puVar23 + 0x67e) = local_88;
  p_Var22 = p_Var22 + -lVar17;
  puVar25 = (undefined8 *)((ulong)(puVar23 + 0x602) & 0xfffffffffffffff8);
  for (uVar19 = (ulong)((int)lVar17 + 0x200U >> 3); uVar19 != 0; uVar19 = uVar19 - 1) {
    *puVar25 = *(undefined8 *)p_Var22;
    p_Var22 = p_Var22 + ((ulong)bVar26 * -2 + 1) * 8;
    puVar25 = puVar25 + (ulong)bVar26 * -2 + 1;
  }
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00108515) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  long lVar16;
  Thread *pTVar17;
  Thread *pTVar18;
  long lVar19;
  Thread *pTVar20;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar16 = embree::TaskScheduler::allocThreadIndex();
  pTVar17 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar17 = lVar16;
  pTVar20 = pTVar17 + 0x40;
  pTVar18 = pTVar20;
  do {
    *(undefined4 *)pTVar18 = 0;
    pTVar18 = pTVar18 + 0x40;
  } while (pTVar17 + 0x40040 != pTVar18);
  *(undefined8 *)(pTVar17 + 0x40040) = 0;
  *(undefined8 *)(pTVar17 + 0x40080) = 0;
  *(undefined8 *)(pTVar17 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar17 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar17 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar16 * 8) = pTVar17;
  UNLOCK();
  local_48 = pTVar17;
  pTVar18 = (Thread *)embree::TaskScheduler::swapThread(pTVar17);
  if (*(ulong *)(pTVar17 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar17 + 0xc00c0);
    uVar3 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar17 + 0xc00c0) = uVar3;
      pTVar4 = pTVar17 + uVar3 + 0x40080;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00124448;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      *(undefined8 *)(pTVar4 + 0x38) = uVar6;
      *(undefined8 *)(pTVar4 + 0x28) = uVar13;
      *(undefined8 *)(pTVar4 + 0x30) = uVar14;
      lVar19 = *(long *)(pTVar17 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar17 + 0xc0100);
      pTVar17[lVar19 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar17 + lVar19 + 0x44) = 1;
      *(Thread **)(pTVar17 + lVar19 + 0x50) = pTVar4;
      *(long *)(pTVar17 + lVar19 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar17 + lVar19 + 0x60) = param_2;
      *(long *)(pTVar17 + lVar19 + 0x68) = lVar5;
      *(ulong *)(pTVar17 + lVar19 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar20 + lVar19) == 0) {
        *(undefined4 *)(pTVar20 + lVar19) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar17 + 0x40080) = *(long *)(pTVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar17 + 0x40080) - 1U <= *(ulong *)(pTVar17 + 0x40040)) {
        LOCK();
        *(long *)(pTVar17 + 0x40040) = *(long *)(pTVar17 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar15 = embree::TaskScheduler::TaskQueue::execute_local(pTVar20,(Task *)pTVar17);
      } while (cVar15 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar16 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar18);
      pTVar20 = *(Thread **)param_2;
      if (pTVar20 != (Thread *)0x0) {
        local_48 = pTVar20;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar20 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar20 == (Thread *)0x0) {
        if (pTVar17 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar17 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar17);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar20;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  uStack_40 = *(undefined8 *)param_4;
  uStack_38 = *(undefined8 *)(param_4 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)(param_4 + 0x10);
  local_58 = param_2;
  uStack_50 = param_1;
  local_48 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_58,param_5,param_2 - param_1,true);
LAB_001087c7:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x40 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40080 + uVar2);
      *puVar3 = &PTR_execute_00124448;
      puVar3[1] = local_58;
      puVar3[2] = uStack_50;
      puVar3[7] = local_28;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      puVar3[5] = uStack_38;
      puVar3[6] = uStack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_001087c7;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Removing unreachable block (ram,0x00108bf5) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  long lVar16;
  Thread *pTVar17;
  Thread *pTVar18;
  long lVar19;
  Thread *pTVar20;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar16 = embree::TaskScheduler::allocThreadIndex();
  pTVar17 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar17 = lVar16;
  pTVar20 = pTVar17 + 0x40;
  pTVar18 = pTVar20;
  do {
    *(undefined4 *)pTVar18 = 0;
    pTVar18 = pTVar18 + 0x40;
  } while (pTVar17 + 0x40040 != pTVar18);
  *(undefined8 *)(pTVar17 + 0x40040) = 0;
  *(undefined8 *)(pTVar17 + 0x40080) = 0;
  *(undefined8 *)(pTVar17 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar17 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar17 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar16 * 8) = pTVar17;
  UNLOCK();
  local_48 = pTVar17;
  pTVar18 = (Thread *)embree::TaskScheduler::swapThread(pTVar17);
  if (*(ulong *)(pTVar17 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar17 + 0xc00c0);
    uVar3 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar17 + 0xc00c0) = uVar3;
      pTVar4 = pTVar17 + uVar3 + 0x40080;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00124460;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      *(undefined8 *)(pTVar4 + 0x38) = uVar6;
      *(undefined8 *)(pTVar4 + 0x28) = uVar13;
      *(undefined8 *)(pTVar4 + 0x30) = uVar14;
      lVar19 = *(long *)(pTVar17 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar17 + 0xc0100);
      pTVar17[lVar19 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar17 + lVar19 + 0x44) = 1;
      *(Thread **)(pTVar17 + lVar19 + 0x50) = pTVar4;
      *(long *)(pTVar17 + lVar19 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar17 + lVar19 + 0x60) = param_2;
      *(long *)(pTVar17 + lVar19 + 0x68) = lVar5;
      *(ulong *)(pTVar17 + lVar19 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar20 + lVar19) == 0) {
        *(undefined4 *)(pTVar20 + lVar19) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar17 + 0x40080) = *(long *)(pTVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar17 + 0x40080) - 1U <= *(ulong *)(pTVar17 + 0x40040)) {
        LOCK();
        *(long *)(pTVar17 + 0x40040) = *(long *)(pTVar17 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar15 = embree::TaskScheduler::TaskQueue::execute_local(pTVar20,(Task *)pTVar17);
      } while (cVar15 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar16 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar18);
      pTVar20 = *(Thread **)param_2;
      if (pTVar20 != (Thread *)0x0) {
        local_48 = pTVar20;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar20 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar20 == (Thread *)0x0) {
        if (pTVar17 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar17 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar17);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar20;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  uStack_40 = *(undefined8 *)param_4;
  uStack_38 = *(undefined8 *)(param_4 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)(param_4 + 0x10);
  local_58 = param_2;
  uStack_50 = param_1;
  local_48 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_58,param_5,param_2 - param_1,true);
LAB_00108ea7:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x40 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40080 + uVar2);
      *puVar3 = &PTR_execute_00124460;
      puVar3[1] = local_58;
      puVar3[2] = uStack_50;
      puVar3[7] = local_28;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      puVar3[5] = uStack_38;
      puVar3[6] = uStack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_00108ea7;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Control flow encountered bad instruction data */
/* unsigned long embree::parallel_filter<embree::PrimRefMB, unsigned long,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::PrimRefMB
   const&)#1}>(embree::PrimRefMB*, unsigned long, unsigned long, unsigned long,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::PrimRefMB
   const&)#1} const&) */

ulong embree::
      parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_>
                (PrimRefMB *param_1,ulong param_2,ulong param_3,ulong param_4,
                _lambda_embree__PrimRefMB_const___1_ *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  PrimRefMB *pPVar4;
  ulong uVar5;
  ulong uVar6;
  PrimRefMB *pPVar7;
  PrimRefMB *pPVar8;
  long lVar9;
  long in_FS_OFFSET;
  PrimRefMB *local_6c0;
  ulong local_6b8;
  PrimRefMB *local_6b0;
  ulong local_6a8;
  PrimRefMB *local_6a0;
  long local_698;
  long local_690;
  ulong *local_688;
  PrimRefMB **local_680;
  ulong *local_678;
  PrimRefMB **local_670;
  _lambda_embree__PrimRefMB_const___1_ *local_668;
  PrimRefMB **local_660;
  _lambda_embree__PrimRefMB_const___1_ *local_658;
  PrimRefMB **local_650;
  PrimRefMB *local_648 [64];
  _lambda_embree__PrimRefMB_const___1_ local_448 [512];
  _lambda_embree__PrimRefMB_const___1_ local_248 [520];
  long local_40;
  
  fVar3 = _LC15;
  fVar2 = _LC14;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c0 = (PrimRefMB *)param_3;
  local_6b8 = param_2;
  local_6b0 = param_1;
  if (param_4 < param_3 - param_2) {
    uVar5 = embree::TaskScheduler::threadCount();
    uVar6 = (ulong)(local_6c0 + param_4 + (-1 - local_6b8)) / param_4;
    if (uVar5 < (ulong)(local_6c0 + param_4 + (-1 - local_6b8)) / param_4) {
      uVar6 = uVar5;
    }
    local_6a8 = 0x40;
    if (uVar6 < 0x41) {
      local_6a8 = uVar6;
    }
    local_688 = &local_6b8;
    local_680 = &local_6c0;
    local_678 = &local_6a8;
    local_670 = &local_6b0;
    local_668 = param_5;
    local_660 = local_648;
    local_658 = local_448;
    if (uVar6 == 0) {
      local_6a0 = (PrimRefMB *)0x0;
      uVar6 = 0;
    }
    else {
      local_698 = 0;
      _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_15parallel_filterINS_9PrimRefMBEmZNS_4sse227HeuristicMBlurTemporalSplitIS4_NS5_18RecalculatePrimRefINS_12TriangleMeshEEELm2EE5splitERKNS5_8BinSplitILm32EEERKNS_5SetMBERSF_SI_EUlRKS4_E_EET0_PT_SM_SM_SM_RKT1_EUlmE_EEvSN_RKSM_EUlRKNS_5rangeImEEE_EEvSN_SN_SN_SU_PNS0_16TaskGroupContextE_isra_0
                (0,local_6a8,1,&local_688,&local_698);
      embree::TaskScheduler::wait();
      if (local_698 != 0) goto LAB_00109fd5;
      pPVar7 = (PrimRefMB *)0x0;
      local_6a0 = (PrimRefMB *)0x0;
      uVar6 = local_6a8;
      if (local_6a8 != 0) {
        uVar5 = 0;
        lVar9 = 0;
        do {
          *(long *)(local_248 + uVar5 * 8) = lVar9;
          pPVar7 = pPVar7 + (long)local_648[uVar5];
          lVar9 = lVar9 + *(long *)(local_448 + uVar5 * 8);
          uVar5 = uVar5 + 1;
          local_6a0 = pPVar7;
        } while (uVar5 != local_6a8);
      }
    }
    pPVar7 = local_6c0;
    if (local_6c0 + -local_6b8 != local_6a0) {
      local_660 = &local_6a0;
      local_658 = local_248;
      local_688 = &local_6b8;
      local_680 = &local_6c0;
      local_678 = &local_6a8;
      local_670 = local_648;
      local_668 = local_448;
      local_650 = &local_6b0;
      if (uVar6 != 0) {
        local_698 = 0;
        _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_15parallel_filterINS_9PrimRefMBEmZNS_4sse227HeuristicMBlurTemporalSplitIS4_NS5_18RecalculatePrimRefINS_12TriangleMeshEEELm2EE5splitERKNS5_8BinSplitILm32EEERKNS_5SetMBERSF_SI_EUlRKS4_E_EET0_PT_SM_SM_SM_RKT1_EUlmE0_EEvSN_RKSM_EUlRKNS_5rangeImEEE_EEvSN_SN_SN_SU_PNS0_16TaskGroupContextE_isra_0
                  (0,uVar6,1,&local_688,&local_698);
        embree::TaskScheduler::wait();
        if (local_698 != 0) {
LAB_00109fd5:
          local_690 = local_698;
          std::__exception_ptr::exception_ptr::_M_addref();
          std::rethrow_exception(&local_690);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      pPVar7 = local_6a0 + local_6b8;
    }
  }
  else {
    pPVar7 = (PrimRefMB *)param_2;
    if (param_2 < param_3) {
      pPVar4 = param_1 + param_2 * 0x50;
      pPVar8 = (PrimRefMB *)param_2;
      do {
        pPVar7 = pPVar8;
        if ((**(float **)param_5 < *(float *)(pPVar4 + 0x44) * fVar2) &&
           (*(float *)(pPVar4 + 0x40) * fVar3 < (*(float **)param_5)[1])) {
          uVar1 = *(undefined8 *)(pPVar4 + 8);
          pPVar7 = pPVar8 + 1;
          pPVar8 = param_1 + (long)pPVar8 * 0x50;
          *(undefined8 *)pPVar8 = *(undefined8 *)pPVar4;
          *(undefined8 *)(pPVar8 + 8) = uVar1;
          uVar1 = *(undefined8 *)(pPVar4 + 0x18);
          *(undefined8 *)(pPVar8 + 0x10) = *(undefined8 *)(pPVar4 + 0x10);
          *(undefined8 *)(pPVar8 + 0x18) = uVar1;
          uVar1 = *(undefined8 *)(pPVar4 + 0x28);
          *(undefined8 *)(pPVar8 + 0x20) = *(undefined8 *)(pPVar4 + 0x20);
          *(undefined8 *)(pPVar8 + 0x28) = uVar1;
          uVar1 = *(undefined8 *)(pPVar4 + 0x38);
          *(undefined8 *)(pPVar8 + 0x30) = *(undefined8 *)(pPVar4 + 0x30);
          *(undefined8 *)(pPVar8 + 0x38) = uVar1;
          *(undefined4 *)(pPVar8 + 0x40) = *(undefined4 *)(pPVar4 + 0x40);
          *(undefined4 *)(pPVar8 + 0x44) = *(undefined4 *)(pPVar4 + 0x44);
        }
        pPVar4 = pPVar4 + 0x50;
        pPVar8 = pPVar7;
      } while (param_1 + param_3 * 0x50 != pPVar4);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)pPVar7;
}



/* unsigned long embree::parallel_filter<embree::PrimRefMB, unsigned long,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::PrimRefMB
   const&)#4}>(embree::PrimRefMB*, unsigned long, unsigned long, unsigned long,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::PrimRefMB
   const&)#4} const&) */

ulong embree::
      parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_4_>
                (PrimRefMB *param_1,ulong param_2,ulong param_3,ulong param_4,
                _lambda_embree__PrimRefMB_const___4_ *param_5)

{
  ulong uVar1;
  ulong **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  PrimRefMB *pPVar7;
  ulong uVar8;
  ulong **ppuVar9;
  ulong *puVar10;
  long lVar11;
  PrimRefMB *pPVar12;
  ulong uVar13;
  undefined8 *puVar14;
  PrimRefMB *pPVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong ***pppuVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  ulong *puVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  ulong ***local_6c8;
  PrimRefMB *local_6c0;
  ulong local_6b8;
  PrimRefMB *local_6b0;
  ulong local_6a8;
  PrimRefMB *local_6a0;
  ulong **local_698;
  ulong **local_690;
  ulong *local_688;
  PrimRefMB **local_680;
  ulong *local_678;
  PrimRefMB **local_670;
  _lambda_embree__PrimRefMB_const___4_ *local_668;
  PrimRefMB **local_660;
  _lambda_embree__PrimRefMB_const___4_ *local_658;
  PrimRefMB **local_650;
  PrimRefMB *local_648 [64];
  _lambda_embree__PrimRefMB_const___4_ local_448 [512];
  _lambda_embree__PrimRefMB_const___4_ local_248 [520];
  long local_40;
  
  fVar6 = _LC15;
  fVar5 = _LC14;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c0 = (PrimRefMB *)param_3;
  local_6b8 = param_2;
  local_6b0 = param_1;
  if (param_4 < param_3 - param_2) {
    uVar8 = embree::TaskScheduler::threadCount();
    uVar18 = (ulong)(local_6c0 + param_4 + (-1 - local_6b8)) / param_4;
    if (uVar8 < (ulong)(local_6c0 + param_4 + (-1 - local_6b8)) / param_4) {
      uVar18 = uVar8;
    }
    local_6a8 = 0x40;
    if (uVar18 < 0x41) {
      local_6a8 = uVar18;
    }
    local_688 = &local_6b8;
    local_680 = &local_6c0;
    local_678 = &local_6a8;
    local_670 = &local_6b0;
    local_668 = param_5;
    local_660 = local_648;
    local_658 = local_448;
    if (uVar18 == 0) {
      local_6a0 = (PrimRefMB *)0x0;
      uVar18 = 0;
    }
    else {
      local_690 = &local_688;
      local_6c8 = &local_690;
      local_698 = (ulong **)0x0;
      _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_15parallel_filterINS_9PrimRefMBEmZNS_4sse227HeuristicMBlurTemporalSplitIS4_NS5_18RecalculatePrimRefINS_12TriangleMeshEEELm2EE5splitERKNS5_8BinSplitILm32EEERKNS_5SetMBERSF_SI_EUlRKS4_E2_EET0_PT_SM_SM_SM_RKT1_EUlmE_EEvSN_RKSM_EUlRKNS_5rangeImEEE_EEvSN_SN_SN_SU_PNS0_16TaskGroupContextE
                (0,local_6a8,1,local_6c8,&local_698);
      embree::TaskScheduler::wait();
      ppuVar9 = local_698;
      if (local_698 != (ulong **)0x0) goto LAB_0010b217;
      pPVar12 = (PrimRefMB *)0x0;
      local_6a0 = (PrimRefMB *)0x0;
      uVar18 = local_6a8;
      if (local_6a8 != 0) {
        uVar8 = 0;
        lVar23 = 0;
        do {
          *(long *)(local_248 + uVar8 * 8) = lVar23;
          pPVar12 = pPVar12 + (long)local_648[uVar8];
          lVar23 = lVar23 + *(long *)(local_448 + uVar8 * 8);
          uVar8 = uVar8 + 1;
          local_6a0 = pPVar12;
        } while (uVar8 != local_6a8);
      }
    }
    pPVar12 = local_6c0;
    if (local_6c0 + -local_6b8 != local_6a0) {
      local_660 = &local_6a0;
      local_658 = local_248;
      local_688 = &local_6b8;
      local_680 = &local_6c0;
      local_678 = &local_6a8;
      local_670 = local_648;
      local_668 = local_448;
      local_650 = &local_6b0;
      if (uVar18 != 0) {
        local_690 = &local_688;
        local_698 = (ulong **)0x0;
        _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_15parallel_filterINS_9PrimRefMBEmZNS_4sse227HeuristicMBlurTemporalSplitIS4_NS5_18RecalculatePrimRefINS_12TriangleMeshEEELm2EE5splitERKNS5_8BinSplitILm32EEERKNS_5SetMBERSF_SI_EUlRKS4_E2_EET0_PT_SM_SM_SM_RKT1_EUlmE0_EEvSN_RKSM_EUlRKNS_5rangeImEEE_EEvSN_SN_SN_SU_PNS0_16TaskGroupContextE
                  (0,uVar18,1,&local_690,&local_698);
        embree::TaskScheduler::wait();
        if (local_698 != (ulong **)0x0) {
          local_690 = local_698;
          std::__exception_ptr::exception_ptr::_M_addref();
          ppuVar9 = (ulong **)std::rethrow_exception(&local_690);
LAB_0010b217:
          local_690 = ppuVar9;
          std::__exception_ptr::exception_ptr::_M_addref();
          pppuVar20 = local_6c8;
          std::rethrow_exception();
          ppuVar9 = pppuVar20[2];
          if ((ulong **)((long)pppuVar20[1] - (long)ppuVar9) <= pppuVar20[3]) {
            ppuVar2 = pppuVar20[4];
            puVar24 = ppuVar2[3];
            uVar18 = **ppuVar2;
            uVar8 = *ppuVar2[1];
            uVar25 = *ppuVar2[2];
            puVar21 = (ulong *)(((uVar8 - uVar18) * (long)ppuVar9) / uVar25 +
                               puVar24[(long)ppuVar9] + uVar18);
            puVar10 = (ulong *)(*ppuVar2[5] + uVar18);
            if ((ulong *)(ppuVar2[4][(long)ppuVar9] + (long)puVar21) <
                (ulong *)(*ppuVar2[5] + uVar18)) {
              puVar10 = (ulong *)(ppuVar2[4][(long)ppuVar9] + (long)puVar21);
            }
            if (puVar21 < puVar10) {
              uVar3 = ppuVar2[6][(long)ppuVar9];
              uVar17 = (uVar3 - (long)puVar21) + (long)puVar10;
              lVar23 = uVar25 - 1;
              if (lVar23 != 0) {
                uVar13 = 0;
                while( true ) {
                  uVar1 = puVar24[lVar23] + uVar13;
                  puVar10 = (ulong *)(((uVar8 - uVar18) * lVar23) / uVar25);
                  uVar8 = uVar13;
                  if (uVar13 <= uVar3) {
                    uVar8 = uVar3;
                  }
                  uVar25 = uVar1;
                  if (uVar17 <= uVar1) {
                    uVar25 = uVar17;
                  }
                  puVar22 = puVar21;
                  if (uVar8 < uVar25) {
                    lVar19 = (long)puVar21 * 0x50;
                    puVar22 = (ulong *)((long)puVar21 + (uVar25 - uVar8));
                    lVar11 = (long)puVar10 +
                             (long)puVar21 + ((puVar24[lVar23] + uVar18 + (uVar13 - 1)) - uVar8);
                    do {
                      puVar10 = ppuVar2[7];
                      puVar21 = (ulong *)((long)puVar21 + 1);
                      puVar14 = (undefined8 *)((lVar11 * 0x50 - lVar19) + *puVar10);
                      puVar16 = (undefined8 *)(*puVar10 + lVar19);
                      lVar19 = lVar19 + 0x50;
                      uVar4 = puVar14[1];
                      *puVar16 = *puVar14;
                      puVar16[1] = uVar4;
                      uVar4 = puVar14[3];
                      puVar16[2] = puVar14[2];
                      puVar16[3] = uVar4;
                      uVar4 = puVar14[5];
                      puVar16[4] = puVar14[4];
                      puVar16[5] = uVar4;
                      uVar4 = puVar14[7];
                      puVar16[6] = puVar14[6];
                      puVar16[7] = uVar4;
                      *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar14 + 8);
                      *(undefined4 *)((long)puVar16 + 0x44) = *(undefined4 *)((long)puVar14 + 0x44);
                    } while (puVar21 != puVar22);
                  }
                  puVar21 = puVar22;
                  lVar23 = lVar23 + -1;
                  if ((lVar23 == 0) || (uVar17 < uVar1)) break;
                  puVar24 = ppuVar2[3];
                  uVar18 = **ppuVar2;
                  uVar8 = *ppuVar2[1];
                  uVar25 = *ppuVar2[2];
                  uVar13 = uVar1;
                }
              }
            }
            return (ulong)puVar10;
          }
          uVar18 = (ulong)((long)pppuVar20[1] + (long)ppuVar9) >> 1;
          _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_15parallel_filterINS_9PrimRefMBEmZNS_4sse227HeuristicMBlurTemporalSplitIS4_NS5_18RecalculatePrimRefINS_12TriangleMeshEEELm2EE5splitERKNS5_8BinSplitILm32EEERKNS_5SetMBERSF_SI_EUlRKS4_E2_EET0_PT_SM_SM_SM_RKT1_EUlmE0_EEvSN_RKSM_EUlRKNS_5rangeImEEE_EEvSN_SN_SN_SU_PNS0_16TaskGroupContextE
                    (ppuVar9,uVar18,pppuVar20[3],pppuVar20 + 4,pppuVar20[5],ppuVar9,local_6c8,
                     local_448,&local_6c0,&local_6b8,&local_6b0);
          _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_15parallel_filterINS_9PrimRefMBEmZNS_4sse227HeuristicMBlurTemporalSplitIS4_NS5_18RecalculatePrimRefINS_12TriangleMeshEEELm2EE5splitERKNS5_8BinSplitILm32EEERKNS_5SetMBERSF_SI_EUlRKS4_E2_EET0_PT_SM_SM_SM_RKT1_EUlmE0_EEvSN_RKSM_EUlRKNS_5rangeImEEE_EEvSN_SN_SN_SU_PNS0_16TaskGroupContextE
                    (uVar18,pppuVar20[1],pppuVar20[3],pppuVar20 + 4,pppuVar20[5]);
          uVar18 = embree::TaskScheduler::wait();
          return uVar18;
        }
      }
      pPVar12 = local_6a0 + local_6b8;
    }
  }
  else {
    pPVar12 = (PrimRefMB *)param_2;
    if (param_2 < param_3) {
      pPVar7 = param_1 + param_2 * 0x50;
      pPVar15 = (PrimRefMB *)param_2;
      do {
        pPVar12 = pPVar15;
        if ((**(float **)param_5 < *(float *)(pPVar7 + 0x44) * fVar5) &&
           (*(float *)(pPVar7 + 0x40) * fVar6 < (*(float **)param_5)[1])) {
          uVar4 = *(undefined8 *)(pPVar7 + 8);
          pPVar12 = pPVar15 + 1;
          pPVar15 = param_1 + (long)pPVar15 * 0x50;
          *(undefined8 *)pPVar15 = *(undefined8 *)pPVar7;
          *(undefined8 *)(pPVar15 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pPVar7 + 0x18);
          *(undefined8 *)(pPVar15 + 0x10) = *(undefined8 *)(pPVar7 + 0x10);
          *(undefined8 *)(pPVar15 + 0x18) = uVar4;
          uVar4 = *(undefined8 *)(pPVar7 + 0x28);
          *(undefined8 *)(pPVar15 + 0x20) = *(undefined8 *)(pPVar7 + 0x20);
          *(undefined8 *)(pPVar15 + 0x28) = uVar4;
          uVar4 = *(undefined8 *)(pPVar7 + 0x38);
          *(undefined8 *)(pPVar15 + 0x30) = *(undefined8 *)(pPVar7 + 0x30);
          *(undefined8 *)(pPVar15 + 0x38) = uVar4;
          *(undefined4 *)(pPVar15 + 0x40) = *(undefined4 *)(pPVar7 + 0x40);
          *(undefined4 *)(pPVar15 + 0x44) = *(undefined4 *)(pPVar7 + 0x44);
        }
        pPVar7 = pPVar7 + 0x50;
        pPVar15 = pPVar12;
      } while (param_1 + param_3 * 0x50 != pPVar7);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)pPVar12;
}



/* WARNING: Removing unreachable block (ram,0x0010b7ed) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::Prim___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  long lVar17;
  Thread *pTVar18;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar14 = embree::TaskScheduler::allocThreadIndex();
  pTVar15 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar15 = lVar14;
  pTVar18 = pTVar15 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar16 = pTVar16 + 0x40;
  } while (pTVar15 + 0x40040 != pTVar16);
  *(undefined8 *)(pTVar15 + 0x40040) = 0;
  *(undefined8 *)(pTVar15 + 0x40080) = 0;
  *(undefined8 *)(pTVar15 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar15 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar15 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar14 * 8) = pTVar15;
  UNLOCK();
  local_48 = pTVar15;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar15);
  if (*(ulong *)(pTVar15 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar15 + 0xc00c0);
    uVar3 = lVar5 + 0x30 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar15 + 0xc00c0) = uVar3;
      pTVar4 = pTVar15 + uVar3 + 0x40090;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar4 = &PTR_execute_001244d8;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x28) = uVar6;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      lVar17 = *(long *)(pTVar15 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar15 + 0xc0100);
      pTVar15[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar15 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar15 + lVar17 + 0x50) = pTVar4;
      *(long *)(pTVar15 + lVar17 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar15 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar15 + lVar17 + 0x68) = lVar5;
      *(ulong *)(pTVar15 + lVar17 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar15 + 0x40080) = *(long *)(pTVar15 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar15 + 0x40080) - 1U <= *(ulong *)(pTVar15 + 0x40040)) {
        LOCK();
        *(long *)(pTVar15 + 0x40040) = *(long *)(pTVar15 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar13 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar15);
      } while (cVar13 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar14 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar16);
      pTVar18 = *(Thread **)param_2;
      if (pTVar18 != (Thread *)0x0) {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar18 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar18 == (Thread *)0x0) {
        if (pTVar15 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar15 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar15);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar18;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3___mbree::Vec3fa>>&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)param_4;
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::Prim___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_48,param_5,param_2 - param_1,true);
LAB_0010ba83:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_001244d8;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = uStack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_0010ba83;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimRefMB_const&)#1},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)#2},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,emb...mbree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,emb___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar1) {
    uVar2 = *(long *)(this + 8) + uVar1 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3___mbree::Vec3fa>>&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar1,uVar2,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3___mbree::Vec3fa>>&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar2,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimRefMB_const&)#1},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)#2},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#3}>
  ::
  partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&)
  ::{lambda(unsigned_long)#1}::operator()(*(_lambda_unsigned_long__1_ **)(this + 0x20),uVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010bf2d) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::Prim___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  long lVar17;
  Thread *pTVar18;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar14 = embree::TaskScheduler::allocThreadIndex();
  pTVar15 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar15 = lVar14;
  pTVar18 = pTVar15 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar16 = pTVar16 + 0x40;
  } while (pTVar15 + 0x40040 != pTVar16);
  *(undefined8 *)(pTVar15 + 0x40040) = 0;
  *(undefined8 *)(pTVar15 + 0x40080) = 0;
  *(undefined8 *)(pTVar15 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar15 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar15 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar14 * 8) = pTVar15;
  UNLOCK();
  local_48 = pTVar15;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar15);
  if (*(ulong *)(pTVar15 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar15 + 0xc00c0);
    uVar3 = lVar5 + 0x30 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar15 + 0xc00c0) = uVar3;
      pTVar4 = pTVar15 + uVar3 + 0x40090;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar4 = &PTR_execute_001244f0;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x28) = uVar6;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      lVar17 = *(long *)(pTVar15 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar15 + 0xc0100);
      pTVar15[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar15 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar15 + lVar17 + 0x50) = pTVar4;
      *(long *)(pTVar15 + lVar17 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar15 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar15 + lVar17 + 0x68) = lVar5;
      *(ulong *)(pTVar15 + lVar17 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar15 + 0x40080) = *(long *)(pTVar15 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar15 + 0x40080) - 1U <= *(ulong *)(pTVar15 + 0x40040)) {
        LOCK();
        *(long *)(pTVar15 + 0x40040) = *(long *)(pTVar15 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar13 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar15);
      } while (cVar13 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar14 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar16);
      pTVar18 = *(Thread **)param_2;
      if (pTVar18 != (Thread *)0x0) {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar18 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar18 == (Thread *)0x0) {
        if (pTVar15 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar15 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar15);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar18;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3___mbree::Vec3fa>>&)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)param_4;
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::Prim___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_48,param_5,param_2 - param_1,true);
LAB_0010c1c3:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_001244f0;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = uStack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_0010c1c3;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >
   const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimRefMB_const&)#1},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)#2},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#3}>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,emb...mbree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,emb___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar1) {
    uVar2 = *(long *)(this + 8) + uVar1 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3___mbree::Vec3fa>>&)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar1,uVar2,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3___mbree::Vec3fa>>&)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar2,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimRefMB_const&)#1},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)#2},embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)#3}>
  ::
  partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&)
  ::{lambda(unsigned_long)#2}::operator()(*(_lambda_unsigned_long__2_ **)(this + 0x20),uVar1);
  return;
}



/* unsigned long embree::parallel_partitioning<embree::PrimRefMB,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1},
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2}, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#3}>(embree::PrimRefMB*, unsigned
   long, unsigned long, embree::EmptyTy const&, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>
   >&, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimRefMB const&)#1} const&,
   embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&, embree::PrimRefMB
   const&)#2} const&, embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,
   32ul>::split(embree::sse2::BinSplit<32ul> const&, embree::SetMB const&, embree::SetMB&,
   embree::SetMB&)::{lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)#3} const&, unsigned long, unsigned
   long) */

ulong embree::
      parallel_partitioning<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>
                (PrimRefMB *param_1,ulong param_2,ulong param_3,EmptyTy *param_4,
                PrimInfoMBT_conflict *param_5,PrimInfoMBT_conflict *param_6,
                _lambda_embree__PrimRefMB_const___1_ *param_7,
                _lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimRefMB_const___2_
                *param_8,_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>_const___3_
                         *param_9,ulong param_10,ulong param_11)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  float fVar14;
  PrimInfoMBT_conflict *pPVar15;
  ulong uVar16;
  PrimInfoMBT_conflict *pPVar17;
  PrimInfoMBT_conflict *pPVar18;
  uint uVar19;
  int iVar20;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var22;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var23;
  PrimInfoMBT_conflict *pPVar24;
  long lVar25;
  long lVar26;
  PrimInfoMBT_conflict *pPVar27;
  ulong uVar28;
  PrimInfoMBT_conflict *pPVar29;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var30;
  long in_FS_OFFSET;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar38;
  int iVar39;
  int iVar40;
  undefined1 auVar37 [16];
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  long local_c8;
  PrimInfoMBT_conflict *local_c0;
  PrimInfoMBT_conflict *local_b8;
  PrimInfoMBT_conflict *local_b0;
  PrimInfoMBT_conflict *local_a8;
  PrimInfoMBT_conflict *pPStack_a0;
  PrimInfoMBT_conflict *local_98;
  PrimInfoMBT_conflict *pPStack_90;
  long *local_88;
  PrimInfoMBT_conflict **local_80;
  undefined8 local_58;
  long local_40;
  uint *puVar21;
  
  uVar28 = param_3 - param_2;
  p_Var30 = (_lambda_embree__range<unsigned_long>_const___1_ *)(param_1 + param_2 * 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar28 < param_11) {
LAB_0010c820:
    fVar14 = _LC17;
    fVar1 = _LC12;
    p_Var23 = (_lambda_embree__range<unsigned_long>_const___1_ *)param_1 + param_3 * 0x50 + -0x50;
    for (; p_Var30 <= p_Var23; p_Var30 = p_Var30 + 0x50) {
      auVar31 = *(undefined1 (*) [16])(p_Var30 + 0x30);
      auVar33 = *(undefined1 (*) [16])(p_Var30 + 0x10);
      auVar2 = *(undefined1 (*) [16])(p_Var30 + 0x20);
      auVar32 = *(undefined1 (*) [16])p_Var30;
      lVar25 = *(long *)param_7;
      fVar49 = *(float *)(lVar25 + 0x20);
      fVar50 = *(float *)(lVar25 + 0x24);
      fVar51 = *(float *)(lVar25 + 0x28);
      fVar52 = *(float *)(lVar25 + 0x2c);
      fVar45 = *(float *)(lVar25 + 0x30);
      fVar46 = *(float *)(lVar25 + 0x34);
      fVar47 = *(float *)(lVar25 + 0x38);
      fVar48 = *(float *)(lVar25 + 0x3c);
      piVar4 = *(int **)((PrimInfoMBT_conflict *)param_7 + 8);
      iVar20 = *piVar4;
      iVar38 = piVar4[1];
      iVar39 = piVar4[2];
      iVar40 = piVar4[3];
      puVar21 = *(uint **)((PrimInfoMBT_conflict *)param_7 + 0x10);
      uVar41 = *puVar21;
      uVar42 = puVar21[1];
      uVar43 = puVar21[2];
      uVar44 = puVar21[3];
      auVar35._0_4_ =
           auVar31._0_4_ * fVar1 + auVar33._0_4_ * fVar1 +
           auVar2._0_4_ * fVar1 + auVar32._0_4_ * fVar1;
      auVar35._4_4_ =
           auVar31._4_4_ * fVar1 + auVar33._4_4_ * fVar1 +
           auVar2._4_4_ * fVar1 + auVar32._4_4_ * fVar1;
      auVar35._8_4_ =
           auVar31._8_4_ * fVar1 + auVar33._8_4_ * fVar1 +
           auVar2._8_4_ * fVar1 + auVar32._8_4_ * fVar1;
      auVar35._12_4_ =
           auVar31._12_4_ * fVar1 + auVar33._12_4_ * fVar1 +
           auVar2._12_4_ * fVar1 + auVar32._12_4_ * fVar1;
      auVar36._0_4_ = -(uint)((int)((auVar35._0_4_ - fVar49) * fVar45 + fVar14) < iVar20) & uVar41;
      auVar36._4_4_ = -(uint)((int)((auVar35._4_4_ - fVar50) * fVar46 + fVar14) < iVar38) & uVar42;
      auVar36._8_4_ = -(uint)((int)((auVar35._8_4_ - fVar51) * fVar47 + fVar14) < iVar39) & uVar43;
      auVar36._12_4_ = -(uint)((int)((auVar35._12_4_ - fVar52) * fVar48 + fVar14) < iVar40) & uVar44
      ;
      uVar19 = movmskps((int)puVar21,auVar36);
      puVar21 = (uint *)(ulong)uVar19;
      p_Var22 = p_Var23;
      if (uVar19 == 0) {
        while( true ) {
          auVar31 = *(undefined1 (*) [16])(p_Var22 + 0x30);
          auVar33 = *(undefined1 (*) [16])(p_Var22 + 0x10);
          auVar2 = *(undefined1 (*) [16])(p_Var22 + 0x20);
          auVar32 = *(undefined1 (*) [16])p_Var22;
          auVar34._0_4_ =
               auVar31._0_4_ * fVar1 + auVar33._0_4_ * fVar1 +
               auVar2._0_4_ * fVar1 + auVar32._0_4_ * fVar1;
          auVar34._4_4_ =
               auVar31._4_4_ * fVar1 + auVar33._4_4_ * fVar1 +
               auVar2._4_4_ * fVar1 + auVar32._4_4_ * fVar1;
          auVar34._8_4_ =
               auVar31._8_4_ * fVar1 + auVar33._8_4_ * fVar1 +
               auVar2._8_4_ * fVar1 + auVar32._8_4_ * fVar1;
          auVar34._12_4_ =
               auVar31._12_4_ * fVar1 + auVar33._12_4_ * fVar1 +
               auVar2._12_4_ * fVar1 + auVar32._12_4_ * fVar1;
          auVar37._0_4_ =
               -(uint)((int)((auVar34._0_4_ - fVar49) * fVar45 + fVar14) < iVar20) & uVar41;
          auVar37._4_4_ =
               -(uint)((int)((auVar34._4_4_ - fVar50) * fVar46 + fVar14) < iVar38) & uVar42;
          auVar37._8_4_ =
               -(uint)((int)((auVar34._8_4_ - fVar51) * fVar47 + fVar14) < iVar39) & uVar43;
          auVar37._12_4_ =
               -(uint)((int)((auVar34._12_4_ - fVar52) * fVar48 + fVar14) < iVar40) & uVar44;
          iVar20 = movmskps((int)puVar21,auVar37);
          if (iVar20 != 0) break;
          auVar32 = minps(*(undefined1 (*) [16])param_6,auVar32);
          *(undefined1 (*) [16])param_6 = auVar32;
          auVar33 = maxps(*(undefined1 (*) [16])(param_6 + 0x10),auVar33);
          *(undefined1 (*) [16])(param_6 + 0x10) = auVar33;
          auVar33 = minps(*(undefined1 (*) [16])(param_6 + 0x20),auVar2);
          *(undefined1 (*) [16])(param_6 + 0x20) = auVar33;
          auVar31 = maxps(*(undefined1 (*) [16])(param_6 + 0x30),auVar31);
          *(undefined1 (*) [16])(param_6 + 0x30) = auVar31;
          auVar31 = minps(*(undefined1 (*) [16])(param_6 + 0x40),auVar34);
          *(undefined1 (*) [16])(param_6 + 0x40) = auVar31;
          auVar31 = maxps(*(undefined1 (*) [16])(param_6 + 0x50),auVar34);
          *(undefined1 (*) [16])(param_6 + 0x50) = auVar31;
          fVar49 = *(float *)(param_6 + 0x88);
          if (*(float *)(p_Var22 + 0x40) <= *(float *)(param_6 + 0x88)) {
            fVar49 = *(float *)(p_Var22 + 0x40);
          }
          *(float *)(param_6 + 0x88) = fVar49;
          fVar49 = *(float *)(p_Var22 + 0x44);
          if (*(float *)(p_Var22 + 0x44) <= *(float *)(param_6 + 0x8c)) {
            fVar49 = *(float *)(param_6 + 0x8c);
          }
          *(long *)(param_6 + 0x68) = *(long *)(param_6 + 0x68) + 1;
          *(float *)(param_6 + 0x8c) = fVar49;
          *(ulong *)(param_6 + 0x70) = *(long *)(param_6 + 0x70) + (ulong)*(uint *)(p_Var22 + 0x2c);
          if (*(ulong *)(param_6 + 0x78) < (ulong)*(uint *)(p_Var22 + 0x3c)) {
            *(ulong *)(param_6 + 0x78) = (ulong)*(uint *)(p_Var22 + 0x3c);
            *(undefined4 *)(param_6 + 0x80) = *(undefined4 *)(p_Var22 + 0x40);
            *(undefined4 *)(param_6 + 0x84) = *(undefined4 *)(p_Var22 + 0x44);
          }
          p_Var22 = p_Var22 + -0x50;
          if (p_Var22 < p_Var30) goto LAB_0010c97f;
          lVar25 = *(long *)param_7;
          fVar49 = *(float *)(lVar25 + 0x20);
          fVar50 = *(float *)(lVar25 + 0x24);
          fVar51 = *(float *)(lVar25 + 0x28);
          fVar52 = *(float *)(lVar25 + 0x2c);
          fVar45 = *(float *)(lVar25 + 0x30);
          fVar46 = *(float *)(lVar25 + 0x34);
          fVar47 = *(float *)(lVar25 + 0x38);
          fVar48 = *(float *)(lVar25 + 0x3c);
          piVar4 = *(int **)((PrimInfoMBT_conflict *)param_7 + 8);
          iVar20 = *piVar4;
          iVar38 = piVar4[1];
          iVar39 = piVar4[2];
          iVar40 = piVar4[3];
          puVar21 = *(uint **)((PrimInfoMBT_conflict *)param_7 + 0x10);
          uVar41 = *puVar21;
          uVar42 = puVar21[1];
          uVar43 = puVar21[2];
          uVar44 = puVar21[3];
        }
        auVar32 = minps(*(undefined1 (*) [16])param_5,auVar32);
        *(undefined1 (*) [16])param_5 = auVar32;
        auVar33 = maxps(*(undefined1 (*) [16])(param_5 + 0x10),auVar33);
        *(undefined1 (*) [16])(param_5 + 0x10) = auVar33;
        auVar33 = minps(*(undefined1 (*) [16])(param_5 + 0x20),auVar2);
        *(undefined1 (*) [16])(param_5 + 0x20) = auVar33;
        auVar31 = maxps(*(undefined1 (*) [16])(param_5 + 0x30),auVar31);
        *(undefined1 (*) [16])(param_5 + 0x30) = auVar31;
        auVar31 = minps(*(undefined1 (*) [16])(param_5 + 0x40),auVar34);
        *(undefined1 (*) [16])(param_5 + 0x40) = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_5 + 0x50),auVar34);
        *(undefined1 (*) [16])(param_5 + 0x50) = auVar31;
        fVar49 = *(float *)(param_5 + 0x88);
        if (*(float *)(p_Var22 + 0x40) <= *(float *)(param_5 + 0x88)) {
          fVar49 = *(float *)(p_Var22 + 0x40);
        }
        *(float *)(param_5 + 0x88) = fVar49;
        fVar49 = *(float *)(p_Var22 + 0x44);
        if (*(float *)(p_Var22 + 0x44) <= *(float *)(param_5 + 0x8c)) {
          fVar49 = *(float *)(param_5 + 0x8c);
        }
        *(long *)(param_5 + 0x68) = *(long *)(param_5 + 0x68) + 1;
        *(float *)(param_5 + 0x8c) = fVar49;
        *(ulong *)(param_5 + 0x70) = *(long *)(param_5 + 0x70) + (ulong)*(uint *)(p_Var22 + 0x2c);
        if (*(ulong *)(param_5 + 0x78) < (ulong)*(uint *)(p_Var22 + 0x3c)) {
          *(ulong *)(param_5 + 0x78) = (ulong)*(uint *)(p_Var22 + 0x3c);
          *(undefined4 *)(param_5 + 0x80) = *(undefined4 *)(p_Var22 + 0x40);
          *(undefined4 *)(param_5 + 0x84) = *(undefined4 *)(p_Var22 + 0x44);
        }
        auVar31 = *(undefined1 (*) [16])(p_Var30 + 0x10);
        auVar33 = *(undefined1 (*) [16])(p_Var30 + 0x30);
        auVar2 = *(undefined1 (*) [16])(p_Var30 + 0x20);
        auVar32._0_4_ =
             auVar33._0_4_ * fVar1 + auVar31._0_4_ * fVar1 +
             auVar2._0_4_ * fVar1 + *(float *)p_Var30 * fVar1;
        auVar32._4_4_ =
             auVar33._4_4_ * fVar1 + auVar31._4_4_ * fVar1 +
             auVar2._4_4_ * fVar1 + *(float *)(p_Var30 + 4) * fVar1;
        auVar32._8_4_ =
             auVar33._8_4_ * fVar1 + auVar31._8_4_ * fVar1 +
             auVar2._8_4_ * fVar1 + *(float *)(p_Var30 + 8) * fVar1;
        auVar32._12_4_ =
             auVar33._12_4_ * fVar1 + auVar31._12_4_ * fVar1 +
             auVar2._12_4_ * fVar1 + *(float *)(p_Var30 + 0xc) * fVar1;
        auVar36 = minps(*(undefined1 (*) [16])param_6,*(undefined1 (*) [16])p_Var30);
        *(undefined1 (*) [16])param_6 = auVar36;
        auVar31 = maxps(*(undefined1 (*) [16])(param_6 + 0x10),auVar31);
        *(undefined1 (*) [16])(param_6 + 0x10) = auVar31;
        auVar31 = minps(*(undefined1 (*) [16])(param_6 + 0x20),auVar2);
        *(undefined1 (*) [16])(param_6 + 0x20) = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_6 + 0x30),auVar33);
        *(undefined1 (*) [16])(param_6 + 0x30) = auVar31;
        auVar31 = minps(*(undefined1 (*) [16])(param_6 + 0x40),auVar32);
        *(undefined1 (*) [16])(param_6 + 0x40) = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_6 + 0x50),auVar32);
        *(undefined1 (*) [16])(param_6 + 0x50) = auVar31;
        fVar49 = *(float *)(param_6 + 0x88);
        if (*(float *)(p_Var30 + 0x40) <= *(float *)(param_6 + 0x88)) {
          fVar49 = *(float *)(p_Var30 + 0x40);
        }
        *(float *)(param_6 + 0x88) = fVar49;
        fVar49 = *(float *)(p_Var30 + 0x44);
        if (*(float *)(p_Var30 + 0x44) <= *(float *)(param_6 + 0x8c)) {
          fVar49 = *(float *)(param_6 + 0x8c);
        }
        *(long *)(param_6 + 0x68) = *(long *)(param_6 + 0x68) + 1;
        *(float *)(param_6 + 0x8c) = fVar49;
        *(ulong *)(param_6 + 0x70) = *(long *)(param_6 + 0x70) + (ulong)*(uint *)(p_Var30 + 0x2c);
        if (*(ulong *)(param_6 + 0x78) < (ulong)*(uint *)(p_Var30 + 0x3c)) {
          *(ulong *)(param_6 + 0x78) = (ulong)*(uint *)(p_Var30 + 0x3c);
          *(undefined4 *)(param_6 + 0x80) = *(undefined4 *)(p_Var30 + 0x40);
          *(undefined4 *)(param_6 + 0x84) = *(undefined4 *)(p_Var30 + 0x44);
        }
        uVar3 = *(undefined8 *)(p_Var22 + 8);
        uVar5 = *(undefined8 *)p_Var30;
        uVar6 = *(undefined8 *)(p_Var30 + 8);
        p_Var23 = p_Var22 + -0x50;
        uVar7 = *(undefined8 *)(p_Var30 + 0x10);
        uVar8 = *(undefined8 *)(p_Var30 + 0x18);
        uVar9 = *(undefined8 *)(p_Var30 + 0x20);
        uVar10 = *(undefined8 *)(p_Var30 + 0x28);
        *(undefined8 *)p_Var30 = *(undefined8 *)p_Var22;
        *(undefined8 *)(p_Var30 + 8) = uVar3;
        uVar3 = *(undefined8 *)(p_Var22 + 0x18);
        uVar11 = *(undefined8 *)(p_Var30 + 0x30);
        uVar12 = *(undefined8 *)(p_Var30 + 0x38);
        local_58 = *(undefined8 *)(p_Var30 + 0x40);
        *(undefined8 *)(p_Var30 + 0x10) = *(undefined8 *)(p_Var22 + 0x10);
        *(undefined8 *)(p_Var30 + 0x18) = uVar3;
        uVar3 = *(undefined8 *)(p_Var22 + 0x28);
        *(undefined8 *)(p_Var30 + 0x20) = *(undefined8 *)(p_Var22 + 0x20);
        *(undefined8 *)(p_Var30 + 0x28) = uVar3;
        uVar3 = *(undefined8 *)(p_Var22 + 0x38);
        *(undefined8 *)(p_Var30 + 0x30) = *(undefined8 *)(p_Var22 + 0x30);
        *(undefined8 *)(p_Var30 + 0x38) = uVar3;
        *(undefined4 *)(p_Var30 + 0x40) = *(undefined4 *)(p_Var22 + 0x40);
        *(undefined4 *)(p_Var30 + 0x44) = *(undefined4 *)(p_Var22 + 0x44);
        *(undefined8 *)p_Var22 = uVar5;
        *(undefined8 *)(p_Var22 + 8) = uVar6;
        *(undefined8 *)(p_Var22 + 0x10) = uVar7;
        *(undefined8 *)(p_Var22 + 0x18) = uVar8;
        *(undefined8 *)(p_Var22 + 0x20) = uVar9;
        *(undefined8 *)(p_Var22 + 0x28) = uVar10;
        *(undefined8 *)(p_Var22 + 0x30) = uVar11;
        *(undefined8 *)(p_Var22 + 0x38) = uVar12;
        *(undefined8 *)(p_Var22 + 0x40) = local_58;
      }
      else {
        auVar32 = minps(*(undefined1 (*) [16])param_5,auVar32);
        *(undefined1 (*) [16])param_5 = auVar32;
        auVar33 = maxps(*(undefined1 (*) [16])(param_5 + 0x10),auVar33);
        *(undefined1 (*) [16])(param_5 + 0x10) = auVar33;
        auVar33 = minps(*(undefined1 (*) [16])(param_5 + 0x20),auVar2);
        *(undefined1 (*) [16])(param_5 + 0x20) = auVar33;
        auVar31 = maxps(*(undefined1 (*) [16])(param_5 + 0x30),auVar31);
        *(undefined1 (*) [16])(param_5 + 0x30) = auVar31;
        auVar31 = minps(*(undefined1 (*) [16])(param_5 + 0x40),auVar35);
        *(undefined1 (*) [16])(param_5 + 0x40) = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_5 + 0x50),auVar35);
        *(undefined1 (*) [16])(param_5 + 0x50) = auVar31;
        fVar49 = *(float *)(param_5 + 0x88);
        if (*(float *)(p_Var30 + 0x40) <= *(float *)(param_5 + 0x88)) {
          fVar49 = *(float *)(p_Var30 + 0x40);
        }
        *(float *)(param_5 + 0x88) = fVar49;
        fVar49 = *(float *)(p_Var30 + 0x44);
        if (*(float *)(p_Var30 + 0x44) <= *(float *)(param_5 + 0x8c)) {
          fVar49 = *(float *)(param_5 + 0x8c);
        }
        *(long *)(param_5 + 0x68) = *(long *)(param_5 + 0x68) + 1;
        *(float *)(param_5 + 0x8c) = fVar49;
        *(ulong *)(param_5 + 0x70) = *(long *)(param_5 + 0x70) + (ulong)*(uint *)(p_Var30 + 0x2c);
        if (*(ulong *)(param_5 + 0x78) < (ulong)*(uint *)(p_Var30 + 0x3c)) {
          *(ulong *)(param_5 + 0x78) = (ulong)*(uint *)(p_Var30 + 0x3c);
          *(undefined4 *)(param_5 + 0x80) = *(undefined4 *)(p_Var30 + 0x40);
          *(undefined4 *)(param_5 + 0x84) = *(undefined4 *)(p_Var30 + 0x44);
        }
      }
    }
LAB_0010c97f:
    pPVar17 = (PrimInfoMBT_conflict *)(((long)p_Var30 - (long)param_1 >> 4) * -0x3333333333333333);
  }
  else {
    pPVar15 = (PrimInfoMBT_conflict *)embree::alignedMalloc(0x54c0,0x40);
    *(_lambda_embree__range<unsigned_long>_const___1_ **)pPVar15 = p_Var30;
    *(EmptyTy **)(pPVar15 + 0x28) = param_4;
    *(ulong *)(pPVar15 + 8) = uVar28;
    *(_lambda_embree__PrimRefMB_const___1_ **)(pPVar15 + 0x10) = param_7;
    *(_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimRefMB_const___2_ **)
     (pPVar15 + 0x18) = param_8;
    *(_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>_const___3_
      **)(pPVar15 + 0x20) = param_9;
    uVar16 = embree::TaskScheduler::threadCount();
    uVar28 = ((uVar28 - 1) + param_10) / param_10;
    if (0x40 < uVar28) {
      uVar28 = 0x40;
    }
    if (uVar28 <= uVar16) {
      uVar16 = uVar28;
    }
    *(ulong *)(pPVar15 + 0x30) = uVar16;
    local_98 = pPVar15;
    if (uVar16 == 0) {
      *(undefined8 *)(pPVar15 + 0x280) = 0;
      *(undefined8 *)(pPVar15 + 0x40) = *(undefined8 *)(pPVar15 + 8);
LAB_0010c3aa:
      pPVar17 = *(PrimInfoMBT_conflict **)(pPVar15 + 0x280);
    }
    else {
      param_1 = (PrimRefMB *)&local_a8;
      local_b0 = (PrimInfoMBT_conflict *)0x0;
      local_a8 = (PrimInfoMBT_conflict *)&local_98;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3___mbree::Vec3fa>>&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,uVar16,1,(_lambda_embree__range<unsigned_long>_const___1_ *)param_1,
                 (TaskGroupContext *)&local_b0);
      embree::TaskScheduler::wait();
      if (local_b0 != (PrimInfoMBT_conflict *)0x0) {
LAB_0010c7ff:
        local_a8 = local_b0;
        std::__exception_ptr::exception_ptr::_M_addref();
        param_3 = std::rethrow_exception();
        goto LAB_0010c820;
      }
      lVar25 = *(long *)(pPVar15 + 0x30);
      uVar3 = *(undefined8 *)(pPVar15 + 8);
      *(undefined8 *)(pPVar15 + lVar25 * 8 + 0x280) = 0;
      *(undefined8 *)(pPVar15 + lVar25 * 8 + 0x40) = uVar3;
      if (lVar25 == 0) goto LAB_0010c3aa;
      pPVar17 = pPVar15 + 0xcc0;
      uVar28 = 0;
      do {
        auVar31 = minps(*(undefined1 (*) [16])param_5,*(undefined1 (*) [16])pPVar17);
        *(undefined1 (*) [16])param_5 = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_5 + 0x10),
                        *(undefined1 (*) [16])(pPVar17 + 0x10));
        *(undefined1 (*) [16])(param_5 + 0x10) = auVar31;
        auVar31 = minps(*(undefined1 (*) [16])(param_5 + 0x20),
                        *(undefined1 (*) [16])(pPVar17 + 0x20));
        *(undefined1 (*) [16])(param_5 + 0x20) = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_5 + 0x30),
                        *(undefined1 (*) [16])(pPVar17 + 0x30));
        *(undefined1 (*) [16])(param_5 + 0x30) = auVar31;
        auVar31 = minps(*(undefined1 (*) [16])(param_5 + 0x40),
                        *(undefined1 (*) [16])(pPVar17 + 0x40));
        *(undefined1 (*) [16])(param_5 + 0x40) = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_5 + 0x50),
                        *(undefined1 (*) [16])(pPVar17 + 0x50));
        *(undefined1 (*) [16])(param_5 + 0x50) = auVar31;
        fVar1 = *(float *)(param_5 + 0x88);
        if (*(float *)(pPVar17 + 0x88) <= *(float *)(param_5 + 0x88)) {
          fVar1 = *(float *)(pPVar17 + 0x88);
        }
        *(float *)(param_5 + 0x88) = fVar1;
        fVar1 = *(float *)(pPVar17 + 0x8c);
        if (*(float *)(pPVar17 + 0x8c) <= *(float *)(param_5 + 0x8c)) {
          fVar1 = *(float *)(param_5 + 0x8c);
        }
        *(float *)(param_5 + 0x8c) = fVar1;
        *(long *)(param_5 + 0x60) = *(long *)(param_5 + 0x60) + *(long *)(pPVar17 + 0x60);
        *(long *)(param_5 + 0x68) = *(long *)(param_5 + 0x68) + *(long *)(pPVar17 + 0x68);
        *(long *)(param_5 + 0x70) = *(long *)(param_5 + 0x70) + *(long *)(pPVar17 + 0x70);
        if (*(ulong *)(param_5 + 0x78) < *(ulong *)(pPVar17 + 0x78)) {
          *(ulong *)(param_5 + 0x78) = *(ulong *)(pPVar17 + 0x78);
          *(undefined4 *)(param_5 + 0x80) = *(undefined4 *)(pPVar17 + 0x80);
          *(undefined4 *)(param_5 + 0x84) = *(undefined4 *)(pPVar17 + 0x84);
        }
        auVar31 = minps(*(undefined1 (*) [16])param_6,*(undefined1 (*) [16])(pPVar17 + 0x2400));
        *(undefined1 (*) [16])param_6 = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_6 + 0x10),
                        *(undefined1 (*) [16])(pPVar17 + 0x2410));
        *(undefined1 (*) [16])(param_6 + 0x10) = auVar31;
        auVar31 = minps(*(undefined1 (*) [16])(param_6 + 0x20),
                        *(undefined1 (*) [16])(pPVar17 + 0x2420));
        *(undefined1 (*) [16])(param_6 + 0x20) = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_6 + 0x30),
                        *(undefined1 (*) [16])(pPVar17 + 0x2430));
        *(undefined1 (*) [16])(param_6 + 0x30) = auVar31;
        auVar31 = minps(*(undefined1 (*) [16])(param_6 + 0x40),
                        *(undefined1 (*) [16])(pPVar17 + 0x2440));
        *(undefined1 (*) [16])(param_6 + 0x40) = auVar31;
        auVar31 = maxps(*(undefined1 (*) [16])(param_6 + 0x50),
                        *(undefined1 (*) [16])(pPVar17 + 0x2450));
        *(undefined1 (*) [16])(param_6 + 0x50) = auVar31;
        fVar1 = *(float *)(param_6 + 0x88);
        if (*(float *)(pPVar17 + 0x2488) <= *(float *)(param_6 + 0x88)) {
          fVar1 = *(float *)(pPVar17 + 0x2488);
        }
        *(float *)(param_6 + 0x88) = fVar1;
        fVar1 = *(float *)(pPVar17 + 0x248c);
        if (*(float *)(pPVar17 + 0x248c) <= *(float *)(param_6 + 0x8c)) {
          fVar1 = *(float *)(param_6 + 0x8c);
        }
        *(float *)(param_6 + 0x8c) = fVar1;
        *(long *)(param_6 + 0x60) = *(long *)(param_6 + 0x60) + *(long *)(pPVar17 + 0x2460);
        *(long *)(param_6 + 0x68) = *(long *)(param_6 + 0x68) + *(long *)(pPVar17 + 0x2468);
        *(long *)(param_6 + 0x70) = *(long *)(param_6 + 0x70) + *(long *)(pPVar17 + 0x2470);
        if (*(ulong *)(param_6 + 0x78) < *(ulong *)(pPVar17 + 0x2478)) {
          *(ulong *)(param_6 + 0x78) = *(ulong *)(pPVar17 + 0x2478);
          *(undefined4 *)(param_6 + 0x80) = *(undefined4 *)(pPVar17 + 0x2480);
          *(undefined4 *)(param_6 + 0x84) = *(undefined4 *)(pPVar17 + 0x2484);
        }
        uVar16 = *(ulong *)(pPVar15 + 0x30);
        uVar28 = uVar28 + 1;
        pPVar17 = pPVar17 + 0x90;
      } while (uVar28 < uVar16);
      pPVar17 = *(PrimInfoMBT_conflict **)(pPVar15 + 0x280);
      param_5 = pPVar17;
      if (uVar16 < 2) {
        pPVar18 = *(PrimInfoMBT_conflict **)(pPVar15 + 8);
        local_c8 = 0;
        local_c0 = (PrimInfoMBT_conflict *)0x0;
        local_b8 = (PrimInfoMBT_conflict *)0x0;
        if (uVar16 == 0) goto LAB_0010c3b8;
      }
      else {
        pPVar18 = pPVar15 + 0x288;
        do {
          param_5 = param_5 + *(long *)pPVar18;
          pPVar18 = pPVar18 + 8;
        } while (pPVar15 + uVar16 * 8 + 0x280 != pPVar18);
        pPVar18 = *(PrimInfoMBT_conflict **)(pPVar15 + 8);
      }
      local_b8 = (PrimInfoMBT_conflict *)0x0;
      local_c0 = (PrimInfoMBT_conflict *)0x0;
      local_c8 = 0;
      bVar13 = false;
      p_Var30 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
      param_7 = (_lambda_embree__PrimRefMB_const___1_ *)(pPVar15 + 0x40 + uVar16 * 8);
      pPVar29 = (PrimInfoMBT_conflict *)0x0;
      pPVar24 = pPVar15 + 0x40;
      lVar25 = 0;
      pPVar27 = (PrimInfoMBT_conflict *)0x0;
      while( true ) {
        local_98 = *(PrimInfoMBT_conflict **)pPVar24;
        pPStack_90 = pPVar17 + (long)local_98;
        pPStack_a0 = *(PrimInfoMBT_conflict **)(pPVar24 + 8);
        if ((long)param_5 <= (long)*(PrimInfoMBT_conflict **)(pPVar24 + 8)) {
          pPStack_a0 = param_5;
        }
        local_a8 = (PrimInfoMBT_conflict *)0x0;
        if (-1 < (long)pPStack_90) {
          local_a8 = pPStack_90;
        }
        if ((long)pPVar18 <= (long)pPStack_90) {
          pPStack_90 = pPVar18;
        }
        if ((long)local_98 < (long)param_5) {
          local_98 = param_5;
        }
        lVar26 = lVar25;
        if ((long)local_a8 < (long)pPStack_a0) {
          bVar13 = true;
          pPVar29 = pPStack_a0 + ((long)pPVar29 - (long)local_a8);
          lVar26 = lVar25 + 1;
          *(PrimInfoMBT_conflict **)(pPVar15 + lVar25 * 0x10 + 0x4c0) = local_a8;
          *(PrimInfoMBT_conflict **)(pPVar15 + lVar25 * 0x10 + 0x4c0 + 8) = pPStack_a0;
        }
        param_6 = pPVar27;
        if ((long)local_98 < (long)pPStack_90) {
          param_6 = pPVar27 + 1;
          p_Var30 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x1;
          *(PrimInfoMBT_conflict **)(pPVar15 + (long)pPVar27 * 0x10 + 0x8c0) = local_98;
          *(PrimInfoMBT_conflict **)(pPVar15 + (long)pPVar27 * 0x10 + 0x8c0 + 8) = pPStack_90;
        }
        if (param_7 == (_lambda_embree__PrimRefMB_const___1_ *)(pPVar24 + 8)) break;
        pPVar17 = *(PrimInfoMBT_conflict **)(pPVar24 + 0x248);
        pPVar24 = pPVar24 + 8;
        lVar25 = lVar26;
        pPVar27 = param_6;
      }
      if ((char)p_Var30 != '\0') {
        local_c0 = param_6;
      }
      pPVar17 = param_5;
      if ((bVar13) &&
         (local_c8 = lVar26, local_b8 = pPVar29, pPVar29 != (PrimInfoMBT_conflict *)0x0)) {
        local_98 = (PrimInfoMBT_conflict *)&local_b8;
        local_88 = &local_c8;
        local_80 = &local_c0;
        local_b0 = (PrimInfoMBT_conflict *)0x0;
        local_a8 = (PrimInfoMBT_conflict *)&local_98;
        pPStack_90 = pPVar15;
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>::partition(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3___mbree::Vec3fa>>&)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,uVar16,1,(_lambda_embree__range<unsigned_long>_const___1_ *)param_1,
                   (TaskGroupContext *)&local_b0);
        embree::TaskScheduler::wait();
        if (local_b0 != (PrimInfoMBT_conflict *)0x0) goto LAB_0010c7ff;
      }
    }
LAB_0010c3b8:
    if (pPVar15 != (PrimInfoMBT_conflict *)0x0) {
      embree::alignedFree(pPVar15);
    }
    pPVar17 = pPVar17 + param_2;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)pPVar17;
}



/* embree::LBBox<embree::Vec3fa> embree::parallel_reduce_internal<unsigned long,
   embree::LBBox<embree::Vec3fa>,
   embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>
   >(embree::sse2::RecalculatePrimRef<embree::TriangleMesh> const&)
   const::{lambda(embree::range<unsigned long> const&)#1},
   embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>
   >(embree::sse2::RecalculatePrimRef<embree::TriangleMesh> const&)
   const::{lambda(embree::LBBox<embree::Vec3fa> const&, embree::LBBox<embree::Vec3fa>
   const&)#2}>(unsigned long, unsigned long, unsigned long, unsigned long,
   embree::LBBox<embree::Vec3fa> const&,
   embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>
   >(embree::sse2::RecalculatePrimRef<embree::TriangleMesh> const&)
   const::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>
   >(embree::sse2::RecalculatePrimRef<embree::TriangleMesh> const&)
   const::{lambda(embree::LBBox<embree::Vec3fa> const&, embree::LBBox<embree::Vec3fa> const&)#2}
   const&) */

ulong embree::
      parallel_reduce_internal<unsigned_long,embree::LBBox<embree::Vec3fa>,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::range<unsigned_long>const&)_1_,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::LBBox<embree::Vec3fa>const&,embree::LBBox<embree::Vec3fa>const&)_2_>
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,LBBox_conflict *param_5,
                _lambda_embree__range<unsigned_long>_const___1_ *param_6,
                _lambda_embree__LBBox<embree::Vec3fa>_const__embree__LBBox<embree::Vec3fa>_const___2_
                *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong local_2118;
  ulong local_2110;
  ulong local_2108;
  undefined8 **local_2100;
  undefined8 **local_20f8;
  ulong *local_20f0;
  ulong *local_20e8;
  ulong *local_20e0;
  undefined1 (*local_20d8) [16];
  _lambda_embree__LBBox<embree::Vec3fa>_const__embree__LBBox<embree::Vec3fa>_const___2_ *local_20d0;
  undefined1 local_20c0 [8192];
  undefined1 (*local_c0) [16];
  ulong local_b8;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_2118 = param_4;
  local_2110 = param_3;
  local_2108 = param_2;
  uVar2 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2108) {
    local_2108 = 0x200;
  }
  if (uVar2 < local_2108) {
    local_2108 = uVar2;
  }
  local_b8 = local_2108;
  if (local_2108 << 6 < 0x2001) {
    local_c0 = (undefined1 (*) [16])local_20c0;
  }
  else {
    local_c0 = (undefined1 (*) [16])embree::alignedMalloc(local_2108 << 6,0x40);
  }
  local_20f0 = &local_2110;
  local_20e8 = &local_2118;
  local_20e0 = &local_2108;
  local_20d0 = param_7;
  local_20d8 = (undefined1 (*) [16])local_20c0;
  if (local_2108 == 0) {
    uVar1 = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_6;
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_6 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_6 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)(param_6 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_6 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)(param_6 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_6 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  else {
    local_20f8 = &local_20f0;
    local_2100 = (ulong **)0x0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImNS_5LBBoxINS_6Vec3faEEEZNKS_5SetMB12linearBoundsINS_4sse218RecalculatePrimRefINS_12TriangleMeshEEEEES6_RKT_EUlRKNS_5rangeImEEE_ZNKS8_ISC_EES6_SF_EUlRKS6_SM_E0_EET0_SD_SD_SD_SD_RKSO_RKT1_RKT2_EUlmE_EEvSD_SQ_EUlSJ_E_EEvSD_SD_SD_SQ_PNS0_16TaskGroupContextE
              (0,local_2108,1,&local_20f8,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != (ulong **)0x0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20f8);
      goto LAB_0010d632;
    }
    auVar8 = *(undefined1 (*) [16])param_6;
    *(undefined1 (*) [16])param_1 = auVar8;
    auVar7 = *(undefined1 (*) [16])(param_6 + 0x10);
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar7;
    auVar6 = *(undefined1 (*) [16])(param_6 + 0x20);
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar6;
    auVar5 = *(undefined1 (*) [16])(param_6 + 0x30);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar5;
    if (local_2108 != 0) {
      pauVar3 = local_c0;
      do {
        auVar5 = maxps(auVar5,pauVar3[3]);
        auVar6 = minps(auVar6,pauVar3[2]);
        pauVar4 = pauVar3 + 4;
        auVar7 = maxps(auVar7,pauVar3[1]);
        auVar8 = minps(auVar8,*pauVar3);
        *(undefined1 (*) [16])(param_1 + 0x20) = auVar6;
        *(undefined1 (*) [16])param_1 = auVar8;
        *(undefined1 (*) [16])(param_1 + 0x10) = auVar7;
        *(undefined1 (*) [16])(param_1 + 0x30) = auVar5;
        pauVar3 = pauVar4;
      } while (local_c0 + local_2108 * 4 != pauVar4);
    }
  }
  if (local_c0 != (undefined1 (*) [16])local_20c0) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_0010d632:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa> >
   embree::parallel_reduce_internal<unsigned long, embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> >, embree::bin_parallel<embree::sse2::BinInfoT<32ul,
   embree::PrimRefMB, embree::LBBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRefMB>(embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa>
   >&, embree::PrimRefMB const*, unsigned long, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long> const&)#1},
   embree::bin_parallel<embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRefMB>(embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa>
   >&, embree::PrimRefMB const*, unsigned long, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> > const&, embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> > const&)#2}>(unsigned long, unsigned long, unsigned long, unsigned
   long, embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa> > const&,
   embree::bin_parallel<embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRefMB>(embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa>
   >&, embree::PrimRefMB const*, unsigned long, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::bin_parallel<embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRefMB>(embree::sse2::BinInfoT<32ul, embree::PrimRefMB, embree::LBBox<embree::Vec3fa>
   >&, embree::PrimRefMB const*, unsigned long, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> > const&, embree::sse2::BinInfoT<32ul, embree::PrimRefMB,
   embree::LBBox<embree::Vec3fa> > const&)#2} const&) */

embree * __thiscall
embree::
parallel_reduce_internal<unsigned_long,embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::bin_parallel<embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRefMB>(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::bin_parallel<embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRefMB>(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>const&,embree::sse2::BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>>const&)_2_>
          (embree *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,
          BinInfoT_conflict *param_5,_lambda_embree__range<unsigned_long>_const___1_ *param_6,
          _lambda_embree__sse2__BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>_>_const__embree__sse2__BinInfoT<32ul,embree::PrimRefMB,embree::LBBox<embree::Vec3fa>_>_const___2_
          *param_7)

{
  BinInfoT_conflict *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  embree *peVar16;
  undefined8 *puVar17;
  undefined1 (*pauVar18) [16];
  long lVar19;
  undefined1 (*pauVar20) [16];
  embree *peVar21;
  ulong uVar22;
  BinInfoT_conflict *pBVar23;
  undefined1 (*pauVar24) [16];
  embree *peVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  undefined8 *puVar29;
  undefined1 (*pauVar30) [16];
  undefined1 (*pauVar31) [16];
  undefined8 *puVar32;
  undefined1 (*pauVar33) [16];
  long in_FS_OFFSET;
  byte bVar34;
  undefined1 auVar35 [16];
  undefined1 (*local_3540) [16];
  ulong local_3518;
  ulong local_3510;
  ulong local_3508;
  ulong **local_3500;
  ulong **local_34f8;
  ulong *local_34f0;
  ulong *local_34e8;
  ulong *local_34e0;
  undefined1 (*local_34d8) [16];
  _lambda_embree__range<unsigned_long>_const___1_ *local_34d0;
  undefined1 local_34c0 [192];
  undefined1 local_3400 [5952];
  undefined8 local_1cc0;
  int aiStack_1cb8 [46];
  undefined1 local_1c00 [312];
  undefined8 local_1ac8;
  undefined1 local_1ac0 [6656];
  undefined1 (*local_c0) [16];
  ulong local_b8;
  long local_48;
  
  bVar34 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_3518 = param_3;
  local_3510 = param_2;
  local_3508 = param_1;
  uVar15 = embree::TaskScheduler::threadCount();
  if (0x200 < local_3508) {
    local_3508 = 0x200;
  }
  if (uVar15 < local_3508) {
    local_3508 = uVar15;
  }
  local_b8 = local_3508;
  if (local_3508 * 0x1a00 < 0x2001) {
    local_c0 = (undefined1 (*) [16])local_1ac0;
  }
  else {
    local_c0 = (undefined1 (*) [16])embree::alignedMalloc(local_3508 * 0x1a00,0x40);
  }
  local_3540 = (undefined1 (*) [16])local_1ac0;
  local_34f0 = &local_3510;
  local_34d0 = param_6;
  local_34e8 = &local_3518;
  local_34e0 = &local_3508;
  local_34d8 = local_3540;
  if (local_3508 != 0) {
    local_34f8 = &local_34f0;
    local_3500 = (ulong **)0x0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImNS_4sse28BinInfoTILm32ENS_9PrimRefMBENS_5LBBoxINS_6Vec3faEEEEEZNS_12bin_parallelISA_NS4_10BinMappingILm32EEES6_EEvRT_PKT1_mmmmRKT0_EUlRKNS_5rangeImEEE_ZNSB_ISA_SD_S6_EEvSF_SI_mmmmSL_EUlRKSA_SS_E0_EESJ_SE_SE_SE_SE_SL_RSH_RKT2_EUlmE_EEvSE_SL_EUlSP_E_EEvSE_SE_SE_SL_PNS0_16TaskGroupContextE
              (0,local_3508,1,&local_34f8,&local_3500);
    embree::TaskScheduler::wait();
    if (local_3500 != (ulong **)0x0) {
      local_34f8 = local_3500;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_34f8);
      goto LAB_0010e321;
    }
  }
  uVar15 = local_3508;
  peVar21 = this + 0xc0;
  pBVar1 = param_5 + 0x1800;
  do {
    peVar25 = peVar21 + -0xc0;
    pBVar23 = param_5;
    do {
      peVar16 = peVar25;
      uVar8 = *(undefined8 *)(pBVar23 + 8);
      *(undefined8 *)peVar16 = *(undefined8 *)pBVar23;
      *(undefined8 *)(peVar16 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pBVar23 + 0x18);
      *(undefined8 *)(peVar16 + 0x10) = *(undefined8 *)(pBVar23 + 0x10);
      *(undefined8 *)(peVar16 + 0x18) = uVar8;
      uVar8 = *(undefined8 *)(pBVar23 + 0x28);
      *(undefined8 *)(peVar16 + 0x20) = *(undefined8 *)(pBVar23 + 0x20);
      *(undefined8 *)(peVar16 + 0x28) = uVar8;
      uVar8 = *(undefined8 *)(pBVar23 + 0x38);
      *(undefined8 *)(peVar16 + 0x30) = *(undefined8 *)(pBVar23 + 0x30);
      *(undefined8 *)(peVar16 + 0x38) = uVar8;
      peVar25 = peVar16 + 0x40;
      pBVar23 = pBVar23 + 0x40;
    } while (peVar16 + 0x40 != peVar21);
    param_5 = param_5 + 0xc0;
    peVar21 = peVar16 + 0x100;
  } while (param_5 != pBVar1);
  puVar17 = (undefined8 *)memmove(this + 0x1800,param_5,0x200);
  if (uVar15 != 0) {
    pauVar30 = (undefined1 (*) [16])local_3400;
    peVar21 = this;
    pauVar33 = local_c0;
    do {
      do {
        pauVar28 = pauVar30 + -0xc;
        peVar25 = peVar21;
        do {
          pauVar24 = pauVar28;
          uVar8 = *(undefined8 *)(peVar25 + 8);
          uVar9 = *(undefined8 *)(peVar25 + 0x10);
          uVar10 = *(undefined8 *)(peVar25 + 0x18);
          uVar11 = *(undefined8 *)(peVar25 + 0x20);
          uVar12 = *(undefined8 *)(peVar25 + 0x28);
          uVar13 = *(undefined8 *)(peVar25 + 0x30);
          uVar14 = *(undefined8 *)(peVar25 + 0x38);
          *(undefined8 *)*pauVar24 = *(undefined8 *)peVar25;
          *(undefined8 *)(*pauVar24 + 8) = uVar8;
          *(undefined8 *)pauVar24[1] = uVar9;
          *(undefined8 *)(pauVar24[1] + 8) = uVar10;
          *(undefined8 *)pauVar24[2] = uVar11;
          *(undefined8 *)(pauVar24[2] + 8) = uVar12;
          *(undefined8 *)pauVar24[3] = uVar13;
          *(undefined8 *)(pauVar24[3] + 8) = uVar14;
          pauVar28 = pauVar24 + 4;
          peVar25 = peVar25 + 0x40;
        } while (pauVar24 + 4 != pauVar30);
        pauVar30 = pauVar24 + 0x10;
        peVar21 = peVar21 + 0xc0;
      } while (pauVar24 + 0x10 != (undefined1 (*) [16])local_1c00);
      puVar29 = puVar17;
      pauVar30 = (undefined1 (*) [16])&local_1cc0;
      for (lVar19 = 0x40; lVar19 != 0; lVar19 = lVar19 + -1) {
        *(undefined8 *)*pauVar30 = *puVar29;
        puVar29 = puVar29 + (ulong)bVar34 * -2 + 1;
        pauVar30 = (undefined1 (*) [16])(pauVar30[-(ulong)bVar34] + 8);
      }
      lVar19 = **(long **)param_7;
      pauVar30 = (undefined1 (*) [16])local_34c0;
      peVar21 = this;
      peVar25 = this;
      pauVar28 = (undefined1 (*) [16])local_34c0;
      pauVar24 = (undefined1 (*) [16])local_3400;
      if (lVar19 != 0) {
        pauVar18 = (undefined1 (*) [16])local_34c0;
        pauVar20 = pauVar33;
        pauVar26 = pauVar33;
        pauVar31 = (undefined1 (*) [16])&local_1cc0;
        do {
          iVar2 = *(int *)(*pauVar31 + 4);
          iVar3 = *(int *)(*pauVar31 + 8);
          iVar4 = *(int *)(*pauVar31 + 0xc);
          pauVar27 = pauVar26 + 1;
          iVar5 = *(int *)(pauVar26[0x180] + 4);
          iVar6 = *(int *)(pauVar26[0x180] + 8);
          iVar7 = *(int *)(pauVar26[0x180] + 0xc);
          *(int *)*pauVar31 = *(int *)*pauVar31 + *(int *)pauVar26[0x180];
          *(int *)(*pauVar31 + 4) = iVar2 + iVar5;
          *(int *)(*pauVar31 + 8) = iVar3 + iVar6;
          *(int *)(*pauVar31 + 0xc) = iVar4 + iVar7;
          auVar35 = minps(*pauVar18,*pauVar20);
          *pauVar18 = auVar35;
          auVar35 = maxps(pauVar18[1],pauVar20[1]);
          pauVar18[1] = auVar35;
          auVar35 = minps(pauVar18[2],pauVar20[2]);
          pauVar18[2] = auVar35;
          auVar35 = maxps(pauVar18[3],pauVar20[3]);
          pauVar18[3] = auVar35;
          auVar35 = minps(pauVar18[4],pauVar20[4]);
          pauVar18[4] = auVar35;
          auVar35 = maxps(pauVar18[5],pauVar20[5]);
          pauVar18[5] = auVar35;
          auVar35 = minps(pauVar18[6],pauVar20[6]);
          pauVar18[6] = auVar35;
          auVar35 = maxps(pauVar18[7],pauVar20[7]);
          pauVar18[7] = auVar35;
          auVar35 = minps(pauVar18[8],pauVar20[8]);
          pauVar18[8] = auVar35;
          auVar35 = maxps(pauVar18[9],pauVar20[9]);
          pauVar18[9] = auVar35;
          auVar35 = minps(pauVar18[10],pauVar20[10]);
          pauVar18[10] = auVar35;
          auVar35 = maxps(pauVar18[0xb],pauVar20[0xb]);
          pauVar18[0xb] = auVar35;
          pauVar18 = pauVar18 + 0xc;
          pauVar20 = pauVar20 + 0xc;
          pauVar26 = pauVar27;
          pauVar31 = pauVar31 + 1;
        } while (pauVar27 != pauVar33 + lVar19);
      }
      do {
        do {
          pauVar18 = pauVar30;
          uVar8 = *(undefined8 *)(*pauVar18 + 8);
          uVar9 = *(undefined8 *)pauVar18[1];
          uVar10 = *(undefined8 *)(pauVar18[1] + 8);
          uVar11 = *(undefined8 *)pauVar18[2];
          uVar12 = *(undefined8 *)(pauVar18[2] + 8);
          uVar13 = *(undefined8 *)pauVar18[3];
          uVar14 = *(undefined8 *)(pauVar18[3] + 8);
          *(undefined8 *)peVar21 = *(undefined8 *)*pauVar18;
          *(undefined8 *)(peVar21 + 8) = uVar8;
          *(undefined8 *)(peVar21 + 0x10) = uVar9;
          *(undefined8 *)(peVar21 + 0x18) = uVar10;
          *(undefined8 *)(peVar21 + 0x20) = uVar11;
          *(undefined8 *)(peVar21 + 0x28) = uVar12;
          *(undefined8 *)(peVar21 + 0x30) = uVar13;
          *(undefined8 *)(peVar21 + 0x38) = uVar14;
          pauVar30 = pauVar18 + 4;
          peVar21 = peVar21 + 0x40;
        } while (pauVar18 + 4 != pauVar24);
        pauVar30 = pauVar28 + 0xc;
        peVar21 = peVar25 + 0xc0;
        peVar25 = peVar25 + 0xc0;
        pauVar28 = pauVar30;
        pauVar24 = pauVar18 + 0x10;
      } while (pauVar30 != (undefined1 (*) [16])&local_1cc0);
      pauVar33 = pauVar33 + 0x1a0;
      *puVar17 = local_1cc0;
      *(undefined8 *)(this + 0x19f8) = local_1ac8;
      lVar19 = (long)puVar17 - (long)((ulong)(this + 0x1808) & 0xfffffffffffffff8);
      puVar29 = (undefined8 *)((long)&local_1cc0 - lVar19);
      puVar32 = (undefined8 *)((ulong)(this + 0x1808) & 0xfffffffffffffff8);
      for (uVar22 = (ulong)((int)lVar19 + 0x200U >> 3); uVar22 != 0; uVar22 = uVar22 - 1) {
        *puVar32 = *puVar29;
        puVar29 = puVar29 + (ulong)bVar34 * -2 + 1;
        puVar32 = puVar32 + (ulong)bVar34 * -2 + 1;
      }
      pauVar30 = (undefined1 (*) [16])local_3400;
      peVar21 = this;
    } while (pauVar33 != local_c0 + uVar15 * 0x1a0);
  }
  if (local_c0 != local_3540) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_0010e321:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo
   embree::parallel_reduce_internal<unsigned long,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,
   2ul>::TemporalBinInfo::bin_parallel(embree::PrimRefMB const*, unsigned long, unsigned long,
   unsigned long, unsigned long, embree::BBox<float>, embree::SetMB const&,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh> const&)::{lambda(embree::range<unsigned
   long> const&)#1}, embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo const
   (embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo const&,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo const&)>(unsigned
   long, unsigned long, unsigned long, unsigned long,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo const&,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,
   2ul>::TemporalBinInfo::bin_parallel(embree::PrimRefMB const*, unsigned long, unsigned long,
   unsigned long, unsigned long, embree::BBox<float>, embree::SetMB const&,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh> const&)::{lambda(embree::range<unsigned
   long> const&)#1} const&, embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo const (
   const&)(embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo const&,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::TemporalBinInfo const&)) [clone
   .isra.0] */

ulong embree::
      parallel_reduce_internal<unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo::bin_parallel(embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::BBox<float>,embree::SetMB_const&,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo_const(embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo_const&,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo_const&)>
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,TemporalBinInfo *param_5,
                _lambda_embree__range<unsigned_long>_const___1_ *param_6,
                _func_TemporalBinInfo_TemporalBinInfo_ptr_TemporalBinInfo_ptr *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_2128;
  ulong local_2120;
  ulong local_2118;
  long local_2110;
  long local_2108;
  ulong *local_2100;
  ulong *local_20f8;
  ulong *local_20f0;
  undefined1 *local_20e8;
  _lambda_embree__range<unsigned_long>_const___1_ *local_20e0;
  undefined8 local_20d0;
  undefined8 local_20c8;
  undefined4 local_20c0;
  undefined4 uStack_20bc;
  undefined4 uStack_20b8;
  undefined4 uStack_20b4;
  undefined4 local_20b0;
  undefined4 uStack_20ac;
  undefined4 uStack_20a8;
  undefined4 uStack_20a4;
  undefined4 local_20a0;
  undefined4 uStack_209c;
  undefined4 uStack_2098;
  undefined4 uStack_2094;
  undefined4 local_2090;
  undefined4 uStack_208c;
  undefined4 uStack_2088;
  undefined4 uStack_2084;
  undefined4 local_2080;
  undefined4 uStack_207c;
  undefined4 uStack_2078;
  undefined4 uStack_2074;
  undefined4 local_2070;
  undefined4 uStack_206c;
  undefined4 uStack_2068;
  undefined4 uStack_2064;
  undefined4 local_2060;
  undefined4 uStack_205c;
  undefined4 uStack_2058;
  undefined4 uStack_2054;
  undefined4 local_2050;
  undefined4 uStack_204c;
  undefined4 uStack_2048;
  undefined4 uStack_2044;
  undefined1 local_2040 [8064];
  undefined1 *local_c0;
  ulong local_b8;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_2128 = param_4;
  local_2120 = param_3;
  local_2118 = param_2;
  uVar4 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2118) {
    local_2118 = 0x200;
  }
  if (uVar4 < local_2118) {
    local_2118 = uVar4;
  }
  local_b8 = local_2118;
  if (local_2118 * 0x90 < 0x2001) {
    local_c0 = local_2040;
  }
  else {
    local_c0 = (undefined1 *)embree::alignedMalloc(local_2118 * 0x90,0x40);
  }
  local_2100 = &local_2120;
  local_20f8 = &local_2128;
  local_20f0 = &local_2118;
  local_20e8 = local_2040;
  local_20e0 = param_6;
  if (local_2118 != 0) {
    local_2110 = 0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImNS_4sse227HeuristicMBlurTemporalSplitINS_9PrimRefMBENS4_18RecalculatePrimRefINS_12TriangleMeshEEELm2EE15TemporalBinInfoEZNSB_12bin_parallelEPKS6_mmmmNS_4BBoxIfEERKNS_5SetMBERKS9_EUlRKNS_5rangeImEEE_FKSB_RSQ_SR_EEET0_T_SU_SU_SU_RKST_RKT1_RKT2_EUlmE_EEvSU_SW_EUlSO_E_EEvSU_SU_SU_SW_PNS0_16TaskGroupContextE_isra_0
              (0,local_2118,1,&local_2100,&local_2110);
    embree::TaskScheduler::wait();
    if (local_2110 != 0) {
      local_2108 = local_2110;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_2108);
      goto LAB_0010ed7a;
    }
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_5;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_5 + 8);
  uVar1 = *(undefined4 *)(param_5 + 0x14);
  uVar2 = *(undefined4 *)(param_5 + 0x18);
  uVar3 = *(undefined4 *)(param_5 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)(param_5 + 0x24);
  uVar2 = *(undefined4 *)(param_5 + 0x28);
  uVar3 = *(undefined4 *)(param_5 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_5 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)(param_5 + 0x34);
  uVar2 = *(undefined4 *)(param_5 + 0x38);
  uVar3 = *(undefined4 *)(param_5 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_5 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)(param_5 + 0x44);
  uVar2 = *(undefined4 *)(param_5 + 0x48);
  uVar3 = *(undefined4 *)(param_5 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_5 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar1 = *(undefined4 *)(param_5 + 0x54);
  uVar2 = *(undefined4 *)(param_5 + 0x58);
  uVar3 = *(undefined4 *)(param_5 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_5 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar1 = *(undefined4 *)(param_5 + 100);
  uVar2 = *(undefined4 *)(param_5 + 0x68);
  uVar3 = *(undefined4 *)(param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_5 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar1 = *(undefined4 *)(param_5 + 0x74);
  uVar2 = *(undefined4 *)(param_5 + 0x78);
  uVar3 = *(undefined4 *)(param_5 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_5 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  uVar1 = *(undefined4 *)(param_5 + 0x84);
  uVar2 = *(undefined4 *)(param_5 + 0x88);
  uVar3 = *(undefined4 *)(param_5 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_5 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar4 = 0;
  if (local_2118 != 0) {
    do {
      uVar5 = uVar4 + 1;
      (*param_7)((TemporalBinInfo *)&local_20d0,(TemporalBinInfo *)param_1,
                 (TemporalBinInfo *)(local_c0 + uVar4 * 0x90));
      *(undefined8 *)param_1 = local_20d0;
      *(undefined4 *)(param_1 + 0x10) = local_20c0;
      *(undefined4 *)(param_1 + 0x14) = uStack_20bc;
      *(undefined4 *)(param_1 + 0x18) = uStack_20b8;
      *(undefined4 *)(param_1 + 0x1c) = uStack_20b4;
      *(undefined4 *)(param_1 + 0x20) = local_20b0;
      *(undefined4 *)(param_1 + 0x24) = uStack_20ac;
      *(undefined4 *)(param_1 + 0x28) = uStack_20a8;
      *(undefined4 *)(param_1 + 0x2c) = uStack_20a4;
      *(undefined8 *)(param_1 + 8) = local_20c8;
      *(undefined4 *)(param_1 + 0x30) = local_20a0;
      *(undefined4 *)(param_1 + 0x34) = uStack_209c;
      *(undefined4 *)(param_1 + 0x38) = uStack_2098;
      *(undefined4 *)(param_1 + 0x3c) = uStack_2094;
      *(undefined4 *)(param_1 + 0x40) = local_2090;
      *(undefined4 *)(param_1 + 0x44) = uStack_208c;
      *(undefined4 *)(param_1 + 0x48) = uStack_2088;
      *(undefined4 *)(param_1 + 0x4c) = uStack_2084;
      *(undefined4 *)(param_1 + 0x50) = local_2080;
      *(undefined4 *)(param_1 + 0x54) = uStack_207c;
      *(undefined4 *)(param_1 + 0x58) = uStack_2078;
      *(undefined4 *)(param_1 + 0x5c) = uStack_2074;
      *(undefined4 *)(param_1 + 0x60) = local_2070;
      *(undefined4 *)(param_1 + 100) = uStack_206c;
      *(undefined4 *)(param_1 + 0x68) = uStack_2068;
      *(undefined4 *)(param_1 + 0x6c) = uStack_2064;
      *(undefined4 *)(param_1 + 0x70) = local_2060;
      *(undefined4 *)(param_1 + 0x74) = uStack_205c;
      *(undefined4 *)(param_1 + 0x78) = uStack_2058;
      *(undefined4 *)(param_1 + 0x7c) = uStack_2054;
      *(undefined4 *)(param_1 + 0x80) = local_2050;
      *(undefined4 *)(param_1 + 0x84) = uStack_204c;
      *(undefined4 *)(param_1 + 0x88) = uStack_2048;
      *(undefined4 *)(param_1 + 0x8c) = uStack_2044;
      uVar4 = uVar5;
    } while (uVar5 < local_2118);
  }
  if (local_c0 != local_2040) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_0010ed7a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::find(embree::SetMB const&, unsigned
   long) */

SetMB * embree::sse2::
        HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
        ::find(SetMB *param_1,ulong param_2)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  byte in_CL;
  long in_RDX;
  ulong uVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_2b8;
  float fStack_2b0;
  undefined8 local_2a8;
  float fStack_2a0;
  undefined8 local_298;
  float fStack_290;
  undefined8 local_288;
  float fStack_280;
  undefined8 local_278;
  float fStack_270;
  undefined8 local_268;
  float fStack_260;
  undefined8 local_258;
  float fStack_250;
  undefined8 local_248;
  float fStack_240;
  float local_230;
  float local_22c;
  undefined8 local_228;
  TemporalBinInfo *local_220;
  undefined8 *local_218;
  TemporalBinInfo **local_210;
  long local_200;
  long local_1f8;
  long local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  float fStack_c0;
  undefined8 local_b8;
  float fStack_b0;
  undefined8 local_a8;
  float fStack_a0;
  undefined8 local_98;
  float fStack_90;
  undefined8 local_88;
  float fStack_80;
  undefined8 local_78;
  float fStack_70;
  undefined8 local_68;
  float fStack_60;
  undefined8 local_58;
  float fStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1f0 = 0;
  local_1f8 = 0;
  local_228 = *(undefined8 *)(*(long *)(in_RDX + 0x90) + 0x20);
  local_1a8 = _LC10;
  fStack_1a4 = _LC10;
  fStack_1a0 = _LC10;
  fStack_19c = _LC10;
  local_198 = _LC8;
  fStack_194 = _LC8;
  fStack_190 = _LC8;
  fStack_18c = _LC8;
  uVar5 = *(ulong *)(in_RDX + 0x68) - *(ulong *)(in_RDX + 0x60);
  local_188 = _LC10;
  fStack_184 = _LC10;
  fStack_180 = _LC10;
  fStack_17c = _LC10;
  local_178 = _LC8;
  fStack_174 = _LC8;
  fStack_170 = _LC8;
  fStack_16c = _LC8;
  local_1e8 = _LC10;
  fStack_1e4 = _LC10;
  fStack_1e0 = _LC10;
  fStack_1dc = _LC10;
  local_1d8 = _LC8;
  fStack_1d4 = _LC8;
  fStack_1d0 = _LC8;
  fStack_1cc = _LC8;
  local_1c8 = _LC10;
  fStack_1c4 = _LC10;
  fStack_1c0 = _LC10;
  fStack_1bc = _LC10;
  local_1b8 = _LC8;
  fStack_1b4 = _LC8;
  fStack_1b0 = _LC8;
  fStack_1ac = _LC8;
  local_220 = *(TemporalBinInfo **)(in_RDX + 0x88);
  if (uVar5 < 0xc00) {
    TemporalBinInfo::bin(local_220,&local_1f8);
    local_2b8 = CONCAT44(fStack_1e4,local_1e8);
    fStack_2b0 = fStack_1e0;
    local_2a8 = CONCAT44(fStack_1d4,local_1d8);
    fStack_2a0 = fStack_1d0;
    local_268 = CONCAT44(fStack_1c4,local_1c8);
    fStack_260 = fStack_1c0;
    local_248 = CONCAT44(fStack_1b4,local_1b8);
    fStack_240 = fStack_1b0;
    local_258 = CONCAT44(fStack_1a4,local_1a8);
    fStack_250 = fStack_1a0;
    local_298 = CONCAT44(fStack_194,local_198);
    fStack_290 = fStack_190;
    local_288 = CONCAT44(fStack_184,local_188);
    fStack_280 = fStack_180;
    local_278 = CONCAT44(fStack_174,local_178);
    fStack_270 = fStack_170;
    local_d8 = local_1f8;
    local_d0 = local_1f0;
  }
  else {
    local_218 = &local_228;
    local_210 = &local_220;
    local_160 = 0;
    local_168 = 0;
    local_118 = _LC10;
    fStack_114 = _LC10;
    fStack_110 = _LC10;
    fStack_10c = _LC10;
    local_108 = _LC8;
    fStack_104 = _LC8;
    fStack_100 = _LC8;
    fStack_fc = _LC8;
    local_f8 = _LC10;
    fStack_f4 = _LC10;
    fStack_f0 = _LC10;
    fStack_ec = _LC10;
    local_e8 = _LC8;
    fStack_e4 = _LC8;
    fStack_e0 = _LC8;
    fStack_dc = _LC8;
    local_158 = _LC10;
    fStack_154 = _LC10;
    fStack_150 = _LC10;
    fStack_14c = _LC10;
    local_148 = _LC8;
    fStack_144 = _LC8;
    fStack_140 = _LC8;
    fStack_13c = _LC8;
    local_138 = _LC10;
    fStack_134 = _LC10;
    fStack_130 = _LC10;
    fStack_12c = _LC10;
    local_128 = _LC8;
    fStack_124 = _LC8;
    fStack_120 = _LC8;
    fStack_11c = _LC8;
    local_200 = param_2 + 8;
    parallel_reduce_internal<unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo::bin_parallel(embree::PrimRefMB_const*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,embree::BBox<float>,embree::SetMB_const&,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo_const(embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo_const&,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::TemporalBinInfo_const&)>
              ((ulong)&local_d8,uVar5 + 0x3ff >> 10,*(ulong *)(in_RDX + 0x60),
               *(ulong *)(in_RDX + 0x68),(TemporalBinInfo *)&local_168,
               (_lambda_embree__range<unsigned_long>_const___1_ *)&local_218,TemporalBinInfo::merge2
              );
    local_2b8 = local_c8;
    fStack_2b0 = fStack_c0;
    local_288 = local_68;
    fStack_280 = fStack_60;
    local_2a8 = local_b8;
    fStack_2a0 = fStack_b0;
    local_268 = local_a8;
    fStack_260 = fStack_a0;
    local_248 = local_98;
    fStack_240 = fStack_90;
    local_258 = local_88;
    fStack_250 = fStack_80;
    local_298 = local_78;
    fStack_290 = fStack_70;
    local_278 = local_58;
    fStack_270 = fStack_50;
  }
  fVar1 = *(float *)(in_RDX + 0x8c);
  local_22c = 0.0;
  fVar2 = *(float *)(in_RDX + 0x88);
  lVar6 = (1L << (in_CL & 0x3f)) + -1;
  local_230 = _LC10;
  uVar5 = (ulong)(local_d8 + lVar6) >> (in_CL & 0x3f);
  uVar7 = (ulong)(local_d0 + lVar6) >> (in_CL & 0x3f);
  bVar4 = false;
  fVar8 = local_230;
  fVar9 = local_22c;
  while (local_22c = fVar9, local_230 = fVar8, !bVar4) {
    fVar9 = *(float *)(in_RDX + 0x80);
    uVar3 = *(ulong *)(in_RDX + 0x78);
    fVar10 = *(float *)(in_RDX + 0x84) - fVar9;
    fVar8 = roundf((((fVar1 * _LC12 + fVar2 * _LC12) - fVar9) / fVar10) * (float)uVar3);
    fVar9 = (fVar8 / (float)uVar3) * fVar10 + fVar9;
    if ((fVar9 <= fVar2) || (fVar1 <= fVar9)) break;
    fVar10 = (((local_2a8._4_4_ - local_2b8._4_4_) + (fStack_2a0 - fStack_2b0)) *
              ((float)local_2a8 - (float)local_2b8) +
              (local_2a8._4_4_ - local_2b8._4_4_) * (fStack_2a0 - fStack_2b0) +
             (local_248._4_4_ - local_268._4_4_) * (fStack_240 - fStack_260) +
             ((float)local_248 - (float)local_268) *
             ((local_248._4_4_ - local_268._4_4_) + (fStack_240 - fStack_260))) * _LC12 *
             (float)uVar5 * (fVar9 - fVar2);
    fVar11 = (((local_298._4_4_ - local_258._4_4_) + (fStack_290 - fStack_250)) *
              ((float)local_298 - (float)local_258) +
              (local_298._4_4_ - local_258._4_4_) * (fStack_290 - fStack_250) +
             (local_278._4_4_ - local_288._4_4_) * (fStack_270 - fStack_280) +
             ((float)local_278 - (float)local_288) *
             ((local_278._4_4_ - local_288._4_4_) + (fStack_270 - fStack_280))) * _LC12 *
             (float)uVar7 * (fVar1 - fVar9);
    if (uVar5 == 0) {
      fVar10 = 0.0;
    }
    if (uVar7 == 0) {
      fVar11 = 0.0;
    }
    bVar4 = true;
    fVar8 = fVar10 + fVar11;
    if (local_230 <= fVar10 + fVar11) break;
  }
  local_230 = local_230 * __LC32;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(float *)(param_1 + 8) = local_22c;
  *(float *)param_1 = local_230;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::find(embree::SetMB const&) */

SetMB * embree::sse2::BVHBuilderMSMBlur::
        BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
        ::find(SetMB *param_1)

{
  byte bVar1;
  SetMB *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::find
            ((HeuristicArrayBinningMB<embree::PrimRefMB,32ul> *)&local_a8,in_RDX,
             *(ulong *)(in_RSI + 0x10));
  bVar1 = (byte)*(undefined8 *)(in_RSI + 0x10);
  if ((((*(float *)(in_RDX + 0x14) - *(float *)(in_RDX + 4)) +
       (*(float *)(in_RDX + 0x18) - *(float *)(in_RDX + 8))) *
       (*(float *)(in_RDX + 0x10) - *(float *)in_RDX) +
       (*(float *)(in_RDX + 0x14) - *(float *)(in_RDX + 4)) *
       (*(float *)(in_RDX + 0x18) - *(float *)(in_RDX + 8)) +
      (*(float *)(in_RDX + 0x34) - *(float *)(in_RDX + 0x24)) *
      (*(float *)(in_RDX + 0x38) - *(float *)(in_RDX + 0x28)) +
      (*(float *)(in_RDX + 0x30) - *(float *)(in_RDX + 0x20)) *
      ((*(float *)(in_RDX + 0x34) - *(float *)(in_RDX + 0x24)) +
      (*(float *)(in_RDX + 0x38) - *(float *)(in_RDX + 0x28)))) * _LC12 *
      (*(float *)(in_RDX + 0x8c) - *(float *)(in_RDX + 0x88)) *
      (float)((ulong)(*(long *)(in_RDX + 0x70) + -1 + (1L << (bVar1 & 0x3f))) >> (bVar1 & 0x3f)) *
      _LC12 <= local_a8) {
    if ((*(float *)(in_RDX + 0x8c) - *(float *)(in_RDX + 0x88) <=
         _LC33 / (float)*(ulong *)(in_RDX + 0x78)) ||
       (HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
        ::find((SetMB *)&local_68,in_RSI + 0x48), local_a8 <= local_68)) {
      *(float *)param_1 = local_a8;
      *(undefined4 *)(param_1 + 4) = uStack_a4;
      *(undefined4 *)(param_1 + 0x20) = local_88;
      *(undefined4 *)(param_1 + 0x24) = uStack_84;
      *(undefined4 *)(param_1 + 0x28) = uStack_80;
      *(undefined4 *)(param_1 + 0x2c) = uStack_7c;
      *(undefined4 *)(param_1 + 8) = local_a0;
      *(undefined4 *)(param_1 + 0xc) = local_9c;
      *(undefined8 *)(param_1 + 0x10) = local_98;
      *(undefined4 *)(param_1 + 0x30) = local_78;
      *(undefined4 *)(param_1 + 0x34) = uStack_74;
      *(undefined4 *)(param_1 + 0x38) = uStack_70;
      *(undefined4 *)(param_1 + 0x3c) = uStack_6c;
    }
    else {
      *(ulong *)param_1 = CONCAT44(uStack_64,local_68);
      *(undefined8 *)(param_1 + 0x20) = local_48;
      *(undefined8 *)(param_1 + 0x28) = uStack_40;
      *(undefined4 *)(param_1 + 8) = local_60;
      *(undefined4 *)(param_1 + 0x30) = local_38;
      *(undefined4 *)(param_1 + 0x34) = uStack_34;
      *(undefined4 *)(param_1 + 0x38) = uStack_30;
      *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
      *(undefined4 *)(param_1 + 0xc) = local_5c;
      *(undefined8 *)(param_1 + 0x10) = local_58;
    }
  }
  else {
    *(ulong *)param_1 = CONCAT44(uStack_a4,local_a8);
    *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_84,local_88);
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_7c,uStack_80);
    *(undefined4 *)(param_1 + 8) = local_a0;
    *(undefined4 *)(param_1 + 0xc) = local_9c;
    *(undefined8 *)(param_1 + 0x10) = local_98;
    *(undefined4 *)(param_1 + 0x30) = local_78;
    *(undefined4 *)(param_1 + 0x34) = uStack_74;
    *(undefined4 *)(param_1 + 0x38) = uStack_70;
    *(undefined4 *)(param_1 + 0x3c) = uStack_6c;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::find(embree::SetMB const&) */

SetMB * embree::sse2::BVHBuilderMSMBlur::
        BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
        ::find(SetMB *param_1)

{
  byte bVar1;
  SetMB *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::find
            ((HeuristicArrayBinningMB<embree::PrimRefMB,32ul> *)&local_a8,in_RDX,
             *(ulong *)(in_RSI + 0x10));
  bVar1 = (byte)*(undefined8 *)(in_RSI + 0x10);
  if ((((*(float *)(in_RDX + 0x14) - *(float *)(in_RDX + 4)) +
       (*(float *)(in_RDX + 0x18) - *(float *)(in_RDX + 8))) *
       (*(float *)(in_RDX + 0x10) - *(float *)in_RDX) +
       (*(float *)(in_RDX + 0x14) - *(float *)(in_RDX + 4)) *
       (*(float *)(in_RDX + 0x18) - *(float *)(in_RDX + 8)) +
      (*(float *)(in_RDX + 0x34) - *(float *)(in_RDX + 0x24)) *
      (*(float *)(in_RDX + 0x38) - *(float *)(in_RDX + 0x28)) +
      (*(float *)(in_RDX + 0x30) - *(float *)(in_RDX + 0x20)) *
      ((*(float *)(in_RDX + 0x34) - *(float *)(in_RDX + 0x24)) +
      (*(float *)(in_RDX + 0x38) - *(float *)(in_RDX + 0x28)))) * _LC12 *
      (*(float *)(in_RDX + 0x8c) - *(float *)(in_RDX + 0x88)) *
      (float)((ulong)(*(long *)(in_RDX + 0x70) + -1 + (1L << (bVar1 & 0x3f))) >> (bVar1 & 0x3f)) *
      _LC12 <= local_a8) {
    if ((*(float *)(in_RDX + 0x8c) - *(float *)(in_RDX + 0x88) <=
         _LC33 / (float)*(ulong *)(in_RDX + 0x78)) ||
       (HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
        ::find((SetMB *)&local_68,in_RSI + 0x48), local_a8 <= local_68)) {
      *(float *)param_1 = local_a8;
      *(undefined4 *)(param_1 + 4) = uStack_a4;
      *(undefined4 *)(param_1 + 0x20) = local_88;
      *(undefined4 *)(param_1 + 0x24) = uStack_84;
      *(undefined4 *)(param_1 + 0x28) = uStack_80;
      *(undefined4 *)(param_1 + 0x2c) = uStack_7c;
      *(undefined4 *)(param_1 + 8) = local_a0;
      *(undefined4 *)(param_1 + 0xc) = local_9c;
      *(undefined8 *)(param_1 + 0x10) = local_98;
      *(undefined4 *)(param_1 + 0x30) = local_78;
      *(undefined4 *)(param_1 + 0x34) = uStack_74;
      *(undefined4 *)(param_1 + 0x38) = uStack_70;
      *(undefined4 *)(param_1 + 0x3c) = uStack_6c;
    }
    else {
      *(ulong *)param_1 = CONCAT44(uStack_64,local_68);
      *(undefined8 *)(param_1 + 0x20) = local_48;
      *(undefined8 *)(param_1 + 0x28) = uStack_40;
      *(undefined4 *)(param_1 + 8) = local_60;
      *(undefined4 *)(param_1 + 0x30) = local_38;
      *(undefined4 *)(param_1 + 0x34) = uStack_34;
      *(undefined4 *)(param_1 + 0x38) = uStack_30;
      *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
      *(undefined4 *)(param_1 + 0xc) = local_5c;
      *(undefined8 *)(param_1 + 0x10) = local_58;
    }
  }
  else {
    *(ulong *)param_1 = CONCAT44(uStack_a4,local_a8);
    *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_84,local_88);
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_7c,uStack_80);
    *(undefined4 *)(param_1 + 8) = local_a0;
    *(undefined4 *)(param_1 + 0xc) = local_9c;
    *(undefined8 *)(param_1 + 0x10) = local_98;
    *(undefined4 *)(param_1 + 0x30) = local_78;
    *(undefined4 *)(param_1 + 0x34) = uStack_74;
    *(undefined4 *)(param_1 + 0x38) = uStack_70;
    *(undefined4 *)(param_1 + 0x3c) = uStack_6c;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > embree::parallel_reduce_internal<unsigned
   long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> >,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::range<unsigned
   long> const&)#3}, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const
   (embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)>(unsigned long, unsigned long,
   unsigned long, unsigned long, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, 2ul>::split(embree::sse2::BinSplit<32ul>
   const&, embree::SetMB const&, embree::SetMB&, embree::SetMB&)::{lambda(embree::range<unsigned
   long> const&)#3} const&, embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const (
   const&)(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&,
   embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa> > const&)) */

embree * __thiscall
embree::
parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_3_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
          (embree *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,
          PrimInfoMBT_conflict *param_5,_lambda_embree__range<unsigned_long>_const___3_ *param_6,
          _func_PrimInfoMBT_PrimInfoMBT_ptr_PrimInfoMBT_ptr_conflict *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_20f8;
  ulong local_20f0;
  ulong local_20e8;
  undefined8 *local_20e0;
  undefined8 *local_20d8;
  undefined8 local_20d0;
  undefined8 uStack_20c8;
  ulong *local_20c0;
  undefined1 *puStack_20b8;
  _lambda_embree__range<unsigned_long>_const___3_ *local_20b0;
  undefined8 uStack_20a8;
  undefined8 local_20a0;
  undefined8 uStack_2098;
  undefined8 local_2090;
  undefined8 uStack_2088;
  undefined8 local_2080;
  undefined8 uStack_2078;
  undefined8 local_2070;
  undefined8 uStack_2068;
  undefined8 local_2060;
  undefined8 local_2058;
  undefined8 local_2050;
  undefined8 local_2048;
  undefined1 local_2040 [8064];
  undefined1 *local_c0;
  ulong local_b8;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_20f8 = param_3;
  local_20f0 = param_2;
  local_20e8 = param_1;
  uVar2 = embree::TaskScheduler::threadCount();
  if (0x200 < local_20e8) {
    local_20e8 = 0x200;
  }
  if (uVar2 < local_20e8) {
    local_20e8 = uVar2;
  }
  local_b8 = local_20e8;
  if (local_20e8 * 0x90 < 0x2001) {
    local_c0 = local_2040;
  }
  else {
    local_c0 = (undefined1 *)embree::alignedMalloc(local_20e8 * 0x90,0x40);
  }
  local_20d0 = &local_20f0;
  uStack_20c8 = &local_20f8;
  local_20c0 = &local_20e8;
  local_20b0 = param_6;
  puStack_20b8 = local_2040;
  if (local_20e8 != 0) {
    local_20d8 = &local_20d0;
    local_20e0 = (undefined8 *)0x0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImNS_11PrimInfoMBTINS_5LBBoxINS_6Vec3faEEEEEZNS_4sse227HeuristicMBlurTemporalSplitINS_9PrimRefMBENS9_18RecalculatePrimRefINS_12TriangleMeshEEELm2EE5splitERKNS9_8BinSplitILm32EEERKNS_5SetMBERSK_SN_EUlRKNS_5rangeImEEE1_FKS8_RST_SU_EEET0_T_SX_SX_SX_RKSW_RKT1_RKT2_EUlmE_EEvSX_SZ_EUlSR_E_EEvSX_SX_SX_SZ_PNS0_16TaskGroupContextE
              (0,local_20e8,1,&local_20d8,&local_20e0);
    embree::TaskScheduler::wait();
    if (local_20e0 != (undefined8 *)0x0) {
      local_20d8 = local_20e0;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20d8);
      goto LAB_001108d2;
    }
  }
  uVar1 = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)this = *(undefined8 *)param_5;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_5 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_5 + 0x20);
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(this + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x48);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_5 + 0x40);
  *(undefined8 *)(this + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x58);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_5 + 0x50);
  *(undefined8 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_5 + 0x60);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_5 + 0x68);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_5 + 0x70);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_5 + 0x78);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_5 + 0x80);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_5 + 0x88);
  uVar2 = 0;
  if (local_20e8 != 0) {
    do {
      uVar3 = uVar2 + 1;
      (*param_7)((PrimInfoMBT_conflict *)&local_20d0,(PrimInfoMBT_conflict *)this,
                 (PrimInfoMBT_conflict *)(local_c0 + uVar2 * 0x90));
      *(undefined8 *)(this + 0x70) = local_2060;
      *(undefined4 *)this = (undefined4)local_20d0;
      *(undefined4 *)(this + 4) = local_20d0._4_4_;
      *(undefined4 *)(this + 8) = (undefined4)uStack_20c8;
      *(undefined4 *)(this + 0xc) = uStack_20c8._4_4_;
      *(ulong **)(this + 0x10) = local_20c0;
      *(undefined1 **)(this + 0x18) = puStack_20b8;
      *(undefined8 *)(this + 0x78) = local_2058;
      *(_lambda_embree__range<unsigned_long>_const___3_ **)(this + 0x20) = local_20b0;
      *(undefined8 *)(this + 0x28) = uStack_20a8;
      *(undefined8 *)(this + 0x80) = local_2050;
      *(undefined8 *)(this + 0x30) = local_20a0;
      *(undefined8 *)(this + 0x38) = uStack_2098;
      *(undefined8 *)(this + 0x88) = local_2048;
      *(undefined8 *)(this + 0x40) = local_2090;
      *(undefined8 *)(this + 0x48) = uStack_2088;
      *(undefined8 *)(this + 0x50) = local_2080;
      *(undefined8 *)(this + 0x58) = uStack_2078;
      *(undefined8 *)(this + 0x60) = local_2070;
      *(undefined8 *)(this + 0x68) = uStack_2068;
      uVar2 = uVar3;
    } while (uVar3 < local_20e8);
  }
  if (local_c0 != local_2040) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_001108d2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::createLargeLeaf(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator) */

BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
* __thiscall
embree::sse2::BVHBuilderMSMBlur::
BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
::createLargeLeaf(BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
                  *this,ulong *param_1,ulong *param_3)

{
  uint uVar1;
  void *pvVar2;
  float *pfVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined1 auVar16 [4];
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 auVar30 [12];
  int iVar31;
  SetMB *pSVar32;
  SetMB *pSVar33;
  ulong uVar34;
  ulong *puVar35;
  float *pfVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  float **ppfVar43;
  uint *puVar44;
  long lVar45;
  ulong uVar46;
  float *pfVar47;
  uint *puVar48;
  int iVar49;
  ulong *puVar50;
  ulong *puVar51;
  uint uVar52;
  undefined1 auVar53 [4];
  uint *puVar54;
  bool bVar55;
  int *piVar56;
  ulong uVar57;
  ulong uVar58;
  ulong *puVar59;
  long *plVar60;
  long *plVar61;
  long lVar62;
  long in_FS_OFFSET;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar95;
  float fVar96;
  undefined1 auVar94 [16];
  float fVar97;
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar102;
  undefined1 auVar101 [16];
  float fVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  float fVar107;
  undefined1 auVar108 [16];
  FastAllocator *in_stack_00000008;
  ulong *in_stack_00000010;
  ulong *in_stack_00000018;
  undefined1 local_1e78 [16];
  undefined1 local_1e68 [16];
  undefined1 local_1e58 [16];
  undefined1 local_1e48 [16];
  undefined8 local_1e38;
  undefined8 uStack_1e30;
  undefined8 local_1e28;
  undefined8 uStack_1e20;
  float *local_1e18;
  float *pfStack_1e10;
  undefined1 *local_1e08;
  ulong uStack_1e00;
  ulong local_1df0;
  ulong local_1de8;
  undefined8 uStack_1de0;
  float *local_1dd8;
  float *pfStack_1dd0;
  undefined1 *local_1dc8;
  ulong uStack_1dc0;
  float *local_1db8;
  float *pfStack_1db0;
  ulong local_1d78;
  undefined4 local_1ce4;
  undefined4 local_1ce0;
  undefined4 local_1cdc;
  undefined1 local_1cc8 [8];
  undefined8 uStack_1cc0;
  undefined4 local_1c98;
  ulong *local_1c50;
  float local_1c48;
  float local_1c44;
  float local_1c40;
  float local_1c3c;
  float *local_1c38;
  float *local_1c30;
  ulong *local_1c28;
  float *local_1c20;
  ulong *local_1c18;
  ulong *local_1c08;
  float *local_1c00;
  ulong *local_1bf8;
  ulong **local_1bf0;
  SetMB *local_1be8;
  float *local_1bd8;
  float *pfStack_1bd0;
  undefined1 *local_1bc8;
  ulong uStack_1bc0;
  float *local_1bb8;
  float *pfStack_1bb0;
  undefined1 *local_1ba8;
  ulong uStack_1ba0;
  float *local_1b98;
  float *pfStack_1b90;
  undefined1 *local_1b88;
  ulong uStack_1b80;
  float *local_1b78;
  float *local_1b70;
  ulong local_1b68;
  ulong local_1b60;
  undefined4 local_1b58;
  undefined4 local_1b54;
  float local_1b50;
  float local_1b4c;
  float *local_1b48;
  float *pfStack_1b40;
  undefined1 *local_1b38;
  ulong uStack_1b30;
  float *local_1b28;
  float *pfStack_1b20;
  undefined1 *local_1b18;
  ulong uStack_1b10;
  float *local_1b08;
  float *pfStack_1b00;
  undefined1 *local_1af8;
  ulong uStack_1af0;
  float *local_1ae8;
  float *local_1ae0;
  ulong local_1ad8;
  ulong local_1ad0;
  undefined8 local_1ac8;
  undefined8 local_1ac0;
  float *local_1ab8;
  float *pfStack_1ab0;
  undefined1 *local_1aa8;
  ulong uStack_1aa0;
  float *local_1a98;
  float *pfStack_1a90;
  undefined1 *local_1a88;
  ulong uStack_1a80;
  float *local_1a78;
  float *pfStack_1a70;
  undefined8 local_1a68;
  ulong uStack_1a60;
  undefined8 local_1a58;
  undefined8 local_1a50;
  ulong local_1a48;
  ulong local_1a40;
  undefined8 local_1a38;
  undefined8 local_1a30;
  ulong local_1a28;
  ulong local_1a20;
  undefined1 local_1a08 [4];
  float fStack_1a04;
  undefined8 uStack_1a00;
  undefined1 local_19f8 [4];
  float fStack_19f4;
  undefined8 uStack_19f0;
  undefined8 local_19e8;
  undefined4 local_19d8;
  undefined4 uStack_19d4;
  undefined4 uStack_19d0;
  undefined4 uStack_19cc;
  undefined4 local_19c8;
  undefined4 uStack_19c4;
  undefined4 uStack_19c0;
  undefined4 uStack_19bc;
  ulong local_19b8;
  undefined1 local_19a8 [16];
  undefined1 local_1998 [16];
  ulong local_1988;
  ulong uStack_1980;
  ulong local_1978;
  ulong uStack_1970;
  ulong local_1968;
  ulong uStack_1960;
  undefined1 local_1958 [16];
  float *local_1948;
  float *pfStack_1940;
  ulong local_1938;
  ulong local_1930;
  ulong local_1928;
  undefined8 local_1920;
  ulong local_1918;
  float local_1908;
  undefined4 local_1904;
  undefined4 local_1900;
  uint local_18fc;
  undefined8 local_18f8;
  undefined1 local_18e8 [16];
  undefined4 local_18d8;
  undefined4 uStack_18d4;
  undefined4 uStack_18d0;
  undefined4 uStack_18cc;
  undefined1 local_18c8 [16];
  float *local_18b8;
  float *pfStack_18b0;
  undefined1 *local_18a8;
  ulong uStack_18a0;
  float *local_1898;
  float *pfStack_1890;
  undefined1 *local_1888;
  ulong uStack_1880;
  float *local_1878;
  float *pfStack_1870;
  undefined1 *local_1868;
  ulong uStack_1860;
  float *local_1858;
  float *pfStack_1850;
  ulong local_1848;
  ulong local_1840;
  undefined8 local_1838;
  undefined8 local_1830;
  ulong *local_1828;
  undefined8 local_1818;
  undefined8 local_1810;
  undefined8 local_1808;
  undefined8 local_17d8;
  undefined4 uStack_17d0;
  undefined4 uStack_17cc;
  float *local_17c8;
  float *pfStack_17c0;
  undefined1 *local_17b8;
  ulong uStack_17b0;
  float *local_17a8;
  float *pfStack_17a0;
  undefined1 *local_1798;
  ulong uStack_1790;
  float *local_1788;
  float *pfStack_1780;
  undefined1 *local_1778;
  ulong uStack_1770;
  float *local_1768;
  float *pfStack_1760;
  ulong local_1758;
  ulong local_1750;
  undefined8 local_1748;
  undefined8 local_1740;
  ulong *local_1738;
  undefined8 local_1728;
  undefined8 local_1720;
  undefined8 local_1718;
  undefined4 local_1708;
  undefined4 uStack_1704;
  undefined4 uStack_1700;
  undefined4 uStack_16fc;
  undefined4 local_16f8;
  undefined4 uStack_16f4;
  undefined4 uStack_16f0;
  undefined4 uStack_16ec;
  undefined8 local_11d8;
  undefined4 uStack_11d0;
  uint uStack_11cc;
  undefined1 local_11c8 [16];
  undefined1 local_11b8 [16];
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  ulong local_1198 [4];
  undefined1 local_1178 [16];
  float *local_1168 [2];
  ulong local_1158 [2];
  ulong local_1148;
  undefined4 uStack_1144;
  undefined8 local_1140;
  ulong local_1138 [2];
  float local_1128 [3];
  uint local_111c;
  undefined8 local_1118 [2];
  undefined1 local_1108 [16];
  undefined8 local_10f8;
  undefined4 uStack_10f0;
  undefined4 auStack_10ec [901];
  ulong *local_2d8 [16];
  ulong local_258;
  ulong local_250 [64];
  long local_50;
  long local_40;
  
  uVar46 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] < uVar46) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  findFallback((SetMB *)&local_11d8);
  fVar67 = _LC8;
  local_1a28 = param_3[0x12];
  local_19a8 = *(undefined1 (*) [16])(param_3 + 2);
  local_1a20 = param_3[0x13];
  local_1998 = *(undefined1 (*) [16])(param_3 + 4);
  local_1958 = *(undefined1 (*) [16])(param_3 + 0xc);
  pfVar36 = (float *)param_3[0xe];
  local_1988 = param_3[6];
  uStack_1980 = param_3[7];
  pfStack_1940 = (float *)param_3[0xf];
  local_1978 = param_3[8];
  uStack_1970 = param_3[9];
  local_1968 = param_3[10];
  uStack_1960 = param_3[0xb];
  local_1938 = param_3[0x10];
  local_1930 = param_3[0x11];
  local_1918 = param_3[0x14];
  local_1908 = (float)local_11d8;
  local_1904 = local_11d8._4_4_;
  local_1900 = uStack_11d0;
  local_18fc = uStack_11cc;
  local_18f8 = local_11c8._0_8_;
  local_18e8 = local_11b8;
  local_18d8 = (undefined4)local_11a8;
  uStack_18d4 = local_11a8._4_4_;
  uStack_18d0 = (undefined4)uStack_11a0;
  uStack_18cc = uStack_11a0._4_4_;
  local_19b8 = uVar46;
  local_1948 = pfVar36;
  local_1928 = local_1a28;
  local_1920 = local_1a20;
  if (uVar46 == 1) {
    if (pfVar36 == pfStack_1940) {
      if (1 < uStack_11cc) {
        bVar55 = false;
        goto LAB_00110ad8;
      }
      local_1e78._0_8_ = 8;
      pfVar47 = (float *)0x0;
      uVar46 = 0;
      goto LAB_00112ab2;
    }
    local_1920._0_4_ = (float)local_1a20;
    fVar107 = _LC8;
    fVar84 = _LC10;
    if (pfVar36 < pfStack_1940) {
      pfVar47 = (float *)(*(long *)(local_1918 + 0x20) + 0x40 + (long)pfVar36 * 0x50);
      fVar63 = _LC8;
      do {
        pfVar3 = pfVar47 + 1;
        if (*pfVar47 <= fVar84) {
          fVar84 = *pfVar47;
        }
        pfVar47 = pfVar47 + 0x14;
        fVar107 = *pfVar3;
        if (*pfVar3 <= fVar63) {
          fVar107 = fVar63;
        }
        fVar63 = fVar107;
      } while ((float *)(*(long *)(local_1918 + 0x20) + 0x40 + (long)pfStack_1940 * 0x50) != pfVar47
              );
    }
    if (((float)local_1920 < fVar84) ||
       (local_1920._4_4_ = (float)(local_1a20 >> 0x20), fVar107 < local_1920._4_4_)) {
      bVar55 = true;
LAB_00110ad8:
      pSVar32 = (SetMB *)&local_11d8;
      do {
        *(undefined4 *)(pSVar32 + 0xb4) = 0xffffffff;
        pSVar33 = pSVar32 + 0xf0;
        *(float *)(pSVar32 + 0xb0) = _LC10;
        *(undefined4 *)(pSVar32 + 0xb8) = 0;
        *(undefined4 *)(pSVar32 + 0xbc) = 0;
        pSVar32 = pSVar33;
      } while ((SetMB *)local_2d8 != pSVar33);
      local_111c = uStack_11cc;
      local_258 = 1;
      local_1148 = local_1a28;
      local_1168[0] = pfVar36;
      local_1168[1] = pfStack_1940;
      local_1140 = local_1a20;
      local_50 = 1;
      local_1128[2] = (float)uStack_11d0;
      local_2d8[0] = local_250;
      local_1158[0] = local_1938;
      local_1158[1] = local_1930;
      local_1138[0] = local_1918;
      local_1128[1] = (float)local_11d8._4_4_;
      local_1118[0] = local_11c8._0_8_;
      local_250[0] = local_1918;
      local_250[1] = 2;
      bVar14 = false;
      local_1128[0] = (float)local_11d8;
      local_1108 = local_11b8;
      local_10f8._0_4_ = (undefined4)local_11a8;
      local_10f8._4_4_ = local_11a8._4_4_;
      uStack_10f0 = (undefined4)uStack_11a0;
      auStack_10ec[0] = uStack_11a0._4_4_;
      local_1cc8._4_4_ = _LC10;
      local_1cc8._0_4_ = _LC10;
      uStack_1cc0._0_4_ = _LC10;
      uStack_1cc0._4_4_ = _LC10;
      local_11d8 = uVar46;
      local_11c8 = local_19a8;
      local_11b8 = local_1998;
      local_11a8 = local_1988;
      uStack_11a0 = uStack_1980;
      local_1198[0] = local_1978;
      local_1198[1] = uStack_1970;
      local_1198[2] = local_1968;
      local_1198[3] = uStack_1960;
      local_1178 = local_1958;
      while( true ) {
        auVar30 = local_1e68._4_12_;
        uVar39 = 0;
        uVar46 = 0;
        uVar42 = 0xffffffffffffffff;
        ppfVar43 = local_1168;
        do {
          uVar34 = (long)ppfVar43[1] - (long)*ppfVar43;
          if ((((param_1[4] < uVar34) || (1 < *(uint *)((long)ppfVar43 + 0x4c))) || (bVar55)) &&
             (uVar46 < uVar34)) {
            uVar46 = uVar34;
            uVar42 = uVar39;
          }
          uVar39 = uVar39 + 1;
          ppfVar43 = ppfVar43 + 0x1e;
          bVar55 = false;
        } while (uVar39 != local_258);
        if (uVar42 == 0xffffffffffffffff) break;
        local_1810 = 0;
        local_1720 = 0;
        local_1de8 = local_19b8 + 1;
        lVar45 = uVar42 * 0xf0;
        local_1818 = 0xffffffff7f800000;
        local_1728 = 0xffffffff7f800000;
        iVar31 = *(int *)((long)local_1118 + lVar45 + -4);
        pSVar32 = (SetMB *)(local_11c8 + lVar45);
        local_1e78._0_8_ = local_1de8;
        local_18c8._0_8_ = local_1de8;
        uVar46 = uVar42;
        local_17d8 = local_1de8;
        if (iVar31 == 0) {
          local_1ac8 = 0x3f80000000000000;
          local_1b38 = (undefined1 *)CONCAT44(fVar67,fVar67);
          uStack_1b30 = CONCAT44(fVar67,fVar67);
          local_1a38 = 0x3f80000000000000;
          pfVar36 = local_1168[uVar42 * 0x1e];
          fStack_1a04 = local_1128[uVar42 * 0x3c + 2];
          pfVar47 = local_1168[uVar42 * 0x1e + 1];
          local_1ae8 = (float *)0x0;
          local_1bc8 = local_19f8;
          local_1ae0 = (float *)0x0;
          local_1ad8 = 0;
          local_1ad0 = 0;
          local_1ac0 = 0x3f800000;
          local_1a58 = 0;
          local_1a50 = 0;
          local_1a48 = 0;
          local_1a40 = 0;
          local_1a30 = 0x3f800000;
          local_1b48 = (float *)local_1cc8;
          pfStack_1b40 = uStack_1cc0;
          local_1b28 = (float *)local_1cc8;
          pfStack_1b20 = uStack_1cc0;
          local_1b08 = (float *)local_1cc8;
          pfStack_1b00 = uStack_1cc0;
          local_1ab8 = (float *)local_1cc8;
          pfStack_1ab0 = uStack_1cc0;
          local_1a98 = (float *)local_1cc8;
          pfStack_1a90 = uStack_1cc0;
          local_1a78 = (float *)local_1cc8;
          pfStack_1a70 = uStack_1cc0;
          local_1a08 = (undefined1  [4])fStack_1a04;
          uStack_1a00._0_4_ = fStack_1a04;
          uStack_1a00._4_4_ = fStack_1a04;
          _local_19f8 = *(undefined1 (*) [16])
                         (&mm_lookupmask_ps +
                         (long)(1 << (SUB41(local_1128[uVar42 * 0x3c + 1],0) & 0x1f)) * 2);
          pfStack_1bd0 = (float *)local_1a08;
          local_1bd8 = local_1128 + uVar42 * 0x3c;
          local_1b18 = local_1b38;
          uStack_1b10 = uStack_1b30;
          local_1af8 = local_1b38;
          uStack_1af0 = uStack_1b30;
          local_1aa8 = local_1b38;
          uStack_1aa0 = uStack_1b30;
          local_1a88 = local_1b38;
          uStack_1a80 = uStack_1b30;
          local_1a68 = local_1b38;
          uStack_1a60 = uStack_1b30;
          pfStack_1850 = (float *)parallel_partitioning<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>
                                            (*(PrimRefMB **)(local_1138[uVar42 * 0x1e] + 0x20),
                                             (ulong)pfVar36,(ulong)pfVar47,(EmptyTy *)&local_1c08,
                                             (PrimInfoMBT_conflict *)&local_1b48,
                                             (PrimInfoMBT_conflict *)&local_1ab8,
                                             (_lambda_embree__PrimRefMB_const___1_ *)&local_1bd8,
                                             (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimRefMB_const___2_
                                              *)&local_1c38,
                                             (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>_const___3_
                                              *)&local_1c28,0x80,0xc00);
          local_1828 = (ulong *)local_1138[uVar42 * 0x1e];
          local_1e58._0_8_ = local_1b48;
          local_1e58._8_8_ = pfStack_1b40;
          local_1848 = local_1ad8;
          local_1838 = local_1ac8;
          fVar84 = *(float *)(local_1138 + uVar42 * 0x1e + -1);
          local_1e48._0_8_ = local_1b38;
          local_1e48._8_8_ = uStack_1b30;
          fVar107 = *(float *)((long)local_1138 + lVar45 + -4);
          local_1e28 = local_1b18;
          uStack_1e20 = uStack_1b10;
          local_1868 = local_1af8;
          uStack_1860 = uStack_1af0;
          local_1840 = local_1ad0;
          local_1e38 = local_1b28;
          uStack_1e30 = pfStack_1b20;
          local_1878 = local_1b08;
          pfStack_1870 = pfStack_1b00;
          local_1830._4_4_ = (float)((ulong)local_1ac0 >> 0x20);
          local_1830._0_4_ = (float)local_1ac0;
          local_1e68._0_4_ = fVar84;
          if (fVar84 <= (float)local_1830) {
            local_1e68._0_4_ = (float)local_1830;
          }
          if (fVar107 <= local_1830._4_4_) {
            local_1830._4_4_ = fVar107;
          }
          local_1dd8 = local_1ab8;
          pfStack_1dd0 = pfStack_1ab0;
          local_1778 = local_1a68;
          uStack_1770 = uStack_1a60;
          local_1758 = local_1a48;
          local_1750 = local_1a40;
          local_1830 = CONCAT44(local_1830._4_4_,local_1e68._0_4_);
          local_1dc8 = local_1aa8;
          uStack_1dc0 = uStack_1aa0;
          local_1db8 = local_1a98;
          pfStack_1db0 = pfStack_1a90;
          local_1798 = local_1a88;
          uStack_1790 = uStack_1a80;
          local_1788 = local_1a78;
          pfStack_1780 = pfStack_1a70;
          local_1748 = local_1a38;
          local_1740._4_4_ = (float)((ulong)local_1a30 >> 0x20);
          local_1740._0_4_ = (float)local_1a30;
          if (fVar84 <= (float)local_1740) {
            fVar84 = (float)local_1740;
          }
          if (fVar107 <= local_1740._4_4_) {
            local_1740._4_4_ = fVar107;
          }
          local_1740 = CONCAT44(local_1740._4_4_,fVar84);
          fVar63 = local_1740._4_4_;
          fVar107 = local_1830._4_4_;
          local_1858 = pfVar36;
          local_1768 = pfStack_1850;
          pfStack_1760 = pfVar47;
          local_1738 = local_1828;
LAB_001111c7:
          local_1ce4 = (undefined4)local_1838;
          local_1ce0 = local_1838._4_4_;
          local_1cdc = (undefined4)local_1748;
          local_1c98 = local_1748._4_4_;
          puVar59 = local_1828;
          local_1e18 = local_1878;
          pfStack_1e10 = pfStack_1870;
          local_1e08 = local_1868;
          uStack_1e00 = uStack_1860;
          local_1df0 = local_1848;
          local_1d78 = local_1840;
          local_18b8 = (float *)local_1e58._0_8_;
          pfStack_18b0 = (float *)local_1e58._8_8_;
          local_18a8 = (undefined1 *)local_1e48._0_8_;
          uStack_18a0 = local_1e48._8_8_;
          local_1898 = local_1e38;
          pfStack_1890 = uStack_1e30;
          local_1888 = local_1e28;
          uStack_1880 = uStack_1e20;
        }
        else {
          uVar37 = local_1e68._8_8_;
          if (iVar31 != 2) {
            if (iVar31 == 1) {
              lVar40 = *(long *)(local_1138[uVar42 * 0x1e] + 0x20) +
                       (long)local_1168[uVar42 * 0x1e + 1] * 0x50;
              lVar41 = *(long *)(local_1138[uVar42 * 0x1e] + 0x20) +
                       (long)local_1168[uVar42 * 0x1e] * 0x50;
              if (lVar40 != lVar41) {
                lVar62 = (long)local_1168[uVar42 * 0x1e + 1] * 0x50 +
                         (long)local_1168[uVar42 * 0x1e] * -0x50;
                local_1e68._0_8_ = uVar42;
                uVar39 = (lVar62 >> 4) * -0x3333333333333333;
                if (uVar39 == 0) {
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar41,lVar40,0xfffffffffffffffe);
                }
                else {
                  lVar4 = 0x3f;
                  if (uVar39 != 0) {
                    for (; uVar39 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                    }
                  }
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar41,lVar40,(long)(int)lVar4 * 2);
                  if (0x500 < lVar62) {
                    lVar62 = lVar41 + 0x500;
                    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                              (lVar41,lVar62);
                    for (; auVar30 = local_1e68._4_12_, lVar40 != lVar62; lVar62 = lVar62 + 0x50) {
                      std::
                      __unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                                (lVar62);
                    }
                    goto LAB_001140dc;
                  }
                }
                local_1e68 = CONCAT88(uVar37,local_1e68._0_8_);
                std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                          (lVar41,lVar40);
                auVar30 = local_1e68._4_12_;
              }
LAB_001140dc:
              local_1e68._4_12_ = auVar30;
              splitFallback(pSVar32,(SetMB *)&local_18b8,(SetMB *)&local_17c8);
              local_1e58._0_8_ = local_18b8;
              local_1e58._8_8_ = pfStack_18b0;
              local_1e48._0_8_ = local_18a8;
              local_1e48._8_8_ = uStack_18a0;
              local_1e38 = local_1898;
              uStack_1e30 = pfStack_1890;
              local_1e28 = local_1888;
              uStack_1e20 = uStack_1880;
              local_1e68._0_4_ = (float)local_1830;
              local_1dd8 = local_17c8;
              pfStack_1dd0 = pfStack_17c0;
              local_1dc8 = local_17b8;
              uStack_1dc0 = uStack_17b0;
              local_1db8 = local_17a8;
              pfStack_1db0 = pfStack_17a0;
              fVar63 = local_1740._4_4_;
              fVar107 = local_1830._4_4_;
              fVar84 = (float)local_1740;
            }
            else {
              if (iVar31 != 3) {
                local_1e58._0_8_ = local_18b8;
                local_1e58._8_8_ = pfStack_18b0;
                local_1e48._0_8_ = local_18a8;
                local_1e48._8_8_ = uStack_18a0;
                local_1e38 = local_1898;
                uStack_1e30 = pfStack_1890;
                local_1e28 = local_1888;
                uStack_1e20 = uStack_1880;
                local_1e68._0_4_ = (float)local_1830;
                local_1e68 = CONCAT124(auVar30,local_1e68._0_4_);
                local_1dd8 = local_17c8;
                pfStack_1dd0 = pfStack_17c0;
                local_1dc8 = local_17b8;
                uStack_1dc0 = uStack_17b0;
                local_1db8 = local_17a8;
                pfStack_1db0 = pfStack_17a0;
                fVar63 = local_1740._4_4_;
                fVar107 = local_1830._4_4_;
                fVar84 = (float)local_1740;
                goto LAB_001111c7;
              }
              lVar40 = *(long *)(local_1138[uVar42 * 0x1e] + 0x20) +
                       (long)local_1168[uVar42 * 0x1e + 1] * 0x50;
              lVar41 = *(long *)(local_1138[uVar42 * 0x1e] + 0x20) +
                       (long)local_1168[uVar42 * 0x1e] * 0x50;
              if (lVar40 != lVar41) {
                lVar62 = (long)local_1168[uVar42 * 0x1e + 1] * 0x50 +
                         (long)local_1168[uVar42 * 0x1e] * -0x50;
                uVar39 = (lVar62 >> 4) * -0x3333333333333333;
                if (uVar39 == 0) {
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar41,lVar40,0xfffffffffffffffe);
                }
                else {
                  lVar4 = 0x3f;
                  if (uVar39 != 0) {
                    for (; uVar39 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                    }
                  }
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar41,lVar40,(long)(int)lVar4 * 2);
                  if (0x500 < lVar62) {
                    lVar62 = lVar41 + 0x500;
                    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                              (lVar41,lVar62);
                    for (; lVar40 != lVar62; lVar62 = lVar62 + 0x50) {
                      std::
                      __unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                                (lVar62);
                    }
                    goto LAB_00113ea9;
                  }
                }
                std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                          (lVar41,lVar40);
              }
LAB_00113ea9:
              splitByGeometry(pSVar32,(SetMB *)&local_18b8,(SetMB *)&local_17c8);
              local_1e58._0_8_ = local_18b8;
              local_1e58._8_8_ = pfStack_18b0;
              local_1e78._0_8_ = local_18c8._0_8_;
              local_1e48._0_8_ = local_18a8;
              local_1e48._8_8_ = uStack_18a0;
              local_1e38 = local_1898;
              uStack_1e30 = pfStack_1890;
              local_1e28 = local_1888;
              uStack_1e20 = uStack_1880;
              local_1de8 = local_17d8;
              local_1e68._0_4_ = (float)local_1830;
              local_1e68 = CONCAT124(auVar30,local_1e68._0_4_);
              local_1dd8 = local_17c8;
              pfStack_1dd0 = pfStack_17c0;
              local_1dc8 = local_17b8;
              uStack_1dc0 = uStack_17b0;
              local_1db8 = local_17a8;
              pfStack_1db0 = pfStack_17a0;
              fVar63 = local_1740._4_4_;
              fVar107 = local_1830._4_4_;
              fVar84 = (float)local_1740;
            }
            goto LAB_001111c7;
          }
          local_1c44 = local_1128[uVar42 * 0x3c + 2];
          local_1c48 = *(float *)(local_1138 + uVar42 * 0x1e + -1);
          puVar50 = (ulong *)local_1138[uVar42 * 0x1e];
          puVar51 = param_1 + 9;
          local_1c3c = *(float *)((long)local_1138 + lVar45 + -4);
          local_1c40 = local_1c44;
          puVar35 = (ulong *)operator_new(0x28);
          pfVar36 = local_1168[uVar42 * 0x1e + 1];
          pfVar47 = local_1168[uVar42 * 0x1e];
          puVar38 = (undefined8 *)param_1[9];
          *(undefined1 *)(puVar35 + 1) = 0;
          puVar35[2] = 0;
          uVar39 = (long)pfVar36 - (long)pfVar47;
          *puVar35 = (ulong)puVar38;
          puVar35[3] = 0;
          puVar35[4] = 0;
          if (uVar39 != 0) {
            uVar34 = uVar39 * 0x50;
            (**(code **)*puVar38)(puVar38,uVar34,0);
            if (uVar34 < 0x1c00000) {
              uVar34 = embree::alignedMalloc(uVar34,0x10);
            }
            else {
              uVar34 = embree::os_malloc(uVar34,(bool *)(puVar35 + 1));
            }
            pfVar36 = local_1168[uVar42 * 0x1e + 1];
            pfVar47 = local_1168[uVar42 * 0x1e];
            puVar35[4] = uVar34;
            puVar35[2] = uVar39;
            puVar35[3] = uVar39;
            uVar39 = (long)pfVar36 - (long)pfVar47;
          }
          local_1aa8 = (undefined1 *)CONCAT44(fVar67,fVar67);
          uStack_1aa0 = CONCAT44(fVar67,fVar67);
          local_1bf0 = &local_1c50;
          local_1a58 = 0;
          local_1a50 = 0;
          local_1a48 = 0;
          local_1a40 = 0;
          local_1a38 = 0x3f80000000000000;
          local_1a30 = 0x3f800000;
          local_1ab8 = (float *)local_1cc8;
          pfStack_1ab0 = uStack_1cc0;
          local_1a98 = (float *)local_1cc8;
          pfStack_1a90 = uStack_1cc0;
          local_1a78 = (float *)local_1cc8;
          pfStack_1a70 = uStack_1cc0;
          local_1c50 = puVar35;
          local_1c08 = puVar50;
          local_1c00 = &local_1c48;
          local_1bf8 = puVar51;
          local_1be8 = pSVar32;
          local_1a88 = local_1aa8;
          uStack_1a80 = uStack_1aa0;
          local_1a68 = local_1aa8;
          uStack_1a60 = uStack_1aa0;
          if (uVar39 < 0xc00) {
            local_1b48 = pfVar47;
            pfStack_1b40 = pfVar36;
            HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
            ::
            split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
            ::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                      ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1bd8,
                       (range *)&local_1c08);
          }
          else {
            parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                      ((ulong)&local_1bd8,uVar39 + 0x7f >> 7,(ulong)pfVar47,(ulong)pfVar36,
                       (PrimInfoMBT_conflict *)&local_1ab8,
                       (_lambda_embree__range<unsigned_long>_const___1_ *)&local_1c08,
                       PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
          }
          pfVar36 = local_1168[uVar42 * 0x1e + 1];
          pfVar47 = local_1168[uVar42 * 0x1e];
          uVar39 = (long)pfVar36 - (long)pfVar47;
          if ((long)local_1b70 - (long)local_1b78 != uVar39) {
            local_1ab8 = &local_1c48;
            local_1b70 = (float *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_>
                                            ((PrimRefMB *)local_1c50[4],0,uVar39,0x400,
                                             (_lambda_embree__PrimRefMB_const___1_ *)&local_1ab8);
            pfVar36 = local_1168[uVar42 * 0x1e + 1];
            pfVar47 = local_1168[uVar42 * 0x1e];
            uVar39 = (long)pfVar36 - (long)pfVar47;
          }
          puVar59 = local_1c50;
          local_1e68._0_8_ = uVar42;
          local_1e58._0_8_ = local_1bd8;
          local_1e58._8_8_ = pfStack_1bd0;
          fVar84 = local_1c48;
          if (local_1c48 <= local_1b50) {
            fVar84 = local_1b50;
          }
          local_18b8 = local_1bd8;
          pfStack_18b0 = pfStack_1bd0;
          local_1e48._0_8_ = local_1bc8;
          local_1e48._8_8_ = uStack_1bc0;
          local_1e38 = local_1bb8;
          uStack_1e30 = pfStack_1bb0;
          local_1e68._0_4_ = fVar84;
          local_1df0 = local_1b68;
          fVar107 = local_1b4c;
          if (local_1c44 <= local_1b4c) {
            fVar107 = local_1c44;
          }
          local_1d78 = local_1b60;
          local_1e28 = local_1ba8;
          uStack_1e20 = uStack_1ba0;
          local_1e18 = local_1b98;
          pfStack_1e10 = pfStack_1b90;
          local_1e08 = local_1b88;
          uStack_1e00 = uStack_1b80;
          local_1ce4 = local_1b58;
          local_1ce0 = local_1b54;
          local_18a8 = local_1bc8;
          uStack_18a0 = uStack_1bc0;
          local_1898 = local_1bb8;
          pfStack_1890 = pfStack_1bb0;
          local_1888 = local_1ba8;
          uStack_1880 = uStack_1ba0;
          local_1878 = local_1b98;
          pfStack_1870 = pfStack_1b90;
          local_1868 = local_1b88;
          uStack_1860 = uStack_1b80;
          local_1858 = local_1b78;
          local_1aa8 = (undefined1 *)CONCAT44(fVar67,fVar67);
          uStack_1aa0 = CONCAT44(fVar67,fVar67);
          local_1848 = local_1b68;
          local_1840 = local_1b60;
          local_1828 = local_1c50;
          local_1a58 = 0;
          local_1a50 = 0;
          local_1a48 = 0;
          local_1a40 = 0;
          local_1a38 = 0x3f80000000000000;
          local_1a30 = 0x3f800000;
          local_1838 = CONCAT44(local_1b54,local_1b58);
          local_1830 = CONCAT44(fVar107,fVar84);
          local_1ab8 = (float *)local_1cc8;
          pfStack_1ab0 = uStack_1cc0;
          local_1a98 = (float *)local_1cc8;
          pfStack_1a90 = uStack_1cc0;
          local_1a78 = (float *)local_1cc8;
          pfStack_1a70 = uStack_1cc0;
          local_1c28 = puVar50;
          local_1c20 = &local_1c40;
          local_1c18 = puVar51;
          local_1a88 = local_1aa8;
          uStack_1a80 = uStack_1aa0;
          local_1a68 = local_1aa8;
          uStack_1a60 = uStack_1aa0;
          pfStack_1850 = local_1b70;
          if (uVar39 < 0xc00) {
            local_1c38 = pfVar47;
            local_1c30 = pfVar36;
            HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
            ::
            split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
            ::{lambda(embree::range<unsigned_long>const&)#3}::operator()
                      ((_lambda_embree__range<unsigned_long>const___3_ *)&local_1b48,
                       (range *)&local_1c28);
          }
          else {
            parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_3_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                      ((embree *)&local_1b48,uVar39 + 0x7f >> 7,(ulong)pfVar47,(ulong)pfVar36,0x80,
                       (PrimInfoMBT_conflict *)&local_1ab8,
                       (_lambda_embree__range<unsigned_long>_const___3_ *)&local_1c28,
                       PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
          }
          pfVar47 = local_1168[uVar42 * 0x1e];
          lVar40 = (long)local_1ae0 - (long)local_1ae8;
          pfVar36 = (float *)((long)pfVar47 + lVar40);
          local_1ae8 = pfVar47;
          local_1ae0 = pfVar36;
          if (lVar40 != (long)local_1168[uVar42 * 0x1e + 1] - (long)pfVar47) {
            local_1ab8 = &local_1c40;
            pfVar36 = (float *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_4_>
                                         ((PrimRefMB *)puVar50[4],(ulong)pfVar47,
                                          (ulong)local_1168[uVar42 * 0x1e + 1],0x400,
                                          (_lambda_embree__PrimRefMB_const___4_ *)&local_1ab8);
          }
          local_1798 = local_1b18;
          uStack_1790 = uStack_1b10;
          fVar84 = local_1c40;
          if (local_1c40 <= (float)local_1ac0) {
            fVar84 = (float)local_1ac0;
          }
          local_1dd8 = local_1b48;
          pfStack_1dd0 = pfStack_1b40;
          local_1788 = local_1b08;
          pfStack_1780 = pfStack_1b00;
          local_1758 = local_1ad8;
          local_1dc8 = local_1b38;
          uStack_1dc0 = uStack_1b30;
          local_1750 = local_1ad0;
          local_1778 = local_1af8;
          uStack_1770 = uStack_1af0;
          local_1db8 = local_1b28;
          pfStack_1db0 = pfStack_1b20;
          local_1cdc = (undefined4)local_1ac8;
          local_1c98 = local_1ac8._4_4_;
          fVar63 = local_1ac0._4_4_;
          if (local_1c3c <= local_1ac0._4_4_) {
            fVar63 = local_1c3c;
          }
          bVar14 = (bool)(bVar14 | puVar35 != (ulong *)0x0);
          local_1748 = local_1ac8;
          local_1740 = CONCAT44(fVar63,fVar84);
          local_1768 = local_1ae8;
          pfStack_1760 = pfVar36;
          local_1738 = puVar50;
        }
        puVar50 = local_1738;
        uVar58 = local_1750;
        uVar57 = local_1758;
        uVar34 = uStack_1770;
        puVar29 = local_1778;
        pfVar47 = pfStack_1780;
        pfVar36 = local_1788;
        uVar39 = uStack_1790;
        puVar28 = local_1798;
        local_17c8 = local_1dd8;
        pfStack_17c0 = pfStack_1dd0;
        local_17b8 = local_1dc8;
        uStack_17b0 = uStack_1dc0;
        local_17a8 = local_1db8;
        pfStack_17a0 = pfStack_1db0;
        findFallback((SetMB *)local_19f8);
        uVar18 = local_19e8;
        fVar78 = fStack_19f4;
        auVar53 = local_19f8;
        uVar37 = CONCAT44(uStack_19d4,local_19d8);
        uVar11 = CONCAT44(uStack_19cc,uStack_19d0);
        uVar15 = uStack_19f0._4_4_;
        local_1818 = SUB168(_local_19f8,0);
        uVar12 = CONCAT44(uStack_19c4,local_19c8);
        uVar13 = CONCAT44(uStack_19bc,uStack_19c0);
        local_1810 = SUB168(_local_19f8,8);
        local_1808 = local_19e8;
        findFallback((SetMB *)local_19f8);
        lVar40 = local_50;
        uVar27 = uStack_19bc;
        uVar26 = uStack_19c0;
        uVar25 = uStack_19c4;
        uVar24 = local_19c8;
        uVar23 = uStack_19cc;
        uVar22 = uStack_19d0;
        uVar21 = uStack_19d4;
        uVar20 = local_19d8;
        uVar19 = local_19e8;
        auVar16 = local_19f8;
        fVar106 = fStack_19f4;
        puVar51 = local_2d8[uVar46];
        uVar17 = uStack_19f0._4_4_;
        local_1728 = SUB168(_local_19f8,0);
        local_1720 = SUB168(_local_19f8,8);
        local_1718 = local_19e8;
        local_1708 = local_19d8;
        uStack_1704 = uStack_19d4;
        uStack_1700 = uStack_19d0;
        uStack_16fc = uStack_19cc;
        local_16f8 = local_19c8;
        uStack_16f4 = uStack_19c4;
        uStack_16f0 = uStack_19c0;
        uStack_16ec = uStack_19bc;
        if ((ulong *)*puVar51 == puVar59) {
          puVar51[1] = puVar51[1] + 1;
          puVar35 = puVar59;
        }
        else {
          local_50 = local_50 + 1;
          local_250[lVar40 * 2] = (ulong)puVar59;
          local_250[lVar40 * 2 + 1] = 1;
          local_2d8[uVar46] = local_250 + lVar40 * 2;
          puVar35 = (ulong *)*puVar51;
        }
        lVar40 = local_50;
        if (puVar50 == puVar35) {
          local_2d8[local_258] = puVar51;
          uVar46 = puVar51[1];
        }
        else {
          local_50 = local_50 + 1;
          local_250[lVar40 * 2] = (ulong)puVar50;
          local_250[lVar40 * 2 + 1] = 1;
          local_2d8[local_258] = local_250 + lVar40 * 2;
          uVar46 = puVar51[1] - 1;
        }
        puVar51[1] = uVar46;
        if ((uVar46 == 0) && (puVar38 = (undefined8 *)*puVar51, puVar38 != (undefined8 *)0x0)) {
          pvVar2 = (void *)puVar38[4];
          lVar40 = puVar38[3];
          if (pvVar2 != (void *)0x0) {
            if ((ulong)(lVar40 * 0x50) < 0x1c00000) {
              embree::alignedFree(pvVar2);
            }
            else {
              embree::os_free(pvVar2,lVar40 * 0x50,*(bool *)(puVar38 + 1));
            }
          }
          if (lVar40 != 0) {
            (*(code *)**(undefined8 **)*puVar38)((undefined8 *)*puVar38,lVar40 * -0x50,1);
          }
          operator_delete(puVar38,0x28);
        }
        *(float *)((long)local_1138 + lVar45 + -4) = fVar107;
        *(undefined8 *)(local_11c8 + lVar45) = local_1e58._0_8_;
        *(undefined8 *)(local_11c8 + lVar45 + 8) = local_1e58._8_8_;
        *(undefined8 *)(local_11b8 + lVar45) = local_1e48._0_8_;
        *(undefined8 *)(local_11b8 + lVar45 + 8) = local_1e48._8_8_;
        (&local_11a8)[uVar42 * 0x1e] = local_1e38;
        (&uStack_11a0)[uVar42 * 0x1e] = uStack_1e30;
        local_1198[uVar42 * 0x1e] = (ulong)local_1e28;
        local_1198[uVar42 * 0x1e + 1] = uStack_1e20;
        *(undefined8 *)((SetMB *)&local_11d8 + lVar45) = local_1e78._0_8_;
        local_1158[uVar42 * 0x1e] = local_1df0;
        local_1198[uVar42 * 0x1e + 2] = (ulong)local_1e18;
        *(float **)(local_1178 + lVar45 + -8) = pfStack_1e10;
        *(undefined1 **)(local_1178 + lVar45) = local_1e08;
        *(ulong *)(local_1178 + lVar45 + 8) = uStack_1e00;
        local_1168[uVar42 * 0x1e] = local_1858;
        local_1168[uVar42 * 0x1e + 1] = pfStack_1850;
        local_1158[uVar42 * 0x1e + 1] = local_1d78;
        *(undefined4 *)(&stack0xffffffffffffeeb8 + uVar42 * 0x1e) = local_1ce4;
        (&uStack_1144)[uVar42 * 0x3c] = local_1ce0;
        *(undefined4 *)(local_1138 + uVar42 * 0x1e + -1) = local_1e68._0_4_;
        local_1128[uVar42 * 0x3c] = (float)auVar53;
        local_1138[uVar42 * 0x1e] = (ulong)puVar59;
        local_1128[uVar42 * 0x3c + 1] = fVar78;
        local_1118[uVar42 * 0x1e] = uVar18;
        local_1128[uVar42 * 0x3c + 2] = (float)local_1810;
        auVar70._8_8_ = pfStack_1760;
        auVar70._0_8_ = local_1768;
        *(undefined8 *)(local_1108 + lVar45) = uVar37;
        *(undefined8 *)(local_1108 + lVar45 + 8) = uVar11;
        *(undefined4 *)((long)local_1118 + lVar45 + -4) = uVar15;
        *(undefined8 *)((long)&local_10f8 + uVar42 * 0x3c * 4) = uVar12;
        *(undefined8 *)((long)&uStack_10f0 + uVar42 * 0x1e * 8) = uVar13;
        lVar45 = local_258 * 0xf0;
        *(float **)(local_11c8 + lVar45) = local_1dd8;
        *(float **)(local_11c8 + lVar45 + 8) = pfStack_1dd0;
        *(ulong *)((SetMB *)&local_11d8 + lVar45) = local_1de8;
        *(undefined1 **)(local_11b8 + lVar45) = local_1dc8;
        *(ulong *)(local_11b8 + lVar45 + 8) = uStack_1dc0;
        local_1158[local_258 * 0x1e] = uVar57;
        (&local_11a8)[local_258 * 0x1e] = local_1db8;
        (&uStack_11a0)[local_258 * 0x1e] = pfStack_1db0;
        *(undefined1 **)(local_1178 + lVar45) = puVar29;
        *(ulong *)(local_1178 + lVar45 + 8) = uVar34;
        local_1198[local_258 * 0x1e] = (ulong)puVar28;
        local_1198[local_258 * 0x1e + 1] = uVar39;
        local_1158[local_258 * 0x1e + 1] = uVar58;
        local_1198[local_258 * 0x1e + 2] = (ulong)pfVar36;
        *(float **)(local_1178 + lVar45 + -8) = pfVar47;
        *(undefined1 (*) [16])(local_1168 + local_258 * 0x1e) = auVar70;
        *(undefined4 *)(&stack0xffffffffffffeeb8 + local_258 * 0x1e) = local_1cdc;
        local_1128[local_258 * 0x3c + 1] = fVar106;
        local_1138[local_258 * 0x1e] = (ulong)puVar50;
        local_1128[local_258 * 0x3c + 2] = (float)local_1720;
        *(undefined4 *)((long)local_1118 + lVar45 + -4) = uVar17;
        local_1118[local_258 * 0x1e] = uVar19;
        (&uStack_1144)[local_258 * 0x3c] = local_1c98;
        *(float *)(local_1138 + local_258 * 0x1e + -1) = fVar84;
        *(float *)((long)local_1138 + lVar45 + -4) = fVar63;
        local_1128[local_258 * 0x3c] = (float)auVar16;
        *(undefined4 *)(local_1108 + lVar45) = uVar20;
        *(undefined4 *)(local_1108 + lVar45 + 4) = uVar21;
        *(undefined4 *)(local_1108 + lVar45 + 8) = uVar22;
        *(undefined4 *)(local_1108 + lVar45 + 0xc) = uVar23;
        *(undefined4 *)((long)&local_10f8 + local_258 * 0x3c * 4) = uVar24;
        *(undefined4 *)((long)&local_10f8 + lVar45 + 4U) = uVar25;
        *(undefined4 *)((long)&uStack_10f0 + local_258 * 0x1e * 8) = uVar26;
        auStack_10ec[local_258 * 0x3c] = uVar27;
        local_258 = local_258 + 1;
        if (*param_1 <= local_258) {
          if (local_258 != 0) break;
          goto LAB_00111887;
        }
        bVar55 = false;
        if (local_258 == 0) goto LAB_00111887;
      }
      uVar46 = 0;
      puVar38 = &local_1140;
      do {
        if (*(float *)(param_3 + 0x13) < (float)*puVar38) {
          bVar14 = true;
        }
        else {
          bVar14 = (bool)(bVar14 | (float)((ulong)*puVar38 >> 0x20) <
                                   *(float *)((long)param_3 + 0x9c));
        }
        puVar38 = puVar38 + 0x1e;
        uVar46 = uVar46 + 1;
      } while (uVar46 != local_258);
LAB_00111887:
      pfVar36 = (float *)*in_stack_00000010;
      auVar70 = _local_1cc8;
      auVar75 = _local_1cc8;
      if (bVar14) {
        local_1b48 = (float *)0x100;
        if (in_stack_00000008 != *(FastAllocator **)(pfVar36 + 2)) {
          embree::MutexSys::lock();
          if (*(long *)(pfVar36 + 2) != 0) {
            LOCK();
            *(long *)(*(long *)(pfVar36 + 2) + 0x118) =
                 *(long *)(*(long *)(pfVar36 + 2) + 0x118) +
                 *(long *)(pfVar36 + 0x2a) + *(long *)(pfVar36 + 0x1a);
            UNLOCK();
            LOCK();
            *(long *)(*(long *)(pfVar36 + 2) + 0x120) =
                 *(long *)(*(long *)(pfVar36 + 2) + 0x120) +
                 (((*(long *)(pfVar36 + 0x26) + *(long *)(pfVar36 + 0x16)) -
                  *(long *)(pfVar36 + 0x14)) - *(long *)(pfVar36 + 0x24));
            UNLOCK();
            LOCK();
            *(long *)(*(long *)(pfVar36 + 2) + 0x128) =
                 *(long *)(*(long *)(pfVar36 + 2) + 0x128) +
                 *(long *)(pfVar36 + 0x2c) + *(long *)(pfVar36 + 0x1c);
            UNLOCK();
          }
          pfVar36[0x12] = 0.0;
          pfVar36[0x13] = 0.0;
          pfVar36[0x16] = 0.0;
          pfVar36[0x17] = 0.0;
          pfVar36[0x14] = 0.0;
          pfVar36[0x15] = 0.0;
          pfVar36[0x1a] = 0.0;
          pfVar36[0x1b] = 0.0;
          pfVar36[0x1c] = 0.0;
          pfVar36[0x1d] = 0.0;
          pfVar36[0x18] = 0.0;
          pfVar36[0x19] = 0.0;
          if (in_stack_00000008 == (FastAllocator *)0x0) {
            pfVar36[0x22] = 0.0;
            pfVar36[0x23] = 0.0;
            uVar37 = 0;
            pfVar36[0x26] = 0.0;
            pfVar36[0x27] = 0.0;
            pfVar36[0x24] = 0.0;
            pfVar36[0x25] = 0.0;
            pfVar36[0x2a] = 0.0;
            pfVar36[0x2b] = 0.0;
            pfVar36[0x2c] = 0.0;
            pfVar36[0x2d] = 0.0;
          }
          else {
            uVar37 = *(undefined8 *)(in_stack_00000008 + 0x10);
            pfVar36[0x22] = 0.0;
            pfVar36[0x23] = 0.0;
            pfVar36[0x26] = 0.0;
            pfVar36[0x27] = 0.0;
            *(undefined8 *)(pfVar36 + 0x18) = uVar37;
            pfVar36[0x24] = 0.0;
            pfVar36[0x25] = 0.0;
            pfVar36[0x2a] = 0.0;
            pfVar36[0x2b] = 0.0;
            pfVar36[0x2c] = 0.0;
            pfVar36[0x2d] = 0.0;
            pfVar36[0x28] = 0.0;
            pfVar36[0x29] = 0.0;
            uVar37 = *(undefined8 *)(in_stack_00000008 + 0x10);
          }
          *(undefined8 *)(pfVar36 + 0x28) = uVar37;
          LOCK();
          *(FastAllocator **)(pfVar36 + 2) = in_stack_00000008;
          UNLOCK();
          local_1ab8 = pfVar36;
          embree::MutexSys::lock();
          puVar51 = *(ulong **)(in_stack_00000008 + 0x138);
          if (puVar51 == *(ulong **)(in_stack_00000008 + 0x140)) {
            std::
            vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
            ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                      ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                        *)(in_stack_00000008 + 0x130),puVar51,&local_1ab8);
          }
          else {
            *puVar51 = (ulong)pfVar36;
            *(long *)(in_stack_00000008 + 0x138) = *(long *)(in_stack_00000008 + 0x138) + 8;
          }
          embree::MutexSys::unlock();
          embree::MutexSys::unlock();
        }
        in_stack_00000010[5] = in_stack_00000010[5] + 0x100;
        uVar42 = in_stack_00000010[2];
        uVar39 = (ulong)(-(int)uVar42 & 0xf);
        uVar46 = uVar42 + 0x100 + uVar39;
        in_stack_00000010[2] = uVar46;
        if (in_stack_00000010[3] < uVar46) {
          in_stack_00000010[2] = uVar42;
          if ((float *)in_stack_00000010[4] < (float *)0x400) {
            puVar38 = (undefined8 *)
                      FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1b48,0x40,false);
          }
          else {
            local_1ab8 = (float *)in_stack_00000010[4];
            puVar38 = (undefined8 *)
                      FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1ab8,0x40,true);
            in_stack_00000010[1] = (ulong)puVar38;
            uVar46 = in_stack_00000010[2];
            in_stack_00000010[2] = 0x100;
            in_stack_00000010[6] = (in_stack_00000010[3] + in_stack_00000010[6]) - uVar46;
            in_stack_00000010[3] = (ulong)local_1ab8;
            if (local_1ab8 < (float *)0x100) {
              local_1ab8 = (float *)in_stack_00000010[4];
              in_stack_00000010[2] = 0;
              puVar38 = (undefined8 *)
                        FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1ab8,0x40,false);
              in_stack_00000010[1] = (ulong)puVar38;
              uVar46 = in_stack_00000010[2];
              in_stack_00000010[2] = 0x100;
              in_stack_00000010[6] = (in_stack_00000010[3] + in_stack_00000010[6]) - uVar46;
              in_stack_00000010[3] = (ulong)local_1ab8;
              if (local_1ab8 < (float *)0x100) {
                puVar38 = (undefined8 *)0x0;
                in_stack_00000010[2] = 0;
              }
            }
          }
        }
        else {
          in_stack_00000010[6] = in_stack_00000010[6] + uVar39;
          puVar38 = (undefined8 *)((in_stack_00000010[1] - 0x100) + uVar46);
        }
        uVar37 = CONCAT44(fVar67,fVar67);
        uVar11 = CONCAT44(fVar67,fVar67);
        *puVar38 = 8;
        puVar38[1] = 8;
        puVar38[0x1c] = local_1cc8;
        puVar38[0x1d] = uStack_1cc0;
        puVar38[0xc] = local_1cc8;
        puVar38[0xd] = uStack_1cc0;
        puVar38[8] = local_1cc8;
        puVar38[9] = uStack_1cc0;
        puVar38[4] = local_1cc8;
        puVar38[5] = uStack_1cc0;
        puVar38[2] = 8;
        puVar38[3] = 8;
        puVar38[0x1e] = uVar37;
        puVar38[0x1f] = uVar11;
        puVar38[0xe] = uVar37;
        puVar38[0xf] = uVar11;
        puVar38[10] = uVar37;
        puVar38[0xb] = uVar11;
        puVar38[6] = uVar37;
        puVar38[7] = uVar11;
        *(undefined1 (*) [16])(puVar38 + 0x18) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x14) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x1a) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x16) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x12) = (undefined1  [16])0x0;
        uVar46 = (ulong)puVar38 | 6;
        if (local_258 != 0) {
LAB_0011242a:
          puVar51 = &local_17d8;
          uVar42 = 0;
          auVar72._4_4_ = fVar67;
          auVar72._0_4_ = fVar67;
          auVar72._8_4_ = fVar67;
          auVar72._12_4_ = fVar67;
          puVar50 = puVar51;
          pSVar32 = (SetMB *)&local_11d8;
          auVar108 = auVar72;
          do {
            uVar42 = uVar42 + 1;
            createLargeLeaf((BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
                             *)&local_1ab8,param_1,pSVar32);
            uVar1 = _LC36;
            uVar52 = _LC6;
            fVar63 = _LC43;
            uVar15 = _LC40;
            fVar84 = _LC35;
            fVar107 = _LC3;
            puVar50[2] = (ulong)local_1aa8;
            puVar50[3] = uStack_1aa0;
            *puVar50 = (ulong)local_1ab8;
            puVar50[6] = (ulong)local_1a88;
            puVar50[7] = uStack_1a80;
            auVar80._8_8_ = uStack_1aa0;
            auVar80._0_8_ = local_1aa8;
            auVar75 = minps(auVar75,auVar80);
            puVar50[4] = (ulong)local_1a98;
            puVar50[5] = (ulong)pfStack_1a90;
            auVar105._8_8_ = pfStack_1a70;
            auVar105._0_8_ = local_1a78;
            auVar89._8_8_ = pfStack_1a90;
            auVar89._0_8_ = local_1a98;
            auVar72 = maxps(auVar72,auVar89);
            *(undefined4 *)(puVar50 + 10) = (undefined4)local_1a68;
            auVar100._8_8_ = uStack_1a80;
            auVar100._0_8_ = local_1a88;
            auVar70 = minps(auVar70,auVar100);
            *(undefined1 (*) [16])(puVar50 + 8) = auVar105;
            auVar108 = maxps(auVar108,auVar105);
            *(undefined4 *)((long)puVar50 + 0x54) = local_1a68._4_4_;
            puVar50 = puVar50 + 0xc;
            pSVar32 = pSVar32 + 0xf0;
          } while (uVar42 < local_258);
          if (((uint)uVar46 & 0xf) == 1) {
            if (local_258 != 0) {
              uVar39 = uVar46 & 0xfffffffffffffff0;
              auVar68._4_4_ = _LC38;
              auVar68._0_4_ = _LC38;
              auVar68._8_4_ = _LC38;
              auVar68._12_4_ = _LC38;
              uVar42 = uVar39;
              do {
                fVar84 = *(float *)(puVar51 + 10);
                fVar78 = *(float *)((long)puVar51 + 0x54);
                *(ulong *)(uVar42 * 2 - uVar39) = *puVar51;
                uVar34 = uVar42 + 4;
                fVar106 = fVar107 / (fVar78 - fVar84);
                fVar78 = (float)((uint)fVar84 ^ uVar1) * fVar106;
                fVar106 = (fVar107 - fVar84) * fVar106;
                fVar103 = fVar107 - fVar78;
                fVar84 = fVar107 - fVar106;
                auVar99._0_4_ = *(float *)(puVar51 + 8) * fVar78 + *(float *)(puVar51 + 4) * fVar103
                ;
                auVar99._4_4_ =
                     *(float *)((long)puVar51 + 0x44) * fVar78 +
                     *(float *)((long)puVar51 + 0x24) * fVar103;
                auVar99._8_4_ = *(float *)(puVar51 + 9) * fVar78 + *(float *)(puVar51 + 5) * fVar103
                ;
                auVar99._12_4_ =
                     *(float *)((long)puVar51 + 0x4c) * fVar78 +
                     *(float *)((long)puVar51 + 0x2c) * fVar103;
                auVar88._0_4_ = fVar78 * *(float *)(puVar51 + 6) + fVar103 * *(float *)(puVar51 + 2)
                ;
                auVar88._4_4_ =
                     fVar78 * *(float *)((long)puVar51 + 0x34) +
                     fVar103 * *(float *)((long)puVar51 + 0x14);
                auVar88._8_4_ = fVar78 * *(float *)(puVar51 + 7) + fVar103 * *(float *)(puVar51 + 3)
                ;
                auVar88._12_4_ =
                     fVar78 * *(float *)((long)puVar51 + 0x3c) +
                     fVar103 * *(float *)((long)puVar51 + 0x1c);
                auVar100 = maxps(auVar99,auVar68);
                auVar5._4_4_ = uVar15;
                auVar5._0_4_ = uVar15;
                auVar5._8_4_ = uVar15;
                auVar5._12_4_ = uVar15;
                auVar89 = minps(auVar88,auVar5);
                auVar104._0_4_ =
                     *(float *)(puVar51 + 8) * fVar106 + *(float *)(puVar51 + 4) * fVar84;
                auVar104._4_4_ =
                     *(float *)((long)puVar51 + 0x44) * fVar106 +
                     *(float *)((long)puVar51 + 0x24) * fVar84;
                auVar104._8_4_ =
                     *(float *)(puVar51 + 9) * fVar106 + *(float *)(puVar51 + 5) * fVar84;
                auVar104._12_4_ =
                     *(float *)((long)puVar51 + 0x4c) * fVar106 +
                     *(float *)((long)puVar51 + 0x2c) * fVar84;
                auVar79._0_4_ = fVar106 * *(float *)(puVar51 + 6) + fVar84 * *(float *)(puVar51 + 2)
                ;
                auVar79._4_4_ =
                     fVar106 * *(float *)((long)puVar51 + 0x34) +
                     fVar84 * *(float *)((long)puVar51 + 0x14);
                auVar79._8_4_ = fVar106 * *(float *)(puVar51 + 7) + fVar84 * *(float *)(puVar51 + 3)
                ;
                auVar79._12_4_ =
                     fVar106 * *(float *)((long)puVar51 + 0x3c) +
                     fVar84 * *(float *)((long)puVar51 + 0x1c);
                auVar105 = maxps(auVar104,auVar68);
                auVar6._4_4_ = uVar15;
                auVar6._0_4_ = uVar15;
                auVar6._8_4_ = uVar15;
                auVar6._12_4_ = uVar15;
                auVar80 = minps(auVar79,auVar6);
                fVar84 = (float)((uint)auVar100._0_4_ & uVar52) * fVar63 + auVar100._0_4_;
                fVar78 = (float)((uint)auVar100._4_4_ & uVar52) * fVar63 + auVar100._4_4_;
                fVar106 = (float)((uint)auVar100._8_4_ & uVar52) * fVar63 + auVar100._8_4_;
                *(float *)(uVar42 + 0x30) = fVar84;
                fVar103 = auVar89._0_4_ - (float)((uint)auVar89._0_4_ & uVar52) * fVar63;
                fVar91 = auVar89._4_4_ - (float)((uint)auVar89._4_4_ & uVar52) * fVar63;
                fVar93 = auVar89._8_4_ - (float)((uint)auVar89._8_4_ & uVar52) * fVar63;
                *(float *)(uVar42 + 0x20) = fVar103;
                *(float *)(uVar42 + 0x80) =
                     (auVar80._0_4_ - (float)((uint)auVar80._0_4_ & uVar52) * fVar63) - fVar103;
                *(float *)(uVar42 + 0x40) = fVar91;
                *(float *)(uVar42 + 0x60) = fVar93;
                *(float *)(uVar42 + 0x50) = fVar78;
                *(float *)(uVar42 + 0x70) = fVar106;
                *(float *)(uVar42 + 0xa0) =
                     (auVar80._4_4_ - (float)((uint)auVar80._4_4_ & uVar52) * fVar63) - fVar91;
                *(float *)(uVar42 + 0xc0) =
                     (auVar80._8_4_ - (float)((uint)auVar80._8_4_ & uVar52) * fVar63) - fVar93;
                *(float *)(uVar42 + 0x90) =
                     ((float)((uint)auVar105._0_4_ & uVar52) * fVar63 + auVar105._0_4_) - fVar84;
                *(float *)(uVar42 + 0xb0) =
                     ((float)((uint)auVar105._4_4_ & uVar52) * fVar63 + auVar105._4_4_) - fVar78;
                *(float *)(uVar42 + 0xd0) =
                     ((float)((uint)auVar105._8_4_ & uVar52) * fVar63 + auVar105._8_4_) - fVar106;
                uVar42 = uVar34;
                puVar51 = puVar51 + 0xc;
              } while (uVar39 + local_258 * 4 != uVar34);
            }
          }
          else if (local_258 != 0) {
            uVar39 = uVar46 & 0xfffffffffffffff0;
            auVar69._4_4_ = _LC38;
            auVar69._0_4_ = _LC38;
            auVar69._8_4_ = _LC38;
            auVar69._12_4_ = _LC38;
            uVar42 = uVar39;
            do {
              fVar78 = *(float *)((long)puVar51 + 0x54);
              fVar106 = *(float *)(puVar51 + 10);
              fVar103 = *(float *)(puVar51 + 8);
              fVar91 = *(float *)((long)puVar51 + 0x44);
              fVar93 = *(float *)(puVar51 + 9);
              fVar92 = *(float *)((long)puVar51 + 0x4c);
              *(ulong *)(uVar42 * 2 - uVar39) = *puVar51;
              *(float *)(uVar42 + 0xe0) = fVar106;
              fVar87 = fVar107 / (fVar78 - fVar106);
              fVar71 = (float)((uint)fVar106 ^ uVar1) * fVar87;
              fVar87 = (fVar107 - fVar106) * fVar87;
              fVar98 = fVar107 - fVar71;
              fVar106 = fVar107 - fVar87;
              auVar85._0_4_ = *(float *)(puVar51 + 4) * fVar98 + fVar103 * fVar71;
              auVar85._4_4_ = *(float *)((long)puVar51 + 0x24) * fVar98 + fVar91 * fVar71;
              auVar85._8_4_ = *(float *)(puVar51 + 5) * fVar98 + fVar93 * fVar71;
              auVar85._12_4_ = *(float *)((long)puVar51 + 0x2c) * fVar98 + fVar92 * fVar71;
              auVar83._0_4_ = fVar71 * *(float *)(puVar51 + 6) + fVar98 * *(float *)(puVar51 + 2);
              auVar83._4_4_ =
                   fVar71 * *(float *)((long)puVar51 + 0x34) +
                   fVar98 * *(float *)((long)puVar51 + 0x14);
              auVar83._8_4_ = fVar71 * *(float *)(puVar51 + 7) + fVar98 * *(float *)(puVar51 + 3);
              auVar83._12_4_ =
                   fVar71 * *(float *)((long)puVar51 + 0x3c) +
                   fVar98 * *(float *)((long)puVar51 + 0x1c);
              auVar100 = maxps(auVar85,auVar69);
              auVar7._4_4_ = uVar15;
              auVar7._0_4_ = uVar15;
              auVar7._8_4_ = uVar15;
              auVar7._12_4_ = uVar15;
              auVar89 = minps(auVar83,auVar7);
              auVar101._0_4_ = *(float *)(puVar51 + 4) * fVar106 + *(float *)(puVar51 + 8) * fVar87;
              auVar101._4_4_ =
                   *(float *)((long)puVar51 + 0x24) * fVar106 +
                   *(float *)((long)puVar51 + 0x44) * fVar87;
              auVar101._8_4_ = *(float *)(puVar51 + 5) * fVar106 + *(float *)(puVar51 + 9) * fVar87;
              auVar101._12_4_ =
                   *(float *)((long)puVar51 + 0x2c) * fVar106 +
                   *(float *)((long)puVar51 + 0x4c) * fVar87;
              auVar74._0_4_ = fVar87 * *(float *)(puVar51 + 6) + fVar106 * *(float *)(puVar51 + 2);
              auVar74._4_4_ =
                   fVar87 * *(float *)((long)puVar51 + 0x34) +
                   fVar106 * *(float *)((long)puVar51 + 0x14);
              auVar74._8_4_ = fVar87 * *(float *)(puVar51 + 7) + fVar106 * *(float *)(puVar51 + 3);
              auVar74._12_4_ =
                   fVar87 * *(float *)((long)puVar51 + 0x3c) +
                   fVar106 * *(float *)((long)puVar51 + 0x1c);
              auVar105 = maxps(auVar101,auVar69);
              auVar8._4_4_ = uVar15;
              auVar8._0_4_ = uVar15;
              auVar8._8_4_ = uVar15;
              auVar8._12_4_ = uVar15;
              auVar80 = minps(auVar74,auVar8);
              fVar93 = (float)((uint)auVar100._0_4_ & uVar52) * fVar63 + auVar100._0_4_;
              fVar92 = (float)((uint)auVar100._4_4_ & uVar52) * fVar63 + auVar100._4_4_;
              fVar71 = (float)((uint)auVar100._8_4_ & uVar52) * fVar63 + auVar100._8_4_;
              *(float *)(uVar42 + 0x30) = fVar93;
              fVar106 = auVar89._0_4_ - (float)((uint)auVar89._0_4_ & uVar52) * fVar63;
              fVar103 = auVar89._4_4_ - (float)((uint)auVar89._4_4_ & uVar52) * fVar63;
              fVar91 = auVar89._8_4_ - (float)((uint)auVar89._8_4_ & uVar52) * fVar63;
              *(float *)(uVar42 + 0x20) = fVar106;
              *(float *)(uVar42 + 0x80) =
                   (auVar80._0_4_ - (float)((uint)auVar80._0_4_ & uVar52) * fVar63) - fVar106;
              *(float *)(uVar42 + 0x40) = fVar103;
              *(float *)(uVar42 + 0x60) = fVar91;
              *(float *)(uVar42 + 0x50) = fVar92;
              *(float *)(uVar42 + 0xa0) =
                   (auVar80._4_4_ - (float)((uint)auVar80._4_4_ & uVar52) * fVar63) - fVar103;
              *(float *)(uVar42 + 0xc0) =
                   (auVar80._8_4_ - (float)((uint)auVar80._8_4_ & uVar52) * fVar63) - fVar91;
              *(float *)(uVar42 + 0x70) = fVar71;
              *(float *)(uVar42 + 0x90) =
                   ((float)((uint)auVar105._0_4_ & uVar52) * fVar63 + auVar105._0_4_) - fVar93;
              *(float *)(uVar42 + 0xb0) =
                   ((float)((uint)auVar105._4_4_ & uVar52) * fVar63 + auVar105._4_4_) - fVar92;
              *(float *)(uVar42 + 0xd0) =
                   ((float)((uint)auVar105._8_4_ & uVar52) * fVar63 + auVar105._8_4_) - fVar71;
              if (fVar78 == fVar107) {
                fVar78 = fVar84;
              }
              *(float *)(uVar42 + 0xf0) = fVar78;
              uVar42 = uVar42 + 4;
              puVar51 = puVar51 + 0xc;
            } while (uVar39 + local_258 * 4 != uVar42);
          }
          if (!bVar14) goto LAB_001133e0;
        }
        local_1c08 = (ulong *)local_19a8;
        local_1aa8 = (undefined1 *)CONCAT44(fVar67,fVar67);
        uStack_1aa0 = CONCAT44(fVar67,fVar67);
        local_1c00 = (float *)(param_1 + 0xb);
        local_1ab8 = (float *)local_1cc8;
        pfStack_1ab0 = uStack_1cc0;
        local_1a98 = (float *)local_1cc8;
        pfStack_1a90 = uStack_1cc0;
        local_1a88 = local_1aa8;
        uStack_1a80 = uStack_1aa0;
        if ((ulong)((long)pfStack_1940 - (long)local_1948) < 0xc00) {
          local_1bd8 = local_1948;
          pfStack_1bd0 = pfStack_1940;
          const::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                    ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1b48,
                     (range *)&local_1c08);
        }
        else {
          parallel_reduce_internal<unsigned_long,embree::LBBox<embree::Vec3fa>,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::range<unsigned_long>const&)_1_,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::LBBox<embree::Vec3fa>const&,embree::LBBox<embree::Vec3fa>const&)_2_>
                    ((ulong)&local_1b48,((long)pfStack_1940 - (long)local_1948) + 0x3ffU >> 10,
                     (ulong)local_1948,(ulong)pfStack_1940,(LBBox_conflict *)0x400,
                     (_lambda_embree__range<unsigned_long>_const___1_ *)&local_1ab8,
                     (_lambda_embree__LBBox<embree::Vec3fa>_const__embree__LBBox<embree::Vec3fa>_const___2_
                      *)&local_1c08);
        }
        *(float **)(this + 0x10) = local_1b48;
        *(float **)(this + 0x18) = pfStack_1b40;
        *(ulong *)this = uVar46;
        *(undefined1 **)(this + 0x20) = local_1b38;
        *(ulong *)(this + 0x28) = uStack_1b30;
        *(ulong *)(this + 0x50) = local_1920;
        *(float **)(this + 0x30) = local_1b28;
        *(float **)(this + 0x38) = pfStack_1b20;
        *(undefined1 **)(this + 0x40) = local_1b18;
        *(ulong *)(this + 0x48) = uStack_1b10;
      }
      else {
        local_1b48 = (float *)0xe0;
        if (in_stack_00000008 != *(FastAllocator **)(pfVar36 + 2)) {
          embree::MutexSys::lock();
          if (*(long *)(pfVar36 + 2) != 0) {
            LOCK();
            *(long *)(*(long *)(pfVar36 + 2) + 0x118) =
                 *(long *)(*(long *)(pfVar36 + 2) + 0x118) +
                 *(long *)(pfVar36 + 0x2a) + *(long *)(pfVar36 + 0x1a);
            UNLOCK();
            LOCK();
            *(long *)(*(long *)(pfVar36 + 2) + 0x120) =
                 *(long *)(*(long *)(pfVar36 + 2) + 0x120) +
                 (((*(long *)(pfVar36 + 0x26) + *(long *)(pfVar36 + 0x16)) -
                  *(long *)(pfVar36 + 0x14)) - *(long *)(pfVar36 + 0x24));
            UNLOCK();
            LOCK();
            *(long *)(*(long *)(pfVar36 + 2) + 0x128) =
                 *(long *)(*(long *)(pfVar36 + 2) + 0x128) +
                 *(long *)(pfVar36 + 0x2c) + *(long *)(pfVar36 + 0x1c);
            UNLOCK();
          }
          pfVar36[0x12] = 0.0;
          pfVar36[0x13] = 0.0;
          pfVar36[0x16] = 0.0;
          pfVar36[0x17] = 0.0;
          pfVar36[0x14] = 0.0;
          pfVar36[0x15] = 0.0;
          pfVar36[0x1a] = 0.0;
          pfVar36[0x1b] = 0.0;
          pfVar36[0x1c] = 0.0;
          pfVar36[0x1d] = 0.0;
          pfVar36[0x18] = 0.0;
          pfVar36[0x19] = 0.0;
          if (in_stack_00000008 == (FastAllocator *)0x0) {
            pfVar36[0x22] = 0.0;
            pfVar36[0x23] = 0.0;
            uVar37 = 0;
            pfVar36[0x26] = 0.0;
            pfVar36[0x27] = 0.0;
            pfVar36[0x24] = 0.0;
            pfVar36[0x25] = 0.0;
            pfVar36[0x2a] = 0.0;
            pfVar36[0x2b] = 0.0;
            pfVar36[0x2c] = 0.0;
            pfVar36[0x2d] = 0.0;
          }
          else {
            uVar37 = *(undefined8 *)(in_stack_00000008 + 0x10);
            pfVar36[0x22] = 0.0;
            pfVar36[0x23] = 0.0;
            pfVar36[0x26] = 0.0;
            pfVar36[0x27] = 0.0;
            *(undefined8 *)(pfVar36 + 0x18) = uVar37;
            pfVar36[0x24] = 0.0;
            pfVar36[0x25] = 0.0;
            pfVar36[0x2a] = 0.0;
            pfVar36[0x2b] = 0.0;
            pfVar36[0x2c] = 0.0;
            pfVar36[0x2d] = 0.0;
            pfVar36[0x28] = 0.0;
            pfVar36[0x29] = 0.0;
            uVar37 = *(undefined8 *)(in_stack_00000008 + 0x10);
          }
          *(undefined8 *)(pfVar36 + 0x28) = uVar37;
          LOCK();
          *(FastAllocator **)(pfVar36 + 2) = in_stack_00000008;
          UNLOCK();
          local_1ab8 = pfVar36;
          embree::MutexSys::lock();
          puVar51 = *(ulong **)(in_stack_00000008 + 0x138);
          if (puVar51 == *(ulong **)(in_stack_00000008 + 0x140)) {
            std::
            vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
            ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                      ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                        *)(in_stack_00000008 + 0x130),puVar51,&local_1ab8);
          }
          else {
            *puVar51 = (ulong)pfVar36;
            *(long *)(in_stack_00000008 + 0x138) = *(long *)(in_stack_00000008 + 0x138) + 8;
          }
          embree::MutexSys::unlock();
          embree::MutexSys::unlock();
        }
        in_stack_00000010[5] = in_stack_00000010[5] + 0xe0;
        uVar42 = in_stack_00000010[2];
        uVar39 = (ulong)(-(int)uVar42 & 0xf);
        uVar46 = uVar42 + 0xe0 + uVar39;
        in_stack_00000010[2] = uVar46;
        if (in_stack_00000010[3] < uVar46) {
          in_stack_00000010[2] = uVar42;
          if ((float *)in_stack_00000010[4] < (float *)0x380) {
            puVar38 = (undefined8 *)
                      FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1b48,0x40,false);
          }
          else {
            local_1ab8 = (float *)in_stack_00000010[4];
            puVar38 = (undefined8 *)
                      FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1ab8,0x40,true);
            in_stack_00000010[1] = (ulong)puVar38;
            uVar46 = in_stack_00000010[2];
            in_stack_00000010[2] = 0xe0;
            in_stack_00000010[6] = (in_stack_00000010[3] + in_stack_00000010[6]) - uVar46;
            in_stack_00000010[3] = (ulong)local_1ab8;
            if (local_1ab8 < (float *)0xe0) {
              local_1ab8 = (float *)in_stack_00000010[4];
              in_stack_00000010[2] = 0;
              puVar38 = (undefined8 *)
                        FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1ab8,0x40,false);
              in_stack_00000010[1] = (ulong)puVar38;
              uVar46 = in_stack_00000010[2];
              in_stack_00000010[2] = 0xe0;
              in_stack_00000010[6] = (in_stack_00000010[3] + in_stack_00000010[6]) - uVar46;
              in_stack_00000010[3] = (ulong)local_1ab8;
              if (local_1ab8 < (float *)0xe0) {
                puVar38 = (undefined8 *)0x0;
                in_stack_00000010[2] = 0;
              }
            }
          }
        }
        else {
          in_stack_00000010[6] = in_stack_00000010[6] + uVar39;
          puVar38 = (undefined8 *)((in_stack_00000010[1] - 0xe0) + uVar46);
        }
        *puVar38 = 8;
        puVar38[1] = 8;
        puVar38[0xc] = local_1cc8;
        puVar38[0xd] = uStack_1cc0;
        puVar38[8] = local_1cc8;
        puVar38[9] = uStack_1cc0;
        puVar38[4] = local_1cc8;
        puVar38[5] = uStack_1cc0;
        uVar37 = CONCAT44(fVar67,fVar67);
        uVar11 = CONCAT44(fVar67,fVar67);
        puVar38[2] = 8;
        puVar38[0xe] = uVar37;
        puVar38[0xf] = uVar11;
        puVar38[10] = uVar37;
        puVar38[0xb] = uVar11;
        puVar38[6] = uVar37;
        puVar38[7] = uVar11;
        puVar38[3] = 8;
        *(undefined1 (*) [16])(puVar38 + 0x18) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x14) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x1a) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x16) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar38 + 0x12) = (undefined1  [16])0x0;
        uVar46 = (ulong)puVar38 | 1;
        if (local_258 != 0) goto LAB_0011242a;
        auVar72._4_4_ = fVar67;
        auVar72._0_4_ = fVar67;
        auVar72._8_4_ = fVar67;
        auVar72._12_4_ = fVar67;
        auVar108 = auVar72;
LAB_001133e0:
        *(ulong *)this = uVar46;
        *(ulong *)(this + 0x50) = local_1920;
        *(undefined1 (*) [16])(this + 0x10) = auVar75;
        *(undefined1 (*) [16])(this + 0x20) = auVar72;
        *(undefined1 (*) [16])(this + 0x30) = auVar70;
        *(undefined1 (*) [16])(this + 0x40) = auVar108;
      }
      uVar46 = 0;
      if (local_258 != 0) {
        do {
          puVar50 = local_2d8[uVar46];
          puVar51 = puVar50 + 1;
          *puVar51 = *puVar51 - 1;
          if ((*puVar51 == 0) && (puVar38 = (undefined8 *)*puVar50, puVar38 != (undefined8 *)0x0)) {
            pvVar2 = (void *)puVar38[4];
            lVar45 = puVar38[3];
            if (pvVar2 != (void *)0x0) {
              if ((ulong)(lVar45 * 0x50) < 0x1c00000) {
                embree::alignedFree(pvVar2);
              }
              else {
                embree::os_free(pvVar2,lVar45 * 0x50,*(bool *)(puVar38 + 1));
              }
            }
            if (lVar45 != 0) {
              (*(code *)**(undefined8 **)*puVar38)((undefined8 *)*puVar38,lVar45 * -0x50,1);
            }
            operator_delete(puVar38,0x28);
          }
          uVar46 = uVar46 + 1;
        } while (uVar46 < local_258);
      }
      goto LAB_00113398;
    }
    uVar42 = (long)pfStack_1940 - (long)pfVar36;
    bVar55 = uVar42 <= param_1[4] && uStack_11cc < 2;
    if (uVar42 > param_1[4] || uStack_11cc >= 2) goto LAB_00110ad8;
  }
  else {
    uVar42 = (long)pfStack_1940 - (long)pfVar36;
    bVar55 = uVar42 <= param_1[4] && uStack_11cc < 2;
    if (uVar42 > param_1[4] || uStack_11cc >= 2) goto LAB_00110ad8;
  }
  uVar46 = uVar42 + 3 >> 2;
  pfVar47 = (float *)(((uVar42 + 3 & 0xfffffffffffffffc) + uVar46) * 0x10);
  local_1e78._0_8_ = 7;
  if (uVar46 < 8) {
    local_1e78._0_8_ = uVar46;
  }
  local_1e78._0_8_ = local_1e78._0_8_ + 8;
LAB_00112ab2:
  pfVar3 = (float *)*in_stack_00000018;
  local_1b48 = pfVar47;
  if (in_stack_00000008 != *(FastAllocator **)(pfVar3 + 2)) {
    embree::MutexSys::lock();
    if (*(long *)(pfVar3 + 2) != 0) {
      LOCK();
      *(long *)(*(long *)(pfVar3 + 2) + 0x118) =
           *(long *)(*(long *)(pfVar3 + 2) + 0x118) +
           *(long *)(pfVar3 + 0x2a) + *(long *)(pfVar3 + 0x1a);
      UNLOCK();
      LOCK();
      *(long *)(*(long *)(pfVar3 + 2) + 0x120) =
           *(long *)(*(long *)(pfVar3 + 2) + 0x120) +
           (((*(long *)(pfVar3 + 0x26) + *(long *)(pfVar3 + 0x16)) - *(long *)(pfVar3 + 0x14)) -
           *(long *)(pfVar3 + 0x24));
      UNLOCK();
      LOCK();
      *(long *)(*(long *)(pfVar3 + 2) + 0x128) =
           *(long *)(*(long *)(pfVar3 + 2) + 0x128) +
           *(long *)(pfVar3 + 0x2c) + *(long *)(pfVar3 + 0x1c);
      UNLOCK();
    }
    pfVar3[0x12] = 0.0;
    pfVar3[0x13] = 0.0;
    pfVar3[0x16] = 0.0;
    pfVar3[0x17] = 0.0;
    pfVar3[0x14] = 0.0;
    pfVar3[0x15] = 0.0;
    pfVar3[0x1a] = 0.0;
    pfVar3[0x1b] = 0.0;
    pfVar3[0x1c] = 0.0;
    pfVar3[0x1d] = 0.0;
    pfVar3[0x18] = 0.0;
    pfVar3[0x19] = 0.0;
    if (in_stack_00000008 == (FastAllocator *)0x0) {
      pfVar3[0x22] = 0.0;
      pfVar3[0x23] = 0.0;
      uVar37 = 0;
      pfVar3[0x26] = 0.0;
      pfVar3[0x27] = 0.0;
      pfVar3[0x24] = 0.0;
      pfVar3[0x25] = 0.0;
      pfVar3[0x2a] = 0.0;
      pfVar3[0x2b] = 0.0;
      pfVar3[0x2c] = 0.0;
      pfVar3[0x2d] = 0.0;
    }
    else {
      uVar37 = *(undefined8 *)(in_stack_00000008 + 0x10);
      pfVar3[0x22] = 0.0;
      pfVar3[0x23] = 0.0;
      pfVar3[0x26] = 0.0;
      pfVar3[0x27] = 0.0;
      *(undefined8 *)(pfVar3 + 0x18) = uVar37;
      pfVar3[0x24] = 0.0;
      pfVar3[0x25] = 0.0;
      pfVar3[0x2a] = 0.0;
      pfVar3[0x2b] = 0.0;
      pfVar3[0x2c] = 0.0;
      pfVar3[0x2d] = 0.0;
      pfVar3[0x28] = 0.0;
      pfVar3[0x29] = 0.0;
      uVar37 = *(undefined8 *)(in_stack_00000008 + 0x10);
    }
    *(undefined8 *)(pfVar3 + 0x28) = uVar37;
    LOCK();
    *(FastAllocator **)(pfVar3 + 2) = in_stack_00000008;
    UNLOCK();
    local_1ab8 = pfVar3;
    embree::MutexSys::lock();
    puVar51 = *(ulong **)(in_stack_00000008 + 0x138);
    if (puVar51 == *(ulong **)(in_stack_00000008 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(in_stack_00000008 + 0x130),puVar51,&local_1ab8);
    }
    else {
      *puVar51 = (ulong)pfVar3;
      *(long *)(in_stack_00000008 + 0x138) = *(long *)(in_stack_00000008 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar39 = in_stack_00000018[2];
  in_stack_00000018[5] = in_stack_00000018[5] + (long)pfVar47;
  uVar34 = (ulong)(-(int)uVar39 & 0xf);
  lVar45 = uVar39 + uVar34;
  uVar42 = lVar45 + (long)pfVar47;
  in_stack_00000018[2] = uVar42;
  if (in_stack_00000018[3] < uVar42) {
    in_stack_00000018[2] = uVar39;
    if ((float *)in_stack_00000018[4] < (float *)(uVar46 * 0x140)) {
      uVar42 = FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1b48,0x40,false);
    }
    else {
      local_1ab8 = (float *)in_stack_00000018[4];
      uVar42 = FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1ab8,0x40,true);
      in_stack_00000018[1] = uVar42;
      in_stack_00000018[6] = (in_stack_00000018[3] + in_stack_00000018[6]) - in_stack_00000018[2];
      in_stack_00000018[2] = (ulong)pfVar47;
      in_stack_00000018[3] = (ulong)local_1ab8;
      if (local_1ab8 < pfVar47) {
        in_stack_00000018[2] = 0;
        local_1ab8 = (float *)in_stack_00000018[4];
        uVar42 = FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1ab8,0x40,false);
        in_stack_00000018[1] = uVar42;
        in_stack_00000018[6] = (in_stack_00000018[3] + in_stack_00000018[6]) - in_stack_00000018[2];
        in_stack_00000018[2] = (ulong)pfVar47;
        in_stack_00000018[3] = (ulong)local_1ab8;
        if (local_1ab8 < pfVar47) {
          uVar42 = 0;
          in_stack_00000018[2] = 0;
        }
      }
    }
  }
  else {
    in_stack_00000018[6] = in_stack_00000018[6] + uVar34;
    uVar42 = lVar45 + in_stack_00000018[1];
  }
  fVar67 = _LC8;
  uVar39 = local_1e78._0_8_ | uVar42;
  if (uVar46 == 0) {
    auVar108._0_8_ = CONCAT44(_LC10,_LC10);
    auVar108._8_4_ = _LC10;
    auVar108._12_4_ = _LC10;
    auVar75._4_4_ = _LC8;
    auVar75._0_4_ = _LC8;
    auVar75._8_4_ = _LC8;
    auVar75._12_4_ = _LC8;
    auVar82._8_4_ = _LC10;
    auVar82._0_8_ = auVar108._0_8_;
    auVar82._12_4_ = _LC10;
    fVar107 = _LC8;
    fVar84 = _LC8;
    fVar63 = _LC8;
  }
  else {
    puVar44 = (uint *)(uVar42 + 0x40);
    auVar65._0_8_ = CONCAT44(_LC10,_LC10);
    auVar65._8_4_ = _LC10;
    auVar65._12_4_ = _LC10;
    auVar82._8_4_ = _LC10;
    auVar82._0_8_ = auVar65._0_8_;
    auVar82._12_4_ = _LC10;
    auVar90._4_4_ = _LC8;
    auVar90._0_4_ = _LC8;
    auVar90._8_4_ = _LC8;
    auVar90._12_4_ = _LC8;
    auVar108._8_4_ = _LC10;
    auVar108._0_8_ = auVar65._0_8_;
    auVar108._12_4_ = _LC10;
    auVar75._4_4_ = _LC8;
    auVar75._0_4_ = _LC8;
    auVar75._8_4_ = _LC8;
    auVar75._12_4_ = _LC8;
    do {
      local_18c8 = (undefined1  [16])0x0;
      lVar45 = *(long *)(param_1[0xe] + 0x68);
      lVar40 = *(long *)(local_1918 + 0x20);
      _local_1a08 = (undefined1  [16])0x0;
      _local_19f8 = (undefined1  [16])0x0;
      local_17d8 = 0xffffffffffffffff;
      uStack_17d0 = 0xffffffff;
      uStack_17cc = 0xffffffff;
      local_11d8 = 0xffffffffffffffff;
      uStack_11d0 = 0xffffffff;
      uStack_11cc = 0xffffffff;
      if (pfStack_1940 <= pfVar36) {
        lVar41 = 1;
        goto LAB_001134be;
      }
      lVar41 = 0;
      do {
        lVar62 = (long)pfVar36 * 0x50 + lVar40;
        uVar52 = *(uint *)(lVar62 + 0xc);
        uVar1 = *(uint *)(lVar62 + 0x1c);
        pfVar36 = (float *)((long)pfVar36 + 1);
        *(uint *)((SetMB *)&local_11d8 + lVar41 * 4) = uVar1;
        lVar62 = *(long *)(lVar45 + 0x1e0);
        *(uint *)((long)&local_17d8 + lVar41 * 4) = uVar52;
        lVar62 = *(long *)(lVar62 + (ulong)uVar52 * 8);
        piVar56 = (int *)((ulong)uVar1 * *(long *)(lVar62 + 0x60) + *(long *)(lVar62 + 0x58));
        uVar52 = (uint)(*(ulong *)(lVar62 + 0x90) >> 2) & 0x3fffffff;
        *(uint *)(local_1a08 + lVar41 * 4) = *piVar56 * uVar52;
        *(uint *)(local_19f8 + lVar41 * 4) = piVar56[1] * uVar52;
        auVar53 = (undefined1  [4])(uVar52 * piVar56[2]);
        while (*(undefined1 (*) [4])(local_18c8 + lVar41 * 4) = auVar53, pfStack_1940 <= pfVar36) {
          lVar41 = lVar41 + 1;
          if (lVar41 == 4) goto LAB_00112e02;
LAB_001134be:
          *(undefined4 *)((SetMB *)&local_11d8 + lVar41 * 4) = 0xffffffff;
          *(undefined4 *)((long)&local_17d8 + lVar41 * 4) = (undefined4)local_17d8;
          *(undefined1 (*) [4])(local_1a08 + lVar41 * 4) = local_1a08;
          *(undefined1 (*) [4])(local_19f8 + lVar41 * 4) = local_1a08;
          auVar53 = local_1a08;
        }
        lVar41 = lVar41 + 1;
      } while (lVar41 != 4);
LAB_00112e02:
      uStack_1cc0 = auVar65._8_8_;
      puVar48 = puVar44 + -4;
      *(undefined8 *)(puVar44 + -0x10) = _local_1a08;
      *(undefined8 *)(puVar44 + -0xe) = uStack_1a00;
      *(undefined8 *)(puVar44 + -0xc) = _local_19f8;
      *(undefined8 *)(puVar44 + -10) = uStack_19f0;
      puVar44[-8] = 0;
      puVar44[-7] = 0;
      puVar44[-6] = 0;
      puVar44[-5] = 0;
      *(ulong *)(puVar44 + -4) = local_17d8;
      *(ulong *)(puVar44 + -2) = CONCAT44(uStack_17cc,uStack_17d0);
      local_1e58._8_8_ = uStack_1cc0;
      local_1e58._0_8_ = auVar65._0_8_;
      puVar44[0] = 0xffffffff;
      puVar44[1] = 0xffffffff;
      puVar44[2] = 0xffffffff;
      puVar44[3] = 0xffffffff;
      local_1e78._8_8_ = uStack_1cc0;
      local_1e78._0_8_ = auVar65._0_8_;
      local_1e48._8_8_ = CONCAT44(fVar67,fVar67);
      local_1e48._0_8_ = CONCAT44(fVar67,fVar67);
      local_1e68._8_8_ = CONCAT44(fVar67,fVar67);
      local_1e68._0_8_ = CONCAT44(fVar67,fVar67);
      do {
        if (puVar48[4] == 0xffffffff) break;
        lVar40 = *(long *)(*(long *)(lVar45 + 0x1e0) + (ulong)*puVar48 * 8);
        fVar107 = *(float *)(lVar40 + 0x2c);
        fVar84 = *(float *)(lVar40 + 0x28);
        fVar63 = *(float *)(lVar40 + 0x30) - fVar107;
        fVar106 = ((float)local_1920 - fVar107) / fVar63;
        fVar63 = (local_1920._4_4_ - fVar107) / fVar63;
        fVar78 = fVar84 * fVar106;
        fVar103 = fVar84 * fVar63;
        fVar107 = fVar78;
        if ((float)(_LC6 & (uint)fVar78) < _LC1) {
          fVar107 = (float)(~_LC6 & (uint)fVar78 |
                           (uint)((float)(int)fVar78 -
                                 (float)(-(uint)(fVar78 < (float)(int)fVar78) & (uint)_LC3)));
        }
        fVar91 = fVar103;
        if ((float)(_LC6 & (uint)fVar103) < _LC1) {
          fVar91 = (float)(~_LC6 & (uint)fVar103 |
                          (uint)((float)(int)fVar103 +
                                (float)(-(uint)((float)(int)fVar103 < fVar103) & (uint)_LC3)));
        }
        iVar31 = (int)fVar107;
        if (fVar107 <= 0.0) {
          lVar41 = 0;
          iVar49 = 0;
        }
        else {
          fVar78 = fVar78 - fVar107;
          lVar41 = (long)iVar31 * 0x30;
          iVar49 = iVar31;
        }
        if (iVar31 < 0) {
          iVar31 = -1;
        }
        lVar62 = *(long *)(lVar40 + 0xd0);
        fVar107 = fVar91;
        if (fVar84 <= fVar91) {
          fVar107 = fVar84;
        }
        iVar9 = (int)fVar84 + 1;
        if ((int)fVar91 < (int)fVar84 + 1) {
          iVar9 = (int)fVar91;
        }
        puVar54 = (uint *)((ulong)puVar48[4] * *(long *)(lVar40 + 0x60) + *(long *)(lVar40 + 0x58));
        uVar57 = (ulong)*puVar54;
        lVar40 = ((long *)(lVar41 + lVar62))[1];
        lVar41 = *(long *)(lVar41 + lVar62);
        auVar70 = *(undefined1 (*) [16])(lVar41 + uVar57 * lVar40);
        uVar58 = (ulong)puVar54[1];
        uVar34 = (ulong)puVar54[2];
        auVar72 = *(undefined1 (*) [16])(lVar41 + lVar40 * uVar58);
        auVar80 = *(undefined1 (*) [16])(lVar41 + lVar40 * uVar34);
        auVar89 = maxps(auVar70,auVar72);
        auVar70 = minps(auVar70,auVar72);
        plVar60 = (long *)((long)(int)fVar107 * 0x30 + lVar62);
        lVar40 = *plVar60;
        lVar41 = plVar60[1];
        auVar105 = maxps(auVar89,auVar80);
        auVar89 = minps(auVar70,auVar80);
        auVar70 = *(undefined1 (*) [16])(lVar40 + lVar41 * uVar57);
        auVar72 = *(undefined1 (*) [16])(lVar40 + lVar41 * uVar34);
        auVar80 = *(undefined1 (*) [16])(lVar40 + lVar41 * uVar58);
        auVar100 = maxps(auVar70,auVar80);
        auVar70 = minps(auVar70,auVar80);
        auVar80 = maxps(auVar100,auVar72);
        auVar70 = minps(auVar70,auVar72);
        fVar95 = auVar105._0_4_;
        fVar91 = auVar70._0_4_;
        fVar93 = auVar70._4_4_;
        fVar92 = auVar70._8_4_;
        fVar71 = auVar70._12_4_;
        fVar87 = auVar80._0_4_;
        fVar96 = auVar105._4_4_;
        fVar98 = auVar80._4_4_;
        fVar77 = auVar80._8_4_;
        fVar86 = auVar80._12_4_;
        fVar102 = auVar105._12_4_;
        fVar97 = auVar105._8_4_;
        local_1e38._4_4_ = auVar89._4_4_;
        uStack_1e30._0_4_ = auVar89._8_4_;
        uStack_1e30._4_4_ = auVar89._12_4_;
        local_1e38._0_4_ = auVar89._0_4_;
        if (iVar9 - iVar31 == 1) {
          if (fVar78 <= 0.0) {
            fVar78 = 0.0;
            fVar84 = _LC3;
          }
          else {
            fVar84 = _LC3 - fVar78;
          }
          auVar64._0_4_ = fVar78 * fVar91 + fVar84 * (float)local_1e38;
          auVar64._4_4_ = fVar78 * fVar93 + fVar84 * local_1e38._4_4_;
          auVar64._8_4_ = fVar78 * fVar92 + fVar84 * (float)uStack_1e30;
          auVar64._12_4_ = fVar78 * fVar71 + fVar84 * uStack_1e30._4_4_;
          fVar107 = fVar107 - fVar103;
          auVar94._0_4_ = fVar78 * fVar87 + fVar84 * fVar95;
          auVar94._4_4_ = fVar78 * fVar98 + fVar84 * fVar96;
          auVar94._8_4_ = fVar78 * fVar77 + fVar84 * fVar97;
          auVar94._12_4_ = fVar78 * fVar86 + fVar84 * fVar102;
          if (fVar107 <= 0.0) {
            fVar107 = 0.0;
            fVar84 = _LC3;
          }
          else {
            fVar84 = _LC3 - fVar107;
          }
          auVar66._0_4_ = fVar95 * fVar107 + fVar87 * fVar84;
          auVar66._4_4_ = fVar96 * fVar107 + fVar98 * fVar84;
          auVar66._8_4_ = fVar97 * fVar107 + fVar77 * fVar84;
          auVar66._12_4_ = fVar102 * fVar107 + fVar86 * fVar84;
          auVar76._0_4_ = (float)local_1e38 * fVar107 + fVar84 * fVar91;
          auVar76._4_4_ = local_1e38._4_4_ * fVar107 + fVar84 * fVar93;
          auVar76._8_4_ = (float)uStack_1e30 * fVar107 + fVar84 * fVar92;
          auVar76._12_4_ = uStack_1e30._4_4_ * fVar107 + fVar84 * fVar71;
        }
        else {
          plVar61 = (long *)((long)(iVar49 + 1) * 0x30 + lVar62);
          plVar60 = (long *)((long)((int)fVar107 + -1) * 0x30 + lVar62);
          lVar40 = *plVar61;
          lVar41 = plVar61[1];
          auVar70 = *(undefined1 (*) [16])(lVar40 + uVar57 * lVar41);
          auVar72 = *(undefined1 (*) [16])(lVar40 + uVar58 * lVar41);
          auVar80 = *(undefined1 (*) [16])(lVar40 + lVar41 * uVar34);
          lVar40 = *plVar60;
          lVar41 = plVar60[1];
          auVar89 = minps(auVar70,auVar72);
          auVar70 = maxps(auVar70,auVar72);
          auVar100 = minps(auVar89,auVar80);
          auVar105 = maxps(auVar70,auVar80);
          auVar70 = *(undefined1 (*) [16])(lVar40 + uVar57 * lVar41);
          auVar72 = *(undefined1 (*) [16])(lVar40 + uVar58 * lVar41);
          auVar80 = *(undefined1 (*) [16])(lVar40 + lVar41 * uVar34);
          auVar89 = maxps(auVar70,auVar72);
          auVar72 = minps(auVar70,auVar72);
          auVar70 = maxps(auVar89,auVar80);
          auVar72 = minps(auVar72,auVar80);
          if (fVar78 <= 0.0) {
            fVar78 = 0.0;
            fVar10 = _LC3;
          }
          else {
            fVar10 = _LC3 - fVar78;
          }
          fVar107 = fVar107 - fVar103;
          local_1e28._0_4_ = auVar100._0_4_;
          local_1e28._4_4_ = auVar100._4_4_;
          uStack_1e20._0_4_ = auVar100._8_4_;
          uStack_1e20._4_4_ = auVar100._12_4_;
          auVar94._0_4_ = auVar105._0_4_ * fVar78 + fVar95 * fVar10;
          auVar94._4_4_ = auVar105._4_4_ * fVar78 + fVar96 * fVar10;
          auVar94._8_4_ = auVar105._8_4_ * fVar78 + fVar97 * fVar10;
          auVar94._12_4_ = auVar105._12_4_ * fVar78 + fVar102 * fVar10;
          auVar64._0_4_ = fVar78 * (float)local_1e28 + fVar10 * (float)local_1e38;
          auVar64._4_4_ = fVar78 * local_1e28._4_4_ + fVar10 * local_1e38._4_4_;
          auVar64._8_4_ = fVar78 * (float)uStack_1e20 + fVar10 * (float)uStack_1e30;
          auVar64._12_4_ = fVar78 * uStack_1e20._4_4_ + fVar10 * uStack_1e30._4_4_;
          if (fVar107 <= 0.0) {
            fVar107 = 0.0;
            fVar78 = _LC3;
          }
          else {
            fVar78 = _LC3 - fVar107;
          }
          iVar31 = iVar31 + 1;
          auVar66._0_4_ = auVar70._0_4_ * fVar107 + fVar87 * fVar78;
          auVar66._4_4_ = auVar70._4_4_ * fVar107 + fVar98 * fVar78;
          auVar66._8_4_ = auVar70._8_4_ * fVar107 + fVar77 * fVar78;
          auVar66._12_4_ = auVar70._12_4_ * fVar107 + fVar86 * fVar78;
          auVar76._0_4_ = fVar107 * auVar72._0_4_ + fVar78 * fVar91;
          auVar76._4_4_ = fVar107 * auVar72._4_4_ + fVar78 * fVar93;
          auVar76._8_4_ = fVar107 * auVar72._8_4_ + fVar78 * fVar92;
          auVar76._12_4_ = fVar107 * auVar72._12_4_ + fVar78 * fVar71;
          if (iVar31 < iVar9) {
            plVar60 = (long *)((long)iVar31 * 0x30 + lVar62);
            do {
              lVar40 = plVar60[1];
              lVar41 = *plVar60;
              fVar107 = (float)iVar31;
              iVar31 = iVar31 + 1;
              plVar60 = plVar60 + 6;
              fVar71 = (fVar107 / fVar84 - fVar106) / (fVar63 - fVar106);
              fVar86 = _LC3 - fVar71;
              auVar70 = *(undefined1 (*) [16])(lVar41 + uVar57 * lVar40);
              auVar72 = *(undefined1 (*) [16])(lVar41 + uVar58 * lVar40);
              auVar80 = *(undefined1 (*) [16])(lVar41 + lVar40 * uVar34);
              auVar89 = maxps(auVar70,auVar72);
              auVar70 = minps(auVar70,auVar72);
              fVar107 = auVar64._4_4_;
              fVar78 = auVar64._8_4_;
              fVar103 = auVar64._12_4_;
              fVar95 = auVar94._4_4_;
              fVar96 = auVar94._8_4_;
              fVar97 = auVar94._12_4_;
              auVar72 = maxps(auVar89,auVar80);
              auVar70 = minps(auVar70,auVar80);
              fVar87 = auVar76._4_4_;
              fVar98 = auVar76._8_4_;
              fVar77 = auVar76._12_4_;
              fVar91 = auVar66._4_4_;
              fVar93 = auVar66._8_4_;
              fVar92 = auVar66._12_4_;
              auVar73._0_4_ = auVar70._0_4_ - (fVar71 * auVar76._0_4_ + fVar86 * auVar64._0_4_);
              auVar73._4_4_ = auVar70._4_4_ - (fVar71 * fVar87 + fVar86 * fVar107);
              auVar73._8_4_ = auVar70._8_4_ - (fVar71 * fVar98 + fVar86 * fVar78);
              auVar73._12_4_ = auVar70._12_4_ - (fVar71 * fVar77 + fVar86 * fVar103);
              auVar81._0_4_ = auVar72._0_4_ - (fVar71 * auVar66._0_4_ + fVar86 * auVar94._0_4_);
              auVar81._4_4_ = auVar72._4_4_ - (fVar71 * fVar91 + fVar86 * fVar95);
              auVar81._8_4_ = auVar72._8_4_ - (fVar71 * fVar93 + fVar86 * fVar96);
              auVar81._12_4_ = auVar72._12_4_ - (fVar71 * fVar92 + fVar86 * fVar97);
              auVar70 = minps(auVar73,(undefined1  [16])0x0);
              auVar72 = maxps(auVar81,(undefined1  [16])0x0);
              auVar64._0_4_ = auVar64._0_4_ + auVar70._0_4_;
              auVar64._4_4_ = fVar107 + auVar70._4_4_;
              auVar64._8_4_ = fVar78 + auVar70._8_4_;
              auVar64._12_4_ = fVar103 + auVar70._12_4_;
              auVar76._0_4_ = auVar76._0_4_ + auVar70._0_4_;
              auVar76._4_4_ = fVar87 + auVar70._4_4_;
              auVar76._8_4_ = fVar98 + auVar70._8_4_;
              auVar76._12_4_ = fVar77 + auVar70._12_4_;
              auVar94._0_4_ = auVar94._0_4_ + auVar72._0_4_;
              auVar94._4_4_ = fVar95 + auVar72._4_4_;
              auVar94._8_4_ = fVar96 + auVar72._8_4_;
              auVar94._12_4_ = fVar97 + auVar72._12_4_;
              auVar66._0_4_ = auVar66._0_4_ + auVar72._0_4_;
              auVar66._4_4_ = fVar91 + auVar72._4_4_;
              auVar66._8_4_ = fVar93 + auVar72._8_4_;
              auVar66._12_4_ = fVar92 + auVar72._12_4_;
            } while (iVar9 != iVar31);
          }
        }
        puVar48 = puVar48 + 1;
        local_1e78 = minps(local_1e78,auVar64);
        local_1e68 = maxps(local_1e68,auVar94);
        local_1e48 = maxps(local_1e48,auVar66);
        local_1e58 = minps(local_1e58,auVar76);
      } while (puVar44 != puVar48);
      puVar44 = puVar44 + 0x14;
      auVar82 = minps(auVar82,local_1e78);
      auVar90 = maxps(auVar90,local_1e68);
      auVar108 = minps(auVar108,local_1e58);
      auVar75 = maxps(auVar75,local_1e48);
    } while ((uint *)(uVar42 + 0x40 + uVar46 * 0x50) != puVar44);
    fVar67 = auVar90._0_4_;
    fVar107 = auVar90._4_4_;
    fVar84 = auVar90._8_4_;
    fVar63 = auVar90._12_4_;
  }
  *(ulong *)this = uVar39;
  *(ulong *)(this + 0x50) = local_1920;
  *(undefined1 (*) [16])(this + 0x10) = auVar82;
  *(float *)(this + 0x20) = fVar67;
  *(float *)(this + 0x24) = fVar107;
  *(float *)(this + 0x28) = fVar84;
  *(float *)(this + 0x2c) = fVar63;
  *(undefined1 (*) [16])(this + 0x30) = auVar108;
  *(undefined1 (*) [16])(this + 0x40) = auVar75;
LAB_00113398:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool) */

BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
* embree::sse2::BVHBuilderMSMBlur::
  BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
  ::recurse(BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
            *param_1,ulong *param_2,long *param_3,char param_4,undefined8 param_5,undefined8 param_6
           ,FastAllocator *param_7,MutexSys *param_8)

{
  ulong *puVar1;
  void *pvVar2;
  SetMB *pSVar3;
  SetMB **ppSVar4;
  SetMB **ppSVar5;
  SetMB *pSVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [12];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  MutexSys *pMVar31;
  SetMB *pSVar32;
  ulong uVar33;
  long lVar34;
  float *pfVar35;
  ulong uVar36;
  ulong uVar37;
  SetMB *pSVar38;
  SetMB *pSVar39;
  SetMB *pSVar40;
  SetMB *pSVar41;
  undefined8 uVar42;
  SetMB *pSVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined8 *puVar46;
  SetMB *pSVar47;
  SetMB *pSVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  SetMB *pSVar52;
  SetMB *pSVar53;
  SetMB *pSVar54;
  SetMB *pSVar55;
  long lVar56;
  undefined1 *puVar57;
  long in_FS_OFFSET;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar69;
  float fVar71;
  float fVar73;
  undefined4 uVar74;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  float fVar72;
  undefined1 auVar68 [16];
  float fVar78;
  float fVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  float fVar83;
  undefined1 auVar84 [16];
  float fVar85;
  undefined1 auVar86 [16];
  SetMB *pSVar87;
  SetMB *pSVar89;
  undefined1 auVar88 [16];
  SetMB *pSVar90;
  SetMB *pSVar92;
  undefined1 auVar91 [16];
  float fVar93;
  SetMB *pSVar94;
  SetMB *pSVar98;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar99;
  float fVar100;
  SetMB *local_1b08;
  SetMB *pSStack_1b00;
  SetMB *local_1af8;
  SetMB *pSStack_1af0;
  SetMB *local_1ae8;
  SetMB *pSStack_1ae0;
  undefined1 local_1ad8 [8];
  undefined8 uStack_1ad0;
  SetMB *local_1ac8;
  float fStack_1aac;
  undefined4 uStack_1a9c;
  SetMB *local_1a98;
  SetMB *local_1a90;
  SetMB *local_1a88;
  SetMB *pSStack_1a80;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined4 local_1a48;
  float local_1a38;
  undefined4 uStack_1a34;
  undefined4 uStack_1a30;
  undefined4 uStack_1a2c;
  undefined4 local_1a28;
  undefined4 local_1a18;
  bool local_1951;
  SetMB *local_1900;
  float local_18f8;
  float local_18f4;
  float local_18f0;
  float local_18ec;
  SetMB *local_18e8;
  SetMB *local_18e0;
  undefined8 local_18d8;
  SetMB *local_18d0;
  ulong *local_18c8;
  undefined8 local_18b8;
  SetMB *local_18b0;
  ulong *local_18a8;
  SetMB **local_18a0;
  SetMB *local_1898;
  SetMB *local_1888;
  SetMB *pSStack_1880;
  SetMB *local_1878;
  SetMB *pSStack_1870;
  SetMB *local_1868;
  SetMB *pSStack_1860;
  SetMB *local_1858;
  SetMB *pSStack_1850;
  SetMB *local_1848;
  SetMB *pSStack_1840;
  SetMB *local_1838;
  SetMB *pSStack_1830;
  SetMB *local_1828;
  SetMB *local_1820;
  SetMB *local_1818;
  SetMB *local_1810;
  undefined4 local_1808;
  undefined4 local_1804;
  float local_1800;
  float local_17fc;
  SetMB *local_17f8;
  SetMB *pSStack_17f0;
  undefined8 local_17e8;
  undefined8 uStack_17e0;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  undefined8 local_17c8;
  undefined8 uStack_17c0;
  SetMB *local_17b8;
  SetMB *pSStack_17b0;
  SetMB *local_17a8;
  SetMB *pSStack_17a0;
  SetMB *local_1798;
  SetMB *local_1790;
  SetMB *local_1788;
  SetMB *local_1780;
  undefined8 local_1778;
  undefined8 local_1770;
  SetMB *local_1768;
  SetMB *pSStack_1760;
  undefined8 local_1758;
  undefined8 uStack_1750;
  SetMB *local_1748;
  SetMB *pSStack_1740;
  SetMB *local_1738;
  SetMB *pSStack_1730;
  SetMB *local_1728;
  SetMB *pSStack_1720;
  SetMB *local_1718;
  SetMB *pSStack_1710;
  ulong local_1708;
  SetMB *local_1700;
  SetMB *local_16f8;
  SetMB *local_16f0;
  SetMB *local_16e8;
  undefined8 local_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  SetMB *local_16c8;
  SetMB *pSStack_16c0;
  SetMB *local_16b8;
  SetMB *pSStack_16b0;
  SetMB *local_16a8;
  SetMB *pSStack_16a0;
  SetMB *local_1698;
  SetMB *pSStack_1690;
  SetMB *local_1688;
  SetMB *pSStack_1680;
  ulong local_1678;
  SetMB *local_1670;
  SetMB *local_1668;
  SetMB *local_1660;
  SetMB *local_1658;
  undefined8 local_1650;
  SetMB *local_1648;
  SetMB *local_1638;
  SetMB *pSStack_1630;
  undefined4 local_1628;
  undefined4 uStack_1624;
  undefined4 uStack_1620;
  undefined4 uStack_161c;
  undefined4 local_1618;
  undefined4 uStack_1614;
  undefined4 uStack_1610;
  undefined4 uStack_160c;
  float local_1608;
  float fStack_1604;
  float fStack_1600;
  float fStack_15fc;
  SetMB *local_15f8;
  SetMB *pSStack_15f0;
  SetMB *local_15e8;
  SetMB *pSStack_15e0;
  SetMB *local_15d8;
  SetMB *local_15d0;
  SetMB *local_15c8;
  SetMB *local_15c0;
  SetMB *local_15b8;
  undefined8 local_15b0;
  SetMB *local_15a8;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  SetMB *local_1538;
  SetMB *pSStack_1530;
  SetMB *local_1528;
  SetMB *pSStack_1520;
  SetMB *local_1518;
  undefined8 local_1510;
  undefined8 local_1508;
  undefined8 local_1500;
  SetMB *local_14f8;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  undefined1 local_14d8 [8];
  undefined8 uStack_14d0;
  undefined4 local_14c8;
  undefined4 uStack_14c4;
  undefined4 uStack_14c0;
  undefined4 uStack_14bc;
  float local_14b8;
  float fStack_14b4;
  float fStack_14b0;
  float fStack_14ac;
  undefined4 local_14a8;
  undefined4 uStack_14a4;
  undefined4 uStack_14a0;
  undefined4 uStack_149c;
  undefined1 local_1498 [8];
  undefined8 uStack_1490;
  SetMB *local_1488;
  SetMB *pSStack_1480;
  SetMB *local_1478;
  SetMB *pSStack_1470;
  SetMB *local_1468;
  SetMB *local_1460;
  undefined8 local_1458;
  undefined8 local_1450;
  SetMB *local_1448;
  float local_1438 [4];
  undefined8 local_1428;
  undefined8 uStack_1420;
  float local_1418;
  byte local_1414;
  float local_1410;
  int local_140c;
  float local_13d8;
  float fStack_13d4;
  float fStack_13d0;
  float fStack_13cc;
  undefined1 local_13c8 [1344];
  undefined1 auStack_e88 [176];
  long local_dd8 [2];
  float local_dc8 [2];
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  SetMB *local_d88 [4];
  ulong local_d68;
  SetMB *apSStack_d60 [3];
  undefined8 local_d48;
  float local_d40 [2];
  SetMB *local_d38 [332];
  SetMB **local_2d8 [16];
  ulong local_258;
  SetMB *local_250;
  long local_248;
  SetMB *local_240;
  undefined8 local_238;
  long local_50;
  long local_40;
  
  lVar34 = lRam0000000000114fd7;
  auVar19 = stack0xffffffffffffe52c;
  pSStack_1af0 = local_1af8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 == (FastAllocator *)0x0) {
    param_7 = (FastAllocator *)param_2[0xc];
    param_8 = *(MutexSys **)(in_FS_OFFSET + lRam0000000000114fd7);
    if (param_8 == (MutexSys *)0x0) {
      param_8 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(param_8);
      *(undefined8 *)(param_8 + 8) = 0;
      *(MutexSys **)(param_8 + 0x40) = param_8;
      *(undefined8 *)(param_8 + 0x48) = 0;
      *(undefined8 *)(param_8 + 0x50) = 0;
      *(undefined8 *)(param_8 + 0x58) = 0;
      *(undefined8 *)(param_8 + 0x60) = 0;
      *(undefined8 *)(param_8 + 0x68) = 0;
      *(undefined8 *)(param_8 + 0x70) = 0;
      *(MutexSys **)(param_8 + 0x80) = param_8;
      *(undefined8 *)(param_8 + 0x88) = 0;
      *(undefined8 *)(param_8 + 0x90) = 0;
      *(undefined8 *)(param_8 + 0x98) = 0;
      *(undefined8 *)(param_8 + 0xa0) = 0;
      *(undefined8 *)(param_8 + 0xa8) = 0;
      *(undefined8 *)(param_8 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar34) = param_8;
      embree::MutexSys::lock();
      local_14e8 = (SetMB *)param_8;
      if (__MutexSys == _createPrimRefArrayMSMBlur) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,&local_14e8);
        pMVar31 = (MutexSys *)local_14e8;
        if (local_14e8 != (SetMB *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_14e8);
          embree::alignedFree(pMVar31);
        }
      }
      else {
        *__MutexSys = param_8;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    param_8 = param_8 + 0x40;
  }
  if ((param_4 != '\0') && ((ulong)(param_3[0xf] - param_3[0xe]) <= param_2[7])) {
    embree::Scene::progressMonitor((double)(ulong)(param_3[0xf] - param_3[0xe]));
  }
  pSVar6 = (SetMB *)(param_3 + 2);
  find((SetMB *)&local_1418);
  pSVar52 = (SetMB *)param_3[0xf];
  uVar33 = param_3[0xe];
  fVar63 = *(float *)(param_3 + 2);
  fVar59 = *(float *)((long)param_3 + 0x14);
  fVar100 = *(float *)(param_3 + 3);
  uVar82 = *(undefined4 *)((long)param_3 + 0x1c);
  fVar93 = *(float *)(param_3 + 4);
  fVar70 = *(float *)((long)param_3 + 0x24);
  fVar72 = *(float *)(param_3 + 5);
  uVar81 = *(undefined4 *)((long)param_3 + 0x2c);
  fVar64 = *(float *)((long)param_3 + 0x9c);
  fVar73 = *(float *)(param_3 + 6);
  fVar78 = *(float *)((long)param_3 + 0x34);
  fVar79 = *(float *)(param_3 + 7);
  uVar80 = *(undefined4 *)((long)param_3 + 0x3c);
  fVar65 = *(float *)(param_3 + 8);
  fVar69 = *(float *)((long)param_3 + 0x44);
  fVar71 = *(float *)(param_3 + 9);
  uVar74 = *(undefined4 *)((long)param_3 + 0x4c);
  fVar58 = *(float *)(param_3 + 0x13);
  lVar34 = param_3[0x10];
  if (((param_2[3] < (long)pSVar52 - uVar33) && (lVar50 = *param_3, lVar50 + 8U < param_2[1])) &&
     ((param_2[4] < (long)pSVar52 - uVar33 ||
      (fVar85 = (((fVar70 - fVar59) + (fVar72 - fVar100)) * (fVar93 - fVar63) +
                 (fVar70 - fVar59) * (fVar72 - fVar100) +
                (fVar69 - fVar78) * (fVar71 - fVar79) +
                (fVar65 - fVar73) * ((fVar69 - fVar78) + (fVar71 - fVar79))) * _LC12 *
                (fVar64 - fVar58),
      *(float *)(param_2 + 5) * fVar85 + *(float *)((long)param_2 + 0x2c) * local_1418 <
      (float)((ulong)(lVar34 + -1 + (1L << ((byte)param_2[2] & 0x3f))) >> ((byte)param_2[2] & 0x3f))
      * fVar85 * *(float *)((long)param_2 + 0x2c))))) {
    if (local_140c != 0) {
      if (local_140c == 2) {
        pSVar52 = (SetMB *)(param_2 + 9);
        local_1b08 = (SetMB *)param_3[0x14];
        local_18d8 = (SetMB *)CONCAT44(local_1410,fVar58);
        local_18b8 = (SetMB *)CONCAT44(fVar64,local_1410);
        pSVar41 = (SetMB *)operator_new(0x28);
        puVar46 = (undefined8 *)param_2[9];
        pSVar48 = (SetMB *)param_3[0xf];
        pSVar43 = (SetMB *)param_3[0xe];
        *(undefined8 **)pSVar41 = puVar46;
        pSVar41[8] = (SetMB)0x0;
        *(undefined8 *)(pSVar41 + 0x10) = 0;
        *(undefined8 *)(pSVar41 + 0x18) = 0;
        *(undefined8 *)(pSVar41 + 0x20) = 0;
        uVar33 = (long)pSVar48 - (long)pSVar43;
        if (uVar33 != 0) {
          uVar51 = uVar33 * 0x50;
          (**(code **)*puVar46)(puVar46,uVar51,0);
          if (uVar51 < 0x1c00000) {
            uVar42 = embree::alignedMalloc(uVar51,0x10);
          }
          else {
            uVar42 = embree::os_malloc(uVar51,(bool *)(pSVar41 + 8));
          }
          pSVar48 = (SetMB *)param_3[0xf];
          pSVar43 = (SetMB *)param_3[0xe];
          *(undefined8 *)(pSVar41 + 0x20) = uVar42;
          *(ulong *)(pSVar41 + 0x10) = uVar33;
          *(ulong *)(pSVar41 + 0x18) = uVar33;
          uVar33 = (long)pSVar48 - (long)pSVar43;
        }
        uVar82 = _LC10;
        fVar64 = _LC8;
        local_1488 = (SetMB *)0x0;
        pSStack_1480 = (SetMB *)0x0;
        local_1478 = (SetMB *)0x0;
        pSStack_1470 = (SetMB *)0x0;
        uStack_17e0 = (SetMB *)&local_18e8;
        local_1460 = (SetMB *)0x3f800000;
        local_1468 = (SetMB *)0x3f80000000000000;
        uStack_1a9c = _LC10;
        local_14e8 = (SetMB *)CONCAT44(_LC10,_LC10);
        uStack_14e0 = (SetMB *)CONCAT44(_LC10,_LC10);
        fStack_1aac = _LC8;
        local_14d8._4_4_ = _LC8;
        local_14d8._0_4_ = _LC8;
        uStack_14d0._0_4_ = _LC8;
        uStack_14d0._4_4_ = _LC8;
        local_14c8 = _LC10;
        uStack_14c4 = _LC10;
        uStack_14c0 = _LC10;
        uStack_14bc = _LC10;
        local_14b8 = _LC8;
        fStack_14b4 = _LC8;
        fStack_14b0 = _LC8;
        fStack_14ac = _LC8;
        local_14a8 = _LC10;
        uStack_14a4 = _LC10;
        uStack_14a0 = _LC10;
        uStack_149c = _LC10;
        local_1498._4_4_ = _LC8;
        local_1498._0_4_ = _LC8;
        uStack_1490._0_4_ = _LC8;
        uStack_1490._4_4_ = _LC8;
        local_18e8 = pSVar41;
        local_17f8 = local_1b08;
        pSStack_17f0 = (SetMB *)&local_18d8;
        local_17e8 = pSVar52;
        local_17d8 = pSVar6;
        if (uVar33 < 0xc00) {
          local_1598 = pSVar43;
          uStack_1590 = pSVar48;
          HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
          ::
          split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
          ::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                    ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1768,
                     (range *)&local_17f8);
        }
        else {
          parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                    ((ulong)&local_1768,uVar33 + 0x7f >> 7,(ulong)pSVar43,(ulong)pSVar48,
                     (PrimInfoMBT_conflict *)&local_14e8,
                     (_lambda_embree__range<unsigned_long>_const___1_ *)&local_17f8,
                     PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
        }
        pSVar48 = (SetMB *)param_3[0xf];
        pSVar43 = (SetMB *)param_3[0xe];
        uVar33 = (long)pSVar48 - (long)pSVar43;
        if ((long)local_1700 - local_1708 != uVar33) {
          local_14e8 = (SetMB *)&local_18d8;
          local_1700 = (SetMB *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_>
                                          (*(PrimRefMB **)(local_18e8 + 0x20),0,uVar33,0x400,
                                           (_lambda_embree__PrimRefMB_const___1_ *)&local_14e8);
          pSVar48 = (SetMB *)param_3[0xf];
          pSVar43 = (SetMB *)param_3[0xe];
          uVar33 = (long)pSVar48 - (long)pSVar43;
        }
        pSVar38 = local_1700;
        uVar51 = local_1708;
        pSVar39 = local_18e8;
        local_1ad8 = (undefined1  [8])param_3;
        local_1678 = local_1708;
        fVar58 = (float)local_18d8;
        if ((float)local_18d8 <= (float)local_16e0) {
          fVar58 = (float)local_16e0;
        }
        local_1a88 = local_1748;
        pSStack_1a80 = pSStack_1740;
        local_1a98 = local_16f8;
        local_16b8 = local_1748;
        pSStack_16b0 = pSStack_1740;
        local_1ad8._0_4_ = fVar58;
        local_1a90 = local_16f0;
        local_1a68 = local_1758;
        uStack_1a60 = uStack_1750;
        fVar85 = local_16e0._4_4_;
        if (local_18d8._4_4_ <= local_16e0._4_4_) {
          fVar85 = local_18d8._4_4_;
        }
        local_1a78 = local_1738;
        uStack_1a70 = pSStack_1730;
        local_1ae8 = local_1728;
        pSStack_1ae0 = pSStack_1720;
        local_1a58 = local_1718;
        uStack_1a50 = pSStack_1710;
        local_1a48 = SUB84(local_16e8,0);
        local_1a18 = (undefined4)((ulong)local_16e8 >> 0x20);
        local_16d8 = local_1768;
        uStack_16d0 = pSStack_1760;
        local_16c8 = local_1758;
        pSStack_16c0 = uStack_1750;
        local_16a8 = local_1738;
        pSStack_16a0 = pSStack_1730;
        local_1698 = local_1728;
        pSStack_1690 = pSStack_1720;
        local_1688 = local_1718;
        pSStack_1680 = pSStack_1710;
        local_1668 = local_16f8;
        local_14e8 = (SetMB *)CONCAT44(uVar82,uVar82);
        uStack_14e0 = (SetMB *)CONCAT44(uVar82,uVar82);
        local_1660 = local_16f0;
        local_1648 = local_18e8;
        local_1488 = (SetMB *)0x0;
        pSStack_1480 = (SetMB *)0x0;
        local_1478 = (SetMB *)0x0;
        pSStack_1470 = (SetMB *)0x0;
        local_1468 = (SetMB *)0x3f80000000000000;
        local_1460 = (SetMB *)0x3f800000;
        local_1658 = local_16e8;
        local_1650 = CONCAT44(fVar85,fVar58);
        uStack_14d0 = CONCAT44(fVar64,fVar64);
        local_14d8 = (undefined1  [8])CONCAT44(fVar64,fVar64);
        local_14c8 = uVar82;
        uStack_14c4 = uVar82;
        uStack_14c0 = uVar82;
        uStack_14bc = uVar82;
        local_14b8 = fVar64;
        fStack_14b4 = fVar64;
        fStack_14b0 = fVar64;
        fStack_14ac = fVar64;
        local_14a8 = uVar82;
        uStack_14a4 = uVar82;
        uStack_14a0 = uVar82;
        uStack_149c = uVar82;
        uStack_1490 = (SetMB *)CONCAT44(fVar64,fVar64);
        local_1498 = (undefined1  [8])CONCAT44(fVar64,fVar64);
        local_1a38 = SUB84(local_1768,0);
        fVar99 = local_1a38;
        uStack_1a34 = (undefined4)((ulong)local_1768 >> 0x20);
        uStack_1a30 = SUB84(pSStack_1760,0);
        uStack_1a2c = (undefined4)((ulong)pSStack_1760 >> 0x20);
        local_1888 = local_1b08;
        pSStack_1880 = (SetMB *)&local_18b8;
        local_1878 = pSVar52;
        local_1670 = local_1700;
        if (uVar33 < 0xc00) {
          local_1638 = pSVar43;
          pSStack_1630 = pSVar48;
          HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
          ::
          split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
          ::{lambda(embree::range<unsigned_long>const&)#3}::operator()
                    ((_lambda_embree__range<unsigned_long>const___3_ *)&local_1598,
                     (range *)&local_1888);
        }
        else {
          parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_3_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                    ((embree *)&local_1598,uVar33 + 0x7f >> 7,(ulong)pSVar43,(ulong)pSVar48,0x80,
                     (PrimInfoMBT_conflict *)&local_14e8,
                     (_lambda_embree__range<unsigned_long>_const___3_ *)&local_1888,
                     PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
        }
        pSVar52 = (SetMB *)param_3[0xe];
        lVar34 = (long)pSStack_1530 - (long)local_1538;
        local_15d0 = pSVar52 + lVar34;
        local_1538 = pSVar52;
        pSStack_1530 = local_15d0;
        if (lVar34 != param_3[0xf] - (long)pSVar52) {
          local_14e8 = (SetMB *)&local_18b8;
          local_15d0 = (SetMB *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_4_>
                                          (*(PrimRefMB **)(local_1b08 + 0x20),(ulong)pSVar52,
                                           param_3[0xf],0x400,
                                           (_lambda_embree__PrimRefMB_const___4_ *)&local_14e8);
        }
        local_1af8 = local_1538;
        local_15d8 = local_1538;
        fVar83 = local_1510._4_4_;
        if (local_18b8._4_4_ <= local_1510._4_4_) {
          fVar83 = local_18b8._4_4_;
        }
        fVar15 = (float)local_18b8;
        if ((float)local_18b8 <= (float)local_1510) {
          fVar15 = (float)local_1510;
        }
        local_1638 = local_1598;
        pSStack_1630 = uStack_1590;
        local_1628 = (undefined4)local_1588;
        uStack_1624 = local_1588._4_4_;
        uStack_1620 = (undefined4)uStack_1580;
        uStack_161c = uStack_1580._4_4_;
        local_1618 = (undefined4)local_1578;
        uStack_1614 = local_1578._4_4_;
        uStack_1610 = (undefined4)uStack_1570;
        uStack_160c = uStack_1570._4_4_;
        local_1a28 = SUB84(local_1518,0);
        local_1608 = (float)local_1568;
        fStack_1604 = local_1568._4_4_;
        fStack_1600 = (float)uStack_1560;
        fStack_15fc = uStack_1560._4_4_;
        local_15c8 = local_1528;
        local_1a38 = (float)((ulong)local_1518 >> 0x20);
        local_15f8 = local_1558;
        pSStack_15f0 = uStack_1550;
        local_15c0 = pSStack_1520;
        local_15e8 = local_1548;
        pSStack_15e0 = uStack_1540;
        local_15b8 = local_1518;
        local_15b0 = CONCAT44(fVar83,fVar15);
        local_1951 = pSVar41 != (SetMB *)0x0;
        fVar63 = *(float *)(param_3 + 2);
        fVar59 = *(float *)((long)param_3 + 0x14);
        fVar100 = *(float *)(param_3 + 3);
        uVar82 = *(undefined4 *)((long)param_3 + 0x1c);
        fVar93 = *(float *)(param_3 + 4);
        fVar70 = *(float *)((long)param_3 + 0x24);
        fVar72 = *(float *)(param_3 + 5);
        uVar81 = *(undefined4 *)((long)param_3 + 0x2c);
        pSVar48 = (SetMB *)param_3[0x14];
        lVar50 = *param_3;
        fVar73 = *(float *)(param_3 + 6);
        fVar78 = *(float *)((long)param_3 + 0x34);
        fVar79 = *(float *)(param_3 + 7);
        uVar80 = *(undefined4 *)((long)param_3 + 0x3c);
        fVar65 = *(float *)(param_3 + 8);
        fVar69 = *(float *)((long)param_3 + 0x44);
        fVar71 = *(float *)(param_3 + 9);
        uVar74 = *(undefined4 *)((long)param_3 + 0x4c);
        lVar34 = param_3[0x10];
        fVar58 = *(float *)(param_3 + 0x13);
        local_d40[1] = *(float *)((long)param_3 + 0x9c);
        goto LAB_00114ac4;
      }
      local_1ac8 = (SetMB *)param_3;
      unique0x10009e81 = auVar19;
      if (local_140c == 1) {
        SetMB::deterministic_order(pSVar6);
        splitFallback(pSVar6,(SetMB *)&local_16d8,(SetMB *)&local_1638);
        goto LAB_00118920;
      }
      if (local_140c == 3) goto LAB_001188f3;
      goto LAB_00118767;
    }
    local_1518 = (SetMB *)0x3f80000000000000;
    local_1468 = (SetMB *)0x3f80000000000000;
    fStack_1aac = _LC8;
    local_1588 = (SetMB *)CONCAT44(_LC8,_LC8);
    uStack_1580 = (SetMB *)CONCAT44(_LC8,_LC8);
    lVar34 = (long)(1 << (local_1414 & 0x1f));
    local_1568 = (SetMB *)CONCAT44(_LC8,_LC8);
    uStack_1560 = (SetMB *)CONCAT44(_LC8,_LC8);
    local_1548 = (SetMB *)CONCAT44(_LC8,_LC8);
    uStack_1540 = (SetMB *)CONCAT44(_LC8,_LC8);
    local_14d8._4_4_ = _LC8;
    local_14d8._0_4_ = _LC8;
    uStack_14d0._0_4_ = _LC8;
    uStack_14d0._4_4_ = _LC8;
    local_14b8 = _LC8;
    fStack_14b4 = _LC8;
    fStack_14b0 = _LC8;
    fStack_14ac = _LC8;
    local_1498._4_4_ = _LC8;
    local_1498._0_4_ = _LC8;
    uStack_1490._0_4_ = _LC8;
    uStack_1490._4_4_ = _LC8;
    local_1538 = (SetMB *)0x0;
    local_dd8[0] = (&mm_lookupmask_ps)[lVar34 * 2];
    local_dd8[1] = *(long *)(embree::os_free + lVar34 * 0x10);
    local_1758 = (SetMB *)local_dd8;
    pSStack_1530 = (SetMB *)0x0;
    local_13d8 = local_1410;
    fStack_13d4 = local_1410;
    fStack_13d0 = local_1410;
    fStack_13cc = local_1410;
    local_1528 = (SetMB *)0x0;
    pSStack_1520 = (SetMB *)0x0;
    local_1510 = (SetMB *)0x3f800000;
    local_1488 = (SetMB *)0x0;
    pSStack_1480 = (SetMB *)0x0;
    local_1478 = (SetMB *)0x0;
    pSStack_1470 = (SetMB *)0x0;
    local_1460 = (SetMB *)0x3f800000;
    uStack_1a9c = _LC10;
    local_1598 = (SetMB *)CONCAT44(_LC10,_LC10);
    uStack_1590 = (SetMB *)CONCAT44(_LC10,_LC10);
    local_1578 = (SetMB *)CONCAT44(_LC10,_LC10);
    uStack_1570 = (SetMB *)CONCAT44(_LC10,_LC10);
    local_1558 = (SetMB *)CONCAT44(_LC10,_LC10);
    uStack_1550 = (SetMB *)CONCAT44(_LC10,_LC10);
    local_14e8 = (SetMB *)CONCAT44(_LC10,_LC10);
    uStack_14e0 = (SetMB *)CONCAT44(_LC10,_LC10);
    local_14c8 = _LC10;
    uStack_14c4 = _LC10;
    uStack_14c0 = _LC10;
    uStack_14bc = _LC10;
    local_14a8 = _LC10;
    uStack_14a4 = _LC10;
    uStack_14a0 = _LC10;
    uStack_149c = _LC10;
    pSStack_1760 = (SetMB *)&local_13d8;
    local_1768 = (SetMB *)&local_1418;
    local_1670 = (SetMB *)parallel_partitioning<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>
                                    (*(PrimRefMB **)(param_3[0x14] + 0x20),uVar33,(ulong)pSVar52,
                                     (EmptyTy *)&local_1638,(PrimInfoMBT_conflict *)&local_1598,
                                     (PrimInfoMBT_conflict *)&local_14e8,
                                     (_lambda_embree__PrimRefMB_const___1_ *)&local_1768,
                                     (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimRefMB_const___2_
                                      *)&local_1888,
                                     (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>_const___3_
                                      *)&local_17f8,0x80,0xc00);
    pSVar48 = (SetMB *)param_3[0x14];
    local_1668 = local_1528;
    local_16c8 = local_1588;
    pSStack_16c0 = uStack_1580;
    fVar58 = *(float *)(param_3 + 0x13);
    fVar64 = *(float *)((long)param_3 + 0x9c);
    local_1660 = pSStack_1520;
    local_1658 = local_1518;
    local_16b8 = local_1578;
    pSStack_16b0 = uStack_1570;
    local_16a8 = local_1568;
    pSStack_16a0 = uStack_1560;
    local_1ae8 = local_1558;
    pSStack_1ae0 = uStack_1550;
    local_1688 = local_1548;
    pSStack_1680 = uStack_1540;
    local_16d8 = local_1598;
    uStack_16d0 = uStack_1590;
    local_1650._4_4_ = (float)((ulong)local_1510 >> 0x20);
    local_1650._0_4_ = SUB84(local_1510,0);
    local_1ad8._0_4_ = fVar58;
    if (fVar58 <= (float)local_1650) {
      local_1ad8._0_4_ = (float)local_1650;
    }
    if (fVar64 <= local_1650._4_4_) {
      local_1650._4_4_ = fVar64;
    }
    local_15b8 = local_1468;
    local_15b0._0_4_ = SUB84(local_1460,0);
    fVar15 = fVar58;
    if (fVar58 <= (float)local_15b0) {
      fVar15 = (float)local_15b0;
    }
    _local_1ad8 = CONCAT124(auVar19,local_1ad8._0_4_);
    local_15f8 = (SetMB *)CONCAT44(uStack_14a4,local_14a8);
    pSStack_15f0 = (SetMB *)CONCAT44(uStack_149c,uStack_14a0);
    local_15b0._4_4_ = (float)((ulong)local_1460 >> 0x20);
    local_15c8 = local_1478;
    if (fVar64 <= local_15b0._4_4_) {
      local_15b0._4_4_ = fVar64;
    }
    local_15c0 = pSStack_1470;
    local_1650 = CONCAT44(local_1650._4_4_,local_1ad8._0_4_);
    local_1638 = local_14e8;
    pSStack_1630 = uStack_14e0;
    local_1628 = local_14d8._0_4_;
    uStack_1624 = local_14d8._4_4_;
    uStack_1620 = (undefined4)uStack_14d0;
    uStack_161c = uStack_14d0._4_4_;
    local_1618 = local_14c8;
    uStack_1614 = uStack_14c4;
    uStack_1610 = uStack_14c0;
    uStack_160c = uStack_14bc;
    local_1608 = local_14b8;
    fStack_1604 = fStack_14b4;
    fStack_1600 = fStack_14b0;
    fStack_15fc = fStack_14ac;
    local_15e8 = (SetMB *)local_1498;
    pSStack_15e0 = uStack_1490;
    lVar50 = *param_3;
    fVar63 = *(float *)(param_3 + 2);
    fVar59 = *(float *)((long)param_3 + 0x14);
    fVar100 = *(float *)(param_3 + 3);
    uVar82 = *(undefined4 *)((long)param_3 + 0x1c);
    fVar93 = *(float *)(param_3 + 4);
    fVar70 = *(float *)((long)param_3 + 0x24);
    fVar72 = *(float *)(param_3 + 5);
    uVar81 = *(undefined4 *)((long)param_3 + 0x2c);
    fVar73 = *(float *)(param_3 + 6);
    fVar78 = *(float *)((long)param_3 + 0x34);
    fVar79 = *(float *)(param_3 + 7);
    uVar80 = *(undefined4 *)((long)param_3 + 0x3c);
    local_1af8 = local_1670;
    fVar65 = *(float *)(param_3 + 8);
    fVar69 = *(float *)((long)param_3 + 0x44);
    fVar71 = *(float *)(param_3 + 9);
    uVar74 = *(undefined4 *)((long)param_3 + 0x4c);
    lVar34 = param_3[0x10];
    local_15b0 = CONCAT44(local_15b0._4_4_,fVar15);
    fVar99 = (float)local_1598;
    uStack_1a34 = local_1598._4_4_;
    uStack_1a30 = (undefined4)uStack_1590;
    uStack_1a2c = uStack_1590._4_4_;
    fVar85 = local_1650._4_4_;
    local_1678 = uVar33;
    local_1648 = pSVar48;
    local_15d8 = local_1670;
    local_15d0 = pSVar52;
    local_15a8 = pSVar48;
    fVar83 = local_15b0._4_4_;
LAB_00114a6c:
    local_1951 = false;
    local_1a38 = (float)((ulong)local_15b8 >> 0x20);
    local_1a28 = SUB84(local_15b8,0);
    local_1a18 = (undefined4)((ulong)local_1658 >> 0x20);
    local_1a48 = SUB84(local_1658,0);
    pSVar38 = local_1670;
    pSVar39 = local_1648;
    uVar51 = local_1678;
    local_1a98 = local_1668;
    local_1a90 = local_1660;
    local_1a88 = local_16b8;
    pSStack_1a80 = pSStack_16b0;
    local_1a78 = local_16a8;
    uStack_1a70 = pSStack_16a0;
    local_1a68 = local_16c8;
    uStack_1a60 = pSStack_16c0;
    local_1a58 = local_1688;
    uStack_1a50 = pSStack_1680;
    local_1698 = local_1ae8;
    pSStack_1690 = pSStack_1ae0;
    local_d40[1] = fVar64;
    local_1b08 = local_15a8;
LAB_00114ac4:
    pSVar92 = local_15c0;
    pSVar90 = local_15c8;
    pSVar98 = local_15d0;
    pSVar94 = pSStack_15e0;
    pSVar55 = local_15e8;
    pSVar3 = pSStack_15f0;
    pSVar41 = local_15f8;
    fVar30 = fStack_15fc;
    fVar29 = fStack_1600;
    fVar28 = fStack_1604;
    fVar64 = local_1608;
    uVar27 = uStack_160c;
    uVar26 = uStack_1610;
    uVar25 = uStack_1614;
    uVar24 = local_1618;
    uVar23 = uStack_161c;
    uVar22 = uStack_1620;
    uVar21 = uStack_1624;
    uVar20 = local_1628;
    pSVar43 = pSStack_1630;
    pSVar52 = local_1638;
    local_1ac8 = (SetMB *)local_dd8;
    apSStack_d60[2] = (SetMB *)param_3[0x11];
    local_d88[0] = (SetMB *)param_3[10];
    local_d88[1] = (SetMB *)param_3[0xb];
    local_db8 = (SetMB *)CONCAT44(fVar70,fVar93);
    uStack_db0 = (SetMB *)CONCAT44(uVar81,fVar72);
    local_d68 = param_3[0xe];
    apSStack_d60[0] = (SetMB *)param_3[0xf];
    local_d48 = param_3[0x12];
    local_d88[2] = (SetMB *)param_3[0xc];
    local_d88[3] = (SetMB *)param_3[0xd];
    local_258 = 1;
    local_50 = 1;
    local_250 = pSVar48;
    local_248 = 2;
    local_2d8[0] = &local_250;
    local_da8 = (SetMB *)CONCAT44(fVar78,fVar73);
    uStack_da0 = (SetMB *)CONCAT44(uVar80,fVar79);
    local_d98 = (SetMB *)CONCAT44(fVar69,fVar65);
    uStack_d90 = (SetMB *)CONCAT44(uVar74,fVar71);
    if (pSVar48 == pSVar39) {
      local_248 = 3;
    }
    else {
      local_50 = 2;
      local_240 = pSVar39;
      local_238 = 1;
      local_2d8[0] = &local_240;
    }
    lVar49 = local_50;
    if (pSVar48 == local_1b08) {
      local_2d8[1] = &local_250;
    }
    else {
      local_50 = local_50 + 1;
      (&local_250)[lVar49 * 2] = local_1b08;
      (&local_248)[lVar49 * 2] = 1;
      local_2d8[1] = &local_250 + lVar49 * 2;
      local_248 = local_248 + -1;
    }
    local_15a8 = local_1b08;
    if ((local_248 == 0) && (pSVar48 != (SetMB *)0x0)) {
      lVar49 = *(long *)(pSVar48 + 0x18);
      pvVar2 = *(void **)(pSVar48 + 0x20);
      local_dd8[0] = lVar50;
      local_dc8[0] = fVar63;
      local_dc8[1] = fVar59;
      uStack_dc0._0_4_ = fVar100;
      uStack_dc0._4_4_ = uVar82;
      apSStack_d60[1] = (SetMB *)lVar34;
      local_d40[0] = fVar58;
      local_d38[0] = pSVar48;
      if (pvVar2 != (void *)0x0) {
        if ((ulong)(lVar49 * 0x50) < 0x1c00000) {
          embree::alignedFree(pvVar2);
        }
        else {
          embree::os_free(pvVar2,lVar49 * 0x50,(bool)pSVar48[8]);
        }
      }
      if (lVar49 != 0) {
        (**(code **)**(undefined8 **)pSVar48)(*(undefined8 **)pSVar48,lVar49 * -0x50,1);
      }
      operator_delete(pSVar48,0x28);
      lVar34 = local_258 * 4;
      lVar49 = local_258 * 0xb0;
    }
    else {
      lVar49 = 0xb0;
      lVar34 = 4;
    }
    local_dd8[0] = lVar50 + 1;
    local_d68 = uVar51;
    local_db8 = local_1a68;
    uStack_db0 = uStack_1a60;
    local_da8 = local_1a88;
    uStack_da0 = pSStack_1a80;
    apSStack_d60[1] = local_1a98;
    local_d98 = local_1a78;
    uStack_d90 = uStack_1a70;
    local_d88[0] = local_1ae8;
    local_d88[1] = pSStack_1ae0;
    apSStack_d60[2] = local_1a90;
    local_d88[2] = local_1a58;
    local_d88[3] = uStack_1a50;
    local_d48 = CONCAT44(local_1a18,local_1a48);
    local_d40[0] = (float)local_1ad8._0_4_;
    apSStack_d60[0] = pSVar38;
    local_d38[0] = pSVar39;
    local_dc8[0] = fVar99;
    local_dc8[1] = (float)uStack_1a34;
    uStack_dc0._0_4_ = (float)uStack_1a30;
    uStack_dc0._4_4_ = uStack_1a2c;
    local_d40[1] = fVar85;
    local_dd8[(lVar34 * 2 + local_258 * 3) * 2] = lVar50 + 1;
    *(SetMB **)((long)local_dc8 + lVar49) = pSVar52;
    *(SetMB **)((long)&uStack_dc0 + lVar49) = pSVar43;
    *(undefined4 *)((long)&local_db8 + lVar49) = uVar20;
    *(undefined4 *)((long)&local_db8 + lVar49 + 4) = uVar21;
    *(undefined4 *)((long)&uStack_db0 + lVar49) = uVar22;
    *(undefined4 *)((long)&uStack_db0 + lVar49 + 4) = uVar23;
    *(undefined4 *)((long)&local_da8 + lVar49) = uVar24;
    *(undefined4 *)((long)&local_da8 + lVar49 + 4) = uVar25;
    *(undefined4 *)((long)&uStack_da0 + lVar49) = uVar26;
    *(undefined4 *)((long)&uStack_da0 + lVar49 + 4) = uVar27;
    *(float *)((long)&local_d98 + lVar49) = fVar64;
    *(float *)((long)&local_d98 + lVar49 + 4) = fVar28;
    *(float *)((long)&uStack_d90 + lVar49) = fVar29;
    *(float *)((long)&uStack_d90 + lVar49 + 4) = fVar30;
    *(SetMB **)((long)local_d88 + lVar49) = pSVar41;
    *(SetMB **)((long)local_d88 + lVar49 + 8) = pSVar3;
    *(SetMB **)((long)apSStack_d60 + lVar49) = pSVar98;
    *(SetMB **)((long)&local_d68 + lVar49) = local_1af8;
    *(float *)((long)&local_d48 + lVar49 + 4) = local_1a38;
    *(SetMB **)((long)apSStack_d60 + lVar49 + 8) = pSVar90;
    *(SetMB **)((long)apSStack_d60 + lVar49 + 0x10) = pSVar92;
    *(SetMB **)((long)local_d38 + lVar49) = local_1b08;
    *(SetMB **)((long)local_d88 + lVar49 + 0x10) = pSVar55;
    *(SetMB **)((long)local_d88 + lVar49 + 0x18) = pSVar94;
    *(undefined4 *)((long)&local_d48 + lVar49) = local_1a28;
    *(float *)((long)local_d40 + lVar49) = fVar15;
    *(float *)((long)local_d38 + lVar49 + -4) = fVar83;
    local_258 = local_258 + 1;
    if (local_258 < *param_2) {
      do {
        if (local_258 == 0) {
          pSVar52 = *(SetMB **)param_8;
          goto joined_r0x0011674c;
        }
        uVar51 = 0;
        uVar33 = 0xffffffffffffffff;
        pfVar35 = local_dc8;
        fVar64 = _LC8;
        do {
          if ((param_2[3] < (ulong)(*(long *)(pfVar35 + 0x1a) - *(long *)(pfVar35 + 0x18))) &&
             (fVar58 = (((pfVar35[5] - pfVar35[1]) + (pfVar35[6] - pfVar35[2])) *
                        (pfVar35[4] - *pfVar35) +
                        (pfVar35[5] - pfVar35[1]) * (pfVar35[6] - pfVar35[2]) +
                       (pfVar35[0xc] - pfVar35[8]) *
                       ((pfVar35[0xd] - pfVar35[9]) + (pfVar35[0xe] - pfVar35[10])) +
                       (pfVar35[0xd] - pfVar35[9]) * (pfVar35[0xe] - pfVar35[10])) * _LC12,
             fVar64 < fVar58)) {
            uVar33 = uVar51;
            fVar64 = fVar58;
          }
          uVar51 = uVar51 + 1;
          pfVar35 = pfVar35 + 0x2c;
        } while (uVar51 != local_258);
        if (uVar33 == 0xffffffffffffffff) goto LAB_00115ee6;
        pSVar52 = (SetMB *)(*param_3 + 1);
        lVar34 = uVar33 * 0xb0;
        pSVar48 = (SetMB *)(local_dc8 + uVar33 * 0x2c);
        local_1598 = pSVar52;
        local_14e8 = pSVar52;
        find((SetMB *)&local_13d8);
        pSVar43 = pSVar52;
        if (fStack_13cc == 0.0) {
          local_17f8 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          pSStack_17f0 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          local_1778 = (SetMB *)0x3f80000000000000;
          pSVar3 = (SetMB *)(&local_d68)[uVar33 * 0x16];
          local_16e8 = (SetMB *)0x3f80000000000000;
          pSVar55 = apSStack_d60[uVar33 * 0x16];
          local_17e8 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          uStack_17e0 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          lVar50 = (long)(1 << (SUB41(fStack_13d4,0) & 0x1f));
          local_1428 = (&mm_lookupmask_ps)[lVar50 * 2];
          uStack_1420 = *(undefined8 *)(embree::os_free + lVar50 * 0x10);
          pSStack_1880 = (SetMB *)local_1438;
          local_1798 = (SetMB *)0x0;
          local_1790 = (SetMB *)0x0;
          local_1788 = (SetMB *)0x0;
          local_1780 = (SetMB *)0x0;
          local_1770 = 0x3f800000;
          local_1708 = 0;
          local_1700 = (SetMB *)0x0;
          local_16f8 = (SetMB *)0x0;
          local_16f0 = (SetMB *)0x0;
          local_16e0 = 0x3f800000;
          local_1438[0] = fStack_13d0;
          local_1438[1] = fStack_13d0;
          local_1438[2] = fStack_13d0;
          local_1438[3] = fStack_13d0;
          local_1878 = (SetMB *)&local_1428;
          local_1888 = (SetMB *)&local_13d8;
          local_17d8 = local_17f8;
          uStack_17d0 = pSStack_17f0;
          local_17c8 = local_17e8;
          uStack_17c0 = uStack_17e0;
          local_17b8 = local_17f8;
          pSStack_17b0 = pSStack_17f0;
          local_17a8 = local_17e8;
          pSStack_17a0 = uStack_17e0;
          local_1768 = local_17f8;
          pSStack_1760 = pSStack_17f0;
          local_1758 = local_17e8;
          uStack_1750 = uStack_17e0;
          local_1748 = local_17f8;
          pSStack_1740 = pSStack_17f0;
          local_1738 = local_17e8;
          pSStack_1730 = uStack_17e0;
          local_1728 = local_17f8;
          pSStack_1720 = pSStack_17f0;
          local_1718 = local_17e8;
          pSStack_1710 = uStack_17e0;
          pSStack_1520 = (SetMB *)parallel_partitioning<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>
                                            (*(PrimRefMB **)(local_d38[uVar33 * 0x16] + 0x20),
                                             (ulong)pSVar3,(ulong)pSVar55,(EmptyTy *)&local_18b8,
                                             (PrimInfoMBT_conflict *)&local_17f8,
                                             (PrimInfoMBT_conflict *)&local_1768,
                                             (_lambda_embree__PrimRefMB_const___1_ *)&local_1888,
                                             (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimRefMB_const___2_
                                              *)&local_18e8,
                                             (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>_const___3_
                                              *)&local_18d8,0x80,0xc00);
          local_14f8 = local_d38[uVar33 * 0x16];
          local_1508 = local_1778;
          fVar58 = *(float *)((long)local_d38 + lVar34 + -4);
          local_1518 = local_1788;
          fVar64 = local_d40[uVar33 * 0x2c];
          local_1510 = local_1780;
          local_1500._4_4_ = (float)((ulong)local_1770 >> 0x20);
          local_1538 = local_17a8;
          pSStack_1530 = pSStack_17a0;
          local_1588 = local_17f8;
          uStack_1580 = pSStack_17f0;
          if (fVar58 <= local_1500._4_4_) {
            local_1500._4_4_ = fVar58;
          }
          local_1578 = local_17e8;
          uStack_1570 = uStack_17e0;
          local_1568 = local_17d8;
          uStack_1560 = uStack_17d0;
          local_1558 = local_17c8;
          uStack_1550 = uStack_17c0;
          local_1548 = local_17b8;
          uStack_1540 = pSStack_17b0;
          local_1500._0_4_ = (float)local_1770;
          fVar63 = fVar64;
          if (fVar64 <= (float)local_1500) {
            fVar63 = (float)local_1500;
          }
          local_1500 = CONCAT44(local_1500._4_4_,fVar63);
          uStack_14d0 = pSStack_1760;
          local_14d8 = (undefined1  [8])local_1768;
          local_1458 = local_16e8;
          local_1b08 = local_1718;
          pSStack_1b00 = pSStack_1710;
          local_1450._4_4_ = (float)((ulong)local_16e0 >> 0x20);
          uStack_1490 = pSStack_1720;
          local_1498 = (undefined1  [8])local_1728;
          local_1468 = local_16f8;
          if (fVar58 <= local_1450._4_4_) {
            local_1450._4_4_ = fVar58;
          }
          local_1460 = local_16f0;
          local_1450._0_4_ = (float)local_16e0;
          if (fVar64 <= (float)local_1450) {
            fVar64 = (float)local_1450;
          }
          local_14c8 = (undefined4)local_1758;
          uStack_14c4 = local_1758._4_4_;
          uStack_14c0 = (undefined4)uStack_1750;
          uStack_14bc = uStack_1750._4_4_;
          local_14b8 = SUB84(local_1748,0);
          fStack_14b4 = (float)((ulong)local_1748 >> 0x20);
          fStack_14b0 = SUB84(pSStack_1740,0);
          fStack_14ac = (float)((ulong)pSStack_1740 >> 0x20);
          local_14a8 = SUB84(local_1738,0);
          uStack_14a4 = (undefined4)((ulong)local_1738 >> 0x20);
          uStack_14a0 = SUB84(pSStack_1730,0);
          uStack_149c = (undefined4)((ulong)pSStack_1730 >> 0x20);
          local_1450 = CONCAT44(local_1450._4_4_,fVar64);
          local_1a58._0_4_ = (undefined4)local_17c8;
          local_1a58._4_4_ = local_17c8._4_4_;
          uStack_1a50._0_4_ = (undefined4)uStack_17c0;
          uStack_1a50._4_4_ = uStack_17c0._4_4_;
          local_1a68._0_4_ = (undefined4)local_17d8;
          local_1a68._4_4_ = local_17d8._4_4_;
          uStack_1a60._0_4_ = (undefined4)uStack_17d0;
          uStack_1a60._4_4_ = uStack_17d0._4_4_;
          local_1a78._0_4_ = (undefined4)local_17e8;
          local_1a78._4_4_ = local_17e8._4_4_;
          uStack_1a70._0_4_ = (undefined4)uStack_17e0;
          uStack_1a70._4_4_ = uStack_17e0._4_4_;
          fVar58 = local_1500._4_4_;
          pSVar48 = local_1748;
          pSVar41 = pSStack_1740;
          pSVar39 = local_1738;
          pSVar38 = pSStack_1730;
          local_1528 = pSVar3;
          local_1478 = pSStack_1520;
          pSStack_1470 = pSVar55;
          local_1448 = local_14f8;
          fVar59 = local_1450._4_4_;
LAB_0011581c:
          local_1ad8._0_4_ = (undefined4)local_1458;
          local_1af8._0_4_ = local_1458._4_4_;
          pSVar53 = local_1510;
          pSVar54 = local_1518;
          pSVar55 = local_14f8;
          pSVar94 = local_1588;
          pSVar98 = uStack_1580;
          pSVar90 = local_1548;
          pSVar92 = uStack_1540;
          pSVar87 = local_1538;
          pSVar89 = pSStack_1530;
          uVar82 = (undefined4)local_1508;
          uVar81 = local_1508._4_4_;
        }
        else {
          if (fStack_13cc != 2.8026e-45) {
            if (fStack_13cc == 1.4013e-45) {
              lVar50 = *(long *)(local_d38[uVar33 * 0x16] + 0x20) +
                       (long)apSStack_d60[uVar33 * 0x16] * 0x50;
              lVar49 = *(long *)(local_d38[uVar33 * 0x16] + 0x20) +
                       (&local_d68)[uVar33 * 0x16] * 0x50;
              if (lVar50 != lVar49) {
                lVar56 = (long)apSStack_d60[uVar33 * 0x16] * 0x50 +
                         (&local_d68)[uVar33 * 0x16] * -0x50;
                uVar51 = (lVar56 >> 4) * -0x3333333333333333;
                if (uVar51 == 0) {
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar49,lVar50,0xfffffffffffffffe);
                }
                else {
                  lVar7 = 0x3f;
                  if (uVar51 != 0) {
                    for (; uVar51 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar49,lVar50,(long)(int)lVar7 * 2);
                  if (0x500 < lVar56) {
                    lVar56 = lVar49 + 0x500;
                    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                              (lVar49,lVar56);
                    for (; lVar50 != lVar56; lVar56 = lVar56 + 0x50) {
                      std::
                      __unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                                (lVar56);
                    }
                    goto LAB_00118618;
                  }
                }
                std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                          (lVar49,lVar50);
              }
LAB_00118618:
              splitFallback(pSVar48,(SetMB *)&local_1588,(SetMB *)local_14d8);
            }
            else if (fStack_13cc == 4.2039e-45) {
              lVar50 = *(long *)(local_d38[uVar33 * 0x16] + 0x20) +
                       (long)apSStack_d60[uVar33 * 0x16] * 0x50;
              lVar49 = *(long *)(local_d38[uVar33 * 0x16] + 0x20) +
                       (&local_d68)[uVar33 * 0x16] * 0x50;
              if (lVar50 != lVar49) {
                lVar56 = (long)apSStack_d60[uVar33 * 0x16] * 0x50 +
                         (&local_d68)[uVar33 * 0x16] * -0x50;
                uVar51 = (lVar56 >> 4) * -0x3333333333333333;
                if (uVar51 == 0) {
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar49,lVar50,0xfffffffffffffffe);
                }
                else {
                  lVar7 = 0x3f;
                  if (uVar51 != 0) {
                    for (; uVar51 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar49,lVar50,(long)(int)lVar7 * 2);
                  if (0x500 < lVar56) {
                    lVar56 = lVar49 + 0x500;
                    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                              (lVar49,lVar56);
                    for (; lVar50 != lVar56; lVar56 = lVar56 + 0x50) {
                      std::
                      __unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                                (lVar56);
                    }
                    goto LAB_0011848b;
                  }
                }
                std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                          (lVar49,lVar50);
              }
LAB_0011848b:
              splitByGeometry(pSVar48,(SetMB *)&local_1588,(SetMB *)local_14d8);
              local_1b08 = local_1488;
              pSStack_1b00 = pSStack_1480;
              pSVar48 = (SetMB *)CONCAT44(fStack_14b4,local_14b8);
              pSVar41 = (SetMB *)CONCAT44(fStack_14ac,fStack_14b0);
              pSVar39 = (SetMB *)CONCAT44(uStack_14a4,local_14a8);
              pSVar38 = (SetMB *)CONCAT44(uStack_149c,uStack_14a0);
              pSVar52 = local_14e8;
              pSVar43 = local_1598;
              fVar64 = (float)local_1450;
              local_1a58._0_4_ = (undefined4)local_1558;
              local_1a58._4_4_ = local_1558._4_4_;
              uStack_1a50._0_4_ = (undefined4)uStack_1550;
              uStack_1a50._4_4_ = uStack_1550._4_4_;
              local_1a68._0_4_ = (float)local_1568;
              local_1a68._4_4_ = local_1568._4_4_;
              uStack_1a60._0_4_ = (float)uStack_1560;
              uStack_1a60._4_4_ = uStack_1560._4_4_;
              local_1a78._0_4_ = (undefined4)local_1578;
              local_1a78._4_4_ = local_1578._4_4_;
              uStack_1a70._0_4_ = (undefined4)uStack_1570;
              uStack_1a70._4_4_ = uStack_1570._4_4_;
              fVar63 = (float)local_1500;
              fVar58 = local_1500._4_4_;
              fVar59 = local_1450._4_4_;
              goto LAB_0011581c;
            }
            local_1b08 = local_1488;
            pSStack_1b00 = pSStack_1480;
            pSVar48 = (SetMB *)CONCAT44(fStack_14b4,local_14b8);
            pSVar41 = (SetMB *)CONCAT44(fStack_14ac,fStack_14b0);
            pSVar39 = (SetMB *)CONCAT44(uStack_14a4,local_14a8);
            pSVar38 = (SetMB *)CONCAT44(uStack_149c,uStack_14a0);
            fVar64 = (float)local_1450;
            local_1a58._0_4_ = (undefined4)local_1558;
            local_1a58._4_4_ = local_1558._4_4_;
            uStack_1a50._0_4_ = (undefined4)uStack_1550;
            uStack_1a50._4_4_ = uStack_1550._4_4_;
            local_1a68._0_4_ = (float)local_1568;
            local_1a68._4_4_ = local_1568._4_4_;
            uStack_1a60._0_4_ = (float)uStack_1560;
            uStack_1a60._4_4_ = uStack_1560._4_4_;
            local_1a78._0_4_ = (undefined4)local_1578;
            local_1a78._4_4_ = local_1578._4_4_;
            uStack_1a70._0_4_ = (undefined4)uStack_1570;
            uStack_1a70._4_4_ = uStack_1570._4_4_;
            fVar63 = (float)local_1500;
            fVar58 = local_1500._4_4_;
            fVar59 = local_1450._4_4_;
            goto LAB_0011581c;
          }
          local_18f8 = local_d40[uVar33 * 0x2c];
          pSVar3 = local_d38[uVar33 * 0x16];
          local_18f4 = fStack_13d0;
          puVar1 = param_2 + 9;
          local_18f0 = fStack_13d0;
          local_18ec = *(float *)((long)local_d38 + lVar34 + -4);
          pSVar38 = (SetMB *)operator_new(0x28);
          puVar46 = (undefined8 *)param_2[9];
          pSVar41 = (SetMB *)(&local_d68)[uVar33 * 0x16];
          pSVar39 = apSStack_d60[uVar33 * 0x16];
          *(undefined8 **)pSVar38 = puVar46;
          pSVar38[8] = (SetMB)0x0;
          *(ulong *)(pSVar38 + 0x10) = 0;
          *(ulong *)(pSVar38 + 0x18) = 0;
          *(ulong *)(pSVar38 + 0x20) = 0;
          uVar51 = (long)pSVar39 - (long)pSVar41;
          if (uVar51 != 0) {
            uVar36 = uVar51 * 0x50;
            (**(code **)*puVar46)(puVar46,uVar36,0);
            if (uVar36 < 0x1c00000) {
              uVar36 = embree::alignedMalloc(uVar36,0x10);
            }
            else {
              uVar36 = embree::os_malloc(uVar36,(bool *)(pSVar38 + 8));
            }
            pSVar41 = (SetMB *)(&local_d68)[uVar33 * 0x16];
            *(ulong *)(pSVar38 + 0x20) = uVar36;
            pSVar39 = apSStack_d60[uVar33 * 0x16];
            *(ulong *)(pSVar38 + 0x10) = uVar51;
            *(ulong *)(pSVar38 + 0x18) = uVar51;
            uVar51 = (long)pSVar39 - (long)pSVar41;
          }
          local_1768 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          pSStack_1760 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          local_18a0 = &local_1900;
          local_1758 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          uStack_1750 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          local_1708 = 0;
          local_1700 = (SetMB *)0x0;
          local_16f8 = (SetMB *)0x0;
          local_16f0 = (SetMB *)0x0;
          local_16e8 = (SetMB *)0x3f80000000000000;
          local_16e0 = 0x3f800000;
          local_1900 = pSVar38;
          local_18b8 = pSVar3;
          local_18b0 = (SetMB *)&local_18f8;
          local_18a8 = puVar1;
          local_1898 = pSVar48;
          local_1748 = local_1768;
          pSStack_1740 = pSStack_1760;
          local_1738 = local_1758;
          pSStack_1730 = uStack_1750;
          local_1728 = local_1768;
          pSStack_1720 = pSStack_1760;
          local_1718 = local_1758;
          pSStack_1710 = uStack_1750;
          if (uVar51 < 0xc00) {
            local_17f8 = pSVar41;
            pSStack_17f0 = pSVar39;
            HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
            ::
            split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
            ::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                      ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1888,
                       (range *)&local_18b8);
          }
          else {
            parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                      ((ulong)&local_1888,uVar51 + 0x7f >> 7,(ulong)pSVar41,(ulong)pSVar39,
                       (PrimInfoMBT_conflict *)&local_1768,
                       (_lambda_embree__range<unsigned_long>_const___1_ *)&local_18b8,
                       PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
          }
          local_1af8 = (SetMB *)&local_17f8;
          pSVar48 = apSStack_d60[uVar33 * 0x16];
          pSVar41 = (SetMB *)(&local_d68)[uVar33 * 0x16];
          uVar51 = (long)pSVar48 - (long)pSVar41;
          if ((long)local_1820 - (long)local_1828 != uVar51) {
            local_1768 = (SetMB *)&local_18f8;
            local_1820 = (SetMB *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_>
                                            (*(PrimRefMB **)(local_1900 + 0x20),0,uVar51,0x400,
                                             (_lambda_embree__PrimRefMB_const___1_ *)&local_1768);
            pSVar48 = apSStack_d60[uVar33 * 0x16];
            pSVar41 = (SetMB *)(&local_d68)[uVar33 * 0x16];
            uVar51 = (long)pSVar48 - (long)pSVar41;
          }
          uVar81 = local_1804;
          uVar82 = local_1808;
          pSVar53 = local_1810;
          pSVar54 = local_1818;
          pSVar89 = pSStack_1830;
          pSVar87 = local_1838;
          pSVar92 = pSStack_1840;
          pSVar90 = local_1848;
          pSVar39 = local_1878;
          pSVar98 = pSStack_1880;
          pSVar94 = local_1888;
          pSVar55 = local_1900;
          local_1528 = local_1828;
          fVar58 = local_17fc;
          if (local_18f4 <= local_17fc) {
            fVar58 = local_18f4;
          }
          fVar63 = local_18f8;
          if (local_18f8 <= local_1800) {
            fVar63 = local_1800;
          }
          local_1518 = local_1818;
          local_1510 = local_1810;
          local_14f8 = local_1900;
          local_1588 = local_1888;
          uStack_1580 = pSStack_1880;
          local_1578 = local_1878;
          uStack_1570 = pSStack_1870;
          local_1568 = local_1868;
          uStack_1560 = pSStack_1860;
          local_1558 = local_1858;
          uStack_1550 = pSStack_1850;
          local_1548 = local_1848;
          uStack_1540 = pSStack_1840;
          local_1538 = local_1838;
          pSStack_1530 = pSStack_1830;
          local_1508 = (SetMB *)CONCAT44(local_1804,local_1808);
          local_1500 = CONCAT44(fVar58,fVar63);
          local_1768 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          pSStack_1760 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          local_1758 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          uStack_1750 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          local_1708 = 0;
          local_1700 = (SetMB *)0x0;
          local_16f8 = (SetMB *)0x0;
          local_16f0 = (SetMB *)0x0;
          local_16e8 = (SetMB *)0x3f80000000000000;
          local_16e0 = 0x3f800000;
          uStack_1ad0 = pSStack_1880;
          local_1ad8 = (undefined1  [8])local_1888;
          local_1a78._0_4_ = SUB84(local_1878,0);
          local_1a78._4_4_ = (undefined4)((ulong)local_1878 >> 0x20);
          uStack_1a70._0_4_ = SUB84(pSStack_1870,0);
          uStack_1a70._4_4_ = (undefined4)((ulong)pSStack_1870 >> 0x20);
          local_1a68._0_4_ = SUB84(local_1868,0);
          local_1a68._4_4_ = (undefined4)((ulong)local_1868 >> 0x20);
          uStack_1a60._0_4_ = SUB84(pSStack_1860,0);
          uStack_1a60._4_4_ = (undefined4)((ulong)pSStack_1860 >> 0x20);
          local_1a58._0_4_ = SUB84(local_1858,0);
          local_1a58._4_4_ = (undefined4)((ulong)local_1858 >> 0x20);
          uStack_1a50._0_4_ = SUB84(pSStack_1850,0);
          uStack_1a50._4_4_ = (undefined4)((ulong)pSStack_1850 >> 0x20);
          local_18d8 = pSVar3;
          local_18d0 = (SetMB *)&local_18f0;
          local_18c8 = puVar1;
          local_1748 = local_1768;
          pSStack_1740 = pSStack_1760;
          local_1738 = local_1758;
          pSStack_1730 = uStack_1750;
          local_1728 = local_1768;
          pSStack_1720 = pSStack_1760;
          local_1718 = local_1758;
          pSStack_1710 = uStack_1750;
          pSStack_1520 = local_1820;
          if (uVar51 < 0xc00) {
            local_18e8 = pSVar41;
            local_18e0 = pSVar48;
            HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
            ::
            split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
            ::{lambda(embree::range<unsigned_long>const&)#3}::operator()
                      ((_lambda_embree__range<unsigned_long>const___3_ *)&local_17f8,
                       (range *)&local_18d8);
          }
          else {
            parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_3_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                      ((embree *)&local_17f8,uVar51 + 0x7f >> 7,(ulong)pSVar41,(ulong)pSVar48,0x80,
                       (PrimInfoMBT_conflict *)&local_1768,
                       (_lambda_embree__range<unsigned_long>_const___3_ *)&local_18d8,
                       PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
          }
          pSVar48 = (SetMB *)(&local_d68)[uVar33 * 0x16];
          lVar50 = (long)local_1790 - (long)local_1798;
          pSVar40 = pSVar48 + lVar50;
          local_1798 = pSVar48;
          local_1790 = pSVar40;
          if (lVar50 != (long)apSStack_d60[uVar33 * 0x16] - (long)pSVar48) {
            uStack_1ad0._0_4_ = (undefined4)uStack_1a70;
            local_1ad8 = (undefined1  [8])pSVar39;
            uStack_1ad0._4_4_ = uStack_1a70._4_4_;
            pSStack_1af0 = pSVar98;
            local_1af8 = pSVar94;
            local_1768 = (SetMB *)&local_18f0;
            pSVar40 = (SetMB *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_4_>
                                         (*(PrimRefMB **)(pSVar3 + 0x20),(ulong)pSVar48,
                                          (ulong)apSStack_d60[uVar33 * 0x16],0x400,
                                          (_lambda_embree__PrimRefMB_const___4_ *)&local_1768);
          }
          local_14c8 = (undefined4)local_17e8;
          uStack_14c4 = local_17e8._4_4_;
          uStack_14c0 = (undefined4)uStack_17e0;
          uStack_14bc = uStack_17e0._4_4_;
          local_1b08 = local_17a8;
          pSStack_1b00 = pSStack_17a0;
          uStack_1490 = pSStack_17b0;
          local_1498 = (undefined1  [8])local_17b8;
          local_1468 = local_1788;
          local_1460 = local_1780;
          local_1ad8._0_4_ = (undefined4)local_1778;
          uStack_14d0 = pSStack_17f0;
          local_14d8 = (undefined1  [8])local_17f8;
          fVar59 = local_1770._4_4_;
          if (local_18ec <= local_1770._4_4_) {
            fVar59 = local_18ec;
          }
          local_1af8._0_4_ = local_1778._4_4_;
          fVar64 = local_18f0;
          if (local_18f0 <= (float)local_1770) {
            fVar64 = (float)local_1770;
          }
          local_14b8 = SUB84(local_17d8,0);
          fStack_14b4 = (float)((ulong)local_17d8 >> 0x20);
          fStack_14b0 = SUB84(uStack_17d0,0);
          fStack_14ac = (float)((ulong)uStack_17d0 >> 0x20);
          local_14a8 = SUB84(local_17c8,0);
          uStack_14a4 = (undefined4)((ulong)local_17c8 >> 0x20);
          uStack_14a0 = SUB84(uStack_17c0,0);
          uStack_149c = (undefined4)((ulong)uStack_17c0 >> 0x20);
          local_1458 = local_1778;
          local_1951 = (bool)(local_1951 | pSVar38 != (SetMB *)0x0);
          local_1450 = CONCAT44(fVar59,fVar64);
          pSVar48 = local_17d8;
          pSVar41 = uStack_17d0;
          pSVar39 = local_17c8;
          pSVar38 = uStack_17c0;
          local_1478 = local_1798;
          pSStack_1470 = pSVar40;
          local_1448 = pSVar3;
        }
        lVar50 = local_50;
        pSVar32 = local_1448;
        pSVar40 = local_1460;
        pSVar3 = local_1468;
        auVar84 = _local_1498;
        uVar21 = uStack_14bc;
        uVar20 = uStack_14c0;
        uVar74 = uStack_14c4;
        uVar80 = local_14c8;
        auVar86 = _local_14d8;
        ppSVar4 = local_2d8[uVar33];
        if (*ppSVar4 == pSVar55) {
          ppSVar4[1] = ppSVar4[1] + 1;
          if (local_1448 != pSVar55) goto LAB_001158b9;
LAB_00116631:
          local_2d8[local_258] = ppSVar4;
          pSVar47 = ppSVar4[1];
        }
        else {
          local_50 = local_50 + 1;
          (&local_250)[lVar50 * 2] = pSVar55;
          (&local_248)[lVar50 * 2] = 1;
          local_2d8[uVar33] = &local_250 + lVar50 * 2;
          if (local_1448 == *ppSVar4) goto LAB_00116631;
LAB_001158b9:
          lVar50 = local_50;
          local_50 = local_50 + 1;
          (&local_250)[lVar50 * 2] = local_1448;
          (&local_248)[lVar50 * 2] = 1;
          local_2d8[local_258] = &local_250 + lVar50 * 2;
          pSVar47 = ppSVar4[1] + -1;
        }
        ppSVar4[1] = pSVar47;
        local_1488 = local_1b08;
        pSStack_1480 = pSStack_1b00;
        if ((pSVar47 == (SetMB *)0x0) && (pSVar47 = *ppSVar4, pSVar47 != (SetMB *)0x0)) {
          pvVar2 = *(void **)(pSVar47 + 0x20);
          lVar50 = *(long *)(pSVar47 + 0x18);
          if (pvVar2 != (void *)0x0) {
            if ((ulong)(lVar50 * 0x50) < 0x1c00000) {
              embree::alignedFree(pvVar2);
            }
            else {
              embree::os_free(pvVar2,lVar50 * 0x50,(bool)pSVar47[8]);
            }
          }
          if (lVar50 != 0) {
            (**(code **)**(undefined8 **)pSVar47)(*(undefined8 **)pSVar47,lVar50 * -0x50,1);
          }
          operator_delete(pSVar47,0x28);
        }
        local_dd8[uVar33 * 0x16] = (long)pSVar43;
        uVar51 = local_258;
        (&local_d68)[uVar33 * 0x16] = (ulong)local_1528;
        apSStack_d60[uVar33 * 0x16] = pSStack_1520;
        apSStack_d60[uVar33 * 0x16 + 1] = pSVar54;
        *(undefined4 *)(&local_d48 + uVar33 * 0x16) = uVar82;
        apSStack_d60[uVar33 * 0x16 + 2] = pSVar53;
        local_d38[uVar33 * 0x16] = pSVar55;
        *(SetMB **)(local_dc8 + uVar33 * 0x2c) = pSVar94;
        (&uStack_dc0)[uVar33 * 0x16] = pSVar98;
        *(undefined4 *)(&local_db8 + uVar33 * 0x16) = (undefined4)local_1a78;
        *(undefined4 *)((long)&local_db8 + lVar34 + 4) = local_1a78._4_4_;
        *(undefined4 *)(&uStack_db0 + uVar33 * 0x16) = (undefined4)uStack_1a70;
        *(undefined4 *)((long)&uStack_db0 + lVar34 + 4) = uStack_1a70._4_4_;
        *(undefined4 *)(&local_da8 + uVar33 * 0x16) = (undefined4)local_1a68;
        *(undefined4 *)((long)&local_da8 + lVar34 + 4) = local_1a68._4_4_;
        *(undefined4 *)(&uStack_da0 + uVar33 * 0x16) = (undefined4)uStack_1a60;
        *(undefined4 *)((long)&uStack_da0 + lVar34 + 4) = uStack_1a60._4_4_;
        *(undefined4 *)(&local_d98 + uVar33 * 0x16) = (undefined4)local_1a58;
        *(undefined4 *)((long)&local_d98 + lVar34 + 4) = local_1a58._4_4_;
        *(undefined4 *)(&uStack_d90 + uVar33 * 0x16) = (undefined4)uStack_1a50;
        *(undefined4 *)((long)&uStack_d90 + lVar34 + 4) = uStack_1a50._4_4_;
        local_d88[uVar33 * 0x16] = pSVar90;
        local_d88[uVar33 * 0x16 + 1] = pSVar92;
        local_d88[uVar33 * 0x16 + 2] = pSVar87;
        local_d88[uVar33 * 0x16 + 3] = pSVar89;
        *(undefined4 *)((long)&local_d48 + lVar34 + 4) = uVar81;
        local_d40[uVar33 * 0x2c] = fVar63;
        *(float *)((long)local_d38 + lVar34 + -4) = fVar58;
        lVar34 = local_258 * 0xb0;
        local_dd8[local_258 * 0x16] = (long)pSVar52;
        (&local_d98)[uVar51 * 0x16] = pSVar39;
        (&uStack_d90)[uVar51 * 0x16] = pSVar38;
        apSStack_d60[uVar51 * 0x16 + 1] = pSVar3;
        local_d88[uVar51 * 0x16 + 2] = local_1b08;
        local_d88[uVar51 * 0x16 + 3] = pSStack_1b00;
        (&local_da8)[uVar51 * 0x16] = pSVar48;
        (&uStack_da0)[uVar51 * 0x16] = pSVar41;
        (&local_d68)[uVar51 * 0x16] = (ulong)local_1478;
        apSStack_d60[uVar51 * 0x16] = pSStack_1470;
        *(undefined1 (*) [16])(local_dc8 + uVar51 * 0x2c) = auVar86;
        *(undefined4 *)(&local_db8 + uVar51 * 0x16) = uVar80;
        *(undefined4 *)((long)&local_db8 + lVar34 + 4) = uVar74;
        *(undefined4 *)(&uStack_db0 + uVar51 * 0x16) = uVar20;
        *(undefined4 *)((long)&uStack_db0 + lVar34 + 4) = uVar21;
        *(undefined1 (*) [16])(local_d88 + uVar51 * 0x16) = auVar84;
        apSStack_d60[uVar51 * 0x16 + 2] = pSVar40;
        local_d38[uVar51 * 0x16] = pSVar32;
        *(undefined4 *)(&local_d48 + uVar51 * 0x16) = local_1ad8._0_4_;
        *(undefined4 *)((long)&local_d48 + lVar34 + 4) = local_1af8._0_4_;
        local_d40[uVar51 * 0x2c] = fVar64;
        *(float *)((long)local_d38 + lVar34 + -4) = fVar59;
        local_258 = local_258 + 1;
      } while (local_258 < *param_2);
    }
    if (local_258 != 0) {
LAB_00115ee6:
      uVar33 = 0;
      pfVar35 = local_d40;
      do {
        while (uVar42 = *(undefined8 *)pfVar35, (float)uVar42 <= *(float *)(param_3 + 0x13)) {
          uVar33 = uVar33 + 1;
          pfVar35 = pfVar35 + 0x2c;
          local_1951 = (bool)(local_1951 |
                             (float)((ulong)uVar42 >> 0x20) < *(float *)((long)param_3 + 0x9c));
          if (uVar33 == local_258) goto LAB_00115f59;
        }
        uVar33 = uVar33 + 1;
        local_1951 = true;
        pfVar35 = pfVar35 + 0x2c;
      } while (uVar33 != local_258);
    }
LAB_00115f59:
    pSVar52 = *(SetMB **)param_8;
joined_r0x0011674c:
    if (local_1951) {
      local_1598 = (SetMB *)0x100;
      if (param_7 != *(FastAllocator **)(pSVar52 + 8)) {
        embree::MutexSys::lock();
        if (*(long *)(pSVar52 + 8) != 0) {
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x118) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x118) +
               *(long *)(pSVar52 + 0xa8) + *(long *)(pSVar52 + 0x68);
          UNLOCK();
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x120) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x120) +
               (((*(long *)(pSVar52 + 0x98) + *(long *)(pSVar52 + 0x58)) - *(long *)(pSVar52 + 0x50)
                ) - *(long *)(pSVar52 + 0x90));
          UNLOCK();
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x128) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x128) +
               *(long *)(pSVar52 + 0xb0) + *(long *)(pSVar52 + 0x70);
          UNLOCK();
        }
        *(undefined8 *)(pSVar52 + 0x48) = 0;
        *(undefined8 *)(pSVar52 + 0x58) = 0;
        *(undefined8 *)(pSVar52 + 0x50) = 0;
        *(undefined8 *)(pSVar52 + 0x68) = 0;
        *(undefined8 *)(pSVar52 + 0x70) = 0;
        *(undefined8 *)(pSVar52 + 0x60) = 0;
        if (param_7 == (FastAllocator *)0x0) {
          *(undefined8 *)(pSVar52 + 0x88) = 0;
          uVar42 = 0;
          *(undefined8 *)(pSVar52 + 0x98) = 0;
          *(undefined8 *)(pSVar52 + 0x90) = 0;
          *(undefined8 *)(pSVar52 + 0xa8) = 0;
          *(undefined8 *)(pSVar52 + 0xb0) = 0;
        }
        else {
          uVar42 = *(undefined8 *)(param_7 + 0x10);
          *(undefined8 *)(pSVar52 + 0x88) = 0;
          *(undefined8 *)(pSVar52 + 0x98) = 0;
          *(undefined8 *)(pSVar52 + 0x60) = uVar42;
          *(undefined8 *)(pSVar52 + 0x90) = 0;
          *(undefined8 *)(pSVar52 + 0xa8) = 0;
          *(undefined8 *)(pSVar52 + 0xb0) = 0;
          *(undefined8 *)(pSVar52 + 0xa0) = 0;
          uVar42 = *(undefined8 *)(param_7 + 0x10);
        }
        *(undefined8 *)(pSVar52 + 0xa0) = uVar42;
        LOCK();
        *(FastAllocator **)(pSVar52 + 8) = param_7;
        UNLOCK();
        local_14e8 = pSVar52;
        embree::MutexSys::lock();
        puVar46 = *(undefined8 **)(param_7 + 0x138);
        if (puVar46 == *(undefined8 **)(param_7 + 0x140)) {
          std::
          vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
          ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                    ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                      *)(param_7 + 0x130),puVar46,&local_14e8);
        }
        else {
          *puVar46 = pSVar52;
          *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
        }
        embree::MutexSys::unlock();
        embree::MutexSys::unlock();
      }
      *(long *)(param_8 + 0x28) = *(long *)(param_8 + 0x28) + 0x100;
      lVar34 = *(long *)(param_8 + 0x10);
      uVar51 = (ulong)(-(int)lVar34 & 0xf);
      uVar33 = lVar34 + 0x100 + uVar51;
      *(ulong *)(param_8 + 0x10) = uVar33;
      if (*(ulong *)(param_8 + 0x18) < uVar33) {
        *(long *)(param_8 + 0x10) = lVar34;
        if (*(SetMB **)(param_8 + 0x20) < (SetMB *)0x400) {
          puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_1598,0x40,false);
        }
        else {
          local_14e8 = *(SetMB **)(param_8 + 0x20);
          puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_14e8,0x40,true);
          *(undefined8 **)(param_8 + 8) = puVar46;
          *(long *)(param_8 + 0x30) =
               (*(long *)(param_8 + 0x18) + *(long *)(param_8 + 0x30)) - *(long *)(param_8 + 0x10);
          *(undefined8 *)(param_8 + 0x10) = 0x100;
          *(SetMB **)(param_8 + 0x18) = local_14e8;
          if (local_14e8 < (SetMB *)0x100) {
            local_14e8 = *(SetMB **)(param_8 + 0x20);
            *(undefined8 *)(param_8 + 0x10) = 0;
            puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_14e8,0x40,false);
            *(undefined8 **)(param_8 + 8) = puVar46;
            *(long *)(param_8 + 0x30) =
                 (*(long *)(param_8 + 0x18) + *(long *)(param_8 + 0x30)) - *(long *)(param_8 + 0x10)
            ;
            *(undefined8 *)(param_8 + 0x10) = 0x100;
            *(SetMB **)(param_8 + 0x18) = local_14e8;
            if (local_14e8 < (SetMB *)0x100) {
              puVar46 = (undefined8 *)0x0;
              *(undefined8 *)(param_8 + 0x10) = 0;
            }
          }
        }
      }
      else {
        *(ulong *)(param_8 + 0x30) = *(long *)(param_8 + 0x30) + uVar51;
        puVar46 = (undefined8 *)(*(long *)(param_8 + 8) + -0x100 + uVar33);
      }
      auVar86._4_4_ = uStack_1a9c;
      auVar86._0_4_ = uStack_1a9c;
      auVar86._8_4_ = uStack_1a9c;
      auVar86._12_4_ = uStack_1a9c;
      uVar42 = CONCAT44(fStack_1aac,fStack_1aac);
      uVar16 = CONCAT44(fStack_1aac,fStack_1aac);
      *puVar46 = 8;
      puVar46[1] = 8;
      puVar46[2] = 8;
      puVar46[3] = 8;
      *(undefined1 (*) [16])(puVar46 + 0x1c) = auVar86;
      puVar46[0x1e] = uVar42;
      puVar46[0x1f] = uVar16;
      *(undefined1 (*) [16])(puVar46 + 0xc) = auVar86;
      *(undefined1 (*) [16])(puVar46 + 8) = auVar86;
      *(undefined1 (*) [16])(puVar46 + 4) = auVar86;
      puVar46[0xe] = uVar42;
      puVar46[0xf] = uVar16;
      puVar46[10] = uVar42;
      puVar46[0xb] = uVar16;
      puVar46[6] = uVar42;
      puVar46[7] = uVar16;
      *(undefined1 (*) [16])(puVar46 + 0x18) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x14) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x1a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x16) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x12) = (undefined1  [16])0x0;
      uVar33 = (ulong)puVar46 | 6;
    }
    else {
      local_1598 = (SetMB *)0xe0;
      if (param_7 != *(FastAllocator **)(pSVar52 + 8)) {
        embree::MutexSys::lock();
        if (*(long *)(pSVar52 + 8) != 0) {
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x118) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x118) +
               *(long *)(pSVar52 + 0xa8) + *(long *)(pSVar52 + 0x68);
          UNLOCK();
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x120) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x120) +
               (((*(long *)(pSVar52 + 0x98) + *(long *)(pSVar52 + 0x58)) - *(long *)(pSVar52 + 0x50)
                ) - *(long *)(pSVar52 + 0x90));
          UNLOCK();
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x128) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x128) +
               *(long *)(pSVar52 + 0xb0) + *(long *)(pSVar52 + 0x70);
          UNLOCK();
        }
        *(undefined8 *)(pSVar52 + 0x48) = 0;
        *(undefined8 *)(pSVar52 + 0x58) = 0;
        *(undefined8 *)(pSVar52 + 0x50) = 0;
        *(undefined8 *)(pSVar52 + 0x68) = 0;
        *(undefined8 *)(pSVar52 + 0x70) = 0;
        *(undefined8 *)(pSVar52 + 0x60) = 0;
        if (param_7 == (FastAllocator *)0x0) {
          *(undefined8 *)(pSVar52 + 0x88) = 0;
          uVar42 = 0;
          *(undefined8 *)(pSVar52 + 0x98) = 0;
          *(undefined8 *)(pSVar52 + 0x90) = 0;
          *(undefined8 *)(pSVar52 + 0xa8) = 0;
          *(undefined8 *)(pSVar52 + 0xb0) = 0;
        }
        else {
          uVar42 = *(undefined8 *)(param_7 + 0x10);
          *(undefined8 *)(pSVar52 + 0x88) = 0;
          *(undefined8 *)(pSVar52 + 0x98) = 0;
          *(undefined8 *)(pSVar52 + 0x60) = uVar42;
          *(undefined8 *)(pSVar52 + 0x90) = 0;
          *(undefined8 *)(pSVar52 + 0xa8) = 0;
          *(undefined8 *)(pSVar52 + 0xb0) = 0;
          *(undefined8 *)(pSVar52 + 0xa0) = 0;
          uVar42 = *(undefined8 *)(param_7 + 0x10);
        }
        *(undefined8 *)(pSVar52 + 0xa0) = uVar42;
        LOCK();
        *(FastAllocator **)(pSVar52 + 8) = param_7;
        UNLOCK();
        local_14e8 = pSVar52;
        embree::MutexSys::lock();
        puVar46 = *(undefined8 **)(param_7 + 0x138);
        if (puVar46 == *(undefined8 **)(param_7 + 0x140)) {
          std::
          vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
          ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                    ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                      *)(param_7 + 0x130),puVar46,&local_14e8);
        }
        else {
          *puVar46 = pSVar52;
          *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
        }
        embree::MutexSys::unlock();
        embree::MutexSys::unlock();
      }
      *(long *)(param_8 + 0x28) = *(long *)(param_8 + 0x28) + 0xe0;
      lVar34 = *(long *)(param_8 + 0x10);
      uVar51 = (ulong)(-(int)lVar34 & 0xf);
      uVar33 = lVar34 + 0xe0 + uVar51;
      *(ulong *)(param_8 + 0x10) = uVar33;
      if (*(ulong *)(param_8 + 0x18) < uVar33) {
        *(long *)(param_8 + 0x10) = lVar34;
        if (*(SetMB **)(param_8 + 0x20) < (SetMB *)0x380) {
          puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_1598,0x40,false);
        }
        else {
          local_14e8 = *(SetMB **)(param_8 + 0x20);
          puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_14e8,0x40,true);
          *(undefined8 **)(param_8 + 8) = puVar46;
          *(long *)(param_8 + 0x30) =
               (*(long *)(param_8 + 0x18) + *(long *)(param_8 + 0x30)) - *(long *)(param_8 + 0x10);
          *(undefined8 *)(param_8 + 0x10) = 0xe0;
          *(SetMB **)(param_8 + 0x18) = local_14e8;
          if (local_14e8 < (SetMB *)0xe0) {
            local_14e8 = *(SetMB **)(param_8 + 0x20);
            *(undefined8 *)(param_8 + 0x10) = 0;
            puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_14e8,0x40,false);
            *(undefined8 **)(param_8 + 8) = puVar46;
            *(long *)(param_8 + 0x30) =
                 (*(long *)(param_8 + 0x18) + *(long *)(param_8 + 0x30)) - *(long *)(param_8 + 0x10)
            ;
            *(undefined8 *)(param_8 + 0x10) = 0xe0;
            *(SetMB **)(param_8 + 0x18) = local_14e8;
            if (local_14e8 < (SetMB *)0xe0) {
              puVar46 = (undefined8 *)0x0;
              *(undefined8 *)(param_8 + 0x10) = 0;
            }
          }
        }
      }
      else {
        *(ulong *)(param_8 + 0x30) = *(long *)(param_8 + 0x30) + uVar51;
        puVar46 = (undefined8 *)(*(long *)(param_8 + 8) + -0xe0 + uVar33);
      }
      uVar42 = CONCAT44(uStack_1a9c,uStack_1a9c);
      uVar16 = CONCAT44(uStack_1a9c,uStack_1a9c);
      *puVar46 = 8;
      puVar46[1] = 8;
      puVar46[0xc] = uVar42;
      puVar46[0xd] = uVar16;
      puVar46[8] = uVar42;
      puVar46[9] = uVar16;
      puVar46[4] = uVar42;
      puVar46[5] = uVar16;
      uVar42 = CONCAT44(fStack_1aac,fStack_1aac);
      uVar16 = CONCAT44(fStack_1aac,fStack_1aac);
      puVar46[2] = 8;
      puVar46[3] = 8;
      puVar46[0xe] = uVar42;
      puVar46[0xf] = uVar16;
      puVar46[10] = uVar42;
      puVar46[0xb] = uVar16;
      puVar46[6] = uVar42;
      puVar46[7] = uVar16;
      *(undefined1 (*) [16])(puVar46 + 0x18) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x14) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x1a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x16) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x12) = (undefined1  [16])0x0;
      uVar33 = (ulong)puVar46 | 1;
    }
    if (param_2[7] < (ulong)(param_3[0xf] - param_3[0xe])) {
      local_14e8 = (SetMB *)&local_13d8;
      uStack_14e0 = local_1ac8;
      local_14d8 = (undefined1  [8])param_2;
      local_1768 = (SetMB *)0x0;
      TaskScheduler::
      spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,local_258,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_14e8,
                 (TaskGroupContext *)&local_1768);
      embree::TaskScheduler::wait();
      if (local_1768 != (SetMB *)0x0) goto LAB_001188d3;
      if (local_258 == 0) {
        auVar88._4_4_ = uStack_1a9c;
        auVar88._0_4_ = uStack_1a9c;
        auVar88._8_4_ = uStack_1a9c;
        auVar88._12_4_ = uStack_1a9c;
        auVar84._4_4_ = fStack_1aac;
        auVar84._0_4_ = fStack_1aac;
        auVar84._8_4_ = fStack_1aac;
        auVar84._12_4_ = fStack_1aac;
        auVar86 = auVar84;
        auVar91 = auVar88;
      }
      else {
        auVar84._4_4_ = fStack_1aac;
        auVar84._0_4_ = fStack_1aac;
        auVar84._8_4_ = fStack_1aac;
        auVar84._12_4_ = fStack_1aac;
        auVar88._4_4_ = uStack_1a9c;
        auVar88._0_4_ = uStack_1a9c;
        auVar88._8_4_ = uStack_1a9c;
        auVar88._12_4_ = uStack_1a9c;
        pauVar44 = (undefined1 (*) [16])local_13c8;
        auVar86 = auVar84;
        auVar91 = auVar88;
        do {
          auVar88 = minps(auVar88,*pauVar44);
          auVar84 = maxps(auVar84,pauVar44[1]);
          pauVar45 = pauVar44 + 6;
          auVar91 = minps(auVar91,pauVar44[2]);
          auVar86 = maxps(auVar86,pauVar44[3]);
          pauVar44 = pauVar45;
        } while ((undefined1 (*) [16])local_13c8 + local_258 * 6 != pauVar45);
        if (((uint)uVar33 & 0xf) == 1) {
LAB_00116389:
          uVar18 = _LC36;
          uVar17 = _LC6;
          fVar58 = _LC43;
          uVar81 = _LC40;
          uVar82 = _LC38;
          fVar64 = _LC3;
          uVar36 = uVar33 & 0xfffffffffffffff0;
          uVar51 = uVar36;
          pfVar35 = &local_13d8;
          do {
            *(undefined8 *)(uVar51 * 2 - uVar36) = *(undefined8 *)pfVar35;
            fVar63 = pfVar35[0x14];
            uVar37 = uVar51 + 4;
            fVar100 = fVar64 / (pfVar35[0x15] - fVar63);
            fVar59 = (float)((uint)fVar63 ^ uVar18) * fVar100;
            fVar100 = (fVar64 - fVar63) * fVar100;
            fVar93 = fVar64 - fVar59;
            fVar63 = fVar64 - fVar100;
            auVar75._0_4_ = pfVar35[0x10] * fVar59 + pfVar35[8] * fVar93;
            auVar75._4_4_ = pfVar35[0x11] * fVar59 + pfVar35[9] * fVar93;
            auVar75._8_4_ = pfVar35[0x12] * fVar59 + pfVar35[10] * fVar93;
            auVar75._12_4_ = pfVar35[0x13] * fVar59 + pfVar35[0xb] * fVar93;
            auVar66._0_4_ = fVar59 * pfVar35[0xc] + fVar93 * pfVar35[4];
            auVar66._4_4_ = fVar59 * pfVar35[0xd] + fVar93 * pfVar35[5];
            auVar66._8_4_ = fVar59 * pfVar35[0xe] + fVar93 * pfVar35[6];
            auVar66._12_4_ = fVar59 * pfVar35[0xf] + fVar93 * pfVar35[7];
            auVar11._4_4_ = uVar82;
            auVar11._0_4_ = uVar82;
            auVar11._8_4_ = uVar82;
            auVar11._12_4_ = uVar82;
            auVar76 = maxps(auVar75,auVar11);
            auVar8._4_4_ = uVar81;
            auVar8._0_4_ = uVar81;
            auVar8._8_4_ = uVar81;
            auVar8._12_4_ = uVar81;
            auVar67 = minps(auVar66,auVar8);
            auVar95._0_4_ = pfVar35[0x10] * fVar100 + pfVar35[8] * fVar63;
            auVar95._4_4_ = pfVar35[0x11] * fVar100 + pfVar35[9] * fVar63;
            auVar95._8_4_ = pfVar35[0x12] * fVar100 + pfVar35[10] * fVar63;
            auVar95._12_4_ = pfVar35[0x13] * fVar100 + pfVar35[0xb] * fVar63;
            auVar60._0_4_ = fVar100 * pfVar35[0xc] + fVar63 * pfVar35[4];
            auVar60._4_4_ = fVar100 * pfVar35[0xd] + fVar63 * pfVar35[5];
            auVar60._8_4_ = fVar100 * pfVar35[0xe] + fVar63 * pfVar35[6];
            auVar60._12_4_ = fVar100 * pfVar35[0xf] + fVar63 * pfVar35[7];
            auVar12._4_4_ = uVar82;
            auVar12._0_4_ = uVar82;
            auVar12._8_4_ = uVar82;
            auVar12._12_4_ = uVar82;
            auVar96 = maxps(auVar95,auVar12);
            auVar9._4_4_ = uVar81;
            auVar9._0_4_ = uVar81;
            auVar9._8_4_ = uVar81;
            auVar9._12_4_ = uVar81;
            auVar61 = minps(auVar60,auVar9);
            fVar63 = (float)((uint)auVar76._0_4_ & uVar17) * fVar58 + auVar76._0_4_;
            fVar59 = (float)((uint)auVar76._4_4_ & uVar17) * fVar58 + auVar76._4_4_;
            fVar100 = (float)((uint)auVar76._8_4_ & uVar17) * fVar58 + auVar76._8_4_;
            *(float *)(uVar51 + 0x30) = fVar63;
            fVar93 = auVar67._0_4_ - (float)((uint)auVar67._0_4_ & uVar17) * fVar58;
            fVar70 = auVar67._4_4_ - (float)((uint)auVar67._4_4_ & uVar17) * fVar58;
            fVar72 = auVar67._8_4_ - (float)((uint)auVar67._8_4_ & uVar17) * fVar58;
            *(float *)(uVar51 + 0x20) = fVar93;
            *(float *)(uVar51 + 0x80) =
                 (auVar61._0_4_ - (float)((uint)auVar61._0_4_ & uVar17) * fVar58) - fVar93;
            *(float *)(uVar51 + 0x40) = fVar70;
            *(float *)(uVar51 + 0x60) = fVar72;
            *(float *)(uVar51 + 0x50) = fVar59;
            *(float *)(uVar51 + 0x70) = fVar100;
            *(float *)(uVar51 + 0xa0) =
                 (auVar61._4_4_ - (float)((uint)auVar61._4_4_ & uVar17) * fVar58) - fVar70;
            *(float *)(uVar51 + 0xc0) =
                 (auVar61._8_4_ - (float)((uint)auVar61._8_4_ & uVar17) * fVar58) - fVar72;
            *(float *)(uVar51 + 0x90) =
                 ((float)((uint)auVar96._0_4_ & uVar17) * fVar58 + auVar96._0_4_) - fVar63;
            *(float *)(uVar51 + 0xb0) =
                 ((float)((uint)auVar96._4_4_ & uVar17) * fVar58 + auVar96._4_4_) - fVar59;
            *(float *)(uVar51 + 0xd0) =
                 ((float)((uint)auVar96._8_4_ & uVar17) * fVar58 + auVar96._8_4_) - fVar100;
            uVar51 = uVar37;
            pfVar35 = pfVar35 + 0x18;
          } while (uVar36 + local_258 * 4 != uVar37);
        }
        else {
LAB_00117c8b:
          uVar18 = _LC36;
          uVar17 = _LC6;
          fVar63 = _LC43;
          uVar81 = _LC40;
          uVar82 = _LC38;
          fVar58 = _LC35;
          fVar64 = _LC3;
          if (local_258 != 0) {
            pfVar35 = &local_13d8;
            uVar36 = uVar33 & 0xfffffffffffffff0;
            uVar51 = uVar36;
            do {
              *(undefined8 *)(uVar51 * 2 - uVar36) = *(undefined8 *)pfVar35;
              fVar59 = pfVar35[0x14];
              fVar93 = fVar64 / (pfVar35[0x15] - fVar59);
              fVar100 = (float)((uint)fVar59 ^ uVar18) * fVar93;
              fVar93 = (fVar64 - fVar59) * fVar93;
              fVar70 = fVar64 - fVar100;
              fVar59 = fVar64 - fVar93;
              auVar77._0_4_ = pfVar35[0x10] * fVar100 + pfVar35[8] * fVar70;
              auVar77._4_4_ = pfVar35[0x11] * fVar100 + pfVar35[9] * fVar70;
              auVar77._8_4_ = pfVar35[0x12] * fVar100 + pfVar35[10] * fVar70;
              auVar77._12_4_ = pfVar35[0x13] * fVar100 + pfVar35[0xb] * fVar70;
              auVar68._0_4_ = fVar100 * pfVar35[0xc] + fVar70 * pfVar35[4];
              auVar68._4_4_ = fVar100 * pfVar35[0xd] + fVar70 * pfVar35[5];
              auVar68._8_4_ = fVar100 * pfVar35[0xe] + fVar70 * pfVar35[6];
              auVar68._12_4_ = fVar100 * pfVar35[0xf] + fVar70 * pfVar35[7];
              auVar13._4_4_ = uVar82;
              auVar13._0_4_ = uVar82;
              auVar13._8_4_ = uVar82;
              auVar13._12_4_ = uVar82;
              auVar76 = maxps(auVar77,auVar13);
              auVar96._4_4_ = uVar81;
              auVar96._0_4_ = uVar81;
              auVar96._8_4_ = uVar81;
              auVar96._12_4_ = uVar81;
              auVar67 = minps(auVar68,auVar96);
              auVar97._0_4_ = pfVar35[0x10] * fVar93 + pfVar35[8] * fVar59;
              auVar97._4_4_ = pfVar35[0x11] * fVar93 + pfVar35[9] * fVar59;
              auVar97._8_4_ = pfVar35[0x12] * fVar93 + pfVar35[10] * fVar59;
              auVar97._12_4_ = pfVar35[0x13] * fVar93 + pfVar35[0xb] * fVar59;
              auVar62._0_4_ = fVar93 * pfVar35[0xc] + fVar59 * pfVar35[4];
              auVar62._4_4_ = fVar93 * pfVar35[0xd] + fVar59 * pfVar35[5];
              auVar62._8_4_ = fVar93 * pfVar35[0xe] + fVar59 * pfVar35[6];
              auVar62._12_4_ = fVar93 * pfVar35[0xf] + fVar59 * pfVar35[7];
              auVar14._4_4_ = uVar82;
              auVar14._0_4_ = uVar82;
              auVar14._8_4_ = uVar82;
              auVar14._12_4_ = uVar82;
              auVar96 = maxps(auVar97,auVar14);
              auVar10._4_4_ = uVar81;
              auVar10._0_4_ = uVar81;
              auVar10._8_4_ = uVar81;
              auVar10._12_4_ = uVar81;
              auVar61 = minps(auVar62,auVar10);
              fVar59 = (float)((uint)auVar76._0_4_ & uVar17) * fVar63 + auVar76._0_4_;
              fVar100 = (float)((uint)auVar76._4_4_ & uVar17) * fVar63 + auVar76._4_4_;
              fVar93 = (float)((uint)auVar76._8_4_ & uVar17) * fVar63 + auVar76._8_4_;
              *(float *)(uVar51 + 0x30) = fVar59;
              fVar70 = auVar67._0_4_ - (float)((uint)auVar67._0_4_ & uVar17) * fVar63;
              fVar72 = auVar67._4_4_ - (float)((uint)auVar67._4_4_ & uVar17) * fVar63;
              fVar73 = auVar67._8_4_ - (float)((uint)auVar67._8_4_ & uVar17) * fVar63;
              *(float *)(uVar51 + 0x20) = fVar70;
              *(float *)(uVar51 + 0x80) =
                   (auVar61._0_4_ - (float)((uint)auVar61._0_4_ & uVar17) * fVar63) - fVar70;
              *(float *)(uVar51 + 0x40) = fVar72;
              *(float *)(uVar51 + 0x60) = fVar73;
              *(float *)(uVar51 + 0x50) = fVar100;
              *(float *)(uVar51 + 0x70) = fVar93;
              *(float *)(uVar51 + 0xa0) =
                   (auVar61._4_4_ - (float)((uint)auVar61._4_4_ & uVar17) * fVar63) - fVar72;
              *(float *)(uVar51 + 0xc0) =
                   (auVar61._8_4_ - (float)((uint)auVar61._8_4_ & uVar17) * fVar63) - fVar73;
              *(float *)(uVar51 + 0x90) =
                   ((float)((uint)auVar96._0_4_ & uVar17) * fVar63 + auVar96._0_4_) - fVar59;
              *(float *)(uVar51 + 0xd0) =
                   ((float)((uint)auVar96._8_4_ & uVar17) * fVar63 + auVar96._8_4_) - fVar93;
              *(float *)(uVar51 + 0xb0) =
                   ((float)((uint)auVar96._4_4_ & uVar17) * fVar63 + auVar96._4_4_) - fVar100;
              *(float *)(uVar51 + 0xe0) = pfVar35[0x14];
              fVar59 = pfVar35[0x15];
              if (pfVar35[0x15] == fVar64) {
                fVar59 = fVar58;
              }
              *(float *)(uVar51 + 0xf0) = fVar59;
              uVar51 = uVar51 + 4;
              pfVar35 = pfVar35 + 0x18;
            } while (uVar36 + local_258 * 4 != uVar51);
          }
        }
      }
    }
    else {
      lVar34 = local_258 - 1;
      if (lVar34 < 0) {
        auVar84._4_4_ = fStack_1aac;
        auVar84._0_4_ = fStack_1aac;
        auVar84._8_4_ = fStack_1aac;
        auVar84._12_4_ = fStack_1aac;
        auVar88._4_4_ = uStack_1a9c;
        auVar88._0_4_ = uStack_1a9c;
        auVar88._8_4_ = uStack_1a9c;
        auVar88._12_4_ = uStack_1a9c;
        auVar86 = auVar84;
        auVar91 = auVar88;
      }
      else {
        auVar84._4_4_ = fStack_1aac;
        auVar84._0_4_ = fStack_1aac;
        auVar84._8_4_ = fStack_1aac;
        auVar84._12_4_ = fStack_1aac;
        auVar88._4_4_ = uStack_1a9c;
        auVar88._0_4_ = uStack_1a9c;
        auVar88._8_4_ = uStack_1a9c;
        auVar88._12_4_ = uStack_1a9c;
        pfVar35 = local_1438 + local_258 * 0x18;
        puVar57 = auStack_e88 + local_258 * 0xb0;
        auVar86 = auVar84;
        auVar91 = auVar88;
        do {
          lVar34 = lVar34 + -1;
          recurse(&local_14e8,param_2,puVar57,0);
          *(undefined1 (*) [8])(pfVar35 + 4) = local_14d8;
          *(undefined8 *)(pfVar35 + 6) = uStack_14d0;
          auVar67._4_4_ = fStack_14b4;
          auVar67._0_4_ = local_14b8;
          auVar67._8_4_ = fStack_14b0;
          auVar67._12_4_ = fStack_14ac;
          *(ulong *)(pfVar35 + 8) = CONCAT44(uStack_14c4,local_14c8);
          *(ulong *)(pfVar35 + 10) = CONCAT44(uStack_14bc,uStack_14c0);
          auVar76._4_4_ = uStack_14a4;
          auVar76._0_4_ = local_14a8;
          auVar76._8_4_ = uStack_14a0;
          auVar76._12_4_ = uStack_149c;
          auVar61._4_4_ = uStack_14c4;
          auVar61._0_4_ = local_14c8;
          auVar61._8_4_ = uStack_14c0;
          auVar61._12_4_ = uStack_14bc;
          auVar84 = maxps(auVar84,auVar61);
          *(SetMB **)pfVar35 = local_14e8;
          auVar91 = minps(auVar91,auVar67);
          pfVar35[0x14] = (float)local_1498._0_4_;
          auVar86 = maxps(auVar86,auVar76);
          auVar88 = minps(auVar88,_local_14d8);
          *(undefined1 (*) [16])(pfVar35 + 0xc) = auVar67;
          *(undefined1 (*) [16])(pfVar35 + 0x10) = auVar76;
          pfVar35[0x15] = (float)local_1498._4_4_;
          pfVar35 = pfVar35 + -0x18;
          puVar57 = puVar57 + -0xb0;
        } while (lVar34 != -1);
      }
      if (((uint)uVar33 & 0xf) != 1) goto LAB_00117c8b;
      if (local_258 != 0) goto LAB_00116389;
    }
    if (local_1951) {
      pSVar52 = (SetMB *)param_3[0xf];
      pSVar48 = (SetMB *)param_3[0xe];
      local_14e8 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
      uStack_14e0 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
      local_14d8._4_4_ = fStack_1aac;
      local_14d8._0_4_ = fStack_1aac;
      uStack_14d0._4_4_ = fStack_1aac;
      uStack_14d0._0_4_ = fStack_1aac;
      pSStack_17f0 = (SetMB *)(param_2 + 0xb);
      local_14c8 = uStack_1a9c;
      uStack_14c4 = uStack_1a9c;
      uStack_14c0 = uStack_1a9c;
      uStack_14bc = uStack_1a9c;
      local_14b8 = fStack_1aac;
      fStack_14b4 = fStack_1aac;
      fStack_14b0 = fStack_1aac;
      fStack_14ac = fStack_1aac;
      local_17f8 = pSVar6;
      if ((ulong)((long)pSVar52 - (long)pSVar48) < 0xc00) {
        local_1768 = pSVar48;
        pSStack_1760 = pSVar52;
        const::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                  ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1598,
                   (range *)&local_17f8);
      }
      else {
        parallel_reduce_internal<unsigned_long,embree::LBBox<embree::Vec3fa>,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::range<unsigned_long>const&)_1_,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::LBBox<embree::Vec3fa>const&,embree::LBBox<embree::Vec3fa>const&)_2_>
                  ((ulong)&local_1598,((long)pSVar52 - (long)pSVar48) + 0x3ffU >> 10,(ulong)pSVar48,
                   (ulong)pSVar52,(LBBox_conflict *)0x400,
                   (_lambda_embree__range<unsigned_long>_const___1_ *)&local_14e8,
                   (_lambda_embree__LBBox<embree::Vec3fa>_const__embree__LBBox<embree::Vec3fa>_const___2_
                    *)&local_17f8);
      }
      *(ulong *)param_1 = uVar33;
      *(SetMB **)(param_1 + 0x10) = local_1598;
      *(SetMB **)(param_1 + 0x18) = uStack_1590;
      *(SetMB **)(param_1 + 0x20) = local_1588;
      *(SetMB **)(param_1 + 0x28) = uStack_1580;
      *(SetMB **)(param_1 + 0x30) = local_1578;
      *(SetMB **)(param_1 + 0x38) = uStack_1570;
      *(SetMB **)(param_1 + 0x40) = local_1568;
      *(SetMB **)(param_1 + 0x48) = uStack_1560;
      *(long *)(param_1 + 0x50) = param_3[0x13];
    }
    else {
      *(ulong *)param_1 = uVar33;
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar88;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar84;
      *(undefined1 (*) [16])(param_1 + 0x30) = auVar91;
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar86;
      *(long *)(param_1 + 0x50) = param_3[0x13];
    }
    uVar33 = 0;
    if (local_258 != 0) {
      do {
        ppSVar5 = local_2d8[uVar33];
        ppSVar4 = ppSVar5 + 1;
        *ppSVar4 = *ppSVar4 + -1;
        if ((*ppSVar4 == (SetMB *)0x0) && (pSVar6 = *ppSVar5, pSVar6 != (SetMB *)0x0)) {
          pvVar2 = *(void **)(pSVar6 + 0x20);
          lVar34 = *(long *)(pSVar6 + 0x18);
          if (pvVar2 != (void *)0x0) {
            if ((ulong)(lVar34 * 0x50) < 0x1c00000) {
              embree::alignedFree(pvVar2);
            }
            else {
              embree::os_free(pvVar2,lVar34 * 0x50,(bool)pSVar6[8]);
            }
          }
          if (lVar34 != 0) {
            (**(code **)**(undefined8 **)pSVar6)(*(undefined8 **)pSVar6,lVar34 * -0x50,1);
          }
          operator_delete(pSVar6,0x28);
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 < local_258);
    }
    goto LAB_001145e3;
  }
  lVar34 = *(long *)(param_3[0x14] + 0x20) + (long)pSVar52 * 0x50;
  lVar50 = *(long *)(param_3[0x14] + 0x20) + uVar33 * 0x50;
  if (lVar34 != lVar50) {
    lVar49 = (long)pSVar52 * 0x50 + uVar33 * -0x50;
    uVar33 = (lVar49 >> 4) * -0x3333333333333333;
    if (uVar33 == 0) {
      std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (lVar50,lVar34,0xfffffffffffffffe);
    }
    else {
      lVar56 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar56 == 0; lVar56 = lVar56 + -1) {
        }
      }
      std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (lVar50,lVar34,(long)(int)lVar56 * 2);
      if (0x500 < lVar49) {
        lVar49 = lVar50 + 0x500;
        std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>(lVar50,lVar49);
        if (lVar34 != lVar49) {
          do {
            lVar50 = lVar49 + 0x50;
            std::__unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                      (lVar49);
            lVar49 = lVar50;
          } while (lVar34 != lVar50);
        }
        goto LAB_001145a1;
      }
    }
    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>(lVar50,lVar34);
  }
LAB_001145a1:
  createLargeLeaf(param_1,param_2,param_3);
LAB_001145e3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_001188d3:
  local_1598 = local_1768;
  std::__exception_ptr::exception_ptr::_M_addref();
  std::rethrow_exception(&local_1598);
LAB_001188f3:
  SetMB::deterministic_order(pSVar6);
  splitByGeometry(pSVar6,(SetMB *)&local_16d8,(SetMB *)&local_1638);
  local_1ac8 = (SetMB *)param_3;
LAB_00118920:
  lVar50 = *(long *)local_1ac8;
  fVar63 = *(float *)((long)local_1ac8 + 0x10);
  fVar59 = *(float *)((long)local_1ac8 + 0x14);
  fVar100 = *(float *)((long)local_1ac8 + 0x18);
  uVar82 = *(undefined4 *)((long)local_1ac8 + 0x1c);
  fVar93 = *(float *)((long)local_1ac8 + 0x20);
  fVar70 = *(float *)((long)local_1ac8 + 0x24);
  fVar72 = *(float *)((long)local_1ac8 + 0x28);
  uVar81 = *(undefined4 *)((long)local_1ac8 + 0x2c);
  fVar73 = *(float *)((long)local_1ac8 + 0x30);
  fVar78 = *(float *)((long)local_1ac8 + 0x34);
  fVar79 = *(float *)((long)local_1ac8 + 0x38);
  uVar80 = *(undefined4 *)((long)local_1ac8 + 0x3c);
  fVar65 = *(float *)((long)local_1ac8 + 0x40);
  fVar69 = *(float *)((long)local_1ac8 + 0x44);
  fVar71 = *(float *)((long)local_1ac8 + 0x48);
  uVar74 = *(undefined4 *)((long)local_1ac8 + 0x4c);
  lVar34 = *(long *)((long)local_1ac8 + 0x80);
  fVar58 = *(float *)((long)local_1ac8 + 0x98);
  fVar64 = *(float *)((long)local_1ac8 + 0x9c);
LAB_00118767:
  pSVar48 = *(SetMB **)((long)local_1ac8 + 0xa0);
  local_1af8 = local_15d8;
  local_1ae8 = local_1698;
  pSStack_1ae0 = pSStack_1690;
  local_1ad8._0_4_ = (float)local_1650;
  uStack_1a9c = _LC10;
  fStack_1aac = _LC8;
  param_3 = (long *)local_1ac8;
  fVar99 = (float)local_16d8;
  uStack_1a34 = local_16d8._4_4_;
  uStack_1a30 = (undefined4)uStack_16d0;
  uStack_1a2c = uStack_16d0._4_4_;
  fVar85 = local_1650._4_4_;
  fVar83 = local_15b0._4_4_;
  fVar15 = (float)local_15b0;
  goto LAB_00114a6c;
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMi<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_30;
  
  uVar4 = *(ulong *)(this + 8);
  uVar3 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar4 - uVar3) {
    uVar4 = uVar4 + uVar3 >> 1;
    spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar3,uVar4,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar4,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    if (uVar3 < uVar4) {
      lVar5 = uVar3 * 0xb0;
      do {
        lVar2 = *(long *)(this + 0x28) + lVar5;
        lVar5 = lVar5 + 0xb0;
        sse2::BVHBuilderMSMBlur::
        BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
        ::recurse(local_98,*(undefined8 *)(this + 0x30),lVar2,1);
        puVar1 = (undefined8 *)(uVar3 * 0x60 + *(long *)(this + 0x20));
        uVar3 = uVar3 + 1;
        *puVar1 = local_98[0];
        puVar1[2] = local_88;
        puVar1[3] = uStack_80;
        puVar1[4] = local_78;
        puVar1[5] = uStack_70;
        puVar1[10] = local_48;
        puVar1[6] = local_68;
        puVar1[7] = uStack_60;
        puVar1[8] = local_58;
        puVar1[9] = uStack_50;
      } while (uVar3 < uVar4);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::buildMultiSegment(unsigned long) */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>>::buildMultiSegment
          (BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>> *this,ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  double dVar7;
  undefined8 *local_348;
  bool local_340 [8];
  ulong local_338;
  ulong local_330;
  void *local_328;
  undefined8 auStack_318 [2];
  undefined1 auStack_308 [80];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 uStack_288;
  ulong uStack_280;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_248;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 auStack_f8 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  long local_40;
  
  lVar6 = *(long *)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_340[0] = false;
  local_338 = 0;
  local_348 = *(undefined8 **)(lVar6 + 0x188);
  local_330 = 0;
  local_328 = (void *)0x0;
  if (local_348 != (undefined8 *)0x0) {
    local_348 = local_348 + 0xa9;
  }
  if (param_1 != 0) {
    uVar4 = param_1 * 0x50;
    (**(code **)*local_348)(local_348,uVar4,0);
    if (uVar4 < 0x1c00000) {
      local_328 = (void *)embree::alignedMalloc(uVar4,0x10);
    }
    else {
      local_328 = (void *)embree::os_malloc(uVar4,local_340);
    }
    lVar6 = *(long *)(this + 0x18);
    local_330 = param_1;
  }
  local_338 = local_330;
  embree::sse2::createPrimRefArrayMSMBlur
            (0x3f80000000000000,&local_228,lVar6,*(undefined8 *)(this + 0x40),param_1,&local_348,
             *(long *)(*(long *)(this + 0x10) + 0x68) + 600);
  if (local_1c8 == local_1c0) {
    (**(code **)(**(long **)(this + 0x10) + 0x28))();
    uVar4 = local_330;
  }
  else {
    dVar7 = (double)(local_1b8 + 3U >> 2) * __LC45 * __LC46;
    if (__LC47 <= dVar7) {
      uVar4 = (long)(dVar7 - __LC47) ^ 0x8000000000000000;
    }
    else {
      uVar4 = (ulong)dVar7;
    }
    uVar4 = uVar4 + ((ulong)(local_1b8 * 0xe0) >> 4);
    FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar4);
    uStack_298 = *(ulong *)(this + 0x38);
    uStack_28c = *(undefined4 *)(this + 0x28);
    lStack_248 = *(long *)(this + 0x10);
    lStack_2a8 = 0x3f;
    if (*(ulong *)(this + 0x20) != 0) {
      for (; *(ulong *)(this + 0x20) >> lStack_2a8 == 0; lStack_2a8 = lStack_2a8 + -1) {
      }
    }
    uVar5 = *(ulong *)(this + 0x30);
    if (uStack_298 <= *(ulong *)(this + 0x30)) {
      uVar5 = uStack_298;
    }
    if ((local_1c0 - local_1c8 == 0) || (uVar4 == 0)) {
      uStack_280 = 0x400;
    }
    else {
      bVar1 = *(byte *)(lStack_248 + 0x182);
      uVar2 = embree::TaskScheduler::threadCount();
      lVar6 = (2 - (ulong)bVar1) * *(long *)(lStack_248 + 0x88);
      uVar3 = lVar6 * 0x14;
      if (((uVar4 - 1) + uVar3) / uVar3 < uVar2) {
        uVar3 = lVar6 * 0x50;
        if ((long)uVar3 < 0) {
          dVar7 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
        }
        else {
          dVar7 = (double)(long)uVar3;
        }
        dVar7 = dVar7 / ((double)uVar4 / (double)(ulong)(local_1c0 - local_1c8));
        if ((double)((ulong)dVar7 & _LC51) < _LC48) {
          dVar7 = (double)((ulong)((double)(long)dVar7 +
                                  (double)(-(ulong)((double)(long)dVar7 < dVar7) & _LC50)) |
                          ~_LC51 & (ulong)dVar7);
        }
        if (__LC47 <= dVar7) {
          uStack_280 = (long)(dVar7 - __LC47) ^ 0x8000000000000000;
        }
        else {
          uStack_280 = (ulong)dVar7;
        }
        lStack_248 = *(long *)(this + 0x10);
      }
      else {
        lStack_248 = *(long *)(this + 0x10);
        uStack_280 = 0x400;
      }
    }
    lStack_268 = *(long *)(this + 0x18);
    lStack_258 = lStack_248 + 0x78;
    uStack_238 = *(undefined8 *)(*(long *)(lStack_248 + 0x68) + 0x260);
    lStack_270 = *(long *)(lStack_268 + 0x188);
    if (lStack_270 != 0) {
      lStack_270 = lStack_270 + 0x548;
    }
    ppuStack_240 = &PTR_operator___00124780;
    uStack_118 = uStack_1a8;
    uStack_110 = uStack_1a0;
    uStack_e8 = local_228;
    uStack_e0 = uStack_220;
    uStack_d8 = uStack_218;
    uStack_d0 = uStack_210;
    uStack_2b8 = 4;
    uStack_2b0 = 0x50;
    uStack_290 = 0x3f800000;
    uStack_288 = 0;
    auStack_f8[0] = 1;
    lStack_78 = local_1b8;
    uStack_68 = uStack_1a8;
    uStack_60 = uStack_1a0;
    uStack_70 = uStack_1b0;
    uStack_b8 = uStack_1f8;
    uStack_b4 = uStack_1f4;
    uStack_b0 = uStack_1f0;
    uStack_ac = uStack_1ec;
    uStack_a8 = uStack_1e8;
    uStack_a4 = uStack_1e4;
    uStack_a0 = uStack_1e0;
    uStack_9c = uStack_1dc;
    uStack_98 = uStack_1d8;
    uStack_94 = uStack_1d4;
    uStack_90 = uStack_1d0;
    uStack_8c = uStack_1cc;
    uStack_c8 = uStack_208;
    uStack_c0 = uStack_200;
    uStack_2a0 = uVar5;
    lStack_260 = lStack_268;
    ppuStack_58 = &local_348;
    BVHBuilderMSMBlur::
    BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMi<4>>,embree::Scene::BuildProgressMonitorInterface>
    ::recurse(auStack_318,&uStack_2b8,auStack_f8,1,lStack_268,uStack_280,0,0,0);
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),auStack_318[0],auStack_308,local_1b8);
    uVar4 = local_330;
  }
  local_330 = uVar4;
  if (local_328 != (void *)0x0) {
    if (uVar4 * 0x50 < 0x1c00000) {
      embree::alignedFree(local_328);
    }
    else {
      embree::os_free(local_328,uVar4 * 0x50,local_340[0]);
    }
  }
  if (uVar4 != 0) {
    (**(code **)*local_348)(local_348,uVar4 * -0x50,1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMi<4> >::build() */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>>::build
          (BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  ulong uVar1;
  string *psVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  double dVar13;
  long *local_a8 [2];
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  long *local_68;
  long local_60;
  long local_58 [5];
  ulong uVar8;
  
  uVar10 = 0;
  lVar11 = *(long *)(this + 0x18);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ulong *)(this + 0x40);
  if ((uVar1 & 0x100000) != 0) {
    uVar10 = *(ulong *)(lVar11 + 0x290);
  }
  if ((uVar1 & 0x200000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2a0);
  }
  if ((uVar1 & 0xf) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2c0);
  }
  if ((uVar1 & 0x77770) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2b0);
  }
  if ((uVar1 & 0xe000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x340);
  }
  if ((uVar1 & 0x800000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2d0);
  }
  if ((uVar1 & 0x20000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2e0);
  }
  if ((uVar1 & 0x40000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2f0);
  }
  if ((uVar1 & 0x80000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x300);
  }
  if ((uVar1 & 0x1000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x310);
  }
  if ((uVar1 & 0x400000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 800);
  }
  psVar2 = *(string **)(this + 0x10);
  if (uVar10 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)psVar2 + 0x28))(psVar2);
      return;
    }
  }
  else {
    local_a8[0] = local_98;
    std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
    *(undefined1 *)local_a8[0] = 0x34;
    plVar4 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x1191d7);
    plVar5 = plVar4 + 2;
    if ((long *)*plVar4 == plVar5) {
      uVar1 = plVar4[1] + 1;
      plVar9 = plVar5;
      plVar12 = local_78;
      if (7 < (uint)uVar1) {
        uVar7 = 0;
        do {
          uVar6 = (int)uVar7 + 8;
          uVar8 = (ulong)uVar6;
          *(undefined8 *)((long)local_78 + uVar7) = *(undefined8 *)((long)plVar5 + uVar7);
          uVar7 = uVar8;
        } while (uVar6 < ((uint)uVar1 & 0xfffffff8));
        plVar12 = (long *)((long)local_78 + uVar8);
        plVar9 = (long *)(uVar8 + (long)plVar5);
      }
      lVar11 = 0;
      if ((uVar1 & 4) != 0) {
        *(int *)plVar12 = (int)*plVar9;
        lVar11 = 4;
      }
      if ((uVar1 & 2) != 0) {
        *(undefined2 *)((long)plVar12 + lVar11) = *(undefined2 *)((long)plVar9 + lVar11);
        lVar11 = lVar11 + 2;
      }
      local_88 = local_78;
      if ((uVar1 & 1) != 0) {
        *(undefined1 *)((long)plVar12 + lVar11) = *(undefined1 *)((long)plVar9 + lVar11);
      }
    }
    else {
      local_78[0] = plVar4[2];
      local_88 = (long *)*plVar4;
    }
    local_80 = plVar4[1];
    *plVar4 = (long)plVar5;
    plVar4[1] = 0;
    *(undefined1 *)(plVar4 + 2) = 0;
    if (0x3fffffffffffffffU - local_80 < 0xf) {
      std::__throw_length_error("basic_string::append");
    }
    else {
      plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x1191f6);
      plVar5 = plVar4 + 2;
      if ((long *)*plVar4 == plVar5) {
        uVar1 = plVar4[1] + 1;
        plVar9 = plVar5;
        plVar12 = local_58;
        if (7 < (uint)uVar1) {
          uVar7 = 0;
          do {
            uVar6 = (int)uVar7 + 8;
            uVar8 = (ulong)uVar6;
            *(undefined8 *)((long)local_58 + uVar7) = *(undefined8 *)((long)plVar5 + uVar7);
            uVar7 = uVar8;
          } while (uVar6 < ((uint)uVar1 & 0xfffffff8));
          plVar12 = (long *)((long)local_58 + uVar8);
          plVar9 = (long *)(uVar8 + (long)plVar5);
        }
        lVar11 = 0;
        if ((uVar1 & 4) != 0) {
          *(int *)plVar12 = (int)*plVar9;
          lVar11 = 4;
        }
        if ((uVar1 & 2) != 0) {
          *(undefined2 *)((long)plVar12 + lVar11) = *(undefined2 *)((long)plVar9 + lVar11);
          lVar11 = lVar11 + 2;
        }
        local_68 = local_58;
        if ((uVar1 & 1) != 0) {
          *(undefined1 *)((long)plVar12 + lVar11) = *(undefined1 *)((long)plVar9 + lVar11);
        }
      }
      else {
        local_58[0] = plVar4[2];
        local_68 = (long *)*plVar4;
      }
      local_60 = plVar4[1];
      *plVar4 = (long)plVar5;
      plVar4[1] = 0;
      *(undefined1 *)(plVar4 + 2) = 0;
      dVar13 = (double)embree::BVHN<4>::preBuild(psVar2);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
      buildMultiSegment(this,uVar10);
      lVar11 = *(long *)(this + 0x10);
      plVar5 = (long *)(lVar11 + 0x130);
      plVar4 = (long *)(lVar11 + 0x170);
      do {
        while (*plVar5 != 0) {
          lVar3 = *(long *)(*plVar5 + 0x18);
          *(long *)(*plVar5 + 0x18) = *plVar4;
          LOCK();
          *plVar4 = *plVar5;
          UNLOCK();
          LOCK();
          *plVar5 = lVar3;
          UNLOCK();
        }
        LOCK();
        *plVar5 = 0;
        UNLOCK();
        plVar5 = plVar5 + 1;
      } while (plVar4 != plVar5);
      plVar5 = *(long **)(lVar11 + 0x1a8);
      plVar4 = *(long **)(lVar11 + 0x1b0);
      if (plVar5 != plVar4) {
        do {
          while( true ) {
            lVar3 = *plVar5;
            if (lVar11 + 0x78 != *(long *)(lVar3 + 8)) break;
            embree::MutexSys::lock();
            if (lVar11 + 0x78 == *(long *)(lVar3 + 8)) {
              LOCK();
              plVar12 = (long *)(*(long *)(lVar3 + 8) + 0x118);
              *plVar12 = *plVar12 + *(long *)(lVar3 + 0xa8) + *(long *)(lVar3 + 0x68);
              UNLOCK();
              LOCK();
              plVar12 = (long *)(*(long *)(lVar3 + 8) + 0x120);
              *plVar12 = *plVar12 +
                         (((*(long *)(lVar3 + 0x98) + *(long *)(lVar3 + 0x58)) -
                          *(long *)(lVar3 + 0x50)) - *(long *)(lVar3 + 0x90));
              UNLOCK();
              LOCK();
              plVar12 = (long *)(*(long *)(lVar3 + 8) + 0x128);
              *plVar12 = *plVar12 + *(long *)(lVar3 + 0xb0) + *(long *)(lVar3 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar3 + 0x48) = 0;
              *(undefined8 *)(lVar3 + 0x58) = 0;
              *(undefined8 *)(lVar3 + 0x50) = 0;
              *(undefined8 *)(lVar3 + 0x68) = 0;
              *(undefined8 *)(lVar3 + 0x70) = 0;
              *(undefined8 *)(lVar3 + 0x60) = 0;
              *(undefined8 *)(lVar3 + 0x88) = 0;
              *(undefined8 *)(lVar3 + 0x98) = 0;
              *(undefined8 *)(lVar3 + 0x90) = 0;
              *(undefined8 *)(lVar3 + 0xa8) = 0;
              *(undefined8 *)(lVar3 + 0xb0) = 0;
              *(undefined8 *)(lVar3 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar3 + 8) = 0;
              UNLOCK();
            }
            plVar5 = plVar5 + 1;
            embree::MutexSys::unlock();
            if (plVar4 == plVar5) goto LAB_001195ee;
          }
          plVar5 = plVar5 + 1;
        } while (plVar4 != plVar5);
LAB_001195ee:
        if (*(long *)(lVar11 + 0x1b0) != *(long *)(lVar11 + 0x1a8)) {
          *(long *)(lVar11 + 0x1b0) = *(long *)(lVar11 + 0x1a8);
        }
      }
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        embree::BVHN<4>::postBuild(dVar13);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::createLargeLeaf(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator) */

BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
* __thiscall
embree::sse2::BVHBuilderMSMBlur::
BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
::createLargeLeaf(BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
                  *this,ulong *param_1,ulong *param_3)

{
  float *pfVar1;
  uint *puVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [8];
  undefined1 auVar22 [8];
  undefined1 auVar23 [8];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float *pfVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined1 auVar33 [12];
  int iVar34;
  SetMB *pSVar35;
  SetMB *pSVar36;
  ulong uVar37;
  ulong *puVar38;
  float *pfVar39;
  float *pfVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined8 uVar44;
  undefined8 *puVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  float **ppfVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  long *plVar53;
  int iVar54;
  ulong *puVar55;
  uint *puVar56;
  bool bVar57;
  long lVar58;
  ulong *puVar59;
  long *plVar60;
  ulong *puVar61;
  long lVar62;
  long in_FS_OFFSET;
  float fVar63;
  undefined1 auVar64 [16];
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  undefined1 auVar75 [16];
  float fVar78;
  undefined1 auVar79 [16];
  float fVar80;
  float fVar83;
  float fVar84;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar85;
  float fVar86;
  float fVar91;
  float fVar92;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar93;
  undefined1 auVar90 [16];
  float fVar94;
  undefined1 auVar95 [16];
  float fVar96;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar102;
  float fVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar110;
  undefined1 auVar111 [16];
  FastAllocator *in_stack_00000008;
  ulong *in_stack_00000010;
  ulong *in_stack_00000018;
  float *local_1f08;
  undefined8 uStack_1f00;
  ulong local_1ef8;
  undefined8 uStack_1ef0;
  undefined1 local_1ee8 [8];
  undefined8 uStack_1ee0;
  undefined1 local_1ed8 [16];
  undefined1 local_1ec8 [16];
  undefined1 local_1eb8 [16];
  undefined1 local_1ea8 [16];
  undefined1 local_1e98 [8];
  undefined8 uStack_1e90;
  undefined1 local_1e88 [8];
  undefined8 uStack_1e80;
  ulong local_1e78;
  ulong local_1e60;
  _lambda_embree__range<unsigned_long>const___3_ *local_1e58;
  float *pfStack_1e50;
  ulong local_1e48;
  ulong uStack_1e40;
  undefined1 local_1db8 [8];
  undefined8 uStack_1db0;
  undefined1 local_1da8 [8];
  undefined8 uStack_1da0;
  undefined1 local_1d98 [8];
  undefined8 uStack_1d90;
  undefined1 local_1d88 [8];
  undefined8 uStack_1d80;
  undefined4 local_1d28;
  undefined4 local_1d24;
  ulong *local_1cc0;
  float local_1cb8;
  float local_1cb4;
  float local_1cb0;
  float local_1cac;
  float *local_1ca8;
  float *local_1ca0;
  ulong *local_1c98;
  float *local_1c90;
  ulong *local_1c88;
  ulong *local_1c78;
  float *local_1c70;
  ulong *local_1c68;
  ulong **local_1c60;
  SetMB *local_1c58;
  float *local_1c48;
  float *pfStack_1c40;
  undefined1 *local_1c38;
  undefined8 uStack_1c30;
  float *local_1c28;
  float *pfStack_1c20;
  ulong local_1c18;
  ulong uStack_1c10;
  float *local_1c08;
  float *pfStack_1c00;
  ulong local_1bf8;
  ulong uStack_1bf0;
  float *local_1be8;
  float *local_1be0;
  ulong local_1bd8;
  ulong local_1bd0;
  undefined4 local_1bc8;
  undefined4 local_1bc4;
  float local_1bc0;
  float local_1bbc;
  float *local_1bb8;
  float *pfStack_1bb0;
  ulong local_1ba8;
  ulong uStack_1ba0;
  float *local_1b98;
  float *pfStack_1b90;
  ulong local_1b88;
  ulong uStack_1b80;
  float *local_1b78;
  float *pfStack_1b70;
  ulong local_1b68;
  ulong uStack_1b60;
  float *local_1b58;
  float *local_1b50;
  ulong local_1b48;
  ulong local_1b40;
  undefined8 local_1b38;
  undefined8 local_1b30;
  float *local_1b28;
  float *pfStack_1b20;
  ulong local_1b18;
  ulong uStack_1b10;
  float *local_1b08;
  float *pfStack_1b00;
  ulong local_1af8;
  ulong uStack_1af0;
  float *local_1ae8;
  float *pfStack_1ae0;
  undefined8 local_1ad8;
  ulong uStack_1ad0;
  undefined8 local_1ac8;
  undefined8 local_1ac0;
  ulong local_1ab8;
  ulong local_1ab0;
  undefined8 local_1aa8;
  undefined8 local_1aa0;
  ulong local_1a98;
  ulong local_1a90;
  uint local_1a78 [8];
  undefined1 local_1a58 [16];
  undefined1 local_1a48 [16];
  undefined1 local_1a38 [16];
  undefined1 local_1a28 [8];
  float fStack_1a20;
  float fStack_1a1c;
  undefined1 local_1a18 [16];
  undefined1 local_1a08 [16];
  undefined1 local_19f8 [8];
  float fStack_19f0;
  float fStack_19ec;
  undefined1 local_19e8 [8];
  float fStack_19e0;
  float fStack_19dc;
  undefined1 local_19d8 [8];
  undefined8 uStack_19d0;
  undefined4 local_19c8;
  undefined4 uStack_19c4;
  undefined4 uStack_19c0;
  undefined4 uStack_19bc;
  ulong local_19b8;
  ulong local_19a8;
  ulong uStack_19a0;
  ulong local_1998;
  ulong uStack_1990;
  ulong local_1988;
  ulong uStack_1980;
  ulong local_1978;
  ulong uStack_1970;
  ulong local_1968;
  ulong uStack_1960;
  undefined1 local_1958 [16];
  float *local_1948;
  float *pfStack_1940;
  ulong local_1938;
  ulong local_1930;
  ulong local_1928;
  undefined8 local_1920;
  ulong local_1918;
  float local_1908;
  undefined4 local_1904;
  undefined4 local_1900;
  uint local_18fc;
  undefined8 local_18f8;
  undefined8 local_18e8;
  undefined8 uStack_18e0;
  undefined4 local_18d8;
  undefined4 uStack_18d4;
  undefined4 uStack_18d0;
  undefined4 uStack_18cc;
  undefined1 local_18c8 [16];
  undefined1 local_18b8 [16];
  undefined1 local_18a8 [16];
  float *local_1898;
  float *pfStack_1890;
  ulong local_1888;
  ulong uStack_1880;
  float *local_1878;
  float *pfStack_1870;
  ulong local_1868;
  ulong uStack_1860;
  float *local_1858;
  float *pfStack_1850;
  ulong local_1848;
  ulong local_1840;
  undefined8 local_1838;
  undefined8 local_1830;
  ulong *local_1828;
  undefined8 local_1818;
  undefined8 local_1810;
  undefined8 local_1808;
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  undefined1 local_17d8 [16];
  undefined1 local_17c8 [16];
  undefined1 local_17b8 [16];
  float *local_17a8;
  float *pfStack_17a0;
  ulong local_1798;
  ulong uStack_1790;
  float *local_1788;
  float *pfStack_1780;
  ulong local_1778;
  ulong uStack_1770;
  float *local_1768;
  float *pfStack_1760;
  ulong local_1758;
  ulong local_1750;
  undefined8 local_1748;
  undefined8 local_1740;
  ulong *local_1738;
  undefined8 local_1728;
  undefined8 local_1720;
  undefined8 local_1718;
  undefined1 local_1708 [16];
  undefined4 local_16f8;
  undefined4 uStack_16f4;
  undefined4 uStack_16f0;
  undefined4 uStack_16ec;
  undefined1 local_11d8 [16];
  undefined1 local_11c8 [16];
  undefined1 local_11b8 [16];
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  ulong local_1198 [4];
  undefined1 local_1178 [16];
  float *local_1168 [2];
  ulong local_1158 [2];
  ulong local_1148;
  undefined4 uStack_1144;
  undefined8 local_1140;
  ulong local_1138 [2];
  float local_1128 [3];
  uint local_111c;
  undefined8 local_1118 [2];
  undefined8 local_1108 [2];
  undefined8 local_10f8;
  undefined4 uStack_10f0;
  undefined4 auStack_10ec [901];
  ulong *local_2d8 [16];
  ulong local_258;
  ulong local_250 [64];
  long local_50;
  long local_40;
  
  uVar52 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] < uVar52) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  findFallback((SetMB *)local_11d8);
  fVar15 = _LC10;
  fVar14 = _LC8;
  local_1a98 = param_3[0x12];
  local_19a8 = *(ulong *)*(undefined1 (*) [16])(param_3 + 2);
  uStack_19a0 = param_3[3];
  auVar73 = *(undefined1 (*) [16])(param_3 + 2);
  local_1a90 = param_3[0x13];
  local_1998 = *(ulong *)*(undefined1 (*) [16])(param_3 + 4);
  uStack_1990 = param_3[5];
  auVar79 = *(undefined1 (*) [16])(param_3 + 4);
  local_1958 = *(undefined1 (*) [16])(param_3 + 0xc);
  pfVar39 = (float *)param_3[0xe];
  local_1988 = param_3[6];
  uStack_1980 = param_3[7];
  pfStack_1940 = (float *)param_3[0xf];
  local_1978 = param_3[8];
  uStack_1970 = param_3[9];
  local_1968 = param_3[10];
  uStack_1960 = param_3[0xb];
  local_1938 = param_3[0x10];
  local_1930 = param_3[0x11];
  local_1918 = param_3[0x14];
  uVar12 = local_11d8._4_4_;
  uVar11 = local_11d8._0_4_;
  local_1908 = (float)local_11d8._0_4_;
  local_1904 = local_11d8._4_4_;
  uVar17 = local_11d8._8_4_;
  local_1900 = local_11d8._8_4_;
  local_18fc = local_11d8._12_4_;
  local_18f8 = local_11c8._0_8_;
  local_18e8 = local_11b8._0_8_;
  uStack_18e0 = local_11b8._8_8_;
  local_18d8 = (undefined4)local_11a8;
  uStack_18d4 = local_11a8._4_4_;
  uStack_18d0 = (undefined4)uStack_11a0;
  uStack_18cc = uStack_11a0._4_4_;
  local_19b8 = uVar52;
  local_1948 = pfVar39;
  local_1928 = local_1a98;
  local_1920 = local_1a90;
  if (uVar52 == 1) {
    if (pfVar39 == pfStack_1940) {
      if (1 < (uint)local_11d8._12_4_) {
        bVar57 = false;
        goto LAB_00119937;
      }
      local_1ef8 = 8;
      uVar52 = 0;
      local_1f08 = (float *)0x0;
      goto LAB_0011b91c;
    }
    local_1920._0_4_ = (float)local_1a90;
    fVar94 = _LC10;
    fVar65 = _LC8;
    if (pfVar39 < pfStack_1940) {
      pfVar40 = (float *)(*(long *)(local_1918 + 0x20) + 0x40 + (long)pfVar39 * 0x50);
      local_1f08 = pfVar40;
      fVar102 = _LC8;
      do {
        pfVar1 = pfVar40 + 1;
        if (*pfVar40 <= fVar94) {
          fVar94 = *pfVar40;
        }
        pfVar40 = pfVar40 + 0x14;
        fVar65 = *pfVar1;
        if (*pfVar1 <= fVar102) {
          fVar65 = fVar102;
        }
        fVar102 = fVar65;
      } while ((float *)(*(long *)(local_1918 + 0x20) + 0x40 + (long)pfStack_1940 * 0x50) != pfVar40
              );
    }
    if (((float)local_1920 < fVar94) ||
       (local_1920._4_4_ = (float)(local_1a90 >> 0x20), fVar65 < local_1920._4_4_)) {
      bVar57 = true;
LAB_00119937:
      pSVar35 = (SetMB *)local_11d8;
      do {
        *(undefined4 *)(pSVar35 + 0xb4) = 0xffffffff;
        pSVar36 = pSVar35 + 0xf0;
        *(float *)(pSVar35 + 0xb0) = _LC10;
        *(undefined4 *)(pSVar35 + 0xb8) = 0;
        *(undefined4 *)(pSVar35 + 0xbc) = 0;
        pSVar35 = pSVar36;
      } while ((SetMB *)local_2d8 != pSVar36);
      local_111c = local_11d8._12_4_;
      local_258 = 1;
      local_1148 = local_1a98;
      local_1168[0] = pfVar39;
      local_1168[1] = pfStack_1940;
      local_1140 = local_1a90;
      local_11d8._0_8_ = uVar52;
      local_1128[2] = (float)uVar17;
      local_2d8[0] = local_250;
      local_50 = 1;
      local_1158[0] = local_1938;
      local_1158[1] = local_1930;
      local_1138[0] = local_1918;
      local_1128[1] = (float)uVar12;
      local_1118[0] = local_11c8._0_8_;
      local_250[0] = local_1918;
      local_250[1] = 2;
      bVar13 = false;
      local_1128[0] = (float)uVar11;
      local_1108[0] = local_11b8._0_8_;
      local_1108[1] = local_11b8._8_8_;
      local_10f8._0_4_ = (undefined4)local_11a8;
      local_10f8._4_4_ = local_11a8._4_4_;
      uStack_10f0 = (undefined4)uStack_11a0;
      auStack_10ec[0] = uStack_11a0._4_4_;
      local_11c8 = auVar73;
      local_11b8 = auVar79;
      local_11a8 = local_1988;
      uStack_11a0 = uStack_1980;
      local_1198[0] = local_1978;
      local_1198[1] = uStack_1970;
      local_1198[2] = local_1968;
      local_1198[3] = uStack_1960;
      local_1178 = local_1958;
      while( true ) {
        auVar33 = stack0xffffffffffffe10c;
        uVar46 = 0;
        uVar52 = 0;
        uVar48 = 0xffffffffffffffff;
        ppfVar49 = local_1168;
        do {
          uVar37 = (long)ppfVar49[1] - (long)*ppfVar49;
          if ((((param_1[4] < uVar37) || (1 < *(uint *)((long)ppfVar49 + 0x4c))) || (bVar57)) &&
             (uVar52 < uVar37)) {
            uVar52 = uVar37;
            uVar48 = uVar46;
          }
          uVar46 = uVar46 + 1;
          ppfVar49 = ppfVar49 + 0x1e;
          bVar57 = false;
        } while (uVar46 != local_258);
        if (uVar48 == 0xffffffffffffffff) break;
        local_1810 = 0;
        local_1720 = 0;
        local_1e60 = local_19b8 + 1;
        lVar51 = uVar48 * 0xf0;
        local_1818 = 0xffffffff7f800000;
        local_1728 = 0xffffffff7f800000;
        iVar34 = *(int *)((long)local_1118 + lVar51 + -4);
        pSVar35 = (SetMB *)(local_11c8 + lVar51);
        local_1f08 = (float *)local_1e60;
        local_18c8._0_8_ = local_1e60;
        local_17d8._0_8_ = local_1e60;
        uVar52 = uVar48;
        if (iVar34 == 0) {
          local_1bb8 = (float *)CONCAT44(fVar15,fVar15);
          pfStack_1bb0 = (float *)CONCAT44(fVar15,fVar15);
          local_1b38 = 0x3f80000000000000;
          local_1ba8 = CONCAT44(fVar14,fVar14);
          uStack_1ba0 = CONCAT44(fVar14,fVar14);
          local_1aa8 = 0x3f80000000000000;
          pfVar39 = local_1168[uVar48 * 0x1e];
          local_1a28._4_4_ = local_1128[uVar48 * 0x3c + 2];
          pfVar40 = local_1168[uVar48 * 0x1e + 1];
          local_1b58 = (float *)0x0;
          local_1c38 = local_19f8;
          local_1b50 = (float *)0x0;
          local_1b48 = 0;
          local_1b40 = 0;
          local_1b30 = 0x3f800000;
          local_1ac8 = 0;
          local_1ac0 = 0;
          local_1ab8 = 0;
          local_1ab0 = 0;
          local_1aa0 = 0x3f800000;
          local_1a28._0_4_ = local_1a28._4_4_;
          fStack_1a20 = (float)local_1a28._4_4_;
          fStack_1a1c = (float)local_1a28._4_4_;
          _local_19f8 = *(undefined1 (*) [16])
                         (&mm_lookupmask_ps +
                         (long)(1 << (SUB41(local_1128[uVar48 * 0x3c + 1],0) & 0x1f)) * 2);
          pfStack_1c40 = (float *)local_1a28;
          local_1c48 = local_1128 + uVar48 * 0x3c;
          local_1b98 = local_1bb8;
          pfStack_1b90 = pfStack_1bb0;
          local_1b88 = local_1ba8;
          uStack_1b80 = uStack_1ba0;
          local_1b78 = local_1bb8;
          pfStack_1b70 = pfStack_1bb0;
          local_1b68 = local_1ba8;
          uStack_1b60 = uStack_1ba0;
          local_1b28 = local_1bb8;
          pfStack_1b20 = pfStack_1bb0;
          local_1b18 = local_1ba8;
          uStack_1b10 = uStack_1ba0;
          local_1b08 = local_1bb8;
          pfStack_1b00 = pfStack_1bb0;
          local_1af8 = local_1ba8;
          uStack_1af0 = uStack_1ba0;
          local_1ae8 = local_1bb8;
          pfStack_1ae0 = pfStack_1bb0;
          local_1ad8 = local_1ba8;
          uStack_1ad0 = uStack_1ba0;
          pfStack_1850 = (float *)parallel_partitioning<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>
                                            (*(PrimRefMB **)(local_1138[uVar48 * 0x1e] + 0x20),
                                             (ulong)pfVar39,(ulong)pfVar40,(EmptyTy *)&local_1c78,
                                             (PrimInfoMBT_conflict *)&local_1bb8,
                                             (PrimInfoMBT_conflict *)&local_1b28,
                                             (_lambda_embree__PrimRefMB_const___1_ *)&local_1c48,
                                             (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimRefMB_const___2_
                                              *)&local_1ca8,
                                             (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>_const___3_
                                              *)&local_1c98,0x80,0xc00);
          local_1828 = (ulong *)local_1138[uVar48 * 0x1e];
          local_1e88 = (undefined1  [8])local_1b48;
          local_1848 = local_1b48;
          local_1838 = local_1b38;
          fVar94 = *(float *)(local_1138 + uVar48 * 0x1e + -1);
          fVar65 = *(float *)((long)local_1138 + lVar51 + -4);
          local_18b8._8_8_ = pfStack_1bb0;
          local_18b8._0_8_ = local_1bb8;
          local_18a8._8_8_ = uStack_1ba0;
          local_18a8._0_8_ = local_1ba8;
          local_1e98 = (undefined1  [8])local_1b68;
          uStack_1e90 = uStack_1b60;
          local_1840 = local_1b40;
          local_1ec8._0_8_ = local_1b98;
          local_1ec8._8_8_ = pfStack_1b90;
          local_1eb8._0_8_ = local_1b88;
          local_1eb8._8_8_ = uStack_1b80;
          local_1ea8._0_8_ = local_1b78;
          local_1ea8._8_8_ = pfStack_1b70;
          local_1830._4_4_ = (float)((ulong)local_1b30 >> 0x20);
          local_1830._0_4_ = (float)local_1b30;
          local_1ef8._0_4_ = fVar94;
          if (fVar94 <= (float)local_1830) {
            local_1ef8._0_4_ = (float)local_1830;
          }
          if (fVar65 <= local_1830._4_4_) {
            local_1830._4_4_ = fVar65;
          }
          local_1e58 = (_lambda_embree__range<unsigned_long>const___3_ *)local_1b28;
          pfStack_1e50 = pfStack_1b20;
          local_17c8._8_8_ = pfStack_1b20;
          local_17c8._0_8_ = local_1b28;
          local_1e48 = local_1b18;
          uStack_1e40 = uStack_1b10;
          local_17b8._8_8_ = uStack_1b10;
          local_17b8._0_8_ = local_1b18;
          local_1758 = local_1ab8;
          local_1750 = local_1ab0;
          local_1830 = CONCAT44(local_1830._4_4_,(float)local_1ef8);
          local_17a8 = local_1b08;
          pfStack_17a0 = pfStack_1b00;
          local_1798 = local_1af8;
          uStack_1790 = uStack_1af0;
          local_1788 = local_1ae8;
          pfStack_1780 = pfStack_1ae0;
          local_1778 = local_1ad8;
          uStack_1770 = uStack_1ad0;
          local_1748 = local_1aa8;
          local_1740._4_4_ = (float)((ulong)local_1aa0 >> 0x20);
          local_1740._0_4_ = (float)local_1aa0;
          if (fVar94 <= (float)local_1740) {
            fVar94 = (float)local_1740;
          }
          if (fVar65 <= local_1740._4_4_) {
            local_1740._4_4_ = fVar65;
          }
          local_1740 = CONCAT44(local_1740._4_4_,fVar94);
          fVar102 = local_1740._4_4_;
          fVar65 = local_1830._4_4_;
          local_1858 = pfVar39;
          local_1768 = pfStack_1850;
          pfStack_1760 = pfVar40;
          local_1738 = local_1828;
LAB_0011a01b:
          local_1d28 = (undefined4)local_1748;
          local_1d24 = local_1748._4_4_;
          puVar59 = local_1828;
          _local_1ee8 = local_18b8;
          local_1ed8 = local_18a8;
          local_1e78 = local_1840;
          local_1898 = (float *)local_1ec8._0_8_;
          pfStack_1890 = (float *)local_1ec8._8_8_;
          local_1888 = local_1eb8._0_8_;
          uStack_1880 = local_1eb8._8_8_;
          local_1878 = (float *)local_1ea8._0_8_;
          pfStack_1870 = (float *)local_1ea8._8_8_;
          local_1868 = (ulong)local_1e98;
          uStack_1860 = uStack_1e90;
          uVar11 = (undefined4)local_1838;
          uVar12 = local_1838._4_4_;
        }
        else {
          uVar44 = uStack_1ef0;
          if (iVar34 != 2) {
            if (iVar34 == 1) {
              lVar47 = *(long *)(local_1138[uVar48 * 0x1e] + 0x20) +
                       (long)local_1168[uVar48 * 0x1e + 1] * 0x50;
              lVar58 = *(long *)(local_1138[uVar48 * 0x1e] + 0x20) +
                       (long)local_1168[uVar48 * 0x1e] * 0x50;
              if (lVar47 != lVar58) {
                lVar62 = (long)local_1168[uVar48 * 0x1e + 1] * 0x50 +
                         (long)local_1168[uVar48 * 0x1e] * -0x50;
                local_1ef8 = uVar48;
                uVar46 = (lVar62 >> 4) * -0x3333333333333333;
                if (uVar46 == 0) {
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar58,lVar47,0xfffffffffffffffe);
                }
                else {
                  lVar50 = 0x3f;
                  if (uVar46 != 0) {
                    for (; uVar46 >> lVar50 == 0; lVar50 = lVar50 + -1) {
                    }
                  }
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar58,lVar47,(long)(int)lVar50 * 2);
                  if (0x500 < lVar62) {
                    lVar62 = lVar58 + 0x500;
                    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                              (lVar58,lVar62);
                    for (; auVar33 = stack0xffffffffffffe10c, lVar47 != lVar62;
                        lVar62 = lVar62 + 0x50) {
                      std::
                      __unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                                (lVar62);
                    }
                    goto LAB_0011d4ab;
                  }
                }
                _local_1ef8 = CONCAT88(uVar44,local_1ef8);
                std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                          (lVar58,lVar47);
                auVar33 = stack0xffffffffffffe10c;
              }
LAB_0011d4ab:
              stack0xffffffffffffe10c = auVar33;
              splitFallback(pSVar35,(SetMB *)local_18b8,(SetMB *)local_17c8);
              local_1e88 = (undefined1  [8])local_1848;
              local_1ec8._0_8_ = local_1898;
              local_1ec8._8_8_ = pfStack_1890;
              local_1eb8._0_8_ = local_1888;
              local_1eb8._8_8_ = uStack_1880;
              local_1ea8._0_8_ = local_1878;
              local_1ea8._8_8_ = pfStack_1870;
              local_1e98 = (undefined1  [8])local_1868;
              uStack_1e90 = uStack_1860;
              local_1ef8._0_4_ = (float)local_1830;
              local_1e58 = (_lambda_embree__range<unsigned_long>const___3_ *)local_17c8._0_8_;
              pfStack_1e50 = (float *)local_17c8._8_8_;
              local_1e48 = local_17b8._0_8_;
              uStack_1e40 = local_17b8._8_8_;
              fVar102 = local_1740._4_4_;
              fVar65 = local_1830._4_4_;
              fVar94 = (float)local_1740;
            }
            else {
              if (iVar34 != 3) {
                local_1e88 = (undefined1  [8])local_1848;
                local_1ec8._0_8_ = local_1898;
                local_1ec8._8_8_ = pfStack_1890;
                local_1eb8._0_8_ = local_1888;
                local_1eb8._8_8_ = uStack_1880;
                local_1ea8._0_8_ = local_1878;
                local_1ea8._8_8_ = pfStack_1870;
                local_1e98 = (undefined1  [8])local_1868;
                uStack_1e90 = uStack_1860;
                local_1ef8._0_4_ = (float)local_1830;
                _local_1ef8 = CONCAT124(auVar33,(float)local_1ef8);
                local_1e58 = (_lambda_embree__range<unsigned_long>const___3_ *)local_17c8._0_8_;
                pfStack_1e50 = (float *)local_17c8._8_8_;
                local_1e48 = local_17b8._0_8_;
                uStack_1e40 = local_17b8._8_8_;
                fVar102 = local_1740._4_4_;
                fVar65 = local_1830._4_4_;
                fVar94 = (float)local_1740;
                goto LAB_0011a01b;
              }
              lVar47 = *(long *)(local_1138[uVar48 * 0x1e] + 0x20) +
                       (long)local_1168[uVar48 * 0x1e + 1] * 0x50;
              lVar58 = *(long *)(local_1138[uVar48 * 0x1e] + 0x20) +
                       (long)local_1168[uVar48 * 0x1e] * 0x50;
              if (lVar47 != lVar58) {
                lVar62 = (long)local_1168[uVar48 * 0x1e + 1] * 0x50 +
                         (long)local_1168[uVar48 * 0x1e] * -0x50;
                uVar46 = (lVar62 >> 4) * -0x3333333333333333;
                if (uVar46 == 0) {
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar58,lVar47,0xfffffffffffffffe);
                }
                else {
                  lVar50 = 0x3f;
                  if (uVar46 != 0) {
                    for (; uVar46 >> lVar50 == 0; lVar50 = lVar50 + -1) {
                    }
                  }
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar58,lVar47,(long)(int)lVar50 * 2);
                  if (0x500 < lVar62) {
                    lVar62 = lVar58 + 0x500;
                    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                              (lVar58,lVar62);
                    for (; lVar47 != lVar62; lVar62 = lVar62 + 0x50) {
                      std::
                      __unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                                (lVar62);
                    }
                    goto LAB_0011d274;
                  }
                }
                std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                          (lVar58,lVar47);
              }
LAB_0011d274:
              splitByGeometry(pSVar35,(SetMB *)local_18b8,(SetMB *)local_17c8);
              local_1f08 = (float *)local_18c8._0_8_;
              local_1e88 = (undefined1  [8])local_1848;
              local_1ec8._0_8_ = local_1898;
              local_1ec8._8_8_ = pfStack_1890;
              local_1eb8._0_8_ = local_1888;
              local_1eb8._8_8_ = uStack_1880;
              local_1e60 = local_17d8._0_8_;
              local_1ea8._0_8_ = local_1878;
              local_1ea8._8_8_ = pfStack_1870;
              local_1e98 = (undefined1  [8])local_1868;
              uStack_1e90 = uStack_1860;
              local_1ef8._0_4_ = (float)local_1830;
              _local_1ef8 = CONCAT124(auVar33,(float)local_1ef8);
              local_1e58 = (_lambda_embree__range<unsigned_long>const___3_ *)local_17c8._0_8_;
              pfStack_1e50 = (float *)local_17c8._8_8_;
              local_1e48 = local_17b8._0_8_;
              uStack_1e40 = local_17b8._8_8_;
              fVar102 = local_1740._4_4_;
              fVar65 = local_1830._4_4_;
              fVar94 = (float)local_1740;
            }
            goto LAB_0011a01b;
          }
          local_1cb4 = local_1128[uVar48 * 0x3c + 2];
          local_1cb8 = *(float *)(local_1138 + uVar48 * 0x1e + -1);
          puVar61 = (ulong *)local_1138[uVar48 * 0x1e];
          puVar55 = param_1 + 9;
          local_1cac = *(float *)((long)local_1138 + lVar51 + -4);
          local_1cb0 = local_1cb4;
          puVar38 = (ulong *)operator_new(0x28);
          pfVar39 = local_1168[uVar48 * 0x1e + 1];
          pfVar40 = local_1168[uVar48 * 0x1e];
          puVar45 = (undefined8 *)param_1[9];
          *(undefined1 *)(puVar38 + 1) = 0;
          puVar38[2] = 0;
          uVar46 = (long)pfVar39 - (long)pfVar40;
          *puVar38 = (ulong)puVar45;
          puVar38[3] = 0;
          puVar38[4] = 0;
          if (uVar46 != 0) {
            uVar37 = uVar46 * 0x50;
            (**(code **)*puVar45)(puVar45,uVar37,0);
            if (uVar37 < 0x1c00000) {
              uVar37 = embree::alignedMalloc(uVar37,0x10);
            }
            else {
              uVar37 = embree::os_malloc(uVar37,(bool *)(puVar38 + 1));
            }
            pfVar39 = local_1168[uVar48 * 0x1e + 1];
            pfVar40 = local_1168[uVar48 * 0x1e];
            puVar38[4] = uVar37;
            puVar38[2] = uVar46;
            puVar38[3] = uVar46;
            uVar46 = (long)pfVar39 - (long)pfVar40;
          }
          local_1b28 = (float *)CONCAT44(fVar15,fVar15);
          pfStack_1b20 = (float *)CONCAT44(fVar15,fVar15);
          local_1b18 = CONCAT44(fVar14,fVar14);
          uStack_1b10 = CONCAT44(fVar14,fVar14);
          local_1c60 = &local_1cc0;
          local_1ac8 = 0;
          local_1ac0 = 0;
          local_1ab8 = 0;
          local_1ab0 = 0;
          local_1aa8 = 0x3f80000000000000;
          local_1aa0 = 0x3f800000;
          local_1cc0 = puVar38;
          local_1c78 = puVar61;
          local_1c70 = &local_1cb8;
          local_1c68 = puVar55;
          local_1c58 = pSVar35;
          local_1b08 = local_1b28;
          pfStack_1b00 = pfStack_1b20;
          local_1af8 = local_1b18;
          uStack_1af0 = uStack_1b10;
          local_1ae8 = local_1b28;
          pfStack_1ae0 = pfStack_1b20;
          local_1ad8 = local_1b18;
          uStack_1ad0 = uStack_1b10;
          if (uVar46 < 0xc00) {
            local_1bb8 = pfVar40;
            pfStack_1bb0 = pfVar39;
            HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
            ::
            split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
            ::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                      ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1c48,
                       (range *)&local_1c78);
          }
          else {
            parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                      ((ulong)&local_1c48,uVar46 + 0x7f >> 7,(ulong)pfVar40,(ulong)pfVar39,
                       (PrimInfoMBT_conflict *)&local_1b28,
                       (_lambda_embree__range<unsigned_long>_const___1_ *)&local_1c78,
                       PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
          }
          local_1e58 = (_lambda_embree__range<unsigned_long>const___3_ *)&local_1bb8;
          pfVar39 = local_1168[uVar48 * 0x1e + 1];
          pfVar40 = local_1168[uVar48 * 0x1e];
          uVar46 = (long)pfVar39 - (long)pfVar40;
          if ((long)local_1be0 - (long)local_1be8 != uVar46) {
            local_1b28 = &local_1cb8;
            local_1be0 = (float *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_>
                                            ((PrimRefMB *)local_1cc0[4],0,uVar46,0x400,
                                             (_lambda_embree__PrimRefMB_const___1_ *)&local_1b28);
            pfVar39 = local_1168[uVar48 * 0x1e + 1];
            pfVar40 = local_1168[uVar48 * 0x1e];
            uVar46 = (long)pfVar39 - (long)pfVar40;
          }
          uVar12 = local_1bc4;
          uVar11 = local_1bc8;
          puVar59 = local_1cc0;
          local_1ef8 = uVar48;
          local_1ed8._8_8_ = uStack_1c30;
          local_1ed8._0_8_ = local_1c38;
          uStack_1ee0 = pfStack_1c40;
          local_1ee8 = (undefined1  [8])local_1c48;
          local_1ec8._0_8_ = local_1c28;
          local_1ec8._8_8_ = pfStack_1c20;
          fVar94 = local_1cb8;
          if (local_1cb8 <= local_1bc0) {
            fVar94 = local_1bc0;
          }
          local_1eb8._0_8_ = local_1c18;
          local_1eb8._8_8_ = uStack_1c10;
          local_18a8._8_8_ = uStack_1c30;
          local_18a8._0_8_ = local_1c38;
          local_1ef8._0_4_ = fVar94;
          fVar65 = local_1bbc;
          if (local_1cb4 <= local_1bbc) {
            fVar65 = local_1cb4;
          }
          local_1e88 = (undefined1  [8])local_1bd8;
          local_1e78 = local_1bd0;
          local_1ea8._0_8_ = local_1c08;
          local_1ea8._8_8_ = pfStack_1c00;
          local_1e98 = (undefined1  [8])local_1bf8;
          uStack_1e90 = uStack_1bf0;
          local_18b8._8_8_ = pfStack_1c40;
          local_18b8._0_8_ = local_1c48;
          local_1898 = local_1c28;
          pfStack_1890 = pfStack_1c20;
          local_1888 = local_1c18;
          uStack_1880 = uStack_1c10;
          local_1878 = local_1c08;
          pfStack_1870 = pfStack_1c00;
          local_1868 = local_1bf8;
          uStack_1860 = uStack_1bf0;
          local_1858 = local_1be8;
          local_1b18 = CONCAT44(fVar14,fVar14);
          uStack_1b10 = CONCAT44(fVar14,fVar14);
          local_1b28 = (float *)CONCAT44(fVar15,fVar15);
          pfStack_1b20 = (float *)CONCAT44(fVar15,fVar15);
          local_1848 = local_1bd8;
          local_1840 = local_1bd0;
          local_1828 = local_1cc0;
          local_1ac8 = 0;
          local_1ac0 = 0;
          local_1ab8 = 0;
          local_1ab0 = 0;
          local_1aa8 = 0x3f80000000000000;
          local_1aa0 = 0x3f800000;
          local_1838 = CONCAT44(local_1bc4,local_1bc8);
          local_1830 = CONCAT44(fVar65,fVar94);
          local_1c98 = puVar61;
          local_1c90 = &local_1cb0;
          local_1c88 = puVar55;
          local_1b08 = local_1b28;
          pfStack_1b00 = pfStack_1b20;
          local_1af8 = local_1b18;
          uStack_1af0 = uStack_1b10;
          local_1ae8 = local_1b28;
          pfStack_1ae0 = pfStack_1b20;
          local_1ad8 = local_1b18;
          uStack_1ad0 = uStack_1b10;
          pfStack_1850 = local_1be0;
          if (uVar46 < 0xc00) {
            local_1ca8 = pfVar40;
            local_1ca0 = pfVar39;
            HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
            ::
            split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
            ::{lambda(embree::range<unsigned_long>const&)#3}::operator()
                      (local_1e58,(range *)&local_1c98);
          }
          else {
            parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_3_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                      ((embree *)local_1e58,uVar46 + 0x7f >> 7,(ulong)pfVar40,(ulong)pfVar39,0x80,
                       (PrimInfoMBT_conflict *)&local_1b28,
                       (_lambda_embree__range<unsigned_long>_const___3_ *)&local_1c98,
                       PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
          }
          pfVar40 = local_1168[uVar48 * 0x1e];
          lVar47 = (long)local_1b50 - (long)local_1b58;
          pfVar39 = (float *)((long)pfVar40 + lVar47);
          local_1b58 = pfVar40;
          local_1b50 = pfVar39;
          if (lVar47 != (long)local_1168[uVar48 * 0x1e + 1] - (long)pfVar40) {
            local_1b28 = &local_1cb0;
            pfVar39 = (float *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_4_>
                                         ((PrimRefMB *)puVar61[4],(ulong)pfVar40,
                                          (ulong)local_1168[uVar48 * 0x1e + 1],0x400,
                                          (_lambda_embree__PrimRefMB_const___4_ *)&local_1b28);
          }
          local_1e58 = (_lambda_embree__range<unsigned_long>const___3_ *)local_1bb8;
          pfStack_1e50 = pfStack_1bb0;
          local_1e48 = local_1ba8;
          uStack_1e40 = uStack_1ba0;
          local_17a8 = local_1b98;
          pfStack_17a0 = pfStack_1b90;
          local_1798 = local_1b88;
          uStack_1790 = uStack_1b80;
          fVar94 = local_1cb0;
          if (local_1cb0 <= (float)local_1b30) {
            fVar94 = (float)local_1b30;
          }
          local_1788 = local_1b78;
          pfStack_1780 = pfStack_1b70;
          local_1758 = local_1b48;
          local_1750 = local_1b40;
          local_1778 = local_1b68;
          uStack_1770 = uStack_1b60;
          local_1d28 = (undefined4)local_1b38;
          local_1d24 = local_1b38._4_4_;
          fVar102 = local_1b30._4_4_;
          if (local_1cac <= local_1b30._4_4_) {
            fVar102 = local_1cac;
          }
          local_17c8._8_8_ = pfStack_1bb0;
          local_17c8._0_8_ = local_1bb8;
          local_17b8._8_8_ = uStack_1ba0;
          local_17b8._0_8_ = local_1ba8;
          bVar13 = (bool)(bVar13 | puVar38 != (ulong *)0x0);
          local_1748 = local_1b38;
          local_1740 = CONCAT44(fVar102,fVar94);
          local_1768 = local_1b58;
          pfStack_1760 = pfVar39;
          local_1738 = puVar61;
        }
        puVar61 = local_1738;
        uVar32 = local_1750;
        uVar31 = local_1758;
        uVar30 = uStack_1770;
        uVar29 = local_1778;
        pfVar28 = pfStack_1780;
        pfVar1 = local_1788;
        uVar37 = uStack_1790;
        uVar46 = local_1798;
        pfVar40 = pfStack_17a0;
        pfVar39 = local_17a8;
        findFallback((SetMB *)local_19f8);
        uVar19 = local_19f8._4_4_;
        auVar23 = local_19d8;
        uVar9 = uStack_19d0;
        uVar44 = CONCAT44(uStack_19c4,local_19c8);
        uVar8 = CONCAT44(uStack_19bc,uStack_19c0);
        auVar21 = local_19e8;
        uVar17 = local_19f8._0_4_;
        local_17f8 = local_19d8;
        uStack_17f0 = uStack_19d0;
        fVar86 = fStack_19ec;
        local_1810 = SUB168(_local_19f8,8);
        local_1808 = local_19e8;
        local_1818 = SUB168(_local_19f8,0);
        findFallback((SetMB *)local_19f8);
        lVar47 = local_50;
        uVar27 = uStack_19bc;
        uVar26 = uStack_19c0;
        uVar25 = uStack_19c4;
        uVar24 = local_19c8;
        auVar73 = _local_19d8;
        uVar18 = local_19f8._0_4_;
        uVar20 = local_19f8._4_4_;
        puVar55 = local_2d8[uVar52];
        fVar110 = fStack_19ec;
        auVar22 = local_19e8;
        local_1728 = SUB168(_local_19f8,0);
        local_1720 = SUB168(_local_19f8,8);
        local_1718 = local_19e8;
        local_1708 = _local_19d8;
        local_16f8 = local_19c8;
        uStack_16f4 = uStack_19c4;
        uStack_16f0 = uStack_19c0;
        uStack_16ec = uStack_19bc;
        if ((ulong *)*puVar55 == puVar59) {
          puVar55[1] = puVar55[1] + 1;
          puVar38 = puVar59;
        }
        else {
          local_50 = local_50 + 1;
          local_250[lVar47 * 2] = (ulong)puVar59;
          local_250[lVar47 * 2 + 1] = 1;
          local_2d8[uVar52] = local_250 + lVar47 * 2;
          puVar38 = (ulong *)*puVar55;
        }
        lVar47 = local_50;
        if (puVar61 == puVar38) {
          local_2d8[local_258] = puVar55;
          uVar52 = puVar55[1];
        }
        else {
          local_50 = local_50 + 1;
          local_250[lVar47 * 2] = (ulong)puVar61;
          local_250[lVar47 * 2 + 1] = 1;
          local_2d8[local_258] = local_250 + lVar47 * 2;
          uVar52 = puVar55[1] - 1;
        }
        puVar55[1] = uVar52;
        if ((uVar52 == 0) && (puVar45 = (undefined8 *)*puVar55, puVar45 != (undefined8 *)0x0)) {
          pvVar4 = (void *)puVar45[4];
          lVar47 = puVar45[3];
          if (pvVar4 != (void *)0x0) {
            if ((ulong)(lVar47 * 0x50) < 0x1c00000) {
              embree::alignedFree(pvVar4);
            }
            else {
              embree::os_free(pvVar4,lVar47 * 0x50,*(bool *)(puVar45 + 1));
            }
          }
          if (lVar47 != 0) {
            (*(code *)**(undefined8 **)*puVar45)((undefined8 *)*puVar45,lVar47 * -0x50,1);
          }
          operator_delete(puVar45,0x28);
        }
        *(float *)((long)local_1138 + lVar51 + -4) = fVar65;
        *(undefined1 (*) [8])(local_11c8 + lVar51) = local_1ee8;
        *(undefined8 *)(local_11c8 + lVar51 + 8) = uStack_1ee0;
        *(undefined8 *)(local_11b8 + lVar51) = local_1ed8._0_8_;
        *(undefined8 *)(local_11b8 + lVar51 + 8) = local_1ed8._8_8_;
        *(float **)((SetMB *)local_11d8 + lVar51) = local_1f08;
        (&local_11a8)[uVar48 * 0x1e] = local_1ec8._0_8_;
        (&uStack_11a0)[uVar48 * 0x1e] = local_1ec8._8_8_;
        local_1198[uVar48 * 0x1e] = local_1eb8._0_8_;
        local_1198[uVar48 * 0x1e + 1] = local_1eb8._8_8_;
        local_1158[uVar48 * 0x1e] = (ulong)local_1e88;
        local_1198[uVar48 * 0x1e + 2] = local_1ea8._0_8_;
        *(undefined8 *)(local_1178 + lVar51 + -8) = local_1ea8._8_8_;
        *(undefined1 (*) [8])(local_1178 + lVar51) = local_1e98;
        *(ulong *)(local_1178 + lVar51 + 8) = uStack_1e90;
        local_1168[uVar48 * 0x1e] = local_1858;
        local_1168[uVar48 * 0x1e + 1] = pfStack_1850;
        local_1158[uVar48 * 0x1e + 1] = local_1e78;
        local_1128[uVar48 * 0x3c + 1] = (float)uVar19;
        *(undefined4 *)(&stack0xffffffffffffeeb8 + uVar48 * 0x1e) = uVar11;
        (&uStack_1144)[uVar48 * 0x3c] = uVar12;
        *(float *)(local_1138 + uVar48 * 0x1e + -1) = (float)local_1ef8;
        local_1128[uVar48 * 0x3c] = (float)uVar17;
        local_1138[uVar48 * 0x1e] = (ulong)puVar59;
        local_1118[uVar48 * 0x1e] = auVar21;
        local_1128[uVar48 * 0x3c + 2] = (float)local_1810;
        local_1108[uVar48 * 0x1e] = auVar23;
        local_1108[uVar48 * 0x1e + 1] = uVar9;
        *(float *)((long)local_1118 + lVar51 + -4) = fVar86;
        *(undefined8 *)((long)&local_10f8 + uVar48 * 0x3c * 4) = uVar44;
        *(undefined8 *)((long)&uStack_10f0 + uVar48 * 0x1e * 8) = uVar8;
        uVar52 = local_258;
        lVar51 = local_258 * 0xf0;
        *(_lambda_embree__range<unsigned_long>const___3_ **)(local_11c8 + lVar51) = local_1e58;
        *(float **)(local_11c8 + lVar51 + 8) = pfStack_1e50;
        *(ulong *)((SetMB *)local_11d8 + lVar51) = local_1e60;
        *(ulong *)(local_11b8 + lVar51) = local_1e48;
        *(ulong *)(local_11b8 + lVar51 + 8) = uStack_1e40;
        local_1158[uVar52 * 0x1e + 1] = uVar32;
        (&local_11a8)[uVar52 * 0x1e] = pfVar39;
        (&uStack_11a0)[uVar52 * 0x1e] = pfVar40;
        *(ulong *)(local_1178 + lVar51) = uVar29;
        *(ulong *)(local_1178 + lVar51 + 8) = uVar30;
        local_1198[uVar52 * 0x1e] = uVar46;
        local_1198[uVar52 * 0x1e + 1] = uVar37;
        local_1158[uVar52 * 0x1e] = uVar31;
        local_1198[uVar52 * 0x1e + 2] = (ulong)pfVar1;
        *(float **)(local_1178 + lVar51 + -8) = pfVar28;
        local_1168[uVar52 * 0x1e] = local_1768;
        local_1168[uVar52 * 0x1e + 1] = pfStack_1760;
        *(undefined4 *)(&stack0xffffffffffffeeb8 + uVar52 * 0x1e) = local_1d28;
        local_1128[uVar52 * 0x3c + 1] = (float)uVar20;
        local_1138[uVar52 * 0x1e] = (ulong)puVar61;
        local_1128[uVar52 * 0x3c + 2] = (float)local_1720;
        *(float *)((long)local_1118 + lVar51 + -4) = fVar110;
        local_1118[uVar52 * 0x1e] = auVar22;
        (&uStack_1144)[uVar52 * 0x3c] = local_1d24;
        *(float *)(local_1138 + uVar52 * 0x1e + -1) = fVar94;
        *(float *)((long)local_1138 + lVar51 + -4) = fVar102;
        local_1128[uVar52 * 0x3c] = (float)uVar18;
        *(undefined1 (*) [16])(local_1108 + uVar52 * 0x1e) = auVar73;
        *(undefined4 *)((long)&local_10f8 + uVar52 * 0x3c * 4) = uVar24;
        *(undefined4 *)((long)&local_10f8 + lVar51 + 4U) = uVar25;
        *(undefined4 *)((long)&uStack_10f0 + uVar52 * 0x1e * 8) = uVar26;
        auStack_10ec[uVar52 * 0x3c] = uVar27;
        local_258 = local_258 + 1;
        if (*param_1 <= local_258) {
          if (local_258 != 0) break;
          goto LAB_0011a6da;
        }
        bVar57 = false;
        if (local_258 == 0) goto LAB_0011a6da;
      }
      uVar52 = 0;
      puVar45 = &local_1140;
      do {
        if (*(float *)(param_3 + 0x13) < (float)*puVar45) {
          bVar13 = true;
        }
        else {
          bVar13 = (bool)(bVar13 | (float)((ulong)*puVar45 >> 0x20) <
                                   *(float *)((long)param_3 + 0x9c));
        }
        puVar45 = puVar45 + 0x1e;
        uVar52 = uVar52 + 1;
      } while (uVar52 != local_258);
LAB_0011a6da:
      pfVar39 = (float *)*in_stack_00000010;
      if (bVar13) {
        local_1bb8 = (float *)0x100;
        if (in_stack_00000008 != *(FastAllocator **)(pfVar39 + 2)) {
          embree::MutexSys::lock();
          if (*(long *)(pfVar39 + 2) != 0) {
            LOCK();
            *(long *)(*(long *)(pfVar39 + 2) + 0x118) =
                 *(long *)(*(long *)(pfVar39 + 2) + 0x118) +
                 *(long *)(pfVar39 + 0x2a) + *(long *)(pfVar39 + 0x1a);
            UNLOCK();
            LOCK();
            *(long *)(*(long *)(pfVar39 + 2) + 0x120) =
                 *(long *)(*(long *)(pfVar39 + 2) + 0x120) +
                 (((*(long *)(pfVar39 + 0x26) + *(long *)(pfVar39 + 0x16)) -
                  *(long *)(pfVar39 + 0x14)) - *(long *)(pfVar39 + 0x24));
            UNLOCK();
            LOCK();
            *(long *)(*(long *)(pfVar39 + 2) + 0x128) =
                 *(long *)(*(long *)(pfVar39 + 2) + 0x128) +
                 *(long *)(pfVar39 + 0x2c) + *(long *)(pfVar39 + 0x1c);
            UNLOCK();
          }
          pfVar39[0x12] = 0.0;
          pfVar39[0x13] = 0.0;
          pfVar39[0x16] = 0.0;
          pfVar39[0x17] = 0.0;
          pfVar39[0x14] = 0.0;
          pfVar39[0x15] = 0.0;
          pfVar39[0x1a] = 0.0;
          pfVar39[0x1b] = 0.0;
          pfVar39[0x1c] = 0.0;
          pfVar39[0x1d] = 0.0;
          pfVar39[0x18] = 0.0;
          pfVar39[0x19] = 0.0;
          if (in_stack_00000008 == (FastAllocator *)0x0) {
            pfVar39[0x22] = 0.0;
            pfVar39[0x23] = 0.0;
            uVar44 = 0;
            pfVar39[0x26] = 0.0;
            pfVar39[0x27] = 0.0;
            pfVar39[0x24] = 0.0;
            pfVar39[0x25] = 0.0;
            pfVar39[0x2a] = 0.0;
            pfVar39[0x2b] = 0.0;
            pfVar39[0x2c] = 0.0;
            pfVar39[0x2d] = 0.0;
          }
          else {
            uVar44 = *(undefined8 *)(in_stack_00000008 + 0x10);
            pfVar39[0x22] = 0.0;
            pfVar39[0x23] = 0.0;
            pfVar39[0x26] = 0.0;
            pfVar39[0x27] = 0.0;
            *(undefined8 *)(pfVar39 + 0x18) = uVar44;
            pfVar39[0x24] = 0.0;
            pfVar39[0x25] = 0.0;
            pfVar39[0x2a] = 0.0;
            pfVar39[0x2b] = 0.0;
            pfVar39[0x2c] = 0.0;
            pfVar39[0x2d] = 0.0;
            pfVar39[0x28] = 0.0;
            pfVar39[0x29] = 0.0;
            uVar44 = *(undefined8 *)(in_stack_00000008 + 0x10);
          }
          *(undefined8 *)(pfVar39 + 0x28) = uVar44;
          LOCK();
          *(FastAllocator **)(pfVar39 + 2) = in_stack_00000008;
          UNLOCK();
          local_1b28 = pfVar39;
          embree::MutexSys::lock();
          puVar55 = *(ulong **)(in_stack_00000008 + 0x138);
          if (puVar55 == *(ulong **)(in_stack_00000008 + 0x140)) {
            std::
            vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
            ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                      ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                        *)(in_stack_00000008 + 0x130),puVar55,&local_1b28);
          }
          else {
            *puVar55 = (ulong)pfVar39;
            *(long *)(in_stack_00000008 + 0x138) = *(long *)(in_stack_00000008 + 0x138) + 8;
          }
          embree::MutexSys::unlock();
          embree::MutexSys::unlock();
        }
        in_stack_00000010[5] = in_stack_00000010[5] + 0x100;
        uVar48 = in_stack_00000010[2];
        uVar46 = (ulong)(-(int)uVar48 & 0xf);
        uVar52 = uVar48 + 0x100 + uVar46;
        in_stack_00000010[2] = uVar52;
        if (in_stack_00000010[3] < uVar52) {
          in_stack_00000010[2] = uVar48;
          if ((float *)in_stack_00000010[4] < (float *)0x400) {
            puVar45 = (undefined8 *)
                      FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1bb8,0x40,false);
          }
          else {
            local_1b28 = (float *)in_stack_00000010[4];
            puVar45 = (undefined8 *)
                      FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1b28,0x40,true);
            in_stack_00000010[1] = (ulong)puVar45;
            uVar52 = in_stack_00000010[2];
            in_stack_00000010[2] = 0x100;
            in_stack_00000010[6] = (in_stack_00000010[3] + in_stack_00000010[6]) - uVar52;
            in_stack_00000010[3] = (ulong)local_1b28;
            if (local_1b28 < (float *)0x100) {
              local_1b28 = (float *)in_stack_00000010[4];
              in_stack_00000010[2] = 0;
              puVar45 = (undefined8 *)
                        FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1b28,0x40,false);
              in_stack_00000010[1] = (ulong)puVar45;
              uVar52 = in_stack_00000010[2];
              in_stack_00000010[2] = 0x100;
              in_stack_00000010[6] = (in_stack_00000010[3] + in_stack_00000010[6]) - uVar52;
              in_stack_00000010[3] = (ulong)local_1b28;
              if (local_1b28 < (float *)0x100) {
                puVar45 = (undefined8 *)0x0;
                in_stack_00000010[2] = 0;
              }
            }
          }
        }
        else {
          in_stack_00000010[6] = in_stack_00000010[6] + uVar46;
          puVar45 = (undefined8 *)((in_stack_00000010[1] - 0x100) + uVar52);
        }
        uVar9 = CONCAT44(fVar15,fVar15);
        uVar10 = CONCAT44(fVar15,fVar15);
        uVar44 = CONCAT44(fVar14,fVar14);
        uVar8 = CONCAT44(fVar14,fVar14);
        *puVar45 = 8;
        puVar45[1] = 8;
        puVar45[2] = 8;
        puVar45[3] = 8;
        puVar45[0x1c] = uVar9;
        puVar45[0x1d] = uVar10;
        puVar45[0x1e] = uVar44;
        puVar45[0x1f] = uVar8;
        puVar45[0xc] = uVar9;
        puVar45[0xd] = uVar10;
        puVar45[8] = uVar9;
        puVar45[9] = uVar10;
        puVar45[4] = uVar9;
        puVar45[5] = uVar10;
        puVar45[0xe] = uVar44;
        puVar45[0xf] = uVar8;
        puVar45[10] = uVar44;
        puVar45[0xb] = uVar8;
        puVar45[6] = uVar44;
        puVar45[7] = uVar8;
        *(undefined1 (*) [16])(puVar45 + 0x18) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x14) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x1a) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x16) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x12) = (undefined1  [16])0x0;
        uVar52 = (ulong)puVar45 | 6;
        if (local_258 != 0) {
LAB_0011b27f:
          puVar55 = (ulong *)local_17d8;
          auVar79._4_4_ = fVar15;
          auVar79._0_4_ = fVar15;
          auVar79._8_4_ = fVar15;
          auVar79._12_4_ = fVar15;
          uVar48 = 0;
          auVar73._4_4_ = fVar14;
          auVar73._0_4_ = fVar14;
          auVar73._8_4_ = fVar14;
          auVar73._12_4_ = fVar14;
          puVar61 = puVar55;
          pSVar35 = (SetMB *)local_11d8;
          auVar81 = auVar79;
          auVar111 = auVar73;
          do {
            uVar48 = uVar48 + 1;
            createLargeLeaf((BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
                             *)&local_1b28,param_1,pSVar35);
            uVar16 = _LC36;
            uVar3 = _LC6;
            fVar102 = _LC43;
            fVar94 = _LC35;
            fVar65 = _LC3;
            puVar61[2] = local_1b18;
            puVar61[3] = uStack_1b10;
            *puVar61 = (ulong)local_1b28;
            puVar61[4] = (ulong)local_1b08;
            puVar61[5] = (ulong)pfStack_1b00;
            auVar88._8_8_ = uStack_1b10;
            auVar88._0_8_ = local_1b18;
            auVar79 = minps(auVar79,auVar88);
            *(undefined4 *)(puVar61 + 10) = (undefined4)local_1ad8;
            auVar98._8_8_ = pfStack_1b00;
            auVar98._0_8_ = local_1b08;
            auVar73 = maxps(auVar73,auVar98);
            puVar61[6] = local_1af8;
            puVar61[7] = uStack_1af0;
            auVar109._8_8_ = pfStack_1ae0;
            auVar109._0_8_ = local_1ae8;
            auVar105._8_8_ = uStack_1af0;
            auVar105._0_8_ = local_1af8;
            auVar81 = minps(auVar81,auVar105);
            *(undefined4 *)((long)puVar61 + 0x54) = local_1ad8._4_4_;
            *(undefined1 (*) [16])(puVar61 + 8) = auVar109;
            auVar111 = maxps(auVar111,auVar109);
            puVar61 = puVar61 + 0xc;
            pSVar35 = pSVar35 + 0xf0;
          } while (uVar48 < local_258);
          if (((uint)uVar52 & 0xf) == 1) {
            if (local_258 != 0) {
              uVar46 = uVar52 & 0xfffffffffffffff0;
              auVar69._4_4_ = _LC38;
              auVar69._0_4_ = _LC38;
              auVar69._8_4_ = _LC38;
              auVar69._12_4_ = _LC38;
              auVar67._4_4_ = _LC40;
              auVar67._0_4_ = _LC40;
              auVar67._8_4_ = _LC40;
              auVar67._12_4_ = _LC40;
              uVar48 = uVar46;
              do {
                fVar94 = *(float *)(puVar55 + 10);
                fVar86 = *(float *)((long)puVar55 + 0x54);
                *(ulong *)(uVar48 * 2 - uVar46) = *puVar55;
                uVar37 = uVar48 + 4;
                fVar110 = fVar65 / (fVar86 - fVar94);
                fVar86 = (float)((uint)fVar94 ^ uVar16) * fVar110;
                fVar110 = (fVar65 - fVar94) * fVar110;
                fVar107 = fVar65 - fVar86;
                fVar94 = fVar65 - fVar110;
                auVar104._0_4_ =
                     *(float *)(puVar55 + 8) * fVar86 + *(float *)(puVar55 + 4) * fVar107;
                auVar104._4_4_ =
                     *(float *)((long)puVar55 + 0x44) * fVar86 +
                     *(float *)((long)puVar55 + 0x24) * fVar107;
                auVar104._8_4_ =
                     *(float *)(puVar55 + 9) * fVar86 + *(float *)(puVar55 + 5) * fVar107;
                auVar104._12_4_ =
                     *(float *)((long)puVar55 + 0x4c) * fVar86 +
                     *(float *)((long)puVar55 + 0x2c) * fVar107;
                auVar97._0_4_ = fVar86 * *(float *)(puVar55 + 6) + fVar107 * *(float *)(puVar55 + 2)
                ;
                auVar97._4_4_ =
                     fVar86 * *(float *)((long)puVar55 + 0x34) +
                     fVar107 * *(float *)((long)puVar55 + 0x14);
                auVar97._8_4_ = fVar86 * *(float *)(puVar55 + 7) + fVar107 * *(float *)(puVar55 + 3)
                ;
                auVar97._12_4_ =
                     fVar86 * *(float *)((long)puVar55 + 0x3c) +
                     fVar107 * *(float *)((long)puVar55 + 0x1c);
                auVar105 = maxps(auVar104,auVar69);
                auVar98 = minps(auVar97,auVar67);
                auVar108._0_4_ =
                     *(float *)(puVar55 + 8) * fVar110 + *(float *)(puVar55 + 4) * fVar94;
                auVar108._4_4_ =
                     *(float *)((long)puVar55 + 0x44) * fVar110 +
                     *(float *)((long)puVar55 + 0x24) * fVar94;
                auVar108._8_4_ =
                     *(float *)(puVar55 + 9) * fVar110 + *(float *)(puVar55 + 5) * fVar94;
                auVar108._12_4_ =
                     *(float *)((long)puVar55 + 0x4c) * fVar110 +
                     *(float *)((long)puVar55 + 0x2c) * fVar94;
                auVar87._0_4_ = fVar110 * *(float *)(puVar55 + 6) + fVar94 * *(float *)(puVar55 + 2)
                ;
                auVar87._4_4_ =
                     fVar110 * *(float *)((long)puVar55 + 0x34) +
                     fVar94 * *(float *)((long)puVar55 + 0x14);
                auVar87._8_4_ = fVar110 * *(float *)(puVar55 + 7) + fVar94 * *(float *)(puVar55 + 3)
                ;
                auVar87._12_4_ =
                     fVar110 * *(float *)((long)puVar55 + 0x3c) +
                     fVar94 * *(float *)((long)puVar55 + 0x1c);
                auVar109 = maxps(auVar108,auVar69);
                auVar88 = minps(auVar87,auVar67);
                fVar94 = (float)((uint)auVar105._0_4_ & uVar3) * fVar102 + auVar105._0_4_;
                fVar86 = (float)((uint)auVar105._4_4_ & uVar3) * fVar102 + auVar105._4_4_;
                fVar110 = (float)((uint)auVar105._8_4_ & uVar3) * fVar102 + auVar105._8_4_;
                *(float *)(uVar48 + 0x30) = fVar94;
                fVar107 = auVar98._0_4_ - (float)((uint)auVar98._0_4_ & uVar3) * fVar102;
                fVar99 = auVar98._4_4_ - (float)((uint)auVar98._4_4_ & uVar3) * fVar102;
                fVar101 = auVar98._8_4_ - (float)((uint)auVar98._8_4_ & uVar3) * fVar102;
                *(float *)(uVar48 + 0x20) = fVar107;
                *(float *)(uVar48 + 0x80) =
                     (auVar88._0_4_ - (float)((uint)auVar88._0_4_ & uVar3) * fVar102) - fVar107;
                *(float *)(uVar48 + 0x40) = fVar99;
                *(float *)(uVar48 + 0x60) = fVar101;
                *(float *)(uVar48 + 0x50) = fVar86;
                *(float *)(uVar48 + 0x70) = fVar110;
                *(float *)(uVar48 + 0xa0) =
                     (auVar88._4_4_ - (float)((uint)auVar88._4_4_ & uVar3) * fVar102) - fVar99;
                *(float *)(uVar48 + 0xc0) =
                     (auVar88._8_4_ - (float)((uint)auVar88._8_4_ & uVar3) * fVar102) - fVar101;
                *(float *)(uVar48 + 0x90) =
                     ((float)((uint)auVar109._0_4_ & uVar3) * fVar102 + auVar109._0_4_) - fVar94;
                *(float *)(uVar48 + 0xb0) =
                     ((float)((uint)auVar109._4_4_ & uVar3) * fVar102 + auVar109._4_4_) - fVar86;
                *(float *)(uVar48 + 0xd0) =
                     ((float)((uint)auVar109._8_4_ & uVar3) * fVar102 + auVar109._8_4_) - fVar110;
                uVar48 = uVar37;
                puVar55 = puVar55 + 0xc;
              } while (uVar46 + local_258 * 4 != uVar37);
            }
          }
          else if (local_258 != 0) {
            uVar46 = uVar52 & 0xfffffffffffffff0;
            auVar71._4_4_ = _LC38;
            auVar71._0_4_ = _LC38;
            auVar71._8_4_ = _LC38;
            auVar71._12_4_ = _LC38;
            auVar68._4_4_ = _LC40;
            auVar68._0_4_ = _LC40;
            auVar68._8_4_ = _LC40;
            auVar68._12_4_ = _LC40;
            uVar48 = uVar46;
            do {
              fVar86 = *(float *)((long)puVar55 + 0x54);
              fVar110 = *(float *)(puVar55 + 10);
              fVar107 = *(float *)(puVar55 + 8);
              fVar99 = *(float *)((long)puVar55 + 0x44);
              fVar101 = *(float *)(puVar55 + 9);
              fVar100 = *(float *)((long)puVar55 + 0x4c);
              *(ulong *)(uVar48 * 2 - uVar46) = *puVar55;
              *(float *)(uVar48 + 0xe0) = fVar110;
              fVar96 = fVar65 / (fVar86 - fVar110);
              fVar72 = (float)((uint)fVar110 ^ uVar16) * fVar96;
              fVar96 = (fVar65 - fVar110) * fVar96;
              fVar103 = fVar65 - fVar72;
              fVar110 = fVar65 - fVar96;
              auVar95._0_4_ = *(float *)(puVar55 + 4) * fVar103 + fVar107 * fVar72;
              auVar95._4_4_ = *(float *)((long)puVar55 + 0x24) * fVar103 + fVar99 * fVar72;
              auVar95._8_4_ = *(float *)(puVar55 + 5) * fVar103 + fVar101 * fVar72;
              auVar95._12_4_ = *(float *)((long)puVar55 + 0x2c) * fVar103 + fVar100 * fVar72;
              auVar90._0_4_ = fVar72 * *(float *)(puVar55 + 6) + fVar103 * *(float *)(puVar55 + 2);
              auVar90._4_4_ =
                   fVar72 * *(float *)((long)puVar55 + 0x34) +
                   fVar103 * *(float *)((long)puVar55 + 0x14);
              auVar90._8_4_ = fVar72 * *(float *)(puVar55 + 7) + fVar103 * *(float *)(puVar55 + 3);
              auVar90._12_4_ =
                   fVar72 * *(float *)((long)puVar55 + 0x3c) +
                   fVar103 * *(float *)((long)puVar55 + 0x1c);
              auVar105 = maxps(auVar95,auVar71);
              auVar98 = minps(auVar90,auVar68);
              auVar106._0_4_ = *(float *)(puVar55 + 4) * fVar110 + *(float *)(puVar55 + 8) * fVar96;
              auVar106._4_4_ =
                   *(float *)((long)puVar55 + 0x24) * fVar110 +
                   *(float *)((long)puVar55 + 0x44) * fVar96;
              auVar106._8_4_ = *(float *)(puVar55 + 5) * fVar110 + *(float *)(puVar55 + 9) * fVar96;
              auVar106._12_4_ =
                   *(float *)((long)puVar55 + 0x2c) * fVar110 +
                   *(float *)((long)puVar55 + 0x4c) * fVar96;
              auVar75._0_4_ = fVar96 * *(float *)(puVar55 + 6) + fVar110 * *(float *)(puVar55 + 2);
              auVar75._4_4_ =
                   fVar96 * *(float *)((long)puVar55 + 0x34) +
                   fVar110 * *(float *)((long)puVar55 + 0x14);
              auVar75._8_4_ = fVar96 * *(float *)(puVar55 + 7) + fVar110 * *(float *)(puVar55 + 3);
              auVar75._12_4_ =
                   fVar96 * *(float *)((long)puVar55 + 0x3c) +
                   fVar110 * *(float *)((long)puVar55 + 0x1c);
              auVar109 = maxps(auVar106,auVar71);
              auVar88 = minps(auVar75,auVar68);
              fVar101 = (float)((uint)auVar105._0_4_ & uVar3) * fVar102 + auVar105._0_4_;
              fVar100 = (float)((uint)auVar105._4_4_ & uVar3) * fVar102 + auVar105._4_4_;
              fVar72 = (float)((uint)auVar105._8_4_ & uVar3) * fVar102 + auVar105._8_4_;
              *(float *)(uVar48 + 0x30) = fVar101;
              fVar110 = auVar98._0_4_ - (float)((uint)auVar98._0_4_ & uVar3) * fVar102;
              fVar107 = auVar98._4_4_ - (float)((uint)auVar98._4_4_ & uVar3) * fVar102;
              fVar99 = auVar98._8_4_ - (float)((uint)auVar98._8_4_ & uVar3) * fVar102;
              *(float *)(uVar48 + 0x20) = fVar110;
              *(float *)(uVar48 + 0x80) =
                   (auVar88._0_4_ - (float)((uint)auVar88._0_4_ & uVar3) * fVar102) - fVar110;
              *(float *)(uVar48 + 0x40) = fVar107;
              *(float *)(uVar48 + 0x60) = fVar99;
              *(float *)(uVar48 + 0x50) = fVar100;
              *(float *)(uVar48 + 0xa0) =
                   (auVar88._4_4_ - (float)((uint)auVar88._4_4_ & uVar3) * fVar102) - fVar107;
              *(float *)(uVar48 + 0xc0) =
                   (auVar88._8_4_ - (float)((uint)auVar88._8_4_ & uVar3) * fVar102) - fVar99;
              *(float *)(uVar48 + 0x70) = fVar72;
              *(float *)(uVar48 + 0x90) =
                   ((float)((uint)auVar109._0_4_ & uVar3) * fVar102 + auVar109._0_4_) - fVar101;
              *(float *)(uVar48 + 0xb0) =
                   ((float)((uint)auVar109._4_4_ & uVar3) * fVar102 + auVar109._4_4_) - fVar100;
              *(float *)(uVar48 + 0xd0) =
                   ((float)((uint)auVar109._8_4_ & uVar3) * fVar102 + auVar109._8_4_) - fVar72;
              if (fVar86 == fVar65) {
                fVar86 = fVar94;
              }
              *(float *)(uVar48 + 0xf0) = fVar86;
              uVar48 = uVar48 + 4;
              puVar55 = puVar55 + 0xc;
            } while (uVar46 + local_258 * 4 != uVar48);
          }
          if (!bVar13) goto LAB_0011c710;
        }
        local_1c78 = &local_19a8;
        local_1b28 = (float *)CONCAT44(fVar15,fVar15);
        pfStack_1b20 = (float *)CONCAT44(fVar15,fVar15);
        local_1b18 = CONCAT44(fVar14,fVar14);
        uStack_1b10 = CONCAT44(fVar14,fVar14);
        local_1c70 = (float *)(param_1 + 0xb);
        local_1b08 = local_1b28;
        pfStack_1b00 = pfStack_1b20;
        local_1af8 = local_1b18;
        uStack_1af0 = uStack_1b10;
        if ((ulong)((long)pfStack_1940 - (long)local_1948) < 0xc00) {
          local_1c48 = local_1948;
          pfStack_1c40 = pfStack_1940;
          const::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                    ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1bb8,
                     (range *)&local_1c78);
        }
        else {
          parallel_reduce_internal<unsigned_long,embree::LBBox<embree::Vec3fa>,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::range<unsigned_long>const&)_1_,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::LBBox<embree::Vec3fa>const&,embree::LBBox<embree::Vec3fa>const&)_2_>
                    ((ulong)&local_1bb8,((long)pfStack_1940 - (long)local_1948) + 0x3ffU >> 10,
                     (ulong)local_1948,(ulong)pfStack_1940,(LBBox_conflict *)0x400,
                     (_lambda_embree__range<unsigned_long>_const___1_ *)&local_1b28,
                     (_lambda_embree__LBBox<embree::Vec3fa>_const__embree__LBBox<embree::Vec3fa>_const___2_
                      *)&local_1c78);
        }
        *(float **)(this + 0x10) = local_1bb8;
        *(float **)(this + 0x18) = pfStack_1bb0;
        *(ulong *)this = uVar52;
        *(ulong *)(this + 0x20) = local_1ba8;
        *(ulong *)(this + 0x28) = uStack_1ba0;
        *(ulong *)(this + 0x50) = local_1920;
        *(float **)(this + 0x30) = local_1b98;
        *(float **)(this + 0x38) = pfStack_1b90;
        *(ulong *)(this + 0x40) = local_1b88;
        *(ulong *)(this + 0x48) = uStack_1b80;
      }
      else {
        local_1bb8 = (float *)0xe0;
        if (in_stack_00000008 != *(FastAllocator **)(pfVar39 + 2)) {
          embree::MutexSys::lock();
          if (*(long *)(pfVar39 + 2) != 0) {
            LOCK();
            *(long *)(*(long *)(pfVar39 + 2) + 0x118) =
                 *(long *)(*(long *)(pfVar39 + 2) + 0x118) +
                 *(long *)(pfVar39 + 0x2a) + *(long *)(pfVar39 + 0x1a);
            UNLOCK();
            LOCK();
            *(long *)(*(long *)(pfVar39 + 2) + 0x120) =
                 *(long *)(*(long *)(pfVar39 + 2) + 0x120) +
                 (((*(long *)(pfVar39 + 0x26) + *(long *)(pfVar39 + 0x16)) -
                  *(long *)(pfVar39 + 0x14)) - *(long *)(pfVar39 + 0x24));
            UNLOCK();
            LOCK();
            *(long *)(*(long *)(pfVar39 + 2) + 0x128) =
                 *(long *)(*(long *)(pfVar39 + 2) + 0x128) +
                 *(long *)(pfVar39 + 0x2c) + *(long *)(pfVar39 + 0x1c);
            UNLOCK();
          }
          pfVar39[0x12] = 0.0;
          pfVar39[0x13] = 0.0;
          pfVar39[0x16] = 0.0;
          pfVar39[0x17] = 0.0;
          pfVar39[0x14] = 0.0;
          pfVar39[0x15] = 0.0;
          pfVar39[0x1a] = 0.0;
          pfVar39[0x1b] = 0.0;
          pfVar39[0x1c] = 0.0;
          pfVar39[0x1d] = 0.0;
          pfVar39[0x18] = 0.0;
          pfVar39[0x19] = 0.0;
          if (in_stack_00000008 == (FastAllocator *)0x0) {
            pfVar39[0x22] = 0.0;
            pfVar39[0x23] = 0.0;
            uVar44 = 0;
            pfVar39[0x26] = 0.0;
            pfVar39[0x27] = 0.0;
            pfVar39[0x24] = 0.0;
            pfVar39[0x25] = 0.0;
            pfVar39[0x2a] = 0.0;
            pfVar39[0x2b] = 0.0;
            pfVar39[0x2c] = 0.0;
            pfVar39[0x2d] = 0.0;
          }
          else {
            uVar44 = *(undefined8 *)(in_stack_00000008 + 0x10);
            pfVar39[0x22] = 0.0;
            pfVar39[0x23] = 0.0;
            pfVar39[0x26] = 0.0;
            pfVar39[0x27] = 0.0;
            *(undefined8 *)(pfVar39 + 0x18) = uVar44;
            pfVar39[0x24] = 0.0;
            pfVar39[0x25] = 0.0;
            pfVar39[0x2a] = 0.0;
            pfVar39[0x2b] = 0.0;
            pfVar39[0x2c] = 0.0;
            pfVar39[0x2d] = 0.0;
            pfVar39[0x28] = 0.0;
            pfVar39[0x29] = 0.0;
            uVar44 = *(undefined8 *)(in_stack_00000008 + 0x10);
          }
          *(undefined8 *)(pfVar39 + 0x28) = uVar44;
          LOCK();
          *(FastAllocator **)(pfVar39 + 2) = in_stack_00000008;
          UNLOCK();
          local_1b28 = pfVar39;
          embree::MutexSys::lock();
          puVar55 = *(ulong **)(in_stack_00000008 + 0x138);
          if (puVar55 == *(ulong **)(in_stack_00000008 + 0x140)) {
            std::
            vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
            ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                      ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                        *)(in_stack_00000008 + 0x130),puVar55,&local_1b28);
          }
          else {
            *puVar55 = (ulong)pfVar39;
            *(long *)(in_stack_00000008 + 0x138) = *(long *)(in_stack_00000008 + 0x138) + 8;
          }
          embree::MutexSys::unlock();
          embree::MutexSys::unlock();
        }
        in_stack_00000010[5] = in_stack_00000010[5] + 0xe0;
        uVar48 = in_stack_00000010[2];
        uVar46 = (ulong)(-(int)uVar48 & 0xf);
        uVar52 = uVar48 + 0xe0 + uVar46;
        in_stack_00000010[2] = uVar52;
        if (in_stack_00000010[3] < uVar52) {
          in_stack_00000010[2] = uVar48;
          if ((float *)in_stack_00000010[4] < (float *)0x380) {
            puVar45 = (undefined8 *)
                      FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1bb8,0x40,false);
          }
          else {
            local_1b28 = (float *)in_stack_00000010[4];
            puVar45 = (undefined8 *)
                      FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1b28,0x40,true);
            in_stack_00000010[1] = (ulong)puVar45;
            uVar52 = in_stack_00000010[2];
            in_stack_00000010[2] = 0xe0;
            in_stack_00000010[6] = (in_stack_00000010[3] + in_stack_00000010[6]) - uVar52;
            in_stack_00000010[3] = (ulong)local_1b28;
            if (local_1b28 < (float *)0xe0) {
              local_1b28 = (float *)in_stack_00000010[4];
              in_stack_00000010[2] = 0;
              puVar45 = (undefined8 *)
                        FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1b28,0x40,false);
              in_stack_00000010[1] = (ulong)puVar45;
              uVar52 = in_stack_00000010[2];
              in_stack_00000010[2] = 0xe0;
              in_stack_00000010[6] = (in_stack_00000010[3] + in_stack_00000010[6]) - uVar52;
              in_stack_00000010[3] = (ulong)local_1b28;
              if (local_1b28 < (float *)0xe0) {
                puVar45 = (undefined8 *)0x0;
                in_stack_00000010[2] = 0;
              }
            }
          }
        }
        else {
          in_stack_00000010[6] = in_stack_00000010[6] + uVar46;
          puVar45 = (undefined8 *)((in_stack_00000010[1] - 0xe0) + uVar52);
        }
        uVar44 = CONCAT44(fVar15,fVar15);
        uVar8 = CONCAT44(fVar15,fVar15);
        *puVar45 = 8;
        puVar45[1] = 8;
        puVar45[0xc] = uVar44;
        puVar45[0xd] = uVar8;
        puVar45[8] = uVar44;
        puVar45[9] = uVar8;
        puVar45[4] = uVar44;
        puVar45[5] = uVar8;
        uVar44 = CONCAT44(fVar14,fVar14);
        uVar8 = CONCAT44(fVar14,fVar14);
        puVar45[2] = 8;
        puVar45[3] = 8;
        puVar45[0xe] = uVar44;
        puVar45[0xf] = uVar8;
        puVar45[10] = uVar44;
        puVar45[0xb] = uVar8;
        puVar45[6] = uVar44;
        puVar45[7] = uVar8;
        *(undefined1 (*) [16])(puVar45 + 0x18) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x14) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x1a) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x16) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0x12) = (undefined1  [16])0x0;
        uVar52 = (ulong)puVar45 | 1;
        if (local_258 != 0) goto LAB_0011b27f;
        auVar79._4_4_ = fVar15;
        auVar79._0_4_ = fVar15;
        auVar79._8_4_ = fVar15;
        auVar79._12_4_ = fVar15;
        auVar73._4_4_ = fVar14;
        auVar73._0_4_ = fVar14;
        auVar73._8_4_ = fVar14;
        auVar73._12_4_ = fVar14;
        auVar81 = auVar79;
        auVar111 = auVar73;
LAB_0011c710:
        *(ulong *)this = uVar52;
        *(ulong *)(this + 0x50) = local_1920;
        *(undefined1 (*) [16])(this + 0x10) = auVar79;
        *(undefined1 (*) [16])(this + 0x20) = auVar73;
        *(undefined1 (*) [16])(this + 0x30) = auVar81;
        *(undefined1 (*) [16])(this + 0x40) = auVar111;
      }
      uVar52 = 0;
      if (local_258 != 0) {
        do {
          puVar61 = local_2d8[uVar52];
          puVar55 = puVar61 + 1;
          *puVar55 = *puVar55 - 1;
          if ((*puVar55 == 0) && (puVar45 = (undefined8 *)*puVar61, puVar45 != (undefined8 *)0x0)) {
            pvVar4 = (void *)puVar45[4];
            lVar51 = puVar45[3];
            if (pvVar4 != (void *)0x0) {
              if ((ulong)(lVar51 * 0x50) < 0x1c00000) {
                embree::alignedFree(pvVar4);
              }
              else {
                embree::os_free(pvVar4,lVar51 * 0x50,*(bool *)(puVar45 + 1));
              }
            }
            if (lVar51 != 0) {
              (*(code *)**(undefined8 **)*puVar45)((undefined8 *)*puVar45,lVar51 * -0x50,1);
            }
            operator_delete(puVar45,0x28);
          }
          uVar52 = uVar52 + 1;
        } while (uVar52 < local_258);
      }
      goto LAB_0011c6c8;
    }
    uVar48 = (long)pfStack_1940 - (long)pfVar39;
    bVar57 = uVar48 <= param_1[4] && (uint)local_11d8._12_4_ < 2;
    if (uVar48 > param_1[4] || (uint)local_11d8._12_4_ >= 2) goto LAB_00119937;
  }
  else {
    uVar48 = (long)pfStack_1940 - (long)pfVar39;
    bVar57 = uVar48 <= param_1[4] && (uint)local_11d8._12_4_ < 2;
    if (uVar48 > param_1[4] || (uint)local_11d8._12_4_ >= 2) goto LAB_00119937;
  }
  uVar52 = uVar48 + 3 >> 2;
  local_1f08 = (float *)(((uVar48 + 3 & 0xfffffffffffffffc) + uVar52) * 0x40);
  local_1ef8 = 7;
  if (uVar52 < 8) {
    local_1ef8 = uVar52;
  }
  local_1ef8 = local_1ef8 + 8;
LAB_0011b91c:
  local_1bb8 = local_1f08;
  pfVar40 = (float *)*in_stack_00000018;
  if (in_stack_00000008 != *(FastAllocator **)(pfVar40 + 2)) {
    embree::MutexSys::lock();
    if (*(long *)(pfVar40 + 2) != 0) {
      LOCK();
      *(long *)(*(long *)(pfVar40 + 2) + 0x118) =
           *(long *)(*(long *)(pfVar40 + 2) + 0x118) +
           *(long *)(pfVar40 + 0x2a) + *(long *)(pfVar40 + 0x1a);
      UNLOCK();
      LOCK();
      *(long *)(*(long *)(pfVar40 + 2) + 0x120) =
           *(long *)(*(long *)(pfVar40 + 2) + 0x120) +
           (((*(long *)(pfVar40 + 0x26) + *(long *)(pfVar40 + 0x16)) - *(long *)(pfVar40 + 0x14)) -
           *(long *)(pfVar40 + 0x24));
      UNLOCK();
      LOCK();
      *(long *)(*(long *)(pfVar40 + 2) + 0x128) =
           *(long *)(*(long *)(pfVar40 + 2) + 0x128) +
           *(long *)(pfVar40 + 0x2c) + *(long *)(pfVar40 + 0x1c);
      UNLOCK();
    }
    pfVar40[0x12] = 0.0;
    pfVar40[0x13] = 0.0;
    pfVar40[0x16] = 0.0;
    pfVar40[0x17] = 0.0;
    pfVar40[0x14] = 0.0;
    pfVar40[0x15] = 0.0;
    pfVar40[0x1a] = 0.0;
    pfVar40[0x1b] = 0.0;
    pfVar40[0x1c] = 0.0;
    pfVar40[0x1d] = 0.0;
    pfVar40[0x18] = 0.0;
    pfVar40[0x19] = 0.0;
    if (in_stack_00000008 == (FastAllocator *)0x0) {
      pfVar40[0x22] = 0.0;
      pfVar40[0x23] = 0.0;
      uVar44 = 0;
      pfVar40[0x26] = 0.0;
      pfVar40[0x27] = 0.0;
      pfVar40[0x24] = 0.0;
      pfVar40[0x25] = 0.0;
      pfVar40[0x2a] = 0.0;
      pfVar40[0x2b] = 0.0;
      pfVar40[0x2c] = 0.0;
      pfVar40[0x2d] = 0.0;
    }
    else {
      uVar44 = *(undefined8 *)(in_stack_00000008 + 0x10);
      pfVar40[0x22] = 0.0;
      pfVar40[0x23] = 0.0;
      pfVar40[0x26] = 0.0;
      pfVar40[0x27] = 0.0;
      *(undefined8 *)(pfVar40 + 0x18) = uVar44;
      pfVar40[0x24] = 0.0;
      pfVar40[0x25] = 0.0;
      pfVar40[0x2a] = 0.0;
      pfVar40[0x2b] = 0.0;
      pfVar40[0x2c] = 0.0;
      pfVar40[0x2d] = 0.0;
      pfVar40[0x28] = 0.0;
      pfVar40[0x29] = 0.0;
      uVar44 = *(undefined8 *)(in_stack_00000008 + 0x10);
    }
    *(undefined8 *)(pfVar40 + 0x28) = uVar44;
    LOCK();
    *(FastAllocator **)(pfVar40 + 2) = in_stack_00000008;
    UNLOCK();
    local_1b28 = pfVar40;
    embree::MutexSys::lock();
    puVar55 = *(ulong **)(in_stack_00000008 + 0x138);
    if (puVar55 == *(ulong **)(in_stack_00000008 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(in_stack_00000008 + 0x130),puVar55,&local_1b28);
    }
    else {
      *puVar55 = (ulong)pfVar40;
      *(long *)(in_stack_00000008 + 0x138) = *(long *)(in_stack_00000008 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar46 = in_stack_00000018[2];
  in_stack_00000018[5] = in_stack_00000018[5] + (long)local_1f08;
  uVar37 = (ulong)(-(int)uVar46 & 0xf);
  lVar51 = uVar46 + uVar37;
  uVar48 = lVar51 + (long)local_1f08;
  in_stack_00000018[2] = uVar48;
  if (in_stack_00000018[3] < uVar48) {
    in_stack_00000018[2] = uVar46;
    if ((float *)in_stack_00000018[4] < (float *)(uVar52 * 0x500)) {
      puVar41 = (undefined4 *)
                FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1bb8,0x40,false);
    }
    else {
      local_1b28 = (float *)in_stack_00000018[4];
      puVar41 = (undefined4 *)
                FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1b28,0x40,true);
      in_stack_00000018[1] = (ulong)puVar41;
      in_stack_00000018[6] = (in_stack_00000018[3] + in_stack_00000018[6]) - in_stack_00000018[2];
      in_stack_00000018[2] = (ulong)local_1f08;
      in_stack_00000018[3] = (ulong)local_1b28;
      if (local_1b28 < local_1f08) {
        in_stack_00000018[2] = 0;
        local_1b28 = (float *)in_stack_00000018[4];
        puVar41 = (undefined4 *)
                  FastAllocator::malloc(in_stack_00000008,(ulong *)&local_1b28,0x40,false);
        in_stack_00000018[1] = (ulong)puVar41;
        in_stack_00000018[6] = (in_stack_00000018[3] + in_stack_00000018[6]) - in_stack_00000018[2];
        in_stack_00000018[2] = (ulong)local_1f08;
        in_stack_00000018[3] = (ulong)local_1b28;
        if (local_1b28 < local_1f08) {
          puVar41 = (undefined4 *)0x0;
          in_stack_00000018[2] = 0;
        }
      }
    }
  }
  else {
    in_stack_00000018[6] = in_stack_00000018[6] + uVar37;
    puVar41 = (undefined4 *)(lVar51 + in_stack_00000018[1]);
  }
  fVar65 = _LC10;
  fVar15 = _LC8;
  fVar14 = _LC3;
  if (uVar52 == 0) {
    local_1d88._4_4_ = _LC10;
    local_1d88._0_4_ = _LC10;
    uStack_1d80._0_4_ = _LC10;
    uStack_1d80._4_4_ = _LC10;
    local_1db8._4_4_ = _LC8;
    local_1db8._0_4_ = _LC8;
    uStack_1db0._0_4_ = _LC8;
    uStack_1db0._4_4_ = _LC8;
    local_1da8._4_4_ = _LC10;
    local_1da8._0_4_ = _LC10;
    uStack_1da0._0_4_ = _LC10;
    uStack_1da0._4_4_ = _LC10;
    local_1d98._4_4_ = _LC8;
    local_1d98._0_4_ = _LC8;
    uStack_1d90._0_4_ = _LC8;
    uStack_1d90._4_4_ = _LC8;
  }
  else {
    local_1d88._4_4_ = _LC10;
    local_1d88._0_4_ = _LC10;
    uStack_1d80._0_4_ = _LC10;
    uStack_1d80._4_4_ = _LC10;
    local_1da8._4_4_ = _LC10;
    local_1da8._0_4_ = _LC10;
    uStack_1da0._0_4_ = _LC10;
    uStack_1da0._4_4_ = _LC10;
    local_1db8._4_4_ = _LC8;
    local_1db8._0_4_ = _LC8;
    uStack_1db0._0_4_ = _LC8;
    uStack_1db0._4_4_ = _LC8;
    local_1d98._4_4_ = _LC8;
    local_1d98._0_4_ = _LC8;
    uStack_1d90._0_4_ = _LC8;
    uStack_1d90._4_4_ = _LC8;
    puVar42 = puVar41;
    local_1f08 = pfVar39;
    do {
      local_1a78[0] = 0xffffffff;
      local_1a78[1] = 0xffffffff;
      local_1a78[2] = 0xffffffff;
      local_1a78[3] = 0xffffffff;
      local_1a78[4] = 0xffffffff;
      local_1a78[5] = 0xffffffff;
      local_1a78[6] = 0xffffffff;
      local_1a78[7] = 0xffffffff;
      local_1a58 = (undefined1  [16])0x0;
      local_1a48 = (undefined1  [16])0x0;
      local_1a38 = (undefined1  [16])0x0;
      _local_1a28 = (undefined1  [16])0x0;
      local_1a18 = (undefined1  [16])0x0;
      local_1a08 = (undefined1  [16])0x0;
      _local_19f8 = (undefined1  [16])0x0;
      _local_19e8 = (undefined1  [16])0x0;
      _local_19d8 = (undefined1  [16])0x0;
      local_18c8 = (undefined1  [16])0x0;
      local_18b8 = (undefined1  [16])0x0;
      local_18a8 = (undefined1  [16])0x0;
      local_17d8 = (undefined1  [16])0x0;
      local_17c8 = (undefined1  [16])0x0;
      local_17b8 = (undefined1  [16])0x0;
      local_11d8 = (undefined1  [16])0x0;
      local_11c8 = (undefined1  [16])0x0;
      local_11b8 = (undefined1  [16])0x0;
      if (local_1f08 < pfStack_1940) {
        lVar47 = *(long *)(*(long *)(param_1[0xe] + 0x68) + 0x1e0);
        lVar58 = 0;
        lVar51 = *(long *)(local_1918 + 0x20) + (long)local_1f08 * 0x50;
        auVar111._0_12_ = ZEXT812(0);
        auVar111._12_4_ = 0;
        local_1ea8._8_8_ = CONCAT44(fVar15,fVar15);
        local_1ea8._0_8_ = CONCAT44(fVar15,fVar15);
        local_1eb8._8_8_ = CONCAT44(fVar65,fVar65);
        local_1eb8._0_8_ = CONCAT44(fVar65,fVar65);
        local_1ec8._8_8_ = CONCAT44(fVar15,fVar15);
        local_1ec8._0_8_ = CONCAT44(fVar15,fVar15);
        local_1ed8._8_8_ = CONCAT44(fVar65,fVar65);
        local_1ed8._0_8_ = CONCAT44(fVar65,fVar65);
        do {
          puVar2 = (uint *)(lVar51 + 0xc);
          lVar62 = *(long *)(lVar47 + (ulong)*puVar2 * 8);
          uVar3 = *(uint *)(lVar51 + 0x1c);
          fVar94 = *(float *)(lVar62 + 0x2c);
          fVar102 = *(float *)(lVar62 + 0x28);
          fVar107 = *(float *)(lVar62 + 0x30) - fVar94;
          fVar99 = ((float)local_1920 - fVar94) / fVar107;
          fVar86 = (local_1920._4_4_ - fVar94) / fVar107;
          fVar110 = _LC0 * fVar99 * fVar102;
          if ((float)(_LC6 & (uint)fVar110) < _LC1) {
            fVar110 = (float)((uint)((float)(int)fVar110 -
                                    (float)(-(uint)(fVar110 < (float)(int)fVar110) & (uint)fVar14))
                             | ~_LC6 & (uint)fVar110);
          }
          if (fVar110 < 0.0) {
            local_1e48._0_4_ = 0.0;
            local_1e60 = 0x30;
            local_1e78 = 0;
            fVar110 = fVar107;
          }
          else {
            iVar34 = (int)fVar110;
            local_1e48._0_4_ = (float)iVar34;
            local_1e78 = (long)iVar34 * 0x30;
            local_1e60 = (long)(iVar34 + 1) * 0x30;
            fVar110 = (float)(iVar34 + 1) * fVar107;
          }
          fVar100 = fVar102 * fVar99;
          puVar56 = (uint *)((ulong)uVar3 * *(long *)(lVar62 + 0x60) + *(long *)(lVar62 + 0x58));
          fVar72 = fVar86 * fVar102;
          fVar101 = fVar100;
          if ((float)(_LC6 & (uint)fVar100) < _LC1) {
            fVar101 = (float)(~_LC6 & (uint)fVar100 |
                             (uint)((float)(int)fVar100 -
                                   (float)(-(uint)(fVar100 < (float)(int)fVar100) & (uint)fVar14)));
          }
          fVar96 = fVar72;
          if ((float)(_LC6 & (uint)fVar72) < _LC1) {
            fVar96 = (float)((uint)((float)(-(uint)((float)(int)fVar72 < fVar72) & (uint)fVar14) +
                                   (float)(int)fVar72) | ~_LC6 & (uint)fVar72);
          }
          iVar34 = (int)fVar101;
          if (fVar101 <= 0.0) {
            lVar50 = 0;
            iVar54 = 0;
          }
          else {
            fVar100 = fVar100 - fVar101;
            lVar50 = (long)iVar34 * 0x30;
            iVar54 = iVar34;
          }
          if (iVar34 < 0) {
            iVar34 = -1;
          }
          lVar62 = *(long *)(lVar62 + 0xd0);
          fVar101 = fVar96;
          if (fVar102 <= fVar96) {
            fVar101 = fVar102;
          }
          iVar7 = (int)fVar102 + 1;
          if ((int)fVar96 < (int)fVar102 + 1) {
            iVar7 = (int)fVar96;
          }
          uVar48 = (ulong)*puVar56;
          lVar5 = ((long *)(lVar50 + lVar62))[1];
          lVar50 = *(long *)(lVar50 + lVar62);
          auVar73 = *(undefined1 (*) [16])(lVar50 + uVar48 * lVar5);
          uVar46 = (ulong)puVar56[1];
          uVar37 = (ulong)puVar56[2];
          auVar79 = *(undefined1 (*) [16])(lVar50 + lVar5 * uVar46);
          auVar81 = *(undefined1 (*) [16])(lVar50 + lVar5 * uVar37);
          auVar88 = minps(auVar73,auVar79);
          auVar73 = maxps(auVar73,auVar79);
          plVar53 = (long *)((long)(int)fVar101 * 0x30 + lVar62);
          lVar50 = *plVar53;
          lVar5 = plVar53[1];
          auVar88 = minps(auVar88,auVar81);
          auVar105 = maxps(auVar73,auVar81);
          auVar73 = *(undefined1 (*) [16])(lVar50 + lVar5 * uVar48);
          auVar79 = *(undefined1 (*) [16])(lVar50 + lVar5 * uVar37);
          auVar81 = *(undefined1 (*) [16])(lVar50 + lVar5 * uVar46);
          auVar98 = maxps(auVar73,auVar81);
          auVar73 = minps(auVar73,auVar81);
          auVar81 = maxps(auVar98,auVar79);
          auVar73 = minps(auVar73,auVar79);
          fVar96 = auVar73._0_4_;
          fVar103 = auVar73._4_4_;
          fVar76 = auVar73._8_4_;
          fVar77 = auVar73._12_4_;
          fVar91 = auVar105._0_4_;
          fVar78 = auVar81._0_4_;
          fVar92 = auVar105._4_4_;
          fVar93 = auVar105._8_4_;
          fVar80 = auVar105._12_4_;
          fVar83 = auVar81._4_4_;
          fVar84 = auVar81._8_4_;
          fVar85 = auVar81._12_4_;
          local_1e98._4_4_ = auVar88._4_4_;
          uStack_1e90._0_4_ = auVar88._8_4_;
          uStack_1e90._4_4_ = auVar88._12_4_;
          local_1e98._0_4_ = auVar88._0_4_;
          if (iVar7 - iVar34 == 1) {
            if (fVar100 <= 0.0) {
              fVar100 = 0.0;
              fVar86 = fVar14;
            }
            else {
              fVar86 = fVar14 - fVar100;
            }
            auVar82._0_4_ = fVar100 * fVar78 + fVar86 * fVar91;
            auVar82._4_4_ = fVar100 * fVar83 + fVar86 * fVar92;
            auVar82._8_4_ = fVar100 * fVar84 + fVar86 * fVar93;
            auVar82._12_4_ = fVar100 * fVar85 + fVar86 * fVar80;
            auVar70._0_4_ = fVar100 * fVar96 + fVar86 * (float)local_1e98._0_4_;
            auVar70._4_4_ = fVar100 * fVar103 + fVar86 * (float)local_1e98._4_4_;
            auVar70._8_4_ = fVar100 * fVar76 + fVar86 * (float)uStack_1e90;
            auVar70._12_4_ = fVar100 * fVar77 + fVar86 * uStack_1e90._4_4_;
            fVar101 = fVar101 - fVar72;
            if (fVar101 <= 0.0) {
              fVar101 = 0.0;
              fVar86 = fVar14;
            }
            else {
              fVar86 = fVar14 - fVar101;
            }
            auVar89._4_4_ = fVar92 * fVar101 + fVar83 * fVar86;
            auVar89._0_4_ = fVar91 * fVar101 + fVar78 * fVar86;
            auVar74._0_4_ = fVar101 * (float)local_1e98._0_4_ + fVar86 * fVar96;
            auVar74._4_4_ = fVar101 * (float)local_1e98._4_4_ + fVar86 * fVar103;
            auVar74._8_4_ = fVar101 * (float)uStack_1e90 + fVar86 * fVar76;
            auVar74._12_4_ = fVar101 * uStack_1e90._4_4_ + fVar86 * fVar77;
            auVar89._8_4_ = fVar93 * fVar101 + fVar84 * fVar86;
            auVar89._12_4_ = fVar80 * fVar101 + fVar85 * fVar86;
          }
          else {
            plVar53 = (long *)((long)(iVar54 + 1) * 0x30 + lVar62);
            plVar60 = (long *)((long)((int)fVar101 + -1) * 0x30 + lVar62);
            lVar50 = *plVar53;
            lVar5 = plVar53[1];
            auVar73 = *(undefined1 (*) [16])(lVar50 + uVar48 * lVar5);
            auVar79 = *(undefined1 (*) [16])(lVar50 + uVar46 * lVar5);
            auVar81 = *(undefined1 (*) [16])(lVar50 + lVar5 * uVar37);
            lVar50 = *plVar60;
            lVar5 = plVar60[1];
            auVar88 = maxps(auVar73,auVar79);
            auVar73 = minps(auVar73,auVar79);
            auVar98 = maxps(auVar88,auVar81);
            auVar88 = minps(auVar73,auVar81);
            auVar73 = *(undefined1 (*) [16])(lVar50 + uVar48 * lVar5);
            auVar79 = *(undefined1 (*) [16])(lVar50 + uVar46 * lVar5);
            auVar81 = *(undefined1 (*) [16])(lVar50 + lVar5 * uVar37);
            auVar105 = maxps(auVar73,auVar79);
            auVar79 = minps(auVar73,auVar79);
            auVar73 = maxps(auVar105,auVar81);
            auVar79 = minps(auVar79,auVar81);
            if (fVar100 <= 0.0) {
              fVar100 = 0.0;
              fVar63 = fVar14;
            }
            else {
              fVar63 = fVar14 - fVar100;
            }
            fVar101 = fVar101 - fVar72;
            auVar82._0_4_ = auVar98._0_4_ * fVar100 + fVar91 * fVar63;
            auVar82._4_4_ = auVar98._4_4_ * fVar100 + fVar92 * fVar63;
            auVar82._8_4_ = auVar98._8_4_ * fVar100 + fVar93 * fVar63;
            auVar82._12_4_ = auVar98._12_4_ * fVar100 + fVar80 * fVar63;
            auVar70._0_4_ = fVar100 * auVar88._0_4_ + fVar63 * (float)local_1e98._0_4_;
            auVar70._4_4_ = fVar100 * auVar88._4_4_ + fVar63 * (float)local_1e98._4_4_;
            auVar70._8_4_ = fVar100 * auVar88._8_4_ + fVar63 * (float)uStack_1e90;
            auVar70._12_4_ = fVar100 * auVar88._12_4_ + fVar63 * uStack_1e90._4_4_;
            if (fVar101 <= 0.0) {
              fVar101 = 0.0;
              fVar100 = fVar14;
            }
            else {
              fVar100 = fVar14 - fVar101;
            }
            iVar34 = iVar34 + 1;
            auVar89._0_4_ = auVar73._0_4_ * fVar101 + fVar78 * fVar100;
            auVar89._4_4_ = auVar73._4_4_ * fVar101 + fVar83 * fVar100;
            auVar89._8_4_ = auVar73._8_4_ * fVar101 + fVar84 * fVar100;
            auVar89._12_4_ = auVar73._12_4_ * fVar101 + fVar85 * fVar100;
            auVar74._0_4_ = fVar101 * auVar79._0_4_ + fVar100 * fVar96;
            auVar74._4_4_ = fVar101 * auVar79._4_4_ + fVar100 * fVar103;
            auVar74._8_4_ = fVar101 * auVar79._8_4_ + fVar100 * fVar76;
            auVar74._12_4_ = fVar101 * auVar79._12_4_ + fVar100 * fVar77;
            if (iVar34 < iVar7) {
              plVar53 = (long *)((long)iVar34 * 0x30 + lVar62);
              do {
                lVar50 = plVar53[1];
                lVar5 = *plVar53;
                fVar101 = (float)iVar34;
                iVar34 = iVar34 + 1;
                plVar53 = plVar53 + 6;
                fVar101 = (fVar101 / fVar102 - fVar99) / (fVar86 - fVar99);
                fVar78 = fVar14 - fVar101;
                auVar73 = *(undefined1 (*) [16])(lVar5 + uVar48 * lVar50);
                auVar79 = *(undefined1 (*) [16])(lVar5 + uVar46 * lVar50);
                auVar81 = *(undefined1 (*) [16])(lVar5 + lVar50 * uVar37);
                auVar88 = maxps(auVar73,auVar79);
                auVar73 = minps(auVar73,auVar79);
                fVar100 = auVar70._4_4_;
                fVar72 = auVar70._8_4_;
                fVar96 = auVar70._12_4_;
                fVar83 = auVar82._4_4_;
                fVar84 = auVar82._8_4_;
                fVar85 = auVar82._12_4_;
                auVar79 = maxps(auVar88,auVar81);
                auVar73 = minps(auVar73,auVar81);
                fVar103 = auVar74._4_4_;
                fVar76 = auVar74._8_4_;
                fVar77 = auVar74._12_4_;
                fVar91 = auVar89._4_4_;
                fVar92 = auVar89._8_4_;
                fVar93 = auVar89._12_4_;
                auVar64._0_4_ = auVar73._0_4_ - (fVar101 * auVar74._0_4_ + fVar78 * auVar70._0_4_);
                auVar64._4_4_ = auVar73._4_4_ - (fVar101 * fVar103 + fVar78 * fVar100);
                auVar64._8_4_ = auVar73._8_4_ - (fVar101 * fVar76 + fVar78 * fVar72);
                auVar64._12_4_ = auVar73._12_4_ - (fVar101 * fVar77 + fVar78 * fVar96);
                auVar66._0_4_ = auVar79._0_4_ - (fVar101 * auVar89._0_4_ + fVar78 * auVar82._0_4_);
                auVar66._4_4_ = auVar79._4_4_ - (fVar101 * fVar91 + fVar78 * fVar83);
                auVar66._8_4_ = auVar79._8_4_ - (fVar101 * fVar92 + fVar78 * fVar84);
                auVar66._12_4_ = auVar79._12_4_ - (fVar101 * fVar93 + fVar78 * fVar85);
                auVar73 = minps(auVar64,auVar111);
                auVar79 = maxps(auVar66,auVar111);
                auVar70._0_4_ = auVar70._0_4_ + auVar73._0_4_;
                auVar70._4_4_ = fVar100 + auVar73._4_4_;
                auVar70._8_4_ = fVar72 + auVar73._8_4_;
                auVar70._12_4_ = fVar96 + auVar73._12_4_;
                auVar74._0_4_ = auVar74._0_4_ + auVar73._0_4_;
                auVar74._4_4_ = fVar103 + auVar73._4_4_;
                auVar74._8_4_ = fVar76 + auVar73._8_4_;
                auVar74._12_4_ = fVar77 + auVar73._12_4_;
                auVar82._0_4_ = auVar82._0_4_ + auVar79._0_4_;
                auVar82._4_4_ = fVar83 + auVar79._4_4_;
                auVar82._8_4_ = fVar84 + auVar79._8_4_;
                auVar82._12_4_ = fVar85 + auVar79._12_4_;
                auVar89._0_4_ = auVar89._0_4_ + auVar79._0_4_;
                auVar89._4_4_ = fVar91 + auVar79._4_4_;
                auVar89._8_4_ = fVar92 + auVar79._8_4_;
                auVar89._12_4_ = fVar93 + auVar79._12_4_;
              } while (iVar7 != iVar34);
            }
          }
          lVar51 = lVar51 + 0x50;
          local_1ed8 = minps(local_1ed8,auVar70);
          lVar50 = ((long *)(local_1e78 + lVar62))[1];
          lVar5 = *(long *)(local_1e78 + lVar62);
          local_1ec8 = maxps(local_1ec8,auVar82);
          local_1ea8 = maxps(local_1ea8,auVar89);
          pfVar39 = (float *)(lVar5 + lVar50 * uVar48);
          fVar86 = *pfVar39;
          fVar99 = pfVar39[1];
          fVar101 = pfVar39[2];
          local_1eb8 = minps(local_1eb8,auVar74);
          lVar6 = ((long *)(lVar62 + local_1e60))[1];
          lVar62 = *(long *)(lVar62 + local_1e60);
          pfVar39 = (float *)(lVar62 + uVar48 * lVar6);
          fVar100 = *pfVar39;
          fVar72 = pfVar39[1];
          fVar96 = pfVar39[2];
          pfVar39 = (float *)(lVar5 + lVar50 * uVar37);
          fVar103 = *pfVar39;
          fVar76 = pfVar39[1];
          fVar77 = pfVar39[2];
          pfVar39 = (float *)(lVar5 + lVar50 * uVar46);
          fVar78 = *pfVar39;
          fVar83 = pfVar39[1];
          fVar84 = pfVar39[2];
          pfVar39 = (float *)(lVar62 + uVar46 * lVar6);
          fVar85 = *pfVar39;
          fVar91 = pfVar39[1];
          fVar92 = pfVar39[2];
          fVar63 = (fVar107 * (float)local_1e48) / fVar102 + fVar94;
          pfVar39 = (float *)(lVar62 + lVar6 * uVar37);
          fVar107 = *pfVar39;
          fVar93 = pfVar39[1];
          fVar80 = pfVar39[2];
          local_1a78[lVar58] = *puVar2;
          local_1a78[lVar58 + 4] = uVar3;
          fVar102 = fVar14 / ((fVar110 / fVar102 + fVar94) - fVar63);
          fVar94 = (float)((uint)fVar63 ^ _LC36) * fVar102;
          fVar110 = fVar14 - fVar94;
          *(float *)(local_1a58 + lVar58 * 4) = fVar100 * fVar94 + fVar86 * fVar110;
          fVar102 = (fVar14 - fVar63) * fVar102;
          fVar63 = fVar14 - fVar102;
          *(float *)(local_1a48 + lVar58 * 4) = fVar72 * fVar94 + fVar99 * fVar110;
          *(float *)(local_1a38 + lVar58 * 4) = fVar96 * fVar94 + fVar101 * fVar110;
          local_1f08 = (float *)((long)local_1f08 + 1);
          *(float *)(local_18c8 + lVar58 * 4) = fVar100 * fVar102 + fVar86 * fVar63;
          *(float *)(local_18a8 + lVar58 * 4) = fVar96 * fVar102 + fVar101 * fVar63;
          *(float *)(local_18b8 + lVar58 * 4) = fVar72 * fVar102 + fVar99 * fVar63;
          *(float *)(local_19f8 + lVar58 * 4) = fVar94 * fVar107 + fVar110 * fVar103;
          *(float *)(local_1a28 + lVar58 * 4) = fVar78 * fVar110 + fVar85 * fVar94;
          *(float *)(local_1a18 + lVar58 * 4) = fVar83 * fVar110 + fVar91 * fVar94;
          *(float *)(local_1a08 + lVar58 * 4) = fVar84 * fVar110 + fVar92 * fVar94;
          *(float *)(local_17d8 + lVar58 * 4) = fVar78 * fVar63 + fVar85 * fVar102;
          *(float *)(local_17b8 + lVar58 * 4) = fVar84 * fVar63 + fVar92 * fVar102;
          *(float *)(local_17c8 + lVar58 * 4) = fVar83 * fVar63 + fVar91 * fVar102;
          *(float *)(local_19e8 + lVar58 * 4) = fVar94 * fVar93 + fVar110 * fVar76;
          *(float *)((SetMB *)local_11d8 + lVar58 * 4) = fVar102 * fVar107 + fVar103 * fVar63;
          *(float *)(local_11c8 + lVar58 * 4) = fVar102 * fVar93 + fVar76 * fVar63;
          *(float *)(local_11b8 + lVar58 * 4) = fVar102 * fVar80 + fVar77 * fVar63;
          *(float *)(local_19d8 + lVar58 * 4) = fVar94 * fVar80 + fVar110 * fVar77;
          lVar58 = lVar58 + 1;
        } while ((lVar58 != 4) && (local_1f08 < pfStack_1940));
        auVar81 = ZEXT816(0);
        local_1ee8._4_4_ = 0.0 - (float)local_19d8._4_4_;
        local_1ee8._0_4_ = 0.0 - (float)local_19d8._0_4_;
        uStack_1ee0._0_4_ = 0.0 - (float)uStack_19d0;
        uStack_1ee0._4_4_ = 0.0 - uStack_19d0._4_4_;
        local_1e98._4_4_ = 0.0 - (float)local_19e8._4_4_;
        local_1e98._0_4_ = 0.0 - (float)local_19e8._0_4_;
        uStack_1e90._0_4_ = 0.0 - fStack_19e0;
        uStack_1e90._4_4_ = 0.0 - fStack_19dc;
        local_1e88._4_4_ = 0.0 - (float)local_19f8._4_4_;
        local_1e88._0_4_ = 0.0 - (float)local_19f8._0_4_;
        uStack_1e80._0_4_ = 0.0 - fStack_19f0;
        uStack_1e80._4_4_ = 0.0 - fStack_19ec;
      }
      else {
        local_1ea8._4_4_ = fVar15;
        local_1ea8._0_4_ = fVar15;
        local_1ea8._12_4_ = fVar15;
        local_1ea8._8_4_ = fVar15;
        local_19e8._0_4_ = 0.0;
        local_19e8._4_4_ = 0.0;
        fStack_19e0 = 0.0;
        fStack_19dc = 0.0;
        _local_1ee8 = (undefined1  [16])0x0;
        auVar81._0_12_ = ZEXT812(0);
        auVar81._12_4_ = 0;
        local_19d8._0_4_ = 0.0;
        local_19d8._4_4_ = 0.0;
        uStack_19d0._0_4_ = 0.0;
        uStack_19d0._4_4_ = 0.0;
        local_19f8._0_4_ = 0.0;
        local_19f8._4_4_ = 0.0;
        fStack_19f0 = 0.0;
        fStack_19ec = 0.0;
        local_1eb8._4_4_ = fVar65;
        local_1eb8._0_4_ = fVar65;
        local_1eb8._12_4_ = fVar65;
        local_1eb8._8_4_ = fVar65;
        _local_1e88 = (undefined1  [16])0x0;
        _local_1e98 = (undefined1  [16])0x0;
        local_1ec8._4_4_ = fVar15;
        local_1ec8._0_4_ = fVar15;
        local_1ec8._12_4_ = fVar15;
        local_1ec8._8_4_ = fVar15;
        local_1ed8._4_4_ = fVar65;
        local_1ed8._0_4_ = fVar65;
        local_1ed8._12_4_ = fVar65;
        local_1ed8._8_4_ = fVar65;
      }
      puVar42[0x20] = local_19d8._0_4_;
      puVar42[0x21] = local_19d8._4_4_;
      puVar42[0x22] = (float)uStack_19d0;
      puVar42[0x23] = uStack_19d0._4_4_;
      puVar43 = puVar42 + 0x50;
      puVar42[0x1c] = local_19e8._0_4_;
      puVar42[0x1d] = local_19e8._4_4_;
      puVar42[0x1e] = fStack_19e0;
      puVar42[0x1f] = fStack_19dc;
      *(undefined8 *)(puVar42 + 0x34) = 0;
      *(undefined8 *)(puVar42 + 0x36) = 0;
      *(undefined8 *)(puVar42 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar42 + 0x4a) = 0xffffffffffffffff;
      _local_1d98 = maxps(_local_1d98,local_1ec8);
      *(undefined8 *)(puVar42 + 0x38) = 0;
      *(undefined8 *)(puVar42 + 0x3a) = 0;
      puVar42[0x10] = 0;
      puVar42[0x11] = 0;
      puVar42[0x12] = 0;
      puVar42[0x13] = 0;
      *(undefined1 (*) [8])(puVar42 + 0x3c) = local_1e88;
      *(undefined8 *)(puVar42 + 0x3e) = uStack_1e80;
      _local_1da8 = minps(_local_1da8,local_1ed8);
      puVar42[0x18] = local_19f8._0_4_;
      puVar42[0x19] = local_19f8._4_4_;
      puVar42[0x1a] = fStack_19f0;
      puVar42[0x1b] = fStack_19ec;
      *puVar42 = 0;
      puVar42[1] = 0;
      puVar42[2] = 0;
      puVar42[3] = 0;
      puVar42[4] = 0;
      puVar42[5] = 0;
      puVar42[6] = 0;
      puVar42[7] = 0;
      puVar42[8] = 0;
      puVar42[9] = 0;
      puVar42[10] = 0;
      puVar42[0xb] = 0;
      puVar42[0xc] = 0;
      puVar42[0xd] = 0;
      puVar42[0xe] = 0;
      puVar42[0xf] = 0;
      puVar42[0x14] = 0;
      puVar42[0x15] = 0;
      puVar42[0x16] = 0;
      puVar42[0x17] = 0;
      puVar42[0x24] = 0;
      puVar42[0x25] = 0;
      puVar42[0x26] = 0;
      puVar42[0x27] = 0;
      puVar42[0x28] = 0;
      puVar42[0x29] = 0;
      puVar42[0x2a] = 0;
      puVar42[0x2b] = 0;
      *(undefined1 (*) [16])(puVar42 + 0x2c) = auVar81;
      puVar42[0x30] = 0;
      puVar42[0x31] = 0;
      puVar42[0x32] = 0;
      puVar42[0x33] = 0;
      *(undefined1 (*) [8])(puVar42 + 0x40) = local_1e98;
      *(ulong *)(puVar42 + 0x42) = uStack_1e90;
      *(undefined1 (*) [8])(puVar42 + 0x44) = local_1ee8;
      *(undefined8 *)(puVar42 + 0x46) = uStack_1ee0;
      puVar42[0x4c] = 0xffffffff;
      puVar42[0x4d] = 0xffffffff;
      puVar42[0x4e] = 0xffffffff;
      puVar42[0x4f] = 0xffffffff;
      _local_1d88 = minps(_local_1d88,local_1eb8);
      _local_1db8 = maxps(_local_1db8,local_1ea8);
      puVar42 = puVar43;
    } while (puVar41 + uVar52 * 0x50 != puVar43);
  }
  *(undefined1 (*) [8])(this + 0x10) = local_1da8;
  *(undefined8 *)(this + 0x18) = uStack_1da0;
  *(ulong *)this = local_1ef8 | (ulong)puVar41;
  *(undefined1 (*) [8])(this + 0x20) = local_1d98;
  *(undefined8 *)(this + 0x28) = uStack_1d90;
  *(ulong *)(this + 0x50) = local_1920;
  *(undefined1 (*) [8])(this + 0x30) = local_1d88;
  *(undefined8 *)(this + 0x38) = uStack_1d80;
  *(undefined1 (*) [8])(this + 0x40) = local_1db8;
  *(undefined8 *)(this + 0x48) = uStack_1db0;
LAB_0011c6c8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool) */

BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
* embree::sse2::BVHBuilderMSMBlur::
  BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
  ::recurse(BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
            *param_1,ulong *param_2,long *param_3,char param_4,undefined8 param_5,undefined8 param_6
           ,FastAllocator *param_7,MutexSys *param_8)

{
  ulong *puVar1;
  void *pvVar2;
  SetMB *pSVar3;
  SetMB **ppSVar4;
  SetMB **ppSVar5;
  SetMB *pSVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [12];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  MutexSys *pMVar31;
  SetMB *pSVar32;
  ulong uVar33;
  long lVar34;
  float *pfVar35;
  ulong uVar36;
  ulong uVar37;
  SetMB *pSVar38;
  SetMB *pSVar39;
  SetMB *pSVar40;
  SetMB *pSVar41;
  undefined8 uVar42;
  SetMB *pSVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined8 *puVar46;
  SetMB *pSVar47;
  SetMB *pSVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  SetMB *pSVar52;
  SetMB *pSVar53;
  SetMB *pSVar54;
  SetMB *pSVar55;
  long lVar56;
  undefined1 *puVar57;
  long in_FS_OFFSET;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar69;
  float fVar71;
  float fVar73;
  undefined4 uVar74;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  float fVar72;
  undefined1 auVar68 [16];
  float fVar78;
  float fVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  float fVar83;
  undefined1 auVar84 [16];
  float fVar85;
  undefined1 auVar86 [16];
  SetMB *pSVar87;
  SetMB *pSVar89;
  undefined1 auVar88 [16];
  SetMB *pSVar90;
  SetMB *pSVar92;
  undefined1 auVar91 [16];
  float fVar93;
  SetMB *pSVar94;
  SetMB *pSVar98;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar99;
  float fVar100;
  SetMB *local_1b08;
  SetMB *pSStack_1b00;
  SetMB *local_1af8;
  SetMB *pSStack_1af0;
  SetMB *local_1ae8;
  SetMB *pSStack_1ae0;
  undefined1 local_1ad8 [8];
  undefined8 uStack_1ad0;
  SetMB *local_1ac8;
  float fStack_1aac;
  undefined4 uStack_1a9c;
  SetMB *local_1a98;
  SetMB *local_1a90;
  SetMB *local_1a88;
  SetMB *pSStack_1a80;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined4 local_1a48;
  float local_1a38;
  undefined4 uStack_1a34;
  undefined4 uStack_1a30;
  undefined4 uStack_1a2c;
  undefined4 local_1a28;
  undefined4 local_1a18;
  bool local_1951;
  SetMB *local_1900;
  float local_18f8;
  float local_18f4;
  float local_18f0;
  float local_18ec;
  SetMB *local_18e8;
  SetMB *local_18e0;
  undefined8 local_18d8;
  SetMB *local_18d0;
  ulong *local_18c8;
  undefined8 local_18b8;
  SetMB *local_18b0;
  ulong *local_18a8;
  SetMB **local_18a0;
  SetMB *local_1898;
  SetMB *local_1888;
  SetMB *pSStack_1880;
  SetMB *local_1878;
  SetMB *pSStack_1870;
  SetMB *local_1868;
  SetMB *pSStack_1860;
  SetMB *local_1858;
  SetMB *pSStack_1850;
  SetMB *local_1848;
  SetMB *pSStack_1840;
  SetMB *local_1838;
  SetMB *pSStack_1830;
  SetMB *local_1828;
  SetMB *local_1820;
  SetMB *local_1818;
  SetMB *local_1810;
  undefined4 local_1808;
  undefined4 local_1804;
  float local_1800;
  float local_17fc;
  SetMB *local_17f8;
  SetMB *pSStack_17f0;
  undefined8 local_17e8;
  undefined8 uStack_17e0;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  undefined8 local_17c8;
  undefined8 uStack_17c0;
  SetMB *local_17b8;
  SetMB *pSStack_17b0;
  SetMB *local_17a8;
  SetMB *pSStack_17a0;
  SetMB *local_1798;
  SetMB *local_1790;
  SetMB *local_1788;
  SetMB *local_1780;
  undefined8 local_1778;
  undefined8 local_1770;
  SetMB *local_1768;
  SetMB *pSStack_1760;
  undefined8 local_1758;
  undefined8 uStack_1750;
  SetMB *local_1748;
  SetMB *pSStack_1740;
  SetMB *local_1738;
  SetMB *pSStack_1730;
  SetMB *local_1728;
  SetMB *pSStack_1720;
  SetMB *local_1718;
  SetMB *pSStack_1710;
  ulong local_1708;
  SetMB *local_1700;
  SetMB *local_16f8;
  SetMB *local_16f0;
  SetMB *local_16e8;
  undefined8 local_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  SetMB *local_16c8;
  SetMB *pSStack_16c0;
  SetMB *local_16b8;
  SetMB *pSStack_16b0;
  SetMB *local_16a8;
  SetMB *pSStack_16a0;
  SetMB *local_1698;
  SetMB *pSStack_1690;
  SetMB *local_1688;
  SetMB *pSStack_1680;
  ulong local_1678;
  SetMB *local_1670;
  SetMB *local_1668;
  SetMB *local_1660;
  SetMB *local_1658;
  undefined8 local_1650;
  SetMB *local_1648;
  SetMB *local_1638;
  SetMB *pSStack_1630;
  undefined4 local_1628;
  undefined4 uStack_1624;
  undefined4 uStack_1620;
  undefined4 uStack_161c;
  undefined4 local_1618;
  undefined4 uStack_1614;
  undefined4 uStack_1610;
  undefined4 uStack_160c;
  float local_1608;
  float fStack_1604;
  float fStack_1600;
  float fStack_15fc;
  SetMB *local_15f8;
  SetMB *pSStack_15f0;
  SetMB *local_15e8;
  SetMB *pSStack_15e0;
  SetMB *local_15d8;
  SetMB *local_15d0;
  SetMB *local_15c8;
  SetMB *local_15c0;
  SetMB *local_15b8;
  undefined8 local_15b0;
  SetMB *local_15a8;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  SetMB *local_1538;
  SetMB *pSStack_1530;
  SetMB *local_1528;
  SetMB *pSStack_1520;
  SetMB *local_1518;
  undefined8 local_1510;
  undefined8 local_1508;
  undefined8 local_1500;
  SetMB *local_14f8;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  undefined1 local_14d8 [8];
  undefined8 uStack_14d0;
  undefined4 local_14c8;
  undefined4 uStack_14c4;
  undefined4 uStack_14c0;
  undefined4 uStack_14bc;
  float local_14b8;
  float fStack_14b4;
  float fStack_14b0;
  float fStack_14ac;
  undefined4 local_14a8;
  undefined4 uStack_14a4;
  undefined4 uStack_14a0;
  undefined4 uStack_149c;
  undefined1 local_1498 [8];
  undefined8 uStack_1490;
  SetMB *local_1488;
  SetMB *pSStack_1480;
  SetMB *local_1478;
  SetMB *pSStack_1470;
  SetMB *local_1468;
  SetMB *local_1460;
  undefined8 local_1458;
  undefined8 local_1450;
  SetMB *local_1448;
  float local_1438 [4];
  undefined8 local_1428;
  undefined8 uStack_1420;
  float local_1418;
  byte local_1414;
  float local_1410;
  int local_140c;
  float local_13d8;
  float fStack_13d4;
  float fStack_13d0;
  float fStack_13cc;
  undefined1 local_13c8 [1344];
  undefined1 auStack_e88 [176];
  long local_dd8 [2];
  float local_dc8 [2];
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  SetMB *local_d88 [4];
  ulong local_d68;
  SetMB *apSStack_d60 [3];
  undefined8 local_d48;
  float local_d40 [2];
  SetMB *local_d38 [332];
  SetMB **local_2d8 [16];
  ulong local_258;
  SetMB *local_250;
  long local_248;
  SetMB *local_240;
  undefined8 local_238;
  long local_50;
  long local_40;
  
  lVar34 = lRam000000000011e3e7;
  auVar19 = stack0xffffffffffffe52c;
  pSStack_1af0 = local_1af8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 == (FastAllocator *)0x0) {
    param_7 = (FastAllocator *)param_2[0xc];
    param_8 = *(MutexSys **)(in_FS_OFFSET + lRam000000000011e3e7);
    if (param_8 == (MutexSys *)0x0) {
      param_8 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(param_8);
      *(undefined8 *)(param_8 + 8) = 0;
      *(MutexSys **)(param_8 + 0x40) = param_8;
      *(undefined8 *)(param_8 + 0x48) = 0;
      *(undefined8 *)(param_8 + 0x50) = 0;
      *(undefined8 *)(param_8 + 0x58) = 0;
      *(undefined8 *)(param_8 + 0x60) = 0;
      *(undefined8 *)(param_8 + 0x68) = 0;
      *(undefined8 *)(param_8 + 0x70) = 0;
      *(MutexSys **)(param_8 + 0x80) = param_8;
      *(undefined8 *)(param_8 + 0x88) = 0;
      *(undefined8 *)(param_8 + 0x90) = 0;
      *(undefined8 *)(param_8 + 0x98) = 0;
      *(undefined8 *)(param_8 + 0xa0) = 0;
      *(undefined8 *)(param_8 + 0xa8) = 0;
      *(undefined8 *)(param_8 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar34) = param_8;
      embree::MutexSys::lock();
      local_14e8 = (SetMB *)param_8;
      if (__MutexSys == _createPrimRefArrayMSMBlur) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,&local_14e8);
        pMVar31 = (MutexSys *)local_14e8;
        if (local_14e8 != (SetMB *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_14e8);
          embree::alignedFree(pMVar31);
        }
      }
      else {
        *__MutexSys = param_8;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    param_8 = param_8 + 0x40;
  }
  if ((param_4 != '\0') && ((ulong)(param_3[0xf] - param_3[0xe]) <= param_2[7])) {
    embree::Scene::progressMonitor((double)(ulong)(param_3[0xf] - param_3[0xe]));
  }
  pSVar6 = (SetMB *)(param_3 + 2);
  find((SetMB *)&local_1418);
  pSVar52 = (SetMB *)param_3[0xf];
  uVar33 = param_3[0xe];
  fVar63 = *(float *)(param_3 + 2);
  fVar59 = *(float *)((long)param_3 + 0x14);
  fVar100 = *(float *)(param_3 + 3);
  uVar82 = *(undefined4 *)((long)param_3 + 0x1c);
  fVar93 = *(float *)(param_3 + 4);
  fVar70 = *(float *)((long)param_3 + 0x24);
  fVar72 = *(float *)(param_3 + 5);
  uVar81 = *(undefined4 *)((long)param_3 + 0x2c);
  fVar64 = *(float *)((long)param_3 + 0x9c);
  fVar73 = *(float *)(param_3 + 6);
  fVar78 = *(float *)((long)param_3 + 0x34);
  fVar79 = *(float *)(param_3 + 7);
  uVar80 = *(undefined4 *)((long)param_3 + 0x3c);
  fVar65 = *(float *)(param_3 + 8);
  fVar69 = *(float *)((long)param_3 + 0x44);
  fVar71 = *(float *)(param_3 + 9);
  uVar74 = *(undefined4 *)((long)param_3 + 0x4c);
  fVar58 = *(float *)(param_3 + 0x13);
  lVar34 = param_3[0x10];
  if (((param_2[3] < (long)pSVar52 - uVar33) && (lVar50 = *param_3, lVar50 + 8U < param_2[1])) &&
     ((param_2[4] < (long)pSVar52 - uVar33 ||
      (fVar85 = (((fVar70 - fVar59) + (fVar72 - fVar100)) * (fVar93 - fVar63) +
                 (fVar70 - fVar59) * (fVar72 - fVar100) +
                (fVar69 - fVar78) * (fVar71 - fVar79) +
                (fVar65 - fVar73) * ((fVar69 - fVar78) + (fVar71 - fVar79))) * _LC12 *
                (fVar64 - fVar58),
      *(float *)(param_2 + 5) * fVar85 + *(float *)((long)param_2 + 0x2c) * local_1418 <
      (float)((ulong)(lVar34 + -1 + (1L << ((byte)param_2[2] & 0x3f))) >> ((byte)param_2[2] & 0x3f))
      * fVar85 * *(float *)((long)param_2 + 0x2c))))) {
    if (local_140c != 0) {
      if (local_140c == 2) {
        pSVar52 = (SetMB *)(param_2 + 9);
        local_1b08 = (SetMB *)param_3[0x14];
        local_18d8 = (SetMB *)CONCAT44(local_1410,fVar58);
        local_18b8 = (SetMB *)CONCAT44(fVar64,local_1410);
        pSVar41 = (SetMB *)operator_new(0x28);
        puVar46 = (undefined8 *)param_2[9];
        pSVar48 = (SetMB *)param_3[0xf];
        pSVar43 = (SetMB *)param_3[0xe];
        *(undefined8 **)pSVar41 = puVar46;
        pSVar41[8] = (SetMB)0x0;
        *(undefined8 *)(pSVar41 + 0x10) = 0;
        *(undefined8 *)(pSVar41 + 0x18) = 0;
        *(undefined8 *)(pSVar41 + 0x20) = 0;
        uVar33 = (long)pSVar48 - (long)pSVar43;
        if (uVar33 != 0) {
          uVar51 = uVar33 * 0x50;
          (**(code **)*puVar46)(puVar46,uVar51,0);
          if (uVar51 < 0x1c00000) {
            uVar42 = embree::alignedMalloc(uVar51,0x10);
          }
          else {
            uVar42 = embree::os_malloc(uVar51,(bool *)(pSVar41 + 8));
          }
          pSVar48 = (SetMB *)param_3[0xf];
          pSVar43 = (SetMB *)param_3[0xe];
          *(undefined8 *)(pSVar41 + 0x20) = uVar42;
          *(ulong *)(pSVar41 + 0x10) = uVar33;
          *(ulong *)(pSVar41 + 0x18) = uVar33;
          uVar33 = (long)pSVar48 - (long)pSVar43;
        }
        uVar82 = _LC10;
        fVar64 = _LC8;
        local_1488 = (SetMB *)0x0;
        pSStack_1480 = (SetMB *)0x0;
        local_1478 = (SetMB *)0x0;
        pSStack_1470 = (SetMB *)0x0;
        uStack_17e0 = (SetMB *)&local_18e8;
        local_1460 = (SetMB *)0x3f800000;
        local_1468 = (SetMB *)0x3f80000000000000;
        uStack_1a9c = _LC10;
        local_14e8 = (SetMB *)CONCAT44(_LC10,_LC10);
        uStack_14e0 = (SetMB *)CONCAT44(_LC10,_LC10);
        fStack_1aac = _LC8;
        local_14d8._4_4_ = _LC8;
        local_14d8._0_4_ = _LC8;
        uStack_14d0._0_4_ = _LC8;
        uStack_14d0._4_4_ = _LC8;
        local_14c8 = _LC10;
        uStack_14c4 = _LC10;
        uStack_14c0 = _LC10;
        uStack_14bc = _LC10;
        local_14b8 = _LC8;
        fStack_14b4 = _LC8;
        fStack_14b0 = _LC8;
        fStack_14ac = _LC8;
        local_14a8 = _LC10;
        uStack_14a4 = _LC10;
        uStack_14a0 = _LC10;
        uStack_149c = _LC10;
        local_1498._4_4_ = _LC8;
        local_1498._0_4_ = _LC8;
        uStack_1490._0_4_ = _LC8;
        uStack_1490._4_4_ = _LC8;
        local_18e8 = pSVar41;
        local_17f8 = local_1b08;
        pSStack_17f0 = (SetMB *)&local_18d8;
        local_17e8 = pSVar52;
        local_17d8 = pSVar6;
        if (uVar33 < 0xc00) {
          local_1598 = pSVar43;
          uStack_1590 = pSVar48;
          HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
          ::
          split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
          ::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                    ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1768,
                     (range *)&local_17f8);
        }
        else {
          parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                    ((ulong)&local_1768,uVar33 + 0x7f >> 7,(ulong)pSVar43,(ulong)pSVar48,
                     (PrimInfoMBT_conflict *)&local_14e8,
                     (_lambda_embree__range<unsigned_long>_const___1_ *)&local_17f8,
                     PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
        }
        pSVar48 = (SetMB *)param_3[0xf];
        pSVar43 = (SetMB *)param_3[0xe];
        uVar33 = (long)pSVar48 - (long)pSVar43;
        if ((long)local_1700 - local_1708 != uVar33) {
          local_14e8 = (SetMB *)&local_18d8;
          local_1700 = (SetMB *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_>
                                          (*(PrimRefMB **)(local_18e8 + 0x20),0,uVar33,0x400,
                                           (_lambda_embree__PrimRefMB_const___1_ *)&local_14e8);
          pSVar48 = (SetMB *)param_3[0xf];
          pSVar43 = (SetMB *)param_3[0xe];
          uVar33 = (long)pSVar48 - (long)pSVar43;
        }
        pSVar38 = local_1700;
        uVar51 = local_1708;
        pSVar39 = local_18e8;
        local_1ad8 = (undefined1  [8])param_3;
        local_1678 = local_1708;
        fVar58 = (float)local_18d8;
        if ((float)local_18d8 <= (float)local_16e0) {
          fVar58 = (float)local_16e0;
        }
        local_1a88 = local_1748;
        pSStack_1a80 = pSStack_1740;
        local_1a98 = local_16f8;
        local_16b8 = local_1748;
        pSStack_16b0 = pSStack_1740;
        local_1ad8._0_4_ = fVar58;
        local_1a90 = local_16f0;
        local_1a68 = local_1758;
        uStack_1a60 = uStack_1750;
        fVar85 = local_16e0._4_4_;
        if (local_18d8._4_4_ <= local_16e0._4_4_) {
          fVar85 = local_18d8._4_4_;
        }
        local_1a78 = local_1738;
        uStack_1a70 = pSStack_1730;
        local_1ae8 = local_1728;
        pSStack_1ae0 = pSStack_1720;
        local_1a58 = local_1718;
        uStack_1a50 = pSStack_1710;
        local_1a48 = SUB84(local_16e8,0);
        local_1a18 = (undefined4)((ulong)local_16e8 >> 0x20);
        local_16d8 = local_1768;
        uStack_16d0 = pSStack_1760;
        local_16c8 = local_1758;
        pSStack_16c0 = uStack_1750;
        local_16a8 = local_1738;
        pSStack_16a0 = pSStack_1730;
        local_1698 = local_1728;
        pSStack_1690 = pSStack_1720;
        local_1688 = local_1718;
        pSStack_1680 = pSStack_1710;
        local_1668 = local_16f8;
        local_14e8 = (SetMB *)CONCAT44(uVar82,uVar82);
        uStack_14e0 = (SetMB *)CONCAT44(uVar82,uVar82);
        local_1660 = local_16f0;
        local_1648 = local_18e8;
        local_1488 = (SetMB *)0x0;
        pSStack_1480 = (SetMB *)0x0;
        local_1478 = (SetMB *)0x0;
        pSStack_1470 = (SetMB *)0x0;
        local_1468 = (SetMB *)0x3f80000000000000;
        local_1460 = (SetMB *)0x3f800000;
        local_1658 = local_16e8;
        local_1650 = CONCAT44(fVar85,fVar58);
        uStack_14d0 = CONCAT44(fVar64,fVar64);
        local_14d8 = (undefined1  [8])CONCAT44(fVar64,fVar64);
        local_14c8 = uVar82;
        uStack_14c4 = uVar82;
        uStack_14c0 = uVar82;
        uStack_14bc = uVar82;
        local_14b8 = fVar64;
        fStack_14b4 = fVar64;
        fStack_14b0 = fVar64;
        fStack_14ac = fVar64;
        local_14a8 = uVar82;
        uStack_14a4 = uVar82;
        uStack_14a0 = uVar82;
        uStack_149c = uVar82;
        uStack_1490 = (SetMB *)CONCAT44(fVar64,fVar64);
        local_1498 = (undefined1  [8])CONCAT44(fVar64,fVar64);
        local_1a38 = SUB84(local_1768,0);
        fVar99 = local_1a38;
        uStack_1a34 = (undefined4)((ulong)local_1768 >> 0x20);
        uStack_1a30 = SUB84(pSStack_1760,0);
        uStack_1a2c = (undefined4)((ulong)pSStack_1760 >> 0x20);
        local_1888 = local_1b08;
        pSStack_1880 = (SetMB *)&local_18b8;
        local_1878 = pSVar52;
        local_1670 = local_1700;
        if (uVar33 < 0xc00) {
          local_1638 = pSVar43;
          pSStack_1630 = pSVar48;
          HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
          ::
          split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
          ::{lambda(embree::range<unsigned_long>const&)#3}::operator()
                    ((_lambda_embree__range<unsigned_long>const___3_ *)&local_1598,
                     (range *)&local_1888);
        }
        else {
          parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_3_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                    ((embree *)&local_1598,uVar33 + 0x7f >> 7,(ulong)pSVar43,(ulong)pSVar48,0x80,
                     (PrimInfoMBT_conflict *)&local_14e8,
                     (_lambda_embree__range<unsigned_long>_const___3_ *)&local_1888,
                     PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
        }
        pSVar52 = (SetMB *)param_3[0xe];
        lVar34 = (long)pSStack_1530 - (long)local_1538;
        local_15d0 = pSVar52 + lVar34;
        local_1538 = pSVar52;
        pSStack_1530 = local_15d0;
        if (lVar34 != param_3[0xf] - (long)pSVar52) {
          local_14e8 = (SetMB *)&local_18b8;
          local_15d0 = (SetMB *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_4_>
                                          (*(PrimRefMB **)(local_1b08 + 0x20),(ulong)pSVar52,
                                           param_3[0xf],0x400,
                                           (_lambda_embree__PrimRefMB_const___4_ *)&local_14e8);
        }
        local_1af8 = local_1538;
        local_15d8 = local_1538;
        fVar83 = local_1510._4_4_;
        if (local_18b8._4_4_ <= local_1510._4_4_) {
          fVar83 = local_18b8._4_4_;
        }
        fVar15 = (float)local_18b8;
        if ((float)local_18b8 <= (float)local_1510) {
          fVar15 = (float)local_1510;
        }
        local_1638 = local_1598;
        pSStack_1630 = uStack_1590;
        local_1628 = (undefined4)local_1588;
        uStack_1624 = local_1588._4_4_;
        uStack_1620 = (undefined4)uStack_1580;
        uStack_161c = uStack_1580._4_4_;
        local_1618 = (undefined4)local_1578;
        uStack_1614 = local_1578._4_4_;
        uStack_1610 = (undefined4)uStack_1570;
        uStack_160c = uStack_1570._4_4_;
        local_1a28 = SUB84(local_1518,0);
        local_1608 = (float)local_1568;
        fStack_1604 = local_1568._4_4_;
        fStack_1600 = (float)uStack_1560;
        fStack_15fc = uStack_1560._4_4_;
        local_15c8 = local_1528;
        local_1a38 = (float)((ulong)local_1518 >> 0x20);
        local_15f8 = local_1558;
        pSStack_15f0 = uStack_1550;
        local_15c0 = pSStack_1520;
        local_15e8 = local_1548;
        pSStack_15e0 = uStack_1540;
        local_15b8 = local_1518;
        local_15b0 = CONCAT44(fVar83,fVar15);
        local_1951 = pSVar41 != (SetMB *)0x0;
        fVar63 = *(float *)(param_3 + 2);
        fVar59 = *(float *)((long)param_3 + 0x14);
        fVar100 = *(float *)(param_3 + 3);
        uVar82 = *(undefined4 *)((long)param_3 + 0x1c);
        fVar93 = *(float *)(param_3 + 4);
        fVar70 = *(float *)((long)param_3 + 0x24);
        fVar72 = *(float *)(param_3 + 5);
        uVar81 = *(undefined4 *)((long)param_3 + 0x2c);
        pSVar48 = (SetMB *)param_3[0x14];
        lVar50 = *param_3;
        fVar73 = *(float *)(param_3 + 6);
        fVar78 = *(float *)((long)param_3 + 0x34);
        fVar79 = *(float *)(param_3 + 7);
        uVar80 = *(undefined4 *)((long)param_3 + 0x3c);
        fVar65 = *(float *)(param_3 + 8);
        fVar69 = *(float *)((long)param_3 + 0x44);
        fVar71 = *(float *)(param_3 + 9);
        uVar74 = *(undefined4 *)((long)param_3 + 0x4c);
        lVar34 = param_3[0x10];
        fVar58 = *(float *)(param_3 + 0x13);
        local_d40[1] = *(float *)((long)param_3 + 0x9c);
        goto LAB_0011ded4;
      }
      local_1ac8 = (SetMB *)param_3;
      unique0x10009e81 = auVar19;
      if (local_140c == 1) {
        SetMB::deterministic_order(pSVar6);
        splitFallback(pSVar6,(SetMB *)&local_16d8,(SetMB *)&local_1638);
        goto LAB_00121d30;
      }
      if (local_140c == 3) goto LAB_00121d03;
      goto LAB_00121b77;
    }
    local_1518 = (SetMB *)0x3f80000000000000;
    local_1468 = (SetMB *)0x3f80000000000000;
    fStack_1aac = _LC8;
    local_1588 = (SetMB *)CONCAT44(_LC8,_LC8);
    uStack_1580 = (SetMB *)CONCAT44(_LC8,_LC8);
    lVar34 = (long)(1 << (local_1414 & 0x1f));
    local_1568 = (SetMB *)CONCAT44(_LC8,_LC8);
    uStack_1560 = (SetMB *)CONCAT44(_LC8,_LC8);
    local_1548 = (SetMB *)CONCAT44(_LC8,_LC8);
    uStack_1540 = (SetMB *)CONCAT44(_LC8,_LC8);
    local_14d8._4_4_ = _LC8;
    local_14d8._0_4_ = _LC8;
    uStack_14d0._0_4_ = _LC8;
    uStack_14d0._4_4_ = _LC8;
    local_14b8 = _LC8;
    fStack_14b4 = _LC8;
    fStack_14b0 = _LC8;
    fStack_14ac = _LC8;
    local_1498._4_4_ = _LC8;
    local_1498._0_4_ = _LC8;
    uStack_1490._0_4_ = _LC8;
    uStack_1490._4_4_ = _LC8;
    local_1538 = (SetMB *)0x0;
    local_dd8[0] = (&mm_lookupmask_ps)[lVar34 * 2];
    local_dd8[1] = *(long *)(embree::os_free + lVar34 * 0x10);
    local_1758 = (SetMB *)local_dd8;
    pSStack_1530 = (SetMB *)0x0;
    local_13d8 = local_1410;
    fStack_13d4 = local_1410;
    fStack_13d0 = local_1410;
    fStack_13cc = local_1410;
    local_1528 = (SetMB *)0x0;
    pSStack_1520 = (SetMB *)0x0;
    local_1510 = (SetMB *)0x3f800000;
    local_1488 = (SetMB *)0x0;
    pSStack_1480 = (SetMB *)0x0;
    local_1478 = (SetMB *)0x0;
    pSStack_1470 = (SetMB *)0x0;
    local_1460 = (SetMB *)0x3f800000;
    uStack_1a9c = _LC10;
    local_1598 = (SetMB *)CONCAT44(_LC10,_LC10);
    uStack_1590 = (SetMB *)CONCAT44(_LC10,_LC10);
    local_1578 = (SetMB *)CONCAT44(_LC10,_LC10);
    uStack_1570 = (SetMB *)CONCAT44(_LC10,_LC10);
    local_1558 = (SetMB *)CONCAT44(_LC10,_LC10);
    uStack_1550 = (SetMB *)CONCAT44(_LC10,_LC10);
    local_14e8 = (SetMB *)CONCAT44(_LC10,_LC10);
    uStack_14e0 = (SetMB *)CONCAT44(_LC10,_LC10);
    local_14c8 = _LC10;
    uStack_14c4 = _LC10;
    uStack_14c0 = _LC10;
    uStack_14bc = _LC10;
    local_14a8 = _LC10;
    uStack_14a4 = _LC10;
    uStack_14a0 = _LC10;
    uStack_149c = _LC10;
    pSStack_1760 = (SetMB *)&local_13d8;
    local_1768 = (SetMB *)&local_1418;
    local_1670 = (SetMB *)parallel_partitioning<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>
                                    (*(PrimRefMB **)(param_3[0x14] + 0x20),uVar33,(ulong)pSVar52,
                                     (EmptyTy *)&local_1638,(PrimInfoMBT_conflict *)&local_1598,
                                     (PrimInfoMBT_conflict *)&local_14e8,
                                     (_lambda_embree__PrimRefMB_const___1_ *)&local_1768,
                                     (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimRefMB_const___2_
                                      *)&local_1888,
                                     (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>_const___3_
                                      *)&local_17f8,0x80,0xc00);
    pSVar48 = (SetMB *)param_3[0x14];
    local_1668 = local_1528;
    local_16c8 = local_1588;
    pSStack_16c0 = uStack_1580;
    fVar58 = *(float *)(param_3 + 0x13);
    fVar64 = *(float *)((long)param_3 + 0x9c);
    local_1660 = pSStack_1520;
    local_1658 = local_1518;
    local_16b8 = local_1578;
    pSStack_16b0 = uStack_1570;
    local_16a8 = local_1568;
    pSStack_16a0 = uStack_1560;
    local_1ae8 = local_1558;
    pSStack_1ae0 = uStack_1550;
    local_1688 = local_1548;
    pSStack_1680 = uStack_1540;
    local_16d8 = local_1598;
    uStack_16d0 = uStack_1590;
    local_1650._4_4_ = (float)((ulong)local_1510 >> 0x20);
    local_1650._0_4_ = SUB84(local_1510,0);
    local_1ad8._0_4_ = fVar58;
    if (fVar58 <= (float)local_1650) {
      local_1ad8._0_4_ = (float)local_1650;
    }
    if (fVar64 <= local_1650._4_4_) {
      local_1650._4_4_ = fVar64;
    }
    local_15b8 = local_1468;
    local_15b0._0_4_ = SUB84(local_1460,0);
    fVar15 = fVar58;
    if (fVar58 <= (float)local_15b0) {
      fVar15 = (float)local_15b0;
    }
    _local_1ad8 = CONCAT124(auVar19,local_1ad8._0_4_);
    local_15f8 = (SetMB *)CONCAT44(uStack_14a4,local_14a8);
    pSStack_15f0 = (SetMB *)CONCAT44(uStack_149c,uStack_14a0);
    local_15b0._4_4_ = (float)((ulong)local_1460 >> 0x20);
    local_15c8 = local_1478;
    if (fVar64 <= local_15b0._4_4_) {
      local_15b0._4_4_ = fVar64;
    }
    local_15c0 = pSStack_1470;
    local_1650 = CONCAT44(local_1650._4_4_,local_1ad8._0_4_);
    local_1638 = local_14e8;
    pSStack_1630 = uStack_14e0;
    local_1628 = local_14d8._0_4_;
    uStack_1624 = local_14d8._4_4_;
    uStack_1620 = (undefined4)uStack_14d0;
    uStack_161c = uStack_14d0._4_4_;
    local_1618 = local_14c8;
    uStack_1614 = uStack_14c4;
    uStack_1610 = uStack_14c0;
    uStack_160c = uStack_14bc;
    local_1608 = local_14b8;
    fStack_1604 = fStack_14b4;
    fStack_1600 = fStack_14b0;
    fStack_15fc = fStack_14ac;
    local_15e8 = (SetMB *)local_1498;
    pSStack_15e0 = uStack_1490;
    lVar50 = *param_3;
    fVar63 = *(float *)(param_3 + 2);
    fVar59 = *(float *)((long)param_3 + 0x14);
    fVar100 = *(float *)(param_3 + 3);
    uVar82 = *(undefined4 *)((long)param_3 + 0x1c);
    fVar93 = *(float *)(param_3 + 4);
    fVar70 = *(float *)((long)param_3 + 0x24);
    fVar72 = *(float *)(param_3 + 5);
    uVar81 = *(undefined4 *)((long)param_3 + 0x2c);
    fVar73 = *(float *)(param_3 + 6);
    fVar78 = *(float *)((long)param_3 + 0x34);
    fVar79 = *(float *)(param_3 + 7);
    uVar80 = *(undefined4 *)((long)param_3 + 0x3c);
    local_1af8 = local_1670;
    fVar65 = *(float *)(param_3 + 8);
    fVar69 = *(float *)((long)param_3 + 0x44);
    fVar71 = *(float *)(param_3 + 9);
    uVar74 = *(undefined4 *)((long)param_3 + 0x4c);
    lVar34 = param_3[0x10];
    local_15b0 = CONCAT44(local_15b0._4_4_,fVar15);
    fVar99 = (float)local_1598;
    uStack_1a34 = local_1598._4_4_;
    uStack_1a30 = (undefined4)uStack_1590;
    uStack_1a2c = uStack_1590._4_4_;
    fVar85 = local_1650._4_4_;
    local_1678 = uVar33;
    local_1648 = pSVar48;
    local_15d8 = local_1670;
    local_15d0 = pSVar52;
    local_15a8 = pSVar48;
    fVar83 = local_15b0._4_4_;
LAB_0011de7c:
    local_1951 = false;
    local_1a38 = (float)((ulong)local_15b8 >> 0x20);
    local_1a28 = SUB84(local_15b8,0);
    local_1a18 = (undefined4)((ulong)local_1658 >> 0x20);
    local_1a48 = SUB84(local_1658,0);
    pSVar38 = local_1670;
    pSVar39 = local_1648;
    uVar51 = local_1678;
    local_1a98 = local_1668;
    local_1a90 = local_1660;
    local_1a88 = local_16b8;
    pSStack_1a80 = pSStack_16b0;
    local_1a78 = local_16a8;
    uStack_1a70 = pSStack_16a0;
    local_1a68 = local_16c8;
    uStack_1a60 = pSStack_16c0;
    local_1a58 = local_1688;
    uStack_1a50 = pSStack_1680;
    local_1698 = local_1ae8;
    pSStack_1690 = pSStack_1ae0;
    local_d40[1] = fVar64;
    local_1b08 = local_15a8;
LAB_0011ded4:
    pSVar92 = local_15c0;
    pSVar90 = local_15c8;
    pSVar98 = local_15d0;
    pSVar94 = pSStack_15e0;
    pSVar55 = local_15e8;
    pSVar3 = pSStack_15f0;
    pSVar41 = local_15f8;
    fVar30 = fStack_15fc;
    fVar29 = fStack_1600;
    fVar28 = fStack_1604;
    fVar64 = local_1608;
    uVar27 = uStack_160c;
    uVar26 = uStack_1610;
    uVar25 = uStack_1614;
    uVar24 = local_1618;
    uVar23 = uStack_161c;
    uVar22 = uStack_1620;
    uVar21 = uStack_1624;
    uVar20 = local_1628;
    pSVar43 = pSStack_1630;
    pSVar52 = local_1638;
    local_1ac8 = (SetMB *)local_dd8;
    apSStack_d60[2] = (SetMB *)param_3[0x11];
    local_d88[0] = (SetMB *)param_3[10];
    local_d88[1] = (SetMB *)param_3[0xb];
    local_db8 = (SetMB *)CONCAT44(fVar70,fVar93);
    uStack_db0 = (SetMB *)CONCAT44(uVar81,fVar72);
    local_d68 = param_3[0xe];
    apSStack_d60[0] = (SetMB *)param_3[0xf];
    local_d48 = param_3[0x12];
    local_d88[2] = (SetMB *)param_3[0xc];
    local_d88[3] = (SetMB *)param_3[0xd];
    local_258 = 1;
    local_50 = 1;
    local_250 = pSVar48;
    local_248 = 2;
    local_2d8[0] = &local_250;
    local_da8 = (SetMB *)CONCAT44(fVar78,fVar73);
    uStack_da0 = (SetMB *)CONCAT44(uVar80,fVar79);
    local_d98 = (SetMB *)CONCAT44(fVar69,fVar65);
    uStack_d90 = (SetMB *)CONCAT44(uVar74,fVar71);
    if (pSVar48 == pSVar39) {
      local_248 = 3;
    }
    else {
      local_50 = 2;
      local_240 = pSVar39;
      local_238 = 1;
      local_2d8[0] = &local_240;
    }
    lVar49 = local_50;
    if (pSVar48 == local_1b08) {
      local_2d8[1] = &local_250;
    }
    else {
      local_50 = local_50 + 1;
      (&local_250)[lVar49 * 2] = local_1b08;
      (&local_248)[lVar49 * 2] = 1;
      local_2d8[1] = &local_250 + lVar49 * 2;
      local_248 = local_248 + -1;
    }
    local_15a8 = local_1b08;
    if ((local_248 == 0) && (pSVar48 != (SetMB *)0x0)) {
      lVar49 = *(long *)(pSVar48 + 0x18);
      pvVar2 = *(void **)(pSVar48 + 0x20);
      local_dd8[0] = lVar50;
      local_dc8[0] = fVar63;
      local_dc8[1] = fVar59;
      uStack_dc0._0_4_ = fVar100;
      uStack_dc0._4_4_ = uVar82;
      apSStack_d60[1] = (SetMB *)lVar34;
      local_d40[0] = fVar58;
      local_d38[0] = pSVar48;
      if (pvVar2 != (void *)0x0) {
        if ((ulong)(lVar49 * 0x50) < 0x1c00000) {
          embree::alignedFree(pvVar2);
        }
        else {
          embree::os_free(pvVar2,lVar49 * 0x50,(bool)pSVar48[8]);
        }
      }
      if (lVar49 != 0) {
        (**(code **)**(undefined8 **)pSVar48)(*(undefined8 **)pSVar48,lVar49 * -0x50,1);
      }
      operator_delete(pSVar48,0x28);
      lVar34 = local_258 * 4;
      lVar49 = local_258 * 0xb0;
    }
    else {
      lVar49 = 0xb0;
      lVar34 = 4;
    }
    local_dd8[0] = lVar50 + 1;
    local_d68 = uVar51;
    local_db8 = local_1a68;
    uStack_db0 = uStack_1a60;
    local_da8 = local_1a88;
    uStack_da0 = pSStack_1a80;
    apSStack_d60[1] = local_1a98;
    local_d98 = local_1a78;
    uStack_d90 = uStack_1a70;
    local_d88[0] = local_1ae8;
    local_d88[1] = pSStack_1ae0;
    apSStack_d60[2] = local_1a90;
    local_d88[2] = local_1a58;
    local_d88[3] = uStack_1a50;
    local_d48 = CONCAT44(local_1a18,local_1a48);
    local_d40[0] = (float)local_1ad8._0_4_;
    apSStack_d60[0] = pSVar38;
    local_d38[0] = pSVar39;
    local_dc8[0] = fVar99;
    local_dc8[1] = (float)uStack_1a34;
    uStack_dc0._0_4_ = (float)uStack_1a30;
    uStack_dc0._4_4_ = uStack_1a2c;
    local_d40[1] = fVar85;
    local_dd8[(lVar34 * 2 + local_258 * 3) * 2] = lVar50 + 1;
    *(SetMB **)((long)local_dc8 + lVar49) = pSVar52;
    *(SetMB **)((long)&uStack_dc0 + lVar49) = pSVar43;
    *(undefined4 *)((long)&local_db8 + lVar49) = uVar20;
    *(undefined4 *)((long)&local_db8 + lVar49 + 4) = uVar21;
    *(undefined4 *)((long)&uStack_db0 + lVar49) = uVar22;
    *(undefined4 *)((long)&uStack_db0 + lVar49 + 4) = uVar23;
    *(undefined4 *)((long)&local_da8 + lVar49) = uVar24;
    *(undefined4 *)((long)&local_da8 + lVar49 + 4) = uVar25;
    *(undefined4 *)((long)&uStack_da0 + lVar49) = uVar26;
    *(undefined4 *)((long)&uStack_da0 + lVar49 + 4) = uVar27;
    *(float *)((long)&local_d98 + lVar49) = fVar64;
    *(float *)((long)&local_d98 + lVar49 + 4) = fVar28;
    *(float *)((long)&uStack_d90 + lVar49) = fVar29;
    *(float *)((long)&uStack_d90 + lVar49 + 4) = fVar30;
    *(SetMB **)((long)local_d88 + lVar49) = pSVar41;
    *(SetMB **)((long)local_d88 + lVar49 + 8) = pSVar3;
    *(SetMB **)((long)apSStack_d60 + lVar49) = pSVar98;
    *(SetMB **)((long)&local_d68 + lVar49) = local_1af8;
    *(float *)((long)&local_d48 + lVar49 + 4) = local_1a38;
    *(SetMB **)((long)apSStack_d60 + lVar49 + 8) = pSVar90;
    *(SetMB **)((long)apSStack_d60 + lVar49 + 0x10) = pSVar92;
    *(SetMB **)((long)local_d38 + lVar49) = local_1b08;
    *(SetMB **)((long)local_d88 + lVar49 + 0x10) = pSVar55;
    *(SetMB **)((long)local_d88 + lVar49 + 0x18) = pSVar94;
    *(undefined4 *)((long)&local_d48 + lVar49) = local_1a28;
    *(float *)((long)local_d40 + lVar49) = fVar15;
    *(float *)((long)local_d38 + lVar49 + -4) = fVar83;
    local_258 = local_258 + 1;
    if (local_258 < *param_2) {
      do {
        if (local_258 == 0) {
          pSVar52 = *(SetMB **)param_8;
          goto joined_r0x0011fb5c;
        }
        uVar51 = 0;
        uVar33 = 0xffffffffffffffff;
        pfVar35 = local_dc8;
        fVar64 = _LC8;
        do {
          if ((param_2[3] < (ulong)(*(long *)(pfVar35 + 0x1a) - *(long *)(pfVar35 + 0x18))) &&
             (fVar58 = (((pfVar35[5] - pfVar35[1]) + (pfVar35[6] - pfVar35[2])) *
                        (pfVar35[4] - *pfVar35) +
                        (pfVar35[5] - pfVar35[1]) * (pfVar35[6] - pfVar35[2]) +
                       (pfVar35[0xc] - pfVar35[8]) *
                       ((pfVar35[0xd] - pfVar35[9]) + (pfVar35[0xe] - pfVar35[10])) +
                       (pfVar35[0xd] - pfVar35[9]) * (pfVar35[0xe] - pfVar35[10])) * _LC12,
             fVar64 < fVar58)) {
            uVar33 = uVar51;
            fVar64 = fVar58;
          }
          uVar51 = uVar51 + 1;
          pfVar35 = pfVar35 + 0x2c;
        } while (uVar51 != local_258);
        if (uVar33 == 0xffffffffffffffff) goto LAB_0011f2f6;
        pSVar52 = (SetMB *)(*param_3 + 1);
        lVar34 = uVar33 * 0xb0;
        pSVar48 = (SetMB *)(local_dc8 + uVar33 * 0x2c);
        local_1598 = pSVar52;
        local_14e8 = pSVar52;
        find((SetMB *)&local_13d8);
        pSVar43 = pSVar52;
        if (fStack_13cc == 0.0) {
          local_17f8 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          pSStack_17f0 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          local_1778 = (SetMB *)0x3f80000000000000;
          pSVar3 = (SetMB *)(&local_d68)[uVar33 * 0x16];
          local_16e8 = (SetMB *)0x3f80000000000000;
          pSVar55 = apSStack_d60[uVar33 * 0x16];
          local_17e8 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          uStack_17e0 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          lVar50 = (long)(1 << (SUB41(fStack_13d4,0) & 0x1f));
          local_1428 = (&mm_lookupmask_ps)[lVar50 * 2];
          uStack_1420 = *(undefined8 *)(embree::os_free + lVar50 * 0x10);
          pSStack_1880 = (SetMB *)local_1438;
          local_1798 = (SetMB *)0x0;
          local_1790 = (SetMB *)0x0;
          local_1788 = (SetMB *)0x0;
          local_1780 = (SetMB *)0x0;
          local_1770 = 0x3f800000;
          local_1708 = 0;
          local_1700 = (SetMB *)0x0;
          local_16f8 = (SetMB *)0x0;
          local_16f0 = (SetMB *)0x0;
          local_16e0 = 0x3f800000;
          local_1438[0] = fStack_13d0;
          local_1438[1] = fStack_13d0;
          local_1438[2] = fStack_13d0;
          local_1438[3] = fStack_13d0;
          local_1878 = (SetMB *)&local_1428;
          local_1888 = (SetMB *)&local_13d8;
          local_17d8 = local_17f8;
          uStack_17d0 = pSStack_17f0;
          local_17c8 = local_17e8;
          uStack_17c0 = uStack_17e0;
          local_17b8 = local_17f8;
          pSStack_17b0 = pSStack_17f0;
          local_17a8 = local_17e8;
          pSStack_17a0 = uStack_17e0;
          local_1768 = local_17f8;
          pSStack_1760 = pSStack_17f0;
          local_1758 = local_17e8;
          uStack_1750 = uStack_17e0;
          local_1748 = local_17f8;
          pSStack_1740 = pSStack_17f0;
          local_1738 = local_17e8;
          pSStack_1730 = uStack_17e0;
          local_1728 = local_17f8;
          pSStack_1720 = pSStack_17f0;
          local_1718 = local_17e8;
          pSStack_1710 = uStack_17e0;
          pSStack_1520 = (SetMB *)parallel_partitioning<embree::PrimRefMB,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimRefMB_const&)_2_,embree::sse2::HeuristicArrayBinningMB<embree::PrimRefMB,32ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)_3_>
                                            (*(PrimRefMB **)(local_d38[uVar33 * 0x16] + 0x20),
                                             (ulong)pSVar3,(ulong)pSVar55,(EmptyTy *)&local_18b8,
                                             (PrimInfoMBT_conflict *)&local_17f8,
                                             (PrimInfoMBT_conflict *)&local_1768,
                                             (_lambda_embree__PrimRefMB_const___1_ *)&local_1888,
                                             (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimRefMB_const___2_
                                              *)&local_18e8,
                                             (_lambda_embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>__embree__PrimInfoMBT<embree::LBBox<embree::Vec3fa>_>_const___3_
                                              *)&local_18d8,0x80,0xc00);
          local_14f8 = local_d38[uVar33 * 0x16];
          local_1508 = local_1778;
          fVar58 = *(float *)((long)local_d38 + lVar34 + -4);
          local_1518 = local_1788;
          fVar64 = local_d40[uVar33 * 0x2c];
          local_1510 = local_1780;
          local_1500._4_4_ = (float)((ulong)local_1770 >> 0x20);
          local_1538 = local_17a8;
          pSStack_1530 = pSStack_17a0;
          local_1588 = local_17f8;
          uStack_1580 = pSStack_17f0;
          if (fVar58 <= local_1500._4_4_) {
            local_1500._4_4_ = fVar58;
          }
          local_1578 = local_17e8;
          uStack_1570 = uStack_17e0;
          local_1568 = local_17d8;
          uStack_1560 = uStack_17d0;
          local_1558 = local_17c8;
          uStack_1550 = uStack_17c0;
          local_1548 = local_17b8;
          uStack_1540 = pSStack_17b0;
          local_1500._0_4_ = (float)local_1770;
          fVar63 = fVar64;
          if (fVar64 <= (float)local_1500) {
            fVar63 = (float)local_1500;
          }
          local_1500 = CONCAT44(local_1500._4_4_,fVar63);
          uStack_14d0 = pSStack_1760;
          local_14d8 = (undefined1  [8])local_1768;
          local_1458 = local_16e8;
          local_1b08 = local_1718;
          pSStack_1b00 = pSStack_1710;
          local_1450._4_4_ = (float)((ulong)local_16e0 >> 0x20);
          uStack_1490 = pSStack_1720;
          local_1498 = (undefined1  [8])local_1728;
          local_1468 = local_16f8;
          if (fVar58 <= local_1450._4_4_) {
            local_1450._4_4_ = fVar58;
          }
          local_1460 = local_16f0;
          local_1450._0_4_ = (float)local_16e0;
          if (fVar64 <= (float)local_1450) {
            fVar64 = (float)local_1450;
          }
          local_14c8 = (undefined4)local_1758;
          uStack_14c4 = local_1758._4_4_;
          uStack_14c0 = (undefined4)uStack_1750;
          uStack_14bc = uStack_1750._4_4_;
          local_14b8 = SUB84(local_1748,0);
          fStack_14b4 = (float)((ulong)local_1748 >> 0x20);
          fStack_14b0 = SUB84(pSStack_1740,0);
          fStack_14ac = (float)((ulong)pSStack_1740 >> 0x20);
          local_14a8 = SUB84(local_1738,0);
          uStack_14a4 = (undefined4)((ulong)local_1738 >> 0x20);
          uStack_14a0 = SUB84(pSStack_1730,0);
          uStack_149c = (undefined4)((ulong)pSStack_1730 >> 0x20);
          local_1450 = CONCAT44(local_1450._4_4_,fVar64);
          local_1a58._0_4_ = (undefined4)local_17c8;
          local_1a58._4_4_ = local_17c8._4_4_;
          uStack_1a50._0_4_ = (undefined4)uStack_17c0;
          uStack_1a50._4_4_ = uStack_17c0._4_4_;
          local_1a68._0_4_ = (undefined4)local_17d8;
          local_1a68._4_4_ = local_17d8._4_4_;
          uStack_1a60._0_4_ = (undefined4)uStack_17d0;
          uStack_1a60._4_4_ = uStack_17d0._4_4_;
          local_1a78._0_4_ = (undefined4)local_17e8;
          local_1a78._4_4_ = local_17e8._4_4_;
          uStack_1a70._0_4_ = (undefined4)uStack_17e0;
          uStack_1a70._4_4_ = uStack_17e0._4_4_;
          fVar58 = local_1500._4_4_;
          pSVar48 = local_1748;
          pSVar41 = pSStack_1740;
          pSVar39 = local_1738;
          pSVar38 = pSStack_1730;
          local_1528 = pSVar3;
          local_1478 = pSStack_1520;
          pSStack_1470 = pSVar55;
          local_1448 = local_14f8;
          fVar59 = local_1450._4_4_;
LAB_0011ec2c:
          local_1ad8._0_4_ = (undefined4)local_1458;
          local_1af8._0_4_ = local_1458._4_4_;
          pSVar53 = local_1510;
          pSVar54 = local_1518;
          pSVar55 = local_14f8;
          pSVar94 = local_1588;
          pSVar98 = uStack_1580;
          pSVar90 = local_1548;
          pSVar92 = uStack_1540;
          pSVar87 = local_1538;
          pSVar89 = pSStack_1530;
          uVar82 = (undefined4)local_1508;
          uVar81 = local_1508._4_4_;
        }
        else {
          if (fStack_13cc != 2.8026e-45) {
            if (fStack_13cc == 1.4013e-45) {
              lVar50 = *(long *)(local_d38[uVar33 * 0x16] + 0x20) +
                       (long)apSStack_d60[uVar33 * 0x16] * 0x50;
              lVar49 = *(long *)(local_d38[uVar33 * 0x16] + 0x20) +
                       (&local_d68)[uVar33 * 0x16] * 0x50;
              if (lVar50 != lVar49) {
                lVar56 = (long)apSStack_d60[uVar33 * 0x16] * 0x50 +
                         (&local_d68)[uVar33 * 0x16] * -0x50;
                uVar51 = (lVar56 >> 4) * -0x3333333333333333;
                if (uVar51 == 0) {
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar49,lVar50,0xfffffffffffffffe);
                }
                else {
                  lVar7 = 0x3f;
                  if (uVar51 != 0) {
                    for (; uVar51 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar49,lVar50,(long)(int)lVar7 * 2);
                  if (0x500 < lVar56) {
                    lVar56 = lVar49 + 0x500;
                    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                              (lVar49,lVar56);
                    for (; lVar50 != lVar56; lVar56 = lVar56 + 0x50) {
                      std::
                      __unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                                (lVar56);
                    }
                    goto LAB_00121a28;
                  }
                }
                std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                          (lVar49,lVar50);
              }
LAB_00121a28:
              splitFallback(pSVar48,(SetMB *)&local_1588,(SetMB *)local_14d8);
            }
            else if (fStack_13cc == 4.2039e-45) {
              lVar50 = *(long *)(local_d38[uVar33 * 0x16] + 0x20) +
                       (long)apSStack_d60[uVar33 * 0x16] * 0x50;
              lVar49 = *(long *)(local_d38[uVar33 * 0x16] + 0x20) +
                       (&local_d68)[uVar33 * 0x16] * 0x50;
              if (lVar50 != lVar49) {
                lVar56 = (long)apSStack_d60[uVar33 * 0x16] * 0x50 +
                         (&local_d68)[uVar33 * 0x16] * -0x50;
                uVar51 = (lVar56 >> 4) * -0x3333333333333333;
                if (uVar51 == 0) {
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar49,lVar50,0xfffffffffffffffe);
                }
                else {
                  lVar7 = 0x3f;
                  if (uVar51 != 0) {
                    for (; uVar51 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                            (lVar49,lVar50,(long)(int)lVar7 * 2);
                  if (0x500 < lVar56) {
                    lVar56 = lVar49 + 0x500;
                    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                              (lVar49,lVar56);
                    for (; lVar50 != lVar56; lVar56 = lVar56 + 0x50) {
                      std::
                      __unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                                (lVar56);
                    }
                    goto LAB_0012189b;
                  }
                }
                std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>
                          (lVar49,lVar50);
              }
LAB_0012189b:
              splitByGeometry(pSVar48,(SetMB *)&local_1588,(SetMB *)local_14d8);
              local_1b08 = local_1488;
              pSStack_1b00 = pSStack_1480;
              pSVar48 = (SetMB *)CONCAT44(fStack_14b4,local_14b8);
              pSVar41 = (SetMB *)CONCAT44(fStack_14ac,fStack_14b0);
              pSVar39 = (SetMB *)CONCAT44(uStack_14a4,local_14a8);
              pSVar38 = (SetMB *)CONCAT44(uStack_149c,uStack_14a0);
              pSVar52 = local_14e8;
              pSVar43 = local_1598;
              fVar64 = (float)local_1450;
              local_1a58._0_4_ = (undefined4)local_1558;
              local_1a58._4_4_ = local_1558._4_4_;
              uStack_1a50._0_4_ = (undefined4)uStack_1550;
              uStack_1a50._4_4_ = uStack_1550._4_4_;
              local_1a68._0_4_ = (float)local_1568;
              local_1a68._4_4_ = local_1568._4_4_;
              uStack_1a60._0_4_ = (float)uStack_1560;
              uStack_1a60._4_4_ = uStack_1560._4_4_;
              local_1a78._0_4_ = (undefined4)local_1578;
              local_1a78._4_4_ = local_1578._4_4_;
              uStack_1a70._0_4_ = (undefined4)uStack_1570;
              uStack_1a70._4_4_ = uStack_1570._4_4_;
              fVar63 = (float)local_1500;
              fVar58 = local_1500._4_4_;
              fVar59 = local_1450._4_4_;
              goto LAB_0011ec2c;
            }
            local_1b08 = local_1488;
            pSStack_1b00 = pSStack_1480;
            pSVar48 = (SetMB *)CONCAT44(fStack_14b4,local_14b8);
            pSVar41 = (SetMB *)CONCAT44(fStack_14ac,fStack_14b0);
            pSVar39 = (SetMB *)CONCAT44(uStack_14a4,local_14a8);
            pSVar38 = (SetMB *)CONCAT44(uStack_149c,uStack_14a0);
            fVar64 = (float)local_1450;
            local_1a58._0_4_ = (undefined4)local_1558;
            local_1a58._4_4_ = local_1558._4_4_;
            uStack_1a50._0_4_ = (undefined4)uStack_1550;
            uStack_1a50._4_4_ = uStack_1550._4_4_;
            local_1a68._0_4_ = (float)local_1568;
            local_1a68._4_4_ = local_1568._4_4_;
            uStack_1a60._0_4_ = (float)uStack_1560;
            uStack_1a60._4_4_ = uStack_1560._4_4_;
            local_1a78._0_4_ = (undefined4)local_1578;
            local_1a78._4_4_ = local_1578._4_4_;
            uStack_1a70._0_4_ = (undefined4)uStack_1570;
            uStack_1a70._4_4_ = uStack_1570._4_4_;
            fVar63 = (float)local_1500;
            fVar58 = local_1500._4_4_;
            fVar59 = local_1450._4_4_;
            goto LAB_0011ec2c;
          }
          local_18f8 = local_d40[uVar33 * 0x2c];
          pSVar3 = local_d38[uVar33 * 0x16];
          local_18f4 = fStack_13d0;
          puVar1 = param_2 + 9;
          local_18f0 = fStack_13d0;
          local_18ec = *(float *)((long)local_d38 + lVar34 + -4);
          pSVar38 = (SetMB *)operator_new(0x28);
          puVar46 = (undefined8 *)param_2[9];
          pSVar41 = (SetMB *)(&local_d68)[uVar33 * 0x16];
          pSVar39 = apSStack_d60[uVar33 * 0x16];
          *(undefined8 **)pSVar38 = puVar46;
          pSVar38[8] = (SetMB)0x0;
          *(ulong *)(pSVar38 + 0x10) = 0;
          *(ulong *)(pSVar38 + 0x18) = 0;
          *(ulong *)(pSVar38 + 0x20) = 0;
          uVar51 = (long)pSVar39 - (long)pSVar41;
          if (uVar51 != 0) {
            uVar36 = uVar51 * 0x50;
            (**(code **)*puVar46)(puVar46,uVar36,0);
            if (uVar36 < 0x1c00000) {
              uVar36 = embree::alignedMalloc(uVar36,0x10);
            }
            else {
              uVar36 = embree::os_malloc(uVar36,(bool *)(pSVar38 + 8));
            }
            pSVar41 = (SetMB *)(&local_d68)[uVar33 * 0x16];
            *(ulong *)(pSVar38 + 0x20) = uVar36;
            pSVar39 = apSStack_d60[uVar33 * 0x16];
            *(ulong *)(pSVar38 + 0x10) = uVar51;
            *(ulong *)(pSVar38 + 0x18) = uVar51;
            uVar51 = (long)pSVar39 - (long)pSVar41;
          }
          local_1768 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          pSStack_1760 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          local_18a0 = &local_1900;
          local_1758 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          uStack_1750 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          local_1708 = 0;
          local_1700 = (SetMB *)0x0;
          local_16f8 = (SetMB *)0x0;
          local_16f0 = (SetMB *)0x0;
          local_16e8 = (SetMB *)0x3f80000000000000;
          local_16e0 = 0x3f800000;
          local_1900 = pSVar38;
          local_18b8 = pSVar3;
          local_18b0 = (SetMB *)&local_18f8;
          local_18a8 = puVar1;
          local_1898 = pSVar48;
          local_1748 = local_1768;
          pSStack_1740 = pSStack_1760;
          local_1738 = local_1758;
          pSStack_1730 = uStack_1750;
          local_1728 = local_1768;
          pSStack_1720 = pSStack_1760;
          local_1718 = local_1758;
          pSStack_1710 = uStack_1750;
          if (uVar51 < 0xc00) {
            local_17f8 = pSVar41;
            pSStack_17f0 = pSVar39;
            HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
            ::
            split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
            ::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                      ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1888,
                       (range *)&local_18b8);
          }
          else {
            parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                      ((ulong)&local_1888,uVar51 + 0x7f >> 7,(ulong)pSVar41,(ulong)pSVar39,
                       (PrimInfoMBT_conflict *)&local_1768,
                       (_lambda_embree__range<unsigned_long>_const___1_ *)&local_18b8,
                       PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
          }
          local_1af8 = (SetMB *)&local_17f8;
          pSVar48 = apSStack_d60[uVar33 * 0x16];
          pSVar41 = (SetMB *)(&local_d68)[uVar33 * 0x16];
          uVar51 = (long)pSVar48 - (long)pSVar41;
          if ((long)local_1820 - (long)local_1828 != uVar51) {
            local_1768 = (SetMB *)&local_18f8;
            local_1820 = (SetMB *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_1_>
                                            (*(PrimRefMB **)(local_1900 + 0x20),0,uVar51,0x400,
                                             (_lambda_embree__PrimRefMB_const___1_ *)&local_1768);
            pSVar48 = apSStack_d60[uVar33 * 0x16];
            pSVar41 = (SetMB *)(&local_d68)[uVar33 * 0x16];
            uVar51 = (long)pSVar48 - (long)pSVar41;
          }
          uVar81 = local_1804;
          uVar82 = local_1808;
          pSVar53 = local_1810;
          pSVar54 = local_1818;
          pSVar89 = pSStack_1830;
          pSVar87 = local_1838;
          pSVar92 = pSStack_1840;
          pSVar90 = local_1848;
          pSVar39 = local_1878;
          pSVar98 = pSStack_1880;
          pSVar94 = local_1888;
          pSVar55 = local_1900;
          local_1528 = local_1828;
          fVar58 = local_17fc;
          if (local_18f4 <= local_17fc) {
            fVar58 = local_18f4;
          }
          fVar63 = local_18f8;
          if (local_18f8 <= local_1800) {
            fVar63 = local_1800;
          }
          local_1518 = local_1818;
          local_1510 = local_1810;
          local_14f8 = local_1900;
          local_1588 = local_1888;
          uStack_1580 = pSStack_1880;
          local_1578 = local_1878;
          uStack_1570 = pSStack_1870;
          local_1568 = local_1868;
          uStack_1560 = pSStack_1860;
          local_1558 = local_1858;
          uStack_1550 = pSStack_1850;
          local_1548 = local_1848;
          uStack_1540 = pSStack_1840;
          local_1538 = local_1838;
          pSStack_1530 = pSStack_1830;
          local_1508 = (SetMB *)CONCAT44(local_1804,local_1808);
          local_1500 = CONCAT44(fVar58,fVar63);
          local_1768 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          pSStack_1760 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
          local_1758 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          uStack_1750 = (SetMB *)CONCAT44(fStack_1aac,fStack_1aac);
          local_1708 = 0;
          local_1700 = (SetMB *)0x0;
          local_16f8 = (SetMB *)0x0;
          local_16f0 = (SetMB *)0x0;
          local_16e8 = (SetMB *)0x3f80000000000000;
          local_16e0 = 0x3f800000;
          uStack_1ad0 = pSStack_1880;
          local_1ad8 = (undefined1  [8])local_1888;
          local_1a78._0_4_ = SUB84(local_1878,0);
          local_1a78._4_4_ = (undefined4)((ulong)local_1878 >> 0x20);
          uStack_1a70._0_4_ = SUB84(pSStack_1870,0);
          uStack_1a70._4_4_ = (undefined4)((ulong)pSStack_1870 >> 0x20);
          local_1a68._0_4_ = SUB84(local_1868,0);
          local_1a68._4_4_ = (undefined4)((ulong)local_1868 >> 0x20);
          uStack_1a60._0_4_ = SUB84(pSStack_1860,0);
          uStack_1a60._4_4_ = (undefined4)((ulong)pSStack_1860 >> 0x20);
          local_1a58._0_4_ = SUB84(local_1858,0);
          local_1a58._4_4_ = (undefined4)((ulong)local_1858 >> 0x20);
          uStack_1a50._0_4_ = SUB84(pSStack_1850,0);
          uStack_1a50._4_4_ = (undefined4)((ulong)pSStack_1850 >> 0x20);
          local_18d8 = pSVar3;
          local_18d0 = (SetMB *)&local_18f0;
          local_18c8 = puVar1;
          local_1748 = local_1768;
          pSStack_1740 = pSStack_1760;
          local_1738 = local_1758;
          pSStack_1730 = uStack_1750;
          local_1728 = local_1768;
          pSStack_1720 = pSStack_1760;
          local_1718 = local_1758;
          pSStack_1710 = uStack_1750;
          pSStack_1520 = local_1820;
          if (uVar51 < 0xc00) {
            local_18e8 = pSVar41;
            local_18e0 = pSVar48;
            HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>
            ::
            split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)
            ::{lambda(embree::range<unsigned_long>const&)#3}::operator()
                      ((_lambda_embree__range<unsigned_long>const___3_ *)&local_17f8,
                       (range *)&local_18d8);
          }
          else {
            parallel_reduce_internal<unsigned_long,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::range<unsigned_long>const&)_3_,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const(embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&,embree::PrimInfoMBT<embree::LBBox<embree::Vec3fa>>const&)>
                      ((embree *)&local_17f8,uVar51 + 0x7f >> 7,(ulong)pSVar41,(ulong)pSVar48,0x80,
                       (PrimInfoMBT_conflict *)&local_1768,
                       (_lambda_embree__range<unsigned_long>_const___3_ *)&local_18d8,
                       PrimInfoMBT<embree::LBBox<embree::Vec3fa>>::merge2);
          }
          pSVar48 = (SetMB *)(&local_d68)[uVar33 * 0x16];
          lVar50 = (long)local_1790 - (long)local_1798;
          pSVar40 = pSVar48 + lVar50;
          local_1798 = pSVar48;
          local_1790 = pSVar40;
          if (lVar50 != (long)apSStack_d60[uVar33 * 0x16] - (long)pSVar48) {
            uStack_1ad0._0_4_ = (undefined4)uStack_1a70;
            local_1ad8 = (undefined1  [8])pSVar39;
            uStack_1ad0._4_4_ = uStack_1a70._4_4_;
            pSStack_1af0 = pSVar98;
            local_1af8 = pSVar94;
            local_1768 = (SetMB *)&local_18f0;
            pSVar40 = (SetMB *)parallel_filter<embree::PrimRefMB,unsigned_long,embree::sse2::HeuristicMBlurTemporalSplit<embree::PrimRefMB,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,2ul>::split(embree::sse2::BinSplit<32ul>const&,embree::SetMB_const&,embree::SetMB&,embree::SetMB&)::_lambda(embree::PrimRefMB_const&)_4_>
                                         (*(PrimRefMB **)(pSVar3 + 0x20),(ulong)pSVar48,
                                          (ulong)apSStack_d60[uVar33 * 0x16],0x400,
                                          (_lambda_embree__PrimRefMB_const___4_ *)&local_1768);
          }
          local_14c8 = (undefined4)local_17e8;
          uStack_14c4 = local_17e8._4_4_;
          uStack_14c0 = (undefined4)uStack_17e0;
          uStack_14bc = uStack_17e0._4_4_;
          local_1b08 = local_17a8;
          pSStack_1b00 = pSStack_17a0;
          uStack_1490 = pSStack_17b0;
          local_1498 = (undefined1  [8])local_17b8;
          local_1468 = local_1788;
          local_1460 = local_1780;
          local_1ad8._0_4_ = (undefined4)local_1778;
          uStack_14d0 = pSStack_17f0;
          local_14d8 = (undefined1  [8])local_17f8;
          fVar59 = local_1770._4_4_;
          if (local_18ec <= local_1770._4_4_) {
            fVar59 = local_18ec;
          }
          local_1af8._0_4_ = local_1778._4_4_;
          fVar64 = local_18f0;
          if (local_18f0 <= (float)local_1770) {
            fVar64 = (float)local_1770;
          }
          local_14b8 = SUB84(local_17d8,0);
          fStack_14b4 = (float)((ulong)local_17d8 >> 0x20);
          fStack_14b0 = SUB84(uStack_17d0,0);
          fStack_14ac = (float)((ulong)uStack_17d0 >> 0x20);
          local_14a8 = SUB84(local_17c8,0);
          uStack_14a4 = (undefined4)((ulong)local_17c8 >> 0x20);
          uStack_14a0 = SUB84(uStack_17c0,0);
          uStack_149c = (undefined4)((ulong)uStack_17c0 >> 0x20);
          local_1458 = local_1778;
          local_1951 = (bool)(local_1951 | pSVar38 != (SetMB *)0x0);
          local_1450 = CONCAT44(fVar59,fVar64);
          pSVar48 = local_17d8;
          pSVar41 = uStack_17d0;
          pSVar39 = local_17c8;
          pSVar38 = uStack_17c0;
          local_1478 = local_1798;
          pSStack_1470 = pSVar40;
          local_1448 = pSVar3;
        }
        lVar50 = local_50;
        pSVar32 = local_1448;
        pSVar40 = local_1460;
        pSVar3 = local_1468;
        auVar84 = _local_1498;
        uVar21 = uStack_14bc;
        uVar20 = uStack_14c0;
        uVar74 = uStack_14c4;
        uVar80 = local_14c8;
        auVar86 = _local_14d8;
        ppSVar4 = local_2d8[uVar33];
        if (*ppSVar4 == pSVar55) {
          ppSVar4[1] = ppSVar4[1] + 1;
          if (local_1448 != pSVar55) goto LAB_0011ecc9;
LAB_0011fa41:
          local_2d8[local_258] = ppSVar4;
          pSVar47 = ppSVar4[1];
        }
        else {
          local_50 = local_50 + 1;
          (&local_250)[lVar50 * 2] = pSVar55;
          (&local_248)[lVar50 * 2] = 1;
          local_2d8[uVar33] = &local_250 + lVar50 * 2;
          if (local_1448 == *ppSVar4) goto LAB_0011fa41;
LAB_0011ecc9:
          lVar50 = local_50;
          local_50 = local_50 + 1;
          (&local_250)[lVar50 * 2] = local_1448;
          (&local_248)[lVar50 * 2] = 1;
          local_2d8[local_258] = &local_250 + lVar50 * 2;
          pSVar47 = ppSVar4[1] + -1;
        }
        ppSVar4[1] = pSVar47;
        local_1488 = local_1b08;
        pSStack_1480 = pSStack_1b00;
        if ((pSVar47 == (SetMB *)0x0) && (pSVar47 = *ppSVar4, pSVar47 != (SetMB *)0x0)) {
          pvVar2 = *(void **)(pSVar47 + 0x20);
          lVar50 = *(long *)(pSVar47 + 0x18);
          if (pvVar2 != (void *)0x0) {
            if ((ulong)(lVar50 * 0x50) < 0x1c00000) {
              embree::alignedFree(pvVar2);
            }
            else {
              embree::os_free(pvVar2,lVar50 * 0x50,(bool)pSVar47[8]);
            }
          }
          if (lVar50 != 0) {
            (**(code **)**(undefined8 **)pSVar47)(*(undefined8 **)pSVar47,lVar50 * -0x50,1);
          }
          operator_delete(pSVar47,0x28);
        }
        local_dd8[uVar33 * 0x16] = (long)pSVar43;
        uVar51 = local_258;
        (&local_d68)[uVar33 * 0x16] = (ulong)local_1528;
        apSStack_d60[uVar33 * 0x16] = pSStack_1520;
        apSStack_d60[uVar33 * 0x16 + 1] = pSVar54;
        *(undefined4 *)(&local_d48 + uVar33 * 0x16) = uVar82;
        apSStack_d60[uVar33 * 0x16 + 2] = pSVar53;
        local_d38[uVar33 * 0x16] = pSVar55;
        *(SetMB **)(local_dc8 + uVar33 * 0x2c) = pSVar94;
        (&uStack_dc0)[uVar33 * 0x16] = pSVar98;
        *(undefined4 *)(&local_db8 + uVar33 * 0x16) = (undefined4)local_1a78;
        *(undefined4 *)((long)&local_db8 + lVar34 + 4) = local_1a78._4_4_;
        *(undefined4 *)(&uStack_db0 + uVar33 * 0x16) = (undefined4)uStack_1a70;
        *(undefined4 *)((long)&uStack_db0 + lVar34 + 4) = uStack_1a70._4_4_;
        *(undefined4 *)(&local_da8 + uVar33 * 0x16) = (undefined4)local_1a68;
        *(undefined4 *)((long)&local_da8 + lVar34 + 4) = local_1a68._4_4_;
        *(undefined4 *)(&uStack_da0 + uVar33 * 0x16) = (undefined4)uStack_1a60;
        *(undefined4 *)((long)&uStack_da0 + lVar34 + 4) = uStack_1a60._4_4_;
        *(undefined4 *)(&local_d98 + uVar33 * 0x16) = (undefined4)local_1a58;
        *(undefined4 *)((long)&local_d98 + lVar34 + 4) = local_1a58._4_4_;
        *(undefined4 *)(&uStack_d90 + uVar33 * 0x16) = (undefined4)uStack_1a50;
        *(undefined4 *)((long)&uStack_d90 + lVar34 + 4) = uStack_1a50._4_4_;
        local_d88[uVar33 * 0x16] = pSVar90;
        local_d88[uVar33 * 0x16 + 1] = pSVar92;
        local_d88[uVar33 * 0x16 + 2] = pSVar87;
        local_d88[uVar33 * 0x16 + 3] = pSVar89;
        *(undefined4 *)((long)&local_d48 + lVar34 + 4) = uVar81;
        local_d40[uVar33 * 0x2c] = fVar63;
        *(float *)((long)local_d38 + lVar34 + -4) = fVar58;
        lVar34 = local_258 * 0xb0;
        local_dd8[local_258 * 0x16] = (long)pSVar52;
        (&local_d98)[uVar51 * 0x16] = pSVar39;
        (&uStack_d90)[uVar51 * 0x16] = pSVar38;
        apSStack_d60[uVar51 * 0x16 + 1] = pSVar3;
        local_d88[uVar51 * 0x16 + 2] = local_1b08;
        local_d88[uVar51 * 0x16 + 3] = pSStack_1b00;
        (&local_da8)[uVar51 * 0x16] = pSVar48;
        (&uStack_da0)[uVar51 * 0x16] = pSVar41;
        (&local_d68)[uVar51 * 0x16] = (ulong)local_1478;
        apSStack_d60[uVar51 * 0x16] = pSStack_1470;
        *(undefined1 (*) [16])(local_dc8 + uVar51 * 0x2c) = auVar86;
        *(undefined4 *)(&local_db8 + uVar51 * 0x16) = uVar80;
        *(undefined4 *)((long)&local_db8 + lVar34 + 4) = uVar74;
        *(undefined4 *)(&uStack_db0 + uVar51 * 0x16) = uVar20;
        *(undefined4 *)((long)&uStack_db0 + lVar34 + 4) = uVar21;
        *(undefined1 (*) [16])(local_d88 + uVar51 * 0x16) = auVar84;
        apSStack_d60[uVar51 * 0x16 + 2] = pSVar40;
        local_d38[uVar51 * 0x16] = pSVar32;
        *(undefined4 *)(&local_d48 + uVar51 * 0x16) = local_1ad8._0_4_;
        *(undefined4 *)((long)&local_d48 + lVar34 + 4) = local_1af8._0_4_;
        local_d40[uVar51 * 0x2c] = fVar64;
        *(float *)((long)local_d38 + lVar34 + -4) = fVar59;
        local_258 = local_258 + 1;
      } while (local_258 < *param_2);
    }
    if (local_258 != 0) {
LAB_0011f2f6:
      uVar33 = 0;
      pfVar35 = local_d40;
      do {
        while (uVar42 = *(undefined8 *)pfVar35, (float)uVar42 <= *(float *)(param_3 + 0x13)) {
          uVar33 = uVar33 + 1;
          pfVar35 = pfVar35 + 0x2c;
          local_1951 = (bool)(local_1951 |
                             (float)((ulong)uVar42 >> 0x20) < *(float *)((long)param_3 + 0x9c));
          if (uVar33 == local_258) goto LAB_0011f369;
        }
        uVar33 = uVar33 + 1;
        local_1951 = true;
        pfVar35 = pfVar35 + 0x2c;
      } while (uVar33 != local_258);
    }
LAB_0011f369:
    pSVar52 = *(SetMB **)param_8;
joined_r0x0011fb5c:
    if (local_1951) {
      local_1598 = (SetMB *)0x100;
      if (param_7 != *(FastAllocator **)(pSVar52 + 8)) {
        embree::MutexSys::lock();
        if (*(long *)(pSVar52 + 8) != 0) {
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x118) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x118) +
               *(long *)(pSVar52 + 0xa8) + *(long *)(pSVar52 + 0x68);
          UNLOCK();
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x120) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x120) +
               (((*(long *)(pSVar52 + 0x98) + *(long *)(pSVar52 + 0x58)) - *(long *)(pSVar52 + 0x50)
                ) - *(long *)(pSVar52 + 0x90));
          UNLOCK();
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x128) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x128) +
               *(long *)(pSVar52 + 0xb0) + *(long *)(pSVar52 + 0x70);
          UNLOCK();
        }
        *(undefined8 *)(pSVar52 + 0x48) = 0;
        *(undefined8 *)(pSVar52 + 0x58) = 0;
        *(undefined8 *)(pSVar52 + 0x50) = 0;
        *(undefined8 *)(pSVar52 + 0x68) = 0;
        *(undefined8 *)(pSVar52 + 0x70) = 0;
        *(undefined8 *)(pSVar52 + 0x60) = 0;
        if (param_7 == (FastAllocator *)0x0) {
          *(undefined8 *)(pSVar52 + 0x88) = 0;
          uVar42 = 0;
          *(undefined8 *)(pSVar52 + 0x98) = 0;
          *(undefined8 *)(pSVar52 + 0x90) = 0;
          *(undefined8 *)(pSVar52 + 0xa8) = 0;
          *(undefined8 *)(pSVar52 + 0xb0) = 0;
        }
        else {
          uVar42 = *(undefined8 *)(param_7 + 0x10);
          *(undefined8 *)(pSVar52 + 0x88) = 0;
          *(undefined8 *)(pSVar52 + 0x98) = 0;
          *(undefined8 *)(pSVar52 + 0x60) = uVar42;
          *(undefined8 *)(pSVar52 + 0x90) = 0;
          *(undefined8 *)(pSVar52 + 0xa8) = 0;
          *(undefined8 *)(pSVar52 + 0xb0) = 0;
          *(undefined8 *)(pSVar52 + 0xa0) = 0;
          uVar42 = *(undefined8 *)(param_7 + 0x10);
        }
        *(undefined8 *)(pSVar52 + 0xa0) = uVar42;
        LOCK();
        *(FastAllocator **)(pSVar52 + 8) = param_7;
        UNLOCK();
        local_14e8 = pSVar52;
        embree::MutexSys::lock();
        puVar46 = *(undefined8 **)(param_7 + 0x138);
        if (puVar46 == *(undefined8 **)(param_7 + 0x140)) {
          std::
          vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
          ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                    ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                      *)(param_7 + 0x130),puVar46,&local_14e8);
        }
        else {
          *puVar46 = pSVar52;
          *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
        }
        embree::MutexSys::unlock();
        embree::MutexSys::unlock();
      }
      *(long *)(param_8 + 0x28) = *(long *)(param_8 + 0x28) + 0x100;
      lVar34 = *(long *)(param_8 + 0x10);
      uVar51 = (ulong)(-(int)lVar34 & 0xf);
      uVar33 = lVar34 + 0x100 + uVar51;
      *(ulong *)(param_8 + 0x10) = uVar33;
      if (*(ulong *)(param_8 + 0x18) < uVar33) {
        *(long *)(param_8 + 0x10) = lVar34;
        if (*(SetMB **)(param_8 + 0x20) < (SetMB *)0x400) {
          puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_1598,0x40,false);
        }
        else {
          local_14e8 = *(SetMB **)(param_8 + 0x20);
          puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_14e8,0x40,true);
          *(undefined8 **)(param_8 + 8) = puVar46;
          *(long *)(param_8 + 0x30) =
               (*(long *)(param_8 + 0x18) + *(long *)(param_8 + 0x30)) - *(long *)(param_8 + 0x10);
          *(undefined8 *)(param_8 + 0x10) = 0x100;
          *(SetMB **)(param_8 + 0x18) = local_14e8;
          if (local_14e8 < (SetMB *)0x100) {
            local_14e8 = *(SetMB **)(param_8 + 0x20);
            *(undefined8 *)(param_8 + 0x10) = 0;
            puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_14e8,0x40,false);
            *(undefined8 **)(param_8 + 8) = puVar46;
            *(long *)(param_8 + 0x30) =
                 (*(long *)(param_8 + 0x18) + *(long *)(param_8 + 0x30)) - *(long *)(param_8 + 0x10)
            ;
            *(undefined8 *)(param_8 + 0x10) = 0x100;
            *(SetMB **)(param_8 + 0x18) = local_14e8;
            if (local_14e8 < (SetMB *)0x100) {
              puVar46 = (undefined8 *)0x0;
              *(undefined8 *)(param_8 + 0x10) = 0;
            }
          }
        }
      }
      else {
        *(ulong *)(param_8 + 0x30) = *(long *)(param_8 + 0x30) + uVar51;
        puVar46 = (undefined8 *)(*(long *)(param_8 + 8) + -0x100 + uVar33);
      }
      auVar86._4_4_ = uStack_1a9c;
      auVar86._0_4_ = uStack_1a9c;
      auVar86._8_4_ = uStack_1a9c;
      auVar86._12_4_ = uStack_1a9c;
      uVar42 = CONCAT44(fStack_1aac,fStack_1aac);
      uVar16 = CONCAT44(fStack_1aac,fStack_1aac);
      *puVar46 = 8;
      puVar46[1] = 8;
      puVar46[2] = 8;
      puVar46[3] = 8;
      *(undefined1 (*) [16])(puVar46 + 0x1c) = auVar86;
      puVar46[0x1e] = uVar42;
      puVar46[0x1f] = uVar16;
      *(undefined1 (*) [16])(puVar46 + 0xc) = auVar86;
      *(undefined1 (*) [16])(puVar46 + 8) = auVar86;
      *(undefined1 (*) [16])(puVar46 + 4) = auVar86;
      puVar46[0xe] = uVar42;
      puVar46[0xf] = uVar16;
      puVar46[10] = uVar42;
      puVar46[0xb] = uVar16;
      puVar46[6] = uVar42;
      puVar46[7] = uVar16;
      *(undefined1 (*) [16])(puVar46 + 0x18) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x14) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x1a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x16) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x12) = (undefined1  [16])0x0;
      uVar33 = (ulong)puVar46 | 6;
    }
    else {
      local_1598 = (SetMB *)0xe0;
      if (param_7 != *(FastAllocator **)(pSVar52 + 8)) {
        embree::MutexSys::lock();
        if (*(long *)(pSVar52 + 8) != 0) {
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x118) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x118) +
               *(long *)(pSVar52 + 0xa8) + *(long *)(pSVar52 + 0x68);
          UNLOCK();
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x120) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x120) +
               (((*(long *)(pSVar52 + 0x98) + *(long *)(pSVar52 + 0x58)) - *(long *)(pSVar52 + 0x50)
                ) - *(long *)(pSVar52 + 0x90));
          UNLOCK();
          LOCK();
          *(long *)(*(long *)(pSVar52 + 8) + 0x128) =
               *(long *)(*(long *)(pSVar52 + 8) + 0x128) +
               *(long *)(pSVar52 + 0xb0) + *(long *)(pSVar52 + 0x70);
          UNLOCK();
        }
        *(undefined8 *)(pSVar52 + 0x48) = 0;
        *(undefined8 *)(pSVar52 + 0x58) = 0;
        *(undefined8 *)(pSVar52 + 0x50) = 0;
        *(undefined8 *)(pSVar52 + 0x68) = 0;
        *(undefined8 *)(pSVar52 + 0x70) = 0;
        *(undefined8 *)(pSVar52 + 0x60) = 0;
        if (param_7 == (FastAllocator *)0x0) {
          *(undefined8 *)(pSVar52 + 0x88) = 0;
          uVar42 = 0;
          *(undefined8 *)(pSVar52 + 0x98) = 0;
          *(undefined8 *)(pSVar52 + 0x90) = 0;
          *(undefined8 *)(pSVar52 + 0xa8) = 0;
          *(undefined8 *)(pSVar52 + 0xb0) = 0;
        }
        else {
          uVar42 = *(undefined8 *)(param_7 + 0x10);
          *(undefined8 *)(pSVar52 + 0x88) = 0;
          *(undefined8 *)(pSVar52 + 0x98) = 0;
          *(undefined8 *)(pSVar52 + 0x60) = uVar42;
          *(undefined8 *)(pSVar52 + 0x90) = 0;
          *(undefined8 *)(pSVar52 + 0xa8) = 0;
          *(undefined8 *)(pSVar52 + 0xb0) = 0;
          *(undefined8 *)(pSVar52 + 0xa0) = 0;
          uVar42 = *(undefined8 *)(param_7 + 0x10);
        }
        *(undefined8 *)(pSVar52 + 0xa0) = uVar42;
        LOCK();
        *(FastAllocator **)(pSVar52 + 8) = param_7;
        UNLOCK();
        local_14e8 = pSVar52;
        embree::MutexSys::lock();
        puVar46 = *(undefined8 **)(param_7 + 0x138);
        if (puVar46 == *(undefined8 **)(param_7 + 0x140)) {
          std::
          vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
          ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                    ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                      *)(param_7 + 0x130),puVar46,&local_14e8);
        }
        else {
          *puVar46 = pSVar52;
          *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
        }
        embree::MutexSys::unlock();
        embree::MutexSys::unlock();
      }
      *(long *)(param_8 + 0x28) = *(long *)(param_8 + 0x28) + 0xe0;
      lVar34 = *(long *)(param_8 + 0x10);
      uVar51 = (ulong)(-(int)lVar34 & 0xf);
      uVar33 = lVar34 + 0xe0 + uVar51;
      *(ulong *)(param_8 + 0x10) = uVar33;
      if (*(ulong *)(param_8 + 0x18) < uVar33) {
        *(long *)(param_8 + 0x10) = lVar34;
        if (*(SetMB **)(param_8 + 0x20) < (SetMB *)0x380) {
          puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_1598,0x40,false);
        }
        else {
          local_14e8 = *(SetMB **)(param_8 + 0x20);
          puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_14e8,0x40,true);
          *(undefined8 **)(param_8 + 8) = puVar46;
          *(long *)(param_8 + 0x30) =
               (*(long *)(param_8 + 0x18) + *(long *)(param_8 + 0x30)) - *(long *)(param_8 + 0x10);
          *(undefined8 *)(param_8 + 0x10) = 0xe0;
          *(SetMB **)(param_8 + 0x18) = local_14e8;
          if (local_14e8 < (SetMB *)0xe0) {
            local_14e8 = *(SetMB **)(param_8 + 0x20);
            *(undefined8 *)(param_8 + 0x10) = 0;
            puVar46 = (undefined8 *)FastAllocator::malloc(param_7,&local_14e8,0x40,false);
            *(undefined8 **)(param_8 + 8) = puVar46;
            *(long *)(param_8 + 0x30) =
                 (*(long *)(param_8 + 0x18) + *(long *)(param_8 + 0x30)) - *(long *)(param_8 + 0x10)
            ;
            *(undefined8 *)(param_8 + 0x10) = 0xe0;
            *(SetMB **)(param_8 + 0x18) = local_14e8;
            if (local_14e8 < (SetMB *)0xe0) {
              puVar46 = (undefined8 *)0x0;
              *(undefined8 *)(param_8 + 0x10) = 0;
            }
          }
        }
      }
      else {
        *(ulong *)(param_8 + 0x30) = *(long *)(param_8 + 0x30) + uVar51;
        puVar46 = (undefined8 *)(*(long *)(param_8 + 8) + -0xe0 + uVar33);
      }
      uVar42 = CONCAT44(uStack_1a9c,uStack_1a9c);
      uVar16 = CONCAT44(uStack_1a9c,uStack_1a9c);
      *puVar46 = 8;
      puVar46[1] = 8;
      puVar46[0xc] = uVar42;
      puVar46[0xd] = uVar16;
      puVar46[8] = uVar42;
      puVar46[9] = uVar16;
      puVar46[4] = uVar42;
      puVar46[5] = uVar16;
      uVar42 = CONCAT44(fStack_1aac,fStack_1aac);
      uVar16 = CONCAT44(fStack_1aac,fStack_1aac);
      puVar46[2] = 8;
      puVar46[3] = 8;
      puVar46[0xe] = uVar42;
      puVar46[0xf] = uVar16;
      puVar46[10] = uVar42;
      puVar46[0xb] = uVar16;
      puVar46[6] = uVar42;
      puVar46[7] = uVar16;
      *(undefined1 (*) [16])(puVar46 + 0x18) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x14) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x1a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x16) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x12) = (undefined1  [16])0x0;
      uVar33 = (ulong)puVar46 | 1;
    }
    if (param_2[7] < (ulong)(param_3[0xf] - param_3[0xe])) {
      local_14e8 = (SetMB *)&local_13d8;
      uStack_14e0 = local_1ac8;
      local_14d8 = (undefined1  [8])param_2;
      local_1768 = (SetMB *)0x0;
      TaskScheduler::
      spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,local_258,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_14e8,
                 (TaskGroupContext *)&local_1768);
      embree::TaskScheduler::wait();
      if (local_1768 != (SetMB *)0x0) goto LAB_00121ce3;
      if (local_258 == 0) {
        auVar88._4_4_ = uStack_1a9c;
        auVar88._0_4_ = uStack_1a9c;
        auVar88._8_4_ = uStack_1a9c;
        auVar88._12_4_ = uStack_1a9c;
        auVar84._4_4_ = fStack_1aac;
        auVar84._0_4_ = fStack_1aac;
        auVar84._8_4_ = fStack_1aac;
        auVar84._12_4_ = fStack_1aac;
        auVar86 = auVar84;
        auVar91 = auVar88;
      }
      else {
        auVar84._4_4_ = fStack_1aac;
        auVar84._0_4_ = fStack_1aac;
        auVar84._8_4_ = fStack_1aac;
        auVar84._12_4_ = fStack_1aac;
        auVar88._4_4_ = uStack_1a9c;
        auVar88._0_4_ = uStack_1a9c;
        auVar88._8_4_ = uStack_1a9c;
        auVar88._12_4_ = uStack_1a9c;
        pauVar44 = (undefined1 (*) [16])local_13c8;
        auVar86 = auVar84;
        auVar91 = auVar88;
        do {
          auVar88 = minps(auVar88,*pauVar44);
          auVar84 = maxps(auVar84,pauVar44[1]);
          pauVar45 = pauVar44 + 6;
          auVar91 = minps(auVar91,pauVar44[2]);
          auVar86 = maxps(auVar86,pauVar44[3]);
          pauVar44 = pauVar45;
        } while ((undefined1 (*) [16])local_13c8 + local_258 * 6 != pauVar45);
        if (((uint)uVar33 & 0xf) == 1) {
LAB_0011f799:
          uVar18 = _LC36;
          uVar17 = _LC6;
          fVar58 = _LC43;
          uVar81 = _LC40;
          uVar82 = _LC38;
          fVar64 = _LC3;
          uVar36 = uVar33 & 0xfffffffffffffff0;
          uVar51 = uVar36;
          pfVar35 = &local_13d8;
          do {
            *(undefined8 *)(uVar51 * 2 - uVar36) = *(undefined8 *)pfVar35;
            fVar63 = pfVar35[0x14];
            uVar37 = uVar51 + 4;
            fVar100 = fVar64 / (pfVar35[0x15] - fVar63);
            fVar59 = (float)((uint)fVar63 ^ uVar18) * fVar100;
            fVar100 = (fVar64 - fVar63) * fVar100;
            fVar93 = fVar64 - fVar59;
            fVar63 = fVar64 - fVar100;
            auVar75._0_4_ = pfVar35[0x10] * fVar59 + pfVar35[8] * fVar93;
            auVar75._4_4_ = pfVar35[0x11] * fVar59 + pfVar35[9] * fVar93;
            auVar75._8_4_ = pfVar35[0x12] * fVar59 + pfVar35[10] * fVar93;
            auVar75._12_4_ = pfVar35[0x13] * fVar59 + pfVar35[0xb] * fVar93;
            auVar66._0_4_ = fVar59 * pfVar35[0xc] + fVar93 * pfVar35[4];
            auVar66._4_4_ = fVar59 * pfVar35[0xd] + fVar93 * pfVar35[5];
            auVar66._8_4_ = fVar59 * pfVar35[0xe] + fVar93 * pfVar35[6];
            auVar66._12_4_ = fVar59 * pfVar35[0xf] + fVar93 * pfVar35[7];
            auVar11._4_4_ = uVar82;
            auVar11._0_4_ = uVar82;
            auVar11._8_4_ = uVar82;
            auVar11._12_4_ = uVar82;
            auVar76 = maxps(auVar75,auVar11);
            auVar8._4_4_ = uVar81;
            auVar8._0_4_ = uVar81;
            auVar8._8_4_ = uVar81;
            auVar8._12_4_ = uVar81;
            auVar67 = minps(auVar66,auVar8);
            auVar95._0_4_ = pfVar35[0x10] * fVar100 + pfVar35[8] * fVar63;
            auVar95._4_4_ = pfVar35[0x11] * fVar100 + pfVar35[9] * fVar63;
            auVar95._8_4_ = pfVar35[0x12] * fVar100 + pfVar35[10] * fVar63;
            auVar95._12_4_ = pfVar35[0x13] * fVar100 + pfVar35[0xb] * fVar63;
            auVar60._0_4_ = fVar100 * pfVar35[0xc] + fVar63 * pfVar35[4];
            auVar60._4_4_ = fVar100 * pfVar35[0xd] + fVar63 * pfVar35[5];
            auVar60._8_4_ = fVar100 * pfVar35[0xe] + fVar63 * pfVar35[6];
            auVar60._12_4_ = fVar100 * pfVar35[0xf] + fVar63 * pfVar35[7];
            auVar12._4_4_ = uVar82;
            auVar12._0_4_ = uVar82;
            auVar12._8_4_ = uVar82;
            auVar12._12_4_ = uVar82;
            auVar96 = maxps(auVar95,auVar12);
            auVar9._4_4_ = uVar81;
            auVar9._0_4_ = uVar81;
            auVar9._8_4_ = uVar81;
            auVar9._12_4_ = uVar81;
            auVar61 = minps(auVar60,auVar9);
            fVar63 = (float)((uint)auVar76._0_4_ & uVar17) * fVar58 + auVar76._0_4_;
            fVar59 = (float)((uint)auVar76._4_4_ & uVar17) * fVar58 + auVar76._4_4_;
            fVar100 = (float)((uint)auVar76._8_4_ & uVar17) * fVar58 + auVar76._8_4_;
            *(float *)(uVar51 + 0x30) = fVar63;
            fVar93 = auVar67._0_4_ - (float)((uint)auVar67._0_4_ & uVar17) * fVar58;
            fVar70 = auVar67._4_4_ - (float)((uint)auVar67._4_4_ & uVar17) * fVar58;
            fVar72 = auVar67._8_4_ - (float)((uint)auVar67._8_4_ & uVar17) * fVar58;
            *(float *)(uVar51 + 0x20) = fVar93;
            *(float *)(uVar51 + 0x80) =
                 (auVar61._0_4_ - (float)((uint)auVar61._0_4_ & uVar17) * fVar58) - fVar93;
            *(float *)(uVar51 + 0x40) = fVar70;
            *(float *)(uVar51 + 0x60) = fVar72;
            *(float *)(uVar51 + 0x50) = fVar59;
            *(float *)(uVar51 + 0x70) = fVar100;
            *(float *)(uVar51 + 0xa0) =
                 (auVar61._4_4_ - (float)((uint)auVar61._4_4_ & uVar17) * fVar58) - fVar70;
            *(float *)(uVar51 + 0xc0) =
                 (auVar61._8_4_ - (float)((uint)auVar61._8_4_ & uVar17) * fVar58) - fVar72;
            *(float *)(uVar51 + 0x90) =
                 ((float)((uint)auVar96._0_4_ & uVar17) * fVar58 + auVar96._0_4_) - fVar63;
            *(float *)(uVar51 + 0xb0) =
                 ((float)((uint)auVar96._4_4_ & uVar17) * fVar58 + auVar96._4_4_) - fVar59;
            *(float *)(uVar51 + 0xd0) =
                 ((float)((uint)auVar96._8_4_ & uVar17) * fVar58 + auVar96._8_4_) - fVar100;
            uVar51 = uVar37;
            pfVar35 = pfVar35 + 0x18;
          } while (uVar36 + local_258 * 4 != uVar37);
        }
        else {
LAB_0012109b:
          uVar18 = _LC36;
          uVar17 = _LC6;
          fVar63 = _LC43;
          uVar81 = _LC40;
          uVar82 = _LC38;
          fVar58 = _LC35;
          fVar64 = _LC3;
          if (local_258 != 0) {
            pfVar35 = &local_13d8;
            uVar36 = uVar33 & 0xfffffffffffffff0;
            uVar51 = uVar36;
            do {
              *(undefined8 *)(uVar51 * 2 - uVar36) = *(undefined8 *)pfVar35;
              fVar59 = pfVar35[0x14];
              fVar93 = fVar64 / (pfVar35[0x15] - fVar59);
              fVar100 = (float)((uint)fVar59 ^ uVar18) * fVar93;
              fVar93 = (fVar64 - fVar59) * fVar93;
              fVar70 = fVar64 - fVar100;
              fVar59 = fVar64 - fVar93;
              auVar77._0_4_ = pfVar35[0x10] * fVar100 + pfVar35[8] * fVar70;
              auVar77._4_4_ = pfVar35[0x11] * fVar100 + pfVar35[9] * fVar70;
              auVar77._8_4_ = pfVar35[0x12] * fVar100 + pfVar35[10] * fVar70;
              auVar77._12_4_ = pfVar35[0x13] * fVar100 + pfVar35[0xb] * fVar70;
              auVar68._0_4_ = fVar100 * pfVar35[0xc] + fVar70 * pfVar35[4];
              auVar68._4_4_ = fVar100 * pfVar35[0xd] + fVar70 * pfVar35[5];
              auVar68._8_4_ = fVar100 * pfVar35[0xe] + fVar70 * pfVar35[6];
              auVar68._12_4_ = fVar100 * pfVar35[0xf] + fVar70 * pfVar35[7];
              auVar13._4_4_ = uVar82;
              auVar13._0_4_ = uVar82;
              auVar13._8_4_ = uVar82;
              auVar13._12_4_ = uVar82;
              auVar76 = maxps(auVar77,auVar13);
              auVar96._4_4_ = uVar81;
              auVar96._0_4_ = uVar81;
              auVar96._8_4_ = uVar81;
              auVar96._12_4_ = uVar81;
              auVar67 = minps(auVar68,auVar96);
              auVar97._0_4_ = pfVar35[0x10] * fVar93 + pfVar35[8] * fVar59;
              auVar97._4_4_ = pfVar35[0x11] * fVar93 + pfVar35[9] * fVar59;
              auVar97._8_4_ = pfVar35[0x12] * fVar93 + pfVar35[10] * fVar59;
              auVar97._12_4_ = pfVar35[0x13] * fVar93 + pfVar35[0xb] * fVar59;
              auVar62._0_4_ = fVar93 * pfVar35[0xc] + fVar59 * pfVar35[4];
              auVar62._4_4_ = fVar93 * pfVar35[0xd] + fVar59 * pfVar35[5];
              auVar62._8_4_ = fVar93 * pfVar35[0xe] + fVar59 * pfVar35[6];
              auVar62._12_4_ = fVar93 * pfVar35[0xf] + fVar59 * pfVar35[7];
              auVar14._4_4_ = uVar82;
              auVar14._0_4_ = uVar82;
              auVar14._8_4_ = uVar82;
              auVar14._12_4_ = uVar82;
              auVar96 = maxps(auVar97,auVar14);
              auVar10._4_4_ = uVar81;
              auVar10._0_4_ = uVar81;
              auVar10._8_4_ = uVar81;
              auVar10._12_4_ = uVar81;
              auVar61 = minps(auVar62,auVar10);
              fVar59 = (float)((uint)auVar76._0_4_ & uVar17) * fVar63 + auVar76._0_4_;
              fVar100 = (float)((uint)auVar76._4_4_ & uVar17) * fVar63 + auVar76._4_4_;
              fVar93 = (float)((uint)auVar76._8_4_ & uVar17) * fVar63 + auVar76._8_4_;
              *(float *)(uVar51 + 0x30) = fVar59;
              fVar70 = auVar67._0_4_ - (float)((uint)auVar67._0_4_ & uVar17) * fVar63;
              fVar72 = auVar67._4_4_ - (float)((uint)auVar67._4_4_ & uVar17) * fVar63;
              fVar73 = auVar67._8_4_ - (float)((uint)auVar67._8_4_ & uVar17) * fVar63;
              *(float *)(uVar51 + 0x20) = fVar70;
              *(float *)(uVar51 + 0x80) =
                   (auVar61._0_4_ - (float)((uint)auVar61._0_4_ & uVar17) * fVar63) - fVar70;
              *(float *)(uVar51 + 0x40) = fVar72;
              *(float *)(uVar51 + 0x60) = fVar73;
              *(float *)(uVar51 + 0x50) = fVar100;
              *(float *)(uVar51 + 0x70) = fVar93;
              *(float *)(uVar51 + 0xa0) =
                   (auVar61._4_4_ - (float)((uint)auVar61._4_4_ & uVar17) * fVar63) - fVar72;
              *(float *)(uVar51 + 0xc0) =
                   (auVar61._8_4_ - (float)((uint)auVar61._8_4_ & uVar17) * fVar63) - fVar73;
              *(float *)(uVar51 + 0x90) =
                   ((float)((uint)auVar96._0_4_ & uVar17) * fVar63 + auVar96._0_4_) - fVar59;
              *(float *)(uVar51 + 0xd0) =
                   ((float)((uint)auVar96._8_4_ & uVar17) * fVar63 + auVar96._8_4_) - fVar93;
              *(float *)(uVar51 + 0xb0) =
                   ((float)((uint)auVar96._4_4_ & uVar17) * fVar63 + auVar96._4_4_) - fVar100;
              *(float *)(uVar51 + 0xe0) = pfVar35[0x14];
              fVar59 = pfVar35[0x15];
              if (pfVar35[0x15] == fVar64) {
                fVar59 = fVar58;
              }
              *(float *)(uVar51 + 0xf0) = fVar59;
              uVar51 = uVar51 + 4;
              pfVar35 = pfVar35 + 0x18;
            } while (uVar36 + local_258 * 4 != uVar51);
          }
        }
      }
    }
    else {
      lVar34 = local_258 - 1;
      if (lVar34 < 0) {
        auVar84._4_4_ = fStack_1aac;
        auVar84._0_4_ = fStack_1aac;
        auVar84._8_4_ = fStack_1aac;
        auVar84._12_4_ = fStack_1aac;
        auVar88._4_4_ = uStack_1a9c;
        auVar88._0_4_ = uStack_1a9c;
        auVar88._8_4_ = uStack_1a9c;
        auVar88._12_4_ = uStack_1a9c;
        auVar86 = auVar84;
        auVar91 = auVar88;
      }
      else {
        auVar84._4_4_ = fStack_1aac;
        auVar84._0_4_ = fStack_1aac;
        auVar84._8_4_ = fStack_1aac;
        auVar84._12_4_ = fStack_1aac;
        auVar88._4_4_ = uStack_1a9c;
        auVar88._0_4_ = uStack_1a9c;
        auVar88._8_4_ = uStack_1a9c;
        auVar88._12_4_ = uStack_1a9c;
        pfVar35 = local_1438 + local_258 * 0x18;
        puVar57 = auStack_e88 + local_258 * 0xb0;
        auVar86 = auVar84;
        auVar91 = auVar88;
        do {
          lVar34 = lVar34 + -1;
          recurse(&local_14e8,param_2,puVar57,0);
          *(undefined1 (*) [8])(pfVar35 + 4) = local_14d8;
          *(undefined8 *)(pfVar35 + 6) = uStack_14d0;
          auVar67._4_4_ = fStack_14b4;
          auVar67._0_4_ = local_14b8;
          auVar67._8_4_ = fStack_14b0;
          auVar67._12_4_ = fStack_14ac;
          *(ulong *)(pfVar35 + 8) = CONCAT44(uStack_14c4,local_14c8);
          *(ulong *)(pfVar35 + 10) = CONCAT44(uStack_14bc,uStack_14c0);
          auVar76._4_4_ = uStack_14a4;
          auVar76._0_4_ = local_14a8;
          auVar76._8_4_ = uStack_14a0;
          auVar76._12_4_ = uStack_149c;
          auVar61._4_4_ = uStack_14c4;
          auVar61._0_4_ = local_14c8;
          auVar61._8_4_ = uStack_14c0;
          auVar61._12_4_ = uStack_14bc;
          auVar84 = maxps(auVar84,auVar61);
          *(SetMB **)pfVar35 = local_14e8;
          auVar91 = minps(auVar91,auVar67);
          pfVar35[0x14] = (float)local_1498._0_4_;
          auVar86 = maxps(auVar86,auVar76);
          auVar88 = minps(auVar88,_local_14d8);
          *(undefined1 (*) [16])(pfVar35 + 0xc) = auVar67;
          *(undefined1 (*) [16])(pfVar35 + 0x10) = auVar76;
          pfVar35[0x15] = (float)local_1498._4_4_;
          pfVar35 = pfVar35 + -0x18;
          puVar57 = puVar57 + -0xb0;
        } while (lVar34 != -1);
      }
      if (((uint)uVar33 & 0xf) != 1) goto LAB_0012109b;
      if (local_258 != 0) goto LAB_0011f799;
    }
    if (local_1951) {
      pSVar52 = (SetMB *)param_3[0xf];
      pSVar48 = (SetMB *)param_3[0xe];
      local_14e8 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
      uStack_14e0 = (SetMB *)CONCAT44(uStack_1a9c,uStack_1a9c);
      local_14d8._4_4_ = fStack_1aac;
      local_14d8._0_4_ = fStack_1aac;
      uStack_14d0._4_4_ = fStack_1aac;
      uStack_14d0._0_4_ = fStack_1aac;
      pSStack_17f0 = (SetMB *)(param_2 + 0xb);
      local_14c8 = uStack_1a9c;
      uStack_14c4 = uStack_1a9c;
      uStack_14c0 = uStack_1a9c;
      uStack_14bc = uStack_1a9c;
      local_14b8 = fStack_1aac;
      fStack_14b4 = fStack_1aac;
      fStack_14b0 = fStack_1aac;
      fStack_14ac = fStack_1aac;
      local_17f8 = pSVar6;
      if ((ulong)((long)pSVar52 - (long)pSVar48) < 0xc00) {
        local_1768 = pSVar48;
        pSStack_1760 = pSVar52;
        const::{lambda(embree::range<unsigned_long>const&)#1}::operator()
                  ((_lambda_embree__range<unsigned_long>const___1_ *)&local_1598,
                   (range *)&local_17f8);
      }
      else {
        parallel_reduce_internal<unsigned_long,embree::LBBox<embree::Vec3fa>,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::range<unsigned_long>const&)_1_,embree::SetMB::linearBounds<embree::sse2::RecalculatePrimRef<embree::TriangleMesh>>(embree::sse2::RecalculatePrimRef<embree::TriangleMesh>const&)const::_lambda(embree::LBBox<embree::Vec3fa>const&,embree::LBBox<embree::Vec3fa>const&)_2_>
                  ((ulong)&local_1598,((long)pSVar52 - (long)pSVar48) + 0x3ffU >> 10,(ulong)pSVar48,
                   (ulong)pSVar52,(LBBox_conflict *)0x400,
                   (_lambda_embree__range<unsigned_long>_const___1_ *)&local_14e8,
                   (_lambda_embree__LBBox<embree::Vec3fa>_const__embree__LBBox<embree::Vec3fa>_const___2_
                    *)&local_17f8);
      }
      *(ulong *)param_1 = uVar33;
      *(SetMB **)(param_1 + 0x10) = local_1598;
      *(SetMB **)(param_1 + 0x18) = uStack_1590;
      *(SetMB **)(param_1 + 0x20) = local_1588;
      *(SetMB **)(param_1 + 0x28) = uStack_1580;
      *(SetMB **)(param_1 + 0x30) = local_1578;
      *(SetMB **)(param_1 + 0x38) = uStack_1570;
      *(SetMB **)(param_1 + 0x40) = local_1568;
      *(SetMB **)(param_1 + 0x48) = uStack_1560;
      *(long *)(param_1 + 0x50) = param_3[0x13];
    }
    else {
      *(ulong *)param_1 = uVar33;
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar88;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar84;
      *(undefined1 (*) [16])(param_1 + 0x30) = auVar91;
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar86;
      *(long *)(param_1 + 0x50) = param_3[0x13];
    }
    uVar33 = 0;
    if (local_258 != 0) {
      do {
        ppSVar5 = local_2d8[uVar33];
        ppSVar4 = ppSVar5 + 1;
        *ppSVar4 = *ppSVar4 + -1;
        if ((*ppSVar4 == (SetMB *)0x0) && (pSVar6 = *ppSVar5, pSVar6 != (SetMB *)0x0)) {
          pvVar2 = *(void **)(pSVar6 + 0x20);
          lVar34 = *(long *)(pSVar6 + 0x18);
          if (pvVar2 != (void *)0x0) {
            if ((ulong)(lVar34 * 0x50) < 0x1c00000) {
              embree::alignedFree(pvVar2);
            }
            else {
              embree::os_free(pvVar2,lVar34 * 0x50,(bool)pSVar6[8]);
            }
          }
          if (lVar34 != 0) {
            (**(code **)**(undefined8 **)pSVar6)(*(undefined8 **)pSVar6,lVar34 * -0x50,1);
          }
          operator_delete(pSVar6,0x28);
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 < local_258);
    }
    goto LAB_0011d9f3;
  }
  lVar34 = *(long *)(param_3[0x14] + 0x20) + (long)pSVar52 * 0x50;
  lVar50 = *(long *)(param_3[0x14] + 0x20) + uVar33 * 0x50;
  if (lVar34 != lVar50) {
    lVar49 = (long)pSVar52 * 0x50 + uVar33 * -0x50;
    uVar33 = (lVar49 >> 4) * -0x3333333333333333;
    if (uVar33 == 0) {
      std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (lVar50,lVar34,0xfffffffffffffffe);
    }
    else {
      lVar56 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar56 == 0; lVar56 = lVar56 + -1) {
        }
      }
      std::__introsort_loop<embree::PrimRefMB*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (lVar50,lVar34,(long)(int)lVar56 * 2);
      if (0x500 < lVar49) {
        lVar49 = lVar50 + 0x500;
        std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>(lVar50,lVar49);
        if (lVar34 != lVar49) {
          do {
            lVar50 = lVar49 + 0x50;
            std::__unguarded_linear_insert<embree::PrimRefMB*,__gnu_cxx::__ops::_Val_less_iter>
                      (lVar49);
            lVar49 = lVar50;
          } while (lVar34 != lVar50);
        }
        goto LAB_0011d9b1;
      }
    }
    std::__insertion_sort<embree::PrimRefMB*,__gnu_cxx::__ops::_Iter_less_iter>(lVar50,lVar34);
  }
LAB_0011d9b1:
  createLargeLeaf(param_1,param_2,param_3);
LAB_0011d9f3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_00121ce3:
  local_1598 = local_1768;
  std::__exception_ptr::exception_ptr::_M_addref();
  std::rethrow_exception(&local_1598);
LAB_00121d03:
  SetMB::deterministic_order(pSVar6);
  splitByGeometry(pSVar6,(SetMB *)&local_16d8,(SetMB *)&local_1638);
  local_1ac8 = (SetMB *)param_3;
LAB_00121d30:
  lVar50 = *(long *)local_1ac8;
  fVar63 = *(float *)((long)local_1ac8 + 0x10);
  fVar59 = *(float *)((long)local_1ac8 + 0x14);
  fVar100 = *(float *)((long)local_1ac8 + 0x18);
  uVar82 = *(undefined4 *)((long)local_1ac8 + 0x1c);
  fVar93 = *(float *)((long)local_1ac8 + 0x20);
  fVar70 = *(float *)((long)local_1ac8 + 0x24);
  fVar72 = *(float *)((long)local_1ac8 + 0x28);
  uVar81 = *(undefined4 *)((long)local_1ac8 + 0x2c);
  fVar73 = *(float *)((long)local_1ac8 + 0x30);
  fVar78 = *(float *)((long)local_1ac8 + 0x34);
  fVar79 = *(float *)((long)local_1ac8 + 0x38);
  uVar80 = *(undefined4 *)((long)local_1ac8 + 0x3c);
  fVar65 = *(float *)((long)local_1ac8 + 0x40);
  fVar69 = *(float *)((long)local_1ac8 + 0x44);
  fVar71 = *(float *)((long)local_1ac8 + 0x48);
  uVar74 = *(undefined4 *)((long)local_1ac8 + 0x4c);
  lVar34 = *(long *)((long)local_1ac8 + 0x80);
  fVar58 = *(float *)((long)local_1ac8 + 0x98);
  fVar64 = *(float *)((long)local_1ac8 + 0x9c);
LAB_00121b77:
  pSVar48 = *(SetMB **)((long)local_1ac8 + 0xa0);
  local_1af8 = local_15d8;
  local_1ae8 = local_1698;
  pSStack_1ae0 = pSStack_1690;
  local_1ad8._0_4_ = (float)local_1650;
  uStack_1a9c = _LC10;
  fStack_1aac = _LC8;
  param_3 = (long *)local_1ac8;
  fVar99 = (float)local_16d8;
  uStack_1a34 = local_16d8._4_4_;
  uStack_1a30 = (undefined4)uStack_16d0;
  uStack_1a2c = uStack_16d0._4_4_;
  fVar85 = local_1650._4_4_;
  fVar83 = local_15b0._4_4_;
  fVar15 = (float)local_15b0;
  goto LAB_0011de7c;
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,
   embree::sse2::RecalculatePrimRef<embree::TriangleMesh>, embree::FastAllocator::CachedAllocator,
   embree::BVHN<4>::CreateAlloc, embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>::Set, embree::sse2::CreateMSMBlurLeaf<4,
   embree::TriangleMesh, embree::TriangleMvMB<4> >,
   embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_30;
  
  uVar4 = *(ulong *)(this + 8);
  uVar3 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar4 - uVar3) {
    uVar4 = uVar4 + uVar3 >> 1;
    spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar3,uVar4,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    spawn<unsigned_long,embree::sse2::BVHBuilderMSMBlur::BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>::recurse(embree::sse2::BVHBuilderMSMBlur::BuildRecord_const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar4,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    if (uVar3 < uVar4) {
      lVar5 = uVar3 * 0xb0;
      do {
        lVar2 = *(long *)(this + 0x28) + lVar5;
        lVar5 = lVar5 + 0xb0;
        sse2::BVHBuilderMSMBlur::
        BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
        ::recurse(local_98,*(undefined8 *)(this + 0x30),lVar2,1);
        puVar1 = (undefined8 *)(uVar3 * 0x60 + *(long *)(this + 0x20));
        uVar3 = uVar3 + 1;
        *puVar1 = local_98[0];
        puVar1[2] = local_88;
        puVar1[3] = uStack_80;
        puVar1[4] = local_78;
        puVar1[5] = uStack_70;
        puVar1[10] = local_48;
        puVar1[6] = local_68;
        puVar1[7] = uStack_60;
        puVar1[8] = local_58;
        puVar1[9] = uStack_50;
      } while (uVar3 < uVar4);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMvMB<4>
   >::buildMultiSegment(unsigned long) */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>>::buildMultiSegment
          (BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>> *this,ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  double dVar7;
  undefined8 *local_348;
  bool local_340 [8];
  ulong local_338;
  ulong local_330;
  void *local_328;
  undefined8 auStack_318 [2];
  undefined1 auStack_308 [80];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 uStack_288;
  ulong uStack_280;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_248;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 auStack_f8 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  long local_40;
  
  lVar6 = *(long *)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_340[0] = false;
  local_338 = 0;
  local_348 = *(undefined8 **)(lVar6 + 0x188);
  local_330 = 0;
  local_328 = (void *)0x0;
  if (local_348 != (undefined8 *)0x0) {
    local_348 = local_348 + 0xa9;
  }
  if (param_1 != 0) {
    uVar4 = param_1 * 0x50;
    (**(code **)*local_348)(local_348,uVar4,0);
    if (uVar4 < 0x1c00000) {
      local_328 = (void *)embree::alignedMalloc(uVar4,0x10);
    }
    else {
      local_328 = (void *)embree::os_malloc(uVar4,local_340);
    }
    lVar6 = *(long *)(this + 0x18);
    local_330 = param_1;
  }
  local_338 = local_330;
  embree::sse2::createPrimRefArrayMSMBlur
            (0x3f80000000000000,&local_228,lVar6,*(undefined8 *)(this + 0x40),param_1,&local_348,
             *(long *)(*(long *)(this + 0x10) + 0x68) + 600);
  if (local_1c8 == local_1c0) {
    (**(code **)(**(long **)(this + 0x10) + 0x28))();
    uVar4 = local_330;
  }
  else {
    dVar7 = (double)(local_1b8 + 3U >> 2) * __LC45 * __LC55;
    if (__LC47 <= dVar7) {
      uVar4 = (long)(dVar7 - __LC47) ^ 0x8000000000000000;
    }
    else {
      uVar4 = (ulong)dVar7;
    }
    uVar4 = uVar4 + ((ulong)(local_1b8 * 0xe0) >> 4);
    FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar4);
    uStack_298 = *(ulong *)(this + 0x38);
    uStack_28c = *(undefined4 *)(this + 0x28);
    lStack_248 = *(long *)(this + 0x10);
    lStack_2a8 = 0x3f;
    if (*(ulong *)(this + 0x20) != 0) {
      for (; *(ulong *)(this + 0x20) >> lStack_2a8 == 0; lStack_2a8 = lStack_2a8 + -1) {
      }
    }
    uVar5 = *(ulong *)(this + 0x30);
    if (uStack_298 <= *(ulong *)(this + 0x30)) {
      uVar5 = uStack_298;
    }
    if ((local_1c0 - local_1c8 == 0) || (uVar4 == 0)) {
      uStack_280 = 0x400;
    }
    else {
      bVar1 = *(byte *)(lStack_248 + 0x182);
      uVar2 = embree::TaskScheduler::threadCount();
      lVar6 = (2 - (ulong)bVar1) * *(long *)(lStack_248 + 0x88);
      uVar3 = lVar6 * 0x14;
      if (((uVar4 - 1) + uVar3) / uVar3 < uVar2) {
        uVar3 = lVar6 * 0x50;
        if ((long)uVar3 < 0) {
          dVar7 = (double)(uVar3 >> 1) + (double)(uVar3 >> 1);
        }
        else {
          dVar7 = (double)(long)uVar3;
        }
        dVar7 = dVar7 / ((double)uVar4 / (double)(ulong)(local_1c0 - local_1c8));
        if ((double)((ulong)dVar7 & _LC51) < _LC48) {
          dVar7 = (double)((ulong)((double)(long)dVar7 +
                                  (double)(-(ulong)((double)(long)dVar7 < dVar7) & _LC50)) |
                          ~_LC51 & (ulong)dVar7);
        }
        if (__LC47 <= dVar7) {
          uStack_280 = (long)(dVar7 - __LC47) ^ 0x8000000000000000;
        }
        else {
          uStack_280 = (ulong)dVar7;
        }
        lStack_248 = *(long *)(this + 0x10);
      }
      else {
        lStack_248 = *(long *)(this + 0x10);
        uStack_280 = 0x400;
      }
    }
    lStack_268 = *(long *)(this + 0x18);
    lStack_258 = lStack_248 + 0x78;
    uStack_238 = *(undefined8 *)(*(long *)(lStack_248 + 0x68) + 0x260);
    lStack_270 = *(long *)(lStack_268 + 0x188);
    if (lStack_270 != 0) {
      lStack_270 = lStack_270 + 0x548;
    }
    ppuStack_240 = &PTR_operator___00124780;
    uStack_118 = uStack_1a8;
    uStack_110 = uStack_1a0;
    uStack_e8 = local_228;
    uStack_e0 = uStack_220;
    uStack_d8 = uStack_218;
    uStack_d0 = uStack_210;
    uStack_2b8 = 4;
    uStack_2b0 = 0x50;
    uStack_290 = 0x3f800000;
    uStack_288 = 1;
    auStack_f8[0] = 1;
    lStack_78 = local_1b8;
    uStack_68 = uStack_1a8;
    uStack_60 = uStack_1a0;
    uStack_70 = uStack_1b0;
    uStack_b8 = uStack_1f8;
    uStack_b4 = uStack_1f4;
    uStack_b0 = uStack_1f0;
    uStack_ac = uStack_1ec;
    uStack_a8 = uStack_1e8;
    uStack_a4 = uStack_1e4;
    uStack_a0 = uStack_1e0;
    uStack_9c = uStack_1dc;
    uStack_98 = uStack_1d8;
    uStack_94 = uStack_1d4;
    uStack_90 = uStack_1d0;
    uStack_8c = uStack_1cc;
    uStack_c8 = uStack_208;
    uStack_c0 = uStack_200;
    uStack_2a0 = uVar5;
    lStack_260 = lStack_268;
    ppuStack_58 = &local_348;
    BVHBuilderMSMBlur::
    BuilderT<embree::NodeRefPtr<4>,embree::sse2::RecalculatePrimRef<embree::TriangleMesh>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>,4>::Set,embree::sse2::CreateMSMBlurLeaf<4,embree::TriangleMesh,embree::TriangleMvMB<4>>,embree::Scene::BuildProgressMonitorInterface>
    ::recurse(auStack_318,&uStack_2b8,auStack_f8,1,lStack_268,uStack_280,0,0,0);
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),auStack_318[0],auStack_308,local_1b8);
    uVar4 = local_330;
  }
  local_330 = uVar4;
  if (local_328 != (void *)0x0) {
    if (uVar4 * 0x50 < 0x1c00000) {
      embree::alignedFree(local_328);
    }
    else {
      embree::os_free(local_328,uVar4 * 0x50,local_340[0]);
    }
  }
  if (uVar4 != 0) {
    (**(code **)*local_348)(local_348,uVar4 * -0x50,1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMvMB<4> >::build() */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>>::build
          (BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>> *this)

{
  ulong uVar1;
  string *psVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  double dVar13;
  long *local_a8 [2];
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  long *local_68;
  long local_60;
  long local_58 [5];
  ulong uVar8;
  
  uVar10 = 0;
  lVar11 = *(long *)(this + 0x18);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ulong *)(this + 0x40);
  if ((uVar1 & 0x100000) != 0) {
    uVar10 = *(ulong *)(lVar11 + 0x290);
  }
  if ((uVar1 & 0x200000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2a0);
  }
  if ((uVar1 & 0xf) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2c0);
  }
  if ((uVar1 & 0x77770) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2b0);
  }
  if ((uVar1 & 0xe000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x340);
  }
  if ((uVar1 & 0x800000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2d0);
  }
  if ((uVar1 & 0x20000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2e0);
  }
  if ((uVar1 & 0x40000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x2f0);
  }
  if ((uVar1 & 0x80000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x300);
  }
  if ((uVar1 & 0x1000000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 0x310);
  }
  if ((uVar1 & 0x400000) != 0) {
    uVar10 = uVar10 + *(long *)(lVar11 + 800);
  }
  psVar2 = *(string **)(this + 0x10);
  if (uVar10 == 0) {
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001226f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)psVar2 + 0x28))(psVar2);
      return;
    }
  }
  else {
    local_a8[0] = local_98;
    std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
    *(undefined1 *)local_a8[0] = 0x34;
    plVar4 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x1191d7);
    plVar5 = plVar4 + 2;
    if ((long *)*plVar4 == plVar5) {
      uVar1 = plVar4[1] + 1;
      plVar9 = plVar5;
      plVar12 = local_78;
      if (7 < (uint)uVar1) {
        uVar7 = 0;
        do {
          uVar6 = (int)uVar7 + 8;
          uVar8 = (ulong)uVar6;
          *(undefined8 *)((long)local_78 + uVar7) = *(undefined8 *)((long)plVar5 + uVar7);
          uVar7 = uVar8;
        } while (uVar6 < ((uint)uVar1 & 0xfffffff8));
        plVar12 = (long *)((long)local_78 + uVar8);
        plVar9 = (long *)(uVar8 + (long)plVar5);
      }
      lVar11 = 0;
      if ((uVar1 & 4) != 0) {
        *(int *)plVar12 = (int)*plVar9;
        lVar11 = 4;
      }
      if ((uVar1 & 2) != 0) {
        *(undefined2 *)((long)plVar12 + lVar11) = *(undefined2 *)((long)plVar9 + lVar11);
        lVar11 = lVar11 + 2;
      }
      local_88 = local_78;
      if ((uVar1 & 1) != 0) {
        *(undefined1 *)((long)plVar12 + lVar11) = *(undefined1 *)((long)plVar9 + lVar11);
      }
    }
    else {
      local_78[0] = plVar4[2];
      local_88 = (long *)*plVar4;
    }
    local_80 = plVar4[1];
    *plVar4 = (long)plVar5;
    plVar4[1] = 0;
    *(undefined1 *)(plVar4 + 2) = 0;
    if (0x3fffffffffffffffU - local_80 < 0xf) {
      std::__throw_length_error("basic_string::append");
    }
    else {
      plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x1191f6);
      plVar5 = plVar4 + 2;
      if ((long *)*plVar4 == plVar5) {
        uVar1 = plVar4[1] + 1;
        plVar9 = plVar5;
        plVar12 = local_58;
        if (7 < (uint)uVar1) {
          uVar7 = 0;
          do {
            uVar6 = (int)uVar7 + 8;
            uVar8 = (ulong)uVar6;
            *(undefined8 *)((long)local_58 + uVar7) = *(undefined8 *)((long)plVar5 + uVar7);
            uVar7 = uVar8;
          } while (uVar6 < ((uint)uVar1 & 0xfffffff8));
          plVar12 = (long *)((long)local_58 + uVar8);
          plVar9 = (long *)(uVar8 + (long)plVar5);
        }
        lVar11 = 0;
        if ((uVar1 & 4) != 0) {
          *(int *)plVar12 = (int)*plVar9;
          lVar11 = 4;
        }
        if ((uVar1 & 2) != 0) {
          *(undefined2 *)((long)plVar12 + lVar11) = *(undefined2 *)((long)plVar9 + lVar11);
          lVar11 = lVar11 + 2;
        }
        local_68 = local_58;
        if ((uVar1 & 1) != 0) {
          *(undefined1 *)((long)plVar12 + lVar11) = *(undefined1 *)((long)plVar9 + lVar11);
        }
      }
      else {
        local_58[0] = plVar4[2];
        local_68 = (long *)*plVar4;
      }
      local_60 = plVar4[1];
      *plVar4 = (long)plVar5;
      plVar4[1] = 0;
      *(undefined1 *)(plVar4 + 2) = 0;
      dVar13 = (double)embree::BVHN<4>::preBuild(psVar2);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
      buildMultiSegment(this,uVar10);
      lVar11 = *(long *)(this + 0x10);
      plVar5 = (long *)(lVar11 + 0x130);
      plVar4 = (long *)(lVar11 + 0x170);
      do {
        while (*plVar5 != 0) {
          lVar3 = *(long *)(*plVar5 + 0x18);
          *(long *)(*plVar5 + 0x18) = *plVar4;
          LOCK();
          *plVar4 = *plVar5;
          UNLOCK();
          LOCK();
          *plVar5 = lVar3;
          UNLOCK();
        }
        LOCK();
        *plVar5 = 0;
        UNLOCK();
        plVar5 = plVar5 + 1;
      } while (plVar4 != plVar5);
      plVar5 = *(long **)(lVar11 + 0x1a8);
      plVar4 = *(long **)(lVar11 + 0x1b0);
      if (plVar5 != plVar4) {
        do {
          while( true ) {
            lVar3 = *plVar5;
            if (lVar11 + 0x78 != *(long *)(lVar3 + 8)) break;
            embree::MutexSys::lock();
            if (lVar11 + 0x78 == *(long *)(lVar3 + 8)) {
              LOCK();
              plVar12 = (long *)(*(long *)(lVar3 + 8) + 0x118);
              *plVar12 = *plVar12 + *(long *)(lVar3 + 0xa8) + *(long *)(lVar3 + 0x68);
              UNLOCK();
              LOCK();
              plVar12 = (long *)(*(long *)(lVar3 + 8) + 0x120);
              *plVar12 = *plVar12 +
                         (((*(long *)(lVar3 + 0x98) + *(long *)(lVar3 + 0x58)) -
                          *(long *)(lVar3 + 0x50)) - *(long *)(lVar3 + 0x90));
              UNLOCK();
              LOCK();
              plVar12 = (long *)(*(long *)(lVar3 + 8) + 0x128);
              *plVar12 = *plVar12 + *(long *)(lVar3 + 0xb0) + *(long *)(lVar3 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar3 + 0x48) = 0;
              *(undefined8 *)(lVar3 + 0x58) = 0;
              *(undefined8 *)(lVar3 + 0x50) = 0;
              *(undefined8 *)(lVar3 + 0x68) = 0;
              *(undefined8 *)(lVar3 + 0x70) = 0;
              *(undefined8 *)(lVar3 + 0x60) = 0;
              *(undefined8 *)(lVar3 + 0x88) = 0;
              *(undefined8 *)(lVar3 + 0x98) = 0;
              *(undefined8 *)(lVar3 + 0x90) = 0;
              *(undefined8 *)(lVar3 + 0xa8) = 0;
              *(undefined8 *)(lVar3 + 0xb0) = 0;
              *(undefined8 *)(lVar3 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar3 + 8) = 0;
              UNLOCK();
            }
            plVar5 = plVar5 + 1;
            embree::MutexSys::unlock();
            if (plVar4 == plVar5) goto LAB_001229ce;
          }
          plVar5 = plVar5 + 1;
        } while (plVar4 != plVar5);
LAB_001229ce:
        if (*(long *)(lVar11 + 0x1b0) != *(long *)(lVar11 + 0x1a8)) {
          *(long *)(lVar11 + 0x1b0) = *(long *)(lVar11 + 0x1a8);
        }
      }
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        embree::BVHN<4>::postBuild(dVar13);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::~BVHNBuilderMBlurSAH() */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>>::
~BVHNBuilderMBlurSAH(BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNBuilderMBlurSAH<4, embree::TriangleMesh, embree::TriangleMvMB<4>
   >::~BVHNBuilderMBlurSAH() */

void __thiscall
embree::sse2::BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>>::
~BVHNBuilderMBlurSAH(BVHNBuilderMBlurSAH<4,embree::TriangleMesh,embree::TriangleMvMB<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


