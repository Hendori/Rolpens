
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHN<4>::~BVHN() */

void __thiscall embree::BVHN<4>::~BVHN(BVHN<4> *this)

{
  long *plVar1;
  BVHN<4> BVar2;
  BVHN<4> *this_00;
  void *pvVar3;
  long *plVar4;
  ulong *puVar5;
  MutexSys *pMVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  MutexSys *pMVar10;
  ulong *puVar11;
  long *plVar12;
  
  uVar9 = 0;
  lVar7 = *(long *)(this + 0x208);
  lVar8 = *(long *)(this + 0x200);
  *(undefined ***)this = &PTR__BVHN_001069e0;
  if (lVar7 != lVar8) {
    do {
      this_00 = *(BVHN<4> **)(lVar8 + uVar9 * 8);
      if (this_00 != (BVHN<4> *)0x0) {
        if (*(code **)(*(long *)this_00 + 8) == ~BVHN) {
          ~BVHN(this_00);
          embree::alignedFree(this_00);
          lVar7 = *(long *)(this + 0x208);
          lVar8 = *(long *)(this + 0x200);
        }
        else {
          (**(code **)(*(long *)this_00 + 8))();
          lVar7 = *(long *)(this + 0x208);
          lVar8 = *(long *)(this + 0x200);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(lVar7 - lVar8 >> 3));
  }
  embree::alignedFree(*(void **)(this + 0x230));
  pvVar3 = *(void **)(this + 0x200);
  if (pvVar3 != (void *)0x0) {
    ::operator_delete(pvVar3,*(long *)(this + 0x210) - (long)pvVar3);
  }
  pMVar10 = (MutexSys *)(this + 0x170);
  pMVar6 = (MutexSys *)(this + 0x130);
  do {
    while (*(long *)pMVar6 != 0) {
      lVar7 = *(long *)(*(long *)pMVar6 + 0x18);
      *(long *)(*(long *)pMVar6 + 0x18) = *(long *)pMVar10;
      LOCK();
      *(long *)pMVar10 = *(long *)pMVar6;
      UNLOCK();
      LOCK();
      *(long *)pMVar6 = lVar7;
      UNLOCK();
    }
    LOCK();
    *(long *)pMVar6 = 0;
    UNLOCK();
    pMVar6 = pMVar6 + 8;
  } while (pMVar10 != pMVar6);
  plVar12 = *(long **)(this + 0x1a8);
  plVar4 = *(long **)(this + 0x1b0);
  if (plVar12 != plVar4) {
    do {
      while( true ) {
        lVar7 = *plVar12;
        if (this + 0x78 != *(BVHN<4> **)(lVar7 + 8)) break;
        embree::MutexSys::lock();
        if (this + 0x78 == *(BVHN<4> **)(lVar7 + 8)) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x118);
          *plVar1 = *plVar1 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x120);
          *plVar1 = *plVar1 + (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                               *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar7 + 8) + 0x128);
          *plVar1 = *plVar1 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar7 + 0x48) = 0;
          *(undefined8 *)(lVar7 + 0x58) = 0;
          *(undefined8 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x68) = 0;
          *(undefined8 *)(lVar7 + 0x70) = 0;
          *(undefined8 *)(lVar7 + 0x60) = 0;
          *(undefined8 *)(lVar7 + 0x88) = 0;
          *(undefined8 *)(lVar7 + 0x98) = 0;
          *(undefined8 *)(lVar7 + 0x90) = 0;
          *(undefined8 *)(lVar7 + 0xa8) = 0;
          *(undefined8 *)(lVar7 + 0xb0) = 0;
          *(undefined8 *)(lVar7 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar7 + 8) = 0;
          UNLOCK();
        }
        embree::MutexSys::unlock();
        plVar12 = plVar12 + 1;
        if (plVar4 == plVar12) goto LAB_001002aa;
      }
      plVar12 = plVar12 + 1;
    } while (plVar4 != plVar12);
LAB_001002aa:
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
    puVar11 = *(ulong **)(this + 0x170);
    BVar2 = this[0x180];
    plVar12 = *(long **)(this + 0x78);
    if (puVar11 != (ulong *)0x0) {
      if (plVar12 == (long *)0x0) {
        if (BVar2 == (BVHN<4>)0x0) {
          do {
            puVar5 = (ulong *)puVar11[3];
            if ((int)puVar11[5] == 0) {
              embree::alignedFree(puVar11);
            }
            else if ((int)puVar11[5] == 1) {
              embree::os_free(puVar11,puVar11[2] + 0x40,*(bool *)((long)puVar11 + 0x2c));
            }
            puVar11 = puVar5;
          } while (puVar5 != (ulong *)0x0);
        }
        else {
          do {
            puVar5 = (ulong *)puVar11[3];
            if ((int)puVar11[5] == 0) {
              (**(code **)(_DAT_00000000 + 0x40))(0,puVar11);
            }
            else if ((int)puVar11[5] == 1) {
              embree::os_free(puVar11,puVar11[2] + 0x40,*(bool *)((long)puVar11 + 0x2c));
            }
            puVar11 = puVar5;
          } while (puVar5 != (ulong *)0x0);
        }
      }
      else {
        do {
          while( true ) {
            puVar5 = (ulong *)puVar11[3];
            uVar9 = *puVar11;
            if (*puVar11 < puVar11[1]) {
              uVar9 = puVar11[1];
            }
            if (puVar11[2] < uVar9) {
              uVar9 = puVar11[2];
            }
            lVar7 = puVar11[4] + 0x40 + uVar9;
            if ((int)puVar11[5] != 0) break;
            if (BVar2 == (BVHN<4>)0x0) {
              embree::alignedFree(puVar11);
            }
            else {
              (**(code **)(*plVar12 + 0x40))(plVar12,puVar11);
            }
            (**(code **)(*plVar12 + 0x20))(plVar12,-lVar7,1);
LAB_0010034a:
            puVar11 = puVar5;
            if (puVar5 == (ulong *)0x0) goto LAB_001003b0;
          }
          if ((int)puVar11[5] != 1) goto LAB_0010034a;
          embree::os_free(puVar11,puVar11[2] + 0x40,*(bool *)((long)puVar11 + 0x2c));
          (**(code **)(*plVar12 + 0x20))(plVar12,-lVar7,1);
          puVar11 = puVar5;
        } while (puVar5 != (ulong *)0x0);
      }
    }
  }
LAB_001003b0:
  LOCK();
  *(long *)pMVar10 = 0;
  UNLOCK();
  if (*(long *)(this + 0x178) != 0) {
    puVar11 = *(ulong **)(this + 0x178);
    BVar2 = this[0x180];
    plVar12 = *(long **)(this + 0x78);
    if (puVar11 != (ulong *)0x0) {
      if (plVar12 == (long *)0x0) {
        if (BVar2 == (BVHN<4>)0x0) {
          do {
            puVar5 = (ulong *)puVar11[3];
            if ((int)puVar11[5] == 0) {
              embree::alignedFree(puVar11);
            }
            else if ((int)puVar11[5] == 1) {
              embree::os_free(puVar11,puVar11[2] + 0x40,*(bool *)((long)puVar11 + 0x2c));
            }
            puVar11 = puVar5;
          } while (puVar5 != (ulong *)0x0);
        }
        else {
          do {
            puVar5 = (ulong *)puVar11[3];
            if ((int)puVar11[5] == 0) {
              (**(code **)(_DAT_00000000 + 0x40))(0,puVar11);
            }
            else if ((int)puVar11[5] == 1) {
              embree::os_free(puVar11,puVar11[2] + 0x40,*(bool *)((long)puVar11 + 0x2c));
            }
            puVar11 = puVar5;
          } while (puVar5 != (ulong *)0x0);
        }
      }
      else {
        do {
          while( true ) {
            puVar5 = (ulong *)puVar11[3];
            uVar9 = *puVar11;
            if (*puVar11 < puVar11[1]) {
              uVar9 = puVar11[1];
            }
            if (puVar11[2] < uVar9) {
              uVar9 = puVar11[2];
            }
            lVar7 = puVar11[4] + 0x40 + uVar9;
            if ((int)puVar11[5] != 0) break;
            if (BVar2 == (BVHN<4>)0x0) {
              embree::alignedFree(puVar11);
            }
            else {
              (**(code **)(*plVar12 + 0x40))(plVar12,puVar11);
            }
            (**(code **)(*plVar12 + 0x20))(plVar12,-lVar7,1);
LAB_00100429:
            puVar11 = puVar5;
            if (puVar5 == (ulong *)0x0) goto LAB_00100490;
          }
          if ((int)puVar11[5] != 1) goto LAB_00100429;
          embree::os_free(puVar11,puVar11[2] + 0x40,*(bool *)((long)puVar11 + 0x2c));
          (**(code **)(*plVar12 + 0x20))(plVar12,-lVar7,1);
          puVar11 = puVar5;
        } while (puVar5 != (ulong *)0x0);
      }
    }
  }
LAB_00100490:
  LOCK();
  *(undefined8 *)(this + 0x178) = 0;
  UNLOCK();
  pMVar10 = (MutexSys *)(this + 0xf0);
  pMVar6 = pMVar10;
  do {
    LOCK();
    *(long *)pMVar6 = 0;
    UNLOCK();
    LOCK();
    *(long *)(pMVar6 + 0x40) = 0;
    UNLOCK();
    pMVar6 = pMVar6 + 8;
  } while (pMVar6 != (MutexSys *)(this + 0x130));
  pvVar3 = *(void **)(this + 0x1e8);
  lVar7 = *(long *)(this + 0x1e0);
  if (pvVar3 != (void *)0x0) {
    if ((ulong)(lVar7 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar3);
    }
    else {
      embree::os_free(pvVar3,lVar7 << 5,(bool)this[0x1d0]);
    }
  }
  if (lVar7 != 0) {
    (**(code **)**(undefined8 **)(this + 0x1c8))(*(undefined8 **)(this + 0x1c8),lVar7 * -0x20,1);
  }
  pvVar3 = *(void **)(this + 0x1a8);
  if (pvVar3 != (void *)0x0) {
    ::operator_delete(pvVar3,*(long *)(this + 0x1b8) - (long)pvVar3);
  }
  if (this != (BVHN<4> *)0xffffffffffffff50) {
    while ((MutexSys *)(this + 0xb0) != pMVar10) {
      pMVar10 = pMVar10 + -8;
      embree::MutexSys::~MutexSys(pMVar10);
    }
  }
  embree::MutexSys::~MutexSys((MutexSys *)(this + 0xa8));
  return;
}



