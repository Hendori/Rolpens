
/* void 
   embree::radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>(embree::sse2::BVHBuilderMorton::BuildPrim*,
   unsigned long, unsigned int) */

void embree::radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>
               (BuildPrim *param_1,ulong param_2,uint param_3)

{
  BuildPrim *pBVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulong uVar5;
  BuildPrim *pBVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  BuildPrim *pBVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  BuildPrim *pBVar15;
  ulong uVar16;
  uint *puVar17;
  long in_FS_OFFSET;
  uint local_c80 [256];
  uint local_880;
  undefined8 local_87c [127];
  int local_484;
  uint local_480 [270];
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  puVar17 = local_c80;
  puVar4 = puVar17;
  for (lVar7 = 0x80; lVar7 != 0; lVar7 = lVar7 + -1) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  pBVar10 = param_1;
  if (param_2 != 0) {
    do {
      uVar9 = *(uint *)pBVar10;
      pBVar10 = pBVar10 + 8;
      local_c80[uVar9 >> ((byte)param_3 & 0x1f) & 0xff] =
           local_c80[uVar9 >> ((byte)param_3 & 0x1f) & 0xff] + 1;
    } while (param_1 + param_2 * 8 != pBVar10);
  }
  uVar9 = 0;
  local_880 = 0;
  puVar4 = puVar17;
  puVar8 = (uint *)local_87c;
  while( true ) {
    uVar9 = uVar9 + *puVar4;
    puVar4 = puVar4 + 1;
    *puVar8 = uVar9;
    if (local_c80 + 0xff == puVar4) break;
    puVar8 = puVar8 + 1;
  }
  puVar4 = &local_880;
  puVar8 = (uint *)local_87c;
  puVar13 = local_480;
  for (lVar7 = 0x7f; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined8 *)puVar13 = *(undefined8 *)puVar8;
    puVar8 = puVar8 + 2;
    puVar13 = puVar13 + 2;
  }
  *puVar13 = *puVar8;
  uVar14 = 0;
  local_480[0xff] = local_c80[0xff] + local_484;
  uVar9 = 0;
  while( true ) {
    uVar2 = local_480[uVar14];
    while (uVar9 < uVar2) {
      uVar16 = *(ulong *)(param_1 + (ulong)uVar9 * 8);
      uVar9 = *(uint *)(param_1 + (ulong)uVar9 * 8);
      while( true ) {
        uVar11 = (ulong)uVar9;
        uVar5 = (ulong)(uVar9 >> ((byte)param_3 & 0x1f) & 0xff);
        if (uVar5 == uVar14) break;
        uVar9 = *(uint *)((long)local_87c + uVar5 * 4 + -4);
        uVar12 = uVar16 & 0xffffffff00000000;
        *(uint *)((long)local_87c + uVar5 * 4 + -4) = uVar9 + 1;
        pBVar10 = param_1 + (ulong)uVar9 * 8;
        uVar16 = *(ulong *)pBVar10;
        uVar9 = *(uint *)pBVar10;
        *(ulong *)pBVar10 = uVar12 | uVar11;
      }
      uVar9 = *puVar4 + 1;
      *(ulong *)(param_1 + (ulong)*puVar4 * 8) = uVar16 & 0xffffffff00000000 | uVar11;
      *puVar4 = uVar9;
    }
    uVar14 = uVar14 + 1;
    puVar4 = puVar4 + 1;
    if (uVar14 == 0x100) break;
    uVar9 = *puVar4;
  }
  lVar7 = 0;
  if (param_3 != 0) {
    do {
      while (uVar9 = *puVar17, uVar9 != 0) {
        uVar14 = (ulong)uVar9;
        pBVar10 = param_1 + lVar7 * 8;
        if (uVar9 < 0x10) {
          if (uVar14 != 1) {
            pBVar15 = pBVar10 + 8;
            uVar16 = 1;
LAB_001001f7:
            do {
              uVar3 = *(undefined8 *)pBVar15;
              uVar9 = *(uint *)pBVar15;
              pBVar6 = pBVar15;
              do {
                if (*(uint *)(pBVar6 + -8) <= uVar9) {
                  uVar16 = uVar16 + 1;
                  *(undefined8 *)pBVar6 = uVar3;
                  pBVar15 = pBVar15 + 8;
                  if (uVar16 == uVar14) goto LAB_001001b9;
                  goto LAB_001001f7;
                }
                pBVar1 = pBVar6 + -8;
                *(undefined8 *)pBVar6 = *(undefined8 *)(pBVar6 + -8);
                pBVar6 = pBVar1;
              } while (pBVar10 != pBVar1);
              uVar16 = uVar16 + 1;
              pBVar15 = pBVar15 + 8;
              *(undefined8 *)pBVar10 = uVar3;
            } while (uVar16 != uVar14);
          }
        }
        else {
          radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>(pBVar10,uVar14,param_3 - 8);
        }
LAB_001001b9:
        puVar17 = puVar17 + 1;
        lVar7 = lVar7 + uVar14;
        if (&local_880 == puVar17) goto LAB_001001c5;
      }
      puVar17 = puVar17 + 1;
    } while (&local_880 != puVar17);
  }
LAB_001001c5:
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*, long,
   embree::sse2::BVHBuilderMorton::BuildPrim,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::sse2::BVHBuilderMorton::BuildPrim*, long, long,
   embree::sse2::BVHBuilderMorton::BuildPrim, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)(param_3 - 1) / 2;
  lVar5 = param_2;
  if (param_2 < lVar6) {
    do {
      lVar2 = (lVar5 + 1) * 2;
      lVar4 = (lVar5 + 1) * 0x10;
      puVar3 = (uint *)(param_1 + lVar4);
      if (*puVar3 < *(uint *)(param_1 + -8 + lVar4)) {
        lVar2 = lVar2 + -1;
        puVar3 = (uint *)(param_1 + lVar2 * 8);
      }
      *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)puVar3;
      lVar5 = lVar2;
    } while (lVar2 < lVar6);
    if ((param_3 & 1) == 0) goto LAB_00100320;
  }
  else {
    puVar3 = (uint *)(param_1 + param_2 * 8);
    lVar2 = param_2;
    if ((param_3 & 1) != 0) goto LAB_00100302;
LAB_00100320:
    if ((long)(param_3 - 2) / 2 == lVar2) {
      lVar5 = lVar2 * 2;
      lVar2 = lVar5 + 1;
      *(undefined8 *)puVar3 = *(undefined8 *)(param_1 + -8 + (lVar5 + 2) * 8);
      puVar3 = (uint *)(param_1 + lVar2 * 8);
    }
  }
  lVar5 = (lVar2 + -1) - (lVar2 + -1 >> 0x3f);
  if (param_2 < lVar2) {
    while( true ) {
      lVar6 = lVar5 >> 1;
      puVar1 = (uint *)(param_1 + lVar6 * 8);
      puVar3 = (uint *)(param_1 + lVar2 * 8);
      if ((uint)param_4 <= *puVar1) break;
      *(undefined8 *)puVar3 = *(undefined8 *)puVar1;
      lVar5 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
      lVar2 = lVar6;
      if (lVar6 <= param_2) {
        *(undefined8 *)puVar1 = param_4;
        return;
      }
    }
  }
LAB_00100302:
  *(undefined8 *)puVar3 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::sse2::BVHBuilderMorton::BuildPrim*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, long, __gnu_cxx::__ops::_Iter_less_iter) [clone
   .isra.0] */

void std::
     __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (lVar6 < 0x81) {
    return;
  }
  puVar1 = param_1 + 2;
  puVar9 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = param_1[2];
      uVar3 = puVar9[-2];
      param_3 = param_3 + -1;
      puVar7 = param_1 + (lVar6 >> 4) * 2;
      uVar4 = *puVar7;
      puVar8 = puVar9;
      param_2 = puVar1;
      if (uVar2 < uVar4) {
        if (uVar4 < uVar3) {
LAB_0010046e:
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar7 = uVar5;
        }
        else {
          if (uVar3 <= uVar2) goto LAB_001003c4;
LAB_00100433:
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)(puVar9 + -2);
          *(undefined8 *)(puVar9 + -2) = uVar5;
        }
      }
      else {
        if (uVar3 <= uVar2) {
          if (uVar4 < uVar3) goto LAB_00100433;
          goto LAB_0010046e;
        }
LAB_001003c4:
        uVar5 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar5;
      }
      while( true ) {
        uVar2 = *param_2;
        while (uVar2 < *param_1) {
          param_2 = param_2 + 2;
          uVar2 = *param_2;
        }
        puVar7 = puVar8 + -2;
        uVar2 = puVar8[-2];
        while (*param_1 < uVar2) {
          puVar7 = puVar7 + -2;
          uVar2 = *puVar7;
        }
        if (puVar7 <= param_2) break;
        uVar5 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = *(undefined8 *)puVar7;
        *(undefined8 *)puVar7 = uVar5;
        puVar8 = puVar7;
        param_2 = param_2 + 2;
      }
      __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (param_2,puVar9,param_3);
      lVar6 = (long)param_2 - (long)param_1;
      if (lVar6 < 0x81) {
        return;
      }
      puVar9 = param_2;
    } while (param_3 != 0);
  }
  for (lVar10 = (lVar6 >> 3) + -2 >> 1;
      __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,lVar10,lVar6 >> 3,*(undefined8 *)(param_1 + lVar10 * 2)), lVar10 != 0;
      lVar10 = lVar10 + -1) {
  }
  do {
    param_2 = param_2 + -2;
    uVar5 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_less_iter>
              (param_1,0,(long)param_2 - (long)param_1 >> 3,uVar5);
  } while (8 < (long)param_2 - (long)param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::sse2::BVHBuilderMorton::BuildPrim*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
               (uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  size_t __n;
  uint *puVar6;
  uint *puVar7;
  
  if (param_1 == param_2) {
    return;
  }
  puVar6 = param_1 + 2;
  do {
    if (param_2 == puVar6) {
      return;
    }
    while( true ) {
      uVar2 = *puVar6;
      puVar7 = puVar6 + 2;
      if (uVar2 < *param_1) break;
      uVar3 = *(undefined8 *)puVar6;
      uVar1 = puVar6[-2];
      puVar5 = puVar6 + -2;
      while (puVar4 = puVar5, uVar2 < uVar1) {
        *(undefined8 *)(puVar4 + 2) = *(undefined8 *)puVar4;
        puVar5 = puVar4 + -2;
        puVar6 = puVar4;
        uVar1 = puVar4[-2];
      }
      *(undefined8 *)puVar6 = uVar3;
      puVar6 = puVar7;
      if (param_2 == puVar7) {
        return;
      }
    }
    uVar3 = *(undefined8 *)puVar6;
    __n = (long)puVar6 - (long)param_1;
    if ((long)__n < 9) {
      if (__n == 8) {
        *(undefined8 *)puVar6 = *(undefined8 *)param_1;
      }
    }
    else {
      memmove((void *)((long)puVar6 + (8 - __n)),param_1,__n);
    }
    *(undefined8 *)param_1 = uVar3;
    puVar6 = puVar7;
  } while( true );
}



/* embree::sse2::BVH4Triangle4MeshBuilderMortonGeneral(void*, embree::TriangleMesh*, unsigned int,
   unsigned long) */

void embree::sse2::BVH4Triangle4MeshBuilderMortonGeneral
               (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  lVar2 = *(long *)((long)param_1 + 0x60);
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNMeshBuilderMorton_001119b8;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = lVar2;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 4;
  puVar1[10] = 0x20;
  puVar1[0xb] = 4;
  puVar1[0xc] = 4;
  puVar1[0xd] = 0x400;
  *(uint *)(puVar1 + 0xe) = param_3;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  return;
}



/* embree::sse2::BVH4Triangle4vMeshBuilderMortonGeneral(void*, embree::TriangleMesh*, unsigned int,
   unsigned long) */

void embree::sse2::BVH4Triangle4vMeshBuilderMortonGeneral
               (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  lVar2 = *(long *)((long)param_1 + 0x60);
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNMeshBuilderMorton_00111a00;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = lVar2;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 4;
  puVar1[10] = 0x20;
  puVar1[0xb] = 4;
  puVar1[0xc] = 4;
  puVar1[0xd] = 0x400;
  *(uint *)(puVar1 + 0xe) = param_3;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  return;
}



/* embree::sse2::BVH4Triangle4iMeshBuilderMortonGeneral(void*, embree::TriangleMesh*, unsigned int,
   unsigned long) */

void embree::sse2::BVH4Triangle4iMeshBuilderMortonGeneral
               (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  lVar2 = *(long *)((long)param_1 + 0x60);
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNMeshBuilderMorton_00111a48;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = lVar2;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 4;
  puVar1[10] = 0x20;
  puVar1[0xb] = 4;
  puVar1[0xc] = 4;
  puVar1[0xd] = 0x400;
  *(uint *)(puVar1 + 0xe) = param_3;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  return;
}



/* void embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void __thiscall
embree::TaskScheduler::
spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
          (TaskScheduler *this,uint param_1,uint param_2,uint param_3,
          _lambda_embree__range<unsigned_int>_const___2_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this_00;
  undefined4 in_register_0000000c;
  uint uVar8;
  long in_FS_OFFSET;
  uint local_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  _lambda_embree__range<unsigned_int>_const___2_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_38 = CONCAT44(in_register_0000000c,param_3);
  iStack_44 = (int)this;
  uVar8 = param_1 - iStack_44;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  uStack_40 = param_2;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this_00,(_lambda___1_ *)&local_48,param_5,(ulong)uVar8,true);
LAB_001008bc:
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
      *puVar3 = &PTR_execute_00111658;
      puVar3[1] = CONCAT44(iStack_44,local_48);
      puVar3[2] = CONCAT44(uStack_3c,uStack_40);
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
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
      *(ulong *)(lVar7 + 0x70) = (ulong)uVar8;
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
      goto LAB_001008bc;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void __thiscall
embree::TaskScheduler::
spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
          (TaskScheduler *this,uint param_1,uint param_2,uint param_3,
          _lambda_embree__range<unsigned_int>_const___2_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this_00;
  undefined4 in_register_0000000c;
  uint uVar8;
  long in_FS_OFFSET;
  uint local_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  _lambda_embree__range<unsigned_int>_const___2_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_38 = CONCAT44(in_register_0000000c,param_3);
  iStack_44 = (int)this;
  uVar8 = param_1 - iStack_44;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  uStack_40 = param_2;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this_00,(_lambda___1_ *)&local_48,param_5,(ulong)uVar8,true);
LAB_00100a4c:
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
      *puVar3 = &PTR_execute_00111670;
      puVar3[1] = CONCAT44(iStack_44,local_48);
      puVar3[2] = CONCAT44(uStack_3c,uStack_40);
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
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
      *(ulong *)(lVar7 + 0x70) = (ulong)uVar8;
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
      goto LAB_00100a4c;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void __thiscall
embree::TaskScheduler::
spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
          (TaskScheduler *this,uint param_1,uint param_2,uint param_3,
          _lambda_embree__range<unsigned_int>_const___2_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this_00;
  undefined4 in_register_0000000c;
  uint uVar8;
  long in_FS_OFFSET;
  uint local_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  _lambda_embree__range<unsigned_int>_const___2_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_38 = CONCAT44(in_register_0000000c,param_3);
  iStack_44 = (int)this;
  uVar8 = param_1 - iStack_44;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  uStack_40 = param_2;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this_00,(_lambda___1_ *)&local_48,param_5,(ulong)uVar8,true);
LAB_00100bdc:
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
      *puVar3 = &PTR_execute_00111688;
      puVar3[1] = CONCAT44(iStack_44,local_48);
      puVar3[2] = CONCAT44(uStack_3c,uStack_40);
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
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
      *(ulong *)(lVar7 + 0x70) = (ulong)uVar8;
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
      goto LAB_00100bdc;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
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
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_48,param_5,param_2 - param_1,true);
LAB_001011ec:
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
      *puVar3 = &PTR_execute_001116e8;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
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
      goto LAB_001011ec;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
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
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_48,param_5,param_2 - param_1,true);
LAB_0010137c:
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
      *puVar3 = &PTR_execute_00111700;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
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
      goto LAB_0010137c;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Builder::deleteGeometry(unsigned long) */

void embree::Builder::deleteGeometry(ulong param_1)

{
  return;
}



/* bool embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::compare<embree::sse2::BVHBuilderMorton::BuildPrim>(embree::sse2::BVHBuilderMorton::BuildPrim
   const&, embree::sse2::BVHBuilderMorton::BuildPrim const&) */

bool embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
     compare<embree::sse2::BVHBuilderMorton::BuildPrim>(BuildPrim *param_1,BuildPrim *param_2)

{
  return *(uint *)param_1 < *(uint *)param_2;
}



/* embree::BBox<embree::Vec3fa>::merge(embree::BBox<embree::Vec3fa> const&,
   embree::BBox<embree::Vec3fa> const&) */

BBox<embree::Vec3fa> * __thiscall
embree::BBox<embree::Vec3fa>::merge(BBox<embree::Vec3fa> *this,BBox *param_1,BBox *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = maxps(*(undefined1 (*) [16])(param_1 + 0x10),*(undefined1 (*) [16])(param_2 + 0x10));
  auVar2 = minps(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_2);
  *(undefined1 (*) [16])(this + 0x10) = auVar1;
  *(undefined1 (*) [16])this = auVar2;
  return this;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4> >::clear() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::clear
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4> >::clear() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::clear
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_00111a48;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_00111a00;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_001119b8;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4> >::clear() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::clear
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00101799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration1(unsigned int, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long, unsigned long) [clone .isra.0] */

void embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
     tbbRadixIteration1(uint param_1,BuildPrim *param_2,BuildPrim *param_3,ulong param_4,
                       ulong param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 in_register_0000003c;
  int *piVar14;
  long in_R9;
  long in_FS_OFFSET;
  ulong in_stack_00000008;
  uint local_880 [526];
  long local_48;
  
  piVar13 = (int *)CONCAT44(in_register_0000003c,param_1);
  puVar8 = local_880;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (ulong)(in_R9 * (long)param_2) / in_stack_00000008;
  puVar9 = local_880;
  for (lVar10 = 0x80; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined8 *)puVar9 = 0;
    puVar9 = (uint *)((long)puVar9 + 8);
  }
  if (in_stack_00000008 != 0) {
    puVar9 = local_880;
    piVar12 = piVar13;
    piVar14 = piVar13;
    do {
      do {
        iVar2 = piVar12[1];
        iVar3 = piVar12[2];
        iVar4 = piVar12[3];
        puVar7 = puVar9 + 4;
        *puVar9 = *puVar9 + *piVar12;
        puVar9[1] = puVar9[1] + iVar2;
        puVar9[2] = puVar9[2] + iVar3;
        puVar9[3] = puVar9[3] + iVar4;
        puVar9 = puVar7;
        piVar12 = piVar12 + 4;
      } while (local_880 + 0x100 != puVar7);
      piVar12 = piVar14 + 0x100;
      puVar9 = local_880;
      piVar14 = piVar12;
    } while (piVar13 + in_stack_00000008 * 0x100 != piVar12);
  }
  local_880[0x100] = 0;
  uVar11 = 0;
  puVar9 = local_880 + 0x101;
  while( true ) {
    uVar11 = uVar11 + *puVar8;
    puVar8 = puVar8 + 1;
    *puVar9 = uVar11;
    if (local_880 + 0xff == puVar8) break;
    puVar9 = puVar9 + 1;
  }
  if (in_R9 != 0) {
    piVar14 = piVar13 + in_R9 * 0x100;
    puVar9 = local_880 + 0x100;
    piVar12 = piVar13;
    do {
      do {
        iVar2 = *piVar13;
        iVar3 = piVar13[1];
        iVar4 = piVar13[2];
        iVar5 = piVar13[3];
        puVar8 = puVar9 + 4;
        piVar13 = piVar13 + 4;
        *puVar9 = *puVar9 + iVar2;
        puVar9[1] = puVar9[1] + iVar3;
        puVar9[2] = puVar9[2] + iVar4;
        puVar9[3] = puVar9[3] + iVar5;
        puVar9 = puVar8;
      } while (local_880 + 0x200 != puVar8);
      piVar13 = piVar12 + 0x100;
      puVar9 = local_880 + 0x100;
      piVar12 = piVar13;
    } while (piVar14 != piVar13);
  }
  if (uVar6 < (ulong)(param_2 + in_R9 * (long)param_2) / in_stack_00000008) {
    puVar9 = (uint *)(param_4 + uVar6 * 8);
    do {
      uVar11 = *puVar9;
      uVar1 = *(undefined8 *)puVar9;
      puVar9 = puVar9 + 2;
      uVar6 = (ulong)(byte)(uVar11 >> ((byte)param_3 & 0x3f));
      uVar11 = local_880[uVar6 + 0x100];
      *(undefined8 *)(param_5 + (ulong)uVar11 * 8) = uVar1;
      local_880[uVar6 + 0x100] = uVar11 + 1;
    } while ((uint *)(param_4 + ((ulong)(param_2 + in_R9 * (long)param_2) / in_stack_00000008) * 8)
             != puVar9);
  }
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_00111a48;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  operator_delete(this,0x78);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_001119b8;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  operator_delete(this,0x78);
  return;
}



/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNMeshBuilderMorton_00111a00;
  lVar1 = *(long *)(this + 0x38);
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 * 8) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 * 8,(bool)this[0x28]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar1 * -8,1);
  }
  operator_delete(this,0x78);
  return;
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
      if (lVar5 == 0) goto LAB_00101c07;
    }
    *plVar8 = *(undefined8 *)(lVar5 + 0x18);
  }
LAB_00101c07:
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
        if (plVar3 == plVar8) goto LAB_00101d58;
      }
      plVar8 = plVar8 + 1;
    } while (plVar3 != plVar8);
LAB_00101d58:
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
      goto LAB_00101e40;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_6 != 0) goto LAB_00101e40;
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
      goto LAB_00101e40;
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
LAB_00101e40:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar1;
}



/* embree::FastAllocator::init(unsigned long, unsigned long, unsigned long) */

void __thiscall
embree::FastAllocator::init(FastAllocator *this,ulong param_1,ulong param_2,ulong param_3)

