
/* embree::sse2::BVHNRefitter<4>::gather_subtree_refs(embree::NodeRefPtr<4>&, unsigned long&,
   unsigned long) [clone .part.0] [clone .isra.0] */

void __thiscall
embree::sse2::BVHNRefitter<4>::gather_subtree_refs
          (BVHNRefitter<4> *this,NodeRefPtr *param_1,ulong *param_2,ulong param_3)

{
  NodeRefPtr *pNVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  NodeRefPtr *pNVar7;
  
  if (((ulong)param_1 & 0xf) != 0) {
    return;
  }
  pNVar1 = param_1 + 0x20;
  while (plVar4 = *(long **)param_1, plVar4 == (long *)0x8) {
    param_1 = param_1 + 8;
    if (param_1 == pNVar1) {
      return;
    }
  }
  do {
    pNVar7 = param_1;
    if (param_3 == 3) {
      do {
        uVar3 = *param_2;
        param_1 = pNVar7 + 8;
        *param_2 = uVar3 + 1;
        *(long *)(this + uVar3 * 8 + 0x18) = *(long *)pNVar7;
        if (pNVar1 == param_1) {
          return;
        }
        pNVar7 = param_1;
      } while (*(long *)param_1 != 8);
    }
    else {
      do {
        if (((ulong)plVar4 & 0xf) == 0) {
          plVar2 = plVar4 + 4;
          do {
            puVar6 = (ulong *)*plVar4;
            if (puVar6 != (ulong *)0x8) {
              plVar5 = plVar4;
              if (param_3 == 2) {
                do {
                  uVar3 = *param_2;
                  plVar4 = plVar5 + 1;
                  *param_2 = uVar3 + 1;
                  *(long *)(this + uVar3 * 8 + 0x18) = *plVar5;
                  if (plVar2 == plVar4) goto LAB_00100288;
                  plVar5 = plVar4;
                } while (*plVar4 != 8);
              }
              else {
                do {
                  if (((ulong)puVar6 & 0xf) == 0) {
                    plVar5 = (long *)*puVar6;
                    if (plVar5 == (long *)0x8) {
                      plVar5 = (long *)puVar6[1];
                      if (plVar5 != (long *)0x8) {
                        if (param_3 == 0) goto LAB_00100094;
LAB_00100301:
                        uVar3 = *param_2;
                        *param_2 = uVar3 + 1;
                        *(ulong *)(this + uVar3 * 8 + 0x18) = puVar6[1];
                        goto LAB_00100314;
                      }
LAB_00100104:
                      plVar5 = (long *)puVar6[2];
                      if (plVar5 != (long *)0x8) {
                        if (param_3 == 0) goto LAB_0010011b;
LAB_0010031b:
                        uVar3 = *param_2;
                        *param_2 = uVar3 + 1;
                        *(ulong *)(this + uVar3 * 8 + 0x18) = puVar6[2];
                        goto LAB_0010032e;
                      }
LAB_001003da:
                      plVar5 = (long *)puVar6[3];
                      if (plVar5 == (long *)0x8) goto LAB_00100200;
                      if (param_3 != 0) goto LAB_00100339;
                    }
                    else {
                      if (param_3 != 0) {
                        uVar3 = *param_2;
                        *param_2 = uVar3 + 1;
                        *(ulong *)(this + uVar3 * 8 + 0x18) = *puVar6;
                        if (puVar6[1] != 8) goto LAB_00100301;
LAB_00100314:
                        if (puVar6[2] != 8) goto LAB_0010031b;
LAB_0010032e:
                        if (puVar6[3] != 8) {
LAB_00100339:
                          uVar3 = *param_2;
                          *param_2 = uVar3 + 1;
                          *(ulong *)(this + uVar3 * 8 + 0x18) = puVar6[3];
                        }
                        goto LAB_00100200;
                      }
                      if (((ulong)plVar5 & 0xf) == 0) {
                        if (*plVar5 != 8) {
                          uVar3 = *param_2;
                          *param_2 = uVar3 + 1;
                          *(long *)(this + uVar3 * 8 + 0x18) = *plVar5;
                        }
                        if (plVar5[1] != 8) {
                          uVar3 = *param_2;
                          *param_2 = uVar3 + 1;
                          *(long *)(this + uVar3 * 8 + 0x18) = plVar5[1];
                        }
                        if (plVar5[2] != 8) {
                          uVar3 = *param_2;
                          *param_2 = uVar3 + 1;
                          *(long *)(this + uVar3 * 8 + 0x18) = plVar5[2];
                        }
                        if (plVar5[3] != 8) {
                          uVar3 = *param_2;
                          *param_2 = uVar3 + 1;
                          *(long *)(this + uVar3 * 8 + 0x18) = plVar5[3];
                        }
                        plVar5 = (long *)puVar6[1];
                        if (plVar5 != (long *)0x8) goto LAB_00100094;
                        plVar5 = (long *)puVar6[2];
                        if (plVar5 == (long *)0x8) goto LAB_001003da;
LAB_0010011b:
                        if (((ulong)plVar5 & 0xf) == 0) {
                          if (*plVar5 != 8) {
                            uVar3 = *param_2;
                            *param_2 = uVar3 + 1;
                            *(long *)(this + uVar3 * 8 + 0x18) = *plVar5;
                          }
                          if (plVar5[1] != 8) {
                            uVar3 = *param_2;
                            *param_2 = uVar3 + 1;
                            *(long *)(this + uVar3 * 8 + 0x18) = plVar5[1];
                          }
                          if (plVar5[2] != 8) {
                            uVar3 = *param_2;
                            *param_2 = uVar3 + 1;
                            *(long *)(this + uVar3 * 8 + 0x18) = plVar5[2];
                          }
                          if (plVar5[3] != 8) {
                            uVar3 = *param_2;
                            *param_2 = uVar3 + 1;
                            *(long *)(this + uVar3 * 8 + 0x18) = plVar5[3];
                          }
                        }
                      }
                      else {
                        plVar5 = (long *)puVar6[1];
                        if (plVar5 != (long *)0x8) {
LAB_00100094:
                          if (((ulong)plVar5 & 0xf) == 0) {
                            if (*plVar5 != 8) {
                              uVar3 = *param_2;
                              *param_2 = uVar3 + 1;
                              *(long *)(this + uVar3 * 8 + 0x18) = *plVar5;
                            }
                            if (plVar5[1] != 8) {
                              uVar3 = *param_2;
                              *param_2 = uVar3 + 1;
                              *(long *)(this + uVar3 * 8 + 0x18) = plVar5[1];
                            }
                            if (plVar5[2] != 8) {
                              uVar3 = *param_2;
                              *param_2 = uVar3 + 1;
                              *(long *)(this + uVar3 * 8 + 0x18) = plVar5[2];
                            }
                            if (plVar5[3] != 8) {
                              uVar3 = *param_2;
                              *param_2 = uVar3 + 1;
                              *(long *)(this + uVar3 * 8 + 0x18) = plVar5[3];
                            }
                            goto LAB_00100104;
                          }
                        }
                        plVar5 = (long *)puVar6[2];
                        if (plVar5 != (long *)0x8) goto LAB_0010011b;
                      }
                      plVar5 = (long *)puVar6[3];
                      if (plVar5 == (long *)0x8) goto LAB_00100200;
                    }
                    if (((ulong)plVar5 & 0xf) == 0) {
                      if (*plVar5 != 8) {
                        uVar3 = *param_2;
                        *param_2 = uVar3 + 1;
                        *(long *)(this + uVar3 * 8 + 0x18) = *plVar5;
                      }
                      if (plVar5[1] != 8) {
                        uVar3 = *param_2;
                        *param_2 = uVar3 + 1;
                        *(long *)(this + uVar3 * 8 + 0x18) = plVar5[1];
                      }
                      if (plVar5[2] != 8) {
                        uVar3 = *param_2;
                        *param_2 = uVar3 + 1;
                        *(long *)(this + uVar3 * 8 + 0x18) = plVar5[2];
                      }
                      if (plVar5[3] != 8) {
                        uVar3 = *param_2;
                        *param_2 = uVar3 + 1;
                        *(long *)(this + uVar3 * 8 + 0x18) = plVar5[3];
                      }
                    }
                  }
LAB_00100200:
                  plVar4 = plVar4 + 1;
                  if (plVar2 == plVar4) goto LAB_00100288;
                  puVar6 = (ulong *)*plVar4;
                } while (puVar6 != (ulong *)0x8);
              }
            }
            plVar4 = plVar4 + 1;
          } while (plVar2 != plVar4);
        }
        if (param_1 + 8 == pNVar1) {
          return;
        }
        param_1 = param_1 + 8;
        plVar4 = *(long **)param_1;
      } while (plVar4 != (long *)0x8);
    }
LAB_00100288:
    do {
      param_1 = param_1 + 8;
      if (param_1 == pNVar1) {
        return;
      }
      plVar4 = *(long **)param_1;
    } while (plVar4 == (long *)0x8);
  } while( true );
}



/* embree::sse2::BVH4Triangle4MeshRefitSAH(void*, embree::TriangleMesh*, unsigned int, unsigned
   long) */

undefined8 *
embree::sse2::BVH4Triangle4MeshRefitSAH
          (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar2 = embree::sse2::BVH4Triangle4MeshBuilderSAH(param_1,param_2,param_3,param_4);
  puVar1[3] = param_1;
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNRefitT_00103d88;
  puVar1[2] = &DAT_00103dd8;
  puVar1[4] = uVar2;
  puVar3 = (undefined8 *)operator_new(0x818);
  puVar1[6] = param_2;
  *puVar3 = param_1;
  puVar3[1] = puVar1 + 2;
  puVar3[2] = 0;
  puVar1[5] = puVar3;
  *(undefined4 *)(puVar1 + 7) = 0;
  return puVar1;
}



/* embree::sse2::BVH4Triangle4vMeshRefitSAH(void*, embree::TriangleMesh*, unsigned int, unsigned
   long) */

undefined8 *
embree::sse2::BVH4Triangle4vMeshRefitSAH
          (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar2 = embree::sse2::BVH4Triangle4vMeshBuilderSAH(param_1,param_2,param_3,param_4);
  puVar1[3] = param_1;
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNRefitT_00103df0;
  puVar1[2] = &DAT_00103e40;
  puVar1[4] = uVar2;
  puVar3 = (undefined8 *)operator_new(0x818);
  puVar1[6] = param_2;
  *puVar3 = param_1;
  puVar3[1] = puVar1 + 2;
  puVar3[2] = 0;
  puVar1[5] = puVar3;
  *(undefined4 *)(puVar1 + 7) = 0;
  return puVar1;
}



/* embree::sse2::BVH4Triangle4iMeshRefitSAH(void*, embree::TriangleMesh*, unsigned int, unsigned
   long) */

undefined8 *
embree::sse2::BVH4Triangle4iMeshRefitSAH
          (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar2 = embree::sse2::BVH4Triangle4iMeshBuilderSAH(param_1,param_2,param_3,param_4);
  puVar1[3] = param_1;
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNRefitT_00103e58;
  puVar1[2] = &DAT_00103ea8;
  puVar1[4] = uVar2;
  puVar3 = (undefined8 *)operator_new(0x818);
  puVar1[6] = param_2;
  *puVar3 = param_1;
  puVar3[1] = puVar1 + 2;
  puVar3[2] = 0;
  puVar1[5] = puVar3;
  *(undefined4 *)(puVar1 + 7) = 0;
  return puVar1;
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1}>(unsigned
   long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void __thiscall
embree::TaskScheduler::
spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>
          (TaskScheduler *this,ulong param_1,ulong param_2,ulong param_3,
          _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this_00;
  long in_FS_OFFSET;
  ulong local_58;
  TaskScheduler *pTStack_50;
  ulong local_48;
  ulong uStack_40;
  _lambda_embree__range<unsigned_long>_const___1_ *local_38;
  TaskGroupContext *pTStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_1;
  pTStack_50 = this;
  local_48 = param_2;
  uStack_40 = param_3;
  local_38 = param_4;
  pTStack_30 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this_00,(_lambda___1_ *)&local_58,param_5,param_1 - (long)this,true);
LAB_00100702:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x38 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40088 + uVar2);
      *puVar3 = &PTR_execute_00103ec0;
      puVar3[1] = local_58;
      puVar3[2] = pTStack_50;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      puVar3[5] = local_38;
      puVar3[6] = pTStack_30;
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
      *(ulong *)(lVar7 + 0x70) = param_1 - (long)this;
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
      goto LAB_00100702;
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



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::clear() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::clear
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x30))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::clear() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::clear
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001007a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x30))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::clear() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::clear
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001007c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x30))();
    return;
  }
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



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