/* embree::BVHN<4>::~BVHN() */

void __thiscall embree::BVHN<4>::~BVHN(BVHN<4> *this)

{
  ~BVHN(this);
  embree::alignedFree(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHN<4>::clear() */

void __thiscall embree::BVHN<4>::clear(BVHN<4> *this)

{
  long *plVar1;
  BVHN<4> BVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  ulong *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  BVHN<4> *pBVar9;
  ulong uVar10;
  BVHN<4> *pBVar11;
  ulong *puVar12;
  long *plVar13;
  
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
  plVar13 = *(long **)(this + 0x1a8);
  plVar3 = *(long **)(this + 0x1b0);
  if (plVar3 != plVar13) {
    do {
      while( true ) {
        lVar4 = *plVar13;
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
        plVar13 = plVar13 + 1;
        if (plVar3 == plVar13) goto LAB_001008ba;
      }
      plVar13 = plVar13 + 1;
    } while (plVar3 != plVar13);
LAB_001008ba:
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
    plVar13 = *(long **)(this + 0x78);
    if (puVar12 != (ulong *)0x0) {
      if (plVar13 == (long *)0x0) {
        if (BVar2 == (BVHN<4>)0x0) {
          do {
            puVar6 = (ulong *)puVar12[3];
            if ((int)puVar12[5] == 0) {
              embree::alignedFree(puVar12);
            }
            else if ((int)puVar12[5] == 1) {
              embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
            }
            puVar12 = puVar6;
          } while (puVar6 != (ulong *)0x0);
        }
        else {
          do {
            puVar6 = (ulong *)puVar12[3];
            if ((int)puVar12[5] == 0) {
              (**(code **)(_DAT_00000000 + 0x40))(0,puVar12);
            }
            else if ((int)puVar12[5] == 1) {
              embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
            }
            puVar12 = puVar6;
          } while (puVar6 != (ulong *)0x0);
        }
      }
      else {
        do {
          while( true ) {
            puVar6 = (ulong *)puVar12[3];
            uVar10 = *puVar12;
            if (*puVar12 < puVar12[1]) {
              uVar10 = puVar12[1];
            }
            if (puVar12[2] < uVar10) {
              uVar10 = puVar12[2];
            }
            lVar4 = puVar12[4] + 0x40 + uVar10;
            if ((int)puVar12[5] != 0) break;
            if (BVar2 == (BVHN<4>)0x0) {
              embree::alignedFree(puVar12);
            }
            else {
              (**(code **)(*plVar13 + 0x40))(plVar13,puVar12);
            }
            (**(code **)(*plVar13 + 0x20))(plVar13,-lVar4,1);
LAB_00100962:
            puVar12 = puVar6;
            if (puVar6 == (ulong *)0x0) goto LAB_001009d0;
          }
          if ((int)puVar12[5] != 1) goto LAB_00100962;
          embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
          (**(code **)(*plVar13 + 0x20))(plVar13,-lVar4,1);
          puVar12 = puVar6;
        } while (puVar6 != (ulong *)0x0);
      }
    }
  }
LAB_001009d0:
  LOCK();
  *(long *)pBVar11 = 0;
  UNLOCK();
  if (*(long *)(this + 0x178) != 0) {
    puVar12 = *(ulong **)(this + 0x178);
    BVar2 = this[0x180];
    plVar13 = *(long **)(this + 0x78);
    if (puVar12 != (ulong *)0x0) {
      if (plVar13 == (long *)0x0) {
        if (BVar2 == (BVHN<4>)0x0) {
          do {
            puVar6 = (ulong *)puVar12[3];
            if ((int)puVar12[5] == 0) {
              embree::alignedFree(puVar12);
            }
            else if ((int)puVar12[5] == 1) {
              embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
            }
            puVar12 = puVar6;
          } while (puVar6 != (ulong *)0x0);
        }
        else {
          do {
            puVar6 = (ulong *)puVar12[3];
            if ((int)puVar12[5] == 0) {
              (**(code **)(_DAT_00000000 + 0x40))(0,puVar12);
            }
            else if ((int)puVar12[5] == 1) {
              embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
            }
            puVar12 = puVar6;
          } while (puVar6 != (ulong *)0x0);
        }
      }
      else {
        do {
          while( true ) {
            puVar6 = (ulong *)puVar12[3];
            uVar10 = *puVar12;
            if (*puVar12 < puVar12[1]) {
              uVar10 = puVar12[1];
            }
            if (puVar12[2] < uVar10) {
              uVar10 = puVar12[2];
            }
            lVar4 = puVar12[4] + 0x40 + uVar10;
            if ((int)puVar12[5] != 0) break;
            if (BVar2 == (BVHN<4>)0x0) {
              embree::alignedFree(puVar12);
            }
            else {
              (**(code **)(*plVar13 + 0x40))(plVar13,puVar12);
            }
            (**(code **)(*plVar13 + 0x20))(plVar13,-lVar4,1);
LAB_00100a49:
            puVar12 = puVar6;
            if (puVar6 == (ulong *)0x0) goto LAB_00100ab0;
          }
          if ((int)puVar12[5] != 1) goto LAB_00100a49;
          embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
          (**(code **)(*plVar13 + 0x20))(plVar13,-lVar4,1);
          puVar12 = puVar6;
        } while (puVar6 != (ulong *)0x0);
      }
    }
  }
LAB_00100ab0:
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
  pvVar5 = *(void **)(this + 0x1e8);
  lVar4 = *(long *)(this + 0x1e0);
  if (pvVar5 != (void *)0x0) {
    if ((ulong)(lVar4 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar5);
    }
    else {
      embree::os_free(pvVar5,lVar4 << 5,(bool)this[0x1d0]);
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



/* embree::FastAllocator::AllStatistics::AllStatistics(embree::FastAllocator*) */

void __thiscall
embree::FastAllocator::AllStatistics::AllStatistics(AllStatistics *this,FastAllocator *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  *(undefined8 *)this = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  puVar4 = *(ulong **)(param_1 + 0xf8);
  puVar1 = *(ulong **)(param_1 + 0x100);
  if (puVar4 == (ulong *)0x0) {
    if (puVar1 != (ulong *)0x0) {
LAB_0010171f:
      lVar5 = 0;
      puVar3 = puVar1;
      do {
        uVar2 = *puVar3;
        if (*puVar3 < puVar3[1]) {
          uVar2 = puVar3[1];
        }
        if (puVar3[2] < uVar2) {
          uVar2 = puVar3[2];
        }
        puVar3 = (ulong *)puVar3[3];
        lVar5 = lVar5 + uVar2;
      } while (puVar3 != (ulong *)0x0);
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + lVar5;
      if (puVar4 != (ulong *)0x0) goto LAB_00101a80;
      lVar6 = *(long *)(this + 0x28);
      goto LAB_0010175e;
    }
  }
  else {
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      uVar2 = puVar3[2];
      if (*puVar3 < puVar3[2]) {
        uVar2 = *puVar3;
      }
      lVar5 = lVar5 + uVar2;
      puVar3 = (ulong *)puVar3[3];
    } while (puVar3 != (ulong *)0x0);
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + lVar5;
    if (puVar1 != (ulong *)0x0) goto LAB_0010171f;
LAB_00101a80:
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      uVar2 = *puVar3;
      if (*puVar3 < puVar3[1]) {
        uVar2 = puVar3[1];
      }
      if (puVar3[2] < uVar2) {
        uVar2 = puVar3[2];
      }
      uVar7 = puVar3[2];
      if (*puVar3 < puVar3[2]) {
        uVar7 = *puVar3;
      }
      puVar3 = (ulong *)puVar3[3];
      lVar5 = lVar5 + (uVar2 - uVar7);
    } while (puVar3 != (ulong *)0x0);
    lVar6 = *(long *)(this + 0x28);
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + lVar5;
    if (puVar1 != (ulong *)0x0) {
LAB_0010175e:
      lVar5 = 0;
      do {
        puVar3 = puVar1 + 4;
        puVar1 = (ulong *)puVar1[3];
        lVar5 = lVar5 + 0x40 + *puVar3;
      } while (puVar1 != (ulong *)0x0);
      lVar6 = lVar5 + lVar6;
      *(long *)(this + 0x28) = lVar6;
      if (puVar4 == (ulong *)0x0) goto LAB_001013ee;
    }
    lVar5 = 0;
    do {
      puVar1 = puVar4 + 4;
      puVar4 = (ulong *)puVar4[3];
      lVar5 = lVar5 + 0x40 + *puVar1;
    } while (puVar4 != (ulong *)0x0);
    *(long *)(this + 0x28) = lVar5 + lVar6;
  }
LAB_001013ee:
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  puVar4 = *(ulong **)(param_1 + 0xf8);
  puVar1 = *(ulong **)(param_1 + 0x100);
  if (puVar4 == (ulong *)0x0) {
    if (puVar1 != (ulong *)0x0) {
LAB_00101658:
      lVar5 = 0;
      puVar3 = puVar1;
      do {
        while ((int)puVar3[5] != 0) {
          puVar3 = (ulong *)puVar3[3];
          if (puVar3 == (ulong *)0x0) goto LAB_00101674;
        }
        uVar2 = *puVar3;
        if (*puVar3 < puVar3[1]) {
          uVar2 = puVar3[1];
        }
        if (puVar3[2] < uVar2) {
          uVar2 = puVar3[2];
        }
        puVar3 = (ulong *)puVar3[3];
        lVar5 = lVar5 + uVar2;
      } while (puVar3 != (ulong *)0x0);
LAB_00101674:
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + lVar5;
      if (puVar4 != (ulong *)0x0) goto LAB_00101919;
      lVar6 = *(long *)(this + 0x40);
      goto LAB_00101685;
    }
  }
  else {
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      while ((int)puVar3[5] != 0) {
        puVar3 = (ulong *)puVar3[3];
        if (puVar3 == (ulong *)0x0) goto LAB_0010190c;
      }
      uVar2 = puVar3[2];
      if (*puVar3 < puVar3[2]) {
        uVar2 = *puVar3;
      }
      lVar5 = lVar5 + uVar2;
      puVar3 = (ulong *)puVar3[3];
    } while (puVar3 != (ulong *)0x0);
LAB_0010190c:
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + lVar5;
    if (puVar1 != (ulong *)0x0) goto LAB_00101658;
LAB_00101919:
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      while ((int)puVar3[5] != 0) {
        puVar3 = (ulong *)puVar3[3];
        if (puVar3 == (ulong *)0x0) {
          lVar6 = *(long *)(this + 0x40);
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + lVar5;
          if (puVar1 == (ulong *)0x0) goto LAB_001016bb;
          goto LAB_00101685;
        }
      }
      uVar2 = *puVar3;
      if (*puVar3 < puVar3[1]) {
        uVar2 = puVar3[1];
      }
      if (puVar3[2] < uVar2) {
        uVar2 = puVar3[2];
      }
      uVar7 = puVar3[2];
      if (*puVar3 < puVar3[2]) {
        uVar7 = *puVar3;
      }
      puVar3 = (ulong *)puVar3[3];
      lVar5 = lVar5 + (uVar2 - uVar7);
    } while (puVar3 != (ulong *)0x0);
    lVar6 = *(long *)(this + 0x40);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + lVar5;
    if (puVar1 != (ulong *)0x0) {
LAB_00101685:
      lVar5 = 0;
      do {
        if ((int)puVar1[5] == 0) {
          lVar5 = lVar5 + 0x40 + puVar1[4];
        }
        puVar1 = (ulong *)puVar1[3];
      } while (puVar1 != (ulong *)0x0);
      lVar6 = lVar5 + lVar6;
      *(long *)(this + 0x40) = lVar6;
      if (puVar4 == (ulong *)0x0) goto LAB_0010142c;
    }
LAB_001016bb:
    lVar5 = 0;
    do {
      if ((int)puVar4[5] == 0) {
        lVar5 = lVar5 + 0x40 + puVar4[4];
      }
      puVar4 = (ulong *)puVar4[3];
    } while (puVar4 != (ulong *)0x0);
    *(long *)(this + 0x40) = lVar5 + lVar6;
  }
LAB_0010142c:
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  puVar4 = *(ulong **)(param_1 + 0xf8);
  puVar1 = *(ulong **)(param_1 + 0x100);
  if (puVar4 == (ulong *)0x0) {
    if (puVar1 != (ulong *)0x0) {
LAB_001017b0:
      lVar5 = 0;
      puVar3 = puVar1;
      do {
        while (((int)puVar3[5] == 1 && (*(char *)((long)puVar3 + 0x2c) == '\0'))) {
          uVar2 = *puVar3;
          if (*puVar3 < puVar3[1]) {
            uVar2 = puVar3[1];
          }
          if (puVar3[2] < uVar2) {
            uVar2 = puVar3[2];
          }
          puVar3 = (ulong *)puVar3[3];
          lVar5 = lVar5 + uVar2;
          if (puVar3 == (ulong *)0x0) goto LAB_001017fa;
        }
        puVar3 = (ulong *)puVar3[3];
      } while (puVar3 != (ulong *)0x0);
LAB_001017fa:
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + lVar5;
      if (puVar4 != (ulong *)0x0) goto LAB_00101a0c;
      lVar6 = *(long *)(this + 0x58);
      goto LAB_0010180b;
    }
  }
  else {
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      while (((int)puVar3[5] == 1 && (*(char *)((long)puVar3 + 0x2c) == '\0'))) {
        uVar2 = puVar3[2];
        if (*puVar3 < puVar3[2]) {
          uVar2 = *puVar3;
        }
        lVar5 = lVar5 + uVar2;
        puVar3 = (ulong *)puVar3[3];
        if (puVar3 == (ulong *)0x0) goto LAB_001019ff;
      }
      puVar3 = (ulong *)puVar3[3];
    } while (puVar3 != (ulong *)0x0);
LAB_001019ff:
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + lVar5;
    if (puVar1 != (ulong *)0x0) goto LAB_001017b0;
LAB_00101a0c:
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      while (((int)puVar3[5] == 1 && (*(char *)((long)puVar3 + 0x2c) == '\0'))) {
        uVar2 = *puVar3;
        if (*puVar3 < puVar3[1]) {
          uVar2 = puVar3[1];
        }
        if (puVar3[2] < uVar2) {
          uVar2 = puVar3[2];
        }
        uVar7 = puVar3[2];
        if (*puVar3 < puVar3[2]) {
          uVar7 = *puVar3;
        }
        puVar3 = (ulong *)puVar3[3];
        lVar5 = lVar5 + (uVar2 - uVar7);
        if (puVar3 == (ulong *)0x0) goto LAB_00101a63;
      }
      puVar3 = (ulong *)puVar3[3];
    } while (puVar3 != (ulong *)0x0);
LAB_00101a63:
    lVar6 = *(long *)(this + 0x58);
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + lVar5;
    if (puVar1 != (ulong *)0x0) {
LAB_0010180b:
      lVar5 = 0;
      do {
        while (((int)puVar1[5] == 1 && (*(char *)((long)puVar1 + 0x2c) == '\0'))) {
          puVar3 = puVar1 + 4;
          puVar1 = (ulong *)puVar1[3];
          lVar5 = lVar5 + 0x40 + *puVar3;
          if (puVar1 == (ulong *)0x0) goto LAB_00101837;
        }
        puVar1 = (ulong *)puVar1[3];
      } while (puVar1 != (ulong *)0x0);
LAB_00101837:
      lVar6 = lVar5 + lVar6;
      *(long *)(this + 0x58) = lVar6;
      if (puVar4 == (ulong *)0x0) goto LAB_0010146a;
    }
    lVar5 = 0;
    do {
      while (((int)puVar4[5] == 1 && (*(char *)((long)puVar4 + 0x2c) == '\0'))) {
        puVar1 = puVar4 + 4;
        puVar4 = (ulong *)puVar4[3];
        lVar5 = lVar5 + 0x40 + *puVar1;
        if (puVar4 == (ulong *)0x0) goto LAB_00101877;
      }
      puVar4 = (ulong *)puVar4[3];
    } while (puVar4 != (ulong *)0x0);
LAB_00101877:
    *(long *)(this + 0x58) = lVar5 + lVar6;
  }