{
  FastAllocator *pFVar1;
  long lVar2;
  FastAllocator *pFVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
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
  *(undefined8 *)(this + 8) = 7;
  if ((*(long *)(this + 0xf8) != 0) || (*(long *)(this + 0x100) != 0)) {
    reset(this);
    return;
  }
  if (param_2 == 0) {
    param_2 = param_1;
  }
  uVar4 = Block::create(*(undefined8 *)this,this[0x108],param_1,param_2,0,
                        *(undefined4 *)(this + 0x148));
  LOCK();
  *(undefined8 *)(this + 0x100) = uVar4;
  UNLOCK();
  *(ulong *)(this + 0x18) = param_3;
  this[0x10a] = (FastAllocator)0x0;
  uVar7 = (param_3 >> 3) + 0x7f & 0xffffffffffffff80;
  uVar5 = 0x1fffc0;
  if (uVar7 < 0x1fffc1) {
    uVar5 = uVar7;
  }
  if (uVar5 < 0x400) {
    uVar5 = 0x400;
  }
  uVar6 = 3;
  *(ulong *)(this + 0x28) = uVar5;
  *(ulong *)(this + 0x20) = uVar5;
  if (param_3 <= uVar5 << 5) {
    uVar6 = (ulong)(uVar5 << 4 < param_3);
  }
  *(ulong *)(this + 8) = uVar6;
  if (uVar5 << 6 < param_3) {
    *(undefined8 *)(this + 8) = 7;
    if (uVar5 << 7 < param_3) {
LAB_001021b9:
      *(undefined8 *)(this + 0x10) = 0x1040;
      *(ulong *)(this + 0x20) = uVar5 * 2;
      goto LAB_0010211e;
    }
  }
  else {
    if (uVar5 << 7 < param_3) goto LAB_001021b9;
    if (0x1040 < uVar7) {
      uVar7 = 0x1040;
    }
    if (uVar7 < 0x400) {
      uVar7 = 0x400;
    }
    *(ulong *)(this + 0x10) = uVar7;
    if (param_3 != 0) goto LAB_0010211e;
    *(undefined8 *)(this + 0x28) = 0x1fffc0;
  }
  *(undefined8 *)(this + 0x10) = 0x1040;
LAB_0010211e:
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
          goto LAB_001022aa;
        }
      }
      else {
        LOCK();
        uVar6 = *puVar3;
        *puVar3 = *puVar3 + uVar4;
        UNLOCK();
        if ((uVar4 + uVar6 <= puVar3[2]) || (param_3)) {
LAB_001022aa:
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
LAB_001024ba:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_001024ba;
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
LAB_00102384:
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
          goto LAB_00102384;
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
    if (0xfffffffffffffffe < uVar1) goto LAB_001025c0;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_001025c0:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00102549;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00102549:
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



/* embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4>
   >::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned int> const&,
   embree::FastAllocator::CachedAllocator const&) [clone .isra.0] */

range * embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>::operator()
                  (range *param_1,CachedAllocator *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  FastAllocator *in_RCX;
  undefined8 *puVar13;
  uint *in_RDX;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long *in_R8;
  size_t __n;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong local_c0;
  undefined1 local_b8 [12];
  int iStack_ac;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  uint local_68 [10];
  long local_40;
  
  lVar6 = *in_R8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *in_RDX;
  local_c0 = 0x50;
  uVar15 = (ulong)(in_RDX[1] - uVar2);
  if (in_RCX != *(FastAllocator **)(lVar6 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar6 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar6 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(lVar6 + 0xa8) + *(long *)(lVar6 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar6 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(lVar6 + 0x98) + *(long *)(lVar6 + 0x58)) -
                           *(long *)(lVar6 + 0x50)) - *(long *)(lVar6 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar6 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(lVar6 + 0xb0) + *(long *)(lVar6 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    *(undefined8 *)(lVar6 + 0x68) = 0;
    *(undefined8 *)(lVar6 + 0x70) = 0;
    *(undefined8 *)(lVar6 + 0x60) = 0;
    if (in_RCX == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar6 + 0x88) = 0;
      uVar12 = 0;
      *(undefined8 *)(lVar6 + 0x98) = 0;
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      *(undefined8 *)(lVar6 + 0xb0) = 0;
    }
    else {
      uVar12 = *(undefined8 *)(in_RCX + 0x10);
      *(undefined8 *)(lVar6 + 0x88) = 0;
      *(undefined8 *)(lVar6 + 0x98) = 0;
      *(undefined8 *)(lVar6 + 0x60) = uVar12;
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      *(undefined8 *)(lVar6 + 0xa0) = 0;
      uVar12 = *(undefined8 *)(in_RCX + 0x10);
    }
    *(undefined8 *)(lVar6 + 0xa0) = uVar12;
    LOCK();
    *(FastAllocator **)(lVar6 + 8) = in_RCX;
    UNLOCK();
    local_b8._0_8_ = lVar6;
    embree::MutexSys::lock();
    plVar1 = *(long **)(in_RCX + 0x138);
    if (plVar1 == *(long **)(in_RCX + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(in_RCX + 0x130),plVar1,local_b8);
    }
    else {
      *plVar1 = lVar6;
      *(long *)(in_RCX + 0x138) = *(long *)(in_RCX + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar10 = local_c0;
  lVar6 = in_R8[2];
  in_R8[5] = in_R8[5] + local_c0;
  uVar11 = (ulong)(-(int)lVar6 & 0xf);
  uVar16 = local_c0 + lVar6 + uVar11;
  in_R8[2] = uVar16;
  if ((ulong)in_R8[3] < uVar16) {
    in_R8[2] = lVar6;
    if ((ulong)in_R8[4] < local_c0 * 4) {
      puVar13 = (undefined8 *)FastAllocator::malloc(in_RCX,&local_c0,0x40,false);
    }
    else {
      local_b8._0_8_ = in_R8[4];
      puVar13 = (undefined8 *)FastAllocator::malloc(in_RCX,(ulong *)local_b8,0x40,true);
      in_R8[1] = (long)puVar13;
      lVar6 = in_R8[2];
      in_R8[2] = uVar10;
      in_R8[6] = (in_R8[3] + in_R8[6]) - lVar6;
      in_R8[3] = local_b8._0_8_;
      if ((ulong)local_b8._0_8_ < uVar10) {
        in_R8[2] = 0;
        local_b8._0_8_ = in_R8[4];
        puVar13 = (undefined8 *)FastAllocator::malloc(in_RCX,(ulong *)local_b8,0x40,false);
        in_R8[1] = (long)puVar13;
        lVar6 = in_R8[2];
        in_R8[2] = uVar10;
        in_R8[6] = (in_R8[3] + in_R8[6]) - lVar6;
        in_R8[3] = local_b8._0_8_;
        if ((ulong)local_b8._0_8_ < uVar10) {
          puVar13 = (undefined8 *)0x0;
          in_R8[2] = 0;
        }
      }
    }
  }
  else {
    in_R8[6] = in_R8[6] + uVar11;
    puVar13 = (undefined8 *)(in_R8[1] + (uVar16 - local_c0));
  }
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  lVar6 = *(long *)param_2;
  local_78 = (undefined1  [16])0x0;
  local_68[0] = 0xffffffff;
  local_68[1] = 0xffffffff;
  local_68[2] = 0xffffffff;
  local_68[3] = 0xffffffff;
  local_68[4] = 0xffffffff;
  local_68[5] = 0xffffffff;
  local_68[6] = 0xffffffff;
  local_68[7] = 0xffffffff;
  if (uVar15 == 0) {
    auVar18._4_4_ = _LC2;
    auVar18._0_4_ = _LC2;
    auVar18._8_4_ = _LC2;
    auVar18._12_4_ = _LC2;
    auVar20._4_4_ = _LC4;
    auVar20._0_4_ = _LC4;
    auVar20._8_4_ = _LC4;
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x60);
    lVar8 = *(long *)(lVar6 + 0x58);
    lVar9 = *(long *)(lVar6 + 0x88);
    uVar10 = *(ulong *)(lVar6 + 0x90);
    uVar3 = *(uint *)(param_2 + 0x10);
    lVar6 = *(long *)(param_2 + 8);
    uVar17 = (uint)(uVar10 >> 2) & 0x3fffffff;
    auVar18._4_4_ = _LC2;
    auVar18._0_4_ = _LC2;
    auVar18._8_4_ = _LC2;
    auVar18._12_4_ = _LC2;
    auVar22._4_4_ = _LC4;
    auVar22._0_4_ = _LC4;
    auVar22._8_4_ = _LC4;
    auVar22._12_4_ = _LC4;
    uVar11 = 0;
    do {
      uVar4 = *(uint *)(lVar6 + (ulong)uVar2 * 8 + 4 + uVar11 * 8);
      local_68[uVar11 + 4] = uVar4;
      puVar14 = (uint *)((ulong)uVar4 * lVar7 + lVar8);
      uVar4 = *puVar14;
      uVar5 = puVar14[1];
      auVar19 = *(undefined1 (*) [16])(lVar9 + uVar4 * uVar10);
      auVar21 = minps(auVar22,auVar19);
      auVar19 = maxps(auVar18,auVar19);
      auVar18 = *(undefined1 (*) [16])(lVar9 + uVar5 * uVar10);
      auVar22 = *(undefined1 (*) [16])(lVar9 + puVar14[2] * uVar10);
      local_68[uVar11 - 4] = puVar14[2] * uVar17;
      local_68[uVar11] = uVar3;
      auVar23 = minps(auVar18,auVar22);
      auVar18 = maxps(auVar18,auVar22);
      *(uint *)(local_98 + uVar11 * 4) = uVar4 * uVar17;
      auVar22 = minps(auVar21,auVar23);
      auVar20 = auVar22._0_12_;
      auVar18 = maxps(auVar19,auVar18);
      *(uint *)(local_88 + uVar11 * 4) = uVar5 * uVar17;
      uVar11 = uVar11 + 1;
    } while (uVar15 != uVar11);
    if (uVar15 == 4) goto LAB_00102a2f;
  }
  local_68[uVar15] = local_68[0];
  uVar10 = uVar15;
  while (uVar10 = uVar10 + 1, uVar10 != 4) {
    local_68[uVar10] = local_68[0];
  }
  __n = (4 - uVar15) * 4;
  memset(local_68 + uVar15 + 4,0xff,__n);
  memset(local_98 + uVar15 * 4,0,__n);
  memset(local_88 + uVar15 * 4,0,__n);
  memset(local_68 + (uVar15 - 4),0,__n);
LAB_00102a2f:
  *puVar13 = local_98._0_8_;
  puVar13[1] = local_98._8_8_;
  puVar13[2] = local_88._0_8_;
  puVar13[3] = local_88._8_8_;
  puVar13[4] = local_78._0_8_;
  puVar13[5] = local_78._8_8_;
  puVar13[6] = CONCAT44(local_68[1],local_68[0]);
  puVar13[7] = CONCAT44(local_68[3],local_68[2]);
  puVar13[8] = CONCAT44(local_68[5],local_68[4]);
  puVar13[9] = CONCAT44(local_68[7],local_68[6]);
  iStack_ac = in_RDX[1] - *in_RDX;
  local_b8 = auVar20;
  auVar22 = _local_b8;
  local_b8._0_8_ = auVar20._0_8_;
  stack0xffffffffffffff50 = auVar22._8_8_;
  *(ulong *)param_1 = (ulong)puVar13 | 9;
  *(undefined8 *)(param_1 + 0x10) = local_b8._0_8_;
  *(undefined8 *)(param_1 + 0x18) = stack0xffffffffffffff50;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar18;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
  _local_b8 = auVar22;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4>
   >::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned int> const&,
   embree::FastAllocator::CachedAllocator const&) [clone .isra.0] */

range * embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>::operator()
                  (range *param_1,CachedAllocator *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  FastAllocator *in_RCX;
  ulong uVar15;
  undefined4 *puVar16;
  uint *in_RDX;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  long *in_R8;
  undefined4 *puVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong local_120;
  undefined1 local_118 [12];
  int iStack_10c;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  lVar8 = *in_R8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *in_RDX;
  local_120 = 0xb0;
  uVar22 = (ulong)(in_RDX[1] - uVar4);
  if (in_RCX != *(FastAllocator **)(lVar8 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar8 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(lVar8 + 0xa8) + *(long *)(lVar8 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(lVar8 + 0x98) + *(long *)(lVar8 + 0x58)) -
                           *(long *)(lVar8 + 0x50)) - *(long *)(lVar8 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(lVar8 + 0xb0) + *(long *)(lVar8 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    if (in_RCX == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar8 + 0x88) = 0;
      uVar18 = 0;
      *(undefined8 *)(lVar8 + 0x98) = 0;
      *(undefined8 *)(lVar8 + 0x90) = 0;
      *(undefined8 *)(lVar8 + 0xa8) = 0;
      *(undefined8 *)(lVar8 + 0xb0) = 0;
    }
    else {
      uVar18 = *(undefined8 *)(in_RCX + 0x10);
      *(undefined8 *)(lVar8 + 0x88) = 0;
      *(undefined8 *)(lVar8 + 0x98) = 0;
      *(undefined8 *)(lVar8 + 0x60) = uVar18;
      *(undefined8 *)(lVar8 + 0x90) = 0;
      *(undefined8 *)(lVar8 + 0xa8) = 0;
      *(undefined8 *)(lVar8 + 0xb0) = 0;
      *(undefined8 *)(lVar8 + 0xa0) = 0;
      uVar18 = *(undefined8 *)(in_RCX + 0x10);
    }
    *(undefined8 *)(lVar8 + 0xa0) = uVar18;
    LOCK();
    *(FastAllocator **)(lVar8 + 8) = in_RCX;
    UNLOCK();
    local_118._0_8_ = lVar8;
    embree::MutexSys::lock();
    plVar1 = *(long **)(in_RCX + 0x138);
    if (plVar1 == *(long **)(in_RCX + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(in_RCX + 0x130),plVar1,local_118);
    }
    else {
      *plVar1 = lVar8;
      *(long *)(in_RCX + 0x138) = *(long *)(in_RCX + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar17 = local_120;
  lVar8 = in_R8[2];
  in_R8[5] = in_R8[5] + local_120;
  uVar13 = (ulong)(-(int)lVar8 & 0xf);
  uVar15 = local_120 + lVar8 + uVar13;
  in_R8[2] = uVar15;
  if ((ulong)in_R8[3] < uVar15) {
    in_R8[2] = lVar8;
    if ((ulong)in_R8[4] < local_120 * 4) {
      puVar16 = (undefined4 *)FastAllocator::malloc(in_RCX,&local_120,0x40,false);
    }
    else {
      local_118._0_8_ = in_R8[4];
      puVar16 = (undefined4 *)FastAllocator::malloc(in_RCX,(ulong *)local_118,0x40,true);
      in_R8[1] = (long)puVar16;
      lVar8 = in_R8[2];
      in_R8[2] = uVar17;
      in_R8[6] = (in_R8[3] + in_R8[6]) - lVar8;
      in_R8[3] = local_118._0_8_;
      if ((ulong)local_118._0_8_ < uVar17) {
        in_R8[2] = 0;
        local_118._0_8_ = in_R8[4];
        puVar16 = (undefined4 *)FastAllocator::malloc(in_RCX,(ulong *)local_118,0x40,false);
        in_R8[1] = (long)puVar16;
        lVar8 = in_R8[2];
        in_R8[2] = uVar17;
        in_R8[6] = (in_R8[3] + in_R8[6]) - lVar8;
        in_R8[3] = local_118._0_8_;
        if ((ulong)local_118._0_8_ < uVar17) {
          puVar16 = (undefined4 *)0x0;
          in_R8[2] = 0;
        }
      }
    }
  }
  else {
    in_R8[6] = in_R8[6] + uVar13;
    puVar16 = (undefined4 *)((uVar15 - local_120) + in_R8[1]);
  }
  local_f8._8_4_ = 0xffffffff;
  local_f8._0_8_ = 0xffffffffffffffff;
  local_f8._12_4_ = 0xffffffff;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_e8 = local_f8;
  if (uVar22 == 0) {
    local_58._0_8_ = 0;
    local_58._8_8_ = 0;
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    local_78._8_4_ = 0;
    auVar25._0_12_ = ZEXT812(0);
    local_78._12_4_ = 0;
    auVar25._12_4_ = 0;
    local_88._0_4_ = 0;
    local_a8._4_4_ = 0;
    auVar23._4_4_ = _LC2;
    auVar23._0_4_ = _LC2;
    auVar23._8_4_ = _LC2;
    auVar23._12_4_ = _LC2;
    local_118._4_4_ = _LC4;
    local_118._0_4_ = _LC4;
    local_118._8_4_ = _LC4;
    local_88._4_4_ = local_78._4_4_;
    local_88._8_4_ = local_78._8_4_;
    local_88._12_4_ = local_78._12_4_;
    local_98._0_4_ = local_88._0_4_;
    local_98._4_4_ = local_78._4_4_;
    local_98._8_4_ = local_78._8_4_;
    local_98._12_4_ = local_78._12_4_;
    local_a8._0_4_ = local_88._0_4_;
    local_a8._8_4_ = local_78._8_4_;
    local_a8._12_4_ = local_78._12_4_;
    local_b8._0_4_ = local_88._0_4_;
    local_b8._4_4_ = local_a8._4_4_;
    local_b8._8_4_ = local_78._8_4_;
    local_b8._12_4_ = local_78._12_4_;
    local_c8._0_4_ = local_88._0_4_;
    local_c8._4_4_ = local_a8._4_4_;
    local_c8._8_4_ = local_78._8_4_;
    local_c8._12_4_ = local_78._12_4_;
    local_d8._0_4_ = local_88._0_4_;
    local_d8._4_4_ = local_a8._4_4_;
    local_d8._8_4_ = local_78._8_4_;
    local_d8._12_4_ = local_78._12_4_;
  }
  else {
    lVar8 = *(long *)param_2;
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    lVar9 = *(long *)(lVar8 + 0x60);
    lVar10 = *(long *)(lVar8 + 0x58);
    lVar11 = *(long *)(lVar8 + 0x88);
    lVar8 = *(long *)(lVar8 + 0x90);
    auVar23._4_4_ = _LC2;
    auVar23._0_4_ = _LC2;
    auVar23._8_4_ = _LC2;
    auVar23._12_4_ = _LC2;
    lVar12 = *(long *)(param_2 + 8);
    uVar17 = 0;
    auVar24._4_4_ = _LC4;
    auVar24._0_4_ = _LC4;
    auVar24._8_4_ = _LC4;
    auVar24._12_4_ = _LC4;
    puVar19 = (undefined4 *)local_78;
    puVar20 = (undefined4 *)local_a8;
    puVar21 = (undefined4 *)local_d8;
    do {
      uVar6 = *(uint *)(lVar12 + (ulong)uVar4 * 8 + 4 + uVar17 * 8);
      *(uint *)(local_e8 + uVar17 * 4) = uVar6;
      puVar14 = (uint *)((ulong)uVar6 * lVar9 + lVar10);
      auVar25 = *(undefined1 (*) [16])(lVar11 + (ulong)*puVar14 * lVar8);
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      auVar26 = minps(auVar24,auVar25);
      *puVar21 = auVar25._0_4_;
      auVar23 = maxps(auVar23,auVar25);
      auVar2 = *(undefined1 (*) [16])(lVar11 + (ulong)uVar6 * lVar8);
      auVar3 = *(undefined1 (*) [16])(lVar11 + (ulong)uVar7 * lVar8);
      *puVar20 = auVar2._0_4_;
      auVar24 = minps(auVar2,auVar3);
      *puVar19 = auVar3._0_4_;
      *(undefined4 *)(local_f8 + uVar17 * 4) = uVar5;
      uVar17 = uVar17 + 1;
      auVar24 = minps(auVar26,auVar24);
      local_118 = auVar24._0_12_;
      auVar26 = maxps(auVar2,auVar3);
      auVar23 = maxps(auVar23,auVar26);
      puVar21[4] = auVar25._4_4_;
      puVar21[8] = auVar25._8_4_;
      puVar20[4] = auVar2._4_4_;
      puVar20[8] = auVar2._8_4_;
      puVar19[4] = auVar3._4_4_;
      puVar19[8] = auVar3._8_4_;
      puVar19 = puVar19 + 1;
      puVar20 = puVar20 + 1;
      puVar21 = puVar21 + 1;
    } while (uVar22 != uVar17);
    auVar25 = local_68;
  }
  puVar16[0x18] = local_78._0_4_;
  puVar16[0x19] = local_78._4_4_;
  puVar16[0x1a] = local_78._8_4_;
  puVar16[0x1b] = local_78._12_4_;
  *puVar16 = local_d8._0_4_;
  puVar16[1] = local_d8._4_4_;
  puVar16[2] = local_d8._8_4_;
  puVar16[3] = local_d8._12_4_;
  puVar16[4] = local_c8._0_4_;
  puVar16[5] = local_c8._4_4_;
  puVar16[6] = local_c8._8_4_;
  puVar16[7] = local_c8._12_4_;
  puVar16[8] = local_b8._0_4_;
  puVar16[9] = local_b8._4_4_;
  puVar16[10] = local_b8._8_4_;
  puVar16[0xb] = local_b8._12_4_;
  puVar16[0xc] = local_a8._0_4_;
  puVar16[0xd] = local_a8._4_4_;
  puVar16[0xe] = local_a8._8_4_;
  puVar16[0xf] = local_a8._12_4_;
  puVar16[0x10] = local_98._0_4_;
  puVar16[0x11] = local_98._4_4_;
  puVar16[0x12] = local_98._8_4_;
  puVar16[0x13] = local_98._12_4_;
  puVar16[0x14] = local_88._0_4_;
  puVar16[0x15] = local_88._4_4_;
  puVar16[0x16] = local_88._8_4_;
  puVar16[0x17] = local_88._12_4_;
  *(undefined1 (*) [16])(puVar16 + 0x1c) = auVar25;
  *(undefined8 *)(puVar16 + 0x20) = local_58._0_8_;
  *(undefined8 *)(puVar16 + 0x22) = local_58._8_8_;
  *(undefined1 (*) [16])(puVar16 + 0x24) = local_f8;
  *(undefined1 (*) [16])(puVar16 + 0x28) = local_e8;
  uVar4 = in_RDX[1];
  uVar6 = *in_RDX;
  *(ulong *)param_1 = (ulong)puVar16 | 9;
  iStack_10c = uVar4 - uVar6;
  auVar25 = _local_118;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar23;
  *(undefined4 *)(param_1 + 0x10) = local_118._0_4_;
  *(undefined4 *)(param_1 + 0x14) = local_118._4_4_;
  *(undefined4 *)(param_1 + 0x18) = local_118._8_4_;
  *(uint *)(param_1 + 0x1c) = uVar4 - uVar6;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
  _local_118 = auVar25;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4>
   >::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned int> const&,
   embree::FastAllocator::CachedAllocator const&) [clone .isra.0] */

range * embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>::operator()
                  (range *param_1,CachedAllocator *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  FastAllocator *in_RCX;
  ulong uVar15;
  float *pfVar16;
  uint *in_RDX;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  long *in_R8;
  undefined4 *puVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  undefined1 auVar37 [16];
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
  ulong local_120;
  undefined1 local_118 [12];
  int iStack_10c;
  float local_f8 [4];
  uint local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  lVar8 = *in_R8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *in_RDX;
  local_120 = 0xb0;
  uVar22 = (ulong)(in_RDX[1] - uVar5);
  if (in_RCX != *(FastAllocator **)(lVar8 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar8 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(lVar8 + 0xa8) + *(long *)(lVar8 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(lVar8 + 0x98) + *(long *)(lVar8 + 0x58)) -
                           *(long *)(lVar8 + 0x50)) - *(long *)(lVar8 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(lVar8 + 0xb0) + *(long *)(lVar8 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    if (in_RCX == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar8 + 0x88) = 0;
      uVar18 = 0;
      *(undefined8 *)(lVar8 + 0x98) = 0;
      *(undefined8 *)(lVar8 + 0x90) = 0;
      *(undefined8 *)(lVar8 + 0xa8) = 0;
      *(undefined8 *)(lVar8 + 0xb0) = 0;
    }
    else {
      uVar18 = *(undefined8 *)(in_RCX + 0x10);
      *(undefined8 *)(lVar8 + 0x88) = 0;
      *(undefined8 *)(lVar8 + 0x98) = 0;
      *(undefined8 *)(lVar8 + 0x60) = uVar18;
      *(undefined8 *)(lVar8 + 0x90) = 0;
      *(undefined8 *)(lVar8 + 0xa8) = 0;
      *(undefined8 *)(lVar8 + 0xb0) = 0;
      *(undefined8 *)(lVar8 + 0xa0) = 0;
      uVar18 = *(undefined8 *)(in_RCX + 0x10);
    }
    *(undefined8 *)(lVar8 + 0xa0) = uVar18;
    LOCK();
    *(FastAllocator **)(lVar8 + 8) = in_RCX;
    UNLOCK();
    local_118._0_8_ = lVar8;
    embree::MutexSys::lock();
    plVar1 = *(long **)(in_RCX + 0x138);
    if (plVar1 == *(long **)(in_RCX + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(in_RCX + 0x130),plVar1,local_118);
    }
    else {
      *plVar1 = lVar8;
      *(long *)(in_RCX + 0x138) = *(long *)(in_RCX + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar17 = local_120;
  lVar8 = in_R8[2];
  in_R8[5] = in_R8[5] + local_120;
  uVar13 = (ulong)(-(int)lVar8 & 0xf);
  uVar15 = local_120 + lVar8 + uVar13;
  in_R8[2] = uVar15;
  if ((ulong)in_R8[3] < uVar15) {
    in_R8[2] = lVar8;
    if ((ulong)in_R8[4] < local_120 * 4) {
      pfVar16 = (float *)FastAllocator::malloc(in_RCX,&local_120,0x40,false);
    }
    else {
      local_118._0_8_ = in_R8[4];
      pfVar16 = (float *)FastAllocator::malloc(in_RCX,(ulong *)local_118,0x40,true);
      in_R8[1] = (long)pfVar16;
      lVar8 = in_R8[2];
      in_R8[2] = uVar17;
      in_R8[6] = (in_R8[3] + in_R8[6]) - lVar8;
      in_R8[3] = local_118._0_8_;
      if ((ulong)local_118._0_8_ < uVar17) {
        in_R8[2] = 0;
        local_118._0_8_ = in_R8[4];
        pfVar16 = (float *)FastAllocator::malloc(in_RCX,(ulong *)local_118,0x40,false);
        in_R8[1] = (long)pfVar16;
        lVar8 = in_R8[2];
        in_R8[2] = uVar17;
        in_R8[6] = (in_R8[3] + in_R8[6]) - lVar8;
        in_R8[3] = local_118._0_8_;
        if ((ulong)local_118._0_8_ < uVar17) {
          pfVar16 = (float *)0x0;
          in_R8[2] = 0;
        }
      }
    }
  }
  else {
    in_R8[6] = in_R8[6] + uVar13;
    pfVar16 = (float *)((uVar15 - local_120) + in_R8[1]);
  }
  local_f8[0] = -NAN;
  local_f8[1] = -NAN;
  local_f8[2] = -NAN;
  local_f8[3] = -NAN;
  local_e8 = 0xffffffff;
  fStack_e4 = -NAN;
  fStack_e0 = -NAN;
  fStack_dc = -NAN;
  _local_d8 = (undefined1  [16])0x0;
  _local_c8 = (undefined1  [16])0x0;
  _local_b8 = (undefined1  [16])0x0;
  _local_a8 = (undefined1  [16])0x0;
  _local_98 = (undefined1  [16])0x0;
  _local_88 = (undefined1  [16])0x0;
  _local_78 = (undefined1  [16])0x0;
  _local_68 = (undefined1  [16])0x0;
  _local_58 = (undefined1  [16])0x0;
  if (uVar22 == 0) {
    fVar32 = 0.0;
    fVar34 = 0.0;
    fVar35 = 0.0;
    fVar36 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    local_b8._0_4_ = 0.0;
    local_b8._4_4_ = 0.0;
    auVar31._4_4_ = _LC2;
    auVar31._0_4_ = _LC2;
    auVar31._8_4_ = _LC2;
    auVar31._12_4_ = _LC2;
    local_118._4_4_ = _LC4;
    local_118._0_4_ = _LC4;
    local_118._8_4_ = _LC4;
    fStack_b0 = fVar29;
    fStack_ac = fVar30;
    local_c8._0_4_ = local_b8._0_4_;
    local_c8._4_4_ = local_b8._4_4_;
    fStack_c0 = fVar29;
    fStack_bc = fVar30;
    local_d8._0_4_ = local_b8._0_4_;
    local_d8._4_4_ = local_b8._4_4_;
    fStack_d0 = fVar29;
    fStack_cc = fVar30;
    fVar38 = (float)local_b8._0_4_;
    fVar39 = (float)local_b8._4_4_;
    fVar40 = fVar29;
    fVar41 = fVar30;
    fVar42 = (float)local_b8._0_4_;
    fVar43 = fVar28;
    fVar44 = fVar29;
    fVar45 = fVar30;
    fVar46 = (float)local_b8._0_4_;
    fVar47 = fVar28;
    fVar48 = fVar29;
    fVar49 = fVar30;
  }
  else {
    lVar8 = *(long *)param_2;
    fVar38 = *(float *)(param_2 + 0x10);
    lVar9 = *(long *)(lVar8 + 0x60);
    lVar10 = *(long *)(lVar8 + 0x58);
    lVar11 = *(long *)(lVar8 + 0x88);
    lVar8 = *(long *)(lVar8 + 0x90);
    auVar31._4_4_ = _LC2;
    auVar31._0_4_ = _LC2;
    auVar31._8_4_ = _LC2;
    auVar31._12_4_ = _LC2;
    lVar12 = *(long *)(param_2 + 8);
    uVar17 = 0;
    auVar33._4_4_ = _LC4;
    auVar33._0_4_ = _LC4;
    auVar33._8_4_ = _LC4;
    auVar33._12_4_ = _LC4;
    puVar19 = (undefined4 *)local_78;
    puVar20 = (undefined4 *)local_a8;
    puVar21 = (undefined4 *)local_d8;
    do {
      uVar6 = *(uint *)(lVar12 + (ulong)uVar5 * 8 + 4 + uVar17 * 8);
      (&local_e8)[uVar17] = uVar6;
      puVar14 = (uint *)((ulong)uVar6 * lVar9 + lVar10);
      auVar2 = *(undefined1 (*) [16])(lVar11 + (ulong)*puVar14 * lVar8);
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      auVar37 = minps(auVar33,auVar2);
      *puVar21 = auVar2._0_4_;
      auVar31 = maxps(auVar31,auVar2);
      auVar3 = *(undefined1 (*) [16])(lVar11 + (ulong)uVar6 * lVar8);
      auVar4 = *(undefined1 (*) [16])(lVar11 + (ulong)uVar7 * lVar8);
      *puVar20 = auVar3._0_4_;
      auVar33 = minps(auVar3,auVar4);
      *puVar19 = auVar4._0_4_;
      local_f8[uVar17] = fVar38;
      uVar17 = uVar17 + 1;
      auVar33 = minps(auVar37,auVar33);
      local_118 = auVar33._0_12_;
      auVar37 = maxps(auVar3,auVar4);
      auVar31 = maxps(auVar31,auVar37);
      puVar21[4] = auVar2._4_4_;
      puVar21[8] = auVar2._8_4_;
      puVar20[4] = auVar3._4_4_;
      puVar20[8] = auVar3._8_4_;
      puVar19[4] = auVar4._4_4_;
      puVar19[8] = auVar4._8_4_;
      puVar19 = puVar19 + 1;
      puVar20 = puVar20 + 1;
      puVar21 = puVar21 + 1;
    } while (uVar22 != uVar17);
    fVar23 = (float)local_58._0_4_ - (float)local_b8._0_4_;
    fVar24 = (float)local_58._4_4_ - (float)local_b8._4_4_;
    fVar25 = fStack_50 - fStack_b0;
    fVar26 = fStack_4c - fStack_ac;
    fVar27 = (float)local_68._0_4_ - (float)local_c8._0_4_;
    fVar28 = (float)local_68._4_4_ - (float)local_c8._4_4_;
    fVar29 = fStack_60 - fStack_c0;
    fVar30 = fStack_5c - fStack_bc;
    fVar32 = (float)local_78._0_4_ - (float)local_d8._0_4_;
    fVar34 = (float)local_78._4_4_ - (float)local_d8._4_4_;
    fVar35 = fStack_70 - fStack_d0;
    fVar36 = fStack_6c - fStack_cc;
    fVar38 = (float)local_b8._0_4_ - (float)local_88._0_4_;
    fVar39 = (float)local_b8._4_4_ - (float)local_88._4_4_;
    fVar40 = fStack_b0 - fStack_80;
    fVar41 = fStack_ac - fStack_7c;
    fVar42 = (float)local_c8._0_4_ - (float)local_98._0_4_;
    fVar43 = (float)local_c8._4_4_ - (float)local_98._4_4_;
    fVar44 = fStack_c0 - fStack_90;
    fVar45 = fStack_bc - fStack_8c;
    fVar46 = (float)local_d8._0_4_ - (float)local_a8._0_4_;
    fVar47 = (float)local_d8._4_4_ - (float)local_a8._4_4_;
    fVar48 = fStack_d0 - fStack_a0;
    fVar49 = fStack_cc - fStack_9c;
  }
  pfVar16[8] = (float)local_b8._0_4_;
  pfVar16[9] = (float)local_b8._4_4_;
  pfVar16[10] = fStack_b0;
  pfVar16[0xb] = fStack_ac;
  *pfVar16 = (float)local_d8._0_4_;
  pfVar16[1] = (float)local_d8._4_4_;
  pfVar16[2] = fStack_d0;
  pfVar16[3] = fStack_cc;
  pfVar16[4] = (float)local_c8._0_4_;
  pfVar16[5] = (float)local_c8._4_4_;
  pfVar16[6] = fStack_c0;
  pfVar16[7] = fStack_bc;
  pfVar16[0xc] = fVar46;
  pfVar16[0xd] = fVar47;
  pfVar16[0xe] = fVar48;
  pfVar16[0xf] = fVar49;
  pfVar16[0x10] = fVar42;
  pfVar16[0x11] = fVar43;
  pfVar16[0x12] = fVar44;
  pfVar16[0x13] = fVar45;
  pfVar16[0x14] = fVar38;
  pfVar16[0x15] = fVar39;
  pfVar16[0x16] = fVar40;
  pfVar16[0x17] = fVar41;
  pfVar16[0x18] = fVar32;
  pfVar16[0x19] = fVar34;
  pfVar16[0x1a] = fVar35;
  pfVar16[0x1b] = fVar36;
  pfVar16[0x1c] = fVar27;
  pfVar16[0x1d] = fVar28;
  pfVar16[0x1e] = fVar29;
  pfVar16[0x1f] = fVar30;
  pfVar16[0x20] = fVar23;
  pfVar16[0x21] = fVar24;
  pfVar16[0x22] = fVar25;
  pfVar16[0x23] = fVar26;
  pfVar16[0x24] = local_f8[0];
  pfVar16[0x25] = local_f8[1];
  pfVar16[0x26] = local_f8[2];
  pfVar16[0x27] = local_f8[3];
  pfVar16[0x28] = (float)local_e8;
  pfVar16[0x29] = fStack_e4;
  pfVar16[0x2a] = fStack_e0;
  pfVar16[0x2b] = fStack_dc;
  uVar5 = in_RDX[1];
  uVar6 = *in_RDX;
  *(ulong *)param_1 = (ulong)pfVar16 | 9;
  iStack_10c = uVar5 - uVar6;
  auVar33 = _local_118;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar31;
  *(undefined4 *)(param_1 + 0x10) = local_118._0_4_;
  *(undefined4 *)(param_1 + 0x14) = local_118._4_4_;
  *(undefined4 *)(param_1 + 0x18) = local_118._8_4_;
  *(uint *)(param_1 + 0x1c) = uVar5 - uVar6;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
  _local_118 = auVar33;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (0xfffffffffffffffe < uVar3) goto LAB_00103a30;
    uVar8 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar8 = uVar3 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_00103a3a:
    puVar7 = (undefined8 *)operator_new(uVar8);
    lVar10 = uVar8 + (long)puVar7;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar1)) = *param_3;
    puVar4 = puVar7 + 1;
    *param_3 = 0;
    if (param_2 != puVar1) {
LAB_001039a1:
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
    if (param_2 == puVar5) goto LAB_001039f4;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar3) {
LAB_00103a30:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_00103a3a;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_00103a3a;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)((long)param_2 - (long)puVar1) = *param_3;
    puVar4 = (undefined8 *)&DAT_00000008;
    *param_3 = 0;
    if (param_2 != puVar1) goto LAB_001039a1;
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
LAB_001039f4:
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,*(long *)(this + 0x10) - (long)puVar1);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar4;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::createLargeLeaf(unsigned long,
   embree::range<unsigned int> const&, embree::FastAllocator::CachedAllocator) */

range * embree::sse2::BVHBuilderMorton::
        BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
        ::createLargeLeaf(range *param_1,ulong *param_2,ulong param_3,int *param_4,
                         undefined8 param_5,undefined8 param_6,FastAllocator *param_7,long *param_8)

{
  int *piVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 uVar19;
  uint *puVar20;
  uint *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  long in_FS_OFFSET;
  undefined1 auVar27 [16];
  ulong local_240;
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulong local_218;
  ulong uStack_210;
  undefined8 local_208;
  uint local_200 [14];
  ulong local_1c8 [49];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar22 = param_2[3];
  if (uVar22 < (uint)(param_4[1] - *param_4)) {
    uVar23 = 1;
    local_208 = *(undefined8 *)param_4;
    puVar20 = (uint *)&local_208;
    do {
      uVar12 = 0;
      uVar13 = 0;
      uVar24 = 0xffffffffffffffff;
      do {
        uVar17 = (ulong)(local_200[uVar12 * 2 + -1] - *(uint *)((long)&local_208 + uVar12 * 2 * 4));
        uVar25 = uVar13;
        if (uVar13 <= uVar22) {
          uVar25 = uVar22;
        }
        if (uVar25 < uVar17) {
          uVar24 = uVar12;
          uVar13 = uVar17;
        }
        uVar12 = uVar12 + 1;
      } while (uVar23 != uVar12);
      if (uVar24 == 0xffffffffffffffff) break;
      uVar11 = local_200[uVar24 * 2 + -2];
      uVar23 = uVar23 + 1;
      uVar5 = local_200[uVar24 * 2 + -1];
      *(undefined8 *)(local_200 + uVar24 * 2 + -2) = *(undefined8 *)puVar20;
      *puVar20 = uVar11;
      uVar11 = uVar11 + uVar5 >> 1;
      puVar20[3] = uVar5;
      puVar20[1] = uVar11;
      puVar20[2] = uVar11;
      puVar20 = puVar20 + 2;
    } while (uVar23 < *param_2);
    local_240 = 0x80;
    lVar6 = *param_8;
    if (param_7 != *(FastAllocator **)(lVar6 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(lVar6 + 8) != 0) {
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x118);
        *plVar2 = *plVar2 + *(long *)(lVar6 + 0xa8) + *(long *)(lVar6 + 0x68);
        UNLOCK();
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x120);
        *plVar2 = *plVar2 + (((*(long *)(lVar6 + 0x98) + *(long *)(lVar6 + 0x58)) -
                             *(long *)(lVar6 + 0x50)) - *(long *)(lVar6 + 0x90));
        UNLOCK();
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x128);
        *plVar2 = *plVar2 + *(long *)(lVar6 + 0xb0) + *(long *)(lVar6 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(lVar6 + 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined8 *)(lVar6 + 0x68) = 0;
      *(undefined8 *)(lVar6 + 0x70) = 0;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      if (param_7 == (FastAllocator *)0x0) {
        *(undefined8 *)(lVar6 + 0x88) = 0;
        uVar19 = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
      }
      else {
        uVar19 = *(undefined8 *)(param_7 + 0x10);
        *(undefined8 *)(lVar6 + 0x88) = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x60) = uVar19;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
        *(undefined8 *)(lVar6 + 0xa0) = 0;
        uVar19 = *(undefined8 *)(param_7 + 0x10);
      }
      *(undefined8 *)(lVar6 + 0xa0) = uVar19;
      LOCK();
      *(FastAllocator **)(lVar6 + 8) = param_7;
      UNLOCK();
      local_238._0_8_ = lVar6;
      embree::MutexSys::lock();
      plVar2 = *(long **)(param_7 + 0x138);
      if (plVar2 == *(long **)(param_7 + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(param_7 + 0x130),plVar2,local_238,
                   &FastAllocator::s_thread_local_allocators_lock);
      }
      else {
        *plVar2 = lVar6;
        *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
    }
    lVar6 = param_8[2];
    param_8[5] = param_8[5] + 0x80;
    uVar13 = (ulong)(-(int)lVar6 & 0xf);
    uVar22 = lVar6 + 0x80 + uVar13;
    param_8[2] = uVar22;
    if ((ulong)param_8[3] < uVar22) {
      param_8[2] = lVar6;
      if ((ulong)param_8[4] < 0x200) {
        puVar16 = (ulong *)FastAllocator::malloc(param_7,&local_240,0x40,false);
      }
      else {
        local_238._0_8_ = param_8[4];
        puVar16 = (ulong *)FastAllocator::malloc(param_7,(ulong *)local_238,0x40,true);
        param_8[1] = (long)puVar16;
        lVar6 = param_8[2];
        param_8[2] = 0x80;
        param_8[6] = (param_8[3] + param_8[6]) - lVar6;
        param_8[3] = local_238._0_8_;
        if ((ulong)local_238._0_8_ < 0x80) {
          param_8[2] = 0;
          local_238._0_8_ = param_8[4];
          puVar16 = (ulong *)FastAllocator::malloc(param_7,(ulong *)local_238,0x40,false);
          param_8[1] = (long)puVar16;
          lVar6 = param_8[2];
          param_8[2] = 0x80;
          param_8[6] = (param_8[3] + param_8[6]) - lVar6;
          param_8[3] = local_238._0_8_;
          if ((ulong)local_238._0_8_ < 0x80) {
            puVar16 = (ulong *)0x0;
            param_8[2] = 0;
          }
        }
      }
    }
    else {
      param_8[6] = param_8[6] + uVar13;
      puVar16 = (ulong *)(param_8[1] + -0x80 + uVar22);
    }
    uVar13 = _UNK_00111a98;
    uVar22 = __LC4;
    uVar10 = _UNK_00111a8c;
    uVar9 = _UNK_00111a88;
    uVar8 = _UNK_00111a84;
    uVar7 = _LC2;
    puVar26 = local_1c8;
    *puVar16 = 8;
    puVar16[1] = 8;
    puVar16[2] = 8;
    puVar16[3] = 8;
    puVar16[0xc] = uVar22;
    puVar16[0xd] = uVar13;
    puVar16[8] = uVar22;
    puVar16[9] = uVar13;
    puVar16[4] = uVar22;
    puVar16[5] = uVar13;
    *(undefined4 *)(puVar16 + 0xe) = uVar7;
    *(undefined4 *)((long)puVar16 + 0x74) = uVar8;
    *(undefined4 *)(puVar16 + 0xf) = uVar9;
    *(undefined4 *)((long)puVar16 + 0x7c) = uVar10;
    *(undefined4 *)(puVar16 + 10) = uVar7;
    *(undefined4 *)((long)puVar16 + 0x54) = uVar8;
    *(undefined4 *)(puVar16 + 0xb) = uVar9;
    *(undefined4 *)((long)puVar16 + 0x5c) = uVar10;
    *(undefined4 *)(puVar16 + 6) = uVar7;
    *(undefined4 *)((long)puVar16 + 0x34) = uVar8;
    *(undefined4 *)(puVar16 + 7) = uVar9;
    *(undefined4 *)((long)puVar16 + 0x3c) = uVar10;
    puVar20 = (uint *)&local_208;
    puVar15 = puVar26;
    do {
      puVar21 = puVar20 + 2;
      createLargeLeaf(local_238,param_2,param_3 + 1,puVar20);
      *puVar15 = local_238._0_8_;
      *(undefined4 *)(puVar15 + 2) = local_228;
      *(undefined4 *)((long)puVar15 + 0x14) = uStack_224;
      *(undefined4 *)(puVar15 + 3) = uStack_220;
      *(undefined4 *)((long)puVar15 + 0x1c) = uStack_21c;
      puVar15[4] = local_218;
      puVar15[5] = uStack_210;
      puVar20 = puVar21;
      puVar15 = puVar15 + 6;
    } while (puVar21 != (uint *)((long)&local_208 + uVar23 * 2 * 4));
    auVar27._4_4_ = _UNK_00111a84;
    auVar27._0_4_ = _LC2;
    auVar27._8_4_ = _UNK_00111a88;
    auVar27._12_4_ = _UNK_00111a8c;
    local_238._8_8_ = _UNK_00111a98;
    local_238._0_8_ = __LC4;
    puVar15 = puVar16;
    puVar18 = puVar26;
    do {
      auVar3 = *(undefined1 (*) [16])(puVar18 + 2);
      auVar4 = *(undefined1 (*) [16])(puVar18 + 4);
      *(ulong *)((long)puVar15 * 2 - (long)puVar16) = *puVar18;
      local_238 = minps(local_238,auVar3);
      puVar14 = (ulong *)((long)puVar15 + 4);
      *(int *)(puVar15 + 4) = auVar3._0_4_;
      auVar27 = maxps(auVar27,auVar4);
      *(int *)(puVar15 + 0xc) = auVar3._8_4_;
      *(int *)(puVar15 + 6) = auVar4._0_4_;
      *(int *)(puVar15 + 8) = auVar3._4_4_;
      *(int *)(puVar15 + 10) = auVar4._4_4_;
      *(int *)(puVar15 + 0xe) = auVar4._8_4_;
      puVar15 = puVar14;
      puVar18 = puVar18 + 6;
    } while ((ulong *)((long)puVar16 + uVar23 * 4) != puVar14);
    uVar22 = 0;
    puVar15 = puVar26;
    do {
      piVar1 = (int *)((long)puVar15 + 0x1c);
      puVar15 = puVar15 + 6;
      uVar22 = uVar22 + (long)*piVar1;
    } while (puVar26 + uVar23 * 6 != puVar15);
    puVar15 = puVar16;
    if (0xfff < uVar22) {
      do {
        while (*(int *)((long)puVar26 + 0x1c) < 0x1000) {
          puVar26 = puVar26 + 6;
          embree::sse2::BVHNRotate<4>::rotate(*puVar15,1);
          *puVar15 = *puVar15 | 0x8000000000000000;
          puVar15 = puVar15 + 1;
          if (puVar16 + uVar23 == puVar15) goto LAB_00103f9d;
        }
        puVar15 = puVar15 + 1;
        puVar26 = puVar26 + 6;
      } while (puVar16 + uVar23 != puVar15);
    }
LAB_00103f9d:
    local_238._12_4_ = (int)uVar22;
    auVar3 = local_238;
    local_238._8_8_ = auVar3._8_8_;
    *(ulong **)param_1 = puVar16;
    *(undefined8 *)(param_1 + 0x10) = local_238._0_8_;
    *(undefined8 *)(param_1 + 0x18) = local_238._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar27;
    local_238 = auVar3;
  }
  else {
    CreateMortonLeaf<4,embree::TriangleMi<4>>::operator()(param_1,(CachedAllocator *)param_2[8]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::createLargeLeaf(unsigned long,
   embree::range<unsigned int> const&, embree::FastAllocator::CachedAllocator) */

range * embree::sse2::BVHBuilderMorton::
        BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
        ::createLargeLeaf(range *param_1,ulong *param_2,ulong param_3,int *param_4,
                         undefined8 param_5,undefined8 param_6,FastAllocator *param_7,long *param_8)

{
  int *piVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 uVar19;
  uint *puVar20;
  uint *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  long in_FS_OFFSET;
  undefined1 auVar27 [16];
  ulong local_240;
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulong local_218;
  ulong uStack_210;
  undefined8 local_208;
  uint local_200 [14];
  ulong local_1c8 [49];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar22 = param_2[3];
  if (uVar22 < (uint)(param_4[1] - *param_4)) {
    uVar23 = 1;
    local_208 = *(undefined8 *)param_4;
    puVar20 = (uint *)&local_208;
    do {
      uVar12 = 0;
      uVar13 = 0;
      uVar24 = 0xffffffffffffffff;
      do {
        uVar17 = (ulong)(local_200[uVar12 * 2 + -1] - *(uint *)((long)&local_208 + uVar12 * 2 * 4));
        uVar25 = uVar13;
        if (uVar13 <= uVar22) {
          uVar25 = uVar22;
        }
        if (uVar25 < uVar17) {
          uVar24 = uVar12;
          uVar13 = uVar17;
        }
        uVar12 = uVar12 + 1;
      } while (uVar23 != uVar12);
      if (uVar24 == 0xffffffffffffffff) break;
      uVar11 = local_200[uVar24 * 2 + -2];
      uVar23 = uVar23 + 1;
      uVar5 = local_200[uVar24 * 2 + -1];
      *(undefined8 *)(local_200 + uVar24 * 2 + -2) = *(undefined8 *)puVar20;
      *puVar20 = uVar11;
      uVar11 = uVar11 + uVar5 >> 1;
      puVar20[3] = uVar5;
      puVar20[1] = uVar11;
      puVar20[2] = uVar11;
      puVar20 = puVar20 + 2;
    } while (uVar23 < *param_2);
    local_240 = 0x80;
    lVar6 = *param_8;
    if (param_7 != *(FastAllocator **)(lVar6 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(lVar6 + 8) != 0) {
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x118);
        *plVar2 = *plVar2 + *(long *)(lVar6 + 0xa8) + *(long *)(lVar6 + 0x68);
        UNLOCK();
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x120);
        *plVar2 = *plVar2 + (((*(long *)(lVar6 + 0x98) + *(long *)(lVar6 + 0x58)) -
                             *(long *)(lVar6 + 0x50)) - *(long *)(lVar6 + 0x90));
        UNLOCK();
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x128);
        *plVar2 = *plVar2 + *(long *)(lVar6 + 0xb0) + *(long *)(lVar6 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(lVar6 + 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined8 *)(lVar6 + 0x68) = 0;
      *(undefined8 *)(lVar6 + 0x70) = 0;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      if (param_7 == (FastAllocator *)0x0) {
        *(undefined8 *)(lVar6 + 0x88) = 0;
        uVar19 = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
      }
      else {
        uVar19 = *(undefined8 *)(param_7 + 0x10);
        *(undefined8 *)(lVar6 + 0x88) = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x60) = uVar19;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
        *(undefined8 *)(lVar6 + 0xa0) = 0;
        uVar19 = *(undefined8 *)(param_7 + 0x10);
      }
      *(undefined8 *)(lVar6 + 0xa0) = uVar19;
      LOCK();
      *(FastAllocator **)(lVar6 + 8) = param_7;
      UNLOCK();
      local_238._0_8_ = lVar6;
      embree::MutexSys::lock();
      plVar2 = *(long **)(param_7 + 0x138);
      if (plVar2 == *(long **)(param_7 + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(param_7 + 0x130),plVar2,local_238,
                   &FastAllocator::s_thread_local_allocators_lock);
      }
      else {
        *plVar2 = lVar6;
        *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
    }
    lVar6 = param_8[2];
    param_8[5] = param_8[5] + 0x80;
    uVar13 = (ulong)(-(int)lVar6 & 0xf);
    uVar22 = lVar6 + 0x80 + uVar13;
    param_8[2] = uVar22;
    if ((ulong)param_8[3] < uVar22) {
      param_8[2] = lVar6;
      if ((ulong)param_8[4] < 0x200) {
        puVar16 = (ulong *)FastAllocator::malloc(param_7,&local_240,0x40,false);
      }
      else {
        local_238._0_8_ = param_8[4];
        puVar16 = (ulong *)FastAllocator::malloc(param_7,(ulong *)local_238,0x40,true);
        param_8[1] = (long)puVar16;
        lVar6 = param_8[2];
        param_8[2] = 0x80;
        param_8[6] = (param_8[3] + param_8[6]) - lVar6;
        param_8[3] = local_238._0_8_;
        if ((ulong)local_238._0_8_ < 0x80) {
          param_8[2] = 0;
          local_238._0_8_ = param_8[4];
          puVar16 = (ulong *)FastAllocator::malloc(param_7,(ulong *)local_238,0x40,false);
          param_8[1] = (long)puVar16;
          lVar6 = param_8[2];
          param_8[2] = 0x80;
          param_8[6] = (param_8[3] + param_8[6]) - lVar6;
          param_8[3] = local_238._0_8_;
          if ((ulong)local_238._0_8_ < 0x80) {
            puVar16 = (ulong *)0x0;
            param_8[2] = 0;
          }
        }
      }
    }
    else {
      param_8[6] = param_8[6] + uVar13;
      puVar16 = (ulong *)(param_8[1] + -0x80 + uVar22);
    }
    uVar13 = _UNK_00111a98;
    uVar22 = __LC4;
    uVar10 = _UNK_00111a8c;
    uVar9 = _UNK_00111a88;
    uVar8 = _UNK_00111a84;
    uVar7 = _LC2;
    puVar26 = local_1c8;
    *puVar16 = 8;
    puVar16[1] = 8;
    puVar16[2] = 8;
    puVar16[3] = 8;
    puVar16[0xc] = uVar22;
    puVar16[0xd] = uVar13;
    puVar16[8] = uVar22;
    puVar16[9] = uVar13;
    puVar16[4] = uVar22;
    puVar16[5] = uVar13;
    *(undefined4 *)(puVar16 + 0xe) = uVar7;
    *(undefined4 *)((long)puVar16 + 0x74) = uVar8;
    *(undefined4 *)(puVar16 + 0xf) = uVar9;
    *(undefined4 *)((long)puVar16 + 0x7c) = uVar10;
    *(undefined4 *)(puVar16 + 10) = uVar7;
    *(undefined4 *)((long)puVar16 + 0x54) = uVar8;
    *(undefined4 *)(puVar16 + 0xb) = uVar9;
    *(undefined4 *)((long)puVar16 + 0x5c) = uVar10;
    *(undefined4 *)(puVar16 + 6) = uVar7;
    *(undefined4 *)((long)puVar16 + 0x34) = uVar8;
    *(undefined4 *)(puVar16 + 7) = uVar9;
    *(undefined4 *)((long)puVar16 + 0x3c) = uVar10;
    puVar20 = (uint *)&local_208;
    puVar15 = puVar26;
    do {
      puVar21 = puVar20 + 2;
      createLargeLeaf(local_238,param_2,param_3 + 1,puVar20);
      *puVar15 = local_238._0_8_;
      *(undefined4 *)(puVar15 + 2) = local_228;
      *(undefined4 *)((long)puVar15 + 0x14) = uStack_224;
      *(undefined4 *)(puVar15 + 3) = uStack_220;
      *(undefined4 *)((long)puVar15 + 0x1c) = uStack_21c;
      puVar15[4] = local_218;
      puVar15[5] = uStack_210;
      puVar20 = puVar21;
      puVar15 = puVar15 + 6;
    } while (puVar21 != (uint *)((long)&local_208 + uVar23 * 2 * 4));
    auVar27._4_4_ = _UNK_00111a84;
    auVar27._0_4_ = _LC2;
    auVar27._8_4_ = _UNK_00111a88;
    auVar27._12_4_ = _UNK_00111a8c;
    local_238._8_8_ = _UNK_00111a98;
    local_238._0_8_ = __LC4;
    puVar15 = puVar16;
    puVar18 = puVar26;
    do {
      auVar3 = *(undefined1 (*) [16])(puVar18 + 2);
      auVar4 = *(undefined1 (*) [16])(puVar18 + 4);
      *(ulong *)((long)puVar15 * 2 - (long)puVar16) = *puVar18;
      local_238 = minps(local_238,auVar3);
      puVar14 = (ulong *)((long)puVar15 + 4);
      *(int *)(puVar15 + 4) = auVar3._0_4_;
      auVar27 = maxps(auVar27,auVar4);
      *(int *)(puVar15 + 0xc) = auVar3._8_4_;
      *(int *)(puVar15 + 6) = auVar4._0_4_;
      *(int *)(puVar15 + 8) = auVar3._4_4_;
      *(int *)(puVar15 + 10) = auVar4._4_4_;
      *(int *)(puVar15 + 0xe) = auVar4._8_4_;
      puVar15 = puVar14;
      puVar18 = puVar18 + 6;
    } while ((ulong *)((long)puVar16 + uVar23 * 4) != puVar14);
    uVar22 = 0;
    puVar15 = puVar26;
    do {
      piVar1 = (int *)((long)puVar15 + 0x1c);
      puVar15 = puVar15 + 6;
      uVar22 = uVar22 + (long)*piVar1;
    } while (puVar26 + uVar23 * 6 != puVar15);
    puVar15 = puVar16;
    if (0xfff < uVar22) {
      do {
        while (*(int *)((long)puVar26 + 0x1c) < 0x1000) {
          puVar26 = puVar26 + 6;
          embree::sse2::BVHNRotate<4>::rotate(*puVar15,1);
          *puVar15 = *puVar15 | 0x8000000000000000;
          puVar15 = puVar15 + 1;
          if (puVar16 + uVar23 == puVar15) goto LAB_0010461d;
        }
        puVar15 = puVar15 + 1;
        puVar26 = puVar26 + 6;
      } while (puVar16 + uVar23 != puVar15);
    }
LAB_0010461d:
    local_238._12_4_ = (int)uVar22;
    auVar3 = local_238;
    local_238._8_8_ = auVar3._8_8_;
    *(ulong **)param_1 = puVar16;
    *(undefined8 *)(param_1 + 0x10) = local_238._0_8_;
    *(undefined8 *)(param_1 + 0x18) = local_238._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar27;
    local_238 = auVar3;
  }
  else {
    CreateMortonLeaf<4,embree::TriangleMv<4>>::operator()(param_1,(CachedAllocator *)param_2[8]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::createLargeLeaf(unsigned long,
   embree::range<unsigned int> const&, embree::FastAllocator::CachedAllocator) */

range * embree::sse2::BVHBuilderMorton::
        BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
        ::createLargeLeaf(range *param_1,ulong *param_2,ulong param_3,int *param_4,
                         undefined8 param_5,undefined8 param_6,FastAllocator *param_7,long *param_8)

{
  int *piVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 uVar19;
  uint *puVar20;
  uint *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  long in_FS_OFFSET;
  undefined1 auVar27 [16];
  ulong local_240;
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulong local_218;
  ulong uStack_210;
  undefined8 local_208;
  uint local_200 [14];
  ulong local_1c8 [49];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar22 = param_2[3];
  if (uVar22 < (uint)(param_4[1] - *param_4)) {
    uVar23 = 1;
    local_208 = *(undefined8 *)param_4;
    puVar20 = (uint *)&local_208;
    do {
      uVar12 = 0;
      uVar13 = 0;
      uVar24 = 0xffffffffffffffff;
      do {
        uVar17 = (ulong)(local_200[uVar12 * 2 + -1] - *(uint *)((long)&local_208 + uVar12 * 2 * 4));
        uVar25 = uVar13;
        if (uVar13 <= uVar22) {
          uVar25 = uVar22;
        }
        if (uVar25 < uVar17) {
          uVar24 = uVar12;
          uVar13 = uVar17;
        }
        uVar12 = uVar12 + 1;
      } while (uVar23 != uVar12);
      if (uVar24 == 0xffffffffffffffff) break;
      uVar11 = local_200[uVar24 * 2 + -2];
      uVar23 = uVar23 + 1;
      uVar5 = local_200[uVar24 * 2 + -1];
      *(undefined8 *)(local_200 + uVar24 * 2 + -2) = *(undefined8 *)puVar20;
      *puVar20 = uVar11;
      uVar11 = uVar11 + uVar5 >> 1;
      puVar20[3] = uVar5;
      puVar20[1] = uVar11;
      puVar20[2] = uVar11;
      puVar20 = puVar20 + 2;
    } while (uVar23 < *param_2);
    local_240 = 0x80;
    lVar6 = *param_8;
    if (param_7 != *(FastAllocator **)(lVar6 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(lVar6 + 8) != 0) {
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x118);
        *plVar2 = *plVar2 + *(long *)(lVar6 + 0xa8) + *(long *)(lVar6 + 0x68);
        UNLOCK();
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x120);
        *plVar2 = *plVar2 + (((*(long *)(lVar6 + 0x98) + *(long *)(lVar6 + 0x58)) -
                             *(long *)(lVar6 + 0x50)) - *(long *)(lVar6 + 0x90));
        UNLOCK();
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x128);
        *plVar2 = *plVar2 + *(long *)(lVar6 + 0xb0) + *(long *)(lVar6 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(lVar6 + 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined8 *)(lVar6 + 0x68) = 0;
      *(undefined8 *)(lVar6 + 0x70) = 0;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      if (param_7 == (FastAllocator *)0x0) {
        *(undefined8 *)(lVar6 + 0x88) = 0;
        uVar19 = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
      }
      else {
        uVar19 = *(undefined8 *)(param_7 + 0x10);
        *(undefined8 *)(lVar6 + 0x88) = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x60) = uVar19;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
        *(undefined8 *)(lVar6 + 0xa0) = 0;
        uVar19 = *(undefined8 *)(param_7 + 0x10);
      }
      *(undefined8 *)(lVar6 + 0xa0) = uVar19;
      LOCK();
      *(FastAllocator **)(lVar6 + 8) = param_7;
      UNLOCK();
      local_238._0_8_ = lVar6;
      embree::MutexSys::lock();
      plVar2 = *(long **)(param_7 + 0x138);
      if (plVar2 == *(long **)(param_7 + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(param_7 + 0x130),plVar2,local_238,
                   &FastAllocator::s_thread_local_allocators_lock);
      }
      else {
        *plVar2 = lVar6;
        *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
    }
    lVar6 = param_8[2];
    param_8[5] = param_8[5] + 0x80;
    uVar13 = (ulong)(-(int)lVar6 & 0xf);
    uVar22 = lVar6 + 0x80 + uVar13;
    param_8[2] = uVar22;
    if ((ulong)param_8[3] < uVar22) {
      param_8[2] = lVar6;
      if ((ulong)param_8[4] < 0x200) {
        puVar16 = (ulong *)FastAllocator::malloc(param_7,&local_240,0x40,false);
      }
      else {
        local_238._0_8_ = param_8[4];
        puVar16 = (ulong *)FastAllocator::malloc(param_7,(ulong *)local_238,0x40,true);
        param_8[1] = (long)puVar16;
        lVar6 = param_8[2];
        param_8[2] = 0x80;
        param_8[6] = (param_8[3] + param_8[6]) - lVar6;
        param_8[3] = local_238._0_8_;
        if ((ulong)local_238._0_8_ < 0x80) {
          param_8[2] = 0;
          local_238._0_8_ = param_8[4];
          puVar16 = (ulong *)FastAllocator::malloc(param_7,(ulong *)local_238,0x40,false);
          param_8[1] = (long)puVar16;
          lVar6 = param_8[2];
          param_8[2] = 0x80;
          param_8[6] = (param_8[3] + param_8[6]) - lVar6;
          param_8[3] = local_238._0_8_;
          if ((ulong)local_238._0_8_ < 0x80) {
            puVar16 = (ulong *)0x0;
            param_8[2] = 0;
          }
        }
      }
    }
    else {
      param_8[6] = param_8[6] + uVar13;
      puVar16 = (ulong *)(param_8[1] + -0x80 + uVar22);
    }
    uVar13 = _UNK_00111a98;
    uVar22 = __LC4;
    uVar10 = _UNK_00111a8c;
    uVar9 = _UNK_00111a88;
    uVar8 = _UNK_00111a84;
    uVar7 = _LC2;
    puVar26 = local_1c8;
    *puVar16 = 8;
    puVar16[1] = 8;
    puVar16[2] = 8;
    puVar16[3] = 8;
    puVar16[0xc] = uVar22;
    puVar16[0xd] = uVar13;
    puVar16[8] = uVar22;
    puVar16[9] = uVar13;
    puVar16[4] = uVar22;
    puVar16[5] = uVar13;
    *(undefined4 *)(puVar16 + 0xe) = uVar7;
    *(undefined4 *)((long)puVar16 + 0x74) = uVar8;
    *(undefined4 *)(puVar16 + 0xf) = uVar9;
    *(undefined4 *)((long)puVar16 + 0x7c) = uVar10;
    *(undefined4 *)(puVar16 + 10) = uVar7;
    *(undefined4 *)((long)puVar16 + 0x54) = uVar8;
    *(undefined4 *)(puVar16 + 0xb) = uVar9;
    *(undefined4 *)((long)puVar16 + 0x5c) = uVar10;
    *(undefined4 *)(puVar16 + 6) = uVar7;
    *(undefined4 *)((long)puVar16 + 0x34) = uVar8;
    *(undefined4 *)(puVar16 + 7) = uVar9;
    *(undefined4 *)((long)puVar16 + 0x3c) = uVar10;
    puVar20 = (uint *)&local_208;
    puVar15 = puVar26;
    do {
      puVar21 = puVar20 + 2;
      createLargeLeaf(local_238,param_2,param_3 + 1,puVar20);
      *puVar15 = local_238._0_8_;
      *(undefined4 *)(puVar15 + 2) = local_228;
      *(undefined4 *)((long)puVar15 + 0x14) = uStack_224;
      *(undefined4 *)(puVar15 + 3) = uStack_220;
      *(undefined4 *)((long)puVar15 + 0x1c) = uStack_21c;
      puVar15[4] = local_218;
      puVar15[5] = uStack_210;
      puVar20 = puVar21;
      puVar15 = puVar15 + 6;
    } while (puVar21 != (uint *)((long)&local_208 + uVar23 * 2 * 4));
    auVar27._4_4_ = _UNK_00111a84;
    auVar27._0_4_ = _LC2;
    auVar27._8_4_ = _UNK_00111a88;
    auVar27._12_4_ = _UNK_00111a8c;
    local_238._8_8_ = _UNK_00111a98;
    local_238._0_8_ = __LC4;
    puVar15 = puVar16;
    puVar18 = puVar26;
    do {
      auVar3 = *(undefined1 (*) [16])(puVar18 + 2);
      auVar4 = *(undefined1 (*) [16])(puVar18 + 4);
      *(ulong *)((long)puVar15 * 2 - (long)puVar16) = *puVar18;
      local_238 = minps(local_238,auVar3);
      puVar14 = (ulong *)((long)puVar15 + 4);
      *(int *)(puVar15 + 4) = auVar3._0_4_;
      auVar27 = maxps(auVar27,auVar4);
      *(int *)(puVar15 + 0xc) = auVar3._8_4_;
      *(int *)(puVar15 + 6) = auVar4._0_4_;
      *(int *)(puVar15 + 8) = auVar3._4_4_;
      *(int *)(puVar15 + 10) = auVar4._4_4_;
      *(int *)(puVar15 + 0xe) = auVar4._8_4_;
      puVar15 = puVar14;
      puVar18 = puVar18 + 6;
    } while ((ulong *)((long)puVar16 + uVar23 * 4) != puVar14);
    uVar22 = 0;
    puVar15 = puVar26;
    do {
      piVar1 = (int *)((long)puVar15 + 0x1c);
      puVar15 = puVar15 + 6;
      uVar22 = uVar22 + (long)*piVar1;
    } while (puVar26 + uVar23 * 6 != puVar15);
    puVar15 = puVar16;
    if (0xfff < uVar22) {
      do {
        while (*(int *)((long)puVar26 + 0x1c) < 0x1000) {
          puVar26 = puVar26 + 6;
          embree::sse2::BVHNRotate<4>::rotate(*puVar15,1);
          *puVar15 = *puVar15 | 0x8000000000000000;
          puVar15 = puVar15 + 1;
          if (puVar16 + uVar23 == puVar15) goto LAB_00104c9d;
        }
        puVar15 = puVar15 + 1;
        puVar26 = puVar26 + 6;
      } while (puVar16 + uVar23 != puVar15);
    }
LAB_00104c9d:
    local_238._12_4_ = (int)uVar22;
    auVar3 = local_238;
    local_238._8_8_ = auVar3._8_8_;
    *(ulong **)param_1 = puVar16;
    *(undefined8 *)(param_1 + 0x10) = local_238._0_8_;
    *(undefined8 *)(param_1 + 0x18) = local_238._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar27;
    local_238 = auVar3;
  }
  else {
    CreateMortonLeaf<4,embree::TriangleM<4>>::operator()(param_1,(CachedAllocator *)param_2[8]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010523d) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  Thread *pTVar4;
  long lVar5;
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
  char cVar16;
  long lVar17;
  Thread *pTVar18;
  Thread *pTVar19;
  long lVar20;
  Thread *pTVar21;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar17 = embree::TaskScheduler::allocThreadIndex();
  pTVar18 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar18 = lVar17;
  pTVar21 = pTVar18 + 0x40;
  pTVar19 = pTVar21;
  do {
    *(undefined4 *)pTVar19 = 0;
    pTVar19 = pTVar19 + 0x40;
  } while (pTVar18 + 0x40040 != pTVar19);
  *(undefined8 *)(pTVar18 + 0x40040) = 0;
  *(undefined8 *)(pTVar18 + 0x40080) = 0;
  *(undefined8 *)(pTVar18 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar18 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar18 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar17 * 8) = pTVar18;
  UNLOCK();
  local_48 = pTVar18;
  pTVar19 = (Thread *)embree::TaskScheduler::swapThread(pTVar18);
  if (*(ulong *)(pTVar18 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar18 + 0xc00c0);
    uVar3 = lVar5 + 0x48 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar18 + 0xc00c0) = uVar3;
      pTVar4 = pTVar18 + uVar3 + 0x40078;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00111610;
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(pTVar4 + 8) = uVar8;
      *(undefined8 *)(pTVar4 + 0x10) = uVar9;
      *(undefined8 *)(pTVar4 + 0x18) = uVar10;
      *(undefined8 *)(pTVar4 + 0x20) = uVar11;
      *(undefined8 *)(pTVar4 + 0x28) = uVar12;
      *(undefined8 *)(pTVar4 + 0x30) = uVar13;
      *(undefined8 *)(pTVar4 + 0x38) = uVar14;
      *(undefined8 *)(pTVar4 + 0x40) = uVar15;
      lVar20 = *(long *)(pTVar18 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar18 + 0xc0100);
      pTVar18[lVar20 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar18 + lVar20 + 0x44) = 1;
      *(Thread **)(pTVar18 + lVar20 + 0x50) = pTVar4;
      *(long *)(pTVar18 + lVar20 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar18 + lVar20 + 0x60) = param_2;
      *(long *)(pTVar18 + lVar20 + 0x68) = lVar5;
      *(ulong *)(pTVar18 + lVar20 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar21 + lVar20) == 0) {
        *(undefined4 *)(pTVar21 + lVar20) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar18 + 0x40080) = *(long *)(pTVar18 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar18 + 0x40080) - 1U <= *(ulong *)(pTVar18 + 0x40040)) {
        LOCK();
        *(long *)(pTVar18 + 0x40040) = *(long *)(pTVar18 + 0x40080) + -1;
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
        cVar16 = embree::TaskScheduler::TaskQueue::execute_local(pTVar21,(Task *)pTVar18);
      } while (cVar16 != '\0');
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
      *(undefined8 *)(lVar17 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar19);
      pTVar21 = *(Thread **)param_2;
      if (pTVar21 != (Thread *)0x0) {
        local_48 = pTVar21;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar21 = local_48;
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
      if (pTVar21 == (Thread *)0x0) {
        if (pTVar18 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar18 + 0xc0108);
          if (plVar7 != (long *)0x0) {
            if (*(code **)(*plVar7 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar7 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar18);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar21;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
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
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  TaskGroupContext *local_30;
  long local_20;
  
  uStack_50 = *(undefined8 *)param_4;
  uStack_48 = *(undefined8 *)(param_4 + 8);
  uStack_40 = *(undefined8 *)(param_4 + 0x10);
  uStack_38 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  uStack_60 = param_1;
  local_58 = param_3;
  local_30 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_68,param_5,param_2 - param_1,true);
LAB_001054e9:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x48 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40078 + uVar2);
      *puVar3 = &PTR_execute_00111610;
      puVar3[1] = local_68;
      puVar3[2] = uStack_60;
      puVar3[3] = local_58;
      puVar3[4] = uStack_50;
      puVar3[5] = uStack_48;
      puVar3[6] = uStack_40;
      puVar3[7] = uStack_38;
      puVar3[8] = local_30;
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
      goto LAB_001054e9;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Removing unreachable block (ram,0x0010591d) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  Thread *pTVar4;
  long lVar5;
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
  char cVar16;
  long lVar17;
  Thread *pTVar18;
  Thread *pTVar19;
  long lVar20;
  Thread *pTVar21;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar17 = embree::TaskScheduler::allocThreadIndex();
  pTVar18 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar18 = lVar17;
  pTVar21 = pTVar18 + 0x40;
  pTVar19 = pTVar21;
  do {
    *(undefined4 *)pTVar19 = 0;
    pTVar19 = pTVar19 + 0x40;
  } while (pTVar18 + 0x40040 != pTVar19);
  *(undefined8 *)(pTVar18 + 0x40040) = 0;
  *(undefined8 *)(pTVar18 + 0x40080) = 0;
  *(undefined8 *)(pTVar18 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar18 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar18 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar17 * 8) = pTVar18;
  UNLOCK();
  local_48 = pTVar18;
  pTVar19 = (Thread *)embree::TaskScheduler::swapThread(pTVar18);
  if (*(ulong *)(pTVar18 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar18 + 0xc00c0);
    uVar3 = lVar5 + 0x48 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar18 + 0xc00c0) = uVar3;
      pTVar4 = pTVar18 + uVar3 + 0x40078;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00111628;
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(pTVar4 + 8) = uVar8;
      *(undefined8 *)(pTVar4 + 0x10) = uVar9;
      *(undefined8 *)(pTVar4 + 0x18) = uVar10;
      *(undefined8 *)(pTVar4 + 0x20) = uVar11;
      *(undefined8 *)(pTVar4 + 0x28) = uVar12;
      *(undefined8 *)(pTVar4 + 0x30) = uVar13;
      *(undefined8 *)(pTVar4 + 0x38) = uVar14;
      *(undefined8 *)(pTVar4 + 0x40) = uVar15;
      lVar20 = *(long *)(pTVar18 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar18 + 0xc0100);
      pTVar18[lVar20 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar18 + lVar20 + 0x44) = 1;
      *(Thread **)(pTVar18 + lVar20 + 0x50) = pTVar4;
      *(long *)(pTVar18 + lVar20 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar18 + lVar20 + 0x60) = param_2;
      *(long *)(pTVar18 + lVar20 + 0x68) = lVar5;
      *(ulong *)(pTVar18 + lVar20 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar21 + lVar20) == 0) {
        *(undefined4 *)(pTVar21 + lVar20) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar18 + 0x40080) = *(long *)(pTVar18 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar18 + 0x40080) - 1U <= *(ulong *)(pTVar18 + 0x40040)) {
        LOCK();
        *(long *)(pTVar18 + 0x40040) = *(long *)(pTVar18 + 0x40080) + -1;
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
        cVar16 = embree::TaskScheduler::TaskQueue::execute_local(pTVar21,(Task *)pTVar18);
      } while (cVar16 != '\0');
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
      *(undefined8 *)(lVar17 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar19);
      pTVar21 = *(Thread **)param_2;
      if (pTVar21 != (Thread *)0x0) {
        local_48 = pTVar21;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar21 = local_48;
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
      if (pTVar21 == (Thread *)0x0) {
        if (pTVar18 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar18 + 0xc0108);
          if (plVar7 != (long *)0x0) {
            if (*(code **)(*plVar7 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar7 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar18);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar21;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
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
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  TaskGroupContext *local_30;
  long local_20;
  
  uStack_50 = *(undefined8 *)param_4;
  uStack_48 = *(undefined8 *)(param_4 + 8);
  uStack_40 = *(undefined8 *)(param_4 + 0x10);
  uStack_38 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  uStack_60 = param_1;
  local_58 = param_3;
  local_30 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_68,param_5,param_2 - param_1,true);
LAB_00105bc9:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x48 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40078 + uVar2);
      *puVar3 = &PTR_execute_00111628;
      puVar3[1] = local_68;
      puVar3[2] = uStack_60;
      puVar3[3] = local_58;
      puVar3[4] = uStack_50;
      puVar3[5] = uStack_48;
      puVar3[6] = uStack_40;
      puVar3[7] = uStack_38;
      puVar3[8] = local_30;
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
      goto LAB_00105bc9;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Removing unreachable block (ram,0x00105ffd) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  Thread *pTVar4;
  long lVar5;
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
  char cVar16;
  long lVar17;
  Thread *pTVar18;
  Thread *pTVar19;
  long lVar20;
  Thread *pTVar21;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar17 = embree::TaskScheduler::allocThreadIndex();
  pTVar18 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar18 = lVar17;
  pTVar21 = pTVar18 + 0x40;
  pTVar19 = pTVar21;
  do {
    *(undefined4 *)pTVar19 = 0;
    pTVar19 = pTVar19 + 0x40;
  } while (pTVar18 + 0x40040 != pTVar19);
  *(undefined8 *)(pTVar18 + 0x40040) = 0;
  *(undefined8 *)(pTVar18 + 0x40080) = 0;
  *(undefined8 *)(pTVar18 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar18 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar18 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar17 * 8) = pTVar18;
  UNLOCK();
  local_48 = pTVar18;
  pTVar19 = (Thread *)embree::TaskScheduler::swapThread(pTVar18);
  if (*(ulong *)(pTVar18 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar18 + 0xc00c0);
    uVar3 = lVar5 + 0x48 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar18 + 0xc00c0) = uVar3;
      pTVar4 = pTVar18 + uVar3 + 0x40078;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00111640;
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(pTVar4 + 8) = uVar8;
      *(undefined8 *)(pTVar4 + 0x10) = uVar9;
      *(undefined8 *)(pTVar4 + 0x18) = uVar10;
      *(undefined8 *)(pTVar4 + 0x20) = uVar11;
      *(undefined8 *)(pTVar4 + 0x28) = uVar12;
      *(undefined8 *)(pTVar4 + 0x30) = uVar13;
      *(undefined8 *)(pTVar4 + 0x38) = uVar14;
      *(undefined8 *)(pTVar4 + 0x40) = uVar15;
      lVar20 = *(long *)(pTVar18 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar18 + 0xc0100);
      pTVar18[lVar20 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar18 + lVar20 + 0x44) = 1;
      *(Thread **)(pTVar18 + lVar20 + 0x50) = pTVar4;
      *(long *)(pTVar18 + lVar20 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar18 + lVar20 + 0x60) = param_2;
      *(long *)(pTVar18 + lVar20 + 0x68) = lVar5;
      *(ulong *)(pTVar18 + lVar20 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar21 + lVar20) == 0) {
        *(undefined4 *)(pTVar21 + lVar20) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar18 + 0x40080) = *(long *)(pTVar18 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar18 + 0x40080) - 1U <= *(ulong *)(pTVar18 + 0x40040)) {
        LOCK();
        *(long *)(pTVar18 + 0x40040) = *(long *)(pTVar18 + 0x40080) + -1;
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
        cVar16 = embree::TaskScheduler::TaskQueue::execute_local(pTVar21,(Task *)pTVar18);
      } while (cVar16 != '\0');
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
      *(undefined8 *)(lVar17 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar19);
      pTVar21 = *(Thread **)param_2;
      if (pTVar21 != (Thread *)0x0) {
        local_48 = pTVar21;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar21 = local_48;
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
      if (pTVar21 == (Thread *)0x0) {
        if (pTVar18 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar18 + 0xc0108);
          if (plVar7 != (long *)0x0) {
            if (*(code **)(*plVar7 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar7 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar18);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar21;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
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
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  TaskGroupContext *local_30;
  long local_20;
  
  uStack_50 = *(undefined8 *)param_4;
  uStack_48 = *(undefined8 *)(param_4 + 8);
  uStack_40 = *(undefined8 *)(param_4 + 0x10);
  uStack_38 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  uStack_60 = param_1;
  local_58 = param_3;
  local_30 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_68,param_5,param_2 - param_1,true);
LAB_001062a9:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x48 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40078 + uVar2);
      *puVar3 = &PTR_execute_00111640;
      puVar3[1] = local_68;
      puVar3[2] = uStack_60;
      puVar3[3] = local_58;
      puVar3[4] = uStack_50;
      puVar3[5] = uStack_48;
      puVar3[6] = uStack_40;
      puVar3[7] = uStack_38;
      puVar3[8] = local_30;
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
      goto LAB_001062a9;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&,
   embree::sse2::BVHBuilderMorton::BuildPrim const&)> >(embree::sse2::BVHBuilderMorton::BuildPrim*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&, embree::sse2::BVHBuilderMorton::BuildPrim
   const&)>) */

void std::
     __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
               (undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  char cVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    puVar4 = param_1 + 1;
    while (param_2 != puVar4) {
      while( true ) {
        cVar2 = (*param_3)(puVar4,param_1);
        puVar5 = puVar4 + 1;
        if (cVar2 != '\0') break;
        local_48 = *puVar4;
        while( true ) {
          puVar3 = puVar4 + -1;
          cVar2 = (*param_3)(&local_48,puVar3);
          if (cVar2 == '\0') break;
          *puVar4 = *puVar3;
          puVar4 = puVar3;
        }
        *puVar4 = local_48;
        puVar4 = puVar5;
        if (param_2 == puVar5) goto LAB_001063c5;
      }
      uVar1 = *puVar4;
      __n = (long)puVar4 - (long)param_1;
      if ((long)__n < 9) {
        if (__n == 8) {
          *puVar4 = *param_1;
        }
      }
      else {
        memmove((void *)((long)puVar4 + (8 - __n)),param_1,__n);
      }
      *param_1 = uVar1;
      puVar4 = puVar5;
    }
  }
LAB_001063c5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001067cd) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   int, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
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
      *(undefined ***)pTVar4 = &PTR_execute_00111658;
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
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
               (uint param_1,uint param_2,uint param_3,
               _lambda_embree__range<unsigned_int>_const___2_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
               (uint param_1,uint param_2,uint param_3,
               _lambda_embree__range<unsigned_int>_const___2_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
               (uint param_1,uint param_2,uint param_3,
               _lambda_embree__range<unsigned_int>_const___2_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  TaskScheduler *this_00;
  uint uVar8;
  uint uVar11;
  uint uVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  
  uVar7 = *(uint *)(this + 8);
  uVar8 = *(uint *)(this + 0xc);
  this_00 = (TaskScheduler *)(ulong)uVar8;
  if (*(uint *)(this + 0x10) < uVar7 - uVar8) {
    uVar7 = uVar7 + uVar8 >> 1;
    spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
              (this_00,uVar7,*(uint *)(this + 0x10),(uint)*(undefined8 *)(this + 0x18),
               *(_lambda_embree__range<unsigned_int>_const___2_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
              ((TaskScheduler *)(ulong)uVar7,*(uint *)(this + 8),*(uint *)(this + 0x10),
               (uint)*(undefined8 *)(this + 0x18),
               *(_lambda_embree__range<unsigned_int>_const___2_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  if (this_00 < (TaskScheduler *)(ulong)uVar7) {
    do {
      pfVar3 = *(float **)(this + 0x20);
      puVar1 = (uint *)(*(long *)(*(long *)(this + 0x18) + 0x58) + (long)this_00 * 8);
      lVar4 = **(long **)(*(long *)(this + 0x18) + 0x48);
      puVar6 = (uint *)((ulong)puVar1[1] * *(long *)(lVar4 + 0x60) + *(long *)(lVar4 + 0x58));
      lVar5 = *(long *)(lVar4 + 0x88);
      lVar4 = *(long *)(lVar4 + 0x90);
      auVar10 = *(undefined1 (*) [16])(lVar5 + (ulong)*puVar6 * lVar4);
      auVar13 = *(undefined1 (*) [16])(lVar5 + (ulong)puVar6[1] * lVar4);
      auVar2 = *(undefined1 (*) [16])(lVar5 + (ulong)puVar6[2] * lVar4);
      auVar9 = maxps(auVar10,auVar13);
      auVar13 = minps(auVar10,auVar13);
      auVar10 = maxps(auVar9,auVar2);
      auVar13 = minps(auVar13,auVar2);
      uVar8 = (uint)(((auVar10._0_4_ + auVar13._0_4_) - *pfVar3) * pfVar3[4]);
      uVar11 = (uint)(((auVar10._4_4_ + auVar13._4_4_) - pfVar3[1]) * pfVar3[5]);
      uVar12 = (uint)(((auVar10._8_4_ + auVar13._8_4_) - pfVar3[2]) * pfVar3[6]);
      this_00 = this_00 + 1;
      *puVar1 = ((((uVar11 << 0x10 | uVar11) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) *
                10 & 0x12492492 |
                (((((uVar12 << 0x10 | uVar12) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3)
                 * 5 & 0x9249249) << 2 |
                ((((uVar8 << 0x10 | uVar8) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
                & 0x9249249;
    } while (this_00 != (TaskScheduler *)(ulong)uVar7);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00106eed) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   int, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
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
      *(undefined ***)pTVar4 = &PTR_execute_00111670;
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
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  TaskScheduler *this_00;
  uint uVar8;
  uint uVar11;
  uint uVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  
  uVar7 = *(uint *)(this + 8);
  uVar8 = *(uint *)(this + 0xc);
  this_00 = (TaskScheduler *)(ulong)uVar8;
  if (*(uint *)(this + 0x10) < uVar7 - uVar8) {
    uVar7 = uVar7 + uVar8 >> 1;
    spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
              (this_00,uVar7,*(uint *)(this + 0x10),(uint)*(undefined8 *)(this + 0x18),
               *(_lambda_embree__range<unsigned_int>_const___2_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
              ((TaskScheduler *)(ulong)uVar7,*(uint *)(this + 8),*(uint *)(this + 0x10),
               (uint)*(undefined8 *)(this + 0x18),
               *(_lambda_embree__range<unsigned_int>_const___2_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  if (this_00 < (TaskScheduler *)(ulong)uVar7) {
    do {
      pfVar3 = *(float **)(this + 0x20);
      puVar1 = (uint *)(*(long *)(*(long *)(this + 0x18) + 0x58) + (long)this_00 * 8);
      lVar4 = **(long **)(*(long *)(this + 0x18) + 0x48);
      puVar6 = (uint *)((ulong)puVar1[1] * *(long *)(lVar4 + 0x60) + *(long *)(lVar4 + 0x58));
      lVar5 = *(long *)(lVar4 + 0x88);
      lVar4 = *(long *)(lVar4 + 0x90);
      auVar10 = *(undefined1 (*) [16])(lVar5 + (ulong)*puVar6 * lVar4);
      auVar13 = *(undefined1 (*) [16])(lVar5 + (ulong)puVar6[1] * lVar4);
      auVar2 = *(undefined1 (*) [16])(lVar5 + (ulong)puVar6[2] * lVar4);
      auVar9 = maxps(auVar10,auVar13);
      auVar13 = minps(auVar10,auVar13);
      auVar10 = maxps(auVar9,auVar2);
      auVar13 = minps(auVar13,auVar2);
      uVar8 = (uint)(((auVar10._0_4_ + auVar13._0_4_) - *pfVar3) * pfVar3[4]);
      uVar11 = (uint)(((auVar10._4_4_ + auVar13._4_4_) - pfVar3[1]) * pfVar3[5]);
      uVar12 = (uint)(((auVar10._8_4_ + auVar13._8_4_) - pfVar3[2]) * pfVar3[6]);
      this_00 = this_00 + 1;
      *puVar1 = ((((uVar11 << 0x10 | uVar11) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) *
                10 & 0x12492492 |
                (((((uVar12 << 0x10 | uVar12) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3)
                 * 5 & 0x9249249) << 2 |
                ((((uVar8 << 0x10 | uVar8) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
                & 0x9249249;
    } while (this_00 != (TaskScheduler *)(ulong)uVar7);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001075dd) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   int, embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
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
      *(undefined ***)pTVar4 = &PTR_execute_00111688;
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
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2}>(unsigned int, unsigned int,
   unsigned int,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#2} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::{lambda(embree::range<unsigned_int>const&)#2}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>(unsigned_int,unsigned_int,unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  TaskScheduler *this_00;
  uint uVar8;
  uint uVar11;
  uint uVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  
  uVar7 = *(uint *)(this + 8);
  uVar8 = *(uint *)(this + 0xc);
  this_00 = (TaskScheduler *)(ulong)uVar8;
  if (*(uint *)(this + 0x10) < uVar7 - uVar8) {
    uVar7 = uVar7 + uVar8 >> 1;
    spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
              (this_00,uVar7,*(uint *)(this + 0x10),(uint)*(undefined8 *)(this + 0x18),
               *(_lambda_embree__range<unsigned_int>_const___2_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
              ((TaskScheduler *)(ulong)uVar7,*(uint *)(this + 8),*(uint *)(this + 0x10),
               (uint)*(undefined8 *)(this + 0x18),
               *(_lambda_embree__range<unsigned_int>_const___2_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  if (this_00 < (TaskScheduler *)(ulong)uVar7) {
    do {
      pfVar3 = *(float **)(this + 0x20);
      puVar1 = (uint *)(*(long *)(*(long *)(this + 0x18) + 0x58) + (long)this_00 * 8);
      lVar4 = **(long **)(*(long *)(this + 0x18) + 0x48);
      puVar6 = (uint *)((ulong)puVar1[1] * *(long *)(lVar4 + 0x60) + *(long *)(lVar4 + 0x58));
      lVar5 = *(long *)(lVar4 + 0x88);
      lVar4 = *(long *)(lVar4 + 0x90);
      auVar10 = *(undefined1 (*) [16])(lVar5 + (ulong)*puVar6 * lVar4);
      auVar13 = *(undefined1 (*) [16])(lVar5 + (ulong)puVar6[1] * lVar4);
      auVar2 = *(undefined1 (*) [16])(lVar5 + (ulong)puVar6[2] * lVar4);
      auVar9 = maxps(auVar10,auVar13);
      auVar13 = minps(auVar10,auVar13);
      auVar10 = maxps(auVar9,auVar2);
      auVar13 = minps(auVar13,auVar2);
      uVar8 = (uint)(((auVar10._0_4_ + auVar13._0_4_) - *pfVar3) * pfVar3[4]);
      uVar11 = (uint)(((auVar10._4_4_ + auVar13._4_4_) - pfVar3[1]) * pfVar3[5]);
      uVar12 = (uint)(((auVar10._8_4_ + auVar13._8_4_) - pfVar3[2]) * pfVar3[6]);
      this_00 = this_00 + 1;
      *puVar1 = ((((uVar11 << 0x10 | uVar11) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) *
                10 & 0x12492492 |
                (((((uVar12 << 0x10 | uVar12) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3)
                 * 5 & 0x9249249) << 2 |
                ((((uVar8 << 0x10 | uVar8) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
                & 0x9249249;
    } while (this_00 != (TaskScheduler *)(ulong)uVar7);
  }
  return;
}



/* embree::BBox<embree::Vec3fa> embree::parallel_reduce_internal<unsigned int,
   embree::BBox<embree::Vec3fa>,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1}, embree::BBox<embree::Vec3fa> const
   (embree::BBox<embree::Vec3fa> const&, embree::BBox<embree::Vec3fa> const&)>(unsigned int,
   unsigned int, unsigned int, unsigned int, embree::BBox<embree::Vec3fa> const&,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1} const&,
   embree::BBox<embree::Vec3fa> const ( const&)(embree::BBox<embree::Vec3fa> const&,
   embree::BBox<embree::Vec3fa> const&)) [clone .isra.0] */

BBox * embree::
       parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                 (uint param_1,uint param_2,uint param_3,uint param_4,BBox *param_5,
                 _lambda_embree__range<unsigned_int>_const___1_ *param_6,
                 _func_BBox_BBox_ptr_BBox_ptr *param_7)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 in_register_0000003c;
  BBox *pBVar6;
  long in_FS_OFFSET;
  uint local_210c;
  uint local_2108;
  uint local_2104;
  long local_2100;
  long local_20f8;
  undefined8 local_20f0;
  undefined8 uStack_20e8;
  uint *local_20e0;
  undefined1 *puStack_20d8;
  _lambda_embree__range<unsigned_int>_const___1_ *local_20d0;
  undefined1 local_20c0 [8192];
  undefined1 *local_c0;
  ulong local_b8;
  long local_48;
  
  pBVar6 = (BBox *)CONCAT44(in_register_0000003c,param_1);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_210c = param_4;
  local_2108 = param_3;
  local_2104 = param_2;
  uVar2 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2104) {
    local_2104 = 0x200;
  }
  if (uVar2 < local_2104) {
    local_2104 = uVar2;
  }
  uVar5 = (ulong)local_2104;
  local_b8 = uVar5;
  if (uVar5 < 0x101) {
    local_c0 = local_20c0;
  }
  else {
    local_c0 = (undefined1 *)embree::alignedMalloc(uVar5 << 5,0x40);
    uVar5 = (ulong)local_2104;
  }
  local_20f0 = &local_2108;
  uStack_20e8 = &local_210c;
  local_20e0 = &local_2104;
  puStack_20d8 = local_20c0;
  local_20d0 = param_6;
  if ((int)uVar5 == 0) {
    uVar1 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar6 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar6 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(pBVar6 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar6 + 0x18) = uVar1;
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnIjZNS_12parallel_forIjZNS_24parallel_reduce_internalIjNS_4BBoxINS_6Vec3faEEEZNKS_4sse216BVHBuilderMorton8BuilderTINS_13BVHNodeRecordINS_10NodeRefPtrILi4EEEEENS_13FastAllocator15CachedAllocatorENS_4BVHNILi4EE11CreateAllocENS_10AABBNode_tISC_Li4EE6CreateENS7_13SetBVHNBoundsILi4EEENS7_16CreateMortonLeafILi4ENS_10TriangleMiILi4EEEEENS7_19CalculateMeshBoundsINS_12TriangleMeshEEENS_5Scene29BuildProgressMonitorInterfaceEE19recreateMortonCodesERKNS_5rangeIjEEEUlS11_E_FKS6_RS13_S14_EEET0_T_S17_S17_S17_RKS16_RKT1_RKT2_EUljE_EEvS17_S19_EUlS11_E_EEvS17_S17_S17_S19_PNS0_16TaskGroupContextE_isra_0
              (0,uVar5,1,(BBox *)&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_20f8);
    }
    uVar1 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar6 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar6 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    lVar3 = 0;
    *(undefined8 *)(pBVar6 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar6 + 0x18) = uVar1;
    if (local_2104 != 0) {
      do {
        lVar4 = lVar3 + 1;
        (*param_7)((BBox *)&local_20f0,pBVar6,(BBox *)(local_c0 + lVar3 * 0x20));
        *(undefined4 *)pBVar6 = (undefined4)local_20f0;
        *(undefined4 *)(pBVar6 + 4) = local_20f0._4_4_;
        *(undefined4 *)(pBVar6 + 8) = (undefined4)uStack_20e8;
        *(undefined4 *)(pBVar6 + 0xc) = uStack_20e8._4_4_;
        *(uint **)(pBVar6 + 0x10) = local_20e0;
        *(undefined1 **)(pBVar6 + 0x18) = puStack_20d8;
        lVar3 = lVar4;
      } while ((uint)lVar4 < local_2104);
    }
  }
  if (local_c0 != local_20c0) {
    embree::alignedFree(local_c0);
  }
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar6;
}



/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const */

void __thiscall
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recreateMortonCodes
          (BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
           *this,range *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  TaskScheduler *this_00;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  uint uVar18;
  uint uVar22;
  uint uVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  _lambda_embree__range<unsigned_int>_const___2_ local_58 [16];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  long local_30;
  
  uVar18 = *(uint *)(param_1 + 4);
  uVar22 = *(uint *)param_1;
  this_00 = (TaskScheduler *)(ulong)uVar22;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar18 - uVar22 < 0x400) {
    uVar8 = (ulong)uVar18;
    lVar7 = *(long *)(this + 0x58);
    uVar10 = (ulong)uVar22;
    if (uVar10 < uVar8) {
      lVar17 = uVar10 * 8;
      lVar14 = lVar7 + lVar17;
      lVar13 = **(long **)(this + 0x48);
      auVar28._4_4_ = _LC4;
      auVar28._0_4_ = _LC4;
      auVar28._8_4_ = _LC4;
      auVar28._12_4_ = _LC4;
      auVar30._4_4_ = _LC2;
      auVar30._0_4_ = _LC2;
      auVar30._8_4_ = _LC2;
      auVar30._12_4_ = _LC2;
      lVar15 = *(long *)(lVar13 + 0x58);
      lVar16 = *(long *)(lVar13 + 0x60);
      lVar11 = *(long *)(lVar13 + 0x88);
      lVar13 = *(long *)(lVar13 + 0x90);
      do {
        puVar6 = (uint *)(lVar14 + 4);
        lVar14 = lVar14 + 8;
        puVar6 = (uint *)((ulong)*puVar6 * lVar16 + lVar15);
        auVar20 = *(undefined1 (*) [16])(lVar11 + (ulong)*puVar6 * lVar13);
        auVar25 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[1] * lVar13);
        auVar21 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[2] * lVar13);
        auVar19 = maxps(auVar20,auVar25);
        auVar25 = minps(auVar20,auVar25);
        auVar20 = maxps(auVar19,auVar21);
        auVar25 = minps(auVar25,auVar21);
        auVar19._0_4_ = auVar20._0_4_ + auVar25._0_4_;
        auVar19._4_4_ = auVar20._4_4_ + auVar25._4_4_;
        auVar19._8_4_ = auVar20._8_4_ + auVar25._8_4_;
        auVar19._12_4_ = auVar20._12_4_ + auVar25._12_4_;
        auVar28 = minps(auVar28,auVar19);
        auVar30 = maxps(auVar30,auVar19);
      } while (lVar7 + uVar8 * 8 != lVar14);
      auVar31._0_4_ = auVar30._0_4_ - auVar28._0_4_;
      auVar31._4_4_ = auVar30._4_4_ - auVar28._4_4_;
      auVar31._8_4_ = auVar30._8_4_ - auVar28._8_4_;
      auVar31._12_4_ = auVar30._12_4_ - auVar28._12_4_;
      auVar20 = rcpps(auVar21,auVar31);
      bVar3 = _LC12 < auVar31._0_4_;
      bVar4 = _LC12 < auVar31._4_4_;
      bVar5 = _LC12 < auVar31._8_4_;
      fVar24 = auVar20._0_4_;
      fVar26 = auVar20._4_4_;
      fVar27 = auVar20._8_4_;
      fVar24 = ((_LC14 - auVar31._0_4_ * fVar24) * fVar24 + fVar24) * _LC16;
      fVar26 = ((_LC14 - auVar31._4_4_ * fVar26) * fVar26 + fVar26) * _LC16;
      fVar27 = ((_LC14 - auVar31._8_4_ * fVar27) * fVar27 + fVar27) * _LC16;
      while( true ) {
        puVar6 = (uint *)((ulong)((uint *)(lVar7 + lVar17))[1] * lVar16 + lVar15);
        auVar20 = *(undefined1 (*) [16])(lVar11 + (ulong)*puVar6 * lVar13);
        auVar25 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[1] * lVar13);
        auVar30 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[2] * lVar13);
        auVar21 = maxps(auVar20,auVar25);
        auVar25 = minps(auVar20,auVar25);
        auVar20 = maxps(auVar21,auVar30);
        auVar25 = minps(auVar25,auVar30);
        uVar18 = (uint)(((auVar20._0_4_ + auVar25._0_4_) - auVar28._0_4_) *
                       (float)(-(uint)bVar3 & (uint)fVar24));
        uVar22 = (uint)(((auVar20._4_4_ + auVar25._4_4_) - auVar28._4_4_) *
                       (float)(-(uint)bVar4 & (uint)fVar26));
        uVar23 = (uint)(((auVar20._8_4_ + auVar25._8_4_) - auVar28._8_4_) *
                       (float)(-(uint)bVar5 & (uint)fVar27));
        uVar10 = uVar10 + 1;
        *(uint *)(lVar7 + lVar17) =
             ((((uVar22 << 0x10 | uVar22) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 10
             & 0x12492492 |
             (((((uVar23 << 0x10 | uVar23) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249) << 2 |
             ((((uVar18 << 0x10 | uVar18) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249;
        uVar8 = (ulong)*(uint *)(param_1 + 4);
        if (uVar8 <= uVar10) break;
        lVar7 = *(long *)(this + 0x58);
        lVar17 = uVar10 * 8;
        lVar14 = **(long **)(this + 0x48);
        lVar11 = *(long *)(lVar14 + 0x88);
        lVar15 = *(long *)(lVar14 + 0x58);
        lVar16 = *(long *)(lVar14 + 0x60);
        lVar13 = *(long *)(lVar14 + 0x90);
      }
      uVar10 = (ulong)*(uint *)param_1;
      lVar7 = *(long *)(this + 0x58);
    }
    puVar6 = (uint *)(lVar7 + uVar8 * 8);
    puVar1 = (uint *)(lVar7 + uVar10 * 8);
    if (puVar6 != puVar1) {
      lVar7 = uVar8 * 8 + uVar10 * -8;
      uVar8 = lVar7 >> 3;
      if (uVar8 == 0) {
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar6,0xfffffffffffffffe);
      }
      else {
        lVar14 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar6,(long)(int)lVar14 * 2);
        if (0x80 < lVar7) {
          puVar12 = puVar1 + 0x20;
          std::
          __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                    (puVar1,puVar12);
          for (; puVar6 != puVar12; puVar12 = puVar12 + 2) {
            while( true ) {
              uVar2 = *(undefined8 *)puVar12;
              uVar18 = *puVar12;
              puVar1 = puVar12 + -2;
              if (puVar12[-2] <= uVar18) break;
              do {
                puVar9 = puVar1;
                *(undefined8 *)(puVar9 + 2) = *(undefined8 *)puVar9;
                puVar1 = puVar9 + -2;
              } while (uVar18 < puVar9[-2]);
              puVar12 = puVar12 + 2;
              *(undefined8 *)puVar9 = uVar2;
              if (puVar6 == puVar12) goto LAB_001084b6;
            }
            *(undefined8 *)puVar12 = uVar2;
          }
          goto LAB_001084b6;
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::
        __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar6);
        return;
      }
      goto LAB_001086e3;
    }
  }
  else {
    uVar23 = (uVar18 - uVar22) + 0x3ff >> 10;
    local_78._4_4_ = _LC4;
    local_78._0_4_ = _LC4;
    local_78._8_4_ = _LC4;
    local_78._12_4_ = _LC4;
    local_68._4_4_ = _LC2;
    local_68._0_4_ = _LC2;
    local_68._8_4_ = _LC2;
    local_68._12_4_ = _LC2;
    local_a8 = this;
    if (uVar23 == 1) {
      auVar20 = local_68;
      local_98 = local_78;
      _local_88 = local_68;
      if ((ulong)uVar22 < (ulong)uVar18) {
        lVar7 = *(long *)(this + 0x58) + (ulong)uVar22 * 8;
        do {
          lVar14 = **(long **)(this + 0x48);
          puVar6 = (uint *)(lVar7 + 4);
          lVar7 = lVar7 + 8;
          puVar6 = (uint *)((ulong)*puVar6 * *(long *)(lVar14 + 0x60) + *(long *)(lVar14 + 0x58));
          lVar17 = *(long *)(lVar14 + 0x88);
          lVar14 = *(long *)(lVar14 + 0x90);
          auVar20 = *(undefined1 (*) [16])(lVar17 + (ulong)*puVar6 * lVar14);
          auVar25 = *(undefined1 (*) [16])(lVar17 + (ulong)puVar6[1] * lVar14);
          auVar28 = *(undefined1 (*) [16])(lVar17 + (ulong)puVar6[2] * lVar14);
          auVar30 = maxps(auVar20,auVar25);
          auVar25 = minps(auVar20,auVar25);
          auVar20 = maxps(auVar30,auVar28);
          auVar28 = minps(auVar25,auVar28);
          auVar25._0_4_ = auVar20._0_4_ + auVar28._0_4_;
          auVar25._4_4_ = auVar20._4_4_ + auVar28._4_4_;
          auVar25._8_4_ = auVar20._8_4_ + auVar28._8_4_;
          auVar25._12_4_ = auVar20._12_4_ + auVar28._12_4_;
          local_98 = minps(local_98,auVar25);
          _local_88 = maxps(_local_88,auVar25);
        } while (*(long *)(this + 0x58) + (ulong)uVar18 * 8 != lVar7);
        auVar20._0_4_ = SUB164(_local_88,0) - local_98._0_4_;
        auVar20._4_4_ = SUB164(_local_88,4) - local_98._4_4_;
        auVar20._8_4_ = SUB164(_local_88,8) - local_98._8_4_;
        auVar20._12_4_ = SUB164(_local_88,0xc) - local_98._12_4_;
      }
    }
    else {
      parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                ((uint)local_98,uVar23,uVar22,uVar18,(BBox *)local_78,
                 (_lambda_embree__range<unsigned_int>_const___1_ *)&local_a8,
                 BBox<embree::Vec3fa>::merge);
      this_00 = (TaskScheduler *)(ulong)*(uint *)param_1;
      auVar20._0_4_ = (float)local_88._0_4_ - local_98._0_4_;
      auVar20._4_4_ = (float)local_88._4_4_ - local_98._4_4_;
      auVar20._8_4_ = fStack_80 - local_98._8_4_;
      auVar20._12_4_ = fStack_7c - local_98._12_4_;
      uVar18 = *(uint *)(param_1 + 4);
    }
    auVar25 = rcpps(local_98,auVar20);
    local_a0 = 0;
    fVar24 = auVar25._0_4_;
    fVar26 = auVar25._4_4_;
    fVar27 = auVar25._8_4_;
    fVar29 = auVar25._12_4_;
    local_48 = (uint)(((_LC14 - auVar20._0_4_ * fVar24) * fVar24 + fVar24) * _LC16) &
               -(uint)(_LC12 < auVar20._0_4_);
    uStack_44 = (uint)(((_LC14 - auVar20._4_4_ * fVar26) * fVar26 + fVar26) * _LC16) &
                -(uint)(_LC12 < auVar20._4_4_);
    uStack_40 = (uint)(((_LC14 - auVar20._8_4_ * fVar27) * fVar27 + fVar27) * _LC16) &
                -(uint)(_LC12 < auVar20._8_4_);
    uStack_3c = (uint)(((_LC14 - auVar20._12_4_ * fVar29) * fVar29 + fVar29) * _LC16) &
                -(uint)(_LC12 < auVar20._12_4_);
    local_58 = (_lambda_embree__range<unsigned_int>_const___2_  [16])local_98;
    TaskScheduler::
    spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
              (this_00,uVar18,0x400,(uint)this,local_58,(TaskGroupContext *)&local_a0);
    embree::TaskScheduler::wait();
    if (local_a0 != 0) {
      local_78._0_8_ = local_a0;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(local_78);
    }
    radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>
              ((BuildPrim *)(*(long *)(this + 0x58) + (ulong)*(uint *)param_1 * 8),
               (ulong)(*(int *)(param_1 + 4) - *(uint *)param_1),0x18);
  }
LAB_001084b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001086e3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool) */

undefined8 *
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recurse(undefined8 *param_1,
         BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
         *param_2,long param_3,range *param_4,char param_5,undefined8 param_6,FastAllocator *param_7
         ,MutexSys *param_8)

{
  int *piVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  undefined8 *puVar25;
  long lVar26;
  long in_FS_OFFSET;
  undefined1 auVar27 [16];
  FastAllocator *local_288;
  MutexSys *local_270;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_268;
  long local_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 local_238 [12];
  undefined4 uStack_22c;
  uint *puStack_228;
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *pBStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  uint auStack_208 [2];
  undefined8 uStack_200;
  uint auStack_1f8 [12];
  undefined8 auStack_1c8 [49];
  long local_40;
  
  lVar23 = lRam0000000000108e65;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_270 = param_8;
  local_288 = param_7;
  local_250 = param_3;
  if (param_7 == (FastAllocator *)0x0) {
    local_288 = (FastAllocator *)**(undefined8 **)(param_2 + 0x28);
    local_270 = *(MutexSys **)(in_FS_OFFSET + lRam0000000000108e65);
    if (local_270 == (MutexSys *)0x0) {
      local_270 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(local_270);
      *(undefined8 *)(local_270 + 8) = 0;
      *(MutexSys **)(local_270 + 0x40) = local_270;
      *(undefined8 *)(local_270 + 0x48) = 0;
      *(undefined8 *)(local_270 + 0x50) = 0;
      *(undefined8 *)(local_270 + 0x58) = 0;
      *(undefined8 *)(local_270 + 0x60) = 0;
      *(undefined8 *)(local_270 + 0x68) = 0;
      *(undefined8 *)(local_270 + 0x70) = 0;
      *(MutexSys **)(local_270 + 0x80) = local_270;
      *(undefined8 *)(local_270 + 0x88) = 0;
      *(undefined8 *)(local_270 + 0x90) = 0;
      *(undefined8 *)(local_270 + 0x98) = 0;
      *(undefined8 *)(local_270 + 0xa0) = 0;
      *(undefined8 *)(local_270 + 0xa8) = 0;
      *(undefined8 *)(local_270 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar23) = local_270;
      embree::MutexSys::lock();
      local_238._0_8_ = local_270;
      if (__MutexSys == _createMortonCodeArray<embree::TriangleMesh>) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,local_238);
        uVar18 = local_238._0_8_;
        if ((MutexSys *)local_238._0_8_ != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_238._0_8_);
          embree::alignedFree((void *)uVar18);
        }
      }
      else {
        *__MutexSys = local_270;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    local_270 = local_270 + 0x40;
  }
  if ((param_5 == '\0') ||
     (*(ulong *)(param_2 + 0x20) < (ulong)(uint)(*(int *)(param_4 + 4) - *(int *)param_4))) {
LAB_00108781:
    if (local_250 + 8U < *(ulong *)(param_2 + 8)) {
LAB_00108795:
      uVar7 = *(uint *)(param_4 + 4);
      uVar13 = *(uint *)param_4;
      uVar19 = (ulong)uVar13;
      if (*(ulong *)(param_2 + 0x10) < (ulong)(uVar7 - uVar13)) {
        lVar23 = *(long *)(param_2 + 0x58);
        uVar13 = *(uint *)(lVar23 + (ulong)(uVar7 - 1) * 8) ^ *(uint *)(lVar23 + (ulong)uVar13 * 8);
        if (uVar13 == 0) {
LAB_00108fab:
          recreateMortonCodes(param_2,param_4);
          uVar7 = *(uint *)(param_4 + 4);
          lVar23 = *(long *)(param_2 + 0x58);
          auStack_208[0] = *(uint *)param_4;
          uVar19 = (ulong)auStack_208[0];
          uVar13 = *(uint *)(lVar23 + (ulong)(uVar7 - 1) * 8) ^ *(uint *)(lVar23 + uVar19 * 8);
          if (uVar13 != 0) {
            iVar10 = 0x1f;
            if (uVar13 != 0) {
              for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
              }
            }
            iVar10 = 0x1f - iVar10;
            if (iVar10 != 0x20) goto LAB_001087d6;
          }
          auStack_208[1] = auStack_208[0] + uVar7 >> 1;
        }
        else {
          iVar10 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          iVar10 = 0x1f - iVar10;
          if (iVar10 == 0x20) goto LAB_00108fab;
LAB_001087d6:
          auStack_208[0] = (uint)uVar19;
          uVar22 = auStack_208[0] + 1;
          uVar13 = uVar7;
          while (auStack_208[1] = uVar13, uVar22 != auStack_208[1]) {
            uVar13 = (int)uVar19 + auStack_208[1] >> 1;
            if ((0x80000000U >> ((byte)iVar10 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar13 * 8)) == 0)
            {
              uVar22 = uVar13 + 1;
              uVar19 = (ulong)uVar13;
              uVar13 = auStack_208[1];
            }
          }
        }
        uVar19 = 2;
        uStack_200._0_4_ = auStack_208[1];
        uStack_200._4_4_ = uVar7;
        if (2 < *(ulong *)param_2) {
          do {
            iVar11 = 0;
            uVar13 = 0;
            iVar10 = -1;
            puVar15 = auStack_208 + 1;
            do {
              uVar7 = *puVar15 - puVar15[-1];
              if ((*(ulong *)(param_2 + 0x10) < (ulong)uVar7) && (uVar13 < uVar7)) {
                uVar13 = uVar7;
                iVar10 = iVar11;
              }
              iVar11 = iVar11 + 1;
              puVar15 = puVar15 + 2;
            } while (iVar11 != (int)uVar19);
            if (iVar10 == -1) break;
            lVar26 = (long)iVar10;
            uVar13 = auStack_208[lVar26 * 2 + 1];
            uVar21 = (ulong)auStack_208[lVar26 * 2];
            uVar7 = *(uint *)(lVar23 + (ulong)(uVar13 - 1) * 8) ^ *(uint *)(lVar23 + uVar21 * 8);
            if (uVar7 == 0) {
LAB_00108d5f:
              recreateMortonCodes(param_2,(range *)(auStack_208 + lVar26 * 2));
              uVar13 = auStack_208[lVar26 * 2 + 1];
              lVar23 = *(long *)(param_2 + 0x58);
              uVar7 = auStack_208[lVar26 * 2];
              uVar21 = (ulong)uVar7;
              uVar22 = *(uint *)(lVar23 + (ulong)(uVar13 - 1) * 8) ^ *(uint *)(lVar23 + uVar21 * 8);
              if (uVar22 != 0) {
                iVar10 = 0x1f;
                if (uVar22 != 0) {
                  for (; uVar22 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                  }
                }
                iVar10 = 0x1f - iVar10;
                if (iVar10 != 0x20) goto LAB_001088e2;
              }
              uVar22 = uVar7 + uVar13;
              uVar13 = auStack_208[lVar26 * 2 + 1];
              uVar22 = uVar22 >> 1;
            }
            else {
              iVar10 = 0x1f;
              if (uVar7 != 0) {
                for (; uVar7 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                }
              }
              iVar10 = 0x1f - iVar10;
              if (iVar10 == 0x20) goto LAB_00108d5f;
LAB_001088e2:
              uVar7 = (uint)uVar21;
              uVar24 = uVar7 + 1;
              uVar14 = uVar13;
              while (uVar22 = uVar14, uVar24 != uVar22) {
                uVar14 = (int)uVar21 + uVar22 >> 1;
                if ((0x80000000U >> ((byte)iVar10 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar14 * 8))
                    == 0) {
                  uVar21 = (ulong)uVar14;
                  uVar24 = uVar14 + 1;
                  uVar14 = uVar22;
                }
              }
            }
            *(undefined8 *)(auStack_208 + lVar26 * 2) = (&uStack_210)[uVar19];
            *(uint *)(&uStack_210 + uVar19) = uVar7;
            *(uint *)((long)&uStack_210 + uVar19 * 8 + 4) = uVar22;
            auStack_208[uVar19 * 2] = uVar22;
            auStack_208[uVar19 * 2 + 1] = uVar13;
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(ulong *)param_2);
        }
        uStack_240 = 0x80;
        lVar23 = *(long *)local_270;
        if (local_288 != *(FastAllocator **)(lVar23 + 8)) {
          embree::MutexSys::lock();
          if (*(long *)(lVar23 + 8) != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)(lVar23 + 8) + 0x118);
            *plVar2 = *plVar2 + *(long *)(lVar23 + 0xa8) + *(long *)(lVar23 + 0x68);
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar23 + 8) + 0x120);
            *plVar2 = *plVar2 + (((*(long *)(lVar23 + 0x98) + *(long *)(lVar23 + 0x58)) -
                                 *(long *)(lVar23 + 0x50)) - *(long *)(lVar23 + 0x90));
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar23 + 8) + 0x128);
            *plVar2 = *plVar2 + *(long *)(lVar23 + 0xb0) + *(long *)(lVar23 + 0x70);
            UNLOCK();
          }
          *(undefined8 *)(lVar23 + 0x48) = 0;
          *(undefined8 *)(lVar23 + 0x58) = 0;
          *(undefined8 *)(lVar23 + 0x50) = 0;
          *(undefined8 *)(lVar23 + 0x68) = 0;
          *(undefined8 *)(lVar23 + 0x70) = 0;
          *(undefined8 *)(lVar23 + 0x60) = 0;
          if (local_288 == (FastAllocator *)0x0) {
            *(undefined8 *)(lVar23 + 0x88) = 0;
            uVar18 = 0;
            *(undefined8 *)(lVar23 + 0x98) = 0;
            *(undefined8 *)(lVar23 + 0x90) = 0;
            *(undefined8 *)(lVar23 + 0xa8) = 0;
            *(undefined8 *)(lVar23 + 0xb0) = 0;
          }
          else {
            uVar18 = *(undefined8 *)(local_288 + 0x10);
            *(undefined8 *)(lVar23 + 0x88) = 0;
            *(undefined8 *)(lVar23 + 0x98) = 0;
            *(undefined8 *)(lVar23 + 0x60) = uVar18;
            *(undefined8 *)(lVar23 + 0x90) = 0;
            *(undefined8 *)(lVar23 + 0xa8) = 0;
            *(undefined8 *)(lVar23 + 0xb0) = 0;
            *(undefined8 *)(lVar23 + 0xa0) = 0;
            uVar18 = *(undefined8 *)(local_288 + 0x10);
          }
          *(undefined8 *)(lVar23 + 0xa0) = uVar18;
          LOCK();
          *(FastAllocator **)(lVar23 + 8) = local_288;
          UNLOCK();
          local_238._0_8_ = lVar23;
          embree::MutexSys::lock();
          if (*(long **)(local_288 + 0x138) == *(long **)(local_288 + 0x140)) {
            std::
            vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
            ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                      ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                        *)(local_288 + 0x130));
          }
          else {
            **(long **)(local_288 + 0x138) = lVar23;
            *(long *)(local_288 + 0x138) = *(long *)(local_288 + 0x138) + 8;
          }
          embree::MutexSys::unlock();
          embree::MutexSys::unlock();
        }
        p_Stack_268 = (_lambda_embree__range<unsigned_long>_const___1_ *)local_238;
        lVar23 = *(long *)(local_270 + 0x10);
        *(long *)(local_270 + 0x28) = *(long *)(local_270 + 0x28) + 0x80;
        uVar8 = (ulong)(-(int)lVar23 & 0xf);
        uVar21 = lVar23 + 0x80 + uVar8;
        *(ulong *)(local_270 + 0x10) = uVar21;
        if (*(ulong *)(local_270 + 0x18) < uVar21) {
          *(long *)(local_270 + 0x10) = lVar23;
          if (*(ulong *)(local_270 + 0x20) < 0x200) {
            puVar9 = (ulong *)FastAllocator::malloc(local_288,&uStack_240,0x40,false);
          }
          else {
            local_238._0_8_ = *(ulong *)(local_270 + 0x20);
            puVar9 = (ulong *)FastAllocator::malloc(local_288,(ulong *)p_Stack_268,0x40,true);
            *(ulong **)(local_270 + 8) = puVar9;
            lVar23 = *(long *)(local_270 + 0x10);
            *(long *)(local_270 + 0x10) = 0x80;
            *(long *)(local_270 + 0x30) =
                 (*(long *)(local_270 + 0x18) + *(long *)(local_270 + 0x30)) - lVar23;
            *(undefined8 *)(local_270 + 0x18) = local_238._0_8_;
            if ((ulong)local_238._0_8_ < 0x80) {
              *(long *)(local_270 + 0x10) = 0;
              local_238._0_8_ = *(long *)(local_270 + 0x20);
              puVar9 = (ulong *)FastAllocator::malloc(local_288,(ulong *)p_Stack_268,0x40,false);
              *(ulong **)(local_270 + 8) = puVar9;
              *(long *)(local_270 + 0x30) =
                   (*(long *)(local_270 + 0x18) + *(long *)(local_270 + 0x30)) -
                   *(long *)(local_270 + 0x10);
              *(long *)(local_270 + 0x10) = 0x80;
              *(undefined8 *)(local_270 + 0x18) = local_238._0_8_;
              if ((ulong)local_238._0_8_ < 0x80) {
                *(long *)(local_270 + 0x10) = 0;
                puVar9 = (ulong *)0x0;
              }
            }
          }
        }
        else {
          *(ulong *)(local_270 + 0x30) = *(long *)(local_270 + 0x30) + uVar8;
          puVar9 = (ulong *)(*(long *)(local_270 + 8) + -0x80 + uVar21);
        }
        uVar6 = _UNK_00111a98;
        uVar5 = __LC4;
        uVar8 = _UNK_00111a88;
        uVar21 = __LC2;
        *puVar9 = 8;
        puVar9[1] = 8;
        puVar9[2] = 8;
        puVar9[3] = 8;
        puVar9[0xc] = uVar5;
        puVar9[0xd] = uVar6;
        puVar9[8] = uVar5;
        puVar9[9] = uVar6;
        puVar9[4] = uVar5;
        puVar9[5] = uVar6;
        puVar9[0xe] = uVar21;
        puVar9[0xf] = uVar8;
        puVar9[10] = uVar21;
        puVar9[0xb] = uVar8;
        puVar9[6] = uVar21;
        puVar9[7] = uVar8;
        if (*(ulong *)(param_2 + 0x20) < (ulong)(uint)(*(int *)(param_4 + 4) - *(int *)param_4)) {
          stack0xfffffffffffffdd0 = &local_250;
          local_238._0_8_ = auStack_1c8;
          uStack_248 = 0;
          puStack_228 = auStack_208;
          pBStack_220 = param_2;
          TaskScheduler::
          spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
                    (0,uVar19,1,p_Stack_268,(TaskGroupContext *)&uStack_248);
          embree::TaskScheduler::wait();
          if (uStack_248 != 0) {
            uStack_240 = uStack_248;
            std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
            std::rethrow_exception(&uStack_240);
          }
        }
        else {
          puVar12 = auStack_1c8;
          puVar15 = auStack_208;
          do {
            puVar20 = puVar15 + 2;
            recurse(p_Stack_268,param_2,local_250 + 1,puVar15,0);
            *puVar12 = local_238._0_8_;
            puVar12[2] = puStack_228;
            puVar12[3] = pBStack_220;
            puVar12[4] = uStack_218;
            puVar12[5] = uStack_210;
            puVar12 = puVar12 + 6;
            puVar15 = puVar20;
          } while (auStack_208 + uVar19 * 2 != puVar20);
        }
        puVar25 = auStack_1c8;
        auVar27._8_8_ = _UNK_00111a88;
        auVar27._0_8_ = __LC2;
        unique0x1000053d = _UNK_00111a98;
        local_238._0_8_ = __LC4;
        puVar12 = puVar25;
        puVar16 = puVar9;
        do {
          auVar3 = *(undefined1 (*) [16])(puVar12 + 2);
          auVar4 = *(undefined1 (*) [16])(puVar12 + 4);
          *(undefined8 *)((long)puVar16 * 2 - (long)puVar9) = *puVar12;
          _local_238 = minps(_local_238,auVar3);
          puVar17 = (ulong *)((long)puVar16 + 4);
          *(int *)(puVar16 + 4) = auVar3._0_4_;
          auVar27 = maxps(auVar27,auVar4);
          *(int *)(puVar16 + 0xc) = auVar3._8_4_;
          *(int *)(puVar16 + 6) = auVar4._0_4_;
          *(int *)(puVar16 + 8) = auVar3._4_4_;
          *(int *)(puVar16 + 10) = auVar4._4_4_;
          *(int *)(puVar16 + 0xe) = auVar4._8_4_;
          puVar12 = puVar12 + 6;
          puVar16 = puVar17;
        } while ((ulong *)((long)puVar9 + uVar19 * 4) != puVar17);
        uVar21 = 0;
        puVar12 = puVar25;
        do {
          piVar1 = (int *)((long)puVar12 + 0x1c);
          puVar12 = puVar12 + 6;
          uVar21 = uVar21 + (long)*piVar1;
        } while (puVar25 + uVar19 * 6 != puVar12);
        if (0xfff < uVar21) {
          puVar16 = puVar9;
          do {
            if (*(int *)((long)puVar25 + 0x1c) < 0x1000) {
              embree::sse2::BVHNRotate<4>::rotate(*puVar16,1);
              *puVar16 = *puVar16 | 0x8000000000000000;
            }
            puVar16 = puVar16 + 1;
            puVar25 = puVar25 + 6;
          } while (puVar9 + uVar19 != puVar16);
        }
        uStack_22c = (int)uVar21;
        auVar3 = _local_238;
        stack0xfffffffffffffdd0 = auVar3._8_8_;
        *param_1 = puVar9;
        param_1[2] = local_238._0_8_;
        param_1[3] = stack0xfffffffffffffdd0;
        *(undefined1 (*) [16])(param_1 + 4) = auVar27;
        _local_238 = auVar3;
        goto LAB_00108d1b;
      }
    }
  }
  else {
    if (*(code **)**(undefined8 **)(param_2 + 0x50) !=
        Scene::BuildProgressMonitorInterface::operator()) {
      (**(code **)**(undefined8 **)(param_2 + 0x50))();
      goto LAB_00108781;
    }
    embree::Scene::progressMonitor((double)(uint)(*(int *)(param_4 + 4) - *(int *)param_4));
    if (local_250 + 8U < *(ulong *)(param_2 + 8)) goto LAB_00108795;
  }
  createLargeLeaf(param_1,param_2,local_250,param_4);
LAB_00108d1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMi<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 in_R9;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  uVar2 = *(ulong *)(this + 8);
  uVar3 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar2 - uVar3) {
    uVar2 = uVar2 + uVar3 >> 1;
    spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar3,uVar2,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x40));
    spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar2,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x40));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    if (uVar3 < uVar2) {
      do {
        sse2::BVHBuilderMorton::
        BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
        ::recurse(local_68,*(undefined8 *)(this + 0x38),**(long **)(this + 0x28) + 1,
                  *(long *)(this + 0x30) + uVar3 * 8,1,in_R9,0,0,0);
        puVar1 = (undefined8 *)(uVar3 * 0x30 + *(long *)(this + 0x20));
        uVar3 = uVar3 + 1;
        *puVar1 = local_68[0];
        puVar1[2] = local_58;
        puVar1[3] = uStack_50;
        puVar1[4] = local_48;
        puVar1[5] = uStack_40;
      } while (uVar3 < uVar2);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BBox<embree::Vec3fa> embree::parallel_reduce_internal<unsigned int,
   embree::BBox<embree::Vec3fa>,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1}, embree::BBox<embree::Vec3fa> const
   (embree::BBox<embree::Vec3fa> const&, embree::BBox<embree::Vec3fa> const&)>(unsigned int,
   unsigned int, unsigned int, unsigned int, embree::BBox<embree::Vec3fa> const&,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1} const&,
   embree::BBox<embree::Vec3fa> const ( const&)(embree::BBox<embree::Vec3fa> const&,
   embree::BBox<embree::Vec3fa> const&)) [clone .isra.0] */

BBox * embree::
       parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                 (uint param_1,uint param_2,uint param_3,uint param_4,BBox *param_5,
                 _lambda_embree__range<unsigned_int>_const___1_ *param_6,
                 _func_BBox_BBox_ptr_BBox_ptr *param_7)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 in_register_0000003c;
  BBox *pBVar6;
  long in_FS_OFFSET;
  uint local_210c;
  uint local_2108;
  uint local_2104;
  long local_2100;
  long local_20f8;
  undefined8 local_20f0;
  undefined8 uStack_20e8;
  uint *local_20e0;
  undefined1 *puStack_20d8;
  _lambda_embree__range<unsigned_int>_const___1_ *local_20d0;
  undefined1 local_20c0 [8192];
  undefined1 *local_c0;
  ulong local_b8;
  long local_48;
  
  pBVar6 = (BBox *)CONCAT44(in_register_0000003c,param_1);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_210c = param_4;
  local_2108 = param_3;
  local_2104 = param_2;
  uVar2 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2104) {
    local_2104 = 0x200;
  }
  if (uVar2 < local_2104) {
    local_2104 = uVar2;
  }
  uVar5 = (ulong)local_2104;
  local_b8 = uVar5;
  if (uVar5 < 0x101) {
    local_c0 = local_20c0;
  }
  else {
    local_c0 = (undefined1 *)embree::alignedMalloc(uVar5 << 5,0x40);
    uVar5 = (ulong)local_2104;
  }
  local_20f0 = &local_2108;
  uStack_20e8 = &local_210c;
  local_20e0 = &local_2104;
  puStack_20d8 = local_20c0;
  local_20d0 = param_6;
  if ((int)uVar5 == 0) {
    uVar1 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar6 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar6 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(pBVar6 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar6 + 0x18) = uVar1;
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnIjZNS_12parallel_forIjZNS_24parallel_reduce_internalIjNS_4BBoxINS_6Vec3faEEEZNKS_4sse216BVHBuilderMorton8BuilderTINS_13BVHNodeRecordINS_10NodeRefPtrILi4EEEEENS_13FastAllocator15CachedAllocatorENS_4BVHNILi4EE11CreateAllocENS_10AABBNode_tISC_Li4EE6CreateENS7_13SetBVHNBoundsILi4EEENS7_16CreateMortonLeafILi4ENS_10TriangleMvILi4EEEEENS7_19CalculateMeshBoundsINS_12TriangleMeshEEENS_5Scene29BuildProgressMonitorInterfaceEE19recreateMortonCodesERKNS_5rangeIjEEEUlS11_E_FKS6_RS13_S14_EEET0_T_S17_S17_S17_RKS16_RKT1_RKT2_EUljE_EEvS17_S19_EUlS11_E_EEvS17_S17_S17_S19_PNS0_16TaskGroupContextE_isra_0
              (0,uVar5,1,(BBox *)&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_20f8);
    }
    uVar1 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar6 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar6 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    lVar3 = 0;
    *(undefined8 *)(pBVar6 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar6 + 0x18) = uVar1;
    if (local_2104 != 0) {
      do {
        lVar4 = lVar3 + 1;
        (*param_7)((BBox *)&local_20f0,pBVar6,(BBox *)(local_c0 + lVar3 * 0x20));
        *(undefined4 *)pBVar6 = (undefined4)local_20f0;
        *(undefined4 *)(pBVar6 + 4) = local_20f0._4_4_;
        *(undefined4 *)(pBVar6 + 8) = (undefined4)uStack_20e8;
        *(undefined4 *)(pBVar6 + 0xc) = uStack_20e8._4_4_;
        *(uint **)(pBVar6 + 0x10) = local_20e0;
        *(undefined1 **)(pBVar6 + 0x18) = puStack_20d8;
        lVar3 = lVar4;
      } while ((uint)lVar4 < local_2104);
    }
  }
  if (local_c0 != local_20c0) {
    embree::alignedFree(local_c0);
  }
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar6;
}



/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const */

void __thiscall
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recreateMortonCodes
          (BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
           *this,range *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  TaskScheduler *this_00;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  uint uVar18;
  uint uVar22;
  uint uVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  _lambda_embree__range<unsigned_int>_const___2_ local_58 [16];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  long local_30;
  
  uVar18 = *(uint *)(param_1 + 4);
  uVar22 = *(uint *)param_1;
  this_00 = (TaskScheduler *)(ulong)uVar22;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar18 - uVar22 < 0x400) {
    uVar8 = (ulong)uVar18;
    lVar7 = *(long *)(this + 0x58);
    uVar10 = (ulong)uVar22;
    if (uVar10 < uVar8) {
      lVar17 = uVar10 * 8;
      lVar14 = lVar7 + lVar17;
      lVar13 = **(long **)(this + 0x48);
      auVar28._4_4_ = _LC4;
      auVar28._0_4_ = _LC4;
      auVar28._8_4_ = _LC4;
      auVar28._12_4_ = _LC4;
      auVar30._4_4_ = _LC2;
      auVar30._0_4_ = _LC2;
      auVar30._8_4_ = _LC2;
      auVar30._12_4_ = _LC2;
      lVar15 = *(long *)(lVar13 + 0x58);
      lVar16 = *(long *)(lVar13 + 0x60);
      lVar11 = *(long *)(lVar13 + 0x88);
      lVar13 = *(long *)(lVar13 + 0x90);
      do {
        puVar6 = (uint *)(lVar14 + 4);
        lVar14 = lVar14 + 8;
        puVar6 = (uint *)((ulong)*puVar6 * lVar16 + lVar15);
        auVar20 = *(undefined1 (*) [16])(lVar11 + (ulong)*puVar6 * lVar13);
        auVar25 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[1] * lVar13);
        auVar21 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[2] * lVar13);
        auVar19 = maxps(auVar20,auVar25);
        auVar25 = minps(auVar20,auVar25);
        auVar20 = maxps(auVar19,auVar21);
        auVar25 = minps(auVar25,auVar21);
        auVar19._0_4_ = auVar20._0_4_ + auVar25._0_4_;
        auVar19._4_4_ = auVar20._4_4_ + auVar25._4_4_;
        auVar19._8_4_ = auVar20._8_4_ + auVar25._8_4_;
        auVar19._12_4_ = auVar20._12_4_ + auVar25._12_4_;
        auVar28 = minps(auVar28,auVar19);
        auVar30 = maxps(auVar30,auVar19);
      } while (lVar7 + uVar8 * 8 != lVar14);
      auVar31._0_4_ = auVar30._0_4_ - auVar28._0_4_;
      auVar31._4_4_ = auVar30._4_4_ - auVar28._4_4_;
      auVar31._8_4_ = auVar30._8_4_ - auVar28._8_4_;
      auVar31._12_4_ = auVar30._12_4_ - auVar28._12_4_;
      auVar20 = rcpps(auVar21,auVar31);
      bVar3 = _LC12 < auVar31._0_4_;
      bVar4 = _LC12 < auVar31._4_4_;
      bVar5 = _LC12 < auVar31._8_4_;
      fVar24 = auVar20._0_4_;
      fVar26 = auVar20._4_4_;
      fVar27 = auVar20._8_4_;
      fVar24 = ((_LC14 - auVar31._0_4_ * fVar24) * fVar24 + fVar24) * _LC16;
      fVar26 = ((_LC14 - auVar31._4_4_ * fVar26) * fVar26 + fVar26) * _LC16;
      fVar27 = ((_LC14 - auVar31._8_4_ * fVar27) * fVar27 + fVar27) * _LC16;
      while( true ) {
        puVar6 = (uint *)((ulong)((uint *)(lVar7 + lVar17))[1] * lVar16 + lVar15);
        auVar20 = *(undefined1 (*) [16])(lVar11 + (ulong)*puVar6 * lVar13);
        auVar25 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[1] * lVar13);
        auVar30 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[2] * lVar13);
        auVar21 = maxps(auVar20,auVar25);
        auVar25 = minps(auVar20,auVar25);
        auVar20 = maxps(auVar21,auVar30);
        auVar25 = minps(auVar25,auVar30);
        uVar18 = (uint)(((auVar20._0_4_ + auVar25._0_4_) - auVar28._0_4_) *
                       (float)(-(uint)bVar3 & (uint)fVar24));
        uVar22 = (uint)(((auVar20._4_4_ + auVar25._4_4_) - auVar28._4_4_) *
                       (float)(-(uint)bVar4 & (uint)fVar26));
        uVar23 = (uint)(((auVar20._8_4_ + auVar25._8_4_) - auVar28._8_4_) *
                       (float)(-(uint)bVar5 & (uint)fVar27));
        uVar10 = uVar10 + 1;
        *(uint *)(lVar7 + lVar17) =
             ((((uVar22 << 0x10 | uVar22) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 10
             & 0x12492492 |
             (((((uVar23 << 0x10 | uVar23) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249) << 2 |
             ((((uVar18 << 0x10 | uVar18) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249;
        uVar8 = (ulong)*(uint *)(param_1 + 4);
        if (uVar8 <= uVar10) break;
        lVar7 = *(long *)(this + 0x58);
        lVar17 = uVar10 * 8;
        lVar14 = **(long **)(this + 0x48);
        lVar11 = *(long *)(lVar14 + 0x88);
        lVar15 = *(long *)(lVar14 + 0x58);
        lVar16 = *(long *)(lVar14 + 0x60);
        lVar13 = *(long *)(lVar14 + 0x90);
      }
      uVar10 = (ulong)*(uint *)param_1;
      lVar7 = *(long *)(this + 0x58);
    }
    puVar6 = (uint *)(lVar7 + uVar8 * 8);
    puVar1 = (uint *)(lVar7 + uVar10 * 8);
    if (puVar6 != puVar1) {
      lVar7 = uVar8 * 8 + uVar10 * -8;
      uVar8 = lVar7 >> 3;
      if (uVar8 == 0) {
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar6,0xfffffffffffffffe);
      }
      else {
        lVar14 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar6,(long)(int)lVar14 * 2);
        if (0x80 < lVar7) {
          puVar12 = puVar1 + 0x20;
          std::
          __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                    (puVar1,puVar12);
          for (; puVar6 != puVar12; puVar12 = puVar12 + 2) {
            while( true ) {
              uVar2 = *(undefined8 *)puVar12;
              uVar18 = *puVar12;
              puVar1 = puVar12 + -2;
              if (puVar12[-2] <= uVar18) break;
              do {
                puVar9 = puVar1;
                *(undefined8 *)(puVar9 + 2) = *(undefined8 *)puVar9;
                puVar1 = puVar9 + -2;
              } while (uVar18 < puVar9[-2]);
              puVar12 = puVar12 + 2;
              *(undefined8 *)puVar9 = uVar2;
              if (puVar6 == puVar12) goto LAB_00109f16;
            }
            *(undefined8 *)puVar12 = uVar2;
          }
          goto LAB_00109f16;
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::
        __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar6);
        return;
      }
      goto LAB_0010a143;
    }
  }
  else {
    uVar23 = (uVar18 - uVar22) + 0x3ff >> 10;
    local_78._4_4_ = _LC4;
    local_78._0_4_ = _LC4;
    local_78._8_4_ = _LC4;
    local_78._12_4_ = _LC4;
    local_68._4_4_ = _LC2;
    local_68._0_4_ = _LC2;
    local_68._8_4_ = _LC2;
    local_68._12_4_ = _LC2;
    local_a8 = this;
    if (uVar23 == 1) {
      auVar20 = local_68;
      local_98 = local_78;
      _local_88 = local_68;
      if ((ulong)uVar22 < (ulong)uVar18) {
        lVar7 = *(long *)(this + 0x58) + (ulong)uVar22 * 8;
        do {
          lVar14 = **(long **)(this + 0x48);
          puVar6 = (uint *)(lVar7 + 4);
          lVar7 = lVar7 + 8;
          puVar6 = (uint *)((ulong)*puVar6 * *(long *)(lVar14 + 0x60) + *(long *)(lVar14 + 0x58));
          lVar17 = *(long *)(lVar14 + 0x88);
          lVar14 = *(long *)(lVar14 + 0x90);
          auVar20 = *(undefined1 (*) [16])(lVar17 + (ulong)*puVar6 * lVar14);
          auVar25 = *(undefined1 (*) [16])(lVar17 + (ulong)puVar6[1] * lVar14);
          auVar28 = *(undefined1 (*) [16])(lVar17 + (ulong)puVar6[2] * lVar14);
          auVar30 = maxps(auVar20,auVar25);
          auVar25 = minps(auVar20,auVar25);
          auVar20 = maxps(auVar30,auVar28);
          auVar28 = minps(auVar25,auVar28);
          auVar25._0_4_ = auVar20._0_4_ + auVar28._0_4_;
          auVar25._4_4_ = auVar20._4_4_ + auVar28._4_4_;
          auVar25._8_4_ = auVar20._8_4_ + auVar28._8_4_;
          auVar25._12_4_ = auVar20._12_4_ + auVar28._12_4_;
          local_98 = minps(local_98,auVar25);
          _local_88 = maxps(_local_88,auVar25);
        } while (*(long *)(this + 0x58) + (ulong)uVar18 * 8 != lVar7);
        auVar20._0_4_ = SUB164(_local_88,0) - local_98._0_4_;
        auVar20._4_4_ = SUB164(_local_88,4) - local_98._4_4_;
        auVar20._8_4_ = SUB164(_local_88,8) - local_98._8_4_;
        auVar20._12_4_ = SUB164(_local_88,0xc) - local_98._12_4_;
      }
    }
    else {
      parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                ((uint)local_98,uVar23,uVar22,uVar18,(BBox *)local_78,
                 (_lambda_embree__range<unsigned_int>_const___1_ *)&local_a8,
                 BBox<embree::Vec3fa>::merge);
      this_00 = (TaskScheduler *)(ulong)*(uint *)param_1;
      auVar20._0_4_ = (float)local_88._0_4_ - local_98._0_4_;
      auVar20._4_4_ = (float)local_88._4_4_ - local_98._4_4_;
      auVar20._8_4_ = fStack_80 - local_98._8_4_;
      auVar20._12_4_ = fStack_7c - local_98._12_4_;
      uVar18 = *(uint *)(param_1 + 4);
    }
    auVar25 = rcpps(local_98,auVar20);
    local_a0 = 0;
    fVar24 = auVar25._0_4_;
    fVar26 = auVar25._4_4_;
    fVar27 = auVar25._8_4_;
    fVar29 = auVar25._12_4_;
    local_48 = (uint)(((_LC14 - auVar20._0_4_ * fVar24) * fVar24 + fVar24) * _LC16) &
               -(uint)(_LC12 < auVar20._0_4_);
    uStack_44 = (uint)(((_LC14 - auVar20._4_4_ * fVar26) * fVar26 + fVar26) * _LC16) &
                -(uint)(_LC12 < auVar20._4_4_);
    uStack_40 = (uint)(((_LC14 - auVar20._8_4_ * fVar27) * fVar27 + fVar27) * _LC16) &
                -(uint)(_LC12 < auVar20._8_4_);
    uStack_3c = (uint)(((_LC14 - auVar20._12_4_ * fVar29) * fVar29 + fVar29) * _LC16) &
                -(uint)(_LC12 < auVar20._12_4_);
    local_58 = (_lambda_embree__range<unsigned_int>_const___2_  [16])local_98;
    TaskScheduler::
    spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
              (this_00,uVar18,0x400,(uint)this,local_58,(TaskGroupContext *)&local_a0);
    embree::TaskScheduler::wait();
    if (local_a0 != 0) {
      local_78._0_8_ = local_a0;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(local_78);
    }
    radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>
              ((BuildPrim *)(*(long *)(this + 0x58) + (ulong)*(uint *)param_1 * 8),
               (ulong)(*(int *)(param_1 + 4) - *(uint *)param_1),0x18);
  }
LAB_00109f16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a143:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool) */

undefined8 *
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recurse(undefined8 *param_1,
         BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
         *param_2,long param_3,range *param_4,char param_5,undefined8 param_6,FastAllocator *param_7
         ,MutexSys *param_8)

{
  int *piVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  undefined8 *puVar25;
  long lVar26;
  long in_FS_OFFSET;
  undefined1 auVar27 [16];
  FastAllocator *local_288;
  MutexSys *local_270;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_268;
  long local_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 local_238 [12];
  undefined4 uStack_22c;
  uint *puStack_228;
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *pBStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  uint auStack_208 [2];
  undefined8 uStack_200;
  uint auStack_1f8 [12];
  undefined8 auStack_1c8 [49];
  long local_40;
  
  lVar23 = lRam000000000010a8c5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_270 = param_8;
  local_288 = param_7;
  local_250 = param_3;
  if (param_7 == (FastAllocator *)0x0) {
    local_288 = (FastAllocator *)**(undefined8 **)(param_2 + 0x28);
    local_270 = *(MutexSys **)(in_FS_OFFSET + lRam000000000010a8c5);
    if (local_270 == (MutexSys *)0x0) {
      local_270 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(local_270);
      *(undefined8 *)(local_270 + 8) = 0;
      *(MutexSys **)(local_270 + 0x40) = local_270;
      *(undefined8 *)(local_270 + 0x48) = 0;
      *(undefined8 *)(local_270 + 0x50) = 0;
      *(undefined8 *)(local_270 + 0x58) = 0;
      *(undefined8 *)(local_270 + 0x60) = 0;
      *(undefined8 *)(local_270 + 0x68) = 0;
      *(undefined8 *)(local_270 + 0x70) = 0;
      *(MutexSys **)(local_270 + 0x80) = local_270;
      *(undefined8 *)(local_270 + 0x88) = 0;
      *(undefined8 *)(local_270 + 0x90) = 0;
      *(undefined8 *)(local_270 + 0x98) = 0;
      *(undefined8 *)(local_270 + 0xa0) = 0;
      *(undefined8 *)(local_270 + 0xa8) = 0;
      *(undefined8 *)(local_270 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar23) = local_270;
      embree::MutexSys::lock();
      local_238._0_8_ = local_270;
      if (__MutexSys == _createMortonCodeArray<embree::TriangleMesh>) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,local_238);
        uVar18 = local_238._0_8_;
        if ((MutexSys *)local_238._0_8_ != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_238._0_8_);
          embree::alignedFree((void *)uVar18);
        }
      }
      else {
        *__MutexSys = local_270;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    local_270 = local_270 + 0x40;
  }
  if ((param_5 == '\0') ||
     (*(ulong *)(param_2 + 0x20) < (ulong)(uint)(*(int *)(param_4 + 4) - *(int *)param_4))) {
LAB_0010a1e1:
    if (local_250 + 8U < *(ulong *)(param_2 + 8)) {
LAB_0010a1f5:
      uVar7 = *(uint *)(param_4 + 4);
      uVar13 = *(uint *)param_4;
      uVar19 = (ulong)uVar13;
      if (*(ulong *)(param_2 + 0x10) < (ulong)(uVar7 - uVar13)) {
        lVar23 = *(long *)(param_2 + 0x58);
        uVar13 = *(uint *)(lVar23 + (ulong)(uVar7 - 1) * 8) ^ *(uint *)(lVar23 + (ulong)uVar13 * 8);
        if (uVar13 == 0) {
LAB_0010aa0b:
          recreateMortonCodes(param_2,param_4);
          uVar7 = *(uint *)(param_4 + 4);
          lVar23 = *(long *)(param_2 + 0x58);
          auStack_208[0] = *(uint *)param_4;
          uVar19 = (ulong)auStack_208[0];
          uVar13 = *(uint *)(lVar23 + (ulong)(uVar7 - 1) * 8) ^ *(uint *)(lVar23 + uVar19 * 8);
          if (uVar13 != 0) {
            iVar10 = 0x1f;
            if (uVar13 != 0) {
              for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
              }
            }
            iVar10 = 0x1f - iVar10;
            if (iVar10 != 0x20) goto LAB_0010a236;
          }
          auStack_208[1] = auStack_208[0] + uVar7 >> 1;
        }
        else {
          iVar10 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          iVar10 = 0x1f - iVar10;
          if (iVar10 == 0x20) goto LAB_0010aa0b;
LAB_0010a236:
          auStack_208[0] = (uint)uVar19;
          uVar22 = auStack_208[0] + 1;
          uVar13 = uVar7;
          while (auStack_208[1] = uVar13, uVar22 != auStack_208[1]) {
            uVar13 = (int)uVar19 + auStack_208[1] >> 1;
            if ((0x80000000U >> ((byte)iVar10 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar13 * 8)) == 0)
            {
              uVar22 = uVar13 + 1;
              uVar19 = (ulong)uVar13;
              uVar13 = auStack_208[1];
            }
          }
        }
        uVar19 = 2;
        uStack_200._0_4_ = auStack_208[1];
        uStack_200._4_4_ = uVar7;
        if (2 < *(ulong *)param_2) {
          do {
            iVar11 = 0;
            uVar13 = 0;
            iVar10 = -1;
            puVar15 = auStack_208 + 1;
            do {
              uVar7 = *puVar15 - puVar15[-1];
              if ((*(ulong *)(param_2 + 0x10) < (ulong)uVar7) && (uVar13 < uVar7)) {
                uVar13 = uVar7;
                iVar10 = iVar11;
              }
              iVar11 = iVar11 + 1;
              puVar15 = puVar15 + 2;
            } while (iVar11 != (int)uVar19);
            if (iVar10 == -1) break;
            lVar26 = (long)iVar10;
            uVar13 = auStack_208[lVar26 * 2 + 1];
            uVar21 = (ulong)auStack_208[lVar26 * 2];
            uVar7 = *(uint *)(lVar23 + (ulong)(uVar13 - 1) * 8) ^ *(uint *)(lVar23 + uVar21 * 8);
            if (uVar7 == 0) {
LAB_0010a7bf:
              recreateMortonCodes(param_2,(range *)(auStack_208 + lVar26 * 2));
              uVar13 = auStack_208[lVar26 * 2 + 1];
              lVar23 = *(long *)(param_2 + 0x58);
              uVar7 = auStack_208[lVar26 * 2];
              uVar21 = (ulong)uVar7;
              uVar22 = *(uint *)(lVar23 + (ulong)(uVar13 - 1) * 8) ^ *(uint *)(lVar23 + uVar21 * 8);
              if (uVar22 != 0) {
                iVar10 = 0x1f;
                if (uVar22 != 0) {
                  for (; uVar22 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                  }
                }
                iVar10 = 0x1f - iVar10;
                if (iVar10 != 0x20) goto LAB_0010a342;
              }
              uVar22 = uVar7 + uVar13;
              uVar13 = auStack_208[lVar26 * 2 + 1];
              uVar22 = uVar22 >> 1;
            }
            else {
              iVar10 = 0x1f;
              if (uVar7 != 0) {
                for (; uVar7 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                }
              }
              iVar10 = 0x1f - iVar10;
              if (iVar10 == 0x20) goto LAB_0010a7bf;
LAB_0010a342:
              uVar7 = (uint)uVar21;
              uVar24 = uVar7 + 1;
              uVar14 = uVar13;
              while (uVar22 = uVar14, uVar24 != uVar22) {
                uVar14 = (int)uVar21 + uVar22 >> 1;
                if ((0x80000000U >> ((byte)iVar10 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar14 * 8))
                    == 0) {
                  uVar21 = (ulong)uVar14;
                  uVar24 = uVar14 + 1;
                  uVar14 = uVar22;
                }
              }
            }
            *(undefined8 *)(auStack_208 + lVar26 * 2) = (&uStack_210)[uVar19];
            *(uint *)(&uStack_210 + uVar19) = uVar7;
            *(uint *)((long)&uStack_210 + uVar19 * 8 + 4) = uVar22;
            auStack_208[uVar19 * 2] = uVar22;
            auStack_208[uVar19 * 2 + 1] = uVar13;
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(ulong *)param_2);
        }
        uStack_240 = 0x80;
        lVar23 = *(long *)local_270;
        if (local_288 != *(FastAllocator **)(lVar23 + 8)) {
          embree::MutexSys::lock();
          if (*(long *)(lVar23 + 8) != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)(lVar23 + 8) + 0x118);
            *plVar2 = *plVar2 + *(long *)(lVar23 + 0xa8) + *(long *)(lVar23 + 0x68);
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar23 + 8) + 0x120);
            *plVar2 = *plVar2 + (((*(long *)(lVar23 + 0x98) + *(long *)(lVar23 + 0x58)) -
                                 *(long *)(lVar23 + 0x50)) - *(long *)(lVar23 + 0x90));
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar23 + 8) + 0x128);
            *plVar2 = *plVar2 + *(long *)(lVar23 + 0xb0) + *(long *)(lVar23 + 0x70);
            UNLOCK();
          }
          *(undefined8 *)(lVar23 + 0x48) = 0;
          *(undefined8 *)(lVar23 + 0x58) = 0;
          *(undefined8 *)(lVar23 + 0x50) = 0;
          *(undefined8 *)(lVar23 + 0x68) = 0;
          *(undefined8 *)(lVar23 + 0x70) = 0;
          *(undefined8 *)(lVar23 + 0x60) = 0;
          if (local_288 == (FastAllocator *)0x0) {
            *(undefined8 *)(lVar23 + 0x88) = 0;
            uVar18 = 0;
            *(undefined8 *)(lVar23 + 0x98) = 0;
            *(undefined8 *)(lVar23 + 0x90) = 0;
            *(undefined8 *)(lVar23 + 0xa8) = 0;
            *(undefined8 *)(lVar23 + 0xb0) = 0;
          }
          else {
            uVar18 = *(undefined8 *)(local_288 + 0x10);
            *(undefined8 *)(lVar23 + 0x88) = 0;
            *(undefined8 *)(lVar23 + 0x98) = 0;
            *(undefined8 *)(lVar23 + 0x60) = uVar18;
            *(undefined8 *)(lVar23 + 0x90) = 0;
            *(undefined8 *)(lVar23 + 0xa8) = 0;
            *(undefined8 *)(lVar23 + 0xb0) = 0;
            *(undefined8 *)(lVar23 + 0xa0) = 0;
            uVar18 = *(undefined8 *)(local_288 + 0x10);
          }
          *(undefined8 *)(lVar23 + 0xa0) = uVar18;
          LOCK();
          *(FastAllocator **)(lVar23 + 8) = local_288;
          UNLOCK();
          local_238._0_8_ = lVar23;
          embree::MutexSys::lock();
          if (*(long **)(local_288 + 0x138) == *(long **)(local_288 + 0x140)) {
            std::
            vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
            ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                      ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                        *)(local_288 + 0x130));
          }
          else {
            **(long **)(local_288 + 0x138) = lVar23;
            *(long *)(local_288 + 0x138) = *(long *)(local_288 + 0x138) + 8;
          }
          embree::MutexSys::unlock();
          embree::MutexSys::unlock();
        }
        p_Stack_268 = (_lambda_embree__range<unsigned_long>_const___1_ *)local_238;
        lVar23 = *(long *)(local_270 + 0x10);
        *(long *)(local_270 + 0x28) = *(long *)(local_270 + 0x28) + 0x80;
        uVar8 = (ulong)(-(int)lVar23 & 0xf);
        uVar21 = lVar23 + 0x80 + uVar8;
        *(ulong *)(local_270 + 0x10) = uVar21;
        if (*(ulong *)(local_270 + 0x18) < uVar21) {
          *(long *)(local_270 + 0x10) = lVar23;
          if (*(ulong *)(local_270 + 0x20) < 0x200) {
            puVar9 = (ulong *)FastAllocator::malloc(local_288,&uStack_240,0x40,false);
          }
          else {
            local_238._0_8_ = *(ulong *)(local_270 + 0x20);
            puVar9 = (ulong *)FastAllocator::malloc(local_288,(ulong *)p_Stack_268,0x40,true);
            *(ulong **)(local_270 + 8) = puVar9;
            lVar23 = *(long *)(local_270 + 0x10);
            *(long *)(local_270 + 0x10) = 0x80;
            *(long *)(local_270 + 0x30) =
                 (*(long *)(local_270 + 0x18) + *(long *)(local_270 + 0x30)) - lVar23;
            *(undefined8 *)(local_270 + 0x18) = local_238._0_8_;
            if ((ulong)local_238._0_8_ < 0x80) {
              *(long *)(local_270 + 0x10) = 0;
              local_238._0_8_ = *(long *)(local_270 + 0x20);
              puVar9 = (ulong *)FastAllocator::malloc(local_288,(ulong *)p_Stack_268,0x40,false);
              *(ulong **)(local_270 + 8) = puVar9;
              *(long *)(local_270 + 0x30) =
                   (*(long *)(local_270 + 0x18) + *(long *)(local_270 + 0x30)) -
                   *(long *)(local_270 + 0x10);
              *(long *)(local_270 + 0x10) = 0x80;
              *(undefined8 *)(local_270 + 0x18) = local_238._0_8_;
              if ((ulong)local_238._0_8_ < 0x80) {
                *(long *)(local_270 + 0x10) = 0;
                puVar9 = (ulong *)0x0;
              }
            }
          }
        }
        else {
          *(ulong *)(local_270 + 0x30) = *(long *)(local_270 + 0x30) + uVar8;
          puVar9 = (ulong *)(*(long *)(local_270 + 8) + -0x80 + uVar21);
        }
        uVar6 = _UNK_00111a98;
        uVar5 = __LC4;
        uVar8 = _UNK_00111a88;
        uVar21 = __LC2;
        *puVar9 = 8;
        puVar9[1] = 8;
        puVar9[2] = 8;
        puVar9[3] = 8;
        puVar9[0xc] = uVar5;
        puVar9[0xd] = uVar6;
        puVar9[8] = uVar5;
        puVar9[9] = uVar6;
        puVar9[4] = uVar5;
        puVar9[5] = uVar6;
        puVar9[0xe] = uVar21;
        puVar9[0xf] = uVar8;
        puVar9[10] = uVar21;
        puVar9[0xb] = uVar8;
        puVar9[6] = uVar21;
        puVar9[7] = uVar8;
        if (*(ulong *)(param_2 + 0x20) < (ulong)(uint)(*(int *)(param_4 + 4) - *(int *)param_4)) {
          stack0xfffffffffffffdd0 = &local_250;
          local_238._0_8_ = auStack_1c8;
          uStack_248 = 0;
          puStack_228 = auStack_208;
          pBStack_220 = param_2;
          TaskScheduler::
          spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
                    (0,uVar19,1,p_Stack_268,(TaskGroupContext *)&uStack_248);
          embree::TaskScheduler::wait();
          if (uStack_248 != 0) {
            uStack_240 = uStack_248;
            std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
            std::rethrow_exception(&uStack_240);
          }
        }
        else {
          puVar12 = auStack_1c8;
          puVar15 = auStack_208;
          do {
            puVar20 = puVar15 + 2;
            recurse(p_Stack_268,param_2,local_250 + 1,puVar15,0);
            *puVar12 = local_238._0_8_;
            puVar12[2] = puStack_228;
            puVar12[3] = pBStack_220;
            puVar12[4] = uStack_218;
            puVar12[5] = uStack_210;
            puVar12 = puVar12 + 6;
            puVar15 = puVar20;
          } while (auStack_208 + uVar19 * 2 != puVar20);
        }
        puVar25 = auStack_1c8;
        auVar27._8_8_ = _UNK_00111a88;
        auVar27._0_8_ = __LC2;
        unique0x1000053d = _UNK_00111a98;
        local_238._0_8_ = __LC4;
        puVar12 = puVar25;
        puVar16 = puVar9;
        do {
          auVar3 = *(undefined1 (*) [16])(puVar12 + 2);
          auVar4 = *(undefined1 (*) [16])(puVar12 + 4);
          *(undefined8 *)((long)puVar16 * 2 - (long)puVar9) = *puVar12;
          _local_238 = minps(_local_238,auVar3);
          puVar17 = (ulong *)((long)puVar16 + 4);
          *(int *)(puVar16 + 4) = auVar3._0_4_;
          auVar27 = maxps(auVar27,auVar4);
          *(int *)(puVar16 + 0xc) = auVar3._8_4_;
          *(int *)(puVar16 + 6) = auVar4._0_4_;
          *(int *)(puVar16 + 8) = auVar3._4_4_;
          *(int *)(puVar16 + 10) = auVar4._4_4_;
          *(int *)(puVar16 + 0xe) = auVar4._8_4_;
          puVar12 = puVar12 + 6;
          puVar16 = puVar17;
        } while ((ulong *)((long)puVar9 + uVar19 * 4) != puVar17);
        uVar21 = 0;
        puVar12 = puVar25;
        do {
          piVar1 = (int *)((long)puVar12 + 0x1c);
          puVar12 = puVar12 + 6;
          uVar21 = uVar21 + (long)*piVar1;
        } while (puVar25 + uVar19 * 6 != puVar12);
        if (0xfff < uVar21) {
          puVar16 = puVar9;
          do {
            if (*(int *)((long)puVar25 + 0x1c) < 0x1000) {
              embree::sse2::BVHNRotate<4>::rotate(*puVar16,1);
              *puVar16 = *puVar16 | 0x8000000000000000;
            }
            puVar16 = puVar16 + 1;
            puVar25 = puVar25 + 6;
          } while (puVar9 + uVar19 != puVar16);
        }
        uStack_22c = (int)uVar21;
        auVar3 = _local_238;
        stack0xfffffffffffffdd0 = auVar3._8_8_;
        *param_1 = puVar9;
        param_1[2] = local_238._0_8_;
        param_1[3] = stack0xfffffffffffffdd0;
        *(undefined1 (*) [16])(param_1 + 4) = auVar27;
        _local_238 = auVar3;
        goto LAB_0010a77b;
      }
    }
  }
  else {
    if (*(code **)**(undefined8 **)(param_2 + 0x50) !=
        Scene::BuildProgressMonitorInterface::operator()) {
      (**(code **)**(undefined8 **)(param_2 + 0x50))();
      goto LAB_0010a1e1;
    }
    embree::Scene::progressMonitor((double)(uint)(*(int *)(param_4 + 4) - *(int *)param_4));
    if (local_250 + 8U < *(ulong *)(param_2 + 8)) goto LAB_0010a1f5;
  }
  createLargeLeaf(param_1,param_2,local_250,param_4);
LAB_0010a77b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleMv<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 in_R9;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  uVar2 = *(ulong *)(this + 8);
  uVar3 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar2 - uVar3) {
    uVar2 = uVar2 + uVar3 >> 1;
    spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar3,uVar2,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x40));
    spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar2,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x40));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    if (uVar3 < uVar2) {
      do {
        sse2::BVHBuilderMorton::
        BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
        ::recurse(local_68,*(undefined8 *)(this + 0x38),**(long **)(this + 0x28) + 1,
                  *(long *)(this + 0x30) + uVar3 * 8,1,in_R9,0,0,0);
        puVar1 = (undefined8 *)(uVar3 * 0x30 + *(long *)(this + 0x20));
        uVar3 = uVar3 + 1;
        *puVar1 = local_68[0];
        puVar1[2] = local_58;
        puVar1[3] = uStack_50;
        puVar1[4] = local_48;
        puVar1[5] = uStack_40;
      } while (uVar3 < uVar2);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BBox<embree::Vec3fa> embree::parallel_reduce_internal<unsigned int,
   embree::BBox<embree::Vec3fa>,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1}, embree::BBox<embree::Vec3fa> const
   (embree::BBox<embree::Vec3fa> const&, embree::BBox<embree::Vec3fa> const&)>(unsigned int,
   unsigned int, unsigned int, unsigned int, embree::BBox<embree::Vec3fa> const&,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const::{lambda(embree::range<unsigned int> const&)#1} const&,
   embree::BBox<embree::Vec3fa> const ( const&)(embree::BBox<embree::Vec3fa> const&,
   embree::BBox<embree::Vec3fa> const&)) [clone .isra.0] */

BBox * embree::
       parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                 (uint param_1,uint param_2,uint param_3,uint param_4,BBox *param_5,
                 _lambda_embree__range<unsigned_int>_const___1_ *param_6,
                 _func_BBox_BBox_ptr_BBox_ptr *param_7)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 in_register_0000003c;
  BBox *pBVar6;
  long in_FS_OFFSET;
  uint local_210c;
  uint local_2108;
  uint local_2104;
  long local_2100;
  long local_20f8;
  undefined8 local_20f0;
  undefined8 uStack_20e8;
  uint *local_20e0;
  undefined1 *puStack_20d8;
  _lambda_embree__range<unsigned_int>_const___1_ *local_20d0;
  undefined1 local_20c0 [8192];
  undefined1 *local_c0;
  ulong local_b8;
  long local_48;
  
  pBVar6 = (BBox *)CONCAT44(in_register_0000003c,param_1);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_210c = param_4;
  local_2108 = param_3;
  local_2104 = param_2;
  uVar2 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2104) {
    local_2104 = 0x200;
  }
  if (uVar2 < local_2104) {
    local_2104 = uVar2;
  }
  uVar5 = (ulong)local_2104;
  local_b8 = uVar5;
  if (uVar5 < 0x101) {
    local_c0 = local_20c0;
  }
  else {
    local_c0 = (undefined1 *)embree::alignedMalloc(uVar5 << 5,0x40);
    uVar5 = (ulong)local_2104;
  }
  local_20f0 = &local_2108;
  uStack_20e8 = &local_210c;
  local_20e0 = &local_2104;
  puStack_20d8 = local_20c0;
  local_20d0 = param_6;
  if ((int)uVar5 == 0) {
    uVar1 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar6 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar6 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(pBVar6 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar6 + 0x18) = uVar1;
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnIjZNS_12parallel_forIjZNS_24parallel_reduce_internalIjNS_4BBoxINS_6Vec3faEEEZNKS_4sse216BVHBuilderMorton8BuilderTINS_13BVHNodeRecordINS_10NodeRefPtrILi4EEEEENS_13FastAllocator15CachedAllocatorENS_4BVHNILi4EE11CreateAllocENS_10AABBNode_tISC_Li4EE6CreateENS7_13SetBVHNBoundsILi4EEENS7_16CreateMortonLeafILi4ENS_9TriangleMILi4EEEEENS7_19CalculateMeshBoundsINS_12TriangleMeshEEENS_5Scene29BuildProgressMonitorInterfaceEE19recreateMortonCodesERKNS_5rangeIjEEEUlS11_E_FKS6_RS13_S14_EEET0_T_S17_S17_S17_RKS16_RKT1_RKT2_EUljE_EEvS17_S19_EUlS11_E_EEvS17_S17_S17_S19_PNS0_16TaskGroupContextE_isra_0
              (0,uVar5,1,(BBox *)&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_20f8);
    }
    uVar1 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pBVar6 = *(undefined8 *)param_5;
    *(undefined8 *)(pBVar6 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    lVar3 = 0;
    *(undefined8 *)(pBVar6 + 0x10) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(pBVar6 + 0x18) = uVar1;
    if (local_2104 != 0) {
      do {
        lVar4 = lVar3 + 1;
        (*param_7)((BBox *)&local_20f0,pBVar6,(BBox *)(local_c0 + lVar3 * 0x20));
        *(undefined4 *)pBVar6 = (undefined4)local_20f0;
        *(undefined4 *)(pBVar6 + 4) = local_20f0._4_4_;
        *(undefined4 *)(pBVar6 + 8) = (undefined4)uStack_20e8;
        *(undefined4 *)(pBVar6 + 0xc) = uStack_20e8._4_4_;
        *(uint **)(pBVar6 + 0x10) = local_20e0;
        *(undefined1 **)(pBVar6 + 0x18) = puStack_20d8;
        lVar3 = lVar4;
      } while ((uint)lVar4 < local_2104);
    }
  }
  if (local_c0 != local_20c0) {
    embree::alignedFree(local_c0);
  }
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar6;
}



/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned int>
   const&) const */

void __thiscall
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recreateMortonCodes
          (BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
           *this,range *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  TaskScheduler *this_00;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  uint uVar18;
  uint uVar22;
  uint uVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  _lambda_embree__range<unsigned_int>_const___2_ local_58 [16];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  long local_30;
  
  uVar18 = *(uint *)(param_1 + 4);
  uVar22 = *(uint *)param_1;
  this_00 = (TaskScheduler *)(ulong)uVar22;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar18 - uVar22 < 0x400) {
    uVar8 = (ulong)uVar18;
    lVar7 = *(long *)(this + 0x58);
    uVar10 = (ulong)uVar22;
    if (uVar10 < uVar8) {
      lVar17 = uVar10 * 8;
      lVar14 = lVar7 + lVar17;
      lVar13 = **(long **)(this + 0x48);
      auVar28._4_4_ = _LC4;
      auVar28._0_4_ = _LC4;
      auVar28._8_4_ = _LC4;
      auVar28._12_4_ = _LC4;
      auVar30._4_4_ = _LC2;
      auVar30._0_4_ = _LC2;
      auVar30._8_4_ = _LC2;
      auVar30._12_4_ = _LC2;
      lVar15 = *(long *)(lVar13 + 0x58);
      lVar16 = *(long *)(lVar13 + 0x60);
      lVar11 = *(long *)(lVar13 + 0x88);
      lVar13 = *(long *)(lVar13 + 0x90);
      do {
        puVar6 = (uint *)(lVar14 + 4);
        lVar14 = lVar14 + 8;
        puVar6 = (uint *)((ulong)*puVar6 * lVar16 + lVar15);
        auVar20 = *(undefined1 (*) [16])(lVar11 + (ulong)*puVar6 * lVar13);
        auVar25 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[1] * lVar13);
        auVar21 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[2] * lVar13);
        auVar19 = maxps(auVar20,auVar25);
        auVar25 = minps(auVar20,auVar25);
        auVar20 = maxps(auVar19,auVar21);
        auVar25 = minps(auVar25,auVar21);
        auVar19._0_4_ = auVar20._0_4_ + auVar25._0_4_;
        auVar19._4_4_ = auVar20._4_4_ + auVar25._4_4_;
        auVar19._8_4_ = auVar20._8_4_ + auVar25._8_4_;
        auVar19._12_4_ = auVar20._12_4_ + auVar25._12_4_;
        auVar28 = minps(auVar28,auVar19);
        auVar30 = maxps(auVar30,auVar19);
      } while (lVar7 + uVar8 * 8 != lVar14);
      auVar31._0_4_ = auVar30._0_4_ - auVar28._0_4_;
      auVar31._4_4_ = auVar30._4_4_ - auVar28._4_4_;
      auVar31._8_4_ = auVar30._8_4_ - auVar28._8_4_;
      auVar31._12_4_ = auVar30._12_4_ - auVar28._12_4_;
      auVar20 = rcpps(auVar21,auVar31);
      bVar3 = _LC12 < auVar31._0_4_;
      bVar4 = _LC12 < auVar31._4_4_;
      bVar5 = _LC12 < auVar31._8_4_;
      fVar24 = auVar20._0_4_;
      fVar26 = auVar20._4_4_;
      fVar27 = auVar20._8_4_;
      fVar24 = ((_LC14 - auVar31._0_4_ * fVar24) * fVar24 + fVar24) * _LC16;
      fVar26 = ((_LC14 - auVar31._4_4_ * fVar26) * fVar26 + fVar26) * _LC16;
      fVar27 = ((_LC14 - auVar31._8_4_ * fVar27) * fVar27 + fVar27) * _LC16;
      while( true ) {
        puVar6 = (uint *)((ulong)((uint *)(lVar7 + lVar17))[1] * lVar16 + lVar15);
        auVar20 = *(undefined1 (*) [16])(lVar11 + (ulong)*puVar6 * lVar13);
        auVar25 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[1] * lVar13);
        auVar30 = *(undefined1 (*) [16])(lVar11 + (ulong)puVar6[2] * lVar13);
        auVar21 = maxps(auVar20,auVar25);
        auVar25 = minps(auVar20,auVar25);
        auVar20 = maxps(auVar21,auVar30);
        auVar25 = minps(auVar25,auVar30);
        uVar18 = (uint)(((auVar20._0_4_ + auVar25._0_4_) - auVar28._0_4_) *
                       (float)(-(uint)bVar3 & (uint)fVar24));
        uVar22 = (uint)(((auVar20._4_4_ + auVar25._4_4_) - auVar28._4_4_) *
                       (float)(-(uint)bVar4 & (uint)fVar26));
        uVar23 = (uint)(((auVar20._8_4_ + auVar25._8_4_) - auVar28._8_4_) *
                       (float)(-(uint)bVar5 & (uint)fVar27));
        uVar10 = uVar10 + 1;
        *(uint *)(lVar7 + lVar17) =
             ((((uVar22 << 0x10 | uVar22) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 10
             & 0x12492492 |
             (((((uVar23 << 0x10 | uVar23) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249) << 2 |
             ((((uVar18 << 0x10 | uVar18) & 0x30000ff) * 0x101 & 0x300f00f) * 0x11 & 0x30c30c3) * 5
             & 0x9249249;
        uVar8 = (ulong)*(uint *)(param_1 + 4);
        if (uVar8 <= uVar10) break;
        lVar7 = *(long *)(this + 0x58);
        lVar17 = uVar10 * 8;
        lVar14 = **(long **)(this + 0x48);
        lVar11 = *(long *)(lVar14 + 0x88);
        lVar15 = *(long *)(lVar14 + 0x58);
        lVar16 = *(long *)(lVar14 + 0x60);
        lVar13 = *(long *)(lVar14 + 0x90);
      }
      uVar10 = (ulong)*(uint *)param_1;
      lVar7 = *(long *)(this + 0x58);
    }
    puVar6 = (uint *)(lVar7 + uVar8 * 8);
    puVar1 = (uint *)(lVar7 + uVar10 * 8);
    if (puVar6 != puVar1) {
      lVar7 = uVar8 * 8 + uVar10 * -8;
      uVar8 = lVar7 >> 3;
      if (uVar8 == 0) {
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar6,0xfffffffffffffffe);
      }
      else {
        lVar14 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        std::
        __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar6,(long)(int)lVar14 * 2);
        if (0x80 < lVar7) {
          puVar12 = puVar1 + 0x20;
          std::
          __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                    (puVar1,puVar12);
          for (; puVar6 != puVar12; puVar12 = puVar12 + 2) {
            while( true ) {
              uVar2 = *(undefined8 *)puVar12;
              uVar18 = *puVar12;
              puVar1 = puVar12 + -2;
              if (puVar12[-2] <= uVar18) break;
              do {
                puVar9 = puVar1;
                *(undefined8 *)(puVar9 + 2) = *(undefined8 *)puVar9;
                puVar1 = puVar9 + -2;
              } while (uVar18 < puVar9[-2]);
              puVar12 = puVar12 + 2;
              *(undefined8 *)puVar9 = uVar2;
              if (puVar6 == puVar12) goto LAB_0010b976;
            }
            *(undefined8 *)puVar12 = uVar2;
          }
          goto LAB_0010b976;
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::
        __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar1,puVar6);
        return;
      }
      goto LAB_0010bba3;
    }
  }
  else {
    uVar23 = (uVar18 - uVar22) + 0x3ff >> 10;
    local_78._4_4_ = _LC4;
    local_78._0_4_ = _LC4;
    local_78._8_4_ = _LC4;
    local_78._12_4_ = _LC4;
    local_68._4_4_ = _LC2;
    local_68._0_4_ = _LC2;
    local_68._8_4_ = _LC2;
    local_68._12_4_ = _LC2;
    local_a8 = this;
    if (uVar23 == 1) {
      auVar20 = local_68;
      local_98 = local_78;
      _local_88 = local_68;
      if ((ulong)uVar22 < (ulong)uVar18) {
        lVar7 = *(long *)(this + 0x58) + (ulong)uVar22 * 8;
        do {
          lVar14 = **(long **)(this + 0x48);
          puVar6 = (uint *)(lVar7 + 4);
          lVar7 = lVar7 + 8;
          puVar6 = (uint *)((ulong)*puVar6 * *(long *)(lVar14 + 0x60) + *(long *)(lVar14 + 0x58));
          lVar17 = *(long *)(lVar14 + 0x88);
          lVar14 = *(long *)(lVar14 + 0x90);
          auVar20 = *(undefined1 (*) [16])(lVar17 + (ulong)*puVar6 * lVar14);
          auVar25 = *(undefined1 (*) [16])(lVar17 + (ulong)puVar6[1] * lVar14);
          auVar28 = *(undefined1 (*) [16])(lVar17 + (ulong)puVar6[2] * lVar14);
          auVar30 = maxps(auVar20,auVar25);
          auVar25 = minps(auVar20,auVar25);
          auVar20 = maxps(auVar30,auVar28);
          auVar28 = minps(auVar25,auVar28);
          auVar25._0_4_ = auVar20._0_4_ + auVar28._0_4_;
          auVar25._4_4_ = auVar20._4_4_ + auVar28._4_4_;
          auVar25._8_4_ = auVar20._8_4_ + auVar28._8_4_;
          auVar25._12_4_ = auVar20._12_4_ + auVar28._12_4_;
          local_98 = minps(local_98,auVar25);
          _local_88 = maxps(_local_88,auVar25);
        } while (*(long *)(this + 0x58) + (ulong)uVar18 * 8 != lVar7);
        auVar20._0_4_ = SUB164(_local_88,0) - local_98._0_4_;
        auVar20._4_4_ = SUB164(_local_88,4) - local_98._4_4_;
        auVar20._8_4_ = SUB164(_local_88,8) - local_98._8_4_;
        auVar20._12_4_ = SUB164(_local_88,0xc) - local_98._12_4_;
      }
    }
    else {
      parallel_reduce_internal<unsigned_int,embree::BBox<embree::Vec3fa>,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_1_,embree::BBox<embree::Vec3fa>const(embree::BBox<embree::Vec3fa>const&,embree::BBox<embree::Vec3fa>const&)>
                ((uint)local_98,uVar23,uVar22,uVar18,(BBox *)local_78,
                 (_lambda_embree__range<unsigned_int>_const___1_ *)&local_a8,
                 BBox<embree::Vec3fa>::merge);
      this_00 = (TaskScheduler *)(ulong)*(uint *)param_1;
      auVar20._0_4_ = (float)local_88._0_4_ - local_98._0_4_;
      auVar20._4_4_ = (float)local_88._4_4_ - local_98._4_4_;
      auVar20._8_4_ = fStack_80 - local_98._8_4_;
      auVar20._12_4_ = fStack_7c - local_98._12_4_;
      uVar18 = *(uint *)(param_1 + 4);
    }
    auVar25 = rcpps(local_98,auVar20);
    local_a0 = 0;
    fVar24 = auVar25._0_4_;
    fVar26 = auVar25._4_4_;
    fVar27 = auVar25._8_4_;
    fVar29 = auVar25._12_4_;
    local_48 = (uint)(((_LC14 - auVar20._0_4_ * fVar24) * fVar24 + fVar24) * _LC16) &
               -(uint)(_LC12 < auVar20._0_4_);
    uStack_44 = (uint)(((_LC14 - auVar20._4_4_ * fVar26) * fVar26 + fVar26) * _LC16) &
                -(uint)(_LC12 < auVar20._4_4_);
    uStack_40 = (uint)(((_LC14 - auVar20._8_4_ * fVar27) * fVar27 + fVar27) * _LC16) &
                -(uint)(_LC12 < auVar20._8_4_);
    uStack_3c = (uint)(((_LC14 - auVar20._12_4_ * fVar29) * fVar29 + fVar29) * _LC16) &
                -(uint)(_LC12 < auVar20._12_4_);
    local_58 = (_lambda_embree__range<unsigned_int>_const___2_  [16])local_98;
    TaskScheduler::
    spawn<unsigned_int,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recreateMortonCodes(embree::range<unsigned_int>const&)const::_lambda(embree::range<unsigned_int>const&)_2_>
              (this_00,uVar18,0x400,(uint)this,local_58,(TaskGroupContext *)&local_a0);
    embree::TaskScheduler::wait();
    if (local_a0 != 0) {
      local_78._0_8_ = local_a0;
      std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(local_78);
    }
    radixsort32<embree::sse2::BVHBuilderMorton::BuildPrim>
              ((BuildPrim *)(*(long *)(this + 0x58) + (ulong)*(uint *)param_1 * 8),
               (ulong)(*(int *)(param_1 + 4) - *(uint *)param_1),0x18);
  }
LAB_0010b976:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bba3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool) */

undefined8 *
embree::sse2::BVHBuilderMorton::
BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
::recurse(undefined8 *param_1,
         BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
         *param_2,long param_3,range *param_4,char param_5,undefined8 param_6,FastAllocator *param_7
         ,MutexSys *param_8)

{
  int *piVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  undefined8 *puVar25;
  long lVar26;
  long in_FS_OFFSET;
  undefined1 auVar27 [16];
  FastAllocator *local_288;
  MutexSys *local_270;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_268;
  long local_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 local_238 [12];
  undefined4 uStack_22c;
  uint *puStack_228;
  BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
  *pBStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  uint auStack_208 [2];
  undefined8 uStack_200;
  uint auStack_1f8 [12];
  undefined8 auStack_1c8 [49];
  long local_40;
  
  lVar23 = lRam000000000010c325;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_270 = param_8;
  local_288 = param_7;
  local_250 = param_3;
  if (param_7 == (FastAllocator *)0x0) {
    local_288 = (FastAllocator *)**(undefined8 **)(param_2 + 0x28);
    local_270 = *(MutexSys **)(in_FS_OFFSET + lRam000000000010c325);
    if (local_270 == (MutexSys *)0x0) {
      local_270 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(local_270);
      *(undefined8 *)(local_270 + 8) = 0;
      *(MutexSys **)(local_270 + 0x40) = local_270;
      *(undefined8 *)(local_270 + 0x48) = 0;
      *(undefined8 *)(local_270 + 0x50) = 0;
      *(undefined8 *)(local_270 + 0x58) = 0;
      *(undefined8 *)(local_270 + 0x60) = 0;
      *(undefined8 *)(local_270 + 0x68) = 0;
      *(undefined8 *)(local_270 + 0x70) = 0;
      *(MutexSys **)(local_270 + 0x80) = local_270;
      *(undefined8 *)(local_270 + 0x88) = 0;
      *(undefined8 *)(local_270 + 0x90) = 0;
      *(undefined8 *)(local_270 + 0x98) = 0;
      *(undefined8 *)(local_270 + 0xa0) = 0;
      *(undefined8 *)(local_270 + 0xa8) = 0;
      *(undefined8 *)(local_270 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar23) = local_270;
      embree::MutexSys::lock();
      local_238._0_8_ = local_270;
      if (__MutexSys == _createMortonCodeArray<embree::TriangleMesh>) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,local_238);
        uVar18 = local_238._0_8_;
        if ((MutexSys *)local_238._0_8_ != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_238._0_8_);
          embree::alignedFree((void *)uVar18);
        }
      }
      else {
        *__MutexSys = local_270;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    local_270 = local_270 + 0x40;
  }
  if ((param_5 == '\0') ||
     (*(ulong *)(param_2 + 0x20) < (ulong)(uint)(*(int *)(param_4 + 4) - *(int *)param_4))) {
LAB_0010bc41:
    if (local_250 + 8U < *(ulong *)(param_2 + 8)) {
LAB_0010bc55:
      uVar7 = *(uint *)(param_4 + 4);
      uVar13 = *(uint *)param_4;
      uVar19 = (ulong)uVar13;
      if (*(ulong *)(param_2 + 0x10) < (ulong)(uVar7 - uVar13)) {
        lVar23 = *(long *)(param_2 + 0x58);
        uVar13 = *(uint *)(lVar23 + (ulong)(uVar7 - 1) * 8) ^ *(uint *)(lVar23 + (ulong)uVar13 * 8);
        if (uVar13 == 0) {
LAB_0010c46b:
          recreateMortonCodes(param_2,param_4);
          uVar7 = *(uint *)(param_4 + 4);
          lVar23 = *(long *)(param_2 + 0x58);
          auStack_208[0] = *(uint *)param_4;
          uVar19 = (ulong)auStack_208[0];
          uVar13 = *(uint *)(lVar23 + (ulong)(uVar7 - 1) * 8) ^ *(uint *)(lVar23 + uVar19 * 8);
          if (uVar13 != 0) {
            iVar10 = 0x1f;
            if (uVar13 != 0) {
              for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
              }
            }
            iVar10 = 0x1f - iVar10;
            if (iVar10 != 0x20) goto LAB_0010bc96;
          }
          auStack_208[1] = auStack_208[0] + uVar7 >> 1;
        }
        else {
          iVar10 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          iVar10 = 0x1f - iVar10;
          if (iVar10 == 0x20) goto LAB_0010c46b;
LAB_0010bc96:
          auStack_208[0] = (uint)uVar19;
          uVar22 = auStack_208[0] + 1;
          uVar13 = uVar7;
          while (auStack_208[1] = uVar13, uVar22 != auStack_208[1]) {
            uVar13 = (int)uVar19 + auStack_208[1] >> 1;
            if ((0x80000000U >> ((byte)iVar10 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar13 * 8)) == 0)
            {
              uVar22 = uVar13 + 1;
              uVar19 = (ulong)uVar13;
              uVar13 = auStack_208[1];
            }
          }
        }
        uVar19 = 2;
        uStack_200._0_4_ = auStack_208[1];
        uStack_200._4_4_ = uVar7;
        if (2 < *(ulong *)param_2) {
          do {
            iVar11 = 0;
            uVar13 = 0;
            iVar10 = -1;
            puVar15 = auStack_208 + 1;
            do {
              uVar7 = *puVar15 - puVar15[-1];
              if ((*(ulong *)(param_2 + 0x10) < (ulong)uVar7) && (uVar13 < uVar7)) {
                uVar13 = uVar7;
                iVar10 = iVar11;
              }
              iVar11 = iVar11 + 1;
              puVar15 = puVar15 + 2;
            } while (iVar11 != (int)uVar19);
            if (iVar10 == -1) break;
            lVar26 = (long)iVar10;
            uVar13 = auStack_208[lVar26 * 2 + 1];
            uVar21 = (ulong)auStack_208[lVar26 * 2];
            uVar7 = *(uint *)(lVar23 + (ulong)(uVar13 - 1) * 8) ^ *(uint *)(lVar23 + uVar21 * 8);
            if (uVar7 == 0) {
LAB_0010c21f:
              recreateMortonCodes(param_2,(range *)(auStack_208 + lVar26 * 2));
              uVar13 = auStack_208[lVar26 * 2 + 1];
              lVar23 = *(long *)(param_2 + 0x58);
              uVar7 = auStack_208[lVar26 * 2];
              uVar21 = (ulong)uVar7;
              uVar22 = *(uint *)(lVar23 + (ulong)(uVar13 - 1) * 8) ^ *(uint *)(lVar23 + uVar21 * 8);
              if (uVar22 != 0) {
                iVar10 = 0x1f;
                if (uVar22 != 0) {
                  for (; uVar22 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                  }
                }
                iVar10 = 0x1f - iVar10;
                if (iVar10 != 0x20) goto LAB_0010bda2;
              }
              uVar22 = uVar7 + uVar13;
              uVar13 = auStack_208[lVar26 * 2 + 1];
              uVar22 = uVar22 >> 1;
            }
            else {
              iVar10 = 0x1f;
              if (uVar7 != 0) {
                for (; uVar7 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                }
              }
              iVar10 = 0x1f - iVar10;
              if (iVar10 == 0x20) goto LAB_0010c21f;
LAB_0010bda2:
              uVar7 = (uint)uVar21;
              uVar24 = uVar7 + 1;
              uVar14 = uVar13;
              while (uVar22 = uVar14, uVar24 != uVar22) {
                uVar14 = (int)uVar21 + uVar22 >> 1;
                if ((0x80000000U >> ((byte)iVar10 & 0x1f) & *(uint *)(lVar23 + (ulong)uVar14 * 8))
                    == 0) {
                  uVar21 = (ulong)uVar14;
                  uVar24 = uVar14 + 1;
                  uVar14 = uVar22;
                }
              }
            }
            *(undefined8 *)(auStack_208 + lVar26 * 2) = (&uStack_210)[uVar19];
            *(uint *)(&uStack_210 + uVar19) = uVar7;
            *(uint *)((long)&uStack_210 + uVar19 * 8 + 4) = uVar22;
            auStack_208[uVar19 * 2] = uVar22;
            auStack_208[uVar19 * 2 + 1] = uVar13;
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(ulong *)param_2);
        }
        uStack_240 = 0x80;
        lVar23 = *(long *)local_270;
        if (local_288 != *(FastAllocator **)(lVar23 + 8)) {
          embree::MutexSys::lock();
          if (*(long *)(lVar23 + 8) != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)(lVar23 + 8) + 0x118);
            *plVar2 = *plVar2 + *(long *)(lVar23 + 0xa8) + *(long *)(lVar23 + 0x68);
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar23 + 8) + 0x120);
            *plVar2 = *plVar2 + (((*(long *)(lVar23 + 0x98) + *(long *)(lVar23 + 0x58)) -
                                 *(long *)(lVar23 + 0x50)) - *(long *)(lVar23 + 0x90));
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar23 + 8) + 0x128);
            *plVar2 = *plVar2 + *(long *)(lVar23 + 0xb0) + *(long *)(lVar23 + 0x70);
            UNLOCK();
          }
          *(undefined8 *)(lVar23 + 0x48) = 0;
          *(undefined8 *)(lVar23 + 0x58) = 0;
          *(undefined8 *)(lVar23 + 0x50) = 0;
          *(undefined8 *)(lVar23 + 0x68) = 0;
          *(undefined8 *)(lVar23 + 0x70) = 0;
          *(undefined8 *)(lVar23 + 0x60) = 0;
          if (local_288 == (FastAllocator *)0x0) {
            *(undefined8 *)(lVar23 + 0x88) = 0;
            uVar18 = 0;
            *(undefined8 *)(lVar23 + 0x98) = 0;
            *(undefined8 *)(lVar23 + 0x90) = 0;
            *(undefined8 *)(lVar23 + 0xa8) = 0;
            *(undefined8 *)(lVar23 + 0xb0) = 0;
          }
          else {
            uVar18 = *(undefined8 *)(local_288 + 0x10);
            *(undefined8 *)(lVar23 + 0x88) = 0;
            *(undefined8 *)(lVar23 + 0x98) = 0;
            *(undefined8 *)(lVar23 + 0x60) = uVar18;
            *(undefined8 *)(lVar23 + 0x90) = 0;
            *(undefined8 *)(lVar23 + 0xa8) = 0;
            *(undefined8 *)(lVar23 + 0xb0) = 0;
            *(undefined8 *)(lVar23 + 0xa0) = 0;
            uVar18 = *(undefined8 *)(local_288 + 0x10);
          }
          *(undefined8 *)(lVar23 + 0xa0) = uVar18;
          LOCK();
          *(FastAllocator **)(lVar23 + 8) = local_288;
          UNLOCK();
          local_238._0_8_ = lVar23;
          embree::MutexSys::lock();
          if (*(long **)(local_288 + 0x138) == *(long **)(local_288 + 0x140)) {
            std::
            vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
            ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                      ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                        *)(local_288 + 0x130));
          }
          else {
            **(long **)(local_288 + 0x138) = lVar23;
            *(long *)(local_288 + 0x138) = *(long *)(local_288 + 0x138) + 8;
          }
          embree::MutexSys::unlock();
          embree::MutexSys::unlock();
        }
        p_Stack_268 = (_lambda_embree__range<unsigned_long>_const___1_ *)local_238;
        lVar23 = *(long *)(local_270 + 0x10);
        *(long *)(local_270 + 0x28) = *(long *)(local_270 + 0x28) + 0x80;
        uVar8 = (ulong)(-(int)lVar23 & 0xf);
        uVar21 = lVar23 + 0x80 + uVar8;
        *(ulong *)(local_270 + 0x10) = uVar21;
        if (*(ulong *)(local_270 + 0x18) < uVar21) {
          *(long *)(local_270 + 0x10) = lVar23;
          if (*(ulong *)(local_270 + 0x20) < 0x200) {
            puVar9 = (ulong *)FastAllocator::malloc(local_288,&uStack_240,0x40,false);
          }
          else {
            local_238._0_8_ = *(ulong *)(local_270 + 0x20);
            puVar9 = (ulong *)FastAllocator::malloc(local_288,(ulong *)p_Stack_268,0x40,true);
            *(ulong **)(local_270 + 8) = puVar9;
            lVar23 = *(long *)(local_270 + 0x10);
            *(long *)(local_270 + 0x10) = 0x80;
            *(long *)(local_270 + 0x30) =
                 (*(long *)(local_270 + 0x18) + *(long *)(local_270 + 0x30)) - lVar23;
            *(undefined8 *)(local_270 + 0x18) = local_238._0_8_;
            if ((ulong)local_238._0_8_ < 0x80) {
              *(long *)(local_270 + 0x10) = 0;
              local_238._0_8_ = *(long *)(local_270 + 0x20);
              puVar9 = (ulong *)FastAllocator::malloc(local_288,(ulong *)p_Stack_268,0x40,false);
              *(ulong **)(local_270 + 8) = puVar9;
              *(long *)(local_270 + 0x30) =
                   (*(long *)(local_270 + 0x18) + *(long *)(local_270 + 0x30)) -
                   *(long *)(local_270 + 0x10);
              *(long *)(local_270 + 0x10) = 0x80;
              *(undefined8 *)(local_270 + 0x18) = local_238._0_8_;
              if ((ulong)local_238._0_8_ < 0x80) {
                *(long *)(local_270 + 0x10) = 0;
                puVar9 = (ulong *)0x0;
              }
            }
          }
        }
        else {
          *(ulong *)(local_270 + 0x30) = *(long *)(local_270 + 0x30) + uVar8;
          puVar9 = (ulong *)(*(long *)(local_270 + 8) + -0x80 + uVar21);
        }
        uVar6 = _UNK_00111a98;
        uVar5 = __LC4;
        uVar8 = _UNK_00111a88;
        uVar21 = __LC2;
        *puVar9 = 8;
        puVar9[1] = 8;
        puVar9[2] = 8;
        puVar9[3] = 8;
        puVar9[0xc] = uVar5;
        puVar9[0xd] = uVar6;
        puVar9[8] = uVar5;
        puVar9[9] = uVar6;
        puVar9[4] = uVar5;
        puVar9[5] = uVar6;
        puVar9[0xe] = uVar21;
        puVar9[0xf] = uVar8;
        puVar9[10] = uVar21;
        puVar9[0xb] = uVar8;
        puVar9[6] = uVar21;
        puVar9[7] = uVar8;
        if (*(ulong *)(param_2 + 0x20) < (ulong)(uint)(*(int *)(param_4 + 4) - *(int *)param_4)) {
          stack0xfffffffffffffdd0 = &local_250;
          local_238._0_8_ = auStack_1c8;
          uStack_248 = 0;
          puStack_228 = auStack_208;
          pBStack_220 = param_2;
          TaskScheduler::
          spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
                    (0,uVar19,1,p_Stack_268,(TaskGroupContext *)&uStack_248);
          embree::TaskScheduler::wait();
          if (uStack_248 != 0) {
            uStack_240 = uStack_248;
            std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
            std::rethrow_exception(&uStack_240);
          }
        }
        else {
          puVar12 = auStack_1c8;
          puVar15 = auStack_208;
          do {
            puVar20 = puVar15 + 2;
            recurse(p_Stack_268,param_2,local_250 + 1,puVar15,0);
            *puVar12 = local_238._0_8_;
            puVar12[2] = puStack_228;
            puVar12[3] = pBStack_220;
            puVar12[4] = uStack_218;
            puVar12[5] = uStack_210;
            puVar12 = puVar12 + 6;
            puVar15 = puVar20;
          } while (auStack_208 + uVar19 * 2 != puVar20);
        }
        puVar25 = auStack_1c8;
        auVar27._8_8_ = _UNK_00111a88;
        auVar27._0_8_ = __LC2;
        unique0x1000053d = _UNK_00111a98;
        local_238._0_8_ = __LC4;
        puVar12 = puVar25;
        puVar16 = puVar9;
        do {
          auVar3 = *(undefined1 (*) [16])(puVar12 + 2);
          auVar4 = *(undefined1 (*) [16])(puVar12 + 4);
          *(undefined8 *)((long)puVar16 * 2 - (long)puVar9) = *puVar12;
          _local_238 = minps(_local_238,auVar3);
          puVar17 = (ulong *)((long)puVar16 + 4);
          *(int *)(puVar16 + 4) = auVar3._0_4_;
          auVar27 = maxps(auVar27,auVar4);
          *(int *)(puVar16 + 0xc) = auVar3._8_4_;
          *(int *)(puVar16 + 6) = auVar4._0_4_;
          *(int *)(puVar16 + 8) = auVar3._4_4_;
          *(int *)(puVar16 + 10) = auVar4._4_4_;
          *(int *)(puVar16 + 0xe) = auVar4._8_4_;
          puVar12 = puVar12 + 6;
          puVar16 = puVar17;
        } while ((ulong *)((long)puVar9 + uVar19 * 4) != puVar17);
        uVar21 = 0;
        puVar12 = puVar25;
        do {
          piVar1 = (int *)((long)puVar12 + 0x1c);
          puVar12 = puVar12 + 6;
          uVar21 = uVar21 + (long)*piVar1;
        } while (puVar25 + uVar19 * 6 != puVar12);
        if (0xfff < uVar21) {
          puVar16 = puVar9;
          do {
            if (*(int *)((long)puVar25 + 0x1c) < 0x1000) {
              embree::sse2::BVHNRotate<4>::rotate(*puVar16,1);
              *puVar16 = *puVar16 | 0x8000000000000000;
            }
            puVar16 = puVar16 + 1;
            puVar25 = puVar25 + 6;
          } while (puVar9 + uVar19 != puVar16);
        }
        uStack_22c = (int)uVar21;
        auVar3 = _local_238;
        stack0xfffffffffffffdd0 = auVar3._8_8_;
        *param_1 = puVar9;
        param_1[2] = local_238._0_8_;
        param_1[3] = stack0xfffffffffffffdd0;
        *(undefined1 (*) [16])(param_1 + 4) = auVar27;
        _local_238 = auVar3;
        goto LAB_0010c1db;
      }
    }
  }
  else {
    if (*(code **)**(undefined8 **)(param_2 + 0x50) !=
        Scene::BuildProgressMonitorInterface::operator()) {
      (**(code **)**(undefined8 **)(param_2 + 0x50))();
      goto LAB_0010bc41;
    }
    embree::Scene::progressMonitor((double)(uint)(*(int *)(param_4 + 4) - *(int *)param_4));
    if (local_250 + 8U < *(ulong *)(param_2 + 8)) goto LAB_0010bc55;
  }
  createLargeLeaf(param_1,param_2,local_250,param_4);
LAB_0010c1db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::BVHN<4>::CreateAlloc,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create, embree::sse2::SetBVHNBounds<4>,
   embree::sse2::CreateMortonLeaf<4, embree::TriangleM<4> >,
   embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,
   embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned long, embree::range<unsigned int>
   const&, embree::FastAllocator::CachedAllocator, bool)::{lambda(embree::range<unsigned long>
   const&)#1} const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 in_R9;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  uVar2 = *(ulong *)(this + 8);
  uVar3 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar2 - uVar3) {
    uVar2 = uVar2 + uVar3 >> 1;
    spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar3,uVar2,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x40));
    spawn<unsigned_long,embree::sse2::BVHBuilderMorton::BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>::recurse(unsigned_long,embree::range<unsigned_int>const&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar2,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x40));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    if (uVar3 < uVar2) {
      do {
        sse2::BVHBuilderMorton::
        BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
        ::recurse(local_68,*(undefined8 *)(this + 0x38),**(long **)(this + 0x28) + 1,
                  *(long *)(this + 0x30) + uVar3 * 8,1,in_R9,0,0,0);
        puVar1 = (undefined8 *)(uVar3 * 0x30 + *(long *)(this + 0x20));
        uVar3 = uVar3 + 1;
        *puVar1 = local_68[0];
        puVar1[2] = local_58;
        puVar1[3] = uStack_50;
        puVar1[4] = local_48;
        puVar1[5] = uStack_40;
      } while (uVar3 < uVar2);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*, long,
   embree::sse2::BVHBuilderMorton::BuildPrim, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&, embree::sse2::BVHBuilderMorton::BuildPrim
   const&)> >(embree::sse2::BVHBuilderMorton::BuildPrim*, long, long,
   embree::sse2::BVHBuilderMorton::BuildPrim, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&, embree::sse2::BVHBuilderMorton::BuildPrim
   const&)>) */

void std::
     __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
               (long param_1,long param_2,ulong param_3,undefined8 param_4,code *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = (long)(param_3 - 1) / 2;
  lVar6 = param_2;
  local_48 = param_4;
  if (param_2 < lVar5) {
    do {
      lVar4 = (lVar6 + 1) * 2;
      lVar3 = (lVar6 + 1) * 0x10;
      puVar7 = (undefined8 *)(param_1 + lVar3);
      cVar2 = (*param_5)(puVar7,param_1 + -8 + lVar3);
      if (cVar2 != '\0') {
        lVar4 = lVar4 + -1;
        puVar7 = (undefined8 *)(param_1 + lVar4 * 8);
      }
      *(undefined8 *)(param_1 + lVar6 * 8) = *puVar7;
      lVar6 = lVar4;
    } while (lVar4 < lVar5);
    if ((param_3 & 1) == 0) goto LAB_0010c988;
  }
  else {
    puVar7 = (undefined8 *)(param_1 + param_2 * 8);
    lVar4 = param_2;
    if ((param_3 & 1) != 0) goto LAB_0010c93f;
LAB_0010c988:
    if ((long)(param_3 - 2) / 2 == lVar4) {
      lVar6 = lVar4 * 2;
      lVar4 = lVar6 + 1;
      *puVar7 = *(undefined8 *)(param_1 + -8 + (lVar6 + 2) * 8);
      puVar7 = (undefined8 *)(param_1 + lVar4 * 8);
    }
  }
  lVar6 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  if (param_2 < lVar4) {
    do {
      lVar5 = lVar6 >> 1;
      puVar1 = (undefined8 *)(param_1 + lVar5 * 8);
      puVar7 = (undefined8 *)(param_1 + lVar4 * 8);
      cVar2 = (*param_5)(puVar1,&local_48);
      if (cVar2 == '\0') break;
      *puVar7 = *puVar1;
      lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
      lVar4 = lVar5;
      puVar7 = puVar1;
    } while (param_2 < lVar5);
  }
LAB_0010c93f:
  *puVar7 = local_48;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&,
   embree::sse2::BVHBuilderMorton::BuildPrim const&)> >(embree::sse2::BVHBuilderMorton::BuildPrim*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, long, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(embree::sse2::BVHBuilderMorton::BuildPrim const&, embree::sse2::BVHBuilderMorton::BuildPrim
   const&)>) */

void std::
     __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
               (undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (lVar6 < 0x81) {
    return;
  }
  if (param_3 != 0) {
    puVar3 = param_1 + 1;
    puVar9 = param_2;
    do {
      puVar1 = puVar9 + -1;
      param_3 = param_3 + -1;
      puVar2 = param_1 + (lVar6 >> 4);
      cVar5 = (*param_4)(puVar3,puVar2);
      param_2 = puVar3;
      puVar8 = puVar9;
      if (cVar5 == '\0') {
        cVar5 = (*param_4)(puVar3,puVar1);
        if (cVar5 == '\0') {
          cVar5 = (*param_4)(puVar2,puVar1);
          uVar7 = *param_1;
          if (cVar5 != '\0') goto LAB_0010cb2e;
          *param_1 = *puVar2;
          *puVar2 = uVar7;
        }
        else {
          uVar7 = *param_1;
LAB_0010cb08:
          uVar4 = param_1[1];
          param_1[1] = uVar7;
          *param_1 = uVar4;
        }
      }
      else {
        cVar5 = (*param_4)(puVar2);
        if (cVar5 == '\0') {
          cVar5 = (*param_4)(puVar3,puVar1);
          uVar7 = *param_1;
          if (cVar5 == '\0') goto LAB_0010cb08;
LAB_0010cb2e:
          *param_1 = puVar9[-1];
          puVar9[-1] = uVar7;
        }
        else {
          uVar7 = *param_1;
          *param_1 = *puVar2;
          *puVar2 = uVar7;
        }
      }
      while( true ) {
        while (cVar5 = (*param_4)(param_2,param_1), cVar5 != '\0') {
          param_2 = param_2 + 1;
        }
        do {
          puVar8 = puVar8 + -1;
          cVar5 = (*param_4)(param_1,puVar8);
        } while (cVar5 != '\0');
        if (puVar8 <= param_2) break;
        uVar7 = *param_2;
        *param_2 = *puVar8;
        *puVar8 = uVar7;
        param_2 = param_2 + 1;
      }
      __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                (param_2,puVar9,param_3,param_4);
      lVar6 = (long)param_2 - (long)param_1;
      if (lVar6 < 0x81) {
        return;
      }
      puVar9 = param_2;
    } while (param_3 != 0);
  }
  for (lVar10 = (lVar6 >> 3) + -2 >> 1;
      __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                (param_1,lVar10,lVar6 >> 3,param_1[lVar10],param_4), lVar10 != 0;
      lVar10 = lVar10 + -1) {
  }
  do {
    param_2 = param_2 + -1;
    uVar7 = *param_2;
    *param_2 = *param_1;
    __adjust_heap<embree::sse2::BVHBuilderMorton::BuildPrim*,long,embree::sse2::BVHBuilderMorton::BuildPrim,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
              (param_1,0,(long)param_2 - (long)param_1 >> 3,uVar7,param_4);
  } while (8 < (long)param_2 - (long)param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010cf9d) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
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
      *(undefined ***)pTVar4 = &PTR_execute_001116e8;
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
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#1}>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#1}>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar5 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar5) {
    uVar12 = *(long *)(this + 8) + uVar5 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar5,uVar12,*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar12,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  puVar6 = *(undefined8 **)(this + 0x20);
  plVar7 = (long *)puVar6[4];
  uVar11 = uVar5 * plVar7[3];
  lVar8 = *(long *)puVar6[1];
  uVar3 = *(undefined4 *)*puVar6;
  uVar12 = uVar11 / *(ulong *)puVar6[3];
  uVar11 = (plVar7[3] + uVar11) / *(ulong *)puVar6[3];
  lVar9 = 0;
  do {
    lVar2 = lVar9 * 4;
    lVar9 = lVar9 + 1;
    *(undefined4 *)(lVar2 + *plVar7 + uVar5 * 0x400) = 0;
  } while (lVar9 != 0x100);
  lVar9 = *plVar7;
  if (uVar12 < uVar11) {
    puVar10 = (uint *)(lVar8 + uVar12 * 8);
    do {
      uVar4 = *puVar10;
      puVar10 = puVar10 + 2;
      piVar1 = (int *)(lVar9 + uVar5 * 0x400 + (ulong)(byte)(uVar4 >> ((byte)uVar3 & 0x3f)) * 4);
      *piVar1 = *piVar1 + 1;
    } while ((uint *)(lVar8 + uVar11 * 8) != puVar10);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010d5bd) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
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
      *(undefined ***)pTVar4 = &PTR_execute_00111700;
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
                    /* WARNING: Subroutine does not return */
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long,
   embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}>(unsigned
   long, embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>::tbbRadixIteration(unsigned int, bool, embree::sse2::BVHBuilderMorton::BuildPrim const*,
   embree::sse2::BVHBuilderMorton::BuildPrim*, unsigned long)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#2}>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#2}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#2}>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::{lambda(unsigned_long)#2}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar1) {
    uVar3 = *(long *)(this + 8) + uVar1 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar1,uVar3,*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar3,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  puVar2 = *(undefined8 **)(this + 0x20);
  ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration1
            ((uint)*(undefined8 *)puVar2[4],(BuildPrim *)((undefined8 *)puVar2[4])[3],
             (BuildPrim *)(ulong)*(uint *)*puVar2,*(ulong *)puVar2[1],*(ulong *)puVar2[2]);
  return;
}



/* void embree::radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim, unsigned
   int>(embree::sse2::BVHBuilderMorton::BuildPrim*, embree::sse2::BVHBuilderMorton::BuildPrim*,
   unsigned long, unsigned long) */

void embree::radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
               (BuildPrim *param_1,BuildPrim *param_2,ulong param_3,ulong param_4)

{
  BuildPrim *pBVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  BuildPrim *pBVar7;
  BuildPrim *pBVar8;
  long in_FS_OFFSET;
  undefined4 local_b4;
  BuildPrim *local_b0;
  BuildPrim *local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  void *local_88;
  BuildPrim *local_80;
  BuildPrim *local_78;
  ulong local_70;
  undefined4 *local_68;
  BuildPrim **local_60;
  BuildPrim **local_58;
  ulong *local_50;
  void **local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (void *)0x0;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  if (param_4 < param_3) {
    uVar4 = embree::TaskScheduler::threadCount();
    uVar5 = ((param_4 - 1) + local_70) / param_4;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    uVar5 = 0x40;
    if (uVar4 < 0x41) {
      uVar5 = uVar4;
    }
    local_88 = (void *)embree::alignedMalloc(0x10000,0x40);
    local_b4 = 0;
    local_b0 = local_80;
    local_a8 = local_78;
    if (uVar4 != 0) {
      local_98 = 0;
      local_a0 = uVar5;
      local_68 = &local_b4;
      local_60 = &local_b0;
      local_58 = &local_a8;
      local_50 = &local_a0;
      local_48 = &local_88;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,uVar5,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                 (TaskGroupContext *)&local_98);
      embree::TaskScheduler::wait();
      local_90 = local_98;
      if (local_98 != 0) goto LAB_0010dd94;
      if (local_a0 != 0) {
        local_68 = &local_b4;
        local_60 = &local_b0;
        local_58 = &local_a8;
        local_50 = &local_a0;
        local_48 = &local_88;
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,local_a0,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                   (TaskGroupContext *)&local_98);
        embree::TaskScheduler::wait();
        local_90 = local_98;
        if (local_98 != 0) goto LAB_0010dd94;
      }
    }
    local_b4 = 8;
    if (uVar4 != 0) {
      local_98 = 0;
      local_b0 = local_78;
      local_a8 = local_80;
      local_a0 = uVar5;
      local_68 = &local_b4;
      local_60 = &local_b0;
      local_58 = &local_a8;
      local_50 = &local_a0;
      local_48 = &local_88;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,uVar5,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                 (TaskGroupContext *)&local_98);
      embree::TaskScheduler::wait();
      local_90 = local_98;
      if (local_98 != 0) goto LAB_0010dd94;
      if (local_a0 != 0) {
        local_68 = &local_b4;
        local_60 = &local_b0;
        local_58 = &local_a8;
        local_50 = &local_a0;
        local_48 = &local_88;
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,local_a0,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                   (TaskGroupContext *)&local_98);
        embree::TaskScheduler::wait();
        local_90 = local_98;
        if (local_98 != 0) goto LAB_0010dd94;
      }
    }
    local_b4 = 0x10;
    if (uVar4 != 0) {
      local_98 = 0;
      local_b0 = local_80;
      local_a8 = local_78;
      local_a0 = uVar5;
      local_68 = &local_b4;
      local_60 = &local_b0;
      local_58 = &local_a8;
      local_50 = &local_a0;
      local_48 = &local_88;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,uVar5,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                 (TaskGroupContext *)&local_98);
      embree::TaskScheduler::wait();
      local_90 = local_98;
      if (local_98 != 0) goto LAB_0010dd94;
      if (local_a0 != 0) {
        local_68 = &local_b4;
        local_60 = &local_b0;
        local_58 = &local_a8;
        local_50 = &local_a0;
        local_48 = &local_88;
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,local_a0,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                   (TaskGroupContext *)&local_98);
        embree::TaskScheduler::wait();
        local_90 = local_98;
        if (local_98 != 0) goto LAB_0010dd94;
      }
    }
    local_b4 = 0x18;
    local_b0 = local_78;
    local_a8 = local_80;
    local_a0 = uVar5;
    local_68 = &local_b4;
    local_60 = &local_b0;
    local_58 = &local_a8;
    local_50 = &local_a0;
    local_48 = &local_88;
    if (uVar4 != 0) {
      local_98 = 0;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,uVar5,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                 (TaskGroupContext *)&local_98);
      embree::TaskScheduler::wait();
      local_90 = local_98;
      if (local_98 != 0) {
LAB_0010dd94:
        local_98 = local_90;
        std::__exception_ptr::exception_ptr::_M_addref();
                    /* WARNING: Subroutine does not return */
        std::rethrow_exception(&local_90);
      }
      local_68 = &local_b4;
      local_60 = &local_b0;
      local_58 = &local_a8;
      local_50 = &local_a0;
      local_48 = &local_88;
      if (local_a0 != 0) {
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_>(unsigned_long,embree::ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::tbbRadixIteration(unsigned_int,bool,embree::sse2::BVHBuilderMorton::BuildPrim_const*,embree::sse2::BVHBuilderMorton::BuildPrim*,unsigned_long)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,local_a0,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_68,
                   (TaskGroupContext *)&local_98);
        embree::TaskScheduler::wait();
        if (local_98 != 0) {
          local_90 = local_98;
          goto LAB_0010dd94;
        }
      }
    }
  }
  else {
    lVar2 = param_3 * 8;
    pBVar1 = param_1 + lVar2;
    if (param_1 != pBVar1) {
      lVar6 = -2;
      uVar4 = lVar2 >> 3;
      if (uVar4 != 0) {
        lVar6 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        lVar6 = (long)(int)lVar6 * 2;
      }
      std::
      __introsort_loop<embree::sse2::BVHBuilderMorton::BuildPrim*,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                (param_1,pBVar1,lVar6,
                 ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                 compare<embree::sse2::BVHBuilderMorton::BuildPrim>);
      if (lVar2 < 0x81) {
        std::
        __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                  (param_1,pBVar1,
                   ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                   compare<embree::sse2::BVHBuilderMorton::BuildPrim>);
      }
      else {
        pBVar8 = param_1 + 0x78;
        std::
        __insertion_sort<embree::sse2::BVHBuilderMorton::BuildPrim*,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(embree::sse2::BVHBuilderMorton::BuildPrim_const&,embree::sse2::BVHBuilderMorton::BuildPrim_const&)>>
                  (param_1,param_1 + 0x80,
                   ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>::
                   compare<embree::sse2::BVHBuilderMorton::BuildPrim>);
        if (pBVar1 != param_1 + 0x80) {
          do {
            local_68 = *(undefined4 **)(pBVar8 + 8);
            pBVar7 = pBVar8;
            while (bVar3 = ParallelRadixSort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
                           ::compare<embree::sse2::BVHBuilderMorton::BuildPrim>
                                     ((BuildPrim *)&local_68,pBVar7), bVar3) {
              *(undefined8 *)(pBVar7 + 8) = *(undefined8 *)pBVar7;
              pBVar7 = pBVar7 + -8;
            }
            pBVar8 = pBVar8 + 8;
            *(undefined4 **)(pBVar7 + 8) = local_68;
          } while (pBVar8 != pBVar1 + -8);
        }
      }
    }
  }
  embree::alignedFree(local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4> >::build() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::build
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 local_149;
  long local_148;
  long local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  BuildPrim *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 *local_68;
  undefined8 *local_60;
  undefined ***local_58;
  BuildPrim *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(uint *)(this + 0x74);
  if (*(uint *)(*(long *)(this + 0x18) + 0x20) == uVar4) {
    *(uint *)(this + 0x74) = uVar4;
  }
  else {
    lVar10 = *(long *)(this + 0x10);
    plVar13 = (long *)(lVar10 + 0x170);
    plVar12 = (long *)(lVar10 + 0x130);
    do {
      while (*plVar12 != 0) {
        lVar8 = *(long *)(*plVar12 + 0x18);
        *(long *)(*plVar12 + 0x18) = *plVar13;
        LOCK();
        *plVar13 = *plVar12;
        UNLOCK();
        LOCK();
        *plVar12 = lVar8;
        UNLOCK();
      }
      LOCK();
      *plVar12 = 0;
      UNLOCK();
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar13);
    plVar12 = *(long **)(lVar10 + 0x1a8);
    plVar1 = *(long **)(lVar10 + 0x1b0);
    if (plVar1 != plVar12) {
      do {
        while( true ) {
          lVar8 = *plVar12;
          if (lVar10 + 0x78 != *(long *)(lVar8 + 8)) break;
          embree::MutexSys::lock();
          if (lVar10 + 0x78 == *(long *)(lVar8 + 8)) {
            LOCK();
            plVar2 = (long *)(*(long *)(lVar8 + 8) + 0x118);
            *plVar2 = *plVar2 + *(long *)(lVar8 + 0xa8) + *(long *)(lVar8 + 0x68);
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar8 + 8) + 0x120);
            *plVar2 = *plVar2 + (((*(long *)(lVar8 + 0x98) + *(long *)(lVar8 + 0x58)) -
                                 *(long *)(lVar8 + 0x50)) - *(long *)(lVar8 + 0x90));
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar8 + 8) + 0x128);
            *plVar2 = *plVar2 + *(long *)(lVar8 + 0xb0) + *(long *)(lVar8 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x58) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined8 *)(lVar8 + 0x68) = 0;
            *(undefined8 *)(lVar8 + 0x70) = 0;
            *(undefined8 *)(lVar8 + 0x60) = 0;
            *(undefined8 *)(lVar8 + 0x88) = 0;
            *(undefined8 *)(lVar8 + 0x98) = 0;
            *(undefined8 *)(lVar8 + 0x90) = 0;
            *(undefined8 *)(lVar8 + 0xa8) = 0;
            *(undefined8 *)(lVar8 + 0xb0) = 0;
            *(undefined8 *)(lVar8 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar8 + 8) = 0;
            UNLOCK();
          }
          embree::MutexSys::unlock();
          plVar12 = plVar12 + 1;
          if (plVar1 == plVar12) goto LAB_0010e50c;
        }
        plVar12 = plVar12 + 1;
      } while (plVar1 != plVar12);