NodeRefPtr *
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::leafBounds
          (NodeRefPtr *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  uint *puVar9;
  ulong *in_RDX;
  ulong uVar10;
  long in_RSI;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar8 = _LC1;
  uVar2 = *in_RDX;
  uVar10 = (ulong)((uint)uVar2 & 0xf);
  uVar11 = uVar2 & 0xfffffffffffffff0;
  if (uVar2 == 8) {
    *(undefined4 *)param_1 = _LC1;
    *(undefined4 *)(param_1 + 4) = uVar8;
    *(undefined4 *)(param_1 + 8) = uVar8;
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    uVar8 = _LC3;
    *(undefined4 *)(param_1 + 0x10) = _LC3;
    *(undefined4 *)(param_1 + 0x14) = uVar8;
    *(undefined4 *)(param_1 + 0x18) = uVar8;
    *(undefined4 *)(param_1 + 0x1c) = uVar8;
  }
  else {
    if (uVar10 == 8) {
      auVar18._4_4_ = _LC1;
      auVar18._0_4_ = _LC1;
      auVar18._8_4_ = _LC1;
      auVar18._12_4_ = _LC1;
      auVar17._4_4_ = _LC3;
      auVar17._0_4_ = _LC3;
      auVar17._8_4_ = _LC3;
      auVar17._12_4_ = _LC3;
    }
    else {
      lVar3 = *(long *)(in_RSI + 0x30);
      auVar18._4_4_ = _LC1;
      auVar18._0_4_ = _LC1;
      auVar18._8_4_ = _LC1;
      auVar18._12_4_ = _LC1;
      auVar17._4_4_ = _LC3;
      auVar17._0_4_ = _LC3;
      auVar17._8_4_ = _LC3;
      auVar17._12_4_ = _LC3;
      uVar2 = (uVar11 - 0x280) + uVar10 * 0x50;
      do {
        uVar1 = *(uint *)(uVar11 + 0x40);
        if (uVar1 != 0xffffffff) {
          do {
            lVar4 = *(long *)(lVar3 + 0x60);
            lVar5 = *(long *)(lVar3 + 0x58);
            lVar6 = *(long *)(lVar3 + 0x90);
            lVar7 = *(long *)(lVar3 + 0x88);
            puVar9 = (uint *)((ulong)uVar1 * lVar4 + lVar5);
            auVar15 = *(undefined1 (*) [16])(lVar7 + (ulong)*puVar9 * lVar6);
            auVar12 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[1] * lVar6);
            auVar16 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[2] * lVar6);
            auVar13 = minps(auVar12,auVar16);
            auVar16 = maxps(auVar12,auVar16);
            auVar12 = minps(auVar15,auVar13);
            auVar14 = maxps(auVar15,auVar16);
            auVar16._4_4_ = _LC1;
            auVar16._0_4_ = _LC1;
            auVar16._8_4_ = _LC1;
            auVar16._12_4_ = _LC1;
            auVar13 = minps(auVar16,auVar12);
            auVar15._4_4_ = _LC3;
            auVar15._0_4_ = _LC3;
            auVar15._8_4_ = _LC3;
            auVar15._12_4_ = _LC3;
            auVar12 = maxps(auVar15,auVar14);
            uVar10 = uVar11;
            if (*(uint *)(uVar11 + 0x44) != 0xffffffff) {
              puVar9 = (uint *)((ulong)*(uint *)(uVar11 + 0x44) * lVar4 + lVar5);
              auVar15 = *(undefined1 (*) [16])(lVar7 + (ulong)*puVar9 * lVar6);
              auVar16 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[1] * lVar6);
              auVar14 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[2] * lVar6);
              auVar19 = maxps(auVar16,auVar14);
              auVar16 = minps(auVar16,auVar14);
              auVar14 = maxps(auVar15,auVar19);
              auVar15 = minps(auVar15,auVar16);
              auVar12 = maxps(auVar12,auVar14);
              auVar13 = minps(auVar13,auVar15);
              if (*(uint *)(uVar11 + 0x48) != 0xffffffff) {
                puVar9 = (uint *)((ulong)*(uint *)(uVar11 + 0x48) * lVar4 + lVar5);
                auVar15 = *(undefined1 (*) [16])(lVar7 + (ulong)*puVar9 * lVar6);
                auVar16 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[1] * lVar6);
                auVar14 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[2] * lVar6);
                auVar19 = maxps(auVar16,auVar14);
                auVar16 = minps(auVar16,auVar14);
                auVar14 = maxps(auVar15,auVar19);
                auVar15 = minps(auVar15,auVar16);
                auVar12 = maxps(auVar12,auVar14);
                auVar13 = minps(auVar13,auVar15);
                if (*(uint *)(uVar11 + 0x4c) != 0xffffffff) {
                  puVar9 = (uint *)(lVar5 + (ulong)*(uint *)(uVar11 + 0x4c) * lVar4);
                  auVar15 = *(undefined1 (*) [16])(lVar7 + (ulong)*puVar9 * lVar6);
                  auVar16 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[1] * lVar6);
                  auVar14 = *(undefined1 (*) [16])(lVar7 + lVar6 * (ulong)puVar9[2]);
                  auVar19 = maxps(auVar16,auVar14);
                  auVar16 = minps(auVar16,auVar14);
                  auVar14 = maxps(auVar15,auVar19);
                  auVar15 = minps(auVar15,auVar16);
                  auVar12 = maxps(auVar12,auVar14);
                  auVar13 = minps(auVar13,auVar15);
                }
              }
            }
            while( true ) {
              uVar11 = uVar10 + 0x50;
              auVar18 = minps(auVar18,auVar13);
              auVar17 = maxps(auVar17,auVar12);
              if (uVar2 == uVar11) {
                *(undefined1 (*) [16])param_1 = auVar18;
                *(undefined1 (*) [16])(param_1 + 0x10) = auVar17;
                return param_1;
              }
              uVar1 = *(uint *)(uVar10 + 0x90);
              if (uVar1 != 0xffffffff) break;
              auVar13._4_4_ = _LC1;
              auVar13._0_4_ = _LC1;
              auVar13._8_4_ = _LC1;
              auVar13._12_4_ = _LC1;
              auVar12._4_4_ = _LC3;
              auVar12._0_4_ = _LC3;
              auVar12._8_4_ = _LC3;
              auVar12._12_4_ = _LC3;
              uVar10 = uVar11;
            }
          } while( true );
        }
        uVar11 = uVar11 + 0x50;
        auVar19._4_4_ = _LC1;
        auVar19._0_4_ = _LC1;
        auVar19._8_4_ = _LC1;
        auVar19._12_4_ = _LC1;
        auVar18 = minps(auVar18,auVar19);
        auVar14._4_4_ = _LC3;
        auVar14._0_4_ = _LC3;
        auVar14._8_4_ = _LC3;
        auVar14._12_4_ = _LC3;
        auVar17 = maxps(auVar17,auVar14);
      } while (uVar2 != uVar11);
    }
    *(undefined1 (*) [16])param_1 = auVar18;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar17;
  }
  return param_1;
}



