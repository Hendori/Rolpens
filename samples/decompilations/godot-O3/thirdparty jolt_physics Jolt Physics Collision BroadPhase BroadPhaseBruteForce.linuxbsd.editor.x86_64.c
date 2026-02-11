
/* JPH::BroadPhaseBruteForce::NotifyBodiesAABBChanged(JPH::BodyID*, int, bool) */

void JPH::BroadPhaseBruteForce::NotifyBodiesAABBChanged(BodyID *param_1,int param_2,bool param_3)

{
  return;
}



/* JPH::BroadPhaseBruteForce::NotifyBodiesLayerChanged(JPH::BodyID*, int) */

void JPH::BroadPhaseBruteForce::NotifyBodiesLayerChanged(BodyID *param_1,int param_2)

{
  return;
}



/* JPH::BroadPhaseBruteForce::FindCollidingPairs(JPH::BodyID*, int, float,
   JPH::ObjectVsBroadPhaseLayerFilter const&, JPH::ObjectLayerPairFilter const&,
   JPH::CollisionCollector<JPH::BodyPair, JPH::CollisionCollectorTraitsCollideShape>&) const */

void __thiscall
JPH::BroadPhaseBruteForce::FindCollidingPairs
          (BroadPhaseBruteForce *this,BodyID *param_1,int param_2,float param_3,
          ObjectVsBroadPhaseLayerFilter *param_4,ObjectLayerPairFilter *param_5,
          CollisionCollector *param_6)