LAB_0010e50c:
      if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
        *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
      }
    }
    LOCK();
    *(undefined8 *)(lVar10 + 400) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar10 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar10 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(lVar10 + 0x170) != 0) {
      puVar16 = *(ulong **)(lVar10 + 0x170);
      cVar3 = *(char *)(lVar10 + 0x180);
      plVar12 = *(long **)(lVar10 + 0x78);
LAB_0010e570:
      puVar17 = puVar16;
      if (puVar16 != (ulong *)0x0) {
        do {
          puVar16 = (ulong *)puVar17[3];
          uVar9 = puVar17[4];
          uVar11 = *puVar17;
          if (*puVar17 < puVar17[1]) {
            uVar11 = puVar17[1];
          }
          if (puVar17[2] < uVar11) {
            uVar11 = puVar17[2];
          }
          if ((int)puVar17[5] == 0) {
            if (cVar3 == '\0') {
              embree::alignedFree(puVar17);
            }
            else {
              (**(code **)(*plVar12 + 0x40))(plVar12,puVar17);
            }
          }
          else {
            if ((int)puVar17[5] != 1) goto LAB_0010e570;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
          }
          if (plVar12 == (long *)0x0) goto LAB_0010e570;
          (**(code **)(*plVar12 + 0x20))(plVar12,-(uVar9 + 0x40 + uVar11),1);
          puVar17 = puVar16;
          if (puVar16 == (ulong *)0x0) break;
        } while( true );
      }
    }
    LOCK();
    *plVar13 = 0;
    UNLOCK();
    if (*(long *)(lVar10 + 0x178) != 0) {
      puVar16 = *(ulong **)(lVar10 + 0x178);
      cVar3 = *(char *)(lVar10 + 0x180);
      plVar13 = *(long **)(lVar10 + 0x78);
LAB_0010e618:
      puVar17 = puVar16;
      if (puVar16 != (ulong *)0x0) {
        do {
          puVar16 = (ulong *)puVar17[3];
          uVar9 = puVar17[4];
          uVar11 = *puVar17;
          if (*puVar17 < puVar17[1]) {
            uVar11 = puVar17[1];
          }
          if (puVar17[2] < uVar11) {
            uVar11 = puVar17[2];
          }
          if ((int)puVar17[5] == 0) {
            if (cVar3 == '\0') {
              embree::alignedFree(puVar17);
            }
            else {
              (**(code **)(*plVar13 + 0x40))(plVar13,puVar17);
            }
          }
          else {
            if ((int)puVar17[5] != 1) goto LAB_0010e618;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
          }
          if (plVar13 == (long *)0x0) goto LAB_0010e618;
          (**(code **)(*plVar13 + 0x20))(plVar13,-(uVar9 + 0x40 + uVar11),1);
          puVar17 = puVar16;
          if (puVar16 == (ulong *)0x0) break;
        } while( true );
      }
    }
    LOCK();
    *(undefined8 *)(lVar10 + 0x178) = 0;
    UNLOCK();
    plVar13 = (long *)(lVar10 + 0xf0);
    do {
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      LOCK();
      plVar13[8] = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while ((long *)(lVar10 + 0x130) != plVar13);
    pvVar7 = *(void **)(lVar10 + 0x1e8);
    lVar8 = *(long *)(lVar10 + 0x1e0);
    if (pvVar7 != (void *)0x0) {
      if ((ulong)(lVar8 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar7);
      }
      else {
        embree::os_free(pvVar7,lVar8 << 5,*(bool *)(lVar10 + 0x1d0));
      }
    }
    if (lVar8 != 0) {
      (**(code **)**(undefined8 **)(lVar10 + 0x1c8))
                (*(undefined8 **)(lVar10 + 0x1c8),lVar8 * -0x20,1);
    }
    *(undefined8 *)(lVar10 + 0x1e8) = 0;
    *(undefined8 *)(lVar10 + 0x1e0) = 0;
    *(undefined8 *)(lVar10 + 0x1d8) = 0;
    pvVar7 = *(void **)(this + 0x40);
    lVar10 = *(long *)(this + 0x38);
    if (pvVar7 != (void *)0x0) {
      if ((ulong)(lVar10 * 8) < 0x1c00000) {
        embree::alignedFree(pvVar7);
      }
      else {
        embree::os_free(pvVar7,lVar10 * 8,(bool)this[0x28]);
      }
    }
    if (lVar10 != 0) {
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar10 * -8,1);
    }
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    uVar4 = *(uint *)(*(long *)(this + 0x18) + 0x20);
    *(uint *)(this + 0x74) = uVar4;
  }
  uVar9 = (ulong)uVar4;
  if (uVar9 == 0) {
    local_a8 = CONCAT44(_LC4,_LC4);
    uStack_a0 = CONCAT44(_LC4,_LC4);
    local_88 = CONCAT44(_LC4,_LC4);
    uStack_80 = (long *)CONCAT44(_LC4,_LC4);
    local_98 = CONCAT44(_LC2,_LC2);
    uStack_90 = CONCAT44(_LC2,_LC2);
    local_78 = (undefined1 *)CONCAT44(_LC2,_LC2);
    uStack_70 = (long *)CONCAT44(_LC2,_LC2);
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),8,&local_a8,0);
  }
  else {
    uVar11 = *(ulong *)(this + 0x38);
    if (uVar11 < uVar9) {
      if (uVar11 == 0) {
        uVar11 = uVar9;
        if (uVar9 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar9;
        }
      }
      else {
        do {
          uVar11 = uVar11 * 2;
        } while (uVar11 < uVar9);
        if (uVar9 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar9;
        }
      }
      uVar15 = uVar11 * 8;
      puVar5 = *(undefined8 **)(this + 0x40);
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),uVar15,0);
      if (uVar15 < 0x1c00000) {
        lVar10 = embree::alignedMalloc(uVar15,8);
      }
      else {
        lVar10 = embree::os_malloc(uVar15,(bool *)(this + 0x28));
      }
      *(long *)(this + 0x40) = lVar10;
      if (*(long *)(this + 0x30) != 0) {
        uVar15 = 0;
        puVar14 = puVar5;
        while( true ) {
          uVar6 = *puVar14;
          puVar14 = puVar14 + 1;
          *(undefined8 *)(lVar10 + uVar15 * 8) = uVar6;
          uVar15 = uVar15 + 1;
          if (*(ulong *)(this + 0x30) <= uVar15) break;
          lVar10 = *(long *)(this + 0x40);
        }
      }
      lVar10 = *(long *)(this + 0x38);
      if (puVar5 != (undefined8 *)0x0) {
        if ((ulong)(lVar10 * 8) < 0x1c00000) {
          embree::alignedFree(puVar5);
        }
        else {
          embree::os_free(puVar5,lVar10 * 8,(bool)this[0x28]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar10 * -8,1);
      }
      *(ulong *)(this + 0x30) = uVar9;
      *(ulong *)(this + 0x38) = uVar11;
    }
    else {
      *(ulong *)(this + 0x30) = uVar9;
    }
    uVar11 = uVar9 * 8;
    fVar18 = (float)(uVar9 + 3 >> 2) * __LC21 * __LC22;
    if (__LC23 <= fVar18) {
      uVar15 = (long)(fVar18 - __LC23) ^ 0x8000000000000000;
    }
    else {
      uVar15 = (ulong)fVar18;
    }
    uVar15 = uVar15 + uVar9 * 8;
    if (uVar15 < uVar11) {
      uVar15 = uVar11;
    }
    FastAllocator::init((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar11,uVar11,uVar15);
    plVar13 = *(long **)(*(long *)(this + 0x10) + 0x178);
    lVar10 = *plVar13;
    uVar11 = embree::sse2::createMortonCodeArray<embree::TriangleMesh>
                       (*(TriangleMesh **)(this + 0x18),(vector_t *)(this + 0x20),
                        (BuildProgressMonitor *)(*(long *)(*(long *)(this + 0x10) + 0x68) + 600));
    local_108 = *(undefined4 *)(this + 0x70);
    local_138 = *(undefined8 *)(this + 0x18);
    local_140 = *(long *)(this + 0x10);
    local_a8 = *(undefined8 *)(this + 0x48);
    uStack_a0 = *(undefined8 *)(this + 0x50);
    local_128 = &PTR_operator___001119a0;
    local_98 = *(undefined8 *)(this + 0x58);
    uStack_90 = *(undefined8 *)(this + 0x60);
    local_110 = *(BuildPrim **)(this + 0x40);
    local_88 = *(ulong *)(this + 0x68);
    local_120 = *(undefined8 *)(*(long *)(local_140 + 0x68) + 0x260);
    local_148 = local_140 + 0x78;
    uStack_80 = &local_148;
    local_78 = &local_149;
    uStack_70 = &local_140;
    local_68 = &local_118;
    local_60 = &local_138;
    local_58 = &local_128;
    local_118 = local_138;
    local_50 = local_110;
    radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
              (local_110,(BuildPrim *)((long)plVar13 + lVar10 + 0x40),uVar11,local_88);
    local_12c = (undefined4)uVar11;
    local_130 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    BVHBuilderMorton::
    BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleM<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
    ::recurse(local_d8,&local_a8,1,&local_130,1);
    local_a8 = CONCAT44(uStack_c4,local_c8);
    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_88 = CONCAT44(uStack_c4,local_c8);
    uStack_80 = (long *)CONCAT44(uStack_bc,uStack_c0);
    local_78 = (undefined1 *)local_b8;
    uStack_70 = (long *)uStack_b0;
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),local_d8[0],&local_a8,uVar9);
    embree::sse2::BVHNRotate<4>::rotate(*(undefined8 *)(*(long *)(this + 0x10) + 0x70),1);
    embree::BVHN<4>::clearBarrier(*(NodeRefPtr **)(this + 0x10));
    lVar10 = *(long *)(this + 0x10);
    if ((*(byte *)(*(long *)(lVar10 + 0x68) + 0x230) & 1) == 0) {
      pvVar7 = *(void **)(this + 0x40);
      lVar10 = *(long *)(this + 0x38);
      if (pvVar7 != (void *)0x0) {
        if ((ulong)(lVar10 * 8) < 0x1c00000) {
          embree::alignedFree(pvVar7);
        }
        else {
          embree::os_free(pvVar7,lVar10 * 8,(bool)this[0x28]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar10 * -8,1);
      }
      *(undefined8 *)(this + 0x40) = 0;
      lVar10 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x30) = 0;
    }
    plVar13 = (long *)(lVar10 + 0x130);
    plVar12 = (long *)(lVar10 + 0x170);
    do {
      while (*plVar13 != 0) {
        lVar8 = *(long *)(*plVar13 + 0x18);
        *(long *)(*plVar13 + 0x18) = *plVar12;
        LOCK();
        *plVar12 = *plVar13;
        UNLOCK();
        LOCK();
        *plVar13 = lVar8;
        UNLOCK();
      }
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while (plVar12 != plVar13);
    plVar13 = *(long **)(lVar10 + 0x1a8);
    plVar12 = *(long **)(lVar10 + 0x1b0);
    if (plVar13 != plVar12) {
      do {
        while( true ) {
          lVar8 = *plVar13;
          if (lVar10 + 0x78 != *(long *)(lVar8 + 8)) break;
          embree::MutexSys::lock();
          if (lVar10 + 0x78 == *(long *)(lVar8 + 8)) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x118);
            *plVar1 = *plVar1 + *(long *)(lVar8 + 0xa8) + *(long *)(lVar8 + 0x68);
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x120);
            *plVar1 = *plVar1 + (((*(long *)(lVar8 + 0x98) + *(long *)(lVar8 + 0x58)) -
                                 *(long *)(lVar8 + 0x50)) - *(long *)(lVar8 + 0x90));
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x128);
            *plVar1 = *plVar1 + *(long *)(lVar8 + 0xb0) + *(long *)(lVar8 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x58) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined8 *)(lVar8 + 0x68) = 0;
            *(undefined8 *)(lVar8 + 0x70) = 0;
            *(undefined8 *)(lVar8 + 0x60) = 0;
            *(undefined8 *)(lVar8 + 0x88) = 0;
            *(undefined8 *)(lVar8 + 0x98) = 0;
            *(undefined8 *)(lVar8 + 0x90) = 0;
            *(undefined8 *)(lVar8 + 0xa8) = 0;
            *(undefined8 *)(lVar8 + 0xb0) = 0;
            *(undefined8 *)(lVar8 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar8 + 8) = 0;
            UNLOCK();
          }
          plVar13 = plVar13 + 1;
          embree::MutexSys::unlock();
          if (plVar12 == plVar13) goto LAB_0010e33f;
        }
        plVar13 = plVar13 + 1;
      } while (plVar12 != plVar13);
