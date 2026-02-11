
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
  return CONCAT26(-(ushort)(_UNK_0010b236 <
                           (short)(*(short *)(param_2 + 6) - *(short *)(param_1 + 6))),
                  CONCAT24(-(ushort)(_UNK_0010b234 <
                                    (short)(*(short *)(param_2 + 4) - *(short *)(param_1 + 4))),
                           CONCAT22(-(ushort)(_UNK_0010b232 <
                                             (short)(*(short *)(param_2 + 2) -
                                                    *(short *)(param_1 + 2))),
                                    -(ushort)(__LC85 < (short)(*(short *)param_2 - *(short *)param_1
                                                              ))))) &
         CONCAT26(-(ushort)((short)(*(short *)(param_2 + 6) - *(short *)(param_1 + 6)) <
                           _UNK_0010b246),
                  CONCAT24(-(ushort)((short)(*(short *)(param_2 + 4) - *(short *)(param_1 + 4)) <
                                    _UNK_0010b244),
                           CONCAT22(-(ushort)((short)(*(short *)(param_2 + 2) -
                                                     *(short *)(param_1 + 2)) < _UNK_0010b242),
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
  sVar19 = (uVar3 & _UNK_0010b254) - (uVar7 & _UNK_0010b254);
  sVar20 = (uVar4 & _UNK_0010b256) - (uVar8 & _UNK_0010b256);
  sVar9 = (uVar1 >> 10) - (uVar5 >> 10);
  sVar10 = (uVar2 >> 10) - (uVar6 >> 10);
  sVar11 = (uVar3 >> 10) - (uVar7 >> 10);
  sVar12 = (uVar4 >> 10) - (uVar8 >> 10);
  sVar13 = (uVar1 >> 5 & (ushort)_LC4) - ((ushort)_LC4 & uVar5 >> 5);
  sVar14 = (uVar2 >> 5 & _LC4._2_2_) - (_LC4._2_2_ & uVar6 >> 5);
  sVar15 = (uVar3 >> 5 & _UNK_0010b254) - (_UNK_0010b254 & uVar7 >> 5);
  sVar16 = (uVar4 >> 5 & _UNK_0010b256) - (_UNK_0010b256 & uVar8 >> 5);
  return CONCAT26(-(ushort)(_UNK_0010b236 < sVar12),
                  CONCAT24(-(ushort)(_UNK_0010b234 < sVar11),
                           CONCAT22(-(ushort)(_UNK_0010b232 < sVar10),-(ushort)(__LC85 < sVar9)))) &
         CONCAT26(-(ushort)(sVar12 < _UNK_0010b246),
                  CONCAT24(-(ushort)(sVar11 < _UNK_0010b244),
                           CONCAT22(-(ushort)(sVar10 < _UNK_0010b242),-(ushort)(sVar9 < __LC58)))) &
         CONCAT26(-(ushort)(_UNK_0010b236 < sVar20),
                  CONCAT24(-(ushort)(_UNK_0010b234 < sVar19),
                           CONCAT22(-(ushort)(_UNK_0010b232 < sVar18),-(ushort)(__LC85 < sVar17))))
         & CONCAT26(-(ushort)(sVar20 < _UNK_0010b246),
                    CONCAT24(-(ushort)(sVar19 < _UNK_0010b244),
                             CONCAT22(-(ushort)(sVar18 < _UNK_0010b242),-(ushort)(sVar17 < __LC58)))
                   ) &
         CONCAT26(-(ushort)(_UNK_0010b236 < sVar16),
                  CONCAT24(-(ushort)(_UNK_0010b234 < sVar15),
                           CONCAT22(-(ushort)(_UNK_0010b232 < sVar14),-(ushort)(__LC85 < sVar13))))
         & CONCAT26(-(ushort)(sVar16 < _UNK_0010b246),
                    CONCAT24(-(ushort)(sVar15 < _UNK_0010b244),
                             CONCAT22(-(ushort)(sVar14 < _UNK_0010b242),-(ushort)(sVar13 < __LC58)))
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
  
  uVar8 = _UNK_0010b27e;
  uVar7 = _UNK_0010b27c;
  uVar6 = _UNK_0010b27a;
  uVar5 = _UNK_0010b278;
  uVar4 = _UNK_0010b276;
  uVar3 = _UNK_0010b274;
  uVar2 = _UNK_0010b272;
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
    sVar44 = _UNK_0010b254;
    sVar45 = _UNK_0010b256;
    sVar46 = _UNK_0010b258;
    sVar47 = _UNK_0010b25a;
    sVar48 = _UNK_0010b25c;
    sVar49 = _UNK_0010b25e;
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
    sVar43 = _UNK_0010b262;
    sVar44 = _UNK_0010b264;
    sVar45 = _UNK_0010b266;
    sVar46 = _UNK_0010b268;
    sVar47 = _UNK_0010b26a;
    sVar48 = _UNK_0010b26c;
    sVar49 = _UNK_0010b26e;
  }
  lVar9 = 0;
  do {
    *(ushort *)((long)local_18 + lVar9) =
         (ushort)(byte)Tables::FakeBT709::g_rounding16[*(ushort *)((long)local_28 + lVar9)];
    lVar9 = lVar9 + 2;
  } while (lVar9 != 0x10);
  sVar11 = (local_18[0] & __LC30) + uVar34;
  sVar13 = (local_18[1] & _UNK_0010b272) + uVar35;
  sVar15 = (local_18[2] & _UNK_0010b274) + uVar36;
  sVar17 = (local_18[3] & _UNK_0010b276) + uVar37;
  sVar19 = (local_18[4] & _UNK_0010b278) + uVar38;
  sVar21 = (local_18[5] & _UNK_0010b27a) + uVar39;
  sVar23 = (local_18[6] & _UNK_0010b27c) + uVar40;
  sVar25 = (local_18[7] & _UNK_0010b27e) + uVar41;
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
           (ushort)(_UNK_0010b292 < sVar20) * _UNK_0010b292 |
           (ushort)(_UNK_0010b292 >= sVar20) * sVar20;
      *(ushort *)(pVVar1 + 4) =
           (ushort)(_UNK_0010b294 < sVar21) * _UNK_0010b294 |
           (ushort)(_UNK_0010b294 >= sVar21) * sVar21;
      *(ushort *)(pVVar1 + 6) =
           (ushort)(_UNK_0010b296 < sVar22) * _UNK_0010b296 |
           (ushort)(_UNK_0010b296 >= sVar22) * sVar22;
      *(ushort *)(pVVar1 + 8) =
           (ushort)(_UNK_0010b298 < sVar23) * _UNK_0010b298 |
           (ushort)(_UNK_0010b298 >= sVar23) * sVar23;
      *(ushort *)(pVVar1 + 10) =
           (ushort)(_UNK_0010b29a < sVar24) * _UNK_0010b29a |
           (ushort)(_UNK_0010b29a >= sVar24) * sVar24;
      *(ushort *)(pVVar1 + 0xc) =
           (ushort)(_UNK_0010b29c < sVar25) * _UNK_0010b29c |
           (ushort)(_UNK_0010b29c >= sVar25) * sVar25;
      *(ushort *)(pVVar1 + 0xe) =
           (ushort)(_UNK_0010b29e < sVar26) * _UNK_0010b29e |
           (ushort)(_UNK_0010b29e >= sVar26) * sVar26;
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
         (ushort)(_UNK_0010b292 < sVar18) * _UNK_0010b292 |
         (ushort)(_UNK_0010b292 >= sVar18) * sVar18;
    *(ushort *)(pVVar12 + 100) =
         (ushort)(_UNK_0010b294 < sVar19) * _UNK_0010b294 |
         (ushort)(_UNK_0010b294 >= sVar19) * sVar19;
    *(ushort *)(pVVar12 + 0x66) =
         (ushort)(_UNK_0010b296 < sVar20) * _UNK_0010b296 |
         (ushort)(_UNK_0010b296 >= sVar20) * sVar20;
    *(ushort *)(pVVar12 + 0x68) =
         (ushort)(_UNK_0010b298 < sVar21) * _UNK_0010b298 |
         (ushort)(_UNK_0010b298 >= sVar21) * sVar21;
    *(ushort *)(pVVar12 + 0x6a) =
         (ushort)(_UNK_0010b29a < sVar22) * _UNK_0010b29a |
         (ushort)(_UNK_0010b29a >= sVar22) * sVar22;
    *(ushort *)(pVVar12 + 0x6c) =
         (ushort)(_UNK_0010b29c < sVar23) * _UNK_0010b29c |
         (ushort)(_UNK_0010b29c >= sVar23) * sVar23;
    *(ushort *)(pVVar12 + 0x6e) =
         (ushort)(_UNK_0010b29e < sVar24) * _UNK_0010b29e |
         (ushort)(_UNK_0010b29e >= sVar24) * sVar24;
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
         (ushort)(_UNK_0010b2a2 < sVar25) * _UNK_0010b2a2 |
         (ushort)(_UNK_0010b2a2 >= sVar25) * sVar25;
    sVar25 = auVar17._4_2_;
    auVar26._4_2_ =
         (ushort)(_UNK_0010b2a4 < sVar25) * _UNK_0010b2a4 |
         (ushort)(_UNK_0010b2a4 >= sVar25) * sVar25;
    sVar25 = auVar17._6_2_;
    auVar26._6_2_ =
         (ushort)(_UNK_0010b2a6 < sVar25) * _UNK_0010b2a6 |
         (ushort)(_UNK_0010b2a6 >= sVar25) * sVar25;
    sVar25 = auVar17._8_2_;
    auVar26._8_2_ =
         (ushort)(_UNK_0010b2a8 < sVar25) * _UNK_0010b2a8 |
         (ushort)(_UNK_0010b2a8 >= sVar25) * sVar25;
    sVar25 = auVar17._10_2_;
    auVar26._10_2_ =
         (ushort)(_UNK_0010b2aa < sVar25) * _UNK_0010b2aa |
         (ushort)(_UNK_0010b2aa >= sVar25) * sVar25;
    sVar25 = auVar17._12_2_;
    sVar28 = auVar17._14_2_;
    auVar26._12_2_ =
         (ushort)(_UNK_0010b2ac < sVar25) * _UNK_0010b2ac |
         (ushort)(_UNK_0010b2ac >= sVar25) * sVar25;
    auVar26._14_2_ =
         (ushort)(_UNK_0010b2ae < sVar28) * _UNK_0010b2ae |
         (ushort)(_UNK_0010b2ae >= sVar28) * sVar28;
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
    sVar68 = _UNK_0010b2b2 + auVar57._2_2_;
    sVar69 = _UNK_0010b2b4 + auVar57._4_2_;
    sVar71 = _UNK_0010b2b6 + auVar57._6_2_;
    sVar72 = _UNK_0010b2b8 + auVar57._8_2_;
    sVar74 = _UNK_0010b2ba + auVar57._10_2_;
    sVar75 = _UNK_0010b2bc + auVar57._12_2_;
    sVar77 = _UNK_0010b2be + auVar57._14_2_;
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
         ((ushort)(_UNK_0010b292 < sVar68) * _UNK_0010b292 |
         (ushort)(_UNK_0010b292 >= sVar68) * sVar68) * sVar18;
    auVar81._4_2_ =
         ((ushort)(_UNK_0010b294 < sVar69) * _UNK_0010b294 |
         (ushort)(_UNK_0010b294 >= sVar69) * sVar69) * sVar19;
    auVar81._6_2_ =
         ((ushort)(_UNK_0010b296 < sVar71) * _UNK_0010b296 |
         (ushort)(_UNK_0010b296 >= sVar71) * sVar71) * sVar20;
    auVar81._8_2_ =
         ((ushort)(_UNK_0010b298 < sVar72) * _UNK_0010b298 |
         (ushort)(_UNK_0010b298 >= sVar72) * sVar72) * sVar21;
    auVar81._10_2_ =
         ((ushort)(_UNK_0010b29a < sVar74) * _UNK_0010b29a |
         (ushort)(_UNK_0010b29a >= sVar74) * sVar74) * sVar22;
    auVar81._12_2_ =
         ((ushort)(_UNK_0010b29c < sVar75) * _UNK_0010b29c |
         (ushort)(_UNK_0010b29c >= sVar75) * sVar75) * sVar23;
    auVar81._14_2_ =
         ((ushort)(_UNK_0010b29e < sVar77) * _UNK_0010b29e |
         (ushort)(_UNK_0010b29e >= sVar77) * sVar77) * sVar24;
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
      sVar44 = auVar71._2_2_ + _UNK_0010b272;
      sVar46 = auVar71._4_2_ + _UNK_0010b274;
      sVar49 = auVar71._6_2_ + _UNK_0010b276;
      sVar51 = auVar71._8_2_ + _UNK_0010b278;
      sVar54 = auVar71._10_2_ + _UNK_0010b27a;
      sVar56 = auVar71._12_2_ + _UNK_0010b27c;
      sVar59 = auVar71._14_2_ + _UNK_0010b27e;
      auVar71 = psllw(auVar71,3);
      auVar41 = auVar41 | auVar71;
      auVar72._0_2_ =
           (ushort)((short)_LC4 < sVar38) * (short)_LC4 | (ushort)((short)_LC4 >= sVar38) * sVar38;
      auVar72._2_2_ =
           (ushort)(_LC4._2_2_ < sVar44) * _LC4._2_2_ | (ushort)(_LC4._2_2_ >= sVar44) * sVar44;
      auVar72._4_2_ =
           (ushort)(_UNK_0010b254 < sVar46) * _UNK_0010b254 |
           (ushort)(_UNK_0010b254 >= sVar46) * sVar46;
      auVar72._6_2_ =
           (ushort)(_UNK_0010b256 < sVar49) * _UNK_0010b256 |
           (ushort)(_UNK_0010b256 >= sVar49) * sVar49;
      auVar72._8_2_ =
           (ushort)(_UNK_0010b258 < sVar51) * _UNK_0010b258 |
           (ushort)(_UNK_0010b258 >= sVar51) * sVar51;
      auVar72._10_2_ =
           (ushort)(_UNK_0010b25a < sVar54) * _UNK_0010b25a |
           (ushort)(_UNK_0010b25a >= sVar54) * sVar54;
      auVar72._12_2_ =
           (ushort)(_UNK_0010b25c < sVar56) * _UNK_0010b25c |
           (ushort)(_UNK_0010b25c >= sVar56) * sVar56;
      auVar72._14_2_ =
           (ushort)(_UNK_0010b25e < sVar59) * _UNK_0010b25e |
           (ushort)(_UNK_0010b25e >= sVar59) * sVar59;
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
      sVar44 = auVar41._2_2_ + _UNK_0010b2b2;
      sVar46 = auVar41._4_2_ + _UNK_0010b2b4;
      sVar49 = auVar41._6_2_ + _UNK_0010b2b6;
      sVar51 = auVar41._8_2_ + _UNK_0010b2b8;
      sVar54 = auVar41._10_2_ + _UNK_0010b2ba;
      sVar56 = auVar41._12_2_ + _UNK_0010b2bc;
      sVar59 = auVar41._14_2_ + _UNK_0010b2be;
      auVar71._0_2_ = (ushort)(__LC27 < sVar38) * __LC27 | (ushort)(__LC27 >= sVar38) * sVar38;
      auVar71._2_2_ =
           (ushort)(_UNK_0010b292 < sVar44) * _UNK_0010b292 |
           (ushort)(_UNK_0010b292 >= sVar44) * sVar44;
      auVar71._4_2_ =
           (ushort)(_UNK_0010b294 < sVar46) * _UNK_0010b294 |
           (ushort)(_UNK_0010b294 >= sVar46) * sVar46;
      auVar71._6_2_ =
           (ushort)(_UNK_0010b296 < sVar49) * _UNK_0010b296 |
           (ushort)(_UNK_0010b296 >= sVar49) * sVar49;
      auVar71._8_2_ =
           (ushort)(_UNK_0010b298 < sVar51) * _UNK_0010b298 |
           (ushort)(_UNK_0010b298 >= sVar51) * sVar51;
      auVar71._10_2_ =
           (ushort)(_UNK_0010b29a < sVar54) * _UNK_0010b29a |
           (ushort)(_UNK_0010b29a >= sVar54) * sVar54;
      auVar71._12_2_ =
           (ushort)(_UNK_0010b29c < sVar56) * _UNK_0010b29c |
           (ushort)(_UNK_0010b29c >= sVar56) * sVar56;
      auVar71._14_2_ =
           (ushort)(_UNK_0010b29e < sVar59) * _UNK_0010b29e |
           (ushort)(_UNK_0010b29e >= sVar59) * sVar59;
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
  auVar24._2_2_ = _UNK_0010b272;
  auVar24._0_2_ = __LC30;
  auVar24._4_2_ = _UNK_0010b274;
  auVar24._6_2_ = _UNK_0010b276;
  auVar24._8_2_ = _UNK_0010b278;
  auVar24._10_2_ = _UNK_0010b27a;
  auVar24._12_2_ = _UNK_0010b27c;
  auVar24._14_2_ = _UNK_0010b27e;
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
  sVar41 = _UNK_0010b2fe;
  sVar40 = _UNK_0010b2fc;
  sVar39 = _UNK_0010b2fa;
  sVar38 = _UNK_0010b2f8;
  sVar37 = _UNK_0010b2f6;
  sVar36 = _UNK_0010b2f4;
  sVar35 = _UNK_0010b2f2;
  sVar8 = __LC76;
  uVar34 = _UNK_0010b2ae;
  uVar33 = _UNK_0010b2ac;
  uVar32 = _UNK_0010b2aa;
  uVar19 = _UNK_0010b2a8;
  uVar18 = _UNK_0010b2a6;
  uVar17 = _UNK_0010b2a4;
  uVar16 = _UNK_0010b2a2;
  uVar96 = __LC55;
  sVar9 = _UNK_0010b29e;
  sVar10 = _UNK_0010b29c;
  sVar11 = _UNK_0010b29a;
  sVar12 = _UNK_0010b298;
  sVar13 = _UNK_0010b294;
  sVar14 = _UNK_0010b292;
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
    *(float *)(pFVar47 + 0x14) = _UNK_0010b2d4 * auVar131._4_4_ + auVar146._4_4_;
    *(float *)(pFVar47 + 0x18) = _UNK_0010b2d8 * auVar131._8_4_ + auVar146._8_4_;
    *(float *)(pFVar47 + 0x1c) = _UNK_0010b2dc * auVar131._12_4_ + auVar146._12_4_;
    auVar115._0_4_ = 0.0 - fVar160;
    auVar115._4_4_ = 0.0 - fVar161;
    auVar115._8_4_ = 0.0 - fVar162;
    auVar115._12_4_ = 0.0 - fVar163;
    auVar131 = divps(auVar115,auVar144);
    *(float *)pFVar47 = auVar143._0_4_ * __LC44 + auVar150._0_4_;
    *(float *)(pFVar47 + 4) = auVar143._4_4_ * _UNK_0010b2d4 + auVar150._4_4_;
    *(float *)(pFVar47 + 8) = auVar143._8_4_ * _UNK_0010b2d8 + auVar150._8_4_;
    *(float *)(pFVar47 + 0xc) = auVar143._12_4_ * _UNK_0010b2dc + auVar150._12_4_;
    *(float *)pFVar65 = auVar131._0_4_ * __LC44 + auVar150._0_4_;
    *(float *)(pFVar65 + 4) = auVar131._4_4_ * _UNK_0010b2d4 + auVar150._4_4_;
    *(float *)(pFVar65 + 8) = auVar131._8_4_ * _UNK_0010b2d8 + auVar150._8_4_;
    *(float *)(pFVar65 + 0xc) = auVar131._12_4_ * _UNK_0010b2dc + auVar150._12_4_;
    auVar150._0_4_ = 0.0 - fVar151;
    auVar150._4_4_ = 0.0 - fVar152;
    auVar150._8_4_ = 0.0 - fVar153;
    auVar150._12_4_ = 0.0 - fVar154;
    auVar131 = divps(auVar150,auVar144);
    *(float *)(pFVar65 + 0x10) = __LC44 * auVar131._0_4_ + auVar146._0_4_;
    *(float *)(pFVar65 + 0x14) = _UNK_0010b2d4 * auVar131._4_4_ + auVar146._4_4_;
    *(float *)(pFVar65 + 0x18) = _UNK_0010b2d8 * auVar131._8_4_ + auVar146._8_4_;
    *(float *)(pFVar65 + 0x1c) = _UNK_0010b2dc * auVar131._12_4_ + auVar146._12_4_;
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
            auVar116._4_4_ = auVar143._4_4_ * _UNK_0010b2e4;
            auVar116._8_4_ = auVar143._8_4_ * _UNK_0010b2e8;
            auVar116._12_4_ = auVar143._12_4_ * _UNK_0010b2ec;
            auVar88._0_4_ = auVar131._0_4_ * _LC47;
            auVar88._4_4_ = auVar131._4_4_ * _UNK_0010b2e4;
            auVar88._8_4_ = auVar131._8_4_ * _UNK_0010b2e8;
            auVar88._12_4_ = auVar131._12_4_ * _UNK_0010b2ec;
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
             (uVar96 & _UNK_0010b2a2) * (auVar144._2_2_ - auVar150._2_2_) +
             (uVar96 >> 2) * (auVar147._2_2_ - auVar150._2_2_) + auVar119._2_2_ + _UNK_0010b2f2;
        auVar106._4_2_ =
             (uVar96 & _UNK_0010b2a4) * (auVar144._4_2_ - auVar150._4_2_) +
             (uVar96 >> 2) * (auVar147._4_2_ - auVar150._4_2_) + auVar119._4_2_ + _UNK_0010b2f4;
        auVar106._6_2_ =
             (uVar96 & _UNK_0010b2a6) * (auVar144._6_2_ - auVar150._6_2_) +
             (uVar96 >> 2) * (auVar147._6_2_ - auVar150._6_2_) + auVar119._6_2_ + _UNK_0010b2f6;
        auVar106._8_2_ =
             (uVar96 & _UNK_0010b2a8) * (auVar144._8_2_ - auVar150._8_2_) +
             (uVar96 >> 2) * (auVar147._8_2_ - auVar150._8_2_) + auVar119._8_2_ + _UNK_0010b2f8;
        auVar106._10_2_ =
             (uVar96 & _UNK_0010b2aa) * (auVar144._10_2_ - auVar150._10_2_) +
             (uVar96 >> 2) * (auVar147._10_2_ - auVar150._10_2_) + auVar119._10_2_ + _UNK_0010b2fa;
        auVar106._12_2_ =
             (uVar96 & _UNK_0010b2ac) * (auVar144._12_2_ - auVar150._12_2_) +
             (uVar96 >> 2) * (auVar147._12_2_ - auVar150._12_2_) + auVar119._12_2_ + _UNK_0010b2fc;
        auVar106._14_2_ =
             (uVar96 & _UNK_0010b2ae) * (auVar144._14_2_ - auVar150._14_2_) +
             (uVar96 >> 2) * (auVar147._14_2_ - auVar150._14_2_) + auVar119._14_2_ + _UNK_0010b2fe;
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
             (ushort)(_UNK_0010b292 < sVar9) * _UNK_0010b292 |
             (ushort)(_UNK_0010b292 >= sVar9) * sVar9;
        *(ushort *)(pVVar71 + 4) =
             (ushort)(_UNK_0010b294 < sVar10) * _UNK_0010b294 |
             (ushort)(_UNK_0010b294 >= sVar10) * sVar10;
        *(ushort *)(pVVar71 + 6) =
             (ushort)(_UNK_0010b296 < sVar11) * _UNK_0010b296 |
             (ushort)(_UNK_0010b296 >= sVar11) * sVar11;
        *(ushort *)(pVVar71 + 8) =
             (ushort)(_UNK_0010b298 < sVar12) * _UNK_0010b298 |
             (ushort)(_UNK_0010b298 >= sVar12) * sVar12;
        *(ushort *)(pVVar71 + 10) =
             (ushort)(_UNK_0010b29a < sVar13) * _UNK_0010b29a |
             (ushort)(_UNK_0010b29a >= sVar13) * sVar13;
        *(ushort *)(pVVar71 + 0xc) =
             (ushort)(_UNK_0010b29c < sVar14) * _UNK_0010b29c |
             (ushort)(_UNK_0010b29c >= sVar14) * sVar14;
        *(ushort *)(pVVar71 + 0xe) =
             (ushort)(_UNK_0010b29e < sVar15) * _UNK_0010b29e |
             (ushort)(_UNK_0010b29e >= sVar15) * sVar15;
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
      uVar15 = (ushort)(sVar14 < _UNK_0010b272) * _UNK_0010b272 |
               (ushort)(sVar14 >= _UNK_0010b272) * sVar14;
      uVar17 = (ushort)(sVar16 < _UNK_0010b274) * _UNK_0010b274 |
               (ushort)(sVar16 >= _UNK_0010b274) * sVar16;
      uVar19 = (ushort)(sVar18 < _UNK_0010b276) * _UNK_0010b276 |
               (ushort)(sVar18 >= _UNK_0010b276) * sVar18;
      uVar21 = (ushort)(sVar20 < _UNK_0010b278) * _UNK_0010b278 |
               (ushort)(sVar20 >= _UNK_0010b278) * sVar20;
      uVar23 = (ushort)(sVar22 < _UNK_0010b27a) * _UNK_0010b27a |
               (ushort)(sVar22 >= _UNK_0010b27a) * sVar22;
      uVar25 = (ushort)(sVar24 < _UNK_0010b27c) * _UNK_0010b27c |
               (ushort)(sVar24 >= _UNK_0010b27c) * sVar24;
      uVar27 = (ushort)(sVar26 < _UNK_0010b27e) * _UNK_0010b27e |
               (ushort)(sVar26 >= _UNK_0010b27e) * sVar26;
      uVar10 = (ushort)(__LC57 < (short)uVar10) * __LC57 | (__LC57 >= (short)uVar10) * uVar10;
      uVar15 = (ushort)(_UNK_0010b302 < (short)uVar15) * _UNK_0010b302 |
               (_UNK_0010b302 >= (short)uVar15) * uVar15;
      uVar17 = (ushort)(_UNK_0010b304 < (short)uVar17) * _UNK_0010b304 |
               (_UNK_0010b304 >= (short)uVar17) * uVar17;
      uVar19 = (ushort)(_UNK_0010b306 < (short)uVar19) * _UNK_0010b306 |
               (_UNK_0010b306 >= (short)uVar19) * uVar19;
      uVar21 = (ushort)(_UNK_0010b308 < (short)uVar21) * _UNK_0010b308 |
               (_UNK_0010b308 >= (short)uVar21) * uVar21;
      uVar23 = (ushort)(_UNK_0010b30a < (short)uVar23) * _UNK_0010b30a |
               (_UNK_0010b30a >= (short)uVar23) * uVar23;
      uVar25 = (ushort)(_UNK_0010b30c < (short)uVar25) * _UNK_0010b30c |
               (_UNK_0010b30c >= (short)uVar25) * uVar25;
      uVar27 = (ushort)(_UNK_0010b30e < (short)uVar27) * _UNK_0010b30e |
               (_UNK_0010b30e >= (short)uVar27) * uVar27;
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
      uVar15 = (ushort)(_UNK_0010b302 < sVar14) * _UNK_0010b302 |
               (ushort)(_UNK_0010b302 >= sVar14) * sVar14;
      uVar17 = (ushort)(_UNK_0010b304 < sVar16) * _UNK_0010b304 |
               (ushort)(_UNK_0010b304 >= sVar16) * sVar16;
      uVar19 = (ushort)(_UNK_0010b306 < sVar18) * _UNK_0010b306 |
               (ushort)(_UNK_0010b306 >= sVar18) * sVar18;
      uVar21 = (ushort)(_UNK_0010b308 < sVar20) * _UNK_0010b308 |
               (ushort)(_UNK_0010b308 >= sVar20) * sVar20;
      uVar23 = (ushort)(_UNK_0010b30a < sVar22) * _UNK_0010b30a |
               (ushort)(_UNK_0010b30a >= sVar22) * sVar22;
      uVar25 = (ushort)(_UNK_0010b30c < sVar24) * _UNK_0010b30c |
               (ushort)(_UNK_0010b30c >= sVar24) * sVar24;
      uVar27 = (ushort)(_UNK_0010b30e < sVar26) * _UNK_0010b30e |
               (ushort)(_UNK_0010b30e >= sVar26) * sVar26;
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
    uVar15 = (ushort)(_UNK_0010b292 < sVar14) * _UNK_0010b292 |
             (ushort)(_UNK_0010b292 >= sVar14) * sVar14;
    uVar17 = (ushort)(_UNK_0010b294 < sVar16) * _UNK_0010b294 |
             (ushort)(_UNK_0010b294 >= sVar16) * sVar16;
    uVar19 = (ushort)(_UNK_0010b296 < sVar18) * _UNK_0010b296 |
             (ushort)(_UNK_0010b296 >= sVar18) * sVar18;
    uVar21 = (ushort)(_UNK_0010b298 < sVar20) * _UNK_0010b298 |
             (ushort)(_UNK_0010b298 >= sVar20) * sVar20;
    uVar23 = (ushort)(_UNK_0010b29a < sVar22) * _UNK_0010b29a |
             (ushort)(_UNK_0010b29a >= sVar22) * sVar22;
    uVar25 = (ushort)(_UNK_0010b29c < sVar24) * _UNK_0010b29c |
             (ushort)(_UNK_0010b29c >= sVar24) * sVar24;
    uVar27 = (ushort)(_UNK_0010b29e < sVar26) * _UNK_0010b29e |
             (ushort)(_UNK_0010b29e >= sVar26) * sVar26;
  }
  auVar28._2_2_ = _UNK_0010b242;
  auVar28._0_2_ = __LC58;
  auVar28._4_2_ = _UNK_0010b244;
  auVar28._6_2_ = _UNK_0010b246;
  auVar28._8_2_ = _UNK_0010b248;
  auVar28._10_2_ = _UNK_0010b24a;
  auVar28._12_2_ = _UNK_0010b24c;
  auVar28._14_2_ = _UNK_0010b24e;
  auVar12 = auVar12 & auVar28;
  *(ushort *)param_8 = uVar10;
  *(ushort *)(param_8 + 2) = uVar15;
  *(ushort *)(param_8 + 4) = uVar17;
  *(ushort *)(param_8 + 6) = uVar19;
  *(ushort *)(param_8 + 8) = uVar21;
  *(ushort *)(param_8 + 10) = uVar23;
  *(ushort *)(param_8 + 0xc) = uVar25;
  *(ushort *)(param_8 + 0xe) = uVar27;
  sVar14 = _UNK_0010b242 + local_38[1];
  sVar13 = _UNK_0010b244 + local_38[2];
  sVar26 = _UNK_0010b246 + local_38[3];
  sVar24 = _UNK_0010b248 + local_38[4];
  sVar22 = _UNK_0010b24a + local_38[5];
  sVar18 = _UNK_0010b24c + local_38[6];
  sVar16 = _UNK_0010b24e + local_38[7];
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
    sVar32 = sVar32 + _UNK_0010b342;
    sVar34 = sVar34 + _UNK_0010b344;
    sVar36 = sVar36 + _UNK_0010b346;
    sVar38 = sVar38 + _UNK_0010b348;
    sVar40 = sVar40 + _UNK_0010b34a;
    sVar42 = sVar42 + _UNK_0010b34c;
    sVar44 = sVar44 + _UNK_0010b34e;
    uVar69 = (ushort)(__LC114 < sVar29) * sVar29 | (ushort)(__LC114 >= sVar29) * __LC114;
    uVar71 = (ushort)(_UNK_0010b352 < sVar32) * sVar32 |
             (ushort)(_UNK_0010b352 >= sVar32) * _UNK_0010b352;
    uVar73 = (ushort)(_UNK_0010b354 < sVar34) * sVar34 |
             (ushort)(_UNK_0010b354 >= sVar34) * _UNK_0010b354;
    uVar75 = (ushort)(_UNK_0010b356 < sVar36) * sVar36 |
             (ushort)(_UNK_0010b356 >= sVar36) * _UNK_0010b356;
    uVar77 = (ushort)(_UNK_0010b358 < sVar38) * sVar38 |
             (ushort)(_UNK_0010b358 >= sVar38) * _UNK_0010b358;
    uVar79 = (ushort)(_UNK_0010b35a < sVar40) * sVar40 |
             (ushort)(_UNK_0010b35a >= sVar40) * _UNK_0010b35a;
    uVar81 = (ushort)(_UNK_0010b35c < sVar42) * sVar42 |
             (ushort)(_UNK_0010b35c >= sVar42) * _UNK_0010b35c;
    uVar83 = (ushort)(_UNK_0010b35e < sVar44) * sVar44 |
             (ushort)(_UNK_0010b35e >= sVar44) * _UNK_0010b35e;
    auVar92._0_2_ =
         (ushort)((ushort)(__LC63 < (short)uVar69) * __LC63 | (__LC63 >= (short)uVar69) * uVar69) >>
         1;
    auVar92._2_2_ =
         (ushort)((ushort)(_UNK_0010b322 < (short)uVar71) * _UNK_0010b322 |
                 (_UNK_0010b322 >= (short)uVar71) * uVar71) >> 1;
    auVar92._4_2_ =
         (ushort)((ushort)(_UNK_0010b324 < (short)uVar73) * _UNK_0010b324 |
                 (_UNK_0010b324 >= (short)uVar73) * uVar73) >> 1;
    auVar92._6_2_ =
         (ushort)((ushort)(_UNK_0010b326 < (short)uVar75) * _UNK_0010b326 |
                 (_UNK_0010b326 >= (short)uVar75) * uVar75) >> 1;
    auVar92._8_2_ =
         (ushort)((ushort)(_UNK_0010b328 < (short)uVar77) * _UNK_0010b328 |
                 (_UNK_0010b328 >= (short)uVar77) * uVar77) >> 1;
    auVar92._10_2_ =
         (ushort)((ushort)(_UNK_0010b32a < (short)uVar79) * _UNK_0010b32a |
                 (_UNK_0010b32a >= (short)uVar79) * uVar79) >> 1;
    auVar92._12_2_ =
         (ushort)((ushort)(_UNK_0010b32c < (short)uVar81) * _UNK_0010b32c |
                 (_UNK_0010b32c >= (short)uVar81) * uVar81) >> 1;
    auVar92._14_2_ =
         (ushort)((ushort)(_UNK_0010b32e < (short)uVar83) * _UNK_0010b32e |
                 (_UNK_0010b32e >= (short)uVar83) * uVar83) >> 1;
    auVar27._2_2_ = _UNK_0010b332;
    auVar27._0_2_ = __LC112;
    auVar27._4_2_ = _UNK_0010b334;
    auVar27._6_2_ = _UNK_0010b336;
    auVar27._8_2_ = _UNK_0010b338;
    auVar27._10_2_ = _UNK_0010b33a;
    auVar27._12_2_ = _UNK_0010b33c;
    auVar27._14_2_ = _UNK_0010b33e;
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
         _UNK_0010b242 +
         ((ushort)((ushort)(_UNK_0010b322 < sVar32) * _UNK_0010b322 |
                  (ushort)(_UNK_0010b322 >= sVar32) * sVar32) >> 1 & _UNK_0010b332);
    auVar93._4_2_ =
         _UNK_0010b244 +
         ((ushort)((ushort)(_UNK_0010b324 < sVar34) * _UNK_0010b324 |
                  (ushort)(_UNK_0010b324 >= sVar34) * sVar34) >> 1 & _UNK_0010b334);
    auVar93._6_2_ =
         _UNK_0010b246 +
         ((ushort)((ushort)(_UNK_0010b326 < sVar36) * _UNK_0010b326 |
                  (ushort)(_UNK_0010b326 >= sVar36) * sVar36) >> 1 & _UNK_0010b336);
    auVar93._8_2_ =
         _UNK_0010b248 +
         ((ushort)((ushort)(_UNK_0010b328 < sVar38) * _UNK_0010b328 |
                  (ushort)(_UNK_0010b328 >= sVar38) * sVar38) >> 1 & _UNK_0010b338);
    auVar93._10_2_ =
         _UNK_0010b24a +
         ((ushort)((ushort)(_UNK_0010b32a < sVar40) * _UNK_0010b32a |
                  (ushort)(_UNK_0010b32a >= sVar40) * sVar40) >> 1 & _UNK_0010b33a);
    auVar93._12_2_ =
         _UNK_0010b24c +
         ((ushort)((ushort)(_UNK_0010b32c < sVar42) * _UNK_0010b32c |
                  (ushort)(_UNK_0010b32c >= sVar42) * sVar42) >> 1 & _UNK_0010b33c);
    auVar93._14_2_ =
         _UNK_0010b24e +
         ((ushort)((ushort)(_UNK_0010b32e < sVar44) * _UNK_0010b32e |
                  (ushort)(_UNK_0010b32e >= sVar44) * sVar44) >> 1 & _UNK_0010b33e);
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
         (ushort)(((ushort)(sVar34 < _UNK_0010b362) * sVar34 |
                  (ushort)(sVar34 >= _UNK_0010b362) * _UNK_0010b362) + auVar68._2_2_) >> 1;
    auVar93._4_2_ =
         (ushort)(((ushort)(sVar38 < _UNK_0010b364) * sVar38 |
                  (ushort)(sVar38 >= _UNK_0010b364) * _UNK_0010b364) + auVar68._4_2_) >> 1;
    auVar93._6_2_ =
         (ushort)(((ushort)(sVar40 < _UNK_0010b366) * sVar40 |
                  (ushort)(sVar40 >= _UNK_0010b366) * _UNK_0010b366) + auVar68._6_2_) >> 1;
    auVar93._8_2_ =
         (ushort)(((ushort)(sVar42 < _UNK_0010b368) * sVar42 |
                  (ushort)(sVar42 >= _UNK_0010b368) * _UNK_0010b368) + auVar68._8_2_) >> 1;
    auVar93._10_2_ =
         (ushort)(((ushort)(sVar44 < _UNK_0010b36a) * sVar44 |
                  (ushort)(sVar44 >= _UNK_0010b36a) * _UNK_0010b36a) + auVar68._10_2_) >> 1;
    auVar93._12_2_ =
         (ushort)(((ushort)(sVar1 < _UNK_0010b36c) * sVar1 |
                  (ushort)(sVar1 >= _UNK_0010b36c) * _UNK_0010b36c) + auVar68._12_2_) >> 1;
    auVar93._14_2_ =
         (ushort)(((ushort)(sVar36 < _UNK_0010b36e) * sVar36 |
                  (ushort)(sVar36 >= _UNK_0010b36e) * _UNK_0010b36e) + auVar68._14_2_) >> 1;
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
  local_278._2_2_ = _UNK_0010b342 + local_278._2_2_;
  local_278._4_2_ = _UNK_0010b344 + local_278._4_2_;
  local_278._6_2_ = _UNK_0010b346 + local_278._6_2_;
  local_278._8_2_ = _UNK_0010b348 + local_278._8_2_;
  local_278._10_2_ = _UNK_0010b34a + local_278._10_2_;
  local_278._12_2_ = _UNK_0010b34c + local_278._12_2_;
  local_278._14_2_ = _UNK_0010b34e + local_278._14_2_;
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
  sVar16 = ((ushort)(local_138[1] < _UNK_0010b372) * local_138[1] |
           (ushort)(local_138[1] >= _UNK_0010b372) * _UNK_0010b372) + _UNK_0010b382;
  sVar17 = ((ushort)(local_138[2] < _UNK_0010b374) * local_138[2] |
           (ushort)(local_138[2] >= _UNK_0010b374) * _UNK_0010b374) + _UNK_0010b384;
  sVar18 = ((ushort)(local_138[3] < _UNK_0010b376) * local_138[3] |
           (ushort)(local_138[3] >= _UNK_0010b376) * _UNK_0010b376) + _UNK_0010b386;
  sVar19 = ((ushort)(local_138[4] < _UNK_0010b378) * local_138[4] |
           (ushort)(local_138[4] >= _UNK_0010b378) * _UNK_0010b378) + _UNK_0010b388;
  sVar20 = ((ushort)(local_138[5] < _UNK_0010b37a) * local_138[5] |
           (ushort)(local_138[5] >= _UNK_0010b37a) * _UNK_0010b37a) + _UNK_0010b38a;
  sVar21 = ((ushort)(local_138[6] < _UNK_0010b37c) * local_138[6] |
           (ushort)(local_138[6] >= _UNK_0010b37c) * _UNK_0010b37c) + _UNK_0010b38c;
  sVar22 = ((ushort)(local_138[7] < _UNK_0010b37e) * local_138[7] |
           (ushort)(local_138[7] >= _UNK_0010b37e) * _UNK_0010b37e) + _UNK_0010b38e;
  uVar23 = (ushort)(local_138[0] < __LC57) * local_138[0] |
           (ushort)(local_138[0] >= __LC57) * __LC57;
  uVar24 = (ushort)(local_138[1] < _UNK_0010b302) * local_138[1] |
           (ushort)(local_138[1] >= _UNK_0010b302) * _UNK_0010b302;
  uVar25 = (ushort)(local_138[2] < _UNK_0010b304) * local_138[2] |
           (ushort)(local_138[2] >= _UNK_0010b304) * _UNK_0010b304;
  uVar26 = (ushort)(local_138[3] < _UNK_0010b306) * local_138[3] |
           (ushort)(local_138[3] >= _UNK_0010b306) * _UNK_0010b306;
  uVar27 = (ushort)(local_138[4] < _UNK_0010b308) * local_138[4] |
           (ushort)(local_138[4] >= _UNK_0010b308) * _UNK_0010b308;
  uVar28 = (ushort)(local_138[5] < _UNK_0010b30a) * local_138[5] |
           (ushort)(local_138[5] >= _UNK_0010b30a) * _UNK_0010b30a;
  uVar29 = (ushort)(local_138[6] < _UNK_0010b30c) * local_138[6] |
           (ushort)(local_138[6] >= _UNK_0010b30c) * _UNK_0010b30c;
  uVar30 = (ushort)(local_138[7] < _UNK_0010b30e) * local_138[7] |
           (ushort)(local_138[7] >= _UNK_0010b30e) * _UNK_0010b30e;
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
    uVar8 = (ushort)(sVar16 < _UNK_0010b272) * _UNK_0010b272 |
            (ushort)(sVar16 >= _UNK_0010b272) * sVar16;
    uVar9 = (ushort)(sVar17 < _UNK_0010b274) * _UNK_0010b274 |
            (ushort)(sVar17 >= _UNK_0010b274) * sVar17;
    uVar10 = (ushort)(sVar18 < _UNK_0010b276) * _UNK_0010b276 |
             (ushort)(sVar18 >= _UNK_0010b276) * sVar18;
    uVar11 = (ushort)(sVar19 < _UNK_0010b278) * _UNK_0010b278 |
             (ushort)(sVar19 >= _UNK_0010b278) * sVar19;
    uVar12 = (ushort)(sVar20 < _UNK_0010b27a) * _UNK_0010b27a |
             (ushort)(sVar20 >= _UNK_0010b27a) * sVar20;
    uVar13 = (ushort)(sVar21 < _UNK_0010b27c) * _UNK_0010b27c |
             (ushort)(sVar21 >= _UNK_0010b27c) * sVar21;
    uVar14 = (ushort)(sVar22 < _UNK_0010b27e) * _UNK_0010b27e |
             (ushort)(sVar22 >= _UNK_0010b27e) * sVar22;
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
  long lVar2;
  long lVar3;
  ETCComputer *this;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [14];
  undefined2 uVar16;
  uint uVar17;
  long lVar18;
  ushort *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  VInt16<2> *pVVar23;
  Float *pFVar24;
  long lVar25;
  VInt16 *pVVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  VInt16 *pVVar29;
  uint uVar30;
  int iVar31;
  undefined1 (*pauVar32) [16];
  long in_FS_OFFSET;
  short sVar33;
  ushort uVar34;
  short sVar35;
  short sVar36;
  short sVar43;
  ushort uVar44;
  short sVar45;
  uint uVar37;
  undefined4 uVar38;
  short sVar46;
  ushort uVar47;
  short sVar48;
  short sVar49;
  ushort uVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  short sVar60;
  uint uVar61;
  ulong uVar62;
  short sVar68;
  short sVar70;
  short sVar72;
  short sVar75;
  short sVar78;
  short sVar81;
  short sVar84;
  undefined1 auVar63 [16];
  ushort uVar73;
  ushort uVar76;
  ushort uVar79;
  ushort uVar82;
  ushort uVar85;
  undefined1 auVar64 [16];
  short sVar69;
  short sVar71;
  short sVar74;
  short sVar77;
  short sVar80;
  short sVar83;
  short sVar86;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar100;
  undefined1 auVar99 [16];
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar109;
  float fVar110;
  undefined1 auVar108 [16];
  float fVar111;
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
  ushort local_438 [16];
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
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_688 = (undefined1  [16])0x0;
  local_5e8 = (undefined1  [16])0x0;
  local_5d8 = (undefined1  [16])0x0;
  local_5c8 = (undefined1  [16])0x0;
  local_5b8 = (undefined1  [16])0x0;
  local_5a8 = (undefined1  [16])0x0;
  uVar17 = *(uint *)param_6 & 0x400;
  local_598 = (undefined1  [16])0x0;
  uVar30 = *(uint *)param_6 & 0x200;
  pVVar23 = param_4;
  auVar63 = (undefined1  [16])0x0;
  do {
    uVar34 = *(ushort *)param_3;
    uVar44 = *(ushort *)(param_3 + 2);
    uVar47 = *(ushort *)(param_3 + 4);
    uVar50 = *(ushort *)(param_3 + 6);
    uVar73 = *(ushort *)(param_3 + 8);
    uVar76 = *(ushort *)(param_3 + 10);
    uVar79 = *(ushort *)(param_3 + 0xc);
    uVar82 = *(ushort *)(param_3 + 0xe);
    lVar18 = 0;
    do {
      pVVar1 = pVVar23 + lVar18;
      uVar85 = *(ushort *)(pVVar1 + 2);
      uVar8 = *(ushort *)(pVVar1 + 4);
      uVar9 = *(ushort *)(pVVar1 + 6);
      uVar10 = *(ushort *)(pVVar1 + 8);
      uVar11 = *(ushort *)(pVVar1 + 10);
      uVar12 = *(ushort *)(pVVar1 + 0xc);
      uVar13 = *(ushort *)(pVVar1 + 0xe);
      *(ushort *)(local_5e8 + lVar18) =
           (*(ushort *)pVVar1 & uVar34) + *(short *)(local_5e8 + lVar18);
      *(ushort *)(local_5e8 + lVar18 + 2) = (uVar85 & uVar44) + *(short *)(local_5e8 + lVar18 + 2);
      *(ushort *)(local_5e8 + lVar18 + 4) = (uVar8 & uVar47) + *(short *)(local_5e8 + lVar18 + 4);
      *(ushort *)(local_5e8 + lVar18 + 6) = (uVar9 & uVar50) + *(short *)(local_5e8 + lVar18 + 6);
      *(ushort *)(local_5e8 + lVar18 + 8) = (uVar10 & uVar73) + *(short *)(local_5e8 + lVar18 + 8);
      *(ushort *)(local_5e8 + lVar18 + 10) = (uVar11 & uVar76) + *(short *)(local_5e8 + lVar18 + 10)
      ;
      *(ushort *)(local_5e8 + lVar18 + 0xc) =
           (uVar12 & uVar79) + *(short *)(local_5e8 + lVar18 + 0xc);
      *(ushort *)(local_5e8 + lVar18 + 0xe) =
           (uVar13 & uVar82) + *(short *)(local_5e8 + lVar18 + 0xe);
      pVVar1 = pVVar23 + lVar18;
      sVar60 = *(short *)(pVVar1 + 2);
      sVar68 = *(short *)(pVVar1 + 4);
      sVar70 = *(short *)(pVVar1 + 6);
      sVar72 = *(short *)(pVVar1 + 8);
      sVar75 = *(short *)(pVVar1 + 10);
      sVar78 = *(short *)(pVVar1 + 0xc);
      sVar81 = *(short *)(pVVar1 + 0xe);
      *(short *)(local_5b8 + lVar18) = *(short *)(local_5b8 + lVar18) + *(short *)pVVar1;
      *(short *)(local_5b8 + lVar18 + 2) = *(short *)(local_5b8 + lVar18 + 2) + sVar60;
      *(short *)(local_5b8 + lVar18 + 4) = *(short *)(local_5b8 + lVar18 + 4) + sVar68;
      *(short *)(local_5b8 + lVar18 + 6) = *(short *)(local_5b8 + lVar18 + 6) + sVar70;
      *(short *)(local_5b8 + lVar18 + 8) = *(short *)(local_5b8 + lVar18 + 8) + sVar72;
      *(short *)(local_5b8 + lVar18 + 10) = *(short *)(local_5b8 + lVar18 + 10) + sVar75;
      *(short *)(local_5b8 + lVar18 + 0xc) = *(short *)(local_5b8 + lVar18 + 0xc) + sVar78;
      *(short *)(local_5b8 + lVar18 + 0xe) = *(short *)(local_5b8 + lVar18 + 0xe) + sVar81;
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != 0x30);
    pVVar23 = pVVar23 + 0x30;
    param_3 = param_3 + 0x10;
    auVar64._0_2_ = (uVar34 & __LC30) + auVar63._0_2_;
    auVar64._2_2_ = (uVar44 & _UNK_0010b272) + auVar63._2_2_;
    auVar64._4_2_ = (uVar47 & _UNK_0010b274) + auVar63._4_2_;
    auVar64._6_2_ = (uVar50 & _UNK_0010b276) + auVar63._6_2_;
    auVar64._8_2_ = (uVar73 & _UNK_0010b278) + auVar63._8_2_;
    auVar64._10_2_ = (uVar76 & _UNK_0010b27a) + auVar63._10_2_;
    auVar64._12_2_ = (uVar79 & _UNK_0010b27c) + auVar63._12_2_;
    auVar64._14_2_ = (uVar82 & _UNK_0010b27e) + auVar63._14_2_;
    auVar63 = auVar64;
  } while (param_4 + 0x300 != pVVar23);
  lVar18 = 0;
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
  local_678[0] = (VInt16)auVar64[0];
  local_678[1] = (VInt16)auVar64[1];
  local_678[2] = (VInt16)auVar64[2];
  local_678[3] = (VInt16)auVar64[3];
  local_678[4] = (VInt16)auVar64[4];
  local_678[5] = (VInt16)auVar64[5];
  local_678[6] = (VInt16)auVar64[6];
  local_678[7] = (VInt16)auVar64[7];
  local_678[8] = (VInt16)auVar64[8];
  local_678[9] = (VInt16)auVar64[9];
  local_678[10] = (VInt16)auVar64[10];
  local_678[0xb] = (VInt16)auVar64[0xb];
  local_678[0xc] = (VInt16)auVar64[0xc];
  local_678[0xd] = (VInt16)auVar64[0xd];
  local_678[0xe] = (VInt16)auVar64[0xe];
  local_678[0xf] = (VInt16)auVar64[0xf];
  local_598._2_2_ = local_598._2_2_ - local_5c8._2_2_;
  local_598._0_2_ = local_598._0_2_ - local_5c8._0_2_;
  local_598._4_2_ = local_598._4_2_ - local_5c8._4_2_;
  local_598._6_2_ = local_598._6_2_ - local_5c8._6_2_;
  local_598._8_2_ = local_598._8_2_ - local_5c8._8_2_;
  local_598._10_2_ = local_598._10_2_ - local_5c8._10_2_;
  local_598._12_2_ = local_598._12_2_ - local_5c8._12_2_;
  local_598._14_2_ = local_598._14_2_ - local_5c8._14_2_;
  sVar60 = __LC114 - auVar64._0_2_;
  sVar68 = _UNK_0010b352 - auVar64._2_2_;
  sVar70 = _UNK_0010b354 - auVar64._4_2_;
  sVar72 = _UNK_0010b356 - auVar64._6_2_;
  sVar75 = _UNK_0010b358 - auVar64._8_2_;
  sVar78 = _UNK_0010b35a - auVar64._10_2_;
  sVar81 = _UNK_0010b35c - auVar64._12_2_;
  sVar84 = _UNK_0010b35e - auVar64._14_2_;
  local_668 = sVar60;
  sStack_666 = sVar68;
  sStack_664 = sVar70;
  sStack_662 = sVar72;
  sStack_660 = sVar75;
  sStack_65e = sVar78;
  sStack_65c = sVar81;
  sStack_65a = sVar84;
  auVar63 = pmulhuw(__LC71,auVar64);
  local_238 = auVar64._8_2_ * SUB162(__LC71,8);
  uStack_236 = auVar63._8_2_;
  sStack_234 = auVar64._10_2_ * SUB162(__LC71,10);
  uStack_232 = auVar63._10_2_;
  sStack_230 = auVar64._12_2_ * SUB162(__LC71,0xc);
  uStack_22e = auVar63._12_2_;
  sStack_22c = auVar64._14_2_ * SUB162(__LC71,0xe);
  uStack_22a = auVar63._14_2_;
  auVar87 = psllw(auVar64,4);
  local_248._0_2_ = auVar64._0_2_ * SUB162(__LC71,0);
  local_248._2_2_ = auVar63._0_2_;
  sStack_244 = auVar64._2_2_ * SUB162(__LC71,2);
  uStack_242 = auVar63._2_2_;
  sStack_240 = auVar64._4_2_ * SUB162(__LC71,4);
  uStack_23e = auVar63._4_2_;
  sStack_23c = auVar64._6_2_ * SUB162(__LC71,6);
  uStack_23a = auVar63._6_2_;
  auVar87 = auVar87 | auVar64;
  do {
    local_638._0_2_ = *(short *)(local_5e8 + lVar18) * 2 + auVar87._0_2_;
    local_638._2_2_ = *(short *)(local_5e8 + lVar18 + 2) * 2 + auVar87._2_2_;
    local_638._4_2_ = *(short *)(local_5e8 + lVar18 + 4) * 2 + auVar87._4_2_;
    local_638._6_2_ = *(short *)(local_5e8 + lVar18 + 6) * 2 + auVar87._6_2_;
    local_638._8_2_ = *(short *)(local_5e8 + lVar18 + 8) * 2 + auVar87._8_2_;
    local_638._10_2_ = *(short *)(local_5e8 + lVar18 + 10) * 2 + auVar87._10_2_;
    local_638._12_2_ = *(short *)(local_5e8 + lVar18 + 0xc) * 2 + auVar87._12_2_;
    local_638._14_2_ = *(short *)(local_5e8 + lVar18 + 0xe) * 2 + auVar87._14_2_;
    if (uVar17 != 0) {
      local_638._0_2_ = *(short *)(local_5e8 + lVar18) * 2;
      local_638._2_2_ = *(short *)(local_5e8 + lVar18 + 2) * 2;
      local_638._4_2_ = *(short *)(local_5e8 + lVar18 + 4) * 2;
      local_638._6_2_ = *(short *)(local_5e8 + lVar18 + 6) * 2;
      local_638._8_2_ = *(short *)(local_5e8 + lVar18 + 8) * 2;
      local_638._10_2_ = *(short *)(local_5e8 + lVar18 + 10) * 2;
      local_638._12_2_ = *(short *)(local_5e8 + lVar18 + 0xc) * 2;
      local_638._14_2_ = *(short *)(local_5e8 + lVar18 + 0xe) * 2;
    }
    lVar25 = 0;
    do {
      iVar31 = *(int *)(*(undefined1 (*) [16])&local_248 + lVar25 * 2);
      uVar16 = 0;
      if (iVar31 != 0) {
        uVar16 = (undefined2)((long)(ulong)*(ushort *)(local_638 + lVar25) / (long)iVar31);
      }
      *(undefined2 *)(local_588 + lVar25 + lVar18) = uVar16;
      lVar25 = lVar25 + 2;
    } while (lVar25 != 0x10);
    *(undefined8 *)(local_558 + lVar18) = local_638._0_8_;
    *(undefined8 *)((long)auStack_550 + lVar18) = local_638._8_8_;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x30);
  if (uVar17 != 0) {
    ResolveTHFakeBT709Rounding(local_588,local_558,local_678);
  }
  iVar31 = 0;
  local_748 = SUB82(param_4,0);
  uStack_746 = (undefined2)((ulong)param_4 >> 0x10);
  uStack_744 = (undefined2)((ulong)param_4 >> 0x20);
  uStack_742 = (undefined2)((ulong)param_4 >> 0x30);
  auVar63 = psllw((undefined1  [16])local_588,4);
  local_528 = (VInt16  [16])(auVar63 | (undefined1  [16])local_588);
  local_518 = psllw(local_578,4);
  local_518 = local_518 | local_578;
  local_508 = psllw(local_568,4);
  local_508 = local_508 | local_568;
  pFVar24 = param_5;
  do {
    this = (ETCComputer *)(&local_248 + (long)iVar31 * 8);
    if (uVar17 == 0) {
      if (uVar30 == 0) {
        ComputeErrorWeighted(this,local_528,pFVar24);
      }
      else {
        ComputeErrorUniform(this,(VInt16 *)
                                 CONCAT26(uStack_742,
                                          CONCAT24(uStack_744,CONCAT22(uStack_746,local_748))),
                            local_528);
      }
    }
    else {
      ComputeErrorFakeBT709(this,local_528,pFVar24);
    }
    iVar31 = iVar31 + 1;
    lVar18 = CONCAT26(uStack_742,CONCAT24(uStack_744,CONCAT22(uStack_746,local_748))) + 0x30;
    local_748 = (undefined2)lVar18;
    uStack_746 = (undefined2)((ulong)lVar18 >> 0x10);
    uStack_744 = (undefined2)((ulong)lVar18 >> 0x20);
    uStack_742 = (undefined2)((ulong)lVar18 >> 0x30);
    pFVar24 = pFVar24 + 0x60;
  } while (iVar31 != 0x10);
  sVar33 = auVar64._0_2_ + __LC72;
  sVar43 = auVar64._2_2_ + _UNK_0010b3a2;
  sVar46 = auVar64._4_2_ + _UNK_0010b3a4;
  sVar49 = auVar64._6_2_ + _UNK_0010b3a6;
  sVar52 = auVar64._8_2_ + _UNK_0010b3a8;
  sVar54 = auVar64._10_2_ + _UNK_0010b3aa;
  sVar56 = auVar64._12_2_ + _UNK_0010b3ac;
  sVar58 = auVar64._14_2_ + _UNK_0010b3ae;
  local_628 = (undefined1  [16])0x0;
  local_618 = (undefined1  [16])0x0;
  pVVar29 = (VInt16 *)&local_4c8;
  local_658 = (undefined1  [16])0x0;
  uVar34 = (ushort)(sVar75 < sVar60) * sVar60 | (ushort)(sVar75 >= sVar60) * sVar75;
  uVar44 = (ushort)(sVar78 < sVar68) * sVar68 | (ushort)(sVar78 >= sVar68) * sVar78;
  uVar47 = (ushort)(sVar81 < sVar70) * sVar70 | (ushort)(sVar81 >= sVar70) * sVar81;
  uVar50 = (ushort)(sVar84 < sVar72) * sVar72 | (ushort)(sVar84 >= sVar72) * sVar84;
  local_648 = (undefined1  [16])0x0;
  uVar34 = ((short)uVar34 < (short)uVar47) * uVar47 | ((short)uVar34 >= (short)uVar47) * uVar34;
  uVar44 = ((short)uVar44 < (short)uVar50) * uVar50 | ((short)uVar44 >= (short)uVar50) * uVar44;
  uVar44 = ((short)uVar34 < (short)uVar44) * uVar44 | ((short)uVar34 >= (short)uVar44) * uVar34;
  uVar34 = 0;
  if (-1 < (short)uVar44) {
    uVar34 = uVar44;
  }
  local_6d8 = 0;
  do {
    local_608[3] = 0;
    local_608[2] = 0;
    local_608[1] = 0;
    local_608[0] = 0;
    local_5f8 = (undefined1  [16])0x0;
    sVar4 = (&Tables::ETC1::g_thModifierTable)[local_6d8];
    sVar36 = -uVar34;
    do {
      pVVar26 = local_4f8;
      if (uVar17 == 0) {
        do {
          *(undefined1 (*) [16])pVVar26 = (undefined1  [16])0x0;
          pVVar26 = pVVar26 + 0x10;
        } while (pVVar29 != pVVar26);
      }
      else {
        lVar18 = 0;
        uVar44 = (ushort)(sVar60 < sVar36) * sVar60 | (ushort)(sVar60 >= sVar36) * sVar36;
        uVar47 = (ushort)(sVar68 < sVar36) * sVar68 | (ushort)(sVar68 >= sVar36) * sVar36;
        uVar50 = (ushort)(sVar70 < sVar36) * sVar70 | (ushort)(sVar70 >= sVar36) * sVar36;
        uVar73 = (ushort)(sVar72 < sVar36) * sVar72 | (ushort)(sVar72 >= sVar36) * sVar36;
        uVar76 = (ushort)(sVar75 < sVar36) * sVar75 | (ushort)(sVar75 >= sVar36) * sVar36;
        uVar79 = (ushort)(sVar78 < sVar36) * sVar78 | (ushort)(sVar78 >= sVar36) * sVar36;
        uVar82 = (ushort)(sVar81 < sVar36) * sVar81 | (ushort)(sVar81 >= sVar36) * sVar36;
        uVar85 = (ushort)(sVar84 < sVar36) * sVar84 | (ushort)(sVar84 >= sVar36) * sVar36;
        do {
          sVar45 = *(short *)(local_5b8 + lVar18 + 2);
          sVar48 = *(short *)(local_5b8 + lVar18 + 4);
          sVar51 = *(short *)(local_5b8 + lVar18 + 6);
          sVar53 = *(short *)(local_5b8 + lVar18 + 8);
          sVar55 = *(short *)(local_5b8 + lVar18 + 10);
          sVar57 = *(short *)(local_5b8 + lVar18 + 0xc);
          sVar59 = *(short *)(local_5b8 + lVar18 + 0xe);
          *(undefined1 (*) [16])(local_4f8 + lVar18) = (undefined1  [16])0x0;
          sVar35 = *(short *)(local_5b8 + lVar18) * 2 +
                   ((ushort)((short)uVar44 < sVar33) * sVar33 | ((short)uVar44 >= sVar33) * uVar44)
                   * sVar4 * 2;
          sVar45 = sVar45 * 2 +
                   ((ushort)((short)uVar47 < sVar43) * sVar43 | ((short)uVar47 >= sVar43) * uVar47)
                   * sVar4 * 2;
          sVar48 = sVar48 * 2 +
                   ((ushort)((short)uVar50 < sVar46) * sVar46 | ((short)uVar50 >= sVar46) * uVar50)
                   * sVar4 * 2;
          sVar51 = sVar51 * 2 +
                   ((ushort)((short)uVar73 < sVar49) * sVar49 | ((short)uVar73 >= sVar49) * uVar73)
                   * sVar4 * 2;
          sVar53 = sVar53 * 2 +
                   ((ushort)((short)uVar76 < sVar52) * sVar52 | ((short)uVar76 >= sVar52) * uVar76)
                   * sVar4 * 2;
          sVar55 = sVar55 * 2 +
                   ((ushort)((short)uVar79 < sVar54) * sVar54 | ((short)uVar79 >= sVar54) * uVar79)
                   * sVar4 * 2;
          sVar57 = sVar57 * 2 +
                   ((ushort)((short)uVar82 < sVar56) * sVar56 | ((short)uVar82 >= sVar56) * uVar82)
                   * sVar4 * 2;
          sVar59 = sVar59 * 2 +
                   ((ushort)((short)uVar85 < sVar58) * sVar58 | ((short)uVar85 >= sVar58) * uVar85)
                   * sVar4 * 2;
          pVVar26 = pVVar29 + lVar18;
          *(ushort *)pVVar26 = (ushort)(-1 < sVar35) * sVar35;
          *(ushort *)(pVVar26 + 2) = (ushort)(-1 < sVar45) * sVar45;
          *(ushort *)(pVVar26 + 4) = (ushort)(-1 < sVar48) * sVar48;
          *(ushort *)(pVVar26 + 6) = (ushort)(-1 < sVar51) * sVar51;
          *(ushort *)(pVVar26 + 8) = (ushort)(-1 < sVar53) * sVar53;
          *(ushort *)(pVVar26 + 10) = (ushort)(-1 < sVar55) * sVar55;
          *(ushort *)(pVVar26 + 0xc) = (ushort)(-1 < sVar57) * sVar57;
          *(ushort *)(pVVar26 + 0xe) = (ushort)(-1 < sVar59) * sVar59;
          lVar18 = lVar18 + 0x10;
        } while (lVar18 != 0x30);
        ResolveTHFakeBT709Rounding(local_4f8,pVVar29,(VInt16 *)&local_668);
      }
      lVar18 = 0;
      auVar63 = psllw(local_4d8,10);
      auVar64 = psllw(local_4e8,5);
      local_638 = auVar63 | auVar64 | (undefined1  [16])local_4f8;
      do {
        iVar31 = *(int *)((long)local_608 + lVar18 * 2);
        sVar45 = *(short *)(local_638 + lVar18);
        if ((iVar31 == 0) ||
           (sVar45 != *(short *)((long)local_438 + lVar18 + (long)(iVar31 + -1) * 0x10))) {
          *(int *)((long)local_608 + lVar18 * 2) = iVar31 + 1;
          *(short *)((long)local_438 + lVar18 + (long)iVar31 * 0x10) = sVar45;
        }
        lVar18 = lVar18 + 2;
      } while (lVar18 != 0x10);
      sVar36 = sVar36 + 1;
    } while (sVar36 <= (short)uVar34);
    auVar87._0_4_ = -(uint)(local_608[0] < local_5f8._0_4_);
    auVar87._4_4_ = -(uint)(local_608[1] < local_5f8._4_4_);
    auVar87._8_4_ = -(uint)(local_608[2] < local_5f8._8_4_);
    auVar87._12_4_ = -(uint)(local_608[3] < local_5f8._12_4_);
    auVar63._4_4_ = local_608[1];
    auVar63._0_4_ = local_608[0];
    auVar63._8_4_ = local_608[2];
    auVar63._12_4_ = local_608[3];
    auVar63 = local_5f8 & auVar87 | ~auVar87 & auVar63;
    auVar88._0_4_ = -(uint)(auVar63._0_4_ < auVar63._8_4_);
    auVar88._4_4_ = -(uint)(auVar63._4_4_ < auVar63._12_4_);
    auVar88._8_4_ = -(uint)(auVar63._8_4_ < 0);
    auVar88._12_4_ = -(uint)(auVar63._12_4_ < 0);
    auVar63 = ~auVar88 & auVar63 | auVar63 >> 0x40 & auVar88;
    uVar37 = auVar63._0_4_;
    uVar20 = auVar63._4_4_;
    uVar61 = -(uint)((int)uVar37 < (int)uVar20);
    uVar61 = ~uVar61 & uVar37 | uVar20 & uVar61;
    uVar37 = 0;
    if (-1 < (int)uVar61) {
      uVar37 = uVar61;
    }
    lVar18 = 0;
    do {
      iVar31 = local_608[lVar18];
      uVar44 = *(ushort *)((long)*(undefined1 (*) [16])local_438 + lVar18 * 2);
      if (iVar31 + 1 < (int)uVar37) {
        puVar19 = (ushort *)((long)((undefined1 (*) [16])local_438)[iVar31 + 1] + lVar18 * 2);
        do {
          *puVar19 = uVar44;
          puVar19 = puVar19 + 8;
        } while (puVar19 != local_418 + lVar18 + ((ulong)((uVar37 - 2) - iVar31) + (long)iVar31) * 8
                );
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != 8);
    if (0 < (int)uVar61) {
      uVar38 = CONCAT22((short)local_6d8,(short)local_6d8);
      pauVar27 = (undefined1 (*) [16])local_48;
      fVar101 = *(float *)(param_2 + 0x10);
      fVar102 = *(float *)(param_2 + 0x14);
      fVar103 = *(float *)(param_2 + 0x18);
      fVar104 = *(float *)(param_2 + 0x1c);
      fVar107 = *(float *)param_2;
      fVar109 = *(float *)(param_2 + 4);
      fVar110 = *(float *)(param_2 + 8);
      fVar111 = *(float *)(param_2 + 0xc);
      pauVar28 = (undefined1 (*) [16])local_438;
      do {
        uVar44 = *(ushort *)*pauVar28;
        uVar47 = *(ushort *)((long)*pauVar28 + 2);
        uVar50 = *(ushort *)((long)*pauVar28 + 4);
        uVar73 = *(ushort *)((long)*pauVar28 + 6);
        uVar76 = *(ushort *)((long)*pauVar28 + 8);
        uVar79 = *(ushort *)((long)*pauVar28 + 10);
        uVar82 = *(ushort *)((long)*pauVar28 + 0xc);
        uVar85 = *(ushort *)((long)*pauVar28 + 0xe);
        auVar63 = *pauVar28;
        pVVar26 = pVVar29;
        uVar61 = 0;
        do {
          uVar20 = uVar61 + 5;
          uVar62 = (ulong)uVar61;
          auVar106._0_2_ = uVar44 >> uVar62;
          auVar106._2_2_ = uVar47 >> uVar62;
          auVar106._4_2_ = uVar50 >> uVar62;
          auVar106._6_2_ = uVar73 >> uVar62;
          auVar106._8_2_ = uVar76 >> uVar62;
          auVar106._10_2_ = uVar79 >> uVar62;
          auVar106._12_2_ = uVar82 >> uVar62;
          auVar106._14_2_ = uVar85 >> uVar62;
          auVar64 = psllw(auVar106 & __LC73,4);
          auVar64 = auVar106 & __LC73 | auVar64;
          sVar35 = sVar4 + auVar64._0_2_;
          sVar69 = sVar4 + auVar64._2_2_;
          sVar71 = sVar4 + auVar64._4_2_;
          sVar74 = sVar4 + auVar64._6_2_;
          sVar77 = sVar4 + auVar64._8_2_;
          sVar80 = sVar4 + auVar64._10_2_;
          sVar83 = sVar4 + auVar64._12_2_;
          sVar86 = sVar4 + auVar64._14_2_;
          *(undefined1 (*) [16])(pVVar26 + 0x30) = auVar64;
          sVar36 = auVar64._0_2_ - sVar4;
          sVar45 = auVar64._2_2_ - sVar4;
          sVar48 = auVar64._4_2_ - sVar4;
          sVar51 = auVar64._6_2_ - sVar4;
          sVar53 = auVar64._8_2_ - sVar4;
          sVar55 = auVar64._10_2_ - sVar4;
          sVar57 = auVar64._12_2_ - sVar4;
          sVar59 = auVar64._14_2_ - sVar4;
          *(ushort *)pVVar26 =
               (ushort)(__LC27 < sVar35) * __LC27 | (ushort)(__LC27 >= sVar35) * sVar35;
          *(ushort *)(pVVar26 + 2) =
               (ushort)(_UNK_0010b292 < sVar69) * _UNK_0010b292 |
               (ushort)(_UNK_0010b292 >= sVar69) * sVar69;
          *(ushort *)(pVVar26 + 4) =
               (ushort)(_UNK_0010b294 < sVar71) * _UNK_0010b294 |
               (ushort)(_UNK_0010b294 >= sVar71) * sVar71;
          *(ushort *)(pVVar26 + 6) =
               (ushort)(_UNK_0010b296 < sVar74) * _UNK_0010b296 |
               (ushort)(_UNK_0010b296 >= sVar74) * sVar74;
          *(ushort *)(pVVar26 + 8) =
               (ushort)(_UNK_0010b298 < sVar77) * _UNK_0010b298 |
               (ushort)(_UNK_0010b298 >= sVar77) * sVar77;
          *(ushort *)(pVVar26 + 10) =
               (ushort)(_UNK_0010b29a < sVar80) * _UNK_0010b29a |
               (ushort)(_UNK_0010b29a >= sVar80) * sVar80;
          *(ushort *)(pVVar26 + 0xc) =
               (ushort)(_UNK_0010b29c < sVar83) * _UNK_0010b29c |
               (ushort)(_UNK_0010b29c >= sVar83) * sVar83;
          *(ushort *)(pVVar26 + 0xe) =
               (ushort)(_UNK_0010b29e < sVar86) * _UNK_0010b29e |
               (ushort)(_UNK_0010b29e >= sVar86) * sVar86;
          *(ushort *)(pVVar26 + 0x60) = (ushort)(-1 < sVar36) * sVar36;
          *(ushort *)(pVVar26 + 0x62) = (ushort)(-1 < sVar45) * sVar45;
          *(ushort *)(pVVar26 + 100) = (ushort)(-1 < sVar48) * sVar48;
          *(ushort *)(pVVar26 + 0x66) = (ushort)(-1 < sVar51) * sVar51;
          *(ushort *)(pVVar26 + 0x68) = (ushort)(-1 < sVar53) * sVar53;
          *(ushort *)(pVVar26 + 0x6a) = (ushort)(-1 < sVar55) * sVar55;
          *(ushort *)(pVVar26 + 0x6c) = (ushort)(-1 < sVar57) * sVar57;
          *(ushort *)(pVVar26 + 0x6e) = (ushort)(-1 < sVar59) * sVar59;
          pVVar26 = pVVar26 + 0x10;
          uVar61 = uVar20;
        } while (uVar20 != 0xf);
        auVar87 = (undefined1  [16])0x0;
        auVar64 = (undefined1  [16])0x0;
        auVar40 = ZEXT816(0);
        auVar99._0_12_ = ZEXT812(0);
        auVar99._12_4_ = 0.0;
        pVVar26 = pVVar29;
        pFVar24 = param_5;
        pVVar23 = param_4;
        pauVar32 = (undefined1 (*) [16])&local_248;
        iVar31 = 0;
        do {
          auVar88 = *pauVar32;
          auVar95 = (undefined1  [16])0x0;
          pVVar29 = pVVar26;
          auVar106 = auVar40;
          auVar40 = pauVar32[1];
          auVar41 = auVar99;
          iVar21 = 1;
          do {
            if (uVar30 == 0) {
              ComputeErrorWeighted(local_4f8,pVVar26,pFVar24);
            }
            else {
              ComputeErrorUniform((ETCComputer *)local_4f8,pVVar26,(VInt16 *)pVVar23);
            }
            pVVar26 = pVVar26 + 0x30;
            auVar65 = minps(local_4e8,auVar40);
            auVar39._4_4_ = -(uint)(local_4f8._4_4_ < auVar88._4_4_);
            auVar39._0_4_ = -(uint)(local_4f8._0_4_ < auVar88._0_4_);
            auVar39._8_4_ = -(uint)(local_4f8._8_4_ < auVar88._8_4_);
            auVar39._12_4_ = -(uint)(local_4f8._12_4_ < auVar88._12_4_);
            auVar94._4_4_ = -(uint)(local_4e8._4_4_ < auVar40._4_4_);
            auVar94._0_4_ = -(uint)(local_4e8._0_4_ < auVar40._0_4_);
            auVar94._8_4_ = -(uint)(local_4e8._8_4_ < auVar40._8_4_);
            auVar94._12_4_ = -(uint)(local_4e8._12_4_ < auVar40._12_4_);
            auVar88 = minps((undefined1  [16])local_4f8,auVar88);
            iVar22 = iVar21 + 1;
            auVar66._0_4_ = CONCAT22((short)iVar21,(short)iVar21);
            auVar40 = packssdw(auVar39,auVar94);
            auVar66._4_4_ = auVar66._0_4_;
            auVar66._8_4_ = auVar66._0_4_;
            auVar66._12_4_ = auVar66._0_4_;
            auVar95 = auVar40 & auVar66 | ~auVar40 & auVar95;
            auVar40 = auVar65;
            iVar21 = iVar22;
          } while (iVar22 != 4);
          pauVar32 = pauVar32 + 2;
          pFVar24 = pFVar24 + 0x60;
          auVar6._10_2_ = 0;
          auVar6._0_10_ = auVar95._0_10_;
          auVar6._12_2_ = auVar95._6_2_;
          auVar7._8_2_ = auVar95._4_2_;
          auVar7._0_8_ = auVar95._0_8_;
          auVar7._10_4_ = auVar6._10_4_;
          auVar15._6_8_ = 0;
          auVar15._0_6_ = auVar7._8_6_;
          fVar96 = auVar106._0_4_ + auVar88._0_4_;
          fVar97 = auVar106._4_4_ + auVar88._4_4_;
          auVar40._0_8_ = CONCAT44(fVar97,fVar96);
          auVar40._8_4_ = auVar106._8_4_ + auVar88._8_4_;
          auVar40._12_4_ = auVar106._12_4_ + auVar88._12_4_;
          pVVar23 = (VInt16<2> *)((VInt16 *)pVVar23 + 0x30);
          fVar98 = auVar41._0_4_ + auVar65._0_4_;
          fVar100 = auVar41._4_4_ + auVar65._4_4_;
          auVar99._0_8_ = CONCAT44(fVar100,fVar98);
          auVar99._8_4_ = auVar41._8_4_ + auVar65._8_4_;
          auVar99._12_4_ = auVar41._12_4_ + auVar65._12_4_;
          auVar41._0_4_ = (uint)auVar95._0_2_ << iVar31;
          auVar41._4_4_ = (undefined4)CONCAT82(SUB148(auVar15 << 0x40,6),auVar95._2_2_);
          auVar41._8_4_ = auVar7._8_4_;
          auVar41._12_4_ = auVar6._10_4_ >> 0x10;
          auVar65._0_4_ = (uint)auVar95._8_2_ << iVar31;
          auVar65._4_2_ = auVar95._10_2_;
          auVar65._6_2_ = 0;
          auVar65._8_2_ = auVar95._12_2_;
          auVar65._10_2_ = 0;
          auVar65._12_2_ = auVar95._14_2_;
          auVar65._14_2_ = 0;
          auVar87 = auVar87 | auVar41;
          auVar64 = auVar64 | auVar65;
          pVVar26 = pVVar29;
          iVar31 = iVar31 + 2;
        } while (pauVar32 != pauVar27);
        auVar105._8_4_ = auVar99._8_4_;
        auVar105._0_8_ = auVar99._0_8_;
        auVar105._12_4_ = auVar99._12_4_;
        auVar108._8_4_ = auVar40._8_4_;
        auVar108._0_8_ = auVar40._0_8_;
        auVar108._12_4_ = auVar40._12_4_;
        auVar5._4_4_ = fVar109;
        auVar5._0_4_ = fVar107;
        auVar5._8_4_ = fVar110;
        auVar5._12_4_ = fVar111;
        auVar88 = minps(auVar108,auVar5);
        auVar42._4_4_ = -(uint)(fVar97 < fVar109);
        auVar42._0_4_ = -(uint)(fVar96 < fVar107);
        auVar42._8_4_ = -(uint)(auVar40._8_4_ < fVar110);
        auVar42._12_4_ = -(uint)(auVar40._12_4_ < fVar111);
        auVar89._4_4_ = -(uint)(fVar100 < fVar102);
        auVar89._0_4_ = -(uint)(fVar98 < fVar101);
        auVar89._8_4_ = -(uint)(auVar99._8_4_ < fVar103);
        auVar89._12_4_ = -(uint)(auVar99._12_4_ < fVar104);
        auVar95._4_4_ = fVar102;
        auVar95._0_4_ = fVar101;
        auVar95._8_4_ = fVar103;
        auVar95._12_4_ = fVar104;
        auVar106 = minps(auVar105,auVar95);
        fVar107 = auVar88._0_4_;
        fVar109 = auVar88._4_4_;
        fVar110 = auVar88._8_4_;
        fVar111 = auVar88._12_4_;
        *(undefined1 (*) [16])param_2 = auVar88;
        auVar88 = packssdw(auVar42,auVar89);
        fVar101 = auVar106._0_4_;
        fVar102 = auVar106._4_4_;
        fVar103 = auVar106._8_4_;
        fVar104 = auVar106._12_4_;
        *(undefined1 (*) [16])(param_2 + 0x10) = auVar106;
        if ((((((((((((((((auVar88 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar88 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar88 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar88 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar88 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar88 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar88 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar88 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar88 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar88 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar88 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar88 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar88 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar88 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar88 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            auVar88[0xf] < '\0') {
          local_648 = auVar63 & auVar88 | ~auVar88 & local_648;
          auVar93._0_12_ = auVar88._0_12_;
          auVar93._12_2_ = auVar88._6_2_;
          auVar93._14_2_ = auVar88._6_2_;
          auVar92._12_4_ = auVar93._12_4_;
          auVar92._0_10_ = auVar88._0_10_;
          auVar92._10_2_ = auVar88._4_2_;
          auVar91._10_6_ = auVar92._10_6_;
          auVar91._0_8_ = auVar88._0_8_;
          auVar91._8_2_ = auVar88._4_2_;
          auVar90._8_8_ = auVar91._8_8_;
          auVar90._6_2_ = auVar88._2_2_;
          auVar90._4_2_ = auVar88._2_2_;
          auVar90._2_2_ = auVar88._0_2_;
          auVar90._0_2_ = auVar88._0_2_;
          auVar67._2_2_ = auVar88._8_2_;
          auVar67._0_2_ = auVar88._8_2_;
          auVar67._4_2_ = auVar88._10_2_;
          auVar67._6_2_ = auVar88._10_2_;
          auVar67._8_2_ = auVar88._12_2_;
          auVar67._10_2_ = auVar88._12_2_;
          auVar67._14_2_ = auVar88._14_2_;
          auVar67._12_2_ = auVar67._14_2_;
          auVar14._4_4_ = uVar38;
          auVar14._0_4_ = uVar38;
          auVar14._8_4_ = uVar38;
          auVar14._12_4_ = uVar38;
          local_618 = auVar64 & auVar67 | ~auVar67 & local_618;
          local_628 = auVar87 & auVar90 | ~auVar90 & local_628;
          local_688 = auVar88 | local_688;
          local_658 = auVar14 & auVar88 | ~auVar88 & local_658;
        }
        pauVar28 = pauVar28 + 1;
      } while (pauVar28 != (undefined1 (*) [16])local_438 + (int)uVar37);
    }
    local_6d8 = local_6d8 + 1;
  } while (local_6d8 != 8);
  lVar18 = 0;
  do {
    while (*(short *)(local_688 + lVar18 * 2) != 0) {
      uVar34 = *(ushort *)(local_648 + lVar18 * 2);
      uVar17 = (uint)lVar18;
      lVar25 = lVar18 * 2;
      lVar2 = lVar18 * 2;
      uStack_4c4 = *(undefined2 *)(local_568 + lVar18 * 2);
      lVar3 = lVar18 * 2;
      lVar18 = lVar18 + 1;
      local_4c8 = CONCAT22((short)*(undefined4 *)(local_578 + lVar2),
                           (short)*(undefined4 *)(local_588 + lVar25));
      local_438[0] = uVar34 & 0xf;
      local_438[2] = (ushort)((int)(uint)uVar34 >> 10) & 0xf;
      local_438[1] = (ushort)((int)(uint)uVar34 >> 5) & 0xf;
      EmitTModeBlock(param_1,local_438,(ushort *)pVVar29,
                     *(int *)(local_628 + (long)((int)uVar17 >> 2) * 0x10 + (ulong)(uVar17 & 3) * 4)
                     ,*(ushort *)(local_658 + lVar3),true);
      param_1 = param_1 + 8;
      if (lVar18 == 8) goto LAB_0010478b;
    }
    lVar18 = lVar18 + 1;
    param_1 = param_1 + 8;
  } while (lVar18 != 8);
LAB_0010478b:
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



/* WARNING: Removing unreachable block (ram,0x00105123) */
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
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [14];
  bool bVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [14];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  unkbyte10 Var25;
  ushort uVar26;
  uint uVar27;
  uint uVar28;
  short *psVar29;
  short *psVar30;
  undefined4 *puVar31;
  HModeEval *pHVar32;
  VInt16<2> *pVVar33;
  HModeEval *pHVar34;
  long lVar35;
  Float *pFVar36;
  long lVar37;
  VInt16 *pVVar38;
  long lVar39;
  int iVar40;
  VInt16<2> *pVVar41;
  long lVar42;
  int iVar43;
  HModeEval *pHVar44;
  long in_FS_OFFSET;
  ushort uVar45;
  short sVar46;
  undefined2 uVar47;
  ushort uVar48;
  short sVar57;
  uint uVar50;
  short sVar59;
  short sVar61;
  short sVar63;
  short sVar65;
  short sVar67;
  short sVar69;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  ushort uVar58;
  ushort uVar60;
  ushort uVar62;
  ushort uVar64;
  ushort uVar66;
  ushort uVar68;
  ushort uVar70;
  undefined1 auVar56 [16];
  short sVar71;
  uint uVar72;
  ulong uVar74;
  short sVar79;
  short sVar81;
  short sVar82;
  short sVar83;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  short sVar78;
  short sVar80;
  short sVar84;
  undefined1 auVar77 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  uint uVar87;
  short sVar92;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  short sVar93;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  undefined1 auVar94 [16];
  undefined1 auVar102 [12];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
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
  ulong local_368;
  long local_330;
  undefined1 local_328 [32];
  undefined1 local_308 [16];
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
  undefined4 uVar49;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  uint uVar73;
  undefined1 auVar103 [16];
  
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
  uVar27 = uVar2 & 0x400;
  local_b8 = (undefined1  [16])0x0;
  pVVar41 = param_4;
  do {
    uVar45 = *(ushort *)param_3;
    uVar26 = *(ushort *)(param_3 + 2);
    uVar8 = *(ushort *)(param_3 + 4);
    uVar9 = *(ushort *)(param_3 + 6);
    uVar10 = *(ushort *)(param_3 + 8);
    uVar11 = *(ushort *)(param_3 + 10);
    uVar12 = *(ushort *)(param_3 + 0xc);
    uVar13 = *(ushort *)(param_3 + 0xe);
    psVar29 = (short *)local_108;
    pVVar33 = pVVar41;
    do {
      uVar48 = *(ushort *)pVVar33;
      uVar58 = *(ushort *)(pVVar33 + 2);
      uVar60 = *(ushort *)(pVVar33 + 4);
      uVar62 = *(ushort *)(pVVar33 + 6);
      uVar64 = *(ushort *)(pVVar33 + 8);
      uVar66 = *(ushort *)(pVVar33 + 10);
      uVar68 = *(ushort *)(pVVar33 + 0xc);
      uVar70 = *(ushort *)(pVVar33 + 0xe);
      psVar30 = psVar29 + 8;
      pVVar33 = pVVar33 + 0x10;
      *psVar29 = *psVar29 + uVar48;
      psVar29[1] = psVar29[1] + uVar58;
      psVar29[2] = psVar29[2] + uVar60;
      psVar29[3] = psVar29[3] + uVar62;
      psVar29[4] = psVar29[4] + uVar64;
      psVar29[5] = psVar29[5] + uVar66;
      psVar29[6] = psVar29[6] + uVar68;
      psVar29[7] = psVar29[7] + uVar70;
      psVar29[0x18] = (uVar48 & uVar45) + psVar29[0x18];
      psVar29[0x19] = (uVar58 & uVar26) + psVar29[0x19];
      psVar29[0x1a] = (uVar60 & uVar8) + psVar29[0x1a];
      psVar29[0x1b] = (uVar62 & uVar9) + psVar29[0x1b];
      psVar29[0x1c] = (uVar64 & uVar10) + psVar29[0x1c];
      psVar29[0x1d] = (uVar66 & uVar11) + psVar29[0x1d];
      psVar29[0x1e] = (uVar68 & uVar12) + psVar29[0x1e];
      psVar29[0x1f] = (uVar70 & uVar13) + psVar29[0x1f];
      psVar29 = psVar30;
    } while ((short *)local_d8 != psVar30);
    pVVar41 = pVVar41 + 0x30;
    param_3 = param_3 + 0x10;
    local_1d8 = (uVar45 & __LC30) + local_1d8;
    sStack_1d6 = (uVar26 & _UNK_0010b272) + sStack_1d6;
    sStack_1d4 = (uVar8 & _UNK_0010b274) + sStack_1d4;
    sStack_1d2 = (uVar9 & _UNK_0010b276) + sStack_1d2;
    sStack_1d0 = (uVar10 & _UNK_0010b278) + sStack_1d0;
    sStack_1ce = (uVar11 & _UNK_0010b27a) + sStack_1ce;
    sStack_1cc = (uVar12 & _UNK_0010b27c) + sStack_1cc;
    sStack_1ca = (uVar13 & _UNK_0010b27e) + sStack_1ca;
  } while (param_4 + 0x300 != pVVar41);
  uVar51 = *(undefined8 *)(param_5 + 0x83c0);
  uVar14 = *(undefined8 *)(param_5 + 0x83c8);
  sVar92 = 3;
  local_108 = ZEXT216(0);
  local_3c8 = (short)uVar51;
  sStack_3c6 = (short)((ulong)uVar51 >> 0x10);
  sStack_3c4 = (short)((ulong)uVar51 >> 0x20);
  sStack_3c2 = (short)((ulong)uVar51 >> 0x30);
  sStack_3c0 = (short)uVar14;
  sStack_3be = (short)((ulong)uVar14 >> 0x10);
  sStack_3bc = (short)((ulong)uVar14 >> 0x20);
  sStack_3ba = (short)((ulong)uVar14 >> 0x30);
  sVar46 = *(short *)(param_5 + 0x83d6);
  sStack_3b0 = *(short *)(param_5 + 0x83d8);
  sStack_3ae = *(short *)(param_5 + 0x83da);
  sStack_3ac = *(short *)(param_5 + 0x83dc);
  sStack_3aa = *(short *)(param_5 + 0x83de);
  local_f8 = ZEXT216(0);
  local_3b8 = (undefined1  [8])((long)CONCAT82(local_3b8,sVar46) << 0x30);
  local_e8 = ZEXT216(0);
  local_288 = (undefined1  [16])0x0;
  local_278 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_268 = (undefined1  [16])0x0;
  local_1e8 = __LC114 - local_1d8;
  sStack_1e6 = _UNK_0010b352 - sStack_1d6;
  sStack_1e4 = _UNK_0010b354 - sStack_1d4;
  sStack_1e2 = _UNK_0010b356 - sStack_1d2;
  sStack_1e0 = _UNK_0010b358 - sStack_1d0;
  sStack_1de = _UNK_0010b35a - sStack_1ce;
  sStack_1dc = _UNK_0010b35c - sStack_1cc;
  sStack_1da = _UNK_0010b35e - sStack_1ca;
  uVar45 = local_3c8 + *(short *)(param_5 + 0x83d0);
  sVar57 = sStack_3c6 + *(short *)(param_5 + 0x83d2);
  uVar49 = CONCAT22(sVar57,uVar45);
  sVar59 = sStack_3c4 + *(short *)(param_5 + 0x83d4);
  uVar51 = CONCAT26(sStack_3c2 + sVar46,CONCAT24(sVar59,uVar49));
  auVar52._0_10_ = CONCAT28(sStack_3c0 + sStack_3b0,uVar51);
  auVar52._10_2_ = sStack_3be + sStack_3ae;
  auVar52._12_2_ = sStack_3bc + sStack_3ac;
  auVar52._14_2_ = sStack_3ba + sStack_3aa;
  sVar93 = *(short *)(param_5 + 0x83d0) + -1;
  sVar95 = *(short *)(param_5 + 0x83d2) + -1;
  sVar96 = *(short *)(param_5 + 0x83d4) + -1;
  sVar97 = sVar46 + -1;
  sVar98 = sStack_3b0 + -1;
  sVar99 = sStack_3ae + -1;
  sVar100 = sStack_3ac + -1;
  sVar101 = sStack_3aa + -1;
  auVar77._0_4_ = CONCAT22(0,sStack_3c0 + sStack_3b0);
  auVar77._4_2_ = auVar52._10_2_;
  auVar77._6_2_ = 0;
  auVar77._8_2_ = auVar52._12_2_;
  auVar77._10_2_ = 0;
  auVar77._12_2_ = auVar52._14_2_;
  auVar77._14_2_ = 0;
  auVar3._10_2_ = 0;
  auVar3._0_10_ = auVar52._0_10_;
  auVar3._12_2_ = sStack_3c2 + sVar46;
  auVar5._8_2_ = sVar59;
  auVar5._0_8_ = uVar51;
  auVar5._10_4_ = auVar3._10_4_;
  auVar19._6_8_ = 0;
  auVar19._0_6_ = auVar5._8_6_;
  auVar7._4_2_ = sVar57;
  auVar7._0_4_ = uVar49;
  auVar7._6_8_ = SUB148(auVar19 << 0x40,6);
  uVar50 = CONCAT22(0,uVar45);
  auVar53._4_10_ = auVar7._4_10_;
  auVar53._0_4_ = uVar50;
  auVar53._14_2_ = 0;
  auVar75._0_4_ = -(uint)(uVar50 < auVar77._0_4_);
  auVar75._4_4_ = -(uint)(auVar7._4_4_ < (uint)auVar52._10_2_);
  auVar75._8_4_ = -(uint)(auVar5._8_4_ < (int)(uint)auVar52._12_2_);
  auVar75._12_4_ = -(uint)(auVar3._10_4_ >> 0x10 < (uint)auVar52._14_2_);
  auVar75 = ~auVar75 & auVar53 | auVar77 & auVar75;
  auVar76._0_4_ = -(uint)(auVar75._0_4_ < auVar75._8_4_);
  auVar76._4_4_ = -(uint)(auVar75._4_4_ < auVar75._12_4_);
  auVar76._8_4_ = -(uint)(auVar75._8_4_ < 0);
  auVar76._12_4_ = -(uint)(auVar75._12_4_ < 0);
  auVar75 = ~auVar76 & auVar75 | auVar75 >> 0x40 & auVar76;
  uVar50 = auVar75._0_4_;
  uVar73 = auVar75._4_4_;
  uVar72 = -(uint)((int)uVar50 < (int)uVar73);
  uVar50 = ~uVar72 & uVar50 | uVar73 & uVar72;
  auVar75 = (undefined1  [16])0x0;
  uVar73 = 0;
  if (-1 < (int)uVar50) {
    uVar73 = uVar50;
  }
  local_330 = 0;
  do {
    uVar72 = 0;
    local_3b8 = (undefined1  [8])local_108;
    psVar29 = &local_1e8;
    local_390 = param_5 + 0x83c0;
    while( true ) {
      local_368 = (ulong)uVar27;
      lVar35 = 0;
      do {
        uVar45 = psVar29[lVar35];
        iVar40 = 0;
        iVar43 = -(uint)uVar45;
        local_148[0] = (float)(uint)*(ushort *)((long)local_3b8 + lVar35 * 2);
        local_148[1] = (float)(uint)*(ushort *)((long)local_3b8 + 0x10 + lVar35 * 2);
        local_148[2] = (float)(uint)*(ushort *)((long)local_3b8 + 0x20 + lVar35 * 2);
        do {
          lVar37 = 0;
          if (uVar45 == 0) {
            do {
              *(undefined2 *)((long)&local_168 + lVar37 * 2) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 != 3);
          }
          else {
            do {
              *(undefined2 *)((long)&local_168 + lVar37 * 2) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 != 3);
          }
          uVar26 = (short)local_168 << 10 | local_168._2_2_ << 5 | local_164;
          if ((iVar40 == 0) || (*(ushort *)((long)&local_a8 + (long)(iVar40 + -1) * 2) != uVar26)) {
            lVar37 = (long)iVar40;
            iVar40 = iVar40 + 1;
            *(ushort *)((long)&local_a8 + lVar37 * 2) = uVar26;
          }
          iVar43 = iVar43 + 1;
        } while (iVar43 <= (int)(uint)uVar45);
        *(short *)(local_390 + lVar35 * 2) = (short)iVar40;
        uVar28 = uVar72;
        if (uVar72 == 1) {
          uVar28 = (uint)*(ushort *)(param_5 + lVar35 * 2 + 0x83c0);
        }
        if (0 < iVar40) {
          puVar31 = &local_a8;
          pHVar34 = param_5 + (lVar35 + (long)(int)(uVar28 + 0x7fe) * 8) * 2;
          do {
            uVar47 = *(undefined2 *)puVar31;
            puVar31 = (undefined4 *)((long)puVar31 + 2);
            *(undefined2 *)pHVar34 = uVar47;
            pHVar34 = pHVar34 + 0x10;
          } while ((undefined4 *)((long)&local_a8 + (long)iVar40 * 2) != puVar31);
        }
        lVar35 = lVar35 + 1;
      } while (lVar35 != 8);
      local_390 = local_390 + 0x10;
      psVar29 = psVar29 + 8;
      local_3b8 = (undefined1  [8])((long)local_3b8 + 0x30);
      if (uVar72 != 0) break;
      uVar72 = 1;
    }
    lVar35 = 0;
    local_258 = auVar52;
    do {
      uVar47 = *(undefined2 *)(param_5 + lVar35 * 2 + 0x7fe0);
      uVar45 = local_248[lVar35 + -8];
      if ((int)(uint)uVar45 < (int)uVar73) {
        pHVar34 = param_5 + (lVar35 + (ulong)uVar45 * 8) * 2;
        do {
          *(undefined2 *)(pHVar34 + 0x7fe0) = uVar47;
          pHVar34 = pHVar34 + 0x10;
        } while (pHVar34 != param_5 + (lVar35 + ((ulong)uVar45 + (ulong)(uVar73 - uVar45)) * 8) * 2)
        ;
      }
      lVar35 = lVar35 + 1;
    } while (lVar35 != 8);
    if (0 < (int)uVar50) {
      pHVar34 = param_5 + 0x7fe0;
      pHVar32 = param_5;
      do {
        local_368 = local_368 & 0xffffffff;
        uVar45 = *(ushort *)pHVar34;
        uVar26 = *(ushort *)(pHVar34 + 2);
        uVar8 = *(ushort *)(pHVar34 + 4);
        uVar9 = *(ushort *)(pHVar34 + 6);
        uVar10 = *(ushort *)(pHVar34 + 8);
        uVar11 = *(ushort *)(pHVar34 + 10);
        uVar12 = *(ushort *)(pHVar34 + 0xc);
        uVar13 = *(ushort *)(pHVar34 + 0xe);
        pVVar38 = (VInt16 *)&local_a8;
        uVar27 = 10;
        do {
          uVar28 = uVar27 - 5;
          uVar74 = (ulong)uVar27;
          auVar86._0_2_ = uVar45 >> uVar74;
          auVar86._2_2_ = uVar26 >> uVar74;
          auVar86._4_2_ = uVar8 >> uVar74;
          auVar86._6_2_ = uVar9 >> uVar74;
          auVar86._8_2_ = uVar10 >> uVar74;
          auVar86._10_2_ = uVar11 >> uVar74;
          auVar86._12_2_ = uVar12 >> uVar74;
          auVar86._14_2_ = uVar13 >> uVar74;
          auVar76 = psllw(auVar86 & __LC73,4);
          auVar76 = auVar86 & __LC73 | auVar76;
          sVar71 = sVar92 + auVar76._0_2_;
          sVar78 = sVar92 + auVar76._2_2_;
          sVar79 = sVar92 + auVar76._4_2_;
          sVar80 = sVar92 + auVar76._6_2_;
          sVar81 = sVar92 + auVar76._8_2_;
          sVar82 = sVar92 + auVar76._10_2_;
          sVar83 = sVar92 + auVar76._12_2_;
          sVar84 = sVar92 + auVar76._14_2_;
          sVar46 = auVar76._0_2_ - sVar92;
          sVar57 = auVar76._2_2_ - sVar92;
          sVar59 = auVar76._4_2_ - sVar92;
          sVar61 = auVar76._6_2_ - sVar92;
          sVar63 = auVar76._8_2_ - sVar92;
          sVar65 = auVar76._10_2_ - sVar92;
          sVar67 = auVar76._12_2_ - sVar92;
          sVar69 = auVar76._14_2_ - sVar92;
          *(ushort *)(pVVar38 + 0x30) = (ushort)(-1 < sVar46) * sVar46;
          *(ushort *)(pVVar38 + 0x32) = (ushort)(-1 < sVar57) * sVar57;
          *(ushort *)(pVVar38 + 0x34) = (ushort)(-1 < sVar59) * sVar59;
          *(ushort *)(pVVar38 + 0x36) = (ushort)(-1 < sVar61) * sVar61;
          *(ushort *)(pVVar38 + 0x38) = (ushort)(-1 < sVar63) * sVar63;
          *(ushort *)(pVVar38 + 0x3a) = (ushort)(-1 < sVar65) * sVar65;
          *(ushort *)(pVVar38 + 0x3c) = (ushort)(-1 < sVar67) * sVar67;
          *(ushort *)(pVVar38 + 0x3e) = (ushort)(-1 < sVar69) * sVar69;
          *(ushort *)pVVar38 =
               (ushort)(__LC27 < sVar71) * __LC27 | (ushort)(__LC27 >= sVar71) * sVar71;
          *(ushort *)(pVVar38 + 2) =
               (ushort)(_UNK_0010b292 < sVar78) * _UNK_0010b292 |
               (ushort)(_UNK_0010b292 >= sVar78) * sVar78;
          *(ushort *)(pVVar38 + 4) =
               (ushort)(_UNK_0010b294 < sVar79) * _UNK_0010b294 |
               (ushort)(_UNK_0010b294 >= sVar79) * sVar79;
          *(ushort *)(pVVar38 + 6) =
               (ushort)(_UNK_0010b296 < sVar80) * _UNK_0010b296 |
               (ushort)(_UNK_0010b296 >= sVar80) * sVar80;
          *(ushort *)(pVVar38 + 8) =
               (ushort)(_UNK_0010b298 < sVar81) * _UNK_0010b298 |
               (ushort)(_UNK_0010b298 >= sVar81) * sVar81;
          *(ushort *)(pVVar38 + 10) =
               (ushort)(_UNK_0010b29a < sVar82) * _UNK_0010b29a |
               (ushort)(_UNK_0010b29a >= sVar82) * sVar82;
          *(ushort *)(pVVar38 + 0xc) =
               (ushort)(_UNK_0010b29c < sVar83) * _UNK_0010b29c |
               (ushort)(_UNK_0010b29c >= sVar83) * sVar83;
          *(ushort *)(pVVar38 + 0xe) =
               (ushort)(_UNK_0010b29e < sVar84) * _UNK_0010b29e |
               (ushort)(_UNK_0010b29e >= sVar84) * sVar84;
          pVVar38 = pVVar38 + 0x10;
          uVar27 = uVar28;
        } while (uVar28 != 0xfffffffb);
        auVar76 = (undefined1  [16])0x0;
        pFVar36 = param_6;
        pHVar44 = pHVar32;
        pVVar41 = param_4;
        iVar40 = 0;
        do {
          lVar35 = 0;
          iVar43 = 0;
          pVVar38 = (VInt16 *)&local_a8;
          if ((int)local_368 == 0) {
            while ((uVar2 & 0x200) != 0) {
              lVar35 = lVar35 + 1;
              ComputeErrorUniform((ETCComputer *)(local_148 + (long)iVar43 * 8),pVVar38,
                                  (VInt16 *)pVVar41);
              if (lVar35 == 2) goto LAB_001053d4;
              iVar43 = (int)lVar35;
              pVVar38 = (VInt16 *)&local_a8 + lVar35 * 0x30;
            }
            while( true ) {
              lVar35 = lVar35 + 1;
              ComputeErrorWeighted(local_148 + (long)iVar43 * 8,pVVar38,pFVar36);
              if (lVar35 == 2) break;
              iVar43 = (int)lVar35;
              pVVar38 = (VInt16 *)&local_a8 + lVar35 * 0x30;
            }
          }
          else {
            bVar20 = false;
            uVar27 = 0;
            while (ComputeErrorFakeBT709
                             ((ETCComputer *)(local_148 + (long)(int)uVar27 * 8),pVVar38,pFVar36),
                  !bVar20) {
              pVVar38 = local_78;
              uVar27 = uVar72;
              bVar20 = true;
            }
            local_368 = local_368 & 0xffffffff;
            _local_3b8 = auVar76;
          }
LAB_001053d4:
          iVar43 = iVar40 + 1;
          pFVar36 = pFVar36 + 0x60;
          pVVar41 = (VInt16<2> *)((VInt16 *)pVVar41 + 0x30);
          auVar109._4_4_ = -(uint)(fStack_124 < local_148[1]);
          auVar109._0_4_ = -(uint)(local_128 < local_148[0]);
          auVar109._8_4_ = -(uint)(fStack_120 < local_148[2]);
          auVar109._12_4_ = -(uint)(fStack_11c < local_148[3]);
          auVar85._4_4_ = -(uint)(fStack_114 < local_148[5]);
          auVar85._0_4_ = -(uint)(local_118 < local_148[4]);
          auVar85._8_4_ = -(uint)(fStack_110 < local_148[6]);
          auVar85._12_4_ = -(uint)(fStack_10c < local_148[7]);
          auVar94._4_4_ = local_148[5];
          auVar94._0_4_ = local_148[4];
          auVar94._8_4_ = local_148[6];
          auVar94._12_4_ = local_148[7];
          auVar105._4_4_ = fStack_114;
          auVar105._0_4_ = local_118;
          auVar105._8_4_ = fStack_110;
          auVar105._12_4_ = fStack_10c;
          auVar53 = minps(auVar94,auVar105);
          auVar77 = packssdw(auVar109,auVar85);
          auVar107._4_4_ = local_148[1];
          auVar107._0_4_ = local_148[0];
          auVar107._8_4_ = local_148[2];
          auVar107._12_4_ = local_148[3];
          auVar104._4_4_ = fStack_124;
          auVar104._0_4_ = local_128;
          auVar104._8_4_ = fStack_120;
          auVar104._12_4_ = fStack_11c;
          auVar86 = minps(auVar107,auVar104);
          *(undefined1 (*) [16])(pHVar44 + 0x10) = auVar53;
          uVar47 = (undefined2)(1 << ((byte)iVar40 & 0x1f));
          auVar91._0_4_ = CONCAT22(uVar47,uVar47);
          *(undefined1 (*) [16])pHVar44 = auVar86;
          auVar91._4_4_ = auVar91._0_4_;
          auVar91._8_4_ = auVar91._0_4_;
          auVar91._12_4_ = auVar91._0_4_;
          auVar76 = auVar76 | auVar91 & auVar77;
          pHVar44 = pHVar44 + 0x20;
          iVar40 = iVar43;
        } while (iVar43 != 0x10);
        pHVar32 = pHVar32 + 0x200;
        *(undefined1 (*) [16])(pHVar34 + -0x3e0) = auVar76;
        pHVar34 = pHVar34 + 0x10;
      } while (pHVar32 != param_5 + (long)(int)uVar73 * 0x200);
      uVar27 = (uint)local_368;
      local_328._0_16_ = auVar75;
    }
    uVar13 = _UNK_0010b27e;
    uVar12 = _UNK_0010b27c;
    uVar11 = _UNK_0010b27a;
    uVar10 = _UNK_0010b278;
    uVar9 = _UNK_0010b276;
    uVar8 = _UNK_0010b274;
    uVar26 = _UNK_0010b272;
    uVar45 = __LC30;
    auVar76 = *(undefined1 (*) [16])(param_5 + 0x83c0);
    sVar92 = *(short *)(param_5 + 0x83d6) * auVar76._6_2_;
    auVar53 = pmulhuw(*(undefined1 (*) [16])(param_5 + 0x83d0),auVar76);
    iVar43 = CONCAT22(auVar53._8_2_,*(short *)(param_5 + 0x83d8) * auVar76._8_2_);
    auVar102._0_8_ =
         CONCAT26(auVar53._10_2_,CONCAT24(*(short *)(param_5 + 0x83da) * auVar76._10_2_,iVar43));
    auVar102._8_2_ = *(short *)(param_5 + 0x83dc) * auVar76._12_2_;
    auVar102._10_2_ = auVar53._12_2_;
    auVar103._12_2_ = *(short *)(param_5 + 0x83de) * auVar76._14_2_;
    auVar103._0_12_ = auVar102;
    auVar103._14_2_ = auVar53._14_2_;
    iVar40 = CONCAT22(auVar53._6_2_,sVar92);
    Var25 = CONCAT64(CONCAT42(iVar40,auVar53._4_2_),
                     CONCAT22(*(short *)(param_5 + 0x83d4) * auVar76._4_2_,sVar92));
    auVar21._4_8_ = (long)((unkuint10)Var25 >> 0x10);
    auVar21._2_2_ = auVar53._2_2_;
    auVar21._0_2_ = *(short *)(param_5 + 0x83d2) * auVar76._2_2_;
    auVar88._0_4_ = CONCAT22(auVar53._0_2_,*(short *)(param_5 + 0x83d0) * auVar76._0_2_);
    auVar88._4_12_ = auVar21;
    auVar54._0_4_ = -(uint)(auVar88._0_4_ < iVar43);
    auVar54._4_4_ = -(uint)(auVar21._0_4_ < (int)((ulong)auVar102._0_8_ >> 0x20));
    auVar54._8_4_ = -(uint)((int)((unkuint10)Var25 >> 0x10) < auVar102._8_4_);
    auVar54._12_4_ = -(uint)(iVar40 < auVar103._12_4_);
    auVar53 = ~auVar54 & auVar88 | auVar103 & auVar54;
    auVar55._0_4_ = -(uint)(auVar53._0_4_ < auVar53._8_4_);
    auVar55._4_4_ = -(uint)(auVar53._4_4_ < auVar53._12_4_);
    auVar55._8_4_ = -(uint)(auVar53._8_4_ < 0);
    auVar55._12_4_ = -(uint)(auVar53._12_4_ < 0);
    auVar53 = ~auVar55 & auVar53 | auVar53 >> 0x40 & auVar55;
    uVar72 = auVar53._0_4_;
    uVar87 = auVar53._4_4_;
    uVar28 = -(uint)((int)uVar72 < (int)uVar87);
    uVar28 = ~uVar28 & uVar72 | uVar87 & uVar28;
    auVar4._10_2_ = 0;
    auVar4._0_10_ = auVar76._0_10_;
    auVar4._12_2_ = auVar76._6_2_;
    auVar6._8_2_ = auVar76._4_2_;
    auVar6._0_8_ = auVar76._0_8_;
    auVar6._10_4_ = auVar4._10_4_;
    auVar22._6_8_ = 0;
    auVar22._0_6_ = auVar6._8_6_;
    local_1a8._6_8_ = SUB148(auVar22 << 0x40,6);
    local_1a8._4_2_ = auVar76._2_2_;
    local_1a8._2_2_ = 0;
    local_1a8._0_2_ = auVar76._0_2_;
    local_1a8._14_2_ = 0;
    local_198._2_2_ = 0;
    local_198._0_2_ = auVar76._8_2_;
    local_198._4_2_ = auVar76._10_2_;
    local_198._6_2_ = 0;
    local_198._8_2_ = auVar76._12_2_;
    local_198._10_2_ = 0;
    local_198._12_2_ = auVar76._14_2_;
    local_198._14_2_ = 0;
    uVar72 = 0;
    if (-1 < (int)uVar28) {
      uVar72 = uVar28;
    }
    if (0 < (int)uVar28) {
      auVar23[0xf] = 0;
      auVar23._0_15_ = local_328._1_15_;
      local_328._0_16_ = auVar23 << 8;
      local_308._4_4_ = CONCAT22((short)local_330,(short)local_330);
      local_378 = local_288;
      local_248[0] = 0;
      local_248[1] = 0;
      local_248[2] = 0;
      local_248[3] = 0;
      local_248[4] = 0;
      local_248[5] = 0;
      local_248[6] = 0;
      local_248[7] = 0;
      local_388 = local_278;
      auVar24._12_4_ = 0;
      auVar24._0_12_ = stack0xfffffffffffffc4c;
      _local_3b8 = auVar24 << 0x20;
      local_238[0] = 0;
      local_238[1] = 0;
      local_238[2] = 0;
      local_238[3] = 0;
      local_238[4] = 0;
      local_238[5] = 0;
      local_238[6] = 0;
      local_238[7] = 0;
      local_308._0_4_ = local_308._4_4_;
      local_308._8_4_ = local_308._4_4_;
      local_308._12_4_ = local_308._4_4_;
      auVar76 = local_1c8;
      auVar53 = local_268;
      auVar77 = auVar75;
      auVar86 = local_1b8;
      do {
        lVar35 = 0;
        uVar48 = -(ushort)((short)(local_3c8 + -1) < (short)(local_248[0] + uVar45));
        uVar58 = -(ushort)((short)(sStack_3c6 + -1) < (short)(local_248[1] + uVar26));
        uVar60 = -(ushort)((short)(sStack_3c4 + -1) < (short)(local_248[2] + uVar8));
        uVar62 = -(ushort)((short)(sStack_3c2 + -1) < (short)(local_248[3] + uVar9));
        uVar64 = -(ushort)((short)(sStack_3c0 + -1) < (short)(local_248[4] + uVar10));
        uVar66 = -(ushort)((short)(sStack_3be + -1) < (short)(local_248[5] + uVar11));
        uVar68 = -(ushort)((short)(sStack_3bc + -1) < (short)(local_248[6] + uVar12));
        uVar70 = -(ushort)((short)(sStack_3ba + -1) < (short)(local_248[7] + uVar13));
        local_248[0] = ~uVar48 & local_248[0] + uVar45;
        local_248[1] = ~uVar58 & local_248[1] + uVar26;
        local_248[2] = ~uVar60 & local_248[2] + uVar8;
        local_248[3] = ~uVar62 & local_248[3] + uVar9;
        local_248[4] = ~uVar64 & local_248[4] + uVar10;
        local_248[5] = ~uVar66 & local_248[5] + uVar11;
        local_248[6] = ~uVar68 & local_248[6] + uVar12;
        local_248[7] = ~uVar70 & local_248[7] + uVar13;
        sVar92 = (uVar48 & __LC30) + local_238[0];
        sVar46 = (uVar58 & _UNK_0010b272) + local_238[1];
        sVar57 = (uVar60 & _UNK_0010b274) + local_238[2];
        sVar59 = (uVar62 & _UNK_0010b276) + local_238[3];
        sVar61 = (uVar64 & _UNK_0010b278) + local_238[4];
        sVar63 = (uVar66 & _UNK_0010b27a) + local_238[5];
        sVar65 = (uVar68 & _UNK_0010b27c) + local_238[6];
        sVar67 = (uVar70 & _UNK_0010b27e) + local_238[7];
        local_238[0] = (ushort)(sVar93 < sVar92) * sVar93 | (ushort)(sVar93 >= sVar92) * sVar92;
        local_238[1] = (ushort)(sVar95 < sVar46) * sVar95 | (ushort)(sVar95 >= sVar46) * sVar46;
        local_238[2] = (ushort)(sVar96 < sVar57) * sVar96 | (ushort)(sVar96 >= sVar57) * sVar57;
        local_238[3] = (ushort)(sVar97 < sVar59) * sVar97 | (ushort)(sVar97 >= sVar59) * sVar59;
        local_238[4] = (ushort)(sVar98 < sVar61) * sVar98 | (ushort)(sVar98 >= sVar61) * sVar61;
        local_238[5] = (ushort)(sVar99 < sVar63) * sVar99 | (ushort)(sVar99 >= sVar63) * sVar63;
        local_238[6] = (ushort)(sVar100 < sVar65) * sVar100 | (ushort)(sVar100 >= sVar65) * sVar65;
        local_238[7] = (ushort)(sVar101 < sVar67) * sVar101 | (ushort)(sVar101 >= sVar67) * sVar67;
        do {
          uVar48 = *(ushort *)((long)local_248 + lVar35);
          iVar40 = (uint)*(ushort *)((long)local_238 + lVar35) + *(int *)(local_1a8 + lVar35 * 2);
          *(uint *)((long)local_188 + lVar35 * 2) = (uint)uVar48;
          *(int *)((long)&local_168 + lVar35 * 2) = iVar40;
          uVar47 = *(undefined2 *)(param_5 + lVar35 + ((long)iVar40 + 0x7fe) * 0x10);
          *(undefined2 *)(local_228 + lVar35) =
               *(undefined2 *)(param_5 + lVar35 + (long)(int)(uVar48 + 0x7fe) * 0x10);
          *(undefined2 *)(local_218 + lVar35) = uVar47;
          lVar35 = lVar35 + 2;
        } while (lVar35 != 0x10);
        auVar94 = (undefined1  [16])0x0;
        auVar89._0_12_ = ZEXT812(0);
        auVar89._12_4_ = 0;
        auVar104 = (undefined1  [16])0x0;
        lVar35 = 0;
        auVar107 = (undefined1  [16])0x0;
        do {
          lVar37 = 0;
          do {
            lVar42 = (long)((int)(uint)lVar37 >> 2);
            lVar39 = (ulong)((uint)lVar37 & 3) * 4;
            local_148[lVar37] =
                 *(float *)(param_5 +
                           lVar39 + (lVar42 + ((long)(int)local_188[lVar37] * 0x10 + lVar35) * 2) *
                                    0x10);
            uVar47 = *(undefined2 *)
                      (param_5 + lVar37 * 2 + 0x7c00 + (long)(int)local_188[lVar37] * 0x10);
            uVar1 = *(undefined2 *)
                     (param_5 + lVar37 * 2 + 0x7c00 + (long)(int)(&local_168)[lVar37] * 0x10);
            (&local_a8)[lVar37] =
                 *(undefined4 *)
                  (param_5 +
                  lVar39 + (lVar42 + ((long)(int)(&local_168)[lVar37] * 0x10 + lVar35) * 2) * 0x10);
            *(undefined2 *)(local_208 + lVar37 * 2) = uVar47;
            *(undefined2 *)(local_1f8 + lVar37 * 2) = uVar1;
            lVar37 = lVar37 + 1;
          } while (lVar37 != 8);
          auVar15._4_4_ = local_148[1];
          auVar15._0_4_ = local_148[0];
          auVar15._8_4_ = local_148[2];
          auVar15._12_4_ = local_148[3];
          lVar37 = lVar35 + 1;
          auVar17._4_4_ = uStack_a4;
          auVar17._0_4_ = local_a8;
          auVar17._8_4_ = uStack_a0;
          auVar17._12_4_ = uStack_9c;
          auVar109 = minps(auVar15,auVar17);
          auVar16._4_4_ = local_148[5];
          auVar16._0_4_ = local_148[4];
          auVar16._8_4_ = local_148[6];
          auVar16._12_4_ = local_148[7];
          auVar18._4_4_ = fStack_94;
          auVar18._0_4_ = local_98;
          auVar18._8_4_ = fStack_90;
          auVar18._12_4_ = fStack_8c;
          auVar105 = minps(auVar16,auVar18);
          auVar90._0_4_ = auVar89._0_4_ + auVar109._0_4_;
          auVar90._4_4_ = auVar89._4_4_ + auVar109._4_4_;
          auVar90._8_4_ = auVar89._8_4_ + auVar109._8_4_;
          auVar90._12_4_ = auVar89._12_4_ + auVar109._12_4_;
          auVar56._0_4_ = auVar107._0_4_ + auVar105._0_4_;
          auVar56._4_4_ = auVar107._4_4_ + auVar105._4_4_;
          auVar56._8_4_ = auVar107._8_4_ + auVar105._8_4_;
          auVar56._12_4_ = auVar107._12_4_ + auVar105._12_4_;
          auVar110._4_4_ = -(uint)(fStack_94 < local_148[5]);
          auVar110._0_4_ = -(uint)(local_98 < local_148[4]);
          auVar110._8_4_ = -(uint)(fStack_90 < local_148[6]);
          auVar110._12_4_ = -(uint)(fStack_8c < local_148[7]);
          auVar106._4_4_ = -(uint)(uStack_a4 < local_148[1]);
          auVar106._0_4_ = -(uint)(local_a8 < local_148[0]);
          auVar106._8_4_ = -(uint)(uStack_a0 < local_148[2]);
          auVar106._12_4_ = -(uint)(uStack_9c < local_148[3]);
          auVar107 = packssdw(auVar106,auVar110);
          uVar47 = (undefined2)(1 << ((byte)lVar35 & 0x1f));
          auVar111._0_4_ = CONCAT22(uVar47,uVar47);
          auVar111._4_4_ = auVar111._0_4_;
          auVar111._8_4_ = auVar111._0_4_;
          auVar111._12_4_ = auVar111._0_4_;
          auVar104 = auVar104 | auVar111 & auVar107;
          auVar94 = auVar94 | (auVar107 & local_1f8 | ~auVar107 & local_208) & auVar111;
          lVar35 = lVar37;
          auVar107 = auVar56;
          auVar89 = auVar90;
        } while (lVar37 != 0x10);
        auVar107 = *(undefined1 (*) [16])param_2;
        auVar105 = *(undefined1 (*) [16])(param_2 + 0x10);
        auVar108._4_4_ = -(uint)(auVar90._4_4_ < auVar107._4_4_);
        auVar108._0_4_ = -(uint)(auVar90._0_4_ < auVar107._0_4_);
        auVar108._8_4_ = -(uint)(auVar90._8_4_ < auVar107._8_4_);
        auVar108._12_4_ = -(uint)(auVar90._12_4_ < auVar107._12_4_);
        auVar112._4_4_ = -(uint)(auVar56._4_4_ < auVar105._4_4_);
        auVar112._0_4_ = -(uint)(auVar56._0_4_ < auVar105._0_4_);
        auVar112._8_4_ = -(uint)(auVar56._8_4_ < auVar105._8_4_);
        auVar112._12_4_ = -(uint)(auVar56._12_4_ < auVar105._12_4_);
        auVar109 = packssdw(auVar108,auVar112);
        if ((((((((((((((((auVar109 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar109 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar109 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar109 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar109 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar109 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar109 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar109 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar109 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar109 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar109 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar109 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar109 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar109 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar109 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            auVar109[0xf] < '\0') {
          auVar91 = minps(auVar90,auVar107);
          auVar107 = minps(auVar56,auVar105);
          local_328[0] = 1;
          auVar77 = auVar77 | auVar109;
          *(undefined1 (*) [16])param_2 = auVar91;
          auVar53 = local_308 & auVar109 | ~auVar109 & auVar53;
          *(undefined1 (*) [16])(param_2 + 0x10) = auVar107;
          auVar76 = local_228 & auVar109 | ~auVar109 & auVar76;
          auVar86 = local_218 & auVar109 | ~auVar109 & auVar86;
          local_378 = auVar104 & auVar109 | ~auVar109 & local_378;
          local_388 = auVar94 & auVar109 | ~auVar109 & local_388;
        }
        uVar28 = local_3b8._0_4_ + 1;
        local_3b8._0_4_ = uVar28;
      } while (uVar28 != uVar72);
      if (local_328[0] != '\0') {
        local_1c8 = auVar76;
        local_1b8 = auVar86;
        local_278 = local_388;
        local_268 = auVar53;
        local_288 = local_378;
        local_298 = auVar77;
        auVar75 = auVar77;
      }
    }
    local_330 = local_330 + 1;
    if (local_330 == 8) {
      if ((((((((((((((((auVar75 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar75 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar75 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar75 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar75 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar75 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar75 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar75 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar75 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar75 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar75 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar75 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar75 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar75 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar75 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || auVar75[0xf] < '\0'
         ) {
        lVar35 = 0;
        do {
          if (*(short *)(local_298 + lVar35) != 0) {
            local_a8 = (float)CONCAT22(*(undefined2 *)(local_1b8 + lVar35),
                                       *(undefined2 *)(local_1c8 + lVar35));
            EmitHModeBlock(param_1,(ushort *)&local_a8,*(ushort *)(local_288 + lVar35),
                           *(ushort *)(local_278 + lVar35),*(ushort *)(local_268 + lVar35),true);
          }
          lVar35 = lVar35 + 2;
          param_1 = param_1 + 8;
        } while (lVar35 != 0x10);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    sVar92 = (&Tables::ETC1::g_thModifierTable)[local_330];
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
  short sVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  byte bVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
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
  ulong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  int iVar46;
  long lVar47;
  undefined1 (*pauVar48) [16];
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  ushort *puVar51;
  Int16CompFlag *pIVar52;
  VInt16<2> *pVVar53;
  VInt16 *pVVar54;
  uint uVar55;
  ETCComputer *pEVar56;
  ETCComputer *pEVar57;
  long lVar58;
  VInt16 *pVVar59;
  ulong uVar60;
  short *psVar61;
  undefined1 (*pauVar62) [16];
  undefined8 *puVar63;
  VInt16 *this;
  VInt16 *pVVar64;
  uint uVar65;
  long lVar66;
  VInt16 *pVVar67;
  long in_FS_OFFSET;
  ushort uVar68;
  ushort uVar86;
  short sVar87;
  uint uVar72;
  ushort uVar89;
  ushort uVar94;
  short sVar95;
  uint uVar92;
  short sVar97;
  float fVar99;
  short sVar102;
  undefined1 auVar75 [16];
  short sVar69;
  short sVar70;
  short sVar71;
  undefined4 uVar73;
  short sVar88;
  short sVar90;
  short sVar91;
  short sVar96;
  short sVar98;
  short sVar100;
  short sVar101;
  short sVar103;
  short sVar105;
  short sVar106;
  undefined1 auVar76 [16];
  float fVar74;
  float fVar93;
  float fVar104;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  short sVar107;
  uint uVar108;
  short sVar121;
  float fVar122;
  ushort uVar125;
  float fVar127;
  ushort uVar130;
  undefined1 auVar110 [16];
  ushort uVar123;
  ushort uVar128;
  ushort uVar133;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  short sVar120;
  short sVar124;
  short sVar126;
  short sVar129;
  short sVar131;
  short sVar134;
  undefined1 auVar113 [16];
  float fVar109;
  float fVar132;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar135;
  float fVar138;
  float fVar139;
  undefined1 auVar136 [16];
  float fVar140;
  undefined1 auVar137 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  short sVar146;
  short sVar148;
  short sVar149;
  short sVar150;
  short sVar151;
  short sVar152;
  short sVar153;
  short sVar154;
  undefined1 auVar147 [16];
  short sVar155;
  short sVar156;
  short sVar157;
  short sVar158;
  short sVar159;
  short sVar160;
  undefined1 auVar161 [12];
  uint uVar164;
  uint uVar165;
  undefined1 auVar163 [16];
  uint uVar166;
  uint uVar171;
  uint uVar172;
  undefined1 auVar170 [16];
  undefined1 auVar173 [16];
  short sVar174;
  int iVar175;
  undefined1 auVar178 [16];
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
  ushort local_a38 [16];
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
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar162 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar176 [12];
  undefined1 auVar177 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)param_9 & 0x400;
  uVar65 = *(uint *)param_9 & 0x200;
  pIVar52 = param_6;
  pEVar56 = local_848;
  do {
    uVar20 = *(undefined2 *)pIVar52;
    uVar21 = *(undefined2 *)(pIVar52 + 2);
    uVar22 = *(undefined2 *)(pIVar52 + 4);
    uVar23 = *(undefined2 *)(pIVar52 + 6);
    uVar24 = *(undefined2 *)(pIVar52 + 8);
    uVar25 = *(undefined2 *)(pIVar52 + 10);
    uVar26 = *(undefined2 *)(pIVar52 + 0xc);
    uVar27 = *(undefined2 *)(pIVar52 + 0xe);
    pEVar57 = pEVar56 + 0x20;
    pIVar52 = pIVar52 + 0x10;
    *(undefined2 *)pEVar56 = uVar20;
    *(undefined2 *)(pEVar56 + 2) = uVar20;
    *(undefined2 *)(pEVar56 + 4) = uVar21;
    *(undefined2 *)(pEVar56 + 6) = uVar21;
    *(undefined2 *)(pEVar56 + 8) = uVar22;
    *(undefined2 *)(pEVar56 + 10) = uVar22;
    *(undefined2 *)(pEVar56 + 0xc) = uVar23;
    *(undefined2 *)(pEVar56 + 0xe) = uVar23;
    *(undefined2 *)(pEVar56 + 0x10) = uVar24;
    *(undefined2 *)(pEVar56 + 0x12) = uVar24;
    *(undefined2 *)(pEVar56 + 0x14) = uVar25;
    *(undefined2 *)(pEVar56 + 0x16) = uVar25;
    *(undefined2 *)(pEVar56 + 0x18) = uVar26;
    *(undefined2 *)(pEVar56 + 0x1a) = uVar26;
    *(undefined2 *)(pEVar56 + 0x1c) = uVar27;
    *(undefined2 *)(pEVar56 + 0x1e) = uVar27;
    pEVar56 = pEVar57;
  } while (local_648 != pEVar57);
  lVar58 = 0;
  local_1158 = (undefined1  [16])0x0;
  local_1148 = (undefined1  [16])0x0;
  local_1078 = (undefined1  [16])0x0;
  local_1068 = (undefined1  [16])0x0;
  local_1058 = (undefined1  [16])0x0;
  local_1048 = (undefined1  [16])0x0;
  local_1038 = (undefined1  [16])0x0;
  local_1028 = (undefined1  [16])0x0;
  do {
    uVar60 = *(ulong *)(param_6 + lVar58 + 8);
    uVar42 = *(ulong *)(param_3 + lVar58 + 8);
    *(ulong *)(local_eb8 + lVar58) = ~*(ulong *)(param_6 + lVar58) & *(ulong *)(param_3 + lVar58);
    *(ulong *)((long)&uStack_eb0 + lVar58) = ~uVar60 & uVar42;
    pIVar52 = param_3 + lVar58;
    uVar164 = *(uint *)(pIVar52 + 4);
    uVar165 = *(uint *)(pIVar52 + 8);
    uVar166 = *(uint *)(pIVar52 + 0xc);
    pIVar1 = param_6 + lVar58;
    uVar72 = *(uint *)(pIVar1 + 4);
    uVar92 = *(uint *)(pIVar1 + 8);
    uVar108 = *(uint *)(pIVar1 + 0xc);
    *(uint *)((long)&local_db8 + lVar58) = (*(uint *)pIVar52 | *(uint *)pIVar1) ^ 0xffffffff;
    *(uint *)((long)&uStack_db4 + lVar58) = (uVar164 | uVar72) ^ 0xffffffff;
    *(uint *)((long)&uStack_db0 + lVar58) = (uVar165 | uVar92) ^ 0xffffffff;
    *(uint *)((long)&uStack_dac + lVar58) = (uVar166 | uVar108) ^ 0xffffffff;
    lVar58 = lVar58 + 0x10;
  } while (lVar58 != 0x100);
  sVar146 = 0;
  sVar148 = 0;
  sVar149 = 0;
  sVar150 = 0;
  sVar151 = 0;
  sVar152 = 0;
  sVar153 = 0;
  sVar154 = 0;
  lVar58 = 0;
  pVVar53 = param_4;
  auVar75 = (undefined1  [16])0x0;
  do {
    uVar68 = *(ushort *)(local_eb8 + lVar58);
    uVar86 = *(ushort *)(local_eb8 + lVar58 + 2);
    uVar89 = *(ushort *)(local_eb8 + lVar58 + 4);
    uVar94 = *(ushort *)(local_eb8 + lVar58 + 6);
    uVar123 = *(ushort *)((long)&uStack_eb0 + lVar58);
    uVar125 = *(ushort *)((long)&uStack_eb0 + lVar58 + 2);
    uVar128 = *(ushort *)((long)&uStack_eb0 + lVar58 + 4);
    uVar130 = *(ushort *)((long)&uStack_eb0 + lVar58 + 6);
    uVar133 = *(ushort *)((long)&local_db8 + lVar58);
    uVar35 = *(ushort *)((long)&local_db8 + lVar58 + 2);
    uVar36 = *(ushort *)((long)&uStack_db4 + lVar58);
    uVar37 = *(ushort *)((long)&uStack_db4 + lVar58 + 2);
    uVar38 = *(ushort *)((long)&uStack_db0 + lVar58);
    uVar39 = *(ushort *)((long)&uStack_db0 + lVar58 + 2);
    uVar40 = *(ushort *)((long)&uStack_dac + lVar58);
    uVar41 = *(ushort *)((long)&uStack_dac + lVar58 + 2);
    lVar47 = 0;
    do {
      pVVar2 = pVVar53 + lVar47;
      uVar28 = *(ushort *)(pVVar2 + 2);
      uVar29 = *(ushort *)(pVVar2 + 4);
      uVar30 = *(ushort *)(pVVar2 + 6);
      uVar31 = *(ushort *)(pVVar2 + 8);
      uVar32 = *(ushort *)(pVVar2 + 10);
      uVar33 = *(ushort *)(pVVar2 + 0xc);
      uVar34 = *(ushort *)(pVVar2 + 0xe);
      *(ushort *)(local_1078 + lVar47) =
           (*(ushort *)pVVar2 & uVar68) + *(short *)(local_1078 + lVar47);
      *(ushort *)(local_1078 + lVar47 + 2) = (uVar28 & uVar86) + *(short *)(local_1078 + lVar47 + 2)
      ;
      *(ushort *)(local_1078 + lVar47 + 4) = (uVar29 & uVar89) + *(short *)(local_1078 + lVar47 + 4)
      ;
      *(ushort *)(local_1078 + lVar47 + 6) = (uVar30 & uVar94) + *(short *)(local_1078 + lVar47 + 6)
      ;
      *(ushort *)(local_1078 + lVar47 + 8) =
           (uVar31 & uVar123) + *(short *)(local_1078 + lVar47 + 8);
      *(ushort *)(local_1078 + lVar47 + 10) =
           (uVar32 & uVar125) + *(short *)(local_1078 + lVar47 + 10);
      *(ushort *)(local_1078 + lVar47 + 0xc) =
           (uVar33 & uVar128) + *(short *)(local_1078 + lVar47 + 0xc);
      *(ushort *)(local_1078 + lVar47 + 0xe) =
           (uVar34 & uVar130) + *(short *)(local_1078 + lVar47 + 0xe);
      pVVar2 = pVVar53 + lVar47;
      uVar28 = *(ushort *)(pVVar2 + 2);
      uVar29 = *(ushort *)(pVVar2 + 4);
      uVar30 = *(ushort *)(pVVar2 + 6);
      uVar31 = *(ushort *)(pVVar2 + 8);
      uVar32 = *(ushort *)(pVVar2 + 10);
      uVar33 = *(ushort *)(pVVar2 + 0xc);
      uVar34 = *(ushort *)(pVVar2 + 0xe);
      *(ushort *)(local_1048 + lVar47) =
           (*(ushort *)pVVar2 & uVar133) + *(short *)(local_1048 + lVar47);
      *(ushort *)(local_1048 + lVar47 + 2) = (uVar28 & uVar35) + *(short *)(local_1048 + lVar47 + 2)
      ;
      *(ushort *)(local_1048 + lVar47 + 4) = (uVar29 & uVar36) + *(short *)(local_1048 + lVar47 + 4)
      ;
      *(ushort *)(local_1048 + lVar47 + 6) = (uVar30 & uVar37) + *(short *)(local_1048 + lVar47 + 6)
      ;
      *(ushort *)(local_1048 + lVar47 + 8) = (uVar31 & uVar38) + *(short *)(local_1048 + lVar47 + 8)
      ;
      *(ushort *)(local_1048 + lVar47 + 10) =
           (uVar32 & uVar39) + *(short *)(local_1048 + lVar47 + 10);
      *(ushort *)(local_1048 + lVar47 + 0xc) =
           (uVar33 & uVar40) + *(short *)(local_1048 + lVar47 + 0xc);
      *(ushort *)(local_1048 + lVar47 + 0xe) =
           (uVar34 & uVar41) + *(short *)(local_1048 + lVar47 + 0xe);
      lVar47 = lVar47 + 0x10;
    } while (lVar47 != 0x30);
    lVar58 = lVar58 + 0x10;
    pVVar53 = pVVar53 + 0x30;
    auVar111._0_2_ = (uVar68 & __LC30) + auVar75._0_2_;
    auVar111._2_2_ = (uVar86 & _UNK_0010b272) + auVar75._2_2_;
    auVar111._4_2_ = (uVar89 & _UNK_0010b274) + auVar75._4_2_;
    auVar111._6_2_ = (uVar94 & _UNK_0010b276) + auVar75._6_2_;
    auVar111._8_2_ = (uVar123 & _UNK_0010b278) + auVar75._8_2_;
    auVar111._10_2_ = (uVar125 & _UNK_0010b27a) + auVar75._10_2_;
    auVar111._12_2_ = (uVar128 & _UNK_0010b27c) + auVar75._12_2_;
    auVar111._14_2_ = (uVar130 & _UNK_0010b27e) + auVar75._14_2_;
    sVar146 = (uVar133 & __LC30) + sVar146;
    sVar148 = (uVar35 & _UNK_0010b272) + sVar148;
    sVar149 = (uVar36 & _UNK_0010b274) + sVar149;
    sVar150 = (uVar37 & _UNK_0010b276) + sVar150;
    sVar151 = (uVar38 & _UNK_0010b278) + sVar151;
    sVar152 = (uVar39 & _UNK_0010b27a) + sVar152;
    sVar153 = (uVar40 & _UNK_0010b27c) + sVar153;
    sVar154 = (uVar41 & _UNK_0010b27e) + sVar154;
    auVar75 = auVar111;
  } while (lVar58 != 0x100);
  lVar58 = 0;
  lVar47 = 0;
  auVar75 = pmulhuw(__LC71,auVar111);
  this = (VInt16 *)&local_248;
  local_1138[0] = (VInt16)auVar111[0];
  local_1138[1] = (VInt16)auVar111[1];
  local_1138[2] = (VInt16)auVar111[2];
  local_1138[3] = (VInt16)auVar111[3];
  local_1138[4] = (VInt16)auVar111[4];
  local_1138[5] = (VInt16)auVar111[5];
  local_1138[6] = (VInt16)auVar111[6];
  local_1138[7] = (VInt16)auVar111[7];
  local_1138[8] = (VInt16)auVar111[8];
  local_1138[9] = (VInt16)auVar111[9];
  local_1138[10] = (VInt16)auVar111[10];
  local_1138[0xb] = (VInt16)auVar111[0xb];
  local_1138[0xc] = (VInt16)auVar111[0xc];
  local_1138[0xd] = (VInt16)auVar111[0xd];
  local_1138[0xe] = (VInt16)auVar111[0xe];
  local_1138[0xf] = (VInt16)auVar111[0xf];
  local_438._0_2_ = auVar111._8_2_ * SUB162(__LC71,8);
  local_438._2_2_ = auVar75._8_2_;
  asStack_434[0] = auVar111._10_2_ * SUB162(__LC71,10);
  asStack_434[1] = auVar75._10_2_;
  asStack_430[0] = auVar111._12_2_ * SUB162(__LC71,0xc);
  asStack_430[1] = auVar75._12_2_;
  asStack_42c[0] = auVar111._14_2_ * SUB162(__LC71,0xe);
  asStack_42c[1] = auVar75._14_2_;
  auVar110 = psllw(auVar111,4);
  local_1128 = sVar146;
  sStack_1126 = sVar148;
  sStack_1124 = sVar149;
  sStack_1122 = sVar150;
  sStack_1120 = sVar151;
  sStack_111e = sVar152;
  sStack_111c = sVar153;
  sStack_111a = sVar154;
  local_448 = auVar111._0_2_ * SUB162(__LC71,0);
  uStack_446 = auVar75._0_2_;
  sStack_444 = auVar111._2_2_ * SUB162(__LC71,2);
  uStack_442 = auVar75._2_2_;
  sStack_440 = auVar111._4_2_ * SUB162(__LC71,4);
  uStack_43e = auVar75._4_2_;
  sStack_43c = auVar111._6_2_ * SUB162(__LC71,6);
  uStack_43a = auVar75._6_2_;
  auVar110 = auVar110 | auVar111;
  pauVar50 = (undefined1 (*) [16])local_a38;
  pVVar67 = local_1018;
  do {
    auVar75 = *(undefined1 (*) [16])(local_1078 + lVar58 * 2);
    sVar3 = auVar75._0_2_ * 2;
    sVar12 = auVar75._2_2_ * 2;
    sVar13 = auVar75._4_2_ * 2;
    sVar14 = auVar75._6_2_ * 2;
    sVar15 = auVar75._8_2_ * 2;
    sVar16 = auVar75._10_2_ * 2;
    sVar17 = auVar75._12_2_ * 2;
    sVar18 = auVar75._14_2_ * 2;
    local_10e8._0_2_ = sVar3 + auVar110._0_2_;
    local_10e8._2_2_ = sVar12 + auVar110._2_2_;
    local_10e8._4_2_ = sVar13 + auVar110._4_2_;
    local_10e8._6_2_ = sVar14 + auVar110._6_2_;
    local_10e8._8_2_ = sVar15 + auVar110._8_2_;
    local_10e8._10_2_ = sVar16 + auVar110._10_2_;
    local_10e8._12_2_ = sVar17 + auVar110._12_2_;
    local_10e8._14_2_ = sVar18 + auVar110._14_2_;
    if (uVar55 != 0) {
      local_10e8._0_2_ = sVar3;
      local_10e8._2_2_ = sVar12;
      local_10e8._4_2_ = sVar13;
      local_10e8._6_2_ = sVar14;
      local_10e8._8_2_ = sVar15;
      local_10e8._10_2_ = sVar16;
      local_10e8._12_2_ = sVar17;
      local_10e8._14_2_ = sVar18;
    }
    psVar61 = &Tables::ETC1::g_thModifierTable;
    pVVar64 = this;
    do {
      sVar3 = *psVar61;
      pVVar59 = pVVar64 + 0x10;
      psVar61 = psVar61 + 1;
      *(short *)pVVar64 = (sVar3 * auVar111._0_2_ + auVar75._0_2_) * 2 + auVar110._0_2_;
      *(short *)(pVVar64 + 2) = (sVar3 * auVar111._2_2_ + auVar75._2_2_) * 2 + auVar110._2_2_;
      *(short *)(pVVar64 + 4) = (sVar3 * auVar111._4_2_ + auVar75._4_2_) * 2 + auVar110._4_2_;
      *(short *)(pVVar64 + 6) = (sVar3 * auVar111._6_2_ + auVar75._6_2_) * 2 + auVar110._6_2_;
      *(short *)(pVVar64 + 8) = (sVar3 * auVar111._8_2_ + auVar75._8_2_) * 2 + auVar110._8_2_;
      *(short *)(pVVar64 + 10) = (sVar3 * auVar111._10_2_ + auVar75._10_2_) * 2 + auVar110._10_2_;
      *(short *)(pVVar64 + 0xc) = (sVar3 * auVar111._12_2_ + auVar75._12_2_) * 2 + auVar110._12_2_;
      *(short *)(pVVar64 + 0xe) = (sVar3 * auVar111._14_2_ + auVar75._14_2_) * 2 + auVar110._14_2_;
      pVVar64 = pVVar59;
    } while (local_1c8 != pVVar59);
    lVar66 = 0;
    pauVar62 = pauVar50;
    pVVar64 = local_1c8;
    do {
      iVar46 = *(int *)((VInt16 *)&local_448 + lVar66 * 2);
      if (iVar46 == 0) {
        *(undefined2 *)(pVVar67 + lVar66) = 0;
        pauVar48 = pauVar62 + -0x18;
        do {
          pauVar49 = pauVar48 + 3;
          *(ushort *)*pauVar48 = 0;
          pauVar48 = pauVar49;
        } while (pauVar62 != pauVar49);
      }
      else {
        pVVar59 = pVVar64 + -0x80;
        *(short *)(pVVar67 + lVar66) =
             (short)((long)(ulong)*(ushort *)(local_10e8 + lVar66) / (long)iVar46);
        pauVar48 = pauVar62 + -0x18;
        do {
          uVar68 = *(ushort *)pVVar59;
          pVVar59 = pVVar59 + 0x10;
          *(ushort *)*pauVar48 = (ushort)((long)(ulong)uVar68 / (long)iVar46);
          pauVar48 = pauVar48 + 3;
        } while (pVVar64 != pVVar59);
      }
      lVar66 = lVar66 + 2;
      pVVar64 = pVVar64 + 2;
      pauVar62 = (undefined1 (*) [16])((long)*pauVar62 + 2);
    } while (lVar66 != 0x10);
    lVar47 = lVar47 + 1;
    pVVar67 = pVVar67 + 0x10;
    *(undefined8 *)(local_fe8 + lVar58 * 2) = local_10e8._0_8_;
    *(undefined8 *)((long)auStack_fe0 + lVar58 * 2) = local_10e8._8_8_;
    pauVar50 = pauVar50 + 1;
    lVar58 = lVar58 + 8;
  } while (lVar47 != 3);
  pauVar50 = (undefined1 (*) [16])local_bb8;
  if (uVar55 != 0) {
    ResolveTHFakeBT709Rounding(local_1018,local_fe8,local_1138);
  }
  do {
    uVar68 = *(ushort *)*pauVar50;
    uVar86 = *(ushort *)((long)*pauVar50 + 2);
    uVar89 = *(ushort *)((long)*pauVar50 + 4);
    uVar94 = *(ushort *)((long)*pauVar50 + 6);
    uVar123 = *(ushort *)((long)*pauVar50 + 8);
    uVar125 = *(ushort *)((long)*pauVar50 + 10);
    uVar128 = *(ushort *)((long)*pauVar50 + 0xc);
    uVar130 = *(ushort *)((long)*pauVar50 + 0xe);
    pauVar62 = pauVar50 + 3;
    *(ushort *)*pauVar50 =
         (ushort)(__LC73 < (short)uVar68) * __LC73 | (__LC73 >= (short)uVar68) * uVar68;
    *(ushort *)((long)*pauVar50 + 2) =
         (ushort)(_UNK_0010b262 < (short)uVar86) * _UNK_0010b262 |
         (_UNK_0010b262 >= (short)uVar86) * uVar86;
    *(ushort *)((long)*pauVar50 + 4) =
         (ushort)(_UNK_0010b264 < (short)uVar89) * _UNK_0010b264 |
         (_UNK_0010b264 >= (short)uVar89) * uVar89;
    *(ushort *)((long)*pauVar50 + 6) =
         (ushort)(_UNK_0010b266 < (short)uVar94) * _UNK_0010b266 |
         (_UNK_0010b266 >= (short)uVar94) * uVar94;
    *(ushort *)((long)*pauVar50 + 8) =
         (ushort)(_UNK_0010b268 < (short)uVar123) * _UNK_0010b268 |
         (_UNK_0010b268 >= (short)uVar123) * uVar123;
    *(ushort *)((long)*pauVar50 + 10) =
         (ushort)(_UNK_0010b26a < (short)uVar125) * _UNK_0010b26a |
         (_UNK_0010b26a >= (short)uVar125) * uVar125;
    *(ushort *)((long)*pauVar50 + 0xc) =
         (ushort)(_UNK_0010b26c < (short)uVar128) * _UNK_0010b26c |
         (_UNK_0010b26c >= (short)uVar128) * uVar128;
    *(ushort *)((long)*pauVar50 + 0xe) =
         (ushort)(_UNK_0010b26e < (short)uVar130) * _UNK_0010b26e |
         (_UNK_0010b26e >= (short)uVar130) * uVar130;
    uVar68 = *(ushort *)pauVar50[1];
    uVar86 = *(ushort *)((long)pauVar50[1] + 2);
    uVar89 = *(ushort *)((long)pauVar50[1] + 4);
    uVar94 = *(ushort *)((long)pauVar50[1] + 6);
    uVar123 = *(ushort *)((long)pauVar50[1] + 8);
    uVar125 = *(ushort *)((long)pauVar50[1] + 10);
    uVar128 = *(ushort *)((long)pauVar50[1] + 0xc);
    uVar130 = *(ushort *)((long)pauVar50[1] + 0xe);
    *(ushort *)pauVar50[1] =
         (ushort)(__LC73 < (short)uVar68) * __LC73 | (__LC73 >= (short)uVar68) * uVar68;
    *(ushort *)((long)pauVar50[1] + 2) =
         (ushort)(_UNK_0010b262 < (short)uVar86) * _UNK_0010b262 |
         (_UNK_0010b262 >= (short)uVar86) * uVar86;
    *(ushort *)((long)pauVar50[1] + 4) =
         (ushort)(_UNK_0010b264 < (short)uVar89) * _UNK_0010b264 |
         (_UNK_0010b264 >= (short)uVar89) * uVar89;
    *(ushort *)((long)pauVar50[1] + 6) =
         (ushort)(_UNK_0010b266 < (short)uVar94) * _UNK_0010b266 |
         (_UNK_0010b266 >= (short)uVar94) * uVar94;
    *(ushort *)((long)pauVar50[1] + 8) =
         (ushort)(_UNK_0010b268 < (short)uVar123) * _UNK_0010b268 |
         (_UNK_0010b268 >= (short)uVar123) * uVar123;
    *(ushort *)((long)pauVar50[1] + 10) =
         (ushort)(_UNK_0010b26a < (short)uVar125) * _UNK_0010b26a |
         (_UNK_0010b26a >= (short)uVar125) * uVar125;
    *(ushort *)((long)pauVar50[1] + 0xc) =
         (ushort)(_UNK_0010b26c < (short)uVar128) * _UNK_0010b26c |
         (_UNK_0010b26c >= (short)uVar128) * uVar128;
    *(ushort *)((long)pauVar50[1] + 0xe) =
         (ushort)(_UNK_0010b26e < (short)uVar130) * _UNK_0010b26e |
         (_UNK_0010b26e >= (short)uVar130) * uVar130;
    uVar68 = *(ushort *)pauVar50[2];
    uVar86 = *(ushort *)((long)pauVar50[2] + 2);
    uVar89 = *(ushort *)((long)pauVar50[2] + 4);
    uVar94 = *(ushort *)((long)pauVar50[2] + 6);
    uVar123 = *(ushort *)((long)pauVar50[2] + 8);
    uVar125 = *(ushort *)((long)pauVar50[2] + 10);
    uVar128 = *(ushort *)((long)pauVar50[2] + 0xc);
    uVar130 = *(ushort *)((long)pauVar50[2] + 0xe);
    *(ushort *)pauVar50[2] =
         (ushort)(__LC73 < (short)uVar68) * __LC73 | (__LC73 >= (short)uVar68) * uVar68;
    *(ushort *)((long)pauVar50[2] + 2) =
         (ushort)(_UNK_0010b262 < (short)uVar86) * _UNK_0010b262 |
         (_UNK_0010b262 >= (short)uVar86) * uVar86;
    *(ushort *)((long)pauVar50[2] + 4) =
         (ushort)(_UNK_0010b264 < (short)uVar89) * _UNK_0010b264 |
         (_UNK_0010b264 >= (short)uVar89) * uVar89;
    *(ushort *)((long)pauVar50[2] + 6) =
         (ushort)(_UNK_0010b266 < (short)uVar94) * _UNK_0010b266 |
         (_UNK_0010b266 >= (short)uVar94) * uVar94;
    *(ushort *)((long)pauVar50[2] + 8) =
         (ushort)(_UNK_0010b268 < (short)uVar123) * _UNK_0010b268 |
         (_UNK_0010b268 >= (short)uVar123) * uVar123;
    *(ushort *)((long)pauVar50[2] + 10) =
         (ushort)(_UNK_0010b26a < (short)uVar125) * _UNK_0010b26a |
         (_UNK_0010b26a >= (short)uVar125) * uVar125;
    *(ushort *)((long)pauVar50[2] + 0xc) =
         (ushort)(_UNK_0010b26c < (short)uVar128) * _UNK_0010b26c |
         (_UNK_0010b26c >= (short)uVar128) * uVar128;
    *(ushort *)((long)pauVar50[2] + 0xe) =
         (ushort)(_UNK_0010b26e < (short)uVar130) * _UNK_0010b26e |
         (_UNK_0010b26e >= (short)uVar130) * uVar130;
    pauVar50 = pauVar62;
  } while ((undefined1 (*) [16])local_a38 != pauVar62);
  auVar75 = psllw((undefined1  [16])local_1018,4);
  local_fb8 = (VInt16  [16])(auVar75 | (undefined1  [16])local_1018);
  local_fa8 = psllw(local_1008,4);
  local_fa8 = local_fa8 | local_1008;
  local_f98 = psllw(local_ff8,4);
  local_f98 = local_f98 | local_ff8;
  pEVar56 = local_648;
  lVar58 = 0;
  pVVar53 = param_4;
  do {
    if (uVar55 == 0) {
      if (uVar65 == 0) {
        ComputeErrorWeighted(local_648 + (long)(int)lVar58 * 0x20,local_fb8,param_5);
      }
      else {
        ComputeErrorUniform(local_648 + (long)(int)lVar58 * 0x20,(VInt16 *)pVVar53,local_fb8);
      }
    }
    else {
      ComputeErrorFakeBT709(local_648 + (long)(int)lVar58 * 0x20,local_fb8,param_5);
    }
    lVar47 = lVar58 + 1;
    param_5 = param_5 + 0x60;
    pVVar53 = (VInt16<2> *)((VInt16 *)pVVar53 + 0x30);
    uVar72 = (&uStack_844)[lVar58 * 8];
    uVar92 = (&uStack_840)[lVar58 * 8];
    uVar108 = (&uStack_83c)[lVar58 * 8];
    *(uint *)pEVar56 = ~*(uint *)(local_848 + lVar58 * 0x20) & *(uint *)pEVar56;
    *(uint *)(pEVar56 + 4) = ~uVar72 & *(uint *)(pEVar56 + 4);
    *(uint *)(pEVar56 + 8) = ~uVar92 & *(uint *)(pEVar56 + 8);
    *(uint *)(pEVar56 + 0xc) = ~uVar108 & *(uint *)(pEVar56 + 0xc);
    uVar72 = (&uStack_834)[lVar58 * 8];
    uVar92 = (&uStack_830)[lVar58 * 8];
    uVar108 = (&uStack_82c)[lVar58 * 8];
    *(uint *)(pEVar56 + 0x10) = ~(&local_838)[lVar58 * 8] & *(uint *)(pEVar56 + 0x10);
    *(uint *)(pEVar56 + 0x14) = ~uVar72 & *(uint *)(pEVar56 + 0x14);
    *(uint *)(pEVar56 + 0x18) = ~uVar92 & *(uint *)(pEVar56 + 0x18);
    *(uint *)(pEVar56 + 0x1c) = ~uVar108 & *(uint *)(pEVar56 + 0x1c);
    pEVar56 = pEVar56 + 0x20;
    lVar58 = lVar47;
  } while (lVar47 != 0x10);
  local_10d8 = (undefined1  [16])0x0;
  local_10c8 = (undefined1  [16])0x0;
  local_1118 = (undefined1  [16])0x0;
  local_1108 = (undefined1  [16])0x0;
  local_10f8 = (undefined1  [16])0x0;
  sVar3 = -sVar146;
  sVar12 = -sVar148;
  sVar13 = -sVar149;
  sVar14 = -sVar150;
  sVar15 = -sVar151;
  sVar16 = -sVar152;
  sVar17 = -sVar153;
  sVar18 = -sVar154;
  uVar68 = (ushort)(sVar151 < sVar146) * sVar146 | (ushort)(sVar151 >= sVar146) * sVar151;
  uVar86 = (ushort)(sVar152 < sVar148) * sVar148 | (ushort)(sVar152 >= sVar148) * sVar152;
  uVar89 = (ushort)(sVar153 < sVar149) * sVar149 | (ushort)(sVar153 >= sVar149) * sVar153;
  uVar94 = (ushort)(sVar154 < sVar150) * sVar150 | (ushort)(sVar154 >= sVar150) * sVar154;
  uVar68 = ((short)uVar68 < (short)uVar89) * uVar89 | ((short)uVar68 >= (short)uVar89) * uVar68;
  uVar86 = ((short)uVar86 < (short)uVar94) * uVar94 | ((short)uVar86 >= (short)uVar94) * uVar86;
  uVar86 = ((short)uVar68 < (short)uVar86) * uVar86 | ((short)uVar68 >= (short)uVar86) * uVar68;
  uVar68 = 0;
  if (-1 < (short)uVar86) {
    uVar68 = uVar86;
  }
  local_11e8 = 0;
  local_11a0 = (undefined1 (*) [16])local_bb8;
  do {
    local_10b8[3] = 0;
    local_10b8[2] = 0;
    local_10b8[1] = 0;
    local_10b8[0] = 0;
    sVar174 = (&Tables::ETC1::g_thModifierTable)[local_11e8];
    local_10b8[7] = 0;
    local_10b8[6] = 0;
    local_10b8[5] = 0;
    local_10b8[4] = 0;
    sVar70 = -uVar68;
    do {
      pVVar67 = (VInt16 *)&local_448;
      if (uVar55 == 0) {
        do {
          *(undefined1 (*) [16])pVVar67 = (undefined1  [16])0x0;
          pVVar67 = pVVar67 + 0x10;
        } while (local_418 != pVVar67);
      }
      else {
        lVar58 = 0;
        uVar86 = (ushort)(sVar146 < sVar70) * sVar146 | (ushort)(sVar146 >= sVar70) * sVar70;
        uVar89 = (ushort)(sVar148 < sVar70) * sVar148 | (ushort)(sVar148 >= sVar70) * sVar70;
        uVar94 = (ushort)(sVar149 < sVar70) * sVar149 | (ushort)(sVar149 >= sVar70) * sVar70;
        uVar123 = (ushort)(sVar150 < sVar70) * sVar150 | (ushort)(sVar150 >= sVar70) * sVar70;
        uVar125 = (ushort)(sVar151 < sVar70) * sVar151 | (ushort)(sVar151 >= sVar70) * sVar70;
        uVar128 = (ushort)(sVar152 < sVar70) * sVar152 | (ushort)(sVar152 >= sVar70) * sVar70;
        uVar130 = (ushort)(sVar153 < sVar70) * sVar153 | (ushort)(sVar153 >= sVar70) * sVar70;
        uVar133 = (ushort)(sVar154 < sVar70) * sVar154 | (ushort)(sVar154 >= sVar70) * sVar70;
        do {
          sVar87 = *(short *)(local_1048 + lVar58 + 2);
          sVar90 = *(short *)(local_1048 + lVar58 + 4);
          sVar95 = *(short *)(local_1048 + lVar58 + 6);
          sVar97 = *(short *)(local_1048 + lVar58 + 8);
          sVar100 = *(short *)(local_1048 + lVar58 + 10);
          sVar102 = *(short *)(local_1048 + lVar58 + 0xc);
          sVar105 = *(short *)(local_1048 + lVar58 + 0xe);
          *(undefined1 (*) [16])((VInt16 *)&local_448 + lVar58) = (undefined1  [16])0x0;
          sVar69 = *(short *)(local_1048 + lVar58) * 2 +
                   ((ushort)((short)uVar86 < sVar3) * sVar3 | ((short)uVar86 >= sVar3) * uVar86) *
                   sVar174 * 2;
          sVar87 = sVar87 * 2 +
                   ((ushort)((short)uVar89 < sVar12) * sVar12 | ((short)uVar89 >= sVar12) * uVar89)
                   * sVar174 * 2;
          sVar90 = sVar90 * 2 +
                   ((ushort)((short)uVar94 < sVar13) * sVar13 | ((short)uVar94 >= sVar13) * uVar94)
                   * sVar174 * 2;
          sVar95 = sVar95 * 2 +
                   ((ushort)((short)uVar123 < sVar14) * sVar14 |
                   ((short)uVar123 >= sVar14) * uVar123) * sVar174 * 2;
          sVar97 = sVar97 * 2 +
                   ((ushort)((short)uVar125 < sVar15) * sVar15 |
                   ((short)uVar125 >= sVar15) * uVar125) * sVar174 * 2;
          sVar100 = sVar100 * 2 +
                    ((ushort)((short)uVar128 < sVar16) * sVar16 |
                    ((short)uVar128 >= sVar16) * uVar128) * sVar174 * 2;
          sVar102 = sVar102 * 2 +
                    ((ushort)((short)uVar130 < sVar17) * sVar17 |
                    ((short)uVar130 >= sVar17) * uVar130) * sVar174 * 2;
          sVar105 = sVar105 * 2 +
                    ((ushort)((short)uVar133 < sVar18) * sVar18 |
                    ((short)uVar133 >= sVar18) * uVar133) * sVar174 * 2;
          pVVar67 = this + lVar58;
          *(ushort *)pVVar67 = (ushort)(-1 < sVar69) * sVar69;
          *(ushort *)(pVVar67 + 2) = (ushort)(-1 < sVar87) * sVar87;
          *(ushort *)(pVVar67 + 4) = (ushort)(-1 < sVar90) * sVar90;
          *(ushort *)(pVVar67 + 6) = (ushort)(-1 < sVar95) * sVar95;
          *(ushort *)(pVVar67 + 8) = (ushort)(-1 < sVar97) * sVar97;
          *(ushort *)(pVVar67 + 10) = (ushort)(-1 < sVar100) * sVar100;
          *(ushort *)(pVVar67 + 0xc) = (ushort)(-1 < sVar102) * sVar102;
          *(ushort *)(pVVar67 + 0xe) = (ushort)(-1 < sVar105) * sVar105;
          lVar58 = lVar58 + 0x10;
        } while (lVar58 != 0x30);
        ResolveTHFakeBT709Rounding((VInt16 *)&local_448,this,(VInt16 *)&local_1128);
      }
      auVar110._2_2_ = local_438._2_2_;
      auVar110._0_2_ = (short)local_438;
      auVar110._4_2_ = asStack_434[0];
      auVar110._6_2_ = asStack_434[1];
      auVar110._8_2_ = asStack_430[0];
      auVar110._10_2_ = asStack_430[1];
      auVar110._12_2_ = asStack_42c[0];
      auVar110._14_2_ = asStack_42c[1];
      lVar58 = 0;
      auVar75._2_2_ = uStack_446;
      auVar75._0_2_ = local_448;
      auVar75._4_2_ = sStack_444;
      auVar75._6_2_ = uStack_442;
      auVar75._8_2_ = sStack_440;
      auVar75._10_2_ = uStack_43e;
      auVar75._12_2_ = sStack_43c;
      auVar75._14_2_ = uStack_43a;
      auVar111 = psllw(auVar110,5);
      auVar75 = psllw(auVar75,10);
      local_10e8 = auVar75 | auVar111 | local_428;
      do {
        iVar46 = *(int *)((long)local_10b8 + lVar58 * 2);
        sVar87 = *(short *)(local_10e8 + lVar58);
        if ((iVar46 == 0) ||
           (sVar87 != *(short *)((long)local_a38 + lVar58 + (long)(iVar46 + -1) * 0x10))) {
          *(int *)((long)local_10b8 + lVar58 * 2) = iVar46 + 1;
          *(short *)((long)local_a38 + lVar58 + (long)iVar46 * 0x10) = sVar87;
        }
        lVar58 = lVar58 + 2;
      } while (lVar58 != 0x10);
      sVar70 = sVar70 + 2;
    } while (sVar70 <= (short)uVar68);
    uVar108 = ~-(uint)((int)local_10b8[4] < (int)local_10b8[0]) & local_10b8[4] |
              local_10b8[0] & -(uint)((int)local_10b8[4] < (int)local_10b8[0]);
    uVar164 = ~-(uint)((int)local_10b8[5] < (int)local_10b8[1]) & local_10b8[5] |
              local_10b8[1] & -(uint)((int)local_10b8[5] < (int)local_10b8[1]);
    uVar165 = ~-(uint)((int)local_10b8[6] < (int)local_10b8[2]) & local_10b8[6] |
              local_10b8[2] & -(uint)((int)local_10b8[6] < (int)local_10b8[2]);
    uVar166 = ~-(uint)((int)local_10b8[7] < (int)local_10b8[3]) & local_10b8[7] |
              local_10b8[3] & -(uint)((int)local_10b8[7] < (int)local_10b8[3]);
    uVar72 = -(uint)((int)uVar108 < (int)uVar165);
    uVar92 = -(uint)((int)uVar164 < (int)uVar166);
    uVar72 = ~uVar72 & uVar108 | uVar165 & uVar72;
    uVar92 = ~uVar92 & uVar164 | uVar166 & uVar92;
    uVar108 = -(uint)((int)uVar72 < (int)uVar92);
    uVar92 = ~uVar108 & uVar72 | uVar92 & uVar108;
    uVar72 = 0;
    if (-1 < (int)uVar92) {
      uVar72 = uVar92;
    }
    lVar58 = 0;
    do {
      uVar108 = local_10b8[lVar58];
      uVar86 = *(ushort *)((long)*(undefined1 (*) [16])local_a38 + lVar58 * 2);
      if ((int)(uVar108 + 1) < (int)uVar72) {
        puVar51 = (ushort *)
                  ((long)((undefined1 (*) [16])local_a38)[(int)(uVar108 + 1)] + lVar58 * 2);
        do {
          *puVar51 = uVar86;
          puVar51 = puVar51 + 8;
        } while (local_a18 + lVar58 + ((ulong)((uVar72 - 2) - uVar108) + (long)(int)uVar108) * 8 !=
                 puVar51);
      }
      lVar58 = lVar58 + 1;
    } while (lVar58 != 8);
    lVar58 = 0;
    do {
      auVar75 = psllw(*(undefined1 (*) [16])
                       ((long)((undefined1 (*) [16])local_bb8)[local_11e8 * 3] + lVar58),4);
      auVar75 = auVar75 | *(undefined1 (*) [16])
                           ((long)((undefined1 (*) [16])local_bb8)[local_11e8 * 3] + lVar58);
      sVar70 = auVar75._0_2_ - sVar174;
      sVar87 = auVar75._2_2_ - sVar174;
      sVar90 = auVar75._4_2_ - sVar174;
      sVar95 = auVar75._6_2_ - sVar174;
      sVar97 = auVar75._8_2_ - sVar174;
      sVar100 = auVar75._10_2_ - sVar174;
      sVar102 = auVar75._12_2_ - sVar174;
      sVar105 = auVar75._14_2_ - sVar174;
      *(ushort *)(local_f88 + lVar58) = (ushort)(-1 < sVar70) * sVar70;
      *(ushort *)(local_f88 + lVar58 + 2) = (ushort)(-1 < sVar87) * sVar87;
      *(ushort *)(local_f88 + lVar58 + 4) = (ushort)(-1 < sVar90) * sVar90;
      *(ushort *)(local_f88 + lVar58 + 6) = (ushort)(-1 < sVar95) * sVar95;
      *(ushort *)(local_f88 + lVar58 + 8) = (ushort)(-1 < sVar97) * sVar97;
      *(ushort *)(local_f88 + lVar58 + 10) = (ushort)(-1 < sVar100) * sVar100;
      *(ushort *)(local_f88 + lVar58 + 0xc) = (ushort)(-1 < sVar102) * sVar102;
      *(ushort *)(local_f88 + lVar58 + 0xe) = (ushort)(-1 < sVar105) * sVar105;
      lVar58 = lVar58 + 0x10;
      pVVar67 = (VInt16 *)&local_448;
      pVVar64 = local_f88;
      pEVar56 = local_848;
      pVVar59 = (VInt16 *)param_4;
      sVar70 = sVar174;
      sVar87 = sVar174;
      sVar90 = sVar174;
      sVar95 = sVar174;
      sVar97 = sVar174;
      sVar100 = sVar174;
      sVar102 = sVar174;
    } while (lVar58 != 0x30);
    do {
      if (uVar65 == 0) {
        ComputeErrorWeighted();
      }
      else {
        ComputeErrorUniform((ETCComputer *)this,pVVar64,pVVar59);
      }
      uVar108 = *(uint *)(pEVar56 + 4);
      uVar164 = *(uint *)(pEVar56 + 8);
      uVar165 = *(uint *)(pEVar56 + 0xc);
      pVVar54 = pVVar67 + 0x20;
      *(uint *)pVVar67 = ~*(uint *)pEVar56 & local_248;
      *(uint *)(pVVar67 + 4) = ~uVar108 & uStack_244;
      *(uint *)(pVVar67 + 8) = ~uVar164 & uStack_240;
      *(uint *)(pVVar67 + 0xc) = ~uVar165 & uStack_23c;
      uVar108 = *(uint *)(pEVar56 + 0x14);
      uVar164 = *(uint *)(pEVar56 + 0x18);
      uVar165 = *(uint *)(pEVar56 + 0x1c);
      *(uint *)(pVVar67 + 0x10) = ~*(uint *)(pEVar56 + 0x10) & local_238[0];
      *(uint *)(pVVar67 + 0x14) = ~uVar108 & local_238[1];
      *(uint *)(pVVar67 + 0x18) = ~uVar164 & local_238[2];
      *(uint *)(pVVar67 + 0x1c) = ~uVar165 & local_238[3];
      pVVar67 = pVVar54;
      pEVar56 = pEVar56 + 0x20;
      pVVar59 = pVVar59 + 0x30;
    } while (this != pVVar54);
    auVar111 = psllw(local_11a0[1],5);
    auVar75 = psllw(*local_11a0,10);
    local_1258 = (undefined1  [16])0x0;
    auVar75 = local_11a0[2] | auVar75 | auVar111;
    if ((local_11e8 & 1) == 0) {
      local_1258._8_4_ = 0xffffffff;
      local_1258._0_8_ = 0xffffffffffffffff;
      local_1258._12_4_ = 0xffffffff;
    }
    if (0 < (int)uVar92) {
      uVar73 = CONCAT22((short)local_11e8,(short)local_11e8);
      pVVar67 = local_eb8;
      sVar105 = 0;
      sVar69 = 0;
      sVar155 = 0;
      sVar156 = 0;
      sVar157 = 0;
      sVar158 = 0;
      sVar159 = 0;
      sVar160 = 0;
      pEVar56 = (ETCComputer *)&local_1098;
      auVar111 = __LC55;
      local_1298 = (undefined1 (*) [16])local_a38;
      do {
        auVar110 = *local_1298;
        pVVar64 = local_f18;
        uVar92 = 10;
        do {
          uVar108 = uVar92 - 5;
          uVar60 = (ulong)uVar92;
          auVar113._0_2_ = auVar110._0_2_ >> uVar60;
          auVar113._2_2_ = auVar110._2_2_ >> uVar60;
          auVar113._4_2_ = auVar110._4_2_ >> uVar60;
          auVar113._6_2_ = auVar110._6_2_ >> uVar60;
          auVar113._8_2_ = auVar110._8_2_ >> uVar60;
          auVar113._10_2_ = auVar110._10_2_ >> uVar60;
          auVar113._12_2_ = auVar110._12_2_ >> uVar60;
          auVar113._14_2_ = auVar110._14_2_ >> uVar60;
          auVar76._2_2_ = _UNK_0010b262;
          auVar76._0_2_ = __LC73;
          auVar76._4_2_ = _UNK_0010b264;
          auVar76._6_2_ = _UNK_0010b266;
          auVar76._8_2_ = _UNK_0010b268;
          auVar76._10_2_ = _UNK_0010b26a;
          auVar76._12_2_ = _UNK_0010b26c;
          auVar76._14_2_ = _UNK_0010b26e;
          auVar112 = psllw(auVar113 & auVar76,4);
          auVar112 = auVar113 & auVar76 | auVar112;
          sVar107 = sVar174 + auVar112._0_2_;
          sVar120 = sVar70 + auVar112._2_2_;
          sVar121 = sVar87 + auVar112._4_2_;
          sVar124 = sVar90 + auVar112._6_2_;
          sVar126 = sVar95 + auVar112._8_2_;
          sVar129 = sVar97 + auVar112._10_2_;
          sVar131 = sVar100 + auVar112._12_2_;
          sVar134 = sVar102 + auVar112._14_2_;
          sVar71 = auVar112._0_2_ - sVar174;
          sVar88 = auVar112._2_2_ - sVar70;
          sVar91 = auVar112._4_2_ - sVar87;
          sVar96 = auVar112._6_2_ - sVar90;
          sVar98 = auVar112._8_2_ - sVar95;
          sVar101 = auVar112._10_2_ - sVar97;
          sVar103 = auVar112._12_2_ - sVar100;
          sVar106 = auVar112._14_2_ - sVar102;
          bVar4 = __LC27 < sVar107;
          uVar133 = (ushort)bVar4 * __LC27;
          bVar5 = _UNK_0010b292 < sVar120;
          uVar130 = (ushort)bVar5 * _UNK_0010b292;
          bVar6 = _UNK_0010b294 < sVar121;
          uVar128 = (ushort)bVar6 * _UNK_0010b294;
          bVar7 = _UNK_0010b296 < sVar124;
          uVar125 = (ushort)bVar7 * _UNK_0010b296;
          bVar8 = _UNK_0010b298 < sVar126;
          uVar123 = (ushort)bVar8 * _UNK_0010b298;
          bVar9 = _UNK_0010b29a < sVar129;
          uVar94 = (ushort)bVar9 * _UNK_0010b29a;
          bVar10 = _UNK_0010b29c < sVar131;
          uVar89 = (ushort)bVar10 * _UNK_0010b29c;
          bVar11 = _UNK_0010b29e < sVar134;
          uVar86 = (ushort)bVar11 * _UNK_0010b29e;
          *(ushort *)(pVVar64 + 0x30) =
               (ushort)(sVar71 < sVar105) * sVar105 | (ushort)(sVar71 >= sVar105) * sVar71;
          *(ushort *)(pVVar64 + 0x32) =
               (ushort)(sVar88 < sVar69) * sVar69 | (ushort)(sVar88 >= sVar69) * sVar88;
          *(ushort *)(pVVar64 + 0x34) =
               (ushort)(sVar91 < sVar155) * sVar155 | (ushort)(sVar91 >= sVar155) * sVar91;
          *(ushort *)(pVVar64 + 0x36) =
               (ushort)(sVar96 < sVar156) * sVar156 | (ushort)(sVar96 >= sVar156) * sVar96;
          *(ushort *)(pVVar64 + 0x38) =
               (ushort)(sVar98 < sVar157) * sVar157 | (ushort)(sVar98 >= sVar157) * sVar98;
          *(ushort *)(pVVar64 + 0x3a) =
               (ushort)(sVar101 < sVar158) * sVar158 | (ushort)(sVar101 >= sVar158) * sVar101;
          *(ushort *)(pVVar64 + 0x3c) =
               (ushort)(sVar103 < sVar159) * sVar159 | (ushort)(sVar103 >= sVar159) * sVar103;
          *(ushort *)(pVVar64 + 0x3e) =
               (ushort)(sVar106 < sVar160) * sVar160 | (ushort)(sVar106 >= sVar160) * sVar106;
          *(ushort *)pVVar64 = uVar133 | (ushort)!bVar4 * sVar107;
          *(ushort *)(pVVar64 + 2) = uVar130 | (ushort)!bVar5 * sVar120;
          *(ushort *)(pVVar64 + 4) = uVar128 | (ushort)!bVar6 * sVar121;
          *(ushort *)(pVVar64 + 6) = uVar125 | (ushort)!bVar7 * sVar124;
          *(ushort *)(pVVar64 + 8) = uVar123 | (ushort)!bVar8 * sVar126;
          *(ushort *)(pVVar64 + 10) = uVar94 | (ushort)!bVar9 * sVar129;
          *(ushort *)(pVVar64 + 0xc) = uVar89 | (ushort)!bVar10 * sVar131;
          *(ushort *)(pVVar64 + 0xe) = uVar86 | (ushort)!bVar11 * sVar134;
          pVVar64 = pVVar64 + 0x10;
          uVar92 = uVar108;
        } while (uVar108 != 0xfffffffb);
        lVar58 = 0;
        pVVar64 = local_f18;
        puVar63 = (undefined8 *)local_f58;
        pauVar50 = (undefined1 (*) [16])local_cb8;
        pVVar59 = (VInt16 *)param_4;
        do {
          do {
            if (uVar65 == 0) {
              ComputeErrorWeighted();
            }
            else {
              ComputeErrorUniform(pEVar56,pVVar64,pVVar59);
            }
            pVVar64 = pVVar64 + 0x30;
            *puVar63 = local_1098;
            puVar63[1] = uStack_1090;
            puVar63[2] = local_1088;
            puVar63[3] = uStack_1080;
            puVar63 = puVar63 + 4;
          } while (pVVar64 != pVVar67);
          pVVar59 = pVVar59 + 0x30;
          auVar136._4_4_ = fStack_f34;
          auVar136._0_4_ = local_f38;
          auVar136._8_4_ = fStack_f30;
          auVar136._12_4_ = fStack_f2c;
          auVar136 = minps(local_f58,auVar136);
          auVar143._4_4_ = -(uint)(local_f58._4_4_ <= fStack_f34);
          auVar143._0_4_ = -(uint)(local_f58._0_4_ <= local_f38);
          auVar143._8_4_ = -(uint)(local_f58._8_4_ <= fStack_f30);
          auVar143._12_4_ = -(uint)(local_f58._12_4_ <= fStack_f2c);
          auVar137._4_4_ = fStack_f24;
          auVar137._0_4_ = local_f28;
          auVar137._8_4_ = fStack_f20;
          auVar137._12_4_ = fStack_f1c;
          auVar113 = minps(local_f48,auVar137);
          auVar80._4_4_ = -(uint)(local_f48._4_4_ <= fStack_f24);
          auVar80._0_4_ = -(uint)(local_f48._0_4_ <= local_f28);
          auVar80._8_4_ = -(uint)(local_f48._8_4_ <= fStack_f20);
          auVar80._12_4_ = -(uint)(local_f48._12_4_ <= fStack_f1c);
          auVar76 = packssdw(auVar143,auVar80);
          auVar112._2_2_ = _UNK_0010b272;
          auVar112._0_2_ = __LC30;
          auVar112._4_2_ = _UNK_0010b274;
          auVar112._6_2_ = _UNK_0010b276;
          auVar112._8_2_ = _UNK_0010b278;
          auVar112._10_2_ = _UNK_0010b27a;
          auVar112._12_2_ = _UNK_0010b27c;
          auVar112._14_2_ = _UNK_0010b27e;
          *pauVar50 = auVar76 & auVar112 | ~auVar76 & auVar111;
          uVar92 = *(uint *)((long)&uStack_844 + lVar58);
          uVar108 = *(uint *)((long)&uStack_840 + lVar58);
          uVar164 = *(uint *)((long)&uStack_83c + lVar58);
          pVVar64 = this + lVar58;
          *(uint *)pVVar64 = ~*(uint *)(local_848 + lVar58) & auVar136._0_4_;
          *(uint *)(pVVar64 + 4) = ~uVar92 & auVar136._4_4_;
          *(uint *)(pVVar64 + 8) = ~uVar108 & auVar136._8_4_;
          *(uint *)(pVVar64 + 0xc) = ~uVar164 & auVar136._12_4_;
          uVar92 = *(uint *)((long)&uStack_834 + lVar58);
          uVar108 = *(uint *)((long)&uStack_830 + lVar58);
          uVar164 = *(uint *)((long)&uStack_82c + lVar58);
          *(uint *)(*(undefined1 (*) [16])local_238 + lVar58) =
               ~*(uint *)((long)&local_838 + lVar58) & auVar113._0_4_;
          *(uint *)((long)local_238 + lVar58 + 4) = ~uVar92 & auVar113._4_4_;
          *(uint *)((long)local_238 + lVar58 + 8) = ~uVar108 & auVar113._8_4_;
          *(uint *)((long)local_238 + lVar58 + 0xc) = ~uVar164 & auVar113._12_4_;
          lVar58 = lVar58 + 0x20;
          pVVar64 = local_f18;
          puVar63 = (undefined8 *)local_f58;
          pauVar50 = pauVar50 + 1;
        } while (lVar58 != 0x200);
        fVar74 = 0.0;
        fVar93 = 0.0;
        fVar99 = 0.0;
        fVar104 = 0.0;
        fVar109 = 0.0;
        fVar122 = 0.0;
        fVar127 = 0.0;
        fVar132 = 0.0;
        fVar135 = 0.0;
        fVar138 = 0.0;
        fVar139 = 0.0;
        fVar140 = 0.0;
        auVar141._0_12_ = ZEXT812(0);
        auVar141._12_4_ = 0;
        pauVar50 = (undefined1 (*) [16])local_638;
        pauVar62 = (undefined1 (*) [16])&local_438;
        pauVar48 = (undefined1 (*) [16])local_238;
        do {
          pauVar49 = pauVar50 + 2;
          auVar76 = minps(*pauVar48,*pauVar62);
          auVar112 = minps(*pauVar48,*pauVar50);
          auVar113 = minps(pauVar48[-1],pauVar62[-1]);
          auVar136 = minps(pauVar48[-1],pauVar50[-1]);
          fVar135 = fVar135 + auVar112._0_4_;
          fVar138 = fVar138 + auVar112._4_4_;
          fVar139 = fVar139 + auVar112._8_4_;
          fVar140 = fVar140 + auVar112._12_4_;
          fVar74 = fVar74 + auVar76._0_4_;
          fVar93 = fVar93 + auVar76._4_4_;
          fVar99 = fVar99 + auVar76._8_4_;
          fVar104 = fVar104 + auVar76._12_4_;
          auVar142._0_4_ = auVar141._0_4_ + auVar136._0_4_;
          auVar142._4_4_ = auVar141._4_4_ + auVar136._4_4_;
          auVar142._8_4_ = auVar141._8_4_ + auVar136._8_4_;
          auVar142._12_4_ = auVar141._12_4_ + auVar136._12_4_;
          fVar109 = fVar109 + auVar113._0_4_;
          fVar122 = fVar122 + auVar113._4_4_;
          fVar127 = fVar127 + auVar113._8_4_;
          fVar132 = fVar132 + auVar113._12_4_;
          pauVar50 = pauVar49;
          pauVar62 = pauVar62 + 2;
          pauVar48 = pauVar48 + 2;
          auVar141 = auVar142;
        } while (pauVar49 != (undefined1 (*) [16])&local_438);
        auVar144._4_4_ = -(uint)(fVar93 < fVar138);
        auVar144._0_4_ = -(uint)(fVar74 < fVar135);
        auVar144._8_4_ = -(uint)(fVar99 < fVar139);
        auVar144._12_4_ = -(uint)(fVar104 < fVar140);
        auVar147._4_4_ = -(uint)(fVar122 < auVar142._4_4_);
        auVar147._0_4_ = -(uint)(fVar109 < auVar142._0_4_);
        auVar147._8_4_ = -(uint)(fVar127 < auVar142._8_4_);
        auVar147._12_4_ = -(uint)(fVar132 < auVar142._12_4_);
        auVar76 = *(undefined1 (*) [16])param_2;
        auVar113 = *(undefined1 (*) [16])(param_2 + 0x10);
        auVar112 = packssdw(auVar147,auVar144);
        local_1248 = auVar75._0_2_;
        sStack_1246 = auVar75._2_2_;
        sStack_1244 = auVar75._4_2_;
        sStack_1242 = auVar75._6_2_;
        sStack_1240 = auVar75._8_2_;
        sStack_123e = auVar75._10_2_;
        sStack_123c = auVar75._12_2_;
        sStack_123a = auVar75._14_2_;
        auVar145._0_2_ = -(ushort)(auVar110._0_2_ < local_1248);
        auVar145._2_2_ = -(ushort)(auVar110._2_2_ < sStack_1246);
        auVar145._4_2_ = -(ushort)(auVar110._4_2_ < sStack_1244);
        auVar145._6_2_ = -(ushort)(auVar110._6_2_ < sStack_1242);
        auVar145._8_2_ = -(ushort)(auVar110._8_2_ < sStack_1240);
        auVar145._10_2_ = -(ushort)(auVar110._10_2_ < sStack_123e);
        auVar145._12_2_ = -(ushort)(auVar110._12_2_ < sStack_123c);
        auVar145._14_2_ = -(ushort)(auVar110._14_2_ < sStack_123a);
        auVar112 = ~(auVar145 ^ local_1258) & auVar112;
        auVar169._0_12_ = auVar112._0_12_;
        auVar169._12_2_ = auVar112._6_2_;
        auVar169._14_2_ = auVar112._6_2_;
        auVar168._12_4_ = auVar169._12_4_;
        auVar168._0_10_ = auVar112._0_10_;
        auVar168._10_2_ = auVar112._4_2_;
        auVar167._10_6_ = auVar168._10_6_;
        auVar167._0_8_ = auVar112._0_8_;
        auVar167._8_2_ = auVar112._4_2_;
        auVar44._4_8_ = auVar167._8_8_;
        auVar44._2_2_ = auVar112._2_2_;
        auVar44._0_2_ = auVar112._2_2_;
        uVar166 = CONCAT22(auVar112._0_2_,auVar112._0_2_);
        uVar92 = CONCAT22(auVar112._8_2_,auVar112._8_2_);
        auVar161._0_8_ = CONCAT26(auVar112._10_2_,CONCAT24(auVar112._10_2_,uVar92));
        auVar161._8_2_ = auVar112._12_2_;
        auVar161._10_2_ = auVar112._12_2_;
        auVar162._14_2_ = auVar112._14_2_;
        auVar162._12_2_ = auVar162._14_2_;
        auVar162._0_12_ = auVar161;
        auVar77._0_4_ = (uint)fVar74 & uVar92;
        uVar108 = (uint)((ulong)auVar161._0_8_ >> 0x20);
        auVar77._4_4_ = (uint)fVar93 & uVar108;
        uVar164 = auVar161._8_4_;
        auVar77._8_4_ = (uint)fVar99 & uVar164;
        uVar165 = auVar162._12_4_;
        auVar77._12_4_ = (uint)fVar104 & uVar165;
        auVar114._0_4_ = (uint)fVar109 & uVar166;
        uVar171 = auVar44._0_4_;
        auVar114._4_4_ = (uint)fVar122 & uVar171;
        uVar172 = auVar167._8_4_;
        auVar114._8_4_ = (uint)fVar127 & uVar172;
        auVar114._12_4_ = (uint)fVar132 & auVar168._12_4_;
        auVar170._0_4_ = ~uVar166 & (uint)auVar142._0_4_;
        auVar170._4_4_ = ~uVar171 & (uint)auVar142._4_4_;
        auVar170._8_4_ = ~uVar172 & (uint)auVar142._8_4_;
        auVar170._12_4_ = ~auVar168._12_4_ & (uint)auVar142._12_4_;
        auVar163._0_4_ = ~uVar92 & (uint)fVar135;
        auVar163._4_4_ = ~uVar108 & (uint)fVar138;
        auVar163._8_4_ = ~uVar164 & (uint)fVar139;
        auVar163._12_4_ = ~uVar165 & (uint)fVar140;
        auVar170 = auVar170 | auVar114;
        auVar163 = auVar163 | auVar77;
        auVar173._4_4_ = -(uint)(auVar170._4_4_ < auVar76._4_4_);
        auVar173._0_4_ = -(uint)(auVar170._0_4_ < auVar76._0_4_);
        auVar173._8_4_ = -(uint)(auVar170._8_4_ < auVar76._8_4_);
        auVar173._12_4_ = -(uint)(auVar170._12_4_ < auVar76._12_4_);
        auVar78._4_4_ = -(uint)(auVar163._4_4_ < auVar113._4_4_);
        auVar78._0_4_ = -(uint)(auVar163._0_4_ < auVar113._0_4_);
        auVar78._8_4_ = -(uint)(auVar163._8_4_ < auVar113._8_4_);
        auVar78._12_4_ = -(uint)(auVar163._12_4_ < auVar113._12_4_);
        auVar136 = packssdw(auVar173,auVar78);
        if ((((((((((((((((auVar136 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar136 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar136 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar136 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar136 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar136 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar136 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar136 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar136 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar136 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar136 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar136 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar136 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar136 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar136 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            auVar136[0xf] < '\0') {
          auVar137 = (undefined1  [16])0x0;
          lVar58 = 0;
          auVar143 = (undefined1  [16])0x0;
          iVar46 = 0;
          do {
            lVar47 = lVar58 * 2;
            lVar66 = lVar58 * 2;
            pVVar64 = this + lVar58 * 2;
            auVar79._4_4_ =
                 -(uint)((float)(*(uint *)(&sStack_444 + lVar58) & uVar171 |
                                ~uVar171 & *(uint *)((long)auStack_644 + lVar47)) <
                        *(float *)(pVVar64 + 4));
            auVar79._0_4_ =
                 -(uint)((float)(*(uint *)((VInt16 *)&local_448 + lVar58 * 2) & uVar166 |
                                ~uVar166 & *(uint *)(local_648 + lVar47)) < *(float *)pVVar64);
            auVar79._8_4_ =
                 -(uint)((float)(*(uint *)(&sStack_440 + lVar58) & uVar172 |
                                ~uVar172 & *(uint *)((long)auStack_644 + lVar47 + 4)) <
                        *(float *)(pVVar64 + 8));
            auVar79._12_4_ =
                 -(uint)((float)(*(uint *)(&sStack_43c + lVar58) & auVar168._12_4_ |
                                ~auVar168._12_4_ & *(uint *)((long)local_638 + lVar47 + -4)) <
                        *(float *)(pVVar64 + 0xc));
            pIVar52 = param_6 + lVar58;
            pVVar64 = this + lVar58 * 2 + 0x10;
            auVar115._4_4_ =
                 -(uint)((float)(~uVar108 & *(uint *)((long)local_638 + lVar66 + 4) |
                                *(uint *)(asStack_434 + lVar58) & uVar108) < *(float *)(pVVar64 + 4)
                        );
            auVar115._0_4_ =
                 -(uint)((float)(~uVar92 & *(uint *)((long)local_638 + lVar66) |
                                *(uint *)((long)&local_438 + lVar58 * 2) & uVar92) <
                        *(float *)pVVar64);
            auVar115._8_4_ =
                 -(uint)((float)(~uVar164 & *(uint *)((long)local_638 + lVar66 + 8) |
                                *(uint *)(asStack_430 + lVar58) & uVar164) < *(float *)(pVVar64 + 8)
                        );
            auVar115._12_4_ =
                 -(uint)((float)(~uVar165 & *(uint *)((long)local_638 + lVar66 + 0xc) |
                                *(uint *)(asStack_42c + lVar58) & uVar165) <
                        *(float *)(pVVar64 + 0xc));
            auVar80 = packssdw(auVar79,auVar115);
            pauVar50 = (undefined1 (*) [16])(*(undefined1 (*) [16])local_cb8 + lVar58);
            lVar58 = lVar58 + 0x10;
            auVar80 = *(undefined1 (*) [16])pIVar52 & __LC76 |
                      ~*(undefined1 (*) [16])pIVar52 & ~auVar80 & *pauVar50;
            iVar175 = CONCAT22(sVar157,auVar80._8_2_);
            auVar176._0_8_ = CONCAT26(sVar158,CONCAT24(auVar80._10_2_,iVar175));
            auVar176._8_2_ = auVar80._12_2_;
            auVar176._10_2_ = sVar159;
            auVar177._12_2_ = auVar80._14_2_;
            auVar177._0_12_ = auVar176;
            auVar177._14_2_ = sVar160;
            auVar83._0_12_ = auVar80._0_12_;
            auVar83._12_2_ = auVar80._6_2_;
            auVar83._14_2_ = sVar156;
            auVar82._12_4_ = auVar83._12_4_;
            auVar82._0_10_ = auVar80._0_10_;
            auVar82._10_2_ = sVar155;
            auVar81._10_6_ = auVar82._10_6_;
            auVar81._0_8_ = auVar80._0_8_;
            auVar81._8_2_ = auVar80._4_2_;
            auVar45._4_8_ = auVar81._8_8_;
            auVar45._2_2_ = sVar69;
            auVar45._0_2_ = auVar80._2_2_;
            auVar178._0_4_ = iVar175 << iVar46;
            auVar178._4_4_ = (undefined4)((ulong)auVar176._0_8_ >> 0x20);
            auVar178._8_4_ = auVar176._8_4_;
            auVar178._12_4_ = auVar177._12_4_;
            auVar84._0_4_ = CONCAT22(sVar105,auVar80._0_2_) << iVar46;
            auVar84._4_4_ = auVar45._0_4_;
            auVar84._8_4_ = auVar81._8_4_;
            auVar84._12_4_ = auVar82._12_4_;
            auVar137 = auVar137 | auVar178;
            auVar143 = auVar143 | auVar84;
            iVar46 = iVar46 + 2;
          } while (lVar58 != 0x100);
          auVar80 = minps(auVar76,auVar170);
          auVar76 = minps(auVar113,auVar163);
          *(undefined1 (*) [16])param_2 = auVar80;
          local_1108 = auVar110 & auVar136 | ~auVar136 & local_1108;
          auVar119._0_12_ = auVar136._0_12_;
          auVar119._12_2_ = auVar136._6_2_;
          auVar119._14_2_ = auVar136._6_2_;
          auVar118._12_4_ = auVar119._12_4_;
          auVar118._0_10_ = auVar136._0_10_;
          auVar118._10_2_ = auVar136._4_2_;
          auVar117._10_6_ = auVar118._10_6_;
          auVar117._0_8_ = auVar136._0_8_;
          auVar117._8_2_ = auVar136._4_2_;
          auVar116._8_8_ = auVar117._8_8_;
          auVar116._6_2_ = auVar136._2_2_;
          auVar116._4_2_ = auVar136._2_2_;
          auVar116._0_2_ = auVar136._0_2_;
          auVar116._2_2_ = auVar116._0_2_;
          auVar85._2_2_ = auVar136._8_2_;
          auVar85._0_2_ = auVar136._8_2_;
          auVar85._4_2_ = auVar136._10_2_;
          auVar85._6_2_ = auVar136._10_2_;
          auVar85._8_2_ = auVar136._12_2_;
          auVar85._10_2_ = auVar136._12_2_;
          auVar85._14_2_ = auVar136._14_2_;
          auVar85._12_2_ = auVar85._14_2_;
          *(undefined1 (*) [16])(param_2 + 0x10) = auVar76;
          auVar43._4_4_ = uVar73;
          auVar43._0_4_ = uVar73;
          auVar43._8_4_ = uVar73;
          auVar43._12_4_ = uVar73;
          local_10c8 = auVar137 & auVar85 | ~auVar85 & local_10c8;
          local_10d8 = auVar143 & auVar116 | ~auVar116 & local_10d8;
          local_1118 = auVar43 & auVar136 | ~auVar136 & local_1118;
          local_1148 = auVar112 & auVar136 | ~auVar136 & local_1148;
          local_10f8 = auVar75 & auVar136 | ~auVar136 & local_10f8;
          local_1158 = auVar136 | local_1158;
        }
        local_1298 = local_1298 + 1;
      } while (local_1298 != (undefined1 (*) [16])local_a38 + (int)uVar72);
    }
    local_11e8 = local_11e8 + 1;
    local_11a0 = local_11a0 + 3;
  } while (local_11e8 != 8);
  lVar58 = 0;
  do {
    if (*(short *)(local_1158 + lVar58 * 2) != 0) {
      uVar68 = *(ushort *)(local_1108 + lVar58 * 2);
      sStack_444 = *(short *)(local_ff8 + lVar58 * 2);
      uStack_244 = CONCAT22(uStack_244._2_2_,uVar68) & 0xffff000f;
      local_448 = (short)*(undefined4 *)(local_1018 + lVar58 * 2);
      uStack_446 = (short)*(undefined4 *)(local_1008 + lVar58 * 2);
      local_248 = CONCAT22((short)((int)(uint)uVar68 >> 5),(short)((int)(uint)uVar68 >> 10)) &
                  0xf000f;
      if (*(short *)(local_1148 + lVar58 * 2) == 0) {
        EmitTModeBlock(param_1,(ushort *)this,(ushort *)&local_448,
                       *(int *)(local_10d8 +
                               (long)((int)(uint)lVar58 >> 2) * 0x10 + (ulong)((uint)lVar58 & 3) * 4
                               ),*(ushort *)(local_1118 + lVar58 * 2),false);
      }
      else {
        iVar46 = 0;
        uVar55 = 0;
        uVar65 = 0;
        do {
          bVar19 = (byte)iVar46;
          iVar46 = iVar46 + 1;
          uVar60 = (ulong)(*(int *)(local_10d8 +
                                   (long)((int)(uint)lVar58 >> 2) * 0x10 +
                                   (ulong)((uint)lVar58 & 3) * 4) >> (bVar19 * '\x02' & 0x1f) & 3);
          uVar55 = uVar55 | (uint)*(ushort *)
                                   ((long)&EncodeVirtualTModePunchthrough(unsigned_char*,cvtt::ParallelMath::Float&,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::Options_const&)
                                           ::selectorRemapSector + uVar60 * 2) << (bVar19 & 0x1f);
          uVar65 = uVar65 | (uint)*(ushort *)
                                   ((long)&EncodeVirtualTModePunchthrough(unsigned_char*,cvtt::ParallelMath::Float&,cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::ParallelMath::Int16CompFlag_const&,cvtt::Options_const&)
                                           ::selectorRemapSign + uVar60 * 2) << (bVar19 & 0x1f);
        } while (iVar46 != 0x10);
        local_a38[1] = *(undefined2 *)(local_10f8 + lVar58 * 2);
        local_a38[0] = uVar68;
        EmitHModeBlock(param_1,local_a38,(ushort)uVar55,(ushort)uVar65,
                       *(ushort *)(local_1118 + lVar58 * 2),false);
      }
    }
    param_1 = param_1 + 8;
    lVar58 = lVar58 + 1;
  } while (lVar58 != 8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  piVar8 = &DAT_00109b60 + (long)param_2 * 0x10;
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
  uStack_90 = _UNK_0010b3b8;
  local_88 = __LC78;
  uStack_80 = _UNK_0010b3c8;
  local_78 = __LC79;
  uStack_70 = _UNK_0010b3d8;
  local_68 = __LC80;
  uStack_60 = _UNK_0010b3e8;
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
  ushort *puVar17;
  int *piVar18;
  Int16CompFlag *pIVar19;
  long lVar20;
  uint uVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  Float *pFVar24;
  undefined8 *puVar25;
  long lVar26;
  short sVar27;
  long lVar28;
  Int16CompFlag *pIVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  int *piVar32;
  uint uVar33;
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
  long local_1ae0;
  long local_1a90;
  long local_1a78;
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
  
  piVar18 = &DAT_00109b60;
  lVar26 = 0;
  bVar36 = false;
  lVar20 = *(long *)(in_FS_OFFSET + 0x28);
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
    lVar28 = 0;
    pauVar34 = (undefined1 (*) [16])(local_1818 + lVar26);
    lVar16 = lVar26;
    piVar35 = piVar18;
    while( true ) {
      piVar32 = piVar35 + -8;
      *pauVar34 = (undefined1  [16])0x0;
      pauVar34[1] = (undefined1  [16])0x0;
      pauVar34[2] = (undefined1  [16])0x0;
      puVar30 = local_1248 + lVar16 * 8;
      puVar25 = local_c48 + lVar16 * 2;
      do {
        iVar14 = *piVar32;
        lVar15 = 0;
        pFVar24 = param_4 + (long)iVar14 * 0x60;
        pauVar22 = pauVar34;
        do {
          pVVar1 = param_3 + lVar15 + (long)iVar14 * 0x30;
          sVar27 = *(short *)pVVar1;
          sVar5 = *(short *)(pVVar1 + 2);
          sVar52 = *(short *)(pVVar1 + 4);
          sVar55 = *(short *)(pVVar1 + 6);
          sVar56 = *(short *)(pVVar1 + 8);
          sVar57 = *(short *)(pVVar1 + 10);
          sVar58 = *(short *)(pVVar1 + 0xc);
          sVar59 = *(short *)(pVVar1 + 0xe);
          psVar2 = (short *)(puVar30 + lVar15);
          *psVar2 = sVar27;
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
          *(short *)*pauVar22 = sVar27 + *(short *)*pauVar22;
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
        puVar30 = puVar30 + 0x30;
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
      if (lVar28 == 0x180) break;
      lVar28 = 0x180;
    }
    lVar26 = lVar26 + 0x60;
    piVar18 = piVar18 + 0x10;
    if (bVar36) break;
    bVar36 = true;
  }
  local_40 = lVar20;
  if ((CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
       ::modifierTables == '\0') && (iVar14 = __cxa_guard_acquire(), iVar14 != 0)) {
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._0_8_ = __LC81;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._8_8_ = _UNK_0010b3f8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._16_8_ = __LC82;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._24_8_ = _UNK_0010b408;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._32_8_ = __LC76;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._40_8_ = _UNK_0010b2f8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._48_8_ = __LC83;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._56_8_ = _UNK_0010b348;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._64_8_ = __LC84;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._72_8_ = _UNK_0010b418;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._80_8_ = __LC85;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._88_8_ = _UNK_0010b238;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._96_8_ = __LC86;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._104_8_ = _UNK_0010b428;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._112_8_ = __LC87;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._120_8_ = _UNK_0010b2b8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._128_8_ = __LC88;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._136_8_ = _UNK_0010b438;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._144_8_ = __LC89;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._152_8_ = _UNK_0010b448;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._160_8_ = __LC90;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._168_8_ = _UNK_0010b458;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._176_8_ = __LC91;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._184_8_ = _UNK_0010b468;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._192_8_ = __LC92;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._200_8_ = _UNK_0010b478;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._208_8_ = __LC93;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._216_8_ = _UNK_0010b488;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._224_8_ = __LC94;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._232_8_ = _UNK_0010b498;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._240_8_ = __LC95;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._248_8_ = _UNK_0010b4a8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._256_8_ = __LC96;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._264_8_ = _UNK_0010b4b8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._272_8_ = __LC97;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._280_8_ = _UNK_0010b4c8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._288_8_ = __LC98;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._296_8_ = _UNK_0010b4d8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._304_8_ = __LC99;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._312_8_ = _UNK_0010b4e8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._320_8_ = __LC100;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._328_8_ = _UNK_0010b4f8;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._336_8_ = __LC101;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._344_8_ = _UNK_0010b508;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._352_8_ = __LC102;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._360_8_ = _UNK_0010b518;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._368_8_ = __LC103;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._376_8_ = _UNK_0010b528;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._384_8_ = __LC104;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._392_8_ = _UNK_0010b538;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._400_8_ = __LC105;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._408_8_ = _UNK_0010b548;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._416_8_ = __LC106;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._424_8_ = _UNK_0010b558;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._432_8_ = __LC107;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._440_8_ = _UNK_0010b568;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._448_8_ = __LC108;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._456_8_ = _UNK_0010b578;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._464_8_ = __LC109;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._472_8_ = _UNK_0010b588;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._480_8_ = __LC110;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._488_8_ = _UNK_0010b598;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._496_8_ = __LC111;
    CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
    ::modifierTables._504_8_ = _UNK_0010b5a8;
    __cxa_guard_release();
  }
  local_1a78 = 0;
  uVar13 = *(uint *)param_6;
  uVar23 = 0;
LAB_001072b6:
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
  uVar33 = (uint)param_7;
LAB_00107361:
  local_1a90 = 0;
  lVar20 = local_1a78;
  puVar30 = local_1818 + local_1a78;
LAB_00107381:
  local_1ae0 = 0;
  puVar31 = Tables::ETC1::g_potentialOffsets4;
  sVar27 = 0x39;
  do {
    uVar21 = (uint)sVar27;
    if (0 < sVar27) {
      lVar26 = 0;
      do {
        sVar5 = *(short *)((long)puVar31 + lVar26 + 2);
        lVar16 = 0;
        if ((uVar13 & 0x400) == 0) {
          do {
            psVar2 = (short *)(puVar30 + lVar16);
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
                 (ushort)(_UNK_0010b332 < sVar52) * _UNK_0010b332 |
                 (ushort)(_UNK_0010b332 >= sVar52) * sVar52;
            auVar38._4_2_ =
                 (ushort)(_UNK_0010b334 < sVar56) * _UNK_0010b334 |
                 (ushort)(_UNK_0010b334 >= sVar56) * sVar56;
            auVar38._6_2_ =
                 (ushort)(_UNK_0010b336 < sVar57) * _UNK_0010b336 |
                 (ushort)(_UNK_0010b336 >= sVar57) * sVar57;
            auVar38._8_2_ =
                 (ushort)(_UNK_0010b338 < sVar58) * _UNK_0010b338 |
                 (ushort)(_UNK_0010b338 >= sVar58) * sVar58;
            auVar38._10_2_ =
                 (ushort)(_UNK_0010b33a < sVar59) * _UNK_0010b33a |
                 (ushort)(_UNK_0010b33a >= sVar59) * sVar59;
            auVar38._12_2_ =
                 (ushort)(_UNK_0010b33c < sVar60) * _UNK_0010b33c |
                 (ushort)(_UNK_0010b33c >= sVar60) * sVar60;
            auVar38._14_2_ =
                 (ushort)(_UNK_0010b33e < sVar61) * _UNK_0010b33e |
                 (ushort)(_UNK_0010b33e >= sVar61) * sVar61;
            auVar53 = psllw(auVar38,5);
            sVar52 = auVar53._0_2_ + (auVar38._0_2_ >> 3);
            sVar55 = auVar53._2_2_ + (auVar38._2_2_ >> 3);
            sVar56 = auVar53._4_2_ + (auVar38._4_2_ >> 3);
            sVar57 = auVar53._6_2_ + (auVar38._6_2_ >> 3);
            sVar58 = auVar53._8_2_ + (auVar38._8_2_ >> 3);
            sVar59 = auVar53._10_2_ + (auVar38._10_2_ >> 3);
            sVar60 = auVar53._12_2_ + (auVar38._12_2_ >> 3);
            sVar61 = auVar53._14_2_ + (auVar38._14_2_ >> 3);
            if (uVar33 == 1) {
              uVar37 = (ushort)((__LC70 - auVar38._0_2_) + sVar52) >> 0xb;
              uVar42 = (ushort)((_UNK_0010b382 - auVar38._2_2_) + sVar55) >> 0xb;
              uVar43 = (ushort)((_UNK_0010b384 - auVar38._4_2_) + sVar56) >> 0xb;
              uVar44 = (ushort)((_UNK_0010b386 - auVar38._6_2_) + sVar57) >> 0xb;
              uVar45 = (ushort)((_UNK_0010b388 - auVar38._8_2_) + sVar58) >> 0xb;
              uVar46 = (ushort)((_UNK_0010b38a - auVar38._10_2_) + sVar59) >> 0xb;
              uVar47 = (ushort)((_UNK_0010b38c - auVar38._12_2_) + sVar60) >> 0xb;
              uVar48 = (ushort)((_UNK_0010b38e - auVar38._14_2_) + sVar61) >> 0xb;
            }
            else {
              auVar38 = psllw(auVar38,1);
              uVar37 = (ushort)((__LC113 - auVar38._0_2_) + sVar52) >> 0xc;
              uVar42 = (ushort)((_UNK_0010b5b2 - auVar38._2_2_) + sVar55) >> 0xc;
              uVar43 = (ushort)((_UNK_0010b5b4 - auVar38._4_2_) + sVar56) >> 0xc;
              uVar44 = (ushort)((_UNK_0010b5b6 - auVar38._6_2_) + sVar57) >> 0xc;
              uVar45 = (ushort)((_UNK_0010b5b8 - auVar38._8_2_) + sVar58) >> 0xc;
              uVar46 = (ushort)((_UNK_0010b5ba - auVar38._10_2_) + sVar59) >> 0xc;
              uVar47 = (ushort)((_UNK_0010b5bc - auVar38._12_2_) + sVar60) >> 0xc;
              uVar48 = (ushort)((_UNK_0010b5be - auVar38._14_2_) + sVar61) >> 0xc;
            }
            *(ushort *)(local_18b8 + lVar16) = uVar37;
            *(ushort *)(local_18b8 + lVar16 + 2) = uVar42;
            *(ushort *)(local_18b8 + lVar16 + 4) = uVar43;
            *(ushort *)(local_18b8 + lVar16 + 6) = uVar44;
            *(ushort *)(local_18b8 + lVar16 + 8) = uVar45;
            *(ushort *)(local_18b8 + lVar16 + 10) = uVar46;
            *(ushort *)(local_18b8 + lVar16 + 0xc) = uVar47;
            *(ushort *)(local_18b8 + lVar16 + 0xe) = uVar48;
            lVar16 = lVar16 + 0x10;
          } while (lVar16 != 0x30);
        }
        else {
          do {
            psVar2 = (short *)(puVar30 + lVar16);
            sVar61 = (ushort)(-1 < (short)(*psVar2 + sVar5)) * (*psVar2 + sVar5);
            sVar60 = (ushort)(-1 < (short)(psVar2[1] + sVar5)) * (psVar2[1] + sVar5);
            sVar59 = (ushort)(-1 < (short)(psVar2[2] + sVar5)) * (psVar2[2] + sVar5);
            sVar58 = (ushort)(-1 < (short)(psVar2[3] + sVar5)) * (psVar2[3] + sVar5);
            sVar57 = (ushort)(-1 < (short)(psVar2[4] + sVar5)) * (psVar2[4] + sVar5);
            sVar56 = (ushort)(-1 < (short)(psVar2[5] + sVar5)) * (psVar2[5] + sVar5);
            sVar55 = (ushort)(-1 < (short)(psVar2[6] + sVar5)) * (psVar2[6] + sVar5);
            sVar52 = (ushort)(-1 < (short)(psVar2[7] + sVar5)) * (psVar2[7] + sVar5);
            *(ushort *)((VInt16 *)&local_1888 + lVar16) =
                 (ushort)(__LC112 < sVar61) * __LC112 | (ushort)(__LC112 >= sVar61) * sVar61;
            *(ushort *)(auStack_1884 + lVar16 + -2) =
                 (ushort)(_UNK_0010b332 < sVar60) * _UNK_0010b332 |
                 (ushort)(_UNK_0010b332 >= sVar60) * sVar60;
            *(ushort *)(auStack_1884 + lVar16) =
                 (ushort)(_UNK_0010b334 < sVar59) * _UNK_0010b334 |
                 (ushort)(_UNK_0010b334 >= sVar59) * sVar59;
            *(ushort *)(auStack_1884 + lVar16 + 2) =
                 (ushort)(_UNK_0010b336 < sVar58) * _UNK_0010b336 |
                 (ushort)(_UNK_0010b336 >= sVar58) * sVar58;
            *(ushort *)(auStack_1884 + lVar16 + 4) =
                 (ushort)(_UNK_0010b338 < sVar57) * _UNK_0010b338 |
                 (ushort)(_UNK_0010b338 >= sVar57) * sVar57;
            *(ushort *)(auStack_1884 + lVar16 + 6) =
                 (ushort)(_UNK_0010b33a < sVar56) * _UNK_0010b33a |
                 (ushort)(_UNK_0010b33a >= sVar56) * sVar56;
            *(ushort *)(auStack_1884 + lVar16 + 8) =
                 (ushort)(_UNK_0010b33c < sVar55) * _UNK_0010b33c |
                 (ushort)(_UNK_0010b33c >= sVar55) * sVar55;
            *(ushort *)(auStack_1884 + lVar16 + 10) =
                 (ushort)(_UNK_0010b33e < sVar52) * _UNK_0010b33e |
                 (ushort)(_UNK_0010b33e >= sVar52) * sVar52;
            lVar16 = lVar16 + 0x10;
          } while (lVar16 != 0x30);
          if ((*(uint *)param_6 & 0x800) == 0) {
            ResolveHalfBlockFakeBT709RoundingFast(local_18b8,(VInt16 *)&local_1888,SUB41(uVar33,0));
          }
          else {
            ResolveHalfBlockFakeBT709RoundingAccurate
                      (local_18b8,(VInt16 *)&local_1888,SUB41(uVar33,0));
          }
        }
        auVar38 = psllw(local_1898,10);
        auVar53 = psllw(local_18a8,5);
        *(undefined1 (*) [16])((Int16CompFlag *)local_1758 + lVar26 * 8) =
             auVar38 | auVar53 | _local_18b8;
        lVar26 = lVar26 + 2;
      } while ((ulong)uVar21 * 2 != lVar26);
    }
    lVar26 = 0;
    puVar31 = (undefined1 *)((long)puVar31 + ((long)sVar27 + 1) * 2);
    pIVar29 = (Int16CompFlag *)(local_1748 + (uVar21 - 2));
    do {
      pIVar19 = (Int16CompFlag *)local_1758 + lVar26;
      uVar42 = 1;
      uVar37 = 1;
      if (1 < (int)uVar21) {
        do {
          uVar42 = uVar37;
          if (*(short *)(local_1748[(long)(int)(uVar42 - 1) + -1] + lVar26) !=
              *(short *)(pIVar19 + 0x10)) {
            *(short *)(local_1748[(int)(uVar42 - 1)] + lVar26) = *(short *)(pIVar19 + 0x10);
            uVar42 = uVar42 + 1;
          }
          pIVar19 = pIVar19 + 0x10;
          uVar37 = uVar42;
        } while (pIVar29 != pIVar19);
      }
      *(ushort *)((long)local_19b8 + lVar26) = uVar42;
      lVar26 = lVar26 + 2;
      pIVar29 = pIVar29 + 2;
    } while (lVar26 != 0x10);
    uVar21 = (uint)local_19b8[0];
    puVar17 = local_19b8 + 1;
    do {
      if (uVar21 < *puVar17) {
        uVar21 = (uint)*puVar17;
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != (ushort *)local_19a8);
    lVar26 = 0;
    do {
      uVar37 = local_19b8[lVar26];
      uVar6 = *(undefined2 *)((Int16CompFlag *)local_1758 + lVar26 * 2);
      if (uVar37 < uVar21) {
        pIVar29 = (Int16CompFlag *)local_1758 + (lVar26 + (ulong)uVar37 * 8) * 2;
        do {
          *(undefined2 *)pIVar29 = uVar6;
          pIVar29 = pIVar29 + 0x10;
        } while (pIVar29 !=
                 (Int16CompFlag *)local_1758 +
                 (lVar26 + ((ulong)(uVar21 - uVar37) + (ulong)uVar37) * 8) * 2);
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != 8);
    if (uVar21 != 0) {
      lVar26 = 0;
      do {
        while( true ) {
          local_1998 = *(undefined8 *)((Int16CompFlag *)local_1758 + lVar26 * 0x10);
          uStack_1990 = *(undefined8 *)(local_1748[lVar26 + -1] + 8);
          TestHalfBlock(&local_1888,local_19a8,local_1248 + lVar20 * 8,local_c48 + lVar20 * 2,
                        CompressETC1BlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&,bool)
                        ::modifierTables + local_1ae0 * 0x40,uVar33,param_6);
          if (uVar33 == 0) break;
          lVar16 = 0;
          sVar59 = (short)lVar26;
          uVar37 = -(ushort)(sVar59 < (short)local_19b8[1]) & _UNK_0010b272;
          uVar42 = -(ushort)(sVar59 < (short)local_19b8[2]) & _UNK_0010b274;
          uVar43 = -(ushort)(sVar59 < (short)local_19b8[3]) & _UNK_0010b276;
          uVar44 = -(ushort)(sVar59 < sStack_19b0) & _UNK_0010b278;
          uVar45 = -(ushort)(sVar59 < sStack_19ae) & _UNK_0010b27a;
          uVar46 = -(ushort)(sVar59 < sStack_19ac) & _UNK_0010b27c;
          uVar47 = -(ushort)(sVar59 < sStack_19aa) & _UNK_0010b27e;
          pDVar3 = param_5 + local_1a90;
          sVar27 = *(short *)(pDVar3 + 2);
          sVar5 = *(short *)(pDVar3 + 4);
          sVar52 = *(short *)(pDVar3 + 6);
          sVar55 = *(short *)(pDVar3 + 8);
          sVar56 = *(short *)(pDVar3 + 10);
          sVar57 = *(short *)(pDVar3 + 0xc);
          sVar58 = *(short *)(pDVar3 + 0xe);
          pDVar4 = param_5 + local_1a90;
          *(ushort *)pDVar4 = (-(ushort)(sVar59 < (short)local_19b8[0]) & __LC30) + *(short *)pDVar3
          ;
          *(ushort *)(pDVar4 + 2) = uVar37 + sVar27;
          *(ushort *)(pDVar4 + 4) = uVar42 + sVar5;
          *(ushort *)(pDVar4 + 6) = uVar43 + sVar52;
          *(ushort *)(pDVar4 + 8) = uVar44 + sVar55;
          *(ushort *)(pDVar4 + 10) = uVar45 + sVar56;
          *(ushort *)(pDVar4 + 0xc) = uVar46 + sVar57;
          *(ushort *)(pDVar4 + 0xe) = uVar47 + sVar58;
          do {
            lVar28 = (ulong)local_1988[lVar16] + local_1a90 * 0x27;
            pDVar3 = param_5 + lVar16 * 2 + (lVar28 + 0x9c2) * 0x10;
            uVar37 = *(ushort *)((long)local_19a8 + lVar16 * 2);
            *(undefined4 *)(param_5 + (lVar28 + 1) * 0x20 + lVar16 * 4) =
                 *(undefined4 *)
                  (auStack_1884 +
                  (long)((int)(uint)lVar16 >> 2) * 0x10 + (ulong)((uint)lVar16 & 3) * 4 + -4);
            *(ushort *)pDVar3 = uVar37;
            uVar37 = *(ushort *)((long)&local_1998 + lVar16 * 2);
            lVar16 = lVar16 + 1;
            *(ushort *)(pDVar3 + 0x9c00) = (ushort)local_1ae0;
            *(ushort *)(pDVar3 + 0x4e00) = uVar37;
          } while (lVar16 != 8);
LAB_001077b0:
          lVar26 = lVar26 + 1;
          if ((int)uVar21 == lVar26) goto LAB_001077d6;
        }
        auVar41._4_12_ = auStack_1884;
        auVar41._0_4_ = local_1888;
        auVar38 = *(undefined1 (*) [16])(local_1858 + local_1a90 * 2);
        auVar53 = *(undefined1 (*) [16])(local_1848 + local_1a90 * 2);
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
           ) goto LAB_001077b0;
        auVar38 = minps(auVar41,auVar38);
        auVar53 = minps(local_1878,auVar53);
        lVar26 = lVar26 + 1;
        *(undefined1 (*) [16])(local_1858 + local_1a90 * 2) = auVar38;
        auVar38 = *(undefined1 (*) [16])(local_1918 + local_1a90);
        *(undefined1 (*) [16])(local_1848 + local_1a90 * 2) = auVar53;
        *(undefined1 (*) [16])(local_1918 + local_1a90) = local_19a8 & auVar39 | ~auVar39 & auVar38;
        auVar53._8_8_ = uStack_1990;
        auVar53._0_8_ = local_1998;
        *(undefined1 (*) [16])(local_18f8 + local_1a90) =
             auVar53 & auVar39 | ~auVar39 & *(undefined1 (*) [16])(local_18f8 + local_1a90);
        auVar49._0_4_ = CONCAT22((ushort)local_1ae0,(ushort)local_1ae0);
        auVar49._4_4_ = auVar49._0_4_;
        auVar49._8_4_ = auVar49._0_4_;
        auVar49._12_4_ = auVar49._0_4_;
        *(undefined1 (*) [16])(local_18d8 + local_1a90) =
             auVar39 & auVar49 | ~auVar39 & *(undefined1 (*) [16])(local_18d8 + local_1a90);
      } while ((int)uVar21 != lVar26);
    }
LAB_001077d6:
    local_1ae0 = local_1ae0 + 1;
    if (local_1ae0 == 8) break;
    sVar27 = *(short *)puVar31;
  } while( true );
  local_1a90 = local_1a90 + 0x10;
  puVar30 = puVar30 + 0x30;
  lVar20 = lVar20 + 0x30;
  if (local_1a90 == 0x20) goto code_r0x001079ab;
  goto LAB_00107381;
code_r0x001079ab:
  if (uVar33 != 0) goto code_r0x001079bc;
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
    lVar20 = 0;
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
      *(undefined1 (*) [16])(local_1978 + lVar20) =
           *(undefined1 (*) [16])(local_18f8 + lVar20) & auVar41 |
           ~auVar41 & *(undefined1 (*) [16])(local_1978 + lVar20);
      *(undefined1 (*) [16])(local_1958 + lVar20) =
           *(undefined1 (*) [16])(local_1918 + lVar20) & auVar41 |
           ~auVar41 & *(undefined1 (*) [16])(local_1958 + lVar20);
      *(undefined1 (*) [16])(local_1938 + lVar20) =
           *(undefined1 (*) [16])(local_18d8 + lVar20) & auVar41 |
           ~auVar41 & *(undefined1 (*) [16])(local_1938 + lVar20);
      lVar20 = lVar20 + 0x10;
    } while (lVar20 != 0x20);
  }
  uVar33 = 1;
  goto LAB_00107361;
code_r0x001079bc:
  local_1758 = (undefined1  [16])0x0;
  local_1748[0] = (undefined1  [16])0x0;
  FindBestDifferentialCombination
            (uVar23,1,(Int16CompFlag *)local_1758,local_19c8,param_1,local_19e8,(VInt16 *)local_19d8
             ,local_1978,local_1958,local_1938,param_5);
  local_1a78 = local_1a78 + 0x60;
  bVar36 = uVar23 != 0;
  uVar23 = uVar33;
  if (bVar36) {
    lVar20 = 0;
    do {
      auVar38 = _local_1858;
      if (*(short *)(local_19c8 + lVar20) != 0) {
        uVar13 = CONCAT22(0,*(ushort *)(local_1938 + lVar20));
        local_1858._0_4_ = uVar13;
        _fStack_1850 = auVar38._8_8_;
        local_1858._4_2_ = *(undefined2 *)(local_1928 + lVar20);
        local_1858._6_2_ = 0;
        local_1888 = (float)CONCAT22(*(undefined2 *)(local_1948 + lVar20),
                                     *(undefined2 *)(local_1958 + lVar20));
        uVar37 = *(ushort *)(local_1968 + lVar20);
        uVar42 = *(ushort *)(local_1978 + lVar20);
        local_1758._8_8_ =
             (ulong)(CONCAT24(uVar37,(int)(uint)uVar42 >> 10) & 0xffff0000001f) & 0x1fffffffff;
        local_1758._0_8_ = CONCAT44((int)(uint)uVar42 >> 5,(uint)uVar42) & 0x1f0000001f;
        local_1748[0]._0_8_ =
             CONCAT44((int)(uint)uVar37 >> 10,(int)(uint)uVar37 >> 5) & 0x1f0000001f;
        EmitETC1Block(param_2,(uint)*(ushort *)(local_19e8 + lVar20),
                      (uint)*(ushort *)((VInt16 *)local_19d8 + lVar20),(int *)local_1758,
                      (int *)local_1858,(ushort *)&local_1888,false);
      }
      lVar20 = lVar20 + 2;
      param_2 = param_2 + 8;
    } while (lVar20 != 0x10);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_001072b6;
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
  undefined2 uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  uint *puVar12;
  ushort *puVar13;
  uint *puVar14;
  ushort *puVar15;
  uint *puVar16;
  ushort *puVar17;
  undefined1 auVar18 [14];
  undefined6 uVar19;
  uint *puVar20;
  uint *puVar21;
  ushort *puVar22;
  undefined2 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined1 (*pauVar26) [16];
  Float *pFVar27;
  long lVar28;
  short *psVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined1 (*pauVar32) [16];
  short *psVar33;
  int *piVar34;
  undefined8 *puVar35;
  long lVar36;
  uint *puVar37;
  int *piVar38;
  VInt16<2> *pVVar39;
  long lVar40;
  int iVar41;
  long lVar42;
  undefined8 *puVar43;
  long lVar44;
  uint uVar45;
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
  lVar44 = 0;
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
    lVar42 = 0;
    piVar38 = &g_flipTables + lVar44 * 8;
    puVar46 = puVar35;
    do {
      puVar24 = (undefined8 *)((long)local_c48 + lVar40 + lVar28);
      puVar30 = puVar46 + -0x10;
      piVar34 = piVar38;
      puVar43 = (undefined8 *)((long)local_1248 + lVar42 + lVar25);
      do {
        lVar36 = (long)*piVar34;
        puVar31 = puVar30 + 2;
        piVar34 = piVar34 + 1;
        pFVar27 = param_4 + lVar36 * 0x60;
        pVVar39 = param_3 + lVar36 * 0x30;
        uVar50 = *(undefined8 *)(pVVar39 + 8);
        *puVar43 = *(undefined8 *)pVVar39;
        puVar43[1] = uVar50;
        uVar50 = *(undefined8 *)(pVVar39 + 0x18);
        puVar43[2] = *(undefined8 *)(pVVar39 + 0x10);
        puVar43[3] = uVar50;
        uVar50 = *(undefined8 *)(pVVar39 + 0x28);
        puVar43[4] = *(undefined8 *)(pVVar39 + 0x20);
        puVar43[5] = uVar50;
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
        puVar43 = puVar43 + 6;
      } while (puVar46 != puVar31);
      lVar42 = lVar42 + 0x180;
      piVar38 = piVar38 + 8;
      puVar46 = puVar46 + 0x10;
      lVar40 = lVar40 + 0x300;
    } while (lVar42 != 0x300);
    lVar44 = lVar44 + 2;
    puVar35 = puVar35 + 0x20;
    lVar25 = lVar25 + 0x300;
    lVar28 = lVar28 + 0x600;
  } while (lVar44 != 4);
  if ((CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
       ::modifiers == '\0') &&
     (iVar41 = __cxa_guard_acquire(&CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
                                    ::modifiers), iVar41 != 0)) {
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._0_8_ = __LC83;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._8_8_ = _UNK_0010b348;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._16_8_ = __LC87;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._24_8_ = _UNK_0010b2b8;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._32_8_ = __LC91;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._40_8_ = _UNK_0010b468;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._48_8_ = __LC95;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._56_8_ = _UNK_0010b4a8;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._64_8_ = __LC99;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._72_8_ = _UNK_0010b4e8;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._80_8_ = __LC103;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._88_8_ = _UNK_0010b528;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._96_8_ = __LC107;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._104_8_ = _UNK_0010b568;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._112_8_ = __LC111;
    CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
    ::modifiers._120_8_ = _UNK_0010b5a8;
    __cxa_guard_release(&CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
                         ::modifiers);
  }
  local_1748 = 0;
  local_17b8 = local_1448;
  lVar44 = local_1748;
  do {
    local_1748 = lVar44;
    uStack_15bc = 0xffffffff;
    local_15c8 = 0xffffffff;
    uStack_15c4 = 0xffffffff;
    uStack_15c0 = 0xffffffff;
    puVar21 = local_17b8 + 0x20;
    puVar20 = local_17b8;
    do {
      local_15c8 = local_15c8 & *puVar20;
      uStack_15c4 = uStack_15c4 & puVar20[1];
      uStack_15c0 = uStack_15c0 & puVar20[2];
      uStack_15bc = uStack_15bc & puVar20[3];
      puVar20 = puVar20 + 4;
    } while (puVar21 != puVar20);
    puVar37 = local_17b8 + 0x40;
    puVar20 = puVar21;
    do {
      puVar20 = puVar20 + 4;
    } while (puVar37 != puVar20);
    lVar44 = 0;
    *(undefined1 (*) [16])(param_6 + 0x10) = (undefined1  [16])0x0;
    local_15b8 = (undefined1  [16])0x0;
    lVar25 = local_1748 << 8;
    *(undefined1 (*) [16])param_6 = (undefined1  [16])0x0;
    while( true ) {
      puVar20 = puVar21;
      puVar21 = local_17b8;
      auVar67 = (undefined1  [16])0x0;
      do {
        uVar61 = *puVar21;
        puVar22 = (ushort *)((long)puVar21 + 2);
        puVar12 = puVar21 + 1;
        puVar13 = (ushort *)((long)puVar21 + 6);
        puVar14 = puVar21 + 2;
        puVar15 = (ushort *)((long)puVar21 + 10);
        puVar16 = puVar21 + 3;
        puVar17 = (ushort *)((long)puVar21 + 0xe);
        puVar21 = puVar21 + 4;
        uVar48 = (__LC30 & (ushort)uVar61) + auVar67._0_2_;
        sVar51 = (_UNK_0010b272 & *puVar22) + auVar67._2_2_;
        sVar52 = (_UNK_0010b274 & (ushort)*puVar12) + auVar67._4_2_;
        sVar54 = (_UNK_0010b276 & *puVar13) + auVar67._6_2_;
        uVar50 = CONCAT26(sVar54,CONCAT24(sVar52,CONCAT22(sVar51,uVar48)));
        uVar56 = (_UNK_0010b278 & (ushort)*puVar14) + auVar67._8_2_;
        auVar64._0_10_ = CONCAT28(uVar56,uVar50);
        auVar64._10_2_ = (_UNK_0010b27a & *puVar15) + auVar67._10_2_;
        auVar64._12_2_ = (_UNK_0010b27c & (ushort)*puVar16) + auVar67._12_2_;
        auVar64._14_2_ = (_UNK_0010b27e & *puVar17) + auVar67._14_2_;
        auVar67 = auVar64;
      } while (puVar20 != puVar21);
      auVar66._0_4_ = CONCAT22(0,uVar56);
      auVar66._4_2_ = auVar64._10_2_;
      auVar66._6_2_ = 0;
      auVar66._8_2_ = auVar64._12_2_;
      auVar66._10_2_ = 0;
      auVar66._12_2_ = auVar64._14_2_;
      auVar66._14_2_ = 0;
      auVar5._10_2_ = 0;
      auVar5._0_10_ = auVar64._0_10_;
      auVar5._12_2_ = sVar54;
      auVar6._8_2_ = sVar52;
      auVar6._0_8_ = uVar50;
      auVar6._10_4_ = auVar5._10_4_;
      auVar18._6_8_ = 0;
      auVar18._0_6_ = auVar6._8_6_;
      auVar7._4_2_ = sVar51;
      auVar7._0_4_ = CONCAT22(sVar51,uVar48);
      auVar7._6_8_ = SUB148(auVar18 << 0x40,6);
      auVar68._4_10_ = auVar7._4_10_;
      auVar68._0_4_ = CONCAT22(0,uVar48);
      auVar68._14_2_ = 0;
      auVar67._0_2_ =
           ((short)uVar48 < (short)__LC30) * __LC30 | ((short)uVar48 >= (short)__LC30) * uVar48;
      auVar67._2_2_ =
           (sVar51 < (short)_UNK_0010b272) * _UNK_0010b272 |
           (ushort)(sVar51 >= (short)_UNK_0010b272) * sVar51;
      auVar67._4_2_ =
           (sVar52 < (short)_UNK_0010b274) * _UNK_0010b274 |
           (ushort)(sVar52 >= (short)_UNK_0010b274) * sVar52;
      auVar67._6_2_ =
           (sVar54 < (short)_UNK_0010b276) * _UNK_0010b276 |
           (ushort)(sVar54 >= (short)_UNK_0010b276) * sVar54;
      auVar67._8_2_ =
           ((short)uVar56 < (short)_UNK_0010b278) * _UNK_0010b278 |
           ((short)uVar56 >= (short)_UNK_0010b278) * uVar56;
      auVar67._10_2_ =
           ((short)auVar64._10_2_ < (short)_UNK_0010b27a) * _UNK_0010b27a |
           ((short)auVar64._10_2_ >= (short)_UNK_0010b27a) * auVar64._10_2_;
      auVar67._12_2_ =
           ((short)auVar64._12_2_ < (short)_UNK_0010b27c) * _UNK_0010b27c |
           ((short)auVar64._12_2_ >= (short)_UNK_0010b27c) * auVar64._12_2_;
      auVar67._14_2_ =
           ((short)auVar64._14_2_ < (short)_UNK_0010b27e) * _UNK_0010b27e |
           ((short)auVar64._14_2_ >= (short)_UNK_0010b27e) * auVar64._14_2_;
      local_1764 = 0;
      auVar62._0_4_ = -(uint)(CONCAT22(0,uVar48) < auVar66._0_4_);
      auVar62._4_4_ = -(uint)(auVar7._4_4_ < (uint)auVar64._10_2_);
      auVar62._8_4_ = -(uint)(auVar6._8_4_ < (int)(uint)auVar64._12_2_);
      auVar62._12_4_ = -(uint)(auVar5._10_4_ >> 0x10 < (uint)auVar64._14_2_);
      local_1678 = psllw(auVar67,8);
      auVar67 = auVar66 & auVar62 | ~auVar62 & auVar68;
      auVar63._0_4_ = -(uint)(auVar67._0_4_ < auVar67._8_4_);
      auVar63._4_4_ = -(uint)(auVar67._4_4_ < auVar67._12_4_);
      auVar63._8_4_ = -(uint)(auVar67._8_4_ < 0);
      auVar63._12_4_ = -(uint)(auVar67._12_4_ < 0);
      auVar67 = ~auVar63 & auVar67 | auVar67 >> 0x40 & auVar63;
      uVar61 = auVar67._0_4_;
      uVar45 = auVar67._4_4_;
      uVar65 = -(uint)((int)uVar61 < (int)uVar45);
      uVar61 = ~uVar65 & uVar61 | uVar45 & uVar65;
      uVar65 = 0;
      if (-1 < (int)uVar61) {
        uVar65 = uVar61;
      }
      do {
        uVar50 = local_1668._8_8_;
        uVar19 = local_1668._2_6_;
        uVar48 = local_1668[0];
        auVar67 = psllw(local_1568,10);
        auVar64 = psllw(local_1578,5);
        pauVar26 = &local_1588;
        iVar41 = -uVar65;
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
          iVar41 = iVar41 + 1;
          *pauVar32 = auVar67 | auVar64 | local_1588;
          pauVar32 = pauVar32 + 1;
          pauVar26 = &local_1588;
        } while (iVar41 <= (int)uVar65);
        lVar28 = 0;
        psVar33 = local_1548 + (ulong)(uVar65 * 2 - 1) * 8;
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
            } while (psVar29 != psVar33);
          }
          *(ushort *)((long)local_1668 + lVar28) = uVar56;
          lVar28 = lVar28 + 2;
          psVar33 = psVar33 + 1;
        } while (lVar28 != 0x10);
        uVar45 = (uint)local_1668[0];
        puVar22 = local_1668 + 1;
        do {
          if (uVar45 < *puVar22) {
            uVar45 = (uint)*puVar22;
          }
          puVar22 = puVar22 + 1;
        } while (local_1658 != puVar22);
        lVar28 = 0;
        do {
          uVar56 = local_1668[lVar28];
          uVar4 = *(undefined2 *)((long)*(undefined1 (*) [16])local_1558 + lVar28 * 2);
          if (uVar56 < uVar45) {
            puVar23 = (undefined2 *)((long)((undefined1 (*) [16])local_1558)[uVar56] + lVar28 * 2);
            do {
              *puVar23 = uVar4;
              puVar23 = puVar23 + 8;
            } while (puVar23 !=
                     (undefined2 *)
                     ((long)((undefined1 (*) [16])local_1558)
                            [(ulong)uVar56 + (ulong)(uVar45 - uVar56)] + lVar28 * 2));
          }
          lVar28 = lVar28 + 1;
        } while (lVar28 != 8);
        if (uVar45 != 0) {
          lVar28 = 0;
          do {
            local_1648 = *(undefined8 *)((undefined1 (*) [16])local_1558)[lVar28];
            uStack_1640 = (&uStack_1550)[lVar28 * 2];
            TestHalfBlockPunchthrough
                      (local_1648,
                       *(undefined8 *)
                        (CompressETC1PunchthroughBlockInternal(cvtt::ParallelMath::Float&,unsigned_char*,cvtt::ParallelMath::VInt16<2>const*[],cvtt::ParallelMath::Float_const*[],cvtt::ParallelMath::Int16CompFlag_const*,cvtt::Internal::ETCComputer::DifferentialResolveStorage&,cvtt::Options_const&)
                         ::modifiers + (long)local_1764 * 0x10),local_15a8,local_1658,
                       (long)local_1248 + lVar25 * 3,(long)local_c48 + lVar25 * 6,local_17b8,param_7
                      );
            lVar40 = 0;
            sStack_17a6 = (short)uVar19;
            sStack_17a4 = SUB62(uVar19,2);
            sStack_17a2 = SUB62(uVar19,4);
            sStack_17a0 = (short)uVar50;
            sStack_179e = SUB82(uVar50,2);
            sStack_179c = SUB82(uVar50,4);
            sStack_179a = SUB82(uVar50,6);
            sVar49 = (short)lVar28;
            uVar56 = _UNK_0010b272 & -(ushort)(sVar49 < sStack_17a6);
            uVar53 = _UNK_0010b274 & -(ushort)(sVar49 < sStack_17a4);
            uVar55 = _UNK_0010b276 & -(ushort)(sVar49 < sStack_17a2);
            uVar57 = _UNK_0010b278 & -(ushort)(sVar49 < sStack_17a0);
            uVar58 = _UNK_0010b27a & -(ushort)(sVar49 < sStack_179e);
            uVar59 = _UNK_0010b27c & -(ushort)(sVar49 < sStack_179c);
            uVar60 = _UNK_0010b27e & -(ushort)(sVar49 < sStack_179a);
            pDVar1 = param_6 + lVar44 * 0x10;
            sVar51 = *(short *)(pDVar1 + 2);
            sVar52 = *(short *)(pDVar1 + 4);
            sVar54 = *(short *)(pDVar1 + 6);
            sVar8 = *(short *)(pDVar1 + 8);
            sVar9 = *(short *)(pDVar1 + 10);
            sVar10 = *(short *)(pDVar1 + 0xc);
            sVar11 = *(short *)(pDVar1 + 0xe);
            pDVar2 = param_6 + lVar44 * 0x10;
            *(ushort *)pDVar2 = (__LC30 & -(ushort)(sVar49 < (short)uVar48)) + *(short *)pDVar1;
            *(ushort *)(pDVar2 + 2) = uVar56 + sVar51;
            *(ushort *)(pDVar2 + 4) = uVar53 + sVar52;
            *(ushort *)(pDVar2 + 6) = uVar55 + sVar54;
            *(ushort *)(pDVar2 + 8) = uVar57 + sVar8;
            *(ushort *)(pDVar2 + 10) = uVar58 + sVar9;
            *(ushort *)(pDVar2 + 0xc) = uVar59 + sVar10;
            *(ushort *)(pDVar2 + 0xe) = uVar60 + sVar11;
            do {
              lVar42 = (ulong)*(ushort *)(local_1638 + lVar40 * 2) + (ulong)(-(int)lVar44 & 0x270);
              pDVar1 = param_6 + lVar40 * 2 + (lVar42 + 0x9c2) * 0x10;
              uVar56 = local_1658[lVar40];
              *(undefined4 *)(param_6 + (lVar42 + 1) * 0x20 + lVar40 * 4) =
                   *(undefined4 *)
                    (local_15a8 + (ulong)((uint)lVar40 & 3) * 2 + (long)((int)(uint)lVar40 >> 2) * 8
                    );
              *(ushort *)pDVar1 = uVar56;
              uVar56 = *(ushort *)((long)&local_1648 + lVar40 * 2);
              lVar40 = lVar40 + 1;
              *(ushort *)(pDVar1 + 0x9c00) = (ushort)local_1764;
              *(ushort *)(pDVar1 + 0x4e00) = uVar56;
            } while (lVar40 != 8);
            lVar28 = lVar28 + 1;
          } while (lVar28 != (int)uVar45);
        }
        local_1764 = local_1764 + 1;
      } while (local_1764 != 8);
      lVar25 = lVar25 + 0x80;
      if (lVar44 != 0) break;
      lVar44 = 1;
      puVar21 = puVar20 + 0x20;
      local_17b8 = puVar20;
    }
    FindBestDifferentialCombination
              ((int)local_1748,1,(Int16CompFlag *)&local_15c8,local_1688,param_1,local_1698,
               local_1638,local_1628,local_1608,local_15e8,param_6);
    local_17b8 = puVar37;
  } while (local_1748 == 0);
  lVar44 = 0;
  do {
    while (*(short *)(local_1688 + lVar44) == 0) {
      lVar44 = lVar44 + 2;
      param_2 = param_2 + 8;
      if (lVar44 == 0x10) goto LAB_0010896b;
    }
    pauVar26 = (undefined1 (*) [16])local_1558;
    lVar25 = lVar44;
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
    pVVar3 = local_1698 + lVar44;
    lVar44 = lVar44 + 2;
    EmitETC1Block(param_2,(uint)*(ushort *)pVVar3,1,local_1558,(int *)local_1588,local_15a8,true);
    param_2 = param_2 + 8;
  } while (lVar44 != 0x10);
LAB_0010896b:
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
    sVar91 = auVar94._2_2_ - (*(ushort *)(pVVar52 + 2) & _UNK_0010b272);
    sVar92 = auVar94._4_2_ - (*(ushort *)(pVVar52 + 4) & _UNK_0010b274);
    sVar93 = auVar94._6_2_ - (*(ushort *)(pVVar52 + 6) & _UNK_0010b276);
    uVar84 = CONCAT26(sVar93,CONCAT24(sVar92,CONCAT22(sVar91,uVar63)));
    uVar64 = auVar94._8_2_ - (*(ushort *)(pVVar52 + 8) & _UNK_0010b278);
    auVar87._0_10_ = CONCAT28(uVar64,uVar84);
    auVar87._10_2_ = auVar94._10_2_ - (*(ushort *)(pVVar52 + 10) & _UNK_0010b27a);
    auVar87._12_2_ = auVar94._12_2_ - (*(ushort *)(pVVar52 + 0xc) & _UNK_0010b27c);
    auVar87._14_2_ = auVar94._14_2_ - (*(ushort *)(pVVar52 + 0xe) & _UNK_0010b27e);
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
    if (local_12e8 == 0) goto LAB_001091e1;
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
    if (local_12e8 == 0) goto LAB_001091e1;
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
LAB_001091e1:
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
                    /* WARNING: Could not recover jumptable at 0x00109609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(*(void **)(param_1 + 0x18fe0),param_1,0x18ff0);
  return;
}



/* cvtt::Internal::ETCComputer::ReleaseETC2Data(cvtt::ETC2CompressionData*, void (*)(void*, void*,
   unsigned long)) */

void cvtt::Internal::ETCComputer::ReleaseETC2Data
               (ETC2CompressionData *param_1,_func_void_void_ptr_void_ptr_ulong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00109629. Too many branches */
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