{
  BodyID *pBVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar17 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x28));
  } while (iVar17 == 0xb);
  if (iVar17 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  lVar5 = *(long *)(this + 0x10);
  if (0 < param_2) {
    pBVar1 = param_1 + (long)param_2 * 4;
    do {
      uVar3 = *(uint *)param_1;
      lVar20 = *(long *)(*(long *)(this + 8) + 0x10);
      lVar6 = *(long *)(lVar20 + (ulong)(uVar3 & 0x7fffff) * 8);
      fVar8 = *(float *)(lVar6 + 0x20);
      fVar9 = *(float *)(lVar6 + 0x24);
      fVar10 = *(float *)(lVar6 + 0x28);
      fVar11 = *(float *)(lVar6 + 0x2c);
      fVar12 = *(float *)(lVar6 + 0x30);
      fVar13 = *(float *)(lVar6 + 0x34);
      fVar14 = *(float *)(lVar6 + 0x38);
      fVar15 = *(float *)(lVar6 + 0x3c);
      uVar2 = *(undefined2 *)(lVar6 + 0x74);
      if (lVar5 != 0) {
        lVar22 = 0;
        do {
          uVar4 = *(uint *)(*(long *)(this + 0x20) + lVar22 * 4);
          lVar20 = *(long *)(lVar20 + (ulong)(uVar4 & 0x7fffff) * 8);
          if (((((*(byte *)(lVar6 + 0x79) & 2) == 0) && ((*(byte *)(lVar20 + 0x79) & 2) == 0)) &&
              (*(char *)(lVar6 + 0x78) != '\x02')) &&
             ((*(char *)(lVar20 + 0x78) != '\x02' &&
              ((*(char *)(lVar6 + 0x78) != '\x01' || ((*(byte *)(lVar20 + 0x79) & 1) == 0)))))) {
            if ((*(char *)(lVar20 + 0x78) == '\x01') && ((*(byte *)(lVar6 + 0x79) & 1) != 0)) {
              lVar19 = *(long *)(lVar6 + 0x48);
              cVar16 = *(char *)(lVar20 + 0x76);
              if (lVar19 != 0) goto LAB_00100122;
LAB_00100258:
              if (cVar16 == '\x01') goto LAB_00100140;
            }
          }
          else {
            lVar19 = *(long *)(lVar6 + 0x48);
            cVar16 = *(char *)(lVar20 + 0x76);
            if (lVar19 == 0) goto LAB_00100258;
LAB_00100122:
            if (cVar16 != '\x01') {
              if (*(long *)(lVar20 + 0x48) == 0) {
                uVar18 = 0xffffffff;
              }
              else {
                uVar18 = *(uint *)(*(long *)(lVar20 + 0x48) + 0x70);
              }
              if (uVar18 <= *(uint *)(lVar19 + 0x70)) goto joined_r0x001001ce;
            }
LAB_00100140:
            plVar7 = *(long **)(lVar6 + 0x58);
            if (plVar7 == (long *)0x0) {
              plVar7 = *(long **)(lVar20 + 0x58);
              if (plVar7 != (long *)0x0) {
                cVar16 = (**(code **)(*plVar7 + 0x20))(plVar7,lVar20 + 0x58,lVar6 + 0x58);
                goto LAB_00100161;
              }
            }
            else {
              cVar16 = (**(code **)(*plVar7 + 0x20))(plVar7,lVar6 + 0x58,lVar20 + 0x58);
LAB_00100161:
              if (cVar16 == '\0') goto joined_r0x001001ce;
            }
            pcVar21 = *(code **)(*(long *)param_5 + 0x10);
            if (((pcVar21 == ObjectLayerPairFilter::ShouldCollide) ||
                (pcVar21 = (code *)(*pcVar21)(param_5,uVar2,*(undefined2 *)(lVar20 + 0x74)),
                (char)pcVar21 != '\0')) &&
               (auVar24._4_4_ = -(uint)(fVar13 + param_3 < *(float *)(lVar20 + 0x24)),
               auVar24._0_4_ = -(uint)(fVar12 + param_3 < *(float *)(lVar20 + 0x20)),
               auVar24._8_4_ = -(uint)(fVar14 + param_3 < *(float *)(lVar20 + 0x28)),
               auVar24._12_4_ = -(uint)(fVar15 + param_3 < *(float *)(lVar20 + 0x2c)),
               auVar23._4_4_ = -(uint)(*(float *)(lVar20 + 0x34) < fVar9 - param_3),
               auVar23._0_4_ = -(uint)(*(float *)(lVar20 + 0x30) < fVar8 - param_3),
               auVar23._8_4_ = -(uint)(*(float *)(lVar20 + 0x38) < fVar10 - param_3),
               auVar23._12_4_ = -(uint)(*(float *)(lVar20 + 0x3c) < fVar11 - param_3),
               uVar18 = movmskps((int)pcVar21,auVar23 | auVar24), (uVar18 & 7) == 0)) {
              local_48 = CONCAT44(uVar4,uVar3);
              (**(code **)(*(long *)param_6 + 0x28))(param_6,&local_48);
            }
          }
joined_r0x001001ce:
          if (lVar5 == lVar22 + 1) break;
          lVar22 = lVar22 + 1;
          lVar20 = *(long *)(*(long *)(this + 8) + 0x10);
        } while( true );
      }
      param_1 = param_1 + 4;
    } while (pBVar1 != param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BroadPhaseBruteForce::RemoveBodies(JPH::BodyID*, int) */

void __thiscall
JPH::BroadPhaseBruteForce::RemoveBodies(BroadPhaseBruteForce *this,BodyID *param_1,int param_2)

{
  byte *pbVar1;
  BodyID *pBVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint *__dest;
  ulong uVar9;
  
  iVar6 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0x28));
  if (iVar6 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  pBVar2 = param_1 + (long)param_2 * 4;
  lVar3 = *(long *)(this + 8);
  if (param_1 < pBVar2) {
    do {
      uVar9 = *(ulong *)(this + 0x10);
      puVar4 = *(uint **)(this + 0x20);
      lVar5 = *(long *)(*(long *)(lVar3 + 0x10) + (ulong)(*(uint *)param_1 & 0x7fffff) * 8);
      lVar7 = (long)(uVar9 * 4) >> 2;
      __dest = puVar4;
      while (lVar8 = lVar7, 0 < lVar7) {
        while( true ) {
          lVar7 = lVar8 >> 1;
          if (*(uint *)(lVar5 + 0x70) <= __dest[lVar7]) break;
          __dest = __dest + lVar7 + 1;
          lVar8 = (lVar8 - lVar7) + -1;
          if (lVar8 < 1) goto LAB_001003db;
        }
      }
LAB_001003db:
      lVar7 = (long)__dest - (long)puVar4 >> 2;
      if (lVar7 + 1U < uVar9) {
        memmove(__dest,(void *)((long)puVar4 + ((long)__dest - (long)puVar4) + 4),
                ((uVar9 - 1) - lVar7) * 4);
        uVar9 = *(ulong *)(this + 0x10);
      }
      *(ulong *)(this + 0x10) = uVar9 - 1;
      LOCK();
      pbVar1 = (byte *)(lVar5 + 0x79);
      *pbVar1 = *pbVar1 & 0xfb;
      UNLOCK();
      param_1 = param_1 + 4;
    } while (param_1 < pBVar2);
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x28));
  return;
}



/* void JPH::QuickSort<JPH::BodyID*, std::less<void> >(JPH::BodyID*, JPH::BodyID*, std::less<void>)
   [clone .isra.0] */

void JPH::QuickSort<JPH::BodyID*,std::less<void>>(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (lVar5 < 5) {
    return;
  }
  while (0x80 < lVar5) {
    uVar3 = *param_1;
    puVar1 = (uint *)(((lVar5 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
    lVar5 = (long)param_2 + (-4 - (long)param_1) >> 5;
    puVar2 = param_1 + lVar5;
    puVar4 = param_1 + lVar5 * 2;
    if (*puVar2 < uVar3) {
      *param_1 = *puVar2;
      *puVar2 = uVar3;
      uVar3 = *param_1;
    }
    uVar6 = *puVar4;
    if (uVar6 < uVar3) {
      *param_1 = uVar6;
      *puVar4 = uVar3;
      uVar6 = uVar3;
    }
    uVar3 = *puVar2;
    if (uVar6 < uVar3) {
      *puVar2 = *puVar4;
      *puVar4 = uVar3;
    }
    puVar4 = puVar1 + lVar5;
    puVar7 = puVar1 + -lVar5;
    uVar3 = *puVar7;
    if (*puVar1 < uVar3) {
      *puVar7 = *puVar1;
      *puVar1 = uVar3;
      uVar3 = *puVar7;
    }
    uVar6 = *puVar4;
    if (uVar6 < uVar3) {
      *puVar7 = uVar6;
      *puVar4 = uVar3;
      uVar6 = uVar3;
    }
    uVar3 = *puVar1;
    if (uVar6 < uVar3) {
      *puVar1 = *puVar4;
      *puVar4 = uVar3;
    }
    puVar4 = param_2 + (-1 - lVar5);
    puVar7 = param_2 + lVar5 * -2 + -1;
    uVar3 = *puVar7;
    if (*puVar4 < uVar3) {
      *puVar7 = *puVar4;
      *puVar4 = uVar3;
      uVar3 = *puVar7;
    }
    uVar6 = param_2[-1];
    if (uVar6 < uVar3) {
      *puVar7 = uVar6;
      param_2[-1] = uVar3;
      uVar6 = uVar3;
    }
    uVar3 = *puVar4;
    if (uVar6 < uVar3) {
      *puVar4 = param_2[-1];
      param_2[-1] = uVar3;
    }
    uVar3 = *puVar2;
    if (*puVar1 < uVar3) {
      *puVar2 = *puVar1;
      *puVar1 = uVar3;
      uVar3 = *puVar2;
    }
    uVar6 = *puVar4;
    if (uVar6 < uVar3) {
      *puVar2 = uVar6;
      *puVar4 = uVar3;
      uVar6 = uVar3;
    }
    uVar3 = *puVar1;
    puVar2 = param_2;
    puVar7 = param_1;
    if (uVar6 < uVar3) {
      *puVar1 = *puVar4;
      *puVar4 = uVar3;
      uVar3 = *puVar1;
    }
    while( true ) {
      do {
        puVar4 = puVar7;
        uVar6 = *puVar4;
        puVar7 = puVar4 + 1;
      } while (uVar6 < uVar3);
      do {
        puVar1 = puVar2;
        puVar2 = puVar1 + -1;
      } while (uVar3 < *puVar2);
      if (puVar2 <= puVar4) break;
      *puVar4 = *puVar2;
      *puVar2 = uVar6;
    }
    lVar5 = (long)puVar1 - (long)param_1;
    lVar8 = (long)param_2 - (long)puVar1;
    if (lVar5 < lVar8) {
      QuickSort<JPH::BodyID*,std::less<void>>(param_1,puVar1);
      param_1 = puVar1;
      puVar1 = param_2;
      lVar5 = lVar8;
    }
    else {
      QuickSort<JPH::BodyID*,std::less<void>>(puVar1,param_2);
    }
    param_2 = puVar1;
    if (lVar5 < 5) {
      return;
    }
  }
  if (param_2 == param_1) {
    return;
  }
  puVar2 = param_1 + 1;
  if (puVar2 == param_2) {
    return;
  }
  lVar5 = 0;
  do {
    uVar3 = *puVar2;
    if (uVar3 < *param_1) {
      if (param_1 != puVar2) {
        memmove((void *)((long)puVar2 + lVar5),param_1,4 - lVar5);
      }
      *param_1 = uVar3;
    }
    else {
      puVar4 = puVar2 + -1;
      if (uVar3 < puVar2[-1]) {
        do {
          puVar1 = puVar4;
          puVar1[1] = *puVar1;
          puVar4 = puVar1 + -1;
        } while (uVar3 < puVar1[-1]);
        *puVar1 = uVar3;
      }
      else {
        *puVar2 = uVar3;
      }
    }
    lVar5 = lVar5 + -4;
    puVar2 = puVar2 + 1;
  } while (puVar2 != param_2);
  return;
}



/* JPH::BroadPhaseBruteForce::AddBodiesFinalize(JPH::BodyID*, int, void*) */

void JPH::BroadPhaseBruteForce::AddBodiesFinalize(BodyID *param_1,int param_2,void *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  uint *puVar9;
  undefined4 in_register_00000034;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar9 = (uint *)CONCAT44(in_register_00000034,param_2);
  iVar5 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x28));
  if (iVar5 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x20);
  uVar11 = (ulong)(uint)((int)param_3 + (int)uVar6);
  uVar12 = uVar6 & 0xffffffff;
  if (*(ulong *)(param_1 + 0x18) < uVar11) {
    lVar8 = (*Reallocate)(lVar8,*(ulong *)(param_1 + 0x18) << 2);
    *(long *)(param_1 + 0x20) = lVar8;
    uVar6 = *(ulong *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x18) = uVar11;
  }
  puVar7 = (undefined4 *)(lVar8 + uVar6 * 4);
  puVar10 = (undefined4 *)(lVar8 + uVar11 * 4);
  if (puVar7 < puVar10) {
    if (puVar7 == (undefined4 *)0x0) goto LAB_00100746;
    do {
      *puVar7 = 0xffffffff;
LAB_00100746:
      puVar7 = puVar7 + 1;
    } while (puVar7 < puVar10);
  }
  *(ulong *)(param_1 + 0x10) = uVar11;
  puVar2 = puVar9 + (int)param_3;
  if (puVar9 < puVar2) {
    do {
      lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + (ulong)(*puVar9 & 0x7fffff) * 8);
      *(undefined4 *)(lVar8 + uVar12 * 4) = *(undefined4 *)(lVar4 + 0x70);
      LOCK();
      pbVar1 = (byte *)(lVar4 + 0x79);
      *pbVar1 = *pbVar1 | 4;
      UNLOCK();
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = puVar9 + 1;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (puVar9 < puVar2);
    puVar10 = (undefined4 *)(lVar8 + *(long *)(param_1 + 0x10) * 4);
  }
  QuickSort<JPH::BodyID*,std::less<void>>(lVar8,puVar10);
  pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x28));
  return;
}