LAB_0010e33f:
      if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
        *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4> >::build() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::build
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 local_149;
  long local_148;
  long local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  BuildPrim *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 *local_68;
  undefined8 *local_60;
  undefined ***local_58;
  BuildPrim *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(uint *)(this + 0x74);
  if (*(uint *)(*(long *)(this + 0x18) + 0x20) == uVar4) {
    *(uint *)(this + 0x74) = uVar4;
  }
  else {
    lVar10 = *(long *)(this + 0x10);
    plVar13 = (long *)(lVar10 + 0x170);
    plVar12 = (long *)(lVar10 + 0x130);
    do {
      while (*plVar12 != 0) {
        lVar8 = *(long *)(*plVar12 + 0x18);
        *(long *)(*plVar12 + 0x18) = *plVar13;
        LOCK();
        *plVar13 = *plVar12;
        UNLOCK();
        LOCK();
        *plVar12 = lVar8;
        UNLOCK();
      }
      LOCK();
      *plVar12 = 0;
      UNLOCK();
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar13);
    plVar12 = *(long **)(lVar10 + 0x1a8);
    plVar1 = *(long **)(lVar10 + 0x1b0);
    if (plVar1 != plVar12) {
      do {
        while( true ) {
          lVar8 = *plVar12;
          if (lVar10 + 0x78 != *(long *)(lVar8 + 8)) break;
          embree::MutexSys::lock();
          if (lVar10 + 0x78 == *(long *)(lVar8 + 8)) {
            LOCK();
            plVar2 = (long *)(*(long *)(lVar8 + 8) + 0x118);
            *plVar2 = *plVar2 + *(long *)(lVar8 + 0xa8) + *(long *)(lVar8 + 0x68);
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar8 + 8) + 0x120);
            *plVar2 = *plVar2 + (((*(long *)(lVar8 + 0x98) + *(long *)(lVar8 + 0x58)) -
                                 *(long *)(lVar8 + 0x50)) - *(long *)(lVar8 + 0x90));
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar8 + 8) + 0x128);
            *plVar2 = *plVar2 + *(long *)(lVar8 + 0xb0) + *(long *)(lVar8 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x58) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined8 *)(lVar8 + 0x68) = 0;
            *(undefined8 *)(lVar8 + 0x70) = 0;
            *(undefined8 *)(lVar8 + 0x60) = 0;
            *(undefined8 *)(lVar8 + 0x88) = 0;
            *(undefined8 *)(lVar8 + 0x98) = 0;
            *(undefined8 *)(lVar8 + 0x90) = 0;
            *(undefined8 *)(lVar8 + 0xa8) = 0;
            *(undefined8 *)(lVar8 + 0xb0) = 0;
            *(undefined8 *)(lVar8 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar8 + 8) = 0;
            UNLOCK();
          }
          embree::MutexSys::unlock();
          plVar12 = plVar12 + 1;
          if (plVar1 == plVar12) goto LAB_0010f00c;
        }
        plVar12 = plVar12 + 1;
      } while (plVar1 != plVar12);
