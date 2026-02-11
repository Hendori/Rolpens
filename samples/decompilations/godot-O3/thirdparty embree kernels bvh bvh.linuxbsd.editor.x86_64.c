
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
                    /* WARNING: Could not recover jumptable at 0x00100049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::BVHN<4>::clear() */

void __thiscall embree::BVHN<4>::clear(BVHN<4> *this)

{
  long *plVar1;
  BVHN<4> BVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  BVHN<4> *pBVar9;
  ulong uVar10;
  BVHN<4> *pBVar11;
  ulong *puVar12;
  ulong *puVar13;
  long *plVar14;
  
  uVar8 = _LC3;
  uVar7 = _LC1;
  pBVar11 = this + 0x170;
  *(undefined8 *)(this + 0x70) = 8;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x10) = uVar7;
  *(undefined4 *)(this + 0x14) = uVar7;
  *(undefined4 *)(this + 0x18) = uVar7;
  *(undefined4 *)(this + 0x1c) = uVar7;
  *(undefined4 *)(this + 0x20) = uVar8;
  *(undefined4 *)(this + 0x24) = uVar8;
  *(undefined4 *)(this + 0x28) = uVar8;
  *(undefined4 *)(this + 0x2c) = uVar8;
  *(undefined4 *)(this + 0x30) = uVar7;
  *(undefined4 *)(this + 0x34) = uVar7;
  *(undefined4 *)(this + 0x38) = uVar7;
  *(undefined4 *)(this + 0x3c) = uVar7;
  *(undefined4 *)(this + 0x40) = uVar8;
  *(undefined4 *)(this + 0x44) = uVar8;
  *(undefined4 *)(this + 0x48) = uVar8;
  *(undefined4 *)(this + 0x4c) = uVar8;
  pBVar9 = this + 0x130;
  do {
    while (*(long *)pBVar9 != 0) {
      lVar4 = *(long *)(*(long *)pBVar9 + 0x18);
      *(long *)(*(long *)pBVar9 + 0x18) = *(long *)pBVar11;
      LOCK();
      *(long *)pBVar11 = *(long *)pBVar9;
      UNLOCK();
      LOCK();
      *(long *)pBVar9 = lVar4;
      UNLOCK();
    }
    LOCK();
    *(long *)pBVar9 = 0;
    UNLOCK();
    pBVar9 = pBVar9 + 8;
  } while (pBVar9 != pBVar11);
  plVar14 = *(long **)(this + 0x1a8);
  plVar3 = *(long **)(this + 0x1b0);
  if (plVar3 != plVar14) {
    do {
      while( true ) {
        lVar4 = *plVar14;
        if (this + 0x78 != *(BVHN<4> **)(lVar4 + 8)) break;
        embree::MutexSys::lock();
        if (this + 0x78 == *(BVHN<4> **)(lVar4 + 8)) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + 0x118);
          *plVar1 = *plVar1 + *(long *)(lVar4 + 0xa8) + *(long *)(lVar4 + 0x68);
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + 0x120);
          *plVar1 = *plVar1 + (((*(long *)(lVar4 + 0x98) + *(long *)(lVar4 + 0x58)) -
                               *(long *)(lVar4 + 0x50)) - *(long *)(lVar4 + 0x90));
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + 0x128);
          *plVar1 = *plVar1 + *(long *)(lVar4 + 0xb0) + *(long *)(lVar4 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar4 + 0x48) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x68) = 0;
          *(undefined8 *)(lVar4 + 0x70) = 0;
          *(undefined8 *)(lVar4 + 0x60) = 0;
          *(undefined8 *)(lVar4 + 0x88) = 0;
          *(undefined8 *)(lVar4 + 0x98) = 0;
          *(undefined8 *)(lVar4 + 0x90) = 0;
          *(undefined8 *)(lVar4 + 0xa8) = 0;
          *(undefined8 *)(lVar4 + 0xb0) = 0;
          *(undefined8 *)(lVar4 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar4 + 8) = 0;
          UNLOCK();
        }
        embree::MutexSys::unlock();
        plVar14 = plVar14 + 1;
        if (plVar3 == plVar14) goto LAB_0010023a;
      }
      plVar14 = plVar14 + 1;
    } while (plVar3 != plVar14);
LAB_0010023a:
    if (*(long *)(this + 0x1a8) != *(long *)(this + 0x1b0)) {
      *(long *)(this + 0x1b0) = *(long *)(this + 0x1a8);
    }
  }
  LOCK();
  *(undefined8 *)(this + 400) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x198) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x1a0) = 0;
  UNLOCK();
  if (*(long *)(this + 0x170) != 0) {
    puVar12 = *(ulong **)(this + 0x170);
    BVar2 = this[0x180];
    plVar14 = *(long **)(this + 0x78);
LAB_001002a0:
    puVar13 = puVar12;
    if (puVar12 != (ulong *)0x0) {
      do {
        puVar12 = (ulong *)puVar13[3];
        uVar5 = puVar13[4];
        uVar10 = *puVar13;
        if (*puVar13 < puVar13[1]) {
          uVar10 = puVar13[1];
        }
        if (puVar13[2] < uVar10) {
          uVar10 = puVar13[2];
        }
        if ((int)puVar13[5] == 0) {
          if (BVar2 == (BVHN<4>)0x0) {
            embree::alignedFree(puVar13);
          }
          else {
            (**(code **)(*plVar14 + 0x40))(plVar14,puVar13);
          }
        }
        else {
          if ((int)puVar13[5] != 1) goto LAB_001002a0;
          embree::os_free(puVar13,puVar13[2] + 0x40,*(bool *)((long)puVar13 + 0x2c));
        }
        if (plVar14 == (long *)0x0) goto LAB_001002a0;
        (**(code **)(*plVar14 + 0x20))(plVar14,-(uVar5 + 0x40 + uVar10),1);
        puVar13 = puVar12;
        if (puVar12 == (ulong *)0x0) break;
      } while( true );
    }
  }
  LOCK();
  *(long *)pBVar11 = 0;
  UNLOCK();
  if (*(long *)(this + 0x178) != 0) {
    puVar12 = *(ulong **)(this + 0x178);
    BVar2 = this[0x180];
    plVar14 = *(long **)(this + 0x78);
LAB_00100348:
    puVar13 = puVar12;
    if (puVar12 != (ulong *)0x0) {
      do {
        puVar12 = (ulong *)puVar13[3];
        uVar5 = puVar13[4];
        uVar10 = *puVar13;
        if (*puVar13 < puVar13[1]) {
          uVar10 = puVar13[1];
        }
        if (puVar13[2] < uVar10) {
          uVar10 = puVar13[2];
        }
        if ((int)puVar13[5] == 0) {
          if (BVar2 == (BVHN<4>)0x0) {
            embree::alignedFree(puVar13);
          }
          else {
            (**(code **)(*plVar14 + 0x40))(plVar14,puVar13);
          }
        }
        else {
          if ((int)puVar13[5] != 1) goto LAB_00100348;
          embree::os_free(puVar13,puVar13[2] + 0x40,*(bool *)((long)puVar13 + 0x2c));
        }
        if (plVar14 == (long *)0x0) goto LAB_00100348;
        (**(code **)(*plVar14 + 0x20))(plVar14,-(uVar5 + 0x40 + uVar10),1);
        puVar13 = puVar12;
        if (puVar12 == (ulong *)0x0) break;
      } while( true );
    }
  }
  LOCK();
  *(undefined8 *)(this + 0x178) = 0;
  UNLOCK();
  pBVar11 = this + 0xf0;
  do {
    LOCK();
    *(long *)pBVar11 = 0;
    UNLOCK();
    LOCK();
    *(long *)(pBVar11 + 0x40) = 0;
    UNLOCK();
    pBVar11 = pBVar11 + 8;
  } while (pBVar11 != this + 0x130);
  pvVar6 = *(void **)(this + 0x1e8);
  lVar4 = *(long *)(this + 0x1e0);
  if (pvVar6 != (void *)0x0) {
    if ((ulong)(lVar4 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar6);
    }
    else {
      embree::os_free(pvVar6,lVar4 << 5,(bool)this[0x1d0]);
    }
  }
  if (lVar4 != 0) {
    (**(code **)**(undefined8 **)(this + 0x1c8))(*(undefined8 **)(this + 0x1c8),lVar4 * -0x20,1);
  }
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  return;
}



/* embree::FastAllocator::~FastAllocator() */

void __thiscall embree::FastAllocator::~FastAllocator(FastAllocator *this)

{
  long *plVar1;
  FastAllocator FVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  FastAllocator *pFVar7;
  ulong uVar8;
  FastAllocator *pFVar9;
  MutexSys *this_00;
  MutexSys *pMVar10;
  ulong *puVar11;
  ulong *puVar12;
  long *plVar13;
  
  pFVar9 = this + 0xf8;
  pFVar7 = this + 0xb8;
  do {
    while (*(long *)pFVar7 != 0) {
      lVar4 = *(long *)(*(long *)pFVar7 + 0x18);
      *(long *)(*(long *)pFVar7 + 0x18) = *(long *)pFVar9;
      LOCK();
      *(long *)pFVar9 = *(long *)pFVar7;
      UNLOCK();
      LOCK();
      *(long *)pFVar7 = lVar4;
      UNLOCK();
    }
    LOCK();
    *(long *)pFVar7 = 0;
    UNLOCK();
    pFVar7 = pFVar7 + 8;
  } while (pFVar7 != pFVar9);
  plVar13 = *(long **)(this + 0x130);
  plVar3 = *(long **)(this + 0x138);
  if (plVar3 != plVar13) {
    do {
      while( true ) {
        lVar4 = *plVar13;
        if (this != *(FastAllocator **)(lVar4 + 8)) break;
        embree::MutexSys::lock();
        if (this == *(FastAllocator **)(lVar4 + 8)) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + 0x118);
          *plVar1 = *plVar1 + *(long *)(lVar4 + 0xa8) + *(long *)(lVar4 + 0x68);
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + 0x120);
          *plVar1 = *plVar1 + (((*(long *)(lVar4 + 0x98) + *(long *)(lVar4 + 0x58)) -
                               *(long *)(lVar4 + 0x50)) - *(long *)(lVar4 + 0x90));
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + 0x128);
          *plVar1 = *plVar1 + *(long *)(lVar4 + 0xb0) + *(long *)(lVar4 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar4 + 0x48) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x68) = 0;
          *(undefined8 *)(lVar4 + 0x70) = 0;
          *(undefined8 *)(lVar4 + 0x60) = 0;
          *(undefined8 *)(lVar4 + 0x88) = 0;
          *(undefined8 *)(lVar4 + 0x98) = 0;
          *(undefined8 *)(lVar4 + 0x90) = 0;
          *(undefined8 *)(lVar4 + 0xa8) = 0;
          *(undefined8 *)(lVar4 + 0xb0) = 0;
          *(undefined8 *)(lVar4 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar4 + 8) = 0;
          UNLOCK();
        }
        plVar13 = plVar13 + 1;
        embree::MutexSys::unlock();
        if (plVar3 == plVar13) goto LAB_00100678;
      }
      plVar13 = plVar13 + 1;
    } while (plVar3 != plVar13);
LAB_00100678:
    if (*(long *)(this + 0x138) != *(long *)(this + 0x130)) {
      *(long *)(this + 0x138) = *(long *)(this + 0x130);
    }
  }
  LOCK();
  *(undefined8 *)(this + 0x118) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x120) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x128) = 0;
  UNLOCK();
  if (*(long *)(this + 0xf8) != 0) {
    puVar11 = *(ulong **)(this + 0xf8);
    FVar2 = this[0x108];
    plVar13 = *(long **)this;
LAB_001006e0:
    puVar12 = puVar11;
    if (puVar11 != (ulong *)0x0) {
      do {
        puVar11 = (ulong *)puVar12[3];
        uVar5 = puVar12[4];
        uVar8 = *puVar12;
        if (*puVar12 < puVar12[1]) {
          uVar8 = puVar12[1];
        }
        if (puVar12[2] < uVar8) {
          uVar8 = puVar12[2];
        }
        if ((int)puVar12[5] == 0) {
          if (FVar2 == (FastAllocator)0x0) {
            embree::alignedFree(puVar12);
          }
          else {
            (**(code **)(*plVar13 + 0x40))(plVar13,puVar12);
          }
        }
        else {
          if ((int)puVar12[5] != 1) goto LAB_001006e0;
          embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
        }
        if (plVar13 == (long *)0x0) goto LAB_001006e0;
        (**(code **)(*plVar13 + 0x20))(plVar13,-(uVar5 + 0x40 + uVar8),1);
        puVar12 = puVar11;
        if (puVar11 == (ulong *)0x0) break;
      } while( true );
    }
  }
  LOCK();
  *(long *)pFVar9 = 0;
  UNLOCK();
  if (*(long *)(this + 0x100) != 0) {
    puVar11 = *(ulong **)(this + 0x100);
    FVar2 = this[0x108];
    plVar13 = *(long **)this;
LAB_00100790:
    puVar12 = puVar11;
    if (puVar11 != (ulong *)0x0) {
      do {
        puVar11 = (ulong *)puVar12[3];
        uVar5 = puVar12[4];
        uVar8 = *puVar12;
        if (*puVar12 < puVar12[1]) {
          uVar8 = puVar12[1];
        }
        if (puVar12[2] < uVar8) {
          uVar8 = puVar12[2];
        }
        if ((int)puVar12[5] == 0) {
          if (FVar2 == (FastAllocator)0x0) {
            embree::alignedFree(puVar12);
          }
          else {
            (**(code **)(*plVar13 + 0x40))(plVar13,puVar12);
          }
        }
        else {
          if ((int)puVar12[5] != 1) goto LAB_00100790;
          embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
        }
        if (plVar13 == (long *)0x0) goto LAB_00100790;
        (**(code **)(*plVar13 + 0x20))(plVar13,-(uVar5 + 0x40 + uVar8),1);
        puVar12 = puVar11;
        if (puVar11 == (ulong *)0x0) break;
      } while( true );
    }
  }
  LOCK();
  *(undefined8 *)(this + 0x100) = 0;
  UNLOCK();
  pFVar9 = this + 0x78;
  do {
    LOCK();
    *(long *)pFVar9 = 0;
    UNLOCK();
    LOCK();
    *(long *)(pFVar9 + 0x40) = 0;
    UNLOCK();
    pFVar9 = pFVar9 + 8;
  } while (pFVar9 != this + 0xb8);
  pvVar6 = *(void **)(this + 0x170);
  lVar4 = *(long *)(this + 0x168);
  if (pvVar6 != (void *)0x0) {
    if ((ulong)(lVar4 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar6);
    }
    else {
      embree::os_free(pvVar6,lVar4 << 5,(bool)this[0x158]);
    }
  }
  if (lVar4 != 0) {
    (**(code **)**(undefined8 **)(this + 0x150))(*(undefined8 **)(this + 0x150),lVar4 * -0x20,1);
  }
  pvVar6 = *(void **)(this + 0x130);
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6,*(long *)(this + 0x140) - (long)pvVar6);
  }
  this_00 = (MutexSys *)(this + 0x70);
  if (this != (FastAllocator *)0xffffffffffffffc8) {
    do {
      pMVar10 = this_00 + -8;
      embree::MutexSys::~MutexSys(this_00);
      this_00 = pMVar10;
    } while ((MutexSys *)(this + 0x30) != pMVar10);
  }
  embree::MutexSys::~MutexSys((MutexSys *)(this + 0x30));
  return;
}



