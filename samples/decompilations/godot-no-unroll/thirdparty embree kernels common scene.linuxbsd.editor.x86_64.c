
/* embree::Scene::clear() */

void embree::Scene::clear(void)

{
  return;
}



/* embree::Scene::progressMonitor(double) [clone .part.0] */

void __thiscall embree::Scene::progressMonitor(Scene *this,double param_1)

{
  Scene *pSVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  
  if (_LC0 <= param_1) {
    uVar4 = (long)(param_1 - _LC0) ^ 0x8000000000000000;
  }
  else {
    uVar4 = (ulong)param_1;
  }
  LOCK();
  pSVar1 = this + 0x278;
  lVar2 = *(long *)pSVar1;
  *(ulong *)pSVar1 = *(long *)pSVar1 + uVar4;
  UNLOCK();
  cVar3 = (**(code **)(this + 0x268))
                    ((double)(lVar2 + uVar4) /
                     (double)(ulong)(*(long *)(this + 0x298) + *(long *)(this + 0x288) +
                                     *(long *)(this + 0x2a8) + *(long *)(this + 0x2b8) +
                                     *(long *)(this + 0x2c8) + *(long *)(this + 0x2d8) +
                                     *(long *)(this + 0x2e8) + *(long *)(this + 0x2f8) +
                                     *(long *)(this + 0x308) + *(long *)(this + 0x318) +
                                     *(long *)(this + 0x338) + *(long *)(this + 0x290) +
                                     *(long *)(this + 0x2a0) + *(long *)(this + 0x2b0) +
                                     *(long *)(this + 0x2c0) + *(long *)(this + 0x2d0) +
                                     *(long *)(this + 0x2e0) + *(long *)(this + 0x2f0) +
                                     *(long *)(this + 0x300) + *(long *)(this + 0x310) +
                                     *(long *)(this + 800) + *(long *)(this + 0x340)),
                     *(undefined8 *)(this + 0x270));
  if (cVar3 != '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::parallel_reduce<unsigned long, embree::GeometryCounts,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1},
   std::plus<embree::GeometryCounts> >(unsigned long, unsigned long, embree::GeometryCounts const&,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1} const&,
   std::plus<embree::GeometryCounts> const&)::{lambda(embree::range<unsigned
   long>)#1}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long>) const */

_lambda_embree__range<unsigned_long>__1_ * __thiscall
embree::
parallel_reduce<unsigned_long,embree::GeometryCounts,embree::Scene::commit_task()::{lambda(embree::range<unsigned_long>const&)#1},std::plus<embree::GeometryCounts>>(unsigned_long,unsigned_long,embree::GeometryCounts_const&,embree::Scene::commit_task()::{lambda(embree::range<unsigned_long>const&)#1}const&,std::plus<embree::GeometryCounts>const&)
::{lambda(embree::range<unsigned_long>)#1}::operator()
          (_lambda_embree__range<unsigned_long>__1_ *this,long *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long in_FS_OFFSET;
  ulong local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)*param_2;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[4];
  uVar8 = puVar1[5];
  uVar9 = puVar1[6];
  uVar10 = puVar1[7];
  uVar11 = puVar1[8];
  uVar12 = puVar1[9];
  uVar13 = puVar1[10];
  uVar14 = puVar1[0xb];
  *(undefined8 *)this = *puVar1;
  *(undefined8 *)(this + 8) = uVar4;
  uVar4 = puVar1[0xc];
  uVar15 = puVar1[0xd];
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined8 *)(this + 0x20) = uVar7;
  *(undefined8 *)(this + 0x28) = uVar8;
  *(undefined8 *)(this + 0x30) = uVar9;
  *(undefined8 *)(this + 0x38) = uVar10;
  *(undefined8 *)(this + 0x40) = uVar11;
  *(undefined8 *)(this + 0x48) = uVar12;
  *(undefined8 *)(this + 0x50) = uVar13;
  *(undefined8 *)(this + 0x58) = uVar14;
  *(undefined8 *)(this + 0x60) = uVar4;
  *(undefined8 *)(this + 0x68) = uVar15;
  uVar8 = puVar1[0xf];
  uVar4 = puVar1[0x10];
  uVar5 = puVar1[0x11];
  uVar6 = puVar1[0x12];
  uVar7 = puVar1[0x13];
  uVar9 = puVar1[0x14];
  uVar10 = puVar1[0x15];
  uVar11 = puVar1[0x16];
  uVar12 = puVar1[0x17];
  lVar22 = puVar1[0x18];
  *(undefined8 *)(this + 0x70) = puVar1[0xe];
  *(undefined8 *)(this + 0x78) = uVar8;
  local_1e0 = *param_3;
  *(undefined8 *)(this + 0x80) = uVar4;
  *(undefined8 *)(this + 0x88) = uVar5;
  *(long *)(this + 0xc0) = lVar22;
  *(undefined8 *)(this + 0x90) = uVar6;
  *(undefined8 *)(this + 0x98) = uVar7;
  *(undefined8 *)(this + 0xa0) = uVar9;
  *(undefined8 *)(this + 0xa8) = uVar10;
  *(undefined8 *)(this + 0xb0) = uVar11;
  *(undefined8 *)(this + 0xb8) = uVar12;
  if (local_1e0 < param_3[1]) {
    local_1d8 = *(long *)this;
    local_1c0 = *(long *)(this + 0x78);
    lVar24 = *(long *)(this + 0x70);
    lVar25 = *(long *)(this + 0x80);
    lVar26 = *(long *)(this + 0x88);
    local_168 = *(long *)(this + 0x90);
    local_1d0 = *(long *)(this + 8);
    lVar23 = *(long *)(this + 0x68);
    local_1b8 = *(long *)(this + 0x10);
    local_1b0 = *(long *)(this + 0x18);
    local_1a8 = *(long *)(this + 0x20);
    local_1a0 = *(long *)(this + 0x28);
    local_198 = *(long *)(this + 0x30);
    local_190 = *(long *)(this + 0x38);
    local_188 = *(long *)(this + 0x40);
    local_180 = *(long *)(this + 0x48);
    local_178 = *(long *)(this + 0x50);
    local_170 = *(long *)(this + 0x58);
    local_1c8 = *(long *)(this + 0x60);
    local_160 = *(long *)(this + 0x98);
    lVar17 = *(long *)(this + 0xb0);
    lVar21 = *(long *)(this + 0xb8);
    lVar18 = *(long *)(this + 0xa0);
    lVar16 = *(long *)(this + 0xa8);
    do {
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      plVar19 = (long *)param_2[2];
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      plVar2 = *(long **)(*(long *)(*plVar19 + 0x1e0) + local_1e0 * 8);
      if ((plVar2 != (long *)0x0) && ((*(byte *)((long)plVar2 + 0x3e) & 0x20) != 0)) {
        (**(code **)(*plVar2 + 0x68))();
        plVar2 = *(long **)(*(long *)(*plVar19 + 0x1e0) + local_1e0 * 8);
        (**(code **)(*plVar2 + 0x78))(plVar2,&local_108);
        plVar19 = (long *)(local_1e0 * 8 + *(long *)(*plVar19 + 0x1e0));
        lVar3 = *plVar19;
        uVar20 = 1;
        if (*(long *)(lVar3 + 0x40) == 0) {
          uVar20 = (ulong)(*(long *)(lVar3 + 0x48) != 0);
        }
        local_108 = (ulong)(*(byte *)(*plVar19 + 0x3e) >> 6 & 1) + local_108 + uVar20;
      }
      local_1d8 = local_1d8 + local_108;
      local_1d0 = local_1d0 + local_100;
      local_1b8 = local_1b8 + local_f8;
      local_1b0 = local_1b0 + local_f0;
      local_1a8 = local_1a8 + local_e8;
      local_1a0 = local_1a0 + local_e0;
      local_198 = local_198 + local_d8;
      local_190 = local_190 + local_d0;
      local_188 = local_188 + local_c8;
      local_180 = local_180 + local_c0;
      *(long *)this = local_1d8;
      *(long *)(this + 8) = local_1d0;
      local_178 = local_178 + local_b8;
      local_1c0 = local_1c0 + local_90;
      local_168 = local_168 + local_78;
      local_170 = local_170 + local_b0;
      lVar23 = lVar23 + local_a0;
      local_1c8 = local_1c8 + local_a8;
      lVar24 = lVar24 + local_98;
      lVar25 = lVar25 + local_88;
      lVar26 = lVar26 + local_80;
      lVar18 = lVar18 + local_68;
      lVar16 = lVar16 + local_60;
      lVar17 = lVar17 + local_58;
      lVar21 = lVar21 + local_50;
      lVar22 = lVar22 + local_48;
      local_160 = local_160 + local_70;
      *(long *)(this + 0x10) = local_1b8;
      *(long *)(this + 0x60) = local_1c8;
      *(long *)(this + 0x20) = local_1a8;
      *(long *)(this + 0x18) = local_1b0;
      *(long *)(this + 0x30) = local_198;
      *(long *)(this + 0x28) = local_1a0;
      *(long *)(this + 0x40) = local_188;
      *(long *)(this + 0x38) = local_190;
      *(long *)(this + 0x50) = local_178;
      *(long *)(this + 0x48) = local_180;
      *(long *)(this + 0x90) = local_168;
      *(long *)(this + 0x58) = local_170;
      *(long *)(this + 0x98) = local_160;
      *(long *)(this + 0x68) = lVar23;
      *(long *)(this + 0x70) = lVar24;
      *(long *)(this + 0x78) = local_1c0;
      *(long *)(this + 0x80) = lVar25;
      *(long *)(this + 0x88) = lVar26;
      *(long *)(this + 0xa0) = lVar18;
      *(long *)(this + 0xa8) = lVar16;
      *(long *)(this + 0xb0) = lVar17;
      *(long *)(this + 0xb8) = lVar21;
      *(long *)(this + 0xc0) = lVar22;
      local_1e0 = local_1e0 + 1;
    } while (local_1e0 < param_3[1]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Rb_tree<unsigned int, unsigned int, std::_Identity<unsigned int>, std::less<unsigned int>,
   std::allocator<unsigned int> >::_M_erase(std::_Rb_tree_node<unsigned int>*) [clone .isra.0] */

void std::
     _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  _Rb_tree_node *p_Var9;
  void *pvVar10;
  _Rb_tree_node *local_48;
  
  local_48 = param_1;
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      pvVar10 = *(void **)(local_48 + 0x18);
      while (pvVar10 != (void *)0x0) {
        pvVar8 = *(void **)((long)pvVar10 + 0x18);
        while (pvVar8 != (void *)0x0) {
          pvVar7 = *(void **)((long)pvVar8 + 0x18);
          while (pvVar7 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar7 + 0x18);
            while (pvVar5 != (void *)0x0) {
              pvVar3 = *(void **)((long)pvVar5 + 0x18);
              while (pvVar3 != (void *)0x0) {
                pvVar4 = *(void **)((long)pvVar3 + 0x18);
                while (pvVar4 != (void *)0x0) {
                  pvVar6 = *(void **)((long)pvVar4 + 0x18);
                  while (pvVar6 != (void *)0x0) {
                    pvVar2 = *(void **)((long)pvVar6 + 0x18);
                    while (pvVar2 != (void *)0x0) {
                      _M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
                      pvVar1 = *(void **)((long)pvVar2 + 0x10);
                      operator_delete(pvVar2,0x28);
                      pvVar2 = pvVar1;
                    }
                    pvVar2 = *(void **)((long)pvVar6 + 0x10);
                    operator_delete(pvVar6,0x28);
                    pvVar6 = pvVar2;
                  }
                  pvVar6 = *(void **)((long)pvVar4 + 0x10);
                  operator_delete(pvVar4,0x28);
                  pvVar4 = pvVar6;
                }
                pvVar4 = *(void **)((long)pvVar3 + 0x10);
                operator_delete(pvVar3,0x28);
                pvVar3 = pvVar4;
              }
              pvVar3 = *(void **)((long)pvVar5 + 0x10);
              operator_delete(pvVar5,0x28);
              pvVar5 = pvVar3;
            }
            pvVar5 = *(void **)((long)pvVar7 + 0x10);
            operator_delete(pvVar7,0x28);
            pvVar7 = pvVar5;
          }
          pvVar7 = *(void **)((long)pvVar8 + 0x10);
          operator_delete(pvVar8,0x28);
          pvVar8 = pvVar7;
        }
        pvVar8 = *(void **)((long)pvVar10 + 0x10);
        operator_delete(pvVar10,0x28);
        pvVar10 = pvVar8;
      }
      p_Var9 = *(_Rb_tree_node **)(local_48 + 0x10);
      operator_delete(local_48,0x28);
      local_48 = p_Var9;
    } while (p_Var9 != (_Rb_tree_node *)0x0);
  }
  return;
}



/* embree::Scene::~Scene() */

void __thiscall embree::Scene::~Scene(Scene *this)

{
  long *plVar1;
  long *plVar2;
  MutexSys *this_00;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  
  *(undefined ***)this = &PTR__Scene_00105c68;
  plVar2 = *(long **)(this + 0x188);
  if (*(code **)(*plVar2 + 0x18) == RefCount::refDec) {
    LOCK();
    plVar1 = plVar2 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if ((plVar2 != (long *)0x0) && (*plVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  else {
    (**(code **)(*plVar2 + 0x18))();
  }
  this_00 = *(MutexSys **)(this + 0x250);
  if (this_00 != (MutexSys *)0x0) {
    plVar2 = *(long **)(this_00 + 8);
    if (plVar2 != (long *)0x0) {
      if (*(code **)(*plVar2 + 0x18) == RefCount::refDec) {
        LOCK();
        plVar1 = plVar2 + 1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    embree::MutexSys::~MutexSys(this_00);
    operator_delete(this_00,0x10);
  }
  embree::MutexSys::~MutexSys((MutexSys *)(this + 0x240));
  embree::MutexSys::~MutexSys((MutexSys *)(this + 0x238));
  plVar2 = *(long **)(this + 0x208);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined8 *)(this + 0x220));
  }
  embree::alignedFree(*(void **)(this + 0x200));
  if (*(long *)(this + 0x1d0) != 0) {
    uVar5 = 0;
LAB_00100aab:
    do {
      plVar2 = *(long **)(*(long *)(this + 0x1e0) + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        if (*(code **)(*plVar2 + 0x18) != RefCount::refDec) {
          (**(code **)(*plVar2 + 0x18))();
          uVar5 = uVar5 + 1;
          if (*(ulong *)(this + 0x1d0) <= uVar5) break;
          goto LAB_00100aab;
        }
        LOCK();
        plVar1 = plVar2 + 1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(this + 0x1d0));
  }
  plVar2 = *(long **)(this + 0x1c8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined8 *)(this + 0x1e0));
  }
  pvVar4 = *(void **)(this + 0x1a0);
  while (pvVar4 != (void *)0x0) {
    std::
    _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar4 + 0x18));
    pvVar3 = *(void **)((long)pvVar4 + 0x10);
    operator_delete(pvVar4,0x28);
    pvVar4 = pvVar3;
  }
  embree::AccelN::~AccelN((AccelN *)this);
  return;
}