LAB_0010f00c:
      if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
        *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
      }
    }
    LOCK();
    *(undefined8 *)(lVar10 + 400) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar10 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar10 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(lVar10 + 0x170) != 0) {
      puVar16 = *(ulong **)(lVar10 + 0x170);
      cVar3 = *(char *)(lVar10 + 0x180);
      plVar12 = *(long **)(lVar10 + 0x78);
LAB_0010f070:
      puVar17 = puVar16;
      if (puVar16 != (ulong *)0x0) {
        do {
          puVar16 = (ulong *)puVar17[3];
          uVar9 = puVar17[4];
          uVar11 = *puVar17;
          if (*puVar17 < puVar17[1]) {
            uVar11 = puVar17[1];
          }
          if (puVar17[2] < uVar11) {
            uVar11 = puVar17[2];
          }
          if ((int)puVar17[5] == 0) {
            if (cVar3 == '\0') {
              embree::alignedFree(puVar17);
            }
            else {
              (**(code **)(*plVar12 + 0x40))(plVar12,puVar17);
            }
          }
          else {
            if ((int)puVar17[5] != 1) goto LAB_0010f070;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
          }
          if (plVar12 == (long *)0x0) goto LAB_0010f070;
          (**(code **)(*plVar12 + 0x20))(plVar12,-(uVar9 + 0x40 + uVar11),1);
          puVar17 = puVar16;
          if (puVar16 == (ulong *)0x0) break;
        } while( true );
      }
    }
    LOCK();
    *plVar13 = 0;
    UNLOCK();
    if (*(long *)(lVar10 + 0x178) != 0) {
      puVar16 = *(ulong **)(lVar10 + 0x178);
      cVar3 = *(char *)(lVar10 + 0x180);
      plVar13 = *(long **)(lVar10 + 0x78);
LAB_0010f118:
      puVar17 = puVar16;
      if (puVar16 != (ulong *)0x0) {
        do {
          puVar16 = (ulong *)puVar17[3];
          uVar9 = puVar17[4];
          uVar11 = *puVar17;
          if (*puVar17 < puVar17[1]) {
            uVar11 = puVar17[1];
          }
          if (puVar17[2] < uVar11) {
            uVar11 = puVar17[2];
          }
          if ((int)puVar17[5] == 0) {
            if (cVar3 == '\0') {
              embree::alignedFree(puVar17);
            }
            else {
              (**(code **)(*plVar13 + 0x40))(plVar13,puVar17);
            }
          }
          else {
            if ((int)puVar17[5] != 1) goto LAB_0010f118;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
          }
          if (plVar13 == (long *)0x0) goto LAB_0010f118;
          (**(code **)(*plVar13 + 0x20))(plVar13,-(uVar9 + 0x40 + uVar11),1);
          puVar17 = puVar16;
          if (puVar16 == (ulong *)0x0) break;
        } while( true );
      }
    }
    LOCK();
    *(undefined8 *)(lVar10 + 0x178) = 0;
    UNLOCK();
    plVar13 = (long *)(lVar10 + 0xf0);
    do {
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      LOCK();
      plVar13[8] = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while ((long *)(lVar10 + 0x130) != plVar13);
    pvVar7 = *(void **)(lVar10 + 0x1e8);
    lVar8 = *(long *)(lVar10 + 0x1e0);
    if (pvVar7 != (void *)0x0) {
      if ((ulong)(lVar8 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar7);
      }
      else {
        embree::os_free(pvVar7,lVar8 << 5,*(bool *)(lVar10 + 0x1d0));
      }
    }
    if (lVar8 != 0) {
      (**(code **)**(undefined8 **)(lVar10 + 0x1c8))
                (*(undefined8 **)(lVar10 + 0x1c8),lVar8 * -0x20,1);
    }
    *(undefined8 *)(lVar10 + 0x1e8) = 0;
    *(undefined8 *)(lVar10 + 0x1e0) = 0;
    *(undefined8 *)(lVar10 + 0x1d8) = 0;
    pvVar7 = *(void **)(this + 0x40);
    lVar10 = *(long *)(this + 0x38);
    if (pvVar7 != (void *)0x0) {
      if ((ulong)(lVar10 * 8) < 0x1c00000) {
        embree::alignedFree(pvVar7);
      }
      else {
        embree::os_free(pvVar7,lVar10 * 8,(bool)this[0x28]);
      }
    }
    if (lVar10 != 0) {
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar10 * -8,1);
    }
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    uVar4 = *(uint *)(*(long *)(this + 0x18) + 0x20);
    *(uint *)(this + 0x74) = uVar4;
  }
  uVar9 = (ulong)uVar4;
  if (uVar9 == 0) {
    local_a8 = CONCAT44(_LC4,_LC4);
    uStack_a0 = CONCAT44(_LC4,_LC4);
    local_88 = CONCAT44(_LC4,_LC4);
    uStack_80 = (long *)CONCAT44(_LC4,_LC4);
    local_98 = CONCAT44(_LC2,_LC2);
    uStack_90 = CONCAT44(_LC2,_LC2);
    local_78 = (undefined1 *)CONCAT44(_LC2,_LC2);
    uStack_70 = (long *)CONCAT44(_LC2,_LC2);
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),8,&local_a8,0);
  }
  else {
    uVar11 = *(ulong *)(this + 0x38);
    if (uVar11 < uVar9) {
      if (uVar11 == 0) {
        uVar11 = uVar9;
        if (uVar9 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar9;
        }
      }
      else {
        do {
          uVar11 = uVar11 * 2;
        } while (uVar11 < uVar9);
        if (uVar9 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar9;
        }
      }
      uVar15 = uVar11 * 8;
      puVar5 = *(undefined8 **)(this + 0x40);
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),uVar15,0);
      if (uVar15 < 0x1c00000) {
        lVar10 = embree::alignedMalloc(uVar15,8);
      }
      else {
        lVar10 = embree::os_malloc(uVar15,(bool *)(this + 0x28));
      }
      *(long *)(this + 0x40) = lVar10;
      if (*(long *)(this + 0x30) != 0) {
        uVar15 = 0;
        puVar14 = puVar5;
        while( true ) {
          uVar6 = *puVar14;
          puVar14 = puVar14 + 1;
          *(undefined8 *)(lVar10 + uVar15 * 8) = uVar6;
          uVar15 = uVar15 + 1;
          if (*(ulong *)(this + 0x30) <= uVar15) break;
          lVar10 = *(long *)(this + 0x40);
        }
      }
      lVar10 = *(long *)(this + 0x38);
      if (puVar5 != (undefined8 *)0x0) {
        if ((ulong)(lVar10 * 8) < 0x1c00000) {
          embree::alignedFree(puVar5);
        }
        else {
          embree::os_free(puVar5,lVar10 * 8,(bool)this[0x28]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar10 * -8,1);
      }
      *(ulong *)(this + 0x30) = uVar9;
      *(ulong *)(this + 0x38) = uVar11;
    }
    else {
      *(ulong *)(this + 0x30) = uVar9;
    }
    uVar11 = uVar9 * 8;
    fVar18 = (float)(uVar9 + 3 >> 2) * __LC21 * __LC24;
    if (__LC23 <= fVar18) {
      uVar15 = (long)(fVar18 - __LC23) ^ 0x8000000000000000;
    }
    else {
      uVar15 = (ulong)fVar18;
    }
    uVar15 = uVar15 + uVar9 * 8;
    if (uVar15 < uVar11) {
      uVar15 = uVar11;
    }
    FastAllocator::init((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar11,uVar11,uVar15);
    plVar13 = *(long **)(*(long *)(this + 0x10) + 0x178);
    lVar10 = *plVar13;
    uVar11 = embree::sse2::createMortonCodeArray<embree::TriangleMesh>
                       (*(TriangleMesh **)(this + 0x18),(vector_t *)(this + 0x20),
                        (BuildProgressMonitor *)(*(long *)(*(long *)(this + 0x10) + 0x68) + 600));
    local_108 = *(undefined4 *)(this + 0x70);
    local_138 = *(undefined8 *)(this + 0x18);
    local_140 = *(long *)(this + 0x10);
    local_a8 = *(undefined8 *)(this + 0x48);
    uStack_a0 = *(undefined8 *)(this + 0x50);
    local_128 = &PTR_operator___001119a0;
    local_98 = *(undefined8 *)(this + 0x58);
    uStack_90 = *(undefined8 *)(this + 0x60);
    local_110 = *(BuildPrim **)(this + 0x40);
    local_88 = *(ulong *)(this + 0x68);
    local_120 = *(undefined8 *)(*(long *)(local_140 + 0x68) + 0x260);
    local_148 = local_140 + 0x78;
    uStack_80 = &local_148;
    local_78 = &local_149;
    uStack_70 = &local_140;
    local_68 = &local_118;
    local_60 = &local_138;
    local_58 = &local_128;
    local_118 = local_138;
    local_50 = local_110;
    radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
              (local_110,(BuildPrim *)((long)plVar13 + lVar10 + 0x40),uVar11,local_88);
    local_12c = (undefined4)uVar11;
    local_130 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    BVHBuilderMorton::
    BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMi<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
    ::recurse(local_d8,&local_a8,1,&local_130,1);
    local_a8 = CONCAT44(uStack_c4,local_c8);
    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_88 = CONCAT44(uStack_c4,local_c8);
    uStack_80 = (long *)CONCAT44(uStack_bc,uStack_c0);
    local_78 = (undefined1 *)local_b8;
    uStack_70 = (long *)uStack_b0;
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),local_d8[0],&local_a8,uVar9);
    embree::sse2::BVHNRotate<4>::rotate(*(undefined8 *)(*(long *)(this + 0x10) + 0x70),1);
    embree::BVHN<4>::clearBarrier(*(NodeRefPtr **)(this + 0x10));
    lVar10 = *(long *)(this + 0x10);
    if ((*(byte *)(*(long *)(lVar10 + 0x68) + 0x230) & 1) == 0) {
      pvVar7 = *(void **)(this + 0x40);
      lVar10 = *(long *)(this + 0x38);
      if (pvVar7 != (void *)0x0) {
        if ((ulong)(lVar10 * 8) < 0x1c00000) {
          embree::alignedFree(pvVar7);
        }
        else {
          embree::os_free(pvVar7,lVar10 * 8,(bool)this[0x28]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar10 * -8,1);
      }
      *(undefined8 *)(this + 0x40) = 0;
      lVar10 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x30) = 0;
    }
    plVar13 = (long *)(lVar10 + 0x130);
    plVar12 = (long *)(lVar10 + 0x170);
    do {
      while (*plVar13 != 0) {
        lVar8 = *(long *)(*plVar13 + 0x18);
        *(long *)(*plVar13 + 0x18) = *plVar12;
        LOCK();
        *plVar12 = *plVar13;
        UNLOCK();
        LOCK();
        *plVar13 = lVar8;
        UNLOCK();
      }
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while (plVar12 != plVar13);
    plVar13 = *(long **)(lVar10 + 0x1a8);
    plVar12 = *(long **)(lVar10 + 0x1b0);
    if (plVar13 != plVar12) {
      do {
        while( true ) {
          lVar8 = *plVar13;
          if (lVar10 + 0x78 != *(long *)(lVar8 + 8)) break;
          embree::MutexSys::lock();
          if (lVar10 + 0x78 == *(long *)(lVar8 + 8)) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x118);
            *plVar1 = *plVar1 + *(long *)(lVar8 + 0xa8) + *(long *)(lVar8 + 0x68);
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x120);
            *plVar1 = *plVar1 + (((*(long *)(lVar8 + 0x98) + *(long *)(lVar8 + 0x58)) -
                                 *(long *)(lVar8 + 0x50)) - *(long *)(lVar8 + 0x90));
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x128);
            *plVar1 = *plVar1 + *(long *)(lVar8 + 0xb0) + *(long *)(lVar8 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x58) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined8 *)(lVar8 + 0x68) = 0;
            *(undefined8 *)(lVar8 + 0x70) = 0;
            *(undefined8 *)(lVar8 + 0x60) = 0;
            *(undefined8 *)(lVar8 + 0x88) = 0;
            *(undefined8 *)(lVar8 + 0x98) = 0;
            *(undefined8 *)(lVar8 + 0x90) = 0;
            *(undefined8 *)(lVar8 + 0xa8) = 0;
            *(undefined8 *)(lVar8 + 0xb0) = 0;
            *(undefined8 *)(lVar8 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar8 + 8) = 0;
            UNLOCK();
          }
          plVar13 = plVar13 + 1;
          embree::MutexSys::unlock();
          if (plVar12 == plVar13) goto LAB_0010ee3f;
        }
        plVar13 = plVar13 + 1;
      } while (plVar12 != plVar13);