LAB_0010146a:
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  puVar4 = *(ulong **)(param_1 + 0xf8);
  puVar1 = *(ulong **)(param_1 + 0x100);
  if (puVar4 == (ulong *)0x0) {
    if (puVar1 != (ulong *)0x0) {
LAB_00101588:
      lVar5 = 0;
      puVar3 = puVar1;
      do {
        while (((int)puVar3[5] == 1 && (*(char *)((long)puVar3 + 0x2c) != '\0'))) {
          uVar2 = *puVar3;
          if (*puVar3 < puVar3[1]) {
            uVar2 = puVar3[1];
          }
          if (puVar3[2] < uVar2) {
            uVar2 = puVar3[2];
          }
          puVar3 = (ulong *)puVar3[3];
          lVar5 = lVar5 + uVar2;
          if (puVar3 == (ulong *)0x0) goto LAB_001015ca;
        }
        puVar3 = (ulong *)puVar3[3];
      } while (puVar3 != (ulong *)0x0);
LAB_001015ca:
      *(long *)(this + 0x68) = *(long *)(this + 0x68) + lVar5;
      if (puVar4 != (ulong *)0x0) goto LAB_00101bfc;
      lVar6 = *(long *)(this + 0x70);
      goto LAB_001015db;
    }
  }
  else {
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      while (((int)puVar3[5] == 1 && (*(char *)((long)puVar3 + 0x2c) != '\0'))) {
        uVar2 = puVar3[2];
        if (*puVar3 < puVar3[2]) {
          uVar2 = *puVar3;
        }
        lVar5 = lVar5 + uVar2;
        puVar3 = (ulong *)puVar3[3];
        if (puVar3 == (ulong *)0x0) goto LAB_00101bef;
      }
      puVar3 = (ulong *)puVar3[3];
    } while (puVar3 != (ulong *)0x0);
LAB_00101bef:
    *(long *)(this + 0x60) = *(long *)(this + 0x60) + lVar5;
    if (puVar1 != (ulong *)0x0) goto LAB_00101588;
LAB_00101bfc:
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      while (((int)puVar3[5] == 1 && (*(char *)((long)puVar3 + 0x2c) != '\0'))) {
        uVar2 = *puVar3;
        if (*puVar3 < puVar3[1]) {
          uVar2 = puVar3[1];
        }
        if (puVar3[2] < uVar2) {
          uVar2 = puVar3[2];
        }
        uVar7 = puVar3[2];
        if (*puVar3 < puVar3[2]) {
          uVar7 = *puVar3;
        }
        puVar3 = (ulong *)puVar3[3];
        lVar5 = lVar5 + (uVar2 - uVar7);
        if (puVar3 == (ulong *)0x0) goto LAB_00101c53;
      }
      puVar3 = (ulong *)puVar3[3];
    } while (puVar3 != (ulong *)0x0);
LAB_00101c53:
    lVar6 = *(long *)(this + 0x70);
    *(long *)(this + 0x68) = *(long *)(this + 0x68) + lVar5;
    if (puVar1 != (ulong *)0x0) {
LAB_001015db:
      lVar5 = 0;
      do {
        while (((int)puVar1[5] == 1 && (*(char *)((long)puVar1 + 0x2c) != '\0'))) {
          puVar3 = puVar1 + 4;
          puVar1 = (ulong *)puVar1[3];
          lVar5 = lVar5 + 0x40 + *puVar3;
          if (puVar1 == (ulong *)0x0) goto LAB_00101607;
        }
        puVar1 = (ulong *)puVar1[3];
      } while (puVar1 != (ulong *)0x0);
LAB_00101607:
      lVar6 = lVar5 + lVar6;
      *(long *)(this + 0x70) = lVar6;
      if (puVar4 == (ulong *)0x0) goto LAB_001014a8;
    }
    lVar5 = 0;
    do {
      while (((int)puVar4[5] == 1 && (*(char *)((long)puVar4 + 0x2c) != '\0'))) {
        puVar1 = puVar4 + 4;
        puVar4 = (ulong *)puVar4[3];
        lVar5 = lVar5 + 0x40 + *puVar1;
        if (puVar4 == (ulong *)0x0) goto LAB_00101647;
      }
      puVar4 = (ulong *)puVar4[3];
    } while (puVar4 != (ulong *)0x0);
LAB_00101647:
    *(long *)(this + 0x70) = lVar6 + lVar5;
  }