/* embree::Scene::~Scene() */

void __thiscall embree::Scene::~Scene(Scene *this)

{
  ~Scene(this);
  embree::alignedUSMFree(this);
  return;
}



/* embree::GeometryCounts embree::parallel_reduce_internal<unsigned long, embree::GeometryCounts,
   embree::parallel_reduce<unsigned long, embree::GeometryCounts,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1},
   std::plus<embree::GeometryCounts> >(unsigned long, unsigned long, embree::GeometryCounts const&,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1} const&,
   std::plus<embree::GeometryCounts> const&)::{lambda(embree::range<unsigned long>)#1},
   std::plus<embree::GeometryCounts> >(unsigned long, unsigned long, unsigned long, unsigned long,
   embree::GeometryCounts const&, embree::parallel_reduce<unsigned long, embree::GeometryCounts,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1},
   std::plus<embree::GeometryCounts> >(unsigned long, unsigned long, embree::GeometryCounts const&,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1} const&,
   std::plus<embree::GeometryCounts> const&)::{lambda(embree::range<unsigned long>)#1} const&,
   std::plus<embree::GeometryCounts> const&) [clone .constprop.0] [clone .isra.0] */

ulong embree::
      parallel_reduce_internal<unsigned_long,embree::GeometryCounts,embree::parallel_reduce<unsigned_long,embree::GeometryCounts,embree::Scene::commit_task()::_lambda(embree::range<unsigned_long>const&)_1_,std::plus<embree::GeometryCounts>>(unsigned_long,unsigned_long,embree::GeometryCounts_const&,embree::Scene::commit_task()::_lambda(embree::range<unsigned_long>const&)_1_const&,std::plus<embree::GeometryCounts>const&)::_lambda(embree::range<unsigned_long>)_1_,std::plus<embree::GeometryCounts>>
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,
                GeometryCounts_conflict *param_5,_lambda_embree__range<unsigned_long>__1_ *param_6,
                plus *param_7)

{
  undefined8 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long ***ppplVar18;
  long ***ppplVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long in_FS_OFFSET;
  long local_20d0;
  long local_20c8;
  long local_20c0;
  long local_20b8;
  long local_20b0;
  long local_20a8;
  long local_20a0;
  long local_2098;
  long local_2090;
  long local_2088;
  long local_2080;
  long local_2078;
  long local_2070;
  long local_2068;
  ulong local_2060;
  ulong local_2058 [2];
  undefined8 local_2048;
  long local_2040;
  long local_2038;
  undefined8 *local_2030;
  ulong *local_2028;
  ulong *local_2020;
  long **local_2018;
  GeometryCounts_conflict *local_2010;
  long *local_2000 [1000];
  long **local_c0;
  ulong local_b8;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_2048 = 0;
  local_2060 = param_3;
  local_2058[0] = param_2;
  uVar17 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2058[0]) {
    local_2058[0] = 0x200;
  }
  if (uVar17 < local_2058[0]) {
    local_2058[0] = uVar17;
  }
  ppplVar19 = (long ***)local_2000;
  do {
    *ppplVar19 = (long **)0x0;
    ppplVar18 = ppplVar19 + 0x19;
    ppplVar19[1] = (long **)0x0;
    ppplVar19[2] = (long **)0x0;
    ppplVar19[3] = (long **)0x0;
    ppplVar19[4] = (long **)0x0;
    ppplVar19[5] = (long **)0x0;
    ppplVar19[6] = (long **)0x0;
    ppplVar19[7] = (long **)0x0;
    ppplVar19[8] = (long **)0x0;
    ppplVar19[9] = (long **)0x0;
    ppplVar19[10] = (long **)0x0;
    ppplVar19[0xb] = (long **)0x0;
    ppplVar19[0xc] = (long **)0x0;
    ppplVar19[0xd] = (long **)0x0;
    ppplVar19[0xe] = (long **)0x0;
    ppplVar19[0xf] = (long **)0x0;
    ppplVar19[0x10] = (long **)0x0;
    ppplVar19[0x11] = (long **)0x0;
    ppplVar19[0x12] = (long **)0x0;
    ppplVar19[0x13] = (long **)0x0;
    ppplVar19[0x14] = (long **)0x0;
    ppplVar19[0x15] = (long **)0x0;
    ppplVar19[0x16] = (long **)0x0;
    ppplVar19[0x17] = (long **)0x0;
    ppplVar19[0x18] = (long **)0x0;
    ppplVar19 = ppplVar18;
  } while (ppplVar18 != &local_c0);
  local_c0 = local_2000;
  local_b8 = local_2058[0];
  if (0x2000 < local_2058[0] * 200) {
    local_c0 = (long **)embree::alignedMalloc(local_2058[0] * 200,0x40);
  }
  local_2030 = &local_2048;
  local_2028 = &local_2060;
  local_2020 = local_2058;
  local_2018 = local_2000;
  local_2010 = param_5;
  if (local_2058[0] == 0) {
    uVar2 = *(undefined8 *)(param_4 + 8);
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    uVar4 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    uVar7 = *(undefined8 *)(param_4 + 0x30);
    uVar8 = *(undefined8 *)(param_4 + 0x38);
    uVar1 = *(undefined8 *)(param_4 + 0xc0);
    *(undefined8 *)param_1 = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 8) = uVar2;
    uVar2 = *(undefined8 *)(param_4 + 0x40);
    uVar9 = *(undefined8 *)(param_4 + 0x48);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar3 = *(undefined8 *)(param_4 + 0x50);
    uVar4 = *(undefined8 *)(param_4 + 0x58);
    *(undefined8 *)(param_1 + 0xc0) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    uVar1 = *(undefined8 *)(param_4 + 0x60);
    uVar5 = *(undefined8 *)(param_4 + 0x68);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    uVar6 = *(undefined8 *)(param_4 + 0x70);
    uVar7 = *(undefined8 *)(param_4 + 0x78);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    uVar2 = *(undefined8 *)(param_4 + 0x80);
    uVar8 = *(undefined8 *)(param_4 + 0x88);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    uVar3 = *(undefined8 *)(param_4 + 0x90);
    uVar4 = *(undefined8 *)(param_4 + 0x98);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    uVar1 = *(undefined8 *)(param_4 + 0xa0);
    uVar5 = *(undefined8 *)(param_4 + 0xa8);
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar7;
    uVar6 = *(undefined8 *)(param_4 + 0xb0);
    uVar7 = *(undefined8 *)(param_4 + 0xb8);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    *(undefined8 *)(param_1 + 0xb0) = uVar6;
    *(undefined8 *)(param_1 + 0xb8) = uVar7;
  }
  else {
    local_2040 = 0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImNS_14GeometryCountsEZNS_15parallel_reduceImS4_ZNS_5Scene11commit_taskEvEUlRKNS_5rangeImEEE_St4plusIS4_EEET0_T_SF_RKSE_RKT1_RKT2_EUlS8_E_SD_EESE_SF_SF_SF_SF_SH_SK_SN_EUlmE_EEvSF_SH_EUlSA_E_EEvSF_SF_SF_SH_PNS0_16TaskGroupContextE_isra_0
              (0,local_2058[0],1,&local_2030,&local_2040);
    embree::TaskScheduler::wait();
    if (local_2040 != 0) {
      local_2038 = local_2040;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_2038);
      goto LAB_0010188a;
    }
    uVar1 = *(undefined8 *)(param_4 + 8);
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    uVar3 = *(undefined8 *)(param_4 + 0x18);
    uVar4 = *(undefined8 *)(param_4 + 0x20);
    uVar5 = *(undefined8 *)(param_4 + 0x28);
    uVar6 = *(undefined8 *)(param_4 + 0x30);
    uVar7 = *(undefined8 *)(param_4 + 0x38);
    uVar8 = *(undefined8 *)(param_4 + 0x40);
    uVar9 = *(undefined8 *)(param_4 + 0x48);
    uVar10 = *(undefined8 *)(param_4 + 0x50);
    uVar11 = *(undefined8 *)(param_4 + 0x58);
    *(undefined8 *)param_1 = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar12 = *(undefined8 *)(param_4 + 0x60);
    uVar13 = *(undefined8 *)(param_4 + 0x68);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar14 = *(undefined8 *)(param_4 + 0x70);
    uVar15 = *(undefined8 *)(param_4 + 0x78);
    local_20d0 = *(long *)(param_4 + 0xc0);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar1 = *(undefined8 *)(param_4 + 0x80);
    uVar2 = *(undefined8 *)(param_4 + 0x88);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    uVar3 = *(undefined8 *)(param_4 + 0x90);
    uVar4 = *(undefined8 *)(param_4 + 0x98);
    *(long *)(param_1 + 0xc0) = local_20d0;
    uVar5 = *(undefined8 *)(param_4 + 0xa0);
    uVar6 = *(undefined8 *)(param_4 + 0xa8);
    uVar7 = *(undefined8 *)(param_4 + 0xb0);
    uVar16 = *(undefined8 *)(param_4 + 0xb8);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    *(undefined8 *)(param_1 + 0x50) = uVar10;
    *(undefined8 *)(param_1 + 0x58) = uVar11;
    *(undefined8 *)(param_1 + 0x60) = uVar12;
    *(undefined8 *)(param_1 + 0x68) = uVar13;
    *(undefined8 *)(param_1 + 0x70) = uVar14;
    *(undefined8 *)(param_1 + 0x78) = uVar15;
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
    *(undefined8 *)(param_1 + 0xb0) = uVar7;
    *(undefined8 *)(param_1 + 0xb8) = uVar16;
    if (local_2058[0] != 0) {
      local_2068 = *(long *)param_1;
      lVar29 = *(long *)(param_1 + 0x68);
      lVar30 = *(long *)(param_1 + 0x70);
      lVar28 = *(long *)(param_1 + 0x78);
      local_2070 = *(long *)(param_1 + 8);
      lVar27 = *(long *)(param_1 + 0x80);
      lVar26 = *(long *)(param_1 + 0x88);
      local_2078 = *(long *)(param_1 + 0x10);
      lVar25 = *(long *)(param_1 + 0x90);
      local_2080 = *(long *)(param_1 + 0x18);
      local_2088 = *(long *)(param_1 + 0x20);
      local_2090 = *(long *)(param_1 + 0x28);
      local_2098 = *(long *)(param_1 + 0x30);
      local_20a0 = *(long *)(param_1 + 0x38);
      local_20a8 = *(long *)(param_1 + 0x40);
      local_20b0 = *(long *)(param_1 + 0x48);
      local_20b8 = *(long *)(param_1 + 0x50);
      local_20c0 = *(long *)(param_1 + 0x58);
      lVar20 = *(long *)(param_1 + 0x60);
      lVar24 = *(long *)(param_1 + 0x98);
      local_20c8 = *(long *)(param_1 + 0xb8);
      lVar23 = *(long *)(param_1 + 0xa0);
      lVar22 = *(long *)(param_1 + 0xa8);
      lVar21 = *(long *)(param_1 + 0xb0);
      ppplVar19 = (long ***)local_c0;
      do {
        ppplVar18 = ppplVar19 + 0x19;
        local_2068 = local_2068 + (long)*ppplVar19;
        local_2070 = local_2070 + (long)ppplVar19[1];
        local_2078 = local_2078 + (long)ppplVar19[2];
        local_2080 = local_2080 + (long)ppplVar19[3];
        local_2088 = local_2088 + (long)ppplVar19[4];
        local_2090 = local_2090 + (long)ppplVar19[5];
        local_2098 = local_2098 + (long)ppplVar19[6];
        local_20a0 = local_20a0 + (long)ppplVar19[7];
        local_20a8 = local_20a8 + (long)ppplVar19[8];
        local_20b0 = local_20b0 + (long)ppplVar19[9];
        local_20b8 = local_20b8 + (long)ppplVar19[10];
        local_20c8 = local_20c8 + (long)ppplVar19[0x17];
        lVar20 = lVar20 + (long)ppplVar19[0xc];
        lVar29 = lVar29 + (long)ppplVar19[0xd];
        lVar30 = lVar30 + (long)ppplVar19[0xe];
        lVar28 = lVar28 + (long)ppplVar19[0xf];
        lVar27 = lVar27 + (long)ppplVar19[0x10];
        lVar26 = lVar26 + (long)ppplVar19[0x11];
        lVar25 = lVar25 + (long)ppplVar19[0x12];
        lVar24 = lVar24 + (long)ppplVar19[0x13];
        lVar23 = lVar23 + (long)ppplVar19[0x14];
        lVar22 = lVar22 + (long)ppplVar19[0x15];
        lVar21 = lVar21 + (long)ppplVar19[0x16];
        local_20c0 = local_20c0 + (long)ppplVar19[0xb];
        local_20d0 = local_20d0 + (long)ppplVar19[0x18];
        ppplVar19 = ppplVar18;
      } while ((long ***)(local_c0 + local_2058[0] * 0x19) != ppplVar18);
      *(long *)param_1 = local_2068;
      *(long *)(param_1 + 0x68) = lVar29;
      *(long *)(param_1 + 8) = local_2070;
      *(long *)(param_1 + 0x70) = lVar30;
      *(long *)(param_1 + 0x10) = local_2078;
      *(long *)(param_1 + 0x18) = local_2080;
      *(long *)(param_1 + 0x20) = local_2088;
      *(long *)(param_1 + 0x28) = local_2090;
      *(long *)(param_1 + 0x30) = local_2098;
      *(long *)(param_1 + 0x38) = local_20a0;
      *(long *)(param_1 + 0x40) = local_20a8;
      *(long *)(param_1 + 0x48) = local_20b0;
      *(long *)(param_1 + 0x50) = local_20b8;
      *(long *)(param_1 + 0x58) = local_20c0;
      *(long *)(param_1 + 0x60) = lVar20;
      *(long *)(param_1 + 0x78) = lVar28;
      *(long *)(param_1 + 0x80) = lVar27;
      *(long *)(param_1 + 0x88) = lVar26;
      *(long *)(param_1 + 0x90) = lVar25;
      *(long *)(param_1 + 0x98) = lVar24;
      *(long *)(param_1 + 0xa0) = lVar23;
      *(long *)(param_1 + 0xa8) = lVar22;
      *(long *)(param_1 + 0xb0) = lVar21;
      *(long *)(param_1 + 0xb8) = local_20c8;
      *(long *)(param_1 + 0xc0) = local_20d0;
    }
  }
  if (local_c0 != local_2000) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_0010188a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101f4b) */
