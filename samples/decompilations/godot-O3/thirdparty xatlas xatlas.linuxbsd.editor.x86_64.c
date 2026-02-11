
/* xatlas::internal::nextPowerOfTwo(unsigned int) */

int xatlas::internal::nextPowerOfTwo(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1 >> 1 | param_1 - 1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  return (uVar1 >> 0x10 | uVar1) + 1;
}



/* void xatlas::internal::insertionSort<unsigned int>(unsigned int*, unsigned int) */

void xatlas::internal::insertionSort<unsigned_int>(uint *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  
  uVar4 = 0;
  if (1 < (int)param_2) {
    do {
      uVar1 = param_1[uVar4 + 1];
      uVar2 = uVar4;
      do {
        if (param_1[uVar2] <= uVar1) {
          puVar3 = param_1 + ((int)uVar2 + 1);
          break;
        }
        param_1[uVar2 + 1] = param_1[uVar2];
        uVar2 = uVar2 - 1;
        puVar3 = param_1;
      } while ((int)uVar2 != -1);
      uVar4 = uVar4 + 1;
      *puVar3 = uVar1;
    } while (param_2 - 1 != uVar4);
  }
  return;
}



/* xatlas::internal::Realloc(void*, unsigned long, int, char const*, int) [clone .part.0] */

void xatlas::internal::Realloc(void *param_1,ulong param_2,int param_3,char *param_4,int param_5)

{
  (*(code *)s_realloc)();
  return;
}



/* xatlas::internal::RadixSort::radixSort(xatlas::internal::ConstArrayView<unsigned int>) [clone
   .isra.0] */

void xatlas::internal::RadixSort::radixSort(long *param_1,byte *param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  ulong uVar16;
  char cVar17;
  long in_FS_OFFSET;
  long local_1838 [256];
  int local_1038 [256];
  int local_c38 [256];
  int local_838 [256];
  int local_438 [256];
  int local_38 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = (ulong)param_3;
  piVar14 = local_1038;
  piVar15 = piVar14;
  for (lVar13 = 0x200; lVar13 != 0; lVar13 = lVar13 + -1) {
    piVar15[0] = 0;
    piVar15[1] = 0;
    piVar15 = piVar15 + 2;
  }
  pbVar8 = param_2;
  if (param_2 != param_2 + uVar16 * 4) {
    do {
      pbVar9 = pbVar8 + 4;
      piVar14[*pbVar8] = piVar14[*pbVar8] + 1;
      local_c38[pbVar8[1]] = local_c38[pbVar8[1]] + 1;
      local_838[pbVar8[2]] = local_838[pbVar8[2]] + 1;
      local_438[pbVar8[3]] = local_438[pbVar8[3]] + 1;
      pbVar8 = pbVar9;
    } while (param_2 + uVar16 * 4 != pbVar9);
  }
  cVar17 = (char)param_1[8];
  do {
    bVar2 = *param_2;
    if (piVar14[bVar2] != param_3) {
      lVar1 = param_1[1];
      lVar10 = 0;
      local_1838[0] = lVar1;
      lVar13 = lVar1;
      do {
        lVar13 = lVar13 + (ulong)(uint)piVar14[lVar10] * 4;
        local_1838[lVar10 + 1] = lVar13;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0xff);
      if (cVar17 == '\0') {
        if (param_3 != 0) {
          puVar5 = (undefined4 *)local_1838[bVar2];
          *puVar5 = 0;
          uVar7 = 1;
          local_1838[bVar2] = (long)(puVar5 + 1);
          if (param_3 != 1) {
            do {
              bVar2 = param_2[uVar7 * 4];
              puVar6 = (uint *)local_1838[bVar2];
              *puVar6 = uVar7;
              uVar7 = uVar7 + 1;
              local_1838[bVar2] = (long)(puVar6 + 1);
            } while (uVar7 != param_3);
          }
        }
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else if (param_3 != 0) {
        piVar11 = (int *)*param_1;
        piVar15 = piVar11 + uVar16;
        do {
          iVar3 = *piVar11;
          piVar11 = piVar11 + 1;
          bVar2 = param_2[(uint)(iVar3 * 4)];
          piVar4 = (int *)local_1838[bVar2];
          *piVar4 = iVar3;
          local_1838[bVar2] = (long)(piVar4 + 1);
        } while (piVar15 != piVar11);
      }
      lVar13 = *param_1;
      cVar17 = '\x01';
      *param_1 = lVar1;
      param_1[1] = lVar13;
    }
    piVar14 = piVar14 + 0x100;
    param_2 = param_2 + 1;
  } while (local_38 != piVar14);
  if (cVar17 != '\0') goto LAB_00100235;
  if (param_3 != 0) {
    puVar5 = (undefined4 *)*param_1;
    uVar12 = 0;
    if ((param_3 & 1) != 0) {
      *puVar5 = 0;
      uVar12 = 1;
      if (uVar16 == 1) goto LAB_00100230;
    }
    do {
      puVar5[uVar12] = (int)uVar12;
      lVar13 = uVar12 + 1;
      uVar12 = uVar12 + 2;
      puVar5[lVar13] = (int)lVar13;
    } while (uVar16 != uVar12);
  }
LAB_00100230:
  *(undefined1 *)(param_1 + 8) = 1;
LAB_00100235:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::cross(xatlas::internal::Vector3 const&, xatlas::internal::Vector3 const&)
   [clone .isra.0] */

undefined8 xatlas::internal::cross(Vector3 *param_1,Vector3 *param_2)

{
  float in_XMM0_Da;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  return CONCAT44(in_XMM2_Da * in_XMM3_Da - in_XMM5_Da * in_XMM0_Da,
                  in_XMM1_Da * in_XMM5_Da - in_XMM4_Da * in_XMM2_Da);
}



/* xatlas::internal::linesIntersect(xatlas::internal::Vector2 const&, xatlas::internal::Vector2
   const&, xatlas::internal::Vector2 const&, xatlas::internal::Vector2 const&, float) [clone
   .isra.0] */

bool xatlas::internal::linesIntersect
               (Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4,float param_5)

{
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar1;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float in_XMM6_Da;
  float in_XMM7_Da;
  float fVar2;
  float fVar3;
  float in_stack_00000008;
  
  fVar3 = (in_XMM2_Da - param_5) * (in_XMM7_Da - in_XMM5_Da) -
          (in_XMM6_Da - in_XMM4_Da) * (in_XMM3_Da - in_XMM1_Da);
  fVar2 = (float)((uint)fVar3 & _LC37);
  fVar1 = in_stack_00000008;
  if ((0.0 < fVar2) && (_LC4 <= fVar2)) {
    fVar1 = fVar2 * in_stack_00000008;
  }
  if (fVar1 < fVar2) {
    fVar1 = ((in_XMM2_Da - param_5) * (in_XMM1_Da - in_XMM5_Da) -
            (in_XMM3_Da - in_XMM1_Da) * (param_5 - in_XMM4_Da)) / fVar3;
    if (((in_stack_00000008 < fVar1) && (fVar1 < _LC4 - in_stack_00000008)) &&
       (fVar3 = ((in_XMM6_Da - in_XMM4_Da) * (in_XMM1_Da - in_XMM5_Da) -
                (in_XMM7_Da - in_XMM5_Da) * (param_5 - in_XMM4_Da)) / fVar3,
       in_stack_00000008 < fVar3)) {
      return fVar3 < _LC4 - in_stack_00000008;
    }
  }
  return false;
}



/* xatlas::internal::equal(xatlas::internal::Vector2 const&, xatlas::internal::Vector2 const&,
   float) [clone .isra.0] */

bool xatlas::internal::equal(Vector2 *param_1,Vector2 *param_2,float param_3)

{
  float fVar1;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float fVar2;
  
  fVar1 = (float)((uint)param_3 & _LC37);
  if ((float)((uint)param_3 & _LC37) <= (float)((uint)in_XMM2_Da & _LC37)) {
    fVar1 = (float)((uint)in_XMM2_Da & _LC37);
  }
  fVar2 = in_XMM4_Da;
  if (_LC4 <= fVar1) {
    fVar2 = fVar1 * in_XMM4_Da;
  }
  if ((float)((uint)(param_3 - in_XMM2_Da) & _LC37) <= fVar2) {
    fVar1 = (float)((uint)in_XMM1_Da & _LC37);
    if ((float)((uint)in_XMM1_Da & _LC37) <= (float)((uint)in_XMM3_Da & _LC37)) {
      fVar1 = (float)((uint)in_XMM3_Da & _LC37);
    }
    fVar2 = (float)((uint)(in_XMM1_Da - in_XMM3_Da) & _LC37);
    if (fVar1 < _LC4) {
      return fVar2 <= in_XMM4_Da;
    }
    return fVar2 <= in_XMM4_Da * fVar1;
  }
  return false;
}



/* xatlas::internal::TaskScheduler::wait(xatlas::internal::TaskGroupHandle*) [clone .isra.0] */

ulong __thiscall xatlas::internal::TaskScheduler::wait(TaskScheduler *this,TaskGroupHandle *param_1)

{
  TaskScheduler *pTVar1;
  TaskScheduler *pTVar2;
  TaskScheduler TVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(uint *)param_1;
  if (uVar4 == 0xffffffff) {
    return (ulong)uVar4;
  }
  pTVar2 = this + (ulong)uVar4 * 0x38;
  pTVar1 = pTVar2 + 0x24;
  while( true ) {
    do {
      LOCK();
      TVar3 = *pTVar1;
      *pTVar1 = (TaskScheduler)0x1;
      UNLOCK();
    } while (TVar3 != (TaskScheduler)0x0);
    uVar4 = *(uint *)(pTVar2 + 0x20);
    if (*(uint *)(pTVar2 + 0x14) <= uVar4) break;
    puVar5 = (undefined8 *)((ulong)uVar4 * 0x10 + *(long *)(pTVar2 + 8));
    *(uint *)(pTVar2 + 0x20) = uVar4 + 1;
    *pTVar1 = (TaskScheduler)0x0;
    if (puVar5 == (undefined8 *)0x0) goto LAB_001004c5;
    (*(code *)*puVar5)(*(undefined8 *)(pTVar2 + 0x30),puVar5[1]);
    LOCK();
    *(int *)(pTVar2 + 0x28) = *(int *)(pTVar2 + 0x28) + -1;
    UNLOCK();
  }
  pTVar2[0x24] = (TaskScheduler)0x0;
LAB_001004c5:
  while (*(int *)(pTVar2 + 0x28) != 0) {
    sched_yield();
  }
  LOCK();
  TVar3 = *pTVar2;
  *pTVar2 = (TaskScheduler)0x1;
  UNLOCK();
  *(undefined4 *)param_1 = 0xffffffff;
  return (ulong)(byte)TVar3;
}



/* xatlas::internal::Realloc(void*, unsigned long, int, char const*, int) [clone .constprop.0] */

undefined8
xatlas::internal::Realloc(void *param_1,ulong param_2,int param_3,char *param_4,int param_5)

{
  undefined8 uVar1;
  
  if (param_1 == (void *)0x0 && param_2 == 0) {
    return 0;
  }
  if ((param_2 == 0) && (s_free != (undefined *)0x0)) {
    (*(code *)s_free)();
    return 0;
  }
  uVar1 = (*(code *)s_realloc)();
  return uVar1;
}



/* xatlas::internal::normalize(xatlas::internal::Vector3 const&) [clone .isra.0] */

undefined8 xatlas::internal::normalize(Vector3 *param_1)

{
  float in_XMM0_Da;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar1;
  
  fVar1 = _LC4 / SQRT(in_XMM1_Da * in_XMM1_Da + in_XMM0_Da * in_XMM0_Da + in_XMM2_Da * in_XMM2_Da);
  return CONCAT44(fVar1 * in_XMM1_Da,fVar1 * in_XMM0_Da);
}



/* xatlas::internal::param::PiecewiseParam::orthoProjectFace(unsigned int,
   xatlas::internal::Vector2*) const [clone .isra.0] */

void xatlas::internal::param::PiecewiseParam::orthoProjectFace(uint param_1,Vector2 *param_2)

{
  float *pfVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *extraout_RDX;
  long lVar6;
  undefined4 in_register_0000003c;
  uint uVar7;
  float fVar8;
  undefined8 uVar9;
  float extraout_XMM1_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar5 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 0x40);
  uVar7 = (int)param_2 * 3;
  lVar6 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 0x58);
  pfVar1 = (float *)(lVar6 + (ulong)*(uint *)(lVar5 + (ulong)uVar7 * 4) * 0xc);
  fVar17 = *pfVar1;
  pVVar2 = (Vector3 *)(lVar6 + (ulong)*(uint *)(lVar5 + (ulong)(uVar7 + 2) * 4) * 0xc);
  fVar10 = pfVar1[1];
  fVar11 = pfVar1[2];
  pfVar1 = (float *)(lVar6 + (ulong)*(uint *)(lVar5 + (ulong)(uVar7 + 1) * 4) * 0xc);
  fVar15 = (*(float *)pVVar2 - fVar17) * (pfVar1[1] - fVar10) -
           (*(float *)(pVVar2 + 4) - fVar10) * (*pfVar1 - fVar17);
  fVar14 = (*(float *)(pVVar2 + 8) - fVar11) * (*pfVar1 - fVar17) -
           (*(float *)pVVar2 - fVar17) * (pfVar1[2] - fVar11);
  fVar12 = (*(float *)(pVVar2 + 4) - fVar10) * (pfVar1[2] - fVar11) -
           (*(float *)(pVVar2 + 8) - fVar11) * (pfVar1[1] - fVar10);
  fVar13 = SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar15 * fVar15);
  fVar8 = _LC6;
  fVar16 = _LC5;
  fVar18 = _LC6;
  if (0.0 < fVar13) {
    fVar13 = _LC4 / fVar13;
    fVar8 = (float)((uint)(fVar14 * fVar13) ^ (uint)_LC6);
    fVar16 = (float)((uint)(fVar15 * fVar13) ^ (uint)_LC6);
    fVar18 = (float)((uint)(fVar13 * fVar12) ^ (uint)_LC6);
  }
  uVar9 = normalize(pVVar2);
  fVar13 = (float)((ulong)uVar9 >> 0x20);
  fVar12 = (float)uVar9;
  fVar14 = fVar13 * fVar18 - fVar12 * fVar8;
  fVar18 = fVar12 * fVar16 - fVar18 * extraout_XMM1_Da;
  fVar8 = fVar8 * extraout_XMM1_Da - fVar16 * fVar13;
  *extraout_RDX =
       CONCAT44(fVar8 * fVar17 + fVar18 * fVar10 + fVar14 * fVar11,
                fVar13 * fVar10 + fVar12 * fVar17 + extraout_XMM1_Da * fVar11);
  lVar4 = 1;
  while (puVar3 = (undefined8 *)
                  (lVar6 + (ulong)*(uint *)(lVar5 + (ulong)(uVar7 + (int)lVar4) * 4) * 0xc),
        uVar9 = *puVar3, fVar17 = *(float *)(puVar3 + 1), fVar10 = (float)uVar9,
        fVar11 = (float)((ulong)uVar9 >> 0x20),
        extraout_RDX[lVar4] =
             CONCAT44(fVar11 * fVar18 + fVar10 * fVar8 + fVar17 * fVar14,
                      fVar11 * fVar13 + fVar10 * fVar12 + fVar17 * extraout_XMM1_Da), lVar4 == 1) {
    lVar4 = 2;
  }
  return;
}



/* xatlas::DestroyOutputMeshes(xatlas::Context*) [clone .part.0] */

void xatlas::DestroyOutputMeshes(Context *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar4;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long lVar5;
  int in_R8D;
  long lVar6;
  
  lVar6 = 0;
  pcVar3 = (char *)(ulong)*(uint *)(param_1 + 0x28);
  if (0 < (int)*(uint *)(param_1 + 0x28)) {
LAB_00100840:
    do {
      lVar4 = *(long *)(param_1 + 8);
      plVar1 = (long *)(lVar4 + lVar6 * 0x28);
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        if ((int)plVar1[3] != 0) {
          lVar5 = 0;
          do {
            while (lVar4 = lVar5 * 3, *(long *)(lVar2 + lVar5 * 0x18) == 0) {
LAB_0010086c:
              lVar5 = lVar5 + 1;
              if (*(uint *)(plVar1 + 3) <= (uint)lVar5) goto LAB_0010089d;
            }
            if (internal::s_free == (undefined *)0x0) {
              (*(code *)internal::s_realloc)();
              lVar2 = *plVar1;
              lVar4 = extraout_RDX;
              goto LAB_0010086c;
            }
            (*(code *)internal::s_free)();
            lVar5 = lVar5 + 1;
            lVar2 = *plVar1;
            lVar4 = extraout_RDX_00;
          } while ((uint)lVar5 < *(uint *)(plVar1 + 3));
LAB_0010089d:
          if (lVar2 == 0) goto LAB_001007f0;
        }
        if (internal::s_free == (undefined *)0x0) {
          (*(code *)internal::s_realloc)(lVar2);
          lVar4 = extraout_RDX_01;
        }
        else {
          (*(code *)internal::s_free)(lVar2);
          lVar4 = extraout_RDX_02;
        }
      }
LAB_001007f0:
      in_EDX = (int)lVar4;
      if (plVar1[2] != 0) {
        if (internal::s_free == (undefined *)0x0) {
          (*(code *)internal::s_realloc)();
          in_EDX = extraout_EDX;
        }
        else {
          (*(code *)internal::s_free)();
          in_EDX = extraout_EDX_02;
        }
      }
      if (plVar1[1] != 0) {
        if (internal::s_free != (undefined *)0x0) {
          (*(code *)internal::s_free)();
          lVar6 = lVar6 + 1;
          in_EDX = extraout_EDX_01;
          if (*(int *)(param_1 + 0x28) <= (int)lVar6) break;
          goto LAB_00100840;
        }
        (*(code *)internal::s_realloc)();
        in_EDX = extraout_EDX_00;
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(param_1 + 0x28));
  }
  internal::Realloc(*(void **)(param_1 + 8),0,in_EDX,pcVar3,in_R8D);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* xatlas::internal::Fit::computeLeastSquaresNormal(xatlas::internal::ConstArrayView<xatlas::internal::Vector3>,
   xatlas::internal::Vector3*) [clone .isra.0] */

undefined8 __thiscall
xatlas::internal::Fit::computeLeastSquaresNormal(Fit *this,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  float fVar2;
  Fit *pFVar3;
  Fit *pFVar4;
  undefined7 uVar5;
  undefined8 *extraout_RDX;
  Fit *pFVar6;
  float fVar7;
  float fVar8;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar2 = _LC4;
  uVar1 = _LC37;
  if ((int)param_2 == 3) {
    cross((Vector3 *)this,(Vector3 *)CONCAT44((int)(param_2 >> 0x20),3));
    uVar11 = extraout_XMM0_Db;
    uVar9 = normalize((Vector3 *)this);
    *extraout_RDX = uVar9;
    *(undefined4 *)(extraout_RDX + 1) = uVar11;
    return 1;
  }
  fVar21 = _LC4 / (float)(param_2 & 0xffffffff);
  if ((int)param_2 == 0) {
    return 0;
  }
  fVar7 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  pFVar3 = this;
  do {
    fVar14 = fVar14 + *(float *)pFVar3;
    fVar13 = fVar13 + *(float *)(pFVar3 + 4);
    pFVar4 = pFVar3 + 0xc;
    fVar7 = fVar7 + *(float *)(pFVar3 + 8);
    pFVar3 = pFVar4;
  } while (this + (param_2 & 0xffffffff) * 0xc != pFVar4);
  fVar19 = 0.0;
  fVar17 = 0.0;
  fVar15 = 0.0;
  pFVar3 = this;
  fVar16 = fVar15;
  fVar18 = fVar17;
  fVar20 = fVar15;
  do {
    pFVar6 = pFVar3 + 0xc;
    fVar12 = *(float *)pFVar3 - fVar14 * fVar21;
    fVar10 = *(float *)(pFVar3 + 4) - fVar13 * fVar21;
    fVar8 = *(float *)(pFVar3 + 8) - fVar21 * fVar7;
    fVar20 = fVar20 + fVar12 * fVar12;
    fVar15 = fVar15 + fVar10 * fVar12;
    fVar16 = fVar16 + fVar12 * fVar8;
    fVar18 = fVar18 + fVar10 * fVar10;
    fVar17 = fVar17 + fVar10 * fVar8;
    fVar19 = fVar19 + fVar8 * fVar8;
    pFVar3 = pFVar6;
  } while (this + (param_2 & 0xffffffff) * 0xc != pFVar6);
  fVar7 = fVar18 * fVar19 - fVar17 * fVar17;
  fVar14 = fVar20 * fVar19 - fVar16 * fVar16;
  fVar13 = fVar20 * fVar18 - fVar15 * fVar15;
  fVar21 = fVar14;
  if (fVar14 <= fVar13) {
    fVar21 = fVar13;
  }
  if (fVar7 <= fVar21) {
    if (fVar21 <= 0.0) {
      return 0;
    }
    if (fVar7 != fVar21) {
      if (fVar14 == fVar21) {
        fVar13 = fVar15 * fVar16 - fVar20 * fVar17;
        fVar7 = fVar16 * fVar17 - fVar19 * fVar15;
      }
      else {
        if (fVar13 != fVar21) {
          return 0;
        }
        fVar14 = fVar15 * fVar16 - fVar20 * fVar17;
        fVar7 = fVar15 * fVar17 - fVar16 * fVar18;
      }
      fVar21 = fVar7 * fVar7;
      fVar16 = fVar14 * fVar14;
      goto LAB_00100a9d;
    }
  }
  else if (fVar7 <= 0.0) {
    return 0;
  }
  fVar21 = fVar7 * fVar7;
  fVar14 = fVar16 * fVar17 - fVar15 * fVar19;
  fVar13 = fVar15 * fVar17 - fVar18 * fVar16;
  fVar16 = fVar14 * fVar14;
LAB_00100a9d:
  fVar21 = SQRT(fVar21 + fVar16 + fVar13 * fVar13);
  if ((float)((uint)fVar21 & _LC37) <= _LC8) {
    return 0;
  }
  fVar21 = _LC4 / fVar21;
  fVar13 = fVar13 * fVar21;
  fVar7 = fVar7 * fVar21;
  fVar14 = fVar14 * fVar21;
  *(float *)(param_3 + 1) = fVar13;
  *param_3 = CONCAT44(fVar14,fVar7);
  fVar21 = SQRT(fVar7 * fVar7 + fVar14 * fVar14 + fVar13 * fVar13);
  fVar13 = (float)((uint)fVar21 & uVar1);
  fVar21 = (float)((uint)(fVar21 - fVar2) & uVar1);
  uVar5 = (undefined7)((ulong)pFVar4 >> 8);
  if (fVar13 <= fVar2) {
    return CONCAT71(uVar5,fVar21 <= _LC7);
  }
  return CONCAT71(uVar5,fVar21 <= fVar13 * _LC7);
}



/* xatlas::internal::RadixSort::sort(xatlas::internal::ConstArrayView<float>) [clone .isra.0] */

void xatlas::internal::RadixSort::sort(undefined8 *param_1,uint *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_3 == 0) {
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    *param_1 = param_1[2];
    param_1[1] = param_1[5];
    return;
  }
  *(uint *)((long)param_1 + 0x1c) = param_3;
  if (*(uint *)(param_1 + 4) < param_3) {
    ArrayBase::setArrayCapacity((int)param_1 + 0x10);
  }
  *(uint *)((long)param_1 + 0x34) = param_3;
  if (*(uint *)(param_1 + 7) < param_3) {
    ArrayBase::setArrayCapacity((int)param_1 + 0x28);
  }
  puVar4 = (uint *)param_1[2];
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = puVar4;
  param_1[1] = param_1[5];
  if (0x1f < param_3) {
    puVar4 = param_2;
    do {
      puVar5 = puVar4 + 1;
      *puVar4 = ((int)*puVar4 >> 0x1f | 0x80000000U) ^ *puVar4;
      puVar4 = puVar5;
    } while (puVar5 != param_2 + param_3);
    radixSort(param_1,param_2,param_3);
    puVar4 = param_2;
    do {
      puVar5 = puVar4 + 1;
      *puVar4 = (0xffffffffU - ((int)*puVar4 >> 0x1f) | 0x80000000) ^ *puVar4;
      puVar4 = puVar5;
    } while (puVar5 != param_2 + param_3);
    return;
  }
  *puVar4 = 0;
  if (param_3 != 1) {
    uVar8 = 1;
    lVar9 = 0;
    puVar5 = puVar4;
    do {
      puVar5 = puVar5 + 1;
      uVar7 = (uint)uVar8;
      *puVar5 = uVar7;
      fVar1 = (float)param_2[uVar8];
      uVar3 = uVar8 & 0xffffffff;
      puVar6 = puVar5;
      do {
        uVar2 = (uint)uVar3 - 1;
        if ((float)param_2[puVar6[lVar9 - uVar8]] <= fVar1) {
          if (uVar7 == (uint)uVar3) goto LAB_00100dd4;
          break;
        }
        *puVar6 = puVar6[lVar9 - uVar8];
        puVar6 = puVar6 + -1;
        uVar3 = (ulong)uVar2;
      } while (uVar2 != 0);
      puVar4[uVar3] = uVar7;
LAB_00100dd4:
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (param_3 != uVar8);
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::BoundingBox2D::compute(xatlas::internal::ConstArrayView<xatlas::internal::Vector2>)
   [clone .isra.0] */

void xatlas::internal::BoundingBox2D::compute
               (undefined8 *param_1,float *param_2,uint param_3,char *param_4,undefined8 param_5)

{
  uchar *puVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  void *pvVar8;
  float *pfVar9;
  float *pfVar10;
  char *pcVar11;
  float *pfVar12;
  uint uVar13;
  long extraout_RDX;
  long lVar14;
  long extraout_RDX_00;
  Vector2 *pVVar15;
  uint uVar16;
  Vector2 *pVVar17;
  uint uVar18;
  int iVar19;
  Vector2 *pVVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  long in_FS_OFFSET;
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
  uchar *local_78;
  float *local_68;
  uchar *local_60;
  uint local_58;
  undefined8 local_48;
  long local_40;
  
  pfVar12 = (float *)param_1[4];
  uVar18 = *(uint *)((long)param_1 + 0x2c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_58 = param_3;
  if (param_3 == 0) {
    local_68 = pfVar12;
    local_58 = uVar18;
  }
  iVar19 = (int)param_1;
  ArrayBase::resize(iVar19 + 0x38,SUB41(uVar18,0));
  if (uVar18 == 0) {
    RadixSort::sort(param_1 + 0x13,param_1[7],*(undefined4 *)((long)param_1 + 0x44));
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    puVar29 = (uint *)param_1[0x13];
    *(undefined4 *)((long)param_1 + 0x74) = 0;
  }
  else {
    lVar14 = param_1[7];
    uVar7 = 0;
    do {
      *(float *)(lVar14 + uVar7 * 4) = pfVar12[uVar7 * 2];
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar18);
    RadixSort::sort(param_1 + 0x13,lVar14,*(undefined4 *)((long)param_1 + 0x44));
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    puVar29 = (uint *)param_1[0x13];
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    if (*(uint *)(param_1 + 0xc) < uVar18) {
      ArrayBase::setArrayCapacity(iVar19 + 0x50);
    }
    if (*(uint *)(param_1 + 0xf) < uVar18) {
      ArrayBase::setArrayCapacity(iVar19 + 0x68);
    }
  }
  local_60 = (uchar *)(param_1 + 0xd);
  local_78 = (uchar *)(param_1 + 10);
  uVar7 = (ulong)(uVar18 - 1);
  fVar21 = pfVar12[(ulong)*puVar29 * 2 + 1];
  fVar34 = pfVar12[(ulong)puVar29[uVar7] * 2 + 1];
  fVar28 = fVar21;
  if ((fVar21 <= fVar34) && (fVar28 = fVar34, fVar21 < fVar34)) {
    fVar34 = fVar21;
  }
  if (uVar18 != 0) {
    puVar31 = puVar29;
    do {
      while( true ) {
        uVar30 = *puVar31;
        local_48._4_4_ = (float)((ulong)*(undefined8 *)(pfVar12 + (ulong)uVar30 * 2) >> 0x20);
        if (fVar34 <= local_48._4_4_) break;
        puVar31 = puVar31 + 1;
        if (puVar31 == puVar29 + uVar18) goto LAB_00100fbf;
      }
      puVar31 = puVar31 + 1;
      local_48 = *(undefined8 *)(pfVar12 + (ulong)uVar30 * 2);
      ArrayBase::push_back(local_78);
    } while (puVar31 != puVar29 + uVar18);
LAB_00100fbf:
    while( true ) {
      uVar4 = *(undefined8 *)(pfVar12 + (ulong)puVar29[uVar7] * 2);
      local_48._4_4_ = (float)((ulong)uVar4 >> 0x20);
      bVar5 = local_48._4_4_ <= fVar28;
      local_48 = uVar4;
      if (bVar5) {
        ArrayBase::push_back(local_60);
      }
      if ((int)uVar7 == 0) break;
      uVar7 = (ulong)((int)uVar7 - 1);
    }
  }
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  puVar1 = (uchar *)(param_1 + 0x10);
  ArrayBase::push_back(puVar1);
  ArrayBase::push_back(puVar1);
  fVar21 = _LC11;
  uVar18 = (uint)puVar1;
  if (*(uint *)((long)param_1 + 0x5c) < 3) {
    uVar30 = *(uint *)((long)param_1 + 0x8c);
  }
  else {
    uVar30 = *(uint *)((long)param_1 + 0x8c);
    uVar32 = 2;
    do {
      pvVar8 = (void *)param_1[0x10];
      lVar14 = param_1[10];
      pfVar12 = (float *)((long)pvVar8 + (ulong)(uVar30 - 2) * 8);
      uVar33 = uVar30 - 1;
      pfVar9 = (float *)((long)pvVar8 + (ulong)uVar33 * 8);
      uVar4 = *(undefined8 *)(lVar14 + (ulong)uVar32 * 8);
      local_48._4_4_ = (float)((ulong)uVar4 >> 0x20);
      local_48._0_4_ = (float)uVar4;
      fVar34 = ((*pfVar12 - (float)local_48) * (pfVar9[1] - local_48._4_4_) -
               (pfVar12[1] - local_48._4_4_) * (*pfVar9 - (float)local_48)) * fVar21;
      local_48 = uVar4;
      if (fVar34 < _LC12) {
        if (_LC12 <= fVar34) goto LAB_00101180;
LAB_00101061:
        uVar30 = uVar30 + 1;
        *(uint *)((long)param_1 + 0x8c) = uVar30;
        if (*(uint *)(param_1 + 0x12) < uVar30) {
          uVar33 = uVar30;
          if ((*(uint *)(param_1 + 0x12) == 0) || (uVar33 = (uVar30 >> 2) + uVar30, uVar33 != 0)) {
            pvVar8 = (void *)Realloc(pvVar8,(ulong)(uVar33 * *(int *)(param_1 + 0x11)),(int)lVar14,
                                     param_4,(int)param_5);
            *(uint *)(param_1 + 0x12) = uVar33;
            uVar30 = *(uint *)((long)param_1 + 0x8c);
            param_1[0x10] = pvVar8;
            goto LAB_001010a6;
          }
          if (pvVar8 != (void *)0x0) {
            Realloc(pvVar8,0,(int)lVar14,param_4,(int)param_5);
            uVar30 = *(uint *)((long)param_1 + 0x8c);
            param_1[0x10] = 0;
          }
          *(undefined4 *)(param_1 + 0x12) = 0;
        }
        else {
LAB_001010a6:
          if (pvVar8 != (void *)0x0) {
            memcpy((void *)((long)pvVar8 + (ulong)((uVar30 - 1) * *(uint *)(param_1 + 0x11))),
                   &local_48,(ulong)*(uint *)(param_1 + 0x11));
            uVar30 = *(uint *)((long)param_1 + 0x8c);
          }
        }
        uVar32 = uVar32 + 1;
      }
      else {
        *(uint *)((long)param_1 + 0x8c) = uVar33;
        uVar30 = uVar33;
        if (*(uint *)(param_1 + 0x12) < uVar33) {
          ArrayBase::setArrayCapacity(uVar18);
          uVar30 = *(uint *)((long)param_1 + 0x8c);
          lVar14 = extraout_RDX;
        }
LAB_00101180:
        if (uVar30 == 1) {
          pvVar8 = (void *)param_1[0x10];
          goto LAB_00101061;
        }
      }
    } while (uVar32 < *(uint *)((long)param_1 + 0x5c));
  }
  ArrayBase::push_back(puVar1);
  fVar21 = _LC11;
  uVar32 = *(uint *)((long)param_1 + 0x8c);
  if (*(uint *)((long)param_1 + 0x74) < 3) {
    cVar6 = (char)uVar32 + -1;
  }
  else {
    uVar33 = 2;
    do {
      pvVar8 = (void *)param_1[0x10];
      pcVar11 = (char *)param_1[0xd];
      pfVar12 = (float *)((long)pvVar8 + (ulong)(uVar32 - 2) * 8);
      uVar3 = uVar32 - 1;
      pfVar9 = (float *)((long)pvVar8 + (ulong)uVar3 * 8);
      uVar4 = *(undefined8 *)(pcVar11 + (ulong)uVar33 * 8);
      local_48._4_4_ = (float)((ulong)uVar4 >> 0x20);
      local_48._0_4_ = (float)uVar4;
      fVar34 = ((*pfVar12 - (float)local_48) * (pfVar9[1] - local_48._4_4_) -
               (pfVar12[1] - local_48._4_4_) * (*pfVar9 - (float)local_48)) * fVar21;
      local_48 = uVar4;
      if (fVar34 < _LC12) {
        if (_LC12 <= fVar34) goto LAB_00101352;
LAB_00101239:
        uVar13 = *(uint *)(param_1 + 0x12);
        uVar3 = uVar32 + 1;
        *(uint *)((long)param_1 + 0x8c) = uVar3;
        if (uVar13 < uVar3) {
          uVar16 = uVar3;
          if ((uVar13 == 0) || (uVar13 = (uVar3 >> 2) + uVar3, uVar16 = uVar13, uVar13 != 0)) {
            pvVar8 = (void *)Realloc(pvVar8,(ulong)(uVar16 * *(int *)(param_1 + 0x11)),uVar13,
                                     pcVar11,(int)param_5);
            uVar3 = *(uint *)((long)param_1 + 0x8c);
            *(uint *)(param_1 + 0x12) = uVar16;
            param_1[0x10] = pvVar8;
            uVar32 = uVar3 - 1;
            goto LAB_0010127d;
          }
          if (pvVar8 == (void *)0x0) {
            *(undefined4 *)(param_1 + 0x12) = 0;
            uVar13 = uVar32;
          }
          else {
            Realloc(pvVar8,0,0,pcVar11,(int)param_5);
            param_1[0x10] = 0;
            *(undefined4 *)(param_1 + 0x12) = 0;
            uVar3 = *(uint *)((long)param_1 + 0x8c);
            uVar13 = *(uint *)((long)param_1 + 0x8c) - 1;
          }
        }
        else {
LAB_0010127d:
          uVar13 = uVar32;
          if (pvVar8 != (void *)0x0) {
            memcpy((void *)((long)pvVar8 + (ulong)(uVar32 * *(uint *)(param_1 + 0x11))),&local_48,
                   (ulong)*(uint *)(param_1 + 0x11));
            uVar3 = *(uint *)((long)param_1 + 0x8c);
            uVar13 = *(uint *)((long)param_1 + 0x8c) - 1;
          }
        }
        uVar32 = uVar3;
        cVar6 = (char)uVar13;
        uVar33 = uVar33 + 1;
      }
      else {
        *(uint *)((long)param_1 + 0x8c) = uVar3;
        uVar32 = uVar3;
        if (*(uint *)(param_1 + 0x12) < uVar3) {
          ArrayBase::setArrayCapacity(uVar18);
          uVar32 = *(uint *)((long)param_1 + 0x8c);
        }
LAB_00101352:
        cVar6 = (char)uVar32 + -1;
        if (uVar30 == uVar32) {
          pvVar8 = (void *)param_1[0x10];
          goto LAB_00101239;
        }
      }
    } while (uVar33 < *(uint *)((long)param_1 + 0x74));
  }
  ArrayBase::resize(uVar18,(bool)cVar6);
  uVar4 = _UNK_00120528;
  uVar18 = *(uint *)((long)param_1 + 0x8c);
  if (uVar18 == 0) {
    fVar21 = 0.0;
    iVar19 = 0;
    *param_1 = __LC16;
    param_1[1] = uVar4;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
LAB_00101682:
    if ((iVar19 + 0x80800000U < 2) || ((int)fVar21 + 0x80800000U < 2)) goto LAB_00101600;
  }
  else {
    pVVar15 = (Vector2 *)param_1[0x10];
    uVar27 = 0;
    uVar25 = 0;
    uVar7 = 0;
    pVVar17 = pVVar15 + (ulong)uVar18 * 8;
    pVVar20 = (Vector2 *)0x0;
    pfVar12 = local_68 + (ulong)local_58 * 2;
    uVar23 = 0;
    uVar30 = _LC6;
    fVar34 = *(float *)(pVVar15 + (ulong)(uVar18 - 1) * 8);
    fVar28 = 0.0;
    fVar41 = *(float *)(pVVar15 + (ulong)(uVar18 - 1) * 8 + 4);
    fVar43 = _LC9;
    do {
      while( true ) {
        fVar40 = *(float *)pVVar15;
        fVar2 = *(float *)(pVVar15 + 4);
        cVar6 = equal(pVVar20,pVVar17,fVar40);
        fVar21 = (float)uVar7;
        fVar24 = (float)uVar25;
        fVar26 = (float)uVar27;
        fVar22 = (float)uVar23;
        if (cVar6 == '\0') break;
LAB_00101448:
        pVVar15 = (Vector2 *)(extraout_RDX_00 + 8);
        fVar34 = fVar40;
        fVar41 = fVar2;
        if (pVVar15 == pVVar17) goto LAB_00101590;
      }
      fVar41 = fVar2 - fVar41;
      fVar34 = fVar40 - fVar34;
      fVar35 = _LC4 / SQRT(fVar41 * fVar41 + fVar34 * fVar34);
      fVar41 = fVar41 * fVar35;
      fVar35 = fVar34 * fVar35;
      if (local_58 == 0) goto LAB_00101448;
      pfVar9 = local_68;
      fVar38 = _LC10;
      fVar42 = _LC10;
      fVar34 = _LC9;
      fVar39 = _LC9;
      do {
        pfVar10 = pfVar9 + 2;
        fVar37 = fVar41 * pfVar9[1] + fVar35 * *pfVar9;
        fVar36 = *pfVar9 * (float)((uint)fVar41 ^ uVar30) + pfVar9[1] * fVar35;
        if (fVar37 <= fVar34) {
          fVar34 = fVar37;
        }
        if (fVar42 <= fVar37) {
          fVar42 = fVar37;
        }
        if (fVar36 <= fVar39) {
          fVar39 = fVar36;
        }
        if (fVar38 <= fVar36) {
          fVar38 = fVar36;
        }
        pfVar9 = pfVar10;
      } while (pfVar12 != pfVar10);
      fVar36 = (fVar42 - fVar34) * (fVar38 - fVar39);
      if (fVar43 <= fVar36) goto LAB_00101448;
      pVVar15 = (Vector2 *)(extraout_RDX_00 + 8);
      uVar23 = (ulong)(uint)fVar35;
      uVar27 = (ulong)(uint)fVar38;
      uVar25 = (ulong)(uint)fVar42;
      uVar7 = (ulong)(uint)fVar39;
      pVVar20 = (Vector2 *)(ulong)(uint)fVar34;
      fVar34 = fVar40;
      fVar28 = fVar41;
      fVar22 = fVar35;
      fVar26 = fVar38;
      fVar24 = fVar42;
      fVar21 = fVar39;
      fVar41 = fVar2;
      fVar43 = fVar36;
    } while (pVVar15 != pVVar17);
LAB_00101590:
    *param_1 = CONCAT44(fVar28,fVar22);
    param_1[1] = CONCAT44(fVar22,uVar30 ^ (uint)fVar28);
    iVar19 = (int)pVVar20;
    param_1[2] = CONCAT44(fVar21,iVar19);
    param_1[3] = CONCAT44(fVar26,fVar24);
    if (((1 < (int)fVar22 + 0x80800000U) && (1 < (int)fVar28 + 0x80800000U)) &&
       (1 < (uVar30 ^ (uint)fVar28) + 0x80800000)) goto LAB_00101682;
LAB_00101600:
    if (s_print != (undefined *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        (*(code *)s_print)("\rASSERT: %s %s %d\n",
                           "isFinite(majorAxis) && isFinite(minorAxis) && isFinite(minCorner)",
                           "thirdparty/xatlas/xatlas.cpp",0x8ed);
        return;
      }
      goto LAB_00101720;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101720:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::Fit::computeEigen(xatlas::internal::ConstArrayView<xatlas::internal::Vector3>,
   xatlas::internal::Basis*) [clone .isra.0] */

ulong __thiscall xatlas::internal::Fit::computeEigen(Fit *this,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  Fit *pFVar2;
  Fit *pFVar3;
  Vector3 *pVVar4;
  Vector3 *pVVar5;
  ulong uVar6;
  float *pfVar7;
  Vector3 *pVVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  Vector3 local_48 [16];
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  Vector3 local_24 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    fVar17 = 0.0;
    local_88 = 0.0;
    fStack_84 = 0.0;
    _local_98 = (undefined1  [16])0x0;
LAB_0010186e:
    if ((fStack_8c != 0.0) || (fStack_84 != 0.0)) goto LAB_00101888;
  }
  else {
    uVar6 = (ulong)param_2;
    fVar9 = 0.0;
    fVar18 = 0.0;
    pFVar2 = this;
    fVar19 = fVar18;
    do {
      fVar19 = fVar19 + *(float *)pFVar2;
      fVar18 = fVar18 + *(float *)(pFVar2 + 4);
      pFVar3 = pFVar2 + 0xc;
      fVar9 = fVar9 + *(float *)(pFVar2 + 8);
      pFVar2 = pFVar3;
    } while (pFVar3 != this + uVar6 * 0xc);
    fStack_84 = 0.0;
    fStack_8c = 0.0;
    local_98._4_4_ = 0.0;
    fVar17 = 0.0;
    fVar12 = _LC4 / (float)uVar6;
    pFVar2 = this;
    fStack_90 = (float)local_98._4_4_;
    local_88 = fStack_8c;
    do {
      pFVar3 = pFVar2 + 0xc;
      fVar16 = *(float *)pFVar2 - fVar19 * fVar12;
      fVar13 = *(float *)(pFVar2 + 4) - fVar18 * fVar12;
      fVar10 = *(float *)(pFVar2 + 8) - fVar9 * fVar12;
      fVar17 = fVar17 + fVar16 * fVar16;
      local_98._4_4_ = (float)local_98._4_4_ + fVar13 * fVar16;
      fStack_90 = fStack_90 + fVar16 * fVar10;
      fStack_8c = fStack_8c + fVar13 * fVar13;
      local_88 = local_88 + fVar13 * fVar10;
      fStack_84 = fStack_84 + fVar10 * fVar10;
      pFVar2 = pFVar3;
    } while (pFVar3 != this + uVar6 * 0xc);
    local_98._0_4_ = fVar17;
    if (fVar17 == 0.0) goto LAB_0010186e;
LAB_00101888:
    if (__LC27 <= (float)((uint)fStack_90 & _LC37)) {
      local_a4 = SQRT(fStack_90 * fStack_90 + (float)local_98._4_4_ * (float)local_98._4_4_);
      local_38 = (float)local_98._4_4_ / local_a4;
      local_34 = fStack_90 / local_a4;
      fVar18 = (local_38 + local_38) * local_88 + (fStack_84 - fStack_8c) * local_34;
      local_a8 = local_34 * fVar18;
      fVar19 = fStack_8c + local_a8;
      local_a8 = fStack_84 - local_a8;
      local_a0 = local_88 - fVar18 * local_38;
      local_28 = (float)((uint)local_38 ^ _LC6);
    }
    else {
      local_34 = 0.0;
      local_a4 = (float)local_98._4_4_;
      local_38 = _LC4;
      local_a0 = local_88;
      fVar19 = fStack_8c;
      local_28 = _LC4;
      local_a8 = fStack_84;
    }
    local_b0 = CONCAT44(fVar19,fVar17);
    local_9c = 0;
    local_30 = 0;
    local_48 = (Vector3  [16])ZEXT416((uint)_LC4);
    pVVar8 = local_48;
    local_2c = local_34;
    uVar1 = EigenSolver3_QLAlgorithm((float *)local_48,(float *)&local_b0,&local_a4);
    uVar6 = (ulong)uVar1;
    if ((char)uVar1 != '\0') {
      pVVar4 = local_48;
      pfVar7 = (float *)&local_78;
      do {
        pVVar5 = pVVar4 + 0xc;
        *pfVar7 = *(float *)pVVar4;
        uVar15 = local_70;
        uVar11 = local_78;
        pfVar7[3] = *(float *)(pVVar4 + 4);
        pfVar7[6] = *(float *)(pVVar4 + 8);
        pVVar4 = pVVar5;
        pfVar7 = pfVar7 + 1;
      } while (local_24 != pVVar5);
      fVar17 = (float)local_b0;
      fVar19 = local_a8;
      if (((float)local_b0 < local_a8) && (local_b0._4_4_ < local_a8)) {
        local_78 = local_60;
        local_60 = uVar11;
        local_70 = local_58;
        local_58 = uVar15;
        fVar17 = local_a8;
        fVar19 = (float)local_b0;
      }
      if (fVar17 < local_b0._4_4_) {
        uVar11 = local_6c;
        local_70 = local_64;
        uVar15 = local_78._4_4_;
      }
      else {
        uVar11 = local_78;
        uVar15 = local_6c._4_4_;
        fVar17 = local_b0._4_4_;
      }
      local_78 = uVar11;
      uVar14 = local_60._4_4_;
      if (fVar17 < fVar19) {
        local_6c = local_60;
        local_64 = local_58;
        uVar14 = uVar15;
        uVar15 = local_60._4_4_;
      }
      uVar11 = normalize(pVVar8);
      param_3[3] = uVar11;
      *(undefined4 *)(param_3 + 4) = uVar14;
      uVar14 = local_78._4_4_;
      uVar11 = normalize(pVVar8);
      *param_3 = uVar11;
      *(undefined4 *)(param_3 + 1) = uVar14;
      uVar11 = normalize(pVVar8);
      *(undefined8 *)((long)param_3 + 0xc) = uVar11;
      *(undefined4 *)((long)param_3 + 0x14) = uVar15;
      goto LAB_00101a74;
    }
  }
  uVar6 = 0;
LAB_00101a74:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::runAddMeshTask(void*, void*) */

ulong xatlas::runAddMeshTask(void *param_1,void *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  float fVar8;
  
  pbVar3 = *(byte **)((long)param_1 + 0x30);
  uVar6 = (ulong)*pbVar3;
  if (*pbVar3 == 0) {
                    /* WARNING: Load size is inaccurate */
    if (_LC19 < *param_2) {
      internal::Mesh::createColocalsBVH((Mesh *)param_2);
    }
    else {
      internal::Mesh::createColocalsHash();
    }
    uVar6 = (ulong)*pbVar3;
    if (*pbVar3 == 0) {
      LOCK();
      *(int *)(pbVar3 + 0x18) = *(int *)(pbVar3 + 0x18) + 1;
      UNLOCK();
      if (*(long *)(pbVar3 + 8) != 0) {
        fVar8 = ((float)*(uint *)(pbVar3 + 0x18) / (float)*(uint *)(pbVar3 + 0x1c)) * __LC35;
        if ((float)((uint)fVar8 & _LC37) < _LC36) {
          fVar8 = (float)((uint)((float)(int)fVar8 +
                                (float)(-(uint)((float)(int)fVar8 < fVar8) & _LC4)) |
                         ~_LC37 & (uint)fVar8);
        }
        uVar6 = (ulong)fVar8;
        uVar4 = (uint)uVar6;
        if (uVar4 != *(uint *)(pbVar3 + 0x20)) {
          uVar5 = *(uint *)(pbVar3 + 0x20);
          do {
            if (uVar4 <= uVar5) break;
            LOCK();
            uVar2 = *(uint *)(pbVar3 + 0x20);
            bVar7 = uVar5 == uVar2;
            if (bVar7) {
              *(uint *)(pbVar3 + 0x20) = uVar4;
              uVar2 = uVar5;
            }
            uVar5 = uVar2;
            UNLOCK();
          } while (!bVar7);
          uVar6 = (**(code **)(pbVar3 + 8))
                            (*(undefined4 *)(pbVar3 + 4),*(undefined4 *)(pbVar3 + 0x20),
                             *(undefined8 *)(pbVar3 + 0x10));
          if ((char)uVar6 == '\0') {
            LOCK();
            bVar1 = *pbVar3;
            *pbVar3 = 1;
            UNLOCK();
            return (ulong)bVar1;
          }
        }
      }
    }
  }
  return uVar6;
}



/* xatlas::internal::UniformGrid2::intersect(float, xatlas::internal::ConstArrayView<unsigned int>,
   xatlas::internal::ConstArrayView<unsigned int>) [clone .isra.0] */

undefined8
xatlas::internal::UniformGrid2::intersect
          (UniformGrid2 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  float *pfVar1;
  Vector2 *pVVar2;
  float *pfVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  Vector2 *pVVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  Vector2 *pVVar15;
  uint uVar16;
  ulong uVar17;
  Vector2 *pVVar18;
  uint uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [12];
  uint *local_98;
  uint local_90;
  uint local_80;
  byte local_79;
  undefined4 local_44;
  long local_40;
  
  uVar14 = *(uint *)(param_1 + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = uVar14;
  if (uVar14 < 0x15) {
    puVar10 = *(uint **)param_1;
    if (param_3 == 0) {
LAB_00101eaf:
      param_2 = puVar10;
      local_79 = 1;
      puVar10 = param_2;
      uVar14 = local_80;
LAB_00101ebb:
      if (local_80 == 0) goto LAB_00101ec7;
    }
    else {
      local_79 = 1;
      local_80 = param_3;
    }
  }
  else if (*(int *)(param_1 + 0x5c) == 0) {
    local_79 = createGrid(param_1);
    local_79 = local_79 ^ 1;
    if (param_3 == 0) {
      param_2 = *(uint **)param_1;
      local_80 = *(uint *)(param_1 + 0xc);
      puVar10 = param_2;
      if (local_79 != 0) goto LAB_00101eaf;
      uVar14 = 0;
      puVar10 = (uint *)0x0;
      goto LAB_00101ebb;
    }
    if (local_79 == 0) goto LAB_001023a9;
    puVar10 = *(uint **)param_1;
    uVar14 = *(uint *)(param_1 + 0xc);
    local_80 = param_3;
  }
  else if (param_3 == 0) {
    param_2 = *(uint **)param_1;
    uVar14 = 0;
    puVar10 = (uint *)0x0;
    local_79 = 0;
  }
  else {
LAB_001023a9:
    local_79 = 0;
    puVar10 = (uint *)0x0;
    uVar14 = 0;
    local_80 = param_3;
  }
  uVar19 = 1;
  local_98 = param_2;
  do {
    uVar5 = *local_98;
    local_90 = (uVar5 % 3 + 1) % 3 + (uVar5 / 3) * 3;
    uVar20 = uVar5;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar20 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar5 * 4);
      local_90 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)local_90 * 4);
    }
    pfVar1 = (float *)(*(long *)(param_1 + 0x18) + (ulong)uVar20 * 8);
    uVar7 = *(undefined8 *)pfVar1;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)local_90 * 8);
    fVar22 = (float)uVar7;
    fVar24 = (float)((ulong)uVar7 >> 0x20);
    fVar25 = (float)uVar4;
    fVar27 = (float)((ulong)uVar4 >> 0x20);
    fVar30 = fVar22;
    if (fVar27 <= fVar24) {
      fVar31 = fVar27;
      if (fVar25 <= fVar22) {
        if (fVar24 <= fVar27) goto LAB_00101dcd;
        fVar30 = fVar25;
        fVar27 = fVar24;
        if (fVar22 <= fVar25) goto LAB_00101de3;
LAB_00101dd7:
        fVar30 = fVar25;
        fVar25 = fVar22;
        fVar27 = fVar24;
        goto LAB_00101de3;
      }
      if (fVar24 <= fVar27) goto LAB_00101de3;
      if (local_79 == 0) goto LAB_0010209c;
LAB_00101dee:
      if (param_3 == 0) {
        uVar12 = uVar19;
        if (local_80 == uVar19) break;
      }
      else {
        uVar12 = 0;
      }
LAB_00101e08:
      if (uVar12 < uVar14) {
        pVVar11 = (Vector2 *)(puVar10 + uVar12);
        uVar17 = (ulong)param_5;
        pVVar18 = (Vector2 *)(puVar10 + (ulong)((uVar14 - 1) - uVar12) + (ulong)uVar12 + 1);
        pVVar15 = (Vector2 *)(ulong)local_90;
        uVar12 = 0xffffffff;
        do {
          uVar16 = *(uint *)pVVar11;
          if ((uVar16 != uVar12) && (uVar5 != uVar16)) {
            puVar6 = param_4;
            uVar12 = uVar16;
            if ((int)uVar17 != 0) {
              do {
                if (uVar16 == *puVar6) goto LAB_00101e7f;
                puVar6 = puVar6 + 1;
              } while (puVar6 != param_4 + param_5);
            }
            uVar8 = (ulong)((uVar16 % 3 + 1) % 3 + (uVar16 / 3) * 3);
            uVar26 = uVar16;
            if (*(int *)(param_1 + 0x30) != 0) {
              uVar26 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar16 * 4);
              uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x28) + uVar8 * 4);
            }
            if (((uint)pVVar15 != uVar26 && ((uint)uVar8 != uVar20 && uVar20 != uVar26)) &&
               ((uint)pVVar15 != (uint)uVar8)) {
              pVVar2 = (Vector2 *)(*(long *)(param_1 + 0x18) + (ulong)uVar26 * 8);
              pfVar3 = (float *)(*(long *)(param_1 + 0x18) + uVar8 * 8);
              fVar30 = *(float *)(pVVar2 + 4);
              fVar31 = pfVar3[1];
              fVar28 = *(float *)pVVar2;
              fVar23 = *pfVar3;
              fVar29 = fVar31;
              if (fVar31 <= fVar30) {
                if (fVar23 <= fVar28) {
                  fVar29 = (float)(~-(uint)(fVar31 < fVar30) & (uint)fVar31 |
                                  -(uint)(fVar31 < fVar30) & (uint)fVar30);
                  fVar30 = fVar31;
                  goto LAB_00101f93;
                }
                if (fVar31 < fVar30) {
                  fVar29 = fVar30;
                }
              }
              else {
                fVar31 = fVar30;
                if (fVar23 <= fVar28) {
LAB_00101f93:
                  bVar21 = fVar23 < fVar28;
                  uVar26 = -(uint)bVar21 & (uint)fVar28;
                  fVar31 = fVar30;
                  fVar28 = fVar23;
                  fVar23 = (float)(~-(uint)bVar21 & (uint)fVar23 | uVar26);
                }
              }
              if ((((fVar22 <= fVar23) && (fVar28 <= fVar25)) && (fVar27 <= fVar29)) &&
                 (fVar31 <= fVar24)) {
                auVar32 = linesIntersect(pVVar15,pVVar2,(Vector2 *)(ulong)uVar16,pVVar11,*pfVar1);
                uVar12 = auVar32._8_4_;
                uVar7 = auVar32._0_8_;
                if (auVar32[0] != '\0') goto LAB_00101ec9;
              }
            }
          }
LAB_00101e7f:
          pVVar11 = pVVar11 + 4;
        } while (pVVar11 != pVVar18);
      }
    }
    else {
      fVar31 = fVar24;
      if (fVar25 <= fVar22) {
LAB_00101dcd:
        fVar30 = fVar25;
        fVar24 = fVar27;
        if (fVar25 < fVar22) goto LAB_00101dd7;
      }
LAB_00101de3:
      fVar24 = fVar27;
      fVar22 = fVar30;
      fVar27 = fVar31;
      if (local_79 != 0) goto LAB_00101dee;
LAB_0010209c:
      *(undefined4 *)(param_1 + 0x8c) = 0;
      traverse(param_1);
      uVar14 = *(uint *)(param_1 + 0x8c);
      puVar10 = *(uint **)(param_1 + 0x80);
      if (*(int *)(param_1 + 0xa4) != 0) {
        lVar9 = 0;
        do {
          uVar12 = *(uint *)(*(long *)(param_1 + 0x50) +
                            (ulong)*(uint *)(*(long *)(param_1 + 0x98) + lVar9 * 4) * 4);
          if (uVar12 != 0xffffffff) {
            lVar13 = *(long *)(param_1 + 0x68);
            do {
              while( true ) {
                uVar14 = uVar14 + 1;
                local_44 = *(undefined4 *)(lVar13 + (ulong)uVar12 * 4);
                *(uint *)(param_1 + 0x8c) = uVar14;
                if (*(uint *)(param_1 + 0x90) < uVar14) break;
LAB_00102200:
                if (puVar10 != (uint *)0x0) {
                  memcpy((void *)((long)puVar10 + (ulong)((uVar14 - 1) * *(uint *)(param_1 + 0x88)))
                         ,&local_44,(ulong)*(uint *)(param_1 + 0x88));
                  uVar14 = *(uint *)(param_1 + 0x8c);
                  puVar10 = *(uint **)(param_1 + 0x80);
                }
                lVar13 = *(long *)(param_1 + 0x68);
                uVar12 = *(uint *)(lVar13 + (ulong)(uVar12 + 1) * 4);
                if (uVar12 == 0xffffffff) goto LAB_0010223d;
              }
              uVar16 = uVar14;
              if ((*(uint *)(param_1 + 0x90) == 0) || (uVar16 = (uVar14 >> 2) + uVar14, uVar16 != 0)
                 ) {
                if (uVar16 * *(int *)(param_1 + 0x88) != 0) {
LAB_001022c8:
                  puVar10 = (uint *)(*(code *)s_realloc)(puVar10,uVar16 * *(int *)(param_1 + 0x88));
                  *(uint *)(param_1 + 0x90) = uVar16;
                  uVar14 = *(uint *)(param_1 + 0x8c);
                  *(uint **)(param_1 + 0x80) = puVar10;
                  goto LAB_00102200;
                }
                if (puVar10 == (uint *)0x0) {
                  *(undefined8 *)(param_1 + 0x80) = 0;
                  *(uint *)(param_1 + 0x90) = uVar16;
                }
                else {
                  if (s_free == (undefined *)0x0) goto LAB_001022c8;
                  (*(code *)s_free)();
                  *(uint *)(param_1 + 0x90) = uVar16;
                  lVar13 = *(long *)(param_1 + 0x68);
                  *(undefined8 *)(param_1 + 0x80) = 0;
                  uVar14 = *(uint *)(param_1 + 0x8c);
                }
              }
              else if (puVar10 == (uint *)0x0) {
                *(undefined4 *)(param_1 + 0x90) = 0;
              }
              else {
                if (s_free == (undefined *)0x0) {
                  (*(code *)s_realloc)(puVar10,0);
                }
                else {
                  (*(code *)s_free)();
                }
                *(undefined4 *)(param_1 + 0x90) = 0;
                uVar14 = *(uint *)(param_1 + 0x8c);
                *(undefined8 *)(param_1 + 0x80) = 0;
                lVar13 = *(long *)(param_1 + 0x68);
              }
              puVar10 = (uint *)0x0;
              uVar12 = *(uint *)(lVar13 + (ulong)(uVar12 + 1) * 4);
            } while (uVar12 != 0xffffffff);
          }
LAB_0010223d:
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < *(uint *)(param_1 + 0xa4));
      }
      if (uVar14 != 0) {
        insertionSort<unsigned_int>(puVar10,uVar14);
        uVar14 = *(uint *)(param_1 + 0x8c);
        uVar12 = 0;
        goto LAB_00101e08;
      }
    }
    local_98 = local_98 + 1;
    bVar21 = local_80 != uVar19;
    uVar19 = uVar19 + 1;
  } while (bVar21);
LAB_00101ec7:
  uVar7 = 0;
LAB_00101ec9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::Create() */

undefined1 (*) [16] xatlas::Create(void)

{
  undefined8 uVar1;
  undefined1 (*pauVar2) [16];
  TaskScheduler *this;
  long lVar3;
  undefined1 (*pauVar4) [16];
  byte bVar5;
  
  bVar5 = 0;
  pauVar2 = (undefined1 (*) [16])(*(code *)internal::s_realloc)(0,0x110);
  pauVar4 = pauVar2;
  for (lVar3 = 0x22; uVar1 = _LC32, lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)*pauVar4 = 0;
    pauVar4 = (undefined1 (*) [16])(pauVar4[-(ulong)bVar5] + 8);
  }
  *pauVar2 = (undefined1  [16])0x0;
  pauVar2[1] = (undefined1  [16])0x0;
  pauVar2[2] = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar2[3] + 8) = 0xffffffff;
  *(undefined8 *)(pauVar2[4] + 8) = uVar1;
  *(undefined8 *)pauVar2[6] = 0x48;
  *(undefined8 *)(pauVar2[7] + 8) = 0x18;
  *(undefined8 *)pauVar2[0xb] = uVar1;
  *(undefined8 *)(pauVar2[0xc] + 8) = uVar1;
  *(undefined8 *)pauVar2[0xe] = uVar1;
  *(undefined8 *)(pauVar2[0xf] + 8) = uVar1;
  this = (TaskScheduler *)(*(code *)internal::s_realloc)(0,0x28);
  internal::TaskScheduler::TaskScheduler(this);
  *(TaskScheduler **)pauVar2[10] = this;
  return pauVar2;
}



/* xatlas::AddMesh(xatlas::Atlas*, xatlas::MeshDecl const&, unsigned int) */

undefined8 xatlas::AddMesh(Atlas *param_1,MeshDecl *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  Progress *this;
  code *pcVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  Mesh *pMVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  Vector3 *pVVar18;
  long lVar19;
  undefined1 *puVar20;
  void *pvVar21;
  ulong uVar22;
  long lVar23;
  char *in_RCX;
  char *pcVar24;
  int extraout_EDX;
  int extraout_EDX_00;
  float fVar25;
  int extraout_EDX_01;
  uint uVar26;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  int iVar27;
  byte *pbVar28;
  ulong uVar29;
  float *pfVar30;
  undefined8 uVar31;
  Vector3 *pVVar32;
  Vector3 *pVVar33;
  Vector3 *pVVar34;
  int in_R8D;
  float *pfVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  long in_FS_OFFSET;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 extraout_XMM0_Qa;
  float fVar46;
  float fVar47;
  float extraout_XMM1_Da;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [12];
  undefined1 auVar53 [12];
  char *local_5b8;
  float local_57c;
  uint local_56c;
  ArrayBase *local_568;
  uint local_560;
  byte local_559;
  uint local_558;
  ArrayBase *local_550;
  ArrayBase *local_548;
  ArrayBase *local_540;
  uint local_51c;
  Mesh *local_518;
  undefined1 (*local_510) [16];
  undefined1 local_508 [8];
  undefined4 local_500;
  undefined1 local_4f8 [12];
  Vector3 *local_4e8;
  undefined8 local_4e0;
  ulong local_4d8;
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  undefined1 local_4b0 [2] [12];
  char *local_498;
  undefined8 local_490;
  uint local_488;
  long local_480;
  undefined8 local_478;
  uint local_470;
  void *local_468;
  undefined8 local_460;
  uint local_458;
  Vector3 aVStack_44c [4];
  Vector3 local_448 [8];
  uint local_440 [256];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Atlas *)0x0) {
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)("AddMesh: atlas is null.\n");
    }
  }
  else {
    if (*(int *)(param_1 + 0xe4) == 0) {
      this = *(Progress **)(param_1 + 0x30);
      if (this == (Progress *)0x0) {
        puVar20 = (undefined1 *)internal::Realloc((void *)0x0,0x28,param_3,in_RCX,in_R8D);
        uVar7 = _LC92;
        uVar31 = *(undefined8 *)(param_1 + 0x98);
        pcVar4 = *(code **)(param_1 + 0x90);
        *puVar20 = 0;
        *(undefined4 *)(puVar20 + 4) = 0;
        *(code **)(puVar20 + 8) = pcVar4;
        *(undefined8 *)(puVar20 + 0x10) = uVar31;
        *(undefined8 *)(puVar20 + 0x18) = uVar7;
        *(undefined4 *)(puVar20 + 0x20) = 0;
        if ((pcVar4 != (code *)0x0) && (cVar11 = (*pcVar4)(0,0), cVar11 == '\0')) {
          LOCK();
          *puVar20 = 1;
          UNLOCK();
        }
        *(undefined1 **)(param_1 + 0x30) = puVar20;
      }
      else {
        uVar12 = *(int *)(param_1 + 0xb4) + 1U;
        if (*(int *)(param_1 + 0xb4) + 1U < param_3) {
          uVar12 = param_3;
        }
        LOCK();
        *(uint *)(this + 0x1c) = uVar12;
        UNLOCK();
        internal::Progress::update(this);
      }
      uVar12 = *(uint *)(param_2 + 0x48);
      uVar39 = uVar12;
      if (uVar12 == 0) {
        uVar39 = *(uint *)(param_2 + 0x38);
      }
      local_558 = uVar39 / 3;
      if (*(long *)(param_2 + 0x30) == 0) {
        if ((internal::s_print != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
          (*(code *)internal::s_print)
                    ("Adding mesh %d: %u vertices, %u triangles\n",*(undefined4 *)(param_1 + 0xb4),
                     *(undefined4 *)(param_2 + 0x38),(ulong)uVar39 / 3);
        }
        uVar31 = 4;
        if (0x55555555 < uVar39 * -0x55555555) goto LAB_00102a18;
      }
      else {
        local_558 = *(uint *)(param_2 + 0x50);
        if ((internal::s_print != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
          (*(code *)internal::s_print)
                    ("Adding mesh %d: %u vertices, %u polygons\n",*(undefined4 *)(param_1 + 0xb4),
                     *(undefined4 *)(param_2 + 0x38));
        }
        if (local_558 != 0) {
          pbVar14 = *(byte **)(param_2 + 0x30);
          pbVar28 = pbVar14 + local_558;
          do {
            if (*pbVar14 < 3) {
              uVar31 = 3;
              goto LAB_00102a18;
            }
            pbVar14 = pbVar14 + 1;
          } while (pbVar28 != pbVar14);
        }
      }
      uVar37 = (-(uint)(*(long *)(param_2 + 8) == 0) & 0xfffffffe) + 3;
      if (*(long *)(param_2 + 0x28) != 0) {
        uVar37 = uVar37 | 4;
      }
      pMVar15 = (Mesh *)(*(code *)internal::s_realloc)(0,0x168);
      pcVar24 = (char *)(ulong)uVar37;
      pfVar35 = (float *)(ulong)*(uint *)(param_1 + 0xb4);
      pVVar33 = (Vector3 *)(ulong)*(uint *)(param_2 + 0x38);
      internal::Mesh::Mesh
                (pMVar15,*(float *)(param_2 + 0x58),*(uint *)(param_2 + 0x38),uVar39 / 3,uVar37,
                 *(uint *)(param_1 + 0xb4));
      iVar38 = extraout_EDX;
      local_518 = pMVar15;
      if (*(int *)(param_2 + 0x38) != 0) {
        uVar39 = 0;
        do {
          pMVar15 = local_518;
          local_4c8 = 0.0;
          fStack_4c4 = 0.0;
          fStack_4c0 = 0.0;
          local_4e8 = (Vector3 *)0x0;
          if (*(long *)(param_2 + 8) != 0) {
            puVar16 = (undefined8 *)
                      (*(long *)(param_2 + 8) + (ulong)(uVar39 * *(int *)(param_2 + 0x40)));
            uVar31 = *puVar16;
            fStack_4c0 = *(float *)(puVar16 + 1);
            local_4c8 = (float)uVar31;
            fStack_4c4 = (float)((ulong)uVar31 >> 0x20);
          }
          if (*(long *)(param_2 + 0x10) != 0) {
            local_4e8 = *(Vector3 **)
                         (*(long *)(param_2 + 0x10) + (ulong)(uVar39 * *(int *)(param_2 + 0x44)));
          }
          puVar16 = (undefined8 *)((ulong)(uVar39 * *(int *)(param_2 + 0x3c)) + *(long *)param_2);
          pcVar24 = (char *)*puVar16;
          local_490 = CONCAT44(local_490._4_4_,*(undefined4 *)(puVar16 + 1));
          local_498 = pcVar24;
          internal::ArrayBase::push_back((uchar *)(local_518 + 0x58));
          if (((byte)pMVar15[4] & 2) != 0) {
            internal::ArrayBase::push_back((uchar *)(pMVar15 + 0x70));
          }
          uVar39 = uVar39 + 1;
          pVVar33 = (Vector3 *)&local_4e8;
          internal::ArrayBase::push_back((uchar *)(pMVar15 + 0x88));
          iVar38 = extraout_EDX_00;
        } while (uVar39 < *(uint *)(param_2 + 0x38));
      }
      local_548 = (ArrayBase *)&local_498;
      local_568 = (ArrayBase *)&local_4e8;
      local_510 = (undefined1 (*) [16])0x0;
      uVar29 = _LC18;
      if (*(long *)(param_2 + 0x30) != 0) {
        pauVar17 = (undefined1 (*) [16])
                   internal::Realloc((void *)0x0,0x48,iVar38,pcVar24,(int)pfVar35);
        uVar29 = _LC18;
        pauVar17[2] = (undefined1  [16])0x0;
        *(ulong *)pauVar17[2] = uVar29;
        pvVar21 = *(void **)(param_2 + 0x30);
        pauVar17[3] = (undefined1  [16])0x0;
        *(ulong *)(pauVar17[3] + 8) = uVar29;
        uVar39 = *(uint *)(param_2 + 0x50);
        *pauVar17 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar17[4] = 0;
        *(undefined4 *)(*pauVar17 + 8) = 1;
        *(uint *)(*pauVar17 + 0xc) = uVar39;
        pauVar17[1] = (undefined1  [16])0x0;
        local_510 = pauVar17;
        if (uVar39 != 0) {
          internal::ArrayBase::setArrayCapacity((uint)pauVar17);
          if ((*(void **)*pauVar17 != (void *)0x0) && (pvVar21 != (void *)0x0)) {
            memcpy(*(void **)*pauVar17,pvVar21,(ulong)(uVar39 * *(int *)(*pauVar17 + 8)));
          }
          if (*(uint *)(local_510[2] + 8) < *(uint *)(param_2 + 0x50)) {
            internal::ArrayBase::setArrayCapacity((int)local_510 + 0x18);
            uVar39 = *(uint *)local_510[4];
          }
          else {
            uVar39 = *(uint *)local_510[4];
          }
        }
        pVVar33 = (Vector3 *)(ulong)*(uint *)(param_2 + 0x48);
        if (uVar39 < *(uint *)(param_2 + 0x48)) {
          internal::ArrayBase::setArrayCapacity((int)local_510 + 0x30);
        }
      }
      local_4e8 = (Vector3 *)0x0;
      local_4d8 = 0;
      local_498 = (char *)0x0;
      local_488 = 0;
      local_480 = 0;
      local_470 = 0;
      local_468 = (void *)0x0;
      local_460 = 8;
      local_458 = 0;
      local_51c = 0;
      local_4e0 = uVar29;
      local_490 = uVar29;
      local_478 = uVar29;
      if (local_558 != 0) {
        local_560 = 0;
        uVar29 = 0;
LAB_0010293d:
        if (*(long *)(param_2 + 0x30) == 0) {
          pVVar34 = (Vector3 *)0x3;
LAB_0010295c:
          pVVar32 = pVVar34;
          pVVar18 = local_448;
          fVar25 = (float)((int)uVar29 * (int)pVVar32);
          pVVar33 = pVVar18 + (long)pVVar32 * 4;
          pVVar34 = pVVar32;
          if (uVar12 == 0) {
            do {
              *(float *)pVVar18 = fVar25;
              pVVar18 = pVVar18 + 4;
              fVar25 = (float)((int)fVar25 + 1);
            } while (pVVar33 != pVVar18);
          }
          else {
            iVar38 = *(int *)(param_2 + 0x4c);
            pfVar35 = *(float **)(param_2 + 0x18);
            do {
              if (*(int *)(param_2 + 0x54) == 0) {
                pcVar24 = (char *)((ulong)((uint)*(ushort *)
                                                  ((long)pfVar35 + (ulong)(uint)fVar25 * 2) + iVar38
                                          ) & 0xffff);
                *(float *)pVVar18 = SUB84(pcVar24,0);
                if ((uint)*(float *)(param_2 + 0x38) <= (uint)SUB84(pcVar24,0)) {
LAB_001029cf:
                  uVar31 = 2;
                  internal::Mesh::~Mesh(local_518);
                  internal::Realloc(local_518,0,extraout_EDX_01,pcVar24,(int)pfVar35);
                  goto LAB_001029f0;
                }
              }
              else {
                fVar43 = (float)((int)pfVar35[(uint)fVar25] + iVar38);
                pcVar24 = (char *)(ulong)(uint)fVar43;
                *(float *)pVVar18 = fVar43;
                if ((uint)*(float *)(param_2 + 0x38) <= (uint)fVar43) goto LAB_001029cf;
              }
              pVVar18 = pVVar18 + 4;
              fVar25 = (float)((int)fVar25 + 1);
            } while (pVVar33 != pVVar18);
          }
        }
        else {
          pVVar32 = (Vector3 *)0x0;
          bVar3 = *(byte *)(*(long *)(param_2 + 0x30) + uVar29);
          pVVar34 = (Vector3 *)(ulong)bVar3;
          if (bVar3 != 0) goto LAB_0010295c;
        }
        pVVar18 = (Vector3 *)0x1;
        do {
          uVar39 = (uint)pVVar34;
          if (pVVar18 == pVVar32 + 1) {
            lVar19 = *(long *)(local_518 + 0x58);
            if (uVar39 == 0) {
              local_4e0 = local_4e0 & 0xffffffff;
              local_490 = local_490 & 0xffffffff;
              local_559 = 0;
              goto LAB_00102c58;
            }
            pVVar18 = local_448;
            pVVar32 = pVVar18 + (long)pVVar32 * 4;
            goto LAB_00102bda;
          }
          uVar37 = *(uint *)(local_448 + (long)pVVar18 * 4 + -4);
          pVVar33 = (Vector3 *)(ulong)uVar37;
          uVar26 = *(uint *)(local_448 +
                            (ulong)(uint)((int)pVVar18 +
                                         (int)(((ulong)pVVar18 & 0xffffffff) / 3) * -3) * 4);
          if (uVar37 == uVar26) {
            if (((local_560 + 1 < 0x33) && (internal::s_print != (undefined *)0x0)) &&
               (internal::s_printVerbose != '\0')) {
              (*(code *)internal::s_print)
                        ("   Degenerate edge: index %d, index %d\n",pVVar33,uVar37);
            }
            goto LAB_00102c08;
          }
          pVVar18 = pVVar18 + 1;
          pfVar2 = (float *)(*(long *)(local_518 + 0x58) + (long)pVVar33 * 0xc);
          pfVar35 = (float *)(*(long *)(local_518 + 0x58) + (ulong)uVar26 * 0xc);
          pfVar30 = pfVar35 + 1;
          fVar25 = *pfVar35;
          pfVar1 = pfVar35 + 2;
          fVar51 = *pfVar30 - pfVar2[1];
          fVar43 = fVar25 - *pfVar2;
          fVar45 = *pfVar1 - pfVar2[2];
        } while (0.0 < SQRT(fVar43 * fVar43 + fVar51 * fVar51 + fVar45 * fVar45));
        if (((local_560 + 1 < 0x33) &&
            (pfVar35 = (float *)internal::s_print, internal::s_print != (undefined *)0x0)) &&
           (internal::s_printVerbose != '\0')) {
          (*(code *)internal::s_print)
                    ((double)*pfVar2,(double)pfVar2[1],(double)pfVar2[2],(double)fVar25,
                     (double)*pfVar30,(double)*pfVar1,
                     "   Zero length edge: index %d position (%g %g %g), index %d position (%g %g %g)\n"
                     ,pVVar33,uVar26);
        }
LAB_00102c08:
        local_560 = local_560 + 1;
        local_559 = 1;
        goto LAB_00102c0d;
      }
      goto LAB_00103728;
    }
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)
                ("AddMesh: Meshes and UV meshes cannot be added to the same atlas.\n");
    }
  }
  uVar31 = 1;
  goto LAB_00102a18;
  while( true ) {
    if ((*(long *)(param_2 + 0x10) != 0) &&
       ((pfVar30 = (float *)(*(long *)(local_518 + 0x88) + (long)pfVar35 * 8), NAN(*pfVar30) ||
        (NAN(pfVar30[1]))))) {
      if ((local_560 + 1 < 0x33) &&
         ((internal::s_print != (undefined *)0x0 && (internal::s_printVerbose != '\0')))) {
        pVVar33 = (Vector3 *)(ulong)local_51c;
        (*(code *)internal::s_print)("   NAN texture coordinate in face: %d\n");
      }
      goto LAB_00102c08;
    }
    pVVar18 = pVVar18 + 4;
    if (pVVar32 == pVVar18) break;
LAB_00102bda:
    pfVar35 = (float *)(ulong)*(uint *)pVVar18;
    pVVar33 = (Vector3 *)(lVar19 + (long)pfVar35 * 0xc);
    if (((NAN(*(float *)pVVar33)) || (NAN(*(float *)(pVVar33 + 4)))) ||
       (NAN(*(float *)(pVVar33 + 8)))) {
      if (((local_560 + 1 < 0x33) && (internal::s_print != (undefined *)0x0)) &&
         (internal::s_printVerbose != '\0')) {
        pVVar33 = (Vector3 *)(ulong)local_51c;
        (*(code *)internal::s_print)("   NAN position in face: %d\n");
      }
      goto LAB_00102c08;
    }
    if ((*(long *)(param_2 + 8) != 0) &&
       (((pfVar30 = (float *)((long)pfVar35 * 0xc + *(long *)(local_518 + 0x70)), NAN(*pfVar30) ||
         (NAN(pfVar30[1]))) || (NAN(pfVar30[2]))))) {
      if (((local_560 + 1 < 0x33) && (internal::s_print != (undefined *)0x0)) &&
         (internal::s_printVerbose != '\0')) {
        pVVar33 = (Vector3 *)(ulong)local_51c;
        (*(code *)internal::s_print)("   NAN normal in face: %d\n");
      }
      goto LAB_00102c08;
    }
  }
  local_559 = 0;
LAB_00102c0d:
  local_4e0 = local_4e0 & 0xffffffff;
  if (uVar39 == 3) {
    internal::ArrayBase::push_back((uchar *)local_568);
    internal::ArrayBase::push_back((uchar *)local_568);
    pVVar33 = (Vector3 *)local_440;
    internal::ArrayBase::push_back((uchar *)local_568);
    uVar39 = local_4e0._4_4_;
    fVar25 = _LC11;
    fVar43 = _LC19;
joined_r0x0010390f:
    _LC11 = fVar25;
    _LC19 = fVar43;
    if ((local_559 == 0) && (uVar39 != 0)) {
      lVar19 = *(long *)(local_518 + 0x58);
      lVar23 = 0;
      pVVar33 = local_4e8;
      do {
        pfVar35 = (float *)(lVar19 + (ulong)*(uint *)(pVVar33 + lVar23 * 4) * 0xc);
        lVar23 = internal::cross((Vector3 *)
                                 (lVar19 + (ulong)*(uint *)(pVVar33 + (ulong)((int)lVar23 + 2) * 4)
                                           * 0xc),pVVar33);
        local_4c8 = (float)extraout_XMM0_Qa;
        fStack_4c4 = (float)((ulong)extraout_XMM0_Qa >> 0x20);
        fVar45 = SQRT(local_4c8 * local_4c8 + fStack_4c4 * fStack_4c4 +
                      extraout_XMM1_Da * extraout_XMM1_Da) * fVar25;
        fStack_4c0 = extraout_XMM1_Da;
        if (fVar45 <= fVar43) {
          local_560 = local_560 + 1;
          if (((local_560 < 0x33) && (internal::s_print != (undefined *)0x0)) &&
             (internal::s_printVerbose != '\0')) {
            pVVar33 = (Vector3 *)(ulong)local_51c;
            (*(code *)internal::s_print)((double)fVar45);
          }
          local_559 = 1;
          break;
        }
        lVar23 = lVar23 + 3;
      } while ((uint)lVar23 < uVar39);
    }
    pVVar34 = local_4e8;
    if ((*(long *)(param_2 + 0x20) != 0) &&
       (bVar3 = *(byte *)(*(long *)(param_2 + 0x20) + (ulong)local_51c), bVar3 != 0)) {
      local_559 = bVar3;
    }
    if (uVar39 != 0) {
      uVar37 = 0;
      pVVar32 = local_4e8;
      do {
        pVVar33 = pVVar32;
        internal::Mesh::addFace((uint *)local_518,SUB81(pVVar32,0),(uint)local_559);
        if (local_510 != (undefined1 (*) [16])0x0) {
          pVVar33 = (Vector3 *)&local_51c;
          internal::ArrayBase::push_back(local_510[1] + 8);
        }
        uVar37 = uVar37 + 3;
        pVVar32 = pVVar32 + 0xc;
      } while (uVar37 < uVar39);
      if (local_510 != (undefined1 (*) [16])0x0) {
        pVVar32 = pVVar34;
        do {
          pVVar33 = pVVar32;
          pVVar32 = pVVar33 + 4;
          internal::ArrayBase::push_back((uchar *)(local_510 + 3));
        } while (pVVar32 != pVVar34 + (ulong)uVar39 * 4);
      }
    }
    local_51c = local_51c + 1;
    uVar29 = (ulong)local_51c;
    if (local_558 <= local_51c) goto code_r0x001036f2;
    goto LAB_0010293d;
  }
  lVar19 = *(long *)(local_518 + 0x58);
  local_490 = local_490 & 0xffffffff;
  if (local_488 < uVar39) {
    pVVar33 = pVVar34;
    internal::ArrayBase::setArrayCapacity((uint)local_548);
  }
LAB_00102c58:
  fStack_4b8 = 0.0;
  fStack_4b4 = 0.0;
  local_4c8 = 0.0;
  fStack_4c4 = 0.0;
  fStack_4c0 = 0.0;
  fStack_4bc = 0.0;
  pVVar32 = (Vector3 *)local_4b0;
  pcVar24 = (char *)(lVar19 + (ulong)local_440[0] * 0xc);
  auVar52 = internal::cross(pVVar32,pVVar33);
  local_4f8 = auVar52;
  auVar52 = internal::normalize(pVVar32);
  local_4b0[0] = auVar52;
  auVar53 = internal::Basis::computeTangent(pVVar32);
  local_4c8 = auVar53._0_4_;
  fStack_4c4 = auVar53._4_4_;
  fVar25 = local_4c8;
  fVar43 = fStack_4c4;
  fStack_4c0 = auVar53._8_4_;
  auVar52 = internal::cross(pVVar32,pVVar33);
  fVar45 = auVar52._8_4_;
  local_460 = local_460 & 0xffffffff;
  local_508._0_4_ = auVar52._0_4_;
  uVar13 = local_508._0_4_;
  local_508._4_4_ = auVar52._4_4_;
  uVar8 = local_508._4_4_;
  fStack_4bc = (float)local_508._0_4_;
  fStack_4b8 = (float)local_508._4_4_;
  fStack_4b4 = fVar45;
  _local_508 = auVar52;
  if (local_458 < uVar39) {
    internal::ArrayBase::setArrayCapacity((uint)&local_468);
    local_478 = local_478 & 0xffffffff;
    auVar52 = _local_508;
    if (uVar39 <= local_470) {
      uVar37 = local_460._4_4_;
      goto LAB_00102e01;
    }
  }
  else {
    local_478 = local_478 & 0xffffffff;
    if (uVar39 <= local_470) {
      if (uVar39 != 0) {
        uVar37 = 0;
        goto LAB_00102e01;
      }
LAB_00103026:
      _local_508 = auVar52;
      internal::ArrayBase::resize((uint)&local_480,SUB81(pVVar34,0));
      uVar29 = local_490 >> 0x20;
LAB_00103050:
      if (2 < (uint)uVar29) {
        do {
          pvVar21 = local_468;
          lVar19 = local_480;
          local_56c = 0;
          uVar41 = 0;
          bVar6 = false;
          local_57c = 6.2831855;
          do {
            while( true ) {
              uVar39 = (uint)uVar41;
              fVar25 = *(float *)((long)pvVar21 + uVar41 * 8);
              fVar43 = *(float *)((long)pvVar21 + uVar41 * 8 + 4);
              uVar22 = (ulong)(uVar39 + 1) % uVar29;
              uVar5 = (ulong)(uVar39 + 2) % uVar29;
              uVar37 = (uint)uVar22;
              pfVar35 = (float *)((long)pvVar21 + uVar22 * 8);
              fVar45 = *pfVar35;
              fVar51 = pfVar35[1];
              fVar47 = fVar25 - fVar45;
              fVar50 = fVar43 - fVar51;
              pfVar35 = (float *)((long)pvVar21 + uVar5 * 8);
              fVar46 = *pfVar35;
              fVar48 = pfVar35[1];
              fVar49 = fVar48 - fVar51;
              fVar44 = fVar46 - fVar45;
              fVar47 = (fVar44 * fVar47 + fVar49 * fVar50) /
                       (SQRT(fVar44 * fVar44 + fVar49 * fVar49) *
                       SQRT(fVar47 * fVar47 + fVar50 * fVar50));
              fVar44 = _LC5;
              if ((_LC5 < fVar47) && (fVar44 = fVar47, _LC4 <= fVar47)) {
                fVar44 = _LC4;
              }
              fVar47 = acosf(fVar44);
              pcVar9 = local_498;
              fVar44 = _LC11;
              if (((fVar25 - fVar46) * (fVar51 - fVar48) - (fVar43 - fVar48) * (fVar45 - fVar46)) *
                  _LC11 < 0.0) {
                fVar47 = _LC89 - fVar47;
              }
              *(float *)(lVar19 + uVar22 * 4) = fVar47;
              if ((fVar47 < local_57c) || (!bVar6)) break;
LAB_00103184:
              bVar6 = true;
              fVar47 = local_57c;
              uVar37 = local_56c;
LAB_0010318a:
              local_56c = uVar37;
              local_57c = fVar47;
              uVar41 = uVar41 + 1;
              if (uVar41 == uVar29) goto LAB_001034aa;
            }
            uVar22 = 0;
            do {
              uVar26 = (uint)uVar22;
              pcVar24 = (char *)CONCAT71((int7)((ulong)pcVar24 >> 8),
                                         uVar26 == uVar39 || uVar37 == uVar26);
              if ((uVar26 != uVar39 && uVar37 != uVar26) && ((uint)uVar5 != uVar26)) {
                fVar49 = *(float *)((long)pvVar21 + uVar22 * 8);
                fVar50 = *(float *)((long)pvVar21 + uVar22 * 8 + 4);
                if (_LC19 <= ((fVar25 - fVar49) * (fVar51 - fVar50) -
                             (fVar43 - fVar50) * (fVar45 - fVar49)) * fVar44) {
                  if ((_LC19 <= ((fVar45 - fVar49) * (fVar48 - fVar50) -
                                (fVar51 - fVar50) * (fVar46 - fVar49)) * fVar44) &&
                     (_LC19 <= ((fVar43 - fVar50) * (fVar46 - fVar49) -
                               (fVar25 - fVar49) * (fVar48 - fVar50)) * fVar44)) {
                    if (bVar6) goto LAB_00103184;
                    goto LAB_0010318a;
                  }
                }
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 != uVar29);
            uVar41 = uVar41 + 1;
            bVar6 = true;
            local_57c = fVar47;
            local_56c = uVar37;
          } while (uVar41 != uVar29);
LAB_001034aa:
          uVar37 = (int)uVar29 - 1;
          iVar27 = (int)((ulong)local_56c % uVar29);
          pVVar34 = (Vector3 *)local_4f8;
          local_4f8._0_4_ = *(undefined4 *)(local_498 + ((ulong)(local_56c + uVar37) % uVar29) * 4);
          internal::ArrayBase::push_back((uchar *)local_568);
          iVar38 = local_4e0._4_4_;
          uVar39 = local_4e0._4_4_ + 1;
          local_4f8._0_4_ = *(undefined4 *)(pcVar9 + ((ulong)local_56c % uVar29) * 4);
          local_4e0 = CONCAT44(uVar39,(int)local_4e0);
          if ((uint)local_4d8 < uVar39) {
            if (((uint)local_4d8 == 0) || (uVar39 = uVar39 + (uVar39 >> 2), uVar39 != 0)) {
              local_4e8 = (Vector3 *)
                          internal::Realloc(local_4e8,(ulong)(uVar39 * (int)local_4e0),uVar39,
                                            pcVar24,(int)pfVar35);
              local_4d8 = CONCAT44(local_4d8._4_4_,uVar39);
              goto LAB_00103534;
            }
            if (local_4e8 != (Vector3 *)0x0) {
              internal::Realloc(local_4e8,0,0,pcVar24,(int)pfVar35);
              local_4e8 = (Vector3 *)0x0;
            }
            local_4d8 = local_4d8 & 0xffffffff00000000;
          }
          else {
LAB_00103534:
            if (local_4e8 != (Vector3 *)0x0) {
              memcpy(local_4e8 + (uint)(iVar38 * (int)local_4e0),pVVar34,local_4e0 & 0xffffffff);
            }
          }
          local_4f8._0_4_ = *(undefined4 *)(pcVar9 + ((ulong)(local_56c + 1) % uVar29) * 4);
          internal::ArrayBase::push_back((uchar *)local_568);
          if (pcVar9 != (char *)0x0) {
            uVar29 = (ulong)uVar37;
            uVar39 = (iVar27 + 1) * (int)local_490;
            pVVar34 = (Vector3 *)(pcVar9 + uVar39);
            memmove(pcVar9 + (uVar39 - (int)local_490),pVVar34,
                    (ulong)((uVar37 - iVar27) * (int)local_490));
            local_490 = CONCAT44(uVar37,(int)local_490);
          }
          if (local_460._4_4_ < 2) {
            if (local_460._4_4_ != 0) {
              iVar38 = 0;
              goto LAB_0010385d;
            }
          }
          else {
            pcVar24 = (char *)(local_460 & 0xffffffff);
            iVar38 = local_460._4_4_ - 1;
            uVar39 = (iVar27 + 1) * (int)local_460;
            pVVar34 = (Vector3 *)((ulong)uVar39 + (long)pvVar21);
            memmove((void *)((long)pvVar21 + (ulong)(uVar39 - (int)local_460)),pVVar34,
                    (ulong)(uint)((iVar38 - iVar27) * (int)local_460));
LAB_0010385d:
            local_460 = CONCAT44(iVar38,(int)local_460);
          }
          auVar52._8_4_ = local_4f8._8_4_;
          auVar52._0_8_ = local_4f8._0_8_;
          if (lVar19 == 0) goto LAB_00103050;
          if (local_478._4_4_ < 2) {
            local_4f8 = auVar52;
            if (local_478._4_4_ == 0) goto LAB_00103050;
            iVar38 = 0;
          }
          else {
            pcVar24 = (char *)(local_478 & 0xffffffff);
            iVar38 = local_478._4_4_ - 1;
            uVar39 = (iVar27 + 1) * (int)local_478;
            pVVar34 = (Vector3 *)((ulong)uVar39 + lVar19);
            memmove((void *)(lVar19 + (ulong)(uVar39 - (int)local_478)),pVVar34,
                    (ulong)(uint)((iVar38 - iVar27) * (int)local_478));
          }
          local_478 = CONCAT44(iVar38,(int)local_478);
          if ((uint)uVar29 < 3) break;
        } while( true );
      }
      pVVar33 = pVVar34;
      uVar39 = local_4e0._4_4_;
      fVar25 = _LC11;
      fVar43 = _LC19;
      goto joined_r0x0010390f;
    }
  }
  _local_508 = auVar52;
  internal::ArrayBase::setArrayCapacity((uint)&local_480);
  uVar37 = local_460._4_4_;
LAB_00102e01:
  lVar23 = 0;
  local_5b8 = local_498;
  pvVar21 = local_468;
  uVar26 = local_490._4_4_;
  do {
    uVar10 = local_458;
    uVar40 = uVar26 + 1;
    local_490 = CONCAT44(uVar40,(int)local_490);
    local_4f8._0_4_ = *(undefined4 *)(local_448 + lVar23 * 4);
    if (local_488 < uVar40) {
      uVar36 = uVar40;
      if ((local_488 == 0) || (uVar36 = (uVar40 >> 2) + uVar40, uVar36 != 0)) {
        local_5b8 = (char *)internal::Realloc(local_5b8,(ulong)(uVar36 * (int)local_490),uVar26,
                                              pcVar24,(int)pfVar35);
        local_498 = local_5b8;
        local_488 = uVar36;
        goto LAB_00102f50;
      }
      if (local_5b8 != (char *)0x0) {
        internal::Realloc(local_5b8,0,uVar26,pcVar24,(int)pfVar35);
        local_498 = (char *)0x0;
        uVar26 = extraout_EDX_03;
      }
      local_488 = 0;
      local_5b8 = (char *)0x0;
    }
    else {
LAB_00102f50:
      if (local_5b8 != (char *)0x0) {
        memcpy(local_5b8 + uVar26 * (int)local_490,local_4f8,local_490 & 0xffffffff);
        uVar26 = extraout_EDX_02;
      }
    }
    uVar36 = uVar37 + 1;
    puVar16 = (undefined8 *)(lVar19 + (ulong)*(uint *)(local_448 + lVar23 * 4) * 0xc);
    uVar31 = *puVar16;
    fVar51 = *(float *)(puVar16 + 1);
    local_460 = CONCAT44(uVar36,(int)local_460);
    fVar46 = (float)uVar31;
    fVar48 = (float)((ulong)uVar31 >> 0x20);
    local_4f8._0_8_ =
         CONCAT44(fVar48 * (float)uVar8 + fVar46 * (float)uVar13 + fVar51 * fVar45,
                  fVar48 * fVar43 + fVar46 * fVar25 + fVar51 * auVar53._8_4_);
    if (uVar10 < uVar36) {
      uVar42 = uVar36;
      if ((uVar10 == 0) || (uVar26 = (uVar36 >> 2) + uVar36, uVar42 = uVar26, uVar26 != 0)) {
        pvVar21 = (void *)internal::Realloc(pvVar21,(ulong)(uVar42 * (int)local_460),uVar26,pcVar24,
                                            (int)pfVar35);
        local_468 = pvVar21;
        local_458 = uVar42;
        goto LAB_00102fde;
      }
      if (pvVar21 != (void *)0x0) {
        internal::Realloc(pvVar21,0,0,pcVar24,(int)pfVar35);
        local_468 = (void *)0x0;
      }
      local_458 = 0;
      pvVar21 = (void *)0x0;
    }
    else {
LAB_00102fde:
      if (pvVar21 != (void *)0x0) {
        pcVar24 = (char *)(ulong)(uVar37 * (int)local_460);
        memcpy((char *)((long)pvVar21 + (long)pcVar24),local_4f8,local_460 & 0xffffffff);
      }
    }
    auVar52 = _local_508;
    if (uVar39 <= (int)lVar23 + 1U) goto LAB_00103026;
    lVar23 = lVar23 + 1;
    uVar37 = uVar36;
    uVar26 = uVar40;
  } while( true );
code_r0x001036f2:
  if (((0x32 < local_560) && (internal::s_print != (undefined *)0x0)) &&
     (internal::s_printVerbose != '\0')) {
    (*(code *)internal::s_print)("   %u additional warnings truncated\n",local_560 - 0x32);
  }
LAB_00103728:
  internal::ArrayBase::push_back((uchar *)(param_1 + 0xa8));
  internal::ArrayBase::push_back((uchar *)(param_1 + 0xc0));
  local_4c8 = SUB84(local_518,0);
  fStack_4c4 = (float)((ulong)local_518 >> 0x20);
  internal::ArrayBase::push_back((uchar *)(param_1 + 0x40));
  if (*(int *)(param_1 + 0x38) == -1) {
    uVar13 = internal::TaskScheduler::createTaskGroup(*(void **)(param_1 + 0xa0),(uint)param_1);
    *(undefined4 *)(param_1 + 0x38) = uVar13;
  }
  uVar31 = 0;
  fStack_4c0 = SUB84(local_518,0);
  fStack_4bc = (float)((ulong)local_518 >> 0x20);
  local_4c8 = 1.479256e-39;
  fStack_4c4 = 0.0;
  internal::TaskScheduler::run
            (*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x38),&local_4c8);
LAB_001029f0:
  local_540 = (ArrayBase *)&local_468;
  local_550 = (ArrayBase *)&local_480;
  internal::ArrayBase::~ArrayBase(local_540);
  internal::ArrayBase::~ArrayBase(local_550);
  internal::ArrayBase::~ArrayBase(local_548);
  internal::ArrayBase::~ArrayBase(local_568);
LAB_00102a18:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar31;
}



/* xatlas::AddMeshJoin(xatlas::Atlas*) */

void xatlas::AddMeshJoin(Atlas *param_1)

{
  char cVar1;
  char *in_RCX;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar2;
  undefined1 *puVar3;
  int in_R8D;
  
  if (param_1 != (Atlas *)0x0) {
    if ((*(int *)(param_1 + 0xe4) == 0) && (*(long *)(param_1 + 0x30) != 0)) {
      internal::TaskScheduler::wait
                ((TaskScheduler *)**(undefined8 **)(param_1 + 0xa0),
                 (TaskGroupHandle *)(param_1 + 0x38));
      puVar3 = *(undefined1 **)(param_1 + 0x30);
      iVar2 = extraout_EDX;
      if (*(code **)(puVar3 + 8) != (code *)0x0) {
        cVar1 = (**(code **)(puVar3 + 8))
                          (*(undefined4 *)(puVar3 + 4),100,*(undefined8 *)(puVar3 + 0x10));
        if (cVar1 == '\0') {
          LOCK();
          *puVar3 = 1;
          UNLOCK();
        }
        puVar3 = *(undefined1 **)(param_1 + 0x30);
        iVar2 = extraout_EDX_00;
      }
      internal::Realloc(puVar3,0,iVar2,in_RCX,in_R8D);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    return;
  }
  if (internal::s_print != (undefined *)0x0) {
    (*(code *)internal::s_print)("AddMeshJoin: atlas is null.\n");
    return;
  }
  return;
}



/* xatlas::Destroy(xatlas::Atlas*) */

void xatlas::Destroy(Atlas *param_1)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  char *in_RCX;
  char *pcVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  int extraout_EDX_20;
  int extraout_EDX_21;
  int extraout_EDX_22;
  int extraout_EDX_23;
  int extraout_EDX_24;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 uVar6;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  ulong uVar7;
  ulong extraout_RDX_14;
  undefined8 extraout_RDX_15;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 in_R8;
  ulong uVar11;
  
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    internal::Realloc(*(void **)(param_1 + 0x10),0,(int)in_RDX,in_RCX,(int)in_R8);
    in_RDX = extraout_RDX;
  }
  if (*(void **)param_1 != (void *)0x0) {
    internal::Realloc(*(void **)param_1,0,(int)in_RDX,in_RCX,(int)in_R8);
    in_RDX = extraout_RDX_00;
  }
  if (*(long *)(param_1 + 8) != 0) {
    DestroyOutputMeshes((Context *)param_1);
    in_RDX = extraout_RDX_01;
  }
  if (*(undefined1 **)(param_1 + 0x30) != (undefined1 *)0x0) {
    LOCK();
    **(undefined1 **)(param_1 + 0x30) = 1;
    UNLOCK();
    AddMeshJoin(param_1);
    in_RDX = extraout_RDX_02;
  }
  plVar1 = *(long **)(param_1 + 0xa0);
  LOCK();
  *(undefined1 *)(plVar1 + 4) = 1;
  UNLOCK();
  lVar9 = 0;
  if (*(int *)((long)plVar1 + 0x14) != 0) {
    do {
      puVar3 = (undefined8 *)(plVar1[1] + lVar9 * 0x68);
      LOCK();
      *(undefined1 *)(puVar3 + 0xc) = 1;
      UNLOCK();
      std::condition_variable::notify_one();
      if ((*(long *)*puVar3 != 0) && (std::thread::join(), *(long *)*puVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      if (internal::s_free == (undefined *)0x0) {
        (*(code *)internal::s_realloc)();
      }
      else {
        (*(code *)internal::s_free)();
      }
      lVar9 = lVar9 + 1;
      std::condition_variable::~condition_variable((condition_variable *)(puVar3 + 6));
      in_RDX = extraout_RDX_03;
    } while ((uint)lVar9 < *(uint *)((long)plVar1 + 0x14));
  }
  iVar10 = (int)in_R8;
  iVar5 = (int)in_RDX;
  lVar9 = 0;
  if (*(int *)((long)plVar1 + 0x24) != 0) {
    do {
      lVar8 = lVar9 + 1;
      internal::Realloc(*(void **)(*plVar1 + lVar9 * 0x38 + 8),0,(int)in_RDX,in_RCX,(int)in_R8);
      iVar10 = (int)in_R8;
      iVar5 = (int)extraout_RDX_04;
      in_RDX = extraout_RDX_04;
      lVar9 = lVar8;
    } while ((uint)lVar8 < *(uint *)((long)plVar1 + 0x24));
  }
  lVar9 = 0;
  internal::Realloc((void *)*plVar1,0,iVar5,in_RCX,iVar10);
  internal::ArrayBase::~ArrayBase((ArrayBase *)(plVar1 + 1));
  internal::Realloc(*(void **)(param_1 + 0xa0),0,extraout_EDX,in_RCX,iVar10);
  uVar11 = (ulong)*(uint *)(param_1 + 0xb4);
  uVar6 = extraout_RDX_05;
  if (*(uint *)(param_1 + 0xb4) != 0) {
    do {
      iVar5 = (int)uVar6;
      pvVar2 = *(void **)(*(long *)(param_1 + 0xa8) + lVar9 * 8);
      if (*(void **)((long)pvVar2 + 0x130) != (void *)0x0) {
        internal::Realloc(*(void **)((long)pvVar2 + 0x130),0,iVar5,in_RCX,(int)uVar11);
        iVar5 = extraout_EDX_00;
      }
      lVar9 = lVar9 + 1;
      internal::Realloc(*(void **)((long)pvVar2 + 0x150),0,iVar5,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x138),0,extraout_EDX_01,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x108),0,extraout_EDX_02,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0xf0),0,extraout_EDX_03,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0xd8),0,extraout_EDX_04,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0xb8),0,extraout_EDX_05,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0xa0),0,extraout_EDX_06,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x88),0,extraout_EDX_07,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x70),0,extraout_EDX_08,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x58),0,extraout_EDX_09,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x40),0,extraout_EDX_10,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x28),0,extraout_EDX_11,in_RCX,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x10),0,extraout_EDX_12,in_RCX,(int)uVar11);
      internal::Realloc(pvVar2,0,extraout_EDX_13,in_RCX,(int)uVar11);
      uVar6 = extraout_RDX_06;
    } while ((uint)lVar9 < *(uint *)(param_1 + 0xb4));
  }
  lVar9 = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xc0) + lVar9 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        internal::Realloc((void *)puVar3[6],0,(int)uVar6,in_RCX,(int)uVar11);
        internal::Realloc((void *)puVar3[3],0,extraout_EDX_14,in_RCX,(int)uVar11);
        internal::Realloc((void *)*puVar3,0,extraout_EDX_15,in_RCX,(int)uVar11);
        internal::Realloc(puVar3,0,extraout_EDX_16,in_RCX,(int)uVar11);
        uVar6 = extraout_RDX_07;
      }
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < *(uint *)(param_1 + 0xcc));
  }
  pcVar4 = (char *)(ulong)*(uint *)(param_1 + 0xe4);
  lVar9 = 0;
  if (*(uint *)(param_1 + 0xe4) != 0) {
    do {
      iVar5 = (int)uVar6;
      lVar8 = 0;
      pvVar2 = *(void **)(*(long *)(param_1 + 0xd8) + lVar9 * 8);
      if (*(int *)((long)pvVar2 + 0xa4) != 0) {
        do {
          while( true ) {
            plVar1 = *(long **)(*(long *)((long)pvVar2 + 0x98) + lVar8 * 8);
            if (plVar1[3] != 0) {
              if (internal::s_free == (undefined *)0x0) {
                (*(code *)internal::s_realloc)();
                uVar6 = extraout_RDX_08;
              }
              else {
                (*(code *)internal::s_free)();
                uVar6 = extraout_RDX_11;
              }
            }
            if (*plVar1 != 0) {
              if (internal::s_free == (undefined *)0x0) {
                (*(code *)internal::s_realloc)();
                uVar6 = extraout_RDX_09;
              }
              else {
                (*(code *)internal::s_free)();
                uVar6 = extraout_RDX_15;
              }
            }
            if (*(long *)(*(long *)((long)pvVar2 + 0x98) + lVar8 * 8) != 0) break;
LAB_0010416d:
            iVar5 = (int)uVar6;
            lVar8 = lVar8 + 1;
            if (*(uint *)((long)pvVar2 + 0xa4) <= (uint)lVar8) goto LAB_001041be;
          }
          if (internal::s_free == (undefined *)0x0) {
            (*(code *)internal::s_realloc)();
            uVar6 = extraout_RDX_10;
            goto LAB_0010416d;
          }
          (*(code *)internal::s_free)();
          iVar5 = (int)extraout_RDX_12;
          lVar8 = lVar8 + 1;
          uVar6 = extraout_RDX_12;
        } while ((uint)lVar8 < *(uint *)((long)pvVar2 + 0xa4));
      }
LAB_001041be:
      lVar9 = lVar9 + 1;
      internal::Realloc(*(void **)((long)pvVar2 + 0xb0),0,iVar5,pcVar4,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x98),0,extraout_EDX_17,pcVar4,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x80),0,extraout_EDX_18,pcVar4,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x68),0,extraout_EDX_19,pcVar4,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x50),0,extraout_EDX_20,pcVar4,(int)uVar11);
      internal::Realloc(*(void **)((long)pvVar2 + 0x38),0,extraout_EDX_21,pcVar4,(int)uVar11);
      internal::Realloc(pvVar2,0,extraout_EDX_22,pcVar4,(int)uVar11);
      uVar6 = extraout_RDX_13;
    } while ((uint)lVar9 < *(uint *)(param_1 + 0xe4));
  }
  iVar5 = (int)uVar11;
  uVar7 = (ulong)*(uint *)(param_1 + 0xfc);
  lVar9 = 0;
  if (*(uint *)(param_1 + 0xfc) != 0) {
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 0xf0) + lVar9 * 8);
      lVar9 = lVar9 + 1;
      internal::Realloc(*(void **)((long)pvVar2 + 8),0,(int)uVar7,pcVar4,(int)uVar11);
      internal::Realloc(pvVar2,0,extraout_EDX_23,pcVar4,(int)uVar11);
      iVar5 = (int)uVar11;
      uVar7 = extraout_RDX_14;
    } while ((uint)lVar9 < *(uint *)(param_1 + 0xfc));
  }
  internal::ArrayBase::~ArrayBase((ArrayBase *)(param_1 + 0xf0));
  internal::ArrayBase::~ArrayBase((ArrayBase *)(param_1 + 0xd8));
  internal::ArrayBase::~ArrayBase((ArrayBase *)(param_1 + 0xc0));
  internal::ArrayBase::~ArrayBase((ArrayBase *)(param_1 + 0xa8));
  internal::param::Atlas::~Atlas((Atlas *)(param_1 + 0x40));
  internal::Realloc(param_1,0,extraout_EDX_24,pcVar4,iVar5);
  return;
}



/* xatlas::SetProgressCallback(xatlas::Atlas*, bool (*)(xatlas::ProgressCategory, int, void*),
   void*) */

void xatlas::SetProgressCallback
               (Atlas *param_1,_func_bool_ProgressCategory_int_void_ptr *param_2,void *param_3)

{
  if (param_1 == (Atlas *)0x0) {
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)("SetProgressCallback: atlas is null.\n");
      return;
    }
  }
  else {
    *(_func_bool_ProgressCategory_int_void_ptr **)(param_1 + 0x90) = param_2;
    *(void **)(param_1 + 0x98) = param_3;
  }
  return;
}



/* xatlas::SetAlloc(void* (*)(void*, unsigned long), void (*)(void*)) */

void xatlas::SetAlloc(_func_void_ptr_void_ptr_ulong *param_1,_func_void_void_ptr *param_2)

{
  internal::s_realloc = param_1;
  internal::s_free = param_2;
  return;
}



/* xatlas::SetPrint(int (*)(char const*, ...), bool) */

void xatlas::SetPrint(_func_int_char_ptr____ *param_1,bool param_2)

{
  internal::s_print = param_1;
  internal::s_printVerbose = param_2;
  return;
}



/* xatlas::StringForEnum(xatlas::AddMeshError) */

char * xatlas::StringForEnum(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unspecified error";
  if ((((param_1 != 1) && (pcVar1 = "Index out of range", param_1 != 2)) &&
      (pcVar1 = "Invalid face vertex count", param_1 != 3)) &&
     (pcVar1 = "Invalid index count", param_1 != 4)) {
    pcVar1 = "Success";
  }
  return pcVar1;
}



/* xatlas::StringForEnum(xatlas::ProgressCategory) */

char * xatlas::StringForEnum(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Adding mesh(es)";
  if ((((param_1 != 0) && (pcVar1 = "Computing charts", param_1 != 1)) &&
      (pcVar1 = "Packing charts", param_1 != 2)) &&
     (pcVar1 = "Building output meshes", param_1 != 3)) {
    pcVar1 = "";
  }
  return pcVar1;
}



/* xatlas::AddUvMesh(xatlas::Atlas*, xatlas::UvMeshDecl const&) */

undefined8 xatlas::AddUvMesh(Atlas *param_1,UvMeshDecl *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  float fVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  long *in_RCX;
  long lVar14;
  int extraout_EDX;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar19;
  undefined *extraout_RDX;
  uint uVar20;
  long *plVar21;
  int iVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  byte bVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  ulong local_4c;
  uint local_44;
  ulong local_40 [2];
  undefined *puVar18;
  
  bVar24 = 0;
  local_40[0] = *(ulong *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Atlas *)0x0) {
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)("AddUvMesh: atlas is null.\n");
    }
  }
  else {
    if (*(int *)(param_1 + 0xb4) == 0) {
      uVar20 = *(uint *)(param_2 + 0x20);
      puVar18 = internal::s_print;
      if (uVar20 == 0) {
        uVar27 = *(uint *)(param_2 + 0x18);
        if ((internal::s_print == (undefined *)0x0) ||
           (uVar16 = uVar27, internal::s_printVerbose == '\0')) {
          if (0x55555555 < uVar27 * -0x55555555) goto LAB_001045f8;
        }
        else {
LAB_00104606:
          in_RCX = (long *)((ulong)uVar27 / 3);
          (*(code *)internal::s_print)
                    ("Adding UV mesh %d: %u vertices, %u triangles\n",
                     *(undefined4 *)(param_1 + 0xe4),uVar16);
          if (uVar27 != (uVar27 / 3) * 3) {
LAB_001045f8:
            uVar8 = 4;
            goto LAB_001045b6;
          }
          if (uVar20 != 0) goto LAB_0010444c;
        }
      }
      else {
        uVar27 = uVar20;
        if (internal::s_print == (undefined *)0x0) {
          if (0x55555555 < uVar20 * -0x55555555) goto LAB_001045f8;
        }
        else {
          if (internal::s_printVerbose != '\0') {
            uVar16 = *(uint *)(param_2 + 0x18);
            goto LAB_00104606;
          }
          if (0x55555555 < uVar20 * -0x55555555) goto LAB_001045f8;
LAB_0010444c:
          if (uVar27 == 0) goto LAB_001044bb;
        }
        uVar16 = *(uint *)(param_2 + 0x24);
        in_RCX = (long *)(ulong)uVar16;
        lVar19 = 0;
        if (*(int *)(param_2 + 0x28) == 0) {
          lVar19 = 0;
          do {
            if (*(uint *)(param_2 + 0x18) <=
                (*(ushort *)(*(long *)(param_2 + 8) + lVar19 * 2) + uVar16 & 0xffff))
            goto LAB_00104482;
            lVar19 = lVar19 + 1;
          } while ((uint)lVar19 < uVar27);
        }
        else {
          do {
            if (*(uint *)(param_2 + 0x18) <= *(int *)(*(long *)(param_2 + 8) + lVar19 * 4) + uVar16)
            goto LAB_00104482;
            lVar19 = lVar19 + 1;
          } while ((uint)lVar19 < uVar27);
        }
      }
LAB_001044bb:
      iVar22 = (int)puVar18;
      pauVar9 = (undefined1 (*) [16])(*(code *)internal::s_realloc)(0,0x20);
      lVar19 = _LC32;
      *(undefined4 *)(pauVar9[1] + 8) = 0;
      *(long *)pauVar9[1] = lVar19;
      *pauVar9 = (undefined1  [16])0x0;
      internal::ArrayBase::push_back((uchar *)(param_1 + 0xf0));
      iVar15 = extraout_EDX;
      if (*(uint *)(param_1 + 0xe4) != 0) {
        puVar11 = *(undefined8 **)(param_1 + 0xd8);
        puVar6 = puVar11 + *(uint *)(param_1 + 0xe4);
        do {
          in_RCX = (long *)*puVar11;
          uVar17 = in_RCX[1] ^ *(ulong *)(param_2 + 8);
          if (((*in_RCX == *(long *)param_2 && uVar17 == 0) &&
              (uVar17 = in_RCX[3] ^ *(ulong *)(param_2 + 0x18),
              in_RCX[2] == *(long *)(param_2 + 0x10) && uVar17 == 0)) &&
             (uVar17 = in_RCX[5] ^ *(ulong *)(param_2 + 0x28),
             in_RCX[4] == *(long *)(param_2 + 0x20) && uVar17 == 0)) {
            puVar18 = internal::s_print;
            if ((internal::s_print != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
              (*(code *)internal::s_print)();
              puVar18 = extraout_RDX;
            }
            iVar15 = (int)puVar18;
            if (in_RCX != (long *)0x0) goto LAB_00104594;
            break;
          }
          iVar15 = (int)uVar17;
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar6);
      }
      in_RCX = (long *)internal::Realloc((void *)0x0,200,iVar15,(char *)in_RCX,iVar22);
      plVar21 = in_RCX;
      for (lVar14 = 0x19; lVar7 = _LC18, lVar14 != 0; lVar14 = lVar14 + -1) {
        *plVar21 = 0;
        plVar21 = plVar21 + (ulong)bVar24 * -2 + 1;
      }
      in_RCX[0x11] = lVar19;
      in_RCX[0x14] = lVar19;
      in_RCX[8] = lVar7;
      in_RCX[0xb] = lVar7;
      in_RCX[0xe] = lVar7;
      in_RCX[0x17] = lVar7;
      internal::ArrayBase::push_back((uchar *)(param_1 + 0xd8));
      lVar19 = *(long *)(param_2 + 8);
      *in_RCX = *(long *)param_2;
      in_RCX[1] = lVar19;
      lVar19 = *(long *)(param_2 + 0x18);
      in_RCX[2] = *(long *)(param_2 + 0x10);
      in_RCX[3] = lVar19;
      uVar8 = *(undefined8 *)(param_2 + 0x24);
      *(undefined8 *)((long)in_RCX + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
      *(undefined8 *)((long)in_RCX + 0x24) = uVar8;
      iVar15 = (int)in_RCX;
      if (*(long *)(param_2 + 0x10) != 0) {
        internal::ArrayBase::resize(iVar15 + 0x50,SUB41(*(uint *)(param_2 + 0x20) / 3,0));
        memcpy((void *)in_RCX[10],*(void **)(param_2 + 0x10),
               (ulong)*(uint *)((long)in_RCX + 0x5c) << 2);
      }
      internal::ArrayBase::resize(iVar15 + 0x68,SUB41(*(undefined4 *)(param_2 + 0x20),0));
      if (uVar27 == 0) {
        uVar17 = 0;
      }
      else {
        lVar19 = in_RCX[0xd];
        uVar17 = (ulong)uVar27;
        uVar10 = 0;
        if (uVar20 == 0) {
          do {
            *(int *)(lVar19 + uVar10 * 4) = (int)uVar10;
            uVar10 = uVar10 + 1;
          } while (uVar17 != uVar10);
        }
        else {
          lVar7 = *(long *)(param_2 + 8);
          lVar14 = 0;
          while( true ) {
            if (*(int *)(param_2 + 0x28) == 0) {
              *(uint *)(lVar19 + uVar10 * 4) =
                   (uint)(ushort)((short)*(int *)(param_2 + 0x24) + *(short *)(lVar7 + uVar10 * 2));
            }
            else {
              *(int *)(lVar19 + uVar10 * 4) = *(int *)(param_2 + 0x24) + *(int *)(lVar7 + lVar14);
            }
            if (uVar10 + 1 == uVar17) break;
            uVar10 = uVar10 + 1;
            lVar14 = uVar10 * 4;
          }
        }
      }
      internal::ArrayBase::resize(iVar15 + 0x80,SUB41(*(undefined4 *)(param_2 + 0x18),0));
      uVar20 = *(uint *)(param_2 + 0x18);
      if (uVar20 != 0) {
        lVar19 = *(long *)param_2;
        iVar22 = *(int *)(param_2 + 0x1c);
        puVar6 = (undefined8 *)in_RCX[0x10];
        uVar16 = 0;
        puVar11 = puVar6;
        do {
          uVar10 = (ulong)uVar16;
          puVar12 = puVar11 + 1;
          uVar16 = uVar16 + iVar22;
          *puVar11 = *(undefined8 *)(lVar19 + uVar10);
          puVar11 = puVar12;
        } while (puVar12 != puVar6 + uVar20);
      }
      uVar20 = *(uint *)(param_2 + 0x20);
      *(uint *)(in_RCX + 6) = uVar20 / 3;
      uVar20 = uVar20 / 3 + 0x1f >> 5;
      *(uint *)((long)in_RCX + 0x44) = uVar20;
      if (*(uint *)(in_RCX + 9) < uVar20) {
        internal::ArrayBase::setArrayCapacity(iVar15 + 0x38);
      }
      internal::Array<unsigned_int>::zeroOutMemory((Array<unsigned_int> *)(in_RCX + 7));
      if (2 < uVar27) {
        uVar10 = 0;
        uVar20 = 0;
        fVar26 = _LC19;
        uVar27 = _LC37;
        fVar28 = _LC11;
        do {
          lVar19 = in_RCX[0x10];
          uVar23 = uVar10 & 0xffffffff;
          puVar13 = (ulong *)(in_RCX[0xd] + uVar10 * 0xc);
          local_4c = *puVar13;
          local_44 = (uint)puVar13[1];
          puVar13 = &local_4c;
          do {
            pfVar1 = (float *)(lVar19 + (ulong)(uint)*puVar13 * 8);
            if ((NAN(*pfVar1)) || (NAN(pfVar1[1]))) {
              if ((uVar20 + 1 < 0x33) &&
                 ((internal::s_print != (undefined *)0x0 && (internal::s_printVerbose != '\0')))) {
                (*(code *)internal::s_print)
                          ("   NAN texture coordinate in vertex %u\n",(ulong)(uint)*puVar13);
                fVar26 = _LC19;
                uVar27 = _LC37;
                fVar28 = _LC11;
              }
              goto LAB_001049b0;
            }
            puVar13 = (ulong *)((long)puVar13 + 4);
          } while (puVar13 != local_40);
          pfVar1 = (float *)(lVar19 + (local_4c & 0xffffffff) * 8);
          pfVar2 = (float *)(lVar19 + (local_4c >> 0x20) * 8);
          pfVar3 = (float *)(lVar19 + (ulong)local_44 * 8);
          fVar25 = *pfVar1;
          fVar5 = pfVar1[1];
          fVar25 = (float)((uint)(((*pfVar2 - fVar25) * (pfVar3[1] - fVar5) -
                                  (*pfVar3 - fVar25) * (pfVar2[1] - fVar5)) * fVar28) & uVar27);
          if (fVar25 <= fVar26) {
            if (((uVar20 + 1 < 0x33) && (internal::s_print != (undefined *)0x0)) &&
               (internal::s_printVerbose != '\0')) {
              (*(code *)internal::s_print)
                        ((double)fVar25,"   Zero area face: %d, indices (%d %d %d), area is %f\n",
                         uVar23,local_4c & 0xffffffff,local_4c >> 0x20,(ulong)local_44);
              fVar26 = _LC19;
              uVar27 = _LC37;
              fVar28 = _LC11;
            }
LAB_001049b0:
            uVar20 = uVar20 + 1;
            puVar4 = (uint *)(in_RCX[7] + (uVar23 >> 5) * 4);
            *puVar4 = *puVar4 | 1 << ((byte)uVar23 & 0x1f);
          }
          uVar10 = uVar10 + 1;
        } while ((uint)uVar10 < (uint)(uVar17 / 3));
        if (((0x32 < uVar20) && (internal::s_print != (undefined *)0x0)) &&
           (internal::s_printVerbose != '\0')) {
          (*(code *)internal::s_print)("   %u additional warnings truncated\n",uVar20 - 0x32);
        }
      }
LAB_00104594:
      *(long **)*pauVar9 = in_RCX;
      uVar8 = 0;
      goto LAB_001045b6;
    }
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)
                ("AddUvMesh: Meshes and UV meshes cannot be added to the same atlas.\n");
    }
  }
  uVar8 = 1;
LAB_001045b6:
  if (local_40[0] == *(ulong *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104482:
  uVar8 = 2;
  goto LAB_001045b6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::PackCharts(xatlas::Atlas*, xatlas::PackOptions) */

void xatlas::PackCharts(Context *param_1,undefined8 param_2,int param_3,char *param_4,
                       undefined4 *param_5,undefined8 param_6,undefined8 param_7,float param_8,
                       undefined8 param_9)

{
  long lVar1;
  uint *puVar2;
  float *pfVar3;
  Context CVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  char cVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  void *pvVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  char *pcVar28;
  int *piVar29;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined8 extraout_RDX;
  undefined *puVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined *extraout_RDX_00;
  undefined *extraout_RDX_01;
  int iVar33;
  uint uVar34;
  int iVar35;
  undefined4 uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  long in_FS_OFFSET;
  bool bVar42;
  float fVar43;
  uint uVar44;
  undefined1 auVar45 [12];
  undefined1 auVar46 [16];
  long local_1a8;
  ulong local_1a0;
  ulong local_190;
  long local_148;
  int local_13c;
  void *local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined4 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Context *)0x0) {
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)("PackCharts: atlas is null.\n");
    }
    goto LAB_00105525;
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
    if (*(int *)(param_1 + 0xfc) == 0) {
      if (internal::s_print != (undefined *)0x0) {
        (*(code *)internal::s_print)("PackCharts: No meshes. Call AddMesh or AddUvMesh first.\n");
      }
      goto LAB_00105525;
    }
LAB_00105552:
    CVar4 = param_1[0x108];
  }
  else {
    if (*(int *)(param_1 + 0xfc) != 0) goto LAB_00105552;
    CVar4 = param_1[0x88];
  }
  if (CVar4 == (Context)0x0) {
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)("PackCharts: ComputeCharts must be called first.\n");
    }
  }
  else {
    if (param_8 < 0.0) {
      puVar30 = internal::s_print;
      if (internal::s_print != (undefined *)0x0) {
        (*(code *)internal::s_print)("PackCharts: PackOptions::texelsPerUnit is negative.\n");
        puVar30 = extraout_RDX_00;
      }
      param_3 = (int)puVar30;
      param_8 = 0.0;
    }
    if (*(long *)(param_1 + 8) != 0) {
      DestroyOutputMeshes(param_1);
      param_3 = extraout_EDX;
    }
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      internal::Realloc(*(void **)(param_1 + 0x10),0,param_3,param_4,(int)param_5);
      *(undefined8 *)(param_1 + 0x10) = 0;
      param_3 = extraout_EDX_00;
    }
    if (*(void **)param_1 != (void *)0x0) {
      internal::Realloc(*(void **)param_1,0,param_3,param_4,(int)param_5);
      *(undefined8 *)param_1 = 0;
    }
    local_100 = _LC32;
    local_e8 = _LC18;
    uStack_4c = _UNK_001205d8;
    local_54 = __LC124;
    local_108 = 0;
    local_f8 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    local_f0 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = local_100;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = local_100;
    local_b0 = 0;
    local_98 = 0;
    local_90 = local_e8;
    local_88 = 0;
    local_80 = 0;
    local_78 = local_e8;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if (*(int *)(param_1 + 0xfc) == 0) {
      internal::pack::Atlas::addCharts
                ((Atlas *)&local_108,*(TaskScheduler **)(param_1 + 0xa0),(Atlas *)(param_1 + 0x40));
    }
    else {
      uVar34 = 0;
      do {
        uVar34 = uVar34 + 1;
        internal::pack::Atlas::addUvMeshCharts((UvMeshInstance *)&local_108);
      } while (uVar34 < *(uint *)(param_1 + 0xfc));
    }
    pcVar28 = *(char **)(param_1 + 0x98);
    cVar12 = internal::pack::Atlas::packCharts
                       ((Atlas *)&local_108,(_func_bool_ProgressCategory_int_void_ptr *)&param_7,
                        *(void **)(param_1 + 0x90));
    auVar46._8_8_ = extraout_RDX;
    auVar46._0_8_ = pcVar28;
    auVar45 = auVar46._0_12_;
    if (cVar12 != '\0') {
      *(undefined8 *)(param_1 + 0x18) = local_60;
      *(ulong *)(param_1 + 0x20) = CONCAT44(local_b8._4_4_,local_d0._4_4_);
      *(undefined4 *)(param_1 + 0x2c) = local_58;
      if (local_d0._4_4_ != 0) {
        auVar46 = internal::Realloc((void *)0x0,(ulong)local_d0._4_4_ * 4,(int)extraout_RDX,pcVar28,
                                    (int)param_5);
        auVar45 = auVar46._0_12_;
        lVar26 = auVar46._0_8_;
        *(long *)(param_1 + 0x10) = lVar26;
        uVar34 = *(uint *)(param_1 + 0x20);
        if (uVar34 != 0) {
          lVar19 = 0;
          do {
            *(undefined4 *)(lVar26 + lVar19) = *(undefined4 *)(local_f0 + lVar19);
            lVar19 = lVar19 + 4;
            auVar11._8_8_ = lVar19;
            auVar11._0_8_ = lVar26;
            auVar45 = auVar11._0_12_;
          } while ((ulong)uVar34 << 2 != lVar19);
        }
      }
      piVar29 = auVar45._0_8_;
      if (param_9._3_1_ != '\0') {
        puVar27 = (undefined4 *)
                  internal::Realloc((void *)0x0,
                                    (ulong)(uint)(*(int *)(param_1 + 0x20) *
                                                  *(int *)(param_1 + 0x18) *
                                                 *(int *)(param_1 + 0x1c)) << 2,auVar45._8_4_,
                                    (char *)piVar29,(int)param_5);
        lVar26 = local_108;
        *(undefined4 **)param_1 = puVar27;
        if (*(int *)(param_1 + 0x20) != 0) {
          lVar19 = 0;
          while( true ) {
            iVar33 = *(int *)(param_1 + 0x1c);
            uVar34 = *(uint *)(param_1 + 0x18);
            piVar10 = *(int **)(lVar26 + lVar19 * 8);
            piVar29 = piVar10;
            if (iVar33 != 0) {
              uVar24 = 0;
              iVar35 = param_7._4_4_;
              do {
                iVar16 = *piVar10 * iVar35;
                iVar35 = iVar35 + 1;
                memcpy(puVar27 + uVar24 + iVar33 * uVar34 * (int)lVar19,
                       (void *)(*(long *)(piVar10 + 2) + (ulong)(uint)(iVar16 + param_7._4_4_) * 4),
                       (ulong)uVar34 << 2);
                uVar24 = (ulong)((int)uVar24 + uVar34);
              } while (iVar33 + param_7._4_4_ != iVar35);
            }
            lVar19 = lVar19 + 1;
            param_5 = puVar27;
            if (*(uint *)(param_1 + 0x20) <= (uint)lVar19) break;
            puVar27 = *(undefined4 **)param_1;
          }
        }
      }
      puVar30 = internal::s_print;
      if ((internal::s_print != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
        (*(code *)internal::s_print)();
        puVar30 = extraout_RDX_01;
      }
      iVar33 = (int)puVar30;
      if ((*(code **)(param_1 + 0x90) == (code *)0x0) ||
         (cVar13 = (**(code **)(param_1 + 0x90))(3,0,*(undefined8 *)(param_1 + 0x98)),
         iVar33 = extraout_EDX_01, cVar13 != '\0')) {
        uVar34 = *(uint *)(param_1 + 0xfc);
        if (uVar34 == 0) {
          uVar34 = *(uint *)(param_1 + 0xb4);
        }
        *(uint *)(param_1 + 0x28) = uVar34;
        pvVar17 = (void *)internal::Realloc((void *)0x0,(ulong)uVar34 * 0x28,iVar33,(char *)piVar29,
                                            (int)param_5);
        *(void **)(param_1 + 8) = pvVar17;
        memset(pvVar17,0,(ulong)*(uint *)(param_1 + 0x28) * 0x28);
        if (*(int *)(param_1 + 0xfc) == 0) {
          if (*(int *)(param_1 + 0x28) != 0) {
            uVar34 = 0;
            local_1a0 = 0;
            local_148 = 0;
            local_13c = 0;
            do {
              local_120 = (void *)0x0;
              local_110 = 0;
              plVar18 = (long *)(local_148 * 5 + *(long *)(param_1 + 8));
              plVar6 = *(long **)(*(long *)(param_1 + 0xc0) + local_148);
              local_118 = _LC18;
              if (plVar6 != (long *)0x0) {
                internal::ArrayBase::resize
                          ((uint)(Array<unsigned_int> *)&local_120,
                           SUB41(*(int *)((long)plVar6 + 0xc) + 0x1fU >> 5,0));
                internal::Array<unsigned_int>::zeroOutMemory((Array<unsigned_int> *)&local_120);
              }
              lVar19 = *(long *)(param_1 + 0x58) + local_148 * 9;
              lVar26 = local_148 * 3;
              plVar20 = (long *)(lVar26 + *(long *)(param_1 + 0x70));
              uVar44 = *(int *)(lVar19 + 0x3c) +
                       (int)((ulong)*(undefined8 *)((long)plVar18 + 0x1c) >> 0x20);
              *(ulong *)((long)plVar18 + 0x1c) =
                   CONCAT44(uVar44,*(int *)(lVar19 + 0xc) * 3 +
                                   (int)*(undefined8 *)((long)plVar18 + 0x1c));
              uVar24 = (ulong)uVar44;
              if (*(int *)((long)plVar20 + 0xc) != 0) {
                lVar19 = *plVar20;
                lVar22 = 0;
                do {
                  param_5 = *(undefined4 **)(lVar19 + lVar22 * 8);
                  if (param_5[0x11] != 0) {
                    lVar7 = *(long *)(param_5 + 0xe);
                    lVar37 = 0;
                    do {
                      while( true ) {
                        piVar29 = *(int **)(lVar7 + lVar37 * 8);
                        lVar25 = *(long *)(piVar29 + 10);
                        uVar14 = (int)uVar24 + piVar29[0xf];
                        uVar24 = (ulong)uVar14;
                        *(uint *)(plVar18 + 4) = uVar14;
                        uVar44 = *(uint *)(lVar25 + 0x4c);
                        if (plVar6 != (long *)0x0) break;
                        uVar44 = (uVar44 / 3) * 3;
                        piVar29 = (int *)(ulong)uVar44;
                        *(int *)((long)plVar18 + 0x1c) = *(int *)((long)plVar18 + 0x1c) + uVar44;
LAB_00104f97:
                        *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
                        lVar37 = lVar37 + 1;
                        if ((uint)param_5[0x11] <= (uint)lVar37) goto LAB_00105041;
                      }
                      if (uVar44 < 3) goto LAB_00104f97;
                      lVar25 = *(long *)(piVar29 + 0x16);
                      lVar8 = plVar6[3];
                      lVar21 = 0;
                      do {
                        uVar14 = *(uint *)(lVar8 + (ulong)*(uint *)(lVar25 + lVar21 * 4) * 4);
                        piVar29 = (int *)(ulong)uVar14;
                        uVar40 = 1 << ((byte)uVar14 & 0x1f);
                        puVar23 = (uint *)((long)local_120 + (ulong)(uVar14 >> 5) * 4);
                        uVar14 = *puVar23;
                        if ((uVar14 & uVar40) == 0) {
                          *puVar23 = uVar14 | uVar40;
                          *(int *)((long)plVar18 + 0x1c) =
                               *(int *)((long)plVar18 + 0x1c) +
                               (uint)*(byte *)(*plVar6 + (long)piVar29);
                        }
                        lVar21 = lVar21 + 1;
                      } while ((uint)lVar21 < uVar44 / 3);
                      *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
                      lVar37 = lVar37 + 1;
                      uVar14 = *(uint *)(plVar18 + 4);
                      uVar24 = (ulong)uVar14;
                    } while ((uint)lVar37 < (uint)param_5[0x11]);
LAB_00105041:
                    uVar24 = (ulong)uVar14;
                  }
                  lVar22 = lVar22 + 1;
                } while ((uint)lVar22 < *(uint *)((long)plVar20 + 0xc));
              }
              auVar45 = internal::Realloc((void *)0x0,uVar24 * 0x14,(int)uVar24,(char *)piVar29,
                                          (int)param_5);
              plVar18[2] = auVar45._0_8_;
              auVar45 = internal::Realloc((void *)0x0,(ulong)*(uint *)((long)plVar18 + 0x1c) << 2,
                                          auVar45._8_4_,(char *)piVar29,(int)param_5);
              plVar18[1] = auVar45._0_8_;
              lVar19 = internal::Realloc((void *)0x0,(ulong)*(uint *)(plVar18 + 3) * 0x18,
                                         auVar45._8_4_,(char *)piVar29,(int)param_5);
              puVar30 = internal::s_print;
              *plVar18 = lVar19;
              if ((puVar30 != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
                param_5 = (undefined4 *)(ulong)*(uint *)(plVar18 + 3);
                (*(code *)puVar30)("   Mesh %u: %u vertices, %u triangles, %u charts\n",uVar34,
                                   (int)plVar18[4],(ulong)*(uint *)((long)plVar18 + 0x1c) / 3);
              }
              uVar9 = _LC54;
              puVar31 = (undefined8 *)(*(long *)(param_1 + 0x58) + local_148 * 9);
              uVar24 = (ulong)*(uint *)((long)puVar31 + 0x3c);
              piVar29 = (int *)*puVar31;
              iVar33 = *(int *)((long)puVar31 + 0xc);
              lVar19 = puVar31[3];
              puVar23 = (uint *)puVar31[6];
              if (*(uint *)((long)puVar31 + 0x3c) != 0) {
                puVar2 = puVar23 + uVar24;
                puVar31 = (undefined8 *)plVar18[2];
                do {
                  *puVar31 = uVar9;
                  uVar44 = *puVar23;
                  param_5 = (undefined4 *)(ulong)uVar44;
                  puVar23 = puVar23 + 1;
                  puVar31[1] = 0;
                  *(uint *)(puVar31 + 2) = uVar44;
                  puVar31 = (undefined8 *)((long)puVar31 + 0x14);
                } while (puVar23 != puVar2);
              }
              if (iVar33 != 0) {
                param_5 = (undefined4 *)plVar18[1];
                iVar35 = 0;
                do {
                  iVar16 = *piVar29;
                  iVar15 = 0;
                  do {
                    uVar44 = iVar15 + iVar35;
                    uVar14 = iVar16 * 3 + iVar15;
                    iVar15 = iVar15 + 1;
                    param_5[uVar14] = *(undefined4 *)(lVar19 + (ulong)uVar44 * 4);
                  } while (iVar15 != 3);
                  iVar35 = iVar35 + 3;
                  piVar29 = piVar29 + 1;
                } while (iVar33 * 3 != iVar35);
              }
              lVar19 = *(long *)(param_1 + 0x70);
              local_190 = 0;
              lVar22 = 0;
              plVar20 = (long *)(lVar26 + lVar19);
              if (*(int *)((long)plVar20 + 0xc) != 0) {
                do {
                  lVar37 = local_c0;
                  lVar7 = *(long *)(*plVar20 + lVar22 * 8);
                  if (*(int *)(lVar7 + 0x44) != 0) {
                    local_1a8 = 0;
                    do {
                      pvVar17 = local_120;
                      param_5 = *(undefined4 **)(lVar37 + local_1a0 * 8);
                      lVar19 = *(long *)(*(long *)(lVar7 + 0x38) + local_1a8 * 8);
                      uVar44 = *(uint *)(*(long *)(lVar19 + 0x28) + 0x4c);
                      piVar29 = (int *)(ulong)uVar44;
                      uVar14 = *(uint *)(lVar19 + 0x3c);
                      uVar40 = (uint)((ulong)piVar29 / 3);
                      iVar33 = (int)uVar24;
                      if (uVar14 != 0) {
                        uVar36 = *param_5;
                        lVar25 = plVar18[2];
                        lVar8 = *(long *)(lVar19 + 0x88);
                        lVar21 = *(long *)(lVar19 + 0x70);
                        lVar38 = *(long *)(*(long *)(lVar19 + 0x28) + 0x88);
                        uVar24 = 0;
                        do {
                          puVar31 = (undefined8 *)
                                    (lVar25 + (ulong)(uint)(iVar33 + (int)uVar24) * 0x14);
                          *puVar31 = CONCAT44((int)local_1a0,uVar36);
                          pfVar3 = (float *)(lVar38 + (ulong)*(uint *)(lVar8 + uVar24 * 4) * 8);
                          fVar43 = *pfVar3;
                          if (fVar43 < 0.0) {
                            fVar43 = 0.0;
                          }
                          *(float *)(puVar31 + 1) = fVar43;
                          fVar43 = pfVar3[1];
                          if (fVar43 < 0.0) {
                            fVar43 = 0.0;
                          }
                          uVar5 = *(undefined4 *)(lVar21 + uVar24 * 4);
                          uVar24 = uVar24 + 1;
                          *(float *)((long)puVar31 + 0xc) = fVar43;
                          *(undefined4 *)(puVar31 + 2) = uVar5;
                        } while (uVar24 != uVar14);
                      }
                      if (2 < uVar44) {
                        lVar25 = *(long *)(lVar19 + 0x58);
                        lVar8 = plVar18[1];
                        lVar38 = 0;
                        lVar21 = *(long *)(lVar19 + 0x40);
                        do {
                          iVar35 = *(int *)(lVar25 + lVar38 * 4);
                          lVar32 = 0;
                          do {
                            uVar24 = (ulong)(uint)(iVar35 * 3 + (int)lVar32);
                            if (plVar6 != (long *)0x0) {
                              uVar24 = (ulong)*(uint *)(plVar6[6] + uVar24 * 4);
                            }
                            lVar1 = lVar32 * 4;
                            lVar32 = lVar32 + 1;
                            *(int *)(lVar8 + uVar24 * 4) = *(int *)(lVar21 + lVar1) + iVar33;
                          } while (lVar32 != 3);
                          lVar38 = lVar38 + 1;
                          lVar21 = lVar21 + 0xc;
                        } while ((uint)lVar38 < uVar40);
                      }
                      cVar12 = *(char *)(lVar19 + 0xe0);
                      plVar20 = (long *)(*plVar18 + local_190 * 0x18);
                      *(undefined4 *)(plVar20 + 1) = *param_5;
                      uVar36 = 4;
                      if (cVar12 == '\0') {
                        uVar36 = *(undefined4 *)(lVar19 + 0x30);
                      }
                      *(undefined4 *)(plVar20 + 2) = uVar36;
                      if (plVar6 == (long *)0x0) {
                        *(uint *)((long)plVar20 + 0xc) = uVar40;
                        if ((ulong)piVar29 / 3 == 0) {
                          lVar25 = 0;
                        }
                        else {
                          lVar25 = (*(code *)internal::s_realloc)(0);
                          uVar40 = *(uint *)((long)plVar20 + 0xc);
                        }
                        *plVar20 = lVar25;
                        if (uVar40 != 0) {
                          lVar8 = *(long *)(lVar19 + 0x58);
                          lVar21 = 0;
                          do {
                            uVar44 = *(uint *)(lVar8 + lVar21 * 4);
                            piVar29 = (int *)(ulong)uVar44;
                            *(uint *)(lVar25 + lVar21 * 4) = uVar44;
                            lVar21 = lVar21 + 1;
                          } while ((uint)lVar21 < *(uint *)((long)plVar20 + 0xc));
                        }
                      }
                      else if ((local_120 == (void *)0x0) || (local_118._4_4_ == 0)) {
                        *(undefined4 *)((long)plVar20 + 0xc) = 0;
                        if (2 < uVar44) goto LAB_0010533b;
                        *plVar20 = 0;
                      }
                      else {
                        memset(local_120,0,(ulong)(uint)(local_118._4_4_ * (int)local_118));
                        piVar29 = (int *)(ulong)uVar44;
                        *(undefined4 *)((long)plVar20 + 0xc) = 0;
                        if (uVar44 < 3) {
                          *plVar20 = 0;
                          memset(pvVar17,0,(ulong)(uint)(local_118._4_4_ * (int)local_118));
                        }
                        else {
LAB_0010533b:
                          lVar25 = *(long *)(lVar19 + 0x58);
                          lVar8 = plVar6[3];
                          lVar21 = 0;
                          do {
                            uVar44 = *(uint *)(lVar8 + (ulong)*(uint *)(lVar25 + lVar21 * 4) * 4);
                            uVar14 = 1 << ((byte)uVar44 & 0x1f);
                            puVar23 = (uint *)((long)pvVar17 + (ulong)(uVar44 >> 5) * 4);
                            uVar44 = *puVar23;
                            if ((uVar44 & uVar14) == 0) {
                              *puVar23 = uVar44 | uVar14;
                              *(int *)((long)plVar20 + 0xc) = *(int *)((long)plVar20 + 0xc) + 1;
                            }
                            lVar21 = lVar21 + 1;
                          } while ((uint)lVar21 < uVar40);
                          if (*(int *)((long)plVar20 + 0xc) == 0) {
                            lVar25 = 0;
                          }
                          else {
                            lVar25 = (*(code *)internal::s_realloc)();
                          }
                          *plVar20 = lVar25;
                          if ((pvVar17 != (void *)0x0) && (local_118._4_4_ != 0)) {
                            memset(pvVar17,0,(ulong)(uint)(local_118._4_4_ * (int)local_118));
                          }
                          lVar25 = *(long *)(lVar19 + 0x58);
                          lVar21 = 0;
                          lVar8 = plVar6[3];
                          param_5 = (undefined4 *)0x1;
                          uVar24 = 0;
                          do {
                            uVar44 = *(uint *)(lVar8 + (ulong)*(uint *)(lVar25 + lVar21 * 4) * 4);
                            piVar29 = (int *)(ulong)uVar44;
                            uVar41 = 1 << ((byte)uVar44 & 0x1f);
                            puVar23 = (uint *)((long)pvVar17 + (ulong)(uVar44 >> 5) * 4);
                            uVar14 = *puVar23;
                            uVar39 = uVar24;
                            if ((uVar14 & uVar41) == 0) {
                              *puVar23 = uVar14 | uVar41;
                              uVar39 = (ulong)((int)uVar24 + 1);
                              *(uint *)(*plVar20 + uVar24 * 4) = uVar44;
                            }
                            lVar21 = lVar21 + 1;
                            uVar24 = uVar39;
                          } while ((uint)lVar21 < uVar40);
                        }
                      }
                      local_1a8 = local_1a8 + 1;
                      uVar24 = (ulong)(uint)(iVar33 + *(int *)(lVar19 + 0x3c));
                      *(undefined4 *)((long)plVar20 + 0x14) = 0;
                      local_190 = (ulong)((int)local_190 + 1);
                      local_1a0 = (ulong)((int)local_1a0 + 1);
                    } while ((uint)local_1a8 < *(uint *)(lVar7 + 0x44));
                    lVar19 = *(long *)(param_1 + 0x70);
                  }
                  lVar22 = lVar22 + 1;
                  plVar20 = (long *)(lVar26 + lVar19);
                } while ((uint)lVar22 < *(uint *)((long)plVar20 + 0xc));
              }
              uVar34 = uVar34 + 1;
              if (((*(code **)(param_1 + 0x90) != (code *)0x0) &&
                  (iVar33 = (int)(((float)uVar34 / (float)*(uint *)(param_1 + 0x28)) * __LC35),
                  bVar42 = iVar33 != local_13c, local_13c = iVar33, bVar42)) &&
                 (cVar12 = (**(code **)(param_1 + 0x90))(3,iVar33,*(undefined8 *)(param_1 + 0x98)),
                 cVar12 == '\0')) {
                internal::ArrayBase::~ArrayBase((ArrayBase *)&local_120);
                goto LAB_0010551d;
              }
              internal::ArrayBase::~ArrayBase((ArrayBase *)&local_120);
              local_148 = local_148 + 8;
            } while (uVar34 < *(uint *)(param_1 + 0x28));
            cVar12 = local_13c != 100;
          }
        }
        else {
          local_190 = 0;
          uVar44 = 0;
          uVar34 = 0;
          iVar33 = 0;
          do {
            plVar6 = *(long **)(*(long *)(param_1 + 0xf0) + local_190);
            plVar18 = (long *)(local_190 * 5 + *(long *)(param_1 + 8));
            lVar26 = *plVar6;
            uVar14 = *(uint *)((long)plVar6 + 0x14);
            uVar36 = *(undefined4 *)(lVar26 + 0xa4);
            uVar5 = *(undefined4 *)(lVar26 + 0x74);
            *(uint *)(plVar18 + 4) = uVar14;
            plVar18[3] = CONCAT44(uVar5,uVar36);
            auVar45 = internal::Realloc((void *)0x0,(ulong)uVar14 * 0x14,(int)lVar26,(char *)piVar29
                                        ,(int)param_5);
            plVar18[2] = auVar45._0_8_;
            auVar45 = internal::Realloc((void *)0x0,(ulong)*(uint *)((long)plVar18 + 0x1c) << 2,
                                        auVar45._8_4_,(char *)piVar29,(int)param_5);
            plVar18[1] = auVar45._0_8_;
            lVar26 = internal::Realloc((void *)0x0,(ulong)*(uint *)(plVar18 + 3) * 0x18,
                                       auVar45._8_4_,(char *)piVar29,(int)param_5);
            puVar30 = internal::s_print;
            *plVar18 = lVar26;
            if ((puVar30 != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
              param_5 = (undefined4 *)(ulong)*(uint *)(plVar18 + 3);
              (*(code *)puVar30)("   UV mesh %u: %u vertices, %u triangles, %u charts\n",uVar34,
                                 (int)plVar18[4],(ulong)*(uint *)((long)plVar18 + 0x1c) / 3);
            }
            uVar14 = *(uint *)((long)plVar6 + 0x14);
            lVar26 = *plVar6;
            if (uVar14 != 0) {
              lVar19 = plVar6[1];
              param_5 = *(undefined4 **)(lVar26 + 0xb0);
              uVar24 = 0;
              puVar27 = (undefined4 *)plVar18[2];
              do {
                uVar9 = *(undefined8 *)(lVar19 + uVar24 * 8);
                puVar27[4] = (int)uVar24;
                *(undefined8 *)(puVar27 + 2) = uVar9;
                if (param_5[uVar24] == -1) {
                  uVar40 = 0xffffffff;
                  uVar36 = 0xffffffff;
                }
                else {
                  uVar40 = param_5[uVar24] + uVar44;
                  uVar36 = **(undefined4 **)(local_c0 + (ulong)uVar40 * 8);
                }
                uVar24 = uVar24 + 1;
                puVar27[1] = uVar40;
                *puVar27 = uVar36;
                puVar27 = puVar27 + 5;
              } while (uVar14 != uVar24);
            }
            memcpy((void *)plVar18[1],*(void **)(lVar26 + 0x68),(ulong)*(uint *)(lVar26 + 0x74) << 2
                  );
            lVar26 = local_c0;
            piVar29 = (int *)(ulong)*(uint *)(*plVar6 + 0xa4);
            if (*(uint *)(*plVar6 + 0xa4) != 0) {
              lVar19 = 0;
              do {
                lVar22 = *plVar18;
                plVar20 = (long *)(lVar22 + lVar19 * 0x18);
                puVar27 = *(undefined4 **)(lVar26 + (ulong)uVar44 * 8);
                uVar14 = puVar27[0x1f];
                plVar20[1] = CONCAT44(uVar14,*puVar27);
                lVar22 = internal::Realloc((void *)0x0,(ulong)uVar14 << 2,(int)lVar22,
                                           (char *)piVar29,(int)param_5);
                uVar14 = puVar27[1];
                *plVar20 = lVar22;
                *(uint *)((long)plVar20 + 0x14) = uVar14;
                if (*(int *)((long)plVar20 + 0xc) != 0) {
                  lVar7 = *(long *)(puVar27 + 0x1c);
                  lVar37 = 0;
                  do {
                    uVar14 = *(uint *)(lVar7 + lVar37 * 4);
                    *(uint *)(lVar22 + lVar37 * 4) = uVar14;
                    lVar37 = lVar37 + 1;
                  } while ((uint)lVar37 < *(uint *)((long)plVar20 + 0xc));
                }
                piVar29 = (int *)(ulong)uVar14;
                uVar44 = uVar44 + 1;
                lVar19 = lVar19 + 1;
              } while ((uint)lVar19 < *(uint *)(*plVar6 + 0xa4));
            }
            uVar34 = uVar34 + 1;
            if (((*(code **)(param_1 + 0x90) != (code *)0x0) &&
                (iVar35 = (int)(((float)uVar34 / (float)*(uint *)(param_1 + 0x28)) * __LC35),
                bVar42 = iVar35 != iVar33, iVar33 = iVar35, bVar42)) &&
               (cVar12 = (**(code **)(param_1 + 0x90))(3,iVar35,*(undefined8 *)(param_1 + 0x98)),
               cVar12 == '\0')) goto LAB_0010551d;
            local_190 = local_190 + 8;
          } while (uVar34 < *(uint *)(param_1 + 0xfc));
          cVar12 = iVar33 != 100;
        }
        if ((*(code **)(param_1 + 0x90) != (code *)0x0) && (cVar12 != '\0')) {
          (**(code **)(param_1 + 0x90))(3,100,*(undefined8 *)(param_1 + 0x98));
        }
      }
    }
LAB_0010551d:
    internal::pack::Atlas::~Atlas((Atlas *)&local_108);
  }
LAB_00105525:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::segment::runComputeUvMeshChartsTask(void*, void*) */

void xatlas::internal::segment::runComputeUvMeshChartsTask(void *param_1,void *param_2)

{
  char *in_RCX;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar1;
  int extraout_EDX_02;
  uint uVar2;
  int in_R8D;
  long in_FS_OFFSET;
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  void *local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_30;
  void *local_28;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  long local_10;
  
                    /* WARNING: Load size is inaccurate */
  local_88 = *param_2;
  uStack_80 = *(undefined8 *)((long)param_2 + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_74 = *(uint *)(local_88 + 0x74);
  local_70 = 0;
  local_58 = 8;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_68 = (undefined1  [16])0x0;
  local_30 = local_74 / 3;
  uVar2 = local_30 + 0x1f >> 5;
  local_40 = 4;
  local_38 = 0;
  local_28 = (void *)0x0;
  local_20 = 4;
  local_18 = 0;
  local_1c = uVar2;
  if (uVar2 != 0) {
    local_28 = (void *)Realloc((void *)0x0,(ulong)(uVar2 * 4),in_EDX,in_RCX,in_R8D);
    local_18 = uVar2;
  }
  ComputeUvMeshChartsTask::run((ComputeUvMeshChartsTask *)&local_88);
  Realloc(local_28,0,extraout_EDX,in_RCX,in_R8D);
  iVar1 = extraout_EDX_00;
  if ((void *)local_68._0_8_ != (void *)0x0) {
    Realloc((void *)local_68._0_8_,0,extraout_EDX_00,in_RCX,in_R8D);
    iVar1 = extraout_EDX_01;
  }
  Realloc(local_48,0,iVar1,in_RCX,in_R8D);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    Realloc((void *)local_68._8_8_,0,extraout_EDX_02,in_RCX,in_R8D);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::ComputeCharts(xatlas::Atlas*, xatlas::ChartOptions) */

void xatlas::ComputeCharts
               (Atlas *param_1,undefined8 param_2,undefined8 param_3,char *param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  _func_bool_ProgressCategory_int_void_ptr *p_Var7;
  TaskScheduler *pTVar8;
  long lVar9;
  undefined *puVar10;
  bool bVar11;
  char cVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  int extraout_EDX;
  int extraout_EDX_00;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  int iVar21;
  int iVar22;
  char *pcVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long in_FS_OFFSET;
  uint local_9c;
  code *local_98;
  long *local_90;
  long local_88 [4];
  undefined8 local_68;
  _func_bool_ProgressCategory_int_void_ptr *local_60;
  void *local_58;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Atlas *)0x0) {
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)("ComputeCharts: atlas is null.\n");
    }
    goto LAB_00106394;
  }
  AddMeshJoin(param_1);
  if ((*(int *)(param_1 + 0xb4) == 0) &&
     (param_4 = (char *)(ulong)*(uint *)(param_1 + 0xfc), *(uint *)(param_1 + 0xfc) == 0)) {
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)("ComputeCharts: No meshes. Call AddMesh or AddUvMesh first.\n");
    }
    goto LAB_00106394;
  }
  iVar15 = extraout_EDX;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    internal::Realloc(*(void **)(param_1 + 0x10),0,extraout_EDX,param_4,param_5);
    iVar15 = extraout_EDX_00;
  }
  if (*(void **)param_1 != (void *)0x0) {
    internal::Realloc(*(void **)param_1,0,iVar15,param_4,param_5);
  }
  if (*(long *)(param_1 + 8) != 0) {
    DestroyOutputMeshes((Context *)param_1);
  }
  puVar10 = internal::s_print;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  if ((puVar10 != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
    (*(code *)puVar10)();
  }
  pvVar6 = *(void **)(param_1 + 0x98);
  p_Var7 = *(_func_bool_ProgressCategory_int_void_ptr **)(param_1 + 0x90);
  pTVar8 = *(TaskScheduler **)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xb4) == 0) {
    uVar3 = *(uint *)(param_1 + 0xe4);
    plVar20 = *(long **)(param_1 + 0xd8);
    if (uVar3 == 0) {
      local_4c = 0;
    }
    else {
      local_4c = 0;
      plVar13 = plVar20;
      do {
        lVar29 = *plVar13;
        plVar13 = plVar13 + 1;
        local_4c = local_4c + *(uint *)(lVar29 + 0x74) / 3;
      } while (plVar20 + uVar3 != plVar13);
    }
    local_68 = 0x100000000;
    local_50 = 0;
    local_48 = 0;
    local_60 = p_Var7;
    local_58 = pvVar6;
    if ((p_Var7 != (_func_bool_ProgressCategory_int_void_ptr *)0x0) &&
       (bVar11 = (*p_Var7)(1,0,pvVar6), !bVar11)) {
      LOCK();
      local_68 = CONCAT71(local_68._1_7_,1);
      UNLOCK();
    }
    local_9c = internal::TaskScheduler::createTaskGroup(pTVar8,0);
    local_88[0] = 0;
    local_88[1] = 0x10;
    local_88[2] = 0;
    internal::ArrayBase::resize((uint)(ArrayBase *)local_88,SUB41(uVar3,0));
    if (uVar3 != 0) {
      uVar18 = 0;
      do {
        local_90 = (long *)(uVar18 * 0x10 + local_88[0]);
        *local_90 = plVar20[uVar18];
        local_90[1] = (long)&local_68;
        local_98 = internal::segment::runComputeUvMeshChartsTask;
        lVar29 = *(long *)pTVar8 + (ulong)local_9c * 0x38;
        do {
          LOCK();
          cVar12 = *(char *)(lVar29 + 0x24);
          *(char *)(lVar29 + 0x24) = '\x01';
          UNLOCK();
        } while (cVar12 != '\0');
        internal::ArrayBase::push_back((uchar *)(lVar29 + 8));
        *(undefined1 *)(lVar29 + 0x24) = 0;
        LOCK();
        *(int *)(lVar29 + 0x28) = *(int *)(lVar29 + 0x28) + 1;
        UNLOCK();
        lVar29 = 0;
        if (*(int *)(pTVar8 + 0x14) != 0) {
          do {
            LOCK();
            *(undefined1 *)(*(long *)(pTVar8 + 8) + 0x60 + lVar29 * 0x68) = 1;
            UNLOCK();
            lVar29 = lVar29 + 1;
            std::condition_variable::notify_one();
          } while ((uint)lVar29 < *(uint *)(pTVar8 + 0x14));
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar3);
    }
    internal::TaskScheduler::wait(*(TaskScheduler **)pTVar8,(TaskGroupHandle *)&local_9c);
    cVar12 = (char)local_68;
    internal::ArrayBase::~ArrayBase((ArrayBase *)local_88);
    if ((local_60 != (_func_bool_ProgressCategory_int_void_ptr *)0x0) &&
       (bVar11 = (*local_60)((char)((ulong)local_68 >> 0x20),100,local_58), !bVar11)) {
      LOCK();
      local_68 = CONCAT71(local_68._1_7_,1);
      UNLOCK();
    }
    puVar10 = internal::s_print;
    iVar15 = 0;
    if (cVar12 == '\0') {
      param_1[0x108] = (Atlas)0x1;
      if (*(uint *)(param_1 + 0xe4) == 0) {
        iVar15 = 0;
      }
      else {
        plVar13 = *(long **)(param_1 + 0xd8);
        plVar20 = plVar13 + *(uint *)(param_1 + 0xe4);
        do {
          lVar29 = *plVar13;
          plVar13 = plVar13 + 1;
          iVar15 = iVar15 + *(int *)(lVar29 + 0xa4);
        } while (plVar20 != plVar13);
      }
      if ((puVar10 != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
        (*(code *)puVar10)("   %u charts\n",iVar15);
      }
    }
    else if ((internal::s_print != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
      (*(code *)internal::s_print)("   Cancelled by user\n");
    }
    goto LAB_00106394;
  }
  cVar12 = internal::param::Atlas::computeCharts
                     ((Atlas *)(param_1 + 0x40),pTVar8,&stack0x00000008,p_Var7,pvVar6);
  if (cVar12 == '\0') {
    if ((internal::s_print != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
      (*(code *)internal::s_print)("   Cancelled by user\n");
    }
    goto LAB_00106394;
  }
  uVar3 = *(uint *)(param_1 + 0xb4);
  if (uVar3 == 0) {
    iVar27 = 0;
    iVar15 = 0;
    iVar26 = 0;
    iVar25 = 0;
    iVar28 = 0;
    iVar22 = 0;
LAB_00106488:
    if (((((internal::s_print != (undefined *)0x0) && (internal::s_printVerbose != '\0')) &&
         ((*(code *)internal::s_print)("   %u charts\n",iVar27),
         internal::s_print != (undefined *)0x0)) &&
        ((internal::s_printVerbose != '\0' &&
         ((*(code *)internal::s_print)
                    ("      %u planar, %u ortho, %u LSCM, %u piecewise\n",iVar28,iVar22,iVar25,
                     iVar26), iVar15 != 0)))) &&
       ((internal::s_print != (undefined *)0x0 && (internal::s_printVerbose != '\0')))) {
      (*(code *)internal::s_print)("      %u with original UVs\n",iVar15);
    }
    if (uVar3 == 0) goto LAB_00106394;
    plVar20 = *(long **)(param_1 + 0x70);
  }
  else {
    plVar20 = *(long **)(param_1 + 0x70);
    iVar27 = 0;
    iVar15 = 0;
    iVar26 = 0;
    iVar25 = 0;
    iVar28 = 0;
    iVar22 = 0;
    iVar19 = 0;
    iVar21 = 0;
    plVar13 = plVar20;
    do {
      if (*(uint *)((long)plVar13 + 0xc) != 0) {
        plVar16 = (long *)*plVar13;
        plVar1 = plVar16 + *(uint *)((long)plVar13 + 0xc);
        do {
          uVar4 = *(uint *)(*plVar16 + 0x44);
          if (uVar4 != 0) {
            plVar14 = *(long **)(*plVar16 + 0x38);
            plVar2 = plVar14 + uVar4;
            do {
              while( true ) {
                lVar29 = *plVar14;
                iVar19 = iVar19 + *(int *)(lVar29 + 0x38);
                iVar5 = *(int *)(lVar29 + 0x30);
                iVar21 = (iVar21 + 1) - (uint)(*(int *)(lVar29 + 0x38) == 0);
                if (iVar5 != 0) break;
                iVar28 = iVar28 + 1;
LAB_001060e3:
                iVar15 = iVar15 + (uint)(*(int *)(lVar29 + 0x34) == 0);
                plVar14 = plVar14 + 1;
                if (plVar2 == plVar14) goto LAB_00106139;
              }
              if (iVar5 == 1) {
                iVar22 = iVar22 + 1;
                goto LAB_001060e3;
              }
              if (iVar5 == 2) {
                iVar25 = iVar25 + 1;
                goto LAB_001060e3;
              }
              iVar26 = iVar26 + (uint)(iVar5 == 3);
              iVar15 = iVar15 + (uint)(*(int *)(lVar29 + 0x34) == 0);
              plVar14 = plVar14 + 1;
            } while (plVar2 != plVar14);
LAB_00106139:
            iVar27 = iVar27 + uVar4;
          }
          plVar16 = plVar16 + 1;
        } while (plVar1 != plVar16);
      }
      plVar13 = plVar13 + 3;
    } while (plVar20 + (ulong)uVar3 * 3 != plVar13);
    if (iVar19 == 0) goto LAB_00106488;
    if ((internal::s_print != (undefined *)0x0) && (internal::s_printVerbose != '\0')) {
      (*(code *)internal::s_print)("   %u t-junctions found in %u charts\n",iVar19,iVar21);
      goto LAB_00106488;
    }
  }
  uVar18 = 0;
  iVar28 = 0;
  iVar15 = 0;
  do {
    uVar24 = 0;
    plVar13 = plVar20 + uVar18 * 3;
    if (*(int *)((long)plVar13 + 0xc) != 0) {
      do {
        lVar29 = *(long *)(*plVar13 + uVar24 * 8);
        if (*(int *)(lVar29 + 0x44) != 0) {
          uVar17 = 0;
          do {
            pcVar23 = "planar";
            lVar9 = *(long *)(*(long *)(lVar29 + 0x38) + uVar17 * 8);
            iVar22 = *(int *)(lVar9 + 0x30);
            if (((iVar22 != 0) && (pcVar23 = "ortho", iVar22 != 1)) &&
               (pcVar23 = "piecewise", iVar22 != 3)) {
              pcVar23 = "LSCM";
            }
            if (*(char *)(lVar9 + 0xe0) != '\0') {
              if (*(char *)(lVar9 + 0xb8) == '\0') {
LAB_00106285:
                if (*(int *)(lVar9 + 0xc0) != 0) {
                  if (internal::s_print == (undefined *)0x0) goto LAB_0010630c;
                  (*(code *)internal::s_print)
                            ("   Chart %u  (mesh %u, group %u, id %u) (%s): invalid parameterization, %u / %u flipped triangles.\n"
                             ,iVar15,uVar18 & 0xffffffff,uVar24 & 0xffffffff,uVar17 & 0xffffffff,
                             pcVar23,*(int *)(lVar9 + 0xc0),*(undefined4 *)(lVar9 + 0xbc));
                }
LAB_001062cd:
                if ((*(int *)(lVar9 + 0xc4) != 0) && (internal::s_print != (undefined *)0x0)) {
                  (*(code *)internal::s_print)
                            ("   Chart %u  (mesh %u, group %u, id %u) (%s): invalid parameterization, %u / %u zero area triangles.\n"
                             ,iVar15,uVar18 & 0xffffffff,uVar24 & 0xffffffff,uVar17 & 0xffffffff,
                             pcVar23,*(int *)(lVar9 + 0xc4),*(undefined4 *)(lVar9 + 0xbc));
                }
              }
              else {
                if (internal::s_print != (undefined *)0x0) {
                  (*(code *)internal::s_print)
                            ("   Chart %u (mesh %u, group %u, id %u) (%s): invalid parameterization, self-intersecting boundary.\n"
                             ,iVar15,uVar18 & 0xffffffff,uVar24 & 0xffffffff,uVar17 & 0xffffffff,
                             pcVar23);
                  goto LAB_00106285;
                }
                if (*(int *)(lVar9 + 0xc0) == 0) goto LAB_001062cd;
              }
LAB_0010630c:
              iVar28 = iVar28 + 1;
            }
            iVar15 = iVar15 + 1;
            uVar17 = uVar17 + 1;
          } while ((uint)uVar17 < *(uint *)(lVar29 + 0x44));
          plVar20 = *(long **)(param_1 + 0x70);
        }
        uVar24 = uVar24 + 1;
        plVar13 = plVar20 + uVar18 * 3;
      } while ((uint)uVar24 < *(uint *)((long)plVar13 + 0xc));
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 != uVar3);
  if ((iVar28 != 0) && (internal::s_print != (undefined *)0x0)) {
    (*(code *)internal::s_print)("   %u charts with invalid parameterizations\n",iVar28);
  }
LAB_00106394:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* xatlas::Generate(xatlas::Atlas*, xatlas::ChartOptions, xatlas::PackOptions) */

void xatlas::Generate(long param_1)

{
  if (param_1 == 0) {
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)("Generate: atlas is null.\n");
      return;
    }
    return;
  }
  if ((*(int *)(param_1 + 0xb4) == 0) && (*(int *)(param_1 + 0xfc) == 0)) {
    if (internal::s_print != (undefined *)0x0) {
      (*(code *)internal::s_print)("Generate: No meshes. Call AddMesh or AddUvMesh first.\n");
      return;
    }
    return;
  }
  ComputeCharts(param_1);
  PackCharts(param_1);
  return;
}



/* std::thread::_M_thread_deps_never_run() */

void std::thread::_M_thread_deps_never_run(void)

{
  return;
}



/* xatlas::internal::opennl::nlCoeffCompare(void const*, void const*) */

bool xatlas::internal::opennl::nlCoeffCompare(void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return *param_2 < *param_1;
}



/* xatlas::internal::opennl::nlCRSMatrixMult(xatlas::internal::opennl::NLCRSMatrix*, double const*,
   double*) */

void xatlas::internal::opennl::nlCRSMatrixMult(NLCRSMatrix *param_1,double *param_2,double *param_3)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  bool bVar13;
  double dVar14;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 < 1) {
    return;
  }
  puVar1 = *(uint **)(param_1 + 0x40) + 1;
  puVar10 = *(uint **)(param_1 + 0x40);
  puVar12 = puVar1;
  do {
    uVar4 = *puVar10;
    if (uVar4 < puVar10[1]) {
      lVar7 = *(long *)(param_1 + 0x28);
      lVar11 = 0;
      lVar2 = (ulong)((puVar10[1] - 1) - uVar4) * 4 + 4;
      uVar8 = (ulong)uVar4;
      do {
        while( true ) {
          uVar5 = *(uint *)(lVar7 + uVar8 * 4 + lVar11);
          uVar6 = *(uint *)(lVar7 + (ulong)(uVar4 + 1) * 4 + lVar11);
          if (uVar6 <= uVar5) break;
          dVar14 = 0.0;
          uVar9 = 0;
          do {
            dVar14 = dVar14 + param_2[*(uint *)(*(long *)(param_1 + 0x30) + (ulong)uVar5 * 4 +
                                               uVar9 * 4)] *
                              *(double *)(*(long *)(param_1 + 0x20) + (ulong)uVar5 * 8 + uVar9 * 8);
            bVar13 = (uVar6 - 1) - uVar5 != uVar9;
            uVar9 = uVar9 + 1;
          } while (bVar13);
          *(double *)((long)param_3 + lVar11 * 2 + uVar8 * 8) = dVar14;
          lVar11 = lVar11 + 4;
          if (lVar2 == lVar11) goto LAB_001066fe;
        }
        *(undefined8 *)((long)param_3 + lVar11 * 2 + uVar8 * 8) = 0;
        lVar11 = lVar11 + 4;
      } while (lVar2 != lVar11);
    }
LAB_001066fe:
    if (puVar1 + (iVar3 - 1) == puVar12) {
      return;
    }
    puVar10 = puVar12;
    puVar12 = puVar12 + 1;
  } while( true );
}



/* xatlas::internal::opennl::nlSparseMatrixMult(xatlas::internal::opennl::NLSparseMatrix*, double
   const*, double*) */

void xatlas::internal::opennl::nlSparseMatrixMult
               (NLSparseMatrix *param_1,double *param_2,double *param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  double dVar10;
  
  iVar3 = *(int *)param_1;
  if (0 < iVar3) {
    piVar1 = *(int **)(param_1 + 0x28) + 4;
    piVar6 = *(int **)(param_1 + 0x28);
    piVar9 = piVar1;
    while( true ) {
      iVar4 = *piVar6;
      *param_3 = 0.0;
      if (0 < iVar4) {
        dVar10 = 0.0;
        puVar2 = *(uint **)(piVar6 + 2) + 4;
        puVar5 = puVar2;
        puVar8 = *(uint **)(piVar6 + 2);
        while( true ) {
          puVar7 = puVar5;
          dVar10 = dVar10 + param_2[*puVar8] * *(double *)(puVar8 + 2);
          *param_3 = dVar10;
          if (puVar2 + (ulong)(iVar4 - 1) * 4 == puVar7) break;
          puVar5 = puVar7 + 4;
          puVar8 = puVar7;
        }
      }
      param_3 = param_3 + 1;
      if (piVar9 == piVar1 + (ulong)(iVar3 - 1) * 4) break;
      piVar6 = piVar9;
      piVar9 = piVar9 + 4;
    }
  }
  return;
}



/* xatlas::internal::opennl::nlJacobiPreconditionerMult(xatlas::internal::opennl::NLJacobiPreconditioner*,
   double const*, double*) */

void xatlas::internal::opennl::nlJacobiPreconditionerMult
               (NLJacobiPreconditioner *param_1,double *param_2,double *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      *(double *)((long)param_3 + lVar3) =
           *(double *)((long)param_2 + lVar3) * *(double *)(lVar2 + lVar3);
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 << 3 != lVar3);
  }
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void
   (*)(xatlas::internal::TaskScheduler*, xatlas::internal::TaskScheduler::Worker*, unsigned int),
   xatlas::internal::TaskScheduler*, xatlas::internal::TaskScheduler::Worker*, unsigned int> >
   >::_M_run() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<void(*)(xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int),xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int>>>
::_M_run(_State_impl<std::thread::_Invoker<std::tuple<void(*)(xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int),xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int>>>
         *this)

{
                    /* WARNING: Could not recover jumptable at 0x00106826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 0x20))
            (*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 8));
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void
   (*)(xatlas::internal::TaskScheduler*, xatlas::internal::TaskScheduler::Worker*, unsigned int),
   xatlas::internal::TaskScheduler*, xatlas::internal::TaskScheduler::Worker*, unsigned int> >
   >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<void(*)(xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int),xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<void(*)(xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int),xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_001204c0;
  std::thread::_State::~_State((_State *)this);
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void
   (*)(xatlas::internal::TaskScheduler*, xatlas::internal::TaskScheduler::Worker*, unsigned int),
   xatlas::internal::TaskScheduler*, xatlas::internal::TaskScheduler::Worker*, unsigned int> >
   >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<void(*)(xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int),xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<void(*)(xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int),xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_001204c0;
  std::thread::_State::~_State((_State *)this);
  operator_delete(this,0x28);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::TaskScheduler::workerThread(xatlas::internal::TaskScheduler*,
   xatlas::internal::TaskScheduler::Worker*, unsigned int) */

void xatlas::internal::TaskScheduler::workerThread
               (TaskScheduler *param_1,Worker *param_2,uint param_3)

{
  pthread_mutex_t *__mutex;
  char *pcVar1;
  char cVar2;
  TaskScheduler TVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *in_FS_OFFSET;
  
  __mutex = (pthread_mutex_t *)(param_2 + 8);
  lVar5 = *(long *)(in_FS_OFFSET + 10);
  *in_FS_OFFSET = param_3;
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
    std::__throw_system_error(iVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_001068f3:
  while (param_2[0x60] == (Worker)0x0) {
    std::condition_variable::wait((unique_lock *)(param_2 + 0x30));
  }
  LOCK();
  param_2[0x60] = (Worker)0x0;
  UNLOCK();
  TVar3 = param_1[0x20];
joined_r0x00106905:
  if (TVar3 != (TaskScheduler)0x0) {
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(__mutex);
    }
    if (lVar5 != *(long *)(in_FS_OFFSET + 10)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar7 = 0;
    do {
      pcVar1 = (char *)(*(long *)param_1 + lVar7 * 0x38);
      if ((*pcVar1 == '\0') && (*(int *)(pcVar1 + 0x28) != 0)) {
        do {
          LOCK();
          cVar2 = pcVar1[0x24];
          pcVar1[0x24] = '\x01';
          UNLOCK();
        } while (cVar2 != '\0');
        uVar4 = *(uint *)(pcVar1 + 0x20);
        if (uVar4 < *(uint *)(pcVar1 + 0x14)) goto LAB_00106977;
        pcVar1[0x24] = '\0';
      }
      lVar7 = lVar7 + 1;
      if (*(uint *)(param_1 + 0x24) <= (uint)lVar7) break;
    } while( true );
  }
  goto LAB_001068f3;
LAB_00106977:
  *(uint *)(pcVar1 + 0x20) = uVar4 + 1;
  puVar8 = (undefined8 *)((ulong)uVar4 * 0x10 + *(long *)(pcVar1 + 8));
  pcVar1[0x24] = '\0';
  if (puVar8 == (undefined8 *)0x0) goto LAB_001068f3;
  (*(code *)*puVar8)(*(undefined8 *)(pcVar1 + 0x30),puVar8[1]);
  LOCK();
  *(int *)(pcVar1 + 0x28) = *(int *)(pcVar1 + 0x28) + -1;
  UNLOCK();
  TVar3 = param_1[0x20];
  goto joined_r0x00106905;
}



/* xatlas::internal::pack::Atlas::drawTriangleCallback(void*, int, int) */

undefined8
xatlas::internal::pack::Atlas::drawTriangleCallback(void *param_1,int param_2,int param_3)

{
  ulong *puVar1;
  long lVar2;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = (ulong *)(*(long *)(*param_1 + 0x10) +
                    (ulong)(*(int *)(*param_1 + 8) * param_3 + ((uint)param_2 >> 6)) * 8);
  *puVar1 = *puVar1 | 1L << ((byte)param_2 & 0x3f);
  lVar2 = *(long *)((long)param_1 + 8);
  if (lVar2 != 0) {
    puVar1 = (ulong *)(*(long *)(lVar2 + 0x10) +
                      (ulong)(((uint)param_3 >> 6) + param_2 * *(int *)(lVar2 + 8)) * 8);
    *puVar1 = *puVar1 | 1L << ((byte)param_3 & 0x3f);
  }
  return 1;
}



/* xatlas::internal::opennl::nlRowColumnGrow(xatlas::internal::opennl::NLRowColumn*) */

void xatlas::internal::opennl::nlRowColumnGrow(NLRowColumn *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  void *__s;
  char *in_RCX;
  int in_EDX;
  int in_R8D;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(int *)(param_1 + 4) * 2;
    *(uint *)(param_1 + 4) = uVar1;
    uVar2 = Realloc(*(void **)(param_1 + 8),(ulong)uVar1 << 4,in_EDX,in_RCX,in_R8D);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 4;
  __s = (void *)(*(code *)s_realloc)(0);
  *(void **)(param_1 + 8) = __s;
  memset(__s,0,(ulong)*(uint *)(param_1 + 4) << 4);
  return;
}



/* xatlas::internal::opennl::nlEnd(xatlas::internal::opennl::NLContext*, unsigned int) [clone
   .part.0] */

void xatlas::internal::opennl::nlEnd(NLContext *param_1,uint param_2)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  NLRowColumn *pNVar17;
  long lVar18;
  double dVar19;
  
  uVar3 = *(uint *)(param_1 + 0x50);
  uVar4 = *(uint *)(param_1 + 0x40);
  lVar16 = *(long *)(param_1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x68);
  iVar5 = *(int *)(param_1 + 0x20);
  if (uVar4 != 0) {
    lVar14 = 0;
    do {
      lVar18 = 0;
      do {
        puVar13 = (uint *)(*(long *)(param_1 + 0x48) + lVar14);
        puVar10 = (uint *)(*(long *)(param_1 + 0x48) + lVar18);
        uVar6 = *puVar10;
        uVar7 = *puVar13;
        dVar19 = *(double *)(puVar13 + 2) * *(double *)(puVar10 + 2);
        if (uVar6 == uVar7) {
          pdVar1 = (double *)(*(long *)(lVar16 + 0x38) + (ulong)uVar7 * 8);
          *pdVar1 = *pdVar1 + dVar19;
        }
        pNVar17 = (NLRowColumn *)((ulong)uVar7 * 0x10 + *(long *)(lVar16 + 0x28));
        uVar7 = *(uint *)pNVar17;
        if (uVar7 != 0) {
          puVar13 = *(uint **)(pNVar17 + 8);
          puVar10 = puVar13 + (ulong)uVar7 * 4;
          do {
            if (uVar6 == *puVar13) {
              *(double *)(puVar13 + 2) = dVar19 + *(double *)(puVar13 + 2);
              goto LAB_00106b7c;
            }
            puVar13 = puVar13 + 4;
          } while (puVar10 != puVar13);
        }
        if (*(uint *)(pNVar17 + 4) == uVar7) {
          nlRowColumnGrow(pNVar17);
          uVar7 = *(uint *)pNVar17;
        }
        puVar13 = (uint *)((ulong)uVar7 * 0x10 + *(long *)(pNVar17 + 8));
        *puVar13 = uVar6;
        *(double *)(puVar13 + 2) = dVar19;
        *(uint *)pNVar17 = uVar7 + 1;
LAB_00106b7c:
        lVar18 = lVar18 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar18);
      lVar14 = lVar14 + 0x10;
    } while ((ulong)uVar4 << 4 != lVar14);
  }
  uVar6 = *(uint *)(param_1 + 0x74);
  if (uVar6 != 0) {
    lVar16 = 0;
    iVar15 = 0;
    do {
      dVar19 = 0.0;
      if (uVar3 != 0) {
        dVar19 = 0.0;
        piVar11 = *(int **)(param_1 + 0x58);
        do {
          piVar12 = piVar11 + 4;
          dVar19 = dVar19 + *(double *)
                             (*(long *)(*(long *)param_1 + lVar16) +
                             (ulong)(uint)((int)((long *)(*(long *)param_1 + lVar16))[1] * *piVar11)
                             ) * *(double *)(piVar11 + 2);
          piVar11 = piVar12;
        } while (*(int **)(param_1 + 0x58) + (ulong)uVar3 * 4 != piVar12);
      }
      if (uVar4 != 0) {
        piVar12 = *(int **)(param_1 + 0x48);
        piVar11 = piVar12 + (ulong)uVar4 * 4;
        do {
          pdVar1 = (double *)(piVar12 + 2);
          iVar8 = *piVar12;
          piVar12 = piVar12 + 4;
          pdVar2 = (double *)(lVar9 + (ulong)(uint)(iVar15 + iVar8) * 8);
          *pdVar2 = *pdVar2 - *pdVar1 * dVar19;
        } while (piVar12 != piVar11);
      }
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + iVar5;
    } while ((ulong)uVar6 << 4 != lVar16);
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return;
}



/* xatlas::internal::opennl::nlCoefficient(xatlas::internal::opennl::NLContext*, unsigned int,
   double) */

void xatlas::internal::opennl::nlCoefficient(NLContext *param_1,uint param_2,double param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*(char *)(*(long *)(param_1 + 0x10) + (ulong)param_2) != '\0') {
    uVar4 = *(uint *)(param_1 + 0x50);
    if (uVar4 == *(uint *)(param_1 + 0x54)) {
      nlRowColumnGrow((NLRowColumn *)(param_1 + 0x50));
      uVar4 = *(uint *)(param_1 + 0x50);
    }
    puVar2 = (uint *)((ulong)uVar4 * 0x10 + *(long *)(param_1 + 0x58));
    *puVar2 = param_2;
    *(double *)(puVar2 + 2) = param_3;
    *(uint *)(param_1 + 0x50) = uVar4 + 1;
    return;
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 4);
  uVar4 = *(uint *)(param_1 + 0x40);
  if (uVar4 == *(uint *)(param_1 + 0x44)) {
    nlRowColumnGrow((NLRowColumn *)(param_1 + 0x40));
    uVar4 = *(uint *)(param_1 + 0x40);
  }
  puVar3 = (undefined4 *)((ulong)uVar4 * 0x10 + *(long *)(param_1 + 0x48));
  *puVar3 = uVar1;
  *(double *)(puVar3 + 2) = param_3;
  *(uint *)(param_1 + 0x40) = uVar4 + 1;
  return;
}



/* xatlas::internal::opennl::nlDeleteContext(xatlas::internal::opennl::NLContext*) */

void xatlas::internal::opennl::nlDeleteContext(NLContext *param_1)

{
  void *pvVar1;
  char *in_RCX;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int in_R8D;
  
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    (**(code **)((long)pvVar1 + 0x10))(pvVar1);
    Realloc(pvVar1,0,extraout_EDX,in_RCX,in_R8D);
    in_EDX = extraout_EDX_00;
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    (**(code **)((long)pvVar1 + 0x10))(pvVar1);
    Realloc(pvVar1,0,extraout_EDX_01,in_RCX,in_R8D);
    in_EDX = extraout_EDX_02;
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pvVar1 != (void *)0x0) {
    (**(code **)((long)pvVar1 + 0x10))(pvVar1);
    Realloc(pvVar1,0,extraout_EDX_03,in_RCX,in_R8D);
    in_EDX = extraout_EDX_04;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  Realloc(*(void **)(param_1 + 0x48),0,in_EDX,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  Realloc(*(void **)(param_1 + 0x58),0,extraout_EDX_05,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  Realloc(*(void **)(param_1 + 8),0,extraout_EDX_06,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 8) = 0;
  Realloc(*(void **)param_1,0,extraout_EDX_07,in_RCX,in_R8D);
  *(undefined8 *)param_1 = 0;
  Realloc(*(void **)(param_1 + 0x10),0,extraout_EDX_08,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x10) = 0;
  Realloc(*(void **)(param_1 + 0x18),0,extraout_EDX_09,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x18) = 0;
  Realloc(*(void **)(param_1 + 0x60),0,extraout_EDX_10,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x60) = 0;
  Realloc(*(void **)(param_1 + 0x68),0,extraout_EDX_11,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x68) = 0;
  Realloc(param_1,0,extraout_EDX_12,in_RCX,in_R8D);
  return;
}



/* xatlas::internal::param::vec_angle_cos(xatlas::internal::Vector3 const&,
   xatlas::internal::Vector3 const&, xatlas::internal::Vector3 const&) [clone .isra.0] */

ulong xatlas::internal::param::vec_angle_cos(Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  float in_XMM0_Da;
  float fVar1;
  undefined4 in_XMM0_Db;
  float in_XMM1_Da;
  float fVar2;
  float in_XMM2_Da;
  float fVar3;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float in_XMM6_Da;
  float fVar4;
  float in_XMM7_Da;
  float fVar5;
  float fVar6;
  float in_stack_00000008;
  
  fVar2 = in_XMM1_Da - in_XMM4_Da;
  fVar1 = in_XMM0_Da - in_XMM3_Da;
  fVar4 = in_XMM6_Da - in_XMM3_Da;
  fVar5 = in_XMM7_Da - in_XMM4_Da;
  fVar3 = in_XMM2_Da - in_XMM5_Da;
  fVar6 = in_stack_00000008 - in_XMM5_Da;
  fVar1 = (fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6) /
          (SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6) *
          SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3));
  if (_LC5 < fVar1) {
    if (_LC4 <= fVar1) {
      fVar1 = _LC4;
    }
    return CONCAT44(in_XMM0_Db,fVar1);
  }
  return (ulong)(uint)_LC5;
}



/* xatlas::internal::opennl::nlSparseMatrixDestroy(xatlas::internal::opennl::NLSparseMatrix*) */

void xatlas::internal::opennl::nlSparseMatrixDestroy(NLSparseMatrix *param_1)

{
  void *pvVar1;
  char *in_RCX;
  uint uVar2;
  int extraout_EDX;
  ulong uVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 *puVar4;
  long lVar5;
  int in_R8D;
  
  uVar2 = *(uint *)param_1;
  uVar3 = (ulong)uVar2;
  pvVar1 = *(void **)(param_1 + 0x28);
  if (uVar2 != 0) {
    lVar5 = 0;
    do {
      puVar4 = (undefined8 *)(lVar5 * 0x10 + (long)pvVar1);
      if (puVar4[1] != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          pvVar1 = *(void **)(param_1 + 0x28);
          uVar3 = extraout_RDX;
        }
        else {
          (*(code *)s_free)();
          pvVar1 = *(void **)(param_1 + 0x28);
          uVar3 = extraout_RDX_00;
        }
      }
      uVar2 = (uint)uVar3;
      puVar4[1] = 0;
      lVar5 = lVar5 + 1;
      *puVar4 = 0;
    } while ((uint)lVar5 < *(uint *)param_1);
  }
  Realloc(pvVar1,0,uVar2,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x28) = 0;
  Realloc(*(void **)(param_1 + 0x38),0,extraout_EDX,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* xatlas::internal::opennl::nlJacobiPreconditionerDestroy(xatlas::internal::opennl::NLJacobiPreconditioner*)
    */

void xatlas::internal::opennl::nlJacobiPreconditionerDestroy(NLJacobiPreconditioner *param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    if (s_free != (undefined *)0x0) {
      (*(code *)s_free)();
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
    (*(code *)s_realloc)(*(long *)(param_1 + 0x20),0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* xatlas::internal::opennl::nlCRSMatrixDestroy(xatlas::internal::opennl::NLCRSMatrix*) */

void xatlas::internal::opennl::nlCRSMatrixDestroy(NLCRSMatrix *param_1)

{
  char *in_RCX;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar1;
  int extraout_EDX_02;
  int in_R8D;
  
  Realloc(*(void **)(param_1 + 0x20),0,in_EDX,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x20) = 0;
  Realloc(*(void **)(param_1 + 0x28),0,extraout_EDX,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = extraout_EDX_00;
  if (*(long *)(param_1 + 0x30) != 0) {
    if (s_free == (undefined *)0x0) {
      (*(code *)s_realloc)();
      iVar1 = extraout_EDX_01;
    }
    else {
      (*(code *)s_free)();
      iVar1 = extraout_EDX_02;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  Realloc(*(void **)(param_1 + 0x40),0,iVar1,in_RCX,in_R8D);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* xatlas::internal::ArrayBase::~ArrayBase() */

void __thiscall xatlas::internal::ArrayBase::~ArrayBase(ArrayBase *this)

{
  if (*(long *)this == 0) {
    return;
  }
  if (s_free == (undefined *)0x0) {
    (*(code *)s_realloc)(*(long *)this,0);
    return;
  }
  (*(code *)s_free)();
  return;
}



/* xatlas::internal::ArrayBase::copyTo(xatlas::internal::ArrayBase&) const */

void xatlas::internal::ArrayBase::copyTo(ArrayBase *param_1)

{
  uint uVar1;
  void *__dest;
  char *in_RCX;
  int in_EDX;
  undefined8 *in_RSI;
  int in_R8D;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  __dest = (void *)*in_RSI;
  *(uint *)((long)in_RSI + 0xc) = uVar1;
  if (*(uint *)(in_RSI + 2) < uVar1) {
    __dest = (void *)Realloc(__dest,(ulong)(uVar1 * *(int *)(in_RSI + 1)),in_EDX,in_RCX,in_R8D);
    *(uint *)(in_RSI + 2) = uVar1;
    *in_RSI = __dest;
  }
  if (((__dest != (void *)0x0) && (*(void **)param_1 != (void *)0x0)) &&
     (*(int *)(param_1 + 0xc) != 0)) {
    memcpy(__dest,*(void **)param_1,(ulong)(uint)(*(int *)(param_1 + 0xc) * *(int *)(param_1 + 8)));
    return;
  }
  return;
}



/* xatlas::internal::ArrayBase::push_back(unsigned char const*) */

void xatlas::internal::ArrayBase::push_back(uchar *param_1)

{
  void *pvVar1;
  char *in_RCX;
  int in_EDX;
  uint uVar2;
  void *in_RSI;
  int in_R8D;
  
  uVar2 = *(int *)(param_1 + 0xc) + 1;
  *(uint *)(param_1 + 0xc) = uVar2;
  pvVar1 = *(void **)param_1;
  if (*(uint *)(param_1 + 0x10) < uVar2) {
    if ((*(uint *)(param_1 + 0x10) != 0) && (uVar2 = uVar2 + (uVar2 >> 2), uVar2 == 0)) {
      if (pvVar1 != (void *)0x0) {
        Realloc(pvVar1,0,in_EDX,in_RCX,in_R8D);
        param_1[0] = '\0';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
      }
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      return;
    }
    pvVar1 = (void *)Realloc(pvVar1,(ulong)(uVar2 * *(int *)(param_1 + 8)),in_EDX,in_RCX,in_R8D);
    *(uint *)(param_1 + 0x10) = uVar2;
    *(void **)param_1 = pvVar1;
  }
  if (in_RSI == (void *)0x0 || pvVar1 == (void *)0x0) {
    return;
  }
  memcpy((void *)((long)pvVar1 + (ulong)((*(int *)(param_1 + 0xc) + -1) * *(uint *)(param_1 + 8))),
         in_RSI,(ulong)*(uint *)(param_1 + 8));
  return;
}



/* xatlas::internal::ArrayBase::removeAt(unsigned int) */

void __thiscall xatlas::internal::ArrayBase::removeAt(ArrayBase *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(this + 0xc);
    if (1 < uVar1) {
      iVar2 = *(int *)(this + 8);
      uVar4 = (param_1 + 1) * iVar2;
      memmove((void *)(lVar3 + (ulong)(uVar4 - iVar2)),(void *)((ulong)uVar4 + lVar3),
              (ulong)(((uVar1 - param_1) + -1) * iVar2));
      uVar1 = *(uint *)(this + 0xc);
    }
    if (uVar1 != 0) {
      *(uint *)(this + 0xc) = uVar1 - 1;
    }
  }
  return;
}



/* xatlas::internal::ArrayBase::resize(unsigned int, bool) */

void xatlas::internal::ArrayBase::resize(uint param_1,bool param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  char *in_RCX;
  int in_EDX;
  uint uVar3;
  undefined7 in_register_00000031;
  undefined4 in_register_0000003c;
  undefined8 *puVar4;
  int in_R8D;
  
  puVar4 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  uVar3 = (uint)CONCAT71(in_register_00000031,param_2);
  *(uint *)((long)puVar4 + 0xc) = uVar3;
  if (*(uint *)(puVar4 + 2) < uVar3) {
    pvVar1 = (void *)*puVar4;
    if (((*(uint *)(puVar4 + 2) == 0) || ((char)in_EDX != '\0')) ||
       (uVar3 = uVar3 + ((uint)(CONCAT71(in_register_00000031,param_2) >> 2) & 0x3fffffff),
       uVar3 != 0)) {
      uVar2 = Realloc(pvVar1,(ulong)(uVar3 * *(int *)(puVar4 + 1)),in_EDX,in_RCX,in_R8D);
      *puVar4 = uVar2;
    }
    else if (pvVar1 != (void *)0x0) {
      Realloc(pvVar1,0,in_EDX,in_RCX,in_R8D);
      *puVar4 = 0;
    }
    *(uint *)(puVar4 + 2) = uVar3;
  }
  return;
}



/* xatlas::internal::ArrayBase::setArrayCapacity(unsigned int) */

void xatlas::internal::ArrayBase::setArrayCapacity(uint param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  char *in_RCX;
  int in_EDX;
  int in_ESI;
  undefined4 in_register_0000003c;
  undefined8 *puVar3;
  int in_R8D;
  
  puVar3 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  pvVar1 = (void *)*puVar3;
  if (in_ESI == 0) {
    if (pvVar1 != (void *)0x0) {
      Realloc(pvVar1,0,in_EDX,in_RCX,in_R8D);
      *puVar3 = 0;
    }
    *(undefined4 *)(puVar3 + 2) = 0;
    return;
  }
  uVar2 = Realloc(pvVar1,(ulong)(uint)(in_ESI * *(int *)(puVar3 + 1)),in_EDX,in_RCX,in_R8D);
  *(int *)(puVar3 + 2) = in_ESI;
  *puVar3 = uVar2;
  return;
}



/* xatlas::internal::pack::runAddChartTask(void*, void*) */

void xatlas::internal::pack::runAddChartTask(void *param_1,void *param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint *in_FS_OFFSET;
  byte bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  bVar20 = 0;
                    /* WARNING: Load size is inaccurate */
  lVar6 = *param_2;
  lVar7 = *(long *)(in_FS_OFFSET + 10);
  memcpy(*(void **)(*(long *)(lVar6 + 0x28) + 0x88),*(void **)(lVar6 + 0xa0),
         (ulong)*(uint *)(*(long *)(lVar6 + 0x28) + 100) << 3);
  lVar8 = *(long *)(lVar6 + 0x28);
  puVar11 = (undefined8 *)(*(code *)s_realloc)(0,0x88);
  puVar18 = puVar11;
  for (lVar13 = 0x11; uVar10 = _LC18, lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + (ulong)bVar20 * -2 + 1;
  }
  puVar11[7] = _LC18;
  puVar11[0xf] = uVar10;
  *(undefined8 **)((long)param_2 + 8) = puVar11;
  *puVar11 = 0xffffffff;
  uVar3 = *(uint *)(lVar8 + 0x4c);
  puVar9 = *(uint **)(lVar8 + 0x40);
  *(uint *)(puVar11 + 2) = uVar3;
  puVar11[1] = puVar9;
  fVar21 = _LC19;
  fVar22 = _LC11;
  if (uVar3 < 3) {
    *(undefined4 *)(puVar11 + 3) = 0;
    lVar13 = *(long *)(lVar8 + 0x88);
    fVar22 = _LC11;
LAB_00107f37:
    uVar12 = *(uint *)(*(long *)(lVar6 + 0x28) + 100);
    fVar21 = _LC10;
    fVar24 = _LC9;
    fVar23 = _LC10;
    fVar25 = _LC9;
    if (uVar12 != 0) {
      pfVar14 = *(float **)(*(long *)(lVar6 + 0x28) + 0x88);
      pfVar1 = pfVar14 + (ulong)uVar12 * 2;
      do {
        fVar26 = pfVar14[1];
        fVar27 = *pfVar14;
        pfVar14 = pfVar14 + 2;
        if (fVar26 <= fVar24) {
          fVar24 = fVar26;
        }
        if (fVar27 <= fVar25) {
          fVar25 = fVar27;
        }
        if (fVar21 <= fVar26) {
          fVar21 = fVar26;
        }
        if (fVar23 <= fVar27) {
          fVar23 = fVar27;
        }
      } while (pfVar1 != pfVar14);
    }
    fVar26 = 0.0;
    *(float *)(puVar11 + 3) = (fVar21 - fVar24) * fVar22 * (fVar23 - fVar25) * fVar22;
    if (uVar3 < 3) goto LAB_00107e31;
  }
  else {
    uVar12 = 1;
    fVar24 = 0.0;
    uVar16 = 0;
    lVar13 = *(long *)(lVar8 + 0x88);
    puVar17 = puVar9;
    do {
      uVar4 = *puVar17;
      uVar19 = uVar12 + 1;
      uVar16 = uVar16 + 1;
      puVar17 = puVar17 + 3;
      pfVar1 = (float *)(lVar13 + (ulong)uVar4 * 8);
      uVar15 = (ulong)uVar12;
      uVar12 = uVar12 + 3;
      pfVar14 = (float *)(lVar13 + (ulong)puVar9[uVar19] * 8);
      fVar23 = pfVar14[1];
      fVar25 = *pfVar14;
      pfVar14 = (float *)(lVar13 + (ulong)puVar9[uVar15] * 8);
      fVar24 = fVar24 + (float)((uint)(((*pfVar1 - fVar25) * (pfVar14[1] - fVar23) -
                                       (pfVar1[1] - fVar23) * (*pfVar14 - fVar25)) * _LC11) & _LC37)
      ;
    } while (uVar16 < uVar3 / 3);
    *(float *)(puVar11 + 3) = fVar24;
    if (fVar24 < fVar21) goto LAB_00107f37;
  }
  lVar6 = *(long *)(lVar8 + 0x58);
  uVar12 = 1;
  uVar16 = 0;
  fVar26 = 0.0;
  puVar17 = puVar9;
  do {
    uVar4 = *puVar17;
    uVar19 = uVar12 + 1;
    uVar16 = uVar16 + 1;
    puVar17 = puVar17 + 3;
    pfVar1 = (float *)(lVar6 + (ulong)uVar4 * 0xc);
    uVar15 = (ulong)uVar12;
    uVar12 = uVar12 + 3;
    pfVar14 = (float *)(lVar6 + (ulong)puVar9[uVar19] * 0xc);
    pfVar2 = (float *)(lVar6 + (ulong)puVar9[uVar15] * 0xc);
    fVar21 = pfVar14[2] - pfVar1[2];
    fVar25 = pfVar14[1] - pfVar1[1];
    fVar24 = *pfVar14 - *pfVar1;
    fVar28 = pfVar2[2] - pfVar1[2];
    fVar29 = pfVar2[1] - pfVar1[1];
    fVar27 = *pfVar2 - *pfVar1;
    fVar23 = fVar25 * fVar27 - fVar24 * fVar29;
    fVar24 = fVar24 * fVar28 - fVar27 * fVar21;
    fVar21 = fVar21 * fVar29 - fVar25 * fVar28;
    fVar26 = fVar26 + SQRT(fVar21 * fVar21 + fVar24 * fVar24 + fVar23 * fVar23) * fVar22;
  } while (uVar16 < uVar3 / 3);
LAB_00107e31:
  iVar5 = *(int *)(lVar8 + 0x94);
  puVar11[4] = lVar13;
  puVar11[0xd] = lVar8 + 0xf0;
  *(int *)(puVar11 + 5) = iVar5;
  *(float *)((long)puVar11 + 0x1c) = fVar26;
                    /* WARNING: Load size is inaccurate */
  puVar18 = (undefined8 *)((ulong)*in_FS_OFFSET * 0xe0 + *param_1);
  *(undefined4 *)((long)puVar18 + 0x2c) = 0;
  if (iVar5 != 0) {
    uVar15 = 0;
    do {
      while ((1 << ((byte)uVar15 & 0x1f) &
             *(uint *)(*(long *)(lVar8 + 0xd8) + (uVar15 >> 5 & 0x7ffffff) * 4)) == 0) {
        uVar15 = uVar15 + 1;
        if (*(uint *)(puVar11 + 5) <= (uint)uVar15) goto LAB_00107ecf;
      }
      uVar15 = uVar15 + 1;
      ArrayBase::push_back((uchar *)(puVar18 + 4));
      lVar13 = *(long *)(lVar8 + 0x88);
    } while ((uint)uVar15 < *(uint *)(puVar11 + 5));
  }
LAB_00107ecf:
  BoundingBox2D::compute(puVar18,lVar13,*(undefined4 *)(lVar8 + 0x94));
  puVar11[9] = *puVar18;
  puVar11[10] = puVar18[1];
  puVar11[0xb] = puVar18[2];
  puVar11[0xc] = puVar18[3];
  if (lVar7 != *(long *)(in_FS_OFFSET + 10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* xatlas::internal::Basis::computeTangent(xatlas::internal::Vector3 const&) */

void xatlas::internal::Basis::computeTangent(Vector3 *param_1)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = SQRT(*(float *)param_1 * *(float *)param_1 +
               *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
               *(float *)(param_1 + 8) * *(float *)(param_1 + 8));
  fVar3 = (float)((uint)fVar2 & _LC37);
  fVar4 = _LC7;
  if (_LC4 < fVar3) {
    fVar4 = fVar3 * _LC7;
  }
  if ((fVar4 < (float)((uint)(fVar2 - _LC4) & _LC37)) && (s_print != (undefined *)0x0)) {
    pcVar1 = "\rASSERT: %s %s %d\n";
    (*(code *)s_print)("\rASSERT: %s %s %d\n","isNormalized(normal)","thirdparty/xatlas/xatlas.cpp",
                       0x4ef);
    param_1 = (Vector3 *)pcVar1;
  }
  normalize(param_1);
  return;
}



/* xatlas::internal::BitImage::resize(unsigned int, unsigned int, bool) */

void xatlas::internal::BitImage::resize(uint param_1,uint param_2,bool param_3)

{
  void *__dest;
  uint uVar1;
  char *in_RCX;
  uint uVar2;
  uint uVar3;
  uint extraout_EDX;
  uint uVar4;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  undefined7 in_register_00000011;
  uint uVar5;
  undefined4 in_register_0000003c;
  uint *puVar6;
  int in_R8D;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  long in_FS_OFFSET;
  ulong local_68;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  puVar6 = (uint *)CONCAT44(in_register_0000003c,param_1);
  uVar2 = (uint)CONCAT71(in_register_00000011,param_3);
  uVar5 = param_2 + 0x3f >> 6;
  iVar8 = uVar5 * uVar2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)in_RCX == '\0') {
    local_58 = (void *)0x0;
    local_48 = 0;
    local_50 = CONCAT44(iVar8,8);
    if (iVar8 == 0) {
      local_68 = 8;
      uVar9 = 0;
    }
    else {
      ArrayBase::setArrayCapacity((uint)&local_58);
      local_68 = local_50;
      uVar9 = (uint)local_48;
    }
    __dest = local_58;
    memset(local_58,0,(local_68 >> 0x20) << 3);
    uVar1 = puVar6[2];
    if (uVar5 == uVar1) {
      uVar1 = puVar6[1];
      if (uVar2 <= puVar6[1]) {
        uVar1 = uVar2;
      }
      memcpy(__dest,*(void **)(puVar6 + 4),(ulong)(uVar1 * uVar5) * 8);
      uVar4 = extraout_EDX_01;
    }
    else {
      uVar4 = *puVar6;
      if ((*puVar6 != 0) && (uVar4 = puVar6[1], uVar4 != 0)) {
        uVar3 = uVar4;
        if (uVar2 < uVar4) {
          uVar3 = uVar2;
        }
        uVar4 = uVar3;
        if (uVar3 != 0) {
          uVar7 = 0;
          in_RCX = (char *)0x0;
          while( true ) {
            uVar4 = uVar1;
            if (uVar5 <= uVar1) {
              uVar4 = uVar5;
            }
            memcpy((void *)((long)__dest + uVar7 * 8),
                   (void *)(*(long *)(puVar6 + 4) + (ulong)(uVar1 * (int)in_RCX) * 8),
                   (ulong)uVar4 << 3);
            uVar1 = (int)in_RCX + 1;
            in_RCX = (char *)(ulong)uVar1;
            uVar7 = (ulong)((int)uVar7 + uVar5);
            uVar4 = extraout_EDX;
            if (uVar1 == uVar3) break;
            uVar1 = puVar6[2];
          }
        }
      }
    }
    puVar6[7] = 0;
    Realloc(*(void **)(puVar6 + 4),0,uVar4,in_RCX,in_R8D);
    *(void **)(puVar6 + 4) = __dest;
    puVar6[8] = uVar9;
    *(ulong *)(puVar6 + 6) = local_68;
    Realloc((void *)0x0,0,extraout_EDX_00,in_RCX,in_R8D);
  }
  else {
    ArrayBase::resize(param_1 + 0x10,SUB41(iVar8,0));
    if ((*(void **)(puVar6 + 4) != (void *)0x0) && (puVar6[7] != 0)) {
      memset(*(void **)(puVar6 + 4),0,(ulong)(puVar6[7] * puVar6[6]));
    }
  }
  *puVar6 = param_2;
  puVar6[1] = uVar2;
  puVar6[2] = uVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* xatlas::internal::BitImage::dilate(unsigned int) */

void xatlas::internal::BitImage::dilate(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  sbyte sVar7;
  byte bVar8;
  byte bVar9;
  char *in_RCX;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  uint uVar14;
  uint uVar15;
  uint in_ESI;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 in_register_0000003c;
  uint *puVar19;
  uint uVar20;
  ulong in_R8;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  byte *__s;
  long in_FS_OFFSET;
  undefined1 auVar26 [16];
  int local_ac;
  byte local_a0;
  uint local_90;
  uint local_70;
  byte *local_58;
  int local_50;
  uint uStack_4c;
  undefined8 local_48;
  long local_40;
  
  puVar19 = (uint *)CONCAT44(in_register_0000003c,param_1);
  __s = (byte *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (byte *)0x0;
  uVar4 = (int)*(undefined8 *)puVar19 + 0x3fU >> 6;
  uStack_4c = (int)((ulong)*(undefined8 *)puVar19 >> 0x20) * uVar4;
  local_48 = 0;
  local_50 = 8;
  iVar6 = local_50;
  local_50 = 8;
  if (((uStack_4c != 0) &&
      (ArrayBase::setArrayCapacity((uint)&local_58), __s = local_58, iVar6 = local_50,
      local_58 != (byte *)0x0)) && (uStack_4c != 0)) {
    memset(local_58,0,(ulong)(uStack_4c * local_50));
    iVar6 = local_50;
  }
  local_50 = iVar6;
  iVar6 = (int)in_R8;
  uVar13 = (ulong)in_ESI;
  local_70 = 0;
  uVar12 = in_ESI;
  if (in_ESI != 0) {
    uVar24 = uStack_4c;
    if (__s == (byte *)0x0) goto LAB_0010882e;
LAB_00108436:
    do {
      uVar12 = (uint)uVar13;
      iVar6 = (int)in_R8;
      if (uVar24 != 0) {
        memset(__s,0,(ulong)(uVar24 * local_50));
        local_90 = puVar19[1];
        pbVar21 = *(byte **)(puVar19 + 4);
        uVar13 = extraout_RDX_00;
        goto joined_r0x00108865;
      }
      local_90 = puVar19[1];
      if (local_90 != 0) {
        do {
          local_ac = 0;
          uVar12 = *puVar19;
          pbVar21 = *(byte **)(puVar19 + 4);
          uVar14 = 0;
          do {
            uVar16 = uVar14 + 1;
            if (uVar12 != 0) {
              uVar3 = puVar19[2];
              uVar1 = uVar12 - 1;
              uVar5 = local_90 - 1;
              goto LAB_001084a8;
            }
            local_ac = local_ac + uVar4;
            uVar14 = uVar16;
          } while (uVar16 < local_90);
LAB_0010874a:
          do {
            puVar19[7] = uVar24;
            if (puVar19[8] < uVar24) {
              auVar26 = Realloc(pbVar21,(ulong)(uVar24 * puVar19[6]),(int)uVar13,in_RCX,(int)in_R8);
              uVar13 = auVar26._8_8_;
              puVar19[8] = uVar24;
              *(long *)(puVar19 + 4) = auVar26._0_8_;
              pbVar21 = __s;
              if (auVar26._0_8_ != 0) {
joined_r0x0010880b:
                uVar13 = auVar26._8_8_;
                if (pbVar21 != (byte *)0x0) {
                  memcpy(auVar26._0_8_,__s,(ulong)(uVar24 * local_50));
                  uVar12 = (uint)extraout_RDX;
                  iVar6 = (int)in_R8;
                  uVar13 = extraout_RDX;
                  goto joined_r0x001087a4;
                }
              }
            }
            else {
              uVar13 = CONCAT71((int7)(uVar13 >> 8),__s != (byte *)0x0);
              auVar26._8_8_ = uVar13;
              auVar26._0_8_ = pbVar21;
              if (__s != (byte *)0x0 && uVar24 != 0) goto joined_r0x0010880b;
            }
            uVar12 = (uint)uVar13;
            iVar6 = (int)in_R8;
            local_70 = local_70 + 1;
            if (in_ESI == local_70) goto LAB_001087ad;
            uVar24 = uStack_4c;
            if (__s != (byte *)0x0) goto LAB_00108436;
LAB_0010882e:
            local_90 = puVar19[1];
            pbVar21 = *(byte **)(puVar19 + 4);
            uVar24 = uStack_4c;
joined_r0x00108865:
          } while (local_90 == 0);
        } while( true );
      }
      puVar19[7] = 0;
      uVar24 = uStack_4c;
joined_r0x001087a4:
      local_70 = local_70 + 1;
    } while (in_ESI != local_70);
  }
LAB_001087ad:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Realloc(__s,0,uVar12,in_RCX,iVar6);
  return;
LAB_001084a8:
  uVar17 = uVar16;
  iVar23 = uVar3 * uVar14;
  uVar25 = iVar23 - uVar3;
  iVar6 = uVar25 + uVar3 * 2;
  uVar16 = 0;
LAB_001084d8:
  do {
    in_RCX = (char *)(ulong)uVar16;
    uVar2 = uVar16 + 1;
    uVar20 = uVar16 >> 6;
    in_R8 = (ulong)uVar20;
    uVar22 = uVar16 & 0x3f;
    uVar18 = *(ulong *)(pbVar21 + (ulong)(iVar23 + uVar20) * 8) >> ((byte)uVar16 & 0x3f);
    uVar11 = (uint)uVar18;
    uVar10 = uVar11 & 1;
    uVar13 = (ulong)uVar10;
    sVar7 = (sbyte)uVar22;
    if ((uVar18 & 1) == 0) {
      bVar8 = (byte)uVar2;
      if (uVar16 == 0) {
        if (uVar14 == 0) {
          if (local_90 == 1) {
            if (uVar12 == 1) goto LAB_0010874a;
            uVar16 = uVar2;
            if ((*pbVar21 & 2) != 0) goto LAB_001085c6;
            goto LAB_001084d8;
          }
LAB_00108550:
          in_RCX = (char *)(ulong)uVar22;
          uVar10 = uVar10 | (uint)(*(ulong *)(pbVar21 + (ulong)(iVar6 + uVar20) * 8) >> sVar7) & 1;
          uVar13 = (ulong)uVar10;
          if (uVar1 <= uVar16) goto LAB_001085c2;
          uVar10 = uVar10 | (uint)(*(ulong *)(pbVar21 + (ulong)(iVar23 + (uVar2 >> 6)) * 8) >>
                                  (bVar8 & 0x3f)) & 1;
          uVar16 = uVar2;
          if (uVar14 != 0) goto LAB_00108595;
        }
        else {
          in_RCX = (char *)(ulong)uVar5;
          local_a0 = (byte)*(undefined8 *)(pbVar21 + (ulong)uVar25 * 8);
          uVar10 = local_a0 & 1;
          uVar13 = (ulong)uVar10;
          if (uVar14 < uVar5) goto LAB_00108550;
          if (uVar1 == 0) {
            if ((char)uVar10 != '\0') goto LAB_001085c6;
            break;
          }
LAB_00108718:
          uVar10 = uVar10 | (uint)(*(ulong *)(pbVar21 + (ulong)(iVar23 + (uVar2 >> 6)) * 8) >>
                                  (bVar8 & 0x3f)) & 1;
LAB_00108595:
          uVar16 = uVar2 & 0x3f;
          uVar10 = uVar10 | (uint)(*(ulong *)(pbVar21 + (ulong)(uVar25 + (uVar2 >> 6)) * 8) >>
                                  (sbyte)uVar16) & 1;
        }
        uVar13 = (ulong)uVar10;
        in_RCX = (char *)(ulong)uVar16;
        if (uVar14 < uVar5) {
          in_RCX = (char *)(ulong)(uVar2 & 0x3f);
          uVar13 = (ulong)(uVar10 | (uint)(*(ulong *)(pbVar21 + (ulong)(iVar6 + (uVar2 >> 6)) * 8)
                                          >> (sbyte)(uVar2 & 0x3f)) & 1);
        }
      }
      else {
        uVar10 = uVar16 - 1;
        uVar15 = uVar10 >> 6;
        bVar9 = (byte)uVar10 & 0x3f;
        uVar11 = (uint)(*(ulong *)(pbVar21 + (ulong)(iVar23 + uVar15) * 8) >> ((byte)uVar10 & 0x3f))
                 | uVar11;
        if (uVar14 == 0) {
          if (local_90 != 1) {
            uVar10 = (uVar11 | (uint)(*(ulong *)(pbVar21 + (ulong)(uVar15 + iVar6) * 8) >> bVar9)) &
                     1;
            goto LAB_00108550;
          }
          if (uVar16 < uVar1) {
            uVar11 = uVar11 | (uint)(*(ulong *)(pbVar21 + (ulong)(uVar2 >> 6) * 8) >> (bVar8 & 0x3f)
                                    );
            uVar10 = uVar2;
          }
          in_RCX = (char *)(ulong)uVar10;
          uVar13 = (ulong)(uVar11 & 1);
        }
        else {
          uVar11 = uVar11 | (uint)(*(ulong *)(pbVar21 + (ulong)(uVar25 + uVar15) * 8) >> bVar9);
          if (uVar14 < uVar5) {
            uVar10 = ((uint)(*(ulong *)(pbVar21 + (ulong)(uVar25 + uVar20) * 8) >> sVar7) |
                     (uint)(*(ulong *)(pbVar21 + (ulong)(uVar15 + iVar6) * 8) >> bVar9) | uVar11) &
                     1;
            goto LAB_00108550;
          }
          in_RCX = (char *)(ulong)uVar1;
          uVar10 = (uVar11 | (uint)(*(ulong *)(pbVar21 + (ulong)(uVar25 + uVar20) * 8) >> sVar7)) &
                   1;
          uVar13 = (ulong)uVar10;
          if (uVar16 < uVar1) goto LAB_00108718;
        }
      }
LAB_001085c2:
      if ((char)uVar13 != '\0') goto LAB_001085c6;
    }
    else {
LAB_001085c6:
      in_RCX = (char *)(ulong)uVar22;
      uVar13 = 1L << sVar7;
      *(ulong *)(__s + (ulong)(local_ac + uVar20) * 8) =
           *(ulong *)(__s + (ulong)(local_ac + uVar20) * 8) | uVar13;
    }
    uVar16 = uVar2;
  } while (uVar12 != uVar2);
  local_ac = local_ac + uVar4;
  if (local_90 <= uVar17) goto LAB_0010874a;
  uVar16 = uVar17 + 1;
  uVar14 = uVar17;
  goto LAB_001084a8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::BVH::BVH(xatlas::internal::Array<xatlas::internal::AABB> const&, unsigned int)
    */

void __thiscall xatlas::internal::BVH::BVH(BVH *this,Array *param_1,uint param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  char *pcVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong in_R8;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_6e0;
  float local_6dc;
  float local_6d8;
  uint local_6d4;
  undefined8 local_6a8;
  float local_6a0;
  undefined8 local_698;
  float fStack_690;
  float afStack_68c [5];
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  uint local_660;
  uint local_65c;
  undefined4 local_658;
  undefined8 local_648;
  uint local_640 [384];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x10) = 4;
  *(undefined8 *)(this + 0x28) = 0x24;
  *(Array **)this = param_1;
  iVar6 = *(int *)(param_1 + 0xc);
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  if (iVar6 == 0) {
LAB_00108929:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ArrayBase::resize((int)this + 8,SUB41(iVar6,0));
  uVar21 = *(uint *)(this + 0x14);
  if (uVar21 != 0) {
    uVar11 = 0;
    puVar9 = *(undefined4 **)(this + 8);
    if ((uVar21 & 1) != 0) {
      uVar11 = 1;
      *puVar9 = 0;
      if ((ulong)uVar21 == 1) goto LAB_001089a3;
    }
    do {
      puVar9[uVar11] = (int)uVar11;
      lVar20 = uVar11 + 1;
      uVar11 = uVar11 + 2;
      puVar9[lVar20] = (int)lVar20;
    } while (uVar11 != uVar21);
  }
LAB_001089a3:
  uVar21 = *(uint *)(this + 0x30);
  uVar7 = *(uint *)(param_1 + 0xc);
  local_678 = __LC9;
  uStack_670 = _UNK_00120538;
  local_648 = _LC22;
  local_640[0] = uVar7;
  local_668 = _LC24;
  if (uVar21 < uVar7 * 2) {
    ArrayBase::setArrayCapacity((int)this + 0x20);
    uVar21 = *(uint *)(this + 0x30);
  }
  uVar16 = 0;
  local_6d4 = 1;
  fVar35 = _LC11;
  uVar24 = 0;
  do {
    uVar23 = (ulong)uVar16;
    lVar20 = *(long *)(this + 8);
    uVar22 = uVar7 - uVar16;
    uVar17 = local_6d4 - 1;
    uVar11 = (ulong)uVar17;
    local_658 = 0xffffffff;
    pfVar1 = (float *)(*(long *)param_1 + (ulong)*(uint *)(lVar20 + uVar23 * 4) * 0x18);
    local_6e0 = *pfVar1;
    local_6dc = pfVar1[1];
    local_6d8 = pfVar1[2];
    fVar33 = pfVar1[3];
    local_668 = *(undefined8 *)(pfVar1 + 4);
    uVar14 = uVar16 + 1;
    fVar28 = (float)local_668;
    fVar30 = (float)((ulong)local_668 >> 0x20);
    fVar25 = (fVar33 - local_6e0) * _LC11 + local_6e0;
    fVar27 = (fVar28 - local_6dc) * _UNK_00120544 + local_6dc;
    fStack_690 = (fVar30 - local_6d8) * _UNK_00120548 + local_6d8;
    local_698 = CONCAT44(fVar27,fVar25);
    afStack_68c[0] = (fVar33 - local_6e0) * _UNK_0012054c + local_6e0;
    fVar32 = (float)*(undefined8 *)(pfVar1 + 1);
    fVar34 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
    afStack_68c[1] = (fVar28 - fVar32) * _LC11 + fVar32;
    afStack_68c[2] = (fVar30 - fVar34) * _UNK_00120544 + fVar34;
    if (uVar14 < uVar7) {
      puVar15 = (uint *)(lVar20 + (ulong)uVar14 * 4);
      fVar32 = fVar27;
      fVar34 = fStack_690;
      afStack_68c[0] = fVar25;
      do {
        uVar8 = *puVar15;
        puVar15 = puVar15 + 1;
        pfVar1 = (float *)(*(long *)param_1 + (ulong)uVar8 * 0x18);
        fVar31 = pfVar1[2];
        fVar29 = pfVar1[1];
        fVar4 = pfVar1[5];
        fVar5 = pfVar1[3];
        if (fVar31 <= local_6d8) {
          local_6d8 = fVar31;
        }
        if (fVar30 <= fVar4) {
          fVar30 = fVar4;
        }
        if (fVar33 <= fVar5) {
          fVar33 = fVar5;
        }
        if (fVar29 <= local_6dc) {
          local_6dc = fVar29;
        }
        fVar26 = *pfVar1;
        if (fVar26 <= local_6e0) {
          local_6e0 = fVar26;
        }
        fVar31 = (fVar4 - fVar31) * fVar35 + fVar31;
        fVar4 = pfVar1[4];
        if (fVar31 <= fVar34) {
          fVar34 = fVar31;
        }
        if (fStack_690 <= fVar31) {
          fStack_690 = fVar31;
        }
        if (fVar28 <= fVar4) {
          fVar28 = fVar4;
        }
        fVar26 = (fVar5 - fVar26) * fVar35 + fVar26;
        if (fVar26 <= fVar25) {
          fVar25 = fVar26;
        }
        if (afStack_68c[0] <= fVar26) {
          afStack_68c[0] = fVar26;
        }
        fVar29 = (fVar4 - fVar29) * fVar35 + fVar29;
        if (fVar29 <= fVar32) {
          fVar32 = fVar29;
        }
        if (fVar27 <= fVar29) {
          fVar27 = fVar29;
        }
      } while ((uint *)(lVar20 + 4 + ((ulong)((uVar7 - 2) - uVar16) + (ulong)uVar14) * 4) != puVar15
              );
      in_R8 = (ulong)(uint)fStack_690;
      afStack_68c[2] = fStack_690;
      fStack_690 = fVar34;
      local_698 = CONCAT44(fVar32,fVar25);
      local_668 = CONCAT44(fVar30,fVar28);
      afStack_68c[1] = fVar27;
    }
    local_678 = CONCAT44(local_6dc,local_6e0);
    uStack_670 = CONCAT44(fVar33,local_6d8);
    pcVar13 = (char *)0xffffffff;
    if (uVar22 <= param_2) {
      local_658 = 0;
      pcVar13 = (char *)0x0;
    }
    pvVar12 = *(void **)(this + 0x20);
    uVar14 = *(int *)(this + 0x2c) + 1;
    *(uint *)(this + 0x2c) = uVar14;
    local_660 = uVar16;
    local_65c = uVar22;
    if (uVar21 < uVar14) {
      if ((uVar21 == 0) || (uVar14 = uVar14 + (uVar14 >> 2), uVar14 != 0)) {
        pvVar12 = (void *)Realloc(pvVar12,(ulong)(uVar14 * *(int *)(this + 0x28)),uVar14,pcVar13,
                                  (int)in_R8);
        *(void **)(this + 0x20) = pvVar12;
        fVar35 = _LC11;
        *(uint *)(this + 0x30) = uVar14;
        goto LAB_00108cea;
      }
      if (pvVar12 == (void *)0x0) {
        *(undefined4 *)(this + 0x30) = 0;
      }
      else {
        Realloc(pvVar12,0,0,pcVar13,(int)in_R8);
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined4 *)(this + 0x30) = 0;
        fVar35 = _LC11;
      }
    }
    else {
LAB_00108cea:
      if (pvVar12 != (void *)0x0) {
        memcpy((void *)((long)pvVar12 +
                       (ulong)((*(int *)(this + 0x2c) + -1) * *(uint *)(this + 0x28))),&local_678,
               (ulong)*(uint *)(this + 0x28));
        fVar35 = _LC11;
      }
    }
    uVar21 = local_640[uVar11 * 3 + -2];
    if (uVar21 != 0xfffffffc) {
      lVar20 = *(long *)(this + 0x20) + (ulong)uVar21 * 0x24;
      uVar14 = *(uint *)(lVar20 + 0x20);
      in_R8 = (ulong)uVar14;
      iVar6 = uVar14 - 1;
      if (uVar14 == 0xfffffffe) {
        iVar6 = uVar24 - uVar21;
      }
      *(int *)(lVar20 + 0x20) = iVar6;
    }
    if ((int)pcVar13 != 0) {
      if (afStack_68c[1] - local_698._4_4_ <= afStack_68c[0] - (float)local_698) {
        lVar20 = (ulong)(afStack_68c[0] - (float)local_698 < afStack_68c[2] - fStack_690) << 3;
      }
      else {
        lVar20 = (ulong)(afStack_68c[1] - local_698._4_4_ < afStack_68c[2] - fStack_690) * 4 + 4;
      }
      fVar33 = (*(float *)((long)&local_698 + lVar20) + *(float *)((long)afStack_68c + lVar20)) *
               fVar35;
      if (uVar16 < uVar7) {
        lVar10 = *(long *)(this + 8);
        in_R8 = *(ulong *)param_1;
        puVar15 = (uint *)(uVar23 * 4 + lVar10);
        uVar18 = (ulong)uVar16;
        do {
          uVar21 = *puVar15;
          puVar2 = (undefined8 *)(in_R8 + (ulong)uVar21 * 0x18);
          fVar27 = (float)*puVar2;
          fVar30 = (float)((ulong)*puVar2 >> 0x20);
          local_6a0 = (*(float *)((long)puVar2 + 0x14) - *(float *)(puVar2 + 1)) * fVar35 +
                      *(float *)(puVar2 + 1);
          local_6a8 = CONCAT44(((float)((ulong)*(undefined8 *)((long)puVar2 + 0xc) >> 0x20) - fVar30
                               ) * _UNK_00120544 + fVar30,
                               ((float)*(undefined8 *)((long)puVar2 + 0xc) - fVar27) * _LC11 +
                               fVar27);
          uVar19 = uVar18;
          if (*(float *)((long)&local_6a8 + lVar20) <= fVar33 &&
              fVar33 != *(float *)((long)&local_6a8 + lVar20)) {
            uVar19 = (ulong)((int)uVar18 + 1);
            puVar3 = (uint *)(lVar10 + uVar18 * 4);
            *puVar15 = *puVar3;
            *puVar3 = uVar21;
          }
          puVar15 = puVar15 + 1;
          uVar18 = uVar19;
        } while (puVar15 != (uint *)(lVar10 + 4 + (((uVar7 - 1) - uVar16) + uVar23) * 4));
        if (((uint)uVar19 == uVar16) || ((uint)uVar19 == uVar7)) goto LAB_00108f30;
      }
      else {
LAB_00108f30:
        uVar19 = (ulong)((uVar22 >> 1) + uVar16);
      }
      local_640[uVar11 * 3 + -1] = (uint)uVar19;
      local_640[uVar11 * 3 + -2] = uVar24;
      uVar11 = (ulong)local_6d4;
      uVar17 = local_6d4 + 1;
      local_640[uVar11 * 3 + -1] = uVar16;
      local_640[uVar11 * 3] = (uint)uVar19;
      local_640[uVar11 * 3 + -2] = uVar24;
    }
    if (uVar17 == 0) goto LAB_00108929;
    uVar21 = *(uint *)(this + 0x30);
    uVar16 = local_640[(ulong)(uVar17 - 1) * 3 + -1];
    uVar7 = local_640[(ulong)(uVar17 - 1) * 3];
    uVar24 = uVar24 + 1;
    local_6d4 = uVar17;
  } while( true );
}



/* xatlas::internal::Fit::EigenSolver3_QLAlgorithm(float (*) [3], float*, float*) */

undefined8
xatlas::internal::Fit::EigenSolver3_QLAlgorithm(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar2 = _LC4;
  uVar1 = _LC37;
  lVar11 = 0;
  pfVar12 = param_2;
LAB_00108fbc:
  iVar7 = 0x20;
  do {
    if (lVar11 == 2) {
      return 1;
    }
    fVar18 = *pfVar12;
    lVar8 = lVar11;
    fVar15 = fVar18;
    do {
      fVar16 = (float)((uint)fVar15 & uVar1);
      fVar15 = param_2[lVar8 + 1];
      fVar16 = (float)((uint)fVar15 & uVar1) + fVar16;
      iVar13 = (int)lVar11;
      if ((float)((uint)param_3[lVar8] & uVar1) + fVar16 == fVar16) {
        iVar3 = (int)lVar8;
        if (iVar3 == iVar13) {
          lVar11 = lVar11 + 1;
          pfVar12 = pfVar12 + 1;
          goto LAB_00108fbc;
        }
        break;
      }
      lVar8 = lVar8 + 1;
      iVar3 = (int)lVar8;
    } while (iVar3 != 2);
    fVar15 = param_3[lVar11];
    lVar8 = (long)iVar3;
    fVar16 = (pfVar12[1] - fVar18) / (fVar15 + fVar15);
    fVar17 = SQRT(fVar16 * fVar16 + fVar2);
    if (fVar16 < 0.0) {
      fVar16 = fVar16 - fVar17;
    }
    else {
      fVar16 = fVar16 + fVar17;
    }
    fVar15 = (param_2[lVar8] - fVar18) + fVar15 / fVar16;
    if (iVar13 <= iVar3 + -1) {
      pfVar10 = param_1 + lVar8 + 8;
      fVar18 = 0.0;
      lVar6 = (long)(iVar3 + -1);
      lVar9 = lVar8;
      fVar16 = fVar2;
      fVar17 = fVar2;
      do {
        fVar16 = fVar16 * param_3[lVar6];
        fVar14 = param_3[lVar6] * fVar17;
        if ((float)((uint)fVar16 & uVar1) < (float)((uint)fVar15 & uVar1)) {
          fVar16 = fVar16 / fVar15;
          fVar19 = SQRT(fVar16 * fVar16 + fVar2);
          fVar17 = fVar2 / fVar19;
          fVar19 = fVar15 * fVar19;
          fVar16 = fVar16 * fVar17;
        }
        else {
          fVar15 = fVar15 / fVar16;
          fVar17 = SQRT(fVar15 * fVar15 + fVar2);
          fVar19 = fVar16 * fVar17;
          fVar16 = fVar2 / fVar17;
          fVar17 = fVar15 * fVar16;
        }
        param_3[lVar9] = fVar19;
        fVar19 = param_2[lVar9] - fVar18;
        fVar15 = (param_2[lVar6] - fVar19) * fVar16 + (fVar14 + fVar14) * fVar17;
        fVar18 = fVar16 * fVar15;
        fVar15 = fVar15 * fVar17 - fVar14;
        param_2[lVar9] = fVar19 + fVar18;
        pfVar4 = pfVar10 + -9;
        do {
          pfVar5 = pfVar4 + 3;
          fVar14 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
          *(ulong *)pfVar4 =
               CONCAT44(fVar14 * fVar17 + *pfVar4 * fVar16,*pfVar4 * fVar17 - fVar14 * fVar16);
          pfVar4 = pfVar5;
        } while (pfVar10 != pfVar5);
        lVar6 = lVar6 + -1;
        lVar9 = lVar9 + -1;
        pfVar10 = pfVar10 + -1;
      } while (iVar13 <= (int)lVar6);
      fVar18 = *pfVar12 - fVar18;
    }
    *pfVar12 = fVar18;
    param_3[lVar11] = fVar15;
    param_3[lVar8] = 0.0;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      return 0;
    }
  } while( true );
}



/* xatlas::internal::Mesh::Mesh(float, unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
xatlas::internal::Mesh::Mesh
          (Mesh *this,float param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _LC31;
  uVar2 = _LC18;
  *(undefined8 *)(this + 0x60) = _LC31;
  *(undefined8 *)(this + 0x78) = uVar3;
  uVar3 = _LC32;
  *(float *)this = param_1;
  *(uint *)(this + 4) = param_4;
  *(uint *)(this + 8) = param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = uVar2;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = uVar3;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = uVar2;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = uVar2;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = uVar2;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = uVar2;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = uVar2;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x120) = 7;
  *(uint *)(this + 0x124) = param_3 * 3;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = uVar3;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = uVar2;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  iVar1 = (int)this;
  if (param_3 == 0) {
    if (param_2 == 0) goto LAB_001093b7;
LAB_001093df:
    ArrayBase::setArrayCapacity(iVar1 + 0x58);
  }
  else {
    ArrayBase::setArrayCapacity(iVar1 + 0x40);
    if (*(uint *)(this + 0x68) < param_2) goto LAB_001093df;
  }
  if (*(uint *)(this + 0x98) < param_2) {
    ArrayBase::setArrayCapacity(iVar1 + 0x88);
  }
  param_4 = *(uint *)(this + 4);
  if (((param_4 & 1) != 0) && (*(uint *)(this + 0x20) < param_3)) {
    ArrayBase::setArrayCapacity(iVar1 + 0x10);
    param_4 = *(uint *)(this + 4);
  }
  if (((param_4 & 2) != 0) && (*(uint *)(this + 0x80) < param_2)) {
    ArrayBase::setArrayCapacity(iVar1 + 0x70);
    param_4 = *(uint *)(this + 4);
  }
LAB_001093b7:
  if (((param_4 & 4) != 0) && (*(uint *)(this + 0x38) < param_3)) {
    ArrayBase::setArrayCapacity(iVar1 + 0x28);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::Mesh::addFace(unsigned int const*, bool, unsigned int) */

void xatlas::internal::Mesh::addFace(uint *param_1,bool param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  long lVar8;
  char *in_RCX;
  char *pcVar9;
  uint extraout_EDX;
  ulong uVar10;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  long lVar11;
  long extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  long extraout_RDX_04;
  uint uVar12;
  undefined7 in_register_00000031;
  void *pvVar13;
  uint uVar14;
  ulong in_R8;
  void *pvVar15;
  uint uVar16;
  long in_FS_OFFSET;
  double extraout_XMM0_Qa;
  undefined1 auVar17 [16];
  undefined8 local_48;
  long local_40;
  
  pvVar15 = (void *)CONCAT71(in_register_00000031,param_2);
  uVar10 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = param_1[1];
  if ((uVar6 & 1) != 0) {
    ArrayBase::push_back((uchar *)(param_1 + 4));
    uVar6 = param_1[1];
    uVar10 = extraout_RDX_03;
  }
  if ((uVar6 & 4) != 0) {
    ArrayBase::push_back((uchar *)(param_1 + 10));
    uVar10 = extraout_RDX_02;
  }
  uVar6 = param_1[0x13];
  auVar17._8_8_ = uVar10;
  auVar17._0_8_ = *(undefined8 *)(param_1 + 0x10);
  pvVar1 = (void *)((long)pvVar15 + 0xc);
  uVar12 = uVar6;
  do {
    pvVar13 = auVar17._0_8_;
    uVar12 = uVar12 + 1;
    param_1[0x13] = uVar12;
    if (param_1[0x14] < uVar12) {
      if ((param_1[0x14] == 0) || (uVar12 = uVar12 + (uVar12 >> 2), uVar12 != 0)) {
        auVar17 = Realloc(pvVar13,(ulong)(uVar12 * param_1[0x12]),auVar17._8_4_,in_RCX,(int)in_R8);
        param_1[0x14] = uVar12;
        *(long *)(param_1 + 0x10) = auVar17._0_8_;
        goto LAB_001094bd;
      }
      if (pvVar13 == (void *)0x0) {
        param_1[0x14] = 0;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auVar17._8_8_;
        auVar17 = auVar5 << 0x40;
      }
      else {
        Realloc(pvVar13,0,auVar17._8_4_,in_RCX,(int)in_R8);
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = extraout_RDX_00;
        auVar17 = auVar4 << 0x40;
        param_1[0x14] = 0;
      }
    }
    else {
LAB_001094bd:
      if (pvVar15 != (void *)0x0 && auVar17._0_8_ != 0) {
        memcpy((void *)(auVar17._0_8_ + (ulong)((param_1[0x13] - 1) * param_1[0x12])),pvVar15,
               (ulong)param_1[0x12]);
        auVar17._8_8_ = extraout_RDX;
        auVar17._0_8_ = *(undefined8 *)(param_1 + 0x10);
      }
    }
    lVar8 = auVar17._0_8_;
    pvVar15 = (void *)((long)pvVar15 + 4);
    if (pvVar15 == pvVar1) break;
    uVar12 = param_1[0x13];
  } while( true );
  lVar11 = *(long *)(param_1 + 0x4c);
  uVar12 = 0;
  do {
    iVar2 = *(int *)(lVar8 + (ulong)(uVar6 + uVar12) * 4);
    uVar12 = uVar12 + 1;
    pcVar9 = (char *)(ulong)((uVar12 / 3) * 3);
    iVar3 = *(int *)(lVar8 + (ulong)(uVar12 % 3 + uVar6) * 4);
    local_48 = CONCAT44(iVar3,iVar2);
    if (lVar11 == 0) {
      pcVar9 = (char *)(ulong)param_1[0x49];
      uVar7 = nextPowerOfTwo(param_1[0x49]);
      uVar16 = (uint)(long)(extraout_XMM0_Qa * __LC34);
      if (uVar7 < uVar16) {
        uVar7 = nextPowerOfTwo(uVar16);
        uVar16 = extraout_EDX;
      }
      param_1[0x4a] = uVar7;
      lVar8 = Realloc((void *)0x0,(ulong)uVar7 * 4,uVar16,pcVar9,(int)in_R8);
      pcVar9 = (char *)(ulong)param_1[0x4a];
      lVar11 = 0;
      *(long *)(param_1 + 0x4c) = lVar8;
      if (param_1[0x4a] != 0) {
        do {
          *(undefined4 *)(lVar8 + lVar11 * 4) = 0xffffffff;
          lVar11 = lVar11 + 1;
        } while ((uint)lVar11 < param_1[0x4a]);
      }
      if (param_1[0x52] < param_1[0x49]) {
        ArrayBase::setArrayCapacity((int)param_1 + 0x138);
        lVar11 = extraout_RDX_04;
        if (param_1[0x58] < param_1[0x49]) goto LAB_0010983d;
      }
      else if (param_1[0x58] < param_1[0x49]) {
LAB_0010983d:
        ArrayBase::setArrayCapacity((int)param_1 + 0x150);
        lVar11 = extraout_RDX_01;
      }
    }
    pvVar15 = *(void **)(param_1 + 0x4e);
    uVar10 = (ulong)(iVar2 * 0x8000 + iVar3 & param_1[0x4a] - 1);
    uVar16 = param_1[0x51] + 1;
    param_1[0x51] = uVar16;
    if (param_1[0x52] < uVar16) {
      if ((param_1[0x52] == 0) || (uVar16 = uVar16 + (uVar16 >> 2), uVar16 != 0)) {
        pvVar15 = (void *)Realloc(pvVar15,(ulong)(uVar16 * param_1[0x50]),(int)lVar11,pcVar9,
                                  (int)in_R8);
        param_1[0x52] = uVar16;
        *(void **)(param_1 + 0x4e) = pvVar15;
        goto LAB_001095cf;
      }
      if (pvVar15 != (void *)0x0) {
        Realloc(pvVar15,0,(int)lVar11,pcVar9,(int)in_R8);
        param_1[0x4e] = 0;
        param_1[0x4f] = 0;
      }
      param_1[0x52] = 0;
    }
    else {
LAB_001095cf:
      if (pvVar15 != (void *)0x0) {
        memcpy((void *)((long)pvVar15 + (ulong)((param_1[0x51] - 1) * param_1[0x50])),&local_48,
               (ulong)param_1[0x50]);
      }
    }
    lVar11 = *(long *)(param_1 + 0x4c);
    uVar7 = param_1[0x57];
    pvVar15 = *(void **)(param_1 + 0x54);
    pcVar9 = (char *)(lVar11 + uVar10 * 4);
    uVar16 = uVar7 + 1;
    param_1[0x57] = uVar16;
    in_R8 = CONCAT71((int7)(in_R8 >> 8),pcVar9 != (char *)0x0);
    uVar14 = (uint)in_R8;
    if (param_1[0x58] < uVar16) {
      if ((param_1[0x58] == 0) || (uVar16 = uVar16 + (uVar16 >> 2), uVar16 != 0)) {
        pvVar15 = (void *)Realloc(pvVar15,(ulong)(uVar16 * param_1[0x56]),(int)lVar11,pcVar9,uVar14)
        ;
        param_1[0x58] = uVar16;
        *(void **)(param_1 + 0x54) = pvVar15;
        uVar14 = (uint)(pcVar9 != (char *)0x0) &
                 (uint)CONCAT71((int7)((ulong)pvVar15 >> 8),pvVar15 != (void *)0x0);
        uVar7 = param_1[0x57] - 1;
        goto LAB_00109631;
      }
      if (pvVar15 == (void *)0x0) {
        param_1[0x58] = 0;
      }
      else {
        Realloc(pvVar15,0,(int)lVar11,pcVar9,uVar14);
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        param_1[0x58] = 0;
        lVar11 = *(long *)(param_1 + 0x4c);
        uVar7 = param_1[0x57] - 1;
      }
    }
    else {
      uVar14 = uVar14 & (uint)CONCAT71((int7)((ulong)lVar11 >> 8),pvVar15 != (void *)0x0);
LAB_00109631:
      in_R8 = (ulong)uVar14;
      if ((char)uVar14 != '\0') {
        memcpy((void *)((long)pvVar15 + (ulong)(uVar7 * param_1[0x56])),pcVar9,(ulong)param_1[0x56])
        ;
        uVar7 = param_1[0x57] - 1;
      }
      lVar11 = *(long *)(param_1 + 0x4c);
    }
    *(uint *)(lVar11 + uVar10 * 4) = uVar7;
    if (uVar12 == 3) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar8 = *(long *)(param_1 + 0x10);
  } while( true );
}



/* xatlas::internal::Mesh::createColocalsBVH() */

void __thiscall xatlas::internal::Mesh::createColocalsBVH(Mesh *this)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [12];
  ulong uVar7;
  ArrayBase *pAVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  long in_R8;
  uint *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_224;
  float local_214;
  float local_1fc;
  uint local_1f0;
  float *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  uint *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  void *local_1a8;
  undefined8 local_1a0;
  uint local_198;
  undefined4 uStack_194;
  long *local_188;
  long local_180 [3];
  long local_168 [4];
  uint local_148 [66];
  long local_40;
  
  uVar4 = *(uint *)(this + 100);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1e8 = (float *)0x0;
  local_1d8 = 0;
  local_1e0 = CONCAT44(uVar4,0x18);
  if (uVar4 != 0) {
    ArrayBase::setArrayCapacity((uint)(Array *)&local_1e8);
    if (*(uint *)(this + 100) != 0) {
      fVar3 = *(float *)this;
      pauVar6 = *(undefined1 (**) [12])(this + 0x58);
      pauVar1 = pauVar6 + *(uint *)(this + 100);
      pfVar11 = local_1e8;
      do {
        fVar20 = *(float *)*pauVar6;
        fVar22 = *(float *)(*pauVar6 + 8);
        fVar21 = *(float *)(*pauVar6 + 4);
        uVar19 = *(undefined8 *)(*pauVar6 + 4);
        fVar18 = fVar20;
        if (0.0 < fVar3) {
          fVar18 = fVar20 + fVar3;
          uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar3,(float)uVar19 + fVar3);
          fVar20 = (float)*(undefined8 *)*pauVar6 - fVar3;
          fVar21 = (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20) - fVar3;
          fVar22 = SUB124(*pauVar6,8) - fVar3;
        }
        pauVar6 = pauVar6 + 1;
        *pfVar11 = fVar20;
        pfVar11[1] = fVar21;
        pfVar11[2] = fVar22;
        pfVar11[3] = fVar18;
        *(undefined8 *)(pfVar11 + 4) = uVar19;
        pfVar11 = pfVar11 + 6;
      } while (pauVar6 != pauVar1);
    }
  }
  BVH::BVH((BVH *)&local_188,(Array *)&local_1e8,4);
  local_1c8 = (uint *)0x0;
  local_1c0 = _LC18;
  local_1b8 = 0;
  local_1a8 = (void *)0x0;
  local_1a0 = _LC18;
  local_198 = 0;
  uStack_194 = 0;
  ArrayBase::resize((int)this + 0xa0,SUB41(uVar4,0));
  if ((*(void **)(this + 0xa0) != (void *)0x0) && (*(int *)(this + 0xac) != 0)) {
    memset(*(void **)(this + 0xa0),0xff,(ulong)(uint)(*(int *)(this + 0xac) * *(int *)(this + 0xa8))
          );
  }
  ArrayBase::resize((int)this + 0xb8,SUB41(uVar4,0));
  if ((*(void **)(this + 0xb8) != (void *)0x0) && (*(int *)(this + 0xc4) != 0)) {
    memset(*(void **)(this + 0xb8),0xff,(ulong)(uint)(*(int *)(this + 0xc4) * *(int *)(this + 0xc0))
          );
  }
  local_1f0 = 0;
  uVar7 = 0;
  pAVar8 = (ArrayBase *)&local_1c8;
  if (uVar4 == 0) {
LAB_00109e68:
    ArrayBase::~ArrayBase((ArrayBase *)&local_1a8);
    ArrayBase::~ArrayBase((ArrayBase *)&local_1c8);
    ArrayBase::~ArrayBase((ArrayBase *)local_168);
    ArrayBase::~ArrayBase((ArrayBase *)local_180);
    ArrayBase::~ArrayBase((ArrayBase *)&local_1e8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00109aab:
  if (*(int *)(*(long *)(this + 0xa0) + uVar7 * 4) == -1) {
    local_1c0 = local_1c0 & 0xffffffff;
    ArrayBase::push_back((uchar *)&local_1c8);
    fVar3 = *(float *)this;
    pfVar11 = (float *)(*(long *)(this + 0x58) + (ulong)local_1f0 * 0xc);
    local_214 = pfVar11[2];
    fVar20 = *pfVar11;
    fVar22 = pfVar11[1];
    local_224 = fVar22;
    local_1fc = local_214;
    fVar21 = fVar20;
    if (0.0 < fVar3) {
      local_224 = fVar22 + fVar3;
      fVar21 = fVar20 - fVar3;
      local_1fc = local_214 + fVar3;
      fVar22 = fVar22 - fVar3;
      local_214 = local_214 - fVar3;
      fVar20 = fVar3 + fVar20;
    }
    uVar14 = 0;
    uVar12 = 0;
    iVar10 = 0;
    local_1a0 = local_1a0 & 0xffffffff;
    iVar9 = -1;
    local_148[0] = 0;
    lVar13 = local_168[0];
    do {
      lVar15 = lVar13 + (ulong)uVar12 * 0x24;
      if (*(int *)(lVar15 + 0x20) == 0) {
        uVar12 = 0;
        uVar5 = local_198;
        if (*(int *)(lVar15 + 0x1c) != 0) {
LAB_00109c18:
          do {
            while( true ) {
              puVar16 = (uint *)(local_180[0] + (ulong)(uVar12 + *(int *)(lVar15 + 0x18)) * 4);
              uVar5 = *puVar16;
              iVar10 = uVar5 * 3;
              pfVar11 = (float *)(*local_188 + (ulong)uVar5 * 0x18);
              if ((((fVar21 <= pfVar11[3]) && (*pfVar11 <= fVar20)) && (fVar22 <= pfVar11[4])) &&
                 (((pfVar11[1] <= local_224 && (local_214 <= pfVar11[5])) &&
                  (pfVar11[2] <= local_1fc)))) break;
LAB_00109d68:
              uVar12 = uVar12 + 1;
              uVar5 = local_198;
              if (*(uint *)(lVar15 + 0x1c) <= uVar12) goto LAB_00109d75;
            }
            uVar14 = uVar14 + 1;
            local_1a0 = CONCAT44(uVar14,(int)local_1a0);
            if (uVar14 <= local_198) {
LAB_00109d16:
              if (local_1a8 != (void *)0x0) {
                memcpy((void *)((long)local_1a8 + (ulong)((uVar14 - 1) * (int)local_1a0)),puVar16,
                       local_1a0 & 0xffffffff);
                uVar14 = local_1a0._4_4_;
              }
              goto LAB_00109d68;
            }
            uVar5 = uVar14;
            if ((local_198 == 0) || (uVar5 = (uVar14 >> 2) + uVar14, uVar5 != 0)) {
              local_1a8 = (void *)Realloc(local_1a8,(ulong)(uVar5 * (int)local_1a0),iVar10,
                                          (char *)pAVar8,(int)in_R8);
              uVar14 = local_1a0._4_4_;
              local_198 = uVar5;
              goto LAB_00109d16;
            }
            if (local_1a8 != (void *)0x0) {
              uVar12 = uVar12 + 1;
              Realloc(local_1a8,0,iVar10,(char *)pAVar8,(int)in_R8);
              local_1a8 = (void *)0x0;
              local_198 = 0;
              uVar5 = local_198;
              local_198 = 0;
              uVar14 = local_1a0._4_4_;
              if (*(uint *)(lVar15 + 0x1c) <= uVar12) break;
              goto LAB_00109c18;
            }
            local_198 = 0;
            uVar12 = uVar12 + 1;
            uVar5 = local_198;
          } while (uVar12 < *(uint *)(lVar15 + 0x1c));
        }
LAB_00109d75:
        local_198 = uVar5;
        if (iVar9 == -1) goto LAB_00109d81;
LAB_00109be9:
        lVar15 = (long)iVar9;
        lVar13 = local_168[0];
        iVar10 = iVar9;
        iVar9 = iVar9 + -1;
      }
      else {
        uVar5 = uVar12 + *(int *)(lVar15 + 0x20);
        pfVar11 = (float *)(lVar13 + (ulong)(uVar12 + 1) * 0x24);
        if (((((pfVar11[3] < fVar21) || (fVar20 < *pfVar11)) || (pfVar11[4] < fVar22)) ||
            ((local_224 < pfVar11[1] || (pfVar11[5] < local_214)))) || (local_1fc < pfVar11[2])) {
          pfVar11 = (float *)(lVar13 + (ulong)uVar5 * 0x24);
          iVar10 = iVar9;
          if (fVar21 <= pfVar11[3]) goto LAB_00109bb8;
LAB_00109be0:
          if (iVar9 != -1) goto LAB_00109be9;
          goto LAB_00109d81;
        }
        lVar15 = (long)iVar10;
        local_148[lVar15] = uVar12 + 1;
        pfVar11 = (float *)(lVar13 + (ulong)uVar5 * 0x24);
        if (fVar21 <= pfVar11[3]) {
LAB_00109bb8:
          iVar9 = iVar10;
          if (((fVar20 < *pfVar11) || (pfVar11[4] < fVar22)) ||
             ((local_224 < pfVar11[1] || ((pfVar11[5] < local_214 || (local_1fc < pfVar11[2]))))))
          goto LAB_00109be0;
          iVar10 = iVar9 + 1;
          lVar15 = (long)iVar10;
          local_148[lVar15] = uVar5;
        }
      }
      uVar12 = local_148[lVar15];
    } while( true );
  }
  goto joined_r0x00109aa5;
LAB_00109d81:
  lVar13 = 0;
  if (uVar14 != 0) {
    do {
      uVar12 = *(uint *)((long)local_1a8 + lVar13 * 4);
      if (uVar12 != local_1f0) {
        fVar3 = *(float *)this;
        pfVar11 = (float *)(*(long *)(this + 0x58) + (ulong)uVar12 * 0xc);
        pfVar2 = (float *)(*(long *)(this + 0x58) + (ulong)local_1f0 * 0xc);
        if (((((float)((uint)(*pfVar2 - *pfVar11) & _LC37) <= fVar3) &&
             ((float)((uint)(pfVar2[1] - pfVar11[1]) & _LC37) <= fVar3)) &&
            ((float)((uint)(pfVar2[2] - pfVar11[2]) & _LC37) <= fVar3)) &&
           (*(int *)(*(long *)(this + 0xa0) + (ulong)uVar12 * 4) == -1)) {
          ArrayBase::push_back((uchar *)&local_1c8);
        }
      }
      lVar13 = lVar13 + 1;
    } while ((uint)lVar13 < local_1a0._4_4_);
  }
  if (local_1c0._4_4_ == 1) {
    *(uint *)(*(long *)(this + 0xa0) + (ulong)local_1f0 * 4) = local_1f0;
    *(uint *)(*(long *)(this + 0xb8) + (ulong)local_1f0 * 4) = local_1f0;
  }
  else {
    puVar16 = local_1c8;
    puVar17 = local_1c8;
    uVar12 = local_1c0._4_4_;
    insertionSort<unsigned_int>(local_1c8,local_1c0._4_4_);
    if (uVar12 != 0) {
      lVar13 = *(long *)(this + 0xa0);
      in_R8 = *(long *)(this + 0xb8);
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 1;
        *(uint *)(lVar13 + (ulong)*puVar16 * 4) = puVar17[(ulong)uVar14 % (ulong)uVar12];
        *(uint *)(in_R8 + (ulong)*puVar16 * 4) = *puVar17;
        puVar16 = puVar16 + 1;
      } while (uVar14 != uVar12);
    }
  }
joined_r0x00109aa5:
  local_1f0 = local_1f0 + 1;
  uVar7 = (ulong)local_1f0;
  if (uVar4 <= local_1f0) goto LAB_00109e68;
  goto LAB_00109aab;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::Mesh::createColocalsHash() */

void xatlas::internal::Mesh::createColocalsHash(void)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  float *in_RCX;
  float fVar10;
  float fVar11;
  int extraout_EDX;
  uint extraout_EDX_00;
  byte *pbVar12;
  float *pfVar13;
  long lVar14;
  uint *puVar15;
  float *in_RDI;
  uint *puVar16;
  uint uVar17;
  ulong in_R8;
  long lVar18;
  byte *__src;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  ArrayBase *local_d0;
  ArrayBase *local_c8;
  float local_b0;
  uint *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  float local_84;
  uint local_80;
  undefined1 local_78 [16];
  uint local_68;
  float fStack_64;
  float local_60;
  void *local_58;
  undefined8 local_50;
  float local_48;
  long local_40;
  char *pcVar9;
  
  uVar5 = _LC18;
  fVar3 = in_RDI[0x19];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0xc;
  fStack_64 = 0.0;
  local_60 = 0.0;
  local_58 = (void *)0x0;
  local_50 = _LC18;
  local_48 = 0.0;
  local_78 = (undefined1  [16])0x0;
  local_84 = fVar3;
  if (fVar3 != 0.0) {
    lVar18 = 0;
    lVar7 = 0;
    do {
      __src = (byte *)(*(long *)(in_RDI + 0x16) + lVar18);
      if (lVar7 == 0) {
        uVar17 = (int)local_84 - 1U | (int)local_84 - 1U >> 1;
        uVar17 = uVar17 | uVar17 >> 2;
        uVar17 = uVar17 | uVar17 >> 4;
        uVar4 = (uint)(long)((double)(uint)local_84 * __LC34);
        uVar17 = uVar17 | uVar17 >> 8;
        uVar8 = uVar17 >> 0x10;
        pcVar9 = (char *)(ulong)uVar8;
        uVar17 = (uVar17 | uVar8) + 1;
        if (uVar17 < uVar4) {
          uVar17 = nextPowerOfTwo(uVar4);
          uVar4 = extraout_EDX_00;
        }
        local_80 = uVar17;
        lVar7 = Realloc((void *)0x0,(ulong)uVar17 * 4,uVar4,pcVar9,(int)in_R8);
        lVar14 = 0;
        local_78._0_8_ = lVar7;
        if (local_80 != 0) {
          do {
            *(undefined4 *)(lVar7 + lVar14 * 4) = 0xffffffff;
            lVar14 = lVar14 + 1;
          } while ((uint)lVar14 < local_80);
        }
        if ((uint)local_60 < (uint)local_84) {
          ArrayBase::setArrayCapacity((int)local_78 + 8);
        }
        if ((uint)local_48 < (uint)local_84) {
          ArrayBase::setArrayCapacity((uint)&local_58);
        }
      }
      uVar4 = 0x1505;
      pbVar12 = __src;
      do {
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        uVar4 = uVar4 * 0x1003f + (uint)bVar2;
      } while (pbVar12 != __src + 0xc);
      uVar4 = local_80 - 1 & uVar4;
      in_R8 = CONCAT71((int7)(in_R8 >> 8),__src != (byte *)0x0);
      fStack_64 = (float)((int)fStack_64 + 1);
      uVar17 = (uint)in_R8;
      if ((uint)local_60 < (uint)fStack_64) {
        fVar10 = fStack_64;
        if ((local_60 == 0.0) ||
           (fVar10 = (float)((int)fStack_64 + ((uint)fStack_64 >> 2)), fVar10 != 0.0)) {
          pvVar6 = (void *)Realloc((void *)local_78._8_8_,(ulong)((int)fVar10 * local_68),
                                   (int)fVar10,(char *)(ulong)uVar4,uVar17);
          local_78._8_8_ = pvVar6;
          uVar17 = (uint)(__src != (byte *)0x0) &
                   (uint)CONCAT71((int7)((ulong)pvVar6 >> 8),pvVar6 != (void *)0x0);
          local_60 = fVar10;
          goto LAB_0010a20c;
        }
        if ((void *)local_78._8_8_ != (void *)0x0) {
          Realloc((void *)local_78._8_8_,0,0,(char *)(ulong)uVar4,uVar17);
          local_78._8_8_ = 0;
        }
        local_60 = 0.0;
      }
      else {
        uVar17 = uVar17 & CONCAT31((int3)((uint)local_60 >> 8),(void *)local_78._8_8_ != (void *)0x0
                                  );
        pvVar6 = (void *)local_78._8_8_;
LAB_0010a20c:
        in_R8 = (ulong)uVar17;
        if ((char)uVar17 != '\0') {
          memcpy((void *)((long)pvVar6 + (ulong)(((int)fStack_64 - 1U) * local_68)),__src,
                 (ulong)local_68);
        }
      }
      in_RCX = (float *)(ulong)local_50._4_4_;
      pvVar6 = (void *)(local_78._0_8_ + (ulong)uVar4 * 4);
      fVar10 = (float)(local_50._4_4_ + 1);
      local_50 = CONCAT44(fVar10,(int)local_50);
      if ((uint)local_48 < (uint)fVar10) {
        if ((local_48 == 0.0) ||
           (fVar10 = (float)((int)fVar10 + ((uint)fVar10 >> 2)), fVar10 != 0.0)) {
          local_58 = (void *)Realloc(local_58,(ulong)(uint)((int)fVar10 * (int)local_50),(int)fVar10
                                     ,(char *)in_RCX,(int)in_R8);
          in_RCX = (float *)(ulong)(local_50._4_4_ - 1);
          local_48 = fVar10;
          goto LAB_0010a26e;
        }
        if (local_58 == (void *)0x0) {
          local_48 = 0.0;
        }
        else {
          Realloc(local_58,0,0,(char *)in_RCX,(int)in_R8);
          local_58 = (void *)0x0;
          local_48 = 0.0;
          in_RCX = (float *)(ulong)(local_50._4_4_ - 1);
        }
      }
      else {
LAB_0010a26e:
        if (pvVar6 != (void *)0x0 && local_58 != (void *)0x0) {
          memcpy((void *)((long)local_58 + (ulong)(uint)((int)in_RCX * (int)local_50)),pvVar6,
                 local_50 & 0xffffffff);
          in_RCX = (float *)(ulong)(local_50._4_4_ - 1);
        }
      }
      lVar18 = lVar18 + 0xc;
      *(int *)(local_78._0_8_ + (ulong)uVar4 * 4) = (int)in_RCX;
      lVar7 = local_78._0_8_;
    } while ((ulong)(uint)fVar3 * 0xc != lVar18);
  }
  local_c8 = (ArrayBase *)(local_78 + 8);
  local_d0 = (ArrayBase *)&local_58;
  local_a8 = (uint *)0x0;
  local_a0 = uVar5;
  local_98 = 0;
  ArrayBase::resize((int)in_RDI + 0xa0,SUB41(fVar3,0));
  if ((*(void **)(in_RDI + 0x28) != (void *)0x0) && (in_RDI[0x2b] != 0.0)) {
    memset(*(void **)(in_RDI + 0x28),0xff,(ulong)(uint)((int)in_RDI[0x2b] * (int)in_RDI[0x2a]));
  }
  ArrayBase::resize((int)in_RDI + 0xb8,SUB41(fVar3,0));
  if ((*(void **)(in_RDI + 0x2e) != (void *)0x0) && (in_RDI[0x31] != 0.0)) {
    memset(*(void **)(in_RDI + 0x2e),0xff,(ulong)(uint)((int)in_RDI[0x31] * (int)in_RDI[0x30]));
  }
  fVar10 = (float)in_R8;
  local_b0 = 0.0;
  uVar5 = 0;
  if (fVar3 == 0.0) {
LAB_0010a518:
    ArrayBase::~ArrayBase((ArrayBase *)&local_a8);
    if ((void *)local_78._0_8_ != (void *)0x0) {
      Realloc((void *)local_78._0_8_,0,extraout_EDX,(char *)in_RCX,(int)fVar10);
    }
    ArrayBase::~ArrayBase(local_d0);
    ArrayBase::~ArrayBase(local_c8);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_0010a354:
  if (*(int *)(*(long *)(in_RDI + 0x28) + uVar5 * 4) == -1) {
    local_a0 = local_a0 & 0xffffffff;
    ArrayBase::push_back((uchar *)&local_a8);
    lVar7 = *(long *)(in_RDI + 0x16);
    in_RCX = (float *)(lVar7 + (ulong)(uint)local_b0 * 0xc);
    if (local_78._0_8_ != 0) {
      uVar4 = 0x1505;
      pfVar13 = in_RCX;
      do {
        bVar2 = *(byte *)pfVar13;
        pfVar13 = (float *)((long)pfVar13 + 1);
        uVar4 = uVar4 * 0x1003f + (uint)bVar2;
      } while (pfVar13 != in_RCX + 3);
      fVar10 = *in_RCX;
      fVar19 = in_RCX[1];
      fVar20 = in_RCX[2];
      fVar11 = *(float *)(local_78._0_8_ + (ulong)(uVar4 & local_80 - 1) * 4);
      if (fVar11 != -NAN) {
        do {
          uVar5 = (ulong)(uint)fVar11;
          in_RCX = (float *)(local_78._8_8_ + uVar5 * 0xc);
          if (((fVar10 == *in_RCX) && (fVar19 == in_RCX[1])) &&
             (pvVar6 = local_58, uVar4 = _LC37, fVar20 == in_RCX[2])) goto LAB_0010a438;
          fVar11 = *(float *)((long)local_58 + uVar5 * 4);
        } while (fVar11 != -NAN);
      }
    }
    goto LAB_0010a4d0;
  }
  goto LAB_0010a340;
LAB_0010a438:
  while( true ) {
    if (fVar11 != local_b0) {
      fVar1 = *in_RDI;
      pfVar13 = (float *)(lVar7 + uVar5 * 0xc);
      if ((((float)((uint)(fVar10 - *pfVar13) & uVar4) <= fVar1) &&
          ((float)((uint)(fVar19 - pfVar13[1]) & uVar4) <= fVar1)) &&
         (((float)((uint)(fVar20 - pfVar13[2]) & uVar4) <= fVar1 &&
          (*(int *)(*(long *)(in_RDI + 0x28) + uVar5 * 4) == -1)))) {
        ArrayBase::push_back((uchar *)&local_a8);
        lVar7 = *(long *)(in_RDI + 0x16);
        pfVar13 = (float *)(lVar7 + (ulong)(uint)local_b0 * 0xc);
        fVar10 = *pfVar13;
        fVar19 = pfVar13[1];
        fVar20 = pfVar13[2];
        pvVar6 = local_58;
        uVar4 = _LC37;
      }
    }
    fVar11 = *(float *)((long)pvVar6 + (ulong)(uint)fVar11 * 4);
    if (fVar11 == -NAN) break;
    while( true ) {
      uVar5 = (ulong)(uint)fVar11;
      in_RCX = (float *)(local_78._8_8_ + uVar5 * 0xc);
      if (((fVar10 == *in_RCX) && (fVar19 == in_RCX[1])) && (fVar20 == in_RCX[2])) break;
      fVar11 = *(float *)((long)pvVar6 + uVar5 * 4);
      if (fVar11 == -NAN) goto LAB_0010a4d0;
    }
  }
LAB_0010a4d0:
  in_R8 = (ulong)(uint)local_b0;
  if (local_a0._4_4_ == 1) {
    *(float *)(*(long *)(in_RDI + 0x28) + in_R8 * 4) = local_b0;
    *(float *)(*(long *)(in_RDI + 0x2e) + in_R8 * 4) = local_b0;
    fVar10 = local_b0;
  }
  else {
    puVar16 = local_a8;
    uVar4 = local_a0._4_4_;
    insertionSort<unsigned_int>(local_a8,local_a0._4_4_);
    if (uVar4 != 0) {
      lVar7 = *(long *)(in_RDI + 0x28);
      in_R8 = *(ulong *)(in_RDI + 0x2e);
      in_RCX = (float *)0x0;
      puVar15 = puVar16;
      do {
        uVar17 = (int)in_RCX + 1;
        in_RCX = (float *)(ulong)uVar17;
        *(uint *)(lVar7 + (ulong)*puVar15 * 4) = puVar16[(ulong)in_RCX % (ulong)uVar4];
        *(uint *)(in_R8 + (ulong)*puVar15 * 4) = *puVar16;
        puVar15 = puVar15 + 1;
      } while (uVar17 != uVar4);
    }
LAB_0010a340:
    fVar10 = (float)in_R8;
  }
  local_b0 = (float)((int)local_b0 + 1);
  uVar5 = (ulong)(uint)local_b0;
  if ((uint)fVar3 <= (uint)local_b0) goto LAB_0010a518;
  goto LAB_0010a354;
}



/* xatlas::internal::Mesh::findEdge(unsigned int, unsigned int) const */

ulong __thiscall xatlas::internal::Mesh::findEdge(Mesh *this,uint param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  
  uVar10 = (ulong)param_1;
  lVar4 = *(long *)(this + 0x130);
  if ((lVar4 != 0) &&
     (uVar3 = *(uint *)(lVar4 + (ulong)(param_1 * 0x8000 + param_2 & *(int *)(this + 0x128) - 1U) *
                                4), uVar3 != 0xffffffff)) {
    do {
      uVar6 = (ulong)uVar3;
      puVar1 = (uint *)(*(long *)(this + 0x138) + uVar6 * 8);
      if ((param_1 == *puVar1) && (param_2 == puVar1[1])) {
LAB_0010a8ec:
        if ((*(uint *)(this + 4) & 1) == 0) {
          return uVar6;
        }
        if (*(char *)(*(long *)(this + 0x10) + uVar6 / 3) == '\0') {
          return uVar6;
        }
        while (uVar3 = *(uint *)(*(long *)(this + 0x150) + uVar6 * 4), uVar3 != 0xffffffff) {
          while( true ) {
            uVar6 = (ulong)uVar3;
            puVar1 = (uint *)(*(long *)(this + 0x138) + uVar6 * 8);
            if (param_1 != *puVar1) break;
            if (param_2 == puVar1[1]) goto LAB_0010a8ec;
            uVar3 = *(uint *)(*(long *)(this + 0x150) + uVar6 * 4);
            if (uVar3 == 0xffffffff) goto LAB_0010a940;
          }
        }
        break;
      }
      uVar3 = *(uint *)(*(long *)(this + 0x150) + uVar6 * 4);
    } while (uVar3 != 0xffffffff);
  }
LAB_0010a940:
  if (*(int *)(this + 0xac) != 0) {
    do {
      uVar6 = (ulong)param_2;
      if (lVar4 == 0) {
        do {
          lVar8 = *(long *)(this + 0xa0);
          uVar3 = *(uint *)(lVar8 + uVar6 * 4);
          uVar6 = (ulong)uVar3;
        } while (param_2 != uVar3);
      }
      else {
        iVar9 = (int)uVar10;
        do {
          while( true ) {
            iVar5 = (int)uVar6;
            uVar3 = *(uint *)(lVar4 + (ulong)(iVar9 * 0x8000 + iVar5 & *(int *)(this + 0x128) - 1U)
                                      * 4);
            if (uVar3 == 0xffffffff) break;
            do {
              uVar7 = (ulong)uVar3;
              piVar2 = (int *)(*(long *)(this + 0x138) + uVar7 * 8);
              if ((iVar9 == *piVar2) && (piVar2[1] == iVar5)) {
                do {
                  if ((*(uint *)(this + 4) & 1) == 0) {
                    return uVar7;
                  }
                  if (*(char *)(*(long *)(this + 0x10) + uVar7 / 3) == '\0') {
                    return uVar7;
                  }
                  do {
                    uVar3 = *(uint *)(*(long *)(this + 0x150) + uVar7 * 4);
                    if (uVar3 == 0xffffffff) goto LAB_0010aa40;
                    uVar7 = (ulong)uVar3;
                    piVar2 = (int *)(*(long *)(this + 0x138) + uVar7 * 8);
                  } while ((iVar9 != *piVar2) || (iVar5 != piVar2[1]));
                } while( true );
              }
              uVar3 = *(uint *)(*(long *)(this + 0x150) + uVar7 * 4);
            } while (uVar3 != 0xffffffff);
            lVar8 = *(long *)(this + 0xa0);
            uVar3 = *(uint *)(lVar8 + uVar6 * 4);
            uVar6 = (ulong)uVar3;
            if (uVar3 == param_2) goto LAB_0010aa10;
          }
LAB_0010aa40:
          lVar8 = *(long *)(this + 0xa0);
          uVar3 = *(uint *)(lVar8 + uVar6 * 4);
          uVar6 = (ulong)uVar3;
        } while (param_2 != uVar3);
      }
LAB_0010aa10:
      uVar3 = *(uint *)(lVar8 + uVar10 * 4);
      uVar10 = (ulong)uVar3;
    } while (param_1 != uVar3);
  }
  return 0xffffffff;
}



/* xatlas::internal::Mesh::createBoundaries() */

void __thiscall xatlas::internal::Mesh::createBoundaries(Mesh *this)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long in_FS_OFFSET;
  uint local_58;
  int local_44;
  long local_40;
  
  uVar4 = *(uint *)(this + 0x4c);
  iVar13 = *(int *)(this + 100);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(uint *)(this + 0x114) = uVar4;
  iVar5 = (int)this;
  if (*(uint *)(this + 0x118) < uVar4) {
    ArrayBase::setArrayCapacity(iVar5 + 0x108);
  }
  if (*(uint *)(this + 0x100) < (uint)(long)((float)uVar4 * _LC38)) {
    ArrayBase::setArrayCapacity(iVar5 + 0xf0);
  }
  *(int *)(this + 0xd0) = iVar13;
  uVar9 = iVar13 + 0x1fU >> 5;
  *(uint *)(this + 0xe4) = uVar9;
  if (*(uint *)(this + 0xe8) < uVar9) {
    ArrayBase::setArrayCapacity(iVar5 + 0xd8);
  }
  if ((*(void **)(this + 0xd8) != (void *)0x0) && (*(int *)(this + 0xe4) != 0)) {
    memset(*(void **)(this + 0xd8),0,(ulong)(uint)(*(int *)(this + 0xe4) * *(int *)(this + 0xe0)));
  }
  if (uVar4 != 0) {
    memset(*(void **)(this + 0x108),0xff,(ulong)uVar4 * 4);
  }
  iVar13 = 0;
  local_58 = *(uint *)(this + 0x4c) / 3;
  lVar12 = 0;
  if (2 < *(uint *)(this + 0x4c)) {
    do {
      while ((((byte)this[4] & 1) != 0 && (*(char *)(*(long *)(this + 0x10) + lVar12) != '\0'))) {
        lVar12 = lVar12 + 1;
        iVar13 = iVar13 + 3;
        if (local_58 <= (uint)lVar12) goto LAB_0010abeb;
      }
      lVar10 = lVar12 * 3;
      uVar4 = 0;
      lVar11 = lVar12 * 0xc;
      do {
        local_44 = uVar4 + iVar13;
        uVar4 = uVar4 + 1;
        uVar9 = *(uint *)(*(long *)(this + 0x40) + lVar11);
        pcVar7 = (char *)(ulong)((uVar4 / 3) * 3);
        uVar2 = *(uint *)(*(long *)(this + 0x40) + (ulong)(uVar4 % 3 + iVar13) * 4);
        iVar5 = findEdge(this,uVar2,uVar9);
        if (iVar5 == -1) {
          pvVar6 = *(void **)(this + 0xf0);
          uVar8 = *(int *)(this + 0xfc) + 1;
          *(uint *)(this + 0xfc) = uVar8;
          if (*(uint *)(this + 0x100) < uVar8) {
            if ((*(uint *)(this + 0x100) == 0) || (uVar8 = uVar8 + (uVar8 >> 2), uVar8 != 0)) {
              pvVar6 = (void *)Realloc(pvVar6,(ulong)(uVar8 * *(int *)(this + 0xf8)),uVar8,pcVar7,
                                       (int)lVar10);
              *(void **)(this + 0xf0) = pvVar6;
              *(uint *)(this + 0x100) = uVar8;
              goto LAB_0010ac86;
            }
            if (pvVar6 != (void *)0x0) {
              Realloc(pvVar6,0,0,pcVar7,(int)lVar10);
              *(undefined8 *)(this + 0xf0) = 0;
            }
            *(undefined4 *)(this + 0x100) = 0;
          }
          else {
LAB_0010ac86:
            if (pvVar6 != (void *)0x0) {
              memcpy((void *)((long)pvVar6 +
                             (ulong)((*(int *)(this + 0xfc) + -1) * *(uint *)(this + 0xf8))),
                     &local_44,(ulong)*(uint *)(this + 0xf8));
            }
          }
          lVar3 = *(long *)(this + 0xd8);
          puVar1 = (uint *)(lVar3 + (ulong)(uVar9 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
          puVar1 = (uint *)(lVar3 + (ulong)(uVar2 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
        }
        else {
          *(int *)(*(long *)(this + 0x108) + lVar11) = iVar5;
        }
        lVar11 = lVar11 + 4;
      } while (uVar4 != 3);
      lVar12 = lVar12 + 1;
      iVar13 = iVar13 + 3;
    } while ((uint)lVar12 < local_58);
  }
LAB_0010abeb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* xatlas::internal::Mesh::computeFaceCenter(unsigned int) const */

undefined8 __thiscall xatlas::internal::Mesh::computeFaceCenter(Mesh *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar6 = param_1 * 3;
  lVar4 = *(long *)(this + 0x40);
  lVar5 = *(long *)(this + 0x58);
  puVar1 = (undefined8 *)(lVar5 + (ulong)*(uint *)(lVar4 + (ulong)uVar6 * 4) * 0xc);
  puVar2 = (undefined8 *)(lVar5 + (ulong)*(uint *)(lVar4 + (ulong)(uVar6 + 1) * 4) * 0xc);
  puVar3 = (undefined8 *)(lVar5 + (ulong)*(uint *)(lVar4 + (ulong)(uVar6 + 2) * 4) * 0xc);
  fVar12 = (float)*puVar1;
  fVar13 = (float)((ulong)*puVar1 >> 0x20);
  fVar14 = (float)*puVar2;
  fVar15 = (float)((ulong)*puVar2 >> 0x20);
  fVar11 = *(float *)((long)puVar2 + 4) - *(float *)((long)puVar1 + 4);
  fVar8 = *(float *)(puVar2 + 1) - *(float *)(puVar1 + 1);
  fVar7 = *(float *)((long)puVar1 + 4) - *(float *)((long)puVar3 + 4);
  fVar9 = (float)*puVar3;
  fVar10 = (float)((ulong)*puVar3 >> 0x20);
  fVar11 = SQRT((fVar14 - fVar12) * (fVar14 - fVar12) + fVar11 * fVar11 + fVar8 * fVar8);
  fVar8 = *(float *)((long)puVar3 + 4) - *(float *)((long)puVar2 + 4);
  fVar16 = *(float *)(puVar1 + 1) - *(float *)(puVar3 + 1);
  fVar17 = *(float *)(puVar3 + 1) - *(float *)(puVar2 + 1);
  fVar7 = SQRT((fVar12 - fVar9) * (fVar12 - fVar9) + fVar7 * fVar7 + fVar16 * fVar16);
  fVar16 = SQRT((fVar9 - fVar14) * (fVar9 - fVar14) + fVar8 * fVar8 + fVar17 * fVar17);
  fVar8 = _LC4 / (fVar16 + fVar11 + fVar7);
  return CONCAT44(fVar16 * (fVar15 + fVar10) * fVar8 + fVar11 * (fVar15 + fVar13) * fVar8 +
                  fVar7 * (fVar13 + fVar10) * fVar8,
                  fVar16 * (fVar14 + fVar9) * fVar8 + fVar11 * (fVar14 + fVar12) * fVar8 +
                  fVar7 * (fVar12 + fVar9) * fVar8);
}



/* xatlas::internal::MeshFaceGroups::compute() */

void __thiscall xatlas::internal::MeshFaceGroups::compute(MeshFaceGroups *this)

{
  uint uVar1;
  Mesh *pMVar2;
  long lVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  uint uVar6;
  ulong uVar9;
  uint uVar7;
  uint uVar8;
  void *pvVar10;
  char *pcVar11;
  int iVar12;
  int *piVar13;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  Mesh *this_00;
  ulong in_R8;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint local_88;
  uint local_84;
  uint local_78;
  int local_74;
  uint local_64;
  int local_60;
  uint local_5c;
  void *local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ArrayBase::resize((int)this + 8,SUB41(*(uint *)(*(long *)this + 0x4c) / 3,0));
  if ((*(void **)(this + 8) != (void *)0x0) && (*(int *)(this + 0x14) != 0)) {
    memset(*(void **)(this + 8),0xff,(ulong)(uint)(*(int *)(this + 0x14) * *(int *)(this + 0x10)));
  }
  uVar16 = 0;
  local_58 = (void *)0x0;
  local_50 = 4;
  local_48 = 0;
  uVar6 = *(uint *)(*(long *)this + 0x4c) / 3;
  ArrayBase::resize((int)this + 0x38,SUB41(*(uint *)(*(long *)this + 0x4c) / 3,0));
  local_74 = 0;
  do {
    local_64 = 0xffffffff;
    if (uVar6 <= uVar16) {
LAB_0010afd9:
      ArrayBase::~ArrayBase((ArrayBase *)&local_58);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar9 = (ulong)uVar16;
    piVar13 = (int *)(*(long *)(this + 8) + uVar9 * 4);
    while ((*piVar13 != -1 ||
           ((pcVar11 = *(char **)this, (pcVar11[4] & 1U) != 0 &&
            (pcVar11 = *(char **)(pcVar11 + 0x10), pcVar11[uVar9] != '\0'))))) {
      uVar9 = uVar9 + 1;
      piVar13 = piVar13 + 1;
      if (uVar6 <= (uint)uVar9) goto LAB_0010afd9;
    }
    local_64 = (uint)uVar9;
    uVar16 = local_64 + 1;
    pvVar10 = *(void **)(this + 0x20);
    *piVar13 = local_74;
    uVar9 = uVar9 & 0xffffffff;
    auVar17._8_8_ = uVar9;
    auVar17._0_8_ = pvVar10;
    *(undefined4 *)(*(long *)(this + 0x38) + uVar9 * 4) = 0xffffffff;
    uVar15 = *(int *)(this + 0x2c) + 1;
    *(uint *)(this + 0x2c) = uVar15;
    if (*(uint *)(this + 0x30) < uVar15) {
      if ((*(uint *)(this + 0x30) == 0) || (uVar15 = uVar15 + (uVar15 >> 2), uVar15 != 0)) {
        auVar17 = Realloc(pvVar10,(ulong)(uVar15 * *(int *)(this + 0x28)),local_64,pcVar11,
                          (int)in_R8);
        *(uint *)(this + 0x30) = uVar15;
        *(long *)(this + 0x20) = auVar17._0_8_;
        goto LAB_0010b07e;
      }
      if (pvVar10 != (void *)0x0) {
        Realloc(pvVar10,0,local_64,pcVar11,(int)in_R8);
        *(undefined8 *)(this + 0x20) = 0;
        uVar9 = extraout_RDX_06;
      }
      *(undefined4 *)(this + 0x30) = 0;
    }
    else {
LAB_0010b07e:
      uVar9 = auVar17._8_8_;
      if (auVar17._0_8_ != 0) {
        memcpy((void *)(auVar17._0_8_ +
                       (ulong)((*(int *)(this + 0x2c) + -1) * *(uint *)(this + 0x28))),&local_64,
               (ulong)*(uint *)(this + 0x28));
        uVar9 = extraout_RDX;
      }
    }
    uVar5 = local_50;
    auVar18._8_8_ = uVar9;
    auVar18._0_8_ = local_58;
    local_50 = CONCAT44(1,(int)local_50);
    if ((uint)local_48 == 0) {
      auVar18 = Realloc(local_58,uVar5 & 0xffffffff,(int)uVar9,pcVar11,(int)in_R8);
      local_58 = auVar18._0_8_;
      local_48 = CONCAT44(local_48._4_4_,1);
      iVar14 = local_50._4_4_;
      if (local_58 != (void *)0x0) goto LAB_0010b0c6;
    }
    else {
      iVar14 = 1;
      if (local_58 == (void *)0x0) {
        local_78 = local_64;
        local_60 = 1;
        iVar14 = 1;
        goto LAB_0010b110;
      }
LAB_0010b0c6:
      memcpy((void *)((long)local_58 + (ulong)(uint)((iVar14 + -1) * (int)local_50)),&local_64,
             local_50 & 0xffffffff);
      auVar18._8_8_ = extraout_RDX_00;
      auVar18._0_8_ = local_58;
    }
    local_58 = auVar18._0_8_;
    iVar12 = auVar18._8_4_;
    local_60 = 1;
    local_78 = local_64;
    iVar14 = local_50._4_4_;
    if (local_50._4_4_ != 0) {
LAB_0010b110:
      local_58 = auVar18._0_8_;
      uVar7 = iVar14 - 1;
      uVar15 = *(uint *)((long)local_58 + (ulong)uVar7 * 4);
      local_50 = CONCAT44(uVar7,(int)local_50);
      if ((uint)local_48 < uVar7) {
        if (((uint)local_48 == 0) || (uVar7 = uVar7 + (uVar7 >> 2), uVar7 != 0)) {
          local_58 = (void *)Realloc(local_58,(ulong)(uVar7 * (int)local_50),auVar18._8_4_,pcVar11,
                                     (int)in_R8);
        }
        else if (local_58 != (void *)0x0) {
          if (s_free == (undefined *)0x0) {
            (*(code *)s_realloc)(local_58,0);
          }
          else {
            (*(code *)s_free)();
          }
          local_58 = (void *)0x0;
        }
        local_48 = CONCAT44(local_48._4_4_,uVar7);
      }
      pMVar2 = *(Mesh **)this;
      iVar14 = -1;
      if (((byte)pMVar2[4] & 4) != 0) {
        iVar14 = *(int *)(*(long *)(pMVar2 + 0x28) + (ulong)uVar15 * 4);
      }
      uVar15 = uVar15 * 3;
      pcVar11 = (char *)(ulong)uVar15;
      local_88 = 0;
      uVar7 = 1;
      this_00 = pMVar2;
      local_84 = uVar15;
      do {
        uVar8 = *(uint *)(*(long *)(pMVar2 + 0x40) + (ulong)local_84 * 4);
        in_R8 = (ulong)uVar8;
        uVar8 = Mesh::findEdge(this_00,*(uint *)(*(long *)(pMVar2 + 0x40) +
                                                (ulong)(uVar7 % 3 + uVar15) * 4),uVar8);
        auVar18._8_8_ = extraout_RDX_01;
        auVar18._0_8_ = local_58;
        if (uVar8 != 0xffffffff) {
          uVar1 = *(uint *)(this_00 + 4);
          auVar18._8_4_ = uVar1;
          auVar18._12_4_ = 0;
          local_5c = uVar8 / 3;
          if (((uVar1 & 1) == 0) ||
             (in_R8 = *(ulong *)(this_00 + 0x10), *(char *)(in_R8 + local_5c) == '\0')) {
            uVar9 = (ulong)(uVar1 & 4);
            iVar12 = -1;
            if ((uVar1 & 4) != 0) {
              uVar9 = (ulong)(uVar8 / 3);
              iVar12 = *(int *)(*(long *)(this_00 + 0x28) + uVar9 * 4);
            }
            auVar18._8_8_ = uVar9;
            if (iVar14 == iVar12) {
              auVar18._8_8_ = *(long *)(this + 8);
              piVar13 = (int *)(*(long *)(this + 8) + (ulong)(uVar8 / 3) * 4);
              if (*piVar13 == -1) {
                pcVar11 = (char *)(ulong)local_78;
                *piVar13 = local_74;
                lVar3 = *(long *)(this + 0x38);
                uVar9 = (ulong)local_5c;
                *(undefined4 *)(lVar3 + uVar9 * 4) = 0xffffffff;
                if (local_78 != 0xffffffff) {
                  uVar9 = (ulong)local_78;
                  *(uint *)(lVar3 + uVar9 * 4) = local_5c;
                }
                auVar18._8_8_ = uVar9;
                local_60 = local_60 + 1;
                uVar8 = local_50._4_4_ + 1;
                local_50 = CONCAT44(uVar8,(int)local_50);
                local_78 = local_5c;
                if ((uint)local_48 < uVar8) {
                  if (((uint)local_48 == 0) || (uVar8 = uVar8 + (uVar8 >> 2), uVar8 != 0)) {
                    if (uVar8 * (int)local_50 != 0) {
LAB_0010b2bb:
                      auVar18 = (*(code *)s_realloc)();
                      local_48 = CONCAT44(local_48._4_4_,uVar8);
                      goto LAB_0010b2cd;
                    }
                    if (local_58 != (void *)0x0) {
                      if (s_free == (undefined *)0x0) goto LAB_0010b2bb;
                      (*(code *)s_free)();
                      uVar9 = extraout_RDX_05;
                    }
                    auVar4._8_8_ = 0;
                    auVar4._0_8_ = uVar9;
                    auVar18 = auVar4 << 0x40;
                    local_48 = CONCAT44(local_48._4_4_,uVar8);
                  }
                  else {
                    if (local_58 != (void *)0x0) {
                      if (s_free == (undefined *)0x0) {
                        (*(code *)s_realloc)();
                        uVar9 = extraout_RDX_03;
                      }
                      else {
                        (*(code *)s_free)();
                        uVar9 = extraout_RDX_04;
                      }
                      local_58 = (void *)0x0;
                    }
                    auVar18._8_8_ = uVar9;
                    auVar18._0_8_ = local_58;
                    local_48 = local_48 & 0xffffffff00000000;
                  }
                }
                else {
LAB_0010b2cd:
                  local_58 = auVar18._0_8_;
                  if (local_58 != (void *)0x0) {
                    memcpy((void *)((long)local_58 +
                                   (ulong)(uint)((local_50._4_4_ + -1) * (int)local_50)),&local_5c,
                           local_50 & 0xffffffff);
                    auVar18._8_8_ = extraout_RDX_02;
                    auVar18._0_8_ = local_58;
                  }
                }
              }
            }
          }
        }
        local_58 = auVar18._0_8_;
        iVar12 = auVar18._8_4_;
        uVar8 = uVar7;
        if (local_88 < 3) {
          if (uVar7 == 3) goto code_r0x0010b304;
          local_84 = uVar7 + uVar15;
          uVar8 = uVar7 + 1;
          local_88 = uVar7;
        }
        uVar7 = uVar8;
        this_00 = *(Mesh **)this;
      } while( true );
    }
LAB_0010b319:
    pvVar10 = *(void **)(this + 0x50);
    uVar15 = *(int *)(this + 0x5c) + 1;
    *(uint *)(this + 0x5c) = uVar15;
    if (*(uint *)(this + 0x60) < uVar15) {
      if ((*(uint *)(this + 0x60) == 0) || (uVar15 = uVar15 + (uVar15 >> 2), uVar15 != 0)) {
        pvVar10 = (void *)Realloc(pvVar10,(ulong)(uVar15 * *(int *)(this + 0x58)),iVar12,pcVar11,
                                  (int)in_R8);
        *(uint *)(this + 0x60) = uVar15;
        *(void **)(this + 0x50) = pvVar10;
        goto LAB_0010b352;
      }
      if (pvVar10 != (void *)0x0) {
        Realloc(pvVar10,0,iVar12,pcVar11,(int)in_R8);
        *(undefined8 *)(this + 0x50) = 0;
      }
      *(undefined4 *)(this + 0x60) = 0;
    }
    else {
LAB_0010b352:
      if (pvVar10 != (void *)0x0) {
        memcpy((void *)((long)pvVar10 +
                       (ulong)((*(int *)(this + 0x5c) + -1) * *(uint *)(this + 0x58))),&local_60,
               (ulong)*(uint *)(this + 0x58));
      }
    }
    local_74 = local_74 + 1;
    if ((local_74 == -1) && (s_print != (undefined *)0x0)) {
      (*(code *)s_print)("\rASSERT: %s %s %d\n","group < kInvalid","thirdparty/xatlas/xatlas.cpp",
                         0xb6a);
    }
  } while( true );
code_r0x0010b304:
  iVar14 = local_50._4_4_;
  if (local_50._4_4_ == 0) goto LAB_0010b319;
  goto LAB_0010b110;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::InvalidMeshGeometry::extract(xatlas::internal::Mesh const*,
   xatlas::internal::MeshFaceGroups const*) */

void xatlas::internal::InvalidMeshGeometry::extract(Mesh *param_1,MeshFaceGroups *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  char *in_RCX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  int extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  long in_RDX;
  long lVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 in_R8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint *__src;
  int iVar12;
  long in_FS_OFFSET;
  undefined1 auVar13 [16];
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  uint local_60;
  void *local_58;
  undefined8 local_50;
  uint local_48;
  long local_40;
  
  iVar8 = (int)in_R8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_88 = 0;
  uVar9 = *(uint *)(param_2 + 0x4c) / 3;
  iVar12 = (int)param_1;
  if (*(uint *)(param_2 + 0x4c) < 3) {
    uVar1 = 0;
    ArrayBase::resize(iVar12 + 0x18,false);
    local_84 = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    uVar9 = extraout_EDX_05;
    goto LAB_0010b5e6;
  }
  uVar1 = 0;
  do {
    iVar8 = (int)in_R8;
    if (in_RDX == 0) {
      while( true ) {
        if ((*(uint *)(param_2 + 4) & 1) == 0) goto LAB_0010b59c;
        in_RCX = *(char **)(param_2 + 0x10);
        if (in_RCX[uVar1] != '\0') break;
        local_88 = local_88 + 1;
        uVar1 = (ulong)local_88;
        if (uVar9 <= local_88) goto LAB_0010b5ac;
      }
    }
    else {
      while (*(int *)(*(long *)(in_RDX + 8) + uVar1 * 4) != -1) {
        local_88 = local_88 + 1;
        uVar1 = (ulong)local_88;
        if (uVar9 <= local_88) goto LAB_0010b5ac;
      }
    }
    ArrayBase::push_back((uchar *)param_1);
    iVar8 = (int)in_R8;
    local_88 = local_88 + 1;
    uVar1 = (ulong)local_88;
  } while (local_88 < uVar9);
  goto LAB_0010b5ac;
LAB_0010b59c:
  do {
    local_88 = local_88 + 1;
  } while (local_88 < uVar9);
LAB_0010b5ac:
  uVar1 = (ulong)*(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0xc) * 3;
  ArrayBase::resize(iVar12 + 0x18,SUB41(uVar5,0));
  uVar9 = *(uint *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  local_84 = uVar5;
  if (uVar9 < uVar5) {
    local_84 = uVar9;
  }
  uVar9 = extraout_EDX;
  if (*(uint *)(param_1 + 0x40) < local_84) {
    ArrayBase::setArrayCapacity(iVar12 + 0x30);
    uVar9 = extraout_EDX_00;
  }
LAB_0010b5e6:
  local_88 = 4;
  local_80 = 0;
  local_68 = _LC18;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = _LC18;
  local_48 = 0;
  local_78 = (undefined1  [16])0x0;
  if ((int)uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    in_RCX = (char *)0x0;
    lVar11 = 0;
    iVar12 = 0;
    do {
      iVar10 = 0;
      iVar8 = *(int *)(*(long *)param_1 + lVar11) * 3;
      do {
        uVar5 = local_84;
        lVar4 = *(long *)(param_2 + 0x40);
        uVar9 = *(uint *)(lVar4 + (ulong)(uint)(iVar8 + iVar10) * 4);
        local_8c = uVar9;
        if (in_RCX == (char *)0x0) {
          uVar7 = local_84 - 1 | local_84 - 1 >> 1;
          uVar7 = uVar7 | uVar7 >> 2;
          uVar7 = uVar7 | uVar7 >> 4;
          uVar7 = uVar7 | uVar7 >> 8;
          uVar6 = (uVar7 | uVar7 >> 0x10) + 1;
          uVar7 = (uint)(long)((double)local_84 * __LC34);
          if (uVar6 < uVar7) {
            uVar6 = nextPowerOfTwo(uVar7);
            lVar4 = extraout_RDX_00;
          }
          local_80 = uVar6;
          auVar13 = Realloc((void *)0x0,(ulong)uVar6 << 2,(int)lVar4,in_RCX,iVar8);
          lVar4 = auVar13._8_8_;
          local_78._0_8_ = auVar13._0_8_;
          if (uVar6 != 0) {
            memset(auVar13._0_8_,0xff,(ulong)uVar6 << 2);
            lVar4 = extraout_RDX;
          }
          if (local_60 < uVar5) {
            ArrayBase::setArrayCapacity((int)local_78 + 8);
            lVar4 = extraout_RDX_02;
            uVar5 = local_84;
          }
          if (local_48 < uVar5) {
            ArrayBase::setArrayCapacity((uint)&local_58);
            __src = (uint *)(local_78._0_8_ + (ulong)(local_80 - 1 & uVar9) * 4);
            in_RCX = (char *)local_78._0_8_;
            lVar4 = extraout_RDX_01;
          }
          else {
            __src = (uint *)(local_78._0_8_ + (ulong)(local_80 - 1 & uVar9) * 4);
            in_RCX = (char *)local_78._0_8_;
          }
        }
        else {
          __src = (uint *)(in_RCX + (ulong)(local_80 - 1 & uVar9) * 4);
          for (uVar5 = *__src; uVar5 != 0xffffffff;
              uVar5 = *(uint *)((long)local_58 + (ulong)uVar5 * 4)) {
            if (uVar9 == *(uint *)(local_78._8_8_ + (ulong)uVar5 * 4)) goto LAB_0010b6e4;
          }
        }
        uVar7 = local_48;
        pvVar3 = local_58;
        uVar5 = local_68._4_4_;
        uVar9 = local_68._4_4_ + 1;
        local_68 = CONCAT44(uVar9,(int)local_68);
        pvVar2 = (void *)local_78._8_8_;
        if (local_60 < uVar9) {
          if ((local_60 == 0) || (uVar9 = uVar9 + (uVar9 >> 2), uVar9 != 0)) {
            pvVar2 = (void *)Realloc((void *)local_78._8_8_,(ulong)(uVar9 * (int)local_68),
                                     (int)lVar4,in_RCX,iVar8);
            local_78._8_8_ = pvVar2;
            local_60 = uVar9;
            goto LAB_0010b7e5;
          }
          if ((void *)local_78._8_8_ == (void *)0x0) {
            local_60 = 0;
          }
          else {
            Realloc((void *)local_78._8_8_,0,(int)lVar4,in_RCX,iVar8);
            local_78._8_8_ = 0;
            local_60 = 0;
          }
        }
        else {
LAB_0010b7e5:
          if (pvVar2 != (void *)0x0) {
            memcpy((void *)((long)pvVar2 + (ulong)(uVar5 * (int)local_68)),&local_8c,
                   local_68 & 0xffffffff);
          }
        }
        uVar6 = local_50._4_4_;
        uVar9 = local_50._4_4_ + 1;
        local_50 = CONCAT44(uVar9,(int)local_50);
        if (uVar7 < uVar9) {
          if ((uVar7 == 0) || (uVar9 = uVar9 + (uVar9 >> 2), uVar9 != 0)) {
            pvVar3 = (void *)Realloc(pvVar3,(ulong)(uVar9 * (int)local_50),uVar9,in_RCX,iVar8);
            local_58 = pvVar3;
            local_48 = uVar9;
            goto LAB_0010b856;
          }
          if (pvVar3 == (void *)0x0) {
            local_48 = 0;
          }
          else {
            Realloc(pvVar3,0,0,in_RCX,iVar8);
            local_58 = (void *)0x0;
            local_48 = 0;
            uVar9 = extraout_EDX_04;
          }
        }
        else {
LAB_0010b856:
          if (pvVar3 != (void *)0x0 && __src != (uint *)0x0) {
            memcpy((void *)((ulong)(uVar6 * (int)local_50) + (long)pvVar3),__src,
                   local_50 & 0xffffffff);
            uVar9 = extraout_EDX_03;
          }
        }
        *__src = uVar6;
        pvVar3 = *(void **)(param_1 + 0x30);
        uVar7 = *(int *)(param_1 + 0x3c) + 1;
        *(uint *)(param_1 + 0x3c) = uVar7;
        if (*(uint *)(param_1 + 0x40) < uVar7) {
          if ((*(uint *)(param_1 + 0x40) == 0) || (uVar7 = uVar7 + (uVar7 >> 2), uVar7 != 0)) {
            pvVar3 = (void *)Realloc(pvVar3,(ulong)(uVar7 * *(int *)(param_1 + 0x38)),uVar9,in_RCX,
                                     iVar8);
            *(void **)(param_1 + 0x30) = pvVar3;
            *(uint *)(param_1 + 0x40) = uVar7;
            goto LAB_0010b8fa;
          }
          if (pvVar3 == (void *)0x0) {
            *(undefined4 *)(param_1 + 0x40) = 0;
          }
          else {
            Realloc(pvVar3,0,uVar9,in_RCX,iVar8);
            *(long *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x40) = 0;
          }
        }
        else {
LAB_0010b8fa:
          if (pvVar3 != (void *)0x0) {
            memcpy((void *)((long)pvVar3 +
                           (ulong)((*(int *)(param_1 + 0x3c) + -1) * *(uint *)(param_1 + 0x38))),
                   &local_8c,(ulong)*(uint *)(param_1 + 0x38));
          }
        }
LAB_0010b6e4:
        uVar9 = iVar10 + iVar12;
        iVar10 = iVar10 + 1;
        *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar9 * 4) = uVar5;
      } while (iVar10 != 3);
      iVar12 = iVar12 + 3;
      lVar11 = lVar11 + 4;
    } while (uVar1 * 4 != lVar11);
    if (in_RCX != (char *)0x0) {
      Realloc(in_RCX,0,uVar9,in_RCX,iVar8);
      uVar9 = extraout_EDX_01;
    }
    pvVar3 = (void *)local_78._8_8_;
  }
  Realloc(local_58,0,uVar9,in_RCX,iVar8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Realloc(pvVar3,0,extraout_EDX_02,in_RCX,iVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::Progress::update() */

ulong __thiscall xatlas::internal::Progress::update(Progress *this)

{
  Progress PVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong in_RAX;
  ulong uVar5;
  bool bVar6;
  float fVar7;
  
  if (*(long *)(this + 8) == 0) {
    return in_RAX;
  }
  fVar7 = ((float)*(uint *)(this + 0x18) / (float)*(uint *)(this + 0x1c)) * __LC35;
  if ((float)((uint)fVar7 & _LC37) < _LC36) {
    fVar7 = (float)((uint)((float)(int)fVar7 + (float)(-(uint)((float)(int)fVar7 < fVar7) & _LC4)) |
                   ~_LC37 & (uint)fVar7);
  }
  uVar5 = (ulong)fVar7;
  uVar3 = (uint)uVar5;
  if (uVar3 != *(uint *)(this + 0x20)) {
    uVar4 = *(uint *)(this + 0x20);
    do {
      if (uVar3 <= uVar4) break;
      LOCK();
      uVar2 = *(uint *)(this + 0x20);
      bVar6 = uVar4 == uVar2;
      if (bVar6) {
        *(uint *)(this + 0x20) = uVar3;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar6);
    uVar5 = (**(code **)(this + 8))
                      (*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x20),
                       *(undefined8 *)(this + 0x10));
    if ((char)uVar5 == '\0') {
      LOCK();
      PVar1 = *this;
      *this = (Progress)0x1;
      UNLOCK();
      return (ulong)(byte)PVar1;
    }
  }
  return uVar5;
}



/* xatlas::internal::TaskScheduler::TaskScheduler() */

void __thiscall xatlas::internal::TaskScheduler::TaskScheduler(TaskScheduler *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  uint uVar8;
  char *in_RCX;
  long lVar9;
  int extraout_EDX;
  long lVar10;
  undefined8 extraout_RDX;
  int in_R8D;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  long *local_48;
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 10);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0x68;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x20] = (TaskScheduler)0x0;
  *in_FS_OFFSET = 0;
  iVar4 = std::thread::hardware_concurrency();
  *(int *)(this + 0x24) = iVar4 << 2;
  lVar5 = Realloc((void *)0x0,(ulong)(uint)(iVar4 << 2) * 0x38,extraout_EDX,in_RCX,in_R8D);
  *(long *)this = lVar5;
  uVar3 = _LC41;
  if (*(int *)(this + 0x24) != 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      pauVar6 = (undefined1 (*) [16])(lVar5 + lVar10);
      pauVar6[1] = (undefined1  [16])0x0;
      *(undefined8 *)pauVar6[3] = 0;
      *(undefined8 *)pauVar6[1] = uVar3;
      *pauVar6 = (undefined1  [16])0x0;
      pauVar6[2] = (undefined1  [16])0x0;
      LOCK();
      (*pauVar6)[0] = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)(*(long *)this + 0x28 + lVar10) = 0;
      UNLOCK();
      lVar5 = *(long *)this;
      *(undefined8 *)(lVar5 + 0x30 + lVar10) = 0;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x38;
    } while (uVar8 < *(uint *)(this + 0x24));
  }
  uVar8 = std::thread::hardware_concurrency();
  if (uVar8 < 2) {
    *(undefined4 *)(this + 0x14) = 1;
    if (*(int *)(this + 0x18) == 0) {
LAB_0010c025:
      ArrayBase::setArrayCapacity((int)this + 8);
      uVar8 = *(uint *)(this + 0x14);
      goto LAB_0010c031;
    }
  }
  else {
    iVar4 = std::thread::hardware_concurrency();
    uVar8 = iVar4 - 1;
    *(uint *)(this + 0x14) = uVar8;
    if (*(uint *)(this + 0x18) < uVar8) goto LAB_0010c025;
LAB_0010c031:
    if (uVar8 == 0) goto LAB_0010c001;
  }
  lVar5 = *(long *)(this + 8);
  lVar10 = 0;
  uVar8 = 0;
  do {
    puVar7 = (undefined8 *)(lVar5 + lVar10);
    for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (ulong)bVar11 * -2 + 1;
    }
    std::condition_variable::condition_variable
              ((condition_variable *)((undefined8 *)(lVar5 + lVar10) + 6));
    LOCK();
    puVar1 = (undefined1 *)(*(long *)(this + 8) + 0x60 + lVar10);
    uVar2 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
    puVar7 = (undefined8 *)(*(code *)s_realloc)(0,8,extraout_RDX,uVar2);
    lVar5 = *(long *)(this + 8);
    *puVar7 = 0;
    uVar8 = uVar8 + 1;
    local_48 = (long *)operator_new(0x28);
    *local_48 = (long)&PTR___State_impl_001204c0;
    *(uint *)(local_48 + 1) = uVar8;
    local_48[2] = lVar5 + lVar10;
    local_48[3] = (long)this;
    local_48[4] = (long)workerThread;
    std::thread::_M_start_thread(puVar7,&local_48,std::thread::_M_thread_deps_never_run);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    lVar5 = *(long *)(this + 8);
    *(undefined8 **)(lVar5 + lVar10) = puVar7;
    lVar10 = lVar10 + 0x68;
  } while (uVar8 < *(uint *)(this + 0x14));
LAB_0010c001:
  if (local_40 != *(long *)(in_FS_OFFSET + 10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* xatlas::internal::TaskScheduler::createTaskGroup(void*, unsigned int) */

ulong xatlas::internal::TaskScheduler::createTaskGroup(void *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  uint in_EDX;
  ulong uVar6;
  undefined4 in_register_00000034;
  int in_R8D;
  long in_FS_OFFSET;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)param_1 + 0x24) != 0) {
    uVar6 = 0;
    do {
                    /* WARNING: Load size is inaccurate */
      pcVar1 = (char *)(*param_1 + uVar6 * 0x38);
      LOCK();
      cVar2 = *pcVar1;
      if (cVar2 == '\x01') {
        *pcVar1 = '\0';
      }
      UNLOCK();
      if (cVar2 == '\x01') {
        do {
          LOCK();
          bVar3 = pcVar1[0x24];
          pcVar1[0x24] = 1;
          UNLOCK();
        } while (bVar3 != 0);
        pcVar1[0x20] = '\0';
        pcVar1[0x21] = '\0';
        pcVar1[0x22] = '\0';
        pcVar1[0x23] = '\0';
        pcVar1[0x14] = '\0';
        pcVar1[0x15] = '\0';
        pcVar1[0x16] = '\0';
        pcVar1[0x17] = '\0';
        if (*(uint *)(pcVar1 + 0x18) < in_EDX) {
          uVar5 = Realloc(*(void **)(pcVar1 + 8),(ulong)(in_EDX * *(int *)(pcVar1 + 0x10)),
                          (uint)bVar3,(char *)0x1,in_R8D);
          *(uint *)(pcVar1 + 0x18) = in_EDX;
          *(undefined8 *)(pcVar1 + 8) = uVar5;
        }
        pcVar1[0x24] = '\0';
        *(ulong *)(pcVar1 + 0x30) = CONCAT44(in_register_00000034,param_2);
        LOCK();
        pcVar1[0x28] = '\0';
        pcVar1[0x29] = '\0';
        pcVar1[0x2a] = '\0';
        pcVar1[0x2b] = '\0';
        UNLOCK();
        uVar6 = uVar6 & 0xffffffff;
        goto LAB_0010c0fb;
      }
      uVar6 = uVar6 + 1;
    } while ((uint)uVar6 < *(uint *)((long)param_1 + 0x24));
  }
  uVar6 = 0xffffffff;
LAB_0010c0fb:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* xatlas::internal::param::runMeshComputeChartsTask(void*, void*) */

void xatlas::internal::param::runMeshComputeChartsTask(void *param_1,void *param_2)

{
  char cVar1;
  MeshFaceGroups *pMVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  MeshFaceGroups *this;
  undefined4 *puVar8;
  char *pcVar9;
  void *pvVar10;
  char *pcVar11;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar12;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  uint uVar13;
  int iVar14;
  ulong in_R8;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  ArrayBase *local_130;
  uint local_fc;
  code *local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (**(char **)((long)param_1 + 0x10) == '\0') {
    this = (MeshFaceGroups *)(*(code *)s_realloc)(0);
    uVar7 = _LC18;
                    /* WARNING: Load size is inaccurate */
    uVar4 = *param_2;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = uVar4;
    *(undefined8 *)(this + 0x10) = uVar7;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = uVar7;
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = uVar7;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = uVar7;
    *(undefined4 *)(this + 0x60) = 0;
    MeshFaceGroups::compute(this);
    iVar14 = (int)in_R8;
    uVar3 = *(uint *)(this + 0x5c);
    pcVar11 = (char *)(ulong)uVar3;
    iVar12 = extraout_EDX;
    if (**(char **)((long)param_1 + 0x10) == '\0') {
      ArrayBase::resize((uint)*(undefined8 *)((long)param_2 + 8),SUB41(uVar3,0));
      uVar4 = _LC32;
      if (uVar3 == 0) {
                    /* WARNING: Load size is inaccurate */
        InvalidMeshGeometry::extract(*(Mesh **)((long)param_2 + 0x10),*param_2);
        local_e0._4_4_ = 0;
        local_e8 = 0;
        local_e0 = 4;
        local_d8 = 0;
      }
      else {
        pcVar9 = (char *)0x0;
        do {
          pcVar11 = pcVar9;
          puVar8 = (undefined4 *)(*(code *)s_realloc)(0,0x50);
                    /* WARNING: Load size is inaccurate */
          pMVar2 = *param_2;
          *(undefined8 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 0xe) = 0;
          *puVar8 = (int)pcVar11;
          *(MeshFaceGroups **)(puVar8 + 2) = pMVar2;
          *(MeshFaceGroups **)(puVar8 + 4) = this;
          plVar5 = *(long **)((long)param_2 + 8);
          puVar8[6] = (int)pcVar11;
          lVar15 = *plVar5;
          *(undefined8 *)(puVar8 + 10) = uVar7;
          puVar8[0xc] = 0;
          *(undefined8 *)(puVar8 + 0x10) = uVar4;
          puVar8[0x12] = 0;
          *(undefined4 **)(lVar15 + (long)pcVar11 * 8) = puVar8;
          pcVar9 = pcVar11 + 1;
        } while ((char *)(ulong)uVar3 != pcVar11 + 1);
        InvalidMeshGeometry::extract(*(Mesh **)((long)param_2 + 0x10),pMVar2);
        local_e0 = CONCAT44(uVar3,4);
        local_e8 = 0;
        local_d8 = 0;
        ArrayBase::setArrayCapacity((uint)&local_e8);
        lVar15 = **(long **)((long)param_2 + 8);
        pcVar9 = (char *)0x0;
        do {
          lVar6 = *(long *)(lVar15 + (long)pcVar9 * 8);
          in_R8 = (ulong)*(uint *)(lVar6 + 0x18);
          *(float *)(local_e8 + (long)pcVar9 * 4) =
               (float)*(uint *)(*(long *)(*(long *)(lVar6 + 0x10) + 0x50) + in_R8 * 4);
          bVar16 = pcVar11 != pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (bVar16);
      }
      local_130 = (ArrayBase *)&local_e8;
      local_70 = uVar7;
      local_58 = uVar7;
      local_78 = 0;
      local_68 = 0;
      local_60 = 0;
      local_50 = 0;
      local_48 = 0;
      RadixSort::sort(local_88,local_e8,local_e0._4_4_);
      local_b8 = *(undefined8 *)((long)param_1 + 0x10);
      pvStack_b0 = *(void **)((long)param_1 + 0x18);
      local_a8 = *(undefined8 *)((long)param_1 + 0x20);
      uStack_a0 = *(undefined8 *)((long)param_1 + 0x28);
                    /* WARNING: Load size is inaccurate */
      local_c8 = *param_1;
      uStack_c0 = *(undefined8 *)((long)param_1 + 8);
      local_98 = *(undefined8 *)((long)param_1 + 0x30);
      local_fc = TaskScheduler::createTaskGroup(pvStack_b0,(uint)&local_c8);
      iVar14 = (int)in_R8;
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        local_f0 = *(undefined8 *)(**(long **)((long)param_2 + 8) + (ulong)uVar3 * 8);
        local_f8 = runChartGroupComputeChartsTask;
        plVar5 = *(long **)((long)param_1 + 0x18);
        lVar15 = *plVar5 + (ulong)local_fc * 0x38;
        do {
          LOCK();
          cVar1 = *(char *)(lVar15 + 0x24);
          *(char *)(lVar15 + 0x24) = '\x01';
          UNLOCK();
        } while (cVar1 != '\0');
        pvVar10 = *(void **)(lVar15 + 8);
        uVar13 = *(int *)(lVar15 + 0x14) + 1;
        *(uint *)(lVar15 + 0x14) = uVar13;
        if (*(uint *)(lVar15 + 0x18) < uVar13) {
          if ((*(uint *)(lVar15 + 0x18) == 0) || (uVar13 = uVar13 + (uVar13 >> 2), uVar13 != 0)) {
            pvVar10 = (void *)Realloc(pvVar10,(ulong)(uVar13 * *(int *)(lVar15 + 0x10)),uVar13,
                                      pcVar11,(int)in_R8);
            *(void **)(lVar15 + 8) = pvVar10;
            *(uint *)(lVar15 + 0x18) = uVar13;
            goto LAB_0010c4de;
          }
          if (pvVar10 != (void *)0x0) {
            Realloc(pvVar10,0,0,pcVar11,(int)in_R8);
            *(undefined8 *)(lVar15 + 8) = 0;
          }
          *(undefined4 *)(lVar15 + 0x18) = 0;
        }
        else {
LAB_0010c4de:
          if (pvVar10 != (void *)0x0) {
            memcpy((void *)((long)pvVar10 +
                           (ulong)((*(int *)(lVar15 + 0x14) + -1) * *(uint *)(lVar15 + 0x10))),
                   &local_f8,(ulong)*(uint *)(lVar15 + 0x10));
          }
        }
        *(undefined1 *)(lVar15 + 0x24) = 0;
        LOCK();
        *(int *)(lVar15 + 0x28) = *(int *)(lVar15 + 0x28) + 1;
        UNLOCK();
        lVar15 = 0;
        if (*(int *)((long)plVar5 + 0x14) != 0) {
          do {
            LOCK();
            *(undefined1 *)(plVar5[1] + 0x60 + lVar15 * 0x68) = 1;
            UNLOCK();
            lVar15 = lVar15 + 1;
            std::condition_variable::notify_one();
          } while ((uint)lVar15 < *(uint *)((long)plVar5 + 0x14));
        }
        iVar14 = (int)in_R8;
      }
      TaskScheduler::wait((TaskScheduler *)**(undefined8 **)((long)param_1 + 0x18),
                          (TaskGroupHandle *)&local_fc);
      ArrayBase::~ArrayBase((ArrayBase *)&local_60);
      ArrayBase::~ArrayBase((ArrayBase *)&local_78);
      ArrayBase::~ArrayBase(local_130);
      iVar12 = extraout_EDX_00;
    }
    Realloc(*(void **)(this + 0x50),0,iVar12,pcVar11,iVar14);
    Realloc(*(void **)(this + 0x38),0,extraout_EDX_01,pcVar11,iVar14);
    Realloc(*(void **)(this + 0x20),0,extraout_EDX_02,pcVar11,iVar14);
    Realloc(*(void **)(this + 8),0,extraout_EDX_03,pcVar11,iVar14);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Realloc(this,0,extraout_EDX_04,pcVar11,iVar14);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::TaskScheduler::run(xatlas::internal::TaskGroupHandle, xatlas::internal::Task
   const&) */

void xatlas::internal::TaskScheduler::run
               (long *param_1,uint param_2,void *param_3,undefined8 param_4,int param_5)

{
  byte bVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *param_1 + (ulong)param_2 * 0x38;
  do {
    LOCK();
    bVar1 = *(byte *)(lVar3 + 0x24);
    *(byte *)(lVar3 + 0x24) = 1;
    UNLOCK();
  } while (bVar1 != 0);
  pvVar2 = *(void **)(lVar3 + 8);
  uVar4 = *(int *)(lVar3 + 0x14) + 1;
  *(uint *)(lVar3 + 0x14) = uVar4;
  if (*(uint *)(lVar3 + 0x18) < uVar4) {
    if ((*(uint *)(lVar3 + 0x18) != 0) && (uVar4 = uVar4 + (uVar4 >> 2), uVar4 == 0)) {
      if (pvVar2 != (void *)0x0) {
        Realloc(pvVar2,0,(uint)bVar1,(char *)0x1,param_5);
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      *(undefined4 *)(lVar3 + 0x18) = 0;
      goto LAB_0010c721;
    }
    pvVar2 = (void *)Realloc(pvVar2,(ulong)(uVar4 * *(int *)(lVar3 + 0x10)),(uint)bVar1,(char *)0x1,
                             param_5);
    *(uint *)(lVar3 + 0x18) = uVar4;
    *(void **)(lVar3 + 8) = pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    memcpy((void *)((long)pvVar2 + (ulong)((*(int *)(lVar3 + 0x14) + -1) * *(uint *)(lVar3 + 0x10)))
           ,param_3,(ulong)*(uint *)(lVar3 + 0x10));
  }
LAB_0010c721:
  *(undefined1 *)(lVar3 + 0x24) = 0;
  LOCK();
  *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + 1;
  UNLOCK();
  lVar3 = 0;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    do {
      LOCK();
      *(undefined1 *)(param_1[1] + 0x60 + lVar3 * 0x68) = 1;
      UNLOCK();
      lVar3 = lVar3 + 1;
      std::condition_variable::notify_one();
    } while ((uint)lVar3 < *(uint *)((long)param_1 + 0x14));
  }
  return;
}



/* xatlas::internal::UniformGrid2::traverse(xatlas::internal::Vector2, xatlas::internal::Vector2) */

void __thiscall
xatlas::internal::UniformGrid2::traverse(undefined8 param_1,undefined8 param_2,UniformGrid2 *this)

{
  float fVar1;
  void *pvVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong in_R8;
  ulong uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_68;
  float local_64;
  uint local_58;
  float local_54;
  float local_50;
  int local_44;
  long local_40;
  
  fVar15 = (float)((ulong)param_1 >> 0x20);
  fVar14 = (float)((ulong)param_2 >> 0x20);
  fVar17 = fVar14 - fVar15;
  fVar18 = (float)param_2 - (float)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = SQRT(fVar18 * fVar18 + fVar17 * fVar17);
  if (local_54 <= 0.0) {
    local_50 = 0.0;
    local_54 = 0.0;
  }
  else {
    local_54 = _LC4 / local_54;
    local_50 = fVar17 * local_54;
    local_54 = local_54 * fVar18;
  }
  fVar1 = *(float *)(this + 0x38);
  uVar6 = *(int *)(this + 0x44) - 1;
  fVar16 = (float)param_1 - *(float *)(this + 0x3c);
  uVar7 = -(uint)(fVar18 < 0.0) | 1;
  uVar9 = -(uint)(fVar17 < 0.0) | 1;
  uVar13 = 0;
  if ((0.0 <= fVar16 / fVar1) &&
     (uVar8 = (ulong)(fVar16 / fVar1), in_R8 = uVar8 & 0xffffffff, uVar13 = in_R8,
     uVar6 <= (uint)uVar8)) {
    in_R8 = (ulong)uVar6;
    uVar13 = in_R8;
  }
  pcVar3 = (char *)(ulong)*(uint *)(this + 0x48);
  fVar15 = fVar15 - *(float *)(this + 0x40);
  uVar4 = *(uint *)(this + 0x48) - 1;
  iVar11 = (int)uVar13;
  if (fVar15 / fVar1 < 0.0) {
    pcVar10 = (char *)0x0;
    local_44 = iVar11;
  }
  else {
    uVar8 = (ulong)(fVar15 / fVar1);
    pcVar3 = (char *)(uVar8 & 0xffffffff);
    if (uVar4 <= (uint)uVar8) {
      pcVar3 = (char *)(ulong)uVar4;
    }
    pcVar10 = pcVar3;
    local_44 = *(int *)(this + 0x44) * (int)pcVar3 + iVar11;
  }
  local_58 = 0;
  fVar17 = ((float)param_2 - *(float *)(this + 0x3c)) / fVar1;
  if (0.0 <= fVar17) {
    uVar8 = (ulong)fVar17;
    pcVar3 = (char *)(uVar8 & 0xffffffff);
    if (uVar6 <= (uint)uVar8) {
      pcVar3 = (char *)(ulong)uVar6;
    }
    local_58 = (uint)pcVar3;
  }
  fVar14 = (fVar14 - *(float *)(this + 0x40)) / fVar1;
  uVar6 = 0;
  if ((0.0 <= fVar14) && (uVar6 = (uint)(long)fVar14, uVar4 <= uVar6)) {
    uVar6 = uVar4;
  }
  if (uVar7 == 1) {
    fVar16 = (float)(iVar11 + 1) * fVar1 - fVar16;
  }
  else {
    fVar16 = fVar16 - (float)uVar13 * fVar1;
  }
  if (uVar9 == 1) {
    fVar15 = (float)((int)pcVar10 + 1) * fVar1 - fVar15;
  }
  else {
    fVar15 = fVar15 - (float)(long)pcVar10 * fVar1;
  }
  if ((_LC8 < local_54) || (local_54 < _LC42)) {
    local_64 = (fVar16 * (float)(int)uVar7) / local_54;
    local_54 = ((float)(int)uVar7 * fVar1) / local_54;
  }
  else {
    local_54 = _LC9;
    local_64 = _LC9;
  }
  if ((_LC8 < local_50) || (local_50 < _LC42)) {
    local_68 = (fVar15 * (float)(int)uVar9) / local_50;
    local_50 = ((float)(int)uVar9 * fVar1) / local_50;
  }
  else {
    local_50 = _LC9;
    local_68 = _LC9;
  }
  *(undefined4 *)(this + 0xa4) = 0;
  ArrayBase::push_back((uchar *)(this + 0x98));
LAB_0010c9d0:
  if ((uint)pcVar10 != uVar6) goto LAB_0010c9e2;
LAB_0010c9d5:
  if ((uint)uVar13 != local_58) {
LAB_0010c9e2:
    uVar4 = (uint)pcVar10;
    if (local_68 <= local_64) goto LAB_0010cae8;
LAB_0010c9f6:
    local_64 = local_64 + local_54;
    uVar5 = *(uint *)(this + 0x44);
    uVar4 = (int)uVar13 + uVar7;
    uVar13 = (ulong)uVar4;
    if (uVar4 < uVar5) {
      do {
        uVar4 = (uint)pcVar10;
        if (*(uint *)(this + 0x48) <= uVar4) break;
        uVar12 = (uint)uVar13;
        if (uVar7 == 0xffffffff) {
          pcVar3 = (char *)(ulong)local_58;
          if (uVar12 < local_58) break;
          if (uVar9 != 0xffffffff) goto LAB_0010ca3a;
LAB_0010cb4b:
          if (uVar4 < uVar6) break;
        }
        else {
          if (local_58 < uVar12) break;
          if (uVar9 == 0xffffffff) goto LAB_0010cb4b;
LAB_0010ca3a:
          if (uVar6 < uVar4) break;
        }
        pvVar2 = *(void **)(this + 0x98);
        local_44 = uVar5 * uVar4 + uVar12;
        uVar5 = *(int *)(this + 0xa4) + 1;
        *(uint *)(this + 0xa4) = uVar5;
        if (*(uint *)(this + 0xa8) < uVar5) {
          if ((*(uint *)(this + 0xa8) != 0) && (uVar5 = uVar5 + (uVar5 >> 2), uVar5 == 0)) {
            if (pvVar2 != (void *)0x0) {
              Realloc(pvVar2,0,0,pcVar3,(int)in_R8);
              *(undefined8 *)(this + 0x98) = 0;
            }
            *(undefined4 *)(this + 0xa8) = 0;
            goto LAB_0010c9d0;
          }
          pvVar2 = (void *)Realloc(pvVar2,(ulong)(uVar5 * *(int *)(this + 0xa0)),uVar5,pcVar3,
                                   (int)in_R8);
          *(void **)(this + 0x98) = pvVar2;
          *(uint *)(this + 0xa8) = uVar5;
        }
        if (pvVar2 == (void *)0x0) goto LAB_0010c9d0;
        memcpy((void *)((long)pvVar2 +
                       (ulong)((*(int *)(this + 0xa4) + -1) * *(uint *)(this + 0xa0))),&local_44,
               (ulong)*(uint *)(this + 0xa0));
        if (uVar4 == uVar6) goto LAB_0010c9d5;
        if (local_64 < local_68) goto LAB_0010c9f6;
LAB_0010cae8:
        local_68 = local_68 + local_50;
        pcVar10 = (char *)(ulong)(uVar4 + uVar9);
        uVar5 = *(uint *)(this + 0x44);
        if (uVar5 <= (uint)uVar13) break;
      } while( true );
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* xatlas::internal::UniformGrid2::createGrid() */

undefined8 __thiscall xatlas::internal::UniformGrid2::createGrid(UniformGrid2 *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [12];
  uint uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  uint *puVar12;
  char *pcVar13;
  int extraout_EDX;
  int iVar14;
  ulong uVar15;
  uint *extraout_RDX;
  uint *puVar16;
  long lVar17;
  ulong in_R8;
  long lVar18;
  uint uVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  uint local_48 [2];
  long local_40;
  
  uVar4 = *(uint *)(this + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar22 = _LC9;
  fVar23 = _LC9;
  fVar20 = _LC10;
  fVar21 = _LC10;
  if (uVar4 != 0) {
    puVar12 = *(uint **)this;
    uVar19 = *(uint *)(this + 0x30);
    in_R8 = (ulong)uVar19;
    puVar16 = puVar12 + uVar4;
    do {
      uVar7 = *puVar12;
      uVar5 = uVar7;
      if (uVar19 != 0) {
        uVar5 = *(uint *)(*(long *)(this + 0x28) + (ulong)uVar7 * 4);
      }
      pfVar1 = (float *)(*(long *)(this + 0x18) + (ulong)uVar5 * 8);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      if (fVar21 <= fVar3) {
        fVar21 = fVar3;
      }
      if (fVar20 <= fVar2) {
        fVar20 = fVar2;
      }
      if (fVar3 <= fVar23) {
        fVar23 = fVar3;
      }
      if (fVar2 <= fVar22) {
        fVar22 = fVar2;
      }
      uVar8 = (ulong)((uVar7 % 3 + 1) % 3 + (uVar7 / 3) * 3);
      if (uVar19 != 0) {
        uVar8 = (ulong)*(uint *)(*(long *)(this + 0x28) + uVar8 * 4);
      }
      pfVar1 = (float *)(*(long *)(this + 0x18) + uVar8 * 8);
      puVar12 = puVar12 + 1;
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      if (fVar20 <= fVar2) {
        fVar20 = fVar2;
      }
      if (fVar21 <= fVar3) {
        fVar21 = fVar3;
      }
      if (fVar3 <= fVar23) {
        fVar23 = fVar3;
      }
      if (fVar2 <= fVar22) {
        fVar22 = fVar2;
      }
    } while (puVar12 != puVar16);
  }
  fVar20 = fVar20 - fVar22;
  *(float *)(this + 0x3c) = fVar22;
  fVar21 = fVar21 - fVar23;
  *(float *)(this + 0x40) = fVar23;
  uVar19 = 0x20;
  if (0x1f < uVar4) {
    uVar19 = uVar4;
  }
  fVar22 = fVar20;
  if (fVar20 <= fVar21) {
    fVar22 = fVar21;
  }
  if (0x200 < uVar19) {
    uVar19 = 0x200;
  }
  fVar22 = fVar22 / (float)(int)uVar19;
  *(float *)(this + 0x38) = fVar22;
  fVar23 = _LC36;
  uVar19 = _LC37;
  if (0.0 < fVar22) {
    fVar20 = fVar20 / fVar22;
    if ((float)((uint)fVar20 & _LC37) < _LC36) {
      fVar20 = (float)((uint)((float)(int)fVar20 +
                             (float)(-(uint)((float)(int)fVar20 < fVar20) & _LC4)) |
                      ~_LC37 & (uint)fVar20);
    }
    fVar21 = fVar21 / fVar22;
    uVar7 = (uint)(long)fVar20;
    *(uint *)(this + 0x44) = uVar7;
    if ((float)((uint)fVar21 & uVar19) < fVar23) {
      fVar21 = (float)((uint)((float)(int)fVar21 +
                             (float)(-(uint)((float)(int)fVar21 < fVar21) & _LC4)) |
                      ~uVar19 & (uint)fVar21);
    }
    uVar19 = (uint)(long)fVar21;
    *(uint *)(this + 0x48) = uVar19;
    if ((1 < uVar19) && (1 < uVar7)) {
      ArrayBase::resize((int)this + 0x50,(bool)((char)(long)fVar21 * (char)(long)fVar20));
      if (*(int *)(this + 0x5c) != 0) {
        lVar18 = *(long *)(this + 0x50);
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar18 + lVar9 * 4) = 0xffffffff;
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < *(uint *)(this + 0x5c));
      }
      *(undefined4 *)(this + 0x74) = 0;
      if (*(uint *)(this + 0x78) < uVar4 * 2) {
        ArrayBase::setArrayCapacity((int)this + 0x68);
      }
      lVar18 = 0;
      if (uVar4 != 0) {
        do {
          local_48[0] = *(uint *)(*(long *)this + lVar18);
          uVar8 = (ulong)local_48[0];
          uVar15 = (ulong)((local_48[0] % 3 + 1) % 3 + (local_48[0] / 3) * 3);
          lVar9 = *(long *)(this + 0x18);
          if (*(int *)(this + 0x30) == 0) {
            uVar11 = *(undefined8 *)(lVar9 + uVar15 * 8);
          }
          else {
            uVar8 = (ulong)*(uint *)(*(long *)(this + 0x28) + uVar8 * 4);
            uVar11 = *(undefined8 *)
                      (lVar9 + (ulong)*(uint *)(*(long *)(this + 0x28) + uVar15 * 4) * 8);
          }
          lVar17 = 0;
          traverse(*(UniformGrid2 **)(lVar9 + uVar8 * 8),uVar11,this);
          if (*(int *)(this + 0xa4) != 0) {
LAB_0010cf5f:
            do {
              pvVar10 = *(void **)(this + 0x68);
              pcVar13 = (char *)(ulong)*(uint *)(this + 0x74);
              puVar16 = (uint *)(*(long *)(this + 0x50) +
                                (ulong)*(uint *)(*(long *)(this + 0x98) + lVar17 * 4) * 4);
              uVar19 = *puVar16;
              while (uVar19 != 0xffffffff) {
                puVar16 = (uint *)((long)pvVar10 + (ulong)(uVar19 + 1) * 4);
                if (*puVar16 == 0xffffffff) break;
                puVar16 = (uint *)((long)pvVar10 + (ulong)(*puVar16 + 1) * 4);
                uVar19 = *puVar16;
              }
              auVar24._8_8_ = puVar16;
              auVar24._0_8_ = pvVar10;
              auVar6 = auVar24._0_12_;
              *puVar16 = *(uint *)(this + 0x74);
              uVar19 = *(int *)(this + 0x74) + 1;
              *(uint *)(this + 0x74) = uVar19;
              if (uVar19 <= *(uint *)(this + 0x78)) {
LAB_0010cef0:
                iVar14 = auVar6._8_4_;
                if (auVar6._0_8_ == 0) goto LAB_0010d06e;
                pcVar13 = (char *)(ulong)((uVar19 - 1) * *(uint *)(this + 0x70));
                memcpy(pcVar13 + auVar6._0_8_,local_48,(ulong)*(uint *)(this + 0x70));
                pvVar10 = *(void **)(this + 0x68);
                local_48[1] = 0xffffffff;
                uVar19 = *(int *)(this + 0x74) + 1;
                uVar7 = *(uint *)(this + 0x78);
                *(uint *)(this + 0x74) = uVar19;
                iVar14 = extraout_EDX;
                if (uVar7 < uVar19) goto LAB_0010d08c;
LAB_0010cf33:
                if (pvVar10 != (void *)0x0) {
                  memcpy((void *)((long)pvVar10 +
                                 (ulong)((*(int *)(this + 0x74) + -1) * *(uint *)(this + 0x70))),
                         local_48 + 1,(ulong)*(uint *)(this + 0x70));
                }
LAB_0010cf4f:
                lVar17 = lVar17 + 1;
                if (*(uint *)(this + 0xa4) <= (uint)lVar17) break;
                goto LAB_0010cf5f;
              }
              uVar7 = uVar19;
              if ((*(uint *)(this + 0x78) == 0) || (uVar7 = (uVar19 >> 2) + uVar19, uVar7 != 0)) {
                auVar24 = Realloc(pvVar10,(ulong)(uVar7 * *(int *)(this + 0x70)),(int)puVar16,
                                  pcVar13,(int)in_R8);
                auVar6 = auVar24._0_12_;
                *(uint *)(this + 0x78) = uVar7;
                uVar19 = *(uint *)(this + 0x74);
                *(long *)(this + 0x68) = auVar24._0_8_;
                goto LAB_0010cef0;
              }
              if (pvVar10 != (void *)0x0) {
                Realloc(pvVar10,0,(int)puVar16,pcVar13,(int)in_R8);
                *(undefined8 *)(this + 0x68) = 0;
                uVar19 = *(uint *)(this + 0x74);
                puVar16 = extraout_RDX;
              }
              iVar14 = (int)puVar16;
              *(undefined4 *)(this + 0x78) = 0;
LAB_0010d06e:
              uVar7 = *(uint *)(this + 0x78);
              uVar19 = uVar19 + 1;
              local_48[1] = 0xffffffff;
              pvVar10 = (void *)0x0;
              *(uint *)(this + 0x74) = uVar19;
              if (uVar19 <= uVar7) goto LAB_0010cf4f;
LAB_0010d08c:
              local_48[1] = 0xffffffff;
              if ((uVar7 == 0) || (uVar19 = uVar19 + (uVar19 >> 2), uVar19 != 0)) {
                pvVar10 = (void *)Realloc(pvVar10,(ulong)(uVar19 * *(int *)(this + 0x70)),iVar14,
                                          pcVar13,(int)in_R8);
                *(uint *)(this + 0x78) = uVar19;
                *(void **)(this + 0x68) = pvVar10;
                goto LAB_0010cf33;
              }
              if (pvVar10 != (void *)0x0) {
                Realloc(pvVar10,0,iVar14,pcVar13,(int)in_R8);
                *(undefined8 *)(this + 0x68) = 0;
              }
              *(undefined4 *)(this + 0x78) = 0;
              lVar17 = lVar17 + 1;
            } while ((uint)lVar17 < *(uint *)(this + 0xa4));
          }
          lVar18 = lVar18 + 4;
        } while (lVar18 != (ulong)uVar4 * 4);
      }
      uVar11 = 1;
      goto LAB_0010cfaf;
    }
  }
  uVar11 = 0;
LAB_0010cfaf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::segment::AtlasData::compute() */

void __thiscall xatlas::internal::segment::AtlasData::compute(AtlasData *this)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  AtlasData AVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  float *pfVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  iVar11 = (int)this;
  uVar23 = *(uint *)(*(long *)(this + 0x30) + 0x4c);
  uVar13 = uVar23 / 3;
  ArrayBase::resize(iVar11 + 0x38,SUB41(uVar23,0));
  ArrayBase::resize(iVar11 + 0x50,SUB41(uVar23,0));
  ArrayBase::resize(iVar11 + 0x68,SUB41(uVar23 / 3,0));
  if (this[0x2c] != (AtlasData)0x0) {
    ArrayBase::resize(iVar11 + 0x80,SUB41(uVar13,0));
  }
  ArrayBase::resize(iVar11 + 0x98,SUB41(uVar13,0));
  *(uint *)(this + 0xb0) = uVar13;
  ArrayBase::resize(iVar11 + 0xb8,SUB41(uVar13 + 0x1f >> 5,0));
  if ((*(void **)(this + 0xb8) != (void *)0x0) && (*(int *)(this + 0xc4) != 0)) {
    memset(*(void **)(this + 0xb8),0,(ulong)(uint)(*(int *)(this + 0xc4) * *(int *)(this + 0xc0)));
  }
  fVar12 = _LC4;
  fVar27 = _LC11;
  if (2 < uVar23) {
    lVar8 = *(long *)(this + 0x30);
    lVar9 = *(long *)(this + 0x50);
    lVar21 = 0;
    lVar10 = *(long *)(this + 0x98);
    uVar23 = 3;
    lVar20 = *(long *)(lVar8 + 0x40);
    lVar22 = *(long *)(lVar8 + 0x58);
    lVar14 = *(long *)(this + 0x68);
    AVar7 = this[0x2c];
    pfVar24 = (float *)(lVar10 + 8);
    do {
      lVar17 = lVar21 * 0xc;
      uVar15 = uVar23 - 3;
      do {
        pfVar1 = (float *)(lVar22 + (ulong)*(uint *)(lVar20 + lVar17) * 0xc);
        uVar16 = uVar15 + 1;
        pfVar2 = (float *)(lVar22 + (ulong)*(uint *)(lVar20 + (ulong)((uVar15 % 3 + 1) % 3 +
                                                                     (uVar15 / 3) * 3) * 4) * 0xc);
        *(float *)(lVar9 + lVar17) =
             SQRT((*pfVar2 - *pfVar1) * (*pfVar2 - *pfVar1) +
                  (pfVar2[1] - pfVar1[1]) * (pfVar2[1] - pfVar1[1]) +
                  (pfVar2[2] - pfVar1[2]) * (pfVar2[2] - pfVar1[2]));
        lVar17 = lVar17 + 4;
        uVar15 = uVar16;
      } while (uVar16 != uVar23);
      uVar25 = (ulong)*(uint *)(lVar20 + lVar21 * 0xc);
      uVar18 = (ulong)*(uint *)(lVar20 + (ulong)(uVar23 - 1) * 4);
      pfVar1 = (float *)(lVar22 + uVar25 * 0xc);
      uVar19 = (ulong)*(uint *)(lVar20 + (ulong)(uVar23 - 2) * 4);
      pfVar2 = (float *)(lVar22 + uVar18 * 0xc);
      pfVar3 = (float *)(lVar22 + uVar19 * 0xc);
      fVar26 = pfVar2[2] - pfVar1[2];
      fVar31 = pfVar2[1] - pfVar1[1];
      fVar28 = *pfVar2 - *pfVar1;
      fVar32 = pfVar3[2] - pfVar1[2];
      fVar33 = pfVar3[1] - pfVar1[1];
      fVar29 = *pfVar3 - *pfVar1;
      fVar30 = fVar31 * fVar29 - fVar28 * fVar33;
      fVar28 = fVar28 * fVar32 - fVar29 * fVar26;
      fVar26 = fVar26 * fVar33 - fVar31 * fVar32;
      *(float *)(lVar14 + lVar21 * 4) =
           SQRT(fVar26 * fVar26 + fVar28 * fVar28 + fVar30 * fVar30) * fVar27;
      if (AVar7 != (AtlasData)0x0) {
        lVar17 = *(long *)(lVar8 + 0x88);
        pfVar4 = (float *)(lVar17 + uVar18 * 8);
        pfVar5 = (float *)(lVar17 + uVar25 * 8);
        pfVar6 = (float *)(lVar17 + uVar19 * 8);
        fVar26 = pfVar4[1];
        fVar28 = *pfVar4;
        *(float *)(*(long *)(this + 0x80) + lVar21 * 4) =
             ((*pfVar5 - fVar28) * (pfVar6[1] - fVar26) - (pfVar5[1] - fVar26) * (*pfVar6 - fVar28))
             * fVar27;
      }
      fVar26 = (float)*(undefined8 *)(pfVar1 + 1);
      fVar32 = (float)*(undefined8 *)(pfVar2 + 1) - fVar26;
      fVar28 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
      fVar33 = *pfVar2 - *pfVar1;
      fVar26 = (float)*(undefined8 *)(pfVar3 + 1) - fVar26;
      fVar29 = *pfVar3 - *pfVar1;
      fVar30 = (pfVar3[2] - pfVar1[2]) * fVar32 - fVar26 * (pfVar2[2] - pfVar1[2]);
      fVar31 = fVar29 * ((float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20) - fVar28) -
               ((float)((ulong)*(undefined8 *)(pfVar3 + 1) >> 0x20) - fVar28) * fVar33;
      fVar26 = fVar26 * fVar33 - fVar29 * fVar32;
      fVar28 = SQRT(fVar30 * fVar30 + fVar31 * fVar31 + fVar26 * fVar26);
      if (fVar28 <= 0.0) {
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar26 = fVar12;
      }
      else {
        fVar28 = fVar12 / fVar28;
        fVar30 = fVar30 * fVar28;
        fVar31 = fVar31 * fVar28;
        fVar26 = fVar26 * fVar28;
      }
      lVar21 = lVar21 + 1;
      uVar23 = uVar23 + 3;
      *(ulong *)(pfVar24 + -2) = CONCAT44(fVar31,fVar30);
      *pfVar24 = fVar26;
      fVar26 = _LC9;
      pfVar24 = pfVar24 + 3;
    } while ((uint)lVar21 < uVar13);
    lVar22 = 0;
    uVar23 = 0;
    lVar9 = *(long *)(this + 0x38);
    lVar20 = 0xc;
    lVar8 = *(long *)(lVar8 + 0x108);
    do {
      pfVar24 = (float *)(lVar10 + lVar22);
      lVar14 = lVar22;
      do {
        uVar15 = *(uint *)(lVar8 + lVar14);
        pfVar1 = (float *)(lVar9 + lVar14);
        fVar27 = fVar26;
        if (uVar15 != 0xffffffff) {
          pfVar2 = (float *)(lVar10 + ((ulong)uVar15 / 3) * 0xc);
          fVar27 = *pfVar24 * *pfVar2 + pfVar24[1] * pfVar2[1] + pfVar24[2] * pfVar2[2];
          *(float *)(lVar9 + (ulong)uVar15 * 4) = fVar27;
        }
        lVar14 = lVar14 + 4;
        *pfVar1 = fVar27;
      } while (lVar14 != lVar20);
      uVar23 = uVar23 + 1;
      lVar20 = lVar20 + 0xc;
      lVar22 = lVar22 + 0xc;
    } while (uVar23 < uVar13);
  }
  return;
}



/* xatlas::internal::segment::OriginalUvCharts::floodfillFaces(xatlas::internal::segment::OriginalUvCharts::Chart&)
    */

void __thiscall
xatlas::internal::segment::OriginalUvCharts::floodfillFaces(OriginalUvCharts *this,Chart *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  Vector2 *pVVar16;
  ulong uVar17;
  Vector2 *pVVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  uint local_7c;
  int local_70;
  undefined4 local_44;
  long local_40;
  float fVar3;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar19 = *(long *)this;
  pfVar1 = (float *)(*(long *)(lVar19 + 0x80) +
                    (ulong)*(uint *)(*(long *)(this + 0x38) + (ulong)*(uint *)param_1 * 4) * 4);
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  do {
    iVar5 = *(int *)(param_1 + 4);
    if (iVar5 == 0) break;
    local_70 = 0;
    cVar8 = '\0';
    do {
      lVar6 = *(long *)(lVar19 + 0x30);
      uVar7 = *(int *)(*(long *)(this + 0x38) + (ulong)(uint)(local_70 + *(int *)param_1) * 4) * 3;
      uVar21 = (ulong)uVar7;
      uVar20 = 1;
      local_7c = uVar7;
      uVar14 = 0;
LAB_0010d6d8:
      do {
        uVar13 = uVar20;
        uVar20 = *(uint *)(*(long *)(lVar6 + 0x108) + uVar21 * 4);
        if (uVar20 != 0xffffffff) {
          uVar15 = (ulong)uVar20 / 0x60;
          uVar17 = (ulong)uVar20 / 3;
          local_44 = (undefined4)uVar17;
          uVar20 = 1 << ((byte)uVar17 & 0x1f);
          if ((((uVar20 & *(uint *)(*(long *)(lVar19 + 0xb8) + uVar15 * 4)) == 0) &&
              (fVar4 = *(float *)(*(long *)(lVar19 + 0x80) + uVar17 * 4),
              _LC19 < (float)((uint)fVar4 & _LC37))) &&
             (fVar4 < 0.0 == (fVar3 <= 0.0 && fVar2 != 0.0))) {
            pVVar18 = *(Vector2 **)(lVar19 + 0x30);
            pVVar16 = *(Vector2 **)(pVVar18 + 0x88);
            uVar17 = (ulong)*(uint *)(*(long *)(lVar6 + 0x40) + (ulong)(uVar13 % 3 + uVar7) * 4);
            cVar9 = equal(pVVar18,pVVar16,
                          *(float *)(pVVar16 +
                                    (ulong)*(uint *)(*(long *)(lVar6 + 0x40) +
                                                    (ulong)(uVar7 + uVar14) * 4) * 8));
            if ((cVar9 != '\0') &&
               (cVar9 = equal(pVVar18,pVVar16,*(float *)(pVVar16 + uVar17 * 8)), cVar9 != '\0')) {
              uVar12 = *(int *)(this + 0x44) + 1;
              lVar10 = *(long *)(this + 0x38);
              *(uint *)(this + 0x44) = uVar12;
              if (*(uint *)(this + 0x48) < uVar12) {
                if ((*(uint *)(this + 0x48) == 0) || (uVar12 = uVar12 + (uVar12 >> 2), uVar12 != 0))
                {
                  if (uVar12 * *(int *)(this + 0x40) != 0) {
LAB_0010d89a:
                    lVar10 = (*(code *)s_realloc)(lVar10);
                    *(long *)(this + 0x38) = lVar10;
                    *(uint *)(this + 0x48) = uVar12;
                    goto LAB_0010d8c1;
                  }
                  if (lVar10 != 0) {
                    if (s_free == (undefined *)0x0) goto LAB_0010d89a;
                    (*(code *)s_free)(lVar10);
                    lVar19 = *(long *)this;
                  }
                  *(undefined8 *)(this + 0x38) = 0;
                  *(uint *)(this + 0x48) = uVar12;
                }
                else if (lVar10 == 0) {
                  *(undefined4 *)(this + 0x48) = 0;
                }
                else {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)(lVar10,0);
                  }
                  else {
                    (*(code *)s_free)(lVar10);
                  }
                  *(undefined8 *)(this + 0x38) = 0;
                  lVar19 = *(long *)this;
                  *(undefined4 *)(this + 0x48) = 0;
                }
              }
              else {
LAB_0010d8c1:
                if (lVar10 == 0) {
                  lVar19 = *(long *)this;
                }
                else {
                  memcpy((void *)((ulong)((*(int *)(this + 0x44) + -1) * *(uint *)(this + 0x40)) +
                                 lVar10),&local_44,(ulong)*(uint *)(this + 0x40));
                  lVar19 = *(long *)this;
                }
              }
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
              puVar11 = (uint *)(uVar15 * 4 + *(long *)(lVar19 + 0xb8));
              *puVar11 = *puVar11 | uVar20;
              cVar8 = cVar9;
            }
          }
        }
        uVar20 = uVar13;
      } while (2 < uVar14);
      if (uVar13 != 3) {
        local_7c = local_7c + 1;
        uVar21 = (ulong)local_7c;
        uVar20 = uVar13 + 1;
        uVar14 = uVar13;
        goto LAB_0010d6d8;
      }
      local_70 = local_70 + 1;
    } while (iVar5 != local_70);
  } while (cVar8 != '\0');
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* xatlas::internal::segment::OriginalUvCharts::compute() */

void __thiscall xatlas::internal::segment::OriginalUvCharts::compute(OriginalUvCharts *this)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  Fit *pFVar15;
  uint uVar16;
  uint *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float extraout_XMM1_Da;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  uint local_54;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  lVar11 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x14) = 0;
  lVar4 = *(long *)(lVar11 + 0x30);
  *(undefined4 *)(this + 0x44) = 0;
  local_54 = 0;
  uVar12 = *(uint *)(lVar4 + 0x4c);
  if (uVar12 < 3) {
    *(undefined4 *)(this + 0x2c) = 0;
  }
  else {
    pcVar9 = (char *)0x0;
    while( true ) {
      if (((1 << ((byte)pcVar9 & 0x1f) &
           *(uint *)(*(long *)(lVar11 + 0xb8) + ((ulong)pcVar9 >> 5) * 4)) == 0) &&
         (_LC19 < (float)(*(uint *)(*(long *)(lVar11 + 0x80) + (long)pcVar9 * 4) & _LC37))) {
        local_50 = CONCAT44(1,*(undefined4 *)(this + 0x44));
        ArrayBase::push_back((uchar *)(this + 0x38));
        puVar17 = (uint *)(*(long *)(*(long *)this + 0xb8) + (ulong)(local_54 >> 5) * 4);
        *puVar17 = *puVar17 | 1 << ((byte)local_54 & 0x1f);
        floodfillFaces(this,(Chart *)&local_50);
        ArrayBase::push_back((uchar *)(this + 8));
      }
      local_54 = local_54 + 1;
      pcVar9 = (char *)(ulong)local_54;
      if (uVar12 / 3 <= local_54) break;
      lVar11 = *(long *)this;
    }
    uVar12 = *(uint *)(this + 0x14);
    *(uint *)(this + 0x2c) = uVar12;
    if (*(uint *)(this + 0x30) < uVar12) {
      ArrayBase::setArrayCapacity((int)this + 0x20);
      uVar12 = *(uint *)(this + 0x14);
    }
    if (uVar12 != 0) {
      lVar11 = 0;
      do {
        pcVar14 = *(char **)(this + 0x50);
        puVar17 = (uint *)(*(long *)(this + 8) + lVar11 * 8);
        uVar12 = puVar17[1];
        uVar1 = uVar12 * 3;
        *(uint *)(this + 0x5c) = uVar1;
        uVar10 = uVar1;
        if (*(uint *)(this + 0x60) < uVar1) {
          if (uVar12 != 0) {
            pcVar14 = (char *)Realloc(pcVar14,(ulong)(uVar1 * *(int *)(this + 0x58)),uVar1,pcVar9,
                                      (int)pcVar14);
            uVar12 = puVar17[1];
            uVar10 = *(uint *)(this + 0x5c);
            *(char **)(this + 0x50) = pcVar14;
LAB_0010dbc5:
            *(uint *)(this + 0x60) = uVar1;
            goto LAB_0010dbc9;
          }
          if ((Fit *)pcVar14 != (Fit *)0x0) {
            Realloc(pcVar14,0,uVar1,pcVar9,(int)pcVar14);
            uVar12 = puVar17[1];
            uVar10 = *(uint *)(this + 0x5c);
            pcVar14 = (char *)0x0;
            *(undefined8 *)(this + 0x50) = 0;
            goto LAB_0010dbc5;
          }
          *(undefined4 *)(this + 0x60) = 0;
          uVar10 = 0;
        }
        else {
LAB_0010dbc9:
          if (uVar12 != 0) {
            pcVar9 = (char *)(ulong)*puVar17;
            iVar13 = 0;
            lVar4 = *(long *)(this + 0x38);
            lVar5 = *(long *)(*(long *)(*(long *)this + 0x30) + 0x40);
            lVar6 = *(long *)(*(long *)(*(long *)this + 0x30) + 0x58);
            do {
              iVar3 = *(int *)(lVar4 + (long)pcVar9 * 4);
              iVar8 = 0;
              do {
                uVar16 = iVar3 * 3 + iVar8;
                uVar1 = iVar8 + iVar13;
                iVar8 = iVar8 + 1;
                puVar2 = (undefined8 *)(lVar6 + (ulong)*(uint *)(lVar5 + (ulong)uVar16 * 4) * 0xc);
                *(undefined8 *)((Fit *)pcVar14 + (ulong)uVar1 * 0xc) = *puVar2;
                *(undefined4 *)((Fit *)pcVar14 + (ulong)uVar1 * 0xc + 8) =
                     *(undefined4 *)(puVar2 + 1);
              } while (iVar8 != 3);
              iVar13 = iVar13 + 3;
              pcVar9 = (char *)(ulong)((int)pcVar9 + 1);
            } while (iVar13 != uVar12 * 3);
          }
        }
        puVar2 = (undefined8 *)(*(long *)(this + 0x20) + lVar11 * 0x24);
        pFVar15 = (Fit *)pcVar14;
        cVar7 = Fit::computeLeastSquaresNormal((Fit *)pcVar14,uVar10,puVar2 + 3);
        if (cVar7 == '\0') {
          Fit::computeEigen(pFVar15);
        }
        else {
          uVar23 = puVar2[3];
          fVar24 = *(float *)(puVar2 + 4);
          fVar22 = (float)uVar23;
          fVar21 = (float)((ulong)uVar23 >> 0x20);
          fVar18 = SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar24 * fVar24);
          fVar19 = (float)((uint)fVar18 & _LC37);
          fVar20 = _LC7;
          if (_LC4 < fVar19) {
            fVar20 = fVar19 * _LC7;
          }
          if ((fVar20 < (float)((uint)(fVar18 - _LC4) & _LC37)) && (s_print != (undefined *)0x0)) {
            pcVar9 = (char *)0x4ef;
            pcVar14 = "\rASSERT: %s %s %d\n";
            (*(code *)s_print)("\rASSERT: %s %s %d\n","isNormalized(normal)",
                               "thirdparty/xatlas/xatlas.cpp");
            uVar23 = puVar2[3];
            fVar22 = *(float *)(puVar2 + 3);
            fVar24 = *(float *)(puVar2 + 4);
            fVar21 = (float)((ulong)uVar23 >> 0x20);
          }
          fVar20 = fVar24;
          local_50 = normalize((Vector3 *)pcVar14);
          fVar18 = (float)((ulong)local_50 >> 0x20);
          *puVar2 = local_50;
          *(float *)(puVar2 + 1) = extraout_XMM1_Da;
          *(float *)((long)puVar2 + 0xc) = fVar21 * extraout_XMM1_Da - fVar20 * fVar18;
          puVar2[2] = CONCAT44(fVar18 * fVar22 - (float)local_50 * (float)((ulong)uVar23 >> 0x20),
                               (float)local_50 * fVar24 - extraout_XMM1_Da * (float)uVar23);
          local_48 = extraout_XMM1_Da;
        }
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < *(uint *)(this + 0x14));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::segment::PlanarCharts::compute() */

void __thiscall xatlas::internal::segment::PlanarCharts::compute(PlanarCharts *this)

{
  uint *puVar1;
  float *pfVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  void *pvVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  undefined8 extraout_RDX;
  ulong uVar18;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  uint uVar19;
  long lVar20;
  undefined1 uVar21;
  uint *puVar22;
  int iVar23;
  char *in_R8;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float extraout_XMM1_Da;
  float fVar33;
  uint uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  uint local_6c;
  undefined8 local_68;
  float local_60;
  void *local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  
  iVar6 = (int)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar34 = *(uint *)(*(long *)(*(long *)this + 0x30) + 0x4c);
  *(undefined4 *)(this + 0x14) = 0;
  uVar26 = uVar34 / 3;
  ArrayBase::resize(iVar6 + 0x20,SUB41(uVar34 / 3,0));
  ArrayBase::resize(iVar6 + 0x38,SUB41(uVar26,0));
  if (uVar34 < 3) {
    local_58 = (void *)0x0;
    local_50 = 4;
    local_48 = 0;
    ArrayBase::resize(iVar6 + 0x50,false);
    pvVar14 = *(void **)(this + 0x50);
    if (pvVar14 != (void *)0x0) {
      uVar16 = *(uint *)(this + 0x5c);
      uVar5 = uVar16;
      if (uVar16 != 0) {
        uVar5 = 0;
        goto LAB_0010e928;
      }
      goto LAB_0010e37b;
    }
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
  }
  else {
    lVar20 = *(long *)(this + 0x20);
    lVar13 = *(long *)(this + 0x38);
    lVar11 = 0;
    do {
      *(int *)(lVar20 + lVar11 * 4) = (int)lVar11;
      *(undefined4 *)(lVar13 + lVar11 * 4) = 0xffffffff;
      lVar11 = lVar11 + 1;
    } while ((uint)lVar11 < uVar34 / 3);
    local_58 = (void *)0x0;
    local_50 = 4;
    local_48 = 0;
    ArrayBase::setArrayCapacity((uint)&local_58);
    pcVar15 = (char *)0x0;
    local_6c = 0;
    uVar5 = 0;
    do {
      while ((*(int *)(*(long *)(this + 0x20) + (long)pcVar15 * 4) != (int)pcVar15 ||
             ((1 << ((byte)pcVar15 & 0x1f) &
              *(uint *)(*(long *)(*(long *)this + 0xb8) + ((ulong)pcVar15 >> 5) * 4)) != 0))) {
        local_6c = local_6c + 1;
        pcVar15 = (char *)(ulong)local_6c;
        if (uVar26 <= local_6c) goto LAB_0010e31a;
      }
      local_50 = local_50 & 0xffffffff;
      ArrayBase::push_back((uchar *)&local_58);
      auVar36._8_8_ = extraout_RDX;
      auVar36._0_8_ = local_58;
      in_R8 = (char *)(ulong)local_50._4_4_;
      uVar16 = _LC37;
      fVar33 = _LC4;
      uVar19 = local_50._4_4_;
joined_r0x0010e04f:
      if (uVar19 != 0) {
        local_58 = auVar36._0_8_;
        uVar10 = (int)in_R8 - 1;
        uVar19 = *(uint *)((long)local_58 + (ulong)uVar10 * 4);
        uVar24 = (ulong)uVar19;
        local_50 = CONCAT44(uVar10,(int)local_50);
        *(uint *)(*(long *)(this + 0x38) + uVar24 * 4) = uVar5;
        if ((uint)local_48 < uVar10) {
          uVar17 = uVar10;
          if (((uint)local_48 == 0) || (uVar17 = (uVar10 >> 2) + uVar10, uVar17 != 0)) {
            auVar36 = Realloc(local_58,(ulong)(uVar17 * (int)local_50),auVar36._8_4_,pcVar15,uVar10)
            ;
            fVar33 = _LC4;
            uVar16 = _LC37;
          }
          else if (local_58 != (void *)0x0) {
            Realloc(local_58,0,auVar36._8_4_,pcVar15,uVar10);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = extraout_RDX_02;
            auVar36 = auVar9 << 0x40;
            fVar33 = _LC4;
            uVar16 = _LC37;
          }
          local_48 = CONCAT44(local_48._4_4_,uVar17);
        }
        in_R8 = (char *)(ulong)uVar10;
        uVar25 = (ulong)(uVar19 * 3);
        uVar19 = 0;
        lVar20 = *(long *)(*(long *)this + 0x30);
        uVar27 = uVar25;
LAB_0010e100:
        local_58 = auVar36._0_8_;
        uVar10 = *(uint *)(*(long *)(lVar20 + 0x108) + uVar25 * 4);
        do {
          if (uVar10 != 0xffffffff) {
            iVar23 = (int)in_R8;
            pcVar15 = (char *)((ulong)uVar10 / 3);
            uVar17 = uVar10 / 3;
            uVar18 = (ulong)uVar17;
            auVar8._8_4_ = uVar17;
            auVar8._0_8_ = local_58;
            auVar8._12_4_ = 0;
            auVar7._8_4_ = uVar17;
            auVar7._0_8_ = local_58;
            auVar7._12_4_ = 0;
            auVar36._8_4_ = uVar17;
            auVar36._0_8_ = local_58;
            auVar36._12_4_ = 0;
            local_68._4_4_ = (int)(local_68 >> 0x20);
            local_68 = CONCAT44(local_68._4_4_,uVar17);
            puVar1 = (uint *)(*(long *)(this + 0x20) + uVar18 * 4);
            if ((*puVar1 == uVar10 / 3) &&
               (auVar36 = auVar7,
               (1 << ((byte)pcVar15 & 0x1f) &
               *(uint *)(*(long *)(*(long *)this + 0xb8) + ((ulong)uVar10 / 0x60) * 4)) == 0)) {
              lVar13 = *(long *)(*(long *)this + 0x98);
              pfVar2 = (float *)(lVar13 + uVar18 * 0xc);
              pfVar12 = (float *)(lVar13 + uVar24 * 0xc);
              fVar28 = *pfVar12 * *pfVar2 + pfVar12[1] * pfVar2[1] + pfVar12[2] * pfVar2[2];
              fVar29 = (float)((uint)fVar28 & uVar16);
              fVar30 = _LC8;
              if (fVar33 < fVar29) {
                fVar30 = fVar29 * _LC8;
              }
              auVar36 = auVar8;
              if ((float)((uint)(fVar28 - fVar33) & uVar16) <= fVar30) {
                puVar22 = (uint *)(*(long *)(this + 0x20) + uVar24 * 4);
                uVar17 = *puVar22;
                *puVar22 = uVar10 / 3;
                uVar10 = iVar23 + 1;
                local_50 = CONCAT44(uVar10,(int)local_50);
                *puVar1 = uVar17;
                *(uint *)(*(long *)(this + 0x38) + uVar18 * 4) = uVar5;
                if ((uint)local_48 < uVar10) {
                  uVar17 = uVar10;
                  if ((uint)local_48 == 0) {
LAB_0010e1fa:
                    local_58 = (void *)Realloc(local_58,(ulong)(uVar17 * (int)local_50),uVar17,
                                               (char *)(ulong)uVar10,iVar23);
                    uVar18 = (ulong)uVar17;
                    local_48 = CONCAT44(local_48._4_4_,uVar17);
                    fVar33 = _LC4;
                    uVar16 = _LC37;
                    goto LAB_0010e249;
                  }
                  uVar17 = (uVar10 >> 2) + uVar10;
                  uVar18 = (ulong)uVar17;
                  if (uVar17 != 0) goto LAB_0010e1fa;
                  if (local_58 == (void *)0x0) {
                    local_48 = local_48 & 0xffffffff00000000;
                  }
                  else {
                    Realloc(local_58,0,0,(char *)(ulong)uVar10,iVar23);
                    local_58 = (void *)0x0;
                    local_48 = local_48 & 0xffffffff00000000;
                    uVar18 = extraout_RDX_01;
                    fVar33 = _LC4;
                    uVar16 = _LC37;
                  }
                }
                else {
LAB_0010e249:
                  if (local_58 != (void *)0x0) {
                    memcpy((void *)((long)local_58 + (ulong)(uint)(iVar23 * (int)local_50)),
                           &local_68,local_50 & 0xffffffff);
                    uVar18 = extraout_RDX_00;
                    fVar33 = _LC4;
                    uVar16 = _LC37;
                  }
                }
                auVar36._8_8_ = uVar18;
                auVar36._0_8_ = local_58;
                pcVar15 = (char *)(ulong)uVar10;
                in_R8 = pcVar15;
              }
            }
          }
          local_58 = auVar36._0_8_;
          if (2 < uVar19) goto LAB_0010e100;
          uVar19 = uVar19 + 1;
          if (uVar19 == 3) {
            uVar19 = (uint)in_R8;
            goto joined_r0x0010e04f;
          }
          uVar25 = (ulong)((int)uVar27 + 1);
          uVar10 = *(uint *)(*(long *)(lVar20 + 0x108) + uVar25 * 4);
          uVar27 = uVar25;
        } while( true );
      }
      ArrayBase::push_back((uchar *)(this + 8));
      uVar5 = uVar5 + 1;
      local_6c = local_6c + 1;
      pcVar15 = (char *)(ulong)local_6c;
    } while (local_6c < uVar26);
LAB_0010e31a:
    ArrayBase::resize(iVar6 + 0x50,SUB41(uVar5,0));
    pvVar14 = *(void **)(this + 0x50);
    if ((pvVar14 != (void *)0x0) && (uVar16 = *(uint *)(this + 0x5c), uVar16 != 0)) {
LAB_0010e928:
      memset(pvVar14,0,(ulong)(uVar16 * *(int *)(this + 0x58)));
      if (uVar34 < 3) goto LAB_0010e37b;
    }
    lVar20 = *(long *)(this + 0x38);
    lVar13 = 0;
    do {
      uVar34 = *(uint *)(lVar20 + lVar13 * 4);
      if (uVar34 != 0xffffffff) {
        pfVar2 = (float *)(*(long *)(this + 0x50) + (ulong)uVar34 * 4);
        *pfVar2 = *pfVar2 + *(float *)(*(long *)(*(long *)this + 0x68) + lVar13 * 4);
      }
      lVar13 = lVar13 + 1;
    } while ((uint)lVar13 < uVar26);
LAB_0010e37b:
    *(undefined4 *)(this + 0x74) = 0;
    uVar24 = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    fVar33 = _LC9;
    if (uVar5 != 0) {
LAB_0010e3b3:
      lVar20 = *(long *)this;
      uVar34 = *(uint *)(*(long *)(this + 8) + uVar24 * 4);
      uVar26 = uVar34;
      do {
        uVar19 = uVar26 * 3;
        uVar16 = uVar19 + 3;
        do {
          uVar10 = *(uint *)(*(long *)(*(long *)(lVar20 + 0x30) + 0x108) + (ulong)uVar19 * 4);
          if ((((uVar10 != 0xffffffff) &&
               (*(int *)(*(long *)(this + 0x38) + ((ulong)uVar10 / 3) * 4) != (int)uVar24)) &&
              (fVar30 = *(float *)(*(long *)(lVar20 + 0x38) + (ulong)uVar19 * 4), 0.0 < fVar30)) &&
             (local_6c = uVar34, fVar30 < fVar33)) goto LAB_0010e5f0;
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar16);
        lVar13 = *(long *)(this + 0x20);
        uVar26 = *(uint *)(lVar13 + (ulong)uVar26 * 4);
      } while (uVar26 != uVar34);
      local_68 = (ulong)*(uint *)(this + 0x8c);
      uVar26 = uVar34;
      do {
        puVar1 = (uint *)(*(long *)(lVar20 + 0xb8) + (ulong)(uVar26 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar26 & 0x1f);
        pvVar14 = *(void **)(this + 0x80);
        uVar16 = *(int *)(this + 0x8c) + 1;
        *(uint *)(this + 0x8c) = uVar16;
        local_6c = uVar26;
        if (*(uint *)(this + 0x90) < uVar16) {
          if ((*(uint *)(this + 0x90) == 0) || (uVar16 = uVar16 + (uVar16 >> 2), uVar16 != 0)) {
            pvVar14 = (void *)Realloc(pvVar14,(ulong)(uVar16 * *(int *)(this + 0x88)),uVar16,
                                      (char *)(ulong)uVar26,(int)in_R8);
            *(void **)(this + 0x80) = pvVar14;
            *(uint *)(this + 0x90) = uVar16;
            goto LAB_0010e46f;
          }
          if (pvVar14 == (void *)0x0) {
            *(undefined4 *)(this + 0x90) = 0;
          }
          else {
            Realloc(pvVar14,0,0,(char *)(ulong)uVar26,(int)in_R8);
            lVar13 = *(long *)(this + 0x20);
            *(undefined8 *)(this + 0x80) = 0;
            *(undefined4 *)(this + 0x90) = 0;
          }
        }
        else {
LAB_0010e46f:
          if (pvVar14 != (void *)0x0) {
            memcpy((void *)((long)pvVar14 +
                           (ulong)((*(int *)(this + 0x8c) + -1) * *(uint *)(this + 0x88))),&local_6c
                   ,(ulong)*(uint *)(this + 0x88));
          }
          lVar13 = *(long *)(this + 0x20);
        }
        local_68 = CONCAT44(local_68._4_4_ + 1,(undefined4)local_68);
        uVar26 = *(uint *)(lVar13 + (ulong)uVar26 * 4);
        if (uVar26 == uVar34) goto LAB_0010e5da;
        lVar20 = *(long *)this;
      } while( true );
    }
  }
  uVar21 = false;
LAB_0010e60a:
  pcVar15 = (char *)(this + 0x98);
  ArrayBase::resize((uint)pcVar15,(bool)uVar21);
  if (*(int *)(this + 0x74) != 0) {
    lVar20 = 0;
    uVar34 = _LC37;
    fVar33 = _LC4;
    do {
      puVar3 = (ulong *)(*(long *)(this + 0x98) + lVar20 * 0x24);
      puVar4 = (ulong *)(*(long *)(*(long *)this + 0x98) +
                        (ulong)*(uint *)(*(long *)(this + 0x80) +
                                        (ulong)*(uint *)(*(long *)(this + 0x68) + lVar20 * 8) * 4) *
                        0xc);
      puVar3[3] = *puVar4;
      uVar24 = puVar3[3];
      fVar30 = (float)uVar24;
      fVar35 = (float)(uVar24 >> 0x20);
      *(int *)(puVar3 + 4) = (int)puVar4[1];
      fVar28 = *(float *)(puVar3 + 4);
      fVar31 = SQRT(fVar30 * fVar30 + fVar35 * fVar35 + fVar28 * fVar28);
      fVar32 = (float)((uint)fVar31 & uVar34);
      fVar29 = _LC7;
      if (fVar33 < fVar32) {
        fVar29 = fVar32 * _LC7;
      }
      if ((fVar29 < (float)((uint)(fVar31 - fVar33) & uVar34)) && (s_print != (undefined *)0x0)) {
        pcVar15 = "\rASSERT: %s %s %d\n";
        (*(code *)s_print)("\rASSERT: %s %s %d\n","isNormalized(normal)",
                           "thirdparty/xatlas/xatlas.cpp",0x4ef);
        uVar24 = puVar3[3];
        fVar30 = *(float *)(puVar3 + 3);
        fVar28 = *(float *)(puVar3 + 4);
        fVar35 = (float)(uVar24 >> 0x20);
      }
      lVar20 = lVar20 + 1;
      fVar29 = fVar28;
      local_68 = normalize((Vector3 *)pcVar15);
      fVar33 = _LC4;
      uVar34 = _LC37;
      fVar31 = (float)(local_68 >> 0x20);
      *puVar3 = local_68;
      *(float *)(puVar3 + 1) = extraout_XMM1_Da;
      *(float *)((long)puVar3 + 0xc) = fVar35 * extraout_XMM1_Da - fVar29 * fVar31;
      uVar26 = *(uint *)(this + 0x74);
      puVar3[2] = CONCAT44(fVar30 * fVar31 - (float)local_68 * (float)(uVar24 >> 0x20),
                           fVar28 * (float)local_68 - extraout_XMM1_Da * (float)uVar24);
      local_60 = extraout_XMM1_Da;
    } while ((uint)lVar20 < uVar26);
  }
  ArrayBase::~ArrayBase((ArrayBase *)&local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0010e5da:
  local_6c = uVar26;
  ArrayBase::push_back((uchar *)(this + 0x68));
  fVar33 = _LC9;
LAB_0010e5f0:
  uVar24 = uVar24 + 1;
  if (uVar24 == uVar5) goto code_r0x0010e602;
  goto LAB_0010e3b3;
code_r0x0010e602:
  uVar21 = (undefined1)*(undefined4 *)(this + 0x74);
  goto LAB_0010e60a;
}



/* xatlas::internal::segment::ClusteredCharts::relocateSeeds() */

undefined1 __thiscall
xatlas::internal::segment::ClusteredCharts::relocateSeeds(ClusteredCharts *this)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  void *__dest;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int in_R8D;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long local_70;
  undefined1 local_59;
  undefined8 local_4c;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(this + 0x54);
  if (uVar1 == 0) {
    local_59 = 0;
  }
  else {
    local_59 = 0;
    local_70 = 0;
    do {
      lVar2 = *(long *)(*(long *)(this + 0x48) + local_70);
      uVar10 = *(uint *)(lVar2 + 0x54);
      *(undefined4 *)(this + 0x74) = 0;
      if (uVar10 == 0) {
LAB_0010ed15:
        uVar10 = 0;
      }
      else {
        lVar11 = 0;
        uVar7 = 0;
        do {
          pfVar6 = *(float **)(this + 0x68);
          uVar13 = *(uint *)(*(long *)(lVar2 + 0x48) + lVar11);
          pcVar3 = *(char **)(*(long *)this + 0x98);
          uVar8 = *(undefined8 *)(pcVar3 + (ulong)uVar13 * 0xc);
          local_44 = *(float *)(pcVar3 + (ulong)uVar13 * 0xc + 8);
          local_4c._0_4_ = (float)uVar8;
          local_4c._4_4_ = (float)((ulong)uVar8 >> 0x20);
          fVar15 = _LC4 - ((float)local_4c * *(float *)(lVar2 + 0x1c) +
                           local_4c._4_4_ * *(float *)(lVar2 + 0x20) +
                          local_44 * *(float *)(lVar2 + 0x24));
          if (_LC4 <= fVar15) {
            fVar15 = _LC4;
          }
          local_4c = CONCAT44(uVar13,fVar15);
          uVar12 = (uint)uVar7;
          if ((uVar12 == 0) || (fVar15 < pfVar6[(ulong)(uVar12 - 1) * 2])) {
            uVar12 = uVar12 + 1;
            uVar7 = (ulong)uVar12;
            *(uint *)(this + 0x74) = uVar12;
            if (*(uint *)(this + 0x78) < uVar12) {
              if ((*(uint *)(this + 0x78) != 0) && (uVar12 = (uVar12 >> 2) + uVar12, uVar12 == 0)) {
                if (pfVar6 != (float *)0x0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)(pfVar6,0);
                  }
                  else {
                    (*(code *)s_free)();
                  }
                  goto LAB_0010ecfc;
                }
                goto LAB_0010ed08;
              }
              pfVar6 = (float *)Realloc(pfVar6,(ulong)(uVar12 * *(int *)(this + 0x70)),uVar13,pcVar3
                                        ,in_R8D);
              *(uint *)(this + 0x78) = uVar12;
              uVar7 = (ulong)*(uint *)(this + 0x74);
              *(float **)(this + 0x68) = pfVar6;
            }
            if (pfVar6 != (float *)0x0) {
              memcpy((void *)((long)pfVar6 + (ulong)(((int)uVar7 + -1) * *(uint *)(this + 0x70))),
                     &local_4c,(ulong)*(uint *)(this + 0x70));
              uVar7 = (ulong)*(uint *)(this + 0x74);
            }
          }
          else {
            uVar9 = 0;
            pfVar5 = pfVar6;
            do {
              if (*pfVar5 <= fVar15 && fVar15 != *pfVar5) break;
              uVar9 = uVar9 + 1;
              pfVar5 = pfVar5 + 2;
            } while (uVar9 != uVar12);
            uVar12 = uVar12 + 1;
            uVar7 = (ulong)uVar12;
            *(uint *)(this + 0x74) = uVar12;
            if (*(uint *)(this + 0x78) < uVar12) {
              if ((*(uint *)(this + 0x78) != 0) && (uVar12 = (uVar12 >> 2) + uVar12, uVar12 == 0)) {
                if (pfVar6 != (float *)0x0) {
                  Realloc(pfVar6,0,uVar13,pcVar3,in_R8D);
LAB_0010ecfc:
                  *(undefined8 *)(this + 0x68) = 0;
                  uVar7 = (ulong)*(uint *)(this + 0x74);
                }
LAB_0010ed08:
                *(undefined4 *)(this + 0x78) = 0;
                goto LAB_0010eb10;
              }
              pfVar6 = (float *)Realloc(pfVar6,(ulong)(uVar12 * *(int *)(this + 0x70)),uVar13,pcVar3
                                        ,in_R8D);
              *(uint *)(this + 0x78) = uVar12;
              uVar7 = (ulong)*(uint *)(this + 0x74);
              *(float **)(this + 0x68) = pfVar6;
            }
            if (pfVar6 != (float *)0x0) {
              uVar12 = (int)uVar7 - 1;
              uVar13 = *(uint *)(this + 0x70);
              if (uVar9 < uVar12) {
                uVar4 = (uVar9 + 1) * uVar13;
                memmove((void *)((long)pfVar6 + (ulong)uVar4),
                        (void *)((ulong)(uVar4 - uVar13) + (long)pfVar6),
                        (ulong)((uVar12 - uVar9) * uVar13));
                pfVar6 = *(float **)(this + 0x68);
                if (pfVar6 == (float *)0x0) {
                  uVar7 = (ulong)*(uint *)(this + 0x74);
                  goto LAB_0010eb10;
                }
                uVar13 = *(uint *)(this + 0x70);
              }
              memcpy((void *)((long)pfVar6 + (ulong)(uVar9 * uVar13)),&local_4c,(ulong)uVar13);
              uVar13 = *(uint *)(this + 0x74);
              uVar7 = (ulong)uVar13;
              if ((*(uint *)(this + 0x60) < uVar13) &&
                 (__dest = *(void **)(this + 0x68), __dest != (void *)0x0)) {
                if (uVar13 != 1) {
                  memmove(__dest,(void *)((long)__dest + (ulong)*(uint *)(this + 0x70)),
                          (ulong)((uVar13 - 1) * *(uint *)(this + 0x70)));
                  uVar13 = *(uint *)(this + 0x74);
                  uVar7 = (ulong)uVar13;
                  if (uVar13 == 0) goto LAB_0010eb10;
                }
                uVar7 = (ulong)(uVar13 - 1);
                *(uint *)(this + 0x74) = uVar13 - 1;
              }
            }
          }
LAB_0010eb10:
          lVar11 = lVar11 + 4;
        } while ((ulong)uVar10 << 2 != lVar11);
        if ((int)uVar7 == 0) goto LAB_0010ed15;
        uVar10 = 0;
        fVar18 = _LC9;
        do {
          fVar16 = fVar15;
          lVar11 = *(long *)(this + 0x68);
          uVar12 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar12;
          uVar13 = *(uint *)(lVar11 + 4 + uVar7 * 8);
          *(uint *)(this + 0x74) = uVar12;
          if (*(uint *)(this + 0x78) < uVar12) {
            if ((*(uint *)(this + 0x78) == 0) || (uVar12 = (uVar12 >> 2) + uVar12, uVar12 != 0)) {
              if (uVar12 * *(int *)(this + 0x70) == 0) {
                uVar8 = 0;
                if (lVar11 != 0) {
                  if (s_free == (undefined *)0x0) goto LAB_0010ec4d;
                  (*(code *)s_free)();
                  uVar7 = (ulong)*(uint *)(this + 0x74);
                  uVar8 = 0;
                }
              }
              else {
LAB_0010ec4d:
                uVar8 = (*(code *)s_realloc)();
                uVar7 = (ulong)*(uint *)(this + 0x74);
              }
              *(undefined8 *)(this + 0x68) = uVar8;
            }
            else if (lVar11 != 0) {
              if (s_free == (undefined *)0x0) {
                (*(code *)s_realloc)(lVar11,0);
              }
              else {
                (*(code *)s_free)();
              }
              *(undefined8 *)(this + 0x68) = 0;
              uVar7 = (ulong)*(uint *)(this + 0x74);
            }
            *(uint *)(this + 0x78) = uVar12;
          }
          local_4c = Mesh::computeFaceCenter(*(Mesh **)(*(long *)this + 0x30),uVar13);
          fVar17 = *(float *)(lVar2 + 0x40) - (float)((ulong)local_4c >> 0x20);
          fVar14 = *(float *)(lVar2 + 0x44) - fVar16;
          fVar15 = *(float *)(lVar2 + 0x3c) - (float)local_4c;
          fVar15 = fVar15 * fVar15 + fVar17 * fVar17;
          fVar14 = SQRT(fVar14 * fVar14 + fVar15);
          if (fVar14 < fVar18) {
            fVar18 = fVar14;
            uVar10 = uVar13;
          }
          local_44 = fVar16;
        } while ((int)uVar7 != 0);
      }
      if (*(uint *)(lVar2 + 0x98) != uVar10) {
        *(uint *)(lVar2 + 0x98) = uVar10;
        local_59 = 1;
      }
      local_70 = local_70 + 8;
    } while ((ulong)uVar1 << 3 != local_70);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_59;
}



/* xatlas::internal::segment::ClusteredCharts::isChartParameterizationValid(xatlas::internal::segment::ClusteredCharts::Chart
   const*) */

uint __thiscall
xatlas::internal::segment::ClusteredCharts::isChartParameterizationValid
          (ClusteredCharts *this,Chart *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  void *pvVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  uVar3 = *(uint *)(param_1 + 0x54);
  pcVar5 = *(char **)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar3 == 0) {
    *(undefined4 *)(this + 0xa4) = 0;
    *(char **)(this + 0xb0) = pcVar5;
    *(undefined4 *)(this + 0xb8) = *(undefined4 *)(this + 0x1c);
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined4 *)(this + 200) = 0;
    puVar8 = *(undefined4 **)(*(long *)this + 0x30);
    *(undefined4 *)(this + 0xf4) = 0;
LAB_0010f150:
    uVar14 = UniformGrid2::intersect(*puVar8,this + 0x98,0,0,0,0);
    uVar14 = uVar14 ^ 1;
  }
  else {
    piVar11 = *(int **)(param_1 + 0x48);
    uVar9 = 0;
    piVar12 = piVar11 + uVar3;
    piVar7 = piVar11;
    do {
      uVar14 = *piVar7 * 3;
      fVar1 = *(float *)((long)(pcVar5 + (ulong)uVar14 * 8) + 4);
      fVar2 = *(float *)(pcVar5 + (ulong)uVar14 * 8);
      piVar7 = piVar7 + 1;
      uVar9 = uVar9 + (((*(float *)((long)(pcVar5 + (ulong)(uVar14 + 2) * 8) + 4) - fVar1) *
                        (*(float *)(pcVar5 + (ulong)(uVar14 + 1) * 8) - fVar2) -
                       (*(float *)((long)(pcVar5 + (ulong)(uVar14 + 1) * 8) + 4) - fVar1) *
                       (*(float *)(pcVar5 + (ulong)(uVar14 + 2) * 8) - fVar2)) * _LC11 < 0.0);
    } while (piVar7 != piVar12);
    if ((uVar9 == 0) || (uVar14 = 0, uVar3 == uVar9)) {
      lVar10 = *(long *)this;
      *(char **)(this + 0xb0) = pcVar5;
      lVar13 = 0;
      *(undefined4 *)(this + 0xa4) = 0;
      *(undefined4 *)(this + 0xb8) = *(undefined4 *)(this + 0x1c);
      puVar8 = *(undefined4 **)(lVar10 + 0x30);
      *(undefined8 *)(this + 0xc0) = 0;
      *(undefined4 *)(this + 200) = 0;
      *(undefined4 *)(this + 0xf4) = 0;
      do {
        uVar9 = *(int *)((long)piVar11 + lVar13) * 3;
        uVar14 = uVar9 + 3;
        do {
          uVar6 = *(uint *)(*(long *)(puVar8 + 0x42) + (ulong)uVar9 * 4);
          if ((uVar6 == 0xffffffff) ||
             (pcVar5 = (char *)(ulong)*(uint *)param_1,
             *(uint *)(*(long *)(this + 0x30) + ((ulong)uVar6 / 3) * 4) != *(uint *)param_1)) {
            pvVar4 = *(void **)(this + 0x98);
            uVar6 = *(int *)(this + 0xa4) + 1;
            *(uint *)(this + 0xa4) = uVar6;
            local_44 = uVar9;
            if (*(uint *)(this + 0xa8) < uVar6) {
              if ((*(uint *)(this + 0xa8) == 0) || (uVar6 = uVar6 + (uVar6 >> 2), uVar6 != 0)) {
                pvVar4 = (void *)Realloc(pvVar4,(ulong)(uVar6 * *(int *)(this + 0xa0)),uVar6,pcVar5,
                                         (int)piVar12);
                *(void **)(this + 0x98) = pvVar4;
                *(uint *)(this + 0xa8) = uVar6;
                goto LAB_0010f070;
              }
              if (pvVar4 == (void *)0x0) {
                *(undefined4 *)(this + 0xa8) = 0;
              }
              else {
                Realloc(pvVar4,0,0,pcVar5,(int)piVar12);
                lVar10 = *(long *)this;
                *(undefined8 *)(this + 0x98) = 0;
                *(undefined4 *)(this + 0xa8) = 0;
              }
            }
            else {
LAB_0010f070:
              if (pvVar4 != (void *)0x0) {
                memcpy((void *)((long)pvVar4 +
                               (ulong)((*(int *)(this + 0xa4) + -1) * *(uint *)(this + 0xa0))),
                       &local_44,(ulong)*(uint *)(this + 0xa0));
              }
              lVar10 = *(long *)this;
            }
            puVar8 = *(undefined4 **)(lVar10 + 0x30);
          }
          uVar9 = uVar9 + 1;
        } while (uVar14 != uVar9);
        lVar13 = lVar13 + 4;
        if (lVar13 == (ulong)uVar3 * 4) goto LAB_0010f150;
        piVar11 = *(int **)(param_1 + 0x48);
      } while( true );
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::segment::ClusteredCharts::isNormalSeam(unsigned int) const */

bool __thiscall
xatlas::internal::segment::ClusteredCharts::isNormalSeam(ClusteredCharts *this,uint param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  bVar9 = false;
  lVar7 = *(long *)(*(long *)this + 0x30);
  uVar3 = *(uint *)(*(long *)(lVar7 + 0x108) + (ulong)param_1 * 4);
  if (uVar3 != 0xffffffff) {
    if ((*(byte *)(lVar7 + 4) & 2) == 0) {
      if (*(int *)(*(long *)(*(long *)(this + 8) + 0x38) + (ulong)(uVar3 / 3) * 4) !=
          *(int *)(*(long *)(*(long *)(this + 8) + 0x38) + (ulong)(param_1 / 3) * 4)) {
        lVar7 = *(long *)(*(long *)this + 0x98);
        pfVar1 = (float *)(lVar7 + (ulong)(uVar3 / 3) * 0xc);
        pfVar2 = (float *)(lVar7 + (ulong)(param_1 / 3) * 0xc);
        if (_LC7 < (float)((uint)(*pfVar2 - *pfVar1) & _LC37)) {
          return true;
        }
        if (_LC7 < (float)((uint)(pfVar2[1] - pfVar1[1]) & _LC37)) {
          return true;
        }
        bVar9 = _LC7 < (float)((uint)(pfVar2[2] - pfVar1[2]) & _LC37);
      }
    }
    else {
      lVar8 = *(long *)(lVar7 + 0x40);
      uVar4 = *(uint *)(lVar8 + (ulong)param_1 * 4);
      uVar5 = *(uint *)(lVar8 + (ulong)uVar3 * 4);
      uVar6 = *(uint *)(lVar8 + (ulong)((param_1 % 3 + 1) % 3 + (param_1 / 3) * 3) * 4);
      uVar3 = *(uint *)(lVar8 + (ulong)((uVar3 % 3 + 1) % 3 + (uVar3 / 3) * 3) * 4);
      if ((uVar3 != uVar4) || (uVar5 != uVar6)) {
        lVar7 = *(long *)(lVar7 + 0x70);
        pfVar1 = (float *)(lVar7 + (ulong)uVar3 * 0xc);
        pfVar2 = (float *)(lVar7 + (ulong)uVar4 * 0xc);
        if (((float)((uint)(*pfVar2 - *pfVar1) & _LC37) <= _LC7) &&
           (((float)((uint)(pfVar2[1] - pfVar1[1]) & _LC37) <= _LC7 &&
            ((float)((uint)(pfVar2[2] - pfVar1[2]) & _LC37) <= _LC7)))) {
          pfVar1 = (float *)(lVar7 + (ulong)uVar5 * 0xc);
          pfVar2 = (float *)(lVar7 + (ulong)uVar6 * 0xc);
          if (((float)((uint)(*pfVar2 - *pfVar1) & _LC37) <= _LC7) &&
             ((float)((uint)(pfVar2[1] - pfVar1[1]) & _LC37) <= _LC7)) {
            return _LC7 < (float)((uint)(pfVar2[2] - pfVar1[2]) & _LC37);
          }
        }
        return true;
      }
    }
  }
  return bVar9;
}



/* xatlas::internal::segment::ClusteredCharts::computeNormalSeamMetric(xatlas::internal::segment::ClusteredCharts::Chart*,
   unsigned int) const */

void __thiscall
xatlas::internal::segment::ClusteredCharts::computeNormalSeamMetric
          (ClusteredCharts *this,Chart *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  
  lVar2 = *(long *)(*(long *)this + 0x30);
  lVar3 = *(long *)(lVar2 + 0x108);
  lVar4 = *(long *)(*(long *)(this + 8) + 0x20);
  uVar7 = (ulong)param_2;
  do {
    uVar1 = (int)uVar7 * 3;
    uVar9 = (ulong)uVar1;
    uVar12 = (ulong)uVar1;
    uVar1 = 1;
    uVar8 = 0;
    while( true ) {
      do {
        uVar10 = uVar1;
        uVar1 = *(uint *)(lVar3 + uVar9 * 4);
        uVar11 = (uint)uVar12;
        if (((uVar1 != 0xffffffff) &&
            (*(int *)(*(long *)(this + 0x30) + (ulong)(uVar1 / 3) * 4) == *(int *)param_1)) &&
           ((lVar5 = *(long *)(lVar2 + 0x40),
            *(int *)(lVar5 + uVar9 * 4) !=
            *(int *)(lVar5 + (ulong)((uVar1 % 3 + 1) % 3 + (uVar1 / 3) * 3) * 4) ||
            (iVar6 = (int)(uVar9 / 3),
            *(int *)(lVar5 + (ulong)((uVar11 + iVar6 * -3 + 1) % 3 + iVar6 * 3) * 4) !=
            *(int *)(lVar5 + (ulong)uVar1 * 4))))) {
          isNormalSeam(this,uVar11);
        }
        uVar1 = uVar10;
      } while (2 < uVar8);
      if (uVar10 == 3) break;
      uVar9 = (ulong)(uVar11 + 1);
      uVar12 = uVar9;
      uVar1 = uVar10 + 1;
      uVar8 = uVar10;
    }
    uVar1 = *(uint *)(lVar4 + uVar7 * 4);
    uVar7 = (ulong)uVar1;
  } while (param_2 != uVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::segment::ClusteredCharts::computeCost(xatlas::internal::segment::ClusteredCharts::Chart*,
   unsigned int) const */

float __thiscall
xatlas::internal::segment::ClusteredCharts::computeCost
          (ClusteredCharts *this,Chart *param_1,uint param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_44;
  float fStack_40;
  
  lVar11 = *(long *)this;
  fVar4 = *(float *)(param_1 + 0x28);
  lVar12 = *(long *)(*(long *)(this + 8) + 0x20);
  uVar24 = param_2;
  fVar31 = fVar4;
  do {
    fVar31 = fVar31 + *(float *)(*(long *)(lVar11 + 0x68) + (ulong)uVar24 * 4);
    uVar24 = *(uint *)(lVar12 + (ulong)uVar24 * 4);
  } while (param_2 != uVar24);
  lVar13 = *(long *)(lVar11 + 0x30);
  lVar14 = *(long *)(*(long *)(this + 8) + 0x38);
  fVar5 = *(float *)(param_1 + 0x2c);
  iVar7 = *(int *)param_1;
  iVar8 = *(int *)(lVar14 + (ulong)uVar24 * 4);
  lVar15 = *(long *)(lVar11 + 0x50);
  lVar16 = *(long *)(lVar13 + 0x108);
  uVar22 = uVar24;
  fVar28 = fVar5;
LAB_0010f788:
  uVar19 = (ulong)(uVar22 * 3);
  uVar20 = 0;
  uVar21 = uVar19;
LAB_0010f798:
  uVar9 = *(uint *)(lVar16 + uVar19 * 4);
  fVar33 = *(float *)(lVar15 + uVar19 * 4);
  do {
    if (uVar9 == 0xffffffff) {
LAB_0010f7bf:
      fVar28 = fVar28 + fVar33;
    }
    else if (iVar8 != *(int *)(lVar14 + ((ulong)uVar9 / 3) * 4)) {
      if (iVar7 != *(int *)(*(long *)(this + 0x30) + ((ulong)uVar9 / 3) * 4)) goto LAB_0010f7bf;
      fVar28 = fVar28 - fVar33;
    }
    if (2 < uVar20) goto LAB_0010f798;
    uVar20 = uVar20 + 1;
    if (uVar20 == 3) {
      uVar22 = *(uint *)(lVar12 + (ulong)uVar22 * 4);
      if (uVar22 != uVar24) goto LAB_0010f788;
      fVar33 = *(float *)(lVar11 + 8);
      if (0.0 <= fVar28) {
        if ((0.0 < fVar33) && (fVar33 < fVar31)) {
          return _LC9;
        }
        if ((0.0 < *(float *)(lVar11 + 0xc)) && (*(float *)(lVar11 + 0xc) < fVar28)) {
          return _LC9;
        }
      }
      else if (fVar33 <= 0.0) {
        fVar28 = 0.0;
      }
      else {
        fVar28 = 0.0;
        if (fVar33 < fVar31) {
          return _LC9;
        }
      }
      puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x98) + (ulong)uVar24 * 0xc);
      uVar17 = *puVar1;
      local_44 = (float)uVar17;
      fStack_40 = (float)((ulong)uVar17 >> 0x20);
      fVar33 = _LC4 - (local_44 * *(float *)(param_1 + 0x1c) +
                       fStack_40 * *(float *)(param_1 + 0x20) +
                      *(float *)(puVar1 + 1) * *(float *)(param_1 + 0x24));
      if ((fVar33 < _LC4) && (fVar33 < __LC43)) {
        fVar6 = *(float *)(lVar11 + 0x10);
        fVar26 = (float)computeNormalSeamMetric(this,param_1,uVar24);
        if ((*(float *)(lVar11 + 0x1c) < __LC44) || (fVar26 <= 0.0)) {
          fVar27 = 0.0;
          fVar29 = 0.0;
          uVar22 = uVar24;
          break;
        }
      }
      return _LC9;
    }
    uVar19 = (ulong)((int)uVar21 + 1);
    uVar9 = *(uint *)(lVar16 + uVar19 * 4);
    fVar33 = *(float *)(lVar15 + uVar19 * 4);
    uVar21 = uVar19;
  } while( true );
LAB_0010f9b0:
  uVar19 = (ulong)(uVar22 * 3);
  uVar20 = 0;
  uVar21 = uVar19;
LAB_0010f9c0:
  uVar9 = *(uint *)(lVar16 + uVar19 * 4);
  fVar30 = *(float *)(lVar15 + uVar19 * 4);
  do {
    if (uVar9 == 0xffffffff) {
LAB_0010f9e7:
      fVar29 = fVar29 + fVar30;
    }
    else if (iVar8 != *(int *)(lVar14 + ((ulong)uVar9 / 3) * 4)) {
      if (iVar7 != *(int *)(*(long *)(this + 0x30) + ((ulong)uVar9 / 3) * 4)) goto LAB_0010f9e7;
      fVar27 = fVar27 + fVar30;
    }
    if (2 < uVar20) goto LAB_0010f9c0;
    uVar20 = uVar20 + 1;
    if (uVar20 == 3) {
      uVar22 = *(uint *)(lVar12 + (ulong)uVar22 * 4);
      if (uVar24 != uVar22) goto LAB_0010f9b0;
      fVar27 = (fVar29 - fVar27) / (fVar29 + fVar27);
      if (0.0 <= fVar27) {
        fVar27 = 0.0;
      }
      fVar30 = 0.0;
      fVar29 = 0.0;
      uVar22 = uVar24;
      break;
    }
    uVar19 = (ulong)((int)uVar21 + 1);
    uVar9 = *(uint *)(lVar16 + uVar19 * 4);
    fVar30 = *(float *)(lVar15 + uVar19 * 4);
    uVar21 = uVar19;
  } while( true );
LAB_0010fa88:
  uVar20 = 0;
  uVar19 = (ulong)(uVar22 * 3);
  uVar21 = uVar19;
LAB_0010fa98:
  uVar9 = *(uint *)(lVar16 + uVar19 * 4);
  do {
    if (uVar9 != 0xffffffff) {
      uVar23 = (ulong)uVar9;
      if (iVar7 == *(int *)(*(long *)(this + 0x30) + (uVar23 / 3) * 4)) {
        fVar32 = *(float *)(lVar15 + uVar19 * 4);
        fVar30 = fVar30 + fVar32;
        iVar8 = (int)(uVar19 / 3);
        uVar25 = (ulong)(iVar8 * 3 + ((int)uVar21 + iVar8 * -3 + 1U) % 3);
        lVar14 = *(long *)(lVar13 + 0x40);
        uVar10 = *(uint *)(lVar14 + uVar19 * 4);
        uVar9 = *(uint *)(lVar14 + (ulong)((uVar9 % 3 + 1) % 3 + (uVar9 / 3) * 3) * 4);
        if ((uVar10 != uVar9) || (*(int *)(lVar14 + uVar25 * 4) != *(int *)(lVar14 + uVar23 * 4))) {
          lVar18 = *(long *)(lVar13 + 0x88);
          pfVar2 = (float *)(lVar18 + (ulong)uVar9 * 8);
          pfVar3 = (float *)(lVar18 + (ulong)uVar10 * 8);
          if ((*pfVar3 == *pfVar2) && (pfVar3[1] == pfVar2[1])) {
            pfVar2 = (float *)(lVar18 + (ulong)*(uint *)(lVar14 + uVar23 * 4) * 8);
            pfVar3 = (float *)(lVar18 + (ulong)*(uint *)(lVar14 + uVar25 * 4) * 8);
            if ((*pfVar3 == *pfVar2) && (pfVar3[1] == pfVar2[1])) goto LAB_0010fb94;
          }
          fVar29 = fVar29 + fVar32;
        }
      }
    }
LAB_0010fb94:
    if (2 < uVar20) goto LAB_0010fa98;
    uVar20 = uVar20 + 1;
    if (uVar20 == 3) {
      uVar22 = *(uint *)(lVar12 + (ulong)uVar22 * 4);
      if (uVar24 == uVar22) {
        fVar32 = 0.0;
        if (0.0 < fVar29) {
          fVar32 = fVar29 / fVar30;
        }
        return fVar32 * *(float *)(lVar11 + 0x20) +
               *(float *)(lVar11 + 0x18) * fVar27 +
               *(float *)(lVar11 + 0x14) *
               (_LC4 - ((fVar5 * fVar5) / fVar4) / ((fVar28 * fVar28) / fVar31)) +
               *(float *)(lVar11 + 0x1c) * fVar26 + fVar33 * fVar6 + 0.0;
      }
      goto LAB_0010fa88;
    }
    uVar19 = (ulong)((int)uVar21 + 1);
    uVar9 = *(uint *)(lVar16 + uVar19 * 4);
    uVar21 = uVar19;
  } while( true );
}



/* xatlas::internal::segment::ClusteredCharts::addFaceToChart(xatlas::internal::segment::ClusteredCharts::Chart*,
   unsigned int) */

undefined8 __thiscall
xatlas::internal::segment::ClusteredCharts::addFaceToChart
          (ClusteredCharts *this,Chart *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  int *piVar13;
  float *pfVar14;
  long lVar15;
  undefined8 uVar16;
  uint *puVar17;
  char *pcVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  Vector3 *pVVar24;
  ulong uVar25;
  Vector3 *pVVar26;
  Mesh *this_00;
  int iVar27;
  Fit *pFVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long in_FS_OFFSET;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [12];
  uint local_8c;
  undefined1 local_88 [12];
  undefined1 local_78 [12];
  undefined1 local_68 [12];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(param_1 + 0x54);
  ArrayBase::push_back((uchar *)(param_1 + 0x48));
  lVar15 = *(long *)(this + 8);
  uVar30 = *(uint *)(param_1 + 0x54);
  uVar25 = (ulong)uVar30;
  pcVar18 = *(char **)(lVar15 + 0x20);
  local_8c = *(uint *)(pcVar18 + (ulong)param_2 * 4);
  uVar19 = (ulong)local_8c;
  if (param_2 != local_8c) {
    do {
      uVar30 = uVar30 + 1;
      pvVar12 = *(void **)(param_1 + 0x48);
      *(uint *)(param_1 + 0x54) = uVar30;
      if (*(uint *)(param_1 + 0x58) < uVar30) {
        uVar10 = uVar30;
        if ((*(uint *)(param_1 + 0x58) == 0) || (uVar10 = (uVar30 >> 2) + uVar30, uVar10 != 0)) {
          pvVar12 = (void *)Realloc(pvVar12,(ulong)(uVar10 * *(int *)(param_1 + 0x50)),(int)lVar15,
                                    pcVar18,(int)uVar25);
          *(uint *)(param_1 + 0x58) = uVar10;
          uVar30 = *(uint *)(param_1 + 0x54);
          *(void **)(param_1 + 0x48) = pvVar12;
          goto LAB_0010fcc3;
        }
        if (pvVar12 == (void *)0x0) {
          *(undefined4 *)(param_1 + 0x58) = 0;
        }
        else {
          Realloc(pvVar12,0,(int)lVar15,pcVar18,(int)uVar25);
          *(undefined4 *)(param_1 + 0x58) = 0;
          uVar30 = *(uint *)(param_1 + 0x54);
          *(undefined8 *)(param_1 + 0x48) = 0;
          lVar15 = *(long *)(this + 8);
        }
      }
      else {
LAB_0010fcc3:
        if (pvVar12 != (void *)0x0) {
          memcpy((void *)((long)pvVar12 + (ulong)((uVar30 - 1) * *(uint *)(param_1 + 0x50))),
                 &local_8c,(ulong)*(uint *)(param_1 + 0x50));
          uVar30 = *(uint *)(param_1 + 0x54);
        }
        lVar15 = *(long *)(this + 8);
      }
      local_8c = *(uint *)(*(long *)(lVar15 + 0x20) + uVar19 * 4);
      uVar19 = (ulong)local_8c;
    } while (param_2 != local_8c);
  }
  local_48 = 0.0;
  local_68._0_8_ = 0;
  local_68._8_4_ = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  if (uVar29 == 0) {
    lVar15 = *(long *)this;
    this_00 = *(Mesh **)(lVar15 + 0x30);
    puVar1 = (undefined8 *)(*(long *)(lVar15 + 0x98) + uVar19 * 0xc);
    pVVar24 = *(Vector3 **)((Vector3 *)this_00 + 0x40);
    uStack_50 = *puVar1;
    local_48 = *(float *)(puVar1 + 1);
    local_68 = normalize((Vector3 *)this_00);
    auVar37 = cross((Vector3 *)this_00,pVVar24);
    uStack_54 = auVar37._8_4_;
    uStack_5c = auVar37._0_4_;
    uStack_58 = auVar37._4_4_;
  }
  else {
    ArrayBase::resize((int)this + 0x80,SUB41(uVar30 * 3,0));
    if (uVar30 == 0) {
      pFVar28 = *(Fit **)(this + 0x80);
    }
    else {
      pFVar28 = *(Fit **)(this + 0x80);
      iVar27 = 0;
      piVar20 = *(int **)(param_1 + 0x48);
      lVar15 = *(long *)(*(long *)(*(long *)this + 0x30) + 0x40);
      lVar22 = *(long *)(*(long *)(*(long *)this + 0x30) + 0x58);
      do {
        iVar8 = *piVar20;
        iVar11 = 0;
        do {
          uVar21 = iVar11 + iVar8 * 3;
          uVar10 = iVar11 + iVar27;
          iVar11 = iVar11 + 1;
          puVar1 = (undefined8 *)(lVar22 + (ulong)*(uint *)(lVar15 + (ulong)uVar21 * 4) * 0xc);
          *(undefined8 *)(pFVar28 + (ulong)uVar10 * 0xc) = *puVar1;
          *(undefined4 *)(pFVar28 + (ulong)uVar10 * 0xc + 8) = *(undefined4 *)(puVar1 + 1);
        } while (iVar11 != 3);
        iVar27 = iVar27 + 3;
        piVar20 = piVar20 + 1;
      } while (uVar30 * 3 != iVar27);
    }
    pVVar24 = (Vector3 *)&uStack_50;
    pVVar26 = (Vector3 *)(ulong)*(uint *)(this + 0x8c);
    cVar9 = Fit::computeLeastSquaresNormal(pFVar28,pVVar26,pVVar24);
    if (cVar9 == '\0') {
      cVar9 = Fit::computeEigen(pFVar28);
      if (cVar9 == '\0') goto LAB_00110632;
      fVar36 = (float)uStack_50;
      fVar35 = (float)((ulong)uStack_50 >> 0x20);
      fVar33 = local_48;
      uVar16 = uStack_50;
    }
    else {
      local_68 = Basis::computeTangent(pVVar24);
      fVar33 = local_48;
      fVar36 = (float)uStack_50;
      fVar35 = (float)((ulong)uStack_50 >> 0x20);
      uVar16 = uStack_50;
      local_78 = cross(pVVar24,pVVar26);
      uStack_54 = local_78._8_4_;
      uStack_5c = local_78._0_4_;
      uStack_58 = local_78._4_4_;
    }
    pfVar14 = (float *)(*(long *)(*(long *)this + 0x98) + (ulong)param_2 * 0xc);
    if (*pfVar14 * fVar36 + pfVar14[1] * fVar35 + pfVar14[2] * fVar33 < 0.0) {
      local_48 = (float)((uint)fVar33 ^ _LC6);
      uStack_50 = CONCAT44((uint)((ulong)uVar16 >> 0x20) ^ _LC45._4_4_,(uint)uVar16 ^ (uint)_LC45);
    }
    if (*(uint *)(param_1 + 0x54) != 0) {
      lVar15 = *(long *)(*(long *)this + 0x30);
      piVar13 = *(int **)(param_1 + 0x48);
      fVar33 = *(float *)(param_1 + 0x10);
      fVar35 = *(float *)(param_1 + 0x14);
      lVar22 = *(long *)(lVar15 + 0x40);
      lVar15 = *(long *)(lVar15 + 0x58);
      piVar20 = piVar13 + *(uint *)(param_1 + 0x54);
      fVar36 = *(float *)(param_1 + 0x18);
      fVar34 = *(float *)(param_1 + 4);
      fVar3 = *(float *)(param_1 + 8);
      fVar4 = *(float *)(param_1 + 0xc);
      lVar31 = *(long *)(this + 0x10);
      do {
        uVar10 = *piVar13 * 3;
        uVar21 = uVar10 + 3;
        do {
          uVar25 = (ulong)uVar10;
          uVar10 = uVar10 + 1;
          pfVar14 = (float *)(lVar15 + (ulong)*(uint *)(lVar22 + uVar25 * 4) * 0xc);
          fVar5 = *pfVar14;
          fVar6 = pfVar14[1];
          fVar7 = pfVar14[2];
          pfVar14 = (float *)(lVar31 + uVar25 * 8);
          *pfVar14 = fVar5 * fVar34 + fVar6 * fVar3 + fVar7 * fVar4;
          pfVar14[1] = fVar5 * fVar33 + fVar6 * fVar35 + fVar7 * fVar36;
        } while (uVar21 != uVar10);
        piVar13 = piVar13 + 1;
      } while (piVar20 != piVar13);
    }
    if (uVar29 < uVar30) {
      lVar22 = *(long *)(param_1 + 0x48);
      lVar31 = *(long *)(this + 0x30);
      lVar15 = (ulong)uVar29 * 4;
      puVar17 = (uint *)(lVar22 + lVar15);
      lVar32 = ((ulong)((uVar30 - uVar29) - 1) + (ulong)uVar29) * 4;
      do {
        uVar10 = *puVar17;
        puVar17 = puVar17 + 1;
        *(undefined4 *)(lVar31 + (ulong)uVar10 * 4) = *(undefined4 *)param_1;
      } while (puVar17 != (uint *)(lVar22 + 4 + lVar32));
      cVar9 = isChartParameterizationValid(this,param_1);
      if (cVar9 == '\0') {
        lVar22 = *(long *)(param_1 + 0x48);
        lVar31 = *(long *)(this + 0x30);
        puVar17 = (uint *)(lVar22 + lVar15);
        do {
          uVar30 = *puVar17;
          puVar17 = puVar17 + 1;
          *(undefined4 *)(lVar31 + (ulong)uVar30 * 4) = 0xffffffff;
        } while ((uint *)(lVar22 + 4 + lVar32) != puVar17);
LAB_00110632:
        ArrayBase::resize((uint)(param_1 + 0x48),SUB41(uVar29,0));
        auVar37._8_4_ = local_88._8_4_;
        auVar37._0_8_ = local_88._0_8_;
        uVar16 = 0;
LAB_00110335:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar16;
        }
        local_88 = auVar37;
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar15 = *(long *)this;
      this_00 = *(Mesh **)(lVar15 + 0x30);
    }
    else {
      cVar9 = isChartParameterizationValid(this,param_1);
      if (cVar9 == '\0') goto LAB_00110632;
      lVar15 = *(long *)this;
      this_00 = *(Mesh **)(lVar15 + 0x30);
    }
  }
  auVar37._8_4_ = local_88._8_4_;
  auVar37._0_8_ = local_88._0_8_;
  lVar22 = *(long *)(this + 8);
  fVar33 = *(float *)(param_1 + 0x28);
  lVar31 = *(long *)(lVar22 + 0x20);
  lVar32 = *(long *)(lVar15 + 0x68);
  *(float *)(param_1 + 0x24) = local_48;
  *(undefined8 *)(param_1 + 4) = local_68._0_8_;
  *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_5c,local_68._8_4_);
  *(ulong *)(param_1 + 0x14) = CONCAT44(uStack_54,uStack_58);
  *(undefined8 *)(param_1 + 0x1c) = uStack_50;
  uVar10 = param_2;
  do {
    fVar33 = fVar33 + *(float *)(lVar32 + (ulong)uVar10 * 4);
    uVar10 = *(uint *)(lVar31 + (ulong)uVar10 * 4);
  } while (param_2 != uVar10);
  lVar22 = *(long *)(lVar22 + 0x38);
  iVar27 = *(int *)param_1;
  fVar35 = *(float *)(param_1 + 0x2c);
  lVar32 = *(long *)(lVar15 + 0x50);
  *(float *)(param_1 + 0x28) = fVar33;
  uVar10 = param_2;
LAB_0010fee8:
  uVar19 = (ulong)(uVar10 * 3);
  uVar21 = 0;
  uVar25 = uVar19;
LAB_0010fef8:
  uVar23 = *(uint *)(*(long *)(this_00 + 0x108) + uVar19 * 4);
  fVar33 = *(float *)(lVar32 + uVar19 * 4);
  if (uVar23 == 0xffffffff) goto LAB_0010ff20;
LAB_0010ff07:
  if (*(int *)(lVar22 + (ulong)param_2 * 4) == *(int *)(lVar22 + ((ulong)uVar23 / 3) * 4))
  goto LAB_0010ff24;
  if (iVar27 == *(int *)(*(long *)(this + 0x30) + ((ulong)uVar23 / 3) * 4)) {
    fVar35 = fVar35 - fVar33;
    goto LAB_0010ff24;
  }
LAB_0010ff20:
  while( true ) {
    fVar35 = fVar35 + fVar33;
LAB_0010ff24:
    if (2 < uVar21) goto LAB_0010fef8;
    uVar21 = uVar21 + 1;
    if (uVar21 == 3) break;
    uVar19 = (ulong)((int)uVar25 + 1);
    uVar23 = *(uint *)(*(long *)(this_00 + 0x108) + uVar19 * 4);
    fVar33 = *(float *)(lVar32 + uVar19 * 4);
    uVar25 = uVar19;
    if (uVar23 != 0xffffffff) goto LAB_0010ff07;
  }
  uVar10 = *(uint *)(lVar31 + (ulong)uVar10 * 4);
  if (param_2 != uVar10) goto LAB_0010fee8;
  if (fVar35 < 0.0) {
    fVar35 = 0.0;
  }
  fVar33 = *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x2c) = fVar35;
  fVar34 = _LC4;
  fVar35 = *(float *)(param_1 + 0x30);
  fVar36 = *(float *)(param_1 + 0x34);
  if (uVar29 < uVar30) {
    lVar22 = *(long *)(param_1 + 0x48);
    lVar31 = *(long *)(lVar15 + 0xb8);
    lVar32 = *(long *)(this + 0x30);
    puVar17 = (uint *)(lVar22 + (ulong)uVar29 * 4);
    while( true ) {
      uVar10 = *puVar17;
      *(int *)(lVar32 + (ulong)uVar10 * 4) = iVar27;
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
      puVar2 = (uint *)(lVar31 + (ulong)(uVar10 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar10 & 0x1f);
      local_88 = auVar37;
      auVar37 = Mesh::computeFaceCenter(this_00,uVar10);
      fVar35 = fVar35 + auVar37._0_4_;
      fVar36 = fVar36 + auVar37._4_4_;
      fVar33 = fVar33 + auVar37._8_4_;
      *(float *)(param_1 + 0x30) = fVar35;
      *(float *)(param_1 + 0x34) = fVar36;
      *(float *)(param_1 + 0x38) = fVar33;
      fVar34 = _LC4;
      if (puVar17 == (uint *)(lVar22 + ((ulong)((uVar30 - uVar29) - 1) + (ulong)uVar29) * 4)) break;
      iVar27 = *(int *)param_1;
      puVar17 = puVar17 + 1;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    fVar34 = fVar34 / (float)*(uint *)(param_1 + 0x54);
    *(float *)(param_1 + 0x44) = fVar33 * fVar34;
    *(ulong *)(param_1 + 0x3c) = CONCAT44(fVar34 * fVar36,fVar34 * fVar35);
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    fVar34 = fVar34 / (float)*(uint *)(param_1 + 0x54);
    *(float *)(param_1 + 0x44) = fVar34 * fVar33;
    *(ulong *)(param_1 + 0x3c) = CONCAT44(fVar34 * fVar36,fVar34 * fVar35);
    if (uVar30 == 0) goto LAB_00110330;
    lVar22 = *(long *)(param_1 + 0x48);
  }
  lVar31 = 0;
LAB_001100e8:
  uVar29 = *(int *)(lVar22 + lVar31) * 3;
  iVar27 = uVar29 + 3;
  do {
    uVar10 = *(uint *)(*(long *)(this_00 + 0x108) + (ulong)uVar29 * 4);
    if (uVar10 != 0xffffffff) {
      uVar25 = (ulong)uVar10 / 3;
      if ((1 << ((byte)uVar25 & 0x1f) &
          *(uint *)(*(long *)(lVar15 + 0xb8) + ((ulong)uVar10 / 0x60) * 4)) == 0) {
        if (*(uint *)(param_1 + 0x6c) != 0) {
          piVar13 = *(int **)(param_1 + 0x60);
          piVar20 = piVar13 + *(uint *)(param_1 + 0x6c);
          do {
            if (*piVar13 == *(int *)(*(long *)(*(long *)(this + 8) + 0x38) + uVar25 * 4))
            goto joined_r0x001101fb;
            piVar13 = piVar13 + 1;
          } while (piVar13 != piVar20);
        }
        local_88 = auVar37;
        fVar33 = (float)computeCost(this,param_1,(uint)uVar25);
        auVar37 = local_88;
        if (fVar33 < _LC9) {
          uVar10 = *(uint *)(param_1 + 0x8c);
          local_88._4_4_ = (uint)uVar25;
          local_88._0_4_ = fVar33;
          if (uVar10 != 0) {
            pfVar14 = *(float **)(param_1 + 0x80);
            uVar21 = 0;
            if (pfVar14[(ulong)(uVar10 - 1) * 2] <= fVar33) {
              do {
                if (*pfVar14 <= fVar33 && fVar33 != *pfVar14) break;
                uVar21 = uVar21 + 1;
                pfVar14 = pfVar14 + 2;
              } while (uVar10 != uVar21);
              ArrayBase::resize((uint)(ArrayBase *)(param_1 + 0x80),(bool)((char)uVar10 + '\x01'));
              lVar15 = *(long *)(param_1 + 0x80);
              if (lVar15 != 0) {
                uVar10 = *(uint *)(param_1 + 0x88);
                if (uVar21 < *(int *)(param_1 + 0x8c) - 1U) {
                  uVar23 = (uVar21 + 1) * uVar10;
                  memmove((void *)(lVar15 + (ulong)uVar23),
                          (void *)((ulong)(uVar23 - uVar10) + lVar15),
                          (ulong)(((*(int *)(param_1 + 0x8c) - 1U) - uVar21) * uVar10));
                  lVar15 = *(long *)(param_1 + 0x80);
                  if (lVar15 == 0) goto LAB_001102b6;
                  uVar10 = *(uint *)(param_1 + 0x88);
                }
                memcpy((void *)(lVar15 + (ulong)(uVar21 * uVar10)),local_88,(ulong)uVar10);
              }
LAB_001102b6:
              auVar37._8_4_ = local_88._8_4_;
              auVar37._0_8_ = local_88._0_8_;
              if (*(uint *)(param_1 + 0x78) < *(uint *)(param_1 + 0x8c)) {
                ArrayBase::removeAt((ArrayBase *)(param_1 + 0x80),0);
                auVar37._8_4_ = local_88._8_4_;
                auVar37._0_8_ = local_88._0_8_;
              }
              goto joined_r0x001101fb;
            }
          }
          ArrayBase::push_back((uchar *)(param_1 + 0x80));
          auVar37._8_4_ = local_88._8_4_;
          auVar37._0_8_ = local_88._0_8_;
        }
      }
    }
joined_r0x001101fb:
    if (uVar29 + 1 == iVar27) break;
    uVar29 = uVar29 + 1;
    lVar15 = *(long *)this;
    this_00 = *(Mesh **)(lVar15 + 0x30);
  } while( true );
  lVar31 = lVar31 + 4;
  if (lVar31 == (ulong)uVar30 * 4) {
LAB_00110330:
    uVar16 = 1;
    goto LAB_00110335;
  }
  lVar15 = *(long *)this;
  lVar22 = *(long *)(param_1 + 0x48);
  this_00 = *(Mesh **)(lVar15 + 0x30);
  goto LAB_001100e8;
}



/* xatlas::internal::segment::ClusteredCharts::createChart(float) */

void __thiscall
xatlas::internal::segment::ClusteredCharts::createChart(ClusteredCharts *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  char cVar7;
  Chart *pCVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  uint uVar11;
  ulong uVar12;
  undefined8 in_R8;
  long in_FS_OFFSET;
  float fVar13;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  pCVar8 = (Chart *)(*(code *)s_realloc)(0,0xa0);
  *(undefined8 *)(pCVar8 + 0x4c) = 0x400000000;
  *(undefined8 *)(pCVar8 + 0x44) = 0;
  *(undefined8 *)(pCVar8 + 0x54) = 0;
  *(undefined8 *)(pCVar8 + 0x68) = 4;
  *(undefined8 *)(pCVar8 + 0x88) = 8;
  uVar3 = *(undefined4 *)(this + 0x54);
  *(undefined8 *)(pCVar8 + 0x60) = 0;
  *(undefined4 *)pCVar8 = uVar3;
  *(undefined4 *)(pCVar8 + 0x70) = 0;
  *(undefined4 *)(pCVar8 + 0x78) = 0xffffffff;
  *(undefined8 *)(pCVar8 + 0x80) = 0;
  *(undefined4 *)(pCVar8 + 0x90) = 0;
  *(undefined1 (*) [16])(pCVar8 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar8 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar8 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar8 + 0x34) = (undefined1  [16])0x0;
  ArrayBase::push_back((uchar *)(this + 0x48));
  lVar5 = *(long *)this;
  pcVar10 = (char *)0xaaaaaaab;
  *(undefined4 *)(pCVar8 + 0x98) = 0;
  uVar11 = *(uint *)(*(long *)(lVar5 + 0x30) + 0x4c);
  if (uVar11 < 3) {
    uVar11 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0xb8);
    uVar12 = 0;
    fVar13 = 0.0;
    in_R8 = 1;
    do {
      pcVar10 = (char *)(uVar12 & 0xffffffff);
      if (((1 << ((byte)pcVar10 & 0x1f) & *(uint *)(lVar5 + (uVar12 >> 5 & 0x7ffffff) * 4)) == 0) &&
         (fVar2 = *(float *)(*(long *)(*(long *)(this + 8) + 0x50) +
                            (ulong)*(uint *)(*(long *)(*(long *)(this + 8) + 0x38) + uVar12 * 4) * 4
                            ), fVar13 < fVar2)) {
        *(int *)(pCVar8 + 0x98) = (int)uVar12;
        fVar13 = fVar2;
      }
      uVar12 = uVar12 + 1;
    } while ((uint)uVar12 < uVar11 / 3);
    uVar11 = *(uint *)(pCVar8 + 0x98);
  }
  addFaceToChart(this,pCVar8,uVar11);
  uVar12 = extraout_RDX;
  while (*(int *)(pCVar8 + 0x8c) != 0) {
    pvVar6 = *(void **)(pCVar8 + 0x80);
    uVar11 = *(int *)(pCVar8 + 0x8c) - 1;
    pfVar1 = (float *)((long)pvVar6 + (ulong)uVar11 * 8);
    if (param_1 < *pfVar1) break;
    fVar13 = pfVar1[1];
    *(uint *)(pCVar8 + 0x8c) = uVar11;
    if (*(uint *)(pCVar8 + 0x90) < uVar11) {
      if ((*(uint *)(pCVar8 + 0x90) == 0) || (uVar11 = uVar11 + (uVar11 >> 2), uVar11 != 0)) {
        uVar9 = Realloc(pvVar6,(ulong)(uVar11 * *(int *)(pCVar8 + 0x88)),(int)uVar12,pcVar10,
                        (int)in_R8);
        *(undefined8 *)(pCVar8 + 0x80) = uVar9;
      }
      else if (pvVar6 != (void *)0x0) {
        Realloc(pvVar6,0,(int)uVar12,pcVar10,(int)in_R8);
        *(undefined8 *)(pCVar8 + 0x80) = 0;
      }
      *(uint *)(pCVar8 + 0x90) = uVar11;
    }
    pcVar10 = (char *)(ulong)(uint)fVar13;
    uVar12 = (ulong)((uint)fVar13 >> 5);
    if (((1 << (SUB41(fVar13,0) & 0x1f) & *(uint *)(*(long *)(*(long *)this + 0xb8) + uVar12 * 4))
         == 0) &&
       (cVar7 = addFaceToChart(this,pCVar8,(uint)fVar13), uVar12 = extraout_RDX_00, cVar7 == '\0'))
    {
      pcVar10 = (char *)(ulong)(uint)fVar13;
      ArrayBase::push_back((uchar *)(pCVar8 + 0x60));
      uVar12 = extraout_RDX_01;
    }
  }
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* xatlas::internal::segment::ClusteredCharts::resetCharts() */

void __thiscall xatlas::internal::segment::ClusteredCharts::resetCharts(ClusteredCharts *this)

{
  uint *puVar1;
  long lVar2;
  Chart *pCVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(*(long *)(*(long *)this + 0x30) + 0x4c);
  if (uVar5 < 3) {
    *(undefined4 *)(this + 0x28) = 0;
  }
  else {
    lVar6 = *(long *)(this + 0x30);
    lVar2 = *(long *)(*(long *)this + 0xb8);
    uVar4 = 0;
    do {
      if (*(int *)(lVar6 + uVar4 * 4) != -1) {
        puVar1 = (uint *)(lVar2 + (uVar4 >> 5 & 0x7ffffff) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)uVar4 & 0x1f));
      }
      *(undefined4 *)(lVar6 + uVar4 * 4) = 0xffffffff;
      uVar4 = uVar4 + 1;
      uVar7 = uVar5 / 3;
    } while ((uint)uVar4 < uVar7);
    *(undefined4 *)(this + 0x28) = 0;
    uVar5 = 0;
    do {
      if ((1 << ((byte)uVar5 & 0x1f) & *(uint *)(lVar2 + (ulong)(uVar5 >> 5) * 4)) == 0) {
        *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  uVar5 = *(uint *)(this + 0x54);
  lVar6 = 0;
  if (uVar5 != 0) {
    do {
      pCVar3 = *(Chart **)(*(long *)(this + 0x48) + lVar6);
      lVar6 = lVar6 + 8;
      *(undefined4 *)(pCVar3 + 0x44) = 0;
      *(undefined4 *)(pCVar3 + 0x54) = 0;
      *(undefined4 *)(pCVar3 + 0x8c) = 0;
      *(undefined4 *)(pCVar3 + 0x6c) = 0;
      *(undefined1 (*) [16])(pCVar3 + 4) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar3 + 0x14) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar3 + 0x24) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar3 + 0x34) = (undefined1  [16])0x0;
      addFaceToChart(this,pCVar3,*(uint *)(pCVar3 + 0x98));
    } while (lVar6 != (ulong)uVar5 << 3);
  }
  return;
}



/* xatlas::internal::segment::ClusteredCharts::mergeChart(xatlas::internal::segment::ClusteredCharts::Chart*,
   xatlas::internal::segment::ClusteredCharts::Chart*, float) */

undefined4
xatlas::internal::segment::ClusteredCharts::mergeChart(Chart *param_1,Chart *param_2,float param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  Fit *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  uint *puVar19;
  int *piVar20;
  uint *puVar21;
  int extraout_EDX;
  uint *in_RDX;
  bool bVar22;
  int iVar23;
  Vector3 *pVVar24;
  uint uVar25;
  uint uVar26;
  Vector3 *pVVar27;
  int iVar28;
  Fit *pFVar29;
  long in_FS_OFFSET;
  undefined8 uVar30;
  undefined4 in_XMM1_Da;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined8 uStack_50;
  float local_48;
  long local_40;
  
  iVar28 = *(int *)(param_2 + 0x54);
  uVar10 = in_RDX[0x15];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar25 = (int)param_2 + 0x48;
  bVar22 = SUB41(iVar28,0);
  if (uVar10 != 0) {
    ArrayBase::resize(uVar25,(bool)(bVar22 + (char)uVar10));
    if (*(long *)(param_2 + 0x48) != 0) {
      memcpy((void *)(*(long *)(param_2 + 0x48) + (ulong)(uint)(iVar28 * *(int *)(param_2 + 0x50))),
             *(void **)(in_RDX + 0x12),(ulong)(in_RDX[0x15] * in_RDX[0x14]));
    }
    puVar19 = *(uint **)(in_RDX + 0x12);
    lVar12 = *(long *)(param_1 + 0x30);
    puVar21 = puVar19 + uVar10;
    do {
      uVar16 = *puVar19;
      puVar19 = puVar19 + 1;
      *(undefined4 *)(lVar12 + (ulong)uVar16 * 4) = *(undefined4 *)param_2;
    } while (puVar21 != puVar19);
    iVar28 = *(int *)(param_2 + 0x54);
  }
  local_48 = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  fStack_54 = 0.0;
  uStack_50 = 0;
  ArrayBase::resize((int)param_1 + 0x80,SUB41(iVar28 * 3,0));
  if (iVar28 == 0) {
    pFVar29 = *(Fit **)(param_1 + 0x80);
  }
  else {
    pFVar29 = *(Fit **)(param_1 + 0x80);
    iVar23 = 0;
    piVar20 = *(int **)(param_2 + 0x48);
    lVar12 = *(long *)(*(long *)(*(long *)param_1 + 0x30) + 0x40);
    lVar13 = *(long *)(*(long *)(*(long *)param_1 + 0x30) + 0x58);
    do {
      iVar11 = *piVar20;
      iVar15 = 0;
      do {
        uVar26 = iVar15 + iVar11 * 3;
        uVar16 = iVar15 + iVar23;
        iVar15 = iVar15 + 1;
        puVar1 = (undefined8 *)(lVar13 + (ulong)*(uint *)(lVar12 + (ulong)uVar26 * 4) * 0xc);
        *(undefined8 *)(pFVar29 + (ulong)uVar16 * 0xc) = *puVar1;
        *(undefined4 *)(pFVar29 + (ulong)uVar16 * 0xc + 8) = *(undefined4 *)(puVar1 + 1);
      } while (iVar15 != 3);
      iVar23 = iVar23 + 3;
      piVar20 = piVar20 + 1;
    } while (iVar28 * 3 != iVar23);
  }
  pVVar27 = (Vector3 *)&uStack_50;
  pVVar24 = (Vector3 *)(ulong)*(uint *)(param_1 + 0x8c);
  cVar14 = Fit::computeLeastSquaresNormal(pFVar29,pVVar24,pVVar27);
  if (cVar14 == '\0') {
    cVar14 = Fit::computeEigen(pFVar29);
    if (cVar14 != '\0') {
      fVar32 = (float)uStack_50;
      fVar33 = (float)((ulong)uStack_50 >> 0x20);
      fVar31 = local_48;
      uVar34 = uStack_50;
      goto LAB_00110ca0;
    }
    ArrayBase::resize(uVar25,bVar22);
    if (uVar10 != 0) {
      puVar19 = *(uint **)(in_RDX + 0x12);
      lVar12 = *(long *)(param_1 + 0x30);
      puVar21 = puVar19 + uVar10;
      do {
        uVar10 = *puVar19;
        puVar19 = puVar19 + 1;
        *(uint *)(lVar12 + (ulong)uVar10 * 4) = *in_RDX;
      } while (puVar21 != puVar19);
    }
  }
  else {
    local_68 = Basis::computeTangent(pVVar27);
    fVar31 = local_48;
    fVar32 = (float)uStack_50;
    fStack_54 = (float)((ulong)uStack_50 >> 0x20);
    fVar33 = fStack_54;
    uVar34 = uStack_50;
    uVar30 = cross(pVVar27,pVVar24);
    uStack_5c = (undefined4)uVar30;
    uStack_58 = (undefined4)((ulong)uVar30 >> 0x20);
    uStack_60 = in_XMM1_Da;
LAB_00110ca0:
    puVar21 = *(uint **)(param_2 + 0x48);
    pfVar2 = (float *)(*(long *)(*(long *)param_1 + 0x98) + (ulong)*puVar21 * 0xc);
    if (fVar32 * *pfVar2 + fVar33 * pfVar2[1] + pfVar2[2] * fVar31 < 0.0) {
      local_48 = (float)((uint)fVar31 ^ _LC6);
      uStack_50 = CONCAT44((uint)((ulong)uVar34 >> 0x20) ^ _LC45._4_4_,(uint)uVar34 ^ (uint)_LC45);
    }
    if (*(uint *)(param_2 + 0x54) != 0) {
      lVar12 = *(long *)(*(long *)param_1 + 0x30);
      fVar31 = *(float *)(param_2 + 0x10);
      puVar19 = puVar21 + *(uint *)(param_2 + 0x54);
      fVar33 = *(float *)(param_2 + 0x14);
      fVar32 = *(float *)(param_2 + 0x18);
      lVar13 = *(long *)(lVar12 + 0x40);
      pFVar29 = *(Fit **)(lVar12 + 0x58);
      fVar4 = *(float *)(param_2 + 4);
      fVar5 = *(float *)(param_2 + 8);
      fVar6 = *(float *)(param_2 + 0xc);
      lVar12 = *(long *)(param_1 + 0x10);
      do {
        uVar16 = *puVar21 * 3;
        uVar26 = uVar16 + 3;
        do {
          uVar18 = (ulong)uVar16;
          uVar16 = uVar16 + 1;
          pFVar3 = pFVar29 + (ulong)*(uint *)(lVar13 + uVar18 * 4) * 0xc;
          fVar7 = *(float *)pFVar3;
          fVar8 = *(float *)(pFVar3 + 4);
          fVar9 = *(float *)(pFVar3 + 8);
          pfVar2 = (float *)(lVar12 + uVar18 * 8);
          *pfVar2 = fVar7 * fVar4 + fVar8 * fVar5 + fVar9 * fVar6;
          pfVar2[1] = fVar7 * fVar31 + fVar8 * fVar33 + fVar9 * fVar32;
        } while (uVar26 != uVar16);
        puVar21 = puVar21 + 1;
      } while (puVar19 != puVar21);
    }
    iVar28 = (int)pFVar29;
    uVar17 = isChartParameterizationValid((ClusteredCharts *)param_1,param_2);
    if ((char)uVar17 != '\0') {
      *(float *)(param_2 + 0x24) = local_48;
      uVar10 = in_RDX[0x1b];
      *(undefined8 *)(param_2 + 4) = local_68;
      *(ulong *)(param_2 + 0xc) = CONCAT44(uStack_5c,uStack_60);
      *(ulong *)(param_2 + 0x14) = CONCAT44(fStack_54,uStack_58);
      *(undefined8 *)(param_2 + 0x1c) = uStack_50;
      if (uVar10 != 0) {
        iVar23 = *(int *)(param_2 + 0x6c);
        ArrayBase::resize((int)param_2 + 0x60,(bool)((char)uVar10 + (char)iVar23));
        if (*(long *)(param_2 + 0x60) != 0) {
          memcpy((void *)(*(long *)(param_2 + 0x60) +
                         (ulong)(uint)(iVar23 * *(int *)(param_2 + 0x68))),*(void **)(in_RDX + 0x18)
                 ,(ulong)(in_RDX[0x1b] * in_RDX[0x1a]));
        }
      }
      uVar10 = *in_RDX;
      lVar12 = *(long *)(param_1 + 0x48);
      *(ulong *)(param_2 + 0x28) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20) +
                    ((float)in_RDX[0xb] - param_3),
                    (float)*(undefined8 *)(param_2 + 0x28) + (float)in_RDX[10]);
      *(undefined8 *)(lVar12 + (ulong)uVar10 * 8) = 0;
      ArrayBase::~ArrayBase((ArrayBase *)(in_RDX + 0x20));
      ArrayBase::~ArrayBase((ArrayBase *)(in_RDX + 0x18));
      ArrayBase::~ArrayBase((ArrayBase *)(in_RDX + 0x12));
      Realloc(in_RDX,0,extraout_EDX,(char *)puVar21,iVar28);
      goto LAB_00110e5d;
    }
    ArrayBase::resize(uVar25,bVar22);
    if (uVar10 != 0) {
      puVar19 = *(uint **)(in_RDX + 0x12);
      lVar12 = *(long *)(param_1 + 0x30);
      puVar21 = puVar19 + uVar10;
      do {
        uVar10 = *puVar19;
        puVar19 = puVar19 + 1;
        *(uint *)(lVar12 + (ulong)uVar10 * 4) = *in_RDX;
      } while (puVar19 != puVar21);
      uVar17 = 0;
      goto LAB_00110e5d;
    }
  }
  uVar17 = 0;
LAB_00110e5d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::segment::ClusteredCharts::mergeCharts() */

void __thiscall xatlas::internal::segment::ClusteredCharts::mergeCharts(ClusteredCharts *this)

{
  int *piVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  Chart *pCVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  uint *puVar15;
  int iVar16;
  char cVar17;
  long lVar18;
  int *piVar19;
  char *pcVar20;
  float *pfVar21;
  float *extraout_RDX;
  float *extraout_RDX_00;
  float *extraout_RDX_01;
  float *extraout_RDX_02;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  void *pvVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  
  uVar7 = *(uint *)(this + 0x54);
  uVar23 = uVar7 - 1;
  pcVar20 = (char *)(ulong)uVar23;
  pfVar21 = (float *)(long)(int)uVar23;
  lVar3 = (long)pfVar21 * 4;
  if (-1 < (int)uVar23) {
    lVar4 = (long)pfVar21 * 8;
    lVar12 = lVar4;
    uVar33 = uVar23;
LAB_001110c2:
    do {
      uVar32 = uVar33;
      lVar26 = lVar12;
      pCVar11 = *(Chart **)(*(long *)(this + 0x48) + lVar26);
      if (pCVar11 == (Chart *)0x0) {
        lVar12 = lVar26 + -8;
        uVar33 = uVar32 - 1;
        if (uVar32 - 1 == 0xffffffff) break;
        goto LAB_001110c2;
      }
      *(uint *)(this + 0x154) = uVar7;
      pvVar31 = *(void **)(this + 0x148);
      if (*(uint *)(this + 0x158) < uVar7) {
        auVar38 = Realloc(pvVar31,(ulong)(uVar7 * *(int *)(this + 0x150)),(int)pfVar21,pcVar20,
                          -0x55555555);
        pfVar21 = auVar38._8_8_;
        pvVar31 = auVar38._0_8_;
        *(uint *)(this + 0x158) = uVar7;
        *(void **)(this + 0x148) = pvVar31;
        if (pvVar31 != (void *)0x0) {
          uVar33 = *(uint *)(this + 0x154);
          pfVar21 = (float *)(ulong)uVar33;
          if (uVar33 != 0) goto LAB_001116f6;
        }
      }
      else {
        uVar33 = uVar7;
        if (pvVar31 != (void *)0x0) {
LAB_001116f6:
          memset(pvVar31,0,(ulong)(uVar33 * *(int *)(this + 0x150)));
          pfVar21 = extraout_RDX_02;
        }
      }
      *(uint *)(this + 0x16c) = uVar7;
      pvVar31 = *(void **)(this + 0x160);
      if (*(uint *)(this + 0x170) < uVar7) {
        auVar38 = Realloc(pvVar31,(ulong)(uVar7 * *(int *)(this + 0x168)),(int)pfVar21,pcVar20,
                          -0x55555555);
        pfVar21 = auVar38._8_8_;
        pvVar31 = auVar38._0_8_;
        *(uint *)(this + 0x170) = uVar7;
        *(void **)(this + 0x160) = pvVar31;
        if (pvVar31 != (void *)0x0) {
          uVar33 = *(uint *)(this + 0x16c);
          pfVar21 = (float *)(ulong)uVar33;
          if (uVar33 != 0) goto LAB_001116cf;
        }
      }
      else {
        uVar33 = uVar7;
        if (pvVar31 != (void *)0x0) {
LAB_001116cf:
          memset(pvVar31,0,(ulong)(uVar33 * *(int *)(this + 0x168)));
          pfVar21 = extraout_RDX_01;
        }
      }
      *(uint *)(this + 0x184) = uVar7;
      pvVar31 = *(void **)(this + 0x178);
      lVar34 = lVar3;
      uVar22 = uVar23;
      if (*(uint *)(this + 0x188) < uVar7) {
        auVar38 = Realloc(pvVar31,(ulong)(uVar7 * *(int *)(this + 0x180)),(int)pfVar21,pcVar20,
                          -0x55555555);
        pfVar21 = auVar38._8_8_;
        pvVar31 = auVar38._0_8_;
        *(uint *)(this + 0x188) = uVar7;
        *(void **)(this + 0x178) = pvVar31;
        if (pvVar31 != (void *)0x0) {
          uVar33 = *(uint *)(this + 0x184);
          pfVar21 = (float *)(ulong)uVar33;
          if (uVar33 != 0) goto LAB_00111694;
        }
LAB_001111ec:
        uVar33 = *(uint *)(pCVar11 + 0x54);
        if (uVar33 == 0) goto LAB_001116ba;
LAB_001111fc:
        piVar19 = *(int **)(pCVar11 + 0x48);
        fVar35 = 0.0;
        lVar12 = *(long *)(*(long *)this + 0x30);
        pcVar20 = *(char **)(*(long *)this + 0x50);
        pfVar13 = *(float **)(lVar12 + 0x108);
        piVar1 = piVar19 + uVar33;
        pfVar21 = pfVar13;
        do {
          uVar33 = 0;
          uVar27 = (ulong)(uint)(*piVar19 * 3);
          uVar25 = (ulong)(uint)(*piVar19 * 3);
LAB_00111258:
          do {
            fVar37 = *(float *)(pcVar20 + uVar27 * 4);
            fVar8 = pfVar13[uVar27];
            uVar28 = (uint)uVar25;
            if (fVar8 == -NAN) {
LAB_00111420:
              fVar35 = fVar35 + fVar37;
            }
            else {
              uVar24 = (ulong)(uint)fVar8;
              pfVar21 = (float *)(uVar24 / 3);
              uVar9 = *(uint *)(*(long *)(this + 0x30) + (ulong)((uint)fVar8 / 3) * 4);
              uVar30 = (ulong)uVar9;
              if (uVar9 == 0xffffffff) goto LAB_00111420;
              if (*(Chart **)(*(long *)(this + 0x48) + uVar30 * 8) != pCVar11) {
                iVar16 = (int)(uVar27 / 3);
                uVar29 = (uVar28 + iVar16 * -3 + 1) % 3 + iVar16 * 3;
                lVar18 = *(long *)(lVar12 + 0x40);
                uVar9 = *(uint *)(lVar18 + uVar27 * 4);
                uVar10 = *(uint *)(lVar18 + (ulong)(((uint)fVar8 % 3 + 1) % 3 +
                                                   ((uint)fVar8 / 3) * 3) * 4);
                if ((uVar9 == uVar10) &&
                   (*(int *)(lVar18 + (ulong)uVar29 * 4) == *(int *)(lVar18 + uVar24 * 4))) {
LAB_00111442:
                  lVar18 = uVar30 * 4;
                  *(float *)(*(long *)(this + 0x148) + lVar18) =
                       *(float *)(*(long *)(this + 0x148) + lVar18) + fVar37;
                }
                else {
                  cVar17 = isNormalSeam(this,uVar28);
                  if (cVar17 == '\0') {
                    lVar14 = *(long *)(lVar12 + 0x88);
                    pfVar21 = (float *)(lVar14 + (ulong)uVar10 * 8);
                    pfVar2 = (float *)(lVar14 + (ulong)uVar9 * 8);
                    if ((*pfVar2 == *pfVar21) && (pfVar2[1] == pfVar21[1])) {
                      pfVar21 = (float *)(lVar14 + (ulong)*(uint *)(lVar18 + uVar24 * 4) * 8);
                      pfVar2 = (float *)(lVar14 + (ulong)*(uint *)(lVar18 + (ulong)uVar29 * 4) * 8);
                      if ((*pfVar2 == *pfVar21) && (pfVar2[1] == pfVar21[1])) goto LAB_00111442;
                    }
                  }
                  fVar35 = fVar35 + fVar37;
                  lVar18 = uVar30 << 2;
                }
                pfVar21 = (float *)(*(long *)(this + 0x160) + lVar18);
                lVar14 = *(long *)(this + 0x178);
                *pfVar21 = fVar37 + *pfVar21;
                *(int *)(lVar18 + lVar14) = *(int *)(lVar18 + lVar14) + 1;
              }
            }
          } while (2 < uVar33);
          uVar33 = uVar33 + 1;
          if (uVar33 != 3) {
            uVar27 = (ulong)(uVar28 + 1);
            uVar25 = uVar27;
            goto LAB_00111258;
          }
          piVar19 = piVar19 + 1;
          fVar37 = _LC11;
        } while (piVar19 != piVar1);
      }
      else {
        uVar33 = uVar7;
        if (pvVar31 == (void *)0x0) goto LAB_001111ec;
LAB_00111694:
        memset(pvVar31,0,(ulong)(uVar33 * *(int *)(this + 0x180)));
        uVar33 = *(uint *)(pCVar11 + 0x54);
        pfVar21 = extraout_RDX_00;
        if (uVar33 != 0) goto LAB_001111fc;
LAB_001116ba:
        fVar35 = 0.0;
        fVar37 = _LC11;
      }
      do {
        if ((((uVar22 != uVar32) &&
             (pfVar21 = *(float **)(*(long *)(this + 0x48) + lVar34 * 2), pfVar21 != (float *)0x0))
            && (fVar8 = *(float *)(*(long *)(this + 0x148) + lVar34), 0.0 < fVar8)) &&
           (fVar37 <= pfVar21[7] * *(float *)(pCVar11 + 0x1c) +
                      pfVar21[8] * *(float *)(pCVar11 + 0x20) +
                      pfVar21[9] * *(float *)(pCVar11 + 0x24))) {
          fVar5 = *(float *)(*(long *)this + 8);
          if ((fVar5 <= 0.0) || (*(float *)(pCVar11 + 0x28) + pfVar21[10] <= fVar5)) {
            fVar5 = *(float *)(*(long *)this + 0xc);
            fVar6 = *(float *)(*(long *)(this + 0x160) + lVar34);
            if ((fVar5 <= 0.0) || ((*(float *)(pCVar11 + 0x2c) + pfVar21[0xb]) - fVar6 <= fVar5)) {
              fVar5 = pfVar21[0x15];
              if (0.0 < fVar6) {
                if ((*(uint *)(pCVar11 + 0x54) < 2) || (fVar5 != 1.4013e-45)) {
                  if ((fVar5 != 2.8026e-45) || (*(uint *)(*(long *)(this + 0x178) + lVar34) < 2))
                  goto LAB_001114d9;
                }
                else if (_LC38 * *(float *)(pCVar11 + 0x28) < pfVar21[10]) {
LAB_001114d9:
                  fVar36 = (float)((uint)pfVar21[0xb] & _LC37);
                  fVar5 = (float)((uint)fVar6 & _LC37);
                  if ((float)((uint)fVar6 & _LC37) <= fVar36) {
                    fVar5 = fVar36;
                  }
                  fVar36 = _LC8;
                  if (_LC4 <= fVar5) {
                    fVar36 = _LC8 * fVar5;
                  }
                  if (fVar36 < (float)((uint)(fVar6 - pfVar21[0xb]) & _LC37)) goto LAB_00111523;
                }
LAB_00111638:
                cVar17 = mergeChart((Chart *)this,pCVar11,fVar6);
                pfVar21 = extraout_RDX;
                lVar12 = lVar4;
                fVar37 = _LC11;
                uVar33 = uVar23;
                if (cVar17 != '\0') goto LAB_001110c2;
              }
              else {
                if ((fVar5 == 2.8026e-45) && (1 < *(uint *)(*(long *)(this + 0x178) + lVar34)))
                goto LAB_00111638;
LAB_00111523:
                if (0.0 <= *(float *)(pCVar11 + 0x2c) - fVar35) {
                  if (((*(float *)(pCVar11 + 0x2c) - fVar35) * __LC46 < fVar8) ||
                     (_LC47 * pfVar21[0xb] < fVar8)) goto LAB_00111638;
                }
                else if (0.0 < fVar8) goto LAB_00111638;
              }
            }
          }
        }
        uVar22 = uVar22 - 1;
        lVar34 = lVar34 + -4;
      } while (uVar22 != 0xffffffff);
      lVar12 = lVar26 + -8;
      uVar33 = uVar32 - 1;
    } while (uVar32 - 1 != 0xffffffff);
  }
  uVar25 = 0;
  if (0 < *(int *)(this + 0x54)) {
    do {
      uVar23 = (uint)uVar25;
      puVar15 = *(uint **)(*(long *)(this + 0x48) + uVar25 * 8);
      if (puVar15 == (uint *)0x0) {
        ArrayBase::removeAt((ArrayBase *)(this + 0x48),uVar23);
        if (*(uint *)(this + 0x3c) != 0) {
          piVar19 = *(int **)(this + 0x30);
          piVar1 = piVar19 + *(uint *)(this + 0x3c);
          do {
            if ((int)uVar23 < *piVar19) {
              *piVar19 = *piVar19 + -1;
            }
            piVar19 = piVar19 + 1;
          } while (piVar19 != piVar1);
        }
      }
      else {
        *puVar15 = uVar23;
        uVar25 = (ulong)(uVar23 + 1);
      }
    } while ((int)uVar25 < *(int *)(this + 0x54));
  }
  return;
}



/* xatlas::internal::segment::ClusteredCharts::compute() */

void __thiscall xatlas::internal::segment::ClusteredCharts::compute(ClusteredCharts *this)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  Chart *pCVar6;
  void *pvVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  long in_FS_OFFSET;
  bool bVar22;
  float fVar23;
  uint local_60;
  float local_5c;
  int local_54;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = *(uint *)(*(long *)(*(long *)this + 0x30) + 0x4c);
  *(undefined4 *)(this + 0x28) = 0;
  if (2 < uVar15) {
    lVar19 = *(long *)(*(long *)this + 0xb8);
    uVar16 = 0;
    do {
      if ((1 << ((byte)uVar16 & 0x1f) & *(uint *)(lVar19 + (uVar16 >> 5) * 4)) == 0) {
        *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      }
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar14;
    } while (uVar14 < (uint)((ulong)uVar15 / 3));
  }
  lVar19 = 0;
  lVar20 = (ulong)*(uint *)(this + 0x54) << 3;
  if (*(uint *)(this + 0x54) != 0) {
    do {
      while( true ) {
        lVar8 = *(long *)(*(long *)(this + 0x48) + lVar19);
        if (*(long *)(lVar8 + 0x80) != 0) {
          if (s_free == (undefined *)0x0) {
            (*(code *)s_realloc)(*(long *)(lVar8 + 0x80),0);
          }
          else {
            (*(code *)s_free)();
          }
        }
        if (*(long *)(lVar8 + 0x60) != 0) {
          if (s_free == (undefined *)0x0) {
            (*(code *)s_realloc)();
          }
          else {
            (*(code *)s_free)();
          }
        }
        if (*(long *)(lVar8 + 0x48) != 0) {
          if (s_free == (undefined *)0x0) {
            (*(code *)s_realloc)();
          }
          else {
            (*(code *)s_free)();
          }
        }
        if (*(long *)(*(long *)(this + 0x48) + lVar19) != 0) break;
LAB_001118cb:
        lVar19 = lVar19 + 8;
        if (lVar20 == lVar19) goto LAB_0011190a;
      }
      if (s_free == (undefined *)0x0) {
        (*(code *)s_realloc)();
        goto LAB_001118cb;
      }
      (*(code *)s_free)();
      lVar19 = lVar19 + 8;
    } while (lVar20 != lVar19);
  }
LAB_0011190a:
  *(undefined4 *)(this + 0x54) = 0;
  ArrayBase::resize((int)this + 0x30,SUB81((ulong)uVar15 / 3,0));
  lVar19 = *(long *)(this + 0x30);
  lVar20 = 0;
  if (*(int *)(this + 0x3c) != 0) {
    do {
      *(undefined4 *)(lVar19 + lVar20 * 4) = 0xffffffff;
      lVar20 = lVar20 + 1;
    } while ((uint)lVar20 < *(uint *)(this + 0x3c));
  }
  ArrayBase::resize((int)this + 0x10,(bool)((char)(uVar15 / 3) * '\x03'));
  if (*(int *)(this + 0x28) != 0) {
    fVar23 = _LC11 * *(float *)(*(long *)this + 0x24);
    this[400] = (ClusteredCharts)0x1;
    do {
      createChart(this,fVar23);
      uVar16 = (ulong)*(uint *)(this + 0x28);
    } while (*(uint *)(this + 0x28) != 0);
    this[400] = (ClusteredCharts)0x0;
    if (*(int *)(*(long *)this + 0x28) != 0) {
      relocateSeeds(this);
      resetCharts(this);
      local_54 = 0;
      lVar19 = *(long *)this;
      uVar13 = extraout_RDX;
      do {
        fVar23 = *(float *)(lVar19 + 0x24);
LAB_00111a10:
        if (*(int *)(this + 0x28) != 0) {
          do {
            pcVar11 = (char *)(ulong)*(uint *)(this + 0x54);
            if (*(uint *)(this + 0x54) == 0) {
              fVar23 = _LC11 * *(float *)(*(long *)this + 0x24);
              goto LAB_00111e1e;
            }
            uVar17 = 0;
            uVar18 = 0xffffffff;
            fVar21 = -NAN;
            local_5c = _LC9;
            do {
              lVar19 = *(long *)(*(long *)(this + 0x48) + uVar17 * 8);
              uVar15 = *(uint *)(lVar19 + 0x8c);
              uVar10 = (ulong)uVar15;
              while (uVar15 != 0) {
                lVar20 = *(long *)this;
                lVar8 = *(long *)(lVar19 + 0x80);
                while( true ) {
                  while( true ) {
                    uVar15 = (int)uVar10 - 1;
                    uVar10 = (ulong)uVar15;
                    uVar16 = *(ulong *)(lVar20 + 0xb8);
                    pfVar1 = (float *)(lVar8 + uVar10 * 8);
                    fVar4 = pfVar1[1];
                    pcVar11 = (char *)(ulong)(uint)fVar4;
                    fVar3 = *pfVar1;
                    uVar14 = 1 << (SUB41(fVar4,0) & 0x1f) &
                             *(uint *)(uVar16 + (ulong)((uint)fVar4 >> 5) * 4);
                    uVar13 = (ulong)uVar14;
                    if (uVar14 == 0) {
                      if ((fVar4 != -NAN) && (fVar3 < local_5c)) {
                        uVar18 = uVar17 & 0xffffffff;
                        fVar21 = fVar4;
                        local_5c = fVar3;
                      }
                      goto LAB_00111ba7;
                    }
                    local_60 = *(uint *)(lVar19 + 0x90);
                    *(uint *)(lVar19 + 0x8c) = uVar15;
                    if (uVar15 <= local_60) goto LAB_00111ac7;
                    bVar22 = local_60 == 0;
                    local_60 = uVar15;
                    if ((bVar22) || (local_60 = (uVar15 >> 2) + uVar15, local_60 != 0)) break;
                    if (lVar8 != 0) {
                      if (s_free == (undefined *)0x0) {
                        (*(code *)s_realloc)();
                      }
                      else {
                        (*(code *)s_free)();
                      }
                      *(undefined8 *)(lVar19 + 0x80) = 0;
                      uVar15 = *(uint *)(lVar19 + 0x8c);
                      goto LAB_00111abf;
                    }
                    *(undefined4 *)(lVar19 + 0x90) = 0;
                  }
                  if (local_60 * *(int *)(lVar19 + 0x88) != 0) goto LAB_00111a9e;
                  if (lVar8 != 0) break;
                  *(undefined8 *)(lVar19 + 0x80) = 0;
                  *(uint *)(lVar19 + 0x90) = local_60;
                }
                if (s_free == (undefined *)0x0) {
LAB_00111a9e:
                  pcVar11 = (char *)(*(code *)s_realloc)();
                  uVar15 = *(uint *)(lVar19 + 0x8c);
                }
                else {
                  (*(code *)s_free)();
                  uVar15 = *(uint *)(lVar19 + 0x8c);
                  pcVar11 = (char *)0x0;
                }
                *(char **)(lVar19 + 0x80) = pcVar11;
LAB_00111abf:
                uVar10 = (ulong)uVar15;
                *(uint *)(lVar19 + 0x90) = local_60;
LAB_00111ac7:
                uVar13 = (ulong)local_60;
                uVar15 = (uint)uVar10;
              }
LAB_00111ba7:
              uVar17 = uVar17 + 1;
            } while ((uint)uVar17 < *(uint *)(this + 0x54));
            if ((fVar21 == -NAN) || (fVar23 < local_5c)) {
              if (*(int *)(this + 0x28) != 0) {
                fVar23 = _LC11 * *(float *)(*(long *)this + 0x24);
LAB_00111e1e:
                do {
                  createChart(this,fVar23);
                } while (*(int *)(this + 0x28) != 0);
              }
              break;
            }
            pCVar6 = *(Chart **)(*(long *)(this + 0x48) + uVar18 * 8);
            pvVar7 = *(void **)(pCVar6 + 0x80);
            uVar15 = *(int *)(pCVar6 + 0x8c) - 1;
            *(uint *)(pCVar6 + 0x8c) = uVar15;
            if (*(uint *)(pCVar6 + 0x90) < uVar15) {
              if ((*(uint *)(pCVar6 + 0x90) == 0) || (uVar15 = uVar15 + (uVar15 >> 2), uVar15 != 0))
              {
                uVar12 = Realloc(pvVar7,(ulong)(uVar15 * *(int *)(pCVar6 + 0x88)),(int)uVar13,
                                 pcVar11,(int)uVar16);
                *(undefined8 *)(pCVar6 + 0x80) = uVar12;
              }
              else if (pvVar7 != (void *)0x0) {
                Realloc(pvVar7,0,(int)uVar13,pcVar11,(int)uVar16);
                *(undefined8 *)(pCVar6 + 0x80) = 0;
              }
              *(uint *)(pCVar6 + 0x90) = uVar15;
            }
            cVar9 = addFaceToChart(this,pCVar6,(uint)fVar21);
            uVar13 = extraout_RDX_00;
            if (cVar9 != '\0') goto LAB_00111a10;
            ArrayBase::push_back((uchar *)(pCVar6 + 0x60));
            uVar13 = extraout_RDX_01;
            if (*(int *)(this + 0x28) == 0) break;
          } while( true );
        }
        mergeCharts(this);
        local_54 = local_54 + 1;
        if ((*(int *)(*(long *)this + 0x28) == local_54) ||
           (cVar9 = relocateSeeds(this), cVar9 == '\0')) break;
        lVar19 = *(long *)this;
        uVar15 = *(uint *)(*(long *)(lVar19 + 0x30) + 0x4c);
        if (uVar15 < 3) {
          *(undefined4 *)(this + 0x28) = 0;
          uVar13 = extraout_RDX_02;
        }
        else {
          lVar20 = *(long *)(this + 0x30);
          lVar8 = *(long *)(lVar19 + 0xb8);
          uVar13 = 0;
          do {
            if (*(int *)(lVar20 + uVar13 * 4) != -1) {
              puVar2 = (uint *)(lVar8 + (uVar13 >> 5 & 0x7ffffff) * 4);
              *puVar2 = *puVar2 & ~(1 << ((byte)uVar13 & 0x1f));
            }
            *(undefined4 *)(lVar20 + uVar13 * 4) = 0xffffffff;
            uVar13 = uVar13 + 1;
            uVar14 = uVar15 / 3;
          } while ((uint)uVar13 < uVar14);
          *(undefined4 *)(this + 0x28) = 0;
          uVar17 = 0;
          do {
            uVar13 = uVar17 >> 5;
            if ((1 << ((byte)uVar17 & 0x1f) & *(uint *)(lVar8 + uVar13 * 4)) == 0) {
              *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
            }
            uVar15 = (int)uVar17 + 1;
            uVar17 = (ulong)uVar15;
          } while (uVar15 < uVar14);
        }
        uVar15 = *(uint *)(this + 0x54);
        if (uVar15 != 0) {
          lVar19 = 0;
          do {
            pCVar6 = *(Chart **)(*(long *)(this + 0x48) + lVar19);
            lVar19 = lVar19 + 8;
            *(undefined4 *)(pCVar6 + 0x44) = 0;
            *(undefined4 *)(pCVar6 + 0x54) = 0;
            *(undefined4 *)(pCVar6 + 0x8c) = 0;
            *(undefined4 *)(pCVar6 + 0x6c) = 0;
            *(undefined1 (*) [16])(pCVar6 + 4) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pCVar6 + 0x14) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pCVar6 + 0x24) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pCVar6 + 0x34) = (undefined1  [16])0x0;
            addFaceToChart(this,pCVar6,*(uint *)(pCVar6 + 0x98));
          } while (lVar19 != (ulong)uVar15 * 8);
          lVar19 = *(long *)this;
          uVar13 = extraout_RDX_03;
        }
      } while( true );
    }
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::param::PiecewiseParam::addCandidateFace(unsigned int, float, unsigned int,
   unsigned int, unsigned int) */

void __thiscall
xatlas::internal::param::PiecewiseParam::addCandidateFace
          (PiecewiseParam *this,uint param_1,float param_2,uint param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  long *plVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  int extraout_EDX;
  Vector3 *pVVar15;
  Vector3 *pVVar16;
  long *plVar17;
  uint *puVar18;
  ulong uVar19;
  Vector3 *pVVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  Vector3 *pVVar26;
  int iVar27;
  long in_FS_OFFSET;
  float fVar28;
  uint *puVar29;
  float fVar30;
  float extraout_XMM1_Da;
  float fVar31;
  float fVar32;
  float __y;
  float __x;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_70;
  float local_6c;
  undefined8 local_68;
  float local_60;
  float local_58 [4];
  float local_48;
  float local_44;
  long local_40 [2];
  
  uVar22 = (ulong)param_1;
  uVar23 = (ulong)param_4;
  pVVar26 = (Vector3 *)local_58;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = *(long *)this;
  orthoProjectFace((uint)lVar8,(Vector2 *)(ulong)param_3);
  lVar9 = *(long *)(lVar8 + 0x40);
  iVar27 = (int)((uVar22 & 0xffffffff) / 3);
  uVar21 = *(uint *)(lVar9 + (ulong)(((int)uVar22 + iVar27 * -3 + 1U) % 3 + iVar27 * 3) * 4);
  uVar11 = 0;
  iVar27 = (int)((uVar23 & 0xffffffff) / 3);
  uVar19 = 0xffffffff;
  uVar12 = 0xffffffff;
  uVar24 = 0xffffffff;
  do {
    iVar7 = *(int *)(lVar9 + (ulong)(param_3 * 3 + (int)uVar11) * 4);
    uVar13 = uVar11;
    uVar25 = uVar24;
    if ((*(int *)(lVar9 + (ulong)(((int)uVar23 + iVar27 * -3 + 1U) % 3 + iVar27 * 3) * 4) != iVar7)
       && (uVar13 = uVar12, uVar25 = uVar11, iVar7 == *(int *)(lVar9 + (uVar23 & 0xffffffff) * 4)))
    {
      uVar19 = uVar11;
      uVar25 = uVar24;
    }
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar10;
    uVar12 = uVar13;
    uVar24 = uVar25;
  } while (uVar10 != 3);
  uVar12 = (ulong)*(uint *)(lVar9 + (uVar22 & 0xffffffff) * 4);
  puVar1 = (undefined8 *)(*(long *)(this + 8) + uVar12 * 8);
  pfVar2 = (float *)(*(long *)(this + 8) + (ulong)uVar21 * 8);
  fVar31 = pfVar2[1];
  fVar34 = *pfVar2;
  uVar5 = *puVar1;
  fVar4 = *(float *)((long)puVar1 + 4);
  fVar33 = fVar31 - fVar4;
  fVar35 = (float)uVar5;
  fVar30 = fVar34 - fVar35;
  fVar28 = SQRT(fVar30 * fVar30 + fVar33 * fVar33);
  if (fVar28 <= 0.0) goto LAB_00112528;
  __y = local_58[uVar19 * 2 + 1] - local_58[uVar13 * 2 + 1];
  __x = local_58[uVar19 * 2] - local_58[uVar13 * 2];
  fVar32 = SQRT(__y * __y + __x * __x);
  if (fVar32 <= 0.0) goto LAB_00112528;
  fVar28 = fVar28 / fVar32;
  pVVar20 = (Vector3 *)local_40;
  pVVar16 = pVVar26;
  do {
    pVVar15 = pVVar16 + 8;
    *(ulong *)pVVar16 =
         CONCAT44((float)((ulong)*(undefined8 *)pVVar16 >> 0x20) * fVar28,
                  (float)*(undefined8 *)pVVar16 * fVar28);
    pVVar16 = pVVar15;
  } while (pVVar15 != pVVar20);
  uVar6 = *(undefined8 *)(local_58 + uVar13 * 2);
  pVVar16 = pVVar26;
  do {
    pVVar15 = pVVar16 + 8;
    *(ulong *)pVVar16 =
         CONCAT44((float)((ulong)*(undefined8 *)pVVar16 >> 0x20) +
                  ((float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar6 >> 0x20)),
                  (float)*(undefined8 *)pVVar16 + (fVar35 - (float)uVar6));
    pVVar16 = pVVar15;
  } while (pVVar15 != pVVar20);
  fVar28 = atan2f(fVar33,fVar30);
  fVar30 = atan2f(__y,__x);
  iVar27 = 0;
  pVVar16 = pVVar26 + uVar13 * 8;
  do {
    if ((int)uVar13 != iVar27) {
      pVVar20 = (Vector3 *)&local_6c;
      sincosf(fVar28 - fVar30,&local_6c,&local_70);
      uVar5 = *(undefined8 *)pVVar16;
      fVar33 = (float)*(undefined8 *)pVVar26 - (float)uVar5;
      fVar32 = (float)((ulong)*(undefined8 *)pVVar26 >> 0x20) - (float)((ulong)uVar5 >> 0x20);
      *(ulong *)pVVar26 = CONCAT44(fVar32,fVar33);
      uVar5 = *(undefined8 *)pVVar16;
      *(float *)pVVar26 = (float)uVar5 + (local_70 * fVar33 - fVar32 * local_6c);
      *(float *)(pVVar26 + 4) =
           (float)((ulong)uVar5 >> 0x20) + fVar33 * local_6c + local_70 * fVar32;
    }
    iVar27 = iVar27 + 1;
    pVVar26 = pVVar26 + 8;
  } while (iVar27 != 3);
  fVar28 = local_58[uVar25 * 2];
  if ((!NAN(fVar28)) && (fVar30 = local_58[uVar25 * 2 + 1], !NAN(fVar30))) {
    fVar31 = (fVar35 - fVar28) * (fVar31 - fVar30) - (fVar4 - fVar30) * (fVar34 - fVar28);
    if (param_2 < 0.0) {
      if (0.0 <= fVar31) goto LAB_0011225f;
    }
    else if ((param_2 <= 0.0) || (fVar31 <= 0.0)) {
LAB_0011225f:
      pcVar14 = (char *)(*(long *)(lVar8 + 0x58) + uVar12 * 0xc);
      if (_LC19 < (float)((uint)(((local_58[3] - local_58[1]) * (local_48 - local_58[0]) -
                                 (local_44 - local_58[1]) * (local_58[2] - local_58[0])) * _LC11) &
                         _LC37)) {
        fVar34 = 0.0;
        fVar31 = _LC11;
        uVar10 = _LC37;
        puVar29 = (uint *)cross(pVVar20,(Vector3 *)(uVar12 * 3));
        local_68._0_4_ = SUB84(puVar29,0);
        local_68._4_4_ = (float)((ulong)puVar29 >> 0x20);
        fVar31 = SQRT((float)local_68 * (float)local_68 + local_68._4_4_ * local_68._4_4_ +
                      extraout_XMM1_Da * extraout_XMM1_Da) * fVar31;
        if (fVar34 <= fVar31) {
          fVar31 = fVar34 / fVar31;
        }
        else {
          fVar31 = fVar31 / fVar34;
        }
        local_68 = puVar29;
        local_60 = extraout_XMM1_Da;
        if ((fVar31 < _LC9) && (fVar31 = (float)((uint)(fVar31 - _LC4) & uVar10), fVar31 <= _LC11))
        {
          local_68 = (uint *)Realloc((void *)0x0,0x30,extraout_EDX,pcVar14,uVar21);
          uVar5 = *(undefined8 *)(local_58 + uVar25 * 2);
          local_68[1] = param_5;
          *(undefined8 *)(local_68 + 6) = uVar5;
          local_68[10] = param_1;
          *local_68 = param_3;
          *(undefined1 (*) [16])(local_68 + 2) = (undefined1  [16])0x0;
          *(ulong *)(local_68 + 8) = CONCAT44(fVar31,fVar31);
          local_68[0xb] = (uint)param_2;
          ArrayBase::push_back((uchar *)(this + 0x40));
          iVar27 = *(int *)(this + 0x4c);
          *(uint **)(*(long *)(this + 0x58) + (ulong)param_3 * 8) = local_68;
          if (iVar27 != 1) {
            plVar17 = *(long **)(this + 0x40);
            plVar3 = plVar17 + (ulong)(iVar27 - 2) + 1;
            do {
              puVar29 = (uint *)*plVar17;
              if (((uint *)*plVar17)[1] == local_68[1]) {
                do {
                  puVar18 = puVar29;
                  puVar29 = *(uint **)(puVar18 + 4);
                } while (*(uint **)(puVar18 + 4) != (uint *)0x0);
                *(uint **)(local_68 + 2) = puVar18;
                local_68[4] = 0;
                local_68[5] = 0;
                *(uint **)(puVar18 + 4) = local_68;
                goto LAB_001124b0;
              }
              plVar17 = plVar17 + 1;
            } while (plVar17 != plVar3);
          }
          puVar29 = local_68;
          for (puVar18 = *(uint **)(local_68 + 2); puVar18 != (uint *)0x0;
              puVar18 = *(uint **)(puVar18 + 2)) {
LAB_001124b0:
            puVar29 = puVar18;
          }
          fVar31 = 0.0;
          puVar18 = puVar29;
          do {
            if (fVar31 <= (float)puVar18[8]) {
              fVar31 = (float)puVar18[8];
            }
            puVar18 = *(uint **)(puVar18 + 4);
          } while (puVar18 != (uint *)0x0);
          do {
            puVar29[9] = (uint)fVar31;
            lVar8 = *(long *)(puVar29 + 4);
            if (lVar8 == 0) break;
            *(float *)(lVar8 + 0x24) = fVar31;
            puVar29 = *(uint **)(lVar8 + 0x10);
          } while (puVar29 != (uint *)0x0);
          goto LAB_00112528;
        }
      }
    }
  }
  puVar29 = (uint *)(*(long *)(this + 0xd0) + (ulong)(param_3 >> 5) * 4);
  *puVar29 = *puVar29 | 1 << ((byte)param_3 & 0x1f);
LAB_00112528:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::param::PiecewiseParam::addFaceToPatch(unsigned int) */

void __thiscall
xatlas::internal::param::PiecewiseParam::addFaceToPatch(PiecewiseParam *this,uint param_1)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  
  ArrayBase::push_back((uchar *)(this + 0x70));
  lVar8 = *(long *)this;
  puVar1 = (uint *)(*(long *)(this + 0x90) + (ulong)(param_1 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  uVar11 = 0;
  puVar1 = (uint *)(*(long *)(this + 0x28) + (ulong)(param_1 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  uVar12 = param_1 * 3;
  do {
    uVar11 = uVar11 + 1;
    uVar6 = *(uint *)(*(long *)(lVar8 + 0x108) + (ulong)uVar12 * 4);
    if (uVar6 != 0xffffffff) {
      uVar9 = (ulong)uVar6 / 0x60;
      uVar13 = (ulong)uVar6 / 3;
      uVar10 = 1 << ((byte)uVar13 & 0x1f);
      if (((uVar10 & *(uint *)(*(long *)(this + 0x28) + uVar9 * 4)) == 0) &&
         (*(long *)(*(long *)(this + 0x58) + uVar13 * 8) == 0)) {
        lVar17 = *(long *)(lVar8 + 0x40);
        uVar15 = *(uint *)(lVar17 + (ulong)uVar12 * 4);
        lVar16 = 0;
        do {
          uVar14 = *(uint *)(*(long *)(*(long *)this + 0x40) + uVar13 * 0xc + lVar16 * 4);
          if ((uVar15 != uVar14) &&
             (uVar7 = *(uint *)(lVar17 + (ulong)(uVar11 % 3 + param_1 * 3) * 4), uVar14 != uVar7)) {
            lVar17 = *(long *)(this + 8);
            pfVar2 = (float *)(lVar17 + (ulong)uVar7 * 8);
            pfVar3 = (float *)(lVar17 + (ulong)uVar15 * 8);
            pfVar4 = (float *)(lVar17 + (ulong)*(uint *)(*(long *)(*(long *)this + 0x40) +
                                                        (ulong)((int)lVar16 + param_1 * 3) * 4) * 8)
            ;
            fVar18 = pfVar4[1];
            fVar5 = *pfVar4;
            uVar15 = 1 << ((byte)uVar14 & 0x1f);
            lVar17 = (ulong)(uVar14 >> 5) << 2;
            fVar18 = (*pfVar3 - fVar5) * (pfVar2[1] - fVar18) -
                     (pfVar3[1] - fVar18) * (*pfVar2 - fVar5);
            goto LAB_001126c8;
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != 3);
        uVar15 = 0x80000000;
        lVar17 = 0x1ffffffc;
        fVar18 = 0.0;
        uVar14 = 0xffffffff;
LAB_001126c8:
        if (((uVar15 & *(uint *)(*(long *)(this + 0xb0) + lVar17)) == 0) &&
           ((uVar10 & *(uint *)(*(long *)(this + 0xd0) + uVar9 * 4)) == 0)) {
          addCandidateFace(this,uVar12,fVar18,(uint)uVar13,uVar6,uVar14);
        }
      }
    }
    uVar12 = uVar12 + 1;
    if (uVar11 == 3) {
      return;
    }
  } while( true );
}



/* xatlas::internal::param::Quality::computeBoundaryIntersection(xatlas::internal::Mesh const*,
   xatlas::internal::UniformGrid2&) */

void xatlas::internal::param::Quality::computeBoundaryIntersection
               (Mesh *param_1,UniformGrid2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Mesh MVar5;
  uint uVar6;
  void *pvVar7;
  char *in_RCX;
  undefined8 *in_RDX;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  uVar1 = *(uint *)(param_2 + 0xfc);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar8 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)((long)in_RDX + 0xc) = 0;
  if (uVar1 == 0) {
    in_RDX[3] = uVar8;
    *(undefined4 *)(in_RDX + 4) = uVar2;
    in_RDX[5] = uVar4;
    *(undefined4 *)(in_RDX + 6) = uVar3;
    *(undefined4 *)((long)in_RDX + 0x5c) = 0;
LAB_0011281d:
    MVar5 = (Mesh)UniformGrid2::intersect(*(undefined4 *)param_2);
    *param_1 = MVar5;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar6 = *(uint *)(in_RDX + 2);
  iVar9 = 0;
  if (uVar6 < uVar1) {
    ArrayBase::setArrayCapacity((uint)in_RDX);
    iVar9 = *(int *)((long)in_RDX + 0xc);
    uVar6 = *(uint *)(in_RDX + 2);
  }
  in_RDX[3] = uVar8;
  *(undefined4 *)(in_RDX + 4) = uVar2;
  in_RDX[5] = uVar4;
  lVar11 = 0;
  *(undefined4 *)(in_RDX + 6) = uVar3;
  *(undefined4 *)((long)in_RDX + 0x5c) = 0;
  do {
    uVar10 = iVar9 + 1;
    pvVar7 = (void *)*in_RDX;
    local_44 = *(int *)(*(long *)(param_2 + 0xf0) + lVar11);
    *(uint *)((long)in_RDX + 0xc) = uVar10;
    if (uVar6 < uVar10) {
      if ((uVar6 == 0) || (uVar10 = uVar10 + (uVar10 >> 2), uVar10 != 0)) {
        pvVar7 = (void *)Realloc(pvVar7,(ulong)(uVar10 * *(int *)(in_RDX + 1)),local_44,in_RCX,
                                 (int)uVar8);
        *(uint *)(in_RDX + 2) = uVar10;
        *in_RDX = pvVar7;
        goto LAB_001128c6;
      }
      if (pvVar7 != (void *)0x0) {
        Realloc(pvVar7,0,local_44,in_RCX,(int)uVar8);
        *in_RDX = 0;
      }
      *(undefined4 *)(in_RDX + 2) = 0;
    }
    else {
LAB_001128c6:
      if (pvVar7 != (void *)0x0) {
        memcpy((void *)((long)pvVar7 +
                       (ulong)((*(int *)((long)in_RDX + 0xc) + -1) * *(uint *)(in_RDX + 1))),
               &local_44,(ulong)*(uint *)(in_RDX + 1));
      }
    }
    lVar11 = lVar11 + 4;
    if ((ulong)uVar1 << 2 == lVar11) goto LAB_0011281d;
    iVar9 = *(int *)((long)in_RDX + 0xc);
    uVar6 = *(uint *)(in_RDX + 2);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::param::Quality::computeMetrics(xatlas::internal::Mesh const*) */

void __thiscall xatlas::internal::param::Quality::computeMetrics(Quality *this,Mesh *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_88 [4];
  float local_78;
  float local_74;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  long local_40;
  
  uVar2 = *(uint *)(param_1 + 0x4c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  if (2 < uVar2) {
    lVar12 = 0;
    uVar11 = 0;
    fVar13 = _LC11;
    do {
      lVar3 = *(long *)(param_1 + 0x40);
      lVar4 = *(long *)(param_1 + 0x58);
      lVar8 = 0;
      lVar5 = *(long *)(param_1 + 0x88);
      pfVar10 = &local_68;
      do {
        uVar9 = (ulong)*(uint *)(lVar3 + lVar12 + lVar8 * 4);
        puVar1 = (undefined8 *)(lVar4 + uVar9 * 0xc);
        uVar6 = *puVar1;
        fVar16 = *(float *)(puVar1 + 1);
        *(undefined8 *)(local_88 + lVar8 * 2) = *(undefined8 *)(lVar5 + uVar9 * 8);
        lVar8 = lVar8 + 1;
        *(undefined8 *)pfVar10 = uVar6;
        pfVar10[2] = fVar16;
        pfVar10 = pfVar10 + 3;
      } while (lVar8 != 3);
      fVar24 = local_88[3] - local_88[1];
      fVar23 = local_78 - local_88[0];
      fVar16 = (fVar24 * fVar23 - (local_74 - local_88[1]) * (local_88[2] - local_88[0])) * fVar13;
      if (_LC19 < (float)((uint)fVar16 & _LC37)) {
        fVar19 = local_88[0] - local_88[2];
        fVar22 = local_88[2] - local_78;
        fVar21 = local_88[1] - local_74;
        fVar18 = local_74 - local_88[3];
        fVar16 = (float)((uint)fVar16 & _LC37 & -(uint)(fVar16 < 0.0) |
                        ~-(uint)(fVar16 < 0.0) & (uint)fVar16);
        fVar14 = (local_4c - fStack_64) * (local_5c - local_68) -
                 (local_58 - fStack_64) * (local_50 - local_68);
        fVar17 = (local_50 - local_68) * (local_54 - local_60) -
                 (local_5c - local_68) * (local_48 - local_60);
        fVar20 = (local_58 - fStack_64) * (local_48 - local_60) -
                 (local_54 - local_60) * (local_4c - fStack_64);
        fVar15 = _LC4 / (fVar16 + fVar16);
        fVar14 = SQRT(fVar20 * fVar20 + fVar17 * fVar17 + fVar14 * fVar14) * fVar13;
        fVar17 = (local_54 * fVar23 + local_60 * fVar22 + local_48 * fVar19) * fVar15;
        fVar20 = (local_58 * fVar23 + fStack_64 * fVar22 + local_4c * fVar19) * fVar15;
        fVar23 = (fVar23 * local_5c + fVar22 * local_68 + fVar19 * local_50) * fVar15;
        fVar19 = (local_54 * fVar21 + local_60 * fVar18 + local_48 * fVar24) * fVar15;
        fVar22 = (local_58 * fVar21 + fStack_64 * fVar18 + local_4c * fVar24) * fVar15;
        fVar15 = (fVar18 * local_68 + fVar21 * local_5c + fVar24 * local_50) * fVar15;
        fVar24 = fVar23 * fVar23 + fVar20 * fVar20 + fVar17 * fVar17;
        fVar23 = fVar23 * fVar15 + fVar20 * fVar22 + fVar17 * fVar19;
        fVar17 = fVar19 * fVar19 + fVar15 * fVar15 + fVar22 * fVar22;
        fVar15 = fVar17 + fVar24;
        fVar24 = fVar24 - fVar17;
        fVar23 = SQRT(fVar23 * fVar23 * __LC48 + fVar24 * fVar24);
        if (0.0 <= fVar15 - fVar23) {
          fVar17 = 0.0;
          fVar24 = SQRT((fVar15 - fVar23) * fVar13);
          fVar18 = (float)((uint)fVar24 & _LC37);
          if (0.0 <= fVar23 + fVar15) goto LAB_00112d6b;
        }
        else {
          fVar18 = 0.0;
          fVar24 = 0.0;
LAB_00112d6b:
          fVar17 = SQRT((fVar23 + fVar15) * fVar13);
        }
        if (fVar17 <= fVar24) {
          fVar23 = fVar18;
          if (fVar18 <= (float)((uint)fVar17 & _LC37)) {
            fVar23 = (float)((uint)fVar17 & _LC37);
          }
          fVar19 = _LC8;
          if (_LC4 <= fVar23) {
            fVar19 = _LC8 * fVar23;
          }
          if ((fVar19 < (float)((uint)(fVar24 - fVar17) & _LC37)) && (s_print != (undefined *)0x0))
          {
            (*(code *)s_print)("\rASSERT: %s %s %d\n",
                               "sigma2 > sigma1 || equal(sigma1, sigma2, kEpsilon)",
                               "thirdparty/xatlas/xatlas.cpp",0x1bb5);
            fVar13 = _LC11;
          }
        }
        fVar23 = *(float *)(this + 0x1c);
        if (*(float *)(this + 0x1c) <= fVar17) {
          fVar23 = fVar17;
        }
        bVar7 = _LC50 < fVar18;
        *(float *)(this + 0x1c) = fVar23;
        *(float *)(this + 0x18) =
             SQRT(fVar15 * fVar13) * SQRT(fVar15 * fVar13) * fVar14 + *(float *)(this + 0x18);
        if (bVar7) {
          *(float *)(this + 0x20) = (fVar17 / fVar24) * fVar14 + *(float *)(this + 0x20);
        }
        *(ulong *)(this + 0x10) =
             CONCAT44((float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) + fVar14,
                      (float)*(undefined8 *)(this + 0x10) + fVar16);
        *(float *)(this + 0x24) = fVar24 * fVar17 * fVar14 + *(float *)(this + 0x24);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0xc;
    } while (uVar11 < uVar2 / 3);
    fVar13 = *(float *)(this + 0x14);
    if (0.0 < fVar13) {
      fVar16 = *(float *)(this + 0x10) / fVar13;
      if (fVar16 < 0.0) {
        fVar16 = sqrtf(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      fVar23 = *(float *)(this + 0x18) / fVar13;
      if (fVar23 < 0.0) {
        fVar23 = sqrtf(fVar23);
      }
      else {
        fVar23 = SQRT(fVar23);
      }
      *(ulong *)(this + 0x18) = CONCAT44(fVar16 * *(float *)(this + 0x1c),fVar23 * fVar16);
      fVar16 = *(float *)(this + 0x20) / fVar13;
      if (fVar16 < 0.0) {
        fVar16 = sqrtf(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      *(float *)(this + 0x20) = fVar16;
      fVar13 = *(float *)(this + 0x24) / fVar13;
      if (fVar13 < 0.0) {
        fVar13 = sqrtf(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
      }
      *(float *)(this + 0x24) = fVar13;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::param::Chart::Chart(xatlas::internal::param::ChartCtorBuffers&,
   xatlas::internal::param::Chart const*, xatlas::internal::Mesh const*,
   xatlas::internal::ConstArrayView<unsigned int>,
   xatlas::internal::ConstArrayView<xatlas::internal::Vector2>, xatlas::internal::Mesh const*) */

void __thiscall
xatlas::internal::param::Chart::Chart
          (Chart *this,long *param_1,long param_2,long param_3,long param_5,uint param_6,
          undefined8 param_7,undefined8 param_8,float *param_9)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  Mesh *this_00;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint uVar11;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar12;
  int extraout_EDX_03;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  int iVar19;
  long in_FS_OFFSET;
  double extraout_XMM0_Qa;
  char *local_f0;
  uint local_b0;
  uint local_ac [5];
  undefined4 local_98;
  uint local_94;
  uint local_90;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  uint local_70;
  void *local_68;
  undefined8 local_60;
  uint local_58;
  uint local_4c [3];
  long local_40;
  
  uVar7 = _LC18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0x300000003;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(ulong *)(this + 0x48) = uVar7;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(ulong *)(this + 0x60) = uVar7;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(ulong *)(this + 0x78) = uVar7;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(ulong *)(this + 0x90) = uVar7;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 8;
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xb8] = (Chart)0x0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  this[0xe0] = (Chart)0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  ArrayBase::resize((uint)(this + 0x58),SUB41(param_6,0));
  if (param_6 != 0) {
    lVar8 = *(long *)(param_2 + 0x58);
    lVar5 = 0;
    lVar15 = *(long *)(this + 0x58);
    do {
      *(undefined4 *)(lVar15 + lVar5) =
           *(undefined4 *)(lVar8 + (ulong)*(uint *)(param_5 + lVar5) * 4);
      lVar5 = lVar5 + 4;
    } while (lVar5 != (ulong)param_6 << 2);
  }
  ArrayBase::resize((uint)param_1,SUB41(param_9[0x19],0));
  if (((void *)*param_1 != (void *)0x0) && (*(int *)((long)param_1 + 0xc) != 0)) {
    memset((void *)*param_1,0xff,(ulong)(uint)(*(int *)((long)param_1 + 0xc) * (int)param_1[1]));
  }
  this_00 = (Mesh *)(*(code *)s_realloc)(0,0x168);
  pcVar6 = (char *)0x0;
  uVar13 = 0xffffffff;
  Mesh::Mesh(this_00,*param_9,*(uint *)(this + 100) * 3,*(uint *)(this + 100),0,0xffffffff);
  iVar19 = (int)uVar13;
  *(Mesh **)(this + 0x28) = this_00;
  local_98 = 4;
  local_94 = *(int *)(this + 100) * 3;
  local_88 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_90 = 0;
  local_78 = uVar7;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = uVar7;
  local_58 = 0;
  iVar12 = (int)this;
  if (param_6 == 0) {
    ArrayBase::resize(iVar12 + 0x40,false);
  }
  else {
    pcVar17 = (char *)0x0;
    pcVar6 = (char *)((ulong)param_6 << 2);
    do {
      iVar19 = 0;
      do {
        uVar18 = *(uint *)(*(long *)(param_9 + 0x10) +
                          (ulong)(uint)(*(int *)(pcVar17 + *(long *)(this + 0x58)) * 3 + iVar19) * 4
                          );
        lVar8 = (ulong)uVar18 * 4;
        local_b0 = *(uint *)(*(long *)(param_9 + 0x2e) + (ulong)uVar18 * 4);
        pcVar9 = (char *)(ulong)*(uint *)(*(long *)(param_3 + 0x40) +
                                         (ulong)(uint)(*(int *)(pcVar17 + param_5) * 3 + iVar19) * 4
                                         );
        if (local_88 == (void *)0x0) {
          local_ac[0] = 0xffffffff;
          uVar4 = nextPowerOfTwo(local_94);
          uVar11 = (uint)(long)(extraout_XMM0_Qa * __LC34);
          pcVar10 = pcVar9;
          if (uVar4 < uVar11) {
            uVar4 = nextPowerOfTwo(uVar11);
            pcVar10 = pcVar9;
            uVar11 = extraout_EDX_00;
          }
          local_90 = uVar4;
          local_88 = (void *)Realloc((void *)0x0,(ulong)uVar4 * 4,uVar11,pcVar10,(int)uVar13);
          lVar8 = 0;
          if (local_90 != 0) {
            do {
              *(undefined4 *)((long)local_88 + lVar8 * 4) = 0xffffffff;
              lVar8 = lVar8 + 1;
            } while ((uint)lVar8 < local_90);
          }
          if (local_70 < local_94) {
            ArrayBase::setArrayCapacity((uint)&pvStack_80);
          }
          pcVar9 = (char *)((ulong)pcVar10 & 0xffffffff);
          if (local_58 < local_94) {
            ArrayBase::setArrayCapacity((uint)&local_68);
            pcVar9 = (char *)((ulong)pcVar10 & 0xffffffff);
            lVar15 = (ulong)(local_90 - 1 & local_b0) << 2;
          }
          else {
            lVar15 = (ulong)(local_90 - 1 & local_b0) << 2;
          }
        }
        else {
          uVar7 = (ulong)(local_90 - 1 & local_b0);
          lVar15 = uVar7 * 4;
          for (local_ac[0] = *(uint *)((long)local_88 + uVar7 * 4); local_ac[0] != 0xffffffff;
              local_ac[0] = *(uint *)((long)local_68 + (ulong)local_ac[0] * 4)) {
            if (local_b0 == *(uint *)((long)pvStack_80 + (ulong)local_ac[0] * 4)) goto LAB_001132f8;
          }
          local_ac[0] = 0xffffffff;
        }
        uVar11 = local_78._4_4_ + 1;
        local_78 = CONCAT44(uVar11,(int)local_78);
        if (local_70 < uVar11) {
          if ((local_70 == 0) || (uVar11 = uVar11 + (uVar11 >> 2), uVar11 != 0)) {
            pvStack_80 = (void *)Realloc(pvStack_80,(ulong)(uVar11 * (int)local_78),uVar11,pcVar9,
                                         (int)uVar13);
            local_70 = uVar11;
            goto LAB_001134ee;
          }
          if (pvStack_80 == (void *)0x0) {
            local_70 = 0;
          }
          else {
            Realloc(pvStack_80,0,0,pcVar9,(int)uVar13);
            pvStack_80 = (void *)0x0;
            local_70 = 0;
          }
        }
        else {
LAB_001134ee:
          if (pvStack_80 != (void *)0x0) {
            memcpy((void *)((long)pvStack_80 + (ulong)(uint)((local_78._4_4_ + -1) * (int)local_78))
                   ,&local_b0,local_78 & 0xffffffff);
          }
        }
        ArrayBase::push_back((uchar *)&local_68);
        lVar8 = *(long *)(this + 0x28);
        *(int *)((long)local_88 + lVar15) = local_60._4_4_ + -1;
        local_ac[1] = 0;
        local_ac[2] = 0;
        local_ac[0] = local_78._4_4_ - 1;
        local_ac[3] = 0;
        pcVar9 = (char *)((ulong)uVar18 * 3);
        ArrayBase::push_back((uchar *)(lVar8 + 0x58));
        if ((*(byte *)(lVar8 + 4) & 2) != 0) {
          ArrayBase::push_back((uchar *)(lVar8 + 0x70));
        }
        ArrayBase::push_back((uchar *)(lVar8 + 0x88));
        lVar8 = (ulong)uVar18 << 2;
LAB_001132f8:
        if (*(int *)(lVar8 + *param_1) == -1) {
          iVar16 = *(int *)(this + 0x3c);
          *(int *)(lVar8 + *param_1) = iVar16;
          *(int *)(this + 0x3c) = iVar16 + 1;
          ArrayBase::push_back((uchar *)(this + 0x70));
          uVar18 = *(int *)(this + 0x94) + 1;
          *(uint *)(this + 0x94) = uVar18;
          if (*(uint *)(this + 0x98) < uVar18) {
            pvVar1 = *(void **)(this + 0x88);
            if ((*(uint *)(this + 0x98) != 0) && (uVar18 = uVar18 + (uVar18 >> 2), uVar18 == 0)) {
              if (pvVar1 == (void *)0x0) {
                *(undefined4 *)(this + 0x98) = 0;
              }
              else {
                Realloc(pvVar1,0,extraout_EDX,pcVar9,(int)uVar13);
                *(undefined8 *)(this + 0x88) = 0;
                *(undefined4 *)(this + 0x98) = 0;
              }
              goto LAB_00113305;
            }
            lVar8 = Realloc(pvVar1,(ulong)(uVar18 * *(int *)(this + 0x90)),extraout_EDX,pcVar9,
                            (int)uVar13);
            *(uint *)(this + 0x98) = uVar18;
            *(long *)(this + 0x88) = lVar8;
          }
          else {
            lVar8 = *(long *)(this + 0x88);
          }
          if (lVar8 != 0) {
            memcpy((void *)(lVar8 + (ulong)((*(int *)(this + 0x94) + -1) * *(uint *)(this + 0x90))),
                   local_ac,(ulong)*(uint *)(this + 0x90));
          }
        }
LAB_00113305:
        iVar19 = iVar19 + 1;
      } while (iVar19 != 3);
      pcVar17 = pcVar17 + 4;
    } while (pcVar17 != pcVar6);
    iVar16 = 0;
    ArrayBase::resize(iVar12 + 0x40,(bool)(SUB41(param_6,0) * '\x03'));
    local_f0 = (char *)0x0;
    do {
      lVar14 = 0;
      lVar8 = *(long *)(this + 0x40);
      lVar15 = *(long *)(param_9 + 0x10);
      lVar5 = *param_1;
      lVar2 = *(long *)(param_9 + 0x2e);
      lVar3 = *(long *)(this + 0x58);
      do {
        while( true ) {
          iVar19 = (int)lVar14;
          uVar7 = (ulong)*(uint *)(lVar15 + (ulong)(uint)(*(int *)(local_f0 + lVar3) * 3 + iVar19) *
                                            4);
          *(undefined4 *)(lVar8 + (ulong)(uint)(iVar16 + iVar19) * 4) =
               *(undefined4 *)(lVar5 + uVar7 * 4);
          uVar18 = *(uint *)(lVar2 + uVar7 * 4);
          if (local_88 == (void *)0x0) break;
          uVar11 = *(uint *)((long)local_88 + (ulong)(local_90 - 1 & uVar18) * 4);
          while ((uVar11 != 0xffffffff &&
                 (uVar18 != *(uint *)((long)pvStack_80 + (ulong)uVar11 * 4)))) {
            uVar11 = *(uint *)((long)local_68 + (ulong)uVar11 * 4);
          }
          local_4c[lVar14] = uVar11;
          lVar14 = lVar14 + 1;
          if (lVar14 == 3) goto LAB_001137bd;
        }
        local_4c[lVar14] = 0xffffffff;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
LAB_001137bd:
      iVar19 = iVar19 + 1;
      iVar16 = iVar16 + 3;
      Mesh::addFace(*(uint **)(this + 0x28),SUB81(local_4c,0),0);
      local_f0 = local_f0 + 4;
    } while (local_f0 != pcVar6);
  }
  Mesh::createBoundaries(*(Mesh **)(this + 0x28));
  ArrayBase::resize(iVar12 + 0xa0,SUB41(*(undefined4 *)(*(long *)(this + 0x28) + 100),0));
  memcpy(*(void **)(this + 0xa0),*(void **)(*(long *)(this + 0x28) + 0x88),
         (ulong)*(uint *)(*(long *)(this + 0x28) + 100) << 3);
  iVar12 = extraout_EDX_01;
  if (local_88 != (void *)0x0) {
    Realloc(local_88,0,extraout_EDX_01,pcVar6,iVar19);
    iVar12 = extraout_EDX_02;
  }
  Realloc(local_68,0,iVar12,pcVar6,iVar19);
  Realloc(pvStack_80,0,extraout_EDX_03,pcVar6,iVar19);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::Mesh::~Mesh() */

void __thiscall xatlas::internal::Mesh::~Mesh(Mesh *this)

{
  char *in_RCX;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int in_R8D;
  
  if (*(void **)(this + 0x130) != (void *)0x0) {
    Realloc(*(void **)(this + 0x130),0,in_EDX,in_RCX,in_R8D);
    in_EDX = extraout_EDX;
  }
  Realloc(*(void **)(this + 0x150),0,in_EDX,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0x138),0,extraout_EDX_00,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0x108),0,extraout_EDX_01,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0xf0),0,extraout_EDX_02,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0xd8),0,extraout_EDX_03,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0xb8),0,extraout_EDX_04,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0xa0),0,extraout_EDX_05,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0x88),0,extraout_EDX_06,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0x70),0,extraout_EDX_07,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0x58),0,extraout_EDX_08,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0x40),0,extraout_EDX_09,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0x28),0,extraout_EDX_10,in_RCX,in_R8D);
  Realloc(*(void **)(this + 0x10),0,extraout_EDX_11,in_RCX,in_R8D);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::param::Chart::parameterize(xatlas::ChartOptions const&,
   xatlas::internal::UniformGrid2&) */

void xatlas::internal::param::Chart::parameterize(ChartOptions *param_1,UniformGrid2 *param_2)

{
  Vector3 *pVVar1;
  Mesh *this;
  double dVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  uint *puVar6;
  Mesh *pMVar7;
  Vector3 *pVVar8;
  ulong *puVar9;
  long lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  ushort uVar17;
  float *pfVar18;
  float *pfVar19;
  uint *puVar20;
  NLContext *pNVar21;
  void *pvVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  double *pdVar26;
  double *__src;
  ulong uVar27;
  double *pdVar28;
  undefined1 (*pauVar29) [16];
  undefined8 *puVar30;
  undefined8 *puVar31;
  int *piVar32;
  undefined1 (*pauVar33) [16];
  uint *puVar34;
  undefined4 *puVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  char *pcVar39;
  code *pcVar40;
  int extraout_EDX;
  uint uVar41;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  float *pfVar42;
  long lVar43;
  long lVar44;
  Vector3 *extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined8 *puVar45;
  ulong extraout_RDX_02;
  undefined8 *extraout_RDX_03;
  int *piVar46;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  uint uVar47;
  long *plVar48;
  UniformGrid2 *pUVar49;
  uint uVar50;
  Vector3 *pVVar51;
  ulong uVar52;
  double *pdVar53;
  uint uVar54;
  Vector3 *pVVar55;
  undefined8 *puVar56;
  ulong uVar57;
  int iVar58;
  undefined4 *puVar59;
  uint uVar60;
  int iVar61;
  double *pdVar62;
  double *pdVar63;
  ulong uVar64;
  long in_FS_OFFSET;
  bool bVar65;
  byte bVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  double dVar72;
  float extraout_XMM1_Da;
  double dVar73;
  float __x;
  double dVar74;
  double dVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar83 [12];
  float local_138;
  uint local_130;
  uint local_128;
  undefined1 (*local_110) [16];
  undefined1 (*local_f8) [16];
  uint local_d0;
  float local_90;
  float fStack_8c;
  float local_84;
  float fStack_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  uint local_60;
  float local_58 [4];
  float local_48;
  float local_44;
  long local_40;
  
  bVar66 = 0;
  pUVar49 = *(UniformGrid2 **)(param_1 + 0x28);
  uVar3 = *(uint *)(pUVar49 + 100);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar47 = uVar3;
  if (*(int *)(param_1 + 0x34) == 0) goto LAB_00113b26;
  if (uVar3 != 0) {
    pfVar5 = *(float **)(pUVar49 + 0x88);
    fVar76 = *(float *)(param_1 + 0x14);
    fVar77 = *(float *)(param_1 + 0xc);
    fVar67 = *(float *)(param_1 + 0x10);
    fVar70 = *(float *)param_1;
    fVar79 = *(float *)(param_1 + 4);
    fVar78 = *(float *)(param_1 + 8);
    pfVar42 = *(float **)(pUVar49 + 0x58);
    pfVar18 = pfVar5;
    do {
      fVar82 = *pfVar42;
      fVar81 = pfVar42[1];
      fVar80 = pfVar42[2];
      pfVar19 = pfVar18 + 2;
      pfVar42 = pfVar42 + 3;
      *pfVar18 = fVar79 * fVar81 + fVar70 * fVar82 + fVar78 * fVar80;
      pfVar18[1] = fVar82 * fVar77 + fVar81 * fVar67 + fVar80 * fVar76;
      pfVar18 = pfVar19;
    } while (pfVar5 + (ulong)uVar3 * 2 != pfVar19);
  }
  if (*(int *)(param_1 + 0x30) == 0) goto LAB_00113b26;
  this = (Mesh *)(param_1 + 0xb8);
  Quality::computeBoundaryIntersection(this,pUVar49);
  pMVar7 = *(Mesh **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  fVar77 = _LC19;
  fVar76 = _LC11;
  uVar36 = _LC37;
  uVar47 = *(uint *)(pMVar7 + 0x4c);
  if (uVar47 < 3) {
LAB_00113f9f:
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  else {
    lVar44 = *(long *)(pMVar7 + 0x88);
    lVar37 = *(long *)(pMVar7 + 0x40);
    uVar60 = 0;
    uVar50 = 0;
    iVar61 = 0;
    do {
      lVar43 = 0;
      do {
        *(undefined8 *)(local_58 + lVar43 * 2) =
             *(undefined8 *)(lVar44 + (ulong)*(uint *)(lVar37 + lVar43 * 4) * 8);
        lVar43 = lVar43 + 1;
      } while (lVar43 != 3);
      uVar50 = uVar50 + 1;
      *(uint *)(param_1 + 0xbc) = uVar50;
      fVar67 = ((local_58[3] - local_58[1]) * (local_48 - local_58[0]) -
               (local_44 - local_58[1]) * (local_58[2] - local_58[0])) * fVar76;
      if ((float)((uint)fVar67 & uVar36) <= fVar77) {
        iVar61 = iVar61 + 1;
        *(int *)(param_1 + 0xc4) = iVar61;
      }
      else if (fVar67 < 0.0) {
        uVar60 = uVar60 + 1;
        *(uint *)(param_1 + 0xc0) = uVar60;
      }
      lVar37 = lVar37 + 0xc;
    } while (uVar50 < uVar47 / 3);
    if (uVar47 / 3 == iVar61 + uVar60) goto LAB_00113f9f;
    if (uVar47 / 6 < uVar60) {
      *(uint *)(param_1 + 0xc0) = uVar47 / 3 - uVar60;
    }
  }
  Quality::computeMetrics((Quality *)this,pMVar7);
  if ((((param_1[0xb8] == '\0') && (*(long *)(param_1 + 0xc0) == 0)) &&
      (0.0 < *(float *)(param_1 + 0xcc))) &&
     ((*(float *)(param_1 + 0xd0) <= _LC52 && (*(float *)(param_1 + 0xd4) <= _LC53)))) {
    pUVar49 = *(UniformGrid2 **)(param_1 + 0x28);
    uVar47 = *(uint *)(pUVar49 + 100);
    *(undefined4 *)(param_1 + 0x30) = 1;
    goto LAB_00113b26;
  }
  pUVar49 = *(UniformGrid2 **)(param_1 + 0x28);
  uVar47 = *(uint *)(pUVar49 + 100);
  if (*(int *)(param_1 + 0x30) != 2) goto LAB_00113b26;
  if (*(code **)param_2 == (code *)0x0) {
    local_60 = 0xffffffff;
    local_68 = 0xffffffffffffffff;
    if (1 < uVar47) {
      puVar34 = *(uint **)(pUVar49 + 0xd8);
      uVar50 = 1;
      uVar36 = *puVar34;
      if ((uVar36 & 2) == 0) {
        uVar50 = 1;
        do {
          uVar50 = uVar50 + 1;
          if (uVar50 == uVar47) goto LAB_00113dee;
        } while ((1 << ((byte)uVar50 & 0x1f) & puVar34[uVar50 >> 5]) == 0);
      }
      pfVar5 = *(float **)(pUVar49 + 0x58);
      uVar52 = (ulong)uVar50;
      uVar64 = (ulong)uVar50;
      uVar27 = (ulong)uVar50;
      local_70 = uVar50;
      bVar65 = false;
      uVar25 = (ulong)uVar50;
      local_60 = uVar50;
      uVar38 = 1;
      uVar57 = (ulong)uVar50;
      bVar11 = false;
      bVar13 = false;
      bVar15 = false;
      bVar14 = false;
      bVar12 = false;
      local_78 = CONCAT44(uVar50,uVar50);
      local_68 = CONCAT44(uVar50,uVar50);
      uVar60 = uVar50;
      pfVar42 = pfVar5;
      while( true ) {
        if ((1 << ((byte)uVar38 & 0x1f) & uVar36) != 0) {
          fVar76 = pfVar42[3];
          if (pfVar5[uVar27 * 3] <= fVar76) {
            if (pfVar5[uVar25 * 3] <= fVar76 && fVar76 != pfVar5[uVar25 * 3]) {
              uVar25 = uVar38;
              bVar12 = true;
            }
          }
          else {
            bVar65 = true;
            uVar27 = uVar38;
          }
          fVar76 = pfVar42[4];
          if (fVar76 < pfVar5[uVar57 * 3 + 1]) {
            bVar14 = true;
            uVar57 = uVar38;
          }
          else if (pfVar5[uVar64 * 3 + 1] <= fVar76 && fVar76 != pfVar5[uVar64 * 3 + 1]) {
            bVar15 = true;
            uVar64 = uVar38;
          }
          fVar76 = pfVar42[5];
          if (fVar76 < pfVar5[(ulong)uVar60 * 3 + 2]) {
            bVar13 = true;
            uVar60 = (uint)uVar38;
          }
          else if (pfVar5[uVar52 * 3 + 2] <= fVar76 && fVar76 != pfVar5[uVar52 * 3 + 2]) {
            bVar11 = true;
            uVar52 = uVar38;
          }
        }
        uVar36 = (uint)uVar38 + 1;
        uVar38 = (ulong)uVar36;
        if (uVar36 == uVar47) break;
        uVar36 = puVar34[uVar36 >> 5];
        pfVar42 = pfVar42 + 3;
      }
      if (bVar11) {
        local_60 = (uint)uVar52;
      }
      if (bVar13) {
        local_70 = uVar60;
      }
      if (bVar15) {
        local_68 = CONCAT44((int)uVar64,uVar50);
      }
      if (bVar14) {
        local_78 = CONCAT44((int)uVar57,uVar50);
      }
      uVar36 = uVar50;
      if (bVar12) {
        local_68 = CONCAT44(local_68._4_4_,(uint)uVar25);
        uVar36 = (uint)uVar25;
      }
      if (bVar65) {
        local_78 = CONCAT44(local_78._4_4_,(uint)uVar27);
        uVar50 = (uint)uVar27;
      }
      lVar44 = 0;
      puVar56 = &local_78;
      do {
        pfVar42 = pfVar5 + (ulong)*(uint *)((long)&local_68 + lVar44) * 3;
        pfVar18 = pfVar5 + (ulong)*(uint *)((long)puVar56 + lVar44) * 3;
        *(float *)((long)local_58 + lVar44) =
             SQRT((*pfVar18 - *pfVar42) * (*pfVar18 - *pfVar42) +
                  (pfVar18[1] - pfVar42[1]) * (pfVar18[1] - pfVar42[1]) +
                  (pfVar18[2] - pfVar42[2]) * (pfVar18[2] - pfVar42[2]));
        lVar44 = lVar44 + 4;
      } while (lVar44 != 0xc);
      if (((local_58[0] <= local_58[1]) || (local_58[0] <= local_58[2])) &&
         (uVar50 = local_70, uVar36 = local_60, local_58[2] < local_58[1])) {
        uVar50 = local_78._4_4_;
        uVar36 = local_68._4_4_;
      }
      auVar83 = (*(code *)s_realloc)(0,0xa8);
      uVar16 = _UNK_00120568;
      uVar71 = __LC55;
      pNVar21 = auVar83._0_8_;
      *(undefined8 *)pNVar21 = 0;
      *(undefined8 *)(pNVar21 + 0xa0) = 0;
      puVar45 = (undefined8 *)((ulong)(pNVar21 + 8) & 0xfffffffffffffff8);
      for (pcVar39 = (char *)(ulong)((auVar83._0_4_ -
                                     (int)(undefined8 *)((ulong)(pNVar21 + 8) & 0xfffffffffffffff8))
                                     + 0xa8U >> 3); pcVar39 != (char *)0x0; pcVar39 = pcVar39 + -1)
      {
        *puVar45 = 0;
        puVar45 = puVar45 + (ulong)bVar66 * -2 + 1;
      }
      *(undefined4 *)(pNVar21 + 0x74) = 1;
      *(uint *)(pNVar21 + 0x70) = uVar47 * 2;
      *(uint *)(pNVar21 + 0x7c) = uVar47 * 5;
      pNVar21[0x80] = (NLContext)0x1;
      *(undefined8 *)(pNVar21 + 0x88) = uVar71;
      *(undefined8 *)(pNVar21 + 0x90) = uVar16;
      pvVar22 = (void *)Realloc((void *)0x0,0x10,auVar83._8_4_,(char *)0x0,(int)puVar56);
      *(void **)pNVar21 = pvVar22;
      memset(pvVar22,0,(ulong)*(uint *)(pNVar21 + 0x74) << 4);
      pvVar22 = (void *)Realloc((void *)0x0,
                                (ulong)(uint)(*(int *)(pNVar21 + 0x70) * *(int *)(pNVar21 + 0x74))
                                << 3,extraout_EDX,pcVar39,(int)puVar56);
      *(void **)(pNVar21 + 8) = pvVar22;
      memset(pvVar22,0,(ulong)(uint)(*(int *)(pNVar21 + 0x70) * *(int *)(pNVar21 + 0x74)) << 3);
      uVar60 = *(uint *)(pNVar21 + 0x74);
      if (uVar60 == 0) {
        uVar54 = *(uint *)(pNVar21 + 0x70);
        uVar41 = 0;
      }
      else {
        plVar48 = *(long **)pNVar21;
        puVar56 = *(undefined8 **)(pNVar21 + 8);
        uVar41 = 0;
        uVar54 = *(uint *)(pNVar21 + 0x70);
        plVar23 = plVar48;
        do {
          uVar25 = (ulong)uVar41;
          *(undefined4 *)(plVar23 + 1) = 8;
          plVar24 = plVar23 + 2;
          uVar41 = uVar41 + uVar54;
          pcVar39 = (char *)(puVar56 + uVar25);
          *plVar23 = (long)pcVar39;
          plVar23 = plVar24;
        } while (plVar48 + (ulong)uVar60 * 2 != plVar24);
      }
      iVar61 = (int)puVar56;
      pvVar22 = (void *)Realloc((void *)0x0,(ulong)uVar54,uVar41,pcVar39,iVar61);
      *(void **)(pNVar21 + 0x10) = pvVar22;
      memset(pvVar22,0,(ulong)*(uint *)(pNVar21 + 0x70));
      pvVar22 = (void *)Realloc((void *)0x0,(ulong)*(uint *)(pNVar21 + 0x70) << 2,extraout_EDX_00,
                                pcVar39,iVar61);
      *(void **)(pNVar21 + 0x18) = pvVar22;
      memset(pvVar22,0,(ulong)*(uint *)(pNVar21 + 0x70) << 2);
      uVar17 = _LC56;
      uVar52 = 0;
      puVar56 = *(undefined8 **)(pUVar49 + 0x88);
      uVar27 = 0;
      lVar44 = **(long **)pNVar21;
      iVar61 = (int)(*(long **)pNVar21)[1];
      uVar25 = 0;
      uVar57 = (ulong)_LC56;
      do {
        *(double *)(lVar44 + uVar27) = (double)*(float *)(puVar56 + uVar25);
        uVar60 = (int)uVar27 + iVar61;
        *(double *)(lVar44 + (ulong)uVar60) = (double)*(float *)((long)puVar56 + uVar25 * 8 + 4);
        if ((uVar50 == (uint)uVar25) || (uVar36 == (uint)uVar25)) {
          *(ushort *)(*(long *)(pNVar21 + 0x10) + uVar52) = uVar17;
        }
        uVar25 = uVar25 + 1;
        uVar27 = (ulong)(uVar60 + iVar61);
        uVar52 = (ulong)((int)uVar52 + 2);
      } while (uVar47 != uVar25);
      if (*(long *)(pNVar21 + 0x28) == 0) {
        uVar36 = *(uint *)(pNVar21 + 0x70);
        if (uVar36 != 0) {
          lVar44 = *(long *)(pNVar21 + 0x10);
          lVar37 = *(long *)(pNVar21 + 0x18);
          lVar43 = 0;
          uVar50 = 0;
          do {
            uVar36 = uVar50;
            uVar60 = 0xffffffff;
            if (*(char *)(lVar44 + lVar43) == '\0') {
              uVar36 = uVar50 + 1;
              uVar60 = uVar50;
            }
            *(uint *)(lVar37 + lVar43 * 4) = uVar60;
            lVar43 = lVar43 + 1;
            uVar50 = uVar36;
          } while ((uint)lVar43 < *(uint *)(pNVar21 + 0x70));
        }
        *(uint *)(pNVar21 + 0x20) = uVar36;
        if (pNVar21[0x80] == (NLContext)0x0) {
          *(uint *)(pNVar21 + 0x7c) = uVar36 * 5;
        }
        auVar83 = (*(code *)s_realloc)(0,0x48);
        pauVar29 = auVar83._0_8_;
        uVar57 = (ulong)uVar36;
        *(undefined1 (**) [16])(pNVar21 + 0x28) = pauVar29;
        *pauVar29 = (undefined1  [16])0x0;
        pauVar29[1] = (undefined1  [16])0x0;
        pauVar29[2] = (undefined1  [16])0x0;
        pauVar29[3] = (undefined1  [16])0x0;
        *(undefined8 *)pauVar29[4] = 0;
        pcVar39 = *(char **)(pNVar21 + 0x28);
        *(ulong *)pcVar39 = CONCAT44(uVar36,uVar36);
        pcVar39[8] = '\x01';
        pcVar39[9] = '\x10';
        pcVar39[10] = '\0';
        pcVar39[0xb] = '\0';
        *(code **)(pcVar39 + 0x10) = opennl::nlSparseMatrixDestroy;
        *(code **)(pcVar39 + 0x18) = opennl::nlSparseMatrixMult;
        pvVar22 = (void *)Realloc((void *)0x0,uVar57 * 0x10,auVar83._8_4_,pcVar39,uVar36);
        *(void **)(pcVar39 + 0x28) = pvVar22;
        memset(pvVar22,0,uVar57 * 0x10);
        puVar45 = extraout_RDX_03;
        if (uVar36 != 0) {
          puVar45 = *(undefined8 **)(pcVar39 + 0x28) + uVar57 * 2;
          puVar30 = *(undefined8 **)(pcVar39 + 0x28);
          do {
            *puVar30 = 0;
            puVar31 = puVar30 + 2;
            puVar30[1] = 0;
            puVar30 = puVar31;
          } while (puVar45 != puVar31);
        }
        pcVar39[0x30] = '\0';
        pcVar39[0x31] = '\0';
        pcVar39[0x32] = '\0';
        pcVar39[0x33] = '\0';
        pcVar39[0x34] = '\0';
        pcVar39[0x35] = '\0';
        pcVar39[0x36] = '\0';
        pcVar39[0x37] = '\0';
        pcVar39[0x40] = '\0';
        pcVar39[0x41] = '\0';
        pcVar39[0x42] = '\0';
        pcVar39[0x43] = '\0';
        pcVar39[0x44] = '\0';
        pcVar39[0x45] = '\0';
        pcVar39[0x46] = '\0';
        pcVar39[0x47] = '\0';
        *(ulong *)(pcVar39 + 0x20) = CONCAT44(uVar36,uVar36);
        pvVar22 = (void *)Realloc((void *)0x0,uVar57 * 8,(int)puVar45,pcVar39,uVar36);
        *(void **)(pcVar39 + 0x38) = pvVar22;
        memset(pvVar22,0,(ulong)*(uint *)(pcVar39 + 0x20) << 3);
        pvVar22 = (void *)Realloc((void *)0x0,(ulong)(uVar36 * *(int *)(pNVar21 + 0x74)) << 3,
                                  extraout_EDX_11,pcVar39,(int)uVar57);
        *(void **)(pNVar21 + 0x60) = pvVar22;
        memset(pvVar22,0,(ulong)(uVar36 * *(int *)(pNVar21 + 0x74)) << 3);
        pvVar22 = (void *)Realloc((void *)0x0,(ulong)(uVar36 * *(int *)(pNVar21 + 0x74)) << 3,
                                  extraout_EDX_12,pcVar39,(int)uVar57);
        *(void **)(pNVar21 + 0x68) = pvVar22;
        memset(pvVar22,0,(ulong)(uVar36 * *(int *)(pNVar21 + 0x74)) << 3);
        iVar61 = *(int *)(pNVar21 + 0x20);
        if (*(uint *)(pNVar21 + 0x74) != 0) {
          uVar36 = *(uint *)(pNVar21 + 0x70);
          lVar44 = (ulong)*(uint *)(pNVar21 + 0x74) << 4;
          uVar57 = 0;
          lVar37 = 0;
          if (uVar36 == 0) {
            do {
              lVar37 = lVar37 + 0x10;
            } while (lVar44 != lVar37);
          }
          else {
            lVar43 = *(long *)(pNVar21 + 0x10);
            do {
              uVar25 = 0;
              do {
                if (*(char *)(lVar43 + uVar25) == '\0') {
                  *(undefined8 *)
                   (*(long *)(pNVar21 + 0x60) +
                   (ulong)(uint)((int)uVar57 + *(int *)(*(long *)(pNVar21 + 0x18) + uVar25 * 4)) * 8
                   ) = *(undefined8 *)
                        (*(long *)(*(long *)pNVar21 + lVar37) +
                        (ulong)(uint)((int)uVar25 * (int)((long *)(*(long *)pNVar21 + lVar37))[1]));
                }
                uVar25 = uVar25 + 1;
              } while (uVar36 != uVar25);
              lVar37 = lVar37 + 0x10;
              uVar57 = (ulong)(uint)((int)uVar57 + iVar61);
            } while (lVar37 != lVar44);
          }
        }
        *(undefined8 *)(pNVar21 + 0x40) = 0;
        *(undefined8 *)(pNVar21 + 0x48) = 0;
        *(undefined8 *)(pNVar21 + 0x50) = 0;
        *(undefined8 *)(pNVar21 + 0x58) = 0;
        *(undefined4 *)(pNVar21 + 0x78) = 0;
      }
      iVar61 = (int)uVar57;
      uVar36 = *(uint *)(pUVar49 + 0x4c);
      pcVar40 = (code *)0xaaaaaaab;
      pVVar8 = *(Vector3 **)(pUVar49 + 0x40);
      local_d0 = uVar36 / 3;
      lVar44 = *(long *)(pUVar49 + 0x58);
      if (2 < uVar36) {
        lVar37 = 0;
        uVar50 = 1;
        pVVar55 = pVVar8;
        do {
          local_128 = *(uint *)(pVVar8 + lVar37 * 0xc);
          uVar60 = *(uint *)(pVVar8 + (ulong)uVar50 * 4);
          uVar36 = *(uint *)(pVVar8 + (ulong)(uVar50 + 1) * 4);
          pfVar5 = (float *)(lVar44 + (ulong)local_128 * 0xc);
          fVar76 = *pfVar5;
          fVar77 = pfVar5[1];
          pVVar51 = (Vector3 *)(lVar44 + (ulong)uVar36 * 0xc);
          fVar67 = pfVar5[2];
          fVar70 = *(float *)(pVVar51 + 4);
          fVar79 = *(float *)(pVVar51 + 8);
          pVVar1 = (Vector3 *)(lVar44 + (ulong)uVar60 * 0xc);
          fVar78 = *(float *)pVVar51;
          fVar82 = *(float *)pVVar1;
          fVar81 = *(float *)(pVVar1 + 4);
          fVar80 = *(float *)(pVVar1 + 8);
          fVar68 = (float)vec_angle_cos(pVVar55,pVVar51,pVVar1);
          fVar68 = acosf(fVar68);
          uVar25 = (ulong)(uint)fVar79;
          fVar69 = (float)vec_angle_cos(pVVar55,pVVar51,extraout_RDX);
          fVar69 = acosf(fVar69);
          __x = (_LC57 - fVar69) - fVar68;
          pcVar40 = (code *)(CONCAT71((int7)(uVar25 >> 8),!NAN(fVar68)) & 0xffffffff);
          if (fVar68 != 0.0) {
            pcVar40 = (code *)0x0;
          }
          pVVar55 = (Vector3 *)pNVar21;
          if ((fVar69 == 0.0 || (char)pcVar40 != '\0') ||
             (pcVar40 = (code *)CONCAT71((int7)((ulong)pcVar40 >> 8),!NAN(__x)), __x == 0.0)) {
            uVar60 = uVar60 * 2;
            local_128 = local_128 * 2;
            pVVar51 = (Vector3 *)(ulong)(uVar60 + 1);
            fVar82 = fVar82 - fVar76;
            fVar80 = fVar80 - fVar67;
            fVar81 = fVar81 - fVar77;
            auVar83 = normalize(pVVar51);
            fVar68 = auVar83._8_4_;
            fVar81 = fVar81 * fVar81;
            fVar80 = fVar80 * fVar80;
            fStack_8c = auVar83._4_4_;
            fVar79 = fVar79 - fVar67;
            fVar70 = fVar70 - fVar77;
            local_90 = auVar83._0_4_;
            fVar78 = fVar78 - fVar76;
            fVar76 = local_90;
            uVar71 = normalize(pVVar51);
            local_84 = (float)uVar71;
            fStack_80 = (float)((ulong)uVar71 >> 0x20);
            uVar36 = uVar36 * 2;
            *(undefined4 *)(pNVar21 + 0x40) = 0;
            *(undefined4 *)(pNVar21 + 0x50) = 0;
            dVar72 = (double)(local_90 * fVar78 + fStack_8c * fVar70 + fVar68 * fVar79);
            dVar75 = (double)SQRT(fVar82 * fVar82 + fVar81 + fVar80);
            dVar74 = dVar72 - dVar75;
            dVar73 = (double)(fVar78 * (fStack_80 * fVar68 - extraout_XMM1_Da * fStack_8c) +
                              fVar70 * (fVar76 * extraout_XMM1_Da - local_84 * fVar68) +
                             fVar79 * (fStack_8c * local_84 - local_90 * fStack_80));
            opennl::nlCoefficient(pNVar21,local_128,dVar74);
            opennl::nlCoefficient(pNVar21,extraout_EDX_01 + 1,0.0 - dVar73);
            dVar72 = (double)((ulong)dVar72 ^ __LC58);
            opennl::nlCoefficient(pNVar21,uVar60,dVar72);
            opennl::nlCoefficient(pNVar21,(uint)pVVar51,dVar73);
            uVar54 = uVar36;
            opennl::nlCoefficient(pNVar21,uVar36,dVar75);
            opennl::nlEnd(pNVar21,uVar54);
            *(undefined4 *)(pNVar21 + 0x40) = 0;
            *(undefined4 *)(pNVar21 + 0x50) = 0;
            opennl::nlCoefficient(pNVar21,extraout_EDX_01,dVar73);
            opennl::nlCoefficient(pNVar21,extraout_EDX_01 + 1,dVar74);
            opennl::nlCoefficient(pNVar21,uVar60,(double)((ulong)dVar73 ^ __LC58));
            opennl::nlCoefficient(pNVar21,(uint)pVVar51,dVar72);
            uVar36 = uVar36 + 1;
            opennl::nlCoefficient(pNVar21,uVar36,dVar75);
            opennl::nlEnd(pNVar21,uVar36);
            uVar36 = extraout_EDX_02;
          }
          else {
            local_138 = sinf(fVar68);
            fVar67 = sinf(fVar69);
            fVar70 = sinf(__x);
            uVar54 = uVar60;
            fVar76 = fVar67;
            fVar77 = fVar70;
            local_130 = uVar36;
            if (fVar67 <= local_138) {
              if ((fVar67 < local_138) && (fVar70 < local_138)) {
                fVar68 = fVar69;
                uVar54 = uVar36;
                fVar76 = fVar70;
                fVar77 = local_138;
                local_138 = fVar67;
                local_130 = local_128;
                local_128 = uVar60;
              }
            }
            else if (fVar70 < fVar67) {
              fVar68 = __x;
              uVar54 = local_128;
              fVar76 = local_138;
              fVar77 = fVar67;
              local_138 = fVar70;
              local_130 = uVar60;
              local_128 = uVar36;
            }
            fVar67 = cosf(fVar68);
            if (fVar77 != 0.0) {
              fVar67 = fVar67 * (fVar76 / fVar77);
              local_138 = (fVar76 / fVar77) * local_138;
            }
            fVar77 = fVar67 - _LC4;
            *(undefined4 *)(pNVar21 + 0x40) = 0;
            uVar54 = uVar54 * 2;
            *(undefined4 *)(pNVar21 + 0x50) = 0;
            local_128 = local_128 * 2;
            local_130 = local_130 * 2;
            opennl::nlCoefficient(pNVar21,local_128,(double)fVar77);
            fVar76 = (float)((uint)local_138 ^ _LC6);
            opennl::nlCoefficient(pNVar21,local_128 + 1,(double)fVar76);
            fVar67 = (float)((uint)fVar67 ^ _LC6);
            opennl::nlCoefficient(pNVar21,uVar54,(double)fVar67);
            uVar36 = uVar54 + 1;
            pcVar40 = (code *)(ulong)uVar36;
            opennl::nlCoefficient(pNVar21,uVar36,(double)local_138);
            uVar60 = local_130;
            opennl::nlCoefficient(pNVar21,local_130,_LC51);
            opennl::nlEnd(pNVar21,uVar60);
            *(undefined4 *)(pNVar21 + 0x40) = 0;
            *(undefined4 *)(pNVar21 + 0x50) = 0;
            opennl::nlCoefficient(pNVar21,local_128,(double)local_138);
            opennl::nlCoefficient(pNVar21,local_128 + 1,(double)fVar77);
            opennl::nlCoefficient(pNVar21,uVar54,(double)fVar76);
            opennl::nlCoefficient(pNVar21,uVar36,(double)fVar67);
            local_130 = local_130 + 1;
            opennl::nlCoefficient(pNVar21,local_130,_LC51);
            opennl::nlEnd(pNVar21,local_130);
            uVar36 = extraout_EDX_03;
          }
          iVar61 = (int)uVar57;
          lVar37 = lVar37 + 1;
          uVar50 = uVar50 + 3;
        } while ((uint)lVar37 < local_d0);
      }
      *(undefined8 *)(pNVar21 + 0x40) = 0;
      Realloc(*(void **)(pNVar21 + 0x48),0,uVar36,(char *)pcVar40,iVar61);
      *(undefined8 *)(pNVar21 + 0x48) = 0;
      *(undefined8 *)(pNVar21 + 0x50) = 0;
      Realloc(*(void **)(pNVar21 + 0x58),0,extraout_EDX_04,(char *)pcVar40,iVar61);
      pvVar22 = *(void **)(pNVar21 + 0x30);
      *(undefined8 *)(pNVar21 + 0x58) = 0;
      if (pvVar22 != (void *)0x0) {
        (**(code **)((long)pvVar22 + 0x10))(pvVar22);
        Realloc(pvVar22,0,extraout_EDX_05,(char *)pcVar40,iVar61);
      }
      puVar9 = *(ulong **)(pNVar21 + 0x28);
      auVar83 = (*(code *)s_realloc)(0,0x28);
      local_f8 = auVar83._0_8_;
      *local_f8 = (undefined1  [16])0x0;
      *(undefined8 *)local_f8[2] = 0;
      local_f8[1] = (undefined1  [16])0x0;
      uVar25 = *puVar9;
      *(ulong *)*local_f8 = uVar25;
      *(undefined4 *)(*local_f8 + 8) = 0x1006;
      *(code **)local_f8[1] = opennl::nlJacobiPreconditionerDestroy;
      *(code **)(local_f8[1] + 8) = opennl::nlJacobiPreconditionerMult;
      pvVar22 = (void *)Realloc((void *)0x0,(uVar25 >> 0x20) << 3,auVar83._8_4_,(char *)pcVar40,
                                iVar61);
      uVar36 = *(uint *)((long)puVar9 + 4);
      *(void **)local_f8[2] = pvVar22;
      memset(pvVar22,0,(ulong)uVar36 << 3);
      dVar75 = _LC51;
      uVar25 = extraout_RDX_00;
      if (*(uint *)((long)puVar9 + 4) != 0) {
        uVar52 = puVar9[7];
        uVar25 = (ulong)*(uint *)((long)puVar9 + 4) * 8;
        lVar44 = 0;
        pcVar40 = *(code **)local_f8[2];
        do {
          dVar72 = dVar75;
          if (*(double *)(uVar52 + lVar44) != 0.0) {
            dVar72 = dVar75 / *(double *)(uVar52 + lVar44);
          }
          *(double *)(pcVar40 + lVar44) = dVar72;
          lVar44 = lVar44 + 8;
        } while (uVar25 - lVar44 != 0);
      }
      *(undefined1 (**) [16])(pNVar21 + 0x30) = local_f8;
      pauVar29 = *(undefined1 (**) [16])(pNVar21 + 0x28);
      local_110 = pauVar29;
      if (*(int *)(*pauVar29 + 8) == 0x1001) {
        uVar52 = (ulong)*(uint *)*pauVar29;
        if (*(uint *)*pauVar29 != 0) {
          piVar32 = *(int **)(pauVar29[2] + 8);
          piVar46 = piVar32 + uVar52 * 4;
          uVar52 = 0;
          do {
            uVar52 = (ulong)(uint)((int)uVar52 + *piVar32);
            piVar32 = piVar32 + 4;
          } while (piVar46 != piVar32);
        }
        iVar58 = (int)uVar52;
        iVar61 = iVar58;
        local_110 = (undefined1 (*) [16])(*(code *)s_realloc)(0,0x48);
        *local_110 = (undefined1  [16])0x0;
        local_110[1] = (undefined1  [16])0x0;
        uVar25 = uVar52 * 8;
        local_110[2] = (undefined1  [16])0x0;
        local_110[3] = (undefined1  [16])0x0;
        *(undefined8 *)local_110[4] = 0;
        uVar71 = *(undefined8 *)*pauVar29;
        *(undefined4 *)(*local_110 + 8) = 0x1002;
        *(undefined8 *)*local_110 = uVar71;
        *(undefined4 *)(local_110[3] + 8) = 8;
        *(code **)local_110[1] = opennl::nlCRSMatrixDestroy;
        *(code **)(local_110[1] + 8) = opennl::nlCRSMatrixMult;
        pvVar22 = (void *)Realloc((void *)0x0,uVar25,(int)uVar25,(char *)pcVar40,iVar61);
        *(void **)local_110[2] = pvVar22;
        memset(pvVar22,0,uVar25);
        uVar25 = (ulong)((int)uVar71 + 1) << 2;
        pvVar22 = (void *)Realloc((void *)0x0,uVar25,(int)uVar25,(char *)pcVar40,iVar61);
        *(void **)(local_110[2] + 8) = pvVar22;
        memset(pvVar22,0,uVar25);
        pvVar22 = (void *)Realloc((void *)0x0,uVar52 << 2,extraout_EDX_13,(char *)pcVar40,iVar61);
        *(void **)local_110[3] = pvVar22;
        memset(pvVar22,0,uVar52 << 2);
        pauVar33 = (undefined1 (*) [16])
                   Realloc((void *)0x0,0x24,extraout_EDX_14,(char *)pcVar40,iVar61);
        *(undefined1 (**) [16])local_110[4] = pauVar33;
        *(undefined4 *)pauVar33[2] = 0;
        *pauVar33 = (undefined1  [16])0x0;
        pauVar33[1] = (undefined1  [16])0x0;
        uVar25 = (ulong)*(uint *)*pauVar29;
        if (*(uint *)*pauVar29 == 0) {
          lVar44 = *(long *)(local_110[2] + 8);
          uVar27 = 0;
        }
        else {
          lVar44 = 0;
          do {
            pcVar40 = opennl::nlCoeffCompare;
            lVar37 = lVar44 + 1;
            puVar34 = (uint *)(lVar44 * 0x10 + *(long *)(pauVar29[2] + 8));
            qsort(*(void **)(puVar34 + 2),(ulong)*puVar34,0x10,opennl::nlCoeffCompare);
            uVar36 = *(uint *)*pauVar29;
            uVar25 = (ulong)uVar36;
            lVar44 = lVar37;
          } while ((uint)lVar37 < uVar36);
          lVar44 = *(long *)(local_110[2] + 8);
          if (uVar36 == 0) {
            uVar27 = 0;
          }
          else {
            lVar37 = 0;
            uVar25 = 0;
            puVar34 = *(uint **)(pauVar29[2] + 8);
            do {
              *(int *)(lVar44 + lVar37 * 4) = (int)uVar25;
              if (*puVar34 != 0) {
                lVar43 = *(long *)local_110[2];
                lVar10 = *(long *)local_110[3];
                pcVar40 = (code *)0x0;
                puVar35 = *(undefined4 **)(puVar34 + 2);
                uVar27 = uVar25;
                do {
                  puVar45 = (undefined8 *)(puVar35 + 2);
                  uVar4 = *puVar35;
                  uVar36 = (int)pcVar40 + 1;
                  pcVar40 = (code *)(ulong)uVar36;
                  uVar25 = (ulong)((int)uVar27 + 1);
                  puVar35 = puVar35 + 4;
                  *(undefined8 *)(lVar43 + uVar27 * 8) = *puVar45;
                  *(undefined4 *)(lVar10 + uVar27 * 4) = uVar4;
                  uVar27 = uVar25;
                } while (uVar36 < *puVar34);
              }
              uVar27 = (ulong)*(uint *)*pauVar29;
              lVar37 = lVar37 + 1;
              puVar34 = puVar34 + 4;
            } while ((uint)lVar37 < *(uint *)*pauVar29);
          }
        }
        puVar35 = *(undefined4 **)local_110[4];
        *(int *)(lVar44 + uVar27 * 4) = (int)uVar25;
        if (puVar35 != (undefined4 *)0x0) {
          *puVar35 = 0;
          puVar59 = puVar35 + 1;
          uVar25 = 0;
          uVar27 = uVar52 >> 3;
          uVar36 = 0;
          iVar61 = (int)uVar27;
          do {
            uVar50 = (uint)uVar27;
            if (uVar36 < uVar50) {
              pcVar40 = (code *)(lVar44 + uVar25 * 4);
              do {
                if (*(uint *)*pauVar29 <= (uint)uVar25) break;
                uVar25 = (ulong)((uint)uVar25 + 1);
                iVar58 = *(int *)pcVar40;
                pcVar40 = pcVar40 + 4;
                uVar36 = (uVar36 - iVar58) + *(int *)(lVar44 + uVar25 * 4);
                uVar52 = uVar25;
              } while (uVar36 < uVar50);
            }
            iVar58 = (int)uVar52;
            *puVar59 = (int)uVar25;
            puVar59 = puVar59 + 1;
            uVar27 = (ulong)(uVar50 + iVar61);
          } while (puVar35 + 8 != puVar59);
          puVar35[8] = *(undefined4 *)*pauVar29;
        }
        pvVar22 = *(void **)(pNVar21 + 0x28);
        if (pvVar22 != (void *)0x0) {
          (**(code **)((long)pvVar22 + 0x10))(pvVar22);
          Realloc(pvVar22,0,extraout_EDX_15,(char *)pcVar40,iVar58);
          uVar25 = extraout_RDX_04;
        }
        local_f8 = *(undefined1 (**) [16])(pNVar21 + 0x30);
        *(undefined1 (**) [16])(pNVar21 + 0x28) = local_110;
      }
      pcVar39 = (char *)(ulong)*(uint *)(pNVar21 + 0x74);
      pdVar62 = *(double **)(pNVar21 + 0x68);
      lVar44 = *(long *)(pNVar21 + 0x60);
      uVar36 = *(uint *)(pNVar21 + 0x20);
      if (*(uint *)(pNVar21 + 0x74) == 0) {
LAB_0011530f:
        plVar48 = *(long **)pNVar21;
      }
      else {
        uVar50 = 0;
        lVar37 = lVar44;
        do {
          dVar75 = *(double *)(pNVar21 + 0x88);
          uVar60 = *(uint *)(pNVar21 + 0x7c);
          uVar54 = *(uint *)(*local_110 + 4);
          uVar52 = (long)(int)uVar54 * 8;
          auVar83 = Realloc((void *)0x0,uVar52,(int)uVar25,pcVar39,(int)lVar44);
          pdVar26 = auVar83._0_8_;
          auVar83 = Realloc((void *)0x0,uVar52,auVar83._8_4_,pcVar39,(int)lVar44);
          __src = auVar83._0_8_;
          pvVar22 = (void *)Realloc((void *)0x0,uVar52,auVar83._8_4_,pcVar39,(int)lVar44);
          uVar25 = (ulong)uVar54;
          if ((int)uVar54 < 1) {
            (**(code **)(local_110[1] + 8))(local_110,lVar37,pdVar26);
            (**(code **)(local_f8[1] + 8))(local_f8,pdVar26,__src);
            memcpy(pvVar22,__src,uVar52);
            Realloc(pdVar26,0,extraout_EDX_08,pcVar39,(int)lVar44);
            Realloc(__src,0,extraout_EDX_09,pcVar39,(int)lVar44);
            Realloc(pvVar22,0,extraout_EDX_10,pcVar39,(int)lVar44);
            dVar72 = 0.0;
            uVar54 = 0;
            dVar75 = 0.0;
            uVar25 = extraout_RDX_02;
LAB_001151cf:
            dVar75 = SQRT(dVar75);
          }
          else {
            pdVar63 = (double *)(ulong)(uVar54 - 1);
            dVar72 = 0.0;
            pdVar28 = pdVar62;
            do {
              dVar74 = *pdVar28;
              pdVar28 = pdVar28 + 1;
              dVar72 = dVar72 + dVar74 * dVar74;
            } while (pdVar62 + uVar25 != pdVar28);
            dVar74 = dVar75 * dVar75 * dVar72;
            (**(code **)(local_110[1] + 8))(local_110,lVar37,pdVar26);
            uVar27 = 0;
            do {
              pdVar26[uVar27] = pdVar26[uVar27] - pdVar62[uVar27];
              uVar27 = uVar27 + 1;
            } while (uVar25 != uVar27);
            (**(code **)(local_f8[1] + 8))(local_f8,pdVar26,__src);
            memcpy(pvVar22,__src,uVar52);
            dVar73 = 0.0;
            pdVar28 = (double *)0x0;
            do {
              dVar73 = dVar73 + pdVar26[(long)pdVar28] *
                                *(double *)((long)pvVar22 + (long)pdVar28 * 8);
              bVar65 = pdVar28 != pdVar63;
              pdVar28 = (double *)((long)pdVar28 + 1);
            } while (bVar65);
            dVar75 = 0.0;
            pdVar28 = pdVar26;
            do {
              dVar2 = *pdVar28;
              pdVar28 = pdVar28 + 1;
              dVar75 = dVar75 + dVar2 * dVar2;
            } while (pdVar28 != pdVar26 + uVar25);
            if ((dVar75 <= dVar74) || (pdVar28 = (double *)(ulong)uVar60, uVar60 == 0)) {
              uVar54 = 0;
            }
            else {
              uVar41 = 1;
              do {
                uVar54 = uVar41;
                (**(code **)(local_110[1] + 8))(local_110,__src,pvVar22);
                uVar52 = 0;
                dVar75 = 0.0;
                do {
                  pdVar28 = __src + uVar52;
                  lVar43 = uVar52 * 8;
                  uVar52 = uVar52 + 1;
                  dVar75 = dVar75 + *pdVar28 * *(double *)((long)pvVar22 + lVar43);
                } while (uVar25 != uVar52);
                dVar75 = (double)((ulong)(dVar73 / dVar75) ^ __LC58);
                pdVar28 = (double *)0x0;
                do {
                  *(double *)(lVar37 + (long)pdVar28 * 8) =
                       __src[(long)pdVar28] * dVar75 + *(double *)(lVar37 + (long)pdVar28 * 8);
                  bVar65 = pdVar63 != pdVar28;
                  pdVar28 = (double *)((long)pdVar28 + 1);
                } while (bVar65);
                pdVar28 = (double *)0x0;
                do {
                  pdVar26[(long)pdVar28] =
                       *(double *)((long)pvVar22 + (long)pdVar28 * 8) * dVar75 +
                       pdVar26[(long)pdVar28];
                  bVar65 = pdVar63 != pdVar28;
                  pdVar28 = (double *)((long)pdVar28 + 1);
                } while (bVar65);
                (**(code **)(local_f8[1] + 8))(local_f8,pdVar26,pvVar22);
                dVar75 = _LC51 / dVar73;
                dVar73 = 0.0;
                pdVar28 = (double *)0x0;
                do {
                  dVar73 = dVar73 + pdVar26[(long)pdVar28] *
                                    *(double *)((long)pvVar22 + (long)pdVar28 * 8);
                  bVar65 = pdVar63 != pdVar28;
                  pdVar28 = (double *)((long)pdVar28 + 1);
                } while (bVar65);
                pdVar28 = __src;
                do {
                  pdVar53 = pdVar28 + 1;
                  *pdVar28 = *pdVar28 * dVar75 * dVar73;
                  pdVar28 = pdVar53;
                } while (__src + uVar25 != pdVar53);
                pdVar53 = (double *)0x0;
                do {
                  pdVar28 = pdVar53;
                  __src[(long)pdVar28] =
                       __src[(long)pdVar28] + *(double *)((long)pvVar22 + (long)pdVar28 * 8);
                  pdVar53 = (double *)((long)pdVar28 + 1);
                } while (pdVar63 != pdVar28);
                dVar75 = 0.0;
                pdVar53 = pdVar26;
                do {
                  dVar2 = *pdVar53;
                  pdVar53 = pdVar53 + 1;
                  dVar75 = dVar75 + dVar2 * dVar2;
                } while (pdVar53 != pdVar26 + uVar25);
              } while ((dVar74 < dVar75) &&
                      (pcVar39 = (char *)(ulong)uVar60, uVar41 = uVar54 + 1, uVar54 < uVar60));
            }
            Realloc(pdVar26,0,(int)pdVar28,pcVar39,(int)lVar44);
            Realloc(__src,0,extraout_EDX_06,pcVar39,(int)lVar44);
            Realloc(pvVar22,0,extraout_EDX_07,pcVar39,(int)lVar44);
            if (dVar72 < 0.0) {
              dVar72 = sqrt(dVar72);
              uVar25 = extraout_RDX_06;
            }
            else {
              dVar72 = SQRT(dVar72);
              uVar25 = extraout_RDX_01;
            }
            if (0.0 <= dVar75) goto LAB_001151cf;
            dVar75 = sqrt(dVar75);
            uVar25 = extraout_RDX_05;
          }
          if (dVar72 != 0.0) {
            dVar75 = dVar75 / dVar72;
          }
          uVar50 = uVar50 + 1;
          *(uint *)(pNVar21 + 0x98) = uVar54;
          *(double *)(pNVar21 + 0xa0) = dVar75;
          uVar60 = *(uint *)(pNVar21 + 0x74);
          pdVar62 = pdVar62 + uVar36;
          lVar37 = lVar37 + (ulong)uVar36 * 8;
        } while (uVar50 < uVar60);
        iVar61 = *(int *)(pNVar21 + 0x20);
        if (uVar60 == 0) goto LAB_0011530f;
        uVar36 = *(uint *)(pNVar21 + 0x70);
        lVar44 = 0;
        iVar58 = 0;
        if (uVar36 == 0) {
          do {
            lVar44 = lVar44 + 0x10;
          } while (lVar44 != (ulong)uVar60 << 4);
          goto LAB_0011530f;
        }
        plVar48 = *(long **)pNVar21;
        lVar37 = *(long *)(pNVar21 + 0x10);
        do {
          uVar25 = 0;
          do {
            if (*(char *)(lVar37 + uVar25) == '\0') {
              *(undefined8 *)
               (*(long *)((long)plVar48 + lVar44) +
               (ulong)(uint)((int)uVar25 * (int)((long *)((long)plVar48 + lVar44))[1])) =
                   *(undefined8 *)
                    (*(long *)(pNVar21 + 0x60) +
                    (ulong)(uint)(iVar58 + *(int *)(*(long *)(pNVar21 + 0x18) + uVar25 * 4)) * 8);
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar36);
          lVar44 = lVar44 + 0x10;
          iVar58 = iVar58 + iVar61;
        } while (lVar44 != (ulong)uVar60 << 4);
      }
      lVar44 = *plVar48;
      lVar37 = plVar48[1];
      uVar25 = 0;
      puVar45 = puVar56;
      do {
        pdVar62 = (double *)(lVar44 + uVar25);
        uVar36 = (int)lVar37 + (int)uVar25;
        puVar30 = puVar45 + 1;
        uVar25 = (ulong)((int)lVar37 + uVar36);
        *puVar45 = CONCAT44((float)*(double *)(lVar44 + (ulong)uVar36),(float)*pdVar62);
        puVar45 = puVar30;
      } while (puVar30 != puVar56 + uVar47);
      opennl::nlDeleteContext(pNVar21);
      pUVar49 = *(UniformGrid2 **)(param_1 + 0x28);
    }
  }
  else {
    (**(code **)param_2)
              (*(undefined8 *)(pUVar49 + 0x58),*(undefined8 *)(pUVar49 + 0x88),uVar47,
               *(undefined8 *)(pUVar49 + 0x40),*(undefined4 *)(pUVar49 + 0x4c));
    pUVar49 = *(UniformGrid2 **)(param_1 + 0x28);
  }
LAB_00113dee:
  Quality::computeBoundaryIntersection(this,pUVar49);
  pUVar49 = *(UniformGrid2 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  fVar77 = _LC19;
  fVar76 = _LC11;
  uVar36 = _LC37;
  uVar47 = *(uint *)(pUVar49 + 0x4c);
  if (uVar47 < 3) {
LAB_00113f91:
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  else {
    lVar44 = *(long *)(pUVar49 + 0x88);
    lVar37 = *(long *)(pUVar49 + 0x40);
    uVar60 = 0;
    uVar50 = 0;
    iVar61 = 0;
    do {
      lVar43 = 0;
      do {
        *(undefined8 *)(local_58 + lVar43 * 2) =
             *(undefined8 *)(lVar44 + (ulong)*(uint *)(lVar37 + lVar43 * 4) * 8);
        lVar43 = lVar43 + 1;
      } while (lVar43 != 3);
      uVar50 = uVar50 + 1;
      *(uint *)(param_1 + 0xbc) = uVar50;
      fVar67 = ((local_58[3] - local_58[1]) * (local_48 - local_58[0]) -
               (local_44 - local_58[1]) * (local_58[2] - local_58[0])) * fVar76;
      if ((float)((uint)fVar67 & uVar36) <= fVar77) {
        iVar61 = iVar61 + 1;
        *(int *)(param_1 + 0xc4) = iVar61;
      }
      else if (fVar67 < 0.0) {
        uVar60 = uVar60 + 1;
        *(uint *)(param_1 + 0xc0) = uVar60;
      }
      lVar37 = lVar37 + 0xc;
    } while (uVar50 < uVar47 / 3);
    if (uVar47 / 3 == iVar61 + uVar60) goto LAB_00113f91;
    if (uVar47 / 6 < uVar60) {
      *(uint *)(param_1 + 0xc0) = uVar47 / 3 - uVar60;
    }
  }
  uVar47 = *(uint *)(pUVar49 + 100);
  if ((param_1[0xb8] != '\0') || (*(long *)(param_1 + 0xc0) != 0)) {
    param_1[0xe0] = 1;
  }
LAB_00113b26:
  uVar36 = _LC6;
  if (param_2[0x2d] != (UniformGrid2)0x0) {
    puVar34 = *(uint **)(pUVar49 + 0x40);
    puVar6 = *(uint **)(pUVar49 + 0x88);
    fVar76 = (float)(puVar6 + (ulong)puVar34[2] * 2)[1];
    fVar77 = (float)puVar6[(ulong)puVar34[2] * 2];
    if (((((float)puVar6[(ulong)*puVar34 * 2] - fVar77) *
          ((float)(puVar6 + (ulong)puVar34[1] * 2)[1] - fVar76) -
         ((float)(puVar6 + (ulong)*puVar34 * 2)[1] - fVar76) *
         ((float)puVar6[(ulong)puVar34[1] * 2] - fVar77)) * _LC11 < 0.0) && (uVar3 != 0)) {
      puVar34 = puVar6;
      do {
        puVar20 = puVar34 + 2;
        *puVar34 = *puVar34 ^ uVar36;
        puVar34 = puVar20;
      } while (puVar20 != puVar6 + (ulong)uVar3 * 2);
    }
  }
  ArrayBase::resize((int)param_1 + 0xa0,SUB41(uVar47,0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    memcpy(*(void **)(param_1 + 0xa0),*(void **)(*(long *)(param_1 + 0x28) + 0x88),
           (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 100) << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::param::ChartGroup::createMesh() */

Mesh * __thiscall xatlas::internal::param::ChartGroup::createMesh(ChartGroup *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  Mesh *this_00;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar9;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  long extraout_RDX;
  long extraout_RDX_00;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  undefined8 in_R8;
  undefined8 uVar17;
  ulong uVar18;
  void *pvVar19;
  long lVar20;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  uint local_70;
  void *local_68;
  undefined8 local_60;
  uint local_58;
  uint local_4c [3];
  long local_40 [2];
  
  lVar13 = *(long *)(this + 0x10);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  pcVar7 = *(char **)(lVar13 + 0x50);
  if (*(uint *)(this + 0x30) < *(uint *)(pcVar7 + (ulong)*(uint *)(this + 0x18) * 4)) {
    ArrayBase::setArrayCapacity((int)this + 0x20);
    lVar13 = *(long *)(this + 0x10);
    lVar20 = (ulong)*(uint *)(this + 0x18) << 2;
  }
  else {
    lVar20 = (ulong)*(uint *)(this + 0x18) * 4;
  }
  uVar11 = (ulong)*(uint *)(this + 0x2c);
  uVar10 = *(uint *)(*(long *)(lVar13 + 0x20) + lVar20);
  uVar18 = (ulong)uVar10;
  if (uVar10 != 0xffffffff) {
    do {
      while( true ) {
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar10;
        pvVar5 = *(void **)(this + 0x20);
        auVar21._8_8_ = lVar20;
        auVar21._0_8_ = pvVar5;
        local_98 = (undefined4)uVar18;
        *(uint *)(this + 0x2c) = uVar10;
        if (*(uint *)(this + 0x30) < uVar10) break;
LAB_001159bb:
        lVar20 = auVar21._8_8_;
        if (auVar21._0_8_ != 0) {
          memcpy((void *)(auVar21._0_8_ + (ulong)(((int)uVar11 + -1) * *(uint *)(this + 0x28))),
                 &local_98,(ulong)*(uint *)(this + 0x28));
          uVar11 = (ulong)*(uint *)(this + 0x2c);
          lVar20 = extraout_RDX;
        }
        uVar10 = *(uint *)(*(long *)(lVar13 + 0x38) + uVar18 * 4);
        uVar18 = (ulong)uVar10;
        if (uVar10 == 0xffffffff) goto LAB_00115a3e;
      }
      if ((*(uint *)(this + 0x30) == 0) || (uVar10 = (uVar10 >> 2) + uVar10, uVar10 != 0)) {
        auVar21 = Realloc(pvVar5,(ulong)(uVar10 * *(int *)(this + 0x28)),(int)lVar20,pcVar7,
                          (int)in_R8);
        *(uint *)(this + 0x30) = uVar10;
        uVar11 = (ulong)*(uint *)(this + 0x2c);
        *(long *)(this + 0x20) = auVar21._0_8_;
        goto LAB_001159bb;
      }
      if (pvVar5 != (void *)0x0) {
        Realloc(pvVar5,0,(int)lVar20,pcVar7,(int)in_R8);
        *(undefined8 *)(this + 0x20) = 0;
        uVar11 = (ulong)*(uint *)(this + 0x2c);
        lVar20 = extraout_RDX_00;
      }
      lVar1 = *(long *)(lVar13 + 0x38);
      *(undefined4 *)(this + 0x30) = 0;
      uVar10 = *(uint *)(lVar1 + uVar18 * 4);
      uVar18 = (ulong)uVar10;
    } while (uVar10 != 0xffffffff);
  }
LAB_00115a3e:
  uVar10 = (uint)uVar11;
  uVar12 = uVar10 * 3;
  if (*(uint *)(*(long *)(this + 8) + 100) < uVar10 * 3) {
    uVar12 = *(uint *)(*(long *)(this + 8) + 100);
  }
  this_00 = (Mesh *)(*(code *)s_realloc)(0,0x168);
  uVar17 = 0xffffffff;
  uVar6 = (uint)(*(float **)(this + 8))[1] & 2;
  pcVar7 = (char *)(ulong)uVar6;
  Mesh::Mesh(this_00,**(float **)(this + 8),uVar12,uVar10,uVar6,0xffffffff);
  iVar16 = (int)uVar17;
  local_98 = 4;
  local_90 = 0;
  local_78 = _LC18;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = _LC18;
  local_58 = 0;
  local_88 = (undefined1  [16])0x0;
  local_94 = uVar12;
  if (uVar10 != 0) {
    lVar20 = 0;
    pvVar19 = (void *)0x0;
    lVar13 = *(long *)(*(long *)(this + 8) + 0x40);
    do {
      uVar12 = *(int *)(*(long *)(this + 0x20) + lVar20) * 3;
      uVar10 = uVar12 + 3;
LAB_00115b34:
      do {
        uVar8 = local_94;
        uVar6 = *(uint *)(lVar13 + (ulong)uVar12 * 4);
        local_ac = uVar6;
        if (pvVar19 == (void *)0x0) {
          uVar2 = nextPowerOfTwo(local_94);
          uVar3 = (uint)(long)((double)uVar8 * __LC34);
          iVar16 = extraout_EDX_05;
          if (uVar2 < uVar3) {
            uVar2 = nextPowerOfTwo(uVar3);
            iVar16 = extraout_EDX_06;
          }
          pcVar7 = (char *)(ulong)uVar2;
          uVar18 = (long)pcVar7 * 4;
          local_90 = uVar2;
          pvVar5 = (void *)Realloc((void *)0x0,uVar18,iVar16,pcVar7,(int)uVar17);
          local_88._0_8_ = pvVar5;
          if (uVar2 != 0) {
            memset(pvVar5,0xff,uVar18);
          }
          if (local_70 < uVar8) {
            ArrayBase::setArrayCapacity((int)local_88 + 8);
            uVar8 = local_94;
          }
          if (local_58 < uVar8) {
            ArrayBase::setArrayCapacity((uint)&local_68);
            puVar14 = (uint *)(local_88._0_8_ + (ulong)(local_90 - 1 & uVar6) * 4);
            pvVar19 = (void *)local_88._0_8_;
          }
          else {
            puVar14 = (uint *)(local_88._0_8_ + (ulong)(local_90 - 1 & uVar6) * 4);
            pvVar19 = (void *)local_88._0_8_;
          }
        }
        else {
          puVar14 = (uint *)((long)pvVar19 + (ulong)(local_90 - 1 & uVar6) * 4);
          for (uVar8 = *puVar14; uVar8 != 0xffffffff;
              uVar8 = *(uint *)((long)local_68 + (ulong)uVar8 * 4)) {
            if (uVar6 == *(uint *)(local_88._8_8_ + (ulong)uVar8 * 4)) {
              uVar12 = uVar12 + 1;
              if (uVar10 == uVar12) goto LAB_00115b8b;
              goto LAB_00115b34;
            }
          }
        }
        uVar3 = local_58;
        pvVar5 = local_68;
        iVar16 = local_78._4_4_;
        uVar8 = local_78._4_4_ + 1;
        local_78 = CONCAT44(uVar8,(int)local_78);
        pvVar4 = (void *)local_88._8_8_;
        if (local_70 < uVar8) {
          if ((local_70 == 0) || (uVar8 = uVar8 + (uVar8 >> 2), uVar8 != 0)) {
            pvVar4 = (void *)Realloc((void *)local_88._8_8_,(ulong)(uVar8 * (int)local_78),uVar8,
                                     pcVar7,(int)uVar17);
            local_88._8_8_ = pvVar4;
            local_70 = uVar8;
            goto LAB_00115ce8;
          }
          if ((void *)local_88._8_8_ == (void *)0x0) {
            local_70 = 0;
          }
          else {
            Realloc((void *)local_88._8_8_,0,0,pcVar7,(int)uVar17);
            local_88._8_8_ = 0;
            local_70 = 0;
          }
        }
        else {
LAB_00115ce8:
          if (pvVar4 != (void *)0x0) {
            memcpy((void *)((long)pvVar4 + (ulong)(uint)(iVar16 * (int)local_78)),&local_ac,
                   local_78 & 0xffffffff);
          }
        }
        uVar2 = local_60._4_4_;
        uVar8 = local_60._4_4_ + 1;
        local_60 = CONCAT44(uVar8,(int)local_60);
        if (uVar3 < uVar8) {
          if ((uVar3 == 0) || (uVar8 = uVar8 + (uVar8 >> 2), uVar8 != 0)) {
            pvVar5 = (void *)Realloc(pvVar5,(ulong)(uVar8 * (int)local_60),uVar8,pcVar7,(int)uVar17)
            ;
            local_68 = pvVar5;
            local_58 = uVar8;
            goto LAB_00115d3b;
          }
          if (pvVar5 == (void *)0x0) {
            local_58 = 0;
          }
          else {
            Realloc(pvVar5,0,0,pcVar7,(int)uVar17);
            local_68 = (void *)0x0;
            local_58 = 0;
          }
        }
        else {
LAB_00115d3b:
          if (puVar14 != (uint *)0x0 && pvVar5 != (void *)0x0) {
            memcpy((void *)((ulong)(uVar2 * (int)local_60) + (long)pvVar5),puVar14,
                   local_60 & 0xffffffff);
          }
        }
        lVar13 = *(long *)(this + 8);
        *puVar14 = uVar2;
        local_a0 = 0;
        local_a8 = 0;
        if ((*(byte *)(lVar13 + 4) & 2) != 0) {
          pcVar7 = *(char **)(lVar13 + 0x70);
          local_a8 = *(undefined8 *)(pcVar7 + (ulong)uVar6 * 0xc);
          local_a0 = *(undefined4 *)(pcVar7 + (ulong)uVar6 * 0xc + 8);
        }
        ArrayBase::push_back((uchar *)(this_00 + 0x58));
        if (((byte)this_00[4] & 2) != 0) {
          ArrayBase::push_back((uchar *)(this_00 + 0x70));
        }
        uVar12 = uVar12 + 1;
        ArrayBase::push_back((uchar *)(this_00 + 0x88));
        lVar13 = *(long *)(*(long *)(this + 8) + 0x40);
      } while (uVar10 != uVar12);
LAB_00115b8b:
      pvVar4 = local_68;
      lVar20 = lVar20 + 4;
    } while (uVar11 * 4 != lVar20);
    lVar20 = 0;
    pvVar5 = (void *)local_88._8_8_;
    uVar10 = local_90 - 1;
    do {
      uVar18 = (ulong)(uint)(*(int *)(*(long *)(this + 0x20) + lVar20) * 3);
      puVar14 = local_4c;
      do {
        while( true ) {
          uVar12 = *(uint *)(lVar13 + uVar18 * 4);
          if (pvVar19 == (void *)0x0) break;
          uVar6 = *(uint *)((long)pvVar19 + (ulong)(uVar12 & uVar10) * 4);
          while ((uVar6 != 0xffffffff && (uVar12 != *(uint *)((long)pvVar5 + (ulong)uVar6 * 4)))) {
            uVar6 = *(uint *)((long)pvVar4 + (ulong)uVar6 * 4);
          }
          *puVar14 = uVar6;
          puVar14 = puVar14 + 1;
          uVar18 = (ulong)((int)uVar18 + 1);
          if ((uint *)local_40 == puVar14) goto LAB_00115c47;
        }
        puVar15 = puVar14 + 1;
        uVar18 = (ulong)((int)uVar18 + 1);
        *puVar14 = 0xffffffff;
        puVar14 = puVar15;
      } while ((uint *)local_40 != puVar15);
LAB_00115c47:
      lVar20 = lVar20 + 4;
      pcVar7 = (char *)0xffffffff;
      puVar14 = (uint *)local_40;
      Mesh::addFace((uint *)this_00,SUB81(local_4c,0),0);
      iVar16 = (int)puVar14;
      if (uVar11 * 4 == lVar20) goto LAB_00115f16;
      lVar13 = *(long *)(*(long *)(this + 8) + 0x40);
    } while( true );
  }
  pvVar4 = (void *)0x0;
  pvVar5 = (void *)0x0;
  pvVar19 = (void *)0x0;
LAB_00115f16:
  if (_LC19 < *(float *)this_00) {
    Mesh::createColocalsBVH(this_00);
  }
  else {
    Mesh::createColocalsHash();
  }
  Mesh::createBoundaries(this_00);
  iVar9 = extraout_EDX;
  if (*(void **)(this_00 + 0x130) != (void *)0x0) {
    Realloc(*(void **)(this_00 + 0x130),0,extraout_EDX,pcVar7,iVar16);
    *(undefined8 *)(this_00 + 0x130) = 0;
    iVar9 = extraout_EDX_00;
  }
  *(undefined4 *)(this_00 + 0x144) = 0;
  Realloc(*(void **)(this_00 + 0x138),0,iVar9,pcVar7,iVar16);
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined8 *)(this_00 + 0x144) = 0;
  *(undefined4 *)(this_00 + 0x15c) = 0;
  Realloc(*(void **)(this_00 + 0x150),0,extraout_EDX_01,pcVar7,iVar16);
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined8 *)(this_00 + 0x15c) = 0;
  iVar9 = extraout_EDX_02;
  if (pvVar19 != (void *)0x0) {
    Realloc(pvVar19,0,extraout_EDX_02,pcVar7,iVar16);
    iVar9 = extraout_EDX_03;
  }
  Realloc(pvVar4,0,iVar9,pcVar7,iVar16);
  Realloc(pvVar5,0,extraout_EDX_04,pcVar7,iVar16);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::param::ChartGroup::computeCharts(xatlas::internal::TaskScheduler*,
   xatlas::ChartOptions const&, xatlas::internal::Progress*, xatlas::internal::segment::Atlas&,
   xatlas::internal::ThreadLocal<xatlas::internal::UniformGrid2>*,
   xatlas::internal::ThreadLocal<xatlas::internal::param::ChartCtorBuffers>*,
   xatlas::internal::ThreadLocal<xatlas::internal::param::PiecewiseParam>*) */

void __thiscall
xatlas::internal::param::ChartGroup::computeCharts
          (ChartGroup *this,TaskScheduler *param_1,ChartOptions *param_2,Progress *param_3,
          Atlas *param_4,ThreadLocal *param_5,ThreadLocal *param_6,ThreadLocal *param_7)

{
  uint *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Progress *pPVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  Mesh *this_00;
  long lVar13;
  long *plVar14;
  undefined4 uVar15;
  Progress *pPVar16;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  uint uVar17;
  int extraout_EDX_20;
  int extraout_EDX_21;
  int extraout_EDX_22;
  int extraout_EDX_23;
  int extraout_EDX_24;
  int extraout_EDX_25;
  int extraout_EDX_26;
  ulong extraout_RDX;
  long *extraout_RDX_00;
  long *extraout_RDX_01;
  long *extraout_RDX_02;
  long *extraout_RDX_03;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined1 uVar25;
  ulong uVar27;
  Atlas *pAVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long in_FS_OFFSET;
  bool bVar31;
  float fVar32;
  uint local_bc;
  code *local_b8;
  long *local_b0;
  long local_a8 [4];
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  Progress *local_68;
  ThreadLocal *local_60;
  ThreadLocal *local_58;
  ChartOptions *local_50;
  ThreadLocal *local_48;
  long local_40;
  int iVar26;
  
  uVar27 = (ulong)*(uint *)(this + 0x44);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pPVar16 = param_3;
  pAVar28 = param_4;
  if (*(uint *)(this + 0x44) != 0) {
    lVar19 = 0;
    do {
      iVar26 = (int)uVar27;
      lVar13 = lVar19 * 8;
      lVar4 = *(long *)(*(long *)(this + 0x38) + lVar19 * 8);
      lVar5 = *(long *)(lVar4 + 0x28);
      if (lVar5 != 0) {
        if (*(void **)(lVar5 + 0x130) != (void *)0x0) {
          Realloc(*(void **)(lVar5 + 0x130),0,iVar26,(char *)pPVar16,(int)pAVar28);
          iVar26 = extraout_EDX;
        }
        Realloc(*(void **)(lVar5 + 0x150),0,iVar26,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0x138),0,extraout_EDX_00,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0x108),0,extraout_EDX_01,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0xf0),0,extraout_EDX_02,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0xd8),0,extraout_EDX_03,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0xb8),0,extraout_EDX_04,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0xa0),0,extraout_EDX_05,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0x88),0,extraout_EDX_06,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0x70),0,extraout_EDX_07,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0x58),0,extraout_EDX_08,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0x40),0,extraout_EDX_09,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0x28),0,extraout_EDX_10,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar5 + 0x10),0,extraout_EDX_11,(char *)pPVar16,(int)pAVar28);
        Realloc(*(void **)(lVar4 + 0x28),0,extraout_EDX_12,(char *)pPVar16,(int)pAVar28);
        *(undefined8 *)(lVar4 + 0x28) = 0;
        iVar26 = extraout_EDX_13;
      }
      lVar19 = lVar19 + 1;
      Realloc(*(void **)(lVar4 + 0xa0),0,iVar26,(char *)pPVar16,(int)pAVar28);
      Realloc(*(void **)(lVar4 + 0x88),0,extraout_EDX_14,(char *)pPVar16,(int)pAVar28);
      Realloc(*(void **)(lVar4 + 0x70),0,extraout_EDX_15,(char *)pPVar16,(int)pAVar28);
      Realloc(*(void **)(lVar4 + 0x58),0,extraout_EDX_16,(char *)pPVar16,(int)pAVar28);
      Realloc(*(void **)(lVar4 + 0x40),0,extraout_EDX_17,(char *)pPVar16,(int)pAVar28);
      Realloc(*(void **)(*(long *)(this + 0x38) + lVar13),0,extraout_EDX_18,(char *)pPVar16,
              (int)pAVar28);
      uVar27 = extraout_RDX;
    } while ((uint)lVar19 < *(uint *)(this + 0x44));
  }
  this_00 = (Mesh *)createMesh(this);
  uVar7 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_4 = *(undefined8 *)param_2;
  *(undefined8 *)(param_4 + 8) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_4 + 0x18) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x1e);
  uVar8 = *(undefined8 *)(param_2 + 0x26);
  *(Mesh **)(param_4 + 0x30) = this_00;
  *(undefined8 *)(param_4 + 0x1e) = uVar7;
  *(undefined8 *)(param_4 + 0x26) = uVar8;
  segment::AtlasData::compute((AtlasData *)param_4);
  if (param_4[0x2c] != (Atlas)0x0) {
    segment::OriginalUvCharts::compute((OriginalUvCharts *)(param_4 + 0xd0));
  }
  segment::PlanarCharts::compute((PlanarCharts *)(param_4 + 0x138));
  segment::ClusteredCharts::compute((ClusteredCharts *)(param_4 + 0x1e8));
  LOCK();
  *(int *)(param_3 + 0x18) =
       *(int *)(param_3 + 0x18) +
       *(int *)(*(long *)(*(long *)(this + 0x10) + 0x50) + (ulong)*(uint *)(this + 0x18) * 4);
  UNLOCK();
  if (*(long *)(param_3 + 8) != 0) {
    fVar32 = ((float)*(uint *)(param_3 + 0x18) / (float)*(uint *)(param_3 + 0x1c)) * __LC35;
    if ((float)((uint)fVar32 & _LC37) < _LC36) {
      fVar32 = (float)((uint)((float)(int)fVar32 +
                             (float)(-(uint)((float)(int)fVar32 < fVar32) & _LC4)) |
                      ~_LC37 & (uint)fVar32);
    }
    pPVar16 = param_3 + 0x20;
    uVar18 = (uint)(long)fVar32;
    if (uVar18 != *(uint *)(param_3 + 0x20)) {
      uVar11 = *(uint *)(param_3 + 0x20);
      do {
        if (uVar18 <= uVar11) break;
        LOCK();
        uVar17 = *(uint *)pPVar16;
        bVar31 = uVar11 == uVar17;
        if (bVar31) {
          *(uint *)pPVar16 = uVar18;
          uVar17 = uVar11;
        }
        uVar11 = uVar17;
        UNLOCK();
      } while (!bVar31);
      cVar10 = (**(code **)(param_3 + 8))
                         (*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x20),
                          *(undefined8 *)(param_3 + 0x10));
      if (cVar10 == '\0') {
        LOCK();
        *param_3 = (Progress)0x1;
        UNLOCK();
      }
    }
  }
  uVar18 = *(uint *)(this_00 + 0x4c);
  Mesh::~Mesh(this_00);
  Realloc(this_00,0,extraout_EDX_19,(char *)pPVar16,(int)pAVar28);
  if (*param_3 == (Progress)0x0) {
    local_a8[0] = 0;
    uVar11 = *(int *)(param_4 + 0x1ac) + *(int *)(param_4 + 0xe4) + *(int *)(param_4 + 0x23c);
    local_a8[1] = 4;
    local_a8[2] = 0;
    ArrayBase::resize((uint)(ArrayBase *)local_a8,(bool)((char)(uVar18 / 3) + SUB41(uVar11,0)));
    if (uVar11 != 0) {
      uVar27 = 0;
      uVar21 = 0;
      do {
        if ((uint)uVar27 < *(uint *)(param_4 + 0xe4)) {
          puVar1 = (uint *)(*(long *)(param_4 + 0xd8) + uVar27 * 8);
          uVar18 = puVar1[1];
          pPVar16 = (Progress *)(*(long *)(param_4 + 0x108) + (ulong)*puVar1 * 4);
        }
        else {
          uVar18 = (uint)uVar27 - *(uint *)(param_4 + 0xe4);
          if (uVar18 < *(uint *)(param_4 + 0x1ac)) {
            puVar1 = (uint *)(*(long *)(param_4 + 0x1a0) + (ulong)uVar18 * 8);
            uVar18 = puVar1[1];
            pPVar16 = (Progress *)(*(long *)(param_4 + 0x1b8) + (ulong)*puVar1 * 4);
          }
          else {
            lVar19 = *(long *)(*(long *)(param_4 + 0x230) +
                              (ulong)(uVar18 - *(uint *)(param_4 + 0x1ac)) * 8);
            pPVar16 = *(Progress **)(lVar19 + 0x48);
            uVar18 = *(uint *)(lVar19 + 0x54);
          }
        }
        uVar12 = (int)uVar21 + 1;
        *(uint *)(local_a8[0] + uVar21 * 4) = uVar18;
        uVar17 = uVar12;
        if (uVar18 != 0) {
          lVar19 = *(long *)(this + 0x20);
          uVar17 = uVar12 + uVar18;
          do {
            uVar18 = *(uint *)pPVar16;
            pPVar16 = pPVar16 + 4;
            uVar18 = *(uint *)(lVar19 + (ulong)uVar18 * 4);
            pAVar28 = (Atlas *)(ulong)uVar18;
            uVar21 = (ulong)uVar12;
            uVar12 = uVar12 + 1;
            *(uint *)(local_a8[0] + uVar21 * 4) = uVar18;
          } while (uVar17 != uVar12);
        }
        uVar21 = (ulong)uVar17;
        uVar27 = uVar27 + 1;
      } while (uVar11 != uVar27);
    }
    local_58 = param_6;
    local_68 = param_3;
    local_60 = param_5;
    local_50 = param_2;
    local_48 = param_7;
    local_bc = TaskScheduler::createTaskGroup(param_1,(uint)&local_68);
    local_88 = 0;
    local_80 = 0x50;
    local_78 = 0;
    ArrayBase::resize((uint)(ArrayBase *)&local_88,SUB41(uVar11,0));
    pPVar9 = _LC32;
    uVar27 = (ulong)local_80._4_4_;
    if (local_80._4_4_ != 0) {
      lVar19 = local_88;
      do {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        lVar13 = lVar19 + 0x50;
        *(Progress **)(lVar19 + 0x18) = pPVar9;
        *(undefined4 *)(lVar19 + 0x20) = 0;
        *(undefined8 *)(lVar19 + 0x38) = 0;
        *(undefined4 *)(lVar19 + 0x40) = 0;
        lVar19 = lVar13;
        pPVar16 = pPVar9;
      } while (uVar27 * 0x50 + local_88 != lVar13);
    }
    if (uVar11 == 0) {
      TaskScheduler::wait(*(TaskScheduler **)param_1,(TaskGroupHandle *)&local_bc);
      ArrayBase::resize((int)this + 0x38,false);
      plVar14 = extraout_RDX_03;
    }
    else {
      uVar27 = (ulong)uVar11;
      uVar18 = 0;
      uVar21 = 0;
      do {
        uVar11 = (uint)uVar21;
        local_b0 = (long *)(uVar21 * 0x50 + local_88);
        if (uVar11 < *(uint *)(param_4 + 0xe4)) {
          lVar19 = *(long *)(param_4 + 0xf0) + uVar21 * 0x24;
          uVar15 = 0;
        }
        else {
          uVar17 = uVar11 - *(uint *)(param_4 + 0xe4);
          if (uVar17 < *(uint *)(param_4 + 0x1ac)) {
            lVar19 = *(long *)(param_4 + 0x1d0) + (ulong)uVar17 * 0x24;
            uVar15 = 1;
          }
          else {
            uVar15 = 2;
            lVar19 = *(long *)(*(long *)(param_4 + 0x230) +
                              (ulong)(uVar17 - *(uint *)(param_4 + 0x1ac)) * 8) + 4;
          }
        }
        uVar3 = *(undefined4 *)this;
        *(undefined4 *)(local_b0 + 5) = uVar15;
        *local_b0 = lVar19;
        uVar17 = uVar18 + 1;
        local_b0[1] = 0;
        local_b0[9] = CONCAT44(uVar11,uVar3);
        iVar26 = *(int *)(local_a8[0] + (ulong)uVar18 * 4);
        lVar19 = *(long *)(this + 8);
        uVar18 = uVar17 + iVar26;
        *(int *)(local_b0 + 8) = iVar26;
        pPVar16 = (Progress *)0x1;
        local_b0[6] = lVar19;
        local_b0[7] = local_a8[0] + (ulong)uVar17 * 4;
        local_b8 = runCreateAndParameterizeChartTask;
        lVar19 = *(long *)param_1 + (ulong)local_bc * 0x38;
        do {
          LOCK();
          cVar10 = *(char *)(lVar19 + 0x24);
          *(char *)(lVar19 + 0x24) = '\x01';
          UNLOCK();
        } while (cVar10 != '\0');
        ArrayBase::push_back((uchar *)(lVar19 + 8));
        *(undefined1 *)(lVar19 + 0x24) = 0;
        LOCK();
        *(int *)(lVar19 + 0x28) = *(int *)(lVar19 + 0x28) + 1;
        UNLOCK();
        lVar19 = 0;
        if (*(int *)(param_1 + 0x14) != 0) {
          do {
            LOCK();
            *(undefined1 *)(*(long *)(param_1 + 8) + 0x60 + lVar19 * 0x68) = 1;
            UNLOCK();
            lVar19 = lVar19 + 1;
            std::condition_variable::notify_one();
          } while ((uint)lVar19 < *(uint *)(param_1 + 0x14));
        }
        uVar21 = uVar21 + 1;
      } while (uVar27 != uVar21);
      TaskScheduler::wait(*(TaskScheduler **)param_1,(TaskGroupHandle *)&local_bc);
      lVar19 = local_88;
      iVar26 = 0;
      plVar23 = (long *)(local_88 + 8);
      plVar2 = plVar23 + uVar27 * 10;
      plVar14 = plVar23;
      do {
        while (*(char *)(*plVar14 + 0xe0) != '\0') {
          iVar26 = iVar26 + *(int *)((long)plVar14 + 0x14);
          uVar25 = (undefined1)iVar26;
          plVar14 = plVar14 + 10;
          if (plVar14 == plVar2) goto LAB_001168a4;
        }
        plVar14 = plVar14 + 10;
        iVar26 = iVar26 + 1;
        uVar25 = (undefined1)iVar26;
      } while (plVar14 != plVar2);
LAB_001168a4:
      ArrayBase::resize((int)this + 0x38,(bool)uVar25);
      plVar14 = extraout_RDX_00;
      plVar24 = (long *)0x0;
      do {
        while( true ) {
          iVar26 = (int)plVar14;
          pvVar6 = (void *)*plVar23;
          if (*(char *)((long)pvVar6 + 0xe0) == '\0') break;
          if (*(Mesh **)((long)pvVar6 + 0x28) != (Mesh *)0x0) {
            Mesh::~Mesh(*(Mesh **)((long)pvVar6 + 0x28));
            Realloc(*(void **)((long)pvVar6 + 0x28),0,extraout_EDX_20,(char *)pPVar16,(int)pAVar28);
            *(undefined8 *)((long)pvVar6 + 0x28) = 0;
            iVar26 = extraout_EDX_21;
          }
          plVar23 = plVar23 + 10;
          Realloc(*(void **)((long)pvVar6 + 0xa0),0,iVar26,(char *)pPVar16,(int)pAVar28);
          Realloc(*(void **)((long)pvVar6 + 0x88),0,extraout_EDX_22,(char *)pPVar16,(int)pAVar28);
          Realloc(*(void **)((long)pvVar6 + 0x70),0,extraout_EDX_23,(char *)pPVar16,(int)pAVar28);
          Realloc(*(void **)((long)pvVar6 + 0x58),0,extraout_EDX_24,(char *)pPVar16,(int)pAVar28);
          Realloc(*(void **)((long)pvVar6 + 0x40),0,extraout_EDX_25,(char *)pPVar16,(int)pAVar28);
          Realloc(pvVar6,0,extraout_EDX_26,(char *)pPVar16,(int)pAVar28);
          plVar14 = extraout_RDX_01;
          if (plVar2 == plVar23) goto LAB_00116960;
        }
        plVar23 = plVar23 + 10;
        plVar22 = (long *)(ulong)((int)plVar24 + 1);
        *(void **)(*(long *)(this + 0x38) + (long)plVar24 * 8) = pvVar6;
        plVar14 = plVar24;
        plVar24 = plVar22;
      } while (plVar2 != plVar23);
LAB_00116960:
      puVar29 = (undefined8 *)(lVar19 + 0x10);
      puVar30 = puVar29 + uVar27 * 10;
      do {
        iVar26 = *(int *)((long)puVar29 + 0xc);
        if (iVar26 != 0) {
          lVar19 = *(long *)(this + 0x38);
          plVar14 = (long *)*puVar29;
          iVar20 = (int)plVar24;
          plVar23 = plVar24;
          do {
            pPVar16 = (Progress *)*plVar14;
            uVar18 = (int)plVar23 + 1;
            plVar24 = (long *)(ulong)uVar18;
            plVar14 = plVar14 + 1;
            *(Progress **)(lVar19 + (long)plVar23 * 8) = pPVar16;
            plVar23 = plVar24;
          } while (uVar18 != iVar26 + iVar20);
        }
        puVar29 = puVar29 + 10;
      } while (puVar29 != puVar30);
      uVar27 = local_80 >> 0x20;
    }
    if ((int)uVar27 != 0) {
      lVar13 = uVar27 * 0x50 + local_88;
      lVar19 = local_88;
      do {
        puVar29 = (undefined8 *)(lVar19 + 0x10);
        lVar19 = lVar19 + 0x50;
        Realloc((void *)*puVar29,0,(int)plVar14,(char *)pPVar16,(int)pAVar28);
        plVar14 = extraout_RDX_02;
      } while (lVar19 != lVar13);
    }
    ArrayBase::~ArrayBase((ArrayBase *)&local_88);
    ArrayBase::~ArrayBase((ArrayBase *)local_a8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* xatlas::internal::param::runChartGroupComputeChartsTask(void*, void*) */

void xatlas::internal::param::runChartGroupComputeChartsTask(void *param_1,void *param_2)

{
  uint *in_FS_OFFSET;
  
  if (**(char **)((long)param_1 + 0x10) != '\0') {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  ChartGroup::computeCharts
            ((ChartGroup *)param_2,*(TaskScheduler **)((long)param_1 + 0x18),
             *(ChartOptions **)((long)param_1 + 8),*(Progress **)((long)param_1 + 0x10),
             (Atlas *)((ulong)*in_FS_OFFSET * 0x380 + **param_1),
             *(ThreadLocal **)((long)param_1 + 0x20),*(ThreadLocal **)((long)param_1 + 0x28),
             *(ThreadLocal **)((long)param_1 + 0x30));
  return;
}



/* xatlas::internal::param::Atlas::~Atlas() */

void __thiscall xatlas::internal::param::Atlas::~Atlas(Atlas *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char *in_RCX;
  int extraout_EDX;
  int extraout_EDX_00;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char *local_40;
  
  uVar7 = (ulong)*(uint *)(this + 0x3c);
  if (*(uint *)(this + 0x3c) != 0) {
    local_40 = (char *)0x0;
    lVar5 = *(long *)(this + 0x30);
    do {
      lVar9 = 0;
      lVar3 = (long)local_40 * 0x18;
      plVar4 = (long *)(lVar3 + lVar5);
      if (*(int *)((long)plVar4 + 0xc) != 0) {
        do {
          lVar5 = *(long *)(*plVar4 + lVar9 * 8);
          lVar6 = *(long *)(lVar5 + 0x38);
          if (*(int *)(lVar5 + 0x44) != 0) {
            lVar8 = 0;
            do {
              while( true ) {
                lVar6 = *(long *)(lVar6 + lVar8 * 8);
                lVar2 = *(long *)(lVar6 + 0x28);
                if (lVar2 != 0) {
                  if (*(long *)(lVar2 + 0x130) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)(*(long *)(lVar2 + 0x130),0);
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0x150) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0x138) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0x108) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0xf0) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0xd8) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0xb8) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0xa0) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0x88) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0x70) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0x58) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0x40) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0x28) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar2 + 0x10) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar6 + 0x28) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  *(undefined8 *)(lVar6 + 0x28) = 0;
                }
                if (*(long *)(lVar6 + 0xa0) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                if (*(long *)(lVar6 + 0x88) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                if (*(long *)(lVar6 + 0x70) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                if (*(long *)(lVar6 + 0x58) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                if (*(long *)(lVar6 + 0x40) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                lVar6 = *(long *)(lVar5 + 0x38);
                lVar2 = *(long *)(lVar6 + lVar8 * 8);
                if (lVar2 != 0) break;
LAB_00116c56:
                lVar8 = lVar8 + 1;
                if (*(uint *)(lVar5 + 0x44) <= (uint)lVar8) goto LAB_00116f37;
              }
              if (s_free == (undefined *)0x0) {
                (*(code *)s_realloc)(lVar2);
                lVar6 = *(long *)(lVar5 + 0x38);
                goto LAB_00116c56;
              }
              lVar8 = lVar8 + 1;
              (*(code *)s_free)(lVar2);
              lVar6 = *(long *)(lVar5 + 0x38);
            } while ((uint)lVar8 < *(uint *)(lVar5 + 0x44));
          }
LAB_00116f37:
          if (lVar6 != 0) {
            if (s_free == (undefined *)0x0) {
              (*(code *)s_realloc)(lVar6,0);
            }
            else {
              (*(code *)s_free)();
            }
          }
          if (*(long *)(lVar5 + 0x20) != 0) {
            if (s_free == (undefined *)0x0) {
              (*(code *)s_realloc)(*(long *)(lVar5 + 0x20),0);
            }
            else {
              (*(code *)s_free)();
            }
          }
          lVar5 = *(long *)(this + 0x30);
          plVar4 = (long *)(lVar3 + lVar5);
          if (*(long *)(*plVar4 + lVar9 * 8) != 0) {
            if (s_free == (undefined *)0x0) {
              (*(code *)s_realloc)();
              lVar5 = *(long *)(this + 0x30);
              plVar4 = (long *)(lVar3 + lVar5);
            }
            else {
              (*(code *)s_free)();
              lVar5 = *(long *)(this + 0x30);
              plVar4 = (long *)(lVar3 + lVar5);
            }
          }
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < *(uint *)((long)plVar4 + 0xc));
      }
      in_RCX = local_40 + 1;
      local_40 = in_RCX;
    } while ((uint)in_RCX < *(uint *)(this + 0x3c));
    if (*(uint *)(this + 0x3c) != 0) {
      lVar3 = 0;
      while( true ) {
        Realloc(*(void **)(lVar5 + lVar3 * 0x18),0,(int)lVar5,in_RCX,(int)uVar7);
        if (*(uint *)(this + 0x3c) <= (uint)(lVar3 + 1)) break;
        lVar5 = *(long *)(this + 0x30);
        lVar3 = lVar3 + 1;
      }
    }
  }
  lVar5 = 0;
  if (*(int *)(this + 0x24) != 0) {
    do {
      lVar3 = lVar5 + 1;
      puVar1 = (undefined8 *)(*(long *)(this + 0x18) + lVar5 * 0x48);
      Realloc((void *)puVar1[6],0,(int)lVar5 * 9,in_RCX,(int)uVar7);
      Realloc((void *)puVar1[3],0,extraout_EDX,in_RCX,(int)uVar7);
      Realloc((void *)*puVar1,0,extraout_EDX_00,in_RCX,(int)uVar7);
      lVar5 = lVar3;
    } while ((uint)lVar3 < *(uint *)(this + 0x24));
  }
  ArrayBase::~ArrayBase((ArrayBase *)(this + 0x30));
  ArrayBase::~ArrayBase((ArrayBase *)(this + 0x18));
  ArrayBase::~ArrayBase((ArrayBase *)this);
  return;
}



/* xatlas::internal::pack::Atlas::~Atlas() */

void __thiscall xatlas::internal::pack::Atlas::~Atlas(Atlas *this)

{
  char *pcVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  ulong uVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  long lVar4;
  long lVar5;
  int in_R8D;
  
  lVar4 = 0;
  pcVar1 = (char *)(ulong)*(uint *)(this + 0xc);
  if (*(uint *)(this + 0xc) != 0) {
    do {
      while( true ) {
        lVar5 = *(long *)(*(long *)(*(long *)this + lVar4 * 8) + 8);
        if (lVar5 == 0) break;
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)(lVar5);
          lVar5 = *(long *)(*(long *)this + lVar4 * 8);
        }
        else {
          (*(code *)s_free)(lVar5);
          lVar5 = *(long *)(*(long *)this + lVar4 * 8);
        }
        if (lVar5 != 0) break;
LAB_0011722b:
        lVar4 = lVar4 + 1;
        if (*(uint *)(this + 0xc) <= (uint)lVar4) goto LAB_0011727b;
      }
      if (s_free == (undefined *)0x0) {
        (*(code *)s_realloc)();
        goto LAB_0011722b;
      }
      (*(code *)s_free)();
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0xc));
  }
LAB_0011727b:
  uVar3 = (ulong)*(uint *)(this + 0x3c);
  lVar4 = 0;
  if (*(uint *)(this + 0x3c) != 0) {
    do {
      while( true ) {
        lVar5 = *(long *)(*(long *)(*(long *)(this + 0x30) + lVar4 * 8) + 0x10);
        if (lVar5 == 0) break;
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)(lVar5);
          lVar5 = *(long *)(*(long *)(this + 0x30) + lVar4 * 8);
          uVar3 = extraout_RDX;
        }
        else {
          (*(code *)s_free)(lVar5);
          lVar5 = *(long *)(*(long *)(this + 0x30) + lVar4 * 8);
          uVar3 = extraout_RDX_01;
        }
        if (lVar5 != 0) break;
LAB_001172bc:
        lVar4 = lVar4 + 1;
        if (*(uint *)(this + 0x3c) <= (uint)lVar4) goto LAB_0011730b;
      }
      if (s_free == (undefined *)0x0) {
        (*(code *)s_realloc)();
        uVar3 = extraout_RDX_00;
        goto LAB_001172bc;
      }
      (*(code *)s_free)();
      lVar4 = lVar4 + 1;
      uVar3 = extraout_RDX_02;
    } while ((uint)lVar4 < *(uint *)(this + 0x3c));
  }
LAB_0011730b:
  iVar2 = (int)uVar3;
  lVar4 = 0;
  if (*(int *)(this + 0x54) != 0) {
    do {
      while( true ) {
        lVar5 = *(long *)(*(long *)(this + 0x48) + lVar4 * 8);
        if (*(long *)(lVar5 + 0x70) != 0) {
          if (s_free == (undefined *)0x0) {
            (*(code *)s_realloc)();
            uVar3 = extraout_RDX_03;
          }
          else {
            (*(code *)s_free)();
            uVar3 = extraout_RDX_06;
          }
        }
        if (*(long *)(lVar5 + 0x30) != 0) {
          if (s_free == (undefined *)0x0) {
            (*(code *)s_realloc)();
            uVar3 = extraout_RDX_04;
          }
          else {
            (*(code *)s_free)();
            uVar3 = extraout_RDX_07;
          }
        }
        if (*(long *)(*(long *)(this + 0x48) + lVar4 * 8) != 0) break;
LAB_00117367:
        iVar2 = (int)uVar3;
        lVar4 = lVar4 + 1;
        if (*(uint *)(this + 0x54) <= (uint)lVar4) goto LAB_001173b3;
      }
      if (s_free == (undefined *)0x0) {
        (*(code *)s_realloc)();
        uVar3 = extraout_RDX_05;
        goto LAB_00117367;
      }
      (*(code *)s_free)();
      iVar2 = (int)extraout_RDX_08;
      lVar4 = lVar4 + 1;
      uVar3 = extraout_RDX_08;
    } while ((uint)lVar4 < *(uint *)(this + 0x54));
  }
LAB_001173b3:
  Realloc(*(void **)(this + 0x88),0,iVar2,pcVar1,in_R8D);
  Realloc(*(void **)(this + 0x70),0,extraout_EDX,pcVar1,in_R8D);
  Realloc(*(void **)(this + 0x48),0,extraout_EDX_00,pcVar1,in_R8D);
  Realloc(*(void **)(this + 0x30),0,extraout_EDX_01,pcVar1,in_R8D);
  Realloc(*(void **)(this + 0x18),0,extraout_EDX_02,pcVar1,in_R8D);
  Realloc(*(void **)this,0,extraout_EDX_03,pcVar1,in_R8D);
  return;
}



/* xatlas::internal::pack::Atlas::addCharts(xatlas::internal::TaskScheduler*,
   xatlas::internal::param::Atlas*) */

void __thiscall
xatlas::internal::pack::Atlas::addCharts(Atlas *this,TaskScheduler *param_1,Atlas *param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  Atlas *pAVar12;
  char *pcVar13;
  int extraout_EDX;
  int iVar14;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 extraout_RDX_00;
  uint uVar17;
  uint uVar18;
  long *plVar20;
  uint uVar21;
  int iVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long in_FS_OFFSET;
  uint local_74;
  void *local_70;
  code *local_68;
  undefined8 *local_60;
  long local_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined8 local_48;
  long local_40;
  undefined8 extraout_RDX;
  ulong uVar19;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(param_2 + 0xc) != 0) {
    plVar20 = *(long **)(param_2 + 0x30);
    uVar17 = 0;
    plVar23 = plVar20 + (ulong)*(uint *)(param_2 + 0xc) * 3;
    do {
      if (*(uint *)((long)plVar20 + 0xc) != 0) {
        plVar5 = (long *)*plVar20;
        plVar1 = plVar5 + *(uint *)((long)plVar20 + 0xc);
        do {
          lVar24 = *plVar5;
          plVar5 = plVar5 + 1;
          uVar17 = uVar17 + *(int *)(lVar24 + 0x44);
        } while (plVar5 != plVar1);
      }
      plVar20 = plVar20 + 3;
    } while (plVar20 != plVar23);
    if (uVar17 != 0) {
      pAVar12 = param_2;
      uVar4 = std::thread::hardware_concurrency();
      local_70 = (void *)Realloc((void *)0x0,(ulong)uVar4 * 0xe0,extraout_EDX,(char *)pAVar12,
                                 (int)plVar23);
      uVar3 = _LC32;
      uVar16 = _LC18;
      if (uVar4 != 0) {
        pvVar6 = local_70;
        do {
          *(undefined8 *)((long)pvVar6 + 0x20) = 0;
          pvVar7 = (void *)((long)pvVar6 + 0xe0);
          *(undefined8 *)((long)pvVar6 + 0x28) = uVar3;
          *(undefined4 *)((long)pvVar6 + 0x30) = 0;
          *(undefined8 *)((long)pvVar6 + 0x38) = 0;
          *(undefined8 *)((long)pvVar6 + 0x40) = uVar16;
          *(undefined4 *)((long)pvVar6 + 0x48) = 0;
          *(undefined8 *)((long)pvVar6 + 0x50) = 0;
          *(undefined8 *)((long)pvVar6 + 0x58) = uVar3;
          *(undefined4 *)((long)pvVar6 + 0x60) = 0;
          *(undefined8 *)((long)pvVar6 + 0x68) = 0;
          *(undefined8 *)((long)pvVar6 + 0x70) = uVar3;
          *(undefined4 *)((long)pvVar6 + 0x78) = 0;
          *(undefined8 *)((long)pvVar6 + 0x80) = 0;
          *(undefined8 *)((long)pvVar6 + 0x88) = uVar3;
          *(undefined4 *)((long)pvVar6 + 0x90) = 0;
          *(undefined8 *)((long)pvVar6 + 0xa8) = 0;
          *(undefined8 *)((long)pvVar6 + 0xb0) = uVar16;
          *(undefined4 *)((long)pvVar6 + 0xb8) = 0;
          *(undefined8 *)((long)pvVar6 + 0xc0) = 0;
          *(undefined8 *)((long)pvVar6 + 200) = uVar16;
          *(undefined4 *)((long)pvVar6 + 0xd0) = 0;
          *(undefined1 *)((long)pvVar6 + 0xd8) = 0;
          pvVar6 = pvVar7;
        } while (pvVar7 != (void *)((ulong)uVar4 * 0xe0 + (long)local_70));
      }
      lVar24 = 0;
      local_74 = TaskScheduler::createTaskGroup(param_1,(uint)&local_70);
      local_58 = 0;
      local_48 = 0;
      _local_50 = CONCAT44(uVar17,0x10);
      ArrayBase::setArrayCapacity((uint)(ArrayBase *)&local_58);
      uVar19 = 0;
      if (*(int *)(param_2 + 0xc) != 0) {
        do {
          lVar25 = *(long *)(param_2 + 0x30);
          uVar4 = *(uint *)(lVar25 + 0xc + lVar24 * 0x18);
          if (uVar4 != 0) {
            lVar9 = 0;
            do {
              lVar25 = *(long *)(*(long *)(lVar25 + lVar24 * 0x18) + lVar9);
              iVar14 = *(int *)(lVar25 + 0x44);
              if (iVar14 != 0) {
                uVar21 = (int)uVar19 + iVar14;
                lVar26 = 0;
                do {
                  local_60 = (undefined8 *)(uVar19 * 0x10 + local_58);
                  *local_60 = *(undefined8 *)(*(long *)(lVar25 + 0x38) + lVar26);
                  local_68 = runAddChartTask;
                  lVar27 = *(long *)param_1 + (ulong)local_74 * 0x38;
                  do {
                    LOCK();
                    cVar2 = *(char *)(lVar27 + 0x24);
                    *(char *)(lVar27 + 0x24) = '\x01';
                    UNLOCK();
                  } while (cVar2 != '\0');
                  lVar8 = *(long *)(lVar27 + 8);
                  uVar18 = *(int *)(lVar27 + 0x14) + 1;
                  *(uint *)(lVar27 + 0x14) = uVar18;
                  if (*(uint *)(lVar27 + 0x18) < uVar18) {
                    if ((*(uint *)(lVar27 + 0x18) == 0) ||
                       (uVar18 = uVar18 + (uVar18 >> 2), uVar18 != 0)) {
                      if (uVar18 * *(int *)(lVar27 + 0x10) != 0) {
LAB_00117709:
                        lVar8 = (*(code *)s_realloc)();
                        *(long *)(lVar27 + 8) = lVar8;
                        *(uint *)(lVar27 + 0x18) = uVar18;
                        goto LAB_00117722;
                      }
                      if (lVar8 != 0) {
                        if (s_free == (undefined *)0x0) goto LAB_00117709;
                        (*(code *)s_free)();
                      }
                      *(undefined8 *)(lVar27 + 8) = 0;
                      *(uint *)(lVar27 + 0x18) = uVar18;
                    }
                    else {
                      if (lVar8 != 0) {
                        if (s_free == (undefined *)0x0) {
                          (*(code *)s_realloc)(lVar8,0);
                        }
                        else {
                          (*(code *)s_free)();
                        }
                        *(undefined8 *)(lVar27 + 8) = 0;
                      }
                      *(undefined4 *)(lVar27 + 0x18) = 0;
                    }
                  }
                  else {
LAB_00117722:
                    if (lVar8 != 0) {
                      memcpy((void *)(lVar8 + (ulong)((*(int *)(lVar27 + 0x14) + -1) *
                                                     *(uint *)(lVar27 + 0x10))),&local_68,
                             (ulong)*(uint *)(lVar27 + 0x10));
                    }
                  }
                  *(undefined1 *)(lVar27 + 0x24) = 0;
                  LOCK();
                  *(int *)(lVar27 + 0x28) = *(int *)(lVar27 + 0x28) + 1;
                  UNLOCK();
                  lVar27 = 0;
                  if (*(int *)(param_1 + 0x14) != 0) {
                    do {
                      LOCK();
                      *(undefined1 *)(*(long *)(param_1 + 8) + 0x60 + lVar27 * 0x68) = 1;
                      UNLOCK();
                      lVar27 = lVar27 + 1;
                      std::condition_variable::notify_one();
                    } while ((uint)lVar27 < *(uint *)(param_1 + 0x14));
                  }
                  uVar18 = (int)uVar19 + 1;
                  uVar19 = (ulong)uVar18;
                  lVar26 = lVar26 + 8;
                } while (uVar18 != uVar21);
                uVar19 = (ulong)uVar21;
              }
              lVar9 = lVar9 + 8;
              if ((ulong)uVar4 << 3 == lVar9) break;
              lVar25 = *(long *)(param_2 + 0x30);
            } while( true );
          }
          lVar24 = lVar24 + 1;
        } while ((uint)lVar24 < *(uint *)(param_2 + 0xc));
      }
      TaskScheduler::wait(*(TaskScheduler **)param_1,(TaskGroupHandle *)&local_74);
      ArrayBase::resize((int)this + 0x48,SUB41(uVar17,0));
      puVar15 = (undefined8 *)(local_58 + 8);
      pcVar13 = *(char **)(this + 0x48) + (ulong)uVar17 * 8;
      pcVar10 = *(char **)(this + 0x48);
      do {
        uVar16 = *puVar15;
        pcVar11 = pcVar10 + 8;
        puVar15 = puVar15 + 2;
        *(undefined8 *)pcVar10 = uVar16;
        pcVar10 = pcVar11;
      } while (pcVar13 != pcVar11);
      ArrayBase::~ArrayBase((ArrayBase *)&local_58);
      uVar17 = std::thread::hardware_concurrency();
      iVar22 = (int)uVar19;
      iVar14 = (int)extraout_RDX;
      if (uVar17 != 0) {
        uVar16 = extraout_RDX;
        lVar24 = 0;
        do {
          pvVar6 = local_70;
          lVar25 = lVar24 + 0xe0;
          Realloc(*(void **)((long)local_70 + lVar24 + 0xc0),0,(int)uVar16,pcVar13,(int)uVar19);
          Realloc(*(void **)((long)pvVar6 + lVar24 + 0xa8),0,extraout_EDX_00,pcVar13,(int)uVar19);
          Realloc(*(void **)((long)pvVar6 + lVar24 + 0x80),0,extraout_EDX_01,pcVar13,(int)uVar19);
          Realloc(*(void **)((long)pvVar6 + lVar24 + 0x68),0,extraout_EDX_02,pcVar13,(int)uVar19);
          Realloc(*(void **)((long)pvVar6 + lVar24 + 0x50),0,extraout_EDX_03,pcVar13,(int)uVar19);
          Realloc(*(void **)((long)pvVar6 + lVar24 + 0x38),0,extraout_EDX_04,pcVar13,(int)uVar19);
          Realloc(*(void **)((long)pvVar6 + lVar24 + 0x20),0,extraout_EDX_05,pcVar13,(int)uVar19);
          iVar22 = (int)uVar19;
          iVar14 = (int)extraout_RDX_00;
          uVar16 = extraout_RDX_00;
          lVar24 = lVar25;
        } while (lVar25 != (ulong)uVar17 * 0xe0);
      }
      Realloc(local_70,0,iVar14,pcVar13,iVar22);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::pack::Atlas::addUvMeshCharts(xatlas::internal::UvMeshInstance*) */

void xatlas::internal::pack::Atlas::addUvMeshCharts(UvMeshInstance *param_1)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *__s;
  undefined8 *puVar9;
  void *pvVar10;
  float *pfVar11;
  uint uVar12;
  int extraout_EDX;
  float *pfVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long *in_RSI;
  undefined8 *puVar17;
  float *in_R8;
  uint uVar18;
  long lVar19;
  long in_FS_OFFSET;
  byte bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  long local_180;
  undefined8 *local_158;
  undefined8 local_150;
  int local_148;
  void *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined4 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50;
  long local_40;
  
  bVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ArrayBase::resize((int)in_RSI + 8,SUB41(*(undefined4 *)(*in_RSI + 0x8c),0));
  memcpy((void *)in_RSI[1],*(void **)(*in_RSI + 0x80),(ulong)*(uint *)((long)in_RSI + 0x14) << 3);
  local_148 = *(int *)((long)in_RSI + 0x14);
  local_140 = (void *)0x0;
  local_138 = _LC18;
  local_130 = 0;
  ArrayBase::resize((uint)(ArrayBase *)&local_140,SUB41(local_148 + 0x1fU >> 5,0));
  __s = local_140;
  local_108 = (void *)0x0;
  local_f8 = 0;
  local_100 = _LC32;
  local_d0 = _LC32;
  local_b8 = _LC32;
  local_a0 = _LC32;
  lVar19 = *in_RSI;
  local_f0 = 0;
  local_e8 = _LC18;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = _LC18;
  local_70 = 0;
  local_68 = 0;
  local_60 = _LC18;
  local_58 = 0;
  local_50 = 0;
  if (*(int *)(lVar19 + 0xa4) == 0) {
LAB_00117f37:
    ArrayBase::~ArrayBase((ArrayBase *)&local_68);
    ArrayBase::~ArrayBase((ArrayBase *)&local_80);
    ArrayBase::~ArrayBase((ArrayBase *)&local_a8);
    ArrayBase::~ArrayBase((ArrayBase *)&local_c0);
    ArrayBase::~ArrayBase((ArrayBase *)&local_d8);
    ArrayBase::~ArrayBase((ArrayBase *)&local_f0);
    ArrayBase::~ArrayBase((ArrayBase *)&local_108);
    ArrayBase::~ArrayBase((ArrayBase *)&local_140);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_180 = 0;
LAB_00117b28:
  puVar7 = *(undefined8 **)(*(long *)(lVar19 + 0x98) + local_180 * 8);
  auVar25 = (*(code *)s_realloc)(0,0x88);
  puVar9 = auVar25._0_8_;
  puVar17 = puVar9;
  for (pfVar11 = (float *)0x11; uVar8 = _LC18, pfVar11 != (float *)0x0;
      pfVar11 = (float *)((long)pfVar11 + -1)) {
    *puVar17 = 0;
    puVar17 = puVar17 + (ulong)bVar20 * -2 + 1;
  }
  *(undefined4 *)puVar9 = 0xffffffff;
  pvVar10 = (void *)0x0;
  puVar9[0xf] = uVar8;
  puVar9[7] = uVar8;
  iVar5 = *(int *)((long)puVar7 + 0xc);
  *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(puVar7 + 6);
  puVar9[1] = puVar7[3];
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)((long)puVar7 + 0x24);
  puVar9[4] = in_RSI[1];
  uVar6 = *(undefined4 *)((long)in_RSI + 0x14);
  *(int *)((long)puVar9 + 0x7c) = iVar5;
  *(undefined4 *)(puVar9 + 5) = uVar6;
  local_158 = puVar9;
  if (iVar5 != 0) {
    pvVar10 = (void *)Realloc((void *)0x0,(ulong)(uint)(iVar5 * 4),auVar25._8_4_,(char *)0x0,
                              (int)in_R8);
    *(int *)(puVar9 + 0x10) = iVar5;
    puVar9[0xe] = pvVar10;
  }
  memcpy(pvVar10,(void *)*puVar7,(ulong)*(uint *)((long)puVar7 + 0xc) << 2);
  if ((__s != (void *)0x0) && (local_138._4_4_ != 0)) {
    memset(__s,0,(ulong)(uint)(local_138._4_4_ * (int)local_138));
  }
  if (*(int *)(puVar9 + 2) != 0) {
    lVar19 = 0;
    do {
      while( true ) {
        uVar15 = *(uint *)(puVar9[1] + lVar19 * 4);
        pfVar11 = (float *)(ulong)uVar15;
        uVar16 = 1 << ((byte)uVar15 & 0x1f);
        local_150 = CONCAT44(local_150._4_4_,uVar15);
        puVar2 = (uint *)((long)__s + (ulong)(uVar15 >> 5) * 4);
        uVar15 = *puVar2;
        if ((uVar15 & uVar16) == 0) break;
LAB_00117c00:
        uVar15 = *(uint *)(puVar9 + 2);
        lVar19 = lVar19 + 1;
        if (uVar15 <= (uint)lVar19) goto LAB_00117c9a;
      }
      pvVar10 = (void *)puVar9[6];
      *puVar2 = uVar15 | uVar16;
      uVar15 = *(int *)((long)puVar9 + 0x3c) + 1;
      *(uint *)((long)puVar9 + 0x3c) = uVar15;
      if (*(uint *)(puVar9 + 8) < uVar15) {
        if ((*(uint *)(puVar9 + 8) != 0) && (uVar15 = uVar15 + (uVar15 >> 2), uVar15 == 0)) {
          if (pvVar10 != (void *)0x0) {
            Realloc(pvVar10,0,0,(char *)pfVar11,(int)in_R8);
            puVar9[6] = 0;
          }
          *(undefined4 *)(puVar9 + 8) = 0;
          goto LAB_00117c00;
        }
        pvVar10 = (void *)Realloc(pvVar10,(ulong)(uVar15 * *(int *)(puVar9 + 7)),uVar15,
                                  (char *)pfVar11,(int)in_R8);
        puVar9[6] = pvVar10;
        *(uint *)(puVar9 + 8) = uVar15;
      }
      if (pvVar10 == (void *)0x0) goto LAB_00117c00;
      lVar19 = lVar19 + 1;
      memcpy((void *)((long)pvVar10 +
                     (ulong)((*(int *)((long)puVar9 + 0x3c) + -1) * *(uint *)(puVar9 + 7))),
             &local_150,(ulong)*(uint *)(puVar9 + 7));
      uVar15 = *(uint *)(puVar9 + 2);
    } while ((uint)lVar19 < uVar15);
LAB_00117c9a:
    fVar21 = _LC19;
    if (2 < uVar15) {
      pfVar13 = (float *)puVar9[1];
      lVar19 = puVar9[4];
      uVar16 = 1;
      uVar12 = 0;
      fVar22 = 0.0;
      pfVar11 = pfVar13;
      do {
        fVar24 = *pfVar11;
        uVar18 = uVar16 + 1;
        uVar12 = uVar12 + 1;
        pfVar11 = pfVar11 + 3;
        in_R8 = (float *)(lVar19 + (ulong)(uint)fVar24 * 8);
        uVar14 = (ulong)uVar16;
        uVar16 = uVar16 + 3;
        pfVar1 = (float *)(lVar19 + (ulong)(uint)pfVar13[uVar18] * 8);
        fVar24 = pfVar1[1];
        fVar23 = *pfVar1;
        pfVar1 = (float *)(lVar19 + (ulong)(uint)pfVar13[uVar14] * 8);
        fVar22 = fVar22 + (float)((uint)(((*in_R8 - fVar23) * (pfVar1[1] - fVar24) -
                                         (in_R8[1] - fVar24) * (*pfVar1 - fVar23)) * _LC11) & _LC37)
        ;
      } while (uVar12 < uVar15 / 3);
      fVar22 = fVar22 * _LC11;
      uVar15 = *(uint *)((long)puVar9 + 0x3c);
      *(float *)(puVar9 + 3) = fVar22;
      if (fVar22 < fVar21) goto LAB_00118038;
      goto LAB_00117d6a;
    }
  }
  *(undefined4 *)(puVar9 + 3) = 0;
  uVar15 = *(uint *)((long)puVar9 + 0x3c);
LAB_00118038:
  uVar14 = 0;
  fVar21 = _LC10;
  fVar22 = _LC9;
  fVar24 = _LC9;
  fVar23 = _LC10;
LAB_00118083:
  uVar16 = (uint)uVar14;
  if (uVar15 == 0) {
    if (*(uint *)(puVar9 + 5) <= uVar16) goto LAB_001180a0;
    pfVar11 = (float *)(puVar9[4] + uVar14 * 8);
  }
  else {
    if (uVar15 <= uVar16) goto LAB_001180a0;
    pfVar11 = (float *)(puVar9[4] + (ulong)*(uint *)(puVar9[6] + uVar14 * 4) * 8);
  }
  fVar3 = pfVar11[1];
  fVar4 = *pfVar11;
  uVar14 = (ulong)(uVar16 + 1);
  if (fVar3 <= fVar22) {
    fVar22 = fVar3;
  }
  if (fVar4 <= fVar24) {
    fVar24 = fVar4;
  }
  if (fVar23 <= fVar3) {
    fVar23 = fVar3;
  }
  if (fVar21 <= fVar4) {
    fVar21 = fVar4;
  }
  goto LAB_00118083;
LAB_001180a0:
  fVar22 = (fVar23 - fVar22) * _LC11 * (fVar21 - fVar24) * _LC11;
  *(float *)(puVar9 + 3) = fVar22;
LAB_00117d6a:
  local_100 = (ulong)(uint)local_100;
  uVar16 = 0;
  *(float *)((long)puVar9 + 0x1c) = fVar22;
  do {
    if (uVar15 == 0) {
      if (*(uint *)(puVar9 + 5) <= uVar16) break;
      pfVar11 = (float *)puVar9[4];
      pfVar13 = pfVar11 + (ulong)uVar16 * 2;
    }
    else {
      if (uVar15 <= uVar16) break;
      pfVar11 = (float *)(ulong)*(uint *)(puVar9[6] + (ulong)uVar16 * 4);
      pfVar13 = (float *)(puVar9[4] + (long)pfVar11 * 8);
    }
    local_150 = *(undefined8 *)pfVar13;
    iVar5 = local_100._4_4_;
    uVar12 = local_100._4_4_ + 1;
    local_100 = CONCAT44(uVar12,(uint)local_100);
    if (local_f8 < uVar12) {
      uVar18 = local_f8;
      if (local_f8 == 0) {
LAB_00117dd7:
        local_108 = (void *)Realloc(local_108,(ulong)(uVar12 * (uint)local_100),uVar18,
                                    (char *)pfVar11,(int)in_R8);
        local_f8 = uVar12;
        goto LAB_00117df8;
      }
      uVar18 = uVar12 >> 2;
      uVar12 = uVar12 + uVar18;
      if (uVar12 != 0) goto LAB_00117dd7;
      if (local_108 == (void *)0x0) {
        local_f8 = 0;
      }
      else {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
        }
        else {
          (*(code *)s_free)();
        }
        local_108 = (void *)0x0;
        uVar15 = *(uint *)((long)puVar9 + 0x3c);
        local_f8 = 0;
      }
    }
    else {
LAB_00117df8:
      if (local_108 != (void *)0x0) {
        memcpy((void *)((long)local_108 + (ulong)(iVar5 * (uint)local_100)),&local_150,
               local_100 & 0xffffffff);
      }
      uVar15 = *(uint *)((long)puVar9 + 0x3c);
    }
    uVar16 = uVar16 + 1;
  } while( true );
  BoundingBox2D::compute(&local_128,0,0);
  puVar9[9] = local_128;
  puVar9[10] = local_120;
  puVar9[0xb] = local_118;
  puVar9[0xc] = local_110;
  uVar15 = *(int *)(param_1 + 0x54) + 1;
  *(uint *)(param_1 + 0x54) = uVar15;
  if (*(uint *)(param_1 + 0x58) < uVar15) {
    pvVar10 = *(void **)(param_1 + 0x48);
    if ((*(uint *)(param_1 + 0x58) != 0) && (uVar15 = uVar15 + (uVar15 >> 2), uVar15 == 0)) {
      if (pvVar10 != (void *)0x0) {
        Realloc(pvVar10,0,extraout_EDX,(char *)pfVar11,(int)in_R8);
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
      goto LAB_00117f13;
    }
    lVar19 = Realloc(pvVar10,(ulong)(uVar15 * *(int *)(param_1 + 0x50)),extraout_EDX,(char *)pfVar11
                     ,(int)in_R8);
    *(uint *)(param_1 + 0x58) = uVar15;
    *(long *)(param_1 + 0x48) = lVar19;
  }
  else {
    lVar19 = *(long *)(param_1 + 0x48);
  }
  if (lVar19 != 0) {
    memcpy((void *)(lVar19 + (ulong)((*(int *)(param_1 + 0x54) + -1) * *(uint *)(param_1 + 0x50))),
           &local_158,(ulong)*(uint *)(param_1 + 0x50));
  }
LAB_00117f13:
  local_180 = local_180 + 1;
  lVar19 = *in_RSI;
  if (*(uint *)(lVar19 + 0xa4) <= (uint)local_180) goto LAB_00117f37;
  goto LAB_00117b28;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::pack::Atlas::packCharts(xatlas::PackOptions const&, bool
   (*)(xatlas::ProgressCategory, int, void*), void*) */

ulong xatlas::internal::pack::Atlas::packCharts
                (PackOptions *param_1,_func_bool_ProgressCategory_int_void_ptr *param_2,
                void *param_3)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UniformGrid2 *pUVar6;
  undefined8 uVar7;
  code cVar8;
  code cVar9;
  code cVar10;
  code cVar11;
  long lVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  bool bVar16;
  undefined *puVar17;
  void *pvVar18;
  void *pvVar19;
  char cVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  long *plVar34;
  float *pfVar35;
  undefined8 *puVar36;
  uint *puVar37;
  uint *puVar38;
  Vector2 *pVVar39;
  byte bVar40;
  uint uVar41;
  uint uVar42;
  undefined8 in_RCX;
  float *pfVar43;
  long lVar44;
  Vector2 *pVVar45;
  ulong *puVar46;
  Vector2 *pVVar47;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  uint uVar48;
  uint uVar49;
  int iVar50;
  uint uVar51;
  int extraout_EDX_04;
  int extraout_EDX_05;
  Vector2 *extraout_RDX;
  Vector2 *pVVar52;
  Vector2 *extraout_RDX_00;
  uint uVar53;
  uint *puVar54;
  long lVar55;
  int iVar56;
  long lVar57;
  uint uVar58;
  Vector2 *pVVar59;
  uint uVar60;
  uint uVar61;
  uint *puVar62;
  long lVar63;
  int iVar64;
  uint uVar65;
  uint *in_R8;
  ulong *puVar66;
  uint uVar67;
  ulong *puVar68;
  uint *puVar69;
  uint uVar70;
  uint uVar71;
  ulong uVar72;
  uint uVar73;
  int iVar74;
  uint uVar75;
  long in_FS_OFFSET;
  bool bVar76;
  float extraout_XMM0_Da;
  float fVar77;
  float fVar78;
  float fVar82;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar83;
  float extraout_XMM1_Da;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  float fVar94;
  float fVar95;
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  uint *local_5e8;
  uint *local_5e0;
  uint local_5cc;
  uint *local_5c8;
  uint local_5a8;
  uint local_5a4;
  int local_5a0;
  char local_588;
  float local_578;
  uint local_574;
  uint local_550;
  ulong *local_548;
  uint local_53c;
  ulong *local_518;
  uint local_4fc;
  float local_4e4;
  ulong local_4d0;
  float local_4c8;
  uint local_4c4;
  int local_4a8;
  uint local_4a4;
  uint local_420;
  undefined4 uStack_3d0;
  long local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  long local_398;
  ulong local_390;
  undefined8 local_388;
  uint *local_378;
  undefined8 local_370;
  undefined8 local_368;
  int *local_358;
  ulong local_350;
  undefined8 local_348;
  ulong *local_338;
  undefined8 local_330;
  ulong local_328;
  undefined8 local_318;
  undefined8 local_310;
  long local_308;
  ulong local_300;
  undefined8 local_2f8;
  ulong local_2e8;
  undefined8 local_2e0;
  long local_2d8;
  ulong local_2d0;
  undefined8 local_2c8;
  ulong local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  ulong local_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 local_280;
  long local_278;
  ulong local_270;
  undefined8 local_268;
  ulong local_258;
  undefined8 local_250;
  undefined8 local_248;
  ulong local_240;
  undefined8 local_238;
  ulong local_228;
  undefined8 local_220;
  undefined8 local_218;
  ulong local_210;
  undefined8 local_208;
  Vector2 *local_1f8;
  undefined8 local_1f0;
  uint local_1e8;
  Vector2 *local_1e0;
  uint local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  void *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  void *local_190;
  ulong local_188;
  undefined4 local_180;
  Vector2 *local_178;
  undefined8 local_170;
  uint local_168;
  uint *local_160;
  undefined8 local_158;
  undefined4 local_150;
  int local_148 [4];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  float *pfStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8 [4];
  undefined8 local_d8;
  undefined8 local_d0 [5];
  float local_a8 [16];
  undefined1 local_68 [16];
  int local_58;
  undefined4 local_54;
  float local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (void *)0x0) {
    local_53c = *(uint *)(param_1 + 0x54);
    if ((s_print == (undefined *)0x0) || (s_printVerbose == '\0')) {
      if (local_53c != 0) goto LAB_001184ba;
    }
    else {
LAB_001182fc:
      (*(code *)s_print)("Packing %u charts\n",local_53c);
      if (local_53c != 0) {
LAB_001184ba:
        fVar97 = *(float *)(param_2 + 8);
        iVar56 = *(int *)(param_2 + 0xc);
        *(float *)(param_1 + 0xb0) = fVar97;
        if (iVar56 == 0) {
          uVar22 = 0;
          if (fVar97 <= 0.0) {
LAB_001187f8:
            uVar22 = (uint)(fVar97 <= 0.0) << 10;
          }
        }
        else {
          uVar22 = iVar56 + *(int *)(param_2 + 4) * 2;
          if (fVar97 <= 0.0) {
            if (uVar22 == 0) goto LAB_001187f8;
            if (0.0 < fVar97) {
              bVar16 = true;
              local_4a4 = uVar22 * uVar22;
              local_5cc = 0;
              goto LAB_0011852d;
            }
          }
          else if (uVar22 != 0) {
            local_4a4 = uVar22 * uVar22;
            bVar16 = false;
            local_5cc = uVar22;
            goto LAB_0011852d;
          }
        }
        fVar84 = 0.0;
        plVar32 = *(long **)(param_1 + 0x48);
        plVar34 = plVar32 + local_53c;
        do {
          lVar55 = *plVar32;
          plVar32 = plVar32 + 1;
          fVar84 = fVar84 + *(float *)(lVar55 + 0x1c);
        } while (plVar32 != plVar34);
        if (uVar22 == 0) {
          uVar22 = 1;
          fVar97 = (fVar97 * fVar97 * fVar84) / _LC47;
          if (_LC4 <= fVar97) {
            uVar22 = (uint)(long)SQRT(fVar97);
          }
          uVar23 = nextPowerOfTwo(uVar22);
          uVar22 = 1;
          fVar84 = extraout_XMM0_Da;
          fVar97 = extraout_XMM1_Da;
          if (uVar23 != 0) {
            uVar22 = uVar23;
          }
        }
        local_4a4 = uVar22 * uVar22;
        if (fVar97 <= 0.0) {
          fVar97 = _LC4;
          if (_LC4 <= fVar84 / _LC47) {
            fVar97 = fVar84 / _LC47;
          }
          fVar97 = (float)local_4a4 / fVar97;
          if (fVar97 < 0.0) {
            fVar97 = sqrtf(fVar97);
          }
          else {
            fVar97 = SQRT(fVar97);
          }
          puVar17 = s_print;
          *(float *)(param_1 + 0xb0) = fVar97;
          if ((puVar17 != (undefined *)0x0) && (s_printVerbose != '\0')) {
            (*(code *)puVar17)((double)fVar97,"   Estimating texelsPerUnit as %g\n");
          }
        }
        bVar16 = true;
        local_5cc = 0;
LAB_0011852d:
        local_4d0 = (ulong)local_53c;
        uVar72 = 0;
        local_3b8 = 0;
        local_3b0 = _LC18;
        local_3a8 = 0;
        ArrayBase::resize((uint)(ArrayBase *)&local_3b8,SUB41(local_53c,0));
        uVar31 = _LC32;
        local_398 = 0;
        local_390 = _LC32;
        local_388 = 0;
        ArrayBase::resize((uint)(ArrayBase *)&local_398,SUB41(local_53c,0));
        lVar63 = local_398;
        lVar55 = local_3b8;
        local_4e4 = 0.0;
        local_4c8 = 3.4028235e+38;
LAB_00118615:
        lVar12 = *(long *)(*(long *)(param_1 + 0x48) + uVar72 * 8);
        fVar97 = _LC4;
        if (*(float *)(lVar12 + 0x18) != 0.0) {
          fVar97 = *(float *)(lVar12 + 0x1c) / *(float *)(lVar12 + 0x18);
          if (fVar97 < 0.0) {
            fVar97 = sqrtf(fVar97);
          }
          else {
            fVar97 = SQRT(fVar97);
          }
          fVar97 = fVar97 * *(float *)(param_1 + 0xb0);
          if (((int)fVar97 + 0x80800000U < 2) && (s_print != (undefined *)0x0)) {
            (*(code *)s_print)("\rASSERT: %s %s %d\n","isFinite(scale)",
                               "thirdparty/xatlas/xatlas.cpp");
          }
        }
        cVar8 = param_2[0x14];
        uVar41 = 0;
        uVar23 = *(uint *)(lVar12 + 0x3c);
        fVar84 = _LC9;
        fVar95 = _LC9;
        if (cVar8 == (code)0x0) {
          do {
            if (uVar23 == 0) {
              if (*(uint *)(lVar12 + 0x28) <= uVar41) break;
              pfVar43 = (float *)(*(long *)(lVar12 + 0x20) + (ulong)uVar41 * 8);
            }
            else {
              if (uVar23 <= uVar41) break;
              pfVar43 = (float *)(*(long *)(lVar12 + 0x20) +
                                 (ulong)*(uint *)(*(long *)(lVar12 + 0x30) + (ulong)uVar41 * 4) * 8)
              ;
            }
            if (pfVar43[1] <= fVar95) {
              fVar95 = pfVar43[1];
            }
            if (*pfVar43 <= fVar84) {
              fVar84 = *pfVar43;
            }
            uVar41 = uVar41 + 1;
          } while( true );
        }
        fVar77 = 0.0;
        uVar33 = 0;
        auVar96._0_12_ = ZEXT812(0);
        auVar96._12_4_ = 0;
        do {
          uVar41 = (uint)uVar33;
          fVar82 = auVar96._0_4_;
          if (uVar23 == 0) {
            uVar73 = *(uint *)(lVar12 + 0x28);
            if (*(uint *)(lVar12 + 0x28) <= uVar41) goto LAB_00118851;
            pfVar43 = (float *)(*(long *)(lVar12 + 0x20) + uVar33 * 8);
            fVar83 = pfVar43[1];
            fVar94 = *pfVar43;
            if (cVar8 != (code)0x0) goto LAB_0011869e;
LAB_0011872f:
            fVar94 = fVar94 - fVar84;
            fVar83 = fVar83 - fVar95;
          }
          else {
            uVar73 = uVar23;
            if (uVar23 <= uVar41) goto LAB_00118851;
            pfVar43 = (float *)(*(long *)(lVar12 + 0x20) +
                               (ulong)*(uint *)(*(long *)(lVar12 + 0x30) + uVar33 * 4) * 8);
            fVar83 = pfVar43[1];
            fVar94 = *pfVar43;
            if (cVar8 == (code)0x0) goto LAB_0011872f;
LAB_0011869e:
            fVar103 = *(float *)(lVar12 + 0x4c) * fVar83 + *(float *)(lVar12 + 0x48) * fVar94;
            fVar83 = fVar83 * *(float *)(lVar12 + 0x54) + fVar94 * *(float *)(lVar12 + 0x50);
            *pfVar43 = fVar103;
            fVar94 = fVar103 - *(float *)(lVar12 + 0x58);
            pfVar43[1] = fVar83;
            fVar83 = fVar83 - *(float *)(lVar12 + 0x5c);
          }
          fVar94 = fVar94 * fVar97;
          uVar33 = (ulong)(uVar41 + 1);
          fVar83 = fVar83 * fVar97;
          if (fVar82 <= fVar94) {
            auVar96._0_4_ = fVar94;
          }
          *pfVar43 = fVar94;
          if (fVar77 <= fVar83) {
            fVar77 = fVar83;
          }
          pfVar43[1] = fVar83;
        } while( true );
      }
      if (param_3 != (void *)0x0) goto LAB_00118327;
    }
    uVar31 = 1;
  }
  else {
    uVar22 = (*(code *)param_3)(2,0);
    uVar31 = (ulong)uVar22;
    if ((char)uVar22 != '\0') {
      local_53c = *(uint *)(param_1 + 0x54);
      if ((s_print != (undefined *)0x0) && (s_printVerbose != '\0')) goto LAB_001182fc;
      if (local_53c != 0) goto LAB_001184ba;
LAB_00118327:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar31 = (*(code *)param_3)(2,100,in_RCX);
        return uVar31;
      }
      goto LAB_0011c5a1;
    }
  }
  goto LAB_0011843b;
LAB_00118851:
  fVar97 = fVar77;
  if ((0.0 < fVar82) && (0.0 < fVar77)) {
    if ((float)((uint)fVar82 & _LC37) < _LC36) {
      auVar89._0_4_ = ~_LC37 & (uint)fVar82;
      auVar89._4_4_ = 0;
      auVar89._8_4_ = auVar96._8_4_;
      auVar89._12_4_ = auVar96._12_4_;
      auVar96 = ZEXT416((uint)((float)(-(uint)((float)(int)fVar82 < fVar82) & (uint)_LC4) +
                              (float)(int)fVar82)) | auVar89;
    }
    iVar56 = (int)auVar96._0_4_;
    if ((float)((uint)fVar77 & _LC37) < _LC36) {
      fVar97 = (float)((uint)((float)(-(uint)((float)(int)fVar77 < fVar77) & (uint)_LC4) +
                             (float)(int)fVar77) | ~_LC37 & (uint)fVar77);
    }
    iVar74 = (int)fVar97;
    if (param_2[0x11] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
      iVar25 = *(int *)(param_2 + 4) * 2 + 1;
      iVar56 = (iVar56 + 3 + iVar25 & 0xfffffffcU) - iVar25;
      iVar74 = (iVar74 + 3 + iVar25 & 0xfffffffcU) - iVar25;
    }
    fVar97 = (float)iVar74;
    if (uVar73 != 0) {
      lVar57 = *(long *)(lVar12 + 0x20);
      lVar44 = 0;
      do {
        if (uVar23 == 0) {
          lVar2 = lVar44 * 2;
        }
        else {
          lVar2 = (ulong)*(uint *)(*(long *)(lVar12 + 0x30) + lVar44) * 8;
        }
        pfVar43 = (float *)(lVar57 + lVar2);
        lVar44 = lVar44 + 4;
        *pfVar43 = (*pfVar43 / fVar82) * (float)iVar56;
        pfVar43[1] = (pfVar43[1] / fVar77) * fVar97;
      } while (lVar44 != (ulong)uVar73 * 4);
    }
    auVar96 = ZEXT416((uint)(float)iVar56);
  }
  uVar41 = *(uint *)param_2;
  fVar84 = auVar96._0_4_;
  if (local_5cc == 0) {
    if (uVar41 == 0) goto LAB_0011898f;
  }
  else if (local_5cc <= uVar41 - 1) {
    uVar41 = local_5cc + *(int *)(param_2 + 4) * -2;
    if ((uVar41 == 0) || ((fVar95 = (float)uVar41 - _LC4, fVar84 <= fVar95 && (fVar97 <= fVar95))))
    goto LAB_0011898f;
    if ((s_print != (undefined *)0x0) && (s_printVerbose != '\0')) {
      (*(code *)s_print)((double)fVar84,(double)fVar97,
                         "   Resizing chart %u from %gx%g to %ux%u to fit atlas\n",
                         uVar72 & 0xffffffff,uVar41);
      uVar23 = *(uint *)(lVar12 + 0x3c);
      auVar96 = ZEXT416((uint)fVar84);
    }
    goto LAB_00118911;
  }
  fVar95 = (float)uVar41 - _LC4;
  if ((fVar95 < fVar84) || (fVar95 < fVar97)) {
LAB_00118911:
    if (auVar96._0_4_ <= fVar97) {
      auVar96._0_4_ = fVar97;
    }
    uVar33 = 0;
    fVar97 = fVar95 / auVar96._0_4_;
    do {
      uVar41 = (uint)uVar33;
      if (uVar23 == 0) {
        if (*(uint *)(lVar12 + 0x28) <= uVar41) break;
        pfVar43 = (float *)(*(long *)(lVar12 + 0x20) + uVar33 * 8);
      }
      else {
        if (uVar23 <= uVar41) break;
        pfVar43 = (float *)(*(long *)(lVar12 + 0x20) +
                           (ulong)*(uint *)(*(long *)(lVar12 + 0x30) + uVar33 * 4) * 8);
      }
      uVar33 = (ulong)(uVar41 + 1);
      fVar84 = pfVar43[1] * fVar97;
      fVar77 = *pfVar43 * fVar97;
      if (fVar95 <= fVar84) {
        fVar84 = fVar95;
      }
      if (fVar95 <= fVar77) {
        fVar77 = fVar95;
      }
      *(ulong *)pfVar43 = CONCAT44(fVar84,fVar77);
    } while( true );
  }
LAB_0011898f:
  uVar33 = 0;
  auVar93 = ZEXT816(0);
  fVar97 = 0.0;
LAB_001189de:
  uVar41 = (uint)uVar33;
  fVar84 = auVar93._0_4_;
  if (uVar23 == 0) {
    if (*(uint *)(lVar12 + 0x28) <= uVar41) goto LAB_001189f9;
    puVar36 = (undefined8 *)(*(long *)(lVar12 + 0x20) + uVar33 * 8);
  }
  else {
    if (uVar23 <= uVar41) goto LAB_001189f9;
    puVar36 = (undefined8 *)
              (*(long *)(lVar12 + 0x20) +
              (ulong)*(uint *)(*(long *)(lVar12 + 0x30) + uVar33 * 4) * 8);
  }
  uVar33 = (ulong)(uVar41 + 1);
  fVar95 = (float)*puVar36 + (float)*(uint *)(param_2 + 4) + _LC11;
  fVar77 = (float)((ulong)*puVar36 >> 0x20) + (float)*(uint *)(param_2 + 4) + _LC11;
  if (fVar84 <= fVar95) {
    auVar93._0_4_ = fVar95;
  }
  *puVar36 = CONCAT44(fVar77,fVar95);
  if (fVar97 <= fVar77) {
    fVar97 = fVar77;
  }
  goto LAB_001189de;
LAB_001189f9:
  if (((((float)uVar22 < fVar84) || ((float)uVar22 < fVar97)) && (s_print != (undefined *)0x0)) &&
     (s_printVerbose != '\0')) {
    (*(code *)s_print)((double)fVar84,(double)fVar97,"   Chart %u extents are large (%gx%g)\n",
                       uVar72 & 0xffffffff);
    auVar93 = ZEXT416((uint)fVar84);
  }
  *(float *)(lVar63 + uVar72 * 8) = auVar93._0_4_;
  fVar84 = auVar93._0_4_ + fVar97;
  *(float *)(lVar63 + 4 + uVar72 * 8) = fVar97;
  if (fVar84 <= local_4c8) {
    local_4c8 = fVar84;
  }
  *(float *)(lVar55 + uVar72 * 4) = fVar84;
  uVar72 = uVar72 + 1;
  if (local_4e4 <= fVar84) {
    local_4e4 = fVar84;
  }
  if (local_4d0 == uVar72) goto code_r0x00118ab7;
  goto LAB_00118615;
code_r0x00118ab7:
  RadixSort::sort(param_1 + 0x60,lVar55,local_3b0._4_4_);
  lVar12 = *(long *)(param_1 + 0x60);
  fVar97 = (local_4e4 - local_4c8) * __LC65;
  local_378 = (uint *)0x0;
  local_370 = uVar31;
  local_368 = 0;
  local_1f8 = (Vector2 *)0x0;
  ArrayBase::push_back((uchar *)&local_378);
  local_318 = 0;
  local_310 = 0;
  cVar8 = param_2[0x13];
  local_308 = 0;
  local_300 = uVar31;
  local_2f8 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = uVar31;
  local_2c8 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = uVar31;
  local_298 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = uVar31;
  local_268 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = uVar31;
  local_238 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = uVar31;
  local_208 = 0;
  local_1f8 = (Vector2 *)0x0;
  local_1f0 = _LC18;
  local_1a0 = _LC18;
  local_188 = _LC18;
  local_170 = _LC18;
  local_158 = _LC18;
  local_1e8 = 0;
  local_1e0 = (Vector2 *)0x0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1a8 = (void *)0x0;
  local_198 = 0;
  local_190 = (void *)0x0;
  local_180 = 0;
  local_178 = (Vector2 *)0x0;
  local_168 = 0;
  local_160 = (uint *)0x0;
  local_150 = 0;
  local_358 = (int *)0x0;
  local_350 = uVar31;
  local_348 = 0;
  local_338 = (ulong *)0x0;
  ArrayBase::push_back((uchar *)&local_358);
  local_4a8 = 0;
  uVar23 = uVar22 + 0x3f >> 6;
  iVar56 = uVar22 * uVar23;
  local_420 = 0;
  local_4fc = local_53c - 1;
LAB_00118ed2:
  uVar41 = *(uint *)(lVar12 + (ulong)local_4fc * 4);
  uVar31 = (ulong)uVar41;
  pfVar43 = (float *)(lVar63 + uVar31 * 8);
  fVar84 = pfVar43[1];
  puVar13 = *(uint **)(*(long *)(param_1 + 0x48) + uVar31 * 8);
  if ((float)((uint)fVar84 & _LC37) < _LC36) {
    fVar84 = (float)((uint)((float)(int)fVar84 +
                           (float)(-(uint)((float)(int)fVar84 < fVar84) & (uint)_LC4)) |
                    ~_LC37 & (uint)fVar84);
  }
  fVar95 = *pfVar43;
  if ((float)((uint)fVar95 & _LC37) < _LC36) {
    fVar95 = (float)((uint)((float)(int)fVar95 +
                           (float)(-(uint)((float)(int)fVar95 < fVar95) & (uint)_LC4)) |
                    ~_LC37 & (uint)fVar95);
  }
  pfVar43 = (float *)0x1;
  BitImage::resize((uint)&local_318,(int)fVar95 + *(int *)(param_2 + 4),
                   (bool)((char)(int)fVar84 + (char)*(int *)(param_2 + 4)));
  if (param_2[0x15] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
    pfVar43 = (float *)0x1;
    BitImage::resize((uint)&local_288,local_318._4_4_,SUB81(local_318,0));
  }
  if (param_2[0x10] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
    pfVar43 = (float *)0x1;
    BitImage::resize((uint)&local_2e8,(uint)local_318,SUB81(local_318 >> 0x20,0));
    if (param_2[0x15] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
      pfVar43 = (float *)0x1;
      BitImage::resize((uint)&local_258,local_318._4_4_,SUB81(local_318,0));
    }
  }
  uVar73 = puVar13[4];
  if (2 < uVar73) {
    uVar72 = local_318 >> 0x20;
    uVar33 = local_318 & 0xffffffff;
    lVar63 = *(long *)(puVar13 + 8);
    lVar57 = *(long *)(puVar13 + 2);
    puVar36 = (undefined8 *)0x0;
    if (param_2[0x15] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
      puVar36 = &local_288;
    }
    uVar24 = 0;
    do {
      fVar84 = _LC11;
      lVar44 = 0;
      do {
        in_R8 = *(uint **)(lVar63 + (ulong)*(uint *)(lVar57 + lVar44 * 4) * 8);
        *(uint **)(local_108 + lVar44 * 8) = in_R8;
        lVar44 = lVar44 + 1;
      } while (lVar44 != 3);
      fVar104 = SUB164(_local_108,8);
      fVar110 = SUB164(_local_108,0xc);
      fVar95 = fVar104 - (float)local_108._0_4_;
      fVar94 = fVar110 - (float)local_108._4_4_;
      local_578 = fStack_f4;
      fVar105 = (fStack_f4 - (float)local_108._4_4_) * fVar95;
      fVar103 = (local_f8 - (float)local_108._0_4_) * fVar94;
      fVar77 = (float)local_108._4_4_;
      fVar82 = local_f8;
      fVar83 = (float)local_108._0_4_;
      if (fVar105 - fVar103 < 0.0) {
        fVar94 = fVar110 - fStack_f4;
        fVar95 = fVar104 - local_f8;
        local_578 = (float)local_108._4_4_;
        fVar103 = ((float)local_108._0_4_ - local_f8) * fVar94;
        fVar105 = ((float)local_108._4_4_ - fStack_f4) * fVar95;
        fVar77 = fStack_f4;
        fVar82 = (float)local_108._0_4_;
        fVar83 = local_f8;
      }
      pfVar43 = pfStack_100;
      local_338 = &local_318;
      local_330 = puVar36;
      if (fVar103 - fVar105 != 0.0) {
        fVar103 = fVar77 - local_578;
        fVar116 = fVar83 - fVar82;
        fVar111 = _LC4 / SQRT(fVar116 * fVar116 + fVar103 * fVar103);
        fVar106 = fVar82 - fVar104;
        fVar105 = (float)((uint)fVar103 ^ _LC6) * fVar111;
        fVar116 = fVar116 * fVar111;
        fVar103 = local_578 - fVar110;
        fVar111 = _LC4 / SQRT(fVar103 * fVar103 + fVar106 * fVar106);
        fVar106 = fVar106 * fVar111;
        fVar111 = (float)((uint)fVar103 ^ _LC6) * fVar111;
        fVar107 = _LC4 / SQRT(fVar94 * fVar94 + fVar95 * fVar95);
        fVar103 = (float)((uint)fVar94 ^ _LC6) * fVar107;
        fVar95 = fVar95 * fVar107;
        fVar94 = fVar82;
        if (fVar104 <= fVar82) {
          fVar94 = fVar104;
        }
        fVar107 = fVar83;
        if (fVar94 <= fVar83) {
          fVar107 = fVar94;
        }
        fVar94 = _LC11;
        if (0.0 < fVar107) {
          if ((float)((uint)fVar107 & _LC37) < _LC36) {
            pfVar43 = (float *)CONCAT44(fVar110,(int)fVar107);
            fVar107 = (float)((uint)(float)(int)fVar107 | ~_LC37 & (uint)fVar107);
          }
          fVar94 = fVar107 + _LC11;
        }
        fVar107 = local_578;
        if (fVar110 <= local_578) {
          fVar107 = fVar110;
        }
        fVar108 = fVar77;
        if (fVar107 <= fVar77) {
          fVar108 = fVar107;
        }
        fVar107 = _LC11;
        if (0.0 < fVar108) {
          if ((float)((uint)fVar108 & _LC37) < _LC36) {
            pfVar43 = (float *)CONCAT44((int)((ulong)pfVar43 >> 0x20),(int)fVar108);
            fVar108 = (float)((uint)(float)(int)fVar108 | ~_LC37 & (uint)fVar108);
          }
          fVar107 = fVar108 + _LC11;
        }
        fVar108 = fVar82;
        if (fVar82 <= fVar104) {
          fVar108 = fVar104;
        }
        fVar90 = (float)uVar33 - _LC4;
        fVar98 = fVar83;
        if (fVar83 <= fVar108) {
          fVar98 = fVar108;
        }
        if (fVar90 <= fVar98) {
          fVar98 = fVar90;
        }
        if ((float)((uint)fVar98 & _LC37) < _LC36) {
          pfVar43 = (float *)CONCAT44((int)((ulong)pfVar43 >> 0x20),(int)fVar98);
          fVar108 = (float)(int)fVar98;
          fVar98 = (float)((uint)((float)(-(uint)(fVar108 < fVar98) & (uint)_LC4) + fVar108) |
                          ~_LC37 & (uint)fVar98);
        }
        fVar108 = local_578;
        if (local_578 <= fVar110) {
          fVar108 = fVar110;
        }
        fVar91 = (float)uVar72 - _LC4;
        fVar90 = fVar77;
        if (fVar77 <= fVar108) {
          fVar90 = fVar108;
        }
        if (fVar91 <= fVar90) {
          fVar90 = fVar91;
        }
        if ((float)((uint)fVar90 & _LC37) < _LC36) {
          pfVar43 = (float *)CONCAT44((int)((ulong)pfVar43 >> 0x20),(int)fVar90);
          fVar108 = (float)(int)fVar90;
          fVar90 = (float)((uint)((float)(-(uint)(fVar108 < fVar90) & (uint)_LC4) + fVar108) |
                          ~_LC37 & (uint)fVar90);
        }
        fVar90 = fVar90 + _LC11;
        fVar98 = fVar98 + _LC11;
        fVar91 = (float)((uint)fVar110 ^ _LC6) * fVar95 - fVar104 * fVar103;
        fVar112 = (float)((uint)fVar77 ^ _LC6) * fVar116 - fVar83 * fVar105;
        fVar113 = (float)((uint)local_578 ^ _LC6) * fVar106 - fVar82 * fVar111;
        fVar108 = _LC4;
joined_r0x001199e9:
        fVar85 = fVar107;
        if (fVar85 <= fVar90) {
          auVar96 = ZEXT416((uint)fVar85);
          fVar107 = _LC67 + fVar85;
          if (fVar94 <= fVar98) {
            fVar85 = _LC66 + fVar85;
            fVar114 = fVar94;
            do {
              while( true ) {
                fVar92 = _LC66 + fVar114;
                fVar115 = fVar114 + _LC67;
                fVar109 = fVar105 * fVar92 + fVar112 + fVar116 * fVar85;
                if (((_LC68 < fVar109) &&
                    (fVar99 = fVar111 * fVar92 + fVar113 + fVar106 * fVar85, _LC68 < fVar99)) &&
                   (fVar92 = fVar92 * fVar103 + fVar91 + fVar85 * fVar95, _LC68 < fVar92)) break;
LAB_00119cc8:
                fVar114 = fVar115;
                if (fVar98 < fVar115) goto joined_r0x001199e9;
              }
              fVar78 = auVar96._0_4_;
              if (((fVar109 < __LC69) || (fVar99 < __LC69)) || (fVar92 < __LC69)) {
                fVar119 = fVar114 * fVar105 + fVar112 + fVar116 * fVar78;
                fVar92 = fVar114 * fVar111 + fVar113 + fVar106 * fVar78;
                auVar87 = ZEXT416((uint)(fVar91 + fVar114 * fVar103 + fVar95 * fVar78));
                fVar109 = fVar78;
                fVar99 = _LC72;
                if (fVar78 < fVar107) {
                  do {
                    if (fVar114 < fVar115) {
                      auVar88 = ZEXT416((uint)fVar114);
                      fVar117 = fVar92;
                      fVar118 = auVar87._0_4_;
                      fVar100 = fVar119;
                      do {
                        fVar86 = auVar88._0_4_;
                        if (__LC70 <= fVar100) {
                          if (fVar117 < __LC70) goto LAB_00119f46;
                          if (fVar118 < __LC70) goto LAB_00119f50;
LAB_00119e64:
                          cVar20 = drawTriangleCallback
                                             ((ArrayBase *)&local_338,(int)fVar86,(int)fVar109);
                          auVar88 = ZEXT416((uint)fVar86);
                          fVar99 = _LC72;
                          fVar108 = _LC4;
                          if (cVar20 == '\0') goto LAB_001191c6;
                        }
                        else if (__LC71 <= fVar100) {
LAB_00119f46:
                          if (__LC71 <= fVar117) {
LAB_00119f50:
                            if (__LC71 <= fVar118) {
                              local_58 = 3;
                              local_50 = 0.0;
                              local_e8[0] = fVar83 - fVar86;
                              local_e8[1] = fVar77 - fVar109;
                              local_d0[0] = CONCAT44(fVar77 - fVar109,local_e8[0]);
                              local_e8[2] = fVar82 - fVar86;
                              puVar37 = (uint *)0x0;
                              local_e8[3] = local_578 - fVar109;
                              local_d8 = CONCAT44(fVar110 - fVar109,fVar104 - fVar86);
                              local_68._8_8_ = local_a8;
                              local_68._0_8_ = local_e8;
                              pfVar35 = local_e8;
                              fVar120 = fVar99 - local_e8[0];
                              uVar42 = (uint)(fVar99 - local_e8[0] <= 0.0);
                              do {
                                fVar121 = pfVar35[2];
                                uVar48 = (uint)(fVar99 - fVar121 <= 0.0);
                                puVar38 = puVar37;
                                if (uVar42 != 0) {
                                  puVar38 = (uint *)(ulong)((int)puVar37 + 1);
                                  *(undefined8 *)(local_a8 + (long)puVar37 * 2) =
                                       *(undefined8 *)pfVar35;
                                  in_R8 = puVar37;
                                }
                                uVar42 = uVar42 + uVar48;
                                pfVar43 = (float *)(ulong)uVar42;
                                puVar37 = puVar38;
                                if (uVar42 == 1) {
                                  fVar101 = pfVar35[1];
                                  fVar3 = pfVar35[3];
                                  puVar37 = (uint *)(ulong)((int)puVar38 + 1);
                                  fVar4 = pfVar35[2];
                                  fVar5 = *pfVar35;
                                  pfVar43 = local_a8 + (long)puVar38 * 2;
                                  *pfVar43 = fVar99;
                                  local_a8[(long)puVar38 * 2 + 1] =
                                       ((fVar3 - fVar101) / (fVar4 - fVar5)) * fVar120 + fVar101;
                                }
                                pfVar35 = pfVar35 + 2;
                                fVar120 = fVar99 - fVar121;
                                uVar42 = uVar48;
                              } while (pfVar35 != (float *)local_d0);
                              local_54 = 0;
                              *(ulong *)(local_a8 + (long)puVar37 * 2) =
                                   CONCAT44(local_a8[1],local_a8[0]);
                              if ((int)puVar37 != 0) {
                                puVar38 = (uint *)0x0;
                                pfVar35 = local_e8;
                                fVar120 = fVar99 - local_a8[1];
                                bVar76 = fVar99 - local_a8[1] <= 0.0;
                                do {
                                  fVar121 = fVar99 - pfVar35[0x13];
                                  puVar62 = puVar38;
                                  if (bVar76 != 0) {
                                    puVar62 = (uint *)(ulong)((int)puVar38 + 1);
                                    *(undefined8 *)(local_e8 + (long)puVar38 * 2) =
                                         *(undefined8 *)(pfVar35 + 0x10);
                                    in_R8 = puVar38;
                                  }
                                  uVar42 = (uint)bVar76 + (uint)(fVar121 <= 0.0);
                                  pfVar43 = (float *)(ulong)uVar42;
                                  puVar38 = puVar62;
                                  if (uVar42 == 1) {
                                    fVar101 = pfVar35[0x10];
                                    fVar3 = pfVar35[0x12];
                                    puVar38 = (uint *)(ulong)((int)puVar62 + 1);
                                    fVar4 = pfVar35[0x13];
                                    fVar5 = pfVar35[0x11];
                                    pfVar43 = local_e8 + (long)puVar62 * 2;
                                    local_e8[(long)puVar62 * 2 + 1] = fVar99;
                                    *pfVar43 = ((fVar3 - fVar101) / (fVar4 - fVar5)) * fVar120 +
                                               fVar101;
                                  }
                                  pfVar35 = pfVar35 + 2;
                                  fVar120 = fVar121;
                                  bVar76 = fVar121 <= 0.0;
                                } while (local_e8 + (long)puVar37 * 2 != pfVar35);
                                local_58 = (int)puVar38;
                                *(ulong *)(local_e8 + (long)puVar38 * 2) =
                                     CONCAT44(local_e8[1],local_e8[0]);
                                if ((int)puVar38 != 0) {
                                  puVar37 = (uint *)0x0;
                                  pfVar35 = local_e8;
                                  bVar76 = 0.0 <= fVar84 - local_e8[0];
                                  fVar120 = fVar84 - local_e8[0];
                                  do {
                                    fVar121 = fVar84 - pfVar35[2];
                                    puVar62 = puVar37;
                                    if (bVar76 != 0) {
                                      puVar62 = (uint *)(ulong)((int)puVar37 + 1);
                                      *(undefined8 *)(local_a8 + (long)puVar37 * 2) =
                                           *(undefined8 *)pfVar35;
                                      in_R8 = puVar37;
                                    }
                                    uVar42 = (uint)bVar76 + (uint)(0.0 <= fVar121);
                                    pfVar43 = (float *)(ulong)uVar42;
                                    puVar37 = puVar62;
                                    if (uVar42 == 1) {
                                      fVar101 = pfVar35[1];
                                      fVar3 = pfVar35[3];
                                      puVar37 = (uint *)(ulong)((int)puVar62 + 1);
                                      fVar4 = pfVar35[2];
                                      fVar5 = *pfVar35;
                                      pfVar43 = local_a8 + (long)puVar62 * 2;
                                      *pfVar43 = fVar84;
                                      local_a8[(long)puVar62 * 2 + 1] =
                                           ((fVar3 - fVar101) / (fVar4 - fVar5)) * fVar120 + fVar101
                                      ;
                                    }
                                    pfVar35 = pfVar35 + 2;
                                    bVar76 = 0.0 <= fVar121;
                                    fVar120 = fVar121;
                                  } while (pfVar35 != local_e8 + (long)puVar38 * 2);
                                  local_54 = 0;
                                  *(ulong *)(local_a8 + (long)puVar37 * 2) =
                                       CONCAT44(local_a8[1],local_a8[0]);
                                  if ((int)puVar37 != 0) {
                                    puVar38 = (uint *)0x0;
                                    pfVar43 = local_e8;
                                    bVar76 = 0.0 <= fVar84 - local_a8[1];
                                    fVar120 = fVar84 - local_a8[1];
                                    do {
                                      fVar121 = fVar84 - pfVar43[0x13];
                                      puVar62 = puVar38;
                                      if (bVar76 != false) {
                                        puVar62 = (uint *)(ulong)((int)puVar38 + 1);
                                        *(undefined8 *)(local_e8 + (long)puVar38 * 2) =
                                             *(undefined8 *)(pfVar43 + 0x10);
                                        in_R8 = puVar38;
                                      }
                                      puVar38 = puVar62;
                                      if ((char)(bVar76 + (0.0 <= fVar121)) == '\x01') {
                                        fVar101 = pfVar43[0x10];
                                        fVar3 = pfVar43[0x12];
                                        puVar38 = (uint *)(ulong)((int)puVar62 + 1);
                                        fVar4 = pfVar43[0x13];
                                        fVar5 = pfVar43[0x11];
                                        local_e8[(long)puVar62 * 2 + 1] = fVar84;
                                        local_e8[(long)puVar62 * 2] =
                                             ((fVar3 - fVar101) / (fVar4 - fVar5)) * fVar120 +
                                             fVar101;
                                      }
                                      pfVar43 = pfVar43 + 2;
                                      bVar76 = 0.0 <= fVar121;
                                      fVar120 = fVar121;
                                    } while (pfVar43 != local_e8 + (long)puVar37 * 2);
                                    pfVar43 = (float *)CONCAT44(local_e8[1],local_e8[0]);
                                    local_58 = (int)puVar38;
                                    *(float **)(local_e8 + (long)puVar38 * 2) = pfVar43;
                                    local_50 = 0.0;
                                    if ((int)puVar38 != 0) {
                                      fVar101 = 0.0;
                                      pfVar35 = local_e8;
                                      fVar120 = local_e8[0];
                                      fVar121 = local_e8[1];
                                      do {
                                        pfVar1 = pfVar35 + 3;
                                        pfVar35 = pfVar35 + 2;
                                        fVar101 = fVar101 + (fVar120 * *pfVar1 - fVar121 * *pfVar35)
                                        ;
                                        fVar120 = *pfVar35;
                                        fVar121 = *pfVar1;
                                      } while (pfVar35 != local_e8 + (long)puVar38 * 2);
                                      local_50 = (float)((uint)fVar101 & _LC37) * fVar84;
                                      if (0.0 < local_50) goto LAB_00119e64;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        auVar88._0_4_ = auVar88._0_4_ + fVar108;
                        fVar117 = fVar117 + fVar111;
                        fVar118 = fVar118 + fVar103;
                        fVar100 = fVar100 + fVar105;
                      } while (auVar88._0_4_ < fVar115);
                      auVar87 = ZEXT416((uint)auVar87._0_4_);
                    }
                    fVar109 = fVar109 + fVar108;
                    fVar92 = fVar92 + fVar106;
                    fVar119 = fVar119 + fVar116;
                    auVar87._0_4_ = auVar87._0_4_ + fVar95;
                  } while (fVar109 < fVar107);
                  auVar96 = ZEXT416((uint)fVar78);
                }
                goto LAB_00119cc8;
              }
              auVar102 = auVar96;
              if (fVar107 <= fVar78) goto LAB_00119cc8;
              do {
                if (fVar114 < fVar115) {
                  fVar108 = fVar114;
                  do {
                    cVar20 = drawTriangleCallback
                                       ((ArrayBase *)&local_338,(int)fVar108,(int)auVar102._0_4_);
                    if (cVar20 == '\0') goto LAB_001191c6;
                    fVar108 = fVar108 + _LC4;
                  } while (fVar108 < fVar115);
                  auVar102 = ZEXT416((uint)auVar102._0_4_);
                  auVar96 = ZEXT416(auVar96._0_4_);
                  fVar108 = _LC4;
                }
                auVar102._0_4_ = auVar102._0_4_ + fVar108;
              } while (auVar102._0_4_ < fVar107);
              fVar114 = fVar115;
            } while (fVar115 <= fVar98);
          }
          goto joined_r0x001199e9;
        }
      }
LAB_001191c6:
      uVar24 = uVar24 + 1;
      lVar57 = lVar57 + 0xc;
    } while (uVar24 < uVar73 / 3);
  }
  if (param_2[0x10] == (_func_bool_ProgressCategory_int_void_ptr)0x0) {
    if (*(int *)(param_2 + 4) == 0) {
      if (param_2[0x12] != (_func_bool_ProgressCategory_int_void_ptr)0x0) goto LAB_0011a50f;
      goto LAB_0011b93c;
    }
LAB_0011a45b:
    local_2b8 = local_318;
    local_2b0 = CONCAT44(local_2b0._4_4_,(int)local_310);
    ArrayBase::copyTo((ArrayBase *)&local_308);
LAB_0011a48e:
    BitImage::dilate((uint)&local_2b8);
    if (param_2[0x15] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
      if (param_2[0x10] == (_func_bool_ProgressCategory_int_void_ptr)0x0) {
        local_228 = local_288;
        local_220 = CONCAT44(local_220._4_4_,(int)local_280);
        ArrayBase::copyTo((ArrayBase *)&local_278);
      }
      else {
        local_228 = local_258;
        local_220 = CONCAT44(local_220._4_4_,(undefined4)local_250);
        ArrayBase::copyTo((ArrayBase *)&local_248);
      }
      BitImage::dilate((uint)&local_228);
    }
    if (param_2[0x12] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
LAB_0011a50f:
      fVar84 = *(float *)(lVar55 + uVar31 * 4);
      if ((local_4c8 < fVar84) &&
         (uVar73 = local_420 + 1, fVar84 <= local_4e4 - (float)uVar73 * fVar97)) {
        local_420 = uVar73;
        if (local_370._4_4_ != 0) {
          puVar37 = local_378;
          if ((local_370 & 0x100000000) != 0) {
            local_378[0] = 0;
            local_378[1] = 0;
            puVar37 = local_378 + 2;
            if (local_378 + 2 == local_378 + (ulong)local_370._4_4_ * 2) goto LAB_0011a55c;
          }
          do {
            puVar37[0] = 0;
            puVar37[1] = 0;
            puVar38 = puVar37 + 4;
            puVar37[2] = 0;
            puVar37[3] = 0;
            puVar37 = puVar38;
          } while (puVar38 != local_378 + (ulong)local_370._4_4_ * 2);
        }
      }
    }
LAB_0011a55c:
    local_518 = &local_228;
    local_548 = &local_2b8;
    if (*(int *)(param_2 + 4) == 0) goto LAB_0011b8f7;
  }
  else {
    puVar66 = (ulong *)0x0;
    if (param_2[0x15] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
      puVar66 = &local_258;
    }
    local_1f0 = local_1f0 & 0xffffffff;
    local_1d8 = puVar13[10];
    local_1e0 = *(Vector2 **)(puVar13 + 8);
    local_1d0 = *(undefined8 *)(puVar13 + 2);
    uStack_3d0 = (undefined4)*(undefined8 *)(puVar13 + 4);
    local_1a0 = local_1a0 & 0xffffffff;
    local_1c8 = uStack_3d0;
    plVar34 = *(long **)(puVar13 + 0x1a);
    if (plVar34 == (long *)0x0) {
      uVar24 = 0;
      if (uVar73 != 0) {
        do {
          local_338 = (ulong *)CONCAT44(local_338._4_4_,uVar24);
          uVar24 = uVar24 + 1;
          ArrayBase::push_back((uchar *)&local_1f8);
        } while (uVar24 < puVar13[4]);
      }
    }
    else {
      uVar73 = *(uint *)((long)plVar34 + 0xc);
      if (uVar73 != 0) {
        lVar63 = 0;
        pVVar52 = local_1f8;
        do {
          iVar74 = (int)lVar63;
          uVar24 = iVar74 + 1;
          local_1f0 = CONCAT44(uVar24,(int)local_1f0);
          local_338 = (ulong *)CONCAT44(local_338._4_4_,*(undefined4 *)(*plVar34 + lVar63 * 4));
          if (local_1e8 < uVar24) {
            if ((local_1e8 == 0) || (uVar24 = uVar24 + (uVar24 >> 2), uVar24 != 0)) {
              pVVar52 = (Vector2 *)
                        Realloc(pVVar52,(ulong)(uVar24 * (int)local_1f0),iVar74,(char *)pfVar43,
                                (int)in_R8);
              local_1e8 = uVar24;
              local_1f8 = pVVar52;
              goto LAB_001192b1;
            }
            if (pVVar52 == (Vector2 *)0x0) {
              local_1e8 = 0;
            }
            else {
              Realloc(pVVar52,0,iVar74,(char *)pfVar43,(int)in_R8);
              local_1f8 = (Vector2 *)0x0;
              local_1e8 = 0;
            }
            local_1e8 = 0;
            pVVar52 = (Vector2 *)0x0;
          }
          else {
LAB_001192b1:
            if (pVVar52 != (Vector2 *)0x0) {
              memcpy(pVVar52 + (uint)(iVar74 * (int)local_1f0),(ArrayBase *)&local_338,
                     local_1f0 & 0xffffffff);
            }
          }
          if (lVar63 + 1U == (ulong)uVar73) break;
          lVar63 = lVar63 + 1;
          plVar34 = *(long **)(puVar13 + 0x1a);
        } while( true );
      }
    }
    local_138 = __LC74;
    uStack_130 = _LC92;
    local_148[0] = __LC73;
    local_148[1] = _UNK_00120584;
    local_148[2] = _UNK_00120588;
    local_148[3] = _UNK_0012058c;
    local_128 = _LC54;
    uStack_120 = _UNK_001205a8;
    local_118 = __LC76;
    if (local_318._4_4_ != 0) {
      local_5a4 = 0;
      uVar73 = (uint)local_318;
      do {
        if (uVar73 != 0) {
          uVar72 = 0;
LAB_00119449:
          uVar24 = (uint)uVar72;
          if ((*(ulong *)(local_308 + (ulong)((int)local_310 * local_5a4 + (uVar24 >> 6)) * 8) >>
               (uVar72 & 0x3f) & 1) != 0) goto LAB_001193f8;
          lVar63 = 0;
          do {
            uVar42 = local_148[lVar63] + uVar24;
            uVar48 = *(int *)((long)&local_128 + lVar63 * 4) + local_5a4;
            if ((((-1 < (int)(uVar42 | uVar48)) && ((int)uVar42 < (int)uVar73)) &&
                ((int)uVar48 < (int)local_318._4_4_)) &&
               ((*(ulong *)(local_308 + (ulong)(uVar48 * (int)local_310 + (uVar42 >> 6)) * 8) >>
                 ((ulong)uVar42 & 0x3f) & 1) != 0)) {
              pVVar52 = (Vector2 *)local_108;
              uVar73 = 0;
              fVar84 = (float)(int)(__LC82 & uVar24) + (float)(uVar24 >> 0x10) * _LC84 + _LC11;
              fVar95 = (float)(int)(_UNK_001205c4 & local_5a4) + (float)(local_5a4 >> 0x10) * _LC84
                       + _LC11;
              fVar77 = (float)(int)(_UNK_001205c8 & uVar24) + (float)(uVar24 >> 0x10) * _LC84 +
                       _LC11;
              fVar82 = (float)(int)(_UNK_001205cc & local_5a4) + (float)(local_5a4 >> 0x10) * _LC84
                       + _LC11;
              local_108._4_4_ = fVar95 + _LC5;
              local_108._0_4_ = fVar84 + _LC5;
              register0x00001288 = _LC4 + fVar77;
              register0x0000128c = fVar82 + _LC5;
              local_f8 = _LC4 + fVar84;
              fStack_f4 = _LC4 + fVar95;
              fStack_f0 = fVar77 + _LC5;
              fStack_ec = _LC4 + fVar82;
              goto LAB_0011959f;
            }
            lVar63 = lVar63 + 1;
          } while (lVar63 != 8);
          goto LAB_0011943e;
        }
LAB_0011ba6a:
        local_5a4 = local_5a4 + 1;
      } while (local_5a4 < local_318._4_4_);
    }
    if (*(int *)(param_2 + 4) != 0) {
      if (param_2[0x10] == (_func_bool_ProgressCategory_int_void_ptr)0x0) goto LAB_0011a45b;
      local_2b8 = local_2e8;
      local_2b0 = CONCAT44(local_2b0._4_4_,(int)local_2e0);
      ArrayBase::copyTo((ArrayBase *)&local_2d8);
      goto LAB_0011a48e;
    }
    if (param_2[0x12] != (_func_bool_ProgressCategory_int_void_ptr)0x0) goto LAB_0011a50f;
LAB_0011b8f7:
    if (param_2[0x10] == (_func_bool_ProgressCategory_int_void_ptr)0x0) {
LAB_0011b93c:
      local_518 = &local_288;
      local_548 = &local_318;
    }
    else {
      local_518 = &local_258;
      local_548 = &local_2e8;
    }
  }
  local_574 = 0;
  uVar24 = 0;
  uVar73 = 0;
  local_550 = 0;
  local_578 = 0.0;
  local_4c4 = 0;
  uVar42 = local_4c4;
  do {
    local_4c4 = uVar42;
    if (*(uint *)(param_1 + 0x3c) < local_4c4 + 1) {
      puVar36 = (undefined8 *)(*(code *)s_realloc)(0,0x28);
      puVar36[2] = 0;
      *puVar36 = CONCAT44(uVar22,uVar22);
      *(undefined4 *)(puVar36 + 3) = 8;
      *(undefined4 *)(puVar36 + 4) = 0;
      *(uint *)(puVar36 + 1) = uVar23;
      *(int *)((long)puVar36 + 0x1c) = iVar56;
      if (iVar56 != 0) {
        ArrayBase::setArrayCapacity((int)puVar36 + 0x10);
        if (((void *)puVar36[2] != (void *)0x0) && (*(int *)((long)puVar36 + 0x1c) != 0)) {
          memset((void *)puVar36[2],0,
                 (ulong)(uint)(*(int *)((long)puVar36 + 0x1c) * *(int *)(puVar36 + 3)));
        }
      }
      ArrayBase::push_back(param_1 + 0x30);
      local_338 = (ulong *)0x0;
      ArrayBase::push_back((uchar *)&local_358);
      if (cVar8 != (code)0x0) {
        puVar36 = (undefined8 *)(*(code *)s_realloc)(0,0x20);
        puVar36[1] = 0;
        *puVar36 = CONCAT44(uVar22,uVar22);
        uVar31 = _LC18;
        *(undefined4 *)(puVar36 + 3) = 0;
        puVar36[2] = uVar31;
        ArrayBase::resize((int)puVar36 + 8,SUB41(local_4a4,0));
        memset((void *)puVar36[1],0,(ulong)*(uint *)((long)puVar36 + 0x14) << 2);
        local_338 = puVar36;
        ArrayBase::push_back(param_1);
      }
      local_338 = (ulong *)0x0;
      ArrayBase::push_back((uchar *)&local_378);
    }
    puVar62 = (uint *)(ulong)local_4c4;
    puVar36 = *(undefined8 **)(param_1 + 0x30);
    puVar54 = (uint *)(local_358 + (long)puVar62 * 2);
    puVar37 = local_378 + (long)puVar62 * 2;
    uVar42 = (uint)*local_548;
    uVar48 = puVar54[1];
    cVar9 = param_2[0x12];
    uVar61 = *(uint *)((long)local_548 + 4);
    cVar10 = param_2[0x11];
    uVar51 = *puVar54;
    puVar38 = (uint *)puVar36[(long)puVar62];
    if ((cVar9 == (code)0x0) && (0x1000 < (int)(uVar48 * uVar51))) {
      bVar76 = false;
      puVar46 = (ulong *)(ulong)uVar51;
      local_5a0 = 0x1000;
      cVar11 = param_2[0x15];
      local_5a4 = 0x7fffffff;
      iVar74 = uVar51 + 1;
      iVar25 = uVar48 + 1;
      do {
        if ((cVar11 == (code)0x0) ||
           (iVar50 = *(int *)(param_1 + 0xb4) * 0x10dcd + 0x3039,
           uVar30 = *(uint *)(param_1 + 0xb8) ^ *(uint *)(param_1 + 0xb8) << 0xd,
           uVar30 = uVar30 ^ uVar30 >> 0x11, uVar30 = uVar30 << 5 ^ uVar30,
           lVar63 = (ulong)*(uint *)(param_1 + 0xbc) * 0x29a65ead + (ulong)*(uint *)(param_1 + 0xc0)
           , auVar81._4_4_ = uVar30, auVar81._0_4_ = iVar50, auVar81._8_8_ = lVar63,
           *(undefined1 (*) [16])(param_1 + 0xb4) = auVar81,
           ((int)lVar63 + iVar50 + uVar30 & 1) == 0)) {
          local_5c8 = (uint *)0x0;
          uVar30 = uVar42;
          uVar53 = uVar61;
        }
        else {
          local_5c8 = (uint *)0x1;
          uVar30 = uVar61;
          uVar53 = uVar42;
        }
        iVar50 = iVar74;
        iVar64 = iVar25;
        if (local_5cc != 0) {
          iVar50 = local_5cc - uVar30;
          if (iVar74 < (int)(local_5cc - uVar30)) {
            iVar50 = iVar74;
          }
          iVar64 = local_5cc - uVar53;
          if (iVar25 < (int)(local_5cc - uVar53)) {
            iVar64 = iVar25;
          }
        }
        uVar75 = 0;
        if (iVar50 != 0) {
          uVar60 = *(uint *)(param_1 + 0xb8) ^ *(uint *)(param_1 + 0xb8) << 0xd;
          iVar27 = *(int *)(param_1 + 0xb4) * 0x10dcd + 0x3039;
          uVar60 = uVar60 ^ uVar60 >> 0x11;
          uVar60 = uVar60 << 5 ^ uVar60;
          lVar63 = (ulong)*(uint *)(param_1 + 0xbc) * 0x29a65ead + (ulong)*(uint *)(param_1 + 0xc0);
          uVar75 = (iVar27 + (int)lVar63 + uVar60) % (iVar50 + 1U);
          auVar79._4_4_ = uVar60;
          auVar79._0_4_ = iVar27;
          auVar79._8_8_ = lVar63;
          *(undefined1 (*) [16])(param_1 + 0xb4) = auVar79;
        }
        local_5e0 = (uint *)0x0;
        if (iVar64 != 0) {
          uVar60 = *(uint *)(param_1 + 0xb8) ^ *(uint *)(param_1 + 0xb8) << 0xd;
          iVar50 = *(int *)(param_1 + 0xb4) * 0x10dcd + 0x3039;
          uVar60 = uVar60 ^ uVar60 >> 0x11;
          uVar60 = uVar60 << 5 ^ uVar60;
          lVar63 = (ulong)*(uint *)(param_1 + 0xbc) * 0x29a65ead + (ulong)*(uint *)(param_1 + 0xc0);
          local_5e0 = (uint *)((ulong)(iVar50 + (int)lVar63 + uVar60) % (ulong)(iVar64 + 1));
          auVar80._4_4_ = uVar60;
          auVar80._0_4_ = iVar50;
          auVar80._8_8_ = lVar63;
          *(undefined1 (*) [16])(param_1 + 0xb4) = auVar80;
        }
        if (cVar10 == (code)0x0) {
LAB_0011b112:
          uVar29 = uVar30 + uVar75;
          uVar15 = (uint)local_5e0;
          local_5a8 = uVar53 + uVar15;
          uVar65 = uVar29;
          if ((int)uVar29 < (int)uVar51) {
            uVar65 = uVar51;
          }
          uVar49 = uVar48;
          if ((int)uVar48 <= (int)local_5a8) {
            uVar49 = local_5a8;
          }
          uVar60 = uVar65;
          if ((int)uVar65 < (int)uVar49) {
            uVar60 = uVar49;
          }
          iVar50 = uVar60 * uVar60 + uVar65 * uVar49;
          if (iVar50 <= (int)local_5a4) {
            if (iVar50 == local_5a4) {
              uVar60 = uVar15;
              if ((int)uVar75 <= (int)uVar15) {
                uVar60 = uVar75;
              }
              fVar84 = (float)uVar73;
              if ((int)local_578 <= (int)uVar73) {
                fVar84 = local_578;
              }
              if ((int)fVar84 < (int)uVar60) goto joined_r0x0011b388;
            }
            puVar66 = local_548;
            uVar60 = uVar61;
            if ((int)local_5c8 == 1) {
              uVar60 = *(uint *)((long)local_518 + 4);
              puVar66 = local_518;
            }
            if (uVar60 != 0) {
              uVar71 = 0;
              puVar69 = local_5e0;
              do {
                while (uVar67 = (uint)puVar69, uVar67 < puVar38[1]) {
                  uVar31 = 0;
                  do {
                    uVar70 = (uint)uVar31;
                    uVar26 = uVar75 + uVar70;
                    if (*puVar38 <= uVar26) break;
                    if ((*(ulong *)(*(long *)(puVar38 + 4) +
                                   (ulong)(puVar38[2] * uVar67 + (uVar26 >> 6)) * 8) >>
                         ((byte)uVar26 & 0x3f) &
                        *(ulong *)(puVar66[2] +
                                  (ulong)((uint)puVar66[1] * uVar71 + (int)(uVar31 >> 6)) * 8) >>
                        ((byte)uVar31 & 0x3f)) != 0) goto joined_r0x0011b388;
                    uVar28 = uVar26 & 0x3f;
                    if ((uVar26 & 0x3f) < (uVar70 & 0x3f)) {
                      uVar28 = uVar70 & 0x3f;
                    }
                    uVar28 = (uVar70 + 0x40) - uVar28;
                    uVar31 = (ulong)uVar28;
                  } while (uVar28 < (uint)*puVar66);
                  uVar71 = uVar71 + 1;
                  puVar69 = (uint *)(ulong)(uVar67 + 1);
                  if (uVar71 == uVar60) goto LAB_0011b287;
                }
                uVar71 = uVar71 + 1;
                puVar69 = (uint *)(ulong)(uVar67 + 1);
              } while (uVar71 != uVar60);
            }
LAB_0011b287:
            in_R8 = (uint *)0x0;
            if (cVar11 != (code)0x0) {
              in_R8 = local_5c8;
            }
            uVar60 = (uint)in_R8;
            if (uVar48 * uVar51 == uVar65 * uVar49) {
              local_5e8 = (uint *)(ulong)uVar75;
              goto LAB_0011aa78;
            }
            bVar76 = true;
            local_5a4 = iVar50;
            local_578 = (float)uVar75;
            local_574 = uVar60;
            local_550 = uVar30;
            uVar73 = uVar15;
            uVar24 = uVar53;
          }
        }
        else {
          uVar60 = (int)local_5e0 + 3U & 0xfffffffc;
          uVar75 = uVar75 + 3 & 0xfffffffc;
          local_5e0 = (uint *)(ulong)uVar60;
          if ((local_5cc == 0) ||
             (((int)uVar75 <= (int)(local_5cc - uVar30) &&
              ((int)uVar60 <= (int)(local_5cc - uVar53))))) goto LAB_0011b112;
        }
joined_r0x0011b388:
        local_5a0 = local_5a0 + -1;
      } while (local_5a0 != 0);
    }
    else {
      uVar30 = puVar37[1];
      uVar60 = 0;
      iVar74 = 0x7fffffff;
      iVar25 = (-(uint)(cVar10 == (code)0x0) & 0xfffffffd) + 4;
      uVar53 = uVar61;
      uVar75 = uVar42;
      do {
        if ((int)uVar30 <= (int)(uVar48 + iVar25)) {
          local_588 = (char)uVar60;
          puVar66 = local_548;
          if (local_588 != '\0') {
            puVar66 = local_518;
          }
          uVar15 = uVar30;
          do {
            if ((local_5cc != 0) && ((int)(local_5cc - uVar53) < (int)uVar15)) break;
            fVar84 = 0.0;
            if (uVar30 == uVar15) {
              fVar84 = (float)*puVar37;
            }
            local_5a8 = uVar53 + uVar15;
            uVar65 = local_5a8;
            if ((int)local_5a8 <= (int)uVar48) {
              uVar65 = uVar48;
            }
            if ((int)fVar84 <= (int)(uVar51 + iVar25)) {
              for (; (local_5cc == 0 || ((int)fVar84 <= (int)(local_5cc - uVar75)));
                  fVar84 = (float)(iVar25 + (int)fVar84)) {
                uVar29 = uVar75 + (int)fVar84;
                uVar49 = uVar29;
                if ((int)uVar29 <= (int)uVar51) {
                  uVar49 = uVar51;
                }
                uVar71 = uVar49;
                if ((int)uVar49 < (int)uVar65) {
                  uVar71 = uVar65;
                }
                iVar50 = uVar71 * uVar71 + uVar49 * uVar65;
                if (iVar50 <= iVar74) {
                  if (iVar50 == iVar74) {
                    uVar71 = uVar15;
                    if ((int)uVar15 <= (int)fVar84) {
                      uVar71 = (uint)fVar84;
                    }
                    fVar95 = (float)uVar73;
                    if ((int)uVar73 <= (int)local_578) {
                      fVar95 = local_578;
                    }
                    if ((int)fVar95 <= (int)uVar71) goto joined_r0x0011a9a7;
                  }
                  uVar71 = *(uint *)((long)puVar66 + 4);
                  if (uVar71 != 0) {
                    uVar70 = 0;
                    uVar67 = uVar15;
                    do {
                      while (uVar67 < puVar38[1]) {
                        uVar26 = 0;
                        do {
                          uVar28 = uVar26 + (int)fVar84;
                          if (*puVar38 <= uVar28) break;
                          if ((*(ulong *)(*(long *)(puVar38 + 4) +
                                         (ulong)(puVar38[2] * uVar67 + (uVar28 >> 6)) * 8) >>
                               ((byte)uVar28 & 0x3f) &
                              *(ulong *)(puVar66[2] +
                                        (ulong)((uint)puVar66[1] * uVar70 + (uVar26 >> 6)) * 8) >>
                              ((byte)uVar26 & 0x3f)) != 0) goto joined_r0x0011a9a7;
                          uVar58 = uVar28 & 0x3f;
                          if ((uVar28 & 0x3f) < (uVar26 & 0x3f)) {
                            uVar58 = uVar26 & 0x3f;
                          }
                          uVar26 = (uVar26 + 0x40) - uVar58;
                        } while (uVar26 < (uint)*puVar66);
                        uVar70 = uVar70 + 1;
                        uVar67 = uVar67 + 1;
                        if (uVar71 == uVar70) goto LAB_0011a943;
                      }
                      uVar70 = uVar70 + 1;
                      uVar67 = uVar67 + 1;
                    } while (uVar71 != uVar70);
                  }
LAB_0011a943:
                  puVar46 = (ulong *)(ulong)(uVar48 * uVar51);
                  iVar74 = iVar50;
                  local_578 = fVar84;
                  local_574 = uVar60;
                  local_550 = uVar75;
                  uVar73 = uVar15;
                  uVar24 = uVar53;
                  if (uVar49 * uVar65 == uVar48 * uVar51) goto LAB_0011aa4b;
                }
joined_r0x0011a9a7:
                if ((int)uVar51 < (int)fVar84) break;
              }
            }
            bVar76 = (int)uVar15 <= (int)uVar48;
            uVar15 = iVar25 + uVar15;
          } while (bVar76);
        }
      } while ((uVar60 != 1) &&
              (uVar60 = 1, uVar53 = uVar42, uVar75 = uVar61,
              param_2[0x15] != (_func_bool_ProgressCategory_int_void_ptr)0x0));
      bVar76 = iVar74 != 0x7fffffff;
      puVar46 = (ulong *)puVar62;
    }
    uVar42 = local_4c4 + 1;
  } while (!bVar76 && !bVar16);
  uVar29 = local_550 + (int)local_578;
  local_5a8 = uVar24 + uVar73;
  uVar60 = local_574;
  fVar84 = local_578;
  uVar15 = uVar73;
LAB_0011aa4b:
  local_5e0 = (uint *)(ulong)uVar15;
  local_5e8 = (uint *)(ulong)(uint)fVar84;
  in_R8 = local_378;
  if (cVar9 != (code)0x0) {
    if (((int)uVar51 < (int)uVar29) || ((int)uVar48 < (int)local_5a8)) {
      if (local_370._4_4_ != 0) {
        puVar46 = (ulong *)(local_378 + (ulong)local_370._4_4_ * 2);
        puVar37 = local_378;
        if ((local_370 & 0x100000000) != 0) {
          local_378[0] = 0;
          local_378[1] = 0;
          puVar37 = local_378 + 2;
          if ((ulong *)(local_378 + 2) == puVar46) goto LAB_0011aa78;
        }
        do {
          puVar37[0] = 0;
          puVar37[1] = 0;
          puVar69 = puVar37 + 4;
          puVar37[2] = 0;
          puVar37[3] = 0;
          puVar37 = puVar69;
        } while ((ulong *)puVar69 != puVar46);
      }
    }
    else {
      *puVar37 = (uint)fVar84;
      puVar37[1] = uVar15;
    }
  }
LAB_0011aa78:
  if ((int)uVar29 < (int)*puVar54) {
    uVar29 = *puVar54;
  }
  *puVar54 = uVar29;
  if ((int)local_5a8 < (int)puVar54[1]) {
    local_5a8 = puVar54[1];
  }
  puVar54[1] = local_5a8;
  if ((bVar16) && ((in_R8 = (uint *)*puVar36, *in_R8 < uVar29 || (in_R8[1] < local_5a8)))) {
    puVar46 = (ulong *)0x0;
    uVar21 = nextPowerOfTwo(local_5a8);
    uVar73 = nextPowerOfTwo(uVar29);
    BitImage::resize((uint)in_R8,uVar73,(bool)uVar21);
    if (cVar8 != (code)0x0) {
      puVar66 = (ulong *)**(undefined8 **)param_1;
      uVar31 = *(ulong *)**(undefined8 **)(param_1 + 0x30);
      local_338 = (ulong *)0x0;
      local_328 = 0;
      uVar42 = (uint)(uVar31 >> 0x20);
      local_330 = (undefined8 *)_LC18;
      ArrayBase::resize((uint)(ArrayBase *)&local_338,(bool)((char)(uVar31 >> 0x20) * (char)uVar31))
      ;
      puVar68 = local_338;
      uVar73 = local_330._4_4_;
      memset(local_338,0,(ulong)local_330._4_4_ << 2);
      uVar24 = *(uint *)((long)puVar66 + 4);
      if (uVar42 <= *(uint *)((long)puVar66 + 4)) {
        uVar24 = uVar42;
      }
      puVar37 = (uint *)0x0;
      in_R8 = puVar37;
      iVar74 = extraout_EDX_04;
      if (uVar24 != 0) {
        uVar72 = 0;
        do {
          uVar24 = (uint)*puVar66;
          puVar38 = (uint *)((long)puVar68 + uVar72 * 4);
          uVar33 = uVar31 & 0xffffffff;
          if (uVar24 <= (uint)uVar31) {
            uVar33 = (ulong)uVar24;
          }
          iVar74 = (int)puVar37;
          uVar72 = (ulong)((int)uVar72 + (uint)uVar31);
          uVar48 = iVar74 + 1;
          puVar37 = (uint *)(ulong)uVar48;
          memcpy(puVar38,(void *)(puVar66[1] + (ulong)(uVar24 * iVar74) * 4),uVar33 << 2);
          uVar24 = *(uint *)((long)puVar66 + 4);
          if (uVar42 <= *(uint *)((long)puVar66 + 4)) {
            uVar24 = uVar42;
          }
          puVar46 = puVar68;
          iVar74 = extraout_EDX_05;
        } while (uVar48 < uVar24);
      }
      *(uint *)((long)puVar66 + 0x14) = 0;
      *puVar66 = uVar31;
      Realloc((void *)puVar66[1],0,iVar74,(char *)puVar46,(int)in_R8);
      puVar66[1] = (ulong)puVar68;
      puVar66[2] = CONCAT44(uVar73,(undefined4)local_330);
      *(uint *)(puVar66 + 3) = (uint)local_328;
      local_338 = (ulong *)0x0;
      local_328 = local_328 & 0xffffffff00000000;
      local_330 = (undefined8 *)0x0;
      ArrayBase::~ArrayBase((ArrayBase *)&local_338);
    }
    local_5a8 = puVar54[1];
    uVar29 = *puVar54;
    puVar38 = *(uint **)(*(long *)(param_1 + 0x30) + (long)puVar62 * 8);
  }
  if (uVar60 == 0) {
    uVar73 = *(uint *)((long)local_548 + 4);
    uVar24 = (uint)*local_548;
    if ((int)uVar73 < 1) {
      if (cVar8 == (code)0x0) goto LAB_0011ad20;
    }
    else {
LAB_0011ab1a:
      in_R8 = (uint *)0x0;
      iVar74 = (int)local_5e0;
      do {
        while ((iVar25 = (int)in_R8, -1 < iVar74 && (0 < (int)uVar24))) {
          uVar31 = 0;
          puVar46 = (ulong *)local_5e8;
          do {
            iVar50 = (int)puVar46;
            if ((((-1 < iVar50) &&
                 ((*(ulong *)(local_548[2] +
                             (ulong)((uint)local_548[1] * iVar25 + (int)(uVar31 >> 6)) * 8) >>
                   (uVar31 & 0x3f) & 1) != 0)) && (iVar50 < (int)uVar29)) &&
               (iVar74 < (int)local_5a8)) {
              puVar66 = (ulong *)(*(long *)(puVar38 + 4) +
                                 (ulong)(puVar38[2] * iVar74 + (int)((ulong)puVar46 >> 6)) * 8);
              *puVar66 = *puVar66 | 1L << ((byte)puVar46 & 0x3f);
            }
            uVar42 = (int)uVar31 + 1;
            uVar31 = (ulong)uVar42;
            puVar46 = (ulong *)(ulong)(iVar50 + 1);
          } while (uVar42 != uVar24);
          in_R8 = (uint *)(ulong)(iVar25 + 1U);
          iVar74 = iVar74 + 1;
          if (uVar73 == iVar25 + 1U) goto LAB_0011abb3;
        }
        in_R8 = (uint *)(ulong)(iVar25 + 1U);
        iVar74 = iVar74 + 1;
      } while (uVar73 != iVar25 + 1U);
LAB_0011abb3:
      if (cVar8 == (code)0x0) goto LAB_0011ad20;
      if (uVar60 != 0) goto LAB_0011b725;
    }
    puVar66 = (ulong *)0x0;
    piVar14 = *(int **)(*(long *)param_1 + (long)puVar62 * 8);
    in_R8 = (uint *)(ulong)*(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 4) != 0) {
      puVar66 = &local_2b8;
    }
    puVar68 = (ulong *)0x0;
    if (param_2[0x10] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
      puVar68 = &local_2e8;
    }
    if (0 < (int)local_318._4_4_) {
      iVar74 = 0;
      in_R8 = local_5e0;
      do {
        iVar25 = (int)in_R8;
        if ((-1 < iVar25) && (0 < (int)(uint)local_318)) {
          uVar31 = 0;
          puVar46 = (ulong *)local_5e8;
          do {
            while( true ) {
              iVar50 = (int)puVar46;
              uVar73 = (uint)uVar31;
              if (((iVar50 < (int)uVar29 & (byte)~(byte)((ulong)puVar46 >> 0x18) >> 7) != 0) &&
                 (iVar25 < (int)local_5a8)) break;
LAB_0011ac91:
              uVar31 = (ulong)(uVar73 + 1);
              puVar46 = (ulong *)(ulong)(iVar50 + 1);
              if ((uint)local_318 == uVar73 + 1) goto LAB_0011ad0f;
            }
            uVar24 = *piVar14 * iVar25 + iVar50;
            iVar64 = (int)(uVar31 >> 6);
            if ((*(ulong *)(local_308 + (ulong)(uint)((int)local_310 * iVar74 + iVar64) * 8) >>
                 (uVar31 & 0x3f) & 1) == 0) {
              if ((puVar68 == (ulong *)0x0) ||
                 ((*(ulong *)(puVar68[2] + (ulong)(uint)((int)puVar68[1] * iVar74 + iVar64) * 8) >>
                   (uVar73 & 0x3f) & 1) == 0)) {
                if ((puVar66 != (ulong *)0x0) &&
                   ((*(ulong *)(puVar66[2] + (ulong)(uint)((int)puVar66[1] * iVar74 + iVar64) * 8)
                     >> (uVar73 & 0x3f) & 1) != 0)) {
                  *(uint *)(*(long *)(piVar14 + 2) + (ulong)uVar24 * 4) = uVar41 | 0xa0000000;
                }
              }
              else {
                *(uint *)(*(long *)(piVar14 + 2) + (ulong)uVar24 * 4) = uVar41 | 0xc0000000;
              }
              goto LAB_0011ac91;
            }
            uVar31 = (ulong)(uVar73 + 1);
            puVar46 = (ulong *)(ulong)(iVar50 + 1);
            *(uint *)(*(long *)(piVar14 + 2) + (ulong)uVar24 * 4) = uVar41 | 0x80000000;
          } while ((uint)local_318 != uVar73 + 1);
        }
LAB_0011ad0f:
        iVar74 = iVar74 + 1;
        in_R8 = (uint *)(ulong)(iVar25 + 1);
      } while (local_318._4_4_ != iVar74);
    }
  }
  else {
    local_548 = local_518;
    uVar73 = *(uint *)((long)local_518 + 4);
    uVar24 = (uint)*local_518;
    if (0 < (int)uVar73) goto LAB_0011ab1a;
    if (cVar8 == (code)0x0) goto LAB_0011ad20;
LAB_0011b725:
    puVar66 = (ulong *)0x0;
    piVar14 = *(int **)(*(long *)param_1 + (long)puVar62 * 8);
    if (*(int *)(param_2 + 4) != 0) {
      puVar66 = &local_228;
    }
    puVar68 = (ulong *)0x0;
    if (param_2[0x10] != (_func_bool_ProgressCategory_int_void_ptr)0x0) {
      puVar68 = &local_258;
    }
    if (0 < local_288._4_4_) {
      iVar74 = 0;
      in_R8 = local_5e0;
      do {
        iVar25 = (int)in_R8;
        if ((-1 < iVar25) && (0 < (int)(uint)local_288)) {
          uVar31 = 0;
          puVar46 = (ulong *)local_5e8;
          do {
            while( true ) {
              iVar50 = (int)puVar46;
              uVar73 = (uint)uVar31;
              if (((iVar50 < (int)uVar29 & (byte)~(byte)((ulong)puVar46 >> 0x18) >> 7) != 0) &&
                 (iVar25 < (int)local_5a8)) break;
LAB_0011b7e7:
              uVar31 = (ulong)(uVar73 + 1);
              puVar46 = (ulong *)(ulong)(iVar50 + 1);
              if ((uint)local_288 == uVar73 + 1) goto LAB_0011b861;
            }
            uVar24 = *piVar14 * iVar25 + iVar50;
            iVar64 = (int)(uVar31 >> 6);
            if ((*(ulong *)(local_278 + (ulong)(uint)((int)local_280 * iVar74 + iVar64) * 8) >>
                 (uVar31 & 0x3f) & 1) == 0) {
              if ((puVar68 == (ulong *)0x0) ||
                 ((*(ulong *)(puVar68[2] + (ulong)(uint)((int)puVar68[1] * iVar74 + iVar64) * 8) >>
                   (uVar73 & 0x3f) & 1) == 0)) {
                if ((puVar66 != (ulong *)0x0) &&
                   ((*(ulong *)(puVar66[2] + (ulong)(uint)((int)puVar66[1] * iVar74 + iVar64) * 8)
                     >> (uVar73 & 0x3f) & 1) != 0)) {
                  *(uint *)(*(long *)(piVar14 + 2) + (ulong)uVar24 * 4) = uVar41 | 0xa0000000;
                }
              }
              else {
                *(uint *)(*(long *)(piVar14 + 2) + (ulong)uVar24 * 4) = uVar41 | 0xc0000000;
              }
              goto LAB_0011b7e7;
            }
            uVar31 = (ulong)(uVar73 + 1);
            puVar46 = (ulong *)(ulong)(iVar50 + 1);
            *(uint *)(*(long *)(piVar14 + 2) + (ulong)uVar24 * 4) = uVar41 | 0x80000000;
          } while ((uint)local_288 != uVar73 + 1);
        }
LAB_0011b861:
        iVar74 = iVar74 + 1;
        in_R8 = (uint *)(ulong)(iVar25 + 1);
      } while (local_288._4_4_ != iVar74);
    }
  }
LAB_0011ad20:
  uVar31 = 0;
  *puVar13 = local_4c4;
  uVar41 = puVar13[0xf];
  do {
    uVar73 = (uint)uVar31;
    if (uVar41 == 0) {
      if (puVar13[10] <= uVar73) goto LAB_0011b5de;
      pfVar43 = (float *)(*(long *)(puVar13 + 8) + uVar31 * 8);
    }
    else {
      if (uVar41 <= uVar73) goto LAB_0011b5de;
      pfVar43 = (float *)(*(long *)(puVar13 + 8) +
                         (ulong)*(uint *)(*(long *)(puVar13 + 0xc) + uVar31 * 4) * 8);
    }
    puVar46 = (ulong *)(ulong)uVar60;
    fVar84 = pfVar43[1];
    fVar95 = *pfVar43;
    if (uVar60 == 0) {
      fVar84 = *pfVar43;
      fVar95 = pfVar43[1];
    }
    uVar24 = *(uint *)(param_2 + 4);
    fVar84 = ((float)(int)local_5e8 + fVar84) - (float)uVar24;
    *pfVar43 = fVar84;
    fVar95 = ((float)(int)local_5e0 + fVar95) - (float)uVar24;
    pfVar43[1] = fVar95;
    if ((fVar84 < 0.0) || (fVar95 < 0.0)) {
      if (s_print != (undefined *)0x0) {
        puVar46 = (ulong *)0x2196;
        (*(code *)s_print)("\rASSERT: %s %s %d\n","texcoord.x >= 0 && texcoord.y >= 0",
                           "thirdparty/xatlas/xatlas.cpp");
        if (1 < (int)*pfVar43 + 0x80800000U) goto LAB_0011adec;
        goto LAB_0011b5b2;
      }
    }
    else {
      if ((int)fVar84 + 0x80800000U < 2) {
LAB_0011b5b2:
        if (s_print != (undefined *)0x0) {
          puVar46 = (ulong *)0x2197;
          (*(code *)s_print)("\rASSERT: %s %s %d\n","isFinite(texcoord.x) && isFinite(texcoord.y)",
                             "thirdparty/xatlas/xatlas.cpp");
        }
      }
      else {
LAB_0011adec:
        if ((int)pfVar43[1] + 0x80800000U < 2) goto LAB_0011b5b2;
      }
      uVar41 = puVar13[0xf];
    }
    uVar31 = (ulong)(uVar73 + 1);
  } while( true );
  while (pVVar52 = pVVar52 + 8, uVar73 != 4) {
LAB_0011959f:
    uVar73 = uVar73 + 1;
    pUVar6 = *(UniformGrid2 **)pVVar52;
    uVar33 = (ulong)local_1f0._4_4_;
    fVar84 = SUB84(pUVar6,0);
    uVar7 = *(undefined8 *)(local_108 + (ulong)(uVar73 & 3) * 8);
    if (local_1f0._4_4_ < 0x15) {
      if (local_1f0._4_4_ != 0) {
LAB_001195ee:
        pVVar39 = local_1f8 + uVar33 * 4;
        pVVar45 = local_1f8;
        pVVar59 = local_1e0;
        do {
          cVar20 = linesIntersect(pVVar59,(Vector2 *)(ulong)(((*(uint *)pVVar45 % 3 + 1) / 3) * 3),
                                  pVVar52,pVVar45,fVar84);
          if (cVar20 != '\0') goto LAB_0011be4f;
          pVVar45 = pVVar45 + 4;
          pVVar52 = extraout_RDX;
        } while (pVVar45 != pVVar39);
      }
    }
    else {
      if ((local_1a0._4_4_ == 0) &&
         (cVar20 = UniformGrid2::createGrid((UniformGrid2 *)&local_1f8), cVar20 == '\0'))
      goto LAB_001195ee;
      local_170 = local_170 & 0xffffffff;
      UniformGrid2::traverse(pUVar6,uVar7,(UniformGrid2 *)&local_1f8);
      pvVar18 = local_1a8;
      uVar42 = local_170._4_4_;
      if (local_158._4_4_ != 0) {
        puVar37 = local_160 + local_158._4_4_;
        puVar38 = local_160;
        do {
          pvVar19 = local_190;
          uVar61 = uVar42;
          pVVar39 = local_178;
          for (uVar48 = *(uint *)((long)pvVar18 + (ulong)*puVar38 * 4); uVar42 = uVar61,
              uVar48 != 0xffffffff; uVar48 = *(uint *)((long)pvVar19 + (ulong)(uVar48 + 1) * 4)) {
            while( true ) {
              uVar42 = uVar61 + 1;
              local_170 = CONCAT44(uVar42,(int)local_170);
              local_338 = (ulong *)CONCAT44(local_338._4_4_,
                                            *(undefined4 *)((long)pvVar19 + (ulong)uVar48 * 4));
              if (uVar42 <= local_168) break;
              uVar51 = uVar42;
              if ((local_168 == 0) || (uVar51 = (uVar42 >> 2) + uVar42, uVar51 != 0)) {
                if (uVar51 * (int)local_170 != 0) {
LAB_0011bbf5:
                  pVVar39 = (Vector2 *)(*(code *)s_realloc)(pVVar39);
                  local_178 = pVVar39;
                  local_168 = uVar51;
                  break;
                }
                if (pVVar39 != (Vector2 *)0x0) {
                  if (s_free == (undefined *)0x0) goto LAB_0011bbf5;
                  (*(code *)s_free)(pVVar39);
                }
                local_178 = (Vector2 *)0x0;
                local_168 = uVar51;
              }
              else {
                if (pVVar39 != (Vector2 *)0x0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)(pVVar39,0);
                  }
                  else {
                    (*(code *)s_free)(pVVar39);
                  }
                  local_178 = (Vector2 *)0x0;
                }
                local_168 = 0;
              }
              pVVar39 = (Vector2 *)0x0;
              uVar48 = *(uint *)((long)pvVar19 + (ulong)(uVar48 + 1) * 4);
              uVar61 = uVar42;
              if (uVar48 == 0xffffffff) goto LAB_0011bcd5;
            }
            if (pVVar39 != (Vector2 *)0x0) {
              memcpy(pVVar39 + uVar61 * (int)local_170,(ArrayBase *)&local_338,
                     local_170 & 0xffffffff);
            }
            uVar61 = uVar42;
          }
LAB_0011bcd5:
          puVar38 = puVar38 + 1;
        } while (puVar38 != puVar37);
      }
      if (uVar42 != 0) {
        pVVar59 = local_178;
        insertionSort<unsigned_int>((uint *)local_178,uVar42);
        pVVar39 = pVVar59 + (ulong)uVar42 * 4;
        pVVar45 = (Vector2 *)0xffffffff;
        do {
          uVar42 = *(uint *)pVVar59;
          pVVar47 = (Vector2 *)(ulong)uVar42;
          if ((uVar42 != (uint)pVVar45) &&
             (cVar20 = linesIntersect((Vector2 *)(ulong)(((uVar42 % 3 + 1) / 3) * 3),pVVar59,pVVar52
                                      ,pVVar47,fVar84), pVVar52 = extraout_RDX_00, cVar20 != '\0'))
          goto LAB_0011be4f;
          pVVar59 = pVVar59 + 4;
          pVVar45 = pVVar47;
        } while (pVVar59 != pVVar39);
      }
    }
  }
  uVar72 = (ulong)(uVar24 + 1);
  uVar73 = (uint)local_318;
  if ((uint)local_318 <= uVar24 + 1) goto LAB_0011ba6a;
  goto LAB_00119449;
LAB_0011be4f:
  uVar73 = (uint)local_318;
LAB_001193f8:
  puVar46 = (ulong *)(local_2d8 + (ulong)((int)local_2e0 * local_5a4 + (uVar24 >> 6)) * 8);
  *puVar46 = *puVar46 | 1L << ((byte)uVar72 & 0x3f);
  if (puVar66 != (ulong *)0x0) {
    puVar46 = (ulong *)(puVar66[2] + (ulong)((int)puVar66[1] * uVar24 + (local_5a4 >> 6)) * 8);
    *puVar46 = *puVar46 | 1L << ((byte)local_5a4 & 0x3f);
  }
LAB_0011943e:
  uVar72 = (ulong)(uVar24 + 1);
  if (uVar73 <= uVar24 + 1) goto LAB_0011ba6a;
  goto LAB_00119449;
LAB_0011b5de:
  if ((param_3 != (void *)0x0) &&
     (iVar74 = (int)(((float)(local_53c - local_4fc) / (float)local_4d0) * __LC35),
     bVar76 = iVar74 != local_4a8, local_4a8 = iVar74, bVar76)) {
    uVar41 = (*(code *)param_3)(2,iVar74,in_RCX);
    iVar74 = (int)in_R8;
    uVar31 = (ulong)uVar41;
    if ((char)uVar41 == '\0') goto LAB_00118373;
  }
  puVar46 = (ulong *)s_print;
  local_4fc = local_4fc - 1;
  lVar63 = local_398;
  if (local_4fc == 0xffffffff) goto LAB_0011c2be;
  goto LAB_00118ed2;
LAB_0011c2be:
  iVar56 = *(int *)(param_2 + 4);
  if (local_5cc == 0) {
    iVar74 = *local_358 + iVar56 * -2;
    if (iVar74 < 0) {
      iVar74 = 0;
    }
    iVar56 = local_358[1] + iVar56 * -2;
    if (iVar56 < 0) {
      iVar56 = 0;
    }
  }
  else {
    iVar74 = local_5cc + iVar56 * -2;
    iVar56 = iVar74;
  }
  *(int *)(param_1 + 0xac) = iVar56;
  *(int *)(param_1 + 0xa8) = iVar74;
  if ((puVar46 != (ulong *)0x0) && (s_printVerbose != '\0')) {
    (*(code *)puVar46)("   %dx%d resolution\n");
  }
  uVar23 = 0;
  ArrayBase::resize((int)param_1 + 0x18,SUB41(*(undefined4 *)(param_1 + 0x3c),0));
  iVar74 = (int)in_R8;
  uVar22 = *(uint *)(param_1 + 0x24);
  lVar55 = 0;
  if (uVar22 != 0) {
LAB_0011c3aa:
    do {
      uVar41 = *(uint *)(param_1 + 0xa8);
      if (uVar41 == 0) {
LAB_0011c3c5:
        puVar46 = *(ulong **)(param_1 + 0x18);
        *(undefined4 *)((long)puVar46 + lVar55) = 0;
      }
      else {
        uVar73 = *(uint *)(param_1 + 0xac);
        in_R8 = (uint *)(ulong)uVar73;
        if (uVar73 == 0) goto LAB_0011c3c5;
        iVar56 = 0;
        uVar42 = 0;
        uVar24 = 0;
        lVar63 = *(long *)(*(long *)(param_1 + 0x30) + lVar55 * 2);
        do {
          uVar48 = 0;
          do {
            uVar61 = uVar48 >> 6;
            bVar40 = (byte)uVar48;
            uVar48 = uVar48 + 1;
            uVar24 = uVar24 + ((uint)(*(ulong *)(*(long *)(lVar63 + 0x10) +
                                                (ulong)(uVar61 + iVar56) * 8) >> (bVar40 & 0x3f)) &
                              1);
          } while (uVar41 != uVar48);
          uVar42 = uVar42 + 1;
          iVar56 = iVar56 + *(int *)(lVar63 + 8);
        } while (uVar73 != uVar42);
        puVar46 = *(ulong **)(param_1 + 0x18);
        *(float *)((long)puVar46 + lVar55) = (float)uVar24 / (float)(uVar41 * uVar73);
      }
      if (uVar22 == 1) {
        if ((s_print != (undefined *)0x0) && (s_printVerbose != '\0')) {
          pfVar43 = (float *)((long)puVar46 + lVar55);
          uVar23 = uVar23 + 1;
          lVar55 = lVar55 + 4;
          (*(code *)s_print)((double)(*pfVar43 * __LC35),"   %f%% utilization\n");
          iVar74 = (int)in_R8;
          uVar22 = *(uint *)(param_1 + 0x24);
          if (uVar22 <= uVar23) break;
          goto LAB_0011c3aa;
        }
      }
      else if ((s_print != (undefined *)0x0) && (s_printVerbose != '\0')) {
        (*(code *)s_print)((double)(*(float *)((long)puVar46 + lVar55) * __LC35),
                           "   %u: %f%% utilization\n");
        uVar22 = *(uint *)(param_1 + 0x24);
      }
      iVar74 = (int)in_R8;
      uVar23 = uVar23 + 1;
      lVar55 = lVar55 + 4;
    } while (uVar23 < uVar22);
  }
  if ((param_3 == (void *)0x0) || (local_4a8 == 100)) {
    uVar31 = 1;
  }
  else {
    uVar22 = (*(code *)param_3)(2,100,in_RCX);
    uVar31 = (ulong)uVar22;
  }
LAB_00118373:
  ArrayBase::~ArrayBase((ArrayBase *)&local_358);
  Realloc(local_160,0,extraout_EDX,(char *)puVar46,iVar74);
  Realloc(local_178,0,extraout_EDX_00,(char *)puVar46,iVar74);
  Realloc(local_190,0,extraout_EDX_01,(char *)puVar46,iVar74);
  Realloc(local_1a8,0,extraout_EDX_02,(char *)puVar46,iVar74);
  Realloc(local_1f8,0,extraout_EDX_03,(char *)puVar46,iVar74);
  ArrayBase::~ArrayBase((ArrayBase *)&local_218);
  ArrayBase::~ArrayBase((ArrayBase *)&local_248);
  ArrayBase::~ArrayBase((ArrayBase *)&local_278);
  ArrayBase::~ArrayBase((ArrayBase *)&local_2a8);
  ArrayBase::~ArrayBase((ArrayBase *)&local_2d8);
  ArrayBase::~ArrayBase((ArrayBase *)&local_308);
  ArrayBase::~ArrayBase((ArrayBase *)&local_378);
  ArrayBase::~ArrayBase((ArrayBase *)&local_398);
  ArrayBase::~ArrayBase((ArrayBase *)&local_3b8);
LAB_0011843b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar31;
  }
LAB_0011c5a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::Array<unsigned int>::zeroOutMemory() */

void __thiscall xatlas::internal::Array<unsigned_int>::zeroOutMemory(Array<unsigned_int> *this)

{
  if ((*(void **)this != (void *)0x0) && (*(int *)(this + 0xc) != 0)) {
    memset(*(void **)this,0,(ulong)(uint)(*(int *)(this + 0xc) * *(int *)(this + 8)));
    return;
  }
  return;
}



/* xatlas::internal::param::PiecewiseParam::computeChart() */

undefined8 __thiscall xatlas::internal::param::PiecewiseParam::computeChart(PiecewiseParam *this)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  void *pvVar13;
  char *pcVar14;
  uint uVar15;
  uint extraout_EDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar23;
  undefined1 *puVar24;
  long lVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  long in_FS_OFFSET;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  long local_88;
  uint *local_78;
  uint local_5c;
  undefined1 local_58 [24];
  long local_40;
  Vector2 *pVVar22;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  if ((*(void **)(this + 0x58) != (void *)0x0) && (*(int *)(this + 100) != 0)) {
    memset(*(void **)(this + 0x58),0,(ulong)(uint)(*(int *)(this + 100) * *(int *)(this + 0x60)));
  }
  Array<unsigned_int>::zeroOutMemory((Array<unsigned_int> *)(this + 0xd0));
  Array<unsigned_int>::zeroOutMemory((Array<unsigned_int> *)(this + 0x90));
  Array<unsigned_int>::zeroOutMemory((Array<unsigned_int> *)(this + 0xb0));
  lVar9 = *(long *)this;
  if (2 < *(uint *)(lVar9 + 0x4c)) {
    uVar21 = **(uint **)(this + 0x28) & 1;
    pVVar22 = (Vector2 *)(ulong)uVar21;
    if (uVar21 == 0) {
      uVar21 = 0;
    }
    else {
      pVVar22 = (Vector2 *)0x0;
      do {
        uVar21 = (int)pVVar22 + 1;
        pVVar22 = (Vector2 *)(ulong)uVar21;
        if (*(uint *)(lVar9 + 0x4c) / 3 <= uVar21) goto LAB_0011d138;
      } while ((1 << ((byte)uVar21 & 0x1f) & (*(uint **)(this + 0x28))[uVar21 >> 5]) != 0);
      uVar21 = uVar21 * 3;
    }
    uVar18 = (uint)pVVar22;
    puVar24 = local_58;
    orthoProjectFace((uint)lVar9,pVVar22);
    lVar25 = *(long *)(this + 8);
    lVar7 = *(long *)(this + 0xb0);
    uVar20 = *(long *)(lVar9 + 0x40) + (ulong)uVar21 * 4;
    lVar9 = 0;
    do {
      uVar27 = *(uint *)(uVar20 + lVar9 * 4);
      puVar26 = (uint *)(lVar7 + (ulong)(uVar27 >> 5) * 4);
      *puVar26 = *puVar26 | 1 << ((byte)uVar27 & 0x1f);
      lVar2 = lVar9 * 8;
      lVar9 = lVar9 + 1;
      *(undefined8 *)(lVar25 + (ulong)uVar27 * 8) = *(undefined8 *)(puVar24 + lVar2);
    } while (lVar9 != 3);
    iVar17 = 0;
    uVar27 = 0;
    addFaceToPatch(this,uVar18);
    pcVar14 = (char *)(ulong)*(uint *)(this + 0x14);
    uVar12 = *(undefined8 *)(*(long *)this + 0x40);
    uVar6 = *(undefined4 *)(*(long *)this + 0x4c);
    *(uint *)(this + 0x108) = *(uint *)(this + 0x14);
    *(undefined8 *)(this + 0x100) = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 0x110) = uVar12;
    *(undefined4 *)(this + 0x118) = uVar6;
    *(undefined4 *)(this + 0x144) = 0;
    do {
      uVar18 = iVar17 + 1;
      *(uint *)(this + 0xf4) = uVar18;
      pvVar13 = *(void **)(this + 0xe8);
      auVar32._8_8_ = uVar12;
      auVar32._0_8_ = pvVar13;
      local_5c = uVar21;
      if (*(uint *)(this + 0xf8) < uVar18) {
        if ((*(uint *)(this + 0xf8) == 0) || (uVar18 = uVar18 + (uVar18 >> 2), uVar18 != 0)) {
          auVar32 = Realloc(pvVar13,(ulong)(uVar18 * *(int *)(this + 0xf0)),(int)uVar12,pcVar14,
                            (int)uVar20);
          *(uint *)(this + 0xf8) = uVar18;
          *(long *)(this + 0xe8) = auVar32._0_8_;
          goto LAB_0011c7b2;
        }
        if (pvVar13 != (void *)0x0) {
          Realloc(pvVar13,0,(int)uVar12,pcVar14,(int)uVar20);
          *(undefined8 *)(this + 0xe8) = 0;
          uVar12 = extraout_RDX_00;
        }
        *(undefined4 *)(this + 0xf8) = 0;
      }
      else {
LAB_0011c7b2:
        uVar12 = auVar32._8_8_;
        if (auVar32._0_8_ != 0) {
          memcpy((void *)(auVar32._0_8_ +
                         (ulong)((*(int *)(this + 0xf4) + -1) * *(uint *)(this + 0xf0))),&local_5c,
                 (ulong)*(uint *)(this + 0xf0));
          uVar12 = extraout_RDX;
        }
      }
      if (uVar27 < 3) {
        uVar27 = uVar27 + 1;
        if (uVar27 == 3) goto LAB_0011c858;
        uVar21 = uVar21 + 1;
      }
      iVar17 = *(int *)(this + 0xf4);
    } while( true );
  }
LAB_0011d138:
  uVar12 = 0;
LAB_0011caec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
LAB_0011c858:
  uVar21 = *(uint *)(this + 0x4c);
  if (uVar21 != 0) {
    do {
      puVar10 = *(undefined8 **)(this + 0x40);
      puVar26 = (uint *)0x0;
      puVar3 = puVar10 + uVar21;
      fVar29 = _LC9;
      do {
        fVar31 = (float)((uint *)*puVar10)[9];
        if (fVar31 < fVar29) {
          puVar26 = (uint *)*puVar10;
          fVar29 = fVar31;
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar3);
      if (puVar26 == (uint *)0x0) break;
      fVar29 = 0.0;
      fVar31 = 0.0;
      uVar21 = 0;
      puVar19 = puVar26;
      do {
        puVar16 = puVar19 + 6;
        puVar19 = *(uint **)(puVar19 + 4);
        uVar21 = uVar21 + 1;
        fVar29 = fVar29 + (float)*(undefined8 *)puVar16;
        fVar31 = fVar31 + (float)((ulong)*(undefined8 *)puVar16 >> 0x20);
      } while (puVar19 != (uint *)0x0);
      uVar18 = puVar26[1];
      lVar9 = *(long *)(this + 8);
      lVar25 = *(long *)this;
      lVar7 = *(long *)(lVar25 + 0x40);
      fVar29 = fVar29 * (_LC4 / (float)uVar21);
      fVar31 = fVar31 * (_LC4 / (float)uVar21);
      *(ulong *)(lVar9 + (ulong)uVar18 * 8) = CONCAT44(fVar31,fVar29);
      puVar19 = puVar26;
      do {
        uVar21 = puVar19[10];
        pfVar4 = (float *)(lVar9 + (ulong)*(uint *)(lVar7 + (ulong)uVar21 * 4) * 8);
        pfVar5 = (float *)(lVar9 + (ulong)*(uint *)(lVar7 + (ulong)((uVar21 % 3 + 1) % 3 +
                                                                   (uVar21 / 3) * 3) * 4) * 8);
        fVar30 = (*pfVar4 - fVar29) * (pfVar5[1] - fVar31) -
                 (pfVar4[1] - fVar31) * (*pfVar5 - fVar29);
        puVar16 = puVar26;
        if (0.0 <= (float)puVar19[0xb]) {
          if ((0.0 < (float)puVar19[0xb]) && (0.0 < fVar30)) goto LAB_0011c9b0;
        }
        else if (fVar30 < 0.0) {
LAB_0011c9b0:
          puVar19 = (uint *)0x1;
          break;
        }
        puVar19 = *(uint **)(puVar19 + 4);
      } while (puVar19 != (uint *)0x0);
      do {
        uVar21 = *puVar16 * 3;
        uVar23 = (ulong)*(uint *)(lVar7 + (ulong)(uVar21 + 1) * 4);
        uVar11 = (ulong)*(uint *)(lVar7 + (ulong)(uVar21 + 2) * 4);
        uVar12 = *(undefined8 *)(lVar9 + (ulong)*(uint *)(lVar7 + (ulong)uVar21 * 4) * 8);
        fVar31 = *(float *)(lVar9 + 4 + uVar11 * 8);
        fVar29 = *(float *)(lVar9 + uVar11 * 8);
        if ((((float)uVar12 - fVar29) * (*(float *)(lVar9 + 4 + uVar23 * 8) - fVar31) -
            ((float)((ulong)uVar12 >> 0x20) - fVar31) * (*(float *)(lVar9 + uVar23 * 8) - fVar29)) *
            _LC11 <= 0.0) goto LAB_0011ca40;
        puVar1 = puVar16 + 4;
        puVar16 = *(uint **)puVar1;
      } while (*(uint **)puVar1 != (uint *)0x0);
      if ((char)puVar19 == '\0') {
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined4 *)(this + 0x1bc) = 0;
        local_78 = puVar26;
        do {
          uVar21 = 0;
          uVar23 = (ulong)(*local_78 * 3);
          uVar11 = uVar23;
LAB_0011cba0:
          do {
            local_5c = *(uint *)(*(long *)(lVar25 + 0x108) + uVar11 * 4);
            uVar27 = (uint)uVar23;
            if (local_5c == 0xffffffff) {
              pcVar14 = (char *)0xffffffff;
LAB_0011ccad:
              uVar15 = *(int *)(this + 0x1a4) + 1;
              pvVar13 = *(void **)(this + 0x198);
              *(uint *)(this + 0x1a4) = uVar15;
              local_5c = uVar27;
              if (*(uint *)(this + 0x1a8) < uVar15) {
                if ((*(uint *)(this + 0x1a8) == 0) || (uVar15 = uVar15 + (uVar15 >> 2), uVar15 != 0)
                   ) {
                  pvVar13 = (void *)Realloc(pvVar13,(ulong)(uVar15 * *(int *)(this + 0x1a0)),uVar15,
                                            pcVar14,(int)uVar20);
                  *(void **)(this + 0x198) = pvVar13;
                  *(uint *)(this + 0x1a8) = uVar15;
                  goto LAB_0011cd1a;
                }
                if (pvVar13 == (void *)0x0) {
                  *(undefined4 *)(this + 0x1a8) = 0;
                }
                else {
                  Realloc(pvVar13,0,0,pcVar14,(int)uVar20);
                  *(undefined8 *)(this + 0x198) = 0;
                  *(undefined4 *)(this + 0x1a8) = 0;
                }
              }
              else {
LAB_0011cd1a:
                if (pvVar13 != (void *)0x0) {
                  memcpy((void *)((ulong)((*(int *)(this + 0x1a4) + -1) * *(uint *)(this + 0x1a0)) +
                                 (long)pvVar13),&local_5c,(ulong)*(uint *)(this + 0x1a0));
                }
              }
              if (((int)pcVar14 != -1) &&
                 (uVar15 = (uint)((ulong)pcVar14 >> 5),
                 (1 << ((byte)pcVar14 & 0x1f) &
                 *(uint *)(*(long *)(this + 0x90) + ((ulong)pcVar14 >> 5) * 4)) != 0)) {
                local_5c = *(uint *)(*(long *)(lVar25 + 0x108) + uVar11 * 4);
                goto LAB_0011cbe5;
              }
            }
            else {
              pcVar14 = (char *)((ulong)local_5c / 3);
              uVar15 = 1 << ((byte)pcVar14 & 0x1f) &
                       *(uint *)(*(long *)(this + 0x90) + ((ulong)local_5c / 0x60) * 4);
              if (uVar15 == 0) goto LAB_0011ccad;
LAB_0011cbe5:
              pvVar13 = *(void **)(this + 0x1b0);
              uVar28 = *(int *)(this + 0x1bc) + 1;
              *(uint *)(this + 0x1bc) = uVar28;
              if (*(uint *)(this + 0x1c0) < uVar28) {
                if ((*(uint *)(this + 0x1c0) != 0) && (uVar28 = uVar28 + (uVar28 >> 2), uVar28 == 0)
                   ) {
                  if (pvVar13 == (void *)0x0) {
                    *(undefined4 *)(this + 0x1c0) = 0;
                  }
                  else {
                    Realloc(pvVar13,0,uVar15,pcVar14,(int)uVar20);
                    *(undefined8 *)(this + 0x1b0) = 0;
                    *(undefined4 *)(this + 0x1c0) = 0;
                  }
                  goto LAB_0011cc80;
                }
                pvVar13 = (void *)Realloc(pvVar13,(ulong)(uVar28 * *(int *)(this + 0x1b8)),uVar15,
                                          pcVar14,(int)uVar20);
                *(uint *)(this + 0x1c0) = uVar28;
                *(void **)(this + 0x1b0) = pvVar13;
              }
              if (pvVar13 != (void *)0x0) {
                memcpy((void *)((long)pvVar13 +
                               (ulong)((*(int *)(this + 0x1bc) + -1) * *(uint *)(this + 0x1b8))),
                       &local_5c,(ulong)*(uint *)(this + 0x1b8));
              }
            }
LAB_0011cc80:
          } while (2 < uVar21);
          uVar21 = uVar21 + 1;
          if (uVar21 != 3) {
            uVar23 = (ulong)(uVar27 + 1);
            uVar11 = uVar23;
            goto LAB_0011cba0;
          }
          lVar25 = *(long *)this;
          local_78 = *(uint **)(local_78 + 4);
        } while (local_78 != (uint *)0x0);
        uVar20 = (ulong)*(uint *)(this + 0x1bc);
        cVar8 = UniformGrid2::intersect
                          (this + 0xe8,*(undefined8 *)(this + 0x198),*(undefined4 *)(this + 0x1a4),
                           *(undefined8 *)(this + 0x1b0));
        if (cVar8 == '\0') goto code_r0x0011ce37;
      }
LAB_0011ca40:
      lVar9 = *(long *)(this + 0xd0);
      puVar19 = puVar26;
      do {
        uVar21 = *puVar19;
        puVar19 = *(uint **)(puVar19 + 4);
        uVar18 = 1 << ((byte)uVar21 & 0x1f);
        uVar20 = (ulong)uVar18;
        puVar16 = (uint *)(lVar9 + (ulong)(uVar21 >> 5) * 4);
        *puVar16 = *puVar16 | uVar18;
      } while (puVar19 != (uint *)0x0);
      do {
        uVar21 = *(uint *)(this + 0x4c);
        puVar19 = *(uint **)(puVar26 + 4);
        *(undefined8 *)(*(long *)(this + 0x58) + (ulong)*puVar26 * 8) = 0;
        if (uVar21 != 0) {
          lVar9 = *(long *)(this + 0x40);
          uVar11 = 0;
          do {
            if (*(uint **)(lVar9 + uVar11 * 8) == puVar26) {
              if (uVar21 != 1) {
                iVar17 = *(int *)(this + 0x48);
                uVar18 = ((int)uVar11 + 1) * iVar17;
                uVar20 = (ulong)(uVar18 - iVar17);
                memmove((void *)(lVar9 + uVar20),(void *)((ulong)uVar18 + lVar9),
                        (ulong)(((uVar21 - 1) - (int)uVar11) * iVar17));
                uVar21 = *(uint *)(this + 0x4c);
                if (uVar21 == 0) break;
              }
              *(uint *)(this + 0x4c) = uVar21 - 1;
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar21);
        }
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)(puVar26,0);
        }
        else {
          (*(code *)s_free)(puVar26);
        }
        puVar26 = puVar19;
      } while (puVar19 != (uint *)0x0);
      uVar21 = *(uint *)(this + 0x4c);
      if (uVar21 == 0) break;
    } while( true );
  }
  uVar12 = 1;
  goto LAB_0011caec;
code_r0x0011ce37:
  pcVar14 = (char *)(ulong)uVar18;
  puVar19 = (uint *)(*(long *)(this + 0xb0) + (ulong)(uVar18 >> 5) * 4);
  *puVar19 = *puVar19 | 1 << ((byte)uVar18 & 0x1f);
  puVar19 = puVar26;
  do {
    addFaceToPatch(this,*puVar19);
    puVar19 = *(uint **)(puVar19 + 4);
  } while (puVar19 != (uint *)0x0);
  do {
    uVar21 = *(uint *)(this + 0x4c);
    uVar18 = *puVar26;
    puVar19 = *(uint **)(puVar26 + 4);
    *(undefined8 *)(*(long *)(this + 0x58) + (ulong)uVar18 * 8) = 0;
    if (uVar21 != 0) {
      pcVar14 = *(char **)(this + 0x40);
      uVar11 = 0;
      do {
        uVar18 = uVar21;
        if (*(uint **)(pcVar14 + uVar11 * 8) == puVar26) {
          if (uVar21 != 1) {
            uVar18 = *(uint *)(this + 0x48);
            uVar20 = (ulong)uVar18;
            uVar27 = ((int)uVar11 + 1) * uVar18;
            memmove(pcVar14 + (uVar27 - uVar18),pcVar14 + uVar27,
                    (ulong)(((uVar21 - 1) - (int)uVar11) * uVar18));
            uVar21 = *(uint *)(this + 0x4c);
            uVar18 = extraout_EDX;
            if (uVar21 == 0) break;
          }
          *(uint *)(this + 0x4c) = uVar21 - 1;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar21);
    }
    Realloc(puVar26,0,uVar18,pcVar14,(int)uVar20);
    puVar26 = puVar19;
  } while (puVar19 != (uint *)0x0);
  lVar9 = *(long *)this;
  pcVar14 = (char *)(ulong)*(uint *)(this + 0x14);
  uVar6 = *(undefined4 *)(lVar9 + 0x4c);
  uVar12 = *(undefined8 *)(lVar9 + 0x40);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(this + 8);
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0x118) = uVar6;
  *(uint *)(this + 0x108) = *(uint *)(this + 0x14);
  *(undefined8 *)(this + 0x110) = uVar12;
  *(undefined4 *)(this + 0x144) = 0;
  if (*(int *)(this + 0x7c) != 0) {
    local_88 = 0;
LAB_0011cf38:
    uVar21 = 0;
    uVar11 = (ulong)(uint)(*(int *)(*(long *)(this + 0x70) + local_88 * 4) * 3);
    uVar23 = uVar11;
LAB_0011cf50:
    uVar18 = *(uint *)(*(long *)(lVar9 + 0x108) + uVar11 * 4);
    do {
      uVar27 = (uint)uVar23;
      if ((uVar18 == 0xffffffff) ||
         (pcVar14 = (char *)((ulong)uVar18 / 3),
         (1 << ((byte)pcVar14 & 0x1f) &
         *(uint *)(*(long *)(this + 0x90) + ((ulong)uVar18 / 0x60) * 4)) == 0)) {
        pvVar13 = *(void **)(this + 0xe8);
        uVar18 = *(int *)(this + 0xf4) + 1;
        *(uint *)(this + 0xf4) = uVar18;
        local_5c = uVar27;
        if (*(uint *)(this + 0xf8) < uVar18) {
          if ((*(uint *)(this + 0xf8) != 0) && (uVar18 = uVar18 + (uVar18 >> 2), uVar18 == 0)) {
            if (pvVar13 != (void *)0x0) {
              Realloc(pvVar13,0,0,pcVar14,(int)uVar20);
              *(undefined8 *)(this + 0xe8) = 0;
            }
            *(undefined4 *)(this + 0xf8) = 0;
            goto LAB_0011d001;
          }
          pvVar13 = (void *)Realloc(pvVar13,(ulong)(uVar18 * *(int *)(this + 0xf0)),uVar18,pcVar14,
                                    (int)uVar20);
          *(void **)(this + 0xe8) = pvVar13;
          *(uint *)(this + 0xf8) = uVar18;
        }
        if (pvVar13 != (void *)0x0) {
          memcpy((void *)((long)pvVar13 +
                         (ulong)((*(int *)(this + 0xf4) + -1) * *(uint *)(this + 0xf0))),&local_5c,
                 (ulong)*(uint *)(this + 0xf0));
        }
      }
LAB_0011d001:
      if (2 < uVar21) goto LAB_0011cf50;
      uVar21 = uVar21 + 1;
      if (uVar21 == 3) {
        local_88 = local_88 + 1;
        if (*(uint *)(this + 0x7c) <= (uint)local_88) break;
        lVar9 = *(long *)this;
        goto LAB_0011cf38;
      }
      uVar11 = (ulong)(uVar27 + 1);
      uVar18 = *(uint *)(*(long *)(lVar9 + 0x108) + uVar11 * 4);
      uVar23 = uVar11;
    } while( true );
  }
  goto LAB_0011c858;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::segment::ComputeUvMeshChartsTask::run() */

void __thiscall
xatlas::internal::segment::ComputeUvMeshChartsTask::run(ComputeUvMeshChartsTask *this)

{
  byte *__src;
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  uchar *puVar5;
  long *plVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  uint uVar19;
  uint extraout_EDX;
  long lVar20;
  byte *pbVar21;
  float *pfVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong in_R8;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  long in_FS_OFFSET;
  bool bVar30;
  float fVar31;
  double extraout_XMM0_Qa;
  float fVar32;
  uint local_6c;
  uint local_60;
  int local_50;
  uint local_4c;
  undefined1 (*local_48) [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar17 = *(long *)this;
  uVar23 = *(uint *)(lVar17 + 0x74);
  local_60 = uVar23 / 3;
  ArrayBase::resize((int)lVar17 + 0xb0,SUB41(*(undefined4 *)(lVar17 + 0x8c),0));
  lVar17 = *(long *)this;
  lVar20 = 0;
  lVar14 = *(long *)(lVar17 + 0xb0);
  if (*(int *)(lVar17 + 0xbc) != 0) {
    do {
      *(undefined4 *)(lVar14 + lVar20 * 4) = 0xffffffff;
      lVar20 = lVar20 + 1;
    } while ((uint)lVar20 < *(uint *)(lVar17 + 0xbc));
  }
  if (uVar23 != 0) {
    lVar14 = *(long *)(this + 0x20);
    lVar20 = 0;
    do {
      __src = (byte *)(*(long *)(lVar17 + 0x80) +
                      (ulong)*(uint *)(*(long *)(lVar17 + 0x68) + lVar20) * 8);
      if (lVar14 == 0) {
        pcVar18 = (char *)(ulong)*(uint *)(this + 0x14);
        uVar27 = nextPowerOfTwo(*(uint *)(this + 0x14));
        uVar9 = (uint)(long)(extraout_XMM0_Qa * __LC34);
        if (uVar27 < uVar9) {
          uVar27 = nextPowerOfTwo(uVar9);
          uVar9 = extraout_EDX;
        }
        *(uint *)(this + 0x18) = uVar27;
        lVar17 = Realloc((void *)0x0,(ulong)uVar27 * 4,uVar9,pcVar18,(int)in_R8);
        *(long *)(this + 0x20) = lVar17;
        lVar14 = 0;
        if (*(int *)(this + 0x18) != 0) {
          do {
            *(undefined4 *)(lVar17 + lVar14 * 4) = 0xffffffff;
            lVar14 = lVar14 + 1;
          } while ((uint)lVar14 < *(uint *)(this + 0x18));
        }
        uVar9 = *(uint *)(this + 0x14);
        if (*(uint *)(this + 0x38) < uVar9) {
          ArrayBase::setArrayCapacity((int)this + 0x28);
          uVar9 = *(uint *)(this + 0x14);
        }
        if (*(uint *)(this + 0x50) < uVar9) {
          ArrayBase::setArrayCapacity((int)this + 0x40);
        }
      }
      uVar9 = 0x1505;
      pbVar21 = __src;
      do {
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + 1;
        uVar9 = uVar9 * 0x1003f + (uint)bVar2;
      } while (__src + 8 != pbVar21);
      pvVar13 = *(void **)(this + 0x28);
      uVar25 = (ulong)(*(int *)(this + 0x18) - 1U & uVar9);
      uVar9 = *(int *)(this + 0x34) + 1;
      *(uint *)(this + 0x34) = uVar9;
      iVar10 = (int)CONCAT71((int7)((ulong)pbVar21 >> 8),__src != (byte *)0x0);
      if (*(uint *)(this + 0x38) < uVar9) {
        if ((*(uint *)(this + 0x38) == 0) || (uVar9 = uVar9 + (uVar9 >> 2), uVar9 != 0)) {
          pvVar13 = (void *)Realloc(pvVar13,(ulong)(uVar9 * *(int *)(this + 0x30)),iVar10,
                                    (char *)(ulong)bVar2,(int)in_R8);
          *(uint *)(this + 0x38) = uVar9;
          *(void **)(this + 0x28) = pvVar13;
          goto LAB_0011d260;
        }
        if (pvVar13 != (void *)0x0) {
          Realloc(pvVar13,0,iVar10,(char *)(ulong)bVar2,(int)in_R8);
          *(undefined8 *)(this + 0x28) = 0;
        }
        *(undefined4 *)(this + 0x38) = 0;
      }
      else {
LAB_0011d260:
        if (__src != (byte *)0x0 && pvVar13 != (void *)0x0) {
          memcpy((void *)((long)pvVar13 +
                         (ulong)((*(int *)(this + 0x34) + -1) * *(uint *)(this + 0x30))),__src,
                 (ulong)*(uint *)(this + 0x30));
        }
      }
      lVar14 = *(long *)(this + 0x20);
      iVar10 = *(int *)(this + 0x4c);
      uVar27 = *(uint *)(this + 0x50);
      pcVar18 = (char *)(ulong)uVar27;
      pvVar12 = *(void **)(this + 0x40);
      pvVar13 = (void *)(lVar14 + uVar25 * 4);
      uVar9 = iVar10 + 1;
      bVar30 = pvVar13 != (void *)0x0;
      *(uint *)(this + 0x4c) = uVar9;
      in_R8 = CONCAT71((int7)(in_R8 >> 8),bVar30);
      if (uVar27 < uVar9) {
        if (uVar27 == 0) {
LAB_0011d2ef:
          pvVar12 = (void *)Realloc(pvVar12,(ulong)(uVar9 * *(int *)(this + 0x48)),(int)lVar14,
                                    pcVar18,(int)in_R8);
          in_R8 = (ulong)bVar30;
          *(uint *)(this + 0x50) = uVar9;
          *(void **)(this + 0x40) = pvVar12;
          iVar10 = *(int *)(this + 0x4c) + -1;
          goto LAB_0011d2ae;
        }
        pcVar18 = (char *)(ulong)(uVar9 >> 2);
        uVar9 = uVar9 + (uVar9 >> 2);
        if (uVar9 != 0) goto LAB_0011d2ef;
        if (pvVar12 == (void *)0x0) {
          *(undefined4 *)(this + 0x50) = 0;
        }
        else {
          Realloc(pvVar12,0,(int)lVar14,pcVar18,(int)in_R8);
          lVar14 = *(long *)(this + 0x20);
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined4 *)(this + 0x50) = 0;
          iVar10 = *(int *)(this + 0x4c) + -1;
        }
      }
      else {
LAB_0011d2ae:
        if (pvVar12 != (void *)0x0 && bVar30) {
          memcpy((void *)((long)pvVar12 + (ulong)(iVar10 * *(uint *)(this + 0x48))),pvVar13,
                 (ulong)*(uint *)(this + 0x48));
          iVar10 = *(int *)(this + 0x4c) + -1;
        }
        lVar14 = *(long *)(this + 0x20);
      }
      *(int *)(lVar14 + uVar25 * 4) = iVar10;
      lVar20 = lVar20 + 4;
      if ((ulong)uVar23 * 4 == lVar20) goto LAB_0011d35c;
      lVar17 = *(long *)this;
    } while( true );
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Array<unsigned_int>::zeroOutMemory((Array<unsigned_int> *)(this + 0x60));
    return;
  }
  goto LAB_0011dbc2;
LAB_0011d6a0:
  uVar15 = uVar24 / 3;
  iVar10 = (int)uVar15;
  puVar29 = (uint *)(*(long *)(this + 0x60) + (uVar24 / 0x60) * 4);
  uVar19 = 1 << ((byte)uVar15 & 0x1f);
  uVar11 = *puVar29;
  if ((((uVar11 & uVar19) == 0) &&
      (lVar20 = *(long *)this,
      (uVar19 & *(uint *)(*(long *)(lVar20 + 0x38) + (uVar24 / 0x60) * 4)) == 0)) &&
     (((*(int *)(lVar20 + 0x5c) == 0 || (*(uint *)(lVar20 + 0xa4) <= uVar9)) ||
      (*(int *)(*(long *)(lVar20 + 0x50) + uVar15 * 4) ==
       *(int *)(*(long *)(*(long *)(lVar20 + 0x98) + lVar17) + 0x30))))) {
    lVar26 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(lVar20 + 0xb0) +
                       (ulong)*(uint *)(*(long *)(lVar20 + 0x68) + uVar15 * 0xc + lVar26 * 4) * 4);
      if ((uVar9 != uVar3) && (uVar3 != 0xffffffff)) goto LAB_0011d8e9;
      lVar26 = lVar26 + 1;
    } while (lVar26 != 3);
    plVar6 = *(long **)(*(long *)(lVar20 + 0x98) + lVar17);
    *puVar29 = uVar11 | uVar19;
    uVar11 = *(int *)((long)plVar6 + 0xc) + 1;
    lVar26 = *plVar6;
    *(uint *)((long)plVar6 + 0xc) = uVar11;
    local_50 = iVar10;
    if (*(uint *)(plVar6 + 2) < uVar11) {
      if ((*(uint *)(plVar6 + 2) != 0) && (uVar11 = uVar11 + (uVar11 >> 2), uVar11 == 0)) {
        if (lVar26 == 0) {
          *(undefined4 *)(plVar6 + 2) = 0;
        }
        else {
          if (s_free == (undefined *)0x0) {
            (*(code *)s_realloc)(lVar26,0);
          }
          else {
            (*(code *)s_free)();
          }
          *plVar6 = 0;
          lVar20 = *(long *)this;
          *(undefined4 *)(plVar6 + 2) = 0;
        }
        goto LAB_0011d7fc;
      }
      if (uVar11 * (int)plVar6[1] == 0) {
        if (lVar26 != 0) {
          if (s_free == (undefined *)0x0) goto LAB_0011d7bd;
          (*(code *)s_free)();
          lVar20 = *(long *)this;
        }
        *plVar6 = 0;
        *(uint *)(plVar6 + 2) = uVar11;
        goto LAB_0011d7fc;
      }
LAB_0011d7bd:
      lVar26 = (*(code *)s_realloc)();
      *plVar6 = lVar26;
      *(uint *)(plVar6 + 2) = uVar11;
    }
    if (lVar26 != 0) {
      memcpy((void *)(lVar26 + (ulong)((*(int *)((long)plVar6 + 0xc) + -1) * *(uint *)(plVar6 + 1)))
             ,&local_50,(ulong)*(uint *)(plVar6 + 1));
    }
    lVar20 = *(long *)this;
LAB_0011d7fc:
    lVar26 = (ulong)(uint)(iVar10 * 3) * 4;
    do {
      lVar16 = plVar6[3];
      local_4c = *(uint *)(*(long *)(lVar20 + 0x68) + lVar26);
      *(uint *)(*(long *)(lVar20 + 0xb0) + (ulong)local_4c * 4) = uVar9;
      uVar11 = *(int *)((long)plVar6 + 0x24) + 1;
      *(uint *)((long)plVar6 + 0x24) = uVar11;
      if (*(uint *)(plVar6 + 5) < uVar11) {
        if ((*(uint *)(plVar6 + 5) == 0) || (uVar11 = uVar11 + (uVar11 >> 2), uVar11 != 0)) {
          if (uVar11 * (int)plVar6[4] != 0) {
LAB_0011d885:
            lVar16 = (*(code *)s_realloc)();
            *(uint *)(plVar6 + 5) = uVar11;
            plVar6[3] = lVar16;
            goto LAB_0011d898;
          }
          if (lVar16 != 0) {
            if (s_free == (undefined *)0x0) goto LAB_0011d885;
            (*(code *)s_free)();
          }
          plVar6[3] = 0;
          *(uint *)(plVar6 + 5) = uVar11;
        }
        else {
          if (lVar16 != 0) {
            if (s_free == (undefined *)0x0) {
              (*(code *)s_realloc)(lVar16,0);
            }
            else {
              (*(code *)s_free)();
            }
            plVar6[3] = 0;
          }
          *(undefined4 *)(plVar6 + 5) = 0;
        }
      }
      else {
LAB_0011d898:
        if (lVar16 != 0) {
          memcpy((void *)(lVar16 + (ulong)((*(int *)((long)plVar6 + 0x24) + -1) *
                                          *(uint *)(plVar6 + 4))),&local_4c,
                 (ulong)*(uint *)(plVar6 + 4));
        }
      }
      lVar26 = lVar26 + 4;
      if (lVar26 == (uVar15 * 3 + 3) * 4) goto LAB_0011d8d0;
      lVar20 = *(long *)this;
    } while( true );
  }
  goto LAB_0011d8e9;
LAB_0011d8d0:
  bVar30 = true;
  fVar31 = *pfVar1;
  fVar32 = pfVar1[1];
LAB_0011d8e9:
  uVar11 = *(uint *)(*(long *)(this + 0x40) + uVar24 * 4);
  if (uVar11 == 0xffffffff) goto LAB_0011d921;
  while( true ) {
    uVar24 = (ulong)uVar11;
    pfVar22 = (float *)(*(long *)(this + 0x28) + uVar24 * 8);
    if ((fVar31 == *pfVar22) && (fVar32 == pfVar22[1])) break;
    uVar11 = *(uint *)(*(long *)(this + 0x40) + uVar24 * 4);
    if (uVar11 == 0xffffffff) goto LAB_0011d921;
  }
  goto LAB_0011d6a0;
LAB_0011da3c:
  local_6c = uVar23;
  if (!bVar30) goto LAB_0011da4a;
  goto LAB_0011d5ab;
LAB_0011d35c:
  Array<unsigned_int>::zeroOutMemory((Array<unsigned_int> *)(this + 0x60));
  if (2 < uVar23) {
    uVar25 = 0;
    do {
      if (**(char **)(this + 8) != '\0') break;
      puVar4 = *(undefined1 **)(this + 8);
      LOCK();
      *(int *)(puVar4 + 0x18) = *(int *)(puVar4 + 0x18) + 1;
      UNLOCK();
      if (*(long *)(puVar4 + 8) != 0) {
        fVar31 = ((float)*(uint *)(puVar4 + 0x18) / (float)*(uint *)(puVar4 + 0x1c)) * __LC35;
        if ((float)((uint)fVar31 & _LC37) < _LC36) {
          fVar31 = (float)((uint)((float)(int)fVar31 +
                                 (float)(-(uint)((float)(int)fVar31 < fVar31) & _LC4)) |
                          ~_LC37 & (uint)fVar31);
        }
        uVar23 = (uint)(long)fVar31;
        if (uVar23 != *(uint *)(puVar4 + 0x20)) {
          uVar9 = *(uint *)(puVar4 + 0x20);
          do {
            if (uVar23 <= uVar9) break;
            LOCK();
            uVar27 = *(uint *)(puVar4 + 0x20);
            bVar30 = uVar9 == uVar27;
            if (bVar30) {
              *(uint *)(puVar4 + 0x20) = uVar23;
              uVar27 = uVar9;
            }
            uVar9 = uVar27;
            UNLOCK();
          } while (!bVar30);
          cVar8 = (**(code **)(puVar4 + 8))
                            (*(undefined4 *)(puVar4 + 4),*(undefined4 *)(puVar4 + 0x20),
                             *(undefined8 *)(puVar4 + 0x10));
          if (cVar8 == '\0') {
            LOCK();
            *puVar4 = 1;
            UNLOCK();
          }
        }
      }
      uVar24 = (uVar25 & 0xffffffff) >> 5;
      uVar23 = 1 << ((byte)uVar25 & 0x1f);
      if (((uVar23 & *(uint *)(*(long *)(this + 0x60) + uVar24 * 4)) == 0) &&
         (lVar17 = *(long *)this, (uVar23 & *(uint *)(*(long *)(lVar17 + 0x38) + uVar24 * 4)) == 0))
      {
        uVar9 = *(uint *)(lVar17 + 0xa4);
        lVar14 = 0;
        do {
          uVar27 = *(uint *)(*(long *)(lVar17 + 0xb0) +
                            (ulong)*(uint *)(*(long *)(lVar17 + 0x68) + uVar25 * 0xc + lVar14 * 4) *
                            4);
          if (uVar27 != 0xffffffff && uVar9 != uVar27) goto LAB_0011da4a;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 3);
        local_48 = (undefined1 (*) [16])(*(code *)s_realloc)(0,0x38);
        uVar7 = _LC18;
        *local_48 = (undefined1  [16])0x0;
        local_48[2] = (undefined1  [16])0x0;
        *(undefined8 *)(*local_48 + 8) = uVar7;
        *(undefined8 *)local_48[2] = uVar7;
        *(undefined8 *)local_48[3] = 0;
        local_48[1] = (undefined1  [16])0x0;
        ArrayBase::push_back((uchar *)(*(long *)this + 0x98));
        lVar17 = *(long *)this;
        iVar10 = *(int *)(lVar17 + 0x5c);
        if (iVar10 != 0) {
          iVar10 = *(int *)(*(long *)(lVar17 + 0x50) + uVar25 * 4);
        }
        lVar17 = *(long *)(lVar17 + 0x98);
        puVar29 = (uint *)(uVar24 * 4 + *(long *)(this + 0x60));
        *(int *)local_48[3] = iVar10;
        puVar5 = *(uchar **)(lVar17 + (ulong)uVar9 * 8);
        lVar17 = (ulong)uVar9 * 8;
        *puVar29 = *puVar29 | uVar23;
        iVar10 = 0;
        local_50 = (int)uVar25;
        ArrayBase::push_back(puVar5);
        do {
          uVar23 = local_50 * 3 + iVar10;
          iVar10 = iVar10 + 1;
          local_4c = *(uint *)(*(long *)(*(long *)this + 0x68) + (ulong)uVar23 * 4);
          *(uint *)(*(long *)(*(long *)this + 0xb0) + (ulong)local_4c * 4) = uVar9;
          ArrayBase::push_back(puVar5 + 0x18);
        } while (iVar10 != 3);
        local_6c = 0;
LAB_0011d5ab:
        uVar23 = *(uint *)(*local_48 + 0xc);
        if (local_6c < uVar23) {
          bVar30 = false;
          lVar14 = (ulong)local_6c * 4;
          do {
            uVar27 = *(int *)(*(long *)*local_48 + lVar14) * 3;
            uVar28 = uVar27 + 3;
            do {
              pfVar1 = (float *)(*(long *)(*(long *)this + 0x80) +
                                (ulong)*(uint *)(*(long *)(*(long *)this + 0x68) + (ulong)uVar27 * 4
                                                ) * 8);
              if (*(long *)(this + 0x20) != 0) {
                uVar11 = 0x1505;
                pfVar22 = pfVar1;
                do {
                  bVar2 = *(byte *)pfVar22;
                  pfVar22 = (float *)((long)pfVar22 + 1);
                  uVar11 = uVar11 * 0x1003f + (uint)bVar2;
                } while (pfVar22 != pfVar1 + 2);
                uVar11 = *(uint *)(*(long *)(this + 0x20) +
                                  (ulong)(uVar11 & *(int *)(this + 0x18) - 1U) * 4);
                fVar31 = *pfVar1;
                fVar32 = pfVar1[1];
                if (uVar11 != 0xffffffff) {
                  do {
                    uVar24 = (ulong)uVar11;
                    pfVar22 = (float *)(*(long *)(this + 0x28) + uVar24 * 8);
                    if ((fVar31 == *pfVar22) && (fVar32 == pfVar22[1])) goto LAB_0011d6a0;
                    uVar11 = *(uint *)(*(long *)(this + 0x40) + uVar24 * 4);
                  } while (uVar11 != 0xffffffff);
                }
              }
LAB_0011d921:
              uVar27 = uVar27 + 1;
            } while (uVar27 != uVar28);
            if (lVar14 == ((ulong)((uVar23 - 1) - local_6c) + (ulong)local_6c) * 4)
            goto LAB_0011da3c;
            lVar14 = lVar14 + 4;
          } while( true );
        }
      }
LAB_0011da4a:
      uVar25 = uVar25 + 1;
    } while ((uint)uVar25 < local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011dbc2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* xatlas::internal::HashMap<unsigned int, xatlas::internal::PassthroughHash<unsigned int>,
   xatlas::internal::Equal<unsigned int> >::~HashMap() */

void __thiscall
xatlas::internal::
HashMap<unsigned_int,xatlas::internal::PassthroughHash<unsigned_int>,xatlas::internal::Equal<unsigned_int>>
::~HashMap(HashMap<unsigned_int,xatlas::internal::PassthroughHash<unsigned_int>,xatlas::internal::Equal<unsigned_int>>
           *this)

{
  long lVar1;
  char *in_RCX;
  int in_EDX;
  int in_R8D;
  
  if (*(void **)(this + 0x10) != (void *)0x0) {
    Realloc(*(void **)(this + 0x10),0,in_EDX,in_RCX,in_R8D);
  }
  if (*(long *)(this + 0x30) != 0) {
    if (s_free != (undefined *)0x0) {
      (*(code *)s_free)();
      lVar1 = *(long *)(this + 0x18);
      goto joined_r0x0011dc31;
    }
    (*(code *)s_realloc)(*(long *)(this + 0x30),0);
  }
  lVar1 = *(long *)(this + 0x18);
joined_r0x0011dc31:
  if (lVar1 == 0) {
    return;
  }
  if ((code *)s_free != (code *)0x0) {
    (*(code *)s_free)();
    return;
  }
  (*(code *)s_realloc)(lVar1,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::param::Chart::Chart(xatlas::internal::Basis const&,
   xatlas::internal::segment::ChartGeneratorType::Enum, xatlas::internal::ConstArrayView<unsigned
   int>, xatlas::internal::Mesh const*, unsigned int, unsigned int) */

void __thiscall
xatlas::internal::param::Chart::Chart
          (Chart *this,undefined8 *param_1,undefined4 param_3,void *param_4,uint param_5,
          float *param_6)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  Mesh *this_00;
  Vector2 *pVVar9;
  void *pvVar10;
  void *pvVar11;
  char *pcVar12;
  uint *puVar13;
  char *pcVar14;
  undefined4 uVar15;
  float fVar16;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar17;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  ulong uVar18;
  ulong uVar19;
  void *pvVar20;
  int iVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  void *pvVar25;
  long in_FS_OFFSET;
  uint local_104;
  uint local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  float local_e4;
  uint local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  float local_c0;
  void *local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined4 local_98;
  float local_94;
  uint local_90;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  float local_70;
  void *local_68;
  undefined8 local_60;
  float local_58;
  uint local_4c [3];
  long local_40;
  
  uVar19 = _LC18;
  uVar22 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x34) = param_3;
  *(undefined8 *)this = uVar22;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar5;
  *(undefined4 *)(this + 0x20) = uVar15;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 2;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(ulong *)(this + 0x48) = uVar19;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(ulong *)(this + 0x60) = uVar19;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(ulong *)(this + 0x78) = uVar19;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(ulong *)(this + 0x90) = uVar19;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 8;
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xb8] = (Chart)0x0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  this[0xe0] = (Chart)0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  ArrayBase::resize((uint)(this + 0x58),SUB41(param_5,0));
  if (((*(void **)(this + 0x58) != (void *)0x0) && (param_4 != (void *)0x0)) && (param_5 != 0)) {
    memcpy(*(void **)(this + 0x58),param_4,(ulong)(param_5 * *(int *)(this + 0x60)));
  }
  fVar2 = (float)(param_5 * 3);
  fVar16 = param_6[0x19];
  if ((uint)fVar2 <= (uint)param_6[0x19]) {
    fVar16 = fVar2;
  }
  this_00 = (Mesh *)(*(code *)s_realloc)(0,0x168);
  pcVar14 = (char *)0x0;
  uVar22 = 0xffffffff;
  Mesh::Mesh(this_00,*param_6,(uint)fVar16,param_5,0,0xffffffff);
  local_e8 = 4;
  *(Mesh **)(this + 0x28) = this_00;
  local_e0 = 0;
  local_c8 = uVar19;
  local_c0 = 0.0;
  local_b8 = (void *)0x0;
  local_b0 = uVar19;
  local_a8 = 0.0;
  local_98 = 4;
  local_90 = 0;
  local_78 = uVar19;
  local_70 = 0.0;
  local_68 = (void *)0x0;
  local_60 = uVar19;
  local_58 = 0.0;
  local_d8 = (undefined1  [16])0x0;
  local_88 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_e4 = fVar16;
  local_94 = fVar16;
  ArrayBase::resize((int)this + 0x40,SUB41(fVar2,0));
  iVar21 = (int)uVar22;
  if (param_5 == 0) {
    Mesh::createBoundaries(*(Mesh **)(this + 0x28));
    if (*(int *)(this + 0x34) == 1) {
      *(undefined4 *)(this + 0x30) = 0;
      pvVar20 = (void *)0x0;
      pvVar11 = (void *)0x0;
      HashMap<unsigned_int,xatlas::internal::PassthroughHash<unsigned_int>,xatlas::internal::Equal<unsigned_int>>
      ::~HashMap((HashMap<unsigned_int,xatlas::internal::PassthroughHash<unsigned_int>,xatlas::internal::Equal<unsigned_int>>
                  *)&local_98);
      iVar17 = extraout_EDX_07;
      goto LAB_0011e557;
    }
    pvVar20 = (void *)0x0;
    pvVar11 = (void *)0x0;
    pvVar10 = (void *)0x0;
    iVar17 = extraout_EDX_06;
LAB_0011e516:
    if (local_88 != (void *)0x0) {
      Realloc(local_88,0,iVar17,pcVar14,iVar21);
      iVar17 = extraout_EDX_00;
    }
    Realloc(local_68,0,iVar17,pcVar14,iVar21);
    Realloc(pvStack_80,0,extraout_EDX_01,pcVar14,iVar21);
    iVar17 = extraout_EDX_02;
  }
  else {
    pvVar10 = (void *)0x0;
    pvVar11 = (void *)0x0;
    pvVar25 = pvVar10;
    do {
      pcVar14 = (char *)((long)pvVar25 * 4);
      lVar24 = 0;
      do {
        local_104 = *(uint *)(*(long *)(param_6 + 0x10) +
                             (ulong)(uint)(*(int *)(pcVar14 + *(long *)(this + 0x58)) * 3 +
                                          (int)lVar24) * 4);
        pVVar9 = (Vector2 *)(ulong)local_104;
        uVar8 = *(uint *)(*(long *)(param_6 + 0x2e) + (long)pVVar9 * 4);
        pcVar12 = pcVar14;
        local_100 = uVar8;
        if (((*(int *)(this + 0x34) == 0) && (uVar8 != local_104)) &&
           (cVar6 = equal((Vector2 *)(ulong)uVar8,pVVar9,
                          *(float *)(*(long *)(param_6 + 0x22) + (long)pVVar9 * 8)), cVar6 == '\0'))
        {
          uVar8 = (uint)pVVar9;
          local_100 = uVar8;
        }
        fVar16 = local_e4;
        if (pvVar10 == (void *)0x0) {
          local_fc = 0xffffffff;
          uVar7 = nextPowerOfTwo((uint)local_e4);
          uVar8 = (uint)(long)((double)(uint)fVar16 * __LC34);
          if (uVar7 < uVar8) {
            uVar7 = nextPowerOfTwo(uVar8);
          }
          uVar19 = (ulong)uVar7 << 2;
          local_e0 = uVar7;
          pvVar10 = (void *)Realloc((void *)0x0,uVar19,(int)uVar19,pcVar12,(int)uVar22);
          local_d8._0_8_ = pvVar10;
          if (uVar7 != 0) {
            memset(pvVar10,0xff,uVar19);
          }
          if ((uint)local_c0 < (uint)fVar16) {
            ArrayBase::setArrayCapacity((int)local_d8 + 8);
            fVar16 = local_e4;
          }
          if ((uint)local_a8 < (uint)fVar16) {
            ArrayBase::setArrayCapacity((uint)&local_b8);
            lVar23 = (ulong)(local_e0 - 1 & local_100) << 2;
          }
          else {
            lVar23 = (ulong)(local_e0 - 1 & local_100) << 2;
          }
        }
        else {
          uVar19 = (ulong)(local_e0 - 1 & uVar8);
          lVar23 = uVar19 * 4;
          local_fc = *(uint *)((long)pvVar10 + uVar19 * 4);
          if (local_fc != 0xffffffff) {
            do {
              if (*(uint *)(local_d8._8_8_ + (ulong)local_fc * 4) == uVar8) goto LAB_0011dfc1;
              local_fc = *(uint *)((long)local_b8 + (ulong)local_fc * 4);
            } while (local_fc != 0xffffffff);
          }
          local_fc = 0xffffffff;
        }
        ArrayBase::push_back(local_d8 + 8);
        ArrayBase::push_back((uchar *)&local_b8);
        lVar1 = *(long *)(this + 0x28);
        pvVar10 = (void *)local_d8._0_8_;
        *(int *)(local_d8._0_8_ + lVar23) = local_b0._4_4_ + -1;
        local_f0 = 0;
        local_f8 = 0;
        local_fc = local_c8._4_4_ - 1;
        ArrayBase::push_back((uchar *)(lVar1 + 0x58));
        if ((*(byte *)(lVar1 + 4) & 2) != 0) {
          ArrayBase::push_back((uchar *)(lVar1 + 0x70));
        }
        ArrayBase::push_back((uchar *)(lVar1 + 0x88));
        pVVar9 = (Vector2 *)(ulong)local_104;
LAB_0011dfc1:
        fVar16 = local_94;
        if (pvVar11 == (void *)0x0) {
          pcVar12 = (char *)(ulong)(uint)local_94;
          uVar7 = nextPowerOfTwo((uint)local_94);
          uVar8 = (uint)(long)((double)((ulong)pcVar12 & 0xffffffff) * __LC34);
          if (uVar7 < uVar8) {
            uVar7 = nextPowerOfTwo(uVar8);
          }
          local_90 = uVar7;
          local_88 = (void *)Realloc((void *)0x0,(ulong)uVar7 * 4,uVar7,pcVar12,(int)uVar22);
          if (uVar7 != 0) {
            memset(local_88,0xff,(ulong)uVar7 * 4);
          }
          if ((uint)local_70 < (uint)fVar16) {
            ArrayBase::setArrayCapacity((uint)&pvStack_80);
            fVar16 = local_94;
          }
          if ((uint)local_58 < (uint)fVar16) {
            ArrayBase::setArrayCapacity((uint)&local_68);
            lVar23 = (ulong)(local_90 - 1 & local_104) * 4;
            puVar13 = (uint *)((long)local_88 + lVar23);
          }
          else {
            lVar23 = (ulong)(local_90 - 1 & local_104) * 4;
            puVar13 = (uint *)((long)local_88 + lVar23);
          }
        }
        else {
          lVar23 = (ulong)(local_90 - 1 & (uint)pVVar9) * 4;
          puVar13 = (uint *)((long)pvVar11 + lVar23);
          uVar8 = *puVar13;
          uVar18 = (ulong)uVar8;
          uVar19 = uVar18;
          while (uVar8 != 0xffffffff) {
            pvVar11 = local_68;
            pvVar20 = pvStack_80;
            if (*(uint *)((long)pvStack_80 + uVar19 * 4) == (uint)pVVar9) goto LAB_0011e02d;
            uVar8 = *(uint *)((long)local_68 + uVar19 * 4);
            uVar19 = (ulong)uVar8;
          }
        }
        iVar21 = local_78._4_4_;
        fVar16 = (float)(local_78._4_4_ + 1);
        local_78 = CONCAT44(fVar16,(int)local_78);
        if ((uint)local_70 < (uint)fVar16) {
          if ((local_70 == 0.0) ||
             (fVar16 = (float)((int)fVar16 + ((uint)fVar16 >> 2)), fVar16 != 0.0)) {
            pvStack_80 = (void *)Realloc(pvStack_80,(ulong)(uint)((int)fVar16 * (int)local_78),
                                         (int)fVar16,(char *)puVar13,(int)uVar22);
            local_70 = fVar16;
            goto LAB_0011e1f1;
          }
          if (pvStack_80 == (void *)0x0) {
            local_70 = 0.0;
          }
          else {
            Realloc(pvStack_80,0,0,(char *)puVar13,(int)uVar22);
            pvStack_80 = (void *)0x0;
            local_70 = 0.0;
          }
        }
        else {
LAB_0011e1f1:
          if (pvStack_80 != (void *)0x0) {
            memcpy((void *)((long)pvStack_80 + (ulong)(uint)(iVar21 * (int)local_78)),&local_104,
                   local_78 & 0xffffffff);
          }
        }
        ArrayBase::push_back((uchar *)&local_68);
        pvVar11 = local_88;
        *(int *)((long)local_88 + lVar23) = local_60._4_4_ + -1;
        ArrayBase::push_back((uchar *)(this + 0x70));
        ArrayBase::push_back((uchar *)(this + 0x88));
        *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
        pVVar9 = (Vector2 *)(ulong)local_104;
        if (pvVar11 != (void *)0x0) {
          uVar8 = *(uint *)((long)pvVar11 + (ulong)(local_90 - 1 & local_104) * 4);
          pvVar11 = local_68;
          pvVar20 = pvStack_80;
          while (uVar18 = (ulong)uVar8, uVar8 != 0xffffffff) {
LAB_0011e02d:
            uVar15 = (undefined4)uVar18;
            if ((int)pVVar9 == *(int *)((long)pvVar20 + uVar18 * 4)) goto LAB_0011e035;
            uVar8 = *(uint *)((long)pvVar11 + uVar18 * 4);
          }
        }
        uVar15 = 0xffffffff;
LAB_0011e035:
        *(undefined4 *)(*(long *)(this + 0x40) + (ulong)(uint)((int)lVar24 + (int)pvVar25 * 3) * 4)
             = uVar15;
        if (pvVar10 == (void *)0x0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(uint *)((long)pvVar10 + (ulong)(local_e0 - 1 & local_100) * 4);
          if (uVar8 != 0xffffffff) {
            do {
              if (local_100 == *(uint *)(local_d8._8_8_ + (ulong)uVar8 * 4)) break;
              uVar8 = *(uint *)((long)local_b8 + (ulong)uVar8 * 4);
            } while (uVar8 != 0xffffffff);
          }
        }
        local_4c[lVar24] = uVar8;
        lVar24 = lVar24 + 1;
        pvVar11 = local_88;
      } while (lVar24 != 3);
      pcVar14 = (char *)0xffffffff;
      Mesh::addFace(*(uint **)(this + 0x28),SUB81(local_4c,0),0);
      pvVar20 = local_b8;
      iVar21 = (int)uVar22;
      pvVar25 = (void *)((long)pvVar25 + 1);
      pvVar11 = local_88;
    } while (pvVar25 != (void *)(ulong)param_5);
    pvVar11 = (void *)local_d8._8_8_;
    Mesh::createBoundaries(*(Mesh **)(this + 0x28));
    iVar17 = extraout_EDX;
    if (*(int *)(this + 0x34) != 1) goto LAB_0011e516;
    *(undefined4 *)(this + 0x30) = 0;
    HashMap<unsigned_int,xatlas::internal::PassthroughHash<unsigned_int>,xatlas::internal::Equal<unsigned_int>>
    ::~HashMap((HashMap<unsigned_int,xatlas::internal::PassthroughHash<unsigned_int>,xatlas::internal::Equal<unsigned_int>>
                *)&local_98);
    iVar17 = extraout_EDX_05;
  }
  if (pvVar10 != (void *)0x0) {
    Realloc(pvVar10,0,iVar17,pcVar14,iVar21);
    iVar17 = extraout_EDX_03;
  }
LAB_0011e557:
  Realloc(pvVar20,0,iVar17,pcVar14,iVar21);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Realloc(pvVar11,0,extraout_EDX_04,pcVar14,iVar21);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::param::runCreateAndParameterizeChartTask(void*, void*) */

void xatlas::internal::param::runCreateAndParameterizeChartTask(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  void *pvVar6;
  int iVar7;
  char cVar8;
  Chart *pCVar9;
  long lVar10;
  char *pcVar11;
  int extraout_EDX;
  PiecewiseParam *this;
  ulong unaff_RBP;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint *in_FS_OFFSET;
  bool bVar15;
  float fVar16;
  ulong local_70;
  Chart *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 10);
  pCVar9 = (Chart *)(*(code *)s_realloc)(0,0xe8);
                    /* WARNING: Load size is inaccurate */
  Chart::Chart(pCVar9,*param_2,*(undefined4 *)((long)param_2 + 0x28),
               *(undefined8 *)((long)param_2 + 0x38),*(undefined8 *)((long)param_2 + 0x40),
               *(undefined8 *)((long)param_2 + 0x30),*(undefined4 *)((long)param_2 + 0x48),
               *(undefined4 *)((long)param_2 + 0x4c));
  *(Chart **)((long)param_2 + 8) = pCVar9;
  Chart::parameterize(pCVar9,*(UniformGrid2 **)((long)param_1 + 0x18));
  lVar3 = *(long *)((long)param_2 + 8);
  if (*(char *)(lVar3 + 0xe0) != '\0') {
    pcVar4 = *(char **)(lVar3 + 0x28);
    uVar14 = *(uint *)(pcVar4 + 0x4c);
    this = (PiecewiseParam *)((ulong)*in_FS_OFFSET * 0x1c8 + **(long **)((long)param_1 + 0x20));
    *(char **)this = pcVar4;
    iVar2 = *(int *)(pcVar4 + 100);
    iVar7 = (int)this;
    ArrayBase::resize(iVar7 + 8,SUB41(iVar2,0));
    if (*(uint *)(this + 0x80) < uVar14 / 3) {
      ArrayBase::setArrayCapacity(iVar7 + 0x70);
    }
    if (*(uint *)(this + 0x50) < uVar14 / 3) {
      ArrayBase::setArrayCapacity(iVar7 + 0x40);
    }
    uVar13 = uVar14 / 3;
    *(uint *)(this + 0x20) = uVar13;
    bVar15 = SUB41(uVar14 / 3 + 0x1f >> 5,0);
    ArrayBase::resize(iVar7 + 0x28,bVar15);
    if ((*(void **)(this + 0x28) != (void *)0x0) && (*(int *)(this + 0x34) != 0)) {
      memset(*(void **)(this + 0x28),0,(ulong)(uint)(*(int *)(this + 0x34) * *(int *)(this + 0x30)))
      ;
    }
    *(uint *)(this + 200) = uVar13;
    ArrayBase::resize(iVar7 + 0xd0,bVar15);
    *(uint *)(this + 0x88) = uVar13;
    ArrayBase::resize(iVar7 + 0x90,bVar15);
    *(int *)(this + 0xa8) = iVar2;
    ArrayBase::resize(iVar7 + 0xb0,SUB41(iVar2 + 0x1fU >> 5,0));
    ArrayBase::resize(iVar7 + 0x58,SUB41(uVar13,0));
LAB_0011e8a1:
    cVar8 = PiecewiseParam::computeChart(this);
    if (cVar8 != '\0') {
      do {
        pCVar9 = (Chart *)(*(code *)s_realloc)(0,0xe8);
        uVar12 = *(undefined8 *)(this + 0x70);
        local_70 = local_70 & 0xffffffff00000000 | (ulong)*(uint *)(this + 0x14);
        unaff_RBP = unaff_RBP & 0xffffffff00000000 | (ulong)*(uint *)(this + 0x7c);
        pcVar11 = pcVar4;
        Chart::Chart(pCVar9,(ulong)*in_FS_OFFSET * 0x30 + **(long **)((long)param_1 + 0x10),lVar3,
                     pcVar4,uVar12,unaff_RBP,*(undefined8 *)(this + 8),local_70,
                     *(undefined8 *)((long)param_2 + 0x30));
        uVar14 = *(int *)((long)param_2 + 0x1c) + 1;
        *(uint *)((long)param_2 + 0x1c) = uVar14;
        local_48 = pCVar9;
        if (*(uint *)((long)param_2 + 0x20) < uVar14) {
          pvVar6 = *(void **)((long)param_2 + 0x10);
          if ((*(uint *)((long)param_2 + 0x20) != 0) &&
             (uVar14 = uVar14 + (uVar14 >> 2), uVar14 == 0)) {
            if (pvVar6 != (void *)0x0) {
              Realloc(pvVar6,0,extraout_EDX,pcVar11,(int)uVar12);
              *(undefined8 *)((long)param_2 + 0x10) = 0;
            }
            *(undefined4 *)((long)param_2 + 0x20) = 0;
            goto LAB_0011e8a1;
          }
          lVar10 = Realloc(pvVar6,(ulong)(uVar14 * *(int *)((long)param_2 + 0x18)),extraout_EDX,
                           pcVar11,(int)uVar12);
          *(uint *)((long)param_2 + 0x20) = uVar14;
          *(long *)((long)param_2 + 0x10) = lVar10;
        }
        else {
          lVar10 = *(long *)((long)param_2 + 0x10);
        }
        if (lVar10 == 0) goto LAB_0011e8a1;
        memcpy((void *)(lVar10 + (ulong)((*(int *)((long)param_2 + 0x1c) + -1) *
                                        *(uint *)((long)param_2 + 0x18))),&local_48,
               (ulong)*(uint *)((long)param_2 + 0x18));
        cVar8 = PiecewiseParam::computeChart(this);
        if (cVar8 == '\0') break;
      } while( true );
    }
                    /* WARNING: Load size is inaccurate */
    puVar5 = *param_1;
    LOCK();
    *(int *)(puVar5 + 0x18) = *(int *)(puVar5 + 0x18) + *(int *)((long)param_2 + 0x40);
    UNLOCK();
    if (*(long *)(puVar5 + 8) != 0) {
      fVar16 = ((float)*(uint *)(puVar5 + 0x18) / (float)*(uint *)(puVar5 + 0x1c)) * __LC35;
      if ((float)((uint)fVar16 & _LC37) < _LC36) {
        fVar16 = (float)((uint)((float)(int)fVar16 +
                               (float)(-(uint)((float)(int)fVar16 < fVar16) & _LC4)) |
                        ~_LC37 & (uint)fVar16);
      }
      uVar14 = (uint)(long)fVar16;
      if (uVar14 != *(uint *)(puVar5 + 0x20)) {
        uVar13 = *(uint *)(puVar5 + 0x20);
        do {
          if (uVar14 <= uVar13) break;
          LOCK();
          uVar1 = *(uint *)(puVar5 + 0x20);
          bVar15 = uVar13 == uVar1;
          if (bVar15) {
            *(uint *)(puVar5 + 0x20) = uVar14;
            uVar1 = uVar13;
          }
          uVar13 = uVar1;
          UNLOCK();
        } while (!bVar15);
        cVar8 = (**(code **)(puVar5 + 8))
                          (*(undefined4 *)(puVar5 + 4),*(undefined4 *)(puVar5 + 0x20),
                           *(undefined8 *)(puVar5 + 0x10));
        if (cVar8 == '\0') {
          LOCK();
          *puVar5 = 1;
          UNLOCK();
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* xatlas::internal::ThreadLocal<xatlas::internal::segment::Atlas>::ThreadLocal() */

void xatlas::internal::ThreadLocal<xatlas::internal::segment::Atlas>::ThreadLocal(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char *in_RCX;
  int extraout_EDX;
  undefined8 *in_RDI;
  int in_R8D;
  
  uVar9 = std::thread::hardware_concurrency();
  puVar10 = (undefined8 *)Realloc((void *)0x0,(ulong)uVar9 * 0x380,extraout_EDX,in_RCX,in_R8D);
  *in_RDI = puVar10;
  uVar8 = _LC32;
  uVar7 = _LC31;
  uVar6 = _LC21;
  uVar5 = _LC18;
  uVar4 = _UNK_001205f8;
  uVar3 = __LC129;
  uVar2 = _UNK_001205e8;
  uVar1 = __LC128;
  if (uVar9 != 0) {
    puVar11 = puVar10;
    do {
      *puVar11 = 0;
      *(undefined2 *)((long)puVar11 + 0x2c) = 0;
      *(undefined4 *)(puVar11 + 5) = 1;
      puVar11[8] = uVar5;
      *(undefined4 *)(puVar11 + 9) = 0;
      puVar11[10] = 0;
      puVar11[0xb] = uVar5;
      *(undefined4 *)(puVar11 + 0xc) = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = uVar5;
      *(undefined4 *)(puVar11 + 0xf) = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = uVar5;
      *(undefined4 *)(puVar11 + 0x12) = 0;
      puVar11[0x13] = 0;
      puVar11[0x14] = uVar7;
      *(undefined4 *)(puVar11 + 0x15) = 0;
      *(undefined4 *)(puVar11 + 0x16) = 0;
      puVar11[0x17] = 0;
      puVar11[0x18] = uVar5;
      *(undefined4 *)(puVar11 + 0x19) = 0;
      puVar11[0x1a] = puVar11;
      puVar11[0x1b] = 0;
      puVar11[0x1c] = uVar8;
      *(undefined4 *)(puVar11 + 0x1d) = 0;
      puVar11[0x1e] = 0;
      puVar11[0x1f] = uVar6;
      *(undefined4 *)(puVar11 + 0x20) = 0;
      puVar11[0x21] = 0;
      puVar11[1] = uVar1;
      puVar11[2] = uVar2;
      puVar11[3] = uVar3;
      puVar11[4] = uVar4;
      *(undefined1 (*) [16])(puVar11 + 6) = (undefined1  [16])0x0;
      puVar11[0x22] = uVar5;
      *(undefined4 *)(puVar11 + 0x23) = 0;
      puVar11[0x24] = 0;
      puVar11[0x25] = uVar7;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      puVar11[0x27] = puVar11;
      puVar11[0x28] = 0;
      puVar11[0x29] = uVar5;
      *(undefined4 *)(puVar11 + 0x2a) = 0;
      puVar11[0x2b] = 0;
      puVar11[0x2c] = uVar5;
      *(undefined4 *)(puVar11 + 0x2d) = 0;
      puVar11[0x2e] = 0;
      puVar11[0x2f] = uVar5;
      *(undefined4 *)(puVar11 + 0x30) = 0;
      puVar11[0x31] = 0;
      puVar11[0x32] = uVar5;
      *(undefined4 *)(puVar11 + 0x33) = 0;
      puVar11[0x34] = 0;
      puVar11[0x35] = uVar8;
      *(undefined4 *)(puVar11 + 0x36) = 0;
      puVar11[0x37] = 0;
      puVar11[0x38] = uVar5;
      *(undefined4 *)(puVar11 + 0x39) = 0;
      puVar11[0x3a] = 0;
      puVar11[0x3b] = uVar6;
      *(undefined4 *)(puVar11 + 0x3c) = 0;
      puVar11[0x3d] = puVar11;
      puVar12 = puVar11 + 0x70;
      puVar11[0x3e] = puVar11 + 0x27;
      puVar11[0x3f] = 0;
      puVar11[0x40] = uVar8;
      *(undefined4 *)(puVar11 + 0x41) = 0;
      puVar11[0x43] = 0;
      puVar11[0x44] = uVar5;
      *(undefined4 *)(puVar11 + 0x45) = 0;
      puVar11[0x46] = 0;
      puVar11[0x47] = uVar8;
      *(undefined4 *)(puVar11 + 0x48) = 0;
      *(undefined4 *)(puVar11 + 0x49) = 10;
      puVar11[0x4a] = 0;
      puVar11[0x4b] = uVar8;
      *(undefined4 *)(puVar11 + 0x4c) = 0;
      puVar11[0x4d] = 0;
      puVar11[0x4e] = uVar7;
      *(undefined4 *)(puVar11 + 0x4f) = 0;
      puVar11[0x50] = 0;
      puVar11[0x51] = uVar5;
      *(undefined4 *)(puVar11 + 0x52) = 0;
      puVar11[0x53] = 0;
      *(undefined4 *)(puVar11 + 0x54) = 0;
      puVar11[0x55] = 0;
      *(undefined4 *)(puVar11 + 0x56) = 0;
      puVar11[0x5a] = 0;
      puVar11[0x5b] = uVar5;
      *(undefined4 *)(puVar11 + 0x5c) = 0;
      puVar11[0x5d] = 0;
      puVar11[0x5e] = uVar5;
      *(undefined4 *)(puVar11 + 0x5f) = 0;
      puVar11[0x60] = 0;
      puVar11[0x61] = uVar5;
      *(undefined4 *)(puVar11 + 0x62) = 0;
      puVar11[99] = 0;
      puVar11[100] = uVar5;
      *(undefined4 *)(puVar11 + 0x65) = 0;
      puVar11[0x66] = 0;
      puVar11[0x67] = uVar5;
      *(undefined4 *)(puVar11 + 0x68) = 0;
      puVar11[0x69] = 0;
      puVar11[0x6a] = uVar5;
      *(undefined4 *)(puVar11 + 0x6b) = 0;
      puVar11[0x6c] = 0;
      puVar11[0x6d] = uVar5;
      *(undefined4 *)(puVar11 + 0x6e) = 0;
      *(undefined1 *)(puVar11 + 0x6f) = 0;
      puVar11 = puVar12;
    } while (puVar12 != puVar10 + (ulong)uVar9 * 0x70);
  }
  return;
}



/* xatlas::internal::ThreadLocal<xatlas::internal::segment::Atlas>::~ThreadLocal() */

void __thiscall
xatlas::internal::ThreadLocal<xatlas::internal::segment::Atlas>::~ThreadLocal
          (ThreadLocal<xatlas::internal::segment::Atlas> *this)

{
  long lVar1;
  uint uVar2;
  char *in_RCX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  int extraout_EDX_20;
  int extraout_EDX_21;
  int extraout_EDX_22;
  int extraout_EDX_23;
  int extraout_EDX_24;
  int extraout_EDX_25;
  int extraout_EDX_26;
  int extraout_EDX_27;
  int extraout_EDX_28;
  int extraout_EDX_29;
  int extraout_EDX_30;
  int extraout_EDX_31;
  int extraout_EDX_32;
  int extraout_EDX_33;
  int extraout_EDX_34;
  int iVar3;
  int extraout_EDX_35;
  int extraout_EDX_36;
  int extraout_EDX_37;
  int extraout_EDX_38;
  int extraout_EDX_39;
  int extraout_EDX_40;
  int extraout_EDX_41;
  int extraout_EDX_42;
  int extraout_EDX_43;
  int extraout_EDX_44;
  int extraout_EDX_45;
  int extraout_EDX_46;
  long lVar4;
  long lVar5;
  int in_R8D;
  long lVar6;
  long lVar7;
  
  uVar2 = std::thread::hardware_concurrency();
  iVar3 = extraout_EDX;
  if (uVar2 != 0) {
    lVar7 = 0;
    do {
      lVar4 = *(long *)this + lVar7;
      if (*(uint *)(lVar4 + 0x23c) != 0) {
        lVar6 = (ulong)*(uint *)(lVar4 + 0x23c) << 3;
        lVar5 = 0;
        do {
          while( true ) {
            lVar1 = *(long *)(*(long *)(lVar4 + 0x230) + lVar5);
            if (*(long *)(lVar1 + 0x80) != 0) {
              if (s_free == (undefined *)0x0) {
                (*(code *)s_realloc)();
                iVar3 = extraout_EDX_00;
              }
              else {
                (*(code *)s_free)();
                iVar3 = extraout_EDX_04;
              }
            }
            if (*(long *)(lVar1 + 0x60) != 0) {
              if (s_free == (undefined *)0x0) {
                (*(code *)s_realloc)();
                iVar3 = extraout_EDX_01;
              }
              else {
                (*(code *)s_free)();
                iVar3 = extraout_EDX_37;
              }
            }
            if (*(long *)(lVar1 + 0x48) != 0) {
              if (s_free == (undefined *)0x0) {
                (*(code *)s_realloc)();
                iVar3 = extraout_EDX_02;
              }
              else {
                (*(code *)s_free)();
                iVar3 = extraout_EDX_05;
              }
            }
            if (*(long *)(*(long *)(lVar4 + 0x230) + lVar5) != 0) break;
LAB_0011efda:
            lVar5 = lVar5 + 8;
            if (lVar6 == lVar5) goto LAB_0011f02b;
          }
          if (s_free == (undefined *)0x0) {
            (*(code *)s_realloc)();
            iVar3 = extraout_EDX_03;
            goto LAB_0011efda;
          }
          (*(code *)s_free)();
          lVar5 = lVar5 + 8;
          iVar3 = extraout_EDX_06;
        } while (lVar6 != lVar5);
      }
LAB_0011f02b:
      Realloc(*(void **)(lVar4 + 0x360),0,iVar3,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x348),0,extraout_EDX_07,in_RCX,in_R8D);
      iVar3 = extraout_EDX_08;
      if (*(long *)(lVar4 + 0x330) != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          iVar3 = extraout_EDX_09;
        }
        else {
          (*(code *)s_free)();
          iVar3 = extraout_EDX_40;
        }
      }
      if (*(long *)(lVar4 + 0x318) != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          iVar3 = extraout_EDX_10;
        }
        else {
          (*(code *)s_free)();
          iVar3 = extraout_EDX_41;
        }
      }
      Realloc(*(void **)(lVar4 + 0x300),0,iVar3,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x2e8),0,extraout_EDX_11,in_RCX,in_R8D);
      iVar3 = extraout_EDX_12;
      if (*(long *)(lVar4 + 0x2d0) != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          iVar3 = extraout_EDX_13;
        }
        else {
          (*(code *)s_free)();
          iVar3 = extraout_EDX_42;
        }
      }
      Realloc(*(void **)(lVar4 + 0x280),0,iVar3,in_RCX,in_R8D);
      iVar3 = extraout_EDX_14;
      if (*(long *)(lVar4 + 0x268) != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          iVar3 = extraout_EDX_15;
        }
        else {
          (*(code *)s_free)();
          iVar3 = extraout_EDX_43;
        }
      }
      Realloc(*(void **)(lVar4 + 0x250),0,iVar3,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x230),0,extraout_EDX_16,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x218),0,extraout_EDX_17,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x1f8),0,extraout_EDX_18,in_RCX,in_R8D);
      iVar3 = extraout_EDX_19;
      if (*(long *)(lVar4 + 0x1d0) != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          iVar3 = extraout_EDX_20;
        }
        else {
          (*(code *)s_free)();
          iVar3 = extraout_EDX_44;
        }
      }
      Realloc(*(void **)(lVar4 + 0x1b8),0,iVar3,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x1a0),0,extraout_EDX_21,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x188),0,extraout_EDX_22,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x170),0,extraout_EDX_23,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x158),0,extraout_EDX_24,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x140),0,extraout_EDX_25,in_RCX,in_R8D);
      iVar3 = extraout_EDX_26;
      if (*(long *)(lVar4 + 0x120) != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          iVar3 = extraout_EDX_27;
        }
        else {
          (*(code *)s_free)();
          iVar3 = extraout_EDX_45;
        }
      }
      Realloc(*(void **)(lVar4 + 0x108),0,iVar3,in_RCX,in_R8D);
      iVar3 = extraout_EDX_28;
      if (*(long *)(lVar4 + 0xf0) != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          iVar3 = extraout_EDX_29;
        }
        else {
          (*(code *)s_free)();
          iVar3 = extraout_EDX_46;
        }
      }
      if (*(long *)(lVar4 + 0xd8) != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          iVar3 = extraout_EDX_30;
        }
        else {
          (*(code *)s_free)();
          iVar3 = extraout_EDX_38;
        }
      }
      Realloc(*(void **)(lVar4 + 0xb8),0,iVar3,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x98),0,extraout_EDX_31,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x80),0,extraout_EDX_32,in_RCX,in_R8D);
      iVar3 = extraout_EDX_33;
      if (*(long *)(lVar4 + 0x68) != 0) {
        if (s_free == (undefined *)0x0) {
          (*(code *)s_realloc)();
          iVar3 = extraout_EDX_34;
        }
        else {
          (*(code *)s_free)();
          iVar3 = extraout_EDX_39;
        }
      }
      lVar7 = lVar7 + 0x380;
      Realloc(*(void **)(lVar4 + 0x50),0,iVar3,in_RCX,in_R8D);
      Realloc(*(void **)(lVar4 + 0x38),0,extraout_EDX_35,in_RCX,in_R8D);
      iVar3 = extraout_EDX_36;
    } while ((ulong)uVar2 * 0x380 != lVar7);
  }
  Realloc(*(void **)this,0,iVar3,in_RCX,in_R8D);
  return;
}



/* xatlas::internal::param::Atlas::computeCharts(xatlas::internal::TaskScheduler*,
   xatlas::ChartOptions const&, bool (*)(xatlas::ProgressCategory, int, void*), void*) */

bool __thiscall
xatlas::internal::param::Atlas::computeCharts
          (Atlas *this,TaskScheduler *param_1,ChartOptions *param_2,
          _func_bool_ProgressCategory_int_void_ptr *param_3,void *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  int extraout_EDX;
  int iVar17;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  long *plVar18;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar19;
  undefined8 extraout_RDX_02;
  long extraout_RDX_03;
  long lVar20;
  int iVar21;
  long lVar22;
  long in_FS_OFFSET;
  long local_1b0;
  ArrayBase *local_1a0;
  long local_190;
  uint local_16c;
  ThreadLocal<xatlas::internal::segment::Atlas> local_168 [8];
  undefined8 *local_160;
  undefined8 *local_158;
  char *local_150;
  code *local_148;
  long local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  _func_bool_ProgressCategory_int_void_ptr *local_f0;
  void *local_e8;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  ThreadLocal<xatlas::internal::segment::Atlas> *local_c8;
  ChartOptions *local_c0;
  undefined8 *local_b8;
  TaskScheduler *local_b0;
  undefined8 **local_a8;
  undefined8 **local_a0;
  char **local_98;
  long local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  long local_40;
  undefined8 extraout_RDX;
  
  uVar6 = *(uint *)(this + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar6 == 0) {
    local_dc = 0;
  }
  else {
    plVar18 = *(long **)this;
    local_dc = 0;
    plVar8 = plVar18 + uVar6;
    do {
      lVar20 = *plVar18;
      plVar18 = plVar18 + 1;
      local_dc = local_dc + *(uint *)(lVar20 + 0x4c) / 3;
    } while (plVar18 != plVar8);
    local_dc = local_dc * 2;
  }
  local_f8 = 0x100000000;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = param_3;
  local_e8 = param_4;
  if ((param_3 != (_func_bool_ProgressCategory_int_void_ptr *)0x0) &&
     (bVar4 = (*param_3)(1,0,param_4), !bVar4)) {
    LOCK();
    local_f8 = CONCAT71(local_f8._1_7_,1);
    UNLOCK();
  }
  this[0x48] = (Atlas)0x0;
  if (*(int *)(this + 0x3c) != 0) {
    local_190 = 0;
    lVar20 = *(long *)(this + 0x30);
    do {
      local_1b0 = 0;
      lVar7 = local_190 * 0x18;
      plVar8 = (long *)(lVar7 + lVar20);
      if (*(int *)((long)plVar8 + 0xc) != 0) {
        do {
          lVar20 = *(long *)(*plVar8 + local_1b0 * 8);
          param_4 = (void *)(ulong)*(uint *)(lVar20 + 0x44);
          lVar11 = *(long *)(lVar20 + 0x38);
          if (*(uint *)(lVar20 + 0x44) != 0) {
            lVar22 = 0;
            do {
              while( true ) {
                lVar11 = *(long *)(lVar11 + lVar22 * 8);
                lVar3 = *(long *)(lVar11 + 0x28);
                if (lVar3 != 0) {
                  if (*(long *)(lVar3 + 0x130) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)(*(long *)(lVar3 + 0x130),0);
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0x150) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0x138) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0x108) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0xf0) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0xd8) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0xb8) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0xa0) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0x88) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0x70) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0x58) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0x40) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0x28) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar3 + 0x10) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  if (*(long *)(lVar11 + 0x28) != 0) {
                    if (s_free == (undefined *)0x0) {
                      (*(code *)s_realloc)();
                    }
                    else {
                      (*(code *)s_free)();
                    }
                  }
                  *(undefined8 *)(lVar11 + 0x28) = 0;
                }
                if (*(long *)(lVar11 + 0xa0) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                if (*(long *)(lVar11 + 0x88) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                if (*(long *)(lVar11 + 0x70) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                if (*(long *)(lVar11 + 0x58) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                if (*(long *)(lVar11 + 0x40) != 0) {
                  if (s_free == (undefined *)0x0) {
                    (*(code *)s_realloc)();
                  }
                  else {
                    (*(code *)s_free)();
                  }
                }
                lVar11 = *(long *)(lVar20 + 0x38);
                lVar3 = *(long *)(lVar11 + lVar22 * 8);
                if (lVar3 != 0) break;
LAB_0011f53e:
                lVar22 = lVar22 + 1;
                if (*(uint *)(lVar20 + 0x44) <= (uint)lVar22) goto LAB_0011f817;
              }
              if (s_free == (undefined *)0x0) {
                (*(code *)s_realloc)(lVar3);
                lVar11 = *(long *)(lVar20 + 0x38);
                goto LAB_0011f53e;
              }
              lVar22 = lVar22 + 1;
              (*(code *)s_free)(lVar3);
              lVar11 = *(long *)(lVar20 + 0x38);
            } while ((uint)lVar22 < *(uint *)(lVar20 + 0x44));
          }
LAB_0011f817:
          if (lVar11 != 0) {
            if (s_free == (undefined *)0x0) {
              (*(code *)s_realloc)(lVar11,0);
            }
            else {
              (*(code *)s_free)();
            }
          }
          if (*(long *)(lVar20 + 0x20) != 0) {
            if (s_free == (undefined *)0x0) {
              (*(code *)s_realloc)(*(long *)(lVar20 + 0x20),0);
            }
            else {
              (*(code *)s_free)();
            }
          }
          lVar20 = *(long *)(this + 0x30);
          plVar8 = (long *)(lVar7 + lVar20);
          if (*(long *)(*plVar8 + local_1b0 * 8) != 0) {
            if (s_free == (undefined *)0x0) {
              (*(code *)s_realloc)();
              lVar20 = *(long *)(this + 0x30);
              plVar8 = (long *)(lVar7 + lVar20);
            }
            else {
              (*(code *)s_free)();
              lVar20 = *(long *)(this + 0x30);
              plVar8 = (long *)(lVar7 + lVar20);
            }
          }
          local_1b0 = local_1b0 + 1;
        } while ((uint)local_1b0 < *(uint *)((long)plVar8 + 0xc));
      }
      *(undefined4 *)((long)plVar8 + 0xc) = 0;
      local_190 = local_190 + 1;
    } while ((uint)local_190 < *(uint *)(this + 0x3c));
    if ((uVar6 != *(uint *)(this + 0x3c)) && (param_4 = s_print, s_print != (undefined *)0x0)) {
      (*(code *)s_print)("\rASSERT: %s %s %d\n","m_meshChartGroups.size() == meshCount",
                         "thirdparty/xatlas/xatlas.cpp",0x1eeb);
    }
  }
  bVar4 = SUB41(uVar6,0);
  ArrayBase::resize((int)this + 0x30,bVar4);
  uVar19 = _LC32;
  pcVar16 = (char *)(ulong)*(uint *)(this + 0x3c);
  if (*(uint *)(this + 0x3c) != 0) {
    lVar20 = 0;
    pcVar16 = (char *)0x0;
    do {
      uVar15 = (int)pcVar16 + 1;
      pcVar16 = (char *)(ulong)uVar15;
      puVar9 = (undefined8 *)(*(long *)(this + 0x30) + lVar20);
      lVar20 = lVar20 + 0x18;
      *puVar9 = 0;
      puVar9[1] = uVar19;
      *(undefined4 *)(puVar9 + 2) = 0;
    } while (uVar15 < *(uint *)(this + 0x3c));
  }
  ArrayBase::resize((int)this + 0x18,bVar4);
  uVar19 = _LC18;
  if (*(int *)(this + 0x24) != 0) {
    pcVar16 = (char *)0x0;
    uVar15 = 0;
    do {
      uVar15 = uVar15 + 1;
      pcVar10 = pcVar16 + *(long *)(this + 0x18);
      pcVar16 = pcVar16 + 0x48;
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10[4] = '\0';
      pcVar10[5] = '\0';
      pcVar10[6] = '\0';
      pcVar10[7] = '\0';
      *(undefined8 *)(pcVar10 + 8) = uVar19;
      pcVar10[0x10] = '\0';
      pcVar10[0x11] = '\0';
      pcVar10[0x12] = '\0';
      pcVar10[0x13] = '\0';
      pcVar10[0x18] = '\0';
      pcVar10[0x19] = '\0';
      pcVar10[0x1a] = '\0';
      pcVar10[0x1b] = '\0';
      pcVar10[0x1c] = '\0';
      pcVar10[0x1d] = '\0';
      pcVar10[0x1e] = '\0';
      pcVar10[0x1f] = '\0';
      *(undefined8 *)(pcVar10 + 0x20) = uVar19;
      pcVar10[0x28] = '\0';
      pcVar10[0x29] = '\0';
      pcVar10[0x2a] = '\0';
      pcVar10[0x2b] = '\0';
      pcVar10[0x30] = '\0';
      pcVar10[0x31] = '\0';
      pcVar10[0x32] = '\0';
      pcVar10[0x33] = '\0';
      pcVar10[0x34] = '\0';
      pcVar10[0x35] = '\0';
      pcVar10[0x36] = '\0';
      pcVar10[0x37] = '\0';
      *(undefined8 *)(pcVar10 + 0x38) = uVar19;
      pcVar10[0x40] = '\0';
      pcVar10[0x41] = '\0';
      pcVar10[0x42] = '\0';
      pcVar10[0x43] = '\0';
    } while (uVar15 < *(uint *)(this + 0x24));
  }
  local_138 = 0;
  local_130 = 0x18;
  local_128 = 0;
  ArrayBase::resize((uint)(ArrayBase *)&local_138,bVar4);
  if (uVar6 == 0) {
    local_118 = 0;
    local_110 = uVar19;
    local_108 = 0;
    ArrayBase::resize((uint)&local_118,false);
  }
  else {
    puVar9 = *(undefined8 **)this;
    lVar20 = *(long *)(this + 0x30);
    lVar7 = *(long *)(this + 0x18);
    lVar11 = 0;
    param_4 = puVar9 + uVar6;
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      *(long *)(local_138 + 0x10 + lVar11) = lVar7;
      lVar7 = lVar7 + 0x48;
      *(undefined8 *)(local_138 + lVar11) = uVar2;
      ((undefined8 *)(local_138 + lVar11))[1] = lVar20 + lVar11;
      lVar11 = lVar11 + 0x18;
    } while ((undefined8 *)param_4 != puVar9);
    local_118 = 0;
    local_110 = uVar19;
    local_108 = 0;
    ArrayBase::resize((uint)&local_118,bVar4);
    pcVar16 = *(char **)this;
    uVar12 = 0;
    do {
      *(float *)(local_118 + uVar12 * 4) = (float)*(uint *)(*(long *)(pcVar16 + uVar12 * 8) + 0x4c);
      uVar12 = uVar12 + 1;
    } while (uVar6 != uVar12);
  }
  local_1a0 = (ArrayBase *)&local_118;
  local_78 = 0;
  local_70 = uVar19;
  local_68 = 0;
  local_60 = 0;
  local_58 = uVar19;
  local_50 = 0;
  local_48 = 0;
  RadixSort::sort(local_88,local_118,local_110._4_4_);
  ThreadLocal<xatlas::internal::segment::Atlas>::ThreadLocal();
  uVar15 = std::thread::hardware_concurrency();
  uVar12 = (ulong)uVar15 * 0xb0;
  local_160 = (undefined8 *)Realloc((void *)0x0,uVar12,(int)uVar12,pcVar16,(int)param_4);
  puVar9 = local_160;
  if (uVar15 != 0) {
    do {
      *puVar9 = 0;
      puVar13 = puVar9 + 0x16;
      puVar9[1] = uVar19;
      *(undefined4 *)(puVar9 + 2) = 0;
      puVar9[3] = 0;
      *(undefined4 *)(puVar9 + 4) = 0;
      puVar9[5] = 0;
      *(undefined4 *)(puVar9 + 6) = 0;
      puVar9[10] = 0;
      puVar9[0xb] = uVar19;
      *(undefined4 *)(puVar9 + 0xc) = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = uVar19;
      *(undefined4 *)(puVar9 + 0xf) = 0;
      puVar9[0x10] = 0;
      puVar9[0x11] = uVar19;
      *(undefined4 *)(puVar9 + 0x12) = 0;
      puVar9[0x13] = 0;
      puVar9[0x14] = uVar19;
      *(undefined4 *)(puVar9 + 0x15) = 0;
      puVar9 = puVar13;
    } while (local_160 + (ulong)uVar15 * 0x16 != puVar13);
  }
  uVar15 = std::thread::hardware_concurrency();
  uVar12 = (ulong)uVar15 * 0x30;
  local_158 = (undefined8 *)Realloc((void *)0x0,uVar12,(int)uVar12,pcVar16,(int)param_4);
  puVar9 = local_158;
  if (uVar15 != 0) {
    do {
      *puVar9 = 0;
      puVar13 = puVar9 + 6;
      puVar9[1] = uVar19;
      *(undefined4 *)(puVar9 + 2) = 0;
      puVar9[3] = 0;
      puVar9[4] = uVar19;
      *(undefined4 *)(puVar9 + 5) = 0;
      puVar9 = puVar13;
    } while (puVar13 != local_158 + (ulong)uVar15 * 6);
  }
  uVar15 = std::thread::hardware_concurrency();
  uVar12 = (long)(ulong)uVar15 * 0x1c8;
  local_150 = (char *)Realloc((void *)0x0,uVar12,extraout_EDX,(char *)(ulong)uVar15,(int)param_4);
  uVar2 = _LC32;
  pcVar16 = local_150 + uVar12;
  pcVar10 = local_150;
  if (uVar15 != 0) {
    do {
      pcVar10[8] = '\0';
      pcVar10[9] = '\0';
      pcVar10[10] = '\0';
      pcVar10[0xb] = '\0';
      pcVar10[0xc] = '\0';
      pcVar10[0xd] = '\0';
      pcVar10[0xe] = '\0';
      pcVar10[0xf] = '\0';
      pcVar14 = pcVar10 + 0x1c8;
      *(undefined8 *)(pcVar10 + 0x10) = uVar2;
      pcVar10[0x18] = '\0';
      pcVar10[0x19] = '\0';
      pcVar10[0x1a] = '\0';
      pcVar10[0x1b] = '\0';
      pcVar10[0x20] = '\0';
      pcVar10[0x21] = '\0';
      pcVar10[0x22] = '\0';
      pcVar10[0x23] = '\0';
      pcVar10[0x28] = '\0';
      pcVar10[0x29] = '\0';
      pcVar10[0x2a] = '\0';
      pcVar10[0x2b] = '\0';
      pcVar10[0x2c] = '\0';
      pcVar10[0x2d] = '\0';
      pcVar10[0x2e] = '\0';
      pcVar10[0x2f] = '\0';
      *(undefined8 *)(pcVar10 + 0x30) = uVar19;
      pcVar10[0x38] = '\0';
      pcVar10[0x39] = '\0';
      pcVar10[0x3a] = '\0';
      pcVar10[0x3b] = '\0';
      pcVar10[0x40] = '\0';
      pcVar10[0x41] = '\0';
      pcVar10[0x42] = '\0';
      pcVar10[0x43] = '\0';
      pcVar10[0x44] = '\0';
      pcVar10[0x45] = '\0';
      pcVar10[0x46] = '\0';
      pcVar10[0x47] = '\0';
      *(undefined8 *)(pcVar10 + 0x48) = uVar2;
      pcVar10[0x50] = '\0';
      pcVar10[0x51] = '\0';
      pcVar10[0x52] = '\0';
      pcVar10[0x53] = '\0';
      pcVar10[0x58] = '\0';
      pcVar10[0x59] = '\0';
      pcVar10[0x5a] = '\0';
      pcVar10[0x5b] = '\0';
      pcVar10[0x5c] = '\0';
      pcVar10[0x5d] = '\0';
      pcVar10[0x5e] = '\0';
      pcVar10[0x5f] = '\0';
      *(undefined8 *)(pcVar10 + 0x60) = uVar2;
      pcVar10[0x68] = '\0';
      pcVar10[0x69] = '\0';
      pcVar10[0x6a] = '\0';
      pcVar10[0x6b] = '\0';
      pcVar10[0x70] = '\0';
      pcVar10[0x71] = '\0';
      pcVar10[0x72] = '\0';
      pcVar10[0x73] = '\0';
      pcVar10[0x74] = '\0';
      pcVar10[0x75] = '\0';
      pcVar10[0x76] = '\0';
      pcVar10[0x77] = '\0';
      *(undefined8 *)(pcVar10 + 0x78) = uVar19;
      pcVar10[0x80] = '\0';
      pcVar10[0x81] = '\0';
      pcVar10[0x82] = '\0';
      pcVar10[0x83] = '\0';
      pcVar10[0x88] = '\0';
      pcVar10[0x89] = '\0';
      pcVar10[0x8a] = '\0';
      pcVar10[0x8b] = '\0';
      pcVar10[0x90] = '\0';
      pcVar10[0x91] = '\0';
      pcVar10[0x92] = '\0';
      pcVar10[0x93] = '\0';
      pcVar10[0x94] = '\0';
      pcVar10[0x95] = '\0';
      pcVar10[0x96] = '\0';
      pcVar10[0x97] = '\0';
      *(undefined8 *)(pcVar10 + 0x98) = uVar19;
      pcVar10[0xa0] = '\0';
      pcVar10[0xa1] = '\0';
      pcVar10[0xa2] = '\0';
      pcVar10[0xa3] = '\0';
      pcVar10[0xa8] = '\0';
      pcVar10[0xa9] = '\0';
      pcVar10[0xaa] = '\0';
      pcVar10[0xab] = '\0';
      pcVar10[0xb0] = '\0';
      pcVar10[0xb1] = '\0';
      pcVar10[0xb2] = '\0';
      pcVar10[0xb3] = '\0';
      pcVar10[0xb4] = '\0';
      pcVar10[0xb5] = '\0';
      pcVar10[0xb6] = '\0';
      pcVar10[0xb7] = '\0';
      *(undefined8 *)(pcVar10 + 0xb8) = uVar19;
      pcVar10[0xc0] = '\0';
      pcVar10[0xc1] = '\0';
      pcVar10[0xc2] = '\0';
      pcVar10[0xc3] = '\0';
      pcVar10[200] = '\0';
      pcVar10[0xc9] = '\0';
      pcVar10[0xca] = '\0';
      pcVar10[0xcb] = '\0';
      pcVar10[0xd0] = '\0';
      pcVar10[0xd1] = '\0';
      pcVar10[0xd2] = '\0';
      pcVar10[0xd3] = '\0';
      pcVar10[0xd4] = '\0';
      pcVar10[0xd5] = '\0';
      pcVar10[0xd6] = '\0';
      pcVar10[0xd7] = '\0';
      *(undefined8 *)(pcVar10 + 0xd8) = uVar19;
      pcVar10[0xe0] = '\0';
      pcVar10[0xe1] = '\0';
      pcVar10[0xe2] = '\0';
      pcVar10[0xe3] = '\0';
      pcVar10[0xe8] = '\0';
      pcVar10[0xe9] = '\0';
      pcVar10[0xea] = '\0';
      pcVar10[0xeb] = '\0';
      pcVar10[0xec] = '\0';
      pcVar10[0xed] = '\0';
      pcVar10[0xee] = '\0';
      pcVar10[0xef] = '\0';
      *(undefined8 *)(pcVar10 + 0xf0) = uVar19;
      pcVar10[0xf8] = '\0';
      pcVar10[0xf9] = '\0';
      pcVar10[0xfa] = '\0';
      pcVar10[0xfb] = '\0';
      pcVar10[0x100] = '\0';
      pcVar10[0x101] = '\0';
      pcVar10[0x102] = '\0';
      pcVar10[0x103] = '\0';
      pcVar10[0x104] = '\0';
      pcVar10[0x105] = '\0';
      pcVar10[0x106] = '\0';
      pcVar10[0x107] = '\0';
      pcVar10[0x108] = '\0';
      pcVar10[0x109] = '\0';
      pcVar10[0x10a] = '\0';
      pcVar10[0x10b] = '\0';
      pcVar10[0x110] = '\0';
      pcVar10[0x111] = '\0';
      pcVar10[0x112] = '\0';
      pcVar10[0x113] = '\0';
      pcVar10[0x114] = '\0';
      pcVar10[0x115] = '\0';
      pcVar10[0x116] = '\0';
      pcVar10[0x117] = '\0';
      pcVar10[0x118] = '\0';
      pcVar10[0x119] = '\0';
      pcVar10[0x11a] = '\0';
      pcVar10[0x11b] = '\0';
      pcVar10[0x138] = '\0';
      pcVar10[0x139] = '\0';
      pcVar10[0x13a] = '\0';
      pcVar10[0x13b] = '\0';
      pcVar10[0x13c] = '\0';
      pcVar10[0x13d] = '\0';
      pcVar10[0x13e] = '\0';
      pcVar10[0x13f] = '\0';
      *(undefined8 *)(pcVar10 + 0x140) = uVar19;
      pcVar10[0x148] = '\0';
      pcVar10[0x149] = '\0';
      pcVar10[0x14a] = '\0';
      pcVar10[0x14b] = '\0';
      pcVar10[0x150] = '\0';
      pcVar10[0x151] = '\0';
      pcVar10[0x152] = '\0';
      pcVar10[0x153] = '\0';
      pcVar10[0x154] = '\0';
      pcVar10[0x155] = '\0';
      pcVar10[0x156] = '\0';
      pcVar10[0x157] = '\0';
      *(undefined8 *)(pcVar10 + 0x158) = uVar19;
      pcVar10[0x160] = '\0';
      pcVar10[0x161] = '\0';
      pcVar10[0x162] = '\0';
      pcVar10[0x163] = '\0';
      pcVar10[0x168] = '\0';
      pcVar10[0x169] = '\0';
      pcVar10[0x16a] = '\0';
      pcVar10[0x16b] = '\0';
      pcVar10[0x16c] = '\0';
      pcVar10[0x16d] = '\0';
      pcVar10[0x16e] = '\0';
      pcVar10[0x16f] = '\0';
      *(undefined8 *)(pcVar10 + 0x170) = uVar19;
      pcVar10[0x178] = '\0';
      pcVar10[0x179] = '\0';
      pcVar10[0x17a] = '\0';
      pcVar10[0x17b] = '\0';
      pcVar10[0x180] = '\0';
      pcVar10[0x181] = '\0';
      pcVar10[0x182] = '\0';
      pcVar10[0x183] = '\0';
      pcVar10[0x184] = '\0';
      pcVar10[0x185] = '\0';
      pcVar10[0x186] = '\0';
      pcVar10[0x187] = '\0';
      *(undefined8 *)(pcVar10 + 0x188) = uVar19;
      pcVar10[400] = '\0';
      pcVar10[0x191] = '\0';
      pcVar10[0x192] = '\0';
      pcVar10[0x193] = '\0';
      pcVar10[0x198] = '\0';
      pcVar10[0x199] = '\0';
      pcVar10[0x19a] = '\0';
      pcVar10[0x19b] = '\0';
      pcVar10[0x19c] = '\0';
      pcVar10[0x19d] = '\0';
      pcVar10[0x19e] = '\0';
      pcVar10[0x19f] = '\0';
      *(undefined8 *)(pcVar10 + 0x1a0) = uVar19;
      pcVar10[0x1a8] = '\0';
      pcVar10[0x1a9] = '\0';
      pcVar10[0x1aa] = '\0';
      pcVar10[0x1ab] = '\0';
      pcVar10[0x1b0] = '\0';
      pcVar10[0x1b1] = '\0';
      pcVar10[0x1b2] = '\0';
      pcVar10[0x1b3] = '\0';
      pcVar10[0x1b4] = '\0';
      pcVar10[0x1b5] = '\0';
      pcVar10[0x1b6] = '\0';
      pcVar10[0x1b7] = '\0';
      *(undefined8 *)(pcVar10 + 0x1b8) = uVar19;
      pcVar10[0x1c0] = '\0';
      pcVar10[0x1c1] = '\0';
      pcVar10[0x1c2] = '\0';
      pcVar10[0x1c3] = '\0';
      pcVar10 = pcVar14;
    } while (pcVar16 != pcVar14);
  }
  local_b8 = &local_f8;
  local_a8 = &local_160;
  local_a0 = &local_158;
  local_98 = &local_150;
  local_c8 = local_168;
  local_c0 = param_2;
  local_b0 = param_1;
  local_16c = TaskScheduler::createTaskGroup(param_1,(uint)&local_c8);
  while (uVar6 != 0) {
    uVar6 = uVar6 - 1;
    local_148 = runMeshComputeChartsTask;
    local_140 = local_138 + (ulong)*(uint *)(local_88[0] + (ulong)uVar6 * 4) * 0x18;
    lVar20 = *(long *)param_1 + (ulong)local_16c * 0x38;
    do {
      LOCK();
      cVar1 = *(char *)(lVar20 + 0x24);
      *(char *)(lVar20 + 0x24) = '\x01';
      UNLOCK();
    } while (cVar1 != '\0');
    ArrayBase::push_back((uchar *)(lVar20 + 8));
    *(undefined1 *)(lVar20 + 0x24) = 0;
    LOCK();
    *(int *)(lVar20 + 0x28) = *(int *)(lVar20 + 0x28) + 1;
    UNLOCK();
    lVar20 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      do {
        LOCK();
        *(undefined1 *)(*(long *)(param_1 + 8) + 0x60 + lVar20 * 0x68) = 1;
        UNLOCK();
        lVar20 = lVar20 + 1;
        std::condition_variable::notify_one();
      } while ((uint)lVar20 < *(uint *)(param_1 + 0x14));
    }
  }
  TaskScheduler::wait(*(TaskScheduler **)param_1,(TaskGroupHandle *)&local_16c);
  bVar4 = (char)local_f8 == '\0';
  if (bVar4) {
    this[0x48] = (Atlas)0x1;
  }
  uVar6 = std::thread::hardware_concurrency();
  iVar17 = (int)extraout_RDX;
  if (uVar6 != 0) {
    uVar19 = extraout_RDX;
    lVar20 = 0;
    do {
      pcVar10 = local_150;
      lVar7 = lVar20 + 0x1c8;
      Realloc(*(void **)(local_150 + lVar20 + 0x1b0),0,(int)uVar19,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x198),0,extraout_EDX_00,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x180),0,extraout_EDX_01,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x168),0,extraout_EDX_02,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x150),0,extraout_EDX_03,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x138),0,extraout_EDX_04,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0xe8),0,extraout_EDX_05,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0xd0),0,extraout_EDX_06,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0xb0),0,extraout_EDX_07,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x90),0,extraout_EDX_08,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x70),0,extraout_EDX_09,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x58),0,extraout_EDX_10,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x40),0,extraout_EDX_11,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 0x28),0,extraout_EDX_12,pcVar16,(int)param_4);
      Realloc(*(void **)(pcVar10 + lVar20 + 8),0,extraout_EDX_13,pcVar16,(int)param_4);
      iVar17 = (int)extraout_RDX_00;
      uVar19 = extraout_RDX_00;
      lVar20 = lVar7;
    } while (lVar7 != (ulong)uVar6 * 0x1c8);
  }
  Realloc(local_150,0,iVar17,pcVar16,(int)param_4);
  uVar6 = std::thread::hardware_concurrency();
  iVar17 = (int)extraout_RDX_01;
  if (uVar6 != 0) {
    lVar20 = 0;
    uVar19 = extraout_RDX_01;
    do {
      puVar9 = (undefined8 *)((long)local_158 + lVar20);
      lVar20 = lVar20 + 0x30;
      Realloc((void *)puVar9[3],0,(int)uVar19,pcVar16,(int)param_4);
      Realloc((void *)*puVar9,0,extraout_EDX_14,pcVar16,(int)param_4);
      iVar17 = (int)extraout_RDX_02;
      uVar19 = extraout_RDX_02;
    } while (lVar20 != (ulong)uVar6 * 0x30);
  }
  Realloc(local_158,0,iVar17,pcVar16,(int)param_4);
  uVar6 = std::thread::hardware_concurrency();
  iVar21 = (int)param_4;
  iVar17 = extraout_EDX_15;
  if (uVar6 != 0) {
    lVar7 = 0;
    lVar20 = (ulong)uVar6 * 5;
    do {
      puVar9 = (undefined8 *)((long)local_160 + lVar7);
      lVar7 = lVar7 + 0xb0;
      Realloc((void *)puVar9[0x13],0,(int)lVar20,pcVar16,(int)param_4);
      Realloc((void *)puVar9[0x10],0,extraout_EDX_16,pcVar16,(int)param_4);
      Realloc((void *)puVar9[0xd],0,extraout_EDX_17,pcVar16,(int)param_4);
      Realloc((void *)puVar9[10],0,extraout_EDX_18,pcVar16,(int)param_4);
      Realloc((void *)*puVar9,0,extraout_EDX_19,pcVar16,(int)param_4);
      iVar21 = (int)param_4;
      iVar17 = (int)extraout_RDX_03;
      lVar20 = extraout_RDX_03;
    } while (lVar7 != (ulong)uVar6 * 0xb0);
  }
  Realloc(local_160,0,iVar17,pcVar16,iVar21);
  ThreadLocal<xatlas::internal::segment::Atlas>::~ThreadLocal(local_168);
  ArrayBase::~ArrayBase((ArrayBase *)&local_60);
  ArrayBase::~ArrayBase((ArrayBase *)&local_78);
  ArrayBase::~ArrayBase(local_1a0);
  ArrayBase::~ArrayBase((ArrayBase *)&local_138);
  if ((local_f0 != (_func_bool_ProgressCategory_int_void_ptr *)0x0) &&
     (bVar5 = (*local_f0)((char)((ulong)local_f8 >> 0x20),100,local_e8), !bVar5)) {
    LOCK();
    local_f8 = CONCAT71(local_f8._1_7_,1);
    UNLOCK();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::pack::Atlas::~Atlas() */

void __thiscall xatlas::internal::pack::Atlas::~Atlas(Atlas *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::param::Atlas::~Atlas() */

void __thiscall xatlas::internal::param::Atlas::~Atlas(Atlas *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::Mesh::~Mesh() */

void __thiscall xatlas::internal::Mesh::~Mesh(Mesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::param::Chart::Chart(xatlas::internal::param::ChartCtorBuffers&,
   xatlas::internal::param::Chart const*, xatlas::internal::Mesh const*,
   xatlas::internal::ConstArrayView<unsigned int>,
   xatlas::internal::ConstArrayView<xatlas::internal::Vector2>, xatlas::internal::Mesh const*) */

void __thiscall xatlas::internal::param::Chart::Chart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::TaskScheduler::TaskScheduler() */

void __thiscall xatlas::internal::TaskScheduler::TaskScheduler(TaskScheduler *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::ThreadLocal<xatlas::internal::segment::Atlas>::~ThreadLocal() */

void __thiscall
xatlas::internal::ThreadLocal<xatlas::internal::segment::Atlas>::~ThreadLocal
          (ThreadLocal<xatlas::internal::segment::Atlas> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::Mesh::Mesh(float, unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
xatlas::internal::Mesh::Mesh
          (Mesh *this,float param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::BVH::BVH(xatlas::internal::Array<xatlas::internal::AABB> const&, unsigned int)
    */

void __thiscall xatlas::internal::BVH::BVH(BVH *this,Array *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::ThreadLocal<xatlas::internal::segment::Atlas>::ThreadLocal() */

void xatlas::internal::ThreadLocal<xatlas::internal::segment::Atlas>::ThreadLocal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::ArrayBase::~ArrayBase() */

void __thiscall xatlas::internal::ArrayBase::~ArrayBase(ArrayBase *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void
   (*)(xatlas::internal::TaskScheduler*, xatlas::internal::TaskScheduler::Worker*, unsigned int),
   xatlas::internal::TaskScheduler*, xatlas::internal::TaskScheduler::Worker*, unsigned int> >
   >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<void(*)(xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int),xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<void(*)(xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int),xatlas::internal::TaskScheduler*,xatlas::internal::TaskScheduler::Worker*,unsigned_int>>>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::param::Chart::Chart(xatlas::internal::Basis const&,
   xatlas::internal::segment::ChartGeneratorType::Enum, xatlas::internal::ConstArrayView<unsigned
   int>, xatlas::internal::Mesh const*, unsigned int, unsigned int) */

void __thiscall xatlas::internal::param::Chart::Chart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* xatlas::internal::HashMap<unsigned int, xatlas::internal::PassthroughHash<unsigned int>,
   xatlas::internal::Equal<unsigned int> >::~HashMap() */

void __thiscall
xatlas::internal::
HashMap<unsigned_int,xatlas::internal::PassthroughHash<unsigned_int>,xatlas::internal::Equal<unsigned_int>>
::~HashMap(HashMap<unsigned_int,xatlas::internal::PassthroughHash<unsigned_int>,xatlas::internal::Equal<unsigned_int>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