LAB_001014a8:
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  puVar4 = *(ulong **)(param_1 + 0xf8);
  puVar1 = *(ulong **)(param_1 + 0x100);
  if (puVar4 == (ulong *)0x0) {
    if (puVar1 == (ulong *)0x0) {
      return;
    }
LAB_001014f0:
    lVar5 = 0;
    puVar3 = puVar1;
    do {
      while ((int)puVar3[5] != 2) {
        puVar3 = (ulong *)puVar3[3];
        if (puVar3 == (ulong *)0x0) goto LAB_0010150b;
      }
      uVar2 = *puVar3;
      if (*puVar3 < puVar3[1]) {
        uVar2 = puVar3[1];
      }
      if (puVar3[2] < uVar2) {
        uVar2 = puVar3[2];
      }
      puVar3 = (ulong *)puVar3[3];
      lVar5 = lVar5 + uVar2;
    } while (puVar3 != (ulong *)0x0);
LAB_0010150b:
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + lVar5;
    if (puVar4 != (ulong *)0x0) goto LAB_00101b10;
    lVar6 = *(long *)(this + 0x88);
  }
  else {
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      while ((int)puVar3[5] != 2) {
        puVar3 = (ulong *)puVar3[3];
        if (puVar3 == (ulong *)0x0) goto LAB_00101b03;
      }
      uVar2 = puVar3[2];
      if (*puVar3 < puVar3[2]) {
        uVar2 = *puVar3;
      }
      lVar5 = lVar5 + uVar2;
      puVar3 = (ulong *)puVar3[3];
    } while (puVar3 != (ulong *)0x0);
LAB_00101b03:
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + lVar5;
    if (puVar1 != (ulong *)0x0) goto LAB_001014f0;
LAB_00101b10:
    lVar5 = 0;
    puVar3 = puVar4;
    do {
      while ((int)puVar3[5] != 2) {
        puVar3 = (ulong *)puVar3[3];
        if (puVar3 == (ulong *)0x0) goto LAB_00101b27;
      }
      uVar2 = *puVar3;
      if (*puVar3 < puVar3[1]) {
        uVar2 = puVar3[1];
      }
      if (puVar3[2] < uVar2) {
        uVar2 = puVar3[2];
      }
      uVar7 = puVar3[2];
      if (*puVar3 < puVar3[2]) {
        uVar7 = *puVar3;
      }
      puVar3 = (ulong *)puVar3[3];
      lVar5 = lVar5 + (uVar2 - uVar7);
    } while (puVar3 != (ulong *)0x0);
LAB_00101b27:
    lVar6 = *(long *)(this + 0x88);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + lVar5;
    if (puVar1 == (ulong *)0x0) goto LAB_0010154f;
  }
  lVar5 = 0;
  do {
    if ((int)puVar1[5] == 2) {
      lVar5 = lVar5 + 0x40 + puVar1[4];
    }
    puVar1 = (ulong *)puVar1[3];
  } while (puVar1 != (ulong *)0x0);
  lVar6 = lVar5 + lVar6;
  *(long *)(this + 0x88) = lVar6;
  if (puVar4 == (ulong *)0x0) {
    return;
  }
LAB_0010154f:
  lVar5 = 0;
  do {
    if ((int)puVar4[5] == 2) {
      lVar5 = lVar5 + 0x40 + puVar4[4];
    }
    puVar4 = (ulong *)puVar4[3];
  } while (puVar4 != (ulong *)0x0);
  *(long *)(this + 0x88) = lVar5 + lVar6;
  return;
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



/* embree::FastAllocator::print_blocks() */