/* embree::BVHN<4>::~BVHN() */

void __thiscall embree::BVHN<4>::~BVHN(BVHN<4> *this)

{
  BVHN<4> *this_00;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__BVHN_00105a30;
  lVar2 = *(long *)(this + 0x200);
  if (*(long *)(this + 0x208) != lVar2) {
    uVar3 = 0;
    do {
      this_00 = *(BVHN<4> **)(lVar2 + uVar3 * 8);
      if (this_00 != (BVHN<4> *)0x0) {
        if (*(code **)(*(long *)this_00 + 8) == ~BVHN) {
          ~BVHN(this_00);
          embree::alignedFree(this_00);
          lVar2 = *(long *)(this + 0x200);
        }
        else {
          (**(code **)(*(long *)this_00 + 8))();
          lVar2 = *(long *)(this + 0x200);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x208) - lVar2 >> 3));
  }
  embree::alignedFree(*(void **)(this + 0x230));
  pvVar1 = *(void **)(this + 0x200);
  if (pvVar1 != (void *)0x0) {
    ::operator_delete(pvVar1,*(long *)(this + 0x210) - (long)pvVar1);
  }
  FastAllocator::~FastAllocator((FastAllocator *)(this + 0x78));
  return;
}



/* embree::BVHN<4>::~BVHN() */

void __thiscall embree::BVHN<4>::~BVHN(BVHN<4> *this)

{
  ~BVHN(this);
  embree::alignedFree(this);
  return;
}



/* embree::FastAllocator::Statistics::Statistics(embree::FastAllocator*,
   embree::FastAllocator::AllocationType, bool) */

void __thiscall
embree::FastAllocator::Statistics::Statistics
          (Statistics *this,long param_1,int param_3,char param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  puVar2 = *(ulong **)(param_1 + 0xf8);
  puVar1 = *(ulong **)(param_1 + 0x100);
  if (puVar2 == (ulong *)0x0) {
    if (puVar1 == (ulong *)0x0) {
      return;
    }
LAB_00100ae9:
    lVar4 = 0;
    puVar5 = puVar1;
    do {
      if (param_3 != 3) {
        do {
          if ((int)puVar5[5] == 1) {
            if ((param_3 == 1) && (param_4 == *(char *)((long)puVar5 + 0x2c))) break;
          }
          else if (param_3 == (int)puVar5[5]) break;
          puVar5 = (ulong *)puVar5[3];
          if (puVar5 == (ulong *)0x0) goto LAB_00100b40;
        } while( true );
      }
      uVar7 = *puVar5;
      if (*puVar5 < puVar5[1]) {
        uVar7 = puVar5[1];
      }
      if (puVar5[2] < uVar7) {
        uVar7 = puVar5[2];
      }
      puVar5 = (ulong *)puVar5[3];
      lVar4 = lVar4 + uVar7;
    } while (puVar5 != (ulong *)0x0);
LAB_00100b40:
    *(long *)(this + 8) = *(long *)(this + 8) + lVar4;
    if (puVar2 != (ulong *)0x0) goto LAB_00100c00;
    lVar6 = *(long *)(this + 0x10);
  }
  else {
    lVar4 = 0;
    puVar5 = puVar2;
    do {
      if (param_3 != 3) {
        do {
          if ((int)puVar5[5] == 1) {
            if ((param_3 == 1) && (param_4 == *(char *)((long)puVar5 + 0x2c))) break;
          }
          else if (param_3 == (int)puVar5[5]) break;
          puVar5 = (ulong *)puVar5[3];
          if (puVar5 == (ulong *)0x0) goto LAB_00100add;
        } while( true );
      }
      uVar7 = puVar5[2];
      if (*puVar5 < puVar5[2]) {
        uVar7 = *puVar5;
      }
      lVar4 = lVar4 + uVar7;
      puVar5 = (ulong *)puVar5[3];
    } while (puVar5 != (ulong *)0x0);
LAB_00100add:
    *(long *)this = *(long *)this + lVar4;
    if (puVar1 != (ulong *)0x0) goto LAB_00100ae9;
LAB_00100c00:
    lVar4 = 0;
    puVar5 = puVar2;
    do {
      if (param_3 != 3) {
        do {
          if ((int)puVar5[5] == 1) {
            if ((param_3 == 1) && (param_4 == *(char *)((long)puVar5 + 0x2c))) break;
          }
          else if (param_3 == (int)puVar5[5]) break;
          puVar5 = (ulong *)puVar5[3];
          if (puVar5 == (ulong *)0x0) goto LAB_00100c65;
        } while( true );
      }
      uVar7 = *puVar5;
      if (*puVar5 < puVar5[1]) {
        uVar7 = puVar5[1];
      }
      if (puVar5[2] < uVar7) {
        uVar7 = puVar5[2];
      }
      uVar3 = puVar5[2];
      if (*puVar5 < puVar5[2]) {
        uVar3 = *puVar5;
      }
      puVar5 = (ulong *)puVar5[3];
      lVar4 = lVar4 + (uVar7 - uVar3);
    } while (puVar5 != (ulong *)0x0);
LAB_00100c65:
    lVar6 = *(long *)(this + 0x10);
    *(long *)(this + 8) = *(long *)(this + 8) + lVar4;
    if (puVar1 == (ulong *)0x0) goto LAB_00100b99;
  }
  lVar4 = 0;
  do {
    if (param_3 != 3) {
      do {
        if ((int)puVar1[5] == 1) {
          if ((param_3 == 1) && (param_4 == *(char *)((long)puVar1 + 0x2c))) break;
        }
        else if (param_3 == (int)puVar1[5]) break;
        puVar1 = (ulong *)puVar1[3];
        if (puVar1 == (ulong *)0x0) goto LAB_00100b89;
      } while( true );
    }
    puVar5 = puVar1 + 4;
    puVar1 = (ulong *)puVar1[3];
    lVar4 = lVar4 + 0x40 + *puVar5;
  } while (puVar1 != (ulong *)0x0);
LAB_00100b89:
  lVar6 = lVar4 + lVar6;
  *(long *)(this + 0x10) = lVar6;
  if (puVar2 == (ulong *)0x0) {
    return;
  }
LAB_00100b99:
  lVar4 = 0;
  while (param_3 == 3) {
LAB_00100ba4:
    puVar1 = puVar2 + 4;
    puVar2 = (ulong *)puVar2[3];
    lVar4 = lVar4 + 0x40 + *puVar1;
    if (puVar2 == (ulong *)0x0) {
LAB_00100bd1:
      *(long *)(this + 0x10) = lVar6 + lVar4;
      return;
    }
  }
  do {
    if ((int)puVar2[5] == 1) {
      if ((param_3 == 1) && (param_4 == *(char *)((long)puVar2 + 0x2c))) goto LAB_00100ba4;
    }
    else if (param_3 == (int)puVar2[5]) goto LAB_00100ba4;
    puVar2 = (ulong *)puVar2[3];
    if (puVar2 == (ulong *)0x0) goto LAB_00100bd1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::FastAllocator::Statistics::str[abi:cxx11](unsigned long) */

ulong embree::FastAllocator::Statistics::str_abi_cxx11_(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  ostream *poVar4;
  ulong in_RDX;
  ulong *in_RSI;
  long in_FS_OFFSET;
  undefined *local_1c8 [2];
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  puVar2 = _init;
  local_70 = 0;
  local_148[0] = (code *)&std::__cxx11::stringstream::vtable;
  local_1c8[0] = _init;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_1c8 + *(long *)(_init + -0x18)) = _vtable;
  local_1c8[1] = (undefined *)0x0;
  std::ios::init((streambuf *)((long)local_1c8 + *(long *)(local_1c8[0] + -0x18)));
  pcVar3 = _vtable;
  local_1b8[0] = _vtable;
  *(undefined8 *)((long)local_1b8 + *(long *)(_vtable + -0x18)) = _locale;
  std::ios::init((streambuf *)((ostream *)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
  lVar1 = _vtable;
  *(undefined8 *)((long)local_1c8 + *(long *)(_vtable + -0x18)) = _vtable;
  local_148[0] = std::ostream::flush;
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_1c8[0] = &std::__cxx11::stringbuf::vtable;
  local_1b8[0] = std::ios_base::~ios_base;
  local_1b8[2] = (code *)0x0;
  local_1b8[3] = (code *)0x0;
  local_1b8[4] = (code *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  std::locale::locale(local_178);
  local_1b8[1] = std::ostream::_M_insert<double>;
  local_170 = 0x18;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  local_130 = local_130 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"used = ",7);
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 3;
  poVar4 = std::ostream::_M_insert<double>((double)((float)*in_RSI * __LC5));
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," MB, ",5);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4,"free = ",7);
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x10) = 7;
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) = 3;
  poVar4 = std::ostream::_M_insert<double>((double)((float)in_RSI[1] * __LC5));
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," MB, ",5);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4,"wasted = ",9);
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x10) = 7;
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) = 3;
  poVar4 = std::ostream::_M_insert<double>((double)((float)in_RSI[2] * __LC5));
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," MB, ",5);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4,"total = ",8);
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x10) = 7;
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) = 3;
  poVar4 = std::ostream::_M_insert<double>
                     ((double)((float)(in_RSI[1] + *in_RSI + in_RSI[2]) * __LC5));
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," MB, ",5);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4,"#bytes/prim = ",0xe);
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x10) = 6;
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) = 2;
  std::ostream::_M_insert<double>((double)(in_RSI[1] + *in_RSI + in_RSI[2]) / (double)in_RDX);
  *(undefined8 *)(param_1 + 8) = 0;
  *(ulong *)param_1 = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (local_188 == 0) {
    std::__cxx11::string::_M_assign((string *)param_1);
  }
  else {
    std::__cxx11::string::_M_replace(param_1,0,(char *)0x0,local_190);
  }
  local_1c8[0] = &std::__cxx11::stringbuf::vtable;
  local_148[0] = std::ostream::flush;
  local_1b8[0] = std::ios_base::~ios_base;
  local_1b8[1] = std::ostream::_M_insert<double>;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
  std::locale::~locale(local_178);
  *(undefined8 *)((long)local_1c8 + *(long *)(lVar1 + -0x18)) = _vtable;
  local_1b8[0] = pcVar3;
  *(undefined8 *)((long)local_1b8 + *(long *)(pcVar3 + -0x18)) = _locale;
  local_1c8[0] = puVar2;
  *(undefined8 *)((long)local_1c8 + *(long *)(puVar2 + -0x18)) = _vtable;
  local_148[0] = (code *)&std::__cxx11::stringstream::vtable;
  local_1c8[1] = (undefined *)0x0;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::FastAllocator::AllStatistics::print(unsigned long) */