/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Thread *pTVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  Thread *pTVar12;
  Thread *pTVar13;
  Thread *pTVar14;
  Thread *pTVar15;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = embree::TaskScheduler::thread();
  if (lVar10 == 0) {
    pTVar12 = (Thread *)embree::TaskScheduler::instance();
    embree::TaskScheduler::startThreads();
    lVar10 = embree::TaskScheduler::allocThreadIndex();
    pTVar13 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
    if (pTVar12 != (Thread *)0x0) {
      if (*(code **)(*(long *)pTVar12 + 0x10) == RefCount::refInc) {
        LOCK();
        *(long *)(pTVar12 + 8) = *(long *)(pTVar12 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x10))(pTVar12);
      }
    }
    *(long *)pTVar13 = lVar10;
    pTVar15 = pTVar13 + 0x40;
    pTVar14 = pTVar15;
    do {
      *(undefined4 *)pTVar14 = 0;
      pTVar14 = pTVar14 + 0x40;
    } while (pTVar14 != pTVar13 + 0x40040);
    *(undefined8 *)(pTVar13 + 0x40040) = 0;
    *(undefined8 *)(pTVar13 + 0x40080) = 0;
    *(undefined8 *)(pTVar13 + 0xc00c0) = 0;
    *(undefined8 *)(pTVar13 + 0xc0100) = 0;
    *(Thread **)(pTVar13 + 0xc0108) = pTVar12;
    if (pTVar12 != (Thread *)0x0) {
      if (*(code **)(*(long *)pTVar12 + 0x10) == RefCount::refInc) {
        LOCK();
        *(long *)(pTVar12 + 8) = *(long *)(pTVar12 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x10))(pTVar12);
      }
      if (*(code **)(*(long *)pTVar12 + 0x18) == RefCount::refDec) {
        LOCK();
        pTVar14 = pTVar12 + 8;
        *(long *)pTVar14 = *(long *)pTVar14 + -1;
        UNLOCK();
        if (*(long *)pTVar14 == 0) {
          (**(code **)(*(long *)pTVar12 + 8))(pTVar12);
        }
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x18))(pTVar12);
      }
    }
    LOCK();
    *(Thread **)(*(long *)(pTVar12 + 0x10) + lVar10 * 8) = pTVar13;
    UNLOCK();
    local_48 = pTVar13;
    pTVar14 = (Thread *)embree::TaskScheduler::swapThread(pTVar13);
    if (0xfff < *(ulong *)(pTVar13 + 0x40080))
    goto 
    embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
    ;
    lVar6 = *(long *)(pTVar13 + 0xc00c0);
    uVar3 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
    if (0x80000 < uVar3)
    goto 
    embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
    ;
    *(ulong *)(pTVar13 + 0xc00c0) = uVar3;
    pTVar5 = pTVar13 + uVar3 + 0x40090;
    *(undefined ***)pTVar5 = &PTR_execute_00105cd0;
    *(ulong *)(pTVar5 + 8) = param_2;
    *(ulong *)(pTVar5 + 0x10) = param_1;
    *(ulong *)(pTVar5 + 0x18) = param_3;
    *(_lambda_embree__range<unsigned_long>_const___1_ **)(pTVar5 + 0x20) = param_4;
    *(TaskGroupContext **)(pTVar5 + 0x28) = param_5;
    lVar11 = *(long *)(pTVar13 + 0x40080) * 0x40;
    lVar7 = *(long *)(pTVar13 + 0xc0100);
    *(undefined4 *)(pTVar13 + lVar11 + 0x44) = 1;
    pTVar13[lVar11 + 0x48] = (Thread)0x1;
    *(long *)(pTVar13 + lVar11 + 0x68) = lVar6;
    *(Thread **)(pTVar13 + lVar11 + 0x50) = pTVar5;
    *(long *)(pTVar13 + lVar11 + 0x58) = lVar7;
    *(TaskGroupContext **)(pTVar13 + lVar11 + 0x60) = param_5;
    *(ulong *)(pTVar13 + lVar11 + 0x70) = param_2 - param_1;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      UNLOCK();
    }
    LOCK();
    if (*(int *)(pTVar15 + lVar11) == 0) {
      *(undefined4 *)(pTVar15 + lVar11) = 1;
    }
    UNLOCK();
    LOCK();
    *(long *)(pTVar13 + 0x40080) = *(long *)(pTVar13 + 0x40080) + 1;
    UNLOCK();
    if (*(long *)(pTVar13 + 0x40080) - 1U <= *(ulong *)(pTVar13 + 0x40040)) {
      LOCK();
      *(long *)(pTVar13 + 0x40040) = *(long *)(pTVar13 + 0x40080) + -1;
      UNLOCK();
    }
    embree::MutexSys::lock();
    LOCK();
    *(long *)(pTVar12 + 0x30) = *(long *)(pTVar12 + 0x30) + 1;
    UNLOCK();
    LOCK();
    pTVar12[0x38] = (Thread)0x1;
    UNLOCK();
    embree::ConditionSys::notify_all();
    embree::MutexSys::unlock();
    local_48 = pTVar12;
    if (pTVar12 != (Thread *)0x0) {
      if (*(code **)(*(long *)pTVar12 + 0x10) == RefCount::refInc) {
        LOCK();
        *(long *)(pTVar12 + 8) = *(long *)(pTVar12 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x10))(pTVar12);
      }
    }
    embree::TaskScheduler::addScheduler((Ref *)&local_48);
    if (local_48 != (Thread *)0x0) {
      (**(code **)(*(long *)local_48 + 0x18))();
    }
    do {
      cVar9 = embree::TaskScheduler::TaskQueue::execute_local(pTVar15,(Task *)pTVar13);
    } while (cVar9 != '\0');
    LOCK();
    *(long *)(pTVar12 + 0x30) = *(long *)(pTVar12 + 0x30) + -1;
    UNLOCK();
    local_48 = pTVar12;
    if (pTVar12 != (Thread *)0x0) {
      if (*(code **)(*(long *)pTVar12 + 0x10) == RefCount::refInc) {
        LOCK();
        *(long *)(pTVar12 + 8) = *(long *)(pTVar12 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x10))(pTVar12);
      }
    }
    embree::TaskScheduler::removeScheduler((Ref *)&local_48);
    if (local_48 != (Thread *)0x0) {
      if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
        LOCK();
        pTVar15 = local_48 + 8;
        *(long *)pTVar15 = *(long *)pTVar15 + -1;
        UNLOCK();
        if (*(long *)pTVar15 == 0) {
          (**(code **)(*(long *)local_48 + 8))();
        }
      }
      else {
        (**(code **)(*(long *)local_48 + 0x18))();
      }
    }
    local_48 = (Thread *)0x0;
    LOCK();
    *(undefined8 *)(lVar10 * 8 + *(long *)(pTVar12 + 0x10)) = 0;
    UNLOCK();
    embree::TaskScheduler::swapThread(pTVar14);
    pTVar15 = *(Thread **)param_5;
    if (pTVar15 != (Thread *)0x0) {
      local_48 = pTVar15;
      std::__exception_ptr::exception_ptr::_M_addref();
      pTVar15 = local_48;
    }
    LOCK();
    *(long *)(pTVar12 + 0x28) = *(long *)(pTVar12 + 0x28) + -1;
    UNLOCK();
    while (*(long *)(pTVar12 + 0x28) != 0) {
      embree::yield();
    }
    local_48 = *(Thread **)param_5;
    *(undefined8 *)param_5 = 0;
    if (local_48 != (Thread *)0x0) {
      std::__exception_ptr::exception_ptr::_M_release();
    }
    if (pTVar15 != (Thread *)0x0) {
      local_48 = pTVar15;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
      goto LAB_00102061;
    }
    if (pTVar13 != (Thread *)0x0) {
      plVar8 = *(long **)(pTVar13 + 0xc0108);
      if (plVar8 != (long *)0x0) {
        if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
          LOCK();
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        else {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        embree::alignedFree(pTVar13);
        return;
      }
      goto LAB_00102061;
    }
  }
  else {
    if (0xfff < *(ulong *)(lVar10 + 0x40080)) {

      embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
      :
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = *(long *)(lVar10 + 0xc00c0);
    uVar3 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
    if (0x80000 < uVar3)
    goto 
    embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
    ;
    *(ulong *)(lVar10 + 0xc00c0) = uVar3;
    puVar4 = (undefined8 *)(lVar10 + 0x40090 + uVar3);
    puVar4[5] = param_5;
    *puVar4 = &PTR_execute_00105cd0;
    puVar4[1] = param_2;
    puVar4[2] = param_1;
    puVar4[3] = param_3;
    puVar4[4] = param_4;
    lVar11 = *(long *)(lVar10 + 0x40080) * 0x40;
    piVar2 = (int *)(lVar10 + 0x40 + lVar11);
    lVar7 = *(long *)(lVar10 + 0xc0100);
    *(undefined4 *)(lVar10 + 0x44 + lVar11) = 1;
    *(undefined1 *)(lVar10 + 0x48 + lVar11) = 1;
    lVar11 = lVar11 + lVar10;
    *(TaskGroupContext **)(lVar11 + 0x60) = param_5;
    *(undefined8 **)(lVar11 + 0x50) = puVar4;
    *(long *)(lVar11 + 0x58) = lVar7;
    *(long *)(lVar11 + 0x68) = lVar6;
    *(ulong *)(lVar11 + 0x70) = param_2 - param_1;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      UNLOCK();
    }
    LOCK();
    if (*piVar2 == 0) {
      *piVar2 = 1;
    }
    UNLOCK();
    LOCK();
    *(long *)(lVar10 + 0x40080) = *(long *)(lVar10 + 0x40080) + 1;
    UNLOCK();
    if (*(long *)(lVar10 + 0x40080) - 1U <= *(ulong *)(lVar10 + 0x40040)) {
      LOCK();
      *(long *)(lVar10 + 0x40040) = *(long *)(lVar10 + 0x40080) + -1;
      UNLOCK();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102061:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (*(long *)(this + 8) - uVar1 <= *(ulong *)(this + 0x18)) {
    *(undefined4 *)(*(long *)(**(long **)(this + 0x20) + 0x200) + uVar1 * 4) = 0;
    return;
  }
  uVar2 = *(long *)(this + 8) + uVar1 >> 1;
  spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
            (uVar1,uVar2,*(ulong *)(this + 0x18),
             *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
             *(TaskGroupContext **)(this + 0x28));
  spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
            (uVar2,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
             *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
             *(TaskGroupContext **)(this + 0x28));
  embree::TaskScheduler::wait();
  return;
}



/* WARNING: Removing unreachable block (ram,0x001025fb) */
/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned
   long, embree::Scene::commit_task()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Thread *pTVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  Thread *pTVar12;
  Thread *pTVar13;
  Thread *pTVar14;
  Thread *pTVar15;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = embree::TaskScheduler::thread();
  if (lVar10 == 0) {
    pTVar12 = (Thread *)embree::TaskScheduler::instance();
    embree::TaskScheduler::startThreads();
    lVar10 = embree::TaskScheduler::allocThreadIndex();
    pTVar13 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
    if (pTVar12 != (Thread *)0x0) {
      if (*(code **)(*(long *)pTVar12 + 0x10) == RefCount::refInc) {
        LOCK();
        *(long *)(pTVar12 + 8) = *(long *)(pTVar12 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x10))(pTVar12);
      }
    }
    *(long *)pTVar13 = lVar10;
    pTVar15 = pTVar13 + 0x40;
    pTVar14 = pTVar15;
    do {
      *(undefined4 *)pTVar14 = 0;
      pTVar14 = pTVar14 + 0x40;
    } while (pTVar14 != pTVar13 + 0x40040);
    *(undefined8 *)(pTVar13 + 0x40040) = 0;
    *(undefined8 *)(pTVar13 + 0x40080) = 0;
    *(undefined8 *)(pTVar13 + 0xc00c0) = 0;
    *(undefined8 *)(pTVar13 + 0xc0100) = 0;
    *(Thread **)(pTVar13 + 0xc0108) = pTVar12;
    if (pTVar12 != (Thread *)0x0) {
      if (*(code **)(*(long *)pTVar12 + 0x10) == RefCount::refInc) {
        LOCK();
        *(long *)(pTVar12 + 8) = *(long *)(pTVar12 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x10))(pTVar12);
      }
      if (*(code **)(*(long *)pTVar12 + 0x18) == RefCount::refDec) {
        LOCK();
        pTVar14 = pTVar12 + 8;
        *(long *)pTVar14 = *(long *)pTVar14 + -1;
        UNLOCK();
        if (*(long *)pTVar14 == 0) {
          (**(code **)(*(long *)pTVar12 + 8))(pTVar12);
        }
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x18))(pTVar12);
      }
    }
    LOCK();
    *(Thread **)(*(long *)(pTVar12 + 0x10) + lVar10 * 8) = pTVar13;
    UNLOCK();
    local_48 = pTVar13;
    pTVar14 = (Thread *)embree::TaskScheduler::swapThread(pTVar13);
    if (0xfff < *(ulong *)(pTVar13 + 0x40080))
    goto 
    embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
    ;
    lVar6 = *(long *)(pTVar13 + 0xc00c0);
    uVar3 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
    if (0x80000 < uVar3)
    goto 
    embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
    ;
    *(ulong *)(pTVar13 + 0xc00c0) = uVar3;
    pTVar5 = pTVar13 + uVar3 + 0x40090;
    *(undefined ***)pTVar5 = &PTR_execute_00105ce8;
    *(ulong *)(pTVar5 + 8) = param_2;
    *(ulong *)(pTVar5 + 0x10) = param_1;
    *(ulong *)(pTVar5 + 0x18) = param_3;
    *(_lambda_embree__range<unsigned_long>_const___1_ **)(pTVar5 + 0x20) = param_4;
    *(TaskGroupContext **)(pTVar5 + 0x28) = param_5;
    lVar11 = *(long *)(pTVar13 + 0x40080) * 0x40;
    lVar7 = *(long *)(pTVar13 + 0xc0100);
    *(undefined4 *)(pTVar13 + lVar11 + 0x44) = 1;
    pTVar13[lVar11 + 0x48] = (Thread)0x1;
    *(long *)(pTVar13 + lVar11 + 0x68) = lVar6;
    *(Thread **)(pTVar13 + lVar11 + 0x50) = pTVar5;
    *(long *)(pTVar13 + lVar11 + 0x58) = lVar7;
    *(TaskGroupContext **)(pTVar13 + lVar11 + 0x60) = param_5;
    *(ulong *)(pTVar13 + lVar11 + 0x70) = param_2 - param_1;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      UNLOCK();
    }
    LOCK();
    if (*(int *)(pTVar15 + lVar11) == 0) {
      *(undefined4 *)(pTVar15 + lVar11) = 1;
    }
    UNLOCK();
    LOCK();
    *(long *)(pTVar13 + 0x40080) = *(long *)(pTVar13 + 0x40080) + 1;
    UNLOCK();
    if (*(long *)(pTVar13 + 0x40080) - 1U <= *(ulong *)(pTVar13 + 0x40040)) {
      LOCK();
      *(long *)(pTVar13 + 0x40040) = *(long *)(pTVar13 + 0x40080) + -1;
      UNLOCK();
    }
    embree::MutexSys::lock();
    LOCK();
    *(long *)(pTVar12 + 0x30) = *(long *)(pTVar12 + 0x30) + 1;
    UNLOCK();
    LOCK();
    pTVar12[0x38] = (Thread)0x1;
    UNLOCK();
    embree::ConditionSys::notify_all();
    embree::MutexSys::unlock();
    local_48 = pTVar12;
    if (pTVar12 != (Thread *)0x0) {
      if (*(code **)(*(long *)pTVar12 + 0x10) == RefCount::refInc) {
        LOCK();
        *(long *)(pTVar12 + 8) = *(long *)(pTVar12 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x10))(pTVar12);
      }
    }
    embree::TaskScheduler::addScheduler((Ref *)&local_48);
    if (local_48 != (Thread *)0x0) {
      if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
        LOCK();
        pTVar5 = local_48 + 8;
        *(long *)pTVar5 = *(long *)pTVar5 + -1;
        UNLOCK();
        if (*(long *)pTVar5 == 0) {
          (**(code **)(*(long *)local_48 + 8))();
        }
      }
      else {
        (**(code **)(*(long *)local_48 + 0x18))();
      }
    }
    do {
      cVar9 = embree::TaskScheduler::TaskQueue::execute_local(pTVar15,(Task *)pTVar13);
    } while (cVar9 != '\0');
    LOCK();
    *(long *)(pTVar12 + 0x30) = *(long *)(pTVar12 + 0x30) + -1;
    UNLOCK();
    local_48 = pTVar12;
    if (pTVar12 != (Thread *)0x0) {
      if (*(code **)(*(long *)pTVar12 + 0x10) == RefCount::refInc) {
        LOCK();
        *(long *)(pTVar12 + 8) = *(long *)(pTVar12 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(long *)pTVar12 + 0x10))(pTVar12);
      }
    }
    embree::TaskScheduler::removeScheduler((Ref *)&local_48);
    if (local_48 != (Thread *)0x0) {
      if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
        LOCK();
        pTVar15 = local_48 + 8;
        *(long *)pTVar15 = *(long *)pTVar15 + -1;
        UNLOCK();
        if (*(long *)pTVar15 == 0) {
          (**(code **)(*(long *)local_48 + 8))();
        }
      }
      else {
        (**(code **)(*(long *)local_48 + 0x18))();
      }
    }
    local_48 = (Thread *)0x0;
    LOCK();
    *(undefined8 *)(lVar10 * 8 + *(long *)(pTVar12 + 0x10)) = 0;
    UNLOCK();
    embree::TaskScheduler::swapThread(pTVar14);
    pTVar15 = *(Thread **)param_5;
    if (pTVar15 != (Thread *)0x0) {
      local_48 = pTVar15;
      std::__exception_ptr::exception_ptr::_M_addref();
      pTVar15 = local_48;
    }
    LOCK();
    *(long *)(pTVar12 + 0x28) = *(long *)(pTVar12 + 0x28) + -1;
    UNLOCK();
    while (*(long *)(pTVar12 + 0x28) != 0) {
      embree::yield();
    }
    local_48 = *(Thread **)param_5;
    *(undefined8 *)param_5 = 0;
    if (local_48 != (Thread *)0x0) {
      std::__exception_ptr::exception_ptr::_M_release();
    }
    if (pTVar15 != (Thread *)0x0) {
      local_48 = pTVar15;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
      goto LAB_00102718;
    }
    if (pTVar13 != (Thread *)0x0) {
      plVar8 = *(long **)(pTVar13 + 0xc0108);
      if (plVar8 != (long *)0x0) {
        if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
          LOCK();
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        else {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        embree::alignedFree(pTVar13);
        return;
      }
      goto LAB_00102718;
    }
  }
  else {
    if (0xfff < *(ulong *)(lVar10 + 0x40080)) {

      embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
      :
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = *(long *)(lVar10 + 0xc00c0);
    uVar3 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
    if (0x80000 < uVar3)
    goto 
    embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
    ;
    *(ulong *)(lVar10 + 0xc00c0) = uVar3;
    puVar4 = (undefined8 *)(lVar10 + 0x40090 + uVar3);
    puVar4[5] = param_5;
    *puVar4 = &PTR_execute_00105ce8;
    puVar4[1] = param_2;
    puVar4[2] = param_1;
    puVar4[3] = param_3;
    puVar4[4] = param_4;
    lVar11 = *(long *)(lVar10 + 0x40080) * 0x40;
    piVar2 = (int *)(lVar10 + 0x40 + lVar11);
    lVar7 = *(long *)(lVar10 + 0xc0100);
    *(undefined4 *)(lVar10 + 0x44 + lVar11) = 1;
    *(undefined1 *)(lVar10 + 0x48 + lVar11) = 1;
    lVar11 = lVar11 + lVar10;
    *(TaskGroupContext **)(lVar11 + 0x60) = param_5;
    *(undefined8 **)(lVar11 + 0x50) = puVar4;
    *(long *)(lVar11 + 0x58) = lVar7;
    *(long *)(lVar11 + 0x68) = lVar6;
    *(ulong *)(lVar11 + 0x70) = param_2 - param_1;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      UNLOCK();
    }
    LOCK();
    if (*piVar2 == 0) {
      *piVar2 = 1;
    }
    UNLOCK();
    LOCK();
    *(long *)(lVar10 + 0x40080) = *(long *)(lVar10 + 0x40080) + 1;
    UNLOCK();
    if (*(long *)(lVar10 + 0x40080) - 1U <= *(ulong *)(lVar10 + 0x40040)) {
      LOCK();
      *(long *)(lVar10 + 0x40040) = *(long *)(lVar10 + 0x40080) + -1;
      UNLOCK();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102718:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar1) {
    uVar5 = *(long *)(this + 8) + uVar1 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar1,uVar5,*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar5,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  plVar2 = *(long **)(this + 0x20);
  plVar3 = *(long **)(*(long *)(*plVar2 + 0x1e0) + uVar1 * 8);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x3e) & 0x20) != 0)) {
    (**(code **)(*plVar3 + 0x70))();
    uVar4 = (**(code **)(**(long **)(*(long *)(*plVar2 + 0x1e0) + uVar1 * 8) + 0xe8))();
    *(undefined8 *)(*(long *)(*plVar2 + 0x220) + uVar1 * 8) = uVar4;
    *(undefined4 *)(*(long *)(*plVar2 + 0x200) + uVar1 * 4) =
         *(undefined4 *)(*(long *)(*(long *)(*plVar2 + 0x1e0) + uVar1 * 8) + 0x38);
  }
  return;
}