void __thiscall embree::FastAllocator::print_blocks(FastAllocator *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ostream *poVar5;
  
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&std::cout,"  estimatedSize = ",0x12);
  poVar5 = std::ostream::_M_insert<unsigned_long>(0x1080b0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar5,", slotMask = ",0xd);
  poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)poVar5);
  std::__ostream_insert<char,std::char_traits<char>>(poVar5,", use_single_mode = ",0x14);
  poVar5 = std::ostream::_M_insert<bool>(SUB81(poVar5,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar5,", maxGrowSize = ",0x10);
  poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)poVar5);
  std::__ostream_insert<char,std::char_traits<char>>(poVar5,", defaultBlockSize = ",0x15);
  poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)poVar5);
  plVar3 = *(long **)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0xf0);
  if (plVar3 != (long *)0x0) {
    if ((char)plVar3[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar3 + 0x30))(plVar3,10);
      }
    }
    std::ostream::put((char)poVar5);
    std::ostream::flush();
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"  used blocks = ",0x10);
    if (*(long *)(this + 0xf8) != 0) {
      for (lVar4 = *(long *)(this + 0xf8); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x18)) {
        iVar2 = *(int *)(lVar4 + 0x28);
        if (iVar2 == 0) {
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"A",1);
          cVar1 = *(char *)(lVar4 + 0x2c);
        }
        else {
          if (iVar2 == 1) {
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"O",1);
          }
          else if (iVar2 == 2) {
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"S",1);
          }
          cVar1 = *(char *)(lVar4 + 0x2c);
        }
        if (cVar1 != '\0') {
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"H",1);
        }
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"[",1);
        poVar5 = std::ostream::_M_insert<unsigned_long>(0x1080b0);
        std::__ostream_insert<char,std::char_traits<char>>(poVar5,", ",2);
        poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)poVar5);
        std::__ostream_insert<char,std::char_traits<char>>(poVar5,", ",2);
        poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)poVar5);
        std::__ostream_insert<char,std::char_traits<char>>(poVar5,"] ",2);
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"[END]",5);
    plVar3 = *(long **)(*(long *)(std::cout + -0x18) + 0x1081a0);
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar3 + 0x30))(plVar3,10);
        }
      }
      std::ostream::put(-0x50);
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"  free blocks = ",0x10);
      if (*(long *)(this + 0x100) != 0) {
        for (lVar4 = *(long *)(this + 0x100); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x18)) {
          iVar2 = *(int *)(lVar4 + 0x28);
          if (iVar2 == 0) {
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"A",1);
          }
          else if (iVar2 == 1) {
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"O",1);
          }
          else if (iVar2 == 2) {
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"S",1);
          }
          if (*(char *)(lVar4 + 0x2c) != '\0') {
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"H",1);
          }
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"[",1);
          poVar5 = std::ostream::_M_insert<unsigned_long>(0x1080b0);
          std::__ostream_insert<char,std::char_traits<char>>(poVar5,", ",2);
          poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)poVar5);
          std::__ostream_insert<char,std::char_traits<char>>(poVar5,", ",2);
          poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)poVar5);
          std::__ostream_insert<char,std::char_traits<char>>(poVar5,"] ",2);
        }
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"[END]",5);
      plVar3 = *(long **)(*(long *)(std::cout + -0x18) + 0x1081a0);
      if (plVar3 != (long *)0x0) {
        if ((char)plVar3[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar3 + 0x30))(plVar3,10);
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
      goto LAB_00103570;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_6 != 0) goto LAB_00103570;
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
      goto LAB_00103570;
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
LAB_00103570:
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
  FastAllocator *pFVar3;
  FastAllocator FVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  void *pvVar14;
  long in_FS_OFFSET;
  bool local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = param_2 - 1;
  if (param_3) {
LAB_00103758:
    uVar9 = embree::TaskScheduler::threadID();
    lVar2 = (uVar9 & *(ulong *)(this + 8)) * 8;
    pFVar3 = this + lVar2 + 0x78;
    puVar5 = *(ulong **)pFVar3;
    if (puVar5 != (ulong *)0x0) {
      puVar10 = *(undefined8 **)this;
      if (puVar10 != (undefined8 *)0x0) {
        puVar10 = puVar10 + 0xa9;
      }
      uVar8 = -param_2 & lVar7 + *param_1;
      uVar13 = puVar5[2];
      LOCK();
      uVar9 = *puVar5;
      *puVar5 = *puVar5 + uVar8;
      UNLOCK();
      if (uVar9 <= puVar5[2]) {
        uVar12 = puVar5[2] - uVar9;
        if (uVar8 < puVar5[2] - uVar9) {
          uVar12 = uVar8;
        }
        *param_1 = uVar12;
        if ((puVar5[1] < uVar12 + uVar9) && (puVar10 != (undefined8 *)0x0)) {
          uVar8 = puVar5[1];
          if (puVar5[1] <= uVar9) {
            uVar8 = uVar9;
          }
          (**(code **)*puVar10)(puVar10,(uVar12 + uVar9) - uVar8,1,uVar13);
        }
        if ((long)puVar5 + uVar9 + 0x40 != 0) goto LAB_00103aa0;
      }
      if (this[0x109] == (FastAllocator)0x0) goto LAB_00103ffa;
    }
    if (0x1fffc0 < *param_1) goto LAB_00103ffa;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        uVar13 = lVar7 + *param_1 & -param_2;
        uVar9 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar9 = *(ulong *)(this + 0x20);
        }
        if (uVar13 < uVar9) {
          uVar13 = uVar9;
        }
        uVar11 = *(undefined8 *)(this + lVar2 + 0xb8);
        FVar4 = this[0x108];
        plVar6 = *(long **)this;
        if (*(int *)(this + 0x148) == 1) {
          if (uVar13 < 0x1fffc0) {
LAB_001038c6:
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar13 + 0x80,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(uVar13 + 0x40,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,uVar13 + 0x40,0x40);
            }
            *puVar10 = 0;
            puVar10[1] = uVar13;
            puVar10[2] = uVar13;
LAB_0010391c:
            puVar10[4] = 0x40;
            *(undefined4 *)(puVar10 + 5) = 0;
            puVar10[3] = uVar11;
            *(undefined1 *)((long)puVar10 + 0x2c) = 0;
          }
          else {
            uVar9 = uVar13 + 0x103f & 0xfffffffffffff000;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,0);
            }
            puVar10 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
            *puVar10 = 0;
            puVar10[1] = uVar9 - 0x40;
            puVar10[2] = uVar9 - 0x40;
            puVar10[3] = uVar11;
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 1;
            *(bool *)((long)puVar10 + 0x2c) = local_41;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          if (*(int *)(this + 0x148) == 0) {
            if (uVar13 != 0x3fffc0) goto LAB_001038c6;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,0x400040);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,0x400000,0x40);
            }
            pvVar14 = (void *)((ulong)puVar10 & 0xffffffffffe00000);
            embree::os_advise(pvVar14,0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x200000),0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x400000),0x200000);
            *puVar10 = 0;
            puVar10[1] = 0x3fffc0;
            puVar10[2] = 0x3fffc0;
            goto LAB_0010391c;
          }
        }
        LOCK();
        *(undefined8 **)pFVar3 = puVar10;
        UNLOCK();
        LOCK();
        *(undefined8 **)(this + lVar2 + 0xb8) = puVar10;
        UNLOCK();
      }
      embree::MutexSys::unlock();
    }
    else {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        if (*(long *)(this + 0x100) == 0) {
          LOCK();
          pFVar1 = this + 0x110;
          lVar2 = *(long *)pFVar1;
          *(long *)pFVar1 = *(long *)pFVar1 + 1;
          UNLOCK();
          uVar9 = 0x10;
          if (lVar2 + 1U < 0x11) {
            uVar9 = lVar2 + 1U;
          }
          uVar9 = *(long *)(this + 0x20) << ((byte)uVar9 & 0x3f);
          if (*(ulong *)(this + 0x28) < uVar9) {
            uVar9 = *(ulong *)(this + 0x28);
          }
          uVar11 = Block::create(*(undefined8 *)this,this[0x108],uVar9,uVar9,
                                 *(undefined8 *)(this + 0xf8),*(undefined4 *)(this + 0x148));
          LOCK();
          *(undefined8 *)pFVar3 = uVar11;
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0xf8) = uVar11;
          UNLOCK();
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
          *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
          LOCK();
          *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)pFVar3 = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0x100) = uVar11;
          UNLOCK();
        }
      }
      embree::MutexSys::unlock();
    }
    goto LAB_00103758;
  }
  do {
    uVar9 = embree::TaskScheduler::threadID();
    lVar2 = (uVar9 & *(ulong *)(this + 8)) * 8;
    pFVar3 = this + lVar2 + 0x78;
    puVar5 = *(ulong **)pFVar3;
    if (puVar5 != (ulong *)0x0) {
      puVar10 = *(undefined8 **)this;
      if (puVar10 != (undefined8 *)0x0) {
        puVar10 = puVar10 + 0xa9;
      }
      uVar9 = -param_2 & lVar7 + *param_1;
      if (*puVar5 + uVar9 <= puVar5[2]) {
        LOCK();
        uVar13 = *puVar5;
        *puVar5 = *puVar5 + uVar9;
        UNLOCK();
        if ((uVar9 + uVar13 <= puVar5[2]) && (uVar13 <= puVar5[2])) {
          uVar8 = puVar5[2] - uVar13;
          if (uVar9 < puVar5[2] - uVar13) {
            uVar8 = uVar9;
          }
          *param_1 = uVar8;
          if (puVar10 != (undefined8 *)0x0) {
            if (uVar8 + uVar13 <= puVar5[1]) {
              if ((long)puVar5 + uVar13 + 0x40 == 0) goto LAB_0010397d;
              goto LAB_00103aa0;
            }
            uVar9 = puVar5[1];
            if (puVar5[1] < uVar13) {
              uVar9 = uVar13;
            }
            (**(code **)*puVar10)(puVar10,(uVar8 + uVar13) - uVar9,1);
          }
          if ((long)puVar5 + uVar13 + 0x40 != 0) {
LAB_00103aa0:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
LAB_0010397d:
      if (this[0x109] == (FastAllocator)0x0) {
LAB_00103ffa:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_00103ffa;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        uVar13 = lVar7 + *param_1 & -param_2;
        uVar9 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar9 = *(ulong *)(this + 0x20);
        }
        if (uVar13 < uVar9) {
          uVar13 = uVar9;
        }
        uVar11 = *(undefined8 *)(this + lVar2 + 0xb8);
        FVar4 = this[0x108];
        plVar6 = *(long **)this;
        if (*(int *)(this + 0x148) == 1) {
          if (uVar13 < 0x1fffc0) {
LAB_00103cd0:
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar13 + 0x80,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(uVar13 + 0x40,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,uVar13 + 0x40,0x40);
            }
            *puVar10 = 0;
            puVar10[1] = uVar13;
            puVar10[2] = uVar13;
LAB_00103d26:
            puVar10[4] = 0x40;
            *(undefined4 *)(puVar10 + 5) = 0;
            puVar10[3] = uVar11;
            *(undefined1 *)((long)puVar10 + 0x2c) = 0;
          }
          else {
            uVar9 = uVar13 + 0x103f & 0xfffffffffffff000;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,0);
            }
            puVar10 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
            *puVar10 = 0;
            puVar10[1] = uVar9 - 0x40;
            puVar10[2] = uVar9 - 0x40;
            puVar10[3] = uVar11;
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 1;
            *(bool *)((long)puVar10 + 0x2c) = local_41;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          if (*(int *)(this + 0x148) == 0) {
            if (uVar13 != 0x3fffc0) goto LAB_00103cd0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,0x400040,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,0x400000,0x40);
            }
            pvVar14 = (void *)((ulong)puVar10 & 0xffffffffffe00000);
            embree::os_advise(pvVar14,0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x200000),0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x400000),0x200000);
            *puVar10 = 0;
            puVar10[1] = 0x3fffc0;
            puVar10[2] = 0x3fffc0;
            goto LAB_00103d26;
          }
        }
        LOCK();
        *(undefined8 **)pFVar3 = puVar10;
        UNLOCK();
        LOCK();
        *(undefined8 **)(this + lVar2 + 0xb8) = puVar10;
        UNLOCK();
      }
      embree::MutexSys::unlock();
    }
    else {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        if (*(long *)(this + 0x100) == 0) {
          LOCK();
          pFVar1 = this + 0x110;
          lVar2 = *(long *)pFVar1;
          *(long *)pFVar1 = *(long *)pFVar1 + 1;
          UNLOCK();
          uVar9 = 0x10;
          if (lVar2 + 1U < 0x11) {
            uVar9 = lVar2 + 1U;
          }
          uVar9 = *(long *)(this + 0x20) << ((byte)uVar9 & 0x3f);
          if (*(ulong *)(this + 0x28) < uVar9) {
            uVar9 = *(ulong *)(this + 0x28);
          }
          uVar11 = Block::create(*(undefined8 *)this,this[0x108],uVar9,uVar9,
                                 *(undefined8 *)(this + 0xf8),*(undefined4 *)(this + 0x148));
          LOCK();
          *(undefined8 *)pFVar3 = uVar11;
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0xf8) = uVar11;
          UNLOCK();
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
          *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
          LOCK();
          *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)pFVar3 = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0x100) = uVar11;
          UNLOCK();
        }
      }
      embree::MutexSys::unlock();
    }
  } while( true );
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
  *(undefined ***)this = &PTR__BVHN_001069e0;
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
  } while ((MutexSys *)(this + 0x130) != pMVar5);
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
                                  } while ((NodeRefPtr *)(uVar9 & 0xfffffffffffffff0) + 0x20 !=
                                           pNVar15);
                                }
                                puVar16 = puVar16 + 1;
                              } while (puVar7 != puVar16);
                            }
                            puVar11 = puVar11 + 1;
                          } while (puVar6 != puVar11);
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
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  
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
    lVar5 = std::__cxx11::string::find((char *)param_1,0x1045d2,0);
    pcVar7 = "MB";
    if (lVar5 == -1) {
      pcVar7 = "";
    }
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,pcVar7,(ulong)(lVar5 != -1) * 2);
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,"<",1);
    pcVar7 = (char *)(**(code **)**(undefined8 **)(this + 0x58))();
    if (pcVar7 == (char *)0x0) {
      std::ios::clear(poVar4 + *(long *)(*(long *)poVar4 + -0x18),
                      *(uint *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0x20) | 1);
    }
    else {
      sVar6 = strlen(pcVar7);
      std::__ostream_insert<char,std::char_traits<char>>(poVar4,pcVar7,sVar6);
    }
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
  uVar8 = embree::getSeconds();
  return uVar8;
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
        if (plVar3 == plVar6) goto LAB_0010499f;
      }
      plVar6 = plVar6 + 1;
    } while (plVar3 != plVar6);
LAB_0010499f:
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
  
  lVar1 = lRam0000000000104aed;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_01 = *(MutexSys **)(in_FS_OFFSET + lRam0000000000104aed);
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
    if (0xfffffffffffffffe < uVar1) goto LAB_00105020;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00105020:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00104fa9;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00104fa9:
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
    if (0xfffffffffffffffe < uVar3) goto LAB_001055a0;
    uVar8 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar8 = uVar3 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_001055aa:
    puVar7 = (undefined8 *)operator_new(uVar8);
    lVar10 = uVar8 + (long)puVar7;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar1)) = *param_3;
    puVar4 = puVar7 + 1;
    *param_3 = 0;
    if (param_2 != puVar1) {
LAB_00105511:
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
    if (param_2 == puVar5) goto LAB_00105564;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar3) {
LAB_001055a0:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_001055aa;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_001055aa;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)((long)param_2 - (long)puVar1) = *param_3;
    puVar4 = (undefined8 *)&DAT_00000008;
    *param_3 = 0;
    if (param_2 != puVar1) goto LAB_00105511;
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
  } while (puVar9 != puVar6);
