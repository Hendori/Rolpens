
/* VmaAddDetailedStatistics(VmaDetailedStatistics&, VmaDetailedStatistics const&) */

void VmaAddDetailedStatistics(VmaDetailedStatistics *param_1,VmaDetailedStatistics *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  *(ulong *)param_1 =
       CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (int)((ulong)*(undefined8 *)param_2 >> 0x20),
                (int)*(undefined8 *)param_1 + (int)*(undefined8 *)param_2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x18);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar2;
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (*(ulong *)(param_2 + 0x20) < *(ulong *)(param_1 + 0x20)) {
    uVar3 = *(ulong *)(param_2 + 0x20);
  }
  *(ulong *)(param_1 + 0x20) = uVar3;
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (*(ulong *)(param_1 + 0x28) < *(ulong *)(param_2 + 0x28)) {
    uVar3 = *(ulong *)(param_2 + 0x28);
  }
  *(ulong *)(param_1 + 0x28) = uVar3;
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (*(ulong *)(param_2 + 0x30) < *(ulong *)(param_1 + 0x30)) {
    uVar3 = *(ulong *)(param_2 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = uVar3;
  uVar3 = *(ulong *)(param_1 + 0x38);
  if (*(ulong *)(param_1 + 0x38) < *(ulong *)(param_2 + 0x38)) {
    uVar3 = *(ulong *)(param_2 + 0x38);
  }
  *(ulong *)(param_1 + 0x38) = uVar3;
  return;
}



/* VmaBlockMetadata_Linear::Init(unsigned long) */

void __thiscall VmaBlockMetadata_Linear::Init(VmaBlockMetadata_Linear *this,ulong param_1)

{
  *(ulong *)(this + 8) = param_1;
  *(ulong *)(this + 0x28) = param_1;
  return;
}



/* VmaBlockMetadata_Linear::Validate() const */

bool __thiscall VmaBlockMetadata_Linear::Validate(VmaBlockMetadata_Linear *this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  VmaBlockMetadata_Linear *pVVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  VmaBlockMetadata_Linear *pVVar18;
  ulong uVar19;
  long lVar20;
  bool bVar21;
  
  if (*(int *)(this + 0x70) == 0) {
    pVVar10 = this + 0x30;
    pVVar18 = this + 0x50;
  }
  else {
    pVVar10 = this + 0x50;
    pVVar18 = this + 0x30;
  }
  iVar1 = *(int *)(this + 0x74);
  uVar11 = *(ulong *)(pVVar18 + 0x10);
  if ((iVar1 == 0) != (uVar11 == 0)) {
    return false;
  }
  uVar16 = *(ulong *)(pVVar10 + 0x10);
  if (uVar16 == 0) {
    if (uVar11 != 0) {
      if (iVar1 == 1) {
        return false;
      }
      goto LAB_00100193;
    }
  }
  else {
    uVar15 = *(ulong *)(this + 0x78);
    if (*(int *)(*(long *)(pVVar10 + 8) + 0x18 + uVar15 * 0x20) == 0) {
      return false;
    }
    if (*(int *)(*(long *)(pVVar10 + 8) + -8 + uVar16 * 0x20) == 0) {
      return false;
    }
    if (uVar11 == 0) goto LAB_001000ec;
LAB_00100193:
    if (*(int *)(uVar11 * 0x20 + *(long *)(pVVar18 + 8) + -8) == 0) {
      return false;
    }
  }
  uVar15 = *(ulong *)(this + 0x78);
LAB_001000ec:
  bVar21 = false;
  if ((*(long *)(this + 0x80) + uVar15 <= uVar16) &&
     (uVar3 = *(ulong *)(this + 0x88), uVar3 <= uVar11)) {
    uVar6 = 0;
    lVar20 = 0;
    if (iVar1 == 1) {
      if (uVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        uVar9 = 0;
        puVar13 = *(ulong **)(pVVar18 + 8);
        do {
          iVar2 = (int)puVar13[3];
          if (this[0x20] == (VmaBlockMetadata_Linear)0x0) {
            uVar4 = puVar13[2];
            if ((uVar4 == 0) != (iVar2 == 0)) {
              return false;
            }
            uVar19 = *puVar13;
            if (uVar19 < uVar6) {
              return false;
            }
            if (iVar2 != 0) {
              lVar17 = 0;
              if (*(char *)(uVar4 + 0x4c) == '\x01') {
                lVar17 = *(long *)(uVar4 + 8);
              }
              if (uVar19 + 1 != lVar17) {
                return false;
              }
              uVar6 = *(ulong *)(uVar4 + 0x30);
              if (puVar13[1] != uVar6) {
                return false;
              }
              goto LAB_0010025d;
            }
LAB_00100298:
            uVar6 = puVar13[1];
            uVar12 = uVar12 + 1;
          }
          else {
            uVar19 = *puVar13;
            if (uVar19 < uVar6) {
              return false;
            }
            if (iVar2 == 0) goto LAB_00100298;
            uVar6 = puVar13[1];
LAB_0010025d:
            lVar20 = lVar20 + uVar6;
          }
          uVar9 = uVar9 + 1;
          uVar6 = uVar6 + uVar19;
          puVar13 = puVar13 + 4;
        } while (uVar9 != uVar11);
      }
      if (uVar3 != uVar12) {
        return false;
      }
    }
    if (uVar15 != 0) {
      uVar12 = 0;
      plVar5 = (long *)(*(long *)(pVVar10 + 8) + 0x10);
      do {
        if ((int)plVar5[1] != 0) {
          return false;
        }
        if (*plVar5 != 0) {
          return false;
        }
        uVar12 = uVar12 + 1;
        plVar5 = plVar5 + 4;
      } while (uVar15 != uVar12);
    }
    uVar12 = uVar15;
    if (uVar15 < uVar16) {
      puVar13 = (ulong *)(uVar15 * 0x20 + *(long *)(pVVar10 + 8));
      uVar9 = uVar15;
      do {
        iVar2 = (int)puVar13[3];
        if (this[0x20] == (VmaBlockMetadata_Linear)0x0) {
          uVar4 = puVar13[2];
          if ((uVar4 == 0) != (iVar2 == 0)) {
            return false;
          }
          uVar19 = *puVar13;
          if (uVar19 < uVar6) {
            return false;
          }
          if (uVar9 < uVar15) goto LAB_00100370;
          if (iVar2 != 0) {
            lVar17 = 0;
            if (*(char *)(uVar4 + 0x4c) == '\x01') {
              lVar17 = *(long *)(uVar4 + 8);
            }
            if (uVar19 + 1 != lVar17) {
              return false;
            }
            uVar6 = *(ulong *)(uVar4 + 0x30);
            if (puVar13[1] != uVar6) {
              return false;
            }
            goto LAB_00100339;
          }
LAB_00100379:
          uVar6 = puVar13[1];
          uVar12 = uVar12 + 1;
        }
        else {
          uVar19 = *puVar13;
          if (uVar19 < uVar6) {
            return false;
          }
          if (uVar9 < uVar15) {
LAB_00100370:
            if (iVar2 != 0) {
              return false;
            }
            goto LAB_00100379;
          }
          if (iVar2 == 0) goto LAB_00100379;
          uVar6 = puVar13[1];
LAB_00100339:
          lVar20 = lVar20 + uVar6;
        }
        uVar9 = uVar9 + 1;
        uVar6 = uVar6 + uVar19;
        puVar13 = puVar13 + 4;
      } while (uVar9 < uVar16);
    }
    bVar21 = false;
    if (*(long *)(this + 0x80) + uVar15 == uVar12) {
      if (iVar1 == 2) {
        lVar17 = uVar11 - 1;
        if (uVar11 != 0) {
          lVar14 = *(long *)(pVVar18 + 8) + uVar11 * 0x20;
          uVar11 = 0;
          do {
            iVar1 = *(int *)(lVar14 + -8);
            if (this[0x20] == (VmaBlockMetadata_Linear)0x0) {
              lVar8 = *(long *)(lVar14 + -0x10);
              if ((lVar8 == 0) != (iVar1 == 0)) {
                return false;
              }
              uVar16 = *(ulong *)(lVar14 + -0x20);
              if (uVar16 < uVar6) {
                return false;
              }
              if (iVar1 != 0) {
                lVar7 = 0;
                if (*(char *)(lVar8 + 0x4c) == '\x01') {
                  lVar7 = *(long *)(lVar8 + 8);
                }
                if (uVar16 + 1 != lVar7) {
                  return false;
                }
                lVar8 = *(long *)(lVar8 + 0x30);
                if (*(long *)(lVar14 + -0x18) != lVar8) {
                  return false;
                }
                goto LAB_00100475;
              }
LAB_001004b0:
              lVar8 = *(long *)(lVar14 + -0x18);
              uVar11 = uVar11 + 1;
            }
            else {
              uVar16 = *(ulong *)(lVar14 + -0x20);
              if (uVar16 < uVar6) {
                return false;
              }
              if (iVar1 == 0) goto LAB_001004b0;
              lVar8 = *(long *)(lVar14 + -0x18);
LAB_00100475:
              lVar20 = lVar20 + lVar8;
            }
            lVar17 = lVar17 + -1;
            uVar6 = lVar8 + uVar16;
            lVar14 = lVar14 + -0x20;
          } while (lVar17 != -1);
        }
        if (uVar3 != uVar11) {
          return false;
        }
      }
      bVar21 = false;
      if (uVar6 <= *(ulong *)(this + 8)) {
        bVar21 = *(long *)(this + 0x28) == *(ulong *)(this + 8) - lVar20;
      }
    }
  }
  return bVar21;
}



/* VmaBlockMetadata_Linear::GetAllocationCount() const */

long __thiscall VmaBlockMetadata_Linear::GetAllocationCount(VmaBlockMetadata_Linear *this)

{
  if (*(int *)(this + 0x70) != 0) {
    return ((*(long *)(this + 0x60) - (*(long *)(this + 0x80) + *(long *)(this + 0x78))) -
           *(long *)(this + 0x88)) + *(long *)(this + 0x40);
  }
  return ((*(long *)(this + 0x40) - (*(long *)(this + 0x80) + *(long *)(this + 0x78))) -
         *(long *)(this + 0x88)) + *(long *)(this + 0x60);
}



/* VmaBlockMetadata_Linear::GetFreeRegionsCount() const */

undefined8 VmaBlockMetadata_Linear::GetFreeRegionsCount(void)

{
  return 0xffffffffffffffff;
}



/* VmaBlockMetadata_Linear::AddStatistics(VmaStatistics&) const */

void __thiscall
VmaBlockMetadata_Linear::AddStatistics(VmaBlockMetadata_Linear *this,VmaStatistics *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  VmaBlockMetadata_Linear *pVVar10;
  ulong uVar11;
  ulong uVar12;
  VmaBlockMetadata_Linear *pVVar13;
  bool bVar14;
  
  if (*(int *)(this + 0x70) == 0) {
    pVVar10 = this + 0x30;
    pVVar13 = this + 0x50;
  }
  else {
    pVVar10 = this + 0x50;
    pVVar13 = this + 0x30;
  }
  uVar2 = *(ulong *)(this + 8);
  iVar1 = *(int *)(this + 0x74);
  uVar3 = *(ulong *)(pVVar10 + 0x10);
  uVar6 = *(ulong *)(pVVar13 + 0x10);
  *(ulong *)(param_1 + 0x10) = (*(long *)(param_1 + 0x10) + uVar2) - *(long *)(this + 0x28);
  uVar7 = *(ulong *)(this + 0x78);
  *(int *)param_1 = *(int *)param_1 + 1;
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar2;
  uVar12 = uVar2;
  if (iVar1 == 1) {
    uVar11 = 0;
    uVar5 = *(ulong *)(uVar7 * 0x20 + *(long *)(pVVar10 + 8));
    for (uVar9 = uVar7; (uVar11 < uVar5 && (uVar11 = uVar5, uVar9 < uVar6)); uVar9 = uVar9 + 1) {
      while (*(long *)(*(long *)(pVVar13 + 8) + 0x10 + uVar9 * 0x20) == 0) {
        uVar9 = uVar9 + 1;
        if (uVar9 == uVar6) goto LAB_001005b0;
      }
      if (uVar6 <= uVar9) break;
      plVar8 = (long *)(*(long *)(pVVar13 + 8) + uVar9 * 0x20);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      uVar11 = plVar8[1] + *plVar8;
    }
  }
  else if (iVar1 == 2) {
    uVar11 = 0;
    uVar12 = *(ulong *)(uVar6 * 0x20 + *(long *)(pVVar13 + 8) + -0x20);
  }
  else {
    uVar11 = 0;
  }
LAB_001005b0:
  do {
    if ((uVar12 <= uVar11) || (uVar11 = uVar12, uVar3 <= uVar7)) {
LAB_001005ed:
      if (iVar1 == 2) {
        while ((uVar6 = uVar6 - 1, uVar11 < uVar2 && (uVar6 != 0xffffffffffffffff))) {
          lVar4 = *(long *)(pVVar13 + 8);
          while (*(long *)(lVar4 + 0x10 + uVar6 * 0x20) == 0) {
            bVar14 = uVar6 == 0;
            uVar6 = uVar6 - 1;
            if (bVar14) {
              return;
            }
          }
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
          plVar8 = (long *)(lVar4 + uVar6 * 0x20);
          uVar11 = plVar8[1] + *plVar8;
        }
      }
      return;
    }
    while (*(long *)(*(long *)(pVVar10 + 8) + 0x10 + uVar7 * 0x20) == 0) {
      uVar7 = uVar7 + 1;
      if (uVar3 == uVar7) goto LAB_001005ed;
    }
    if (uVar3 <= uVar7) goto LAB_001005ed;
    plVar8 = (long *)(*(long *)(pVVar10 + 8) + uVar7 * 0x20);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    uVar7 = uVar7 + 1;
    uVar11 = plVar8[1] + *plVar8;
  } while( true );
}



/* VmaBlockMetadata_TLSF::CheckCorruption(void const*) */

undefined8 VmaBlockMetadata_TLSF::CheckCorruption(void *param_1)

{
  return 0;
}



/* VmaBlockMetadata_Linear::GetAllocationListBegin() const */

undefined8 VmaBlockMetadata_Linear::GetAllocationListBegin(void)

{
  return 0;
}



/* VmaBlockMetadata_Linear::GetNextAllocation(VmaAllocHandle_T*) const */

undefined8 VmaBlockMetadata_Linear::GetNextAllocation(VmaAllocHandle_T *param_1)

{
  return 0;
}



/* VmaBlockMetadata_Linear::GetNextFreeRegionSize(VmaAllocHandle_T*) const */

undefined8 VmaBlockMetadata_Linear::GetNextFreeRegionSize(VmaAllocHandle_T *param_1)

{
  return 0;
}



/* VmaBlockMetadata_TLSF::DebugLogAllAllocations() const */

void VmaBlockMetadata_TLSF::DebugLogAllAllocations(void)

{
  return;
}



/* VmaBlockMetadata_TLSF::GetAllocationInfo(VmaAllocHandle_T*, VmaVirtualAllocationInfo&) */

void __thiscall
VmaBlockMetadata_TLSF::GetAllocationInfo
          (VmaBlockMetadata_TLSF *this,VmaAllocHandle_T *param_1,VmaVirtualAllocationInfo *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)param_2 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  return;
}



/* VmaBlockMetadata_TLSF::GetAllocationUserData(VmaAllocHandle_T*) const */

undefined8 __thiscall
VmaBlockMetadata_TLSF::GetAllocationUserData(VmaBlockMetadata_TLSF *this,VmaAllocHandle_T *param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* VmaBlockMetadata_TLSF::GetAllocationListBegin() const */

long __thiscall VmaBlockMetadata_TLSF::GetAllocationListBegin(VmaBlockMetadata_TLSF *this)

{
  long lVar1;
  
  if (*(long *)(this + 0x28) == 0) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(this + 0x170) + 0x10);
  if (lVar1 == 0) {
    return lVar1;
  }
  do {
    if (*(long *)(lVar1 + 0x20) == lVar1) {
      return lVar1;
    }
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (lVar1 != 0);
  return lVar1;
}



/* VmaBlockMetadata_TLSF::GetNextAllocation(VmaAllocHandle_T*) const */

void __thiscall
VmaBlockMetadata_TLSF::GetNextAllocation(VmaBlockMetadata_TLSF *this,VmaAllocHandle_T *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  do {
    if (*(long *)(lVar1 + 0x20) == lVar1) {
      return;
    }
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (lVar1 != 0);
  return;
}



/* VmaBlockMetadata_TLSF::GetNextFreeRegionSize(VmaAllocHandle_T*) const */

undefined8 __thiscall
VmaBlockMetadata_TLSF::GetNextFreeRegionSize(VmaBlockMetadata_TLSF *this,VmaAllocHandle_T *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = 0;
  if ((lVar1 != 0) && (lVar1 != *(long *)(lVar1 + 0x20))) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}



/* VmaBlockMetadata_TLSF::SetAllocationUserData(VmaAllocHandle_T*, void*) */

void __thiscall
VmaBlockMetadata_TLSF::SetAllocationUserData
          (VmaBlockMetadata_TLSF *this,VmaAllocHandle_T *param_1,void *param_2)

{
  *(void **)(param_1 + 0x28) = param_2;
  return;
}



/* VmaBlockMetadata_TLSF::AddStatistics(VmaStatistics&) const */

void __thiscall
VmaBlockMetadata_TLSF::AddStatistics(VmaBlockMetadata_TLSF *this,VmaStatistics *param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  iVar1 = *(int *)(this + 0x28);
  lVar4 = *(long *)this;
  lVar2 = *(long *)(this + 8);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + lVar2;
  pcVar3 = *(code **)(lVar4 + 0x30);
  *(ulong *)param_1 =
       CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar1,(int)*(undefined8 *)param_1 + 1
               );
  if (pcVar3 == GetSumFreeSize) {
    *(long *)(param_1 + 0x10) =
         *(long *)(param_1 + 0x10) +
         (lVar2 - (*(long *)(this + 0x38) + *(long *)(*(long *)(this + 0x170) + 8)));
    return;
  }
  lVar4 = (*pcVar3)();
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (lVar2 - lVar4);
  return;
}



/* VmaSuballocation* VmaBinaryFindSorted<VmaSuballocationOffsetLess, VmaSuballocation*,
   VmaSuballocation>(VmaSuballocation* const&, VmaSuballocation* const&, VmaSuballocation const&,
   VmaSuballocationOffsetLess const&) [clone .isra.0] */

VmaSuballocation *
VmaBinaryFindSorted<VmaSuballocationOffsetLess,VmaSuballocation*,VmaSuballocation>
          (VmaSuballocation **param_1,VmaSuballocation **param_2,VmaSuballocation *param_3,
          VmaSuballocationOffsetLess *param_4)

{
  VmaSuballocation *pVVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar2 = (long)param_2 - (long)param_1 >> 5;
  while (uVar4 = uVar2, uVar3 < uVar4) {
    uVar2 = (uVar4 - uVar3 >> 1) + uVar3;
    if (param_1[uVar2 * 4] < param_3) {
      uVar3 = uVar2 + 1;
      uVar2 = uVar4;
    }
  }
  pVVar1 = (VmaSuballocation *)(param_1 + uVar3 * 4);
  if (((VmaSuballocation *)param_2 != pVVar1) && (*(VmaSuballocation **)pVVar1 != param_3)) {
    pVVar1 = (VmaSuballocation *)param_2;
  }
  return pVVar1;
}



/* VmaDeviceMemoryBlock::Unmap(VmaAllocator_T*, unsigned int) [clone .part.0] */

void __thiscall
VmaDeviceMemoryBlock::Unmap(VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  pthread_mutex_t *__mutex;
  
  if (*param_1 == (VmaAllocator_T)0x0) {
    uVar2 = *(uint *)(this + 0x54);
    if (uVar2 < param_2) {
      return;
    }
    __mutex = (pthread_mutex_t *)0x0;
  }
  else {
    __mutex = (pthread_mutex_t *)(this + 0x20);
    iVar1 = pthread_mutex_lock(__mutex);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
    }
    uVar2 = *(uint *)(this + 0x54);
    if (uVar2 < param_2) goto LAB_0010093c;
  }
  iVar1 = *(int *)(this + 0x50);
  *(uint *)(this + 0x54) = uVar2 - param_2;
  if ((uVar2 - param_2) + iVar1 == 0) {
    *(undefined8 *)(this + 0x58) = 0;
    (**(code **)(param_1 + 0x1680))(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(this + 0x18));
    iVar1 = *(int *)(this + 0x50);
  }
  uVar2 = *(uint *)(this + 0x4c);
  if (iVar1 == 0) {
    *(uint *)(this + 0x4c) = uVar2 + 1;
  }
  else if (*(uint *)(this + 0x48) < uVar2) {
    *(uint *)(this + 0x48) = *(uint *)(this + 0x48) + 1;
  }
  else if (uVar2 != 0) {
    *(ulong *)(this + 0x48) =
         CONCAT44(_LC0._4_4_ + (int)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                  (int)_LC0 + (int)*(undefined8 *)(this + 0x48));
  }
  if (__mutex == (pthread_mutex_t *)0x0) {
    return;
  }
LAB_0010093c:
  pthread_mutex_unlock(__mutex);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<VmaDeviceMemoryBlock**,
   __gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::{lambda(VmaDeviceMemoryBlock*,
   VmaDeviceMemoryBlock*)#1}> >(VmaDeviceMemoryBlock**, VmaDeviceMemoryBlock**,
   __gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::{lambda(VmaDeviceMemoryBlock*,
   VmaDeviceMemoryBlock*)#1}>) */

void std::
     __insertion_sort<VmaDeviceMemoryBlock**,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_1 != param_2) {
    for (puVar6 = param_1 + 1; param_2 != puVar6; puVar6 = puVar6 + 1) {
      while( true ) {
        puVar2 = (undefined8 *)*param_1;
        uVar4 = (**(code **)(**(long **)*puVar6 + 0x30))();
        uVar5 = (**(code **)(*(long *)*puVar2 + 0x30))();
        if (uVar4 < uVar5) break;
        puVar2 = (undefined8 *)*puVar6;
        puVar7 = puVar6;
        while( true ) {
          puVar3 = (undefined8 *)puVar7[-1];
          uVar4 = (**(code **)(*(long *)*puVar2 + 0x30))();
          uVar5 = (**(code **)(*(long *)*puVar3 + 0x30))();
          if (uVar5 <= uVar4) break;
          *puVar7 = puVar7[-1];
          puVar7 = puVar7 + -1;
        }
        *puVar7 = puVar2;
        puVar6 = puVar6 + 1;
        if (param_2 == puVar6) {
          return;
        }
      }
      uVar1 = *puVar6;
      __n = (long)puVar6 - (long)param_1;
      if ((long)__n < 9) {
        if (__n == 8) {
          *puVar6 = *param_1;
        }
      }
      else {
        memmove((void *)((8 - __n) + (long)puVar6),param_1,__n);
      }
      *param_1 = uVar1;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<VmaDeviceMemoryBlock**, long, VmaDeviceMemoryBlock*,
   __gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::{lambda(VmaDeviceMemoryBlock*,
   VmaDeviceMemoryBlock*)#1}> >(VmaDeviceMemoryBlock**, long, long, VmaDeviceMemoryBlock*,
   __gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::{lambda(VmaDeviceMemoryBlock*,
   VmaDeviceMemoryBlock*)#1}>) */

void std::
     __adjust_heap<VmaDeviceMemoryBlock**,long,VmaDeviceMemoryBlock*,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
               (long param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar2 = (long)(param_3 - 1) / 2;
  lVar6 = param_2;
  if (param_2 < lVar2) {
    do {
      lVar7 = (lVar6 + 1) * 2;
      lVar3 = (lVar6 + 1) * 0x10;
      puVar8 = (undefined8 *)(param_1 + lVar3);
      puVar1 = *(undefined8 **)(param_1 + -8 + lVar3);
      uVar4 = (**(code **)(**(long **)*puVar8 + 0x30))();
      uVar5 = (**(code **)(*(long *)*puVar1 + 0x30))();
      if (uVar4 < uVar5) {
        lVar7 = lVar7 + -1;
        puVar8 = (undefined8 *)(param_1 + lVar7 * 8);
      }
      *(undefined8 *)(param_1 + lVar6 * 8) = *puVar8;
      lVar6 = lVar7;
    } while (lVar7 < lVar2);
    if ((param_3 & 1) == 0) goto LAB_00100c20;
  }
  else {
    puVar8 = (undefined8 *)(param_1 + param_2 * 8);
    lVar7 = param_2;
    if ((param_3 & 1) != 0) goto LAB_00100bed;
LAB_00100c20:
    if ((long)(param_3 - 2) / 2 == lVar7) {
      lVar6 = lVar7 * 2;
      lVar7 = lVar6 + 1;
      *puVar8 = *(undefined8 *)(param_1 + -8 + (lVar6 + 2) * 8);
      puVar8 = (undefined8 *)(param_1 + lVar7 * 8);
    }
  }
  lVar6 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
  while (param_2 < lVar7) {
    lVar2 = lVar6 >> 1;
    puVar1 = (undefined8 *)(param_1 + lVar2 * 8);
    puVar8 = (undefined8 *)(param_1 + lVar7 * 8);
    uVar4 = (**(code **)(**(long **)*puVar1 + 0x30))();
    uVar5 = (**(code **)(*(long *)*param_4 + 0x30))();
    if (uVar5 <= uVar4) break;
    *puVar8 = *puVar1;
    lVar6 = (lVar2 + -1) - (lVar2 + -1 >> 0x3f);
    lVar7 = lVar2;
    puVar8 = puVar1;
  }
LAB_00100bed:
  *puVar8 = param_4;
  return;
}



/* VmaDeviceMemoryBlock::Map(VmaAllocator_T*, unsigned int, void**) [clone .part.0] */

int __thiscall
VmaDeviceMemoryBlock::Map
          (VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1,uint param_2,void **param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  
  if (*param_1 == (VmaAllocator_T)0x0) {
    iVar2 = *(int *)(this + 0x54);
    iVar3 = *(int *)(this + 0x50);
    __mutex = (pthread_mutex_t *)0x0;
    if (iVar2 + iVar3 != 0) goto LAB_00100cf7;
LAB_00100ca9:
    iVar2 = (**(code **)(param_1 + 0x1678))
                      (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(this + 0x18),0,
                       0xffffffffffffffff,0,this + 0x58);
    if (iVar2 != 0) goto LAB_00100ccd;
    uVar1 = *(uint *)(this + 0x4c);
    if (*(int *)(this + 0x50) == 0) {
      *(uint *)(this + 0x4c) = uVar1 + 1;
      if (6 < uVar1 + 1) {
        *(undefined4 *)(this + 0x50) = 1;
        *(undefined8 *)(this + 0x48) = 0;
      }
    }
    else if (*(uint *)(this + 0x48) < uVar1) {
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) + 1;
    }
    else if (uVar1 != 0) {
      *(ulong *)(this + 0x48) =
           CONCAT44(_LC0._4_4_ + (int)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                    (int)_LC0 + (int)*(undefined8 *)(this + 0x48));
    }
    *(uint *)(this + 0x54) = param_2;
    if (param_3 == (void **)0x0) {
      iVar2 = 0;
      goto LAB_00100ccd;
    }
LAB_00100d18:
    *param_3 = *(void **)(this + 0x58);
  }
  else {
    __mutex = (pthread_mutex_t *)(this + 0x20);
    iVar2 = pthread_mutex_lock(__mutex);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    iVar2 = *(int *)(this + 0x54);
    iVar3 = *(int *)(this + 0x50);
    if (iVar2 + iVar3 == 0) goto LAB_00100ca9;
LAB_00100cf7:
    uVar1 = *(uint *)(this + 0x4c);
    if (iVar3 == 0) {
      *(uint *)(this + 0x4c) = uVar1 + 1;
      if (6 < uVar1 + 1) {
        *(undefined4 *)(this + 0x50) = 1;
        *(undefined8 *)(this + 0x48) = 0;
      }
    }
    else if (*(uint *)(this + 0x48) < uVar1) {
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) + 1;
    }
    else if (uVar1 != 0) {
      *(ulong *)(this + 0x48) =
           CONCAT44(_LC0._4_4_ + (int)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                    (int)_LC0 + (int)*(undefined8 *)(this + 0x48));
    }
    *(uint *)(this + 0x54) = iVar2 + param_2;
    if (param_3 != (void **)0x0) goto LAB_00100d18;
  }
  iVar2 = 0;
LAB_00100ccd:
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  return iVar2;
}



/* VmaBlockMetadata_TLSF::AddDetailedStatistics(VmaDetailedStatistics&) const */

void __thiscall
VmaBlockMetadata_TLSF::AddDetailedStatistics
          (VmaBlockMetadata_TLSF *this,VmaDetailedStatistics *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x170);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + *(long *)(this + 8);
  uVar1 = *(ulong *)(lVar2 + 8);
  *(int *)param_1 = *(int *)param_1 + 1;
  if (uVar1 != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar3 = *(ulong *)(param_1 + 0x30);
    if (uVar1 < *(ulong *)(param_1 + 0x30)) {
      uVar3 = uVar1;
    }
    *(ulong *)(param_1 + 0x30) = uVar3;
    uVar3 = *(ulong *)(param_1 + 0x38);
    if (*(ulong *)(param_1 + 0x38) < uVar1) {
      uVar3 = uVar1;
    }
    *(ulong *)(param_1 + 0x38) = uVar3;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 != 0) {
    do {
      while (uVar1 = *(ulong *)(lVar2 + 8), *(long *)(lVar2 + 0x20) == lVar2) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar1;
        lVar2 = *(long *)(lVar2 + 0x10);
        uVar3 = *(ulong *)(param_1 + 0x20);
        if (uVar1 < *(ulong *)(param_1 + 0x20)) {
          uVar3 = uVar1;
        }
        *(ulong *)(param_1 + 0x20) = uVar3;
        uVar3 = *(ulong *)(param_1 + 0x28);
        if (*(ulong *)(param_1 + 0x28) < uVar1) {
          uVar3 = uVar1;
        }
        *(ulong *)(param_1 + 0x28) = uVar3;
        if (lVar2 == 0) {
          return;
        }
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      lVar2 = *(long *)(lVar2 + 0x10);
      uVar3 = *(ulong *)(param_1 + 0x30);
      if (uVar1 < *(ulong *)(param_1 + 0x30)) {
        uVar3 = uVar1;
      }
      *(ulong *)(param_1 + 0x30) = uVar3;
      uVar3 = *(ulong *)(param_1 + 0x38);
      if (*(ulong *)(param_1 + 0x38) < uVar1) {
        uVar3 = uVar1;
      }
      *(ulong *)(param_1 + 0x38) = uVar3;
    } while (lVar2 != 0);
    return;
  }
  return;
}



/* VmaBlockMetadata_Linear::AddDetailedStatistics(VmaDetailedStatistics&) const */

void __thiscall
VmaBlockMetadata_Linear::AddDetailedStatistics
          (VmaBlockMetadata_Linear *this,VmaDetailedStatistics *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  VmaBlockMetadata_Linear *pVVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  VmaBlockMetadata_Linear *pVVar12;
  ulong uVar13;
  bool bVar14;
  
  uVar11 = *(ulong *)(this + 8);
  if (*(int *)(this + 0x70) == 0) {
    pVVar6 = this + 0x30;
    pVVar12 = this + 0x50;
  }
  else {
    pVVar6 = this + 0x50;
    pVVar12 = this + 0x30;
  }
  iVar1 = *(int *)(this + 0x74);
  uVar4 = *(ulong *)(pVVar6 + 0x10);
  uVar3 = *(ulong *)(pVVar12 + 0x10);
  uVar2 = *(ulong *)(this + 0x78);
  *(int *)param_1 = *(int *)param_1 + 1;
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar11;
  if (iVar1 == 1) {
    uVar10 = *(ulong *)(uVar2 * 0x20 + *(long *)(pVVar6 + 8));
    uVar5 = 0;
    uVar9 = uVar10;
    uVar13 = 0;
    if (uVar10 != 0) {
      do {
        if (uVar3 <= uVar5) {
LAB_001011a8:
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar13 = uVar10 - uVar13;
          uVar9 = *(ulong *)(param_1 + 0x30);
          if (uVar13 < *(ulong *)(param_1 + 0x30)) {
            uVar9 = uVar13;
          }
          *(ulong *)(param_1 + 0x30) = uVar9;
          uVar9 = *(ulong *)(param_1 + 0x38);
          if (*(ulong *)(param_1 + 0x38) < uVar13) {
            uVar9 = uVar13;
          }
          *(ulong *)(param_1 + 0x38) = uVar9;
          uVar9 = uVar10;
          break;
        }
        while (*(long *)(*(long *)(pVVar12 + 8) + 0x10 + uVar5 * 0x20) == 0) {
          uVar5 = uVar5 + 1;
          if (uVar5 == uVar3) goto LAB_001011a8;
        }
        if (uVar3 <= uVar5) goto LAB_001011a8;
        puVar7 = (ulong *)(*(long *)(pVVar12 + 8) + uVar5 * 0x20);
        uVar9 = *puVar7;
        if (uVar13 < uVar9) {
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar13 = uVar9 - uVar13;
          uVar8 = *(ulong *)(param_1 + 0x30);
          if (uVar13 < *(ulong *)(param_1 + 0x30)) {
            uVar8 = uVar13;
          }
          *(ulong *)(param_1 + 0x30) = uVar8;
          uVar8 = *(ulong *)(param_1 + 0x38);
          if (*(ulong *)(param_1 + 0x38) < uVar13) {
            uVar8 = uVar13;
          }
          *(ulong *)(param_1 + 0x38) = uVar8;
        }
        uVar13 = puVar7[1];
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar13;
        uVar9 = uVar9 + uVar13;
        uVar8 = *(ulong *)(param_1 + 0x20);
        if (uVar13 < *(ulong *)(param_1 + 0x20)) {
          uVar8 = uVar13;
        }
        *(ulong *)(param_1 + 0x20) = uVar8;
        uVar8 = *(ulong *)(param_1 + 0x28);
        if (*(ulong *)(param_1 + 0x28) < uVar13) {
          uVar8 = uVar13;
        }
        uVar5 = uVar5 + 1;
        *(ulong *)(param_1 + 0x28) = uVar8;
        uVar13 = uVar9;
      } while (uVar9 < uVar10);
    }
LAB_001011d0:
    uVar10 = uVar11;
    if (uVar11 <= uVar9) {
      return;
    }
  }
  else {
    if (iVar1 != 2) {
      uVar9 = 0;
      goto LAB_001011d0;
    }
    uVar10 = *(ulong *)(uVar3 * 0x20 + *(long *)(pVVar12 + 8) + -0x20);
    uVar9 = uVar10;
    if (uVar10 == 0) goto joined_r0x00101034;
    uVar9 = 0;
  }
  do {
    if (uVar4 <= uVar2) {
LAB_00100fc0:
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar9 = uVar10 - uVar9;
      uVar4 = *(ulong *)(param_1 + 0x30);
      if (uVar9 < *(ulong *)(param_1 + 0x30)) {
        uVar4 = uVar9;
      }
      *(ulong *)(param_1 + 0x30) = uVar4;
      uVar4 = *(ulong *)(param_1 + 0x38);
      if (*(ulong *)(param_1 + 0x38) < uVar9) {
        uVar4 = uVar9;
      }
      *(ulong *)(param_1 + 0x38) = uVar4;
      uVar9 = uVar10;
      break;
    }
    while (*(long *)(*(long *)(pVVar6 + 8) + 0x10 + uVar2 * 0x20) == 0) {
      uVar2 = uVar2 + 1;
      if (uVar4 == uVar2) goto LAB_00100fc0;
    }
    if (uVar4 <= uVar2) goto LAB_00100fc0;
    puVar7 = (ulong *)(*(long *)(pVVar6 + 8) + uVar2 * 0x20);
    uVar13 = *puVar7;
    if (uVar9 < uVar13) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar9 = uVar13 - uVar9;
      uVar5 = *(ulong *)(param_1 + 0x30);
      if (uVar9 < *(ulong *)(param_1 + 0x30)) {
        uVar5 = uVar9;
      }
      *(ulong *)(param_1 + 0x30) = uVar5;
      uVar5 = *(ulong *)(param_1 + 0x38);
      if (*(ulong *)(param_1 + 0x38) < uVar9) {
        uVar5 = uVar9;
      }
      *(ulong *)(param_1 + 0x38) = uVar5;
    }
    uVar5 = puVar7[1];
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar5;
    uVar9 = uVar13 + uVar5;
    uVar13 = *(ulong *)(param_1 + 0x20);
    if (uVar5 < *(ulong *)(param_1 + 0x20)) {
      uVar13 = uVar5;
    }
    *(ulong *)(param_1 + 0x20) = uVar13;
    uVar13 = *(ulong *)(param_1 + 0x28);
    if (*(ulong *)(param_1 + 0x28) < uVar5) {
      uVar13 = uVar5;
    }
    uVar2 = uVar2 + 1;
    *(ulong *)(param_1 + 0x28) = uVar13;
  } while (uVar9 < uVar10);
  if (iVar1 != 2) {
    return;
  }
joined_r0x00101034:
  while( true ) {
    if (uVar11 <= uVar9) {
      return;
    }
    uVar3 = uVar3 - 1;
    if (uVar3 == 0xffffffffffffffff) break;
    while (*(long *)(*(long *)(pVVar12 + 8) + 0x10 + uVar3 * 0x20) == 0) {
      bVar14 = uVar3 == 0;
      uVar3 = uVar3 - 1;
      if (bVar14) goto LAB_001010b0;
    }
    puVar7 = (ulong *)(*(long *)(pVVar12 + 8) + uVar3 * 0x20);
    uVar4 = *puVar7;
    if (uVar9 < uVar4) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar9 = uVar4 - uVar9;
      uVar2 = *(ulong *)(param_1 + 0x30);
      if (uVar9 < *(ulong *)(param_1 + 0x30)) {
        uVar2 = uVar9;
      }
      *(ulong *)(param_1 + 0x30) = uVar2;
      uVar2 = *(ulong *)(param_1 + 0x38);
      if (*(ulong *)(param_1 + 0x38) < uVar9) {
        uVar2 = uVar9;
      }
      *(ulong *)(param_1 + 0x38) = uVar2;
    }
    uVar2 = puVar7[1];
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    uVar9 = *(ulong *)(param_1 + 0x20);
    if (uVar2 < *(ulong *)(param_1 + 0x20)) {
      uVar9 = uVar2;
    }
    *(ulong *)(param_1 + 0x20) = uVar9;
    uVar9 = *(ulong *)(param_1 + 0x28);
    if (*(ulong *)(param_1 + 0x28) < uVar2) {
      uVar9 = uVar2;
    }
    *(ulong *)(param_1 + 0x28) = uVar9;
    uVar9 = uVar2 + uVar4;
  }
LAB_001010b0:
  uVar11 = uVar11 - uVar9;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar11 < *(ulong *)(param_1 + 0x30)) {
    uVar4 = uVar11;
  }
  *(ulong *)(param_1 + 0x30) = uVar4;
  uVar4 = *(ulong *)(param_1 + 0x38);
  if (*(ulong *)(param_1 + 0x38) < uVar11) {
    uVar4 = uVar11;
  }
  *(ulong *)(param_1 + 0x38) = uVar4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<VmaDeviceMemoryBlock**, long,
   __gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::{lambda(VmaDeviceMemoryBlock*,
   VmaDeviceMemoryBlock*)#1}> >(VmaDeviceMemoryBlock**, VmaDeviceMemoryBlock**, long,
   __gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::{lambda(VmaDeviceMemoryBlock*,
   VmaDeviceMemoryBlock*)#1}>) */

void std::
     __introsort_loop<VmaDeviceMemoryBlock**,long,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
               (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long local_48;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0x80 < lVar4) {
    if (param_3 != 0) {
      puVar1 = param_1 + 1;
      puVar10 = param_2;
      local_48 = param_3;
      do {
        local_48 = local_48 + -1;
        puVar9 = param_1 + (lVar4 >> 4);
        puVar2 = (undefined8 *)*puVar9;
        uVar5 = (**(code **)(**(long **)param_1[1] + 0x30))();
        uVar6 = (**(code **)(*(long *)*puVar2 + 0x30))();
        puVar2 = (undefined8 *)puVar10[-1];
        param_2 = puVar1;
        puVar7 = puVar10;
        if (uVar5 < uVar6) {
          uVar5 = (**(code **)(**(long **)*puVar9 + 0x30))();
          uVar6 = (**(code **)(*(long *)*puVar2 + 0x30))();
          if (uVar5 < uVar6) {
LAB_001012ba:
            uVar3 = *param_1;
            *param_1 = *puVar9;
            *puVar9 = uVar3;
            puVar9 = (undefined8 *)*param_1;
          }
          else {
            puVar9 = (undefined8 *)puVar10[-1];
            uVar5 = (**(code **)(**(long **)param_1[1] + 0x30))();
            uVar6 = (**(code **)(*(long *)*puVar9 + 0x30))();
            if (uVar5 < uVar6) {
LAB_0010145f:
              uVar3 = *param_1;
              *param_1 = puVar10[-1];
              puVar10[-1] = uVar3;
              puVar9 = (undefined8 *)*param_1;
            }
            else {
              uVar3 = *param_1;
              puVar9 = (undefined8 *)param_1[1];
              *param_1 = param_1[1];
              param_1[1] = uVar3;
            }
          }
        }
        else {
          uVar5 = (**(code **)(**(long **)param_1[1] + 0x30))();
          uVar6 = (**(code **)(*(long *)*puVar2 + 0x30))();
          if (uVar6 <= uVar5) {
            puVar2 = (undefined8 *)puVar10[-1];
            uVar5 = (**(code **)(**(long **)*puVar9 + 0x30))();
            uVar6 = (**(code **)(*(long *)*puVar2 + 0x30))();
            if (uVar5 < uVar6) goto LAB_0010145f;
            goto LAB_001012ba;
          }
          uVar3 = *param_1;
          puVar9 = (undefined8 *)param_1[1];
          *param_1 = param_1[1];
          param_1[1] = uVar3;
        }
        while( true ) {
          while( true ) {
            uVar5 = (**(code **)(**(long **)*param_2 + 0x30))();
            uVar6 = (**(code **)(*(long *)*puVar9 + 0x30))();
            if (uVar6 <= uVar5) break;
            puVar9 = (undefined8 *)*param_1;
            param_2 = param_2 + 1;
          }
          do {
            puVar9 = (undefined8 *)puVar7[-1];
            puVar7 = puVar7 + -1;
            uVar5 = (**(code **)(**(long **)*param_1 + 0x30))();
            uVar6 = (**(code **)(*(long *)*puVar9 + 0x30))();
          } while (uVar5 < uVar6);
          if (puVar7 <= param_2) break;
          uVar3 = *param_2;
          *param_2 = *puVar7;
          *puVar7 = uVar3;
          puVar9 = (undefined8 *)*param_1;
          param_2 = param_2 + 1;
        }
        __introsort_loop<VmaDeviceMemoryBlock**,long,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
                  (param_2,puVar10,local_48);
        lVar4 = (long)param_2 - (long)param_1;
        if (lVar4 < 0x81) {
          return;
        }
        puVar10 = param_2;
      } while (local_48 != 0);
    }
    for (lVar8 = (lVar4 >> 3) + -2 >> 1;
        __adjust_heap<VmaDeviceMemoryBlock**,long,VmaDeviceMemoryBlock*,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
                  (param_1,lVar8,lVar4 >> 3,param_1[lVar8]), lVar8 != 0; lVar8 = lVar8 + -1) {
    }
    do {
      param_2 = param_2 + -1;
      uVar3 = *param_2;
      *param_2 = *param_1;
      __adjust_heap<VmaDeviceMemoryBlock**,long,VmaDeviceMemoryBlock*,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
                (param_1,0,(long)param_2 - (long)param_1 >> 3,uVar3);
    } while (8 < (long)param_2 - (long)param_1);
  }
  return;
}



/* VmaBufferImageUsage::VmaBufferImageUsage(VkBufferCreateInfo const&, bool) */

void __thiscall
VmaBufferImageUsage::VmaBufferImageUsage
          (VmaBufferImageUsage *this,VkBufferCreateInfo *param_1,bool param_2)

{
  int *piVar1;
  
  if (param_2) {
    for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 2)) {
      if (*piVar1 == 0x3ba1f5f6) {
        *(undefined8 *)this = *(undefined8 *)(piVar1 + 4);
        return;
      }
    }
  }
  *(ulong *)this = (ulong)*(uint *)(param_1 + 0x20);
  return;
}



/* VmaBufferImageUsage::VmaBufferImageUsage(VkImageCreateInfo const&) */

void __thiscall
VmaBufferImageUsage::VmaBufferImageUsage(VmaBufferImageUsage *this,VkImageCreateInfo *param_1)

{
  *(ulong *)this = (ulong)*(uint *)(param_1 + 0x38);
  return;
}



/* VmaJsonWriter::VmaJsonWriter(VkAllocationCallbacks const*, VmaStringBuilder&) */

void __thiscall
VmaJsonWriter::VmaJsonWriter
          (VmaJsonWriter *this,VkAllocationCallbacks *param_1,VmaStringBuilder *param_2)

{
  *(VmaStringBuilder **)this = param_2;
  *(VkAllocationCallbacks **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x28] = (VmaJsonWriter)0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  return;
}



/* VmaJsonWriter::~VmaJsonWriter() */

void __thiscall VmaJsonWriter::~VmaJsonWriter(VmaJsonWriter *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  if ((puVar1 != (undefined8 *)0x0) && ((code *)puVar1[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010154d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[3])(*puVar1);
    return;
  }
  free(*(void **)(this + 0x10));
  return;
}



/* VmaDedicatedAllocationList::~VmaDedicatedAllocationList() */

void __thiscall
VmaDedicatedAllocationList::~VmaDedicatedAllocationList(VmaDedicatedAllocationList *this)

{
  return;
}



/* VmaDedicatedAllocationList::Validate() */

ulong __thiscall VmaDedicatedAllocationList::Validate(VmaDedicatedAllocationList *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  pthread_rwlock_t *__rwlock;
  undefined7 uVar6;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x50);
  uVar6 = (undefined7)((ulong)lVar1 >> 8);
  if (*this == (VmaDedicatedAllocationList)0x0) {
    lVar3 = *(long *)(this + 0x40);
    __rwlock = (pthread_rwlock_t *)0x0;
    if (lVar3 == 0) {
      uVar5 = CONCAT71(uVar6,lVar1 == 0);
      goto LAB_001015d1;
    }
LAB_001015ac:
    lVar4 = 0;
    do {
      lVar3 = *(long *)(lVar3 + 0x20);
      lVar4 = lVar4 + 1;
    } while (lVar3 != 0);
    uVar5 = CONCAT71(uVar6,lVar4 == lVar1);
    if (__rwlock == (pthread_rwlock_t *)0x0) goto LAB_001015d1;
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 8);
    do {
      iVar2 = pthread_rwlock_rdlock(__rwlock);
    } while (iVar2 == 0xb);
    if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    lVar3 = *(long *)(this + 0x40);
    if (lVar3 != 0) goto LAB_001015ac;
    uVar5 = CONCAT71(uVar6,lVar1 == 0);
  }
  pthread_rwlock_unlock(__rwlock);
LAB_001015d1:
  return uVar5 & 0xffffffff;
}



/* VmaDedicatedAllocationList::AddDetailedStatistics(VmaDetailedStatistics&) */

void __thiscall
VmaDedicatedAllocationList::AddDetailedStatistics
          (VmaDedicatedAllocationList *this,VmaDetailedStatistics *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(this + 0x40);
  if (lVar5 != 0) {
    iVar1 = *(int *)param_1;
    lVar7 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_1 + 0x28);
    iVar3 = iVar1;
    do {
      iVar3 = iVar3 + 1;
      uVar2 = *(ulong *)(lVar5 + 0x30);
      lVar5 = *(long *)(lVar5 + 0x20);
      if (uVar2 < uVar6) {
        uVar6 = uVar2;
      }
      if (uVar4 < uVar2) {
        uVar4 = uVar2;
      }
      lVar7 = lVar7 + uVar2;
      lVar8 = lVar8 + uVar2;
    } while (lVar5 != 0);
    *(int *)param_1 = iVar3;
    *(ulong *)(param_1 + 0x20) = uVar6;
    *(ulong *)(param_1 + 0x28) = uVar4;
    *(int *)(param_1 + 4) = iVar3 + (*(int *)(param_1 + 4) - iVar1);
    *(long *)(param_1 + 8) = lVar7;
    *(long *)(param_1 + 0x10) = lVar8;
  }
  return;
}



/* VmaDedicatedAllocationList::AddStatistics(VmaStatistics&) */

void __thiscall
VmaDedicatedAllocationList::AddStatistics(VmaDedicatedAllocationList *this,VmaStatistics *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  pthread_rwlock_t *__rwlock;
  long lVar4;
  long lVar5;
  
  if (*this == (VmaDedicatedAllocationList)0x0) {
    __rwlock = (pthread_rwlock_t *)0x0;
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 8);
    do {
      iVar2 = pthread_rwlock_rdlock(__rwlock);
    } while (iVar2 == 0xb);
    if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
  }
  lVar3 = *(long *)(this + 0x40);
  *(ulong *)param_1 =
       CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + *(int *)(this + 0x50),
                (int)*(undefined8 *)param_1 + *(int *)(this + 0x50));
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
    do {
      plVar1 = (long *)(lVar3 + 0x30);
      lVar3 = *(long *)(lVar3 + 0x20);
      lVar4 = lVar4 + *plVar1;
      lVar5 = lVar5 + *plVar1;
    } while (lVar3 != 0);
    *(long *)(param_1 + 8) = lVar4;
    *(long *)(param_1 + 0x10) = lVar5;
  }
  if (__rwlock != (pthread_rwlock_t *)0x0) {
    pthread_rwlock_unlock(__rwlock);
    return;
  }
  return;
}



/* VmaDedicatedAllocationList::IsEmpty() */

ulong __thiscall VmaDedicatedAllocationList::IsEmpty(VmaDedicatedAllocationList *this)

{
  long lVar1;
  int iVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulong)this >> 8);
  if (*this == (VmaDedicatedAllocationList)0x0) {
    return CONCAT71(uVar3,*(long *)(this + 0x50) == 0) & 0xffffffff;
  }
  do {
    iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 8));
  } while (iVar2 == 0xb);
  if (iVar2 != 0x23) {
    lVar1 = *(long *)(this + 0x50);
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 8));
    return CONCAT71(uVar3,lVar1 == 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* VmaDedicatedAllocationList::Register(VmaAllocation_T*) */

void __thiscall
VmaDedicatedAllocationList::Register(VmaDedicatedAllocationList *this,VmaAllocation_T *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (*this == (VmaDedicatedAllocationList)0x0) {
    lVar1 = *(long *)(this + 0x50);
    if (lVar1 != 0) {
      lVar3 = *(long *)(this + 0x48);
      *(long *)(param_1 + 0x18) = lVar3;
      *(VmaAllocation_T **)(lVar3 + 0x20) = param_1;
      *(VmaAllocation_T **)(this + 0x48) = param_1;
      *(long *)(this + 0x50) = lVar1 + 1;
      return;
    }
    *(undefined8 *)(this + 0x50) = 1;
    *(VmaAllocation_T **)(this + 0x40) = param_1;
    *(VmaAllocation_T **)(this + 0x48) = param_1;
    return;
  }
  iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 8));
  if (iVar2 != 0x23) {
    if (*(long *)(this + 0x50) == 0) {
      *(VmaAllocation_T **)(this + 0x40) = param_1;
      lVar3 = 1;
    }
    else {
      lVar1 = *(long *)(this + 0x48);
      lVar3 = *(long *)(this + 0x50) + 1;
      *(long *)(param_1 + 0x18) = lVar1;
      *(VmaAllocation_T **)(lVar1 + 0x20) = param_1;
    }
    *(VmaAllocation_T **)(this + 0x48) = param_1;
    *(long *)(this + 0x50) = lVar3;
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* VmaDedicatedAllocationList::Unregister(VmaAllocation_T*) */

void __thiscall
VmaDedicatedAllocationList::Unregister(VmaDedicatedAllocationList *this,VmaAllocation_T *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  pthread_rwlock_t *__rwlock;
  
  if (*this == (VmaDedicatedAllocationList)0x0) {
    lVar1 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    __rwlock = (pthread_rwlock_t *)0x0;
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 8);
    iVar4 = pthread_rwlock_wrlock(__rwlock);
    if (iVar4 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    lVar1 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  if (lVar1 == 0) {
    *(long *)(this + 0x40) = lVar2;
    uVar3 = 0;
  }
  else {
    *(long *)(lVar1 + 0x20) = lVar2;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  if (lVar2 == 0) {
    *(undefined8 *)(this + 0x48) = uVar3;
  }
  else {
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
  }
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  *(long *)(this + 0x50) = *(long *)(this + 0x50) + -1;
  if (__rwlock != (pthread_rwlock_t *)0x0) {
    pthread_rwlock_unlock(__rwlock);
    return;
  }
  return;
}



/* VmaBlockMetadata::VmaBlockMetadata(VkAllocationCallbacks const*, unsigned long, bool) */

void __thiscall
VmaBlockMetadata::VmaBlockMetadata
          (VmaBlockMetadata *this,VkAllocationCallbacks *param_1,ulong param_2,bool param_3)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)this = &DAT_001150e0;
  *(VkAllocationCallbacks **)(this + 0x10) = param_1;
  *(ulong *)(this + 0x18) = param_2;
  this[0x20] = (VmaBlockMetadata)param_3;
  return;
}



/* VmaBlockMetadata::DebugLogAllocation(unsigned long, unsigned long, void*) const */

void VmaBlockMetadata::DebugLogAllocation(ulong param_1,ulong param_2,void *param_3)

{
  return;
}



/* VmaBlockBufferImageGranularity::VmaBlockBufferImageGranularity(unsigned long) */

void __thiscall
VmaBlockBufferImageGranularity::VmaBlockBufferImageGranularity
          (VmaBlockBufferImageGranularity *this,ulong param_1)

{
  *(ulong *)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* VmaBlockBufferImageGranularity::~VmaBlockBufferImageGranularity() */

void __thiscall
VmaBlockBufferImageGranularity::~VmaBlockBufferImageGranularity
          (VmaBlockBufferImageGranularity *this)

{
  return;
}



/* VmaBlockBufferImageGranularity::Init(VkAllocationCallbacks const*, unsigned long) */

void __thiscall
VmaBlockBufferImageGranularity::Init
          (VmaBlockBufferImageGranularity *this,VkAllocationCallbacks *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *__s;
  size_t __n;
  
  uVar2 = *(ulong *)this;
  if (uVar2 < 0x101) {
    return;
  }
  uVar1 = (uVar2 - 1) + param_2;
  uVar3 = uVar1 / uVar2;
  *(int *)(this + 8) = (int)uVar3;
  __n = (uVar3 & 0xffffffff) * 4;
  if ((param_1 == (VkAllocationCallbacks *)0x0) || (*(code **)(param_1 + 8) == (code *)0x0)) {
    __s = (void *)aligned_alloc(2,__n,uVar1 % uVar2);
  }
  else {
    __s = (void *)(**(code **)(param_1 + 8))(*(undefined8 *)param_1,__n,2,1);
    __n = (ulong)*(uint *)(this + 8) << 2;
  }
  *(void **)(this + 0x10) = __s;
  memset(__s,0,__n);
  return;
}



/* VmaBlockBufferImageGranularity::Destroy(VkAllocationCallbacks const*) */

void __thiscall
VmaBlockBufferImageGranularity::Destroy
          (VmaBlockBufferImageGranularity *this,VkAllocationCallbacks *param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(this + 0x10);
  if (__ptr != (void *)0x0) {
    if ((param_1 == (VkAllocationCallbacks *)0x0) || (*(code **)(param_1 + 0x18) == (code *)0x0)) {
      free(__ptr);
    }
    else {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)param_1,__ptr);
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}



/* VmaBlockBufferImageGranularity::RoundupAllocRequest(VmaSuballocationType, unsigned long&,
   unsigned long&) const */

void __thiscall
VmaBlockBufferImageGranularity::RoundupAllocRequest
          (VmaBlockBufferImageGranularity *this,uint param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)this;
  if (((uVar1 - 2 < 0xff) && (param_2 < 6)) && ((0x2aUL >> ((ulong)param_2 & 0x3f) & 1) != 0)) {
    uVar2 = *param_4;
    if (*param_4 < uVar1) {
      uVar2 = uVar1;
    }
    *param_4 = uVar2;
    *param_3 = -*(long *)this & *(long *)this + -1 + *param_3;
  }
  return;
}



/* VmaBlockBufferImageGranularity::CheckConflictAndAlignUp(unsigned long&, unsigned long, unsigned
   long, unsigned long, VmaSuballocationType) const */

ulong __thiscall
VmaBlockBufferImageGranularity::CheckConflictAndAlignUp
          (VmaBlockBufferImageGranularity *this,ulong *param_1,long param_2,long param_3,
          ulong param_4,uint param_6)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  byte bStack_34;
  
  uVar7 = *(ulong *)this;
  if (uVar7 < 0x101) {
    return 0;
  }
  uVar3 = *param_1;
  uVar9 = -uVar7;
  lVar5 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  lVar4 = *(long *)(this + 0x10);
  bStack_34 = 0x3f - ((byte)lVar5 ^ 0x3f);
  uVar11 = (uVar3 & uVar9) >> (bStack_34 & 0x3f);
  iVar12 = (int)uVar11;
  pbVar1 = (byte *)(lVar4 + (uVar11 & 0xffffffff) * 4);
  if (*(short *)(pbVar1 + 2) == 0) goto switchD_00101b98_caseD_0;
  bVar2 = *pbVar1;
  uVar6 = (uint)bVar2;
  uVar10 = param_6;
  if ((int)(uint)bVar2 <= (int)param_6) {
    uVar6 = param_6;
    uVar10 = (uint)bVar2;
  }
  switch(uVar10) {
  case 0:
  case 5:
    break;
  default:
switchD_00101b98_caseD_1:
    uVar9 = (uVar3 - 1) + uVar7 & uVar9;
    *param_1 = uVar9;
    if ((param_2 - param_3) + uVar9 <= param_4) {
      uVar7 = *(ulong *)this;
      iVar12 = iVar12 + 1;
      if (uVar7 != 0) {
        uVar9 = (uVar9 - 1) + param_2 & -uVar7;
        lVar5 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        bStack_34 = 0x3f - ((byte)lVar5 ^ 0x3f);
        goto LAB_00101b16;
      }
      iVar8 = 0;
      uVar9 = 0;
      goto LAB_00101b23;
    }
    goto switchD_00101b60_caseD_1;
  case 2:
    if ((uVar6 - 3 & 0xfffffffd) == 0) goto switchD_00101b98_caseD_1;
    break;
  case 3:
    if (uVar6 - 3 < 3) goto switchD_00101b98_caseD_1;
    break;
  case 4:
    if (uVar6 == 5) goto switchD_00101b98_caseD_1;
  }
switchD_00101b98_caseD_0:
  uVar9 = (uVar3 - 1) + param_2 & uVar9;
LAB_00101b16:
  uVar9 = uVar9 >> (bStack_34 & 0x3f);
  iVar8 = (int)uVar9;
LAB_00101b23:
  if ((iVar12 == iVar8) ||
     (pbVar1 = (byte *)(lVar4 + (uVar9 & 0xffffffff) * 4), *(short *)(pbVar1 + 2) == 0)) {
switchD_00101b60_caseD_0:
    uVar7 = 0;
  }
  else {
    bVar2 = *pbVar1;
    uVar7 = (ulong)bVar2;
    if ((int)(uint)bVar2 <= (int)param_6) {
      uVar7 = (ulong)param_6;
      param_6 = (uint)bVar2;
    }
    iVar12 = (int)uVar7;
    switch(param_6) {
    case 0:
    case 5:
      goto switchD_00101b60_caseD_0;
    default:
switchD_00101b60_caseD_1:
      uVar7 = 1;
      break;
    case 2:
      uVar6 = iVar12 - 3U & 0xfffffffd;
      uVar7 = (ulong)CONCAT31((int3)(uVar6 >> 8),uVar6 == 0);
      break;
    case 3:
      uVar7 = (ulong)CONCAT31((int3)(iVar12 - 3U >> 8),iVar12 - 3U < 3);
      break;
    case 4:
      uVar7 = CONCAT71((int7)(uVar7 >> 8),iVar12 == 5);
    }
  }
  return uVar7;
}



/* VmaBlockBufferImageGranularity::AllocPages(unsigned char, unsigned long, unsigned long) */

void __thiscall
VmaBlockBufferImageGranularity::AllocPages
          (VmaBlockBufferImageGranularity *this,uchar param_1,ulong param_2,ulong param_3)

{
  uchar *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)this;
  if (0x100 < uVar4) {
    lVar2 = *(long *)(this + 0x10);
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    bVar5 = 0x3f - ((byte)lVar3 ^ 0x3f);
    uVar6 = (param_2 & -uVar4) >> (bVar5 & 0x3f);
    puVar1 = (uchar *)(lVar2 + (uVar6 & 0xffffffff) * 4);
    if ((*(short *)(puVar1 + 2) == 0) || (*puVar1 == '\0')) {
      *puVar1 = param_1;
    }
    *(short *)(puVar1 + 2) = *(short *)(puVar1 + 2) + 1;
    uVar4 = ((param_2 - 1) + param_3 & -uVar4) >> (bVar5 & 0x3f);
    if ((int)uVar6 != (int)uVar4) {
      puVar1 = (uchar *)(lVar2 + (uVar4 & 0xffffffff) * 4);
      if ((*(short *)(puVar1 + 2) == 0) || (*puVar1 == '\0')) {
        *puVar1 = param_1;
      }
      *(short *)(puVar1 + 2) = *(short *)(puVar1 + 2) + 1;
    }
  }
  return;
}



/* VmaBlockBufferImageGranularity::FreePages(unsigned long, unsigned long) */

void __thiscall
VmaBlockBufferImageGranularity::FreePages
          (VmaBlockBufferImageGranularity *this,ulong param_1,ulong param_2)

{
  short *psVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  
  uVar5 = *(ulong *)this;
  if (0x100 < uVar5) {
    lVar3 = *(long *)(this + 0x10);
    lVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    bVar6 = 0x3f - ((byte)lVar4 ^ 0x3f);
    uVar7 = (param_1 & -uVar5) >> (bVar6 & 0x3f);
    puVar2 = (undefined1 *)(lVar3 + (uVar7 & 0xffffffff) * 4);
    psVar1 = (short *)(puVar2 + 2);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 == 0) {
      *puVar2 = 0;
    }
    uVar5 = ((param_1 - 1) + param_2 & -uVar5) >> (bVar6 & 0x3f);
    if ((int)uVar7 != (int)uVar5) {
      puVar2 = (undefined1 *)(lVar3 + (uVar5 & 0xffffffff) * 4);
      psVar1 = (short *)(puVar2 + 2);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 == 0) {
        *puVar2 = 0;
      }
    }
  }
  return;
}



/* VmaBlockBufferImageGranularity::Clear() */

void __thiscall VmaBlockBufferImageGranularity::Clear(VmaBlockBufferImageGranularity *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    memset(*(void **)(this + 0x10),0,(ulong)*(uint *)(this + 8) << 2);
    return;
  }
  return;
}



/* VmaBlockBufferImageGranularity::StartValidation(VkAllocationCallbacks const*, bool) const */

undefined1  [16] __thiscall
VmaBlockBufferImageGranularity::StartValidation
          (VmaBlockBufferImageGranularity *this,VkAllocationCallbacks *param_1,bool param_2)

{
  void *pvVar1;
  size_t __n;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((!param_2) && (0x100 < *(ulong *)this)) {
    __n = (ulong)*(uint *)(this + 8) * 2;
    if ((param_1 == (VkAllocationCallbacks *)0x0) || (*(code **)(param_1 + 8) == (code *)0x0)) {
      pvVar1 = (void *)aligned_alloc(2);
    }
    else {
      pvVar1 = (void *)(**(code **)(param_1 + 8))(*(undefined8 *)param_1,__n,2,1);
      __n = (ulong)*(uint *)(this + 8) * 2;
    }
    pvVar1 = memset(pvVar1,0,__n);
    auVar3._8_8_ = pvVar1;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* VmaBlockBufferImageGranularity::Validate(VmaBlockBufferImageGranularity::ValidationContext&,
   unsigned long, unsigned long) const */

undefined8 __thiscall
VmaBlockBufferImageGranularity::Validate
          (VmaBlockBufferImageGranularity *this,ValidationContext *param_1,ulong param_2,
          ulong param_3)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = *(ulong *)this;
  if (uVar5 < 0x101) {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar4 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  lVar3 = *(long *)(this + 0x10);
  bVar7 = 0x3f - ((byte)lVar4 ^ 0x3f);
  uVar6 = 0;
  uVar9 = (param_2 & -uVar5) >> (bVar7 & 0x3f);
  uVar8 = uVar9 & 0xffffffff;
  psVar1 = (short *)(lVar2 + uVar8 * 2);
  *psVar1 = *psVar1 + 1;
  if (*(short *)(lVar3 + 2 + uVar8 * 4) != 0) {
    uVar5 = ((param_2 - 1) + param_3 & -uVar5) >> (bVar7 & 0x3f);
    if ((int)uVar9 == (int)uVar5) {
      return 1;
    }
    uVar5 = uVar5 & 0xffffffff;
    psVar1 = (short *)(lVar2 + uVar5 * 2);
    *psVar1 = *psVar1 + 1;
    uVar6 = CONCAT71((int7)(uVar5 >> 8),*(short *)(lVar3 + 2 + uVar5 * 4) != 0);
  }
  return uVar6;
}



/* VmaBlockBufferImageGranularity::FinishValidation(VmaBlockBufferImageGranularity::ValidationContext&)
   const */

undefined8 __thiscall
VmaBlockBufferImageGranularity::FinishValidation
          (VmaBlockBufferImageGranularity *this,ValidationContext *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  ulong uVar2;
  
  if (*(ulong *)this < 0x101) {
    return 1;
  }
  __ptr = *(void **)(param_1 + 8);
  if (*(uint *)(this + 8) == 0) {
    if (__ptr == (void *)0x0) goto LAB_00101f2d;
  }
  else {
    uVar2 = 0;
    do {
      if (*(short *)((long)__ptr + uVar2 * 2) != *(short *)(*(long *)(this + 0x10) + 2 + uVar2 * 4))
      {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (*(uint *)(this + 8) != uVar2);
  }
  puVar1 = *(undefined8 **)param_1;
  if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
    free(__ptr);
  }
  else {
    (*(code *)puVar1[3])(*puVar1);
  }
LAB_00101f2d:
  *(undefined8 *)(param_1 + 8) = 0;
  return 1;
}



/* VmaBlockBufferImageGranularity::OffsetToPageIndex(unsigned long) const */

ulong __thiscall
VmaBlockBufferImageGranularity::OffsetToPageIndex
          (VmaBlockBufferImageGranularity *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)this;
  uVar3 = 0;
  if (uVar1 != 0) {
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = param_1 >> (0x3f - ((byte)lVar2 ^ 0x3f) & 0x3f);
  }
  return uVar3 & 0xffffffff;
}



/* VmaBlockBufferImageGranularity::AllocPage(VmaBlockBufferImageGranularity::RegionInfo&, unsigned
   char) */

void __thiscall
VmaBlockBufferImageGranularity::AllocPage
          (VmaBlockBufferImageGranularity *this,RegionInfo *param_1,uchar param_2)

{
  if ((*(short *)(param_1 + 2) == 0) || (*param_1 == (RegionInfo)0x0)) {
    *param_1 = (RegionInfo)param_2;
  }
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 1;
  return;
}



/* VmaBlockMetadata_Linear::VmaBlockMetadata_Linear(VkAllocationCallbacks const*, unsigned long,
   bool) */

void __thiscall
VmaBlockMetadata_Linear::VmaBlockMetadata_Linear
          (VmaBlockMetadata_Linear *this,VkAllocationCallbacks *param_1,ulong param_2,bool param_3)

{
  *(undefined8 *)(this + 8) = 0;
  *(VkAllocationCallbacks **)(this + 0x10) = param_1;
  *(ulong *)(this + 0x18) = param_2;
  this[0x20] = (VmaBlockMetadata_Linear)param_3;
  *(undefined ***)this = &PTR__VmaBlockMetadata_Linear_001151b0;
  *(undefined8 *)(this + 0x28) = 0;
  *(VkAllocationCallbacks **)(this + 0x30) = param_1;
  *(undefined8 *)(this + 0x38) = 0;
  *(VkAllocationCallbacks **)(this + 0x50) = param_1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  return;
}



/* VmaBlockMetadata_Linear::FindSuballocation(unsigned long) const */

ulong * __thiscall
VmaBlockMetadata_Linear::FindSuballocation(VmaBlockMetadata_Linear *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  VmaBlockMetadata_Linear *pVVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  VmaBlockMetadata_Linear *pVVar8;
  long lVar9;
  
  if (*(int *)(this + 0x70) == 0) {
    pVVar3 = this + 0x30;
    pVVar8 = this + 0x50;
  }
  else {
    pVVar3 = this + 0x50;
    pVVar8 = this + 0x30;
  }
  uVar5 = 0;
  lVar2 = *(long *)(pVVar3 + 8);
  lVar9 = *(long *)(pVVar3 + 0x10) * 0x20;
  lVar1 = lVar2 + *(long *)(this + 0x78) * 0x20;
  uVar6 = lVar9 + *(long *)(this + 0x78) * -0x20 >> 5;
  while (uVar7 = uVar6, uVar5 < uVar7) {
    uVar6 = (uVar7 - uVar5 >> 1) + uVar5;
    if (*(ulong *)(lVar1 + uVar6 * 0x20) < param_1) {
      uVar5 = uVar6 + 1;
      uVar6 = uVar7;
    }
  }
  puVar4 = (ulong *)(lVar1 + uVar5 * 0x20);
  if (((ulong *)(lVar2 + lVar9) == puVar4) || (param_1 != *puVar4)) {
    if (*(int *)(this + 0x74) != 0) {
      lVar1 = *(long *)(pVVar8 + 8);
      uVar5 = 0;
      uVar6 = *(long *)(pVVar8 + 0x10) * 0x20 >> 5;
      if (*(int *)(this + 0x74) == 1) {
        while (uVar7 = uVar6, uVar5 < uVar7) {
          uVar6 = (uVar7 - uVar5 >> 1) + uVar5;
          if (*(ulong *)(lVar1 + uVar6 * 0x20) < param_1) {
            uVar5 = uVar6 + 1;
            uVar6 = uVar7;
          }
        }
      }
      else if (uVar6 != 0) {
        do {
          uVar7 = (uVar6 - uVar5 >> 1) + uVar5;
          if (param_1 < *(ulong *)(lVar1 + uVar7 * 0x20)) {
            uVar5 = uVar7 + 1;
            uVar7 = uVar6;
          }
          uVar6 = uVar7;
        } while (uVar5 < uVar7);
      }
      puVar4 = (ulong *)(lVar1 + uVar5 * 0x20);
      if (((ulong *)(lVar1 + *(long *)(pVVar8 + 0x10) * 0x20) != puVar4) && (param_1 == *puVar4)) {
        return puVar4;
      }
    }
    puVar4 = (ulong *)(lVar2 + -0x20 + lVar9);
  }
  return puVar4;
}



/* VmaBlockMetadata_Linear::GetAllocationInfo(VmaAllocHandle_T*, VmaVirtualAllocationInfo&) */

void __thiscall
VmaBlockMetadata_Linear::GetAllocationInfo
          (VmaBlockMetadata_Linear *this,VmaAllocHandle_T *param_1,VmaVirtualAllocationInfo *param_2
          )

{
  undefined8 uVar1;
  long lVar2;
  
  *(VmaAllocHandle_T **)param_2 = param_1 + -1;
  lVar2 = FindSuballocation(this,(ulong)(param_1 + -1));
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  return;
}



/* VmaBlockMetadata_Linear::GetAllocationUserData(VmaAllocHandle_T*) const */

undefined8 __thiscall
VmaBlockMetadata_Linear::GetAllocationUserData
          (VmaBlockMetadata_Linear *this,VmaAllocHandle_T *param_1)

{
  long lVar1;
  
  lVar1 = FindSuballocation(this,(ulong)(param_1 + -1));
  return *(undefined8 *)(lVar1 + 0x10);
}



/* VmaBlockMetadata_Linear::SetAllocationUserData(VmaAllocHandle_T*, void*) */

void __thiscall
VmaBlockMetadata_Linear::SetAllocationUserData
          (VmaBlockMetadata_Linear *this,VmaAllocHandle_T *param_1,void *param_2)

{
  long lVar1;
  
  lVar1 = FindSuballocation(this,(ulong)(param_1 + -1));
  *(void **)(lVar1 + 0x10) = param_2;
  return;
}



/* VmaBlockMetadata_Linear::ShouldCompact1st() const */

ulong __thiscall VmaBlockMetadata_Linear::ShouldCompact1st(VmaBlockMetadata_Linear *this)

{
  VmaBlockMetadata_Linear *pVVar1;
  long lVar2;
  ulong uVar3;
  
  pVVar1 = this + 0x30;
  if (*(int *)(this + 0x70) != 0) {
    pVVar1 = this + 0x50;
  }
  uVar3 = 0;
  if (0x20 < *(ulong *)(pVVar1 + 0x10)) {
    lVar2 = *(long *)(this + 0x80) + *(long *)(this + 0x78);
    uVar3 = CONCAT71((int7)((ulong)lVar2 >> 8),
                     (*(ulong *)(pVVar1 + 0x10) - lVar2) * 3 <= (ulong)(lVar2 * 2));
  }
  return uVar3 & 0xffffffff;
}



/* VmaBlockMetadata_Linear::CreateAllocationRequest_LowerAddress(unsigned long, unsigned long,
   VmaSuballocationType, unsigned int, VmaAllocationRequest*) */

undefined8 __thiscall
VmaBlockMetadata_Linear::CreateAllocationRequest_LowerAddress
          (VmaBlockMetadata_Linear *this,ulong param_1,ulong param_2,int param_4,undefined8 param_5,
          long *param_6)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  VmaBlockMetadata_Linear *pVVar14;
  VmaBlockMetadata_Linear *pVVar15;
  bool bVar16;
  
  uVar3 = *(ulong *)(this + 0x18);
  if (*(int *)(this + 0x70) == 0) {
    pVVar14 = this + 0x30;
    pVVar15 = this + 0x50;
  }
  else {
    pVVar14 = this + 0x50;
    pVVar15 = this + 0x30;
  }
  uVar2 = *(uint *)(this + 0x74);
  if ((uVar2 & 0xfffffffd) == 0) {
    uVar13 = *(ulong *)(pVVar14 + 0x10);
    uVar10 = param_2 - 1 & -param_2;
    if (uVar13 != 0) {
      plVar1 = (long *)(*(long *)(pVVar14 + 8) + -0x20 + uVar13 * 0x20);
      uVar10 = *plVar1 + (param_2 - 1) + plVar1[1] & -param_2;
      if ((1 < uVar3) && (param_2 != uVar3)) {
        lVar11 = *(long *)(pVVar14 + 8) + uVar13 * 0x20;
        uVar9 = uVar13;
LAB_001022e0:
        if ((((*(long *)(lVar11 + -0x20) + *(long *)(lVar11 + -0x18)) - 1U ^ uVar10) & -uVar3) == 0)
        {
          iVar6 = *(int *)(lVar11 + -8);
          iVar12 = iVar6;
          iVar4 = param_4;
          if (iVar6 <= param_4) {
            iVar12 = param_4;
            iVar4 = iVar6;
          }
          switch(iVar4) {
          case 0:
          case 5:
            goto switchD_00102316_caseD_0;
          default:
            goto switchD_00102316_caseD_1;
          case 2:
            if ((iVar12 - 3U & 0xfffffffd) == 0) goto switchD_00102316_caseD_1;
            goto switchD_00102316_caseD_0;
          case 3:
            bVar16 = iVar12 - 3U < 3;
            goto LAB_001024ef;
          case 4:
            bVar16 = iVar12 == 5;
LAB_001024ef:
            if (!bVar16) goto LAB_00102328;
switchD_00102316_caseD_1:
            uVar10 = (uVar10 - 1) + uVar3 & -uVar3;
          }
        }
      }
    }
LAB_00102340:
    uVar9 = uVar10 + param_1;
    if (uVar2 == 2) {
      lVar11 = *(long *)(pVVar15 + 0x10);
      if (*(ulong *)(*(long *)(pVVar15 + 8) + -0x20 + lVar11 * 0x20) < uVar9) {
        return 0;
      }
      if ((param_1 % uVar3 != 0) || (uVar10 % uVar3 != 0)) {
        lVar8 = *(long *)(pVVar15 + 8) + lVar11 * 0x20;
        while ((lVar11 != 0 && (((*(ulong *)(lVar8 + -0x20) ^ uVar9 - 1) & -uVar3) == 0))) {
          iVar6 = *(int *)(lVar8 + -8);
          iVar12 = param_4;
          if (param_4 <= iVar6) {
            iVar12 = iVar6;
            iVar6 = param_4;
          }
          switch(iVar6) {
          case 0:
          case 5:
            break;
          default:
            goto LAB_0010261c;
          case 2:
            if ((iVar12 - 3U & 0xfffffffd) == 0) {
              return 0;
            }
            break;
          case 3:
            bVar16 = iVar12 - 3U < 3;
            goto LAB_00102687;
          case 4:
            bVar16 = iVar12 == 5;
LAB_00102687:
            if (bVar16) {
              return 0;
            }
          }
          lVar11 = lVar11 + -1;
          lVar8 = lVar8 + -0x20;
        }
      }
    }
    else if (*(ulong *)(this + 8) < uVar9) goto LAB_0010238f;
    uVar5 = 3;
  }
  else {
    if (uVar2 != 1) {
      return 0;
    }
    uVar13 = *(ulong *)(pVVar14 + 0x10);
LAB_0010238f:
    lVar11 = *(long *)(pVVar15 + 0x10);
    uVar10 = param_2 - 1 & -param_2;
    if (lVar11 != 0) {
      plVar1 = (long *)(*(long *)(pVVar15 + 8) + -0x20 + lVar11 * 0x20);
      uVar10 = (param_2 - 1) + *plVar1 + plVar1[1] & -param_2;
      if ((1 < uVar3) && (param_2 != uVar3)) {
        lVar8 = *(long *)(pVVar15 + 8) + lVar11 * 0x20;
LAB_001023e8:
        if ((((*(long *)(lVar8 + -0x20) + *(long *)(lVar8 + -0x18)) - 1U ^ uVar10) & -uVar3) == 0) {
          iVar6 = *(int *)(lVar8 + -8);
          iVar12 = iVar6;
          iVar4 = param_4;
          if (iVar6 <= param_4) {
            iVar12 = param_4;
            iVar4 = iVar6;
          }
          switch(iVar4) {
          case 0:
          case 5:
            goto switchD_00102415_caseD_0;
          default:
            goto switchD_00102415_caseD_1;
          case 2:
            if ((iVar12 - 3U & 0xfffffffd) == 0) goto switchD_00102415_caseD_1;
            goto switchD_00102415_caseD_0;
          case 3:
            bVar16 = iVar12 - 3U < 3;
            goto LAB_00102656;
          case 4:
            bVar16 = iVar12 == 5;
LAB_00102656:
            if (!bVar16) goto LAB_001025c8;
switchD_00102415_caseD_1:
            uVar10 = (uVar10 - 1) + uVar3 & -uVar3;
          }
        }
      }
    }
LAB_00102440:
    uVar9 = *(ulong *)(this + 0x78);
    if (uVar9 == uVar13) {
      if (*(ulong *)(this + 8) < param_1 + uVar10) {
LAB_0010261c:
        return 0;
      }
    }
    else {
      if (uVar13 <= uVar9) {
        return 0;
      }
      if (*(ulong *)(*(long *)(pVVar14 + 8) + uVar9 * 0x20) < uVar10 + param_1) {
        return 0;
      }
      if ((param_1 % uVar3 != 0) || (uVar10 % uVar3 != 0)) {
        puVar7 = (ulong *)(*(long *)(pVVar14 + 8) + uVar9 * 0x20);
        do {
          if (((*puVar7 ^ (uVar10 - 1) + param_1) & -uVar3) != 0) break;
          iVar6 = (int)puVar7[3];
          iVar12 = param_4;
          if (param_4 <= iVar6) {
            iVar12 = iVar6;
            iVar6 = param_4;
          }
          switch(iVar6) {
          case 0:
          case 5:
            break;
          default:
            goto LAB_0010261c;
          case 2:
            if ((iVar12 - 3U & 0xfffffffd) == 0) {
              return 0;
            }
            break;
          case 3:
            bVar16 = iVar12 - 3U < 3;
            goto LAB_001025e7;
          case 4:
            bVar16 = iVar12 == 5;
LAB_001025e7:
            if (bVar16) {
              return 0;
            }
          }
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 4;
        } while (uVar9 != uVar13);
      }
    }
    uVar5 = 4;
  }
  *param_6 = uVar10 + 1;
  *(undefined4 *)(param_6 + 6) = uVar5;
  return 1;
switchD_00102316_caseD_0:
LAB_00102328:
  lVar11 = lVar11 + -0x20;
  uVar9 = uVar9 - 1;
  if (uVar9 == 0) goto LAB_00102340;
  goto LAB_001022e0;
switchD_00102415_caseD_0:
LAB_001025c8:
  lVar11 = lVar11 + -1;
  lVar8 = lVar8 + -0x20;
  if (lVar11 == 0) goto LAB_00102440;
  goto LAB_001023e8;
}



/* VmaBlockMetadata_Linear::CreateAllocationRequest_UpperAddress(unsigned long, unsigned long,
   VmaSuballocationType, unsigned int, VmaAllocationRequest*) */

undefined4 __thiscall
VmaBlockMetadata_Linear::CreateAllocationRequest_UpperAddress
          (VmaBlockMetadata_Linear *this,ulong param_1,ulong param_2,int param_4,undefined8 param_5,
          long *param_6)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  VmaBlockMetadata_Linear *pVVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  undefined4 uVar10;
  VmaBlockMetadata_Linear *pVVar11;
  long lVar12;
  
  if (*(int *)(this + 0x70) == 0) {
    pVVar6 = this + 0x30;
    pVVar11 = this + 0x50;
  }
  else {
    pVVar6 = this + 0x50;
    pVVar11 = this + 0x30;
  }
  bVar9 = *(int *)(this + 0x74) == 1 || *(ulong *)(this + 8) < param_1;
  uVar10 = CONCAT31((int3)((uint)*(int *)(this + 0x70) >> 8),bVar9);
  if (bVar9) {
    uVar10 = 0;
  }
  else {
    lVar7 = *(long *)(pVVar11 + 0x10);
    uVar1 = *(ulong *)(this + 0x18);
    if (lVar7 == 0) {
      uVar8 = *(ulong *)(this + 8) - param_1 & -param_2;
      if ((param_2 != uVar1) && (1 < uVar1)) {
LAB_001027ff:
        lVar7 = *(long *)(pVVar6 + 0x10);
joined_r0x00102970:
        if ((lVar7 != 0) &&
           (plVar5 = (long *)(*(long *)(pVVar6 + 8) + -0x20 + lVar7 * 0x20),
           uVar8 < (ulong)(plVar5[1] + *plVar5))) {
          return uVar10;
        }
        goto LAB_00102824;
      }
    }
    else {
      uVar8 = *(ulong *)(*(long *)(pVVar11 + 8) + -0x20 + lVar7 * 0x20);
      if (uVar8 < param_1) {
        return uVar10;
      }
      uVar8 = -param_2 & uVar8 - param_1;
      if ((param_2 != uVar1) && (1 < uVar1)) {
        lVar12 = *(long *)(pVVar11 + 8) + lVar7 * 0x20;
LAB_001027a8:
        if (((*(ulong *)(lVar12 + -0x20) ^ (uVar8 - 1) + param_1) & -uVar1) == 0) {
          iVar3 = *(int *)(lVar12 + -8);
          iVar4 = iVar3;
          iVar2 = param_4;
          if (iVar3 <= param_4) {
            iVar4 = param_4;
            iVar2 = iVar3;
          }
          switch(iVar2) {
          case 0:
          case 5:
            goto switchD_001027d2_caseD_0;
          default:
            goto switchD_001027d2_caseD_1;
          case 2:
            if ((iVar4 - 3U & 0xfffffffd) == 0) goto switchD_001027d2_caseD_1;
            goto switchD_001027d2_caseD_0;
          case 3:
            bVar9 = iVar4 - 3U < 3;
            goto LAB_00102936;
          case 4:
            bVar9 = iVar4 == 5;
LAB_00102936:
            if (!bVar9) goto LAB_00102920;
switchD_001027d2_caseD_1:
            lVar7 = *(long *)(pVVar6 + 0x10);
            uVar8 = uVar8 & -uVar1;
            goto joined_r0x00102970;
          }
        }
        goto LAB_001027ff;
      }
    }
    lVar7 = *(long *)(pVVar6 + 0x10);
    if ((lVar7 == 0) ||
       (plVar5 = (long *)(*(long *)(pVVar6 + 8) + -0x20 + lVar7 * 0x20),
       (ulong)(plVar5[1] + *plVar5) <= uVar8)) {
      if (uVar1 < 2) {
LAB_0010289a:
        *(undefined4 *)(param_6 + 6) = 2;
        *param_6 = uVar8 + 1;
        return 1;
      }
LAB_00102824:
      lVar7 = lVar7 + -1;
LAB_00102832:
      while ((lVar7 != -1 &&
             (plVar5 = (long *)(lVar7 * 0x20 + *(long *)(pVVar6 + 8)),
             (((*plVar5 + plVar5[1]) - 1U ^ uVar8) & -uVar1) == 0))) {
        iVar3 = (int)plVar5[3];
        iVar4 = param_4;
        if (param_4 <= iVar3) {
          iVar4 = iVar3;
          iVar3 = param_4;
        }
        switch(iVar3) {
        case 0:
        case 5:
          break;
        default:
          goto switchD_0010286f_caseD_1;
        case 2:
          if ((iVar4 - 3U & 0xfffffffd) == 0) {
            return uVar10;
          }
          break;
        case 3:
          if (iVar4 - 3U < 3) {
            return uVar10;
          }
          break;
        case 4:
          if (iVar4 != 5) goto code_r0x001028ed;
          goto switchD_0010286f_caseD_1;
        }
        lVar7 = lVar7 + -1;
      }
      goto LAB_0010289a;
    }
  }
switchD_0010286f_caseD_1:
  return uVar10;
switchD_001027d2_caseD_0:
LAB_00102920:
  lVar12 = lVar12 + -0x20;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) goto LAB_001027ff;
  goto LAB_001027a8;
code_r0x001028ed:
  lVar7 = lVar7 + -1;
  goto LAB_00102832;
}



/* VmaBlockMetadata_Linear::CreateAllocationRequest(unsigned long, unsigned long, bool,
   VmaSuballocationType, unsigned int, VmaAllocationRequest*) */

undefined8 __thiscall
VmaBlockMetadata_Linear::CreateAllocationRequest
          (VmaBlockMetadata_Linear *this,ulong param_1,undefined8 param_3_00,char param_3,
          undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  if (*(ulong *)(this + 8) < param_1) {
    return 0;
  }
  *(ulong *)(param_7 + 8) = param_1;
  if (param_3 != '\0') {
    uVar1 = CreateAllocationRequest_UpperAddress();
    return uVar1;
  }
  uVar1 = CreateAllocationRequest_LowerAddress();
  return uVar1;
}



/* VmaBlockMetadata_TLSF::VmaBlockMetadata_TLSF(VkAllocationCallbacks const*, unsigned long, bool)
    */

void __thiscall
VmaBlockMetadata_TLSF::VmaBlockMetadata_TLSF
          (VmaBlockMetadata_TLSF *this,VkAllocationCallbacks *param_1,ulong param_2,bool param_3)

{
  *(undefined8 *)(this + 8) = 0;
  *(VkAllocationCallbacks **)(this + 0x10) = param_1;
  *(ulong *)(this + 0x18) = param_2;
  this[0x20] = (VmaBlockMetadata_TLSF)param_3;
  *(undefined ***)this = &PTR__VmaBlockMetadata_TLSF_00115280;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (VmaBlockMetadata_TLSF)0x0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(VkAllocationCallbacks **)(this + 0x140) = param_1;
  *(undefined4 *)(this + 0x148) = 0x10;
  *(VkAllocationCallbacks **)(this + 0x150) = param_1;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(ulong *)(this + 0x178) = param_2;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  return;
}



/* VmaBlockMetadata_TLSF::SizeToMemoryClass(unsigned long) const */

int __thiscall VmaBlockMetadata_TLSF::SizeToMemoryClass(VmaBlockMetadata_TLSF *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0x100 < param_1) {
    lVar1 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 0x38 - ((uint)lVar1 ^ 0x3f);
  }
  return iVar2;
}



/* VmaBlockMetadata_TLSF::SizeToSecondIndex(unsigned long, unsigned char) const */

ulong __thiscall
VmaBlockMetadata_TLSF::SizeToSecondIndex(VmaBlockMetadata_TLSF *this,ulong param_1,uchar param_2)

{
  if (param_2 != '\0') {
    return (ulong)((uint)(param_1 >> (param_2 + 2 & 0x3f)) ^ 0x20);
  }
  if (this[0x20] != (VmaBlockMetadata_TLSF)0x0) {
    return param_1 - 1 >> 3;
  }
  return param_1 - 1 >> 6;
}



/* VmaBlockMetadata_TLSF::GetListIndex(unsigned char, unsigned short) const */

uint __thiscall
VmaBlockMetadata_TLSF::GetListIndex(VmaBlockMetadata_TLSF *this,uchar param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_2;
  if (param_1 != '\0') {
    iVar2 = (param_1 - 1) * 0x20 + (uint)param_2;
    uVar1 = iVar2 + 4;
    if (this[0x20] != (VmaBlockMetadata_TLSF)0x0) {
      uVar1 = iVar2 + 0x20;
    }
  }
  return uVar1;
}



/* VmaBlockMetadata_TLSF::GetListIndex(unsigned long) const */

ulong __thiscall VmaBlockMetadata_TLSF::GetListIndex(VmaBlockMetadata_TLSF *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 < 0x101) {
    uVar2 = param_1 - 1 >> 6;
    if (this[0x20] != (VmaBlockMetadata_TLSF)0x0) {
      uVar2 = param_1 - 1 >> 3;
    }
    return uVar2 & 0xffff;
  }
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar4 = (uint)lVar1 ^ 0x3f;
  iVar3 = ((0x38 - uVar4 & 0xff) - 1) * 0x20 +
          (((uint)(param_1 >> (0x3aU - (char)uVar4 & 0x3f)) ^ 0x20) & 0xffff);
  uVar4 = iVar3 + 0x20;
  if (this[0x20] == (VmaBlockMetadata_TLSF)0x0) {
    uVar4 = iVar3 + 4;
  }
  return (ulong)uVar4;
}



/* VmaBlockMetadata_TLSF::Validate() const */

undefined8 __thiscall VmaBlockMetadata_TLSF::Validate(VmaBlockMetadata_TLSF *this)

{
  VmaBlockBufferImageGranularity *this_00;
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  long local_68;
  long local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x30) == GetSumFreeSize) {
    uVar9 = *(long *)(this + 0x38) + *(long *)(*(long *)(this + 0x170) + 8);
  }
  else {
    uVar9 = (**(code **)(*(long *)this + 0x30))();
  }
  auVar6._8_8_ = local_58._8_8_;
  auVar6._0_8_ = local_58._0_8_;
  auVar5._8_8_ = local_58._8_8_;
  auVar5._0_8_ = local_58._0_8_;
  auVar4._8_8_ = local_58._8_8_;
  auVar4._0_8_ = local_58._0_8_;
  auVar3._8_8_ = local_58._8_8_;
  auVar3._0_8_ = local_58._0_8_;
  if (uVar9 <= *(ulong *)(this + 8)) {
    uVar9 = (*(ulong **)(this + 0x170))[1];
    if (*(uint *)(this + 0x130) != 0) {
      plVar15 = *(long **)(this + 0x138);
      plVar1 = plVar15 + *(uint *)(this + 0x130);
      do {
        lVar10 = *plVar15;
        if (lVar10 != 0) {
          local_58 = auVar3;
          if ((*(long *)(lVar10 + 0x20) != 0) || (local_58 = auVar6, lVar10 == 0))
          goto LAB_00102ce8;
          while (lVar2 = *(long *)(lVar10 + 0x28), lVar2 != 0) {
            local_58 = auVar5;
            if ((lVar10 != *(long *)(lVar2 + 0x20)) ||
               (lVar10 = lVar2, local_58 = auVar4, lVar2 == *(long *)(lVar2 + 0x20)))
            goto LAB_00102ce8;
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar1);
    }
    this_00 = (VmaBlockBufferImageGranularity *)(this + 0x178);
    uVar14 = **(ulong **)(this + 0x170);
    local_58 = VmaBlockBufferImageGranularity::StartValidation
                         (this_00,*(VkAllocationCallbacks **)(this + 0x10),(bool)this[0x20]);
    uVar12 = *(ulong *)(this + 0x170);
    if (*(long *)(uVar12 + 0x18) == 0) {
      puVar17 = *(ulong **)(uVar12 + 0x10);
      uVar18 = uVar9;
      if (puVar17 == (ulong *)0x0) {
        local_68 = 0;
        local_60 = 0;
LAB_00102da9:
        if (this[0x20] == (VmaBlockMetadata_TLSF)0x0) {
          cVar7 = VmaBlockBufferImageGranularity::FinishValidation
                            (this_00,(ValidationContext *)local_58);
          if (cVar7 == '\0') goto LAB_00102ce8;
        }
        if ((uVar14 == 0) && (*(ulong *)(this + 8) == uVar18)) {
          uVar12 = (**(code **)(*(long *)this + 0x30))(this);
          if ((uVar12 == uVar9) && (*(long *)(this + 0x28) == local_60)) {
            uVar13 = CONCAT71((int7)((ulong)local_68 >> 8),*(long *)(this + 0x30) == local_68);
            goto LAB_00102cea;
          }
        }
      }
      else if (uVar12 == puVar17[3]) {
        local_68 = 0;
        local_60 = 0;
        uVar12 = uVar14;
        do {
          uVar16 = puVar17[1];
          uVar14 = *puVar17;
          if (uVar14 + uVar16 != uVar12) break;
          uVar18 = uVar18 + uVar16;
          uVar8 = GetListIndex(this,uVar16);
          puVar11 = *(ulong **)(*(long *)(this + 0x138) + (ulong)uVar8 * 8);
          if ((ulong *)puVar17[4] == puVar17) {
            for (; puVar11 != (ulong *)0x0; puVar11 = (ulong *)puVar11[5]) {
              if (puVar11 == puVar17) goto LAB_00102ce8;
            }
            if (this[0x20] == (VmaBlockMetadata_TLSF)0x0) {
              cVar7 = VmaBlockBufferImageGranularity::Validate
                                (this_00,(ValidationContext *)local_58,uVar14,uVar16);
              if (cVar7 == '\0') break;
            }
            local_60 = local_60 + 1;
          }
          else {
            local_68 = local_68 + 1;
            while( true ) {
              if (puVar11 == (ulong *)0x0) goto LAB_00102ce8;
              if (puVar11 == puVar17) break;
              puVar11 = (ulong *)puVar11[5];
            }
            uVar9 = uVar9 + uVar16;
          }
          puVar11 = (ulong *)puVar17[2];
          if (puVar11 == (ulong *)0x0) goto LAB_00102da9;
          bVar19 = (ulong *)puVar11[3] == puVar17;
          uVar12 = uVar14;
          puVar17 = puVar11;
        } while (bVar19);
      }
    }
  }
LAB_00102ce8:
  uVar13 = 0;
LAB_00102cea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaBlockMetadata_TLSF::RemoveFreeBlock(VmaBlockMetadata_TLSF::Block*) */

void __thiscall VmaBlockMetadata_TLSF::RemoveFreeBlock(VmaBlockMetadata_TLSF *this,Block *param_1)

{
  int iVar1;
  VmaBlockMetadata_TLSF *pVVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (*(long *)(param_1 + 0x20) == 0) {
    if (uVar3 < 0x101) {
      uVar6 = (ushort)(uVar3 - 1 >> 6);
      if (this[0x20] != (VmaBlockMetadata_TLSF)0x0) {
        uVar6 = (ushort)(uVar3 - 1 >> 3);
      }
      uVar10 = 0;
      uVar9 = (uint)uVar6;
      uVar7 = (ulong)uVar9;
    }
    else {
      lVar4 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uVar9 = (uint)lVar4 ^ 0x3f;
      uVar10 = 0x38 - uVar9 & 0xff;
      uVar9 = ((uint)(uVar3 >> (0x3aU - (char)uVar9 & 0x3f)) ^ 0x20) & 0xffff;
      iVar1 = (uVar10 - 1) * 0x20 + uVar9;
      uVar7 = (ulong)(iVar1 + 0x20);
      if (this[0x20] == (VmaBlockMetadata_TLSF)0x0) {
        uVar7 = (ulong)(iVar1 + 4);
      }
    }
    *(long *)(*(long *)(this + 0x138) + uVar7 * 8) = lVar8;
    if (lVar8 == 0) {
      bVar5 = (byte)uVar9 & 0x1f;
      pVVar2 = this + (long)(int)uVar10 * 4 + 0x48;
      *(uint *)pVVar2 = *(uint *)pVVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      if (*(uint *)pVVar2 == 0) {
        bVar5 = (byte)uVar10 & 0x3f;
        *(uint *)(this + 0x40) =
             *(uint *)(this + 0x40) &
             ((uint)(-2L << bVar5) | (uint)(0xfffffffffffffffe >> 0x40 - bVar5));
      }
    }
  }
  else {
    *(long *)(*(long *)(param_1 + 0x20) + 0x28) = lVar8;
  }
  lVar8 = *(long *)(this + 0x30);
  lVar4 = *(long *)(this + 0x38);
  *(Block **)(param_1 + 0x20) = param_1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(this + 0x30) = lVar8 + -1;
  *(ulong *)(this + 0x38) = lVar4 - uVar3;
  return;
}



/* VmaBlockMetadata_TLSF::InsertFreeBlock(VmaBlockMetadata_TLSF::Block*) */

void __thiscall VmaBlockMetadata_TLSF::InsertFreeBlock(VmaBlockMetadata_TLSF *this,Block *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < 0x101) {
    uVar4 = (ushort)(uVar2 - 1 >> 6);
    if (this[0x20] != (VmaBlockMetadata_TLSF)0x0) {
      uVar4 = (ushort)(uVar2 - 1 >> 3);
    }
    uVar9 = 0;
    uVar5 = (uint)uVar4;
    uVar8 = (ulong)uVar4;
  }
  else {
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar6 = (uint)lVar3 ^ 0x3f;
    uVar9 = 0x38 - uVar6 & 0xff;
    uVar5 = ((uint)(uVar2 >> (0x3aU - (char)uVar6 & 0x3f)) ^ 0x20) & 0xffff;
    iVar7 = (uVar9 - 1) * 0x20 + uVar5;
    uVar6 = iVar7 + 0x20;
    if (this[0x20] == (VmaBlockMetadata_TLSF)0x0) {
      uVar6 = iVar7 + 4;
    }
    uVar8 = (ulong)uVar6;
  }
  lVar3 = *(long *)(this + 0x138);
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = (undefined8 *)(lVar3 + uVar8 * 8);
  *(undefined8 *)(param_1 + 0x28) = *puVar1;
  *puVar1 = param_1;
  if (*(long *)(param_1 + 0x28) != 0) {
    *(Block **)(*(long *)(param_1 + 0x28) + 0x20) = param_1;
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
    *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + uVar2;
    return;
  }
  *(uint *)(this + (long)(int)uVar9 * 4 + 0x48) =
       *(uint *)(this + (long)(int)uVar9 * 4 + 0x48) | 1 << ((byte)uVar5 & 0x1f);
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | (uint)(1L << ((byte)uVar9 & 0x3f));
  *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + uVar2;
  return;
}



/* VmaBlockMetadata_TLSF::FindFreeBlock(unsigned long, unsigned int&) const */

undefined8 __thiscall
VmaBlockMetadata_TLSF::FindFreeBlock(VmaBlockMetadata_TLSF *this,ulong param_1,uint *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  if (param_1 < 0x101) {
    uVar5 = *(uint *)(this + 0x48);
    if (this[0x20] != (VmaBlockMetadata_TLSF)0x0) {
      bVar2 = 0;
      uVar5 = -1 << ((byte)(param_1 - 1 >> 3) & 0x1f) & uVar5;
      goto joined_r0x001030f0;
    }
    bVar4 = (byte)(param_1 - 1 >> 6);
    bVar2 = 0;
  }
  else {
    lVar1 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar6 = (uint)lVar1 ^ 0x3f;
    uVar5 = 0x38 - uVar6;
    bVar2 = (byte)uVar5;
    uVar5 = *(uint *)(this + (ulong)(uVar5 & 0xff) * 4 + 0x48);
    bVar4 = (byte)(param_1 >> (0x3aU - (char)uVar6 & 0x3f));
  }
  uVar5 = -1 << (bVar4 & 0x1f) & uVar5;
joined_r0x001030f0:
  if (uVar5 == 0) {
    uVar5 = (uint)(-1L << (bVar2 + 1 & 0x3f)) & *(uint *)(this + 0x40);
    if (uVar5 == 0) {
      return 0;
    }
    bVar2 = 0;
    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      bVar2 = bVar2 + 1;
    }
    uVar5 = *(uint *)(this + (ulong)bVar2 * 4 + 0x48);
  }
  iVar3 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  bVar4 = (byte)iVar3;
  if (uVar5 == 0) {
    bVar4 = 0xff;
  }
  uVar7 = (ulong)bVar4;
  if (bVar2 != 0) {
    iVar3 = (bVar2 - 1) * 0x20 + (uint)bVar4;
    uVar7 = (ulong)(iVar3 + 4);
    if (this[0x20] != (VmaBlockMetadata_TLSF)0x0) {
      uVar7 = (ulong)(iVar3 + 0x20);
    }
  }
  lVar1 = *(long *)(this + 0x138);
  *param_2 = (uint)uVar7;
  return *(undefined8 *)(lVar1 + uVar7 * 8);
}



/* VmaBlockMetadata_TLSF::CheckBlock(VmaBlockMetadata_TLSF::Block&, unsigned int, unsigned long,
   unsigned long, VmaSuballocationType, VmaAllocationRequest*) */

undefined8 __thiscall
VmaBlockMetadata_TLSF::CheckBlock
          (VmaBlockMetadata_TLSF *this,long *param_1,uint param_2,long param_3,long param_4,
          uint param_6,undefined8 *param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_1 + -1 + param_4 & -param_4;
  if (((ulong)param_1[1] < (param_3 - *param_1) + local_48) ||
     ((this[0x20] == (VmaBlockMetadata_TLSF)0x0 &&
      (cVar3 = VmaBlockBufferImageGranularity::CheckConflictAndAlignUp
                         ((VmaBlockBufferImageGranularity *)(this + 0x178),&local_48,param_3),
      cVar3 != '\0')))) {
    uVar4 = 0;
  }
  else {
    *(undefined4 *)(param_7 + 6) = 1;
    *param_7 = param_1;
    param_7[1] = param_3;
    param_7[4] = (ulong)param_6;
    param_7[5] = local_48;
    if ((*(uint *)(this + 0x130) != param_2) && (param_1[4] != 0)) {
      lVar2 = param_1[5];
      *(long *)(param_1[4] + 0x28) = lVar2;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = param_1[4];
      }
      lVar2 = *(long *)(this + 0x138);
      param_1[4] = 0;
      plVar1 = (long *)(lVar2 + (ulong)param_2 * 8);
      param_1[5] = *plVar1;
      *plVar1 = (long)param_1;
      if (param_1[5] != 0) {
        *(long **)(param_1[5] + 0x20) = param_1;
      }
    }
    uVar4 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* VmaBlockMetadata_TLSF::CreateAllocationRequest(unsigned long, unsigned long, bool,
   VmaSuballocationType, unsigned int, VmaAllocationRequest*) */

ulong __thiscall
VmaBlockMetadata_TLSF::CreateAllocationRequest
          (VmaBlockMetadata_TLSF *this,ulong param_1,undefined8 param_2,undefined8 param_4,
          undefined4 param_5,ulong param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  void *pvStack_68;
  ulong local_60;
  undefined8 local_58;
  ulong local_50;
  uint uStack_48;
  uint uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_2;
  local_50 = param_1;
  if (this[0x20] == (VmaBlockMetadata_TLSF)0x0) {
    VmaBlockBufferImageGranularity::RoundupAllocRequest
              ((VmaBlockBufferImageGranularity *)(this + 0x178),param_5,&local_50,&local_58);
  }
  uVar11 = local_50;
  if (*(code **)(*(long *)this + 0x30) == GetSumFreeSize) {
    uVar8 = *(long *)(this + 0x38) + *(long *)(*(long *)(this + 0x170) + 8);
    uVar3 = local_58;
  }
  else {
    uVar8 = (**(code **)(*(long *)this + 0x30))(this);
    param_6 = param_6 & 0xffffffff;
    uVar3 = local_58;
  }
  local_58 = uVar3;
  if (uVar11 <= uVar8) {
    uVar8 = *(ulong *)(this + 0x30);
    uVar1 = *(uint *)(this + 0x130);
    if (uVar8 == 0) {
      uVar11 = CheckBlock(this,*(undefined8 *)(this + 0x170),uVar1,uVar11,uVar3,param_5,param_7);
      goto LAB_00103495;
    }
    lVar9 = (ulong)(-(uint)(this[0x20] == (VmaBlockMetadata_TLSF)0x0) & 0x38) + 8;
    if (uVar11 < 0x101) {
      local_60 = 0x101;
      if (uVar11 <= 0x100U - lVar9) {
        local_60 = lVar9 + uVar11;
      }
    }
    else {
      lVar9 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_60 = (1L << (0x3a - ((byte)lVar9 ^ 0x3f) & 0x3f)) + uVar11;
    }
    uStack_48 = uVar1;
    uStack_44 = uVar1;
    if ((param_6 & 0x20000) != 0) {
      lVar9 = FindFreeBlock(this,local_60,&uStack_48);
      uVar4 = uStack_48;
      if (lVar9 == 0) {
        cVar5 = CheckBlock();
        if (cVar5 == '\0') goto LAB_00103910;
      }
      else {
        cVar5 = CheckBlock();
        if ((cVar5 == '\0') &&
           (cVar5 = CheckBlock(this,*(undefined8 *)(this + 0x170),uVar1,uVar11,uVar3,param_5,param_7
                              ), cVar5 == '\0')) {
          do {
            cVar5 = CheckBlock(this,lVar9,uVar4,uVar11,uVar3,param_5,param_7);
            if (cVar5 != '\0') goto LAB_00103590;
            lVar9 = *(long *)(lVar9 + 0x28);
          } while (lVar9 != 0);
LAB_00103910:
          lVar9 = FindFreeBlock(this,uVar11,&uStack_44);
          uVar4 = uStack_44;
          for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x28)) {
            cVar5 = CheckBlock(this,lVar9,uVar4,uVar11,uVar3,param_5,param_7);
            if (cVar5 != '\0') goto LAB_00103590;
          }
          goto LAB_00103860;
        }
      }
LAB_00103590:
      uVar11 = 1;
      goto LAB_00103495;
    }
    if ((param_6 & 0x10000) == 0) {
      if ((param_6 & 0x40000) != 0) {
        puVar2 = *(undefined8 **)(this + 0x10);
        if ((puVar2 == (undefined8 *)0x0) || ((code *)puVar2[1] == (code *)0x0)) {
          pvStack_68 = (void *)aligned_alloc(8,uVar8 * 8);
        }
        else {
          pvStack_68 = (void *)(*(code *)puVar2[1])(*puVar2,uVar8 * 8,8,1);
          uVar8 = *(ulong *)(this + 0x30);
        }
        lVar9 = *(long *)(this + 0x170);
        lVar10 = *(long *)(lVar9 + 0x10);
        uVar12 = uVar8;
        if (lVar10 != 0) {
          do {
            if ((*(long *)(lVar10 + 0x20) != lVar10) && (uVar11 <= *(ulong *)(lVar10 + 8))) {
              uVar12 = uVar12 - 1;
              *(long *)((long)pvStack_68 + uVar12 * 8) = lVar10;
            }
            lVar10 = *(long *)(lVar10 + 0x10);
          } while (lVar10 != 0);
          if (uVar12 < uVar8) {
            do {
              lVar9 = *(long *)((long)pvStack_68 + uVar12 * 8);
              uVar7 = GetListIndex(this,*(ulong *)(lVar9 + 8));
              bVar6 = CheckBlock(this,lVar9,uVar7,uVar11);
              if (bVar6 != 0) goto LAB_00103438;
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar8);
          }
          lVar9 = *(long *)(this + 0x170);
        }
        bVar6 = CheckBlock(this,lVar9,*(undefined4 *)(this + 0x130),uVar11,uVar3,param_5,param_7);
LAB_00103438:
        if ((puVar2 == (undefined8 *)0x0) || ((code *)puVar2[3] == (code *)0x0)) {
          free(pvStack_68);
          uVar11 = (ulong)bVar6;
        }
        else {
          (*(code *)puVar2[3])(*puVar2,pvStack_68);
          uVar11 = (ulong)bVar6;
        }
        goto LAB_00103495;
      }
      lVar9 = FindFreeBlock(this,local_60,&uStack_48);
      uVar4 = uStack_48;
      for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x28)) {
        cVar5 = CheckBlock(this,lVar9,uVar4,uVar11,uVar3,param_5,param_7);
        if (cVar5 != '\0') goto LAB_00103590;
      }
      cVar5 = CheckBlock(this,*(undefined8 *)(this + 0x170),uVar1,uVar11,uVar3,param_5,param_7);
      if (cVar5 != '\0') goto LAB_00103590;
      lVar9 = FindFreeBlock(this,uVar11,&uStack_44);
      uVar4 = uStack_44;
      for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x28)) {
        cVar5 = CheckBlock(this,lVar9,uVar4,uVar11,uVar3,param_5,param_7);
        if (cVar5 != '\0') goto LAB_00103590;
      }
LAB_00103860:
      pvStack_68._0_4_ = uStack_48;
    }
    else {
      lVar9 = FindFreeBlock(this,uVar11,&uStack_44);
      uVar4 = uStack_44;
      for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x28)) {
        cVar5 = CheckBlock(this,lVar9,uVar4,uVar11,uVar3,param_5,param_7);
        if (cVar5 != '\0') goto LAB_00103590;
      }
      cVar5 = CheckBlock(this,*(undefined8 *)(this + 0x170),uVar1,uVar11,uVar3,param_5,param_7);
      if (cVar5 != '\0') goto LAB_00103590;
      lVar9 = FindFreeBlock(this,local_60,&uStack_48);
      uVar4 = uStack_48;
      pvStack_68._0_4_ = uStack_48;
      for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x28)) {
        cVar5 = CheckBlock(this,lVar9,uVar4,uVar11,uVar3,param_5,param_7);
        if (cVar5 != '\0') goto LAB_00103590;
      }
    }
    uStack_48 = (uint)pvStack_68 + 1;
    if (uStack_48 < uVar1) {
      lVar9 = *(long *)(this + 0x138);
      do {
        uVar4 = uStack_48;
        for (lVar10 = *(long *)(lVar9 + (ulong)uStack_48 * 8); lVar10 != 0;
            lVar10 = *(long *)(lVar10 + 0x28)) {
          cVar5 = CheckBlock(this,lVar10,uVar4,uVar11,uVar3,param_5,param_7);
          if (cVar5 != '\0') goto LAB_00103590;
        }
        uStack_48 = uStack_48 + 1;
      } while (uStack_48 < uVar1);
      uVar11 = 0;
      goto LAB_00103495;
    }
  }
  uVar11 = 0;
LAB_00103495:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



/* VmaCurrentBudgetData::VmaCurrentBudgetData() */

void __thiscall VmaCurrentBudgetData::VmaCurrentBudgetData(VmaCurrentBudgetData *this)

{
  VmaCurrentBudgetData *pVVar1;
  VmaCurrentBudgetData *pVVar2;
  VmaCurrentBudgetData *pVVar3;
  
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  pVVar1 = this + 0x80;
  pVVar3 = this;
  do {
    LOCK();
    *(undefined4 *)pVVar3 = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(pVVar3 + 0x40) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)pVVar1 = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(pVVar1 + 0x80) = 0;
    UNLOCK();
    pVVar2 = pVVar1 + 8;
    pVVar3 = pVVar3 + 4;
    *(undefined8 *)(pVVar1 + 0x140) = 0;
    *(undefined8 *)(pVVar1 + 0x1c0) = 0;
    *(undefined8 *)(pVVar1 + 0x240) = 0;
    pVVar1 = pVVar2;
  } while (pVVar2 != this + 0x100);
  LOCK();
  *(undefined4 *)(this + 0x180) = 0;
  UNLOCK();
  return;
}



/* VmaCurrentBudgetData::AddAllocation(unsigned int, unsigned long) */

void __thiscall
VmaCurrentBudgetData::AddAllocation(VmaCurrentBudgetData *this,uint param_1,ulong param_2)

{
  LOCK();
  *(ulong *)(this + ((ulong)param_1 + 0x20) * 8) =
       *(long *)(this + ((ulong)param_1 + 0x20) * 8) + param_2;
  UNLOCK();
  LOCK();
  *(int *)(this + ((ulong)param_1 + 0x10) * 4) = *(int *)(this + ((ulong)param_1 + 0x10) * 4) + 1;
  UNLOCK();
  LOCK();
  *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
  UNLOCK();
  return;
}



/* VmaCurrentBudgetData::RemoveAllocation(unsigned int, unsigned long) */

void __thiscall
VmaCurrentBudgetData::RemoveAllocation(VmaCurrentBudgetData *this,uint param_1,ulong param_2)

{
  LOCK();
  *(ulong *)(this + ((ulong)param_1 + 0x20) * 8) =
       *(long *)(this + ((ulong)param_1 + 0x20) * 8) - param_2;
  UNLOCK();
  LOCK();
  *(int *)(this + ((ulong)param_1 + 0x10) * 4) = *(int *)(this + ((ulong)param_1 + 0x10) * 4) + -1;
  UNLOCK();
  LOCK();
  *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
  UNLOCK();
  return;
}



/* VmaAllocationObjectAllocator::Free(VmaAllocation_T*) */

void __thiscall
VmaAllocationObjectAllocator::Free(VmaAllocationObjectAllocator *this,VmaAllocation_T *param_1)

{
  long lVar1;
  VmaAllocation_T *pVVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  lVar1 = *(long *)(this + 0x48);
  lVar5 = lVar1 + -1;
  if (lVar1 != 0) {
    puVar4 = (ulong *)(*(long *)(this + 0x40) + -0x10 + lVar1 * 0x10);
    do {
      pVVar2 = (VmaAllocation_T *)*puVar4;
      if ((pVVar2 <= param_1) && (param_1 < pVVar2 + (ulong)(uint)puVar4[1] * 0x58)) {
        *(undefined4 *)param_1 = *(undefined4 *)((long)puVar4 + 0xc);
        *(int *)((long)puVar4 + 0xc) = (int)((long)param_1 - (long)pVVar2 >> 3) * -0x45d1745d;
        pthread_mutex_unlock((pthread_mutex_t *)this);
        return;
      }
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + -2;
    } while (lVar5 != -1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}



/* VmaVirtualBlock_T::VmaVirtualBlock_T(VmaVirtualBlockCreateInfo const&) */

void __thiscall
VmaVirtualBlock_T::VmaVirtualBlock_T(VmaVirtualBlock_T *this,VmaVirtualBlockCreateInfo *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  Block *pBVar9;
  void *__s;
  byte bVar10;
  ulong uVar11;
  uint uVar12;
  size_t __n;
  undefined8 *puVar13;
  byte bVar14;
  
  bVar14 = 0;
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  uVar12 = *(uint *)(param_1 + 8);
  *this = (VmaVirtualBlock_T)(puVar8 != (undefined8 *)0x0);
  uVar6 = VmaEmptyAllocationCallbacks._40_8_;
  uVar5 = VmaEmptyAllocationCallbacks._32_8_;
  uVar4 = VmaEmptyAllocationCallbacks._24_8_;
  uVar3 = VmaEmptyAllocationCallbacks._16_8_;
  uVar1 = VmaEmptyAllocationCallbacks._8_8_;
  if (puVar8 == (undefined8 *)0x0) {
    *(undefined8 *)(this + 8) = VmaEmptyAllocationCallbacks._0_8_;
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined8 *)(this + 0x18) = uVar3;
    *(undefined8 *)(this + 0x20) = uVar4;
    *(undefined8 *)(this + 0x28) = uVar5;
    *(undefined8 *)(this + 0x30) = uVar6;
    if ((uVar12 & 1) != 0) goto LAB_00103d80;
  }
  else {
    uVar1 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    uVar5 = puVar8[4];
    uVar6 = puVar8[5];
    *(undefined8 *)(this + 8) = *puVar8;
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined8 *)(this + 0x18) = uVar3;
    *(undefined8 *)(this + 0x20) = uVar4;
    *(undefined8 *)(this + 0x28) = uVar5;
    *(undefined8 *)(this + 0x30) = uVar6;
    if ((uVar12 & 1) != 0) {
      if (*(code **)(this + 0x10) != (code *)0x0) {
        puVar8 = (undefined8 *)(**(code **)(this + 0x10))(*(undefined8 *)(this + 8),0x90,8,1);
        goto LAB_00103cc5;
      }
LAB_00103d80:
      puVar8 = (undefined8 *)aligned_alloc(8,0x90);
LAB_00103cc5:
      puVar8[0xe] = 0;
      *puVar8 = &PTR__VmaBlockMetadata_Linear_001151b0;
      *(undefined1 (*) [16])(puVar8 + 6) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar8 + 8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar8 + 10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar8 + 0xc) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar8 + 0xf) = (undefined1  [16])0x0;
      uVar1 = *(undefined8 *)param_1;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 1;
      *(undefined1 *)(puVar8 + 4) = 1;
      puVar8[5] = 0;
      puVar8[0x11] = 0;
      *(undefined8 **)(this + 0x38) = puVar8;
      puVar8[1] = uVar1;
      puVar8[5] = uVar1;
      return;
    }
    if (*(code **)(this + 0x10) != (code *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(this + 0x10))(*(undefined8 *)(this + 8),400,8,1);
      goto LAB_00103bf0;
    }
  }
  puVar8 = (undefined8 *)aligned_alloc(8,400);
LAB_00103bf0:
  *(undefined1 *)((long)puVar8 + 0x44) = 0;
  *puVar8 = &PTR__VmaBlockMetadata_TLSF_00115280;
  *(undefined1 (*) [16])(puVar8 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 0x27) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 0x2a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 0x2c) = (undefined1  [16])0x0;
  uVar11 = *(ulong *)param_1;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 1;
  *(undefined1 *)(puVar8 + 4) = 1;
  puVar8[7] = 0;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)(puVar8 + 0x26) = 0;
  *(undefined4 *)(puVar8 + 0x29) = 0x10;
  puVar8[0x2e] = 0;
  puVar8[0x2f] = 1;
  *(undefined4 *)(puVar8 + 0x30) = 0;
  puVar8[0x31] = 0;
  *(undefined8 **)(this + 0x38) = puVar8;
  puVar8[1] = uVar11;
  if (*(char *)(puVar8 + 4) == '\0') {
    VmaBlockBufferImageGranularity::Init
              ((VmaBlockBufferImageGranularity *)(puVar8 + 0x2f),(VkAllocationCallbacks *)puVar8[2],
               uVar11);
  }
  pBVar9 = VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Alloc<>
                     ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(puVar8 + 0x28));
  puVar8[0x2e] = pBVar9;
  *(undefined1 (*) [16])(pBVar9 + 0x20) = (undefined1  [16])0x0;
  *(ulong *)(pBVar9 + 8) = uVar11;
  *(undefined8 *)pBVar9 = 0;
  *(undefined1 (*) [16])(pBVar9 + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar8[0x2e] + 0x20) = 0;
  if (uVar11 < 0x101) {
    bVar10 = 2;
    iVar7 = 1;
  }
  else {
    lVar2 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar12 = (uint)lVar2 ^ 0x3f;
    bVar10 = 0x3a - (char)uVar12;
    iVar7 = (0x38 - uVar12 & 0xff) * 0x20 + -0x1f +
            (((uint)(uVar11 >> (bVar10 & 0x3f)) ^ 0x20) & 0xffff);
  }
  uVar12 = iVar7 + 4;
  if (*(char *)(puVar8 + 4) != '\0') {
    uVar12 = iVar7 + 0x20;
  }
  *(byte *)((long)puVar8 + 0x44) = bVar10;
  *(uint *)(puVar8 + 0x26) = uVar12;
  __n = (ulong)uVar12 << 3;
  puVar8[9] = 0;
  puVar8[0x25] = 0;
  puVar13 = (undefined8 *)((ulong)(puVar8 + 10) & 0xfffffffffffffff8);
  for (uVar11 = (ulong)(((int)puVar8 -
                        (int)(undefined8 *)((ulong)(puVar8 + 10) & 0xfffffffffffffff8)) + 0x130U >>
                       3); uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (ulong)bVar14 * -2 + 1;
  }
  puVar13 = (undefined8 *)puVar8[2];
  if ((puVar13 == (undefined8 *)0x0) || ((code *)puVar13[1] == (code *)0x0)) {
    __s = (void *)aligned_alloc(8);
  }
  else {
    __s = (void *)(*(code *)puVar13[1])(*puVar13,__n,8,1);
    __n = (ulong)*(uint *)(puVar8 + 0x26) << 3;
  }
  puVar8[0x27] = __s;
  memset(__s,0,__n);
  return;
}



/* VmaVirtualBlock_T::~VmaVirtualBlock_T() */

void __thiscall VmaVirtualBlock_T::~VmaVirtualBlock_T(VmaVirtualBlock_T *this)

{
  undefined8 *__ptr;
  char cVar1;
  
  cVar1 = (**(code **)(**(long **)(this + 0x38) + 0x38))();
  if (cVar1 == '\0') {
    (**(code **)(**(long **)(this + 0x38) + 0xb8))();
  }
  __ptr = *(undefined8 **)(this + 0x38);
  if (*this == (VmaVirtualBlock_T)0x0) {
    (**(code **)*__ptr)(__ptr);
  }
  else {
    (**(code **)*__ptr)();
    if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00103df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this + 0x20))(*(undefined8 *)(this + 8),__ptr);
      return;
    }
  }
  free(__ptr);
  return;
}



/* VmaVirtualBlock_T::GetAllocationCallbacks() const */

VmaVirtualBlock_T * __thiscall VmaVirtualBlock_T::GetAllocationCallbacks(VmaVirtualBlock_T *this)

{
  VmaVirtualBlock_T *pVVar1;
  
  pVVar1 = (VmaVirtualBlock_T *)0x0;
  if (*this != (VmaVirtualBlock_T)0x0) {
    pVVar1 = this + 8;
  }
  return pVVar1;
}



/* VmaVirtualBlock_T::GetAllocationInfo(VmaVirtualAllocation_T*, VmaVirtualAllocationInfo&) */

void VmaVirtualBlock_T::GetAllocationInfo
               (VmaVirtualAllocation_T *param_1,VmaVirtualAllocationInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00103e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x40))();
  return;
}



/* VmaVirtualBlock_T::Allocate(VmaVirtualAllocationCreateInfo const&, VmaVirtualAllocation_T*&,
   unsigned long*) */

undefined8 __thiscall
VmaVirtualBlock_T::Allocate
          (VmaVirtualBlock_T *this,VmaVirtualAllocationCreateInfo *param_1,
          VmaVirtualAllocation_T **param_2,ulong *param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  lVar4 = *(long *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  cVar1 = (**(code **)(**(long **)(this + 0x38) + 0x88))
                    (*(long **)(this + 0x38),*(undefined8 *)param_1,lVar4,
                     *(uint *)(param_1 + 0x10) >> 6 & 1,1,*(uint *)(param_1 + 0x10) & 0x70000,
                     local_68);
  if (cVar1 == '\0') {
    *param_2 = (VmaVirtualAllocation_T *)0x0;
    if (param_3 != (ulong *)0x0) {
      *param_3 = 0xffffffffffffffff;
    }
    uVar3 = 0xfffffffe;
  }
  else {
    (**(code **)(**(long **)(this + 0x38) + 0x98))
              (*(long **)(this + 0x38),local_68,1,*(undefined8 *)(param_1 + 0x18));
    *param_2 = (VmaVirtualAllocation_T *)local_68._0_8_;
    if (param_3 != (ulong *)0x0) {
      uVar2 = (**(code **)(**(long **)(this + 0x38) + 0x48))();
      *param_3 = uVar2;
    }
    uVar3 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaVirtualBlock_T::GetStatistics(VmaStatistics&) const */

void __thiscall VmaVirtualBlock_T::GetStatistics(VmaVirtualBlock_T *this,VmaStatistics *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x38);
  *(undefined8 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
                    /* WARNING: Could not recover jumptable at 0x00103f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaVirtualBlock_T::CalculateDetailedStatistics(VmaDetailedStatistics&) const */

void __thiscall
VmaVirtualBlock_T::CalculateDetailedStatistics
          (VmaVirtualBlock_T *this,VmaDetailedStatistics *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = *(long **)(this + 0x38);
  *(undefined8 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  uVar4 = _UNK_00115398;
  uVar3 = _LC0;
  lVar2 = *plVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00103f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x70))();
  return;
}



/* VmaDeviceMemoryBlock::VmaDeviceMemoryBlock(VmaAllocator_T*) */

void __thiscall
VmaDeviceMemoryBlock::VmaDeviceMemoryBlock(VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _LC3;
  *(undefined8 *)this = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* VmaDeviceMemoryBlock::~VmaDeviceMemoryBlock() */

void __thiscall VmaDeviceMemoryBlock::~VmaDeviceMemoryBlock(VmaDeviceMemoryBlock *this)

{
  return;
}



/* VmaDeviceMemoryBlock::Init(VmaAllocator_T*, VmaPool_T*, unsigned int, VkDeviceMemory_T*, unsigned
   long, unsigned int, unsigned int, unsigned long) */

void __thiscall
VmaDeviceMemoryBlock::Init
          (VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1,VmaPool_T *param_2,uint param_3,
          VkDeviceMemory_T *param_4,ulong param_5,uint param_6,uint param_7,ulong param_8)

{
  undefined8 *puVar1;
  VmaAllocator_T *pVVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  *(VmaPool_T **)(this + 8) = param_2;
  *(VkDeviceMemory_T **)(this + 0x18) = param_4;
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  *(uint *)(this + 0x10) = param_3;
  *(uint *)(this + 0x14) = param_6;
  if ((param_7 == 0) || (param_7 != 4)) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      puVar1 = (undefined8 *)aligned_alloc(8,400);
    }
    else {
      puVar1 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x28),400,8,1);
    }
    pVVar2 = (VmaAllocator_T *)0x0;
    if (param_1[0x20] != (VmaAllocator_T)0x0) {
      pVVar2 = param_1 + 0x28;
    }
    puVar1[1] = 0;
    puVar1[3] = param_8;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR__VmaBlockMetadata_TLSF_00115280;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined1 *)((long)puVar1 + 0x44) = 0;
    *(undefined4 *)(puVar1 + 0x26) = 0;
    puVar1[0x27] = 0;
    *(undefined4 *)(puVar1 + 0x29) = 0x10;
    puVar1[0x2b] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = param_8;
    *(undefined4 *)(puVar1 + 0x30) = 0;
    puVar1[0x31] = 0;
    puVar1[2] = pVVar2;
    puVar1[0x28] = pVVar2;
    puVar1[0x2a] = pVVar2;
    UNRECOVERED_JUMPTABLE = VmaBlockMetadata_TLSF::Init;
    *(undefined1 (*) [16])(puVar1 + 5) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar1 + 0x2c) = (undefined1  [16])0x0;
  }
  else {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      puVar1 = (undefined8 *)aligned_alloc(8,0x90);
    }
    else {
      puVar1 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x28),0x90,8,1);
    }
    pVVar2 = (VmaAllocator_T *)0x0;
    if (param_1[0x20] != (VmaAllocator_T)0x0) {
      pVVar2 = param_1 + 0x28;
    }
    puVar1[2] = pVVar2;
    puVar1[6] = pVVar2;
    puVar1[10] = pVVar2;
    UNRECOVERED_JUMPTABLE = VmaBlockMetadata_Linear::Init;
    puVar1[1] = 0;
    puVar1[3] = param_8;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR__VmaBlockMetadata_Linear_001151b0;
    puVar1[5] = 0;
    puVar1[7] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar1 + 0xc) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar1 + 0xf) = (undefined1  [16])0x0;
  }
  *(undefined8 **)this = puVar1;
                    /* WARNING: Could not recover jumptable at 0x001041d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar1,param_5);
  return;
}



/* VmaDeviceMemoryBlock::PostAlloc(VmaAllocator_T*) */

void __thiscall VmaDeviceMemoryBlock::PostAlloc(VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 == (VmaAllocator_T)0x0) {
    uVar1 = *(uint *)(this + 0x4c);
    if (*(int *)(this + 0x50) == 1) {
      *(uint *)(this + 0x4c) = uVar1 + 1;
    }
    else {
      uVar2 = *(uint *)(this + 0x48);
      if (uVar2 < uVar1) {
        *(uint *)(this + 0x48) = uVar2 + 1;
        return;
      }
      if (uVar1 != 0) {
        *(uint *)(this + 0x4c) = uVar1 - 1;
        *(uint *)(this + 0x48) = uVar2 - 1;
      }
    }
    return;
  }
  __mutex = (pthread_mutex_t *)(this + 0x20);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(this + 0x4c);
    if (*(int *)(this + 0x50) == 1) {
      *(uint *)(this + 0x4c) = uVar1 + 1;
    }
    else {
      uVar2 = *(uint *)(this + 0x48);
      if (uVar2 < uVar1) {
        *(uint *)(this + 0x48) = uVar2 + 1;
        pthread_mutex_unlock(__mutex);
        return;
      }
      if (uVar1 != 0) {
        *(uint *)(this + 0x4c) = uVar1 - 1;
        *(uint *)(this + 0x48) = uVar2 - 1;
      }
    }
    pthread_mutex_unlock(__mutex);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar3);
}



/* VmaDeviceMemoryBlock::PostFree(VmaAllocator_T*) */

void __thiscall VmaDeviceMemoryBlock::PostFree(VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1)

{
  int iVar1;
  uint uVar2;
  pthread_mutex_t *__mutex;
  
  if (*param_1 == (VmaAllocator_T)0x0) {
    __mutex = (pthread_mutex_t *)0x0;
    iVar1 = *(int *)(this + 0x50);
    uVar2 = *(uint *)(this + 0x4c);
  }
  else {
    __mutex = (pthread_mutex_t *)(this + 0x20);
    iVar1 = pthread_mutex_lock(__mutex);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
    }
    iVar1 = *(int *)(this + 0x50);
    uVar2 = *(uint *)(this + 0x4c);
  }
  if (iVar1 == 1) {
    uVar2 = uVar2 + 1;
    *(uint *)(this + 0x4c) = uVar2;
    if ((6 < uVar2) && (*(int *)(this + 0x48) + 1U < uVar2)) {
      *(undefined4 *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0x48) = 0;
      if (*(int *)(this + 0x54) == 0) {
        *(undefined8 *)(this + 0x58) = 0;
        (**(code **)(param_1 + 0x1680))
                  (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(this + 0x18));
      }
    }
  }
  else if (*(uint *)(this + 0x48) < uVar2) {
    *(uint *)(this + 0x48) = *(uint *)(this + 0x48) + 1;
  }
  else if (uVar2 != 0) {
    *(ulong *)(this + 0x48) =
         CONCAT44(_LC0._4_4_ + (int)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                  (int)_LC0 + (int)*(undefined8 *)(this + 0x48));
  }
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
    return;
  }
  return;
}



/* VmaDeviceMemoryBlock::Validate() const */

undefined8 __thiscall VmaDeviceMemoryBlock::Validate(VmaDeviceMemoryBlock *this)

{
  undefined8 uVar1;
  
  if ((*(long *)(this + 0x18) != 0) && ((*(long **)this)[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x001043e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)this + 0x18))();
    return uVar1;
  }
  return 0;
}



/* VmaDeviceMemoryBlock::CheckCorruption(VmaAllocator_T*) */

int __thiscall
VmaDeviceMemoryBlock::CheckCorruption(VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (void *)0x0;
  iVar1 = Map(this,param_1,1,&local_28);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(long **)this + 0x90))(*(long **)this,local_28);
    Unmap(this,param_1,1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaDeviceMemoryBlock::Map(VmaAllocator_T*, unsigned int, void**) */

undefined8 __thiscall
VmaDeviceMemoryBlock::Map
          (VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1,uint param_2,void **param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = Map(this,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}



/* VmaDeviceMemoryBlock::Unmap(VmaAllocator_T*, unsigned int) */

void __thiscall
VmaDeviceMemoryBlock::Unmap(VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1,uint param_2)

{
  if (param_2 != 0) {
    Unmap(this,param_1,param_2);
    return;
  }
  return;
}



/* VmaDeviceMemoryBlock::WriteMagicValueAfterAllocation(VmaAllocator_T*, unsigned long, unsigned
   long) */

int VmaDeviceMemoryBlock::WriteMagicValueAfterAllocation
              (VmaAllocator_T *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  void *pvStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = Map((VmaDeviceMemoryBlock *)param_1,(VmaAllocator_T *)param_2,1,&pvStack_28);
  if (iVar1 == 0) {
    Unmap((VmaDeviceMemoryBlock *)param_1,(VmaAllocator_T *)param_2,1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaDeviceMemoryBlock::ValidateMagicValueAfterAllocation(VmaAllocator_T*, unsigned long, unsigned
   long) */

int VmaDeviceMemoryBlock::ValidateMagicValueAfterAllocation
              (VmaAllocator_T *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  void *pvStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = Map((VmaDeviceMemoryBlock *)param_1,(VmaAllocator_T *)param_2,1,&pvStack_28);
  if (iVar1 == 0) {
    Unmap((VmaDeviceMemoryBlock *)param_1,(VmaAllocator_T *)param_2,1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaAllocation_T::VmaAllocation_T(bool) */

void __thiscall VmaAllocation_T::VmaAllocation_T(VmaAllocation_T *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_001153a8;
  uVar2 = __LC6;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined2 *)(this + 0x4c) = 0x100;
  uVar1 = VmaBufferImageUsage::UNKNOWN;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x30) = uVar3;
  this[0x4e] = (VmaAllocation_T)0x0;
  *(undefined8 *)(this + 0x50) = uVar1;
  this[0x4f] = (VmaAllocation_T)(param_1 * '\x02');
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  return;
}



/* VmaAllocation_T::~VmaAllocation_T() */

void __thiscall VmaAllocation_T::~VmaAllocation_T(VmaAllocation_T *this)

{
  return;
}



/* VmaAllocation_T::InitBlockAllocation(VmaDeviceMemoryBlock*, VmaAllocHandle_T*, unsigned long,
   unsigned long, unsigned int, VmaSuballocationType, bool) */

void __thiscall
VmaAllocation_T::InitBlockAllocation
          (VmaAllocation_T *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined4 param_5,VmaAllocation_T param_7,char param_8)

{
  this[0x4c] = (VmaAllocation_T)0x1;
  *(undefined8 *)(this + 0x28) = param_3;
  *(undefined8 *)(this + 0x30) = param_4;
  *(undefined4 *)(this + 0x48) = param_5;
  if (param_8 != '\0') {
    this[0x4f] = (VmaAllocation_T)((byte)this[0x4f] | 1);
  }
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = param_2;
  this[0x4d] = param_7;
  return;
}



/* VmaAllocation_T::InitDedicatedAllocation(VmaPool_T*, unsigned int, VkDeviceMemory_T*,
   VmaSuballocationType, void*, unsigned long) */

void __thiscall
VmaAllocation_T::InitDedicatedAllocation
          (VmaAllocation_T *this,undefined8 param_1,undefined4 param_2,undefined8 param_3,
          VmaAllocation_T param_5,long param_6,undefined8 param_7)

{
  this[0x4c] = (VmaAllocation_T)0x2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = param_7;
  *(undefined4 *)(this + 0x48) = param_2;
  this[0x4d] = param_5;
  if (param_6 != 0) {
    this[0x4f] = (VmaAllocation_T)((byte)this[0x4f] | 1);
  }
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = param_3;
  *(long *)(this + 0x10) = param_6;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  return;
}



/* VmaAllocation_T::SetName(VmaAllocator_T*, char const*) */

void __thiscall
VmaAllocation_T::SetName(VmaAllocation_T *this,VmaAllocator_T *param_1,char *param_2)

{
  size_t sVar1;
  void *pvVar2;
  
  if (*(void **)(this + 0x40) != (void *)0x0) {
    if ((param_1[0x20] == (VmaAllocator_T)0x0) || (*(code **)(param_1 + 0x40) == (code *)0x0)) {
      free(*(void **)(this + 0x40));
    }
    else {
      (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x28));
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    sVar1 = sVar1 + 1;
    if ((param_1[0x20] == (VmaAllocator_T)0x0) || (*(code **)(param_1 + 0x30) == (code *)0x0)) {
      pvVar2 = (void *)aligned_alloc(1,sVar1);
    }
    else {
      pvVar2 = (void *)(**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x28),sVar1,1,1);
    }
    pvVar2 = memcpy(pvVar2,param_2,sVar1);
    *(void **)(this + 0x40) = pvVar2;
  }
  return;
}



/* VmaAllocation_T::SwapBlockAllocation(VmaAllocator_T*, VmaAllocation_T*) */

VmaAllocation_T __thiscall
VmaAllocation_T::SwapBlockAllocation
          (VmaAllocation_T *this,VmaAllocator_T *param_1,VmaAllocation_T *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (this[0x4e] != (VmaAllocation_T)0x0) {
    VmaDeviceMemoryBlock::Unmap(*(VmaDeviceMemoryBlock **)this,param_1,(uint)(byte)this[0x4e]);
  }
  (**(code **)(*(long *)**(undefined8 **)this + 0xb0))
            ((long *)**(undefined8 **)this,*(undefined8 *)(this + 8),param_2);
  uVar1 = *(undefined8 *)this;
  uVar2 = *(undefined8 *)(this + 8);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)param_2 = uVar1;
  *(undefined8 *)(param_2 + 8) = uVar2;
  (**(code **)(*(long *)**(undefined8 **)this + 0xb0))
            ((long *)**(undefined8 **)this,*(undefined8 *)(this + 8),this);
  uVar1 = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  return this[0x4e];
}



/* VmaAllocation_T::GetAllocHandle() const */

undefined8 __thiscall VmaAllocation_T::GetAllocHandle(VmaAllocation_T *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (this[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = *(undefined8 *)(this + 8);
  }
  return uVar1;
}



/* VmaAllocation_T::GetOffset() const */

undefined8 __thiscall VmaAllocation_T::GetOffset(VmaAllocation_T *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (this[0x4c] != (VmaAllocation_T)0x1) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)**(undefined8 **)this + 0x48);
                    /* WARNING: Could not recover jumptable at 0x001047e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)
                    ((long *)**(undefined8 **)this,*(undefined8 *)(this + 8),UNRECOVERED_JUMPTABLE);
  return uVar1;
}



/* VmaAllocation_T::GetParentPool() const */

undefined8 __thiscall VmaAllocation_T::GetParentPool(VmaAllocation_T *this)

{
  if (this[0x4c] == (VmaAllocation_T)0x1) {
    return *(undefined8 *)(*(long *)this + 8);
  }
  if (this[0x4c] != (VmaAllocation_T)0x2) {
    return 0;
  }
  return *(undefined8 *)this;
}



/* VmaAllocation_T::GetMemory() const */

undefined8 __thiscall VmaAllocation_T::GetMemory(VmaAllocation_T *this)

{
  if (this[0x4c] == (VmaAllocation_T)0x1) {
    return *(undefined8 *)(*(long *)this + 0x18);
  }
  if (this[0x4c] != (VmaAllocation_T)0x2) {
    return 0;
  }
  return *(undefined8 *)(this + 8);
}



/* VmaAllocation_T::GetMappedData() const */

long __thiscall VmaAllocation_T::GetMappedData(VmaAllocation_T *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (this[0x4c] == (VmaAllocation_T)0x1) {
    if ((this[0x4e] != (VmaAllocation_T)0x0) || (((byte)this[0x4f] & 1) != 0)) {
      lVar1 = (*(undefined8 **)this)[0xb];
      plVar2 = (long *)**(undefined8 **)this;
      lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)(this + 8));
      return lVar3 + lVar1;
    }
  }
  else if (this[0x4c] == (VmaAllocation_T)0x2) {
    return *(long *)(this + 0x10);
  }
  return 0;
}



/* VmaAllocation_T::BlockAllocMap() */

void __thiscall VmaAllocation_T::BlockAllocMap(VmaAllocation_T *this)

{
  if (this[0x4e] != (VmaAllocation_T)0xff) {
    this[0x4e] = (VmaAllocation_T)((char)this[0x4e] + '\x01');
  }
  return;
}



/* VmaAllocation_T::BlockAllocUnmap() */

void __thiscall VmaAllocation_T::BlockAllocUnmap(VmaAllocation_T *this)

{
  if (this[0x4e] != (VmaAllocation_T)0x0) {
    this[0x4e] = (VmaAllocation_T)((char)this[0x4e] + -1);
  }
  return;
}



/* VmaAllocation_T::DedicatedAllocMap(VmaAllocator_T*, void**) */

undefined8 __thiscall
VmaAllocation_T::DedicatedAllocMap(VmaAllocation_T *this,VmaAllocator_T *param_1,void **param_2)

{
  VmaAllocation_T VVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  VVar1 = this[0x4e];
  if (VVar1 == (VmaAllocation_T)0x0) {
    if (((byte)this[0x4f] & 1) == 0) {
      uVar3 = (**(code **)(param_1 + 0x1678))
                        (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(this + 8),0,
                         0xffffffffffffffff,0,param_2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      pvVar2 = *param_2;
      this[0x4e] = (VmaAllocation_T)0x1;
      *(void **)(this + 0x10) = pvVar2;
      return uVar3;
    }
  }
  else if (VVar1 == (VmaAllocation_T)0xff) {
    return 0xfffffffb;
  }
  *param_2 = *(void **)(this + 0x10);
  this[0x4e] = (VmaAllocation_T)((char)VVar1 + '\x01');
  return 0;
}



/* VmaAllocation_T::DedicatedAllocUnmap(VmaAllocator_T*) */

void __thiscall VmaAllocation_T::DedicatedAllocUnmap(VmaAllocation_T *this,VmaAllocator_T *param_1)

{
  VmaAllocation_T VVar1;
  
  if (((this[0x4e] != (VmaAllocation_T)0x0) &&
      (VVar1 = (VmaAllocation_T)((char)this[0x4e] + -1), this[0x4e] = VVar1,
      VVar1 == (VmaAllocation_T)0x0)) && (((byte)this[0x4f] & 1) == 0)) {
    *(undefined8 *)(this + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00104996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x1680))(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(this + 8));
    return;
  }
  return;
}



/* VmaAllocation_T::FreeName(VmaAllocator_T*) */

void __thiscall VmaAllocation_T::FreeName(VmaAllocation_T *this,VmaAllocator_T *param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(this + 0x40);
  if (__ptr != (void *)0x0) {
    if ((param_1[0x20] == (VmaAllocator_T)0x0) || (*(code **)(param_1 + 0x40) == (code *)0x0)) {
      free(__ptr);
    }
    else {
      (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x28),__ptr);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  return;
}



/* VmaBlockVector::VmaBlockVector(VmaAllocator_T*, VmaPool_T*, unsigned int, unsigned long, unsigned
   long, unsigned long, unsigned long, bool, unsigned int, float, unsigned long, void*) */

void __thiscall
VmaBlockVector::VmaBlockVector
          (VmaBlockVector *this,VmaAllocator_T *param_1,VmaPool_T *param_2,uint param_3,
          ulong param_4,ulong param_5,ulong param_6,ulong param_7,bool param_8,uint param_9,
          float param_10,ulong param_11,void *param_12)

{
  VmaAllocator_T VVar1;
  VmaAllocator_T *pVVar2;
  
  *(VmaPool_T **)(this + 8) = param_2;
  *(float *)(this + 0x40) = param_10;
  *(ulong *)(this + 0x28) = param_6;
  *(undefined8 *)(this + 0x88) = 0;
  *(ulong *)(this + 0x30) = param_7;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  this[0x38] = (VmaBlockVector)param_8;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(uint *)(this + 0x3c) = param_9;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(ulong *)(this + 0x48) = param_11;
  *(VmaAllocator_T **)this = param_1;
  *(void **)(this + 0x50) = param_12;
  pVVar2 = (VmaAllocator_T *)0x0;
  VVar1 = param_1[0x20];
  *(uint *)(this + 0x10) = param_3;
  *(ulong *)(this + 0x18) = param_4;
  *(ulong *)(this + 0x20) = param_5;
  if (VVar1 != (VmaAllocator_T)0x0) {
    pVVar2 = param_1 + 0x28;
  }
  *(VmaAllocator_T **)(this + 0x90) = pVVar2;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xb4] = (VmaBlockVector)0x1;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  return;
}



/* VmaBlockVector::AddStatistics(VmaStatistics&) */

void __thiscall VmaBlockVector::AddStatistics(VmaBlockVector *this,VmaStatistics *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  pthread_rwlock_t *__rwlock;
  
  if (**(char **)this == '\0') {
    uVar4 = *(ulong *)(this + 0xa0);
    __rwlock = (pthread_rwlock_t *)0x0;
    if (uVar4 == 0) {
      return;
    }
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 0x58);
    do {
      iVar2 = pthread_rwlock_rdlock(__rwlock);
    } while (iVar2 == 0xb);
    if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    uVar4 = *(ulong *)(this + 0xa0);
    if (uVar4 == 0) goto LAB_00104b1f;
  }
  uVar3 = 0;
  do {
    plVar1 = (long *)**(undefined8 **)(*(long *)(this + 0x98) + uVar3 * 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,param_1);
    uVar3 = (ulong)((int)uVar3 + 1);
  } while (uVar3 < uVar4);
  if (__rwlock == (pthread_rwlock_t *)0x0) {
    return;
  }
LAB_00104b1f:
  pthread_rwlock_unlock(__rwlock);
  return;
}



/* VmaBlockVector::AddDetailedStatistics(VmaDetailedStatistics&) */

void __thiscall
VmaBlockVector::AddDetailedStatistics(VmaBlockVector *this,VmaDetailedStatistics *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  pthread_rwlock_t *__rwlock;
  
  if (**(char **)this == '\0') {
    uVar4 = *(ulong *)(this + 0xa0);
    __rwlock = (pthread_rwlock_t *)0x0;
    if (uVar4 == 0) {
      return;
    }
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 0x58);
    do {
      iVar2 = pthread_rwlock_rdlock(__rwlock);
    } while (iVar2 == 0xb);
    if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    uVar4 = *(ulong *)(this + 0xa0);
    if (uVar4 == 0) goto LAB_00104bcf;
  }
  uVar3 = 0;
  do {
    plVar1 = (long *)**(undefined8 **)(*(long *)(this + 0x98) + uVar3 * 8);
    (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
    uVar3 = (ulong)((int)uVar3 + 1);
  } while (uVar3 < uVar4);
  if (__rwlock == (pthread_rwlock_t *)0x0) {
    return;
  }
LAB_00104bcf:
  pthread_rwlock_unlock(__rwlock);
  return;
}



/* VmaBlockVector::IsEmpty() */

ulong __thiscall VmaBlockVector::IsEmpty(VmaBlockVector *this)

{
  long lVar1;
  int iVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulong)this >> 8);
  if (**(char **)this == '\0') {
    return CONCAT71(uVar3,*(long *)(this + 0xa0) == 0) & 0xffffffff;
  }
  do {
    iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0x58));
  } while (iVar2 == 0xb);
  if (iVar2 != 0x23) {
    lVar1 = *(long *)(this + 0xa0);
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0x58));
    return CONCAT71(uVar3,lVar1 == 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* VmaBlockVector::IsCorruptionDetectionEnabled() const */

undefined8 VmaBlockVector::IsCorruptionDetectionEnabled(void)

{
  return 0;
}



/* VmaBlockVector::CalcMaxBlockSize() const */

ulong __thiscall VmaBlockVector::CalcMaxBlockSize(VmaBlockVector *this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0xa0);
  uVar3 = 0;
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 == -1) {
      return uVar3;
    }
    uVar1 = *(ulong *)(**(long **)(*(long *)(this + 0x98) + lVar2 * 8) + 8);
    if (uVar3 < uVar1) {
      uVar3 = uVar1;
    }
  } while (uVar3 < *(ulong *)(this + 0x18));
  return uVar3;
}



/* VmaBlockVector::IncrementallySortBlocks() */

void __thiscall VmaBlockVector::IncrementallySortBlocks(VmaBlockVector *this)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (this[0xb4] == (VmaBlockVector)0x0) {
    return;
  }
  if ((*(int *)(this + 0x3c) != 4) && (1 < *(ulong *)(this + 0xa0))) {
    uVar6 = 1;
    do {
      lVar1 = uVar6 * 8;
      uVar3 = (**(code **)(*(long *)**(undefined8 **)(*(long *)(this + 0x98) + -8 + lVar1) + 0x30))
                        ();
      uVar4 = (**(code **)(*(long *)**(undefined8 **)(*(long *)(this + 0x98) + uVar6 * 8) + 0x30))()
      ;
      if (uVar4 < uVar3) {
        puVar7 = (undefined8 *)(lVar1 + *(long *)(this + 0x98));
        puVar5 = (undefined8 *)(*(long *)(this + 0x98) + lVar1 + -8);
        uVar2 = *puVar5;
        *puVar5 = *puVar7;
        *puVar7 = uVar2;
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulong *)(this + 0xa0));
  }
  return;
}



/* VmaBlockVector::SortByFreeSize() */

void __thiscall VmaBlockVector::SortByFreeSize(VmaBlockVector *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar2 = *(undefined8 **)(this + 0x98);
  lVar7 = *(long *)(this + 0xa0) * 8;
  puVar1 = puVar2 + *(long *)(this + 0xa0);
  if (puVar2 == puVar1) {
    return;
  }
  uVar5 = lVar7 >> 3;
  if (uVar5 == 0) {
    std::
    __introsort_loop<VmaDeviceMemoryBlock**,long,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
              (puVar2,puVar1,0xfffffffffffffffe);
  }
  else {
    lVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    std::
    __introsort_loop<VmaDeviceMemoryBlock**,long,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
              (puVar2,puVar1,(long)(int)lVar4 * 2);
    if (0x80 < lVar7) {
      puVar9 = puVar2 + 0x10;
      std::
      __insertion_sort<VmaDeviceMemoryBlock**,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
                (puVar2,puVar9);
      for (; puVar1 != puVar9; puVar9 = puVar9 + 1) {
        puVar2 = (undefined8 *)*puVar9;
        puVar8 = puVar9;
        while( true ) {
          puVar3 = (undefined8 *)puVar8[-1];
          uVar5 = (**(code **)(*(long *)*puVar2 + 0x30))();
          uVar6 = (**(code **)(*(long *)*puVar3 + 0x30))();
          if (uVar6 <= uVar5) break;
          *puVar8 = puVar8[-1];
          puVar8 = puVar8 + -1;
        }
        *puVar8 = puVar2;
      }
      return;
    }
  }
  std::
  __insertion_sort<VmaDeviceMemoryBlock**,__gnu_cxx::__ops::_Iter_comp_iter<VmaBlockVector::SortByFreeSize()::_lambda(VmaDeviceMemoryBlock*,VmaDeviceMemoryBlock*)_1_>>
            (puVar2,puVar1);
  return;
}



/* VmaBlockVector::HasEmptyBlock() */

undefined8 __thiscall VmaBlockVector::HasEmptyBlock(VmaBlockVector *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0xa0);
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      uVar2 = (**(code **)(*(long *)**(undefined8 **)(*(long *)(this + 0x98) + lVar3 * 8) + 0x38))()
      ;
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
  return 0;
}



/* VmaBlockVector::CheckCorruption() */

undefined8 VmaBlockVector::CheckCorruption(void)

{
  return 0xfffffff8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaDefragmentationContext_T::VmaDefragmentationContext_T(VmaAllocator_T*, VmaDefragmentationInfo
   const&) */

void __thiscall
VmaDefragmentationContext_T::VmaDefragmentationContext_T
          (VmaDefragmentationContext_T *this,VmaAllocator_T *param_1,VmaDefragmentationInfo *param_2
          )

{
  VmaAllocator_T VVar1;
  VmaBlockVector *pVVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  VmaAllocator_T *pVVar8;
  uint uVar9;
  
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 == 0) {
    lVar5 = -1;
  }
  *(long *)this = lVar5;
  iVar4 = *(int *)(param_2 + 0x18);
  if (iVar4 == 0) {
    iVar4 = -1;
  }
  VVar1 = param_1[0x20];
  *(int *)(this + 8) = iVar4;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 0x28);
  pVVar8 = param_1 + 0x28;
  if (VVar1 == (VmaAllocator_T)0x0) {
    pVVar8 = (VmaAllocator_T *)0x0;
  }
  uVar9 = *(uint *)param_2;
  pVVar2 = *(VmaBlockVector **)(param_2 + 8);
  *(VmaAllocator_T **)(this + 0x20) = pVVar8;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  uVar9 = uVar9 & 0xf;
  *(VmaAllocator_T **)(this + 0x28) = pVVar8;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x48] = (VmaDefragmentationContext_T)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(uint *)(this + 0x4c) = uVar9;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  if (pVVar2 == (VmaBlockVector *)0x0) {
    iVar4 = *(int *)(param_1 + 0x408);
    pVVar8 = param_1 + 0x610;
    *(undefined8 *)(this + 0x58) = 0;
    *(VmaAllocator_T **)(this + 0x60) = pVVar8;
    *(int *)(this + 0x50) = iVar4;
    if (iVar4 != 0) {
      lVar5 = 0;
      while( true ) {
        pVVar2 = *(VmaBlockVector **)(pVVar8 + lVar5 * 8);
        if (pVVar2 != (VmaBlockVector *)0x0) {
          pVVar2[0xb4] = (VmaBlockVector)0x0;
          VmaBlockVector::SortByFreeSize(pVVar2);
        }
        lVar5 = lVar5 + 1;
        if (*(uint *)(this + 0x50) <= (uint)lVar5) break;
        pVVar8 = *(VmaAllocator_T **)(this + 0x60);
      }
      uVar9 = *(uint *)(this + 0x4c);
    }
  }
  else {
    *(undefined4 *)(this + 0x50) = 1;
    *(VmaBlockVector **)(this + 0x58) = pVVar2;
    *(VmaDefragmentationContext_T **)(this + 0x60) = this + 0x58;
    pVVar2[0xb4] = (VmaBlockVector)0x0;
    VmaBlockVector::SortByFreeSize(pVVar2);
    uVar9 = *(uint *)(this + 0x4c);
  }
  if (uVar9 != 2) {
    if (uVar9 == 8) {
      if (*(ulong *)(param_1 + 0x228) < 2) {
        return;
      }
      if (*(code **)(param_1 + 0x30) == (code *)0x0) {
        puVar7 = (undefined1 *)aligned_alloc(8,(ulong)*(uint *)(this + 0x50) << 4);
      }
      else {
        puVar7 = (undefined1 *)
                 (**(code **)(param_1 + 0x30))
                           (*(undefined8 *)(param_1 + 0x28),(ulong)*(uint *)(this + 0x50) << 4,8,1);
      }
      *puVar7 = 1;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *(undefined1 **)(this + 0xa0) = puVar7;
      return;
    }
    if (uVar9 != 0) {
      return;
    }
    *(undefined4 *)(this + 0x4c) = 2;
  }
  if (*(code **)(param_1 + 0x30) == (code *)0x0) {
    puVar6 = (undefined8 *)aligned_alloc(8,(ulong)*(uint *)(this + 0x50) << 4);
  }
  else {
    puVar6 = (undefined8 *)
             (**(code **)(param_1 + 0x30))
                       (*(undefined8 *)(param_1 + 0x28),(ulong)*(uint *)(this + 0x50) << 4,8,1);
  }
  uVar3 = _UNK_001153b8;
  *puVar6 = __LC8;
  puVar6[1] = uVar3;
  *(undefined8 **)(this + 0xa0) = puVar6;
  return;
}



/* VmaDefragmentationContext_T::~VmaDefragmentationContext_T() */

void __thiscall
VmaDefragmentationContext_T::~VmaDefragmentationContext_T(VmaDefragmentationContext_T *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (*(long *)(this + 0x58) == 0) {
    if (*(uint *)(this + 0x50) != 0) {
      plVar3 = *(long **)(this + 0x60);
      plVar1 = plVar3 + *(uint *)(this + 0x50);
      do {
        if (*plVar3 != 0) {
          *(undefined1 *)(*plVar3 + 0xb4) = 1;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
  }
  else {
    *(undefined1 *)(*(long *)(this + 0x58) + 0xb4) = 1;
  }
  if ((*(void **)(this + 0xa0) != (void *)0x0) &&
     ((*(int *)(this + 0x4c) == 2 || (*(int *)(this + 0x4c) == 8)))) {
    puVar2 = *(undefined8 **)(this + 0x20);
    if ((puVar2 == (undefined8 *)0x0) || ((code *)puVar2[3] == (code *)0x0)) {
      free(*(void **)(this + 0xa0));
    }
    else {
      (*(code *)puVar2[3])(*puVar2);
    }
  }
  puVar2 = *(undefined8 **)(this + 0x28);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)puVar2[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001051a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar2[3])(*puVar2);
    return;
  }
  free(*(void **)(this + 0x30));
  return;
}



/* VmaDefragmentationContext_T::GetMoveData(VmaAllocHandle_T*, VmaBlockMetadata*) */

VmaDefragmentationContext_T * __thiscall
VmaDefragmentationContext_T::GetMoveData
          (VmaDefragmentationContext_T *this,VmaAllocHandle_T *param_1,VmaBlockMetadata *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *(long *)param_2;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x28) = 0;
  lVar5 = (**(code **)(lVar5 + 0x50))(param_2);
  bVar1 = *(byte *)(lVar5 + 0x4d);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  uVar3 = *(undefined8 *)(lVar5 + 0x30);
  *(long *)(this + 0x20) = lVar5;
  *(uint *)(this + 0x10) = (uint)bVar1;
  bVar1 = *(byte *)(lVar5 + 0x4f);
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar2;
  uVar4 = (bVar1 & 1) << 2;
  if ((bVar1 & 2) != 0) {
    uVar4 = uVar4 | 0xc00;
  }
  *(uint *)(this + 0x14) = uVar4;
  return this;
}



/* VmaDefragmentationContext_T::CheckCounters(unsigned long) */

undefined8 __thiscall
VmaDefragmentationContext_T::CheckCounters(VmaDefragmentationContext_T *this,ulong param_1)

{
  VmaDefragmentationContext_T VVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(code **)(this + 0x10) != (code *)0x0) &&
     (iVar2 = (**(code **)(this + 0x10))(*(undefined8 *)(this + 0x18)), iVar2 != 0)) {
    return 2;
  }
  if (*(ulong *)this < *(long *)(this + 0x88) + param_1) {
    VVar1 = this[0x48];
    uVar3 = 1;
    this[0x48] = (VmaDefragmentationContext_T)((char)VVar1 + 1U);
    if (0xf < (byte)((char)VVar1 + 1U)) {
      return 2;
    }
  }
  else {
    this[0x48] = (VmaDefragmentationContext_T)0x0;
    uVar3 = 0;
  }
  return uVar3;
}



/* VmaDefragmentationContext_T::IncrementCounters(unsigned long) */

bool __thiscall
VmaDefragmentationContext_T::IncrementCounters(VmaDefragmentationContext_T *this,ulong param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  iVar1 = *(int *)(this + 0x98);
  lVar2 = *(long *)(this + 0x88);
  bVar3 = true;
  *(ulong *)(this + 0x88) = param_1 + lVar2;
  *(uint *)(this + 0x98) = iVar1 + 1U;
  if (iVar1 + 1U < *(uint *)(this + 8)) {
    bVar3 = *(ulong *)this <= param_1 + lVar2;
  }
  return bVar3;
}



/* VmaDefragmentationContext_T::UpdateVectorStatistics(VmaBlockVector&,
   VmaDefragmentationContext_T::StateBalanced&) */

void __thiscall
VmaDefragmentationContext_T::UpdateVectorStatistics
          (VmaDefragmentationContext_T *this,VmaBlockVector *param_1,StateBalanced *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  *(undefined1 (*) [16])param_2 = (undefined1  [16])0x0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    do {
      lVar5 = uVar7 * 8;
      uVar7 = uVar7 + 1;
      plVar1 = (long *)**(long **)(*(long *)(param_1 + 0x98) + lVar5);
      lVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      uVar9 = uVar9 + lVar5;
      lVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
      uVar8 = uVar8 + lVar5;
      lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1);
      lVar5 = plVar1[1];
      lVar2 = *(long *)(param_2 + 8);
      lVar3 = *(long *)param_2;
      *(long *)param_2 = lVar6 + *(long *)param_2;
      *(long *)(param_2 + 8) = lVar5 + *(long *)(param_2 + 8);
    } while (uVar7 < *(ulong *)(param_1 + 0xa0));
    *(ulong *)(param_2 + 8) = (ulong)(lVar5 + (lVar2 - (lVar6 + lVar3))) / uVar9;
    *(ulong *)param_2 = (ulong)(lVar6 + lVar3) / uVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* VmaPool_T::VmaPool_T(VmaAllocator_T*, VmaPoolCreateInfo const&, unsigned long) */

void __thiscall
VmaPool_T::VmaPool_T
          (VmaPool_T *this,VmaAllocator_T *param_1,VmaPoolCreateInfo *param_2,ulong param_3)

{
  VmaAllocator_T VVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  VmaAllocator_T *pVVar9;
  ulong uVar10;
  long lVar11;
  
  uVar2 = *(uint *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = 1;
  if (((*(uint *)(param_1 + (ulong)uVar2 * 8 + 0x40c) & 6) == 2) &&
     (uVar8 = *(ulong *)(param_1 + 1000), uVar8 == 0)) {
    uVar8 = 1;
  }
  uVar3 = *(uint *)(param_2 + 4);
  lVar11 = 1;
  if (uVar8 < *(ulong *)(param_2 + 0x28)) {
    uVar8 = *(ulong *)(param_2 + 0x28);
  }
  uVar5 = *(ulong *)(param_2 + 8);
  if (((uVar3 & 2) == 0) && (lVar11 = *(long *)(param_1 + 0x228), lVar11 == 0)) {
    lVar11 = 1;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_2 + 0x20);
  uVar10 = uVar5;
  if (uVar5 == 0) {
    uVar10 = param_3;
  }
  *(VmaAllocator_T **)this = param_1;
  *(undefined8 *)(this + 0x20) = uVar7;
  pVVar9 = (VmaAllocator_T *)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  VVar1 = param_1[0x20];
  *(VmaPool_T **)(this + 8) = this;
  *(uint *)(this + 0x10) = uVar2;
  *(ulong *)(this + 0x18) = uVar10;
  *(undefined8 *)(this + 0x28) = uVar6;
  *(long *)(this + 0x30) = lVar11;
  this[0x38] = (VmaPool_T)(uVar5 != 0);
  *(uint *)(this + 0x3c) = uVar3 & 4;
  *(ulong *)(this + 0x48) = uVar8;
  *(undefined8 *)(this + 0x50) = uVar4;
  if (VVar1 != (VmaAllocator_T)0x0) {
    pVVar9 = param_1 + 0x28;
  }
  *(VmaAllocator_T **)(this + 0x90) = pVVar9;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xb4] = (VmaPool_T)0x1;
  this[0xb8] = (VmaPool_T)0x1;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x118) = (undefined1  [16])0x0;
  return;
}



/* VmaPool_T::SetName(char const*) */

void __thiscall VmaPool_T::SetName(VmaPool_T *this,char *param_1)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  
  lVar1 = *(long *)this;
  pvVar3 = *(void **)(this + 0x118);
  if (*(char *)(lVar1 + 0x20) == '\0') {
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    if (param_1 == (char *)0x0) goto LAB_001055fa;
    sVar2 = strlen(param_1);
    sVar2 = sVar2 + 1;
LAB_0010561c:
    pvVar3 = (void *)aligned_alloc(1,sVar2);
  }
  else {
    if (pvVar3 != (void *)0x0) {
      if (*(code **)(lVar1 + 0x40) == (code *)0x0) {
        free(pvVar3);
      }
      else {
        (**(code **)(lVar1 + 0x40))(*(undefined8 *)(lVar1 + 0x28));
      }
    }
    if (param_1 == (char *)0x0) {
LAB_001055fa:
      pvVar3 = (void *)0x0;
      goto LAB_001055fc;
    }
    sVar2 = strlen(param_1);
    sVar2 = sVar2 + 1;
    if (*(code **)(lVar1 + 0x30) == (code *)0x0) goto LAB_0010561c;
    pvVar3 = (void *)(**(code **)(lVar1 + 0x30))(*(undefined8 *)(lVar1 + 0x28),sVar2,1,1);
  }
  pvVar3 = memcpy(pvVar3,param_1,sVar2);
LAB_001055fc:
  *(void **)(this + 0x118) = pvVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaAllocator_T::ImportVulkanFunctions_Static() */

void __thiscall VmaAllocator_T::ImportVulkanFunctions_Static(VmaAllocator_T *this)

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
  
  uVar4 = _vkFlushMappedMemoryRanges;
  uVar3 = _vkMapMemory;
  uVar2 = _vkAllocateMemory;
  uVar1 = _vkGetPhysicalDeviceProperties;
  *(undefined8 *)(this + 0x16d8) = _vkCmdCopyBuffer;
  uVar11 = _vkCreateBuffer;
  uVar10 = _vkInvalidateMappedMemoryRanges;
  uVar9 = _vkGetBufferMemoryRequirements;
  uVar8 = _vkUnmapMemory;
  uVar7 = _vkFreeMemory;
  uVar6 = _vkBindBufferMemory;
  uVar5 = _vkGetPhysicalDeviceMemoryProperties;
  *(undefined8 *)(this + 0x1658) = uVar1;
  *(undefined8 *)(this + 0x1660) = uVar5;
  uVar12 = _vkGetInstanceProcAddr;
  uVar5 = _vkBindImageMemory;
  uVar1 = _vkCreateImage;
  *(undefined8 *)(this + 0x1668) = uVar2;
  *(undefined8 *)(this + 0x1670) = uVar7;
  uVar7 = _vkDestroyBuffer;
  uVar2 = _vkGetImageMemoryRequirements;
  *(undefined8 *)(this + 0x1678) = uVar3;
  *(undefined8 *)(this + 0x1680) = uVar8;
  uVar8 = _vkGetDeviceProcAddr;
  uVar3 = _vkDestroyImage;
  *(undefined8 *)(this + 0x1688) = uVar4;
  *(undefined8 *)(this + 0x1690) = uVar10;
  *(undefined8 *)(this + 0x1648) = uVar12;
  *(undefined8 *)(this + 0x1650) = uVar8;
  *(undefined8 *)(this + 0x1698) = uVar6;
  *(undefined8 *)(this + 0x16a0) = uVar5;
  *(undefined8 *)(this + 0x16a8) = uVar9;
  *(undefined8 *)(this + 0x16b0) = uVar2;
  *(undefined8 *)(this + 0x16b8) = uVar11;
  *(undefined8 *)(this + 0x16c0) = uVar7;
  *(undefined8 *)(this + 0x16c8) = uVar1;
  *(undefined8 *)(this + 0x16d0) = uVar3;
  uVar3 = _vkBindImageMemory2;
  uVar2 = _vkGetBufferMemoryRequirements2;
  uVar1 = _vkBindBufferMemory2;
  if (0x400fff < *(uint *)(this + 4)) {
    *(undefined8 *)(this + 0x1700) = _vkGetPhysicalDeviceMemoryProperties2;
    uVar4 = _vkGetImageMemoryRequirements2;
    *(undefined8 *)(this + 0x16f0) = uVar1;
    *(undefined8 *)(this + 0x16f8) = uVar3;
    *(undefined8 *)(this + 0x16e0) = uVar2;
    *(undefined8 *)(this + 0x16e8) = uVar4;
    uVar1 = _vkGetDeviceImageMemoryRequirements;
    if (0x402fff < *(uint *)(this + 4)) {
      *(undefined8 *)(this + 0x1708) = _vkGetDeviceBufferMemoryRequirements;
      *(undefined8 *)(this + 0x1710) = uVar1;
    }
  }
  return;
}



/* VmaAllocator_T::ImportVulkanFunctions_Custom(VmaVulkanFunctions const*) */

void __thiscall
VmaAllocator_T::ImportVulkanFunctions_Custom(VmaAllocator_T *this,VmaVulkanFunctions *param_1)

{
  if (*(long *)param_1 != 0) {
    *(long *)(this + 0x1648) = *(long *)param_1;
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(this + 0x1650) = *(long *)(param_1 + 8);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(this + 0x1658) = *(long *)(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(this + 0x1660) = *(long *)(param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(this + 0x1668) = *(long *)(param_1 + 0x20);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(this + 0x1670) = *(long *)(param_1 + 0x28);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(this + 0x1678) = *(long *)(param_1 + 0x30);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(this + 0x1680) = *(long *)(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(this + 0x1688) = *(long *)(param_1 + 0x40);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(this + 0x1690) = *(long *)(param_1 + 0x48);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(this + 0x1698) = *(long *)(param_1 + 0x50);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(this + 0x16a0) = *(long *)(param_1 + 0x58);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(this + 0x16a8) = *(long *)(param_1 + 0x60);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(this + 0x16b0) = *(long *)(param_1 + 0x68);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(this + 0x16b8) = *(long *)(param_1 + 0x70);
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(this + 0x16c0) = *(long *)(param_1 + 0x78);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(this + 0x16c8) = *(long *)(param_1 + 0x80);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(this + 0x16d0) = *(long *)(param_1 + 0x88);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(this + 0x16d8) = *(long *)(param_1 + 0x90);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(this + 0x16e0) = *(long *)(param_1 + 0x98);
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(this + 0x16e8) = *(long *)(param_1 + 0xa0);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(this + 0x16f0) = *(long *)(param_1 + 0xa8);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(long *)(this + 0x16f8) = *(long *)(param_1 + 0xb0);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(this + 0x1700) = *(long *)(param_1 + 0xb8);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(this + 0x1708) = *(long *)(param_1 + 0xc0);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(long *)(this + 0x1710) = *(long *)(param_1 + 200);
  }
  return;
}



/* VmaAllocator_T::ImportVulkanFunctions_Dynamic() */

void __thiscall VmaAllocator_T::ImportVulkanFunctions_Dynamic(VmaAllocator_T *this)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(long *)(this + 0x1658) == 0) {
    uVar3 = (**(code **)(this + 0x1648))
                      (*(undefined8 *)(this + 0x18),"vkGetPhysicalDeviceProperties");
    *(undefined8 *)(this + 0x1658) = uVar3;
  }
  if (*(long *)(this + 0x1660) == 0) {
    uVar3 = (**(code **)(this + 0x1648))
                      (*(undefined8 *)(this + 0x18),"vkGetPhysicalDeviceMemoryProperties");
    *(undefined8 *)(this + 0x1660) = uVar3;
  }
  if (*(long *)(this + 0x1668) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkAllocateMemory");
    *(undefined8 *)(this + 0x1668) = uVar3;
  }
  if (*(long *)(this + 0x1670) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkFreeMemory");
    *(undefined8 *)(this + 0x1670) = uVar3;
  }
  if (*(long *)(this + 0x1678) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkMapMemory");
    *(undefined8 *)(this + 0x1678) = uVar3;
  }
  if (*(long *)(this + 0x1680) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkUnmapMemory");
    *(undefined8 *)(this + 0x1680) = uVar3;
  }
  if (*(long *)(this + 0x1688) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkFlushMappedMemoryRanges");
    *(undefined8 *)(this + 0x1688) = uVar3;
  }
  if (*(long *)(this + 0x1690) == 0) {
    uVar3 = (**(code **)(this + 0x1650))
                      (*(undefined8 *)(this + 0x10),"vkInvalidateMappedMemoryRanges");
    *(undefined8 *)(this + 0x1690) = uVar3;
  }
  if (*(long *)(this + 0x1698) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkBindBufferMemory");
    *(undefined8 *)(this + 0x1698) = uVar3;
  }
  if (*(long *)(this + 0x16a0) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkBindImageMemory");
    *(undefined8 *)(this + 0x16a0) = uVar3;
  }
  if (*(long *)(this + 0x16a8) == 0) {
    uVar3 = (**(code **)(this + 0x1650))
                      (*(undefined8 *)(this + 0x10),"vkGetBufferMemoryRequirements");
    *(undefined8 *)(this + 0x16a8) = uVar3;
  }
  if (*(long *)(this + 0x16b0) == 0) {
    uVar3 = (**(code **)(this + 0x1650))
                      (*(undefined8 *)(this + 0x10),"vkGetImageMemoryRequirements");
    *(undefined8 *)(this + 0x16b0) = uVar3;
  }
  if (*(long *)(this + 0x16b8) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkCreateBuffer");
    *(undefined8 *)(this + 0x16b8) = uVar3;
  }
  if (*(long *)(this + 0x16c0) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkDestroyBuffer");
    *(undefined8 *)(this + 0x16c0) = uVar3;
  }
  if (*(long *)(this + 0x16c8) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkCreateImage");
    *(undefined8 *)(this + 0x16c8) = uVar3;
  }
  if (*(long *)(this + 0x16d0) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkDestroyImage");
    *(undefined8 *)(this + 0x16d0) = uVar3;
  }
  if (*(long *)(this + 0x16d8) == 0) {
    uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkCmdCopyBuffer");
    *(undefined8 *)(this + 0x16d8) = uVar3;
  }
  if (*(uint *)(this + 4) < 0x401000) {
LAB_00105b90:
    if ((this[10] != (VmaAllocator_T)0x0) && (*(long *)(this + 0x1700) == 0)) {
      uVar3 = (**(code **)(this + 0x1648))
                        (*(undefined8 *)(this + 0x18),"vkGetPhysicalDeviceMemoryProperties2KHR");
      *(undefined8 *)(this + 0x1700) = uVar3;
    }
  }
  else {
    if (*(long *)(this + 0x16e0) == 0) {
      uVar3 = (**(code **)(this + 0x1650))
                        (*(undefined8 *)(this + 0x10),"vkGetBufferMemoryRequirements2");
      *(undefined8 *)(this + 0x16e0) = uVar3;
      if (*(long *)(this + 0x16e8) != 0) goto LAB_00105a7f;
LAB_00105e2e:
      uVar3 = (**(code **)(this + 0x1650))
                        (*(undefined8 *)(this + 0x10),"vkGetImageMemoryRequirements2");
      *(undefined8 *)(this + 0x16e8) = uVar3;
      if (*(long *)(this + 0x16f0) != 0) goto LAB_00105a8d;
LAB_00105e54:
      uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkBindBufferMemory2");
      lVar1 = *(long *)(this + 0x16f8);
      *(undefined8 *)(this + 0x16f0) = uVar3;
    }
    else {
      if (*(long *)(this + 0x16e8) == 0) goto LAB_00105e2e;
LAB_00105a7f:
      if (*(long *)(this + 0x16f0) == 0) goto LAB_00105e54;
LAB_00105a8d:
      lVar1 = *(long *)(this + 0x16f8);
    }
    if (lVar1 == 0) {
      uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkBindImageMemory2");
      *(undefined8 *)(this + 0x16f8) = uVar3;
    }
    if (*(uint *)(this + 4) < 0x401000) goto LAB_00105b90;
    if (*(long *)(this + 0x1700) == 0) {
      uVar3 = (**(code **)(this + 0x1648))
                        (*(undefined8 *)(this + 0x18),"vkGetPhysicalDeviceMemoryProperties2");
      *(undefined8 *)(this + 0x1700) = uVar3;
    }
  }
  if (this[8] != (VmaAllocator_T)0x0) {
    if (*(long *)(this + 0x16e0) == 0) {
      uVar3 = (**(code **)(this + 0x1650))
                        (*(undefined8 *)(this + 0x10),"vkGetBufferMemoryRequirements2KHR");
      lVar1 = *(long *)(this + 0x16e8);
      *(undefined8 *)(this + 0x16e0) = uVar3;
    }
    else {
      lVar1 = *(long *)(this + 0x16e8);
    }
    if (lVar1 == 0) {
      uVar3 = (**(code **)(this + 0x1650))
                        (*(undefined8 *)(this + 0x10),"vkGetImageMemoryRequirements2KHR");
      *(undefined8 *)(this + 0x16e8) = uVar3;
    }
  }
  if (this[9] != (VmaAllocator_T)0x0) {
    if (*(long *)(this + 0x16f0) == 0) {
      uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkBindBufferMemory2KHR");
      lVar1 = *(long *)(this + 0x16f8);
      *(undefined8 *)(this + 0x16f0) = uVar3;
    }
    else {
      lVar1 = *(long *)(this + 0x16f8);
    }
    if (lVar1 == 0) {
      uVar3 = (**(code **)(this + 0x1650))(*(undefined8 *)(this + 0x10),"vkBindImageMemory2KHR");
      *(undefined8 *)(this + 0x16f8) = uVar3;
    }
  }
  uVar2 = *(uint *)(this + 4);
  if (uVar2 < 0x401000) {
    if ((this[10] == (VmaAllocator_T)0x0) || (*(long *)(this + 0x1700) != 0)) goto LAB_00105b35;
    uVar3 = (**(code **)(this + 0x1648))
                      (*(undefined8 *)(this + 0x18),"vkGetPhysicalDeviceMemoryProperties2KHR");
    *(undefined8 *)(this + 0x1700) = uVar3;
    uVar2 = *(uint *)(this + 4);
  }
  else if (*(long *)(this + 0x1700) == 0) {
    uVar3 = (**(code **)(this + 0x1648))
                      (*(undefined8 *)(this + 0x18),"vkGetPhysicalDeviceMemoryProperties2");
    *(undefined8 *)(this + 0x1700) = uVar3;
    uVar2 = *(uint *)(this + 4);
  }
  if (0x402fff < uVar2) {
    if (*(long *)(this + 0x1708) == 0) {
      uVar3 = (**(code **)(this + 0x1650))
                        (*(undefined8 *)(this + 0x10),"vkGetDeviceBufferMemoryRequirements");
      lVar1 = *(long *)(this + 0x1710);
      *(undefined8 *)(this + 0x1708) = uVar3;
    }
    else {
      lVar1 = *(long *)(this + 0x1710);
    }
    if (lVar1 == 0) {
      uVar3 = (**(code **)(this + 0x1650))
                        (*(undefined8 *)(this + 0x10),"vkGetDeviceImageMemoryRequirements");
      *(undefined8 *)(this + 0x1710) = uVar3;
    }
  }
LAB_00105b35:
  if (this[0xe] != (VmaAllocator_T)0x0) {
    if (*(long *)(this + 0x1708) == 0) {
      uVar3 = (**(code **)(this + 0x1650))
                        (*(undefined8 *)(this + 0x10),"vkGetDeviceBufferMemoryRequirementsKHR");
      lVar1 = *(long *)(this + 0x1710);
      *(undefined8 *)(this + 0x1708) = uVar3;
    }
    else {
      lVar1 = *(long *)(this + 0x1710);
    }
    if (lVar1 == 0) {
      uVar3 = (**(code **)(this + 0x1650))
                        (*(undefined8 *)(this + 0x10),"vkGetDeviceImageMemoryRequirementsKHR");
      *(undefined8 *)(this + 0x1710) = uVar3;
      return;
    }
  }
  return;
}



/* VmaAllocator_T::ImportVulkanFunctions(VmaVulkanFunctions const*) */

void __thiscall
VmaAllocator_T::ImportVulkanFunctions(VmaAllocator_T *this,VmaVulkanFunctions *param_1)

{
  ImportVulkanFunctions_Static(this);
  if (param_1 != (VmaVulkanFunctions *)0x0) {
    ImportVulkanFunctions_Custom(this,param_1);
  }
  ImportVulkanFunctions_Dynamic(this);
  return;
}



/* VmaAllocator_T::VmaAllocator_T(VmaAllocatorCreateInfo const*) */

void __thiscall VmaAllocator_T::VmaAllocator_T(VmaAllocator_T *this,VmaAllocatorCreateInfo *param_1)

{
  VmaAllocator_T *pVVar1;
  uint uVar2;
  undefined8 uVar3;
  void *__src;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  VmaAllocator_T *pVVar7;
  code *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  VmaVulkanFunctions *pVVar14;
  VmaCurrentBudgetData *this_00;
  VmaAllocator_T VVar15;
  byte bVar16;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined8 uVar17;
  undefined8 uVar18;
  
  bVar16 = 0;
  pVVar1 = this + 0x28;
  uVar2 = *(uint *)param_1;
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar17;
  *this = (VmaAllocator_T)~(byte)uVar2;
  iVar11 = *(int *)(param_1 + 0x48);
  *this = (VmaAllocator_T)((byte)*this & 1);
  if (iVar11 == 0) {
    iVar11 = 0x400000;
  }
  *(int *)(this + 4) = iVar11;
  this[8] = (VmaAllocator_T)((byte)(uVar2 >> 1) & 1);
  this[9] = (VmaAllocator_T)((byte)(uVar2 >> 2) & 1);
  this[10] = (VmaAllocator_T)((byte)(uVar2 >> 3) & 1);
  this[0xb] = (VmaAllocator_T)((byte)(uVar2 >> 4) & 1);
  this[0xc] = (VmaAllocator_T)((byte)(uVar2 >> 5) & 1);
  this[0xd] = (VmaAllocator_T)((byte)(uVar2 >> 6) & 1);
  this[0xf] = (VmaAllocator_T)((byte)(uVar2 >> 8) & 1);
  puVar5 = *(undefined1 **)(param_1 + 0x20);
  this[0xe] = (VmaAllocator_T)((byte)uVar2 >> 7);
  VVar15 = (VmaAllocator_T)((undefined8 *)puVar5 != (undefined8 *)0x0);
  if (!(bool)VVar15) {
    puVar5 = VmaEmptyAllocationCallbacks;
  }
  this[0x20] = VVar15;
  uVar17 = *(undefined8 *)((long)puVar5 + 8);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)puVar5;
  *(undefined8 *)(this + 0x30) = uVar17;
  uVar17 = *(undefined8 *)((long)puVar5 + 0x18);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)((long)puVar5 + 0x10);
  *(undefined8 *)(this + 0x40) = uVar17;
  uVar17 = *(undefined8 *)((long)puVar5 + 0x20);
  uVar18 = *(undefined8 *)((long)puVar5 + 0x28);
  *(undefined8 *)(this + 0x90) = 0;
  *(VmaAllocator_T **)(this + 0x98) = pVVar1;
  *(undefined4 *)(this + 0xa0) = 0x400;
  *(VmaAllocator_T **)(this + 0xa8) = pVVar1;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x48) = uVar17;
  *(undefined8 *)(this + 0x50) = uVar18;
  uVar17 = 0;
  uVar18 = 0;
  *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
  pVVar7 = this + 0x710;
  do {
    *pVVar7 = (VmaAllocator_T)0x1;
    this_00 = (VmaCurrentBudgetData *)(pVVar7 + 0x58);
    *(undefined1 (*) [16])(pVVar7 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pVVar7 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pVVar7 + 0x28) = (undefined1  [16])0x0;
    *(undefined8 *)(pVVar7 + 0x38) = 0;
    *(undefined1 (*) [16])(pVVar7 + 0x40) = (undefined1  [16])0x0;
    *(undefined8 *)(pVVar7 + 0x50) = 0;
    pVVar7 = (VmaAllocator_T *)this_00;
  } while (this_00 != (VmaCurrentBudgetData *)(this + 0x1210));
  VmaCurrentBudgetData::VmaCurrentBudgetData(this_00);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x1550) = 0;
  *(undefined8 *)(this + 0x1558) = 0;
  *(undefined8 *)(this + 0x1560) = uVar3;
  *(undefined4 *)(this + 0x156c) = 0xffffffff;
  *(undefined8 *)(this + 0x1620) = 0;
  *(undefined8 *)(this + 0x1638) = 0;
  *(undefined4 *)(this + 0x1640) = 0;
  *(undefined4 *)(this + 0x1718) = 0xffffffff;
  *(undefined8 *)(this + 0x15f0) = extraout_XMM1_Qa;
  *(undefined8 *)(this + 0x15f8) = extraout_XMM1_Qb;
  *(undefined8 *)(this + 0x1600) = extraout_XMM1_Qa;
  *(undefined8 *)(this + 0x1608) = extraout_XMM1_Qb;
  *(undefined8 *)(this + 0x1610) = extraout_XMM1_Qa;
  *(undefined8 *)(this + 0x1618) = extraout_XMM1_Qb;
  *(undefined8 *)(this + 0x1628) = uVar17;
  *(undefined8 *)(this + 0x1630) = uVar18;
  if (0x400fff < *(uint *)(this + 4)) {
    *(undefined2 *)(this + 8) = 0;
  }
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x400) = 0;
  puVar9 = (undefined8 *)((ulong)(this + 0xd8) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)(this + 0xd0) -
                        (int)(undefined8 *)((ulong)(this + 0xd8) & 0xfffffffffffffff8)) + 0x338U >>
                       3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar16 * -2 + 1;
  }
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x608) = 0;
  puVar9 = (undefined8 *)((ulong)(this + 0x410) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)(this + 0x408) -
                        (int)(undefined8 *)((ulong)(this + 0x410) & 0xfffffffffffffff8)) + 0x208U >>
                       3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar16 * -2 + 1;
  }
  *(undefined8 *)(this + 0x610) = 0;
  *(undefined8 *)(this + 0x708) = 0;
  puVar9 = (undefined8 *)((ulong)(this + 0x618) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x618) & 0xfffffffffffffff8)
                        ) + 0x710U >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar16 * -2 + 1;
  }
  *(undefined8 *)(this + 0x1648) = 0;
  *(undefined8 *)(this + 0x1710) = 0;
  puVar9 = (undefined8 *)((ulong)(this + 0x1650) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)this -
                        (int)(undefined8 *)((ulong)(this + 0x1650) & 0xfffffffffffffff8)) + 0x1718U
                       >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar16 * -2 + 1;
  }
  *(undefined8 *)(this + 0x1570) = 0;
  *(undefined8 *)(this + 0x15e8) = 0;
  puVar9 = (undefined8 *)((ulong)(this + 0x1578) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)(this + 0x1570) -
                        (int)(undefined8 *)((ulong)(this + 0x1578) & 0xfffffffffffffff8)) + 0x80U >>
                       3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar16 * -2 + 1;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x68) = puVar9[2];
    *(undefined8 *)(this + 0x58) = *puVar9;
    *(undefined8 *)(this + 0x60) = puVar9[1];
  }
  pVVar14 = *(VmaVulkanFunctions **)(param_1 + 0x38);
  pVVar7 = this;
  ImportVulkanFunctions_Static(this);
  if (pVVar14 != (VmaVulkanFunctions *)0x0) {
    ImportVulkanFunctions_Custom(pVVar7,pVVar14);
  }
  ImportVulkanFunctions_Dynamic(this);
  (**(code **)(this + 0x1658))(*(undefined8 *)(this + 0x1560),this + 0xd0);
  (**(code **)(this + 0x1660))(*(undefined8 *)(this + 0x1560),this + 0x408);
  lVar6 = *(long *)(param_1 + 0x18);
  uVar2 = *(uint *)(this + 0x408);
  if (lVar6 == 0) {
    lVar6 = 0x10000000;
  }
  uVar12 = 0xffffffff;
  *(long *)(this + 0x1558) = lVar6;
  if ((this[0xb] == (VmaAllocator_T)0x0) && (uVar2 != 0)) {
    uVar10 = 0;
    do {
      if (((byte)this[uVar10 * 8 + 0x40c] & 0x40) != 0) {
        uVar12 = uVar12 & ~(1 << ((byte)uVar10 & 0x1f));
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  __src = *(void **)(param_1 + 0x50);
  *(uint *)(this + 0x1718) = uVar12;
  if (__src != (void *)0x0) {
    memcpy(this + 0x1570,__src,(ulong)uVar2 << 2);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if ((lVar6 != 0) && (uVar12 = *(uint *)(this + 0x50c), uVar12 != 0)) {
    pVVar7 = this + 0x510;
    uVar10 = 0;
    do {
      uVar4 = *(ulong *)(lVar6 + uVar10 * 8);
      if ((uVar4 != 0xffffffffffffffff) &&
         (*(uint *)(this + 200) = *(uint *)(this + 200) | 1 << ((byte)uVar10 & 0x1f),
         uVar4 < *(ulong *)pVVar7)) {
        *(ulong *)pVVar7 = uVar4;
      }
      uVar10 = uVar10 + 1;
      pVVar7 = pVVar7 + 0x10;
    } while (uVar10 != uVar12);
  }
  uVar12 = 0;
  if (uVar2 != 0) {
    do {
      if ((*(uint *)(this + 0x1718) >> (uVar12 & 0x1f) & 1) != 0) {
        if (*(ulong *)(this + (ulong)*(uint *)(this + (ulong)uVar12 * 8 + 0x410) * 0x10 + 0x510) <
            0x40000001) {
          pcVar8 = *(code **)(this + 0x30);
          uVar10 = (*(ulong *)(this + (ulong)*(uint *)(this + (ulong)uVar12 * 8 + 0x410) * 0x10 +
                                      0x510) >> 3) + 0x1f & 0xffffffffffffffe0;
          if (pcVar8 == (code *)0x0) goto LAB_001065e4;
LAB_001064a9:
          puVar9 = (undefined8 *)(*pcVar8)(*(undefined8 *)(this + 0x28),0xb8,8,1);
        }
        else {
          pcVar8 = *(code **)(this + 0x30);
          uVar10 = *(long *)(this + 0x1558) + 0x1fU & 0xffffffffffffffe0;
          if (pcVar8 != (code *)0x0) goto LAB_001064a9;
LAB_001065e4:
          puVar9 = (undefined8 *)aligned_alloc(8,0xb8);
        }
        lVar6 = 1;
        if (((*(uint *)(this + (ulong)uVar12 * 8 + 0x40c) & 6) == 2) &&
           (lVar6 = *(long *)(this + 1000), lVar6 == 0)) {
          lVar6 = 1;
        }
        lVar13 = *(long *)(this + 0x228);
        puVar9[0x11] = 0;
        *(undefined1 (*) [16])(puVar9 + 0xb) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar9 + 0xd) = (undefined1  [16])0x0;
        if (lVar13 == 0) {
          lVar13 = 1;
        }
        *(undefined1 (*) [16])(puVar9 + 0xf) = (undefined1  [16])0x0;
        *puVar9 = this;
        puVar9[6] = lVar13;
        pVVar7 = (VmaAllocator_T *)0x0;
        if (this[0x20] != (VmaAllocator_T)0x0) {
          pVVar7 = pVVar1;
        }
        puVar9[1] = 0;
        *(uint *)(puVar9 + 2) = uVar12;
        puVar9[3] = uVar10;
        puVar9[4] = 0;
        puVar9[5] = 0xffffffffffffffff;
        *(undefined1 *)(puVar9 + 7) = 0;
        *(undefined8 *)((long)puVar9 + 0x3c) = 0x3f00000000000000;
        puVar9[9] = lVar6;
        puVar9[10] = 0;
        puVar9[0x12] = pVVar7;
        puVar9[0x13] = 0;
        *(undefined4 *)(puVar9 + 0x16) = 0;
        *(undefined1 *)((long)puVar9 + 0xb4) = 1;
        *(undefined1 (*) [16])(puVar9 + 0x14) = (undefined1  [16])0x0;
        *(undefined8 **)(this + (ulong)uVar12 * 8 + 0x610) = puVar9;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(this + 0x408));
  }
  return;
}



/* VmaAllocator_T::CalcPreferredBlockSize(unsigned int) */

ulong __thiscall VmaAllocator_T::CalcPreferredBlockSize(VmaAllocator_T *this,uint param_1)

{
  if (*(ulong *)(this + (ulong)*(uint *)(this + (ulong)param_1 * 8 + 0x410) * 0x10 + 0x510) <
      0x40000001) {
    return (*(ulong *)(this + (ulong)*(uint *)(this + (ulong)param_1 * 8 + 0x410) * 0x10 + 0x510) >>
           3) + 0x1f & 0xffffffffffffffe0;
  }
  return *(long *)(this + 0x1558) + 0x1fU & 0xffffffffffffffe0;
}



/* VmaAllocator_T::GetBufferMemoryRequirements(VkBuffer_T*, VkMemoryRequirements&, bool&, bool&)
   const */

void __thiscall
VmaAllocator_T::GetBufferMemoryRequirements
          (VmaAllocator_T *this,VkBuffer_T *param_1,VkMemoryRequirements *param_2,bool *param_3,
          bool *param_4)

{
  long in_FS_OFFSET;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  VkBuffer_T *local_78;
  undefined4 local_68;
  undefined1 local_64 [16];
  int local_54;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *puStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[8] == (VmaAllocator_T)0x0) && (*(uint *)(this + 4) < 0x401000)) {
    (**(code **)(this + 0x16a8))(*(undefined8 *)(this + 0x10),param_1,param_2);
    *param_3 = false;
    *param_4 = false;
  }
  else {
    puStack_40 = &local_68;
    local_44 = 0;
    uStack_38 = 0;
    local_84 = 0;
    local_7c = 0;
    local_88 = 0x3b9d0450;
    local_54 = 0;
    local_68 = 0x3b9cba18;
    uStack_24 = 0;
    local_48 = 0x3b9d0453;
    local_64 = (undefined1  [16])0x0;
    local_34 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    local_78 = param_1;
    (**(code **)(this + 0x16e0))(*(undefined8 *)(this + 0x10),&local_88,&local_48);
    *(ulong *)(param_2 + 0x10) = CONCAT44(uStack_24,uStack_28);
    *(ulong *)param_2 = CONCAT44(local_34,uStack_38);
    *(undefined8 *)(param_2 + 8) = uStack_30;
    *param_3 = local_54 != 0;
    *param_4 = local_64._12_4_ != 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::GetImageMemoryRequirements(VkImage_T*, VkMemoryRequirements&, bool&, bool&) const
    */

void __thiscall
VmaAllocator_T::GetImageMemoryRequirements
          (VmaAllocator_T *this,VkImage_T *param_1,VkMemoryRequirements *param_2,bool *param_3,
          bool *param_4)

{
  long in_FS_OFFSET;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  VkImage_T *local_78;
  undefined4 local_68;
  undefined1 local_64 [16];
  int local_54;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *puStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[8] == (VmaAllocator_T)0x0) && (*(uint *)(this + 4) < 0x401000)) {
    (**(code **)(this + 0x16b0))(*(undefined8 *)(this + 0x10),param_1,param_2);
    *param_3 = false;
    *param_4 = false;
  }
  else {
    puStack_40 = &local_68;
    local_44 = 0;
    uStack_38 = 0;
    local_84 = 0;
    local_7c = 0;
    local_88 = 0x3b9d0451;
    local_54 = 0;
    local_68 = 0x3b9cba18;
    uStack_24 = 0;
    local_48 = 0x3b9d0453;
    local_64 = (undefined1  [16])0x0;
    local_34 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    local_78 = param_1;
    (**(code **)(this + 0x16e8))(*(undefined8 *)(this + 0x10),&local_88,&local_48);
    *(ulong *)(param_2 + 0x10) = CONCAT44(uStack_24,uStack_28);
    *(ulong *)param_2 = CONCAT44(local_34,uStack_38);
    *(undefined8 *)(param_2 + 8) = uStack_30;
    *param_3 = local_54 != 0;
    *param_4 = local_64._12_4_ != 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::FindMemoryTypeIndex(unsigned int, VmaAllocationCreateInfo const*,
   VmaBufferImageUsage, unsigned int*) const */

undefined8 __thiscall
VmaAllocator_T::FindMemoryTypeIndex
          (VmaAllocator_T *this,uint param_1,uint *param_2,ulong param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = *(int *)(this + 0xe0);
  uVar8 = param_2[1];
  uVar6 = param_2[3];
  uVar3 = param_2[2];
  uVar2 = param_1 & *(uint *)(this + 0x1718);
  if (param_2[4] != 0) {
    uVar2 = param_1 & *(uint *)(this + 0x1718) & param_2[4];
  }
  uVar9 = uVar3;
  uVar7 = uVar6;
  switch(uVar8) {
  default:
    uVar10 = 0;
    break;
  case 1:
    if ((iVar1 == 1) && ((uVar6 & 2) != 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      uVar7 = uVar6 | 1;
    }
    break;
  case 2:
    uVar10 = 0;
    uVar9 = uVar3 | 6;
    break;
  case 3:
    uVar9 = uVar3 | 2;
    if ((iVar1 != 1) || (uVar10 = 0, (uVar6 & 2) == 0)) {
      uVar10 = 0;
      uVar7 = uVar6 | 1;
    }
    break;
  case 4:
    uVar10 = 0;
    uVar9 = uVar3 | 2;
    uVar7 = uVar6 | 8;
    break;
  case 5:
    uVar10 = 1;
    break;
  case 6:
    uVar10 = 0;
    uVar9 = uVar3 | 0x10;
    break;
  case 7:
  case 8:
  case 9:
    if (param_4 == VmaBufferImageUsage::UNKNOWN) {
      return 0xfffffff8;
    }
    uVar10 = *param_2;
    if ((uVar10 & 0x800) == 0) {
      if ((uVar10 & 0x400) == 0) {
        if (uVar8 == 9) {
          uVar10 = 1;
        }
        else {
          uVar10 = 0;
          uVar7 = uVar6 | 1;
        }
      }
      else {
        if ((iVar1 == 1) || (param_4 < 4)) {
          if (param_4 < 4) {
            uVar10 = 9;
            uVar9 = uVar3 | 2;
            if (uVar8 == 8) {
              uVar10 = 8;
              uVar7 = uVar6 | 1;
            }
            break;
          }
        }
        else if ((uVar8 != 9) && ((uVar10 >> 0xc & 1) != 0)) {
          uVar10 = 8;
          uVar7 = uVar6 | 3;
          break;
        }
        uVar9 = uVar3 | 2;
        if (uVar8 == 9) {
          uVar10 = 9;
        }
        else {
          uVar10 = 8;
          uVar7 = uVar6 | 1;
        }
      }
    }
    else if ((((iVar1 == 1) || (param_4 < 4)) || (uVar8 == 9)) || ((uVar10 >> 0xc & 1) == 0)) {
      uVar10 = 0;
      uVar9 = uVar3 | 2;
      uVar7 = uVar6 | 8;
    }
    else {
      uVar10 = 0;
      uVar7 = uVar6 | 9;
    }
  }
  *param_5 = 0xffffffff;
  if (((uVar3 | uVar6) & 0xc0) == 0) {
    uVar10 = uVar10 | 0x80;
  }
  if (*(int *)(this + 0x408) != 0) {
    uVar8 = 1;
    uVar3 = 0;
    uVar6 = 0xffffffff;
    do {
      if ((uVar2 & uVar8) != 0) {
        uVar4 = ~*(uint *)(this + (ulong)uVar3 * 8 + 0x40c);
        if ((((uVar4 & uVar9) == 0) &&
            (uVar4 = uVar4 & uVar7, uVar5 = *(uint *)(this + (ulong)uVar3 * 8 + 0x40c) & uVar10,
            uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555),
            uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
            uVar4 = (uVar4 >> 4) + uVar4 & 0xf0f0f0f, uVar11 = (uVar4 >> 8) + uVar4 & 0xff00ff,
            uVar5 = uVar5 - (uVar5 >> 1), uVar4 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333),
            uVar4 = (uVar4 >> 4) + uVar4 & 0xf0f0f0f, uVar4 = (uVar4 >> 8) + uVar4 & 0xff00ff,
            uVar4 = ((uVar4 >> 0x10) + uVar4 & 0xffff) + ((uVar11 >> 0x10) + uVar11 & 0xffff),
            uVar4 < uVar6)) && (*param_5 = uVar3, uVar6 = uVar4, uVar4 == 0)) {
          return 0;
        }
      }
      uVar3 = uVar3 + 1;
      uVar8 = uVar8 * 2;
    } while (uVar3 < *(uint *)(this + 0x408));
    if (*param_5 != 0xffffffff) {
      return 0;
    }
  }
  return 0xfffffff8;
}



/* VmaAllocator_T::CalcAllocationParams(VmaAllocationCreateInfo&, bool, bool) */

undefined8
VmaAllocator_T::CalcAllocationParams(VmaAllocationCreateInfo *param_1,bool param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined7 in_register_00000031;
  
  iVar2 = *(int *)(CONCAT71(in_register_00000031,param_2) + 4);
  uVar4 = *(uint *)CONCAT71(in_register_00000031,param_2);
  uVar1 = iVar2 - 7;
  if ((iVar2 == 6) || (param_3)) {
    uVar4 = uVar4 | 1;
    *(uint *)CONCAT71(in_register_00000031,param_2) = uVar4;
  }
  lVar3 = *(long *)(CONCAT71(in_register_00000031,param_2) + 0x18);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x38) != '\0') {
      if ((uVar4 & 1) != 0) {
        return 0xfffffff8;
      }
      *(undefined4 *)(CONCAT71(in_register_00000031,param_2) + 0x28) = *(undefined4 *)(lVar3 + 0x40)
      ;
      if (uVar1 < 3) {
        return 0;
      }
      goto LAB_00106c1c;
    }
    *(undefined4 *)(CONCAT71(in_register_00000031,param_2) + 0x28) = *(undefined4 *)(lVar3 + 0x40);
  }
  if ((~uVar4 & 3) == 0) {
    return 0xfffffff8;
  }
  if (uVar1 < 3) {
    return 0;
  }
LAB_00106c1c:
  if ((uVar4 & 0xc00) == 0) {
    *(uint *)CONCAT71(in_register_00000031,param_2) = uVar4 | 0x800;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaAllocator_T::CalculateStatistics(VmaTotalStatistics*) */

undefined8 __thiscall
VmaAllocator_T::CalculateStatistics(VmaAllocator_T *this,VmaTotalStatistics *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  VmaTotalStatistics *pVVar4;
  VmaDetailedStatistics *pVVar5;
  VmaDetailedStatistics *pVVar6;
  VmaDetailedStatistics *pVVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  VmaAllocator_T *this_00;
  VmaBlockVector *this_01;
  pthread_rwlock_t *local_40;
  
  *(undefined1 (*) [16])(param_1 + 0xc08) = (undefined1  [16])0x0;
  uVar2 = _UNK_00115398;
  uVar8 = _LC0;
  *(undefined8 *)(param_1 + 0xc00) = 0;
  *(undefined4 *)(param_1 + 0xc18) = 0;
  *(undefined8 *)(param_1 + 0xc20) = uVar8;
  *(undefined8 *)(param_1 + 0xc28) = uVar2;
  *(undefined8 *)(param_1 + 0xc30) = uVar8;
  *(undefined8 *)(param_1 + 0xc38) = uVar2;
  pVVar4 = param_1;
  do {
    *(undefined8 *)pVVar4 = 0;
    pVVar5 = (VmaDetailedStatistics *)pVVar4 + 0x40;
    *(undefined1 (*) [16])((VmaDetailedStatistics *)pVVar4 + 8) = (undefined1  [16])0x0;
    *(undefined4 *)((VmaDetailedStatistics *)pVVar4 + 0x18) = 0;
    *(undefined8 *)((VmaDetailedStatistics *)pVVar4 + 0x20) = uVar8;
    *(undefined8 *)((VmaDetailedStatistics *)pVVar4 + 0x28) = uVar2;
    *(undefined8 *)((VmaDetailedStatistics *)pVVar4 + 0x30) = uVar8;
    *(undefined8 *)((VmaDetailedStatistics *)pVVar4 + 0x38) = uVar2;
    pVVar6 = pVVar5;
    pVVar4 = (VmaTotalStatistics *)pVVar5;
  } while (pVVar5 != (VmaDetailedStatistics *)(param_1 + 0x800));
  do {
    *(undefined8 *)pVVar6 = 0;
    pVVar7 = pVVar6 + 0x40;
    *(undefined1 (*) [16])(pVVar6 + 8) = (undefined1  [16])0x0;
    *(undefined4 *)(pVVar6 + 0x18) = 0;
    *(undefined8 *)(pVVar6 + 0x20) = uVar8;
    *(undefined8 *)(pVVar6 + 0x28) = uVar2;
    *(undefined8 *)(pVVar6 + 0x30) = uVar8;
    *(undefined8 *)(pVVar6 + 0x38) = uVar2;
    pVVar6 = pVVar7;
  } while (pVVar7 != (VmaDetailedStatistics *)(param_1 + 0xc00));
  lVar10 = 0;
  pVVar6 = (VmaDetailedStatistics *)param_1;
  if (*(int *)(this + 0x408) != 0) {
    do {
      if (*(VmaBlockVector **)(this + lVar10 * 8 + 0x610) != (VmaBlockVector *)0x0) {
        VmaBlockVector::AddDetailedStatistics
                  (*(VmaBlockVector **)(this + lVar10 * 8 + 0x610),pVVar6);
      }
      lVar10 = lVar10 + 1;
      pVVar6 = pVVar6 + 0x40;
    } while ((uint)lVar10 < *(uint *)(this + 0x408));
  }
  if (*this == (VmaAllocator_T)0x0) {
    local_40 = (pthread_rwlock_t *)0x0;
    this_01 = *(VmaBlockVector **)(this + 0x1628);
    if (this_01 == (VmaBlockVector *)0x0) goto LAB_00106ddb;
LAB_00106d98:
    do {
      uVar1 = *(uint *)(this_01 + 0x10);
      VmaBlockVector::AddDetailedStatistics
                (this_01,(VmaDetailedStatistics *)(param_1 + (ulong)uVar1 * 0x40));
      VmaDedicatedAllocationList::AddDetailedStatistics
                ((VmaDedicatedAllocationList *)(this_01 + 0xb8),
                 (VmaDetailedStatistics *)(param_1 + (ulong)uVar1 * 0x40));
      this_01 = *(VmaBlockVector **)(this_01 + 0x128);
    } while (this_01 != (VmaBlockVector *)0x0);
    if (local_40 == (pthread_rwlock_t *)0x0) goto LAB_00106ddb;
  }
  else {
    local_40 = (pthread_rwlock_t *)(this + 0x15f0);
    do {
      iVar3 = pthread_rwlock_rdlock(local_40);
    } while (iVar3 == 0xb);
    if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    this_01 = *(VmaBlockVector **)(this + 0x1628);
    if (this_01 != (VmaBlockVector *)0x0) goto LAB_00106d98;
  }
  pthread_rwlock_unlock(local_40);
LAB_00106ddb:
  this_00 = this + 0x710;
  uVar9 = 0;
  pVVar6 = (VmaDetailedStatistics *)param_1;
  if (*(int *)(this + 0x408) != 0) {
    do {
      uVar9 = (ulong)((int)uVar9 + 1);
      VmaDedicatedAllocationList::AddDetailedStatistics
                ((VmaDedicatedAllocationList *)this_00,pVVar6);
      pVVar6 = pVVar6 + 0x40;
      this_00 = (VmaAllocator_T *)((VmaDedicatedAllocationList *)this_00 + 0x58);
    } while ((uint)uVar9 < *(uint *)(this + 0x408));
    if (*(uint *)(this + 0x408) != 0) {
      lVar10 = 0;
      do {
        lVar10 = VmaAddDetailedStatistics
                           ((VmaDetailedStatistics *)
                            (param_1 + ((ulong)*(uint *)(this + lVar10 * 8 + 0x410) + 0x20) * 0x40),
                            (VmaDetailedStatistics *)(param_1 + lVar10 * 0x40));
      } while ((uint)lVar10 < *(uint *)(this + 0x408));
    }
  }
  uVar8 = 0;
  if (*(int *)(this + 0x50c) != 0) {
    do {
      uVar8 = VmaAddDetailedStatistics((VmaDetailedStatistics *)(param_1 + 0xc00),pVVar5);
      pVVar5 = pVVar5 + 0x40;
    } while ((uint)uVar8 < *(uint *)(this + 0x50c));
  }
  return uVar8;
}



/* VmaAllocator_T::GetAllocationInfo(VmaAllocation_T*, VmaAllocationInfo*) */

void __thiscall
VmaAllocator_T::GetAllocationInfo
          (VmaAllocator_T *this,VmaAllocation_T *param_1,VmaAllocationInfo *param_2)

{
  undefined8 uVar1;
  VmaAllocation_T VVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x48);
  if (param_1[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    plVar3 = (long *)**(undefined8 **)param_1;
    lVar6 = *plVar3;
    *(undefined8 *)(param_2 + 8) = (*(undefined8 **)param_1)[3];
    uVar5 = (**(code **)(lVar6 + 0x48))(plVar3,uVar1);
    VVar2 = param_1[0x4c];
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_2 + 0x10) = uVar5;
    *(undefined8 *)(param_2 + 0x18) = uVar1;
    if (VVar2 == (VmaAllocation_T)0x1) {
      if ((param_1[0x4e] != (VmaAllocation_T)0x0) || (((byte)param_1[0x4f] & 1) != 0)) {
        plVar3 = (long *)**(undefined8 **)param_1;
        lVar4 = (*(undefined8 **)param_1)[0xb];
        lVar6 = (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined8 *)(param_1 + 8));
        lVar6 = lVar6 + lVar4;
        goto LAB_00106ef8;
      }
    }
    else if (VVar2 == (VmaAllocation_T)0x2) goto LAB_00106ef3;
  }
  else {
    if (param_1[0x4c] == (VmaAllocation_T)0x2) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = uVar1;
LAB_00106ef3:
      lVar6 = *(long *)(param_1 + 0x10);
      goto LAB_00106ef8;
    }
    *(undefined8 *)(param_2 + 8) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = uVar1;
  }
  lVar6 = 0;
LAB_00106ef8:
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_2 + 0x20) = lVar6;
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x40);
  return;
}



/* VmaAllocator_T::GetAllocationInfo2(VmaAllocation_T*, VmaAllocationInfo2*) */

void __thiscall
VmaAllocator_T::GetAllocationInfo2
          (VmaAllocator_T *this,VmaAllocation_T *param_1,VmaAllocationInfo2 *param_2)

{
  undefined8 uVar1;
  
  GetAllocationInfo(this,param_1,(VmaAllocationInfo *)param_2);
  if (param_1[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = *(undefined8 *)(**(long **)param_1 + 8);
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x38) = uVar1;
    return;
  }
  if (param_1[0x4c] != (VmaAllocation_T)0x2) {
    return;
  }
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* VmaAllocator_T::GetPoolStatistics(VmaPool_T*, VmaStatistics*) */

void __thiscall
VmaAllocator_T::GetPoolStatistics(VmaAllocator_T *this,VmaPool_T *param_1,VmaStatistics *param_2)

{
  *(undefined8 *)param_2 = 0;
  *(undefined1 (*) [16])(param_2 + 8) = (undefined1  [16])0x0;
  VmaBlockVector::AddStatistics((VmaBlockVector *)param_1,param_2);
  VmaDedicatedAllocationList::AddStatistics((VmaDedicatedAllocationList *)(param_1 + 0xb8),param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaAllocator_T::CalculatePoolStatistics(VmaPool_T*, VmaDetailedStatistics*) */

void __thiscall
VmaAllocator_T::CalculatePoolStatistics
          (VmaAllocator_T *this,VmaPool_T *param_1,VmaDetailedStatistics *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 (*) [16])(param_2 + 8) = (undefined1  [16])0x0;
  uVar2 = _UNK_00115398;
  uVar1 = _LC0;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = uVar2;
  VmaBlockVector::AddDetailedStatistics((VmaBlockVector *)param_1,param_2);
  VmaDedicatedAllocationList::AddDetailedStatistics
            ((VmaDedicatedAllocationList *)(param_1 + 0xb8),param_2);
  return;
}



/* VmaAllocator_T::CheckPoolCorruption(VmaPool_T*) */

undefined8 VmaAllocator_T::CheckPoolCorruption(VmaPool_T *param_1)

{
  return 0xfffffff8;
}



/* VmaAllocator_T::CheckCorruption(unsigned int) */

undefined8 VmaAllocator_T::CheckCorruption(uint param_1)

{
  pthread_rwlock_t *__rwlock;
  int iVar1;
  undefined4 in_register_0000003c;
  
  if (*(char *)CONCAT44(in_register_0000003c,param_1) == '\0') {
    return 0xfffffff8;
  }
  __rwlock = (pthread_rwlock_t *)((char *)CONCAT44(in_register_0000003c,param_1) + 0x15f0);
  do {
    iVar1 = pthread_rwlock_rdlock(__rwlock);
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    pthread_rwlock_unlock(__rwlock);
    return 0xfffffff8;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* VmaAllocator_T::AllocateVulkanMemory(VkMemoryAllocateInfo const*, VkDeviceMemory_T**) */

int __thiscall
VmaAllocator_T::AllocateVulkanMemory
          (VmaAllocator_T *this,VkMemoryAllocateInfo *param_1,VkDeviceMemory_T **param_2)

{
  VmaAllocator_T *pVVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  VmaAllocator_T *pVVar6;
  ulong uVar7;
  bool bVar8;
  
  LOCK();
  *(int *)(this + 0x1550) = *(int *)(this + 0x1550) + 1;
  UNLOCK();
  uVar7 = (ulong)*(uint *)(this + (ulong)*(uint *)(param_1 + 0x18) * 8 + 0x410);
  if ((*(uint *)(this + 200) >>
       (*(uint *)(this + (ulong)*(uint *)(param_1 + 0x18) * 8 + 0x410) & 0x1f) & 1) == 0) {
    LOCK();
    *(long *)(this + (uVar7 + 0x252) * 8) =
         *(long *)(this + (uVar7 + 0x252) * 8) + *(long *)(param_1 + 0x10);
    UNLOCK();
  }
  else {
    pVVar6 = this + uVar7 * 8 + 0x1290;
    uVar2 = *(ulong *)(this + uVar7 * 0x10 + 0x510);
    uVar4 = *(ulong *)pVVar6;
    do {
      if (uVar2 < *(long *)(param_1 + 0x10) + uVar4) {
        iVar3 = -2;
        goto LAB_0010721d;
      }
      LOCK();
      uVar5 = *(ulong *)pVVar6;
      bVar8 = uVar4 == uVar5;
      if (bVar8) {
        *(ulong *)pVVar6 = *(long *)(param_1 + 0x10) + uVar4;
        uVar5 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar5;
    } while (!bVar8);
  }
  pVVar1 = this + uVar7 * 4 + 0x1210;
  LOCK();
  *(int *)pVVar1 = *(int *)pVVar1 + 1;
  UNLOCK();
  pVVar6 = (VmaAllocator_T *)0x0;
  if (this[0x20] != (VmaAllocator_T)0x0) {
    pVVar6 = this + 0x28;
  }
  iVar3 = (**(code **)(this + 0x1668))(*(undefined8 *)(this + 0x10),param_1,pVVar6,param_2);
  if (iVar3 == 0) {
    LOCK();
    *(int *)(this + 0x1390) = *(int *)(this + 0x1390) + 1;
    UNLOCK();
    if (*(code **)(this + 0x58) != (code *)0x0) {
      (**(code **)(this + 0x58))
                (this,*(undefined4 *)(param_1 + 0x18),*param_2,*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(this + 0x68));
    }
  }
  else {
    LOCK();
    *(int *)pVVar1 = *(int *)pVVar1 + -1;
    UNLOCK();
    LOCK();
    *(long *)(this + (uVar7 + 0x252) * 8) =
         *(long *)(this + (uVar7 + 0x252) * 8) - *(long *)(param_1 + 0x10);
    UNLOCK();
LAB_0010721d:
    LOCK();
    *(int *)(this + 0x1550) = *(int *)(this + 0x1550) + -1;
    UNLOCK();
  }
  return iVar3;
}



/* VmaAllocator_T::FreeVulkanMemory(unsigned int, unsigned long, VkDeviceMemory_T*) */

void __thiscall
VmaAllocator_T::FreeVulkanMemory
          (VmaAllocator_T *this,uint param_1,ulong param_2,VkDeviceMemory_T *param_3)

{
  uint uVar1;
  VmaAllocator_T *pVVar2;
  
  if (*(code **)(this + 0x60) != (code *)0x0) {
    (**(code **)(this + 0x60))(this,(ulong)param_1,param_3,param_2,*(undefined8 *)(this + 0x68));
  }
  pVVar2 = (VmaAllocator_T *)0x0;
  if (this[0x20] != (VmaAllocator_T)0x0) {
    pVVar2 = this + 0x28;
  }
  (**(code **)(this + 0x1670))(*(undefined8 *)(this + 0x10),param_3,pVVar2);
  uVar1 = *(uint *)(this + (ulong)param_1 * 8 + 0x410);
  LOCK();
  *(int *)(this + ((ulong)uVar1 + 0x484) * 4) = *(int *)(this + ((ulong)uVar1 + 0x484) * 4) + -1;
  UNLOCK();
  LOCK();
  *(ulong *)(this + ((ulong)uVar1 + 0x252) * 8) =
       *(long *)(this + ((ulong)uVar1 + 0x252) * 8) - param_2;
  UNLOCK();
  LOCK();
  *(int *)(this + 0x1550) = *(int *)(this + 0x1550) + -1;
  UNLOCK();
  return;
}



/* VmaDeviceMemoryBlock::Destroy(VmaAllocator_T*) */

void __thiscall VmaDeviceMemoryBlock::Destroy(VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1)

{
  undefined8 *__ptr;
  char cVar1;
  
  cVar1 = (**(code **)(**(long **)this + 0x38))();
  if (cVar1 == '\0') {
    (**(code **)(**(long **)this + 0xb8))();
  }
  VmaAllocator_T::FreeVulkanMemory
            (param_1,*(uint *)(this + 0x10),*(ulong *)(*(long *)this + 8),
             *(VkDeviceMemory_T **)(this + 0x18));
  __ptr = *(undefined8 **)this;
  *(undefined8 *)(this + 0x18) = 0;
  if (__ptr != (undefined8 *)0x0) {
    (**(code **)*__ptr)(__ptr);
    if (*(code **)(param_1 + 0x40) == (code *)0x0) {
      free(__ptr);
      *(undefined8 *)this = 0;
      return;
    }
    (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x28),__ptr);
  }
  *(undefined8 *)this = 0;
  return;
}



/* VmaBlockVector::~VmaBlockVector() */

void __thiscall VmaBlockVector::~VmaBlockVector(VmaBlockVector *this)

{
  void *__ptr;
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__ptr_00;
  bool bVar4;
  
  __ptr_00 = *(void **)(this + 0x98);
  if (*(long *)(this + 0xa0) != 0) {
    lVar3 = *(long *)(this + 0xa0) + -1;
LAB_00107393:
    do {
      VmaDeviceMemoryBlock::Destroy
                (*(VmaDeviceMemoryBlock **)((long)__ptr_00 + lVar3 * 8),*(VmaAllocator_T **)this);
      __ptr_00 = *(void **)(this + 0x98);
      __ptr = *(void **)((long)__ptr_00 + lVar3 * 8);
      if (__ptr != (void *)0x0) {
        pcVar1 = *(code **)(*(long *)this + 0x40);
        if (pcVar1 == (code *)0x0) {
          free(__ptr);
          __ptr_00 = *(void **)(this + 0x98);
          bVar4 = lVar3 == 0;
          lVar3 = lVar3 + -1;
          if (bVar4) break;
          goto LAB_00107393;
        }
        (*pcVar1)(*(undefined8 *)(*(long *)this + 0x28));
        __ptr_00 = *(void **)(this + 0x98);
      }
      bVar4 = lVar3 != 0;
      lVar3 = lVar3 + -1;
    } while (bVar4);
  }
  puVar2 = *(undefined8 **)(this + 0x90);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)puVar2[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001073f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar2[3])(*puVar2,__ptr_00);
    return;
  }
  free(__ptr_00);
  return;
}



/* VmaPool_T::~VmaPool_T() */

void __thiscall VmaPool_T::~VmaPool_T(VmaPool_T *this)

{
  long lVar1;
  void *__ptr;
  
  lVar1 = *(long *)this;
  __ptr = *(void **)(this + 0x118);
  if (*(char *)(lVar1 + 0x20) == '\0') {
    if (__ptr != (void *)0x0) {
LAB_0010744d:
      free(__ptr);
      VmaBlockVector::~VmaBlockVector((VmaBlockVector *)this);
      return;
    }
  }
  else if (__ptr != (void *)0x0) {
    if (*(code **)(lVar1 + 0x40) == (code *)0x0) goto LAB_0010744d;
    (**(code **)(lVar1 + 0x40))(*(undefined8 *)(lVar1 + 0x28));
  }
  VmaBlockVector::~VmaBlockVector((VmaBlockVector *)this);
  return;
}



/* VmaAllocator_T::DestroyPool(VmaPool_T*) */

void __thiscall VmaAllocator_T::DestroyPool(VmaAllocator_T *this,VmaPool_T *param_1)

{
  long lVar1;
  void *__ptr;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  pthread_rwlock_t *__rwlock;
  
  if (*this == (VmaAllocator_T)0x0) {
    __rwlock = (pthread_rwlock_t *)0x0;
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 0x15f0);
    iVar2 = pthread_rwlock_wrlock(__rwlock);
    if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
  }
  if (*(long *)(param_1 + 0x120) == 0) {
    *(undefined8 *)(this + 0x1628) = *(undefined8 *)(param_1 + 0x128);
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x120) + 0x128) = *(undefined8 *)(param_1 + 0x128);
  }
  if (*(long *)(param_1 + 0x128) == 0) {
    *(undefined8 *)(this + 0x1630) = *(undefined8 *)(param_1 + 0x120);
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x128) + 0x120) = *(undefined8 *)(param_1 + 0x120);
  }
  *(undefined1 (*) [16])(param_1 + 0x120) = (undefined1  [16])0x0;
  *(long *)(this + 0x1638) = *(long *)(this + 0x1638) + -1;
  if (__rwlock != (pthread_rwlock_t *)0x0) {
    pthread_rwlock_unlock(__rwlock);
  }
  lVar1 = *(long *)param_1;
  __ptr = *(void **)(param_1 + 0x118);
  if (*(char *)(lVar1 + 0x20) == '\0') {
    if (__ptr != (void *)0x0) goto LAB_00107585;
LAB_00107560:
    VmaBlockVector::~VmaBlockVector((VmaBlockVector *)param_1);
  }
  else {
    if (__ptr == (void *)0x0) goto LAB_00107560;
    if (*(code **)(lVar1 + 0x40) != (code *)0x0) {
      (**(code **)(lVar1 + 0x40))(*(undefined8 *)(lVar1 + 0x28));
      VmaBlockVector::~VmaBlockVector((VmaBlockVector *)param_1);
      UNRECOVERED_JUMPTABLE = *(code **)(this + 0x40);
      goto joined_r0x00107570;
    }
LAB_00107585:
    free(__ptr);
    VmaBlockVector::~VmaBlockVector((VmaBlockVector *)param_1);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x40);
joined_r0x00107570:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010757e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x28),param_1);
  return;
}



/* VmaAllocator_T::BindVulkanBuffer(VkDeviceMemory_T*, unsigned long, VkBuffer_T*, void const*) */

undefined8 __thiscall
VmaAllocator_T::BindVulkanBuffer
          (VmaAllocator_T *this,VkDeviceMemory_T *param_1,ulong param_2,VkBuffer_T *param_3,
          void *param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  void *local_30;
  VkBuffer_T *local_28;
  VkDeviceMemory_T *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (void *)0x0) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(this + 0x1698))(*(undefined8 *)(this + 0x10),param_3,param_1,param_2);
      return uVar1;
    }
  }
  else {
    if (((this[9] == (VmaAllocator_T)0x0) && (*(uint *)(this + 4) < 0x401000)) ||
       (*(code **)(this + 0x16f0) == (code *)0x0)) {
      uVar1 = 0xfffffff9;
    }
    else {
      local_38 = 0x3b9d2f48;
      local_30 = param_4;
      local_28 = param_3;
      local_20 = param_1;
      local_18 = param_2;
      uVar1 = (**(code **)(this + 0x16f0))(*(undefined8 *)(this + 0x10),1,&local_38);
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaDeviceMemoryBlock::BindBufferMemory(VmaAllocator_T*, VmaAllocation_T*, unsigned long,
   VkBuffer_T*, void const*) */

ulong __thiscall
VmaDeviceMemoryBlock::BindBufferMemory
          (VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1,VmaAllocation_T *param_2,ulong param_3
          ,VkBuffer_T *param_4,void *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2[0x4c] == (VmaAllocation_T)0x1) {
    lVar3 = (**(code **)(*(long *)**(undefined8 **)param_2 + 0x48))
                      ((long *)**(undefined8 **)param_2,*(undefined8 *)(param_2 + 8));
    param_3 = param_3 + lVar3;
  }
  if (*param_1 != (VmaAllocator_T)0x0) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x20));
    if (iVar1 == 0) {
      uVar2 = VmaAllocator_T::BindVulkanBuffer
                        (param_1,*(VkDeviceMemory_T **)(this + 0x18),param_3,param_4,param_5);
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x20));
      return (ulong)uVar2;
    }
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  uVar4 = VmaAllocator_T::BindVulkanBuffer
                    (param_1,*(VkDeviceMemory_T **)(this + 0x18),param_3,param_4,param_5);
  return uVar4;
}



/* VmaAllocator_T::BindVulkanImage(VkDeviceMemory_T*, unsigned long, VkImage_T*, void const*) */

undefined8 __thiscall
VmaAllocator_T::BindVulkanImage
          (VmaAllocator_T *this,VkDeviceMemory_T *param_1,ulong param_2,VkImage_T *param_3,
          void *param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  void *local_30;
  VkImage_T *local_28;
  VkDeviceMemory_T *local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (void *)0x0) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001077e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(this + 0x16a0))(*(undefined8 *)(this + 0x10),param_3,param_1,param_2);
      return uVar1;
    }
  }
  else {
    if (((this[9] == (VmaAllocator_T)0x0) && (*(uint *)(this + 4) < 0x401000)) ||
       (*(code **)(this + 0x16f8) == (code *)0x0)) {
      uVar1 = 0xfffffff9;
    }
    else {
      local_38 = 0x3b9d2f49;
      local_30 = param_4;
      local_28 = param_3;
      local_20 = param_1;
      local_18 = param_2;
      uVar1 = (**(code **)(this + 0x16f8))(*(undefined8 *)(this + 0x10),1,&local_38);
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaDeviceMemoryBlock::BindImageMemory(VmaAllocator_T*, VmaAllocation_T*, unsigned long,
   VkImage_T*, void const*) */

ulong __thiscall
VmaDeviceMemoryBlock::BindImageMemory
          (VmaDeviceMemoryBlock *this,VmaAllocator_T *param_1,VmaAllocation_T *param_2,ulong param_3
          ,VkImage_T *param_4,void *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2[0x4c] == (VmaAllocation_T)0x1) {
    lVar3 = (**(code **)(*(long *)**(undefined8 **)param_2 + 0x48))
                      ((long *)**(undefined8 **)param_2,*(undefined8 *)(param_2 + 8));
    param_3 = param_3 + lVar3;
  }
  if (*param_1 != (VmaAllocator_T)0x0) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x20));
    if (iVar1 == 0) {
      uVar2 = VmaAllocator_T::BindVulkanImage
                        (param_1,*(VkDeviceMemory_T **)(this + 0x18),param_3,param_4,param_5);
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x20));
      return (ulong)uVar2;
    }
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  uVar4 = VmaAllocator_T::BindVulkanImage
                    (param_1,*(VkDeviceMemory_T **)(this + 0x18),param_3,param_4,param_5);
  return uVar4;
}



/* VmaAllocator_T::Map(VmaAllocation_T*, void**) */

ulong __thiscall VmaAllocator_T::Map(VmaAllocator_T *this,VmaAllocation_T *param_1,void **param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0x4c] == (VmaAllocation_T)0x1) {
    local_38 = (void *)0x0;
    uVar1 = VmaDeviceMemoryBlock::Map(*(VmaDeviceMemoryBlock **)param_1,this,1,&local_38);
    pvVar4 = local_38;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      if (param_1[0x4c] == (VmaAllocation_T)0x1) {
        lVar2 = (**(code **)(*(long *)**(undefined8 **)param_1 + 0x48))
                          ((long *)**(undefined8 **)param_1,*(undefined8 *)(param_1 + 8));
        pvVar4 = (void *)((long)pvVar4 + lVar2);
      }
      *param_2 = pvVar4;
      if (param_1[0x4e] != (VmaAllocation_T)0xff) {
        param_1[0x4e] = (VmaAllocation_T)((char)param_1[0x4e] + '\x01');
      }
    }
  }
  else {
    uVar3 = 0xfffffffb;
    if (param_1[0x4c] == (VmaAllocation_T)0x2) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = VmaAllocation_T::DedicatedAllocMap(param_1,this,param_2);
        return uVar3;
      }
      goto LAB_00107981;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00107981:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::Unmap(VmaAllocation_T*) */

void __thiscall VmaAllocator_T::Unmap(VmaAllocator_T *this,VmaAllocation_T *param_1)

{
  VmaAllocation_T VVar1;
  
  if (param_1[0x4c] == (VmaAllocation_T)0x1) {
    if (param_1[0x4e] != (VmaAllocation_T)0x0) {
      param_1[0x4e] = (VmaAllocation_T)((char)param_1[0x4e] + -1);
    }
    VmaDeviceMemoryBlock::Unmap(*(VmaDeviceMemoryBlock **)param_1,this,1);
    return;
  }
  if (param_1[0x4c] != (VmaAllocation_T)0x2) {
    return;
  }
  if (((param_1[0x4e] != (VmaAllocation_T)0x0) &&
      (VVar1 = (VmaAllocation_T)((char)param_1[0x4e] + -1), param_1[0x4e] = VVar1,
      VVar1 == (VmaAllocation_T)0x0)) && (((byte)param_1[0x4f] & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x001079da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x1680))(*(undefined8 *)(this + 0x10),*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



/* VmaAllocator_T::BindBufferMemory(VmaAllocation_T*, unsigned long, VkBuffer_T*, void const*) */

undefined8 __thiscall
VmaAllocator_T::BindBufferMemory
          (VmaAllocator_T *this,VmaAllocation_T *param_1,ulong param_2,VkBuffer_T *param_3,
          void *param_4)

{
  undefined8 uVar1;
  
  if (param_1[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = VmaDeviceMemoryBlock::BindBufferMemory
                      (*(VmaDeviceMemoryBlock **)param_1,this,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  if (param_1[0x4c] != (VmaAllocation_T)0x2) {
    return 0xfffffff3;
  }
  uVar1 = BindVulkanBuffer(this,*(VkDeviceMemory_T **)(param_1 + 8),param_2,param_3,param_4);
  return uVar1;
}



/* VmaAllocator_T::BindImageMemory(VmaAllocation_T*, unsigned long, VkImage_T*, void const*) */

undefined8 __thiscall
VmaAllocator_T::BindImageMemory
          (VmaAllocator_T *this,VmaAllocation_T *param_1,ulong param_2,VkImage_T *param_3,
          void *param_4)

{
  undefined8 uVar1;
  
  if (param_1[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = VmaDeviceMemoryBlock::BindImageMemory
                      (*(VmaDeviceMemoryBlock **)param_1,this,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  if (param_1[0x4c] != (VmaAllocation_T)0x2) {
    return 0xfffffff3;
  }
  uVar1 = BindVulkanImage(this,*(VkDeviceMemory_T **)(param_1 + 8),param_2,param_3,param_4);
  return uVar1;
}



/* VmaAllocator_T::FreeDedicatedMemory(VmaAllocation_T*) */

void __thiscall VmaAllocator_T::FreeDedicatedMemory(VmaAllocator_T *this,VmaAllocation_T *param_1)

{
  VmaAllocation_T VVar1;
  uint uVar2;
  VkDeviceMemory_T *pVVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  if (param_1[0x4c] == (VmaAllocation_T)0x1) {
    lVar4 = *(long *)(*(long *)param_1 + 8);
LAB_00107b5b:
    if (lVar4 != 0) {
      VmaDedicatedAllocationList::Unregister((VmaDedicatedAllocationList *)(lVar4 + 0xb8),param_1);
      VVar1 = param_1[0x4c];
      goto joined_r0x00107b79;
    }
  }
  else if (param_1[0x4c] == (VmaAllocation_T)0x2) {
    lVar4 = *(long *)param_1;
    goto LAB_00107b5b;
  }
  VmaDedicatedAllocationList::Unregister
            ((VmaDedicatedAllocationList *)(this + (ulong)uVar2 * 0x58 + 0x710),param_1);
  VVar1 = param_1[0x4c];
joined_r0x00107b79:
  if (VVar1 == (VmaAllocation_T)0x1) {
    pVVar3 = *(VkDeviceMemory_T **)(*(long *)param_1 + 0x18);
  }
  else {
    pVVar3 = (VkDeviceMemory_T *)0x0;
    if (VVar1 == (VmaAllocation_T)0x2) {
      pVVar3 = *(VkDeviceMemory_T **)(param_1 + 8);
    }
  }
  FreeVulkanMemory(this,uVar2,*(ulong *)(param_1 + 0x30),pVVar3);
  uVar2 = *(uint *)(this + (ulong)*(uint *)(param_1 + 0x48) * 8 + 0x410);
  LOCK();
  *(long *)(this + ((ulong)uVar2 + 0x20) * 8 + 0x1210) =
       *(long *)(this + ((ulong)uVar2 + 0x20) * 8 + 0x1210) - *(long *)(param_1 + 0x30);
  UNLOCK();
  LOCK();
  *(int *)(this + ((ulong)uVar2 + 0x10) * 4 + 0x1210) =
       *(int *)(this + ((ulong)uVar2 + 0x10) * 4 + 0x1210) + -1;
  UNLOCK();
  LOCK();
  *(int *)(this + 0x1390) = *(int *)(this + 0x1390) + 1;
  UNLOCK();
  VmaAllocationObjectAllocator::Free((VmaAllocationObjectAllocator *)(this + 0x70),param_1);
  return;
}



/* VmaAllocator_T::CalculateGpuDefragmentationMemoryTypeBits() const */

undefined4 __thiscall
VmaAllocator_T::CalculateGpuDefragmentationMemoryTypeBits(VmaAllocator_T *this)

{
  int iVar1;
  VmaAllocator_T *pVVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 local_58;
  undefined1 auStack_54 [12];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined1 auStack_34 [12];
  undefined8 local_28;
  long local_20;
  
  pVVar2 = this + 0x28;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  auStack_54 = SUB1612((undefined1  [16])0x0,4);
  local_58 = 0xc;
  auStack_34 = SUB1612((undefined1  [16])0x0,4);
  local_38 = 3;
  local_48 = ZEXT816(0x10000000) << 0x40;
  local_80 = 0;
  if (this[0x20] == (VmaAllocator_T)0x0) {
    pVVar2 = (VmaAllocator_T *)0x0;
  }
  iVar1 = (**(code **)(this + 0x16b8))(*(undefined8 *)(this + 0x10),&local_58,pVVar2,&local_80);
  uVar3 = 0;
  if (iVar1 == 0) {
    (**(code **)(this + 0x16a8))(*(undefined8 *)(this + 0x10),local_80,local_78);
    pVVar2 = (VmaAllocator_T *)0x0;
    if (this[0x20] != (VmaAllocator_T)0x0) {
      pVVar2 = this + 0x28;
    }
    (**(code **)(this + 0x16c0))(*(undefined8 *)(this + 0x10),local_80,pVVar2);
    uVar3 = local_68;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::CalculateGlobalMemoryTypeBits() const */

uint __thiscall VmaAllocator_T::CalculateGlobalMemoryTypeBits(VmaAllocator_T *this)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if ((this[0xb] == (VmaAllocator_T)0x0) && (*(uint *)(this + 0x408) != 0)) {
    uVar1 = 0;
    do {
      if (((byte)this[uVar1 * 8 + 0x40c] & 0x40) != 0) {
        uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
      }
      uVar1 = uVar1 + 1;
    } while (*(uint *)(this + 0x408) != uVar1);
  }
  return uVar2;
}



/* VmaAllocator_T::GetFlushOrInvalidateRange(VmaAllocation_T*, unsigned long, unsigned long,
   VkMappedMemoryRange&) const */

undefined8 __thiscall
VmaAllocator_T::GetFlushOrInvalidateRange
          (VmaAllocator_T *this,VmaAllocation_T *param_1,ulong param_2,ulong param_3,
          VkMappedMemoryRange *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = 0;
  if ((param_3 != 0) && ((*(uint *)(this + (ulong)*(uint *)(param_1 + 0x48) * 8 + 0x40c) & 6) == 2))
  {
    lVar1 = *(long *)(this + 1000);
    lVar2 = *(long *)(param_1 + 0x30);
    *(undefined4 *)param_4 = 6;
    *(undefined8 *)(param_4 + 8) = 0;
    if (param_1[0x4c] == (VmaAllocation_T)0x1) {
      puVar3 = *(undefined8 **)param_1;
      *(undefined8 *)(param_4 + 0x10) = puVar3[3];
      uVar6 = param_2 & -lVar1;
      if (param_3 == 0xffffffffffffffff) {
        param_3 = lVar2 - param_2;
      }
      plVar4 = (long *)*puVar3;
      *(ulong *)(param_4 + 0x18) = uVar6;
      uVar8 = *(undefined8 *)(param_1 + 8);
      *(ulong *)(param_4 + 0x20) = param_3 + ((lVar1 + -1 + param_2) - uVar6) & -lVar1;
      lVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,uVar8);
      lVar1 = *(long *)(param_4 + 0x18);
      lVar2 = *(long *)(**(long **)param_1 + 8);
      *(long *)(param_4 + 0x18) = lVar5 + lVar1;
      uVar6 = lVar2 - (lVar5 + lVar1);
      if (*(ulong *)(param_4 + 0x20) < uVar6) {
        uVar6 = *(ulong *)(param_4 + 0x20);
      }
      *(ulong *)(param_4 + 0x20) = uVar6;
    }
    else if (param_1[0x4c] == (VmaAllocation_T)0x2) {
      *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_1 + 8);
      uVar6 = param_2 & -lVar1;
      *(ulong *)(param_4 + 0x18) = uVar6;
      uVar7 = lVar2 - uVar6;
      if (param_3 == 0xffffffffffffffff) {
        *(ulong *)(param_4 + 0x20) = uVar7;
      }
      else {
        uVar6 = ((param_2 - 1) + param_3 + lVar1) - uVar6 & -lVar1;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
        *(ulong *)(param_4 + 0x20) = uVar6;
      }
    }
    else {
      *(undefined8 *)(param_4 + 0x10) = 0;
    }
    uVar8 = 1;
  }
  return uVar8;
}



/* VmaAllocator_T::FlushOrInvalidateAllocation(VmaAllocation_T*, unsigned long, unsigned long,
   VMA_CACHE_OPERATION) */

undefined8 __thiscall
VmaAllocator_T::FlushOrInvalidateAllocation
          (VmaAllocator_T *this,VmaAllocation_T *param_1,ulong param_2,ulong param_3,int param_5)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  VkMappedMemoryRange local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48[0] = (VkMappedMemoryRange)0x0;
  local_48[1] = (VkMappedMemoryRange)0x0;
  local_48[2] = (VkMappedMemoryRange)0x0;
  local_48[3] = (VkMappedMemoryRange)0x0;
  local_48[4] = (VkMappedMemoryRange)0x0;
  local_48[5] = (VkMappedMemoryRange)0x0;
  local_48[6] = (VkMappedMemoryRange)0x0;
  local_48[7] = (VkMappedMemoryRange)0x0;
  local_48[8] = (VkMappedMemoryRange)0x0;
  local_48[9] = (VkMappedMemoryRange)0x0;
  local_48[10] = (VkMappedMemoryRange)0x0;
  local_48[0xb] = (VkMappedMemoryRange)0x0;
  local_48[0xc] = (VkMappedMemoryRange)0x0;
  local_48[0xd] = (VkMappedMemoryRange)0x0;
  local_48[0xe] = (VkMappedMemoryRange)0x0;
  local_48[0xf] = (VkMappedMemoryRange)0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  cVar1 = GetFlushOrInvalidateRange(this,param_1,param_2,param_3,local_48);
  uVar2 = 0;
  if (cVar1 != '\0') {
    if (param_5 == 0) {
      uVar2 = (**(code **)(this + 0x1688))(*(undefined8 *)(this + 0x10),1,local_48);
    }
    else if (param_5 == 1) {
      uVar2 = (**(code **)(this + 0x1690))(*(undefined8 *)(this + 0x10),1,local_48);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::CopyMemoryToAllocation(void const*, VmaAllocation_T*, unsigned long, unsigned
   long) */

int __thiscall
VmaAllocator_T::CopyMemoryToAllocation
          (VmaAllocator_T *this,void *param_1,VmaAllocation_T *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  void *local_70;
  VkMappedMemoryRange local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (void *)0x0;
  iVar2 = Map(this,param_2,&local_70);
  if (iVar2 == 0) {
    memcpy((void *)((long)local_70 + param_3),param_1,param_4);
    Unmap(this,param_2);
    local_68[0] = (VkMappedMemoryRange)0x0;
    local_68[1] = (VkMappedMemoryRange)0x0;
    local_68[2] = (VkMappedMemoryRange)0x0;
    local_68[3] = (VkMappedMemoryRange)0x0;
    local_68[4] = (VkMappedMemoryRange)0x0;
    local_68[5] = (VkMappedMemoryRange)0x0;
    local_68[6] = (VkMappedMemoryRange)0x0;
    local_68[7] = (VkMappedMemoryRange)0x0;
    local_68[8] = (VkMappedMemoryRange)0x0;
    local_68[9] = (VkMappedMemoryRange)0x0;
    local_68[10] = (VkMappedMemoryRange)0x0;
    local_68[0xb] = (VkMappedMemoryRange)0x0;
    local_68[0xc] = (VkMappedMemoryRange)0x0;
    local_68[0xd] = (VkMappedMemoryRange)0x0;
    local_68[0xe] = (VkMappedMemoryRange)0x0;
    local_68[0xf] = (VkMappedMemoryRange)0x0;
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    cVar1 = GetFlushOrInvalidateRange(this,param_2,param_3,param_4,local_68);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(this + 0x1688))(*(undefined8 *)(this + 0x10),1,local_68);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::CopyAllocationToMemory(VmaAllocation_T*, unsigned long, void*, unsigned long) */

undefined8 __thiscall
VmaAllocator_T::CopyAllocationToMemory
          (VmaAllocator_T *this,VmaAllocation_T *param_1,ulong param_2,void *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  void *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (void *)0x0;
  if (param_1[0x4c] == (VmaAllocation_T)0x1) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_68._8_8_;
    local_68 = auVar1 << 0x40;
    uVar3 = VmaDeviceMemoryBlock::Map(*(VmaDeviceMemoryBlock **)param_1,this,1,(void **)local_68);
    if ((int)uVar3 != 0) goto LAB_00107fff;
    uVar3 = local_68._0_8_;
    if (param_1[0x4c] == (VmaAllocation_T)0x1) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)param_1 + 0x48))
                        ((long *)**(undefined8 **)param_1,*(undefined8 *)(param_1 + 8));
      local_68._0_8_ = uVar3 + lVar4;
    }
    local_70 = (void *)local_68._0_8_;
    if (param_1[0x4e] != (VmaAllocation_T)0xff) {
      param_1[0x4e] = (VmaAllocation_T)((char)param_1[0x4e] + '\x01');
    }
  }
  else {
    if (param_1[0x4c] != (VmaAllocation_T)0x2) {
      uVar3 = 0xfffffffb;
      goto LAB_00107fff;
    }
    uVar3 = VmaAllocation_T::DedicatedAllocMap(param_1,this,&local_70);
    if ((int)uVar3 != 0) goto LAB_00107fff;
  }
  local_68 = (undefined1  [16])0x0;
  local_48 = 0;
  local_58 = (undefined1  [16])0x0;
  cVar2 = GetFlushOrInvalidateRange(this,param_1,param_2,param_4,(VkMappedMemoryRange *)local_68);
  if ((cVar2 == '\0') ||
     (uVar3 = (**(code **)(this + 0x1690))
                        (*(undefined8 *)(this + 0x10),1,(VkMappedMemoryRange *)local_68),
     (int)uVar3 == 0)) {
    memcpy(param_3,(void *)((long)local_70 + param_2),param_4);
    Unmap(this,param_1);
    uVar3 = 0;
  }
LAB_00107fff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* VmaAllocator_T::UpdateVulkanBudget() */

void __thiscall VmaAllocator_T::UpdateVulkanBudget(VmaAllocator_T *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  VmaAllocator_T *pVVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  VmaAllocator_T *pVVar7;
  pthread_rwlock_t *__rwlock;
  long in_FS_OFFSET;
  long local_358 [18];
  long alStack_2c8 [16];
  undefined1 *local_248 [67];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar5 = local_248;
  for (lVar3 = 0x43; lVar3 != 0; lVar3 = lVar3 + -1) {
    *ppuVar5 = (undefined1 *)0x0;
    ppuVar5 = ppuVar5 + 1;
  }
  local_248[0]._0_4_ = 0x3b9bb07e;
  plVar6 = local_358;
  for (lVar3 = 0x22; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar6 = 0;
    plVar6 = plVar6 + 1;
  }
  local_358[0]._0_4_ = 0x3b9e67c8;
  local_248[1] = (undefined1 *)local_358;
  (**(code **)(this + 0x1700))(*(undefined8 *)(this + 0x1560));
  if (*this == (VmaAllocator_T)0x0) {
    __rwlock = (pthread_rwlock_t *)0x0;
    if (*(int *)(this + 0x50c) == 0) {
      LOCK();
      *(undefined4 *)(this + 0x1390) = 0;
      UNLOCK();
      goto LAB_001082b5;
    }
LAB_001081d6:
    pVVar4 = this + 0x1290;
    lVar3 = 0;
    pVVar7 = this + 0x510;
    do {
      *(long *)(pVVar4 + 0x140) = alStack_2c8[lVar3];
      *(long *)(pVVar4 + 0x1c0) = local_358[lVar3 + 2];
      lVar1 = *(long *)pVVar4;
      *(long *)(pVVar4 + 0x240) = lVar1;
      if (*(ulong *)(pVVar4 + 0x1c0) == 0) {
        *(ulong *)(pVVar4 + 0x1c0) = (*(ulong *)pVVar7 * 8) / 10;
      }
      else if (*(ulong *)pVVar7 < *(ulong *)(pVVar4 + 0x1c0)) {
        *(ulong *)(pVVar4 + 0x1c0) = *(ulong *)pVVar7;
      }
      if ((*(long *)(pVVar4 + 0x140) == 0) && (lVar1 != 0)) {
        *(long *)(pVVar4 + 0x140) = lVar1;
      }
      lVar3 = lVar3 + 1;
      pVVar4 = pVVar4 + 8;
      pVVar7 = pVVar7 + 0x10;
    } while ((uint)lVar3 < *(uint *)(this + 0x50c));
    LOCK();
    *(undefined4 *)(this + 0x1390) = 0;
    UNLOCK();
    if (__rwlock == (pthread_rwlock_t *)0x0) goto LAB_001082b5;
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 0x1398);
    iVar2 = pthread_rwlock_wrlock(__rwlock);
    if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    if (*(int *)(this + 0x50c) != 0) goto LAB_001081d6;
    LOCK();
    *(undefined4 *)(this + 0x1390) = 0;
    UNLOCK();
  }
  pthread_rwlock_unlock(__rwlock);
LAB_001082b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::Init(VmaAllocatorCreateInfo const*) */

undefined8 VmaAllocator_T::Init(VmaAllocatorCreateInfo *param_1)

{
  if (param_1[10] == (VmaAllocatorCreateInfo)0x0) {
    return 0;
  }
  UpdateVulkanBudget((VmaAllocator_T *)param_1);
  return 0;
}



/* VmaAllocator_T::GetHeapBudgets(VmaBudget*, unsigned int, unsigned int) */

void __thiscall
VmaAllocator_T::GetHeapBudgets(VmaAllocator_T *this,VmaBudget *param_1,uint param_2,uint param_3)

{
  VmaAllocator_T VVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  pthread_rwlock_t *__rwlock;
  
  VVar1 = this[10];
  while( true ) {
    if (VVar1 == (VmaAllocator_T)0x0) {
      uVar5 = param_3 + param_2;
      if (param_3 != 0) {
        do {
          uVar3 = (ulong)param_2;
          param_2 = param_2 + 1;
          *(undefined4 *)param_1 = *(undefined4 *)(this + (uVar3 + 0x484) * 4);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + (uVar3 + 0x484) * 4 + 0x40);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + (uVar3 + 0x252) * 8);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + (uVar3 + 0x252) * 8 + 0x80);
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
          *(ulong *)(param_1 + 0x20) = (ulong)(*(long *)(this + uVar3 * 0x10 + 0x510) << 3) / 10;
          param_1 = param_1 + 0x28;
        } while (param_2 != uVar5);
      }
      return;
    }
    if (*(uint *)(this + 0x1390) < 0x1e) break;
    UpdateVulkanBudget(this);
    VVar1 = this[10];
  }
  if (*this == (VmaAllocator_T)0x0) {
    __rwlock = (pthread_rwlock_t *)0x0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 0x1398);
    do {
      iVar2 = pthread_rwlock_rdlock(__rwlock);
    } while (iVar2 == 0xb);
    if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    if (param_3 == 0) goto LAB_00108434;
  }
  uVar5 = 0;
  do {
    uVar3 = (ulong)(param_2 + uVar5);
    *(undefined4 *)param_1 = *(undefined4 *)(this + (uVar3 + 0x484) * 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + (uVar3 + 0x484) * 4 + 0x40);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + (uVar3 + 0x252) * 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + (uVar3 + 0x252) * 8 + 0x80);
    lVar6 = (*(long *)(param_1 + 8) + *(long *)(this + uVar3 * 8 + 0x13d0)) -
            *(ulong *)(this + uVar3 * 8 + 0x14d0);
    if ((ulong)(*(long *)(param_1 + 8) + *(long *)(this + uVar3 * 8 + 0x13d0)) <=
        *(ulong *)(this + uVar3 * 8 + 0x14d0)) {
      lVar6 = 0;
    }
    *(long *)(param_1 + 0x18) = lVar6;
    uVar4 = *(ulong *)(this + uVar3 * 0x10 + 0x510);
    if (*(ulong *)(this + uVar3 * 8 + 0x1450) < *(ulong *)(this + uVar3 * 0x10 + 0x510)) {
      uVar4 = *(ulong *)(this + uVar3 * 8 + 0x1450);
    }
    uVar5 = uVar5 + 1;
    *(ulong *)(param_1 + 0x20) = uVar4;
    param_1 = param_1 + 0x28;
  } while (uVar5 < param_3);
  if (__rwlock == (pthread_rwlock_t *)0x0) {
    return;
  }
LAB_00108434:
  pthread_rwlock_unlock(__rwlock);
  return;
}



/* VmaAllocator_T::CalcMemTypeParams(VmaAllocationCreateInfo&, unsigned int, unsigned long, unsigned
   long) */

undefined8 __thiscall
VmaAllocator_T::CalcMemTypeParams
          (VmaAllocator_T *this,VmaAllocationCreateInfo *param_1,uint param_2,ulong param_3,
          ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  VmaBudget local_48 [16];
  undefined1 local_38 [16];
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)param_1;
  if (((uVar1 & 4) != 0) && (((byte)this[(ulong)param_2 * 8 + 0x40c] & 2) == 0)) {
    uVar1 = uVar1 & 0xfffffffb;
    *(uint *)param_1 = uVar1;
  }
  if ((~uVar1 & 0x101) == 0) {
    local_48[0] = (VmaBudget)0x0;
    local_48[1] = (VmaBudget)0x0;
    local_48[2] = (VmaBudget)0x0;
    local_48[3] = (VmaBudget)0x0;
    local_48[4] = (VmaBudget)0x0;
    local_48[5] = (VmaBudget)0x0;
    local_48[6] = (VmaBudget)0x0;
    local_48[7] = (VmaBudget)0x0;
    local_48[8] = (VmaBudget)0x0;
    local_48[9] = (VmaBudget)0x0;
    local_48[10] = (VmaBudget)0x0;
    local_48[0xb] = (VmaBudget)0x0;
    local_48[0xc] = (VmaBudget)0x0;
    local_48[0xd] = (VmaBudget)0x0;
    local_48[0xe] = (VmaBudget)0x0;
    local_48[0xf] = (VmaBudget)0x0;
    local_28 = 0;
    local_38 = (undefined1  [16])0x0;
    GetHeapBudgets(this,local_48,*(uint *)(this + (ulong)param_2 * 8 + 0x410),1);
    if (local_28 < param_3 * param_4 + local_38._8_8_) {
      uVar2 = 0xfffffffe;
      goto LAB_00108540;
    }
  }
  uVar2 = 0;
LAB_00108540:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::SetCurrentFrameIndex(unsigned int) */

void __thiscall VmaAllocator_T::SetCurrentFrameIndex(VmaAllocator_T *this,uint param_1)

{
  LOCK();
  *(uint *)(this + 0x1568) = param_1;
  UNLOCK();
  if (this[10] == (VmaAllocator_T)0x0) {
    return;
  }
  UpdateVulkanBudget(this);
  return;
}



/* VmaAllocator_T::FillAllocation(VmaAllocation_T*, unsigned char) */

void VmaAllocator_T::FillAllocation(VmaAllocation_T *param_1,uchar param_2)

{
  return;
}



/* VmaAllocator_T::GetGpuDefragmentationMemoryTypeBits() */

void __thiscall VmaAllocator_T::GetGpuDefragmentationMemoryTypeBits(VmaAllocator_T *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x156c) != -1) {
    return;
  }
  uVar1 = CalculateGpuDefragmentationMemoryTypeBits(this);
  LOCK();
  *(undefined4 *)(this + 0x156c) = uVar1;
  UNLOCK();
  return;
}



undefined8 vmaCreateAllocator(VmaAllocatorCreateInfo *param_1,undefined8 *param_2)

{
  VmaAllocator_T VVar1;
  undefined8 *puVar2;
  VmaAllocator_T *this;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if ((puVar2 == (undefined8 *)0x0) || ((code *)puVar2[1] == (code *)0x0)) {
    this = (VmaAllocator_T *)aligned_alloc(8,0x1720);
  }
  else {
    this = (VmaAllocator_T *)(*(code *)puVar2[1])(*puVar2,0x1720,8,1);
  }
  VmaAllocator_T::VmaAllocator_T(this,param_1);
  VVar1 = this[10];
  *param_2 = this;
  if (VVar1 == (VmaAllocator_T)0x0) {
    return 0;
  }
  VmaAllocator_T::UpdateVulkanBudget(this);
  return 0;
}



void vmaGetAllocatorInfo(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1560);
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  param_2[1] = uVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  return;
}



void vmaGetPhysicalDeviceProperties(long param_1,long *param_2)

{
  *param_2 = param_1 + 0xd0;
  return;
}



void vmaGetMemoryProperties(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x408;
  return;
}



void vmaGetMemoryTypeProperties(long param_1,uint param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_1 + 0x40c + (ulong)param_2 * 8);
  return;
}



void vmaSetCurrentFrameIndex(VmaAllocator_T *param_1,undefined4 param_2)

{
  LOCK();
  *(undefined4 *)(param_1 + 0x1568) = param_2;
  UNLOCK();
  if (param_1[10] == (VmaAllocator_T)0x0) {
    return;
  }
  VmaAllocator_T::UpdateVulkanBudget(param_1);
  return;
}



void __thiscall
VmaAllocator_T::vmaCalculateStatistics(VmaAllocator_T *this,VmaTotalStatistics *param_1)

{
  CalculateStatistics(this,param_1);
  return;
}



long vmaCalculateLazilyAllocatedBytes(VmaAllocator_T *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  VmaTotalStatistics aVStack_c68 [16];
  long alStack_c58 [391];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  VmaAllocator_T::CalculateStatistics(param_1,aVStack_c68);
  iVar1 = *(int *)(param_1 + 0x50c);
  if (iVar1 != 0) {
    iVar4 = 0;
    lVar5 = 0;
    lVar3 = (ulong)*(uint *)(param_1 + 0x408) << 3;
    if (*(uint *)(param_1 + 0x408) != 0) {
      do {
        lVar2 = 0;
        do {
          while ((iVar4 != *(int *)(param_1 + lVar2 + 0x410) ||
                 (((byte)param_1[lVar2 + 0x40c] & 0x10) == 0))) {
            lVar2 = lVar2 + 8;
            if (lVar3 == lVar2) goto LAB_00108798;
          }
          lVar5 = lVar5 + alStack_c58[lVar2];
          lVar2 = lVar2 + 8;
        } while (lVar3 != lVar2);
LAB_00108798:
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
      goto LAB_0010879f;
    }
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar1);
  }
  lVar5 = 0;
LAB_0010879f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}



void vmaGetHeapBudgets(VmaAllocator_T *param_1,VmaBudget *param_2)

{
  VmaAllocator_T::GetHeapBudgets(param_1,param_2,0,*(uint *)(param_1 + 0x50c));
  return;
}



void vmaFreeStatsString(long param_1,void *param_2)

{
  if (param_2 == (void *)0x0) {
    return;
  }
  if ((*(char *)(param_1 + 0x20) != '\0') && (*(code **)(param_1 + 0x40) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010880c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  free(param_2);
  return;
}



void vmaFindMemoryTypeIndex(void)

{
  VmaAllocator_T::FindMemoryTypeIndex();
  return;
}



ulong vmaFindMemoryTypeIndexForBufferInfo
                (VmaAllocator_T *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  VmaAllocator_T *pVVar5;
  long in_FS_OFFSET;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  long local_68;
  undefined4 local_58;
  undefined1 auStack_54 [12];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  long local_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(param_1 + 0x1708) == (code *)0x0) {
    pVVar5 = (VmaAllocator_T *)0x0;
    local_78 = 0;
    uStack_74 = 0;
    if (param_1[0x20] != (VmaAllocator_T)0x0) {
      pVVar5 = param_1 + 0x28;
    }
    uVar4 = (**(code **)(param_1 + 0x16b8))(uVar1,param_2,pVVar5,&local_78);
    if ((int)uVar4 == 0) {
      uStack_48 = 0;
      uStack_44 = 0;
      local_58 = 0;
      auStack_54 = SUB1612((undefined1  [16])0x0,4);
      (**(code **)(param_1 + 0x16a8))(uVar1,CONCAT44(uStack_74,local_78),&local_58);
      if (param_1[0xf] != (VmaAllocator_T)0x0) {
        for (piVar2 = *(int **)(param_2 + 8); piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 2))
        {
          if (*piVar2 == 0x3ba1f5f6) {
            uVar4 = *(ulong *)(piVar2 + 4);
            goto LAB_001089e3;
          }
        }
      }
      uVar4 = (ulong)*(uint *)(param_2 + 0x20);
LAB_001089e3:
      uVar3 = VmaAllocator_T::FindMemoryTypeIndex(param_1,uStack_48,param_3,uVar4,param_4);
      pVVar5 = (VmaAllocator_T *)0x0;
      if (param_1[0x20] != (VmaAllocator_T)0x0) {
        pVVar5 = param_1 + 0x28;
      }
      (**(code **)(param_1 + 0x16c0))(uVar1,CONCAT44(uStack_74,local_78),pVVar5);
      uVar4 = (ulong)uVar3;
    }
  }
  else {
    uStack_74 = 0;
    uStack_70 = 0;
    local_6c = 0;
    local_78 = 0x3ba1174a;
    local_34 = 0;
    local_58 = 0x3b9d0453;
    auStack_54 = SUB1612((undefined1  [16])0x0,0);
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    local_68 = param_2;
    (**(code **)(param_1 + 0x1708))(uVar1,&local_78,&local_58);
    if (param_1[0xf] != (VmaAllocator_T)0x0) {
      for (piVar2 = *(int **)(param_2 + 8); piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 2)) {
        if (*piVar2 == 0x3ba1f5f6) {
          uVar4 = *(ulong *)(piVar2 + 4);
          goto LAB_001088e4;
        }
      }
    }
    uVar4 = (ulong)*(uint *)(param_2 + 0x20);
LAB_001088e4:
    uVar4 = VmaAllocator_T::FindMemoryTypeIndex(param_1,uStack_38,param_3,uVar4,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong vmaFindMemoryTypeIndexForImageInfo
                (VmaAllocator_T *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  VmaAllocator_T *pVVar4;
  long in_FS_OFFSET;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 auStack_54 [12];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  long local_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(param_1 + 0x1710) == (code *)0x0) {
    pVVar4 = (VmaAllocator_T *)0x0;
    local_78 = 0;
    uStack_74 = 0;
    if (param_1[0x20] != (VmaAllocator_T)0x0) {
      pVVar4 = param_1 + 0x28;
    }
    uVar3 = (**(code **)(param_1 + 0x16c8))(uVar1,param_2,pVVar4,&local_78);
    if ((int)uVar3 == 0) {
      uStack_48 = 0;
      uStack_44 = 0;
      local_58 = 0;
      auStack_54 = SUB1612((undefined1  [16])0x0,4);
      (**(code **)(param_1 + 0x16b0))(uVar1,CONCAT44(uStack_74,local_78),&local_58);
      uVar2 = VmaAllocator_T::FindMemoryTypeIndex
                        (param_1,uStack_48,param_3,*(undefined4 *)(param_2 + 0x38),param_4);
      pVVar4 = (VmaAllocator_T *)0x0;
      if (param_1[0x20] != (VmaAllocator_T)0x0) {
        pVVar4 = param_1 + 0x28;
      }
      (**(code **)(param_1 + 0x16d0))(uVar1,CONCAT44(uStack_74,local_78),pVVar4);
      uVar3 = (ulong)uVar2;
    }
  }
  else {
    local_78 = 0x3ba1174b;
    uStack_74 = 0;
    uStack_70 = 0;
    local_34 = 0;
    uStack_60 = 0;
    local_58 = 0x3b9d0453;
    uStack_68 = (undefined4)param_2;
    uStack_64 = (undefined4)((ulong)param_2 >> 0x20);
    auStack_54 = SUB1612((undefined1  [16])0x0,0);
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(param_1 + 0x1710))(uVar1,&local_78,&local_58);
    uVar3 = VmaAllocator_T::FindMemoryTypeIndex
                      (param_1,uStack_38,param_3,*(undefined4 *)(param_2 + 0x38),param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void vmaDestroyPool(VmaAllocator_T *param_1,VmaPool_T *param_2)

{
  if (param_2 != (VmaPool_T *)0x0) {
    VmaAllocator_T::DestroyPool(param_1,param_2);
    return;
  }
  return;
}



void vmaGetPoolStatistics(undefined8 param_1,VmaBlockVector *param_2,VmaStatistics *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined1 (*) [16])(param_3 + 8) = (undefined1  [16])0x0;
  VmaBlockVector::AddStatistics(param_2,param_3);
  VmaDedicatedAllocationList::AddStatistics((VmaDedicatedAllocationList *)(param_2 + 0xb8),param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vmaCalculatePoolStatistics
               (undefined8 param_1,VmaBlockVector *param_2,VmaDetailedStatistics *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 (*) [16])(param_3 + 8) = (undefined1  [16])0x0;
  uVar2 = _UNK_00115398;
  uVar1 = _LC0;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = uVar1;
  *(undefined8 *)(param_3 + 0x28) = uVar2;
  *(undefined8 *)(param_3 + 0x30) = uVar1;
  *(undefined8 *)(param_3 + 0x38) = uVar2;
  VmaBlockVector::AddDetailedStatistics(param_2,param_3);
  VmaDedicatedAllocationList::AddDetailedStatistics
            ((VmaDedicatedAllocationList *)(param_2 + 0xb8),param_3);
  return;
}



undefined8 vmaCheckPoolCorruption(void)

{
  return 0xfffffff8;
}



void vmaGetPoolName(undefined8 param_1,long param_2,undefined8 *param_3)

{
  *param_3 = *(undefined8 *)(param_2 + 0x118);
  return;
}



void vmaSetPoolName(undefined8 param_1,long *param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  
  lVar1 = *param_2;
  pvVar3 = (void *)param_2[0x23];
  if (*(char *)(lVar1 + 0x20) == '\0') {
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    if (param_3 == (char *)0x0) goto LAB_00108d0a;
    sVar2 = strlen(param_3);
    sVar2 = sVar2 + 1;
LAB_00108d2c:
    pvVar3 = (void *)aligned_alloc(1,sVar2);
  }
  else {
    if (pvVar3 != (void *)0x0) {
      if (*(code **)(lVar1 + 0x40) == (code *)0x0) {
        free(pvVar3);
      }
      else {
        (**(code **)(lVar1 + 0x40))(*(undefined8 *)(lVar1 + 0x28));
      }
    }
    if (param_3 == (char *)0x0) {
LAB_00108d0a:
      pvVar3 = (void *)0x0;
      goto LAB_00108d0c;
    }
    sVar2 = strlen(param_3);
    sVar2 = sVar2 + 1;
    if (*(code **)(lVar1 + 0x30) == (code *)0x0) goto LAB_00108d2c;
    pvVar3 = (void *)(**(code **)(lVar1 + 0x30))(*(undefined8 *)(lVar1 + 0x28),sVar2,1,1);
  }
  pvVar3 = memcpy(pvVar3,param_3,sVar2);
LAB_00108d0c:
  param_2[0x23] = (long)pvVar3;
  return;
}



void __thiscall
VmaAllocator_T::vmaGetAllocationInfo
          (VmaAllocator_T *this,VmaAllocation_T *param_1,VmaAllocationInfo *param_2)

{
  GetAllocationInfo(this,param_1,param_2);
  return;
}



void vmaGetAllocationInfo2
               (VmaAllocator_T *param_1,VmaAllocation_T *param_2,VmaAllocationInfo *param_3)

{
  undefined8 uVar1;
  
  VmaAllocator_T::GetAllocationInfo(param_1,param_2,param_3);
  if (param_2[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = *(undefined8 *)(**(long **)param_2 + 8);
    *(undefined4 *)(param_3 + 0x40) = 0;
    *(undefined8 *)(param_3 + 0x38) = uVar1;
    return;
  }
  if (param_2[0x4c] != (VmaAllocation_T)0x2) {
    return;
  }
  *(undefined4 *)(param_3 + 0x40) = 1;
  *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x18);
  return;
}



void vmaSetAllocationUserData(undefined8 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x38) = param_3;
  return;
}



void vmaSetAllocationName(VmaAllocator_T *param_1,VmaAllocation_T *param_2,char *param_3)

{
  VmaAllocation_T::SetName(param_2,param_1,param_3);
  return;
}



void vmaGetAllocationMemoryProperties(long param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_1 + 0x40c + (ulong)*(uint *)(param_2 + 0x48) * 8);
  return;
}



ulong vmaMapMemory(VmaAllocator_T *param_1,VmaAllocation_T *param_2,void **param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[0x4c] == (VmaAllocation_T)0x1) {
    local_38 = (void *)0x0;
    uVar1 = VmaDeviceMemoryBlock::Map(*(VmaDeviceMemoryBlock **)param_2,param_1,1,&local_38);
    pvVar4 = local_38;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      if (param_2[0x4c] == (VmaAllocation_T)0x1) {
        lVar2 = (**(code **)(*(long *)**(undefined8 **)param_2 + 0x48))
                          ((long *)**(undefined8 **)param_2,*(undefined8 *)(param_2 + 8));
        pvVar4 = (void *)((long)pvVar4 + lVar2);
      }
      *param_3 = pvVar4;
      if (param_2[0x4e] != (VmaAllocation_T)0xff) {
        param_2[0x4e] = (VmaAllocation_T)((char)param_2[0x4e] + '\x01');
      }
    }
  }
  else {
    uVar3 = 0xfffffffb;
    if (param_2[0x4c] == (VmaAllocation_T)0x2) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = VmaAllocation_T::DedicatedAllocMap(param_2,param_1,param_3);
        return uVar3;
      }
      goto LAB_00108f01;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00108f01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void vmaUnmapMemory(VmaAllocator_T *param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(char *)((long)param_2 + 0x4c) == '\x01') {
    if (*(char *)((long)param_2 + 0x4e) != '\0') {
      *(char *)((long)param_2 + 0x4e) = *(char *)((long)param_2 + 0x4e) + -1;
    }
    VmaDeviceMemoryBlock::Unmap((VmaDeviceMemoryBlock *)*param_2,param_1,1);
    return;
  }
  if (*(char *)((long)param_2 + 0x4c) != '\x02') {
    return;
  }
  if (((*(char *)((long)param_2 + 0x4e) != '\0') &&
      (cVar1 = *(char *)((long)param_2 + 0x4e) + -1, *(char *)((long)param_2 + 0x4e) = cVar1,
      cVar1 == '\0')) && ((*(byte *)((long)param_2 + 0x4f) & 1) == 0)) {
    param_2[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x00108f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x1680))(*(undefined8 *)(param_1 + 0x10),param_2[1]);
    return;
  }
  return;
}



undefined8
vmaFlushAllocation(VmaAllocator_T *param_1,VmaAllocation_T *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  VkMappedMemoryRange local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48[0] = (VkMappedMemoryRange)0x0;
  local_48[1] = (VkMappedMemoryRange)0x0;
  local_48[2] = (VkMappedMemoryRange)0x0;
  local_48[3] = (VkMappedMemoryRange)0x0;
  local_48[4] = (VkMappedMemoryRange)0x0;
  local_48[5] = (VkMappedMemoryRange)0x0;
  local_48[6] = (VkMappedMemoryRange)0x0;
  local_48[7] = (VkMappedMemoryRange)0x0;
  local_48[8] = (VkMappedMemoryRange)0x0;
  local_48[9] = (VkMappedMemoryRange)0x0;
  local_48[10] = (VkMappedMemoryRange)0x0;
  local_48[0xb] = (VkMappedMemoryRange)0x0;
  local_48[0xc] = (VkMappedMemoryRange)0x0;
  local_48[0xd] = (VkMappedMemoryRange)0x0;
  local_48[0xe] = (VkMappedMemoryRange)0x0;
  local_48[0xf] = (VkMappedMemoryRange)0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  cVar1 = VmaAllocator_T::GetFlushOrInvalidateRange(param_1,param_2,param_3,param_4,local_48);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(param_1 + 0x1688))(*(undefined8 *)(param_1 + 0x10),1,local_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
vmaInvalidateAllocation
          (VmaAllocator_T *param_1,VmaAllocation_T *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  VkMappedMemoryRange local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48[0] = (VkMappedMemoryRange)0x0;
  local_48[1] = (VkMappedMemoryRange)0x0;
  local_48[2] = (VkMappedMemoryRange)0x0;
  local_48[3] = (VkMappedMemoryRange)0x0;
  local_48[4] = (VkMappedMemoryRange)0x0;
  local_48[5] = (VkMappedMemoryRange)0x0;
  local_48[6] = (VkMappedMemoryRange)0x0;
  local_48[7] = (VkMappedMemoryRange)0x0;
  local_48[8] = (VkMappedMemoryRange)0x0;
  local_48[9] = (VkMappedMemoryRange)0x0;
  local_48[10] = (VkMappedMemoryRange)0x0;
  local_48[0xb] = (VkMappedMemoryRange)0x0;
  local_48[0xc] = (VkMappedMemoryRange)0x0;
  local_48[0xd] = (VkMappedMemoryRange)0x0;
  local_48[0xe] = (VkMappedMemoryRange)0x0;
  local_48[0xf] = (VkMappedMemoryRange)0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  cVar1 = VmaAllocator_T::GetFlushOrInvalidateRange(param_1,param_2,param_3,param_4,local_48);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(param_1 + 0x1690))(*(undefined8 *)(param_1 + 0x10),1,local_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
vmaCopyMemoryToAllocation
          (VmaAllocator_T *param_1,void *param_2,VmaAllocation_T *param_3,ulong param_4,
          ulong param_5)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    return 0;
  }
  uVar1 = VmaAllocator_T::CopyMemoryToAllocation(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}



undefined8
vmaCopyAllocationToMemory
          (VmaAllocator_T *param_1,VmaAllocation_T *param_2,ulong param_3,void *param_4,
          size_t param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  void *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  if (param_5 == 0) goto LAB_001090d7;
  local_70 = (void *)0x0;
  if (param_2[0x4c] == (VmaAllocation_T)0x1) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_68._8_8_;
    local_68 = auVar1 << 0x40;
    uVar3 = VmaDeviceMemoryBlock::Map(*(VmaDeviceMemoryBlock **)param_2,param_1,1,(void **)local_68)
    ;
    if ((int)uVar3 != 0) goto LAB_001090d7;
    uVar3 = local_68._0_8_;
    if (param_2[0x4c] == (VmaAllocation_T)0x1) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)param_2 + 0x48))
                        ((long *)**(undefined8 **)param_2,*(undefined8 *)(param_2 + 8));
      local_68._0_8_ = uVar3 + lVar4;
    }
    local_70 = (void *)local_68._0_8_;
    if (param_2[0x4e] != (VmaAllocation_T)0xff) {
      param_2[0x4e] = (VmaAllocation_T)((char)param_2[0x4e] + '\x01');
    }
  }
  else {
    if (param_2[0x4c] != (VmaAllocation_T)0x2) {
      uVar3 = 0xfffffffb;
      goto LAB_001090d7;
    }
    uVar3 = VmaAllocation_T::DedicatedAllocMap(param_2,param_1,&local_70);
    if ((int)uVar3 != 0) goto LAB_001090d7;
  }
  local_68 = (undefined1  [16])0x0;
  local_48 = 0;
  local_58 = (undefined1  [16])0x0;
  cVar2 = VmaAllocator_T::GetFlushOrInvalidateRange
                    (param_1,param_2,param_3,param_5,(VkMappedMemoryRange *)local_68);
  if ((cVar2 == '\0') ||
     (uVar3 = (**(code **)(param_1 + 0x1690))
                        (*(undefined8 *)(param_1 + 0x10),1,(VkMappedMemoryRange *)local_68),
     (int)uVar3 == 0)) {
    memcpy(param_4,(void *)((long)local_70 + param_3),param_5);
    VmaAllocator_T::Unmap(param_1,param_2);
    uVar3 = 0;
  }
LAB_001090d7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 vmaCheckCorruption(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    return 0xfffffff8;
  }
  do {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_1 + 0x15f0));
  } while (iVar1 == 0xb);
  if (iVar1 != 0x23) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x15f0));
    return 0xfffffff8;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



undefined8
vmaBeginDefragmentation(VmaAllocator_T *param_1,VmaDefragmentationInfo *param_2,undefined8 *param_3)

{
  VmaDefragmentationContext_T *this;
  undefined8 uVar1;
  
  if ((*(long *)(param_2 + 8) == 0) || ((*(byte *)(*(long *)(param_2 + 8) + 0x3c) & 4) == 0)) {
    if (*(code **)(param_1 + 0x30) == (code *)0x0) {
      this = (VmaDefragmentationContext_T *)aligned_alloc(8,0xa8);
    }
    else {
      this = (VmaDefragmentationContext_T *)
             (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x28),0xa8,8,1);
    }
    VmaDefragmentationContext_T::VmaDefragmentationContext_T(this,param_1,param_2);
    *param_3 = this;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff8;
  }
  return uVar1;
}



void vmaEndDefragmentation(long param_1,VmaDefragmentationContext_T *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == (VmaDefragmentationContext_T *)0x0) {
      return;
    }
    VmaDefragmentationContext_T::~VmaDefragmentationContext_T(param_2);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    *param_3 = *(undefined8 *)(param_2 + 0x70);
    param_3[1] = uVar1;
    param_3[2] = *(undefined8 *)(param_2 + 0x80);
    VmaDefragmentationContext_T::~VmaDefragmentationContext_T(param_2);
  }
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00109376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x28),param_2);
    return;
  }
  free(param_2);
  return;
}



undefined8 vmaBindBufferMemory(VmaAllocator_T *param_1,VmaAllocation_T *param_2,VkBuffer_T *param_3)

{
  undefined8 uVar1;
  
  if (param_2[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = VmaDeviceMemoryBlock::BindBufferMemory
                      (*(VmaDeviceMemoryBlock **)param_2,param_1,param_2,0,param_3,(void *)0x0);
    return uVar1;
  }
  if (param_2[0x4c] != (VmaAllocation_T)0x2) {
    return 0xfffffff3;
  }
                    /* WARNING: Could not recover jumptable at 0x001093e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x1698))
                    (*(undefined8 *)(param_1 + 0x10),param_3,*(undefined8 *)(param_2 + 8),0);
  return uVar1;
}



undefined8
vmaBindBufferMemory2
          (VmaAllocator_T *param_1,VmaAllocation_T *param_2,ulong param_3,VkBuffer_T *param_4,
          void *param_5)

{
  undefined8 uVar1;
  
  if (param_2[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = VmaDeviceMemoryBlock::BindBufferMemory
                      (*(VmaDeviceMemoryBlock **)param_2,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  if (param_2[0x4c] != (VmaAllocation_T)0x2) {
    return 0xfffffff3;
  }
  uVar1 = VmaAllocator_T::BindVulkanBuffer
                    (param_1,*(VkDeviceMemory_T **)(param_2 + 8),param_3,param_4,param_5);
  return uVar1;
}



undefined8 vmaBindImageMemory(VmaAllocator_T *param_1,VmaAllocation_T *param_2,VkImage_T *param_3)

{
  undefined8 uVar1;
  
  if (param_2[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = VmaDeviceMemoryBlock::BindImageMemory
                      (*(VmaDeviceMemoryBlock **)param_2,param_1,param_2,0,param_3,(void *)0x0);
    return uVar1;
  }
  if (param_2[0x4c] != (VmaAllocation_T)0x2) {
    return 0xfffffff3;
  }
                    /* WARNING: Could not recover jumptable at 0x00109497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x16a0))
                    (*(undefined8 *)(param_1 + 0x10),param_3,*(undefined8 *)(param_2 + 8),0);
  return uVar1;
}



undefined8
vmaBindImageMemory2(VmaAllocator_T *param_1,VmaAllocation_T *param_2,ulong param_3,
                   VkImage_T *param_4,void *param_5)

{
  undefined8 uVar1;
  
  if (param_2[0x4c] == (VmaAllocation_T)0x1) {
    uVar1 = VmaDeviceMemoryBlock::BindImageMemory
                      (*(VmaDeviceMemoryBlock **)param_2,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  if (param_2[0x4c] != (VmaAllocation_T)0x2) {
    return 0xfffffff3;
  }
  uVar1 = VmaAllocator_T::BindVulkanImage
                    (param_1,*(VkDeviceMemory_T **)(param_2 + 8),param_3,param_4,param_5);
  return uVar1;
}



ulong vmaCreateAliasingBuffer2
                (VmaAllocator_T *param_1,VmaAllocation_T *param_2,ulong param_3,long param_4,
                undefined8 *param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  VmaAllocator_T *pVVar4;
  
  lVar1 = *(long *)(param_4 + 0x18);
  *param_5 = 0;
  if (lVar1 == 0) {
    return 0xfffffffd;
  }
  if (((*(byte *)(param_4 + 0x22) & 2) == 0) || (param_1[0xc] != (VmaAllocator_T)0x0)) {
    pVVar4 = (VmaAllocator_T *)0x0;
    if (param_1[0x20] != (VmaAllocator_T)0x0) {
      pVVar4 = param_1 + 0x28;
    }
    uVar3 = (**(code **)(param_1 + 0x16b8))(*(undefined8 *)(param_1 + 0x10),param_4,pVVar4,param_5);
    if (-1 < (int)uVar3) {
      uVar2 = VmaAllocator_T::BindBufferMemory
                        (param_1,param_2,param_3,(VkBuffer_T *)*param_5,(void *)0x0);
      if ((int)uVar2 < 0) {
        pVVar4 = (VmaAllocator_T *)0x0;
        if (param_1[0x20] != (VmaAllocator_T)0x0) {
          pVVar4 = param_1 + 0x28;
        }
        (**(code **)(param_1 + 0x16c0))(*(undefined8 *)(param_1 + 0x10),*param_5,pVVar4);
        return (ulong)uVar2;
      }
      return 0;
    }
  }
  else {
    uVar3 = 0xfffffffd;
  }
  return uVar3;
}



void vmaCreateAliasingBuffer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  vmaCreateAliasingBuffer2(param_1,param_2,0,param_3,param_4);
  return;
}



ulong vmaCreateAliasingImage2
                (VmaAllocator_T *param_1,VmaAllocation_T *param_2,ulong param_3,long param_4,
                undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  VmaAllocator_T *pVVar4;
  
  iVar1 = *(int *)(param_4 + 0x1c);
  *param_5 = 0;
  if (iVar1 == 0) {
    return 0xfffffffd;
  }
  if ((((*(int *)(param_4 + 0x20) == 0) || (*(int *)(param_4 + 0x24) == 0)) ||
      (*(int *)(param_4 + 0x28) == 0)) || (*(int *)(param_4 + 0x2c) == 0)) {
    uVar3 = 0xfffffffd;
  }
  else {
    pVVar4 = (VmaAllocator_T *)0x0;
    if (param_1[0x20] != (VmaAllocator_T)0x0) {
      pVVar4 = param_1 + 0x28;
    }
    uVar3 = (**(code **)(param_1 + 0x16c8))(*(undefined8 *)(param_1 + 0x10),param_4,pVVar4,param_5);
    if (-1 < (int)uVar3) {
      uVar2 = VmaAllocator_T::BindImageMemory
                        (param_1,param_2,param_3,(VkImage_T *)*param_5,(void *)0x0);
      if ((int)uVar2 < 0) {
        pVVar4 = (VmaAllocator_T *)0x0;
        if (param_1[0x20] != (VmaAllocator_T)0x0) {
          pVVar4 = param_1 + 0x28;
        }
        (**(code **)(param_1 + 0x16d0))(*(undefined8 *)(param_1 + 0x10),*param_5,pVVar4);
        return (ulong)uVar2;
      }
      return 0;
    }
  }
  return uVar3;
}



void vmaCreateAliasingImage
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  vmaCreateAliasingImage2(param_1,param_2,0,param_3,param_4);
  return;
}



undefined8 vmaCreateVirtualBlock(VmaVirtualBlockCreateInfo *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  VmaVirtualBlock_T *this;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
    this = (VmaVirtualBlock_T *)aligned_alloc(8,0x40);
  }
  else {
    this = (VmaVirtualBlock_T *)(*(code *)puVar1[1])(*puVar1,0x40,8,1);
  }
  VmaVirtualBlock_T::VmaVirtualBlock_T(this,param_1);
  *param_2 = this;
  return 0;
}



void vmaDestroyVirtualBlock(VmaVirtualBlock_T *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == (VmaVirtualBlock_T *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  VmaVirtualBlock_T::~VmaVirtualBlock_T(param_1);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001097df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  free(param_1);
  return;
}



undefined1 vmaIsVirtualBlockEmpty(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x38))();
  return uVar1;
}



void vmaGetVirtualAllocationInfo(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010982b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x40))();
  return;
}



void __thiscall
VmaVirtualBlock_T::vmaVirtualAllocate
          (VmaVirtualBlock_T *this,VmaVirtualAllocationCreateInfo *param_1,
          VmaVirtualAllocation_T **param_2,ulong *param_3)

{
  Allocate(this,param_1,param_2,param_3);
  return;
}



void vmaVirtualFree(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00109850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0xa0))();
    return;
  }
  return;
}



void vmaClearVirtualBlock(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010987b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0xa8))();
  return;
}



void vmaSetVirtualAllocationUserData(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010989b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0xb0))();
  return;
}



void vmaGetVirtualBlockStatistics(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x38);
  *param_2 = 0;
  *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
                    /* WARNING: Could not recover jumptable at 0x001098ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vmaCalculateVirtualBlockStatistics(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = *(long **)(param_1 + 0x38);
  *param_2 = 0;
  *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
  uVar4 = _UNK_00115398;
  uVar3 = _LC0;
  lVar2 = *plVar1;
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00109901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x70))();
  return;
}



void vmaFreeVirtualBlockStatsString(char *param_1,void *param_2)

{
  if (param_2 == (void *)0x0) {
    return;
  }
  if ((*param_1 != '\0') && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010992b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 8));
    return;
  }
  free(param_2);
  return;
}



/* VmaStringBuilder::Add(char const*) */

void __thiscall VmaStringBuilder::Add(VmaStringBuilder *this,char *param_1)

{
  long lVar1;
  size_t __n;
  
  __n = strlen(param_1);
  if (__n == 0) {
    return;
  }
  lVar1 = *(long *)(this + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize
            ((VmaVector<char,VmaStlAllocator<char>> *)this,__n + lVar1);
  memcpy((void *)(*(long *)(this + 8) + lVar1),param_1,__n);
  return;
}



/* VmaStringBuilder::AddNumber(unsigned int) */

void __thiscall VmaStringBuilder::AddNumber(VmaStringBuilder *this,uint param_1)

{
  bool bVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char local_12 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_12[1] = 0;
  pcVar2 = local_12 + 1;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  Add(this,pcVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaStringBuilder::AddNumber(unsigned long) */

void __thiscall VmaStringBuilder::AddNumber(VmaStringBuilder *this,ulong param_1)

{
  bool bVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char local_15 [5];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_15[1] = 0;
  pcVar2 = local_15 + 1;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  Add(this,pcVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaStringBuilder::AddPointer(void const*) */

void __thiscall VmaStringBuilder::AddPointer(VmaStringBuilder *this,void *param_1)

{
  long in_FS_OFFSET;
  char acStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __snprintf_chk(acStack_38,0x15,2,0x15,&_LC41,param_1);
  Add(this,acStack_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaJsonWriter::ContinueString_Pointer(void const*) */

void __thiscall VmaJsonWriter::ContinueString_Pointer(VmaJsonWriter *this,void *param_1)

{
  VmaStringBuilder *this_00;
  long in_FS_OFFSET;
  char acStack_38 [24];
  long local_20;
  
  this_00 = *(VmaStringBuilder **)this;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __snprintf_chk(acStack_38,0x15,2,0x15,&_LC41,param_1);
  VmaStringBuilder::Add(this_00,acStack_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaJsonWriter::ContinueString(unsigned long) */

void __thiscall VmaJsonWriter::ContinueString(VmaJsonWriter *this,ulong param_1)

{
  VmaStringBuilder *this_00;
  bool bVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char local_15 [5];
  long local_10;
  
  this_00 = *(VmaStringBuilder **)this;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_15[1] = 0;
  pcVar2 = local_15 + 1;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  VmaStringBuilder::Add(this_00,pcVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaJsonWriter::ContinueString(unsigned int) */

void __thiscall VmaJsonWriter::ContinueString(VmaJsonWriter *this,uint param_1)

{
  VmaStringBuilder *this_00;
  bool bVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char local_12 [2];
  long local_10;
  
  this_00 = *(VmaStringBuilder **)this;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_12[1] = 0;
  pcVar2 = local_12 + 1;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  VmaStringBuilder::Add(this_00,pcVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaJsonWriter::ContinueString(char const*) */

void __thiscall VmaJsonWriter::ContinueString(VmaJsonWriter *this,char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  VmaVector<char,VmaStlAllocator<char>> *this_00;
  long lVar3;
  size_t sVar4;
  
  sVar4 = strlen(param_1);
  if (sVar4 != 0) {
    pbVar1 = (byte *)(param_1 + sVar4);
    do {
      bVar2 = *param_1;
      if (bVar2 == 0x5c) {
        VmaStringBuilder::Add(*(VmaStringBuilder **)this,"\\\\");
      }
      else if (bVar2 == 0x22) {
        VmaStringBuilder::Add(*(VmaStringBuilder **)this,"\\\"");
      }
      else if (bVar2 < 0x20) {
        switch(bVar2) {
        case 8:
          VmaStringBuilder::Add(*(VmaStringBuilder **)this,"\\b");
          break;
        case 9:
          VmaStringBuilder::Add(*(VmaStringBuilder **)this,"\\t");
          break;
        case 10:
          VmaStringBuilder::Add(*(VmaStringBuilder **)this,"\\n");
          break;
        case 0xc:
          VmaStringBuilder::Add(*(VmaStringBuilder **)this,"\\f");
          break;
        case 0xd:
          VmaStringBuilder::Add(*(VmaStringBuilder **)this,"\\r");
        }
      }
      else {
        this_00 = *(VmaVector<char,VmaStlAllocator<char>> **)this;
        lVar3 = *(long *)(this_00 + 0x10);
        VmaVector<char,VmaStlAllocator<char>>::resize(this_00,lVar3 + 1);
        *(byte *)(*(long *)(this_00 + 8) + lVar3) = bVar2;
      }
      param_1 = (char *)((byte *)param_1 + 1);
    } while ((byte *)param_1 != pbVar1);
  }
  return;
}



/* VmaJsonWriter::EndString(char const*) */

void __thiscall VmaJsonWriter::EndString(VmaJsonWriter *this,char *param_1)

{
  VmaVector<char,VmaStlAllocator<char>> *this_00;
  long lVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    ContinueString(this,param_1);
  }
  this_00 = *(VmaVector<char,VmaStlAllocator<char>> **)this;
  lVar1 = *(long *)(this_00 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(this_00,lVar1 + 1);
  *(undefined1 *)(*(long *)(this_00 + 8) + lVar1) = 0x22;
  this[0x28] = (VmaJsonWriter)0x0;
  return;
}



/* VmaJsonWriter::WriteIndent(bool) */

void __thiscall VmaJsonWriter::WriteIndent(VmaJsonWriter *this,bool param_1)

{
  VmaVector<char,VmaStlAllocator<char>> *this_00;
  long lVar1;
  long lVar2;
  
  if (*(long *)(this + 0x18) == 0) {
    return;
  }
  if (*(char *)(*(long *)(this + 0x10) + *(long *)(this + 0x18) * 0xc + -4) == '\0') {
    this_00 = *(VmaVector<char,VmaStlAllocator<char>> **)this;
    lVar1 = *(long *)(this_00 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(this_00,lVar1 + 1);
    *(undefined1 *)(*(long *)(this_00 + 8) + lVar1) = 10;
    lVar1 = *(long *)(this + 0x18);
    if (lVar1 != 0) {
      lVar1 = lVar1 + -1 + (ulong)!param_1;
    }
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + 1;
        VmaStringBuilder::Add(*(VmaStringBuilder **)this,"  ");
      } while (lVar2 != lVar1);
      return;
    }
  }
  return;
}



/* VmaJsonWriter::BeginValue(bool) */

void VmaJsonWriter::BeginValue(bool param_1)

{
  int *piVar1;
  undefined7 in_register_00000039;
  VmaJsonWriter *this;
  
  this = (VmaJsonWriter *)CONCAT71(in_register_00000039,param_1);
  if (*(long *)(this + 0x18) == 0) {
    return;
  }
  piVar1 = (int *)(*(long *)(this + 0x10) + -0xc + *(long *)(this + 0x18) * 0xc);
  if ((*piVar1 == 0) && ((piVar1[1] & 1U) != 0)) {
    VmaStringBuilder::Add(*(VmaStringBuilder **)this,": ");
  }
  else {
    if (piVar1[1] == 0) {
      WriteIndent(this,false);
      piVar1[1] = piVar1[1] + 1;
      return;
    }
    VmaStringBuilder::Add(*(VmaStringBuilder **)this,", ");
    WriteIndent(this,false);
  }
  piVar1[1] = piVar1[1] + 1;
  return;
}



/* VmaJsonWriter::BeginString(char const*) */

void __thiscall VmaJsonWriter::BeginString(VmaJsonWriter *this,char *param_1)

{
  VmaVector<char,VmaStlAllocator<char>> *this_00;
  long lVar1;
  
  BeginValue(SUB81(this,0));
  this_00 = *(VmaVector<char,VmaStlAllocator<char>> **)this;
  lVar1 = *(long *)(this_00 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(this_00,lVar1 + 1);
  *(undefined1 *)(*(long *)(this_00 + 8) + lVar1) = 0x22;
  this[0x28] = (VmaJsonWriter)0x1;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    ContinueString(this,param_1);
    return;
  }
  return;
}



/* VmaJsonWriter::WriteString(char const*) */

void __thiscall VmaJsonWriter::WriteString(VmaJsonWriter *this,char *param_1)

{
  VmaVector<char,VmaStlAllocator<char>> *this_00;
  long lVar1;
  
  BeginString(this,param_1);
  this_00 = *(VmaVector<char,VmaStlAllocator<char>> **)this;
  lVar1 = *(long *)(this_00 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(this_00,lVar1 + 1);
  *(undefined1 *)(*(long *)(this_00 + 8) + lVar1) = 0x22;
  this[0x28] = (VmaJsonWriter)0x0;
  return;
}



/* VmaJsonWriter::WriteNumber(unsigned int) */

void __thiscall VmaJsonWriter::WriteNumber(VmaJsonWriter *this,uint param_1)

{
  VmaStringBuilder *this_00;
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char local_22 [2];
  long local_20;
  
  uVar2 = (ulong)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  BeginValue(SUB81(this,0));
  local_22[1] = 0;
  this_00 = *(VmaStringBuilder **)this;
  pcVar3 = local_22 + 1;
  do {
    pcVar3 = pcVar3 + -1;
    uVar1 = (uint)uVar2;
    *pcVar3 = (char)uVar2 + (char)(uVar2 / 10) * -10 + '0';
    uVar2 = uVar2 / 10;
  } while (9 < uVar1);
  VmaStringBuilder::Add(this_00,pcVar3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaJsonWriter::WriteNumber(unsigned long) */

void __thiscall VmaJsonWriter::WriteNumber(VmaJsonWriter *this,ulong param_1)

{
  VmaStringBuilder *this_00;
  bool bVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char local_25 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  BeginValue(SUB81(this,0));
  local_25[1] = 0;
  this_00 = *(VmaStringBuilder **)this;
  pcVar2 = local_25 + 1;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  VmaStringBuilder::Add(this_00,pcVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaJsonWriter::WriteBool(bool) */

void __thiscall VmaJsonWriter::WriteBool(VmaJsonWriter *this,bool param_1)

{
  char *pcVar1;
  
  BeginValue(SUB81(this,0));
  pcVar1 = "false";
  if (param_1) {
    pcVar1 = "true";
  }
  VmaStringBuilder::Add(*(VmaStringBuilder **)this,pcVar1);
  return;
}



/* VmaJsonWriter::WriteNull() */

void __thiscall VmaJsonWriter::WriteNull(VmaJsonWriter *this)

{
  int *piVar1;
  
  if (*(long *)(this + 0x18) != 0) {
    piVar1 = (int *)(*(long *)(this + 0x10) + -0xc + *(long *)(this + 0x18) * 0xc);
    if ((*piVar1 == 0) && ((piVar1[1] & 1U) != 0)) {
      VmaStringBuilder::Add(*(VmaStringBuilder **)this,": ");
    }
    else if (piVar1[1] == 0) {
      WriteIndent(this,false);
    }
    else {
      VmaStringBuilder::Add(*(VmaStringBuilder **)this,", ");
      WriteIndent(this,false);
    }
    piVar1[1] = piVar1[1] + 1;
  }
  VmaStringBuilder::Add(*(VmaStringBuilder **)this,"null");
  return;
}



/* VmaAllocation_T::PrintParameters(VmaJsonWriter&) const */

void __thiscall VmaAllocation_T::PrintParameters(VmaAllocation_T *this,VmaJsonWriter *param_1)

{
  VmaVector<char,VmaStlAllocator<char>> *pVVar1;
  long lVar2;
  VmaStringBuilder *pVVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  char acStack_48 [19];
  char local_35 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  VmaJsonWriter::BeginString(param_1,"Type");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginString
            (param_1,*(char **)(VMA_SUBALLOCATION_TYPE_NAMES + (ulong)(byte)this[0x4d] * 8));
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginString(param_1,"Size");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  uVar8 = *(ulong *)(this + 0x30);
  pcVar6 = local_35 + 1;
  param_1[0x28] = (VmaJsonWriter)0x0;
  bVar7 = SUB81(param_1,0);
  VmaJsonWriter::BeginValue(bVar7);
  local_35[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar5 = pcVar6;
  do {
    pcVar5 = pcVar5 + -1;
    *pcVar5 = (char)uVar8 + (char)(uVar8 / 10) * -10 + '0';
    bVar4 = 9 < uVar8;
    uVar8 = uVar8 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar5);
  VmaJsonWriter::BeginString(param_1,"Usage");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  uVar8 = *(ulong *)(this + 0x50);
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(bVar7);
  local_35[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  do {
    pcVar6 = pcVar6 + -1;
    *pcVar6 = (char)uVar8 + (char)(uVar8 / 10) * -10 + '0';
    bVar4 = 9 < uVar8;
    uVar8 = uVar8 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar6);
  if (*(long *)(this + 0x38) != 0) {
    VmaJsonWriter::BeginString(param_1,"CustomData");
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    param_1[0x28] = (VmaJsonWriter)0x0;
    VmaJsonWriter::BeginValue(bVar7);
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    pVVar3 = *(VmaStringBuilder **)param_1;
    param_1[0x28] = (VmaJsonWriter)0x1;
    __snprintf_chk(acStack_48,0x15,2,0x15,&_LC41,*(undefined8 *)(this + 0x38));
    VmaStringBuilder::Add(pVVar3,acStack_48);
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    param_1[0x28] = (VmaJsonWriter)0x0;
  }
  if (*(long *)(this + 0x40) != 0) {
    VmaJsonWriter::BeginString(param_1,"Name");
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    pcVar6 = *(char **)(this + 0x40);
    param_1[0x28] = (VmaJsonWriter)0x0;
    VmaJsonWriter::BeginString(param_1,pcVar6);
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    param_1[0x28] = (VmaJsonWriter)0x0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaBlockMetadata_Linear::Clear() */

void __thiscall VmaBlockMetadata_Linear::Clear(VmaBlockMetadata_Linear *this)

{
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 8);
  VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
            ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)(this + 0x30),0);
  VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
            ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)(this + 0x50),0);
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  return;
}



/* VmaBlockMetadata_Linear::CleanupAfterFree() */

void __thiscall VmaBlockMetadata_Linear::CleanupAfterFree(VmaBlockMetadata_Linear *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *this_00;
  ulong uVar11;
  void *__dest;
  ulong uVar12;
  VmaBlockMetadata_Linear *pVVar13;
  VmaBlockMetadata_Linear *this_01;
  
  if (*(int *)(this + 0x70) == 0) {
    this_00 = (VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)(this + 0x30);
    this_01 = this + 0x50;
  }
  else {
    this_00 = (VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)(this + 0x50);
    this_01 = this + 0x30;
  }
  pcVar4 = *(code **)(*(long *)this + 0x38);
  if (pcVar4 == IsEmpty) {
    pcVar4 = *(code **)(*(long *)this + 0x20);
    if (pcVar4 == GetAllocationCount) {
      lVar7 = (*(long *)(this_00 + 0x10) -
              (*(long *)(this + 0x80) + *(long *)(this + 0x78) + *(long *)(this + 0x88))) +
              *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 +
                       0x10);
    }
    else {
      lVar7 = (*pcVar4)(this);
    }
    if (lVar7 == 0) {
LAB_0010a93c:
      VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize(this_00,0);
      VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
                ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01,0);
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
      return;
    }
  }
  else {
    cVar6 = (*pcVar4)(this);
    if (cVar6 != '\0') goto LAB_0010a93c;
  }
  uVar11 = *(ulong *)(this_00 + 0x10);
  uVar12 = *(ulong *)(this + 0x78);
  lVar7 = *(long *)(this + 0x80);
  lVar8 = lVar7;
  if (uVar12 < uVar11) {
    lVar9 = *(long *)(this_00 + 8);
    uVar10 = uVar12;
    do {
      if (*(int *)(lVar9 + 0x18 + uVar10 * 0x20) != 0) break;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + -1;
      *(ulong *)(this + 0x78) = uVar10;
      *(long *)(this + 0x80) = lVar8;
    } while (uVar10 != uVar11);
  }
  uVar10 = uVar11;
  if (lVar8 == 0) goto LAB_0010a71a;
  while (*(int *)(uVar10 * 0x20 + *(long *)(this_00 + 8) + -8) == 0) {
    *(long *)(this + 0x80) = lVar8 + -1;
    VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize(this_00,uVar10 - 1);
    lVar8 = *(long *)(this + 0x80);
    if (lVar8 == 0) goto LAB_0010a71a;
    uVar10 = *(ulong *)(this_00 + 0x10);
  }
  lVar8 = *(long *)(this + 0x88);
  while (lVar8 != 0) {
    lVar9 = *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 +
                     0x10);
    __dest = *(void **)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 + 8
                       );
    if (*(int *)((long)__dest + lVar9 * 0x20 + -8) != 0) {
      if (lVar8 != 0) goto LAB_0010a84f;
      break;
    }
    *(long *)(this + 0x88) = lVar8 + -1;
    VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
              ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01,lVar9 - 1);
LAB_0010a71a:
    lVar8 = *(long *)(this + 0x88);
  }
LAB_0010a726:
  uVar10 = *(ulong *)(this + 0x78);
  pVVar13 = this + 0x50;
  if (*(int *)(this + 0x70) == 0) {
    pVVar13 = this + 0x30;
  }
  if ((0x20 < *(ulong *)(pVVar13 + 0x10)) &&
     ((*(ulong *)(pVVar13 + 0x10) - (*(long *)(this + 0x80) + uVar10)) * 3 <=
      (*(long *)(this + 0x80) + uVar10) * 2)) {
    uVar11 = uVar11 - (uVar12 + lVar7);
    if (uVar11 != 0) {
      lVar7 = *(long *)(this_00 + 8);
      uVar12 = 0;
      do {
        puVar1 = (undefined8 *)(lVar7 + uVar10 * 0x20);
        iVar3 = *(int *)(puVar1 + 3);
        puVar2 = (undefined8 *)(lVar7 + 0x20 + uVar10 * 0x20);
        while (iVar3 == 0) {
          uVar10 = uVar10 + 1;
          iVar3 = *(int *)(puVar2 + 3);
          puVar1 = puVar2;
          puVar2 = puVar2 + 4;
        }
        if (uVar10 != uVar12) {
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar7 + uVar12 * 0x20);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          uVar5 = puVar1[3];
          puVar2 = (undefined8 *)(lVar7 + 0x10 + uVar12 * 0x20);
          *puVar2 = puVar1[2];
          puVar2[1] = uVar5;
        }
        uVar12 = uVar12 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar11 != uVar12);
    }
    VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize(this_00,uVar11);
    uVar10 = 0;
    *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  }
  if (*(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 + 0x10) ==
      0) {
    *(undefined4 *)(this + 0x74) = 0;
    uVar11 = *(ulong *)(this_00 + 0x10);
  }
  else {
    uVar11 = *(ulong *)(this_00 + 0x10);
  }
  if (uVar11 == uVar10) {
    VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize(this_00,0);
    lVar7 = *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 +
                     0x10);
    *(undefined8 *)(this + 0x78) = 0;
    if ((lVar7 != 0) && (*(int *)(this + 0x74) == 1)) {
      lVar8 = *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 + 8
                       );
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x88);
      lVar9 = 0;
      do {
        if (*(int *)(lVar8 + 0x18 + lVar9 * 0x20) != 0) break;
        lVar9 = lVar9 + 1;
        *(long *)(this + 0x80) = *(long *)(this + 0x80) + -1;
        *(long *)(this + 0x78) = lVar9;
      } while (lVar9 != lVar7);
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) ^ 1;
      *(undefined8 *)(this + 0x88) = 0;
    }
  }
  return;
LAB_0010a84f:
  if (*(int *)((long)__dest + 0x18) != 0) goto LAB_0010a726;
  lVar9 = *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 + 0x10)
  ;
  *(long *)(this + 0x88) = lVar8 + -1;
  uVar10 = lVar9 - 1;
  if (uVar10 != 0) {
    memmove(__dest,(void *)((long)__dest + 0x20),uVar10 * 0x20);
  }
  VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
            ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01,uVar10);
  lVar8 = *(long *)(this + 0x88);
  if (lVar8 == 0) goto LAB_0010a726;
  __dest = *(void **)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 + 8);
  goto LAB_0010a84f;
}



/* VmaBlockMetadata_Linear::Free(VmaAllocHandle_T*) */

void __thiscall
VmaBlockMetadata_Linear::Free(VmaBlockMetadata_Linear *this,VmaAllocHandle_T *param_1)

{
  VmaSuballocation *pVVar1;
  int iVar2;
  long lVar3;
  VmaSuballocation *pVVar4;
  ulong uVar5;
  VmaSuballocationOffsetLess *pVVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  VmaSuballocationOffsetLess *pVVar11;
  VmaBlockMetadata_Linear *this_00;
  VmaSuballocation *pVVar12;
  long lVar13;
  VmaSuballocation **ppVVar14;
  VmaBlockMetadata_Linear *this_01;
  
  if (*(int *)(this + 0x70) == 0) {
    this_00 = this + 0x30;
    this_01 = this + 0x50;
  }
  else {
    this_00 = this + 0x50;
    this_01 = this + 0x30;
  }
  lVar3 = *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_00 + 0x10)
  ;
  pVVar1 = (VmaSuballocation *)(param_1 + -1);
  if (lVar3 != 0) {
    lVar9 = *(long *)(this + 0x78);
    puVar8 = (undefined8 *)
             (lVar9 * 0x20 +
             *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_00 + 8)
             );
    if ((VmaSuballocation *)*puVar8 == pVVar1) {
      *(undefined4 *)(puVar8 + 3) = 0;
      puVar8[2] = 0;
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + puVar8[1];
      *(long *)(this + 0x78) = lVar9 + 1;
      goto LAB_0010aa38;
    }
  }
  iVar2 = *(int *)(this + 0x74);
  if (iVar2 - 1U < 2) {
    lVar9 = *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 +
                     0x10);
    ppVVar14 = *(VmaSuballocation ***)
                ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 + 8);
    lVar13 = lVar9 * 0x20;
    pVVar6 = (VmaSuballocationOffsetLess *)(ppVVar14 + lVar9 * 4 + -4);
    if (*(VmaSuballocation **)pVVar6 == pVVar1) {
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + *(long *)(pVVar6 + 8);
      VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
                ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01,lVar9 - 1)
      ;
      goto LAB_0010aa38;
    }
    pVVar12 = (VmaSuballocation *)
              (*(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_00 +
                        8) + lVar3 * 0x20);
    pVVar4 = VmaBinaryFindSorted<VmaSuballocationOffsetLess,VmaSuballocation*,VmaSuballocation>
                       ((VmaSuballocation **)
                        (*(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)
                                   this_00 + 8) + *(long *)(this + 0x78) * 0x20),
                        (VmaSuballocation **)pVVar12,pVVar1,pVVar6);
    if (pVVar12 == pVVar4) {
      if (iVar2 != 1) goto LAB_0010aae3;
      pVVar12 = (VmaSuballocation *)(lVar13 + (long)ppVVar14);
      pVVar4 = VmaBinaryFindSorted<VmaSuballocationOffsetLess,VmaSuballocation*,VmaSuballocation>
                         (ppVVar14,(VmaSuballocation **)pVVar12,pVVar1,pVVar6);
      if (pVVar4 == pVVar12) {
        return;
      }
      goto LAB_0010ab5a;
    }
LAB_0010aa19:
    *(undefined4 *)(pVVar4 + 0x18) = 0;
    *(VmaSuballocation **)(pVVar4 + 0x10) = (VmaSuballocation *)0x0;
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
  }
  else {
    pVVar6 = *(VmaSuballocationOffsetLess **)
              ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_00 + 8);
    lVar9 = lVar3 * 0x20;
    if (iVar2 == 0) {
      if (*(VmaSuballocation **)(pVVar6 + lVar9 + -0x20) == pVVar1) {
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + *(long *)(pVVar6 + lVar9 + -0x20 + 8);
        VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
                  ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_00,
                   lVar3 - 1);
        goto LAB_0010aa38;
      }
      pVVar11 = pVVar6 + lVar9;
      pVVar4 = VmaBinaryFindSorted<VmaSuballocationOffsetLess,VmaSuballocation*,VmaSuballocation>
                         ((VmaSuballocation **)(pVVar6 + *(long *)(this + 0x78) * 0x20),
                          (VmaSuballocation **)pVVar11,pVVar1,pVVar6);
      if (pVVar4 == (VmaSuballocation *)pVVar11) {
        return;
      }
      goto LAB_0010aa19;
    }
    pVVar11 = pVVar6 + lVar9;
    pVVar4 = VmaBinaryFindSorted<VmaSuballocationOffsetLess,VmaSuballocation*,VmaSuballocation>
                       ((VmaSuballocation **)(pVVar6 + *(long *)(this + 0x78) * 0x20),
                        (VmaSuballocation **)pVVar11,pVVar1,pVVar6);
    if (pVVar4 != (VmaSuballocation *)pVVar11) goto LAB_0010aa19;
    ppVVar14 = *(VmaSuballocation ***)
                ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 + 8);
    lVar13 = *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)this_01 +
                      0x10) << 5;
LAB_0010aae3:
    uVar10 = 0;
    uVar5 = lVar13 >> 5;
    while (uVar7 = uVar5, uVar10 < uVar7) {
      uVar5 = (uVar7 - uVar10 >> 1) + uVar10;
      if (pVVar1 < ppVVar14[uVar5 * 4]) {
        uVar10 = uVar5 + 1;
        uVar5 = uVar7;
      }
    }
    pVVar4 = (VmaSuballocation *)(ppVVar14 + uVar10 * 4);
    if ((VmaSuballocation *)((long)ppVVar14 + lVar13) == pVVar4) {
      return;
    }
    if (pVVar1 != *(VmaSuballocation **)pVVar4) {
      return;
    }
LAB_0010ab5a:
    *(undefined4 *)(pVVar4 + 0x18) = 0;
    *(VmaSuballocation **)(pVVar4 + 0x10) = (VmaSuballocation *)0x0;
    *(long *)(this + 0x88) = *(long *)(this + 0x88) + 1;
  }
  *(VmaSuballocation **)(this + 0x28) = *(VmaSuballocation **)(pVVar4 + 8) + *(long *)(this + 0x28);
LAB_0010aa38:
  CleanupAfterFree(this);
  return;
}



/* VmaBlockMetadata_Linear::Alloc(VmaAllocationRequest const&, VmaSuballocationType, void*) */

void __thiscall
VmaBlockMetadata_Linear::Alloc
          (VmaBlockMetadata_Linear *this,long *param_1,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  VmaBlockMetadata_Linear *pVVar6;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  iVar1 = (int)param_1[6];
  if (iVar1 == 3) {
    pVVar6 = this + 0x30;
    if (*(int *)(this + 0x70) != 0) {
      pVVar6 = this + 0x50;
    }
  }
  else {
    if (iVar1 != 4) {
      if (iVar1 == 2) {
        pVVar6 = this + 0x50;
        if (*(int *)(this + 0x70) != 0) {
          pVVar6 = this + 0x30;
        }
        lVar4 = *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)pVVar6 +
                         0x10);
        VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
                  ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)pVVar6,lVar4 + 1
                  );
        plVar5 = (long *)(lVar4 * 0x20 +
                         *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)
                                   pVVar6 + 8));
        plVar5[2] = param_4;
        *(undefined4 *)(plVar5 + 3) = param_3;
        *plVar5 = lVar2 + -1;
        plVar5[1] = lVar3;
        *(undefined4 *)(this + 0x74) = 2;
      }
      goto LAB_0010acdc;
    }
    pVVar6 = this + 0x50;
    if (*(int *)(this + 0x70) != 0) {
      pVVar6 = this + 0x30;
    }
    if (*(int *)(this + 0x74) == 0) {
      *(undefined4 *)(this + 0x74) = 1;
    }
  }
  lVar4 = *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)pVVar6 + 0x10);
  VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
            ((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)pVVar6,lVar4 + 1);
  plVar5 = (long *)(lVar4 * 0x20 +
                   *(long *)((VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *)pVVar6
                            + 8));
  plVar5[2] = param_4;
  *(undefined4 *)(plVar5 + 3) = param_3;
  *plVar5 = lVar2 + -1;
  plVar5[1] = lVar3;
LAB_0010acdc:
  *(long *)(this + 0x28) = *(long *)(this + 0x28) - lVar3;
  return;
}



/* VmaBlockMetadata_TLSF::Clear() */

void __thiscall VmaBlockMetadata_TLSF::Clear(VmaBlockMetadata_TLSF *this)

{
  undefined8 uVar1;
  Block *pBVar2;
  void *__s;
  uint uVar3;
  ulong uVar4;
  Block *pBVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  puVar6 = *(undefined8 **)(this + 0x170);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x38) = 0;
  pBVar5 = (Block *)puVar6[2];
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *puVar6 = 0;
  puVar6[1] = uVar1;
  puVar6[2] = 0;
  if (pBVar5 != (Block *)0x0) {
    do {
      pBVar2 = *(Block **)(pBVar5 + 0x10);
      VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Free
                ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(this + 0x140),pBVar5);
      pBVar5 = pBVar2;
    } while (pBVar2 != (Block *)0x0);
  }
  memset(*(void **)(this + 0x138),0,(ulong)*(uint *)(this + 0x130) << 3);
  uVar4 = (ulong)(byte)this[0x44] * 4;
  uVar3 = (uint)uVar4;
  if (uVar3 < 8) {
    if ((uVar4 & 4) == 0) {
      if (uVar3 != 0) {
        __s = *(void **)(this + 0x188);
        this[0x48] = (VmaBlockMetadata_TLSF)0x0;
        goto joined_r0x0010ae05;
      }
    }
    else {
      *(undefined4 *)(this + 0x48) = 0;
      *(undefined4 *)(this + uVar4 + 0x44) = 0;
    }
  }
  else {
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + uVar4 + 0x40) = 0;
    puVar6 = (undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8);
    for (uVar4 = (ulong)(uVar3 + (((int)this + 0x48) -
                                 (int)(undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8)) >>
                        3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
  }
  __s = *(void **)(this + 0x188);
joined_r0x0010ae05:
  if (__s == (void *)0x0) {
    return;
  }
  memset(__s,0,(ulong)*(uint *)(this + 0x180) << 2);
  return;
}



/* VmaBlockMetadata_TLSF::MergeBlock(VmaBlockMetadata_TLSF::Block*, VmaBlockMetadata_TLSF::Block*)
    */

void __thiscall
VmaBlockMetadata_TLSF::MergeBlock(VmaBlockMetadata_TLSF *this,Block *param_1,Block *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3;
  *(undefined8 *)param_1 = uVar1;
  *(long *)(param_1 + 8) = lVar2 + *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    *(Block **)(lVar3 + 0x18) = param_1;
  }
  VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Free
            ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(this + 0x140),param_2);
  return;
}



/* VmaBlockMetadata_TLSF::Free(VmaAllocHandle_T*) */

void __thiscall VmaBlockMetadata_TLSF::Free(VmaBlockMetadata_TLSF *this,VmaAllocHandle_T *param_1)

{
  undefined8 uVar1;
  Block *pBVar2;
  Block *pBVar3;
  long lVar4;
  long lVar5;
  
  pBVar2 = *(Block **)(param_1 + 0x18);
  if (this[0x20] == (VmaBlockMetadata_TLSF)0x0) {
    VmaBlockBufferImageGranularity::FreePages
              ((VmaBlockBufferImageGranularity *)(this + 0x178),*(ulong *)param_1,
               *(ulong *)(param_1 + 8));
  }
  pBVar3 = *(Block **)(param_1 + 0x10);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
  if (((pBVar3 != (Block *)0x0) && (pBVar3 != *(Block **)(pBVar3 + 0x20))) &&
     (*(long *)(pBVar3 + 8) != 0)) {
    RemoveFreeBlock(this,pBVar3);
    lVar4 = *(long *)(pBVar3 + 8);
    uVar1 = *(undefined8 *)pBVar3;
    lVar5 = *(long *)(pBVar3 + 0x10);
    *(long *)(param_1 + 0x10) = lVar5;
    *(undefined8 *)param_1 = uVar1;
    *(long *)(param_1 + 8) = lVar4 + *(long *)(param_1 + 8);
    if (lVar5 != 0) {
      *(VmaAllocHandle_T **)(lVar5 + 0x18) = param_1;
    }
    VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Free
              ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(this + 0x140),pBVar3);
  }
  if (pBVar2 != *(Block **)(pBVar2 + 0x20)) {
    if (*(Block **)(this + 0x170) == pBVar2) {
      lVar4 = *(long *)(param_1 + 8);
      uVar1 = *(undefined8 *)param_1;
      lVar5 = *(long *)(param_1 + 0x10);
      *(long *)(pBVar2 + 0x10) = lVar5;
      *(undefined8 *)pBVar2 = uVar1;
      *(long *)(pBVar2 + 8) = lVar4 + *(long *)(pBVar2 + 8);
      if (lVar5 != 0) {
        *(Block **)(lVar5 + 0x18) = pBVar2;
      }
      VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Free
                ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(this + 0x140),(Block *)param_1);
      return;
    }
    RemoveFreeBlock(this,pBVar2);
    lVar4 = *(long *)(param_1 + 8);
    uVar1 = *(undefined8 *)param_1;
    lVar5 = *(long *)(param_1 + 0x10);
    *(long *)(pBVar2 + 0x10) = lVar5;
    *(undefined8 *)pBVar2 = uVar1;
    *(long *)(pBVar2 + 8) = lVar4 + *(long *)(pBVar2 + 8);
    if (lVar5 != 0) {
      *(Block **)(lVar5 + 0x18) = pBVar2;
    }
    VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Free
              ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(this + 0x140),(Block *)param_1);
    param_1 = (VmaAllocHandle_T *)pBVar2;
  }
  InsertFreeBlock(this,(Block *)param_1);
  return;
}



/* VmaJsonWriter::BeginArray(bool) */

void __thiscall VmaJsonWriter::BeginArray(VmaJsonWriter *this,bool param_1)

{
  VmaVector<char,VmaStlAllocator<char>> *this_00;
  long lVar1;
  long lVar2;
  
  BeginValue(SUB81(this,0));
  this_00 = *(VmaVector<char,VmaStlAllocator<char>> **)this;
  lVar1 = *(long *)(this_00 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(this_00,lVar1 + 1);
  *(undefined1 *)(*(long *)(this_00 + 8) + lVar1) = 0x5b;
  lVar1 = *(long *)(this + 0x18);
  VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>>::resize
            ((VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>> *)
             (this + 8),lVar1 + 1);
  lVar2 = *(long *)(this + 0x10);
  *(undefined8 *)(lVar2 + lVar1 * 0xc) = 1;
  *(bool *)(lVar2 + 8 + lVar1 * 0xc) = param_1;
  return;
}



/* VmaBlockMetadata::PrintDetailedMap_Begin(VmaJsonWriter&, unsigned long, unsigned long, unsigned
   long) const */

void __thiscall
VmaBlockMetadata::PrintDetailedMap_Begin
          (VmaBlockMetadata *this,VmaJsonWriter *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  VmaVector<char,VmaStlAllocator<char>> *pVVar1;
  long lVar2;
  VmaStringBuilder *pVVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  char local_45 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  VmaJsonWriter::BeginString(param_1,"TotalBytes");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  uVar8 = *(ulong *)(this + 8);
  pcVar6 = local_45 + 1;
  param_1[0x28] = (VmaJsonWriter)0x0;
  bVar7 = SUB81(param_1,0);
  VmaJsonWriter::BeginValue(bVar7);
  local_45[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar5 = pcVar6;
  do {
    pcVar5 = pcVar5 + -1;
    *pcVar5 = (char)uVar8 + (char)(uVar8 / 10) * -10 + '0';
    bVar4 = 9 < uVar8;
    uVar8 = uVar8 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar5);
  VmaJsonWriter::BeginString(param_1,"UnusedBytes");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(bVar7);
  local_45[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar5 = pcVar6;
  do {
    pcVar5 = pcVar5 + -1;
    *pcVar5 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    bVar4 = 9 < param_2;
    param_2 = param_2 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar5);
  VmaJsonWriter::BeginString(param_1,"Allocations");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(bVar7);
  local_45[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar5 = pcVar6;
  do {
    pcVar5 = pcVar5 + -1;
    *pcVar5 = (char)param_3 + (char)(param_3 / 10) * -10 + '0';
    bVar4 = 9 < param_3;
    param_3 = param_3 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar5);
  VmaJsonWriter::BeginString(param_1,"UnusedRanges");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(bVar7);
  local_45[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  do {
    pcVar6 = pcVar6 + -1;
    *pcVar6 = (char)param_4 + (char)(param_4 / 10) * -10 + '0';
    bVar7 = 9 < param_4;
    param_4 = param_4 / 10;
  } while (bVar7);
  VmaStringBuilder::Add(pVVar3,pcVar6);
  VmaJsonWriter::BeginString(param_1,"Suballocations");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    VmaJsonWriter::BeginArray(param_1,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaJsonWriter::EndObject() */

void __thiscall VmaJsonWriter::EndObject(VmaJsonWriter *this)

{
  VmaVector<char,VmaStlAllocator<char>> *this_00;
  long lVar1;
  
  WriteIndent(this,true);
  this_00 = *(VmaVector<char,VmaStlAllocator<char>> **)this;
  lVar1 = *(long *)(this_00 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(this_00,lVar1 + 1);
  *(undefined1 *)(*(long *)(this_00 + 8) + lVar1) = 0x7d;
  VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>>::resize
            ((VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>> *)
             (this + 8),*(long *)(this + 0x18) - 1);
  return;
}



/* VmaJsonWriter::EndArray() */

void __thiscall VmaJsonWriter::EndArray(VmaJsonWriter *this)

{
  VmaVector<char,VmaStlAllocator<char>> *this_00;
  long lVar1;
  
  WriteIndent(this,true);
  this_00 = *(VmaVector<char,VmaStlAllocator<char>> **)this;
  lVar1 = *(long *)(this_00 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(this_00,lVar1 + 1);
  *(undefined1 *)(*(long *)(this_00 + 8) + lVar1) = 0x5d;
  VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>>::resize
            ((VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>> *)
             (this + 8),*(long *)(this + 0x18) - 1);
  return;
}



/* VmaBlockMetadata::PrintDetailedMap_End(VmaJsonWriter&) const */

void __thiscall
VmaBlockMetadata::PrintDetailedMap_End(VmaBlockMetadata *this,VmaJsonWriter *param_1)

{
  VmaJsonWriter::EndArray(param_1);
  return;
}



/* VmaJsonWriter::BeginObject(bool) */

void __thiscall VmaJsonWriter::BeginObject(VmaJsonWriter *this,bool param_1)

{
  undefined8 *puVar1;
  VmaVector<char,VmaStlAllocator<char>> *this_00;
  long lVar2;
  
  BeginValue(SUB81(this,0));
  this_00 = *(VmaVector<char,VmaStlAllocator<char>> **)this;
  lVar2 = *(long *)(this_00 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(this_00,lVar2 + 1);
  *(undefined1 *)(*(long *)(this_00 + 8) + lVar2) = 0x7b;
  lVar2 = *(long *)(this + 0x18);
  VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>>::resize
            ((VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>> *)
             (this + 8),lVar2 + 1);
  puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar2 * 0xc);
  *puVar1 = 0;
  *(bool *)(puVar1 + 1) = param_1;
  return;
}



/* VmaBlockMetadata::PrintDetailedMap_Allocation(VmaJsonWriter&, unsigned long, unsigned long,
   void*) const */

void __thiscall
VmaBlockMetadata::PrintDetailedMap_Allocation
          (VmaBlockMetadata *this,VmaJsonWriter *param_1,ulong param_2,ulong param_3,void *param_4)

{
  VmaVector<char,VmaStlAllocator<char>> *pVVar1;
  long lVar2;
  VmaStringBuilder *pVVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  long in_FS_OFFSET;
  char local_58 [19];
  char local_45 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  VmaJsonWriter::BeginObject(param_1,true);
  VmaJsonWriter::BeginString(param_1,"Offset");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  pcVar6 = local_45 + 1;
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  bVar7 = SUB81(param_1,0);
  VmaJsonWriter::BeginValue(bVar7);
  local_45[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar5 = pcVar6;
  do {
    pcVar5 = pcVar5 + -1;
    *pcVar5 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    bVar4 = 9 < param_2;
    param_2 = param_2 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar5);
  if (this[0x20] == (VmaBlockMetadata)0x0) {
    VmaAllocation_T::PrintParameters((VmaAllocation_T *)param_4,param_1);
  }
  else {
    VmaJsonWriter::BeginString(param_1,"Size");
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    param_1[0x28] = (VmaJsonWriter)0x0;
    VmaJsonWriter::BeginValue(bVar7);
    local_45[1] = 0;
    pVVar3 = *(VmaStringBuilder **)param_1;
    do {
      pcVar6 = pcVar6 + -1;
      *pcVar6 = (char)param_3 + (char)(param_3 / 10) * -10 + '0';
      bVar4 = 9 < param_3;
      param_3 = param_3 / 10;
    } while (bVar4);
    VmaStringBuilder::Add(pVVar3,pcVar6);
    if (param_4 != (void *)0x0) {
      VmaJsonWriter::BeginString(param_1,"CustomData");
      pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
      lVar2 = *(long *)(pVVar1 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
      param_1[0x28] = (VmaJsonWriter)0x0;
      VmaJsonWriter::BeginValue(bVar7);
      pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
      lVar2 = *(long *)(pVVar1 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
      pVVar3 = *(VmaStringBuilder **)param_1;
      param_1[0x28] = (VmaJsonWriter)0x1;
      __snprintf_chk(local_58,0x15,2,0x15,&_LC41,param_4);
      VmaStringBuilder::Add(pVVar3,local_58);
      pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
      lVar2 = *(long *)(pVVar1 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
      param_1[0x28] = (VmaJsonWriter)0x0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    VmaJsonWriter::EndObject(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaBlockMetadata::PrintDetailedMap_UnusedRange(VmaJsonWriter&, unsigned long, unsigned long)
   const */

void __thiscall
VmaBlockMetadata::PrintDetailedMap_UnusedRange
          (VmaBlockMetadata *this,VmaJsonWriter *param_1,ulong param_2,ulong param_3)

{
  VmaVector<char,VmaStlAllocator<char>> *pVVar1;
  long lVar2;
  VmaStringBuilder *pVVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char local_35 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  VmaJsonWriter::BeginObject(param_1,true);
  VmaJsonWriter::BeginString(param_1,"Offset");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  pcVar6 = local_35 + 1;
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(SUB81(param_1,0));
  local_35[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar5 = pcVar6;
  do {
    pcVar5 = pcVar5 + -1;
    *pcVar5 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    bVar4 = 9 < param_2;
    param_2 = param_2 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar5);
  VmaJsonWriter::BeginString(param_1,"Type");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginString(param_1,"FREE");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginString(param_1,"Size");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(SUB81(param_1,0));
  local_35[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  do {
    pcVar6 = pcVar6 + -1;
    *pcVar6 = (char)param_3 + (char)(param_3 / 10) * -10 + '0';
    bVar4 = 9 < param_3;
    param_3 = param_3 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar6);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    VmaJsonWriter::EndObject(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaBlockMetadata_Linear::PrintDetailedMap(VmaJsonWriter&) const */

void __thiscall
VmaBlockMetadata_Linear::PrintDetailedMap(VmaBlockMetadata_Linear *this,VmaJsonWriter *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  VmaBlockMetadata_Linear *local_60;
  VmaBlockMetadata_Linear *local_58;
  
  uVar2 = *(ulong *)(this + 8);
  if (*(int *)(this + 0x70) == 0) {
    local_60 = this + 0x30;
    local_58 = this + 0x50;
  }
  else {
    local_60 = this + 0x50;
    local_58 = this + 0x30;
  }
  iVar1 = *(int *)(this + 0x74);
  uVar6 = *(ulong *)(local_60 + 0x10);
  uVar8 = *(ulong *)(local_58 + 0x10);
  uVar5 = *(ulong *)(this + 0x78);
  uVar16 = uVar8;
  if (iVar1 == 1) {
    uVar10 = 0;
    uVar12 = 0;
    lVar11 = 0;
    uVar15 = *(ulong *)(uVar5 * 0x20 + *(long *)(local_60 + 8));
    uVar7 = uVar15;
    if (uVar15 != 0) {
      uVar9 = 0;
      uVar10 = 0;
      uVar7 = 0;
      lVar11 = 0;
      uVar12 = 0;
      do {
        if (uVar8 <= uVar9) {
LAB_0010bd90:
          uVar12 = uVar12 + 1;
          uVar7 = uVar15;
          break;
        }
        while (*(long *)(*(long *)(local_58 + 8) + 0x10 + uVar9 * 0x20) == 0) {
          uVar9 = uVar9 + 1;
          if (uVar9 == uVar8) goto LAB_0010bd90;
        }
        if (uVar8 <= uVar9) goto LAB_0010bd90;
        puVar14 = (ulong *)(*(long *)(local_58 + 8) + uVar9 * 0x20);
        uVar3 = *puVar14;
        uVar4 = puVar14[1];
        uVar12 = uVar12 + (uVar7 < uVar3);
        uVar10 = uVar10 + 1;
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + uVar4;
        uVar7 = uVar4 + uVar3;
      } while (uVar7 < uVar15);
    }
LAB_0010bd94:
    uVar15 = uVar2;
    if (uVar7 < uVar2) {
LAB_0010b902:
      lVar13 = 0;
      do {
        if (uVar6 <= uVar5) {
LAB_0010b970:
          uVar12 = uVar12 + 1;
          uVar7 = uVar15;
          break;
        }
        while (*(long *)(*(long *)(local_60 + 8) + 0x10 + uVar5 * 0x20) == 0) {
          uVar5 = uVar5 + 1;
          if (uVar6 == uVar5) goto LAB_0010b970;
        }
        if (uVar6 <= uVar5) goto LAB_0010b970;
        puVar14 = (ulong *)(*(long *)(local_60 + 8) + uVar5 * 0x20);
        uVar9 = *puVar14;
        uVar3 = puVar14[1];
        uVar12 = uVar12 + (uVar7 < uVar9);
        lVar13 = lVar13 + 1;
        uVar5 = uVar5 + 1;
        lVar11 = lVar11 + uVar3;
        uVar7 = uVar3 + uVar9;
      } while (uVar7 < uVar15);
      if (iVar1 == 2) goto joined_r0x0010bc8c;
      goto LAB_0010b981;
    }
  }
  else {
    if (iVar1 != 2) {
      uVar10 = 0;
      lVar11 = 0;
      uVar12 = 0;
      uVar7 = 0;
      goto LAB_0010bd94;
    }
    uVar15 = *(ulong *)(uVar8 * 0x20 + *(long *)(local_58 + 8) + -0x20);
    if (uVar15 != 0) {
      uVar10 = 0;
      uVar7 = 0;
      lVar11 = 0;
      uVar12 = 0;
      goto LAB_0010b902;
    }
    lVar13 = 0;
    uVar7 = 0;
    lVar11 = 0;
    uVar12 = 0;
    uVar10 = 0;
joined_r0x0010bc8c:
    while (uVar7 < uVar2) {
      uVar16 = uVar16 - 1;
      if (uVar16 == 0xffffffffffffffff) {
LAB_0010bcf8:
        uVar12 = uVar12 + 1;
        break;
      }
      while (*(long *)(*(long *)(local_58 + 8) + 0x10 + uVar16 * 0x20) == 0) {
        bVar17 = uVar16 == 0;
        uVar16 = uVar16 - 1;
        if (bVar17) goto LAB_0010bcf8;
      }
      puVar14 = (ulong *)(*(long *)(local_58 + 8) + uVar16 * 0x20);
      uVar5 = *puVar14;
      uVar9 = puVar14[1];
      uVar12 = uVar12 + (uVar7 < uVar5);
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + uVar9;
      uVar7 = uVar9 + uVar5;
    }
LAB_0010b981:
    uVar10 = uVar10 + lVar13;
  }
  VmaBlockMetadata::PrintDetailedMap_Begin
            ((VmaBlockMetadata *)this,param_1,uVar2 - lVar11,uVar10,uVar12);
  uVar5 = 0;
  if (*(int *)(this + 0x74) == 1) {
    uVar16 = *(ulong *)(this + 0x78);
    uVar12 = 0;
    uVar5 = 0;
    uVar7 = *(ulong *)(uVar16 * 0x20 + *(long *)(local_60 + 8));
    if (uVar7 == 0) {
      if (uVar15 != 0) goto LAB_0010b9b8;
      goto LAB_0010bb16;
    }
    do {
      if (uVar8 <= uVar12) {
LAB_0010bc10:
        VmaBlockMetadata::PrintDetailedMap_UnusedRange
                  ((VmaBlockMetadata *)this,param_1,uVar5,uVar7 - uVar5);
        uVar5 = uVar7;
        break;
      }
      while (*(long *)(*(long *)(local_58 + 8) + 0x10 + uVar12 * 0x20) == 0) {
        uVar12 = uVar12 + 1;
        if (uVar12 == uVar8) goto LAB_0010bc10;
      }
      if (uVar8 <= uVar12) goto LAB_0010bc10;
      puVar14 = (ulong *)(*(long *)(local_58 + 8) + uVar12 * 0x20);
      uVar16 = *puVar14;
      if (uVar5 < uVar16) {
        VmaBlockMetadata::PrintDetailedMap_UnusedRange
                  ((VmaBlockMetadata *)this,param_1,uVar5,uVar16 - uVar5);
        uVar16 = *puVar14;
      }
      uVar12 = uVar12 + 1;
      VmaBlockMetadata::PrintDetailedMap_Allocation
                ((VmaBlockMetadata *)this,param_1,uVar16,puVar14[1],(void *)puVar14[2]);
      uVar5 = puVar14[1] + *puVar14;
    } while (uVar5 < uVar7);
  }
  uVar16 = *(ulong *)(this + 0x78);
  uVar7 = uVar5;
  while (uVar7 < uVar15) {
LAB_0010b9b8:
    if (uVar6 <= uVar16) {
LAB_0010baf8:
      VmaBlockMetadata::PrintDetailedMap_UnusedRange
                ((VmaBlockMetadata *)this,param_1,uVar7,uVar15 - uVar7);
      iVar1 = *(int *)(this + 0x74);
      uVar7 = uVar15;
      goto joined_r0x0010bb10;
    }
    while (*(long *)(*(long *)(local_60 + 8) + 0x10 + uVar16 * 0x20) == 0) {
      uVar16 = uVar16 + 1;
      if (uVar6 == uVar16) goto LAB_0010baf8;
    }
    if (uVar6 <= uVar16) goto LAB_0010baf8;
    puVar14 = (ulong *)(*(long *)(local_60 + 8) + uVar16 * 0x20);
    uVar8 = *puVar14;
    if (uVar7 < uVar8) {
      VmaBlockMetadata::PrintDetailedMap_UnusedRange
                ((VmaBlockMetadata *)this,param_1,uVar7,uVar8 - uVar7);
      uVar8 = *puVar14;
    }
    uVar16 = uVar16 + 1;
    VmaBlockMetadata::PrintDetailedMap_Allocation
              ((VmaBlockMetadata *)this,param_1,uVar8,puVar14[1],(void *)puVar14[2]);
    uVar7 = puVar14[1] + *puVar14;
  }
  iVar1 = *(int *)(this + 0x74);
joined_r0x0010bb10:
  if (iVar1 == 2) {
    lVar11 = *(long *)(local_58 + 0x10);
    while (uVar7 < uVar2) {
      lVar11 = lVar11 + -1;
      if (lVar11 == -1) {
LAB_0010bad8:
        VmaBlockMetadata::PrintDetailedMap_UnusedRange
                  ((VmaBlockMetadata *)this,param_1,uVar7,uVar2 - uVar7);
        break;
      }
      while (*(long *)(*(long *)(local_58 + 8) + 0x10 + lVar11 * 0x20) == 0) {
        bVar17 = lVar11 == 0;
        lVar11 = lVar11 + -1;
        if (bVar17) goto LAB_0010bad8;
      }
      puVar14 = (ulong *)(*(long *)(local_58 + 8) + lVar11 * 0x20);
      uVar6 = *puVar14;
      if (uVar7 < uVar6) {
        VmaBlockMetadata::PrintDetailedMap_UnusedRange
                  ((VmaBlockMetadata *)this,param_1,uVar7,uVar6 - uVar7);
        uVar6 = *puVar14;
      }
      VmaBlockMetadata::PrintDetailedMap_Allocation
                ((VmaBlockMetadata *)this,param_1,uVar6,puVar14[1],(void *)puVar14[2]);
      uVar7 = puVar14[1] + *puVar14;
    }
  }
LAB_0010bb16:
  VmaJsonWriter::EndArray(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaBlockMetadata_TLSF::PrintDetailedMap(VmaJsonWriter&) const */

void __thiscall
VmaBlockMetadata_TLSF::PrintDetailedMap(VmaBlockMetadata_TLSF *this,VmaJsonWriter *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  void *__ptr;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_88;
  undefined1 local_80 [16];
  uint local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  __ptr = (void *)0x0;
  puVar1 = *(undefined8 **)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(long *)(this + 0x30) + *(long *)(this + 0x28);
  if (uVar5 != 0) {
    if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
      __ptr = (void *)aligned_alloc(8,uVar5 * 8);
    }
    else {
      __ptr = (void *)(*(code *)puVar1[1])(*puVar1,uVar5 * 8,8,1);
    }
  }
  uVar4 = uVar5;
  for (lVar2 = *(long *)(*(long *)(this + 0x170) + 0x10); lVar2 != 0;
      lVar2 = *(long *)(lVar2 + 0x10)) {
    uVar4 = uVar4 - 1;
    *(long *)((long)__ptr + uVar4 * 8) = lVar2;
  }
  local_80 = (undefined1  [16])0x0;
  local_88 = 0;
  local_70 = 0;
  local_68 = _LC0;
  uStack_60 = _UNK_00115398;
  local_58 = _LC0;
  uStack_50 = _UNK_00115398;
  (**(code **)(*(long *)this + 0x70))(this,&local_88);
  VmaBlockMetadata::PrintDetailedMap_Begin
            ((VmaBlockMetadata *)this,param_1,local_80._0_8_ - local_80._8_8_,local_88 >> 0x20,
             (ulong)local_70);
  if (uVar4 < uVar5) {
    do {
      while( true ) {
        puVar3 = *(ulong **)((long)__ptr + uVar4 * 8);
        if ((ulong *)puVar3[4] != puVar3) break;
        uVar4 = uVar4 + 1;
        VmaBlockMetadata::PrintDetailedMap_Allocation
                  ((VmaBlockMetadata *)this,param_1,*puVar3,puVar3[1],(void *)puVar3[5]);
        if (uVar5 == uVar4) goto LAB_0010becd;
      }
      uVar4 = uVar4 + 1;
      VmaBlockMetadata::PrintDetailedMap_UnusedRange
                ((VmaBlockMetadata *)this,param_1,*puVar3,puVar3[1]);
    } while (uVar5 != uVar4);
  }
LAB_0010becd:
  uVar5 = (*(ulong **)(this + 0x170))[1];
  if (uVar5 != 0) {
    VmaBlockMetadata::PrintDetailedMap_UnusedRange
              ((VmaBlockMetadata *)this,param_1,**(ulong **)(this + 0x170),uVar5);
  }
  VmaJsonWriter::EndArray(param_1);
  if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
    free(__ptr);
  }
  else {
    (*(code *)puVar1[3])(*puVar1,__ptr);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaPrintDetailedStatistics(VmaJsonWriter&, VmaDetailedStatistics const&) */

void VmaPrintDetailedStatistics(VmaJsonWriter *param_1,VmaDetailedStatistics *param_2)

{
  VmaVector<char,VmaStlAllocator<char>> *pVVar1;
  long lVar2;
  VmaStringBuilder *pVVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  char local_4f [10];
  char local_45 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  VmaJsonWriter::BeginObject(param_1,false);
  VmaJsonWriter::BeginString(param_1,"BlockCount");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  uVar5 = *(uint *)param_2;
  pcVar8 = local_4f + 1;
  param_1[0x28] = (VmaJsonWriter)0x0;
  bVar9 = SUB81(param_1,0);
  VmaJsonWriter::BeginValue(bVar9);
  local_4f[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar6 = pcVar8;
  do {
    pcVar6 = pcVar6 + -1;
    *pcVar6 = (char)uVar5 + (char)(uVar5 / 10) * -10 + '0';
    bVar4 = 9 < uVar5;
    uVar5 = uVar5 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar6);
  VmaJsonWriter::BeginString(param_1,"BlockBytes");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  pcVar6 = local_45 + 1;
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  uVar10 = *(ulong *)(param_2 + 8);
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(bVar9);
  local_45[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar7 = pcVar6;
  do {
    pcVar7 = pcVar7 + -1;
    *pcVar7 = (char)uVar10 + (char)(uVar10 / 10) * -10 + '0';
    bVar4 = 9 < uVar10;
    uVar10 = uVar10 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar7);
  VmaJsonWriter::BeginString(param_1,"AllocationCount");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  uVar5 = *(uint *)(param_2 + 4);
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(bVar9);
  local_4f[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar7 = pcVar8;
  do {
    pcVar7 = pcVar7 + -1;
    *pcVar7 = (char)uVar5 + (char)(uVar5 / 10) * -10 + '0';
    bVar4 = 9 < uVar5;
    uVar5 = uVar5 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar7);
  VmaJsonWriter::BeginString(param_1,"AllocationBytes");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  uVar10 = *(ulong *)(param_2 + 0x10);
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(bVar9);
  local_45[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  pcVar7 = pcVar6;
  do {
    pcVar7 = pcVar7 + -1;
    *pcVar7 = (char)uVar10 + (char)(uVar10 / 10) * -10 + '0';
    bVar4 = 9 < uVar10;
    uVar10 = uVar10 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar7);
  VmaJsonWriter::BeginString(param_1,"UnusedRangeCount");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar2 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
  uVar5 = *(uint *)(param_2 + 0x18);
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginValue(bVar9);
  local_4f[1] = 0;
  pVVar3 = *(VmaStringBuilder **)param_1;
  do {
    pcVar8 = pcVar8 + -1;
    *pcVar8 = (char)uVar5 + (char)(uVar5 / 10) * -10 + '0';
    bVar4 = 9 < uVar5;
    uVar5 = uVar5 / 10;
  } while (bVar4);
  VmaStringBuilder::Add(pVVar3,pcVar8);
  if (*(uint *)(param_2 + 4) < 2) {
    uVar5 = *(uint *)(param_2 + 0x18);
  }
  else {
    VmaJsonWriter::BeginString(param_1,"AllocationSizeMin");
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    uVar10 = *(ulong *)(param_2 + 0x20);
    param_1[0x28] = (VmaJsonWriter)0x0;
    VmaJsonWriter::BeginValue(bVar9);
    local_45[1] = 0;
    pVVar3 = *(VmaStringBuilder **)param_1;
    pcVar8 = pcVar6;
    do {
      pcVar8 = pcVar8 + -1;
      *pcVar8 = (char)uVar10 + (char)(uVar10 / 10) * -10 + '0';
      bVar4 = 9 < uVar10;
      uVar10 = uVar10 / 10;
    } while (bVar4);
    VmaStringBuilder::Add(pVVar3,pcVar8);
    VmaJsonWriter::BeginString(param_1,"AllocationSizeMax");
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    uVar10 = *(ulong *)(param_2 + 0x28);
    param_1[0x28] = (VmaJsonWriter)0x0;
    VmaJsonWriter::BeginValue(bVar9);
    local_45[1] = 0;
    pVVar3 = *(VmaStringBuilder **)param_1;
    pcVar8 = pcVar6;
    do {
      pcVar8 = pcVar8 + -1;
      *pcVar8 = (char)uVar10 + (char)(uVar10 / 10) * -10 + '0';
      bVar4 = 9 < uVar10;
      uVar10 = uVar10 / 10;
    } while (bVar4);
    VmaStringBuilder::Add(pVVar3,pcVar8);
    uVar5 = *(uint *)(param_2 + 0x18);
  }
  if (1 < uVar5) {
    VmaJsonWriter::BeginString(param_1,"UnusedRangeSizeMin");
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    uVar10 = *(ulong *)(param_2 + 0x30);
    param_1[0x28] = (VmaJsonWriter)0x0;
    VmaJsonWriter::BeginValue(bVar9);
    local_45[1] = 0;
    pVVar3 = *(VmaStringBuilder **)param_1;
    pcVar8 = pcVar6;
    do {
      pcVar8 = pcVar8 + -1;
      *pcVar8 = (char)uVar10 + (char)(uVar10 / 10) * -10 + '0';
      bVar4 = 9 < uVar10;
      uVar10 = uVar10 / 10;
    } while (bVar4);
    VmaStringBuilder::Add(pVVar3,pcVar8);
    VmaJsonWriter::BeginString(param_1,"UnusedRangeSizeMax");
    pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
    lVar2 = *(long *)(pVVar1 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar2 + 1);
    *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar2) = 0x22;
    uVar10 = *(ulong *)(param_2 + 0x38);
    param_1[0x28] = (VmaJsonWriter)0x0;
    VmaJsonWriter::BeginValue(bVar9);
    local_45[1] = 0;
    pVVar3 = *(VmaStringBuilder **)param_1;
    do {
      pcVar6 = pcVar6 + -1;
      *pcVar6 = (char)uVar10 + (char)(uVar10 / 10) * -10 + '0';
      bVar9 = 9 < uVar10;
      uVar10 = uVar10 / 10;
    } while (bVar9);
    VmaStringBuilder::Add(pVVar3,pcVar6);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  VmaJsonWriter::EndObject(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaVirtualBlock_T::BuildStatsString(bool, VmaStringBuilder&) const */

void __thiscall
VmaVirtualBlock_T::BuildStatsString(VmaVirtualBlock_T *this,bool param_1,VmaStringBuilder *param_2)

{
  long lVar1;
  VmaStringBuilder *pVVar2;
  long in_FS_OFFSET;
  VmaStringBuilder *local_b8;
  VmaVirtualBlock_T *local_b0;
  void *local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (VmaVirtualBlock_T *)0x0;
  if (*this != (VmaVirtualBlock_T)0x0) {
    local_b0 = this + 8;
  }
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (void *)0x0;
  local_90 = 0;
  local_b8 = param_2;
  VmaJsonWriter::BeginObject((VmaJsonWriter *)&local_b8,false);
  local_80 = (undefined1  [16])0x0;
  local_70 = 0;
  local_68 = _LC0;
  uStack_60 = _UNK_00115398;
  local_58 = _LC0;
  uStack_50 = _UNK_00115398;
  local_88 = 0;
  (**(code **)(**(long **)(this + 0x38) + 0x70))
            (*(long **)(this + 0x38),(VmaDetailedStatistics *)&local_88);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_b8,"Stats");
  pVVar2 = local_b8;
  lVar1 = *(long *)(local_b8 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize
            ((VmaVector<char,VmaStlAllocator<char>> *)local_b8,lVar1 + 1);
  *(undefined1 *)(*(long *)(pVVar2 + 8) + lVar1) = 0x22;
  local_90 = 0;
  VmaPrintDetailedStatistics((VmaJsonWriter *)&local_b8,(VmaDetailedStatistics *)&local_88);
  if (param_1) {
    VmaJsonWriter::BeginString((VmaJsonWriter *)&local_b8,"Details");
    pVVar2 = local_b8;
    lVar1 = *(long *)(local_b8 + 0x10);
    VmaVector<char,VmaStlAllocator<char>>::resize
              ((VmaVector<char,VmaStlAllocator<char>> *)local_b8,lVar1 + 1);
    *(undefined1 *)(*(long *)(pVVar2 + 8) + lVar1) = 0x22;
    local_90 = 0;
    VmaJsonWriter::BeginObject((VmaJsonWriter *)&local_b8,false);
    (**(code **)(**(long **)(this + 0x38) + 0x80))(*(long **)(this + 0x38),&local_b8);
    VmaJsonWriter::EndObject((VmaJsonWriter *)&local_b8);
  }
  VmaJsonWriter::EndObject((VmaJsonWriter *)&local_b8);
  if ((local_b0 == (VmaVirtualBlock_T *)0x0) || (*(code **)(local_b0 + 0x18) == (code *)0x0)) {
    free(local_a8);
  }
  else {
    (**(code **)(local_b0 + 0x18))(*(undefined8 *)local_b0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void vmaBuildVirtualBlockStatsString(VmaVirtualBlock_T *param_1,undefined8 *param_2,int param_3)

{
  void *__dest;
  void *pvVar1;
  long lVar2;
  size_t __n;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == (VmaVirtualBlock_T)0x0) {
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    VmaVirtualBlock_T::BuildStatsString(param_1,param_3 != 0,(VmaStringBuilder *)local_58);
    if ((void *)local_58._8_8_ != (void *)0x0) {
      lVar2 = local_48._0_8_ + 1;
      __n = local_48._0_8_;
      pvVar1 = (void *)local_58._8_8_;
LAB_0010c7aa:
      __dest = (void *)aligned_alloc(1,lVar2);
      goto LAB_0010c70f;
    }
  }
  else {
    local_58._8_8_ = 0;
    local_58._0_8_ = param_1 + 8;
    local_48 = (undefined1  [16])0x0;
    VmaVirtualBlock_T::BuildStatsString(param_1,param_3 != 0,(VmaStringBuilder *)local_58);
    pvVar1 = (void *)local_58._8_8_;
    if ((void *)local_58._8_8_ != (void *)0x0) {
      __n = local_48._0_8_;
      lVar2 = local_48._0_8_ + 1;
      if (*(code **)(param_1 + 0x10) == (code *)0x0) goto LAB_0010c7aa;
      __dest = (void *)(**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),lVar2,1,1);
LAB_0010c70f:
      pvVar1 = memcpy(__dest,pvVar1,__n);
      *(undefined1 *)((long)pvVar1 + __n) = 0;
      *param_2 = pvVar1;
      pvVar1 = (void *)local_58._8_8_;
      goto joined_r0x0010c78e;
    }
  }
  *param_2 = 0;
  pvVar1 = (void *)0x0;
joined_r0x0010c78e:
  if (((undefined8 *)local_58._0_8_ == (undefined8 *)0x0) ||
     (*(code **)(local_58._0_8_ + 0x18) == (code *)0x0)) {
    free(pvVar1);
  }
  else {
    (**(code **)(local_58._0_8_ + 0x18))(*(undefined8 *)local_58._0_8_);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VmaBlockVector::PrintDetailedMap(VmaJsonWriter&) */

void __thiscall VmaBlockVector::PrintDetailedMap(VmaBlockVector *this,VmaJsonWriter *param_1)

{
  long lVar1;
  VmaVector<char,VmaStlAllocator<char>> *pVVar2;
  long lVar3;
  VmaStringBuilder *pVVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  pthread_rwlock_t *local_60;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (**(char **)this == '\0') {
    local_60 = (pthread_rwlock_t *)0x0;
  }
  else {
    local_60 = (pthread_rwlock_t *)(this + 0x58);
    do {
      iVar7 = pthread_rwlock_rdlock(local_60);
    } while (iVar7 == 0xb);
    if (iVar7 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
  }
  VmaJsonWriter::BeginObject(param_1,false);
  if (*(long *)(this + 0xa0) != 0) {
    uVar9 = 0;
    do {
      VmaJsonWriter::BeginValue(SUB81(param_1,0));
      pVVar2 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
      lVar3 = *(long *)(pVVar2 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(pVVar2,lVar3 + 1);
      lVar1 = uVar9 * 8;
      *(undefined1 *)(*(long *)(pVVar2 + 8) + lVar3) = 0x22;
      lVar3 = *(long *)(this + 0x98);
      param_1[0x28] = (VmaJsonWriter)0x1;
      pVVar4 = *(VmaStringBuilder **)param_1;
      local_41 = '\0';
      pcVar10 = &local_41;
      uVar8 = *(uint *)(*(long *)(lVar3 + uVar9 * 8) + 0x14);
      do {
        pcVar10 = pcVar10 + -1;
        *pcVar10 = (char)uVar8 + (char)(uVar8 / 10) * -10 + '0';
        bVar6 = 9 < uVar8;
        uVar8 = uVar8 / 10;
      } while (bVar6);
      VmaStringBuilder::Add(pVVar4,pcVar10);
      pVVar2 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
      lVar3 = *(long *)(pVVar2 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(pVVar2,lVar3 + 1);
      *(undefined1 *)(*(long *)(pVVar2 + 8) + lVar3) = 0x22;
      param_1[0x28] = (VmaJsonWriter)0x0;
      VmaJsonWriter::BeginObject(param_1,false);
      VmaJsonWriter::BeginString(param_1,"MapRefCount");
      pVVar2 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
      lVar3 = *(long *)(pVVar2 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(pVVar2,lVar3 + 1);
      *(undefined1 *)(*(long *)(pVVar2 + 8) + lVar3) = 0x22;
      lVar3 = *(long *)(this + 0x98);
      param_1[0x28] = (VmaJsonWriter)0x0;
      uVar8 = *(uint *)(*(long *)(lVar3 + lVar1) + 0x54);
      VmaJsonWriter::BeginValue(SUB81(param_1,0));
      local_41 = '\0';
      pVVar4 = *(VmaStringBuilder **)param_1;
      pcVar10 = &local_41;
      do {
        pcVar10 = pcVar10 + -1;
        *pcVar10 = (char)uVar8 + (char)(uVar8 / 10) * -10 + '0';
        bVar6 = 9 < uVar8;
        uVar8 = uVar8 / 10;
      } while (bVar6);
      uVar9 = uVar9 + 1;
      VmaStringBuilder::Add(pVVar4,pcVar10);
      plVar5 = (long *)**(undefined8 **)(*(long *)(this + 0x98) + lVar1);
      (**(code **)(*plVar5 + 0x80))(plVar5,param_1);
      VmaJsonWriter::EndObject(param_1);
    } while (uVar9 < *(ulong *)(this + 0xa0));
  }
  VmaJsonWriter::EndObject(param_1);
  if (local_60 == (pthread_rwlock_t *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_rwlock_unlock(local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaDedicatedAllocationList::BuildStatsString(VmaJsonWriter&) */

void __thiscall
VmaDedicatedAllocationList::BuildStatsString
          (VmaDedicatedAllocationList *this,VmaJsonWriter *param_1)

{
  int iVar1;
  VmaAllocation_T *this_00;
  pthread_rwlock_t *__rwlock;
  
  if (*this == (VmaDedicatedAllocationList)0x0) {
    __rwlock = (pthread_rwlock_t *)0x0;
    VmaJsonWriter::BeginArray(param_1,false);
    this_00 = *(VmaAllocation_T **)(this + 0x40);
    if (this_00 == (VmaAllocation_T *)0x0) {
      VmaJsonWriter::EndArray(param_1);
      return;
    }
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 8);
    do {
      iVar1 = pthread_rwlock_rdlock(__rwlock);
    } while (iVar1 == 0xb);
    if (iVar1 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    VmaJsonWriter::BeginArray(param_1,false);
    this_00 = *(VmaAllocation_T **)(this + 0x40);
    if (this_00 == (VmaAllocation_T *)0x0) {
      VmaJsonWriter::EndArray(param_1);
      goto LAB_0010cae6;
    }
  }
  do {
    VmaJsonWriter::BeginObject(param_1,true);
    VmaAllocation_T::PrintParameters(this_00,param_1);
    VmaJsonWriter::EndObject(param_1);
    this_00 = *(VmaAllocation_T **)(this_00 + 0x20);
  } while (this_00 != (VmaAllocation_T *)0x0);
  VmaJsonWriter::EndArray(param_1);
  if (__rwlock == (pthread_rwlock_t *)0x0) {
    return;
  }
LAB_0010cae6:
  pthread_rwlock_unlock(__rwlock);
  return;
}



/* VmaAllocator_T::PrintDetailedMap(VmaJsonWriter&) */

void __thiscall VmaAllocator_T::PrintDetailedMap(VmaAllocator_T *this,VmaJsonWriter *param_1)

{
  VmaVector<char,VmaStlAllocator<char>> *pVVar1;
  VmaStringBuilder *pVVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  pthread_rwlock_t *__rwlock;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  char *pcVar12;
  VmaAllocator_T *this_00;
  long lVar13;
  VmaBlockVector *pVVar14;
  long in_FS_OFFSET;
  char local_4f [10];
  char local_45 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  VmaJsonWriter::BeginString(param_1,"DefaultPools");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar13 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar13 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar13) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginObject(param_1,false);
  bVar11 = SUB81(param_1,0);
  if (*(int *)(this + 0x408) != 0) {
    this_00 = this + 0x710;
    lVar13 = 0;
    do {
      pVVar14 = *(VmaBlockVector **)(this + lVar13 * 8 + 0x610);
      if (pVVar14 != (VmaBlockVector *)0x0) {
        VmaJsonWriter::BeginString(param_1,"Type ");
        local_4f[1] = 0;
        pVVar2 = *(VmaStringBuilder **)param_1;
        pcVar12 = local_4f + 1;
        uVar8 = (uint)lVar13;
        do {
          pcVar12 = pcVar12 + -1;
          *pcVar12 = (char)uVar8 + (char)(uVar8 / 10) * -10 + '0';
          bVar4 = 9 < uVar8;
          uVar8 = uVar8 / 10;
        } while (bVar4);
        VmaStringBuilder::Add(pVVar2,pcVar12);
        pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
        lVar3 = *(long *)(pVVar1 + 0x10);
        VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar3 + 1);
        *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar3) = 0x22;
        param_1[0x28] = (VmaJsonWriter)0x0;
        VmaJsonWriter::BeginObject(param_1,false);
        VmaJsonWriter::BeginString(param_1,"PreferredBlockSize");
        pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
        lVar3 = *(long *)(pVVar1 + 0x10);
        VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar3 + 1);
        *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar3) = 0x22;
        uVar6 = *(ulong *)(pVVar14 + 0x18);
        param_1[0x28] = (VmaJsonWriter)0x0;
        VmaJsonWriter::BeginValue(bVar11);
        local_45[1] = 0;
        pVVar2 = *(VmaStringBuilder **)param_1;
        pcVar12 = local_45 + 1;
        do {
          pcVar12 = pcVar12 + -1;
          *pcVar12 = (char)uVar6 + (char)(uVar6 / 10) * -10 + '0';
          bVar4 = 9 < uVar6;
          uVar6 = uVar6 / 10;
        } while (bVar4);
        VmaStringBuilder::Add(pVVar2,pcVar12);
        VmaJsonWriter::BeginString(param_1,"Blocks");
        pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
        lVar3 = *(long *)(pVVar1 + 0x10);
        VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar3 + 1);
        *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar3) = 0x22;
        param_1[0x28] = (VmaJsonWriter)0x0;
        VmaBlockVector::PrintDetailedMap(pVVar14,param_1);
        VmaJsonWriter::BeginString(param_1,"DedicatedAllocations");
        pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
        lVar3 = *(long *)(pVVar1 + 0x10);
        VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar3 + 1);
        *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar3) = 0x22;
        param_1[0x28] = (VmaJsonWriter)0x0;
        VmaDedicatedAllocationList::BuildStatsString((VmaDedicatedAllocationList *)this_00,param_1);
        VmaJsonWriter::EndObject(param_1);
      }
      lVar13 = lVar13 + 1;
      this_00 = (VmaAllocator_T *)((VmaDedicatedAllocationList *)this_00 + 0x58);
    } while ((uint)lVar13 < *(uint *)(this + 0x408));
  }
  VmaJsonWriter::EndObject(param_1);
  VmaJsonWriter::BeginString(param_1,"CustomPools");
  pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
  lVar13 = *(long *)(pVVar1 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar13 + 1);
  *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar13) = 0x22;
  param_1[0x28] = (VmaJsonWriter)0x0;
  VmaJsonWriter::BeginObject(param_1,false);
  if (*this == (VmaAllocator_T)0x0) {
    if ((*(long *)(this + 0x1638) == 0) ||
       (__rwlock = (pthread_rwlock_t *)0x0, *(int *)(this + 0x408) == 0)) goto LAB_0010d12d;
LAB_0010ce66:
    uVar8 = 0;
    do {
      uVar6 = 0;
      pVVar14 = *(VmaBlockVector **)(this + 0x1628);
      bVar4 = true;
      if (pVVar14 != (VmaBlockVector *)0x0) {
        do {
          while (*(uint *)(pVVar14 + 0x10) != uVar8) {
            pVVar14 = *(VmaBlockVector **)(pVVar14 + 0x128);
            if (pVVar14 == (VmaBlockVector *)0x0) goto LAB_0010d0fc;
          }
          if (bVar4) {
            VmaJsonWriter::BeginString(param_1,"Type ");
            local_4f[1] = 0;
            pVVar2 = *(VmaStringBuilder **)param_1;
            uVar7 = (ulong)uVar8;
            pcVar12 = local_4f + 1;
            do {
              pcVar12 = pcVar12 + -1;
              uVar9 = (uint)uVar7;
              *pcVar12 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
              uVar7 = uVar7 / 10;
            } while (9 < uVar9);
            VmaStringBuilder::Add(pVVar2,pcVar12);
            pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
            lVar13 = *(long *)(pVVar1 + 0x10);
            VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar13 + 1);
            *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar13) = 0x22;
            param_1[0x28] = (VmaJsonWriter)0x0;
            VmaJsonWriter::BeginArray(param_1,false);
          }
          VmaJsonWriter::BeginObject(param_1,false);
          VmaJsonWriter::BeginString(param_1,"Name");
          pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
          lVar13 = *(long *)(pVVar1 + 0x10);
          VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar13 + 1);
          *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar13) = 0x22;
          param_1[0x28] = (VmaJsonWriter)0x0;
          VmaJsonWriter::BeginValue(bVar11);
          pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
          lVar13 = *(long *)(pVVar1 + 0x10);
          VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar13 + 1);
          pcVar12 = local_45 + 1;
          *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar13) = 0x22;
          pVVar2 = *(VmaStringBuilder **)param_1;
          param_1[0x28] = (VmaJsonWriter)0x1;
          local_45[1] = 0;
          uVar7 = uVar6;
          pcVar10 = pcVar12;
          do {
            pcVar10 = pcVar10 + -1;
            *pcVar10 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
            bVar4 = 9 < uVar7;
            uVar7 = uVar7 / 10;
          } while (bVar4);
          VmaStringBuilder::Add(pVVar2,pcVar10);
          if (*(long *)(pVVar14 + 0x118) != 0) {
            VmaJsonWriter::ContinueString(param_1," - ");
            VmaJsonWriter::ContinueString(param_1,*(char **)(pVVar14 + 0x118));
          }
          pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
          lVar13 = *(long *)(pVVar1 + 0x10);
          VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar13 + 1);
          *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar13) = 0x22;
          param_1[0x28] = (VmaJsonWriter)0x0;
          VmaJsonWriter::BeginString(param_1,"PreferredBlockSize");
          pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
          lVar13 = *(long *)(pVVar1 + 0x10);
          VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar13 + 1);
          *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar13) = 0x22;
          uVar7 = *(ulong *)(pVVar14 + 0x18);
          param_1[0x28] = (VmaJsonWriter)0x0;
          VmaJsonWriter::BeginValue(bVar11);
          local_45[1] = 0;
          pVVar2 = *(VmaStringBuilder **)param_1;
          do {
            pcVar12 = pcVar12 + -1;
            *pcVar12 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
            bVar4 = 9 < uVar7;
            uVar7 = uVar7 / 10;
          } while (bVar4);
          VmaStringBuilder::Add(pVVar2,pcVar12);
          VmaJsonWriter::BeginString(param_1,"Blocks");
          pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
          lVar13 = *(long *)(pVVar1 + 0x10);
          VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar13 + 1);
          *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar13) = 0x22;
          param_1[0x28] = (VmaJsonWriter)0x0;
          VmaBlockVector::PrintDetailedMap(pVVar14,param_1);
          VmaJsonWriter::BeginString(param_1,"DedicatedAllocations");
          pVVar1 = *(VmaVector<char,VmaStlAllocator<char>> **)param_1;
          lVar13 = *(long *)(pVVar1 + 0x10);
          VmaVector<char,VmaStlAllocator<char>>::resize(pVVar1,lVar13 + 1);
          *(undefined1 *)(*(long *)(pVVar1 + 8) + lVar13) = 0x22;
          param_1[0x28] = (VmaJsonWriter)0x0;
          VmaDedicatedAllocationList::BuildStatsString
                    ((VmaDedicatedAllocationList *)(pVVar14 + 0xb8),param_1);
          VmaJsonWriter::EndObject(param_1);
          pVVar14 = *(VmaBlockVector **)(pVVar14 + 0x128);
          bVar4 = false;
          uVar6 = uVar6 + 1;
        } while (pVVar14 != (VmaBlockVector *)0x0);
LAB_0010d0fc:
        if (!bVar4) {
          VmaJsonWriter::EndArray(param_1);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(this + 0x408));
    if (__rwlock == (pthread_rwlock_t *)0x0) goto LAB_0010d12d;
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 0x15f0);
    do {
      iVar5 = pthread_rwlock_rdlock(__rwlock);
    } while (iVar5 == 0xb);
    if (iVar5 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    if ((*(long *)(this + 0x1638) != 0) && (*(int *)(this + 0x408) != 0)) goto LAB_0010ce66;
  }
  pthread_rwlock_unlock(__rwlock);
LAB_0010d12d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  VmaJsonWriter::EndObject(param_1);
  return;
}



void vmaBuildStatsString(VmaAllocator_T *param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  undefined8 __n;
  VmaVector<char,VmaStlAllocator<char>> *pVVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  bool bVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  VmaAllocator_T *pVVar14;
  long in_FS_OFFSET;
  uint local_fb0;
  ulong *local_f98;
  VmaDetailedStatistics *local_f90;
  uint local_f70;
  VmaAllocator_T *local_f68;
  void *local_f60;
  undefined1 local_f58 [16];
  VmaVector<char,VmaStlAllocator<char>> *local_f48;
  VmaAllocator_T *local_f40;
  void *local_f38;
  undefined1 local_f30 [16];
  undefined1 local_f20;
  VmaBudget local_f18 [24];
  ulong local_f00 [77];
  VmaTotalStatistics local_c98 [2048];
  VmaDetailedStatistics local_498 [1024];
  VmaDetailedStatistics local_98 [73];
  char local_4f [10];
  char local_45 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f68 = (VmaAllocator_T *)0x0;
  if (param_1[0x20] != (VmaAllocator_T)0x0) {
    local_f68 = param_1 + 0x28;
  }
  local_f58 = (undefined1  [16])0x0;
  local_f60 = (void *)0x0;
  VmaAllocator_T::GetHeapBudgets(param_1,local_f18,0,*(uint *)(param_1 + 0x50c));
  VmaAllocator_T::CalculateStatistics(param_1,local_c98);
  local_f40 = (VmaAllocator_T *)0x0;
  if (param_1[0x20] != (VmaAllocator_T)0x0) {
    local_f40 = param_1 + 0x28;
  }
  local_f48 = (VmaVector<char,VmaStlAllocator<char>> *)&local_f68;
  local_f30 = (undefined1  [16])0x0;
  local_f38 = (void *)0x0;
  local_f20 = 0;
  VmaJsonWriter::BeginObject((VmaJsonWriter *)&local_f48,false);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"General");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  local_f20 = 0;
  VmaJsonWriter::BeginObject((VmaJsonWriter *)&local_f48,false);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"API");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  local_f20 = 0;
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Vulkan");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  local_f20 = 0;
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"apiVersion");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  local_f20 = 0;
  bVar10 = SUB81((VmaJsonWriter *)&local_f48,0);
  VmaJsonWriter::BeginValue(bVar10);
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  pcVar1 = local_4f + 1;
  local_f20 = 1;
  local_4f[1] = 0;
  pcVar11 = pcVar1;
  uVar7 = *(uint *)(param_1 + 0xd0) >> 0x16;
  do {
    pcVar11 = pcVar11 + -1;
    *pcVar11 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
    bVar3 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar3);
  VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar11);
  VmaJsonWriter::ContinueString((VmaJsonWriter *)&local_f48,".");
  local_4f[1] = 0;
  pcVar11 = pcVar1;
  uVar7 = *(uint *)(param_1 + 0xd0) >> 0xc & 0x3ff;
  do {
    pcVar11 = pcVar11 + -1;
    *pcVar11 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
    bVar3 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar3);
  VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar11);
  VmaJsonWriter::ContinueString((VmaJsonWriter *)&local_f48,".");
  local_4f[1] = 0;
  pcVar11 = pcVar1;
  uVar7 = *(uint *)(param_1 + 0xd0) & 0xfff;
  do {
    pcVar11 = pcVar11 + -1;
    *pcVar11 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
    bVar3 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar3);
  VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar11);
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  local_f20 = 0;
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"GPU");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  local_f20 = 0;
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,(char *)(param_1 + 0xe4));
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  local_f20 = 0;
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"deviceType");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  uVar7 = *(uint *)(param_1 + 0xe0);
  local_f20 = 0;
  VmaJsonWriter::BeginValue(bVar10);
  local_4f[1] = 0;
  pcVar11 = pcVar1;
  do {
    pcVar11 = pcVar11 + -1;
    *pcVar11 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
    bVar3 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar3);
  VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar11);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"maxMemoryAllocationCount");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  uVar7 = *(uint *)(param_1 + 0x21c);
  local_f20 = 0;
  VmaJsonWriter::BeginValue(bVar10);
  local_4f[1] = 0;
  pcVar11 = pcVar1;
  do {
    pcVar11 = pcVar11 + -1;
    *pcVar11 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
    bVar3 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar3);
  VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar11);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"bufferImageGranularity");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  uVar13 = *(ulong *)(param_1 + 0x228);
  local_f20 = 0;
  VmaJsonWriter::BeginValue(bVar10);
  pcVar11 = local_45 + 1;
  local_45[1] = 0;
  pcVar8 = pcVar11;
  do {
    pcVar8 = pcVar8 + -1;
    *pcVar8 = (char)uVar13 + (char)(uVar13 / 10) * -10 + '0';
    bVar3 = 9 < uVar13;
    uVar13 = uVar13 / 10;
  } while (bVar3);
  VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"nonCoherentAtomSize");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  uVar13 = *(ulong *)(param_1 + 1000);
  local_f20 = 0;
  VmaJsonWriter::BeginValue(bVar10);
  local_45[1] = 0;
  pcVar8 = pcVar11;
  do {
    pcVar8 = pcVar8 + -1;
    *pcVar8 = (char)uVar13 + (char)(uVar13 / 10) * -10 + '0';
    bVar3 = 9 < uVar13;
    uVar13 = uVar13 / 10;
  } while (bVar3);
  VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"memoryHeapCount");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  uVar7 = *(uint *)(param_1 + 0x50c);
  local_f20 = 0;
  VmaJsonWriter::BeginValue(bVar10);
  local_4f[1] = 0;
  pcVar8 = pcVar1;
  do {
    pcVar8 = pcVar8 + -1;
    *pcVar8 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
    bVar3 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar3);
  VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"memoryTypeCount");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  uVar7 = *(uint *)(param_1 + 0x408);
  local_f20 = 0;
  VmaJsonWriter::BeginValue(bVar10);
  local_4f[1] = 0;
  pcVar8 = pcVar1;
  do {
    pcVar8 = pcVar8 + -1;
    *pcVar8 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
    bVar3 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar3);
  VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
  VmaJsonWriter::EndObject((VmaJsonWriter *)&local_f48);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Total");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  local_f20 = 0;
  VmaPrintDetailedStatistics((VmaJsonWriter *)&local_f48,local_98);
  VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"MemoryInfo");
  pVVar4 = local_f48;
  lVar2 = *(long *)(local_f48 + 0x10);
  VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
  *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
  local_f20 = 0;
  VmaJsonWriter::BeginObject((VmaJsonWriter *)&local_f48,false);
  if (*(int *)(param_1 + 0x50c) != 0) {
    local_f90 = local_498;
    local_f70 = 0;
    pVVar14 = param_1 + 0x518;
    local_f98 = local_f00;
    do {
      VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Heap ");
      local_4f[1] = 0;
      pcVar8 = pcVar1;
      uVar7 = local_f70;
      do {
        pcVar8 = pcVar8 + -1;
        *pcVar8 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
        bVar3 = 9 < uVar7;
        uVar7 = uVar7 / 10;
      } while (bVar3);
      VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
      pVVar4 = local_f48;
      lVar2 = *(long *)(local_f48 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
      local_f20 = 0;
      VmaJsonWriter::BeginObject((VmaJsonWriter *)&local_f48,false);
      VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Flags");
      pVVar4 = local_f48;
      lVar2 = *(long *)(local_f48 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
      local_f20 = 0;
      VmaJsonWriter::BeginArray((VmaJsonWriter *)&local_f48,true);
      uVar7 = *(uint *)pVVar14;
      if ((uVar7 & 1) != 0) {
        VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"DEVICE_LOCAL");
        pVVar4 = local_f48;
        lVar2 = *(long *)(local_f48 + 0x10);
        VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
        *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
        uVar7 = *(uint *)pVVar14;
        local_f20 = 0;
      }
      if ((uVar7 & 2) != 0) {
        VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"MULTI_INSTANCE");
        pVVar4 = local_f48;
        lVar2 = *(long *)(local_f48 + 0x10);
        VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
        *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
        uVar7 = *(uint *)pVVar14;
        local_f20 = 0;
      }
      if ((uVar7 & 0xfffffffc) != 0) {
        VmaJsonWriter::BeginValue(bVar10);
        local_4f[1] = 0;
        pcVar8 = pcVar1;
        uVar7 = uVar7 & 0xfffffffc;
        do {
          pcVar8 = pcVar8 + -1;
          *pcVar8 = (char)uVar7 + (char)(uVar7 / 10) * -10 + '0';
          bVar3 = 9 < uVar7;
          uVar7 = uVar7 / 10;
        } while (bVar3);
        VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
      }
      VmaJsonWriter::EndArray((VmaJsonWriter *)&local_f48);
      VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Size");
      pVVar4 = local_f48;
      lVar2 = *(long *)(local_f48 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
      uVar13 = *(ulong *)(pVVar14 + -8);
      local_f20 = 0;
      VmaJsonWriter::BeginValue(bVar10);
      local_45[1] = 0;
      pcVar8 = pcVar11;
      do {
        pcVar8 = pcVar8 + -1;
        *pcVar8 = (char)uVar13 + (char)(uVar13 / 10) * -10 + '0';
        bVar3 = 9 < uVar13;
        uVar13 = uVar13 / 10;
      } while (bVar3);
      VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
      VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Budget");
      pVVar4 = local_f48;
      lVar2 = *(long *)(local_f48 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
      local_f20 = 0;
      VmaJsonWriter::BeginObject((VmaJsonWriter *)&local_f48,false);
      VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"BudgetBytes");
      pVVar4 = local_f48;
      lVar2 = *(long *)(local_f48 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
      local_f20 = 0;
      uVar13 = local_f98[1];
      VmaJsonWriter::BeginValue(bVar10);
      local_45[1] = 0;
      pcVar8 = pcVar11;
      do {
        pcVar8 = pcVar8 + -1;
        *pcVar8 = (char)uVar13 + (char)(uVar13 / 10) * -10 + '0';
        bVar3 = 9 < uVar13;
        uVar13 = uVar13 / 10;
      } while (bVar3);
      VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
      VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"UsageBytes");
      pVVar4 = local_f48;
      lVar2 = *(long *)(local_f48 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
      local_f20 = 0;
      uVar13 = *local_f98;
      VmaJsonWriter::BeginValue(bVar10);
      local_45[1] = 0;
      pcVar8 = pcVar11;
      do {
        pcVar8 = pcVar8 + -1;
        *pcVar8 = (char)uVar13 + (char)(uVar13 / 10) * -10 + '0';
        bVar3 = 9 < uVar13;
        uVar13 = uVar13 / 10;
      } while (bVar3);
      VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
      VmaJsonWriter::EndObject((VmaJsonWriter *)&local_f48);
      VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Stats");
      pVVar4 = local_f48;
      lVar2 = *(long *)(local_f48 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
      local_f20 = 0;
      VmaPrintDetailedStatistics((VmaJsonWriter *)&local_f48,local_f90);
      VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"MemoryPools");
      pVVar4 = local_f48;
      lVar2 = *(long *)(local_f48 + 0x10);
      VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
      *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
      uVar13 = 0;
      local_f20 = 0;
      VmaJsonWriter::BeginObject((VmaJsonWriter *)&local_f48,false);
      if (*(int *)(param_1 + 0x408) != 0) {
        do {
          while (*(uint *)(param_1 + uVar13 * 8 + 0x410) == local_f70) {
            uVar12 = uVar13 & 0xffffffff;
            VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Type ");
            local_4f[1] = 0;
            pcVar8 = pcVar1;
            do {
              pcVar8 = pcVar8 + -1;
              uVar7 = (uint)uVar12;
              *pcVar8 = (char)uVar12 + (char)(uVar12 / 10) * -10 + '0';
              uVar12 = uVar12 / 10;
            } while (9 < uVar7);
            VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
            pVVar4 = local_f48;
            lVar2 = *(long *)(local_f48 + 0x10);
            VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
            *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
            local_f20 = 0;
            VmaJsonWriter::BeginObject((VmaJsonWriter *)&local_f48,false);
            VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Flags");
            pVVar4 = local_f48;
            lVar2 = *(long *)(local_f48 + 0x10);
            VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
            *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
            local_f20 = 0;
            VmaJsonWriter::BeginArray((VmaJsonWriter *)&local_f48,true);
            local_fb0 = *(uint *)(param_1 + uVar13 * 8 + 0x40c);
            if ((local_fb0 & 1) != 0) {
              VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"DEVICE_LOCAL");
              pVVar4 = local_f48;
              lVar2 = *(long *)(local_f48 + 0x10);
              VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
              *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
              local_f20 = 0;
            }
            if ((local_fb0 & 2) != 0) {
              VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"HOST_VISIBLE");
              pVVar4 = local_f48;
              lVar2 = *(long *)(local_f48 + 0x10);
              VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
              *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
              local_f20 = 0;
            }
            if ((local_fb0 & 4) != 0) {
              VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"HOST_COHERENT");
              pVVar4 = local_f48;
              lVar2 = *(long *)(local_f48 + 0x10);
              VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
              *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
              local_f20 = 0;
            }
            if ((local_fb0 & 8) != 0) {
              VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"HOST_CACHED");
              pVVar4 = local_f48;
              lVar2 = *(long *)(local_f48 + 0x10);
              VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
              *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
              local_f20 = 0;
            }
            if ((local_fb0 & 0x10) != 0) {
              VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"LAZILY_ALLOCATED");
              pVVar4 = local_f48;
              lVar2 = *(long *)(local_f48 + 0x10);
              VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
              *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
              local_f20 = 0;
            }
            if ((local_fb0 & 0x20) != 0) {
              VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"PROTECTED");
              pVVar4 = local_f48;
              lVar2 = *(long *)(local_f48 + 0x10);
              VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
              *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
              local_f20 = 0;
            }
            if ((local_fb0 & 0x40) != 0) {
              VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"DEVICE_COHERENT_AMD");
              pVVar4 = local_f48;
              lVar2 = *(long *)(local_f48 + 0x10);
              VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
              *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
              local_f20 = 0;
            }
            if ((local_fb0 & 0x80) != 0) {
              VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"DEVICE_UNCACHED_AMD");
              pVVar4 = local_f48;
              lVar2 = *(long *)(local_f48 + 0x10);
              VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
              *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
              local_f20 = 0;
            }
            if ((local_fb0 & 0xffffff20) != 0) {
              local_fb0 = local_fb0 & 0xffffff20;
              VmaJsonWriter::BeginValue(bVar10);
              local_4f[1] = 0;
              pcVar8 = pcVar1;
              do {
                pcVar8 = pcVar8 + -1;
                *pcVar8 = (char)local_fb0 + (char)(local_fb0 / 10) * -10 + '0';
                bVar3 = 9 < local_fb0;
                local_fb0 = local_fb0 / 10;
              } while (bVar3);
              VmaStringBuilder::Add((VmaStringBuilder *)local_f48,pcVar8);
            }
            VmaJsonWriter::EndArray((VmaJsonWriter *)&local_f48);
            VmaJsonWriter::BeginString((VmaJsonWriter *)&local_f48,"Stats");
            pVVar4 = local_f48;
            lVar2 = *(long *)(local_f48 + 0x10);
            VmaVector<char,VmaStlAllocator<char>>::resize(local_f48,lVar2 + 1);
            lVar9 = uVar13 * 0x40;
            uVar13 = uVar13 + 1;
            *(undefined1 *)(*(long *)(pVVar4 + 8) + lVar2) = 0x22;
            local_f20 = 0;
            VmaPrintDetailedStatistics
                      ((VmaJsonWriter *)&local_f48,(VmaDetailedStatistics *)(local_c98 + lVar9));
            VmaJsonWriter::EndObject((VmaJsonWriter *)&local_f48);
            if (*(uint *)(param_1 + 0x408) <= (uint)uVar13) goto LAB_0010dff3;
          }
          uVar13 = uVar13 + 1;
        } while ((uint)uVar13 < *(uint *)(param_1 + 0x408));
      }
LAB_0010dff3:
      pVVar14 = pVVar14 + 0x10;
      VmaJsonWriter::EndObject((VmaJsonWriter *)&local_f48);
      VmaJsonWriter::EndObject((VmaJsonWriter *)&local_f48);
      local_f70 = local_f70 + 1;
      local_f90 = local_f90 + 0x40;
      local_f98 = local_f98 + 5;
    } while (local_f70 < *(uint *)(param_1 + 0x50c));
  }
  VmaJsonWriter::EndObject((VmaJsonWriter *)&local_f48);
  if (param_3 == 1) {
    VmaAllocator_T::PrintDetailedMap(param_1,(VmaJsonWriter *)&local_f48);
  }
  VmaJsonWriter::EndObject((VmaJsonWriter *)&local_f48);
  if ((local_f40 == (VmaAllocator_T *)0x0) || (*(code **)(local_f40 + 0x18) == (code *)0x0)) {
    free(local_f38);
  }
  else {
    (**(code **)(local_f40 + 0x18))(*(undefined8 *)local_f40);
  }
  pvVar6 = local_f60;
  pvVar5 = (void *)0x0;
  __n = local_f58._0_8_;
  if (param_1[0x20] == (VmaAllocator_T)0x0) {
    if (local_f60 == (void *)0x0) goto LAB_0010e0c6;
LAB_0010e519:
    pvVar5 = (void *)aligned_alloc(1,local_f58._0_8_ + 1);
  }
  else {
    if (local_f60 == (void *)0x0) goto LAB_0010e0c6;
    if (*(code **)(param_1 + 0x30) == (code *)0x0) goto LAB_0010e519;
    pvVar5 = (void *)(**(code **)(param_1 + 0x30))
                               (*(undefined8 *)(param_1 + 0x28),local_f58._0_8_ + 1,1,1);
  }
  pvVar6 = memcpy(pvVar5,pvVar6,__n);
  *(undefined1 *)((long)pvVar6 + __n) = 0;
  pvVar5 = local_f60;
LAB_0010e0c6:
  *param_2 = pvVar6;
  if ((local_f68 == (VmaAllocator_T *)0x0) || (*(code **)(local_f68 + 0x18) == (code *)0x0)) {
    free(pvVar5);
  }
  else {
    (**(code **)(local_f68 + 0x18))(*(undefined8 *)local_f68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaBlockVector::CreateBlock(unsigned long, unsigned long*) */

undefined8 __thiscall VmaBlockVector::CreateBlock(VmaBlockVector *this,ulong param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  VmaAllocator_T *this_00;
  code *pcVar4;
  long lVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  VmaDeviceMemoryBlock *this_01;
  long in_FS_OFFSET;
  VkDeviceMemory_T *local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [16];
  undefined4 local_a4;
  undefined4 local_98;
  undefined1 local_94 [16];
  undefined4 local_84;
  undefined4 local_78;
  undefined1 local_74 [12];
  int iStack_68;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *puStack_50;
  ulong uStack_48;
  uint local_40;
  undefined4 uStack_3c;
  long local_30;
  
  puStack_50 = *(undefined4 **)(this + 0x50);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = *(uint *)(this + 0x10);
  this_00 = *(VmaAllocator_T **)this;
  local_54 = 0;
  local_58 = 5;
  uStack_3c = 0;
  local_a4 = 0;
  local_b8 = 0x3b9bb460;
  local_b4 = (undefined1  [16])0x0;
  if (this_00[0xc] != (VmaAllocator_T)0x0) {
    auVar6._8_4_ = 0;
    auVar6._0_8_ = puStack_50;
    local_b4._0_12_ = auVar6 << 0x20;
    puStack_50 = &local_b8;
    local_b4._12_4_ = 2;
  }
  local_84 = 0;
  local_98 = 0x3b9e6bb1;
  local_94 = (undefined1  [16])0x0;
  if (this_00[0xd] != (VmaAllocator_T)0x0) {
    local_94._8_4_ = *(undefined4 *)(this + 0x40);
    local_94._0_8_ = puStack_50;
    local_94._12_4_ = 0;
    local_94 = local_94 << 0x20;
    puStack_50 = &local_98;
  }
  local_64 = 0;
  local_78 = 0x3b9be342;
  local_74 = SUB1612((undefined1  [16])0x0,0);
  if (*(int *)(this_00 + (ulong)local_40 * 4 + 0x1570) != 0) {
    auVar7._8_4_ = 0;
    auVar7._0_8_ = puStack_50;
    local_74 = auVar7 << 0x20;
    puStack_50 = &local_78;
  }
  iStack_68 = *(int *)(this_00 + (ulong)local_40 * 4 + 0x1570);
  local_c0 = (VkDeviceMemory_T *)0x0;
  uStack_48 = param_1;
  uVar8 = VmaAllocator_T::AllocateVulkanMemory(this_00,(VkMemoryAllocateInfo *)&local_58,&local_c0);
  if (-1 < (int)uVar8) {
    pcVar4 = *(code **)(*(long *)this + 0x30);
    if (pcVar4 == (code *)0x0) {
      this_01 = (VmaDeviceMemoryBlock *)aligned_alloc(8,0x60);
    }
    else {
      this_01 = (VmaDeviceMemoryBlock *)(*pcVar4)(*(undefined8 *)(*(long *)this + 0x28),0x60,8,1);
    }
    uVar8 = _LC3;
    *(undefined8 *)(this_01 + 0x40) = 0;
    *(undefined1 (*) [16])(this_01 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_01 + 0x48) = (undefined1  [16])0x0;
    *(undefined8 *)(this_01 + 0x10) = uVar8;
    uVar1 = *(uint *)(this + 0xb0);
    uVar2 = *(uint *)(this + 0x3c);
    *(undefined8 *)(this_01 + 0x58) = 0;
    *(undefined8 *)this_01 = 0;
    uVar3 = *(uint *)(this + 0x10);
    *(undefined8 *)(this_01 + 0x18) = 0;
    *(uint *)(this + 0xb0) = uVar1 + 1;
    VmaDeviceMemoryBlock::Init
              (this_01,*(VmaAllocator_T **)this,*(VmaPool_T **)(this + 8),uVar3,local_c0,uStack_48,
               uVar1,uVar2,*(ulong *)(this + 0x30));
    lVar5 = *(long *)(this + 0xa0);
    VmaVector<VmaDeviceMemoryBlock*,VmaStlAllocator<VmaDeviceMemoryBlock*>>::resize
              ((VmaVector<VmaDeviceMemoryBlock*,VmaStlAllocator<VmaDeviceMemoryBlock*>> *)
               (this + 0x90),lVar5 + 1);
    *(VmaDeviceMemoryBlock **)(*(long *)(this + 0x98) + lVar5 * 8) = this_01;
    if (param_2 != (ulong *)0x0) {
      *param_2 = *(long *)(this + 0xa0) - 1;
    }
    uVar8 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaBlockVector::CreateMinBlocks() */

undefined8 __thiscall VmaBlockVector::CreateMinBlocks(VmaBlockVector *this)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(long *)(this + 0x20) == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    uVar1 = CreateBlock(this,*(ulong *)(this + 0x18),(ulong *)0x0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < *(ulong *)(this + 0x20));
  return 0;
}



/* VmaAllocator_T::CreatePool(VmaPoolCreateInfo const*, VmaPool_T**) */

ulong __thiscall
VmaAllocator_T::CreatePool(VmaAllocator_T *this,VmaPoolCreateInfo *param_1,VmaPool_T **param_2)

{
  uint uVar1;
  VmaBlockVector *this_00;
  void *__ptr;
  long lVar2;
  int iVar3;
  code *pcVar4;
  VmaPool_T *pVVar5;
  long lVar6;
  pthread_rwlock_t *__rwlock;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_58 = *(ulong *)(param_1 + 0x10);
  uStack_50 = *(ulong *)(param_1 + 0x18);
  local_68 = *(undefined8 *)param_1;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x30);
  local_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  if (uStack_50 == 0) {
    uStack_50 = 0xffffffffffffffff;
  }
  else if (uStack_50 < local_58) {
    uVar7 = 0xfffffffd;
    goto LAB_0010e97f;
  }
  uVar1 = *(uint *)param_1;
  if ((*(uint *)(this + 0x408) <= uVar1) || ((*(uint *)(this + 0x1718) >> (uVar1 & 0x1f) & 1) == 0))
  {
    uVar7 = 0xfffffff8;
    goto LAB_0010e97f;
  }
  if (*(ulong *)(this + (ulong)*(uint *)(this + (ulong)uVar1 * 8 + 0x410) * 0x10 + 0x510) <
      0x40000001) {
    pcVar4 = *(code **)(this + 0x30);
    uVar7 = (*(ulong *)(this + (ulong)*(uint *)(this + (ulong)uVar1 * 8 + 0x410) * 0x10 + 0x510) >>
            3) + 0x1f & 0xffffffffffffffe0;
    if (pcVar4 == (code *)0x0) goto LAB_0010e9b9;
LAB_0010e8a9:
    pVVar5 = (VmaPool_T *)(*pcVar4)(*(undefined8 *)(this + 0x28),0x130,8,1);
  }
  else {
    pcVar4 = *(code **)(this + 0x30);
    uVar7 = *(long *)(this + 0x1558) + 0x1fU & 0xffffffffffffffe0;
    if (pcVar4 != (code *)0x0) goto LAB_0010e8a9;
LAB_0010e9b9:
    pVVar5 = (VmaPool_T *)aligned_alloc(8,0x130);
  }
  VmaPool_T::VmaPool_T(pVVar5,this,(VmaPoolCreateInfo *)&local_68,uVar7);
  lVar2 = *(long *)(pVVar5 + 0x20);
  *param_2 = pVVar5;
  if (lVar2 != 0) {
    uVar8 = 0;
    do {
      uVar7 = VmaBlockVector::CreateBlock
                        ((VmaBlockVector *)pVVar5,*(ulong *)(pVVar5 + 0x18),(ulong *)0x0);
      if ((int)uVar7 != 0) {
        this_00 = (VmaBlockVector *)*param_2;
        if (this_00 != (VmaBlockVector *)0x0) {
          lVar2 = *(long *)this_00;
          __ptr = *(void **)(this_00 + 0x118);
          if (*(char *)(lVar2 + 0x20) == '\0') {
            if (__ptr == (void *)0x0) goto LAB_0010ea88;
LAB_0010eaae:
            free(__ptr);
            VmaBlockVector::~VmaBlockVector(this_00);
          }
          else if (__ptr == (void *)0x0) {
LAB_0010ea88:
            VmaBlockVector::~VmaBlockVector(this_00);
          }
          else {
            if (*(code **)(lVar2 + 0x40) == (code *)0x0) goto LAB_0010eaae;
            (**(code **)(lVar2 + 0x40))(*(undefined8 *)(lVar2 + 0x28));
            VmaBlockVector::~VmaBlockVector(this_00);
          }
          if (*(code **)(this + 0x40) == (code *)0x0) {
            free(this_00);
            uVar7 = uVar7 & 0xffffffff;
          }
          else {
            (**(code **)(this + 0x40))(*(undefined8 *)(this + 0x28),this_00);
            uVar7 = uVar7 & 0xffffffff;
          }
        }
        *param_2 = (VmaPool_T *)0x0;
        goto LAB_0010e97f;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulong *)(pVVar5 + 0x20));
  }
  if (*this == (VmaAllocator_T)0x0) {
    __rwlock = (pthread_rwlock_t *)0x0;
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 0x15f0);
    iVar3 = pthread_rwlock_wrlock(__rwlock);
    if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
  }
  iVar3 = *(int *)(this + 0x1640);
  pVVar5 = *param_2;
  *(int *)(this + 0x1640) = iVar3 + 1;
  *(int *)(pVVar5 + 0x110) = iVar3;
  if (*(long *)(this + 0x1638) == 0) {
    *(VmaPool_T **)(this + 0x1628) = pVVar5;
    lVar6 = 1;
  }
  else {
    lVar2 = *(long *)(this + 0x1630);
    lVar6 = *(long *)(this + 0x1638) + 1;
    *(long *)(pVVar5 + 0x120) = lVar2;
    *(VmaPool_T **)(lVar2 + 0x128) = pVVar5;
  }
  *(VmaPool_T **)(this + 0x1630) = pVVar5;
  *(long *)(this + 0x1638) = lVar6;
  if (__rwlock != (pthread_rwlock_t *)0x0) {
    pthread_rwlock_unlock(__rwlock);
  }
  uVar7 = 0;
LAB_0010e97f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void __thiscall
VmaAllocator_T::vmaCreatePool(VmaAllocator_T *this,VmaPoolCreateInfo *param_1,VmaPool_T **param_2)

{
  CreatePool(this,param_1,param_2);
  return;
}



/* VmaBlockVector::Remove(VmaDeviceMemoryBlock*) */

void __thiscall VmaBlockVector::Remove(VmaBlockVector *this,VmaDeviceMemoryBlock *param_1)

{
  long *__dest;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0xa0);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      __dest = (long *)(*(long *)(this + 0x98) + uVar2 * 8);
      if ((VmaDeviceMemoryBlock *)*__dest == param_1) {
        uVar1 = uVar1 - 1;
        if (uVar2 < uVar1) {
          memmove(__dest,(void *)(*(long *)(this + 0x98) + 8 + uVar2 * 8),(uVar1 - uVar2) * 8);
        }
        VmaVector<VmaDeviceMemoryBlock*,VmaStlAllocator<VmaDeviceMemoryBlock*>>::resize
                  ((VmaVector<VmaDeviceMemoryBlock*,VmaStlAllocator<VmaDeviceMemoryBlock*>> *)
                   (this + 0x90),uVar1);
        return;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < uVar1);
  }
  return;
}



/* VmaBlockVector::Free(VmaAllocation_T*) */

void __thiscall VmaBlockVector::Free(VmaBlockVector *this,VmaAllocation_T *param_1)

{
  long *plVar1;
  int *piVar2;
  VmaAllocation_T VVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  VmaDeviceMemoryBlock *this_00;
  undefined8 uVar13;
  pthread_rwlock_t *__rwlock;
  long lVar14;
  long in_FS_OFFSET;
  VmaBudget local_68 [16];
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68[0] = (VmaBudget)0x0;
  local_68[1] = (VmaBudget)0x0;
  local_68[2] = (VmaBudget)0x0;
  local_68[3] = (VmaBudget)0x0;
  local_68[4] = (VmaBudget)0x0;
  local_68[5] = (VmaBudget)0x0;
  local_68[6] = (VmaBudget)0x0;
  local_68[7] = (VmaBudget)0x0;
  local_68[8] = (VmaBudget)0x0;
  local_68[9] = (VmaBudget)0x0;
  local_68[10] = (VmaBudget)0x0;
  local_68[0xb] = (VmaBudget)0x0;
  local_68[0xc] = (VmaBudget)0x0;
  local_68[0xd] = (VmaBudget)0x0;
  local_68[0xe] = (VmaBudget)0x0;
  local_68[0xf] = (VmaBudget)0x0;
  local_48 = 0;
  local_58 = (undefined1  [16])0x0;
  VmaAllocator_T::GetHeapBudgets
            (*(VmaAllocator_T **)this,local_68,
             *(uint *)(*(VmaAllocator_T **)this + (ulong)*(uint *)(this + 0x10) * 8 + 0x410),1);
  uVar12 = local_48;
  uVar8 = local_58._8_8_;
  if (**(char **)this == '\0') {
    this_00 = *(VmaDeviceMemoryBlock **)param_1;
    __rwlock = (pthread_rwlock_t *)0x0;
    VVar3 = param_1[0x4f];
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 0x58);
    iVar11 = pthread_rwlock_wrlock(__rwlock);
    if (iVar11 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    this_00 = *(VmaDeviceMemoryBlock **)param_1;
    VVar3 = param_1[0x4f];
  }
  if (((byte)VVar3 & 1) != 0) {
    VmaDeviceMemoryBlock::Unmap(this_00,*(VmaAllocator_T **)this,1);
  }
  lVar4 = *(long *)(this + 0xa0);
  lVar14 = 0;
  if (lVar4 != 0) {
    do {
      cVar10 = (**(code **)(*(long *)**(undefined8 **)(*(long *)(this + 0x98) + lVar14 * 8) + 0x38))
                         ();
      if (cVar10 != '\0') goto LAB_0010ec6f;
      lVar14 = lVar14 + 1;
    } while (lVar4 != lVar14);
  }
  cVar10 = '\0';
LAB_0010ec6f:
  uVar13 = 0;
  if (param_1[0x4c] == (VmaAllocation_T)0x1) {
    uVar13 = *(undefined8 *)(param_1 + 8);
  }
  (**(code **)(**(long **)this_00 + 0xa0))(*(long **)this_00,uVar13);
  VmaDeviceMemoryBlock::PostFree(this_00,*(VmaAllocator_T **)this);
  uVar5 = *(ulong *)(this + 0xa0);
  uVar6 = *(ulong *)(this + 0x20);
  cVar9 = (**(code **)(**(long **)this_00 + 0x38))();
  if (cVar9 == '\0') {
    if ((uVar6 < uVar5) && (cVar10 != '\0')) {
      this_00 = *(VmaDeviceMemoryBlock **)(*(long *)(this + 0x98) + -8 + *(long *)(this + 0xa0) * 8)
      ;
      cVar10 = (**(code **)(**(long **)this_00 + 0x38))();
      if (cVar10 != '\0') {
        VmaVector<VmaDeviceMemoryBlock*,VmaStlAllocator<VmaDeviceMemoryBlock*>>::resize
                  ((VmaVector<VmaDeviceMemoryBlock*,VmaStlAllocator<VmaDeviceMemoryBlock*>> *)
                   (this + 0x90),*(long *)(this + 0xa0) - 1);
        goto LAB_0010edf4;
      }
    }
  }
  else if (((uVar12 <= (ulong)uVar8) || (cVar10 != '\0')) && (uVar6 < uVar5)) {
    Remove(this,this_00);
LAB_0010edf4:
    IncrementallySortBlocks(this);
    if (__rwlock != (pthread_rwlock_t *)0x0) {
      pthread_rwlock_unlock(__rwlock);
    }
    VmaDeviceMemoryBlock::Destroy(this_00,*(VmaAllocator_T **)this);
    pcVar7 = *(code **)(*(long *)this + 0x40);
    if (pcVar7 == (code *)0x0) {
      free(this_00);
    }
    else {
      (*pcVar7)(*(undefined8 *)(*(long *)this + 0x28),this_00);
    }
    goto LAB_0010ece9;
  }
  IncrementallySortBlocks(this);
  if (__rwlock != (pthread_rwlock_t *)0x0) {
    pthread_rwlock_unlock(__rwlock);
  }
LAB_0010ece9:
  lVar4 = *(long *)this;
  uVar12 = (ulong)*(uint *)(lVar4 + 0x410 + (ulong)*(uint *)(this + 0x10) * 8);
  LOCK();
  plVar1 = (long *)(lVar4 + 0x1210 + (uVar12 + 0x20) * 8);
  *plVar1 = *plVar1 - *(long *)(param_1 + 0x30);
  UNLOCK();
  LOCK();
  piVar2 = (int *)(lVar4 + 0x1210 + (uVar12 + 0x10) * 4);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  LOCK();
  *(int *)(lVar4 + 0x1390) = *(int *)(lVar4 + 0x1390) + 1;
  UNLOCK();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    VmaAllocationObjectAllocator::Free
              ((VmaAllocationObjectAllocator *)(*(long *)this + 0x70),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::FreeMemory(unsigned long, VmaAllocation_T* const*) */

void __thiscall
VmaAllocator_T::FreeMemory(VmaAllocator_T *this,ulong param_1,VmaAllocation_T **param_2)

{
  VmaAllocation_T *pVVar1;
  bool bVar2;
  long lVar3;
  VmaBlockVector *this_00;
  
  if (param_1 != 0) {
    lVar3 = param_1 - 1;
    do {
      pVVar1 = param_2[lVar3];
      if (pVVar1 != (VmaAllocation_T *)0x0) {
        if (*(void **)(pVVar1 + 0x40) != (void *)0x0) {
          if ((this[0x20] == (VmaAllocator_T)0x0) || (*(code **)(this + 0x40) == (code *)0x0)) {
            free(*(void **)(pVVar1 + 0x40));
          }
          else {
            (**(code **)(this + 0x40))(*(undefined8 *)(this + 0x28));
          }
          *(undefined8 *)(pVVar1 + 0x40) = 0;
        }
        if (pVVar1[0x4c] == (VmaAllocation_T)0x1) {
          this_00 = *(VmaBlockVector **)(*(long *)pVVar1 + 8);
          if (this_00 == (VmaBlockVector *)0x0) {
            this_00 = *(VmaBlockVector **)(this + (ulong)*(uint *)(pVVar1 + 0x48) * 8 + 0x610);
          }
          VmaBlockVector::Free(this_00,pVVar1);
        }
        else if (pVVar1[0x4c] == (VmaAllocation_T)0x2) {
          FreeDedicatedMemory(this,pVVar1);
        }
      }
      bVar2 = lVar3 != 0;
      lVar3 = lVar3 + -1;
    } while (bVar2);
    return;
  }
  return;
}



void vmaFreeMemory(VmaAllocator_T *param_1,VmaAllocation_T *param_2)

{
  VmaAllocation_T *local_10 [2];
  
  if (param_2 != (VmaAllocation_T *)0x0) {
    local_10[0] = param_2;
    VmaAllocator_T::FreeMemory(param_1,1,local_10);
  }
  return;
}



void vmaFreeMemoryPages(VmaAllocator_T *param_1,ulong param_2,VmaAllocation_T **param_3)

{
  if (param_2 == 0) {
    return;
  }
  VmaAllocator_T::FreeMemory(param_1,param_2,param_3);
  return;
}



void vmaDestroyBuffer(VmaAllocator_T *param_1,long param_2,VmaAllocation_T *param_3)

{
  VmaAllocator_T *pVVar1;
  VmaAllocation_T *local_20 [2];
  
  local_20[0] = param_3;
  if (param_2 != 0) {
    pVVar1 = (VmaAllocator_T *)0x0;
    if (param_1[0x20] != (VmaAllocator_T)0x0) {
      pVVar1 = param_1 + 0x28;
    }
    (**(code **)(param_1 + 0x16c0))(*(undefined8 *)(param_1 + 0x10),param_2,pVVar1);
  }
  if (param_3 != (VmaAllocation_T *)0x0) {
    VmaAllocator_T::FreeMemory(param_1,1,local_20);
  }
  return;
}



void vmaDestroyImage(VmaAllocator_T *param_1,long param_2,VmaAllocation_T *param_3)

{
  VmaAllocator_T *pVVar1;
  VmaAllocation_T *local_20 [2];
  
  local_20[0] = param_3;
  if (param_2 != 0) {
    pVVar1 = (VmaAllocator_T *)0x0;
    if (param_1[0x20] != (VmaAllocator_T)0x0) {
      pVVar1 = param_1 + 0x28;
    }
    (**(code **)(param_1 + 0x16d0))(*(undefined8 *)(param_1 + 0x10),param_2,pVVar1);
  }
  if (param_3 != (VmaAllocation_T *)0x0) {
    VmaAllocator_T::FreeMemory(param_1,1,local_20);
  }
  return;
}



/* VmaDefragmentationContext_T::DefragmentPassEnd(VmaDefragmentationPassMoveInfo&) */

undefined8 __thiscall
VmaDefragmentationContext_T::DefragmentPassEnd
          (VmaDefragmentationContext_T *this,VmaDefragmentationPassMoveInfo *param_1)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  VmaAllocator_T *pVVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  VmaBlockVector *this_00;
  ulong uVar17;
  VmaAllocation_T *pVVar18;
  undefined8 uVar19;
  long lVar20;
  uint *puVar21;
  uint *puVar22;
  pthread_rwlock_t *ppVar23;
  char *pcVar24;
  long in_FS_OFFSET;
  ulong local_c8;
  uint local_bc;
  long local_b8;
  VmaAllocator_T *local_b0;
  long local_a8;
  long local_a0;
  uint local_98 [2];
  long local_90;
  undefined8 *local_88;
  uint *local_80;
  undefined1 local_78 [16];
  undefined8 *local_68;
  uint *local_60;
  undefined1 local_58 [16];
  long local_40;
  
  lVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = *(undefined8 **)(this + 0x20);
  local_78 = (undefined1  [16])0x0;
  local_80 = (uint *)0x0;
  local_60 = (uint *)0x0;
  local_58 = (undefined1  [16])0x0;
  local_68 = local_88;
  if (*(int *)param_1 == 0) {
    local_b0 = (VmaAllocator_T *)0x0;
    uVar17 = 0;
    uVar19 = 0;
  }
  else {
    local_b0 = (VmaAllocator_T *)0x0;
    uVar19 = 0;
LAB_0010f0b5:
    do {
      this_00 = *(VmaBlockVector **)(this + 0x58);
      local_bc = 0;
      piVar1 = (int *)(*(long *)(param_1 + 8) + lVar20 * 0x18);
      if (this_00 == (VmaBlockVector *)0x0) {
        local_bc = *(uint *)(*(long *)(piVar1 + 2) + 0x48);
        this_00 = *(VmaBlockVector **)(*(long *)(this + 0x60) + (ulong)local_bc * 8);
        iVar9 = *piVar1;
        if (iVar9 == 1) goto LAB_0010f397;
LAB_0010f0e3:
        if (iVar9 == 2) {
          pVVar18 = *(VmaAllocation_T **)(piVar1 + 2);
          ppVar23 = (pthread_rwlock_t *)(this_00 + 0x58);
          *(long *)(this + 0x88) = *(long *)(this + 0x88) - *(long *)(pVVar18 + 0x30);
          pcVar24 = *(char **)this_00;
          *(int *)(this + 0x98) = *(int *)(this + 0x98) + -1;
          if (*pcVar24 == '\0') {
            local_c8 = *(ulong *)(this_00 + 0xa0);
            local_a8 = *(long *)(**(long **)pVVar18 + 8);
          }
          else {
            do {
              iVar9 = pthread_rwlock_rdlock(ppVar23);
            } while (iVar9 == 0xb);
            if (iVar9 == 0x23) goto LAB_0010f942;
            local_c8 = *(ulong *)(this_00 + 0xa0);
            local_a8 = *(long *)(*(long *)**(undefined8 **)(piVar1 + 2) + 8);
            pthread_rwlock_unlock(ppVar23);
            pVVar18 = *(VmaAllocation_T **)(piVar1 + 2);
          }
          VmaBlockVector::Free(this_00,pVVar18);
          if (**(char **)this_00 == '\0') {
            local_b8 = *(long *)(this_00 + 0xa0);
            local_a8 = local_a8 * (local_c8 - local_b8);
LAB_0010f597:
            pVVar18 = *(VmaAllocation_T **)(piVar1 + 4);
            local_a0 = *(long *)(**(long **)pVVar18 + 8);
          }
          else {
            do {
              iVar9 = pthread_rwlock_rdlock(ppVar23);
            } while (iVar9 == 0xb);
            if (iVar9 == 0x23) goto LAB_0010f942;
            local_b8 = *(long *)(this_00 + 0xa0);
            pthread_rwlock_unlock(ppVar23);
            local_a8 = local_a8 * (local_c8 - local_b8);
            if (**(char **)this_00 == '\0') goto LAB_0010f597;
            do {
              iVar9 = pthread_rwlock_rdlock(ppVar23);
            } while (iVar9 == 0xb);
            if (iVar9 == 0x23) goto LAB_0010f942;
            local_a0 = *(long *)(*(long *)**(undefined8 **)(piVar1 + 4) + 8);
            pthread_rwlock_unlock(ppVar23);
            pVVar18 = *(VmaAllocation_T **)(piVar1 + 4);
          }
          VmaBlockVector::Free(this_00,pVVar18);
          if (**(char **)this_00 == '\0') {
            uVar17 = *(ulong *)(this_00 + 0xa0);
            local_b8 = local_a8 + (local_b8 - uVar17) * local_a0;
          }
          else {
            do {
              iVar9 = pthread_rwlock_rdlock(ppVar23);
            } while (iVar9 == 0xb);
            if (iVar9 == 0x23) goto LAB_0010f942;
            uVar17 = *(ulong *)(this_00 + 0xa0);
            local_b8 = local_a8 + (local_b8 - uVar17) * local_a0;
            pthread_rwlock_unlock(ppVar23);
          }
        }
        else {
          if (iVar9 != 0) goto LAB_0010f0f4;
          bVar8 = VmaAllocation_T::SwapBlockAllocation
                            (*(VmaAllocation_T **)(piVar1 + 2),*(VmaAllocator_T **)this_00,
                             *(VmaAllocation_T **)(piVar1 + 4));
          if (bVar8 != 0) {
            pVVar12 = *(VmaAllocator_T **)this_00;
            for (puVar21 = local_60; local_b0 = pVVar12, puVar21 != local_60 + local_58._0_8_ * 4;
                puVar21 = puVar21 + 4) {
              if (*(long *)(puVar21 + 2) == **(long **)(piVar1 + 2)) {
                *puVar21 = *puVar21 + (uint)bVar8;
                goto LAB_0010f435;
              }
            }
            local_98[0] = (uint)bVar8;
            local_90 = **(long **)(piVar1 + 2);
            VmaVector<VmaDefragmentationContext_T::FragmentedBlock,VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>>
            ::push_back((VmaVector<VmaDefragmentationContext_T::FragmentedBlock,VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>>
                         *)&local_68,(FragmentedBlock *)local_98);
          }
          pVVar12 = *(VmaAllocator_T **)this_00;
LAB_0010f435:
          ppVar23 = (pthread_rwlock_t *)(this_00 + 0x58);
          if (*pVVar12 == (VmaAllocator_T)0x0) {
            local_c8 = *(ulong *)(this_00 + 0xa0);
            pVVar18 = *(VmaAllocation_T **)(piVar1 + 4);
            local_b8 = *(long *)(**(long **)pVVar18 + 8);
          }
          else {
            do {
              iVar9 = pthread_rwlock_rdlock(ppVar23);
            } while (iVar9 == 0xb);
            if (iVar9 == 0x23) goto LAB_0010f942;
            local_c8 = *(ulong *)(this_00 + 0xa0);
            local_b8 = *(long *)(*(long *)**(undefined8 **)(piVar1 + 4) + 8);
            pthread_rwlock_unlock(ppVar23);
            pVVar18 = *(VmaAllocation_T **)(piVar1 + 4);
          }
          VmaBlockVector::Free(this_00,pVVar18);
          if (**(char **)this_00 == '\0') {
            uVar17 = *(ulong *)(this_00 + 0xa0);
          }
          else {
            do {
              iVar9 = pthread_rwlock_rdlock(ppVar23);
            } while (iVar9 == 0xb);
            if (iVar9 == 0x23) goto LAB_0010f942;
            uVar17 = *(ulong *)(this_00 + 0xa0);
            pthread_rwlock_unlock(ppVar23);
          }
        }
        if (uVar17 < local_c8) {
          *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + ((int)local_c8 - (int)uVar17);
          *(long *)(this + 0x90) = *(long *)(this + 0x90) + local_b8;
        }
        uVar19 = 5;
      }
      else {
        iVar9 = *piVar1;
        if (iVar9 != 1) goto LAB_0010f0e3;
LAB_0010f397:
        pVVar18 = *(VmaAllocation_T **)(piVar1 + 4);
        lVar14 = *(long *)(*(long *)(piVar1 + 2) + 0x30);
        *(int *)(this + 0x98) = *(int *)(this + 0x98) + -1;
        *(long *)(this + 0x88) = *(long *)(this + 0x88) - lVar14;
        VmaBlockVector::Free(this_00,pVVar18);
        for (puVar21 = local_80; puVar21 != local_80 + local_78._0_8_ * 4; puVar21 = puVar21 + 4) {
          if (*(long *)(puVar21 + 2) == **(long **)(piVar1 + 2)) goto LAB_0010f0f4;
        }
        local_98[0] = local_bc;
        local_90 = **(long **)(piVar1 + 2);
        VmaVector<VmaDefragmentationContext_T::FragmentedBlock,VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>>
        ::push_back((VmaVector<VmaDefragmentationContext_T::FragmentedBlock,VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>>
                     *)&local_88,(FragmentedBlock *)local_98);
LAB_0010f0f4:
        local_c8 = 0;
        uVar17 = 0;
      }
      if ((*(int *)(this + 0x4c) == 8) && (*(long *)(this + 0xa0) != 0)) {
        lVar14 = *(long *)(this + 0xa0) + (ulong)local_bc * 0x10;
        uVar15 = *(ulong *)(lVar14 + 8);
        if (uVar15 != 0xffffffffffffffff) {
          if (uVar15 < local_c8 - uVar17) {
            *(undefined8 *)(lVar14 + 8) = 0;
          }
          else {
            lVar10 = (uVar15 + uVar17) - local_c8;
            *(long *)(lVar14 + 8) = lVar10;
            if (lVar10 != 0) {
              lVar20 = lVar20 + 1;
              bVar8 = (**(code **)(*(long *)**(undefined8 **)
                                              (*(long *)(this_00 + 0x98) + -8 + lVar10 * 8) + 0x38))
                                ();
              *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) - (ulong)bVar8;
              if (*(uint *)param_1 <= (uint)lVar20) break;
              goto LAB_0010f0b5;
            }
          }
        }
      }
      lVar20 = lVar20 + 1;
    } while ((uint)lVar20 < *(uint *)param_1);
    uVar17 = local_78._0_8_;
  }
  puVar22 = local_80;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>>::resize
            ((VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>> *)
             (this + 0x28),0);
  uVar4 = *(undefined8 *)(this + 0x98);
  *(undefined8 *)(this + 0x98) = 0;
  *(ulong *)(this + 0x80) =
       CONCAT44((int)((ulong)uVar4 >> 0x20) + (int)((ulong)*(undefined8 *)(this + 0x80) >> 0x20),
                (int)uVar4 + (int)*(undefined8 *)(this + 0x80));
  *(long *)(this + 0x70) = *(long *)(this + 0x88) + *(long *)(this + 0x70);
  *(long *)(this + 0x78) = *(long *)(this + 0x90) + *(long *)(this + 0x78);
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  puVar21 = puVar22;
  if (uVar17 != 0) {
    puVar3 = puVar22 + uVar17 * 4;
    if ((*(int *)(this + 0x4c) == 8) && (lVar20 = *(long *)(this + 0xa0), lVar20 != 0)) {
      if ((uVar17 & 0xfffffffffffffff) != 0) {
        bVar7 = false;
        do {
          pcVar24 = (char *)(lVar20 + (ulong)*puVar22 * 0x10);
          puVar21 = local_80;
          if (*pcVar24 != '\x06') {
            puVar5 = *(undefined8 **)(*(long *)(this + 0x60) + (ulong)*puVar22 * 8);
            if (*(char *)*puVar5 == '\0') {
              lVar14 = puVar5[0x14];
              lVar20 = *(long *)(this + 0x68);
              lVar10 = lVar14 - lVar20;
              if (lVar10 != 0) {
                ppVar23 = (pthread_rwlock_t *)0x0;
                goto LAB_0010f86c;
              }
            }
            else {
              ppVar23 = (pthread_rwlock_t *)(puVar5 + 0xb);
              iVar9 = pthread_rwlock_wrlock(ppVar23);
              if (iVar9 == 0x23) {
LAB_0010f942:
                    /* WARNING: Subroutine does not return */
                std::__throw_system_error(0x23);
              }
              lVar20 = *(long *)(this + 0x68);
              lVar14 = puVar5[0x14];
              lVar10 = lVar14 - lVar20;
              if (lVar10 != 0) {
LAB_0010f86c:
                plVar2 = (long *)puVar5[0x13];
                lVar6 = *(long *)(puVar22 + 2);
                lVar13 = 0;
                plVar11 = plVar2;
                do {
                  if (lVar6 == *plVar11) {
                    *(long *)(this + 0x68) = lVar20 + 1;
                    *plVar11 = plVar2[lVar14 - (lVar20 + 1)];
                    plVar2[lVar14 - (lVar20 + 1)] = lVar6;
                    uVar17 = *(ulong *)(pcVar24 + 8);
                    if ((uVar17 != 0xffffffffffffffff) && (lVar13 + 1U < uVar17)) {
                      *(ulong *)(pcVar24 + 8) = uVar17 - 1;
                      lVar20 = *plVar11;
                      *plVar11 = plVar2[uVar17 - 1];
                      plVar2[uVar17 - 1] = lVar20;
                    }
                    bVar7 = true;
                    break;
                  }
                  lVar13 = lVar13 + 1;
                  plVar11 = plVar11 + 1;
                } while (lVar13 != lVar10);
                puVar21 = local_80;
                if (ppVar23 == (pthread_rwlock_t *)0x0) goto joined_r0x0010f807;
              }
              pthread_rwlock_unlock(ppVar23);
              puVar21 = local_80;
            }
          }
joined_r0x0010f807:
          local_80 = puVar21;
          if (puVar3 == puVar22 + 4) goto LAB_0010f8f8;
          puVar22 = puVar22 + 4;
          lVar20 = *(long *)(this + 0xa0);
        } while( true );
      }
    }
    else {
      for (; puVar22 != puVar3; puVar22 = puVar22 + 4) {
        puVar5 = *(undefined8 **)(*(long *)(this + 0x60) + (ulong)*puVar22 * 8);
        if (*(char *)*puVar5 == '\0') {
          uVar17 = *(ulong *)(this + 0x68);
          ppVar23 = (pthread_rwlock_t *)0x0;
          if (uVar17 < (ulong)puVar5[0x14]) goto LAB_0010f25a;
        }
        else {
          ppVar23 = (pthread_rwlock_t *)(puVar5 + 0xb);
          iVar9 = pthread_rwlock_wrlock(ppVar23);
          if (iVar9 == 0x23) goto LAB_0010f942;
          uVar17 = *(ulong *)(this + 0x68);
          if (uVar17 < (ulong)puVar5[0x14]) {
LAB_0010f25a:
            lVar20 = *(long *)(puVar22 + 2);
            plVar2 = (long *)(puVar5[0x13] + uVar17 * 8);
            plVar11 = plVar2;
            uVar15 = uVar17;
            do {
              if (lVar20 == *plVar11) {
                lVar14 = *plVar2;
                *(ulong *)(this + 0x68) = uVar17 + 1;
                *plVar11 = lVar14;
                *plVar2 = lVar20;
                break;
              }
              uVar15 = uVar15 + 1;
              plVar11 = plVar11 + 1;
            } while (uVar15 < (ulong)puVar5[0x14]);
            if (ppVar23 == (pthread_rwlock_t *)0x0) goto LAB_0010f2ac;
          }
          pthread_rwlock_unlock(ppVar23);
        }
LAB_0010f2ac:
        puVar21 = local_80;
      }
    }
  }
LAB_0010f2be:
  puVar3 = local_60;
  puVar16 = local_60 + local_58._0_8_ * 4;
  for (puVar22 = local_60; puVar16 != puVar22; puVar22 = puVar22 + 4) {
    if (*puVar22 != 0) {
      VmaDeviceMemoryBlock::Map
                (*(VmaDeviceMemoryBlock **)(puVar22 + 2),local_b0,*puVar22,(void **)0x0);
    }
  }
  if ((local_68 == (undefined8 *)0x0) || ((code *)local_68[3] == (code *)0x0)) {
    free(puVar3);
  }
  else {
    (*(code *)local_68[3])(*local_68,puVar3);
  }
  if ((local_88 == (undefined8 *)0x0) || ((code *)local_88[3] == (code *)0x0)) {
    free(puVar21);
  }
  else {
    (*(code *)local_88[3])(*local_88,puVar21);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010f8f8:
  if (bVar7) {
    uVar19 = 5;
  }
  goto LAB_0010f2be;
}



void vmaEndDefragmentationPass
               (undefined8 param_1,VmaDefragmentationContext_T *param_2,
               VmaDefragmentationPassMoveInfo *param_3)

{
  VmaDefragmentationContext_T::DefragmentPassEnd(param_2,param_3);
  return;
}



/* VmaBlockMetadata_TLSF::~VmaBlockMetadata_TLSF() */

void __thiscall VmaBlockMetadata_TLSF::~VmaBlockMetadata_TLSF(VmaBlockMetadata_TLSF *this)

{
  undefined8 *puVar1;
  void *__ptr;
  long lVar2;
  
  *(undefined ***)this = &PTR__VmaBlockMetadata_TLSF_00115280;
  if (*(void **)(this + 0x138) != (void *)0x0) {
    puVar1 = *(undefined8 **)(this + 0x10);
    if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
      free(*(void **)(this + 0x138));
    }
    else {
      (*(code *)puVar1[3])(*puVar1);
    }
  }
  if (*(void **)(this + 0x188) != (void *)0x0) {
    puVar1 = *(undefined8 **)(this + 0x10);
    if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
      free(*(void **)(this + 0x188));
    }
    else {
      (*(code *)puVar1[3])(*puVar1);
    }
  }
  lVar2 = *(long *)(this + 0x160);
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    __ptr = *(void **)(lVar2 * 0x10 + *(long *)(this + 0x158));
    if (__ptr != (void *)0x0) {
      puVar1 = *(undefined8 **)(this + 0x140);
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
        free(__ptr);
      }
      else {
        (*(code *)puVar1[3])(*puVar1);
      }
    }
  }
  VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>>
  ::resize((VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>>
            *)(this + 0x150),0);
  puVar1 = *(undefined8 **)(this + 0x150);
  if ((puVar1 != (undefined8 *)0x0) && ((code *)puVar1[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010fa67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[3])(*puVar1);
    return;
  }
  free(*(void **)(this + 0x158));
  return;
}



/* VmaBlockMetadata_TLSF::~VmaBlockMetadata_TLSF() */

void __thiscall VmaBlockMetadata_TLSF::~VmaBlockMetadata_TLSF(VmaBlockMetadata_TLSF *this)

{
  ~VmaBlockMetadata_TLSF(this);
  operator_delete(this,400);
  return;
}



/* VmaBlockMetadata_TLSF::Init(unsigned long) */

void __thiscall VmaBlockMetadata_TLSF::Init(VmaBlockMetadata_TLSF *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  Block *pBVar3;
  void *__s;
  VmaBlockMetadata_TLSF VVar4;
  ulong uVar5;
  uint uVar6;
  size_t __n;
  undefined8 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  *(ulong *)(this + 8) = param_1;
  if (this[0x20] == (VmaBlockMetadata_TLSF)0x0) {
    VmaBlockBufferImageGranularity::Init
              ((VmaBlockBufferImageGranularity *)(this + 0x178),
               *(VkAllocationCallbacks **)(this + 0x10),param_1);
  }
  pBVar3 = VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Alloc<>
                     ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(this + 0x140));
  *(Block **)(this + 0x170) = pBVar3;
  *(undefined1 (*) [16])(pBVar3 + 0x20) = (undefined1  [16])0x0;
  *(ulong *)(pBVar3 + 8) = param_1;
  *(undefined8 *)pBVar3 = 0;
  *(undefined1 (*) [16])(pBVar3 + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)(*(long *)(this + 0x170) + 0x20) = 0;
  if (param_1 < 0x101) {
    VVar4 = (VmaBlockMetadata_TLSF)0x2;
    iVar2 = 1;
  }
  else {
    lVar1 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar6 = (uint)lVar1 ^ 0x3f;
    VVar4 = (VmaBlockMetadata_TLSF)(0x3a - (char)uVar6);
    iVar2 = (0x38 - uVar6 & 0xff) * 0x20 + -0x1f +
            (((uint)(param_1 >> ((byte)VVar4 & 0x3f)) ^ 0x20) & 0xffff);
  }
  uVar6 = iVar2 + 4;
  if (this[0x20] != (VmaBlockMetadata_TLSF)0x0) {
    uVar6 = iVar2 + 0x20;
  }
  this[0x44] = VVar4;
  *(uint *)(this + 0x130) = uVar6;
  __n = (ulong)uVar6 << 3;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  puVar7 = (undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x50) & 0xfffffffffffffff8))
                       + 0x130U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
  }
  puVar7 = *(undefined8 **)(this + 0x10);
  if ((puVar7 == (undefined8 *)0x0) || ((code *)puVar7[1] == (code *)0x0)) {
    __s = (void *)aligned_alloc(8);
  }
  else {
    __s = (void *)(*(code *)puVar7[1])(*puVar7,__n,8,1);
    __n = (ulong)*(uint *)(this + 0x130) << 3;
  }
  *(void **)(this + 0x138) = __s;
  memset(__s,0,__n);
  return;
}



/* VmaBlockMetadata_TLSF::Alloc(VmaAllocationRequest const&, VmaSuballocationType, void*) */

void __thiscall
VmaBlockMetadata_TLSF::Alloc
          (VmaBlockMetadata_TLSF *this,undefined8 *param_1,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  VmaBlockMetadata_TLSF VVar2;
  Block *pBVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  Block *pBVar8;
  long lVar9;
  Block *pBVar10;
  ulong uVar11;
  long lVar12;
  
  pBVar3 = (Block *)*param_1;
  lVar12 = param_1[5];
  if (*(Block **)(this + 0x170) != pBVar3) {
    RemoveFreeBlock(this,pBVar3);
  }
  lVar4 = *(long *)pBVar3;
  lVar7 = lVar12 - lVar4;
  if (lVar7 == 0) {
    lVar12 = *(long *)(pBVar3 + 8);
  }
  else {
    pBVar10 = *(Block **)(pBVar3 + 0x10);
    if ((pBVar10 == *(Block **)(pBVar10 + 0x20)) || (uVar11 = *(ulong *)(pBVar10 + 8), uVar11 == 0))
    {
      pBVar8 = VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Alloc<>
                         ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(this + 0x140));
      *(Block **)(pBVar3 + 0x10) = pBVar8;
      *(Block **)(pBVar10 + 0x18) = pBVar8;
      *(Block **)(pBVar8 + 0x10) = pBVar10;
      *(Block **)(pBVar8 + 0x18) = pBVar3;
      uVar1 = *(undefined8 *)pBVar3;
      *(Block **)(pBVar8 + 0x20) = pBVar8;
      *(undefined8 *)pBVar8 = uVar1;
      *(long *)(pBVar8 + 8) = lVar7;
      InsertFreeBlock(this,pBVar8);
      lVar7 = lVar7 + *(long *)pBVar3;
    }
    else {
      iVar5 = GetListIndex(this,uVar11);
      uVar11 = uVar11 + lVar7;
      *(ulong *)(pBVar10 + 8) = uVar11;
      iVar6 = GetListIndex(this,uVar11);
      if (iVar6 == iVar5) {
        *(long *)(this + 0x38) = *(long *)(this + 0x38) + lVar7;
        lVar7 = lVar12;
      }
      else {
        lVar9 = (lVar4 - lVar12) + uVar11;
        *(long *)(pBVar10 + 8) = lVar9;
        RemoveFreeBlock(this,pBVar10);
        *(long *)(pBVar10 + 8) = lVar9 + lVar7;
        InsertFreeBlock(this,pBVar10);
        lVar7 = lVar7 + *(long *)pBVar3;
      }
    }
    *(long *)pBVar3 = lVar7;
    lVar12 = (lVar4 + *(long *)(pBVar3 + 8)) - lVar12;
    *(long *)(pBVar3 + 8) = lVar12;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar12) {
    if (*(Block **)(this + 0x170) == pBVar3) {
      pBVar10 = VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Alloc<>
                          ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(this + 0x140));
      lVar4 = *(long *)pBVar3;
      *(Block **)(this + 0x170) = pBVar10;
      *(undefined8 *)(pBVar10 + 0x28) = 0;
      uVar1 = *(undefined8 *)(this + 0x170);
      *(undefined8 *)(pBVar10 + 8) = 0;
      *(long *)pBVar10 = lVar12 + lVar4;
      *(Block **)(pBVar10 + 0x10) = pBVar3;
      *(undefined8 *)(pBVar10 + 0x18) = 0;
      *(undefined8 *)(pBVar10 + 0x20) = 0;
      *(undefined8 *)(pBVar3 + 0x18) = uVar1;
      *(Block **)(pBVar3 + 0x20) = pBVar3;
    }
  }
  else {
    pBVar10 = VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Alloc<>
                        ((VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *)(this + 0x140));
    uVar1 = *(undefined8 *)(pBVar3 + 0x18);
    *(long *)(pBVar10 + 8) = *(long *)(pBVar3 + 8) - lVar4;
    lVar12 = *(long *)pBVar3;
    *(Block **)(pBVar10 + 0x10) = pBVar3;
    *(undefined8 *)(pBVar10 + 0x18) = uVar1;
    *(long *)pBVar10 = lVar12 + lVar4;
    *(Block **)(pBVar3 + 0x18) = pBVar10;
    *(long *)(pBVar3 + 8) = lVar4;
    if (*(Block **)(this + 0x170) != pBVar3) {
      *(Block **)(*(long *)(pBVar10 + 0x18) + 0x10) = pBVar10;
      *(Block **)(pBVar10 + 0x20) = pBVar10;
      InsertFreeBlock(this,pBVar10);
      VVar2 = this[0x20];
      *(undefined8 *)(pBVar3 + 0x28) = param_4;
      goto joined_r0x0010fd76;
    }
    *(Block **)(this + 0x170) = pBVar10;
    *(undefined1 (*) [16])(pBVar10 + 0x20) = (undefined1  [16])0x0;
    *(undefined8 *)(*(long *)(this + 0x170) + 0x20) = 0;
    *(Block **)(pBVar3 + 0x20) = pBVar3;
  }
  VVar2 = this[0x20];
  *(undefined8 *)(pBVar3 + 0x28) = param_4;
joined_r0x0010fd76:
  if (VVar2 == (VmaBlockMetadata_TLSF)0x0) {
    VmaBlockBufferImageGranularity::AllocPages
              ((VmaBlockBufferImageGranularity *)(this + 0x178),*(uchar *)(param_1 + 4),
               *(ulong *)pBVar3,*(ulong *)(pBVar3 + 8));
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return;
}



/* VmaAllocator_T::~VmaAllocator_T() */

void __thiscall VmaAllocator_T::~VmaAllocator_T(VmaAllocator_T *this)

{
  VmaBlockVector *this_00;
  void *__ptr;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)*(uint *)(this + 0x408);
  do {
    while( true ) {
      if (uVar2 == 0) {
        lVar3 = *(long *)(this + 0xb8);
        while (lVar3 != 0) {
          lVar3 = lVar3 + -1;
          __ptr = *(void **)(lVar3 * 0x10 + *(long *)(this + 0xb0));
          if (__ptr != (void *)0x0) {
            puVar1 = *(undefined8 **)(this + 0x98);
            if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
              free(__ptr);
            }
            else {
              (*(code *)puVar1[3])(*puVar1);
            }
          }
        }
        VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>>
        ::resize((VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>>
                  *)(this + 0xa8),0);
        puVar1 = *(undefined8 **)(this + 0xa8);
        if ((puVar1 != (undefined8 *)0x0) && ((code *)puVar1[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010ffb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)puVar1[3])(*puVar1);
          return;
        }
        free(*(void **)(this + 0xb0));
        return;
      }
      this_00 = *(VmaBlockVector **)(this + uVar2 * 8 + 0x608);
      if (this_00 != (VmaBlockVector *)0x0) break;
LAB_0010fef9:
      uVar2 = uVar2 - 1;
    }
    VmaBlockVector::~VmaBlockVector(this_00);
    if (*(code **)(this + 0x40) != (code *)0x0) {
      (**(code **)(this + 0x40))(*(undefined8 *)(this + 0x28));
      goto LAB_0010fef9;
    }
    free(this_00);
    uVar2 = uVar2 - 1;
  } while( true );
}



void vmaDestroyAllocator(VmaAllocator_T *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == (VmaAllocator_T *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  VmaAllocator_T::~VmaAllocator_T(param_1);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010ffff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  free(param_1);
  return;
}



/* VmaBlockVector::CommitAllocationRequest(VmaAllocationRequest&, VmaDeviceMemoryBlock*, unsigned
   long, unsigned int, void*, VmaSuballocationType, VmaAllocation_T**) */

int __thiscall
VmaBlockVector::CommitAllocationRequest
          (VmaBlockVector *this,undefined8 *param_1,VmaDeviceMemoryBlock *param_2,undefined8 param_3
          ,uint param_4,char *param_5,undefined4 param_7,long *param_8)

{
  pthread_mutex_t *__mutex;
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  VmaAllocation_T *pVVar8;
  ulong uVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_41 = (param_4 & 0xc00) != 0;
  VmaDeviceMemoryBlock::PostAlloc(param_2,*(VmaAllocator_T **)this);
  if ((param_4 & 4) != 0) {
    iVar7 = VmaDeviceMemoryBlock::Map(param_2,*(VmaAllocator_T **)this,1,(void **)0x0);
    if (iVar7 != 0) goto LAB_00110195;
  }
  lVar10 = *(long *)this;
  __mutex = (pthread_mutex_t *)(lVar10 + 0x70);
  iVar7 = pthread_mutex_lock(__mutex);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  pVVar8 = VmaPoolAllocator<VmaAllocation_T>::Alloc<bool_const&>
                     ((VmaPoolAllocator<VmaAllocation_T> *)(lVar10 + 0x98),&local_41);
  pthread_mutex_unlock(__mutex);
  plVar4 = *(long **)param_2;
  lVar10 = *plVar4;
  *param_8 = (long)pVVar8;
  (**(code **)(lVar10 + 0x98))(plVar4,param_1,param_7);
  lVar10 = param_1[1];
  puVar5 = (undefined8 *)*param_8;
  uVar3 = *(undefined4 *)(this + 0x10);
  uVar2 = *param_1;
  *(undefined1 *)((long)puVar5 + 0x4c) = 1;
  *(undefined4 *)(puVar5 + 9) = uVar3;
  puVar5[5] = param_3;
  puVar5[6] = lVar10;
  if ((param_4 & 4) != 0) {
    *(byte *)((long)puVar5 + 0x4f) = *(byte *)((long)puVar5 + 0x4f) | 1;
  }
  *puVar5 = param_2;
  puVar5[1] = uVar2;
  *(undefined1 *)((long)puVar5 + 0x4d) = (undefined1)param_7;
  if ((param_4 & 0x20) == 0) {
    *(char **)(*param_8 + 0x38) = param_5;
  }
  else {
    VmaAllocation_T::SetName((VmaAllocation_T *)*param_8,*(VmaAllocator_T **)this,param_5);
    lVar10 = param_1[1];
  }
  lVar6 = *(long *)this;
  uVar9 = (ulong)*(uint *)(lVar6 + 0x410 + (ulong)*(uint *)(this + 0x10) * 8);
  LOCK();
  plVar4 = (long *)(lVar6 + 0x1210 + (uVar9 + 0x20) * 8);
  *plVar4 = *plVar4 + lVar10;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(lVar6 + 0x1210 + (uVar9 + 0x10) * 4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  LOCK();
  *(int *)(lVar6 + 0x1390) = *(int *)(lVar6 + 0x1390) + 1;
  UNLOCK();
  iVar7 = 0;
LAB_00110195:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaBlockVector::AllocateFromBlock(VmaDeviceMemoryBlock*, unsigned long, unsigned long, unsigned
   int, void*, VmaSuballocationType, unsigned int, VmaAllocation_T**) */

undefined8 __thiscall
VmaBlockVector::AllocateFromBlock
          (VmaBlockVector *this,undefined8 *param_1,undefined8 param_2,undefined8 param_3,
          uint param_4,undefined8 param_5,undefined4 param_7,undefined4 param_8,undefined8 param_9)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  cVar1 = (**(code **)(*(long *)*param_1 + 0x88))
                    ((long *)*param_1,param_2,param_3,param_4 >> 6 & 1,param_7,param_8,local_78);
  if (cVar1 == '\0') {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = CommitAllocationRequest(this,local_78,param_1,param_3,param_4,param_5,param_7,param_9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaBlockVector::AllocatePage(unsigned long, unsigned long, VmaAllocationCreateInfo const&,
   VmaSuballocationType, VmaAllocation_T**) */

undefined8 __thiscall
VmaBlockVector::AllocatePage
          (VmaBlockVector *this,ulong param_1,undefined8 param_2,uint *param_3,undefined4 param_5,
          undefined8 param_6)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  bool local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  
  uVar18 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  VmaAllocator_T::GetHeapBudgets
            (*(VmaAllocator_T **)this,(VmaBudget *)local_68,
             *(uint *)(*(VmaAllocator_T **)this + (ulong)*(uint *)(this + 0x10) * 8 + 0x410),1);
  uVar17 = *param_3;
  uVar9 = 0;
  if ((ulong)local_58._8_8_ < local_48) {
    uVar9 = local_48 - local_58._8_8_;
  }
  bVar19 = this[0x38] != (VmaBlockVector)0x0;
  bVar20 = (uVar17 & 2) != 0;
  local_78 = false;
  if (((uVar17 & 2) == 0) && (*(ulong *)(this + 0xa0) < *(ulong *)(this + 0x28))) {
    local_78 = param_1 <= uVar9 || (bVar19 || bVar20);
  }
  uVar7 = uVar17 & 0x70000;
  if ((uVar18 & 0x40) == 0) {
    if (param_1 <= *(ulong *)(this + 0x18)) {
      lVar14 = *(long *)(this + 0xa0);
      if (*(int *)(this + 0x3c) == 4) goto LAB_001103f3;
      if (uVar7 == 0x20000) {
        do {
          lVar14 = lVar14 + -1;
          if (lVar14 == -1) goto LAB_001103fc;
          iVar8 = AllocateFromBlock(this,*(undefined8 *)(*(long *)(this + 0x98) + lVar14 * 8),
                                    param_1,param_2,*param_3,*(undefined8 *)(param_3 + 8),param_5,
                                    0x20000,param_6);
        } while (iVar8 != 0);
LAB_00110572:
        IncrementallySortBlocks(this);
        uVar11 = 0;
        goto LAB_00110495;
      }
      if ((*(byte *)(*(long *)this + 0x40c + (ulong)*(uint *)(this + 0x10) * 8) & 2) == 0) {
        uVar13 = 0;
        if (lVar14 != 0) {
          while (iVar8 = AllocateFromBlock(this,*(undefined8 *)(*(long *)(this + 0x98) + uVar13 * 8)
                                           ,param_1,param_2,uVar17,*(undefined8 *)(param_3 + 8),
                                           param_5,uVar7,param_6), iVar8 != 0) {
            uVar13 = uVar13 + 1;
            if (*(ulong *)(this + 0xa0) <= uVar13) goto LAB_001103fc;
            uVar17 = *param_3;
          }
          goto LAB_00110572;
        }
      }
      else {
        if (lVar14 == 0) goto LAB_0011079a;
        bVar6 = false;
        do {
          uVar13 = 0;
          do {
            lVar14 = *(long *)(*(long *)(this + 0x98) + uVar13 * 8);
            if ((((*(long *)(lVar14 + 0x58) != 0) == ((uVar17 & 0xc00) != 0)) == (bool)(bVar6 ^ 1U))
               && (iVar8 = AllocateFromBlock(this,lVar14,param_1,param_2,*param_3,
                                             *(undefined8 *)(param_3 + 8),param_5,uVar7,param_6),
                  iVar8 == 0)) goto LAB_00110572;
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(ulong *)(this + 0xa0));
          if (bVar6) break;
LAB_0011079a:
          bVar6 = true;
        } while (*(long *)(this + 0xa0) != 0);
      }
LAB_001103fc:
      if (local_78 == false) goto LAB_00110490;
      uVar13 = *(ulong *)(this + 0x18);
      cVar16 = bVar19 || bVar20;
      if (this[0x38] == (VmaBlockVector)0x0) {
        uVar10 = CalcMaxBlockSize(this);
        uVar12 = uVar13 >> 1;
        if ((uVar10 < uVar12) && (uVar1 = param_1 * 2, uVar1 <= uVar12)) {
          uVar15 = uVar13 >> 2;
          if ((uVar10 < uVar15) && (uVar1 <= uVar15)) {
            uVar13 = uVar13 >> 3;
            if ((uVar13 <= uVar10) || (uVar13 < uVar1)) {
              uVar18 = 2;
              uVar12 = uVar15;
              goto LAB_001108df;
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_68._8_8_;
            local_68 = auVar2 << 0x40;
            if ((uVar9 < uVar13) && (cVar16 == '\0')) goto LAB_00110490;
            iVar8 = CreateBlock(this,uVar13,(ulong *)local_68);
            goto LAB_00110810;
          }
          uVar18 = 1;
LAB_001108df:
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_68._8_8_;
          local_68 = auVar5 << 0x40;
          if ((uVar12 <= uVar9) || (uVar13 = uVar12, cVar16 != '\0')) goto LAB_001105eb;
        }
        else {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = local_68._8_8_;
          local_68 = auVar4 << 0x40;
          if ((uVar13 <= uVar9) || (cVar16 != '\0')) goto LAB_001105e9;
          uVar18 = 0;
        }
LAB_00110620:
        uVar13 = uVar13 >> 1;
        if (uVar13 < param_1) goto LAB_00110490;
        do {
          uVar18 = uVar18 + 1;
          if ((uVar13 <= uVar9) || (iVar8 = -2, bVar19 = local_78, cVar16 != '\0')) {
            uVar12 = CreateBlock(this,uVar13,(ulong *)local_68);
            iVar8 = (int)uVar12;
            bVar19 = (bool)((byte)(uVar12 >> 0x1f) & 1);
          }
        } while (((uVar18 < 3) && (bVar19 != false)) && (uVar13 = uVar13 >> 1, param_1 <= uVar13));
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_68._8_8_;
        local_68 = auVar3 << 0x40;
        if ((uVar9 < uVar13) && (!bVar19 && !bVar20)) goto LAB_00110490;
LAB_001105e9:
        uVar18 = 0;
        uVar12 = uVar13;
LAB_001105eb:
        iVar8 = CreateBlock(this,uVar12,(ulong *)local_68);
        if ((this[0x38] == (VmaBlockVector)0x0) && (uVar13 = uVar12, iVar8 < 0)) goto LAB_00110620;
      }
LAB_00110810:
      if (iVar8 == 0) {
        iVar8 = AllocateFromBlock(this,*(undefined8 *)(*(long *)(this + 0x98) + local_68._0_8_ * 8),
                                  param_1,param_2,*param_3,*(undefined8 *)(param_3 + 8),param_5,
                                  uVar7,param_6);
        if (iVar8 == 0) {
          IncrementallySortBlocks(this);
          uVar11 = 0;
          goto LAB_00110495;
        }
      }
    }
  }
  else {
    if ((*(int *)(this + 0x3c) != 4) || (1 < *(ulong *)(this + 0x28))) {
      uVar11 = 0xfffffff8;
      goto LAB_00110495;
    }
    if (param_1 <= *(ulong *)(this + 0x18)) {
      lVar14 = *(long *)(this + 0xa0);
LAB_001103f3:
      if ((lVar14 == 0) ||
         (iVar8 = AllocateFromBlock(this,*(undefined8 *)(*(long *)(this + 0x98) + -8 + lVar14 * 8),
                                    param_1,param_2,uVar17,*(undefined8 *)(param_3 + 8),param_5,
                                    uVar7,param_6), iVar8 != 0)) goto LAB_001103fc;
      goto LAB_00110572;
    }
  }
LAB_00110490:
  uVar11 = 0xfffffffe;
LAB_00110495:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaBlockVector::Allocate(unsigned long, unsigned long, VmaAllocationCreateInfo const&,
   VmaSuballocationType, unsigned long, VmaAllocation_T**) */

int __thiscall
VmaBlockVector::Allocate
          (VmaBlockVector *this,undefined8 param_1,ulong param_2,undefined8 param_3,
          undefined4 param_5,ulong param_6,void *param_7)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  pthread_rwlock_t *__rwlock;
  
  uVar2 = *(ulong *)(this + 0x48);
  if (*(ulong *)(this + 0x48) <= param_2) {
    uVar2 = param_2;
  }
  if (**(char **)this == '\0') {
    __rwlock = (pthread_rwlock_t *)0x0;
    if (param_6 == 0) {
      return 0;
    }
  }
  else {
    __rwlock = (pthread_rwlock_t *)(this + 0x58);
    iVar1 = pthread_rwlock_wrlock(__rwlock);
    if (iVar1 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    if (param_6 == 0) goto LAB_00110a5a;
  }
  uVar4 = 0;
  pvVar3 = param_7;
  do {
    iVar1 = AllocatePage(this,param_1,uVar2,param_3,param_5,pvVar3);
    if (iVar1 != 0) {
      if (__rwlock != (pthread_rwlock_t *)0x0) {
        pthread_rwlock_unlock(__rwlock);
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        Free(this,*(VmaAllocation_T **)((long)param_7 + uVar4 * 8));
      }
      memset(param_7,0,param_6 * 8);
      return iVar1;
    }
    uVar4 = uVar4 + 1;
    pvVar3 = (void *)((long)pvVar3 + 8);
  } while (uVar4 < param_6);
  if (__rwlock == (pthread_rwlock_t *)0x0) {
    return 0;
  }
LAB_00110a5a:
  pthread_rwlock_unlock(__rwlock);
  return 0;
}



/* VmaDefragmentationContext_T::AllocInOtherBlock(unsigned long, unsigned long,
   VmaDefragmentationContext_T::MoveAllocationData&, VmaBlockVector&) */

bool __thiscall
VmaDefragmentationContext_T::AllocInOtherBlock
          (VmaDefragmentationContext_T *this,ulong param_1,ulong param_2,MoveAllocationData *param_3
          ,VmaBlockVector *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  
  if (param_2 <= param_1) {
    return false;
  }
  while( true ) {
    puVar1 = *(undefined8 **)(*(long *)(param_4 + 0x98) + param_1 * 8);
    uVar7 = (**(code **)(*(long *)*puVar1 + 0x30))();
    if ((*(ulong *)param_3 <= uVar7) &&
       (iVar6 = VmaBlockVector::AllocateFromBlock
                          (param_4,puVar1,*(ulong *)param_3,*(undefined8 *)(param_3 + 8),
                           *(undefined4 *)(param_3 + 0x14),this,*(undefined4 *)(param_3 + 0x10),0,
                           param_3 + 0x28), iVar6 == 0)) break;
    param_1 = param_1 + 1;
    if (param_2 == param_1) {
      return false;
    }
  }
  lVar2 = *(long *)(this + 0x38);
  VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>>::resize
            ((VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>> *)
             (this + 0x28),lVar2 + 1);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  lVar3 = *(long *)(this + 0x88);
  lVar4 = *(long *)param_3;
  puVar1 = (undefined8 *)(*(long *)(this + 0x30) + lVar2 * 0x18);
  *puVar1 = *(undefined8 *)(param_3 + 0x18);
  puVar1[1] = uVar5;
  puVar1[2] = *(undefined8 *)(param_3 + 0x28);
  iVar6 = *(int *)(this + 0x98);
  *(long *)(this + 0x88) = lVar3 + lVar4;
  *(uint *)(this + 0x98) = iVar6 + 1U;
  if (*(uint *)(this + 8) <= iVar6 + 1U) {
    return true;
  }
  return *(ulong *)this <= (ulong)(lVar3 + lVar4);
}



/* VmaDefragmentationContext_T::ComputeDefragmentation_Fast(VmaBlockVector&) */

undefined8 __thiscall
VmaDefragmentationContext_T::ComputeDefragmentation_Fast
          (VmaDefragmentationContext_T *this,VmaBlockVector *param_1)

{
  VmaBlockMetadata *pVVar1;
  char cVar2;
  int iVar3;
  VmaAllocHandle_T *pVVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  VmaDefragmentationContext_T aVStack_78 [32];
  long local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(long *)(param_1 + 0xa0) - 1;
  if (*(ulong *)(this + 0x68) < uVar6) {
    do {
      pVVar1 = (VmaBlockMetadata *)**(undefined8 **)(*(long *)(param_1 + 0x98) + uVar6 * 8);
      for (pVVar4 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar1 + 0x58))(pVVar1);
          pVVar4 != (VmaAllocHandle_T *)0x0;
          pVVar4 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar1 + 0x60))(pVVar1,pVVar4)) {
        GetMoveData(aVStack_78,pVVar4,pVVar1);
        if (((this != *(VmaDefragmentationContext_T **)(local_58 + 0x38)) &&
            (iVar3 = CheckCounters(this,*(ulong *)(local_58 + 0x30)), iVar3 != 1)) &&
           ((iVar3 == 2 ||
            (cVar2 = AllocInOtherBlock(this,0,uVar6,(MoveAllocationData *)aVStack_78,param_1),
            cVar2 != '\0')))) {
          uVar5 = 1;
          goto LAB_00110c6d;
        }
      }
      uVar6 = uVar6 - 1;
    } while (*(ulong *)(this + 0x68) < uVar6);
  }
  uVar5 = 0;
LAB_00110c6d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaDefragmentationContext_T::MoveDataToFreeBlocks(VmaSuballocationType, VmaBlockVector&, unsigned
   long, bool&, bool&, bool&) */

bool __thiscall
VmaDefragmentationContext_T::MoveDataToFreeBlocks
          (VmaDefragmentationContext_T *this,uint param_2,VmaBlockVector *param_3,ulong param_4,
          undefined1 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  uint uVar1;
  long lVar2;
  VmaBlockMetadata *pVVar3;
  char cVar4;
  int iVar5;
  VmaAllocHandle_T *pVVar6;
  uint uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  VmaDefragmentationContext_T local_78 [16];
  uint local_68;
  long local_58;
  long local_40;
  
  lVar2 = *(long *)(this + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
LAB_00110e38:
    bVar9 = true;
  }
  else {
    uVar8 = param_4;
    do {
      uVar8 = uVar8 - 1;
      pVVar3 = (VmaBlockMetadata *)**(undefined8 **)(*(long *)(param_3 + 0x98) + uVar8 * 8);
      for (pVVar6 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar3 + 0x58))(pVVar3);
          pVVar6 != (VmaAllocHandle_T *)0x0;
          pVVar6 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar3 + 0x60))(pVVar3,pVVar6)) {
        GetMoveData(local_78,pVVar6,pVVar3);
        if ((this == *(VmaDefragmentationContext_T **)(local_58 + 0x38)) ||
           (iVar5 = CheckCounters(this,*(ulong *)(local_58 + 0x30)), iVar5 == 1)) goto LAB_00110e00;
        if (iVar5 == 2) goto LAB_00110e38;
        uVar7 = param_2;
        uVar1 = local_68;
        if ((int)param_2 < (int)local_68) {
          uVar7 = local_68;
          uVar1 = param_2;
        }
        switch(uVar1) {
        case 0:
        case 5:
          goto switchD_00110d8a_caseD_0;
        case 2:
          if ((uVar7 - 3 & 0xfffffffd) != 0) goto switchD_00110d8a_caseD_0;
          break;
        case 3:
          if (2 < uVar7 - 3) goto switchD_00110d8a_caseD_0;
          goto joined_r0x00110eaf;
        case 4:
          if (uVar7 == 5) goto joined_r0x00110eaf;
switchD_00110d8a_caseD_0:
          cVar4 = AllocInOtherBlock(this,param_4,*(ulong *)(param_3 + 0xa0),
                                    (MoveAllocationData *)local_78,param_3);
          if (cVar4 != '\0') {
            bVar9 = false;
            goto LAB_00110e3d;
          }
        }
joined_r0x00110eaf:
        if ((((int)local_68 < 6) && (local_68 != 0)) && (local_68 != 5)) {
          if ((int)local_68 < 3) {
            if ((local_68 & 0xfffffffd) == 0) goto LAB_00110e89;
          }
          else if (local_68 != 3) {
LAB_00110e89:
            *param_6 = 1;
            goto LAB_00110e00;
          }
          *param_7 = 1;
        }
        else {
          *param_5 = 1;
        }
LAB_00110e00:
      }
    } while (uVar8 != 0);
    bVar9 = *(long *)(this + 0x38) == lVar2;
  }
LAB_00110e3d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}



/* VmaDefragmentationContext_T::ReallocWithinBlock(VmaBlockVector&, VmaDeviceMemoryBlock*) */

undefined8 __thiscall
VmaDefragmentationContext_T::ReallocWithinBlock
          (VmaDefragmentationContext_T *this,VmaBlockVector *param_1,VmaDeviceMemoryBlock *param_2)

{
  undefined8 *puVar1;
  VmaBlockMetadata *pVVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  VmaAllocHandle_T *pVVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  ulong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pVVar2 = *(VmaBlockMetadata **)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pVVar7 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar2 + 0x58))(pVVar2);
  if (pVVar7 != (VmaAllocHandle_T *)0x0) {
    do {
      GetMoveData((VmaDefragmentationContext_T *)&local_a8,pVVar7,pVVar2);
      puVar1 = puStack_88;
      if ((this != (VmaDefragmentationContext_T *)puStack_88[7]) &&
         (iVar6 = CheckCounters(this,puStack_88[6]), iVar6 != 1)) {
        if (iVar6 == 2) {
LAB_001110c0:
          uVar10 = 1;
          goto LAB_001110c5;
        }
        if (((*(char *)((long)puVar1 + 0x4c) == '\x01') &&
            (uVar8 = (**(code **)(**(long **)*puVar1 + 0x48))(*(long **)*puVar1,puVar1[1]),
            uVar8 != 0)) &&
           (uVar9 = (**(code **)(*(long *)pVVar2 + 0x30))(pVVar2), uVar4 = local_98,
           uVar10 = local_a0, local_a8 <= uVar9)) {
          local_78 = (undefined1  [16])0x0;
          local_68 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          local_48 = 0;
          cVar5 = (**(code **)(*(long *)pVVar2 + 0x88))
                            (pVVar2,local_a8,local_a0,0,local_98,0x40000,local_78);
          if (cVar5 != '\0') {
            uVar9 = (**(code **)(*(long *)pVVar2 + 0x48))(pVVar2,local_78._0_8_);
            if ((uVar9 < uVar8) &&
               (iVar6 = VmaBlockVector::CommitAllocationRequest
                                  (param_1,local_78,param_2,uVar10,local_94,this,uVar4,&local_80),
               iVar6 == 0)) {
              lVar3 = *(long *)(this + 0x38);
              VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>>::resize
                        ((VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>>
                          *)(this + 0x28),lVar3 + 1);
              iVar6 = *(int *)(this + 0x98);
              puVar1 = (undefined8 *)(*(long *)(this + 0x30) + lVar3 * 0x18);
              *puVar1 = local_90;
              puVar1[1] = puStack_88;
              puVar1[2] = local_80;
              lVar3 = *(long *)(this + 0x88);
              *(uint *)(this + 0x98) = iVar6 + 1U;
              *(ulong *)(this + 0x88) = lVar3 + local_a8;
              if ((*(uint *)(this + 8) <= iVar6 + 1U) || (*(ulong *)this <= lVar3 + local_a8))
              goto LAB_001110c0;
            }
          }
        }
      }
      pVVar7 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar2 + 0x60))(pVVar2,pVVar7);
    } while (pVVar7 != (VmaAllocHandle_T *)0x0);
  }
  uVar10 = 0;
LAB_001110c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* VmaDefragmentationContext_T::ComputeDefragmentation_Balanced(VmaBlockVector&, unsigned long,
   bool) */

undefined8 __thiscall
VmaDefragmentationContext_T::ComputeDefragmentation_Balanced
          (VmaDefragmentationContext_T *this,VmaBlockVector *param_1,ulong param_2,bool param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  VmaBlockMetadata *pVVar5;
  long lVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  StateBalanced *pSVar10;
  VmaAllocHandle_T *pVVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  ulong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  do {
    local_40 = *(long *)(in_FS_OFFSET + 0x28);
    pSVar10 = (StateBalanced *)(param_2 * 0x10 + *(long *)(this + 0xa0));
    if ((param_3 != false) && (*(long *)(pSVar10 + 8) == -1)) {
      UpdateVectorStatistics(this,param_1,pSVar10);
    }
    uVar2 = *(ulong *)pSVar10;
    lVar3 = *(long *)(this + 0x38);
    uVar17 = *(long *)(param_1 + 0xa0) - 1;
    if (*(ulong *)(this + 0x68) < uVar17) {
      do {
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x98) + uVar17 * 8);
        pVVar5 = (VmaBlockMetadata *)*puVar4;
        pVVar11 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar5 + 0x58))(pVVar5);
        uVar15 = 0;
        while (pVVar11 != (VmaAllocHandle_T *)0x0) {
          GetMoveData((VmaDefragmentationContext_T *)&local_a8,pVVar11,pVVar5);
          uVar12 = uVar15;
          if ((this != (VmaDefragmentationContext_T *)puStack_88[7]) &&
             (iVar9 = CheckCounters(this,puStack_88[6]), iVar9 != 1)) {
            if (iVar9 != 2) {
              lVar6 = *(long *)(this + 0x38);
              cVar8 = AllocInOtherBlock(this,0,uVar17,(MoveAllocationData *)&local_a8,param_1);
              if (cVar8 == '\0') {
                uVar12 = (**(code **)(*(long *)pVVar5 + 0x68))(pVVar5,pVVar11);
                if ((((*(char *)((long)puStack_88 + 0x4c) == '\x01') &&
                     (uVar13 = (**(code **)(**(long **)*puStack_88 + 0x48))
                                         (*(long **)*puStack_88,puStack_88[1]),
                     *(long *)(this + 0x38) == lVar6)) && (uVar13 != 0)) &&
                   (uVar14 = (**(code **)(*(long *)pVVar5 + 0x30))(pVVar5), uVar7 = local_98,
                   uVar16 = local_a0, local_a8 <= uVar14)) {
                  if (uVar15 <= uVar12) {
                    uVar15 = uVar12;
                  }
                  if (((uVar2 >> 1 <= uVar15) || (local_a8 <= *(ulong *)pSVar10)) ||
                     (local_a8 <= *(ulong *)(pSVar10 + 8))) {
                    local_78 = (undefined1  [16])0x0;
                    local_68 = (undefined1  [16])0x0;
                    local_58 = (undefined1  [16])0x0;
                    local_48 = 0;
                    cVar8 = (**(code **)(*(long *)pVVar5 + 0x88))
                                      (pVVar5,local_a8,local_a0,0,local_98,0x40000,local_78);
                    if (cVar8 != '\0') {
                      uVar15 = (**(code **)(*(long *)pVVar5 + 0x48))(pVVar5,local_78._0_8_);
                      if ((uVar15 < uVar13) &&
                         (iVar9 = VmaBlockVector::CommitAllocationRequest
                                            (param_1,local_78,puVar4,uVar16,local_94,this,uVar7,
                                             &local_80), iVar9 == 0)) {
                        lVar6 = *(long *)(this + 0x38);
                        VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>>::
                        resize((VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>>
                                *)(this + 0x28),lVar6 + 1);
                        iVar9 = *(int *)(this + 0x98);
                        puVar1 = (undefined8 *)(*(long *)(this + 0x30) + lVar6 * 0x18);
                        *puVar1 = local_90;
                        puVar1[1] = puStack_88;
                        puVar1[2] = local_80;
                        lVar6 = *(long *)(this + 0x88);
                        *(uint *)(this + 0x98) = iVar9 + 1U;
                        *(ulong *)(this + 0x88) = lVar6 + local_a8;
                        if ((*(uint *)(this + 8) <= iVar9 + 1U) ||
                           (*(ulong *)this <= lVar6 + local_a8)) goto LAB_00111470;
                      }
                    }
                  }
                }
                goto LAB_0011122c;
              }
            }
LAB_00111470:
            uVar16 = 1;
            goto LAB_00111475;
          }
LAB_0011122c:
          pVVar11 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar5 + 0x60))(pVVar5,pVVar11);
          uVar15 = uVar12;
        }
        uVar17 = uVar17 - 1;
      } while (*(ulong *)(this + 0x68) < uVar17);
      param_3 = (bool)(*(long *)(this + 0x38) != lVar3 | param_3);
    }
    uVar16 = 0;
    if (param_3 != false) {
LAB_00111475:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar16;
      }
LAB_001114da:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *(undefined8 *)(pSVar10 + 8) = 0xffffffffffffffff;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001114da;
    param_3 = false;
  } while( true );
}



/* VmaDefragmentationContext_T::ComputeDefragmentation_Full(VmaBlockVector&) */

undefined8 __thiscall
VmaDefragmentationContext_T::ComputeDefragmentation_Full
          (VmaDefragmentationContext_T *this,VmaBlockVector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  VmaBlockMetadata *pVVar3;
  long lVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  VmaAllocHandle_T *pVVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  ulong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = *(long *)(param_1 + 0xa0) - 1;
  if (*(ulong *)(this + 0x68) < uVar12) {
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x98) + uVar12 * 8);
      pVVar3 = (VmaBlockMetadata *)*puVar2;
      for (pVVar8 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar3 + 0x58))(pVVar3);
          pVVar8 != (VmaAllocHandle_T *)0x0;
          pVVar8 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar3 + 0x60))(pVVar3,pVVar8)) {
        GetMoveData((VmaDefragmentationContext_T *)&local_a8,pVVar8,pVVar3);
        if (((VmaDefragmentationContext_T *)puStack_88[7] != this) &&
           (iVar7 = CheckCounters(this,puStack_88[6]), iVar7 != 1)) {
          if (iVar7 != 2) {
            lVar4 = *(long *)(this + 0x38);
            cVar6 = AllocInOtherBlock(this,0,uVar12,(MoveAllocationData *)&local_a8,param_1);
            if (cVar6 == '\0') {
              if ((((*(char *)((long)puStack_88 + 0x4c) == '\x01') &&
                   (uVar9 = (**(code **)(**(long **)*puStack_88 + 0x48))
                                      (*(long **)*puStack_88,puStack_88[1]),
                   *(long *)(this + 0x38) == lVar4)) && (uVar9 != 0)) &&
                 (uVar10 = (**(code **)(*(long *)pVVar3 + 0x30))(pVVar3), uVar5 = local_98,
                 uVar11 = local_a0, local_a8 <= uVar10)) {
                local_78 = (undefined1  [16])0x0;
                local_68 = (undefined1  [16])0x0;
                local_58 = (undefined1  [16])0x0;
                local_48 = 0;
                cVar6 = (**(code **)(*(long *)pVVar3 + 0x88))
                                  (pVVar3,local_a8,local_a0,0,local_98,0x40000,local_78);
                if (cVar6 != '\0') {
                  uVar10 = (**(code **)(*(long *)pVVar3 + 0x48))(pVVar3,local_78._0_8_);
                  if ((uVar10 < uVar9) &&
                     (iVar7 = VmaBlockVector::CommitAllocationRequest
                                        (param_1,local_78,puVar2,uVar11,local_94,this,uVar5,
                                         &local_80), iVar7 == 0)) {
                    lVar4 = *(long *)(this + 0x38);
                    VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>>::
                    resize((VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>>
                            *)(this + 0x28),lVar4 + 1);
                    iVar7 = *(int *)(this + 0x98);
                    puVar1 = (undefined8 *)(*(long *)(this + 0x30) + lVar4 * 0x18);
                    *puVar1 = local_90;
                    puVar1[1] = puStack_88;
                    puVar1[2] = local_80;
                    lVar4 = *(long *)(this + 0x88);
                    *(uint *)(this + 0x98) = iVar7 + 1U;
                    *(ulong *)(this + 0x88) = lVar4 + local_a8;
                    if ((*(uint *)(this + 8) <= iVar7 + 1U) || (*(ulong *)this <= lVar4 + local_a8))
                    goto LAB_00111740;
                  }
                }
              }
              goto LAB_001115b0;
            }
          }
LAB_00111740:
          uVar11 = 1;
          goto LAB_00111745;
        }
LAB_001115b0:
      }
      uVar12 = uVar12 - 1;
    } while (*(ulong *)(this + 0x68) < uVar12);
  }
  uVar11 = 0;
LAB_00111745:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaDefragmentationContext_T::ComputeDefragmentation_Extensive(VmaBlockVector&, unsigned long) */

undefined8 __thiscall
VmaDefragmentationContext_T::ComputeDefragmentation_Extensive
          (VmaDefragmentationContext_T *this,VmaBlockVector *param_1,ulong param_2)

{
  VmaBlockMetadata *pVVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  VmaAllocHandle_T *pVVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  ulong local_98;
  char local_7b;
  char local_7a;
  char local_79;
  VmaDefragmentationContext_T local_78 [32];
  long local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x30) != 1) {
    do {
      local_7b = '\0';
      local_7a = '\0';
      pcVar8 = (char *)(*(long *)(this + 0xa0) + param_2 * 0x10);
      local_79 = '\0';
      cVar3 = *pcVar8;
      switch(cVar3) {
      case '\0':
      case '\x01':
      case '\x02':
        lVar7 = *(long *)(pcVar8 + 8);
        if (lVar7 == 0) {
          *pcVar8 = '\x06';
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00111bd5;
          goto LAB_00111b66;
        }
        if (lVar7 == -1) {
          lVar7 = *(long *)(param_1 + 0xa0);
        }
        local_98 = lVar7 - 1;
        pVVar1 = (VmaBlockMetadata *)**(undefined8 **)(*(long *)(param_1 + 0x98) + local_98 * 8);
        lVar2 = *(long *)(this + 0x38);
        pVVar5 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar1 + 0x58))(pVVar1);
        while (pVVar5 != (VmaAllocHandle_T *)0x0) {
          GetMoveData(local_78,pVVar5,pVVar1);
          iVar4 = CheckCounters(this,*(ulong *)(local_58 + 0x30));
          if (iVar4 != 1) {
            if (iVar4 == 2) goto LAB_0011188a;
            cVar3 = AllocInOtherBlock(this,0,local_98,(MoveAllocationData *)local_78,param_1);
            if (cVar3 != '\0') {
              if ((*(long *)(this + 0x38) != lVar2) &&
                 (lVar7 = (**(code **)(*(long *)pVVar1 + 0x60))(pVVar1,pVVar5), lVar7 == 0)) {
                *(ulong *)(pcVar8 + 8) = local_98;
              }
              goto LAB_0011188a;
            }
          }
          pVVar5 = (VmaAllocHandle_T *)(**(code **)(*(long *)pVVar1 + 0x60))(pVVar1);
        }
        if (*(long *)(this + 0x38) == lVar2) {
          if ((local_98 == 0) || (lVar7 = lVar7 + -2, lVar7 == 0)) goto LAB_00111bc5;
          goto LAB_00111b92;
        }
        cVar3 = '\x03';
        if (*pcVar8 != '\0') {
          cVar3 = (*pcVar8 == '\x02') + '\x04';
        }
        *pcVar8 = cVar3;
        *(ulong *)(pcVar8 + 8) = local_98;
        break;
      case '\x03':
LAB_001119c7:
        local_79 = '\0';
        local_7a = '\0';
        cVar3 = MoveDataToFreeBlocks
                          (this,2,param_1,*(undefined8 *)(pcVar8 + 8),&local_7b,&local_7a,&local_79)
        ;
        if (cVar3 != '\0') {
          if (local_7a == '\0') {
            if (local_79 == '\0') goto LAB_00111ac1;
            *pcVar8 = '\x05';
            goto LAB_00111947;
          }
          goto LAB_00111976;
        }
        goto LAB_00111a28;
      case '\x04':
        cVar3 = MoveDataToFreeBlocks
                          (this,5,param_1,*(undefined8 *)(pcVar8 + 8),&local_7b,&local_7a,&local_79)
        ;
        if (cVar3 == '\0') goto LAB_00111a28;
        if (local_7b == '\0') {
          if ((local_7a != '\0') || (local_79 != '\0')) {
            *pcVar8 = '\x03';
            goto LAB_001119c7;
          }
          goto LAB_00111ac1;
        }
        *pcVar8 = '\x01';
        break;
      case '\x05':
LAB_00111947:
        local_79 = '\0';
        cVar3 = MoveDataToFreeBlocks(this,0,param_1,*(undefined8 *)(pcVar8 + 8),&local_7b,&local_7a)
        ;
        if (cVar3 == '\0') goto LAB_00111a28;
        if (local_79 == '\0') {
LAB_00111ac1:
          *pcVar8 = '\x06';
          goto LAB_00111ac8;
        }
LAB_00111976:
        *pcVar8 = '\0';
        break;
      default:
        goto switchD_001117e2_caseD_6;
      case '\a':
        goto switchD_001117e2_caseD_7;
      }
    } while (*(long *)(param_1 + 0x30) != 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar6 = ComputeDefragmentation_Full(this,param_1);
    return uVar6;
  }
  goto LAB_00111bd5;
LAB_0011188a:
  uVar6 = 1;
  goto LAB_0011188f;
  while (lVar7 = lVar7 + -1, lVar7 != 0) {
LAB_00111b92:
    cVar3 = ReallocWithinBlock(this,param_1,
                               *(VmaDeviceMemoryBlock **)(*(long *)(param_1 + 0x98) + lVar7 * 8));
    if (cVar3 != '\0') goto LAB_0011188a;
  }
  if (lVar2 == *(long *)(this + 0x38)) {
LAB_00111bc5:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00111b66:
      uVar6 = ComputeDefragmentation_Fast(this,param_1);
      return uVar6;
    }
    goto LAB_00111bd5;
  }
LAB_00111a28:
  cVar3 = *pcVar8;
switchD_001117e2_caseD_6:
  if (cVar3 == '\x06') {
LAB_00111ac8:
    uVar9 = 0;
    lVar7 = *(long *)(this + 0x38);
    if (*(long *)(param_1 + 0xa0) != 0) {
      do {
        cVar3 = ReallocWithinBlock(this,param_1,
                                   *(VmaDeviceMemoryBlock **)(*(long *)(param_1 + 0x98) + uVar9 * 8)
                                  );
        if (cVar3 != '\0') goto LAB_0011188a;
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulong *)(param_1 + 0xa0));
      if (lVar7 != *(long *)(this + 0x38)) goto switchD_001117e2_caseD_7;
    }
    *pcVar8 = '\a';
    uVar6 = 0;
  }
  else {
switchD_001117e2_caseD_7:
    uVar6 = 0;
  }
LAB_0011188f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00111bd5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaDefragmentationContext_T::ComputeDefragmentation(VmaBlockVector&, unsigned long) */

void __thiscall
VmaDefragmentationContext_T::ComputeDefragmentation
          (VmaDefragmentationContext_T *this,VmaBlockVector *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x4c);
  if (iVar1 == 4) {
    ComputeDefragmentation_Full(this,param_1);
    return;
  }
  if (iVar1 != 8) {
    if (iVar1 != 1) {
      ComputeDefragmentation_Balanced(this,param_1,param_2,true);
      return;
    }
    ComputeDefragmentation_Fast(this,param_1);
    return;
  }
  ComputeDefragmentation_Extensive(this,param_1,param_2);
  return;
}



/* VmaDefragmentationContext_T::DefragmentPassBegin(VmaDefragmentationPassMoveInfo&) */

undefined8 __thiscall
VmaDefragmentationContext_T::DefragmentPassBegin
          (VmaDefragmentationContext_T *this,VmaDefragmentationPassMoveInfo *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  VmaBlockVector *pVVar5;
  pthread_rwlock_t *ppVar6;
  
  pVVar5 = *(VmaBlockVector **)(this + 0x58);
  if (pVVar5 == (VmaBlockVector *)0x0) {
    uVar4 = 0;
    if (*(int *)(this + 0x50) != 0) {
      do {
        pVVar5 = *(VmaBlockVector **)(*(long *)(this + 0x60) + uVar4 * 8);
        if (pVVar5 != (VmaBlockVector *)0x0) {
          if (**(char **)pVVar5 == '\0') {
            if (*(ulong *)(pVVar5 + 0xa0) < 2) {
              if (*(ulong *)(pVVar5 + 0xa0) == 1) {
                ppVar6 = (pthread_rwlock_t *)0x0;
                goto LAB_00111d93;
              }
            }
            else {
              cVar2 = ComputeDefragmentation(this,pVVar5,uVar4);
              if (cVar2 != '\0') break;
            }
          }
          else {
            ppVar6 = (pthread_rwlock_t *)(pVVar5 + 0x58);
            iVar3 = pthread_rwlock_wrlock(ppVar6);
            if (iVar3 == 0x23) goto LAB_00111e16;
            pVVar5 = *(VmaBlockVector **)(*(long *)(this + 0x60) + uVar4 * 8);
            if (*(ulong *)(pVVar5 + 0xa0) < 2) {
              if (*(ulong *)(pVVar5 + 0xa0) == 1) {
LAB_00111d93:
                cVar2 = ReallocWithinBlock(this,pVVar5,
                                           (VmaDeviceMemoryBlock *)**(undefined8 **)(pVVar5 + 0x98))
                ;
                if (cVar2 != '\0') goto LAB_00111d77;
                if (ppVar6 == (pthread_rwlock_t *)0x0) goto LAB_00111cf0;
              }
            }
            else {
              cVar2 = ComputeDefragmentation(this,pVVar5,uVar4);
              if (cVar2 != '\0') {
LAB_00111d77:
                if (ppVar6 != (pthread_rwlock_t *)0x0) {
                  pthread_rwlock_unlock(ppVar6);
                }
                break;
              }
            }
            pthread_rwlock_unlock(ppVar6);
          }
        }
LAB_00111cf0:
        uVar4 = uVar4 + 1;
      } while ((uint)uVar4 < *(uint *)(this + 0x50));
    }
  }
  else if (**(char **)pVVar5 == '\0') {
    if (*(ulong *)(pVVar5 + 0xa0) < 2) {
      if (*(ulong *)(pVVar5 + 0xa0) == 1) {
        ReallocWithinBlock(this,pVVar5,(VmaDeviceMemoryBlock *)**(undefined8 **)(pVVar5 + 0x98));
      }
    }
    else {
      ComputeDefragmentation(this,pVVar5,0);
    }
  }
  else {
    ppVar6 = (pthread_rwlock_t *)(pVVar5 + 0x58);
    iVar3 = pthread_rwlock_wrlock(ppVar6);
    if (iVar3 == 0x23) {
LAB_00111e16:
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    pVVar5 = *(VmaBlockVector **)(this + 0x58);
    if (*(ulong *)(pVVar5 + 0xa0) < 2) {
      if (*(ulong *)(pVVar5 + 0xa0) == 1) {
        ReallocWithinBlock(this,pVVar5,(VmaDeviceMemoryBlock *)**(undefined8 **)(pVVar5 + 0x98));
      }
      pthread_rwlock_unlock(ppVar6);
    }
    else {
      ComputeDefragmentation(this,pVVar5,0);
      pthread_rwlock_unlock(ppVar6);
    }
  }
  uVar1 = *(undefined8 *)(this + 0x38);
  *(int *)param_1 = (int)uVar1;
  if ((int)uVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x30);
    return 5;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}



void vmaBeginDefragmentationPass
               (undefined8 param_1,VmaDefragmentationContext_T *param_2,
               VmaDefragmentationPassMoveInfo *param_3)

{
  VmaDefragmentationContext_T::DefragmentPassBegin(param_2,param_3);
  return;
}



/* VmaAllocator_T::AllocateDedicatedMemoryPage(VmaPool_T*, unsigned long, VmaSuballocationType,
   unsigned int, VkMemoryAllocateInfo const&, bool, bool, bool, void*, VmaAllocation_T**) */

int __thiscall
VmaAllocator_T::AllocateDedicatedMemoryPage
          (VmaAllocator_T *this,undefined8 param_1,ulong param_2,VmaAllocation_T param_4,
          uint param_5,VkMemoryAllocateInfo *param_6,char param_7,char param_8,undefined1 param_9,
          char *param_10,long *param_11)

{
  uint uVar1;
  int iVar2;
  VmaAllocation_T *pVVar3;
  long in_FS_OFFSET;
  bool local_5c [12];
  VkDeviceMemory_T *local_50;
  long local_48;
  long local_40;
  
  local_5c[0] = (bool)param_9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (VkDeviceMemory_T *)0x0;
  iVar2 = AllocateVulkanMemory(this,param_6,&local_50);
  if (-1 < iVar2) {
    local_48 = 0;
    if (param_7 != '\0') {
      iVar2 = (**(code **)(this + 0x1678))
                        (*(undefined8 *)(this + 0x10),local_50,0,0xffffffffffffffff,0,&local_48);
      if (iVar2 < 0) {
        FreeVulkanMemory(this,param_5,param_2,local_50);
        goto LAB_00111fac;
      }
    }
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x70));
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    pVVar3 = VmaPoolAllocator<VmaAllocation_T>::Alloc<bool&>
                       ((VmaPoolAllocator<VmaAllocation_T> *)(this + 0x98),local_5c);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x70));
    *param_11 = (long)pVVar3;
    pVVar3[0x4c] = (VmaAllocation_T)0x2;
    *(undefined8 *)(pVVar3 + 0x28) = 0;
    *(ulong *)(pVVar3 + 0x30) = param_2;
    *(uint *)(pVVar3 + 0x48) = param_5;
    pVVar3[0x4d] = param_4;
    if (local_48 != 0) {
      pVVar3[0x4f] = (VmaAllocation_T)((byte)pVVar3[0x4f] | 1);
    }
    *(undefined8 *)pVVar3 = param_1;
    *(VkDeviceMemory_T **)(pVVar3 + 8) = local_50;
    *(long *)(pVVar3 + 0x10) = local_48;
    *(undefined1 (*) [16])(pVVar3 + 0x18) = (undefined1  [16])0x0;
    if (param_8 == '\0') {
      *(char **)(*param_11 + 0x38) = param_10;
    }
    else {
      VmaAllocation_T::SetName((VmaAllocation_T *)*param_11,this,param_10);
    }
    uVar1 = *(uint *)(this + (ulong)param_5 * 8 + 0x410);
    LOCK();
    *(ulong *)(this + ((ulong)uVar1 + 0x20) * 8 + 0x1210) =
         *(long *)(this + ((ulong)uVar1 + 0x20) * 8 + 0x1210) + param_2;
    UNLOCK();
    LOCK();
    *(int *)(this + ((ulong)uVar1 + 0x10) * 4 + 0x1210) =
         *(int *)(this + ((ulong)uVar1 + 0x10) * 4 + 0x1210) + 1;
    UNLOCK();
    LOCK();
    *(int *)(this + 0x1390) = *(int *)(this + 0x1390) + 1;
    UNLOCK();
    iVar2 = 0;
  }
LAB_00111fac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::AllocateDedicatedMemory(VmaPool_T*, unsigned long, VmaSuballocationType,
   VmaDedicatedAllocationList&, unsigned int, bool, bool, bool, bool, void*, float, VkBuffer_T*,
   VkImage_T*, VmaBufferImageUsage, unsigned long, VmaAllocation_T**, void const*) */

int __thiscall
VmaAllocator_T::AllocateDedicatedMemory
          (undefined4 param_1_00,VmaAllocator_T *this,undefined8 param_1,undefined8 param_2,
          undefined4 param_5,char *param_6,uint param_7,undefined1 param_8,undefined1 param_9,
          undefined1 param_10,char param_11,undefined8 param_12,long param_13,long param_14,
          ulong param_15,long param_16,void *param_17,undefined4 *param_18)

{
  uint uVar1;
  VmaAllocation_T *pVVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  int iVar7;
  long lVar8;
  VkDeviceMemory_T *pVVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined4 local_e8;
  undefined1 local_e4 [16];
  undefined4 local_d4;
  undefined4 local_c8;
  undefined1 local_c4 [16];
  undefined4 local_b4;
  undefined4 local_a8;
  undefined1 local_a4 [16];
  undefined4 local_94;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *puStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 0;
  local_88 = 5;
  uStack_6c = 0;
  puStack_80 = param_18;
  uStack_78 = (undefined4)param_2;
  uStack_74 = (undefined4)((ulong)param_2 >> 0x20);
  local_64 = 0;
  puStack_60 = (undefined4 *)0x0;
  local_68 = 0x3b9cba19;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  if ((param_11 == '\0') && ((this[8] != (VmaAllocator_T)0x0 || (0x400fff < *(uint *)(this + 4)))))
  {
    if (param_13 == 0) {
      if (param_14 != 0) {
        puStack_80 = &local_68;
        uStack_58 = (undefined4)param_14;
        uStack_54 = (undefined4)((ulong)param_14 >> 0x20);
        local_e4 = (undefined1  [16])0x0;
        puStack_60 = param_18;
        goto LAB_00112148;
      }
      local_e4 = (undefined1  [16])0x0;
      if (this[0xc] == (VmaAllocator_T)0x0) goto LAB_00112148;
    }
    else {
      puStack_60 = param_18;
      puStack_80 = &local_68;
      local_50 = param_13;
      local_e4 = (undefined1  [16])0x0;
      if (this[0xc] == (VmaAllocator_T)0x0) goto LAB_00112148;
LAB_00112374:
      local_e4 = (undefined1  [16])0x0;
      param_18 = puStack_80;
      if ((VmaBufferImageUsage::UNKNOWN != param_15) && ((param_15 & 0x20000) == 0))
      goto LAB_00112148;
    }
  }
  else {
    local_e4 = (undefined1  [16])0x0;
    if (this[0xc] == (VmaAllocator_T)0x0) goto LAB_00112148;
    if (param_13 != 0) goto LAB_00112374;
    if (param_14 != 0) goto LAB_00112148;
  }
  auVar6._8_4_ = 0;
  auVar6._0_8_ = param_18;
  local_e4._0_12_ = auVar6 << 0x20;
  puStack_80 = &local_e8;
  local_e4._12_4_ = 2;
LAB_00112148:
  local_d4 = 0;
  local_e8 = 0x3b9bb460;
  local_b4 = 0;
  local_c8 = 0x3b9e6bb1;
  local_c4 = (undefined1  [16])0x0;
  if (this[0xd] != (VmaAllocator_T)0x0) {
    local_c4._8_4_ = param_1_00;
    local_c4._0_8_ = puStack_80;
    local_c4._12_4_ = 0;
    local_c4 = local_c4 << 0x20;
    puStack_80 = &local_c8;
  }
  local_94 = 0;
  local_a8 = 0x3b9be342;
  local_a4._0_12_ = SUB1612((undefined1  [16])0x0,0);
  if (*(int *)(this + (ulong)param_7 * 4 + 0x1570) != 0) {
    auVar5._8_4_ = 0;
    auVar5._0_8_ = puStack_80;
    local_a4._0_12_ = auVar5 << 0x20;
    puStack_80 = &local_a8;
  }
  local_a4._12_4_ = *(int *)(this + (ulong)param_7 * 4 + 0x1570);
  local_70 = param_7;
  if (param_16 != 0) {
    lVar10 = 0;
    pvVar12 = param_17;
    do {
      lVar11 = lVar10;
      iVar7 = AllocateDedicatedMemoryPage
                        (this,param_1,param_2,param_5,param_7,&local_88,param_8,param_9,param_10,
                         param_12,pvVar12);
      if (iVar7 != 0) {
        while (lVar11 != 0) {
          lVar11 = lVar11 + -1;
          pVVar2 = *(VmaAllocation_T **)((long)param_17 + lVar11 * 8);
          if (pVVar2[0x4c] == (VmaAllocation_T)0x1) {
            pVVar9 = *(VkDeviceMemory_T **)(*(long *)pVVar2 + 0x18);
          }
          else {
            pVVar9 = (VkDeviceMemory_T *)0x0;
            if (pVVar2[0x4c] == (VmaAllocation_T)0x2) {
              pVVar9 = *(VkDeviceMemory_T **)(pVVar2 + 8);
            }
          }
          FreeVulkanMemory(this,param_7,*(ulong *)(pVVar2 + 0x30),pVVar9);
          uVar1 = *(uint *)(this + (ulong)param_7 * 8 + 0x410);
          LOCK();
          *(long *)(this + (ulong)uVar1 * 8 + 0x1310) =
               *(long *)(this + (ulong)uVar1 * 8 + 0x1310) - *(long *)(pVVar2 + 0x30);
          UNLOCK();
          LOCK();
          *(int *)(this + (ulong)uVar1 * 4 + 0x1250) =
               *(int *)(this + (ulong)uVar1 * 4 + 0x1250) + -1;
          UNLOCK();
          LOCK();
          *(int *)(this + 0x1390) = *(int *)(this + 0x1390) + 1;
          UNLOCK();
          VmaAllocationObjectAllocator::Free((VmaAllocationObjectAllocator *)(this + 0x70),pVVar2);
        }
        memset(param_17,0,param_16 * 8);
        goto LAB_001123e5;
      }
      pvVar12 = (void *)((long)pvVar12 + 8);
      lVar10 = lVar11 + 1;
    } while (param_16 != lVar11 + 1);
    lVar10 = 0;
    do {
      lVar3 = *(long *)((long)param_17 + lVar10 * 8);
      if (*param_6 == '\0') {
        lVar4 = *(long *)(param_6 + 0x50);
        if (lVar4 == 0) {
          param_6[0x50] = '\x01';
          param_6[0x51] = '\0';
          param_6[0x52] = '\0';
          param_6[0x53] = '\0';
          param_6[0x54] = '\0';
          param_6[0x55] = '\0';
          param_6[0x56] = '\0';
          param_6[0x57] = '\0';
          *(long *)(param_6 + 0x40) = lVar3;
          *(long *)(param_6 + 0x48) = lVar3;
        }
        else {
          lVar8 = *(long *)(param_6 + 0x48);
          *(long *)(lVar3 + 0x18) = lVar8;
          *(long *)(lVar8 + 0x20) = lVar3;
          *(long *)(param_6 + 0x48) = lVar3;
          *(long *)(param_6 + 0x50) = lVar4 + 1;
        }
      }
      else {
        iVar7 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_6 + 8));
        if (iVar7 == 0x23) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(0x23);
        }
        if (*(long *)(param_6 + 0x50) == 0) {
          *(long *)(param_6 + 0x40) = lVar3;
          lVar8 = 1;
        }
        else {
          lVar4 = *(long *)(param_6 + 0x48);
          lVar8 = *(long *)(param_6 + 0x50) + 1;
          *(long *)(lVar3 + 0x18) = lVar4;
          *(long *)(lVar4 + 0x20) = lVar3;
        }
        *(long *)(param_6 + 0x48) = lVar3;
        *(long *)(param_6 + 0x50) = lVar8;
        pthread_rwlock_unlock((pthread_rwlock_t *)(param_6 + 8));
      }
      bVar13 = lVar11 != lVar10;
      lVar10 = lVar10 + 1;
    } while (bVar13);
  }
  iVar7 = 0;
LAB_001123e5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::AllocateMemoryOfType(VmaPool_T*, unsigned long, unsigned long, bool, VkBuffer_T*,
   VkImage_T*, VmaBufferImageUsage, VmaAllocationCreateInfo const&, unsigned int,
   VmaSuballocationType, VmaDedicatedAllocationList&, VmaBlockVector&, unsigned long,
   VmaAllocation_T**) */

int __thiscall
VmaAllocator_T::AllocateMemoryOfType
          (VmaAllocator_T *this,long param_1,ulong param_2,undefined8 param_3,char param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_8,ulong *param_9,uint param_10,
          undefined4 param_11,undefined8 param_12,VmaBlockVector *param_13,ulong param_14,
          undefined8 param_15)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  VmaAllocator_T *pVStack_50;
  long local_40;
  
  local_78 = *param_9;
  uStack_70 = param_9[1];
  local_68 = param_9[2];
  uStack_60 = param_9[3];
  local_58 = param_9[4];
  pVStack_50 = (VmaAllocator_T *)param_9[5];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = CalcMemTypeParams(this,(VmaAllocationCreateInfo *)&local_78,param_10,param_2,param_14);
  if (iVar1 != 0) goto LAB_00112720;
  if ((local_78 & 1) == 0) {
    if (((local_78 & 2) == 0) && ((param_1 == 0 || (param_13[0x38] == (VmaBlockVector)0x0)))) {
      if (*(ulong *)(param_13 + 0x18) >> 1 < param_2) {
        if ((*(uint *)(this + 0x21c) < 0x3fffffff) &&
           ((uint)(*(int *)(this + 0x21c) * 3) >> 2 < *(uint *)(this + 0x1550))) {
LAB_0011275f:
          iVar2 = VmaBlockVector::Allocate
                            (param_13,param_2,param_3,(VmaAllocationCreateInfo *)&local_78,param_11,
                             param_14,param_15);
          if (iVar2 == 0) goto LAB_00112720;
          goto LAB_00112792;
        }
      }
      else if (((*(uint *)(this + 0x21c) < 0x3fffffff) &&
               ((uint)(*(int *)(this + 0x21c) * 3) >> 2 < *(uint *)(this + 0x1550))) ||
              (param_4 == '\0')) goto LAB_0011275f;
      iVar2 = AllocateDedicatedMemory
                        (pVStack_50._0_4_,this,param_1,param_2,param_11,param_12,param_10,
                         (uint)local_78 >> 2 & 1,(uint)local_78 >> 5 & 1,(local_78 & 0xc00) != 0,
                         (uint)local_78 >> 9 & 1,local_58,param_5,param_6,param_8,param_14,param_15,
                         *(undefined8 *)(param_13 + 0x50));
      if (iVar2 == 0) goto LAB_00112720;
    }
    iVar2 = VmaBlockVector::Allocate
                      (param_13,param_2,param_3,(VmaAllocationCreateInfo *)&local_78,param_11,
                       param_14);
    if (iVar2 != 0) {
      iVar1 = iVar2;
    }
  }
  else {
LAB_00112792:
    iVar1 = AllocateDedicatedMemory
                      (pVStack_50._0_4_,this,param_1,param_2,param_11,param_12,param_10,
                       (uint)local_78 >> 2 & 1,(uint)local_78 >> 5 & 1,((uint)local_78 & 0xc00) != 0
                       ,(uint)local_78 >> 9 & 1,local_58,param_5,param_6,param_8,param_14,param_15,
                       *(undefined8 *)(param_13 + 0x50));
  }
LAB_00112720:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* VmaAllocator_T::AllocateMemory(VkMemoryRequirements const&, bool, bool, VkBuffer_T*, VkImage_T*,
   VmaBufferImageUsage, VmaAllocationCreateInfo const&, VmaSuballocationType, unsigned long,
   VmaAllocation_T**) */

undefined8 __thiscall
VmaAllocator_T::AllocateMemory
          (VmaAllocator_T *this,long *param_1,bool param_2,byte param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_7,undefined8 *param_8,undefined4 param_9,long param_10
          ,void *param_11)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  uint local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  memset(param_11,0,param_10 * 8);
  lVar6 = *param_1;
  if (lVar6 == 0) {
    uVar3 = 0xfffffffd;
  }
  else {
    local_78 = *param_8;
    uStack_70 = param_8[1];
    local_68 = param_8[2];
    lStack_60 = param_8[3];
    local_58 = param_8[4];
    uStack_50 = param_8[5];
    uVar3 = CalcAllocationParams((VmaAllocationCreateInfo *)this,SUB81(&local_78,0),param_2);
    if ((int)uVar3 == 0) {
      if (lStack_60 == 0) {
        uVar7 = *(uint *)(param_1 + 2);
        puVar5 = &local_7c;
        local_7c = 0xffffffff;
        uVar3 = FindMemoryTypeIndex(this,uVar7,&local_78,param_7);
        if ((int)uVar3 == 0) {
          while( true ) {
            uVar1 = local_7c;
            uVar4 = (ulong)local_7c;
            uVar3 = AllocateMemoryOfType
                              (this,0,lVar6,param_1[1],param_3 | param_2,param_4,param_5,param_7,
                               &local_78,uVar4,param_9,this + uVar4 * 0x58 + 0x710,
                               *(undefined8 *)(this + uVar4 * 8 + 0x610),param_10,param_11);
            if ((int)uVar3 == 0) break;
            uVar7 = uVar7 & ~(1 << ((byte)uVar1 & 0x1f));
            iVar2 = FindMemoryTypeIndex(this,uVar7,&local_78,param_7,puVar5);
            if (iVar2 != 0) {
              uVar3 = 0xfffffffe;
              break;
            }
            lVar6 = *param_1;
          }
        }
      }
      else {
        uVar3 = AllocateMemoryOfType(this,lStack_60,lVar6,param_1[1]);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



ulong vmaAllocateMemory(VmaAllocator_T *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4,VmaAllocationInfo *param_5)

{
  ulong uVar1;
  
  uVar1 = VmaAllocator_T::AllocateMemory
                    (param_1,param_2,0,0,0,0,VmaBufferImageUsage::UNKNOWN,param_3,1,1,param_4);
  if ((param_5 != (VmaAllocationInfo *)0x0) && ((int)uVar1 == 0)) {
    VmaAllocator_T::GetAllocationInfo(param_1,(VmaAllocation_T *)*param_4,param_5);
    return uVar1 & 0xffffffff;
  }
  return uVar1;
}



undefined8
vmaAllocateMemoryPages
          (VmaAllocator_T *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          VmaAllocationInfo *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_4 == 0) {
    return 0;
  }
  uVar2 = VmaAllocator_T::AllocateMemory
                    (param_1,param_2,0,0,0,0,VmaBufferImageUsage::UNKNOWN,param_3,1,param_4,param_5)
  ;
  if ((param_6 != (VmaAllocationInfo *)0x0) && ((int)uVar2 == 0)) {
    lVar3 = 0;
    do {
      lVar1 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      VmaAllocator_T::GetAllocationInfo(param_1,*(VmaAllocation_T **)(param_5 + lVar1),param_6);
      param_6 = param_6 + 0x38;
    } while (param_4 != lVar3);
    uVar2 = 0;
  }
  return uVar2;
}



int vmaAllocateMemoryForBuffer
              (VmaAllocator_T *param_1,VkBuffer_T *param_2,undefined8 param_3,undefined8 *param_4,
              VmaAllocationInfo *param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  bool local_5a;
  bool local_59;
  VkMemoryRequirements local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_5a = false;
  local_59 = false;
  local_58[0] = (VkMemoryRequirements)0x0;
  local_58[1] = (VkMemoryRequirements)0x0;
  local_58[2] = (VkMemoryRequirements)0x0;
  local_58[3] = (VkMemoryRequirements)0x0;
  local_58[4] = (VkMemoryRequirements)0x0;
  local_58[5] = (VkMemoryRequirements)0x0;
  local_58[6] = (VkMemoryRequirements)0x0;
  local_58[7] = (VkMemoryRequirements)0x0;
  local_58[8] = (VkMemoryRequirements)0x0;
  local_58[9] = (VkMemoryRequirements)0x0;
  local_58[10] = (VkMemoryRequirements)0x0;
  local_58[0xb] = (VkMemoryRequirements)0x0;
  local_58[0xc] = (VkMemoryRequirements)0x0;
  local_58[0xd] = (VkMemoryRequirements)0x0;
  local_58[0xe] = (VkMemoryRequirements)0x0;
  local_58[0xf] = (VkMemoryRequirements)0x0;
  VmaAllocator_T::GetBufferMemoryRequirements(param_1,param_2,local_58,&local_5a,&local_59);
  iVar1 = VmaAllocator_T::AllocateMemory
                    (param_1,local_58,local_5a,local_59,param_2,0,VmaBufferImageUsage::UNKNOWN,
                     param_3,2,1,param_4);
  if ((param_5 != (VmaAllocationInfo *)0x0) && (iVar1 == 0)) {
    VmaAllocator_T::GetAllocationInfo(param_1,(VmaAllocation_T *)*param_4,param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int vmaAllocateMemoryForImage
              (VmaAllocator_T *param_1,VkImage_T *param_2,undefined8 param_3,undefined8 *param_4,
              VmaAllocationInfo *param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  bool local_5a;
  bool local_59;
  VkMemoryRequirements local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_5a = false;
  local_59 = false;
  local_58[0] = (VkMemoryRequirements)0x0;
  local_58[1] = (VkMemoryRequirements)0x0;
  local_58[2] = (VkMemoryRequirements)0x0;
  local_58[3] = (VkMemoryRequirements)0x0;
  local_58[4] = (VkMemoryRequirements)0x0;
  local_58[5] = (VkMemoryRequirements)0x0;
  local_58[6] = (VkMemoryRequirements)0x0;
  local_58[7] = (VkMemoryRequirements)0x0;
  local_58[8] = (VkMemoryRequirements)0x0;
  local_58[9] = (VkMemoryRequirements)0x0;
  local_58[10] = (VkMemoryRequirements)0x0;
  local_58[0xb] = (VkMemoryRequirements)0x0;
  local_58[0xc] = (VkMemoryRequirements)0x0;
  local_58[0xd] = (VkMemoryRequirements)0x0;
  local_58[0xe] = (VkMemoryRequirements)0x0;
  local_58[0xf] = (VkMemoryRequirements)0x0;
  VmaAllocator_T::GetImageMemoryRequirements(param_1,param_2,local_58,&local_5a,&local_59);
  iVar1 = VmaAllocator_T::AllocateMemory
                    (param_1,local_58,local_5a,local_59,0,param_2,VmaBufferImageUsage::UNKNOWN,
                     param_3,3,1,param_4);
  if ((param_5 != (VmaAllocationInfo *)0x0) && (iVar1 == 0)) {
    VmaAllocator_T::GetAllocationInfo(param_1,(VmaAllocation_T *)*param_4,param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int vmaCreateBuffer(VmaAllocator_T *param_1,long param_2,byte *param_3,undefined8 *param_4,
                   VmaAllocation_T **param_5,VmaAllocationInfo *param_6)

{
  VmaAllocator_T VVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  VmaAllocator_T *pVVar6;
  VmaAllocation_T *pVVar7;
  long in_FS_OFFSET;
  bool local_5a;
  bool local_59;
  VkMemoryRequirements local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (((*(byte *)(param_2 + 0x22) & 2) != 0 && (param_1[0xc] == (VmaAllocator_T)0x0)))) {
    iVar4 = -3;
    goto LAB_00112df7;
  }
  pVVar6 = (VmaAllocator_T *)0x0;
  VVar1 = param_1[0x20];
  *param_4 = 0;
  pcVar2 = *(code **)(param_1 + 0x16b8);
  *param_5 = (VmaAllocation_T *)0x0;
  if (VVar1 != (VmaAllocator_T)0x0) {
    pVVar6 = param_1 + 0x28;
  }
  iVar4 = (*pcVar2)(*(undefined8 *)(param_1 + 0x10),param_2,pVVar6,param_4);
  if (iVar4 < 0) goto LAB_00112df7;
  local_48 = 0;
  local_5a = false;
  local_59 = false;
  local_58[0] = (VkMemoryRequirements)0x0;
  local_58[1] = (VkMemoryRequirements)0x0;
  local_58[2] = (VkMemoryRequirements)0x0;
  local_58[3] = (VkMemoryRequirements)0x0;
  local_58[4] = (VkMemoryRequirements)0x0;
  local_58[5] = (VkMemoryRequirements)0x0;
  local_58[6] = (VkMemoryRequirements)0x0;
  local_58[7] = (VkMemoryRequirements)0x0;
  local_58[8] = (VkMemoryRequirements)0x0;
  local_58[9] = (VkMemoryRequirements)0x0;
  local_58[10] = (VkMemoryRequirements)0x0;
  local_58[0xb] = (VkMemoryRequirements)0x0;
  local_58[0xc] = (VkMemoryRequirements)0x0;
  local_58[0xd] = (VkMemoryRequirements)0x0;
  local_58[0xe] = (VkMemoryRequirements)0x0;
  local_58[0xf] = (VkMemoryRequirements)0x0;
  VmaAllocator_T::GetBufferMemoryRequirements
            (param_1,(VkBuffer_T *)*param_4,local_58,&local_5a,&local_59);
  if (param_1[0xf] != (VmaAllocator_T)0x0) {
    for (piVar3 = *(int **)(param_2 + 8); piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
      if (*piVar3 == 0x3ba1f5f6) {
        uVar5 = *(ulong *)(piVar3 + 4);
        goto LAB_00112e84;
      }
    }
  }
  uVar5 = (ulong)*(uint *)(param_2 + 0x20);
LAB_00112e84:
  iVar4 = VmaAllocator_T::AllocateMemory
                    (param_1,local_58,local_5a,local_59,*param_4,0,uVar5,param_3,2,1,param_5);
  if (iVar4 < 0) {
    VVar1 = param_1[0x20];
    pcVar2 = *(code **)(param_1 + 0x16c0);
joined_r0x00112f55:
    pVVar6 = (VmaAllocator_T *)0x0;
    if (VVar1 != (VmaAllocator_T)0x0) {
      pVVar6 = param_1 + 0x28;
    }
    (*pcVar2)(*(undefined8 *)(param_1 + 0x10),*param_4,pVVar6);
    *param_4 = 0;
  }
  else {
    pVVar7 = *param_5;
    if ((*param_3 & 0x80) == 0) {
      iVar4 = VmaAllocator_T::BindBufferMemory(param_1,pVVar7,0,(VkBuffer_T *)*param_4,(void *)0x0);
      if (iVar4 < 0) {
        VmaAllocator_T::FreeMemory(param_1,1,param_5);
        VVar1 = param_1[0x20];
        *param_5 = (VmaAllocation_T *)0x0;
        pcVar2 = *(code **)(param_1 + 0x16c0);
        goto joined_r0x00112f55;
      }
      pVVar7 = *param_5;
    }
    if (param_1[0xf] != (VmaAllocator_T)0x0) {
      for (piVar3 = *(int **)(param_2 + 8); piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
        if (*piVar3 == 0x3ba1f5f6) {
          uVar5 = *(ulong *)(piVar3 + 4);
          goto LAB_00112f24;
        }
      }
    }
    uVar5 = (ulong)*(uint *)(param_2 + 0x20);
LAB_00112f24:
    *(ulong *)(pVVar7 + 0x50) = uVar5;
    if (param_6 != (VmaAllocationInfo *)0x0) {
      VmaAllocator_T::GetAllocationInfo(param_1,pVVar7,param_6);
    }
    iVar4 = 0;
  }
LAB_00112df7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



ulong vmaCreateBufferWithAlignment
                (VmaAllocator_T *param_1,long param_2,byte *param_3,ulong param_4,
                undefined8 *param_5,VmaAllocation_T **param_6,VmaAllocationInfo *param_7)

{
  VmaAllocator_T VVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  VmaAllocator_T *pVVar6;
  VmaAllocation_T *pVVar7;
  long in_FS_OFFSET;
  bool local_5a;
  bool local_59;
  VkMemoryRequirements local_58 [8];
  ulong uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (((*(byte *)(param_2 + 0x22) & 2) != 0 && (param_1[0xc] == (VmaAllocator_T)0x0)))) {
    uVar5 = 0xfffffffd;
    goto LAB_0011303f;
  }
  pVVar6 = (VmaAllocator_T *)0x0;
  VVar1 = param_1[0x20];
  *param_5 = 0;
  pcVar2 = *(code **)(param_1 + 0x16b8);
  *param_6 = (VmaAllocation_T *)0x0;
  if (VVar1 != (VmaAllocator_T)0x0) {
    pVVar6 = param_1 + 0x28;
  }
  uVar5 = (*pcVar2)(*(undefined8 *)(param_1 + 0x10),param_2,pVVar6,param_5);
  if ((int)uVar5 < 0) goto LAB_0011303f;
  local_48 = 0;
  local_5a = false;
  local_59 = false;
  _local_58 = (undefined1  [16])0x0;
  VmaAllocator_T::GetBufferMemoryRequirements
            (param_1,(VkBuffer_T *)*param_5,local_58,&local_5a,&local_59);
  uVar5 = uStack_50;
  if (uStack_50 < param_4) {
    uVar5 = param_4;
  }
  uStack_50 = uVar5;
  if (param_1[0xf] != (VmaAllocator_T)0x0) {
    for (piVar3 = *(int **)(param_2 + 8); piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
      if (*piVar3 == 0x3ba1f5f6) {
        uVar5 = *(ulong *)(piVar3 + 4);
        goto LAB_001130e3;
      }
    }
  }
  uVar5 = (ulong)*(uint *)(param_2 + 0x20);
LAB_001130e3:
  uVar4 = VmaAllocator_T::AllocateMemory
                    (param_1,local_58,local_5a,local_59,*param_5,0,uVar5,param_3,2,1,param_6);
  if ((int)uVar4 < 0) {
    VVar1 = param_1[0x20];
    pcVar2 = *(code **)(param_1 + 0x16c0);
joined_r0x001131b5:
    pVVar6 = (VmaAllocator_T *)0x0;
    if (VVar1 != (VmaAllocator_T)0x0) {
      pVVar6 = param_1 + 0x28;
    }
    (*pcVar2)(*(undefined8 *)(param_1 + 0x10),*param_5,pVVar6);
    *param_5 = 0;
    uVar5 = (ulong)uVar4;
  }
  else {
    pVVar7 = *param_6;
    if ((*param_3 & 0x80) == 0) {
      uVar4 = VmaAllocator_T::BindBufferMemory(param_1,pVVar7,0,(VkBuffer_T *)*param_5,(void *)0x0);
      if ((int)uVar4 < 0) {
        VmaAllocator_T::FreeMemory(param_1,1,param_6);
        VVar1 = param_1[0x20];
        *param_6 = (VmaAllocation_T *)0x0;
        pcVar2 = *(code **)(param_1 + 0x16c0);
        goto joined_r0x001131b5;
      }
      pVVar7 = *param_6;
    }
    if (param_1[0xf] != (VmaAllocator_T)0x0) {
      for (piVar3 = *(int **)(param_2 + 8); piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
        if (*piVar3 == 0x3ba1f5f6) {
          uVar5 = *(ulong *)(piVar3 + 4);
          goto LAB_00113183;
        }
      }
    }
    uVar5 = (ulong)*(uint *)(param_2 + 0x20);
LAB_00113183:
    *(ulong *)(pVVar7 + 0x50) = uVar5;
    if (param_7 != (VmaAllocationInfo *)0x0) {
      VmaAllocator_T::GetAllocationInfo(param_1,pVVar7,param_7);
    }
    uVar5 = 0;
  }
LAB_0011303f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int vmaCreateImage(VmaAllocator_T *param_1,long param_2,byte *param_3,undefined8 *param_4,
                  VmaAllocation_T **param_5,VmaAllocationInfo *param_6)

{
  VmaAllocator_T VVar1;
  code *pcVar2;
  int iVar3;
  VmaAllocator_T *pVVar4;
  VmaAllocation_T *pVVar5;
  long in_FS_OFFSET;
  bool local_5a;
  bool local_59;
  VkMemoryRequirements local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(int *)(param_2 + 0x1c) == 0) || (*(int *)(param_2 + 0x20) == 0)) ||
      (*(int *)(param_2 + 0x24) == 0)) ||
     ((*(int *)(param_2 + 0x28) == 0 || (*(int *)(param_2 + 0x2c) == 0)))) {
    iVar3 = -3;
    goto LAB_00113398;
  }
  pVVar4 = (VmaAllocator_T *)0x0;
  VVar1 = param_1[0x20];
  *param_4 = 0;
  pcVar2 = *(code **)(param_1 + 0x16c8);
  *param_5 = (VmaAllocation_T *)0x0;
  if (VVar1 != (VmaAllocator_T)0x0) {
    pVVar4 = param_1 + 0x28;
  }
  iVar3 = (*pcVar2)(*(undefined8 *)(param_1 + 0x10),param_2,pVVar4,param_4);
  if (iVar3 < 0) goto LAB_00113398;
  iVar3 = *(int *)(param_2 + 0x34);
  local_5a = false;
  local_59 = false;
  local_48 = 0;
  local_58[0] = (VkMemoryRequirements)0x0;
  local_58[1] = (VkMemoryRequirements)0x0;
  local_58[2] = (VkMemoryRequirements)0x0;
  local_58[3] = (VkMemoryRequirements)0x0;
  local_58[4] = (VkMemoryRequirements)0x0;
  local_58[5] = (VkMemoryRequirements)0x0;
  local_58[6] = (VkMemoryRequirements)0x0;
  local_58[7] = (VkMemoryRequirements)0x0;
  local_58[8] = (VkMemoryRequirements)0x0;
  local_58[9] = (VkMemoryRequirements)0x0;
  local_58[10] = (VkMemoryRequirements)0x0;
  local_58[0xb] = (VkMemoryRequirements)0x0;
  local_58[0xc] = (VkMemoryRequirements)0x0;
  local_58[0xd] = (VkMemoryRequirements)0x0;
  local_58[0xe] = (VkMemoryRequirements)0x0;
  local_58[0xf] = (VkMemoryRequirements)0x0;
  VmaAllocator_T::GetImageMemoryRequirements
            (param_1,(VkImage_T *)*param_4,local_58,&local_5a,&local_59);
  iVar3 = VmaAllocator_T::AllocateMemory
                    (param_1,local_58,local_5a,local_59,0,*param_4,*(undefined4 *)(param_2 + 0x38),
                     param_3,5 - (uint)(iVar3 != 0),1,param_5);
  if (iVar3 < 0) {
    VVar1 = param_1[0x20];
    pcVar2 = *(code **)(param_1 + 0x16d0);
joined_r0x001133cd:
    pVVar4 = (VmaAllocator_T *)0x0;
    if (VVar1 != (VmaAllocator_T)0x0) {
      pVVar4 = param_1 + 0x28;
    }
    (*pcVar2)(*(undefined8 *)(param_1 + 0x10),*param_4,pVVar4);
    *param_4 = 0;
  }
  else {
    pVVar5 = *param_5;
    if ((*param_3 & 0x80) == 0) {
      iVar3 = VmaAllocator_T::BindImageMemory(param_1,pVVar5,0,(VkImage_T *)*param_4,(void *)0x0);
      if (iVar3 < 0) {
        VmaAllocator_T::FreeMemory(param_1,1,param_5);
        VVar1 = param_1[0x20];
        *param_5 = (VmaAllocation_T *)0x0;
        pcVar2 = *(code **)(param_1 + 0x16d0);
        goto joined_r0x001133cd;
      }
      pVVar5 = *param_5;
    }
    *(ulong *)(pVVar5 + 0x50) = (ulong)*(uint *)(param_2 + 0x38);
    if (param_6 != (VmaAllocationInfo *)0x0) {
      VmaAllocator_T::GetAllocationInfo(param_1,pVVar5,param_6);
    }
    iVar3 = 0;
  }
LAB_00113398:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VmaAllocator_T::FlushOrInvalidateAllocations(unsigned int, VmaAllocation_T* const*, unsigned long
   const*, unsigned long const*, VMA_CACHE_OPERATION) */

undefined4 __thiscall
VmaAllocator_T::FlushOrInvalidateAllocations
          (VmaAllocator_T *this,uint param_1,long param_2,long param_3,long param_4,int param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  ulong local_2e8;
  undefined1 local_2e0 [640];
  VmaAllocator_T *local_60;
  undefined1 *local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x20] == (VmaAllocator_T)0x0) {
    local_2e8 = 0;
    local_60 = (VmaAllocator_T *)0x0;
    local_58 = (undefined1 *)0x0;
    local_50 = (undefined1  [16])0x0;
    if (param_1 != 0) goto LAB_001134cc;
    uVar4 = 0;
  }
  else {
    local_60 = this + 0x28;
    local_2e8 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = (undefined1  [16])0x0;
    if (param_1 == 0) {
      uVar4 = 0;
    }
    else {
LAB_001134cc:
      local_50 = (undefined1  [16])0x0;
      local_58 = (undefined1 *)0x0;
      local_2e8 = 0;
      lVar8 = 0;
      do {
        while( true ) {
          uVar6 = 0;
          if (param_3 != 0) {
            uVar6 = *(ulong *)(param_3 + lVar8);
          }
          uVar5 = 0xffffffffffffffff;
          if (param_4 != 0) {
            uVar5 = *(ulong *)(param_4 + lVar8);
          }
          cVar3 = GetFlushOrInvalidateRange
                            (this,*(VmaAllocation_T **)(param_2 + lVar8),uVar6,uVar5,
                             (VkMappedMemoryRange *)&local_318);
          uVar6 = local_2e8;
          if (cVar3 == '\0') break;
          uVar5 = local_2e8 + 1;
          if (uVar5 < 0x11) {
            if (0x10 < local_2e8) {
              VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>>::resize
                        ((VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>> *)
                         &local_60,0);
              uVar5 = 0;
            }
            puVar7 = local_2e0;
            local_2e8 = uVar5;
          }
          else if (local_2e8 == 0x10) {
            VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>>::resize
                      ((VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>> *)
                       &local_60,0x11);
            if (local_2e8 == 0) {
              local_2e8 = 0x11;
              puVar7 = local_58;
            }
            else {
              memcpy(local_58,local_2e0,local_2e8 * 0x28);
              local_2e8 = 0x11;
              puVar7 = local_58;
            }
          }
          else {
            VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>>::resize
                      ((VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>> *)
                       &local_60,uVar5);
            puVar7 = local_58;
            local_2e8 = uVar5;
          }
          lVar8 = lVar8 + 8;
          puVar1 = (undefined8 *)(puVar7 + uVar6 * 0x28);
          *puVar1 = local_318;
          puVar1[1] = uStack_310;
          puVar1[4] = local_2f8;
          puVar1[2] = local_308;
          puVar1[3] = uStack_300;
          if ((ulong)param_1 << 3 == lVar8) goto LAB_0011359c;
        }
        lVar8 = lVar8 + 8;
      } while ((ulong)param_1 << 3 != lVar8);
LAB_0011359c:
      if (local_2e8 == 0) {
LAB_001135bb:
        uVar4 = 0;
      }
      else {
        if (param_6 == 0) {
          pcVar2 = *(code **)(this + 0x1688);
        }
        else {
          if (param_6 != 1) goto LAB_001135bb;
          pcVar2 = *(code **)(this + 0x1690);
        }
        puVar7 = local_2e0;
        if (0x10 < local_2e8) {
          puVar7 = local_58;
        }
        uVar4 = (*pcVar2)(*(undefined8 *)(this + 0x10),local_2e8,puVar7);
      }
      if (local_60 == (VmaAllocator_T *)0x0) goto LAB_001136f0;
    }
    if (*(code **)(local_60 + 0x18) != (code *)0x0) {
      (**(code **)(local_60 + 0x18))(*(undefined8 *)local_60);
      goto LAB_001135e8;
    }
  }
LAB_001136f0:
  free(local_58);
LAB_001135e8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 vmaFlushAllocations(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = VmaAllocator_T::FlushOrInvalidateAllocations();
  return uVar1;
}



undefined8 vmaInvalidateAllocations(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = VmaAllocator_T::FlushOrInvalidateAllocations();
  return uVar1;
}



/* VmaBlockMetadata::Init(unsigned long) */

void __thiscall VmaBlockMetadata::Init(VmaBlockMetadata *this,ulong param_1)

{
  *(ulong *)(this + 8) = param_1;
  return;
}



/* VmaBlockMetadata_Linear::GetSumFreeSize() const */

undefined8 __thiscall VmaBlockMetadata_Linear::GetSumFreeSize(VmaBlockMetadata_Linear *this)

{
  return *(undefined8 *)(this + 0x28);
}



/* VmaBlockMetadata_Linear::GetAllocationOffset(VmaAllocHandle_T*) const */

VmaAllocHandle_T * __thiscall
VmaBlockMetadata_Linear::GetAllocationOffset
          (VmaBlockMetadata_Linear *this,VmaAllocHandle_T *param_1)

{
  return param_1 + -1;
}



/* VmaBlockMetadata_TLSF::GetAllocationCount() const */

undefined8 __thiscall VmaBlockMetadata_TLSF::GetAllocationCount(VmaBlockMetadata_TLSF *this)

{
  return *(undefined8 *)(this + 0x28);
}



/* VmaBlockMetadata_TLSF::GetFreeRegionsCount() const */

long __thiscall VmaBlockMetadata_TLSF::GetFreeRegionsCount(VmaBlockMetadata_TLSF *this)

{
  return *(long *)(this + 0x30) + 1;
}



/* VmaBlockMetadata_TLSF::GetSumFreeSize() const */

long __thiscall VmaBlockMetadata_TLSF::GetSumFreeSize(VmaBlockMetadata_TLSF *this)

{
  return *(long *)(this + 0x38) + *(long *)(*(long *)(this + 0x170) + 8);
}



/* VmaBlockMetadata_TLSF::IsEmpty() const */

undefined8 __thiscall VmaBlockMetadata_TLSF::IsEmpty(VmaBlockMetadata_TLSF *this)

{
  return CONCAT71((int7)((ulong)*(long **)(this + 0x170) >> 8),**(long **)(this + 0x170) == 0);
}



/* VmaBlockMetadata_TLSF::GetAllocationOffset(VmaAllocHandle_T*) const */

undefined8 __thiscall
VmaBlockMetadata_TLSF::GetAllocationOffset(VmaBlockMetadata_TLSF *this,VmaAllocHandle_T *param_1)

{
  return *(undefined8 *)param_1;
}



/* VmaBlockMetadata_Linear::IsEmpty() const */

bool __thiscall VmaBlockMetadata_Linear::IsEmpty(VmaBlockMetadata_Linear *this)

{
  long lVar1;
  VmaBlockMetadata_Linear *pVVar2;
  
  if (*(code **)(*(long *)this + 0x20) == GetAllocationCount) {
    if (*(int *)(this + 0x70) == 0) {
      lVar1 = *(long *)(this + 0x40) - (*(long *)(this + 0x78) + *(long *)(this + 0x80));
      pVVar2 = this + 0x50;
    }
    else {
      lVar1 = *(long *)(this + 0x60) - (*(long *)(this + 0x78) + *(long *)(this + 0x80));
      pVVar2 = this + 0x30;
    }
    return (lVar1 - *(long *)(this + 0x88)) + *(long *)(pVVar2 + 0x10) == 0;
  }
  lVar1 = (**(code **)(*(long *)this + 0x20))();
  return lVar1 == 0;
}



/* VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear() */

void __thiscall VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear(VmaBlockMetadata_Linear *this)

{
  undefined8 *puVar1;
  void *__ptr;
  
  *(undefined ***)this = &PTR__VmaBlockMetadata_Linear_001151b0;
  puVar1 = *(undefined8 **)(this + 0x50);
  if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
    free(*(void **)(this + 0x58));
    puVar1 = *(undefined8 **)(this + 0x30);
    __ptr = *(void **)(this + 0x38);
  }
  else {
    (*(code *)puVar1[3])(*puVar1);
    puVar1 = *(undefined8 **)(this + 0x30);
    __ptr = *(void **)(this + 0x38);
  }
  if ((puVar1 != (undefined8 *)0x0) && ((code *)puVar1[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00113977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[3])(*puVar1);
    return;
  }
  free(__ptr);
  return;
}



/* VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear() */

void __thiscall VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear(VmaBlockMetadata_Linear *this)

{
  undefined8 *puVar1;
  void *__ptr;
  
  *(undefined ***)this = &PTR__VmaBlockMetadata_Linear_001151b0;
  puVar1 = *(undefined8 **)(this + 0x50);
  if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
    free(*(void **)(this + 0x58));
    puVar1 = *(undefined8 **)(this + 0x30);
    __ptr = *(void **)(this + 0x38);
  }
  else {
    (*(code *)puVar1[3])(*puVar1);
    puVar1 = *(undefined8 **)(this + 0x30);
    __ptr = *(void **)(this + 0x38);
  }
  if ((puVar1 != (undefined8 *)0x0) && ((code *)puVar1[3] != (code *)0x0)) {
    (*(code *)puVar1[3])(*puVar1);
    operator_delete(this,0x90);
    return;
  }
  free(__ptr);
  operator_delete(this,0x90);
  return;
}



/* VmaDefragmentationContext_T::UpdateVectorStatistics(VmaBlockVector&,
   VmaDefragmentationContext_T::StateBalanced&) [clone .cold] */

void VmaDefragmentationContext_T::UpdateVectorStatistics
               (VmaBlockVector *param_1,StateBalanced *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VmaVector<char, VmaStlAllocator<char> >::resize(unsigned long) */

void __thiscall
VmaVector<char,VmaStlAllocator<char>>::resize
          (VmaVector<char,VmaStlAllocator<char>> *this,ulong param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 < param_1) {
    uVar3 = uVar2 * 3 >> 1;
    if (uVar2 * 3 < 0x10) {
      uVar3 = 8;
    }
    if (uVar3 <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 != uVar3) {
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(1,uVar3);
      }
      else {
        __dest = (void *)(*(code *)puVar1[1])(*puVar1,uVar3,1,1);
      }
      uVar2 = *(ulong *)(this + 0x10);
      if (param_1 <= *(ulong *)(this + 0x10)) {
        uVar2 = param_1;
      }
      if (uVar2 != 0) {
        memcpy(__dest,*(void **)(this + 8),uVar2);
      }
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
        free(*(void **)(this + 8));
      }
      else {
        (*(code *)puVar1[3])(*puVar1);
      }
      *(ulong *)(this + 0x18) = uVar3;
      *(void **)(this + 8) = __dest;
    }
  }
  *(ulong *)(this + 0x10) = param_1;
  return;
}



/* VmaVector<VmaSuballocation, VmaStlAllocator<VmaSuballocation> >::resize(unsigned long) */

void __thiscall
VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>>::resize
          (VmaVector<VmaSuballocation,VmaStlAllocator<VmaSuballocation>> *this,ulong param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 < param_1) {
    uVar3 = uVar2 * 3 >> 1;
    if (uVar2 * 3 < 0x10) {
      uVar3 = 8;
    }
    if (uVar3 <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 != uVar3) {
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(8,uVar3 << 5);
      }
      else {
        __dest = (void *)(*(code *)puVar1[1])(*puVar1,uVar3 << 5,8,1);
      }
      uVar2 = *(ulong *)(this + 0x10);
      if (param_1 <= *(ulong *)(this + 0x10)) {
        uVar2 = param_1;
      }
      if (uVar2 != 0) {
        memcpy(__dest,*(void **)(this + 8),uVar2 << 5);
      }
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
        free(*(void **)(this + 8));
      }
      else {
        (*(code *)puVar1[3])(*puVar1);
      }
      *(ulong *)(this + 0x18) = uVar3;
      *(void **)(this + 8) = __dest;
    }
  }
  *(ulong *)(this + 0x10) = param_1;
  return;
}



/* VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Free(VmaBlockMetadata_TLSF::Block*) */

void __thiscall
VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Free
          (VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *this,Block *param_1)

{
  long lVar1;
  Block *pBVar2;
  ulong *puVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 0x20);
  lVar4 = lVar1 + -1;
  if (lVar1 != 0) {
    puVar3 = (ulong *)(*(long *)(this + 0x18) + -0x10 + lVar1 * 0x10);
    do {
      pBVar2 = (Block *)*puVar3;
      if ((pBVar2 <= param_1) && (param_1 < pBVar2 + (ulong)(uint)puVar3[1] * 0x30)) {
        *(undefined4 *)param_1 = *(undefined4 *)((long)puVar3 + 0xc);
        *(int *)((long)puVar3 + 0xc) = (int)((long)param_1 - (long)pBVar2 >> 4) * -0x55555555;
        return;
      }
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + -2;
    } while (lVar4 != -1);
  }
  return;
}



/* VmaVector<VmaDefragmentationContext_T::FragmentedBlock,
   VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>
   >::push_back(VmaDefragmentationContext_T::FragmentedBlock const&) */

void __thiscall
VmaVector<VmaDefragmentationContext_T::FragmentedBlock,VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>>
::push_back(VmaVector<VmaDefragmentationContext_T::FragmentedBlock,VmaStlAllocator<VmaDefragmentationContext_T::FragmentedBlock>>
            *this,FragmentedBlock *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *__dest;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(this + 0x10);
  uVar6 = *(ulong *)(this + 0x18);
  uVar1 = uVar2 + 1;
  if (uVar6 < uVar1) {
    uVar7 = uVar6 * 3 >> 1;
    if (uVar6 * 3 < 0x10) {
      uVar7 = 8;
    }
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (uVar6 != uVar7) {
      puVar3 = *(undefined8 **)this;
      if ((puVar3 == (undefined8 *)0x0) || ((code *)puVar3[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(8,uVar7 << 4);
        uVar6 = uVar2;
      }
      else {
        __dest = (void *)(*(code *)puVar3[1])(*puVar3,uVar7 << 4,8,1);
        uVar6 = *(ulong *)(this + 0x10);
      }
      if (uVar1 <= uVar6) {
        uVar6 = uVar1;
      }
      if (uVar6 != 0) {
        memcpy(__dest,*(void **)(this + 8),uVar6 << 4);
      }
      puVar3 = *(undefined8 **)this;
      if ((puVar3 == (undefined8 *)0x0) || ((code *)puVar3[3] == (code *)0x0)) {
        free(*(void **)(this + 8));
      }
      else {
        (*(code *)puVar3[3])(*puVar3);
      }
      *(ulong *)(this + 0x18) = uVar7;
      *(void **)(this + 8) = __dest;
      goto LAB_001144d4;
    }
  }
  __dest = *(void **)(this + 8);
LAB_001144d4:
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(ulong *)(this + 0x10) = uVar1;
  puVar3 = (undefined8 *)((long)__dest + uVar2 * 0x10);
  *puVar3 = uVar4;
  puVar3[1] = uVar5;
  return;
}



/* VmaVector<VmaJsonWriter::StackItem, VmaStlAllocator<VmaJsonWriter::StackItem> >::resize(unsigned
   long) */

void __thiscall
VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>>::resize
          (VmaVector<VmaJsonWriter::StackItem,VmaStlAllocator<VmaJsonWriter::StackItem>> *this,
          ulong param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 < param_1) {
    uVar3 = uVar2 * 3 >> 1;
    if (uVar2 * 3 < 0x10) {
      uVar3 = 8;
    }
    if (uVar3 <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 != uVar3) {
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(4,uVar3 * 0xc);
      }
      else {
        __dest = (void *)(*(code *)puVar1[1])(*puVar1,uVar3 * 0xc,4,1);
      }
      uVar2 = *(ulong *)(this + 0x10);
      if (param_1 <= *(ulong *)(this + 0x10)) {
        uVar2 = param_1;
      }
      if (uVar2 != 0) {
        memcpy(__dest,*(void **)(this + 8),uVar2 * 0xc);
      }
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
        free(*(void **)(this + 8));
      }
      else {
        (*(code *)puVar1[3])(*puVar1);
      }
      *(ulong *)(this + 0x18) = uVar3;
      *(void **)(this + 8) = __dest;
    }
  }
  *(ulong *)(this + 0x10) = param_1;
  return;
}



/* VmaVector<VmaDeviceMemoryBlock*, VmaStlAllocator<VmaDeviceMemoryBlock*> >::resize(unsigned long)
    */

void __thiscall
VmaVector<VmaDeviceMemoryBlock*,VmaStlAllocator<VmaDeviceMemoryBlock*>>::resize
          (VmaVector<VmaDeviceMemoryBlock*,VmaStlAllocator<VmaDeviceMemoryBlock*>> *this,
          ulong param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 < param_1) {
    uVar3 = uVar2 * 3 >> 1;
    if (uVar2 * 3 < 0x10) {
      uVar3 = 8;
    }
    if (uVar3 <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 != uVar3) {
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(8,uVar3 * 8);
      }
      else {
        __dest = (void *)(*(code *)puVar1[1])(*puVar1,uVar3 * 8,8,1);
      }
      uVar2 = *(ulong *)(this + 0x10);
      if (param_1 <= *(ulong *)(this + 0x10)) {
        uVar2 = param_1;
      }
      if (uVar2 != 0) {
        memcpy(__dest,*(void **)(this + 8),uVar2 << 3);
      }
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
        free(*(void **)(this + 8));
      }
      else {
        (*(code *)puVar1[3])(*puVar1);
      }
      *(ulong *)(this + 0x18) = uVar3;
      *(void **)(this + 8) = __dest;
    }
  }
  *(ulong *)(this + 0x10) = param_1;
  return;
}



/* VmaVector<VmaDefragmentationMove, VmaStlAllocator<VmaDefragmentationMove> >::resize(unsigned
   long) */

void __thiscall
VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>>::resize
          (VmaVector<VmaDefragmentationMove,VmaStlAllocator<VmaDefragmentationMove>> *this,
          ulong param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 < param_1) {
    uVar3 = uVar2 * 3 >> 1;
    if (uVar2 * 3 < 0x10) {
      uVar3 = 8;
    }
    if (uVar3 <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 != uVar3) {
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(8,uVar3 * 0x18);
      }
      else {
        __dest = (void *)(*(code *)puVar1[1])(*puVar1,uVar3 * 0x18,8,1);
      }
      uVar2 = *(ulong *)(this + 0x10);
      if (param_1 <= *(ulong *)(this + 0x10)) {
        uVar2 = param_1;
      }
      if (uVar2 != 0) {
        memcpy(__dest,*(void **)(this + 8),uVar2 * 0x18);
      }
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
        free(*(void **)(this + 8));
      }
      else {
        (*(code *)puVar1[3])(*puVar1);
      }
      *(ulong *)(this + 0x18) = uVar3;
      *(void **)(this + 8) = __dest;
    }
  }
  *(ulong *)(this + 0x10) = param_1;
  return;
}



/* VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock,
   VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock> >::resize(unsigned
   long) */

void __thiscall
VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>>
::resize(VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>>
         *this,ulong param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 < param_1) {
    uVar3 = uVar2 * 3 >> 1;
    if (uVar2 * 3 < 0x10) {
      uVar3 = 8;
    }
    if (uVar3 <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 != uVar3) {
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(8,uVar3 << 4);
      }
      else {
        __dest = (void *)(*(code *)puVar1[1])(*puVar1,uVar3 << 4,8,1);
      }
      uVar2 = *(ulong *)(this + 0x10);
      if (param_1 <= *(ulong *)(this + 0x10)) {
        uVar2 = param_1;
      }
      if (uVar2 != 0) {
        memcpy(__dest,*(void **)(this + 8),uVar2 << 4);
      }
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
        free(*(void **)(this + 8));
      }
      else {
        (*(code *)puVar1[3])(*puVar1);
      }
      *(ulong *)(this + 0x18) = uVar3;
      *(void **)(this + 8) = __dest;
    }
  }
  *(ulong *)(this + 0x10) = param_1;
  return;
}



/* VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::CreateNewBlock() */

long __thiscall
VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::CreateNewBlock
          (VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *this)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = *(long *)(this + 0x20);
  if (lVar7 == 0) {
    uVar5 = *(uint *)(this + 8);
  }
  else {
    uVar5 = (uint)(*(int *)(lVar7 * 0x10 + *(long *)(this + 0x18) + -8) * 3) >> 1;
  }
  puVar8 = *(undefined8 **)this;
  lVar6 = (ulong)uVar5 * 0x30;
  if ((puVar8 == (undefined8 *)0x0) || ((code *)puVar8[1] == (code *)0x0)) {
    puVar2 = (uint *)aligned_alloc(8,lVar6);
  }
  else {
    puVar2 = (uint *)(*(code *)puVar8[1])(*puVar8,lVar6,8,1);
    lVar7 = *(long *)(this + 0x20);
  }
  VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>>
  ::resize((VmaVector<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::ItemBlock>>
            *)(this + 0x10),lVar7 + 1);
  puVar8 = (undefined8 *)(lVar7 * 0x10 + *(long *)(this + 0x18));
  *puVar8 = puVar2;
  puVar8[1] = (ulong)uVar5;
  if (uVar5 != 1) {
    uVar3 = 0;
    puVar4 = puVar2;
    do {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 0xc;
    } while (uVar1 != uVar5 - 1);
    puVar2 = puVar2 + uVar3 * 0xc;
  }
  *puVar2 = 0xffffffff;
  return *(long *)(this + 0x18) + -0x10 + *(long *)(this + 0x20) * 0x10;
}



/* VmaBlockMetadata_TLSF::Block* VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Alloc<>() */

Block * __thiscall
VmaPoolAllocator<VmaBlockMetadata_TLSF::Block>::Alloc<>
          (VmaPoolAllocator<VmaBlockMetadata_TLSF::Block> *this)

{
  long lVar1;
  undefined8 *puVar2;
  Block *pBVar3;
  long *plVar4;
  
  lVar1 = *(long *)(this + 0x20);
  do {
    lVar1 = lVar1 + -1;
    if (lVar1 == -1) {
      puVar2 = (undefined8 *)CreateNewBlock(this);
      pBVar3 = (Block *)*puVar2;
      *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)pBVar3;
      *(undefined1 (*) [16])pBVar3 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pBVar3 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pBVar3 + 0x20) = (undefined1  [16])0x0;
      return pBVar3;
    }
    plVar4 = (long *)(lVar1 * 0x10 + *(long *)(this + 0x18));
  } while (*(uint *)((long)plVar4 + 0xc) == 0xffffffff);
  pBVar3 = (Block *)((ulong)*(uint *)((long)plVar4 + 0xc) * 0x30 + *plVar4);
  *(undefined4 *)((long)plVar4 + 0xc) = *(undefined4 *)pBVar3;
  *(undefined1 (*) [16])pBVar3 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pBVar3 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pBVar3 + 0x20) = (undefined1  [16])0x0;
  return pBVar3;
}



/* VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock,
   VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock> >::resize(unsigned long) */

void __thiscall
VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>>
::resize(VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>>
         *this,ulong param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 < param_1) {
    uVar3 = uVar2 * 3 >> 1;
    if (uVar2 * 3 < 0x10) {
      uVar3 = 8;
    }
    if (uVar3 <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 != uVar3) {
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(8,uVar3 << 4);
      }
      else {
        __dest = (void *)(*(code *)puVar1[1])(*puVar1,uVar3 << 4,8,1);
      }
      uVar2 = *(ulong *)(this + 0x10);
      if (param_1 <= *(ulong *)(this + 0x10)) {
        uVar2 = param_1;
      }
      if (uVar2 != 0) {
        memcpy(__dest,*(void **)(this + 8),uVar2 << 4);
      }
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
        free(*(void **)(this + 8));
      }
      else {
        (*(code *)puVar1[3])(*puVar1);
      }
      *(ulong *)(this + 0x18) = uVar3;
      *(void **)(this + 8) = __dest;
    }
  }
  *(ulong *)(this + 0x10) = param_1;
  return;
}



/* VmaPoolAllocator<VmaAllocation_T>::CreateNewBlock() */

long __thiscall
VmaPoolAllocator<VmaAllocation_T>::CreateNewBlock(VmaPoolAllocator<VmaAllocation_T> *this)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = *(long *)(this + 0x20);
  if (lVar7 == 0) {
    uVar5 = *(uint *)(this + 8);
  }
  else {
    uVar5 = (uint)(*(int *)(lVar7 * 0x10 + *(long *)(this + 0x18) + -8) * 3) >> 1;
  }
  puVar8 = *(undefined8 **)this;
  lVar6 = (ulong)uVar5 * 0x58;
  if ((puVar8 == (undefined8 *)0x0) || ((code *)puVar8[1] == (code *)0x0)) {
    puVar2 = (uint *)aligned_alloc(8,lVar6);
  }
  else {
    puVar2 = (uint *)(*(code *)puVar8[1])(*puVar8,lVar6,8,1);
    lVar7 = *(long *)(this + 0x20);
  }
  VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>>
  ::resize((VmaVector<VmaPoolAllocator<VmaAllocation_T>::ItemBlock,VmaStlAllocator<VmaPoolAllocator<VmaAllocation_T>::ItemBlock>>
            *)(this + 0x10),lVar7 + 1);
  puVar8 = (undefined8 *)(lVar7 * 0x10 + *(long *)(this + 0x18));
  *puVar8 = puVar2;
  puVar8[1] = (ulong)uVar5;
  if (uVar5 != 1) {
    uVar3 = 0;
    puVar4 = puVar2;
    do {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 0x16;
    } while (uVar1 != uVar5 - 1);
    puVar2 = puVar2 + uVar3 * 0x16;
  }
  *puVar2 = 0xffffffff;
  return *(long *)(this + 0x18) + -0x10 + *(long *)(this + 0x20) * 0x10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaAllocation_T* VmaPoolAllocator<VmaAllocation_T>::Alloc<bool const&>(bool const&) */

VmaAllocation_T * __thiscall
VmaPoolAllocator<VmaAllocation_T>::Alloc<bool_const&>
          (VmaPoolAllocator<VmaAllocation_T> *this,bool *param_1)

{
  bool bVar1;
  VmaAllocation_T *pVVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  uVar5 = _UNK_001153a8;
  uVar3 = __LC6;
  lVar6 = *(long *)(this + 0x20);
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == -1) {
      puVar7 = (undefined8 *)CreateNewBlock(this);
      uVar4 = _UNK_001153a8;
      uVar5 = __LC6;
      pVVar2 = (VmaAllocation_T *)*puVar7;
      *(undefined4 *)((long)puVar7 + 0xc) = *(undefined4 *)pVVar2;
      uVar3 = VmaBufferImageUsage::UNKNOWN;
      bVar1 = *param_1;
      *(undefined8 *)(pVVar2 + 0x28) = uVar5;
      *(undefined8 *)(pVVar2 + 0x30) = uVar4;
      *(undefined8 *)(pVVar2 + 0x48) = 0x10000000000;
      *(undefined8 *)(pVVar2 + 0x50) = uVar3;
      *(undefined1 (*) [16])(pVVar2 + 0x38) = (undefined1  [16])0x0;
      if (bVar1 == false) {
        return pVVar2;
      }
      pVVar2[0x4f] = (VmaAllocation_T)0x2;
      return pVVar2;
    }
    plVar8 = (long *)(lVar6 * 0x10 + *(long *)(this + 0x18));
  } while (*(uint *)((long)plVar8 + 0xc) == 0xffffffff);
  pVVar2 = (VmaAllocation_T *)(*plVar8 + (ulong)*(uint *)((long)plVar8 + 0xc) * 0x58);
  *(undefined4 *)((long)plVar8 + 0xc) = *(undefined4 *)pVVar2;
  uVar4 = VmaBufferImageUsage::UNKNOWN;
  bVar1 = *param_1;
  *(undefined8 *)(pVVar2 + 0x28) = uVar3;
  *(undefined8 *)(pVVar2 + 0x30) = uVar5;
  *(undefined8 *)(pVVar2 + 0x48) = 0x10000000000;
  *(undefined8 *)(pVVar2 + 0x50) = uVar4;
  *(undefined1 (*) [16])(pVVar2 + 0x38) = (undefined1  [16])0x0;
  if (bVar1 == false) {
    return pVVar2;
  }
  pVVar2[0x4f] = (VmaAllocation_T)0x2;
  return pVVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VmaAllocation_T* VmaPoolAllocator<VmaAllocation_T>::Alloc<bool&>(bool&) */

VmaAllocation_T * __thiscall
VmaPoolAllocator<VmaAllocation_T>::Alloc<bool&>
          (VmaPoolAllocator<VmaAllocation_T> *this,bool *param_1)

{
  bool bVar1;
  VmaAllocation_T *pVVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  uVar5 = _UNK_001153a8;
  uVar3 = __LC6;
  lVar6 = *(long *)(this + 0x20);
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == -1) {
      puVar7 = (undefined8 *)CreateNewBlock(this);
      uVar4 = _UNK_001153a8;
      uVar5 = __LC6;
      pVVar2 = (VmaAllocation_T *)*puVar7;
      *(undefined4 *)((long)puVar7 + 0xc) = *(undefined4 *)pVVar2;
      uVar3 = VmaBufferImageUsage::UNKNOWN;
      bVar1 = *param_1;
      *(undefined8 *)(pVVar2 + 0x28) = uVar5;
      *(undefined8 *)(pVVar2 + 0x30) = uVar4;
      *(undefined8 *)(pVVar2 + 0x48) = 0x10000000000;
      *(undefined8 *)(pVVar2 + 0x50) = uVar3;
      *(undefined1 (*) [16])(pVVar2 + 0x38) = (undefined1  [16])0x0;
      if (bVar1 == false) {
        return pVVar2;
      }
      pVVar2[0x4f] = (VmaAllocation_T)0x2;
      return pVVar2;
    }
    plVar8 = (long *)(lVar6 * 0x10 + *(long *)(this + 0x18));
  } while (*(uint *)((long)plVar8 + 0xc) == 0xffffffff);
  pVVar2 = (VmaAllocation_T *)(*plVar8 + (ulong)*(uint *)((long)plVar8 + 0xc) * 0x58);
  *(undefined4 *)((long)plVar8 + 0xc) = *(undefined4 *)pVVar2;
  uVar4 = VmaBufferImageUsage::UNKNOWN;
  bVar1 = *param_1;
  *(undefined8 *)(pVVar2 + 0x28) = uVar3;
  *(undefined8 *)(pVVar2 + 0x30) = uVar5;
  *(undefined8 *)(pVVar2 + 0x48) = 0x10000000000;
  *(undefined8 *)(pVVar2 + 0x50) = uVar4;
  *(undefined1 (*) [16])(pVVar2 + 0x38) = (undefined1  [16])0x0;
  if (bVar1 == false) {
    return pVVar2;
  }
  pVVar2[0x4f] = (VmaAllocation_T)0x2;
  return pVVar2;
}



/* VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::resize(unsigned long) */

void __thiscall
VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>>::resize
          (VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>> *this,ulong param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x18);
  if (uVar2 < param_1) {
    uVar3 = uVar2 * 3 >> 1;
    if (uVar2 * 3 < 0x10) {
      uVar3 = 8;
    }
    if (uVar3 <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 != uVar3) {
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(8,uVar3 * 0x28);
      }
      else {
        __dest = (void *)(*(code *)puVar1[1])(*puVar1,uVar3 * 0x28,8,1);
      }
      uVar2 = *(ulong *)(this + 0x10);
      if (param_1 <= *(ulong *)(this + 0x10)) {
        uVar2 = param_1;
      }
      if (uVar2 != 0) {
        memcpy(__dest,*(void **)(this + 8),uVar2 * 0x28);
      }
      puVar1 = *(undefined8 **)this;
      if ((puVar1 == (undefined8 *)0x0) || ((code *)puVar1[3] == (code *)0x0)) {
        free(*(void **)(this + 8));
      }
      else {
        (*(code *)puVar1[3])(*puVar1);
      }
      *(ulong *)(this + 0x18) = uVar3;
      *(void **)(this + 8) = __dest;
    }
  }
  *(ulong *)(this + 0x10) = param_1;
  return;
}



/* VmaVector<VkMappedMemoryRange, VmaStlAllocator<VkMappedMemoryRange> >::shrink_to_fit() */

void __thiscall
VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>>::shrink_to_fit
          (VmaVector<VkMappedMemoryRange,VmaStlAllocator<VkMappedMemoryRange>> *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__ptr;
  void *__dest;
  size_t __n;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (uVar1 < *(ulong *)(this + 0x18)) {
    __dest = (void *)0x0;
    if (uVar1 == 0) {
      puVar2 = *(undefined8 **)this;
      __ptr = *(void **)(this + 8);
    }
    else {
      puVar2 = *(undefined8 **)this;
      __n = uVar1 * 0x28;
      if ((puVar2 == (undefined8 *)0x0) || ((code *)puVar2[1] == (code *)0x0)) {
        __dest = (void *)aligned_alloc(8);
      }
      else {
        __dest = (void *)(*(code *)puVar2[1])(*puVar2,__n,8,1);
        __n = *(long *)(this + 0x10) * 0x28;
      }
      memcpy(__dest,*(void **)(this + 8),__n);
      puVar2 = *(undefined8 **)this;
      __ptr = *(void **)(this + 8);
    }
    if ((puVar2 == (undefined8 *)0x0) || ((code *)puVar2[3] == (code *)0x0)) {
      free(__ptr);
    }
    else {
      (*(code *)puVar2[3])(*puVar2);
    }
    *(void **)(this + 8) = __dest;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
    return;
  }
  return;
}



/* VmaBufferImageUsage::UNKNOWN */

void VmaBufferImageUsage::_GLOBAL__sub_I_UNKNOWN(void)

{
  UNKNOWN = 0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear() */

void __thiscall VmaBlockMetadata_Linear::~VmaBlockMetadata_Linear(VmaBlockMetadata_Linear *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