/* embree::Scene::Scene(embree::Device*) */

void __thiscall embree::Scene::Scene(Scene *this,Device *param_1)

{
  int iVar1;
  MutexSys *this_00;
  
  embree::AccelN::AccelN((AccelN *)this);
  *(Device **)(this + 0x188) = param_1;
  *(undefined ***)this = &PTR__Scene_00105c68;
  *(Scene **)(this + 0x1a8) = this + 0x198;
  *(Scene **)(this + 0x1b0) = this + 0x198;
  *(undefined8 *)(this + 0x230) = 0x100000000;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(Device **)(this + 0x1c8) = param_1;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(Device **)(this + 0x208) = param_1;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  this[0x228] = (Scene)0x1;
  *(undefined4 *)(this + 0x22c) = 0;
  embree::MutexSys::MutexSys((MutexSys *)(this + 0x238));
  embree::MutexSys::MutexSys((MutexSys *)(this + 0x240));
  this[0x248] = (Scene)0x1;
  this_00 = (MutexSys *)operator_new(0x10);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  embree::MutexSys::MutexSys(this_00);
  *(undefined8 *)(this_00 + 8) = 0;
  *(MutexSys **)(this + 0x250) = this_00;
  *(undefined ***)(this + 600) = &PTR_operator___00105c50;
  *(Scene **)(this + 0x260) = this;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
    LOCK();
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(code **)(this + 0x68) = missing_rtcCommit;
  *(code **)(this + 0x78) = missing_rtcCommit;
  *(code **)(this + 0x80) = missing_rtcCommit;
  *(code **)(this + 0x98) = missing_rtcCommit;
  *(code **)(this + 0xa0) = missing_rtcCommit;
  *(code **)(this + 0xe0) = missing_rtcCommit;
  *(code **)(this + 0xe8) = missing_rtcCommit;
  *(code **)(this + 0x128) = missing_rtcCommit;
  *(code **)(this + 0x130) = missing_rtcCommit;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  iVar1 = *(int *)(param_1 + 0x49c);
  *(undefined8 *)(this + 0x168) = 0;
  if (iVar1 != -1) {
    *(int *)(this + 0x234) = iVar1;
  }
  if (*(int *)(param_1 + 0x4a0) != -1) {
    *(int *)(this + 0x230) = *(int *)(param_1 + 0x4a0);
  }
  return;
}