LAB_0010ee3f:
      if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
        *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4> >::build() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::build
          (BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 local_149;
  long local_148;
  long local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  BuildPrim *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 *local_68;
  undefined8 *local_60;
  undefined ***local_58;
  BuildPrim *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(uint *)(this + 0x74);
  if (*(uint *)(*(long *)(this + 0x18) + 0x20) == uVar4) {
    *(uint *)(this + 0x74) = uVar4;
  }
  else {
    lVar10 = *(long *)(this + 0x10);
    plVar13 = (long *)(lVar10 + 0x170);
    plVar12 = (long *)(lVar10 + 0x130);
    do {
      while (*plVar12 != 0) {
        lVar8 = *(long *)(*plVar12 + 0x18);
        *(long *)(*plVar12 + 0x18) = *plVar13;
        LOCK();
        *plVar13 = *plVar12;
        UNLOCK();
        LOCK();
        *plVar12 = lVar8;
        UNLOCK();
      }
      LOCK();
      *plVar12 = 0;
      UNLOCK();
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar13);
    plVar12 = *(long **)(lVar10 + 0x1a8);
    plVar1 = *(long **)(lVar10 + 0x1b0);
    if (plVar1 != plVar12) {
      do {
        while( true ) {
          lVar8 = *plVar12;
          if (lVar10 + 0x78 != *(long *)(lVar8 + 8)) break;
          embree::MutexSys::lock();
          if (lVar10 + 0x78 == *(long *)(lVar8 + 8)) {
            LOCK();
            plVar2 = (long *)(*(long *)(lVar8 + 8) + 0x118);
            *plVar2 = *plVar2 + *(long *)(lVar8 + 0xa8) + *(long *)(lVar8 + 0x68);
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar8 + 8) + 0x120);
            *plVar2 = *plVar2 + (((*(long *)(lVar8 + 0x98) + *(long *)(lVar8 + 0x58)) -
                                 *(long *)(lVar8 + 0x50)) - *(long *)(lVar8 + 0x90));
            UNLOCK();
            LOCK();
            plVar2 = (long *)(*(long *)(lVar8 + 8) + 0x128);
            *plVar2 = *plVar2 + *(long *)(lVar8 + 0xb0) + *(long *)(lVar8 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x58) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined8 *)(lVar8 + 0x68) = 0;
            *(undefined8 *)(lVar8 + 0x70) = 0;
            *(undefined8 *)(lVar8 + 0x60) = 0;
            *(undefined8 *)(lVar8 + 0x88) = 0;
            *(undefined8 *)(lVar8 + 0x98) = 0;
            *(undefined8 *)(lVar8 + 0x90) = 0;
            *(undefined8 *)(lVar8 + 0xa8) = 0;
            *(undefined8 *)(lVar8 + 0xb0) = 0;
            *(undefined8 *)(lVar8 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar8 + 8) = 0;
            UNLOCK();
          }
          embree::MutexSys::unlock();
          plVar12 = plVar12 + 1;
          if (plVar1 == plVar12) goto LAB_0010fb0c;
        }
        plVar12 = plVar12 + 1;
      } while (plVar1 != plVar12);