void __thiscall embree::FastAllocator::AllStatistics::print(AllStatistics *this,ulong param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  ostream *poVar4;
  long in_FS_OFFSET;
  double local_470;
  char *local_438;
  long local_430;
  char local_428;
  undefined7 uStack_427;
  char *local_418;
  long local_410;
  char local_408;
  undefined7 uStack_407;
  long *local_3f8;
  long local_3f0;
  long local_3e8 [2];
  long *local_3d8;
  long local_3d0;
  long local_3c8 [2];
  long *local_3b8;
  long local_3b0;
  long local_3a8 [2];
  long *local_398;
  long local_390;
  long local_388 [2];
  long *local_378;
  long local_370;
  long local_368 [2];
  undefined *local_358 [2];
  code *local_348 [5];
  ulong local_320;
  long local_318;
  undefined8 local_310;
  locale local_308 [8];
  undefined4 local_300;
  undefined1 *local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined7 uStack_2e7;
  code *local_2d8 [3];
  uint local_2c0;
  undefined8 local_200;
  undefined2 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined *local_1c8 [2];
  code *local_1b8 [5];
  ulong local_190;
  long local_188;
  undefined8 local_180;
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [3];
  uint local_130;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_2d8);
  local_2d8[0] = (code *)&std::__cxx11::stringstream::vtable;
  local_1f8 = 0;
  local_358[0] = _init;
  local_200 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  *(undefined8 *)((long)local_358 + *(long *)(_init + -0x18)) = _vtable;
  local_358[1] = (undefined *)0x0;
  std::ios::init((streambuf *)((long)local_358 + *(long *)(local_358[0] + -0x18)));
  pcVar3 = _vtable;
  local_348[0] = _vtable;
  *(undefined8 *)((long)local_348 + *(long *)(_vtable + -0x18)) = _locale;
  std::ios::init((streambuf *)((ostream *)local_348 + *(long *)(local_348[0] + -0x18)));
  lVar2 = _vtable;
  *(undefined8 *)((long)local_358 + *(long *)(_vtable + -0x18)) = _vtable;
  local_358[0] = &std::__cxx11::stringbuf::vtable;
  local_2d8[0] = std::ostream::flush;
  local_348[0] = std::ios_base::~ios_base;
  local_348[1] = (code *)&std::__cxx11::stringbuf::vtable;
  local_348[2] = (code *)0x0;
  local_348[3] = (code *)0x0;
  local_348[4] = (code *)0x0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  std::locale::locale(local_308);
  local_348[1] = std::ostream::_M_insert<double>;
  local_300 = 0x18;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2f8 = &local_2e8;
  std::ios::init((streambuf *)local_2d8);
  local_2c0 = local_2c0 & 0xfffffefb | 4;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_348,"  alloc : ",10);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_348,"used = ",7);
  *(undefined8 *)((long)local_348 + *(long *)(local_348[0] + -0x18) + 0x10) = 7;
  *(undefined8 *)((long)local_348 + *(long *)(local_348[0] + -0x18) + 8) = 3;
  poVar4 = std::ostream::_M_insert<double>((double)((float)*(ulong *)this * __LC5));
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," MB, ",5);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar4,"                                                            ",0x3c);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4,"#bytes/prim = ",0xe);
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x10) = 6;
  *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) = 2;
  local_470 = (double)param_1;
  std::ostream::_M_insert<double>((double)*(ulong *)this / local_470);
  local_430 = 0;
  local_428 = '\0';
  local_438 = &local_428;
  if (local_318 == 0) {
    std::__cxx11::string::_M_assign((string *)&local_438);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)&local_438,0,(char *)0x0,local_320);
  }
  poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)&std::cout,local_438,local_430);
  plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)poVar4);
    std::ostream::flush();
    if (local_438 != &local_428) {
      operator_delete(local_438,CONCAT71(uStack_427,local_428) + 1);
    }
    std::ios_base::ios_base((ios_base *)local_148);
    local_148[0] = (code *)&std::__cxx11::stringstream::vtable;
    local_70 = 0;
    local_1c8[0] = _init;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    *(undefined8 *)((long)local_1c8 + *(long *)(_init + -0x18)) = _vtable;
    local_1c8[1] = (undefined *)0x0;
    std::ios::init((streambuf *)((long)local_1c8 + *(long *)(local_1c8[0] + -0x18)));
    local_1b8[0] = pcVar3;
    *(undefined8 *)((long)local_1b8 + *(long *)(pcVar3 + -0x18)) = _locale;
    std::ios::init((streambuf *)((ostream *)local_1b8 + *(long *)(local_1b8[0] + -0x18)));
    *(undefined8 *)((long)local_1c8 + *(long *)(lVar2 + -0x18)) = _vtable;
    local_1c8[0] = &std::__cxx11::stringbuf::vtable;
    local_148[0] = std::ostream::flush;
    local_1b8[0] = std::ios_base::~ios_base;
    local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
    local_1b8[2] = (code *)0x0;
    local_1b8[3] = (code *)0x0;
    local_1b8[4] = (code *)0x0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    std::locale::locale(local_178);
    local_1b8[1] = std::ostream::_M_insert<double>;
    local_170 = 0x18;
    local_160 = 0;
    local_158 = 0;
    local_168 = &local_158;
    std::ios::init((streambuf *)local_148);
    local_130 = local_130 & 0xfffffefb | 4;
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"  alloc : ",10);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"used = ",7);
    *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 0x10) = 7;
    *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18) + 8) = 3;
    poVar4 = std::ostream::_M_insert<double>((double)((float)*(ulong *)this * __LC5));
    std::__ostream_insert<char,std::char_traits<char>>(poVar4," MB, ",5);
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,"free = ",7);
    *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x10) = 7;
    *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) = 3;
    poVar4 = std::ostream::_M_insert<double>((double)((float)*(ulong *)(this + 8) * __LC5));
    std::__ostream_insert<char,std::char_traits<char>>(poVar4," MB, ",5);
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,"wasted = ",9);
    *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x10) = 7;
    *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) = 3;
    poVar4 = std::ostream::_M_insert<double>((double)((float)*(ulong *)(this + 0x10) * __LC5));
    std::__ostream_insert<char,std::char_traits<char>>(poVar4," MB, ",5);
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,"total = ",8);
    *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x10) = 7;
    *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) = 3;
    poVar4 = std::ostream::_M_insert<double>
                       ((double)((float)(ulong)(*(long *)(this + 8) + *(long *)this +
                                               *(long *)(this + 0x10)) * __LC5));
    std::__ostream_insert<char,std::char_traits<char>>(poVar4," MB, ",5);
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,"#bytes/prim = ",0xe);
    *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x10) = 6;
    *(undefined8 *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) = 2;
    std::ostream::_M_insert<double>
              ((double)(ulong)(*(long *)(this + 8) + *(long *)this + *(long *)(this + 0x10)) /
               local_470);
    local_410 = 0;
    local_408 = '\0';
    local_418 = &local_408;
    if (local_188 == 0) {
      std::__cxx11::string::_M_assign((string *)&local_418);
    }
    else {
      std::__cxx11::string::_M_replace((ulong)&local_418,0,(char *)0x0,local_190);
    }
    poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&std::cout,local_418,local_410);
    plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put((char)poVar4);
      std::ostream::flush();
      if (local_418 != &local_408) {
        operator_delete(local_418,CONCAT71(uStack_407,local_408) + 1);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"  total : ",10);
      Statistics::str_abi_cxx11_((ulong)&local_3f8);
      poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&std::cout,(char *)local_3f8,local_3f0);
      plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
      if (plVar1 != (long *)0x0) {
        if ((char)plVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar1 + 0x30))(plVar1,10);
          }
        }
        std::ostream::put((char)poVar4);
        std::ostream::flush();
        if (local_3f8 != local_3e8) {
          operator_delete(local_3f8,local_3e8[0] + 1);
        }
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"  4K    : ",10);
        Statistics::str_abi_cxx11_((ulong)&local_3d8);
        poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                           ((ostream *)&std::cout,(char *)local_3d8,local_3d0);
        plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
        if (plVar1 != (long *)0x0) {
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))(plVar1,10);
            }
          }
          std::ostream::put((char)poVar4);
          std::ostream::flush();
          if (local_3d8 != local_3c8) {
            operator_delete(local_3d8,local_3c8[0] + 1);
          }
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"  2M    : ",10);
          Statistics::str_abi_cxx11_((ulong)&local_3b8);
          poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                             ((ostream *)&std::cout,(char *)local_3b8,local_3b0);
          plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
          if (plVar1 != (long *)0x0) {
            if ((char)plVar1[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
                (**(code **)(*plVar1 + 0x30))(plVar1,10);
              }
            }
            std::ostream::put((char)poVar4);
            std::ostream::flush();
            if (local_3b8 != local_3a8) {
              operator_delete(local_3b8,local_3a8[0] + 1);
            }
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)&std::cout,"  malloc: ",10);
            Statistics::str_abi_cxx11_((ulong)&local_398);
            poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                               ((ostream *)&std::cout,(char *)local_398,local_390);
            plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
            if (plVar1 != (long *)0x0) {
              if ((char)plVar1[7] == '\0') {
                std::ctype<char>::_M_widen_init();
                if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
                  (**(code **)(*plVar1 + 0x30))(plVar1,10);
                }
              }
              std::ostream::put((char)poVar4);
              std::ostream::flush();
              if (local_398 != local_388) {
                operator_delete(local_398,local_388[0] + 1);
              }
              std::__ostream_insert<char,std::char_traits<char>>
                        ((ostream *)&std::cout,"  shared: ",10);
              Statistics::str_abi_cxx11_((ulong)&local_378);
              poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                                 ((ostream *)&std::cout,(char *)local_378,local_370);
              plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
              if (plVar1 != (long *)0x0) {
                if ((char)plVar1[7] == '\0') {
                  std::ctype<char>::_M_widen_init();
                  if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
                    (**(code **)(*plVar1 + 0x30))(plVar1,10);
                  }
                }
                std::ostream::put((char)poVar4);
                std::ostream::flush();
                if (local_378 != local_368) {
                  operator_delete(local_378,local_368[0] + 1);
                }
                local_1c8[0] = &std::__cxx11::stringbuf::vtable;
                local_148[0] = std::ostream::flush;
                local_1b8[0] = std::ios_base::~ios_base;
                local_1b8[1] = std::ostream::_M_insert<double>;
                if (local_168 != &local_158) {
                  operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
                }
                local_1b8[1] = (code *)&std::__cxx11::stringbuf::vtable;
                std::locale::~locale(local_178);
                *(undefined8 *)((long)local_1c8 + *(long *)(lVar2 + -0x18)) = _vtable;
                local_1b8[0] = pcVar3;
                *(undefined8 *)((long)local_1b8 + *(long *)(pcVar3 + -0x18)) = _locale;
                local_1c8[0] = _init;
                *(undefined8 *)((long)local_1c8 + *(long *)(_init + -0x18)) = _vtable;
                local_148[0] = (code *)&std::__cxx11::stringstream::vtable;
                local_1c8[1] = (undefined *)0x0;
                std::ios_base::~ios_base((ios_base *)local_148);
                local_358[0] = &std::__cxx11::stringbuf::vtable;
                local_2d8[0] = std::ostream::flush;
                local_348[0] = std::ios_base::~ios_base;
                local_348[1] = std::ostream::_M_insert<double>;
                if (local_2f8 != &local_2e8) {
                  operator_delete(local_2f8,CONCAT71(uStack_2e7,local_2e8) + 1);
                }
                local_348[1] = (code *)&std::__cxx11::stringbuf::vtable;
                std::locale::~locale(local_308);
                *(undefined8 *)((long)local_358 + *(long *)(lVar2 + -0x18)) = _vtable;
                local_348[0] = pcVar3;
                *(undefined8 *)((long)local_348 + *(long *)(pcVar3 + -0x18)) = _locale;
                local_358[0] = _init;
                *(undefined8 *)((long)local_358 + *(long *)(_init + -0x18)) = _vtable;
                local_2d8[0] = (code *)&std::__cxx11::stringstream::vtable;
                local_358[1] = (undefined *)0x0;
                std::ios_base::~ios_base((ios_base *)local_2d8);
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_bad_cast();
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
      goto LAB_00102630;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_6 != 0) goto LAB_00102630;
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
      goto LAB_00102630;
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
LAB_00102630:
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
          goto LAB_0010287a;
        }
      }
      else {
        LOCK();
        uVar6 = *puVar3;
        *puVar3 = *puVar3 + uVar4;
        UNLOCK();
        if ((uVar4 + uVar6 <= puVar3[2]) || (param_3)) {
LAB_0010287a:
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
LAB_00102a8a:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_00102a8a;
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
LAB_00102954:
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
          goto LAB_00102954;
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



/* embree::FastAllocator::Block::print_block() const */

void __thiscall embree::FastAllocator::Block::print_block(Block *this)

{
  Block BVar1;
  int iVar2;
  ostream *poVar3;
  
  iVar2 = *(int *)(this + 0x28);
  if (iVar2 == 0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"A",1);
    BVar1 = this[0x2c];
  }
  else {
    if (iVar2 == 1) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"O",1);
    }
    else if (iVar2 == 2) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"S",1);
    }
    BVar1 = this[0x2c];
  }
  if (BVar1 != (Block)0x0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"H",1);
  }
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"[",1);
  poVar3 = std::ostream::_M_insert<unsigned_long>(0x1070b0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,", ",2);
  poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)poVar3);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,", ",2);
  poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)poVar3);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,"] ",2);
  return;
}



/* embree::FastAllocator::print_blocks() */

void __thiscall embree::FastAllocator::print_blocks(FastAllocator *this)

{
  long *plVar1;
  Block *pBVar2;
  ostream *poVar3;
  
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&std::cout,"  estimatedSize = ",0x12);
  poVar3 = std::ostream::_M_insert<unsigned_long>(0x1070b0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,", slotMask = ",0xd);
  poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)poVar3);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,", use_single_mode = ",0x14);
  poVar3 = std::ostream::_M_insert<bool>(SUB81(poVar3,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,", maxGrowSize = ",0x10);
  poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)poVar3);
  std::__ostream_insert<char,std::char_traits<char>>(poVar3,", defaultBlockSize = ",0x15);
  poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)poVar3);
  plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)poVar3);
    std::ostream::flush();
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"  used blocks = ",0x10);
    if (*(long *)(this + 0xf8) != 0) {
      for (pBVar2 = *(Block **)(this + 0xf8); pBVar2 != (Block *)0x0;
          pBVar2 = *(Block **)(pBVar2 + 0x18)) {
        Block::print_block(pBVar2);
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"[END]",5);
    plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x1071a0);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put(-0x50);
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"  free blocks = ",0x10);
      if (*(long *)(this + 0x100) != 0) {
        for (pBVar2 = *(Block **)(this + 0x100); pBVar2 != (Block *)0x0;
            pBVar2 = *(Block **)(pBVar2 + 0x18)) {
          Block::print_block(pBVar2);
        }
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"[END]",5);
      plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x1071a0);
      if (plVar1 != (long *)0x0) {
        if ((char)plVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar1 + 0x30))(plVar1,10);
          }
        }
        std::ostream::put(-0x50);
        std::ostream::flush();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_bad_cast();
}



/* embree::BVHN<4>::operator new(unsigned long) */