/* non-virtual thunk to embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> * __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::leafBounds
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this,NodeRefPtr *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  uint *puVar9;
  ulong *in_RDX;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar8 = _LC1;
  uVar2 = *in_RDX;
  uVar10 = (ulong)((uint)uVar2 & 0xf);
  uVar11 = uVar2 & 0xfffffffffffffff0;
  if (uVar2 == 8) {
    *(undefined4 *)this = _LC1;
    *(undefined4 *)(this + 4) = uVar8;
    *(undefined4 *)(this + 8) = uVar8;
    *(undefined4 *)(this + 0xc) = uVar8;
    uVar8 = _LC3;
    *(undefined4 *)(this + 0x10) = _LC3;
    *(undefined4 *)(this + 0x14) = uVar8;
    *(undefined4 *)(this + 0x18) = uVar8;
    *(undefined4 *)(this + 0x1c) = uVar8;
  }
  else {
    if (uVar10 == 8) {
      auVar17._4_4_ = _LC3;
      auVar17._0_4_ = _LC3;
      auVar17._8_4_ = _LC3;
      auVar17._12_4_ = _LC3;
      auVar18._4_4_ = _LC1;
      auVar18._0_4_ = _LC1;
      auVar18._8_4_ = _LC1;
      auVar18._12_4_ = _LC1;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x20);
      auVar17._4_4_ = _LC3;
      auVar17._0_4_ = _LC3;
      auVar17._8_4_ = _LC3;
      auVar17._12_4_ = _LC3;
      auVar18._4_4_ = _LC1;
      auVar18._0_4_ = _LC1;
      auVar18._8_4_ = _LC1;
      auVar18._12_4_ = _LC1;
      uVar2 = (uVar11 - 0x280) + uVar10 * 0x50;
      do {
        uVar1 = *(uint *)(uVar11 + 0x40);
        if (uVar1 != 0xffffffff) {
          do {
            lVar4 = *(long *)(lVar3 + 0x60);
            lVar5 = *(long *)(lVar3 + 0x58);
            lVar6 = *(long *)(lVar3 + 0x90);
            lVar7 = *(long *)(lVar3 + 0x88);
            puVar9 = (uint *)((ulong)uVar1 * lVar4 + lVar5);
            auVar15 = *(undefined1 (*) [16])(lVar7 + (ulong)*puVar9 * lVar6);
            auVar12 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[1] * lVar6);
            auVar16 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[2] * lVar6);
            auVar13 = minps(auVar12,auVar16);
            auVar16 = maxps(auVar12,auVar16);
            auVar12 = minps(auVar15,auVar13);
            auVar14 = maxps(auVar15,auVar16);
            auVar16._4_4_ = _LC1;
            auVar16._0_4_ = _LC1;
            auVar16._8_4_ = _LC1;
            auVar16._12_4_ = _LC1;
            auVar13 = minps(auVar16,auVar12);
            auVar15._4_4_ = _LC3;
            auVar15._0_4_ = _LC3;
            auVar15._8_4_ = _LC3;
            auVar15._12_4_ = _LC3;
            auVar12 = maxps(auVar15,auVar14);
            uVar10 = uVar11;
            if (*(uint *)(uVar11 + 0x44) != 0xffffffff) {
              puVar9 = (uint *)((ulong)*(uint *)(uVar11 + 0x44) * lVar4 + lVar5);
              auVar15 = *(undefined1 (*) [16])(lVar7 + (ulong)*puVar9 * lVar6);
              auVar16 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[1] * lVar6);
              auVar14 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[2] * lVar6);
              auVar19 = maxps(auVar16,auVar14);
              auVar16 = minps(auVar16,auVar14);
              auVar14 = maxps(auVar15,auVar19);
              auVar15 = minps(auVar15,auVar16);
              auVar12 = maxps(auVar12,auVar14);
              auVar13 = minps(auVar13,auVar15);
              if (*(uint *)(uVar11 + 0x48) != 0xffffffff) {
                puVar9 = (uint *)((ulong)*(uint *)(uVar11 + 0x48) * lVar4 + lVar5);
                auVar15 = *(undefined1 (*) [16])(lVar7 + (ulong)*puVar9 * lVar6);
                auVar16 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[1] * lVar6);
                auVar14 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[2] * lVar6);
                auVar19 = maxps(auVar16,auVar14);
                auVar16 = minps(auVar16,auVar14);
                auVar14 = maxps(auVar15,auVar19);
                auVar15 = minps(auVar15,auVar16);
                auVar12 = maxps(auVar12,auVar14);
                auVar13 = minps(auVar13,auVar15);
                if (*(uint *)(uVar11 + 0x4c) != 0xffffffff) {
                  puVar9 = (uint *)(lVar5 + (ulong)*(uint *)(uVar11 + 0x4c) * lVar4);
                  auVar15 = *(undefined1 (*) [16])(lVar7 + (ulong)*puVar9 * lVar6);
                  auVar16 = *(undefined1 (*) [16])(lVar7 + (ulong)puVar9[1] * lVar6);
                  auVar14 = *(undefined1 (*) [16])(lVar7 + lVar6 * (ulong)puVar9[2]);
                  auVar19 = maxps(auVar16,auVar14);
                  auVar16 = minps(auVar16,auVar14);
                  auVar14 = maxps(auVar15,auVar19);
                  auVar15 = minps(auVar15,auVar16);
                  auVar12 = maxps(auVar12,auVar14);
                  auVar13 = minps(auVar13,auVar15);
                }
              }
            }
            while( true ) {
              uVar11 = uVar10 + 0x50;
              auVar18 = minps(auVar18,auVar13);
              auVar17 = maxps(auVar17,auVar12);
              if (uVar2 == uVar11) {
                *(undefined1 (*) [16])this = auVar18;
                *(undefined1 (*) [16])(this + 0x10) = auVar17;
                return this;
              }
              uVar1 = *(uint *)(uVar10 + 0x90);
              if (uVar1 != 0xffffffff) break;
              auVar12._4_4_ = _LC3;
              auVar12._0_4_ = _LC3;
              auVar12._8_4_ = _LC3;
              auVar12._12_4_ = _LC3;
              auVar13._4_4_ = _LC1;
              auVar13._0_4_ = _LC1;
              auVar13._8_4_ = _LC1;
              auVar13._12_4_ = _LC1;
              uVar10 = uVar11;
            }
          } while( true );
        }
        uVar11 = uVar11 + 0x50;
        auVar14._4_4_ = _LC1;
        auVar14._0_4_ = _LC1;
        auVar14._8_4_ = _LC1;
        auVar14._12_4_ = _LC1;
        auVar18 = minps(auVar18,auVar14);
        auVar19._4_4_ = _LC3;
        auVar19._0_4_ = _LC3;
        auVar19._8_4_ = _LC3;
        auVar19._12_4_ = _LC3;
        auVar17 = maxps(auVar17,auVar19);
      } while (uVar2 != uVar11);
    }
    *(undefined1 (*) [16])this = auVar18;
    *(undefined1 (*) [16])(this + 0x10) = auVar17;
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

NodeRefPtr *
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::leafBounds
          (NodeRefPtr *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong *in_RDX;
  ulong uVar15;
  long in_RSI;
  uint *puVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_e8 [16];
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 local_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar12 = _LC1;
  uVar6 = *in_RDX;
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = (ulong)((uint)uVar6 & 0xf);
  if (uVar6 == 8) {
    *(undefined4 *)param_1 = _LC1;
    *(undefined4 *)(param_1 + 4) = uVar12;
    *(undefined4 *)(param_1 + 8) = uVar12;
    *(undefined4 *)(param_1 + 0xc) = uVar12;
    uVar12 = _LC3;
    *(undefined4 *)(param_1 + 0x10) = _LC3;
    *(undefined4 *)(param_1 + 0x14) = uVar12;
    *(undefined4 *)(param_1 + 0x18) = uVar12;
    *(undefined4 *)(param_1 + 0x1c) = uVar12;
  }
  else {
    if (uVar15 == 8) {
      auVar20._4_4_ = _LC1;
      auVar20._0_4_ = _LC1;
      auVar20._8_4_ = _LC1;
      auVar20._12_4_ = _LC1;
      auVar19._4_4_ = _LC3;
      auVar19._0_4_ = _LC3;
      auVar19._8_4_ = _LC3;
      auVar19._12_4_ = _LC3;
    }
    else {
      auVar20._4_12_ = _UNK_00103ed4;
      auVar20._0_4_ = _LC1;
      auVar19._4_12_ = _UNK_00103ee4;
      auVar19._0_4_ = _LC3;
      puVar13 = (undefined4 *)(uVar6 & 0xfffffffffffffff0);
      do {
        uVar21 = puVar13[0x28];
        lVar8 = *(long *)(in_RSI + 0x30);
        uStack_d4 = 0xffffffff;
        uStack_d0 = 0xffffffff;
        uStack_cc = 0xffffffff;
        uStack_c4 = 0xffffffff;
        uStack_c0 = 0xffffffff;
        uStack_bc = 0xffffffff;
        if (uVar21 == 0xffffffff) {
          uStack_d0 = 0xffffffff;
          uVar22 = 0xffffffff;
          uStack_d4 = 0xffffffff;
          uStack_cc = 0xffffffff;
          auVar18._4_12_ = _UNK_00103ee4;
          auVar18._0_4_ = _LC3;
          local_e8 = (undefined1  [16])0x0;
          local_48._0_4_ = 0;
          local_48._4_4_ = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          _local_58 = ZEXT812(0);
          uStack_4c = 0;
          local_88._0_4_ = 0;
          _local_68 = ZEXT812(0);
          uStack_5c = 0;
          _local_78 = ZEXT812(0);
          uStack_6c = 0;
          local_88._4_4_ = 0;
          auVar17._4_12_ = _UNK_00103ed4;
          auVar17._0_4_ = _LC1;
          uStack_80 = uStack_40;
          uStack_7c = uStack_3c;
          local_98._0_4_ = local_88._0_4_;
          local_98._4_4_ = local_88._4_4_;
          uStack_90 = uStack_40;
          uStack_8c = uStack_3c;
          local_a8._0_4_ = local_88._0_4_;
          local_a8._4_4_ = local_88._4_4_;
          uStack_a0 = uStack_40;
          uStack_9c = uStack_3c;
          local_b8._0_4_ = local_88._0_4_;
          local_b8._4_4_ = local_88._4_4_;
          uStack_b0 = uStack_40;
          uStack_ac = uStack_3c;
          uVar21 = uVar22;
          uStack_c4 = uStack_d4;
          uStack_c0 = uStack_d0;
          uStack_bc = uStack_cc;
        }
        else {
          lVar9 = *(long *)(lVar8 + 0x60);
          lVar10 = *(long *)(lVar8 + 0x58);
          lVar11 = *(long *)(lVar8 + 0x90);
          puVar16 = (uint *)(lVar10 + (ulong)uVar21 * lVar9);
          lVar8 = *(long *)(lVar8 + 0x88);
          auVar1 = *(undefined1 (*) [16])(lVar8 + (ulong)*puVar16 * lVar11);
          stack0xffffffffffffff4c = SUB1612((undefined1  [16])0x0,4);
          local_b8._0_4_ = auVar1._0_4_;
          auVar2 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[1] * lVar11);
          stack0xffffffffffffff7c = SUB1612((undefined1  [16])0x0,4);
          local_88._0_4_ = auVar2._0_4_;
          auVar3 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[2] * lVar11);
          uVar22 = puVar13[0x24];
          auVar17 = maxps(auVar2,auVar3);
          auVar18 = minps(auVar2,auVar3);
          uVar4 = puVar13[0x29];
          stack0xffffffffffffffac = SUB1612((undefined1  [16])0x0,4);
          local_58._0_4_ = auVar3._0_4_;
          auVar23 = maxps(auVar1,auVar17);
          auVar17 = minps(auVar1,auVar18);
          auVar27._4_4_ = _LC1;
          auVar27._0_4_ = _LC1;
          auVar27._8_4_ = _LC1;
          auVar27._12_4_ = _LC1;
          auVar17 = minps(auVar27,auVar17);
          auVar25._4_4_ = _LC3;
          auVar25._0_4_ = _LC3;
          auVar25._8_4_ = _LC3;
          auVar25._12_4_ = _LC3;
          auVar18 = maxps(auVar25,auVar23);
          stack0xffffffffffffff5c = SUB1612((undefined1  [16])0x0,4);
          local_a8._0_4_ = auVar1._4_4_;
          stack0xffffffffffffff6c = SUB1612((undefined1  [16])0x0,4);
          local_98._0_4_ = auVar1._8_4_;
          stack0xffffffffffffff8c = SUB1612((undefined1  [16])0x0,4);
          local_78._0_4_ = auVar2._4_4_;
          stack0xffffffffffffff9c = SUB1612((undefined1  [16])0x0,4);
          local_68._0_4_ = auVar2._8_4_;
          stack0xffffffffffffffbc = SUB1612((undefined1  [16])0x0,4);
          local_48._0_4_ = auVar3._4_4_;
          stack0xffffffffffffffcc = SUB1612((undefined1  [16])0x0,4);
          local_38._0_4_ = auVar3._8_4_;
          if (uVar4 != 0xffffffff) {
            uVar5 = puVar13[0x2a];
            puVar16 = (uint *)(lVar10 + (ulong)uVar4 * lVar9);
            auVar25 = *(undefined1 (*) [16])(lVar8 + (ulong)*puVar16 * lVar11);
            local_b8._4_4_ = auVar25._0_4_;
            _uStack_b0 = 0;
            auVar27 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[1] * lVar11);
            local_88._4_4_ = auVar27._0_4_;
            _uStack_80 = 0;
            auVar23 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[2] * lVar11);
            uStack_d4 = puVar13[0x25];
            auVar24 = maxps(auVar27,auVar23);
            auVar26 = minps(auVar27,auVar23);
            local_58._4_4_ = auVar23._0_4_;
            _uStack_50 = 0;
            auVar24 = maxps(auVar25,auVar24);
            auVar26 = minps(auVar25,auVar26);
            auVar18 = maxps(auVar18,auVar24);
            auVar17 = minps(auVar17,auVar26);
            local_a8._4_4_ = auVar25._4_4_;
            _uStack_a0 = 0;
            local_98._4_4_ = auVar25._8_4_;
            _uStack_90 = 0;
            local_78._4_4_ = auVar27._4_4_;
            _uStack_70 = 0;
            local_68._4_4_ = auVar27._8_4_;
            _uStack_60 = 0;
            local_48._4_4_ = auVar23._4_4_;
            _uStack_40 = 0;
            local_38._4_4_ = auVar23._8_4_;
            _uStack_30 = 0;
            uStack_c4 = uVar4;
            if (uVar5 != 0xffffffff) {
              puVar16 = (uint *)(lVar10 + (ulong)uVar5 * lVar9);
              auVar1 = *(undefined1 (*) [16])(lVar8 + (ulong)*puVar16 * lVar11);
              uStack_b0 = auVar1._0_4_;
              uStack_ac = 0;
              auVar2 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[1] * lVar11);
              uStack_80 = auVar2._0_4_;
              uStack_7c = 0;
              auVar3 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[2] * lVar11);
              uStack_d0 = puVar13[0x26];
              auVar25 = maxps(auVar2,auVar3);
              auVar27 = minps(auVar2,auVar3);
              uVar4 = puVar13[0x2b];
              uStack_50 = auVar3._0_4_;
              uStack_4c = 0;
              auVar25 = maxps(auVar1,auVar25);
              auVar27 = minps(auVar1,auVar27);
              auVar18 = maxps(auVar18,auVar25);
              auVar17 = minps(auVar17,auVar27);
              uStack_a0 = auVar1._4_4_;
              uStack_9c = 0;
              uStack_90 = auVar1._8_4_;
              uStack_8c = 0;
              uStack_70 = auVar2._4_4_;
              uStack_6c = 0;
              uStack_60 = auVar2._8_4_;
              uStack_5c = 0;
              uStack_40 = auVar3._4_4_;
              uStack_3c = 0;
              uStack_30 = auVar3._8_4_;
              uStack_2c = 0;
              uStack_c0 = uVar5;
              if (uVar4 != 0xffffffff) {
                puVar16 = (uint *)(lVar10 + lVar9 * (ulong)uVar4);
                auVar1 = *(undefined1 (*) [16])(lVar8 + (ulong)*puVar16 * lVar11);
                uStack_ac = auVar1._0_4_;
                auVar2 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[1] * lVar11);
                auVar3 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[2] * lVar11);
                uStack_cc = puVar13[0x27];
                uStack_7c = auVar2._0_4_;
                auVar25 = maxps(auVar2,auVar3);
                auVar27 = minps(auVar2,auVar3);
                uStack_4c = auVar3._0_4_;
                auVar25 = maxps(auVar1,auVar25);
                auVar27 = minps(auVar1,auVar27);
                auVar18 = maxps(auVar18,auVar25);
                auVar17 = minps(auVar17,auVar27);
                uStack_9c = auVar1._4_4_;
                uStack_8c = auVar1._8_4_;
                uStack_6c = auVar2._4_4_;
                uStack_5c = auVar2._8_4_;
                uStack_3c = auVar3._4_4_;
                uStack_2c = auVar3._8_4_;
                uStack_bc = uVar4;
              }
            }
          }
          local_e8 = _local_38;
        }
        puVar13[0x1c] = local_48._0_4_;
        puVar13[0x1d] = local_48._4_4_;
        puVar13[0x1e] = uStack_40;
        puVar13[0x1f] = uStack_3c;
        auVar20 = minps(auVar20,auVar17);
        auVar19 = maxps(auVar19,auVar18);
        *puVar13 = local_b8._0_4_;
        puVar13[1] = local_b8._4_4_;
        puVar13[2] = uStack_b0;
        puVar13[3] = uStack_ac;
        puVar14 = puVar13 + 0x2c;
        puVar13[4] = local_a8._0_4_;
        puVar13[5] = local_a8._4_4_;
        puVar13[6] = uStack_a0;
        puVar13[7] = uStack_9c;
        puVar13[8] = local_98._0_4_;
        puVar13[9] = local_98._4_4_;
        puVar13[10] = uStack_90;
        puVar13[0xb] = uStack_8c;
        puVar13[0xc] = local_88._0_4_;
        puVar13[0xd] = local_88._4_4_;
        puVar13[0xe] = uStack_80;
        puVar13[0xf] = uStack_7c;
        *(undefined1 (*) [16])(puVar13 + 0x10) = _local_78;
        *(undefined1 (*) [16])(puVar13 + 0x14) = _local_68;
        *(undefined1 (*) [16])(puVar13 + 0x18) = _local_58;
        *(undefined8 *)(puVar13 + 0x20) = local_e8._0_8_;
        *(undefined8 *)(puVar13 + 0x22) = local_e8._8_8_;
        puVar13[0x24] = uVar22;
        puVar13[0x25] = uStack_d4;
        puVar13[0x26] = uStack_d0;
        puVar13[0x27] = uStack_cc;
        puVar13[0x28] = uVar21;
        puVar13[0x29] = uStack_c4;
        puVar13[0x2a] = uStack_c0;
        puVar13[0x2b] = uStack_bc;
        puVar13 = puVar14;
      } while ((undefined4 *)(uVar6 & 0xfffffffffffffff0) + uVar15 * 0x2c + -0x160 != puVar14);
    }
    *(undefined1 (*) [16])param_1 = auVar20;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar19;
  }
  if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> * __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::leafBounds
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this,NodeRefPtr *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong *in_RDX;
  ulong uVar15;
  uint *puVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_e8 [16];
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 local_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar12 = _LC1;
  uVar6 = *in_RDX;
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = (ulong)((uint)uVar6 & 0xf);
  if (uVar6 == 8) {
    *(undefined4 *)this = _LC1;
    *(undefined4 *)(this + 4) = uVar12;
    *(undefined4 *)(this + 8) = uVar12;
    *(undefined4 *)(this + 0xc) = uVar12;
    uVar12 = _LC3;
    *(undefined4 *)(this + 0x10) = _LC3;
    *(undefined4 *)(this + 0x14) = uVar12;
    *(undefined4 *)(this + 0x18) = uVar12;
    *(undefined4 *)(this + 0x1c) = uVar12;
  }
  else {
    if (uVar15 == 8) {
      auVar19._4_4_ = _LC3;
      auVar19._0_4_ = _LC3;
      auVar19._8_4_ = _LC3;
      auVar19._12_4_ = _LC3;
      auVar20._4_4_ = _LC1;
      auVar20._0_4_ = _LC1;
      auVar20._8_4_ = _LC1;
      auVar20._12_4_ = _LC1;
    }
    else {
      auVar19._4_12_ = _UNK_00103ee4;
      auVar19._0_4_ = _LC3;
      auVar20._4_12_ = _UNK_00103ed4;
      auVar20._0_4_ = _LC1;
      puVar13 = (undefined4 *)(uVar6 & 0xfffffffffffffff0);
      do {
        uVar21 = puVar13[0x28];
        lVar8 = *(long *)(param_1 + 0x20);
        uStack_c4 = 0xffffffff;
        uStack_c0 = 0xffffffff;
        uStack_bc = 0xffffffff;
        uStack_d4 = 0xffffffff;
        uStack_d0 = 0xffffffff;
        uStack_cc = 0xffffffff;
        if (uVar21 == 0xffffffff) {
          uStack_c0 = 0xffffffff;
          uVar22 = 0xffffffff;
          uStack_c4 = 0xffffffff;
          uStack_bc = 0xffffffff;
          auVar18._4_12_ = _UNK_00103ee4;
          auVar18._0_4_ = _LC3;
          local_e8 = (undefined1  [16])0x0;
          local_a8._0_4_ = 0;
          local_a8._4_4_ = 0;
          uStack_a0 = 0;
          uStack_9c = 0;
          _local_b8 = ZEXT812(0);
          uStack_ac = 0;
          local_88._0_4_ = 0;
          _local_68 = ZEXT812(0);
          uStack_5c = 0;
          _local_78 = ZEXT812(0);
          uStack_6c = 0;
          local_88._4_4_ = 0;
          auVar17._4_12_ = _UNK_00103ed4;
          auVar17._0_4_ = _LC1;
          uStack_80 = uStack_a0;
          uStack_7c = uStack_9c;
          local_38._0_4_ = local_88._0_4_;
          local_38._4_4_ = local_88._4_4_;
          uStack_30 = uStack_a0;
          uStack_2c = uStack_9c;
          local_48._0_4_ = local_88._0_4_;
          local_48._4_4_ = local_88._4_4_;
          uStack_40 = uStack_a0;
          uStack_3c = uStack_9c;
          local_58._0_4_ = local_88._0_4_;
          local_58._4_4_ = local_88._4_4_;
          uStack_50 = uStack_a0;
          uStack_4c = uStack_9c;
          uVar21 = uVar22;
          uStack_d4 = uStack_c4;
          uStack_d0 = uStack_c0;
          uStack_cc = uStack_bc;
        }
        else {
          lVar9 = *(long *)(lVar8 + 0x60);
          lVar10 = *(long *)(lVar8 + 0x58);
          lVar11 = *(long *)(lVar8 + 0x90);
          puVar16 = (uint *)(lVar10 + (ulong)uVar21 * lVar9);
          lVar8 = *(long *)(lVar8 + 0x88);
          auVar1 = *(undefined1 (*) [16])(lVar8 + (ulong)*puVar16 * lVar11);
          stack0xffffffffffffffac = SUB1612((undefined1  [16])0x0,4);
          local_58._0_4_ = auVar1._0_4_;
          auVar2 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[1] * lVar11);
          stack0xffffffffffffff7c = SUB1612((undefined1  [16])0x0,4);
          local_88._0_4_ = auVar2._0_4_;
          auVar3 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[2] * lVar11);
          uVar22 = puVar13[0x24];
          auVar17 = maxps(auVar2,auVar3);
          auVar18 = minps(auVar2,auVar3);
          uVar4 = puVar13[0x29];
          stack0xffffffffffffff4c = SUB1612((undefined1  [16])0x0,4);
          local_b8._0_4_ = auVar3._0_4_;
          auVar23 = maxps(auVar1,auVar17);
          auVar17 = minps(auVar1,auVar18);
          auVar27._4_4_ = _LC1;
          auVar27._0_4_ = _LC1;
          auVar27._8_4_ = _LC1;
          auVar27._12_4_ = _LC1;
          auVar17 = minps(auVar27,auVar17);
          auVar25._4_4_ = _LC3;
          auVar25._0_4_ = _LC3;
          auVar25._8_4_ = _LC3;
          auVar25._12_4_ = _LC3;
          auVar18 = maxps(auVar25,auVar23);
          stack0xffffffffffffffbc = SUB1612((undefined1  [16])0x0,4);
          local_48._0_4_ = auVar1._4_4_;
          stack0xffffffffffffffcc = SUB1612((undefined1  [16])0x0,4);
          local_38._0_4_ = auVar1._8_4_;
          stack0xffffffffffffff8c = SUB1612((undefined1  [16])0x0,4);
          local_78._0_4_ = auVar2._4_4_;
          stack0xffffffffffffff9c = SUB1612((undefined1  [16])0x0,4);
          local_68._0_4_ = auVar2._8_4_;
          stack0xffffffffffffff5c = SUB1612((undefined1  [16])0x0,4);
          local_a8._0_4_ = auVar3._4_4_;
          stack0xffffffffffffff6c = SUB1612((undefined1  [16])0x0,4);
          local_98._0_4_ = auVar3._8_4_;
          if (uVar4 != 0xffffffff) {
            uVar5 = puVar13[0x2a];
            puVar16 = (uint *)(lVar10 + (ulong)uVar4 * lVar9);
            auVar25 = *(undefined1 (*) [16])(lVar8 + (ulong)*puVar16 * lVar11);
            local_58._4_4_ = auVar25._0_4_;
            _uStack_50 = 0;
            auVar27 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[1] * lVar11);
            local_88._4_4_ = auVar27._0_4_;
            _uStack_80 = 0;
            auVar23 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[2] * lVar11);
            uStack_c4 = puVar13[0x25];
            auVar24 = maxps(auVar27,auVar23);
            auVar26 = minps(auVar27,auVar23);
            local_b8._4_4_ = auVar23._0_4_;
            _uStack_b0 = 0;
            auVar24 = maxps(auVar25,auVar24);
            auVar26 = minps(auVar25,auVar26);
            auVar18 = maxps(auVar18,auVar24);
            auVar17 = minps(auVar17,auVar26);
            local_48._4_4_ = auVar25._4_4_;
            _uStack_40 = 0;
            local_38._4_4_ = auVar25._8_4_;
            _uStack_30 = 0;
            local_78._4_4_ = auVar27._4_4_;
            _uStack_70 = 0;
            local_68._4_4_ = auVar27._8_4_;
            _uStack_60 = 0;
            local_a8._4_4_ = auVar23._4_4_;
            _uStack_a0 = 0;
            local_98._4_4_ = auVar23._8_4_;
            _uStack_90 = 0;
            uStack_d4 = uVar4;
            if (uVar5 != 0xffffffff) {
              puVar16 = (uint *)(lVar10 + (ulong)uVar5 * lVar9);
              auVar1 = *(undefined1 (*) [16])(lVar8 + (ulong)*puVar16 * lVar11);
              uStack_50 = auVar1._0_4_;
              uStack_4c = 0;
              auVar2 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[1] * lVar11);
              uStack_80 = auVar2._0_4_;
              uStack_7c = 0;
              auVar3 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[2] * lVar11);
              uStack_c0 = puVar13[0x26];
              auVar25 = maxps(auVar2,auVar3);
              auVar27 = minps(auVar2,auVar3);
              uVar4 = puVar13[0x2b];
              uStack_b0 = auVar3._0_4_;
              uStack_ac = 0;
              auVar25 = maxps(auVar1,auVar25);
              auVar27 = minps(auVar1,auVar27);
              auVar18 = maxps(auVar18,auVar25);
              auVar17 = minps(auVar17,auVar27);
              uStack_40 = auVar1._4_4_;
              uStack_3c = 0;
              uStack_30 = auVar1._8_4_;
              uStack_2c = 0;
              uStack_70 = auVar2._4_4_;
              uStack_6c = 0;
              uStack_60 = auVar2._8_4_;
              uStack_5c = 0;
              uStack_a0 = auVar3._4_4_;
              uStack_9c = 0;
              uStack_90 = auVar3._8_4_;
              uStack_8c = 0;
              uStack_d0 = uVar5;
              if (uVar4 != 0xffffffff) {
                puVar16 = (uint *)(lVar10 + lVar9 * (ulong)uVar4);
                auVar1 = *(undefined1 (*) [16])(lVar8 + (ulong)*puVar16 * lVar11);
                uStack_4c = auVar1._0_4_;
                auVar2 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[1] * lVar11);
                auVar3 = *(undefined1 (*) [16])(lVar8 + (ulong)puVar16[2] * lVar11);
                uStack_bc = puVar13[0x27];
                uStack_7c = auVar2._0_4_;
                auVar25 = maxps(auVar2,auVar3);
                auVar27 = minps(auVar2,auVar3);
                uStack_ac = auVar3._0_4_;
                auVar25 = maxps(auVar1,auVar25);
                auVar27 = minps(auVar1,auVar27);
                auVar18 = maxps(auVar18,auVar25);
                auVar17 = minps(auVar17,auVar27);
                uStack_3c = auVar1._4_4_;
                uStack_2c = auVar1._8_4_;
                uStack_6c = auVar2._4_4_;
                uStack_5c = auVar2._8_4_;
                uStack_9c = auVar3._4_4_;
                uStack_8c = auVar3._8_4_;
                uStack_cc = uVar4;
              }
            }
          }
          local_e8 = _local_98;
        }
        puVar13[0x1c] = local_a8._0_4_;
        puVar13[0x1d] = local_a8._4_4_;
        puVar13[0x1e] = uStack_a0;
        puVar13[0x1f] = uStack_9c;
        auVar20 = minps(auVar20,auVar17);
        auVar19 = maxps(auVar19,auVar18);
        *puVar13 = local_58._0_4_;
        puVar13[1] = local_58._4_4_;
        puVar13[2] = uStack_50;
        puVar13[3] = uStack_4c;
        puVar14 = puVar13 + 0x2c;
        puVar13[4] = local_48._0_4_;
        puVar13[5] = local_48._4_4_;
        puVar13[6] = uStack_40;
        puVar13[7] = uStack_3c;
        puVar13[8] = local_38._0_4_;
        puVar13[9] = local_38._4_4_;
        puVar13[10] = uStack_30;
        puVar13[0xb] = uStack_2c;
        puVar13[0xc] = local_88._0_4_;
        puVar13[0xd] = local_88._4_4_;
        puVar13[0xe] = uStack_80;
        puVar13[0xf] = uStack_7c;
        *(undefined1 (*) [16])(puVar13 + 0x10) = _local_78;
        *(undefined1 (*) [16])(puVar13 + 0x14) = _local_68;
        *(undefined1 (*) [16])(puVar13 + 0x18) = _local_b8;
        *(undefined8 *)(puVar13 + 0x20) = local_e8._0_8_;
        *(undefined8 *)(puVar13 + 0x22) = local_e8._8_8_;
        puVar13[0x24] = uVar22;
        puVar13[0x25] = uStack_c4;
        puVar13[0x26] = uStack_c0;
        puVar13[0x27] = uStack_bc;
        puVar13[0x28] = uVar21;
        puVar13[0x29] = uStack_d4;
        puVar13[0x2a] = uStack_d0;
        puVar13[0x2b] = uStack_cc;
        puVar13 = puVar14;
      } while ((undefined4 *)(uVar6 & 0xfffffffffffffff0) + uVar15 * 0x2c + -0x160 != puVar14);
    }
    *(undefined1 (*) [16])this = auVar20;
    *(undefined1 (*) [16])(this + 0x10) = auVar19;
  }
  if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

NodeRefPtr *
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::leafBounds
          (NodeRefPtr *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong *in_RDX;
  ulong uVar13;
  long in_RSI;
  uint *puVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [4];
  undefined1 auStack_b4 [8];
  float fStack_ac;
  undefined1 local_a8 [4];
  undefined1 auStack_a4 [8];
  float fStack_9c;
  undefined1 local_98 [4];
  undefined1 auStack_94 [8];
  float fStack_8c;
  undefined1 local_88 [4];
  undefined1 auStack_84 [8];
  float fStack_7c;
  undefined1 local_78 [4];
  undefined1 auStack_74 [8];
  float fStack_6c;
  undefined1 local_68 [4];
  undefined1 auStack_64 [8];
  float fStack_5c;
  undefined1 local_58 [4];
  undefined1 auStack_54 [8];
  float fStack_4c;
  undefined1 local_48 [4];
  undefined1 auStack_44 [8];
  float fStack_3c;
  undefined1 local_38 [4];
  undefined1 auStack_34 [8];
  float fStack_2c;
  
  uVar10 = _LC1;
  uVar4 = *in_RDX;
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = (ulong)((uint)uVar4 & 0xf);
  if (uVar4 == 8) {
    *(undefined4 *)param_1 = _LC1;
    *(undefined4 *)(param_1 + 4) = uVar10;
    *(undefined4 *)(param_1 + 8) = uVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar10;
    uVar10 = _LC3;
    *(undefined4 *)(param_1 + 0x10) = _LC3;
    *(undefined4 *)(param_1 + 0x14) = uVar10;
    *(undefined4 *)(param_1 + 0x18) = uVar10;
    *(undefined4 *)(param_1 + 0x1c) = uVar10;
  }
  else {
    if (uVar13 == 8) {
      auVar30._4_4_ = _LC1;
      auVar30._0_4_ = _LC1;
      auVar30._8_4_ = _LC1;
      auVar30._12_4_ = _LC1;
      auVar29._4_4_ = _LC3;
      auVar29._0_4_ = _LC3;
      auVar29._8_4_ = _LC3;
      auVar29._12_4_ = _LC3;
    }
    else {
      auVar30._4_12_ = _UNK_00103ed4;
      auVar30._0_4_ = _LC1;
      auVar29._4_12_ = _UNK_00103ee4;
      auVar29._0_4_ = _LC3;
      pfVar11 = (float *)(uVar4 & 0xfffffffffffffff0);
      do {
        fVar31 = pfVar11[0x24];
        lVar6 = *(long *)(in_RSI + 0x30);
        fStack_d4 = -NAN;
        fStack_d0 = -NAN;
        fStack_cc = -NAN;
        fStack_c4 = -NAN;
        fStack_c0 = -NAN;
        fStack_bc = -NAN;
        if (fVar31 == -NAN) {
          fVar20 = 0.0;
          fVar21 = 0.0;
          fVar22 = 0.0;
          fStack_4c = 0.0;
          fStack_d0 = -NAN;
          fVar31 = -NAN;
          fStack_d4 = -NAN;
          fStack_cc = -NAN;
          auVar15._4_12_ = _UNK_00103ed4;
          auVar15._0_4_ = _LC1;
          auVar16._4_12_ = _UNK_00103ee4;
          auVar16._0_4_ = _LC3;
          fVar17 = 0.0;
          fVar18 = 0.0;
          fVar19 = 0.0;
          fStack_3c = 0.0;
          _local_e8 = (undefined1  [16])0x0;
          local_98 = (undefined1  [4])0x0;
          auStack_94._0_4_ = 0.0;
          local_a8 = (undefined1  [4])0x0;
          auStack_a4._0_4_ = 0.0;
          auStack_a4._4_4_ = 0.0;
          fStack_9c = 0.0;
          local_b8 = (undefined1  [4])0x0;
          auStack_b4._0_4_ = 0.0;
          auStack_b4._4_4_ = 0.0;
          fStack_ac = 0.0;
          auStack_94._4_4_ = fVar19;
          fStack_8c = fStack_3c;
          fVar32 = (float)local_98;
          fVar33 = fVar18;
          fVar34 = fVar19;
          fVar35 = fStack_3c;
          fVar36 = (float)local_98;
          fVar37 = fVar18;
          fVar38 = fVar19;
          fVar39 = fStack_3c;
          fVar40 = fVar17;
          fVar41 = fVar18;
          fVar42 = fVar19;
          fVar43 = fStack_3c;
          fVar26 = fVar31;
          fStack_c4 = fStack_d4;
          fStack_c0 = fStack_d0;
          fStack_bc = fStack_cc;
        }
        else {
          lVar7 = *(long *)(lVar6 + 0x60);
          lVar8 = *(long *)(lVar6 + 0x58);
          lVar9 = *(long *)(lVar6 + 0x88);
          lVar6 = *(long *)(lVar6 + 0x90);
          puVar14 = (uint *)((ulong)(uint)pfVar11[0x28] * lVar7 + lVar8);
          auVar1 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar14 * lVar6);
          _auStack_b4 = SUB1612((undefined1  [16])0x0,4);
          local_b8 = (undefined1  [4])auVar1._0_4_;
          auVar2 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[1] * lVar6);
          fVar32 = pfVar11[0x25];
          auVar3 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[2] * lVar6);
          _auStack_84 = SUB1612((undefined1  [16])0x0,4);
          local_88 = (undefined1  [4])auVar2._0_4_;
          _auStack_54 = SUB1612((undefined1  [16])0x0,4);
          local_58 = (undefined1  [4])auVar3._0_4_;
          auVar15 = maxps(auVar2,auVar3);
          auVar16 = minps(auVar2,auVar3);
          auVar23 = maxps(auVar1,auVar15);
          auVar15 = minps(auVar1,auVar16);
          auVar28._4_4_ = _LC1;
          auVar28._0_4_ = _LC1;
          auVar28._8_4_ = _LC1;
          auVar28._12_4_ = _LC1;
          auVar15 = minps(auVar28,auVar15);
          auVar25._4_4_ = _LC3;
          auVar25._0_4_ = _LC3;
          auVar25._8_4_ = _LC3;
          auVar25._12_4_ = _LC3;
          auVar16 = maxps(auVar25,auVar23);
          _auStack_a4 = SUB1612((undefined1  [16])0x0,4);
          local_a8 = (undefined1  [4])auVar1._4_4_;
          _auStack_94 = SUB1612((undefined1  [16])0x0,4);
          local_98 = (undefined1  [4])auVar1._8_4_;
          _auStack_74 = SUB1612((undefined1  [16])0x0,4);
          local_78 = (undefined1  [4])auVar2._4_4_;
          _auStack_64 = SUB1612((undefined1  [16])0x0,4);
          local_68 = (undefined1  [4])auVar2._8_4_;
          _auStack_44 = SUB1612((undefined1  [16])0x0,4);
          local_48 = (undefined1  [4])auVar3._4_4_;
          _auStack_34 = SUB1612((undefined1  [16])0x0,4);
          local_38 = (undefined1  [4])auVar3._8_4_;
          if (fVar32 != -NAN) {
            fStack_c4 = pfVar11[0x29];
            fVar33 = pfVar11[0x26];
            puVar14 = (uint *)((ulong)(uint)fStack_c4 * lVar7 + lVar8);
            auVar25 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar14 * lVar6);
            _local_b8 = CONCAT44(auVar25._0_4_,auVar1._0_4_);
            stack0xffffffffffffff50 = 0;
            auVar28 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[1] * lVar6);
            auVar23 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[2] * lVar6);
            _local_88 = CONCAT44(auVar28._0_4_,auVar2._0_4_);
            stack0xffffffffffffff80 = 0;
            _local_58 = CONCAT44(auVar23._0_4_,auVar3._0_4_);
            stack0xffffffffffffffb0 = 0;
            auVar24 = maxps(auVar28,auVar23);
            auVar27 = minps(auVar28,auVar23);
            auVar24 = maxps(auVar25,auVar24);
            auVar27 = minps(auVar25,auVar27);
            auVar16 = maxps(auVar16,auVar24);
            auVar15 = minps(auVar15,auVar27);
            _local_a8 = CONCAT44(auVar25._4_4_,auVar1._4_4_);
            stack0xffffffffffffff60 = 0;
            _local_98 = CONCAT44(auVar25._8_4_,auVar1._8_4_);
            stack0xffffffffffffff70 = 0;
            _local_78 = CONCAT44(auVar28._4_4_,auVar2._4_4_);
            stack0xffffffffffffff90 = 0;
            _local_68 = CONCAT44(auVar28._8_4_,auVar2._8_4_);
            stack0xffffffffffffffa0 = 0;
            _local_48 = CONCAT44(auVar23._4_4_,auVar3._4_4_);
            stack0xffffffffffffffc0 = 0;
            _local_38 = CONCAT44(auVar23._8_4_,auVar3._8_4_);
            stack0xffffffffffffffd0 = 0;
            fStack_d4 = fVar32;
            if (fVar33 != -NAN) {
              fStack_c0 = pfVar11[0x2a];
              puVar14 = (uint *)((ulong)(uint)fStack_c0 * lVar7 + lVar8);
              auVar1 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar14 * lVar6);
              auStack_b4._4_4_ = auVar1._0_4_;
              fStack_ac = 0.0;
              auVar2 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[1] * lVar6);
              auVar3 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[2] * lVar6);
              auStack_84._4_4_ = auVar2._0_4_;
              fStack_7c = 0.0;
              auStack_54._4_4_ = auVar3._0_4_;
              fStack_4c = 0.0;
              auVar25 = maxps(auVar2,auVar3);
              auVar28 = minps(auVar2,auVar3);
              auVar25 = maxps(auVar1,auVar25);
              auVar28 = minps(auVar1,auVar28);
              auVar16 = maxps(auVar16,auVar25);
              auVar15 = minps(auVar15,auVar28);
              auStack_a4._4_4_ = auVar1._4_4_;
              fStack_9c = 0.0;
              auStack_94._4_4_ = auVar1._8_4_;
              fStack_8c = 0.0;
              auStack_74._4_4_ = auVar2._4_4_;
              fStack_6c = 0.0;
              auStack_64._4_4_ = auVar2._8_4_;
              fStack_5c = 0.0;
              auStack_44._4_4_ = auVar3._4_4_;
              fStack_3c = 0.0;
              auStack_34._4_4_ = auVar3._8_4_;
              fStack_2c = 0.0;
              fStack_d0 = fVar33;
              if (pfVar11[0x27] != -NAN) {
                fStack_bc = pfVar11[0x2b];
                puVar14 = (uint *)(lVar8 + (ulong)(uint)fStack_bc * lVar7);
                auVar1 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar14 * lVar6);
                fStack_ac = (float)auVar1._0_4_;
                auVar2 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[1] * lVar6);
                fStack_7c = (float)auVar2._0_4_;
                auVar3 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[2] * lVar6);
                fStack_4c = (float)auVar3._0_4_;
                auVar25 = maxps(auVar2,auVar3);
                auVar28 = minps(auVar2,auVar3);
                auVar25 = maxps(auVar1,auVar25);
                auVar28 = minps(auVar1,auVar28);
                auVar16 = maxps(auVar16,auVar25);
                auVar15 = minps(auVar15,auVar28);
                fStack_9c = (float)auVar1._4_4_;
                fStack_8c = (float)auVar1._8_4_;
                fStack_6c = (float)auVar2._4_4_;
                fStack_5c = (float)auVar2._8_4_;
                fStack_3c = (float)auVar3._4_4_;
                fStack_2c = (float)auVar3._8_4_;
                fStack_cc = pfVar11[0x27];
              }
            }
          }
          fVar20 = (float)local_58 - (float)local_b8;
          fVar21 = (float)auStack_54._0_4_ - (float)auStack_b4._0_4_;
          fVar22 = (float)auStack_54._4_4_ - (float)auStack_b4._4_4_;
          fStack_4c = fStack_4c - fStack_ac;
          local_e8._4_4_ = (float)auStack_34._0_4_ - (float)auStack_94._0_4_;
          local_e8._0_4_ = (float)local_38 - (float)local_98;
          uStack_e0._0_4_ = (float)auStack_34._4_4_ - (float)auStack_94._4_4_;
          uStack_e0._4_4_ = fStack_2c - fStack_8c;
          fVar17 = (float)local_48 - (float)local_a8;
          fVar18 = (float)auStack_44._0_4_ - (float)auStack_a4._0_4_;
          fVar19 = (float)auStack_44._4_4_ - (float)auStack_a4._4_4_;
          fStack_3c = fStack_3c - fStack_9c;
          fVar32 = (float)local_98 - (float)local_68;
          fVar33 = (float)auStack_94._0_4_ - (float)auStack_64._0_4_;
          fVar34 = (float)auStack_94._4_4_ - (float)auStack_64._4_4_;
          fVar35 = fStack_8c - fStack_5c;
          fVar36 = (float)local_a8 - (float)local_78;
          fVar37 = (float)auStack_a4._0_4_ - (float)auStack_74._0_4_;
          fVar38 = (float)auStack_a4._4_4_ - (float)auStack_74._4_4_;
          fVar39 = fStack_9c - fStack_6c;
          fVar40 = (float)local_b8 - (float)local_88;
          fVar41 = (float)auStack_b4._0_4_ - (float)auStack_84._0_4_;
          fVar42 = (float)auStack_b4._4_4_ - (float)auStack_84._4_4_;
          fVar43 = fStack_ac - fStack_7c;
          fVar26 = pfVar11[0x28];
        }
        *pfVar11 = (float)local_b8;
        pfVar11[1] = (float)auStack_b4._0_4_;
        pfVar11[2] = (float)auStack_b4._4_4_;
        pfVar11[3] = fStack_ac;
        pfVar12 = pfVar11 + 0x2c;
        auVar30 = minps(auVar30,auVar15);
        pfVar11[4] = (float)local_a8;
        pfVar11[5] = (float)auStack_a4._0_4_;
        pfVar11[6] = (float)auStack_a4._4_4_;
        pfVar11[7] = fStack_9c;
        auVar29 = maxps(auVar29,auVar16);
        pfVar11[8] = (float)local_98;
        pfVar11[9] = (float)auStack_94._0_4_;
        pfVar11[10] = (float)auStack_94._4_4_;
        pfVar11[0xb] = fStack_8c;
        pfVar11[0xc] = fVar40;
        pfVar11[0xd] = fVar41;
        pfVar11[0xe] = fVar42;
        pfVar11[0xf] = fVar43;
        pfVar11[0x10] = fVar36;
        pfVar11[0x11] = fVar37;
        pfVar11[0x12] = fVar38;
        pfVar11[0x13] = fVar39;
        pfVar11[0x14] = fVar32;
        pfVar11[0x15] = fVar33;
        pfVar11[0x16] = fVar34;
        pfVar11[0x17] = fVar35;
        pfVar11[0x18] = fVar20;
        pfVar11[0x19] = fVar21;
        pfVar11[0x1a] = fVar22;
        pfVar11[0x1b] = fStack_4c;
        pfVar11[0x1c] = fVar17;
        pfVar11[0x1d] = fVar18;
        pfVar11[0x1e] = fVar19;
        pfVar11[0x1f] = fStack_3c;
        *(undefined1 (*) [8])(pfVar11 + 0x20) = local_e8;
        *(undefined8 *)(pfVar11 + 0x22) = uStack_e0;
        pfVar11[0x24] = fVar31;
        pfVar11[0x25] = fStack_d4;
        pfVar11[0x26] = fStack_d0;
        pfVar11[0x27] = fStack_cc;
        pfVar11[0x28] = fVar26;
        pfVar11[0x29] = fStack_c4;
        pfVar11[0x2a] = fStack_c0;
        pfVar11[0x2b] = fStack_bc;
        pfVar11 = pfVar12;
      } while ((float *)(uVar4 & 0xfffffffffffffff0) + uVar13 * 0x2c + -0x160 != pfVar12);
    }
    *(undefined1 (*) [16])param_1 = auVar30;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar29;
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> * __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::leafBounds
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this,NodeRefPtr *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong *in_RDX;
  ulong uVar13;
  uint *puVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [4];
  undefined1 auStack_b4 [8];
  float fStack_ac;
  undefined1 local_a8 [4];
  undefined1 auStack_a4 [8];
  float fStack_9c;
  undefined1 local_98 [4];
  undefined1 auStack_94 [8];
  float fStack_8c;
  undefined1 local_88 [4];
  undefined1 auStack_84 [8];
  float fStack_7c;
  undefined1 local_78 [4];
  undefined1 auStack_74 [8];
  float fStack_6c;
  undefined1 local_68 [4];
  undefined1 auStack_64 [8];
  float fStack_5c;
  undefined1 local_58 [4];
  undefined1 auStack_54 [8];
  float fStack_4c;
  undefined1 local_48 [4];
  undefined1 auStack_44 [8];
  float fStack_3c;
  undefined1 local_38 [4];
  undefined1 auStack_34 [8];
  float fStack_2c;
  
  uVar10 = _LC1;
  uVar4 = *in_RDX;
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = (ulong)((uint)uVar4 & 0xf);
  if (uVar4 == 8) {
    *(undefined4 *)this = _LC1;
    *(undefined4 *)(this + 4) = uVar10;
    *(undefined4 *)(this + 8) = uVar10;
    *(undefined4 *)(this + 0xc) = uVar10;
    uVar10 = _LC3;
    *(undefined4 *)(this + 0x10) = _LC3;
    *(undefined4 *)(this + 0x14) = uVar10;
    *(undefined4 *)(this + 0x18) = uVar10;
    *(undefined4 *)(this + 0x1c) = uVar10;
  }
  else {
    if (uVar13 == 8) {
      auVar29._4_4_ = _LC3;
      auVar29._0_4_ = _LC3;
      auVar29._8_4_ = _LC3;
      auVar29._12_4_ = _LC3;
      auVar30._4_4_ = _LC1;
      auVar30._0_4_ = _LC1;
      auVar30._8_4_ = _LC1;
      auVar30._12_4_ = _LC1;
    }
    else {
      auVar29._4_12_ = _UNK_00103ee4;
      auVar29._0_4_ = _LC3;
      auVar30._4_12_ = _UNK_00103ed4;
      auVar30._0_4_ = _LC1;
      pfVar11 = (float *)(uVar4 & 0xfffffffffffffff0);
      do {
        fVar31 = pfVar11[0x24];
        lVar6 = *(long *)(param_1 + 0x20);
        fStack_c4 = -NAN;
        fStack_c0 = -NAN;
        fStack_bc = -NAN;
        fStack_d4 = -NAN;
        fStack_d0 = -NAN;
        fStack_cc = -NAN;
        if (fVar31 == -NAN) {
          fVar20 = 0.0;
          fVar21 = 0.0;
          fVar22 = 0.0;
          fStack_ac = 0.0;
          fStack_c0 = -NAN;
          fVar31 = -NAN;
          fStack_c4 = -NAN;
          fStack_bc = -NAN;
          auVar16._4_12_ = _UNK_00103ee4;
          auVar16._0_4_ = _LC3;
          auVar15._4_12_ = _UNK_00103ed4;
          auVar15._0_4_ = _LC1;
          fVar17 = 0.0;
          fVar18 = 0.0;
          fVar19 = 0.0;
          fStack_9c = 0.0;
          _local_e8 = (undefined1  [16])0x0;
          local_38 = (undefined1  [4])0x0;
          auStack_34._0_4_ = 0.0;
          local_48 = (undefined1  [4])0x0;
          auStack_44._0_4_ = 0.0;
          auStack_44._4_4_ = 0.0;
          fStack_3c = 0.0;
          local_58 = (undefined1  [4])0x0;
          auStack_54._0_4_ = 0.0;
          auStack_54._4_4_ = 0.0;
          fStack_4c = 0.0;
          auStack_34._4_4_ = fVar19;
          fStack_2c = fStack_9c;
          fVar32 = (float)local_38;
          fVar33 = fVar18;
          fVar34 = fVar19;
          fVar35 = fStack_9c;
          fVar36 = (float)local_38;
          fVar37 = fVar18;
          fVar38 = fVar19;
          fVar39 = fStack_9c;
          fVar40 = fVar17;
          fVar41 = fVar18;
          fVar42 = fVar19;
          fVar43 = fStack_9c;
          fVar26 = fVar31;
          fStack_d4 = fStack_c4;
          fStack_d0 = fStack_c0;
          fStack_cc = fStack_bc;
        }
        else {
          lVar7 = *(long *)(lVar6 + 0x60);
          lVar8 = *(long *)(lVar6 + 0x58);
          lVar9 = *(long *)(lVar6 + 0x88);
          lVar6 = *(long *)(lVar6 + 0x90);
          puVar14 = (uint *)((ulong)(uint)pfVar11[0x28] * lVar7 + lVar8);
          auVar1 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar14 * lVar6);
          _auStack_54 = SUB1612((undefined1  [16])0x0,4);
          local_58 = (undefined1  [4])auVar1._0_4_;
          auVar2 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[1] * lVar6);
          fVar32 = pfVar11[0x25];
          auVar3 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[2] * lVar6);
          _auStack_84 = SUB1612((undefined1  [16])0x0,4);
          local_88 = (undefined1  [4])auVar2._0_4_;
          auVar15 = maxps(auVar2,auVar3);
          auVar16 = minps(auVar2,auVar3);
          _auStack_b4 = SUB1612((undefined1  [16])0x0,4);
          local_b8 = (undefined1  [4])auVar3._0_4_;
          auVar23 = maxps(auVar1,auVar15);
          auVar15 = minps(auVar1,auVar16);
          auVar28._4_4_ = _LC1;
          auVar28._0_4_ = _LC1;
          auVar28._8_4_ = _LC1;
          auVar28._12_4_ = _LC1;
          auVar15 = minps(auVar28,auVar15);
          auVar25._4_4_ = _LC3;
          auVar25._0_4_ = _LC3;
          auVar25._8_4_ = _LC3;
          auVar25._12_4_ = _LC3;
          auVar16 = maxps(auVar25,auVar23);
          _auStack_44 = SUB1612((undefined1  [16])0x0,4);
          local_48 = (undefined1  [4])auVar1._4_4_;
          _auStack_34 = SUB1612((undefined1  [16])0x0,4);
          local_38 = (undefined1  [4])auVar1._8_4_;
          _auStack_74 = SUB1612((undefined1  [16])0x0,4);
          local_78 = (undefined1  [4])auVar2._4_4_;
          _auStack_64 = SUB1612((undefined1  [16])0x0,4);
          local_68 = (undefined1  [4])auVar2._8_4_;
          _auStack_a4 = SUB1612((undefined1  [16])0x0,4);
          local_a8 = (undefined1  [4])auVar3._4_4_;
          _auStack_94 = SUB1612((undefined1  [16])0x0,4);
          local_98 = (undefined1  [4])auVar3._8_4_;
          if (fVar32 != -NAN) {
            fStack_d4 = pfVar11[0x29];
            fVar33 = pfVar11[0x26];
            puVar14 = (uint *)((ulong)(uint)fStack_d4 * lVar7 + lVar8);
            auVar25 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar14 * lVar6);
            _local_58 = CONCAT44(auVar25._0_4_,auVar1._0_4_);
            stack0xffffffffffffffb0 = 0;
            auVar28 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[1] * lVar6);
            auVar23 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[2] * lVar6);
            _local_88 = CONCAT44(auVar28._0_4_,auVar2._0_4_);
            stack0xffffffffffffff80 = 0;
            auVar24 = maxps(auVar28,auVar23);
            auVar27 = minps(auVar28,auVar23);
            _local_b8 = CONCAT44(auVar23._0_4_,auVar3._0_4_);
            stack0xffffffffffffff50 = 0;
            auVar24 = maxps(auVar25,auVar24);
            auVar27 = minps(auVar25,auVar27);
            auVar16 = maxps(auVar16,auVar24);
            auVar15 = minps(auVar15,auVar27);
            _local_48 = CONCAT44(auVar25._4_4_,auVar1._4_4_);
            stack0xffffffffffffffc0 = 0;
            _local_38 = CONCAT44(auVar25._8_4_,auVar1._8_4_);
            stack0xffffffffffffffd0 = 0;
            _local_78 = CONCAT44(auVar28._4_4_,auVar2._4_4_);
            stack0xffffffffffffff90 = 0;
            _local_68 = CONCAT44(auVar28._8_4_,auVar2._8_4_);
            stack0xffffffffffffffa0 = 0;
            _local_a8 = CONCAT44(auVar23._4_4_,auVar3._4_4_);
            stack0xffffffffffffff60 = 0;
            _local_98 = CONCAT44(auVar23._8_4_,auVar3._8_4_);
            stack0xffffffffffffff70 = 0;
            fStack_c4 = fVar32;
            if (fVar33 != -NAN) {
              fStack_d0 = pfVar11[0x2a];
              puVar14 = (uint *)((ulong)(uint)fStack_d0 * lVar7 + lVar8);
              auVar1 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar14 * lVar6);
              auStack_54._4_4_ = auVar1._0_4_;
              fStack_4c = 0.0;
              auVar2 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[1] * lVar6);
              auVar3 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[2] * lVar6);
              auStack_84._4_4_ = auVar2._0_4_;
              fStack_7c = 0.0;
              auVar25 = maxps(auVar2,auVar3);
              auVar28 = minps(auVar2,auVar3);
              auStack_b4._4_4_ = auVar3._0_4_;
              fStack_ac = 0.0;
              auVar25 = maxps(auVar1,auVar25);
              auVar28 = minps(auVar1,auVar28);
              auVar16 = maxps(auVar16,auVar25);
              auVar15 = minps(auVar15,auVar28);
              auStack_44._4_4_ = auVar1._4_4_;
              fStack_3c = 0.0;
              auStack_34._4_4_ = auVar1._8_4_;
              fStack_2c = 0.0;
              auStack_74._4_4_ = auVar2._4_4_;
              fStack_6c = 0.0;
              auStack_64._4_4_ = auVar2._8_4_;
              fStack_5c = 0.0;
              auStack_a4._4_4_ = auVar3._4_4_;
              fStack_9c = 0.0;
              auStack_94._4_4_ = auVar3._8_4_;
              fStack_8c = 0.0;
              fStack_c0 = fVar33;
              if (pfVar11[0x27] != -NAN) {
                fStack_cc = pfVar11[0x2b];
                puVar14 = (uint *)(lVar8 + (ulong)(uint)fStack_cc * lVar7);
                auVar1 = *(undefined1 (*) [16])(lVar9 + (ulong)*puVar14 * lVar6);
                fStack_4c = (float)auVar1._0_4_;
                auVar2 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[1] * lVar6);
                fStack_7c = (float)auVar2._0_4_;
                auVar3 = *(undefined1 (*) [16])(lVar9 + (ulong)puVar14[2] * lVar6);
                auVar25 = maxps(auVar2,auVar3);
                auVar28 = minps(auVar2,auVar3);
                fStack_ac = (float)auVar3._0_4_;
                auVar25 = maxps(auVar1,auVar25);
                auVar28 = minps(auVar1,auVar28);
                auVar16 = maxps(auVar16,auVar25);
                auVar15 = minps(auVar15,auVar28);
                fStack_3c = (float)auVar1._4_4_;
                fStack_2c = (float)auVar1._8_4_;
                fStack_6c = (float)auVar2._4_4_;
                fStack_5c = (float)auVar2._8_4_;
                fStack_9c = (float)auVar3._4_4_;
                fStack_8c = (float)auVar3._8_4_;
                fStack_bc = pfVar11[0x27];
              }
            }
          }
          fVar20 = (float)local_b8 - (float)local_58;
          fVar21 = (float)auStack_b4._0_4_ - (float)auStack_54._0_4_;
          fVar22 = (float)auStack_b4._4_4_ - (float)auStack_54._4_4_;
          fStack_ac = fStack_ac - fStack_4c;
          local_e8._4_4_ = (float)auStack_94._0_4_ - (float)auStack_34._0_4_;
          local_e8._0_4_ = (float)local_98 - (float)local_38;
          uStack_e0._0_4_ = (float)auStack_94._4_4_ - (float)auStack_34._4_4_;
          uStack_e0._4_4_ = fStack_8c - fStack_2c;
          fVar17 = (float)local_a8 - (float)local_48;
          fVar18 = (float)auStack_a4._0_4_ - (float)auStack_44._0_4_;
          fVar19 = (float)auStack_a4._4_4_ - (float)auStack_44._4_4_;
          fStack_9c = fStack_9c - fStack_3c;
          fVar32 = (float)local_38 - (float)local_68;
          fVar33 = (float)auStack_34._0_4_ - (float)auStack_64._0_4_;
          fVar34 = (float)auStack_34._4_4_ - (float)auStack_64._4_4_;
          fVar35 = fStack_2c - fStack_5c;
          fVar36 = (float)local_48 - (float)local_78;
          fVar37 = (float)auStack_44._0_4_ - (float)auStack_74._0_4_;
          fVar38 = (float)auStack_44._4_4_ - (float)auStack_74._4_4_;
          fVar39 = fStack_3c - fStack_6c;
          fVar40 = (float)local_58 - (float)local_88;
          fVar41 = (float)auStack_54._0_4_ - (float)auStack_84._0_4_;
          fVar42 = (float)auStack_54._4_4_ - (float)auStack_84._4_4_;
          fVar43 = fStack_4c - fStack_7c;
          fVar26 = pfVar11[0x28];
        }
        *pfVar11 = (float)local_58;
        pfVar11[1] = (float)auStack_54._0_4_;
        pfVar11[2] = (float)auStack_54._4_4_;
        pfVar11[3] = fStack_4c;
        pfVar12 = pfVar11 + 0x2c;
        auVar30 = minps(auVar30,auVar15);
        pfVar11[4] = (float)local_48;
        pfVar11[5] = (float)auStack_44._0_4_;
        pfVar11[6] = (float)auStack_44._4_4_;
        pfVar11[7] = fStack_3c;
        auVar29 = maxps(auVar29,auVar16);
        pfVar11[8] = (float)local_38;
        pfVar11[9] = (float)auStack_34._0_4_;
        pfVar11[10] = (float)auStack_34._4_4_;
        pfVar11[0xb] = fStack_2c;
        pfVar11[0xc] = fVar40;
        pfVar11[0xd] = fVar41;
        pfVar11[0xe] = fVar42;
        pfVar11[0xf] = fVar43;
        pfVar11[0x10] = fVar36;
        pfVar11[0x11] = fVar37;
        pfVar11[0x12] = fVar38;
        pfVar11[0x13] = fVar39;
        pfVar11[0x14] = fVar32;
        pfVar11[0x15] = fVar33;
        pfVar11[0x16] = fVar34;
        pfVar11[0x17] = fVar35;
        pfVar11[0x18] = fVar20;
        pfVar11[0x19] = fVar21;
        pfVar11[0x1a] = fVar22;
        pfVar11[0x1b] = fStack_ac;
        pfVar11[0x1c] = fVar17;
        pfVar11[0x1d] = fVar18;
        pfVar11[0x1e] = fVar19;
        pfVar11[0x1f] = fStack_9c;
        *(undefined1 (*) [8])(pfVar11 + 0x20) = local_e8;
        *(undefined8 *)(pfVar11 + 0x22) = uStack_e0;
        pfVar11[0x24] = fVar31;
        pfVar11[0x25] = fStack_c4;
        pfVar11[0x26] = fStack_c0;
        pfVar11[0x27] = fStack_bc;
        pfVar11[0x28] = fVar26;
        pfVar11[0x29] = fStack_d4;
        pfVar11[0x2a] = fStack_d0;
        pfVar11[0x2b] = fStack_cc;
        pfVar11 = pfVar12;
      } while ((float *)(uVar4 & 0xfffffffffffffff0) + uVar13 * 0x2c + -0x160 != pfVar12);
    }
    *(undefined1 (*) [16])this = auVar30;
    *(undefined1 (*) [16])(this + 0x10) = auVar29;
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00103e58;
  *(undefined **)(this + 0x10) = &DAT_00103ea8;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010235e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00103df0;
  *(undefined **)(this + 0x10) = &DAT_00103e40;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001023ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00103d88;
  *(undefined **)(this + 0x10) = &DAT_00103dd8;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001023fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 8))();
    return;
  }
  return;
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
                    /* WARNING: Could not recover jumptable at 0x00102429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00103e58;
  *(undefined **)(this + 0x10) = &DAT_00103ea8;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  operator_delete(this,0x40);
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00103df0;
  *(undefined **)(this + 0x10) = &DAT_00103e40;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  operator_delete(this,0x40);
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00103d88;
  *(undefined **)(this + 0x10) = &DAT_00103dd8;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  operator_delete(this,0x40);
  return;
}



/* embree::sse2::BVHNRefitter<4>::BVHNRefitter(embree::BVHN<4>*,
   embree::sse2::BVHNRefitter<4>::LeafBoundsInterface const&) */