/* JPH::BroadPhaseBruteForce::GetBounds() const */

void JPH::BroadPhaseBruteForce::GetBounds(void)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(in_RSI + 0x28));
  } while (iVar4 == 0xb);
  if (iVar4 != 0x23) {
    puVar5 = *(uint **)(in_RSI + 0x20);
    puVar1 = puVar5 + *(long *)(in_RSI + 0x10);
    auVar7._4_4_ = _LC3;
    auVar7._0_4_ = _LC3;
    auVar7._8_4_ = _LC3;
    auVar7._12_4_ = _LC3;
    auVar6._4_4_ = _LC1;
    auVar6._0_4_ = _LC1;
    auVar6._8_4_ = _LC1;
    auVar6._12_4_ = _LC1;
    *in_RDI = auVar7;
    in_RDI[1] = auVar6;
    if (puVar1 != puVar5) {
      do {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        lVar3 = *(long *)(*(long *)(*(long *)(in_RSI + 8) + 0x10) + (ulong)(uVar2 & 0x7fffff) * 8);
        auVar7 = minps(auVar7,*(undefined1 (*) [16])(lVar3 + 0x20));
        auVar6 = maxps(auVar6,*(undefined1 (*) [16])(lVar3 + 0x30));
      } while (puVar1 != puVar5);
      *in_RDI = auVar7;
      in_RDI[1] = auVar6;
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)(in_RSI + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* JPH::BroadPhaseBruteForce::CollideOrientedBox(JPH::OrientedBox const&,
   JPH::CollisionCollector<JPH::BodyID, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseBruteForce::CollideOrientedBox
          (BroadPhaseBruteForce *this,OrientedBox *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x28));
  } while (iVar3 == 0xb);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  puVar4 = *(uint **)(this + 0x20);
  puVar1 = puVar4 + *(long *)(this + 0x10);
  if (puVar4 != puVar1) {
    do {
      local_44 = *puVar4;
      cVar2 = (**(code **)(*(long *)param_4 + 0x10))
                        (param_4,*(undefined2 *)
                                  (*(long *)(*(long *)(*(long *)(this + 8) + 0x10) +
                                            (ulong)(local_44 & 0x7fffff) * 8) + 0x74));
      if (cVar2 != '\0') {
        cVar2 = JPH::OrientedBox::Overlaps((AABox *)param_1,_LC4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)param_2 + 0x28))(param_2,&local_44);
          if (*(float *)(param_2 + 8) <= _LC1) break;
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BroadPhaseBruteForce::CollidePoint(JPH::Vec3, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&) const */

void JPH::BroadPhaseBruteForce::CollidePoint
               (undefined8 param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5,
               long *param_6)

{
  uint *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  uint local_44;
  long local_40;
  
  fVar9 = (float)((ulong)param_2 >> 0x20);
  fVar8 = (float)((ulong)param_1 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_3 + 0x28));
  } while (iVar4 == 0xb);
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  puVar7 = *(uint **)(param_3 + 0x20);
  puVar1 = puVar7 + *(long *)(param_3 + 0x10);
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    local_44 = *puVar7;
    lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 8) + 0x10) + (ulong)(local_44 & 0x7fffff) * 8);
    uVar5 = (**(code **)(*param_6 + 0x10))(param_6,*(undefined2 *)(lVar2 + 0x74));
    if ((((char)uVar5 != '\0') &&
        (auVar3._4_4_ = -(uint)(*(float *)(lVar2 + 0x24) <= fVar8 &&
                               fVar8 <= *(float *)(lVar2 + 0x34)),
        auVar3._0_4_ = -(uint)(*(float *)(lVar2 + 0x20) <= (float)param_1 &&
                              (float)param_1 <= *(float *)(lVar2 + 0x30)),
        auVar3._8_4_ = -(uint)(*(float *)(lVar2 + 0x28) <= (float)param_2 &&
                              (float)param_2 <= *(float *)(lVar2 + 0x38)),
        auVar3._12_4_ =
             -(uint)(*(float *)(lVar2 + 0x2c) <= fVar9 && fVar9 <= *(float *)(lVar2 + 0x3c)),
        uVar6 = movmskps(uVar5,auVar3), (~uVar6 & 7) == 0)) &&
       ((**(code **)(*param_4 + 0x28))(param_4,&local_44), *(float *)(param_4 + 1) <= _LC1)) break;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(param_3 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BroadPhaseBruteForce::CollideAABox(JPH::AABox const&, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseBruteForce::CollideAABox
          (BroadPhaseBruteForce *this,AABox *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  uint *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x28));
  } while (iVar4 == 0xb);
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  puVar7 = *(uint **)(this + 0x20);
  puVar1 = puVar7 + *(long *)(this + 0x10);
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    local_44 = *puVar7;
    lVar2 = *(long *)(*(long *)(*(long *)(this + 8) + 0x10) + (ulong)(local_44 & 0x7fffff) * 8);
    uVar5 = (**(code **)(*(long *)param_4 + 0x10))(param_4,*(undefined2 *)(lVar2 + 0x74));
    if ((((char)uVar5 != '\0') &&
        (auVar8._4_4_ = -(uint)(*(float *)(param_1 + 0x14) < *(float *)(lVar2 + 0x24)),
        auVar8._0_4_ = -(uint)(*(float *)(param_1 + 0x10) < *(float *)(lVar2 + 0x20)),
        auVar8._8_4_ = -(uint)(*(float *)(param_1 + 0x18) < *(float *)(lVar2 + 0x28)),
        auVar8._12_4_ = -(uint)(*(float *)(param_1 + 0x1c) < *(float *)(lVar2 + 0x2c)),
        auVar3._4_4_ = -(uint)(*(float *)(lVar2 + 0x34) < *(float *)(param_1 + 4)),
        auVar3._0_4_ = -(uint)(*(float *)(lVar2 + 0x30) < *(float *)param_1),
        auVar3._8_4_ = -(uint)(*(float *)(lVar2 + 0x38) < *(float *)(param_1 + 8)),
        auVar3._12_4_ = -(uint)(*(float *)(lVar2 + 0x3c) < *(float *)(param_1 + 0xc)),
        uVar6 = movmskps(uVar5,auVar8 | auVar3), (uVar6 & 7) == 0)) &&
       ((**(code **)(*(long *)param_2 + 0x28))(param_2,&local_44), *(float *)(param_2 + 8) <= _LC1))
    break;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BroadPhaseBruteForce::CollideSphere(JPH::Vec3, float, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&) const */