void * __thiscall embree::BVHN<4>::operator_new(BVHN<4> *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)embree::alignedMalloc((ulong)this,0x10);
  return pvVar1;
}



/* embree::BVHN<4>::operator delete(void*) */

void __thiscall embree::BVHN<4>::operator_delete(BVHN<4> *this,void *param_1)

{
  embree::alignedFree(this);
  return;
}



/* embree::BVHN<4>::operator new[](unsigned long) */

void * __thiscall embree::BVHN<4>::operator_new__(BVHN<4> *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)embree::alignedMalloc((ulong)this,0x10);
  return pvVar1;
}



/* embree::BVHN<4>::operator delete[](void*) */

void __thiscall embree::BVHN<4>::operator_delete__(BVHN<4> *this,void *param_1)

{
  embree::alignedFree(this);
  return;
}



/* embree::BVHN<4>::BVHN(embree::PrimitiveType const&, embree::Scene*) */

void __thiscall embree::BVHN<4>::BVHN(BVHN<4> *this,PrimitiveType *param_1,Scene *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  MutexSys *this_00;
  MutexSys *pMVar5;
  long lVar6;
  
  uVar4 = _LC3;
  uVar3 = _LC1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x24) = uVar4;
  *(undefined4 *)(this + 0x28) = uVar4;
  *(undefined4 *)(this + 0x2c) = uVar4;
  *(undefined4 *)(this + 0x30) = uVar3;
  *(undefined4 *)(this + 0x34) = uVar3;
  *(undefined4 *)(this + 0x38) = uVar3;
  *(undefined4 *)(this + 0x3c) = uVar3;
  *(undefined4 *)(this + 0x40) = uVar4;
  *(undefined4 *)(this + 0x44) = uVar4;
  *(undefined4 *)(this + 0x48) = uVar4;
  *(undefined4 *)(this + 0x4c) = uVar4;
  *(undefined4 *)(this + 0x50) = 3;
  *(undefined ***)this = &PTR__BVHN_00105a30;
  uVar2 = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(this + 0x70) = 8;
  lVar6 = *(long *)(param_2 + 0x188);
  uVar1 = *(uint *)(param_2 + 0x230);
  *(PrimitiveType **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = uVar2;
  *(Scene **)(this + 0x68) = param_2;
  *(long *)(this + 0x78) = lVar6;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0x1000;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0x1000;
  *(undefined8 *)(this + 0xa0) = 0x1fffc0;
  embree::MutexSys::MutexSys((MutexSys *)(this + 0xa8));
  this_00 = (MutexSys *)(this + 0xb0);
  do {
    pMVar5 = this_00 + 8;
    embree::MutexSys::MutexSys(this_00);
    this_00 = pMVar5;
  } while (pMVar5 != (MutexSys *)(this + 0xf0));
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined2 *)(this + 0x180) = 0x100;
  if (lVar6 != 0) {
    lVar6 = lVar6 + 0x548;
  }
  *(undefined8 *)(this + 0x178) = 0;
  this[0x182] = (BVHN<4>)0x0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(uint *)(this + 0x1c0) = ~uVar1 & 1;
  *(long *)(this + 0x1c8) = lVar6;
  this[0x1d0] = (BVHN<4>)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  do {
    LOCK();
    *(undefined8 *)pMVar5 = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(pMVar5 + 0x40) = 0;
    UNLOCK();
    pMVar5 = pMVar5 + 8;
  } while (pMVar5 != (MutexSys *)(this + 0x130));
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  return;
}



/* embree::BVHN<4>::set(embree::NodeRefPtr<4>, embree::LBBox<embree::Vec3fa> const&, unsigned long)
    */

void __thiscall
embree::BVHN<4>::set(BVHN<4> *this,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(this + 0x70) = param_2;
  uVar1 = param_3[1];
  *(undefined8 *)(this + 0x10) = *param_3;
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(this + 0x20) = param_3[2];
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = param_3[5];
  *(undefined8 *)(this + 0x30) = param_3[4];
  *(undefined8 *)(this + 0x38) = uVar1;
  uVar1 = param_3[6];
  uVar2 = param_3[7];
  *(undefined8 *)(this + 0x1f0) = param_4;
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x48) = uVar2;
  return;
}



/* embree::BVHN<4>::clearBarrier(embree::NodeRefPtr<4>&) */

void __thiscall embree::BVHN<4>::clearBarrier(BVHN<4> *this,NodeRefPtr *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  NodeRefPtr *pNVar14;
  NodeRefPtr *pNVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  
  uVar9 = *(ulong *)param_1;
  if ((long)uVar9 < 0) {
    *(ulong *)param_1 = uVar9 & 0x7fffffffffffffff;
    return;
  }
  if ((uVar9 & 8) != 0) {
    return;
  }
  puVar10 = (ulong *)(uVar9 & 0xfffffffffffffff0);
  puVar1 = puVar10 + 4;
  do {
    uVar9 = *puVar10;
    if ((long)uVar9 < 0) {
      *puVar10 = uVar9 & 0x7fffffffffffffff;
    }
    else if ((uVar9 & 8) == 0) {
      puVar19 = (ulong *)(uVar9 & 0xfffffffffffffff0);
      puVar2 = puVar19 + 4;
      do {
        uVar9 = *puVar19;
        if ((long)uVar9 < 0) {
          *puVar19 = uVar9 & 0x7fffffffffffffff;
        }
        else if ((uVar9 & 8) == 0) {
          puVar18 = (ulong *)(uVar9 & 0xfffffffffffffff0);
          puVar3 = puVar18 + 4;
          do {
            uVar9 = *puVar18;
            if ((long)uVar9 < 0) {
              *puVar18 = uVar9 & 0x7fffffffffffffff;
            }
            else if ((uVar9 & 8) == 0) {
              puVar17 = (ulong *)(uVar9 & 0xfffffffffffffff0);
              puVar8 = puVar17 + 4;
              do {
                uVar9 = *puVar17;
                if ((long)uVar9 < 0) {
                  *puVar17 = uVar9 & 0x7fffffffffffffff;
                }
                else if ((uVar9 & 8) == 0) {
                  puVar12 = (ulong *)(uVar9 & 0xfffffffffffffff0);
                  puVar4 = puVar12 + 4;
                  do {
                    uVar9 = *puVar12;
                    if ((long)uVar9 < 0) {
                      *puVar12 = uVar9 & 0x7fffffffffffffff;
                    }
                    else if ((uVar9 & 8) == 0) {
                      puVar13 = (ulong *)(uVar9 & 0xfffffffffffffff0);
                      puVar5 = puVar13 + 4;
                      do {
                        uVar9 = *puVar13;
                        if ((long)uVar9 < 0) {
                          *puVar13 = uVar9 & 0x7fffffffffffffff;
                        }
                        else if ((uVar9 & 8) == 0) {
                          puVar11 = (ulong *)(uVar9 & 0xfffffffffffffff0);
                          puVar6 = puVar11 + 4;
                          do {
                            uVar9 = *puVar11;
                            if ((long)uVar9 < 0) {
                              *puVar11 = uVar9 & 0x7fffffffffffffff;
                            }
                            else if ((uVar9 & 8) == 0) {
                              puVar16 = (ulong *)(uVar9 & 0xfffffffffffffff0);
                              puVar7 = puVar16 + 4;
                              do {
                                uVar9 = *puVar16;
                                if ((long)uVar9 < 0) {
                                  *puVar16 = uVar9 & 0x7fffffffffffffff;
                                }
                                else if ((uVar9 & 8) == 0) {
                                  pNVar14 = (NodeRefPtr *)(uVar9 & 0xfffffffffffffff0);
                                  do {
                                    pNVar15 = pNVar14 + 8;
                                    clearBarrier(this,pNVar14);
                                    pNVar14 = pNVar15;
                                  } while (pNVar15 !=
                                           (NodeRefPtr *)(uVar9 & 0xfffffffffffffff0) + 0x20);
                                }
                                puVar16 = puVar16 + 1;
                              } while (puVar16 != puVar7);
                            }
                            puVar11 = puVar11 + 1;
                          } while (puVar11 != puVar6);
                        }
                        puVar13 = puVar13 + 1;
                      } while (puVar13 != puVar5);
                    }
                    puVar12 = puVar12 + 1;
                  } while (puVar12 != puVar4);
                }
                puVar17 = puVar17 + 1;
              } while (puVar17 != puVar8);
            }
            puVar18 = puVar18 + 1;
          } while (puVar18 != puVar3);
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar2);
    }
    puVar10 = puVar10 + 1;
  } while (puVar10 != puVar1);
  return;
}



/* embree::BVHN<4>::preBuild(std::__cxx11::string const&) */

undefined8 __thiscall embree::BVHN<4>::preBuild(BVHN<4> *this,string *param_1)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  ostream *poVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 8) == 0) {
    return _LC35;
  }
  cVar3 = embree::State::verbosity(*(ulong *)(this + 0x60));
  if (cVar3 == '\0') {
    uVar1 = *(ulong *)(this + 0x60);
    lVar5 = *(long *)(uVar1 + 0x4b0);
  }
  else {
    embree::MutexSys::lock();
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"building BVH",0xc);
    poVar4 = (ostream *)std::ostream::operator<<((ostream *)&std::cout,4);
    lVar5 = std::__cxx11::string::find((char *)param_1,0x1035b2,0);
    pcVar6 = "MB";
    if (lVar5 == -1) {
      pcVar6 = "";
    }
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,pcVar6,(ulong)(lVar5 != -1) * 2);
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,"<",1);
    pcVar6 = (char *)(**(code **)**(undefined8 **)(this + 0x58))();
    poVar4 = std::operator<<(poVar4,pcVar6);
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,"> using ",8);
    poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                       (poVar4,*(char **)param_1,*(long *)(param_1 + 8));
    std::__ostream_insert<char,std::char_traits<char>>(poVar4," ...",4);
    plVar2 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_cast();
    }
    if ((char)plVar2[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar2 + 0x30))(plVar2,10);
      }
    }
    std::ostream::put((char)poVar4);
    std::ostream::flush();
    std::ostream::flush();
    embree::MutexSys::unlock();
    uVar1 = *(ulong *)(this + 0x60);
    lVar5 = *(long *)(uVar1 + 0x4b0);
  }
  if ((lVar5 == 0) && (cVar3 = embree::State::verbosity(uVar1), cVar3 == '\0')) {
    return 0;
  }
  uVar7 = embree::getSeconds();
  return uVar7;
}



/* embree::BVHN<4>::cleanup() */

void __thiscall embree::BVHN<4>::cleanup(BVHN<4> *this)

{
  BVHN<4> *pBVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  BVHN<4> *pBVar5;
  long *plVar6;
  
  pBVar5 = this + 0x130;
  pBVar1 = this + 0x170;
  do {
    while (*(long *)pBVar5 != 0) {
      lVar4 = *(long *)(*(long *)pBVar5 + 0x18);
      *(long *)(*(long *)pBVar5 + 0x18) = *(long *)pBVar1;
      LOCK();
      *(long *)pBVar1 = *(long *)pBVar5;
      UNLOCK();
      LOCK();
      *(long *)pBVar5 = lVar4;
      UNLOCK();
    }
    LOCK();
    *(long *)pBVar5 = 0;
    UNLOCK();
    pBVar5 = pBVar5 + 8;
  } while (pBVar1 != pBVar5);
  plVar6 = *(long **)(this + 0x1a8);
  plVar3 = *(long **)(this + 0x1b0);
  if (plVar3 != plVar6) {
    do {
      while( true ) {
        lVar4 = *plVar6;
        if (this + 0x78 != *(BVHN<4> **)(lVar4 + 8)) break;
        embree::MutexSys::lock();
        if (this + 0x78 == *(BVHN<4> **)(lVar4 + 8)) {
          LOCK();
          plVar2 = (long *)(*(long *)(lVar4 + 8) + 0x118);
          *plVar2 = *plVar2 + *(long *)(lVar4 + 0xa8) + *(long *)(lVar4 + 0x68);
          UNLOCK();
          LOCK();
          plVar2 = (long *)(*(long *)(lVar4 + 8) + 0x120);
          *plVar2 = *plVar2 + (((*(long *)(lVar4 + 0x98) + *(long *)(lVar4 + 0x58)) -
                               *(long *)(lVar4 + 0x50)) - *(long *)(lVar4 + 0x90));
          UNLOCK();
          LOCK();
          plVar2 = (long *)(*(long *)(lVar4 + 8) + 0x128);
          *plVar2 = *plVar2 + *(long *)(lVar4 + 0xb0) + *(long *)(lVar4 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar4 + 0x48) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x68) = 0;
          *(undefined8 *)(lVar4 + 0x70) = 0;
          *(undefined8 *)(lVar4 + 0x60) = 0;
          *(undefined8 *)(lVar4 + 0x88) = 0;
          *(undefined8 *)(lVar4 + 0x98) = 0;
          *(undefined8 *)(lVar4 + 0x90) = 0;
          *(undefined8 *)(lVar4 + 0xa8) = 0;
          *(undefined8 *)(lVar4 + 0xb0) = 0;
          *(undefined8 *)(lVar4 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar4 + 8) = 0;
          UNLOCK();
        }
        plVar6 = plVar6 + 1;
        embree::MutexSys::unlock();
        if (plVar3 == plVar6) goto LAB_0010394f;
      }
      plVar6 = plVar6 + 1;
    } while (plVar3 != plVar6);
LAB_0010394f:
    if (*(long *)(this + 0x1b0) != *(long *)(this + 0x1a8)) {
      *(long *)(this + 0x1b0) = *(long *)(this + 0x1a8);
    }
  }
  return;
}



/* embree::BVHN<4>::encodeNode(embree::AABBNode_t<embree::NodeRefPtr<4>, 4>*) */

AABBNode_t * embree::BVHN<4>::encodeNode(AABBNode_t *param_1)

{
  return param_1;
}



/* embree::BVHN<4>::encodeNode(embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>*) */