/* embree::Scene::createTriangleAccel() */

void __thiscall embree::Scene::createTriangleAccel(Scene *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(this + 0x188);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 == 7) {
    if ((**(int **)(lVar1 + 0x10) != 0x61666564) ||
       (*(int *)((long)*(int **)(lVar1 + 0x10) + 3) != 0x746c7561))
    goto embree_Scene_createTriangleAccel;
    uVar7 = *(undefined8 *)(lVar1 + 0x558);
    iVar4 = (*(uint *)(this + 0x230) & 2) + (*(uint *)(this + 0x230) >> 2 & 1);
    if (*(int *)(this + 0x234) == 0) {
      if (iVar4 != 2) {
        if (iVar4 == 3) {
          uVar5 = 1;
          uVar6 = 1;
          goto LAB_00102cf4;
        }
        if (iVar4 != 1) {
          uVar5 = 1;
          goto LAB_00102c89;
        }
        uVar5 = 1;
        goto LAB_00102e17;
      }
      uVar5 = 0;
      uVar6 = 1;
      goto LAB_00102cf4;
    }
    if (iVar4 == 2) goto LAB_00102cf0;
    if (iVar4 != 3) {
      if (iVar4 == 1) goto LAB_00102e10;
      uVar5 = 2;
      if (*(int *)(this + 0x234) == 2) goto LAB_00102c89;
      goto LAB_00102c87;
    }
    uVar5 = 1;
  }
  else {
    if (lVar2 == 0xe) {
      if ((**(long **)(lVar1 + 0x10) != 0x6972742e34687662) ||
         (*(long *)((long)*(long **)(lVar1 + 0x10) + 6) != 0x34656c676e616972))
      goto embree_Scene_createTriangleAccel;
      uVar7 = *(undefined8 *)(lVar1 + 0x558);
LAB_00102c87:
      uVar5 = 0;
LAB_00102c89:
      embree::BVH4Factory::BVH4Triangle4(uVar7,this,uVar5,0);
      embree::AccelN::accels_add((Accel *)this);
      return;
    }
    if (lVar2 != 0xf) {
      if ((lVar2 == 0x10) &&
         (**(long **)(lVar1 + 0x10) == 0x72742e3468766271 &&
          (*(long **)(lVar1 + 0x10))[1] == 0x6934656c676e6169)) {
        embree::BVH4Factory::BVH4QuantizedTriangle4i(*(Scene **)(lVar1 + 0x558));
        embree::AccelN::accels_add((Accel *)this);
        return;
      }
embree_Scene_createTriangleAccel:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar3 = *(long **)(lVar1 + 0x10);
    if ((*plVar3 == 0x6972742e34687662) && (*(long *)((long)plVar3 + 7) == 0x7634656c676e6169)) {
      uVar7 = *(undefined8 *)(lVar1 + 0x558);
LAB_00102e10:
      uVar5 = 0;
LAB_00102e17:
      embree::BVH4Factory::BVH4Triangle4v(uVar7,this,uVar5,1);
      embree::AccelN::accels_add((Accel *)this);
      return;
    }
    if ((*plVar3 != 0x6972742e34687662) || (*(long *)((long)plVar3 + 7) != 0x6934656c676e6169))
    goto embree_Scene_createTriangleAccel;
    uVar7 = *(undefined8 *)(lVar1 + 0x558);
LAB_00102cf0:
    uVar5 = 0;
  }
  uVar6 = 0;
LAB_00102cf4:
  embree::BVH4Factory::BVH4Triangle4i(uVar7,this,uVar6,uVar5);
  embree::AccelN::accels_add((Accel *)this);
  return;
}



/* embree::Scene::createTriangleMBAccel() */

void __thiscall embree::Scene::createTriangleMBAccel(Scene *this)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(this + 0x188);
  if (*(long *)(lVar1 + 0x78) == 7) {
    if ((**(int **)(lVar1 + 0x70) != 0x61666564) ||
       (*(int *)((long)*(int **)(lVar1 + 0x70) + 3) != 0x746c7561)) goto code_r0x00105268;
    uVar4 = *(undefined8 *)(lVar1 + 0x558);
    if (((*(uint *)(this + 0x230) >> 2 & 1) + (*(uint *)(this + 0x230) & 2) & 5) != 0) {
      uVar3 = 1;
      goto LAB_00102f55;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x78) != 0x11) {
      createTriangleMBAccel();
      return;
    }
    plVar2 = *(long **)(lVar1 + 0x70);
    if ((*plVar2 != 0x6972742e34687662 || plVar2[1] != 0x6d6934656c676e61) ||
       ((char)plVar2[2] != 'b')) {
      if ((*plVar2 == 0x6972742e34687662 && plVar2[1] == 0x6d7634656c676e61) &&
         ((char)plVar2[2] == 'b')) {
        embree::BVH4Factory::BVH4Triangle4vMB(*(undefined8 *)(lVar1 + 0x558),this,0,0);
        embree::AccelN::accels_add((Accel *)this);
        return;
      }
code_r0x00105268:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x558);
  }
  uVar3 = 0;
LAB_00102f55:
  embree::BVH4Factory::BVH4Triangle4iMB(uVar4,this,0,uVar3);
  embree::AccelN::accels_add((Accel *)this);
  return;
}



/* embree::Scene::createQuadMBAccel() */

void embree::Scene::createQuadMBAccel(void)

{
  return;
}



/* embree::Scene::createHairAccel() */

void embree::Scene::createHairAccel(void)

{
  return;
}



/* embree::Scene::createHairMBAccel() */

void embree::Scene::createHairMBAccel(void)

{
  return;
}



/* embree::Scene::createSubdivAccel() */

void embree::Scene::createSubdivAccel(void)

{
  return;
}



/* embree::Scene::createSubdivMBAccel() */

void embree::Scene::createSubdivMBAccel(void)

{
  return;
}



/* embree::Scene::createUserGeometryAccel() */

void embree::Scene::createUserGeometryAccel(void)

{
  return;
}



/* embree::Scene::createUserGeometryMBAccel() */

void embree::Scene::createUserGeometryMBAccel(void)

{
  return;
}



/* embree::Scene::createInstanceAccel() */

void embree::Scene::createInstanceAccel(void)

{
  return;
}



/* embree::Scene::createInstanceMBAccel() */

void embree::Scene::createInstanceMBAccel(void)

{
  return;
}



/* embree::Scene::createInstanceExpensiveAccel() */

void embree::Scene::createInstanceExpensiveAccel(void)

{
  return;
}



/* embree::Scene::createInstanceExpensiveMBAccel() */

void embree::Scene::createInstanceExpensiveMBAccel(void)

{
  return;
}



/* embree::Scene::createInstanceArrayAccel() */

void embree::Scene::createInstanceArrayAccel(void)

{
  return;
}



/* embree::Scene::createInstanceArrayMBAccel() */

void embree::Scene::createInstanceArrayMBAccel(void)

{
  return;
}



/* embree::Scene::createGridAccel() */

void embree::Scene::createGridAccel(void)

{
  return;
}



/* embree::Scene::createGridMBAccel() */

void embree::Scene::createGridMBAccel(void)

{
  return;
}



/* embree::Scene::build_cpu_accels() */

void __thiscall embree::Scene::build_cpu_accels(Scene *this)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  long in_FS_OFFSET;
  Scene *local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)(*(long *)(this + 0x288) != 0);
  if (*(long *)(this + 0x298) != 0) {
    uVar4 = uVar4 | 2;
  }
  if (*(long *)(this + 0x2a8) + *(long *)(this + 0x2b8) != 0) {
    uVar4 = uVar4 | 4;
  }
  if (*(long *)(this + 0x2c8) != 0) {
    uVar4 = uVar4 | 8;
  }
  if (*(long *)(this + 0x2d8) != 0) {
    uVar4 = uVar4 | 0x10;
  }
  if (*(long *)(this + 0x2e8) != 0) {
    uVar4 = uVar4 | 0x20;
  }
  if (*(long *)(this + 0x2f8) != 0) {
    uVar4 = uVar4 | 0x40;
  }
  if (*(long *)(this + 0x308) != 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (*(long *)(this + 0x318) != 0) {
    uVar4 = uVar4 | 0x100;
  }
  if (*(long *)(this + 0x338) != 0) {
    uVar4 = uVar4 | 0x200;
  }
  uVar6 = (uint)(*(long *)(this + 0x290) != 0);
  if (*(long *)(this + 0x2a0) != 0) {
    uVar6 = uVar6 | 2;
  }
  if (*(long *)(this + 0x2b0) + *(long *)(this + 0x2c0) != 0) {
    uVar6 = uVar6 | 4;
  }
  if (*(long *)(this + 0x2d0) != 0) {
    uVar6 = uVar6 | 8;
  }
  if (*(long *)(this + 0x2e0) != 0) {
    uVar6 = uVar6 | 0x10;
  }
  if (*(long *)(this + 0x2f0) != 0) {
    uVar6 = uVar6 | 0x20;
  }
  if (*(long *)(this + 0x300) != 0) {
    uVar6 = uVar6 | 0x40;
  }
  if (*(long *)(this + 0x310) != 0) {
    uVar6 = uVar6 | 0x80;
  }
  if (*(long *)(this + 800) != 0) {
    uVar6 = uVar6 | 0x100;
  }
  if (*(long *)(this + 0x340) != 0) {
    uVar6 = uVar6 | 0x200;
  }
  iVar7 = uVar4 * 0x100 + uVar6;
  if ((this[0x228] != (Scene)0x0) || (*(int *)(this + 0x22c) != iVar7)) {
    embree::AccelN::accels_init();
    local_38 = this;
    if (*(ulong *)(this + 0x1f0) == 0) {
LAB_001031e7:
      if (*(long *)(this + 0x288) != 0) {
        createTriangleAccel(this);
      }
      if (*(long *)(this + 0x290) != 0) goto LAB_00103718;
    }
    else {
      local_30 = 0;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,*(ulong *)(this + 0x1f0),1,
                 (_lambda_embree__range<unsigned_long>_const___1_ *)&local_38,
                 (TaskGroupContext *)&local_30);
      embree::TaskScheduler::wait();
      if (local_30 == 0) goto LAB_001031e7;
      this = (Scene *)&local_28;
      local_28 = local_30;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(this);
LAB_00103718:
      createTriangleMBAccel(this);
    }
    this[0x228] = (Scene)0x0;
    *(int *)(this + 0x22c) = iVar7;
  }
  embree::AccelN::accels_select(SUB81(this,0));
  embree::AccelN::accels_build();
  if (((byte)this[0x230] & 1) == 0) {
    embree::AccelN::accels_immutable();
    this[0x228] = (Scene)0x1;
  }
  cVar3 = embree::State::verbosity(*(ulong *)(this + 0x188));
  if (cVar3 == '\0') {
LAB_00103250:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"created scene intersector",0x19);
    plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put('@');
      std::ostream::flush();
      embree::AccelN::accels_print((ulong)this);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"selected scene intersector",0x1a);
      plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
      if (plVar1 != (long *)0x0) {
        if ((char)plVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar1 + 0x30))(plVar1,10);
          }
        }
        std::ostream::put('@');
        std::ostream::flush();
        if (*(long *)(this + 0x70) != 0) {
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&std::cout,"collider  = ",0xc);
          pcVar2 = *(char **)(this + 0x70);
          if (pcVar2 == (char *)0x0) {
            std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                            *(uint *)(embree::AccelN::accels_print + *(long *)(std::cout + -0x18)) |
                            1);
          }
          else {
            sVar5 = strlen(pcVar2);
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
          }
          plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
          if (plVar1 == (long *)0x0) goto LAB_0010395e;
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))(plVar1,10);
            }
          }
          std::ostream::put('@');
          std::ostream::flush();
        }
        if (*(long *)(this + 0x90) != 0) {
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&std::cout,"intersector1  = ",0x10);
          pcVar2 = *(char **)(this + 0x90);
          if (pcVar2 == (char *)0x0) {
            std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                            *(uint *)(embree::AccelN::accels_print + *(long *)(std::cout + -0x18)) |
                            1);
          }
          else {
            sVar5 = strlen(pcVar2);
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
          }
          plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
          if (plVar1 == (long *)0x0) goto LAB_0010395e;
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))(plVar1,10);
            }
          }
          std::ostream::put('@');
          std::ostream::flush();
        }
        if (*(long *)(this + 0xa8) != 0) {
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&std::cout,"intersector4  = ",0x10);
          pcVar2 = *(char **)(this + 0xa8);
          if (pcVar2 == (char *)0x0) {
            std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                            *(uint *)(embree::AccelN::accels_print + *(long *)(std::cout + -0x18)) |
                            1);
          }
          else {
            sVar5 = strlen(pcVar2);
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
          }
          plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
          if (plVar1 == (long *)0x0) goto LAB_0010395e;
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))(plVar1,10);
            }
          }
          std::ostream::put('@');
          std::ostream::flush();
        }
        if (*(long *)(this + 0xf0) != 0) {
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&std::cout,"intersector8  = ",0x10);
          pcVar2 = *(char **)(this + 0xf0);
          if (pcVar2 == (char *)0x0) {
            std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                            *(uint *)(embree::AccelN::accels_print + *(long *)(std::cout + -0x18)) |
                            1);
          }
          else {
            sVar5 = strlen(pcVar2);
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
          }
          plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
          if (plVar1 == (long *)0x0) goto LAB_0010395e;
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))(plVar1,10);
            }
          }
          std::ostream::put('@');
          std::ostream::flush();
        }
        if (*(long *)(this + 0x138) == 0) goto LAB_00103250;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cout,"intersector16 = ",0x10);
        pcVar2 = *(char **)(this + 0x138);
        if (pcVar2 == (char *)0x0) {
          std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                          *(uint *)(embree::AccelN::accels_print + *(long *)(std::cout + -0x18)) | 1
                         );
        }
        else {
          sVar5 = strlen(pcVar2);
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
        }
        plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
        if (plVar1 != (long *)0x0) {
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))(plVar1,10);
            }
          }
          std::ostream::put('@');
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            std::ostream::flush();
            return;
          }
          goto LAB_00103963;
        }
      }
    }