LAB_00105564:
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
  long *plVar1;
  long lVar2;
  char cVar3;
  BVHN *pBVar4;
  ostream *poVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  double dVar11;
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
       (cVar3 = embree::State::verbosity(*(ulong *)(this + 0x60)), cVar3 == '\0')) {
      local_1a0 = 0.0;
    }
    else {
      local_1a0 = (double)embree::getSeconds();
      local_1a0 = local_1a0 - param_1;
    }
    cVar3 = embree::State::verbosity(*(ulong *)(this + 0x60));
    if (cVar3 == '\0') {
      if (*(long *)(*(long *)(this + 0x60) + 0x4b0) == 0) goto LAB_00105a70;
LAB_00105849:
      pBVar4 = (BVHN *)::operator_new(0x110);
      embree::BVHNStatistics<4>::BVHNStatistics(pBVar4);
LAB_00105861:
      embree::MutexSys::lock();
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"BENCHMARK_BUILD ",0x10);
      poVar5 = std::ostream::_M_insert<double>(local_1a0);
      std::__ostream_insert<char,std::char_traits<char>>(poVar5," ",1);
      poVar5 = std::ostream::_M_insert<double>((double)*(ulong *)(this + 0x1f0) / local_1a0);
      std::__ostream_insert<char,std::char_traits<char>>(poVar5," ",1);
      dVar11 = (double)BVHNStatistics<4>::Statistics::sah
                                 ((Statistics *)(pBVar4 + 8),*(BVHN **)pBVar4);
      poVar5 = std::ostream::_M_insert<double>(dVar11);
      std::__ostream_insert<char,std::char_traits<char>>(poVar5," ",1);
      poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)poVar5);
      std::__ostream_insert<char,std::char_traits<char>>(poVar5," BVH",4);
      poVar5 = (ostream *)std::ostream::operator<<(poVar5,4);
      std::__ostream_insert<char,std::char_traits<char>>(poVar5,"<",1);
      pcVar6 = (char *)(**(code **)**(undefined8 **)(this + 0x58))();
      if (pcVar6 == (char *)0x0) {
        std::ios::clear(poVar5 + *(long *)(*(long *)poVar5 + -0x18),
                        *(uint *)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0x20) | 1);
      }
      else {
        sVar7 = strlen(pcVar6);
        std::__ostream_insert<char,std::char_traits<char>>(poVar5,pcVar6,sVar7);
      }
      std::__ostream_insert<char,std::char_traits<char>>(poVar5,">",1);
      plVar1 = *(long **)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0xf0);
      if (plVar1 == (long *)0x0) {
LAB_00106057:
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_cast();
      }
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put((char)poVar5);
      std::ostream::flush();
      std::ostream::flush();
      embree::MutexSys::unlock();
    }
    else {
      pBVar4 = (BVHN *)::operator_new(0x110);
      embree::BVHNStatistics<4>::BVHNStatistics(pBVar4);
      uVar10 = *(ulong *)(this + 400);
      embree::MutexSys::lock();
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"finished BVH",0xc);
      poVar5 = (ostream *)std::ostream::operator<<((ostream *)&std::cout,4);
      std::__ostream_insert<char,std::char_traits<char>>(poVar5,"<",1);
      pcVar6 = (char *)(**(code **)**(undefined8 **)(this + 0x58))();
      if (pcVar6 == (char *)0x0) {
        std::ios::clear(poVar5 + *(long *)(*(long *)poVar5 + -0x18),
                        *(uint *)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0x20) | 1);
      }
      else {
        sVar7 = strlen(pcVar6);
        std::__ostream_insert<char,std::char_traits<char>>(poVar5,pcVar6,sVar7);
      }
      std::__ostream_insert<char,std::char_traits<char>>(poVar5,"> : ",4);
      poVar5 = std::ostream::_M_insert<double>(local_1a0 * __LC50);
      std::__ostream_insert<char,std::char_traits<char>>(poVar5,"ms, ",4);
      poVar5 = std::ostream::_M_insert<double>
                         (((double)*(ulong *)(this + 0x1f0) * __LC52) / local_1a0);
      std::__ostream_insert<char,std::char_traits<char>>(poVar5," Mprim/s, ",10);
      poVar5 = std::ostream::_M_insert<double>(((double)uVar10 * __LC54) / local_1a0);
      std::__ostream_insert<char,std::char_traits<char>>(poVar5," GB/s",5);
      plVar1 = *(long **)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0xf0);
      if (plVar1 == (long *)0x0) goto LAB_00106057;
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put((char)poVar5);
      std::ostream::flush();
      cVar3 = embree::State::verbosity(*(ulong *)(this + 0x60));
      if (cVar3 != '\0') {
        embree::BVHNStatistics<4>::str_abi_cxx11_();
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cout,(char *)local_68,local_60);
        if (local_68 != local_58) {
          ::operator_delete(local_68,local_58[0] + 1);
        }
      }
      cVar3 = embree::State::verbosity(*(ulong *)(this + 0x60));
      if (cVar3 != '\0') {
        uVar10 = 0;
        FastAllocator::AllStatistics::AllStatistics
                  ((AllStatistics *)&local_188,(FastAllocator *)(this + 0x78));
        lVar9 = *(long *)(this + 0x208);
        lVar8 = *(long *)(this + 0x200);
        if (lVar9 != lVar8) {
          do {
            lVar2 = *(long *)(lVar8 + uVar10 * 8);
            if (lVar2 != 0) {
              FastAllocator::AllStatistics::AllStatistics
                        ((AllStatistics *)&local_f8,(FastAllocator *)(lVar2 + 0x78));
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
              lVar9 = *(long *)(this + 0x208);
              local_130 = local_130 + local_a0;
              local_128 = local_128 + local_98;
              local_120 = local_120 + local_90;
              local_118 = local_118 + local_88;
              local_110 = local_110 + local_80;
              local_108 = local_108 + local_78;
              local_100 = local_100 + local_70;
              lVar8 = *(long *)(this + 0x200);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < (ulong)(lVar9 - lVar8 >> 3));
        }
        FastAllocator::AllStatistics::print((AllStatistics *)&local_188,*(ulong *)(this + 0x1f0));
      }
      cVar3 = embree::State::verbosity(*(ulong *)(this + 0x60));
      if (cVar3 != '\0') {
        FastAllocator::print_blocks((FastAllocator *)(this + 0x78));
        lVar9 = *(long *)(this + 0x208);
        lVar8 = *(long *)(this + 0x200);
        if (lVar8 != lVar9) {
          uVar10 = 0;
          do {
            lVar2 = *(long *)(lVar8 + uVar10 * 8);
            if (lVar2 != 0) {
              FastAllocator::print_blocks((FastAllocator *)(lVar2 + 0x78));
              lVar9 = *(long *)(this + 0x208);
              lVar8 = *(long *)(this + 0x200);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < (ulong)(lVar9 - lVar8 >> 3));
        }
      }
      std::ostream::flush();
      embree::MutexSys::unlock();
      if (*(long *)(*(long *)(this + 0x60) + 0x4b0) != 0) {
        if (pBVar4 == (BVHN *)0x0) goto LAB_00105849;
        goto LAB_00105861;
      }
    }
    if (pBVar4 != (BVHN *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        ::operator_delete(pBVar4,0x110);
        return;
      }
      goto LAB_00106052;
    }
  }