LAB_0010fb0c:
      if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
        *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
      }
    }
    LOCK();
    *(undefined8 *)(lVar10 + 400) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar10 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(lVar10 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(lVar10 + 0x170) != 0) {
      puVar16 = *(ulong **)(lVar10 + 0x170);
      cVar3 = *(char *)(lVar10 + 0x180);
      plVar12 = *(long **)(lVar10 + 0x78);
LAB_0010fb70:
      puVar17 = puVar16;
      if (puVar16 != (ulong *)0x0) {
        do {
          puVar16 = (ulong *)puVar17[3];
          uVar9 = puVar17[4];
          uVar11 = *puVar17;
          if (*puVar17 < puVar17[1]) {
            uVar11 = puVar17[1];
          }
          if (puVar17[2] < uVar11) {
            uVar11 = puVar17[2];
          }
          if ((int)puVar17[5] == 0) {
            if (cVar3 == '\0') {
              embree::alignedFree(puVar17);
            }
            else {
              (**(code **)(*plVar12 + 0x40))(plVar12,puVar17);
            }
          }
          else {
            if ((int)puVar17[5] != 1) goto LAB_0010fb70;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
          }
          if (plVar12 == (long *)0x0) goto LAB_0010fb70;
          (**(code **)(*plVar12 + 0x20))(plVar12,-(uVar9 + 0x40 + uVar11),1);
          puVar17 = puVar16;
          if (puVar16 == (ulong *)0x0) break;
        } while( true );
      }
    }
    LOCK();
    *plVar13 = 0;
    UNLOCK();
    if (*(long *)(lVar10 + 0x178) != 0) {
      puVar16 = *(ulong **)(lVar10 + 0x178);
      cVar3 = *(char *)(lVar10 + 0x180);
      plVar13 = *(long **)(lVar10 + 0x78);
LAB_0010fc18:
      puVar17 = puVar16;
      if (puVar16 != (ulong *)0x0) {
        do {
          puVar16 = (ulong *)puVar17[3];
          uVar9 = puVar17[4];
          uVar11 = *puVar17;
          if (*puVar17 < puVar17[1]) {
            uVar11 = puVar17[1];
          }
          if (puVar17[2] < uVar11) {
            uVar11 = puVar17[2];
          }
          if ((int)puVar17[5] == 0) {
            if (cVar3 == '\0') {
              embree::alignedFree(puVar17);
            }
            else {
              (**(code **)(*plVar13 + 0x40))(plVar13,puVar17);
            }
          }
          else {
            if ((int)puVar17[5] != 1) goto LAB_0010fc18;
            embree::os_free(puVar17,puVar17[2] + 0x40,*(bool *)((long)puVar17 + 0x2c));
          }
          if (plVar13 == (long *)0x0) goto LAB_0010fc18;
          (**(code **)(*plVar13 + 0x20))(plVar13,-(uVar9 + 0x40 + uVar11),1);
          puVar17 = puVar16;
          if (puVar16 == (ulong *)0x0) break;
        } while( true );
      }
    }
    LOCK();
    *(undefined8 *)(lVar10 + 0x178) = 0;
    UNLOCK();
    plVar13 = (long *)(lVar10 + 0xf0);
    do {
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      LOCK();
      plVar13[8] = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while ((long *)(lVar10 + 0x130) != plVar13);
    pvVar7 = *(void **)(lVar10 + 0x1e8);
    lVar8 = *(long *)(lVar10 + 0x1e0);
    if (pvVar7 != (void *)0x0) {
      if ((ulong)(lVar8 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar7);
      }
      else {
        embree::os_free(pvVar7,lVar8 << 5,*(bool *)(lVar10 + 0x1d0));
      }
    }
    if (lVar8 != 0) {
      (**(code **)**(undefined8 **)(lVar10 + 0x1c8))
                (*(undefined8 **)(lVar10 + 0x1c8),lVar8 * -0x20,1);
    }
    *(undefined8 *)(lVar10 + 0x1e8) = 0;
    *(undefined8 *)(lVar10 + 0x1e0) = 0;
    *(undefined8 *)(lVar10 + 0x1d8) = 0;
    pvVar7 = *(void **)(this + 0x40);
    lVar10 = *(long *)(this + 0x38);
    if (pvVar7 != (void *)0x0) {
      if ((ulong)(lVar10 * 8) < 0x1c00000) {
        embree::alignedFree(pvVar7);
      }
      else {
        embree::os_free(pvVar7,lVar10 * 8,(bool)this[0x28]);
      }
    }
    if (lVar10 != 0) {
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar10 * -8,1);
    }
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    uVar4 = *(uint *)(*(long *)(this + 0x18) + 0x20);
    *(uint *)(this + 0x74) = uVar4;
  }
  uVar9 = (ulong)uVar4;
  if (uVar9 == 0) {
    local_a8 = CONCAT44(_LC4,_LC4);
    uStack_a0 = CONCAT44(_LC4,_LC4);
    local_88 = CONCAT44(_LC4,_LC4);
    uStack_80 = (long *)CONCAT44(_LC4,_LC4);
    local_98 = CONCAT44(_LC2,_LC2);
    uStack_90 = CONCAT44(_LC2,_LC2);
    local_78 = (undefined1 *)CONCAT44(_LC2,_LC2);
    uStack_70 = (long *)CONCAT44(_LC2,_LC2);
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),8,&local_a8,0);
  }
  else {
    uVar11 = *(ulong *)(this + 0x38);
    if (uVar11 < uVar9) {
      if (uVar11 == 0) {
        uVar11 = uVar9;
        if (uVar9 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar9;
        }
      }
      else {
        do {
          uVar11 = uVar11 * 2;
        } while (uVar11 < uVar9);
        if (uVar9 < *(ulong *)(this + 0x30)) {
          *(ulong *)(this + 0x30) = uVar9;
        }
      }
      uVar15 = uVar11 * 8;
      puVar5 = *(undefined8 **)(this + 0x40);
      (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),uVar15,0);
      if (uVar15 < 0x1c00000) {
        lVar10 = embree::alignedMalloc(uVar15,8);
      }
      else {
        lVar10 = embree::os_malloc(uVar15,(bool *)(this + 0x28));
      }
      *(long *)(this + 0x40) = lVar10;
      if (*(long *)(this + 0x30) != 0) {
        uVar15 = 0;
        puVar14 = puVar5;
        while( true ) {
          uVar6 = *puVar14;
          puVar14 = puVar14 + 1;
          *(undefined8 *)(lVar10 + uVar15 * 8) = uVar6;
          uVar15 = uVar15 + 1;
          if (*(ulong *)(this + 0x30) <= uVar15) break;
          lVar10 = *(long *)(this + 0x40);
        }
      }
      lVar10 = *(long *)(this + 0x38);
      if (puVar5 != (undefined8 *)0x0) {
        if ((ulong)(lVar10 * 8) < 0x1c00000) {
          embree::alignedFree(puVar5);
        }
        else {
          embree::os_free(puVar5,lVar10 * 8,(bool)this[0x28]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar10 * -8,1);
      }
      *(ulong *)(this + 0x30) = uVar9;
      *(ulong *)(this + 0x38) = uVar11;
    }
    else {
      *(ulong *)(this + 0x30) = uVar9;
    }
    uVar11 = uVar9 * 8;
    fVar18 = (float)(uVar9 + 3 >> 2) * __LC21 * __LC22;
    if (__LC23 <= fVar18) {
      uVar15 = (long)(fVar18 - __LC23) ^ 0x8000000000000000;
    }
    else {
      uVar15 = (ulong)fVar18;
    }
    uVar15 = uVar15 + uVar9 * 8;
    if (uVar15 < uVar11) {
      uVar15 = uVar11;
    }
    FastAllocator::init((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar11,uVar11,uVar15);
    plVar13 = *(long **)(*(long *)(this + 0x10) + 0x178);
    lVar10 = *plVar13;
    uVar11 = embree::sse2::createMortonCodeArray<embree::TriangleMesh>
                       (*(TriangleMesh **)(this + 0x18),(vector_t *)(this + 0x20),
                        (BuildProgressMonitor *)(*(long *)(*(long *)(this + 0x10) + 0x68) + 600));
    local_108 = *(undefined4 *)(this + 0x70);
    local_138 = *(undefined8 *)(this + 0x18);
    local_140 = *(long *)(this + 0x10);
    local_a8 = *(undefined8 *)(this + 0x48);
    uStack_a0 = *(undefined8 *)(this + 0x50);
    local_128 = &PTR_operator___001119a0;
    local_98 = *(undefined8 *)(this + 0x58);
    uStack_90 = *(undefined8 *)(this + 0x60);
    local_110 = *(BuildPrim **)(this + 0x40);
    local_88 = *(ulong *)(this + 0x68);
    local_120 = *(undefined8 *)(*(long *)(local_140 + 0x68) + 0x260);
    local_148 = local_140 + 0x78;
    uStack_80 = &local_148;
    local_78 = &local_149;
    uStack_70 = &local_140;
    local_68 = &local_118;
    local_60 = &local_138;
    local_58 = &local_128;
    local_118 = local_138;
    local_50 = local_110;
    radix_sort<embree::sse2::BVHBuilderMorton::BuildPrim,unsigned_int>
              (local_110,(BuildPrim *)((long)plVar13 + lVar10 + 0x40),uVar11,local_88);
    local_12c = (undefined4)uVar11;
    local_130 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    BVHBuilderMorton::
    BuilderT<embree::BVHNodeRecord<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::BVHN<4>::CreateAlloc,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create,embree::sse2::SetBVHNBounds<4>,embree::sse2::CreateMortonLeaf<4,embree::TriangleMv<4>>,embree::sse2::CalculateMeshBounds<embree::TriangleMesh>,embree::Scene::BuildProgressMonitorInterface>
    ::recurse(local_d8,&local_a8,1,&local_130,1);
    local_a8 = CONCAT44(uStack_c4,local_c8);
    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_88 = CONCAT44(uStack_c4,local_c8);
    uStack_80 = (long *)CONCAT44(uStack_bc,uStack_c0);
    local_78 = (undefined1 *)local_b8;
    uStack_70 = (long *)uStack_b0;
    embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),local_d8[0],&local_a8,uVar9);
    embree::sse2::BVHNRotate<4>::rotate(*(undefined8 *)(*(long *)(this + 0x10) + 0x70),1);
    embree::BVHN<4>::clearBarrier(*(NodeRefPtr **)(this + 0x10));
    lVar10 = *(long *)(this + 0x10);
    if ((*(byte *)(*(long *)(lVar10 + 0x68) + 0x230) & 1) == 0) {
      pvVar7 = *(void **)(this + 0x40);
      lVar10 = *(long *)(this + 0x38);
      if (pvVar7 != (void *)0x0) {
        if ((ulong)(lVar10 * 8) < 0x1c00000) {
          embree::alignedFree(pvVar7);
        }
        else {
          embree::os_free(pvVar7,lVar10 * 8,(bool)this[0x28]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),lVar10 * -8,1);
      }
      *(undefined8 *)(this + 0x40) = 0;
      lVar10 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x30) = 0;
    }
    plVar13 = (long *)(lVar10 + 0x130);
    plVar12 = (long *)(lVar10 + 0x170);
    do {
      while (*plVar13 != 0) {
        lVar8 = *(long *)(*plVar13 + 0x18);
        *(long *)(*plVar13 + 0x18) = *plVar12;
        LOCK();
        *plVar12 = *plVar13;
        UNLOCK();
        LOCK();
        *plVar13 = lVar8;
        UNLOCK();
      }
      LOCK();
      *plVar13 = 0;
      UNLOCK();
      plVar13 = plVar13 + 1;
    } while (plVar12 != plVar13);
    plVar13 = *(long **)(lVar10 + 0x1a8);
    plVar12 = *(long **)(lVar10 + 0x1b0);
    if (plVar13 != plVar12) {
      do {
        while( true ) {
          lVar8 = *plVar13;
          if (lVar10 + 0x78 != *(long *)(lVar8 + 8)) break;
          embree::MutexSys::lock();
          if (lVar10 + 0x78 == *(long *)(lVar8 + 8)) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x118);
            *plVar1 = *plVar1 + *(long *)(lVar8 + 0xa8) + *(long *)(lVar8 + 0x68);
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x120);
            *plVar1 = *plVar1 + (((*(long *)(lVar8 + 0x98) + *(long *)(lVar8 + 0x58)) -
                                 *(long *)(lVar8 + 0x50)) - *(long *)(lVar8 + 0x90));
            UNLOCK();
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + 0x128);
            *plVar1 = *plVar1 + *(long *)(lVar8 + 0xb0) + *(long *)(lVar8 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x58) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined8 *)(lVar8 + 0x68) = 0;
            *(undefined8 *)(lVar8 + 0x70) = 0;
            *(undefined8 *)(lVar8 + 0x60) = 0;
            *(undefined8 *)(lVar8 + 0x88) = 0;
            *(undefined8 *)(lVar8 + 0x98) = 0;
            *(undefined8 *)(lVar8 + 0x90) = 0;
            *(undefined8 *)(lVar8 + 0xa8) = 0;
            *(undefined8 *)(lVar8 + 0xb0) = 0;
            *(undefined8 *)(lVar8 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar8 + 8) = 0;
            UNLOCK();
          }
          plVar13 = plVar13 + 1;
          embree::MutexSys::unlock();
          if (plVar12 == plVar13) goto LAB_0010f93f;
        }
        plVar13 = plVar13 + 1;
      } while (plVar12 != plVar13);
LAB_0010f93f:
      if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
        *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleM<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNMeshBuilderMorton<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::~BVHNMeshBuilderMorton() */

void __thiscall
embree::sse2::BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>>::
~BVHNMeshBuilderMorton(BVHNMeshBuilderMorton<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