ulong embree::BVHN<4>::encodeNode(AABBNodeMB_t *param_1)

{
  return (ulong)param_1 | 1;
}



/* embree::BVHN<4>::encodeNode(embree::AABBNodeMB4D_t<embree::NodeRefPtr<4>, 4>*) */

ulong embree::BVHN<4>::encodeNode(AABBNodeMB4D_t *param_1)

{
  return (ulong)param_1 | 6;
}



/* embree::BVHN<4>::encodeNode(embree::OBBNode_t<embree::NodeRefPtr<4>, 4>*) */

ulong embree::BVHN<4>::encodeNode(OBBNode_t *param_1)

{
  return (ulong)param_1 | 2;
}



/* embree::BVHN<4>::encodeNode(embree::OBBNodeMB_t<embree::NodeRefPtr<4>, 4>*) */

ulong embree::BVHN<4>::encodeNode(OBBNodeMB_t *param_1)

{
  return (ulong)param_1 | 3;
}



/* embree::BVHN<4>::encodeLeaf(void*, unsigned long) */

ulong embree::BVHN<4>::encodeLeaf(void *param_1,ulong param_2)

{
  if (7 < param_2) {
    param_2 = 7;
  }
  return (ulong)param_1 | param_2 + 8;
}



/* embree::BVHN<4>::encodeTypedLeaf(void*, unsigned long) */

ulong embree::BVHN<4>::encodeTypedLeaf(void *param_1,ulong param_2)

{
  return (ulong)param_1 | param_2 + 8;
}



/* embree::BVHN<4>::prefetch(embree::NodeRefPtr<4>, int) */

long embree::BVHN<4>::prefetch(long param_1,int param_2)

{
  if ((param_2 != 0x100000) && (1 < param_2)) {
    return param_1 + 0x40;
  }
  return param_1 + 0x40;
}



/* embree::BVHN<4>::prefetchW(embree::NodeRefPtr<4>, int) */

void embree::BVHN<4>::prefetchW(void)

{
  return;
}



/* embree::BVHN<4>::CreateAlloc::CreateAlloc(embree::BVHN<4>*) */

void __thiscall embree::BVHN<4>::CreateAlloc::CreateAlloc(CreateAlloc *this,BVHN *param_1)

{
  *(BVHN **)this = param_1 + 0x78;
  return;
}



/* embree::BVHN<4>::Allocator::Allocator(embree::BVHN<4>*) */

void __thiscall embree::BVHN<4>::Allocator::Allocator(Allocator *this,BVHN *param_1)

{
  *(BVHN **)this = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHN<4>::Allocator::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

MutexSys * __thiscall embree::BVHN<4>::Allocator::operator()(Allocator *this,ulong param_1)

{
  FastAllocator *this_00;
  long lVar1;
  MutexSys *pMVar2;
  long *plVar3;
  MutexSys *pMVar4;
  undefined8 uVar5;
  MutexSys *this_01;
  ulong uVar6;
  long in_FS_OFFSET;
  MutexSys *local_40;
  MutexSys *local_38;
  long local_30;
  
  lVar1 = lRam0000000000103a9d;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_01 = *(MutexSys **)(in_FS_OFFSET + lRam0000000000103a9d);
  if (this_01 == (MutexSys *)0x0) {
    this_01 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
    embree::MutexSys::MutexSys(this_01);
    *(undefined8 *)(this_01 + 8) = 0;
    *(MutexSys **)(this_01 + 0x40) = this_01;
    *(undefined8 *)(this_01 + 0x48) = 0;
    *(undefined8 *)(this_01 + 0x50) = 0;
    *(undefined8 *)(this_01 + 0x58) = 0;
    *(undefined8 *)(this_01 + 0x60) = 0;
    *(undefined8 *)(this_01 + 0x68) = 0;
    *(undefined8 *)(this_01 + 0x70) = 0;
    *(MutexSys **)(this_01 + 0x80) = this_01;
    *(undefined8 *)(this_01 + 0x88) = 0;
    *(undefined8 *)(this_01 + 0x90) = 0;
    *(undefined8 *)(this_01 + 0x98) = 0;
    *(undefined8 *)(this_01 + 0xa0) = 0;
    *(undefined8 *)(this_01 + 0xa8) = 0;
    *(undefined8 *)(this_01 + 0xb0) = 0;
    *(MutexSys **)(in_FS_OFFSET + lVar1) = this_01;
    embree::MutexSys::lock();
    local_38 = this_01;
    if (_memmove == _operator_new) {
      std::
      vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
      ::
      _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                  *)&FastAllocator::s_thread_local_allocators,_memmove,&local_38);
      pMVar2 = local_38;
      if (local_38 != (MutexSys *)0x0) {
        embree::MutexSys::~MutexSys(local_38);
        embree::alignedFree(pMVar2);
      }
    }
    else {
      *_memmove = this_01;
      _memmove = _memmove + 1;
    }
    embree::MutexSys::unlock();
  }
  lVar1 = *(long *)this;
  pMVar2 = *(MutexSys **)(this_01 + 0x40);
  this_00 = (FastAllocator *)(lVar1 + 0x78);
  local_40 = (MutexSys *)param_1;
  if (this_00 != *(FastAllocator **)(pMVar2 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(pMVar2 + 8) != 0) {
      LOCK();
      *(long *)(*(long *)(pMVar2 + 8) + 0x118) =
           *(long *)(*(long *)(pMVar2 + 8) + 0x118) +
           *(long *)(pMVar2 + 0xa8) + *(long *)(pMVar2 + 0x68);
      UNLOCK();
      LOCK();
      *(long *)(*(long *)(pMVar2 + 8) + 0x120) =
           *(long *)(*(long *)(pMVar2 + 8) + 0x120) +
           (((*(long *)(pMVar2 + 0x98) + *(long *)(pMVar2 + 0x58)) - *(long *)(pMVar2 + 0x50)) -
           *(long *)(pMVar2 + 0x90));
      UNLOCK();
      LOCK();
      *(long *)(*(long *)(pMVar2 + 8) + 0x128) =
           *(long *)(*(long *)(pMVar2 + 8) + 0x128) +
           *(long *)(pMVar2 + 0xb0) + *(long *)(pMVar2 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(pMVar2 + 0x48) = 0;
    *(undefined8 *)(pMVar2 + 0x58) = 0;
    *(undefined8 *)(pMVar2 + 0x50) = 0;
    *(undefined8 *)(pMVar2 + 0x68) = 0;
    *(undefined8 *)(pMVar2 + 0x70) = 0;
    *(undefined8 *)(pMVar2 + 0x60) = 0;
    if (this_00 == (FastAllocator *)0x0) {
      *(undefined8 *)(pMVar2 + 0x88) = 0;
      uVar5 = 0;
      *(undefined8 *)(pMVar2 + 0x98) = 0;
      *(undefined8 *)(pMVar2 + 0x90) = 0;
      *(undefined8 *)(pMVar2 + 0xa8) = 0;
      *(undefined8 *)(pMVar2 + 0xb0) = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 0x88);
      *(undefined8 *)(pMVar2 + 0x88) = 0;
      *(undefined8 *)(pMVar2 + 0x98) = 0;
      *(undefined8 *)(pMVar2 + 0x60) = uVar5;
      *(undefined8 *)(pMVar2 + 0x90) = 0;
      *(undefined8 *)(pMVar2 + 0xa8) = 0;
      *(undefined8 *)(pMVar2 + 0xb0) = 0;
      *(undefined8 *)(pMVar2 + 0xa0) = 0;
      uVar5 = *(undefined8 *)(lVar1 + 0x88);
    }
    *(undefined8 *)(pMVar2 + 0xa0) = uVar5;
    LOCK();
    *(FastAllocator **)(pMVar2 + 8) = this_00;
    UNLOCK();
    local_38 = pMVar2;
    embree::MutexSys::lock();
    plVar3 = *(long **)(lVar1 + 0x1b0);
    if (plVar3 == *(long **)(lVar1 + 0x1b8)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(lVar1 + 0x1a8),plVar3,&local_38);
    }
    else {
      *plVar3 = (long)local_38;
      *(long *)(lVar1 + 0x1b0) = *(long *)(lVar1 + 0x1b0) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  pMVar2 = local_40;
  lVar1 = *(long *)(this_01 + 0x50);
  *(MutexSys **)(this_01 + 0x68) = local_40 + *(long *)(this_01 + 0x68);
  uVar6 = (ulong)(-(int)lVar1 & 0xf);
  pMVar4 = local_40 + uVar6 + lVar1;
  *(MutexSys **)(this_01 + 0x50) = pMVar4;
  if (*(MutexSys **)(this_01 + 0x58) < pMVar4) {
    *(long *)(this_01 + 0x50) = lVar1;
    if (*(MutexSys **)(this_01 + 0x60) < (MutexSys *)((long)local_40 * 4)) {
      pMVar4 = (MutexSys *)FastAllocator::malloc(this_00,(ulong *)&local_40,0x40,false);
    }
    else {
      local_38 = *(MutexSys **)(this_01 + 0x60);
      pMVar4 = (MutexSys *)FastAllocator::malloc(this_00,(ulong *)&local_38,0x40,true);
      *(MutexSys **)(this_01 + 0x48) = pMVar4;
      *(long *)(this_01 + 0x70) =
           (*(long *)(this_01 + 0x58) + *(long *)(this_01 + 0x70)) - *(long *)(this_01 + 0x50);
      *(MutexSys **)(this_01 + 0x50) = pMVar2;
      *(MutexSys **)(this_01 + 0x58) = local_38;
      if (local_38 < pMVar2) {
        *(undefined8 *)(this_01 + 0x50) = 0;
        local_38 = *(MutexSys **)(this_01 + 0x60);
        pMVar4 = (MutexSys *)FastAllocator::malloc(this_00,(ulong *)&local_38,0x40,false);
        *(MutexSys **)(this_01 + 0x48) = pMVar4;
        *(long *)(this_01 + 0x70) =
             (*(long *)(this_01 + 0x58) + *(long *)(this_01 + 0x70)) - *(long *)(this_01 + 0x50);
        *(MutexSys **)(this_01 + 0x50) = pMVar2;
        *(MutexSys **)(this_01 + 0x58) = local_38;
        if (local_38 < pMVar2) {
          *(undefined8 *)(this_01 + 0x50) = 0;
          pMVar4 = (MutexSys *)0x0;
        }
      }
    }
  }
  else {
    *(ulong *)(this_01 + 0x70) = *(long *)(this_01 + 0x70) + uVar6;
    pMVar4 = pMVar4 + (*(long *)(this_01 + 0x48) - (long)local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pMVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (0xfffffffffffffffe < uVar1) goto LAB_00103fd0;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00103fd0:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00103f59;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00103f59:
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



/* embree::BVHN<4>::layoutLargeNodesRecursion(embree::NodeRefPtr<4>&,
   embree::FastAllocator::CachedAllocator const&) */

undefined8 * __thiscall
embree::BVHN<4>::layoutLargeNodesRecursion
          (BVHN<4> *this,NodeRefPtr *param_1,CachedAllocator *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong *puVar3;
  FastAllocator *this_00;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  puVar10 = *(undefined8 **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((long)puVar10 < 0) {
    puVar7 = (undefined8 *)((ulong)puVar10 & 0x7fffffffffffffff);
    *(undefined8 **)param_1 = puVar7;
  }
  else {
    uVar11 = (ulong)((uint)puVar10 & 0xf);
    puVar7 = puVar10;
    if (((ulong)puVar10 & 0xf) == 0) {
      puVar3 = *(ulong **)(param_2 + 8);
      this_00 = *(FastAllocator **)param_2;
      local_50 = 0x80;
      uVar4 = *puVar3;
      if (this_00 != *(FastAllocator **)(uVar4 + 8)) {
        embree::MutexSys::lock();
        if (*(long *)(uVar4 + 8) != 0) {
          LOCK();
          plVar2 = (long *)(*(long *)(uVar4 + 8) + 0x118);
          *plVar2 = *plVar2 + *(long *)(uVar4 + 0xa8) + *(long *)(uVar4 + 0x68);
          UNLOCK();
          LOCK();
          plVar2 = (long *)(*(long *)(uVar4 + 8) + 0x120);
          *plVar2 = *plVar2 + (((*(long *)(uVar4 + 0x98) + *(long *)(uVar4 + 0x58)) -
                               *(long *)(uVar4 + 0x50)) - *(long *)(uVar4 + 0x90));
          UNLOCK();
          LOCK();
          plVar2 = (long *)(*(long *)(uVar4 + 8) + 0x128);
          *plVar2 = *plVar2 + *(long *)(uVar4 + 0xb0) + *(long *)(uVar4 + 0x70);
          UNLOCK();
        }
        *(undefined8 *)(uVar4 + 0x48) = 0;
        *(undefined8 *)(uVar4 + 0x58) = 0;
        *(undefined8 *)(uVar4 + 0x50) = 0;
        *(undefined8 *)(uVar4 + 0x68) = 0;
        *(undefined8 *)(uVar4 + 0x70) = 0;
        *(undefined8 *)(uVar4 + 0x60) = 0;
        if (this_00 == (FastAllocator *)0x0) {
          *(undefined8 *)(uVar4 + 0x88) = 0;
          *(undefined8 *)(uVar4 + 0x98) = 0;
          *(undefined8 *)(uVar4 + 0x90) = 0;
          *(undefined8 *)(uVar4 + 0xa8) = 0;
          *(undefined8 *)(uVar4 + 0xb0) = 0;
        }
        else {
          uVar8 = *(undefined8 *)(this_00 + 0x10);
          *(undefined8 *)(uVar4 + 0x88) = 0;
          *(undefined8 *)(uVar4 + 0x98) = 0;
          *(undefined8 *)(uVar4 + 0x60) = uVar8;
          *(undefined8 *)(uVar4 + 0x90) = 0;
          *(undefined8 *)(uVar4 + 0xa8) = 0;
          *(undefined8 *)(uVar4 + 0xb0) = 0;
          *(undefined8 *)(uVar4 + 0xa0) = 0;
          uVar11 = *(ulong *)(this_00 + 0x10);
        }
        *(ulong *)(uVar4 + 0xa0) = uVar11;
        LOCK();
        *(FastAllocator **)(uVar4 + 8) = this_00;
        UNLOCK();
        local_48 = uVar4;
        embree::MutexSys::lock();
        puVar5 = *(ulong **)(this_00 + 0x138);
        if (puVar5 == *(ulong **)(this_00 + 0x140)) {
          std::
          vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
          ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                    ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                      *)(this_00 + 0x130),puVar5,&local_48);
        }
        else {
          *puVar5 = uVar4;
          *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
        }
        embree::MutexSys::unlock();
        embree::MutexSys::unlock();
      }
      uVar4 = local_50;
      uVar11 = puVar3[2];
      puVar3[5] = puVar3[5] + local_50;
      uVar9 = (ulong)(-(int)uVar11 & 0xf);
      uVar6 = local_50 + uVar11 + uVar9;
      puVar3[2] = uVar6;
      if (puVar3[3] < uVar6) {
        puVar3[2] = uVar11;
        if (puVar3[4] < local_50 * 4) {
          puVar7 = (undefined8 *)FastAllocator::malloc(this_00,&local_50,0x40,false);
        }
        else {
          local_48 = puVar3[4];
          puVar7 = (undefined8 *)FastAllocator::malloc(this_00,&local_48,0x40,true);
          puVar3[1] = (ulong)puVar7;
          uVar11 = puVar3[2];
          puVar3[2] = uVar4;
          puVar3[6] = (puVar3[3] + puVar3[6]) - uVar11;
          puVar3[3] = local_48;
          if (local_48 < uVar4) {
            local_48 = puVar3[4];
            puVar3[2] = 0;
            puVar7 = (undefined8 *)FastAllocator::malloc(this_00,&local_48,0x40,false);
            puVar3[1] = (ulong)puVar7;
            uVar11 = puVar3[2];
            puVar3[2] = uVar4;
            puVar3[6] = (puVar3[3] + puVar3[6]) - uVar11;
            puVar3[3] = local_48;
            if (local_48 < uVar4) {
              puVar7 = (undefined8 *)0x0;
              puVar3[2] = 0;
            }
          }
        }
      }
      else {
        puVar3[6] = puVar3[6] + uVar9;
        puVar7 = (undefined8 *)((uVar6 - local_50) + puVar3[1]);
      }
      uVar8 = puVar10[1];
      puVar1 = puVar10 + 4;
      lVar12 = (long)puVar7 - (long)puVar10;
      *puVar7 = *puVar10;
      puVar7[1] = uVar8;
      uVar8 = puVar10[3];
      puVar7[2] = puVar10[2];
      puVar7[3] = uVar8;
      uVar8 = puVar10[5];
      puVar7[4] = puVar10[4];
      puVar7[5] = uVar8;
      uVar8 = puVar10[7];
      puVar7[6] = puVar10[6];
      puVar7[7] = uVar8;
      uVar8 = puVar10[9];
      puVar7[8] = puVar10[8];
      puVar7[9] = uVar8;
      uVar8 = puVar10[0xb];
      puVar7[10] = puVar10[10];
      puVar7[0xb] = uVar8;
      uVar8 = puVar10[0xd];
      puVar7[0xc] = puVar10[0xc];
      puVar7[0xd] = uVar8;
      uVar8 = puVar10[0xf];
      puVar7[0xe] = puVar10[0xe];
      puVar7[0xf] = uVar8;
      do {
        uVar8 = layoutLargeNodesRecursion(this,(NodeRefPtr *)puVar10,param_2);
        *(undefined8 *)(lVar12 + (long)puVar10) = uVar8;
        puVar10 = puVar10 + 1;
      } while (puVar1 != puVar10);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
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
    if (0xfffffffffffffffe < uVar3) goto LAB_00104550;
    uVar8 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar8 = uVar3 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_0010455a:
    puVar7 = (undefined8 *)operator_new(uVar8);
    lVar10 = uVar8 + (long)puVar7;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar1)) = *param_3;
    puVar4 = puVar7 + 1;
    *param_3 = 0;
    if (param_2 != puVar1) {
LAB_001044c1:
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
    if (param_2 == puVar5) goto LAB_00104514;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar3) {
LAB_00104550:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_0010455a;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_0010455a;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)((long)param_2 - (long)puVar1) = *param_3;
    puVar4 = (undefined8 *)&DAT_00000008;
    *param_3 = 0;
    if (param_2 != puVar1) goto LAB_001044c1;
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
LAB_00104514:
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,*(long *)(this + 0x10) - (long)puVar1);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar4;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* embree::BVHNStatistics<4>::Statistics::sah(embree::BVHN<4>*) const */

double __thiscall embree::BVHNStatistics<4>::Statistics::sah(Statistics *this,BVHN *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  double dVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18);
  fVar1 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) - fVar6;
  fVar2 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) - fVar7;
  fVar3 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30)) - fVar4;
  fVar8 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30)) - fVar4;
  fVar9 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34)) - fVar6;
  fVar10 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) - fVar7;
  dVar5 = (double)((fVar6 * fVar8 + fVar4 * fVar1) * _LC45 + fVar6 * fVar4 + fVar8 * fVar1 * _LC47 +
                   (fVar7 * fVar9 + fVar6 * fVar2) * _LC45 + fVar7 * fVar6 + fVar9 * fVar2 * _LC47 +
                  (fVar4 * fVar10 + fVar7 * fVar3) * _LC45 + fVar4 * fVar7 + fVar10 * fVar3 * _LC47)
  ;
  return *(double *)(this + 0x78) / dVar5 + *(double *)(this + 8) / dVar5 +
         *(double *)(this + 0x90) / dVar5 + *(double *)(this + 0xa8) / dVar5 +
         *(double *)(this + 0xc0) / dVar5 + *(double *)(this + 0xd8) / dVar5 +
         *(double *)(this + 0xf0) / dVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHN<4>::postBuild(double) */