LAB_00105a70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106052:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x001062d9) overlaps instruction at (ram,0x001062d7)
    */
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
  BVHN<4> *this_00;
  ulong *puVar2;
  undefined8 uVar3;
  MutexSys *pMVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  BVHN<4> *pBVar14;
  undefined8 uVar15;
  MutexSys *this_01;
  BVHN<4> *pBVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  BVHN<4> *pBVar20;
  undefined8 unaff_RBX;
  long *plVar21;
  BVHN<4> *pBVar22;
  ulong uVar23;
  char *pcVar24;
  BVHN<4> *pBVar25;
  long lVar26;
  BVHN<4> *pBVar27;
  BVHN<4> *unaff_R14;
  BVHN<4> *unaff_R15;
  long in_FS_OFFSET;
  long in_GS_OFFSET;
  bool bVar28;
  bool bVar29;
  float fVar30;
  undefined1 auVar31 [16];
  BVHN<4> *unaff_retaddr;
  BVHN<4> *in_stack_00000008;
  BVHN<4> *in_stack_00000018;
  float fStack0000000000000020;
  undefined4 uStack0000000000000024;
  MutexSys *in_stack_00000028;
  long in_stack_00000030;
  CachedAllocator *local_40;
  BVHN<4> *local_38;
  
  pBVar22 = *(BVHN<4> **)(this + 8);
  this_00 = *(BVHN<4> **)this;
  uVar7 = (long)pBVar22 - (long)this_00 >> 4;
  bVar28 = uVar7 < 0x7ffffffffffffff;
  bVar29 = uVar7 == 0x7ffffffffffffff;
  if (bVar29) {
    pcVar24 = "vector::_M_realloc_insert";
    auVar31 = std::__throw_length_error("vector::_M_realloc_insert");
    pBVar16 = auVar31._0_8_;
    if (bVar28 || bVar29) {
LAB_00106280:
      if (param_2 == (BVHN<4> *)0x0) {
        pBVar16 = (BVHN<4> *)pcVar24 + 0x70;
        local_38 = pBVar16;
LAB_00106295:
        if (((byte)((BVHN<4> *)pcVar24)[0x70] & 8) == 0) {
          fStack0000000000000020 = INFINITY;
        }
        else {
          fStack0000000000000020 = -INFINITY;
        }
        local_40 = (CachedAllocator *)&stack0x00000018;
        in_stack_00000018 = pBVar16;
        _M_realloc_insert<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>
                  ((vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
                    *)&stack0xfffffffffffffff8,0,local_40);
        pBVar22 = unaff_R15;
        pcVar24 = (char *)unaff_retaddr;
        unaff_R14 = in_stack_00000008;
      }
      else {
        pBVar22 = (BVHN<4> *)operator_new((long)param_2 * 0x10);
        unaff_R14 = pBVar22 + (long)param_2 * 0x10;
        in_stack_00000018 = this_00 + 0x70;
        fStack0000000000000020 = _LC1;
        if (((byte)this_00[0x70] & 8) != 0) {
          fStack0000000000000020 = _LC3;
        }
        pcVar24 = (char *)(pBVar22 + 0x10);
        local_40 = (CachedAllocator *)&stack0x00000018;
        *(BVHN<4> **)pBVar22 = in_stack_00000018;
        *(long *)(pBVar22 + 8) = CONCAT44(uStack0000000000000024,fStack0000000000000020);
        in_stack_00000008 = unaff_R14;
        local_38 = in_stack_00000018;
        unaff_R15 = pBVar22;
      }
    }
    else {
      param_2 = (BVHN<4> *)(ulong)*(uint *)((BVHN<4> *)pcVar24 + (long)pBVar22 * 2 + 0x72);
      bVar28 = (byte)((ulong)unaff_RBX >> 8) < *auVar31._8_8_;
      if (bVar28) goto LAB_00106280;
      param_2 = unaff_R15;
      if (bVar28) {
        if (!bVar28) {
          pBVar16[in_GS_OFFSET] = (BVHN<4>)((char)pBVar16[in_GS_OFFSET] + auVar31[0]);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_00106295;
      }
      uVar6 = auVar31._0_4_ + 0x8d480000;
      pBVar16 = (BVHN<4> *)(ulong)uVar6;
      if (!SCARRY4(auVar31._0_4_,-0x72b80000)) {
        local_38 = (BVHN<4> *)CONCAT44(local_38._4_4_,uVar6);
        goto LAB_00106295;
      }
      func_0x49d1ec27();
    }
    lVar26 = (long)pcVar24 - (long)pBVar22;
    pBVar16 = (BVHN<4> *)(lVar26 >> 4);
    fVar30 = _LC3;
    if (pBVar16 < param_2) {
      do {
        pBVar25 = (BVHN<4> *)pcVar24 + -0x10;
        if (0x10 < lVar26) {
          lVar26 = *(long *)((BVHN<4> *)pcVar24 + -0x10);
          fVar1 = *(float *)((BVHN<4> *)pcVar24 + -8);
          *(long *)((BVHN<4> *)pcVar24 + -0x10) = *(long *)pBVar22;
          uVar7 = (long)pBVar25 - (long)pBVar22 >> 4;
          *(undefined4 *)((BVHN<4> *)pcVar24 + -8) = *(undefined4 *)(pBVar22 + 8);
          lVar13 = (long)(uVar7 - 1) / 2;
          if ((long)(uVar7 - 1) < 2) {
            pBVar16 = pBVar22;
            if ((uVar7 & 1) == 0) {
              lVar18 = 0;
              goto LAB_00106640;
            }
          }
          else {
            lVar18 = 0;
            do {
              while( true ) {
                lVar17 = lVar18 + 1;
                lVar19 = lVar18 * 0x10;
                lVar18 = lVar17 * 2;
                pBVar20 = pBVar22 + lVar19;
                lVar19 = lVar18 + -1;
                pBVar16 = pBVar22 + lVar17 * 0x20;
                pBVar27 = pBVar22 + lVar19 * 0x10;
                if (*(float *)(pBVar16 + 8) <= *(float *)(pBVar27 + 8) &&
                    *(float *)(pBVar27 + 8) != *(float *)(pBVar16 + 8)) break;
                *(long *)pBVar20 = *(long *)pBVar16;
                *(undefined4 *)(pBVar20 + 8) = *(undefined4 *)(pBVar16 + 8);
                if (lVar13 <= lVar18) goto LAB_0010663b;
              }
              *(long *)pBVar20 = *(long *)pBVar27;
              *(undefined4 *)(pBVar20 + 8) = *(undefined4 *)(pBVar27 + 8);
              pBVar16 = pBVar27;
              lVar18 = lVar19;
            } while (lVar19 < lVar13);
LAB_0010663b:
            if ((uVar7 & 1) == 0) {
LAB_00106640:
              if (lVar18 != (long)(uVar7 - 2) / 2) goto LAB_0010665a;
              lVar13 = lVar18 * 2 + 1;
              *(long *)pBVar16 = *(long *)(pBVar22 + lVar13 * 0x10);
              *(undefined4 *)(pBVar16 + 8) = *(undefined4 *)(pBVar22 + lVar13 * 0x10 + 8);
              lVar17 = lVar18 * 2 >> 1;
            }
            else {
LAB_0010665a:
              lVar17 = (lVar18 + -1) / 2;
              lVar13 = lVar18;
              if (lVar18 == 0) goto LAB_001066c1;
            }
            do {
              lVar18 = lVar17;
              pBVar16 = pBVar22 + lVar13 * 0x10;
              pBVar27 = pBVar22 + lVar18 * 0x10;
              if (fVar1 < *(float *)(pBVar27 + 8) || fVar1 == *(float *)(pBVar27 + 8)) break;
              *(long *)pBVar16 = *(long *)pBVar27;
              *(undefined4 *)(pBVar16 + 8) = *(undefined4 *)(pBVar27 + 8);
              pBVar16 = pBVar27;
              lVar17 = (lVar18 + -1) / 2;
              lVar13 = lVar18;
            } while (lVar18 != 0);
          }
LAB_001066c1:
          *(long *)pBVar16 = lVar26;
          *(float *)(pBVar16 + 8) = fVar1;
        }
        pBVar16 = (BVHN<4> *)**(undefined8 **)((BVHN<4> *)pcVar24 + -0x10);
        if (((ulong)pBVar16 & 0xf) != 0) {
          pBVar16 = (BVHN<4> *)((long)pBVar25 - (long)pBVar22 >> 4);
          goto LAB_00106717;
        }
        pBVar22 = pBVar16 + 0x20;
        pBVar27 = pBVar16;
        pBVar20 = pBVar25;
        do {
          uVar7 = *(ulong *)((-0x40 - (long)pBVar16) + (long)pBVar22 * 2);
          if (uVar7 != 8) {
            fStack0000000000000020 = fVar30;
            if ((uVar7 & 8) == 0) {
              fStack0000000000000020 =
                   ((*(float *)(pBVar22 + 0x30) - *(float *)(pBVar22 + 0x20)) +
                   (*(float *)(pBVar22 + 0x50) - *(float *)(pBVar22 + 0x40))) *
                   (*(float *)(pBVar22 + 0x10) - *(float *)pBVar22) +
                   (*(float *)(pBVar22 + 0x30) - *(float *)(pBVar22 + 0x20)) *
                   (*(float *)(pBVar22 + 0x50) - *(float *)(pBVar22 + 0x40));
              fStack0000000000000020 = fStack0000000000000020 + fStack0000000000000020;
            }
            in_stack_00000018 = pBVar27;
            if (pBVar25 == unaff_R14) {
              _M_realloc_insert<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>
                        ((vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
                          *)&stack0xfffffffffffffff8,pBVar25,local_40);
              unaff_R14 = in_stack_00000008;
              pBVar25 = pBVar20;
              fVar30 = _LC3;
            }
            else {
              auVar31._8_4_ = fStack0000000000000020;
              auVar31._0_8_ = pBVar27;
              auVar31._12_4_ = uStack0000000000000024;
              *(undefined1 (*) [16])pBVar25 = auVar31;
              pBVar25 = pBVar25 + 0x10;
            }
            fVar1 = *(float *)(pBVar25 + -8);
            lVar18 = *(long *)(pBVar25 + -0x10);
            lVar13 = (long)pBVar25 - (long)unaff_R15 >> 4;
            lVar26 = lVar13 + -1;
            lVar13 = lVar13 + -2;
            if (lVar26 < 1) {
              pBVar20 = unaff_R15 + ((long)pBVar25 - (long)unaff_R15) + -0x10;
            }
            else {
              do {
                lVar17 = lVar13 / 2;
                pBVar20 = unaff_R15 + lVar26 * 0x10;
                pBVar14 = unaff_R15 + lVar17 * 0x10;
                if (fVar1 < *(float *)(pBVar14 + 8) || fVar1 == *(float *)(pBVar14 + 8)) break;
                *(long *)pBVar20 = *(long *)pBVar14;
                *(undefined4 *)(pBVar20 + 8) = *(undefined4 *)(pBVar14 + 8);
                lVar13 = lVar17 + -1;
                pBVar20 = pBVar14;
                lVar26 = lVar17;
              } while (lVar17 != 0);
            }
            *(long *)pBVar20 = lVar18;
            *(float *)(pBVar20 + 8) = fVar1;
            pBVar20 = pBVar25;
          }
          pBVar22 = pBVar22 + 4;
          pBVar27 = pBVar27 + 8;
        } while (pBVar16 + 0x30 != pBVar22);
        lVar26 = (long)pBVar25 - (long)unaff_R15;
        pBVar16 = (BVHN<4> *)(lVar26 >> 4);
        pBVar22 = unaff_R15;
        pcVar24 = (char *)pBVar25;
      } while (pBVar16 < param_2);
    }
    else {
LAB_00106717:
      unaff_R15 = pBVar22;
      if (pBVar16 == (BVHN<4> *)0x0) goto LAB_001064c7;
    }
    pBVar22 = unaff_R15;
    do {
      puVar2 = *(ulong **)pBVar22;
      pBVar22 = pBVar22 + 0x10;
      *puVar2 = *puVar2 | 0x8000000000000000;
    } while (unaff_R15 + (long)pBVar16 * 0x10 != pBVar22);
LAB_001064c7:
    lVar26 = lRam00000000001064ce;
    this_01 = *(MutexSys **)(in_FS_OFFSET + lRam00000000001064ce);
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
      *(MutexSys **)(in_FS_OFFSET + lVar26) = this_01;
      embree::MutexSys::lock();
      in_stack_00000018 = (BVHN<4> *)this_01;
      if (_memmove == _operator_new) {
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&embree::FastAllocator::s_thread_local_allocators,_memmove,local_40);
        pMVar4 = (MutexSys *)in_stack_00000018;
        if (in_stack_00000018 != (BVHN<4> *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)in_stack_00000018);
          embree::alignedFree(pMVar4);
        }
      }
      else {
        *_memmove = this_01;
        _memmove = _memmove + 1;
      }
      embree::MutexSys::unlock();
    }
    _fStack0000000000000020 = this_01 + 0x40;
    in_stack_00000028 = _fStack0000000000000020;
    if (this_00[0x182] == (BVHN<4>)0x0) {
      in_stack_00000028 = this_01 + 0x80;
    }
    in_stack_00000018 = this_00 + 0x78;
    uVar15 = embree::BVHN<4>::layoutLargeNodesRecursion(this_00,local_38,local_40);
    *(undefined8 *)(this_00 + 0x70) = uVar15;
    if (unaff_R15 == (BVHN<4> *)0x0) {
      if (in_stack_00000030 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (in_stack_00000030 == *(long *)(in_FS_OFFSET + 0x28)) {
      operator_delete(unaff_R15,(long)unaff_R14 - (long)unaff_R15);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pBVar16 = param_2 + -(long)this_00;
  if (this_00 == pBVar22) {
    if (0xfffffffffffffffe < uVar7) goto LAB_00106170;
    uVar23 = 0x7ffffffffffffff;
    if (uVar7 + 1 < 0x800000000000000) {
      uVar23 = uVar7 + 1;
    }
    uVar23 = uVar23 << 4;
LAB_0010617a:
    puVar12 = (undefined8 *)operator_new(uVar23);
    lVar26 = uVar23 + (long)puVar12;
    plVar8 = puVar12 + 2;
    uVar15 = param_3[1];
    *(undefined8 *)((long)puVar12 + (long)pBVar16) = *param_3;
    *(undefined8 *)((BVHN<4> *)((long)puVar12 + (long)pBVar16) + 8) = uVar15;
    if (param_2 != this_00) {
LAB_001060db:
      puVar5 = puVar12;
      pBVar16 = this_00;
      do {
        puVar9 = puVar5;
        uVar15 = *(undefined8 *)pBVar16;
        uVar3 = *(undefined8 *)(pBVar16 + 8);
        pBVar16 = pBVar16 + 0x10;
        *puVar9 = uVar15;
        puVar9[1] = uVar3;
        puVar5 = puVar9 + 2;
      } while (puVar9 + 2 != (undefined8 *)(((long)param_2 - (long)this_00) + (long)puVar12));
      plVar8 = puVar9 + 4;
    }
    if (param_2 == pBVar22) goto LAB_00106135;
  }
  else {
    uVar23 = uVar7 * 2;
    if (uVar23 < uVar7) {
LAB_00106170:
      uVar23 = 0x7ffffffffffffff0;
      goto LAB_0010617a;
    }
    if (uVar23 != 0) {
      if (0x7ffffffffffffff < uVar23) {
        uVar23 = 0x7ffffffffffffff;
      }
      uVar23 = uVar23 << 4;
      goto LAB_0010617a;
    }
    uVar15 = param_3[1];
    lVar26 = 0;
    puVar12 = (undefined8 *)0x0;
    plVar8 = (long *)&DAT_00000010;
    *(undefined8 *)pBVar16 = *param_3;
    *(undefined8 *)(pBVar16 + 8) = uVar15;
    if (param_2 != this_00) goto LAB_001060db;
  }
  plVar21 = (long *)(((long)pBVar22 - (long)param_2) + (long)plVar8);
  plVar10 = plVar8;
  do {
    lVar13 = *(long *)param_2;
    lVar18 = *(long *)(param_2 + 8);
    plVar11 = plVar10 + 2;
    param_2 = param_2 + 0x10;
    *plVar10 = lVar13;
    plVar10[1] = lVar18;
    plVar10 = plVar11;
    plVar8 = plVar21;
  } while (plVar21 != plVar11);
LAB_00106135:
  if (this_00 != (BVHN<4> *)0x0) {
    operator_delete(this_00,*(long *)(this + 0x10) - (long)this_00);
  }
  *(undefined8 **)this = puVar12;
  *(long **)(this + 8) = plVar8;
  *(long *)(this + 0x10) = lVar26;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BVHN<4>::layoutLargeNodes(unsigned long) */

void __thiscall embree::BVHN<4>::layoutLargeNodes(BVHN<4> *this,ulong param_1)

{
  long lVar1;
  float fVar2;
  BVHN<4> *pBVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  MutexSys *this_00;
  long lVar10;
  ulong *puVar11;
  BVHN<4> *pBVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  BVHN<4> *pBVar18;
  long in_FS_OFFSET;
  float fVar19;
  CachedAllocator *pCStack_b0;
  BVHN<4> *pBStack_a8;
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
    goto LAB_00106932;
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
    pBStack_58 = this + 0x70;
    uStack_50._0_4_ = _LC1;
    if (((byte)this[0x70] & 8) != 0) {
      uStack_50._0_4_ = _LC3;
    }
    local_70 = (undefined1 (*) [16])(local_78 + 2);
    *local_78 = (ulong)pBStack_58;
    local_78[1] = CONCAT44(uStack_50._4_4_,(float)uStack_50);
  }
  pBStack_a8 = this + 0x70;
  pCStack_b0 = (CachedAllocator *)&pBStack_58;
  lVar5 = (long)local_70 - (long)local_78;
  uVar15 = lVar5 >> 4;
  pauVar13 = local_70;
  pauVar16 = local_68;
  fVar19 = _LC3;
  if (uVar15 < param_1) {
    do {
      pauVar14 = pauVar13 + -1;
      if (0x10 < lVar5) {
        uVar15 = *(ulong *)pauVar13[-1];
        fVar2 = *(float *)((long)pauVar13[-1] + 8);
        *(ulong *)pauVar13[-1] = *local_78;
        uVar17 = (long)pauVar14 - (long)local_78 >> 4;
        *(int *)((long)pauVar13[-1] + 8) = (int)local_78[1];
        lVar5 = (long)(uVar17 - 1) / 2;
        if ((long)(uVar17 - 1) < 2) {
          puVar9 = local_78;
          if ((uVar17 & 1) == 0) {
            lVar6 = 0;
            goto LAB_00106640;
          }
        }
        else {
          lVar10 = 0;
          do {
            while( true ) {
              lVar6 = (lVar10 + 1) * 2;
              puVar11 = local_78 + lVar10 * 2;
              lVar1 = lVar6 + -1;
              puVar9 = local_78 + (lVar10 + 1) * 4;
              puVar7 = local_78 + lVar1 * 2;
              if (*(float *)(puVar9 + 1) <= *(float *)(puVar7 + 1) &&
                  *(float *)(puVar7 + 1) != *(float *)(puVar9 + 1)) break;
              *puVar11 = *puVar9;
              *(int *)(puVar11 + 1) = (int)puVar9[1];
              lVar10 = lVar6;
              if (lVar5 <= lVar6) goto LAB_0010663b;
            }
            *puVar11 = *puVar7;
            *(int *)(puVar11 + 1) = (int)puVar7[1];
            puVar9 = puVar7;
            lVar10 = lVar1;
            lVar6 = lVar1;
          } while (lVar1 < lVar5);
LAB_0010663b:
          if ((uVar17 & 1) == 0) {
LAB_00106640:
            if (lVar6 != (long)(uVar17 - 2) / 2) goto LAB_0010665a;
            lVar5 = lVar6 * 2 + 1;
            *puVar9 = local_78[lVar5 * 2];
            *(int *)(puVar9 + 1) = (int)(local_78 + lVar5 * 2)[1];
            lVar10 = lVar6 * 2 >> 1;
          }
          else {
LAB_0010665a:
            lVar10 = (lVar6 + -1) / 2;
            lVar5 = lVar6;
            if (lVar6 == 0) goto LAB_001066c1;
          }
          do {
            lVar6 = lVar10;
            puVar9 = local_78 + lVar5 * 2;
            puVar7 = local_78 + lVar6 * 2;
            if (fVar2 < *(float *)(puVar7 + 1) || fVar2 == *(float *)(puVar7 + 1)) break;
            *puVar9 = *puVar7;
            *(int *)(puVar9 + 1) = (int)puVar7[1];
            puVar9 = puVar7;
            lVar10 = (lVar6 + -1) / 2;
            lVar5 = lVar6;
          } while (lVar6 != 0);
        }
LAB_001066c1:
        *puVar9 = uVar15;
        *(float *)(puVar9 + 1) = fVar2;
      }
      pBVar3 = (BVHN<4> *)**(ulong **)pauVar13[-1];
      local_70 = pauVar14;
      if (((ulong)pBVar3 & 0xf) != 0) {
        uVar15 = (long)pauVar14 - (long)local_78 >> 4;
        goto LAB_00106717;
      }
      pBVar12 = pBVar3 + 0x20;
      pBVar18 = pBVar3;
      do {
        uVar15 = *(ulong *)((-0x40 - (long)pBVar3) + (long)pBVar12 * 2);
        if (uVar15 != 8) {
          uStack_50._0_4_ = fVar19;
          if ((uVar15 & 8) == 0) {
            uStack_50._0_4_ =
                 ((*(float *)(pBVar12 + 0x30) - *(float *)(pBVar12 + 0x20)) +
                 (*(float *)(pBVar12 + 0x50) - *(float *)(pBVar12 + 0x40))) *
                 (*(float *)(pBVar12 + 0x10) - *(float *)pBVar12) +
                 (*(float *)(pBVar12 + 0x30) - *(float *)(pBVar12 + 0x20)) *
                 (*(float *)(pBVar12 + 0x50) - *(float *)(pBVar12 + 0x40));
            uStack_50._0_4_ = (float)uStack_50 + (float)uStack_50;
          }
          pBStack_58 = pBVar18;
          if (pauVar14 == pauVar16) {
            std::
            vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
            ::_M_realloc_insert<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>
                      ((vector<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea,std::allocator<embree::BVHN<4>::layoutLargeNodes(unsigned_long)::NodeArea>>
                        *)&local_78,pauVar14,pCStack_b0);
            pauVar16 = local_68;
            fVar19 = _LC3;
          }
          else {
            auVar4._8_4_ = (float)uStack_50;
            auVar4._0_8_ = pBVar18;
            auVar4._12_4_ = uStack_50._4_4_;
            local_70 = pauVar14 + 1;
            *pauVar14 = auVar4;
          }
          fVar2 = *(float *)((long)local_70[-1] + 8);
          uVar15 = *(ulong *)local_70[-1];
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
              if (fVar2 < *(float *)(puVar7 + 1) || fVar2 == *(float *)(puVar7 + 1)) break;
              *puVar9 = *puVar7;
              *(int *)(puVar9 + 1) = (int)puVar7[1];
              lVar6 = lVar10 + -1;
              puVar9 = puVar7;
              lVar5 = lVar10;
            } while (lVar10 != 0);
          }
          *puVar9 = uVar15;
          *(float *)(puVar9 + 1) = fVar2;
          pauVar14 = local_70;
        }
        pBVar12 = pBVar12 + 4;
        pBVar18 = pBVar18 + 8;
      } while (pBVar3 + 0x30 != pBVar12);
      lVar5 = (long)pauVar14 - (long)local_78;
      uVar15 = lVar5 >> 4;
      pauVar13 = pauVar14;
    } while (uVar15 < param_1);
LAB_0010649e:
    puVar9 = local_78;
    do {
      puVar7 = (ulong *)*puVar9;
      puVar9 = puVar9 + 2;
      *puVar7 = *puVar7 | 0x8000000000000000;
    } while (local_78 + uVar15 * 2 != puVar9);
  }
  else {
LAB_00106717:
    if (uVar15 != 0) goto LAB_0010649e;
  }
  puVar9 = local_78;
  lVar5 = lRam00000000001064ce;
  this_00 = *(MutexSys **)(in_FS_OFFSET + lRam00000000001064ce);
  if (this_00 == (MutexSys *)0x0) {
    this_00 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
    embree::MutexSys::MutexSys(this_00);
    *(undefined8 *)(this_00 + 8) = 0;
    *(MutexSys **)(this_00 + 0x40) = this_00;
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
      pBVar3 = pBStack_58;
      if (pBStack_58 != (BVHN<4> *)0x0) {
        embree::MutexSys::~MutexSys((MutexSys *)pBStack_58);
        embree::alignedFree(pBVar3);
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
  uVar8 = layoutLargeNodesRecursion(this,pBStack_a8,pCStack_b0);
  *(undefined8 *)(this + 0x70) = uVar8;
  if (puVar9 == (ulong *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    ::operator_delete(puVar9,(long)pauVar16 - (long)puVar9);
    return;
  }
LAB_00106932:
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
/* embree::FastAllocator::AllStatistics::AllStatistics(embree::FastAllocator*) */

void __thiscall
embree::FastAllocator::AllStatistics::AllStatistics(AllStatistics *this,FastAllocator *param_1)

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