LAB_0010395e:
    std::__throw_bad_cast();
  }
LAB_00103963:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Scene::build_gpu_accels() */

void embree::Scene::build_gpu_accels(void)

{
  return;
}



/* embree::Scene::setBuildQuality(RTCBuildQuality) */

void __thiscall embree::Scene::setBuildQuality(Scene *this,int param_2)

{
  if (*(int *)(this + 0x234) != param_2) {
    *(int *)(this + 0x234) = param_2;
    this[0x228] = (Scene)0x1;
  }
  return;
}



/* embree::Scene::getBuildQuality() const */

undefined4 __thiscall embree::Scene::getBuildQuality(Scene *this)

{
  return *(undefined4 *)(this + 0x234);
}



/* embree::Scene::setSceneFlags(RTCSceneFlags) */

void __thiscall embree::Scene::setSceneFlags(Scene *this,int param_2)

{
  if (*(int *)(this + 0x230) != param_2) {
    *(int *)(this + 0x230) = param_2;
    this[0x228] = (Scene)0x1;
  }
  return;
}



/* embree::Scene::getSceneFlags() const */

undefined4 __thiscall embree::Scene::getSceneFlags(Scene *this)

{
  return *(undefined4 *)(this + 0x230);
}



/* embree::Scene::commit(bool) */

void __thiscall embree::Scene::commit(Scene *this,bool param_1)

{
  long *plVar1;
  Thread *pTVar2;
  ulong uVar3;
  Thread *pTVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *pTVar8;
  char cVar9;
  TaskScheduler *this_00;
  long lVar10;
  Thread *pTVar11;
  Thread *pTVar12;
  long lVar13;
  bool bVar14;
  TaskScheduler *pTVar15;
  long in_FS_OFFSET;
  TaskScheduler *local_58;
  long local_50;
  TaskScheduler *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  embree::MutexSys::lock();
  lVar10 = *(long *)(this + 0x250);
  plVar5 = *(long **)(lVar10 + 8);
  if (plVar5 != (long *)0x0) {
    if (*(code **)(*plVar5 + 0x10) == RefCount::refInc) {
      LOCK();
      plVar5[1] = plVar5[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar5 + 0x10))();
    }
    plVar5 = *(long **)(lVar10 + 8);
    if (plVar5 != (long *)0x0) {
      embree::MutexSys::unlock();
      if (param_1) {
        embree::TaskScheduler::join();
        if (*(code **)(*plVar5 + 0x18) == RefCount::refDec) {
          LOCK();
          plVar1 = plVar5 + 1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar5 + 8))(plVar5);
              return;
            }
          }
          else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x18))(plVar5);
          return;
        }
        goto LAB_00104069;
      }
      goto embree_Scene_commit;
    }
  }
  embree::MutexSys::lock();
  this_00 = (TaskScheduler *)embree::alignedMalloc(0x50,0x40);
  embree::TaskScheduler::TaskScheduler(this_00);
  if (this_00 == (TaskScheduler *)0x0) {
    lVar10 = *(long *)(this + 0x250);
  }
  else {
    LOCK();
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
    UNLOCK();
    lVar10 = *(long *)(this + 0x250);
    if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
    }
  }
  if (*(long **)(lVar10 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(lVar10 + 8) + 0x18))();
  }
  *(TaskScheduler **)(lVar10 + 8) = this_00;
  embree::MutexSys::unlock();
  local_58 = (TaskScheduler *)0x0;
  bVar14 = !param_1;
  if (bVar14) {
    embree::TaskScheduler::startThreads();
  }
  lVar10 = embree::TaskScheduler::allocThreadIndex();
  pTVar11 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this_00 != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
    }
  }
  *(long *)pTVar11 = lVar10;
  pTVar2 = pTVar11 + 0x40;
  pTVar12 = pTVar2;
  do {
    *(undefined4 *)pTVar12 = 0;
    pTVar12 = pTVar12 + 0x40;
  } while (pTVar11 + 0x40040 != pTVar12);
  *(undefined8 *)(pTVar11 + 0x40040) = 0;
  *(undefined8 *)(pTVar11 + 0x40080) = 0;
  *(undefined8 *)(pTVar11 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar11 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar11 + 0xc0108) = this_00;
  if (this_00 != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
    }
    if (*(code **)(*(long *)this_00 + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar15 = this_00 + 8;
      *(long *)pTVar15 = *(long *)pTVar15 + -1;
      UNLOCK();
      if (*(long *)pTVar15 == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
      }
    }
    else {
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this_00 + 0x10) + lVar10 * 8) = pTVar11;
  UNLOCK();
  local_48 = (TaskScheduler *)pTVar11;
  pTVar12 = (Thread *)embree::TaskScheduler::swapThread(pTVar11);
  if (*(ulong *)(pTVar11 + 0x40080) < 0x1000) {
    lVar6 = *(long *)(pTVar11 + 0xc00c0);
    uVar3 = lVar6 + 0x10 + (ulong)(-(int)lVar6 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar11 + 0xc00c0) = uVar3;
      pTVar4 = pTVar11 + uVar3 + 0x400b0;
      *(Scene **)(pTVar4 + 8) = this;
      *(undefined ***)pTVar4 = &PTR_execute_00105cb8;
      lVar13 = *(long *)(pTVar11 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar11 + 0xc0100);
      pTVar11[lVar13 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar11 + lVar13 + 0x44) = 1;
      *(Thread **)(pTVar11 + lVar13 + 0x50) = pTVar4;
      *(long *)(pTVar11 + lVar13 + 0x58) = lVar7;
      *(TaskScheduler ***)(pTVar11 + lVar13 + 0x60) = &local_58;
      *(long *)(pTVar11 + lVar13 + 0x68) = lVar6;
      *(undefined8 *)(pTVar11 + lVar13 + 0x70) = 1;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar2 + lVar13) == 0) {
        *(undefined4 *)(pTVar2 + lVar13) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar11 + 0x40080) = *(long *)(pTVar11 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar11 + 0x40080) - 1U <= *(ulong *)(pTVar11 + 0x40040)) {
        LOCK();
        *(long *)(pTVar11 + 0x40040) = *(long *)(pTVar11 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this_00 + 0x30) = *(long *)(this_00 + 0x30) + 1;
      UNLOCK();
      LOCK();
      this_00[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (bVar14) {
        local_48 = this_00;
        if (this_00 != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this_00 + 0x10))(this_00);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (TaskScheduler *)0x0) {
          (**(code **)(*(long *)local_48 + 0x18))();
        }
      }
      do {
        cVar9 = embree::TaskScheduler::TaskQueue::execute_local(pTVar2,(Task *)pTVar11);
      } while (cVar9 != '\0');
      LOCK();
      *(long *)(this_00 + 0x30) = *(long *)(this_00 + 0x30) + -1;
      UNLOCK();
      if (bVar14) {
        local_48 = this_00;
        if (this_00 != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this_00 + 0x10))(this_00);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = local_48 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (TaskScheduler *)0x0;
      LOCK();
      *(undefined8 *)(lVar10 * 8 + *(long *)(this_00 + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar12);
      pTVar15 = local_58;
      if (local_58 != (TaskScheduler *)0x0) {
        local_48 = local_58;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar15 = local_48;
      }
      LOCK();
      *(long *)(this_00 + 0x28) = *(long *)(this_00 + 0x28) + -1;
      UNLOCK();
      while (pTVar8 = local_58, *(long *)(this_00 + 0x28) != 0) {
        embree::yield();
      }
      local_50 = 0;
      local_58 = (TaskScheduler *)0x0;
      local_48 = pTVar8;
      if ((pTVar8 != (TaskScheduler *)0x0) &&
         (std::__exception_ptr::exception_ptr::_M_release(), local_50 != 0)) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar15 == (TaskScheduler *)0x0) {
        if (pTVar11 != (Thread *)0x0) {
          plVar5 = *(long **)(pTVar11 + 0xc0108);
          if (plVar5 != (long *)0x0) {
            if (*(code **)(*plVar5 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar1 = plVar5 + 1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
            else {
              (**(code **)(*plVar5 + 0x18))();
            }
          }
          embree::alignedFree(pTVar11);
        }
        if (local_58 != (TaskScheduler *)0x0) {
          std::__exception_ptr::exception_ptr::_M_release();
        }
        if (this_00 != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this_00 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = this_00 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)this_00 + 8))(this_00);
            }
          }
          else {
            (**(code **)(*(long *)this_00 + 0x18))(this_00);
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          embree::MutexSys::unlock();
          return;
        }
      }
      else {
        local_48 = pTVar15;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
LAB_00104069:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
embree_Scene_commit:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::setProgressMonitorFunction(bool (*)(void*, double), void*) */

void __thiscall
embree::Scene::setProgressMonitorFunction
          (Scene *this,_func_bool_void_ptr_double *param_1,void *param_2)

{
  *(_func_bool_void_ptr_double **)(this + 0x268) = param_1;
  *(void **)(this + 0x270) = param_2;
  return;
}



/* embree::Scene::progressMonitor(double) */

void __thiscall embree::Scene::progressMonitor(Scene *this,double param_1)

{
  if (*(long *)(this + 0x268) != 0) {
    progressMonitor(this,param_1);
    return;
  }
  return;
}



/* embree::Scene::printStatistics() */

void __thiscall embree::Scene::printStatistics(Scene *this)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  long *plVar5;
  vector<unsigned_long,std::allocator<unsigned_long>> *pvVar6;
  ulong uVar7;
  size_t sVar8;
  long lVar9;
  size_t *psVar10;
  vector<unsigned_long,std::allocator<unsigned_long>> *this_00;
  vector<unsigned_long,std::allocator<unsigned_long>> *pvVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  size_t local_370;
  size_t *local_368;
  size_t local_360;
  size_t local_358 [2];
  vector<unsigned_long,std::allocator<unsigned_long>> local_348 [744];
  vector<unsigned_long,std::allocator<unsigned_long>> local_60 [24];
  vector<unsigned_long,std::allocator<unsigned_long>> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1d0) == 0) {
    lVar14 = 0;
    uVar12 = 0;
  }
  else {
    plVar5 = *(long **)(this + 0x1e0);
    plVar1 = plVar5 + *(long *)(this + 0x1d0);
    uVar12 = 0;
    do {
      if ((*plVar5 != 0) && (uVar2 = *(uint *)(*plVar5 + 0x24), (uint)uVar12 < uVar2)) {
        uVar12 = (ulong)uVar2;
      }
      plVar5 = plVar5 + 1;
    } while (plVar1 != plVar5);
    lVar14 = uVar12 * 8;
  }
  pvVar11 = local_348;
  do {
    *(undefined8 *)pvVar11 = 0;
    pvVar6 = pvVar11 + 0x18;
    *(undefined8 *)(pvVar11 + 8) = 0;
    *(undefined8 *)(pvVar11 + 0x10) = 0;
    pvVar11 = pvVar6;
    this_00 = local_348;
  } while (local_48 != pvVar6);
  do {
    while( true ) {
      uVar7 = *(long *)(this_00 + 8) - *(long *)this_00 >> 3;
      if (uVar12 <= uVar7) break;
      pvVar11 = this_00 + 0x18;
      std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append
                (this_00,uVar12 - uVar7);
      this_00 = pvVar11;
      if (local_48 == pvVar11) goto LAB_001041bb;
    }
    if ((uVar12 < uVar7) && (lVar9 = *(long *)this_00 + lVar14, *(long *)(this_00 + 8) != lVar9)) {
      *(long *)(this_00 + 8) = lVar9;
    }
    this_00 = this_00 + 0x18;
  } while (local_48 != this_00);