void __thiscall embree::BVHN<4>::postBuild(BVHN<4> *this,double param_1)

{
  BVHN<4> *pBVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  BVHN *pBVar5;
  ostream *poVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  double dVar10;
  double local_1a0;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
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
  long *local_68;
  long local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != _LC35) {
    if ((*(long *)(*(ulong *)(this + 0x60) + 0x4b0) == 0) &&
       (cVar4 = embree::State::verbosity(*(ulong *)(this + 0x60)), cVar4 == '\0')) {
      local_1a0 = 0.0;
    }
    else {
      local_1a0 = (double)embree::getSeconds();
      local_1a0 = local_1a0 - param_1;
    }
    cVar4 = embree::State::verbosity(*(ulong *)(this + 0x60));
    if (cVar4 == '\0') {
      if (*(long *)(*(long *)(this + 0x60) + 0x4b0) == 0) goto LAB_00104a10;
LAB_001047f9:
      pBVar5 = (BVHN *)::operator_new(0x110);
      embree::BVHNStatistics<4>::BVHNStatistics(pBVar5);
LAB_00104811:
      embree::MutexSys::lock();
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"BENCHMARK_BUILD ",0x10);
      poVar6 = std::ostream::_M_insert<double>(local_1a0);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
      poVar6 = std::ostream::_M_insert<double>((double)*(ulong *)(this + 0x1f0) / local_1a0);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
      dVar10 = (double)BVHNStatistics<4>::Statistics::sah
                                 ((Statistics *)(pBVar5 + 8),*(BVHN **)pBVar5);
      poVar6 = std::ostream::_M_insert<double>(dVar10);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
      poVar6 = std::ostream::_M_insert<unsigned_long>((ulong)poVar6);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6," BVH",4);
      poVar6 = (ostream *)std::ostream::operator<<(poVar6,4);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6,"<",1);
      pcVar7 = (char *)(**(code **)**(undefined8 **)(this + 0x58))();
      poVar6 = std::operator<<(poVar6,pcVar7);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6,">",1);
      plVar2 = *(long **)(poVar6 + *(long *)(*(long *)poVar6 + -0x18) + 0xf0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_cast();
      }
      if ((char)plVar2[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar2 + 0x30))(plVar2,10);
        }
      }
      std::ostream::put((char)poVar6);
      std::ostream::flush();
      std::ostream::flush();
      embree::MutexSys::unlock();
    }
    else {
      pBVar5 = (BVHN *)::operator_new(0x110);
      embree::BVHNStatistics<4>::BVHNStatistics(pBVar5);
      uVar9 = *(ulong *)(this + 400);
      embree::MutexSys::lock();
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"finished BVH",0xc);
      poVar6 = (ostream *)std::ostream::operator<<((ostream *)&std::cout,4);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6,"<",1);
      pcVar7 = (char *)(**(code **)**(undefined8 **)(this + 0x58))();
      poVar6 = std::operator<<(poVar6,pcVar7);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6,"> : ",4);
      poVar6 = std::ostream::_M_insert<double>(local_1a0 * __LC50);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6,"ms, ",4);
      poVar6 = std::ostream::_M_insert<double>
                         (((double)*(ulong *)(this + 0x1f0) * __LC52) / local_1a0);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6," Mprim/s, ",10);
      poVar6 = std::ostream::_M_insert<double>(((double)uVar9 * __LC54) / local_1a0);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6," GB/s",5);
      std::endl<char,std::char_traits<char>>(poVar6);
      cVar4 = embree::State::verbosity(*(ulong *)(this + 0x60));
      if (cVar4 != '\0') {
        embree::BVHNStatistics<4>::str_abi_cxx11_();
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cout,(char *)local_68,local_60);
        if (local_68 != local_58) {
          ::operator_delete(local_68,local_58[0] + 1);
        }
      }
      cVar4 = embree::State::verbosity(*(ulong *)(this + 0x60));
      if (cVar4 != '\0') {
        pBVar1 = this + 0x78;
        local_188 = *(long *)(this + 400);
        local_180 = *(long *)(this + 0x198);
        local_178 = *(long *)(this + 0x1a0);
        FastAllocator::Statistics::Statistics((Statistics *)&local_170,pBVar1,3,0);
        FastAllocator::Statistics::Statistics((Statistics *)&local_158,pBVar1,0,0);
        FastAllocator::Statistics::Statistics((Statistics *)&local_140,pBVar1,1,0);
        FastAllocator::Statistics::Statistics((Statistics *)&local_128,pBVar1,1,1);
        FastAllocator::Statistics::Statistics((Statistics *)&local_110,pBVar1,2,0);
        lVar8 = *(long *)(this + 0x200);
        uVar9 = 0;
        if (*(long *)(this + 0x208) != lVar8) {
          do {
            lVar3 = *(long *)(lVar8 + uVar9 * 8);
            if (lVar3 != 0) {
              lVar8 = lVar3 + 0x78;
              local_f8 = *(long *)(lVar3 + 400);
              local_f0 = *(long *)(lVar3 + 0x198);
              local_e8 = *(long *)(lVar3 + 0x1a0);
              FastAllocator::Statistics::Statistics((Statistics *)&local_e0,lVar8,3,0);
              FastAllocator::Statistics::Statistics((Statistics *)&local_c8,lVar8,0,0);
              FastAllocator::Statistics::Statistics((Statistics *)&local_b0,lVar8,1,0);
              FastAllocator::Statistics::Statistics((Statistics *)&local_98,lVar8,1);
              FastAllocator::Statistics::Statistics((Statistics *)&local_80,lVar8,2);
              local_188 = local_188 + local_f8;
              local_180 = local_180 + local_f0;
              local_178 = local_178 + local_e8;
              local_170 = local_170 + local_e0;
              local_168 = local_168 + local_d8;
              local_160 = local_160 + local_d0;
              local_158 = local_158 + local_c8;
              local_150 = local_150 + local_c0;
              local_148 = local_148 + local_b8;
              local_140 = local_140 + local_b0;
              local_138 = local_138 + local_a8;
              local_130 = local_130 + local_a0;
              local_128 = local_128 + local_98;
              local_120 = local_120 + local_90;
              local_118 = local_118 + local_88;
              local_110 = local_110 + local_80;
              local_108 = local_108 + local_78;
              local_100 = local_100 + local_70;
              lVar8 = *(long *)(this + 0x200);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulong)(*(long *)(this + 0x208) - lVar8 >> 3));
        }
        FastAllocator::AllStatistics::print((AllStatistics *)&local_188,*(ulong *)(this + 0x1f0));
      }
      cVar4 = embree::State::verbosity(*(ulong *)(this + 0x60));
      if (cVar4 != '\0') {
        FastAllocator::print_blocks((FastAllocator *)(this + 0x78));
        lVar8 = *(long *)(this + 0x200);
        if (lVar8 != *(long *)(this + 0x208)) {
          uVar9 = 0;
          do {
            lVar3 = *(long *)(lVar8 + uVar9 * 8);
            if (lVar3 != 0) {
              FastAllocator::print_blocks((FastAllocator *)(lVar3 + 0x78));
              lVar8 = *(long *)(this + 0x200);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulong)(*(long *)(this + 0x208) - lVar8 >> 3));
        }
      }
      std::ostream::flush();
      embree::MutexSys::unlock();
      if (*(long *)(*(long *)(this + 0x60) + 0x4b0) != 0) {
        if (pBVar5 == (BVHN *)0x0) goto LAB_001047f9;
        goto LAB_00104811;
      }
    }
    if (pBVar5 != (BVHN *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        ::operator_delete(pBVar5,0x110);
        return;
      }
      goto LAB_0010504c;
    }
  }
