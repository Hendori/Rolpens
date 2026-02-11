
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<unsigned short*,
   __gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,
   int, cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::Int16CompFlag&,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::VInt16<2>&, cvtt::ParallelMath::VInt16<2>&,
   cvtt::ParallelMath::VInt16<2>*, cvtt::ParallelMath::VInt16<1>*, cvtt::ParallelMath::VInt16<2>*,
   cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate> >(unsigned short*,
   unsigned short*,
   __gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,
   int, cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::Int16CompFlag&,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::VInt16<2>&, cvtt::ParallelMath::VInt16<2>&,
   cvtt::ParallelMath::VInt16<2>*, cvtt::ParallelMath::VInt16<1>*, cvtt::ParallelMath::VInt16<2>*,
   cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>) */

void std::
     __insertion_sort<unsigned_short*,__gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,int,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag&,cvtt::ParallelMath::Float&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>*,cvtt::ParallelMath::VInt16<1>*,cvtt::ParallelMath::VInt16<2>*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>>
               (ushort *param_1,ushort *param_2,long param_3,uint param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  size_t __n;
  ushort *puVar7;
  
  if (param_1 != param_2) {
    puVar7 = param_1 + 1;
    if (param_2 != puVar7) {
      lVar1 = (long)((int)param_4 >> 2) * 0x10 + (ulong)(param_4 & 3) * 4;
      do {
        uVar4 = *puVar7;
        uVar5 = *param_1;
        fVar2 = *(float *)((ulong)uVar4 * 0x20 + param_3 + lVar1);
        fVar3 = *(float *)((ulong)uVar5 * 0x20 + param_3 + lVar1);
        if ((fVar2 < fVar3) || ((puVar6 = puVar7, fVar2 <= fVar3 && (uVar4 < uVar5)))) {
          __n = (long)puVar7 - (long)param_1;
          if ((long)__n < 3) {
            if (__n == 2) {
              *puVar7 = uVar5;
            }
          }
          else {
            memmove((void *)((2 - __n) + (long)puVar7),param_1,__n);
          }
          *param_1 = uVar4;
        }
        else {
          while( true ) {
            uVar5 = puVar6[-1];
            fVar3 = *(float *)((ulong)uVar5 * 0x20 + param_3 + lVar1);
            if ((fVar3 <= fVar2) && ((fVar3 < fVar2 || (uVar5 <= uVar4)))) break;
            *puVar6 = uVar5;
            puVar6 = puVar6 + -1;
          }
          *puVar6 = uVar4;
        }
        puVar7 = puVar7 + 1;
      } while (param_2 != puVar7);
    }
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<unsigned short*, long, unsigned short,
   __gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,
   int, cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::Int16CompFlag&,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::VInt16<2>&, cvtt::ParallelMath::VInt16<2>&,
   cvtt::ParallelMath::VInt16<2>*, cvtt::ParallelMath::VInt16<1>*, cvtt::ParallelMath::VInt16<2>*,
   cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate> >(unsigned short*,
   long, long, unsigned short,
   __gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,
   int, cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::Int16CompFlag&,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::VInt16<2>&, cvtt::ParallelMath::VInt16<2>&,
   cvtt::ParallelMath::VInt16<2>*, cvtt::ParallelMath::VInt16<1>*, cvtt::ParallelMath::VInt16<2>*,
   cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>) */

void std::
     __adjust_heap<unsigned_short*,long,unsigned_short,__gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,int,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag&,cvtt::ParallelMath::Float&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>*,cvtt::ParallelMath::VInt16<1>*,cvtt::ParallelMath::VInt16<2>*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>>
               (long param_1,long param_2,ulong param_3,ushort param_4,long param_5,uint param_6)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)(param_3 - 1) / 2;
  if (param_2 < lVar10) {
    lVar7 = (ulong)(param_6 & 3) * 4;
    lVar8 = (long)((int)param_6 >> 2) * 0x10;
    lVar5 = param_2;
    do {
      while( true ) {
        lVar9 = lVar5 + 1;
        lVar5 = lVar9 * 2;
        lVar9 = lVar9 * 4;
        puVar6 = (ushort *)(param_1 + lVar9);
        uVar3 = *(ushort *)(param_1 + -2 + lVar9);
        uVar4 = *puVar6;
        fVar1 = *(float *)((ulong)uVar4 * 0x20 + param_5 + lVar8 + lVar7);
        fVar2 = *(float *)((ulong)uVar3 * 0x20 + param_5 + lVar8 + lVar7);
        if ((fVar2 <= fVar1) && ((fVar2 < fVar1 || (uVar3 <= uVar4)))) break;
        lVar9 = lVar5 + -1;
        puVar6 = (ushort *)(param_1 + lVar9 * 2);
        *(ushort *)(param_1 + -2 + lVar5) = *puVar6;
        lVar5 = lVar9;
        if (lVar10 <= lVar9) goto LAB_001001e5;
      }
      *(ushort *)(param_1 + -2 + lVar5) = uVar4;
    } while (lVar5 < lVar10);
LAB_001001e5:
    if ((param_3 & 1) == 0) goto LAB_001002b0;
  }
  else {
    puVar6 = (ushort *)(param_1 + param_2 * 2);
    lVar5 = param_2;
    if ((param_3 & 1) != 0) goto LAB_0010028e;
LAB_001002b0:
    if ((long)(param_3 - 2) / 2 == lVar5) {
      lVar10 = lVar5 * 2;
      lVar5 = lVar10 + 1;
      *puVar6 = *(ushort *)(param_1 + -2 + (lVar10 + 2) * 2);
      puVar6 = (ushort *)(param_1 + lVar5 * 2);
    }
  }
  lVar10 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
  if (param_2 < lVar5) {
    lVar8 = (ulong)(param_6 & 3) * 4;
    lVar7 = (long)((int)param_6 >> 2) * 0x10;
    fVar1 = *(float *)((ulong)param_4 * 0x20 + param_5 + lVar7 + lVar8);
    do {
      lVar9 = lVar10 >> 1;
      puVar6 = (ushort *)(param_1 + lVar9 * 2);
      uVar3 = *puVar6;
      fVar2 = *(float *)((ulong)uVar3 * 0x20 + param_5 + lVar7 + lVar8);
      if ((fVar1 <= fVar2) && ((fVar1 < fVar2 || (param_4 <= uVar3)))) {
        puVar6 = (ushort *)(param_1 + lVar5 * 2);
        break;
      }
      *(ushort *)(param_1 + lVar5 * 2) = uVar3;
      lVar10 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
      lVar5 = lVar9;
    } while (param_2 < lVar9);
  }
LAB_0010028e:
  *puVar6 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<unsigned short*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,
   int, cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::Int16CompFlag&,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::VInt16<2>&, cvtt::ParallelMath::VInt16<2>&,
   cvtt::ParallelMath::VInt16<2>*, cvtt::ParallelMath::VInt16<1>*, cvtt::ParallelMath::VInt16<2>*,
   cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate> >(unsigned short*,
   unsigned short*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,
   int, cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::Int16CompFlag&,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::VInt16<2>&, cvtt::ParallelMath::VInt16<2>&,
   cvtt::ParallelMath::VInt16<2>*, cvtt::ParallelMath::VInt16<1>*, cvtt::ParallelMath::VInt16<2>*,
   cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>) */

void std::
     __introsort_loop<unsigned_short*,long,__gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,int,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag&,cvtt::ParallelMath::Float&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>*,cvtt::ParallelMath::VInt16<1>*,cvtt::ParallelMath::VInt16<2>*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>>
               (ushort *param_1,ushort *param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  ushort *puVar10;
  ushort uVar11;
  long lVar12;
  float fVar13;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (lVar6 < 0x21) {
    return;
  }
  if (param_3 != 0) {
    lVar12 = (ulong)((uint)param_5 & 3) * 4;
    lVar9 = (long)((int)(uint)param_5 >> 2) * 0x10;
    lVar1 = lVar9 + lVar12;
    puVar10 = param_2;
    do {
      param_3 = param_3 + -1;
      uVar4 = param_1[1];
      uVar7 = (ulong)uVar4;
      uVar5 = param_1[lVar6 >> 2];
      fVar13 = *(float *)(uVar7 * 0x20 + param_4 + lVar9 + lVar12);
      fVar2 = *(float *)((ulong)uVar5 * 0x20 + param_4 + lVar1);
      puVar8 = puVar10;
      param_2 = param_1 + 1;
      if ((fVar13 < fVar2) || ((fVar13 <= fVar2 && (uVar4 < uVar5)))) {
        uVar11 = puVar10[-1];
        fVar3 = *(float *)((ulong)uVar11 * 0x20 + param_4 + lVar1);
        if ((fVar3 <= fVar2) && ((fVar3 < fVar2 || (uVar11 <= uVar5)))) {
          if ((fVar13 < fVar3) || ((fVar13 <= fVar3 && (uVar4 < uVar11)))) goto LAB_00100528;
          goto LAB_00100511;
        }
LAB_001003e7:
        uVar4 = *param_1;
        *param_1 = uVar5;
        param_1[lVar6 >> 2] = uVar4;
LAB_001003f4:
        uVar7 = (ulong)*param_1;
        fVar13 = *(float *)(uVar7 * 0x20 + param_4 + lVar9 + lVar12);
      }
      else {
        uVar11 = puVar10[-1];
        fVar3 = *(float *)((ulong)uVar11 * 0x20 + param_4 + lVar1);
        if ((fVar3 <= fVar13) && ((fVar3 < fVar13 || (uVar11 <= uVar4)))) {
          if ((fVar3 <= fVar2) && ((fVar3 < fVar2 || (uVar11 <= uVar5)))) goto LAB_001003e7;
LAB_00100528:
          uVar4 = *param_1;
          *param_1 = uVar11;
          puVar10[-1] = uVar4;
          goto LAB_001003f4;
        }
LAB_00100511:
        *(uint *)param_1 = CONCAT22(*param_1,uVar4);
      }
      while( true ) {
        while( true ) {
          uVar4 = *param_2;
          fVar2 = *(float *)((ulong)uVar4 * 0x20 + param_4 + lVar1);
          if ((fVar13 <= fVar2) && ((fVar13 < fVar2 || ((ushort)uVar7 <= uVar4)))) break;
          param_2 = param_2 + 1;
        }
        do {
          do {
            uVar5 = puVar8[-1];
            puVar8 = puVar8 + -1;
            fVar2 = *(float *)((ulong)uVar5 * 0x20 + param_4 + lVar1);
          } while (fVar13 < fVar2);
        } while ((fVar13 <= fVar2) && ((ushort)uVar7 < uVar5));
        if (puVar8 <= param_2) break;
        *param_2 = uVar5;
        *puVar8 = uVar4;
        uVar7 = (ulong)*param_1;
        fVar13 = *(float *)(uVar7 * 0x20 + param_4 + lVar1);
        param_2 = param_2 + 1;
      }
      __introsort_loop<unsigned_short*,long,__gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,int,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag&,cvtt::ParallelMath::Float&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>*,cvtt::ParallelMath::VInt16<1>*,cvtt::ParallelMath::VInt16<2>*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>>
                (param_2,puVar10,param_3,param_4,param_5);
      lVar6 = (long)param_2 - (long)param_1;
      if (lVar6 < 0x21) {
        return;
      }
      puVar10 = param_2;
    } while (param_3 != 0);
  }
  for (lVar12 = (lVar6 >> 1) + -2 >> 1;
      __adjust_heap<unsigned_short*,long,unsigned_short,__gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,int,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag&,cvtt::ParallelMath::Float&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>*,cvtt::ParallelMath::VInt16<1>*,cvtt::ParallelMath::VInt16<2>*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>>
                (param_1,lVar12,lVar6 >> 1,param_1[lVar12],param_4,param_5), lVar12 != 0;
      lVar12 = lVar12 + -1) {
  }
  do {
    param_2 = param_2 + -1;
    uVar4 = *param_2;
    *param_2 = *param_1;
    __adjust_heap<unsigned_short*,long,unsigned_short,__gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,int,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag&,cvtt::ParallelMath::Float&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>*,cvtt::ParallelMath::VInt16<1>*,cvtt::ParallelMath::VInt16<2>*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>>
              (param_1,0,(long)param_2 - (long)param_1 >> 1,uVar4,param_4,param_5);
  } while (2 < (long)param_2 - (long)param_1);
  return;
}



/* cvtt::Internal::ETCComputer::ComputeErrorUniform(cvtt::ParallelMath::VInt16<2> const*,
   cvtt::ParallelMath::VInt16<2> const*) */

ETCComputer * __thiscall
cvtt::Internal::ETCComputer::ComputeErrorUniform(ETCComputer *this,VInt16 *param_1,VInt16 *param_2)

{
  uint6 uVar1;
  uint6 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  float fVar6;
  float fVar9;
  undefined1 auVar7 [12];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  undefined1 auVar13 [12];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar23;
  undefined1 auVar21 [12];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar8 [16];
  undefined1 auVar14 [16];
  undefined1 auVar22 [16];
  
  auVar3._10_2_ = *(short *)(param_1 + 4) - *(short *)(param_2 + 4);
  auVar3._0_10_ = (unkuint10)0;
  uVar1 = CONCAT24(*(short *)(param_1 + 10) - *(short *)(param_2 + 10),
                   (uint)(ushort)(*(short *)(param_1 + 8) - *(short *)(param_2 + 8)));
  auVar13._0_10_ = (unkuint10)uVar1 << 0x10;
  auVar13._10_2_ = *(short *)(param_1 + 0xc) - *(short *)(param_2 + 0xc);
  auVar14._12_2_ = 0;
  auVar14._0_12_ = auVar13;
  auVar14._14_2_ = *(short *)(param_1 + 0xe) - *(short *)(param_2 + 0xe);
  auVar4._10_2_ = *(short *)(param_1 + 0x14) - *(short *)(param_2 + 0x14);
  auVar4._0_10_ = (unkuint10)0;
  uVar2 = CONCAT24(*(short *)(param_1 + 0x1a) - *(short *)(param_2 + 0x1a),
                   (uint)(ushort)(*(short *)(param_1 + 0x18) - *(short *)(param_2 + 0x18)));
  auVar21._0_10_ = (unkuint10)uVar2 << 0x10;
  auVar21._10_2_ = *(short *)(param_1 + 0x1c) - *(short *)(param_2 + 0x1c);
  auVar22._12_2_ = 0;
  auVar22._0_12_ = auVar21;
  auVar22._14_2_ = *(short *)(param_1 + 0x1e) - *(short *)(param_2 + 0x1e);
  fVar18 = (float)(SUB164(ZEXT616(CONCAT42(auVar3._8_4_,
                                           *(short *)(param_1 + 2) - *(short *)(param_2 + 2))) <<
                          0x30,4) >> 0x10);
  fVar19 = (float)(auVar3._8_4_ >> 0x10);
  fVar12 = (float)((int)auVar13._0_10_ >> 0x10);
  fVar15 = (float)(int)((int6)uVar1 >> 0x20);
  fVar16 = (float)(auVar13._8_4_ >> 0x10);
  fVar17 = (float)(auVar14._12_4_ >> 0x10);
  fVar28 = (float)(SUB164(ZEXT616(CONCAT42(auVar4._8_4_,
                                           *(short *)(param_1 + 0x12) - *(short *)(param_2 + 0x12)))
                          << 0x30,4) >> 0x10);
  fVar29 = (float)(auVar4._8_4_ >> 0x10);
  auVar5._10_2_ = *(short *)(param_1 + 0x24) - *(short *)(param_2 + 0x24);
  auVar5._0_10_ = (unkuint10)0;
  uVar1 = CONCAT24(*(short *)(param_1 + 0x2a) - *(short *)(param_2 + 0x2a),
                   (uint)(ushort)(*(short *)(param_1 + 0x28) - *(short *)(param_2 + 0x28)));
  auVar7._0_10_ = (unkuint10)uVar1 << 0x10;
  auVar7._10_2_ = *(short *)(param_1 + 0x2c) - *(short *)(param_2 + 0x2c);
  auVar8._12_2_ = 0;
  auVar8._0_12_ = auVar7;
  auVar8._14_2_ = *(short *)(param_1 + 0x2e) - *(short *)(param_2 + 0x2e);
  fVar20 = (float)((int)auVar21._0_10_ >> 0x10);
  fVar23 = (float)(int)((int6)uVar2 >> 0x20);
  fVar24 = (float)(auVar21._8_4_ >> 0x10);
  fVar25 = (float)(auVar22._12_4_ >> 0x10);
  fVar26 = (float)(SUB164(ZEXT616(CONCAT42(auVar5._8_4_,
                                           *(short *)(param_1 + 0x22) - *(short *)(param_2 + 0x22)))
                          << 0x30,4) >> 0x10);
  fVar27 = (float)(auVar5._8_4_ >> 0x10);
  fVar6 = (float)((int)auVar7._0_10_ >> 0x10);
  fVar9 = (float)(int)((int6)uVar1 >> 0x20);
  fVar10 = (float)(auVar7._8_4_ >> 0x10);
  fVar11 = (float)(auVar8._12_4_ >> 0x10);
  *(float *)this =
       (float)(int)(short)(*(short *)param_1 - *(short *)param_2) *
       (float)(int)(short)(*(short *)param_1 - *(short *)param_2) +
       (float)(int)(short)(*(short *)(param_1 + 0x10) - *(short *)(param_2 + 0x10)) *
       (float)(int)(short)(*(short *)(param_1 + 0x10) - *(short *)(param_2 + 0x10)) +
       (float)(int)(short)(*(short *)(param_1 + 0x20) - *(short *)(param_2 + 0x20)) *
       (float)(int)(short)(*(short *)(param_1 + 0x20) - *(short *)(param_2 + 0x20));
  *(float *)(this + 4) = fVar18 * fVar18 + fVar28 * fVar28 + fVar26 * fVar26;
  *(float *)(this + 8) = fVar19 * fVar19 + fVar29 * fVar29 + fVar27 * fVar27;
  *(undefined4 *)(this + 0xc) = 0;
  *(float *)(this + 0x10) = fVar12 * fVar12 + fVar20 * fVar20 + fVar6 * fVar6;
  *(float *)(this + 0x14) = fVar15 * fVar15 + fVar23 * fVar23 + fVar9 * fVar9;
  *(float *)(this + 0x18) = fVar16 * fVar16 + fVar24 * fVar24 + fVar10 * fVar10;
  *(float *)(this + 0x1c) = fVar17 * fVar17 + fVar25 * fVar25 + fVar11 * fVar11;
  return this;
}



/* cvtt::Internal::ETCComputer::ComputeErrorWeighted(cvtt::ParallelMath::VInt16<2> const*,
   cvtt::ParallelMath::Float const*, cvtt::Options) */

float * cvtt::Internal::ETCComputer::ComputeErrorWeighted
                  (float *param_1,undefined1 (*param_2) [16],float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
  auVar1 = *param_2;
  auVar2 = param_2[1];
  auVar3 = param_2[2];
  auVar6._10_2_ = 0;
  auVar6._0_10_ = auVar1._0_10_;
  auVar6._12_2_ = auVar1._6_2_;
  auVar9._8_2_ = auVar1._4_2_;
  auVar9._0_8_ = auVar1._0_8_;
  auVar9._10_4_ = auVar6._10_4_;
  auVar12._6_8_ = 0;
  auVar12._0_6_ = auVar9._8_6_;
  auVar4._10_2_ = 0;
  auVar4._0_10_ = auVar2._0_10_;
  auVar4._12_2_ = auVar2._6_2_;
  auVar7._8_2_ = auVar2._4_2_;
  auVar7._0_8_ = auVar2._0_8_;
  auVar7._10_4_ = auVar4._10_4_;
  auVar13._6_8_ = 0;
  auVar13._0_6_ = auVar7._8_6_;
  auVar10._4_2_ = auVar2._2_2_;
  auVar10._0_4_ = auVar2._0_4_;
  auVar10._6_8_ = SUB148(auVar13 << 0x40,6);
  fVar15 = (float)auVar1._0_2_ * fStack0000000000000010 - *param_3;
  fVar16 = (float)(int)CONCAT82(SUB148(auVar12 << 0x40,6),auVar1._2_2_) * fStack0000000000000010 -
           param_3[1];
  fVar17 = (float)auVar9._8_4_ * fStack0000000000000010 - param_3[2];
  fVar18 = (float)(auVar6._10_4_ >> 0x10) * fStack0000000000000010 - param_3[3];
  fVar31 = fStack0000000000000010 * (float)auVar1._8_2_ - param_3[4];
  fVar32 = fStack0000000000000010 * (float)auVar1._10_2_ - param_3[5];
  fVar33 = fStack0000000000000010 * (float)auVar1._12_2_ - param_3[6];
  fVar34 = fStack0000000000000010 * (float)auVar1._14_2_ - param_3[7];
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar3._0_10_;
  auVar5._12_2_ = auVar3._6_2_;
  auVar8._8_2_ = auVar3._4_2_;
  auVar8._0_8_ = auVar3._0_8_;
  auVar8._10_4_ = auVar5._10_4_;
  auVar14._6_8_ = 0;
  auVar14._0_6_ = auVar8._8_6_;
  auVar11._4_2_ = auVar3._2_2_;
  auVar11._0_4_ = auVar3._0_4_;
  auVar11._6_8_ = SUB148(auVar14 << 0x40,6);
  fVar23 = (float)(auVar2._0_4_ & 0xffff) * fStack0000000000000014 - param_3[8];
  fVar24 = (float)auVar10._4_4_ * fStack0000000000000014 - param_3[9];
  fVar25 = (float)auVar7._8_4_ * fStack0000000000000014 - param_3[10];
  fVar26 = (float)(auVar4._10_4_ >> 0x10) * fStack0000000000000014 - param_3[0xb];
  fVar35 = fStack0000000000000014 * (float)auVar2._8_2_ - param_3[0xc];
  fVar36 = fStack0000000000000014 * (float)auVar2._10_2_ - param_3[0xd];
  fVar37 = fStack0000000000000014 * (float)auVar2._12_2_ - param_3[0xe];
  fVar38 = fStack0000000000000014 * (float)auVar2._14_2_ - param_3[0xf];
  fVar19 = (float)(auVar3._0_4_ & 0xffff) * in_stack_00000018 - param_3[0x10];
  fVar20 = (float)auVar11._4_4_ * in_stack_00000018 - param_3[0x11];
  fVar21 = (float)auVar8._8_4_ * in_stack_00000018 - param_3[0x12];
  fVar22 = (float)(auVar5._10_4_ >> 0x10) * in_stack_00000018 - param_3[0x13];
  fVar27 = in_stack_00000018 * (float)auVar3._8_2_ - param_3[0x14];
  fVar28 = in_stack_00000018 * (float)auVar3._10_2_ - param_3[0x15];
  fVar29 = in_stack_00000018 * (float)auVar3._12_2_ - param_3[0x16];
  fVar30 = in_stack_00000018 * (float)auVar3._14_2_ - param_3[0x17];
  param_1[4] = fVar31 * fVar31 + fVar35 * fVar35 + fVar27 * fVar27;
  param_1[5] = fVar32 * fVar32 + fVar36 * fVar36 + fVar28 * fVar28;
  param_1[6] = fVar33 * fVar33 + fVar37 * fVar37 + fVar29 * fVar29;
  param_1[7] = fVar34 * fVar34 + fVar38 * fVar38 + fVar30 * fVar30;
  *param_1 = fVar23 * fVar23 + fVar15 * fVar15 + fVar19 * fVar19;
  param_1[1] = fVar24 * fVar24 + fVar16 * fVar16 + fVar20 * fVar20;
  param_1[2] = fVar25 * fVar25 + fVar17 * fVar17 + fVar21 * fVar21;
  param_1[3] = fVar26 * fVar26 + fVar18 * fVar18 + fVar22 * fVar22;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::ETCDifferentialIsLegalForChannel(cvtt::ParallelMath::VInt16<2>
   const&, cvtt::ParallelMath::VInt16<2> const&) */

ulong cvtt::Internal::ETCComputer::ETCDifferentialIsLegalForChannel(VInt16 *param_1,VInt16 *param_2)

{
  return CONCAT26(-(ushort)(_UNK_0010b2f6 <
                           (short)(*(short *)(param_2 + 6) - *(short *)(param_1 + 6))),
                  CONCAT24(-(ushort)(_UNK_0010b2f4 <
                                    (short)(*(short *)(param_2 + 4) - *(short *)(param_1 + 4))),
                           CONCAT22(-(ushort)(_UNK_0010b2f2 <
                                             (short)(*(short *)(param_2 + 2) -
                                                    *(short *)(param_1 + 2))),
                                    -(ushort)(__LC85 < (short)(*(short *)param_2 - *(short *)param_1
                                                              ))))) &
         CONCAT26(-(ushort)((short)(*(short *)(param_2 + 6) - *(short *)(param_1 + 6)) <
                           _UNK_0010b306),
                  CONCAT24(-(ushort)((short)(*(short *)(param_2 + 4) - *(short *)(param_1 + 4)) <
                                    _UNK_0010b304),
                           CONCAT22(-(ushort)((short)(*(short *)(param_2 + 2) -
                                                     *(short *)(param_1 + 2)) < _UNK_0010b302),
                                    -(ushort)((short)(*(short *)param_2 - *(short *)param_1) <
                                             __LC58))));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::ETCDifferentialIsLegal(cvtt::ParallelMath::VInt16<2> const&,
   cvtt::ParallelMath::VInt16<2> const&) */

ulong cvtt::Internal::ETCComputer::ETCDifferentialIsLegal(VInt16 *param_1,VInt16 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  
  uVar1 = *(ushort *)param_2;
  uVar2 = *(ushort *)(param_2 + 2);
  uVar3 = *(ushort *)(param_2 + 4);
  uVar4 = *(ushort *)(param_2 + 6);
  uVar5 = *(ushort *)param_1;
  uVar6 = *(ushort *)(param_1 + 2);
  uVar7 = *(ushort *)(param_1 + 4);
  uVar8 = *(ushort *)(param_1 + 6);
  sVar17 = (uVar1 & (ushort)_LC4) - (uVar5 & (ushort)_LC4);
  sVar18 = (uVar2 & _LC4._2_2_) - (uVar6 & _LC4._2_2_);
  sVar19 = (uVar3 & _UNK_0010b314) - (uVar7 & _UNK_0010b314);
  sVar20 = (uVar4 & _UNK_0010b316) - (uVar8 & _UNK_0010b316);
  sVar9 = (uVar1 >> 10) - (uVar5 >> 10);
  sVar10 = (uVar2 >> 10) - (uVar6 >> 10);
  sVar11 = (uVar3 >> 10) - (uVar7 >> 10);
  sVar12 = (uVar4 >> 10) - (uVar8 >> 10);
  sVar13 = (uVar1 >> 5 & (ushort)_LC4) - ((ushort)_LC4 & uVar5 >> 5);
  sVar14 = (uVar2 >> 5 & _LC4._2_2_) - (_LC4._2_2_ & uVar6 >> 5);
  sVar15 = (uVar3 >> 5 & _UNK_0010b314) - (_UNK_0010b314 & uVar7 >> 5);
  sVar16 = (uVar4 >> 5 & _UNK_0010b316) - (_UNK_0010b316 & uVar8 >> 5);
  return CONCAT26(-(ushort)(_UNK_0010b2f6 < sVar12),
                  CONCAT24(-(ushort)(_UNK_0010b2f4 < sVar11),
                           CONCAT22(-(ushort)(_UNK_0010b2f2 < sVar10),-(ushort)(__LC85 < sVar9)))) &
         CONCAT26(-(ushort)(sVar12 < _UNK_0010b306),
                  CONCAT24(-(ushort)(sVar11 < _UNK_0010b304),
                           CONCAT22(-(ushort)(sVar10 < _UNK_0010b302),-(ushort)(sVar9 < __LC58)))) &
         CONCAT26(-(ushort)(_UNK_0010b2f6 < sVar20),
                  CONCAT24(-(ushort)(_UNK_0010b2f4 < sVar19),
                           CONCAT22(-(ushort)(_UNK_0010b2f2 < sVar18),-(ushort)(__LC85 < sVar17))))
         & CONCAT26(-(ushort)(sVar20 < _UNK_0010b306),
                    CONCAT24(-(ushort)(sVar19 < _UNK_0010b304),
                             CONCAT22(-(ushort)(sVar18 < _UNK_0010b302),-(ushort)(sVar17 < __LC58)))
                   ) &
         CONCAT26(-(ushort)(_UNK_0010b2f6 < sVar16),
                  CONCAT24(-(ushort)(_UNK_0010b2f4 < sVar15),
                           CONCAT22(-(ushort)(_UNK_0010b2f2 < sVar14),-(ushort)(__LC85 < sVar13))))
         & CONCAT26(-(ushort)(sVar16 < _UNK_0010b306),
                    CONCAT24(-(ushort)(sVar15 < _UNK_0010b304),
                             CONCAT22(-(ushort)(sVar14 < _UNK_0010b302),-(ushort)(sVar13 < __LC58)))
                   );
}



/* cvtt::Internal::ETCComputer::ETCDifferentialIsLegalForChannelScalar(unsigned short const&,
   unsigned short const&) */

undefined4
cvtt::Internal::ETCComputer::ETCDifferentialIsLegalForChannelScalar(ushort *param_1,ushort *param_2)

{
  int iVar1;
  
  iVar1 = (ushort)(*param_2 - *param_1) + 4;
  return CONCAT31((int3)((uint)iVar1 >> 8),(ushort)iVar1 < 8);
}



/* cvtt::Internal::ETCComputer::ETCDifferentialIsLegalScalar(unsigned short const&, unsigned short
   const&) */

uint cvtt::Internal::ETCComputer::ETCDifferentialIsLegalScalar(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  iVar3 = ((uVar1 & 0x1f) - (uVar2 & 0x1f)) + 4;
  iVar5 = ((uint)(uVar1 >> 10) - (uint)(uVar2 >> 10)) + 4;
  iVar4 = ((uVar1 >> 5 & 0x1f) - (uVar2 >> 5 & 0x1f)) + 4;
  return CONCAT31((int3)((uint)iVar3 >> 8),(ushort)iVar3 < 8) &
         CONCAT31((int3)((uint)iVar5 >> 8),(ushort)iVar5 < 8) &
         CONCAT31((int3)((uint)iVar4 >> 8),(ushort)iVar4 < 8);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int, int,
   cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::Int16CompFlag&,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::VInt16<2>&, cvtt::ParallelMath::VInt16<2>&,
   cvtt::ParallelMath::VInt16<2>*, cvtt::ParallelMath::VInt16<1>*, cvtt::ParallelMath::VInt16<2>*,
   cvtt::Internal::ETCComputer::DifferentialResolveStorage&) */

void cvtt::Internal::ETCComputer::FindBestDifferentialCombination
               (int param_1,int param_2,Int16CompFlag *param_3,Int16CompFlag *param_4,Float *param_5
               ,VInt16 *param_6,VInt16 *param_7,VInt16 *param_8,VInt16 *param_9,VInt16 *param_10,
               DifferentialResolveStorage *param_11)

{
  long lVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  undefined2 uVar5;
  ushort uVar6;
  ulong uVar7;
  char cVar8;
  ulong uVar9;
  DifferentialResolveStorage *pDVar10;
  DifferentialResolveStorage *pDVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  DifferentialResolveStorage *pDVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  DifferentialResolveStorage *pDVar21;
  DifferentialResolveStorage *pDVar22;
  long in_FS_OFFSET;
  float fVar23;
  float extraout_XMM0_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  DifferentialResolveStorage *local_108;
  DifferentialResolveStorage *local_100;
  undefined2 local_c8;
  undefined2 local_c4;
  undefined4 local_5c;
  ushort local_58 [4];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pDVar22 = param_11;
  do {
    uVar9 = (ulong)((uint)uVar13 & 3);
    lVar18 = (long)((int)(uint)uVar13 >> 2);
    sVar2 = *(short *)(param_3 + uVar13 * 2);
    sVar3 = *(short *)(param_3 + uVar13 * 2 + 0x10);
    lVar1 = uVar9 * 4;
    lVar14 = lVar18 * 0x10;
    local_5c = 0;
    lVar20 = 0;
    fVar25 = *(float *)(param_5 + lVar1 + lVar14);
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_50 = __LC3;
    lVar16 = 0;
    pDVar21 = pDVar22;
    while( true ) {
      uVar4 = *(ushort *)(pDVar22 + lVar16 * 8);
      if (uVar4 != 0) {
        pDVar11 = pDVar21;
        do {
          fVar23 = *(float *)(((long)(pDVar11 + lVar18 * 8) * 2 - (long)param_11) + 0x20 +
                             (uVar9 - uVar13) * 4);
          if (fVar23 < *(float *)((long)&local_50 + lVar16 * 2)) {
            uVar5 = *(undefined2 *)(pDVar11 + 0x9c20);
            *(float *)((long)&local_50 + lVar16 * 2) = fVar23;
            *(undefined2 *)((long)&local_5c + lVar16) = uVar5;
            *(undefined2 *)((long)local_58 + lVar16) = *(undefined2 *)(pDVar11 + 0xea20);
            *(undefined2 *)((long)local_58 + lVar16 + 4) = *(undefined2 *)(pDVar11 + 0x13820);
          }
          pDVar11 = pDVar11 + 0x10;
        } while (param_11 + (uVar13 + ((ulong)(uVar4 - 1) + lVar20) * 8) * 2 + 0x10 != pDVar11);
      }
      pDVar21 = pDVar21 + 0x2700;
      lVar20 = lVar20 + 0x270;
      if (lVar16 == 2) break;
      lVar16 = 2;
    }
    fVar23 = (float)local_50 + local_50._4_4_;
    local_c8 = (undefined2)param_1;
    local_c4 = (undefined2)param_2;
    uVar4 = local_58[1];
    if ((sVar2 == 0) && (uVar4 = local_58[0], sVar3 == 0)) {
      if (fVar23 < fVar25) {
        fVar26 = local_50._4_4_;
        cVar8 = ETCDifferentialIsLegalScalar(local_58,local_58 + 1);
        fVar23 = extraout_XMM0_Da;
        if (cVar8 != '\0') goto LAB_00100b20;
        uVar19 = uVar13 & 0xffffffff;
        lVar16 = 0;
        pDVar21 = param_11 + 0x20;
        local_48 = 0;
        local_100 = param_11 + (uVar9 + (lVar18 + 2) * 4) * 4;
        uVar9 = 0;
        local_108 = param_11;
        while( true ) {
          uVar4 = *(ushort *)(pDVar22 + lVar16 * 0x10);
          if (uVar4 != 0) {
            uVar12 = 0;
            pDVar11 = local_100;
            do {
              if (*(float *)pDVar11 <= fVar25 && fVar25 != *(float *)pDVar11) {
                uVar15 = (int)uVar9 + 1;
                *(uint *)((long)&local_48 + lVar16 * 4) = uVar15;
                *(short *)(param_11 + (uVar9 + 0xc310 + (long)(int)lVar16 * 0x270) * 2) =
                     (short)uVar12;
                uVar9 = (ulong)uVar15;
              }
              uVar12 = uVar12 + 1;
              pDVar11 = pDVar11 + 0x20;
            } while (uVar4 != uVar12);
          }
          uVar7 = uVar9 * 2;
          if (uVar9 != 0) {
            pDVar11 = local_108 + 0x18620;
            lVar20 = 0x3f;
            if ((long)uVar7 >> 1 != 0) {
              for (; (ulong)((long)uVar7 >> 1) >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            pDVar10 = pDVar11 + uVar7;
            std::
            __introsort_loop<unsigned_short*,long,__gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,int,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag&,cvtt::ParallelMath::Float&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>*,cvtt::ParallelMath::VInt16<1>*,cvtt::ParallelMath::VInt16<2>*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>>
                      (pDVar11,pDVar10,(long)(int)lVar20 * 2,pDVar21,uVar19);
            if (uVar7 < 0x21) {
              std::
              __insertion_sort<unsigned_short*,__gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,int,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag&,cvtt::ParallelMath::Float&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>*,cvtt::ParallelMath::VInt16<1>*,cvtt::ParallelMath::VInt16<2>*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>>
                        (pDVar11,pDVar10,pDVar21,uVar19);
            }
            else {
              pDVar17 = local_108 + 0x18640;
              std::
              __insertion_sort<unsigned_short*,__gnu_cxx::__ops::_Iter_comp_iter<cvtt::Internal::ETCComputer::FindBestDifferentialCombination(int,int,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag&,cvtt::ParallelMath::Float&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>&,cvtt::ParallelMath::VInt16<2>*,cvtt::ParallelMath::VInt16<1>*,cvtt::ParallelMath::VInt16<2>*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&)::SortPredicate>>
                        (pDVar11,pDVar17,pDVar21,uVar19);
              do {
                uVar4 = *(ushort *)pDVar17;
                fVar23 = *(float *)(pDVar21 + lVar14 + lVar1 + (ulong)uVar4 * 0x20);
                pDVar11 = pDVar17;
                while( true ) {
                  uVar6 = *(ushort *)(pDVar11 + -2);
                  if ((*(float *)(pDVar21 + lVar14 + lVar1 + (ulong)uVar6 * 0x20) <= fVar23) &&
                     ((*(float *)(pDVar21 + lVar14 + lVar1 + (ulong)uVar6 * 0x20) < fVar23 ||
                      (uVar6 <= uVar4)))) break;
                  *(ushort *)pDVar11 = uVar6;
                  pDVar11 = pDVar11 + -2;
                }
                pDVar17 = pDVar17 + 2;
                *(ushort *)pDVar11 = uVar4;
              } while (pDVar17 != pDVar10);
            }
          }
          if (lVar16 == 1) break;
          local_108 = local_108 + 0x4e0;
          uVar9 = (ulong)local_48._4_4_;
          pDVar21 = pDVar21 + 0x4e00;
          lVar16 = 1;
          local_100 = local_100 + 0x4e00;
        }
        if ((int)local_48 != 0) {
          lVar16 = uVar13 * 2;
          pDVar21 = param_11;
          do {
            fVar23 = *(float *)(param_11 +
                               lVar1 + (lVar18 + 2 + (ulong)*(ushort *)(pDVar21 + 0x18620) * 2) *
                                       0x10);
            if (fVar25 <= fVar23) break;
            lVar20 = (ulong)*(ushort *)(pDVar21 + 0x18620) + 0xea2;
            uVar4 = *(ushort *)(param_11 + lVar16 + lVar20 * 0x10);
            fVar24 = *(float *)(param_5 + lVar1 + lVar14) - fVar23;
            if (fVar24 < fVar26) break;
            if (local_48._4_4_ != 0) {
              pDVar11 = param_11;
              do {
                if (fVar24 <= *(float *)(param_11 +
                                        lVar1 + (lVar18 + 0x4e2 +
                                                (ulong)*(ushort *)(pDVar11 + 0x18b00) * 2) * 0x10))
                break;
                pDVar10 = param_11 +
                          lVar16 + ((ulong)*(ushort *)(pDVar11 + 0x18b00) + 0x1112) * 0x10;
                uVar6 = *(ushort *)pDVar10;
                if ((ushort)((uVar6 & 0x1f) + (4 - (uVar4 & 0x1f)) |
                             (uVar6 >> 10) + (4 - (uVar4 >> 10)) |
                            (uVar6 >> 5 & 0x1f) + (4 - (uVar4 >> 5 & 0x1f))) < 8) {
                  fVar25 = fVar23 + *(float *)(param_11 +
                                              lVar1 + (lVar18 + 0x4e2 +
                                                      (ulong)*(ushort *)(pDVar11 + 0x18b00) * 2) *
                                                      0x10);
                  *(undefined2 *)(param_4 + uVar13 * 2) = 0xffff;
                  lVar20 = lVar16 + lVar20 * 0x10;
                  *(float *)(param_5 + uVar13 * 4) = fVar25;
                  *(undefined2 *)(param_6 + uVar13 * 2) = local_c8;
                  *(undefined2 *)(param_7 + uVar13 * 2) = local_c4;
                  *(ushort *)(param_8 + uVar13 * 2) = uVar4;
                  *(ushort *)(param_8 + uVar13 * 2 + 0x10) = uVar6;
                  *(undefined2 *)(param_9 + uVar13 * 2) =
                       *(undefined2 *)(param_11 + lVar20 + -0x4e00);
                  *(ushort *)(param_9 + uVar13 * 2 + 0x10) = *(ushort *)(pDVar10 + -0x4e00);
                  *(undefined2 *)(param_10 + uVar13 * 2) =
                       *(undefined2 *)(param_11 + lVar20 + 0x4e00);
                  *(ushort *)(param_10 + uVar13 * 2 + 0x10) = *(ushort *)(pDVar10 + 0x4e00);
                  break;
                }
                pDVar11 = pDVar11 + 2;
              } while (pDVar11 != param_11 + (ulong)local_48._4_4_ * 2);
            }
            pDVar21 = pDVar21 + 2;
          } while (pDVar21 != param_11 + (local_48 & 0xffffffff) * 2);
        }
      }
    }
    else {
      local_58[0] = uVar4;
      local_58[1] = local_58[0];
      if (fVar23 < fVar25) {
LAB_00100b20:
        *(undefined2 *)(param_4 + uVar13 * 2) = 0xffff;
        *(float *)(param_5 + uVar13 * 4) = fVar23;
        *(undefined2 *)(param_6 + uVar13 * 2) = local_c8;
        *(undefined2 *)(param_7 + uVar13 * 2) = local_c4;
        *(ushort *)(param_8 + uVar13 * 2) = local_58[0];
        *(undefined2 *)(param_9 + uVar13 * 2) = (undefined2)local_5c;
        *(ushort *)(param_10 + uVar13 * 2) = local_58[2];
        *(ushort *)(param_8 + uVar13 * 2 + 0x10) = local_58[1];
        *(undefined2 *)(param_9 + uVar13 * 2 + 0x10) = local_5c._2_2_;
        *(ushort *)(param_10 + uVar13 * 2 + 0x10) = local_58[3];
      }
    }
    uVar13 = uVar13 + 1;
    pDVar22 = pDVar22 + 2;
    if (uVar13 == 8) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* cvtt::Internal::ETCComputer::DecodePlanarCoeff(cvtt::ParallelMath::VInt16<2> const&, int) */

ulong cvtt::Internal::ETCComputer::DecodePlanarCoeff(VInt16 *param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *(undefined1 (*) [16])param_1;
  if (param_2 != 1) {
    auVar2 = psllw(auVar1,2);
    return auVar2._0_8_ |
           CONCAT26(auVar1._6_2_ >> 4,
                    CONCAT24(auVar1._4_2_ >> 4,CONCAT22(auVar1._2_2_ >> 4,auVar1._0_2_ >> 4)));
  }
  auVar2 = psllw(auVar1,1);
  return auVar2._0_8_ |
         CONCAT26(auVar1._6_2_ >> 6,
                  CONCAT24(auVar1._4_2_ >> 6,CONCAT22(auVar1._2_2_ >> 6,auVar1._0_2_ >> 6)));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::ResolveHalfBlockFakeBT709RoundingFast(cvtt::ParallelMath::VInt16<2>*,
   cvtt::ParallelMath::VInt16<2> const*, bool) */

void cvtt::Internal::ETCComputer::ResolveHalfBlockFakeBT709RoundingFast
               (VInt16 *param_1,VInt16 *param_2,bool param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  short sVar13;
  ushort uVar14;
  short sVar15;
  ushort uVar16;
  short sVar17;
  ushort uVar18;
  short sVar19;
  ushort uVar20;
  short sVar21;
  ushort uVar22;
  short sVar23;
  ushort uVar24;
  short sVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  ushort local_28 [8];
  ushort local_18 [12];
  
  uVar8 = _UNK_0010b33e;
  uVar7 = _UNK_0010b33c;
  uVar6 = _UNK_0010b33a;
  uVar5 = _UNK_0010b338;
  uVar4 = _UNK_0010b336;
  uVar3 = _UNK_0010b334;
  uVar2 = _UNK_0010b332;
  uVar1 = __LC30;
  uVar34 = (*(ushort *)param_2 >> 8) + *(ushort *)param_2;
  uVar35 = (*(ushort *)(param_2 + 2) >> 8) + *(ushort *)(param_2 + 2);
  uVar36 = (*(ushort *)(param_2 + 4) >> 8) + *(ushort *)(param_2 + 4);
  uVar37 = (*(ushort *)(param_2 + 6) >> 8) + *(ushort *)(param_2 + 6);
  uVar38 = (*(ushort *)(param_2 + 8) >> 8) + *(ushort *)(param_2 + 8);
  uVar39 = (*(ushort *)(param_2 + 10) >> 8) + *(ushort *)(param_2 + 10);
  uVar40 = (*(ushort *)(param_2 + 0xc) >> 8) + *(ushort *)(param_2 + 0xc);
  uVar41 = (*(ushort *)(param_2 + 0xe) >> 8) + *(ushort *)(param_2 + 0xe);
  uVar26 = (*(ushort *)(param_2 + 0x10) >> 8) + *(ushort *)(param_2 + 0x10);
  uVar27 = (*(ushort *)(param_2 + 0x12) >> 8) + *(ushort *)(param_2 + 0x12);
  uVar28 = (*(ushort *)(param_2 + 0x14) >> 8) + *(ushort *)(param_2 + 0x14);
  uVar29 = (*(ushort *)(param_2 + 0x16) >> 8) + *(ushort *)(param_2 + 0x16);
  uVar30 = (*(ushort *)(param_2 + 0x18) >> 8) + *(ushort *)(param_2 + 0x18);
  uVar31 = (*(ushort *)(param_2 + 0x1a) >> 8) + *(ushort *)(param_2 + 0x1a);
  uVar32 = (*(ushort *)(param_2 + 0x1c) >> 8) + *(ushort *)(param_2 + 0x1c);
  uVar33 = (*(ushort *)(param_2 + 0x1e) >> 8) + *(ushort *)(param_2 + 0x1e);
  uVar10 = (*(ushort *)(param_2 + 0x20) >> 8) + *(ushort *)(param_2 + 0x20);
  uVar12 = (*(ushort *)(param_2 + 0x22) >> 8) + *(ushort *)(param_2 + 0x22);
  uVar14 = (*(ushort *)(param_2 + 0x24) >> 8) + *(ushort *)(param_2 + 0x24);
  uVar16 = (*(ushort *)(param_2 + 0x26) >> 8) + *(ushort *)(param_2 + 0x26);
  uVar18 = (*(ushort *)(param_2 + 0x28) >> 8) + *(ushort *)(param_2 + 0x28);
  uVar20 = (*(ushort *)(param_2 + 0x2a) >> 8) + *(ushort *)(param_2 + 0x2a);
  uVar22 = (*(ushort *)(param_2 + 0x2c) >> 8) + *(ushort *)(param_2 + 0x2c);
  uVar24 = (*(ushort *)(param_2 + 0x2e) >> 8) + *(ushort *)(param_2 + 0x2e);
  if (param_3) {
    uVar34 = uVar34 >> 6;
    uVar35 = uVar35 >> 6;
    uVar36 = uVar36 >> 6;
    uVar37 = uVar37 >> 6;
    uVar38 = uVar38 >> 6;
    uVar39 = uVar39 >> 6;
    uVar40 = uVar40 >> 6;
    uVar41 = uVar41 >> 6;
    uVar26 = uVar26 >> 6;
    uVar27 = uVar27 >> 6;
    uVar28 = uVar28 >> 6;
    uVar29 = uVar29 >> 6;
    uVar30 = uVar30 >> 6;
    uVar31 = uVar31 >> 6;
    uVar32 = uVar32 >> 6;
    uVar33 = uVar33 >> 6;
    uVar10 = uVar10 >> 6;
    uVar12 = uVar12 >> 6;
    uVar14 = uVar14 >> 6;
    uVar16 = uVar16 >> 6;
    uVar18 = uVar18 >> 6;
    uVar20 = uVar20 >> 6;
    uVar22 = uVar22 >> 6;
    uVar24 = uVar24 >> 6;
    sVar42 = (short)_LC4;
    sVar43 = _LC4._2_2_;
    sVar44 = _UNK_0010b314;
    sVar45 = _UNK_0010b316;
    sVar46 = _UNK_0010b318;
    sVar47 = _UNK_0010b31a;
    sVar48 = _UNK_0010b31c;
    sVar49 = _UNK_0010b31e;
  }
  else {
    uVar34 = uVar34 >> 7;
    uVar35 = uVar35 >> 7;
    uVar36 = uVar36 >> 7;
    uVar37 = uVar37 >> 7;
    uVar38 = uVar38 >> 7;
    uVar39 = uVar39 >> 7;
    uVar40 = uVar40 >> 7;
    uVar41 = uVar41 >> 7;
    uVar26 = uVar26 >> 7;
    uVar27 = uVar27 >> 7;
    uVar28 = uVar28 >> 7;
    uVar29 = uVar29 >> 7;
    uVar30 = uVar30 >> 7;
    uVar31 = uVar31 >> 7;
    uVar32 = uVar32 >> 7;
    uVar33 = uVar33 >> 7;
    uVar10 = uVar10 >> 7;
    uVar12 = uVar12 >> 7;
    uVar14 = uVar14 >> 7;
    uVar16 = uVar16 >> 7;
    uVar18 = uVar18 >> 7;
    uVar20 = uVar20 >> 7;
    uVar22 = uVar22 >> 7;
    uVar24 = uVar24 >> 7;
    sVar42 = __LC73;
    sVar43 = _UNK_0010b322;
    sVar44 = _UNK_0010b324;
    sVar45 = _UNK_0010b326;
    sVar46 = _UNK_0010b328;
    sVar47 = _UNK_0010b32a;
    sVar48 = _UNK_0010b32c;
    sVar49 = _UNK_0010b32e;
  }
  lVar9 = 0;
  do {
    *(ushort *)((long)local_18 + lVar9) =
         (ushort)(byte)Tables::FakeBT709::g_rounding16[*(ushort *)((long)local_28 + lVar9)];
    lVar9 = lVar9 + 2;
  } while (lVar9 != 0x10);
  sVar11 = (local_18[0] & __LC30) + uVar34;
  sVar13 = (local_18[1] & _UNK_0010b332) + uVar35;
  sVar15 = (local_18[2] & _UNK_0010b334) + uVar36;
  sVar17 = (local_18[3] & _UNK_0010b336) + uVar37;
  sVar19 = (local_18[4] & _UNK_0010b338) + uVar38;
  sVar21 = (local_18[5] & _UNK_0010b33a) + uVar39;
  sVar23 = (local_18[6] & _UNK_0010b33c) + uVar40;
  sVar25 = (local_18[7] & _UNK_0010b33e) + uVar41;
  *(ushort *)param_1 = (ushort)(sVar42 < sVar11) * sVar42 | (ushort)(sVar42 >= sVar11) * sVar11;
  *(ushort *)(param_1 + 2) =
       (ushort)(sVar43 < sVar13) * sVar43 | (ushort)(sVar43 >= sVar13) * sVar13;
  *(ushort *)(param_1 + 4) =
       (ushort)(sVar44 < sVar15) * sVar44 | (ushort)(sVar44 >= sVar15) * sVar15;
  *(ushort *)(param_1 + 6) =
       (ushort)(sVar45 < sVar17) * sVar45 | (ushort)(sVar45 >= sVar17) * sVar17;
  *(ushort *)(param_1 + 8) =
       (ushort)(sVar46 < sVar19) * sVar46 | (ushort)(sVar46 >= sVar19) * sVar19;
  *(ushort *)(param_1 + 10) =
       (ushort)(sVar47 < sVar21) * sVar47 | (ushort)(sVar47 >= sVar21) * sVar21;
  *(ushort *)(param_1 + 0xc) =
       (ushort)(sVar48 < sVar23) * sVar48 | (ushort)(sVar48 >= sVar23) * sVar23;
  *(ushort *)(param_1 + 0xe) =
       (ushort)(sVar49 < sVar25) * sVar49 | (ushort)(sVar49 >= sVar25) * sVar25;
  sVar11 = (local_18[0] >> 1 & uVar1) + uVar26;
  sVar13 = (local_18[1] >> 1 & uVar2) + uVar27;
  sVar15 = (local_18[2] >> 1 & uVar3) + uVar28;
  sVar17 = (local_18[3] >> 1 & uVar4) + uVar29;
  sVar19 = (local_18[4] >> 1 & uVar5) + uVar30;
  sVar21 = (local_18[5] >> 1 & uVar6) + uVar31;
  sVar23 = (local_18[6] >> 1 & uVar7) + uVar32;
  sVar25 = (local_18[7] >> 1 & uVar8) + uVar33;
  *(ushort *)(param_1 + 0x10) =
       (ushort)(sVar42 < sVar11) * sVar42 | (ushort)(sVar42 >= sVar11) * sVar11;
  *(ushort *)(param_1 + 0x12) =
       (ushort)(sVar43 < sVar13) * sVar43 | (ushort)(sVar43 >= sVar13) * sVar13;
  *(ushort *)(param_1 + 0x14) =
       (ushort)(sVar44 < sVar15) * sVar44 | (ushort)(sVar44 >= sVar15) * sVar15;
  *(ushort *)(param_1 + 0x16) =
       (ushort)(sVar45 < sVar17) * sVar45 | (ushort)(sVar45 >= sVar17) * sVar17;
  *(ushort *)(param_1 + 0x18) =
       (ushort)(sVar46 < sVar19) * sVar46 | (ushort)(sVar46 >= sVar19) * sVar19;
  *(ushort *)(param_1 + 0x1a) =
       (ushort)(sVar47 < sVar21) * sVar47 | (ushort)(sVar47 >= sVar21) * sVar21;
  *(ushort *)(param_1 + 0x1c) =
       (ushort)(sVar48 < sVar23) * sVar48 | (ushort)(sVar48 >= sVar23) * sVar23;
  *(ushort *)(param_1 + 0x1e) =
       (ushort)(sVar49 < sVar25) * sVar49 | (ushort)(sVar49 >= sVar25) * sVar25;
  sVar11 = (local_18[0] >> 2 & uVar1) + uVar10;
  sVar13 = (local_18[1] >> 2 & uVar2) + uVar12;
  sVar15 = (local_18[2] >> 2 & uVar3) + uVar14;
  sVar17 = (local_18[3] >> 2 & uVar4) + uVar16;
  sVar19 = (local_18[4] >> 2 & uVar5) + uVar18;
  sVar21 = (local_18[5] >> 2 & uVar6) + uVar20;
  sVar23 = (local_18[6] >> 2 & uVar7) + uVar22;
  sVar25 = (local_18[7] >> 2 & uVar8) + uVar24;
  *(ushort *)(param_1 + 0x20) =
       (ushort)(sVar42 < sVar11) * sVar42 | (ushort)(sVar42 >= sVar11) * sVar11;
  *(ushort *)(param_1 + 0x22) =
       (ushort)(sVar43 < sVar13) * sVar43 | (ushort)(sVar43 >= sVar13) * sVar13;
  *(ushort *)(param_1 + 0x24) =
       (ushort)(sVar44 < sVar15) * sVar44 | (ushort)(sVar44 >= sVar15) * sVar15;
  *(ushort *)(param_1 + 0x26) =
       (ushort)(sVar45 < sVar17) * sVar45 | (ushort)(sVar45 >= sVar17) * sVar17;
  *(ushort *)(param_1 + 0x28) =
       (ushort)(sVar46 < sVar19) * sVar46 | (ushort)(sVar46 >= sVar19) * sVar19;
  *(ushort *)(param_1 + 0x2a) =
       (ushort)(sVar47 < sVar21) * sVar47 | (ushort)(sVar47 >= sVar21) * sVar21;
  *(ushort *)(param_1 + 0x2c) =
       (ushort)(sVar48 < sVar23) * sVar48 | (ushort)(sVar48 >= sVar23) * sVar23;
  *(ushort *)(param_1 + 0x2e) =
       (ushort)(sVar49 < sVar25) * sVar49 | (ushort)(sVar49 >= sVar25) * sVar25;
  return;
}



/* cvtt::Internal::ETCComputer::ConvertToFakeBT709(cvtt::ParallelMath::Float*,
   cvtt::ParallelMath::Float const&, cvtt::ParallelMath::Float const&, cvtt::ParallelMath::Float
   const&) */

void cvtt::Internal::ETCComputer::ConvertToFakeBT709
               (Float *param_1,Float *param_2,Float *param_3,Float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
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
  float fVar50;
  
  fVar18 = _LC16;
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_2 + 0xc);
  fVar5 = *(float *)param_3;
  fVar6 = *(float *)(param_3 + 4);
  fVar7 = *(float *)(param_3 + 8);
  fVar8 = *(float *)(param_3 + 0xc);
  fVar9 = *(float *)(param_2 + 0x10);
  fVar10 = *(float *)(param_2 + 0x14);
  fVar11 = *(float *)(param_2 + 0x18);
  fVar12 = *(float *)(param_2 + 0x1c);
  fVar13 = *(float *)(param_3 + 0x10);
  fVar14 = *(float *)(param_3 + 0x14);
  fVar15 = *(float *)(param_3 + 0x18);
  fVar16 = *(float *)(param_3 + 0x1c);
  fVar17 = *(float *)param_4;
  fVar27 = *(float *)(param_4 + 4);
  fVar28 = *(float *)(param_4 + 8);
  fVar29 = *(float *)(param_4 + 0xc);
  fVar30 = fVar2 * _LC8;
  fVar31 = fVar3 * _LC8;
  fVar32 = fVar4 * _LC8;
  fVar23 = *(float *)(param_4 + 0x10);
  fVar24 = *(float *)(param_4 + 0x14);
  fVar25 = *(float *)(param_4 + 0x18);
  fVar26 = *(float *)(param_4 + 0x1c);
  fVar19 = _LC8 * fVar9;
  fVar20 = _LC8 * fVar10;
  fVar21 = _LC8 * fVar11;
  fVar22 = _LC8 * fVar12;
  fVar35 = fVar6 * _LC10;
  fVar38 = fVar7 * _LC10;
  fVar41 = fVar8 * _LC10;
  fVar44 = _LC10 * fVar13;
  fVar45 = _LC10 * fVar14;
  fVar46 = _LC10 * fVar15;
  fVar47 = _LC10 * fVar16;
  fVar48 = fVar27 * _LC12;
  fVar49 = fVar28 * _LC12;
  fVar50 = fVar29 * _LC12;
  fVar33 = _LC12 * fVar23;
  fVar36 = _LC12 * fVar24;
  fVar39 = _LC12 * fVar25;
  fVar42 = _LC12 * fVar26;
  fVar34 = fVar5 * _LC16;
  fVar37 = fVar6 * _LC16;
  fVar40 = fVar7 * _LC16;
  fVar43 = fVar8 * _LC16;
  *(float *)param_1 = fVar1 * _LC8 + fVar5 * _LC10 + fVar17 * _LC12;
  *(float *)(param_1 + 4) = fVar30 + fVar35 + fVar48;
  *(float *)(param_1 + 8) = fVar31 + fVar38 + fVar49;
  *(float *)(param_1 + 0xc) = fVar32 + fVar41 + fVar50;
  *(float *)(param_1 + 0x10) = fVar19 + fVar44 + fVar33;
  *(float *)(param_1 + 0x14) = fVar20 + fVar45 + fVar36;
  *(float *)(param_1 + 0x18) = fVar21 + fVar46 + fVar39;
  *(float *)(param_1 + 0x1c) = fVar22 + fVar47 + fVar42;
  fVar19 = _LC20;
  fVar20 = fVar2 * _LC14;
  fVar32 = fVar3 * _LC14;
  fVar33 = fVar4 * _LC14;
  fVar21 = _LC14 * fVar9;
  fVar22 = _LC14 * fVar10;
  fVar30 = _LC14 * fVar11;
  fVar31 = _LC14 * fVar12;
  fVar41 = fVar27 * _LC18;
  fVar42 = fVar28 * _LC18;
  fVar44 = fVar29 * _LC18;
  fVar35 = _LC18 * fVar23;
  fVar36 = _LC18 * fVar24;
  fVar38 = _LC18 * fVar25;
  fVar39 = _LC18 * fVar26;
  *(float *)(param_1 + 0x20) = (fVar1 * _LC14 - fVar34) - fVar17 * _LC18;
  *(float *)(param_1 + 0x24) = (fVar20 - fVar37) - fVar41;
  *(float *)(param_1 + 0x28) = (fVar32 - fVar40) - fVar42;
  *(float *)(param_1 + 0x2c) = (fVar33 - fVar43) - fVar44;
  fVar20 = _LC22;
  *(float *)(param_1 + 0x30) = (fVar21 - fVar18 * fVar13) - fVar35;
  *(float *)(param_1 + 0x34) = (fVar22 - fVar18 * fVar14) - fVar36;
  *(float *)(param_1 + 0x38) = (fVar30 - fVar18 * fVar15) - fVar38;
  *(float *)(param_1 + 0x3c) = (fVar31 - fVar18 * fVar16) - fVar39;
  fVar27 = fVar27 * _LC24;
  fVar28 = fVar28 * _LC24;
  fVar29 = fVar29 * _LC24;
  fVar23 = fVar23 * _LC24;
  fVar24 = fVar24 * _LC24;
  fVar25 = fVar25 * _LC24;
  fVar26 = fVar26 * _LC24;
  *(float *)(param_1 + 0x40) = (fVar1 * fVar19 - fVar5 * fVar20) + fVar17 * _LC24;
  *(float *)(param_1 + 0x44) = (fVar2 * fVar19 - fVar6 * fVar20) + fVar27;
  *(float *)(param_1 + 0x48) = (fVar3 * fVar19 - fVar7 * fVar20) + fVar28;
  *(float *)(param_1 + 0x4c) = (fVar4 * fVar19 - fVar8 * fVar20) + fVar29;
  *(float *)(param_1 + 0x50) = (fVar9 * fVar19 - fVar13 * fVar20) + fVar23;
  *(float *)(param_1 + 0x54) = (fVar10 * fVar19 - fVar14 * fVar20) + fVar24;
  *(float *)(param_1 + 0x58) = (fVar11 * fVar19 - fVar15 * fVar20) + fVar25;
  *(float *)(param_1 + 0x5c) = (fVar12 * fVar19 - fVar16 * fVar20) + fVar26;
  return;
}



/* cvtt::Internal::ETCComputer::ConvertToFakeBT709(cvtt::ParallelMath::Float*,
   cvtt::ParallelMath::Float const*) */

void cvtt::Internal::ETCComputer::ConvertToFakeBT709(Float *param_1,Float *param_2)

{
  ConvertToFakeBT709(param_1,param_2,param_2 + 0x20,param_2 + 0x40);
  return;
}



/* cvtt::Internal::ETCComputer::ConvertToFakeBT709(cvtt::ParallelMath::Float*,
   cvtt::ParallelMath::VInt16<2> const*) */

void cvtt::Internal::ETCComputer::ConvertToFakeBT709(Float *param_1,VInt16 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  Float *pFVar5;
  float *pfVar6;
  long in_FS_OFFSET;
  Float local_78 [32];
  Float local_58 [32];
  Float local_38 [32];
  float local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pFVar5 = local_78;
  do {
    auVar1 = *(undefined1 (*) [16])param_2;
    pfVar6 = (float *)((long)pFVar5 + 0x20);
    param_2 = param_2 + 0x10;
    auVar2._10_2_ = 0;
    auVar2._0_10_ = auVar1._0_10_;
    auVar2._12_2_ = auVar1._6_2_;
    auVar3._8_2_ = auVar1._4_2_;
    auVar3._0_8_ = auVar1._0_8_;
    auVar3._10_4_ = auVar2._10_4_;
    auVar4._6_8_ = 0;
    auVar4._0_6_ = auVar3._8_6_;
    *(float *)((long)pFVar5 + 0x10) = (float)auVar1._8_2_;
    *(float *)((long)pFVar5 + 0x14) = (float)auVar1._10_2_;
    *(float *)((long)pFVar5 + 0x18) = (float)auVar1._12_2_;
    *(float *)((long)pFVar5 + 0x1c) = (float)auVar1._14_2_;
    *(float *)pFVar5 = (float)auVar1._0_2_;
    *(float *)((long)pFVar5 + 4) = (float)(int)CONCAT82(SUB148(auVar4 << 0x40,6),auVar1._2_2_);
    *(float *)((long)pFVar5 + 8) = (float)auVar3._8_4_;
    *(float *)((long)pFVar5 + 0xc) = (float)(auVar2._10_4_ >> 0x10);
    pFVar5 = (Float *)pfVar6;
  } while (local_18 != pfVar6);
  ConvertToFakeBT709(param_1,local_78,local_58,local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Internal::ETCComputer::ComputeErrorFakeBT709(cvtt::ParallelMath::VInt16<2> const*,
   cvtt::ParallelMath::Float const*) */

ETCComputer * __thiscall
cvtt::Internal::ETCComputer::ComputeErrorFakeBT709(ETCComputer *this,VInt16 *param_1,Float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long in_FS_OFFSET;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ConvertToFakeBT709((Float *)&local_88,param_1);
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  fVar3 = *(float *)(param_2 + 0xc);
  fVar4 = *(float *)(param_2 + 0x10);
  fVar5 = *(float *)(param_2 + 0x14);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x1c);
  fVar8 = *(float *)(param_2 + 0x24);
  fVar9 = *(float *)(param_2 + 0x28);
  fVar10 = *(float *)(param_2 + 0x2c);
  fVar11 = *(float *)(param_2 + 0x30);
  fVar12 = *(float *)(param_2 + 0x34);
  fVar13 = *(float *)(param_2 + 0x38);
  fVar14 = *(float *)(param_2 + 0x3c);
  fVar15 = *(float *)(param_2 + 0x44);
  fVar16 = *(float *)(param_2 + 0x48);
  fVar17 = *(float *)(param_2 + 0x4c);
  fVar18 = *(float *)(param_2 + 0x50);
  fVar19 = *(float *)(param_2 + 0x54);
  fVar20 = *(float *)(param_2 + 0x58);
  fVar21 = *(float *)(param_2 + 0x5c);
  *(float *)this =
       (local_88 - *(float *)param_2) * (local_88 - *(float *)param_2) +
       (local_68 - *(float *)(param_2 + 0x20)) * (local_68 - *(float *)(param_2 + 0x20)) +
       (local_48 - *(float *)(param_2 + 0x40)) * (local_48 - *(float *)(param_2 + 0x40));
  *(float *)(this + 4) =
       (fStack_84 - fVar1) * (fStack_84 - fVar1) + (fStack_64 - fVar8) * (fStack_64 - fVar8) +
       (fStack_44 - fVar15) * (fStack_44 - fVar15);
  *(float *)(this + 8) =
       (fStack_80 - fVar2) * (fStack_80 - fVar2) + (fStack_60 - fVar9) * (fStack_60 - fVar9) +
       (fStack_40 - fVar16) * (fStack_40 - fVar16);
  *(float *)(this + 0xc) =
       (fStack_7c - fVar3) * (fStack_7c - fVar3) + (fStack_5c - fVar10) * (fStack_5c - fVar10) +
       (fStack_3c - fVar17) * (fStack_3c - fVar17);
  *(float *)(this + 0x10) =
       (local_78 - fVar4) * (local_78 - fVar4) + (local_58 - fVar11) * (local_58 - fVar11) +
       (local_38 - fVar18) * (local_38 - fVar18);
  *(float *)(this + 0x14) =
       (fStack_74 - fVar5) * (fStack_74 - fVar5) + (fStack_54 - fVar12) * (fStack_54 - fVar12) +
       (fStack_34 - fVar19) * (fStack_34 - fVar19);
  *(float *)(this + 0x18) =
       (fStack_70 - fVar6) * (fStack_70 - fVar6) + (fStack_50 - fVar13) * (fStack_50 - fVar13) +
       (fStack_30 - fVar20) * (fStack_30 - fVar20);
  *(float *)(this + 0x1c) =
       (fStack_6c - fVar7) * (fStack_6c - fVar7) + (fStack_4c - fVar14) * (fStack_4c - fVar14) +
       (fStack_2c - fVar21) * (fStack_2c - fVar21);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::TestHalfBlock(cvtt::ParallelMath::Float&,
   cvtt::ParallelMath::VInt16<1>&, cvtt::ParallelMath::VInt16<2>, cvtt::ParallelMath::VInt16<2>
   const (*) [3], cvtt::ParallelMath::Float const (*) [3], cvtt::ParallelMath::VInt16<0> const*,
   bool, cvtt::Options const&) */

void cvtt::Internal::ETCComputer::TestHalfBlock
               (float *param_1,undefined8 *param_2,VInt16 *param_3,Float *param_4,short *param_5,
               char param_6,uint *param_7)

{
  VInt16 *pVVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  VInt16 *pVVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  ushort in_XMM0_Wa;
  short sVar17;
  ushort in_XMM0_Wb;
  short sVar20;
  ushort in_XMM0_Wc;
  short sVar21;
  ushort in_XMM0_Wd;
  short sVar22;
  ushort in_XMM0_We;
  short sVar23;
  ushort in_XMM0_Wf;
  short sVar24;
  ushort in_XMM0_Wg;
  short sVar25;
  ushort in_XMM0_Wh;
  short sVar26;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_198 [8];
  float fStack_190;
  float fStack_18c;
  VInt16 *local_178;
  ETCComputer local_158 [16];
  undefined1 local_148 [16];
  short local_138 [24];
  VInt16 local_108 [192];
  VInt16 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = 0;
  pauVar12 = (undefined1 (*) [16])local_138;
  do {
    uVar30 = (ulong)uVar10;
    auVar27._0_2_ = in_XMM0_Wa >> uVar30;
    auVar27._2_2_ = in_XMM0_Wb >> uVar30;
    auVar27._4_2_ = in_XMM0_Wc >> uVar30;
    auVar27._6_2_ = in_XMM0_Wd >> uVar30;
    auVar27._8_2_ = in_XMM0_We >> uVar30;
    auVar27._10_2_ = in_XMM0_Wf >> uVar30;
    auVar27._12_2_ = in_XMM0_Wg >> uVar30;
    auVar27._14_2_ = in_XMM0_Wh >> uVar30;
    auVar27 = auVar27 & __LC4;
    if (param_6 == '\0') {
      auVar19 = psllw(auVar27,4);
      auVar27 = auVar27 | auVar19;
    }
    else {
      auVar19._0_2_ = auVar27._0_2_ >> 2;
      auVar19._2_2_ = auVar27._2_2_ >> 2;
      auVar19._4_2_ = auVar27._4_2_ >> 2;
      auVar19._6_2_ = auVar27._6_2_ >> 2;
      auVar19._8_2_ = auVar27._8_2_ >> 2;
      auVar19._10_2_ = auVar27._10_2_ >> 2;
      auVar19._12_2_ = auVar27._12_2_ >> 2;
      auVar19._14_2_ = auVar27._14_2_ >> 2;
      auVar27 = psllw(auVar27,3);
      auVar27 = auVar27 | auVar19;
    }
    uVar10 = uVar10 + 5;
    *pauVar12 = auVar27;
    pauVar12 = pauVar12 + 1;
  } while (uVar10 != 0xf);
  pVVar13 = local_108;
  do {
    sVar2 = *param_5;
    sVar3 = param_5[1];
    sVar4 = param_5[2];
    sVar5 = param_5[3];
    sVar6 = param_5[4];
    sVar7 = param_5[5];
    sVar8 = param_5[6];
    sVar9 = param_5[7];
    lVar11 = 0;
    do {
      sVar17 = *(short *)((long)*(undefined1 (*) [16])local_138 + lVar11) + sVar2;
      sVar20 = *(short *)((long)local_138 + lVar11 + 2) + sVar3;
      sVar21 = *(short *)((long)local_138 + lVar11 + 4) + sVar4;
      sVar22 = *(short *)((long)local_138 + lVar11 + 6) + sVar5;
      sVar23 = *(short *)((long)local_138 + lVar11 + 8) + sVar6;
      sVar24 = *(short *)((long)local_138 + lVar11 + 10) + sVar7;
      sVar25 = *(short *)((long)local_138 + lVar11 + 0xc) + sVar8;
      sVar26 = *(short *)((long)local_138 + lVar11 + 0xe) + sVar9;
      sVar17 = (ushort)(-1 < sVar17) * sVar17;
      sVar20 = (ushort)(-1 < sVar20) * sVar20;
      sVar21 = (ushort)(-1 < sVar21) * sVar21;
      sVar22 = (ushort)(-1 < sVar22) * sVar22;
      sVar23 = (ushort)(-1 < sVar23) * sVar23;
      sVar24 = (ushort)(-1 < sVar24) * sVar24;
      sVar25 = (ushort)(-1 < sVar25) * sVar25;
      sVar26 = (ushort)(-1 < sVar26) * sVar26;
      pVVar1 = pVVar13 + lVar11;
      *(ushort *)pVVar1 = (ushort)(__LC27 < sVar17) * __LC27 | (ushort)(__LC27 >= sVar17) * sVar17;
      *(ushort *)(pVVar1 + 2) =
           (ushort)(_UNK_0010b352 < sVar20) * _UNK_0010b352 |
           (ushort)(_UNK_0010b352 >= sVar20) * sVar20;
      *(ushort *)(pVVar1 + 4) =
           (ushort)(_UNK_0010b354 < sVar21) * _UNK_0010b354 |
           (ushort)(_UNK_0010b354 >= sVar21) * sVar21;
      *(ushort *)(pVVar1 + 6) =
           (ushort)(_UNK_0010b356 < sVar22) * _UNK_0010b356 |
           (ushort)(_UNK_0010b356 >= sVar22) * sVar22;
      *(ushort *)(pVVar1 + 8) =
           (ushort)(_UNK_0010b358 < sVar23) * _UNK_0010b358 |
           (ushort)(_UNK_0010b358 >= sVar23) * sVar23;
      *(ushort *)(pVVar1 + 10) =
           (ushort)(_UNK_0010b35a < sVar24) * _UNK_0010b35a |
           (ushort)(_UNK_0010b35a >= sVar24) * sVar24;
      *(ushort *)(pVVar1 + 0xc) =
           (ushort)(_UNK_0010b35c < sVar25) * _UNK_0010b35c |
           (ushort)(_UNK_0010b35c >= sVar25) * sVar25;
      *(ushort *)(pVVar1 + 0xe) =
           (ushort)(_UNK_0010b35e < sVar26) * _UNK_0010b35e |
           (ushort)(_UNK_0010b35e >= sVar26) * sVar26;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x30);
    pVVar13 = pVVar13 + 0x30;
    param_5 = param_5 + 8;
  } while (pVVar13 != local_48);
  uVar10 = *param_7;
  uVar14 = 0;
  _local_1a8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  _local_198 = (undefined1  [16])0x0;
  local_178 = param_3;
  do {
    auVar28 = (undefined1  [16])0x0;
    pVVar13 = local_108;
    auVar27 = __LC3;
    auVar19 = __LC3;
    iVar15 = 0;
    do {
      if ((uVar10 & 0x400) == 0) {
        if ((uVar10 & 0x200) == 0) {
          ComputeErrorWeighted(local_158,pVVar13,param_4);
        }
        else {
          ComputeErrorUniform(local_158,local_178,pVVar13);
        }
      }
      else {
        ComputeErrorFakeBT709(local_158,pVVar13,param_4);
      }
      pVVar13 = pVVar13 + 0x30;
      auVar31 = minps((undefined1  [16])local_158,auVar19);
      auVar32._4_4_ = -(uint)(local_148._4_4_ < auVar27._4_4_);
      auVar32._0_4_ = -(uint)(local_148._0_4_ < auVar27._0_4_);
      auVar32._8_4_ = -(uint)(local_148._8_4_ < auVar27._8_4_);
      auVar32._12_4_ = -(uint)(local_148._12_4_ < auVar27._12_4_);
      auVar18._4_4_ = -(uint)(local_158._4_4_ < auVar19._4_4_);
      auVar18._0_4_ = -(uint)(local_158._0_4_ < auVar19._0_4_);
      auVar18._8_4_ = -(uint)(local_158._8_4_ < auVar19._8_4_);
      auVar18._12_4_ = -(uint)(local_158._12_4_ < auVar19._12_4_);
      auVar27 = minps(local_148,auVar27);
      auVar19 = packssdw(auVar18,auVar32);
      iVar16 = iVar15 + 1;
      auVar29._0_4_ = CONCAT22((short)iVar15,(short)iVar15);
      auVar29._4_4_ = auVar29._0_4_;
      auVar29._8_4_ = auVar29._0_4_;
      auVar29._12_4_ = auVar29._0_4_;
      auVar28 = auVar19 & auVar29 | ~auVar19 & auVar28;
      auVar19 = auVar31;
      iVar15 = iVar16;
    } while (iVar16 != 4);
    auVar19 = ZEXT416(uVar14);
    local_198._0_4_ = auVar31._0_4_ + (float)local_198._0_4_;
    local_198._4_4_ = auVar31._4_4_ + (float)local_198._4_4_;
    fStack_190 = auVar31._8_4_ + fStack_190;
    fStack_18c = auVar31._12_4_ + fStack_18c;
    uVar14 = uVar14 + 2;
    local_1a8._0_4_ = auVar27._0_4_ + (float)local_1a8._0_4_;
    local_1a8._4_4_ = auVar27._4_4_ + (float)local_1a8._4_4_;
    fStack_1a0 = auVar27._8_4_ + fStack_1a0;
    fStack_19c = auVar27._12_4_ + fStack_19c;
    auVar27 = psllw(auVar28,auVar19);
    local_178 = local_178 + 0x30;
    param_4 = param_4 + 0x60;
    local_1b8 = local_1b8 | auVar27;
  } while (uVar14 != 0x10);
  *param_1 = (float)local_198._0_4_;
  param_1[1] = (float)local_198._4_4_;
  param_1[2] = fStack_190;
  param_1[3] = fStack_18c;
  param_1[4] = (float)local_1a8._0_4_;
  param_1[5] = (float)local_1a8._4_4_;
  param_1[6] = fStack_1a0;
  param_1[7] = fStack_19c;
  *param_2 = local_1b8._0_8_;
  param_2[1] = local_1b8._8_8_;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::TestHalfBlockPunchthrough(cvtt::ParallelMath::Float&,
   cvtt::ParallelMath::VInt16<1>&, cvtt::ParallelMath::VInt16<2>, cvtt::ParallelMath::VInt16<2>
   const (*) [3], cvtt::ParallelMath::Float const (*) [3], cvtt::ParallelMath::Int16CompFlag const*,
   cvtt::ParallelMath::VInt16<2>, cvtt::Options const&) */

void cvtt::Internal::ETCComputer::TestHalfBlockPunchthrough
               (float *param_1,undefined1 (*param_2) [16],VInt16 *param_3,Float *param_4,
               undefined1 (*param_5) [16],uint *param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  VInt16 *pVVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  VInt16 *pVVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  ushort in_XMM0_Wa;
  short sVar15;
  ushort in_XMM0_Wb;
  short sVar18;
  ushort in_XMM0_Wc;
  short sVar19;
  ushort in_XMM0_Wd;
  short sVar20;
  ushort in_XMM0_We;
  short sVar21;
  ushort in_XMM0_Wf;
  short sVar22;
  ushort in_XMM0_Wg;
  short sVar23;
  ushort in_XMM0_Wh;
  short sVar24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  short in_XMM1_Wa;
  short sVar25;
  short in_XMM1_Wb;
  short in_XMM1_Wc;
  short in_XMM1_Wd;
  short in_XMM1_We;
  short in_XMM1_Wf;
  short in_XMM1_Wg;
  short in_XMM1_Wh;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  short sVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulong uVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ETCComputer local_128 [16];
  undefined1 local_118 [16];
  short local_108 [24];
  VInt16 local_d8 [2];
  undefined2 auStack_d6 [23];
  VInt16 local_a8 [2];
  undefined2 auStack_a6 [51];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pauVar11 = (undefined1 (*) [16])local_108;
  pauVar10 = pauVar11;
  uVar7 = 0;
  do {
    uVar8 = uVar7 + 5;
    uVar31 = (ulong)uVar7;
    auVar29._0_2_ = in_XMM0_Wa >> uVar31;
    auVar29._2_2_ = in_XMM0_Wb >> uVar31;
    auVar29._4_2_ = in_XMM0_Wc >> uVar31;
    auVar29._6_2_ = in_XMM0_Wd >> uVar31;
    auVar29._8_2_ = in_XMM0_We >> uVar31;
    auVar29._10_2_ = in_XMM0_Wf >> uVar31;
    auVar29._12_2_ = in_XMM0_Wg >> uVar31;
    auVar29._14_2_ = in_XMM0_Wh >> uVar31;
    auVar29 = auVar29 & __LC4;
    auVar30 = psllw(auVar29,3);
    auVar32._0_2_ = auVar29._0_2_ >> 2;
    auVar32._2_2_ = auVar29._2_2_ >> 2;
    auVar32._4_2_ = auVar29._4_2_ >> 2;
    auVar32._6_2_ = auVar29._6_2_ >> 2;
    auVar32._8_2_ = auVar29._8_2_ >> 2;
    auVar32._10_2_ = auVar29._10_2_ >> 2;
    auVar32._12_2_ = auVar29._12_2_ >> 2;
    auVar32._14_2_ = auVar29._14_2_ >> 2;
    *pauVar10 = auVar30 | auVar32;
    pauVar10 = pauVar10 + 1;
    uVar7 = uVar8;
  } while (uVar8 != 0xf);
  pVVar12 = local_d8;
  do {
    sVar25 = *(short *)*pauVar11;
    sVar28 = *(short *)((long)*pauVar11 + 2);
    sVar1 = *(short *)((long)*pauVar11 + 4);
    sVar2 = *(short *)((long)*pauVar11 + 6);
    sVar3 = *(short *)((long)*pauVar11 + 8);
    sVar4 = *(short *)((long)*pauVar11 + 10);
    sVar5 = *(short *)((long)*pauVar11 + 0xc);
    sVar6 = *(short *)((long)*pauVar11 + 0xe);
    pVVar9 = pVVar12 + 0x10;
    pauVar11 = pauVar11 + 1;
    *(short *)(pVVar12 + 0x30) = sVar25;
    *(short *)(pVVar12 + 0x32) = sVar28;
    *(short *)(pVVar12 + 0x34) = sVar1;
    *(short *)(pVVar12 + 0x36) = sVar2;
    *(short *)(pVVar12 + 0x38) = sVar3;
    *(short *)(pVVar12 + 0x3a) = sVar4;
    *(short *)(pVVar12 + 0x3c) = sVar5;
    *(short *)(pVVar12 + 0x3e) = sVar6;
    sVar15 = sVar25 + in_XMM1_Wa;
    sVar18 = sVar28 + in_XMM1_Wb;
    sVar19 = sVar1 + in_XMM1_Wc;
    sVar20 = sVar2 + in_XMM1_Wd;
    sVar21 = sVar3 + in_XMM1_We;
    sVar22 = sVar4 + in_XMM1_Wf;
    sVar23 = sVar5 + in_XMM1_Wg;
    sVar24 = sVar6 + in_XMM1_Wh;
    *(ushort *)(pVVar12 + 0x60) =
         (ushort)(__LC27 < sVar15) * __LC27 | (ushort)(__LC27 >= sVar15) * sVar15;
    *(ushort *)(pVVar12 + 0x62) =
         (ushort)(_UNK_0010b352 < sVar18) * _UNK_0010b352 |
         (ushort)(_UNK_0010b352 >= sVar18) * sVar18;
    *(ushort *)(pVVar12 + 100) =
         (ushort)(_UNK_0010b354 < sVar19) * _UNK_0010b354 |
         (ushort)(_UNK_0010b354 >= sVar19) * sVar19;
    *(ushort *)(pVVar12 + 0x66) =
         (ushort)(_UNK_0010b356 < sVar20) * _UNK_0010b356 |
         (ushort)(_UNK_0010b356 >= sVar20) * sVar20;
    *(ushort *)(pVVar12 + 0x68) =
         (ushort)(_UNK_0010b358 < sVar21) * _UNK_0010b358 |
         (ushort)(_UNK_0010b358 >= sVar21) * sVar21;
    *(ushort *)(pVVar12 + 0x6a) =
         (ushort)(_UNK_0010b35a < sVar22) * _UNK_0010b35a |
         (ushort)(_UNK_0010b35a >= sVar22) * sVar22;
    *(ushort *)(pVVar12 + 0x6c) =
         (ushort)(_UNK_0010b35c < sVar23) * _UNK_0010b35c |
         (ushort)(_UNK_0010b35c >= sVar23) * sVar23;
    *(ushort *)(pVVar12 + 0x6e) =
         (ushort)(_UNK_0010b35e < sVar24) * _UNK_0010b35e |
         (ushort)(_UNK_0010b35e >= sVar24) * sVar24;
    *(ushort *)pVVar12 =
         ((ushort)(sVar25 < in_XMM1_Wa) * in_XMM1_Wa | (ushort)(sVar25 >= in_XMM1_Wa) * sVar25) -
         in_XMM1_Wa;
    *(ushort *)(pVVar12 + 2) =
         ((ushort)(sVar28 < in_XMM1_Wb) * in_XMM1_Wb | (ushort)(sVar28 >= in_XMM1_Wb) * sVar28) -
         in_XMM1_Wb;
    *(ushort *)(pVVar12 + 4) =
         ((ushort)(sVar1 < in_XMM1_Wc) * in_XMM1_Wc | (ushort)(sVar1 >= in_XMM1_Wc) * sVar1) -
         in_XMM1_Wc;
    *(ushort *)(pVVar12 + 6) =
         ((ushort)(sVar2 < in_XMM1_Wd) * in_XMM1_Wd | (ushort)(sVar2 >= in_XMM1_Wd) * sVar2) -
         in_XMM1_Wd;
    *(ushort *)(pVVar12 + 8) =
         ((ushort)(sVar3 < in_XMM1_We) * in_XMM1_We | (ushort)(sVar3 >= in_XMM1_We) * sVar3) -
         in_XMM1_We;
    *(ushort *)(pVVar12 + 10) =
         ((ushort)(sVar4 < in_XMM1_Wf) * in_XMM1_Wf | (ushort)(sVar4 >= in_XMM1_Wf) * sVar4) -
         in_XMM1_Wf;
    *(ushort *)(pVVar12 + 0xc) =
         ((ushort)(sVar5 < in_XMM1_Wg) * in_XMM1_Wg | (ushort)(sVar5 >= in_XMM1_Wg) * sVar5) -
         in_XMM1_Wg;
    *(ushort *)(pVVar12 + 0xe) =
         ((ushort)(sVar6 < in_XMM1_Wh) * in_XMM1_Wh | (ushort)(sVar6 >= in_XMM1_Wh) * sVar6) -
         in_XMM1_Wh;
    pVVar12 = pVVar9;
  } while (local_a8 != pVVar9);
  uVar7 = *param_6;
  uVar8 = 0;
  fVar33 = 0.0;
  fVar34 = 0.0;
  fVar35 = 0.0;
  fVar36 = 0.0;
  auVar29 = (undefined1  [16])0x0;
  fVar37 = 0.0;
  fVar38 = 0.0;
  fVar39 = 0.0;
  fVar40 = 0.0;
  do {
    auVar30 = *param_5;
    auVar26 = (undefined1  [16])0x0;
    local_168 = CONCAT22(*(undefined2 *)*param_5,*(undefined2 *)*param_5);
    uStack_164 = CONCAT22(*(undefined2 *)(*param_5 + 2),*(undefined2 *)(*param_5 + 2));
    uStack_160 = CONCAT22(*(undefined2 *)(*param_5 + 4),*(undefined2 *)(*param_5 + 4));
    uStack_15c = CONCAT22(*(undefined2 *)(*param_5 + 6),*(undefined2 *)(*param_5 + 6));
    local_158 = CONCAT22(*(undefined2 *)(*param_5 + 8),*(undefined2 *)(*param_5 + 8));
    uStack_154 = CONCAT22(*(undefined2 *)(*param_5 + 10),*(undefined2 *)(*param_5 + 10));
    uStack_150 = CONCAT22(*(undefined2 *)(*param_5 + 0xc),*(undefined2 *)(*param_5 + 0xc));
    uStack_14c = CONCAT22(*(undefined2 *)(*param_5 + 0xe),*(undefined2 *)(*param_5 + 0xe));
    pVVar12 = local_d8;
    auVar32 = __LC3;
    auVar17 = __LC3;
    iVar13 = 0;
    do {
      if ((uVar7 & 0x400) == 0) {
        if ((uVar7 & 0x200) == 0) {
          ComputeErrorWeighted(local_128,pVVar12,param_4);
        }
        else {
          ComputeErrorUniform(local_128,param_3,pVVar12);
        }
      }
      else {
        ComputeErrorFakeBT709(local_128,pVVar12,param_4);
      }
      pVVar12 = pVVar12 + 0x30;
      auVar41 = minps((undefined1  [16])local_128,auVar17);
      auVar42._4_4_ = -(uint)(local_118._4_4_ < auVar32._4_4_);
      auVar42._0_4_ = -(uint)(local_118._0_4_ < auVar32._0_4_);
      auVar42._8_4_ = -(uint)(local_118._8_4_ < auVar32._8_4_);
      auVar42._12_4_ = -(uint)(local_118._12_4_ < auVar32._12_4_);
      auVar16._4_4_ = -(uint)(local_128._4_4_ < auVar17._4_4_);
      auVar16._0_4_ = -(uint)(local_128._0_4_ < auVar17._0_4_);
      auVar16._8_4_ = -(uint)(local_128._8_4_ < auVar17._8_4_);
      auVar16._12_4_ = -(uint)(local_128._12_4_ < auVar17._12_4_);
      auVar32 = minps(local_118,auVar32);
      auVar17 = packssdw(auVar16,auVar42);
      iVar14 = iVar13 + 1;
      auVar27._0_4_ = CONCAT22((short)iVar13,(short)iVar13);
      auVar27._4_4_ = auVar27._0_4_;
      auVar27._8_4_ = auVar27._0_4_;
      auVar27._12_4_ = auVar27._0_4_;
      auVar26 = auVar17 & auVar27 | ~auVar17 & auVar26;
      auVar17 = auVar41;
      iVar13 = iVar14;
    } while (iVar14 != 3);
    auVar17 = psllw(auVar26,1);
    sVar25 = auVar17._0_2_;
    auVar26._0_2_ = (ushort)(__LC55 < sVar25) * __LC55 | (ushort)(__LC55 >= sVar25) * sVar25;
    sVar25 = auVar17._2_2_;
    auVar26._2_2_ =
         (ushort)(_UNK_0010b362 < sVar25) * _UNK_0010b362 |
         (ushort)(_UNK_0010b362 >= sVar25) * sVar25;
    sVar25 = auVar17._4_2_;
    auVar26._4_2_ =
         (ushort)(_UNK_0010b364 < sVar25) * _UNK_0010b364 |
         (ushort)(_UNK_0010b364 >= sVar25) * sVar25;
    sVar25 = auVar17._6_2_;
    auVar26._6_2_ =
         (ushort)(_UNK_0010b366 < sVar25) * _UNK_0010b366 |
         (ushort)(_UNK_0010b366 >= sVar25) * sVar25;
    sVar25 = auVar17._8_2_;
    auVar26._8_2_ =
         (ushort)(_UNK_0010b368 < sVar25) * _UNK_0010b368 |
         (ushort)(_UNK_0010b368 >= sVar25) * sVar25;
    sVar25 = auVar17._10_2_;
    auVar26._10_2_ =
         (ushort)(_UNK_0010b36a < sVar25) * _UNK_0010b36a |
         (ushort)(_UNK_0010b36a >= sVar25) * sVar25;
    sVar25 = auVar17._12_2_;
    sVar28 = auVar17._14_2_;
    auVar26._12_2_ =
         (ushort)(_UNK_0010b36c < sVar25) * _UNK_0010b36c |
         (ushort)(_UNK_0010b36c >= sVar25) * sVar25;
    auVar26._14_2_ =
         (ushort)(_UNK_0010b36e < sVar28) * _UNK_0010b36e |
         (ushort)(_UNK_0010b36e >= sVar28) * sVar28;
    param_3 = param_3 + 0x30;
    param_4 = param_4 + 0x60;
    auVar17 = ZEXT416(uVar8);
    uVar8 = uVar8 + 2;
    param_5 = param_5 + 1;
    auVar30 = psllw(auVar30 & __LC30 | ~auVar30 & auVar26,auVar17);
    fVar37 = fVar37 + (float)(~local_168 & auVar41._0_4_);
    fVar38 = fVar38 + (float)(~uStack_164 & auVar41._4_4_);
    fVar39 = fVar39 + (float)(~uStack_160 & auVar41._8_4_);
    fVar40 = fVar40 + (float)(~uStack_15c & auVar41._12_4_);
    auVar29 = auVar29 | auVar30;
    fVar33 = fVar33 + (float)(~local_158 & auVar32._0_4_);
    fVar34 = fVar34 + (float)(~uStack_154 & auVar32._4_4_);
    fVar35 = fVar35 + (float)(~uStack_150 & auVar32._8_4_);
    fVar36 = fVar36 + (float)(~uStack_14c & auVar32._12_4_);
  } while (uVar8 != 0x10);
  *param_1 = fVar37;
  param_1[1] = fVar38;
  param_1[2] = fVar39;
  param_1[3] = fVar40;
  param_1[4] = fVar33;
  param_1[5] = fVar34;
  param_1[6] = fVar35;
  param_1[7] = fVar36;
  *param_2 = auVar29;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Internal::ETCComputer::ExtractBlocks(cvtt::ParallelMath::VInt16<2> (*) [3],
   cvtt::ParallelMath::Float (*) [3], cvtt::PixelBlockU8 const*, cvtt::Options const&) */

void cvtt::Internal::ETCComputer::ExtractBlocks
               (VInt16<2> *param_1,Float *param_2,PixelBlockU8 *param_3,Options *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  PixelBlockU8 PVar3;
  uint uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  VInt16 *pVVar17;
  VInt16 *pVVar18;
  Float *pFVar19;
  Float *pFVar20;
  PixelBlockU8 *pPVar21;
  VInt16 *pVVar22;
  PixelBlockU8 *pPVar23;
  long lVar24;
  
  lVar24 = 0;
  uVar4 = *(uint *)param_4;
  do {
    pPVar23 = param_3 + lVar24;
    pVVar22 = (VInt16 *)param_1 + 0x10;
    do {
      pVVar17 = pVVar22 + -0x10;
      pPVar21 = pPVar23;
      do {
        pVVar18 = pVVar17;
        PVar3 = *pPVar21;
        pPVar21 = pPVar21 + 0x40;
        *(ushort *)pVVar18 = (ushort)(byte)PVar3;
        pVVar17 = pVVar18 + 2;
      } while (pVVar18 + 2 != pVVar22);
      pVVar22 = pVVar18 + 0x12;
      pPVar23 = pPVar23 + 1;
    } while (pVVar22 != (VInt16 *)param_1 + 0x40);
    if ((uVar4 & 0x400) == 0) {
      auVar2 = *(undefined1 (*) [16])param_1;
      if ((uVar4 & 0x200) == 0) {
        fVar1 = *(float *)(param_4 + 8);
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar2._0_10_;
        auVar5._12_2_ = auVar2._6_2_;
        auVar9._8_2_ = auVar2._4_2_;
        auVar9._0_8_ = auVar2._0_8_;
        auVar9._10_4_ = auVar5._10_4_;
        auVar13._6_8_ = 0;
        auVar13._0_6_ = auVar9._8_6_;
        *(float *)param_2 = (float)auVar2._0_2_ * fVar1;
        *(float *)(param_2 + 4) =
             (float)(int)CONCAT82(SUB148(auVar13 << 0x40,6),auVar2._2_2_) * fVar1;
        *(float *)(param_2 + 8) = (float)auVar9._8_4_ * fVar1;
        *(float *)(param_2 + 0xc) = (float)(auVar5._10_4_ >> 0x10) * fVar1;
        *(float *)(param_2 + 0x10) = fVar1 * (float)auVar2._8_2_;
        *(float *)(param_2 + 0x14) = fVar1 * (float)auVar2._10_2_;
        *(float *)(param_2 + 0x18) = fVar1 * (float)auVar2._12_2_;
        *(float *)(param_2 + 0x1c) = fVar1 * (float)auVar2._14_2_;
        auVar2 = *(undefined1 (*) [16])((VInt16 *)param_1 + 0x10);
        fVar1 = *(float *)(param_4 + 0xc);
        auVar6._10_2_ = 0;
        auVar6._0_10_ = auVar2._0_10_;
        auVar6._12_2_ = auVar2._6_2_;
        auVar10._8_2_ = auVar2._4_2_;
        auVar10._0_8_ = auVar2._0_8_;
        auVar10._10_4_ = auVar6._10_4_;
        auVar14._6_8_ = 0;
        auVar14._0_6_ = auVar10._8_6_;
        *(float *)(param_2 + 0x20) = (float)auVar2._0_2_ * fVar1;
        *(float *)(param_2 + 0x24) =
             (float)(int)CONCAT82(SUB148(auVar14 << 0x40,6),auVar2._2_2_) * fVar1;
        *(float *)(param_2 + 0x28) = (float)auVar10._8_4_ * fVar1;
        *(float *)(param_2 + 0x2c) = (float)(auVar6._10_4_ >> 0x10) * fVar1;
        *(float *)(param_2 + 0x30) = fVar1 * (float)auVar2._8_2_;
        *(float *)(param_2 + 0x34) = fVar1 * (float)auVar2._10_2_;
        *(float *)(param_2 + 0x38) = fVar1 * (float)auVar2._12_2_;
        *(float *)(param_2 + 0x3c) = fVar1 * (float)auVar2._14_2_;
        auVar2 = *(undefined1 (*) [16])((VInt16 *)param_1 + 0x20);
        fVar1 = *(float *)(param_4 + 0x10);
        auVar7._10_2_ = 0;
        auVar7._0_10_ = auVar2._0_10_;
        auVar7._12_2_ = auVar2._6_2_;
        auVar11._8_2_ = auVar2._4_2_;
        auVar11._0_8_ = auVar2._0_8_;
        auVar11._10_4_ = auVar7._10_4_;
        auVar15._6_8_ = 0;
        auVar15._0_6_ = auVar11._8_6_;
        *(float *)(param_2 + 0x40) = (float)auVar2._0_2_ * fVar1;
        *(float *)(param_2 + 0x44) =
             (float)(int)CONCAT82(SUB148(auVar15 << 0x40,6),auVar2._2_2_) * fVar1;
        *(float *)(param_2 + 0x48) = (float)auVar11._8_4_ * fVar1;
        *(float *)(param_2 + 0x4c) = (float)(auVar7._10_4_ >> 0x10) * fVar1;
        *(float *)(param_2 + 0x50) = fVar1 * (float)auVar2._8_2_;
        *(float *)(param_2 + 0x54) = fVar1 * (float)auVar2._10_2_;
        *(float *)(param_2 + 0x58) = fVar1 * (float)auVar2._12_2_;
        *(float *)(param_2 + 0x5c) = fVar1 * (float)auVar2._14_2_;
      }
      else {
        pFVar19 = param_2;
        pVVar22 = (VInt16 *)param_1;
        do {
          auVar2 = *(undefined1 (*) [16])pVVar22;
          pFVar20 = pFVar19 + 0x20;
          pVVar22 = pVVar22 + 0x10;
          auVar8._10_2_ = 0;
          auVar8._0_10_ = auVar2._0_10_;
          auVar8._12_2_ = auVar2._6_2_;
          auVar12._8_2_ = auVar2._4_2_;
          auVar12._0_8_ = auVar2._0_8_;
          auVar12._10_4_ = auVar8._10_4_;
          auVar16._6_8_ = 0;
          auVar16._0_6_ = auVar12._8_6_;
          *(float *)(pFVar19 + 0x10) = (float)auVar2._8_2_;
          *(float *)(pFVar19 + 0x14) = (float)auVar2._10_2_;
          *(float *)(pFVar19 + 0x18) = (float)auVar2._12_2_;
          *(float *)(pFVar19 + 0x1c) = (float)auVar2._14_2_;
          *(float *)pFVar19 = (float)auVar2._0_2_;
          *(float *)(pFVar19 + 4) = (float)(int)CONCAT82(SUB148(auVar16 << 0x40,6),auVar2._2_2_);
          *(float *)(pFVar19 + 8) = (float)auVar12._8_4_;
          *(float *)(pFVar19 + 0xc) = (float)(auVar8._10_4_ >> 0x10);
          pFVar19 = pFVar20;
        } while (pFVar20 != param_2 + 0x60);
      }
    }
    else {
      ConvertToFakeBT709(param_2,(VInt16 *)param_1);
    }
    param_2 = param_2 + 0x60;
    lVar24 = lVar24 + 4;
    param_1 = (VInt16<2> *)((VInt16 *)param_1 + 0x30);
  } while (lVar24 != 0x40);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::ResolveTHFakeBT709Rounding(cvtt::ParallelMath::VInt16<2>*,
   cvtt::ParallelMath::VInt16<2> const*, cvtt::ParallelMath::VInt16<2> const&) */

void cvtt::Internal::ETCComputer::ResolveTHFakeBT709Rounding
               (VInt16 *param_1,VInt16 *param_2,VInt16 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  uint uVar45;
  uint uVar46;
  VInt16 *pVVar47;
  VInt16 *pVVar48;
  Float *pFVar49;
  Float *pFVar50;
  Float *pFVar51;
  Float *pFVar52;
  Float *pFVar53;
  int iVar54;
  ulong uVar55;
  long in_FS_OFFSET;
  float fVar56;
  float fVar61;
  float fVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar63;
  undefined1 auVar60 [16];
  short sVar64;
  float fVar65;
  short sVar68;
  short sVar69;
  float fVar70;
  short sVar71;
  short sVar72;
  float fVar73;
  short sVar74;
  short sVar75;
  short sVar77;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar76;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  Float local_218 [4];
  undefined4 auStack_214 [7];
  Float local_1f8 [32];
  Float local_1d8 [32];
  Float local_1b8 [4];
  undefined4 auStack_1b4 [7];
  Float local_198 [32];
  Float local_178 [32];
  Float local_158 [96];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_98 [11];
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  long local_30;
  
  sVar17 = *(short *)param_3;
  sVar18 = *(short *)(param_3 + 2);
  sVar19 = *(short *)(param_3 + 4);
  sVar20 = *(short *)(param_3 + 6);
  sVar21 = *(short *)(param_3 + 8);
  sVar22 = *(short *)(param_3 + 10);
  sVar23 = *(short *)(param_3 + 0xc);
  sVar24 = *(short *)(param_3 + 0xe);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pVVar47 = param_1;
  pFVar51 = local_218;
  pFVar49 = local_1b8;
  do {
    pVVar48 = pVVar47 + 0x10;
    auVar57 = psllw(*(undefined1 (*) [16])pVVar47,4);
    auVar57 = auVar57 | *(undefined1 (*) [16])pVVar47;
    sVar64 = __LC87 + auVar57._0_2_;
    sVar68 = _UNK_0010b372 + auVar57._2_2_;
    sVar69 = _UNK_0010b374 + auVar57._4_2_;
    sVar71 = _UNK_0010b376 + auVar57._6_2_;
    sVar72 = _UNK_0010b378 + auVar57._8_2_;
    sVar74 = _UNK_0010b37a + auVar57._10_2_;
    sVar75 = _UNK_0010b37c + auVar57._12_2_;
    sVar77 = _UNK_0010b37e + auVar57._14_2_;
    auVar58._0_2_ = auVar57._0_2_ * sVar17;
    auVar58._2_2_ = auVar57._2_2_ * sVar18;
    auVar58._4_2_ = auVar57._4_2_ * sVar19;
    auVar58._6_2_ = auVar57._6_2_ * sVar20;
    auVar58._8_2_ = auVar57._8_2_ * sVar21;
    auVar58._10_2_ = auVar57._10_2_ * sVar22;
    auVar58._12_2_ = auVar57._12_2_ * sVar23;
    auVar58._14_2_ = auVar57._14_2_ * sVar24;
    auVar81._0_2_ =
         ((ushort)(__LC27 < sVar64) * __LC27 | (ushort)(__LC27 >= sVar64) * sVar64) * sVar17;
    auVar81._2_2_ =
         ((ushort)(_UNK_0010b352 < sVar68) * _UNK_0010b352 |
         (ushort)(_UNK_0010b352 >= sVar68) * sVar68) * sVar18;
    auVar81._4_2_ =
         ((ushort)(_UNK_0010b354 < sVar69) * _UNK_0010b354 |
         (ushort)(_UNK_0010b354 >= sVar69) * sVar69) * sVar19;
    auVar81._6_2_ =
         ((ushort)(_UNK_0010b356 < sVar71) * _UNK_0010b356 |
         (ushort)(_UNK_0010b356 >= sVar71) * sVar71) * sVar20;
    auVar81._8_2_ =
         ((ushort)(_UNK_0010b358 < sVar72) * _UNK_0010b358 |
         (ushort)(_UNK_0010b358 >= sVar72) * sVar72) * sVar21;
    auVar81._10_2_ =
         ((ushort)(_UNK_0010b35a < sVar74) * _UNK_0010b35a |
         (ushort)(_UNK_0010b35a >= sVar74) * sVar74) * sVar22;
    auVar81._12_2_ =
         ((ushort)(_UNK_0010b35c < sVar75) * _UNK_0010b35c |
         (ushort)(_UNK_0010b35c >= sVar75) * sVar75) * sVar23;
    auVar81._14_2_ =
         ((ushort)(_UNK_0010b35e < sVar77) * _UNK_0010b35e |
         (ushort)(_UNK_0010b35e >= sVar77) * sVar77) * sVar24;
    auVar57 = psllw(auVar58,1);
    *(float *)(pFVar51 + 0x10) = (float)auVar57._8_2_;
    *(float *)(pFVar51 + 0x14) = (float)auVar57._10_2_;
    *(float *)(pFVar51 + 0x18) = (float)auVar57._12_2_;
    *(float *)(pFVar51 + 0x1c) = (float)auVar57._14_2_;
    auVar2._10_2_ = 0;
    auVar2._0_10_ = auVar57._0_10_;
    auVar2._12_2_ = auVar57._6_2_;
    auVar7._8_2_ = auVar57._4_2_;
    auVar7._0_8_ = auVar57._0_8_;
    auVar7._10_4_ = auVar2._10_4_;
    auVar40._6_8_ = 0;
    auVar40._0_6_ = auVar7._8_6_;
    auVar12._4_2_ = auVar57._2_2_;
    auVar12._0_4_ = auVar57._0_4_;
    auVar12._6_8_ = SUB148(auVar40 << 0x40,6);
    auVar58 = psllw(auVar81,1);
    *(float *)pFVar51 = (float)(auVar57._0_4_ & 0xffff);
    *(float *)(pFVar51 + 4) = (float)auVar12._4_4_;
    *(float *)(pFVar51 + 8) = (float)auVar7._8_4_;
    *(float *)(pFVar51 + 0xc) = (float)(auVar2._10_4_ >> 0x10);
    auVar3._10_2_ = 0;
    auVar3._0_10_ = auVar58._0_10_;
    auVar3._12_2_ = auVar58._6_2_;
    auVar8._8_2_ = auVar58._4_2_;
    auVar8._0_8_ = auVar58._0_8_;
    auVar8._10_4_ = auVar3._10_4_;
    auVar41._6_8_ = 0;
    auVar41._0_6_ = auVar8._8_6_;
    auVar13._4_2_ = auVar58._2_2_;
    auVar13._0_4_ = auVar58._0_4_;
    auVar13._6_8_ = SUB148(auVar41 << 0x40,6);
    *(float *)(pFVar49 + 0x10) = (float)auVar58._8_2_;
    *(float *)(pFVar49 + 0x14) = (float)auVar58._10_2_;
    *(float *)(pFVar49 + 0x18) = (float)auVar58._12_2_;
    *(float *)(pFVar49 + 0x1c) = (float)auVar58._14_2_;
    *(float *)pFVar49 = (float)(auVar58._0_4_ & 0xffff);
    *(float *)(pFVar49 + 4) = (float)auVar13._4_4_;
    *(float *)(pFVar49 + 8) = (float)auVar8._8_4_;
    *(float *)(pFVar49 + 0xc) = (float)(auVar3._10_4_ >> 0x10);
    pVVar47 = pVVar48;
    pFVar51 = pFVar51 + 0x20;
    pFVar49 = pFVar49 + 0x20;
  } while (param_1 + 0x30 != pVVar48);
  auVar57 = *(undefined1 (*) [16])(param_2 + 0x20);
  auVar81 = (undefined1  [16])0x0;
  uVar55 = 0;
  pFVar51 = (Float *)&local_f8;
  local_98[4] = (float)auVar57._8_2_;
  local_98[5] = (float)auVar57._10_2_;
  local_98[6] = (float)auVar57._12_2_;
  local_98[7] = (float)auVar57._14_2_;
  auVar58 = *(undefined1 (*) [16])(param_2 + 0x10);
  auVar4._10_2_ = 0;
  auVar4._0_10_ = auVar57._0_10_;
  auVar4._12_2_ = auVar57._6_2_;
  auVar9._8_2_ = auVar57._4_2_;
  auVar9._0_8_ = auVar57._0_8_;
  auVar9._10_4_ = auVar4._10_4_;
  auVar42._6_8_ = 0;
  auVar42._0_6_ = auVar9._8_6_;
  auVar14._4_2_ = auVar57._2_2_;
  auVar14._0_4_ = auVar57._0_4_;
  auVar14._6_8_ = SUB148(auVar42 << 0x40,6);
  local_98[0] = (float)(auVar57._0_4_ & 0xffff);
  local_98[1] = (float)auVar14._4_4_;
  local_98[2] = (float)auVar9._8_4_;
  local_98[3] = (float)(auVar4._10_4_ >> 0x10);
  local_e8 = (float)auVar58._8_2_;
  fStack_e4 = (float)auVar58._10_2_;
  fStack_e0 = (float)auVar58._12_2_;
  fStack_dc = (float)auVar58._14_2_;
  auVar57 = *(undefined1 (*) [16])param_2;
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar58._0_10_;
  auVar5._12_2_ = auVar58._6_2_;
  auVar10._8_2_ = auVar58._4_2_;
  auVar10._0_8_ = auVar58._0_8_;
  auVar10._10_4_ = auVar5._10_4_;
  auVar43._6_8_ = 0;
  auVar43._0_6_ = auVar10._8_6_;
  auVar15._4_2_ = auVar58._2_2_;
  auVar15._0_4_ = auVar58._0_4_;
  auVar15._6_8_ = SUB148(auVar43 << 0x40,6);
  local_f8 = (float)(auVar58._0_4_ & 0xffff);
  fStack_f4 = (float)auVar15._4_4_;
  fStack_f0 = (float)auVar10._8_4_;
  fStack_ec = (float)(auVar5._10_4_ >> 0x10);
  auVar6._10_2_ = 0;
  auVar6._0_10_ = auVar57._0_10_;
  auVar6._12_2_ = auVar57._6_2_;
  auVar11._8_2_ = auVar57._4_2_;
  auVar11._0_8_ = auVar57._0_8_;
  auVar11._10_4_ = auVar6._10_4_;
  auVar44._6_8_ = 0;
  auVar44._0_6_ = auVar11._8_6_;
  auVar16._4_2_ = auVar57._2_2_;
  auVar16._0_4_ = auVar57._0_4_;
  auVar16._6_8_ = SUB148(auVar44 << 0x40,6);
  local_228 = (float)auVar57._8_2_;
  fStack_224 = (float)auVar57._10_2_;
  fStack_220 = (float)auVar57._12_2_;
  fStack_21c = (float)auVar57._14_2_;
  local_238 = (float)(auVar57._0_4_ & 0xffff);
  fStack_234 = (float)auVar16._4_4_;
  fStack_230 = (float)auVar11._8_4_;
  fStack_22c = (float)(auVar6._10_4_ >> 0x10);
  ConvertToFakeBT709(local_158,(Float *)&local_238,pFVar51,(Float *)local_98);
  fVar56 = _LC3;
  fVar61 = _LC3;
  fVar62 = _LC3;
  fVar63 = _LC3;
  fVar65 = _LC3;
  fVar70 = _LC3;
  fVar73 = _LC3;
  fVar76 = _LC3;
  do {
    iVar54 = (int)uVar55;
    pFVar49 = local_1b8;
    if ((uVar55 & 1) == 0) {
      pFVar49 = local_218;
    }
    pFVar53 = local_1f8;
    if ((uVar55 & 2) != 0) {
      pFVar53 = local_198;
    }
    pFVar52 = local_1d8;
    if ((uVar55 & 4) != 0) {
      pFVar52 = local_178;
    }
    pFVar49 = (Float *)ConvertToFakeBT709(pFVar51,pFVar49,pFVar53,pFVar52);
    auVar57 = __LC30;
    pFVar53 = pFVar51;
    pFVar52 = (Float *)local_98;
    do {
      fVar25 = *(float *)(pFVar53 + 0x10);
      fVar26 = *(float *)(pFVar53 + 0x14);
      fVar27 = *(float *)(pFVar53 + 0x18);
      fVar28 = *(float *)(pFVar53 + 0x1c);
      fVar29 = *(float *)pFVar53;
      fVar30 = *(float *)(pFVar53 + 4);
      fVar31 = *(float *)(pFVar53 + 8);
      fVar32 = *(float *)(pFVar53 + 0xc);
      pFVar50 = pFVar49 + 0x20;
      pFVar53 = pFVar53 + 0x20;
      fVar33 = *(float *)(pFVar49 + 0x10);
      fVar34 = *(float *)(pFVar49 + 0x14);
      fVar35 = *(float *)(pFVar49 + 0x18);
      fVar36 = *(float *)(pFVar49 + 0x1c);
      fVar37 = *(float *)(pFVar49 + 4);
      fVar38 = *(float *)(pFVar49 + 8);
      fVar39 = *(float *)(pFVar49 + 0xc);
      *(float *)pFVar52 = fVar29 - *(float *)pFVar49;
      *(float *)(pFVar52 + 4) = fVar30 - fVar37;
      *(float *)(pFVar52 + 8) = fVar31 - fVar38;
      *(float *)(pFVar52 + 0xc) = fVar32 - fVar39;
      *(float *)(pFVar52 + 0x10) = fVar25 - fVar33;
      *(float *)(pFVar52 + 0x14) = fVar26 - fVar34;
      *(float *)(pFVar52 + 0x18) = fVar27 - fVar35;
      *(float *)(pFVar52 + 0x1c) = fVar28 - fVar36;
      pFVar49 = pFVar50;
      pFVar52 = pFVar52 + 0x20;
    } while (pFVar51 != pFVar50);
    auVar66._0_4_ = local_98[0] * local_98[0] + local_98[8] + local_98[8] + local_58 * local_58;
    auVar66._4_4_ = local_98[1] * local_98[1] + local_98[9] + local_98[9] + fStack_54 * fStack_54;
    auVar66._8_4_ = local_98[2] * local_98[2] + local_98[10] + local_98[10] + fStack_50 * fStack_50;
    auVar66._12_4_ = local_98[3] * local_98[3] + fStack_6c + fStack_6c + fStack_4c * fStack_4c;
    auVar59._0_4_ = local_98[4] * local_98[4] + local_68 + local_68 + local_48 * local_48;
    auVar59._4_4_ = local_98[5] * local_98[5] + fStack_64 + fStack_64 + fStack_44 * fStack_44;
    auVar59._8_4_ = local_98[6] * local_98[6] + fStack_60 + fStack_60 + fStack_40 * fStack_40;
    auVar59._12_4_ = local_98[7] * local_98[7] + fStack_5c + fStack_5c + fStack_3c * fStack_3c;
    auVar67._4_4_ = fVar70;
    auVar67._0_4_ = fVar65;
    auVar67._8_4_ = fVar73;
    auVar67._12_4_ = fVar76;
    auVar67 = minps(auVar66,auVar67);
    auVar78._4_4_ = -(uint)(auVar66._4_4_ < fVar70);
    auVar78._0_4_ = -(uint)(auVar66._0_4_ < fVar65);
    auVar78._8_4_ = -(uint)(auVar66._8_4_ < fVar73);
    auVar78._12_4_ = -(uint)(auVar66._12_4_ < fVar76);
    auVar1._4_4_ = fVar61;
    auVar1._0_4_ = fVar56;
    auVar1._8_4_ = fVar62;
    auVar1._12_4_ = fVar63;
    auVar58 = minps(auVar59,auVar1);
    fVar65 = auVar67._0_4_;
    fVar70 = auVar67._4_4_;
    fVar73 = auVar67._8_4_;
    fVar76 = auVar67._12_4_;
    auVar79._4_4_ = -(uint)(auVar59._4_4_ < fVar61);
    auVar79._0_4_ = -(uint)(auVar59._0_4_ < fVar56);
    auVar79._8_4_ = -(uint)(auVar59._8_4_ < fVar62);
    auVar79._12_4_ = -(uint)(auVar59._12_4_ < fVar63);
    fVar56 = auVar58._0_4_;
    fVar61 = auVar58._4_4_;
    fVar62 = auVar58._8_4_;
    fVar63 = auVar58._12_4_;
    auVar58 = packssdw(auVar78,auVar79);
    uVar55 = (ulong)(iVar54 + 1U);
    auVar80._0_4_ = CONCAT22((short)iVar54,(short)iVar54);
    auVar80._4_4_ = auVar80._0_4_;
    auVar80._8_4_ = auVar80._0_4_;
    auVar80._12_4_ = auVar80._0_4_;
    auVar81 = auVar58 & auVar80 | ~auVar58 & auVar81;
  } while ((short)(iVar54 + 1U) != 8);
  uVar45 = 0;
  do {
    uVar46 = uVar45 + 1;
    uVar55 = (ulong)uVar45;
    auVar60._0_2_ = auVar81._0_2_ >> uVar55;
    auVar60._2_2_ = auVar81._2_2_ >> uVar55;
    auVar60._4_2_ = auVar81._4_2_ >> uVar55;
    auVar60._6_2_ = auVar81._6_2_ >> uVar55;
    auVar60._8_2_ = auVar81._8_2_ >> uVar55;
    auVar60._10_2_ = auVar81._10_2_ >> uVar55;
    auVar60._12_2_ = auVar81._12_2_ >> uVar55;
    auVar60._14_2_ = auVar81._14_2_ >> uVar55;
    auVar60 = auVar60 & auVar57;
    *(short *)param_1 = auVar60._0_2_ + *(short *)param_1;
    *(short *)(param_1 + 2) = auVar60._2_2_ + *(short *)(param_1 + 2);
    *(short *)(param_1 + 4) = auVar60._4_2_ + *(short *)(param_1 + 4);
    *(short *)(param_1 + 6) = auVar60._6_2_ + *(short *)(param_1 + 6);
    *(short *)(param_1 + 8) = auVar60._8_2_ + *(short *)(param_1 + 8);
    *(short *)(param_1 + 10) = auVar60._10_2_ + *(short *)(param_1 + 10);
    *(short *)(param_1 + 0xc) = auVar60._12_2_ + *(short *)(param_1 + 0xc);
    *(short *)(param_1 + 0xe) = auVar60._14_2_ + *(short *)(param_1 + 0xe);
    param_1 = param_1 + 0x10;
    uVar45 = uVar46;
  } while (uVar46 != 3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::ResolveHalfBlockFakeBT709RoundingAccurate(cvtt::ParallelMath::VInt16<2>*,
   cvtt::ParallelMath::VInt16<2> const*, bool) */

void cvtt::Internal::ETCComputer::ResolveHalfBlockFakeBT709RoundingAccurate
               (VInt16 *param_1,VInt16 *param_2,bool param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
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
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  long lVar27;
  VInt16 *pVVar28;
  Float *pFVar29;
  Float *pFVar30;
  Float *pFVar31;
  Float *pFVar32;
  float *pfVar33;
  Float *pFVar34;
  uint uVar35;
  uint uVar36;
  float *pfVar37;
  long in_FS_OFFSET;
  short sVar38;
  ushort uVar39;
  float fVar40;
  short sVar46;
  float fVar48;
  short sVar51;
  float fVar53;
  short sVar56;
  undefined1 auVar41 [16];
  short sVar44;
  ushort uVar45;
  ushort uVar47;
  short sVar49;
  ushort uVar50;
  ushort uVar52;
  short sVar54;
  ushort uVar55;
  ushort uVar57;
  short sVar59;
  ushort uVar60;
  undefined1 auVar42 [16];
  float fVar58;
  undefined1 auVar43 [16];
  float fVar61;
  float fVar65;
  ulong uVar62;
  float fVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  Float local_218 [4];
  float afStack_214 [7];
  Float local_1f8 [32];
  Float local_1d8 [32];
  Float local_1b8 [4];
  undefined4 auStack_1b4 [7];
  Float local_198 [32];
  Float local_178 [32];
  Float local_158 [96];
  Float local_f8 [96];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar27 = 0;
  do {
    auVar71 = *(undefined1 (*) [16])(param_2 + lVar27);
    auVar41 = psllw(auVar71,5);
    sVar38 = auVar41._0_2_ + (auVar71._0_2_ >> 3);
    sVar44 = auVar41._2_2_ + (auVar71._2_2_ >> 3);
    sVar46 = auVar41._4_2_ + (auVar71._4_2_ >> 3);
    sVar49 = auVar41._6_2_ + (auVar71._6_2_ >> 3);
    sVar51 = auVar41._8_2_ + (auVar71._8_2_ >> 3);
    sVar54 = auVar41._10_2_ + (auVar71._10_2_ >> 3);
    sVar56 = auVar41._12_2_ + (auVar71._12_2_ >> 3);
    sVar59 = auVar41._14_2_ + (auVar71._14_2_ >> 3);
    if (param_3) {
      uVar39 = (ushort)(sVar38 - auVar71._0_2_) >> 0xb;
      uVar45 = (ushort)(sVar44 - auVar71._2_2_) >> 0xb;
      uVar47 = (ushort)(sVar46 - auVar71._4_2_) >> 0xb;
      uVar50 = (ushort)(sVar49 - auVar71._6_2_) >> 0xb;
      uVar52 = (ushort)(sVar51 - auVar71._8_2_) >> 0xb;
      uVar55 = (ushort)(sVar54 - auVar71._10_2_) >> 0xb;
      uVar57 = (ushort)(sVar56 - auVar71._12_2_) >> 0xb;
      uVar60 = (ushort)(sVar59 - auVar71._14_2_) >> 0xb;
    }
    else {
      auVar71 = psllw(auVar71,1);
      uVar39 = (ushort)(sVar38 - auVar71._0_2_) >> 0xc;
      uVar45 = (ushort)(sVar44 - auVar71._2_2_) >> 0xc;
      uVar47 = (ushort)(sVar46 - auVar71._4_2_) >> 0xc;
      uVar50 = (ushort)(sVar49 - auVar71._6_2_) >> 0xc;
      uVar52 = (ushort)(sVar51 - auVar71._8_2_) >> 0xc;
      uVar55 = (ushort)(sVar54 - auVar71._10_2_) >> 0xc;
      uVar57 = (ushort)(sVar56 - auVar71._12_2_) >> 0xc;
      uVar60 = (ushort)(sVar59 - auVar71._14_2_) >> 0xc;
    }
    pVVar28 = param_1 + lVar27;
    *(ushort *)pVVar28 = uVar39;
    *(ushort *)(pVVar28 + 2) = uVar45;
    *(ushort *)(pVVar28 + 4) = uVar47;
    *(ushort *)(pVVar28 + 6) = uVar50;
    *(ushort *)(pVVar28 + 8) = uVar52;
    *(ushort *)(pVVar28 + 10) = uVar55;
    *(ushort *)(pVVar28 + 0xc) = uVar57;
    *(ushort *)(pVVar28 + 0xe) = uVar60;
    lVar27 = lVar27 + 0x10;
  } while (lVar27 != 0x30);
  pVVar28 = param_1;
  pFVar31 = local_1b8;
  pFVar34 = local_218;
  do {
    auVar71 = *(undefined1 (*) [16])pVVar28;
    if (param_3) {
      auVar41._0_2_ = auVar71._0_2_ >> 2;
      auVar41._2_2_ = auVar71._2_2_ >> 2;
      auVar41._4_2_ = auVar71._4_2_ >> 2;
      auVar41._6_2_ = auVar71._6_2_ >> 2;
      auVar41._8_2_ = auVar71._8_2_ >> 2;
      auVar41._10_2_ = auVar71._10_2_ >> 2;
      auVar41._12_2_ = auVar71._12_2_ >> 2;
      auVar41._14_2_ = auVar71._14_2_ >> 2;
      sVar38 = auVar71._0_2_ + __LC30;
      sVar44 = auVar71._2_2_ + _UNK_0010b332;
      sVar46 = auVar71._4_2_ + _UNK_0010b334;
      sVar49 = auVar71._6_2_ + _UNK_0010b336;
      sVar51 = auVar71._8_2_ + _UNK_0010b338;
      sVar54 = auVar71._10_2_ + _UNK_0010b33a;
      sVar56 = auVar71._12_2_ + _UNK_0010b33c;
      sVar59 = auVar71._14_2_ + _UNK_0010b33e;
      auVar71 = psllw(auVar71,3);
      auVar41 = auVar41 | auVar71;
      auVar72._0_2_ =
           (ushort)((short)_LC4 < sVar38) * (short)_LC4 | (ushort)((short)_LC4 >= sVar38) * sVar38;
      auVar72._2_2_ =
           (ushort)(_LC4._2_2_ < sVar44) * _LC4._2_2_ | (ushort)(_LC4._2_2_ >= sVar44) * sVar44;
      auVar72._4_2_ =
           (ushort)(_UNK_0010b314 < sVar46) * _UNK_0010b314 |
           (ushort)(_UNK_0010b314 >= sVar46) * sVar46;
      auVar72._6_2_ =
           (ushort)(_UNK_0010b316 < sVar49) * _UNK_0010b316 |
           (ushort)(_UNK_0010b316 >= sVar49) * sVar49;
      auVar72._8_2_ =
           (ushort)(_UNK_0010b318 < sVar51) * _UNK_0010b318 |
           (ushort)(_UNK_0010b318 >= sVar51) * sVar51;
      auVar72._10_2_ =
           (ushort)(_UNK_0010b31a < sVar54) * _UNK_0010b31a |
           (ushort)(_UNK_0010b31a >= sVar54) * sVar54;
      auVar72._12_2_ =
           (ushort)(_UNK_0010b31c < sVar56) * _UNK_0010b31c |
           (ushort)(_UNK_0010b31c >= sVar56) * sVar56;
      auVar72._14_2_ =
           (ushort)(_UNK_0010b31e < sVar59) * _UNK_0010b31e |
           (ushort)(_UNK_0010b31e >= sVar59) * sVar59;
      auVar71 = psllw(auVar72,3);
      auVar64._0_2_ = auVar72._0_2_ >> 2;
      auVar64._2_2_ = auVar72._2_2_ >> 2;
      auVar64._4_2_ = auVar72._4_2_ >> 2;
      auVar64._6_2_ = auVar72._6_2_ >> 2;
      auVar64._8_2_ = auVar72._8_2_ >> 2;
      auVar64._10_2_ = auVar72._10_2_ >> 2;
      auVar64._12_2_ = auVar72._12_2_ >> 2;
      auVar64._14_2_ = auVar72._14_2_ >> 2;
      auVar71 = auVar64 | auVar71;
    }
    else {
      auVar41 = psllw(auVar71,4);
      auVar41 = auVar41 | auVar71;
      sVar38 = auVar41._0_2_ + __LC87;
      sVar44 = auVar41._2_2_ + _UNK_0010b372;
      sVar46 = auVar41._4_2_ + _UNK_0010b374;
      sVar49 = auVar41._6_2_ + _UNK_0010b376;
      sVar51 = auVar41._8_2_ + _UNK_0010b378;
      sVar54 = auVar41._10_2_ + _UNK_0010b37a;
      sVar56 = auVar41._12_2_ + _UNK_0010b37c;
      sVar59 = auVar41._14_2_ + _UNK_0010b37e;
      auVar71._0_2_ = (ushort)(__LC27 < sVar38) * __LC27 | (ushort)(__LC27 >= sVar38) * sVar38;
      auVar71._2_2_ =
           (ushort)(_UNK_0010b352 < sVar44) * _UNK_0010b352 |
           (ushort)(_UNK_0010b352 >= sVar44) * sVar44;
      auVar71._4_2_ =
           (ushort)(_UNK_0010b354 < sVar46) * _UNK_0010b354 |
           (ushort)(_UNK_0010b354 >= sVar46) * sVar46;
      auVar71._6_2_ =
           (ushort)(_UNK_0010b356 < sVar49) * _UNK_0010b356 |
           (ushort)(_UNK_0010b356 >= sVar49) * sVar49;
      auVar71._8_2_ =
           (ushort)(_UNK_0010b358 < sVar51) * _UNK_0010b358 |
           (ushort)(_UNK_0010b358 >= sVar51) * sVar51;
      auVar71._10_2_ =
           (ushort)(_UNK_0010b35a < sVar54) * _UNK_0010b35a |
           (ushort)(_UNK_0010b35a >= sVar54) * sVar54;
      auVar71._12_2_ =
           (ushort)(_UNK_0010b35c < sVar56) * _UNK_0010b35c |
           (ushort)(_UNK_0010b35c >= sVar56) * sVar56;
      auVar71._14_2_ =
           (ushort)(_UNK_0010b35e < sVar59) * _UNK_0010b35e |
           (ushort)(_UNK_0010b35e >= sVar59) * sVar59;
    }
    auVar41 = psllw(auVar41,3);
    pVVar28 = pVVar28 + 0x10;
    auVar71 = psllw(auVar71,3);
    *(float *)((long)pFVar34 + 0x10) = (float)auVar41._8_2_;
    *(float *)((long)pFVar34 + 0x14) = (float)auVar41._10_2_;
    *(float *)((long)pFVar34 + 0x18) = (float)auVar41._12_2_;
    *(float *)((long)pFVar34 + 0x1c) = (float)auVar41._14_2_;
    auVar3._10_2_ = 0;
    auVar3._0_10_ = auVar41._0_10_;
    auVar3._12_2_ = auVar41._6_2_;
    auVar5._8_2_ = auVar41._4_2_;
    auVar5._0_8_ = auVar41._0_8_;
    auVar5._10_4_ = auVar3._10_4_;
    auVar25._6_8_ = 0;
    auVar25._0_6_ = auVar5._8_6_;
    auVar7._4_2_ = auVar41._2_2_;
    auVar7._0_4_ = auVar41._0_4_;
    auVar7._6_8_ = SUB148(auVar25 << 0x40,6);
    auVar4._10_2_ = 0;
    auVar4._0_10_ = auVar71._0_10_;
    auVar4._12_2_ = auVar71._6_2_;
    auVar6._8_2_ = auVar71._4_2_;
    auVar6._0_8_ = auVar71._0_8_;
    auVar6._10_4_ = auVar4._10_4_;
    auVar26._6_8_ = 0;
    auVar26._0_6_ = auVar6._8_6_;
    auVar8._4_2_ = auVar71._2_2_;
    auVar8._0_4_ = auVar71._0_4_;
    auVar8._6_8_ = SUB148(auVar26 << 0x40,6);
    *(float *)pFVar34 = (float)(auVar41._0_4_ & 0xffff);
    *(float *)((long)pFVar34 + 4) = (float)auVar7._4_4_;
    *(float *)((long)pFVar34 + 8) = (float)auVar5._8_4_;
    *(float *)((long)pFVar34 + 0xc) = (float)(auVar3._10_4_ >> 0x10);
    *(float *)pFVar31 = (float)(auVar71._0_4_ & 0xffff);
    *(float *)(pFVar31 + 4) = (float)auVar8._4_4_;
    *(float *)(pFVar31 + 8) = (float)auVar6._8_4_;
    *(float *)(pFVar31 + 0xc) = (float)(auVar4._10_4_ >> 0x10);
    *(float *)(pFVar31 + 0x10) = (float)auVar71._8_2_;
    *(float *)(pFVar31 + 0x14) = (float)auVar71._10_2_;
    *(float *)(pFVar31 + 0x18) = (float)auVar71._12_2_;
    *(float *)(pFVar31 + 0x1c) = (float)auVar71._14_2_;
    pFVar31 = pFVar31 + 0x20;
    pFVar34 = (Float *)((long)pFVar34 + 0x20);
  } while (pVVar28 != param_1 + 0x30);
  ConvertToFakeBT709(local_158,param_2);
  auVar71 = (undefined1  [16])0x0;
  pFVar31 = local_f8;
  pfVar37 = &local_98;
  pFVar34 = local_198;
  fVar40 = _LC3;
  fVar48 = _LC3;
  fVar53 = _LC3;
  fVar58 = _LC3;
  fVar61 = _LC3;
  fVar65 = _LC3;
  fVar66 = _LC3;
  fVar67 = _LC3;
  uVar35 = 0;
  do {
    pFVar29 = local_1b8;
    if ((uVar35 & 1) == 0) {
      pFVar29 = local_218;
    }
    pFVar32 = local_1f8;
    if ((uVar35 & 2) != 0) {
      pFVar32 = pFVar34;
    }
    pFVar30 = local_1d8;
    if ((uVar35 & 4) != 0) {
      pFVar30 = local_178;
    }
    pFVar29 = (Float *)ConvertToFakeBT709(pFVar31,pFVar29,pFVar32,pFVar30);
    pFVar32 = pFVar31;
    pfVar33 = pfVar37;
    do {
      fVar9 = *(float *)(pFVar32 + 0x10);
      fVar10 = *(float *)(pFVar32 + 0x14);
      fVar11 = *(float *)(pFVar32 + 0x18);
      fVar12 = *(float *)(pFVar32 + 0x1c);
      fVar13 = *(float *)pFVar32;
      fVar14 = *(float *)(pFVar32 + 4);
      fVar15 = *(float *)(pFVar32 + 8);
      fVar16 = *(float *)(pFVar32 + 0xc);
      pFVar30 = pFVar29 + 0x20;
      pFVar32 = pFVar32 + 0x20;
      fVar17 = *(float *)(pFVar29 + 0x10);
      fVar18 = *(float *)(pFVar29 + 0x14);
      fVar19 = *(float *)(pFVar29 + 0x18);
      fVar20 = *(float *)(pFVar29 + 0x1c);
      fVar21 = *(float *)(pFVar29 + 4);
      fVar22 = *(float *)(pFVar29 + 8);
      fVar23 = *(float *)(pFVar29 + 0xc);
      *pfVar33 = fVar13 - *(float *)pFVar29;
      pfVar33[1] = fVar14 - fVar21;
      pfVar33[2] = fVar15 - fVar22;
      pfVar33[3] = fVar16 - fVar23;
      pfVar33[4] = fVar9 - fVar17;
      pfVar33[5] = fVar10 - fVar18;
      pfVar33[6] = fVar11 - fVar19;
      pfVar33[7] = fVar12 - fVar20;
      pFVar29 = pFVar30;
      pfVar33 = pfVar33 + 8;
    } while (pFVar31 != pFVar30);
    auVar63._0_4_ = local_98 * local_98 + local_78 + local_78 + local_58 * local_58;
    auVar63._4_4_ = fStack_94 * fStack_94 + fStack_74 + fStack_74 + fStack_54 * fStack_54;
    auVar63._8_4_ = fStack_90 * fStack_90 + fStack_70 + fStack_70 + fStack_50 * fStack_50;
    auVar63._12_4_ = fStack_8c * fStack_8c + fStack_6c + fStack_6c + fStack_4c * fStack_4c;
    auVar42._0_4_ = local_88 * local_88 + local_68 + local_68 + local_48 * local_48;
    auVar42._4_4_ = fStack_84 * fStack_84 + fStack_64 + fStack_64 + fStack_44 * fStack_44;
    auVar42._8_4_ = fStack_80 * fStack_80 + fStack_60 + fStack_60 + fStack_40 * fStack_40;
    auVar42._12_4_ = fStack_7c * fStack_7c + fStack_5c + fStack_5c + fStack_3c * fStack_3c;
    auVar2._4_4_ = fVar65;
    auVar2._0_4_ = fVar61;
    auVar2._8_4_ = fVar66;
    auVar2._12_4_ = fVar67;
    auVar64 = minps(auVar63,auVar2);
    auVar68._4_4_ = -(uint)(auVar63._4_4_ < fVar65);
    auVar68._0_4_ = -(uint)(auVar63._0_4_ < fVar61);
    auVar68._8_4_ = -(uint)(auVar63._8_4_ < fVar66);
    auVar68._12_4_ = -(uint)(auVar63._12_4_ < fVar67);
    auVar1._4_4_ = fVar48;
    auVar1._0_4_ = fVar40;
    auVar1._8_4_ = fVar53;
    auVar1._12_4_ = fVar58;
    auVar41 = minps(auVar42,auVar1);
    fVar61 = auVar64._0_4_;
    fVar65 = auVar64._4_4_;
    fVar66 = auVar64._8_4_;
    fVar67 = auVar64._12_4_;
    auVar69._4_4_ = -(uint)(auVar42._4_4_ < fVar48);
    auVar69._0_4_ = -(uint)(auVar42._0_4_ < fVar40);
    auVar69._8_4_ = -(uint)(auVar42._8_4_ < fVar53);
    auVar69._12_4_ = -(uint)(auVar42._12_4_ < fVar58);
    fVar40 = auVar41._0_4_;
    fVar48 = auVar41._4_4_;
    fVar53 = auVar41._8_4_;
    fVar58 = auVar41._12_4_;
    auVar41 = packssdw(auVar68,auVar69);
    uVar36 = uVar35 + 1;
    auVar70._0_4_ = CONCAT22((short)uVar35,(short)uVar35);
    auVar70._4_4_ = auVar70._0_4_;
    auVar70._8_4_ = auVar70._0_4_;
    auVar70._12_4_ = auVar70._0_4_;
    auVar71 = auVar41 & auVar70 | ~auVar41 & auVar71;
    uVar35 = uVar36;
  } while ((short)uVar36 != 8);
  auVar24._2_2_ = _UNK_0010b332;
  auVar24._0_2_ = __LC30;
  auVar24._4_2_ = _UNK_0010b334;
  auVar24._6_2_ = _UNK_0010b336;
  auVar24._8_2_ = _UNK_0010b338;
  auVar24._10_2_ = _UNK_0010b33a;
  auVar24._12_2_ = _UNK_0010b33c;
  auVar24._14_2_ = _UNK_0010b33e;
  uVar35 = 0;
  do {
    uVar36 = uVar35 + 1;
    uVar62 = (ulong)uVar35;
    auVar43._0_2_ = auVar71._0_2_ >> uVar62;
    auVar43._2_2_ = auVar71._2_2_ >> uVar62;
    auVar43._4_2_ = auVar71._4_2_ >> uVar62;
    auVar43._6_2_ = auVar71._6_2_ >> uVar62;
    auVar43._8_2_ = auVar71._8_2_ >> uVar62;
    auVar43._10_2_ = auVar71._10_2_ >> uVar62;
    auVar43._12_2_ = auVar71._12_2_ >> uVar62;
    auVar43._14_2_ = auVar71._14_2_ >> uVar62;
    auVar43 = auVar43 & auVar24;
    *(short *)param_1 = auVar43._0_2_ + *(short *)param_1;
    *(short *)(param_1 + 2) = auVar43._2_2_ + *(short *)(param_1 + 2);
    *(short *)(param_1 + 4) = auVar43._4_2_ + *(short *)(param_1 + 4);
    *(short *)(param_1 + 6) = auVar43._6_2_ + *(short *)(param_1 + 6);
    *(short *)(param_1 + 8) = auVar43._8_2_ + *(short *)(param_1 + 8);
    *(short *)(param_1 + 10) = auVar43._10_2_ + *(short *)(param_1 + 10);
    *(short *)(param_1 + 0xc) = auVar43._12_2_ + *(short *)(param_1 + 0xc);
    *(short *)(param_1 + 0xe) = auVar43._14_2_ + *(short *)(param_1 + 0xe);
    param_1 = param_1 + 0x10;
    uVar35 = uVar36;
  } while (uVar36 != 3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Internal::ETCComputer::ConvertFromFakeBT709(cvtt::ParallelMath::Float*,
   cvtt::ParallelMath::Float const*) */

void cvtt::Internal::ETCComputer::ConvertFromFakeBT709(Float *param_1,Float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  fVar9 = *(float *)(param_2 + 0x40);
  fVar10 = *(float *)(param_2 + 0x44);
  fVar11 = *(float *)(param_2 + 0x48);
  fVar12 = *(float *)(param_2 + 0x4c);
  fVar1 = *(float *)(param_2 + 0x50);
  fVar2 = *(float *)(param_2 + 0x54);
  fVar3 = *(float *)(param_2 + 0x58);
  fVar4 = *(float *)(param_2 + 0x5c);
  fVar25 = *(float *)param_2 * _LC32;
  fVar26 = *(float *)(param_2 + 4) * _LC32;
  fVar27 = *(float *)(param_2 + 8) * _LC32;
  fVar28 = *(float *)(param_2 + 0xc) * _LC32;
  fVar5 = _LC32 * *(float *)(param_2 + 0x10);
  fVar6 = _LC32 * *(float *)(param_2 + 0x14);
  fVar7 = _LC32 * *(float *)(param_2 + 0x18);
  fVar8 = _LC32 * *(float *)(param_2 + 0x1c);
  fVar29 = *(float *)(param_2 + 0x24) * _LC34;
  fVar30 = *(float *)(param_2 + 0x28) * _LC34;
  fVar31 = *(float *)(param_2 + 0x2c) * _LC34;
  fVar13 = _LC34 * *(float *)(param_2 + 0x30);
  fVar14 = _LC34 * *(float *)(param_2 + 0x34);
  fVar15 = _LC34 * *(float *)(param_2 + 0x38);
  fVar16 = _LC34 * *(float *)(param_2 + 0x3c);
  fVar21 = *(float *)(param_2 + 0x20) * _LC36;
  fVar22 = *(float *)(param_2 + 0x24) * _LC36;
  fVar23 = *(float *)(param_2 + 0x28) * _LC36;
  fVar24 = *(float *)(param_2 + 0x2c) * _LC36;
  fVar17 = *(float *)(param_2 + 0x30) * _LC36;
  fVar18 = *(float *)(param_2 + 0x34) * _LC36;
  fVar19 = *(float *)(param_2 + 0x38) * _LC36;
  fVar20 = *(float *)(param_2 + 0x3c) * _LC36;
  *(float *)param_1 = *(float *)(param_2 + 0x20) * _LC34 + fVar25;
  *(float *)(param_1 + 4) = fVar29 + fVar26;
  *(float *)(param_1 + 8) = fVar30 + fVar27;
  *(float *)(param_1 + 0xc) = fVar31 + fVar28;
  *(float *)(param_1 + 0x10) = fVar13 + fVar5;
  *(float *)(param_1 + 0x14) = fVar14 + fVar6;
  *(float *)(param_1 + 0x18) = fVar15 + fVar7;
  *(float *)(param_1 + 0x1c) = fVar16 + fVar8;
  fVar29 = fVar10 * _LC38;
  fVar30 = fVar11 * _LC38;
  fVar31 = fVar12 * _LC38;
  fVar13 = _LC38 * fVar1;
  fVar14 = _LC38 * fVar2;
  fVar15 = _LC38 * fVar3;
  fVar16 = _LC38 * fVar4;
  *(float *)(param_1 + 0x20) = (fVar25 - fVar21) - fVar9 * _LC38;
  *(float *)(param_1 + 0x24) = (fVar26 - fVar22) - fVar29;
  *(float *)(param_1 + 0x28) = (fVar27 - fVar23) - fVar30;
  *(float *)(param_1 + 0x2c) = (fVar28 - fVar24) - fVar31;
  fVar9 = fVar9 * _LC40;
  fVar10 = fVar10 * _LC40;
  fVar11 = fVar11 * _LC40;
  fVar12 = fVar12 * _LC40;
  fVar1 = fVar1 * _LC40;
  fVar2 = fVar2 * _LC40;
  fVar3 = fVar3 * _LC40;
  fVar4 = fVar4 * _LC40;
  *(float *)(param_1 + 0x30) = (fVar5 - fVar17) - fVar13;
  *(float *)(param_1 + 0x34) = (fVar6 - fVar18) - fVar14;
  *(float *)(param_1 + 0x38) = (fVar7 - fVar19) - fVar15;
  *(float *)(param_1 + 0x3c) = (fVar8 - fVar20) - fVar16;
  *(float *)(param_1 + 0x40) = fVar9 + fVar25;
  *(float *)(param_1 + 0x44) = fVar10 + fVar26;
  *(float *)(param_1 + 0x48) = fVar11 + fVar27;
  *(float *)(param_1 + 0x4c) = fVar12 + fVar28;
  *(float *)(param_1 + 0x50) = fVar1 + fVar5;
  *(float *)(param_1 + 0x54) = fVar2 + fVar6;
  *(float *)(param_1 + 0x58) = fVar3 + fVar7;
  *(float *)(param_1 + 0x5c) = fVar4 + fVar8;
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::EncodePlanar(unsigned char*, cvtt::ParallelMath::Float&,
   cvtt::ParallelMath::VInt16<2> const (*) [3], cvtt::ParallelMath::Float const (*) [3],
   cvtt::Options const&) */

void cvtt::Internal::ETCComputer::EncodePlanar
               (uchar *param_1,Float *param_2,VInt16<2> *param_3,Float *param_4,Options *param_5)

{
  short sVar1;
  short sVar8;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  undefined1 auVar20 [14];
  uint6 uVar21;
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  short sVar24;
  VInt16<2> *pVVar25;
  VInt16<2> *pVVar26;
  VInt16<2> *pVVar27;
  VInt16<2> *pVVar28;
  VInt16<2> *pVVar29;
  undefined1 auVar30 [14];
  undefined1 auVar31 [12];
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  undefined4 uVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  uchar *puVar46;
  Float *pFVar47;
  byte bVar48;
  int iVar49;
  Float *pFVar50;
  long lVar51;
  uint uVar52;
  VInt16<2> *pVVar53;
  uint uVar54;
  VInt16<2> *pVVar55;
  uint uVar56;
  uint uVar57;
  Float *pFVar58;
  undefined1 (*pauVar59) [16];
  VInt16 *pVVar60;
  uint uVar61;
  undefined1 (*pauVar62) [16];
  long lVar63;
  undefined1 (*pauVar64) [16];
  Float *pFVar65;
  uint uVar66;
  uint uVar67;
  Float *pFVar68;
  VInt16 *pVVar69;
  short *psVar70;
  VInt16 *pVVar71;
  long lVar72;
  long in_FS_OFFSET;
  ushort uVar73;
  float fVar74;
  undefined1 auVar76 [12];
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  float fVar75;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  ushort uVar96;
  float fVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar120;
  float fVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  float fVar139;
  float fVar140;
  float fVar141;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  float fVar142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  float fVar145;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  float fVar148;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar157;
  float fVar158;
  float fVar159;
  undefined1 auVar156 [16];
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  undefined1 local_6e8 [8];
  float fStack_6e0;
  float fStack_6dc;
  undefined1 local_6d8 [8];
  float fStack_6d0;
  float fStack_6cc;
  undefined1 local_6c8 [4];
  undefined1 auStack_6c4 [8];
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  undefined1 local_648 [16];
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  Float local_618 [4];
  undefined4 uStack_614;
  Float aFStack_610 [4];
  undefined4 uStack_60c;
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  Float local_5b8 [4];
  undefined4 uStack_5b4;
  Float aFStack_5b0 [4];
  undefined4 uStack_5ac;
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  Float local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  Float local_4f8 [96];
  Float local_498 [80];
  float local_448 [4];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  Float local_3d8 [16];
  undefined2 local_3c8 [8];
  undefined2 local_3b8 [8];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined2 local_378 [8];
  undefined2 local_368 [8];
  undefined2 local_358 [8];
  VInt16 local_348 [4];
  undefined4 auStack_344 [3];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  VInt16 local_2e8 [672];
  VInt16 local_48 [8];
  long local_40;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined1 auVar84 [16];
  
  uVar42 = _LC53;
  fVar75 = _LC51;
  sVar41 = _UNK_0010b3be;
  sVar40 = _UNK_0010b3bc;
  sVar39 = _UNK_0010b3ba;
  sVar38 = _UNK_0010b3b8;
  sVar37 = _UNK_0010b3b6;
  sVar36 = _UNK_0010b3b4;
  sVar35 = _UNK_0010b3b2;
  sVar8 = __LC76;
  uVar34 = _UNK_0010b36e;
  uVar33 = _UNK_0010b36c;
  uVar32 = _UNK_0010b36a;
  uVar19 = _UNK_0010b368;
  uVar18 = _UNK_0010b366;
  uVar17 = _UNK_0010b364;
  uVar16 = _UNK_0010b362;
  uVar96 = __LC55;
  sVar9 = _UNK_0010b35e;
  sVar10 = _UNK_0010b35c;
  sVar11 = _UNK_0010b35a;
  sVar12 = _UNK_0010b358;
  sVar13 = _UNK_0010b354;
  sVar14 = _UNK_0010b352;
  sVar15 = __LC27;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_608 = (undefined1  [16])0x0;
  _local_618 = (undefined1  [16])0x0;
  local_5e8 = (undefined1  [16])0x0;
  local_5f8 = (undefined1  [16])0x0;
  local_5c8 = (undefined1  [16])0x0;
  local_5d8 = (undefined1  [16])0x0;
  local_5a8 = (undefined1  [16])0x0;
  _local_5b8 = (undefined1  [16])0x0;
  local_588 = (undefined1  [16])0x0;
  local_598 = (undefined1  [16])0x0;
  local_568 = (undefined1  [16])0x0;
  local_578 = (undefined1  [16])0x0;
  local_548 = (undefined1  [16])0x0;
  uVar54 = *(uint *)param_5;
  local_558[0] = (Float)0x0;
  local_558[1] = (Float)0x0;
  local_558[2] = (Float)0x0;
  local_558[3] = (Float)0x0;
  local_558[4] = (Float)0x0;
  local_558[5] = (Float)0x0;
  local_558[6] = (Float)0x0;
  local_558[7] = (Float)0x0;
  local_558[8] = (Float)0x0;
  local_558[9] = (Float)0x0;
  local_558[10] = (Float)0x0;
  local_558[0xb] = (Float)0x0;
  local_558[0xc] = (Float)0x0;
  local_558[0xd] = (Float)0x0;
  local_558[0xe] = (Float)0x0;
  local_558[0xf] = (Float)0x0;
  local_528 = (undefined1  [16])0x0;
  uVar56 = uVar54 & 0x400;
  local_538 = (undefined1  [16])0x0;
  local_508 = (undefined1  [16])0x0;
  local_518 = (undefined1  [16])0x0;
  pVVar53 = param_3;
  pFVar58 = param_4;
  pFVar65 = local_5b8;
  pFVar47 = local_618;
  pFVar68 = local_558;
  do {
    fVar164 = 0.0;
    fVar165 = 0.0;
    fVar166 = 0.0;
    fVar167 = 0.0;
    fVar145 = 0.0;
    _local_6e8 = (undefined1  [16])0x0;
    fVar148 = 0.0;
    fVar142 = 0.0;
    fVar160 = 0.0;
    fVar161 = 0.0;
    fVar162 = 0.0;
    fVar163 = 0.0;
    fVar155 = 0.0;
    fVar157 = 0.0;
    fVar158 = 0.0;
    fVar159 = 0.0;
    fVar151 = 0.0;
    fVar152 = 0.0;
    fVar153 = 0.0;
    fVar154 = 0.0;
    uVar43 = 0;
    fVar168 = 0.0;
    auVar131._12_4_ = 0;
    auVar131._0_12_ = _auStack_6c4;
    _local_6c8 = auVar131 << 0x20;
    fVar120 = 0.0;
    _local_6d8 = (undefined1  [16])0x0;
    pFVar50 = pFVar58;
    pVVar55 = pVVar53;
    do {
      fVar109 = (float)(uVar43 & 3);
      fVar97 = (float)((int)uVar43 >> 2);
      if (uVar56 == 0) {
        auVar131 = *(undefined1 (*) [16])pVVar55;
        auVar20._10_2_ = 0;
        auVar20._0_10_ = auVar131._0_10_;
        auVar20._12_2_ = auVar131._6_2_;
        auVar22._8_2_ = auVar131._4_2_;
        auVar22._0_8_ = auVar131._0_8_;
        auVar22._10_4_ = auVar20._10_4_;
        auVar30._6_8_ = 0;
        auVar30._0_6_ = auVar22._8_6_;
        auVar23._4_2_ = auVar131._2_2_;
        auVar23._0_4_ = auVar131._0_4_;
        auVar23._6_8_ = SUB148(auVar30 << 0x40,6);
        fVar74 = (float)auVar131._8_2_;
        fVar93 = (float)auVar131._10_2_;
        fVar94 = (float)auVar131._12_2_;
        fVar95 = (float)auVar131._14_2_;
        fVar130 = (float)(auVar131._0_4_ & 0xffff);
        fVar139 = (float)auVar23._4_4_;
        fVar140 = (float)auVar22._8_4_;
        fVar141 = (float)(auVar20._10_4_ >> 0x10);
      }
      else {
        fVar130 = *(float *)pFVar50;
        fVar139 = *(float *)(pFVar50 + 4);
        fVar140 = *(float *)(pFVar50 + 8);
        fVar141 = *(float *)(pFVar50 + 0xc);
        fVar74 = *(float *)(pFVar50 + 0x10);
        fVar93 = *(float *)(pFVar50 + 0x14);
        fVar94 = *(float *)(pFVar50 + 0x18);
        fVar95 = *(float *)(pFVar50 + 0x1c);
      }
      uVar43 = uVar43 + 1;
      pFVar50 = pFVar50 + 0x60;
      fVar120 = fVar109 * fVar109 + fVar120;
      pVVar55 = pVVar55 + 0x30;
      fVar168 = fVar168 + _LC42;
      fVar145 = fVar145 + fVar109 + fVar109;
      fVar155 = (fVar155 - fVar130) - fVar130;
      fVar157 = (fVar157 - fVar139) - fVar139;
      fVar158 = (fVar158 - fVar140) - fVar140;
      fVar159 = (fVar159 - fVar141) - fVar141;
      fVar164 = (fVar164 - fVar74) - fVar74;
      fVar165 = (fVar165 - fVar93) - fVar93;
      fVar166 = (fVar166 - fVar94) - fVar94;
      fVar167 = (fVar167 - fVar95) - fVar95;
      fVar148 = fVar148 + fVar97 + fVar97;
      fVar142 = fVar142 + fVar109 * fVar97 + fVar109 * fVar97;
      fVar121 = fVar97 * fVar97 + (float)local_6c8;
      local_6c8 = (undefined1  [4])fVar121;
      local_6e8._0_4_ = ((float)local_6e8._0_4_ - fVar130 * fVar109) - fVar130 * fVar109;
      local_6e8._4_4_ = ((float)local_6e8._4_4_ - fVar139 * fVar109) - fVar139 * fVar109;
      fStack_6e0 = (fStack_6e0 - fVar140 * fVar109) - fVar140 * fVar109;
      fStack_6dc = (fStack_6dc - fVar141 * fVar109) - fVar141 * fVar109;
      fVar160 = (fVar160 - fVar130 * fVar97) - fVar130 * fVar97;
      fVar161 = (fVar161 - fVar139 * fVar97) - fVar139 * fVar97;
      fVar162 = (fVar162 - fVar140 * fVar97) - fVar140 * fVar97;
      fVar163 = (fVar163 - fVar141 * fVar97) - fVar141 * fVar97;
      fVar151 = (fVar151 - fVar97 * fVar74) - fVar97 * fVar74;
      fVar152 = (fVar152 - fVar97 * fVar93) - fVar97 * fVar93;
      fVar153 = (fVar153 - fVar97 * fVar94) - fVar97 * fVar94;
      fVar154 = (fVar154 - fVar97 * fVar95) - fVar97 * fVar95;
      local_6d8._0_4_ = ((float)local_6d8._0_4_ - fVar109 * fVar74) - fVar109 * fVar74;
      local_6d8._4_4_ = ((float)local_6d8._4_4_ - fVar109 * fVar93) - fVar109 * fVar93;
      fStack_6d0 = (fStack_6d0 - fVar109 * fVar94) - fVar109 * fVar94;
      fStack_6cc = (fStack_6cc - fVar109 * fVar95) - fVar109 * fVar95;
    } while (uVar43 != 0x10);
    pFVar58 = pFVar58 + 0x20;
    auVar147._0_4_ = fVar120 + fVar120;
    pVVar53 = pVVar53 + 0x10;
    fVar120 = (float)((uint)fVar142 ^ __LC43) / auVar147._0_4_;
    fVar74 = (float)((uint)fVar145 ^ __LC43) / auVar147._0_4_;
    auVar147._4_4_ = auVar147._0_4_;
    auVar147._8_4_ = auVar147._0_4_;
    auVar147._12_4_ = auVar147._0_4_;
    auVar144._0_4_ = fVar142 * fVar120 + fVar121 + fVar121;
    fVar109 = fVar145 * fVar120 + fVar148;
    fVar97 = (float)((uint)fVar142 ^ __LC43) / auVar144._0_4_;
    fVar160 = fVar160 + (float)local_6e8._0_4_ * fVar120;
    fVar161 = fVar161 + (float)local_6e8._4_4_ * fVar120;
    fVar162 = fVar162 + fStack_6e0 * fVar120;
    fVar163 = fVar163 + fStack_6dc * fVar120;
    fVar151 = fVar151 + fVar120 * (float)local_6d8._0_4_;
    fVar152 = fVar152 + fVar120 * (float)local_6d8._4_4_;
    fVar153 = fVar153 + fVar120 * fStack_6d0;
    fVar154 = fVar154 + fVar120 * fStack_6cc;
    fVar120 = (float)((uint)(fVar142 * fVar74 + fVar148) ^ __LC43) / auVar144._0_4_;
    auVar144._4_4_ = auVar144._0_4_;
    auVar144._8_4_ = auVar144._0_4_;
    auVar144._12_4_ = auVar144._0_4_;
    fVar142 = fVar109 * fVar120 + fVar168 + fVar168 + fVar74 * fVar145;
    fVar93 = (float)((uint)fVar145 ^ __LC43) / fVar142;
    fVar168 = (float)local_6e8._0_4_ * fVar74 + fVar155 + fVar120 * fVar160;
    fVar145 = (float)local_6e8._4_4_ * fVar74 + fVar157 + fVar120 * fVar161;
    fVar148 = fStack_6e0 * fVar74 + fVar158 + fVar120 * fVar162;
    fVar155 = fStack_6dc * fVar74 + fVar159 + fVar120 * fVar163;
    auVar149._0_4_ = 0.0 - fVar168;
    auVar149._4_4_ = 0.0 - fVar145;
    auVar149._8_4_ = 0.0 - fVar148;
    auVar149._12_4_ = 0.0 - fVar155;
    fVar157 = fVar74 * (float)local_6d8._0_4_ + fVar164 + fVar120 * fVar151;
    fVar158 = fVar74 * (float)local_6d8._4_4_ + fVar165 + fVar120 * fVar152;
    fVar159 = fVar74 * fStack_6d0 + fVar166 + fVar120 * fVar153;
    fVar120 = fVar74 * fStack_6cc + fVar167 + fVar120 * fVar154;
    auVar143._4_4_ = fVar142;
    auVar143._0_4_ = fVar142;
    auVar143._8_4_ = fVar142;
    auVar143._12_4_ = fVar142;
    auVar150 = divps(auVar149,auVar143);
    auVar146._0_4_ = 0.0 - fVar157;
    auVar146._4_4_ = 0.0 - fVar158;
    auVar146._8_4_ = 0.0 - fVar159;
    auVar146._12_4_ = 0.0 - fVar120;
    auVar146 = divps(auVar146,auVar143);
    *(undefined1 (*) [16])pFVar68 = auVar150;
    fVar142 = (float)((uint)fVar109 ^ __LC43) / fVar142;
    *(undefined1 (*) [16])(pFVar68 + 0x10) = auVar146;
    fVar151 = fVar142 * fVar157 + fVar151;
    fVar152 = fVar142 * fVar158 + fVar152;
    fVar153 = fVar142 * fVar159 + fVar153;
    fVar154 = fVar142 * fVar120 + fVar154;
    fVar160 = fVar142 * fVar168 + fVar160;
    fVar161 = fVar142 * fVar145 + fVar161;
    fVar162 = fVar142 * fVar148 + fVar162;
    fVar163 = fVar142 * fVar155 + fVar163;
    auVar119._0_4_ = 0.0 - (fVar97 * fVar151 + (float)local_6d8._0_4_ + fVar93 * fVar157);
    auVar119._4_4_ = 0.0 - (fVar97 * fVar152 + (float)local_6d8._4_4_ + fVar93 * fVar158);
    auVar119._8_4_ = 0.0 - (fVar97 * fVar153 + fStack_6d0 + fVar93 * fVar159);
    auVar119._12_4_ = 0.0 - (fVar97 * fVar154 + fStack_6cc + fVar93 * fVar120);
    auVar83._0_4_ = 0.0 - (fVar97 * fVar160 + (float)local_6e8._0_4_ + fVar168 * fVar93);
    auVar83._4_4_ = 0.0 - (fVar97 * fVar161 + (float)local_6e8._4_4_ + fVar145 * fVar93);
    auVar83._8_4_ = 0.0 - (fVar97 * fVar162 + fStack_6e0 + fVar148 * fVar93);
    auVar83._12_4_ = 0.0 - (fVar97 * fVar163 + fStack_6dc + fVar155 * fVar93);
    auVar131 = divps(auVar119,auVar147);
    auVar143 = divps(auVar83,auVar147);
    *(float *)(pFVar47 + 0x10) = __LC44 * auVar131._0_4_ + auVar146._0_4_;
    *(float *)(pFVar47 + 0x14) = _UNK_0010b394 * auVar131._4_4_ + auVar146._4_4_;
    *(float *)(pFVar47 + 0x18) = _UNK_0010b398 * auVar131._8_4_ + auVar146._8_4_;
    *(float *)(pFVar47 + 0x1c) = _UNK_0010b39c * auVar131._12_4_ + auVar146._12_4_;
    auVar115._0_4_ = 0.0 - fVar160;
    auVar115._4_4_ = 0.0 - fVar161;
    auVar115._8_4_ = 0.0 - fVar162;
    auVar115._12_4_ = 0.0 - fVar163;
    auVar131 = divps(auVar115,auVar144);
    *(float *)pFVar47 = auVar143._0_4_ * __LC44 + auVar150._0_4_;
    *(float *)(pFVar47 + 4) = auVar143._4_4_ * _UNK_0010b394 + auVar150._4_4_;
    *(float *)(pFVar47 + 8) = auVar143._8_4_ * _UNK_0010b398 + auVar150._8_4_;
    *(float *)(pFVar47 + 0xc) = auVar143._12_4_ * _UNK_0010b39c + auVar150._12_4_;
    *(float *)pFVar65 = auVar131._0_4_ * __LC44 + auVar150._0_4_;
    *(float *)(pFVar65 + 4) = auVar131._4_4_ * _UNK_0010b394 + auVar150._4_4_;
    *(float *)(pFVar65 + 8) = auVar131._8_4_ * _UNK_0010b398 + auVar150._8_4_;
    *(float *)(pFVar65 + 0xc) = auVar131._12_4_ * _UNK_0010b39c + auVar150._12_4_;
    auVar150._0_4_ = 0.0 - fVar151;
    auVar150._4_4_ = 0.0 - fVar152;
    auVar150._8_4_ = 0.0 - fVar153;
    auVar150._12_4_ = 0.0 - fVar154;
    auVar131 = divps(auVar150,auVar144);
    *(float *)(pFVar65 + 0x10) = __LC44 * auVar131._0_4_ + auVar146._0_4_;
    *(float *)(pFVar65 + 0x14) = _UNK_0010b394 * auVar131._4_4_ + auVar146._4_4_;
    *(float *)(pFVar65 + 0x18) = _UNK_0010b398 * auVar131._8_4_ + auVar146._8_4_;
    *(float *)(pFVar65 + 0x1c) = _UNK_0010b39c * auVar131._12_4_ + auVar146._12_4_;
    pFVar65 = pFVar65 + 0x20;
    pFVar47 = pFVar47 + 0x20;
    pFVar68 = pFVar68 + 0x20;
  } while (param_4 + 0x60 != pFVar58);
  if (uVar56 == 0) {
    auVar125 = (undefined1  [16])0x0;
    lVar51 = 0;
    lVar72 = 0;
    auVar156._0_12_ = ZEXT812(0);
    auVar156._12_4_ = 0.0;
    do {
      while( true ) {
        _local_6c8 = auVar156;
        local_438 = *(undefined8 *)(local_558 + lVar51);
        uStack_430 = *(undefined8 *)(local_558 + lVar51 + 8);
        local_3e8 = *(undefined8 *)(local_5a8 + lVar51);
        uStack_3e0 = *(undefined8 *)(local_5a8 + lVar51 + 8);
        local_428 = *(undefined8 *)(local_548 + lVar51);
        uStack_420 = *(undefined8 *)(local_548 + lVar51 + 8);
        local_418 = *(undefined8 *)(local_618 + lVar51);
        uStack_410 = *(undefined8 *)(local_618 + lVar51 + 8);
        local_408 = *(undefined8 *)(local_608 + lVar51);
        uStack_400 = *(undefined8 *)(local_608 + lVar51 + 8);
        local_3f8 = *(undefined8 *)(local_5b8 + lVar51);
        uStack_3f0 = *(undefined8 *)(local_5b8 + lVar51 + 8);
        pFVar58 = (Float *)&local_438;
        do {
          auVar110._0_12_ = ZEXT812(0);
          auVar110._12_4_ = 0;
          auVar77._0_12_ = ZEXT812(0);
          auVar77._12_4_ = 0;
          auVar143 = maxps(auVar110,*(undefined1 (*) [16])pFVar58);
          auVar131 = maxps(auVar77,*(undefined1 (*) [16])(pFVar58 + 0x10));
          if (lVar72 == 1) {
            auVar116._0_4_ = auVar143._0_4_ * _LC47;
            auVar116._4_4_ = auVar143._4_4_ * _UNK_0010b3a4;
            auVar116._8_4_ = auVar143._8_4_ * _UNK_0010b3a8;
            auVar116._12_4_ = auVar143._12_4_ * _UNK_0010b3ac;
            auVar88._0_4_ = auVar131._0_4_ * _LC47;
            auVar88._4_4_ = auVar131._4_4_ * _UNK_0010b3a4;
            auVar88._8_4_ = auVar131._8_4_ * _UNK_0010b3a8;
            auVar88._12_4_ = auVar131._12_4_ * _UNK_0010b3ac;
            auVar138._8_4_ = _LC49;
            auVar138._0_8_ = CONCAT44(_LC49,_LC49);
            auVar138._12_4_ = _LC49;
            auVar143 = minps(auVar138,auVar116);
            auVar117._8_4_ = _LC49;
            auVar117._0_8_ = CONCAT44(_LC49,_LC49);
            auVar117._12_4_ = _LC49;
            auVar131 = minps(auVar117,auVar88);
          }
          else {
            auVar111._0_4_ = auVar143._0_4_ * fVar75;
            auVar111._4_4_ = auVar143._4_4_ * fVar75;
            auVar111._8_4_ = auVar143._8_4_ * fVar75;
            auVar111._12_4_ = auVar143._12_4_ * fVar75;
            auVar132._4_4_ = uVar42;
            auVar132._0_4_ = uVar42;
            auVar132._8_4_ = uVar42;
            auVar132._12_4_ = uVar42;
            auVar78._0_4_ = auVar131._0_4_ * fVar75;
            auVar78._4_4_ = auVar131._4_4_ * fVar75;
            auVar78._8_4_ = auVar131._8_4_ * fVar75;
            auVar78._12_4_ = auVar131._12_4_ * fVar75;
            auVar143 = minps(auVar132,auVar111);
            auVar112._4_4_ = uVar42;
            auVar112._0_4_ = uVar42;
            auVar112._8_4_ = uVar42;
            auVar112._12_4_ = uVar42;
            auVar131 = minps(auVar112,auVar78);
          }
          *(undefined1 (*) [16])pFVar58 = auVar143;
          pFVar47 = pFVar58 + 0x20;
          *(undefined1 (*) [16])(pFVar58 + 0x10) = auVar131;
          pauVar62 = (undefined1 (*) [16])local_348;
          pFVar58 = pFVar47;
          pFVar65 = (Float *)&local_438;
        } while (local_3d8 != pFVar47);
        do {
          auVar79._0_4_ = (int)*(float *)&pFVar65->field_0x0;
          auVar79._4_4_ = (int)*(float *)(pFVar65 + 4);
          auVar79._8_4_ = (int)*(float *)(pFVar65 + 8);
          auVar79._12_4_ = (int)*(float *)(pFVar65 + 0xc);
          auVar113._0_4_ = (int)*(float *)&pFVar65[0x10].field_0x0;
          auVar113._4_4_ = (int)*(float *)(pFVar65 + 0x14);
          auVar113._8_4_ = (int)*(float *)(pFVar65 + 0x18);
          auVar113._12_4_ = (int)*(float *)(pFVar65 + 0x1c);
          pFVar65 = pFVar65 + 0x20;
          auVar131 = packssdw(auVar79,auVar113);
          *pauVar62 = auVar131;
          pauVar62 = pauVar62 + 2;
        } while (local_3d8 != pFVar65);
        lVar63 = 0x10;
        do {
          auVar80._0_4_ = (int)*(float *)((long)local_448 + lVar63);
          auVar80._4_4_ = (int)*(float *)((long)local_448 + lVar63 + 4);
          auVar80._8_4_ = (int)*(float *)((long)local_448 + lVar63 + 8);
          auVar80._12_4_ = (int)*(float *)((long)local_448 + lVar63 + 0xc);
          auVar114._0_4_ = (int)*(float *)((Float *)&local_438 + lVar63);
          auVar114._4_4_ = (int)*(float *)((long)&local_438 + lVar63 + 4);
          auVar114._8_4_ = (int)*(float *)((long)&uStack_430 + lVar63);
          auVar114._12_4_ = (int)*(float *)((long)&uStack_430 + lVar63 + 4);
          auVar131 = packssdw(auVar80,auVar114);
          *(undefined1 (*) [16])(*(undefined1 (*) [16])local_348 + lVar63) = auVar131;
          lVar63 = lVar63 + 0x20;
        } while (lVar63 != 0x70);
        pauVar62 = (undefined1 (*) [16])local_348;
        auVar131 = __LC3;
        auVar143 = __LC3;
        do {
          auVar115 = *pauVar62;
          iVar49 = (int)lVar72;
          if (iVar49 == 1) {
            auVar137._0_2_ = auVar115._0_2_ >> 6;
            auVar137._2_2_ = auVar115._2_2_ >> 6;
            auVar137._4_2_ = auVar115._4_2_ >> 6;
            auVar137._6_2_ = auVar115._6_2_ >> 6;
            auVar137._8_2_ = auVar115._8_2_ >> 6;
            auVar137._10_2_ = auVar115._10_2_ >> 6;
            auVar137._12_2_ = auVar115._12_2_ >> 6;
            auVar137._14_2_ = auVar115._14_2_ >> 6;
            auVar115 = psllw(auVar115,1);
            auVar115 = auVar115 | auVar137;
          }
          else {
            auVar133._0_2_ = auVar115._0_2_ >> 4;
            auVar133._2_2_ = auVar115._2_2_ >> 4;
            auVar133._4_2_ = auVar115._4_2_ >> 4;
            auVar133._6_2_ = auVar115._6_2_ >> 4;
            auVar133._8_2_ = auVar115._8_2_ >> 4;
            auVar133._10_2_ = auVar115._10_2_ >> 4;
            auVar133._12_2_ = auVar115._12_2_ >> 4;
            auVar133._14_2_ = auVar115._14_2_ >> 4;
            auVar115 = psllw(auVar115,2);
            auVar115 = auVar115 | auVar133;
          }
          auVar150 = psllw(auVar115,2);
          pauVar64 = (undefined1 (*) [16])local_348;
          do {
            auVar147 = pauVar64[2];
            if (iVar49 == 1) {
              auVar128._0_2_ = auVar147._0_2_ >> 6;
              auVar128._2_2_ = auVar147._2_2_ >> 6;
              auVar128._4_2_ = auVar147._4_2_ >> 6;
              auVar128._6_2_ = auVar147._6_2_ >> 6;
              auVar128._8_2_ = auVar147._8_2_ >> 6;
              auVar128._10_2_ = auVar147._10_2_ >> 6;
              auVar128._12_2_ = auVar147._12_2_ >> 6;
              auVar128._14_2_ = auVar147._14_2_ >> 6;
              auVar147 = psllw(auVar147,1);
              auVar147 = auVar147 | auVar128;
            }
            else {
              auVar126._0_2_ = auVar147._0_2_ >> 4;
              auVar126._2_2_ = auVar147._2_2_ >> 4;
              auVar126._4_2_ = auVar147._4_2_ >> 4;
              auVar126._6_2_ = auVar147._6_2_ >> 4;
              auVar126._8_2_ = auVar147._8_2_ >> 4;
              auVar126._10_2_ = auVar147._10_2_ >> 4;
              auVar126._12_2_ = auVar147._12_2_ >> 4;
              auVar126._14_2_ = auVar147._14_2_ >> 4;
              auVar147 = psllw(auVar147,2);
              auVar147 = auVar147 | auVar126;
            }
            pauVar59 = (undefined1 (*) [16])local_348;
            do {
              auVar144 = pauVar59[4];
              if (iVar49 == 1) {
                auVar87._0_2_ = auVar144._0_2_ >> 6;
                auVar87._2_2_ = auVar144._2_2_ >> 6;
                auVar87._4_2_ = auVar144._4_2_ >> 6;
                auVar87._6_2_ = auVar144._6_2_ >> 6;
                auVar87._8_2_ = auVar144._8_2_ >> 6;
                auVar87._10_2_ = auVar144._10_2_ >> 6;
                auVar87._12_2_ = auVar144._12_2_ >> 6;
                auVar87._14_2_ = auVar144._14_2_ >> 6;
                auVar144 = psllw(auVar144,1);
                auVar144 = auVar144 | auVar87;
              }
              else {
                auVar81._0_2_ = auVar144._0_2_ >> 4;
                auVar81._2_2_ = auVar144._2_2_ >> 4;
                auVar81._4_2_ = auVar144._4_2_ >> 4;
                auVar81._6_2_ = auVar144._6_2_ >> 4;
                auVar81._8_2_ = auVar144._8_2_ >> 4;
                auVar81._10_2_ = auVar144._10_2_ >> 4;
                auVar81._12_2_ = auVar144._12_2_ >> 4;
                auVar81._14_2_ = auVar144._14_2_ >> 4;
                auVar144 = psllw(auVar144,2);
                auVar144 = auVar144 | auVar81;
              }
              auVar134._0_12_ = ZEXT812(0);
              auVar134._12_4_ = 0;
              pVVar53 = param_3 + lVar72 * 0x10;
              auVar119 = (undefined1  [16])0x0;
              iVar44 = 0;
              do {
                sVar24 = *(short *)pVVar53;
                pVVar55 = pVVar53 + 2;
                pVVar25 = pVVar53 + 4;
                pVVar26 = pVVar53 + 8;
                pVVar27 = pVVar53 + 10;
                pVVar28 = pVVar53 + 0xc;
                pVVar29 = pVVar53 + 0xe;
                iVar45 = iVar44 + 1;
                pVVar53 = pVVar53 + 0x30;
                uVar73 = (ushort)iVar44;
                auVar82._0_2_ =
                     (uVar73 & uVar96) * (auVar147._0_2_ - auVar115._0_2_) +
                     (uVar73 >> 2) * (auVar144._0_2_ - auVar115._0_2_) + auVar150._0_2_ + sVar8;
                auVar82._2_2_ =
                     (uVar73 & uVar16) * (auVar147._2_2_ - auVar115._2_2_) +
                     (uVar73 >> 2) * (auVar144._2_2_ - auVar115._2_2_) + auVar150._2_2_ + sVar35;
                auVar82._4_2_ =
                     (uVar73 & uVar17) * (auVar147._4_2_ - auVar115._4_2_) +
                     (uVar73 >> 2) * (auVar144._4_2_ - auVar115._4_2_) + auVar150._4_2_ + sVar36;
                auVar82._6_2_ =
                     (uVar73 & uVar18) * (auVar147._6_2_ - auVar115._6_2_) +
                     (uVar73 >> 2) * (auVar144._6_2_ - auVar115._6_2_) + auVar150._6_2_ + sVar37;
                auVar82._8_2_ =
                     (uVar73 & uVar19) * (auVar147._8_2_ - auVar115._8_2_) +
                     (uVar73 >> 2) * (auVar144._8_2_ - auVar115._8_2_) + auVar150._8_2_ + sVar38;
                auVar82._10_2_ =
                     (uVar73 & uVar32) * (auVar147._10_2_ - auVar115._10_2_) +
                     (uVar73 >> 2) * (auVar144._10_2_ - auVar115._10_2_) + auVar150._10_2_ + sVar39;
                auVar82._12_2_ =
                     (uVar73 & uVar33) * (auVar147._12_2_ - auVar115._12_2_) +
                     (uVar73 >> 2) * (auVar144._12_2_ - auVar115._12_2_) + auVar150._12_2_ + sVar40;
                auVar82._14_2_ =
                     (uVar73 & uVar34) * (auVar147._14_2_ - auVar115._14_2_) +
                     (uVar73 >> 2) * (auVar144._14_2_ - auVar115._14_2_) + auVar150._14_2_ + sVar41;
                auVar83 = psraw(auVar82,2);
                sVar1 = (ushort)(-1 < auVar83._0_2_) * auVar83._0_2_;
                sVar2 = (ushort)(-1 < auVar83._2_2_) * auVar83._2_2_;
                sVar3 = (ushort)(-1 < auVar83._4_2_) * auVar83._4_2_;
                sVar4 = (ushort)(-1 < auVar83._8_2_) * auVar83._8_2_;
                sVar5 = (ushort)(-1 < auVar83._10_2_) * auVar83._10_2_;
                sVar6 = (ushort)(-1 < auVar83._12_2_) * auVar83._12_2_;
                sVar7 = (ushort)(-1 < auVar83._14_2_) * auVar83._14_2_;
                auVar31._10_2_ =
                     *(short *)pVVar25 -
                     ((ushort)(sVar13 < sVar3) * sVar13 | (ushort)(sVar13 >= sVar3) * sVar3);
                auVar31._0_10_ = (unkuint10)0;
                uVar21 = CONCAT24(*(short *)pVVar27 -
                                  ((ushort)(sVar11 < sVar5) * sVar11 |
                                  (ushort)(sVar11 >= sVar5) * sVar5),
                                  (uint)(ushort)(*(short *)pVVar26 -
                                                ((ushort)(sVar12 < sVar4) * sVar12 |
                                                (ushort)(sVar12 >= sVar4) * sVar4)));
                auVar76._0_10_ = (unkuint10)uVar21 << 0x10;
                auVar76._10_2_ =
                     *(short *)pVVar28 -
                     ((ushort)(sVar10 < sVar6) * sVar10 | (ushort)(sVar10 >= sVar6) * sVar6);
                auVar84._12_2_ = 0;
                auVar84._0_12_ = auVar76;
                auVar84._14_2_ =
                     *(short *)pVVar29 -
                     ((ushort)(sVar9 < sVar7) * sVar9 | (ushort)(sVar9 >= sVar7) * sVar7);
                fVar154 = (float)(int)(short)(sVar24 - ((ushort)(sVar15 < sVar1) * sVar15 |
                                                       (ushort)(sVar15 >= sVar1) * sVar1));
                fVar160 = (float)(SUB164(ZEXT616(CONCAT42(auVar31._8_4_,
                                                          *(short *)pVVar55 -
                                                          ((ushort)(sVar14 < sVar2) * sVar14 |
                                                          (ushort)(sVar14 >= sVar2) * sVar2))) <<
                                         0x30,4) >> 0x10);
                fVar161 = (float)(auVar31._8_4_ >> 0x10);
                fVar120 = (float)((int)auVar76._0_10_ >> 0x10);
                fVar151 = (float)(int)((int6)uVar21 >> 0x20);
                fVar152 = (float)(auVar76._8_4_ >> 0x10);
                fVar153 = (float)(auVar84._12_4_ >> 0x10);
                auVar135._0_4_ = auVar134._0_4_ + fVar154 * fVar154;
                auVar135._4_4_ = auVar134._4_4_ + fVar160 * fVar160;
                auVar135._8_4_ = auVar134._8_4_ + fVar161 * fVar161;
                auVar135._12_4_ = auVar134._12_4_ + 0.0;
                auVar127._0_4_ = auVar119._0_4_ + fVar120 * fVar120;
                auVar127._4_4_ = auVar119._4_4_ + fVar151 * fVar151;
                auVar127._8_4_ = auVar119._8_4_ + fVar152 * fVar152;
                auVar127._12_4_ = auVar119._12_4_ + fVar153 * fVar153;
                auVar119 = auVar127;
                auVar134 = auVar135;
                iVar44 = iVar45;
              } while (iVar45 != 0x10);
              auVar98._4_4_ = -(uint)(auVar127._4_4_ < auVar131._4_4_);
              auVar98._0_4_ = -(uint)(auVar127._0_4_ < auVar131._0_4_);
              auVar98._8_4_ = -(uint)(auVar127._8_4_ < auVar131._8_4_);
              auVar98._12_4_ = -(uint)(auVar127._12_4_ < auVar131._12_4_);
              auVar85._4_4_ = -(uint)(auVar135._4_4_ < auVar143._4_4_);
              auVar85._0_4_ = -(uint)(auVar135._0_4_ < auVar143._0_4_);
              auVar85._8_4_ = -(uint)(auVar135._8_4_ < auVar143._8_4_);
              auVar85._12_4_ = -(uint)(auVar135._12_4_ < auVar143._12_4_);
              auVar144 = packssdw(auVar85,auVar98);
              if ((((((((((((((((auVar144 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar144 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                              || (auVar144 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                              ) || (auVar144 >> 0x1f & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                            (auVar144 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar144 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar144 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar144 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar144 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar144 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar144 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar144 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar144 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar144 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar144 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  auVar144[0xf] < '\0') {
                auVar131 = minps(auVar127,auVar131);
                auVar143 = minps(auVar135,auVar143);
                *(undefined1 (*) [16])(local_3d8 + lVar72 * 0x30) =
                     *pauVar62 & auVar144 |
                     ~auVar144 & *(undefined1 (*) [16])(local_3d8 + lVar72 * 0x30);
                *(undefined1 (*) [16])(local_3c8 + lVar72 * 0x18) =
                     pauVar64[2] & auVar144 |
                     ~auVar144 & *(undefined1 (*) [16])(local_3c8 + lVar72 * 0x18);
                *(undefined1 (*) [16])(local_3b8 + lVar72 * 0x18) =
                     auVar144 & pauVar59[4] |
                     ~auVar144 & *(undefined1 (*) [16])(local_3b8 + lVar72 * 0x18);
              }
              pauVar59 = pauVar59 + 1;
            } while (&local_328 != pauVar59);
            pauVar64 = pauVar64 + 1;
          } while (&local_328 != pauVar64);
          pauVar62 = pauVar62 + 1;
        } while (&local_328 != pauVar62);
        local_6b8 = auVar125._0_4_;
        fStack_6b4 = auVar125._4_4_;
        fStack_6b0 = auVar125._8_4_;
        fStack_6ac = auVar125._12_4_;
        fVar154 = auVar143._0_4_;
        fVar120 = auVar131._0_4_;
        fVar151 = auVar131._4_4_;
        fVar152 = auVar131._8_4_;
        fVar153 = auVar131._12_4_;
        fVar160 = auVar143._4_4_;
        fVar161 = auVar143._8_4_;
        fVar162 = auVar143._12_4_;
        if ((uVar54 & 0x200) != 0) break;
        if (lVar72 == 1) {
          fVar163 = *(float *)(param_5 + 0xc) * *(float *)(param_5 + 0xc);
        }
        else {
          if (lVar72 == 2) {
            fVar75 = *(float *)(param_5 + 0x10) * *(float *)(param_5 + 0x10);
            auVar99._0_4_ = (float)local_6c8 + fVar154 * fVar75;
            auVar99._4_4_ = (float)auStack_6c4._0_4_ + fVar160 * fVar75;
            auVar99._8_4_ = (float)auStack_6c4._4_4_ + fVar161 * fVar75;
            auVar99._12_4_ = fStack_6bc + fVar162 * fVar75;
            auVar125._0_4_ = local_6b8 + fVar120 * fVar75;
            auVar125._4_4_ = fStack_6b4 + fVar151 * fVar75;
            auVar125._8_4_ = fStack_6b0 + fVar152 * fVar75;
            auVar125._12_4_ = fStack_6ac + fVar153 * fVar75;
            goto LAB_00102c42;
          }
          fVar163 = *(float *)(param_5 + 8) * *(float *)(param_5 + 8);
        }
        auVar156._0_4_ = (float)local_6c8 + fVar154 * fVar163;
        auVar156._4_4_ = (float)auStack_6c4._0_4_ + fVar160 * fVar163;
        auVar156._8_4_ = (float)auStack_6c4._4_4_ + fVar161 * fVar163;
        auVar156._12_4_ = fStack_6bc + fVar162 * fVar163;
        auVar125._0_4_ = local_6b8 + fVar163 * fVar120;
        auVar125._4_4_ = fStack_6b4 + fVar163 * fVar151;
        auVar125._8_4_ = fStack_6b0 + fVar163 * fVar152;
        auVar125._12_4_ = fStack_6ac + fVar163 * fVar153;
        lVar72 = lVar72 + 1;
        lVar51 = lVar51 + 0x20;
      }
      lVar72 = lVar72 + 1;
      auVar156._0_8_ = CONCAT44((float)auStack_6c4._0_4_ + fVar160,(float)local_6c8 + fVar154);
      auVar156._8_4_ = (float)auStack_6c4._4_4_ + fVar161;
      auVar156._12_4_ = fStack_6bc + fVar162;
      auVar125._0_4_ = local_6b8 + fVar120;
      auVar125._4_4_ = fStack_6b4 + fVar151;
      auVar125._8_4_ = fStack_6b0 + fVar152;
      auVar125._12_4_ = fStack_6ac + fVar153;
      lVar51 = lVar51 + 0x20;
    } while (lVar72 != 3);
    auVar99._8_4_ = auVar156._8_4_;
    auVar99._0_8_ = auVar156._0_8_;
    auVar99._12_4_ = auVar156._12_4_;
  }
  else {
    pFVar58 = local_4f8;
    pFVar65 = local_498;
    ConvertFromFakeBT709(pFVar58,local_558);
    ConvertFromFakeBT709(pFVar65,local_618);
    ConvertFromFakeBT709((Float *)&local_438,local_5b8);
    pFVar47 = local_3d8;
    lVar72 = 0;
    iVar49 = 0;
    pFVar68 = pFVar47;
    do {
      _local_348 = *(undefined8 *)(pFVar58 + lVar72);
      auStack_344._4_8_ = *(undefined8 *)(pFVar58 + lVar72 + 8);
      local_338 = *(undefined8 *)(pFVar58 + lVar72 + 0x10);
      uStack_330 = *(undefined8 *)(pFVar58 + lVar72 + 0x10 + 8);
      local_328._0_8_ = *(undefined8 *)(pFVar65 + lVar72);
      local_328._8_8_ = *(undefined8 *)(pFVar65 + lVar72 + 8);
      local_318 = *(undefined8 *)(pFVar65 + lVar72 + 0x10);
      uStack_310 = *(undefined8 *)(pFVar65 + lVar72 + 0x10 + 8);
      local_308 = *(undefined8 *)((Float *)&local_438 + lVar72);
      uStack_300 = *(undefined8 *)((long)&uStack_430 + lVar72);
      local_2f8 = *(undefined8 *)((long)&local_428 + lVar72);
      uStack_2f0 = *(undefined8 *)((long)&uStack_420 + lVar72);
      pVVar60 = local_348;
      do {
        auVar89._0_12_ = ZEXT812(0);
        auVar89._12_4_ = 0;
        auVar143 = maxps(ZEXT816(0),*(undefined1 (*) [16])pVVar60);
        auVar131 = maxps(auVar89,*(undefined1 (*) [16])(pVVar60 + 0x10));
        if (iVar49 == 1) {
          auVar107._0_4_ = auVar143._0_4_ * _LC47;
          auVar107._4_4_ = auVar143._4_4_ * _LC47;
          auVar107._8_4_ = auVar143._8_4_ * _LC47;
          auVar107._12_4_ = auVar143._12_4_ * _LC47;
          auVar124._8_4_ = _LC49;
          auVar124._0_8_ = CONCAT44(_LC49,_LC49);
          auVar124._12_4_ = _LC49;
          auVar92._0_4_ = auVar131._0_4_ * _LC47;
          auVar92._4_4_ = auVar131._4_4_ * _LC47;
          auVar92._8_4_ = auVar131._8_4_ * _LC47;
          auVar92._12_4_ = auVar131._12_4_ * _LC47;
          auVar143 = minps(auVar124,auVar107);
          auVar108._8_4_ = _LC49;
          auVar108._0_8_ = CONCAT44(_LC49,_LC49);
          auVar108._12_4_ = _LC49;
          auVar131 = minps(auVar108,auVar92);
        }
        else {
          auVar100._0_4_ = auVar143._0_4_ * _LC51;
          auVar100._4_4_ = auVar143._4_4_ * _LC51;
          auVar100._8_4_ = auVar143._8_4_ * _LC51;
          auVar100._12_4_ = auVar143._12_4_ * _LC51;
          auVar122._8_4_ = _LC53;
          auVar122._0_8_ = CONCAT44(_LC53,_LC53);
          auVar122._12_4_ = _LC53;
          auVar90._0_4_ = auVar131._0_4_ * _LC51;
          auVar90._4_4_ = auVar131._4_4_ * _LC51;
          auVar90._8_4_ = auVar131._8_4_ * _LC51;
          auVar90._12_4_ = auVar131._12_4_ * _LC51;
          auVar143 = minps(auVar122,auVar100);
          auVar101._8_4_ = _LC53;
          auVar101._0_8_ = CONCAT44(_LC53,_LC53);
          auVar101._12_4_ = _LC53;
          auVar131 = minps(auVar101,auVar90);
        }
        *(undefined1 (*) [16])pVVar60 = auVar143;
        pVVar69 = pVVar60 + 0x20;
        *(undefined1 (*) [16])(pVVar60 + 0x10) = auVar131;
        pFVar50 = pFVar68;
        pVVar60 = pVVar69;
        pVVar71 = local_348;
      } while (local_2e8 != pVVar69);
      do {
        auVar91._0_4_ = (int)*(float *)pVVar71;
        auVar91._4_4_ = (int)*(float *)(pVVar71 + 4);
        auVar91._8_4_ = (int)*(float *)(pVVar71 + 8);
        auVar91._12_4_ = (int)*(float *)(pVVar71 + 0xc);
        auVar102._0_4_ = (int)*(float *)(pVVar71 + 0x10);
        auVar102._4_4_ = (int)*(float *)(pVVar71 + 0x14);
        auVar102._8_4_ = (int)*(float *)(pVVar71 + 0x18);
        auVar102._12_4_ = (int)*(float *)(pVVar71 + 0x1c);
        pVVar71 = pVVar71 + 0x20;
        auVar131 = packssdw(auVar91,auVar102);
        *(undefined1 (*) [16])pFVar50 = auVar131;
        pFVar50 = pFVar50 + 0x10;
      } while (local_2e8 != pVVar71);
      iVar49 = iVar49 + 1;
      pFVar68 = pFVar68 + 0x30;
      lVar72 = lVar72 + 0x20;
    } while (iVar49 != 3);
    iVar49 = 0;
    auVar115 = psllw(local_3a8,1);
    auVar143 = psllw(local_398,1);
    auVar129._0_2_ = local_3a8._0_2_ >> 6;
    auVar129._2_2_ = local_3a8._2_2_ >> 6;
    auVar129._4_2_ = local_3a8._4_2_ >> 6;
    auVar129._6_2_ = local_3a8._6_2_ >> 6;
    auVar129._8_2_ = local_3a8._8_2_ >> 6;
    auVar129._10_2_ = local_3a8._10_2_ >> 6;
    auVar129._12_2_ = local_3a8._12_2_ >> 6;
    auVar129._14_2_ = local_3a8._14_2_ >> 6;
    auVar131 = psllw(local_388,1);
    auVar123._0_2_ = local_398._0_2_ >> 6;
    auVar123._2_2_ = local_398._2_2_ >> 6;
    auVar123._4_2_ = local_398._4_2_ >> 6;
    auVar123._6_2_ = local_398._6_2_ >> 6;
    auVar123._8_2_ = local_398._8_2_ >> 6;
    auVar123._10_2_ = local_398._10_2_ >> 6;
    auVar123._12_2_ = local_398._12_2_ >> 6;
    auVar123._14_2_ = local_398._14_2_ >> 6;
    auVar118._0_2_ = local_388._0_2_ >> 6;
    auVar118._2_2_ = local_388._2_2_ >> 6;
    auVar118._4_2_ = local_388._4_2_ >> 6;
    auVar118._6_2_ = local_388._6_2_ >> 6;
    auVar118._8_2_ = local_388._8_2_ >> 6;
    auVar118._10_2_ = local_388._10_2_ >> 6;
    auVar118._12_2_ = local_388._12_2_ >> 6;
    auVar118._14_2_ = local_388._14_2_ >> 6;
    pVVar60 = local_348;
    do {
      auVar150 = auVar115 | auVar129;
      auVar147 = auVar131 | auVar118;
      auVar144 = auVar143 | auVar123;
      if (iVar49 != 1) {
        auVar150 = *(undefined1 (*) [16])pFVar47;
        auVar147 = *(undefined1 (*) [16])(pFVar47 + 0x10);
        auVar144 = *(undefined1 (*) [16])(pFVar47 + 0x20);
        auVar119 = psllw(auVar150,2);
        auVar103._0_2_ = auVar150._0_2_ >> 4;
        auVar103._2_2_ = auVar150._2_2_ >> 4;
        auVar103._4_2_ = auVar150._4_2_ >> 4;
        auVar103._6_2_ = auVar150._6_2_ >> 4;
        auVar103._8_2_ = auVar150._8_2_ >> 4;
        auVar103._10_2_ = auVar150._10_2_ >> 4;
        auVar103._12_2_ = auVar150._12_2_ >> 4;
        auVar103._14_2_ = auVar150._14_2_ >> 4;
        auVar104._0_2_ = auVar147._0_2_ >> 4;
        auVar104._2_2_ = auVar147._2_2_ >> 4;
        auVar104._4_2_ = auVar147._4_2_ >> 4;
        auVar104._6_2_ = auVar147._6_2_ >> 4;
        auVar104._8_2_ = auVar147._8_2_ >> 4;
        auVar104._10_2_ = auVar147._10_2_ >> 4;
        auVar104._12_2_ = auVar147._12_2_ >> 4;
        auVar104._14_2_ = auVar147._14_2_ >> 4;
        auVar83 = psllw(auVar147,2);
        auVar105._0_2_ = auVar144._0_2_ >> 4;
        auVar105._2_2_ = auVar144._2_2_ >> 4;
        auVar105._4_2_ = auVar144._4_2_ >> 4;
        auVar105._6_2_ = auVar144._6_2_ >> 4;
        auVar105._8_2_ = auVar144._8_2_ >> 4;
        auVar105._10_2_ = auVar144._10_2_ >> 4;
        auVar105._12_2_ = auVar144._12_2_ >> 4;
        auVar105._14_2_ = auVar144._14_2_ >> 4;
        auVar147 = psllw(auVar144,2);
        auVar150 = auVar119 | auVar103;
        auVar147 = auVar147 | auVar105;
        auVar144 = auVar83 | auVar104;
      }
      auVar119 = psllw(auVar150,2);
      pVVar71 = pVVar60;
      iVar44 = 0;
      do {
        iVar45 = iVar44 + 1;
        uVar96 = (ushort)iVar44;
        auVar106._0_2_ =
             (uVar96 & __LC55) * (auVar144._0_2_ - auVar150._0_2_) +
             (uVar96 >> 2) * (auVar147._0_2_ - auVar150._0_2_) + auVar119._0_2_ + __LC76;
        auVar106._2_2_ =
             (uVar96 & _UNK_0010b362) * (auVar144._2_2_ - auVar150._2_2_) +
             (uVar96 >> 2) * (auVar147._2_2_ - auVar150._2_2_) + auVar119._2_2_ + _UNK_0010b3b2;
        auVar106._4_2_ =
             (uVar96 & _UNK_0010b364) * (auVar144._4_2_ - auVar150._4_2_) +
             (uVar96 >> 2) * (auVar147._4_2_ - auVar150._4_2_) + auVar119._4_2_ + _UNK_0010b3b4;
        auVar106._6_2_ =
             (uVar96 & _UNK_0010b366) * (auVar144._6_2_ - auVar150._6_2_) +
             (uVar96 >> 2) * (auVar147._6_2_ - auVar150._6_2_) + auVar119._6_2_ + _UNK_0010b3b6;
        auVar106._8_2_ =
             (uVar96 & _UNK_0010b368) * (auVar144._8_2_ - auVar150._8_2_) +
             (uVar96 >> 2) * (auVar147._8_2_ - auVar150._8_2_) + auVar119._8_2_ + _UNK_0010b3b8;
        auVar106._10_2_ =
             (uVar96 & _UNK_0010b36a) * (auVar144._10_2_ - auVar150._10_2_) +
             (uVar96 >> 2) * (auVar147._10_2_ - auVar150._10_2_) + auVar119._10_2_ + _UNK_0010b3ba;
        auVar106._12_2_ =
             (uVar96 & _UNK_0010b36c) * (auVar144._12_2_ - auVar150._12_2_) +
             (uVar96 >> 2) * (auVar147._12_2_ - auVar150._12_2_) + auVar119._12_2_ + _UNK_0010b3bc;
        auVar106._14_2_ =
             (uVar96 & _UNK_0010b36e) * (auVar144._14_2_ - auVar150._14_2_) +
             (uVar96 >> 2) * (auVar147._14_2_ - auVar150._14_2_) + auVar119._14_2_ + _UNK_0010b3be;
        auVar83 = psraw(auVar106,2);
        sVar8 = (ushort)(-1 < auVar83._0_2_) * auVar83._0_2_;
        sVar9 = (ushort)(-1 < auVar83._2_2_) * auVar83._2_2_;
        sVar10 = (ushort)(-1 < auVar83._4_2_) * auVar83._4_2_;
        sVar11 = (ushort)(-1 < auVar83._6_2_) * auVar83._6_2_;
        sVar12 = (ushort)(-1 < auVar83._8_2_) * auVar83._8_2_;
        sVar13 = (ushort)(-1 < auVar83._10_2_) * auVar83._10_2_;
        sVar14 = (ushort)(-1 < auVar83._12_2_) * auVar83._12_2_;
        sVar15 = (ushort)(-1 < auVar83._14_2_) * auVar83._14_2_;
        *(ushort *)pVVar71 = (ushort)(__LC27 < sVar8) * __LC27 | (ushort)(__LC27 >= sVar8) * sVar8;
        *(ushort *)(pVVar71 + 2) =
             (ushort)(_UNK_0010b352 < sVar9) * _UNK_0010b352 |
             (ushort)(_UNK_0010b352 >= sVar9) * sVar9;
        *(ushort *)(pVVar71 + 4) =
             (ushort)(_UNK_0010b354 < sVar10) * _UNK_0010b354 |
             (ushort)(_UNK_0010b354 >= sVar10) * sVar10;
        *(ushort *)(pVVar71 + 6) =
             (ushort)(_UNK_0010b356 < sVar11) * _UNK_0010b356 |
             (ushort)(_UNK_0010b356 >= sVar11) * sVar11;
        *(ushort *)(pVVar71 + 8) =
             (ushort)(_UNK_0010b358 < sVar12) * _UNK_0010b358 |
             (ushort)(_UNK_0010b358 >= sVar12) * sVar12;
        *(ushort *)(pVVar71 + 10) =
             (ushort)(_UNK_0010b35a < sVar13) * _UNK_0010b35a |
             (ushort)(_UNK_0010b35a >= sVar13) * sVar13;
        *(ushort *)(pVVar71 + 0xc) =
             (ushort)(_UNK_0010b35c < sVar14) * _UNK_0010b35c |
             (ushort)(_UNK_0010b35c >= sVar14) * sVar14;
        *(ushort *)(pVVar71 + 0xe) =
             (ushort)(_UNK_0010b35e < sVar15) * _UNK_0010b35e |
             (ushort)(_UNK_0010b35e >= sVar15) * sVar15;
        pVVar71 = pVVar71 + 0x30;
        iVar44 = iVar45;
      } while (iVar45 != 0x10);
      iVar49 = iVar49 + 1;
      pVVar60 = pVVar60 + 0x10;
      pFVar47 = pFVar47 + 0x30;
    } while (iVar49 != 3);
    auVar125 = (undefined1  [16])0x0;
    auVar99 = ZEXT816(0);
    pVVar60 = local_348;
    do {
      pVVar71 = pVVar60 + 0x30;
      ComputeErrorFakeBT709((ETCComputer *)&local_638,pVVar60,param_4);
      local_6e8._0_4_ = auVar99._0_4_;
      local_6e8._4_4_ = auVar99._4_4_;
      fStack_6e0 = auVar99._8_4_;
      fStack_6dc = auVar99._12_4_;
      local_6d8._0_4_ = auVar125._0_4_;
      local_6d8._4_4_ = auVar125._4_4_;
      fStack_6d0 = auVar125._8_4_;
      fStack_6cc = auVar125._12_4_;
      auVar99._0_4_ = (float)local_6e8._0_4_ + local_638;
      auVar99._4_4_ = (float)local_6e8._4_4_ + fStack_634;
      auVar99._8_4_ = fStack_6e0 + fStack_630;
      auVar99._12_4_ = fStack_6dc + fStack_62c;
      auVar125._0_4_ = (float)local_6d8._0_4_ + local_628;
      auVar125._4_4_ = (float)local_6d8._4_4_ + fStack_624;
      auVar125._8_4_ = fStack_6d0 + fStack_620;
      auVar125._12_4_ = fStack_6cc + fStack_61c;
      param_4 = param_4 + 0x60;
      pVVar60 = pVVar71;
    } while (local_48 != pVVar71);
  }
LAB_00102c42:
  pFVar58 = local_3d8;
  auVar131 = *(undefined1 (*) [16])param_2;
  auVar143 = *(undefined1 (*) [16])(param_2 + 0x10);
  auVar86._4_4_ = -(uint)(auVar99._4_4_ < auVar131._4_4_);
  auVar86._0_4_ = -(uint)(auVar99._0_4_ < auVar131._0_4_);
  auVar86._8_4_ = -(uint)(auVar99._8_4_ < auVar131._8_4_);
  auVar86._12_4_ = -(uint)(auVar99._12_4_ < auVar131._12_4_);
  auVar136._4_4_ = -(uint)(auVar125._4_4_ < auVar143._4_4_);
  auVar136._0_4_ = -(uint)(auVar125._0_4_ < auVar143._0_4_);
  auVar136._8_4_ = -(uint)(auVar125._8_4_ < auVar143._8_4_);
  auVar136._12_4_ = -(uint)(auVar125._12_4_ < auVar143._12_4_);
  local_648 = packssdw(auVar86,auVar136);
  if ((((((((((((((((local_648 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (local_648 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (local_648 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (local_648 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (local_648 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (local_648 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (local_648 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (local_648 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (local_648 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (local_648 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (local_648 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (local_648 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (local_648 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (local_648 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (local_648 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || local_648[0xf] < '\0'
     ) {
    auVar115 = minps(auVar131,auVar99);
    auVar131 = minps(auVar143,auVar125);
    lVar72 = 0;
    psVar70 = (short *)local_648;
    *(undefined1 (*) [16])param_2 = auVar115;
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar131;
    do {
      if (*psVar70 != 0) {
        uVar96 = *(ushort *)(pFVar58 + 0x20);
        uVar16 = *(ushort *)(pFVar58 + 0x60);
        uVar17 = *(ushort *)pFVar58;
        local_6c8._0_2_ = *(ushort *)(pFVar58 + 0x40);
        uVar18 = *(ushort *)(pFVar58 + 0x50);
        uVar56 = *(ushort *)(pFVar58 + 0x30) & 0x3f;
        uVar57 = uVar16 & 7;
        uVar61 = (int)(uint)*(ushort *)(pFVar58 + 0x30) >> 6;
        uVar52 = (int)(uint)uVar16 >> 5;
        uVar67 = (uint)uVar17 + (uint)uVar17 & 6 | uVar61;
        uVar19 = *(ushort *)(pFVar58 + 0x70);
        uVar43 = (int)(uint)uVar16 >> 3 & 3;
        uVar66 = uVar56 * 2 & 6 | uVar52;
        uVar16 = *(ushort *)(pFVar58 + 0x80);
        uVar54 = 0;
        if ((uVar67 & 4) != 0) {
          uVar54 = (uint)(((int)(uint)uVar17 >> 2) + uVar67 < 8) << 0x1f;
        }
        if (((uVar66 & 4) != 0) && (uVar66 + ((int)uVar56 >> 2) < 8)) {
          uVar54 = uVar54 | 0x800000;
        }
        uVar66 = uVar54 | 0xe000;
        if (((int)uVar57 >> 1) + uVar43 < 4) {
          uVar66 = uVar54 | 0x400;
        }
        uVar54 = uVar56 << 0x11 |
                 (uint)uVar17 << 0x19 | (uint)(*(ushort *)(pFVar58 + 0x10) & 1) | uVar66 |
                 uVar57 << 7 | uVar61 << 0x18 | uVar52 << 0x10;
        uVar56 = uVar54 | ((int)(uint)*(ushort *)(pFVar58 + 0x10) >> 1) << 2;
        *(uint *)(param_1 + lVar72) =
             uVar54 >> 0x18 | (uVar56 & 0xff0000) >> 8 | (uVar43 << 0xb | uVar56 & 0xff00) << 8 |
             (uVar56 | 2) << 0x18;
        iVar49 = 0x18;
        puVar46 = param_1 + lVar72;
        do {
          bVar48 = (byte)iVar49;
          iVar49 = iVar49 + -8;
          puVar46[4] = (uchar)(((uint)uVar18 << 6 |
                               (int)local_6c8 << 0x19 | (uint)uVar19 << 0x13 | (uint)uVar16 |
                               (uint)uVar96 << 0xd) >> (bVar48 & 0x1f));
          puVar46 = puVar46 + 1;
        } while (iVar49 != -8);
      }
      lVar72 = lVar72 + 8;
      psVar70 = psVar70 + 1;
      pFVar58 = pFVar58 + 2;
    } while (lVar72 != 0x40);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::QuantizeETC2Alpha(int, cvtt::ParallelMath::VInt16<2> const&,
   cvtt::ParallelMath::VInt16<2> const&, cvtt::ParallelMath::VInt16<2> const&, bool, bool,
   cvtt::ParallelMath::VInt16<2>&, cvtt::ParallelMath::VInt16<2>&) */

void cvtt::Internal::ETCComputer::QuantizeETC2Alpha
               (int param_1,VInt16 *param_2,VInt16 *param_3,VInt16 *param_4,bool param_5,
               bool param_6,VInt16 *param_7,VInt16 *param_8)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  short sVar13;
  short sVar14;
  ushort uVar15;
  short sVar16;
  ushort uVar17;
  short sVar18;
  ushort uVar19;
  short sVar20;
  ushort uVar21;
  short sVar22;
  ushort uVar23;
  short sVar24;
  ushort uVar25;
  short sVar26;
  ushort uVar27;
  undefined1 auVar28 [16];
  ushort local_48 [8];
  ushort local_38 [8];
  undefined1 local_28 [16];
  
  sVar13 = *(short *)param_3;
  sVar14 = *(short *)(param_3 + 2);
  sVar16 = *(short *)(param_3 + 4);
  sVar18 = *(short *)(param_3 + 6);
  sVar20 = *(short *)(param_3 + 8);
  sVar22 = *(short *)(param_3 + 10);
  sVar24 = *(short *)(param_3 + 0xc);
  sVar26 = *(short *)(param_3 + 0xe);
  sVar2 = *(short *)param_4;
  sVar3 = *(short *)(param_4 + 2);
  sVar4 = *(short *)(param_4 + 4);
  sVar5 = *(short *)(param_4 + 6);
  sVar6 = *(short *)(param_4 + 8);
  sVar7 = *(short *)(param_4 + 10);
  sVar8 = *(short *)(param_4 + 0xc);
  sVar9 = *(short *)(param_4 + 0xe);
  lVar11 = 0;
  auVar12._0_2_ = (*(short *)param_2 - sVar13) * 2 + sVar2;
  auVar12._2_2_ = (*(short *)(param_2 + 2) - sVar14) * 2 + sVar3;
  auVar12._4_2_ = (*(short *)(param_2 + 4) - sVar16) * 2 + sVar4;
  auVar12._6_2_ = (*(short *)(param_2 + 6) - sVar18) * 2 + sVar5;
  auVar12._8_2_ = (*(short *)(param_2 + 8) - sVar20) * 2 + sVar6;
  auVar12._10_2_ = (*(short *)(param_2 + 10) - sVar22) * 2 + sVar7;
  auVar12._12_2_ = (*(short *)(param_2 + 0xc) - sVar24) * 2 + sVar8;
  auVar12._14_2_ = (*(short *)(param_2 + 0xe) - sVar26) * 2 + sVar9;
  auVar12 = psraw(auVar12,0xf);
  do {
    uVar10 = *(ushort *)((long)local_48 + lVar11) / *(ushort *)(param_4 + lVar11);
    if (0xc < uVar10) {
      uVar10 = 0xc;
    }
    bVar1 = Tables::ETC2::g_alphaRoundingTables[(ulong)uVar10 + (long)param_1 * 0xd];
    *(ushort *)((long)local_38 + lVar11) = (ushort)bVar1;
    *(undefined2 *)(local_28 + lVar11) =
         *(undefined2 *)
          (Tables::ETC2::g_alphaModifierTablePositive + ((ulong)bVar1 + (long)param_1 * 4) * 2);
    lVar11 = lVar11 + 2;
  } while (lVar11 != 0x10);
  auVar28 = local_28 ^ auVar12;
  sVar13 = sVar2 * auVar28._0_2_ + sVar13;
  sVar14 = sVar3 * auVar28._2_2_ + sVar14;
  sVar16 = sVar4 * auVar28._4_2_ + sVar16;
  sVar18 = sVar5 * auVar28._6_2_ + sVar18;
  sVar20 = sVar6 * auVar28._8_2_ + sVar20;
  sVar22 = sVar7 * auVar28._10_2_ + sVar22;
  sVar24 = sVar8 * auVar28._12_2_ + sVar24;
  sVar26 = sVar9 * auVar28._14_2_ + sVar26;
  if (param_5) {
    if (param_6) {
      uVar10 = (ushort)(sVar13 < __LC30) * __LC30 | (ushort)(sVar13 >= __LC30) * sVar13;
      uVar15 = (ushort)(sVar14 < _UNK_0010b332) * _UNK_0010b332 |
               (ushort)(sVar14 >= _UNK_0010b332) * sVar14;
      uVar17 = (ushort)(sVar16 < _UNK_0010b334) * _UNK_0010b334 |
               (ushort)(sVar16 >= _UNK_0010b334) * sVar16;
      uVar19 = (ushort)(sVar18 < _UNK_0010b336) * _UNK_0010b336 |
               (ushort)(sVar18 >= _UNK_0010b336) * sVar18;
      uVar21 = (ushort)(sVar20 < _UNK_0010b338) * _UNK_0010b338 |
               (ushort)(sVar20 >= _UNK_0010b338) * sVar20;
      uVar23 = (ushort)(sVar22 < _UNK_0010b33a) * _UNK_0010b33a |
               (ushort)(sVar22 >= _UNK_0010b33a) * sVar22;
      uVar25 = (ushort)(sVar24 < _UNK_0010b33c) * _UNK_0010b33c |
               (ushort)(sVar24 >= _UNK_0010b33c) * sVar24;
      uVar27 = (ushort)(sVar26 < _UNK_0010b33e) * _UNK_0010b33e |
               (ushort)(sVar26 >= _UNK_0010b33e) * sVar26;
      uVar10 = (ushort)(__LC57 < (short)uVar10) * __LC57 | (__LC57 >= (short)uVar10) * uVar10;
      uVar15 = (ushort)(_UNK_0010b3c2 < (short)uVar15) * _UNK_0010b3c2 |
               (_UNK_0010b3c2 >= (short)uVar15) * uVar15;
      uVar17 = (ushort)(_UNK_0010b3c4 < (short)uVar17) * _UNK_0010b3c4 |
               (_UNK_0010b3c4 >= (short)uVar17) * uVar17;
      uVar19 = (ushort)(_UNK_0010b3c6 < (short)uVar19) * _UNK_0010b3c6 |
               (_UNK_0010b3c6 >= (short)uVar19) * uVar19;
      uVar21 = (ushort)(_UNK_0010b3c8 < (short)uVar21) * _UNK_0010b3c8 |
               (_UNK_0010b3c8 >= (short)uVar21) * uVar21;
      uVar23 = (ushort)(_UNK_0010b3ca < (short)uVar23) * _UNK_0010b3ca |
               (_UNK_0010b3ca >= (short)uVar23) * uVar23;
      uVar25 = (ushort)(_UNK_0010b3cc < (short)uVar25) * _UNK_0010b3cc |
               (_UNK_0010b3cc >= (short)uVar25) * uVar25;
      uVar27 = (ushort)(_UNK_0010b3ce < (short)uVar27) * _UNK_0010b3ce |
               (_UNK_0010b3ce >= (short)uVar27) * uVar27;
    }
    else {
      sVar13 = (ushort)(-1 < sVar13) * sVar13;
      sVar14 = (ushort)(-1 < sVar14) * sVar14;
      sVar16 = (ushort)(-1 < sVar16) * sVar16;
      sVar18 = (ushort)(-1 < sVar18) * sVar18;
      sVar20 = (ushort)(-1 < sVar20) * sVar20;
      sVar22 = (ushort)(-1 < sVar22) * sVar22;
      sVar24 = (ushort)(-1 < sVar24) * sVar24;
      sVar26 = (ushort)(-1 < sVar26) * sVar26;
      uVar10 = (ushort)(__LC57 < sVar13) * __LC57 | (ushort)(__LC57 >= sVar13) * sVar13;
      uVar15 = (ushort)(_UNK_0010b3c2 < sVar14) * _UNK_0010b3c2 |
               (ushort)(_UNK_0010b3c2 >= sVar14) * sVar14;
      uVar17 = (ushort)(_UNK_0010b3c4 < sVar16) * _UNK_0010b3c4 |
               (ushort)(_UNK_0010b3c4 >= sVar16) * sVar16;
      uVar19 = (ushort)(_UNK_0010b3c6 < sVar18) * _UNK_0010b3c6 |
               (ushort)(_UNK_0010b3c6 >= sVar18) * sVar18;
      uVar21 = (ushort)(_UNK_0010b3c8 < sVar20) * _UNK_0010b3c8 |
               (ushort)(_UNK_0010b3c8 >= sVar20) * sVar20;
      uVar23 = (ushort)(_UNK_0010b3ca < sVar22) * _UNK_0010b3ca |
               (ushort)(_UNK_0010b3ca >= sVar22) * sVar22;
      uVar25 = (ushort)(_UNK_0010b3cc < sVar24) * _UNK_0010b3cc |
               (ushort)(_UNK_0010b3cc >= sVar24) * sVar24;
      uVar27 = (ushort)(_UNK_0010b3ce < sVar26) * _UNK_0010b3ce |
               (ushort)(_UNK_0010b3ce >= sVar26) * sVar26;
    }
  }
  else {
    sVar13 = (ushort)(-1 < sVar13) * sVar13;
    sVar14 = (ushort)(-1 < sVar14) * sVar14;
    sVar16 = (ushort)(-1 < sVar16) * sVar16;
    sVar18 = (ushort)(-1 < sVar18) * sVar18;
    sVar20 = (ushort)(-1 < sVar20) * sVar20;
    sVar22 = (ushort)(-1 < sVar22) * sVar22;
    sVar24 = (ushort)(-1 < sVar24) * sVar24;
    sVar26 = (ushort)(-1 < sVar26) * sVar26;
    uVar10 = (ushort)(__LC27 < sVar13) * __LC27 | (ushort)(__LC27 >= sVar13) * sVar13;
    uVar15 = (ushort)(_UNK_0010b352 < sVar14) * _UNK_0010b352 |
             (ushort)(_UNK_0010b352 >= sVar14) * sVar14;
    uVar17 = (ushort)(_UNK_0010b354 < sVar16) * _UNK_0010b354 |
             (ushort)(_UNK_0010b354 >= sVar16) * sVar16;
    uVar19 = (ushort)(_UNK_0010b356 < sVar18) * _UNK_0010b356 |
             (ushort)(_UNK_0010b356 >= sVar18) * sVar18;
    uVar21 = (ushort)(_UNK_0010b358 < sVar20) * _UNK_0010b358 |
             (ushort)(_UNK_0010b358 >= sVar20) * sVar20;
    uVar23 = (ushort)(_UNK_0010b35a < sVar22) * _UNK_0010b35a |
             (ushort)(_UNK_0010b35a >= sVar22) * sVar22;
    uVar25 = (ushort)(_UNK_0010b35c < sVar24) * _UNK_0010b35c |
             (ushort)(_UNK_0010b35c >= sVar24) * sVar24;
    uVar27 = (ushort)(_UNK_0010b35e < sVar26) * _UNK_0010b35e |
             (ushort)(_UNK_0010b35e >= sVar26) * sVar26;
  }
  auVar28._2_2_ = _UNK_0010b302;
  auVar28._0_2_ = __LC58;
  auVar28._4_2_ = _UNK_0010b304;
  auVar28._6_2_ = _UNK_0010b306;
  auVar28._8_2_ = _UNK_0010b308;
  auVar28._10_2_ = _UNK_0010b30a;
  auVar28._12_2_ = _UNK_0010b30c;
  auVar28._14_2_ = _UNK_0010b30e;
  auVar12 = auVar12 & auVar28;
  *(ushort *)param_8 = uVar10;
  *(ushort *)(param_8 + 2) = uVar15;
  *(ushort *)(param_8 + 4) = uVar17;
  *(ushort *)(param_8 + 6) = uVar19;
  *(ushort *)(param_8 + 8) = uVar21;
  *(ushort *)(param_8 + 10) = uVar23;
  *(ushort *)(param_8 + 0xc) = uVar25;
  *(ushort *)(param_8 + 0xe) = uVar27;
  sVar14 = _UNK_0010b302 + local_38[1];
  sVar13 = _UNK_0010b304 + local_38[2];
  sVar26 = _UNK_0010b306 + local_38[3];
  sVar24 = _UNK_0010b308 + local_38[4];
  sVar22 = _UNK_0010b30a + local_38[5];
  sVar18 = _UNK_0010b30c + local_38[6];
  sVar16 = _UNK_0010b30e + local_38[7];
  *(ushort *)param_7 = (__LC58 + local_38[0]) - auVar12._0_2_;
  *(short *)(param_7 + 2) = sVar14 - auVar12._2_2_;
  *(short *)(param_7 + 4) = sVar13 - auVar12._4_2_;
  *(short *)(param_7 + 6) = sVar26 - auVar12._6_2_;
  *(short *)(param_7 + 8) = sVar24 - auVar12._8_2_;
  *(short *)(param_7 + 10) = sVar22 - auVar12._10_2_;
  *(short *)(param_7 + 0xc) = sVar18 - auVar12._12_2_;
  *(short *)(param_7 + 0xe) = sVar16 - auVar12._14_2_;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::CompressETC2AlphaBlockInternal(unsigned char*,
   cvtt::ParallelMath::VInt16<2> const*, bool, bool, cvtt::Options const&) */

void cvtt::Internal::ETCComputer::CompressETC2AlphaBlockInternal
               (uchar *param_1,VInt16 *param_2,bool param_3,bool param_4,Options *param_5)

{
  short sVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  bool bVar5;
  int iVar6;
  ushort uVar7;
  VInt16 *pVVar8;
  int *piVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  uint uVar12;
  undefined2 *puVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  VInt16 *pVVar18;
  int iVar19;
  long in_FS_OFFSET;
  int iVar20;
  undefined1 auVar22 [12];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  short sVar29;
  ushort uVar31;
  short sVar32;
  ushort uVar33;
  short sVar34;
  ushort uVar35;
  short sVar36;
  ushort uVar37;
  short sVar38;
  ushort uVar39;
  short sVar40;
  ushort uVar41;
  short sVar42;
  ushort uVar43;
  short sVar44;
  undefined1 auVar30 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined2 uVar47;
  undefined2 uVar52;
  undefined2 uVar53;
  undefined2 uVar54;
  undefined2 uVar55;
  undefined2 uVar56;
  undefined2 uVar57;
  undefined2 uVar58;
  undefined1 auVar48 [16];
  undefined1 auVar59 [16];
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  undefined1 auVar68 [16];
  ushort uVar69;
  short sVar70;
  ushort uVar71;
  short sVar72;
  ushort uVar73;
  short sVar74;
  ushort uVar75;
  short sVar76;
  ushort uVar77;
  short sVar78;
  ushort uVar79;
  short sVar80;
  ushort uVar81;
  short sVar82;
  ushort uVar83;
  short sVar84;
  int iVar86;
  undefined1 auVar85 [16];
  int iVar87;
  int iVar89;
  int iVar90;
  undefined1 auVar88 [16];
  int iVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  VInt16 local_268 [16];
  short local_258;
  short sStack_256;
  short sStack_254;
  short sStack_252;
  short sStack_250;
  short sStack_24e;
  short sStack_24c;
  short sStack_24a;
  undefined8 local_248 [32];
  VInt16 local_148 [32];
  VInt16 local_128 [224];
  VInt16 local_48 [8];
  long local_40;
  undefined1 auVar21 [12];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  uVar69 = 0;
  uVar71 = 0;
  uVar73 = 0;
  uVar75 = 0;
  uVar77 = 0;
  uVar79 = 0;
  uVar81 = 0;
  uVar83 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (-(ushort)!param_3 & 0xf900) + 0x7ff;
  pVVar8 = param_2;
  uVar31 = uVar7;
  uVar33 = uVar7;
  uVar35 = uVar7;
  uVar37 = uVar7;
  uVar39 = uVar7;
  uVar41 = uVar7;
  uVar43 = uVar7;
  do {
    sVar70 = *(short *)pVVar8;
    sVar72 = *(short *)(pVVar8 + 2);
    sVar74 = *(short *)(pVVar8 + 4);
    sVar76 = *(short *)(pVVar8 + 6);
    sVar78 = *(short *)(pVVar8 + 8);
    sVar80 = *(short *)(pVVar8 + 10);
    sVar82 = *(short *)(pVVar8 + 0xc);
    sVar84 = *(short *)(pVVar8 + 0xe);
    sVar60 = *(short *)pVVar8;
    sVar61 = *(short *)(pVVar8 + 2);
    sVar62 = *(short *)(pVVar8 + 4);
    sVar63 = *(short *)(pVVar8 + 6);
    sVar64 = *(short *)(pVVar8 + 8);
    sVar65 = *(short *)(pVVar8 + 10);
    sVar66 = *(short *)(pVVar8 + 0xc);
    sVar67 = *(short *)(pVVar8 + 0xe);
    pVVar8 = pVVar8 + 0x10;
    uVar7 = ((short)uVar7 < sVar70) * uVar7 | (ushort)((short)uVar7 >= sVar70) * sVar70;
    uVar31 = ((short)uVar31 < sVar72) * uVar31 | (ushort)((short)uVar31 >= sVar72) * sVar72;
    uVar33 = ((short)uVar33 < sVar74) * uVar33 | (ushort)((short)uVar33 >= sVar74) * sVar74;
    uVar35 = ((short)uVar35 < sVar76) * uVar35 | (ushort)((short)uVar35 >= sVar76) * sVar76;
    uVar37 = ((short)uVar37 < sVar78) * uVar37 | (ushort)((short)uVar37 >= sVar78) * sVar78;
    uVar39 = ((short)uVar39 < sVar80) * uVar39 | (ushort)((short)uVar39 >= sVar80) * sVar80;
    uVar41 = ((short)uVar41 < sVar82) * uVar41 | (ushort)((short)uVar41 >= sVar82) * sVar82;
    uVar43 = ((short)uVar43 < sVar84) * uVar43 | (ushort)((short)uVar43 >= sVar84) * sVar84;
    uVar69 = (sVar60 < (short)uVar69) * uVar69 | (ushort)(sVar60 >= (short)uVar69) * sVar60;
    uVar71 = (sVar61 < (short)uVar71) * uVar71 | (ushort)(sVar61 >= (short)uVar71) * sVar61;
    uVar73 = (sVar62 < (short)uVar73) * uVar73 | (ushort)(sVar62 >= (short)uVar73) * sVar62;
    uVar75 = (sVar63 < (short)uVar75) * uVar75 | (ushort)(sVar63 >= (short)uVar75) * sVar63;
    uVar77 = (sVar64 < (short)uVar77) * uVar77 | (ushort)(sVar64 >= (short)uVar77) * sVar64;
    uVar79 = (sVar65 < (short)uVar79) * uVar79 | (ushort)(sVar65 >= (short)uVar79) * sVar65;
    uVar81 = (sVar66 < (short)uVar81) * uVar81 | (ushort)(sVar66 >= (short)uVar81) * sVar66;
    uVar83 = (sVar67 < (short)uVar83) * uVar83 | (ushort)(sVar67 >= (short)uVar83) * sVar67;
  } while (param_2 + 0x100 != pVVar8);
  uVar17 = (ulong)param_4;
  sVar70 = uVar69 + uVar7;
  sVar72 = uVar71 + uVar31;
  sVar74 = uVar73 + uVar33;
  sVar76 = uVar75 + uVar35;
  sVar78 = uVar77 + uVar37;
  sVar80 = uVar79 + uVar39;
  sVar82 = uVar81 + uVar41;
  sVar84 = uVar83 + uVar43;
  local_2a8 = (undefined1  [16])0x0;
  uVar16 = (ulong)param_3;
  iVar19 = 0;
  pauVar10 = (undefined1 (*) [16])local_248;
  for (lVar11 = 0x20; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined8 *)*pauVar10 = 0;
    pauVar10 = (undefined1 (*) [16])(*pauVar10 + 8);
  }
  local_298 = (undefined1  [16])0x0;
  local_288 = (undefined1  [16])0x0;
  auVar68 = __LC30;
  auVar94 = __LC121;
  auVar95 = __LC121;
LAB_0010354d:
  uVar12 = 0;
  auVar59 = auVar68;
LAB_00103568:
  iVar15 = 3 - uVar12 / 3;
  sVar60 = *(short *)(Tables::ETC2::g_alphaModifierTablePositive +
                     ((long)(int)(iVar15 - (uVar12 % 3 & 1)) + (long)iVar19 * 4) * 2);
  uVar31 = ~*(ushort *)
             (Tables::ETC2::g_alphaModifierTablePositive +
             ((long)iVar19 * 4 + (long)(iVar15 - ((int)(uVar12 % 3) >> 1))) * 2);
  auVar68 = auVar59;
  uVar33 = uVar31;
  uVar35 = uVar31;
  uVar37 = uVar31;
  uVar39 = uVar31;
  uVar41 = uVar31;
  uVar43 = uVar31;
  uVar7 = uVar31;
  sVar61 = sVar60;
  sVar62 = sVar60;
  sVar63 = sVar60;
  sVar64 = sVar60;
  sVar65 = sVar60;
  sVar66 = sVar60;
  sVar67 = sVar60;
  if (!param_3) {
    bVar5 = false;
    auVar28._0_2_ = (sVar70 - sVar60) - uVar31;
    auVar28._2_2_ = (sVar72 - sVar60) - uVar31;
    auVar28._4_2_ = (sVar74 - sVar60) - uVar31;
    auVar28._6_2_ = (sVar76 - sVar60) - uVar31;
    auVar28._8_2_ = (sVar78 - sVar60) - uVar31;
    auVar28._10_2_ = (sVar80 - sVar60) - uVar31;
    auVar28._12_2_ = (sVar82 - sVar60) - uVar31;
    auVar28._14_2_ = (sVar84 - sVar60) - uVar31;
    local_278 = auVar59;
    goto LAB_00103956;
  }
  bVar5 = false;
  sVar36 = (ushort)(0 < auVar59._0_2_) * auVar59._0_2_;
  sVar32 = (ushort)(0 < auVar59._2_2_) * auVar59._2_2_;
  local_278._2_2_ = sVar32;
  local_278._0_2_ = sVar36;
  sVar34 = (ushort)(0 < auVar59._4_2_) * auVar59._4_2_;
  local_278._4_2_ = sVar34;
  sVar38 = (ushort)(0 < auVar59._6_2_) * auVar59._6_2_;
  local_278._6_2_ = sVar38;
  sVar40 = (ushort)(0 < auVar59._8_2_) * auVar59._8_2_;
  local_278._8_2_ = sVar40;
  sVar42 = (ushort)(0 < auVar59._10_2_) * auVar59._10_2_;
  local_278._10_2_ = sVar42;
  sVar44 = (ushort)(0 < auVar59._12_2_) * auVar59._12_2_;
  local_278._12_2_ = sVar44;
  sVar1 = (ushort)(0 < auVar59._14_2_) * auVar59._14_2_;
  local_278._14_2_ = sVar1;
  sVar29 = sVar70 - (sVar60 + uVar31) * sVar36;
  sVar32 = sVar72 - (sVar60 + uVar31) * sVar32;
  sVar34 = sVar74 - (sVar60 + uVar31) * sVar34;
  sVar36 = sVar76 - (sVar60 + uVar31) * sVar38;
  sVar38 = sVar78 - (sVar60 + uVar31) * sVar40;
  sVar40 = sVar80 - (sVar60 + uVar31) * sVar42;
  sVar42 = sVar82 - (sVar60 + uVar31) * sVar44;
  sVar44 = sVar84 - (sVar60 + uVar31) * sVar1;
  auVar59 = (undefined1  [16])0x0;
joined_r0x0010361d:
  if (param_4) {
    sVar29 = sVar29 + __LC83;
    sVar32 = sVar32 + _UNK_0010b402;
    sVar34 = sVar34 + _UNK_0010b404;
    sVar36 = sVar36 + _UNK_0010b406;
    sVar38 = sVar38 + _UNK_0010b408;
    sVar40 = sVar40 + _UNK_0010b40a;
    sVar42 = sVar42 + _UNK_0010b40c;
    sVar44 = sVar44 + _UNK_0010b40e;
    uVar69 = (ushort)(__LC114 < sVar29) * sVar29 | (ushort)(__LC114 >= sVar29) * __LC114;
    uVar71 = (ushort)(_UNK_0010b412 < sVar32) * sVar32 |
             (ushort)(_UNK_0010b412 >= sVar32) * _UNK_0010b412;
    uVar73 = (ushort)(_UNK_0010b414 < sVar34) * sVar34 |
             (ushort)(_UNK_0010b414 >= sVar34) * _UNK_0010b414;
    uVar75 = (ushort)(_UNK_0010b416 < sVar36) * sVar36 |
             (ushort)(_UNK_0010b416 >= sVar36) * _UNK_0010b416;
    uVar77 = (ushort)(_UNK_0010b418 < sVar38) * sVar38 |
             (ushort)(_UNK_0010b418 >= sVar38) * _UNK_0010b418;
    uVar79 = (ushort)(_UNK_0010b41a < sVar40) * sVar40 |
             (ushort)(_UNK_0010b41a >= sVar40) * _UNK_0010b41a;
    uVar81 = (ushort)(_UNK_0010b41c < sVar42) * sVar42 |
             (ushort)(_UNK_0010b41c >= sVar42) * _UNK_0010b41c;
    uVar83 = (ushort)(_UNK_0010b41e < sVar44) * sVar44 |
             (ushort)(_UNK_0010b41e >= sVar44) * _UNK_0010b41e;
    auVar92._0_2_ =
         (ushort)((ushort)(__LC63 < (short)uVar69) * __LC63 | (__LC63 >= (short)uVar69) * uVar69) >>
         1;
    auVar92._2_2_ =
         (ushort)((ushort)(_UNK_0010b3e2 < (short)uVar71) * _UNK_0010b3e2 |
                 (_UNK_0010b3e2 >= (short)uVar71) * uVar71) >> 1;
    auVar92._4_2_ =
         (ushort)((ushort)(_UNK_0010b3e4 < (short)uVar73) * _UNK_0010b3e4 |
                 (_UNK_0010b3e4 >= (short)uVar73) * uVar73) >> 1;
    auVar92._6_2_ =
         (ushort)((ushort)(_UNK_0010b3e6 < (short)uVar75) * _UNK_0010b3e6 |
                 (_UNK_0010b3e6 >= (short)uVar75) * uVar75) >> 1;
    auVar92._8_2_ =
         (ushort)((ushort)(_UNK_0010b3e8 < (short)uVar77) * _UNK_0010b3e8 |
                 (_UNK_0010b3e8 >= (short)uVar77) * uVar77) >> 1;
    auVar92._10_2_ =
         (ushort)((ushort)(_UNK_0010b3ea < (short)uVar79) * _UNK_0010b3ea |
                 (_UNK_0010b3ea >= (short)uVar79) * uVar79) >> 1;
    auVar92._12_2_ =
         (ushort)((ushort)(_UNK_0010b3ec < (short)uVar81) * _UNK_0010b3ec |
                 (_UNK_0010b3ec >= (short)uVar81) * uVar81) >> 1;
    auVar92._14_2_ =
         (ushort)((ushort)(_UNK_0010b3ee < (short)uVar83) * _UNK_0010b3ee |
                 (_UNK_0010b3ee >= (short)uVar83) * uVar83) >> 1;
    auVar27._2_2_ = _UNK_0010b3f2;
    auVar27._0_2_ = __LC112;
    auVar27._4_2_ = _UNK_0010b3f4;
    auVar27._6_2_ = _UNK_0010b3f6;
    auVar27._8_2_ = _UNK_0010b3f8;
    auVar27._10_2_ = _UNK_0010b3fa;
    auVar27._12_2_ = _UNK_0010b3fc;
    auVar27._14_2_ = _UNK_0010b3fe;
    auVar93 = auVar92 & auVar27;
  }
  else {
    sVar29 = (ushort)(-1 < sVar29) * sVar29;
    sVar32 = (ushort)(-1 < sVar32) * sVar32;
    sVar34 = (ushort)(-1 < sVar34) * sVar34;
    sVar36 = (ushort)(-1 < sVar36) * sVar36;
    sVar38 = (ushort)(-1 < sVar38) * sVar38;
    sVar40 = (ushort)(-1 < sVar40) * sVar40;
    sVar42 = (ushort)(-1 < sVar42) * sVar42;
    sVar44 = (ushort)(-1 < sVar44) * sVar44;
    auVar93._0_2_ =
         __LC58 + ((ushort)((ushort)(__LC63 < sVar29) * __LC63 | (ushort)(__LC63 >= sVar29) * sVar29
                           ) >> 1 & __LC112);
    auVar93._2_2_ =
         _UNK_0010b302 +
         ((ushort)((ushort)(_UNK_0010b3e2 < sVar32) * _UNK_0010b3e2 |
                  (ushort)(_UNK_0010b3e2 >= sVar32) * sVar32) >> 1 & _UNK_0010b3f2);
    auVar93._4_2_ =
         _UNK_0010b304 +
         ((ushort)((ushort)(_UNK_0010b3e4 < sVar34) * _UNK_0010b3e4 |
                  (ushort)(_UNK_0010b3e4 >= sVar34) * sVar34) >> 1 & _UNK_0010b3f4);
    auVar93._6_2_ =
         _UNK_0010b306 +
         ((ushort)((ushort)(_UNK_0010b3e6 < sVar36) * _UNK_0010b3e6 |
                  (ushort)(_UNK_0010b3e6 >= sVar36) * sVar36) >> 1 & _UNK_0010b3f6);
    auVar93._8_2_ =
         _UNK_0010b308 +
         ((ushort)((ushort)(_UNK_0010b3e8 < sVar38) * _UNK_0010b3e8 |
                  (ushort)(_UNK_0010b3e8 >= sVar38) * sVar38) >> 1 & _UNK_0010b3f8);
    auVar93._10_2_ =
         _UNK_0010b30a +
         ((ushort)((ushort)(_UNK_0010b3ea < sVar40) * _UNK_0010b3ea |
                  (ushort)(_UNK_0010b3ea >= sVar40) * sVar40) >> 1 & _UNK_0010b3fa);
    auVar93._12_2_ =
         _UNK_0010b30c +
         ((ushort)((ushort)(_UNK_0010b3ec < sVar42) * _UNK_0010b3ec |
                  (ushort)(_UNK_0010b3ec >= sVar42) * sVar42) >> 1 & _UNK_0010b3fc);
    auVar93._14_2_ =
         _UNK_0010b30e +
         ((ushort)((ushort)(_UNK_0010b3ee < sVar44) * _UNK_0010b3ee |
                  (ushort)(_UNK_0010b3ee >= sVar44) * sVar44) >> 1 & _UNK_0010b3fe);
  }
  do {
    auVar85 = (undefined1  [16])0x0;
    auVar88 = (undefined1  [16])0x0;
    uVar47 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar58 = 0;
    pVVar8 = local_148;
    pVVar18 = param_2;
    auVar28 = local_278;
    local_268 = (VInt16  [16])auVar93;
    do {
      while( true ) {
        QuantizeETC2Alpha(iVar19,pVVar18,local_268,(VInt16 *)local_278,SUB81(uVar16,0),
                          SUB81(uVar17,0),pVVar8,(VInt16 *)&local_258);
        auVar24._0_2_ = local_258 - *(short *)pVVar18;
        auVar24._2_2_ = sStack_256 - *(short *)(pVVar18 + 2);
        auVar24._4_2_ = sStack_254 - *(short *)(pVVar18 + 4);
        auVar24._6_2_ = sStack_252 - *(short *)(pVVar18 + 6);
        auVar24._8_2_ = sStack_250 - *(short *)(pVVar18 + 8);
        auVar24._10_2_ = sStack_24e - *(short *)(pVVar18 + 10);
        auVar24._12_2_ = sStack_24c - *(short *)(pVVar18 + 0xc);
        auVar24._14_2_ = sStack_24a - *(short *)(pVVar18 + 0xe);
        iVar15 = auVar85._4_4_;
        iVar86 = auVar85._8_4_;
        iVar87 = auVar85._12_4_;
        iVar89 = auVar88._4_4_;
        iVar90 = auVar88._8_4_;
        iVar91 = auVar88._12_4_;
        if (param_3) break;
        pVVar8 = pVVar8 + 0x10;
        pVVar18 = pVVar18 + 0x10;
        iVar20 = CONCAT22(uVar55,auVar24._8_2_ * auVar24._8_2_);
        auVar22._0_8_ = CONCAT26(uVar56,CONCAT24(auVar24._10_2_ * auVar24._10_2_,iVar20));
        auVar22._8_2_ = auVar24._12_2_ * auVar24._12_2_;
        auVar22._10_2_ = uVar57;
        auVar25._12_2_ = auVar24._14_2_ * auVar24._14_2_;
        auVar25._0_12_ = auVar22;
        auVar25._14_2_ = uVar58;
        iVar6 = CONCAT22(uVar54,auVar24._6_2_ * auVar24._6_2_);
        Var4 = CONCAT64(CONCAT42(iVar6,uVar53),
                        CONCAT22(auVar24._4_2_ * auVar24._4_2_,auVar24._6_2_ * auVar24._6_2_));
        auVar3._4_8_ = (long)((unkuint10)Var4 >> 0x10);
        auVar3._2_2_ = uVar52;
        auVar3._0_2_ = auVar24._2_2_ * auVar24._2_2_;
        auVar85._0_4_ = auVar85._0_4_ + iVar20;
        auVar85._4_4_ = iVar15 + (int)((ulong)auVar22._0_8_ >> 0x20);
        auVar85._8_4_ = iVar86 + auVar22._8_4_;
        auVar85._12_4_ = iVar87 + auVar25._12_4_;
        auVar88._0_4_ = auVar88._0_4_ + CONCAT22(uVar47,auVar24._0_2_ * auVar24._0_2_);
        auVar88._4_4_ = iVar89 + auVar3._0_4_;
        auVar88._8_4_ = iVar90 + (int)((unkuint10)Var4 >> 0x10);
        auVar88._12_4_ = iVar91 + iVar6;
        if (local_48 == pVVar8) goto LAB_00103724;
      }
      pVVar8 = pVVar8 + 0x10;
      pVVar18 = pVVar18 + 0x10;
      auVar27 = pmulhw(auVar24,auVar24);
      iVar20 = CONCAT22(auVar27._8_2_,auVar24._8_2_ * auVar24._8_2_);
      auVar21._0_8_ = CONCAT26(auVar27._10_2_,CONCAT24(auVar24._10_2_ * auVar24._10_2_,iVar20));
      auVar21._8_2_ = auVar24._12_2_ * auVar24._12_2_;
      auVar21._10_2_ = auVar27._12_2_;
      auVar23._12_2_ = auVar24._14_2_ * auVar24._14_2_;
      auVar23._0_12_ = auVar21;
      auVar23._14_2_ = auVar27._14_2_;
      iVar6 = CONCAT22(auVar27._6_2_,auVar24._6_2_ * auVar24._6_2_);
      Var4 = CONCAT64(CONCAT42(iVar6,auVar27._4_2_),
                      CONCAT22(auVar24._4_2_ * auVar24._4_2_,auVar24._6_2_ * auVar24._6_2_));
      auVar2._4_8_ = (long)((unkuint10)Var4 >> 0x10);
      auVar2._2_2_ = auVar27._2_2_;
      auVar2._0_2_ = auVar24._2_2_ * auVar24._2_2_;
      auVar85._0_4_ = auVar85._0_4_ + iVar20;
      auVar85._4_4_ = iVar15 + (int)((ulong)auVar21._0_8_ >> 0x20);
      auVar85._8_4_ = iVar86 + auVar21._8_4_;
      auVar85._12_4_ = iVar87 + auVar23._12_4_;
      auVar88._0_4_ = auVar88._0_4_ + CONCAT22(auVar27._0_2_,auVar24._0_2_ * auVar24._0_2_);
      auVar88._4_4_ = iVar89 + auVar2._0_4_;
      auVar88._8_4_ = iVar90 + (int)((unkuint10)Var4 >> 0x10);
      auVar88._12_4_ = iVar91 + iVar6;
    } while (local_48 != pVVar8);
LAB_00103724:
    auVar30._0_4_ = -(uint)(auVar85._0_4_ < auVar95._0_4_);
    auVar30._4_4_ = -(uint)(auVar85._4_4_ < auVar95._4_4_);
    auVar30._8_4_ = -(uint)(auVar85._8_4_ < auVar95._8_4_);
    auVar30._12_4_ = -(uint)(auVar85._12_4_ < auVar95._12_4_);
    auVar26._0_4_ = -(uint)(auVar88._0_4_ < auVar94._0_4_);
    auVar26._4_4_ = -(uint)(auVar88._4_4_ < auVar94._4_4_);
    auVar26._8_4_ = -(uint)(auVar88._8_4_ < auVar94._8_4_);
    auVar26._12_4_ = -(uint)(auVar88._12_4_ < auVar94._12_4_);
    auVar27 = packssdw(auVar26,auVar30);
    if ((((((((((((((((auVar27 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                     (auVar27 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar27 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar27 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar27 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar27 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar27 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar27 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar27 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar27 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar27 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar27 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar27 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar27 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar27 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || auVar27[0xf] < '\0')
    {
      auVar51._0_12_ = auVar27._0_12_;
      auVar51._12_2_ = auVar27._6_2_;
      auVar51._14_2_ = auVar27._6_2_;
      auVar50._12_4_ = auVar51._12_4_;
      auVar50._0_10_ = auVar27._0_10_;
      auVar50._10_2_ = auVar27._4_2_;
      auVar49._10_6_ = auVar50._10_6_;
      auVar49._8_2_ = auVar27._4_2_;
      auVar49._0_8_ = auVar27._0_8_;
      auVar48._8_8_ = auVar49._8_8_;
      auVar48._6_2_ = auVar27._2_2_;
      auVar48._4_2_ = auVar27._2_2_;
      auVar48._2_2_ = auVar27._0_2_;
      auVar48._0_2_ = auVar27._0_2_;
      auVar45._2_2_ = auVar27._8_2_;
      auVar45._0_2_ = auVar27._8_2_;
      auVar45._4_2_ = auVar27._10_2_;
      auVar45._6_2_ = auVar27._10_2_;
      auVar45._8_2_ = auVar27._12_2_;
      auVar45._10_2_ = auVar27._12_2_;
      auVar45._14_2_ = auVar27._14_2_;
      auVar45._12_2_ = auVar45._14_2_;
      auVar94 = auVar88 & auVar48 | ~auVar48 & auVar94;
      auVar46._0_4_ = CONCAT22((short)iVar19,(short)iVar19);
      auVar46._4_4_ = auVar46._0_4_;
      auVar46._8_4_ = auVar46._0_4_;
      auVar46._12_4_ = auVar46._0_4_;
      auVar95 = auVar85 & auVar45 | ~auVar45 & auVar95;
      local_2a8 = auVar46 & auVar27 | ~auVar27 & local_2a8;
      local_298 = auVar93 & auVar27 | ~auVar27 & local_298;
      local_288 = auVar27 & auVar28 | ~auVar27 & local_288;
      pauVar10 = (undefined1 (*) [16])local_248;
      pVVar8 = local_148;
      do {
        auVar28 = *(undefined1 (*) [16])pVVar8;
        pVVar8 = pVVar8 + 0x10;
        *pauVar10 = auVar28 & auVar27 | ~auVar27 & *pauVar10;
        pauVar10 = pauVar10 + 1;
      } while (local_48 != pVVar8);
    }
    if (bVar5) {
      uVar12 = uVar12 + 1;
      auVar59 = auVar68;
      if (uVar12 != 10) goto LAB_00103568;
      iVar19 = iVar19 + 1;
      if (iVar19 != 0x10) goto LAB_0010354d;
      lVar11 = 0;
      break;
    }
    local_278._0_2_ = auVar59._0_2_;
    local_278._2_2_ = auVar59._2_2_;
    local_278._4_2_ = auVar59._4_2_;
    local_278._6_2_ = auVar59._6_2_;
    local_278._8_2_ = auVar59._8_2_;
    local_278._10_2_ = auVar59._10_2_;
    local_278._12_2_ = auVar59._12_2_;
    local_278._14_2_ = auVar59._14_2_;
    if (param_3) goto code_r0x0010377f;
    bVar5 = true;
    local_278._0_2_ = local_278._0_2_ + auVar68._0_2_;
    local_278._2_2_ = local_278._2_2_ + auVar68._2_2_;
    local_278._4_2_ = local_278._4_2_ + auVar68._4_2_;
    local_278._6_2_ = local_278._6_2_ + auVar68._6_2_;
    local_278._8_2_ = local_278._8_2_ + auVar68._8_2_;
    local_278._10_2_ = local_278._10_2_ + auVar68._10_2_;
    local_278._12_2_ = local_278._12_2_ + auVar68._12_2_;
    local_278._14_2_ = local_278._14_2_ + auVar68._14_2_;
    auVar28._0_2_ = (sVar70 - local_278._0_2_ * sVar60) - local_278._0_2_ * uVar31;
    auVar28._2_2_ = (sVar72 - local_278._2_2_ * sVar61) - local_278._2_2_ * uVar33;
    auVar28._4_2_ = (sVar74 - local_278._4_2_ * sVar62) - local_278._4_2_ * uVar35;
    auVar28._6_2_ = (sVar76 - local_278._6_2_ * sVar63) - local_278._6_2_ * uVar37;
    auVar28._8_2_ = (sVar78 - local_278._8_2_ * sVar64) - local_278._8_2_ * uVar39;
    auVar28._10_2_ = (sVar80 - local_278._10_2_ * sVar65) - local_278._10_2_ * uVar41;
    auVar28._12_2_ = (sVar82 - local_278._12_2_ * sVar66) - local_278._12_2_ * uVar43;
    auVar28._14_2_ = (sVar84 - local_278._14_2_ * sVar67) - local_278._14_2_ * uVar7;
LAB_00103956:
    sVar32 = (ushort)(-1 < auVar28._0_2_) * auVar28._0_2_;
    sVar34 = (ushort)(-1 < auVar28._2_2_) * auVar28._2_2_;
    sVar38 = (ushort)(-1 < auVar28._4_2_) * auVar28._4_2_;
    sVar40 = (ushort)(-1 < auVar28._6_2_) * auVar28._6_2_;
    sVar42 = (ushort)(-1 < auVar28._8_2_) * auVar28._8_2_;
    sVar44 = (ushort)(-1 < auVar28._10_2_) * auVar28._10_2_;
    sVar1 = (ushort)(-1 < auVar28._12_2_) * auVar28._12_2_;
    sVar36 = (ushort)(-1 < auVar28._14_2_) * auVar28._14_2_;
    auVar93._0_2_ =
         (ushort)(((ushort)(sVar32 < __LC67) * sVar32 | (ushort)(sVar32 >= __LC67) * __LC67) +
                 auVar68._0_2_) >> 1;
    auVar93._2_2_ =
         (ushort)(((ushort)(sVar34 < _UNK_0010b422) * sVar34 |
                  (ushort)(sVar34 >= _UNK_0010b422) * _UNK_0010b422) + auVar68._2_2_) >> 1;
    auVar93._4_2_ =
         (ushort)(((ushort)(sVar38 < _UNK_0010b424) * sVar38 |
                  (ushort)(sVar38 >= _UNK_0010b424) * _UNK_0010b424) + auVar68._4_2_) >> 1;
    auVar93._6_2_ =
         (ushort)(((ushort)(sVar40 < _UNK_0010b426) * sVar40 |
                  (ushort)(sVar40 >= _UNK_0010b426) * _UNK_0010b426) + auVar68._6_2_) >> 1;
    auVar93._8_2_ =
         (ushort)(((ushort)(sVar42 < _UNK_0010b428) * sVar42 |
                  (ushort)(sVar42 >= _UNK_0010b428) * _UNK_0010b428) + auVar68._8_2_) >> 1;
    auVar93._10_2_ =
         (ushort)(((ushort)(sVar44 < _UNK_0010b42a) * sVar44 |
                  (ushort)(sVar44 >= _UNK_0010b42a) * _UNK_0010b42a) + auVar68._10_2_) >> 1;
    auVar93._12_2_ =
         (ushort)(((ushort)(sVar1 < _UNK_0010b42c) * sVar1 |
                  (ushort)(sVar1 >= _UNK_0010b42c) * _UNK_0010b42c) + auVar68._12_2_) >> 1;
    auVar93._14_2_ =
         (ushort)(((ushort)(sVar36 < _UNK_0010b42e) * sVar36 |
                  (ushort)(sVar36 >= _UNK_0010b42e) * _UNK_0010b42e) + auVar68._14_2_) >> 1;
  } while( true );
LAB_00103848:
  *param_1 = (uchar)*(undefined2 *)(local_298 + lVar11);
  puVar13 = (undefined2 *)(*(undefined1 (*) [16])local_248 + lVar11);
  param_1[1] = local_288[lVar11] << 4 | local_2a8[lVar11];
  piVar9 = &EmitHModeBlock(unsigned_char*,unsigned_short_const*,unsigned_short,unsigned_short,unsigned_short,bool)
            ::selectorOrder;
  do {
    iVar19 = *piVar9;
    uVar47 = *puVar13;
    piVar9 = piVar9 + 1;
    puVar13 = puVar13 + 8;
    *(undefined2 *)(local_148 + (long)iVar19 * 2) = uVar47;
  } while (piVar9 != (int *)&EncodeVirtualTModePunchthrough(unsigned_char*,cvtt::ParallelMath::Float&,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::Options_const&)
                             ::selectorRemapSign);
  uVar12 = 0;
  iVar15 = 2;
  pVVar8 = local_148;
  iVar19 = 0;
  do {
    while( true ) {
      uVar12 = uVar12 << 3 | (uint)*(ushort *)pVVar8;
      if (7 < iVar19 + 3) break;
      pVVar8 = pVVar8 + 2;
      iVar19 = iVar19 + 3;
      if (pVVar8 == local_128) goto LAB_001038e9;
    }
    iVar19 = iVar19 + -5;
    lVar14 = (long)iVar15;
    pVVar8 = pVVar8 + 2;
    iVar15 = iVar15 + 1;
    param_1[lVar14] = (uchar)((int)uVar12 >> ((byte)iVar19 & 0x1f));
    uVar12 = uVar12 & (1 << ((byte)iVar19 & 0x1f)) - 1U;
  } while (pVVar8 != local_128);
LAB_001038e9:
  lVar11 = lVar11 + 2;
  param_1 = param_1 + 8;
  if (lVar11 == 0x10) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00103848;
code_r0x0010377f:
  bVar5 = true;
  local_278._0_2_ = __LC83 + local_278._0_2_;
  local_278._2_2_ = _UNK_0010b402 + local_278._2_2_;
  local_278._4_2_ = _UNK_0010b404 + local_278._4_2_;
  local_278._6_2_ = _UNK_0010b406 + local_278._6_2_;
  local_278._8_2_ = _UNK_0010b408 + local_278._8_2_;
  local_278._10_2_ = _UNK_0010b40a + local_278._10_2_;
  local_278._12_2_ = _UNK_0010b40c + local_278._12_2_;
  local_278._14_2_ = _UNK_0010b40e + local_278._14_2_;
  sVar29 = (sVar70 - local_278._0_2_ * sVar60) - local_278._0_2_ * uVar31;
  sVar32 = (sVar72 - local_278._2_2_ * sVar61) - local_278._2_2_ * uVar33;
  sVar34 = (sVar74 - local_278._4_2_ * sVar62) - local_278._4_2_ * uVar35;
  sVar36 = (sVar76 - local_278._6_2_ * sVar63) - local_278._6_2_ * uVar37;
  sVar38 = (sVar78 - local_278._8_2_ * sVar64) - local_278._8_2_ * uVar39;
  sVar40 = (sVar80 - local_278._10_2_ * sVar65) - local_278._10_2_ * uVar41;
  sVar42 = (sVar82 - local_278._12_2_ * sVar66) - local_278._12_2_ * uVar43;
  sVar44 = (sVar84 - local_278._14_2_ * sVar67) - local_278._14_2_ * uVar7;
  goto joined_r0x0010361d;
}



/* cvtt::Internal::ETCComputer::CompressETC2AlphaBlock(unsigned char*, cvtt::PixelBlockU8 const*,
   cvtt::Options const&) */

void cvtt::Internal::ETCComputer::CompressETC2AlphaBlock
               (uchar *param_1,PixelBlockU8 *param_2,Options *param_3)

{
  PixelBlockU8 PVar1;
  VInt16 *pVVar2;
  ushort *puVar3;
  PixelBlockU8 *pPVar4;
  ushort *puVar5;
  PixelBlockU8 *pPVar6;
  VInt16 *pVVar7;
  long in_FS_OFFSET;
  VInt16 local_128 [16];
  ushort local_118 [124];
  long local_20;
  ushort local_18 [4];
  
  pPVar4 = param_2 + 3;
  pVVar7 = local_128;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = local_118;
  pVVar2 = local_128;
  pPVar6 = pPVar4;
  do {
    do {
      puVar3 = (ushort *)pVVar2;
      PVar1 = *pPVar4;
      pPVar4 = pPVar4 + 0x40;
      *puVar3 = (ushort)(byte)PVar1;
      pVVar2 = (VInt16 *)(puVar3 + 1);
    } while (puVar3 + 1 != puVar5);
    puVar5 = puVar3 + 9;
    pPVar4 = pPVar6 + 4;
    pVVar7 = (VInt16 *)((long)pVVar7 + 0x10);
    pVVar2 = pVVar7;
    pPVar6 = pPVar4;
  } while (puVar5 != local_18);
  CompressETC2AlphaBlockInternal(param_1,local_128,false,false,param_3);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::CompressEACBlock(unsigned char*, cvtt::PixelBlockScalarS16 const*,
   bool, cvtt::Options const&) */

void cvtt::Internal::ETCComputer::CompressEACBlock
               (uchar *param_1,PixelBlockScalarS16 *param_2,bool param_3,Options *param_4)

{
  PixelBlockScalarS16 *pPVar1;
  undefined2 uVar2;
  VInt16 *pVVar3;
  VInt16 *pVVar4;
  PixelBlockScalarS16 *pPVar5;
  VInt16 *pVVar6;
  long in_FS_OFFSET;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  short local_138 [8];
  VInt16 local_128 [2];
  undefined2 auStack_126 [131];
  long local_20;
  
  pPVar1 = param_2 + 0x20;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar15 = ((ushort)(local_138[0] < __LC69) * local_138[0] |
           (ushort)(local_138[0] >= __LC69) * __LC69) + __LC70;
  sVar16 = ((ushort)(local_138[1] < _UNK_0010b432) * local_138[1] |
           (ushort)(local_138[1] >= _UNK_0010b432) * _UNK_0010b432) + _UNK_0010b442;
  sVar17 = ((ushort)(local_138[2] < _UNK_0010b434) * local_138[2] |
           (ushort)(local_138[2] >= _UNK_0010b434) * _UNK_0010b434) + _UNK_0010b444;
  sVar18 = ((ushort)(local_138[3] < _UNK_0010b436) * local_138[3] |
           (ushort)(local_138[3] >= _UNK_0010b436) * _UNK_0010b436) + _UNK_0010b446;
  sVar19 = ((ushort)(local_138[4] < _UNK_0010b438) * local_138[4] |
           (ushort)(local_138[4] >= _UNK_0010b438) * _UNK_0010b438) + _UNK_0010b448;
  sVar20 = ((ushort)(local_138[5] < _UNK_0010b43a) * local_138[5] |
           (ushort)(local_138[5] >= _UNK_0010b43a) * _UNK_0010b43a) + _UNK_0010b44a;
  sVar21 = ((ushort)(local_138[6] < _UNK_0010b43c) * local_138[6] |
           (ushort)(local_138[6] >= _UNK_0010b43c) * _UNK_0010b43c) + _UNK_0010b44c;
  sVar22 = ((ushort)(local_138[7] < _UNK_0010b43e) * local_138[7] |
           (ushort)(local_138[7] >= _UNK_0010b43e) * _UNK_0010b43e) + _UNK_0010b44e;
  uVar23 = (ushort)(local_138[0] < __LC57) * local_138[0] |
           (ushort)(local_138[0] >= __LC57) * __LC57;
  uVar24 = (ushort)(local_138[1] < _UNK_0010b3c2) * local_138[1] |
           (ushort)(local_138[1] >= _UNK_0010b3c2) * _UNK_0010b3c2;
  uVar25 = (ushort)(local_138[2] < _UNK_0010b3c4) * local_138[2] |
           (ushort)(local_138[2] >= _UNK_0010b3c4) * _UNK_0010b3c4;
  uVar26 = (ushort)(local_138[3] < _UNK_0010b3c6) * local_138[3] |
           (ushort)(local_138[3] >= _UNK_0010b3c6) * _UNK_0010b3c6;
  uVar27 = (ushort)(local_138[4] < _UNK_0010b3c8) * local_138[4] |
           (ushort)(local_138[4] >= _UNK_0010b3c8) * _UNK_0010b3c8;
  uVar28 = (ushort)(local_138[5] < _UNK_0010b3ca) * local_138[5] |
           (ushort)(local_138[5] >= _UNK_0010b3ca) * _UNK_0010b3ca;
  uVar29 = (ushort)(local_138[6] < _UNK_0010b3cc) * local_138[6] |
           (ushort)(local_138[6] >= _UNK_0010b3cc) * _UNK_0010b3cc;
  uVar30 = (ushort)(local_138[7] < _UNK_0010b3ce) * local_138[7] |
           (ushort)(local_138[7] >= _UNK_0010b3ce) * _UNK_0010b3ce;
  pVVar3 = (VInt16 *)local_138;
  pVVar6 = local_128;
  pPVar5 = param_2;
  do {
    do {
      uVar2 = *(undefined2 *)param_2;
      pVVar4 = pVVar3 + 2;
      param_2 = param_2 + 0x20;
      *(undefined2 *)pVVar3 = uVar2;
      pVVar3 = pVVar4;
    } while (pVVar4 != local_128);
    uVar7 = (ushort)(sVar15 < __LC30) * __LC30 | (ushort)(sVar15 >= __LC30) * sVar15;
    uVar8 = (ushort)(sVar16 < _UNK_0010b332) * _UNK_0010b332 |
            (ushort)(sVar16 >= _UNK_0010b332) * sVar16;
    uVar9 = (ushort)(sVar17 < _UNK_0010b334) * _UNK_0010b334 |
            (ushort)(sVar17 >= _UNK_0010b334) * sVar17;
    uVar10 = (ushort)(sVar18 < _UNK_0010b336) * _UNK_0010b336 |
             (ushort)(sVar18 >= _UNK_0010b336) * sVar18;
    uVar11 = (ushort)(sVar19 < _UNK_0010b338) * _UNK_0010b338 |
             (ushort)(sVar19 >= _UNK_0010b338) * sVar19;
    uVar12 = (ushort)(sVar20 < _UNK_0010b33a) * _UNK_0010b33a |
             (ushort)(sVar20 >= _UNK_0010b33a) * sVar20;
    uVar13 = (ushort)(sVar21 < _UNK_0010b33c) * _UNK_0010b33c |
             (ushort)(sVar21 >= _UNK_0010b33c) * sVar21;
    uVar14 = (ushort)(sVar22 < _UNK_0010b33e) * _UNK_0010b33e |
             (ushort)(sVar22 >= _UNK_0010b33e) * sVar22;
    if (!param_3) {
      uVar7 = (0 < (short)uVar23) * uVar23;
      uVar8 = (0 < (short)uVar24) * uVar24;
      uVar9 = (0 < (short)uVar25) * uVar25;
      uVar10 = (0 < (short)uVar26) * uVar26;
      uVar11 = (0 < (short)uVar27) * uVar27;
      uVar12 = (0 < (short)uVar28) * uVar28;
      uVar13 = (0 < (short)uVar29) * uVar29;
      uVar14 = (0 < (short)uVar30) * uVar30;
    }
    param_2 = pPVar5 + 2;
    *(ushort *)pVVar6 = uVar7;
    *(ushort *)(pVVar6 + 2) = uVar8;
    *(ushort *)(pVVar6 + 4) = uVar9;
    *(ushort *)(pVVar6 + 6) = uVar10;
    *(ushort *)(pVVar6 + 8) = uVar11;
    *(ushort *)(pVVar6 + 10) = uVar12;
    *(ushort *)(pVVar6 + 0xc) = uVar13;
    *(ushort *)(pVVar6 + 0xe) = uVar14;
    pVVar6 = pVVar6 + 0x10;
    pVVar3 = (VInt16 *)local_138;
    pPVar5 = param_2;
  } while (param_2 != pPVar1);
  CompressETC2AlphaBlockInternal(param_1,local_128,true,param_3,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Internal::ETCComputer::EmitTModeBlock(unsigned char*, unsigned short const*, unsigned short
   const*, int, unsigned short, bool) */

void cvtt::Internal::ETCComputer::EmitTModeBlock
               (uchar *param_1,ushort *param_2,ushort *param_3,int param_4,ushort param_5,
               bool param_6)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *param_3 & 3;
  uVar8 = *param_3 >> 2 & 3;
  uVar3 = 0xe0000000;
  if (uVar8 + uVar1 < 4) {
    uVar3 = 0x4000000;
  }
  uVar5 = 0;
  uVar6 = -(uint)param_6 & 2 | param_5 & 1 | (uint)*param_2 << 0xc | (uint)param_2[1] << 8 |
          (uint)param_2[2] << 4;
  uVar7 = uVar6 | (uint)param_3[1] << 0x14 | (uint)param_3[2] << 0x10;
  lVar2 = 0;
  do {
    uVar4 = param_4 >>
            ((char)(&EmitHModeBlock(unsigned_char*,unsigned_short_const*,unsigned_short,unsigned_short,unsigned_short,bool)
                     ::selectorOrder)[lVar2] * '\x02' & 0x1fU);
    if ((uVar4 & 1) != 0) {
      uVar5 = uVar5 | 1 << ((byte)lVar2 & 0x1f);
    }
    if ((uVar4 & 2) != 0) {
      uVar5 = uVar5 | 1 << ((byte)lVar2 + 0x10 & 0x1f);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  *(ulong *)param_1 =
       (((((((ulong)(uVar5 & 0xff) << 8 | (ulong)(uVar5 >> 8 & 0xff)) << 8 |
           (ulong)(uVar5 >> 0x10 & 0xff)) << 8 | (ulong)(uVar5 >> 0x18)) << 8 |
         (ulong)(uVar6 & 0xff | (uint)(param_5 >> 1) * 4 & 0xc)) << 8 |
        (ulong)((uVar6 & 0xff00) >> 8)) << 8 | (ulong)((uVar7 & 0xff0000) >> 0x10)) << 8 |
       (ulong)((uVar7 | uVar1 << 0x18 | uVar8 << 0x1b | uVar3) >> 0x18);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::EncodeTMode(unsigned char*, cvtt::ParallelMath::Float&,
   cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::VInt16<2> const (*) [3],
   cvtt::ParallelMath::Float const (*) [3], cvtt::Options const&) */

void cvtt::Internal::ETCComputer::EncodeTMode
               (uchar *param_1,Float *param_2,Int16CompFlag *param_3,VInt16<2> *param_4,
               Float *param_5,Options *param_6)

{
  VInt16<2> *pVVar1;
  ushort *puVar2;
  long lVar3;
  long lVar4;
  ETCComputer *this;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [14];
  undefined2 uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  ushort *puVar21;
  ushort *puVar22;
  undefined1 (*pauVar23) [16];
  VInt16<2> *pVVar24;
  Float *pFVar25;
  uint uVar26;
  VInt16 *pVVar27;
  long lVar28;
  int iVar29;
  undefined1 (*pauVar30) [16];
  VInt16 *pVVar31;
  uint uVar32;
  int iVar33;
  undefined1 (*pauVar34) [16];
  long in_FS_OFFSET;
  short sVar35;
  ushort uVar36;
  short sVar37;
  short sVar38;
  short sVar45;
  ushort uVar46;
  short sVar47;
  uint uVar39;
  undefined4 uVar40;
  short sVar48;
  ushort uVar49;
  short sVar50;
  short sVar51;
  ushort uVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  short sVar62;
  uint uVar63;
  ulong uVar64;
  short sVar70;
  short sVar72;
  short sVar74;
  short sVar77;
  short sVar80;
  short sVar83;
  short sVar86;
  undefined1 auVar65 [16];
  ushort uVar75;
  ushort uVar78;
  ushort uVar81;
  ushort uVar84;
  ushort uVar87;
  undefined1 auVar66 [16];
  short sVar71;
  short sVar73;
  short sVar76;
  short sVar79;
  short sVar82;
  short sVar85;
  short sVar88;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar102;
  undefined1 auVar101 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar111;
  float fVar112;
  undefined1 auVar110 [16];
  float fVar113;
  undefined2 local_748;
  undefined2 uStack_746;
  undefined2 uStack_744;
  undefined2 uStack_742;
  long local_6d8;
  undefined1 local_688 [16];
  VInt16 local_678 [16];
  short local_668;
  short sStack_666;
  short sStack_664;
  short sStack_662;
  short sStack_660;
  short sStack_65e;
  short sStack_65c;
  short sStack_65a;
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  int local_608 [4];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  VInt16 local_588 [16];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  VInt16 local_558 [8];
  undefined8 auStack_550 [5];
  VInt16 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  VInt16 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined4 local_4c8;
  undefined2 uStack_4c4;
  ushort local_438 [8];
  ushort auStack_428 [8];
  ushort local_418 [232];
  int local_248;
  short sStack_244;
  undefined2 uStack_242;
  short sStack_240;
  undefined2 uStack_23e;
  short sStack_23c;
  undefined2 uStack_23a;
  short local_238;
  undefined2 uStack_236;
  short sStack_234;
  undefined2 uStack_232;
  short sStack_230;
  undefined2 uStack_22e;
  short sStack_22c;
  undefined2 uStack_22a;
  undefined1 local_48 [8];
  long local_40;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_688 = (undefined1  [16])0x0;
  local_5e8 = (undefined1  [16])0x0;
  local_5d8 = (undefined1  [16])0x0;
  local_5c8 = (undefined1  [16])0x0;
  local_5b8 = (undefined1  [16])0x0;
  local_5a8 = (undefined1  [16])0x0;
  uVar18 = *(uint *)param_6 & 0x400;
  local_598 = (undefined1  [16])0x0;
  uVar32 = *(uint *)param_6 & 0x200;
  pVVar24 = param_4;
  auVar65 = (undefined1  [16])0x0;
  do {
    uVar36 = *(ushort *)param_3;
    uVar46 = *(ushort *)(param_3 + 2);
    uVar49 = *(ushort *)(param_3 + 4);
    uVar52 = *(ushort *)(param_3 + 6);
    uVar75 = *(ushort *)(param_3 + 8);
    uVar78 = *(ushort *)(param_3 + 10);
    uVar81 = *(ushort *)(param_3 + 0xc);
    uVar84 = *(ushort *)(param_3 + 0xe);
    lVar20 = 0;
    do {
      pVVar1 = pVVar24 + lVar20;
      uVar87 = *(ushort *)(pVVar1 + 2);
      uVar9 = *(ushort *)(pVVar1 + 4);
      uVar10 = *(ushort *)(pVVar1 + 6);
      uVar11 = *(ushort *)(pVVar1 + 8);
      uVar12 = *(ushort *)(pVVar1 + 10);
      uVar13 = *(ushort *)(pVVar1 + 0xc);
      uVar14 = *(ushort *)(pVVar1 + 0xe);
      *(ushort *)(local_5e8 + lVar20) =
           (*(ushort *)pVVar1 & uVar36) + *(short *)(local_5e8 + lVar20);
      *(ushort *)(local_5e8 + lVar20 + 2) = (uVar87 & uVar46) + *(short *)(local_5e8 + lVar20 + 2);
      *(ushort *)(local_5e8 + lVar20 + 4) = (uVar9 & uVar49) + *(short *)(local_5e8 + lVar20 + 4);
      *(ushort *)(local_5e8 + lVar20 + 6) = (uVar10 & uVar52) + *(short *)(local_5e8 + lVar20 + 6);
      *(ushort *)(local_5e8 + lVar20 + 8) = (uVar11 & uVar75) + *(short *)(local_5e8 + lVar20 + 8);
      *(ushort *)(local_5e8 + lVar20 + 10) = (uVar12 & uVar78) + *(short *)(local_5e8 + lVar20 + 10)
      ;
      *(ushort *)(local_5e8 + lVar20 + 0xc) =
           (uVar13 & uVar81) + *(short *)(local_5e8 + lVar20 + 0xc);
      *(ushort *)(local_5e8 + lVar20 + 0xe) =
           (uVar14 & uVar84) + *(short *)(local_5e8 + lVar20 + 0xe);
      pVVar1 = pVVar24 + lVar20;
      sVar62 = *(short *)(pVVar1 + 2);
      sVar70 = *(short *)(pVVar1 + 4);
      sVar72 = *(short *)(pVVar1 + 6);
      sVar74 = *(short *)(pVVar1 + 8);
      sVar77 = *(short *)(pVVar1 + 10);
      sVar80 = *(short *)(pVVar1 + 0xc);
      sVar83 = *(short *)(pVVar1 + 0xe);
      *(short *)(local_5b8 + lVar20) = *(short *)(local_5b8 + lVar20) + *(short *)pVVar1;
      *(short *)(local_5b8 + lVar20 + 2) = *(short *)(local_5b8 + lVar20 + 2) + sVar62;
      *(short *)(local_5b8 + lVar20 + 4) = *(short *)(local_5b8 + lVar20 + 4) + sVar70;
      *(short *)(local_5b8 + lVar20 + 6) = *(short *)(local_5b8 + lVar20 + 6) + sVar72;
      *(short *)(local_5b8 + lVar20 + 8) = *(short *)(local_5b8 + lVar20 + 8) + sVar74;
      *(short *)(local_5b8 + lVar20 + 10) = *(short *)(local_5b8 + lVar20 + 10) + sVar77;
      *(short *)(local_5b8 + lVar20 + 0xc) = *(short *)(local_5b8 + lVar20 + 0xc) + sVar80;
      *(short *)(local_5b8 + lVar20 + 0xe) = *(short *)(local_5b8 + lVar20 + 0xe) + sVar83;
      lVar20 = lVar20 + 0x10;
    } while (lVar20 != 0x30);
    pVVar24 = pVVar24 + 0x30;
    param_3 = param_3 + 0x10;
    auVar66._0_2_ = (uVar36 & __LC30) + auVar65._0_2_;
    auVar66._2_2_ = (uVar46 & _UNK_0010b332) + auVar65._2_2_;
    auVar66._4_2_ = (uVar49 & _UNK_0010b334) + auVar65._4_2_;
    auVar66._6_2_ = (uVar52 & _UNK_0010b336) + auVar65._6_2_;
    auVar66._8_2_ = (uVar75 & _UNK_0010b338) + auVar65._8_2_;
    auVar66._10_2_ = (uVar78 & _UNK_0010b33a) + auVar65._10_2_;
    auVar66._12_2_ = (uVar81 & _UNK_0010b33c) + auVar65._12_2_;
    auVar66._14_2_ = (uVar84 & _UNK_0010b33e) + auVar65._14_2_;
    auVar65 = auVar66;
  } while (param_4 + 0x300 != pVVar24);
  lVar20 = 0;
  local_5b8._2_2_ = local_5b8._2_2_ - local_5e8._2_2_;
  local_5b8._0_2_ = local_5b8._0_2_ - local_5e8._0_2_;
  local_5b8._4_2_ = local_5b8._4_2_ - local_5e8._4_2_;
  local_5b8._6_2_ = local_5b8._6_2_ - local_5e8._6_2_;
  local_5b8._8_2_ = local_5b8._8_2_ - local_5e8._8_2_;
  local_5b8._10_2_ = local_5b8._10_2_ - local_5e8._10_2_;
  local_5b8._12_2_ = local_5b8._12_2_ - local_5e8._12_2_;
  local_5b8._14_2_ = local_5b8._14_2_ - local_5e8._14_2_;
  local_5a8._2_2_ = local_5a8._2_2_ - local_5d8._2_2_;
  local_5a8._0_2_ = local_5a8._0_2_ - local_5d8._0_2_;
  local_5a8._4_2_ = local_5a8._4_2_ - local_5d8._4_2_;
  local_5a8._6_2_ = local_5a8._6_2_ - local_5d8._6_2_;
  local_5a8._8_2_ = local_5a8._8_2_ - local_5d8._8_2_;
  local_5a8._10_2_ = local_5a8._10_2_ - local_5d8._10_2_;
  local_5a8._12_2_ = local_5a8._12_2_ - local_5d8._12_2_;
  local_5a8._14_2_ = local_5a8._14_2_ - local_5d8._14_2_;
  local_678[0] = (VInt16)auVar66[0];
  local_678[1] = (VInt16)auVar66[1];
  local_678[2] = (VInt16)auVar66[2];
  local_678[3] = (VInt16)auVar66[3];
  local_678[4] = (VInt16)auVar66[4];
  local_678[5] = (VInt16)auVar66[5];
  local_678[6] = (VInt16)auVar66[6];
  local_678[7] = (VInt16)auVar66[7];
  local_678[8] = (VInt16)auVar66[8];
  local_678[9] = (VInt16)auVar66[9];
  local_678[10] = (VInt16)auVar66[10];
  local_678[0xb] = (VInt16)auVar66[0xb];
  local_678[0xc] = (VInt16)auVar66[0xc];
  local_678[0xd] = (VInt16)auVar66[0xd];
  local_678[0xe] = (VInt16)auVar66[0xe];
  local_678[0xf] = (VInt16)auVar66[0xf];
  local_598._2_2_ = local_598._2_2_ - local_5c8._2_2_;
  local_598._0_2_ = local_598._0_2_ - local_5c8._0_2_;
  local_598._4_2_ = local_598._4_2_ - local_5c8._4_2_;
  local_598._6_2_ = local_598._6_2_ - local_5c8._6_2_;
  local_598._8_2_ = local_598._8_2_ - local_5c8._8_2_;
  local_598._10_2_ = local_598._10_2_ - local_5c8._10_2_;
  local_598._12_2_ = local_598._12_2_ - local_5c8._12_2_;
  local_598._14_2_ = local_598._14_2_ - local_5c8._14_2_;
  sVar62 = __LC114 - auVar66._0_2_;
  sVar70 = _UNK_0010b412 - auVar66._2_2_;
  sVar72 = _UNK_0010b414 - auVar66._4_2_;
  sVar74 = _UNK_0010b416 - auVar66._6_2_;
  sVar77 = _UNK_0010b418 - auVar66._8_2_;
  sVar80 = _UNK_0010b41a - auVar66._10_2_;
  sVar83 = _UNK_0010b41c - auVar66._12_2_;
  sVar86 = _UNK_0010b41e - auVar66._14_2_;
  local_668 = sVar62;
  sStack_666 = sVar70;
  sStack_664 = sVar72;
  sStack_662 = sVar74;
  sStack_660 = sVar77;
  sStack_65e = sVar80;
  sStack_65c = sVar83;
  sStack_65a = sVar86;
  auVar65 = pmulhuw(__LC71,auVar66);
  local_238 = auVar66._8_2_ * SUB162(__LC71,8);
  uStack_236 = auVar65._8_2_;
  sStack_234 = auVar66._10_2_ * SUB162(__LC71,10);
  uStack_232 = auVar65._10_2_;
  sStack_230 = auVar66._12_2_ * SUB162(__LC71,0xc);
  uStack_22e = auVar65._12_2_;
  sStack_22c = auVar66._14_2_ * SUB162(__LC71,0xe);
  uStack_22a = auVar65._14_2_;
  auVar89 = psllw(auVar66,4);
  local_248._0_2_ = auVar66._0_2_ * SUB162(__LC71,0);
  local_248._2_2_ = auVar65._0_2_;
  sStack_244 = auVar66._2_2_ * SUB162(__LC71,2);
  uStack_242 = auVar65._2_2_;
  sStack_240 = auVar66._4_2_ * SUB162(__LC71,4);
  uStack_23e = auVar65._4_2_;
  sStack_23c = auVar66._6_2_ * SUB162(__LC71,6);
  uStack_23a = auVar65._6_2_;
  auVar89 = auVar89 | auVar66;
  do {
    local_638._0_2_ = *(short *)(local_5e8 + lVar20) * 2 + auVar89._0_2_;
    local_638._2_2_ = *(short *)(local_5e8 + lVar20 + 2) * 2 + auVar89._2_2_;
    local_638._4_2_ = *(short *)(local_5e8 + lVar20 + 4) * 2 + auVar89._4_2_;
    local_638._6_2_ = *(short *)(local_5e8 + lVar20 + 6) * 2 + auVar89._6_2_;
    local_638._8_2_ = *(short *)(local_5e8 + lVar20 + 8) * 2 + auVar89._8_2_;
    local_638._10_2_ = *(short *)(local_5e8 + lVar20 + 10) * 2 + auVar89._10_2_;
    local_638._12_2_ = *(short *)(local_5e8 + lVar20 + 0xc) * 2 + auVar89._12_2_;
    local_638._14_2_ = *(short *)(local_5e8 + lVar20 + 0xe) * 2 + auVar89._14_2_;
    if (uVar18 != 0) {
      local_638._0_2_ = *(short *)(local_5e8 + lVar20) * 2;
      local_638._2_2_ = *(short *)(local_5e8 + lVar20 + 2) * 2;
      local_638._4_2_ = *(short *)(local_5e8 + lVar20 + 4) * 2;
      local_638._6_2_ = *(short *)(local_5e8 + lVar20 + 6) * 2;
      local_638._8_2_ = *(short *)(local_5e8 + lVar20 + 8) * 2;
      local_638._10_2_ = *(short *)(local_5e8 + lVar20 + 10) * 2;
      local_638._12_2_ = *(short *)(local_5e8 + lVar20 + 0xc) * 2;
      local_638._14_2_ = *(short *)(local_5e8 + lVar20 + 0xe) * 2;
    }
    lVar28 = 0;
    do {
      iVar33 = *(int *)(*(undefined1 (*) [16])&local_248 + lVar28 * 2);
      uVar17 = 0;
      if (iVar33 != 0) {
        uVar17 = (undefined2)((long)(ulong)*(ushort *)(local_638 + lVar28) / (long)iVar33);
      }
      *(undefined2 *)(local_588 + lVar28 + lVar20) = uVar17;
      lVar28 = lVar28 + 2;
    } while (lVar28 != 0x10);
    *(undefined8 *)(local_558 + lVar20) = local_638._0_8_;
    *(undefined8 *)((long)auStack_550 + lVar20) = local_638._8_8_;
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x30);
  if (uVar18 != 0) {
    ResolveTHFakeBT709Rounding(local_588,local_558,local_678);
  }
  iVar33 = 0;
  local_748 = SUB82(param_4,0);
  uStack_746 = (undefined2)((ulong)param_4 >> 0x10);
  uStack_744 = (undefined2)((ulong)param_4 >> 0x20);
  uStack_742 = (undefined2)((ulong)param_4 >> 0x30);
  auVar65 = psllw((undefined1  [16])local_588,4);
  local_528 = (VInt16  [16])(auVar65 | (undefined1  [16])local_588);
  local_518 = psllw(local_578,4);
  local_518 = local_518 | local_578;
  local_508 = psllw(local_568,4);
  local_508 = local_508 | local_568;
  pFVar25 = param_5;
  do {
    this = (ETCComputer *)(&local_248 + (long)iVar33 * 8);
    if (uVar18 == 0) {
      if (uVar32 == 0) {
        ComputeErrorWeighted(this,local_528,pFVar25);
      }
      else {
        ComputeErrorUniform(this,(VInt16 *)
                                 CONCAT26(uStack_742,
                                          CONCAT24(uStack_744,CONCAT22(uStack_746,local_748))),
                            local_528);
      }
    }
    else {
      ComputeErrorFakeBT709(this,local_528,pFVar25);
    }
    iVar33 = iVar33 + 1;
    lVar20 = CONCAT26(uStack_742,CONCAT24(uStack_744,CONCAT22(uStack_746,local_748))) + 0x30;
    local_748 = (undefined2)lVar20;
    uStack_746 = (undefined2)((ulong)lVar20 >> 0x10);
    uStack_744 = (undefined2)((ulong)lVar20 >> 0x20);
    uStack_742 = (undefined2)((ulong)lVar20 >> 0x30);
    pFVar25 = pFVar25 + 0x60;
  } while (iVar33 != 0x10);
  sVar35 = auVar66._0_2_ + __LC72;
  sVar45 = auVar66._2_2_ + _UNK_0010b462;
  sVar48 = auVar66._4_2_ + _UNK_0010b464;
  sVar51 = auVar66._6_2_ + _UNK_0010b466;
  sVar54 = auVar66._8_2_ + _UNK_0010b468;
  sVar56 = auVar66._10_2_ + _UNK_0010b46a;
  sVar58 = auVar66._12_2_ + _UNK_0010b46c;
  sVar60 = auVar66._14_2_ + _UNK_0010b46e;
  local_628 = (undefined1  [16])0x0;
  local_618 = (undefined1  [16])0x0;
  pVVar31 = (VInt16 *)&local_4c8;
  local_658 = (undefined1  [16])0x0;
  uVar36 = (ushort)(sVar77 < sVar62) * sVar62 | (ushort)(sVar77 >= sVar62) * sVar77;
  uVar46 = (ushort)(sVar80 < sVar70) * sVar70 | (ushort)(sVar80 >= sVar70) * sVar80;
  uVar49 = (ushort)(sVar83 < sVar72) * sVar72 | (ushort)(sVar83 >= sVar72) * sVar83;
  uVar52 = (ushort)(sVar86 < sVar74) * sVar74 | (ushort)(sVar86 >= sVar74) * sVar86;
  local_648 = (undefined1  [16])0x0;
  uVar36 = ((short)uVar36 < (short)uVar49) * uVar49 | ((short)uVar36 >= (short)uVar49) * uVar36;
  uVar46 = ((short)uVar46 < (short)uVar52) * uVar52 | ((short)uVar46 >= (short)uVar52) * uVar46;
  uVar46 = ((short)uVar36 < (short)uVar46) * uVar46 | ((short)uVar36 >= (short)uVar46) * uVar36;
  uVar36 = 0;
  if (-1 < (short)uVar46) {
    uVar36 = uVar46;
  }
  local_6d8 = 0;
  do {
    local_608[3] = 0;
    local_608[2] = 0;
    local_608[1] = 0;
    local_608[0] = 0;
    sVar5 = (&Tables::ETC1::g_thModifierTable)[local_6d8];
    local_5f8 = (undefined1  [16])0x0;
    sVar38 = -uVar36;
    do {
      pVVar27 = local_4f8;
      if (uVar18 == 0) {
        do {
          *(undefined1 (*) [16])pVVar27 = (undefined1  [16])0x0;
          pVVar27 = pVVar27 + 0x10;
        } while (pVVar31 != pVVar27);
      }
      else {
        lVar20 = 0;
        uVar46 = (ushort)(sVar62 < sVar38) * sVar62 | (ushort)(sVar62 >= sVar38) * sVar38;
        uVar49 = (ushort)(sVar70 < sVar38) * sVar70 | (ushort)(sVar70 >= sVar38) * sVar38;
        uVar52 = (ushort)(sVar72 < sVar38) * sVar72 | (ushort)(sVar72 >= sVar38) * sVar38;
        uVar75 = (ushort)(sVar74 < sVar38) * sVar74 | (ushort)(sVar74 >= sVar38) * sVar38;
        uVar78 = (ushort)(sVar77 < sVar38) * sVar77 | (ushort)(sVar77 >= sVar38) * sVar38;
        uVar81 = (ushort)(sVar80 < sVar38) * sVar80 | (ushort)(sVar80 >= sVar38) * sVar38;
        uVar84 = (ushort)(sVar83 < sVar38) * sVar83 | (ushort)(sVar83 >= sVar38) * sVar38;
        uVar87 = (ushort)(sVar86 < sVar38) * sVar86 | (ushort)(sVar86 >= sVar38) * sVar38;
        do {
          sVar47 = *(short *)(local_5b8 + lVar20 + 2);
          sVar50 = *(short *)(local_5b8 + lVar20 + 4);
          sVar53 = *(short *)(local_5b8 + lVar20 + 6);
          sVar55 = *(short *)(local_5b8 + lVar20 + 8);
          sVar57 = *(short *)(local_5b8 + lVar20 + 10);
          sVar59 = *(short *)(local_5b8 + lVar20 + 0xc);
          sVar61 = *(short *)(local_5b8 + lVar20 + 0xe);
          *(undefined1 (*) [16])(local_4f8 + lVar20) = (undefined1  [16])0x0;
          sVar37 = *(short *)(local_5b8 + lVar20) * 2 +
                   ((ushort)((short)uVar46 < sVar35) * sVar35 | ((short)uVar46 >= sVar35) * uVar46)
                   * sVar5 * 2;
          sVar47 = sVar47 * 2 +
                   ((ushort)((short)uVar49 < sVar45) * sVar45 | ((short)uVar49 >= sVar45) * uVar49)
                   * sVar5 * 2;
          sVar50 = sVar50 * 2 +
                   ((ushort)((short)uVar52 < sVar48) * sVar48 | ((short)uVar52 >= sVar48) * uVar52)
                   * sVar5 * 2;
          sVar53 = sVar53 * 2 +
                   ((ushort)((short)uVar75 < sVar51) * sVar51 | ((short)uVar75 >= sVar51) * uVar75)
                   * sVar5 * 2;
          sVar55 = sVar55 * 2 +
                   ((ushort)((short)uVar78 < sVar54) * sVar54 | ((short)uVar78 >= sVar54) * uVar78)
                   * sVar5 * 2;
          sVar57 = sVar57 * 2 +
                   ((ushort)((short)uVar81 < sVar56) * sVar56 | ((short)uVar81 >= sVar56) * uVar81)
                   * sVar5 * 2;
          sVar59 = sVar59 * 2 +
                   ((ushort)((short)uVar84 < sVar58) * sVar58 | ((short)uVar84 >= sVar58) * uVar84)
                   * sVar5 * 2;
          sVar61 = sVar61 * 2 +
                   ((ushort)((short)uVar87 < sVar60) * sVar60 | ((short)uVar87 >= sVar60) * uVar87)
                   * sVar5 * 2;
          pVVar27 = pVVar31 + lVar20;
          *(ushort *)pVVar27 = (ushort)(-1 < sVar37) * sVar37;
          *(ushort *)(pVVar27 + 2) = (ushort)(-1 < sVar47) * sVar47;
          *(ushort *)(pVVar27 + 4) = (ushort)(-1 < sVar50) * sVar50;
          *(ushort *)(pVVar27 + 6) = (ushort)(-1 < sVar53) * sVar53;
          *(ushort *)(pVVar27 + 8) = (ushort)(-1 < sVar55) * sVar55;
          *(ushort *)(pVVar27 + 10) = (ushort)(-1 < sVar57) * sVar57;
          *(ushort *)(pVVar27 + 0xc) = (ushort)(-1 < sVar59) * sVar59;
          *(ushort *)(pVVar27 + 0xe) = (ushort)(-1 < sVar61) * sVar61;
          lVar20 = lVar20 + 0x10;
        } while (lVar20 != 0x30);
        ResolveTHFakeBT709Rounding(local_4f8,pVVar31,(VInt16 *)&local_668);
      }
      lVar20 = 0;
      auVar65 = psllw(local_4d8,10);
      auVar66 = psllw(local_4e8,5);
      local_638 = auVar65 | auVar66 | (undefined1  [16])local_4f8;
      do {
        iVar33 = *(int *)((long)local_608 + lVar20 * 2);
        sVar47 = *(short *)(local_638 + lVar20);
        if ((iVar33 == 0) ||
           (sVar47 != *(short *)((long)local_438 + lVar20 + (long)(iVar33 + -1) * 0x10))) {
          *(int *)((long)local_608 + lVar20 * 2) = iVar33 + 1;
          *(short *)((long)local_438 + lVar20 + (long)iVar33 * 0x10) = sVar47;
        }
        lVar20 = lVar20 + 2;
      } while (lVar20 != 0x10);
      sVar38 = sVar38 + 1;
    } while (sVar38 <= (short)uVar36);
    auVar89._0_4_ = -(uint)(local_608[0] < local_5f8._0_4_);
    auVar89._4_4_ = -(uint)(local_608[1] < local_5f8._4_4_);
    auVar89._8_4_ = -(uint)(local_608[2] < local_5f8._8_4_);
    auVar89._12_4_ = -(uint)(local_608[3] < local_5f8._12_4_);
    auVar65._4_4_ = local_608[1];
    auVar65._0_4_ = local_608[0];
    auVar65._8_4_ = local_608[2];
    auVar65._12_4_ = local_608[3];
    auVar65 = local_5f8 & auVar89 | ~auVar89 & auVar65;
    auVar90._0_4_ = -(uint)(auVar65._0_4_ < auVar65._8_4_);
    auVar90._4_4_ = -(uint)(auVar65._4_4_ < auVar65._12_4_);
    auVar90._8_4_ = -(uint)(auVar65._8_4_ < 0);
    auVar90._12_4_ = -(uint)(auVar65._12_4_ < 0);
    auVar65 = ~auVar90 & auVar65 | auVar65 >> 0x40 & auVar90;
    uVar39 = auVar65._0_4_;
    uVar26 = auVar65._4_4_;
    uVar63 = -(uint)((int)uVar39 < (int)uVar26);
    uVar63 = ~uVar63 & uVar39 | uVar26 & uVar63;
    uVar39 = 0;
    if (-1 < (int)uVar63) {
      uVar39 = uVar63;
    }
    lVar20 = 0;
    do {
      iVar33 = local_608[lVar20];
      uVar46 = *(ushort *)((long)*(undefined1 (*) [16])local_438 + lVar20 * 2);
      iVar19 = iVar33 + 1;
      if (iVar19 < (int)uVar39) {
        puVar21 = (ushort *)((long)((undefined1 (*) [16])local_438)[iVar19] + lVar20 * 2);
        puVar2 = local_418 + lVar20 + ((ulong)((uVar39 - 2) - iVar33) + (long)iVar33) * 8;
        if (((int)puVar2 - (int)puVar21 & 0x10U) != 0) {
          *puVar21 = uVar46;
          puVar21 = auStack_428 + (long)iVar19 * 8 + lVar20;
          if (auStack_428 + (long)iVar19 * 8 + lVar20 == puVar2) goto LAB_00104430;
        }
        do {
          *puVar21 = uVar46;
          puVar22 = puVar21 + 0x10;
          puVar21[8] = uVar46;
          puVar21 = puVar22;
        } while (puVar22 != puVar2);
      }
LAB_00104430:
      lVar20 = lVar20 + 1;
    } while (lVar20 != 8);
    if (0 < (int)uVar63) {
      uVar40 = CONCAT22((short)local_6d8,(short)local_6d8);
      fVar103 = *(float *)(param_2 + 0x10);
      fVar104 = *(float *)(param_2 + 0x14);
      fVar105 = *(float *)(param_2 + 0x18);
      fVar106 = *(float *)(param_2 + 0x1c);
      fVar109 = *(float *)param_2;
      fVar111 = *(float *)(param_2 + 4);
      fVar112 = *(float *)(param_2 + 8);
      fVar113 = *(float *)(param_2 + 0xc);
      pauVar23 = (undefined1 (*) [16])local_48;
      pauVar30 = (undefined1 (*) [16])local_438;
      do {
        uVar46 = *(ushort *)*pauVar30;
        uVar49 = *(ushort *)((long)*pauVar30 + 2);
        uVar52 = *(ushort *)((long)*pauVar30 + 4);
        uVar75 = *(ushort *)((long)*pauVar30 + 6);
        uVar78 = *(ushort *)((long)*pauVar30 + 8);
        uVar81 = *(ushort *)((long)*pauVar30 + 10);
        uVar84 = *(ushort *)((long)*pauVar30 + 0xc);
        uVar87 = *(ushort *)((long)*pauVar30 + 0xe);
        auVar65 = *pauVar30;
        pVVar27 = pVVar31;
        uVar63 = 0;
        do {
          uVar26 = uVar63 + 5;
          uVar64 = (ulong)uVar63;
          auVar108._0_2_ = uVar46 >> uVar64;
          auVar108._2_2_ = uVar49 >> uVar64;
          auVar108._4_2_ = uVar52 >> uVar64;
          auVar108._6_2_ = uVar75 >> uVar64;
          auVar108._8_2_ = uVar78 >> uVar64;
          auVar108._10_2_ = uVar81 >> uVar64;
          auVar108._12_2_ = uVar84 >> uVar64;
          auVar108._14_2_ = uVar87 >> uVar64;
          auVar66 = psllw(auVar108 & __LC73,4);
          auVar66 = auVar108 & __LC73 | auVar66;
          sVar37 = sVar5 + auVar66._0_2_;
          sVar71 = sVar5 + auVar66._2_2_;
          sVar73 = sVar5 + auVar66._4_2_;
          sVar76 = sVar5 + auVar66._6_2_;
          sVar79 = sVar5 + auVar66._8_2_;
          sVar82 = sVar5 + auVar66._10_2_;
          sVar85 = sVar5 + auVar66._12_2_;
          sVar88 = sVar5 + auVar66._14_2_;
          *(undefined1 (*) [16])(pVVar27 + 0x30) = auVar66;
          sVar38 = auVar66._0_2_ - sVar5;
          sVar47 = auVar66._2_2_ - sVar5;
          sVar50 = auVar66._4_2_ - sVar5;
          sVar53 = auVar66._6_2_ - sVar5;
          sVar55 = auVar66._8_2_ - sVar5;
          sVar57 = auVar66._10_2_ - sVar5;
          sVar59 = auVar66._12_2_ - sVar5;
          sVar61 = auVar66._14_2_ - sVar5;
          *(ushort *)pVVar27 =
               (ushort)(__LC27 < sVar37) * __LC27 | (ushort)(__LC27 >= sVar37) * sVar37;
          *(ushort *)(pVVar27 + 2) =
               (ushort)(_UNK_0010b352 < sVar71) * _UNK_0010b352 |
               (ushort)(_UNK_0010b352 >= sVar71) * sVar71;
          *(ushort *)(pVVar27 + 4) =
               (ushort)(_UNK_0010b354 < sVar73) * _UNK_0010b354 |
               (ushort)(_UNK_0010b354 >= sVar73) * sVar73;
          *(ushort *)(pVVar27 + 6) =
               (ushort)(_UNK_0010b356 < sVar76) * _UNK_0010b356 |
               (ushort)(_UNK_0010b356 >= sVar76) * sVar76;
          *(ushort *)(pVVar27 + 8) =
               (ushort)(_UNK_0010b358 < sVar79) * _UNK_0010b358 |
               (ushort)(_UNK_0010b358 >= sVar79) * sVar79;
          *(ushort *)(pVVar27 + 10) =
               (ushort)(_UNK_0010b35a < sVar82) * _UNK_0010b35a |
               (ushort)(_UNK_0010b35a >= sVar82) * sVar82;
          *(ushort *)(pVVar27 + 0xc) =
               (ushort)(_UNK_0010b35c < sVar85) * _UNK_0010b35c |
               (ushort)(_UNK_0010b35c >= sVar85) * sVar85;
          *(ushort *)(pVVar27 + 0xe) =
               (ushort)(_UNK_0010b35e < sVar88) * _UNK_0010b35e |
               (ushort)(_UNK_0010b35e >= sVar88) * sVar88;
          *(ushort *)(pVVar27 + 0x60) = (ushort)(-1 < sVar38) * sVar38;
          *(ushort *)(pVVar27 + 0x62) = (ushort)(-1 < sVar47) * sVar47;
          *(ushort *)(pVVar27 + 100) = (ushort)(-1 < sVar50) * sVar50;
          *(ushort *)(pVVar27 + 0x66) = (ushort)(-1 < sVar53) * sVar53;
          *(ushort *)(pVVar27 + 0x68) = (ushort)(-1 < sVar55) * sVar55;
          *(ushort *)(pVVar27 + 0x6a) = (ushort)(-1 < sVar57) * sVar57;
          *(ushort *)(pVVar27 + 0x6c) = (ushort)(-1 < sVar59) * sVar59;
          *(ushort *)(pVVar27 + 0x6e) = (ushort)(-1 < sVar61) * sVar61;
          pVVar27 = pVVar27 + 0x10;
          uVar63 = uVar26;
        } while (uVar26 != 0xf);
        auVar89 = (undefined1  [16])0x0;
        auVar66 = (undefined1  [16])0x0;
        auVar42 = ZEXT816(0);
        auVar101._0_12_ = ZEXT812(0);
        auVar101._12_4_ = 0.0;
        pVVar27 = pVVar31;
        pFVar25 = param_5;
        pVVar24 = param_4;
        pauVar34 = (undefined1 (*) [16])&local_248;
        iVar33 = 0;
        do {
          auVar90 = *pauVar34;
          auVar97 = (undefined1  [16])0x0;
          pVVar31 = pVVar27;
          auVar108 = auVar42;
          auVar42 = pauVar34[1];
          auVar43 = auVar101;
          iVar19 = 1;
          do {
            if (uVar32 == 0) {
              ComputeErrorWeighted(local_4f8,pVVar27,pFVar25);
            }
            else {
              ComputeErrorUniform((ETCComputer *)local_4f8,pVVar27,(VInt16 *)pVVar24);
            }
            pVVar27 = pVVar27 + 0x30;
            auVar67 = minps(local_4e8,auVar42);
            auVar41._4_4_ = -(uint)(local_4f8._4_4_ < auVar90._4_4_);
            auVar41._0_4_ = -(uint)(local_4f8._0_4_ < auVar90._0_4_);
            auVar41._8_4_ = -(uint)(local_4f8._8_4_ < auVar90._8_4_);
            auVar41._12_4_ = -(uint)(local_4f8._12_4_ < auVar90._12_4_);
            auVar96._4_4_ = -(uint)(local_4e8._4_4_ < auVar42._4_4_);
            auVar96._0_4_ = -(uint)(local_4e8._0_4_ < auVar42._0_4_);
            auVar96._8_4_ = -(uint)(local_4e8._8_4_ < auVar42._8_4_);
            auVar96._12_4_ = -(uint)(local_4e8._12_4_ < auVar42._12_4_);
            auVar90 = minps((undefined1  [16])local_4f8,auVar90);
            iVar29 = iVar19 + 1;
            auVar68._0_4_ = CONCAT22((short)iVar19,(short)iVar19);
            auVar42 = packssdw(auVar41,auVar96);
            auVar68._4_4_ = auVar68._0_4_;
            auVar68._8_4_ = auVar68._0_4_;
            auVar68._12_4_ = auVar68._0_4_;
            auVar97 = auVar42 & auVar68 | ~auVar42 & auVar97;
            auVar42 = auVar67;
            iVar19 = iVar29;
          } while (iVar29 != 4);
          pauVar34 = pauVar34 + 2;
          pFVar25 = pFVar25 + 0x60;
          auVar7._10_2_ = 0;
          auVar7._0_10_ = auVar97._0_10_;
          auVar7._12_2_ = auVar97._6_2_;
          auVar8._8_2_ = auVar97._4_2_;
          auVar8._0_8_ = auVar97._0_8_;
          auVar8._10_4_ = auVar7._10_4_;
          auVar16._6_8_ = 0;
          auVar16._0_6_ = auVar8._8_6_;
          fVar98 = auVar108._0_4_ + auVar90._0_4_;
          fVar99 = auVar108._4_4_ + auVar90._4_4_;
          auVar42._0_8_ = CONCAT44(fVar99,fVar98);
          auVar42._8_4_ = auVar108._8_4_ + auVar90._8_4_;
          auVar42._12_4_ = auVar108._12_4_ + auVar90._12_4_;
          pVVar24 = (VInt16<2> *)((VInt16 *)pVVar24 + 0x30);
          fVar100 = auVar43._0_4_ + auVar67._0_4_;
          fVar102 = auVar43._4_4_ + auVar67._4_4_;
          auVar101._0_8_ = CONCAT44(fVar102,fVar100);
          auVar101._8_4_ = auVar43._8_4_ + auVar67._8_4_;
          auVar101._12_4_ = auVar43._12_4_ + auVar67._12_4_;
          auVar43._0_4_ = (uint)auVar97._0_2_ << iVar33;
          auVar43._4_4_ = (undefined4)CONCAT82(SUB148(auVar16 << 0x40,6),auVar97._2_2_);
          auVar43._8_4_ = auVar8._8_4_;
          auVar43._12_4_ = auVar7._10_4_ >> 0x10;
          auVar67._0_4_ = (uint)auVar97._8_2_ << iVar33;
          auVar67._4_2_ = auVar97._10_2_;
          auVar67._6_2_ = 0;
          auVar67._8_2_ = auVar97._12_2_;
          auVar67._10_2_ = 0;
          auVar67._12_2_ = auVar97._14_2_;
          auVar67._14_2_ = 0;
          auVar89 = auVar89 | auVar43;
          auVar66 = auVar66 | auVar67;
          pVVar27 = pVVar31;
          iVar33 = iVar33 + 2;
        } while (pauVar34 != pauVar23);
        auVar107._8_4_ = auVar101._8_4_;
        auVar107._0_8_ = auVar101._0_8_;
        auVar107._12_4_ = auVar101._12_4_;
        auVar110._8_4_ = auVar42._8_4_;
        auVar110._0_8_ = auVar42._0_8_;
        auVar110._12_4_ = auVar42._12_4_;
        auVar6._4_4_ = fVar111;
        auVar6._0_4_ = fVar109;
        auVar6._8_4_ = fVar112;
        auVar6._12_4_ = fVar113;
        auVar90 = minps(auVar110,auVar6);
        auVar44._4_4_ = -(uint)(fVar99 < fVar111);
        auVar44._0_4_ = -(uint)(fVar98 < fVar109);
        auVar44._8_4_ = -(uint)(auVar42._8_4_ < fVar112);
        auVar44._12_4_ = -(uint)(auVar42._12_4_ < fVar113);
        auVar91._4_4_ = -(uint)(fVar102 < fVar104);
        auVar91._0_4_ = -(uint)(fVar100 < fVar103);
        auVar91._8_4_ = -(uint)(auVar101._8_4_ < fVar105);
        auVar91._12_4_ = -(uint)(auVar101._12_4_ < fVar106);
        auVar97._4_4_ = fVar104;
        auVar97._0_4_ = fVar103;
        auVar97._8_4_ = fVar105;
        auVar97._12_4_ = fVar106;
        auVar108 = minps(auVar107,auVar97);
        fVar109 = auVar90._0_4_;
        fVar111 = auVar90._4_4_;
        fVar112 = auVar90._8_4_;
        fVar113 = auVar90._12_4_;
        *(undefined1 (*) [16])param_2 = auVar90;
        auVar90 = packssdw(auVar44,auVar91);
        fVar103 = auVar108._0_4_;
        fVar104 = auVar108._4_4_;
        fVar105 = auVar108._8_4_;
        fVar106 = auVar108._12_4_;
        *(undefined1 (*) [16])(param_2 + 0x10) = auVar108;
        if ((((((((((((((((auVar90 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar90 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar90 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar90 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar90 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar90 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar90 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar90 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar90 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar90 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar90 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar90 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar90 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar90 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar90 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            auVar90[0xf] < '\0') {
          local_648 = auVar65 & auVar90 | ~auVar90 & local_648;
          auVar95._0_12_ = auVar90._0_12_;
          auVar95._12_2_ = auVar90._6_2_;
          auVar95._14_2_ = auVar90._6_2_;
          auVar94._12_4_ = auVar95._12_4_;
          auVar94._0_10_ = auVar90._0_10_;
          auVar94._10_2_ = auVar90._4_2_;
          auVar93._10_6_ = auVar94._10_6_;
          auVar93._0_8_ = auVar90._0_8_;
          auVar93._8_2_ = auVar90._4_2_;
          auVar92._8_8_ = auVar93._8_8_;
          auVar92._6_2_ = auVar90._2_2_;
          auVar92._4_2_ = auVar90._2_2_;
          auVar92._2_2_ = auVar90._0_2_;
          auVar92._0_2_ = auVar90._0_2_;
          auVar69._2_2_ = auVar90._8_2_;
          auVar69._0_2_ = auVar90._8_2_;
          auVar69._4_2_ = auVar90._10_2_;
          auVar69._6_2_ = auVar90._10_2_;
          auVar69._8_2_ = auVar90._12_2_;
          auVar69._10_2_ = auVar90._12_2_;
          auVar69._14_2_ = auVar90._14_2_;
          auVar69._12_2_ = auVar69._14_2_;
          auVar15._4_4_ = uVar40;
          auVar15._0_4_ = uVar40;
          auVar15._8_4_ = uVar40;
          auVar15._12_4_ = uVar40;
          local_618 = auVar66 & auVar69 | ~auVar69 & local_618;
          local_628 = auVar89 & auVar92 | ~auVar92 & local_628;
          local_688 = auVar90 | local_688;
          local_658 = auVar15 & auVar90 | ~auVar90 & local_658;
        }
        pauVar30 = pauVar30 + 1;
      } while (pauVar30 != (undefined1 (*) [16])local_438 + (int)uVar39);
    }
    local_6d8 = local_6d8 + 1;
  } while (local_6d8 != 8);
  lVar20 = 0;
  do {
    while (*(short *)(local_688 + lVar20 * 2) != 0) {
      uVar36 = *(ushort *)(local_648 + lVar20 * 2);
      uVar18 = (uint)lVar20;
      lVar28 = lVar20 * 2;
      lVar3 = lVar20 * 2;
      uStack_4c4 = *(undefined2 *)(local_568 + lVar20 * 2);
      lVar4 = lVar20 * 2;
      lVar20 = lVar20 + 1;
      local_4c8 = CONCAT22((short)*(undefined4 *)(local_578 + lVar3),
                           (short)*(undefined4 *)(local_588 + lVar28));
      local_438[0] = uVar36 & 0xf;
      local_438[2] = (ushort)((int)(uint)uVar36 >> 10) & 0xf;
      local_438[1] = (ushort)((int)(uint)uVar36 >> 5) & 0xf;
      EmitTModeBlock(param_1,local_438,(ushort *)pVVar31,
                     *(int *)(local_628 + (long)((int)uVar18 >> 2) * 0x10 + (ulong)(uVar18 & 3) * 4)
                     ,*(ushort *)(local_658 + lVar4),true);
      param_1 = param_1 + 8;
      if (lVar20 == 8) goto LAB_001047a7;
    }
    lVar20 = lVar20 + 1;
    param_1 = param_1 + 8;
  } while (lVar20 != 8);
LAB_001047a7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Internal::ETCComputer::EmitHModeBlock(unsigned char*, unsigned short const*, unsigned
   short, unsigned short, unsigned short, bool) */

void cvtt::Internal::ETCComputer::EmitHModeBlock
               (uchar *param_1,ushort *param_2,ushort param_3,ushort param_4,ushort param_5,
               bool param_6)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  uint local_58;
  ushort local_54;
  undefined8 local_50;
  short local_48;
  short local_46;
  long local_40;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar2 == uVar3) {
    local_54 = uVar2 & 0x1f;
    uVar13 = 0x55555555;
    local_58 = CONCAT22(uVar2 >> 5,uVar2 >> 10) & _LC4;
    local_50 = CONCAT44(CONCAT22(local_50._6_2_,uVar2),local_58) & 0xffff001fffffffff;
    iVar9 = 0;
    bVar11 = 1;
    do {
      iVar10 = iVar9 + 1;
      uVar13 = uVar13 | ((int)(uint)param_4 >> ((byte)iVar9 & 0x1f) & 1U) << (bVar11 & 0x1f);
      iVar9 = iVar10;
      bVar11 = bVar11 + 2;
    } while (iVar10 != 0x10);
    EmitTModeBlock(param_1,(ushort *)&local_58,(ushort *)&local_50,uVar13,param_5,param_6);
  }
  else {
    uVar13 = (int)(uint)uVar2 >> 5;
    uVar14 = (int)(uint)uVar2 >> 10;
    uVar4 = (ushort)uVar14;
    uVar8 = uVar13 & 0xf;
    uVar6 = (int)(uint)uVar3 >> 5 & 0xf;
    local_48 = (short)uVar6;
    local_50 = (((ulong)((int)(uint)uVar3 >> 10 & 0xf) << 0x10 | (ulong)(uVar2 & 0xf)) << 0x10 |
               (ulong)(uVar13 & 0xf)) << 0x10 | (ulong)(uVar14 & 0xf);
    local_46 = (short)(uVar3 & 0xf);
    uVar13 = uVar2 & 0xf;
    if ((bool)((byte)param_5 & 1) != uVar3 < uVar2) {
      local_50 = CONCAT26(uVar4,(undefined6)local_50) & 0xfffffffffffff;
      param_3 = ~param_3;
      local_48 = (short)uVar8;
      local_46 = (short)(uVar2 & 0xf);
      uVar13 = uVar3 & 0xf;
      uVar8 = uVar6;
      uVar4 = (ushort)((int)(uint)uVar3 >> 10);
    }
    sVar5 = (short)(ushort)uVar8 >> 1;
    uVar6 = (uint)(short)((short)uVar13 >> 3);
    if ((ushort)((ushort)uVar8 >> 3) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (uint)((uint)((int)(short)(uVar4 & 0xf) + (int)sVar5) < 8) << 0x1f;
    }
    uVar7 = uVar14 | 0xe00000;
    if (((uVar8 & 1) * 2 | uVar6) + ((int)(uVar13 & 7) >> 1) < 4) {
      uVar7 = uVar14 | 0x40000;
    }
    lVar12 = 0;
    uVar14 = 0;
    uVar13 = (int)local_50._6_2_ << 0xb | (int)local_48 << 7 | (int)(short)(uVar4 & 0xf) << 0x1b |
             (int)sVar5 << 0x18 | (uVar8 & 1) << 0x14 | uVar6 << 0x13 | (uVar13 & 7) << 0xf;
    uVar7 = uVar13 | uVar7;
    do {
      puVar1 = &EmitHModeBlock(unsigned_char*,unsigned_short_const*,unsigned_short,unsigned_short,unsigned_short,bool)
                ::selectorOrder + lVar12;
      bVar11 = (byte)lVar12;
      lVar12 = lVar12 + 1;
      uVar14 = uVar14 | ((int)(uint)param_3 >> ((byte)*puVar1 & 0x1f) & 1U) <<
                        (bVar11 + 0x10 & 0x1f) |
                        ((int)(uint)param_4 >> ((byte)*puVar1 & 0x1f) & 1U) << (bVar11 & 0x1f);
    } while (lVar12 != 0x10);
    *(ulong *)param_1 =
         (((((((ulong)(uVar14 & 0xff) << 8 | (ulong)(uVar14 >> 8 & 0xff)) << 8 |
             (ulong)(uVar14 >> 0x10 & 0xff)) << 8 | (ulong)(uVar14 >> 0x18)) << 8 |
           (ulong)((int)local_48 << 7 & 0xffU | (int)local_46 << 3 | -(uint)param_6 & 2 |
                   param_5 >> 1 & 1 | (param_5 >> 2 & 1) << 2)) << 8 |
          (ulong)((uVar13 & 0xff00) >> 8)) << 8 | (ulong)(uVar7 >> 0x10 & 0xff)) << 8 |
         (ulong)(uVar7 >> 0x18);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00105133) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::EncodeHMode(unsigned char*, cvtt::ParallelMath::Float&,
   cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::VInt16<2> const (*) [3],
   cvtt::Internal::ETCComputer::HModeEval&, cvtt::ParallelMath::Float const (*) [3], cvtt::Options
   const&) */

void cvtt::Internal::ETCComputer::EncodeHMode
               (uchar *param_1,Float *param_2,Int16CompFlag *param_3,VInt16<2> *param_4,
               HModeEval *param_5,Float *param_6,Options *param_7)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [14];
  bool bVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [14];
  undefined1 auVar24 [16];
  unkbyte10 Var25;
  uint uVar26;
  short *psVar27;
  short *psVar28;
  undefined4 *puVar29;
  HModeEval *pHVar30;
  VInt16<2> *pVVar31;
  HModeEval *pHVar32;
  HModeEval *pHVar33;
  long lVar34;
  Float *pFVar35;
  long lVar36;
  VInt16 *pVVar37;
  long lVar38;
  int iVar39;
  VInt16<2> *pVVar40;
  long lVar41;
  int iVar42;
  ulong uVar43;
  long in_FS_OFFSET;
  ushort uVar44;
  undefined2 uVar45;
  ushort uVar46;
  short sVar55;
  uint uVar48;
  short sVar57;
  short sVar58;
  short sVar60;
  short sVar62;
  short sVar64;
  short sVar66;
  short sVar68;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  ushort uVar56;
  ushort uVar59;
  ushort uVar61;
  ushort uVar63;
  ushort uVar65;
  ushort uVar67;
  ushort uVar69;
  undefined1 auVar54 [16];
  short sVar70;
  uint uVar71;
  ulong uVar73;
  short sVar78;
  short sVar80;
  short sVar81;
  short sVar82;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  short sVar77;
  short sVar79;
  short sVar83;
  undefined1 auVar76 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  uint uVar86;
  short sVar91;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  short sVar92;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  undefined1 auVar93 [16];
  undefined1 auVar101 [12];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  short local_3c8;
  short sStack_3c6;
  short sStack_3c4;
  short sStack_3c2;
  short sStack_3c0;
  short sStack_3be;
  short sStack_3bc;
  short sStack_3ba;
  undefined1 local_3b8 [8];
  short sStack_3b0;
  short sStack_3ae;
  short sStack_3ac;
  short sStack_3aa;
  HModeEval *local_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  long local_330;
  undefined1 local_318 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  ushort local_248 [8];
  ushort local_238 [8];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  short local_1d8;
  short sStack_1d6;
  short sStack_1d4;
  short sStack_1d2;
  short sStack_1d0;
  short sStack_1ce;
  short sStack_1cc;
  short sStack_1ca;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  uint local_188 [8];
  undefined4 local_168;
  ushort local_164;
  float local_148 [8];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  VInt16 local_78 [2];
  undefined2 auStack_76 [27];
  long local_40;
  undefined4 uVar47;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  uint uVar72;
  undefined1 auVar102 [16];
  
  local_1d8 = 0;
  sStack_1d6 = 0;
  sStack_1d4 = 0;
  sStack_1d2 = 0;
  sStack_1d0 = 0;
  sStack_1ce = 0;
  sStack_1cc = 0;
  sStack_1ca = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)param_7;
  local_298 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  uVar43 = (ulong)(uVar2 & 0x400);
  pVVar40 = param_4;
  do {
    uVar44 = *(ushort *)param_3;
    uVar8 = *(ushort *)(param_3 + 2);
    uVar9 = *(ushort *)(param_3 + 4);
    uVar10 = *(ushort *)(param_3 + 6);
    uVar11 = *(ushort *)(param_3 + 8);
    uVar12 = *(ushort *)(param_3 + 10);
    uVar13 = *(ushort *)(param_3 + 0xc);
    uVar14 = *(ushort *)(param_3 + 0xe);
    psVar27 = (short *)local_108;
    pVVar31 = pVVar40;
    do {
      uVar46 = *(ushort *)pVVar31;
      uVar56 = *(ushort *)(pVVar31 + 2);
      uVar59 = *(ushort *)(pVVar31 + 4);
      uVar61 = *(ushort *)(pVVar31 + 6);
      uVar63 = *(ushort *)(pVVar31 + 8);
      uVar65 = *(ushort *)(pVVar31 + 10);
      uVar67 = *(ushort *)(pVVar31 + 0xc);
      uVar69 = *(ushort *)(pVVar31 + 0xe);
      psVar28 = psVar27 + 8;
      pVVar31 = pVVar31 + 0x10;
      *psVar27 = *psVar27 + uVar46;
      psVar27[1] = psVar27[1] + uVar56;
      psVar27[2] = psVar27[2] + uVar59;
      psVar27[3] = psVar27[3] + uVar61;
      psVar27[4] = psVar27[4] + uVar63;
      psVar27[5] = psVar27[5] + uVar65;
      psVar27[6] = psVar27[6] + uVar67;
      psVar27[7] = psVar27[7] + uVar69;
      psVar27[0x18] = (uVar46 & uVar44) + psVar27[0x18];
      psVar27[0x19] = (uVar56 & uVar8) + psVar27[0x19];
      psVar27[0x1a] = (uVar59 & uVar9) + psVar27[0x1a];
      psVar27[0x1b] = (uVar61 & uVar10) + psVar27[0x1b];
      psVar27[0x1c] = (uVar63 & uVar11) + psVar27[0x1c];
      psVar27[0x1d] = (uVar65 & uVar12) + psVar27[0x1d];
      psVar27[0x1e] = (uVar67 & uVar13) + psVar27[0x1e];
      psVar27[0x1f] = (uVar69 & uVar14) + psVar27[0x1f];
      psVar27 = psVar28;
    } while ((short *)local_d8 != psVar28);
    pVVar40 = pVVar40 + 0x30;
    param_3 = param_3 + 0x10;
    local_1d8 = (uVar44 & __LC30) + local_1d8;
    sStack_1d6 = (uVar8 & _UNK_0010b332) + sStack_1d6;
    sStack_1d4 = (uVar9 & _UNK_0010b334) + sStack_1d4;
    sStack_1d2 = (uVar10 & _UNK_0010b336) + sStack_1d2;
    sStack_1d0 = (uVar11 & _UNK_0010b338) + sStack_1d0;
    sStack_1ce = (uVar12 & _UNK_0010b33a) + sStack_1ce;
    sStack_1cc = (uVar13 & _UNK_0010b33c) + sStack_1cc;
    sStack_1ca = (uVar14 & _UNK_0010b33e) + sStack_1ca;
  } while (param_4 + 0x300 != pVVar40);
  uVar49 = *(undefined8 *)(param_5 + 0x83c0);
  uVar15 = *(undefined8 *)(param_5 + 0x83c8);
  local_330 = 0;
  local_108 = ZEXT216(0);
  local_3c8 = (short)uVar49;
  sStack_3c6 = (short)((ulong)uVar49 >> 0x10);
  sStack_3c4 = (short)((ulong)uVar49 >> 0x20);
  sStack_3c2 = (short)((ulong)uVar49 >> 0x30);
  sStack_3c0 = (short)uVar15;
  sStack_3be = (short)((ulong)uVar15 >> 0x10);
  sStack_3bc = (short)((ulong)uVar15 >> 0x20);
  sStack_3ba = (short)((ulong)uVar15 >> 0x30);
  sVar91 = *(short *)(param_5 + 0x83d6);
  sStack_3b0 = *(short *)(param_5 + 0x83d8);
  sStack_3ae = *(short *)(param_5 + 0x83da);
  sStack_3ac = *(short *)(param_5 + 0x83dc);
  sStack_3aa = *(short *)(param_5 + 0x83de);
  local_f8 = ZEXT216(0);
  local_3b8 = (undefined1  [8])((long)CONCAT82(local_3b8,sVar91) << 0x30);
  local_e8 = ZEXT216(0);
  local_288 = (undefined1  [16])0x0;
  local_278 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_268 = (undefined1  [16])0x0;
  local_1e8 = __LC114 - local_1d8;
  sStack_1e6 = _UNK_0010b412 - sStack_1d6;
  sStack_1e4 = _UNK_0010b414 - sStack_1d4;
  sStack_1e2 = _UNK_0010b416 - sStack_1d2;
  sStack_1e0 = _UNK_0010b418 - sStack_1d0;
  sStack_1de = _UNK_0010b41a - sStack_1ce;
  sStack_1dc = _UNK_0010b41c - sStack_1cc;
  sStack_1da = _UNK_0010b41e - sStack_1ca;
  uVar44 = local_3c8 + *(short *)(param_5 + 0x83d0);
  sVar55 = sStack_3c6 + *(short *)(param_5 + 0x83d2);
  uVar47 = CONCAT22(sVar55,uVar44);
  sVar57 = sStack_3c4 + *(short *)(param_5 + 0x83d4);
  uVar49 = CONCAT26(sStack_3c2 + sVar91,CONCAT24(sVar57,uVar47));
  auVar50._0_10_ = CONCAT28(sStack_3c0 + sStack_3b0,uVar49);
  auVar50._10_2_ = sStack_3be + sStack_3ae;
  auVar50._12_2_ = sStack_3bc + sStack_3ac;
  auVar50._14_2_ = sStack_3ba + sStack_3aa;
  sVar92 = *(short *)(param_5 + 0x83d0) + -1;
  sVar94 = *(short *)(param_5 + 0x83d2) + -1;
  sVar95 = *(short *)(param_5 + 0x83d4) + -1;
  sVar96 = sVar91 + -1;
  sVar97 = sStack_3b0 + -1;
  sVar98 = sStack_3ae + -1;
  sVar99 = sStack_3ac + -1;
  sVar100 = sStack_3aa + -1;
  auVar76._0_4_ = CONCAT22(0,sStack_3c0 + sStack_3b0);
  auVar76._4_2_ = auVar50._10_2_;
  auVar76._6_2_ = 0;
  auVar76._8_2_ = auVar50._12_2_;
  auVar76._10_2_ = 0;
  auVar76._12_2_ = auVar50._14_2_;
  auVar76._14_2_ = 0;
  auVar3._10_2_ = 0;
  auVar3._0_10_ = auVar50._0_10_;
  auVar3._12_2_ = sStack_3c2 + sVar91;
  auVar5._8_2_ = sVar57;
  auVar5._0_8_ = uVar49;
  auVar5._10_4_ = auVar3._10_4_;
  auVar20._6_8_ = 0;
  auVar20._0_6_ = auVar5._8_6_;
  auVar7._4_2_ = sVar55;
  auVar7._0_4_ = uVar47;
  auVar7._6_8_ = SUB148(auVar20 << 0x40,6);
  uVar48 = CONCAT22(0,uVar44);
  auVar51._4_10_ = auVar7._4_10_;
  auVar51._0_4_ = uVar48;
  auVar51._14_2_ = 0;
  auVar74._0_4_ = -(uint)(uVar48 < auVar76._0_4_);
  auVar74._4_4_ = -(uint)(auVar7._4_4_ < (uint)auVar50._10_2_);
  auVar74._8_4_ = -(uint)(auVar5._8_4_ < (int)(uint)auVar50._12_2_);
  auVar74._12_4_ = -(uint)(auVar3._10_4_ >> 0x10 < (uint)auVar50._14_2_);
  auVar74 = ~auVar74 & auVar51 | auVar76 & auVar74;
  auVar75._0_4_ = -(uint)(auVar74._0_4_ < auVar74._8_4_);
  auVar75._4_4_ = -(uint)(auVar74._4_4_ < auVar74._12_4_);
  auVar75._8_4_ = -(uint)(auVar74._8_4_ < 0);
  auVar75._12_4_ = -(uint)(auVar74._12_4_ < 0);
  auVar74 = ~auVar75 & auVar74 | auVar74 >> 0x40 & auVar75;
  uVar48 = auVar74._0_4_;
  uVar72 = auVar74._4_4_;
  uVar71 = -(uint)((int)uVar48 < (int)uVar72);
  uVar48 = ~uVar71 & uVar48 | uVar72 & uVar71;
  auVar74 = (undefined1  [16])0x0;
  uVar72 = 0;
  if (-1 < (int)uVar48) {
    uVar72 = uVar48;
  }
  sVar91 = 3;
  do {
    uVar71 = 0;
    local_3b8 = (undefined1  [8])local_108;
    psVar27 = &local_1e8;
    local_390 = param_5 + 0x83c0;
    while( true ) {
      lVar34 = 0;
      do {
        uVar86 = (uint)(ushort)psVar27[lVar34];
        iVar39 = 0;
        iVar42 = -uVar86;
        local_148[0] = (float)(uint)*(ushort *)((long)local_3b8 + lVar34 * 2);
        local_148[1] = (float)(uint)*(ushort *)((long)local_3b8 + 0x10 + lVar34 * 2);
        local_148[2] = (float)(uint)*(ushort *)((long)local_3b8 + 0x20 + lVar34 * 2);
        do {
          lVar36 = 0;
          if (uVar86 == 0) {
            do {
              *(undefined2 *)((long)&local_168 + lVar36 * 2) = 0;
              lVar36 = lVar36 + 1;
            } while (lVar36 != 3);
          }
          else {
            do {
              *(undefined2 *)((long)&local_168 + lVar36 * 2) = 0;
              lVar36 = lVar36 + 1;
            } while (lVar36 != 3);
          }
          uVar44 = (short)local_168 << 10 | local_168._2_2_ << 5 | local_164;
          if ((iVar39 == 0) || (*(ushort *)((long)&local_a8 + (long)(iVar39 + -1) * 2) != uVar44)) {
            lVar36 = (long)iVar39;
            iVar39 = iVar39 + 1;
            *(ushort *)((long)&local_a8 + lVar36 * 2) = uVar44;
          }
          iVar42 = iVar42 + 1;
        } while (iVar42 <= (int)uVar86);
        *(short *)(local_390 + lVar34 * 2) = (short)iVar39;
        uVar86 = uVar71;
        if (uVar71 == 1) {
          uVar86 = (uint)*(ushort *)(param_5 + lVar34 * 2 + 0x83c0);
        }
        if (0 < iVar39) {
          puVar29 = &local_a8;
          pHVar32 = param_5 + (lVar34 + (long)(int)(uVar86 + 0x7fe) * 8) * 2;
          do {
            uVar45 = *(undefined2 *)puVar29;
            puVar29 = (undefined4 *)((long)puVar29 + 2);
            *(undefined2 *)pHVar32 = uVar45;
            pHVar32 = pHVar32 + 0x10;
          } while ((undefined4 *)((long)&local_a8 + (long)iVar39 * 2) != puVar29);
        }
        lVar34 = lVar34 + 1;
      } while (lVar34 != 8);
      local_390 = local_390 + 0x10;
      psVar27 = psVar27 + 8;
      local_3b8 = (undefined1  [8])((long)local_3b8 + 0x30);
      if (uVar71 != 0) break;
      uVar71 = 1;
    }
    lVar34 = 0;
    local_258 = auVar50;
    do {
      uVar44 = local_248[lVar34 + -8];
      uVar45 = *(undefined2 *)(param_5 + lVar34 * 2 + 0x7fe0);
      if ((int)(uint)uVar44 < (int)uVar72) {
        pHVar32 = param_5 + (lVar34 + (ulong)uVar44 * 8) * 2;
        pHVar30 = param_5 + (lVar34 + ((ulong)uVar44 + (ulong)(uVar72 - uVar44)) * 8) * 2;
        if (((int)pHVar30 - (int)pHVar32 & 0x10U) != 0) {
          *(undefined2 *)(pHVar32 + 0x7fe0) = uVar45;
          pHVar32 = pHVar32 + 0x10;
          if (pHVar32 == pHVar30) goto LAB_001051e7;
        }
        do {
          *(undefined2 *)(pHVar32 + 0x7fe0) = uVar45;
          pHVar33 = pHVar32 + 0x20;
          *(undefined2 *)(pHVar32 + 0x7ff0) = uVar45;
          pHVar32 = pHVar33;
        } while (pHVar33 != pHVar30);
      }
LAB_001051e7:
      lVar34 = lVar34 + 1;
    } while (lVar34 != 8);
    if (0 < (int)uVar48) {
      pHVar32 = param_5 + 0x7fe0;
      pHVar30 = param_5;
      do {
        uVar44 = *(ushort *)pHVar32;
        uVar8 = *(ushort *)(pHVar32 + 2);
        uVar9 = *(ushort *)(pHVar32 + 4);
        uVar10 = *(ushort *)(pHVar32 + 6);
        uVar11 = *(ushort *)(pHVar32 + 8);
        uVar12 = *(ushort *)(pHVar32 + 10);
        uVar13 = *(ushort *)(pHVar32 + 0xc);
        uVar14 = *(ushort *)(pHVar32 + 0xe);
        pVVar37 = (VInt16 *)&local_a8;
        uVar86 = 10;
        do {
          uVar26 = uVar86 - 5;
          uVar73 = (ulong)uVar86;
          auVar85._0_2_ = uVar44 >> uVar73;
          auVar85._2_2_ = uVar8 >> uVar73;
          auVar85._4_2_ = uVar9 >> uVar73;
          auVar85._6_2_ = uVar10 >> uVar73;
          auVar85._8_2_ = uVar11 >> uVar73;
          auVar85._10_2_ = uVar12 >> uVar73;
          auVar85._12_2_ = uVar13 >> uVar73;
          auVar85._14_2_ = uVar14 >> uVar73;
          auVar75 = psllw(auVar85 & __LC73,4);
          auVar75 = auVar85 & __LC73 | auVar75;
          sVar70 = sVar91 + auVar75._0_2_;
          sVar77 = sVar91 + auVar75._2_2_;
          sVar78 = sVar91 + auVar75._4_2_;
          sVar79 = sVar91 + auVar75._6_2_;
          sVar80 = sVar91 + auVar75._8_2_;
          sVar81 = sVar91 + auVar75._10_2_;
          sVar82 = sVar91 + auVar75._12_2_;
          sVar83 = sVar91 + auVar75._14_2_;
          sVar55 = auVar75._0_2_ - sVar91;
          sVar57 = auVar75._2_2_ - sVar91;
          sVar58 = auVar75._4_2_ - sVar91;
          sVar60 = auVar75._6_2_ - sVar91;
          sVar62 = auVar75._8_2_ - sVar91;
          sVar64 = auVar75._10_2_ - sVar91;
          sVar66 = auVar75._12_2_ - sVar91;
          sVar68 = auVar75._14_2_ - sVar91;
          *(ushort *)(pVVar37 + 0x30) = (ushort)(-1 < sVar55) * sVar55;
          *(ushort *)(pVVar37 + 0x32) = (ushort)(-1 < sVar57) * sVar57;
          *(ushort *)(pVVar37 + 0x34) = (ushort)(-1 < sVar58) * sVar58;
          *(ushort *)(pVVar37 + 0x36) = (ushort)(-1 < sVar60) * sVar60;
          *(ushort *)(pVVar37 + 0x38) = (ushort)(-1 < sVar62) * sVar62;
          *(ushort *)(pVVar37 + 0x3a) = (ushort)(-1 < sVar64) * sVar64;
          *(ushort *)(pVVar37 + 0x3c) = (ushort)(-1 < sVar66) * sVar66;
          *(ushort *)(pVVar37 + 0x3e) = (ushort)(-1 < sVar68) * sVar68;
          *(ushort *)pVVar37 =
               (ushort)(__LC27 < sVar70) * __LC27 | (ushort)(__LC27 >= sVar70) * sVar70;
          *(ushort *)(pVVar37 + 2) =
               (ushort)(_UNK_0010b352 < sVar77) * _UNK_0010b352 |
               (ushort)(_UNK_0010b352 >= sVar77) * sVar77;
          *(ushort *)(pVVar37 + 4) =
               (ushort)(_UNK_0010b354 < sVar78) * _UNK_0010b354 |
               (ushort)(_UNK_0010b354 >= sVar78) * sVar78;
          *(ushort *)(pVVar37 + 6) =
               (ushort)(_UNK_0010b356 < sVar79) * _UNK_0010b356 |
               (ushort)(_UNK_0010b356 >= sVar79) * sVar79;
          *(ushort *)(pVVar37 + 8) =
               (ushort)(_UNK_0010b358 < sVar80) * _UNK_0010b358 |
               (ushort)(_UNK_0010b358 >= sVar80) * sVar80;
          *(ushort *)(pVVar37 + 10) =
               (ushort)(_UNK_0010b35a < sVar81) * _UNK_0010b35a |
               (ushort)(_UNK_0010b35a >= sVar81) * sVar81;
          *(ushort *)(pVVar37 + 0xc) =
               (ushort)(_UNK_0010b35c < sVar82) * _UNK_0010b35c |
               (ushort)(_UNK_0010b35c >= sVar82) * sVar82;
          *(ushort *)(pVVar37 + 0xe) =
               (ushort)(_UNK_0010b35e < sVar83) * _UNK_0010b35e |
               (ushort)(_UNK_0010b35e >= sVar83) * sVar83;
          pVVar37 = pVVar37 + 0x10;
          uVar86 = uVar26;
        } while (uVar26 != 0xfffffffb);
        auVar75 = (undefined1  [16])0x0;
        pFVar35 = param_6;
        pHVar33 = pHVar30;
        pVVar40 = param_4;
        iVar39 = 0;
        do {
          lVar34 = 0;
          iVar42 = 0;
          pVVar37 = (VInt16 *)&local_a8;
          if ((int)uVar43 == 0) {
            while ((uVar2 & 0x200) != 0) {
              lVar34 = lVar34 + 1;
              ComputeErrorUniform((ETCComputer *)(local_148 + (long)iVar42 * 8),pVVar37,
                                  (VInt16 *)pVVar40);
              if (lVar34 == 2) goto LAB_00105414;
              iVar42 = (int)lVar34;
              pVVar37 = (VInt16 *)&local_a8 + lVar34 * 0x30;
            }
            while( true ) {
              lVar34 = lVar34 + 1;
              ComputeErrorWeighted(local_148 + (long)iVar42 * 8,pVVar37,pFVar35);
              if (lVar34 == 2) break;
              iVar42 = (int)lVar34;
              pVVar37 = (VInt16 *)&local_a8 + lVar34 * 0x30;
            }
          }
          else {
            bVar21 = false;
            uVar86 = 0;
            while (ComputeErrorFakeBT709
                             ((ETCComputer *)(local_148 + (long)(int)uVar86 * 8),pVVar37,pFVar35),
                  !bVar21) {
              pVVar37 = local_78;
              uVar86 = uVar71;
              bVar21 = true;
            }
            uVar43 = uVar43 & 0xffffffff;
            _local_3b8 = auVar75;
          }
LAB_00105414:
          iVar42 = iVar39 + 1;
          pFVar35 = pFVar35 + 0x60;
          pVVar40 = (VInt16<2> *)((VInt16 *)pVVar40 + 0x30);
          auVar108._4_4_ = -(uint)(fStack_124 < local_148[1]);
          auVar108._0_4_ = -(uint)(local_128 < local_148[0]);
          auVar108._8_4_ = -(uint)(fStack_120 < local_148[2]);
          auVar108._12_4_ = -(uint)(fStack_11c < local_148[3]);
          auVar84._4_4_ = -(uint)(fStack_114 < local_148[5]);
          auVar84._0_4_ = -(uint)(local_118 < local_148[4]);
          auVar84._8_4_ = -(uint)(fStack_110 < local_148[6]);
          auVar84._12_4_ = -(uint)(fStack_10c < local_148[7]);
          auVar93._4_4_ = local_148[5];
          auVar93._0_4_ = local_148[4];
          auVar93._8_4_ = local_148[6];
          auVar93._12_4_ = local_148[7];
          auVar104._4_4_ = fStack_114;
          auVar104._0_4_ = local_118;
          auVar104._8_4_ = fStack_110;
          auVar104._12_4_ = fStack_10c;
          auVar51 = minps(auVar93,auVar104);
          auVar76 = packssdw(auVar108,auVar84);
          auVar106._4_4_ = local_148[1];
          auVar106._0_4_ = local_148[0];
          auVar106._8_4_ = local_148[2];
          auVar106._12_4_ = local_148[3];
          auVar103._4_4_ = fStack_124;
          auVar103._0_4_ = local_128;
          auVar103._8_4_ = fStack_120;
          auVar103._12_4_ = fStack_11c;
          auVar85 = minps(auVar106,auVar103);
          *(undefined1 (*) [16])(pHVar33 + 0x10) = auVar51;
          uVar45 = (undefined2)(1 << ((byte)iVar39 & 0x1f));
          auVar90._0_4_ = CONCAT22(uVar45,uVar45);
          *(undefined1 (*) [16])pHVar33 = auVar85;
          auVar90._4_4_ = auVar90._0_4_;
          auVar90._8_4_ = auVar90._0_4_;
          auVar90._12_4_ = auVar90._0_4_;
          auVar75 = auVar75 | auVar90 & auVar76;
          pHVar33 = pHVar33 + 0x20;
          iVar39 = iVar42;
        } while (iVar42 != 0x10);
        uVar43 = uVar43 & 0xffffffff;
        pHVar30 = pHVar30 + 0x200;
        *(undefined1 (*) [16])(pHVar32 + -0x3e0) = auVar75;
        pHVar32 = pHVar32 + 0x10;
      } while (pHVar30 != param_5 + (long)(int)uVar72 * 0x200);
    }
    uVar14 = _UNK_0010b33e;
    uVar13 = _UNK_0010b33c;
    uVar12 = _UNK_0010b33a;
    uVar11 = _UNK_0010b338;
    uVar10 = _UNK_0010b336;
    uVar9 = _UNK_0010b334;
    uVar8 = _UNK_0010b332;
    uVar44 = __LC30;
    auVar75 = *(undefined1 (*) [16])(param_5 + 0x83c0);
    sVar91 = *(short *)(param_5 + 0x83d6) * auVar75._6_2_;
    auVar51 = pmulhuw(*(undefined1 (*) [16])(param_5 + 0x83d0),auVar75);
    iVar42 = CONCAT22(auVar51._8_2_,*(short *)(param_5 + 0x83d8) * auVar75._8_2_);
    auVar101._0_8_ =
         CONCAT26(auVar51._10_2_,CONCAT24(*(short *)(param_5 + 0x83da) * auVar75._10_2_,iVar42));
    auVar101._8_2_ = *(short *)(param_5 + 0x83dc) * auVar75._12_2_;
    auVar101._10_2_ = auVar51._12_2_;
    auVar102._12_2_ = *(short *)(param_5 + 0x83de) * auVar75._14_2_;
    auVar102._0_12_ = auVar101;
    auVar102._14_2_ = auVar51._14_2_;
    iVar39 = CONCAT22(auVar51._6_2_,sVar91);
    Var25 = CONCAT64(CONCAT42(iVar39,auVar51._4_2_),
                     CONCAT22(*(short *)(param_5 + 0x83d4) * auVar75._4_2_,sVar91));
    auVar22._4_8_ = (long)((unkuint10)Var25 >> 0x10);
    auVar22._2_2_ = auVar51._2_2_;
    auVar22._0_2_ = *(short *)(param_5 + 0x83d2) * auVar75._2_2_;
    auVar87._0_4_ = CONCAT22(auVar51._0_2_,*(short *)(param_5 + 0x83d0) * auVar75._0_2_);
    auVar87._4_12_ = auVar22;
    auVar52._0_4_ = -(uint)(auVar87._0_4_ < iVar42);
    auVar52._4_4_ = -(uint)(auVar22._0_4_ < (int)((ulong)auVar101._0_8_ >> 0x20));
    auVar52._8_4_ = -(uint)((int)((unkuint10)Var25 >> 0x10) < auVar101._8_4_);
    auVar52._12_4_ = -(uint)(iVar39 < auVar102._12_4_);
    auVar51 = ~auVar52 & auVar87 | auVar102 & auVar52;
    auVar53._0_4_ = -(uint)(auVar51._0_4_ < auVar51._8_4_);
    auVar53._4_4_ = -(uint)(auVar51._4_4_ < auVar51._12_4_);
    auVar53._8_4_ = -(uint)(auVar51._8_4_ < 0);
    auVar53._12_4_ = -(uint)(auVar51._12_4_ < 0);
    auVar51 = ~auVar53 & auVar51 | auVar51 >> 0x40 & auVar53;
    uVar71 = auVar51._0_4_;
    uVar26 = auVar51._4_4_;
    uVar86 = -(uint)((int)uVar71 < (int)uVar26);
    uVar86 = ~uVar86 & uVar71 | uVar26 & uVar86;
    auVar4._10_2_ = 0;
    auVar4._0_10_ = auVar75._0_10_;
    auVar4._12_2_ = auVar75._6_2_;
    auVar6._8_2_ = auVar75._4_2_;
    auVar6._0_8_ = auVar75._0_8_;
    auVar6._10_4_ = auVar4._10_4_;
    auVar23._6_8_ = 0;
    auVar23._0_6_ = auVar6._8_6_;
    local_1a8._6_8_ = SUB148(auVar23 << 0x40,6);
    local_1a8._4_2_ = auVar75._2_2_;
    local_1a8._2_2_ = 0;
    local_1a8._0_2_ = auVar75._0_2_;
    local_1a8._14_2_ = 0;
    local_198._2_2_ = 0;
    local_198._0_2_ = auVar75._8_2_;
    local_198._4_2_ = auVar75._10_2_;
    local_198._6_2_ = 0;
    local_198._8_2_ = auVar75._12_2_;
    local_198._10_2_ = 0;
    local_198._12_2_ = auVar75._14_2_;
    local_198._14_2_ = 0;
    uVar71 = 0;
    if (-1 < (int)uVar86) {
      uVar71 = uVar86;
    }
    if (0 < (int)uVar86) {
      bVar21 = false;
      local_318._4_4_ = CONCAT22((short)local_330,(short)local_330);
      local_378 = local_288;
      local_248[0] = 0;
      local_248[1] = 0;
      local_248[2] = 0;
      local_248[3] = 0;
      local_248[4] = 0;
      local_248[5] = 0;
      local_248[6] = 0;
      local_248[7] = 0;
      auVar24._12_4_ = 0;
      auVar24._0_12_ = stack0xfffffffffffffc4c;
      _local_3b8 = auVar24 << 0x20;
      local_388 = local_278;
      local_238[0] = 0;
      local_238[1] = 0;
      local_238[2] = 0;
      local_238[3] = 0;
      local_238[4] = 0;
      local_238[5] = 0;
      local_238[6] = 0;
      local_238[7] = 0;
      local_318._0_4_ = local_318._4_4_;
      local_318._8_4_ = local_318._4_4_;
      local_318._12_4_ = local_318._4_4_;
      auVar75 = local_1c8;
      auVar51 = local_268;
      auVar76 = auVar74;
      auVar85 = local_1b8;
      do {
        lVar34 = 0;
        uVar46 = -(ushort)((short)(local_3c8 + -1) < (short)(local_248[0] + uVar44));
        uVar56 = -(ushort)((short)(sStack_3c6 + -1) < (short)(local_248[1] + uVar8));
        uVar59 = -(ushort)((short)(sStack_3c4 + -1) < (short)(local_248[2] + uVar9));
        uVar61 = -(ushort)((short)(sStack_3c2 + -1) < (short)(local_248[3] + uVar10));
        uVar63 = -(ushort)((short)(sStack_3c0 + -1) < (short)(local_248[4] + uVar11));
        uVar65 = -(ushort)((short)(sStack_3be + -1) < (short)(local_248[5] + uVar12));
        uVar67 = -(ushort)((short)(sStack_3bc + -1) < (short)(local_248[6] + uVar13));
        uVar69 = -(ushort)((short)(sStack_3ba + -1) < (short)(local_248[7] + uVar14));
        local_248[0] = ~uVar46 & local_248[0] + uVar44;
        local_248[1] = ~uVar56 & local_248[1] + uVar8;
        local_248[2] = ~uVar59 & local_248[2] + uVar9;
        local_248[3] = ~uVar61 & local_248[3] + uVar10;
        local_248[4] = ~uVar63 & local_248[4] + uVar11;
        local_248[5] = ~uVar65 & local_248[5] + uVar12;
        local_248[6] = ~uVar67 & local_248[6] + uVar13;
        local_248[7] = ~uVar69 & local_248[7] + uVar14;
        sVar91 = (uVar46 & __LC30) + local_238[0];
        sVar55 = (uVar56 & _UNK_0010b332) + local_238[1];
        sVar57 = (uVar59 & _UNK_0010b334) + local_238[2];
        sVar58 = (uVar61 & _UNK_0010b336) + local_238[3];
        sVar60 = (uVar63 & _UNK_0010b338) + local_238[4];
        sVar62 = (uVar65 & _UNK_0010b33a) + local_238[5];
        sVar64 = (uVar67 & _UNK_0010b33c) + local_238[6];
        sVar66 = (uVar69 & _UNK_0010b33e) + local_238[7];
        local_238[0] = (ushort)(sVar92 < sVar91) * sVar92 | (ushort)(sVar92 >= sVar91) * sVar91;
        local_238[1] = (ushort)(sVar94 < sVar55) * sVar94 | (ushort)(sVar94 >= sVar55) * sVar55;
        local_238[2] = (ushort)(sVar95 < sVar57) * sVar95 | (ushort)(sVar95 >= sVar57) * sVar57;
        local_238[3] = (ushort)(sVar96 < sVar58) * sVar96 | (ushort)(sVar96 >= sVar58) * sVar58;
        local_238[4] = (ushort)(sVar97 < sVar60) * sVar97 | (ushort)(sVar97 >= sVar60) * sVar60;
        local_238[5] = (ushort)(sVar98 < sVar62) * sVar98 | (ushort)(sVar98 >= sVar62) * sVar62;
        local_238[6] = (ushort)(sVar99 < sVar64) * sVar99 | (ushort)(sVar99 >= sVar64) * sVar64;
        local_238[7] = (ushort)(sVar100 < sVar66) * sVar100 | (ushort)(sVar100 >= sVar66) * sVar66;
        do {
          uVar46 = *(ushort *)((long)local_248 + lVar34);
          iVar39 = (uint)*(ushort *)((long)local_238 + lVar34) + *(int *)(local_1a8 + lVar34 * 2);
          *(uint *)((long)local_188 + lVar34 * 2) = (uint)uVar46;
          *(int *)((long)&local_168 + lVar34 * 2) = iVar39;
          uVar45 = *(undefined2 *)(param_5 + lVar34 + ((long)iVar39 + 0x7fe) * 0x10);
          *(undefined2 *)(local_228 + lVar34) =
               *(undefined2 *)(param_5 + lVar34 + (long)(int)(uVar46 + 0x7fe) * 0x10);
          *(undefined2 *)(local_218 + lVar34) = uVar45;
          lVar34 = lVar34 + 2;
        } while (lVar34 != 0x10);
        auVar93 = (undefined1  [16])0x0;
        auVar88._0_12_ = ZEXT812(0);
        auVar88._12_4_ = 0;
        auVar103 = (undefined1  [16])0x0;
        lVar34 = 0;
        auVar106 = (undefined1  [16])0x0;
        do {
          lVar36 = 0;
          do {
            lVar41 = (long)((int)(uint)lVar36 >> 2);
            lVar38 = (ulong)((uint)lVar36 & 3) * 4;
            local_148[lVar36] =
                 *(float *)(param_5 +
                           lVar38 + (lVar41 + ((long)(int)local_188[lVar36] * 0x10 + lVar34) * 2) *
                                    0x10);
            uVar45 = *(undefined2 *)
                      (param_5 + lVar36 * 2 + 0x7c00 + (long)(int)local_188[lVar36] * 0x10);
            uVar1 = *(undefined2 *)
                     (param_5 + lVar36 * 2 + 0x7c00 + (long)(int)(&local_168)[lVar36] * 0x10);
            (&local_a8)[lVar36] =
                 *(undefined4 *)
                  (param_5 +
                  lVar38 + (lVar41 + ((long)(int)(&local_168)[lVar36] * 0x10 + lVar34) * 2) * 0x10);
            *(undefined2 *)(local_208 + lVar36 * 2) = uVar45;
            *(undefined2 *)(local_1f8 + lVar36 * 2) = uVar1;
            lVar36 = lVar36 + 1;
          } while (lVar36 != 8);
          auVar16._4_4_ = local_148[1];
          auVar16._0_4_ = local_148[0];
          auVar16._8_4_ = local_148[2];
          auVar16._12_4_ = local_148[3];
          lVar36 = lVar34 + 1;
          auVar18._4_4_ = uStack_a4;
          auVar18._0_4_ = local_a8;
          auVar18._8_4_ = uStack_a0;
          auVar18._12_4_ = uStack_9c;
          auVar108 = minps(auVar16,auVar18);
          auVar17._4_4_ = local_148[5];
          auVar17._0_4_ = local_148[4];
          auVar17._8_4_ = local_148[6];
          auVar17._12_4_ = local_148[7];
          auVar19._4_4_ = fStack_94;
          auVar19._0_4_ = local_98;
          auVar19._8_4_ = fStack_90;
          auVar19._12_4_ = fStack_8c;
          auVar104 = minps(auVar17,auVar19);
          auVar89._0_4_ = auVar88._0_4_ + auVar108._0_4_;
          auVar89._4_4_ = auVar88._4_4_ + auVar108._4_4_;
          auVar89._8_4_ = auVar88._8_4_ + auVar108._8_4_;
          auVar89._12_4_ = auVar88._12_4_ + auVar108._12_4_;
          auVar54._0_4_ = auVar106._0_4_ + auVar104._0_4_;
          auVar54._4_4_ = auVar106._4_4_ + auVar104._4_4_;
          auVar54._8_4_ = auVar106._8_4_ + auVar104._8_4_;
          auVar54._12_4_ = auVar106._12_4_ + auVar104._12_4_;
          auVar109._4_4_ = -(uint)(fStack_94 < local_148[5]);
          auVar109._0_4_ = -(uint)(local_98 < local_148[4]);
          auVar109._8_4_ = -(uint)(fStack_90 < local_148[6]);
          auVar109._12_4_ = -(uint)(fStack_8c < local_148[7]);
          auVar105._4_4_ = -(uint)(uStack_a4 < local_148[1]);
          auVar105._0_4_ = -(uint)(local_a8 < local_148[0]);
          auVar105._8_4_ = -(uint)(uStack_a0 < local_148[2]);
          auVar105._12_4_ = -(uint)(uStack_9c < local_148[3]);
          auVar106 = packssdw(auVar105,auVar109);
          uVar45 = (undefined2)(1 << ((byte)lVar34 & 0x1f));
          auVar110._0_4_ = CONCAT22(uVar45,uVar45);
          auVar110._4_4_ = auVar110._0_4_;
          auVar110._8_4_ = auVar110._0_4_;
          auVar110._12_4_ = auVar110._0_4_;
          auVar103 = auVar103 | auVar110 & auVar106;
          auVar93 = auVar93 | (auVar106 & local_1f8 | ~auVar106 & local_208) & auVar110;
          lVar34 = lVar36;
          auVar106 = auVar54;
          auVar88 = auVar89;
        } while (lVar36 != 0x10);
        auVar106 = *(undefined1 (*) [16])param_2;
        auVar104 = *(undefined1 (*) [16])(param_2 + 0x10);
        auVar107._4_4_ = -(uint)(auVar89._4_4_ < auVar106._4_4_);
        auVar107._0_4_ = -(uint)(auVar89._0_4_ < auVar106._0_4_);
        auVar107._8_4_ = -(uint)(auVar89._8_4_ < auVar106._8_4_);
        auVar107._12_4_ = -(uint)(auVar89._12_4_ < auVar106._12_4_);
        auVar111._4_4_ = -(uint)(auVar54._4_4_ < auVar104._4_4_);
        auVar111._0_4_ = -(uint)(auVar54._0_4_ < auVar104._0_4_);
        auVar111._8_4_ = -(uint)(auVar54._8_4_ < auVar104._8_4_);
        auVar111._12_4_ = -(uint)(auVar54._12_4_ < auVar104._12_4_);
        auVar108 = packssdw(auVar107,auVar111);
        if ((((((((((((((((auVar108 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar108 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar108 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar108 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar108 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar108 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar108 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar108 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar108 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar108 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar108 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar108 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar108 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar108 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar108 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            auVar108[0xf] < '\0') {
          auVar90 = minps(auVar89,auVar106);
          auVar106 = minps(auVar54,auVar104);
          bVar21 = true;
          auVar76 = auVar76 | auVar108;
          *(undefined1 (*) [16])param_2 = auVar90;
          auVar51 = local_318 & auVar108 | ~auVar108 & auVar51;
          *(undefined1 (*) [16])(param_2 + 0x10) = auVar106;
          auVar75 = local_228 & auVar108 | ~auVar108 & auVar75;
          auVar85 = local_218 & auVar108 | ~auVar108 & auVar85;
          local_378 = auVar103 & auVar108 | ~auVar108 & local_378;
          local_388 = auVar93 & auVar108 | ~auVar108 & local_388;
        }
        uVar86 = local_3b8._0_4_ + 1;
        local_3b8._0_4_ = uVar86;
      } while (uVar86 != uVar71);
      if (bVar21) {
        local_1c8 = auVar75;
        local_1b8 = auVar85;
        local_278 = local_388;
        local_268 = auVar51;
        local_288 = local_378;
        local_298 = auVar76;
        auVar74 = auVar76;
      }
    }
    local_330 = local_330 + 1;
    if (local_330 == 8) {
      if ((((((((((((((((auVar74 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar74 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar74 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar74 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar74 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar74 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar74 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar74 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar74 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar74 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar74 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar74 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar74 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar74 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar74 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || auVar74[0xf] < '\0'
         ) {
        lVar34 = 0;
        do {
          if (*(short *)(local_298 + lVar34) != 0) {
            local_a8 = (float)CONCAT22(*(undefined2 *)(local_1b8 + lVar34),
                                       *(undefined2 *)(local_1c8 + lVar34));
            EmitHModeBlock(param_1,(ushort *)&local_a8,*(ushort *)(local_288 + lVar34),
                           *(ushort *)(local_278 + lVar34),*(ushort *)(local_268 + lVar34),true);
          }
          lVar34 = lVar34 + 2;
          param_1 = param_1 + 8;
        } while (lVar34 != 0x10);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    sVar91 = (&Tables::ETC1::g_thModifierTable)[local_330];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::EncodeVirtualTModePunchthrough(unsigned char*,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::Int16CompFlag const*,
   cvtt::ParallelMath::VInt16<2> const (*) [3], cvtt::ParallelMath::Float const (*) [3],
   cvtt::ParallelMath::Int16CompFlag const*, cvtt::ParallelMath::Int16CompFlag const&,
   cvtt::ParallelMath::Int16CompFlag const&, cvtt::Options const&) */

void cvtt::Internal::ETCComputer::EncodeVirtualTModePunchthrough
               (uchar *param_1,Float *param_2,Int16CompFlag *param_3,VInt16<2> *param_4,
               Float *param_5,Int16CompFlag *param_6,Int16CompFlag *param_7,Int16CompFlag *param_8,
               Options *param_9)

{
  Int16CompFlag *pIVar1;
  VInt16<2> *pVVar2;
  ushort *puVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  byte bVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ulong uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  int iVar47;
  long lVar48;
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  undefined1 (*pauVar51) [16];
  ushort *puVar52;
  ushort *puVar53;
  Int16CompFlag *pIVar54;
  VInt16<2> *pVVar55;
  VInt16 *pVVar56;
  uint uVar57;
  ETCComputer *pEVar58;
  ETCComputer *pEVar59;
  long lVar60;
  VInt16 *pVVar61;
  ulong uVar62;
  short *psVar63;
  undefined1 (*pauVar64) [16];
  undefined8 *puVar65;
  VInt16 *this;
  VInt16 *pVVar66;
  long lVar67;
  uint uVar68;
  VInt16 *pVVar69;
  long in_FS_OFFSET;
  ushort uVar70;
  ushort uVar88;
  short sVar89;
  uint uVar74;
  ushort uVar91;
  ushort uVar96;
  short sVar97;
  uint uVar94;
  short sVar99;
  float fVar101;
  short sVar104;
  undefined1 auVar77 [16];
  short sVar71;
  short sVar72;
  short sVar73;
  undefined4 uVar75;
  short sVar90;
  short sVar92;
  short sVar93;
  short sVar98;
  short sVar100;
  short sVar102;
  short sVar103;
  short sVar105;
  short sVar107;
  short sVar108;
  undefined1 auVar78 [16];
  float fVar76;
  float fVar95;
  float fVar106;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  short sVar109;
  uint uVar110;
  short sVar123;
  float fVar124;
  ushort uVar127;
  float fVar129;
  ushort uVar132;
  undefined1 auVar112 [16];
  ushort uVar125;
  ushort uVar130;
  ushort uVar135;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  short sVar122;
  short sVar126;
  short sVar128;
  short sVar131;
  short sVar133;
  short sVar136;
  undefined1 auVar115 [16];
  float fVar111;
  float fVar134;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar137;
  float fVar140;
  float fVar141;
  undefined1 auVar138 [16];
  float fVar142;
  undefined1 auVar139 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  short sVar148;
  short sVar150;
  short sVar151;
  short sVar152;
  short sVar153;
  short sVar154;
  short sVar155;
  short sVar156;
  undefined1 auVar149 [16];
  short sVar157;
  short sVar158;
  short sVar159;
  short sVar160;
  short sVar161;
  short sVar162;
  undefined1 auVar163 [12];
  uint uVar166;
  uint uVar167;
  undefined1 auVar165 [16];
  uint uVar168;
  uint uVar173;
  uint uVar174;
  undefined1 auVar172 [16];
  undefined1 auVar175 [16];
  short sVar176;
  int iVar177;
  undefined1 auVar180 [16];
  undefined1 (*local_1298) [16];
  undefined1 local_1258 [16];
  short local_1248;
  short sStack_1246;
  short sStack_1244;
  short sStack_1242;
  short sStack_1240;
  short sStack_123e;
  short sStack_123c;
  short sStack_123a;
  ulong local_11e8;
  undefined1 (*local_11a0) [16];
  undefined1 local_1158 [16];
  undefined1 local_1148 [16];
  VInt16 local_1138 [16];
  short local_1128;
  short sStack_1126;
  short sStack_1124;
  short sStack_1122;
  short sStack_1120;
  short sStack_111e;
  short sStack_111c;
  short sStack_111a;
  undefined1 local_1118 [16];
  undefined1 local_1108 [16];
  undefined1 local_10f8 [16];
  undefined1 local_10e8 [16];
  undefined1 local_10d8 [16];
  undefined1 local_10c8 [16];
  uint local_10b8 [8];
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined1 local_1078 [16];
  undefined1 local_1068 [16];
  undefined1 local_1058 [16];
  undefined1 local_1048 [16];
  undefined1 local_1038 [16];
  undefined1 local_1028 [16];
  VInt16 local_1018 [16];
  undefined1 local_1008 [16];
  undefined1 local_ff8 [16];
  VInt16 local_fe8 [8];
  undefined8 auStack_fe0 [5];
  VInt16 local_fb8 [16];
  undefined1 local_fa8 [16];
  undefined1 local_f98 [16];
  VInt16 local_f88 [48];
  undefined1 local_f58 [16];
  undefined1 local_f48 [16];
  float local_f38;
  float fStack_f34;
  float fStack_f30;
  float fStack_f2c;
  float local_f28;
  float fStack_f24;
  float fStack_f20;
  float fStack_f1c;
  VInt16 local_f18 [96];
  VInt16 local_eb8 [2];
  undefined2 uStack_eb6;
  VInt16 aVStack_eb4 [2];
  ushort uStack_eb2;
  undefined8 uStack_eb0;
  undefined4 local_db8;
  undefined4 uStack_db4;
  undefined4 uStack_db0;
  undefined4 uStack_dac;
  undefined1 local_cb8 [256];
  undefined1 local_bb8 [384];
  ushort local_a38 [8];
  ushort auStack_a28 [8];
  ushort local_a18 [232];
  ETCComputer local_848 [2];
  undefined2 uStack_846;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  ETCComputer local_648 [4];
  uint auStack_644 [3];
  uint local_638 [124];
  short local_448;
  undefined2 uStack_446;
  short sStack_444;
  undefined2 uStack_442;
  short sStack_440;
  undefined2 uStack_43e;
  short sStack_43c;
  undefined2 uStack_43a;
  uint local_438;
  short asStack_434 [2];
  short asStack_430 [2];
  short asStack_42c [2];
  undefined1 local_428 [16];
  VInt16 local_418 [464];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  uint local_238 [28];
  VInt16 local_1c8 [392];
  long local_40;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar164 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar178 [12];
  undefined1 auVar179 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar57 = *(uint *)param_9 & 0x400;
  uVar68 = *(uint *)param_9 & 0x200;
  pIVar54 = param_6;
  pEVar58 = local_848;
  do {
    uVar21 = *(undefined2 *)pIVar54;
    uVar22 = *(undefined2 *)(pIVar54 + 2);
    uVar23 = *(undefined2 *)(pIVar54 + 4);
    uVar24 = *(undefined2 *)(pIVar54 + 6);
    uVar25 = *(undefined2 *)(pIVar54 + 8);
    uVar26 = *(undefined2 *)(pIVar54 + 10);
    uVar27 = *(undefined2 *)(pIVar54 + 0xc);
    uVar28 = *(undefined2 *)(pIVar54 + 0xe);
    pEVar59 = pEVar58 + 0x20;
    pIVar54 = pIVar54 + 0x10;
    *(undefined2 *)pEVar58 = uVar21;
    *(undefined2 *)(pEVar58 + 2) = uVar21;
    *(undefined2 *)(pEVar58 + 4) = uVar22;
    *(undefined2 *)(pEVar58 + 6) = uVar22;
    *(undefined2 *)(pEVar58 + 8) = uVar23;
    *(undefined2 *)(pEVar58 + 10) = uVar23;
    *(undefined2 *)(pEVar58 + 0xc) = uVar24;
    *(undefined2 *)(pEVar58 + 0xe) = uVar24;
    *(undefined2 *)(pEVar58 + 0x10) = uVar25;
    *(undefined2 *)(pEVar58 + 0x12) = uVar25;
    *(undefined2 *)(pEVar58 + 0x14) = uVar26;
    *(undefined2 *)(pEVar58 + 0x16) = uVar26;
    *(undefined2 *)(pEVar58 + 0x18) = uVar27;
    *(undefined2 *)(pEVar58 + 0x1a) = uVar27;
    *(undefined2 *)(pEVar58 + 0x1c) = uVar28;
    *(undefined2 *)(pEVar58 + 0x1e) = uVar28;
    pEVar58 = pEVar59;
  } while (local_648 != pEVar59);
  lVar60 = 0;
  local_1158 = (undefined1  [16])0x0;
  local_1148 = (undefined1  [16])0x0;
  local_1078 = (undefined1  [16])0x0;
  local_1068 = (undefined1  [16])0x0;
  local_1058 = (undefined1  [16])0x0;
  local_1048 = (undefined1  [16])0x0;
  local_1038 = (undefined1  [16])0x0;
  local_1028 = (undefined1  [16])0x0;
  do {
    uVar62 = *(ulong *)(param_6 + lVar60 + 8);
    uVar43 = *(ulong *)(param_3 + lVar60 + 8);
    *(ulong *)(local_eb8 + lVar60) = ~*(ulong *)(param_6 + lVar60) & *(ulong *)(param_3 + lVar60);
    *(ulong *)((long)&uStack_eb0 + lVar60) = ~uVar62 & uVar43;
    pIVar54 = param_3 + lVar60;
    uVar166 = *(uint *)(pIVar54 + 4);
    uVar167 = *(uint *)(pIVar54 + 8);
    uVar168 = *(uint *)(pIVar54 + 0xc);
    pIVar1 = param_6 + lVar60;
    uVar74 = *(uint *)(pIVar1 + 4);
    uVar94 = *(uint *)(pIVar1 + 8);
    uVar110 = *(uint *)(pIVar1 + 0xc);
    *(uint *)((long)&local_db8 + lVar60) = (*(uint *)pIVar54 | *(uint *)pIVar1) ^ 0xffffffff;
    *(uint *)((long)&uStack_db4 + lVar60) = (uVar166 | uVar74) ^ 0xffffffff;
    *(uint *)((long)&uStack_db0 + lVar60) = (uVar167 | uVar94) ^ 0xffffffff;
    *(uint *)((long)&uStack_dac + lVar60) = (uVar168 | uVar110) ^ 0xffffffff;
    lVar60 = lVar60 + 0x10;
  } while (lVar60 != 0x100);
  sVar148 = 0;
  sVar150 = 0;
  sVar151 = 0;
  sVar152 = 0;
  sVar153 = 0;
  sVar154 = 0;
  sVar155 = 0;
  sVar156 = 0;
  lVar60 = 0;
  pVVar55 = param_4;
  auVar77 = (undefined1  [16])0x0;
  do {
    uVar70 = *(ushort *)(local_eb8 + lVar60);
    uVar88 = *(ushort *)(local_eb8 + lVar60 + 2);
    uVar91 = *(ushort *)(local_eb8 + lVar60 + 4);
    uVar96 = *(ushort *)(local_eb8 + lVar60 + 6);
    uVar125 = *(ushort *)((long)&uStack_eb0 + lVar60);
    uVar127 = *(ushort *)((long)&uStack_eb0 + lVar60 + 2);
    uVar130 = *(ushort *)((long)&uStack_eb0 + lVar60 + 4);
    uVar132 = *(ushort *)((long)&uStack_eb0 + lVar60 + 6);
    uVar135 = *(ushort *)((long)&local_db8 + lVar60);
    uVar36 = *(ushort *)((long)&local_db8 + lVar60 + 2);
    uVar37 = *(ushort *)((long)&uStack_db4 + lVar60);
    uVar38 = *(ushort *)((long)&uStack_db4 + lVar60 + 2);
    uVar39 = *(ushort *)((long)&uStack_db0 + lVar60);
    uVar40 = *(ushort *)((long)&uStack_db0 + lVar60 + 2);
    uVar41 = *(ushort *)((long)&uStack_dac + lVar60);
    uVar42 = *(ushort *)((long)&uStack_dac + lVar60 + 2);
    lVar48 = 0;
    do {
      pVVar2 = pVVar55 + lVar48;
      uVar29 = *(ushort *)(pVVar2 + 2);
      uVar30 = *(ushort *)(pVVar2 + 4);
      uVar31 = *(ushort *)(pVVar2 + 6);
      uVar32 = *(ushort *)(pVVar2 + 8);
      uVar33 = *(ushort *)(pVVar2 + 10);
      uVar34 = *(ushort *)(pVVar2 + 0xc);
      uVar35 = *(ushort *)(pVVar2 + 0xe);
      *(ushort *)(local_1078 + lVar48) =
           (*(ushort *)pVVar2 & uVar70) + *(short *)(local_1078 + lVar48);
      *(ushort *)(local_1078 + lVar48 + 2) = (uVar29 & uVar88) + *(short *)(local_1078 + lVar48 + 2)
      ;
      *(ushort *)(local_1078 + lVar48 + 4) = (uVar30 & uVar91) + *(short *)(local_1078 + lVar48 + 4)
      ;
      *(ushort *)(local_1078 + lVar48 + 6) = (uVar31 & uVar96) + *(short *)(local_1078 + lVar48 + 6)
      ;
      *(ushort *)(local_1078 + lVar48 + 8) =
           (uVar32 & uVar125) + *(short *)(local_1078 + lVar48 + 8);
      *(ushort *)(local_1078 + lVar48 + 10) =
           (uVar33 & uVar127) + *(short *)(local_1078 + lVar48 + 10);
      *(ushort *)(local_1078 + lVar48 + 0xc) =
           (uVar34 & uVar130) + *(short *)(local_1078 + lVar48 + 0xc);
      *(ushort *)(local_1078 + lVar48 + 0xe) =
           (uVar35 & uVar132) + *(short *)(local_1078 + lVar48 + 0xe);
      pVVar2 = pVVar55 + lVar48;
      uVar29 = *(ushort *)(pVVar2 + 2);
      uVar30 = *(ushort *)(pVVar2 + 4);
      uVar31 = *(ushort *)(pVVar2 + 6);
      uVar32 = *(ushort *)(pVVar2 + 8);
      uVar33 = *(ushort *)(pVVar2 + 10);
      uVar34 = *(ushort *)(pVVar2 + 0xc);
      uVar35 = *(ushort *)(pVVar2 + 0xe);
      *(ushort *)(local_1048 + lVar48) =
           (*(ushort *)pVVar2 & uVar135) + *(short *)(local_1048 + lVar48);
      *(ushort *)(local_1048 + lVar48 + 2) = (uVar29 & uVar36) + *(short *)(local_1048 + lVar48 + 2)
      ;
      *(ushort *)(local_1048 + lVar48 + 4) = (uVar30 & uVar37) + *(short *)(local_1048 + lVar48 + 4)
      ;
      *(ushort *)(local_1048 + lVar48 + 6) = (uVar31 & uVar38) + *(short *)(local_1048 + lVar48 + 6)
      ;
      *(ushort *)(local_1048 + lVar48 + 8) = (uVar32 & uVar39) + *(short *)(local_1048 + lVar48 + 8)
      ;
      *(ushort *)(local_1048 + lVar48 + 10) =
           (uVar33 & uVar40) + *(short *)(local_1048 + lVar48 + 10);
      *(ushort *)(local_1048 + lVar48 + 0xc) =
           (uVar34 & uVar41) + *(short *)(local_1048 + lVar48 + 0xc);
      *(ushort *)(local_1048 + lVar48 + 0xe) =
           (uVar35 & uVar42) + *(short *)(local_1048 + lVar48 + 0xe);
      lVar48 = lVar48 + 0x10;
    } while (lVar48 != 0x30);
    lVar60 = lVar60 + 0x10;
    pVVar55 = pVVar55 + 0x30;
    auVar113._0_2_ = (uVar70 & __LC30) + auVar77._0_2_;
    auVar113._2_2_ = (uVar88 & _UNK_0010b332) + auVar77._2_2_;
    auVar113._4_2_ = (uVar91 & _UNK_0010b334) + auVar77._4_2_;
    auVar113._6_2_ = (uVar96 & _UNK_0010b336) + auVar77._6_2_;
    auVar113._8_2_ = (uVar125 & _UNK_0010b338) + auVar77._8_2_;
    auVar113._10_2_ = (uVar127 & _UNK_0010b33a) + auVar77._10_2_;
    auVar113._12_2_ = (uVar130 & _UNK_0010b33c) + auVar77._12_2_;
    auVar113._14_2_ = (uVar132 & _UNK_0010b33e) + auVar77._14_2_;
    sVar148 = (uVar135 & __LC30) + sVar148;
    sVar150 = (uVar36 & _UNK_0010b332) + sVar150;
    sVar151 = (uVar37 & _UNK_0010b334) + sVar151;
    sVar152 = (uVar38 & _UNK_0010b336) + sVar152;
    sVar153 = (uVar39 & _UNK_0010b338) + sVar153;
    sVar154 = (uVar40 & _UNK_0010b33a) + sVar154;
    sVar155 = (uVar41 & _UNK_0010b33c) + sVar155;
    sVar156 = (uVar42 & _UNK_0010b33e) + sVar156;
    auVar77 = auVar113;
  } while (lVar60 != 0x100);
  lVar60 = 0;
  lVar48 = 0;
  auVar77 = pmulhuw(__LC71,auVar113);
  this = (VInt16 *)&local_248;
  local_1138[0] = (VInt16)auVar113[0];
  local_1138[1] = (VInt16)auVar113[1];
  local_1138[2] = (VInt16)auVar113[2];
  local_1138[3] = (VInt16)auVar113[3];
  local_1138[4] = (VInt16)auVar113[4];
  local_1138[5] = (VInt16)auVar113[5];
  local_1138[6] = (VInt16)auVar113[6];
  local_1138[7] = (VInt16)auVar113[7];
  local_1138[8] = (VInt16)auVar113[8];
  local_1138[9] = (VInt16)auVar113[9];
  local_1138[10] = (VInt16)auVar113[10];
  local_1138[0xb] = (VInt16)auVar113[0xb];
  local_1138[0xc] = (VInt16)auVar113[0xc];
  local_1138[0xd] = (VInt16)auVar113[0xd];
  local_1138[0xe] = (VInt16)auVar113[0xe];
  local_1138[0xf] = (VInt16)auVar113[0xf];
  local_438._0_2_ = auVar113._8_2_ * SUB162(__LC71,8);
  local_438._2_2_ = auVar77._8_2_;
  asStack_434[0] = auVar113._10_2_ * SUB162(__LC71,10);
  asStack_434[1] = auVar77._10_2_;
  asStack_430[0] = auVar113._12_2_ * SUB162(__LC71,0xc);
  asStack_430[1] = auVar77._12_2_;
  asStack_42c[0] = auVar113._14_2_ * SUB162(__LC71,0xe);
  asStack_42c[1] = auVar77._14_2_;
  auVar112 = psllw(auVar113,4);
  local_1128 = sVar148;
  sStack_1126 = sVar150;
  sStack_1124 = sVar151;
  sStack_1122 = sVar152;
  sStack_1120 = sVar153;
  sStack_111e = sVar154;
  sStack_111c = sVar155;
  sStack_111a = sVar156;
  local_448 = auVar113._0_2_ * SUB162(__LC71,0);
  uStack_446 = auVar77._0_2_;
  sStack_444 = auVar113._2_2_ * SUB162(__LC71,2);
  uStack_442 = auVar77._2_2_;
  sStack_440 = auVar113._4_2_ * SUB162(__LC71,4);
  uStack_43e = auVar77._4_2_;
  sStack_43c = auVar113._6_2_ * SUB162(__LC71,6);
  uStack_43a = auVar77._6_2_;
  auVar112 = auVar112 | auVar113;
  pauVar51 = (undefined1 (*) [16])local_a38;
  pVVar69 = local_1018;
  do {
    auVar77 = *(undefined1 (*) [16])(local_1078 + lVar60 * 2);
    sVar4 = auVar77._0_2_ * 2;
    sVar13 = auVar77._2_2_ * 2;
    sVar14 = auVar77._4_2_ * 2;
    sVar15 = auVar77._6_2_ * 2;
    sVar16 = auVar77._8_2_ * 2;
    sVar17 = auVar77._10_2_ * 2;
    sVar18 = auVar77._12_2_ * 2;
    sVar19 = auVar77._14_2_ * 2;
    local_10e8._0_2_ = sVar4 + auVar112._0_2_;
    local_10e8._2_2_ = sVar13 + auVar112._2_2_;
    local_10e8._4_2_ = sVar14 + auVar112._4_2_;
    local_10e8._6_2_ = sVar15 + auVar112._6_2_;
    local_10e8._8_2_ = sVar16 + auVar112._8_2_;
    local_10e8._10_2_ = sVar17 + auVar112._10_2_;
    local_10e8._12_2_ = sVar18 + auVar112._12_2_;
    local_10e8._14_2_ = sVar19 + auVar112._14_2_;
    if (uVar57 != 0) {
      local_10e8._0_2_ = sVar4;
      local_10e8._2_2_ = sVar13;
      local_10e8._4_2_ = sVar14;
      local_10e8._6_2_ = sVar15;
      local_10e8._8_2_ = sVar16;
      local_10e8._10_2_ = sVar17;
      local_10e8._12_2_ = sVar18;
      local_10e8._14_2_ = sVar19;
    }
    psVar63 = &Tables::ETC1::g_thModifierTable;
    pVVar66 = this;
    do {
      sVar4 = *psVar63;
      pVVar61 = pVVar66 + 0x10;
      psVar63 = psVar63 + 1;
      *(short *)pVVar66 = (sVar4 * auVar113._0_2_ + auVar77._0_2_) * 2 + auVar112._0_2_;
      *(short *)(pVVar66 + 2) = (sVar4 * auVar113._2_2_ + auVar77._2_2_) * 2 + auVar112._2_2_;
      *(short *)(pVVar66 + 4) = (sVar4 * auVar113._4_2_ + auVar77._4_2_) * 2 + auVar112._4_2_;
      *(short *)(pVVar66 + 6) = (sVar4 * auVar113._6_2_ + auVar77._6_2_) * 2 + auVar112._6_2_;
      *(short *)(pVVar66 + 8) = (sVar4 * auVar113._8_2_ + auVar77._8_2_) * 2 + auVar112._8_2_;
      *(short *)(pVVar66 + 10) = (sVar4 * auVar113._10_2_ + auVar77._10_2_) * 2 + auVar112._10_2_;
      *(short *)(pVVar66 + 0xc) = (sVar4 * auVar113._12_2_ + auVar77._12_2_) * 2 + auVar112._12_2_;
      *(short *)(pVVar66 + 0xe) = (sVar4 * auVar113._14_2_ + auVar77._14_2_) * 2 + auVar112._14_2_;
      pVVar66 = pVVar61;
    } while (local_1c8 != pVVar61);
    lVar67 = 0;
    pVVar66 = local_1c8;
    pauVar64 = pauVar51;
    do {
      iVar47 = *(int *)((VInt16 *)&local_448 + lVar67 * 2);
      if (iVar47 == 0) {
        *(undefined2 *)(pVVar69 + lVar67) = 0;
        pauVar49 = pauVar64 + -0x18;
        do {
          pauVar50 = pauVar49 + 6;
          *(ushort *)*pauVar49 = 0;
          *(ushort *)pauVar49[3] = 0;
          pauVar49 = pauVar50;
        } while (pauVar64 != pauVar50);
      }
      else {
        pVVar61 = pVVar66 + -0x80;
        *(short *)(pVVar69 + lVar67) =
             (short)((long)(ulong)*(ushort *)(local_10e8 + lVar67) / (long)iVar47);
        pauVar49 = pauVar64 + -0x18;
        do {
          uVar70 = *(ushort *)pVVar61;
          pVVar61 = pVVar61 + 0x10;
          *(ushort *)*pauVar49 = (ushort)((long)(ulong)uVar70 / (long)iVar47);
          pauVar49 = pauVar49 + 3;
        } while (pVVar66 != pVVar61);
      }
      lVar67 = lVar67 + 2;
      pVVar66 = pVVar66 + 2;
      pauVar64 = (undefined1 (*) [16])((long)*pauVar64 + 2);
    } while (lVar67 != 0x10);
    lVar48 = lVar48 + 1;
    pVVar69 = pVVar69 + 0x10;
    *(undefined8 *)(local_fe8 + lVar60 * 2) = local_10e8._0_8_;
    *(undefined8 *)((long)auStack_fe0 + lVar60 * 2) = local_10e8._8_8_;
    pauVar51 = pauVar51 + 1;
    lVar60 = lVar60 + 8;
  } while (lVar48 != 3);
  pauVar51 = (undefined1 (*) [16])local_bb8;
  if (uVar57 != 0) {
    ResolveTHFakeBT709Rounding(local_1018,local_fe8,local_1138);
  }
  do {
    uVar70 = *(ushort *)*pauVar51;
    uVar88 = *(ushort *)((long)*pauVar51 + 2);
    uVar91 = *(ushort *)((long)*pauVar51 + 4);
    uVar96 = *(ushort *)((long)*pauVar51 + 6);
    uVar125 = *(ushort *)((long)*pauVar51 + 8);
    uVar127 = *(ushort *)((long)*pauVar51 + 10);
    uVar130 = *(ushort *)((long)*pauVar51 + 0xc);
    uVar132 = *(ushort *)((long)*pauVar51 + 0xe);
    pauVar64 = pauVar51 + 3;
    *(ushort *)*pauVar51 =
         (ushort)(__LC73 < (short)uVar70) * __LC73 | (__LC73 >= (short)uVar70) * uVar70;
    *(ushort *)((long)*pauVar51 + 2) =
         (ushort)(_UNK_0010b322 < (short)uVar88) * _UNK_0010b322 |
         (_UNK_0010b322 >= (short)uVar88) * uVar88;
    *(ushort *)((long)*pauVar51 + 4) =
         (ushort)(_UNK_0010b324 < (short)uVar91) * _UNK_0010b324 |
         (_UNK_0010b324 >= (short)uVar91) * uVar91;
    *(ushort *)((long)*pauVar51 + 6) =
         (ushort)(_UNK_0010b326 < (short)uVar96) * _UNK_0010b326 |
         (_UNK_0010b326 >= (short)uVar96) * uVar96;
    *(ushort *)((long)*pauVar51 + 8) =
         (ushort)(_UNK_0010b328 < (short)uVar125) * _UNK_0010b328 |
         (_UNK_0010b328 >= (short)uVar125) * uVar125;
    *(ushort *)((long)*pauVar51 + 10) =
         (ushort)(_UNK_0010b32a < (short)uVar127) * _UNK_0010b32a |
         (_UNK_0010b32a >= (short)uVar127) * uVar127;
    *(ushort *)((long)*pauVar51 + 0xc) =
         (ushort)(_UNK_0010b32c < (short)uVar130) * _UNK_0010b32c |
         (_UNK_0010b32c >= (short)uVar130) * uVar130;
    *(ushort *)((long)*pauVar51 + 0xe) =
         (ushort)(_UNK_0010b32e < (short)uVar132) * _UNK_0010b32e |
         (_UNK_0010b32e >= (short)uVar132) * uVar132;
    uVar70 = *(ushort *)pauVar51[1];
    uVar88 = *(ushort *)((long)pauVar51[1] + 2);
    uVar91 = *(ushort *)((long)pauVar51[1] + 4);
    uVar96 = *(ushort *)((long)pauVar51[1] + 6);
    uVar125 = *(ushort *)((long)pauVar51[1] + 8);
    uVar127 = *(ushort *)((long)pauVar51[1] + 10);
    uVar130 = *(ushort *)((long)pauVar51[1] + 0xc);
    uVar132 = *(ushort *)((long)pauVar51[1] + 0xe);
    *(ushort *)pauVar51[1] =
         (ushort)(__LC73 < (short)uVar70) * __LC73 | (__LC73 >= (short)uVar70) * uVar70;
    *(ushort *)((long)pauVar51[1] + 2) =
         (ushort)(_UNK_0010b322 < (short)uVar88) * _UNK_0010b322 |
         (_UNK_0010b322 >= (short)uVar88) * uVar88;
    *(ushort *)((long)pauVar51[1] + 4) =
         (ushort)(_UNK_0010b324 < (short)uVar91) * _UNK_0010b324 |
         (_UNK_0010b324 >= (short)uVar91) * uVar91;
    *(ushort *)((long)pauVar51[1] + 6) =
         (ushort)(_UNK_0010b326 < (short)uVar96) * _UNK_0010b326 |
         (_UNK_0010b326 >= (short)uVar96) * uVar96;
    *(ushort *)((long)pauVar51[1] + 8) =
         (ushort)(_UNK_0010b328 < (short)uVar125) * _UNK_0010b328 |
         (_UNK_0010b328 >= (short)uVar125) * uVar125;
    *(ushort *)((long)pauVar51[1] + 10) =
         (ushort)(_UNK_0010b32a < (short)uVar127) * _UNK_0010b32a |
         (_UNK_0010b32a >= (short)uVar127) * uVar127;
    *(ushort *)((long)pauVar51[1] + 0xc) =
         (ushort)(_UNK_0010b32c < (short)uVar130) * _UNK_0010b32c |
         (_UNK_0010b32c >= (short)uVar130) * uVar130;
    *(ushort *)((long)pauVar51[1] + 0xe) =
         (ushort)(_UNK_0010b32e < (short)uVar132) * _UNK_0010b32e |
         (_UNK_0010b32e >= (short)uVar132) * uVar132;
    uVar70 = *(ushort *)pauVar51[2];
    uVar88 = *(ushort *)((long)pauVar51[2] + 2);
    uVar91 = *(ushort *)((long)pauVar51[2] + 4);
    uVar96 = *(ushort *)((long)pauVar51[2] + 6);
    uVar125 = *(ushort *)((long)pauVar51[2] + 8);
    uVar127 = *(ushort *)((long)pauVar51[2] + 10);
    uVar130 = *(ushort *)((long)pauVar51[2] + 0xc);
    uVar132 = *(ushort *)((long)pauVar51[2] + 0xe);
    *(ushort *)pauVar51[2] =
         (ushort)(__LC73 < (short)uVar70) * __LC73 | (__LC73 >= (short)uVar70) * uVar70;
    *(ushort *)((long)pauVar51[2] + 2) =
         (ushort)(_UNK_0010b322 < (short)uVar88) * _UNK_0010b322 |
         (_UNK_0010b322 >= (short)uVar88) * uVar88;
    *(ushort *)((long)pauVar51[2] + 4) =
         (ushort)(_UNK_0010b324 < (short)uVar91) * _UNK_0010b324 |
         (_UNK_0010b324 >= (short)uVar91) * uVar91;
    *(ushort *)((long)pauVar51[2] + 6) =
         (ushort)(_UNK_0010b326 < (short)uVar96) * _UNK_0010b326 |
         (_UNK_0010b326 >= (short)uVar96) * uVar96;
    *(ushort *)((long)pauVar51[2] + 8) =
         (ushort)(_UNK_0010b328 < (short)uVar125) * _UNK_0010b328 |
         (_UNK_0010b328 >= (short)uVar125) * uVar125;
    *(ushort *)((long)pauVar51[2] + 10) =
         (ushort)(_UNK_0010b32a < (short)uVar127) * _UNK_0010b32a |
         (_UNK_0010b32a >= (short)uVar127) * uVar127;
    *(ushort *)((long)pauVar51[2] + 0xc) =
         (ushort)(_UNK_0010b32c < (short)uVar130) * _UNK_0010b32c |
         (_UNK_0010b32c >= (short)uVar130) * uVar130;
    *(ushort *)((long)pauVar51[2] + 0xe) =
         (ushort)(_UNK_0010b32e < (short)uVar132) * _UNK_0010b32e |
         (_UNK_0010b32e >= (short)uVar132) * uVar132;
    pauVar51 = pauVar64;
  } while ((undefined1 (*) [16])local_a38 != pauVar64);
  auVar77 = psllw((undefined1  [16])local_1018,4);
  local_fb8 = (VInt16  [16])(auVar77 | (undefined1  [16])local_1018);
  local_fa8 = psllw(local_1008,4);
  local_fa8 = local_fa8 | local_1008;
  local_f98 = psllw(local_ff8,4);
  local_f98 = local_f98 | local_ff8;
  pEVar58 = local_648;
  lVar60 = 0;
  pVVar55 = param_4;
  do {
    if (uVar57 == 0) {
      if (uVar68 == 0) {
        ComputeErrorWeighted(local_648 + (long)(int)lVar60 * 0x20,local_fb8,param_5);
      }
      else {
        ComputeErrorUniform(local_648 + (long)(int)lVar60 * 0x20,(VInt16 *)pVVar55,local_fb8);
      }
    }
    else {
      ComputeErrorFakeBT709(local_648 + (long)(int)lVar60 * 0x20,local_fb8,param_5);
    }
    lVar48 = lVar60 + 1;
    param_5 = param_5 + 0x60;
    pVVar55 = (VInt16<2> *)((VInt16 *)pVVar55 + 0x30);
    uVar74 = (&uStack_844)[lVar60 * 8];
    uVar94 = (&uStack_840)[lVar60 * 8];
    uVar110 = (&uStack_83c)[lVar60 * 8];
    *(uint *)pEVar58 = ~*(uint *)(local_848 + lVar60 * 0x20) & *(uint *)pEVar58;
    *(uint *)(pEVar58 + 4) = ~uVar74 & *(uint *)(pEVar58 + 4);
    *(uint *)(pEVar58 + 8) = ~uVar94 & *(uint *)(pEVar58 + 8);
    *(uint *)(pEVar58 + 0xc) = ~uVar110 & *(uint *)(pEVar58 + 0xc);
    uVar74 = (&uStack_834)[lVar60 * 8];
    uVar94 = (&uStack_830)[lVar60 * 8];
    uVar110 = (&uStack_82c)[lVar60 * 8];
    *(uint *)(pEVar58 + 0x10) = ~(&local_838)[lVar60 * 8] & *(uint *)(pEVar58 + 0x10);
    *(uint *)(pEVar58 + 0x14) = ~uVar74 & *(uint *)(pEVar58 + 0x14);
    *(uint *)(pEVar58 + 0x18) = ~uVar94 & *(uint *)(pEVar58 + 0x18);
    *(uint *)(pEVar58 + 0x1c) = ~uVar110 & *(uint *)(pEVar58 + 0x1c);
    pEVar58 = pEVar58 + 0x20;
    lVar60 = lVar48;
  } while (lVar48 != 0x10);
  local_10d8 = (undefined1  [16])0x0;
  pVVar69 = local_f88;
  local_10c8 = (undefined1  [16])0x0;
  local_1118 = (undefined1  [16])0x0;
  local_1108 = (undefined1  [16])0x0;
  local_10f8 = (undefined1  [16])0x0;
  sVar4 = -sVar148;
  sVar13 = -sVar150;
  sVar14 = -sVar151;
  sVar15 = -sVar152;
  sVar16 = -sVar153;
  sVar17 = -sVar154;
  sVar18 = -sVar155;
  sVar19 = -sVar156;
  uVar70 = (ushort)(sVar153 < sVar148) * sVar148 | (ushort)(sVar153 >= sVar148) * sVar153;
  uVar88 = (ushort)(sVar154 < sVar150) * sVar150 | (ushort)(sVar154 >= sVar150) * sVar154;
  uVar91 = (ushort)(sVar155 < sVar151) * sVar151 | (ushort)(sVar155 >= sVar151) * sVar155;
  uVar96 = (ushort)(sVar156 < sVar152) * sVar152 | (ushort)(sVar156 >= sVar152) * sVar156;
  uVar70 = ((short)uVar70 < (short)uVar91) * uVar91 | ((short)uVar70 >= (short)uVar91) * uVar70;
  uVar88 = ((short)uVar88 < (short)uVar96) * uVar96 | ((short)uVar88 >= (short)uVar96) * uVar88;
  uVar88 = ((short)uVar70 < (short)uVar88) * uVar88 | ((short)uVar70 >= (short)uVar88) * uVar70;
  uVar70 = 0;
  if (-1 < (short)uVar88) {
    uVar70 = uVar88;
  }
  local_11e8 = 0;
  local_11a0 = (undefined1 (*) [16])local_bb8;
  do {
    local_10b8[3] = 0;
    local_10b8[2] = 0;
    local_10b8[1] = 0;
    local_10b8[0] = 0;
    sVar176 = (&Tables::ETC1::g_thModifierTable)[local_11e8];
    local_10b8[7] = 0;
    local_10b8[6] = 0;
    local_10b8[5] = 0;
    local_10b8[4] = 0;
    sVar72 = -uVar70;
    do {
      pVVar66 = (VInt16 *)&local_448;
      if (uVar57 == 0) {
        do {
          *(undefined1 (*) [16])pVVar66 = (undefined1  [16])0x0;
          pVVar66 = pVVar66 + 0x10;
        } while (local_418 != pVVar66);
      }
      else {
        lVar60 = 0;
        uVar88 = (ushort)(sVar148 < sVar72) * sVar148 | (ushort)(sVar148 >= sVar72) * sVar72;
        uVar91 = (ushort)(sVar150 < sVar72) * sVar150 | (ushort)(sVar150 >= sVar72) * sVar72;
        uVar96 = (ushort)(sVar151 < sVar72) * sVar151 | (ushort)(sVar151 >= sVar72) * sVar72;
        uVar125 = (ushort)(sVar152 < sVar72) * sVar152 | (ushort)(sVar152 >= sVar72) * sVar72;
        uVar127 = (ushort)(sVar153 < sVar72) * sVar153 | (ushort)(sVar153 >= sVar72) * sVar72;
        uVar130 = (ushort)(sVar154 < sVar72) * sVar154 | (ushort)(sVar154 >= sVar72) * sVar72;
        uVar132 = (ushort)(sVar155 < sVar72) * sVar155 | (ushort)(sVar155 >= sVar72) * sVar72;
        uVar135 = (ushort)(sVar156 < sVar72) * sVar156 | (ushort)(sVar156 >= sVar72) * sVar72;
        do {
          sVar89 = *(short *)(local_1048 + lVar60 + 2);
          sVar92 = *(short *)(local_1048 + lVar60 + 4);
          sVar97 = *(short *)(local_1048 + lVar60 + 6);
          sVar99 = *(short *)(local_1048 + lVar60 + 8);
          sVar102 = *(short *)(local_1048 + lVar60 + 10);
          sVar104 = *(short *)(local_1048 + lVar60 + 0xc);
          sVar107 = *(short *)(local_1048 + lVar60 + 0xe);
          *(undefined1 (*) [16])((VInt16 *)&local_448 + lVar60) = (undefined1  [16])0x0;
          sVar71 = *(short *)(local_1048 + lVar60) * 2 +
                   ((ushort)((short)uVar88 < sVar4) * sVar4 | ((short)uVar88 >= sVar4) * uVar88) *
                   sVar176 * 2;
          sVar89 = sVar89 * 2 +
                   ((ushort)((short)uVar91 < sVar13) * sVar13 | ((short)uVar91 >= sVar13) * uVar91)
                   * sVar176 * 2;
          sVar92 = sVar92 * 2 +
                   ((ushort)((short)uVar96 < sVar14) * sVar14 | ((short)uVar96 >= sVar14) * uVar96)
                   * sVar176 * 2;
          sVar97 = sVar97 * 2 +
                   ((ushort)((short)uVar125 < sVar15) * sVar15 |
                   ((short)uVar125 >= sVar15) * uVar125) * sVar176 * 2;
          sVar99 = sVar99 * 2 +
                   ((ushort)((short)uVar127 < sVar16) * sVar16 |
                   ((short)uVar127 >= sVar16) * uVar127) * sVar176 * 2;
          sVar102 = sVar102 * 2 +
                    ((ushort)((short)uVar130 < sVar17) * sVar17 |
                    ((short)uVar130 >= sVar17) * uVar130) * sVar176 * 2;
          sVar104 = sVar104 * 2 +
                    ((ushort)((short)uVar132 < sVar18) * sVar18 |
                    ((short)uVar132 >= sVar18) * uVar132) * sVar176 * 2;
          sVar107 = sVar107 * 2 +
                    ((ushort)((short)uVar135 < sVar19) * sVar19 |
                    ((short)uVar135 >= sVar19) * uVar135) * sVar176 * 2;
          pVVar66 = this + lVar60;
          *(ushort *)pVVar66 = (ushort)(-1 < sVar71) * sVar71;
          *(ushort *)(pVVar66 + 2) = (ushort)(-1 < sVar89) * sVar89;
          *(ushort *)(pVVar66 + 4) = (ushort)(-1 < sVar92) * sVar92;
          *(ushort *)(pVVar66 + 6) = (ushort)(-1 < sVar97) * sVar97;
          *(ushort *)(pVVar66 + 8) = (ushort)(-1 < sVar99) * sVar99;
          *(ushort *)(pVVar66 + 10) = (ushort)(-1 < sVar102) * sVar102;
          *(ushort *)(pVVar66 + 0xc) = (ushort)(-1 < sVar104) * sVar104;
          *(ushort *)(pVVar66 + 0xe) = (ushort)(-1 < sVar107) * sVar107;
          lVar60 = lVar60 + 0x10;
        } while (lVar60 != 0x30);
        ResolveTHFakeBT709Rounding((VInt16 *)&local_448,this,(VInt16 *)&local_1128);
      }
      auVar112._2_2_ = local_438._2_2_;
      auVar112._0_2_ = (short)local_438;
      auVar112._4_2_ = asStack_434[0];
      auVar112._6_2_ = asStack_434[1];
      auVar112._8_2_ = asStack_430[0];
      auVar112._10_2_ = asStack_430[1];
      auVar112._12_2_ = asStack_42c[0];
      auVar112._14_2_ = asStack_42c[1];
      lVar60 = 0;
      auVar77._2_2_ = uStack_446;
      auVar77._0_2_ = local_448;
      auVar77._4_2_ = sStack_444;
      auVar77._6_2_ = uStack_442;
      auVar77._8_2_ = sStack_440;
      auVar77._10_2_ = uStack_43e;
      auVar77._12_2_ = sStack_43c;
      auVar77._14_2_ = uStack_43a;
      auVar113 = psllw(auVar112,5);
      auVar77 = psllw(auVar77,10);
      local_10e8 = auVar77 | auVar113 | local_428;
      do {
        iVar47 = *(int *)((long)local_10b8 + lVar60 * 2);
        sVar89 = *(short *)(local_10e8 + lVar60);
        if ((iVar47 == 0) ||
           (sVar89 != *(short *)((long)local_a38 + lVar60 + (long)(iVar47 + -1) * 0x10))) {
          *(int *)((long)local_10b8 + lVar60 * 2) = iVar47 + 1;
          *(short *)((long)local_a38 + lVar60 + (long)iVar47 * 0x10) = sVar89;
        }
        lVar60 = lVar60 + 2;
      } while (lVar60 != 0x10);
      sVar72 = sVar72 + 2;
    } while (sVar72 <= (short)uVar70);
    uVar110 = ~-(uint)((int)local_10b8[4] < (int)local_10b8[0]) & local_10b8[4] |
              local_10b8[0] & -(uint)((int)local_10b8[4] < (int)local_10b8[0]);
    uVar166 = ~-(uint)((int)local_10b8[5] < (int)local_10b8[1]) & local_10b8[5] |
              local_10b8[1] & -(uint)((int)local_10b8[5] < (int)local_10b8[1]);
    uVar167 = ~-(uint)((int)local_10b8[6] < (int)local_10b8[2]) & local_10b8[6] |
              local_10b8[2] & -(uint)((int)local_10b8[6] < (int)local_10b8[2]);
    uVar168 = ~-(uint)((int)local_10b8[7] < (int)local_10b8[3]) & local_10b8[7] |
              local_10b8[3] & -(uint)((int)local_10b8[7] < (int)local_10b8[3]);
    uVar74 = -(uint)((int)uVar110 < (int)uVar167);
    uVar94 = -(uint)((int)uVar166 < (int)uVar168);
    uVar74 = ~uVar74 & uVar110 | uVar167 & uVar74;
    uVar94 = ~uVar94 & uVar166 | uVar168 & uVar94;
    uVar110 = -(uint)((int)uVar74 < (int)uVar94);
    uVar94 = ~uVar110 & uVar74 | uVar94 & uVar110;
    uVar74 = 0;
    if (-1 < (int)uVar94) {
      uVar74 = uVar94;
    }
    lVar60 = 0;
    do {
      uVar110 = local_10b8[lVar60];
      uVar88 = *(ushort *)((long)*(undefined1 (*) [16])local_a38 + lVar60 * 2);
      iVar47 = uVar110 + 1;
      if (iVar47 < (int)uVar74) {
        puVar52 = (ushort *)((long)((undefined1 (*) [16])local_a38)[iVar47] + lVar60 * 2);
        puVar3 = local_a18 + lVar60 + ((ulong)((uVar74 - 2) - uVar110) + (long)(int)uVar110) * 8;
        if (((int)puVar3 - (int)puVar52 & 0x10U) != 0) {
          *puVar52 = uVar88;
          puVar52 = auStack_a28 + (long)iVar47 * 8 + lVar60;
          if (puVar3 == auStack_a28 + (long)iVar47 * 8 + lVar60) goto LAB_001064a0;
        }
        do {
          *puVar52 = uVar88;
          puVar53 = puVar52 + 0x10;
          puVar52[8] = uVar88;
          puVar52 = puVar53;
        } while (puVar3 != puVar53);
      }
LAB_001064a0:
      lVar60 = lVar60 + 1;
    } while (lVar60 != 8);
    lVar60 = 0;
    do {
      auVar77 = psllw(*(undefined1 (*) [16])
                       ((long)((undefined1 (*) [16])local_bb8)[local_11e8 * 3] + lVar60),4);
      auVar77 = auVar77 | *(undefined1 (*) [16])
                           ((long)((undefined1 (*) [16])local_bb8)[local_11e8 * 3] + lVar60);
      sVar72 = auVar77._0_2_ - sVar176;
      sVar89 = auVar77._2_2_ - sVar176;
      sVar92 = auVar77._4_2_ - sVar176;
      sVar97 = auVar77._6_2_ - sVar176;
      sVar99 = auVar77._8_2_ - sVar176;
      sVar102 = auVar77._10_2_ - sVar176;
      sVar104 = auVar77._12_2_ - sVar176;
      sVar107 = auVar77._14_2_ - sVar176;
      pVVar66 = pVVar69 + lVar60;
      *(ushort *)pVVar66 = (ushort)(-1 < sVar72) * sVar72;
      *(ushort *)(pVVar66 + 2) = (ushort)(-1 < sVar89) * sVar89;
      *(ushort *)(pVVar66 + 4) = (ushort)(-1 < sVar92) * sVar92;
      *(ushort *)(pVVar66 + 6) = (ushort)(-1 < sVar97) * sVar97;
      *(ushort *)(pVVar66 + 8) = (ushort)(-1 < sVar99) * sVar99;
      *(ushort *)(pVVar66 + 10) = (ushort)(-1 < sVar102) * sVar102;
      *(ushort *)(pVVar66 + 0xc) = (ushort)(-1 < sVar104) * sVar104;
      *(ushort *)(pVVar66 + 0xe) = (ushort)(-1 < sVar107) * sVar107;
      lVar60 = lVar60 + 0x10;
      pVVar66 = (VInt16 *)&local_448;
      pEVar58 = local_848;
      pVVar61 = (VInt16 *)param_4;
      sVar72 = sVar176;
      sVar89 = sVar176;
      sVar92 = sVar176;
      sVar97 = sVar176;
      sVar99 = sVar176;
      sVar102 = sVar176;
      sVar104 = sVar176;
    } while (lVar60 != 0x30);
    do {
      if (uVar68 == 0) {
        ComputeErrorWeighted();
      }
      else {
        ComputeErrorUniform((ETCComputer *)this,pVVar69,pVVar61);
      }
      uVar110 = *(uint *)(pEVar58 + 4);
      uVar166 = *(uint *)(pEVar58 + 8);
      uVar167 = *(uint *)(pEVar58 + 0xc);
      pVVar56 = pVVar66 + 0x20;
      *(uint *)pVVar66 = ~*(uint *)pEVar58 & local_248;
      *(uint *)(pVVar66 + 4) = ~uVar110 & uStack_244;
      *(uint *)(pVVar66 + 8) = ~uVar166 & uStack_240;
      *(uint *)(pVVar66 + 0xc) = ~uVar167 & uStack_23c;
      uVar110 = *(uint *)(pEVar58 + 0x14);
      uVar166 = *(uint *)(pEVar58 + 0x18);
      uVar167 = *(uint *)(pEVar58 + 0x1c);
      *(uint *)(pVVar66 + 0x10) = ~*(uint *)(pEVar58 + 0x10) & local_238[0];
      *(uint *)(pVVar66 + 0x14) = ~uVar110 & local_238[1];
      *(uint *)(pVVar66 + 0x18) = ~uVar166 & local_238[2];
      *(uint *)(pVVar66 + 0x1c) = ~uVar167 & local_238[3];
      pVVar66 = pVVar56;
      pEVar58 = pEVar58 + 0x20;
      pVVar61 = pVVar61 + 0x30;
    } while (this != pVVar56);
    auVar113 = psllw(local_11a0[1],5);
    auVar77 = psllw(*local_11a0,10);
    local_1258 = (undefined1  [16])0x0;
    auVar77 = local_11a0[2] | auVar77 | auVar113;
    if ((local_11e8 & 1) == 0) {
      local_1258._8_4_ = 0xffffffff;
      local_1258._0_8_ = 0xffffffffffffffff;
      local_1258._12_4_ = 0xffffffff;
    }
    if (0 < (int)uVar94) {
      uVar75 = CONCAT22((short)local_11e8,(short)local_11e8);
      pVVar66 = local_eb8;
      sVar107 = 0;
      sVar71 = 0;
      sVar157 = 0;
      sVar158 = 0;
      sVar159 = 0;
      sVar160 = 0;
      sVar161 = 0;
      sVar162 = 0;
      pEVar58 = (ETCComputer *)&local_1098;
      auVar113 = __LC55;
      local_1298 = (undefined1 (*) [16])local_a38;
      do {
        auVar112 = *local_1298;
        pVVar61 = local_f18;
        uVar94 = 10;
        do {
          uVar110 = uVar94 - 5;
          uVar62 = (ulong)uVar94;
          auVar115._0_2_ = auVar112._0_2_ >> uVar62;
          auVar115._2_2_ = auVar112._2_2_ >> uVar62;
          auVar115._4_2_ = auVar112._4_2_ >> uVar62;
          auVar115._6_2_ = auVar112._6_2_ >> uVar62;
          auVar115._8_2_ = auVar112._8_2_ >> uVar62;
          auVar115._10_2_ = auVar112._10_2_ >> uVar62;
          auVar115._12_2_ = auVar112._12_2_ >> uVar62;
          auVar115._14_2_ = auVar112._14_2_ >> uVar62;
          auVar78._2_2_ = _UNK_0010b322;
          auVar78._0_2_ = __LC73;
          auVar78._4_2_ = _UNK_0010b324;
          auVar78._6_2_ = _UNK_0010b326;
          auVar78._8_2_ = _UNK_0010b328;
          auVar78._10_2_ = _UNK_0010b32a;
          auVar78._12_2_ = _UNK_0010b32c;
          auVar78._14_2_ = _UNK_0010b32e;
          auVar114 = psllw(auVar115 & auVar78,4);
          auVar114 = auVar115 & auVar78 | auVar114;
          sVar109 = sVar176 + auVar114._0_2_;
          sVar122 = sVar72 + auVar114._2_2_;
          sVar123 = sVar89 + auVar114._4_2_;
          sVar126 = sVar92 + auVar114._6_2_;
          sVar128 = sVar97 + auVar114._8_2_;
          sVar131 = sVar99 + auVar114._10_2_;
          sVar133 = sVar102 + auVar114._12_2_;
          sVar136 = sVar104 + auVar114._14_2_;
          sVar73 = auVar114._0_2_ - sVar176;
          sVar90 = auVar114._2_2_ - sVar72;
          sVar93 = auVar114._4_2_ - sVar89;
          sVar98 = auVar114._6_2_ - sVar92;
          sVar100 = auVar114._8_2_ - sVar97;
          sVar103 = auVar114._10_2_ - sVar99;
          sVar105 = auVar114._12_2_ - sVar102;
          sVar108 = auVar114._14_2_ - sVar104;
          bVar5 = __LC27 < sVar109;
          uVar135 = (ushort)bVar5 * __LC27;
          bVar6 = _UNK_0010b352 < sVar122;
          uVar132 = (ushort)bVar6 * _UNK_0010b352;
          bVar7 = _UNK_0010b354 < sVar123;
          uVar130 = (ushort)bVar7 * _UNK_0010b354;
          bVar8 = _UNK_0010b356 < sVar126;
          uVar127 = (ushort)bVar8 * _UNK_0010b356;
          bVar9 = _UNK_0010b358 < sVar128;
          uVar125 = (ushort)bVar9 * _UNK_0010b358;
          bVar10 = _UNK_0010b35a < sVar131;
          uVar96 = (ushort)bVar10 * _UNK_0010b35a;
          bVar11 = _UNK_0010b35c < sVar133;
          uVar91 = (ushort)bVar11 * _UNK_0010b35c;
          bVar12 = _UNK_0010b35e < sVar136;
          uVar88 = (ushort)bVar12 * _UNK_0010b35e;
          *(ushort *)(pVVar61 + 0x30) =
               (ushort)(sVar73 < sVar107) * sVar107 | (ushort)(sVar73 >= sVar107) * sVar73;
          *(ushort *)(pVVar61 + 0x32) =
               (ushort)(sVar90 < sVar71) * sVar71 | (ushort)(sVar90 >= sVar71) * sVar90;
          *(ushort *)(pVVar61 + 0x34) =
               (ushort)(sVar93 < sVar157) * sVar157 | (ushort)(sVar93 >= sVar157) * sVar93;
          *(ushort *)(pVVar61 + 0x36) =
               (ushort)(sVar98 < sVar158) * sVar158 | (ushort)(sVar98 >= sVar158) * sVar98;
          *(ushort *)(pVVar61 + 0x38) =
               (ushort)(sVar100 < sVar159) * sVar159 | (ushort)(sVar100 >= sVar159) * sVar100;
          *(ushort *)(pVVar61 + 0x3a) =
               (ushort)(sVar103 < sVar160) * sVar160 | (ushort)(sVar103 >= sVar160) * sVar103;
          *(ushort *)(pVVar61 + 0x3c) =
               (ushort)(sVar105 < sVar161) * sVar161 | (ushort)(sVar105 >= sVar161) * sVar105;
          *(ushort *)(pVVar61 + 0x3e) =
               (ushort)(sVar108 < sVar162) * sVar162 | (ushort)(sVar108 >= sVar162) * sVar108;
          *(ushort *)pVVar61 = uVar135 | (ushort)!bVar5 * sVar109;
          *(ushort *)(pVVar61 + 2) = uVar132 | (ushort)!bVar6 * sVar122;
          *(ushort *)(pVVar61 + 4) = uVar130 | (ushort)!bVar7 * sVar123;
          *(ushort *)(pVVar61 + 6) = uVar127 | (ushort)!bVar8 * sVar126;
          *(ushort *)(pVVar61 + 8) = uVar125 | (ushort)!bVar9 * sVar128;
          *(ushort *)(pVVar61 + 10) = uVar96 | (ushort)!bVar10 * sVar131;
          *(ushort *)(pVVar61 + 0xc) = uVar91 | (ushort)!bVar11 * sVar133;
          *(ushort *)(pVVar61 + 0xe) = uVar88 | (ushort)!bVar12 * sVar136;
          pVVar61 = pVVar61 + 0x10;
          uVar94 = uVar110;
        } while (uVar110 != 0xfffffffb);
        lVar60 = 0;
        pVVar61 = local_f18;
        puVar65 = (undefined8 *)local_f58;
        pauVar51 = (undefined1 (*) [16])local_cb8;
        pVVar56 = (VInt16 *)param_4;
        do {
          do {
            if (uVar68 == 0) {
              ComputeErrorWeighted();
            }
            else {
              ComputeErrorUniform(pEVar58,pVVar61,pVVar56);
            }
            pVVar61 = pVVar61 + 0x30;
            *puVar65 = local_1098;
            puVar65[1] = uStack_1090;
            puVar65[2] = local_1088;
            puVar65[3] = uStack_1080;
            puVar65 = puVar65 + 4;
          } while (pVVar61 != pVVar66);
          pVVar56 = pVVar56 + 0x30;
          auVar138._4_4_ = fStack_f34;
          auVar138._0_4_ = local_f38;
          auVar138._8_4_ = fStack_f30;
          auVar138._12_4_ = fStack_f2c;
          auVar138 = minps(local_f58,auVar138);
          auVar145._4_4_ = -(uint)(local_f58._4_4_ <= fStack_f34);
          auVar145._0_4_ = -(uint)(local_f58._0_4_ <= local_f38);
          auVar145._8_4_ = -(uint)(local_f58._8_4_ <= fStack_f30);
          auVar145._12_4_ = -(uint)(local_f58._12_4_ <= fStack_f2c);
          auVar139._4_4_ = fStack_f24;
          auVar139._0_4_ = local_f28;
          auVar139._8_4_ = fStack_f20;
          auVar139._12_4_ = fStack_f1c;
          auVar115 = minps(local_f48,auVar139);
          auVar82._4_4_ = -(uint)(local_f48._4_4_ <= fStack_f24);
          auVar82._0_4_ = -(uint)(local_f48._0_4_ <= local_f28);
          auVar82._8_4_ = -(uint)(local_f48._8_4_ <= fStack_f20);
          auVar82._12_4_ = -(uint)(local_f48._12_4_ <= fStack_f1c);
          auVar78 = packssdw(auVar145,auVar82);
          auVar114._2_2_ = _UNK_0010b332;
          auVar114._0_2_ = __LC30;
          auVar114._4_2_ = _UNK_0010b334;
          auVar114._6_2_ = _UNK_0010b336;
          auVar114._8_2_ = _UNK_0010b338;
          auVar114._10_2_ = _UNK_0010b33a;
          auVar114._12_2_ = _UNK_0010b33c;
          auVar114._14_2_ = _UNK_0010b33e;
          *pauVar51 = auVar78 & auVar114 | ~auVar78 & auVar113;
          uVar94 = *(uint *)((long)&uStack_844 + lVar60);
          uVar110 = *(uint *)((long)&uStack_840 + lVar60);
          uVar166 = *(uint *)((long)&uStack_83c + lVar60);
          pVVar61 = this + lVar60;
          *(uint *)pVVar61 = ~*(uint *)(local_848 + lVar60) & auVar138._0_4_;
          *(uint *)(pVVar61 + 4) = ~uVar94 & auVar138._4_4_;
          *(uint *)(pVVar61 + 8) = ~uVar110 & auVar138._8_4_;
          *(uint *)(pVVar61 + 0xc) = ~uVar166 & auVar138._12_4_;
          uVar94 = *(uint *)((long)&uStack_834 + lVar60);
          uVar110 = *(uint *)((long)&uStack_830 + lVar60);
          uVar166 = *(uint *)((long)&uStack_82c + lVar60);
          *(uint *)(*(undefined1 (*) [16])local_238 + lVar60) =
               ~*(uint *)((long)&local_838 + lVar60) & auVar115._0_4_;
          *(uint *)((long)local_238 + lVar60 + 4) = ~uVar94 & auVar115._4_4_;
          *(uint *)((long)local_238 + lVar60 + 8) = ~uVar110 & auVar115._8_4_;
          *(uint *)((long)local_238 + lVar60 + 0xc) = ~uVar166 & auVar115._12_4_;
          lVar60 = lVar60 + 0x20;
          pVVar61 = local_f18;
          puVar65 = (undefined8 *)local_f58;
          pauVar51 = pauVar51 + 1;
        } while (lVar60 != 0x200);
        fVar76 = 0.0;
        fVar95 = 0.0;
        fVar101 = 0.0;
        fVar106 = 0.0;
        fVar111 = 0.0;
        fVar124 = 0.0;
        fVar129 = 0.0;
        fVar134 = 0.0;
        fVar137 = 0.0;
        fVar140 = 0.0;
        fVar141 = 0.0;
        fVar142 = 0.0;
        auVar143._0_12_ = ZEXT812(0);
        auVar143._12_4_ = 0;
        pauVar51 = (undefined1 (*) [16])local_638;
        pauVar64 = (undefined1 (*) [16])&local_438;
        pauVar49 = (undefined1 (*) [16])local_238;
        do {
          pauVar50 = pauVar51 + 2;
          auVar78 = minps(*pauVar49,*pauVar64);
          auVar114 = minps(*pauVar49,*pauVar51);
          auVar115 = minps(pauVar49[-1],pauVar64[-1]);
          auVar138 = minps(pauVar49[-1],pauVar51[-1]);
          fVar137 = fVar137 + auVar114._0_4_;
          fVar140 = fVar140 + auVar114._4_4_;
          fVar141 = fVar141 + auVar114._8_4_;
          fVar142 = fVar142 + auVar114._12_4_;
          fVar76 = fVar76 + auVar78._0_4_;
          fVar95 = fVar95 + auVar78._4_4_;
          fVar101 = fVar101 + auVar78._8_4_;
          fVar106 = fVar106 + auVar78._12_4_;
          auVar144._0_4_ = auVar143._0_4_ + auVar138._0_4_;
          auVar144._4_4_ = auVar143._4_4_ + auVar138._4_4_;
          auVar144._8_4_ = auVar143._8_4_ + auVar138._8_4_;
          auVar144._12_4_ = auVar143._12_4_ + auVar138._12_4_;
          fVar111 = fVar111 + auVar115._0_4_;
          fVar124 = fVar124 + auVar115._4_4_;
          fVar129 = fVar129 + auVar115._8_4_;
          fVar134 = fVar134 + auVar115._12_4_;
          pauVar51 = pauVar50;
          pauVar64 = pauVar64 + 2;
          pauVar49 = pauVar49 + 2;
          auVar143 = auVar144;
        } while (pauVar50 != (undefined1 (*) [16])&local_438);
        auVar146._4_4_ = -(uint)(fVar95 < fVar140);
        auVar146._0_4_ = -(uint)(fVar76 < fVar137);
        auVar146._8_4_ = -(uint)(fVar101 < fVar141);
        auVar146._12_4_ = -(uint)(fVar106 < fVar142);
        auVar149._4_4_ = -(uint)(fVar124 < auVar144._4_4_);
        auVar149._0_4_ = -(uint)(fVar111 < auVar144._0_4_);
        auVar149._8_4_ = -(uint)(fVar129 < auVar144._8_4_);
        auVar149._12_4_ = -(uint)(fVar134 < auVar144._12_4_);
        auVar78 = *(undefined1 (*) [16])param_2;
        auVar115 = *(undefined1 (*) [16])(param_2 + 0x10);
        auVar114 = packssdw(auVar149,auVar146);
        local_1248 = auVar77._0_2_;
        sStack_1246 = auVar77._2_2_;
        sStack_1244 = auVar77._4_2_;
        sStack_1242 = auVar77._6_2_;
        sStack_1240 = auVar77._8_2_;
        sStack_123e = auVar77._10_2_;
        sStack_123c = auVar77._12_2_;
        sStack_123a = auVar77._14_2_;
        auVar147._0_2_ = -(ushort)(auVar112._0_2_ < local_1248);
        auVar147._2_2_ = -(ushort)(auVar112._2_2_ < sStack_1246);
        auVar147._4_2_ = -(ushort)(auVar112._4_2_ < sStack_1244);
        auVar147._6_2_ = -(ushort)(auVar112._6_2_ < sStack_1242);
        auVar147._8_2_ = -(ushort)(auVar112._8_2_ < sStack_1240);
        auVar147._10_2_ = -(ushort)(auVar112._10_2_ < sStack_123e);
        auVar147._12_2_ = -(ushort)(auVar112._12_2_ < sStack_123c);
        auVar147._14_2_ = -(ushort)(auVar112._14_2_ < sStack_123a);
        auVar114 = ~(auVar147 ^ local_1258) & auVar114;
        auVar171._0_12_ = auVar114._0_12_;
        auVar171._12_2_ = auVar114._6_2_;
        auVar171._14_2_ = auVar114._6_2_;
        auVar170._12_4_ = auVar171._12_4_;
        auVar170._0_10_ = auVar114._0_10_;
        auVar170._10_2_ = auVar114._4_2_;
        auVar169._10_6_ = auVar170._10_6_;
        auVar169._0_8_ = auVar114._0_8_;
        auVar169._8_2_ = auVar114._4_2_;
        auVar45._4_8_ = auVar169._8_8_;
        auVar45._2_2_ = auVar114._2_2_;
        auVar45._0_2_ = auVar114._2_2_;
        uVar168 = CONCAT22(auVar114._0_2_,auVar114._0_2_);
        uVar94 = CONCAT22(auVar114._8_2_,auVar114._8_2_);
        auVar163._0_8_ = CONCAT26(auVar114._10_2_,CONCAT24(auVar114._10_2_,uVar94));
        auVar163._8_2_ = auVar114._12_2_;
        auVar163._10_2_ = auVar114._12_2_;
        auVar164._14_2_ = auVar114._14_2_;
        auVar164._12_2_ = auVar164._14_2_;
        auVar164._0_12_ = auVar163;
        auVar79._0_4_ = (uint)fVar76 & uVar94;
        uVar110 = (uint)((ulong)auVar163._0_8_ >> 0x20);
        auVar79._4_4_ = (uint)fVar95 & uVar110;
        uVar166 = auVar163._8_4_;
        auVar79._8_4_ = (uint)fVar101 & uVar166;
        uVar167 = auVar164._12_4_;
        auVar79._12_4_ = (uint)fVar106 & uVar167;
        auVar116._0_4_ = (uint)fVar111 & uVar168;
        uVar173 = auVar45._0_4_;
        auVar116._4_4_ = (uint)fVar124 & uVar173;
        uVar174 = auVar169._8_4_;
        auVar116._8_4_ = (uint)fVar129 & uVar174;
        auVar116._12_4_ = (uint)fVar134 & auVar170._12_4_;
        auVar172._0_4_ = ~uVar168 & (uint)auVar144._0_4_;
        auVar172._4_4_ = ~uVar173 & (uint)auVar144._4_4_;
        auVar172._8_4_ = ~uVar174 & (uint)auVar144._8_4_;
        auVar172._12_4_ = ~auVar170._12_4_ & (uint)auVar144._12_4_;
        auVar165._0_4_ = ~uVar94 & (uint)fVar137;
        auVar165._4_4_ = ~uVar110 & (uint)fVar140;
        auVar165._8_4_ = ~uVar166 & (uint)fVar141;
        auVar165._12_4_ = ~uVar167 & (uint)fVar142;
        auVar172 = auVar172 | auVar116;
        auVar165 = auVar165 | auVar79;
        auVar175._4_4_ = -(uint)(auVar172._4_4_ < auVar78._4_4_);
        auVar175._0_4_ = -(uint)(auVar172._0_4_ < auVar78._0_4_);
        auVar175._8_4_ = -(uint)(auVar172._8_4_ < auVar78._8_4_);
        auVar175._12_4_ = -(uint)(auVar172._12_4_ < auVar78._12_4_);
        auVar80._4_4_ = -(uint)(auVar165._4_4_ < auVar115._4_4_);
        auVar80._0_4_ = -(uint)(auVar165._0_4_ < auVar115._0_4_);
        auVar80._8_4_ = -(uint)(auVar165._8_4_ < auVar115._8_4_);
        auVar80._12_4_ = -(uint)(auVar165._12_4_ < auVar115._12_4_);
        auVar138 = packssdw(auVar175,auVar80);
        if ((((((((((((((((auVar138 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar138 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar138 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar138 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar138 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar138 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar138 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar138 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar138 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar138 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar138 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar138 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar138 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar138 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar138 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            auVar138[0xf] < '\0') {
          auVar139 = (undefined1  [16])0x0;
          lVar60 = 0;
          auVar145 = (undefined1  [16])0x0;
          iVar47 = 0;
          do {
            lVar48 = lVar60 * 2;
            lVar67 = lVar60 * 2;
            pVVar61 = this + lVar60 * 2;
            auVar81._4_4_ =
                 -(uint)((float)(*(uint *)(&sStack_444 + lVar60) & uVar173 |
                                ~uVar173 & *(uint *)((long)auStack_644 + lVar48)) <
                        *(float *)(pVVar61 + 4));
            auVar81._0_4_ =
                 -(uint)((float)(*(uint *)((VInt16 *)&local_448 + lVar60 * 2) & uVar168 |
                                ~uVar168 & *(uint *)(local_648 + lVar48)) < *(float *)pVVar61);
            auVar81._8_4_ =
                 -(uint)((float)(*(uint *)(&sStack_440 + lVar60) & uVar174 |
                                ~uVar174 & *(uint *)((long)auStack_644 + lVar48 + 4)) <
                        *(float *)(pVVar61 + 8));
            auVar81._12_4_ =
                 -(uint)((float)(*(uint *)(&sStack_43c + lVar60) & auVar170._12_4_ |
                                ~auVar170._12_4_ & *(uint *)((long)local_638 + lVar48 + -4)) <
                        *(float *)(pVVar61 + 0xc));
            pIVar54 = param_6 + lVar60;
            pVVar61 = this + lVar60 * 2 + 0x10;
            auVar117._4_4_ =
                 -(uint)((float)(~uVar110 & *(uint *)((long)local_638 + lVar67 + 4) |
                                *(uint *)(asStack_434 + lVar60) & uVar110) < *(float *)(pVVar61 + 4)
                        );
            auVar117._0_4_ =
                 -(uint)((float)(~uVar94 & *(uint *)((long)local_638 + lVar67) |
                                *(uint *)((long)&local_438 + lVar60 * 2) & uVar94) <
                        *(float *)pVVar61);
            auVar117._8_4_ =
                 -(uint)((float)(~uVar166 & *(uint *)((long)local_638 + lVar67 + 8) |
                                *(uint *)(asStack_430 + lVar60) & uVar166) < *(float *)(pVVar61 + 8)
                        );
            auVar117._12_4_ =
                 -(uint)((float)(~uVar167 & *(uint *)((long)local_638 + lVar67 + 0xc) |
                                *(uint *)(asStack_42c + lVar60) & uVar167) <
                        *(float *)(pVVar61 + 0xc));
            auVar82 = packssdw(auVar81,auVar117);
            pauVar51 = (undefined1 (*) [16])(*(undefined1 (*) [16])local_cb8 + lVar60);
            lVar60 = lVar60 + 0x10;
            auVar82 = *(undefined1 (*) [16])pIVar54 & __LC76 |
                      ~*(undefined1 (*) [16])pIVar54 & ~auVar82 & *pauVar51;
            iVar177 = CONCAT22(sVar159,auVar82._8_2_);
            auVar178._0_8_ = CONCAT26(sVar160,CONCAT24(auVar82._10_2_,iVar177));
            auVar178._8_2_ = auVar82._12_2_;
            auVar178._10_2_ = sVar161;
            auVar179._12_2_ = auVar82._14_2_;
            auVar179._0_12_ = auVar178;
            auVar179._14_2_ = sVar162;
            auVar85._0_12_ = auVar82._0_12_;
            auVar85._12_2_ = auVar82._6_2_;
            auVar85._14_2_ = sVar158;
            auVar84._12_4_ = auVar85._12_4_;
            auVar84._0_10_ = auVar82._0_10_;
            auVar84._10_2_ = sVar157;
            auVar83._10_6_ = auVar84._10_6_;
            auVar83._0_8_ = auVar82._0_8_;
            auVar83._8_2_ = auVar82._4_2_;
            auVar46._4_8_ = auVar83._8_8_;
            auVar46._2_2_ = sVar71;
            auVar46._0_2_ = auVar82._2_2_;
            auVar180._0_4_ = iVar177 << iVar47;
            auVar180._4_4_ = (undefined4)((ulong)auVar178._0_8_ >> 0x20);
            auVar180._8_4_ = auVar178._8_4_;
            auVar180._12_4_ = auVar179._12_4_;
            auVar86._0_4_ = CONCAT22(sVar107,auVar82._0_2_) << iVar47;
            auVar86._4_4_ = auVar46._0_4_;
            auVar86._8_4_ = auVar83._8_4_;
            auVar86._12_4_ = auVar84._12_4_;
            auVar139 = auVar139 | auVar180;
            auVar145 = auVar145 | auVar86;
            iVar47 = iVar47 + 2;
          } while (lVar60 != 0x100);
          auVar82 = minps(auVar78,auVar172);
          auVar78 = minps(auVar115,auVar165);
          *(undefined1 (*) [16])param_2 = auVar82;
          local_1108 = auVar112 & auVar138 | ~auVar138 & local_1108;
          auVar121._0_12_ = auVar138._0_12_;
          auVar121._12_2_ = auVar138._6_2_;
          auVar121._14_2_ = auVar138._6_2_;
          auVar120._12_4_ = auVar121._12_4_;
          auVar120._0_10_ = auVar138._0_10_;
          auVar120._10_2_ = auVar138._4_2_;
          auVar119._10_6_ = auVar120._10_6_;
          auVar119._0_8_ = auVar138._0_8_;
          auVar119._8_2_ = auVar138._4_2_;
          auVar118._8_8_ = auVar119._8_8_;
          auVar118._6_2_ = auVar138._2_2_;
          auVar118._4_2_ = auVar138._2_2_;
          auVar118._0_2_ = auVar138._0_2_;
          auVar118._2_2_ = auVar118._0_2_;
          auVar87._2_2_ = auVar138._8_2_;
          auVar87._0_2_ = auVar138._8_2_;
          auVar87._4_2_ = auVar138._10_2_;
          auVar87._6_2_ = auVar138._10_2_;
          auVar87._8_2_ = auVar138._12_2_;
          auVar87._10_2_ = auVar138._12_2_;
          auVar87._14_2_ = auVar138._14_2_;
          auVar87._12_2_ = auVar87._14_2_;
          *(undefined1 (*) [16])(param_2 + 0x10) = auVar78;
          auVar44._4_4_ = uVar75;
          auVar44._0_4_ = uVar75;
          auVar44._8_4_ = uVar75;
          auVar44._12_4_ = uVar75;
          local_10c8 = auVar139 & auVar87 | ~auVar87 & local_10c8;
          local_10d8 = auVar145 & auVar118 | ~auVar118 & local_10d8;
          local_1118 = auVar44 & auVar138 | ~auVar138 & local_1118;
          local_1148 = auVar114 & auVar138 | ~auVar138 & local_1148;
          local_10f8 = auVar77 & auVar138 | ~auVar138 & local_10f8;
          local_1158 = auVar138 | local_1158;
        }
        local_1298 = local_1298 + 1;
      } while (local_1298 != (undefined1 (*) [16])local_a38 + (int)uVar74);
    }
    local_11e8 = local_11e8 + 1;
    local_11a0 = local_11a0 + 3;
    if (local_11e8 == 8) {
      lVar60 = 0;
      do {
        if (*(short *)(local_1158 + lVar60 * 2) != 0) {
          uVar70 = *(ushort *)(local_1108 + lVar60 * 2);
          sStack_444 = *(short *)(local_ff8 + lVar60 * 2);
          uStack_244 = CONCAT22(uStack_244._2_2_,uVar70) & 0xffff000f;
          local_448 = (short)*(undefined4 *)(local_1018 + lVar60 * 2);
          uStack_446 = (short)*(undefined4 *)(local_1008 + lVar60 * 2);
          local_248 = CONCAT22((short)((int)(uint)uVar70 >> 5),(short)((int)(uint)uVar70 >> 10)) &
                      0xf000f;
          if (*(short *)(local_1148 + lVar60 * 2) == 0) {
            EmitTModeBlock(param_1,(ushort *)this,(ushort *)&local_448,
                           *(int *)(local_10d8 +
                                   (long)((int)(uint)lVar60 >> 2) * 0x10 +
                                   (ulong)((uint)lVar60 & 3) * 4),
                           *(ushort *)(local_1118 + lVar60 * 2),false);
          }
          else {
            iVar47 = 0;
            uVar57 = 0;
            uVar68 = 0;
            do {
              bVar20 = (byte)iVar47;
              iVar47 = iVar47 + 1;
              uVar62 = (ulong)(*(int *)(local_10d8 +
                                       (long)((int)(uint)lVar60 >> 2) * 0x10 +
                                       (ulong)((uint)lVar60 & 3) * 4) >> (bVar20 * '\x02' & 0x1f) &
                              3);
              uVar57 = uVar57 | (uint)*(ushort *)
                                       ((long)&EncodeVirtualTModePunchthrough(unsigned_char*,cvtt::ParallelMath::Float&,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::Options_const&)
                                               ::selectorRemapSector + uVar62 * 2) <<
                                (bVar20 & 0x1f);
              uVar68 = uVar68 | (uint)*(ushort *)
                                       ((long)&EncodeVirtualTModePunchthrough(unsigned_char*,cvtt::ParallelMath::Float&,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::Options_const&)
                                               ::selectorRemapSign + uVar62 * 2) << (bVar20 & 0x1f);
            } while (iVar47 != 0x10);
            local_a38[1] = *(undefined2 *)(local_10f8 + lVar60 * 2);
            local_a38[0] = uVar70;
            EmitHModeBlock(param_1,local_a38,(ushort)uVar57,(ushort)uVar68,
                           *(ushort *)(local_1118 + lVar60 * 2),false);
          }
        }
        param_1 = param_1 + 8;
        lVar60 = lVar60 + 1;
      } while (lVar60 != 8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::EmitETC1Block(unsigned char*, int, int, int const (*) [3], int
   const*, unsigned short const*, bool) */

void cvtt::Internal::ETCComputer::EmitETC1Block
               (uchar *param_1,int param_2,int param_3,int *param_4,int *param_5,ushort *param_6,
               bool param_7)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58 [3];
  byte local_4c [28];
  long local_30;
  
  piVar9 = (int *)&local_98;
  iVar6 = *param_4;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = param_4[1];
  iVar11 = param_4[2];
  if (param_3 == 0) {
    uVar5 = param_4[5] << 8 |
            iVar11 << 0xc | param_4[4] << 0x10 | iVar3 << 0x14 | iVar6 << 0x1c | param_4[3] << 0x18;
  }
  else {
    uVar5 = (param_4[5] - iVar11 & 7U) << 8 |
            iVar6 << 0x1b | iVar3 << 0x13 | iVar11 << 0xb | (param_4[3] - iVar6 & 7U) << 0x18 |
            (param_4[4] - iVar3 & 7U) << 0x10;
  }
  local_4c[0] = 3;
  local_4c[1] = 2;
  local_4c[2] = 0;
  local_4c[3] = 1;
  uVar2 = *param_6;
  uVar5 = *param_5 << 5 | param_5[1] << 2 | uVar5;
  if (!param_7) {
    uVar5 = param_3 * 2 | uVar5;
  }
  iVar6 = 0;
  piVar8 = &g_flipTables + (long)param_2 * 0x10;
  uVar5 = uVar5 | param_2;
  do {
    iVar3 = *piVar8;
    piVar8 = piVar8 + 1;
    bVar4 = (byte)iVar6;
    iVar6 = iVar6 + 2;
    local_4c[(long)iVar3 + 4] = local_4c[(int)(uint)uVar2 >> (bVar4 & 0x1f) & 3];
  } while (iVar6 != 0x10);
  uVar2 = param_6[1];
  piVar8 = &DAT_00109c20 + (long)param_2 * 0x10;
  iVar6 = 0;
  do {
    iVar3 = *piVar8;
    iVar11 = iVar6 + 2;
    piVar8 = piVar8 + 1;
    local_4c[(long)iVar3 + 4] = local_4c[(int)(uint)uVar2 >> ((byte)iVar6 & 0x1f) & 3];
    iVar6 = iVar11;
  } while (iVar11 != 0x10);
  lVar7 = 0;
  uVar10 = 0;
  local_98 = __LC77;
  uStack_90 = _UNK_0010b478;
  local_88 = __LC78;
  uStack_80 = _UNK_0010b488;
  local_78 = __LC79;
  uStack_70 = _UNK_0010b498;
  local_68 = __LC80;
  uStack_60 = _UNK_0010b4a8;
  do {
    lVar1 = lVar7 * 4;
    bVar4 = (byte)lVar7;
    lVar7 = lVar7 + 1;
    uVar10 = uVar10 | (local_4c[(long)*(int *)((long)&local_98 + lVar1) + 4] & 1) << (bVar4 & 0x1f);
  } while (lVar7 != 0x10);
  bVar4 = 0x10;
  do {
    iVar6 = *piVar9;
    piVar9 = piVar9 + 1;
    uVar10 = uVar10 | ((int)(uint)local_4c[(long)iVar6 + 4] >> 1 & 1U) << (bVar4 & 0x1f);
    bVar4 = bVar4 + 1;
  } while (local_58 != piVar9);
  *(ulong *)param_1 =
       (((((((ulong)(uVar10 & 0xff) << 8 | (ulong)(uVar10 >> 8 & 0xff)) << 8 |
           (ulong)(uVar10 >> 0x10 & 0xff)) << 8 | (ulong)(uVar10 >> 0x18)) << 8 |
         (ulong)uVar5 & 0xff) << 8 | (ulong)(byte)(uVar5 >> 8)) << 8 | (ulong)(uVar5 >> 0x10) & 0xff
       ) << 8 | (ulong)(uVar5 >> 0x18);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::CompressETC1BlockInternal(cvtt::ParallelMath::Float&, unsigned
   char*, cvtt::ParallelMath::VInt16<2> const (*) [3], cvtt::ParallelMath::Float const (*) [3],
   cvtt::Internal::ETCComputer::DifferentialResolveStorage&, cvtt::Options const&, bool) */

void cvtt::Internal::ETCComputer::CompressETC1BlockInternal
               (Float *param_1,uchar *param_2,VInt16<2> *param_3,Float *param_4,
               DifferentialResolveStorage *param_5,Options *param_6,bool param_7)

{
  VInt16<2> *pVVar1;
  short *psVar2;
  DifferentialResolveStorage *pDVar3;
  DifferentialResolveStorage *pDVar4;
  short sVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  Int16CompFlag *pIVar18;
  ushort *puVar19;
  Int16CompFlag *pIVar20;
  uint uVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  Float *pFVar24;
  undefined8 *puVar25;
  short sVar26;
  long lVar27;
  Int16CompFlag *pIVar28;
  long lVar29;
  ulong uVar30;
  undefined1 *puVar31;
  int *piVar32;
  long lVar33;
  undefined1 (*pauVar34) [16];
  int *piVar35;
  long in_FS_OFFSET;
  bool bVar36;
  ushort uVar37;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  undefined1 auVar38 [16];
  ushort uVar48;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  short sVar52;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  undefined1 auVar53 [16];
  short sVar61;
  undefined1 auVar54 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  short *local_1ae8;
  long local_1ad8;
  long local_1a88;
  uint local_1a6c;
  VInt16 local_19e8 [16];
  undefined1 local_19d8 [16];
  Int16CompFlag local_19c8 [16];
  ushort local_19b8 [4];
  short sStack_19b0;
  short sStack_19ae;
  short sStack_19ac;
  short sStack_19aa;
  undefined1 local_19a8 [16];
  undefined8 local_1998;
  undefined8 uStack_1990;
  ushort local_1988 [8];
  VInt16 local_1978 [16];
  undefined1 local_1968 [16];
  VInt16 local_1958 [16];
  undefined1 local_1948 [16];
  VInt16 local_1938 [16];
  undefined1 local_1928 [16];
  undefined1 local_1918 [16];
  undefined1 local_1908 [16];
  undefined1 local_18f8 [16];
  undefined1 local_18e8 [16];
  undefined1 local_18d8 [16];
  undefined1 local_18c8 [16];
  VInt16 local_18b8 [2];
  undefined2 uStack_18b6;
  VInt16 aVStack_18b4 [2];
  undefined2 uStack_18b2;
  VInt16 aVStack_18b0 [2];
  undefined2 uStack_18ae;
  VInt16 aVStack_18ac [2];
  undefined2 uStack_18aa;
  undefined1 local_18a8 [16];
  undefined1 local_1898 [16];
  undefined4 local_1888;
  undefined1 auStack_1884 [12];
  undefined1 local_1878 [16];
  undefined1 local_1858 [8];
  float fStack_1850;
  float fStack_184c;
  undefined1 local_1848 [8];
  float fStack_1840;
  float fStack_183c;
  undefined1 local_1838 [8];
  float fStack_1830;
  float fStack_182c;
  undefined1 local_1828 [8];
  float fStack_1820;
  float fStack_181c;
  undefined1 local_1818 [192];
  undefined1 local_1758 [16];
  undefined1 local_1748 [80] [16];
  undefined1 local_1248 [1536];
  undefined8 local_c48 [385];
  long local_40;
  
  piVar17 = &DAT_00109c20;
  lVar27 = 0;
  bVar36 = false;
  lVar33 = *(long *)(in_FS_OFFSET + 0x28);
  local_1978[0] = (VInt16)0x0;
  local_1978[1] = (VInt16)0x0;
  local_1978[2] = (VInt16)0x0;
  local_1978[3] = (VInt16)0x0;
  local_1978[4] = (VInt16)0x0;
  local_1978[5] = (VInt16)0x0;
  local_1978[6] = (VInt16)0x0;
  local_1978[7] = (VInt16)0x0;
  local_1978[8] = (VInt16)0x0;
  local_1978[9] = (VInt16)0x0;
  local_1978[10] = (VInt16)0x0;
  local_1978[0xb] = (VInt16)0x0;
  local_1978[0xc] = (VInt16)0x0;
  local_1978[0xd] = (VInt16)0x0;
  local_1978[0xe] = (VInt16)0x0;
  local_1978[0xf] = (VInt16)0x0;
  local_1968 = (undefined1  [16])0x0;
  local_1958[0] = (VInt16)0x0;
  local_1958[1] = (VInt16)0x0;
  local_1958[2] = (VInt16)0x0;
  local_1958[3] = (VInt16)0x0;
  local_1958[4] = (VInt16)0x0;
  local_1958[5] = (VInt16)0x0;
  local_1958[6] = (VInt16)0x0;
  local_1958[7] = (VInt16)0x0;
  local_1958[8] = (VInt16)0x0;
  local_1958[9] = (VInt16)0x0;
  local_1958[10] = (VInt16)0x0;
  local_1958[0xb] = (VInt16)0x0;
  local_1958[0xc] = (VInt16)0x0;
  local_1958[0xd] = (VInt16)0x0;
  local_1958[0xe] = (VInt16)0x0;
  local_1958[0xf] = (VInt16)0x0;
  local_1948 = (undefined1  [16])0x0;
  local_1938[0] = (VInt16)0x0;
  local_1938[1] = (VInt16)0x0;
  local_1938[2] = (VInt16)0x0;
  local_1938[3] = (VInt16)0x0;
  local_1938[4] = (VInt16)0x0;
  local_1938[5] = (VInt16)0x0;
  local_1938[6] = (VInt16)0x0;
  local_1938[7] = (VInt16)0x0;
  local_1938[8] = (VInt16)0x0;
  local_1938[9] = (VInt16)0x0;
  local_1938[10] = (VInt16)0x0;
  local_1938[0xb] = (VInt16)0x0;
  local_1938[0xc] = (VInt16)0x0;
  local_1938[0xd] = (VInt16)0x0;
  local_1938[0xe] = (VInt16)0x0;
  local_1938[0xf] = (VInt16)0x0;
  local_1928 = (undefined1  [16])0x0;
  local_19e8[0] = (VInt16)0x0;
  local_19e8[1] = (VInt16)0x0;
  local_19e8[2] = (VInt16)0x0;
  local_19e8[3] = (VInt16)0x0;
  local_19e8[4] = (VInt16)0x0;
  local_19e8[5] = (VInt16)0x0;
  local_19e8[6] = (VInt16)0x0;
  local_19e8[7] = (VInt16)0x0;
  local_19e8[8] = (VInt16)0x0;
  local_19e8[9] = (VInt16)0x0;
  local_19e8[10] = (VInt16)0x0;
  local_19e8[0xb] = (VInt16)0x0;
  local_19e8[0xc] = (VInt16)0x0;
  local_19e8[0xd] = (VInt16)0x0;
  local_19e8[0xe] = (VInt16)0x0;
  local_19e8[0xf] = (VInt16)0x0;
  local_19d8 = (undefined1  [16])0x0;
  local_19c8[0] = (Int16CompFlag)0x0;
  local_19c8[1] = (Int16CompFlag)0x0;
  local_19c8[2] = (Int16CompFlag)0x0;
  local_19c8[3] = (Int16CompFlag)0x0;
  local_19c8[4] = (Int16CompFlag)0x0;
  local_19c8[5] = (Int16CompFlag)0x0;
  local_19c8[6] = (Int16CompFlag)0x0;
  local_19c8[7] = (Int16CompFlag)0x0;
  local_19c8[8] = (Int16CompFlag)0x0;
  local_19c8[9] = (Int16CompFlag)0x0;
  local_19c8[10] = (Int16CompFlag)0x0;
  local_19c8[0xb] = (Int16CompFlag)0x0;
  local_19c8[0xc] = (Int16CompFlag)0x0;
  local_19c8[0xd] = (Int16CompFlag)0x0;
  local_19c8[0xe] = (Int16CompFlag)0x0;
  local_19c8[0xf] = (Int16CompFlag)0x0;
  while( true ) {
    lVar29 = 0;
    pauVar34 = (undefined1 (*) [16])(local_1818 + lVar27);
    lVar16 = lVar27;
    piVar35 = piVar17;
    while( true ) {
      piVar32 = piVar35 + -8;
      *pauVar34 = (undefined1  [16])0x0;
      pauVar34[1] = (undefined1  [16])0x0;
      pauVar34[2] = (undefined1  [16])0x0;
      puVar31 = local_1248 + lVar16 * 8;
      puVar25 = local_c48 + lVar16 * 2;
      do {
        iVar14 = *piVar32;
        lVar15 = 0;
        pFVar24 = param_4 + (long)iVar14 * 0x60;
        pauVar22 = pauVar34;
        do {
          pVVar1 = param_3 + lVar15 + (long)iVar14 * 0x30;
          sVar26 = *(short *)pVVar1;
          sVar5 = *(short *)(pVVar1 + 2);
          sVar52 = *(short *)(pVVar1 + 4);
          sVar55 = *(short *)(pVVar1 + 6);
          sVar56 = *(short *)(pVVar1 + 8);
          sVar57 = *(short *)(pVVar1 + 10);
          sVar58 = *(short *)(pVVar1 + 0xc);
          sVar59 = *(short *)(pVVar1 + 0xe);
          psVar2 = (short *)(puVar31 + lVar15);
          *psVar2 = sVar26;
          psVar2[1] = sVar5;
          psVar2[2] = sVar52;
          psVar2[3] = sVar55;
          psVar2[4] = sVar56;
          psVar2[5] = sVar57;
          psVar2[6] = sVar58;
          psVar2[7] = sVar59;
          sVar60 = *(short *)(*pauVar22 + 2);
          sVar61 = *(short *)(*pauVar22 + 4);
          sVar7 = *(short *)(*pauVar22 + 6);
          sVar8 = *(short *)(*pauVar22 + 8);
          sVar9 = *(short *)(*pauVar22 + 10);
          sVar10 = *(short *)(*pauVar22 + 0xc);
          sVar11 = *(short *)(*pauVar22 + 0xe);
          lVar15 = lVar15 + 0x10;
          *(short *)*pauVar22 = sVar26 + *(short *)*pauVar22;
          *(short *)(*pauVar22 + 2) = sVar5 + sVar60;
          *(short *)(*pauVar22 + 4) = sVar52 + sVar61;
          *(short *)(*pauVar22 + 6) = sVar55 + sVar7;
          *(short *)(*pauVar22 + 8) = sVar56 + sVar8;
          *(short *)(*pauVar22 + 10) = sVar57 + sVar9;
          *(short *)(*pauVar22 + 0xc) = sVar58 + sVar10;
          *(short *)(*pauVar22 + 0xe) = sVar59 + sVar11;
          pauVar22 = pauVar22 + 1;
        } while (lVar15 != 0x30);
        uVar12 = *(undefined8 *)(pFVar24 + 8);
        piVar32 = piVar32 + 1;
        puVar31 = puVar31 + 0x30;
        *puVar25 = *(undefined8 *)pFVar24;
        puVar25[1] = uVar12;
        uVar12 = *(undefined8 *)(pFVar24 + 0x18);
        puVar25[2] = *(undefined8 *)(pFVar24 + 0x10);
        puVar25[3] = uVar12;
        uVar12 = *(undefined8 *)(pFVar24 + 0x28);
        puVar25[4] = *(undefined8 *)(pFVar24 + 0x20);
        puVar25[5] = uVar12;
        uVar12 = *(undefined8 *)(pFVar24 + 0x38);
        puVar25[6] = *(undefined8 *)(pFVar24 + 0x30);
        puVar25[7] = uVar12;
        uVar12 = *(undefined8 *)(pFVar24 + 0x48);
        puVar25[8] = *(undefined8 *)(pFVar24 + 0x40);
        puVar25[9] = uVar12;
        uVar12 = *(undefined8 *)(pFVar24 + 0x58);
        puVar25[10] = *(undefined8 *)(pFVar24 + 0x50);
        puVar25[0xb] = uVar12;
        puVar25 = puVar25 + 0xc;
      } while (piVar35 != piVar32);
      pauVar34 = pauVar34 + 3;
      piVar35 = piVar35 + 8;
      lVar16 = lVar16 + 0x30;
      if (lVar29 == 0x180) break;
      lVar29 = 0x180;
    }
    lVar27 = lVar27 + 0x60;
    piVar17 = piVar17 + 0x10;
    if (bVar36) break;
    bVar36 = true;
  }
  local_40 = lVar33;
  if ((CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
       ::modifierTables == '\0') && (iVar14 = __cxa_guard_acquire(), iVar14 != 0)) {
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._0_8_ = __LC81;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._8_8_ = _UNK_0010b4b8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._16_8_ = __LC82;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._24_8_ = _UNK_0010b4c8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._32_8_ = __LC76;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._40_8_ = _UNK_0010b3b8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._48_8_ = __LC83;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._56_8_ = _UNK_0010b408;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._64_8_ = __LC84;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._72_8_ = _UNK_0010b4d8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._80_8_ = __LC85;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._88_8_ = _UNK_0010b2f8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._96_8_ = __LC86;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._104_8_ = _UNK_0010b4e8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._112_8_ = __LC87;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._120_8_ = _UNK_0010b378;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._128_8_ = __LC88;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._136_8_ = _UNK_0010b4f8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._144_8_ = __LC89;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._152_8_ = _UNK_0010b508;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._160_8_ = __LC90;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._168_8_ = _UNK_0010b518;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._176_8_ = __LC91;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._184_8_ = _UNK_0010b528;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._192_8_ = __LC92;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._200_8_ = _UNK_0010b538;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._208_8_ = __LC93;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._216_8_ = _UNK_0010b548;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._224_8_ = __LC94;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._232_8_ = _UNK_0010b558;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._240_8_ = __LC95;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._248_8_ = _UNK_0010b568;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._256_8_ = __LC96;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._264_8_ = _UNK_0010b578;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._272_8_ = __LC97;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._280_8_ = _UNK_0010b588;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._288_8_ = __LC98;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._296_8_ = _UNK_0010b598;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._304_8_ = __LC99;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._312_8_ = _UNK_0010b5a8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._320_8_ = __LC100;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._328_8_ = _UNK_0010b5b8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._336_8_ = __LC101;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._344_8_ = _UNK_0010b5c8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._352_8_ = __LC102;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._360_8_ = _UNK_0010b5d8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._368_8_ = __LC103;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._376_8_ = _UNK_0010b5e8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._384_8_ = __LC104;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._392_8_ = _UNK_0010b5f8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._400_8_ = __LC105;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._408_8_ = _UNK_0010b608;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._416_8_ = __LC106;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._424_8_ = _UNK_0010b618;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._432_8_ = __LC107;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._440_8_ = _UNK_0010b628;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._448_8_ = __LC108;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._456_8_ = _UNK_0010b638;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._464_8_ = __LC109;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._472_8_ = _UNK_0010b648;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._480_8_ = __LC110;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._488_8_ = _UNK_0010b658;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._496_8_ = __LC111;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._504_8_ = _UNK_0010b668;
    __cxa_guard_release();
  }
  lVar33 = 0;
  uVar13 = *(uint *)param_6;
  uVar23 = 0;
LAB_0010733e:
  _local_1848 = __LC3;
  *(undefined1 (*) [16])(param_5 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
  _local_1858 = _local_1848;
  _local_1828 = _local_1848;
  _local_1838 = _local_1848;
  local_1918 = (undefined1  [16])0x0;
  local_1908 = (undefined1  [16])0x0;
  local_18f8 = (undefined1  [16])0x0;
  local_18e8 = (undefined1  [16])0x0;
  local_18d8 = (undefined1  [16])0x0;
  local_18c8 = (undefined1  [16])0x0;
  local_1a6c = (uint)param_7;
LAB_001073db:
  local_1a88 = 0;
  puVar31 = local_1818 + lVar33;
  lVar27 = lVar33;
LAB_00107400:
  local_1ae8 = (short *)Tables::ETC1::g_potentialOffsets4;
  local_1ad8 = 0;
  sVar26 = 0x39;
  do {
    uVar21 = (uint)sVar26;
    if (0 < sVar26) {
      lVar16 = 0;
      do {
        sVar5 = *(short *)((long)local_1ae8 + lVar16 + 2);
        lVar29 = 0;
        if ((uVar13 & 0x400) == 0) {
          do {
            psVar2 = (short *)(puVar31 + lVar29);
            sVar55 = (ushort)(-1 < (short)(*psVar2 + sVar5)) * (*psVar2 + sVar5);
            sVar52 = (ushort)(-1 < (short)(psVar2[1] + sVar5)) * (psVar2[1] + sVar5);
            sVar56 = (ushort)(-1 < (short)(psVar2[2] + sVar5)) * (psVar2[2] + sVar5);
            sVar57 = (ushort)(-1 < (short)(psVar2[3] + sVar5)) * (psVar2[3] + sVar5);
            sVar58 = (ushort)(-1 < (short)(psVar2[4] + sVar5)) * (psVar2[4] + sVar5);
            sVar59 = (ushort)(-1 < (short)(psVar2[5] + sVar5)) * (psVar2[5] + sVar5);
            sVar60 = (ushort)(-1 < (short)(psVar2[6] + sVar5)) * (psVar2[6] + sVar5);
            sVar61 = (ushort)(-1 < (short)(psVar2[7] + sVar5)) * (psVar2[7] + sVar5);
            auVar38._0_2_ =
                 (ushort)(__LC112 < sVar55) * __LC112 | (ushort)(__LC112 >= sVar55) * sVar55;
            auVar38._2_2_ =
                 (ushort)(_UNK_0010b3f2 < sVar52) * _UNK_0010b3f2 |
                 (ushort)(_UNK_0010b3f2 >= sVar52) * sVar52;
            auVar38._4_2_ =
                 (ushort)(_UNK_0010b3f4 < sVar56) * _UNK_0010b3f4 |
                 (ushort)(_UNK_0010b3f4 >= sVar56) * sVar56;
            auVar38._6_2_ =
                 (ushort)(_UNK_0010b3f6 < sVar57) * _UNK_0010b3f6 |
                 (ushort)(_UNK_0010b3f6 >= sVar57) * sVar57;
            auVar38._8_2_ =
                 (ushort)(_UNK_0010b3f8 < sVar58) * _UNK_0010b3f8 |
                 (ushort)(_UNK_0010b3f8 >= sVar58) * sVar58;
            auVar38._10_2_ =
                 (ushort)(_UNK_0010b3fa < sVar59) * _UNK_0010b3fa |
                 (ushort)(_UNK_0010b3fa >= sVar59) * sVar59;
            auVar38._12_2_ =
                 (ushort)(_UNK_0010b3fc < sVar60) * _UNK_0010b3fc |
                 (ushort)(_UNK_0010b3fc >= sVar60) * sVar60;
            auVar38._14_2_ =
                 (ushort)(_UNK_0010b3fe < sVar61) * _UNK_0010b3fe |
                 (ushort)(_UNK_0010b3fe >= sVar61) * sVar61;
            auVar53 = psllw(auVar38,5);
            sVar52 = auVar53._0_2_ + (auVar38._0_2_ >> 3);
            sVar55 = auVar53._2_2_ + (auVar38._2_2_ >> 3);
            sVar56 = auVar53._4_2_ + (auVar38._4_2_ >> 3);
            sVar57 = auVar53._6_2_ + (auVar38._6_2_ >> 3);
            sVar58 = auVar53._8_2_ + (auVar38._8_2_ >> 3);
            sVar59 = auVar53._10_2_ + (auVar38._10_2_ >> 3);
            sVar60 = auVar53._12_2_ + (auVar38._12_2_ >> 3);
            sVar61 = auVar53._14_2_ + (auVar38._14_2_ >> 3);
            if (local_1a6c == 1) {
              uVar37 = (ushort)((__LC70 - auVar38._0_2_) + sVar52) >> 0xb;
              uVar42 = (ushort)((_UNK_0010b442 - auVar38._2_2_) + sVar55) >> 0xb;
              uVar43 = (ushort)((_UNK_0010b444 - auVar38._4_2_) + sVar56) >> 0xb;
              uVar44 = (ushort)((_UNK_0010b446 - auVar38._6_2_) + sVar57) >> 0xb;
              uVar45 = (ushort)((_UNK_0010b448 - auVar38._8_2_) + sVar58) >> 0xb;
              uVar46 = (ushort)((_UNK_0010b44a - auVar38._10_2_) + sVar59) >> 0xb;
              uVar47 = (ushort)((_UNK_0010b44c - auVar38._12_2_) + sVar60) >> 0xb;
              uVar48 = (ushort)((_UNK_0010b44e - auVar38._14_2_) + sVar61) >> 0xb;
            }
            else {
              auVar38 = psllw(auVar38,1);
              uVar37 = (ushort)((__LC113 - auVar38._0_2_) + sVar52) >> 0xc;
              uVar42 = (ushort)((_UNK_0010b672 - auVar38._2_2_) + sVar55) >> 0xc;
              uVar43 = (ushort)((_UNK_0010b674 - auVar38._4_2_) + sVar56) >> 0xc;
              uVar44 = (ushort)((_UNK_0010b676 - auVar38._6_2_) + sVar57) >> 0xc;
              uVar45 = (ushort)((_UNK_0010b678 - auVar38._8_2_) + sVar58) >> 0xc;
              uVar46 = (ushort)((_UNK_0010b67a - auVar38._10_2_) + sVar59) >> 0xc;
              uVar47 = (ushort)((_UNK_0010b67c - auVar38._12_2_) + sVar60) >> 0xc;
              uVar48 = (ushort)((_UNK_0010b67e - auVar38._14_2_) + sVar61) >> 0xc;
            }
            *(ushort *)(local_18b8 + lVar29) = uVar37;
            *(ushort *)(local_18b8 + lVar29 + 2) = uVar42;
            *(ushort *)(local_18b8 + lVar29 + 4) = uVar43;
            *(ushort *)(local_18b8 + lVar29 + 6) = uVar44;
            *(ushort *)(local_18b8 + lVar29 + 8) = uVar45;
            *(ushort *)(local_18b8 + lVar29 + 10) = uVar46;
            *(ushort *)(local_18b8 + lVar29 + 0xc) = uVar47;
            *(ushort *)(local_18b8 + lVar29 + 0xe) = uVar48;
            lVar29 = lVar29 + 0x10;
          } while (lVar29 != 0x30);
        }
        else {
          do {
            psVar2 = (short *)(puVar31 + lVar29);
            sVar61 = (ushort)(-1 < (short)(*psVar2 + sVar5)) * (*psVar2 + sVar5);
            sVar60 = (ushort)(-1 < (short)(psVar2[1] + sVar5)) * (psVar2[1] + sVar5);
            sVar59 = (ushort)(-1 < (short)(psVar2[2] + sVar5)) * (psVar2[2] + sVar5);
            sVar58 = (ushort)(-1 < (short)(psVar2[3] + sVar5)) * (psVar2[3] + sVar5);
            sVar57 = (ushort)(-1 < (short)(psVar2[4] + sVar5)) * (psVar2[4] + sVar5);
            sVar56 = (ushort)(-1 < (short)(psVar2[5] + sVar5)) * (psVar2[5] + sVar5);
            sVar55 = (ushort)(-1 < (short)(psVar2[6] + sVar5)) * (psVar2[6] + sVar5);
            sVar52 = (ushort)(-1 < (short)(psVar2[7] + sVar5)) * (psVar2[7] + sVar5);
            *(ushort *)((VInt16 *)&local_1888 + lVar29) =
                 (ushort)(__LC112 < sVar61) * __LC112 | (ushort)(__LC112 >= sVar61) * sVar61;
            *(ushort *)(auStack_1884 + lVar29 + -2) =
                 (ushort)(_UNK_0010b3f2 < sVar60) * _UNK_0010b3f2 |
                 (ushort)(_UNK_0010b3f2 >= sVar60) * sVar60;
            *(ushort *)(auStack_1884 + lVar29) =
                 (ushort)(_UNK_0010b3f4 < sVar59) * _UNK_0010b3f4 |
                 (ushort)(_UNK_0010b3f4 >= sVar59) * sVar59;
            *(ushort *)(auStack_1884 + lVar29 + 2) =
                 (ushort)(_UNK_0010b3f6 < sVar58) * _UNK_0010b3f6 |
                 (ushort)(_UNK_0010b3f6 >= sVar58) * sVar58;
            *(ushort *)(auStack_1884 + lVar29 + 4) =
                 (ushort)(_UNK_0010b3f8 < sVar57) * _UNK_0010b3f8 |
                 (ushort)(_UNK_0010b3f8 >= sVar57) * sVar57;
            *(ushort *)(auStack_1884 + lVar29 + 6) =
                 (ushort)(_UNK_0010b3fa < sVar56) * _UNK_0010b3fa |
                 (ushort)(_UNK_0010b3fa >= sVar56) * sVar56;
            *(ushort *)(auStack_1884 + lVar29 + 8) =
                 (ushort)(_UNK_0010b3fc < sVar55) * _UNK_0010b3fc |
                 (ushort)(_UNK_0010b3fc >= sVar55) * sVar55;
            *(ushort *)(auStack_1884 + lVar29 + 10) =
                 (ushort)(_UNK_0010b3fe < sVar52) * _UNK_0010b3fe |
                 (ushort)(_UNK_0010b3fe >= sVar52) * sVar52;
            lVar29 = lVar29 + 0x10;
          } while (lVar29 != 0x30);
          if ((*(uint *)param_6 & 0x800) == 0) {
            ResolveHalfBlockFakeBT709RoundingFast
                      (local_18b8,(VInt16 *)&local_1888,SUB41(local_1a6c,0));
          }
          else {
            ResolveHalfBlockFakeBT709RoundingAccurate
                      (local_18b8,(VInt16 *)&local_1888,SUB41(local_1a6c,0));
          }
        }
        auVar38 = psllw(local_1898,10);
        auVar53 = psllw(local_18a8,5);
        *(undefined1 (*) [16])((Int16CompFlag *)local_1758 + lVar16 * 8) =
             auVar38 | auVar53 | _local_18b8;
        lVar16 = lVar16 + 2;
      } while ((ulong)uVar21 * 2 != lVar16);
    }
    lVar16 = 0;
    local_1ae8 = local_1ae8 + (long)sVar26 + 1;
    pIVar28 = (Int16CompFlag *)(local_1748 + (uVar21 - 2));
    do {
      pIVar18 = (Int16CompFlag *)local_1758 + lVar16;
      uVar37 = 1;
      if (1 < (int)uVar21) {
        do {
          if (*(short *)(local_1748[(long)(int)(uVar37 - 1) + -1] + lVar16) !=
              *(short *)(pIVar18 + 0x10)) {
            *(short *)(local_1748[(int)(uVar37 - 1)] + lVar16) = *(short *)(pIVar18 + 0x10);
            uVar37 = uVar37 + 1;
          }
          pIVar18 = pIVar18 + 0x10;
        } while (pIVar28 != pIVar18);
      }
      *(ushort *)((long)local_19b8 + lVar16) = uVar37;
      lVar16 = lVar16 + 2;
      pIVar28 = pIVar28 + 2;
    } while (lVar16 != 0x10);
    uVar21 = (uint)local_19b8[0];
    puVar19 = local_19b8 + 1;
    do {
      if (uVar21 < *puVar19) {
        uVar21 = (uint)*puVar19;
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != (ushort *)local_19a8);
    lVar16 = 0;
    do {
      uVar37 = local_19b8[lVar16];
      uVar30 = (ulong)uVar37;
      uVar6 = *(undefined2 *)((Int16CompFlag *)local_1758 + lVar16 * 2);
      if (uVar37 < uVar21) {
        pIVar28 = (Int16CompFlag *)local_1758 + lVar16 * 2 + uVar30 * 0x10;
        pIVar18 = (Int16CompFlag *)local_1758 + (lVar16 + (uVar30 + (uVar21 - uVar37)) * 8) * 2;
        if (((int)pIVar18 - (int)pIVar28 & 0x10U) != 0) {
          *(undefined2 *)pIVar28 = uVar6;
          pIVar28 = (Int16CompFlag *)(local_1748[uVar30] + lVar16 * 2);
          if ((Int16CompFlag *)(local_1748[uVar30] + lVar16 * 2) == pIVar18) goto LAB_001076e0;
        }
        do {
          *(undefined2 *)pIVar28 = uVar6;
          pIVar20 = pIVar28 + 0x20;
          *(undefined2 *)(pIVar28 + 0x10) = uVar6;
          pIVar28 = pIVar20;
        } while (pIVar20 != pIVar18);
      }
LAB_001076e0:
      lVar16 = lVar16 + 1;
    } while (lVar16 != 8);
    if (uVar21 != 0) {
      lVar16 = 0;
      do {
        while( true ) {
          local_1998 = *(undefined8 *)((Int16CompFlag *)local_1758 + lVar16 * 0x10);
          uStack_1990 = *(undefined8 *)(local_1748[lVar16 + -1] + 8);
          TestHalfBlock(&local_1888,local_19a8,local_1248 + lVar27 * 8,local_c48 + lVar27 * 2,
                        CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
                        ::modifierTables + local_1ad8 * 0x40,local_1a6c,param_6);
          if (local_1a6c == 0) break;
          lVar29 = 0;
          sVar59 = (short)lVar16;
          uVar37 = -(ushort)(sVar59 < (short)local_19b8[1]) & _UNK_0010b332;
          uVar42 = -(ushort)(sVar59 < (short)local_19b8[2]) & _UNK_0010b334;
          uVar43 = -(ushort)(sVar59 < (short)local_19b8[3]) & _UNK_0010b336;
          uVar44 = -(ushort)(sVar59 < sStack_19b0) & _UNK_0010b338;
          uVar45 = -(ushort)(sVar59 < sStack_19ae) & _UNK_0010b33a;
          uVar46 = -(ushort)(sVar59 < sStack_19ac) & _UNK_0010b33c;
          uVar47 = -(ushort)(sVar59 < sStack_19aa) & _UNK_0010b33e;
          pDVar3 = param_5 + local_1a88;
          sVar26 = *(short *)(pDVar3 + 2);
          sVar5 = *(short *)(pDVar3 + 4);
          sVar52 = *(short *)(pDVar3 + 6);
          sVar55 = *(short *)(pDVar3 + 8);
          sVar56 = *(short *)(pDVar3 + 10);
          sVar57 = *(short *)(pDVar3 + 0xc);
          sVar58 = *(short *)(pDVar3 + 0xe);
          pDVar4 = param_5 + local_1a88;
          *(ushort *)pDVar4 = (-(ushort)(sVar59 < (short)local_19b8[0]) & __LC30) + *(short *)pDVar3
          ;
          *(ushort *)(pDVar4 + 2) = uVar37 + sVar26;
          *(ushort *)(pDVar4 + 4) = uVar42 + sVar5;
          *(ushort *)(pDVar4 + 6) = uVar43 + sVar52;
          *(ushort *)(pDVar4 + 8) = uVar44 + sVar55;
          *(ushort *)(pDVar4 + 10) = uVar45 + sVar56;
          *(ushort *)(pDVar4 + 0xc) = uVar46 + sVar57;
          *(ushort *)(pDVar4 + 0xe) = uVar47 + sVar58;
          do {
            lVar15 = (ulong)local_1988[lVar29] + local_1a88 * 0x27;
            pDVar3 = param_5 + lVar29 * 2 + (lVar15 + 0x9c2) * 0x10;
            uVar37 = *(ushort *)((long)local_19a8 + lVar29 * 2);
            *(undefined4 *)(param_5 + (lVar15 + 1) * 0x20 + lVar29 * 4) =
                 *(undefined4 *)
                  (auStack_1884 +
                  (long)((int)(uint)lVar29 >> 2) * 0x10 + (ulong)((uint)lVar29 & 3) * 4 + -4);
            *(ushort *)pDVar3 = uVar37;
            uVar37 = *(ushort *)((long)&local_1998 + lVar29 * 2);
            lVar29 = lVar29 + 1;
            *(ushort *)(pDVar3 + 0x9c00) = (ushort)local_1ad8;
            *(ushort *)(pDVar3 + 0x4e00) = uVar37;
          } while (lVar29 != 8);
LAB_00107849:
          lVar16 = lVar16 + 1;
          if ((int)uVar21 == lVar16) goto LAB_0010786a;
        }
        auVar41._4_12_ = auStack_1884;
        auVar41._0_4_ = local_1888;
        auVar38 = *(undefined1 (*) [16])(local_1858 + local_1a88 * 2);
        auVar53 = *(undefined1 (*) [16])(local_1848 + local_1a88 * 2);
        auVar39._4_4_ = -(uint)(auStack_1884._0_4_ < auVar38._4_4_);
        auVar39._0_4_ = -(uint)(local_1888 < auVar38._0_4_);
        auVar39._8_4_ = -(uint)(auStack_1884._4_4_ < auVar38._8_4_);
        auVar39._12_4_ = -(uint)(auStack_1884._8_4_ < auVar38._12_4_);
        auVar62._4_4_ = -(uint)(local_1878._4_4_ < auVar53._4_4_);
        auVar62._0_4_ = -(uint)(local_1878._0_4_ < auVar53._0_4_);
        auVar62._8_4_ = -(uint)(local_1878._8_4_ < auVar53._8_4_);
        auVar62._12_4_ = -(uint)(local_1878._12_4_ < auVar53._12_4_);
        auVar39 = packssdw(auVar39,auVar62);
        if ((((((((((((((((auVar39 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                         (auVar39 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar39 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar39 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar39 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar39 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar39 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar39 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar39 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar39 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar39 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar39 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
              (auVar39 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (auVar39 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
            (auVar39 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && -1 < auVar39[0xf]
           ) goto LAB_00107849;
        auVar38 = minps(auVar41,auVar38);
        auVar53 = minps(local_1878,auVar53);
        lVar16 = lVar16 + 1;
        *(undefined1 (*) [16])(local_1858 + local_1a88 * 2) = auVar38;
        auVar38 = *(undefined1 (*) [16])(local_1918 + local_1a88);
        *(undefined1 (*) [16])(local_1848 + local_1a88 * 2) = auVar53;
        *(undefined1 (*) [16])(local_1918 + local_1a88) = local_19a8 & auVar39 | ~auVar39 & auVar38;
        auVar53._8_8_ = uStack_1990;
        auVar53._0_8_ = local_1998;
        *(undefined1 (*) [16])(local_18f8 + local_1a88) =
             auVar53 & auVar39 | ~auVar39 & *(undefined1 (*) [16])(local_18f8 + local_1a88);
        auVar49._0_4_ = CONCAT22((ushort)local_1ad8,(ushort)local_1ad8);
        auVar49._4_4_ = auVar49._0_4_;
        auVar49._8_4_ = auVar49._0_4_;
        auVar49._12_4_ = auVar49._0_4_;
        *(undefined1 (*) [16])(local_18d8 + local_1a88) =
             auVar39 & auVar49 | ~auVar39 & *(undefined1 (*) [16])(local_18d8 + local_1a88);
      } while ((int)uVar21 != lVar16);
    }
LAB_0010786a:
    local_1ad8 = local_1ad8 + 1;
    if (local_1ad8 == 8) break;
    sVar26 = *local_1ae8;
  } while( true );
  local_1a88 = local_1a88 + 0x10;
  puVar31 = puVar31 + 0x30;
  lVar27 = lVar27 + 0x30;
  if (local_1a88 == 0x20) goto code_r0x00107a36;
  goto LAB_00107400;
code_r0x00107a36:
  if (local_1a6c != 0) goto code_r0x00107a53;
  auVar54._0_4_ = (float)local_1838._0_4_ + (float)local_1858._0_4_;
  auVar54._4_4_ = (float)local_1838._4_4_ + (float)local_1858._4_4_;
  auVar54._8_4_ = fStack_1830 + fStack_1850;
  auVar54._12_4_ = fStack_182c + fStack_184c;
  auVar51._0_4_ = (float)local_1828._0_4_ + (float)local_1848._0_4_;
  auVar51._4_4_ = (float)local_1828._4_4_ + (float)local_1848._4_4_;
  auVar51._8_4_ = fStack_1820 + fStack_1840;
  auVar51._12_4_ = fStack_181c + fStack_183c;
  auVar38 = *(undefined1 (*) [16])param_1;
  auVar53 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar40._4_4_ = -(uint)(auVar54._4_4_ < auVar38._4_4_);
  auVar40._0_4_ = -(uint)(auVar54._0_4_ < auVar38._0_4_);
  auVar40._8_4_ = -(uint)(auVar54._8_4_ < auVar38._8_4_);
  auVar40._12_4_ = -(uint)(auVar54._12_4_ < auVar38._12_4_);
  auVar63._4_4_ = -(uint)(auVar51._4_4_ < auVar53._4_4_);
  auVar63._0_4_ = -(uint)(auVar51._0_4_ < auVar53._0_4_);
  auVar63._8_4_ = -(uint)(auVar51._8_4_ < auVar53._8_4_);
  auVar63._12_4_ = -(uint)(auVar51._12_4_ < auVar53._12_4_);
  auVar41 = packssdw(auVar40,auVar63);
  if ((((((((((((((((auVar41 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar41 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar41 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar41 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar41 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar41 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar41 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar41 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar41 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar41 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar41 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar41 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar41 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar41 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar41 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || auVar41[0xf] < '\0') {
    auVar53 = minps(auVar53,auVar51);
    auVar38 = minps(auVar38,auVar54);
    lVar27 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar53;
    auVar53 = (undefined1  [16])local_19c8 | auVar41;
    auVar50._0_4_ = CONCAT22((short)uVar23,(short)uVar23);
    *(undefined1 (*) [16])param_1 = auVar38;
    auVar50._4_4_ = auVar50._0_4_;
    auVar50._8_4_ = auVar50._0_4_;
    auVar50._12_4_ = auVar50._0_4_;
    local_19c8[0] = (Int16CompFlag)auVar53[0];
    local_19c8[1] = (Int16CompFlag)auVar53[1];
    local_19c8[2] = (Int16CompFlag)auVar53[2];
    local_19c8[3] = (Int16CompFlag)auVar53[3];
    local_19c8[4] = (Int16CompFlag)auVar53[4];
    local_19c8[5] = (Int16CompFlag)auVar53[5];
    local_19c8[6] = (Int16CompFlag)auVar53[6];
    local_19c8[7] = (Int16CompFlag)auVar53[7];
    local_19c8[8] = (Int16CompFlag)auVar53[8];
    local_19c8[9] = (Int16CompFlag)auVar53[9];
    local_19c8[10] = (Int16CompFlag)auVar53[10];
    local_19c8[0xb] = (Int16CompFlag)auVar53[0xb];
    local_19c8[0xc] = (Int16CompFlag)auVar53[0xc];
    local_19c8[0xd] = (Int16CompFlag)auVar53[0xd];
    local_19c8[0xe] = (Int16CompFlag)auVar53[0xe];
    local_19c8[0xf] = (Int16CompFlag)auVar53[0xf];
    auVar38 = auVar50 & auVar41 | ~auVar41 & (undefined1  [16])local_19e8;
    local_19e8[0] = (VInt16)auVar38[0];
    local_19e8[1] = (VInt16)auVar38[1];
    local_19e8[2] = (VInt16)auVar38[2];
    local_19e8[3] = (VInt16)auVar38[3];
    local_19e8[4] = (VInt16)auVar38[4];
    local_19e8[5] = (VInt16)auVar38[5];
    local_19e8[6] = (VInt16)auVar38[6];
    local_19e8[7] = (VInt16)auVar38[7];
    local_19e8[8] = (VInt16)auVar38[8];
    local_19e8[9] = (VInt16)auVar38[9];
    local_19e8[10] = (VInt16)auVar38[10];
    local_19e8[0xb] = (VInt16)auVar38[0xb];
    local_19e8[0xc] = (VInt16)auVar38[0xc];
    local_19e8[0xd] = (VInt16)auVar38[0xd];
    local_19e8[0xe] = (VInt16)auVar38[0xe];
    local_19e8[0xf] = (VInt16)auVar38[0xf];
    local_19d8 = ~auVar41 & local_19d8;
    do {
      *(undefined1 (*) [16])(local_1978 + lVar27) =
           *(undefined1 (*) [16])(local_18f8 + lVar27) & auVar41 |
           ~auVar41 & *(undefined1 (*) [16])(local_1978 + lVar27);
      *(undefined1 (*) [16])(local_1958 + lVar27) =
           *(undefined1 (*) [16])(local_1918 + lVar27) & auVar41 |
           ~auVar41 & *(undefined1 (*) [16])(local_1958 + lVar27);
      *(undefined1 (*) [16])(local_1938 + lVar27) =
           *(undefined1 (*) [16])(local_18d8 + lVar27) & auVar41 |
           ~auVar41 & *(undefined1 (*) [16])(local_1938 + lVar27);
      lVar27 = lVar27 + 0x10;
    } while (lVar27 != 0x20);
  }
  local_1a6c = 1;
  goto LAB_001073db;
code_r0x00107a53:
  local_1758 = (undefined1  [16])0x0;
  local_1748[0] = (undefined1  [16])0x0;
  lVar33 = lVar33 + 0x60;
  FindBestDifferentialCombination
            (uVar23,1,(Int16CompFlag *)local_1758,local_19c8,param_1,local_19e8,(VInt16 *)local_19d8
             ,local_1978,local_1958,local_1938,param_5);
  bVar36 = uVar23 != 0;
  uVar23 = local_1a6c;
  if (bVar36) {
    lVar33 = 0;
    do {
      auVar38 = _local_1858;
      if (*(short *)(local_19c8 + lVar33) != 0) {
        uVar13 = CONCAT22(0,*(ushort *)(local_1938 + lVar33));
        local_1858._0_4_ = uVar13;
        _fStack_1850 = auVar38._8_8_;
        local_1858._4_2_ = *(undefined2 *)(local_1928 + lVar33);
        local_1858._6_2_ = 0;
        local_1888 = (float)CONCAT22(*(undefined2 *)(local_1948 + lVar33),
                                     *(undefined2 *)(local_1958 + lVar33));
        uVar37 = *(ushort *)(local_1968 + lVar33);
        uVar42 = *(ushort *)(local_1978 + lVar33);
        local_1758._8_8_ =
             (ulong)(CONCAT24(uVar37,(int)(uint)uVar42 >> 10) & 0xffff0000001f) & 0x1fffffffff;
        local_1758._0_8_ = CONCAT44((int)(uint)uVar42 >> 5,(uint)uVar42) & 0x1f0000001f;
        local_1748[0]._0_8_ =
             CONCAT44((int)(uint)uVar37 >> 10,(int)(uint)uVar37 >> 5) & 0x1f0000001f;
        EmitETC1Block(param_2,(uint)*(ushort *)(local_19e8 + lVar33),
                      (uint)*(ushort *)((VInt16 *)local_19d8 + lVar33),(int *)local_1758,
                      (int *)local_1858,(ushort *)&local_1888,false);
      }
      lVar33 = lVar33 + 2;
      param_2 = param_2 + 8;
    } while (lVar33 != 0x10);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_0010733e;
}



/* cvtt::Internal::ETCComputer::CompressETC1Block(unsigned char*, cvtt::PixelBlockU8 const*,
   cvtt::ETC1CompressionData*, cvtt::Options const&) */

void cvtt::Internal::ETCComputer::CompressETC1Block
               (uchar *param_1,PixelBlockU8 *param_2,ETC1CompressionData *param_3,Options *param_4)

{
  long in_FS_OFFSET;
  undefined4 local_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  VInt16<2> local_938 [768];
  Float local_638 [1544];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_948 = _LC3;
  uStack_944 = _LC3;
  uStack_940 = _LC3;
  uStack_93c = _LC3;
  local_958 = _LC3;
  uStack_954 = _LC3;
  uStack_950 = _LC3;
  uStack_94c = _LC3;
  ExtractBlocks(local_938,local_638,param_2,param_4);
  CompressETC1BlockInternal
            ((Float *)&local_958,param_1,local_938,local_638,(DifferentialResolveStorage *)param_3,
             param_4,false);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,
   unsigned char*, cvtt::ParallelMath::VInt16<2> const (*) [3], cvtt::ParallelMath::Float const (*)
   [3], cvtt::ParallelMath::Int16CompFlag const*,
   cvtt::Internal::ETCComputer::DifferentialResolveStorage&, cvtt::Options const&) */

void cvtt::Internal::ETCComputer::CompressETC1PunchthroughBlockInternal
               (Float *param_1,uchar *param_2,VInt16<2> *param_3,Float *param_4,
               Int16CompFlag *param_5,DifferentialResolveStorage *param_6,Options *param_7)

{
  DifferentialResolveStorage *pDVar1;
  DifferentialResolveStorage *pDVar2;
  VInt16 *pVVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint *puVar11;
  ushort *puVar12;
  uint *puVar13;
  ushort *puVar14;
  uint *puVar15;
  ushort *puVar16;
  undefined1 auVar17 [14];
  undefined6 uVar18;
  uint *puVar19;
  uint *puVar20;
  ushort *puVar21;
  short *psVar22;
  short *psVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined1 (*pauVar26) [16];
  Float *pFVar27;
  long lVar28;
  short *psVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined1 (*pauVar32) [16];
  uint uVar33;
  int *piVar34;
  undefined8 *puVar35;
  long lVar36;
  uint *puVar37;
  int *piVar38;
  VInt16<2> *pVVar39;
  long lVar40;
  ulong uVar41;
  int iVar42;
  long lVar43;
  undefined8 *puVar44;
  long lVar45;
  undefined8 *puVar46;
  long in_FS_OFFSET;
  bool bVar47;
  ushort uVar48;
  short sVar49;
  short sVar51;
  short sVar52;
  ushort uVar53;
  short sVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  uint uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint *local_17b8;
  short sStack_17a6;
  short sStack_17a4;
  short sStack_17a2;
  short sStack_17a0;
  short sStack_179e;
  short sStack_179c;
  short sStack_179a;
  int local_1764;
  long local_1748;
  VInt16 local_1698 [16];
  Int16CompFlag local_1688 [16];
  undefined1 local_1678 [16];
  ushort local_1668 [8];
  ushort local_1658 [8];
  undefined8 local_1648;
  undefined8 uStack_1640;
  VInt16 local_1638 [16];
  VInt16 local_1628 [16];
  undefined1 local_1618 [16];
  VInt16 local_1608 [16];
  undefined1 local_15f8 [16];
  VInt16 local_15e8 [16];
  undefined1 local_15d8 [16];
  uint local_15c8;
  uint uStack_15c4;
  uint uStack_15c0;
  uint uStack_15bc;
  undefined1 local_15b8 [16];
  ushort local_15a8 [16];
  undefined1 local_1588 [16];
  undefined1 local_1578 [16];
  undefined1 local_1568 [16];
  int local_1558 [2];
  undefined8 uStack_1550;
  short local_1548 [128];
  uint local_1448 [32];
  undefined8 local_13c8 [48];
  undefined8 local_1248 [192];
  undefined8 local_c48 [385];
  long local_40;
  undefined8 uVar50;
  
  lVar28 = 0;
  lVar25 = 0;
  puVar35 = local_13c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar45 = 0;
  local_1628[0] = (VInt16)0x0;
  local_1628[1] = (VInt16)0x0;
  local_1628[2] = (VInt16)0x0;
  local_1628[3] = (VInt16)0x0;
  local_1628[4] = (VInt16)0x0;
  local_1628[5] = (VInt16)0x0;
  local_1628[6] = (VInt16)0x0;
  local_1628[7] = (VInt16)0x0;
  local_1628[8] = (VInt16)0x0;
  local_1628[9] = (VInt16)0x0;
  local_1628[10] = (VInt16)0x0;
  local_1628[0xb] = (VInt16)0x0;
  local_1628[0xc] = (VInt16)0x0;
  local_1628[0xd] = (VInt16)0x0;
  local_1628[0xe] = (VInt16)0x0;
  local_1628[0xf] = (VInt16)0x0;
  local_1618 = (undefined1  [16])0x0;
  local_1608[0] = (VInt16)0x0;
  local_1608[1] = (VInt16)0x0;
  local_1608[2] = (VInt16)0x0;
  local_1608[3] = (VInt16)0x0;
  local_1608[4] = (VInt16)0x0;
  local_1608[5] = (VInt16)0x0;
  local_1608[6] = (VInt16)0x0;
  local_1608[7] = (VInt16)0x0;
  local_1608[8] = (VInt16)0x0;
  local_1608[9] = (VInt16)0x0;
  local_1608[10] = (VInt16)0x0;
  local_1608[0xb] = (VInt16)0x0;
  local_1608[0xc] = (VInt16)0x0;
  local_1608[0xd] = (VInt16)0x0;
  local_1608[0xe] = (VInt16)0x0;
  local_1608[0xf] = (VInt16)0x0;
  local_15f8 = (undefined1  [16])0x0;
  local_15e8[0] = (VInt16)0x0;
  local_15e8[1] = (VInt16)0x0;
  local_15e8[2] = (VInt16)0x0;
  local_15e8[3] = (VInt16)0x0;
  local_15e8[4] = (VInt16)0x0;
  local_15e8[5] = (VInt16)0x0;
  local_15e8[6] = (VInt16)0x0;
  local_15e8[7] = (VInt16)0x0;
  local_15e8[8] = (VInt16)0x0;
  local_15e8[9] = (VInt16)0x0;
  local_15e8[10] = (VInt16)0x0;
  local_15e8[0xb] = (VInt16)0x0;
  local_15e8[0xc] = (VInt16)0x0;
  local_15e8[0xd] = (VInt16)0x0;
  local_15e8[0xe] = (VInt16)0x0;
  local_15e8[0xf] = (VInt16)0x0;
  local_15d8 = (undefined1  [16])0x0;
  local_1698[0] = (VInt16)0x0;
  local_1698[1] = (VInt16)0x0;
  local_1698[2] = (VInt16)0x0;
  local_1698[3] = (VInt16)0x0;
  local_1698[4] = (VInt16)0x0;
  local_1698[5] = (VInt16)0x0;
  local_1698[6] = (VInt16)0x0;
  local_1698[7] = (VInt16)0x0;
  local_1698[8] = (VInt16)0x0;
  local_1698[9] = (VInt16)0x0;
  local_1698[10] = (VInt16)0x0;
  local_1698[0xb] = (VInt16)0x0;
  local_1698[0xc] = (VInt16)0x0;
  local_1698[0xd] = (VInt16)0x0;
  local_1698[0xe] = (VInt16)0x0;
  local_1698[0xf] = (VInt16)0x0;
  local_1688[0] = (Int16CompFlag)0x0;
  local_1688[1] = (Int16CompFlag)0x0;
  local_1688[2] = (Int16CompFlag)0x0;
  local_1688[3] = (Int16CompFlag)0x0;
  local_1688[4] = (Int16CompFlag)0x0;
  local_1688[5] = (Int16CompFlag)0x0;
  local_1688[6] = (Int16CompFlag)0x0;
  local_1688[7] = (Int16CompFlag)0x0;
  local_1688[8] = (Int16CompFlag)0x0;
  local_1688[9] = (Int16CompFlag)0x0;
  local_1688[10] = (Int16CompFlag)0x0;
  local_1688[0xb] = (Int16CompFlag)0x0;
  local_1688[0xc] = (Int16CompFlag)0x0;
  local_1688[0xd] = (Int16CompFlag)0x0;
  local_1688[0xe] = (Int16CompFlag)0x0;
  local_1688[0xf] = (Int16CompFlag)0x0;
  do {
    lVar40 = 0;
    lVar43 = 0;
    piVar38 = &g_flipTables + lVar45 * 8;
    puVar46 = puVar35;
    do {
      puVar24 = (undefined8 *)((long)local_c48 + lVar40 + lVar28);
      puVar30 = puVar46 + -0x10;
      piVar34 = piVar38;
      puVar44 = (undefined8 *)((long)local_1248 + lVar43 + lVar25);
      do {
        lVar36 = (long)*piVar34;
        puVar31 = puVar30 + 2;
        piVar34 = piVar34 + 1;
        pFVar27 = param_4 + lVar36 * 0x60;
        pVVar39 = param_3 + lVar36 * 0x30;
        uVar50 = *(undefined8 *)(pVVar39 + 8);
        *puVar44 = *(undefined8 *)pVVar39;
        puVar44[1] = uVar50;
        uVar50 = *(undefined8 *)(pVVar39 + 0x18);
        puVar44[2] = *(undefined8 *)(pVVar39 + 0x10);
        puVar44[3] = uVar50;
        uVar50 = *(undefined8 *)(pVVar39 + 0x28);
        puVar44[4] = *(undefined8 *)(pVVar39 + 0x20);
        puVar44[5] = uVar50;
        uVar50 = *(undefined8 *)(pFVar27 + 8);
        *puVar24 = *(undefined8 *)pFVar27;
        puVar24[1] = uVar50;
        uVar50 = *(undefined8 *)(pFVar27 + 0x18);
        puVar24[2] = *(undefined8 *)(pFVar27 + 0x10);
        puVar24[3] = uVar50;
        uVar50 = *(undefined8 *)(pFVar27 + 0x28);
        puVar24[4] = *(undefined8 *)(pFVar27 + 0x20);
        puVar24[5] = uVar50;
        uVar50 = *(undefined8 *)(pFVar27 + 0x38);
        puVar24[6] = *(undefined8 *)(pFVar27 + 0x30);
        puVar24[7] = uVar50;
        uVar50 = *(undefined8 *)(pFVar27 + 0x48);
        puVar24[8] = *(undefined8 *)(pFVar27 + 0x40);
        puVar24[9] = uVar50;
        uVar50 = *(undefined8 *)(pFVar27 + 0x58);
        puVar24[10] = *(undefined8 *)(pFVar27 + 0x50);
        puVar24[0xb] = uVar50;
        uVar50 = *(undefined8 *)(param_5 + lVar36 * 0x10 + 8);
        *puVar30 = *(undefined8 *)(param_5 + lVar36 * 0x10);
        puVar30[1] = uVar50;
        puVar24 = puVar24 + 0xc;
        puVar30 = puVar31;
        puVar44 = puVar44 + 6;
      } while (puVar46 != puVar31);
      lVar43 = lVar43 + 0x180;
      piVar38 = piVar38 + 8;
      puVar46 = puVar46 + 0x10;
      lVar40 = lVar40 + 0x300;
    } while (lVar43 != 0x300);
    lVar45 = lVar45 + 2;
    puVar35 = puVar35 + 0x20;
    lVar25 = lVar25 + 0x300;
    lVar28 = lVar28 + 0x600;
  } while (lVar45 != 4);
  if ((CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
       ::modifiers == '\0') &&
     (iVar42 = __cxa_guard_acquire(&CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
                                    ::modifiers), iVar42 != 0)) {
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._0_8_ = __LC83;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._8_8_ = _UNK_0010b408;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._16_8_ = __LC87;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._24_8_ = _UNK_0010b378;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._32_8_ = __LC91;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._40_8_ = _UNK_0010b528;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._48_8_ = __LC95;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._56_8_ = _UNK_0010b568;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._64_8_ = __LC99;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._72_8_ = _UNK_0010b5a8;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._80_8_ = __LC103;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._88_8_ = _UNK_0010b5e8;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._96_8_ = __LC107;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._104_8_ = _UNK_0010b628;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._112_8_ = __LC111;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._120_8_ = _UNK_0010b668;
    __cxa_guard_release(&CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
                         ::modifiers);
  }
  local_1748 = 0;
  local_17b8 = local_1448;
  lVar45 = local_1748;
LAB_00108385:
  local_1748 = lVar45;
  uStack_15bc = 0xffffffff;
  local_15c8 = 0xffffffff;
  uStack_15c4 = 0xffffffff;
  uStack_15c0 = 0xffffffff;
  puVar20 = local_17b8 + 0x20;
  puVar19 = local_17b8;
  do {
    local_15c8 = local_15c8 & *puVar19;
    uStack_15c4 = uStack_15c4 & puVar19[1];
    uStack_15c0 = uStack_15c0 & puVar19[2];
    uStack_15bc = uStack_15bc & puVar19[3];
    puVar19 = puVar19 + 4;
  } while (puVar20 != puVar19);
  puVar37 = local_17b8 + 0x40;
  puVar19 = puVar20;
  do {
    puVar19 = puVar19 + 8;
  } while (puVar37 != puVar19);
  lVar45 = 0;
  lVar25 = local_1748 << 8;
  *(undefined1 (*) [16])(param_6 + 0x10) = (undefined1  [16])0x0;
  local_15b8 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])param_6 = (undefined1  [16])0x0;
  do {
    puVar19 = puVar20;
    puVar20 = local_17b8;
    auVar67 = (undefined1  [16])0x0;
    do {
      uVar61 = *puVar20;
      puVar21 = (ushort *)((long)puVar20 + 2);
      puVar11 = puVar20 + 1;
      puVar12 = (ushort *)((long)puVar20 + 6);
      puVar13 = puVar20 + 2;
      puVar14 = (ushort *)((long)puVar20 + 10);
      puVar15 = puVar20 + 3;
      puVar16 = (ushort *)((long)puVar20 + 0xe);
      puVar20 = puVar20 + 4;
      uVar48 = (__LC30 & (ushort)uVar61) + auVar67._0_2_;
      sVar51 = (_UNK_0010b332 & *puVar21) + auVar67._2_2_;
      sVar52 = (_UNK_0010b334 & (ushort)*puVar11) + auVar67._4_2_;
      sVar54 = (_UNK_0010b336 & *puVar12) + auVar67._6_2_;
      uVar50 = CONCAT26(sVar54,CONCAT24(sVar52,CONCAT22(sVar51,uVar48)));
      uVar56 = (_UNK_0010b338 & (ushort)*puVar13) + auVar67._8_2_;
      auVar64._0_10_ = CONCAT28(uVar56,uVar50);
      auVar64._10_2_ = (_UNK_0010b33a & *puVar14) + auVar67._10_2_;
      auVar64._12_2_ = (_UNK_0010b33c & (ushort)*puVar15) + auVar67._12_2_;
      auVar64._14_2_ = (_UNK_0010b33e & *puVar16) + auVar67._14_2_;
      auVar67 = auVar64;
    } while (puVar19 != puVar20);
    auVar66._0_4_ = CONCAT22(0,uVar56);
    auVar66._4_2_ = auVar64._10_2_;
    auVar66._6_2_ = 0;
    auVar66._8_2_ = auVar64._12_2_;
    auVar66._10_2_ = 0;
    auVar66._12_2_ = auVar64._14_2_;
    auVar66._14_2_ = 0;
    auVar4._10_2_ = 0;
    auVar4._0_10_ = auVar64._0_10_;
    auVar4._12_2_ = sVar54;
    auVar5._8_2_ = sVar52;
    auVar5._0_8_ = uVar50;
    auVar5._10_4_ = auVar4._10_4_;
    auVar17._6_8_ = 0;
    auVar17._0_6_ = auVar5._8_6_;
    auVar6._4_2_ = sVar51;
    auVar6._0_4_ = CONCAT22(sVar51,uVar48);
    auVar6._6_8_ = SUB148(auVar17 << 0x40,6);
    auVar68._4_10_ = auVar6._4_10_;
    auVar68._0_4_ = CONCAT22(0,uVar48);
    auVar68._14_2_ = 0;
    auVar67._0_2_ =
         ((short)uVar48 < (short)__LC30) * __LC30 | ((short)uVar48 >= (short)__LC30) * uVar48;
    auVar67._2_2_ =
         (sVar51 < (short)_UNK_0010b332) * _UNK_0010b332 |
         (ushort)(sVar51 >= (short)_UNK_0010b332) * sVar51;
    auVar67._4_2_ =
         (sVar52 < (short)_UNK_0010b334) * _UNK_0010b334 |
         (ushort)(sVar52 >= (short)_UNK_0010b334) * sVar52;
    auVar67._6_2_ =
         (sVar54 < (short)_UNK_0010b336) * _UNK_0010b336 |
         (ushort)(sVar54 >= (short)_UNK_0010b336) * sVar54;
    auVar67._8_2_ =
         ((short)uVar56 < (short)_UNK_0010b338) * _UNK_0010b338 |
         ((short)uVar56 >= (short)_UNK_0010b338) * uVar56;
    auVar67._10_2_ =
         ((short)auVar64._10_2_ < (short)_UNK_0010b33a) * _UNK_0010b33a |
         ((short)auVar64._10_2_ >= (short)_UNK_0010b33a) * auVar64._10_2_;
    auVar67._12_2_ =
         ((short)auVar64._12_2_ < (short)_UNK_0010b33c) * _UNK_0010b33c |
         ((short)auVar64._12_2_ >= (short)_UNK_0010b33c) * auVar64._12_2_;
    auVar67._14_2_ =
         ((short)auVar64._14_2_ < (short)_UNK_0010b33e) * _UNK_0010b33e |
         ((short)auVar64._14_2_ >= (short)_UNK_0010b33e) * auVar64._14_2_;
    local_1764 = 0;
    auVar62._0_4_ = -(uint)(CONCAT22(0,uVar48) < auVar66._0_4_);
    auVar62._4_4_ = -(uint)(auVar6._4_4_ < (uint)auVar64._10_2_);
    auVar62._8_4_ = -(uint)(auVar5._8_4_ < (int)(uint)auVar64._12_2_);
    auVar62._12_4_ = -(uint)(auVar4._10_4_ >> 0x10 < (uint)auVar64._14_2_);
    local_1678 = psllw(auVar67,8);
    auVar67 = auVar66 & auVar62 | ~auVar62 & auVar68;
    auVar63._0_4_ = -(uint)(auVar67._0_4_ < auVar67._8_4_);
    auVar63._4_4_ = -(uint)(auVar67._4_4_ < auVar67._12_4_);
    auVar63._8_4_ = -(uint)(auVar67._8_4_ < 0);
    auVar63._12_4_ = -(uint)(auVar67._12_4_ < 0);
    auVar67 = ~auVar63 & auVar67 | auVar67 >> 0x40 & auVar63;
    uVar61 = auVar67._0_4_;
    uVar33 = auVar67._4_4_;
    uVar65 = -(uint)((int)uVar61 < (int)uVar33);
    uVar61 = ~uVar65 & uVar61 | uVar33 & uVar65;
    uVar65 = 0;
    if (-1 < (int)uVar61) {
      uVar65 = uVar61;
    }
    do {
      uVar50 = local_1668._8_8_;
      uVar18 = local_1668._2_6_;
      uVar48 = local_1668[0];
      auVar67 = psllw(local_1568,10);
      auVar64 = psllw(local_1578,5);
      pauVar26 = &local_1588;
      iVar42 = -uVar65;
      pauVar32 = (undefined1 (*) [16])local_1558;
      do {
        do {
          lVar28 = 0;
          do {
            *(ushort *)((long)*pauVar26 + lVar28) =
                 *(ushort *)(local_1638 + lVar28) / *(ushort *)(local_1678 + lVar28);
            lVar28 = lVar28 + 2;
          } while (lVar28 != 0x10);
          pauVar26 = pauVar26 + 1;
        } while ((undefined1 (*) [16])local_1558 != pauVar26);
        iVar42 = iVar42 + 1;
        *pauVar32 = auVar67 | auVar64 | local_1588;
        pauVar32 = pauVar32 + 1;
        pauVar26 = &local_1588;
      } while (iVar42 <= (int)uVar65);
      lVar28 = 0;
      psVar22 = local_1548 + (ulong)(uVar65 * 2 - 1) * 8;
      do {
        psVar29 = (short *)((long)*(undefined1 (*) [16])local_1558 + lVar28);
        uVar56 = 1;
        if (0 < (int)uVar61) {
          do {
            lVar40 = lVar28 + (long)(int)(uVar56 - 1) * 0x10 + -0x38;
            if (*(short *)((long)local_1558 + lVar40 + 0x38) != psVar29[8]) {
              *(short *)((long)local_1548 + lVar40 + 0x38) = psVar29[8];
              uVar56 = uVar56 + 1;
            }
            psVar29 = psVar29 + 8;
          } while (psVar29 != psVar22);
        }
        *(ushort *)((long)local_1668 + lVar28) = uVar56;
        lVar28 = lVar28 + 2;
        psVar22 = psVar22 + 1;
      } while (lVar28 != 0x10);
      uVar33 = (uint)local_1668[0];
      puVar21 = local_1668 + 1;
      do {
        if (uVar33 < *puVar21) {
          uVar33 = (uint)*puVar21;
        }
        puVar21 = puVar21 + 1;
      } while (local_1658 != puVar21);
      lVar28 = 0;
      do {
        uVar56 = local_1668[lVar28];
        sVar51 = *(short *)((long)*(undefined1 (*) [16])local_1558 + lVar28 * 2);
        if (uVar56 < uVar33) {
          uVar41 = (ulong)uVar56;
          psVar22 = (short *)((long)((undefined1 (*) [16])local_1558)[uVar41] + lVar28 * 2);
          psVar29 = (short *)((long)((undefined1 (*) [16])local_1558)[uVar41 + (uVar33 - uVar56)] +
                             lVar28 * 2);
          if (((int)psVar29 - (int)psVar22 & 0x10U) != 0) {
            *psVar22 = sVar51;
            psVar22 = local_1548 + uVar41 * 8 + lVar28;
            if (psVar22 == psVar29) goto LAB_001086e0;
          }
          do {
            *psVar22 = sVar51;
            psVar23 = psVar22 + 0x10;
            psVar22[8] = sVar51;
            psVar22 = psVar23;
          } while (psVar23 != psVar29);
        }
LAB_001086e0:
        lVar28 = lVar28 + 1;
      } while (lVar28 != 8);
      if (uVar33 != 0) {
        lVar28 = 0;
        do {
          local_1648 = *(undefined8 *)((undefined1 (*) [16])local_1558)[lVar28];
          uStack_1640 = (&uStack_1550)[lVar28 * 2];
          TestHalfBlockPunchthrough
                    (local_1648,
                     *(undefined8 *)
                      (CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
                       ::modifiers + (long)local_1764 * 0x10),local_15a8,local_1658,
                     (long)local_1248 + lVar25 * 3,(long)local_c48 + lVar25 * 6,local_17b8,param_7);
          sStack_17a6 = (short)uVar18;
          sStack_17a4 = SUB62(uVar18,2);
          sStack_17a2 = SUB62(uVar18,4);
          sStack_17a0 = (short)uVar50;
          sStack_179e = SUB82(uVar50,2);
          sStack_179c = SUB82(uVar50,4);
          sStack_179a = SUB82(uVar50,6);
          lVar40 = 0;
          sVar49 = (short)lVar28;
          uVar56 = _UNK_0010b332 & -(ushort)(sVar49 < sStack_17a6);
          uVar53 = _UNK_0010b334 & -(ushort)(sVar49 < sStack_17a4);
          uVar55 = _UNK_0010b336 & -(ushort)(sVar49 < sStack_17a2);
          uVar57 = _UNK_0010b338 & -(ushort)(sVar49 < sStack_17a0);
          uVar58 = _UNK_0010b33a & -(ushort)(sVar49 < sStack_179e);
          uVar59 = _UNK_0010b33c & -(ushort)(sVar49 < sStack_179c);
          uVar60 = _UNK_0010b33e & -(ushort)(sVar49 < sStack_179a);
          pDVar1 = param_6 + lVar45 * 0x10;
          sVar51 = *(short *)(pDVar1 + 2);
          sVar52 = *(short *)(pDVar1 + 4);
          sVar54 = *(short *)(pDVar1 + 6);
          sVar7 = *(short *)(pDVar1 + 8);
          sVar8 = *(short *)(pDVar1 + 10);
          sVar9 = *(short *)(pDVar1 + 0xc);
          sVar10 = *(short *)(pDVar1 + 0xe);
          pDVar2 = param_6 + lVar45 * 0x10;
          *(ushort *)pDVar2 = (__LC30 & -(ushort)(sVar49 < (short)uVar48)) + *(short *)pDVar1;
          *(ushort *)(pDVar2 + 2) = uVar56 + sVar51;
          *(ushort *)(pDVar2 + 4) = uVar53 + sVar52;
          *(ushort *)(pDVar2 + 6) = uVar55 + sVar54;
          *(ushort *)(pDVar2 + 8) = uVar57 + sVar7;
          *(ushort *)(pDVar2 + 10) = uVar58 + sVar8;
          *(ushort *)(pDVar2 + 0xc) = uVar59 + sVar9;
          *(ushort *)(pDVar2 + 0xe) = uVar60 + sVar10;
          do {
            lVar43 = (ulong)*(ushort *)(local_1638 + lVar40 * 2) + (ulong)(-(int)lVar45 & 0x270);
            pDVar1 = param_6 + lVar40 * 2 + (lVar43 + 0x9c2) * 0x10;
            uVar56 = local_1658[lVar40];
            *(undefined4 *)(param_6 + (lVar43 + 1) * 0x20 + lVar40 * 4) =
                 *(undefined4 *)
                  (local_15a8 + (ulong)((uint)lVar40 & 3) * 2 + (long)((int)(uint)lVar40 >> 2) * 8);
            *(ushort *)pDVar1 = uVar56;
            uVar56 = *(ushort *)((long)&local_1648 + lVar40 * 2);
            lVar40 = lVar40 + 1;
            *(ushort *)(pDVar1 + 0x9c00) = (ushort)local_1764;
            *(ushort *)(pDVar1 + 0x4e00) = uVar56;
          } while (lVar40 != 8);
          lVar28 = lVar28 + 1;
        } while (lVar28 != (int)uVar33);
      }
      local_1764 = local_1764 + 1;
    } while (local_1764 != 8);
    lVar25 = lVar25 + 0x80;
    if (lVar45 != 0) break;
    lVar45 = 1;
    puVar20 = puVar19 + 0x20;
    local_17b8 = puVar19;
  } while( true );
  FindBestDifferentialCombination
            ((int)local_1748,1,(Int16CompFlag *)&local_15c8,local_1688,param_1,local_1698,local_1638
             ,local_1628,local_1608,local_15e8,param_6);
  local_17b8 = puVar37;
  if (local_1748 != 0) goto LAB_00108933;
  goto LAB_00108385;
LAB_00108933:
  lVar45 = 0;
  do {
    while (*(short *)(local_1688 + lVar45) == 0) {
      lVar45 = lVar45 + 2;
      param_2 = param_2 + 8;
      if (lVar45 == 0x10) goto LAB_00108a21;
    }
    pauVar26 = (undefined1 (*) [16])local_1558;
    lVar25 = lVar45;
    lVar28 = 0;
    do {
      uVar48 = *(ushort *)(local_1628 + lVar25);
      *(uint *)*pauVar26 = uVar48 & 0x1f;
      *(uint *)((long)*pauVar26 + 8) = (int)(uint)uVar48 >> 10 & 0x1f;
      *(uint *)((long)*pauVar26 + 4) = (int)(uint)uVar48 >> 5 & 0x1f;
      *(uint *)((long)*&local_1588 + lVar28 * 4) = (uint)*(ushort *)(local_15e8 + lVar25);
      pVVar3 = local_1608 + lVar25;
      lVar25 = lVar25 + 0x10;
      local_15a8[lVar28] = *(ushort *)pVVar3;
      bVar47 = lVar28 == 0;
      pauVar26 = (undefined1 (*) [16])((long)*pauVar26 + 0xc);
      lVar28 = local_1748;
    } while (bVar47);
    pVVar3 = local_1698 + lVar45;
    lVar45 = lVar45 + 2;
    EmitETC1Block(param_2,(uint)*(ushort *)pVVar3,1,local_1558,(int *)local_1588,local_15a8,true);
    param_2 = param_2 + 8;
  } while (lVar45 != 0x10);
LAB_00108a21:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::CompressETC2Block(unsigned char*, cvtt::PixelBlockU8 const*,
   cvtt::ETC2CompressionData*, cvtt::Options const&, bool) */

void cvtt::Internal::ETCComputer::CompressETC2Block
               (uchar *param_1,PixelBlockU8 *param_2,ETC2CompressionData *param_3,Options *param_4,
               bool param_5)

{
  PixelBlockU8 PVar1;
  undefined1 auVar2 [16];
  uint6 uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  short sVar7;
  VInt16<2> *pVVar8;
  VInt16<2> *pVVar9;
  VInt16<2> *pVVar10;
  VInt16<2> *pVVar11;
  VInt16<2> *pVVar12;
  VInt16<2> *pVVar13;
  VInt16<2> *pVVar14;
  VInt16<2> *pVVar15;
  VInt16<2> *pVVar16;
  VInt16<2> *pVVar17;
  VInt16<2> *pVVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [14];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  uint uVar36;
  uint *puVar37;
  uint *puVar38;
  ushort *puVar39;
  ushort *puVar40;
  long lVar41;
  PixelBlockU8 *pPVar42;
  float *pfVar43;
  float *pfVar44;
  Int16CompFlag *pIVar45;
  Int16CompFlag *pIVar46;
  Float *pFVar47;
  Float *pFVar48;
  ushort *puVar49;
  VInt16<2> *pVVar50;
  VInt16<2> *pVVar51;
  VInt16<2> *pVVar52;
  PixelBlockU8 *pPVar53;
  long in_FS_OFFSET;
  ushort uVar54;
  float fVar55;
  ushort uVar63;
  ushort uVar64;
  float fVar65;
  ushort uVar66;
  ushort uVar67;
  ushort uVar69;
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  float fVar68;
  ushort uVar70;
  ushort uVar72;
  float fVar71;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  ushort uVar73;
  ushort uVar77;
  ushort uVar78;
  ushort uVar79;
  ushort uVar80;
  ushort uVar81;
  undefined1 auVar74 [12];
  ushort uVar82;
  ushort uVar83;
  undefined1 auVar76 [16];
  undefined8 uVar84;
  undefined1 auVar85 [12];
  undefined1 auVar86 [12];
  undefined1 auVar88 [16];
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  undefined1 auVar94 [16];
  short sVar100;
  short sVar101;
  short sVar104;
  float fVar102;
  short sVar105;
  float fVar106;
  short sVar107;
  short sVar109;
  float fVar108;
  short sVar110;
  short sVar112;
  float fVar111;
  undefined1 auVar103 [16];
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  uint uVar126;
  float fVar127;
  uint uVar128;
  float fVar129;
  uint uVar130;
  float fVar131;
  uint uVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  uint uVar141;
  uint uVar142;
  uint uVar143;
  uint uVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  Float *local_12f8;
  ushort local_12e8;
  undefined1 local_12c8 [16];
  Int16CompFlag *local_12b8;
  undefined1 local_1298 [16];
  undefined1 local_1288 [16];
  undefined4 local_1278;
  short sStack_1274;
  short sStack_1272;
  short sStack_1270;
  short sStack_126e;
  short sStack_126c;
  short sStack_126a;
  uint local_1268;
  uint uStack_1264;
  uint uStack_1260;
  uint uStack_125c;
  uint local_1258;
  uint uStack_1254;
  uint uStack_1250;
  uint uStack_124c;
  VInt16<2> local_1248 [2];
  undefined2 auStack_1246 [127];
  VInt16<2> local_1148 [768];
  VInt16<2> local_e48 [32];
  float local_e28 [248];
  VInt16<2> local_a48 [2];
  undefined2 uStack_a46;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined2 local_a38 [8];
  float local_a28 [56];
  Int16CompFlag local_948 [256];
  VInt16<2> local_848 [512];
  Float local_648 [96];
  ushort local_5e8 [720];
  Float local_48 [8];
  long local_40;
  undefined1 auVar61 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar75 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  short sVar91;
  short sVar92;
  short sVar93;
  
  uVar36 = _LC3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1298 = (undefined1  [16])0x0;
  if (param_5) {
    fVar102 = *(float *)(param_4 + 4);
    sVar91 = 0x100;
    if ((fVar102 < _LC42) && (sVar91 = 1, 0.0 <= fVar102)) {
      fVar102 = fVar102 * __LC115 + _LC42;
      if ((float)((uint)fVar102 & _LC121) < _LC116) {
        fVar102 = (float)((uint)(float)(int)fVar102 | ~_LC121 & (uint)fVar102);
      }
      sVar91 = (short)(int)fVar102;
    }
    pVVar52 = local_1248;
    pPVar42 = param_2 + 3;
    local_1288._12_2_ = 0xffff;
    local_1288._14_2_ = 0xffff;
    local_1288._0_2_ = 0xffff;
    local_1288._2_2_ = 0xffff;
    local_1288._4_2_ = 0xffff;
    local_1288._6_2_ = 0xffff;
    local_1288._8_2_ = 0xffff;
    local_1288._10_2_ = 0xffff;
    pVVar50 = local_1148;
    uVar73 = 0;
    uVar77 = 0;
    uVar78 = 0;
    uVar79 = 0;
    uVar80 = 0;
    uVar81 = 0;
    uVar82 = 0;
    uVar83 = 0;
    uVar54 = -(ushort)((short)local_1278 < sVar91);
    uVar63 = -(ushort)(local_1278._2_2_ < sVar91);
    uVar64 = -(ushort)(sStack_1274 < sVar91);
    uVar66 = -(ushort)(sStack_1272 < sVar91);
    uVar67 = -(ushort)(sStack_1270 < sVar91);
    uVar69 = -(ushort)(sStack_126e < sVar91);
    uVar70 = -(ushort)(sStack_126c < sVar91);
    uVar72 = -(ushort)(sStack_126a < sVar91);
    puVar37 = &local_1278;
    pPVar53 = pPVar42;
    pVVar51 = pVVar52;
    do {
      do {
        PVar1 = *pPVar42;
        puVar38 = (uint *)((long)puVar37 + 2);
        pPVar42 = pPVar42 + 0x40;
        *(ushort *)puVar37 = (ushort)(byte)PVar1;
        puVar37 = puVar38;
      } while (&local_1268 != puVar38);
      *(ushort *)pVVar51 = uVar54;
      *(ushort *)(pVVar51 + 2) = uVar63;
      *(ushort *)(pVVar51 + 4) = uVar64;
      *(ushort *)(pVVar51 + 6) = uVar66;
      *(ushort *)(pVVar51 + 8) = uVar67;
      *(ushort *)(pVVar51 + 10) = uVar69;
      *(ushort *)(pVVar51 + 0xc) = uVar70;
      *(ushort *)(pVVar51 + 0xe) = uVar72;
      pVVar51 = pVVar51 + 0x10;
      uVar73 = uVar73 | uVar54;
      uVar77 = uVar77 | uVar63;
      uVar78 = uVar78 | uVar64;
      uVar79 = uVar79 | uVar66;
      uVar80 = uVar80 | uVar67;
      uVar81 = uVar81 | uVar69;
      uVar82 = uVar82 | uVar70;
      uVar83 = uVar83 | uVar72;
      local_1288._0_2_ = local_1288._0_2_ & uVar54;
      local_1288._2_2_ = local_1288._2_2_ & uVar63;
      local_1288._4_2_ = local_1288._4_2_ & uVar64;
      local_1288._6_2_ = local_1288._6_2_ & uVar66;
      local_1288._8_2_ = local_1288._8_2_ & uVar67;
      local_1288._10_2_ = local_1288._10_2_ & uVar69;
      local_1288._12_2_ = local_1288._12_2_ & uVar70;
      local_1288._14_2_ = local_1288._14_2_ & uVar72;
      pPVar42 = pPVar53 + 4;
      puVar37 = &local_1278;
      pPVar53 = pPVar42;
    } while (pVVar50 != pVVar51);
    local_1298._2_2_ = uVar77;
    local_1298._0_2_ = uVar73;
    local_1298._4_2_ = uVar78;
    local_1298._6_2_ = uVar79;
    local_1298._8_2_ = uVar80;
    local_1298._10_2_ = uVar81;
    local_1298._12_2_ = uVar82;
    local_1298._14_2_ = uVar83;
    local_12c8._2_2_ = local_1288._2_2_;
    local_12c8._0_2_ = local_1288._0_2_;
    local_12c8._4_2_ = local_1288._4_2_;
    local_12c8._6_2_ = local_1288._6_2_;
    local_12c8._8_2_ = local_1288._8_2_;
    local_12c8._10_2_ = local_1288._10_2_;
    local_12c8._12_2_ = local_1288._12_2_;
    local_12c8._14_2_ = local_1288._14_2_;
    local_1258 = _LC3;
    uStack_1254 = _LC3;
    uStack_1250 = _LC3;
    uStack_124c = _LC3;
    local_1268 = _LC3;
    uStack_1264 = _LC3;
    uStack_1260 = _LC3;
    uStack_125c = _LC3;
    ExtractBlocks(pVVar50,local_648,param_2,param_4);
    auVar76._2_2_ = uVar77;
    auVar76._0_2_ = uVar73;
    auVar76._4_2_ = uVar78;
    auVar76._6_2_ = uVar79;
    auVar76._8_2_ = uVar80;
    auVar76._10_2_ = uVar81;
    auVar76._12_2_ = uVar82;
    auVar76._14_2_ = uVar83;
    local_12e8 = (ushort)(SUB161(auVar76 >> 7,0) & 1) | (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
                 (ushort)((byte)(uVar83 >> 7) & 1) << 0xe | uVar83 & 0x8000;
    if (local_12e8 != 0) {
      puVar49 = local_5e8;
      do {
        uVar54 = *(ushort *)pVVar52;
        uVar63 = *(ushort *)(pVVar52 + 2);
        uVar64 = *(ushort *)(pVVar52 + 4);
        uVar66 = *(ushort *)(pVVar52 + 6);
        uVar67 = *(ushort *)(pVVar52 + 8);
        uVar69 = *(ushort *)(pVVar52 + 10);
        uVar70 = *(ushort *)(pVVar52 + 0xc);
        uVar72 = *(ushort *)(pVVar52 + 0xe);
        puVar39 = puVar49 + -0x30;
        pVVar51 = pVVar50;
        do {
          puVar40 = puVar39 + 0x10;
          uVar73 = *puVar39;
          uVar77 = puVar39[1];
          uVar78 = puVar39[2];
          uVar79 = puVar39[3];
          uVar80 = puVar39[4];
          uVar81 = puVar39[5];
          uVar82 = puVar39[6];
          uVar83 = puVar39[7];
          *(ushort *)pVVar51 = ~uVar54 & *(ushort *)pVVar51;
          *(ushort *)(pVVar51 + 2) = ~uVar63 & *(ushort *)(pVVar51 + 2);
          *(ushort *)(pVVar51 + 4) = ~uVar64 & *(ushort *)(pVVar51 + 4);
          *(ushort *)(pVVar51 + 6) = ~uVar66 & *(ushort *)(pVVar51 + 6);
          *(ushort *)(pVVar51 + 8) = ~uVar67 & *(ushort *)(pVVar51 + 8);
          *(ushort *)(pVVar51 + 10) = ~uVar69 & *(ushort *)(pVVar51 + 10);
          *(ushort *)(pVVar51 + 0xc) = ~uVar70 & *(ushort *)(pVVar51 + 0xc);
          *(ushort *)(pVVar51 + 0xe) = ~uVar72 & *(ushort *)(pVVar51 + 0xe);
          *puVar39 = ~uVar54 & uVar73;
          puVar39[1] = ~uVar54 & uVar77;
          puVar39[2] = ~uVar63 & uVar78;
          puVar39[3] = ~uVar63 & uVar79;
          puVar39[4] = ~uVar64 & uVar80;
          puVar39[5] = ~uVar64 & uVar81;
          puVar39[6] = ~uVar66 & uVar82;
          puVar39[7] = ~uVar66 & uVar83;
          puVar39[8] = ~uVar67 & puVar39[8];
          puVar39[9] = ~uVar67 & puVar39[9];
          puVar39[10] = ~uVar69 & puVar39[0xc];
          puVar39[0xb] = ~uVar69 & puVar39[0xd];
          puVar39[0xc] = ~uVar70 & puVar39[0x10];
          puVar39[0xd] = ~uVar70 & puVar39[0x11];
          puVar39[0xe] = ~uVar72 & puVar39[0x14];
          puVar39[0xf] = ~uVar72 & puVar39[0x15];
          puVar39 = puVar40;
          pVVar51 = pVVar51 + 0x10;
        } while (puVar49 != puVar40);
        pVVar50 = pVVar50 + 0x30;
        pVVar52 = pVVar52 + 0x10;
        puVar49 = puVar49 + 0x30;
      } while (local_e48 != pVVar50);
    }
  }
  else {
    local_1288 = (undefined1  [16])0x0;
    pVVar52 = local_1248;
    for (lVar41 = 0x20; lVar41 != 0; lVar41 = lVar41 + -1) {
      *(undefined8 *)pVVar52 = 0;
      pVVar52 = pVVar52 + 8;
    }
    local_1258 = _LC3;
    uStack_1254 = _LC3;
    uStack_1250 = _LC3;
    uStack_124c = _LC3;
    local_1268 = _LC3;
    uStack_1264 = _LC3;
    uStack_1260 = _LC3;
    uStack_125c = _LC3;
    ExtractBlocks(local_1148,local_648,param_2,param_4);
    local_12e8 = 0;
    local_12c8 = (undefined1  [16])0x0;
    auVar76 = (undefined1  [16])0x0;
  }
  local_12f8 = local_648;
  local_12b8 = (Int16CompFlag *)local_1248;
  uVar54 = (ushort)(SUB161(local_12c8 >> 7,0) & 1) | (ushort)(SUB161(local_12c8 >> 0xf,0) & 1) << 1
           | (ushort)(SUB161(local_12c8 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(local_12c8 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(local_12c8 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(local_12c8 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(local_12c8 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(local_12c8 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(local_12c8 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(local_12c8 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(local_12c8 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(local_12c8 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(local_12c8 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(local_12c8 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(local_12c8 >> 0x77,0) & 1) << 0xe |
           (ushort)(byte)(local_12c8[0xf] >> 7) << 0xf;
  pVVar52 = (VInt16<2> *)local_12b8;
  auVar94 = __LC114;
  if (uVar54 != 0xffff) {
    EncodePlanar(param_1,(Float *)&local_1268,local_1148,local_12f8,param_4);
    auVar94 = __LC114;
  }
  do {
    pVVar50 = pVVar52 + 0x10;
    uVar63 = auVar94._0_2_ - (*(ushort *)pVVar52 & __LC30);
    sVar91 = auVar94._2_2_ - (*(ushort *)(pVVar52 + 2) & _UNK_0010b332);
    sVar92 = auVar94._4_2_ - (*(ushort *)(pVVar52 + 4) & _UNK_0010b334);
    sVar93 = auVar94._6_2_ - (*(ushort *)(pVVar52 + 6) & _UNK_0010b336);
    uVar84 = CONCAT26(sVar93,CONCAT24(sVar92,CONCAT22(sVar91,uVar63)));
    uVar64 = auVar94._8_2_ - (*(ushort *)(pVVar52 + 8) & _UNK_0010b338);
    auVar87._0_10_ = CONCAT28(uVar64,uVar84);
    auVar87._10_2_ = auVar94._10_2_ - (*(ushort *)(pVVar52 + 10) & _UNK_0010b33a);
    auVar87._12_2_ = auVar94._12_2_ - (*(ushort *)(pVVar52 + 0xc) & _UNK_0010b33c);
    auVar87._14_2_ = auVar94._14_2_ - (*(ushort *)(pVVar52 + 0xe) & _UNK_0010b33e);
    pVVar52 = pVVar50;
    auVar94 = auVar87;
  } while (local_1148 != pVVar50);
  if ((*(uint *)param_4 & 0x200) == 0) {
    pVVar52 = local_a48;
    fVar102 = *(float *)(param_3 + 0x213d4);
    fVar106 = *(float *)(param_3 + 0x213d8);
    fVar108 = *(float *)(param_3 + 0x213dc);
    fVar111 = *(float *)(param_3 + 0x213c8);
    fVar113 = *(float *)(param_3 + 0x213cc);
    fVar115 = *(float *)(param_3 + 0x213d0);
    pFVar47 = local_12f8;
    pVVar50 = pVVar52;
    do {
      fVar117 = *(float *)(pFVar47 + 4);
      fVar119 = *(float *)(pFVar47 + 8);
      fVar137 = *(float *)(pFVar47 + 0xc);
      fVar121 = *(float *)(pFVar47 + 0x24);
      fVar138 = *(float *)(pFVar47 + 0x28);
      fVar122 = *(float *)(pFVar47 + 0x2c);
      pFVar48 = pFVar47 + 0x60;
      fVar139 = *(float *)(pFVar47 + 0x44);
      fVar123 = *(float *)(pFVar47 + 0x48);
      fVar140 = *(float *)(pFVar47 + 0x4c);
      fVar124 = *(float *)(pFVar47 + 0x30);
      fVar125 = *(float *)(pFVar47 + 0x34);
      fVar127 = *(float *)(pFVar47 + 0x38);
      fVar129 = *(float *)(pFVar47 + 0x3c);
      *(float *)pVVar50 =
           *(float *)pFVar47 * fVar111 + *(float *)(pFVar47 + 0x20) * fVar113 +
           *(float *)(pFVar47 + 0x40) * fVar115;
      *(float *)(pVVar50 + 4) = fVar117 * fVar111 + fVar121 * fVar113 + fVar139 * fVar115;
      *(float *)(pVVar50 + 8) = fVar119 * fVar111 + fVar138 * fVar113 + fVar123 * fVar115;
      *(float *)(pVVar50 + 0xc) = fVar137 * fVar111 + fVar122 * fVar113 + fVar140 * fVar115;
      fVar117 = *(float *)(pFVar47 + 0x14);
      fVar119 = *(float *)(pFVar47 + 0x18);
      fVar137 = *(float *)(pFVar47 + 0x1c);
      fVar121 = *(float *)(pFVar47 + 0x54);
      fVar138 = *(float *)(pFVar47 + 0x58);
      fVar122 = *(float *)(pFVar47 + 0x5c);
      fVar139 = *(float *)(pFVar47 + 0x20);
      fVar123 = *(float *)(pFVar47 + 0x24);
      fVar140 = *(float *)(pFVar47 + 0x28);
      fVar131 = *(float *)(pFVar47 + 0x2c);
      *(float *)(pVVar50 + 0x10) =
           *(float *)(pFVar47 + 0x10) * fVar111 + fVar124 * fVar113 +
           *(float *)(pFVar47 + 0x50) * fVar115;
      *(float *)(pVVar50 + 0x14) = fVar117 * fVar111 + fVar125 * fVar113 + fVar121 * fVar115;
      *(float *)(pVVar50 + 0x18) = fVar119 * fVar111 + fVar127 * fVar113 + fVar138 * fVar115;
      *(float *)(pVVar50 + 0x1c) = fVar137 * fVar111 + fVar129 * fVar113 + fVar122 * fVar115;
      fVar117 = *(float *)(pFVar47 + 4);
      fVar119 = *(float *)(pFVar47 + 8);
      fVar137 = *(float *)(pFVar47 + 0xc);
      fVar121 = *(float *)(pFVar47 + 0x44);
      fVar138 = *(float *)(pFVar47 + 0x48);
      fVar122 = *(float *)(pFVar47 + 0x4c);
      fVar124 = *(float *)(pFVar47 + 0x30);
      fVar125 = *(float *)(pFVar47 + 0x34);
      fVar127 = *(float *)(pFVar47 + 0x38);
      fVar129 = *(float *)(pFVar47 + 0x3c);
      *(float *)(pVVar50 + 0x20) =
           *(float *)pFVar47 * fVar102 + fVar139 * fVar106 + *(float *)(pFVar47 + 0x40) * fVar108;
      *(float *)(pVVar50 + 0x24) = fVar117 * fVar102 + fVar123 * fVar106 + fVar121 * fVar108;
      *(float *)(pVVar50 + 0x28) = fVar119 * fVar102 + fVar140 * fVar106 + fVar138 * fVar108;
      *(float *)(pVVar50 + 0x2c) = fVar137 * fVar102 + fVar131 * fVar106 + fVar122 * fVar108;
      fVar117 = *(float *)(pFVar47 + 0x14);
      fVar119 = *(float *)(pFVar47 + 0x18);
      fVar137 = *(float *)(pFVar47 + 0x1c);
      fVar121 = *(float *)(pFVar47 + 0x54);
      fVar138 = *(float *)(pFVar47 + 0x58);
      fVar122 = *(float *)(pFVar47 + 0x5c);
      *(float *)(pVVar50 + 0x30) =
           *(float *)(pFVar47 + 0x10) * fVar102 + fVar124 * fVar106 +
           *(float *)(pFVar47 + 0x50) * fVar108;
      *(float *)(pVVar50 + 0x34) = fVar117 * fVar102 + fVar125 * fVar106 + fVar121 * fVar108;
      *(float *)(pVVar50 + 0x38) = fVar119 * fVar102 + fVar127 * fVar106 + fVar138 * fVar108;
      *(float *)(pVVar50 + 0x3c) = fVar137 * fVar102 + fVar129 * fVar106 + fVar122 * fVar108;
      pFVar47 = pFVar48;
      pVVar50 = pVVar50 + 0x40;
    } while (local_48 != pFVar48);
    fVar113 = 0.0;
    fVar115 = 0.0;
    fVar117 = 0.0;
    fVar119 = 0.0;
    fVar139 = 0.0;
    fVar123 = 0.0;
    fVar140 = 0.0;
    fVar124 = 0.0;
    fVar137 = 0.0;
    fVar121 = 0.0;
    fVar138 = 0.0;
    fVar122 = 0.0;
    fVar102 = 0.0;
    fVar106 = 0.0;
    fVar108 = 0.0;
    fVar111 = 0.0;
    pVVar50 = pVVar52;
    do {
      fVar102 = fVar102 + *(float *)pVVar50;
      fVar106 = fVar106 + *(float *)(pVVar50 + 4);
      fVar108 = fVar108 + *(float *)(pVVar50 + 8);
      fVar111 = fVar111 + *(float *)(pVVar50 + 0xc);
      fVar137 = fVar137 + *(float *)(pVVar50 + 0x10);
      fVar121 = fVar121 + *(float *)(pVVar50 + 0x14);
      fVar138 = fVar138 + *(float *)(pVVar50 + 0x18);
      fVar122 = fVar122 + *(float *)(pVVar50 + 0x1c);
      pVVar51 = pVVar50 + 0x40;
      fVar139 = fVar139 + *(float *)(pVVar50 + 0x20);
      fVar123 = fVar123 + *(float *)(pVVar50 + 0x24);
      fVar140 = fVar140 + *(float *)(pVVar50 + 0x28);
      fVar124 = fVar124 + *(float *)(pVVar50 + 0x2c);
      fVar113 = fVar113 + *(float *)(pVVar50 + 0x30);
      fVar115 = fVar115 + *(float *)(pVVar50 + 0x34);
      fVar117 = fVar117 + *(float *)(pVVar50 + 0x38);
      fVar119 = fVar119 + *(float *)(pVVar50 + 0x3c);
      pVVar50 = pVVar51;
    } while ((VInt16<2> *)local_648 != pVVar51);
    pVVar50 = local_e48;
    if (param_5) {
      auVar4._10_2_ = 0;
      auVar4._0_10_ = auVar87._0_10_;
      auVar4._12_2_ = sVar93;
      auVar5._8_2_ = sVar92;
      auVar5._0_8_ = uVar84;
      auVar5._10_4_ = auVar4._10_4_;
      auVar31._6_8_ = 0;
      auVar31._0_6_ = auVar5._8_6_;
      auVar6._4_2_ = sVar91;
      auVar6._0_4_ = CONCAT22(sVar91,uVar63);
      auVar6._6_8_ = SUB148(auVar31 << 0x40,6);
      fVar125 = (float)(auVar4._10_4_ >> 0x10);
      do {
        fVar127 = *(float *)(pVVar52 + 0x14);
        fVar129 = *(float *)(pVVar52 + 0x18);
        fVar131 = *(float *)(pVVar52 + 0x1c);
        fVar133 = *(float *)pVVar52;
        fVar134 = *(float *)(pVVar52 + 4);
        fVar135 = *(float *)(pVVar52 + 8);
        fVar136 = *(float *)(pVVar52 + 0xc);
        pVVar51 = pVVar52 + 0x40;
        *(float *)(pVVar50 + 0x10) = *(float *)(pVVar52 + 0x10) * (float)uVar64 - fVar137;
        *(float *)(pVVar50 + 0x14) = fVar127 * (float)auVar87._10_2_ - fVar121;
        *(float *)(pVVar50 + 0x18) = fVar129 * (float)auVar87._12_2_ - fVar138;
        *(float *)(pVVar50 + 0x1c) = fVar131 * (float)auVar87._14_2_ - fVar122;
        fVar127 = *(float *)(pVVar52 + 0x30);
        fVar129 = *(float *)(pVVar52 + 0x34);
        fVar131 = *(float *)(pVVar52 + 0x38);
        fVar55 = *(float *)(pVVar52 + 0x3c);
        *(float *)pVVar50 = fVar133 * (float)uVar63 - fVar102;
        *(float *)(pVVar50 + 4) = fVar134 * (float)auVar6._4_4_ - fVar106;
        *(float *)(pVVar50 + 8) = fVar135 * (float)auVar5._8_4_ - fVar108;
        *(float *)(pVVar50 + 0xc) = fVar136 * fVar125 - fVar111;
        fVar133 = *(float *)(pVVar52 + 0x20);
        fVar134 = *(float *)(pVVar52 + 0x24);
        fVar135 = *(float *)(pVVar52 + 0x28);
        fVar136 = *(float *)(pVVar52 + 0x2c);
        *(float *)(pVVar50 + 0x30) = fVar127 * (float)uVar64 - fVar113;
        *(float *)(pVVar50 + 0x34) = fVar129 * (float)auVar87._10_2_ - fVar115;
        *(float *)(pVVar50 + 0x38) = fVar131 * (float)auVar87._12_2_ - fVar117;
        *(float *)(pVVar50 + 0x3c) = fVar55 * (float)auVar87._14_2_ - fVar119;
        *(float *)(pVVar50 + 0x20) = fVar133 * (float)uVar63 - fVar139;
        *(float *)(pVVar50 + 0x24) = fVar134 * (float)auVar6._4_4_ - fVar123;
        *(float *)(pVVar50 + 0x28) = fVar135 * (float)auVar5._8_4_ - fVar140;
        *(float *)(pVVar50 + 0x2c) = fVar136 * fVar125 - fVar124;
        pVVar52 = pVVar51;
        pVVar50 = pVVar50 + 0x40;
      } while ((VInt16<2> *)local_648 != pVVar51);
    }
    else {
      do {
        fVar125 = *(float *)(pVVar52 + 0x14);
        fVar127 = *(float *)(pVVar52 + 0x18);
        fVar129 = *(float *)(pVVar52 + 0x1c);
        fVar131 = *(float *)pVVar52;
        fVar133 = *(float *)(pVVar52 + 4);
        fVar134 = *(float *)(pVVar52 + 8);
        fVar135 = *(float *)(pVVar52 + 0xc);
        pVVar51 = pVVar52 + 0x40;
        *(float *)(pVVar50 + 0x10) = *(float *)(pVVar52 + 0x10) * _LC119 - fVar137;
        *(float *)(pVVar50 + 0x14) = fVar125 * _LC119 - fVar121;
        *(float *)(pVVar50 + 0x18) = fVar127 * _LC119 - fVar138;
        *(float *)(pVVar50 + 0x1c) = fVar129 * _LC119 - fVar122;
        fVar125 = *(float *)(pVVar52 + 0x30);
        fVar127 = *(float *)(pVVar52 + 0x34);
        fVar129 = *(float *)(pVVar52 + 0x38);
        fVar136 = *(float *)(pVVar52 + 0x3c);
        *(float *)pVVar50 = fVar131 * _LC119 - fVar102;
        *(float *)(pVVar50 + 4) = fVar133 * _LC119 - fVar106;
        *(float *)(pVVar50 + 8) = fVar134 * _LC119 - fVar108;
        *(float *)(pVVar50 + 0xc) = fVar135 * _LC119 - fVar111;
        fVar131 = *(float *)(pVVar52 + 0x20);
        fVar133 = *(float *)(pVVar52 + 0x24);
        fVar134 = *(float *)(pVVar52 + 0x28);
        fVar135 = *(float *)(pVVar52 + 0x2c);
        *(float *)(pVVar50 + 0x30) = fVar125 * _LC119 - fVar113;
        *(float *)(pVVar50 + 0x34) = fVar127 * _LC119 - fVar115;
        *(float *)(pVVar50 + 0x38) = fVar129 * _LC119 - fVar117;
        *(float *)(pVVar50 + 0x3c) = fVar136 * _LC119 - fVar119;
        *(float *)(pVVar50 + 0x20) = fVar131 * _LC119 - fVar139;
        *(float *)(pVVar50 + 0x24) = fVar133 * _LC119 - fVar123;
        *(float *)(pVVar50 + 0x28) = fVar134 * _LC119 - fVar140;
        *(float *)(pVVar50 + 0x2c) = fVar135 * _LC119 - fVar124;
        pVVar52 = pVVar51;
        pVVar50 = pVVar50 + 0x40;
      } while ((VInt16<2> *)local_648 != pVVar51);
    }
  }
  else {
    pVVar52 = local_a48;
    pVVar50 = local_1148;
    do {
      sVar93 = *(short *)(pVVar50 + 2);
      sVar95 = *(short *)(pVVar50 + 4);
      sVar96 = *(short *)(pVVar50 + 6);
      sVar97 = *(short *)(pVVar50 + 8);
      sVar98 = *(short *)(pVVar50 + 10);
      sVar99 = *(short *)(pVVar50 + 0xc);
      sVar100 = *(short *)(pVVar50 + 0xe);
      sVar101 = *(short *)(pVVar50 + 0x22);
      sVar104 = *(short *)(pVVar50 + 0x24);
      sVar105 = *(short *)(pVVar50 + 0x26);
      sVar107 = *(short *)(pVVar50 + 0x28);
      sVar109 = *(short *)(pVVar50 + 0x2a);
      sVar110 = *(short *)(pVVar50 + 0x2c);
      sVar112 = *(short *)(pVVar50 + 0x2e);
      pVVar51 = pVVar50 + 0x30;
      auVar94 = *(undefined1 (*) [16])(pVVar50 + 0x10);
      *(short *)pVVar52 = *(short *)pVVar50 - *(short *)(pVVar50 + 0x20);
      *(short *)(pVVar52 + 2) = sVar93 - sVar101;
      *(short *)(pVVar52 + 4) = sVar95 - sVar104;
      *(short *)(pVVar52 + 6) = sVar96 - sVar105;
      *(short *)(pVVar52 + 8) = sVar97 - sVar107;
      *(short *)(pVVar52 + 10) = sVar98 - sVar109;
      *(short *)(pVVar52 + 0xc) = sVar99 - sVar110;
      *(short *)(pVVar52 + 0xe) = sVar100 - sVar112;
      sVar93 = *(short *)(pVVar50 + 2);
      sVar95 = *(short *)(pVVar50 + 4);
      sVar96 = *(short *)(pVVar50 + 6);
      sVar97 = *(short *)(pVVar50 + 8);
      sVar98 = *(short *)(pVVar50 + 10);
      sVar99 = *(short *)(pVVar50 + 0xc);
      sVar100 = *(short *)(pVVar50 + 0xe);
      sVar101 = *(short *)(pVVar50 + 0x22);
      sVar104 = *(short *)(pVVar50 + 0x24);
      sVar105 = *(short *)(pVVar50 + 0x26);
      sVar107 = *(short *)(pVVar50 + 0x28);
      sVar109 = *(short *)(pVVar50 + 0x2a);
      sVar110 = *(short *)(pVVar50 + 0x2c);
      sVar112 = *(short *)(pVVar50 + 0x2e);
      auVar94 = psllw(auVar94,1);
      *(short *)(pVVar52 + 0x10) = (*(short *)pVVar50 + *(short *)(pVVar50 + 0x20)) - auVar94._0_2_;
      *(short *)(pVVar52 + 0x12) = (sVar93 + sVar101) - auVar94._2_2_;
      *(short *)(pVVar52 + 0x14) = (sVar95 + sVar104) - auVar94._4_2_;
      *(short *)(pVVar52 + 0x16) = (sVar96 + sVar105) - auVar94._6_2_;
      *(short *)(pVVar52 + 0x18) = (sVar97 + sVar107) - auVar94._8_2_;
      *(short *)(pVVar52 + 0x1a) = (sVar98 + sVar109) - auVar94._10_2_;
      *(short *)(pVVar52 + 0x1c) = (sVar99 + sVar110) - auVar94._12_2_;
      *(short *)(pVVar52 + 0x1e) = (sVar100 + sVar112) - auVar94._14_2_;
      pVVar52 = pVVar52 + 0x20;
      pVVar50 = pVVar51;
    } while (local_e48 != pVVar51);
    sVar101 = 0;
    sVar104 = 0;
    sVar105 = 0;
    sVar107 = 0;
    sVar109 = 0;
    sVar110 = 0;
    sVar112 = 0;
    sVar93 = 0;
    sVar95 = 0;
    sVar96 = 0;
    sVar97 = 0;
    sVar98 = 0;
    sVar99 = 0;
    sVar100 = 0;
    pVVar52 = local_a48;
    do {
      sVar7 = *(short *)pVVar52;
      pVVar51 = pVVar52 + 2;
      pVVar8 = pVVar52 + 4;
      pVVar9 = pVVar52 + 8;
      pVVar10 = pVVar52 + 10;
      pVVar11 = pVVar52 + 0xc;
      pVVar12 = pVVar52 + 0xe;
      pVVar50 = pVVar52 + 0x10;
      pVVar13 = pVVar52 + 0x12;
      pVVar14 = pVVar52 + 0x14;
      pVVar15 = pVVar52 + 0x18;
      pVVar16 = pVVar52 + 0x1a;
      pVVar17 = pVVar52 + 0x1c;
      pVVar18 = pVVar52 + 0x1e;
      pVVar52 = pVVar52 + 0x20;
      sVar93 = sVar7 + sVar93;
      sVar95 = *(short *)pVVar51 + sVar95;
      sVar96 = *(short *)pVVar8 + sVar96;
      sVar97 = *(short *)pVVar9 + sVar97;
      sVar98 = *(short *)pVVar10 + sVar98;
      sVar99 = *(short *)pVVar11 + sVar99;
      sVar100 = *(short *)pVVar12 + sVar100;
      sVar101 = *(short *)pVVar50 + sVar101;
      sVar104 = *(short *)pVVar13 + sVar104;
      sVar105 = *(short *)pVVar14 + sVar105;
      sVar107 = *(short *)pVVar15 + sVar107;
      sVar109 = *(short *)pVVar16 + sVar109;
      sVar110 = *(short *)pVVar17 + sVar110;
      sVar112 = *(short *)pVVar18 + sVar112;
    } while (local_848 != pVVar52);
    pVVar52 = local_e48;
    pVVar50 = local_a48;
    if (param_5) {
      do {
        sVar7 = *(short *)(pVVar50 + 2);
        pVVar51 = pVVar52 + 0x40;
        auVar32._10_2_ = *(short *)(pVVar50 + 4) * sVar92 - sVar96;
        auVar32._0_10_ = (unkuint10)0;
        uVar3 = CONCAT24(*(short *)(pVVar50 + 10) * auVar87._10_2_ - sVar98,
                         (uint)(ushort)(*(short *)(pVVar50 + 8) * uVar64 - sVar97));
        auVar56._0_10_ = (unkuint10)uVar3 << 0x10;
        auVar56._10_2_ = *(short *)(pVVar50 + 0xc) * auVar87._12_2_ - sVar99;
        auVar94._12_2_ = 0;
        auVar94._0_12_ = auVar56;
        auVar94._14_2_ = *(short *)(pVVar50 + 0xe) * auVar87._14_2_ - sVar100;
        sVar19 = *(short *)(pVVar50 + 0x10);
        sVar20 = *(short *)(pVVar50 + 0x12);
        sVar21 = *(short *)(pVVar50 + 0x14);
        sVar22 = *(short *)(pVVar50 + 0x18);
        sVar23 = *(short *)(pVVar50 + 0x1a);
        sVar24 = *(short *)(pVVar50 + 0x1c);
        sVar25 = *(short *)(pVVar50 + 0x1e);
        *(float *)pVVar52 = (float)(int)(short)(*(short *)pVVar50 * uVar63 - sVar93);
        *(float *)(pVVar52 + 4) =
             (float)(SUB164(ZEXT616(CONCAT42(auVar32._8_4_,sVar7 * sVar91 - sVar95)) << 0x30,4) >>
                    0x10);
        *(float *)(pVVar52 + 8) = (float)(auVar32._8_4_ >> 0x10);
        *(undefined4 *)(pVVar52 + 0xc) = 0;
        *(float *)(pVVar52 + 0x10) = (float)((int)auVar56._0_10_ >> 0x10);
        *(float *)(pVVar52 + 0x14) = (float)(int)((int6)uVar3 >> 0x20);
        *(float *)(pVVar52 + 0x18) = (float)(auVar56._8_4_ >> 0x10);
        *(float *)(pVVar52 + 0x1c) = (float)(auVar94._12_4_ >> 0x10);
        auVar33._10_2_ = sVar21 * sVar92 - sVar105;
        auVar33._0_10_ = (unkuint10)0;
        uVar3 = CONCAT24(sVar23 * auVar87._10_2_ - sVar109,(uint)(ushort)(sVar22 * uVar64 - sVar107)
                        );
        auVar57._0_10_ = (unkuint10)uVar3 << 0x10;
        auVar57._10_2_ = sVar24 * auVar87._12_2_ - sVar110;
        auVar58._12_2_ = 0;
        auVar58._0_12_ = auVar57;
        auVar58._14_2_ = sVar25 * auVar87._14_2_ - sVar112;
        *(float *)(pVVar52 + 0x20) = (float)(int)(short)(sVar19 * uVar63 - sVar101);
        *(float *)(pVVar52 + 0x24) =
             (float)(SUB164(ZEXT616(CONCAT42(auVar33._8_4_,sVar20 * sVar91 - sVar104)) << 0x30,4) >>
                    0x10);
        *(float *)(pVVar52 + 0x28) = (float)(auVar33._8_4_ >> 0x10);
        *(undefined4 *)(pVVar52 + 0x2c) = 0;
        *(float *)(pVVar52 + 0x30) = (float)((int)auVar57._0_10_ >> 0x10);
        *(float *)(pVVar52 + 0x34) = (float)(int)((int6)uVar3 >> 0x20);
        *(float *)(pVVar52 + 0x38) = (float)(auVar57._8_4_ >> 0x10);
        *(float *)(pVVar52 + 0x3c) = (float)(auVar58._12_4_ >> 0x10);
        pVVar52 = pVVar51;
        pVVar50 = pVVar50 + 0x20;
      } while (local_a48 != pVVar51);
    }
    else {
      do {
        pVVar51 = pVVar52 + 0x40;
        auVar94 = psllw(*(undefined1 (*) [16])pVVar50,4);
        uVar3 = CONCAT24(auVar94._10_2_ - sVar98,(uint)(ushort)(auVar94._8_2_ - sVar97));
        auVar85._0_10_ = (unkuint10)uVar3 << 0x10;
        auVar85._10_2_ = auVar94._12_2_ - sVar99;
        auVar89._12_2_ = 0;
        auVar89._0_12_ = auVar85;
        auVar89._14_2_ = auVar94._14_2_ - sVar100;
        auVar34._10_2_ = auVar94._4_2_ - sVar96;
        auVar34._0_10_ = (unkuint10)0;
        *(float *)pVVar52 = (float)(int)(short)(auVar94._0_2_ - sVar93);
        *(float *)(pVVar52 + 4) =
             (float)(SUB164(ZEXT616(CONCAT42(auVar34._8_4_,auVar94._2_2_ - sVar95)) << 0x30,4) >>
                    0x10);
        *(float *)(pVVar52 + 8) = (float)(auVar34._8_4_ >> 0x10);
        *(undefined4 *)(pVVar52 + 0xc) = 0;
        *(float *)(pVVar52 + 0x10) = (float)((int)auVar85._0_10_ >> 0x10);
        *(float *)(pVVar52 + 0x14) = (float)(int)((int6)uVar3 >> 0x20);
        *(float *)(pVVar52 + 0x18) = (float)(auVar85._8_4_ >> 0x10);
        *(float *)(pVVar52 + 0x1c) = (float)(auVar89._12_4_ >> 0x10);
        auVar94 = psllw(*(undefined1 (*) [16])(pVVar50 + 0x10),4);
        uVar3 = CONCAT24(auVar94._10_2_ - sVar109,(uint)(ushort)(auVar94._8_2_ - sVar107));
        auVar86._0_10_ = (unkuint10)uVar3 << 0x10;
        auVar86._10_2_ = auVar94._12_2_ - sVar110;
        auVar90._12_2_ = 0;
        auVar90._0_12_ = auVar86;
        auVar90._14_2_ = auVar94._14_2_ - sVar112;
        auVar35._10_2_ = auVar94._4_2_ - sVar105;
        auVar35._0_10_ = (unkuint10)0;
        *(float *)(pVVar52 + 0x20) = (float)(int)(short)(auVar94._0_2_ - sVar101);
        *(float *)(pVVar52 + 0x24) =
             (float)(SUB164(ZEXT616(CONCAT42(auVar35._8_4_,auVar94._2_2_ - sVar104)) << 0x30,4) >>
                    0x10);
        *(float *)(pVVar52 + 0x28) = (float)(auVar35._8_4_ >> 0x10);
        *(undefined4 *)(pVVar52 + 0x2c) = 0;
        *(float *)(pVVar52 + 0x30) = (float)((int)auVar86._0_10_ >> 0x10);
        *(float *)(pVVar52 + 0x34) = (float)(int)((int6)uVar3 >> 0x20);
        *(float *)(pVVar52 + 0x38) = (float)(auVar86._8_4_ >> 0x10);
        *(float *)(pVVar52 + 0x3c) = (float)(auVar90._12_4_ >> 0x10);
        pVVar52 = pVVar51;
        pVVar50 = pVVar50 + 0x20;
      } while (local_a48 != pVVar51);
    }
    pfVar43 = local_e28;
    do {
      pfVar44 = pfVar43 + 0x10;
      pfVar43[4] = pfVar43[4] * _LC32;
      pfVar43[5] = pfVar43[5] * _LC32;
      pfVar43[6] = pfVar43[6] * _LC32;
      pfVar43[7] = pfVar43[7] * _LC32;
      *pfVar43 = *pfVar43 * _LC32;
      pfVar43[1] = pfVar43[1] * _LC32;
      pfVar43[2] = pfVar43[2] * _LC32;
      pfVar43[3] = pfVar43[3] * _LC32;
      pfVar43 = pfVar44;
    } while (local_a28 != pfVar44);
  }
  fVar121 = 0.0;
  fVar122 = 0.0;
  fVar123 = 0.0;
  fVar124 = 0.0;
  fVar137 = 0.0;
  fVar138 = 0.0;
  fVar139 = 0.0;
  fVar140 = 0.0;
  fVar125 = 0.0;
  fVar127 = 0.0;
  fVar129 = 0.0;
  fVar131 = 0.0;
  fVar113 = 0.0;
  fVar115 = 0.0;
  fVar117 = 0.0;
  fVar119 = 0.0;
  fVar102 = 0.0;
  fVar106 = 0.0;
  fVar108 = 0.0;
  fVar111 = 0.0;
  fVar133 = 0.0;
  fVar134 = 0.0;
  fVar135 = 0.0;
  fVar136 = 0.0;
  pVVar52 = local_e48;
  do {
    fVar55 = *(float *)pVVar52;
    fVar65 = *(float *)(pVVar52 + 4);
    fVar68 = *(float *)(pVVar52 + 8);
    fVar71 = *(float *)(pVVar52 + 0xc);
    fVar114 = *(float *)(pVVar52 + 0x10);
    fVar116 = *(float *)(pVVar52 + 0x14);
    fVar118 = *(float *)(pVVar52 + 0x18);
    fVar120 = *(float *)(pVVar52 + 0x1c);
    pVVar50 = pVVar52 + 0x40;
    fVar145 = *(float *)(pVVar52 + 0x20);
    fVar146 = *(float *)(pVVar52 + 0x24);
    fVar147 = *(float *)(pVVar52 + 0x28);
    fVar148 = *(float *)(pVVar52 + 0x2c);
    fVar26 = *(float *)(pVVar52 + 0x30);
    fVar27 = *(float *)(pVVar52 + 0x34);
    fVar28 = *(float *)(pVVar52 + 0x38);
    fVar29 = *(float *)(pVVar52 + 0x3c);
    fVar137 = fVar137 + fVar55 * fVar55;
    fVar138 = fVar138 + fVar65 * fVar65;
    fVar139 = fVar139 + fVar68 * fVar68;
    fVar140 = fVar140 + fVar71 * fVar71;
    fVar125 = fVar125 + fVar114 * fVar114;
    fVar127 = fVar127 + fVar116 * fVar116;
    fVar129 = fVar129 + fVar118 * fVar118;
    fVar131 = fVar131 + fVar120 * fVar120;
    fVar121 = fVar121 + fVar114 * fVar26;
    fVar122 = fVar122 + fVar116 * fVar27;
    fVar123 = fVar123 + fVar118 * fVar28;
    fVar124 = fVar124 + fVar120 * fVar29;
    fVar113 = fVar113 + fVar145 * fVar145;
    fVar115 = fVar115 + fVar146 * fVar146;
    fVar117 = fVar117 + fVar147 * fVar147;
    fVar119 = fVar119 + fVar148 * fVar148;
    fVar133 = fVar133 + fVar145 * fVar55;
    fVar134 = fVar134 + fVar146 * fVar65;
    fVar135 = fVar135 + fVar147 * fVar68;
    fVar136 = fVar136 + fVar148 * fVar71;
    fVar102 = fVar102 + fVar26 * fVar26;
    fVar106 = fVar106 + fVar27 * fVar27;
    fVar108 = fVar108 + fVar28 * fVar28;
    fVar111 = fVar111 + fVar29 * fVar29;
    pVVar52 = pVVar50;
  } while ((Int16CompFlag *)local_a48 != (Int16CompFlag *)pVVar50);
  fVar55 = (fVar113 + fVar137) * _LC14;
  fVar65 = (fVar115 + fVar138) * _LC14;
  fVar68 = (fVar117 + fVar139) * _LC14;
  fVar71 = (fVar119 + fVar140) * _LC14;
  fVar145 = (fVar102 + fVar125) * _LC14;
  fVar146 = (fVar106 + fVar127) * _LC14;
  fVar147 = (fVar108 + fVar129) * _LC14;
  fVar148 = (fVar111 + fVar131) * _LC14;
  auVar88._0_4_ = fVar55 * fVar55 - (fVar113 * fVar137 - fVar133 * fVar133);
  auVar88._4_4_ = fVar65 * fVar65 - (fVar115 * fVar138 - fVar134 * fVar134);
  auVar88._8_4_ = fVar68 * fVar68 - (fVar117 * fVar139 - fVar135 * fVar135);
  auVar88._12_4_ = fVar71 * fVar71 - (fVar119 * fVar140 - fVar136 * fVar136);
  auVar94 = maxps(ZEXT816(0),auVar88);
  auVar94 = sqrtps(auVar94,auVar94);
  fVar55 = fVar55 + auVar94._0_4_;
  fVar65 = fVar65 + auVar94._4_4_;
  fVar68 = fVar68 + auVar94._8_4_;
  fVar71 = fVar71 + auVar94._12_4_;
  auVar2._4_4_ = fVar146 * fVar146 - (fVar106 * fVar127 - fVar122 * fVar122);
  auVar2._0_4_ = fVar145 * fVar145 - (fVar102 * fVar125 - fVar121 * fVar121);
  auVar2._8_4_ = fVar147 * fVar147 - (fVar108 * fVar129 - fVar123 * fVar123);
  auVar2._12_4_ = fVar148 * fVar148 - (fVar111 * fVar131 - fVar124 * fVar124);
  auVar94 = maxps(ZEXT816(0),auVar2);
  fVar114 = (fVar113 - fVar55) + fVar133;
  fVar116 = (fVar115 - fVar65) + fVar134;
  fVar118 = (fVar117 - fVar68) + fVar135;
  fVar120 = (fVar119 - fVar71) + fVar136;
  auVar94 = sqrtps(auVar94,auVar94);
  fVar145 = fVar145 + auVar94._0_4_;
  fVar146 = fVar146 + auVar94._4_4_;
  fVar147 = fVar147 + auVar94._8_4_;
  fVar148 = fVar148 + auVar94._12_4_;
  fVar113 = (fVar102 - fVar145) + fVar121;
  fVar115 = (fVar106 - fVar146) + fVar122;
  fVar117 = (fVar108 - fVar147) + fVar123;
  fVar119 = (fVar111 - fVar148) + fVar124;
  fVar102 = 0.0 - ((fVar137 - fVar55) + fVar133);
  fVar106 = 0.0 - ((fVar138 - fVar65) + fVar134);
  fVar108 = 0.0 - ((fVar139 - fVar68) + fVar135);
  fVar111 = 0.0 - ((fVar140 - fVar71) + fVar136);
  fVar137 = 0.0 - ((fVar125 - fVar145) + fVar121);
  fVar121 = 0.0 - ((fVar127 - fVar146) + fVar122);
  fVar138 = 0.0 - ((fVar129 - fVar147) + fVar123);
  fVar122 = 0.0 - ((fVar131 - fVar148) + fVar124);
  uVar126 = -(uint)(fVar114 == 0.0 && fVar102 == 0.0);
  uVar128 = -(uint)(fVar116 == 0.0 && fVar106 == 0.0);
  uVar130 = -(uint)(fVar118 == 0.0 && fVar108 == 0.0);
  uVar132 = -(uint)(fVar120 == 0.0 && fVar111 == 0.0);
  uVar141 = -(uint)(fVar137 == 0.0 && fVar113 == 0.0);
  uVar142 = -(uint)(fVar121 == 0.0 && fVar115 == 0.0);
  uVar143 = -(uint)(fVar138 == 0.0 && fVar117 == 0.0);
  uVar144 = -(uint)(fVar122 == 0.0 && fVar119 == 0.0);
  pIVar46 = (Int16CompFlag *)local_a48;
  pVVar52 = local_e48;
  do {
    pVVar50 = pVVar52 + 0x40;
    auVar59._4_4_ =
         -(uint)(*(float *)(pVVar52 + 4) * (float)(~uVar128 & (uint)fVar116 | uVar128 & (uint)_LC42)
                 + *(float *)(pVVar52 + 0x24) * fVar106 < 0.0);
    auVar59._0_4_ =
         -(uint)(*(float *)pVVar52 * (float)(~uVar126 & (uint)fVar114 | uVar126 & (uint)_LC42) +
                 *(float *)(pVVar52 + 0x20) * fVar102 < 0.0);
    auVar59._8_4_ =
         -(uint)(*(float *)(pVVar52 + 8) * (float)(~uVar130 & (uint)fVar118 | uVar130 & (uint)_LC42)
                 + *(float *)(pVVar52 + 0x28) * fVar108 < 0.0);
    auVar59._12_4_ =
         -(uint)(*(float *)(pVVar52 + 0xc) *
                 (float)(~uVar132 & (uint)fVar120 | uVar132 & (uint)_LC42) +
                 *(float *)(pVVar52 + 0x2c) * fVar111 < 0.0);
    auVar103._4_4_ =
         -(uint)(*(float *)(pVVar52 + 0x34) * fVar121 +
                 *(float *)(pVVar52 + 0x14) *
                 (float)(~uVar142 & (uint)fVar115 | (uint)_LC42 & uVar142) < 0.0);
    auVar103._0_4_ =
         -(uint)(*(float *)(pVVar52 + 0x30) * fVar137 +
                 *(float *)(pVVar52 + 0x10) *
                 (float)(~uVar141 & (uint)fVar113 | (uint)_LC42 & uVar141) < 0.0);
    auVar103._8_4_ =
         -(uint)(*(float *)(pVVar52 + 0x38) * fVar138 +
                 *(float *)(pVVar52 + 0x18) *
                 (float)(~uVar143 & (uint)fVar117 | (uint)_LC42 & uVar143) < 0.0);
    auVar103._12_4_ =
         -(uint)(*(float *)(pVVar52 + 0x3c) * fVar122 +
                 *(float *)(pVVar52 + 0x1c) *
                 (float)(~uVar144 & (uint)fVar119 | (uint)_LC42 & uVar144) < 0.0);
    auVar94 = packssdw(auVar59,auVar103);
    *(undefined1 (*) [16])pIVar46 = auVar94;
    pIVar46 = pIVar46 + 0x10;
    pVVar52 = pVVar50;
  } while ((Int16CompFlag *)local_a48 != (Int16CompFlag *)pVVar50);
  local_12c8._0_8_ = auVar76._0_8_;
  uVar84 = local_12c8._0_8_;
  if (uVar54 == 0xffff) {
    if (local_12e8 == 0) goto LAB_00109291;
  }
  else {
    EncodeTMode(param_1,(Float *)&local_1268,(Int16CompFlag *)local_a48,local_1148,local_12f8,
                param_4);
    pIVar46 = (Int16CompFlag *)local_a48;
    do {
      pIVar45 = pIVar46 + 0x10;
      *(uint *)pIVar46 = *(uint *)pIVar46 ^ 0xffffffff;
      *(uint *)(pIVar46 + 4) = *(uint *)(pIVar46 + 4) ^ 0xffffffff;
      *(uint *)(pIVar46 + 8) = *(uint *)(pIVar46 + 8) ^ 0xffffffff;
      *(uint *)(pIVar46 + 0xc) = *(uint *)(pIVar46 + 0xc) ^ 0xffffffff;
      pIVar46 = pIVar45;
    } while (local_948 != pIVar45);
    EncodeTMode(param_1,(Float *)&local_1268,(Int16CompFlag *)local_a48,local_1148,local_12f8,
                param_4);
    EncodeHMode(param_1,(Float *)&local_1268,(Int16CompFlag *)local_a48,local_1148,
                (HModeEval *)param_3,local_12f8,param_4);
    CompressETC1BlockInternal
              ((Float *)&local_1268,param_1,local_1148,local_12f8,
               (DifferentialResolveStorage *)(param_3 + 0x83e0),param_4,true);
    pIVar46 = (Int16CompFlag *)local_a48;
    if (local_12e8 == 0) goto LAB_00109291;
    do {
      pIVar45 = pIVar46 + 0x10;
      *(uint *)pIVar46 = *(uint *)pIVar46 ^ 0xffffffff;
      *(uint *)(pIVar46 + 4) = *(uint *)(pIVar46 + 4) ^ 0xffffffff;
      *(uint *)(pIVar46 + 8) = *(uint *)(pIVar46 + 8) ^ 0xffffffff;
      *(uint *)(pIVar46 + 0xc) = *(uint *)(pIVar46 + 0xc) ^ 0xffffffff;
      pIVar46 = pIVar45;
    } while (local_948 != pIVar45);
  }
  local_12c8._0_8_ = param_3 + 0x83e0;
  auVar62._0_12_ = auVar76._0_12_;
  auVar62._12_2_ = auVar76._6_2_;
  auVar62._14_2_ = auVar76._6_2_;
  auVar61._12_4_ = auVar62._12_4_;
  auVar61._0_10_ = auVar76._0_10_;
  auVar61._10_2_ = auVar76._4_2_;
  auVar60._10_6_ = auVar61._10_6_;
  auVar60._8_2_ = auVar76._4_2_;
  auVar60._0_8_ = uVar84;
  auVar30._4_8_ = auVar60._8_8_;
  auVar30._2_2_ = auVar76._2_2_;
  auVar30._0_2_ = auVar76._2_2_;
  uVar126 = CONCAT22(auVar76._0_2_,auVar76._0_2_);
  uVar128 = CONCAT22(auVar76._8_2_,auVar76._8_2_);
  auVar74._0_8_ = CONCAT26(auVar76._10_2_,CONCAT24(auVar76._10_2_,uVar128));
  auVar74._8_2_ = auVar76._12_2_;
  auVar74._10_2_ = auVar76._12_2_;
  auVar75._14_2_ = auVar76._14_2_;
  auVar75._12_2_ = auVar75._14_2_;
  auVar75._0_12_ = auVar74;
  uVar130 = (uint)((ulong)auVar74._0_8_ >> 0x20);
  local_1258 = ~uVar128 & local_1258 | uVar36 & uVar128;
  uStack_1254 = ~uVar130 & uStack_1254 | uVar36 & uVar130;
  uStack_1250 = ~auVar74._8_4_ & uStack_1250 | uVar36 & auVar74._8_4_;
  uStack_124c = ~auVar75._12_4_ & uStack_124c | uVar36 & auVar75._12_4_;
  local_1268 = ~uVar126 & local_1268 | uVar36 & uVar126;
  uStack_1264 = ~auVar30._0_4_ & uStack_1264 | uVar36 & auVar30._0_4_;
  uStack_1260 = ~auVar60._8_4_ & uStack_1260 | uVar36 & auVar60._8_4_;
  uStack_125c = ~auVar61._12_4_ & uStack_125c | uVar36 & auVar61._12_4_;
  EncodeVirtualTModePunchthrough
            (param_1,(Float *)&local_1268,(Int16CompFlag *)local_a48,local_1148,local_12f8,
             local_12b8,(Int16CompFlag *)local_1298,(Int16CompFlag *)local_1288,param_4);
  pIVar46 = (Int16CompFlag *)local_a48;
  do {
    pIVar45 = pIVar46 + 0x10;
    *(uint *)pIVar46 = *(uint *)pIVar46 ^ 0xffffffff;
    *(uint *)(pIVar46 + 4) = *(uint *)(pIVar46 + 4) ^ 0xffffffff;
    *(uint *)(pIVar46 + 8) = *(uint *)(pIVar46 + 8) ^ 0xffffffff;
    *(uint *)(pIVar46 + 0xc) = *(uint *)(pIVar46 + 0xc) ^ 0xffffffff;
    pIVar46 = pIVar45;
  } while (local_948 != pIVar45);
  EncodeVirtualTModePunchthrough
            (param_1,(Float *)&local_1268,(Int16CompFlag *)local_a48,local_1148,local_12f8,
             local_12b8,(Int16CompFlag *)local_1298,(Int16CompFlag *)local_1288,param_4);
  CompressETC1PunchthroughBlockInternal
            ((Float *)&local_1268,param_1,local_1148,local_12f8,local_12b8,
             (DifferentialResolveStorage *)local_12c8._0_8_,param_4);
LAB_00109291:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Internal::ETCComputer::AllocETC1Data(void* (*)(void*, unsigned long), void*) */

void cvtt::Internal::ETCComputer::AllocETC1Data
               (_func_void_ptr_void_ptr_ulong *param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (*param_1)(param_2,0x18ff0);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)pvVar1 + 0x18fe0) = param_2;
  }
  return;
}



/* cvtt::Internal::ETCComputer::ReleaseETC1Data(cvtt::ETC1CompressionData*, void (*)(void*, void*,
   unsigned long)) */

void cvtt::Internal::ETCComputer::ReleaseETC1Data
               (ETC1CompressionData *param_1,_func_void_void_ptr_void_ptr_ulong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001096b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(*(void **)(param_1 + 0x18fe0),param_1,0x18ff0);
  return;
}



/* cvtt::Internal::ETCComputer::ReleaseETC2Data(cvtt::ETC2CompressionData*, void (*)(void*, void*,
   unsigned long)) */

void cvtt::Internal::ETCComputer::ReleaseETC2Data
               (ETC2CompressionData *param_1,_func_void_void_ptr_void_ptr_ulong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001096d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(*(void **)(param_1 + 0x213c0),param_1,0x213e0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::ETCComputer::ETC2CompressionDataInternal::ETC2CompressionDataInternal(void*,
   cvtt::Options const&) */

void __thiscall
cvtt::Internal::ETCComputer::ETC2CompressionDataInternal::ETC2CompressionDataInternal
          (ETC2CompressionDataInternal *this,void *param_1,Options *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = *(float *)(param_2 + 8);
  fVar8 = *(float *)(param_2 + 0x10);
  *(void **)(this + 0x213c0) = param_1;
  fVar13 = (float)uVar1;
  fVar14 = (float)((ulong)uVar1 >> 0x20);
  fVar6 = (float)uVar2;
  fVar9 = (float)((ulong)uVar2 >> 0x20);
  fVar5 = (float)((uint)(fVar6 * fVar13 + fVar14 * fVar13 + fVar14 * fVar6) ^ __LC43) /
          (fVar14 * fVar14 + fVar6 * fVar6 + fVar13 * fVar13);
  fVar11 = fVar14 * fVar5 + fVar4;
  fVar7 = fVar6 * fVar5 + fVar13;
  fVar10 = fVar9 * fVar5 + fVar14;
  fVar12 = fVar8 * (fVar13 * fVar5 + fVar8) - (fVar8 * fVar5 + fVar6) * fVar13;
  fVar5 = fVar4 * fVar11 - (fVar4 * fVar5 + fVar9) * fVar14;
  fVar8 = fVar13 * fVar7 - fVar6 * fVar10;
  fVar4 = (fVar7 * fVar7 + fVar10 * fVar10 + fVar11 * fVar11) /
          (fVar12 * fVar12 + fVar5 * fVar5 + fVar8 * fVar8);
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  *(ulong *)(this + 0x213c8) = CONCAT44(fVar10,fVar7);
  *(ulong *)(this + 0x213d4) = CONCAT44(fVar4 * fVar5,fVar4 * fVar12);
  *(float *)(this + 0x213d0) = fVar11;
  *(float *)(this + 0x213dc) = fVar8 * fVar4;
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Internal::ETCComputer::AllocETC2Data(void* (*)(void*, unsigned long), void*, cvtt::Options
   const&) */

ETC2CompressionDataInternal *
cvtt::Internal::ETCComputer::AllocETC2Data
          (_func_void_ptr_void_ptr_ulong *param_1,void *param_2,Options *param_3)

{
  ETC2CompressionDataInternal *this;
  
  this = (ETC2CompressionDataInternal *)(*param_1)(param_2,0x213e0);
  if (this != (ETC2CompressionDataInternal *)0x0) {
    ETC2CompressionDataInternal::ETC2CompressionDataInternal(this,param_2,param_3);
  }
  return this;
}