LAB_001041bb:
  uVar7 = 0;
  if (*(long *)(this + 0x1d0) != 0) {
    do {
      lVar14 = *(long *)(*(long *)(this + 0x1e0) + uVar7 * 8);
      if (lVar14 != 0) {
        plVar1 = (long *)(*(long *)(local_348 + (ulong)*(byte *)(lVar14 + 0x3c) * 0x18) +
                         (long)(*(int *)(lVar14 + 0x24) + -1) * 8);
        *plVar1 = *plVar1 + (ulong)*(uint *)(lVar14 + 0x20);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulong *)(this + 0x1d0));
  }
  uVar7 = 0;
  *(undefined8 *)(std::ostream::put + *(long *)(std::cout + -0x18)) = 0x17;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"segments",8);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,": ",2);
  if (uVar12 != 0) {
    do {
      uVar7 = uVar7 + 1;
      *(undefined8 *)(std::ostream::put + *(long *)(std::cout + -0x18)) = 10;
      std::ostream::_M_insert<unsigned_long>(0x107140);
    } while (uVar7 != uVar12);
  }
  plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    uVar7 = 0;
    std::ostream::put('@');
    std::ostream::flush();
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"-------------------------",0x19);
    if (uVar12 != 0) {
      do {
        uVar7 = uVar7 + 1;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"----------",10);
      } while (uVar7 != uVar12);
    }
    plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      puVar13 = &Geometry::gtype_names;
      std::ostream::put('@');
      std::ostream::flush();
      pvVar11 = local_348;
      do {
        pcVar3 = (char *)*puVar13;
        local_368 = local_358;
        if (pcVar3 == (char *)0x0) {
          std::__throw_logic_error("basic_string: construction from null is not valid");
          goto LAB_00104637;
        }
        sVar8 = strlen(pcVar3);
        local_370 = sVar8;
        if (sVar8 < 0x10) {
          psVar10 = local_358;
          if (sVar8 == 1) {
            local_358[0] = CONCAT71(local_358[0]._1_7_,*pcVar3);
          }
          else if (sVar8 != 0) goto LAB_00104553;
        }
        else {
          local_368 = (size_t *)
                      std::__cxx11::string::_M_create((ulong *)&local_368,(ulong)&local_370);
          local_358[0] = local_370;
          psVar10 = local_368;
LAB_00104553:
          memcpy(psVar10,pcVar3,sVar8);
          psVar10 = local_368;
        }
        *(undefined1 *)((long)psVar10 + local_370) = 0;
        local_360 = local_370;
        if (local_370 == 0) {
          if (local_368 != local_358) {
            operator_delete(local_368,local_358[0] + 1);
          }
        }
        else {
          if (local_368 != local_358) {
            operator_delete(local_368,local_358[0] + 1);
          }
          lVar14 = std::cout;
          pcVar3 = (char *)*puVar13;
          *(undefined8 *)(std::ostream::put + *(long *)(std::cout + -0x18)) = 0x17;
          if (pcVar3 == (char *)0x0) {
            std::ios::clear((long)&std::cout + *(long *)(lVar14 + -0x18),
                            *(uint *)(embree::AccelN::accels_print + *(long *)(lVar14 + -0x18)) | 1)
            ;
          }
          else {
            sVar8 = strlen(pcVar3);
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar3,sVar8);
          }
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,": ",2);
          if (uVar12 != 0) {
            uVar7 = 0;
            do {
              *(undefined8 *)(std::ostream::put + *(long *)(std::cout + -0x18)) = 10;
              uVar7 = uVar7 + 1;
              std::ostream::_M_insert<unsigned_long>(0x107140);
            } while (uVar7 != uVar12);
          }
          plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107230);
          if (plVar1 == (long *)0x0) goto LAB_00104637;
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))(plVar1,10);
            }
          }
          std::ostream::put('@');
          std::ostream::flush();
        }
        puVar13 = puVar13 + 1;
        pvVar11 = pvVar11 + 0x18;
      } while (local_48 != pvVar11);
      pvVar11 = local_60;
      do {
        pvVar4 = *(void **)pvVar11;
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4,*(long *)(pvVar11 + 0x10) - (long)pvVar4);
        }
        bVar15 = local_348 != pvVar11;
        pvVar11 = pvVar11 + -0x18;
      } while (bVar15);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010463c;
    }
  }
LAB_00104637:
  std::__throw_bad_cast();
LAB_0010463c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Scene::commit_task() [clone .part.0] */

void __thiscall embree::Scene::commit_task(Scene *this)