LAB_00104a10:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010504c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void std::vector<embree::BVHN<4>::layoutLargeNodes(unsigned long)::NodeArea,
   std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned long)::NodeArea>
   >::_M_realloc_insert<embree::BVHN<4>::layoutLargeNodes(unsigned
   long)::NodeArea>(__gnu_cxx::__normal_iterator<embree::BVHN<4>::layoutLargeNodes(unsigned
   long)::NodeArea*, std::vector<embree::BVHN<4>::layoutLargeNodes(unsigned long)::NodeArea,
   std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned long)::NodeArea> > >,
   embree::BVHN<4>::layoutLargeNodes(unsigned long)::NodeArea&&) */

void __thiscall
std::
vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
::_M_realloc_insert<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>
          (vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
           *this,BVHN<4> *param_2,undefined8 *param_3)

{
  float fVar1;
  BVHN<4> *pBVar2;
  ulong *puVar3;
  undefined8 uVar4;
  MutexSys *pMVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  MutexSys *this_00;
  BVHN<4> *pBVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_RBX;
  undefined8 *puVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  char *pcVar21;
  float fVar22;
  ulong unaff_R12;
  long lVar23;
  BVHN<4> *pBVar24;
  BVHN<4> *pBVar25;
  BVHN<4> *unaff_R14;
  long *unaff_R15;
  long in_FS_OFFSET;
  long in_GS_OFFSET;
  bool bVar26;
  bool bVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 (*unaff_retaddr) [16];
  undefined1 (*pauVar30) [16];
  undefined1 (*in_stack_00000008) [16];
  BVHN<4> *in_stack_00000018;
  float fStack0000000000000020;
  undefined4 uStack0000000000000024;
  MutexSys *in_stack_00000028;
  long in_stack_00000030;
  CachedAllocator *local_40;
  
  pBVar2 = *(BVHN<4> **)(this + 8);
  pBVar24 = *(BVHN<4> **)this;
  uVar6 = (long)pBVar2 - (long)pBVar24 >> 4;
  bVar26 = uVar6 < 0x7ffffffffffffff;
  bVar27 = uVar6 == 0x7ffffffffffffff;
  if (bVar27) {
    pcVar21 = "vector::_M_realloc_insert";
    auVar29 = std::__throw_length_error("vector::_M_realloc_insert");
    if (bVar26 || bVar27) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = (ulong)*(uint *)(pcVar21 + (long)pBVar2 * 2 + 0x72);
    bVar26 = (byte)((ulong)unaff_RBX >> 8) < *auVar29._8_8_;
    if (bVar26) {
      if (uVar6 == 0) {
        pBVar24 = (BVHN<4> *)(pcVar21 + 0x70);
        in_stack_00000018 = pBVar24;
        goto LAB_00105295;
      }
      pBVar24 = unaff_R14 + 0x70;
      unaff_R15 = (long *)operator_new(uVar6 * 0x10);
      in_stack_00000008 = (undefined1 (*) [16])(unaff_R15 + uVar6 * 2);
      fStack0000000000000020 = _LC1;
      if (((byte)unaff_R14[0x70] & 8) != 0) {
        fStack0000000000000020 = _LC3;
      }
      unaff_retaddr = (undefined1 (*) [16])(unaff_R15 + 2);
      *unaff_R15 = (long)pBVar24;
      unaff_R15[1] = CONCAT44(uStack0000000000000024,fStack0000000000000020);
      in_stack_00000018 = pBVar24;
    }
    else {
      if (!bVar26) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar6 = unaff_R12;
      if (!bVar26) {
        pcVar21 = (char *)(in_GS_OFFSET + auVar29._0_8_);
        *pcVar21 = *pcVar21 + auVar29[0];
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_00105295:
      if ((pcVar21[0x70] & 8U) == 0) {
        fStack0000000000000020 = INFINITY;
      }
      else {
        fStack0000000000000020 = -INFINITY;
      }
      _M_realloc_insert<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>
                ((vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
                  *)&stack0xfffffffffffffff8,0,&stack0x00000018);
    }
    local_40 = (CachedAllocator *)&stack0x00000018;
    lVar23 = (long)unaff_retaddr - (long)unaff_R15;
    uVar19 = lVar23 >> 4;
    fVar28 = _LC3;
    if (uVar19 < uVar6) {
      do {
        pauVar20 = unaff_retaddr + -1;
        if (0x10 < lVar23) {
          lVar23 = *(long *)unaff_retaddr[-1];
          lVar11 = *(long *)((long)unaff_retaddr[-1] + 8);
          *(long *)unaff_retaddr[-1] = *unaff_R15;
          uVar19 = (long)pauVar20 - (long)unaff_R15 >> 4;
          *(int *)((long)unaff_retaddr[-1] + 8) = (int)unaff_R15[1];
          fVar22 = (float)lVar11;
          if ((long)(uVar19 - 1) < 2) {
            plVar14 = unaff_R15;
            if ((uVar19 & 1) == 0) {
              lVar11 = 0;
              goto LAB_001056cc;
            }
          }
          else {
            lVar17 = 0;
            do {
              lVar16 = (lVar17 + 1) * 2;
              lVar11 = lVar16 + -1;
              plVar12 = unaff_R15 + (lVar17 + 1) * 4;
              fVar1 = *(float *)(unaff_R15 + lVar11 * 2 + 1);
              plVar14 = unaff_R15 + lVar11 * 2;
              if (fVar1 < *(float *)(plVar12 + 1) || fVar1 == *(float *)(plVar12 + 1)) {
                lVar11 = lVar16;
                plVar14 = plVar12;
              }
              unaff_R15[lVar17 * 2] = *plVar14;
              *(int *)(unaff_R15 + lVar17 * 2 + 1) = (int)plVar14[1];
              lVar17 = lVar11;
            } while (lVar11 < (long)(uVar19 - 1) / 2);
            if ((uVar19 & 1) == 0) {
LAB_001056cc:
              if ((long)(uVar19 - 2) / 2 == lVar11) {
                lVar17 = lVar11 * 2 + 1;
                *plVar14 = unaff_R15[lVar17 * 2];
                *(int *)(plVar14 + 1) = (int)(unaff_R15 + lVar17 * 2)[1];
                lVar16 = lVar11 * 2 >> 1;
              }
              else {
                lVar17 = lVar11;
                lVar16 = (lVar11 + -1) / 2;
                if (lVar11 == 0) goto LAB_0010568c;
              }
            }
            else {
              lVar16 = lVar11 + -1 >> 1;
            }
            do {
              plVar14 = unaff_R15 + lVar17 * 2;
              plVar12 = unaff_R15 + lVar16 * 2;
              if (fVar22 < *(float *)(plVar12 + 1) || fVar22 == *(float *)(plVar12 + 1)) break;
              *plVar14 = *plVar12;
              *(int *)(plVar14 + 1) = (int)plVar12[1];
              bVar26 = lVar16 != 0;
              plVar14 = plVar12;
              lVar17 = lVar16;
              lVar16 = (lVar16 + -1) / 2;
            } while (bVar26);
          }
LAB_0010568c:
          *plVar14 = lVar23;
          *(float *)(plVar14 + 1) = fVar22;
        }
        pBVar2 = (BVHN<4> *)**(undefined8 **)unaff_retaddr[-1];
        if (((ulong)pBVar2 & 0xf) != 0) {
          uVar19 = (long)pauVar20 - (long)unaff_R15 >> 4;
          goto LAB_00105733;
        }
        pBVar15 = pBVar2 + 0x20;
        pBVar25 = pBVar2;
        pauVar30 = pauVar20;
        do {
          uVar19 = *(ulong *)((-0x40 - (long)pBVar2) + (long)pBVar15 * 2);
          if (uVar19 != 8) {
            fStack0000000000000020 = fVar28;
            if ((uVar19 & 8) == 0) {
              fStack0000000000000020 =
                   ((*(float *)(pBVar15 + 0x30) - *(float *)(pBVar15 + 0x20)) +
                   (*(float *)(pBVar15 + 0x50) - *(float *)(pBVar15 + 0x40))) *
                   (*(float *)(pBVar15 + 0x10) - *(float *)pBVar15) +
                   (*(float *)(pBVar15 + 0x30) - *(float *)(pBVar15 + 0x20)) *
                   (*(float *)(pBVar15 + 0x50) - *(float *)(pBVar15 + 0x40));
              fStack0000000000000020 = fStack0000000000000020 + fStack0000000000000020;
            }
            in_stack_00000018 = pBVar25;
            if (pauVar20 == in_stack_00000008) {
              _M_realloc_insert<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>
                        ((vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
                          *)&stack0xfffffffffffffff8,pauVar20,local_40);
              pauVar20 = pauVar30;
              fVar28 = _LC3;
            }
            else {
              auVar29._8_4_ = fStack0000000000000020;
              auVar29._0_8_ = pBVar25;
              auVar29._12_4_ = uStack0000000000000024;
              *pauVar20 = auVar29;
              pauVar20 = pauVar20 + 1;
            }
            lVar17 = *(long *)pauVar20[-1];
            fVar22 = (float)*(long *)((long)pauVar20[-1] + 8);
            lVar11 = (long)pauVar20 - (long)unaff_R15 >> 4;
            lVar23 = lVar11 + -1;
            lVar11 = lVar11 + -2;
            if (lVar23 < 1) {
              plVar14 = (long *)((long)unaff_R15 + ((long)pauVar20 - (long)unaff_R15) + -0x10);
            }
            else {
              do {
                lVar16 = lVar11 / 2;
                plVar14 = unaff_R15 + lVar23 * 2;
                plVar12 = unaff_R15 + lVar16 * 2;
                if (fVar22 < *(float *)(plVar12 + 1) || fVar22 == *(float *)(plVar12 + 1)) break;
                *plVar14 = *plVar12;
                *(int *)(plVar14 + 1) = (int)plVar12[1];
                lVar11 = lVar16 + -1;
                plVar14 = plVar12;
                lVar23 = lVar16;
              } while (lVar16 != 0);
            }
            *plVar14 = lVar17;
            *(float *)(plVar14 + 1) = fVar22;
            pauVar30 = pauVar20;
          }
          pBVar15 = pBVar15 + 4;
          pBVar25 = pBVar25 + 8;
        } while (pBVar2 + 0x30 != pBVar15);
        lVar23 = (long)pauVar20 - (long)unaff_R15;
        uVar19 = lVar23 >> 4;
        unaff_retaddr = pauVar20;
      } while (uVar19 < uVar6);
    }
    else {
LAB_00105733:
      if (uVar19 == 0) goto LAB_001054c7;
    }
    plVar14 = unaff_R15;
    do {
      puVar3 = (ulong *)*plVar14;
      plVar14 = plVar14 + 2;
      *puVar3 = *puVar3 | 0x8000000000000000;
    } while (unaff_R15 + uVar19 * 2 != plVar14);
LAB_001054c7:
    lVar23 = lRam00000000001054ce;
    this_00 = *(MutexSys **)(in_FS_OFFSET + lRam00000000001054ce);
    if (this_00 == (MutexSys *)0x0) {
      this_00 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(this_00);
      *(MutexSys **)(this_00 + 0x40) = this_00;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x48) = 0;
      *(undefined8 *)(this_00 + 0x50) = 0;
      *(undefined8 *)(this_00 + 0x58) = 0;
      *(undefined8 *)(this_00 + 0x60) = 0;
      *(undefined8 *)(this_00 + 0x68) = 0;
      *(undefined8 *)(this_00 + 0x70) = 0;
      *(MutexSys **)(this_00 + 0x80) = this_00;
      *(undefined8 *)(this_00 + 0x88) = 0;
      *(undefined8 *)(this_00 + 0x90) = 0;
      *(undefined8 *)(this_00 + 0x98) = 0;
      *(undefined8 *)(this_00 + 0xa0) = 0;
      *(undefined8 *)(this_00 + 0xa8) = 0;
      *(undefined8 *)(this_00 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar23) = this_00;
      embree::MutexSys::lock();
      in_stack_00000018 = (BVHN<4> *)this_00;
      if (_memmove == _operator_new) {
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&embree::FastAllocator::s_thread_local_allocators,_memmove,local_40);
        pMVar5 = (MutexSys *)in_stack_00000018;
        if (in_stack_00000018 != (BVHN<4> *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)in_stack_00000018);
          embree::alignedFree(pMVar5);
        }
      }
      else {
        *_memmove = this_00;
        _memmove = _memmove + 1;
      }
      embree::MutexSys::unlock();
    }
    _fStack0000000000000020 = this_00 + 0x40;
    in_stack_00000028 = _fStack0000000000000020;
    if (unaff_R14[0x182] == (BVHN<4>)0x0) {
      in_stack_00000028 = this_00 + 0x80;
    }
    in_stack_00000018 = unaff_R14 + 0x78;
    uVar13 = embree::BVHN<4>::layoutLargeNodesRecursion(unaff_R14,pBVar24,local_40);
    *(undefined8 *)(unaff_R14 + 0x70) = uVar13;
    if (unaff_R15 == (long *)0x0) {
      if (in_stack_00000030 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (in_stack_00000030 == *(long *)(in_FS_OFFSET + 0x28)) {
      operator_delete(unaff_R15,(long)in_stack_00000008 - (long)unaff_R15);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pBVar15 = param_2 + -(long)pBVar24;
  if (pBVar24 == pBVar2) {
    if (0xfffffffffffffffe < uVar6) goto LAB_00105170;
    uVar19 = 0x7ffffffffffffff;
    if (uVar6 + 1 < 0x800000000000000) {
      uVar19 = uVar6 + 1;
    }
    uVar19 = uVar19 << 4;
LAB_0010517a:
    puVar10 = (undefined8 *)operator_new(uVar19);
    lVar23 = uVar19 + (long)puVar10;
    uVar13 = param_3[1];
    *(undefined8 *)((long)puVar10 + (long)pBVar15) = *param_3;
    *(undefined8 *)((BVHN<4> *)((long)puVar10 + (long)pBVar15) + 8) = uVar13;
    puVar7 = puVar10;
    if (param_2 != pBVar24) {
LAB_001050db:
      puVar7 = (undefined8 *)(((long)param_2 - (long)pBVar24) + (long)puVar10);
      pBVar15 = pBVar24;
      puVar8 = puVar10;
      do {
        uVar13 = *(undefined8 *)pBVar15;
        uVar4 = *(undefined8 *)(pBVar15 + 8);
        puVar18 = puVar8 + 2;
        pBVar15 = pBVar15 + 0x10;
        *puVar8 = uVar13;
        puVar8[1] = uVar4;
        puVar8 = puVar18;
      } while (puVar7 != puVar18);
    }
    puVar7 = puVar7 + 2;
    if (param_2 == pBVar2) goto LAB_00105135;
  }
  else {
    uVar19 = uVar6 * 2;
    if (uVar19 < uVar6) {
LAB_00105170:
      uVar19 = 0x7ffffffffffffff0;
      goto LAB_0010517a;
    }
    if (uVar19 != 0) {
      if (0x7ffffffffffffff < uVar19) {
        uVar19 = 0x7ffffffffffffff;
      }
      uVar19 = uVar19 << 4;
      goto LAB_0010517a;
    }
    uVar13 = param_3[1];
    lVar23 = 0;
    puVar10 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)&DAT_00000010;
    *(undefined8 *)pBVar15 = *param_3;
    *(undefined8 *)(pBVar15 + 8) = uVar13;
    if (param_2 != pBVar24) goto LAB_001050db;
  }
  puVar18 = (undefined8 *)(((long)pBVar2 - (long)param_2) + (long)puVar7);
  puVar8 = puVar7;
  do {
    uVar13 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar9 = puVar8 + 2;
    param_2 = param_2 + 0x10;
    *puVar8 = uVar13;
    puVar8[1] = uVar4;
    puVar8 = puVar9;
    puVar7 = puVar18;
  } while (puVar9 != puVar18);
LAB_00105135:
  if (pBVar24 != (BVHN<4> *)0x0) {
    operator_delete(pBVar24,*(long *)(this + 0x10) - (long)pBVar24);
  }
  *(undefined8 **)this = puVar10;
  *(undefined8 **)(this + 8) = puVar7;
  *(long *)(this + 0x10) = lVar23;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHN<4>::layoutLargeNodes(unsigned long) */

void __thiscall embree::BVHN<4>::layoutLargeNodes(BVHN<4> *this,ulong param_1)

{
  float fVar1;
  BVHN<4> *pBVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  MutexSys *this_00;
  long lVar10;
  BVHN<4> *pBVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  float fVar16;
  ulong uVar17;
  BVHN<4> *pBVar18;
  long in_FS_OFFSET;
  bool bVar19;
  float fVar20;
  CachedAllocator *pCStack_b0;
  ulong *local_78;
  undefined1 (*local_70) [16];
  undefined1 (*local_68) [16];
  BVHN<4> *pBStack_58;
  undefined8 uStack_50;
  MutexSys *pMStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (ulong *)0x0;
  local_70 = (undefined1 (*) [16])0x0;
  local_68 = (undefined1 (*) [16])0x0;
  if (param_1 >> 0x3b != 0) {
    std::__throw_length_error("vector::reserve");
    goto LAB_0010597d;
  }
  if (param_1 == 0) {
    pBStack_58 = this + 0x70;
    if (((byte)this[0x70] & 8) == 0) {
      uStack_50._0_4_ = INFINITY;
    }
    else {
      uStack_50._0_4_ = -INFINITY;
    }
    std::
    vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
    ::_M_realloc_insert<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>
              ((vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
                *)&local_78,0,&pBStack_58);
  }
  else {
    local_78 = (ulong *)::operator_new(param_1 * 0x10);
    local_68 = (undefined1 (*) [16])(local_78 + param_1 * 2);
    uStack_50._0_4_ = _LC1;
    if (((byte)this[0x70] & 8) != 0) {
      uStack_50._0_4_ = _LC3;
    }
    local_70 = (undefined1 (*) [16])(local_78 + 2);
    *local_78 = (ulong)(this + 0x70);
    local_78[1] = CONCAT44(uStack_50._4_4_,(float)uStack_50);
    pBStack_58 = this + 0x70;
  }
  pCStack_b0 = (CachedAllocator *)&pBStack_58;
  lVar5 = (long)local_70 - (long)local_78;
  uVar15 = lVar5 >> 4;
  pauVar12 = local_68;
  pauVar13 = local_70;
  fVar20 = _LC3;
  if (uVar15 < param_1) {
    do {
      pauVar14 = pauVar13 + -1;
      if (0x10 < lVar5) {
        uVar15 = *(ulong *)pauVar13[-1];
        uVar3 = *(ulong *)((long)pauVar13[-1] + 8);
        *(ulong *)pauVar13[-1] = *local_78;
        uVar17 = (long)pauVar14 - (long)local_78 >> 4;
        *(int *)((long)pauVar13[-1] + 8) = (int)local_78[1];
        fVar16 = (float)uVar3;
        if ((long)(uVar17 - 1) < 2) {
          puVar9 = local_78;
          if ((uVar17 & 1) == 0) {
            lVar5 = 0;
            goto LAB_001056cc;
          }
        }
        else {
          lVar6 = 0;
          do {
            lVar10 = (lVar6 + 1) * 2;
            lVar5 = lVar10 + -1;
            puVar7 = local_78 + (lVar6 + 1) * 4;
            fVar1 = *(float *)(local_78 + lVar5 * 2 + 1);
            puVar9 = local_78 + lVar5 * 2;
            if (fVar1 < *(float *)(puVar7 + 1) || fVar1 == *(float *)(puVar7 + 1)) {
              lVar5 = lVar10;
              puVar9 = puVar7;
            }
            local_78[lVar6 * 2] = *puVar9;
            *(int *)(local_78 + lVar6 * 2 + 1) = (int)puVar9[1];
            lVar6 = lVar5;
          } while (lVar5 < (long)(uVar17 - 1) / 2);
          if ((uVar17 & 1) == 0) {
LAB_001056cc:
            if ((long)(uVar17 - 2) / 2 == lVar5) {
              lVar6 = lVar5 * 2 + 1;
              *puVar9 = local_78[lVar6 * 2];
              *(int *)(puVar9 + 1) = (int)(local_78 + lVar6 * 2)[1];
              lVar10 = lVar5 * 2 >> 1;
            }
            else {
              lVar6 = lVar5;
              lVar10 = (lVar5 + -1) / 2;
              if (lVar5 == 0) goto LAB_0010568c;
            }
          }
          else {
            lVar10 = lVar5 + -1 >> 1;
          }
          do {
            puVar9 = local_78 + lVar6 * 2;
            puVar7 = local_78 + lVar10 * 2;
            if (fVar16 < *(float *)(puVar7 + 1) || fVar16 == *(float *)(puVar7 + 1)) break;
            *puVar9 = *puVar7;
            *(int *)(puVar9 + 1) = (int)puVar7[1];
            bVar19 = lVar10 != 0;
            puVar9 = puVar7;
            lVar6 = lVar10;
            lVar10 = (lVar10 + -1) / 2;
          } while (bVar19);
        }
LAB_0010568c:
        *puVar9 = uVar15;
        *(float *)(puVar9 + 1) = fVar16;
      }
      pBVar2 = (BVHN<4> *)**(ulong **)pauVar13[-1];
      local_70 = pauVar14;
      if (((ulong)pBVar2 & 0xf) != 0) {
        uVar15 = (long)pauVar14 - (long)local_78 >> 4;
        goto LAB_00105733;
      }
      pBVar11 = pBVar2 + 0x20;
      pBVar18 = pBVar2;
      do {
        uVar15 = *(ulong *)((-0x40 - (long)pBVar2) + (long)pBVar11 * 2);
        if (uVar15 != 8) {
          uStack_50._0_4_ = fVar20;
          if ((uVar15 & 8) == 0) {
            uStack_50._0_4_ =
                 ((*(float *)(pBVar11 + 0x30) - *(float *)(pBVar11 + 0x20)) +
                 (*(float *)(pBVar11 + 0x50) - *(float *)(pBVar11 + 0x40))) *
                 (*(float *)(pBVar11 + 0x10) - *(float *)pBVar11) +
                 (*(float *)(pBVar11 + 0x30) - *(float *)(pBVar11 + 0x20)) *
                 (*(float *)(pBVar11 + 0x50) - *(float *)(pBVar11 + 0x40));
            uStack_50._0_4_ = (float)uStack_50 + (float)uStack_50;
          }
          pBStack_58 = pBVar18;
          if (pauVar14 == pauVar12) {
            std::
            vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
            ::_M_realloc_insert<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>
                      ((vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
                        *)&local_78,pauVar14,pCStack_b0);
            pauVar12 = local_68;
            fVar20 = _LC3;
          }
          else {
            auVar4._8_4_ = (float)uStack_50;
            auVar4._0_8_ = pBVar18;
            auVar4._12_4_ = uStack_50._4_4_;
            local_70 = pauVar14 + 1;
            *pauVar14 = auVar4;
          }
          uVar15 = *(ulong *)local_70[-1];
          fVar16 = (float)*(ulong *)((long)local_70[-1] + 8);
          lVar6 = (long)local_70 - (long)local_78 >> 4;
          lVar5 = lVar6 + -1;
          lVar6 = lVar6 + -2;
          if (lVar5 < 1) {
            puVar9 = (ulong *)((long)local_78 + ((long)local_70 - (long)local_78) + -0x10);
          }
          else {
            do {
              lVar10 = lVar6 / 2;
              puVar9 = local_78 + lVar5 * 2;
              puVar7 = local_78 + lVar10 * 2;
              if (fVar16 < *(float *)(puVar7 + 1) || fVar16 == *(float *)(puVar7 + 1)) break;
              *puVar9 = *puVar7;
              *(int *)(puVar9 + 1) = (int)puVar7[1];
              lVar6 = lVar10 + -1;
              puVar9 = puVar7;
              lVar5 = lVar10;
            } while (lVar10 != 0);
          }
          *puVar9 = uVar15;
          *(float *)(puVar9 + 1) = fVar16;
          pauVar14 = local_70;
        }
        pBVar11 = pBVar11 + 4;
        pBVar18 = pBVar18 + 8;
      } while (pBVar2 + 0x30 != pBVar11);
      lVar5 = (long)pauVar14 - (long)local_78;
      uVar15 = lVar5 >> 4;
      pauVar13 = pauVar14;
    } while (uVar15 < param_1);
LAB_001054a0:
    puVar9 = local_78;
    do {
      puVar7 = (ulong *)*puVar9;
      puVar9 = puVar9 + 2;
      *puVar7 = *puVar7 | 0x8000000000000000;
    } while (local_78 + uVar15 * 2 != puVar9);
  }
  else {
LAB_00105733:
    if (uVar15 != 0) goto LAB_001054a0;
  }
  puVar9 = local_78;
  lVar5 = lRam00000000001054ce;
  this_00 = *(MutexSys **)(in_FS_OFFSET + lRam00000000001054ce);
  if (this_00 == (MutexSys *)0x0) {
    this_00 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
    embree::MutexSys::MutexSys(this_00);
    *(MutexSys **)(this_00 + 0x40) = this_00;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(MutexSys **)(this_00 + 0x80) = this_00;
    *(undefined8 *)(this_00 + 0x88) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x98) = 0;
    *(undefined8 *)(this_00 + 0xa0) = 0;
    *(undefined8 *)(this_00 + 0xa8) = 0;
    *(undefined8 *)(this_00 + 0xb0) = 0;
    *(MutexSys **)(in_FS_OFFSET + lVar5) = this_00;
    embree::MutexSys::lock();
    pBStack_58 = (BVHN<4> *)this_00;
    if (_memmove == _operator_new) {
      std::
      vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
      ::
      _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                  *)&FastAllocator::s_thread_local_allocators,_memmove,pCStack_b0);
      pBVar2 = pBStack_58;
      if (pBStack_58 != (BVHN<4> *)0x0) {
        embree::MutexSys::~MutexSys((MutexSys *)pBStack_58);
        embree::alignedFree(pBVar2);
      }
    }
    else {
      *_memmove = this_00;
      _memmove = _memmove + 1;
    }
    embree::MutexSys::unlock();
  }
  uStack_50 = this_00 + 0x40;
  pMStack_48 = uStack_50;
  if (this[0x182] == (BVHN<4>)0x0) {
    pMStack_48 = this_00 + 0x80;
  }
  pBStack_58 = this + 0x78;
  uVar8 = layoutLargeNodesRecursion(this,this + 0x70,pCStack_b0);
  *(undefined8 *)(this + 0x70) = uVar8;
  if (puVar9 == (ulong *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    ::operator_delete(puVar9,(long)pauVar12 - (long)puVar9);
    return;
  }
LAB_0010597d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::BVHN<4>::Allocator::Allocator(embree::BVHN<4>*) */

void __thiscall embree::BVHN<4>::Allocator::Allocator(Allocator *this,BVHN *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::BVHN<4>::CreateAlloc::CreateAlloc(embree::BVHN<4>*) */

void __thiscall embree::BVHN<4>::CreateAlloc::CreateAlloc(CreateAlloc *this,BVHN *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::BVHN<4>::BVHN(embree::PrimitiveType const&, embree::Scene*) */

void embree::BVHN<4>::BVHN(PrimitiveType *param_1,Scene *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::FastAllocator::Statistics::Statistics(embree::FastAllocator*,
   embree::FastAllocator::AllocationType, bool) */

void __thiscall embree::FastAllocator::Statistics::Statistics(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::BVHN<4>::~BVHN() */

void __thiscall embree::BVHN<4>::~BVHN(BVHN<4> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::FastAllocator::~FastAllocator() */

void __thiscall embree::FastAllocator::~FastAllocator(FastAllocator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