void __thiscall
embree::sse2::BVHNRefitter<4>::BVHNRefitter
          (BVHNRefitter<4> *this,BVHN *param_1,LeafBoundsInterface *param_2)

{
  *(BVHN **)this = param_1;
  *(LeafBoundsInterface **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* embree::sse2::BVHNRefitter<4>::gather_subtree_refs(embree::NodeRefPtr<4>&, unsigned long&,
   unsigned long) */

void __thiscall
embree::sse2::BVHNRefitter<4>::gather_subtree_refs
          (BVHNRefitter<4> *this,NodeRefPtr *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  ulong *extraout_RDX;
  ulong uVar2;
  
  if (param_3 < 4) {
    plVar1 = *(long **)param_1;
    uVar2 = (ulong)((uint)plVar1 & 0xf);
    if (((ulong)plVar1 & 0xf) == 0) {
      if (param_3 == 3) {
        if (*plVar1 != 8) {
          uVar2 = *param_2;
          *param_2 = uVar2 + 1;
          *(long *)(this + uVar2 * 8 + 0x18) = *plVar1;
        }
        if (plVar1[1] != 8) {
          uVar2 = *param_2;
          *param_2 = uVar2 + 1;
          *(long *)(this + uVar2 * 8 + 0x18) = plVar1[1];
        }
        if (plVar1[2] != 8) {
          uVar2 = *param_2;
          *param_2 = uVar2 + 1;
          *(long *)(this + uVar2 * 8 + 0x18) = plVar1[2];
        }
        if (plVar1[3] != 8) {
          uVar2 = *param_2;
          *param_2 = uVar2 + 1;
          *(long *)(this + uVar2 * 8 + 0x18) = plVar1[3];
        }
      }
      else {
        do {
          if ((NodeRefPtr *)plVar1[uVar2] != (NodeRefPtr *)0x8) {
            gather_subtree_refs(this,(NodeRefPtr *)plVar1[uVar2],param_2,param_3 + 1);
            param_2 = extraout_RDX;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 4);
      }
    }
    return;
  }
  uVar2 = *param_2;
  *param_2 = uVar2 + 1;
  *(undefined8 *)(this + uVar2 * 8 + 0x18) = *(undefined8 *)param_1;
  return;
}



/* embree::sse2::BVHNRefitter<4>::refit_toplevel(embree::NodeRefPtr<4>&, unsigned long&,
   embree::BBox<embree::Vec3fa> const*, unsigned long) */

NodeRefPtr *
embree::sse2::BVHNRefitter<4>::refit_toplevel
          (NodeRefPtr *param_1,ulong *param_2,BBox *param_3,ulong param_4)

{
  BBox *pBVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  BBox *pBVar4;
  long in_R8;
  ulong in_R9;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_R9 < 4) {
    pBVar1 = *(BBox **)param_3;
    if (((ulong)pBVar1 & 0xf) == 0) {
      puVar3 = (undefined8 *)local_c8;
      pBVar4 = pBVar1;
      do {
        if (*(long *)pBVar4 == 8) {
          *(undefined4 *)puVar3 = _LC1;
          *(undefined4 *)((long)puVar3 + 4) = _LC1;
          *(undefined4 *)(puVar3 + 1) = _LC1;
          *(undefined4 *)((long)puVar3 + 0xc) = _LC1;
          *(undefined4 *)(puVar3 + 2) = _LC3;
          *(undefined4 *)((long)puVar3 + 0x14) = _LC3;
          *(undefined4 *)(puVar3 + 3) = _LC3;
          *(undefined4 *)((long)puVar3 + 0x1c) = _LC3;
        }
        else {
          refit_toplevel((NodeRefPtr *)&local_e8,param_2,pBVar4,param_4);
          *puVar3 = local_e8;
          puVar3[1] = uStack_e0;
          puVar3[2] = local_d8;
          puVar3[3] = uStack_d0;
        }
        puVar3 = puVar3 + 4;
        pBVar4 = pBVar4 + 8;
      } while (&local_48 != puVar3);
      auVar6 = minps(local_c8,local_a8);
      auVar8 = minps(local_88,local_68);
      *(int *)(pBVar1 + 0x20) = local_c8._0_4_;
      *(int *)(pBVar1 + 0x24) = local_a8._0_4_;
      *(int *)(pBVar1 + 0x28) = local_88._0_4_;
      *(int *)(pBVar1 + 0x2c) = local_68._0_4_;
      auVar5 = maxps(local_b8,local_98);
      *(int *)(pBVar1 + 0x40) = local_c8._4_4_;
      *(int *)(pBVar1 + 0x44) = local_a8._4_4_;
      *(int *)(pBVar1 + 0x48) = local_88._4_4_;
      *(int *)(pBVar1 + 0x4c) = local_68._4_4_;
      auVar7 = maxps(local_78,local_58);
      *(int *)(pBVar1 + 0x60) = local_c8._8_4_;
      *(int *)(pBVar1 + 100) = local_a8._8_4_;
      *(int *)(pBVar1 + 0x68) = local_88._8_4_;
      *(int *)(pBVar1 + 0x6c) = local_68._8_4_;
      auVar6 = minps(auVar6,auVar8);
      *(int *)(pBVar1 + 0x70) = local_b8._8_4_;
      *(int *)(pBVar1 + 0x74) = local_98._8_4_;
      *(int *)(pBVar1 + 0x78) = local_78._8_4_;
      *(int *)(pBVar1 + 0x7c) = local_58._8_4_;
      auVar5 = maxps(auVar5,auVar7);
      *(int *)(pBVar1 + 0x30) = local_b8._0_4_;
      *(int *)(pBVar1 + 0x34) = local_98._0_4_;
      *(int *)(pBVar1 + 0x38) = local_78._0_4_;
      *(int *)(pBVar1 + 0x3c) = local_58._0_4_;
      *(int *)(pBVar1 + 0x50) = local_b8._4_4_;
      *(int *)(pBVar1 + 0x54) = local_98._4_4_;
      *(int *)(pBVar1 + 0x58) = local_78._4_4_;
      *(int *)(pBVar1 + 0x5c) = local_58._4_4_;
      *(undefined1 (*) [16])param_1 = auVar6;
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar5;
    }
    else {
      (*(code *)**(undefined8 **)param_2[1])();
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)param_4 * 0x20 + in_R8);
    *(long *)param_4 = *(long *)param_4 + 1;
    uVar2 = puVar3[1];
    *(undefined8 *)param_1 = *puVar3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    uVar2 = puVar3[3];
    *(undefined8 *)(param_1 + 0x10) = puVar3[2];
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHNRefitter<4>::recurse_bottom(embree::NodeRefPtr<4>&) */

NodeRefPtr * embree::sse2::BVHNRefitter<4>::recurse_bottom(NodeRefPtr *param_1)

{
  long *plVar1;
  ulong *in_RDX;
  undefined8 *puVar2;
  long *plVar3;
  long in_RSI;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  plVar1 = (long *)*in_RDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)local_c8;
  plVar3 = plVar1;
  if (((ulong)plVar1 & 8) == 0) {
    do {
      if (*plVar3 == 8) {
        *(undefined4 *)puVar2 = _LC1;
        *(undefined4 *)((long)puVar2 + 4) = _LC1;
        *(undefined4 *)(puVar2 + 1) = _LC1;
        *(undefined4 *)((long)puVar2 + 0xc) = _LC1;
        *(undefined4 *)(puVar2 + 2) = _LC3;
        *(undefined4 *)((long)puVar2 + 0x14) = _LC3;
        *(undefined4 *)(puVar2 + 3) = _LC3;
        *(undefined4 *)((long)puVar2 + 0x1c) = _LC3;
      }
      else {
        recurse_bottom((NodeRefPtr *)&local_e8);
        *puVar2 = local_e8;
        puVar2[1] = uStack_e0;
        puVar2[2] = local_d8;
        puVar2[3] = uStack_d0;
      }
      puVar2 = puVar2 + 4;
      plVar3 = plVar3 + 1;
    } while (&local_48 != puVar2);
    auVar7 = minps(local_88,local_68);
    auVar5 = minps(local_c8,local_a8);
    auVar4 = maxps(local_b8,local_98);
    *(int *)(plVar1 + 4) = local_c8._0_4_;
    *(int *)((long)plVar1 + 0x24) = local_a8._0_4_;
    *(int *)(plVar1 + 5) = local_88._0_4_;
    *(int *)((long)plVar1 + 0x2c) = local_68._0_4_;
    auVar6 = maxps(local_78,local_58);
    *(int *)(plVar1 + 8) = local_c8._4_4_;
    *(int *)((long)plVar1 + 0x44) = local_a8._4_4_;
    *(int *)(plVar1 + 9) = local_88._4_4_;
    *(int *)((long)plVar1 + 0x4c) = local_68._4_4_;
    auVar5 = minps(auVar5,auVar7);
    *(int *)(plVar1 + 0xc) = local_c8._8_4_;
    *(int *)((long)plVar1 + 100) = local_a8._8_4_;
    *(int *)(plVar1 + 0xd) = local_88._8_4_;
    *(int *)((long)plVar1 + 0x6c) = local_68._8_4_;
    auVar4 = maxps(auVar4,auVar6);
    *(int *)(plVar1 + 6) = local_b8._0_4_;
    *(int *)((long)plVar1 + 0x34) = local_98._0_4_;
    *(int *)(plVar1 + 7) = local_78._0_4_;
    *(int *)((long)plVar1 + 0x3c) = local_58._0_4_;
    *(int *)(plVar1 + 10) = local_b8._4_4_;
    *(int *)((long)plVar1 + 0x54) = local_98._4_4_;
    *(int *)(plVar1 + 0xb) = local_78._4_4_;
    *(int *)((long)plVar1 + 0x5c) = local_58._4_4_;
    *(int *)(plVar1 + 0xe) = local_b8._8_4_;
    *(int *)((long)plVar1 + 0x74) = local_98._8_4_;
    *(int *)(plVar1 + 0xf) = local_78._8_4_;
    *(int *)((long)plVar1 + 0x7c) = local_58._8_4_;
    *(undefined1 (*) [16])param_1 = auVar5;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar4;
  }
  else {
    (**(code **)**(undefined8 **)(in_RSI + 8))();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102de5) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1}>(unsigned
   long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  Thread *pTVar17;
  long lVar18;
  Thread *pTVar19;
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
  pTVar19 = pTVar15 + 0x40;
  pTVar17 = pTVar19;
  do {
    *(undefined4 *)pTVar17 = 0;
    pTVar16 = pTVar17 + 0x80;
    *(undefined4 *)(pTVar17 + 0x40) = 0;
    pTVar17 = pTVar16;
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
  pTVar17 = (Thread *)embree::TaskScheduler::swapThread(pTVar15);
  if (*(ulong *)(pTVar15 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar15 + 0xc00c0);
    uVar3 = lVar4 + 0x38 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar15 + 0xc00c0) = uVar3;
      pTVar16 = pTVar15 + uVar3 + 0x40088;
      uVar7 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar16 = &PTR_execute_00103ec0;
      *(undefined8 *)(pTVar16 + 8) = uVar7;
      *(undefined8 *)(pTVar16 + 0x10) = uVar8;
      *(undefined8 *)(pTVar16 + 0x18) = uVar9;
      *(undefined8 *)(pTVar16 + 0x20) = uVar10;
      *(undefined8 *)(pTVar16 + 0x28) = uVar11;
      *(undefined8 *)(pTVar16 + 0x30) = uVar12;
      lVar18 = *(long *)(pTVar15 + 0x40080) * 0x40;
      lVar5 = *(long *)(pTVar15 + 0xc0100);
      pTVar15[lVar18 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar15 + lVar18 + 0x44) = 1;
      *(Thread **)(pTVar15 + lVar18 + 0x50) = pTVar16;
      *(long *)(pTVar15 + lVar18 + 0x58) = lVar5;
      *(TaskGroupContext **)(pTVar15 + lVar18 + 0x60) = param_2;
      *(long *)(pTVar15 + lVar18 + 0x68) = lVar4;
      *(ulong *)(pTVar15 + lVar18 + 0x70) = param_3;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar19 + lVar18) == 0) {
        *(undefined4 *)(pTVar19 + lVar18) = 1;
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
            pTVar16 = local_48 + 8;
            *(long *)pTVar16 = *(long *)pTVar16 + -1;
            UNLOCK();
            if (*(long *)pTVar16 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar13 = embree::TaskScheduler::TaskQueue::execute_local(pTVar19,(Task *)pTVar15);
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
      embree::TaskScheduler::swapThread(pTVar17);
      pTVar19 = *(Thread **)param_2;
      if (pTVar19 != (Thread *)0x0) {
        local_48 = pTVar19;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar19 = local_48;
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
      if (pTVar19 == (Thread *)0x0) {
        if (pTVar15 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar6 = *(long **)(pTVar15 + 0xc0108);
          if (plVar6 != (long *)0x0) {
            if (*(code **)(*plVar6 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar6 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
            else {
              (**(code **)(*plVar6 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar15);
            return;
          }
        }
      }
      else {
        local_48 = pTVar19;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1}>(unsigned
   long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitter<4>::refit() */

void __thiscall embree::sse2::BVHNRefitter<4>::refit(BVHNRefitter<4> *this)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  NodeRefPtr *pNVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  BVHNRefitter<4> *extraout_RDX;
  BVHNRefitter<4> *pBVar10;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var11;
  long lVar12;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var17;
  ulong *puVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  long local_21f0;
  long local_21e8;
  undefined8 uStack_21e0;
  undefined1 local_21d8 [16];
  _lambda_embree__range<unsigned_long>_const___1_ local_21c8 [16];
  undefined1 local_21b8 [16];
  undefined1 local_21a8 [16];
  undefined1 local_2198 [16];
  undefined1 local_2188 [16];
  undefined1 local_2178 [16];
  undefined1 local_2168 [16];
  undefined1 local_2158 [16];
  _lambda_embree__range<unsigned_long>_const___1_ local_2148 [16];
  undefined1 local_2138 [16];
  undefined1 local_2128 [16];
  undefined1 local_2118 [16];
  undefined1 local_2108 [16];
  undefined1 local_20f8 [16];
  undefined1 local_20e8 [16];
  undefined1 local_20d8 [16];
  _lambda_embree__range<unsigned_long>_const___1_ local_20c8 [16];
  undefined1 local_20b8 [16];
  undefined1 local_20a8 [16];
  undefined1 local_2098 [16];
  undefined1 local_2088 [16];
  undefined1 local_2078 [16];
  undefined1 local_2068 [16];
  undefined1 local_2058 [16];
  _lambda_embree__range<unsigned_long>_const___1_ local_2048 [4];
  undefined4 auStack_2044 [3];
  undefined4 auStack_2038 [2046];
  long local_40;
  
  lVar12 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(lVar12 + 0x1f0) < 0x1001) {
    recurse_bottom((NodeRefPtr *)&local_21e8);
  }
  else {
    *(undefined8 *)(this + 0x10) = 0;
    uVar1 = *(ulong *)(lVar12 + 0x70);
    uVar16 = (ulong)((uint)uVar1 & 0xf);
    if ((uVar1 & 0xf) == 0) {
      pBVar10 = this + 0x10;
      do {
        pNVar6 = *(NodeRefPtr **)(uVar1 + uVar16 * 8);
        if (pNVar6 != (NodeRefPtr *)0x8) {
          gather_subtree_refs(this,pNVar6,(ulong *)pBVar10,1);
          pBVar10 = extraout_RDX;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 4);
      if (*(ulong *)(this + 0x10) != 0) {
        local_21f0 = 0;
        TaskScheduler::
        spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>
                  ((TaskScheduler *)0x0,*(ulong *)(this + 0x10),1,(ulong)this,local_2048,
                   (TaskGroupContext *)&local_21f0);
        embree::TaskScheduler::wait();
        if (local_21f0 != 0) {
          local_21e8 = local_21f0;
          std::__exception_ptr::exception_ptr::_M_addref();
          std::rethrow_exception(&local_21e8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar12 = *(long *)this;
      }
    }
    *(undefined8 *)(this + 0x10) = 0;
    puVar2 = *(ulong **)(lVar12 + 0x70);
    if (((ulong)puVar2 & 0xf) == 0) {
      p_Var13 = local_21c8;
      puVar18 = puVar2;
      do {
        puVar3 = (ulong *)*puVar18;
        if (puVar3 == (ulong *)0x8) {
          *(undefined4 *)&p_Var13->field_0x0 = _LC1;
          *(undefined4 *)(p_Var13 + 4) = _LC1;
          *(undefined4 *)(p_Var13 + 8) = _LC1;
          *(undefined4 *)(p_Var13 + 0xc) = _LC1;
          *(undefined4 *)&p_Var13[0x10].field_0x0 = _LC3;
          *(undefined4 *)(p_Var13 + 0x14) = _LC3;
          *(undefined4 *)(p_Var13 + 0x18) = _LC3;
          *(undefined4 *)(p_Var13 + 0x1c) = _LC3;
        }
        else {
          if (((ulong)puVar3 & 0xf) == 0) {
            puVar14 = puVar3;
            p_Var17 = local_2148;
            do {
              puVar4 = (ulong *)*puVar14;
              if (puVar4 == (ulong *)0x8) {
                *(undefined4 *)&p_Var17->field_0x0 = _LC1;
                *(undefined4 *)(p_Var17 + 4) = _LC1;
                *(undefined4 *)(p_Var17 + 8) = _LC1;
                *(undefined4 *)(p_Var17 + 0xc) = _LC1;
                *(undefined4 *)&p_Var17[0x10].field_0x0 = _LC3;
                *(undefined4 *)(p_Var17 + 0x14) = _LC3;
                *(undefined4 *)(p_Var17 + 0x18) = _LC3;
                *(undefined4 *)(p_Var17 + 0x1c) = _LC3;
              }
              else {
                if (((ulong)puVar4 & 0xf) == 0) {
                  p_Var11 = local_20c8;
                  puVar15 = puVar4;
                  do {
                    plVar5 = (long *)*puVar15;
                    if (plVar5 == (long *)0x8) {
                      *(undefined4 *)&p_Var11->field_0x0 = _LC1;
                      *(undefined4 *)(p_Var11 + 4) = _LC1;
                      *(undefined4 *)(p_Var11 + 8) = _LC1;
                      *(undefined4 *)(p_Var11 + 0xc) = _LC1;
                      *(undefined4 *)&p_Var11[0x10].field_0x0 = _LC3;
                      *(undefined4 *)(p_Var11 + 0x14) = _LC3;
                      *(undefined4 *)(p_Var11 + 0x18) = _LC3;
                      *(undefined4 *)(p_Var11 + 0x1c) = _LC3;
                    }
                    else {
                      if (((ulong)plVar5 & 0xf) == 0) {
                        if (*plVar5 == 8) {
                          auVar20._4_4_ = _LC3;
                          auVar20._0_4_ = _LC3;
                          auVar20._8_4_ = _LC3;
                          auVar20._12_4_ = _LC3;
                          auVar26._4_4_ = _LC1;
                          auVar26._0_4_ = _LC1;
                          auVar26._8_4_ = _LC1;
                          auVar26._12_4_ = _LC1;
                        }
                        else {
                          lVar12 = *(long *)(this + 0x10);
                          *(long *)(this + 0x10) = lVar12 + 1;
                          auVar26 = *(undefined1 (*) [16])(local_2048 + lVar12 * 0x20);
                          auVar20 = *(undefined1 (*) [16])(auStack_2038 + lVar12 * 8);
                        }
                        uVar28 = _LC3;
                        uVar29 = _LC3;
                        uVar30 = _LC3;
                        uVar31 = _LC3;
                        uVar36 = _LC1;
                        uVar37 = _LC1;
                        uVar38 = _LC1;
                        uVar39 = _LC1;
                        if (plVar5[1] != 8) {
                          lVar12 = *(long *)(this + 0x10);
                          *(long *)(this + 0x10) = lVar12 + 1;
                          uVar28 = auStack_2038[lVar12 * 8];
                          uVar29 = auStack_2038[lVar12 * 8 + 1];
                          uVar30 = auStack_2038[lVar12 * 8 + 2];
                          uVar31 = auStack_2038[lVar12 * 8 + 3];
                          uVar36 = *(undefined4 *)&local_2048[lVar12 * 0x20].field_0x0;
                          uVar37 = auStack_2044[lVar12 * 8];
                          uVar38 = auStack_2044[lVar12 * 8 + 1];
                          uVar39 = auStack_2038[lVar12 * 8 + -1];
                        }
                        if (plVar5[2] == 8) {
                          auVar24._4_4_ = _LC3;
                          auVar24._0_4_ = _LC3;
                          auVar24._8_4_ = _LC3;
                          auVar24._12_4_ = _LC3;
                          auVar27._4_4_ = _LC1;
                          auVar27._0_4_ = _LC1;
                          auVar27._8_4_ = _LC1;
                          auVar27._12_4_ = _LC1;
                        }
                        else {
                          lVar12 = *(long *)(this + 0x10);
                          *(long *)(this + 0x10) = lVar12 + 1;
                          auVar27 = *(undefined1 (*) [16])(local_2048 + lVar12 * 0x20);
                          auVar24 = *(undefined1 (*) [16])(auStack_2038 + lVar12 * 8);
                        }
                        uVar32 = _LC3;
                        uVar33 = _LC3;
                        uVar34 = _LC3;
                        uVar35 = _LC3;
                        uVar40 = _LC1;
                        uVar41 = _LC1;
                        uVar42 = _LC1;
                        uVar43 = _LC1;
                        if (plVar5[3] != 8) {
                          lVar12 = *(long *)(this + 0x10);
                          *(long *)(this + 0x10) = lVar12 + 1;
                          uVar32 = auStack_2038[lVar12 * 8];
                          uVar33 = auStack_2038[lVar12 * 8 + 1];
                          uVar34 = auStack_2038[lVar12 * 8 + 2];
                          uVar35 = auStack_2038[lVar12 * 8 + 3];
                          uVar40 = *(undefined4 *)&local_2048[lVar12 * 0x20].field_0x0;
                          uVar41 = auStack_2044[lVar12 * 8];
                          uVar42 = auStack_2044[lVar12 * 8 + 1];
                          uVar43 = auStack_2038[lVar12 * 8 + -1];
                        }
                        auVar9._4_4_ = uVar41;
                        auVar9._0_4_ = uVar40;
                        auVar9._8_4_ = uVar42;
                        auVar9._12_4_ = uVar43;
                        auVar25 = minps(auVar27,auVar9);
                        *(int *)(plVar5 + 4) = auVar26._0_4_;
                        *(undefined4 *)((long)plVar5 + 0x24) = uVar36;
                        *(int *)(plVar5 + 5) = auVar27._0_4_;
                        *(undefined4 *)((long)plVar5 + 0x2c) = uVar40;
                        auVar8._4_4_ = uVar37;
                        auVar8._0_4_ = uVar36;
                        auVar8._8_4_ = uVar38;
                        auVar8._12_4_ = uVar39;
                        auVar21 = minps(auVar26,auVar8);
                        *(int *)(plVar5 + 8) = auVar26._4_4_;
                        *(undefined4 *)((long)plVar5 + 0x44) = uVar37;
                        *(int *)(plVar5 + 9) = auVar27._4_4_;
                        *(undefined4 *)((long)plVar5 + 0x4c) = uVar41;
                        auVar23._4_4_ = uVar33;
                        auVar23._0_4_ = uVar32;
                        auVar23._8_4_ = uVar34;
                        auVar23._12_4_ = uVar35;
                        auVar23 = maxps(auVar24,auVar23);
                        auVar7._4_4_ = uVar29;
                        auVar7._0_4_ = uVar28;
                        auVar7._8_4_ = uVar30;
                        auVar7._12_4_ = uVar31;
                        auVar19 = maxps(auVar20,auVar7);
                        *(int *)(plVar5 + 0xc) = auVar26._8_4_;
                        *(undefined4 *)((long)plVar5 + 100) = uVar38;
                        *(int *)(plVar5 + 0xd) = auVar27._8_4_;
                        *(undefined4 *)((long)plVar5 + 0x6c) = uVar42;
                        auVar25 = minps(auVar21,auVar25);
                        auVar19 = maxps(auVar19,auVar23);
                        *(int *)(plVar5 + 6) = auVar20._0_4_;
                        *(undefined4 *)((long)plVar5 + 0x34) = uVar28;
                        *(int *)(plVar5 + 7) = auVar24._0_4_;
                        *(undefined4 *)((long)plVar5 + 0x3c) = uVar32;
                        *(int *)(plVar5 + 10) = auVar20._4_4_;
                        *(undefined4 *)((long)plVar5 + 0x54) = uVar29;
                        *(int *)(plVar5 + 0xb) = auVar24._4_4_;
                        *(undefined4 *)((long)plVar5 + 0x5c) = uVar33;
                        *(int *)(plVar5 + 0xe) = auVar20._8_4_;
                        *(undefined4 *)((long)plVar5 + 0x74) = uVar30;
                        *(int *)(plVar5 + 0xf) = auVar24._8_4_;
                        *(undefined4 *)((long)plVar5 + 0x7c) = uVar34;
                      }
                      else {
                        (**(code **)**(undefined8 **)(this + 8))
                                  (&local_21e8,*(undefined8 **)(this + 8),puVar15);
                        auVar25._8_8_ = uStack_21e0;
                        auVar25._0_8_ = local_21e8;
                        auVar19 = local_21d8;
                      }
                      *(undefined1 (*) [16])p_Var11 = auVar25;
                      *(undefined1 (*) [16])(p_Var11 + 0x10) = auVar19;
                    }
                    p_Var11 = p_Var11 + 0x20;
                    puVar15 = puVar15 + 1;
                  } while (local_2048 != p_Var11);
                  auVar26 = minps(local_2088,local_2068);
                  auVar21 = minps((undefined1  [16])local_20c8,local_20a8);
                  auVar19 = maxps(local_20b8,local_2098);
                  *(int *)(puVar4 + 4) = local_20c8._0_4_;
                  *(int *)((long)puVar4 + 0x24) = local_20a8._0_4_;
                  *(int *)(puVar4 + 5) = local_2088._0_4_;
                  *(int *)((long)puVar4 + 0x2c) = local_2068._0_4_;
                  auVar25 = maxps(local_2078,local_2058);
                  *(int *)(puVar4 + 8) = local_20c8._4_4_;
                  *(int *)((long)puVar4 + 0x44) = local_20a8._4_4_;
                  *(int *)(puVar4 + 9) = local_2088._4_4_;
                  *(int *)((long)puVar4 + 0x4c) = local_2068._4_4_;
                  auVar21 = minps(auVar21,auVar26);
                  *(int *)(puVar4 + 0xc) = local_20c8._8_4_;
                  *(int *)((long)puVar4 + 100) = local_20a8._8_4_;
                  *(int *)(puVar4 + 0xd) = local_2088._8_4_;
                  *(int *)((long)puVar4 + 0x6c) = local_2068._8_4_;
                  auVar19 = maxps(auVar19,auVar25);
                  *(int *)(puVar4 + 6) = local_20b8._0_4_;
                  *(int *)((long)puVar4 + 0x34) = local_2098._0_4_;
                  *(int *)(puVar4 + 7) = local_2078._0_4_;
                  *(int *)((long)puVar4 + 0x3c) = local_2058._0_4_;
                  *(int *)(puVar4 + 10) = local_20b8._4_4_;
                  *(int *)((long)puVar4 + 0x54) = local_2098._4_4_;
                  *(int *)(puVar4 + 0xb) = local_2078._4_4_;
                  *(int *)((long)puVar4 + 0x5c) = local_2058._4_4_;
                  *(int *)(puVar4 + 0xe) = local_20b8._8_4_;
                  *(int *)((long)puVar4 + 0x74) = local_2098._8_4_;
                  *(int *)(puVar4 + 0xf) = local_2078._8_4_;
                  *(int *)((long)puVar4 + 0x7c) = local_2058._8_4_;
                }
                else {
                  (**(code **)**(undefined8 **)(this + 8))
                            (&local_21e8,*(undefined8 **)(this + 8),puVar14);
                  auVar21._8_8_ = uStack_21e0;
                  auVar21._0_8_ = local_21e8;
                  auVar19 = local_21d8;
                }
                *(undefined1 (*) [16])p_Var17 = auVar21;
                *(undefined1 (*) [16])(p_Var17 + 0x10) = auVar19;
              }
              p_Var17 = p_Var17 + 0x20;
              puVar14 = puVar14 + 1;
            } while (local_20c8 != p_Var17);
            auVar25 = minps(local_2108,local_20e8);
            auVar19 = minps((undefined1  [16])local_2148,local_2128);
            *(int *)(puVar3 + 8) = local_2148._4_4_;
            *(int *)((long)puVar3 + 0x44) = local_2128._4_4_;
            *(int *)(puVar3 + 9) = local_2108._4_4_;
            *(int *)((long)puVar3 + 0x4c) = local_20e8._4_4_;
            auVar21 = maxps(local_2138,local_2118);
            *(int *)(puVar3 + 4) = local_2148._0_4_;
            *(int *)((long)puVar3 + 0x24) = local_2128._0_4_;
            *(int *)(puVar3 + 5) = local_2108._0_4_;
            *(int *)((long)puVar3 + 0x2c) = local_20e8._0_4_;
            *(int *)(puVar3 + 0xc) = local_2148._8_4_;
            *(int *)((long)puVar3 + 100) = local_2128._8_4_;
            *(int *)(puVar3 + 0xd) = local_2108._8_4_;
            *(int *)((long)puVar3 + 0x6c) = local_20e8._8_4_;
            auVar19 = minps(auVar19,auVar25);
            auVar25 = maxps(local_20f8,local_20d8);
            *(int *)(puVar3 + 10) = local_2138._4_4_;
            *(int *)((long)puVar3 + 0x54) = local_2118._4_4_;
            *(int *)(puVar3 + 0xb) = local_20f8._4_4_;
            *(int *)((long)puVar3 + 0x5c) = local_20d8._4_4_;
            auVar21 = maxps(auVar21,auVar25);
            *(int *)(puVar3 + 6) = local_2138._0_4_;
            *(int *)((long)puVar3 + 0x34) = local_2118._0_4_;
            *(int *)(puVar3 + 7) = local_20f8._0_4_;
            *(int *)((long)puVar3 + 0x3c) = local_20d8._0_4_;
            *(int *)(puVar3 + 0xe) = local_2138._8_4_;
            *(int *)((long)puVar3 + 0x74) = local_2118._8_4_;
            *(int *)(puVar3 + 0xf) = local_20f8._8_4_;
            *(int *)((long)puVar3 + 0x7c) = local_20d8._8_4_;
          }
          else {
            (**(code **)**(undefined8 **)(this + 8))(&local_21e8,*(undefined8 **)(this + 8),puVar18)
            ;
            auVar19._8_8_ = uStack_21e0;
            auVar19._0_8_ = local_21e8;
            auVar21 = local_21d8;
          }
          *(undefined1 (*) [16])p_Var13 = auVar19;
          *(undefined1 (*) [16])(p_Var13 + 0x10) = auVar21;
        }
        p_Var13 = p_Var13 + 0x20;
        puVar18 = puVar18 + 1;
      } while (local_2148 != p_Var13);
      auVar26 = minps(local_2188,local_2168);
      auVar21 = minps((undefined1  [16])local_21c8,local_21a8);
      auVar19 = maxps(local_21b8,local_2198);
      *(int *)(puVar2 + 4) = local_21c8._0_4_;
      *(int *)((long)puVar2 + 0x24) = local_21a8._0_4_;
      *(int *)(puVar2 + 5) = local_2188._0_4_;
      *(int *)((long)puVar2 + 0x2c) = local_2168._0_4_;
      auVar25 = maxps(local_2178,local_2158);
      *(int *)(puVar2 + 8) = local_21c8._4_4_;
      *(int *)((long)puVar2 + 0x44) = local_21a8._4_4_;
      *(int *)(puVar2 + 9) = local_2188._4_4_;
      *(int *)((long)puVar2 + 0x4c) = local_2168._4_4_;
      auVar22 = minps(auVar21,auVar26);
      *(int *)(puVar2 + 0xc) = local_21c8._8_4_;
      *(int *)((long)puVar2 + 100) = local_21a8._8_4_;
      *(int *)(puVar2 + 0xd) = local_2188._8_4_;
      *(int *)((long)puVar2 + 0x6c) = local_2168._8_4_;
      local_21d8 = maxps(auVar19,auVar25);
      *(int *)(puVar2 + 6) = local_21b8._0_4_;
      *(int *)((long)puVar2 + 0x34) = local_2198._0_4_;
      *(int *)(puVar2 + 7) = local_2178._0_4_;
      *(int *)((long)puVar2 + 0x3c) = local_2158._0_4_;
      *(int *)(puVar2 + 10) = local_21b8._4_4_;
      *(int *)((long)puVar2 + 0x54) = local_2198._4_4_;
      *(int *)(puVar2 + 0xb) = local_2178._4_4_;
      *(int *)((long)puVar2 + 0x5c) = local_2158._4_4_;
      *(int *)(puVar2 + 0xe) = local_21b8._8_4_;
      *(int *)((long)puVar2 + 0x74) = local_2198._8_4_;
      *(int *)(puVar2 + 0xf) = local_2178._8_4_;
      *(int *)((long)puVar2 + 0x7c) = local_2158._8_4_;
      goto LAB_00102fbe;
    }
    (**(code **)**(undefined8 **)(this + 8))(&local_21e8,*(undefined8 **)(this + 8),lVar12 + 0x70);
  }
  auVar22._8_8_ = uStack_21e0;
  auVar22._0_8_ = local_21e8;
LAB_00102fbe:
  lVar12 = *(long *)this;
  *(undefined1 (*) [16])(lVar12 + 0x10) = auVar22;
  *(undefined1 (*) [16])(lVar12 + 0x20) = local_21d8;
  *(undefined1 (*) [16])(lVar12 + 0x30) = auVar22;
  *(undefined1 (*) [16])(lVar12 + 0x40) = local_21d8;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::build() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::build
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  if (*(uint *)(this + 0x38) < *(uint *)(*(long *)(this + 0x30) + 0x74)) {
    *(uint *)(this + 0x38) = *(uint *)(*(long *)(this + 0x30) + 0x74);
                    /* WARNING: Could not recover jumptable at 0x0010370a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x20))();
    return;
  }
  BVHNRefitter<4>::refit(*(BVHNRefitter<4> **)(this + 0x28));
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::build() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::build
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  if (*(uint *)(this + 0x38) < *(uint *)(*(long *)(this + 0x30) + 0x74)) {
    *(uint *)(this + 0x38) = *(uint *)(*(long *)(this + 0x30) + 0x74);
                    /* WARNING: Could not recover jumptable at 0x0010373a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x20))();
    return;
  }
  BVHNRefitter<4>::refit(*(BVHNRefitter<4> **)(this + 0x28));
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::build() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::build
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  if (*(uint *)(this + 0x38) < *(uint *)(*(long *)(this + 0x30) + 0x74)) {
    *(uint *)(this + 0x38) = *(uint *)(*(long *)(this + 0x30) + 0x74);
                    /* WARNING: Could not recover jumptable at 0x0010376a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x20))();
    return;
  }
  BVHNRefitter<4>::refit(*(BVHNRefitter<4> **)(this + 0x28));
  return;
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1}>(unsigned
   long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  undefined8 *puVar2;
  TaskGroupContext *pTVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  TaskScheduler *pTVar9;
  ulong uVar10;
  TaskScheduler *this_00;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_68;
  ulong uStack_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  TaskGroupContext *pTStack_40;
  long local_30;
  
  pTVar9 = *(TaskScheduler **)(this + 8);
  this_00 = *(TaskScheduler **)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < (ulong)((long)pTVar9 - (long)this_00)) {
    uVar11 = (ulong)(pTVar9 + (long)this_00) >> 1;
    spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>
              (this_00,uVar11,*(ulong *)(this + 0x18),*(ulong *)(this + 0x20),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x28),
               *(TaskGroupContext **)(this + 0x30));
    local_68 = *(long *)(this + 8);
    lStack_50 = *(long *)(this + 0x20);
    pTVar3 = *(TaskGroupContext **)(this + 0x30);
    local_58 = *(long *)(this + 0x18);
    local_48 = *(undefined8 *)(this + 0x28);
    uVar10 = local_68 - uVar11;
    uStack_60 = uVar11;
    pTStack_40 = pTVar3;
    lVar6 = embree::TaskScheduler::thread();
    if (lVar6 == 0) {
      pTVar9 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar9,(_lambda___1_ *)&local_68,pTVar3,uVar10,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar6 + 0x40080)) {
LAB_001039ce:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = *(long *)(lVar6 + 0xc00c0);
      uVar11 = lVar4 + 0x38 + (ulong)(-(int)lVar4 & 0x3f);
      if (0x80000 < uVar11) goto LAB_001039ce;
      *(ulong *)(lVar6 + 0xc00c0) = uVar11;
      puVar2 = (undefined8 *)(lVar6 + 0x40088 + uVar11);
      *puVar2 = &PTR_execute_00103ec0;
      puVar2[1] = local_68;
      puVar2[2] = uStack_60;
      puVar2[3] = local_58;
      puVar2[4] = lStack_50;
      puVar2[5] = local_48;
      puVar2[6] = pTStack_40;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar2;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = pTVar3;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = uVar10;
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
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    for (; this_00 < pTVar9; this_00 = this_00 + 1) {
      sse2::BVHNRefitter<4>::recurse_bottom((NodeRefPtr *)&local_68);
      plVar8 = (long *)((long)this_00 * 0x20 + *(long *)(this + 0x28));
      *plVar8 = local_68;
      plVar8[1] = uStack_60;
      plVar8[2] = local_58;
      plVar8[3] = lStack_50;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitter<4>::BVHNRefitter(embree::BVHN<4>*,
   embree::sse2::BVHNRefitter<4>::LeafBoundsInterface const&) */

void embree::sse2::BVHNRefitter<4>::BVHNRefitter(BVHN *param_1,LeafBoundsInterface *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