{
  char cVar1;
  ulong uVar2;
  _lambda_embree__range<unsigned_long>__1_ *in_R9;
  long in_FS_OFFSET;
  plus *in_stack_fffffffffffffdf8;
  Scene *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  _lambda_embree__range<unsigned_long>_const___1_ *local_1e8;
  undefined1 *local_1e0;
  Scene **local_1d8;
  _lambda_embree__range<unsigned_long>_const___1_ *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  Scene *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = embree::State::verbosity(*(ulong *)(this + 0x188));
  if (cVar1 != '\0') {
    printStatistics(this);
  }
  LOCK();
  *(undefined8 *)(this + 0x278) = 0;
  UNLOCK();
  uVar2 = *(ulong *)(this + 0x1d0);
  local_1e0 = &stack0xfffffffffffffdff;
  local_1d8 = &local_200;
  local_f8 = (Scene *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_200 = this;
  local_1e8 = (_lambda_embree__range<unsigned_long>_const___1_ *)&local_f8;
  if (uVar2 != 1) goto LAB_00104980;
  local_1f8 = 0;
  local_1f0 = 1;
  parallel_reduce<unsigned_long,embree::GeometryCounts,embree::Scene::commit_task()::{lambda(embree::range<unsigned_long>const&)#1},std::plus<embree::GeometryCounts>>(unsigned_long,unsigned_long,embree::GeometryCounts_const&,embree::Scene::commit_task()::{lambda(embree::range<unsigned_long>const&)#1}const&,std::plus<embree::GeometryCounts>const&)
  ::{lambda(embree::range<unsigned_long>)#1}::operator()
            ((_lambda_embree__range<unsigned_long>__1_ *)&local_1c8,&local_1e8,&local_1f8);
  while( true ) {
    *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x280) = local_1c8;
    *(undefined8 *)(this + 0x288) = uStack_1c0;
    *(undefined8 *)(this + 0x290) = local_1b8;
    *(undefined8 *)(this + 0x298) = uStack_1b0;
    *(undefined8 *)(this + 0x2a0) = local_1a8;
    *(undefined8 *)(this + 0x2a8) = uStack_1a0;
    *(undefined8 *)(this + 0x2b0) = local_198;
    *(undefined8 *)(this + 0x2b8) = uStack_190;
    *(undefined8 *)(this + 0x340) = local_108;
    *(undefined8 *)(this + 0x2c0) = local_188;
    *(undefined8 *)(this + 0x2c8) = uStack_180;
    *(undefined8 *)(this + 0x2d0) = local_178;
    *(undefined8 *)(this + 0x2d8) = uStack_170;
    *(undefined8 *)(this + 0x2e0) = local_168;
    *(undefined8 *)(this + 0x2e8) = uStack_160;
    *(undefined8 *)(this + 0x2f0) = local_158;
    *(undefined8 *)(this + 0x2f8) = uStack_150;
    *(undefined8 *)(this + 0x300) = local_148;
    *(undefined8 *)(this + 0x308) = uStack_140;
    *(undefined8 *)(this + 0x310) = local_138;
    *(undefined8 *)(this + 0x318) = uStack_130;
    *(undefined8 *)(this + 800) = local_128;
    *(undefined8 *)(this + 0x328) = uStack_120;
    *(undefined8 *)(this + 0x330) = local_118;
    *(undefined8 *)(this + 0x338) = uStack_110;
    build_cpu_accels(this);
    uVar2 = *(ulong *)(this + 0x1d0);
    local_f8 = this;
    if (uVar2 == 0) break;
    local_1e8 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
    TaskScheduler::
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (0,uVar2,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_f8,
               (TaskGroupContext *)&local_1e8);
    embree::TaskScheduler::wait();
    if (local_1e8 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) break;
    local_1c8 = local_1e8;
    std::__exception_ptr::exception_ptr::_M_addref();
    std::rethrow_exception(&local_1c8);
LAB_00104980:
    parallel_reduce_internal<unsigned_long,embree::GeometryCounts,embree::parallel_reduce<unsigned_long,embree::GeometryCounts,embree::Scene::commit_task()::_lambda(embree::range<unsigned_long>const&)_1_,std::plus<embree::GeometryCounts>>(unsigned_long,unsigned_long,embree::GeometryCounts_const&,embree::Scene::commit_task()::_lambda(embree::range<unsigned_long>const&)_1_const&,std::plus<embree::GeometryCounts>const&)::_lambda(embree::range<unsigned_long>)_1_,std::plus<embree::GeometryCounts>>
              ((ulong)&local_1c8,uVar2,uVar2,(ulong)&local_f8,(GeometryCounts_conflict *)&local_1e8,
               in_R9,in_stack_fffffffffffffdf8);
  }
  this[0x248] = (Scene)0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Scene::commit_task() */

void __thiscall embree::Scene::commit_task(Scene *this)

{
  embree::Scene::checkIfModifiedAndSet();
  if (this[0x248] == (Scene)0x0) {
    return;
  }
  commit_task(this);
  return;
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::Scene::commit(bool)::{lambda()#1}>::execute()
    */

void __thiscall
embree::TaskScheduler::ClosureTaskFunction<embree::Scene::commit(bool)::{lambda()#1}>::execute
          (ClosureTaskFunction<embree::Scene::commit(bool)::_lambda()_1_> *this)

{
  long *plVar1;
  Scene *this_00;
  long lVar2;
  long *plVar3;
  
  this_00 = *(Scene **)(this + 8);
  embree::Scene::checkIfModifiedAndSet();
  if (this_00[0x248] != (Scene)0x0) {
    Scene::commit_task(this_00);
  }
  embree::MutexSys::lock();
  lVar2 = *(long *)(*(long *)(this + 8) + 0x250);
  plVar3 = *(long **)(lVar2 + 8);
  if (plVar3 != (long *)0x0) {
    if (*(code **)(*plVar3 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar3 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  *(undefined8 *)(lVar2 + 8) = 0;
  embree::MutexSys::unlock();
  return;
}



/* embree::Scene::detachGeometry(unsigned long) */

void __thiscall embree::Scene::detachGeometry(Scene *this,ulong param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  embree::MutexSys::lock();
  if ((*(ulong *)(this + 0x1d0) <= param_1) ||
     (*(long *)(*(long *)(this + 0x1e0) + param_1 * 8) == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  this[0x248] = (Scene)0x1;
  embree::AccelN::accels_deleteGeometry((ulong)this);
  local_34 = (uint)param_1;
  std::
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  ::_M_insert_unique<unsigned_int_const&>
            ((_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
              *)(this + 400),&local_34);
  plVar3 = (long *)(param_1 * 8 + *(long *)(this + 0x1e0));
  plVar2 = (long *)*plVar3;
  if (plVar2 != (long *)0x0) {
    if (*(code **)(*plVar2 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    else {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  *plVar3 = 0;
  *(undefined8 *)(*(long *)(this + 0x220) + param_1 * 8) = 0;
  *(undefined4 *)(*(long *)(this + 0x200) + param_1 * 4) = 0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    embree::MutexSys::unlock();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Scene::bind(unsigned int, embree::Ref<embree::Geometry>) */

ulong __thiscall embree::Scene::bind(Scene *this,uint param_1,long *param_3)

{
  long *plVar1;
  _Rb_tree_node_base *p_Var2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long *plVar9;
  _Rb_tree_node_base *p_Var10;
  _Rb_tree_node_base *p_Var11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  _Rb_tree_node_base *p_Var20;
  ulong uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  uVar15 = (ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  embree::MutexSys::lock();
  if (param_1 == 0xffffffff) {
    if (*(long *)(this + 0x1b8) != 0) {
      uVar3 = *(uint *)(*(_Rb_tree_node_base **)(this + 0x1a8) + 0x20);
      uVar15 = (ulong)uVar3;
      pvVar12 = (void *)std::_Rb_tree_rebalance_for_erase
                                  (*(_Rb_tree_node_base **)(this + 0x1a8),
                                   (_Rb_tree_node_base *)(this + 0x198));
      operator_delete(pvVar12,0x28);
      *(long *)(this + 0x1b8) = *(long *)(this + 0x1b8) + -1;
      if (uVar3 == 0xffffffff) {
        uVar15 = bind();
        return uVar15;
      }
      goto LAB_001050d4;
    }
    param_1 = *(uint *)(this + 0x1c0);
    uVar15 = (ulong)param_1;
    if (0xfffffffe < uVar15 + 1) goto code_r0x0010527a;
    *(uint *)(this + 0x1c0) = param_1 + 1;
  }
  else {
    uVar3 = *(uint *)(this + 0x1c0);
    if (param_1 < uVar3) {
      p_Var2 = (_Rb_tree_node_base *)(this + 0x198);
      p_Var10 = *(_Rb_tree_node_base **)(this + 0x1a0);
      p_Var20 = p_Var2;
      if (*(_Rb_tree_node_base **)(this + 0x1a0) == (_Rb_tree_node_base *)0x0) {
code_r0x0010527a:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      do {
        while( true ) {
          p_Var11 = p_Var10;
          if (*(uint *)(p_Var11 + 0x20) < param_1) break;
          p_Var10 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
          p_Var20 = p_Var11;
          if (*(_Rb_tree_node_base **)(p_Var11 + 0x10) == (_Rb_tree_node_base *)0x0)
          goto LAB_00104c20;
        }
        p_Var10 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
      } while (*(_Rb_tree_node_base **)(p_Var11 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00104c20:
      if ((p_Var2 == p_Var20) || (param_1 < *(uint *)(p_Var20 + 0x20))) goto code_r0x0010527a;
      pvVar12 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var20,p_Var2);
      operator_delete(pvVar12,0x28);
      *(long *)(this + 0x1b8) = *(long *)(this + 0x1b8) + -1;
    }
    else {
      local_44 = uVar3;
      if (uVar3 < param_1) {
        do {
          uVar3 = local_44 + 1;
          std::
          _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
          ::_M_insert_unique<unsigned_int_const&>
                    ((_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                      *)(this + 400),&local_44);
          local_44 = uVar3;
        } while (param_1 != uVar3);
      }
      *(uint *)(this + 0x1c0) = param_1 + 1;
LAB_001050d4:
      param_1 = (uint)uVar15;
    }
  }
  uVar18 = *(ulong *)(this + 0x1d0);
  if (uVar15 < uVar18) goto LAB_00104ef3;
  uVar19 = *(ulong *)(this + 0x1d8);
  uVar22 = (ulong)(param_1 + 1);
  uVar14 = uVar22;
  if (uVar19 < uVar22) {
    uVar21 = uVar22;
    if (uVar19 != 0) {
      do {
        uVar19 = uVar19 * 2;
        uVar21 = uVar19;
      } while (uVar19 < uVar22);
    }
    if (uVar22 < uVar18) {
LAB_00104ffc:
      do {
        plVar7 = *(long **)(*(long *)(this + 0x1e0) + uVar14 * 8);
        if (plVar7 != (long *)0x0) {
          if (*(code **)(*plVar7 + 0x18) != RefCount::refDec) {
            (**(code **)(*plVar7 + 0x18))();
            uVar14 = uVar14 + 1;
            if (*(ulong *)(this + 0x1d0) <= uVar14) break;
            goto LAB_00104ffc;
          }
          LOCK();
          plVar9 = plVar7 + 1;
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ulong *)(this + 0x1d0));
      *(ulong *)(this + 0x1d0) = uVar22;
      if (*(ulong *)(this + 0x1d8) == uVar21) goto LAB_00105058;
    }
    puVar5 = *(undefined8 **)(this + 0x1e0);
    lVar13 = (**(code **)(**(long **)(this + 0x1c8) + 0x38))(*(long **)(this + 0x1c8),uVar21 * 8,8);
    uVar18 = *(ulong *)(this + 0x1d0);
    *(long *)(this + 0x1e0) = lVar13;
    if (uVar18 == 0) goto LAB_00104d57;
    uVar19 = 0;
    puVar16 = puVar5;
    while( true ) {
      uVar6 = *puVar16;
      puVar16 = puVar16 + 1;
      *(undefined8 *)(lVar13 + uVar19 * 8) = uVar6;
      uVar18 = *(ulong *)(this + 0x1d0);
      uVar19 = uVar19 + 1;
      if (uVar18 <= uVar19) break;
      lVar13 = *(long *)(this + 0x1e0);
    }
    for (; uVar18 < uVar22; uVar18 = uVar18 + 1) {
      lVar13 = *(long *)(this + 0x1e0);
LAB_00104d57:
      *(undefined8 *)(lVar13 + uVar18 * 8) = 0;
    }
    plVar7 = *(long **)(this + 0x1c8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x40))(plVar7,puVar5);
    }
    *(ulong *)(this + 0x1d8) = uVar21;
    uVar18 = *(ulong *)(this + 0x218);
    *(ulong *)(this + 0x1d0) = uVar22;
    if (uVar18 < uVar22) goto LAB_00104d9b;
LAB_0010506f:
    uVar18 = *(ulong *)(this + 0x1f8);
    *(ulong *)(this + 0x210) = uVar22;
  }
  else {
    uVar21 = uVar19;
    if (uVar22 < uVar18) goto LAB_00104ffc;
    if (uVar18 < uVar22) {
      do {
        *(undefined8 *)(*(long *)(this + 0x1e0) + uVar18 * 8) = 0;
        uVar18 = uVar18 + 1;
      } while (uVar22 != uVar18);
    }
LAB_00105058:
    uVar18 = *(ulong *)(this + 0x218);
    *(ulong *)(this + 0x1d0) = uVar22;
    if (uVar22 <= uVar18) goto LAB_0010506f;
LAB_00104d9b:
    if (uVar18 == 0) {
      uVar18 = uVar22;
      if (uVar22 < *(ulong *)(this + 0x210)) {
        *(ulong *)(this + 0x210) = uVar22;
      }
    }
    else {
      do {
        uVar18 = uVar18 * 2;
      } while (uVar18 < uVar22);
      if (uVar22 < *(ulong *)(this + 0x210)) {
        *(ulong *)(this + 0x210) = uVar22;
      }
    }
    puVar5 = *(undefined8 **)(this + 0x220);
    lVar13 = (**(code **)(**(long **)(this + 0x208) + 0x38))(*(long **)(this + 0x208),uVar18 * 8,8);
    *(long *)(this + 0x220) = lVar13;
    if (*(long *)(this + 0x210) != 0) {
      uVar19 = 0;
      puVar16 = puVar5;
      while( true ) {
        uVar6 = *puVar16;
        puVar16 = puVar16 + 1;
        *(undefined8 *)(lVar13 + uVar19 * 8) = uVar6;
        uVar19 = uVar19 + 1;
        if (*(ulong *)(this + 0x210) <= uVar19) break;
        lVar13 = *(long *)(this + 0x220);
      }
    }
    plVar7 = *(long **)(this + 0x208);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x40))(plVar7,puVar5);
    }
    *(ulong *)(this + 0x218) = uVar18;
    uVar18 = *(ulong *)(this + 0x1f8);
    *(ulong *)(this + 0x210) = uVar22;
  }
  if (uVar18 < uVar22) {
    if (uVar18 == 0) {
      uVar18 = uVar22;
      if (uVar22 < *(ulong *)(this + 0x1f0)) {
        *(ulong *)(this + 0x1f0) = uVar22;
      }
    }
    else {
      do {
        uVar18 = uVar18 * 2;
      } while (uVar18 < uVar22);
      if (uVar22 < *(ulong *)(this + 0x1f0)) {
        *(ulong *)(this + 0x1f0) = uVar22;
      }
    }
    puVar8 = *(undefined4 **)(this + 0x200);
    lVar13 = embree::alignedMalloc(uVar18 * 4,4);
    *(long *)(this + 0x200) = lVar13;
    if (*(long *)(this + 0x1f0) != 0) {
      uVar19 = 0;
      puVar17 = puVar8;
      while( true ) {
        uVar4 = *puVar17;
        puVar17 = puVar17 + 1;
        *(undefined4 *)(lVar13 + uVar19 * 4) = uVar4;
        uVar19 = uVar19 + 1;
        if (*(ulong *)(this + 0x1f0) <= uVar19) break;
        lVar13 = *(long *)(this + 0x200);
      }
    }
    embree::alignedFree(puVar8);
    *(ulong *)(this + 0x1f0) = uVar22;
    *(ulong *)(this + 0x1f8) = uVar18;
  }
  else {
    *(ulong *)(this + 0x1f0) = uVar22;
  }
LAB_00104ef3:
  plVar9 = (long *)*param_3;
  plVar7 = (long *)(*(long *)(this + 0x1e0) + uVar15 * 8);
  if (plVar9 != (long *)0x0) {
    if (*(code **)(*plVar9 + 0x10) == RefCount::refInc) {
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  plVar9 = (long *)*plVar7;
  if (plVar9 != (long *)0x0) {
    if (*(code **)(*plVar9 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar9 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    else {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  *plVar7 = *param_3;
  *(undefined4 *)(*(long *)(this + 0x200) + uVar15 * 4) = 0;
  if ((*(byte *)(*param_3 + 0x3e) & 0x20) != 0) {
    this[0x248] = (Scene)0x1;
  }
  embree::MutexSys::unlock();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}



/* embree::AccelData::deleteGeometry(unsigned long) */

void embree::AccelData::deleteGeometry(ulong param_1)

{
  return;
}



/* embree::Accel::immutable() */

void embree::Accel::immutable(void)

{
  return;
}



/* embree::Scene::build() */

void embree::Scene::build(void)

{
  return;
}



/* embree::missing_rtcCommit() */

void embree::missing_rtcCommit(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::progressMonitor(double) [clone .part.0] [clone .cold] */

void embree::Scene::progressMonitor(double param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned
   long, embree::Scene::commit_task()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold]
    */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersect1() */

void embree::invalid_rtcIntersect1(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersect4() */

void embree::invalid_rtcIntersect4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersect8() */

void embree::invalid_rtcIntersect8(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersect16() */

void embree::invalid_rtcIntersect16(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersectN() */

void embree::invalid_rtcIntersectN(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::createTriangleAccel() [clone .cold] */

void embree::Scene::createTriangleAccel(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::createTriangleMBAccel() [clone .cold] */

void embree::Scene::createTriangleMBAccel(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::commit(bool) [clone .cold] */

void embree::Scene::commit(bool param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::detachGeometry(unsigned long) [clone .cold] */

void embree::Scene::detachGeometry(ulong param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::bind(unsigned int, embree::Ref<embree::Geometry>) [clone .cold] */

void embree::Scene::bind(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
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
                    /* WARNING: Could not recover jumptable at 0x001052a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::Scene::BuildProgressMonitorInterface::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::Scene::BuildProgressMonitorInterface::operator()
          (BuildProgressMonitorInterface *this,ulong param_1)

{
  Scene *this_00;
  
  this_00 = *(Scene **)(this + 8);
  if (*(long *)(this_00 + 0x268) == 0) {
    return;
  }
  if (-1 < (long)param_1) {
    progressMonitor(this_00,(double)(long)param_1);
    return;
  }
  progressMonitor(this_00,(double)param_1);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<unsigned long, std::allocator<unsigned long> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append
          (vector<unsigned_long,std::allocator<unsigned_long>> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  undefined8 *__s;
  size_t sVar4;
  undefined8 *puVar5;
  
  if (param_1 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar5 >> 3)) {
    *puVar5 = 0;
    __s = puVar5 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 8 - (long)puVar5) + -8;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined8 *)((long)pvVar3 + sVar4);
    }
    *(undefined8 **)(this + 8) = __s;
    return;
  }
  sVar4 = (long)puVar5 - (long)pvVar3;
  uVar2 = (long)sVar4 >> 3;
  if (0xfffffffffffffff - uVar2 < param_1) {
    std::__throw_length_error("vector::_M_default_append");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = param_1 + uVar2;
  if (uVar2 < param_1) {
    uVar2 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar5 = (undefined8 *)((long)__dest + sVar4);
    *puVar5 = 0;
    if (param_1 - 1 != 0) goto LAB_00105505;
LAB_00105519:
    if (sVar4 == 0) goto LAB_00105522;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0xfffffffffffffff < uVar2) {
      uVar2 = 0xfffffffffffffff;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar5 = (undefined8 *)((long)__dest + sVar4);
    *puVar5 = 0;
    if (param_1 != 1) {
LAB_00105505:
      memset(puVar5 + 1,0,(param_1 - 1) * 8);
      goto LAB_00105519;
    }
  }
  memmove(__dest,pvVar3,sVar4);
LAB_00105522:
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 8);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* std::pair<std::_Rb_tree_iterator<unsigned int>, bool> std::_Rb_tree<unsigned int, unsigned int,
   std::_Identity<unsigned int>, std::less<unsigned int>, std::allocator<unsigned int>
   >::_M_insert_unique<unsigned int const&>(unsigned int const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
::_M_insert_unique<unsigned_int_const&>
          (_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
           *this,uint *param_1)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  bool bVar7;
  undefined1 auVar8 [16];
  
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
  uVar2 = *param_1;
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    p_Var6 = p_Var1;
    if (p_Var1 == *(_Rb_tree_node_base **)(this + 0x18)) {
      if (p_Var1 != (_Rb_tree_node_base *)0x0) {
        bVar7 = true;
        goto LAB_001056ac;
      }
    }
    else {
      p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var1);
      if ((*(uint *)(p_Var5 + 0x20) < uVar2) &&
         (p_Var5 = (_Rb_tree_node_base *)0x0, p_Var1 != (_Rb_tree_node_base *)0x0))
      goto LAB_001056a1;
    }
  }
  else {
    do {
      p_Var6 = p_Var5;
      uVar3 = *(uint *)(p_Var6 + 0x20);
      p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0x18);
      if (uVar2 < uVar3) {
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = p_Var6;
    if (uVar2 < uVar3) {
      if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var6) goto LAB_001056a1;
      p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var6);
      uVar3 = *(uint *)(p_Var5 + 0x20);
    }
    if (uVar3 < uVar2) {
LAB_001056a1:
      bVar7 = true;
      if (p_Var6 != p_Var1) {
        bVar7 = uVar2 < *(uint *)(p_Var6 + 0x20);
      }
LAB_001056ac:
      p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
      *(uint *)(p_Var5 + 0x20) = *param_1;
      std::_Rb_tree_insert_and_rebalance(bVar7,p_Var5,p_Var6,p_Var1);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      uVar4 = 1;
      goto LAB_001056dc;
    }
  }
  uVar4 = 0;
LAB_001056dc:
  auVar8[8] = uVar4;
  auVar8._0_8_ = p_Var5;
  auVar8._9_7_ = 0;
  return auVar8;
}