void JPH::BroadPhaseBruteForce::CollideSphere
               (undefined8 param_1,undefined8 param_2,float param_3,long param_4,long *param_5,
               undefined8 param_6,long *param_7)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
  float local_68;
  float fStack_64;
  uint local_44;
  long local_40;
  
  local_68 = (float)param_1;
  fStack_64 = (float)((ulong)param_1 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_4 + 0x28));
  } while (iVar4 == 0xb);
  if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  puVar5 = *(uint **)(param_4 + 0x20);
  puVar1 = puVar5 + *(long *)(param_4 + 0x10);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    local_44 = *puVar5;
    lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x10) + (ulong)(local_44 & 0x7fffff) * 8);
    cVar3 = (**(code **)(*param_7 + 0x10))(param_7,*(undefined2 *)(lVar2 + 0x74));
    if (cVar3 != '\0') {
      auVar7._8_4_ = (float)param_2;
      auVar7._0_8_ = param_1;
      auVar7._12_4_ = (int)((ulong)param_2 >> 0x20);
      auVar7 = maxps(auVar7,*(undefined1 (*) [16])(lVar2 + 0x20));
      auVar7 = minps(auVar7,*(undefined1 (*) [16])(lVar2 + 0x30));
      fVar6 = auVar7._0_4_ - local_68;
      fVar8 = auVar7._4_4_ - fStack_64;
      fVar9 = auVar7._8_4_ - (float)param_2;
      if ((fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6 + 0.0 <= param_3 * param_3) &&
         ((**(code **)(*param_5 + 0x28))(param_5,&local_44), *(float *)(param_5 + 1) <= _LC1))
      break;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(param_4 + 0x28));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BroadPhaseBruteForce::CastRay(JPH::RayCast const&,
   JPH::CollisionCollector<JPH::BroadPhaseCastResult, JPH::CollisionCollectorTraitsCastRay>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseBruteForce::CastRay
          (BroadPhaseBruteForce *this,RayCast *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  uint *puVar12;
  long in_FS_OFFSET;
  uint uVar13;
  uint uVar14;
  uint uVar18;
  uint uVar19;
  undefined1 auVar15 [16];
  uint uVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  float local_94;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar11 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x28));
  } while (iVar11 == 0xb);
  if (iVar11 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x10);
  uVar8 = *(undefined8 *)param_1;
  uVar9 = *(undefined8 *)(param_1 + 8);
  auVar15._0_4_ = 0.0 - auVar21._0_4_;
  auVar15._4_4_ = 0.0 - auVar21._4_4_;
  auVar15._8_4_ = 0.0 - auVar21._8_4_;
  auVar15._12_4_ = 0.0 - auVar21._12_4_;
  puVar12 = *(uint **)(this + 0x20);
  local_94 = *(float *)(param_2 + 8);
  puVar1 = puVar12 + *(long *)(this + 0x10);
  auVar15 = maxps(auVar15,auVar21);
  bVar4 = auVar15._0_4_ <= _LC7;
  bVar5 = auVar15._4_4_ <= _LC7;
  bVar6 = auVar15._8_4_ <= _LC7;
  uVar13 = (int)-(uint)bVar4 >> 0x1f;
  uVar18 = (int)-(uint)bVar5 >> 0x1f;
  uVar19 = (int)-(uint)bVar6 >> 0x1f;
  uVar20 = (int)-(uint)(auVar15._12_4_ <= _LC7) >> 0x1f;
  auVar27._0_4_ = ~uVar13 & (uint)auVar21._0_4_;
  auVar27._4_4_ = ~uVar18 & (uint)auVar21._4_4_;
  auVar27._8_4_ = ~uVar19 & (uint)auVar21._8_4_;
  auVar27._12_4_ = ~uVar20 & (uint)auVar21._12_4_;
  auVar23._4_4_ = _LC9;
  auVar23._0_4_ = _LC9;
  auVar23._8_4_ = _LC9;
  auVar23._12_4_ = _LC9;
  auVar21._0_4_ = uVar13 & _LC9;
  auVar21._4_4_ = uVar18 & _LC9;
  auVar21._8_4_ = uVar19 & _LC9;
  auVar21._12_4_ = uVar20 & _LC9;
  auVar21 = divps(auVar23,auVar21 | auVar27);
  for (; puVar1 != puVar12; puVar12 = puVar12 + 1) {
    uVar2 = *puVar12;
    lVar3 = *(long *)(*(long *)(*(long *)(this + 8) + 0x10) + (ulong)(uVar2 & 0x7fffff) * 8);
    cVar10 = (**(code **)(*(long *)param_4 + 0x10))(param_4,*(undefined2 *)(lVar3 + 0x74));
    if (cVar10 != '\0') {
      local_88 = (float)uVar8;
      fStack_84 = (float)((ulong)uVar8 >> 0x20);
      fStack_80 = (float)uVar9;
      fStack_7c = (float)((ulong)uVar9 >> 0x20);
      local_58 = auVar21._0_4_;
      fStack_54 = auVar21._4_4_;
      fStack_50 = auVar21._8_4_;
      fStack_4c = auVar21._12_4_;
      auVar16._0_8_ =
           CONCAT44((*(float *)(lVar3 + 0x24) - fStack_84) * fStack_54,
                    (*(float *)(lVar3 + 0x20) - local_88) * local_58);
      auVar16._8_4_ = (*(float *)(lVar3 + 0x28) - fStack_80) * fStack_50;
      auVar16._12_4_ = (*(float *)(lVar3 + 0x2c) - fStack_7c) * fStack_4c;
      auVar28._0_4_ = (*(float *)(lVar3 + 0x30) - local_88) * local_58;
      auVar28._4_4_ = (*(float *)(lVar3 + 0x34) - fStack_84) * fStack_54;
      auVar28._8_4_ = (*(float *)(lVar3 + 0x38) - fStack_80) * fStack_50;
      auVar28._12_4_ = (*(float *)(lVar3 + 0x3c) - fStack_7c) * fStack_4c;
      auVar22._8_4_ = auVar16._8_4_;
      auVar22._0_8_ = auVar16._0_8_;
      auVar22._12_4_ = auVar16._12_4_;
      auVar23 = minps(auVar22,auVar28);
      auVar15 = maxps(auVar16,auVar28);
      auVar32._0_4_ = ~uVar13 & auVar23._0_4_;
      auVar32._4_4_ = ~uVar18 & auVar23._4_4_;
      auVar32._8_4_ = ~uVar19 & auVar23._8_4_;
      auVar32._12_4_ = ~uVar20 & auVar23._12_4_;
      auVar29._0_4_ = ~uVar13 & auVar15._0_4_;
      auVar29._4_4_ = ~uVar18 & auVar15._4_4_;
      auVar29._8_4_ = ~uVar19 & auVar15._8_4_;
      auVar29._12_4_ = ~uVar20 & auVar15._12_4_;
      auVar24._0_4_ = _LC1 & uVar13;
      auVar24._4_4_ = _UNK_00101544 & uVar18;
      auVar24._8_4_ = _UNK_00101548 & uVar19;
      auVar24._12_4_ = _UNK_0010154c & uVar20;
      auVar24 = auVar24 | auVar32;
      auVar17._4_4_ = uVar18 & _LC3;
      auVar17._0_4_ = uVar13 & _LC3;
      auVar17._8_4_ = uVar19 & _LC3;
      auVar17._12_4_ = uVar20 & _LC3;
      auVar17 = auVar17 | auVar29;
      auVar30._0_8_ = auVar24._4_8_;
      auVar30._8_4_ = auVar24._0_4_;
      auVar30._12_4_ = auVar24._0_4_;
      auVar15 = maxps(auVar24,auVar30);
      auVar7._4_4_ = auVar15._0_4_;
      auVar7._0_4_ = auVar15._8_4_;
      auVar7._8_4_ = auVar15._4_4_;
      auVar7._12_4_ = auVar15._4_4_;
      auVar23 = maxps(auVar15,auVar7);
      auVar25._0_8_ = auVar17._4_8_;
      auVar25._8_4_ = auVar17._0_4_;
      auVar25._12_4_ = auVar17._0_4_;
      auVar15 = minps(auVar17,auVar25);
      auVar26._4_4_ = auVar15._0_4_;
      auVar26._0_4_ = auVar15._8_4_;
      auVar26._8_4_ = auVar15._4_4_;
      auVar26._12_4_ = auVar15._4_4_;
      auVar15 = minps(auVar15,auVar26);
      uVar14 = (int)-(uint)(((fStack_84 < *(float *)(lVar3 + 0x24) ||
                             *(float *)(lVar3 + 0x34) < fStack_84) && bVar5 ||
                            (auVar15._4_4_ < auVar23._4_4_ || auVar15._4_4_ < 0.0)) ||
                           (((local_88 < *(float *)(lVar3 + 0x20) ||
                             *(float *)(lVar3 + 0x30) < local_88) && bVar4 ||
                            (auVar15._0_4_ < 0.0 || auVar15._0_4_ < auVar23._0_4_)) ||
                           ((fStack_80 < *(float *)(lVar3 + 0x28) ||
                            *(float *)(lVar3 + 0x38) < fStack_80) && bVar6 ||
                           (auVar15._8_4_ < auVar23._8_4_ || auVar15._8_4_ < 0.0)))) >> 0x1f;
      fVar31 = (float)(_LC3 & uVar14 | ~uVar14 & (uint)auVar23._0_4_);
      if (fVar31 < local_94) {
        local_48 = uVar2;
        local_44 = fVar31;
        (**(code **)(*(long *)param_2 + 0x28))(param_2,&local_48);
        local_94 = *(float *)(param_2 + 8);
        if (local_94 <= 0.0) break;
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x28));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BroadPhaseBruteForce::CastAABoxNoLock(JPH::AABoxCast const&,
   JPH::CollisionCollector<JPH::BroadPhaseCastResult, JPH::CollisionCollectorTraitsCastShape>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseBruteForce::CastAABoxNoLock
          (BroadPhaseBruteForce *this,AABoxCast *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  int iVar10;
  uint *puVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar16 [16];
  uint uVar21;
  uint uVar24;
  uint uVar27;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_a4;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar10 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x28));
  } while (iVar10 == 0xb);
  if (iVar10 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  local_a4 = *(float *)(param_2 + 8);
  fVar12 = (*(float *)(param_1 + 0x10) + *(float *)param_1) * _LC12;
  fVar19 = (*(float *)(param_1 + 0x14) + *(float *)(param_1 + 4)) * _LC12;
  fVar22 = (*(float *)(param_1 + 0x18) + *(float *)(param_1 + 8)) * _LC12;
  fVar25 = (*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0xc)) * _LC12;
  fVar13 = (*(float *)(param_1 + 0x10) - *(float *)param_1) * _LC12;
  fVar20 = (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 4)) * _LC12;
  fVar23 = (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 8)) * _LC12;
  fVar26 = (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0xc)) * _LC12;
  auVar28 = *(undefined1 (*) [16])(param_1 + 0x20);
  auVar16._0_4_ = 0.0 - auVar28._0_4_;
  auVar16._4_4_ = 0.0 - auVar28._4_4_;
  auVar16._8_4_ = 0.0 - auVar28._8_4_;
  auVar16._12_4_ = 0.0 - auVar28._12_4_;
  auVar16 = maxps(auVar16,auVar28);
  bVar4 = auVar16._0_4_ <= _LC7;
  bVar5 = auVar16._4_4_ <= _LC7;
  bVar6 = auVar16._8_4_ <= _LC7;
  uVar14 = (int)-(uint)bVar4 >> 0x1f;
  uVar21 = (int)-(uint)bVar5 >> 0x1f;
  uVar24 = (int)-(uint)bVar6 >> 0x1f;
  uVar27 = (int)-(uint)(auVar16._12_4_ <= _LC7) >> 0x1f;
  auVar34._0_4_ = ~uVar14 & (uint)auVar28._0_4_;
  auVar34._4_4_ = ~uVar21 & (uint)auVar28._4_4_;
  auVar34._8_4_ = ~uVar24 & (uint)auVar28._8_4_;
  auVar34._12_4_ = ~uVar27 & (uint)auVar28._12_4_;
  auVar30._4_4_ = _LC9;
  auVar30._0_4_ = _LC9;
  auVar30._8_4_ = _LC9;
  auVar30._12_4_ = _LC9;
  auVar28._0_4_ = uVar14 & _LC9;
  auVar28._4_4_ = uVar21 & _LC9;
  auVar28._8_4_ = uVar24 & _LC9;
  auVar28._12_4_ = uVar27 & _LC9;
  auVar28 = divps(auVar30,auVar28 | auVar34);
  if (local_a4 <= _LC10) {
    local_a4 = _LC10;
  }
  puVar11 = *(uint **)(this + 0x20);
  puVar1 = puVar11 + *(long *)(this + 0x10);
  for (; puVar1 != puVar11; puVar11 = puVar11 + 1) {
    uVar2 = *puVar11;
    lVar3 = *(long *)(*(long *)(*(long *)(this + 8) + 0x10) + (ulong)(uVar2 & 0x7fffff) * 8);
    cVar9 = (**(code **)(*(long *)param_4 + 0x10))(param_4,*(undefined2 *)(lVar3 + 0x74));
    if (cVar9 != '\0') {
      fVar41 = *(float *)(lVar3 + 0x20) - fVar13;
      fVar42 = *(float *)(lVar3 + 0x24) - fVar20;
      fVar43 = *(float *)(lVar3 + 0x28) - fVar23;
      fVar38 = *(float *)(lVar3 + 0x30) + fVar13;
      fVar39 = *(float *)(lVar3 + 0x34) + fVar20;
      fVar40 = *(float *)(lVar3 + 0x38) + fVar23;
      local_78 = auVar28._0_4_;
      fStack_74 = auVar28._4_4_;
      fStack_70 = auVar28._8_4_;
      fStack_6c = auVar28._12_4_;
      auVar17._0_8_ = CONCAT44((fVar42 - fVar19) * fStack_74,(fVar41 - fVar12) * local_78);
      auVar17._8_4_ = (fVar43 - fVar22) * fStack_70;
      auVar17._12_4_ = ((*(float *)(lVar3 + 0x2c) - fVar26) - fVar25) * fStack_6c;
      auVar35._0_4_ = (fVar38 - fVar12) * local_78;
      auVar35._4_4_ = (fVar39 - fVar19) * fStack_74;
      auVar35._8_4_ = (fVar40 - fVar22) * fStack_70;
      auVar35._12_4_ = ((*(float *)(lVar3 + 0x3c) + fVar26) - fVar25) * fStack_6c;
      auVar29._8_4_ = auVar17._8_4_;
      auVar29._0_8_ = auVar17._0_8_;
      auVar29._12_4_ = auVar17._12_4_;
      auVar30 = minps(auVar29,auVar35);
      auVar16 = maxps(auVar17,auVar35);
      auVar36._0_4_ = ~uVar14 & auVar16._0_4_;
      auVar36._4_4_ = ~uVar21 & auVar16._4_4_;
      auVar36._8_4_ = ~uVar24 & auVar16._8_4_;
      auVar36._12_4_ = ~uVar27 & auVar16._12_4_;
      auVar31._0_4_ = (uint)_LC1 & uVar14;
      auVar31._4_4_ = _UNK_00101544 & uVar21;
      auVar31._8_4_ = _UNK_00101548 & uVar24;
      auVar31._12_4_ = _UNK_0010154c & uVar27;
      auVar7._4_4_ = ~uVar21 & auVar30._4_4_;
      auVar7._0_4_ = ~uVar14 & auVar30._0_4_;
      auVar7._8_4_ = ~uVar24 & auVar30._8_4_;
      auVar7._12_4_ = ~uVar27 & auVar30._12_4_;
      auVar31 = auVar31 | auVar7;
      auVar18._4_4_ = uVar21 & _UNK_00101554;
      auVar18._0_4_ = uVar14 & _LC3;
      auVar18._8_4_ = uVar24 & _UNK_00101558;
      auVar18._12_4_ = uVar27 & _UNK_0010155c;
      auVar18 = auVar18 | auVar36;
      auVar37._0_8_ = auVar31._4_8_;
      auVar37._8_4_ = auVar31._0_4_;
      auVar37._12_4_ = auVar31._0_4_;
      auVar16 = maxps(auVar31,auVar37);
      auVar8._4_4_ = auVar16._0_4_;
      auVar8._0_4_ = auVar16._8_4_;
      auVar8._8_4_ = auVar16._4_4_;
      auVar8._12_4_ = auVar16._4_4_;
      auVar30 = maxps(auVar16,auVar8);
      auVar32._0_8_ = auVar18._4_8_;
      auVar32._8_4_ = auVar18._0_4_;
      auVar32._12_4_ = auVar18._0_4_;
      auVar16 = minps(auVar18,auVar32);
      auVar33._4_4_ = auVar16._0_4_;
      auVar33._0_4_ = auVar16._8_4_;
      auVar33._8_4_ = auVar16._4_4_;
      auVar33._12_4_ = auVar16._4_4_;
      auVar16 = minps(auVar16,auVar33);
      uVar15 = (int)-(uint)(((fVar19 < fVar42 || fVar39 < fVar19) && bVar5 ||
                            (auVar16._4_4_ < auVar30._4_4_ || auVar16._4_4_ < 0.0)) ||
                           (((fVar12 < fVar41 || fVar38 < fVar12) && bVar4 ||
                            (auVar16._0_4_ < 0.0 || auVar16._0_4_ < auVar30._0_4_)) ||
                           ((fVar22 < fVar43 || fVar40 < fVar22) && bVar6 ||
                           (auVar16._8_4_ < auVar30._8_4_ || auVar16._8_4_ < 0.0)))) >> 0x1f;
      fVar38 = (float)(uVar15 & _LC3 | ~uVar15 & (uint)auVar30._0_4_);
      if (fVar38 < local_a4) {
        local_48 = uVar2;
        local_44 = fVar38;
        (**(code **)(*(long *)param_2 + 0x28))(param_2,&local_48);
        local_a4 = *(float *)(param_2 + 8);
        if (local_a4 <= _LC1) break;
        if (local_a4 <= _LC10) {
          local_a4 = 1.1754944e-38;
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x28));
  return;
}



/* JPH::BroadPhaseBruteForce::CastAABox(JPH::AABoxCast const&,
   JPH::CollisionCollector<JPH::BroadPhaseCastResult, JPH::CollisionCollectorTraitsCastShape>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseBruteForce::CastAABox
          (BroadPhaseBruteForce *this,AABoxCast *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  CastAABoxNoLock(this,param_1,param_2,param_3,param_4);
  return;
}



/* JPH::ObjectLayerPairFilter::ShouldCollide(unsigned short, unsigned short) const */

undefined8 JPH::ObjectLayerPairFilter::ShouldCollide(ushort param_1,ushort param_2)

{
  return 1;
}



/* JPH::BroadPhase::Optimize() */

void JPH::BroadPhase::Optimize(void)

{
  return;
}



/* JPH::BroadPhase::FrameSync() */

void JPH::BroadPhase::FrameSync(void)

{
  return;
}



/* JPH::BroadPhase::LockModifications() */

void JPH::BroadPhase::LockModifications(void)

{
  return;
}



/* JPH::BroadPhase::UpdatePrepare() */

BroadPhase * __thiscall JPH::BroadPhase::UpdatePrepare(BroadPhase *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return this;
}



/* JPH::BroadPhase::UpdateFinalize(JPH::BroadPhase::UpdateState const&) */

void JPH::BroadPhase::UpdateFinalize(UpdateState *param_1)

{
  return;
}



/* JPH::BroadPhase::UnlockModifications() */

void JPH::BroadPhase::UnlockModifications(void)

{
  return;
}



/* JPH::BroadPhase::AddBodiesPrepare(JPH::BodyID*, int) */

undefined8 JPH::BroadPhase::AddBodiesPrepare(BodyID *param_1,int param_2)

{
  return 0;
}



/* JPH::BroadPhase::AddBodiesAbort(JPH::BodyID*, int, void*) */

void JPH::BroadPhase::AddBodiesAbort(BodyID *param_1,int param_2,void *param_3)

{
  return;
}



/* JPH::BroadPhaseBruteForce::~BroadPhaseBruteForce() */

void __thiscall JPH::BroadPhaseBruteForce::~BroadPhaseBruteForce(BroadPhaseBruteForce *this)

{
  *(undefined ***)this = &PTR__BroadPhaseBruteForce_00101478;
  if (*(long *)(this + 0x20) != 0) {
    *(undefined8 *)(this + 0x10) = 0;
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x0010139d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::BroadPhaseBruteForce::~BroadPhaseBruteForce() */

void __thiscall JPH::BroadPhaseBruteForce::~BroadPhaseBruteForce(BroadPhaseBruteForce *this)

{
  *(undefined ***)this = &PTR__BroadPhaseBruteForce_00101478;
  if (*(long *)(this + 0x20) != 0) {
    *(undefined8 *)(this + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x001013d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(*(long *)(this + 0x20));
    return;
  }
  return;
}



/* JPH::BroadPhaseBruteForce::AddBodiesFinalize(JPH::BodyID*, int, void*) */

void JPH::BroadPhaseBruteForce::_GLOBAL__sub_I_AddBodiesFinalize(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC13;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::BroadPhaseBruteForce::~BroadPhaseBruteForce() */

void __thiscall JPH::BroadPhaseBruteForce::~BroadPhaseBruteForce(BroadPhaseBruteForce *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


