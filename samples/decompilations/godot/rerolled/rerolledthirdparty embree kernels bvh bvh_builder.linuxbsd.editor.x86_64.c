/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<embree::PrimRef*, long, embree::PrimRef,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::PrimRef*, long, long, embree::PrimRef,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__adjust_heap<embree::PrimRef*,long,embree::PrimRef,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  lVar8 = (long)(param_3 - 1) / 2;
  lVar4 = param_2;
  if (param_2 < lVar8) {
    do {
      lVar6 = (lVar4 + 1) * 2;
      lVar2 = (lVar4 + 1) * 0x40;
      lVar7 = param_1 + -0x20 + lVar2;
      puVar3 = (undefined8 *)(lVar2 + param_1);
      if (CONCAT44(*(undefined4 *)((long)puVar3 + 0x1c),*(undefined4 *)((long)puVar3 + 0xc)) <
          CONCAT44(*(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0xc))) {
        lVar6 = lVar6 + -1;
        puVar5 = (undefined8 *)(lVar4 * 0x20 + param_1);
        puVar3 = (undefined8 *)(lVar6 * 0x20 + param_1);
        uVar1 = puVar3[1];
        *puVar5 = *puVar3;
        puVar5[1] = uVar1;
        uVar1 = puVar3[3];
        puVar5[2] = puVar3[2];
        puVar5[3] = uVar1;
        lVar4 = lVar6;
      }
      else {
        uVar1 = puVar3[1];
        puVar5 = (undefined8 *)(lVar4 * 0x20 + param_1);
        *puVar5 = *puVar3;
        puVar5[1] = uVar1;
        uVar1 = puVar3[3];
        puVar5[2] = puVar3[2];
        puVar5[3] = uVar1;
        lVar4 = lVar6;
      }
    } while (lVar4 < lVar8);
    if ((param_3 & 1) == 0) goto LAB_00100178;
  }
  else {
    puVar3 = (undefined8 *)(param_2 * 0x20 + param_1);
    if ((param_3 & 1) != 0) {
      uVar13 = *param_4;
      uVar14 = param_4[1];
      uVar15 = param_4[2];
      uVar16 = param_4[3];
      uVar9 = param_4[4];
      uVar10 = param_4[5];
      uVar11 = param_4[6];
      uVar12 = param_4[7];
      goto LAB_00100153;
    }
LAB_00100178:
    if ((long)(param_3 - 2) / 2 == lVar4) {
      lVar8 = lVar4 + 1;
      lVar4 = lVar4 + lVar8;
      puVar5 = (undefined8 *)(param_1 + -0x20 + lVar8 * 0x40);
      uVar1 = puVar5[1];
      *puVar3 = *puVar5;
      puVar3[1] = uVar1;
      uVar1 = puVar5[3];
      puVar3[2] = puVar5[2];
      puVar3[3] = uVar1;
      puVar3 = (undefined8 *)(lVar4 * 0x20 + param_1);
    }
  }
  uVar13 = *param_4;
  uVar14 = param_4[1];
  uVar15 = param_4[2];
  uVar16 = param_4[3];
  uVar9 = param_4[4];
  uVar10 = param_4[5];
  uVar11 = param_4[6];
  uVar12 = param_4[7];
  lVar8 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  if (param_2 < lVar4) {
    while( true ) {
      lVar7 = lVar8 >> 1;
      puVar3 = (undefined8 *)(param_1 + lVar4 * 0x20);
      puVar5 = (undefined8 *)(lVar7 * 0x20 + param_1);
      if (CONCAT44(uVar12,uVar16) <=
          CONCAT44(*(undefined4 *)((long)puVar5 + 0x1c),*(undefined4 *)((long)puVar5 + 0xc))) break;
      uVar1 = puVar5[1];
      *puVar3 = *puVar5;
      puVar3[1] = uVar1;
      uVar1 = puVar5[3];
      puVar3[2] = puVar5[2];
      puVar3[3] = uVar1;
      lVar8 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
      lVar4 = lVar7;
      if (lVar7 <= param_2) {
        *(undefined4 *)puVar5 = uVar13;
        *(undefined4 *)((long)puVar5 + 4) = uVar14;
        *(undefined4 *)(puVar5 + 1) = uVar15;
        *(undefined4 *)((long)puVar5 + 0xc) = uVar16;
        *(undefined4 *)(puVar5 + 2) = uVar9;
        *(undefined4 *)((long)puVar5 + 0x14) = uVar10;
        *(undefined4 *)(puVar5 + 3) = uVar11;
        *(undefined4 *)((long)puVar5 + 0x1c) = uVar12;
        return;
      }
    }
  }
LAB_00100153:
  *(undefined4 *)puVar3 = uVar13;
  *(undefined4 *)((long)puVar3 + 4) = uVar14;
  *(undefined4 *)(puVar3 + 1) = uVar15;
  *(undefined4 *)((long)puVar3 + 0xc) = uVar16;
  *(undefined4 *)(puVar3 + 2) = uVar9;
  *(undefined4 *)((long)puVar3 + 0x14) = uVar10;
  *(undefined4 *)(puVar3 + 3) = uVar11;
  *(undefined4 *)((long)puVar3 + 0x1c) = uVar12;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__adjust_heap<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*, long,
   embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >
   >(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*, long, long,
   embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >) [clone .isra.0] */

void std::
     __adjust_heap<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
               (long param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  undefined1 uVar1;
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
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar16 = (long)(param_3 - 1) / 2;
  lVar17 = param_2;
  if (param_2 < lVar16) {
    do {
      lVar13 = (lVar17 + 1) * 2;
      lVar14 = (lVar17 + 1) * 0xc0;
      puVar12 = (undefined8 *)(param_1 + lVar14);
      if ((ulong)(*(long *)(param_1 + -8 + lVar14) - *(long *)(param_1 + -0x10 + lVar14)) <
          (ulong)(puVar12[0xb] - puVar12[10])) {
        lVar13 = lVar13 + -1;
        puVar12 = (undefined8 *)(lVar13 * 0x60 + param_1);
      }
      puVar15 = (undefined8 *)(lVar17 * 0x60 + param_1);
      *puVar15 = *puVar12;
      *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar12 + 1);
      uVar2 = puVar12[3];
      puVar15[2] = puVar12[2];
      puVar15[3] = uVar2;
      uVar2 = puVar12[5];
      puVar15[4] = puVar12[4];
      puVar15[5] = uVar2;
      uVar2 = puVar12[7];
      puVar15[6] = puVar12[6];
      puVar15[7] = uVar2;
      uVar2 = puVar12[9];
      puVar15[8] = puVar12[8];
      puVar15[9] = uVar2;
      uVar2 = puVar12[0xb];
      puVar15[10] = puVar12[10];
      puVar15[0xb] = uVar2;
      lVar17 = lVar13;
    } while (lVar13 < lVar16);
  }
  else {
    puVar12 = (undefined8 *)(param_2 * 0x60 + param_1);
    lVar13 = param_2;
  }
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar13)) {
    puVar15 = (undefined8 *)(param_1 + -0x60 + (lVar13 + 1) * 0xc0);
    *puVar12 = *puVar15;
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar15 + 1);
    uVar2 = puVar15[3];
    lVar13 = (lVar13 + 1) * 2 + -1;
    puVar12[2] = puVar15[2];
    puVar12[3] = uVar2;
    uVar2 = puVar15[5];
    puVar12[4] = puVar15[4];
    puVar12[5] = uVar2;
    uVar2 = puVar15[7];
    puVar12[6] = puVar15[6];
    puVar12[7] = uVar2;
    uVar2 = puVar15[9];
    puVar12[8] = puVar15[8];
    puVar12[9] = uVar2;
    uVar2 = puVar15[0xb];
    puVar12[10] = puVar15[10];
    puVar12[0xb] = uVar2;
    puVar12 = (undefined8 *)(lVar13 * 0x60 + param_1);
  }
  uVar2 = *param_4;
  uVar1 = *(undefined1 *)(param_4 + 1);
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  lVar14 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
  lVar17 = param_4[10];
  lVar16 = param_4[0xb];
  if (param_2 < lVar13) {
    do {
      lVar18 = lVar14 >> 1;
      puVar15 = (undefined8 *)(lVar18 * 0x60 + param_1);
      puVar12 = (undefined8 *)(lVar13 * 0x60 + param_1);
      if ((ulong)(puVar15[0xb] - puVar15[10]) <= (ulong)(lVar16 - lVar17)) break;
      *puVar12 = *puVar15;
      *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar15 + 1);
      uVar11 = puVar15[3];
      puVar12[2] = puVar15[2];
      puVar12[3] = uVar11;
      uVar11 = puVar15[5];
      puVar12[4] = puVar15[4];
      puVar12[5] = uVar11;
      uVar11 = puVar15[7];
      puVar12[6] = puVar15[6];
      puVar12[7] = uVar11;
      uVar11 = puVar15[9];
      puVar12[8] = puVar15[8];
      puVar12[9] = uVar11;
      uVar11 = puVar15[0xb];
      puVar12[10] = puVar15[10];
      puVar12[0xb] = uVar11;
      lVar14 = (lVar18 + -1) - (lVar18 + -1 >> 0x3f);
      puVar12 = puVar15;
      lVar13 = lVar18;
    } while (param_2 < lVar18);
  }
  *puVar12 = uVar2;
  *(undefined1 *)(puVar12 + 1) = uVar1;
  puVar12[10] = lVar17;
  puVar12[0xb] = lVar16;
  puVar12[2] = uVar3;
  puVar12[3] = uVar4;
  puVar12[4] = uVar5;
  puVar12[5] = uVar6;
  puVar12[6] = uVar7;
  puVar12[7] = uVar8;
  puVar12[8] = uVar9;
  puVar12[9] = uVar10;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__unguarded_linear_insert<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   __gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >
   >(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   __gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >) [clone .isra.0] */

void std::
     __unguarded_linear_insert<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
               (undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
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
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  lVar2 = param_1[0xb];
  lVar3 = param_1[10];
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = param_1[6];
  uVar10 = param_1[7];
  uVar11 = param_1[8];
  uVar12 = param_1[9];
  uVar15 = param_1[-1] - param_1[-2];
  puVar14 = param_1 + -0xc;
  while (puVar13 = puVar14, uVar15 < (ulong)(lVar2 - lVar3)) {
    puVar13[0xc] = *puVar13;
    puVar13[0xe] = puVar13[2];
    puVar13[0xf] = puVar13[3];
    puVar13[0x10] = puVar13[4];
    puVar13[0x11] = puVar13[5];
    *(undefined1 *)(puVar13 + 0xd) = *(undefined1 *)(puVar13 + 1);
    puVar13[0x12] = puVar13[6];
    puVar13[0x13] = puVar13[7];
    puVar13[0x14] = puVar13[8];
    puVar13[0x15] = puVar13[9];
    puVar13[0x16] = puVar13[10];
    puVar13[0x17] = puVar13[0xb];
    puVar14 = puVar13 + -0xc;
    param_1 = puVar13;
    uVar15 = puVar13[-1] - puVar13[-2];
  }
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[10] = lVar3;
  param_1[0xb] = lVar2;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  param_1[8] = uVar11;
  param_1[9] = uVar12;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<embree::PrimRef*, __gnu_cxx::__ops::_Iter_less_iter>(embree::PrimRef*,
   embree::PrimRef*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_1 != param_2) {
    puVar12 = param_1 + 4;
    while (puVar13 = puVar12, param_2 != puVar12) {
      while( true ) {
        puVar12 = puVar13 + 4;
        uVar1 = *(undefined4 *)puVar13;
        uVar2 = *(undefined4 *)((long)puVar13 + 4);
        uVar3 = *(undefined4 *)(puVar13 + 1);
        uVar4 = *(undefined4 *)((long)puVar13 + 0xc);
        uVar5 = *(undefined4 *)(puVar13 + 2);
        uVar6 = *(undefined4 *)((long)puVar13 + 0x14);
        uVar7 = *(undefined4 *)(puVar13 + 3);
        uVar8 = *(undefined4 *)((long)puVar13 + 0x1c);
        if (CONCAT44(*(undefined4 *)((long)param_1 + 0x1c),*(undefined4 *)((long)param_1 + 0xc)) <=
            CONCAT44(*(undefined4 *)((long)puVar13 + 0x1c),*(undefined4 *)((long)puVar13 + 0xc)))
        break;
        puVar10 = puVar13;
        if (0 < (long)puVar13 - (long)param_1) {
          do {
            puVar11 = puVar10 + -4;
            *puVar10 = puVar10[-4];
            puVar10[1] = puVar10[-3];
            puVar10[2] = puVar10[-2];
            puVar10[3] = puVar10[-1];
            puVar10 = puVar11;
          } while (puVar11 !=
                   (undefined8 *)
                   ((long)puVar13 - ((long)puVar13 - (long)param_1 & 0xffffffffffffffe0U)));
        }
        *(undefined4 *)param_1 = uVar1;
        *(undefined4 *)((long)param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((long)param_1 + 0xc) = uVar4;
        *(undefined4 *)(param_1 + 2) = uVar5;
        *(undefined4 *)((long)param_1 + 0x14) = uVar6;
        *(undefined4 *)(param_1 + 3) = uVar7;
        *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
        puVar13 = puVar12;
        if (param_2 == puVar12) {
          return;
        }
      }
      uVar9 = CONCAT44(*(undefined4 *)((long)puVar13 + -4),*(undefined4 *)((long)puVar13 + -0x14));
      while (CONCAT44(uVar8,uVar4) < uVar9) {
        *puVar13 = puVar13[-4];
        puVar13[1] = puVar13[-3];
        puVar13[2] = puVar13[-2];
        puVar13[3] = puVar13[-1];
        uVar9 = CONCAT44(*(undefined4 *)((long)puVar13 + -0x24),
                         *(undefined4 *)((long)puVar13 + -0x34));
        puVar13 = puVar13 + -4;
      }
      *(undefined4 *)puVar13 = uVar1;
      *(undefined4 *)((long)puVar13 + 4) = uVar2;
      *(undefined4 *)(puVar13 + 1) = uVar3;
      *(undefined4 *)((long)puVar13 + 0xc) = uVar4;
      *(undefined4 *)(puVar13 + 2) = uVar5;
      *(undefined4 *)((long)puVar13 + 0x14) = uVar6;
      *(undefined4 *)(puVar13 + 3) = uVar7;
      *(undefined4 *)((long)puVar13 + 0x1c) = uVar8;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >
   >(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >) [clone .isra.0] */

void std::
     __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
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
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  if (param_1 == param_2) {
    return;
  }
  puVar13 = param_1 + 0xc;
  while (param_2 != puVar13) {
    lVar2 = puVar13[0xb];
    lVar3 = puVar13[10];
    puVar16 = puVar13 + 0xc;
    if ((ulong)(param_1[0xb] - param_1[10]) < (ulong)(lVar2 - lVar3)) {
      uVar4 = *puVar13;
      uVar1 = *(undefined1 *)(puVar13 + 1);
      uVar5 = puVar13[2];
      uVar6 = puVar13[3];
      uVar7 = puVar13[4];
      uVar8 = puVar13[5];
      uVar9 = puVar13[6];
      uVar10 = puVar13[7];
      uVar11 = puVar13[8];
      uVar12 = puVar13[9];
      if (0 < (long)puVar13 - (long)param_1) {
        puVar14 = puVar13;
        do {
          puVar15 = puVar14 + -0xc;
          *puVar14 = puVar14[-0xc];
          puVar14[2] = puVar14[-10];
          puVar14[3] = puVar14[-9];
          puVar14[4] = puVar14[-8];
          puVar14[5] = puVar14[-7];
          *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar14 + -0xb);
          puVar14[6] = puVar14[-6];
          puVar14[7] = puVar14[-5];
          puVar14[8] = puVar14[-4];
          puVar14[9] = puVar14[-3];
          puVar14[10] = puVar14[-2];
          puVar14[0xb] = puVar14[-1];
          puVar14 = puVar15;
        } while (puVar15 != puVar13 + ((long)puVar13 - (long)param_1 >> 5) * -4);
      }
      *param_1 = uVar4;
      *(undefined1 *)(param_1 + 1) = uVar1;
      param_1[10] = lVar3;
      param_1[0xb] = lVar2;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      param_1[8] = uVar11;
      param_1[9] = uVar12;
      puVar13 = puVar16;
    }
    else {
      __unguarded_linear_insert<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                ();
      puVar13 = puVar16;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<embree::PrimRef*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::PrimRef*, embree::PrimRef*, long,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (undefined4 *param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long in_FS_OFFSET;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  lVar19 = (long)param_2 - (long)param_1;
  if (0x200 < lVar19) {
    puVar26 = (undefined8 *)(param_1 + 8);
    puVar23 = param_2;
    if (param_3 != 0) {
      do {
        param_3 = param_3 + -1;
        uVar1 = *param_1;
        uVar2 = param_1[1];
        uVar3 = param_1[2];
        uVar4 = param_1[3];
        puVar20 = param_1 + (lVar19 >> 6) * 8;
        uVar5 = param_1[4];
        uVar6 = param_1[5];
        uVar7 = param_1[6];
        uVar8 = param_1[7];
        uVar21 = CONCAT44(param_1[0xf],param_1[0xb]);
        uVar22 = CONCAT44(puVar20[7],puVar20[3]);
        uVar24 = CONCAT44(*(undefined4 *)((long)puVar23 + -4),*(undefined4 *)((long)puVar23 + -0x14)
                         );
        puVar25 = puVar23;
        param_2 = puVar26;
        if (uVar21 < uVar22) {
          if (uVar22 < uVar24) {
LAB_0010090a:
            uVar9 = puVar20[1];
            uVar10 = puVar20[2];
            uVar11 = puVar20[3];
            *param_1 = *puVar20;
            param_1[1] = uVar9;
            param_1[2] = uVar10;
            param_1[3] = uVar11;
            uVar9 = puVar20[5];
            uVar10 = puVar20[6];
            uVar11 = puVar20[7];
            param_1[4] = puVar20[4];
            param_1[5] = uVar9;
            param_1[6] = uVar10;
            param_1[7] = uVar11;
            *puVar20 = uVar1;
            puVar20[1] = uVar2;
            puVar20[2] = uVar3;
            puVar20[3] = uVar4;
            puVar20[4] = uVar5;
            puVar20[5] = uVar6;
            puVar20[6] = uVar7;
            puVar20[7] = uVar8;
          }
          else {
            if (uVar24 <= uVar21) goto LAB_001007ee;
LAB_001008ba:
            uVar9 = *(undefined4 *)((long)puVar23 + -0x1c);
            uVar10 = *(undefined4 *)(puVar23 + -3);
            uVar11 = *(undefined4 *)((long)puVar23 + -0x14);
            *param_1 = *(undefined4 *)(puVar23 + -4);
            param_1[1] = uVar9;
            param_1[2] = uVar10;
            param_1[3] = uVar11;
            uVar9 = *(undefined4 *)((long)puVar23 + -0xc);
            uVar10 = *(undefined4 *)(puVar23 + -1);
            uVar11 = *(undefined4 *)((long)puVar23 + -4);
            param_1[4] = *(undefined4 *)(puVar23 + -2);
            param_1[5] = uVar9;
            param_1[6] = uVar10;
            param_1[7] = uVar11;
            *(undefined4 *)(puVar23 + -4) = uVar1;
            *(undefined4 *)((long)puVar23 + -0x1c) = uVar2;
            *(undefined4 *)(puVar23 + -3) = uVar3;
            *(undefined4 *)((long)puVar23 + -0x14) = uVar4;
            *(undefined4 *)(puVar23 + -2) = uVar5;
            *(undefined4 *)((long)puVar23 + -0xc) = uVar6;
            *(undefined4 *)(puVar23 + -1) = uVar7;
            *(undefined4 *)((long)puVar23 + -4) = uVar8;
          }
        }
        else {
          if (uVar24 <= uVar21) {
            if (uVar22 < uVar24) goto LAB_001008ba;
            goto LAB_0010090a;
          }
LAB_001007ee:
          uVar9 = param_1[8];
          uVar10 = param_1[9];
          uVar11 = param_1[10];
          uVar12 = param_1[0xb];
          uVar13 = param_1[0xc];
          uVar14 = param_1[0xd];
          uVar15 = param_1[0xe];
          uVar16 = param_1[0xf];
          param_1[8] = uVar1;
          param_1[9] = uVar2;
          param_1[10] = uVar3;
          param_1[0xb] = uVar4;
          param_1[0xc] = uVar5;
          param_1[0xd] = uVar6;
          param_1[0xe] = uVar7;
          param_1[0xf] = uVar8;
          *param_1 = uVar9;
          param_1[1] = uVar10;
          param_1[2] = uVar11;
          param_1[3] = uVar12;
          param_1[4] = uVar13;
          param_1[5] = uVar14;
          param_1[6] = uVar15;
          param_1[7] = uVar16;
        }
        while( true ) {
          for (; CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),*(undefined4 *)((long)param_2 + 0xc)
                         ) < CONCAT44(param_1[7],param_1[3]); param_2 = param_2 + 4) {
          }
          uVar21 = CONCAT44(*(undefined4 *)((long)puVar25 + -4),
                            *(undefined4 *)((long)puVar25 + -0x14));
          while (puVar18 = puVar25 + -4, CONCAT44(param_1[7],param_1[3]) < uVar21) {
            uVar21 = CONCAT44(*(undefined4 *)((long)puVar25 + -0x24),
                              *(undefined4 *)((long)puVar25 + -0x34));
            puVar25 = puVar18;
          }
          if (puVar18 <= param_2) break;
          uVar17 = puVar25[-3];
          uVar1 = *(undefined4 *)param_2;
          uVar2 = *(undefined4 *)((long)param_2 + 4);
          uVar3 = *(undefined4 *)(param_2 + 1);
          uVar4 = *(undefined4 *)((long)param_2 + 0xc);
          uVar5 = *(undefined4 *)(param_2 + 2);
          uVar6 = *(undefined4 *)((long)param_2 + 0x14);
          uVar7 = *(undefined4 *)(param_2 + 3);
          uVar8 = *(undefined4 *)((long)param_2 + 0x1c);
          *param_2 = *puVar18;
          param_2[1] = uVar17;
          uVar17 = puVar25[-1];
          param_2[2] = puVar25[-2];
          param_2[3] = uVar17;
          *(undefined4 *)puVar18 = uVar1;
          *(undefined4 *)((long)puVar25 + -0x1c) = uVar2;
          *(undefined4 *)(puVar25 + -3) = uVar3;
          *(undefined4 *)((long)puVar25 + -0x14) = uVar4;
          *(undefined4 *)(puVar25 + -2) = uVar5;
          *(undefined4 *)((long)puVar25 + -0xc) = uVar6;
          *(undefined4 *)(puVar25 + -1) = uVar7;
          *(undefined4 *)((long)puVar25 + -4) = uVar8;
          puVar25 = puVar18;
          param_2 = param_2 + 4;
        }
        __introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (param_2,puVar23,param_3);
        lVar19 = (long)param_2 - (long)param_1;
        if (lVar19 < 0x201) goto LAB_0010098c;
        puVar23 = param_2;
      } while (param_3 != 0);
    }
    __heap_select<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(param_1,param_2,param_2);
    do {
      puVar26 = param_2 + -4;
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      local_80 = *(undefined4 *)puVar26;
      uStack_7c = *(undefined4 *)((long)param_2 + -0x1c);
      uStack_78 = *(undefined4 *)(param_2 + -3);
      uStack_74 = *(undefined4 *)((long)param_2 + -0x14);
      local_70 = *(undefined4 *)(param_2 + -2);
      uStack_6c = *(undefined4 *)((long)param_2 + -0xc);
      uStack_68 = *(undefined4 *)(param_2 + -1);
      uStack_64 = *(undefined4 *)((long)param_2 + -4);
      *(undefined4 *)puVar26 = *param_1;
      *(undefined4 *)((long)param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -3) = uVar2;
      *(undefined4 *)((long)param_2 + -0x14) = uVar3;
      uVar1 = param_1[5];
      uVar2 = param_1[6];
      uVar3 = param_1[7];
      *(undefined4 *)(param_2 + -2) = param_1[4];
      *(undefined4 *)((long)param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -1) = uVar2;
      *(undefined4 *)((long)param_2 + -4) = uVar3;
      __adjust_heap<embree::PrimRef*,long,embree::PrimRef,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,0,(long)puVar26 - (long)param_1 >> 5,&local_80);
      param_2 = puVar26;
    } while (0x20 < (long)puVar26 - (long)param_1);
  }
LAB_0010098c:
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>::find(embree::sse2::PrimInfoRange
   const&, unsigned long) [clone .isra.0] */

PrimInfoRange *
embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find
          (PrimInfoRange *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  embree *peVar18;
  uint in_ECX;
  embree *peVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  BinInfoT_conflict *pBVar22;
  BinInfoT_conflict *pBVar23;
  ulong uVar24;
  float *pfVar25;
  undefined4 uVar26;
  long in_RDX;
  ulong uVar27;
  long lVar28;
  BinInfoT_conflict *pBVar29;
  uint uVar30;
  ulong uVar31;
  embree *peVar32;
  long lVar33;
  undefined1 (*pauVar34) [16];
  ulong uVar35;
  ulong uVar36;
  long in_FS_OFFSET;
  byte bVar37;
  undefined1 auVar38 [16];
  uint uVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  float fVar43;
  uint uVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  int iVar48;
  float fVar49;
  uint uVar50;
  uint uVar54;
  uint uVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar60;
  uint uVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint uVar62;
  undefined1 auVar59 [16];
  float fVar63;
  float fVar64;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar65 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  uint uVar76;
  uint uVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  uint local_1f70;
  uint uStack_1f6c;
  uint uStack_1f68;
  uint uStack_1f64;
  undefined1 local_1f50 [16];
  undefined1 local_1f40 [16];
  undefined1 local_1f30 [8];
  float fStack_1f28;
  float fStack_1f24;
  undefined1 local_1f20 [16];
  undefined1 local_1f10 [16];
  uint local_1f00;
  uint uStack_1efc;
  uint uStack_1ef8;
  uint uStack_1ef4;
  ulong local_1ef0;
  undefined1 *local_1ee8;
  ulong *local_1ee0;
  undefined1 *local_1ed8;
  undefined1 local_1ed0 [8];
  float fStack_1ec8;
  undefined1 local_1ec0 [8];
  float fStack_1eb8;
  uint uStack_1eb4;
  undefined1 local_1eb0 [16];
  float local_1ea0;
  float fStack_1e9c;
  float fStack_1e98;
  float fStack_1e94;
  float local_1e90 [3];
  uint uStack_1e84;
  float local_1e80 [104];
  BinInfoT_conflict aBStack_1ce0 [80];
  int aiStack_1c90 [4];
  BinInfoT_conflict local_1c80 [4];
  int aiStack_1c7c [763];
  BinInfoT_conflict local_1090 [4];
  BinInfoT_conflict aBStack_108c [4];
  BinInfoT_conflict aBStack_1088 [4];
  BinInfoT_conflict aBStack_1084 [4];
  BinInfoT_conflict local_1080 [4];
  undefined4 auStack_107c [103];
  embree aeStack_ee0 [80];
  embree aeStack_e90 [4];
  int iStack_e8c;
  embree aeStack_e88 [4];
  embree aeStack_e84 [4];
  embree local_e80 [4];
  int aiStack_e7c [3];
  int local_e70 [4];
  undefined1 local_e60 [16];
  undefined1 local_e50 [16];
  undefined1 local_e40 [16];
  undefined1 local_e30 [2976];
  embree local_290 [4];
  embree aeStack_28c [4];
  embree aeStack_288 [4];
  embree aeStack_284 [4];
  embree local_280 [4];
  embree aeStack_27c [4];
  embree aeStack_278 [4];
  undefined4 auStack_274 [139];
  long local_48;
  
  bVar37 = 0;
  uVar35 = *(ulong *)(in_RDX + 0x48);
  uVar27 = *(ulong *)(in_RDX + 0x40);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar36 = uVar35 - uVar27;
  local_1f00._0_1_ = (byte)in_ECX;
  if (0xbff < uVar36) {
    pBVar22 = local_1c80;
    pBVar29 = local_1080;
    do {
      *(float *)(pBVar22 + 0x40) = _LC4;
      *(float *)(pBVar22 + 0x44) = _LC4;
      *(float *)(pBVar22 + 0x48) = _LC4;
      *(float *)(pBVar22 + 0x4c) = _LC4;
      pBVar23 = pBVar22 + 0x60;
      *(undefined4 *)(pBVar22 + 0x50) = _LC2;
      *(undefined4 *)(pBVar22 + 0x54) = _LC2;
      *(undefined4 *)(pBVar22 + 0x58) = _LC2;
      *(undefined4 *)(pBVar22 + 0x5c) = _LC2;
      *(float *)(pBVar22 + 0x20) = _LC4;
      *(float *)(pBVar22 + 0x24) = _LC4;
      *(float *)(pBVar22 + 0x28) = _LC4;
      *(float *)(pBVar22 + 0x2c) = _LC4;
      *(undefined4 *)(pBVar22 + 0x30) = _LC2;
      *(undefined4 *)(pBVar22 + 0x34) = _LC2;
      *(undefined4 *)(pBVar22 + 0x38) = _LC2;
      *(undefined4 *)(pBVar22 + 0x3c) = _LC2;
      *(float *)pBVar22 = _LC4;
      *(float *)(pBVar22 + 4) = _LC4;
      *(float *)(pBVar22 + 8) = _LC4;
      *(float *)(pBVar22 + 0xc) = _LC4;
      *(undefined4 *)(pBVar22 + 0x10) = _LC2;
      *(undefined4 *)(pBVar22 + 0x14) = _LC2;
      *(undefined4 *)(pBVar22 + 0x18) = _LC2;
      *(undefined4 *)(pBVar22 + 0x1c) = _LC2;
      *(undefined1 (*) [16])pBVar29 = (undefined1  [16])0x0;
      pBVar22 = pBVar23;
      pBVar29 = pBVar29 + 0x10;
    } while (local_1080 != pBVar23);
    fVar49 = (float)uVar36 * __LC29 + __LC30;
    if (__LC31 <= fVar49) {
      uVar24 = (long)(fVar49 - __LC31) ^ 0x8000000000000000;
    }
    else {
      uVar24 = (ulong)fVar49;
    }
    local_1ea0 = *(float *)(in_RDX + 0x20);
    fStack_1e9c = *(float *)(in_RDX + 0x24);
    fStack_1e98 = *(float *)(in_RDX + 0x28);
    fStack_1e94 = *(float *)(in_RDX + 0x2c);
    local_1ee0 = &local_1ef0;
    auVar52._0_4_ = *(float *)(in_RDX + 0x30) - local_1ea0;
    auVar52._4_4_ = *(float *)(in_RDX + 0x34) - fStack_1e9c;
    auVar52._8_4_ = *(float *)(in_RDX + 0x38) - fStack_1e98;
    auVar52._12_4_ = *(float *)(in_RDX + 0x3c) - fStack_1e94;
    if (0x20 < uVar24) {
      uVar24 = 0x20;
    }
    auVar53._4_4_ = _LC33;
    auVar53._0_4_ = _LC33;
    auVar53._8_4_ = _LC33;
    auVar53._12_4_ = _LC33;
    local_1eb0._8_8_ = local_1eb0._0_8_;
    local_1eb0._0_8_ = uVar24;
    auVar53 = maxps(auVar53,auVar52);
    local_1f30._4_4_ = _LC4;
    local_1f30._0_4_ = _LC4;
    fStack_1f28 = _LC4;
    fStack_1f24 = _LC4;
    auVar57._0_4_ = (float)(long)uVar24 * __LC34;
    local_1ee8 = local_1eb0;
    local_1f20._4_4_ = _LC2;
    local_1f20._0_4_ = _LC2;
    local_1f20._8_4_ = _LC2;
    local_1f20._12_4_ = _LC2;
    auVar52 = local_1f20;
    auVar57._4_4_ = auVar57._0_4_;
    auVar57._8_4_ = auVar57._0_4_;
    auVar57._12_4_ = auVar57._0_4_;
    auVar57 = divps(auVar57,auVar53);
    local_1e90[0] = (float)(auVar57._0_4_ & -(uint)(_LC33 < auVar53._0_4_));
    local_1e90[1] = (float)(auVar57._4_4_ & -(uint)(_LC33 < auVar53._4_4_));
    local_1e90[2] = (float)(auVar57._8_4_ & -(uint)(_LC33 < auVar53._8_4_));
    uStack_1e84 = auVar57._12_4_ & -(uint)(_LC33 < auVar53._12_4_);
    local_1ef0 = param_2;
    local_1ed8 = local_1ee8;
    parallel_reduce_internal<unsigned_long,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>const&,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>const&)_2_>
              (local_e80,uVar36 + 0x3ff >> 10,uVar27,uVar35,0x400,local_1c80,
               (_lambda_embree__range<unsigned_long>_const___1_ *)&local_1ee0,
               (_lambda_embree__sse2__BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>_>_const__embree__sse2__BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>_>_const___2_
                *)&local_1ee8);
    peVar18 = local_e80;
    pBVar22 = local_1c80;
    do {
      uVar7 = *(undefined8 *)(peVar18 + 8);
      uVar8 = *(undefined8 *)(peVar18 + 0x20);
      uVar9 = *(undefined8 *)(peVar18 + 0x28);
      pBVar29 = pBVar22 + 0x60;
      uVar10 = *(undefined8 *)(peVar18 + 0x30);
      uVar11 = *(undefined8 *)(peVar18 + 0x38);
      *(undefined8 *)pBVar22 = *(undefined8 *)peVar18;
      *(undefined8 *)(pBVar22 + 8) = uVar7;
      uVar7 = *(undefined8 *)(peVar18 + 0x10);
      uVar12 = *(undefined8 *)(peVar18 + 0x18);
      *(undefined8 *)(pBVar22 + 0x20) = uVar8;
      *(undefined8 *)(pBVar22 + 0x28) = uVar9;
      uVar8 = *(undefined8 *)(peVar18 + 0x50);
      uVar9 = *(undefined8 *)(peVar18 + 0x58);
      *(undefined8 *)(pBVar22 + 0x10) = uVar7;
      *(undefined8 *)(pBVar22 + 0x18) = uVar12;
      uVar7 = *(undefined8 *)(peVar18 + 0x40);
      uVar12 = *(undefined8 *)(peVar18 + 0x48);
      *(undefined8 *)(pBVar22 + 0x30) = uVar10;
      *(undefined8 *)(pBVar22 + 0x38) = uVar11;
      *(undefined8 *)(pBVar22 + 0x40) = uVar7;
      *(undefined8 *)(pBVar22 + 0x48) = uVar12;
      *(undefined8 *)(pBVar22 + 0x50) = uVar8;
      *(undefined8 *)(pBVar22 + 0x58) = uVar9;
      peVar18 = peVar18 + 0x60;
      pBVar22 = pBVar29;
    } while (local_1080 != pBVar29);
    peVar18 = local_280;
    pBVar22 = local_1080;
    for (lVar33 = 0x40; lVar33 != 0; lVar33 = lVar33 + -1) {
      *(undefined8 *)pBVar22 = *(undefined8 *)peVar18;
      peVar18 = peVar18 + ((ulong)bVar37 * -2 + 1) * 8;
      pBVar22 = pBVar22 + (ulong)bVar37 * -0x10 + 8;
    }
    if (local_1eb0._0_8_ == 1) {
      _local_1ed0 = _local_1f30;
      _local_1ec0 = (undefined1  [16])0x0;
    }
    else {
      iVar40 = 0;
      iVar42 = 0;
      iVar45 = 0;
      iVar48 = 0;
      pfVar25 = local_1e90 + local_1eb0._0_8_ * 4;
      pBVar22 = aBStack_1ce0 + local_1eb0._0_8_ * 0x60;
      auVar57 = _local_1f30;
      auVar53 = _local_1f30;
      auVar73 = local_1f20;
      auVar71 = _local_1f30;
      auVar79 = local_1f20;
      lVar33 = local_1eb0._0_8_ * 0x10;
      do {
        lVar28 = lVar33 + -0x10;
        local_1f20 = maxps(local_1f20,*(undefined1 (*) [16])(pBVar22 + 0x10));
        auVar57 = minps(auVar57,*(undefined1 (*) [16])pBVar22);
        pBVar29 = pBVar22 + -0x60;
        iVar3 = *(int *)(local_1080 + lVar28);
        iVar4 = *(int *)((long)auStack_107c + lVar33 + -0x10);
        iVar5 = *(int *)(local_1090 + lVar33 + 8);
        iVar6 = *(int *)(local_1090 + lVar33 + 0xc);
        auVar73 = maxps(auVar73,*(undefined1 (*) [16])(pBVar22 + 0x30));
        pfVar25[3] = 0.0;
        auVar53 = minps(auVar53,*(undefined1 (*) [16])(pBVar22 + 0x20));
        auVar79 = maxps(auVar79,*(undefined1 (*) [16])(pBVar22 + 0x50));
        iVar40 = iVar3 + iVar40;
        iVar42 = iVar4 + iVar42;
        iVar45 = iVar5 + iVar45;
        iVar48 = iVar6 + iVar48;
        auVar71 = minps(auVar71,*(undefined1 (*) [16])(pBVar22 + 0x40));
        *(int *)(local_e80 + lVar28) = iVar40;
        *(int *)((long)aiStack_e7c + lVar33 + -0x10) = iVar42;
        *(int *)(aeStack_ee0 + lVar33 + 0x58) = iVar45;
        *(int *)(aeStack_ee0 + lVar33 + 0x5c) = iVar48;
        fVar49 = local_1f20._4_4_ - auVar57._4_4_;
        fVar47 = local_1f20._8_4_ - auVar57._8_4_;
        *pfVar25 = (local_1f20._0_4_ - auVar57._0_4_) * (fVar49 + fVar47) + fVar49 * fVar47;
        fVar49 = auVar73._4_4_ - auVar53._4_4_;
        fVar47 = auVar73._8_4_ - auVar53._8_4_;
        pfVar25[1] = (auVar73._0_4_ - auVar53._0_4_) * (fVar49 + fVar47) + fVar49 * fVar47;
        fVar49 = auVar79._4_4_ - auVar71._4_4_;
        fVar47 = auVar79._8_4_ - auVar71._8_4_;
        pfVar25[2] = (auVar79._0_4_ - auVar71._0_4_) * (fVar49 + fVar47) + fVar49 * fVar47;
        pfVar25 = pfVar25 + -4;
        pBVar22 = pBVar29;
        lVar33 = lVar28;
      } while (local_1c80 != pBVar29);
      _local_1ed0 = _local_1f30;
      _local_1ec0 = (undefined1  [16])0x0;
      iVar40 = (1 << ((byte)local_1f00 & 0x1f)) + -1;
      if (1 < (ulong)local_1eb0._0_8_) {
        local_1f50._4_4_ = _UNK_001171c4;
        local_1f50._0_4_ = __LC28;
        local_1f50._12_4_ = _UNK_001171cc;
        local_1f50._8_4_ = _UNK_001171c8;
        lVar33 = 0x10;
        local_1f10 = (undefined1  [16])0x0;
        local_1f40 = _local_1f30;
        uVar35 = (ulong)in_ECX;
        local_1f20 = (undefined1  [16])0x0;
        auVar57 = auVar52;
        auVar53 = _local_1f30;
        auVar73 = auVar52;
        do {
          auVar73 = maxps(auVar73,*(undefined1 (*) [16])(pBVar29 + 0x50));
          auVar53 = minps(auVar53,*(undefined1 (*) [16])pBVar29);
          local_1f40 = minps(local_1f40,*(undefined1 (*) [16])(pBVar29 + 0x40));
          auVar52 = maxps(auVar52,*(undefined1 (*) [16])(pBVar29 + 0x10));
          local_1f20._0_4_ = local_1f20._0_4_ + *(int *)(local_1090 + lVar33);
          local_1f20._4_4_ = local_1f20._4_4_ + *(int *)(local_1090 + lVar33 + 4);
          local_1f20._8_4_ = local_1f20._8_4_ + *(int *)(local_1090 + lVar33 + 8);
          local_1f20._12_4_ = local_1f20._12_4_ + *(int *)(local_1090 + lVar33 + 0xc);
          auVar57 = maxps(auVar57,*(undefined1 (*) [16])(pBVar29 + 0x30));
          fVar49 = auVar73._4_4_ - local_1f40._4_4_;
          fVar47 = auVar73._8_4_ - local_1f40._8_4_;
          _local_1f30 = minps(_local_1f30,*(undefined1 (*) [16])(pBVar29 + 0x20));
          fVar83 = auVar52._4_4_ - auVar53._4_4_;
          fVar84 = auVar52._8_4_ - auVar53._8_4_;
          fVar67 = auVar57._4_4_ - SUB164(_local_1f30,4);
          fVar69 = auVar57._8_4_ - SUB164(_local_1f30,8);
          fVar49 = (fVar49 + fVar47) * (auVar73._0_4_ - local_1f40._0_4_) + fVar49 * fVar47;
          uVar30 = (uint)(local_1f20._0_4_ + iVar40) >> uVar35;
          uVar39 = (uint)(local_1f20._4_4_ + iVar40) >> uVar35;
          uVar41 = (uint)(local_1f20._8_4_ + iVar40) >> uVar35;
          uVar44 = (uint)(local_1f20._12_4_ + iVar40) >> uVar35;
          uVar50 = (uint)(iVar40 + *(int *)(local_e80 + lVar33)) >> uVar35;
          uVar54 = (uint)(iVar40 + *(int *)((long)aiStack_e7c + lVar33)) >> uVar35;
          uVar55 = (uint)(iVar40 + *(int *)((long)aiStack_e7c + lVar33 + 4)) >> uVar35;
          uVar76 = (uint)(iVar40 + *(int *)((long)aiStack_e7c + lVar33 + 8)) >> uVar35;
          local_1f00 = (uint)__LC35;
          uStack_1efc = (uint)((ulong)__LC35 >> 0x20);
          uStack_1ef8 = (uint)_UNK_001171f8;
          uStack_1ef4 = (uint)((ulong)_UNK_001171f8 >> 0x20);
          local_1f70 = (uint)__LC36;
          uStack_1f6c = (uint)((ulong)__LC36 >> 0x20);
          uStack_1f68 = (uint)_UNK_00117208;
          uStack_1f64 = (uint)((ulong)_UNK_00117208 >> 0x20);
          uVar26 = local_1f50._0_4_;
          uVar15 = local_1f50._4_4_;
          uVar16 = local_1f50._8_4_;
          uVar17 = local_1f50._12_4_;
          pfVar25 = (float *)((long)local_1e80 + lVar33);
          lVar28 = lVar33 + 4;
          lVar13 = lVar33 + 8;
          lVar14 = lVar33 + 0xc;
          lVar33 = lVar33 + 0x10;
          local_1f50._4_4_ = _UNK_001171c4 + local_1f50._4_4_;
          local_1f50._0_4_ = __LC28 + local_1f50._0_4_;
          local_1f50._8_4_ = _UNK_001171c8 + local_1f50._8_4_;
          local_1f50._12_4_ = _UNK_001171cc + local_1f50._12_4_;
          fVar47 = ((float)(int)(uVar30 & local_1f00) + (float)((int)uVar30 >> 0x1f & local_1f70)) *
                   ((fVar83 + fVar84) * (auVar52._0_4_ - auVar53._0_4_) + fVar83 * fVar84) +
                   ((float)((int)uVar50 >> 0x1f & local_1f70) + (float)(int)(uVar50 & local_1f00)) *
                   *pfVar25;
          fVar67 = ((float)(int)(uVar39 & uStack_1efc) + (float)((int)uVar39 >> 0x1f & uStack_1f6c))
                   * ((fVar67 + fVar69) * (auVar57._0_4_ - SUB164(_local_1f30,0)) + fVar67 * fVar69)
                   + ((float)((int)uVar54 >> 0x1f & uStack_1f6c) +
                     (float)(int)(uVar54 & uStack_1efc)) * *(float *)((long)local_1e80 + lVar28);
          fVar69 = ((float)(int)(uVar41 & uStack_1ef8) + (float)((int)uVar41 >> 0x1f & uStack_1f68))
                   * fVar49 +
                   ((float)((int)uVar55 >> 0x1f & uStack_1f68) + (float)(int)(uVar55 & uStack_1ef8))
                   * *(float *)((long)local_1e80 + lVar13);
          fVar49 = ((float)(int)(uVar44 & uStack_1ef4) + (float)((int)uVar44 >> 0x1f & uStack_1f64))
                   * fVar49 +
                   ((float)((int)uVar76 >> 0x1f & uStack_1f64) + (float)(int)(uVar76 & uStack_1ef4))
                   * *(float *)((long)local_1e80 + lVar14);
          uVar30 = -(uint)(fVar47 < SUB164(_local_1ed0,0));
          uVar39 = -(uint)(fVar67 < SUB164(_local_1ed0,4));
          uVar41 = -(uint)(fVar69 < SUB164(_local_1ed0,8));
          uVar44 = -(uint)(fVar49 < SUB164(_local_1ed0,0xc));
          local_1f10._0_4_ = uVar26 & uVar30 | ~uVar30 & local_1f10._0_4_;
          local_1f10._4_4_ = uVar15 & uVar39 | ~uVar39 & local_1f10._4_4_;
          local_1f10._8_4_ = uVar16 & uVar41 | ~uVar41 & local_1f10._8_4_;
          local_1f10._12_4_ = uVar17 & uVar44 | ~uVar44 & local_1f10._12_4_;
          auVar71._4_4_ = uVar39 & (uint)fVar67;
          auVar71._0_4_ = uVar30 & (uint)fVar47;
          auVar79._0_4_ = ~uVar30 & (uint)SUB164(_local_1ed0,0);
          auVar79._4_4_ = ~uVar39 & (uint)SUB164(_local_1ed0,4);
          auVar79._8_4_ = ~uVar41 & (uint)SUB164(_local_1ed0,8);
          auVar79._12_4_ = ~uVar44 & (uint)SUB164(_local_1ed0,0xc);
          auVar71._8_4_ = uVar41 & (uint)fVar69;
          auVar71._12_4_ = uVar44 & (uint)fVar49;
          _local_1ed0 = auVar71 | auVar79;
          pBVar29 = pBVar29 + 0x60;
        } while (local_1eb0._0_8_ * 0x10 != lVar33);
        local_1ec0._4_4_ = local_1f10._4_4_;
        local_1ec0._0_4_ = local_1f10._0_4_;
        fStack_1eb8 = (float)local_1f10._8_4_;
        uStack_1eb4 = local_1f10._12_4_;
      }
    }
    if ((local_1e90[0] == 0.0) || (_LC20 < (float)local_1ed0._0_4_)) {
LAB_00101981:
      uVar26 = 0xffffffff;
      fVar49 = _LC4;
      fVar47 = (float)0;
    }
    else {
      uVar26 = 0;
      fVar49 = (float)local_1ed0._0_4_;
      fVar47 = (float)local_1ec0._0_4_;
      if (local_1ec0._0_4_ == 0) goto LAB_00101981;
    }
    if (((local_1e90[1] != 0.0) && ((float)local_1ed0._4_4_ < fVar49)) && (local_1ec0._4_4_ != 0)) {
      uVar26 = 1;
      fVar47 = (float)local_1ec0._4_4_;
      fVar49 = (float)local_1ed0._4_4_;
    }
    if (((local_1e90[2] != 0.0) && (fStack_1ec8 < fVar49)) && (fStack_1eb8 != 0.0)) {
      uVar26 = 2;
      fVar47 = fStack_1eb8;
      fVar49 = fStack_1ec8;
    }
    *(float *)param_1 = fVar49;
    *(undefined4 *)(param_1 + 4) = uVar26;
    *(ulong *)(param_1 + 0x20) = CONCAT44(fStack_1e9c,local_1ea0);
    *(ulong *)(param_1 + 0x28) = CONCAT44(fStack_1e94,fStack_1e98);
    *(float *)(param_1 + 8) = fVar47;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x10) = local_1eb0._0_8_;
    *(ulong *)(param_1 + 0x30) = CONCAT44(local_1e90[1],local_1e90[0]);
    *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_1e84,local_1e90[2]);
    goto LAB_0010126f;
  }
  local_1ec0 = (undefined1  [8])CONCAT44(_LC4,_LC4);
  fStack_1eb8 = _LC4;
  uStack_1eb4 = (uint)_LC4;
  auVar73._0_8_ = CONCAT44(_LC2,_LC2);
  auVar73._8_4_ = _LC2;
  auVar73._12_4_ = _LC2;
  peVar18 = local_e80;
  peVar32 = local_280;
  do {
    *(undefined1 (*) [16])(peVar18 + 0x40) = _local_1ec0;
    peVar19 = peVar18 + 0x60;
    *(undefined1 (*) [16])(peVar18 + 0x50) = auVar73;
    *(undefined1 (*) [16])(peVar18 + 0x20) = _local_1ec0;
    *(undefined1 (*) [16])(peVar18 + 0x30) = auVar73;
    *(undefined1 (*) [16])peVar18 = _local_1ec0;
    *(undefined1 (*) [16])(peVar18 + 0x10) = auVar73;
    *(undefined1 (*) [16])peVar32 = (undefined1  [16])0x0;
    peVar18 = peVar19;
    peVar32 = peVar32 + 0x10;
  } while (local_280 != peVar19);
  fVar49 = (float)(long)uVar36 * __LC29 + __LC30;
  if (__LC31 <= fVar49) {
    uVar35 = (long)(fVar49 - __LC31) ^ 0x8000000000000000;
  }
  else {
    uVar35 = (ulong)fVar49;
  }
  fVar49 = *(float *)(in_RDX + 0x20);
  fVar47 = *(float *)(in_RDX + 0x24);
  fVar67 = *(float *)(in_RDX + 0x28);
  fVar69 = *(float *)(in_RDX + 0x2c);
  auVar74._0_4_ = *(float *)(in_RDX + 0x30) - fVar49;
  auVar74._4_4_ = *(float *)(in_RDX + 0x34) - fVar47;
  auVar74._8_4_ = *(float *)(in_RDX + 0x38) - fVar67;
  auVar74._12_4_ = *(float *)(in_RDX + 0x3c) - fVar69;
  uVar24 = 0x20;
  if (uVar35 < 0x21) {
    uVar24 = uVar35;
  }
  auVar56._4_4_ = _LC33;
  auVar56._0_4_ = _LC33;
  auVar56._8_4_ = _LC33;
  auVar56._12_4_ = _LC33;
  pauVar34 = (undefined1 (*) [16])(param_2 + uVar27 * 0x20);
  auVar57 = maxps(auVar56,auVar74);
  auVar51._0_4_ = (float)(long)uVar24 * __LC34;
  bVar1 = _LC33 < auVar57._12_4_;
  auVar51._4_4_ = auVar51._0_4_;
  auVar51._8_4_ = auVar51._0_4_;
  auVar51._12_4_ = auVar51._0_4_;
  auVar52 = divps(auVar51,auVar57);
  fVar83 = (float)(-(uint)(_LC33 < auVar57._0_4_) & auVar52._0_4_);
  fVar84 = (float)(-(uint)(_LC33 < auVar57._4_4_) & auVar52._4_4_);
  fVar85 = (float)(-(uint)(_LC33 < auVar57._8_4_) & auVar52._8_4_);
  if (uVar36 != 0) {
    uVar30 = (int)uVar24 - 1;
    if (uVar36 != 1) {
      pauVar20 = pauVar34;
      do {
        auVar57 = pauVar20[1];
        auVar53 = *pauVar20;
        pauVar21 = pauVar20 + 4;
        auVar71 = pauVar20[2];
        uVar39 = (uint)(((auVar57._0_4_ + auVar53._0_4_) - fVar49) * fVar83 + _LC26);
        uVar41 = (uint)(((auVar57._4_4_ + auVar53._4_4_) - fVar47) * fVar84 + _LC26);
        uVar44 = (uint)(((auVar57._8_4_ + auVar53._8_4_) - fVar67) * fVar85 + _LC26);
        uVar50 = -(uint)((int)uVar39 < (int)uVar30);
        uVar54 = -(uint)((int)uVar41 < (int)uVar30);
        uVar55 = -(uint)((int)uVar44 < (int)uVar30);
        uVar39 = uVar39 & uVar50 | ~uVar50 & uVar30;
        uVar41 = uVar41 & uVar54 | ~uVar54 & uVar30;
        uVar50 = uVar44 & uVar55 | ~uVar55 & uVar30;
        auVar79 = pauVar20[3];
        uVar31 = (ulong)(~-(uint)((int)uVar39 < 0) & uVar39);
        peVar18 = local_e80 + uVar31 * 0x60;
        uVar39 = (uint)(((auVar79._0_4_ + auVar71._0_4_) - fVar49) * fVar83 + _LC26);
        uVar44 = (uint)(((auVar79._4_4_ + auVar71._4_4_) - fVar47) * fVar84 + _LC26);
        uVar54 = (uint)(((auVar79._8_4_ + auVar71._8_4_) - fVar67) * fVar85 + _LC26);
        uVar55 = -(uint)((int)uVar39 < (int)uVar30);
        uVar76 = -(uint)((int)uVar44 < (int)uVar30);
        uVar77 = -(uint)((int)uVar54 < (int)uVar30);
        uVar39 = uVar55 & uVar39 | ~uVar55 & uVar30;
        uVar44 = uVar76 & uVar44 | ~uVar76 & uVar30;
        uVar54 = uVar77 & uVar54 | ~uVar77 & uVar30;
        auVar74 = minps(*(undefined1 (*) [16])peVar18,auVar53);
        *(undefined1 (*) [16])peVar18 = auVar74;
        auVar74 = maxps(*(undefined1 (*) [16])(local_e70 + uVar31 * 0x18),auVar57);
        *(undefined1 (*) [16])(local_e70 + uVar31 * 0x18) = auVar74;
        uVar27 = (ulong)(~-(uint)((int)uVar41 < 0) & uVar41);
        lVar33 = uVar27 * 0x60;
        auVar74 = minps(*(undefined1 (*) [16])(local_e60 + lVar33),auVar53);
        *(undefined1 (*) [16])(local_e60 + lVar33) = auVar74;
        auVar74 = maxps(*(undefined1 (*) [16])(local_e50 + lVar33),auVar57);
        *(undefined1 (*) [16])(local_e50 + lVar33) = auVar74;
        uVar2 = (ulong)(~-(uint)((int)uVar50 < 0) & uVar50);
        lVar33 = uVar2 * 0x60;
        auVar53 = minps(*(undefined1 (*) [16])(local_e40 + lVar33),auVar53);
        *(undefined1 (*) [16])(local_e40 + lVar33) = auVar53;
        auVar57 = maxps(*(undefined1 (*) [16])(local_e30 + lVar33),auVar57);
        *(undefined1 (*) [16])(local_e30 + lVar33) = auVar57;
        *(int *)(local_e80 + (uVar31 + 0xc0) * 0x10) =
             *(int *)(local_e80 + (uVar31 + 0xc0) * 0x10) + 1;
        uVar31 = (ulong)(~-(uint)((int)uVar39 < 0) & uVar39);
        *(int *)(local_280 + uVar27 * 0x10 + 4) = *(int *)(local_280 + uVar27 * 0x10 + 4) + 1;
        *(int *)(local_280 + uVar2 * 0x10 + 8) = *(int *)(local_280 + uVar2 * 0x10 + 8) + 1;
        peVar18 = local_e80 + uVar31 * 0x60;
        auVar57 = minps(*(undefined1 (*) [16])peVar18,auVar71);
        *(undefined1 (*) [16])peVar18 = auVar57;
        auVar57 = maxps(*(undefined1 (*) [16])(local_e70 + uVar31 * 0x18),auVar79);
        *(undefined1 (*) [16])(local_e70 + uVar31 * 0x18) = auVar57;
        uVar27 = (ulong)(~-(uint)((int)uVar44 < 0) & uVar44);
        lVar33 = uVar27 * 0x60;
        auVar57 = minps(*(undefined1 (*) [16])(local_e60 + lVar33),auVar71);
        *(undefined1 (*) [16])(local_e60 + lVar33) = auVar57;
        auVar57 = maxps(*(undefined1 (*) [16])(local_e50 + lVar33),auVar79);
        *(undefined1 (*) [16])(local_e50 + lVar33) = auVar57;
        uVar2 = (ulong)(~-(uint)((int)uVar54 < 0) & uVar54);
        lVar33 = uVar2 * 0x60;
        auVar57 = minps(*(undefined1 (*) [16])(local_e40 + lVar33),auVar71);
        *(undefined1 (*) [16])(local_e40 + lVar33) = auVar57;
        auVar57 = maxps(*(undefined1 (*) [16])(local_e30 + lVar33),auVar79);
        *(undefined1 (*) [16])(local_e30 + lVar33) = auVar57;
        *(int *)(local_e80 + (uVar31 + 0xc0) * 0x10) =
             *(int *)(local_e80 + (uVar31 + 0xc0) * 0x10) + 1;
        *(int *)(local_280 + uVar27 * 0x10 + 4) = *(int *)(local_280 + uVar27 * 0x10 + 4) + 1;
        *(int *)(local_280 + uVar2 * 0x10 + 8) = *(int *)(local_280 + uVar2 * 0x10 + 8) + 1;
        pauVar20 = pauVar21;
      } while (pauVar34 + (uVar36 - 2 >> 1) * 4 + 4 != pauVar21);
      uVar27 = (uVar36 - 2 & 0xfffffffffffffffe) + 2;
      if (uVar36 <= uVar27) goto LAB_00100d8d;
      pauVar34 = pauVar34 + uVar27 * 2;
    }
    auVar57 = pauVar34[1];
    auVar53 = *pauVar34;
    uVar39 = (uint)(((auVar57._0_4_ + auVar53._0_4_) - fVar49) * fVar83 + _LC26);
    uVar41 = (uint)(((auVar57._4_4_ + auVar53._4_4_) - fVar47) * fVar84 + _LC26);
    uVar44 = (uint)(((auVar57._8_4_ + auVar53._8_4_) - fVar67) * fVar85 + _LC26);
    uVar50 = -(uint)((int)uVar39 < (int)uVar30);
    uVar54 = -(uint)((int)uVar41 < (int)uVar30);
    uVar55 = -(uint)((int)uVar44 < (int)uVar30);
    uVar39 = uVar50 & uVar39 | ~uVar50 & uVar30;
    uVar41 = uVar54 & uVar41 | ~uVar54 & uVar30;
    uVar30 = uVar55 & uVar44 | ~uVar55 & uVar30;
    lVar33 = (long)(int)(~-(uint)((int)uVar39 < 0) & uVar39);
    peVar18 = local_e80 + lVar33 * 0x60;
    *(int *)(local_e80 + (lVar33 + 0xc0) * 0x10) = *(int *)(local_e80 + (lVar33 + 0xc0) * 0x10) + 1;
    auVar71 = minps(*(undefined1 (*) [16])peVar18,auVar53);
    *(undefined1 (*) [16])peVar18 = auVar71;
    auVar71 = maxps(*(undefined1 (*) [16])(local_e70 + lVar33 * 0x18),auVar57);
    *(undefined1 (*) [16])(local_e70 + lVar33 * 0x18) = auVar71;
    lVar33 = (long)(int)(~-(uint)((int)uVar41 < 0) & uVar41);
    lVar28 = lVar33 * 0x60;
    *(int *)(local_280 + lVar33 * 0x10 + 4) = *(int *)(local_280 + lVar33 * 0x10 + 4) + 1;
    auVar71 = minps(*(undefined1 (*) [16])(local_e60 + lVar28),auVar53);
    *(undefined1 (*) [16])(local_e60 + lVar28) = auVar71;
    auVar71 = maxps(*(undefined1 (*) [16])(local_e50 + lVar28),auVar57);
    *(undefined1 (*) [16])(local_e50 + lVar28) = auVar71;
    lVar33 = (long)(int)(~-(uint)((int)uVar30 < 0) & uVar30);
    lVar28 = lVar33 * 0x60;
    *(int *)(local_280 + lVar33 * 0x10 + 8) = *(int *)(local_280 + lVar33 * 0x10 + 8) + 1;
    auVar53 = minps(*(undefined1 (*) [16])(local_e40 + lVar28),auVar53);
    *(undefined1 (*) [16])(local_e40 + lVar28) = auVar53;
    auVar57 = maxps(*(undefined1 (*) [16])(local_e30 + lVar28),auVar57);
    *(undefined1 (*) [16])(local_e30 + lVar28) = auVar57;
  }
LAB_00100d8d:
  if (uVar35 != 1) {
    auVar78._8_4_ = _LC2;
    auVar78._0_8_ = auVar73._0_8_;
    auVar78._12_4_ = _LC2;
    auVar75._8_4_ = _LC4;
    auVar75._0_8_ = local_1ec0;
    auVar75._12_4_ = _LC4;
    auVar72._8_4_ = _LC2;
    auVar72._0_8_ = auVar73._0_8_;
    auVar72._12_4_ = _LC2;
    auVar70._8_4_ = _LC4;
    auVar70._0_8_ = local_1ec0;
    auVar70._12_4_ = _LC4;
    auVar65._8_4_ = _LC2;
    auVar65._0_8_ = auVar73._0_8_;
    auVar65._12_4_ = _LC2;
    auVar58._8_4_ = _LC4;
    auVar58._0_8_ = local_1ec0;
    auVar58._12_4_ = _LC4;
    iVar40 = 0;
    iVar42 = 0;
    iVar45 = 0;
    iVar48 = 0;
    pfVar25 = local_1e90 + uVar24 * 4;
    peVar18 = aeStack_ee0 + uVar24 * 0x60;
    lVar33 = uVar24 * 0x10;
    do {
      auVar65 = maxps(auVar65,*(undefined1 (*) [16])(peVar18 + 0x10));
      auVar58 = minps(auVar58,*(undefined1 (*) [16])peVar18);
      peVar32 = peVar18 + -0x60;
      iVar3 = *(int *)(local_280 + -0x10 + lVar33);
      iVar4 = *(int *)(local_290 + lVar33 + 4);
      iVar5 = *(int *)(local_290 + lVar33 + 8);
      iVar6 = *(int *)(local_290 + lVar33 + 0xc);
      auVar72 = maxps(auVar72,*(undefined1 (*) [16])(peVar18 + 0x30));
      pfVar25[3] = 0.0;
      auVar70 = minps(auVar70,*(undefined1 (*) [16])(peVar18 + 0x20));
      auVar78 = maxps(auVar78,*(undefined1 (*) [16])(peVar18 + 0x50));
      iVar40 = iVar3 + iVar40;
      iVar42 = iVar4 + iVar42;
      iVar45 = iVar5 + iVar45;
      iVar48 = iVar6 + iVar48;
      auVar75 = minps(auVar75,*(undefined1 (*) [16])(peVar18 + 0x40));
      *(int *)((long)aiStack_1c90 + lVar33) = iVar40;
      *(int *)((long)aiStack_1c90 + lVar33 + 4) = iVar42;
      *(int *)((long)aiStack_1c90 + lVar33 + 8) = iVar45;
      *(int *)((long)aiStack_1c90 + lVar33 + 0xc) = iVar48;
      fVar43 = auVar65._4_4_ - auVar58._4_4_;
      fVar46 = auVar65._8_4_ - auVar58._8_4_;
      *pfVar25 = (auVar65._0_4_ - auVar58._0_4_) * (fVar43 + fVar46) + fVar43 * fVar46;
      fVar43 = auVar72._4_4_ - auVar70._4_4_;
      fVar46 = auVar72._8_4_ - auVar70._8_4_;
      pfVar25[1] = (auVar72._0_4_ - auVar70._0_4_) * (fVar43 + fVar46) + fVar43 * fVar46;
      fVar43 = auVar78._4_4_ - auVar75._4_4_;
      fVar46 = auVar78._8_4_ - auVar75._8_4_;
      pfVar25[2] = (auVar78._0_4_ - auVar75._0_4_) * (fVar43 + fVar46) + fVar43 * fVar46;
      pfVar25 = pfVar25 + -4;
      peVar18 = peVar32;
      lVar33 = lVar33 + -0x10;
    } while (peVar32 != local_e80);
  }
  local_1eb0 = (undefined1  [16])0x0;
  iVar40 = (1 << ((byte)local_1f00 & 0x1f)) + -1;
  if (1 < uVar35) {
    local_1f10 = (undefined1  [16])0x0;
    lVar33 = 0x10;
    auVar80._8_4_ = _LC2;
    auVar80._0_8_ = auVar73._0_8_;
    auVar80._12_4_ = _LC2;
    local_1f20 = (undefined1  [16])0x0;
    auVar82._8_4_ = _LC2;
    auVar82._0_8_ = auVar73._0_8_;
    auVar82._12_4_ = _LC2;
    auVar81._8_4_ = _LC2;
    auVar81._0_8_ = auVar73._0_8_;
    auVar81._12_4_ = _LC2;
    uVar35 = 1;
    peVar18 = local_e80;
    uVar30 = __LC28;
    uVar39 = _UNK_001171c4;
    uVar41 = _UNK_001171c8;
    uVar44 = _UNK_001171cc;
    local_1f50 = _local_1ec0;
    local_1f40 = _local_1ec0;
    _local_1f30 = _local_1ec0;
    do {
      auVar80 = maxps(auVar80,*(undefined1 (*) [16])(peVar18 + 0x50));
      uVar35 = uVar35 + 1;
      local_1f50 = minps(local_1f50,*(undefined1 (*) [16])(peVar18 + 0x40));
      auVar81 = maxps(auVar81,*(undefined1 (*) [16])(peVar18 + 0x10));
      local_1f20._0_4_ = local_1f20._0_4_ + *(int *)(local_290 + lVar33);
      local_1f20._4_4_ = local_1f20._4_4_ + *(int *)(local_290 + lVar33 + 4);
      local_1f20._8_4_ = local_1f20._8_4_ + *(int *)(local_290 + lVar33 + 8);
      local_1f20._12_4_ = local_1f20._12_4_ + *(int *)(local_290 + lVar33 + 0xc);
      _local_1f30 = minps(_local_1f30,*(undefined1 (*) [16])peVar18);
      auVar82 = maxps(auVar82,*(undefined1 (*) [16])(peVar18 + 0x30));
      fVar43 = auVar80._4_4_ - local_1f50._4_4_;
      fVar46 = auVar80._8_4_ - local_1f50._8_4_;
      fVar66 = auVar81._4_4_ - SUB164(_local_1f30,4);
      fVar68 = auVar81._8_4_ - SUB164(_local_1f30,8);
      local_1f40 = minps(local_1f40,*(undefined1 (*) [16])(peVar18 + 0x20));
      fVar63 = auVar82._4_4_ - local_1f40._4_4_;
      fVar64 = auVar82._8_4_ - local_1f40._8_4_;
      fVar43 = (fVar43 + fVar46) * (auVar80._0_4_ - local_1f50._0_4_) + fVar43 * fVar46;
      uVar77 = (uint)(local_1f20._0_4_ + iVar40) >> in_ECX;
      uVar60 = (uint)(local_1f20._4_4_ + iVar40) >> in_ECX;
      uVar61 = (uint)(local_1f20._8_4_ + iVar40) >> in_ECX;
      uVar62 = (uint)(local_1f20._12_4_ + iVar40) >> in_ECX;
      local_1f00 = (uint)__LC35;
      uStack_1efc = (uint)((ulong)__LC35 >> 0x20);
      uStack_1ef8 = (uint)_UNK_001171f8;
      uStack_1ef4 = (uint)((ulong)_UNK_001171f8 >> 0x20);
      uVar50 = (uint)(*(int *)(local_1c80 + lVar33) + iVar40) >> in_ECX;
      uVar54 = (uint)(*(int *)((long)aiStack_1c7c + lVar33) + iVar40) >> in_ECX;
      uVar55 = (uint)(*(int *)((long)aiStack_1c7c + lVar33 + 4) + iVar40) >> in_ECX;
      uVar76 = (uint)(*(int *)((long)aiStack_1c7c + lVar33 + 8) + iVar40) >> in_ECX;
      local_1f70 = (uint)__LC36;
      uStack_1f6c = (uint)((ulong)__LC36 >> 0x20);
      uStack_1f68 = (uint)_UNK_00117208;
      uStack_1f64 = (uint)((ulong)_UNK_00117208 >> 0x20);
      pfVar25 = (float *)((long)local_1e80 + lVar33);
      lVar28 = lVar33 + 4;
      lVar13 = lVar33 + 8;
      lVar14 = lVar33 + 0xc;
      lVar33 = lVar33 + 0x10;
      fVar46 = ((float)(int)(uVar77 & local_1f00) + (float)((int)uVar77 >> 0x1f & local_1f70)) *
               ((fVar66 + fVar68) * (auVar81._0_4_ - SUB164(_local_1f30,0)) + fVar66 * fVar68) +
               ((float)(int)(uVar50 & local_1f00) + (float)((int)uVar50 >> 0x1f & local_1f70)) *
               *pfVar25;
      fVar63 = ((float)(int)(uVar60 & uStack_1efc) + (float)((int)uVar60 >> 0x1f & uStack_1f6c)) *
               ((fVar63 + fVar64) * (auVar82._0_4_ - local_1f40._0_4_) + fVar63 * fVar64) +
               ((float)(int)(uVar54 & uStack_1efc) + (float)((int)uVar54 >> 0x1f & uStack_1f6c)) *
               *(float *)((long)local_1e80 + lVar28);
      fVar64 = ((float)(int)(uVar61 & uStack_1ef8) + (float)((int)uVar61 >> 0x1f & uStack_1f68)) *
               fVar43 + ((float)(int)(uVar55 & uStack_1ef8) +
                        (float)((int)uVar55 >> 0x1f & uStack_1f68)) *
                        *(float *)((long)local_1e80 + lVar13);
      fVar43 = ((float)(int)(uVar62 & uStack_1ef4) + (float)((int)uVar62 >> 0x1f & uStack_1f64)) *
               fVar43 + ((float)(int)(uVar76 & uStack_1ef4) +
                        (float)((int)uVar76 >> 0x1f & uStack_1f64)) *
                        *(float *)((long)local_1e80 + lVar14);
      uVar50 = -(uint)(fVar46 < SUB164(_local_1ec0,0));
      uVar54 = -(uint)(fVar63 < SUB164(_local_1ec0,4));
      uVar55 = -(uint)(fVar64 < SUB164(_local_1ec0,8));
      uVar76 = -(uint)(fVar43 < SUB164(_local_1ec0,0xc));
      local_1f10._0_4_ = uVar30 & uVar50 | ~uVar50 & local_1f10._0_4_;
      local_1f10._4_4_ = uVar39 & uVar54 | ~uVar54 & local_1f10._4_4_;
      local_1f10._8_4_ = uVar41 & uVar55 | ~uVar55 & local_1f10._8_4_;
      local_1f10._12_4_ = uVar44 & uVar76 | ~uVar76 & local_1f10._12_4_;
      auVar38._4_4_ = uVar54 & (uint)fVar63;
      auVar38._0_4_ = uVar50 & (uint)fVar46;
      auVar59._0_4_ = ~uVar50 & (uint)SUB164(_local_1ec0,0);
      auVar59._4_4_ = ~uVar54 & (uint)SUB164(_local_1ec0,4);
      auVar59._8_4_ = ~uVar55 & (uint)SUB164(_local_1ec0,8);
      auVar59._12_4_ = ~uVar76 & (uint)SUB164(_local_1ec0,0xc);
      auVar38._8_4_ = uVar55 & (uint)fVar64;
      auVar38._12_4_ = uVar76 & (uint)fVar43;
      _local_1ec0 = auVar38 | auVar59;
      peVar18 = peVar18 + 0x60;
      uVar30 = uVar30 + __LC28;
      uVar39 = uVar39 + _UNK_001171c4;
      uVar41 = uVar41 + _UNK_001171c8;
      uVar44 = uVar44 + _UNK_001171cc;
    } while (uVar35 < uVar24);
    local_1eb0._4_4_ = local_1f10._4_4_;
    local_1eb0._0_4_ = local_1f10._0_4_;
    local_1eb0._8_4_ = local_1f10._8_4_;
    local_1eb0._12_4_ = local_1f10._12_4_;
  }
  if ((fVar83 == 0.0) || (_LC20 < (float)local_1ec0._0_4_)) {
LAB_001011cd:
    iVar40 = 0;
    uVar26 = 0xffffffff;
    fVar43 = _LC4;
  }
  else {
    uVar26 = 0;
    fVar43 = (float)local_1ec0._0_4_;
    iVar40 = local_1eb0._0_4_;
    if (local_1eb0._0_4_ == 0) goto LAB_001011cd;
  }
  if (((fVar84 != 0.0) && ((float)local_1ec0._4_4_ < fVar43)) && (local_1eb0._4_4_ != 0)) {
    uVar26 = 1;
    iVar40 = local_1eb0._4_4_;
    fVar43 = (float)local_1ec0._4_4_;
  }
  if (((fVar85 != 0.0) && (fStack_1eb8 < fVar43)) && (local_1eb0._8_4_ != 0)) {
    uVar26 = 2;
    iVar40 = local_1eb0._8_4_;
    fVar43 = fStack_1eb8;
  }
  *(undefined4 *)(param_1 + 4) = uVar26;
  *(int *)(param_1 + 8) = iVar40;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(ulong *)(param_1 + 0x10) = uVar24;
  *(float *)param_1 = fVar43;
  *(float *)(param_1 + 0x20) = fVar49;
  *(float *)(param_1 + 0x24) = fVar47;
  *(float *)(param_1 + 0x28) = fVar67;
  *(float *)(param_1 + 0x2c) = fVar69;
  *(float *)(param_1 + 0x30) = fVar83;
  *(float *)(param_1 + 0x34) = fVar84;
  *(float *)(param_1 + 0x38) = fVar85;
  *(uint *)(param_1 + 0x3c) = -(uint)bVar1 & auVar52._12_4_;
LAB_0010126f:
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
                    /* WARNING: Could not recover jumptable at 0x00101b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
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
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  void *pvVar13;
  long in_FS_OFFSET;
  bool local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = param_2 - 1;
  if (param_3) {
LAB_00101b88:
    uVar9 = embree::TaskScheduler::threadID();
    lVar2 = (uVar9 & *(ulong *)(this + 8)) * 8;
    pFVar3 = this + lVar2 + 0x78;
    puVar5 = *(ulong **)pFVar3;
    if (puVar5 != (ulong *)0x0) {
      puVar11 = *(undefined8 **)this;
      if (puVar11 != (undefined8 *)0x0) {
        puVar11 = puVar11 + 0xa9;
      }
      uVar12 = -param_2 & lVar8 + *param_1;
      LOCK();
      uVar9 = *puVar5;
      *puVar5 = *puVar5 + uVar12;
      UNLOCK();
      if (uVar9 <= puVar5[2]) {
        uVar10 = puVar5[2] - uVar9;
        if (uVar12 < puVar5[2] - uVar9) {
          uVar10 = uVar12;
        }
        *param_1 = uVar10;
        if ((puVar11 != (undefined8 *)0x0) && (puVar5[1] < uVar10 + uVar9)) {
          uVar12 = puVar5[1];
          if (puVar5[1] <= uVar9) {
            uVar12 = uVar9;
          }
          (**(code **)*puVar11)(puVar11,(uVar10 + uVar9) - uVar12,1);
        }
        if ((long)puVar5 + uVar9 + 0x40 != 0) goto LAB_00101ed0;
      }
      if (this[0x109] == (FastAllocator)0x0) goto LAB_001028a8;
    }
    if (0x1fffc0 < *param_1) goto LAB_001028a8;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        uVar9 = lVar8 + *param_1 & -param_2;
        uVar12 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar12 = *(ulong *)(this + 0x20);
        }
        if (uVar9 < uVar12) {
          uVar9 = uVar12;
        }
        uVar6 = *(undefined8 *)(this + lVar2 + 0xb8);
        FVar4 = this[0x108];
        plVar7 = *(long **)this;
        if (*(int *)(this + 0x148) == 1) {
          if (uVar9 < 0x1fffc0) {
LAB_00101cf0:
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x20))(plVar7,uVar9 + 0x80,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar11 = (undefined8 *)embree::alignedMalloc(uVar9 + 0x40,0x40);
            }
            else {
              puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7,uVar9 + 0x40,0x40);
            }
            *puVar11 = 0;
            puVar11[1] = uVar9;
            puVar11[2] = uVar9;
LAB_00101d4d:
            puVar11[4] = 0x40;
            *(undefined4 *)(puVar11 + 5) = 0;
            puVar11[3] = uVar6;
            *(undefined1 *)((long)puVar11 + 0x2c) = 0;
          }
          else {
            uVar9 = uVar9 + 0x103f & 0xfffffffffffff000;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x20))(plVar7,uVar9,0);
            }
            puVar11 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
            *puVar11 = 0;
            puVar11[1] = uVar9 - 0x40;
            puVar11[2] = uVar9 - 0x40;
            puVar11[3] = uVar6;
            puVar11[4] = 0;
            *(undefined4 *)(puVar11 + 5) = 1;
            *(bool *)((long)puVar11 + 0x2c) = local_41;
          }
        }
        else {
          puVar11 = (undefined8 *)0x0;
          if (*(int *)(this + 0x148) == 0) {
            if (uVar9 != 0x3fffc0) goto LAB_00101cf0;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x20))(plVar7,0x400040);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar11 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
            }
            else {
              puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7,0x400000,0x40);
            }
            pvVar13 = (void *)((ulong)puVar11 & 0xffffffffffe00000);
            embree::os_advise(pvVar13,0x200000);
            embree::os_advise((void *)((long)pvVar13 + 0x200000),0x200000);
            embree::os_advise((void *)((long)pvVar13 + 0x400000),0x200000);
            *puVar11 = 0;
            puVar11[1] = 0x3fffc0;
            puVar11[2] = 0x3fffc0;
            goto LAB_00101d4d;
          }
        }
        LOCK();
        *(undefined8 **)pFVar3 = puVar11;
        UNLOCK();
        LOCK();
        *(undefined8 **)(this + lVar2 + 0xb8) = puVar11;
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
          uVar6 = *(undefined8 *)(this + 0xf8);
          if (*(ulong *)(this + 0x28) < uVar9) {
            uVar9 = *(ulong *)(this + 0x28);
          }
          FVar4 = this[0x108];
          plVar7 = *(long **)this;
          if (*(int *)(this + 0x148) == 1) {
            if (uVar9 < 0x1fffc0) {
LAB_001020b6:
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x20))(plVar7,uVar9 + 0x80,0);
              }
              if (FVar4 == (FastAllocator)0x0) {
                puVar11 = (undefined8 *)embree::alignedMalloc(uVar9 + 0x40,0x40);
              }
              else {
                puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7,uVar9 + 0x40,0x40);
              }
              *puVar11 = 0;
              puVar11[1] = uVar9;
              puVar11[2] = uVar9;
LAB_0010210a:
              puVar11[4] = 0x40;
              *(undefined4 *)(puVar11 + 5) = 0;
              puVar11[3] = uVar6;
              *(undefined1 *)((long)puVar11 + 0x2c) = 0;
            }
            else {
              uVar9 = uVar9 + 0x103f & 0xfffffffffffff000;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x20))(plVar7,uVar9,0);
              }
              puVar11 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
              *puVar11 = 0;
              puVar11[1] = uVar9 - 0x40;
              puVar11[2] = uVar9 - 0x40;
              puVar11[3] = uVar6;
              puVar11[4] = 0;
              *(undefined4 *)(puVar11 + 5) = 1;
              *(bool *)((long)puVar11 + 0x2c) = local_41;
            }
          }
          else {
            puVar11 = (undefined8 *)0x0;
            if (*(int *)(this + 0x148) == 0) {
              if (uVar9 != 0x3fffc0) goto LAB_001020b6;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x20))(plVar7,0x400040);
              }
              if (FVar4 == (FastAllocator)0x0) {
                puVar11 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
              }
              else {
                puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7,0x400000,0x40);
              }
              pvVar13 = (void *)((ulong)puVar11 & 0xffffffffffe00000);
              embree::os_advise(pvVar13,0x200000);
              embree::os_advise((void *)((long)pvVar13 + 0x200000),0x200000);
              embree::os_advise((void *)((long)pvVar13 + 0x400000),0x200000);
              *puVar11 = 0;
              puVar11[1] = 0x3fffc0;
              puVar11[2] = 0x3fffc0;
              goto LAB_0010210a;
            }
          }
          LOCK();
          *(undefined8 **)pFVar3 = puVar11;
          UNLOCK();
          LOCK();
          *(undefined8 **)(this + 0xf8) = puVar11;
          UNLOCK();
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
          *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
          LOCK();
          *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)pFVar3 = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0x100) = uVar6;
          UNLOCK();
        }
      }
      embree::MutexSys::unlock();
    }
    goto LAB_00101b88;
  }
  do {
    uVar9 = embree::TaskScheduler::threadID();
    lVar2 = (uVar9 & *(ulong *)(this + 8)) * 8;
    pFVar3 = this + lVar2 + 0x78;
    puVar5 = *(ulong **)pFVar3;
    if (puVar5 != (ulong *)0x0) {
      puVar11 = *(undefined8 **)this;
      if (puVar11 != (undefined8 *)0x0) {
        puVar11 = puVar11 + 0xa9;
      }
      uVar9 = -param_2 & lVar8 + *param_1;
      if (*puVar5 + uVar9 <= puVar5[2]) {
        LOCK();
        uVar12 = *puVar5;
        *puVar5 = *puVar5 + uVar9;
        UNLOCK();
        if ((uVar9 + uVar12 <= puVar5[2]) && (uVar12 <= puVar5[2])) {
          uVar10 = puVar5[2] - uVar12;
          if (uVar9 < puVar5[2] - uVar12) {
            uVar10 = uVar9;
          }
          *param_1 = uVar10;
          if (puVar11 != (undefined8 *)0x0) {
            if (uVar10 + uVar12 <= puVar5[1]) {
              if ((long)puVar5 + uVar12 + 0x40 == 0) goto LAB_00101db5;
              goto LAB_00101ed0;
            }
            uVar9 = puVar5[1];
            if (puVar5[1] < uVar12) {
              uVar9 = uVar12;
            }
            (**(code **)*puVar11)(puVar11,(uVar10 + uVar12) - uVar9,1);
          }
          if ((long)puVar5 + uVar12 + 0x40 != 0) {
LAB_00101ed0:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
LAB_00101db5:
      if (this[0x109] == (FastAllocator)0x0) {
LAB_001028a8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_001028a8;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        uVar12 = lVar8 + *param_1 & -param_2;
        uVar9 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar9 = *(ulong *)(this + 0x20);
        }
        if (uVar12 < uVar9) {
          uVar12 = uVar9;
        }
        uVar6 = *(undefined8 *)(this + lVar2 + 0xb8);
        FVar4 = this[0x108];
        plVar7 = *(long **)this;
        if (*(int *)(this + 0x148) == 1) {
          if (uVar12 < 0x1fffc0) {
LAB_00102196:
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x20))(plVar7,uVar12 + 0x80,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar11 = (undefined8 *)embree::alignedMalloc(uVar12 + 0x40,0x40);
            }
            else {
              puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7,uVar12 + 0x40,0x40);
            }
            *puVar11 = 0;
            puVar11[1] = uVar12;
            puVar11[2] = uVar12;
            puVar11[3] = uVar6;
            puVar11[4] = 0x40;
            *(undefined4 *)(puVar11 + 5) = 0;
            *(undefined1 *)((long)puVar11 + 0x2c) = 0;
          }
          else {
            uVar9 = uVar12 + 0x103f & 0xfffffffffffff000;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x20))(plVar7,uVar9,0);
            }
            puVar11 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
            *puVar11 = 0;
            puVar11[1] = uVar9 - 0x40;
            puVar11[2] = uVar9 - 0x40;
            puVar11[3] = uVar6;
            puVar11[4] = 0;
            *(undefined4 *)(puVar11 + 5) = 1;
            *(bool *)((long)puVar11 + 0x2c) = local_41;
          }
        }
        else {
          puVar11 = (undefined8 *)0x0;
          if (*(int *)(this + 0x148) == 0) {
            if (uVar12 != 0x3fffc0) goto LAB_00102196;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x20))(plVar7,0x400040,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar11 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
            }
            else {
              puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7,0x400000,0x40);
            }
            pvVar13 = (void *)((ulong)puVar11 & 0xffffffffffe00000);
            embree::os_advise(pvVar13,0x200000);
            embree::os_advise((void *)((long)pvVar13 + 0x200000),0x200000);
            embree::os_advise((void *)((long)pvVar13 + 0x400000),0x200000);
            *puVar11 = 0;
            puVar11[1] = 0x3fffc0;
            puVar11[2] = 0x3fffc0;
            puVar11[3] = uVar6;
            puVar11[4] = 0x40;
            *(undefined4 *)(puVar11 + 5) = 0;
            *(undefined1 *)((long)puVar11 + 0x2c) = 0;
          }
        }
        LOCK();
        *(undefined8 **)pFVar3 = puVar11;
        UNLOCK();
        LOCK();
        *(undefined8 **)(this + lVar2 + 0xb8) = puVar11;
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
          uVar12 = *(long *)(this + 0x20) << ((byte)uVar9 & 0x3f);
          uVar9 = *(ulong *)(this + 0x28);
          if (uVar12 <= *(ulong *)(this + 0x28)) {
            uVar9 = uVar12;
          }
          uVar6 = *(undefined8 *)(this + 0xf8);
          FVar4 = this[0x108];
          plVar7 = *(long **)this;
          if (*(int *)(this + 0x148) == 1) {
            if (uVar9 < 0x1fffc0) {
LAB_00102607:
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x20))(plVar7,uVar9 + 0x80,0);
              }
              if (FVar4 == (FastAllocator)0x0) {
                puVar11 = (undefined8 *)embree::alignedMalloc(uVar9 + 0x40,0x40);
              }
              else {
                puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7,uVar9 + 0x40,0x40);
              }
              *puVar11 = 0;
              puVar11[1] = uVar9;
              puVar11[2] = uVar9;
              puVar11[3] = uVar6;
              puVar11[4] = 0x40;
              *(undefined4 *)(puVar11 + 5) = 0;
              *(undefined1 *)((long)puVar11 + 0x2c) = 0;
            }
            else {
              uVar9 = uVar9 + 0x103f & 0xfffffffffffff000;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x20))(plVar7,uVar9,0);
              }
              puVar11 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
              *puVar11 = 0;
              puVar11[1] = uVar9 - 0x40;
              puVar11[2] = uVar9 - 0x40;
              puVar11[3] = uVar6;
              puVar11[4] = 0;
              *(undefined4 *)(puVar11 + 5) = 1;
              *(bool *)((long)puVar11 + 0x2c) = local_41;
            }
          }
          else {
            puVar11 = (undefined8 *)0x0;
            if (*(int *)(this + 0x148) == 0) {
              if (uVar9 != 0x3fffc0) goto LAB_00102607;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x20))(plVar7,0x400040,0);
              }
              if (FVar4 == (FastAllocator)0x0) {
                puVar11 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
              }
              else {
                puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7,0x400000,0x40);
              }
              pvVar13 = (void *)((ulong)puVar11 & 0xffffffffffe00000);
              embree::os_advise(pvVar13,0x200000);
              embree::os_advise((void *)((long)pvVar13 + 0x200000),0x200000);
              embree::os_advise((void *)((long)pvVar13 + 0x400000),0x200000);
              *puVar11 = 0;
              puVar11[1] = 0x3fffc0;
              puVar11[2] = 0x3fffc0;
              puVar11[3] = uVar6;
              puVar11[4] = 0x40;
              *(undefined4 *)(puVar11 + 5) = 0;
              *(undefined1 *)((long)puVar11 + 0x2c) = 0;
            }
          }
          LOCK();
          *(undefined8 **)pFVar3 = puVar11;
          UNLOCK();
          LOCK();
          *(undefined8 **)(this + 0xf8) = puVar11;
          UNLOCK();
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
          *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
          LOCK();
          *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)pFVar3 = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0x100) = uVar6;
          UNLOCK();
        }
      }
      embree::MutexSys::unlock();
    }
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
    if (0xfffffffffffffffe < uVar1) goto LAB_001029b0;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_001029b0:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00102939;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00102939:
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
    if (0xfffffffffffffffe < uVar3) goto LAB_00102b40;
    uVar8 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar8 = uVar3 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_00102b4a:
    puVar7 = (undefined8 *)operator_new(uVar8);
    lVar10 = uVar8 + (long)puVar7;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar1)) = *param_3;
    puVar4 = puVar7 + 1;
    *param_3 = 0;
    if (param_2 != puVar1) {
LAB_00102ab1:
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
    if (param_2 == puVar5) goto LAB_00102b04;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar3) {
LAB_00102b40:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_00102b4a;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_00102b4a;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)((long)param_2 - (long)puVar1) = *param_3;
    puVar4 = (undefined8 *)&DAT_00000008;
    *param_3 = 0;
    if (param_2 != puVar1) goto LAB_00102ab1;
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
LAB_00102b04:
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,*(long *)(this + 0x10) - (long)puVar1);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar4;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Set3, embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::createLargeLeaf(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > const&, embree::FastAllocator::CachedAllocator) */

undefined8 *
embree::sse2::GeneralBVHBuilder::
BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
::createLargeLeaf(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FastAllocator *this;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  undefined4 unaff_EBX;
  ulong uVar17;
  undefined8 unaff_RBP;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined4 unaff_R12D;
  ulong *puVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  FastAllocator *in_stack_00000008;
  ulong *in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong local_6d8;
  ulong local_6d0 [17];
  ulong local_648;
  bool local_640 [8];
  undefined8 local_638;
  ulong uStack_630;
  undefined8 local_628;
  ulong auStack_620 [8];
  undefined1 local_5e0;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  long local_598;
  long local_590;
  undefined1 local_580;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  long local_538;
  long local_530;
  undefined1 local_520;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  long local_4d8;
  long local_4d0;
  undefined1 local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  long local_478;
  long local_470;
  undefined1 local_460;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  long local_418;
  long local_410;
  undefined1 local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  long local_3b8;
  long local_3b0;
  undefined1 local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  long local_358;
  long local_350;
  undefined1 local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  long local_2f8;
  long local_2f0;
  undefined1 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  long local_298;
  long local_290;
  undefined1 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  long local_238;
  long local_230;
  undefined1 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  long local_1d8;
  long local_1d0;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  long local_178;
  long local_170;
  undefined1 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  long local_118;
  long local_110;
  undefined1 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  long local_b8;
  long local_b0;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  long local_58;
  long local_50;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar22 = in_stack_00000010;
  this = in_stack_00000008;
  uVar4 = _LC4;
  uVar3 = _LC2;
  bVar24 = 0;
  uVar23 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] < uVar23) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar10 = param_1[4];
  uVar5 = param_2[0xb] - param_2[10];
  if (uVar10 < uVar5) {
    local_648 = uVar23;
    local_638 = param_2[2];
    uStack_630 = param_2[3];
    auStack_620[5] = param_2[10];
    auStack_620[6] = param_2[0xb];
    local_628 = param_2[4];
    auStack_620[0] = param_2[5];
    local_640[0] = (bool)(char)param_2[1];
    auStack_620[1] = param_2[6];
    auStack_620[2] = param_2[7];
    auStack_620[3] = param_2[8];
    auStack_620[4] = param_2[9];
    if (uVar10 < param_2[0xb] - param_2[10]) {
      lVar13 = 0;
      plVar1 = (long *)param_1[9];
      uVar17 = 1;
      puVar14 = &local_648;
LAB_00102d50:
      do {
        lVar16 = *plVar1;
        uVar9 = auStack_620[lVar13 * 0xc + 5];
        uVar19 = auStack_620[lVar13 * 0xc + 6];
        uVar21 = uVar9 + uVar19 >> 1;
        if (uVar9 < uVar21) {
          auVar31._4_4_ = _LC2;
          auVar31._0_4_ = _LC2;
          auVar31._8_4_ = _LC2;
          auVar31._12_4_ = _LC2;
          auVar32._4_4_ = _LC4;
          auVar32._0_4_ = _LC4;
          auVar32._8_4_ = _LC4;
          auVar32._12_4_ = _LC4;
          auVar33._4_4_ = _LC2;
          auVar33._0_4_ = _LC2;
          auVar33._8_4_ = _LC2;
          auVar33._12_4_ = _LC2;
          auVar34._4_4_ = _LC4;
          auVar34._0_4_ = _LC4;
          auVar34._8_4_ = _LC4;
          auVar34._12_4_ = _LC4;
          pauVar8 = (undefined1 (*) [16])(uVar9 * 0x20 + lVar16);
          do {
            auVar25._0_4_ = *(float *)pauVar8[1] + *(float *)*pauVar8;
            auVar25._4_4_ = *(float *)(pauVar8[1] + 4) + *(float *)(*pauVar8 + 4);
            auVar25._8_4_ = *(float *)(pauVar8[1] + 8) + *(float *)(*pauVar8 + 8);
            auVar25._12_4_ = *(float *)(pauVar8[1] + 0xc) + *(float *)(*pauVar8 + 0xc);
            pauVar7 = pauVar8 + 2;
            auVar34 = minps(auVar34,*pauVar8);
            auVar33 = maxps(auVar33,pauVar8[1]);
            auVar32 = minps(auVar32,auVar25);
            auVar31 = maxps(auVar31,auVar25);
            pauVar8 = pauVar7;
          } while (pauVar7 != (undefined1 (*) [16])(uVar21 * 0x20 + lVar16));
        }
        else {
          auVar31._4_4_ = _LC2;
          auVar31._0_4_ = _LC2;
          auVar31._8_4_ = _LC2;
          auVar31._12_4_ = _LC2;
          auVar32._4_4_ = _LC4;
          auVar32._0_4_ = _LC4;
          auVar32._8_4_ = _LC4;
          auVar32._12_4_ = _LC4;
          auVar33._4_4_ = _LC2;
          auVar33._0_4_ = _LC2;
          auVar33._8_4_ = _LC2;
          auVar33._12_4_ = _LC2;
          auVar34._4_4_ = _LC4;
          auVar34._0_4_ = _LC4;
          auVar34._8_4_ = _LC4;
          auVar34._12_4_ = _LC4;
        }
        if (uVar21 < uVar19) {
          auVar27._4_4_ = _LC2;
          auVar27._0_4_ = _LC2;
          auVar27._8_4_ = _LC2;
          auVar27._12_4_ = _LC2;
          auVar28._4_4_ = _LC4;
          auVar28._0_4_ = _LC4;
          auVar28._8_4_ = _LC4;
          auVar28._12_4_ = _LC4;
          auVar29._4_4_ = _LC2;
          auVar29._0_4_ = _LC2;
          auVar29._8_4_ = _LC2;
          auVar29._12_4_ = _LC2;
          auVar30._4_4_ = _LC4;
          auVar30._0_4_ = _LC4;
          auVar30._8_4_ = _LC4;
          auVar30._12_4_ = _LC4;
          pauVar8 = (undefined1 (*) [16])(uVar21 * 0x20 + lVar16);
          do {
            auVar26._0_4_ = *(float *)pauVar8[1] + *(float *)*pauVar8;
            auVar26._4_4_ = *(float *)(pauVar8[1] + 4) + *(float *)(*pauVar8 + 4);
            auVar26._8_4_ = *(float *)(pauVar8[1] + 8) + *(float *)(*pauVar8 + 8);
            auVar26._12_4_ = *(float *)(pauVar8[1] + 0xc) + *(float *)(*pauVar8 + 0xc);
            pauVar7 = pauVar8 + 2;
            auVar30 = minps(auVar30,*pauVar8);
            auVar29 = maxps(auVar29,pauVar8[1]);
            auVar28 = minps(auVar28,auVar26);
            auVar27 = maxps(auVar27,auVar26);
            pauVar8 = pauVar7;
          } while (pauVar7 != (undefined1 (*) [16])(lVar16 + uVar19 * 0x20));
        }
        else {
          auVar27._4_4_ = _LC2;
          auVar27._0_4_ = _LC2;
          auVar27._8_4_ = _LC2;
          auVar27._12_4_ = _LC2;
          auVar28._4_4_ = _LC4;
          auVar28._0_4_ = _LC4;
          auVar28._8_4_ = _LC4;
          auVar28._12_4_ = _LC4;
          auVar29._4_4_ = _LC2;
          auVar29._0_4_ = _LC2;
          auVar29._8_4_ = _LC2;
          auVar29._12_4_ = _LC2;
          auVar30._4_4_ = _LC4;
          auVar30._0_4_ = _LC4;
          auVar30._8_4_ = _LC4;
          auVar30._12_4_ = _LC4;
        }
        uVar17 = uVar17 + 1;
        puVar15 = puVar14 + 0xc;
        *(ulong *)(local_640 + lVar13 * 0x60 + -8) = *puVar14;
        local_640[lVar13 * 0x60] = SUB81(puVar14[1],0);
        uVar2 = puVar14[3];
        (&local_638)[lVar13 * 0xc] = puVar14[2];
        (&uStack_630)[lVar13 * 0xc] = uVar2;
        uVar2 = puVar14[5];
        (&local_628)[lVar13 * 0xc] = puVar14[4];
        auStack_620[lVar13 * 0xc] = uVar2;
        uVar2 = puVar14[7];
        auStack_620[lVar13 * 0xc + 1] = puVar14[6];
        auStack_620[lVar13 * 0xc + 2] = uVar2;
        uVar2 = puVar14[9];
        auStack_620[lVar13 * 0xc + 3] = puVar14[8];
        auStack_620[lVar13 * 0xc + 4] = uVar2;
        uVar2 = puVar14[0xb];
        auStack_620[lVar13 * 0xc + 5] = puVar14[10];
        auStack_620[lVar13 * 0xc + 6] = uVar2;
        *puVar14 = uVar23 + 1;
        *(undefined1 *)(puVar14 + 1) = 0;
        *(undefined1 (*) [16])(puVar14 + 2) = auVar34;
        *(undefined1 (*) [16])(puVar14 + 4) = auVar33;
        *(undefined1 (*) [16])(puVar14 + 6) = auVar32;
        *(undefined1 (*) [16])(puVar14 + 8) = auVar31;
        puVar14[10] = uVar9;
        puVar14[0xb] = uVar21;
        *puVar15 = uVar23 + 1;
        *(undefined1 *)(puVar14 + 0xd) = 0;
        *(undefined1 (*) [16])(puVar14 + 0xe) = auVar30;
        *(undefined1 (*) [16])(puVar14 + 0x10) = auVar29;
        *(undefined1 (*) [16])(puVar14 + 0x12) = auVar28;
        *(undefined1 (*) [16])(puVar14 + 0x14) = auVar27;
        puVar14[0x16] = uVar21;
        puVar14[0x17] = uVar19;
        if (*param_1 <= uVar17) {
          uVar23 = param_1[7];
          if (uVar5 <= uVar23) goto LAB_0010331d;
          local_640[0] = auStack_620[6] - auStack_620[5] <= uVar23;
          goto LAB_00103d43;
        }
        uVar9 = auStack_620[6] - auStack_620[5];
        lVar13 = 0;
        if (uVar9 <= uVar10) {
          uVar9 = 0;
          lVar13 = -1;
        }
        uVar19 = uVar9;
        if (uVar9 <= uVar10) {
          uVar19 = uVar10;
        }
        puVar14 = puVar15;
        if (uVar19 < (ulong)(local_590 - local_598)) {
          lVar13 = 1;
          uVar9 = local_590 - local_598;
          if (uVar17 == 2) goto LAB_00102d50;
LAB_00102f0e:
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_530 - local_538)) {
            lVar13 = 2;
            uVar9 = local_530 - local_538;
            if (uVar17 == 3) goto LAB_00102d50;
          }
          else if (uVar17 == 3) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_4d0 - local_4d8)) {
            lVar13 = 3;
            uVar9 = local_4d0 - local_4d8;
            if (uVar17 == 4) goto LAB_00102d50;
          }
          else if (uVar17 == 4) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_470 - local_478)) {
            lVar13 = 4;
            uVar9 = local_470 - local_478;
            if (uVar17 == 5) goto LAB_00102d50;
          }
          else if (uVar17 == 5) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_410 - local_418)) {
            lVar13 = 5;
            uVar9 = local_410 - local_418;
            if (uVar17 == 6) goto LAB_00102d50;
          }
          else if (uVar17 == 6) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_3b0 - local_3b8)) {
            lVar13 = 6;
            uVar9 = local_3b0 - local_3b8;
            if (uVar17 == 7) goto LAB_00102d50;
          }
          else if (uVar17 == 7) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_350 - local_358)) {
            lVar13 = 7;
            uVar9 = local_350 - local_358;
            if (uVar17 == 8) goto LAB_00102d50;
          }
          else if (uVar17 == 8) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_2f0 - local_2f8)) {
            lVar13 = 8;
            uVar9 = local_2f0 - local_2f8;
            if (uVar17 == 9) goto LAB_00102d50;
          }
          else if (uVar17 == 9) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_290 - local_298)) {
            lVar13 = 9;
            uVar9 = local_290 - local_298;
            if (uVar17 == 10) goto LAB_00102d50;
          }
          else if (uVar17 == 10) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_230 - local_238)) {
            lVar13 = 10;
            uVar9 = local_230 - local_238;
            if (uVar17 == 0xb) goto LAB_00102d50;
          }
          else if (uVar17 == 0xb) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_1d0 - local_1d8)) {
            lVar13 = 0xb;
            uVar9 = local_1d0 - local_1d8;
            if (uVar17 == 0xc) goto LAB_00102d50;
          }
          else if (uVar17 == 0xc) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_170 - local_178)) {
            lVar13 = 0xc;
            uVar9 = local_170 - local_178;
            if (uVar17 == 0xd) goto LAB_00102d50;
          }
          else if (uVar17 == 0xd) goto LAB_00103240;
          uVar19 = uVar9;
          if (uVar9 <= uVar10) {
            uVar19 = uVar10;
          }
          if (uVar19 < (ulong)(local_110 - local_118)) {
            lVar13 = 0xd;
            uVar9 = local_110 - local_118;
            if (uVar17 == 0xe) goto LAB_00102d50;
          }
          else if (uVar17 == 0xe) goto LAB_00103240;
          uVar19 = local_b0 - local_b8;
          if (uVar9 <= uVar10) {
            uVar9 = uVar10;
          }
          if (uVar9 < uVar19) {
            if (uVar17 == 0x10) {
              if (uVar19 <= uVar10) {
                uVar19 = uVar10;
              }
              lVar13 = (ulong)(uVar19 < (ulong)(local_50 - local_58)) + 0xe;
            }
            else {
              uVar17 = 0xf;
              lVar13 = 0xe;
            }
            goto LAB_00102d50;
          }
          if ((uVar17 == 0x10) && (uVar9 < (ulong)(local_50 - local_58))) {
            lVar13 = 0xf;
            goto LAB_00102d50;
          }
        }
        else if (uVar17 != 2) goto LAB_00102f0e;
LAB_00103240:
      } while (lVar13 != -1);
    }
    else {
      uVar17 = 1;
    }
    uVar23 = param_1[7];
    if ((uVar23 < uVar5) && (local_640[0] = auStack_620[6] - auStack_620[5] <= uVar23, uVar17 != 1))
    {
LAB_00103d43:
      local_5e0 = (ulong)(local_590 - local_598) <= uVar23;
      if (((uVar17 != 2) &&
          (((local_580 = (ulong)(local_530 - local_538) <= uVar23, uVar17 != 3 &&
            (local_520 = (ulong)(local_4d0 - local_4d8) <= uVar23, uVar17 != 4)) &&
           (local_4c0 = (ulong)(local_470 - local_478) <= uVar23, uVar17 != 5)))) &&
         ((((local_460 = (ulong)(local_410 - local_418) <= uVar23, uVar17 != 6 &&
            (local_400 = (ulong)(local_3b0 - local_3b8) <= uVar23, uVar17 != 7)) &&
           (local_3a0 = (ulong)(local_350 - local_358) <= uVar23, uVar17 != 8)) &&
          (((local_340 = (ulong)(local_2f0 - local_2f8) <= uVar23, uVar17 != 9 &&
            (local_2e0 = (ulong)(local_290 - local_298) <= uVar23, uVar17 != 10)) &&
           (((local_280 = (ulong)(local_230 - local_238) <= uVar23, uVar17 != 0xb &&
             (((local_220 = (ulong)(local_1d0 - local_1d8) <= uVar23, uVar17 != 0xc &&
               (local_1c0 = (ulong)(local_170 - local_178) <= uVar23, uVar17 != 0xd)) &&
              (local_160 = (ulong)(local_110 - local_118) <= uVar23, uVar17 != 0xe)))) &&
            (local_100 = (ulong)(local_b0 - local_b8) <= uVar23, uVar17 != 0xf)))))))) {
        local_a0 = (ulong)(local_50 - local_58) <= uVar23;
      }
    }
LAB_0010331d:
    local_6d8 = 0x80;
    uVar23 = *in_stack_00000010;
    if (in_stack_00000008 != *(FastAllocator **)(uVar23 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(uVar23 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(uVar23 + 8) + 0x118);
        *plVar1 = *plVar1 + *(long *)(uVar23 + 0xa8) + *(long *)(uVar23 + 0x68);
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar23 + 8) + 0x120);
        *plVar1 = *plVar1 + (((*(long *)(uVar23 + 0x98) + *(long *)(uVar23 + 0x58)) -
                             *(long *)(uVar23 + 0x50)) - *(long *)(uVar23 + 0x90));
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar23 + 8) + 0x128);
        *plVar1 = *plVar1 + *(long *)(uVar23 + 0xb0) + *(long *)(uVar23 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(uVar23 + 0x48) = 0;
      *(undefined8 *)(uVar23 + 0x58) = 0;
      *(undefined8 *)(uVar23 + 0x50) = 0;
      *(undefined8 *)(uVar23 + 0x68) = 0;
      *(undefined8 *)(uVar23 + 0x70) = 0;
      *(undefined8 *)(uVar23 + 0x60) = 0;
      if (this == (FastAllocator *)0x0) {
        *(undefined8 *)(uVar23 + 0x88) = 0;
        uVar11 = 0;
        *(undefined8 *)(uVar23 + 0x98) = 0;
        *(undefined8 *)(uVar23 + 0x90) = 0;
        *(undefined8 *)(uVar23 + 0xa8) = 0;
        *(undefined8 *)(uVar23 + 0xb0) = 0;
      }
      else {
        uVar11 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(uVar23 + 0x88) = 0;
        *(undefined8 *)(uVar23 + 0x98) = 0;
        *(undefined8 *)(uVar23 + 0x60) = uVar11;
        *(undefined8 *)(uVar23 + 0x90) = 0;
        *(undefined8 *)(uVar23 + 0xa8) = 0;
        *(undefined8 *)(uVar23 + 0xb0) = 0;
        *(undefined8 *)(uVar23 + 0xa0) = 0;
        uVar11 = *(undefined8 *)(this + 0x10);
      }
      *(undefined8 *)(uVar23 + 0xa0) = uVar11;
      LOCK();
      *(FastAllocator **)(uVar23 + 8) = this;
      UNLOCK();
      local_6d0[0] = uVar23;
      embree::MutexSys::lock();
      puVar14 = *(ulong **)(this + 0x138);
      if (puVar14 == *(ulong **)(this + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(this + 0x130),puVar14,local_6d0);
      }
      else {
        *puVar14 = uVar23;
        *(long *)(this + 0x138) = *(long *)(this + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
    }
    uVar10 = puVar22[2];
    puVar22[5] = puVar22[5] + 0x80;
    uVar5 = (ulong)(-(int)uVar10 & 0xf);
    uVar23 = uVar10 + 0x80 + uVar5;
    puVar22[2] = uVar23;
    if (puVar22[3] < uVar23) {
      puVar22[2] = uVar10;
      if (puVar22[4] < 0x200) {
        puVar6 = (undefined8 *)FastAllocator::malloc(this,&local_6d8,0x40,false);
      }
      else {
        local_6d0[0] = puVar22[4];
        puVar6 = (undefined8 *)FastAllocator::malloc(this,local_6d0,0x40,true);
        puVar22[1] = (ulong)puVar6;
        uVar23 = puVar22[2];
        puVar22[2] = 0x80;
        puVar22[6] = (puVar22[3] + puVar22[6]) - uVar23;
        puVar22[3] = local_6d0[0];
        if (local_6d0[0] < 0x80) {
          local_6d0[0] = puVar22[4];
          puVar22[2] = 0;
          puVar6 = (undefined8 *)FastAllocator::malloc(this,local_6d0,0x40,false);
          puVar22[1] = (ulong)puVar6;
          uVar23 = puVar22[2];
          puVar22[2] = 0x80;
          puVar22[6] = (puVar22[3] + puVar22[6]) - uVar23;
          puVar22[3] = local_6d0[0];
          if (local_6d0[0] < 0x80) {
            puVar6 = (undefined8 *)0x0;
            puVar22[2] = 0;
          }
        }
      }
    }
    else {
      puVar22[6] = puVar22[6] + uVar5;
      puVar6 = (undefined8 *)((puVar22[1] - 0x80) + uVar23);
    }
    *puVar6 = 8;
    puVar6[1] = 8;
    puVar6[2] = 8;
    puVar6[3] = 8;
    *(undefined4 *)(puVar6 + 4) = uVar4;
    *(undefined4 *)((long)puVar6 + 0x24) = uVar4;
    *(undefined4 *)(puVar6 + 5) = uVar4;
    *(undefined4 *)((long)puVar6 + 0x2c) = uVar4;
    *(undefined4 *)(puVar6 + 4) = (undefined4)local_638;
    *(undefined4 *)(puVar6 + 8) = uVar4;
    *(undefined4 *)((long)puVar6 + 0x44) = uVar4;
    *(undefined4 *)(puVar6 + 9) = uVar4;
    *(undefined4 *)((long)puVar6 + 0x4c) = uVar4;
    *(undefined4 *)(puVar6 + 8) = local_638._4_4_;
    *(undefined4 *)(puVar6 + 0xc) = uVar4;
    *(undefined4 *)((long)puVar6 + 100) = uVar4;
    *(undefined4 *)(puVar6 + 0xd) = uVar4;
    *(undefined4 *)((long)puVar6 + 0x6c) = uVar4;
    *(undefined4 *)(puVar6 + 0xe) = uVar3;
    *(undefined4 *)((long)puVar6 + 0x74) = uVar3;
    *(undefined4 *)(puVar6 + 0xf) = uVar3;
    *(undefined4 *)((long)puVar6 + 0x7c) = uVar3;
    *(undefined4 *)(puVar6 + 10) = uVar3;
    *(undefined4 *)((long)puVar6 + 0x54) = uVar3;
    *(undefined4 *)(puVar6 + 0xb) = uVar3;
    *(undefined4 *)((long)puVar6 + 0x5c) = uVar3;
    *(undefined4 *)(puVar6 + 6) = uVar3;
    *(undefined4 *)((long)puVar6 + 0x34) = uVar3;
    *(undefined4 *)(puVar6 + 7) = uVar3;
    *(undefined4 *)((long)puVar6 + 0x3c) = uVar3;
    *(undefined4 *)(puVar6 + 0xc) = (undefined4)uStack_630;
    *(undefined4 *)(puVar6 + 6) = (undefined4)local_628;
    *(undefined4 *)(puVar6 + 10) = local_628._4_4_;
    *(undefined4 *)(puVar6 + 0xe) = (undefined4)auStack_620[0];
    if (uVar17 != 1) {
      *(undefined4 *)((long)puVar6 + 0x44) = uStack_5d4;
      *(undefined4 *)((long)puVar6 + 100) = uStack_5d0;
      *(undefined4 *)((long)puVar6 + 0x24) = local_5d8;
      *(undefined4 *)((long)puVar6 + 0x34) = local_5c8;
      *(undefined4 *)((long)puVar6 + 0x54) = uStack_5c4;
      *(undefined4 *)((long)puVar6 + 0x74) = uStack_5c0;
      if (uVar17 != 2) {
        *(undefined4 *)(puVar6 + 9) = local_574;
        *(undefined4 *)(puVar6 + 0xd) = local_570;
        *(undefined4 *)(puVar6 + 5) = local_578;
        *(undefined4 *)(puVar6 + 7) = local_568;
        *(undefined4 *)(puVar6 + 0xb) = local_564;
        *(undefined4 *)(puVar6 + 0xf) = local_560;
        if (uVar17 != 3) {
          *(undefined4 *)((long)puVar6 + 0x4c) = local_514;
          *(undefined4 *)((long)puVar6 + 0x6c) = local_510;
          *(undefined4 *)((long)puVar6 + 0x2c) = local_518;
          *(undefined4 *)((long)puVar6 + 0x3c) = local_508;
          *(undefined4 *)((long)puVar6 + 0x5c) = local_504;
          *(undefined4 *)((long)puVar6 + 0x7c) = local_500;
          if (uVar17 != 4) {
            *(undefined4 *)(puVar6 + 10) = local_4b4;
            *(undefined4 *)(puVar6 + 0xe) = local_4b0;
            *(undefined4 *)(puVar6 + 6) = local_4b8;
            *(undefined4 *)(puVar6 + 8) = local_4a8;
            *(undefined4 *)(puVar6 + 0xc) = local_4a4;
            *(undefined4 *)(puVar6 + 0x10) = local_4a0;
            if (uVar17 != 5) {
              *(undefined4 *)((long)puVar6 + 0x54) = local_454;
              *(undefined4 *)((long)puVar6 + 0x74) = local_450;
              *(undefined4 *)((long)puVar6 + 0x34) = local_458;
              *(undefined4 *)((long)puVar6 + 0x44) = local_448;
              *(undefined4 *)((long)puVar6 + 100) = local_444;
              *(undefined4 *)((long)puVar6 + 0x84) = local_440;
              if (uVar17 != 6) {
                *(undefined4 *)(puVar6 + 0xb) = local_3f4;
                *(undefined4 *)(puVar6 + 0xf) = local_3f0;
                *(undefined4 *)(puVar6 + 7) = local_3f8;
                *(undefined4 *)(puVar6 + 9) = local_3e8;
                *(undefined4 *)(puVar6 + 0xd) = local_3e4;
                *(undefined4 *)(puVar6 + 0x11) = local_3e0;
                if (uVar17 != 7) {
                  *(undefined4 *)((long)puVar6 + 0x5c) = local_394;
                  *(undefined4 *)((long)puVar6 + 0x7c) = local_390;
                  *(undefined4 *)((long)puVar6 + 0x3c) = local_398;
                  *(undefined4 *)((long)puVar6 + 0x4c) = local_388;
                  *(undefined4 *)((long)puVar6 + 0x6c) = local_384;
                  *(undefined4 *)((long)puVar6 + 0x8c) = local_380;
                  if (uVar17 != 8) {
                    *(undefined4 *)(puVar6 + 0xc) = local_334;
                    *(undefined4 *)(puVar6 + 0x10) = local_330;
                    *(undefined4 *)(puVar6 + 8) = local_338;
                    *(undefined4 *)(puVar6 + 10) = local_328;
                    *(undefined4 *)(puVar6 + 0xe) = local_324;
                    *(undefined4 *)(puVar6 + 0x12) = local_320;
                    if (uVar17 != 9) {
                      *(undefined4 *)((long)puVar6 + 100) = local_2d4;
                      *(undefined4 *)((long)puVar6 + 0x84) = local_2d0;
                      *(undefined4 *)((long)puVar6 + 0x44) = local_2d8;
                      *(undefined4 *)((long)puVar6 + 0x54) = local_2c8;
                      *(undefined4 *)((long)puVar6 + 0x74) = local_2c4;
                      *(undefined4 *)((long)puVar6 + 0x94) = local_2c0;
                      if (uVar17 != 10) {
                        *(undefined4 *)(puVar6 + 0xd) = local_274;
                        *(undefined4 *)(puVar6 + 0x11) = local_270;
                        *(undefined4 *)(puVar6 + 9) = local_278;
                        *(undefined4 *)(puVar6 + 0xb) = local_268;
                        *(undefined4 *)(puVar6 + 0xf) = local_264;
                        *(undefined4 *)(puVar6 + 0x13) = local_260;
                        if (uVar17 != 0xb) {
                          *(undefined4 *)((long)puVar6 + 0x6c) = local_214;
                          *(undefined4 *)((long)puVar6 + 0x8c) = local_210;
                          *(undefined4 *)((long)puVar6 + 0x4c) = local_218;
                          *(undefined4 *)((long)puVar6 + 0x5c) = local_208;
                          *(undefined4 *)((long)puVar6 + 0x7c) = local_204;
                          *(undefined4 *)((long)puVar6 + 0x9c) = local_200;
                          if (uVar17 != 0xc) {
                            *(undefined4 *)(puVar6 + 0xe) = local_1b4;
                            *(undefined4 *)(puVar6 + 0x12) = local_1b0;
                            *(undefined4 *)(puVar6 + 10) = local_1b8;
                            *(undefined4 *)(puVar6 + 0xc) = local_1a8;
                            *(undefined4 *)(puVar6 + 0x10) = local_1a4;
                            *(undefined4 *)(puVar6 + 0x14) = local_1a0;
                            if (uVar17 != 0xd) {
                              *(undefined4 *)((long)puVar6 + 0x74) = local_154;
                              *(undefined4 *)((long)puVar6 + 0x94) = local_150;
                              *(undefined4 *)((long)puVar6 + 0x54) = local_158;
                              *(undefined4 *)((long)puVar6 + 100) = local_148;
                              *(undefined4 *)((long)puVar6 + 0x84) = local_144;
                              *(undefined4 *)((long)puVar6 + 0xa4) = local_140;
                              if (uVar17 != 0xe) {
                                *(undefined4 *)(puVar6 + 0xf) = local_f4;
                                *(undefined4 *)(puVar6 + 0x13) = local_f0;
                                *(undefined4 *)(puVar6 + 0xb) = local_f8;
                                *(undefined4 *)(puVar6 + 0xd) = local_e8;
                                *(undefined4 *)(puVar6 + 0x11) = local_e4;
                                *(undefined4 *)(puVar6 + 0x15) = local_e0;
                                if (uVar17 != 0xf) {
                                  *(undefined4 *)((long)puVar6 + 0x7c) = local_94;
                                  *(undefined4 *)((long)puVar6 + 0x9c) = local_90;
                                  *(undefined4 *)((long)puVar6 + 0x5c) = local_98;
                                  *(undefined4 *)((long)puVar6 + 0x6c) = local_88;
                                  *(undefined4 *)((long)puVar6 + 0x8c) = local_84;
                                  *(undefined4 *)((long)puVar6 + 0xac) = local_80;
                                  if (uVar17 == 0x11) {
                                    *(undefined4 *)(puVar6 + 0x10) = local_34;
                                    *(undefined4 *)(puVar6 + 0x14) = unaff_EBX;
                                    *(undefined4 *)(puVar6 + 0xc) = local_38;
                                    *(int *)(puVar6 + 0xe) = (int)unaff_RBP;
                                    *(int *)(puVar6 + 0x12) = (int)((ulong)unaff_RBP >> 0x20);
                                    *(undefined4 *)(puVar6 + 0x16) = unaff_R12D;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar23 = 0;
    puVar22 = &local_648;
    do {
      uVar10 = createLargeLeaf(param_1,puVar22);
      local_6d0[uVar23 + 1] = uVar10;
      uVar23 = uVar23 + 1;
      puVar22 = puVar22 + 0xc;
    } while (uVar23 != uVar17);
    plVar1 = (long *)param_1[0xc];
    *puVar6 = local_6d0[1];
    uVar10 = uVar23 * 8 & 0xffffffff;
    *(undefined8 *)((long)puVar6 + (uVar10 - 8)) = *(undefined8 *)((long)local_6d0 + uVar10);
    lVar13 = (long)puVar6 - (long)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((long)local_6d0 + (8 - lVar13));
    puVar20 = (undefined8 *)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
    for (uVar23 = (ulong)((uint)((int)(uVar23 * 8) + (int)lVar13) >> 3); uVar23 != 0;
        uVar23 = uVar23 - 1) {
      *puVar20 = *puVar12;
      puVar12 = puVar12 + (ulong)bVar24 * -2 + 1;
      puVar20 = puVar20 + (ulong)bVar24 * -2 + 1;
    }
    if ((char)param_2[1] != '\0') {
      uVar23 = param_2[10];
      lVar13 = *plVar1;
      uVar10 = param_2[0xb];
      lVar18 = uVar23 * 0x20 + plVar1[1];
      embree::MutexSys::lock();
      puVar12 = (undefined8 *)(lVar18 + 0x3fU & 0xffffffffffffffc0);
      lVar16 = ((uVar10 - uVar23) * 0x20 + lVar18) - (long)puVar12;
      if (0xfff < lVar16) {
        lVar16 = lVar16 + -0x40;
        uVar11 = *(undefined8 *)(lVar13 + 0x100);
        puVar12[1] = lVar16;
        puVar12[2] = lVar16;
        *puVar12 = 0;
        puVar12[3] = uVar11;
        puVar12[4] = (long)puVar12 - lVar18;
        *(undefined4 *)(puVar12 + 5) = 2;
        *(undefined1 *)((long)puVar12 + 0x2c) = 0;
        LOCK();
        *(undefined8 **)(lVar13 + 0x100) = puVar12;
        UNLOCK();
      }
      embree::MutexSys::unlock();
    }
  }
  else {
    puVar6 = (undefined8 *)
             (**(code **)**(undefined8 **)param_1[0xd])
                       (*(undefined8 **)param_1[0xd],param_1[8],param_2 + 10,&stack0x00000008);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Create2,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::createLargeLeaf(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > const&, embree::FastAllocator::CachedAllocator) */

ulong embree::sse2::GeneralBVHBuilder::
      BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
      ::createLargeLeaf(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  FastAllocator *this;
  ulong uVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  float fVar19;
  long lVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  long in_FS_OFFSET;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  byte bVar31;
  byte bVar32;
  uint uVar33;
  uint uVar34;
  byte bVar35;
  byte bVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  byte bVar40;
  byte bVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint uVar53;
  uint uVar54;
  float fVar55;
  float fVar56;
  uint uVar57;
  float fVar63;
  float fVar66;
  float fVar67;
  float fVar70;
  undefined1 auVar58 [16];
  uint uVar64;
  uint uVar68;
  float fVar71;
  uint uVar72;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  uint uVar65;
  uint uVar69;
  uint uVar73;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  uint uVar82;
  uint uVar84;
  uint uVar85;
  undefined1 auVar83 [16];
  uint uVar86;
  byte bVar87;
  float fVar88;
  byte bVar90;
  float fVar91;
  byte bVar92;
  float fVar93;
  byte bVar94;
  undefined1 auVar89 [16];
  float fVar95;
  undefined1 auVar96 [16];
  float fVar97;
  FastAllocator *in_stack_00000008;
  ulong *in_stack_00000010;
  undefined8 uStack_748;
  ulong local_710;
  ulong local_708;
  undefined8 local_700 [4];
  undefined1 local_6e0 [8];
  undefined8 uStack_6d8;
  float local_6d0;
  float fStack_6cc;
  float fStack_6c8;
  float fStack_6c4;
  undefined1 local_6c0 [8];
  undefined8 uStack_6b8;
  float local_6b0;
  float fStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  undefined1 local_6a0 [8];
  undefined8 uStack_698;
  float local_690;
  float fStack_68c;
  float fStack_688;
  float fStack_684;
  ulong local_650;
  bool local_648 [8];
  undefined8 local_640;
  ulong uStack_638;
  undefined8 local_630;
  ulong auStack_628 [8];
  bool local_5e8;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  float local_5d0;
  float fStack_5cc;
  float fStack_5c8;
  long local_5a0;
  long local_598;
  bool local_588;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  float local_570;
  float local_56c;
  float local_568;
  long local_540;
  long local_538;
  bool local_528;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  float local_510;
  float local_50c;
  float local_508;
  long local_4e0;
  long local_4d8;
  bool local_4c8;
  long local_480;
  long local_478;
  bool local_468;
  long local_420;
  long local_418;
  bool local_408;
  long local_3c0;
  long local_3b8;
  bool local_3a8;
  long local_360;
  long local_358;
  bool local_348;
  long local_300;
  long local_2f8;
  bool local_2e8;
  long local_2a0;
  long local_298;
  bool local_288;
  long local_240;
  long local_238;
  bool local_228;
  long local_1e0;
  long local_1d8;
  bool local_1c8;
  long local_180;
  long local_178;
  bool local_168;
  long local_120;
  long local_118;
  bool local_108;
  long local_c0;
  long local_b8;
  bool local_a8;
  long local_60;
  long local_58;
  long local_48;
  
  puVar27 = in_stack_00000010;
  this = in_stack_00000008;
  uVar13 = *param_2;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] < uVar13) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar26 = param_1[4];
  uVar12 = param_2[0xb] - param_2[10];
  if (uVar26 < uVar12) {
    local_650 = uVar13;
    local_640 = param_2[2];
    uStack_638 = param_2[3];
    local_648[0] = (bool)(char)param_2[1];
    local_630 = param_2[4];
    auStack_628[0] = param_2[5];
    auStack_628[1] = param_2[6];
    auStack_628[2] = param_2[7];
    auStack_628[3] = param_2[8];
    auStack_628[4] = param_2[9];
    auStack_628[5] = param_2[10];
    auStack_628[6] = param_2[0xb];
    if (uVar26 < param_2[0xb] - param_2[10]) {
      lVar20 = 0;
      plVar1 = (long *)param_1[9];
      uVar23 = 1;
      auVar50._0_8_ = CONCAT44(_LC4,_LC4);
      auVar50._8_4_ = _LC4;
      auVar50._12_4_ = _LC4;
      puVar21 = &local_650;
LAB_00104350:
      do {
        lVar2 = *plVar1;
        uVar16 = auStack_628[lVar20 * 0xc + 5];
        uVar24 = auStack_628[lVar20 * 0xc + 6];
        uVar25 = uVar16 + uVar24 >> 1;
        if (uVar16 < uVar25) {
          auVar81._4_4_ = _LC2;
          auVar81._0_4_ = _LC2;
          auVar81._8_4_ = _LC2;
          auVar81._12_4_ = _LC2;
          auVar83._8_4_ = _LC4;
          auVar83._0_8_ = auVar50._0_8_;
          auVar83._12_4_ = _LC4;
          auVar89._4_4_ = _LC2;
          auVar89._0_4_ = _LC2;
          auVar89._8_4_ = _LC2;
          auVar89._12_4_ = _LC2;
          auVar96._8_4_ = _LC4;
          auVar96._0_8_ = auVar50._0_8_;
          auVar96._12_4_ = _LC4;
          pauVar15 = (undefined1 (*) [16])(uVar16 * 0x20 + lVar2);
          do {
            auVar46._0_4_ = *(float *)pauVar15[1] + *(float *)*pauVar15;
            auVar46._4_4_ = *(float *)(pauVar15[1] + 4) + *(float *)(*pauVar15 + 4);
            auVar46._8_4_ = *(float *)(pauVar15[1] + 8) + *(float *)(*pauVar15 + 8);
            auVar46._12_4_ = *(float *)(pauVar15[1] + 0xc) + *(float *)(*pauVar15 + 0xc);
            pauVar14 = pauVar15 + 2;
            auVar96 = minps(auVar96,*pauVar15);
            auVar89 = maxps(auVar89,pauVar15[1]);
            auVar83 = minps(auVar83,auVar46);
            auVar81 = maxps(auVar81,auVar46);
            pauVar15 = pauVar14;
          } while ((undefined1 (*) [16])(uVar25 * 0x20 + lVar2) != pauVar14);
        }
        else {
          auVar81._4_4_ = _LC2;
          auVar81._0_4_ = _LC2;
          auVar81._8_4_ = _LC2;
          auVar81._12_4_ = _LC2;
          auVar83._8_4_ = _LC4;
          auVar83._0_8_ = auVar50._0_8_;
          auVar83._12_4_ = _LC4;
          auVar89._4_4_ = _LC2;
          auVar89._0_4_ = _LC2;
          auVar89._8_4_ = _LC2;
          auVar89._12_4_ = _LC2;
          auVar96._8_4_ = _LC4;
          auVar96._0_8_ = auVar50._0_8_;
          auVar96._12_4_ = _LC4;
        }
        if (uVar25 < uVar24) {
          auVar51._4_4_ = _LC2;
          auVar51._0_4_ = _LC2;
          auVar51._8_4_ = _LC2;
          auVar51._12_4_ = _LC2;
          auVar58._8_4_ = _LC4;
          auVar58._0_8_ = auVar50._0_8_;
          auVar58._12_4_ = _LC4;
          auVar74._4_4_ = _LC2;
          auVar74._0_4_ = _LC2;
          auVar74._8_4_ = _LC2;
          auVar74._12_4_ = _LC2;
          auVar78._8_4_ = _LC4;
          auVar78._0_8_ = auVar50._0_8_;
          auVar78._12_4_ = _LC4;
          pauVar15 = (undefined1 (*) [16])(uVar25 * 0x20 + lVar2);
          do {
            auVar47._0_4_ = *(float *)pauVar15[1] + *(float *)*pauVar15;
            auVar47._4_4_ = *(float *)(pauVar15[1] + 4) + *(float *)(*pauVar15 + 4);
            auVar47._8_4_ = *(float *)(pauVar15[1] + 8) + *(float *)(*pauVar15 + 8);
            auVar47._12_4_ = *(float *)(pauVar15[1] + 0xc) + *(float *)(*pauVar15 + 0xc);
            pauVar14 = pauVar15 + 2;
            auVar78 = minps(auVar78,*pauVar15);
            auVar74 = maxps(auVar74,pauVar15[1]);
            auVar58 = minps(auVar58,auVar47);
            auVar51 = maxps(auVar51,auVar47);
            pauVar15 = pauVar14;
          } while ((undefined1 (*) [16])(lVar2 + uVar24 * 0x20) != pauVar14);
        }
        else {
          auVar51._4_4_ = _LC2;
          auVar51._0_4_ = _LC2;
          auVar51._8_4_ = _LC2;
          auVar51._12_4_ = _LC2;
          auVar58._8_4_ = _LC4;
          auVar58._0_8_ = auVar50._0_8_;
          auVar58._12_4_ = _LC4;
          auVar74._4_4_ = _LC2;
          auVar74._0_4_ = _LC2;
          auVar74._8_4_ = _LC2;
          auVar74._12_4_ = _LC2;
          auVar78._8_4_ = _LC4;
          auVar78._0_8_ = auVar50._0_8_;
          auVar78._12_4_ = _LC4;
        }
        uVar23 = uVar23 + 1;
        puVar22 = puVar21 + 0xc;
        *(ulong *)(local_648 + lVar20 * 0x60 + -8) = *puVar21;
        local_648[lVar20 * 0x60] = SUB81(puVar21[1],0);
        uVar3 = puVar21[3];
        (&local_640)[lVar20 * 0xc] = puVar21[2];
        (&uStack_638)[lVar20 * 0xc] = uVar3;
        uVar3 = puVar21[5];
        (&local_630)[lVar20 * 0xc] = puVar21[4];
        auStack_628[lVar20 * 0xc] = uVar3;
        uVar3 = puVar21[7];
        auStack_628[lVar20 * 0xc + 1] = puVar21[6];
        auStack_628[lVar20 * 0xc + 2] = uVar3;
        uVar3 = puVar21[9];
        auStack_628[lVar20 * 0xc + 3] = puVar21[8];
        auStack_628[lVar20 * 0xc + 4] = uVar3;
        uVar3 = puVar21[0xb];
        auStack_628[lVar20 * 0xc + 5] = puVar21[10];
        auStack_628[lVar20 * 0xc + 6] = uVar3;
        *puVar21 = uVar13 + 1;
        *(undefined1 *)(puVar21 + 1) = 0;
        *(undefined1 (*) [16])(puVar21 + 2) = auVar96;
        *(undefined1 (*) [16])(puVar21 + 4) = auVar89;
        *(undefined1 (*) [16])(puVar21 + 6) = auVar83;
        *(undefined1 (*) [16])(puVar21 + 8) = auVar81;
        puVar21[10] = uVar16;
        puVar21[0xb] = uVar25;
        *puVar22 = uVar13 + 1;
        *(undefined1 *)(puVar21 + 0xd) = 0;
        *(undefined1 (*) [16])(puVar21 + 0xe) = auVar78;
        *(undefined1 (*) [16])(puVar21 + 0x10) = auVar74;
        *(undefined1 (*) [16])(puVar21 + 0x12) = auVar58;
        *(undefined1 (*) [16])(puVar21 + 0x14) = auVar51;
        puVar21[0x16] = uVar25;
        puVar21[0x17] = uVar24;
        if (*param_1 <= uVar23) {
          uVar13 = param_1[7];
          if (uVar12 <= uVar13) goto LAB_00104919;
          local_648[0] = auStack_628[6] - auStack_628[5] <= uVar13;
          goto LAB_00105b1f;
        }
        uVar16 = auStack_628[6] - auStack_628[5];
        lVar20 = 0;
        if (uVar16 <= uVar26) {
          lVar20 = -1;
          uVar16 = 0;
        }
        uVar24 = uVar16;
        if (uVar16 <= uVar26) {
          uVar24 = uVar26;
        }
        puVar21 = puVar22;
        if (uVar24 < (ulong)(local_598 - local_5a0)) {
          lVar20 = 1;
          uVar16 = local_598 - local_5a0;
          if (uVar23 == 2) goto LAB_00104350;
LAB_00104515:
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_538 - local_540)) {
            lVar20 = 2;
            uVar16 = local_538 - local_540;
            if (uVar23 == 3) goto LAB_00104350;
          }
          else if (uVar23 == 3) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_4d8 - local_4e0)) {
            lVar20 = 3;
            uVar16 = local_4d8 - local_4e0;
            if (uVar23 == 4) goto LAB_00104350;
          }
          else if (uVar23 == 4) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_478 - local_480)) {
            lVar20 = 4;
            uVar16 = local_478 - local_480;
            if (uVar23 == 5) goto LAB_00104350;
          }
          else if (uVar23 == 5) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_418 - local_420)) {
            lVar20 = 5;
            uVar16 = local_418 - local_420;
            if (uVar23 == 6) goto LAB_00104350;
          }
          else if (uVar23 == 6) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_3b8 - local_3c0)) {
            lVar20 = 6;
            uVar16 = local_3b8 - local_3c0;
            if (uVar23 == 7) goto LAB_00104350;
          }
          else if (uVar23 == 7) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_358 - local_360)) {
            lVar20 = 7;
            uVar16 = local_358 - local_360;
            if (uVar23 == 8) goto LAB_00104350;
          }
          else if (uVar23 == 8) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_2f8 - local_300)) {
            lVar20 = 8;
            uVar16 = local_2f8 - local_300;
            if (uVar23 == 9) goto LAB_00104350;
          }
          else if (uVar23 == 9) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_298 - local_2a0)) {
            lVar20 = 9;
            uVar16 = local_298 - local_2a0;
            if (uVar23 == 10) goto LAB_00104350;
          }
          else if (uVar23 == 10) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_238 - local_240)) {
            lVar20 = 10;
            uVar16 = local_238 - local_240;
            if (uVar23 == 0xb) goto LAB_00104350;
          }
          else if (uVar23 == 0xb) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_1d8 - local_1e0)) {
            lVar20 = 0xb;
            uVar16 = local_1d8 - local_1e0;
            if (uVar23 == 0xc) goto LAB_00104350;
          }
          else if (uVar23 == 0xc) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_178 - local_180)) {
            lVar20 = 0xc;
            uVar16 = local_178 - local_180;
            if (uVar23 == 0xd) goto LAB_00104350;
          }
          else if (uVar23 == 0xd) goto LAB_00104828;
          uVar24 = uVar16;
          if (uVar16 <= uVar26) {
            uVar24 = uVar26;
          }
          if (uVar24 < (ulong)(local_118 - local_120)) {
            lVar20 = 0xd;
            uVar16 = local_118 - local_120;
            if (uVar23 == 0xe) goto LAB_00104350;
          }
          else if (uVar23 == 0xe) goto LAB_00104828;
          uVar24 = local_b8 - local_c0;
          if (uVar16 <= uVar26) {
            uVar16 = uVar26;
          }
          if (uVar16 < uVar24) {
            if (uVar23 == 0x10) {
              if (uVar24 <= uVar26) {
                uVar24 = uVar26;
              }
              lVar20 = (ulong)(uVar24 < (ulong)(local_58 - local_60)) + 0xe;
            }
            else {
              uVar23 = 0xf;
              lVar20 = 0xe;
            }
            goto LAB_00104350;
          }
          if ((uVar23 == 0x10) && (uVar16 < (ulong)(local_58 - local_60))) {
            lVar20 = 0xf;
            goto LAB_00104350;
          }
        }
        else if (uVar23 != 2) goto LAB_00104515;
LAB_00104828:
      } while (lVar20 != -1);
    }
    else {
      uVar23 = 1;
      auVar50._4_4_ = _LC4;
      auVar50._0_4_ = _LC4;
      auVar50._8_4_ = _LC4;
      auVar50._12_4_ = _LC4;
    }
    uVar13 = param_1[7];
    if ((uVar13 < uVar12) && (local_648[0] = auStack_628[6] - auStack_628[5] <= uVar13, uVar23 != 1)
       ) {
LAB_00105b1f:
      local_5e8 = (ulong)(local_598 - local_5a0) <= uVar13;
      if (((uVar23 != 2) &&
          (((local_588 = (ulong)(local_538 - local_540) <= uVar13, uVar23 != 3 &&
            (local_528 = (ulong)(local_4d8 - local_4e0) <= uVar13, uVar23 != 4)) &&
           (local_4c8 = (ulong)(local_478 - local_480) <= uVar13, uVar23 != 5)))) &&
         ((((local_468 = (ulong)(local_418 - local_420) <= uVar13, uVar23 != 6 &&
            (local_408 = (ulong)(local_3b8 - local_3c0) <= uVar13, uVar23 != 7)) &&
           (local_3a8 = (ulong)(local_358 - local_360) <= uVar13, uVar23 != 8)) &&
          (((local_348 = (ulong)(local_2f8 - local_300) <= uVar13, uVar23 != 9 &&
            (local_2e8 = (ulong)(local_298 - local_2a0) <= uVar13, uVar23 != 10)) &&
           (((local_288 = (ulong)(local_238 - local_240) <= uVar13, uVar23 != 0xb &&
             (((local_228 = (ulong)(local_1d8 - local_1e0) <= uVar13, uVar23 != 0xc &&
               (local_1c8 = (ulong)(local_178 - local_180) <= uVar13, uVar23 != 0xd)) &&
              (local_168 = (ulong)(local_118 - local_120) <= uVar13, uVar23 != 0xe)))) &&
            (local_108 = (ulong)(local_b8 - local_c0) <= uVar13, uVar23 != 0xf)))))))) {
        local_a8 = (ulong)(local_58 - local_60) <= uVar13;
      }
    }
LAB_00104919:
    stack0xfffffffffffff924 = auVar50._4_12_;
    local_6e0._0_4_ = (undefined4)local_640;
    auVar81 = _local_6e0;
    stack0xfffffffffffff944 = stack0xfffffffffffff924;
    local_6c0._0_4_ = local_640._4_4_;
    fStack_6cc = _LC2;
    fStack_6c8 = _LC2;
    fStack_6c4 = _LC2;
    stack0xfffffffffffff964 = stack0xfffffffffffff924;
    local_6a0._0_4_ = (undefined4)uStack_638;
    fStack_6ac = _LC2;
    fStack_6a8 = _LC2;
    fStack_6a4 = _LC2;
    local_6d0 = (float)local_630;
    fStack_68c = _LC2;
    fStack_688 = _LC2;
    fStack_684 = _LC2;
    local_6b0 = local_630._4_4_;
    local_690 = (float)auStack_628[0];
    uStack_748 = auVar50._8_8_;
    uStack_6d8._4_4_ = auVar50._12_4_;
    fVar19 = uStack_6d8._4_4_;
    _local_6e0 = auVar81;
    if (uVar23 != 1) {
      local_6e0._4_4_ = local_5e0;
      uStack_6d8 = uStack_748;
      local_6c0._4_4_ = uStack_5dc;
      uStack_6b8 = uStack_748;
      local_6a0._4_4_ = uStack_5d8;
      uStack_698 = uStack_748;
      fStack_6cc = local_5d0;
      fStack_6ac = fStack_5cc;
      fStack_68c = fStack_5c8;
      if (uVar23 != 2) {
        uStack_6d8._0_4_ = local_580;
        _local_6e0 = CONCAT412(fVar19,_local_6e0);
        uStack_6b8._0_4_ = local_57c;
        uStack_6b8._4_4_ = fVar19;
        uStack_698._0_4_ = local_578;
        uStack_698._4_4_ = fVar19;
        fStack_6c8 = local_570;
        fStack_6a8 = local_56c;
        fStack_688 = local_568;
        if (uVar23 != 3) {
          uStack_6d8._4_4_ = (float)local_520;
          uStack_6b8._4_4_ = local_51c;
          uStack_698._4_4_ = local_518;
          fStack_6c4 = local_510;
          fStack_6a4 = local_50c;
          fStack_684 = local_508;
        }
      }
    }
    local_710 = 0x50;
    uVar13 = *in_stack_00000010;
    if (in_stack_00000008 != *(FastAllocator **)(uVar13 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(uVar13 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(uVar13 + 8) + 0x118);
        *plVar1 = *plVar1 + *(long *)(uVar13 + 0xa8) + *(long *)(uVar13 + 0x68);
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar13 + 8) + 0x120);
        *plVar1 = *plVar1 + (((*(long *)(uVar13 + 0x98) + *(long *)(uVar13 + 0x58)) -
                             *(long *)(uVar13 + 0x50)) - *(long *)(uVar13 + 0x90));
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar13 + 8) + 0x128);
        *plVar1 = *plVar1 + *(long *)(uVar13 + 0xb0) + *(long *)(uVar13 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(uVar13 + 0x48) = 0;
      *(undefined8 *)(uVar13 + 0x58) = 0;
      *(undefined8 *)(uVar13 + 0x50) = 0;
      *(undefined8 *)(uVar13 + 0x68) = 0;
      *(undefined8 *)(uVar13 + 0x70) = 0;
      *(undefined8 *)(uVar13 + 0x60) = 0;
      if (this == (FastAllocator *)0x0) {
        *(undefined8 *)(uVar13 + 0x88) = 0;
        uVar17 = 0;
        *(undefined8 *)(uVar13 + 0x98) = 0;
        *(undefined8 *)(uVar13 + 0x90) = 0;
        *(undefined8 *)(uVar13 + 0xa8) = 0;
        *(undefined8 *)(uVar13 + 0xb0) = 0;
      }
      else {
        uVar17 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(uVar13 + 0x88) = 0;
        *(undefined8 *)(uVar13 + 0x98) = 0;
        *(undefined8 *)(uVar13 + 0x60) = uVar17;
        *(undefined8 *)(uVar13 + 0x90) = 0;
        *(undefined8 *)(uVar13 + 0xa8) = 0;
        *(undefined8 *)(uVar13 + 0xb0) = 0;
        *(undefined8 *)(uVar13 + 0xa0) = 0;
        uVar17 = *(undefined8 *)(this + 0x10);
      }
      *(undefined8 *)(uVar13 + 0xa0) = uVar17;
      LOCK();
      *(FastAllocator **)(uVar13 + 8) = this;
      UNLOCK();
      local_708 = uVar13;
      embree::MutexSys::lock();
      puVar21 = *(ulong **)(this + 0x138);
      if (puVar21 == *(ulong **)(this + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(this + 0x130),puVar21,&local_708);
      }
      else {
        *puVar21 = uVar13;
        *(long *)(this + 0x138) = *(long *)(this + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
    }
    uVar26 = puVar27[2];
    puVar27[5] = puVar27[5] + 0x50;
    uVar12 = (ulong)(-(int)uVar26 & 0xf);
    uVar13 = uVar26 + 0x50 + uVar12;
    puVar27[2] = uVar13;
    if (puVar27[3] < uVar13) {
      puVar27[2] = uVar26;
      if (puVar27[4] < 0x140) {
        puVar18 = (undefined8 *)FastAllocator::malloc(this,&local_710,0x40,false);
      }
      else {
        local_708 = puVar27[4];
        puVar18 = (undefined8 *)FastAllocator::malloc(this,&local_708,0x40,true);
        puVar27[1] = (ulong)puVar18;
        uVar13 = puVar27[2];
        puVar27[2] = 0x50;
        puVar27[6] = (puVar27[3] + puVar27[6]) - uVar13;
        puVar27[3] = local_708;
        if (local_708 < 0x50) {
          puVar27[2] = 0;
          local_708 = puVar27[4];
          puVar18 = (undefined8 *)FastAllocator::malloc(this,&local_708,0x40,false);
          puVar27[1] = (ulong)puVar18;
          uVar13 = puVar27[2];
          puVar27[2] = 0x50;
          puVar27[6] = (puVar27[3] + puVar27[6]) - uVar13;
          puVar27[3] = local_708;
          if (local_708 < 0x50) {
            puVar27[2] = 0;
            puVar18 = (undefined8 *)0x0;
          }
        }
      }
    }
    else {
      puVar27[6] = puVar27[6] + uVar12;
      puVar18 = (undefined8 *)((puVar27[1] - 0x50) + uVar13);
    }
    fVar88 = SUB164(_local_6e0,0);
    fVar91 = SUB164(_local_6e0,4);
    fVar93 = SUB164(_local_6e0,8);
    fVar95 = SUB164(_local_6e0,0xc);
    auVar8._4_4_ = fStack_6cc;
    auVar8._0_4_ = local_6d0;
    auVar8._8_4_ = fStack_6c8;
    auVar8._12_4_ = fStack_6c4;
    *puVar18 = 8;
    puVar18[1] = 8;
    auVar48._4_4_ = fVar88;
    auVar48._0_4_ = fVar91;
    auVar48._8_4_ = fVar95;
    auVar48._12_4_ = fVar93;
    auVar52._4_4_ = local_6d0;
    auVar52._0_4_ = fStack_6cc;
    auVar52._8_4_ = fStack_6c4;
    auVar52._12_4_ = fStack_6c8;
    puVar18[2] = 8;
    auVar81 = minps(auVar48,_local_6e0);
    auVar83 = maxps(auVar52,auVar8);
    fVar44 = auVar50._0_4_;
    fVar56 = auVar50._4_4_;
    fVar66 = auVar50._8_4_;
    bVar28 = -(fVar88 != fVar44);
    bVar31 = -(fVar91 != fVar56);
    bVar35 = -(fVar93 != fVar66);
    bVar40 = -(fVar95 != fVar19);
    puVar18[3] = 8;
    uVar57 = _LC15;
    fVar11 = _LC9;
    auVar75._0_8_ = auVar81._8_8_;
    auVar75._8_4_ = auVar81._0_4_;
    auVar75._12_4_ = auVar81._4_4_;
    auVar81 = minps(auVar75,auVar81);
    auVar49._0_8_ = auVar83._8_8_;
    auVar49._8_4_ = auVar83._0_4_;
    auVar49._12_4_ = auVar83._4_4_;
    auVar50 = maxps(auVar49,auVar83);
    fVar70 = auVar81._0_4_;
    fVar45 = (auVar50._0_4_ - fVar70) * __LC7;
    fVar55 = fVar45 / _LC8;
    if (fVar45 / _LC8 == 0.0) {
      fVar55 = _LC5;
    }
    fVar97 = 0.0;
    if (0.0 < fVar45) {
      fVar97 = _LC8 / fVar45;
    }
    fVar45 = (fVar88 - fVar70) * fVar97;
    fVar63 = (fVar91 - fVar70) * fVar97;
    fVar67 = (fVar93 - fVar70) * fVar97;
    fVar71 = (fVar95 - fVar70) * fVar97;
    if ((float)((uint)fVar71 & _LC15) < _LC9) {
      fVar71 = (float)((uint)((float)(int)fVar71 -
                             (float)(-(uint)(fVar71 < (float)(int)fVar71) & _LC11)) |
                      ~_LC15 & (uint)fVar71);
    }
    if ((float)((uint)fVar67 & _LC15) < _LC9) {
      fVar67 = (float)((uint)((float)(int)fVar67 -
                             (float)(-(uint)(fVar67 < (float)(int)fVar67) & _LC11)) |
                      ~_LC15 & (uint)fVar67);
    }
    if ((float)((uint)fVar63 & _LC15) < _LC9) {
      fVar63 = (float)((uint)((float)(int)fVar63 -
                             (float)(-(uint)(fVar63 < (float)(int)fVar63) & _LC11)) |
                      ~_LC15 & (uint)fVar63);
    }
    if ((float)((uint)fVar45 & _LC15) < _LC9) {
      fVar45 = (float)((uint)((float)(int)fVar45 -
                             (float)(-(uint)(fVar45 < (float)(int)fVar45) & _LC11)) |
                      ~_LC15 & (uint)fVar45);
    }
    uVar82 = ~-(uint)((int)fVar45 < 0) & (int)fVar45;
    uVar84 = ~-(uint)((int)fVar63 < 0) & (int)fVar63;
    uVar85 = ~-(uint)((int)fVar67 < 0) & (int)fVar67;
    uVar86 = ~-(uint)((int)fVar71 < 0) & (int)fVar71;
    fVar45 = (local_6d0 - fVar70) * fVar97;
    fVar63 = (fStack_6cc - fVar70) * fVar97;
    fVar67 = (fStack_6c8 - fVar70) * fVar97;
    fVar97 = (fStack_6c4 - fVar70) * fVar97;
    if ((float)((uint)fVar97 & _LC15) < _LC9) {
      fVar97 = (float)((uint)((float)(int)fVar97 +
                             (float)(-(uint)((float)(int)fVar97 < fVar97) & _LC11)) |
                      ~_LC15 & (uint)fVar97);
    }
    if ((float)((uint)fVar67 & _LC15) < _LC9) {
      fVar67 = (float)((uint)((float)(int)fVar67 +
                             (float)(-(uint)((float)(int)fVar67 < fVar67) & _LC11)) |
                      ~_LC15 & (uint)fVar67);
    }
    if ((float)((uint)fVar63 & _LC15) < _LC9) {
      fVar63 = (float)((uint)((float)(int)fVar63 +
                             (float)(-(uint)((float)(int)fVar63 < fVar63) & _LC11)) |
                      ~_LC15 & (uint)fVar63);
    }
    if ((float)((uint)fVar45 & _LC15) < _LC9) {
      fVar45 = (float)((uint)((float)(int)fVar45 +
                             (float)(-(uint)((float)(int)fVar45 < fVar45) & _LC11)) |
                      ~_LC15 & (uint)fVar45);
    }
    *(float *)((long)puVar18 + 0x44) = fVar55;
    uVar39 = _UNK_001171bc;
    uVar34 = _UNK_001171b8;
    uVar33 = _UNK_001171b4;
    uVar30 = __LC13;
    uVar53 = -(uint)((int)fVar45 < (int)__LC13);
    uVar64 = -(uint)((int)fVar63 < (int)_UNK_001171b4);
    uVar68 = -(uint)((int)fVar67 < (int)_UNK_001171b8);
    uVar72 = -(uint)((int)fVar97 < (int)_UNK_001171bc);
    uVar54 = uVar53 & (int)fVar45 | ~uVar53 & __LC13;
    uVar65 = uVar64 & (int)fVar63 | ~uVar64 & _UNK_001171b4;
    uVar69 = uVar68 & (int)fVar67 | ~uVar68 & _UNK_001171b8;
    uVar73 = uVar72 & (int)fVar97 | ~uVar72 & _UNK_001171bc;
    uVar53 = -(uint)(fVar88 < (float)(int)uVar82 * fVar55 + fVar70);
    uVar68 = -(uint)(fVar91 < (float)(int)uVar84 * fVar55 + fVar70);
    uVar37 = -(uint)(fVar93 < (float)(int)uVar85 * fVar55 + fVar70);
    uVar42 = -(uint)(fVar95 < (float)(int)uVar86 * fVar55 + fVar70);
    uVar64 = -(uint)(fVar70 + (float)(int)uVar54 * fVar55 < local_6d0);
    uVar72 = -(uint)(fVar70 + (float)(int)uVar65 * fVar55 < fStack_6cc);
    uVar38 = -(uint)(fVar70 + (float)(int)uVar69 * fVar55 < fStack_6c8);
    uVar43 = -(uint)(fVar70 + (float)(int)uVar73 * fVar55 < fStack_6c4);
    bVar4 = (byte)__LC13;
    bVar5 = (byte)_UNK_001171b4;
    bVar6 = (byte)_UNK_001171b8;
    bVar7 = (byte)_UNK_001171bc;
    uVar53 = uVar82 - 1 & uVar53 | ~uVar53 & uVar82;
    uVar68 = uVar84 - 1 & uVar68 | ~uVar68 & uVar84;
    uVar37 = uVar85 - 1 & uVar37 | ~uVar37 & uVar85;
    uVar42 = uVar86 - 1 & uVar42 | ~uVar42 & uVar86;
    fVar88 = SUB164(_local_6c0,0);
    fVar91 = SUB164(_local_6c0,4);
    fVar93 = SUB164(_local_6c0,8);
    fVar95 = SUB164(_local_6c0,0xc);
    uVar82 = uVar54 + __LC28 & uVar64 | ~uVar64 & uVar54;
    uVar84 = uVar65 + _UNK_001171c4 & uVar72 | ~uVar72 & uVar65;
    uVar85 = uVar69 + _UNK_001171c8 & uVar38 | ~uVar38 & uVar69;
    uVar86 = uVar73 + _UNK_001171cc & uVar43 | ~uVar43 & uVar73;
    *(byte *)(puVar18 + 4) = ~-((int)uVar53 < 0) & (byte)uVar53 & bVar28 | ~bVar28 & bVar4;
    bVar87 = -((int)uVar82 < (int)uVar30);
    bVar90 = -((int)uVar84 < (int)uVar33);
    bVar92 = -((int)uVar85 < (int)uVar34);
    bVar94 = -((int)uVar86 < (int)uVar39);
    *(byte *)((long)puVar18 + 0x21) = ~-((int)uVar68 < 0) & (byte)uVar68 & bVar31 | ~bVar31 & bVar5;
    bVar29 = -(fVar88 != fVar44);
    bVar32 = -(fVar91 != fVar56);
    bVar36 = -(fVar93 != fVar66);
    bVar41 = -(fVar95 != fVar19);
    *(byte *)((long)puVar18 + 0x22) = ~-((int)uVar37 < 0) & (byte)uVar37 & bVar35 | ~bVar35 & bVar6;
    *(byte *)((long)puVar18 + 0x23) = ~-((int)uVar42 < 0) & (byte)uVar42 & bVar40 | ~bVar40 & bVar7;
    auVar9._4_4_ = fStack_6ac;
    auVar9._0_4_ = local_6b0;
    auVar9._8_4_ = fStack_6a8;
    auVar9._12_4_ = fStack_6a4;
    *(byte *)((long)puVar18 + 0x24) = ((byte)uVar82 & bVar87 | ~bVar87 & bVar4) & bVar28;
    auVar79._4_4_ = local_6b0;
    auVar79._0_4_ = fStack_6ac;
    auVar79._8_4_ = fStack_6a4;
    auVar79._12_4_ = fStack_6a8;
    *(byte *)((long)puVar18 + 0x25) = ((byte)uVar84 & bVar90 | ~bVar90 & bVar5) & bVar31;
    auVar83 = maxps(auVar79,auVar9);
    *(byte *)((long)puVar18 + 0x26) = ((byte)uVar85 & bVar92 | ~bVar92 & bVar6) & bVar35;
    auVar59._4_4_ = fVar88;
    auVar59._0_4_ = fVar91;
    auVar59._8_4_ = fVar95;
    auVar59._12_4_ = fVar93;
    auVar50 = minps(auVar59,_local_6c0);
    *(float *)(puVar18 + 7) = fVar70;
    *(byte *)((long)puVar18 + 0x27) = ((byte)uVar86 & bVar94 | ~bVar94 & bVar7) & bVar40;
    uVar86 = _UNK_001171bc;
    uVar85 = _UNK_001171b8;
    uVar84 = _UNK_001171b4;
    uVar82 = __LC13;
    auVar76._0_8_ = auVar50._8_8_;
    auVar76._8_4_ = auVar50._0_4_;
    auVar76._12_4_ = auVar50._4_4_;
    auVar81 = minps(auVar76,auVar50);
    auVar60._0_8_ = auVar83._8_8_;
    auVar60._8_4_ = auVar83._0_4_;
    auVar60._12_4_ = auVar83._4_4_;
    auVar50 = maxps(auVar60,auVar83);
    fVar70 = auVar81._0_4_;
    fVar45 = (auVar50._0_4_ - fVar70) * __LC7;
    fVar55 = fVar45 / _LC8;
    if (fVar45 / _LC8 == 0.0) {
      fVar55 = _LC5;
    }
    if (fVar45 <= 0.0) {
      fVar45 = 0.0;
    }
    else {
      fVar45 = _LC8 / fVar45;
    }
    fVar97 = (fVar88 - fVar70) * fVar45;
    fVar63 = (fVar91 - fVar70) * fVar45;
    fVar67 = (fVar93 - fVar70) * fVar45;
    fVar71 = (fVar95 - fVar70) * fVar45;
    if ((float)((uint)fVar71 & uVar57) < fVar11) {
      fVar71 = (float)((uint)((float)(int)fVar71 -
                             (float)(-(uint)(fVar71 < (float)(int)fVar71) & _LC11)) |
                      ~uVar57 & (uint)fVar71);
    }
    if ((float)((uint)fVar67 & uVar57) < fVar11) {
      fVar67 = (float)((uint)((float)(int)fVar67 -
                             (float)(-(uint)(fVar67 < (float)(int)fVar67) & _LC11)) |
                      ~uVar57 & (uint)fVar67);
    }
    if ((float)((uint)fVar63 & uVar57) < fVar11) {
      fVar63 = (float)((uint)((float)(int)fVar63 -
                             (float)(-(uint)(fVar63 < (float)(int)fVar63) & _LC11)) |
                      ~uVar57 & (uint)fVar63);
    }
    if ((float)((uint)fVar97 & uVar57) < fVar11) {
      fVar97 = (float)((uint)((float)(int)fVar97 -
                             (float)(-(uint)(fVar97 < (float)(int)fVar97) & _LC11)) |
                      ~uVar57 & (uint)fVar97);
    }
    uVar53 = ~-(uint)((int)fVar97 < 0) & (int)fVar97;
    uVar64 = ~-(uint)((int)fVar63 < 0) & (int)fVar63;
    uVar68 = ~-(uint)((int)fVar67 < 0) & (int)fVar67;
    uVar72 = ~-(uint)((int)fVar71 < 0) & (int)fVar71;
    fVar97 = (local_6b0 - fVar70) * fVar45;
    fVar63 = (fStack_6ac - fVar70) * fVar45;
    fVar67 = (fStack_6a8 - fVar70) * fVar45;
    fVar45 = (fStack_6a4 - fVar70) * fVar45;
    if ((float)((uint)fVar45 & uVar57) < fVar11) {
      fVar45 = (float)((uint)((float)(int)fVar45 +
                             (float)(-(uint)((float)(int)fVar45 < fVar45) & _LC11)) |
                      ~uVar57 & (uint)fVar45);
    }
    if ((float)((uint)fVar67 & uVar57) < fVar11) {
      fVar67 = (float)((uint)((float)(-(uint)((float)(int)fVar67 < fVar67) & _LC11) +
                             (float)(int)fVar67) | ~uVar57 & (uint)fVar67);
    }
    if ((float)(uVar57 & (uint)fVar63) < fVar11) {
      fVar63 = (float)((uint)((float)(-(uint)((float)(int)fVar63 < fVar63) & _LC11) +
                             (float)(int)fVar63) | ~uVar57 & (uint)fVar63);
    }
    if ((float)(uVar57 & (uint)fVar97) < fVar11) {
      fVar97 = (float)((uint)((float)(-(uint)((float)(int)fVar97 < fVar97) & _LC11) +
                             (float)(int)fVar97) | ~uVar57 & (uint)fVar97);
    }
    *(float *)(puVar18 + 9) = fVar55;
    uVar43 = _UNK_001171bc;
    uVar42 = _UNK_001171b8;
    uVar38 = _UNK_001171b4;
    uVar37 = __LC13;
    auVar10._4_4_ = fStack_68c;
    auVar10._0_4_ = local_690;
    auVar10._8_4_ = fStack_688;
    auVar10._12_4_ = fStack_684;
    uVar82 = -(uint)((int)fVar97 < (int)uVar82);
    uVar84 = -(uint)((int)fVar63 < (int)uVar84);
    uVar85 = -(uint)((int)fVar67 < (int)uVar85);
    uVar86 = -(uint)((int)fVar45 < (int)uVar86);
    uVar54 = (int)fVar97 & uVar82 | ~uVar82 & uVar30;
    uVar65 = (int)fVar63 & uVar84 | ~uVar84 & uVar33;
    uVar69 = (int)fVar67 & uVar85 | ~uVar85 & uVar34;
    uVar73 = (int)fVar45 & uVar86 | ~uVar86 & uVar39;
    uVar82 = -(uint)(fVar88 < (float)(int)uVar53 * fVar55 + fVar70);
    uVar84 = -(uint)(fVar91 < (float)(int)uVar64 * fVar55 + fVar70);
    uVar85 = -(uint)(fVar93 < (float)(int)uVar68 * fVar55 + fVar70);
    uVar86 = -(uint)(fVar95 < (float)(int)uVar72 * fVar55 + fVar70);
    uVar53 = uVar53 - 1 & uVar82 | ~uVar82 & uVar53;
    uVar64 = uVar64 - 1 & uVar84 | ~uVar84 & uVar64;
    uVar68 = uVar68 - 1 & uVar85 | ~uVar85 & uVar68;
    uVar72 = uVar72 - 1 & uVar86 | ~uVar86 & uVar72;
    uVar82 = -(uint)((float)(int)uVar54 * fVar55 + fVar70 < local_6b0);
    uVar84 = -(uint)((float)(int)uVar65 * fVar55 + fVar70 < fStack_6ac);
    uVar85 = -(uint)((float)(int)uVar69 * fVar55 + fVar70 < fStack_6a8);
    uVar86 = -(uint)((float)(int)uVar73 * fVar55 + fVar70 < fStack_6a4);
    fVar45 = SUB164(_local_6a0,0);
    fVar88 = SUB164(_local_6a0,4);
    fVar91 = SUB164(_local_6a0,8);
    fVar93 = SUB164(_local_6a0,0xc);
    bVar28 = -(fVar44 != fVar45);
    bVar31 = -(fVar56 != fVar88);
    bVar35 = -(fVar66 != fVar91);
    bVar40 = -(fVar19 != fVar93);
    uVar82 = uVar54 + __LC28 & uVar82 | ~uVar82 & uVar54;
    uVar84 = uVar65 + _UNK_001171c4 & uVar84 | ~uVar84 & uVar65;
    uVar85 = uVar69 + _UNK_001171c8 & uVar85 | ~uVar85 & uVar69;
    uVar86 = uVar73 + _UNK_001171cc & uVar86 | ~uVar86 & uVar73;
    *(byte *)(puVar18 + 5) = ~-((int)uVar53 < 0) & (byte)uVar53 & bVar29 | ~bVar29 & bVar4;
    bVar87 = -((int)uVar82 < (int)uVar37);
    bVar90 = -((int)uVar84 < (int)uVar38);
    bVar92 = -((int)uVar85 < (int)uVar42);
    bVar94 = -((int)uVar86 < (int)uVar43);
    *(byte *)((long)puVar18 + 0x29) = ~-((int)uVar64 < 0) & (byte)uVar64 & bVar32 | ~bVar32 & bVar5;
    auVar80._4_4_ = local_690;
    auVar80._0_4_ = fStack_68c;
    auVar80._8_4_ = fStack_684;
    auVar80._12_4_ = fStack_688;
    *(byte *)((long)puVar18 + 0x2a) = ~-((int)uVar68 < 0) & (byte)uVar68 & bVar36 | ~bVar36 & bVar6;
    auVar83 = maxps(auVar80,auVar10);
    *(byte *)((long)puVar18 + 0x2b) = ~-((int)uVar72 < 0) & (byte)uVar72 & bVar41 | ~bVar41 & bVar7;
    *(byte *)((long)puVar18 + 0x2c) = ((byte)uVar82 & bVar87 | ~bVar87 & bVar4) & bVar29;
    *(byte *)((long)puVar18 + 0x2d) = ((byte)uVar84 & bVar90 | ~bVar90 & bVar5) & bVar32;
    *(byte *)((long)puVar18 + 0x2e) = ((byte)uVar85 & bVar92 | ~bVar92 & bVar6) & bVar36;
    auVar61._4_4_ = fVar45;
    auVar61._0_4_ = fVar88;
    auVar61._8_4_ = fVar93;
    auVar61._12_4_ = fVar91;
    auVar50 = minps(auVar61,_local_6a0);
    *(float *)((long)puVar18 + 0x3c) = fVar70;
    *(byte *)((long)puVar18 + 0x2f) = ((byte)uVar86 & bVar94 | ~bVar94 & bVar7) & bVar41;
    auVar77._0_8_ = auVar50._8_8_;
    auVar77._8_4_ = auVar50._0_4_;
    auVar77._12_4_ = auVar50._4_4_;
    auVar81 = minps(auVar77,auVar50);
    auVar62._0_8_ = auVar83._8_8_;
    auVar62._8_4_ = auVar83._0_4_;
    auVar62._12_4_ = auVar83._4_4_;
    auVar50 = maxps(auVar62,auVar83);
    fVar44 = auVar81._0_4_;
    fVar55 = (auVar50._0_4_ - fVar44) * __LC7;
    fVar19 = fVar55 / _LC8;
    if (fVar55 / _LC8 == 0.0) {
      fVar19 = _LC5;
    }
    if (fVar55 <= 0.0) {
      fVar55 = 0.0;
    }
    else {
      fVar55 = _LC8 / fVar55;
    }
    fVar56 = (fVar45 - fVar44) * fVar55;
    fVar66 = (fVar88 - fVar44) * fVar55;
    fVar70 = (fVar91 - fVar44) * fVar55;
    fVar95 = (fVar93 - fVar44) * fVar55;
    if ((float)((uint)fVar95 & uVar57) < fVar11) {
      fVar95 = (float)((uint)((float)(int)fVar95 -
                             (float)(-(uint)(fVar95 < (float)(int)fVar95) & _LC11)) |
                      ~uVar57 & (uint)fVar95);
    }
    if ((float)((uint)fVar70 & uVar57) < fVar11) {
      fVar70 = (float)((uint)((float)(int)fVar70 -
                             (float)(-(uint)(fVar70 < (float)(int)fVar70) & _LC11)) |
                      ~uVar57 & (uint)fVar70);
    }
    if ((float)((uint)fVar66 & uVar57) < fVar11) {
      fVar66 = (float)((uint)((float)(int)fVar66 -
                             (float)(-(uint)(fVar66 < (float)(int)fVar66) & _LC11)) |
                      ~uVar57 & (uint)fVar66);
    }
    if ((float)((uint)fVar56 & uVar57) < fVar11) {
      fVar56 = (float)((uint)((float)(int)fVar56 -
                             (float)(-(uint)(fVar56 < (float)(int)fVar56) & _LC11)) |
                      ~uVar57 & (uint)fVar56);
    }
    uVar82 = ~-(uint)((int)fVar56 < 0) & (int)fVar56;
    uVar84 = ~-(uint)((int)fVar66 < 0) & (int)fVar66;
    uVar85 = ~-(uint)((int)fVar70 < 0) & (int)fVar70;
    uVar86 = ~-(uint)((int)fVar95 < 0) & (int)fVar95;
    fVar56 = (local_690 - fVar44) * fVar55;
    fVar66 = (fStack_68c - fVar44) * fVar55;
    fVar70 = (fStack_688 - fVar44) * fVar55;
    fVar55 = (fStack_684 - fVar44) * fVar55;
    if ((float)((uint)fVar55 & uVar57) < fVar11) {
      fVar55 = (float)((uint)((float)(int)fVar55 +
                             (float)(-(uint)((float)(int)fVar55 < fVar55) & _LC11)) |
                      ~uVar57 & (uint)fVar55);
    }
    if ((float)((uint)fVar70 & uVar57) < fVar11) {
      fVar70 = (float)((uint)((float)(int)fVar70 +
                             (float)(-(uint)((float)(int)fVar70 < fVar70) & _LC11)) |
                      ~uVar57 & (uint)fVar70);
    }
    if ((float)((uint)fVar66 & uVar57) < fVar11) {
      fVar66 = (float)((uint)((float)(int)fVar66 +
                             (float)(-(uint)((float)(int)fVar66 < fVar66) & _LC11)) |
                      ~uVar57 & (uint)fVar66);
    }
    if ((float)((uint)fVar56 & uVar57) < fVar11) {
      fVar56 = (float)((uint)((float)(int)fVar56 +
                             (float)(-(uint)((float)(int)fVar56 < fVar56) & _LC11)) |
                      ~uVar57 & (uint)fVar56);
    }
    *(float *)((long)puVar18 + 0x4c) = fVar19;
    uVar26 = 0;
    uVar57 = -(uint)((int)fVar56 < (int)__LC13);
    uVar53 = -(uint)((int)fVar66 < (int)_UNK_001171b4);
    uVar64 = -(uint)((int)fVar70 < (int)_UNK_001171b8);
    uVar68 = -(uint)((int)fVar55 < (int)_UNK_001171bc);
    uVar13 = (ulong)puVar18 | 5;
    uVar72 = uVar57 & (int)fVar56 | ~uVar57 & uVar30;
    uVar37 = uVar53 & (int)fVar66 | ~uVar53 & uVar33;
    uVar38 = uVar64 & (int)fVar70 | ~uVar64 & uVar34;
    uVar42 = uVar68 & (int)fVar55 | ~uVar68 & uVar39;
    uVar57 = -(uint)(fVar45 < (float)(int)uVar82 * fVar19 + fVar44);
    uVar33 = -(uint)(fVar88 < (float)(int)uVar84 * fVar19 + fVar44);
    uVar39 = -(uint)(fVar91 < (float)(int)uVar85 * fVar19 + fVar44);
    uVar64 = -(uint)(fVar93 < (float)(int)uVar86 * fVar19 + fVar44);
    uVar30 = -(uint)(fVar19 * (float)(int)uVar72 + fVar44 < local_690);
    uVar34 = -(uint)(fVar19 * (float)(int)uVar37 + fVar44 < fStack_68c);
    uVar53 = -(uint)(fVar19 * (float)(int)uVar38 + fVar44 < fStack_688);
    uVar68 = -(uint)(fVar19 * (float)(int)uVar42 + fVar44 < fStack_684);
    uVar43 = uVar82 - 1 & uVar57 | ~uVar57 & uVar82;
    uVar33 = uVar84 - 1 & uVar33 | ~uVar33 & uVar84;
    uVar39 = uVar85 - 1 & uVar39 | ~uVar39 & uVar85;
    uVar86 = uVar86 - 1 & uVar64 | ~uVar64 & uVar86;
    uVar57 = __LC28 + uVar72 & uVar30 | ~uVar30 & uVar72;
    uVar82 = _UNK_001171c4 + uVar37 & uVar34 | ~uVar34 & uVar37;
    uVar84 = _UNK_001171c8 + uVar38 & uVar53 | ~uVar53 & uVar38;
    uVar85 = _UNK_001171cc + uVar42 & uVar68 | ~uVar68 & uVar42;
    bVar29 = -((int)uVar57 < (int)__LC13);
    bVar32 = -((int)uVar82 < (int)_UNK_001171b4);
    bVar36 = -((int)uVar84 < (int)_UNK_001171b8);
    bVar41 = -((int)uVar85 < (int)_UNK_001171bc);
    *(byte *)(puVar18 + 6) = ~-((int)uVar43 < 0) & (byte)uVar43 & bVar28 | ~bVar28 & bVar4;
    *(byte *)((long)puVar18 + 0x31) = ~-((int)uVar33 < 0) & (byte)uVar33 & bVar31 | ~bVar31 & bVar5;
    *(byte *)((long)puVar18 + 0x32) = ~-((int)uVar39 < 0) & (byte)uVar39 & bVar35 | ~bVar35 & bVar6;
    *(byte *)((long)puVar18 + 0x33) = ~-((int)uVar86 < 0) & (byte)uVar86 & bVar40 | ~bVar40 & bVar7;
    *(byte *)((long)puVar18 + 0x34) = bVar28 & ((byte)uVar57 & bVar29 | ~bVar29 & bVar4);
    *(byte *)((long)puVar18 + 0x35) = bVar31 & ((byte)uVar82 & bVar32 | ~bVar32 & bVar5);
    *(byte *)((long)puVar18 + 0x36) = bVar35 & ((byte)uVar84 & bVar36 | ~bVar36 & bVar6);
    *(byte *)((long)puVar18 + 0x37) = bVar40 & ((byte)uVar85 & bVar41 | ~bVar41 & bVar7);
    *(float *)(puVar18 + 8) = fVar44;
    puVar27 = &local_650;
    do {
      uVar17 = createLargeLeaf(param_1,puVar27);
      local_700[uVar26] = uVar17;
      uVar26 = uVar26 + 1;
      puVar27 = puVar27 + 0xc;
    } while (uVar26 != uVar23);
    uVar12 = 0;
    do {
      uVar57 = (int)uVar12 + 8;
      *(undefined8 *)(((ulong)puVar18 & 0xfffffffffffffff0) + uVar12) =
           *(undefined8 *)((long)local_700 + uVar12);
      uVar12 = (ulong)uVar57;
    } while (uVar57 < (uint)((int)uVar26 * 8));
  }
  else {
    uVar13 = (**(code **)**(undefined8 **)param_1[0xd])
                       (*(undefined8 **)param_1[0xd],param_1[8],param_2 + 10,&stack0x00000008);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::createLargeLeaf(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > const&, embree::FastAllocator::CachedAllocator) */

BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
* __thiscall
embree::sse2::GeneralBVHBuilder::
BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
::createLargeLeaf(BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
                  *this,ulong *param_1,ulong *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  uint uVar19;
  uint uVar20;
  FastAllocator *this_00;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  ulong *puVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  FastAllocator *in_stack_00000008;
  ulong *in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong *local_bf0;
  ulong local_ba0;
  ulong local_b98 [2];
  ulong local_b88;
  ulong uStack_b80;
  ulong local_b78;
  ulong uStack_b70;
  ulong local_b68;
  ulong uStack_b60;
  ulong local_b58;
  ulong uStack_b50;
  ulong local_b48 [2];
  undefined1 local_b38 [16];
  undefined1 local_b28 [16];
  float local_b18;
  float fStack_b14;
  float fStack_b10;
  float fStack_b0c;
  float local_b08;
  float fStack_b04;
  float fStack_b00;
  float fStack_afc;
  ulong local_af8;
  float local_ae8;
  float fStack_ae4;
  float fStack_ae0;
  float fStack_adc;
  float local_ad8;
  float fStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  float local_ac8;
  float fStack_ac4;
  float fStack_ac0;
  float fStack_abc;
  float local_ab8;
  float fStack_ab4;
  float fStack_ab0;
  float fStack_aac;
  ulong local_aa8;
  float local_a98;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  float local_a88;
  float fStack_a84;
  float fStack_a80;
  float fStack_a7c;
  float local_a78;
  float fStack_a74;
  float fStack_a70;
  float fStack_a6c;
  float local_a68;
  float fStack_a64;
  float fStack_a60;
  float fStack_a5c;
  ulong local_a58;
  undefined1 local_a48 [16];
  undefined1 local_a38 [16];
  float local_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  float local_a18;
  float fStack_a14;
  float fStack_a10;
  float fStack_a0c;
  ulong local_648;
  bool local_640 [8];
  ulong local_638 [11];
  undefined1 local_5e0;
  long local_598;
  long local_590;
  undefined1 local_580;
  long local_538;
  long local_530;
  undefined1 local_520;
  long local_4d8;
  long local_4d0;
  undefined1 local_4c0;
  long local_478;
  long local_470;
  undefined1 local_460;
  long local_418;
  long local_410;
  undefined1 local_400;
  long local_3b8;
  long local_3b0;
  undefined1 local_3a0;
  long local_358;
  long local_350;
  undefined1 local_340;
  long local_2f8;
  long local_2f0;
  undefined1 local_2e0;
  long local_298;
  long local_290;
  undefined1 local_280;
  long local_238;
  long local_230;
  undefined1 local_220;
  long local_1d8;
  long local_1d0;
  undefined1 local_1c0;
  long local_178;
  long local_170;
  undefined1 local_160;
  long local_118;
  long local_110;
  undefined1 local_100;
  long local_b8;
  long local_b0;
  undefined1 local_a0;
  long local_58;
  long local_50;
  long local_40;
  
  puVar25 = in_stack_00000010;
  this_00 = in_stack_00000008;
  uVar31 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] < uVar31) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = param_1[4];
  uVar21 = param_3[0xb] - param_3[10];
  if (uVar1 < uVar21) {
    local_648 = uVar31;
    local_638[0] = param_3[2];
    local_638[1] = param_3[3];
    local_638[8] = param_3[10];
    local_638[9] = param_3[0xb];
    local_638[2] = param_3[4];
    local_638[3] = param_3[5];
    local_640[0] = (bool)(char)param_3[1];
    local_638[4] = param_3[6];
    local_638[5] = param_3[7];
    local_638[6] = param_3[8];
    local_638[7] = param_3[9];
    if (uVar1 < param_3[0xb] - param_3[10]) {
      plVar2 = (long *)param_1[9];
      uVar32 = 1;
      lVar28 = 0;
      auVar35._0_8_ = CONCAT44(_LC2,_LC2);
      auVar35._8_4_ = _LC2;
      auVar35._12_4_ = _LC2;
      auVar36._0_8_ = CONCAT44(_LC4,_LC4);
      auVar36._8_4_ = _LC4;
      auVar36._12_4_ = _LC4;
      puVar29 = &local_648;
LAB_00106068:
      do {
        lVar3 = *plVar2;
        uVar24 = local_638[lVar28 * 0xc + 8];
        uVar33 = local_638[lVar28 * 0xc + 9];
        uVar34 = uVar24 + uVar33 >> 1;
        if (uVar24 < uVar34) {
          auVar59._8_4_ = _LC2;
          auVar59._0_8_ = auVar35._0_8_;
          auVar59._12_4_ = _LC2;
          auVar61._8_4_ = _LC4;
          auVar61._0_8_ = auVar36._0_8_;
          auVar61._12_4_ = _LC4;
          auVar64._8_4_ = _LC2;
          auVar64._0_8_ = auVar35._0_8_;
          auVar64._12_4_ = _LC2;
          auVar66._8_4_ = _LC4;
          auVar66._0_8_ = auVar36._0_8_;
          auVar66._12_4_ = _LC4;
          pauVar23 = (undefined1 (*) [16])(uVar24 * 0x20 + lVar3);
          do {
            auVar56._0_4_ = *(float *)pauVar23[1] + *(float *)*pauVar23;
            auVar56._4_4_ = *(float *)(pauVar23[1] + 4) + *(float *)(*pauVar23 + 4);
            auVar56._8_4_ = *(float *)(pauVar23[1] + 8) + *(float *)(*pauVar23 + 8);
            auVar56._12_4_ = *(float *)(pauVar23[1] + 0xc) + *(float *)(*pauVar23 + 0xc);
            pauVar22 = pauVar23 + 2;
            auVar66 = minps(auVar66,*pauVar23);
            auVar64 = maxps(auVar64,pauVar23[1]);
            auVar61 = minps(auVar61,auVar56);
            auVar59 = maxps(auVar59,auVar56);
            pauVar23 = pauVar22;
          } while (pauVar22 != (undefined1 (*) [16])(uVar34 * 0x20 + lVar3));
        }
        else {
          auVar59._8_4_ = _LC2;
          auVar59._0_8_ = auVar35._0_8_;
          auVar59._12_4_ = _LC2;
          auVar61._8_4_ = _LC4;
          auVar61._0_8_ = auVar36._0_8_;
          auVar61._12_4_ = _LC4;
          auVar64._8_4_ = _LC2;
          auVar64._0_8_ = auVar35._0_8_;
          auVar64._12_4_ = _LC2;
          auVar66._8_4_ = _LC4;
          auVar66._0_8_ = auVar36._0_8_;
          auVar66._12_4_ = _LC4;
        }
        if (uVar34 < uVar33) {
          auVar45._8_4_ = _LC2;
          auVar45._0_8_ = auVar35._0_8_;
          auVar45._12_4_ = _LC2;
          auVar51._8_4_ = _LC4;
          auVar51._0_8_ = auVar36._0_8_;
          auVar51._12_4_ = _LC4;
          auVar52._8_4_ = _LC2;
          auVar52._0_8_ = auVar35._0_8_;
          auVar52._12_4_ = _LC2;
          auVar53._8_4_ = _LC4;
          auVar53._0_8_ = auVar36._0_8_;
          auVar53._12_4_ = _LC4;
          pauVar23 = (undefined1 (*) [16])(uVar34 * 0x20 + lVar3);
          do {
            auVar39._0_4_ = *(float *)pauVar23[1] + *(float *)*pauVar23;
            auVar39._4_4_ = *(float *)(pauVar23[1] + 4) + *(float *)(*pauVar23 + 4);
            auVar39._8_4_ = *(float *)(pauVar23[1] + 8) + *(float *)(*pauVar23 + 8);
            auVar39._12_4_ = *(float *)(pauVar23[1] + 0xc) + *(float *)(*pauVar23 + 0xc);
            pauVar22 = pauVar23 + 2;
            auVar53 = minps(auVar53,*pauVar23);
            auVar52 = maxps(auVar52,pauVar23[1]);
            auVar51 = minps(auVar51,auVar39);
            auVar45 = maxps(auVar45,auVar39);
            pauVar23 = pauVar22;
          } while (pauVar22 != (undefined1 (*) [16])(lVar3 + uVar33 * 0x20));
        }
        else {
          auVar45._8_4_ = _LC2;
          auVar45._0_8_ = auVar35._0_8_;
          auVar45._12_4_ = _LC2;
          auVar51._8_4_ = _LC4;
          auVar51._0_8_ = auVar36._0_8_;
          auVar51._12_4_ = _LC4;
          auVar52._8_4_ = _LC2;
          auVar52._0_8_ = auVar35._0_8_;
          auVar52._12_4_ = _LC2;
          auVar53._8_4_ = _LC4;
          auVar53._0_8_ = auVar36._0_8_;
          auVar53._12_4_ = _LC4;
        }
        uVar32 = uVar32 + 1;
        puVar30 = puVar29 + 0xc;
        *(ulong *)(local_640 + lVar28 * 0x60 + -8) = *puVar29;
        local_640[lVar28 * 0x60] = SUB81(puVar29[1],0);
        uVar5 = puVar29[3];
        local_638[lVar28 * 0xc] = puVar29[2];
        local_638[lVar28 * 0xc + 1] = uVar5;
        uVar5 = puVar29[5];
        local_638[lVar28 * 0xc + 2] = puVar29[4];
        local_638[lVar28 * 0xc + 3] = uVar5;
        uVar5 = puVar29[7];
        local_638[lVar28 * 0xc + 4] = puVar29[6];
        local_638[lVar28 * 0xc + 5] = uVar5;
        uVar5 = puVar29[9];
        local_638[lVar28 * 0xc + 6] = puVar29[8];
        local_638[lVar28 * 0xc + 7] = uVar5;
        uVar5 = puVar29[0xb];
        local_638[lVar28 * 0xc + 8] = puVar29[10];
        local_638[lVar28 * 0xc + 9] = uVar5;
        *puVar29 = uVar31 + 1;
        *(undefined1 *)(puVar29 + 1) = 0;
        *(undefined1 (*) [16])(puVar29 + 2) = auVar66;
        *(undefined1 (*) [16])(puVar29 + 4) = auVar64;
        *(undefined1 (*) [16])(puVar29 + 6) = auVar61;
        *(undefined1 (*) [16])(puVar29 + 8) = auVar59;
        puVar29[10] = uVar24;
        puVar29[0xb] = uVar34;
        *puVar30 = uVar31 + 1;
        *(undefined1 *)(puVar29 + 0xd) = 0;
        *(undefined1 (*) [16])(puVar29 + 0xe) = auVar53;
        *(undefined1 (*) [16])(puVar29 + 0x10) = auVar52;
        *(undefined1 (*) [16])(puVar29 + 0x12) = auVar51;
        *(undefined1 (*) [16])(puVar29 + 0x14) = auVar45;
        puVar29[0x16] = uVar34;
        puVar29[0x17] = uVar33;
        if (*param_1 <= uVar32) {
          uVar31 = param_1[7];
          if (uVar21 <= uVar31) goto LAB_00106632;
          local_640[0] = local_638[9] - local_638[8] <= uVar31;
          goto LAB_00107127;
        }
        uVar24 = local_638[9] - local_638[8];
        lVar28 = 0;
        if (uVar24 <= uVar1) {
          uVar24 = 0;
          lVar28 = -1;
        }
        uVar33 = uVar24;
        if (uVar24 <= uVar1) {
          uVar33 = uVar1;
        }
        puVar29 = puVar30;
        if (uVar33 < (ulong)(local_590 - local_598)) {
          lVar28 = 1;
          uVar24 = local_590 - local_598;
          if (uVar32 == 2) goto LAB_00106068;
LAB_00106223:
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_530 - local_538)) {
            lVar28 = 2;
            uVar24 = local_530 - local_538;
            if (uVar32 == 3) goto LAB_00106068;
          }
          else if (uVar32 == 3) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_4d0 - local_4d8)) {
            lVar28 = 3;
            uVar24 = local_4d0 - local_4d8;
            if (uVar32 == 4) goto LAB_00106068;
          }
          else if (uVar32 == 4) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_470 - local_478)) {
            lVar28 = 4;
            uVar24 = local_470 - local_478;
            if (uVar32 == 5) goto LAB_00106068;
          }
          else if (uVar32 == 5) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_410 - local_418)) {
            lVar28 = 5;
            uVar24 = local_410 - local_418;
            if (uVar32 == 6) goto LAB_00106068;
          }
          else if (uVar32 == 6) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_3b0 - local_3b8)) {
            lVar28 = 6;
            uVar24 = local_3b0 - local_3b8;
            if (uVar32 == 7) goto LAB_00106068;
          }
          else if (uVar32 == 7) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_350 - local_358)) {
            lVar28 = 7;
            uVar24 = local_350 - local_358;
            if (uVar32 == 8) goto LAB_00106068;
          }
          else if (uVar32 == 8) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_2f0 - local_2f8)) {
            lVar28 = 8;
            uVar24 = local_2f0 - local_2f8;
            if (uVar32 == 9) goto LAB_00106068;
          }
          else if (uVar32 == 9) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_290 - local_298)) {
            lVar28 = 9;
            uVar24 = local_290 - local_298;
            if (uVar32 == 10) goto LAB_00106068;
          }
          else if (uVar32 == 10) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_230 - local_238)) {
            lVar28 = 10;
            uVar24 = local_230 - local_238;
            if (uVar32 == 0xb) goto LAB_00106068;
          }
          else if (uVar32 == 0xb) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_1d0 - local_1d8)) {
            lVar28 = 0xb;
            uVar24 = local_1d0 - local_1d8;
            if (uVar32 == 0xc) goto LAB_00106068;
          }
          else if (uVar32 == 0xc) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_170 - local_178)) {
            lVar28 = 0xc;
            uVar24 = local_170 - local_178;
            if (uVar32 == 0xd) goto LAB_00106068;
          }
          else if (uVar32 == 0xd) goto LAB_00106550;
          uVar33 = uVar24;
          if (uVar24 <= uVar1) {
            uVar33 = uVar1;
          }
          if (uVar33 < (ulong)(local_110 - local_118)) {
            lVar28 = 0xd;
            uVar24 = local_110 - local_118;
            if (uVar32 == 0xe) goto LAB_00106068;
          }
          else if (uVar32 == 0xe) goto LAB_00106550;
          uVar33 = local_b0 - local_b8;
          if (uVar24 <= uVar1) {
            uVar24 = uVar1;
          }
          if (uVar24 < uVar33) {
            if (uVar32 == 0x10) {
              if (uVar33 <= uVar1) {
                uVar33 = uVar1;
              }
              lVar28 = (ulong)(uVar33 < (ulong)(local_50 - local_58)) + 0xe;
            }
            else {
              uVar32 = 0xf;
              lVar28 = 0xe;
            }
            goto LAB_00106068;
          }
          if ((uVar32 == 0x10) && (uVar24 < (ulong)(local_50 - local_58))) {
            lVar28 = 0xf;
            goto LAB_00106068;
          }
        }
        else if (uVar32 != 2) goto LAB_00106223;
LAB_00106550:
      } while (lVar28 != -1);
    }
    else {
      uVar32 = 1;
      auVar35._4_4_ = _LC2;
      auVar35._0_4_ = _LC2;
      auVar35._8_4_ = _LC2;
      auVar35._12_4_ = _LC2;
      auVar36._4_4_ = _LC4;
      auVar36._0_4_ = _LC4;
      auVar36._8_4_ = _LC4;
      auVar36._12_4_ = _LC4;
    }
    uVar31 = param_1[7];
    if ((uVar31 < uVar21) && (local_640[0] = local_638[9] - local_638[8] <= uVar31, uVar32 != 1)) {
LAB_00107127:
      local_5e0 = (ulong)(local_590 - local_598) <= uVar31;
      if (((uVar32 != 2) &&
          (((local_580 = (ulong)(local_530 - local_538) <= uVar31, uVar32 != 3 &&
            (local_520 = (ulong)(local_4d0 - local_4d8) <= uVar31, uVar32 != 4)) &&
           (local_4c0 = (ulong)(local_470 - local_478) <= uVar31, uVar32 != 5)))) &&
         ((((local_460 = (ulong)(local_410 - local_418) <= uVar31, uVar32 != 6 &&
            (local_400 = (ulong)(local_3b0 - local_3b8) <= uVar31, uVar32 != 7)) &&
           (local_3a0 = (ulong)(local_350 - local_358) <= uVar31, uVar32 != 8)) &&
          (((local_340 = (ulong)(local_2f0 - local_2f8) <= uVar31, uVar32 != 9 &&
            (local_2e0 = (ulong)(local_290 - local_298) <= uVar31, uVar32 != 10)) &&
           (((local_280 = (ulong)(local_230 - local_238) <= uVar31, uVar32 != 0xb &&
             (((local_220 = (ulong)(local_1d0 - local_1d8) <= uVar31, uVar32 != 0xc &&
               (local_1c0 = (ulong)(local_170 - local_178) <= uVar31, uVar32 != 0xd)) &&
              (local_160 = (ulong)(local_110 - local_118) <= uVar31, uVar32 != 0xe)))) &&
            (local_100 = (ulong)(local_b0 - local_b8) <= uVar31, uVar32 != 0xf)))))))) {
        local_a0 = (ulong)(local_50 - local_58) <= uVar31;
      }
    }
LAB_00106632:
    local_ba0 = 0xe0;
    uVar31 = *in_stack_00000010;
    if (in_stack_00000008 != *(FastAllocator **)(uVar31 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(uVar31 + 8) != 0) {
        LOCK();
        plVar2 = (long *)(*(long *)(uVar31 + 8) + 0x118);
        *plVar2 = *plVar2 + *(long *)(uVar31 + 0xa8) + *(long *)(uVar31 + 0x68);
        UNLOCK();
        LOCK();
        plVar2 = (long *)(*(long *)(uVar31 + 8) + 0x120);
        *plVar2 = *plVar2 + (((*(long *)(uVar31 + 0x98) + *(long *)(uVar31 + 0x58)) -
                             *(long *)(uVar31 + 0x50)) - *(long *)(uVar31 + 0x90));
        UNLOCK();
        LOCK();
        plVar2 = (long *)(*(long *)(uVar31 + 8) + 0x128);
        *plVar2 = *plVar2 + *(long *)(uVar31 + 0xb0) + *(long *)(uVar31 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(uVar31 + 0x48) = 0;
      *(undefined8 *)(uVar31 + 0x58) = 0;
      *(undefined8 *)(uVar31 + 0x50) = 0;
      *(undefined8 *)(uVar31 + 0x68) = 0;
      *(undefined8 *)(uVar31 + 0x70) = 0;
      *(undefined8 *)(uVar31 + 0x60) = 0;
      if (this_00 == (FastAllocator *)0x0) {
        *(undefined8 *)(uVar31 + 0x88) = 0;
        uVar26 = 0;
        *(undefined8 *)(uVar31 + 0x98) = 0;
        *(undefined8 *)(uVar31 + 0x90) = 0;
        *(undefined8 *)(uVar31 + 0xa8) = 0;
        *(undefined8 *)(uVar31 + 0xb0) = 0;
      }
      else {
        uVar26 = *(undefined8 *)(this_00 + 0x10);
        *(undefined8 *)(uVar31 + 0x88) = 0;
        *(undefined8 *)(uVar31 + 0x98) = 0;
        *(undefined8 *)(uVar31 + 0x60) = uVar26;
        *(undefined8 *)(uVar31 + 0x90) = 0;
        *(undefined8 *)(uVar31 + 0xa8) = 0;
        *(undefined8 *)(uVar31 + 0xb0) = 0;
        *(undefined8 *)(uVar31 + 0xa0) = 0;
        uVar26 = *(undefined8 *)(this_00 + 0x10);
      }
      *(undefined8 *)(uVar31 + 0xa0) = uVar26;
      LOCK();
      *(FastAllocator **)(uVar31 + 8) = this_00;
      UNLOCK();
      local_b98[0] = uVar31;
      embree::MutexSys::lock();
      if (*(ulong **)(this_00 + 0x138) == *(ulong **)(this_00 + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(this_00 + 0x130));
      }
      else {
        **(ulong **)(this_00 + 0x138) = uVar31;
        *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
    }
    local_bf0 = local_b98;
    uVar1 = puVar25[2];
    puVar25[5] = puVar25[5] + 0xe0;
    uVar21 = (ulong)(-(int)uVar1 & 0xf);
    uVar31 = uVar1 + 0xe0 + uVar21;
    puVar25[2] = uVar31;
    if (puVar25[3] < uVar31) {
      puVar25[2] = uVar1;
      if (puVar25[4] < 0x380) {
        puVar27 = (undefined8 *)FastAllocator::malloc(this_00,&local_ba0,0x40,false);
      }
      else {
        local_b98[0] = puVar25[4];
        puVar27 = (undefined8 *)FastAllocator::malloc(this_00,local_bf0,0x40,true);
        puVar25[1] = (ulong)puVar27;
        puVar25[6] = (puVar25[3] + puVar25[6]) - puVar25[2];
        puVar25[2] = 0xe0;
        puVar25[3] = local_b98[0];
        if (local_b98[0] < 0xe0) {
          local_b98[0] = puVar25[4];
          puVar25[2] = 0;
          puVar27 = (undefined8 *)FastAllocator::malloc(this_00,local_bf0,0x40,false);
          puVar25[1] = (ulong)puVar27;
          puVar25[6] = (puVar25[3] + puVar25[6]) - puVar25[2];
          puVar25[2] = 0xe0;
          puVar25[3] = local_b98[0];
          if (local_b98[0] < 0xe0) {
            puVar25[2] = 0;
            puVar27 = (undefined8 *)0x0;
          }
        }
      }
    }
    else {
      puVar25[6] = puVar25[6] + uVar21;
      puVar27 = (undefined8 *)((puVar25[1] - 0xe0) + uVar31);
    }
    *puVar27 = 8;
    puVar27[1] = 8;
    puVar27[2] = 8;
    puVar27[3] = 8;
    *(undefined1 (*) [16])(puVar27 + 0xc) = auVar36;
    *(undefined1 (*) [16])(puVar27 + 8) = auVar36;
    *(undefined1 (*) [16])(puVar27 + 4) = auVar36;
    *(undefined1 (*) [16])(puVar27 + 0xe) = auVar35;
    *(undefined1 (*) [16])(puVar27 + 10) = auVar35;
    *(undefined1 (*) [16])(puVar27 + 6) = auVar35;
    *(undefined1 (*) [16])(puVar27 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar27 + 0x14) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar27 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar27 + 0x1a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar27 + 0x16) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar27 + 0x12) = (undefined1  [16])0x0;
    puVar25 = &local_648;
    puVar29 = local_b48;
    do {
      puVar30 = puVar29 + 10;
      createLargeLeaf((BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
                       *)local_bf0,param_1,puVar25);
      uVar20 = _LC16;
      fVar50 = _LC11;
      puVar29[2] = local_b88;
      puVar29[3] = uStack_b80;
      puVar29[4] = local_b78;
      puVar29[5] = uStack_b70;
      *puVar29 = local_b98[0];
      puVar29[6] = local_b68;
      puVar29[7] = uStack_b60;
      puVar29[8] = local_b58;
      puVar29[9] = uStack_b50;
      puVar25 = puVar25 + 0xc;
      puVar29 = puVar30;
    } while (puVar30 != local_b48 + uVar32 * 10);
    pfVar4 = (float *)param_1[0xc];
    puVar25 = (ulong *)((ulong)puVar27 & 0xfffffffffffffff0);
    *puVar25 = local_b48[0];
    uVar19 = _LC15;
    fVar18 = _LC23;
    fVar38 = *pfVar4;
    auVar67._4_4_ = _LC18;
    auVar67._0_4_ = _LC18;
    auVar67._8_4_ = _LC18;
    auVar67._12_4_ = _LC18;
    fVar60 = fVar50 / (pfVar4[1] - fVar38);
    auVar65._4_4_ = _LC20;
    auVar65._0_4_ = _LC20;
    auVar65._8_4_ = _LC20;
    auVar65._12_4_ = _LC20;
    fVar37 = (float)((uint)fVar38 ^ uVar20) * fVar60;
    fVar60 = (fVar50 - fVar38) * fVar60;
    fVar44 = fVar50 - fVar37;
    fVar38 = fVar50 - fVar60;
    auVar54._0_4_ = local_b28._0_4_ * fVar44 + local_b08 * fVar37;
    auVar54._4_4_ = local_b28._4_4_ * fVar44 + fStack_b04 * fVar37;
    auVar54._8_4_ = local_b28._8_4_ * fVar44 + fStack_b00 * fVar37;
    auVar54._12_4_ = local_b28._12_4_ * fVar44 + fStack_afc * fVar37;
    auVar46._0_4_ = fVar44 * local_b38._0_4_ + fVar37 * local_b18;
    auVar46._4_4_ = fVar44 * local_b38._4_4_ + fVar37 * fStack_b14;
    auVar46._8_4_ = fVar44 * local_b38._8_4_ + fVar37 * fStack_b10;
    auVar46._12_4_ = fVar44 * local_b38._12_4_ + fVar37 * fStack_b0c;
    auVar64 = maxps(auVar54,auVar67);
    auVar61 = minps(auVar46,auVar65);
    auVar68._0_4_ = fVar38 * local_b28._0_4_ + local_b08 * fVar60;
    auVar68._4_4_ = fVar38 * local_b28._4_4_ + fStack_b04 * fVar60;
    auVar68._8_4_ = fVar38 * local_b28._8_4_ + fStack_b00 * fVar60;
    auVar68._12_4_ = fVar38 * local_b28._12_4_ + fStack_afc * fVar60;
    auVar40._0_4_ = fVar38 * local_b38._0_4_ + fVar60 * local_b18;
    auVar40._4_4_ = fVar38 * local_b38._4_4_ + fVar60 * fStack_b14;
    auVar40._8_4_ = fVar38 * local_b38._8_4_ + fVar60 * fStack_b10;
    auVar40._12_4_ = fVar38 * local_b38._12_4_ + fVar60 * fStack_b0c;
    auVar66 = maxps(auVar68,auVar67);
    auVar59 = minps(auVar40,auVar65);
    fVar60 = (float)((uint)auVar64._0_4_ & _LC15) * _LC23 + auVar64._0_4_;
    fVar62 = (float)((uint)auVar64._4_4_ & _LC15) * _LC23 + auVar64._4_4_;
    fVar63 = (float)((uint)auVar64._8_4_ & _LC15) * _LC23 + auVar64._8_4_;
    fVar72 = (float)((uint)auVar59._0_4_ & _LC15) * _LC23;
    fVar73 = (float)((uint)auVar59._4_4_ & _LC15) * _LC23;
    fVar74 = (float)((uint)auVar59._8_4_ & _LC15) * _LC23;
    fVar38 = (float)((uint)auVar61._0_4_ & _LC15) * _LC23;
    fVar37 = (float)((uint)auVar61._4_4_ & _LC15) * _LC23;
    fVar44 = (float)((uint)auVar61._8_4_ & _LC15) * _LC23;
    *(float *)(puVar25 + 6) = fVar60;
    fVar38 = auVar61._0_4_ - fVar38;
    fVar37 = auVar61._4_4_ - fVar37;
    fVar44 = auVar61._8_4_ - fVar44;
    *(float *)(puVar25 + 4) = fVar38;
    *(float *)(puVar25 + 0x10) = (auVar59._0_4_ - fVar72) - fVar38;
    *(float *)(puVar25 + 8) = fVar37;
    *(float *)(puVar25 + 0xc) = fVar44;
    auVar61 = maxps(auVar35,local_b28);
    *(float *)(puVar25 + 10) = fVar62;
    *(float *)(puVar25 + 0x14) = (auVar59._4_4_ - fVar73) - fVar37;
    *(float *)(puVar25 + 0x18) = (auVar59._8_4_ - fVar74) - fVar44;
    *(float *)(puVar25 + 0xe) = fVar63;
    *(float *)(puVar25 + 0x12) =
         ((float)((uint)auVar66._0_4_ & uVar19) * fVar18 + auVar66._0_4_) - fVar60;
    auVar59 = minps(auVar36,local_b38);
    *(float *)(puVar25 + 0x16) =
         ((float)((uint)auVar66._4_4_ & uVar19) * fVar18 + auVar66._4_4_) - fVar62;
    *(float *)(puVar25 + 0x1a) =
         ((float)((uint)auVar66._8_4_ & uVar19) * fVar18 + auVar66._8_4_) - fVar63;
    auVar6._4_4_ = fStack_b14;
    auVar6._0_4_ = local_b18;
    auVar6._8_4_ = fStack_b10;
    auVar6._12_4_ = fStack_b0c;
    auVar36 = minps(auVar36,auVar6);
    auVar7._4_4_ = fStack_b04;
    auVar7._0_4_ = local_b08;
    auVar7._8_4_ = fStack_b00;
    auVar7._12_4_ = fStack_afc;
    auVar35 = maxps(auVar35,auVar7);
    if (uVar32 != 1) {
      auVar10._4_4_ = fStack_ac4;
      auVar10._0_4_ = local_ac8;
      auVar10._8_4_ = fStack_ac0;
      auVar10._12_4_ = fStack_abc;
      auVar36 = minps(auVar36,auVar10);
      auVar11._4_4_ = fStack_ab4;
      auVar11._0_4_ = local_ab8;
      auVar11._8_4_ = fStack_ab0;
      auVar11._12_4_ = fStack_aac;
      auVar35 = maxps(auVar35,auVar11);
      auVar8._4_4_ = fStack_ae4;
      auVar8._0_4_ = local_ae8;
      auVar8._8_4_ = fStack_ae0;
      auVar8._12_4_ = fStack_adc;
      auVar59 = minps(auVar59,auVar8);
      puVar25[1] = local_af8;
      fVar38 = *pfVar4;
      auVar9._4_4_ = fStack_ad4;
      auVar9._0_4_ = local_ad8;
      auVar9._8_4_ = fStack_ad0;
      auVar9._12_4_ = fStack_acc;
      auVar61 = maxps(auVar61,auVar9);
      fVar60 = fVar50 / (pfVar4[1] - fVar38);
      fVar44 = (float)((uint)fVar38 ^ uVar20) * fVar60;
      fVar37 = fVar50 - fVar44;
      fVar60 = (fVar50 - fVar38) * fVar60;
      fVar38 = fVar50 - fVar60;
      auVar55._0_4_ = local_ad8 * fVar37 + local_ab8 * fVar44;
      auVar55._4_4_ = fStack_ad4 * fVar37 + fStack_ab4 * fVar44;
      auVar55._8_4_ = fStack_ad0 * fVar37 + fStack_ab0 * fVar44;
      auVar55._12_4_ = fStack_acc * fVar37 + fStack_aac * fVar44;
      auVar41._0_4_ = fVar37 * local_ae8 + fVar44 * local_ac8;
      auVar41._4_4_ = fVar37 * fStack_ae4 + fVar44 * fStack_ac4;
      auVar41._8_4_ = fVar37 * fStack_ae0 + fVar44 * fStack_ac0;
      auVar41._12_4_ = fVar37 * fStack_adc + fVar44 * fStack_abc;
      auVar56 = maxps(auVar55,auVar67);
      auVar64 = minps(auVar41,auVar65);
      auVar69._0_4_ = local_ad8 * fVar38 + local_ab8 * fVar60;
      auVar69._4_4_ = fStack_ad4 * fVar38 + fStack_ab4 * fVar60;
      auVar69._8_4_ = fStack_ad0 * fVar38 + fStack_ab0 * fVar60;
      auVar69._12_4_ = fStack_acc * fVar38 + fStack_aac * fVar60;
      auVar47._0_4_ = fVar60 * local_ac8 + fVar38 * local_ae8;
      auVar47._4_4_ = fVar60 * fStack_ac4 + fVar38 * fStack_ae4;
      auVar47._8_4_ = fVar60 * fStack_ac0 + fVar38 * fStack_ae0;
      auVar47._12_4_ = fVar60 * fStack_abc + fVar38 * fStack_adc;
      auVar45 = maxps(auVar69,auVar67);
      auVar66 = minps(auVar47,auVar65);
      fVar60 = (float)((uint)auVar56._0_4_ & uVar19) * fVar18 + auVar56._0_4_;
      fVar62 = (float)((uint)auVar56._4_4_ & uVar19) * fVar18 + auVar56._4_4_;
      fVar63 = (float)((uint)auVar56._8_4_ & uVar19) * fVar18 + auVar56._8_4_;
      *(float *)((long)puVar25 + 0x34) = fVar60;
      fVar38 = auVar64._0_4_ - (float)((uint)auVar64._0_4_ & uVar19) * fVar18;
      fVar37 = auVar64._4_4_ - (float)((uint)auVar64._4_4_ & uVar19) * fVar18;
      fVar44 = auVar64._8_4_ - (float)((uint)auVar64._8_4_ & uVar19) * fVar18;
      *(float *)((long)puVar25 + 0x24) = fVar38;
      *(float *)((long)puVar25 + 0x84) =
           (auVar66._0_4_ - (float)((uint)auVar66._0_4_ & uVar19) * fVar18) - fVar38;
      *(float *)((long)puVar25 + 0x44) = fVar37;
      *(float *)((long)puVar25 + 100) = fVar44;
      *(float *)((long)puVar25 + 0x54) = fVar62;
      *(float *)((long)puVar25 + 0xa4) =
           (auVar66._4_4_ - (float)((uint)auVar66._4_4_ & uVar19) * fVar18) - fVar37;
      *(float *)((long)puVar25 + 0x74) = fVar63;
      *(float *)((long)puVar25 + 0x94) =
           ((float)((uint)auVar45._0_4_ & uVar19) * fVar18 + auVar45._0_4_) - fVar60;
      *(float *)((long)puVar25 + 0xc4) =
           (auVar66._8_4_ - (float)((uint)auVar66._8_4_ & uVar19) * fVar18) - fVar44;
      *(float *)((long)puVar25 + 0xb4) =
           ((float)((uint)auVar45._4_4_ & uVar19) * fVar18 + auVar45._4_4_) - fVar62;
      *(float *)((long)puVar25 + 0xd4) =
           ((float)((uint)auVar45._8_4_ & uVar19) * fVar18 + auVar45._8_4_) - fVar63;
      if (uVar32 != 2) {
        auVar14._4_4_ = fStack_a74;
        auVar14._0_4_ = local_a78;
        auVar14._8_4_ = fStack_a70;
        auVar14._12_4_ = fStack_a6c;
        auVar36 = minps(auVar36,auVar14);
        auVar15._4_4_ = fStack_a64;
        auVar15._0_4_ = local_a68;
        auVar15._8_4_ = fStack_a60;
        auVar15._12_4_ = fStack_a5c;
        auVar35 = maxps(auVar35,auVar15);
        auVar12._4_4_ = fStack_a94;
        auVar12._0_4_ = local_a98;
        auVar12._8_4_ = fStack_a90;
        auVar12._12_4_ = fStack_a8c;
        auVar59 = minps(auVar59,auVar12);
        puVar25[2] = local_aa8;
        fVar38 = *pfVar4;
        auVar13._4_4_ = fStack_a84;
        auVar13._0_4_ = local_a88;
        auVar13._8_4_ = fStack_a80;
        auVar13._12_4_ = fStack_a7c;
        auVar61 = maxps(auVar61,auVar13);
        fVar44 = fVar50 / (pfVar4[1] - fVar38);
        fVar37 = (float)((uint)fVar38 ^ uVar20) * fVar44;
        fVar60 = fVar50 - fVar37;
        fVar44 = (fVar50 - fVar38) * fVar44;
        fVar38 = fVar50 - fVar44;
        auVar57._0_4_ = local_a68 * fVar37 + local_a88 * fVar60;
        auVar57._4_4_ = fStack_a64 * fVar37 + fStack_a84 * fVar60;
        auVar57._8_4_ = fStack_a60 * fVar37 + fStack_a80 * fVar60;
        auVar57._12_4_ = fStack_a5c * fVar37 + fStack_a7c * fVar60;
        auVar48._0_4_ = fVar37 * local_a78 + fVar60 * local_a98;
        auVar48._4_4_ = fVar37 * fStack_a74 + fVar60 * fStack_a94;
        auVar48._8_4_ = fVar37 * fStack_a70 + fVar60 * fStack_a90;
        auVar48._12_4_ = fVar37 * fStack_a6c + fVar60 * fStack_a8c;
        auVar56 = maxps(auVar57,auVar67);
        auVar66 = minps(auVar48,auVar65);
        auVar70._0_4_ = local_a68 * fVar44 + local_a88 * fVar38;
        auVar70._4_4_ = fStack_a64 * fVar44 + fStack_a84 * fVar38;
        auVar70._8_4_ = fStack_a60 * fVar44 + fStack_a80 * fVar38;
        auVar70._12_4_ = fStack_a5c * fVar44 + fStack_a7c * fVar38;
        auVar42._0_4_ = fVar44 * local_a78 + fVar38 * local_a98;
        auVar42._4_4_ = fVar44 * fStack_a74 + fVar38 * fStack_a94;
        auVar42._8_4_ = fVar44 * fStack_a70 + fVar38 * fStack_a90;
        auVar42._12_4_ = fVar44 * fStack_a6c + fVar38 * fStack_a8c;
        auVar45 = maxps(auVar70,auVar67);
        auVar64 = minps(auVar42,auVar65);
        fVar60 = (float)((uint)auVar56._0_4_ & uVar19) * fVar18 + auVar56._0_4_;
        fVar62 = (float)((uint)auVar56._4_4_ & uVar19) * fVar18 + auVar56._4_4_;
        fVar63 = (float)((uint)auVar56._8_4_ & uVar19) * fVar18 + auVar56._8_4_;
        *(float *)(puVar25 + 7) = fVar60;
        fVar38 = auVar66._0_4_ - (float)((uint)auVar66._0_4_ & uVar19) * fVar18;
        fVar37 = auVar66._4_4_ - (float)((uint)auVar66._4_4_ & uVar19) * fVar18;
        fVar44 = auVar66._8_4_ - (float)((uint)auVar66._8_4_ & uVar19) * fVar18;
        *(float *)(puVar25 + 5) = fVar38;
        *(float *)(puVar25 + 0x11) =
             (auVar64._0_4_ - (float)((uint)auVar64._0_4_ & uVar19) * fVar18) - fVar38;
        *(float *)(puVar25 + 9) = fVar37;
        *(float *)(puVar25 + 0xd) = fVar44;
        *(float *)(puVar25 + 0xb) = fVar62;
        *(float *)(puVar25 + 0x15) =
             (auVar64._4_4_ - (float)((uint)auVar64._4_4_ & uVar19) * fVar18) - fVar37;
        *(float *)(puVar25 + 0x19) =
             (auVar64._8_4_ - (float)((uint)auVar64._8_4_ & uVar19) * fVar18) - fVar44;
        *(float *)(puVar25 + 0x13) =
             ((float)((uint)auVar45._0_4_ & uVar19) * fVar18 + auVar45._0_4_) - fVar60;
        *(float *)(puVar25 + 0xf) = fVar63;
        *(float *)(puVar25 + 0x17) =
             ((float)((uint)auVar45._4_4_ & uVar19) * fVar18 + auVar45._4_4_) - fVar62;
        *(float *)(puVar25 + 0x1b) =
             ((float)((uint)auVar45._8_4_ & uVar19) * fVar18 + auVar45._8_4_) - fVar63;
        if (uVar32 != 3) {
          auVar16._4_4_ = fStack_a24;
          auVar16._0_4_ = local_a28;
          auVar16._8_4_ = fStack_a20;
          auVar16._12_4_ = fStack_a1c;
          auVar36 = minps(auVar36,auVar16);
          auVar17._4_4_ = fStack_a14;
          auVar17._0_4_ = local_a18;
          auVar17._8_4_ = fStack_a10;
          auVar17._12_4_ = fStack_a0c;
          auVar35 = maxps(auVar35,auVar17);
          puVar25[3] = local_a58;
          fVar38 = *pfVar4;
          auVar59 = minps(auVar59,local_a48);
          fVar44 = fVar50 / (pfVar4[1] - fVar38);
          fVar37 = (float)(uVar20 ^ (uint)fVar38) * fVar44;
          fVar44 = (fVar50 - fVar38) * fVar44;
          fVar38 = fVar50 - fVar37;
          fVar50 = fVar50 - fVar44;
          auVar61 = maxps(auVar61,local_a38);
          auVar49._0_4_ = fVar37 * local_a28 + fVar38 * local_a48._0_4_;
          auVar49._4_4_ = fVar37 * fStack_a24 + fVar38 * local_a48._4_4_;
          auVar49._8_4_ = fVar37 * fStack_a20 + fVar38 * local_a48._8_4_;
          auVar49._12_4_ = fVar37 * fStack_a1c + fVar38 * local_a48._12_4_;
          auVar71._0_4_ = local_a18 * fVar37 + fVar38 * local_a38._0_4_;
          auVar71._4_4_ = fStack_a14 * fVar37 + fVar38 * local_a38._4_4_;
          auVar71._8_4_ = fStack_a10 * fVar37 + fVar38 * local_a38._8_4_;
          auVar71._12_4_ = fStack_a0c * fVar37 + fVar38 * local_a38._12_4_;
          auVar66 = minps(auVar49,auVar65);
          auVar45 = maxps(auVar71,auVar67);
          auVar58._0_4_ = local_a18 * fVar44 + local_a38._0_4_ * fVar50;
          auVar58._4_4_ = fStack_a14 * fVar44 + local_a38._4_4_ * fVar50;
          auVar58._8_4_ = fStack_a10 * fVar44 + local_a38._8_4_ * fVar50;
          auVar58._12_4_ = fStack_a0c * fVar44 + local_a38._12_4_ * fVar50;
          auVar43._0_4_ = fVar44 * local_a28 + fVar50 * local_a48._0_4_;
          auVar43._4_4_ = fVar44 * fStack_a24 + fVar50 * local_a48._4_4_;
          auVar43._8_4_ = fVar44 * fStack_a20 + fVar50 * local_a48._8_4_;
          auVar43._12_4_ = fVar44 * fStack_a1c + fVar50 * local_a48._12_4_;
          auVar56 = maxps(auVar58,auVar67);
          auVar64 = minps(auVar43,auVar65);
          fVar50 = auVar66._0_4_ - (float)((uint)auVar66._0_4_ & uVar19) * fVar18;
          fVar38 = auVar66._4_4_ - (float)((uint)auVar66._4_4_ & uVar19) * fVar18;
          fVar37 = auVar66._8_4_ - (float)((uint)auVar66._8_4_ & uVar19) * fVar18;
          fVar44 = (float)((uint)auVar45._0_4_ & uVar19) * fVar18 + auVar45._0_4_;
          fVar60 = (float)((uint)auVar45._4_4_ & uVar19) * fVar18 + auVar45._4_4_;
          fVar62 = (float)((uint)auVar45._8_4_ & uVar19) * fVar18 + auVar45._8_4_;
          *(float *)((long)puVar25 + 0x2c) = fVar50;
          *(float *)((long)puVar25 + 0x3c) = fVar44;
          *(float *)((long)puVar25 + 0x4c) = fVar38;
          *(float *)((long)puVar25 + 0x6c) = fVar37;
          *(float *)((long)puVar25 + 0x5c) = fVar60;
          *(float *)((long)puVar25 + 0x8c) =
               (auVar64._0_4_ - (float)(uVar19 & (uint)auVar64._0_4_) * fVar18) - fVar50;
          *(float *)((long)puVar25 + 0x9c) =
               ((float)((uint)auVar56._0_4_ & uVar19) * fVar18 + auVar56._0_4_) - fVar44;
          *(float *)((long)puVar25 + 0xcc) =
               (auVar64._8_4_ - (float)(uVar19 & (uint)auVar64._8_4_) * fVar18) - fVar37;
          *(float *)((long)puVar25 + 0x7c) = fVar62;
          *(float *)((long)puVar25 + 0xac) =
               (auVar64._4_4_ - (float)(uVar19 & (uint)auVar64._4_4_) * fVar18) - fVar38;
          *(float *)((long)puVar25 + 0xbc) =
               ((float)((uint)auVar56._4_4_ & uVar19) * fVar18 + auVar56._4_4_) - fVar60;
          *(float *)((long)puVar25 + 0xdc) =
               ((float)((uint)auVar56._8_4_ & uVar19) * fVar18 + auVar56._8_4_) - fVar62;
        }
      }
    }
    *(ulong *)this = (ulong)puVar27 | 1;
    *(undefined1 (*) [16])(this + 0x10) = auVar59;
    *(undefined1 (*) [16])(this + 0x20) = auVar61;
    *(undefined1 (*) [16])(this + 0x30) = auVar36;
    *(undefined1 (*) [16])(this + 0x40) = auVar35;
  }
  else {
    (**(code **)**(undefined8 **)param_1[0xd])
              (this,*(undefined8 **)param_1[0xd],param_1[8],param_3 + 10,&stack0x00000008);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* embree::parallel_reduce_internal<unsigned long, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> >, embree::bin_serial_or_parallel<true, embree::sse2::BinInfoT<32ul,
   embree::PrimRef, embree::BBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRef>(embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const*, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long> const&)#1},
   embree::bin_serial_or_parallel<true, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRef>(embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const*, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> > const&, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> > const&)#2}>(unsigned long, unsigned long, unsigned long, unsigned
   long, embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> > const&,
   embree::bin_serial_or_parallel<true, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRef>(embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const*, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::bin_serial_or_parallel<true, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRef>(embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const*, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> > const&, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> > const&)#2} const&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_reduce_internal<unsigned_long,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::{lambda(embree::range<unsigned_long>const&)#1},embree::bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::{lambda(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>const&,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>const...a>>const&,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>const&)#2}const&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined1 (*pauVar25) [16];
  ulong uVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined1 (*pauVar33) [16];
  long in_FS_OFFSET;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar42;
  uint uVar43;
  undefined1 auVar41 [16];
  uint uVar45;
  uint uVar46;
  undefined1 auVar44 [16];
  int local_e80 [4];
  undefined1 local_e70 [16];
  undefined1 local_e60 [16];
  undefined1 local_e50 [16];
  undefined1 local_e40 [16];
  undefined1 local_e30 [2992];
  undefined1 local_280 [4];
  int aiStack_27c [125];
  undefined8 local_88;
  long local_48;
  
  puVar23 = *(undefined8 **)(this + 0x20);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  lVar31 = **(long **)this;
  lVar24 = **(long **)(this + 8) - lVar31;
  uVar30 = lVar24 * param_1;
  uVar26 = **(ulong **)(this + 0x10);
  uVar22 = uVar30 / uVar26;
  pauVar33 = (undefined1 (*) [16])local_280;
  pauVar25 = (undefined1 (*) [16])local_e80;
  do {
    *(undefined4 *)pauVar25[4] = _LC4;
    *(undefined4 *)(pauVar25[4] + 4) = _LC4;
    *(undefined4 *)(pauVar25[4] + 8) = _LC4;
    *(undefined4 *)(pauVar25[4] + 0xc) = _LC4;
    pauVar28 = pauVar25 + 6;
    *(undefined4 *)pauVar25[5] = _LC2;
    *(undefined4 *)(pauVar25[5] + 4) = _LC2;
    *(undefined4 *)(pauVar25[5] + 8) = _LC2;
    *(undefined4 *)(pauVar25[5] + 0xc) = _LC2;
    *(undefined4 *)pauVar25[2] = _LC4;
    *(undefined4 *)(pauVar25[2] + 4) = _LC4;
    *(undefined4 *)(pauVar25[2] + 8) = _LC4;
    *(undefined4 *)(pauVar25[2] + 0xc) = _LC4;
    *(undefined4 *)pauVar25[3] = _LC2;
    *(undefined4 *)(pauVar25[3] + 4) = _LC2;
    *(undefined4 *)(pauVar25[3] + 8) = _LC2;
    *(undefined4 *)(pauVar25[3] + 0xc) = _LC2;
    *(undefined4 *)*pauVar25 = _LC4;
    *(undefined4 *)(*pauVar25 + 4) = _LC4;
    *(undefined4 *)(*pauVar25 + 8) = _LC4;
    *(undefined4 *)(*pauVar25 + 0xc) = _LC4;
    *(undefined4 *)pauVar25[1] = _LC2;
    *(undefined4 *)(pauVar25[1] + 4) = _LC2;
    *(undefined4 *)(pauVar25[1] + 8) = _LC2;
    *(undefined4 *)(pauVar25[1] + 0xc) = _LC2;
    *pauVar33 = (undefined1  [16])0x0;
    pauVar33 = pauVar33 + 1;
    pauVar25 = pauVar28;
  } while ((undefined1 (*) [16])local_280 != pauVar28);
  puVar32 = (undefined8 *)puVar23[1];
  pauVar33 = (undefined1 (*) [16])((lVar31 + uVar22) * 0x20 + *(long *)*puVar23);
  uVar22 = (lVar24 + uVar30) / uVar26 - uVar22;
  if (uVar22 != 0) {
    fVar2 = *(float *)(puVar32 + 2);
    fVar3 = *(float *)((long)puVar32 + 0x14);
    fVar4 = *(float *)(puVar32 + 3);
    fVar5 = *(float *)(puVar32 + 4);
    fVar6 = *(float *)((long)puVar32 + 0x24);
    fVar7 = *(float *)(puVar32 + 5);
    uVar27 = (int)*puVar32 - 1;
    if (uVar22 != 1) {
      pauVar25 = pauVar33;
      do {
        auVar39 = pauVar25[1];
        auVar41 = *pauVar25;
        auVar38 = pauVar25[2];
        uVar35 = (uint)(((auVar39._0_4_ + auVar41._0_4_) - fVar2) * fVar5 + _LC26);
        uVar36 = (uint)(((auVar39._4_4_ + auVar41._4_4_) - fVar3) * fVar6 + _LC26);
        uVar37 = (uint)(((auVar39._8_4_ + auVar41._8_4_) - fVar4) * fVar7 + _LC26);
        uVar40 = -(uint)((int)uVar35 < (int)uVar27);
        uVar42 = -(uint)((int)uVar36 < (int)uVar27);
        uVar43 = -(uint)((int)uVar37 < (int)uVar27);
        uVar35 = uVar35 & uVar40 | ~uVar40 & uVar27;
        uVar36 = uVar36 & uVar42 | ~uVar42 & uVar27;
        uVar40 = uVar37 & uVar43 | ~uVar43 & uVar27;
        auVar1 = pauVar25[3];
        uVar29 = (ulong)(~-(uint)((int)uVar35 < 0) & uVar35);
        uVar35 = (uint)(((auVar1._0_4_ + auVar38._0_4_) - fVar2) * fVar5 + _LC26);
        uVar37 = (uint)(((auVar1._4_4_ + auVar38._4_4_) - fVar3) * fVar6 + _LC26);
        uVar42 = (uint)(((auVar1._8_4_ + auVar38._8_4_) - fVar4) * fVar7 + _LC26);
        uVar43 = -(uint)((int)uVar35 < (int)uVar27);
        uVar45 = -(uint)((int)uVar37 < (int)uVar27);
        uVar46 = -(uint)((int)uVar42 < (int)uVar27);
        uVar35 = uVar43 & uVar35 | ~uVar43 & uVar27;
        uVar37 = uVar45 & uVar37 | ~uVar45 & uVar27;
        uVar42 = uVar46 & uVar42 | ~uVar46 & uVar27;
        auVar44 = minps(*(undefined1 (*) [16])(local_e80 + uVar29 * 0x18),auVar41);
        *(undefined1 (*) [16])(local_e80 + uVar29 * 0x18) = auVar44;
        auVar44 = maxps(*(undefined1 (*) [16])(local_e70 + uVar29 * 0x60),auVar39);
        *(undefined1 (*) [16])(local_e70 + uVar29 * 0x60) = auVar44;
        uVar26 = (ulong)(~-(uint)((int)uVar36 < 0) & uVar36);
        lVar31 = uVar26 * 0x60;
        auVar44 = minps(*(undefined1 (*) [16])(local_e60 + lVar31),auVar41);
        *(undefined1 (*) [16])(local_e60 + lVar31) = auVar44;
        auVar44 = maxps(*(undefined1 (*) [16])(local_e50 + lVar31),auVar39);
        *(undefined1 (*) [16])(local_e50 + lVar31) = auVar44;
        uVar30 = (ulong)(~-(uint)((int)uVar40 < 0) & uVar40);
        lVar31 = uVar30 * 0x60;
        auVar41 = minps(*(undefined1 (*) [16])(local_e40 + lVar31),auVar41);
        auVar39 = maxps(*(undefined1 (*) [16])(local_e30 + lVar31),auVar39);
        *(undefined1 (*) [16])(local_e40 + lVar31) = auVar41;
        *(undefined1 (*) [16])(local_e30 + lVar31) = auVar39;
        local_e80[(uVar29 + 0xc0) * 4] = local_e80[(uVar29 + 0xc0) * 4] + 1;
        uVar29 = (ulong)(~-(uint)((int)uVar35 < 0) & uVar35);
        aiStack_27c[uVar30 * 4 + 1] = aiStack_27c[uVar30 * 4 + 1] + 1;
        aiStack_27c[uVar26 * 4] = aiStack_27c[uVar26 * 4] + 1;
        auVar39 = minps(*(undefined1 (*) [16])(local_e80 + uVar29 * 0x18),auVar38);
        *(undefined1 (*) [16])(local_e80 + uVar29 * 0x18) = auVar39;
        auVar39 = maxps(*(undefined1 (*) [16])(local_e70 + uVar29 * 0x60),auVar1);
        *(undefined1 (*) [16])(local_e70 + uVar29 * 0x60) = auVar39;
        uVar26 = (ulong)(~-(uint)((int)uVar37 < 0) & uVar37);
        lVar31 = uVar26 * 0x60;
        auVar39 = minps(*(undefined1 (*) [16])(local_e60 + lVar31),auVar38);
        *(undefined1 (*) [16])(local_e60 + lVar31) = auVar39;
        auVar39 = maxps(*(undefined1 (*) [16])(local_e50 + lVar31),auVar1);
        *(undefined1 (*) [16])(local_e50 + lVar31) = auVar39;
        uVar30 = (ulong)(~-(uint)((int)uVar42 < 0) & uVar42);
        lVar31 = uVar30 * 0x60;
        auVar39 = minps(*(undefined1 (*) [16])(local_e40 + lVar31),auVar38);
        *(undefined1 (*) [16])(local_e40 + lVar31) = auVar39;
        auVar39 = maxps(*(undefined1 (*) [16])(local_e30 + lVar31),auVar1);
        *(undefined1 (*) [16])(local_e30 + lVar31) = auVar39;
        local_e80[(uVar29 + 0xc0) * 4] = local_e80[(uVar29 + 0xc0) * 4] + 1;
        aiStack_27c[uVar26 * 4] = aiStack_27c[uVar26 * 4] + 1;
        aiStack_27c[uVar30 * 4 + 1] = aiStack_27c[uVar30 * 4 + 1] + 1;
        bVar34 = pauVar25 != pauVar33 + (uVar22 - 2 >> 1) * 4;
        pauVar25 = pauVar25 + 4;
      } while (bVar34);
      uVar26 = (uVar22 - 2 & 0xfffffffffffffffe) + 2;
      if (uVar22 <= uVar26) goto LAB_00107881;
      pauVar33 = pauVar33 + uVar26 * 2;
    }
    auVar39 = pauVar33[1];
    auVar41 = *pauVar33;
    uVar35 = (uint)(((auVar39._0_4_ + auVar41._0_4_) - fVar2) * fVar5 + _LC26);
    uVar36 = (uint)(((auVar39._4_4_ + auVar41._4_4_) - fVar3) * fVar6 + _LC26);
    uVar37 = (uint)(((auVar39._8_4_ + auVar41._8_4_) - fVar4) * fVar7 + _LC26);
    uVar40 = -(uint)((int)uVar35 < (int)uVar27);
    uVar42 = -(uint)((int)uVar36 < (int)uVar27);
    uVar43 = -(uint)((int)uVar37 < (int)uVar27);
    uVar35 = uVar40 & uVar35 | ~uVar40 & uVar27;
    uVar36 = uVar42 & uVar36 | ~uVar42 & uVar27;
    uVar27 = uVar43 & uVar37 | ~uVar43 & uVar27;
    lVar31 = (long)(int)(~-(uint)((int)uVar35 < 0) & uVar35);
    local_e80[(lVar31 + 0xc0) * 4] = local_e80[(lVar31 + 0xc0) * 4] + 1;
    auVar38 = minps(*(undefined1 (*) [16])(local_e80 + lVar31 * 0x18),auVar41);
    *(undefined1 (*) [16])(local_e80 + lVar31 * 0x18) = auVar38;
    auVar38 = maxps(*(undefined1 (*) [16])(local_e70 + lVar31 * 0x60),auVar39);
    *(undefined1 (*) [16])(local_e70 + lVar31 * 0x60) = auVar38;
    lVar31 = (long)(int)(~-(uint)((int)uVar36 < 0) & uVar36);
    lVar24 = lVar31 * 0x60;
    aiStack_27c[lVar31 * 4] = aiStack_27c[lVar31 * 4] + 1;
    auVar38 = minps(*(undefined1 (*) [16])(local_e60 + lVar24),auVar41);
    *(undefined1 (*) [16])(local_e60 + lVar24) = auVar38;
    auVar38 = maxps(*(undefined1 (*) [16])(local_e50 + lVar24),auVar39);
    *(undefined1 (*) [16])(local_e50 + lVar24) = auVar38;
    lVar31 = (long)(int)(~-(uint)((int)uVar27 < 0) & uVar27);
    lVar24 = lVar31 * 0x60;
    aiStack_27c[lVar31 * 4 + 1] = aiStack_27c[lVar31 * 4 + 1] + 1;
    auVar41 = minps(*(undefined1 (*) [16])(local_e40 + lVar24),auVar41);
    *(undefined1 (*) [16])(local_e40 + lVar24) = auVar41;
    auVar39 = maxps(*(undefined1 (*) [16])(local_e30 + lVar24),auVar39);
    *(undefined1 (*) [16])(local_e30 + lVar24) = auVar39;
  }
LAB_00107881:
  puVar32 = (undefined8 *)(param_1 * 0xe00 + *(long *)(*(long *)(this + 0x18) + 0x1c00));
  puVar23 = puVar32;
  pauVar33 = (undefined1 (*) [16])local_e80;
  do {
    uVar16 = *(undefined8 *)(*pauVar33 + 8);
    uVar8 = *(undefined4 *)pauVar33[1];
    uVar9 = *(undefined4 *)(pauVar33[1] + 4);
    uVar10 = *(undefined4 *)(pauVar33[1] + 8);
    uVar11 = *(undefined4 *)(pauVar33[1] + 0xc);
    pauVar25 = pauVar33 + 6;
    uVar17 = *(undefined8 *)pauVar33[2];
    uVar18 = *(undefined8 *)(pauVar33[2] + 8);
    uVar19 = *(undefined8 *)pauVar33[3];
    uVar20 = *(undefined8 *)(pauVar33[3] + 8);
    *puVar23 = *(undefined8 *)*pauVar33;
    puVar23[1] = uVar16;
    uVar16 = *(undefined8 *)pauVar33[4];
    uVar21 = *(undefined8 *)(pauVar33[4] + 8);
    uVar12 = *(undefined4 *)pauVar33[5];
    uVar13 = *(undefined4 *)(pauVar33[5] + 4);
    uVar14 = *(undefined4 *)(pauVar33[5] + 8);
    uVar15 = *(undefined4 *)(pauVar33[5] + 0xc);
    *(undefined4 *)(puVar23 + 2) = uVar8;
    *(undefined4 *)((long)puVar23 + 0x14) = uVar9;
    *(undefined4 *)(puVar23 + 3) = uVar10;
    *(undefined4 *)((long)puVar23 + 0x1c) = uVar11;
    puVar23[4] = uVar17;
    puVar23[5] = uVar18;
    puVar23[6] = uVar19;
    puVar23[7] = uVar20;
    puVar23[8] = uVar16;
    puVar23[9] = uVar21;
    *(undefined4 *)(puVar23 + 10) = uVar12;
    *(undefined4 *)((long)puVar23 + 0x54) = uVar13;
    *(undefined4 *)(puVar23 + 0xb) = uVar14;
    *(undefined4 *)((long)puVar23 + 0x5c) = uVar15;
    puVar23 = puVar23 + 0xc;
    pauVar33 = pauVar25;
  } while (pauVar25 != (undefined1 (*) [16])local_280);
  puVar32[0x180] = *(undefined8 *)*pauVar25;
  puVar32[0x1bf] = local_88;
  lVar31 = (long)puVar32 + (0xc00 - (long)((ulong)(puVar32 + 0x181) & 0xfffffffffffffff8));
  puVar23 = (undefined8 *)((long)pauVar25 - lVar31);
  puVar32 = (undefined8 *)((ulong)(puVar32 + 0x181) & 0xfffffffffffffff8);
  for (uVar26 = (ulong)((int)lVar31 + 0x200U >> 3); uVar26 != 0; uVar26 = uVar26 - 1) {
    *puVar32 = *puVar23;
    puVar23 = puVar23 + 1;
    puVar32 = puVar32 + 1;
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__heap_select<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >
   >(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >) */

void std::
     __heap_select<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x60 < (long)param_2 - (long)param_1) {
    lVar7 = (((long)param_2 - (long)param_1 >> 5) * -0x5555555555555555 + -2) / 2;
    while (__adjust_heap<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                     (), lVar7 != 0) {
      lVar7 = lVar7 + -1;
    }
  }
  if (param_2 < param_3) {
    do {
      while ((ulong)(param_1[0xb] - param_1[10]) < (ulong)(param_2[0xb] - param_2[10])) {
        puVar6 = param_2 + 0xc;
        *param_2 = *param_1;
        *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
        uVar5 = param_1[3];
        param_2[2] = param_1[2];
        param_2[3] = uVar5;
        uVar2 = *(undefined4 *)((long)param_1 + 0x24);
        uVar3 = *(undefined4 *)(param_1 + 5);
        uVar4 = *(undefined4 *)((long)param_1 + 0x2c);
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)((long)param_2 + 0x24) = uVar2;
        *(undefined4 *)(param_2 + 5) = uVar3;
        *(undefined4 *)((long)param_2 + 0x2c) = uVar4;
        uVar2 = *(undefined4 *)((long)param_1 + 0x34);
        uVar3 = *(undefined4 *)(param_1 + 7);
        uVar4 = *(undefined4 *)((long)param_1 + 0x3c);
        *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)((long)param_2 + 0x34) = uVar2;
        *(undefined4 *)(param_2 + 7) = uVar3;
        *(undefined4 *)((long)param_2 + 0x3c) = uVar4;
        uVar2 = *(undefined4 *)((long)param_1 + 0x44);
        uVar3 = *(undefined4 *)(param_1 + 9);
        uVar4 = *(undefined4 *)((long)param_1 + 0x4c);
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((long)param_2 + 0x44) = uVar2;
        *(undefined4 *)(param_2 + 9) = uVar3;
        *(undefined4 *)((long)param_2 + 0x4c) = uVar4;
        uVar5 = param_1[0xb];
        param_2[10] = param_1[10];
        param_2[0xb] = uVar5;
        __adjust_heap<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  ();
        param_2 = puVar6;
        if (param_3 <= puVar6) goto LAB_00107c00;
      }
      param_2 = param_2 + 0xc;
    } while (param_2 < param_3);
  }
LAB_00107c00:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >
   >(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*,
   embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > > >) */

void std::
     __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
               (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar23 = (long)param_2 - (long)param_1;
  if (0x600 < lVar23) {
    puVar28 = param_1 + 0xc;
    puVar31 = param_2;
    if (param_3 != 0) {
      do {
        uVar4 = *param_1;
        param_3 = param_3 + -1;
        uVar24 = (lVar23 >> 5) * -0x5555555555555555;
        uVar3 = *(undefined1 *)(param_1 + 1);
        uVar27 = param_1[0x17] - param_1[0x16];
        uVar6 = *(undefined4 *)(param_1 + 2);
        uVar7 = *(undefined4 *)((long)param_1 + 0x14);
        uVar8 = *(undefined4 *)(param_1 + 3);
        uVar9 = *(undefined4 *)((long)param_1 + 0x1c);
        uVar10 = *(undefined4 *)(param_1 + 4);
        uVar11 = *(undefined4 *)((long)param_1 + 0x24);
        uVar12 = *(undefined4 *)(param_1 + 5);
        uVar13 = *(undefined4 *)((long)param_1 + 0x2c);
        uVar14 = *(undefined4 *)(param_1 + 6);
        uVar15 = *(undefined4 *)((long)param_1 + 0x34);
        uVar16 = *(undefined4 *)(param_1 + 7);
        uVar17 = *(undefined4 *)((long)param_1 + 0x3c);
        lVar23 = param_1[10];
        lVar5 = param_1[0xb];
        uVar18 = *(undefined4 *)(param_1 + 8);
        uVar19 = *(undefined4 *)((long)param_1 + 0x44);
        uVar20 = *(undefined4 *)(param_1 + 9);
        uVar21 = *(undefined4 *)((long)param_1 + 0x4c);
        uVar32 = puVar31[-1] - puVar31[-2];
        puVar26 = param_1 + ((uVar24 & 0xfffffffffffffffe) + ((long)uVar24 >> 1)) * 4;
        uVar24 = puVar26[0xb] - puVar26[10];
        puVar25 = puVar31;
        param_2 = puVar28;
        if (uVar24 < uVar27) {
          if (uVar32 < uVar24) {
            *param_1 = *puVar26;
            *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar26 + 1);
            uVar22 = puVar26[3];
            param_1[2] = puVar26[2];
            param_1[3] = uVar22;
            uVar22 = puVar26[5];
            param_1[4] = puVar26[4];
            param_1[5] = uVar22;
            uVar22 = puVar26[7];
            param_1[6] = puVar26[6];
            param_1[7] = uVar22;
            uVar22 = puVar26[9];
            param_1[8] = puVar26[8];
            param_1[9] = uVar22;
            uVar22 = puVar26[0xb];
            param_1[10] = puVar26[10];
            param_1[0xb] = uVar22;
LAB_00107d32:
            *puVar26 = uVar4;
            *(undefined1 *)(puVar26 + 1) = uVar3;
            puVar26[10] = lVar23;
            puVar26[0xb] = lVar5;
            *(undefined4 *)(puVar26 + 2) = uVar6;
            *(undefined4 *)((long)puVar26 + 0x14) = uVar7;
            *(undefined4 *)(puVar26 + 3) = uVar8;
            *(undefined4 *)((long)puVar26 + 0x1c) = uVar9;
            *(undefined4 *)(puVar26 + 4) = uVar10;
            *(undefined4 *)((long)puVar26 + 0x24) = uVar11;
            *(undefined4 *)(puVar26 + 5) = uVar12;
            *(undefined4 *)((long)puVar26 + 0x2c) = uVar13;
            *(undefined4 *)(puVar26 + 6) = uVar14;
            *(undefined4 *)((long)puVar26 + 0x34) = uVar15;
            *(undefined4 *)(puVar26 + 7) = uVar16;
            *(undefined4 *)((long)puVar26 + 0x3c) = uVar17;
            *(undefined4 *)(puVar26 + 8) = uVar18;
            *(undefined4 *)((long)puVar26 + 0x44) = uVar19;
            *(undefined4 *)(puVar26 + 9) = uVar20;
            *(undefined4 *)((long)puVar26 + 0x4c) = uVar21;
            lVar29 = param_1[0x16];
            lVar30 = param_1[0x17];
            lVar33 = puVar31[-1];
            lVar34 = puVar31[-2];
          }
          else {
            if (uVar27 <= uVar32) {
              *param_1 = param_1[0xc];
              param_1[2] = param_1[0xe];
              param_1[3] = param_1[0xf];
              param_1[4] = param_1[0x10];
              param_1[5] = param_1[0x11];
              *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_1 + 0xd);
              param_1[6] = param_1[0x12];
              param_1[7] = param_1[0x13];
              param_1[8] = param_1[0x14];
              param_1[9] = param_1[0x15];
              param_1[10] = param_1[0x16];
              param_1[0xb] = param_1[0x17];
              goto LAB_00107eea;
            }
            *param_1 = puVar31[-0xc];
            *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar31 + -0xb);
            uVar22 = puVar31[-9];
            param_1[2] = puVar31[-10];
            param_1[3] = uVar22;
            uVar22 = puVar31[-7];
            param_1[4] = puVar31[-8];
            param_1[5] = uVar22;
            uVar22 = puVar31[-5];
            param_1[6] = puVar31[-6];
            param_1[7] = uVar22;
            uVar22 = puVar31[-3];
            param_1[8] = puVar31[-4];
            param_1[9] = uVar22;
            uVar22 = puVar31[-1];
            param_1[10] = puVar31[-2];
            param_1[0xb] = uVar22;
LAB_001080bd:
            *(undefined1 *)(puVar31 + -0xb) = uVar3;
            puVar31[-0xc] = uVar4;
            puVar31[-2] = lVar23;
            puVar31[-1] = lVar5;
            *(undefined4 *)(puVar31 + -10) = uVar6;
            *(undefined4 *)((long)puVar31 + -0x4c) = uVar7;
            *(undefined4 *)(puVar31 + -9) = uVar8;
            *(undefined4 *)((long)puVar31 + -0x44) = uVar9;
            *(undefined4 *)(puVar31 + -8) = uVar10;
            *(undefined4 *)((long)puVar31 + -0x3c) = uVar11;
            *(undefined4 *)(puVar31 + -7) = uVar12;
            *(undefined4 *)((long)puVar31 + -0x34) = uVar13;
            *(undefined4 *)(puVar31 + -6) = uVar14;
            *(undefined4 *)((long)puVar31 + -0x2c) = uVar15;
            *(undefined4 *)(puVar31 + -5) = uVar16;
            *(undefined4 *)((long)puVar31 + -0x24) = uVar17;
            *(undefined4 *)(puVar31 + -4) = uVar18;
            *(undefined4 *)((long)puVar31 + -0x1c) = uVar19;
            *(undefined4 *)(puVar31 + -3) = uVar20;
            *(undefined4 *)((long)puVar31 + -0x14) = uVar21;
            lVar29 = param_1[0x16];
            lVar30 = param_1[0x17];
            lVar33 = lVar5;
            lVar34 = lVar23;
          }
        }
        else {
          if (uVar27 <= uVar32) {
            if (uVar32 < uVar24) {
              *param_1 = puVar31[-0xc];
              *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar31 + -0xb);
              uVar22 = puVar31[-9];
              param_1[2] = puVar31[-10];
              param_1[3] = uVar22;
              uVar22 = puVar31[-7];
              param_1[4] = puVar31[-8];
              param_1[5] = uVar22;
              uVar22 = puVar31[-5];
              param_1[6] = puVar31[-6];
              param_1[7] = uVar22;
              uVar22 = puVar31[-3];
              param_1[8] = puVar31[-4];
              param_1[9] = uVar22;
              uVar22 = puVar31[-1];
              param_1[10] = puVar31[-2];
              param_1[0xb] = uVar22;
              goto LAB_001080bd;
            }
            *param_1 = *puVar26;
            *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar26 + 1);
            uVar22 = puVar26[3];
            param_1[2] = puVar26[2];
            param_1[3] = uVar22;
            uVar22 = puVar26[5];
            param_1[4] = puVar26[4];
            param_1[5] = uVar22;
            uVar22 = puVar26[7];
            param_1[6] = puVar26[6];
            param_1[7] = uVar22;
            uVar22 = puVar26[9];
            param_1[8] = puVar26[8];
            param_1[9] = uVar22;
            uVar22 = puVar26[0xb];
            param_1[10] = puVar26[10];
            param_1[0xb] = uVar22;
            goto LAB_00107d32;
          }
          *param_1 = param_1[0xc];
          param_1[2] = param_1[0xe];
          param_1[3] = param_1[0xf];
          param_1[4] = param_1[0x10];
          param_1[5] = param_1[0x11];
          *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_1 + 0xd);
          param_1[6] = param_1[0x12];
          param_1[7] = param_1[0x13];
          param_1[8] = param_1[0x14];
          param_1[9] = param_1[0x15];
          param_1[10] = param_1[0x16];
          param_1[0xb] = param_1[0x17];
LAB_00107eea:
          param_1[0xc] = uVar4;
          *(undefined1 *)(param_1 + 0xd) = uVar3;
          param_1[0x16] = lVar23;
          param_1[0x17] = lVar5;
          *(undefined4 *)(param_1 + 0xe) = uVar6;
          *(undefined4 *)((long)param_1 + 0x74) = uVar7;
          *(undefined4 *)(param_1 + 0xf) = uVar8;
          *(undefined4 *)((long)param_1 + 0x7c) = uVar9;
          *(undefined4 *)(param_1 + 0x10) = uVar10;
          *(undefined4 *)((long)param_1 + 0x84) = uVar11;
          *(undefined4 *)(param_1 + 0x11) = uVar12;
          *(undefined4 *)((long)param_1 + 0x8c) = uVar13;
          *(undefined4 *)(param_1 + 0x12) = uVar14;
          *(undefined4 *)((long)param_1 + 0x94) = uVar15;
          *(undefined4 *)(param_1 + 0x13) = uVar16;
          *(undefined4 *)((long)param_1 + 0x9c) = uVar17;
          *(undefined4 *)(param_1 + 0x14) = uVar18;
          *(undefined4 *)((long)param_1 + 0xa4) = uVar19;
          *(undefined4 *)(param_1 + 0x15) = uVar20;
          *(undefined4 *)((long)param_1 + 0xac) = uVar21;
          lVar33 = puVar31[-1];
          lVar34 = puVar31[-2];
          lVar29 = lVar23;
          lVar30 = lVar5;
        }
        while( true ) {
          uVar24 = lVar30 - lVar29;
          while ((ulong)(param_1[0xb] - param_1[10]) < uVar24) {
            lVar30 = param_2[0x17];
            lVar29 = param_2[0x16];
            param_2 = param_2 + 0xc;
            uVar24 = lVar30 - lVar29;
          }
          uVar24 = lVar33 - lVar34;
          puVar26 = puVar25;
          while (puVar25 = puVar26 + -0xc, uVar24 < (ulong)(param_1[0xb] - param_1[10])) {
            uVar24 = puVar26[-0xd] - puVar26[-0xe];
            puVar26 = puVar25;
          }
          if (puVar25 <= param_2) break;
          uVar4 = *param_2;
          uVar3 = *(undefined1 *)(param_2 + 1);
          uVar6 = *(undefined4 *)(param_2 + 2);
          uVar7 = *(undefined4 *)((long)param_2 + 0x14);
          uVar8 = *(undefined4 *)(param_2 + 3);
          uVar9 = *(undefined4 *)((long)param_2 + 0x1c);
          uVar10 = *(undefined4 *)(param_2 + 4);
          uVar11 = *(undefined4 *)((long)param_2 + 0x24);
          uVar12 = *(undefined4 *)(param_2 + 5);
          uVar13 = *(undefined4 *)((long)param_2 + 0x2c);
          uVar14 = *(undefined4 *)(param_2 + 6);
          uVar15 = *(undefined4 *)((long)param_2 + 0x34);
          uVar16 = *(undefined4 *)(param_2 + 7);
          uVar17 = *(undefined4 *)((long)param_2 + 0x3c);
          *param_2 = *puVar25;
          uVar18 = *(undefined4 *)(param_2 + 8);
          uVar19 = *(undefined4 *)((long)param_2 + 0x44);
          uVar20 = *(undefined4 *)(param_2 + 9);
          uVar21 = *(undefined4 *)((long)param_2 + 0x4c);
          *(undefined1 *)(param_2 + 1) = *(undefined1 *)(puVar26 + -0xb);
          uVar22 = puVar26[-9];
          param_2[2] = puVar26[-10];
          param_2[3] = uVar22;
          uVar22 = puVar26[-7];
          param_2[4] = puVar26[-8];
          param_2[5] = uVar22;
          uVar22 = puVar26[-5];
          param_2[6] = puVar26[-6];
          param_2[7] = uVar22;
          uVar22 = puVar26[-3];
          param_2[8] = puVar26[-4];
          param_2[9] = uVar22;
          uVar22 = puVar26[-1];
          param_2[10] = puVar26[-2];
          param_2[0xb] = uVar22;
          *puVar25 = uVar4;
          *(undefined1 *)(puVar26 + -0xb) = uVar3;
          puVar26[-2] = lVar29;
          puVar26[-1] = lVar30;
          *(undefined4 *)(puVar26 + -10) = uVar6;
          *(undefined4 *)((long)puVar26 + -0x4c) = uVar7;
          *(undefined4 *)(puVar26 + -9) = uVar8;
          *(undefined4 *)((long)puVar26 + -0x44) = uVar9;
          *(undefined4 *)(puVar26 + -8) = uVar10;
          *(undefined4 *)((long)puVar26 + -0x3c) = uVar11;
          *(undefined4 *)(puVar26 + -7) = uVar12;
          *(undefined4 *)((long)puVar26 + -0x34) = uVar13;
          *(undefined4 *)(puVar26 + -6) = uVar14;
          *(undefined4 *)((long)puVar26 + -0x2c) = uVar15;
          *(undefined4 *)(puVar26 + -5) = uVar16;
          *(undefined4 *)((long)puVar26 + -0x24) = uVar17;
          *(undefined4 *)(puVar26 + -4) = uVar18;
          *(undefined4 *)((long)puVar26 + -0x1c) = uVar19;
          *(undefined4 *)(puVar26 + -3) = uVar20;
          *(undefined4 *)((long)puVar26 + -0x14) = uVar21;
          plVar1 = param_2 + 0x17;
          plVar2 = param_2 + 0x16;
          param_2 = param_2 + 0xc;
          lVar29 = *plVar2;
          lVar30 = *plVar1;
          lVar33 = puVar26[-0xd];
          lVar34 = puVar26[-0xe];
        }
        __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (param_2,puVar31,param_3);
        lVar23 = (long)param_2 - (long)param_1;
        if (lVar23 < 0x601) goto LAB_00108000;
        puVar31 = param_2;
      } while (param_3 != 0);
    }
    __heap_select<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
              (param_1,param_2,param_2);
    do {
      local_98 = param_2[-0xc];
      puVar28 = param_2 + -0xc;
      local_90 = *(undefined1 *)(param_2 + -0xb);
      local_88 = *(undefined4 *)(param_2 + -10);
      uStack_84 = *(undefined4 *)((long)param_2 + -0x4c);
      uStack_80 = *(undefined4 *)(param_2 + -9);
      uStack_7c = *(undefined4 *)((long)param_2 + -0x44);
      local_48 = param_2[-2];
      local_78 = *(undefined4 *)(param_2 + -8);
      uStack_74 = *(undefined4 *)((long)param_2 + -0x3c);
      uStack_70 = *(undefined4 *)(param_2 + -7);
      uStack_6c = *(undefined4 *)((long)param_2 + -0x34);
      *puVar28 = *param_1;
      local_68 = *(undefined4 *)(param_2 + -6);
      uStack_64 = *(undefined4 *)((long)param_2 + -0x2c);
      uStack_60 = *(undefined4 *)(param_2 + -5);
      uStack_5c = *(undefined4 *)((long)param_2 + -0x24);
      local_58 = *(undefined4 *)(param_2 + -4);
      uStack_54 = *(undefined4 *)((long)param_2 + -0x1c);
      uStack_50 = *(undefined4 *)(param_2 + -3);
      uStack_4c = *(undefined4 *)((long)param_2 + -0x14);
      local_40 = param_2[-1];
      *(undefined1 *)(param_2 + -0xb) = *(undefined1 *)(param_1 + 1);
      uVar4 = param_1[3];
      param_2[-10] = param_1[2];
      param_2[-9] = uVar4;
      uVar4 = param_1[5];
      param_2[-8] = param_1[4];
      param_2[-7] = uVar4;
      uVar4 = param_1[7];
      param_2[-6] = param_1[6];
      param_2[-5] = uVar4;
      uVar4 = param_1[9];
      param_2[-4] = param_1[8];
      param_2[-3] = uVar4;
      uVar4 = param_1[0xb];
      param_2[-2] = param_1[10];
      param_2[-1] = uVar4;
      __adjust_heap<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (param_1,0,((long)puVar28 - (long)param_1 >> 5) * -0x5555555555555555,&local_98);
      param_2 = puVar28;
    } while (0x60 < (long)puVar28 - (long)param_1);
  }
LAB_00108000:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00108585) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Set3, embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Set3, embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Set3, embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Set3, embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSpli___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  long lVar15;
  Thread *pTVar16;
  Thread *pTVar17;
  Thread *pTVar18;
  long lVar19;
  Thread *pTVar20;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar15 = embree::TaskScheduler::allocThreadIndex();
  pTVar16 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar16 = lVar15;
  pTVar20 = pTVar16 + 0x40;
  pTVar18 = pTVar20;
  do {
    *(undefined4 *)pTVar18 = 0;
    pTVar17 = pTVar18 + 0x80;
    *(undefined4 *)(pTVar18 + 0x40) = 0;
    pTVar18 = pTVar17;
  } while (pTVar16 + 0x40040 != pTVar17);
  *(undefined8 *)(pTVar16 + 0x40040) = 0;
  *(undefined8 *)(pTVar16 + 0x40080) = 0;
  *(undefined8 *)(pTVar16 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar16 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar16 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar15 * 8) = pTVar16;
  UNLOCK();
  local_48 = pTVar16;
  pTVar18 = (Thread *)embree::TaskScheduler::swapThread(pTVar16);
  if (*(ulong *)(pTVar16 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar16 + 0xc00c0);
    uVar3 = lVar4 + 0x40 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar16 + 0xc00c0) = uVar3;
      pTVar17 = pTVar16 + uVar3 + 0x40080;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar17 = &PTR_execute_001170d8;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(pTVar17 + 8) = uVar8;
      *(undefined8 *)(pTVar17 + 0x10) = uVar9;
      *(undefined8 *)(pTVar17 + 0x18) = uVar10;
      *(undefined8 *)(pTVar17 + 0x20) = uVar11;
      *(undefined8 *)(pTVar17 + 0x38) = uVar5;
      *(undefined8 *)(pTVar17 + 0x28) = uVar12;
      *(undefined8 *)(pTVar17 + 0x30) = uVar13;
      lVar19 = *(long *)(pTVar16 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar16 + 0xc0100);
      pTVar16[lVar19 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar16 + lVar19 + 0x44) = 1;
      *(Thread **)(pTVar16 + lVar19 + 0x50) = pTVar17;
      *(long *)(pTVar16 + lVar19 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar16 + lVar19 + 0x60) = param_2;
      *(long *)(pTVar16 + lVar19 + 0x68) = lVar4;
      *(ulong *)(pTVar16 + lVar19 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar20 + lVar19) == 0) {
        *(undefined4 *)(pTVar20 + lVar19) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar16 + 0x40080) = *(long *)(pTVar16 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar16 + 0x40080) - 1U <= *(ulong *)(pTVar16 + 0x40040)) {
        LOCK();
        *(long *)(pTVar16 + 0x40040) = *(long *)(pTVar16 + 0x40080) + -1;
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
            pTVar17 = local_48 + 8;
            *(long *)pTVar17 = *(long *)pTVar17 + -1;
            UNLOCK();
            if (*(long *)pTVar17 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar14 = embree::TaskScheduler::TaskQueue::execute_local(pTVar20,(Task *)pTVar16);
      } while (cVar14 != '\0');
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
      *(undefined8 *)(lVar15 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar18);
      pTVar20 = *(Thread **)param_2;
      if (pTVar20 != (Thread *)0x0) {
        local_48 = pTVar20;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar20 = local_48;
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
      if (pTVar20 == (Thread *)0x0) {
        if (pTVar16 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar16 + 0xc0108);
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
            embree::alignedFree(pTVar16);
            return;
          }
        }
      }
      else {
        local_48 = pTVar20;
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



/* WARNING: Removing unreachable block (ram,0x00108ad5) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Create2,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Create2,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Create2,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Create2,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::Defau___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  long lVar15;
  Thread *pTVar16;
  Thread *pTVar17;
  Thread *pTVar18;
  long lVar19;
  Thread *pTVar20;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar15 = embree::TaskScheduler::allocThreadIndex();
  pTVar16 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar16 = lVar15;
  pTVar20 = pTVar16 + 0x40;
  pTVar18 = pTVar20;
  do {
    *(undefined4 *)pTVar18 = 0;
    pTVar17 = pTVar18 + 0x80;
    *(undefined4 *)(pTVar18 + 0x40) = 0;
    pTVar18 = pTVar17;
  } while (pTVar16 + 0x40040 != pTVar17);
  *(undefined8 *)(pTVar16 + 0x40040) = 0;
  *(undefined8 *)(pTVar16 + 0x40080) = 0;
  *(undefined8 *)(pTVar16 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar16 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar16 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar15 * 8) = pTVar16;
  UNLOCK();
  local_48 = pTVar16;
  pTVar18 = (Thread *)embree::TaskScheduler::swapThread(pTVar16);
  if (*(ulong *)(pTVar16 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar16 + 0xc00c0);
    uVar3 = lVar4 + 0x40 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar16 + 0xc00c0) = uVar3;
      pTVar17 = pTVar16 + uVar3 + 0x40080;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar17 = &PTR_execute_001170f0;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(pTVar17 + 8) = uVar8;
      *(undefined8 *)(pTVar17 + 0x10) = uVar9;
      *(undefined8 *)(pTVar17 + 0x18) = uVar10;
      *(undefined8 *)(pTVar17 + 0x20) = uVar11;
      *(undefined8 *)(pTVar17 + 0x38) = uVar5;
      *(undefined8 *)(pTVar17 + 0x28) = uVar12;
      *(undefined8 *)(pTVar17 + 0x30) = uVar13;
      lVar19 = *(long *)(pTVar16 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar16 + 0xc0100);
      pTVar16[lVar19 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar16 + lVar19 + 0x44) = 1;
      *(Thread **)(pTVar16 + lVar19 + 0x50) = pTVar17;
      *(long *)(pTVar16 + lVar19 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar16 + lVar19 + 0x60) = param_2;
      *(long *)(pTVar16 + lVar19 + 0x68) = lVar4;
      *(ulong *)(pTVar16 + lVar19 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar20 + lVar19) == 0) {
        *(undefined4 *)(pTVar20 + lVar19) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar16 + 0x40080) = *(long *)(pTVar16 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar16 + 0x40080) - 1U <= *(ulong *)(pTVar16 + 0x40040)) {
        LOCK();
        *(long *)(pTVar16 + 0x40040) = *(long *)(pTVar16 + 0x40080) + -1;
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
            pTVar17 = local_48 + 8;
            *(long *)pTVar17 = *(long *)pTVar17 + -1;
            UNLOCK();
            if (*(long *)pTVar17 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar14 = embree::TaskScheduler::TaskQueue::execute_local(pTVar20,(Task *)pTVar16);
      } while (cVar14 != '\0');
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
      *(undefined8 *)(lVar15 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar18);
      pTVar20 = *(Thread **)param_2;
      if (pTVar20 != (Thread *)0x0) {
        local_48 = pTVar20;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar20 = local_48;
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
      if (pTVar20 == (Thread *)0x0) {
        if (pTVar16 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar16 + 0xc0108);
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
            embree::alignedFree(pTVar16);
            return;
          }
        }
      }
      else {
        local_48 = pTVar20;
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



/* WARNING: Removing unreachable block (ram,0x00109025) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimI___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  long lVar15;
  Thread *pTVar16;
  Thread *pTVar17;
  Thread *pTVar18;
  long lVar19;
  Thread *pTVar20;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar15 = embree::TaskScheduler::allocThreadIndex();
  pTVar16 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar16 = lVar15;
  pTVar20 = pTVar16 + 0x40;
  pTVar18 = pTVar20;
  do {
    *(undefined4 *)pTVar18 = 0;
    pTVar17 = pTVar18 + 0x80;
    *(undefined4 *)(pTVar18 + 0x40) = 0;
    pTVar18 = pTVar17;
  } while (pTVar16 + 0x40040 != pTVar17);
  *(undefined8 *)(pTVar16 + 0x40040) = 0;
  *(undefined8 *)(pTVar16 + 0x40080) = 0;
  *(undefined8 *)(pTVar16 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar16 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar16 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar15 * 8) = pTVar16;
  UNLOCK();
  local_48 = pTVar16;
  pTVar18 = (Thread *)embree::TaskScheduler::swapThread(pTVar16);
  if (*(ulong *)(pTVar16 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar16 + 0xc00c0);
    uVar3 = lVar4 + 0x40 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar16 + 0xc00c0) = uVar3;
      pTVar17 = pTVar16 + uVar3 + 0x40080;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar17 = &PTR_execute_00117108;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(pTVar17 + 8) = uVar8;
      *(undefined8 *)(pTVar17 + 0x10) = uVar9;
      *(undefined8 *)(pTVar17 + 0x18) = uVar10;
      *(undefined8 *)(pTVar17 + 0x20) = uVar11;
      *(undefined8 *)(pTVar17 + 0x38) = uVar5;
      *(undefined8 *)(pTVar17 + 0x28) = uVar12;
      *(undefined8 *)(pTVar17 + 0x30) = uVar13;
      lVar19 = *(long *)(pTVar16 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar16 + 0xc0100);
      pTVar16[lVar19 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar16 + lVar19 + 0x44) = 1;
      *(Thread **)(pTVar16 + lVar19 + 0x50) = pTVar17;
      *(long *)(pTVar16 + lVar19 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar16 + lVar19 + 0x60) = param_2;
      *(long *)(pTVar16 + lVar19 + 0x68) = lVar4;
      *(ulong *)(pTVar16 + lVar19 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar20 + lVar19) == 0) {
        *(undefined4 *)(pTVar20 + lVar19) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar16 + 0x40080) = *(long *)(pTVar16 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar16 + 0x40080) - 1U <= *(ulong *)(pTVar16 + 0x40040)) {
        LOCK();
        *(long *)(pTVar16 + 0x40040) = *(long *)(pTVar16 + 0x40080) + -1;
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
            pTVar17 = local_48 + 8;
            *(long *)pTVar17 = *(long *)pTVar17 + -1;
            UNLOCK();
            if (*(long *)pTVar17 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar14 = embree::TaskScheduler::TaskQueue::execute_local(pTVar20,(Task *)pTVar16);
      } while (cVar14 != '\0');
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
      *(undefined8 *)(lVar15 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar18);
      pTVar20 = *(Thread **)param_2;
      if (pTVar20 != (Thread *)0x0) {
        local_48 = pTVar20;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar20 = local_48;
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
      if (pTVar20 == (Thread *)0x0) {
        if (pTVar16 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar16 + 0xc0108);
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
            embree::alignedFree(pTVar16);
            return;
          }
        }
      }
      else {
        local_48 = pTVar20;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__heap_select<embree::PrimRef*, __gnu_cxx::__ops::_Iter_less_iter>(embree::PrimRef*,
   embree::PrimRef*, embree::PrimRef*, __gnu_cxx::__ops::_Iter_less_iter) */

void std::__heap_select<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
               (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x20 < (long)param_2 - (long)param_1) {
    for (lVar5 = (((long)param_2 - (long)param_1 >> 5) + -2) / 2;
        __adjust_heap<embree::PrimRef*,long,embree::PrimRef,__gnu_cxx::__ops::_Iter_less_iter>(),
        lVar5 != 0; lVar5 = lVar5 + -1) {
    }
  }
  if (param_2 < param_3) {
    do {
      while (CONCAT44(param_1[7],param_1[3]) <= CONCAT44(param_2[7],param_2[3])) {
        param_2 = param_2 + 8;
        if (param_3 <= param_2) goto LAB_001092ae;
      }
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      puVar6 = param_2 + 8;
      *param_2 = *param_1;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      uVar2 = param_1[5];
      uVar3 = param_1[6];
      uVar4 = param_1[7];
      param_2[4] = param_1[4];
      param_2[5] = uVar2;
      param_2[6] = uVar3;
      param_2[7] = uVar4;
      __adjust_heap<embree::PrimRef*,long,embree::PrimRef,__gnu_cxx::__ops::_Iter_less_iter>();
      param_2 = puVar6;
    } while (puVar6 < param_3);
  }
LAB_001092ae:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001096b5) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  Thread *pTVar14;
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
  lVar13 = embree::TaskScheduler::allocThreadIndex();
  pTVar14 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar14 = lVar13;
  pTVar18 = pTVar14 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar15 = pTVar16 + 0x80;
    *(undefined4 *)(pTVar16 + 0x40) = 0;
    pTVar16 = pTVar15;
  } while (pTVar14 + 0x40040 != pTVar15);
  *(undefined8 *)(pTVar14 + 0x40040) = 0;
  *(undefined8 *)(pTVar14 + 0x40080) = 0;
  *(undefined8 *)(pTVar14 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar14 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar14 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar13 * 8) = pTVar14;
  UNLOCK();
  local_48 = pTVar14;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar14);
  if (*(ulong *)(pTVar14 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar14 + 0xc00c0);
    uVar3 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar14 + 0xc00c0) = uVar3;
      pTVar15 = pTVar14 + uVar3 + 0x40090;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar15 = &PTR_execute_00117120;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar15 + 8) = uVar8;
      *(undefined8 *)(pTVar15 + 0x10) = uVar9;
      *(undefined8 *)(pTVar15 + 0x28) = uVar5;
      *(undefined8 *)(pTVar15 + 0x18) = uVar10;
      *(undefined8 *)(pTVar15 + 0x20) = uVar11;
      lVar17 = *(long *)(pTVar14 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar14 + 0xc0100);
      pTVar14[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar14 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar14 + lVar17 + 0x50) = pTVar15;
      *(long *)(pTVar14 + lVar17 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar14 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar14 + lVar17 + 0x68) = lVar4;
      *(ulong *)(pTVar14 + lVar17 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar14 + 0x40080) = *(long *)(pTVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar14 + 0x40080) - 1U <= *(ulong *)(pTVar14 + 0x40040)) {
        LOCK();
        *(long *)(pTVar14 + 0x40040) = *(long *)(pTVar14 + 0x40080) + -1;
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
      do {
        cVar12 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar14);
      } while (cVar12 != '\0');
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
      *(undefined8 *)(lVar13 * 8 + *(long *)(this + 0x10)) = 0;
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
        if (pTVar14 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar14 + 0xc0108);
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
            embree::alignedFree(pTVar14);
            return;
          }
        }
      }
      else {
        local_48 = pTVar18;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef_const&)#1},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)#3},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::B...mbree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::B___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  TaskGroupContext *pTVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  TaskScheduler *pTVar25;
  undefined1 (*pauVar26) [16];
  int iVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  long local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  TaskGroupContext *local_68;
  ulong local_58;
  long lStack_50;
  ulong local_48;
  long *plStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  lVar21 = *(long *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar7 = *(long **)(this + 0x20);
  if (*(ulong *)(this + 0x18) < (ulong)(*(long *)(this + 8) - lVar21)) {
    pTVar8 = *(TaskGroupContext **)(this + 0x28);
    uVar28 = (ulong)(*(long *)(this + 8) + lVar21) >> 1;
    local_58 = uVar28;
    lStack_50 = lVar21;
    local_48 = *(ulong *)(this + 0x18);
    plStack_40 = plVar7;
    local_38 = pTVar8;
    lVar18 = embree::TaskScheduler::thread();
    if (lVar18 == 0) {
      pTVar25 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar25,(_lambda___1_ *)&local_58,pTVar8,uVar28 - lVar21,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar18 + 0x40080)) goto LAB_00109df9;
      lVar9 = *(long *)(lVar18 + 0xc00c0);
      uVar20 = lVar9 + 0x30 + (ulong)(-(int)lVar9 & 0x3f);
      if (0x80000 < uVar20) goto LAB_00109df9;
      *(ulong *)(lVar18 + 0xc00c0) = uVar20;
      puVar2 = (undefined8 *)(lVar18 + 0x40090 + uVar20);
      *puVar2 = &PTR_execute_00117120;
      puVar2[1] = local_58;
      puVar2[2] = lStack_50;
      puVar2[5] = local_38;
      puVar2[3] = local_48;
      puVar2[4] = plStack_40;
      lVar19 = *(long *)(lVar18 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar18 + 0x40 + lVar19);
      lVar22 = *(long *)(lVar18 + 0xc0100);
      *(undefined4 *)(lVar18 + 0x44 + lVar19) = 1;
      *(undefined1 *)(lVar18 + 0x48 + lVar19) = 1;
      lVar19 = lVar19 + lVar18;
      *(undefined8 **)(lVar19 + 0x50) = puVar2;
      *(long *)(lVar19 + 0x58) = lVar22;
      *(TaskGroupContext **)(lVar19 + 0x60) = pTVar8;
      *(long *)(lVar19 + 0x68) = lVar9;
      *(ulong *)(lVar19 + 0x70) = uVar28 - lVar21;
      if (lVar22 != 0) {
        LOCK();
        *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar18 + 0x40080) = *(long *)(lVar18 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar18 + 0x40080) - 1U <= *(ulong *)(lVar18 + 0x40040)) {
        LOCK();
        *(long *)(lVar18 + 0x40040) = *(long *)(lVar18 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_78 = *(undefined8 *)(this + 0x18);
    local_88 = *(long *)(this + 8);
    pTVar8 = *(TaskGroupContext **)(this + 0x28);
    uStack_70 = *(undefined8 *)(this + 0x20);
    uVar20 = local_88 - uVar28;
    uStack_80 = uVar28;
    local_68 = pTVar8;
    lVar21 = embree::TaskScheduler::thread();
    if (lVar21 == 0) {
      pTVar25 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar25,(_lambda___1_ *)&local_88,pTVar8,uVar20,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar21 + 0x40080)) {
LAB_00109df9:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar18 = *(long *)(lVar21 + 0xc00c0);
      uVar28 = lVar18 + 0x30 + (ulong)(-(int)lVar18 & 0x3f);
      if (0x80000 < uVar28) goto LAB_00109df9;
      *(ulong *)(lVar21 + 0xc00c0) = uVar28;
      puVar2 = (undefined8 *)(lVar21 + 0x40090 + uVar28);
      *puVar2 = &PTR_execute_00117120;
      puVar2[1] = local_88;
      puVar2[2] = uStack_80;
      puVar2[5] = local_68;
      puVar2[3] = local_78;
      puVar2[4] = uStack_70;
      lVar22 = *(long *)(lVar21 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar21 + 0x40 + lVar22);
      lVar9 = *(long *)(lVar21 + 0xc0100);
      *(undefined4 *)(lVar21 + 0x44 + lVar22) = 1;
      *(undefined1 *)(lVar21 + 0x48 + lVar22) = 1;
      lVar22 = lVar22 + lVar21;
      *(undefined8 **)(lVar22 + 0x50) = puVar2;
      *(long *)(lVar22 + 0x58) = lVar9;
      *(TaskGroupContext **)(lVar22 + 0x60) = pTVar8;
      *(long *)(lVar22 + 0x68) = lVar18;
      *(ulong *)(lVar22 + 0x70) = uVar20;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar21 + 0x40080) = *(long *)(lVar21 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar21 + 0x40080) - 1U <= *(ulong *)(lVar21 + 0x40040)) {
        LOCK();
        *(long *)(lVar21 + 0x40040) = *(long *)(lVar21 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    plVar10 = (long *)*plVar7;
    auVar46._0_8_ = CONCAT44(_LC2,_LC2);
    auVar46._8_4_ = _LC2;
    auVar46._12_4_ = _LC2;
    plVar11 = (long *)plVar10[2];
    lVar18 = *plVar10;
    auVar34._8_4_ = _LC2;
    auVar34._0_8_ = auVar46._0_8_;
    auVar34._12_4_ = _LC2;
    auVar48._8_4_ = _LC2;
    auVar48._0_8_ = auVar46._0_8_;
    auVar48._12_4_ = _LC2;
    uVar20 = lVar21 * plVar10[1];
    auVar47._0_8_ = CONCAT44(_LC4,_LC4);
    auVar47._8_4_ = _LC4;
    auVar47._12_4_ = _LC4;
    auVar29._8_4_ = _LC4;
    auVar29._0_8_ = auVar47._0_8_;
    auVar29._12_4_ = _LC4;
    uVar28 = uVar20 / (ulong)plVar10[6];
    pauVar26 = (undefined1 (*) [16])(uVar28 * 0x20 + lVar18);
    pauVar23 = (undefined1 (*) [16])
               (lVar18 + -0x20 + ((plVar10[1] + uVar20) / (ulong)plVar10[6]) * 0x20);
    uVar39 = _LC4;
    uVar42 = _LC4;
    uVar43 = _LC4;
    uVar44 = _LC4;
    local_d8 = auVar47;
    local_c8 = auVar46;
    while( true ) {
      if (pauVar23 < pauVar26) break;
      auVar4 = pauVar26[1];
      auVar5 = *pauVar26;
      lVar9 = *plVar11;
      fVar30 = auVar4._0_4_ + auVar5._0_4_;
      fVar31 = auVar4._4_4_ + auVar5._4_4_;
      fVar32 = auVar4._8_4_ + auVar5._8_4_;
      fVar33 = auVar4._12_4_ + auVar5._12_4_;
      piVar1 = (int *)plVar11[1];
      puVar12 = (uint *)plVar11[2];
      auVar41._0_4_ =
           -(uint)((int)((fVar30 - *(float *)(lVar9 + 0x20)) * *(float *)(lVar9 + 0x30) + _LC26) <
                  *piVar1) & *puVar12;
      auVar41._4_4_ =
           -(uint)((int)((fVar31 - *(float *)(lVar9 + 0x24)) * *(float *)(lVar9 + 0x34) +
                        _UNK_001171e4) < piVar1[1]) & puVar12[1];
      auVar41._8_4_ =
           -(uint)((int)((fVar32 - *(float *)(lVar9 + 0x28)) * *(float *)(lVar9 + 0x38) +
                        _UNK_001171e8) < piVar1[2]) & puVar12[2];
      auVar41._12_4_ =
           -(uint)((int)((fVar33 - *(float *)(lVar9 + 0x2c)) * *(float *)(lVar9 + 0x3c) +
                        _UNK_001171ec) < piVar1[3]) & puVar12[3];
      iVar27 = movmskps((int)puVar12,auVar41);
      if (iVar27 == 0) {
        auVar45._4_4_ = uVar42;
        auVar45._0_4_ = uVar39;
        auVar45._8_4_ = uVar43;
        auVar45._12_4_ = uVar44;
        pauVar24 = pauVar23;
        while( true ) {
          auVar41 = pauVar24[1];
          auVar6 = *pauVar24;
          pauVar23 = pauVar24 + -2;
          fVar35 = auVar41._0_4_ + auVar6._0_4_;
          fVar36 = auVar41._4_4_ + auVar6._4_4_;
          fVar37 = auVar41._8_4_ + auVar6._8_4_;
          fVar38 = auVar41._12_4_ + auVar6._12_4_;
          auVar40._0_4_ =
               -(uint)((int)((fVar35 - *(float *)(lVar9 + 0x20)) * *(float *)(lVar9 + 0x30) + _LC26)
                      < *piVar1) & *puVar12;
          auVar40._4_4_ =
               -(uint)((int)((fVar36 - *(float *)(lVar9 + 0x24)) * *(float *)(lVar9 + 0x34) +
                            _UNK_001171e4) < piVar1[1]) & puVar12[1];
          auVar40._8_4_ =
               -(uint)((int)((fVar37 - *(float *)(lVar9 + 0x28)) * *(float *)(lVar9 + 0x38) +
                            _UNK_001171e8) < piVar1[2]) & puVar12[2];
          auVar40._12_4_ =
               -(uint)((int)((fVar38 - *(float *)(lVar9 + 0x2c)) * *(float *)(lVar9 + 0x3c) +
                            _UNK_001171ec) < piVar1[3]) & puVar12[3];
          iVar27 = movmskps(0,auVar40);
          if (iVar27 != 0) break;
          auVar45 = minps(auVar45,auVar6);
          local_c8 = maxps(local_c8,auVar41);
          auVar6._4_4_ = fVar36;
          auVar6._0_4_ = fVar35;
          auVar6._8_4_ = fVar37;
          auVar6._12_4_ = fVar38;
          auVar47 = minps(auVar47,auVar6);
          auVar15._4_4_ = fVar36;
          auVar15._0_4_ = fVar35;
          auVar15._8_4_ = fVar37;
          auVar15._12_4_ = fVar38;
          auVar46 = maxps(auVar46,auVar15);
          pauVar24 = pauVar23;
          if (pauVar23 < pauVar26) {
            uVar39 = auVar45._0_4_;
            uVar42 = auVar45._4_4_;
            uVar43 = auVar45._8_4_;
            uVar44 = auVar45._12_4_;
            goto LAB_00109bf5;
          }
        }
        *pauVar26 = auVar6;
        auVar48 = maxps(auVar48,auVar41);
        auVar13._4_4_ = fVar36;
        auVar13._0_4_ = fVar35;
        auVar13._8_4_ = fVar37;
        auVar13._12_4_ = fVar38;
        auVar34 = maxps(auVar34,auVar13);
        auVar14._4_4_ = fVar36;
        auVar14._0_4_ = fVar35;
        auVar14._8_4_ = fVar37;
        auVar14._12_4_ = fVar38;
        local_d8 = minps(local_d8,auVar14);
        local_c8 = maxps(local_c8,auVar4);
        auVar17._4_4_ = fVar31;
        auVar17._0_4_ = fVar30;
        auVar17._8_4_ = fVar32;
        auVar17._12_4_ = fVar33;
        auVar41 = minps(auVar45,auVar5);
        auVar29 = minps(auVar29,auVar6);
        auVar47 = minps(auVar47,auVar17);
        auVar46 = maxps(auVar46,auVar17);
        uVar16 = *(undefined8 *)(pauVar24[1] + 8);
        uVar39 = auVar41._0_4_;
        uVar42 = auVar41._4_4_;
        uVar43 = auVar41._8_4_;
        uVar44 = auVar41._12_4_;
        *(undefined8 *)pauVar26[1] = *(undefined8 *)pauVar24[1];
        *(undefined8 *)(pauVar26[1] + 8) = uVar16;
        *pauVar24 = auVar5;
        pauVar24[1] = auVar4;
      }
      else {
        auVar29 = minps(auVar29,auVar5);
        auVar48 = maxps(auVar48,auVar4);
        auVar4._4_4_ = fVar31;
        auVar4._0_4_ = fVar30;
        auVar4._8_4_ = fVar32;
        auVar4._12_4_ = fVar33;
        auVar34 = maxps(auVar34,auVar4);
        auVar5._4_4_ = fVar31;
        auVar5._0_4_ = fVar30;
        auVar5._8_4_ = fVar32;
        auVar5._12_4_ = fVar33;
        local_d8 = minps(local_d8,auVar5);
      }
      pauVar26 = pauVar26 + 2;
    }
LAB_00109bf5:
    *(ulong *)(*plVar7 + 0x40 + lVar21 * 8) = uVar28;
    *(ulong *)(*plVar7 + 0x280 + lVar21 * 8) = ((long)pauVar26 - lVar18 >> 5) - uVar28;
    lVar21 = (lVar21 + 0x33) * 0x40;
    pauVar23 = (undefined1 (*) [16])(*plVar7 + lVar21);
    pauVar23[3] = auVar34;
    *pauVar23 = auVar29;
    pauVar23[1] = auVar48;
    *(undefined8 *)pauVar23[2] = local_d8._0_8_;
    *(undefined8 *)(pauVar23[2] + 8) = local_d8._8_8_;
    puVar3 = (undefined4 *)(*plVar7 + 0x1000 + lVar21);
    *puVar3 = uVar39;
    puVar3[1] = uVar42;
    puVar3[2] = uVar43;
    puVar3[3] = uVar44;
    *(undefined8 *)(puVar3 + 4) = local_c8._0_8_;
    *(undefined8 *)(puVar3 + 6) = local_c8._8_8_;
    *(undefined1 (*) [16])(puVar3 + 8) = auVar47;
    *(undefined1 (*) [16])(puVar3 + 0xc) = auVar46;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010a1d5) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  Thread *pTVar14;
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
  lVar13 = embree::TaskScheduler::allocThreadIndex();
  pTVar14 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar14 = lVar13;
  pTVar18 = pTVar14 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar15 = pTVar16 + 0x80;
    *(undefined4 *)(pTVar16 + 0x40) = 0;
    pTVar16 = pTVar15;
  } while (pTVar14 + 0x40040 != pTVar15);
  *(undefined8 *)(pTVar14 + 0x40040) = 0;
  *(undefined8 *)(pTVar14 + 0x40080) = 0;
  *(undefined8 *)(pTVar14 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar14 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar14 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar13 * 8) = pTVar14;
  UNLOCK();
  local_48 = pTVar14;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar14);
  if (*(ulong *)(pTVar14 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar14 + 0xc00c0);
    uVar3 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar14 + 0xc00c0) = uVar3;
      pTVar15 = pTVar14 + uVar3 + 0x40090;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar15 = &PTR_execute_00117138;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar15 + 8) = uVar8;
      *(undefined8 *)(pTVar15 + 0x10) = uVar9;
      *(undefined8 *)(pTVar15 + 0x28) = uVar5;
      *(undefined8 *)(pTVar15 + 0x18) = uVar10;
      *(undefined8 *)(pTVar15 + 0x20) = uVar11;
      lVar17 = *(long *)(pTVar14 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar14 + 0xc0100);
      pTVar14[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar14 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar14 + lVar17 + 0x50) = pTVar15;
      *(long *)(pTVar14 + lVar17 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar14 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar14 + lVar17 + 0x68) = lVar4;
      *(ulong *)(pTVar14 + lVar17 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar14 + 0x40080) = *(long *)(pTVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar14 + 0x40080) - 1U <= *(ulong *)(pTVar14 + 0x40040)) {
        LOCK();
        *(long *)(pTVar14 + 0x40040) = *(long *)(pTVar14 + 0x40080) + -1;
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
      do {
        cVar12 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar14);
      } while (cVar12 != '\0');
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
      *(undefined8 *)(lVar13 * 8 + *(long *)(this + 0x10)) = 0;
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
        if (pTVar14 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar14 + 0xc0108);
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
            embree::alignedFree(pTVar14);
            return;
          }
        }
      }
      else {
        local_48 = pTVar18;
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



/* unsigned long embree::parallel_partitioning<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> > const&)#4}>(embree::PrimRef*, unsigned long,
   unsigned long, embree::EmptyTy const&, embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1} const&, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3} const&, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> > const&)#4} const&, unsigned long) */

ulong embree::
      parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                (PrimRef *param_1,ulong param_2,ulong param_3,EmptyTy *param_4,CentGeom *param_5,
                CentGeom *param_6,_lambda_embree__PrimRef_const___1_ *param_7,
                _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__PrimRef_const___3_
                *param_8,_lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__CentGeom<embree::BBox<embree::Vec3fa>_>_const___4_
                         *param_9,ulong param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  float fVar11;
  CentGeom **ppCVar12;
  CentGeom *pCVar13;
  long lVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  CentGeom **ppCVar17;
  long lVar18;
  TaskScheduler *pTVar19;
  int iVar20;
  CentGeom *pCVar21;
  uint uVar22;
  ulong uVar23;
  CentGeom **ppCVar24;
  long in_R10;
  long lVar25;
  long in_R11;
  CentGeom *pCVar26;
  TaskGroupContext *pTVar27;
  long in_FS_OFFSET;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar31;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
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
  float fVar51;
  float fVar52;
  long local_e8;
  long local_e0;
  TaskGroupContext *local_d8;
  CentGeom *local_d0;
  CentGeom *local_c8;
  CentGeom **local_c0;
  TaskGroupContext **local_b8;
  CentGeom **local_b0;
  long *local_a8;
  long *local_a0;
  CentGeom *local_98;
  CentGeom *pCStack_90;
  undefined8 local_88;
  CentGeom ***pppCStack_80;
  TaskGroupContext *local_78;
  CentGeom *local_68;
  CentGeom *pCStack_60;
  undefined8 local_58;
  TaskGroupContext ***pppTStack_50;
  TaskGroupContext *local_48;
  long local_40;
  
  fVar11 = _LC26;
  pCVar26 = (CentGeom *)(param_3 - param_2);
  uVar23 = param_2 * 0x20;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pCVar21 = (CentGeom *)(param_1 + uVar23);
  if (pCVar26 < param_10) {
    pCVar26 = (CentGeom *)(param_1 + param_3 * 0x20 + -0x20);
    for (; pCVar21 <= pCVar26; pCVar21 = pCVar21 + 0x20) {
      auVar28 = *(undefined1 (*) [16])(pCVar21 + 0x10);
      auVar29 = *(undefined1 (*) [16])pCVar21;
      lVar14 = *(long *)param_7;
      fVar49 = auVar28._0_4_ + auVar29._0_4_;
      fVar50 = auVar28._4_4_ + auVar29._4_4_;
      fVar51 = auVar28._8_4_ + auVar29._8_4_;
      fVar52 = auVar28._12_4_ + auVar29._12_4_;
      fVar45 = *(float *)(lVar14 + 0x20);
      fVar46 = *(float *)(lVar14 + 0x24);
      fVar47 = *(float *)(lVar14 + 0x28);
      fVar48 = *(float *)(lVar14 + 0x2c);
      fVar41 = *(float *)(lVar14 + 0x30);
      fVar42 = *(float *)(lVar14 + 0x34);
      fVar43 = *(float *)(lVar14 + 0x38);
      fVar44 = *(float *)(lVar14 + 0x3c);
      piVar1 = *(int **)(param_7 + 8);
      iVar31 = *piVar1;
      iVar34 = piVar1[1];
      iVar35 = piVar1[2];
      iVar36 = piVar1[3];
      puVar4 = *(uint **)(param_7 + 0x10);
      uVar22 = *puVar4;
      uVar38 = puVar4[1];
      uVar39 = puVar4[2];
      uVar40 = puVar4[3];
      auVar33._0_4_ = -(uint)((int)((fVar49 - fVar45) * fVar41 + fVar11) < iVar31) & uVar22;
      auVar33._4_4_ = -(uint)((int)((fVar50 - fVar46) * fVar42 + fVar11) < iVar34) & uVar38;
      auVar33._8_4_ = -(uint)((int)((fVar51 - fVar47) * fVar43 + fVar11) < iVar35) & uVar39;
      auVar33._12_4_ = -(uint)((int)((fVar52 - fVar48) * fVar44 + fVar11) < iVar36) & uVar40;
      iVar20 = movmskps((int)puVar4,auVar33);
      pCVar13 = pCVar26;
      if (iVar20 == 0) {
        while( true ) {
          auVar28 = *(undefined1 (*) [16])(pCVar13 + 0x10);
          auVar29 = *(undefined1 (*) [16])pCVar13;
          pCVar26 = pCVar13 + -0x20;
          auVar37._0_4_ = auVar28._0_4_ + auVar29._0_4_;
          auVar37._4_4_ = auVar28._4_4_ + auVar29._4_4_;
          auVar37._8_4_ = auVar28._8_4_ + auVar29._8_4_;
          auVar37._12_4_ = auVar28._12_4_ + auVar29._12_4_;
          auVar32._0_4_ =
               -(uint)((int)((auVar37._0_4_ - fVar45) * fVar41 + fVar11) < iVar31) & uVar22;
          auVar32._4_4_ =
               -(uint)((int)((auVar37._4_4_ - fVar46) * fVar42 + fVar11) < iVar34) & uVar38;
          auVar32._8_4_ =
               -(uint)((int)((auVar37._8_4_ - fVar47) * fVar43 + fVar11) < iVar35) & uVar39;
          auVar32._12_4_ =
               -(uint)((int)((auVar37._12_4_ - fVar48) * fVar44 + fVar11) < iVar36) & uVar40;
          uVar22 = movmskps((int)uVar23,auVar32);
          uVar23 = (ulong)uVar22;
          if (uVar22 != 0) break;
          auVar29 = minps(*(undefined1 (*) [16])param_6,auVar29);
          *(undefined1 (*) [16])param_6 = auVar29;
          auVar28 = maxps(*(undefined1 (*) [16])(param_6 + 0x10),auVar28);
          *(undefined1 (*) [16])(param_6 + 0x10) = auVar28;
          auVar28 = minps(*(undefined1 (*) [16])(param_6 + 0x20),auVar37);
          *(undefined1 (*) [16])(param_6 + 0x20) = auVar28;
          auVar28 = maxps(*(undefined1 (*) [16])(param_6 + 0x30),auVar37);
          *(undefined1 (*) [16])(param_6 + 0x30) = auVar28;
          if (pCVar26 < pCVar21) goto LAB_0010aa6f;
          lVar14 = *(long *)param_7;
          fVar45 = *(float *)(lVar14 + 0x20);
          fVar46 = *(float *)(lVar14 + 0x24);
          fVar47 = *(float *)(lVar14 + 0x28);
          fVar48 = *(float *)(lVar14 + 0x2c);
          fVar41 = *(float *)(lVar14 + 0x30);
          fVar42 = *(float *)(lVar14 + 0x34);
          fVar43 = *(float *)(lVar14 + 0x38);
          fVar44 = *(float *)(lVar14 + 0x3c);
          piVar1 = *(int **)(param_7 + 8);
          iVar31 = *piVar1;
          iVar34 = piVar1[1];
          iVar35 = piVar1[2];
          iVar36 = piVar1[3];
          puVar4 = *(uint **)(param_7 + 0x10);
          uVar22 = *puVar4;
          uVar38 = puVar4[1];
          uVar39 = puVar4[2];
          uVar40 = puVar4[3];
          pCVar13 = pCVar26;
        }
        auVar29 = minps(*(undefined1 (*) [16])param_5,auVar29);
        *(undefined1 (*) [16])param_5 = auVar29;
        auVar28 = maxps(*(undefined1 (*) [16])(param_5 + 0x10),auVar28);
        *(undefined1 (*) [16])(param_5 + 0x10) = auVar28;
        auVar28 = minps(*(undefined1 (*) [16])(param_5 + 0x20),auVar37);
        *(undefined1 (*) [16])(param_5 + 0x20) = auVar28;
        auVar28 = maxps(*(undefined1 (*) [16])(param_5 + 0x30),auVar37);
        *(undefined1 (*) [16])(param_5 + 0x30) = auVar28;
        auVar28 = *(undefined1 (*) [16])pCVar21;
        auVar29 = *(undefined1 (*) [16])(pCVar21 + 0x10);
        auVar33 = minps(*(undefined1 (*) [16])param_6,auVar28);
        *(undefined1 (*) [16])param_6 = auVar33;
        auVar33 = maxps(*(undefined1 (*) [16])(param_6 + 0x10),auVar29);
        auVar30._0_4_ = auVar29._0_4_ + auVar28._0_4_;
        auVar30._4_4_ = auVar29._4_4_ + auVar28._4_4_;
        auVar30._8_4_ = auVar29._8_4_ + auVar28._8_4_;
        auVar30._12_4_ = auVar29._12_4_ + auVar28._12_4_;
        *(undefined1 (*) [16])(param_6 + 0x10) = auVar33;
        auVar28 = minps(*(undefined1 (*) [16])(param_6 + 0x20),auVar30);
        *(undefined1 (*) [16])(param_6 + 0x20) = auVar28;
        auVar28 = maxps(*(undefined1 (*) [16])(param_6 + 0x30),auVar30);
        *(undefined1 (*) [16])(param_6 + 0x30) = auVar28;
        uVar5 = *(undefined8 *)(pCVar13 + 8);
        uVar6 = *(undefined8 *)pCVar21;
        uVar7 = *(undefined8 *)(pCVar21 + 8);
        uVar8 = *(undefined8 *)(pCVar21 + 0x10);
        uVar9 = *(undefined8 *)(pCVar21 + 0x18);
        *(undefined8 *)pCVar21 = *(undefined8 *)pCVar13;
        *(undefined8 *)(pCVar21 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pCVar13 + 0x18);
        *(undefined8 *)(pCVar21 + 0x10) = *(undefined8 *)(pCVar13 + 0x10);
        *(undefined8 *)(pCVar21 + 0x18) = uVar5;
        *(undefined8 *)pCVar13 = uVar6;
        *(undefined8 *)(pCVar13 + 8) = uVar7;
        *(undefined8 *)(pCVar13 + 0x10) = uVar8;
        *(undefined8 *)(pCVar13 + 0x18) = uVar9;
      }
      else {
        auVar29 = minps(*(undefined1 (*) [16])param_5,auVar29);
        *(undefined1 (*) [16])param_5 = auVar29;
        auVar28 = maxps(*(undefined1 (*) [16])(param_5 + 0x10),auVar28);
        *(undefined1 (*) [16])(param_5 + 0x10) = auVar28;
        auVar28._4_4_ = fVar50;
        auVar28._0_4_ = fVar49;
        auVar28._8_4_ = fVar51;
        auVar28._12_4_ = fVar52;
        auVar28 = minps(*(undefined1 (*) [16])(param_5 + 0x20),auVar28);
        *(undefined1 (*) [16])(param_5 + 0x20) = auVar28;
        auVar29._4_4_ = fVar50;
        auVar29._0_4_ = fVar49;
        auVar29._8_4_ = fVar51;
        auVar29._12_4_ = fVar52;
        auVar28 = maxps(*(undefined1 (*) [16])(param_5 + 0x30),auVar29);
        *(undefined1 (*) [16])(param_5 + 0x30) = auVar28;
      }
    }
LAB_0010aa6f:
    pCVar21 = (CentGeom *)((long)pCVar21 - (long)param_1 >> 5);
    goto LAB_0010a465;
  }
  ppCVar12 = (CentGeom **)embree::alignedMalloc(0x2cc0,0x40);
  ppCVar12[5] = (CentGeom *)param_4;
  *ppCVar12 = pCVar21;
  ppCVar12[1] = pCVar26;
  ppCVar12[2] = (CentGeom *)param_7;
  ppCVar12[3] = (CentGeom *)param_8;
  ppCVar12[4] = (CentGeom *)param_9;
  pCVar13 = (CentGeom *)embree::TaskScheduler::threadCount();
  pCVar21 = (CentGeom *)((ulong)(pCVar26 + (param_10 - 1)) / param_10);
  if ((CentGeom *)0x40 < pCVar21) {
    pCVar21 = (CentGeom *)0x40;
  }
  if (pCVar21 <= pCVar13) {
    pCVar13 = pCVar21;
  }
  ppCVar12[6] = pCVar13;
  local_c0 = ppCVar12;
  if (pCVar13 == (CentGeom *)0x0) {
    ppCVar12[0x50] = (CentGeom *)0x0;
    ppCVar12[8] = ppCVar12[1];
  }
  else {
    pppCStack_80 = &local_c0;
    pTVar27 = (TaskGroupContext *)&local_c8;
    local_c8 = (CentGeom *)0x0;
    pCStack_90 = (CentGeom *)0x0;
    local_88 = 1;
    local_98 = pCVar13;
    local_78 = pTVar27;
    lVar14 = embree::TaskScheduler::thread();
    if (lVar14 == 0) {
      pTVar19 = (TaskScheduler *)embree::TaskScheduler::instance();
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar19,(_lambda___1_ *)&local_98,pTVar27,(ulong)pCVar13,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar14 + 0x40080)) {
LAB_0010ac2d:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar25 = *(long *)(lVar14 + 0xc00c0);
      uVar23 = lVar25 + 0x30 + (ulong)(-(int)lVar25 & 0x3f);
      if (0x80000 < uVar23) goto LAB_0010ac2d;
      *(ulong *)(lVar14 + 0xc00c0) = uVar23;
      puVar2 = (undefined8 *)(lVar14 + 0x40090 + uVar23);
      *puVar2 = &PTR_execute_00117120;
      puVar2[1] = local_98;
      puVar2[2] = pCStack_90;
      puVar2[5] = local_78;
      puVar2[3] = local_88;
      puVar2[4] = pppCStack_80;
      lVar15 = *(long *)(lVar14 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar14 + 0x40 + lVar15);
      lVar3 = *(long *)(lVar14 + 0xc0100);
      *(undefined4 *)(lVar14 + 0x44 + lVar15) = 1;
      *(undefined1 *)(lVar14 + 0x48 + lVar15) = 1;
      lVar15 = lVar15 + lVar14;
      *(undefined8 **)(lVar15 + 0x50) = puVar2;
      *(long *)(lVar15 + 0x58) = lVar3;
      *(TaskGroupContext **)(lVar15 + 0x60) = pTVar27;
      *(long *)(lVar15 + 0x68) = lVar25;
      *(CentGeom **)(lVar15 + 0x70) = pCVar13;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar14 + 0x40080) = *(long *)(lVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar14 + 0x40080) - 1U <= *(ulong *)(lVar14 + 0x40040)) {
        LOCK();
        *(long *)(lVar14 + 0x40040) = *(long *)(lVar14 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    pCVar26 = local_c8;
    if (local_c8 != (CentGeom *)0x0) goto LAB_0010a96a;
    pCVar21 = ppCVar12[6];
    pCVar26 = ppCVar12[1];
    ppCVar12[(long)(pCVar21 + 0x50)] = (CentGeom *)0x0;
    ppCVar12[(long)(pCVar21 + 8)] = pCVar26;
    if (pCVar21 != (CentGeom *)0x0) {
      pCVar21 = (CentGeom *)0x0;
      pauVar16 = (undefined1 (*) [16])(ppCVar12 + 0x198);
      do {
        auVar28 = minps(*(undefined1 (*) [16])param_5,*pauVar16);
        pCVar21 = pCVar21 + 1;
        *(undefined1 (*) [16])param_5 = auVar28;
        auVar28 = maxps(*(undefined1 (*) [16])(param_5 + 0x10),pauVar16[1]);
        *(undefined1 (*) [16])(param_5 + 0x10) = auVar28;
        auVar28 = minps(*(undefined1 (*) [16])(param_5 + 0x20),pauVar16[2]);
        *(undefined1 (*) [16])(param_5 + 0x20) = auVar28;
        auVar28 = maxps(*(undefined1 (*) [16])(param_5 + 0x30),pauVar16[3]);
        *(undefined1 (*) [16])(param_5 + 0x30) = auVar28;
        auVar28 = minps(*(undefined1 (*) [16])param_6,pauVar16[0x100]);
        *(undefined1 (*) [16])param_6 = auVar28;
        auVar28 = maxps(*(undefined1 (*) [16])(param_6 + 0x10),pauVar16[0x101]);
        *(undefined1 (*) [16])(param_6 + 0x10) = auVar28;
        auVar28 = minps(*(undefined1 (*) [16])(param_6 + 0x20),pauVar16[0x102]);
        *(undefined1 (*) [16])(param_6 + 0x20) = auVar28;
        auVar28 = maxps(*(undefined1 (*) [16])(param_6 + 0x30),pauVar16[0x103]);
        *(undefined1 (*) [16])(param_6 + 0x30) = auVar28;
        pCVar13 = ppCVar12[6];
        pauVar16 = pauVar16 + 4;
      } while (pCVar21 < pCVar13);
      pCVar21 = ppCVar12[0x50];
      param_5 = pCVar21;
      if ((CentGeom *)0x1 < pCVar13) {
        ppCVar17 = ppCVar12 + 0x51;
        do {
          param_5 = param_5 + (long)*ppCVar17;
          ppCVar17 = ppCVar17 + 1;
        } while (ppCVar12 + (long)(pCVar13 + 0x50) != ppCVar17);
        pCVar26 = ppCVar12[1];
LAB_0010a6f6:
        local_d8 = (TaskGroupContext *)0x0;
        local_e0 = 0;
        local_e8 = 0;
        ppCVar17 = ppCVar12 + 8;
        bVar10 = false;
        param_7 = (_lambda_embree__PrimRef_const___1_ *)0x0;
        pTVar27 = (TaskGroupContext *)0x0;
        ppCVar24 = ppCVar17;
        in_R10 = 0;
        lVar14 = 0;
        do {
          local_68 = *ppCVar24;
          pCStack_60 = pCVar21 + (long)local_68;
          pCStack_90 = ppCVar24[1];
          if ((long)param_5 <= (long)ppCVar24[1]) {
            pCStack_90 = param_5;
          }
          local_98 = (CentGeom *)0x0;
          if (-1 < (long)pCStack_60) {
            local_98 = pCStack_60;
          }
          if ((long)pCVar26 < (long)pCStack_60) {
            pCStack_60 = pCVar26;
          }
          if ((long)local_68 < (long)param_5) {
            local_68 = param_5;
          }
          in_R11 = lVar14;
          if ((long)local_98 < (long)pCStack_90) {
            param_7 = (_lambda_embree__PrimRef_const___1_ *)0x1;
            pTVar27 = pTVar27 + ((long)pCStack_90 - (long)local_98);
            in_R11 = lVar14 + 1;
            ppCVar12[lVar14 * 2 + 0x98] = local_98;
            (ppCVar12 + lVar14 * 2 + 0x98)[1] = pCStack_90;
          }
          if ((long)local_68 < (long)pCStack_60) {
            lVar14 = in_R10 + 1;
            lVar25 = in_R10 * 0x10;
            ppCVar12[in_R10 * 2 + 0x118] = local_68;
            (ppCVar12 + in_R10 * 2 + 0x118)[1] = pCStack_60;
            in_R10 = lVar14;
            if (ppCVar24 + 1 == ppCVar17 + (long)pCVar13) goto LAB_0010a993;
            bVar10 = true;
          }
          else {
            lVar14 = in_R10;
            if (ppCVar17 + (long)pCVar13 == ppCVar24 + 1) goto code_r0x0010a7c8;
          }
          pCVar21 = ppCVar24[0x49];
          ppCVar24 = ppCVar24 + 1;
          in_R10 = lVar14;
          lVar14 = in_R11;
        } while( true );
      }
      pCVar26 = ppCVar12[1];
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = (TaskGroupContext *)0x0;
      if (pCVar13 != (CentGeom *)0x0) goto LAB_0010a6f6;
      goto LAB_0010a450;
    }
  }
  pCVar21 = ppCVar12[0x50];
  goto LAB_0010a450;
code_r0x0010a7c8:
  lVar25 = in_R10;
  if (bVar10) goto LAB_0010a993;
  while ((pCVar21 = param_5, (char)param_7 != '\0' &&
         (local_e8 = in_R11, local_d8 = pTVar27, pTVar27 != (TaskGroupContext *)0x0))) {
    local_b8 = &local_d8;
    local_a8 = &local_e8;
    local_a0 = &local_e0;
    pppTStack_50 = &local_b8;
    local_d0 = (CentGeom *)0x0;
    pCStack_60 = (CentGeom *)0x0;
    local_58 = 1;
    local_b0 = ppCVar12;
    local_68 = pCVar13;
    local_48 = (TaskGroupContext *)&local_d0;
    lVar14 = embree::TaskScheduler::thread();
    if (lVar14 == 0) {
      pTVar19 = (TaskScheduler *)embree::TaskScheduler::instance();
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar19,(_lambda___1_ *)&local_68,(TaskGroupContext *)&local_d0,(ulong)pCVar13,true
                );
      in_R10 = lVar25;
    }
    else {
      if (0xfff < *(ulong *)(lVar14 + 0x40080)) goto LAB_0010ac2d;
      lVar3 = *(long *)(lVar14 + 0xc00c0);
      uVar23 = lVar3 + 0x30 + (ulong)(-(int)lVar3 & 0x3f);
      if (0x80000 < uVar23) goto LAB_0010ac2d;
      *(ulong *)(lVar14 + 0xc00c0) = uVar23;
      puVar2 = (undefined8 *)(lVar14 + 0x40090 + uVar23);
      *puVar2 = &PTR_execute_00117138;
      puVar2[1] = local_68;
      puVar2[2] = pCStack_60;
      puVar2[3] = local_58;
      puVar2[4] = pppTStack_50;
      puVar2[5] = local_48;
      lVar18 = *(long *)(lVar14 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar14 + 0x40 + lVar18);
      lVar15 = *(long *)(lVar14 + 0xc0100);
      *(undefined4 *)(lVar14 + 0x44 + lVar18) = 1;
      *(undefined1 *)(lVar14 + 0x48 + lVar18) = 1;
      lVar18 = lVar18 + lVar14;
      *(undefined8 **)(lVar18 + 0x50) = puVar2;
      *(long *)(lVar18 + 0x58) = lVar15;
      *(TaskGroupContext **)(lVar18 + 0x60) = (TaskGroupContext *)&local_d0;
      *(long *)(lVar18 + 0x68) = lVar3;
      *(CentGeom **)(lVar18 + 0x70) = pCVar13;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar14 + 0x40080) = *(long *)(lVar14 + 0x40080) + 1;
      UNLOCK();
      in_R10 = lVar25;
      if (*(long *)(lVar14 + 0x40080) - 1U <= *(ulong *)(lVar14 + 0x40040)) {
        LOCK();
        *(long *)(lVar14 + 0x40040) = *(long *)(lVar14 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    pCVar26 = local_d0;
    if (local_d0 == (CentGeom *)0x0) break;
LAB_0010a96a:
    ppCVar12 = &local_68;
    local_68 = pCVar26;
    std::__exception_ptr::exception_ptr::_M_addref();
    std::rethrow_exception(ppCVar12);
    lVar25 = in_R10;
LAB_0010a993:
    local_e0 = in_R10;
  }
LAB_0010a450:
  if (ppCVar12 != (CentGeom **)0x0) {
    embree::alignedFree(ppCVar12);
  }
  pCVar21 = pCVar21 + param_2;
LAB_0010a465:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)pCVar21;
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::parallel_partition_task<embree::PrimRef,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >, embree::EmptyTy,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}>(unsigned long,
   embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
   embree::EmptyTy, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&, embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef
   const&)#1}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const&)#3}, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,
   32ul>::split_template<true>(embree::sse2::BinSplit<32ul> const&, embree::sse2::PrimInfoRange
   const&, embree::sse2::PrimInfoRange&,
   embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >
   const&)#4}>::partition(embree::CentGeom<embree::BBox<embree::Vec3fa> >&,
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned long)#2}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef_const&)#1},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)#3},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::B...mbree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::B___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  TaskGroupContext *pTVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  TaskScheduler *pTVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long *plVar27;
  long in_FS_OFFSET;
  long local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  TaskGroupContext *local_68;
  ulong local_58;
  long lStack_50;
  ulong local_48;
  undefined8 *puStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = *(long *)(this + 0x10);
  puVar24 = *(undefined8 **)(this + 0x20);
  if (*(ulong *)(this + 0x18) < (ulong)(*(long *)(this + 8) - lVar14)) {
    pTVar2 = *(TaskGroupContext **)(this + 0x28);
    uVar26 = (ulong)(*(long *)(this + 8) + lVar14) >> 1;
    local_58 = uVar26;
    lStack_50 = lVar14;
    local_48 = *(ulong *)(this + 0x18);
    puStack_40 = puVar24;
    local_38 = pTVar2;
    lVar11 = embree::TaskScheduler::thread();
    if (lVar11 == 0) {
      pTVar17 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar17,(_lambda___1_ *)&local_58,pTVar2,uVar26 - lVar14,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar11 + 0x40080)) goto LAB_0010b159;
      lVar3 = *(long *)(lVar11 + 0xc00c0);
      uVar13 = lVar3 + 0x30 + (ulong)(-(int)lVar3 & 0x3f);
      if (0x80000 < uVar13) goto LAB_0010b159;
      *(ulong *)(lVar11 + 0xc00c0) = uVar13;
      puVar24 = (undefined8 *)(lVar11 + 0x40090 + uVar13);
      *puVar24 = &PTR_execute_00117138;
      puVar24[1] = local_58;
      puVar24[2] = lStack_50;
      puVar24[5] = local_38;
      puVar24[3] = local_48;
      puVar24[4] = puStack_40;
      lVar12 = *(long *)(lVar11 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar11 + 0x40 + lVar12);
      lVar15 = *(long *)(lVar11 + 0xc0100);
      *(undefined4 *)(lVar11 + 0x44 + lVar12) = 1;
      *(undefined1 *)(lVar11 + 0x48 + lVar12) = 1;
      lVar12 = lVar12 + lVar11;
      *(undefined8 **)(lVar12 + 0x50) = puVar24;
      *(long *)(lVar12 + 0x58) = lVar15;
      *(TaskGroupContext **)(lVar12 + 0x60) = pTVar2;
      *(long *)(lVar12 + 0x68) = lVar3;
      *(ulong *)(lVar12 + 0x70) = uVar26 - lVar14;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar11 + 0x40080) = *(long *)(lVar11 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar11 + 0x40080) - 1U <= *(ulong *)(lVar11 + 0x40040)) {
        LOCK();
        *(long *)(lVar11 + 0x40040) = *(long *)(lVar11 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_78 = *(undefined8 *)(this + 0x18);
    local_88 = *(long *)(this + 8);
    pTVar2 = *(TaskGroupContext **)(this + 0x28);
    uStack_70 = *(undefined8 *)(this + 0x20);
    uVar13 = local_88 - uVar26;
    uStack_80 = uVar26;
    local_68 = pTVar2;
    lVar14 = embree::TaskScheduler::thread();
    if (lVar14 == 0) {
      pTVar17 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar17,(_lambda___1_ *)&local_88,pTVar2,uVar13,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar14 + 0x40080)) {
LAB_0010b159:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar11 = *(long *)(lVar14 + 0xc00c0);
      uVar26 = lVar11 + 0x30 + (ulong)(-(int)lVar11 & 0x3f);
      if (0x80000 < uVar26) goto LAB_0010b159;
      *(ulong *)(lVar14 + 0xc00c0) = uVar26;
      puVar24 = (undefined8 *)(lVar14 + 0x40090 + uVar26);
      *puVar24 = &PTR_execute_00117138;
      puVar24[1] = local_88;
      puVar24[2] = uStack_80;
      puVar24[5] = local_68;
      puVar24[3] = local_78;
      puVar24[4] = uStack_70;
      lVar15 = *(long *)(lVar14 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar14 + 0x40 + lVar15);
      lVar3 = *(long *)(lVar14 + 0xc0100);
      *(undefined4 *)(lVar14 + 0x44 + lVar15) = 1;
      *(undefined1 *)(lVar14 + 0x48 + lVar15) = 1;
      lVar15 = lVar15 + lVar14;
      *(undefined8 **)(lVar15 + 0x50) = puVar24;
      *(long *)(lVar15 + 0x58) = lVar3;
      *(TaskGroupContext **)(lVar15 + 0x60) = pTVar2;
      *(long *)(lVar15 + 0x68) = lVar11;
      *(ulong *)(lVar15 + 0x70) = uVar13;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar14 + 0x40080) = *(long *)(lVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar14 + 0x40080) - 1U <= *(ulong *)(lVar14 + 0x40040)) {
        LOCK();
        *(long *)(lVar14 + 0x40040) = *(long *)(lVar14 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    plVar4 = (long *)puVar24[1];
    lVar11 = plVar4[0x98];
    uVar16 = lVar14 * *(long *)*puVar24;
    uVar13 = plVar4[0x99] - lVar11;
    uVar26 = uVar16 / (ulong)plVar4[6];
    uVar22 = uVar26;
    if (uVar26 < uVar13) {
      plVar20 = plVar4 + 0x98;
    }
    else {
      plVar27 = plVar4 + 0x9a;
      do {
        plVar20 = plVar27;
        lVar11 = *plVar20;
        uVar22 = uVar22 - uVar13;
        uVar13 = plVar20[1] - lVar11;
        plVar27 = plVar20 + 2;
      } while (uVar13 <= uVar22);
    }
    lVar14 = plVar4[0x118];
    uVar23 = plVar4[0x119] - lVar14;
    uVar21 = uVar26;
    if (uVar26 < uVar23) {
      plVar27 = plVar4 + 0x118;
    }
    else {
      plVar10 = plVar4 + 0x11a;
      do {
        plVar27 = plVar10;
        lVar14 = *plVar27;
        uVar21 = uVar21 - uVar23;
        uVar23 = plVar27[1] - lVar14;
        plVar10 = plVar27 + 2;
      } while (uVar23 <= uVar21);
    }
    uVar13 = uVar13 - uVar22;
    uVar26 = (*(long *)*puVar24 + uVar16) / (ulong)plVar4[6] - uVar26;
    uVar23 = uVar23 - uVar21;
    puVar24 = (undefined8 *)((lVar11 + uVar22) * 0x20 + *plVar4);
    puVar25 = (undefined8 *)((lVar14 + uVar21) * 0x20 + *plVar4);
    uVar22 = uVar26;
    if (uVar13 <= uVar26) {
      uVar22 = uVar13;
    }
    if (uVar23 < uVar22) {
      uVar22 = uVar23;
    }
    if (uVar26 != 0) {
joined_r0x0010afd6:
      if (uVar23 == 0) {
        uVar23 = plVar27[3] - plVar27[2];
        puVar25 = (undefined8 *)(plVar27[2] * 0x20 + *plVar4);
        uVar22 = uVar26;
        if (uVar23 <= uVar26) {
          uVar22 = uVar23;
        }
        if (uVar13 < uVar22) {
          uVar22 = uVar13;
        }
        plVar27 = plVar27 + 2;
      }
      uVar26 = uVar26 - uVar22;
      uVar13 = uVar13 - uVar22;
      uVar23 = uVar23 - uVar22;
      puVar18 = puVar24;
      puVar19 = puVar25;
      uVar16 = uVar22;
      if (uVar22 != 0) {
        do {
          uVar5 = puVar19[1];
          uVar6 = *puVar18;
          uVar7 = puVar18[1];
          uVar8 = puVar18[2];
          uVar9 = puVar18[3];
          *puVar18 = *puVar19;
          puVar18[1] = uVar5;
          uVar5 = puVar19[3];
          puVar18[2] = puVar19[2];
          puVar18[3] = uVar5;
          *puVar19 = uVar6;
          puVar19[1] = uVar7;
          puVar19[2] = uVar8;
          puVar19[3] = uVar9;
          uVar16 = uVar16 - 1;
          puVar18 = puVar18 + 4;
          puVar19 = puVar19 + 4;
        } while (uVar16 != 0);
        puVar25 = puVar25 + uVar22 * 4;
        puVar24 = puVar24 + uVar22 * 4;
        if (uVar26 == 0) goto LAB_0010b078;
      }
      if (uVar13 == 0) {
        uVar13 = plVar20[3] - plVar20[2];
        puVar24 = (undefined8 *)(plVar20[2] * 0x20 + *plVar4);
        uVar22 = uVar23;
        if (uVar26 <= uVar23) {
          uVar22 = uVar26;
        }
        if (uVar13 < uVar22) {
          uVar22 = uVar13;
        }
        plVar20 = plVar20 + 2;
      }
      else {
        uVar22 = 0;
      }
      goto joined_r0x0010afd6;
    }
LAB_0010b078:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >
   embree::parallel_reduce_internal<unsigned long, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> >, embree::bin_serial_or_parallel<true, embree::sse2::BinInfoT<32ul,
   embree::PrimRef, embree::BBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRef>(embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const*, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long> const&)#1},
   embree::bin_serial_or_parallel<true, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRef>(embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const*, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> > const&, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> > const&)#2}>(unsigned long, unsigned long, unsigned long, unsigned
   long, embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> > const&,
   embree::bin_serial_or_parallel<true, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRef>(embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const*, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::bin_serial_or_parallel<true, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRef>(embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const*, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> > const&, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> > const&)#2} const&) */

embree * __thiscall
embree::
parallel_reduce_internal<unsigned_long,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>const&,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>const&)_2_>
          (embree *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,
          BinInfoT_conflict *param_5,_lambda_embree__range<unsigned_long>_const___1_ *param_6,
          _lambda_embree__sse2__BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>_>_const__embree__sse2__BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>_>_const___2_
          *param_7)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  embree *peVar23;
  embree *peVar24;
  undefined8 *puVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined1 (*pauVar31) [16];
  ulong uVar32;
  BinInfoT_conflict *pBVar33;
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  undefined8 *puVar36;
  undefined1 (*pauVar37) [16];
  undefined8 *puVar38;
  undefined1 (*pauVar39) [16];
  long in_FS_OFFSET;
  byte bVar40;
  undefined1 auVar41 [16];
  undefined1 (*local_2b58) [16];
  ulong local_2b48;
  ulong local_2b40;
  ulong local_2b38 [2];
  ulong local_2b28;
  ulong *local_2b20;
  ulong *local_2b18;
  ulong *local_2b10;
  undefined1 (*local_2b08) [16];
  _lambda_embree__range<unsigned_long>_const___1_ *local_2b00;
  ulong local_2af0;
  undefined8 uStack_2ae8;
  undefined8 local_2ae0;
  ulong **ppuStack_2ad8;
  ulong *local_2ad0;
  undefined1 local_2ac0 [3072];
  undefined8 local_1ec0;
  int aiStack_1eb8 [124];
  undefined8 local_1cc8;
  undefined1 local_1cc0 [7168];
  undefined1 (*local_c0) [16];
  ulong local_b8;
  long local_48;
  
  bVar40 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_2b48 = param_3;
  local_2b40 = param_2;
  local_2b38[0] = param_1;
  local_b8 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2b38[0]) {
    local_2b38[0] = 0x200;
  }
  if (local_2b38[0] <= local_b8) {
    local_b8 = local_2b38[0];
  }
  local_2b38[0] = local_b8;
  if (local_b8 * 0xe00 < 0x2001) {
    local_c0 = (undefined1 (*) [16])local_1cc0;
  }
  else {
    local_c0 = (undefined1 (*) [16])embree::alignedMalloc(local_b8 * 0xe00,0x40);
  }
  uVar21 = local_2b38[0];
  local_2b58 = (undefined1 (*) [16])local_1cc0;
  local_2b20 = &local_2b40;
  local_2b00 = param_6;
  local_2b18 = &local_2b48;
  local_2b10 = local_2b38;
  local_2b08 = local_2b58;
  if (local_2b38[0] != 0) {
    ppuStack_2ad8 = &local_2b20;
    uStack_2ae8 = 0;
    local_2ae0 = 1;
    local_2b28 = 0;
    local_2af0 = local_2b38[0];
    local_2ad0 = &local_2b28;
    lVar30 = embree::TaskScheduler::thread();
    if (lVar30 == 0) {
      uVar29 = embree::TaskScheduler::instance();
      _ZN6embree13TaskScheduler10spawn_rootIZNS0_5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImNS_4sse28BinInfoTILm32ENS_7PrimRefENS_4BBoxINS_6Vec3faEEEEEZNS_22bin_serial_or_parallelILb1ESB_NS5_10BinMappingILm32EEES7_EEvRT0_PKT2_mmmRKT1_EUlRKNS_5rangeImEEE_ZNSC_ILb1ESB_SE_S7_EEvSG_SJ_mmmSM_EUlRKSB_ST_E0_EESF_T_SV_SV_SV_RKSF_SM_RSI_EUlmE_EEvSV_SX_EUlSQ_E_EEvSV_SV_SV_SX_PNS0_16TaskGroupContextEEUlvE_EEvRKSV_S12_mb
                (uVar29,&local_2af0,&local_2b28,uVar21,1);
    }
    else {
      if (0xfff < *(ulong *)(lVar30 + 0x40080)) {
LAB_0010bbf3:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = *(long *)(lVar30 + 0xc00c0);
      uVar32 = lVar3 + 0x30 + (ulong)(-(int)lVar3 & 0x3f);
      if (0x80000 < uVar32) goto LAB_0010bbf3;
      *(ulong *)(lVar30 + 0xc00c0) = uVar32;
      puVar25 = (undefined8 *)(lVar30 + 0x40090 + uVar32);
      *puVar25 = 0x117150;
      puVar25[1] = local_2af0;
      puVar25[2] = uStack_2ae8;
      puVar25[3] = local_2ae0;
      puVar25[4] = ppuStack_2ad8;
      puVar25[5] = local_2ad0;
      lVar28 = *(long *)(lVar30 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar30 + 0x40 + lVar28);
      lVar4 = *(long *)(lVar30 + 0xc0100);
      *(undefined4 *)(lVar30 + 0x44 + lVar28) = 1;
      *(undefined1 *)(lVar30 + 0x48 + lVar28) = 1;
      lVar28 = lVar28 + lVar30;
      *(undefined8 **)(lVar28 + 0x50) = puVar25;
      *(long *)(lVar28 + 0x58) = lVar4;
      *(ulong **)(lVar28 + 0x60) = &local_2b28;
      *(long *)(lVar28 + 0x68) = lVar3;
      *(ulong *)(lVar28 + 0x70) = uVar21;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar30 + 0x40080) = *(long *)(lVar30 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar30 + 0x40080) - 1U <= *(ulong *)(lVar30 + 0x40040)) {
        LOCK();
        *(long *)(lVar30 + 0x40040) = *(long *)(lVar30 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_2b28 != 0) {
      local_2af0 = local_2b28;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_2af0);
      goto LAB_0010bbc7;
    }
  }
  pauVar22 = local_c0;
  uVar21 = local_2b38[0];
  peVar23 = this;
  pBVar33 = param_5;
  do {
    uVar29 = *(undefined8 *)(pBVar33 + 8);
    peVar24 = peVar23 + 0x60;
    *(undefined8 *)peVar23 = *(undefined8 *)pBVar33;
    *(undefined8 *)(peVar23 + 8) = uVar29;
    uVar29 = *(undefined8 *)(pBVar33 + 0x18);
    *(undefined8 *)(peVar23 + 0x10) = *(undefined8 *)(pBVar33 + 0x10);
    *(undefined8 *)(peVar23 + 0x18) = uVar29;
    uVar29 = *(undefined8 *)(pBVar33 + 0x28);
    *(undefined8 *)(peVar23 + 0x20) = *(undefined8 *)(pBVar33 + 0x20);
    *(undefined8 *)(peVar23 + 0x28) = uVar29;
    uVar29 = *(undefined8 *)(pBVar33 + 0x38);
    *(undefined8 *)(peVar23 + 0x30) = *(undefined8 *)(pBVar33 + 0x30);
    *(undefined8 *)(peVar23 + 0x38) = uVar29;
    uVar29 = *(undefined8 *)(pBVar33 + 0x48);
    *(undefined8 *)(peVar23 + 0x40) = *(undefined8 *)(pBVar33 + 0x40);
    *(undefined8 *)(peVar23 + 0x48) = uVar29;
    uVar29 = *(undefined8 *)(pBVar33 + 0x58);
    *(undefined8 *)(peVar23 + 0x50) = *(undefined8 *)(pBVar33 + 0x50);
    *(undefined8 *)(peVar23 + 0x58) = uVar29;
    peVar23 = peVar24;
    pBVar33 = pBVar33 + 0x60;
  } while (peVar24 != this + 0xc00);
  puVar25 = (undefined8 *)memmove(this + 0xc00,param_5 + 0xc00,0x200);
  if (uVar21 != 0) {
    pauVar27 = (undefined1 (*) [16])local_2ac0;
    peVar23 = this;
    pauVar39 = pauVar22;
    do {
      do {
        uVar29 = *(undefined8 *)(peVar23 + 8);
        uVar11 = *(undefined8 *)(peVar23 + 0x10);
        uVar12 = *(undefined8 *)(peVar23 + 0x18);
        pauVar26 = pauVar27 + 6;
        uVar13 = *(undefined8 *)(peVar23 + 0x20);
        uVar14 = *(undefined8 *)(peVar23 + 0x28);
        uVar15 = *(undefined8 *)(peVar23 + 0x30);
        uVar16 = *(undefined8 *)(peVar23 + 0x38);
        uVar17 = *(undefined8 *)(peVar23 + 0x40);
        uVar18 = *(undefined8 *)(peVar23 + 0x48);
        uVar19 = *(undefined8 *)(peVar23 + 0x50);
        uVar20 = *(undefined8 *)(peVar23 + 0x58);
        *(undefined8 *)*pauVar27 = *(undefined8 *)peVar23;
        *(undefined8 *)(*pauVar27 + 8) = uVar29;
        *(undefined8 *)pauVar27[1] = uVar11;
        *(undefined8 *)(pauVar27[1] + 8) = uVar12;
        *(undefined8 *)pauVar27[2] = uVar13;
        *(undefined8 *)(pauVar27[2] + 8) = uVar14;
        *(undefined8 *)pauVar27[3] = uVar15;
        *(undefined8 *)(pauVar27[3] + 8) = uVar16;
        *(undefined8 *)pauVar27[4] = uVar17;
        *(undefined8 *)(pauVar27[4] + 8) = uVar18;
        *(undefined8 *)pauVar27[5] = uVar19;
        *(undefined8 *)(pauVar27[5] + 8) = uVar20;
        pauVar27 = pauVar26;
        peVar23 = peVar23 + 0x60;
      } while (pauVar26 != (undefined1 (*) [16])&local_1ec0);
      plVar2 = *(long **)param_7;
      puVar36 = puVar25;
      pauVar27 = (undefined1 (*) [16])&local_1ec0;
      for (lVar30 = 0x40; lVar30 != 0; lVar30 = lVar30 + -1) {
        *(undefined8 *)*pauVar27 = *puVar36;
        puVar36 = puVar36 + (ulong)bVar40 * -2 + 1;
        pauVar27 = (undefined1 (*) [16])(pauVar27[-(ulong)bVar40] + 8);
      }
      lVar30 = *plVar2;
      pauVar27 = (undefined1 (*) [16])local_2ac0;
      peVar23 = this;
      if (lVar30 != 0) {
        pauVar26 = (undefined1 (*) [16])local_2ac0;
        pauVar31 = pauVar39;
        pauVar34 = pauVar39;
        pauVar37 = (undefined1 (*) [16])&local_1ec0;
        do {
          iVar5 = *(int *)(*pauVar37 + 4);
          iVar6 = *(int *)(*pauVar37 + 8);
          iVar7 = *(int *)(*pauVar37 + 0xc);
          pauVar35 = pauVar34 + 1;
          iVar8 = *(int *)(pauVar34[0xc0] + 4);
          iVar9 = *(int *)(pauVar34[0xc0] + 8);
          iVar10 = *(int *)(pauVar34[0xc0] + 0xc);
          *(int *)*pauVar37 = *(int *)*pauVar37 + *(int *)pauVar34[0xc0];
          *(int *)(*pauVar37 + 4) = iVar5 + iVar8;
          *(int *)(*pauVar37 + 8) = iVar6 + iVar9;
          *(int *)(*pauVar37 + 0xc) = iVar7 + iVar10;
          auVar41 = minps(*pauVar26,*pauVar31);
          *pauVar26 = auVar41;
          auVar41 = maxps(pauVar26[1],pauVar31[1]);
          pauVar26[1] = auVar41;
          auVar41 = minps(pauVar26[2],pauVar31[2]);
          pauVar26[2] = auVar41;
          auVar41 = maxps(pauVar26[3],pauVar31[3]);
          pauVar26[3] = auVar41;
          auVar41 = minps(pauVar26[4],pauVar31[4]);
          pauVar26[4] = auVar41;
          auVar41 = maxps(pauVar26[5],pauVar31[5]);
          pauVar26[5] = auVar41;
          pauVar26 = pauVar26 + 6;
          pauVar31 = pauVar31 + 6;
          pauVar34 = pauVar35;
          pauVar37 = pauVar37 + 1;
        } while (pauVar39 + lVar30 != pauVar35);
      }
      do {
        uVar29 = *(undefined8 *)(*pauVar27 + 8);
        uVar11 = *(undefined8 *)pauVar27[1];
        uVar12 = *(undefined8 *)(pauVar27[1] + 8);
        pauVar26 = pauVar27 + 6;
        uVar13 = *(undefined8 *)pauVar27[2];
        uVar14 = *(undefined8 *)(pauVar27[2] + 8);
        uVar15 = *(undefined8 *)pauVar27[3];
        uVar16 = *(undefined8 *)(pauVar27[3] + 8);
        uVar17 = *(undefined8 *)pauVar27[4];
        uVar18 = *(undefined8 *)(pauVar27[4] + 8);
        uVar19 = *(undefined8 *)pauVar27[5];
        uVar20 = *(undefined8 *)(pauVar27[5] + 8);
        *(undefined8 *)peVar23 = *(undefined8 *)*pauVar27;
        *(undefined8 *)(peVar23 + 8) = uVar29;
        *(undefined8 *)(peVar23 + 0x10) = uVar11;
        *(undefined8 *)(peVar23 + 0x18) = uVar12;
        *(undefined8 *)(peVar23 + 0x20) = uVar13;
        *(undefined8 *)(peVar23 + 0x28) = uVar14;
        *(undefined8 *)(peVar23 + 0x30) = uVar15;
        *(undefined8 *)(peVar23 + 0x38) = uVar16;
        *(undefined8 *)(peVar23 + 0x40) = uVar17;
        *(undefined8 *)(peVar23 + 0x48) = uVar18;
        *(undefined8 *)(peVar23 + 0x50) = uVar19;
        *(undefined8 *)(peVar23 + 0x58) = uVar20;
        pauVar27 = pauVar26;
        peVar23 = peVar23 + 0x60;
      } while ((undefined1 (*) [16])&local_1ec0 != pauVar26);
      pauVar39 = pauVar39 + 0xe0;
      *puVar25 = local_1ec0;
      puVar25[0x3f] = local_1cc8;
      lVar30 = (long)puVar25 - (long)((ulong)(puVar25 + 1) & 0xfffffffffffffff8);
      puVar36 = (undefined8 *)((long)&local_1ec0 - lVar30);
      puVar38 = (undefined8 *)((ulong)(puVar25 + 1) & 0xfffffffffffffff8);
      for (uVar32 = (ulong)((int)lVar30 + 0x200U >> 3); uVar32 != 0; uVar32 = uVar32 - 1) {
        *puVar38 = *puVar36;
        puVar36 = puVar36 + (ulong)bVar40 * -2 + 1;
        puVar38 = puVar38 + (ulong)bVar40 * -2 + 1;
      }
      pauVar27 = (undefined1 (*) [16])local_2ac0;
      peVar23 = this;
    } while (pauVar39 != pauVar22 + uVar21 * 0xe0);
  }
  if (pauVar22 != local_2b58) {
    embree::alignedFree(pauVar22);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_0010bbc7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator, bool) */

BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
* embree::sse2::GeneralBVHBuilder::
  BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
  ::recurse(BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
            *param_1,ulong *param_2,long *param_3,char param_4,undefined8 param_5,undefined8 param_6
           ,FastAllocator *param_7,MutexSys *param_8)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  MutexSys *this;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  uint uVar41;
  ulong uVar42;
  undefined1 (*pauVar43) [16];
  float *pfVar44;
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  ulong uVar47;
  undefined8 uVar48;
  undefined1 (*pauVar49) [16];
  undefined8 *puVar50;
  TaskScheduler *this_00;
  int iVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  undefined8 *puVar55;
  PrimInfoRange *pPVar56;
  PrimInfoRange *pPVar57;
  ulong uVar58;
  uint uVar59;
  long lVar60;
  long lVar61;
  undefined8 *puVar62;
  long lVar63;
  undefined1 *puVar64;
  undefined1 *puVar65;
  long *plVar66;
  long in_FS_OFFSET;
  float fVar67;
  float fVar72;
  float fVar73;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar104;
  float fVar105;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
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
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar124;
  float fVar129;
  float fVar130;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 local_d28 [8];
  float fStack_d20;
  float fStack_d1c;
  undefined1 local_d18 [16];
  undefined1 local_d08 [16];
  long *local_cb8;
  MutexSys *local_ca8;
  FastAllocator *local_ca0;
  PrimInfoRange *local_c88;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__CentGeom<embree::BBox<embree::Vec3fa>_>_const___4_
  local_c5b;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__PrimRef_const___3_ local_c5a;
  EmptyTy local_c59;
  PrimInfoRange *local_c58;
  int *local_c50;
  long *local_c48;
  undefined8 local_c38;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  undefined1 local_c28 [8];
  float fStack_c20;
  float fStack_c1c;
  undefined4 local_c18;
  undefined4 uStack_c14;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  undefined1 local_c08 [8];
  float fStack_c00;
  float fStack_bfc;
  undefined8 local_bf8;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  undefined1 local_be8 [8];
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined4 uStack_bd0;
  undefined4 uStack_bcc;
  undefined1 local_bc8 [8];
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  int local_ba8;
  int iStack_ba4;
  int iStack_ba0;
  int iStack_b9c;
  long local_b98;
  undefined8 uStack_b90;
  float local_b88;
  int local_b84;
  int local_b80;
  float local_b68;
  float fStack_b64;
  float fStack_b60;
  float fStack_b5c;
  float local_b58;
  float fStack_b54;
  float fStack_b50;
  float fStack_b4c;
  int local_b48;
  int iStack_b44;
  int iStack_b40;
  int iStack_b3c;
  undefined1 auStack_b38 [16];
  float local_b28;
  float fStack_b24;
  float fStack_b20;
  float fStack_b1c;
  float local_b18;
  float fStack_b14;
  float fStack_b10;
  float fStack_b0c;
  float fStack_b08;
  float fStack_b04;
  float fStack_b00;
  float fStack_afc;
  undefined8 uStack_af8;
  float fStack_ae8;
  float fStack_ae4;
  float fStack_ae0;
  float fStack_adc;
  float fStack_ad8;
  float fStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  float fStack_ac8;
  float fStack_ac4;
  float fStack_ac0;
  float fStack_abc;
  float fStack_ab8;
  float fStack_ab4;
  float fStack_ab0;
  float fStack_aac;
  undefined8 uStack_aa8;
  float fStack_a98;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  float fStack_a88;
  float fStack_a84;
  float fStack_a80;
  float fStack_a7c;
  float fStack_a78;
  float fStack_a74;
  float fStack_a70;
  float fStack_a6c;
  float fStack_a68;
  float fStack_a64;
  float fStack_a60;
  float fStack_a5c;
  undefined8 uStack_a58;
  float fStack_a48;
  float fStack_a44;
  float fStack_a40;
  float fStack_a3c;
  float fStack_a38;
  float fStack_a34;
  float fStack_a30;
  float fStack_a2c;
  float fStack_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  float fStack_a18;
  float fStack_a14;
  float fStack_a10;
  float fStack_a0c;
  long local_648;
  ulong uStack_640;
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  ulong local_5f8 [3];
  undefined1 local_5e0;
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  ulong local_598;
  ulong local_590;
  long local_588;
  undefined1 local_580;
  long local_538;
  long local_530;
  undefined1 local_520;
  long local_4d8;
  long local_4d0;
  undefined1 local_4c0;
  long local_478;
  long local_470;
  undefined1 local_460;
  long local_418;
  long local_410;
  undefined1 local_400;
  long local_3b8;
  long local_3b0;
  undefined1 local_3a0;
  long local_358;
  long local_350;
  undefined1 local_340;
  long local_2f8;
  long local_2f0;
  undefined1 local_2e0;
  long local_298;
  long local_290;
  undefined1 local_280;
  long local_238;
  long local_230;
  undefined1 local_220;
  long local_1d8;
  long local_1d0;
  undefined1 local_1c0;
  long local_178;
  long local_170;
  undefined1 local_160;
  long local_118;
  long local_110;
  undefined1 local_100;
  long local_b8;
  long local_b0;
  undefined1 local_a0;
  long local_58;
  long local_50;
  undefined1 auStack_48 [8];
  long local_40;
  
  lVar52 = lRam000000000010c3ab;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ca8 = param_8;
  local_ca0 = param_7;
  if (param_7 == (FastAllocator *)0x0) {
    local_ca0 = *(FastAllocator **)param_2[10];
    local_ca8 = *(MutexSys **)(in_FS_OFFSET + lRam000000000010c3ab);
    if (local_ca8 == (MutexSys *)0x0) {
      local_ca8 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(local_ca8);
      *(MutexSys **)(local_ca8 + 0x40) = local_ca8;
      *(undefined8 *)(local_ca8 + 8) = 0;
      *(undefined8 *)(local_ca8 + 0x48) = 0;
      *(undefined8 *)(local_ca8 + 0x50) = 0;
      *(undefined8 *)(local_ca8 + 0x58) = 0;
      *(undefined8 *)(local_ca8 + 0x60) = 0;
      *(undefined8 *)(local_ca8 + 0x68) = 0;
      *(undefined8 *)(local_ca8 + 0x70) = 0;
      *(MutexSys **)(local_ca8 + 0x80) = local_ca8;
      *(undefined8 *)(local_ca8 + 0x88) = 0;
      *(undefined8 *)(local_ca8 + 0x90) = 0;
      *(undefined8 *)(local_ca8 + 0x98) = 0;
      *(undefined8 *)(local_ca8 + 0xa0) = 0;
      *(undefined8 *)(local_ca8 + 0xa8) = 0;
      *(undefined8 *)(local_ca8 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar52) = local_ca8;
      embree::MutexSys::lock();
      local_bf8._0_4_ = SUB84(local_ca8,0);
      local_bf8._4_4_ = (undefined4)((ulong)local_ca8 >> 0x20);
      if (__MutexSys == _vtable) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,&local_bf8);
        this = (MutexSys *)CONCAT44(local_bf8._4_4_,(undefined4)local_bf8);
        if (this != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys(this);
          embree::alignedFree(this);
        }
      }
      else {
        *__MutexSys = local_ca8;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    local_ca8 = local_ca8 + 0x40;
  }
  if ((param_4 != '\0') && ((ulong)(param_3[0xb] - param_3[10]) <= param_2[6])) {
    if ((code *)**(undefined8 **)param_2[0x10] == Scene::BuildProgressMonitorInterface::operator())
    {
      embree::Scene::progressMonitor((double)(ulong)(param_3[0xb] - param_3[10]));
    }
    else {
      (*(code *)**(undefined8 **)param_2[0x10])();
    }
  }
  HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find
            ((PrimInfoRange *)&local_b88,*(ulong *)param_2[9]);
  uVar42 = param_3[0xb];
  uVar47 = param_3[10];
  auVar87 = *(undefined1 (*) [16])(param_3 + 2);
  auVar70 = *(undefined1 (*) [16])(param_3 + 4);
  uVar58 = uVar42 - uVar47;
  if (((uVar58 <= param_2[3]) || (lVar52 = *param_3, param_2[1] <= lVar52 + 8U)) ||
     ((uVar58 <= param_2[4] &&
      (fVar72 = auVar70._4_4_ - auVar87._4_4_, fVar73 = auVar70._8_4_ - auVar87._8_4_,
      fVar72 = (auVar70._0_4_ - auVar87._0_4_) * (fVar72 + fVar73) + fVar72 * fVar73,
      (float)((uVar58 - 1) + (1L << ((byte)param_2[2] & 0x3f)) >> ((byte)param_2[2] & 0x3f)) *
      fVar72 * *(float *)((long)param_2 + 0x2c) <=
      fVar72 * *(float *)(param_2 + 5) + *(float *)((long)param_2 + 0x2c) * local_b88)))) {
    puVar50 = (undefined8 *)(*(long *)param_2[9] + uVar42 * 0x20);
    puVar55 = (undefined8 *)(*(long *)param_2[9] + uVar47 * 0x20);
    if (puVar50 != puVar55) {
      lVar52 = uVar42 * 0x20 + uVar47 * -0x20;
      uVar42 = lVar52 >> 5;
      if (uVar42 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar55,puVar50,0xfffffffffffffffe);
      }
      else {
        lVar63 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar63 == 0; lVar63 = lVar63 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar55,puVar50,(long)(int)lVar63 * 2);
        if (0x200 < lVar52) {
          puVar62 = puVar55 + 0x40;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar55,puVar62)
          ;
          for (; puVar50 != puVar62; puVar62 = puVar62 + 4) {
            while( true ) {
              uVar48 = puVar62[2];
              uVar7 = puVar62[3];
              uVar8 = *puVar62;
              uVar9 = puVar62[1];
              uVar42 = CONCAT44(*(undefined4 *)((long)puVar62 + 0x1c),
                                *(undefined4 *)((long)puVar62 + 0xc));
              puVar55 = puVar62;
              if (CONCAT44(*(undefined4 *)((long)puVar62 + -4),
                           *(undefined4 *)((long)puVar62 + -0x14)) <= uVar42) break;
              do {
                puVar6 = puVar55;
                puVar55 = puVar6 + -4;
                *puVar6 = *puVar55;
                puVar6[1] = puVar6[-3];
                *(undefined1 (*) [16])(puVar6 + 2) = *(undefined1 (*) [16])(puVar6 + -2);
              } while (uVar42 < CONCAT44(*(undefined4 *)((long)puVar6 + -0x24),
                                         *(undefined4 *)((long)puVar6 + -0x34)));
              puVar62 = puVar62 + 4;
              *puVar55 = uVar8;
              puVar6[-3] = uVar9;
              puVar6[-2] = uVar48;
              puVar6[-1] = uVar7;
              if (puVar50 == puVar62) goto LAB_0010bdf0;
            }
            *puVar62 = uVar8;
            puVar62[1] = uVar9;
            puVar62[2] = uVar48;
            puVar62[3] = uVar7;
          }
          goto LAB_0010bdf0;
        }
      }
      std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar55,puVar50);
    }
LAB_0010bdf0:
    createLargeLeaf(param_1,param_2,param_3);
    goto LAB_0010be45;
  }
  plVar66 = (long *)param_2[9];
  if (uVar58 < 0xc00) {
    lVar63 = *plVar66;
    lVar60 = uVar42 * 0x20;
    pauVar49 = (undefined1 (*) [16])(lVar63 + uVar47 * 0x20);
    if (local_b84 == -1) {
      pauVar46 = (undefined1 (*) [16])(lVar63 + lVar60);
      if (pauVar46 != pauVar49) {
        lVar60 = lVar60 + uVar47 * -0x20;
        uVar42 = lVar60 >> 5;
        if (uVar42 == 0) {
          std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar49,pauVar46,0xfffffffffffffffe);
LAB_0010ebcc:
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar49,pauVar46);
        }
        else {
          lVar52 = 0x3f;
          if (uVar42 != 0) {
            for (; uVar42 >> lVar52 == 0; lVar52 = lVar52 + -1) {
            }
          }
          std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar49,pauVar46,(long)(int)lVar52 * 2);
          if (lVar60 < 0x201) goto LAB_0010ebcc;
          pauVar45 = pauVar49 + 0x20;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar49,pauVar45);
          for (; pauVar46 != pauVar45; pauVar45 = pauVar45 + 2) {
            uVar3 = *(undefined4 *)(pauVar45[1] + 0xc);
            uVar4 = *(undefined4 *)(*pauVar45 + 0xc);
            auVar87 = pauVar45[1];
            auVar70 = *pauVar45;
            uVar42 = CONCAT44(*(undefined4 *)(pauVar45[-1] + 0xc),
                              *(undefined4 *)(pauVar45[-2] + 0xc));
            pauVar49 = pauVar45;
            while (CONCAT44(uVar3,uVar4) < uVar42) {
              uVar48 = *(undefined8 *)(pauVar49[-2] + 8);
              *(undefined8 *)*pauVar49 = *(undefined8 *)pauVar49[-2];
              *(undefined8 *)(*pauVar49 + 8) = uVar48;
              pauVar49[1] = pauVar49[-1];
              uVar42 = CONCAT44(*(undefined4 *)(pauVar49[-3] + 0xc),
                                *(undefined4 *)(pauVar49[-4] + 0xc));
              pauVar49 = pauVar49 + -2;
            }
            *pauVar49 = auVar70;
            pauVar49[1] = auVar87;
          }
        }
        lVar63 = *plVar66;
        uVar47 = param_3[10];
        uVar42 = param_3[0xb];
        lVar52 = *param_3;
      }
      local_5f8[1] = uVar47 + uVar42 >> 1;
      if (uVar47 < local_5f8[1]) {
        local_608._8_4_ = _LC2;
        local_608._0_8_ = CONCAT44(_LC2,_LC2);
        local_608._12_4_ = _LC2;
        local_618._8_4_ = _LC4;
        local_618._0_8_ = CONCAT44(_LC4,_LC4);
        local_618._12_4_ = _LC4;
        local_628._8_4_ = _LC2;
        local_628._0_8_ = CONCAT44(_LC2,_LC2);
        local_628._12_4_ = _LC2;
        local_638._8_4_ = _LC4;
        local_638._0_8_ = CONCAT44(_LC4,_LC4);
        local_638._12_4_ = _LC4;
        pauVar49 = (undefined1 (*) [16])(uVar47 * 0x20 + lVar63);
        do {
          auVar102._0_4_ = *(float *)pauVar49[1] + *(float *)*pauVar49;
          auVar102._4_4_ = *(float *)(pauVar49[1] + 4) + *(float *)(*pauVar49 + 4);
          auVar102._8_4_ = *(float *)(pauVar49[1] + 8) + *(float *)(*pauVar49 + 8);
          auVar102._12_4_ = *(float *)(pauVar49[1] + 0xc) + *(float *)(*pauVar49 + 0xc);
          pauVar46 = pauVar49 + 2;
          local_638 = minps(local_638,*pauVar49);
          local_628 = maxps(local_628,pauVar49[1]);
          local_618 = minps(local_618,auVar102);
          local_608 = maxps(local_608,auVar102);
          pauVar49 = pauVar46;
        } while (pauVar46 != (undefined1 (*) [16])(local_5f8[1] * 0x20 + lVar63));
      }
      else {
        local_608._8_4_ = _LC2;
        local_608._0_8_ = CONCAT44(_LC2,_LC2);
        local_608._12_4_ = _LC2;
        local_618._8_4_ = _LC4;
        local_618._0_8_ = CONCAT44(_LC4,_LC4);
        local_618._12_4_ = _LC4;
        local_628._8_4_ = _LC2;
        local_628._0_8_ = CONCAT44(_LC2,_LC2);
        local_628._12_4_ = _LC2;
        local_638._8_4_ = _LC4;
        local_638._0_8_ = CONCAT44(_LC4,_LC4);
        local_638._12_4_ = _LC4;
      }
      auVar87._4_4_ = _LC2;
      auVar87._0_4_ = _LC2;
      local_d08._4_4_ = _LC4;
      local_d08._0_4_ = _LC4;
      auVar87._8_4_ = _LC2;
      local_d08._8_4_ = _LC4;
      auVar87._12_4_ = _LC2;
      local_d08._12_4_ = _LC4;
      local_5c8 = auVar87;
      local_5a8 = auVar87;
      local_5b8 = local_d08;
      local_d18 = local_d08;
      if (local_5f8[1] < uVar42) {
        pauVar49 = (undefined1 (*) [16])(local_5f8[1] * 0x20 + lVar63);
        do {
          auVar126._0_4_ = *(float *)pauVar49[1] + *(float *)*pauVar49;
          auVar126._4_4_ = *(float *)(pauVar49[1] + 4) + *(float *)(*pauVar49 + 4);
          auVar126._8_4_ = *(float *)(pauVar49[1] + 8) + *(float *)(*pauVar49 + 8);
          auVar126._12_4_ = *(float *)(pauVar49[1] + 0xc) + *(float *)(*pauVar49 + 0xc);
          pauVar46 = pauVar49 + 2;
          local_d18 = minps(local_d18,*pauVar49);
          local_5c8 = maxps(local_5c8,pauVar49[1]);
          local_5b8 = minps(local_5b8,auVar126);
          local_5a8 = maxps(local_5a8,auVar126);
          pauVar49 = pauVar46;
        } while (pauVar46 != (undefined1 (*) [16])(lVar63 + uVar42 * 0x20));
      }
    }
    else {
      uVar58 = (ulong)(uint)(1 << ((byte)local_b84 & 0x1f));
      auVar87._0_8_ = CONCAT44(_LC2,_LC2);
      auVar87._8_4_ = _LC2;
      auVar87._12_4_ = _LC2;
      local_5a8._8_4_ = _LC2;
      local_5a8._0_8_ = auVar87._0_8_;
      local_5a8._12_4_ = _LC2;
      uVar48 = (&mm_lookupmask_ps)[uVar58 * 2];
      uVar7 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar58 * 0x10);
      local_d08._0_8_ = CONCAT44(_LC4,_LC4);
      local_d08._8_4_ = _LC4;
      local_d08._12_4_ = _LC4;
      local_5b8._8_4_ = _LC4;
      local_5b8._0_8_ = local_d08._0_8_;
      local_5b8._12_4_ = _LC4;
      local_5c8._8_4_ = _LC2;
      local_5c8._0_8_ = auVar87._0_8_;
      local_5c8._12_4_ = _LC2;
      local_608._8_4_ = _LC2;
      local_608._0_8_ = auVar87._0_8_;
      local_608._12_4_ = _LC2;
      local_618._8_4_ = _LC4;
      local_618._0_8_ = local_d08._0_8_;
      local_618._12_4_ = _LC4;
      local_628._8_4_ = _LC2;
      local_628._0_8_ = auVar87._0_8_;
      local_628._12_4_ = _LC2;
      local_638._8_4_ = _LC4;
      local_638._0_8_ = local_d08._0_8_;
      local_638._12_4_ = _LC4;
      pauVar46 = (undefined1 (*) [16])(lVar63 + -0x20 + lVar60);
      pauVar45 = pauVar49;
      local_d18 = local_d08;
      for (; pauVar49 <= pauVar46; pauVar49 = pauVar49 + 2) {
        auVar70 = pauVar49[1];
        auVar85 = *pauVar49;
        auVar113._0_4_ = auVar70._0_4_ + auVar85._0_4_;
        auVar113._4_4_ = auVar70._4_4_ + auVar85._4_4_;
        auVar113._8_4_ = auVar70._8_4_ + auVar85._8_4_;
        auVar113._12_4_ = auVar70._12_4_ + auVar85._12_4_;
        local_d28._0_4_ = (undefined4)uVar48;
        local_d28._4_4_ = (undefined4)((ulong)uVar48 >> 0x20);
        fStack_d20 = (float)uVar7;
        fStack_d1c = (float)((ulong)uVar7 >> 0x20);
        auVar127._0_4_ =
             -(uint)((int)((auVar113._0_4_ - local_b68) * local_b58 + _LC26) < local_b80) &
             local_d28._0_4_;
        auVar127._4_4_ =
             -(uint)((int)((auVar113._4_4_ - fStack_b64) * fStack_b54 + _UNK_001171e4) < local_b80)
             & local_d28._4_4_;
        auVar127._8_4_ =
             -(uint)((int)((auVar113._8_4_ - fStack_b60) * fStack_b50 + _UNK_001171e8) < local_b80)
             & (uint)fStack_d20;
        auVar127._12_4_ =
             -(uint)((int)((auVar113._12_4_ - fStack_b5c) * fStack_b4c + _UNK_001171ec) < local_b80)
             & (uint)fStack_d1c;
        uVar59 = movmskps((int)pauVar45,auVar127);
        pauVar45 = (undefined1 (*) [16])(ulong)uVar59;
        if (uVar59 == 0) {
          while( true ) {
            auVar102 = pauVar46[1];
            auVar126 = *pauVar46;
            pauVar43 = pauVar46 + -2;
            auVar83._0_4_ = auVar102._0_4_ + auVar126._0_4_;
            auVar83._4_4_ = auVar102._4_4_ + auVar126._4_4_;
            auVar83._8_4_ = auVar102._8_4_ + auVar126._8_4_;
            auVar83._12_4_ = auVar102._12_4_ + auVar126._12_4_;
            auVar133._0_4_ =
                 -(uint)((int)((auVar83._0_4_ - local_b68) * local_b58 + _LC26) < local_b80) &
                 local_d28._0_4_;
            auVar133._4_4_ =
                 -(uint)((int)((auVar83._4_4_ - fStack_b64) * fStack_b54 + _UNK_001171e4) <
                        local_b80) & local_d28._4_4_;
            auVar133._8_4_ =
                 -(uint)((int)((auVar83._8_4_ - fStack_b60) * fStack_b50 + _UNK_001171e8) <
                        local_b80) & (uint)fStack_d20;
            auVar133._12_4_ =
                 -(uint)((int)((auVar83._12_4_ - fStack_b5c) * fStack_b4c + _UNK_001171ec) <
                        local_b80) & (uint)fStack_d1c;
            uVar59 = movmskps((int)pauVar45,auVar133);
            pauVar45 = (undefined1 (*) [16])(ulong)uVar59;
            if (uVar59 != 0) break;
            local_d18 = minps(local_d18,auVar126);
            local_5c8 = maxps(local_5c8,auVar102);
            local_5b8 = minps(local_5b8,auVar83);
            local_5a8 = maxps(local_5a8,auVar83);
            pauVar46 = pauVar43;
            if (pauVar43 < pauVar49) goto LAB_0010c013;
          }
          *pauVar49 = auVar126;
          local_638 = minps(local_638,auVar126);
          local_628 = maxps(local_628,auVar102);
          local_d18 = minps(local_d18,auVar85);
          local_5c8 = maxps(local_5c8,auVar70);
          local_608 = maxps(local_608,auVar83);
          local_5b8 = minps(local_5b8,auVar113);
          pauVar49[1] = pauVar46[1];
          local_618 = minps(local_618,auVar83);
          local_5a8 = maxps(local_5a8,auVar113);
          *pauVar46 = auVar85;
          pauVar46[1] = auVar70;
        }
        else {
          local_638 = minps(local_638,auVar85);
          local_628 = maxps(local_628,auVar70);
          local_618 = minps(local_618,auVar113);
          local_608 = maxps(local_608,auVar113);
          pauVar43 = pauVar46;
        }
        pauVar46 = pauVar43;
      }
LAB_0010c013:
      lVar52 = *param_3;
      local_5f8[1] = (long)pauVar49 - lVar63 >> 5;
    }
  }
  else {
    if (local_b84 != -1) {
      uVar58 = (ulong)(uint)(1 << ((byte)local_b84 & 0x1f));
      local_c38._0_4_ = _LC4;
      local_c38._4_4_ = _LC4;
      uStack_c30 = _LC4;
      uStack_c2c = _LC4;
      local_648 = (&mm_lookupmask_ps)[uVar58 * 2];
      uStack_640 = *(ulong *)(embree::MutexSys::MutexSys + uVar58 * 0x10);
      local_d08._4_4_ = _LC4;
      local_d08._0_4_ = _LC4;
      local_d08._8_4_ = _LC4;
      local_d08._12_4_ = _LC4;
      local_c50 = &local_b48;
      local_c48 = &local_648;
      local_c28._4_4_ = _LC2;
      local_c28._0_4_ = _LC2;
      fStack_c20 = _LC2;
      fStack_c1c = _LC2;
      local_c18 = _LC4;
      uStack_c14 = _LC4;
      uStack_c10 = _LC4;
      uStack_c0c = _LC4;
      local_c08._4_4_ = _LC2;
      local_c08._0_4_ = _LC2;
      fStack_c00 = _LC2;
      fStack_bfc = _LC2;
      local_bf8._0_4_ = _LC4;
      local_bf8._4_4_ = _LC4;
      uStack_bf0 = _LC4;
      uStack_bec = _LC4;
      local_be8._4_4_ = _LC2;
      local_be8._0_4_ = _LC2;
      uStack_be0._0_4_ = _LC2;
      uStack_be0._4_4_ = _LC2;
      local_bd8._0_4_ = _LC4;
      local_bd8._4_4_ = _LC4;
      uStack_bd0 = _LC4;
      uStack_bcc = _LC4;
      local_bc8._4_4_ = _LC2;
      local_bc8._0_4_ = _LC2;
      uStack_bc0._0_4_ = _LC2;
      uStack_bc0._4_4_ = _LC2;
      local_b48 = local_b80;
      iStack_b44 = local_b80;
      iStack_b40 = local_b80;
      iStack_b3c = local_b80;
      local_d28._4_4_ = _LC2;
      local_d28._0_4_ = _LC2;
      fStack_d20 = _LC2;
      fStack_d1c = _LC2;
      local_c58 = (PrimInfoRange *)&local_b88;
      local_5f8[1] = parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                               ((PrimRef *)*plVar66,uVar47,uVar42,&local_c59,(CentGeom *)&local_c38,
                                (CentGeom *)&local_bf8,
                                (_lambda_embree__PrimRef_const___1_ *)&local_c58,&local_c5a,
                                &local_c5b,0x80);
      local_d18._4_4_ = local_bf8._4_4_;
      local_d18._0_4_ = (undefined4)local_bf8;
      local_d18._12_4_ = uStack_bec;
      local_d18._8_4_ = uStack_bf0;
      local_638._4_4_ = local_c38._4_4_;
      local_638._0_4_ = (undefined4)local_c38;
      local_638._8_4_ = uStack_c30;
      local_638._12_4_ = uStack_c2c;
      lVar52 = *param_3;
      local_618._4_4_ = uStack_c14;
      local_618._0_4_ = local_c18;
      local_618._8_4_ = uStack_c10;
      local_618._12_4_ = uStack_c0c;
      local_5b8._4_4_ = local_bd8._4_4_;
      local_5b8._0_4_ = (undefined4)local_bd8;
      local_5b8._8_4_ = uStack_bd0;
      local_5b8._12_4_ = uStack_bcc;
      local_5c8 = _local_be8;
      auVar87 = _local_d28;
      local_5a8 = _local_bc8;
      local_608 = _local_c08;
      local_628 = _local_c28;
      goto LAB_0010c03d;
    }
    lVar63 = *plVar66;
    pauVar49 = (undefined1 (*) [16])(lVar63 + uVar42 * 0x20);
    pauVar46 = (undefined1 (*) [16])(lVar63 + uVar47 * 0x20);
    if (pauVar49 != pauVar46) {
      lVar52 = uVar42 * 0x20 + uVar47 * -0x20;
      uVar42 = lVar52 >> 5;
      if (uVar42 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar46,pauVar49,0xfffffffffffffffe);
LAB_0010edd4:
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar46,pauVar49)
        ;
      }
      else {
        lVar63 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar63 == 0; lVar63 = lVar63 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar46,pauVar49,(long)(int)lVar63 * 2);
        if (lVar52 < 0x201) goto LAB_0010edd4;
        pauVar45 = pauVar46 + 0x20;
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar46,pauVar45)
        ;
        for (; pauVar49 != pauVar45; pauVar45 = pauVar45 + 2) {
          uVar3 = *(undefined4 *)(pauVar45[1] + 0xc);
          uVar4 = *(undefined4 *)(*pauVar45 + 0xc);
          auVar87 = pauVar45[1];
          auVar70 = *pauVar45;
          uVar42 = CONCAT44(*(undefined4 *)(pauVar45[-1] + 0xc),*(undefined4 *)(pauVar45[-2] + 0xc))
          ;
          pauVar46 = pauVar45;
          while (CONCAT44(uVar3,uVar4) < uVar42) {
            uVar48 = *(undefined8 *)(pauVar46[-2] + 8);
            *(undefined8 *)*pauVar46 = *(undefined8 *)pauVar46[-2];
            *(undefined8 *)(*pauVar46 + 8) = uVar48;
            pauVar46[1] = pauVar46[-1];
            uVar42 = CONCAT44(*(undefined4 *)(pauVar46[-3] + 0xc),
                              *(undefined4 *)(pauVar46[-4] + 0xc));
            pauVar46 = pauVar46 + -2;
          }
          *pauVar46 = auVar70;
          pauVar46[1] = auVar87;
        }
      }
      lVar63 = *plVar66;
      uVar47 = param_3[10];
      uVar42 = param_3[0xb];
      lVar52 = *param_3;
    }
    local_5f8[1] = uVar47 + uVar42 >> 1;
    if (uVar47 < local_5f8[1]) {
      local_608._8_4_ = _LC2;
      local_608._0_8_ = CONCAT44(_LC2,_LC2);
      local_608._12_4_ = _LC2;
      local_618._8_4_ = _LC4;
      local_618._0_8_ = CONCAT44(_LC4,_LC4);
      local_618._12_4_ = _LC4;
      local_628._8_4_ = _LC2;
      local_628._0_8_ = CONCAT44(_LC2,_LC2);
      local_628._12_4_ = _LC2;
      local_638._8_4_ = _LC4;
      local_638._0_8_ = CONCAT44(_LC4,_LC4);
      local_638._12_4_ = _LC4;
      pauVar49 = (undefined1 (*) [16])(uVar47 * 0x20 + lVar63);
      do {
        auVar70._0_4_ = *(float *)pauVar49[1] + *(float *)*pauVar49;
        auVar70._4_4_ = *(float *)(pauVar49[1] + 4) + *(float *)(*pauVar49 + 4);
        auVar70._8_4_ = *(float *)(pauVar49[1] + 8) + *(float *)(*pauVar49 + 8);
        auVar70._12_4_ = *(float *)(pauVar49[1] + 0xc) + *(float *)(*pauVar49 + 0xc);
        pauVar46 = pauVar49 + 2;
        local_638 = minps(local_638,*pauVar49);
        local_628 = maxps(local_628,pauVar49[1]);
        local_618 = minps(local_618,auVar70);
        local_608 = maxps(local_608,auVar70);
        pauVar49 = pauVar46;
      } while (pauVar46 != (undefined1 (*) [16])(local_5f8[1] * 0x20 + lVar63));
    }
    else {
      local_608._8_4_ = _LC2;
      local_608._0_8_ = CONCAT44(_LC2,_LC2);
      local_608._12_4_ = _LC2;
      local_618._8_4_ = _LC4;
      local_618._0_8_ = CONCAT44(_LC4,_LC4);
      local_618._12_4_ = _LC4;
      local_628._8_4_ = _LC2;
      local_628._0_8_ = CONCAT44(_LC2,_LC2);
      local_628._12_4_ = _LC2;
      local_638._8_4_ = _LC4;
      local_638._0_8_ = CONCAT44(_LC4,_LC4);
      local_638._12_4_ = _LC4;
    }
    auVar87._4_4_ = _LC2;
    auVar87._0_4_ = _LC2;
    local_d08._4_4_ = _LC4;
    local_d08._0_4_ = _LC4;
    auVar87._8_4_ = _LC2;
    local_d08._8_4_ = _LC4;
    auVar87._12_4_ = _LC2;
    local_d08._12_4_ = _LC4;
    local_5c8 = auVar87;
    local_5a8 = auVar87;
    local_5b8 = local_d08;
    local_d18 = local_d08;
    if (local_5f8[1] < uVar42) {
      pauVar49 = (undefined1 (*) [16])(local_5f8[1] * 0x20 + lVar63);
      do {
        auVar85._0_4_ = *(float *)pauVar49[1] + *(float *)*pauVar49;
        auVar85._4_4_ = *(float *)(pauVar49[1] + 4) + *(float *)(*pauVar49 + 4);
        auVar85._8_4_ = *(float *)(pauVar49[1] + 8) + *(float *)(*pauVar49 + 8);
        auVar85._12_4_ = *(float *)(pauVar49[1] + 0xc) + *(float *)(*pauVar49 + 0xc);
        pauVar46 = pauVar49 + 2;
        local_d18 = minps(local_d18,*pauVar49);
        local_5c8 = maxps(local_5c8,pauVar49[1]);
        local_5b8 = minps(local_5b8,auVar85);
        local_5a8 = maxps(local_5a8,auVar85);
        pauVar49 = pauVar46;
      } while (pauVar46 != (undefined1 (*) [16])(lVar63 + uVar42 * 0x20));
    }
  }
LAB_0010c03d:
  local_c88 = (PrimInfoRange *)&local_b48;
  local_cb8 = &local_648;
  local_648 = lVar52 + 1;
  uStack_640 = uStack_640 & 0xffffffffffffff00;
  local_5e0 = 0;
  local_5d8 = local_d18;
  local_5f8[0] = uVar47;
  local_5f8[2] = local_648;
  local_598 = local_5f8[1];
  local_590 = uVar42;
  if (*param_2 < 3) {
    lVar52 = 0xc0;
    uVar42 = 2;
  }
  else {
    uVar42 = 2;
    plVar66 = &local_588;
    do {
      uVar53 = 0;
      uVar54 = 0xffffffffffffffff;
      pfVar44 = (float *)local_638;
      uVar47 = local_5f8[1];
      uVar58 = local_5f8[0];
      fVar72 = _LC2;
      while( true ) {
        if ((param_2[3] < uVar47 - uVar58) &&
           (fVar73 = (pfVar44[4] - *pfVar44) *
                     ((pfVar44[5] - pfVar44[1]) + (pfVar44[6] - pfVar44[2])) +
                     (pfVar44[5] - pfVar44[1]) * (pfVar44[6] - pfVar44[2]), fVar72 < fVar73)) {
          uVar54 = uVar53;
          fVar72 = fVar73;
        }
        uVar53 = uVar53 + 1;
        if (uVar53 == uVar42) break;
        uVar47 = *(ulong *)(pfVar44 + 0x2a);
        uVar58 = *(ulong *)(pfVar44 + 0x28);
        pfVar44 = pfVar44 + 0x18;
      }
      if (uVar54 == 0xffffffffffffffff) break;
      lVar52 = *param_3;
      lVar63 = uVar54 * 0x60;
      HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find(local_c88,*(ulong *)param_2[9]);
      plVar5 = (long *)param_2[9];
      uVar47 = local_5f8[uVar54 * 0xc + 1];
      uVar58 = local_5f8[uVar54 * 0xc];
      auVar68 = local_d08;
      auVar74 = local_d08;
      auVar121 = local_d08;
      auVar131 = local_d08;
      if (uVar47 - uVar58 < 0xc00) {
        lVar60 = *plVar5;
        lVar61 = uVar47 * 0x20;
        pauVar49 = (undefined1 (*) [16])(lVar60 + uVar58 * 0x20);
        if (iStack_b44 == -1) {
          pauVar46 = (undefined1 (*) [16])(lVar60 + lVar61);
          if (pauVar46 != pauVar49) {
            lVar61 = lVar61 + uVar58 * -0x20;
            uVar47 = lVar61 >> 5;
            if (uVar47 == 0) {
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar49,pauVar46,0xfffffffffffffffe);
            }
            else {
              lVar60 = 0x3f;
              if (uVar47 != 0) {
                for (; uVar47 >> lVar60 == 0; lVar60 = lVar60 + -1) {
                }
              }
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar49,pauVar46,(long)(int)lVar60 * 2);
              if (0x200 < lVar61) {
                pauVar45 = pauVar49 + 0x20;
                std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar49,pauVar45);
                for (; pauVar46 != pauVar45; pauVar45 = pauVar45 + 2) {
                  uVar3 = *(undefined4 *)(pauVar45[1] + 0xc);
                  uVar4 = *(undefined4 *)(*pauVar45 + 0xc);
                  uVar48 = *(undefined8 *)pauVar45[1];
                  uVar7 = *(undefined8 *)(pauVar45[1] + 8);
                  auVar70 = *pauVar45;
                  uVar47 = CONCAT44(*(undefined4 *)(pauVar45[-1] + 0xc),
                                    *(undefined4 *)(pauVar45[-2] + 0xc));
                  pauVar49 = pauVar45;
                  while (CONCAT44(uVar3,uVar4) < uVar47) {
                    uVar8 = *(undefined8 *)(pauVar49[-2] + 8);
                    *(undefined8 *)*pauVar49 = *(undefined8 *)pauVar49[-2];
                    *(undefined8 *)(*pauVar49 + 8) = uVar8;
                    pauVar49[1] = pauVar49[-1];
                    uVar47 = CONCAT44(*(undefined4 *)(pauVar49[-3] + 0xc),
                                      *(undefined4 *)(pauVar49[-4] + 0xc));
                    pauVar49 = pauVar49 + -2;
                  }
                  *pauVar49 = auVar70;
                  *(undefined8 *)pauVar49[1] = uVar48;
                  *(undefined8 *)(pauVar49[1] + 8) = uVar7;
                }
                lVar60 = *plVar5;
                uVar58 = local_5f8[uVar54 * 0xc];
                uVar47 = local_5f8[uVar54 * 0xc + 1];
                goto LAB_0010d384;
              }
            }
            std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar49,pauVar46);
            uVar58 = local_5f8[uVar54 * 0xc];
            lVar60 = *plVar5;
            uVar47 = local_5f8[uVar54 * 0xc + 1];
          }
LAB_0010d384:
          uVar53 = uVar58 + uVar47 >> 1;
          auVar70 = auVar87;
          auVar85 = auVar87;
          if (uVar58 < uVar53) {
            pauVar49 = (undefined1 (*) [16])(uVar58 * 0x20 + lVar60);
            do {
              auVar76._0_4_ = *(float *)pauVar49[1] + *(float *)*pauVar49;
              auVar76._4_4_ = *(float *)(pauVar49[1] + 4) + *(float *)(*pauVar49 + 4);
              auVar76._8_4_ = *(float *)(pauVar49[1] + 8) + *(float *)(*pauVar49 + 8);
              auVar76._12_4_ = *(float *)(pauVar49[1] + 0xc) + *(float *)(*pauVar49 + 0xc);
              pauVar46 = pauVar49 + 2;
              auVar68 = minps(auVar68,*pauVar49);
              auVar85 = maxps(auVar85,pauVar49[1]);
              auVar131 = minps(auVar131,auVar76);
              auVar70 = maxps(auVar70,auVar76);
              pauVar49 = pauVar46;
            } while (pauVar46 != (undefined1 (*) [16])(uVar53 * 0x20 + lVar60));
          }
          auVar102 = auVar87;
          local_d18 = auVar87;
          if (uVar53 < uVar47) {
            pauVar49 = (undefined1 (*) [16])(uVar53 * 0x20 + lVar60);
            do {
              auVar77._0_4_ = *(float *)pauVar49[1] + *(float *)*pauVar49;
              auVar77._4_4_ = *(float *)(pauVar49[1] + 4) + *(float *)(*pauVar49 + 4);
              auVar77._8_4_ = *(float *)(pauVar49[1] + 8) + *(float *)(*pauVar49 + 8);
              auVar77._12_4_ = *(float *)(pauVar49[1] + 0xc) + *(float *)(*pauVar49 + 0xc);
              pauVar46 = pauVar49 + 2;
              auVar74 = minps(auVar74,*pauVar49);
              local_d18 = maxps(local_d18,pauVar49[1]);
              auVar121 = minps(auVar121,auVar77);
              auVar102 = maxps(auVar102,auVar77);
              pauVar49 = pauVar46;
            } while (pauVar46 != (undefined1 (*) [16])(uVar47 * 0x20 + lVar60));
          }
        }
        else {
          uVar53 = (ulong)(uint)(1 << ((byte)iStack_b44 & 0x1f));
          iVar51 = 0x1180f8;
          uVar48 = (&mm_lookupmask_ps)[uVar53 * 2];
          uVar7 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar53 * 0x10);
          pauVar46 = (undefined1 (*) [16])(lVar60 + -0x20 + lVar61);
          auVar102 = auVar87;
          auVar70 = auVar87;
          auVar85 = auVar87;
          local_d18 = auVar87;
          for (; pauVar49 <= pauVar46; pauVar49 = pauVar49 + 2) {
            auVar126 = pauVar49[1];
            auVar113 = *pauVar49;
            auVar81._0_4_ = auVar126._0_4_ + auVar113._0_4_;
            auVar81._4_4_ = auVar126._4_4_ + auVar113._4_4_;
            auVar81._8_4_ = auVar126._8_4_ + auVar113._8_4_;
            auVar81._12_4_ = auVar126._12_4_ + auVar113._12_4_;
            local_d28._0_4_ = (undefined4)uVar48;
            local_d28._4_4_ = (undefined4)((ulong)uVar48 >> 0x20);
            fStack_d20 = (float)uVar7;
            fStack_d1c = (float)((ulong)uVar7 >> 0x20);
            auVar92._0_4_ =
                 -(uint)((int)((auVar81._0_4_ - local_b28) * local_b18 + _LC26) < iStack_b40) &
                 local_d28._0_4_;
            auVar92._4_4_ =
                 -(uint)((int)((auVar81._4_4_ - fStack_b24) * fStack_b14 + _UNK_001171e4) <
                        iStack_b40) & local_d28._4_4_;
            auVar92._8_4_ =
                 -(uint)((int)((auVar81._8_4_ - fStack_b20) * fStack_b10 + _UNK_001171e8) <
                        iStack_b40) & (uint)fStack_d20;
            auVar92._12_4_ =
                 -(uint)((int)((auVar81._12_4_ - fStack_b1c) * fStack_b0c + _UNK_001171ec) <
                        iStack_b40) & (uint)fStack_d1c;
            iVar51 = movmskps(iVar51,auVar92);
            if (iVar51 == 0) {
              while( true ) {
                auVar127 = pauVar46[1];
                auVar133 = *pauVar46;
                pauVar45 = pauVar46 + -2;
                auVar93._0_4_ = auVar127._0_4_ + auVar133._0_4_;
                auVar93._4_4_ = auVar127._4_4_ + auVar133._4_4_;
                auVar93._8_4_ = auVar127._8_4_ + auVar133._8_4_;
                auVar93._12_4_ = auVar127._12_4_ + auVar133._12_4_;
                auVar82._0_4_ =
                     -(uint)((int)((auVar93._0_4_ - local_b28) * local_b18 + _LC26) < iStack_b40) &
                     local_d28._0_4_;
                auVar82._4_4_ =
                     -(uint)((int)((auVar93._4_4_ - fStack_b24) * fStack_b14 + _UNK_001171e4) <
                            iStack_b40) & local_d28._4_4_;
                auVar82._8_4_ =
                     -(uint)((int)((auVar93._8_4_ - fStack_b20) * fStack_b10 + _UNK_001171e8) <
                            iStack_b40) & (uint)fStack_d20;
                auVar82._12_4_ =
                     -(uint)((int)((auVar93._12_4_ - fStack_b1c) * fStack_b0c + _UNK_001171ec) <
                            iStack_b40) & (uint)fStack_d1c;
                iVar51 = movmskps(0,auVar82);
                if (iVar51 != 0) break;
                auVar74 = minps(auVar74,auVar133);
                local_d18 = maxps(local_d18,auVar127);
                auVar121 = minps(auVar121,auVar93);
                auVar102 = maxps(auVar102,auVar93);
                pauVar46 = pauVar45;
                if (pauVar45 < pauVar49) goto LAB_0010c300;
              }
              *pauVar49 = auVar133;
              auVar85 = maxps(auVar85,auVar127);
              auVar131 = minps(auVar131,auVar93);
              local_d18 = maxps(local_d18,auVar126);
              auVar74 = minps(auVar74,auVar113);
              auVar68 = minps(auVar68,auVar133);
              auVar70 = maxps(auVar70,auVar93);
              auVar121 = minps(auVar121,auVar81);
              pauVar49[1] = pauVar46[1];
              auVar102 = maxps(auVar102,auVar81);
              *pauVar46 = auVar113;
              pauVar46[1] = auVar126;
            }
            else {
              auVar68 = minps(auVar68,auVar113);
              auVar85 = maxps(auVar85,auVar126);
              auVar131 = minps(auVar131,auVar81);
              auVar70 = maxps(auVar70,auVar81);
              pauVar45 = pauVar46;
            }
            pauVar46 = pauVar45;
          }
LAB_0010c300:
          uVar53 = (long)pauVar49 - lVar60 >> 5;
        }
      }
      else if (iStack_b44 == -1) {
        lVar60 = *plVar5;
        pauVar49 = (undefined1 (*) [16])(lVar60 + uVar47 * 0x20);
        pauVar46 = (undefined1 (*) [16])(lVar60 + uVar58 * 0x20);
        if (pauVar49 != pauVar46) {
          lVar60 = uVar47 * 0x20 + uVar58 * -0x20;
          uVar47 = lVar60 >> 5;
          if (uVar47 == 0) {
            std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar46,pauVar49,0xfffffffffffffffe);
          }
          else {
            lVar61 = 0x3f;
            if (uVar47 != 0) {
              for (; uVar47 >> lVar61 == 0; lVar61 = lVar61 + -1) {
              }
            }
            std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar46,pauVar49,(long)(int)lVar61 * 2);
            if (0x200 < lVar60) {
              pauVar45 = pauVar46 + 0x20;
              std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar46,pauVar45);
              for (; pauVar49 != pauVar45; pauVar45 = pauVar45 + 2) {
                uVar3 = *(undefined4 *)(pauVar45[1] + 0xc);
                uVar4 = *(undefined4 *)(*pauVar45 + 0xc);
                uVar48 = *(undefined8 *)pauVar45[1];
                uVar7 = *(undefined8 *)(pauVar45[1] + 8);
                auVar70 = *pauVar45;
                uVar47 = CONCAT44(*(undefined4 *)(pauVar45[-1] + 0xc),
                                  *(undefined4 *)(pauVar45[-2] + 0xc));
                pauVar46 = pauVar45;
                while (CONCAT44(uVar3,uVar4) < uVar47) {
                  uVar8 = *(undefined8 *)(pauVar46[-2] + 8);
                  *(undefined8 *)*pauVar46 = *(undefined8 *)pauVar46[-2];
                  *(undefined8 *)(*pauVar46 + 8) = uVar8;
                  pauVar46[1] = pauVar46[-1];
                  uVar47 = CONCAT44(*(undefined4 *)(pauVar46[-3] + 0xc),
                                    *(undefined4 *)(pauVar46[-4] + 0xc));
                  pauVar46 = pauVar46 + -2;
                }
                *pauVar46 = auVar70;
                *(undefined8 *)pauVar46[1] = uVar48;
                *(undefined8 *)(pauVar46[1] + 8) = uVar7;
              }
              lVar60 = *plVar5;
              uVar58 = local_5f8[uVar54 * 0xc];
              uVar47 = local_5f8[uVar54 * 0xc + 1];
              goto LAB_0010e475;
            }
          }
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar46,pauVar49);
          uVar58 = local_5f8[uVar54 * 0xc];
          lVar60 = *plVar5;
          uVar47 = local_5f8[uVar54 * 0xc + 1];
        }
LAB_0010e475:
        uVar53 = uVar58 + uVar47 >> 1;
        auVar70 = auVar87;
        auVar85 = auVar87;
        if (uVar58 < uVar53) {
          pauVar49 = (undefined1 (*) [16])(uVar58 * 0x20 + lVar60);
          do {
            auVar79._0_4_ = *(float *)pauVar49[1] + *(float *)*pauVar49;
            auVar79._4_4_ = *(float *)(pauVar49[1] + 4) + *(float *)(*pauVar49 + 4);
            auVar79._8_4_ = *(float *)(pauVar49[1] + 8) + *(float *)(*pauVar49 + 8);
            auVar79._12_4_ = *(float *)(pauVar49[1] + 0xc) + *(float *)(*pauVar49 + 0xc);
            pauVar46 = pauVar49 + 2;
            auVar68 = minps(auVar68,*pauVar49);
            auVar85 = maxps(auVar85,pauVar49[1]);
            auVar131 = minps(auVar131,auVar79);
            auVar70 = maxps(auVar70,auVar79);
            pauVar49 = pauVar46;
          } while (pauVar46 != (undefined1 (*) [16])(uVar53 * 0x20 + lVar60));
        }
        auVar102 = auVar87;
        local_d18 = auVar87;
        if (uVar53 < uVar47) {
          pauVar49 = (undefined1 (*) [16])(uVar53 * 0x20 + lVar60);
          do {
            auVar80._0_4_ = *(float *)pauVar49[1] + *(float *)*pauVar49;
            auVar80._4_4_ = *(float *)(pauVar49[1] + 4) + *(float *)(*pauVar49 + 4);
            auVar80._8_4_ = *(float *)(pauVar49[1] + 8) + *(float *)(*pauVar49 + 8);
            auVar80._12_4_ = *(float *)(pauVar49[1] + 0xc) + *(float *)(*pauVar49 + 0xc);
            pauVar46 = pauVar49 + 2;
            auVar74 = minps(auVar74,*pauVar49);
            local_d18 = maxps(local_d18,pauVar49[1]);
            auVar121 = minps(auVar121,auVar80);
            auVar102 = maxps(auVar102,auVar80);
            pauVar49 = pauVar46;
          } while (pauVar46 != (undefined1 (*) [16])(lVar60 + uVar47 * 0x20));
        }
      }
      else {
        uVar53 = (ulong)(uint)(1 << ((byte)iStack_b44 & 0x1f));
        local_c38._0_4_ = local_d08._0_4_;
        local_c38._4_4_ = local_d08._4_4_;
        uStack_c30 = local_d08._8_4_;
        uStack_c2c = local_d08._12_4_;
        local_b98 = (&mm_lookupmask_ps)[uVar53 * 2];
        uStack_b90 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar53 * 0x10);
        local_ba8 = iStack_b40;
        iStack_ba4 = iStack_b40;
        iStack_ba0 = iStack_b40;
        iStack_b9c = iStack_b40;
        local_c58 = local_c88;
        local_c50 = &local_ba8;
        local_c48 = &local_b98;
        _local_c28 = auVar87;
        local_c18 = (undefined4)local_c38;
        uStack_c14 = local_c38._4_4_;
        uStack_c10 = uStack_c30;
        uStack_c0c = uStack_c2c;
        _local_c08 = auVar87;
        local_bf8._0_4_ = (undefined4)local_c38;
        local_bf8._4_4_ = local_c38._4_4_;
        uStack_bf0 = uStack_c30;
        uStack_bec = uStack_c2c;
        _local_be8 = auVar87;
        local_bd8._0_4_ = (undefined4)local_c38;
        local_bd8._4_4_ = local_c38._4_4_;
        uStack_bd0 = uStack_c30;
        uStack_bcc = uStack_c2c;
        _local_bc8 = auVar87;
        uVar53 = parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                           ((PrimRef *)*plVar5,uVar58,uVar47,&local_c59,(CentGeom *)&local_c38,
                            (CentGeom *)&local_bf8,(_lambda_embree__PrimRef_const___1_ *)&local_c58,
                            &local_c5a,&local_c5b,0x80);
        auVar74._4_4_ = local_bf8._4_4_;
        auVar74._0_4_ = (undefined4)local_bf8;
        auVar74._8_4_ = uStack_bf0;
        auVar74._12_4_ = uStack_bec;
        auVar68._4_4_ = local_c38._4_4_;
        auVar68._0_4_ = (undefined4)local_c38;
        auVar68._8_4_ = uStack_c30;
        auVar68._12_4_ = uStack_c2c;
        auVar131._4_4_ = uStack_c14;
        auVar131._0_4_ = local_c18;
        auVar131._8_4_ = uStack_c10;
        auVar131._12_4_ = uStack_c0c;
        auVar121._4_4_ = local_bd8._4_4_;
        auVar121._0_4_ = (undefined4)local_bd8;
        auVar121._8_4_ = uStack_bd0;
        auVar121._12_4_ = uStack_bcc;
        auVar102 = _local_bc8;
        auVar70 = _local_c08;
        auVar85 = _local_c28;
        local_d18 = _local_be8;
      }
      uVar42 = uVar42 + 1;
      local_638[uVar54 * 0x60 + -8] = 0;
      (&local_648)[uVar54 * 0xc] = lVar52 + 1;
      local_5f8[uVar54 * 0xc] = uVar58;
      local_5f8[uVar54 * 0xc + 1] = uVar53;
      *(undefined1 (*) [16])(local_638 + lVar63) = auVar68;
      *(undefined1 (*) [16])(local_628 + lVar63) = auVar85;
      *(undefined1 (*) [16])(local_618 + lVar63) = auVar131;
      *(undefined1 (*) [16])(local_608 + lVar63) = auVar70;
      *plVar66 = lVar52 + 1;
      *(undefined1 *)(plVar66 + 1) = 0;
      *(undefined1 (*) [16])(plVar66 + 2) = auVar74;
      *(undefined1 (*) [16])(plVar66 + 4) = local_d18;
      *(undefined1 (*) [16])(plVar66 + 6) = auVar121;
      *(undefined1 (*) [16])(plVar66 + 8) = auVar102;
      plVar66[10] = uVar53;
      plVar66[0xb] = uVar47;
      plVar66 = plVar66 + 0xc;
    } while (uVar42 < *param_2);
    lVar52 = uVar42 * 0x60;
  }
  uVar47 = param_2[7];
  if (uVar47 < (ulong)(param_3[0xb] - param_3[10])) {
    uStack_640 = CONCAT71(uStack_640._1_7_,local_5f8[1] - local_5f8[0] <= uVar47);
    local_5e0 = local_590 - local_598 <= uVar47;
    if (((((uVar42 != 2) && (local_580 = (ulong)(local_530 - local_538) <= uVar47, uVar42 != 3)) &&
         (local_520 = (ulong)(local_4d0 - local_4d8) <= uVar47, uVar42 != 4)) &&
        ((((local_4c0 = (ulong)(local_470 - local_478) <= uVar47, uVar42 != 5 &&
           (local_460 = (ulong)(local_410 - local_418) <= uVar47, uVar42 != 6)) &&
          ((local_400 = (ulong)(local_3b0 - local_3b8) <= uVar47, uVar42 != 7 &&
           ((local_3a0 = (ulong)(local_350 - local_358) <= uVar47, uVar42 != 8 &&
            (local_340 = (ulong)(local_2f0 - local_2f8) <= uVar47, uVar42 != 9)))))) &&
         (local_2e0 = (ulong)(local_290 - local_298) <= uVar47, uVar42 != 10)))) &&
       ((((local_280 = (ulong)(local_230 - local_238) <= uVar47, uVar42 != 0xb &&
          (local_220 = (ulong)(local_1d0 - local_1d8) <= uVar47, uVar42 != 0xc)) &&
         (local_1c0 = (ulong)(local_170 - local_178) <= uVar47, uVar42 != 0xd)) &&
        ((local_160 = (ulong)(local_110 - local_118) <= uVar47, uVar42 != 0xe &&
         (local_100 = (ulong)(local_b0 - local_b8) <= uVar47, uVar42 == 0x10)))))) {
      local_a0 = (ulong)(local_50 - local_58) <= uVar47;
    }
  }
  if (lVar52 != 0) {
    uVar47 = (lVar52 >> 5) * -0x5555555555555555;
    puVar1 = (undefined1 *)((long)local_cb8 + lVar52);
    if (uVar47 == 0) {
      std::
      __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (local_cb8,puVar1,0xfffffffffffffffe);
    }
    else {
      lVar63 = 0x3f;
      if (uVar47 != 0) {
        for (; uVar47 >> lVar63 == 0; lVar63 = lVar63 + -1) {
        }
      }
      std::
      __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (local_cb8,puVar1,(long)(int)lVar63 * 2);
      if (0x600 < lVar52) {
        std::
        __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (local_cb8,auStack_48);
        puVar64 = auStack_48;
        do {
          puVar65 = puVar64 + 0x60;
          std::
          __unguarded_linear_insert<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                    (puVar64);
          puVar64 = puVar65;
        } while (puVar1 != puVar65);
        goto LAB_0010c72c;
      }
    }
    std::
    __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
              (local_cb8,puVar1);
  }
LAB_0010c72c:
  local_c38._0_4_ = 0xe0;
  local_c38._4_4_ = 0;
  lVar52 = *(long *)local_ca8;
  if (local_ca0 != *(FastAllocator **)(lVar52 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar52 + 8) != 0) {
      LOCK();
      plVar66 = (long *)(*(long *)(lVar52 + 8) + 0x118);
      *plVar66 = *plVar66 + *(long *)(lVar52 + 0xa8) + *(long *)(lVar52 + 0x68);
      UNLOCK();
      LOCK();
      plVar66 = (long *)(*(long *)(lVar52 + 8) + 0x120);
      *plVar66 = *plVar66 +
                 (((*(long *)(lVar52 + 0x98) + *(long *)(lVar52 + 0x58)) - *(long *)(lVar52 + 0x50))
                 - *(long *)(lVar52 + 0x90));
      UNLOCK();
      LOCK();
      plVar66 = (long *)(*(long *)(lVar52 + 8) + 0x128);
      *plVar66 = *plVar66 + *(long *)(lVar52 + 0xb0) + *(long *)(lVar52 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar52 + 0x48) = 0;
    *(undefined8 *)(lVar52 + 0x58) = 0;
    *(undefined8 *)(lVar52 + 0x50) = 0;
    *(undefined8 *)(lVar52 + 0x68) = 0;
    *(undefined8 *)(lVar52 + 0x70) = 0;
    *(undefined8 *)(lVar52 + 0x60) = 0;
    if (local_ca0 == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar52 + 0x88) = 0;
      uVar48 = 0;
      *(undefined8 *)(lVar52 + 0x98) = 0;
      *(undefined8 *)(lVar52 + 0x90) = 0;
      *(undefined8 *)(lVar52 + 0xa8) = 0;
      *(undefined8 *)(lVar52 + 0xb0) = 0;
    }
    else {
      uVar48 = *(undefined8 *)(local_ca0 + 0x10);
      *(undefined8 *)(lVar52 + 0x88) = 0;
      *(undefined8 *)(lVar52 + 0x98) = 0;
      *(undefined8 *)(lVar52 + 0x60) = uVar48;
      *(undefined8 *)(lVar52 + 0x90) = 0;
      *(undefined8 *)(lVar52 + 0xa8) = 0;
      *(undefined8 *)(lVar52 + 0xb0) = 0;
      *(undefined8 *)(lVar52 + 0xa0) = 0;
      uVar48 = *(undefined8 *)(local_ca0 + 0x10);
    }
    *(undefined8 *)(lVar52 + 0xa0) = uVar48;
    LOCK();
    *(FastAllocator **)(lVar52 + 8) = local_ca0;
    UNLOCK();
    local_bf8._0_4_ = (undefined4)lVar52;
    local_bf8._4_4_ = (undefined4)((ulong)lVar52 >> 0x20);
    embree::MutexSys::lock();
    plVar66 = *(long **)(local_ca0 + 0x138);
    if (plVar66 == *(long **)(local_ca0 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(local_ca0 + 0x130),plVar66,&local_bf8);
    }
    else {
      *plVar66 = lVar52;
      *(long *)(local_ca0 + 0x138) = *(long *)(local_ca0 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  lVar52 = *(long *)(local_ca8 + 0x10);
  *(long *)(local_ca8 + 0x28) = *(long *)(local_ca8 + 0x28) + 0xe0;
  uVar58 = (ulong)(-(int)lVar52 & 0xf);
  uVar47 = lVar52 + 0xe0 + uVar58;
  *(ulong *)(local_ca8 + 0x10) = uVar47;
  if (*(ulong *)(local_ca8 + 0x18) < uVar47) {
    uVar47 = *(ulong *)(local_ca8 + 0x20);
    *(long *)(local_ca8 + 0x10) = lVar52;
    if (uVar47 < 0x380) {
      puVar50 = (undefined8 *)FastAllocator::malloc(local_ca0,&local_c38,0x40,false);
    }
    else {
      local_bf8._0_4_ = (undefined4)uVar47;
      local_bf8._4_4_ = (undefined4)(uVar47 >> 0x20);
      puVar50 = (undefined8 *)FastAllocator::malloc(local_ca0,&local_bf8,0x40,true);
      *(undefined8 **)(local_ca8 + 8) = puVar50;
      *(long *)(local_ca8 + 0x30) =
           (*(long *)(local_ca8 + 0x18) + *(long *)(local_ca8 + 0x30)) - *(long *)(local_ca8 + 0x10)
      ;
      *(long *)(local_ca8 + 0x10) = 0xe0;
      *(ulong *)(local_ca8 + 0x18) = CONCAT44(local_bf8._4_4_,(undefined4)local_bf8);
      if (CONCAT44(local_bf8._4_4_,(undefined4)local_bf8) < 0xe0) {
        *(long *)(local_ca8 + 0x10) = 0;
        local_bf8._0_4_ = (undefined4)*(long *)(local_ca8 + 0x20);
        local_bf8._4_4_ = (undefined4)((ulong)*(long *)(local_ca8 + 0x20) >> 0x20);
        puVar50 = (undefined8 *)FastAllocator::malloc(local_ca0,&local_bf8,0x40,false);
        *(undefined8 **)(local_ca8 + 8) = puVar50;
        *(long *)(local_ca8 + 0x30) =
             (*(long *)(local_ca8 + 0x18) + *(long *)(local_ca8 + 0x30)) -
             *(long *)(local_ca8 + 0x10);
        *(long *)(local_ca8 + 0x10) = 0xe0;
        *(ulong *)(local_ca8 + 0x18) = CONCAT44(local_bf8._4_4_,(undefined4)local_bf8);
        if (CONCAT44(local_bf8._4_4_,(undefined4)local_bf8) < 0xe0) {
          puVar50 = (undefined8 *)0x0;
          *(long *)(local_ca8 + 0x10) = 0;
        }
      }
    }
  }
  else {
    *(ulong *)(local_ca8 + 0x30) = *(long *)(local_ca8 + 0x30) + uVar58;
    puVar50 = (undefined8 *)(*(long *)(local_ca8 + 8) + -0xe0 + uVar47);
  }
  *puVar50 = 8;
  puVar50[1] = 8;
  puVar50[2] = 8;
  puVar50[3] = 8;
  *(undefined1 (*) [16])(puVar50 + 0xc) = local_d08;
  *(undefined1 (*) [16])(puVar50 + 8) = local_d08;
  *(undefined1 (*) [16])(puVar50 + 4) = local_d08;
  *(undefined1 (*) [16])(puVar50 + 0xe) = auVar87;
  *(undefined1 (*) [16])(puVar50 + 10) = auVar87;
  *(undefined1 (*) [16])(puVar50 + 6) = auVar87;
  *(undefined1 (*) [16])(puVar50 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar50 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar50 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar50 + 0x1a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar50 + 0x16) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar50 + 0x12) = (undefined1  [16])0x0;
  if (param_2[6] < (ulong)(param_3[0xb] - param_3[10])) {
    local_c38._0_4_ = 0;
    local_c38._4_4_ = 0;
    local_bf8._0_4_ = (undefined4)uVar42;
    local_bf8._4_4_ = (undefined4)(uVar42 >> 0x20);
    uStack_bf0 = 0;
    uStack_bec = 0;
    uStack_be0 = local_c88;
    local_be8 = (undefined1  [8])0x1;
    uStack_bd0 = SUB84(param_2,0);
    uStack_bcc = (undefined4)((ulong)param_2 >> 0x20);
    local_bc8 = (undefined1  [8])&local_c38;
    local_bd8 = local_cb8;
    lVar52 = embree::TaskScheduler::thread();
    if (lVar52 == 0) {
      this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimI___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (this_00,(_lambda___1_ *)&local_bf8,(TaskGroupContext *)&local_c38,uVar42,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar52 + 0x40080)) goto LAB_0010ee76;
      lVar63 = *(long *)(lVar52 + 0xc00c0);
      uVar47 = lVar63 + 0x40 + (ulong)(-(int)lVar63 & 0x3f);
      if (0x80000 < uVar47) goto LAB_0010ee76;
      *(ulong *)(lVar52 + 0xc00c0) = uVar47;
      puVar55 = (undefined8 *)(lVar52 + 0x40080 + uVar47);
      *puVar55 = &PTR_execute_00117108;
      puVar55[1] = CONCAT44(local_bf8._4_4_,(undefined4)local_bf8);
      puVar55[2] = CONCAT44(uStack_bec,uStack_bf0);
      puVar55[3] = local_be8;
      puVar55[4] = uStack_be0;
      puVar55[5] = local_bd8;
      puVar55[6] = CONCAT44(uStack_bcc,uStack_bd0);
      puVar55[7] = local_bc8;
      lVar61 = *(long *)(lVar52 + 0x40080) * 0x40;
      piVar2 = (int *)(lVar52 + 0x40 + lVar61);
      lVar60 = *(long *)(lVar52 + 0xc0100);
      *(undefined4 *)(lVar52 + 0x44 + lVar61) = 1;
      *(undefined1 *)(lVar52 + 0x48 + lVar61) = 1;
      lVar61 = lVar61 + lVar52;
      *(undefined8 **)(lVar61 + 0x50) = puVar55;
      *(long *)(lVar61 + 0x58) = lVar60;
      *(TaskGroupContext **)(lVar61 + 0x60) = (TaskGroupContext *)&local_c38;
      *(long *)(lVar61 + 0x68) = lVar63;
      *(ulong *)(lVar61 + 0x70) = uVar42;
      if (lVar60 != 0) {
        LOCK();
        *(int *)(lVar60 + 4) = *(int *)(lVar60 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar2 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar52 + 0x40080) = *(long *)(lVar52 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar52 + 0x40080) - 1U <= *(ulong *)(lVar52 + 0x40040)) {
        LOCK();
        *(long *)(lVar52 + 0x40040) = *(long *)(lVar52 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    uVar59 = _LC16;
    uVar4 = _LC20;
    uVar3 = _LC18;
    fVar72 = _LC11;
    if (CONCAT44(local_c38._4_4_,(undefined4)local_c38) != 0) {
      local_bf8._0_4_ = (undefined4)local_c38;
      local_bf8._4_4_ = local_c38._4_4_;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_bf8);
LAB_0010ee76:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pfVar44 = (float *)param_2[0xc];
    puVar55 = (undefined8 *)((ulong)puVar50 & 0xfffffffffffffff0);
    *puVar55 = CONCAT44(iStack_b44,local_b48);
    uVar41 = _LC15;
    fVar40 = _LC23;
    fVar73 = *pfVar44;
    auVar120._4_4_ = uVar4;
    auVar120._0_4_ = uVar4;
    auVar120._8_4_ = uVar4;
    auVar120._12_4_ = uVar4;
    auVar123._4_4_ = uVar3;
    auVar123._0_4_ = uVar3;
    auVar123._8_4_ = uVar3;
    auVar123._12_4_ = uVar3;
    fVar99 = fVar72 / (pfVar44[1] - fVar73);
    fVar67 = (float)((uint)fVar73 ^ uVar59) * fVar99;
    fVar99 = (fVar72 - fVar73) * fVar99;
    fVar106 = fVar72 - fVar67;
    fVar73 = fVar72 - fVar99;
    auVar103._0_4_ = local_b28 * fVar106 + fStack_b08 * fVar67;
    auVar103._4_4_ = fStack_b24 * fVar106 + fStack_b04 * fVar67;
    auVar103._8_4_ = fStack_b20 * fVar106 + fStack_b00 * fVar67;
    auVar103._12_4_ = fStack_b1c * fVar106 + fStack_afc * fVar67;
    auVar89._0_4_ = fVar106 * auStack_b38._0_4_ + fVar67 * local_b18;
    auVar89._4_4_ = fVar106 * auStack_b38._4_4_ + fVar67 * fStack_b14;
    auVar89._8_4_ = fVar106 * auStack_b38._8_4_ + fVar67 * fStack_b10;
    auVar89._12_4_ = fVar106 * auStack_b38._12_4_ + fVar67 * fStack_b0c;
    auVar102 = maxps(auVar103,auVar123);
    auVar85 = minps(auVar89,auVar120);
    auVar108._4_4_ = fStack_b24 * fVar73 + fStack_b04 * fVar99;
    auVar108._0_4_ = local_b28 * fVar73 + fStack_b08 * fVar99;
    auVar71._0_4_ = fVar73 * auStack_b38._0_4_ + fVar99 * local_b18;
    auVar71._4_4_ = fVar73 * auStack_b38._4_4_ + fVar99 * fStack_b14;
    auVar71._8_4_ = fVar73 * auStack_b38._8_4_ + fVar99 * fStack_b10;
    auVar71._12_4_ = fVar73 * auStack_b38._12_4_ + fVar99 * fStack_b0c;
    auVar108._8_4_ = fStack_b20 * fVar73 + fStack_b00 * fVar99;
    auVar108._12_4_ = fStack_b1c * fVar73 + fStack_afc * fVar99;
    auVar126 = maxps(auVar108,auVar123);
    auVar70 = minps(auVar71,auVar120);
    fVar99 = auVar102._0_4_ + (float)((uint)auVar102._0_4_ & _LC15) * _LC23;
    fVar97 = auVar102._4_4_ + (float)((uint)auVar102._4_4_ & _LC15) * _LC23;
    fVar98 = auVar102._8_4_ + (float)((uint)auVar102._8_4_ & _LC15) * _LC23;
    fVar100 = auVar85._0_4_ - (float)((uint)auVar85._0_4_ & _LC15) * _LC23;
    fVar104 = auVar85._4_4_ - (float)((uint)auVar85._4_4_ & _LC15) * _LC23;
    fVar105 = auVar85._8_4_ - (float)((uint)auVar85._8_4_ & _LC15) * _LC23;
    fVar73 = (float)((uint)auVar126._0_4_ & _LC15) * _LC23;
    fVar67 = (float)((uint)auVar126._4_4_ & _LC15) * _LC23;
    fVar106 = (float)((uint)auVar126._8_4_ & _LC15) * _LC23;
    fVar124 = (float)((uint)auVar70._0_4_ & _LC15) * _LC23;
    fVar129 = (float)((uint)auVar70._4_4_ & _LC15) * _LC23;
    fVar130 = (float)((uint)auVar70._8_4_ & _LC15) * _LC23;
    *(float *)(puVar55 + 6) = fVar99;
    *(float *)(puVar55 + 4) = fVar100;
    *(float *)(puVar55 + 8) = fVar104;
    auVar113 = minps(local_d08,auStack_b38);
    *(float *)(puVar55 + 0xc) = fVar105;
    *(float *)(puVar55 + 10) = fVar97;
    *(float *)(puVar55 + 0xe) = fVar98;
    *(float *)(puVar55 + 0x10) = (auVar70._0_4_ - fVar124) - fVar100;
    *(float *)(puVar55 + 0x18) = (auVar70._8_4_ - fVar130) - fVar105;
    *(float *)(puVar55 + 0x12) = (fVar73 + auVar126._0_4_) - fVar99;
    *(float *)(puVar55 + 0x14) = (auVar70._4_4_ - fVar129) - fVar104;
    *(float *)(puVar55 + 0x16) = (fVar67 + auVar126._4_4_) - fVar97;
    *(float *)(puVar55 + 0x1a) = (fVar106 + auVar126._8_4_) - fVar98;
    auVar11._4_4_ = fStack_b24;
    auVar11._0_4_ = local_b28;
    auVar11._8_4_ = fStack_b20;
    auVar11._12_4_ = fStack_b1c;
    auVar102 = maxps(auVar87,auVar11);
    auVar13._4_4_ = fStack_b14;
    auVar13._0_4_ = local_b18;
    auVar13._8_4_ = fStack_b10;
    auVar13._12_4_ = fStack_b0c;
    auVar85 = minps(local_d08,auVar13);
    auVar15._4_4_ = fStack_b04;
    auVar15._0_4_ = fStack_b08;
    auVar15._8_4_ = fStack_b00;
    auVar15._12_4_ = fStack_afc;
    auVar70 = maxps(auVar87,auVar15);
    puVar55[1] = uStack_af8;
    fVar73 = *pfVar44;
    fVar99 = fVar72 / (pfVar44[1] - fVar73);
    fVar67 = (float)((uint)fVar73 ^ uVar59) * fVar99;
    fVar99 = (fVar72 - fVar73) * fVar99;
    fVar106 = fVar72 - fVar67;
    fVar73 = fVar72 - fVar99;
    auVar135._0_4_ = fStack_ad8 * fVar106 + fStack_ab8 * fVar67;
    auVar135._4_4_ = fStack_ad4 * fVar106 + fStack_ab4 * fVar67;
    auVar135._8_4_ = fStack_ad0 * fVar106 + fStack_ab0 * fVar67;
    auVar135._12_4_ = fStack_acc * fVar106 + fStack_aac * fVar67;
    auVar109._0_4_ = fVar106 * fStack_ae8 + fVar67 * fStack_ac8;
    auVar109._4_4_ = fVar106 * fStack_ae4 + fVar67 * fStack_ac4;
    auVar109._8_4_ = fVar106 * fStack_ae0 + fVar67 * fStack_ac0;
    auVar109._12_4_ = fVar106 * fStack_adc + fVar67 * fStack_abc;
    auVar133 = maxps(auVar135,auVar123);
    auVar126 = minps(auVar109,auVar120);
    auVar116._0_4_ = fStack_ad8 * fVar73 + fStack_ab8 * fVar99;
    auVar116._4_4_ = fStack_ad4 * fVar73 + fStack_ab4 * fVar99;
    auVar116._8_4_ = fStack_ad0 * fVar73 + fStack_ab0 * fVar99;
    auVar116._12_4_ = fStack_acc * fVar73 + fStack_aac * fVar99;
    auVar90._0_4_ = fVar73 * fStack_ae8 + fVar99 * fStack_ac8;
    auVar90._4_4_ = fVar73 * fStack_ae4 + fVar99 * fStack_ac4;
    auVar90._8_4_ = fVar73 * fStack_ae0 + fVar99 * fStack_ac0;
    auVar90._12_4_ = fVar73 * fStack_adc + fVar99 * fStack_abc;
    auVar127 = maxps(auVar116,auVar123);
    auVar87 = minps(auVar90,auVar120);
    fVar73 = (float)((uint)auVar133._0_4_ & uVar41) * fVar40 + auVar133._0_4_;
    fVar67 = (float)((uint)auVar133._4_4_ & uVar41) * fVar40 + auVar133._4_4_;
    fVar106 = (float)((uint)auVar133._8_4_ & uVar41) * fVar40 + auVar133._8_4_;
    *(float *)((long)puVar55 + 0x34) = fVar73;
    fVar99 = auVar126._0_4_ - (float)((uint)auVar126._0_4_ & uVar41) * fVar40;
    fVar97 = auVar126._4_4_ - (float)((uint)auVar126._4_4_ & uVar41) * fVar40;
    fVar98 = auVar126._8_4_ - (float)((uint)auVar126._8_4_ & uVar41) * fVar40;
    *(float *)((long)puVar55 + 0x24) = fVar99;
    *(float *)((long)puVar55 + 0x84) =
         (auVar87._0_4_ - (float)((uint)auVar87._0_4_ & uVar41) * fVar40) - fVar99;
    *(float *)((long)puVar55 + 0x94) =
         ((float)((uint)auVar127._0_4_ & uVar41) * fVar40 + auVar127._0_4_) - fVar73;
    *(float *)((long)puVar55 + 0x44) = fVar97;
    *(float *)((long)puVar55 + 0x54) = fVar67;
    *(float *)((long)puVar55 + 100) = fVar98;
    *(float *)((long)puVar55 + 0x74) = fVar106;
    *(float *)((long)puVar55 + 0xa4) =
         (auVar87._4_4_ - (float)((uint)auVar87._4_4_ & uVar41) * fVar40) - fVar97;
    *(float *)((long)puVar55 + 0xc4) =
         (auVar87._8_4_ - (float)((uint)auVar87._8_4_ & uVar41) * fVar40) - fVar98;
    *(float *)((long)puVar55 + 0xb4) =
         ((float)((uint)auVar127._4_4_ & uVar41) * fVar40 + auVar127._4_4_) - fVar67;
    *(float *)((long)puVar55 + 0xd4) =
         ((float)((uint)auVar127._8_4_ & uVar41) * fVar40 + auVar127._8_4_) - fVar106;
    auVar17._4_4_ = fStack_ae4;
    auVar17._0_4_ = fStack_ae8;
    auVar17._8_4_ = fStack_ae0;
    auVar17._12_4_ = fStack_adc;
    auVar126 = minps(auVar113,auVar17);
    auVar19._4_4_ = fStack_ad4;
    auVar19._0_4_ = fStack_ad8;
    auVar19._8_4_ = fStack_ad0;
    auVar19._12_4_ = fStack_acc;
    auVar102 = maxps(auVar102,auVar19);
    auVar21._4_4_ = fStack_ac4;
    auVar21._0_4_ = fStack_ac8;
    auVar21._8_4_ = fStack_ac0;
    auVar21._12_4_ = fStack_abc;
    auVar85 = minps(auVar85,auVar21);
    auVar23._4_4_ = fStack_ab4;
    auVar23._0_4_ = fStack_ab8;
    auVar23._8_4_ = fStack_ab0;
    auVar23._12_4_ = fStack_aac;
    auVar87 = maxps(auVar70,auVar23);
    if (uVar42 != 2) {
      puVar55[2] = uStack_aa8;
      fVar73 = *pfVar44;
      fVar99 = fVar72 / (pfVar44[1] - fVar73);
      fVar67 = (float)((uint)fVar73 ^ uVar59) * fVar99;
      fVar99 = (fVar72 - fVar73) * fVar99;
      fVar106 = fVar72 - fVar67;
      fVar73 = fVar72 - fVar99;
      auVar136._0_4_ = fStack_a88 * fVar106 + fStack_a68 * fVar67;
      auVar136._4_4_ = fStack_a84 * fVar106 + fStack_a64 * fVar67;
      auVar136._8_4_ = fStack_a80 * fVar106 + fStack_a60 * fVar67;
      auVar136._12_4_ = fStack_a7c * fVar106 + fStack_a5c * fVar67;
      auVar110._0_4_ = fVar106 * fStack_a98 + fVar67 * fStack_a78;
      auVar110._4_4_ = fVar106 * fStack_a94 + fVar67 * fStack_a74;
      auVar110._8_4_ = fVar106 * fStack_a90 + fVar67 * fStack_a70;
      auVar110._12_4_ = fVar106 * fStack_a8c + fVar67 * fStack_a6c;
      auVar133 = maxps(auVar136,auVar123);
      auVar113 = minps(auVar110,auVar120);
      auVar117._0_4_ = fStack_a88 * fVar73 + fStack_a68 * fVar99;
      auVar117._4_4_ = fStack_a84 * fVar73 + fStack_a64 * fVar99;
      auVar117._8_4_ = fStack_a80 * fVar73 + fStack_a60 * fVar99;
      auVar117._12_4_ = fStack_a7c * fVar73 + fStack_a5c * fVar99;
      auVar91._0_4_ = fVar73 * fStack_a98 + fVar99 * fStack_a78;
      auVar91._4_4_ = fVar73 * fStack_a94 + fVar99 * fStack_a74;
      auVar91._8_4_ = fVar73 * fStack_a90 + fVar99 * fStack_a70;
      auVar91._12_4_ = fVar73 * fStack_a8c + fVar99 * fStack_a6c;
      auVar127 = maxps(auVar117,auVar123);
      auVar70 = minps(auVar91,auVar120);
      fVar73 = (float)((uint)auVar133._0_4_ & uVar41) * fVar40 + auVar133._0_4_;
      fVar67 = (float)((uint)auVar133._4_4_ & uVar41) * fVar40 + auVar133._4_4_;
      fVar106 = (float)((uint)auVar133._8_4_ & uVar41) * fVar40 + auVar133._8_4_;
      *(float *)(puVar55 + 7) = fVar73;
      fVar99 = auVar113._0_4_ - (float)((uint)auVar113._0_4_ & uVar41) * fVar40;
      fVar97 = auVar113._4_4_ - (float)((uint)auVar113._4_4_ & uVar41) * fVar40;
      fVar98 = auVar113._8_4_ - (float)((uint)auVar113._8_4_ & uVar41) * fVar40;
      *(float *)(puVar55 + 5) = fVar99;
      *(float *)(puVar55 + 0x11) =
           (auVar70._0_4_ - (float)((uint)auVar70._0_4_ & uVar41) * fVar40) - fVar99;
      *(float *)(puVar55 + 0x13) =
           ((float)((uint)auVar127._0_4_ & uVar41) * fVar40 + auVar127._0_4_) - fVar73;
      *(float *)(puVar55 + 9) = fVar97;
      *(float *)(puVar55 + 0xb) = fVar67;
      *(float *)(puVar55 + 0xd) = fVar98;
      *(float *)(puVar55 + 0xf) = fVar106;
      *(float *)(puVar55 + 0x15) =
           (auVar70._4_4_ - (float)((uint)auVar70._4_4_ & uVar41) * fVar40) - fVar97;
      *(float *)(puVar55 + 0x19) =
           (auVar70._8_4_ - (float)((uint)auVar70._8_4_ & uVar41) * fVar40) - fVar98;
      *(float *)(puVar55 + 0x17) =
           ((float)((uint)auVar127._4_4_ & uVar41) * fVar40 + auVar127._4_4_) - fVar67;
      *(float *)(puVar55 + 0x1b) =
           ((float)((uint)auVar127._8_4_ & uVar41) * fVar40 + auVar127._8_4_) - fVar106;
      auVar25._4_4_ = fStack_a94;
      auVar25._0_4_ = fStack_a98;
      auVar25._8_4_ = fStack_a90;
      auVar25._12_4_ = fStack_a8c;
      auVar126 = minps(auVar126,auVar25);
      auVar27._4_4_ = fStack_a84;
      auVar27._0_4_ = fStack_a88;
      auVar27._8_4_ = fStack_a80;
      auVar27._12_4_ = fStack_a7c;
      auVar102 = maxps(auVar102,auVar27);
      auVar29._4_4_ = fStack_a74;
      auVar29._0_4_ = fStack_a78;
      auVar29._8_4_ = fStack_a70;
      auVar29._12_4_ = fStack_a6c;
      auVar85 = minps(auVar85,auVar29);
      auVar31._4_4_ = fStack_a64;
      auVar31._0_4_ = fStack_a68;
      auVar31._8_4_ = fStack_a60;
      auVar31._12_4_ = fStack_a5c;
      auVar87 = maxps(auVar87,auVar31);
      if (uVar42 != 3) {
        puVar55[3] = uStack_a58;
        fVar73 = *pfVar44;
        fVar106 = fVar72 / (pfVar44[1] - fVar73);
        fVar67 = (float)(uVar59 ^ (uint)fVar73) * fVar106;
        fVar106 = (fVar72 - fVar73) * fVar106;
        fVar73 = fVar72 - fVar67;
        fVar72 = fVar72 - fVar106;
        auVar128._0_4_ = fStack_a18 * fVar67 + fStack_a38 * fVar73;
        auVar128._4_4_ = fStack_a14 * fVar67 + fStack_a34 * fVar73;
        auVar128._8_4_ = fStack_a10 * fVar67 + fStack_a30 * fVar73;
        auVar128._12_4_ = fStack_a0c * fVar67 + fStack_a2c * fVar73;
        auVar118._0_4_ = fVar67 * fStack_a28 + fVar73 * fStack_a48;
        auVar118._4_4_ = fVar67 * fStack_a24 + fVar73 * fStack_a44;
        auVar118._8_4_ = fVar67 * fStack_a20 + fVar73 * fStack_a40;
        auVar118._12_4_ = fVar67 * fStack_a1c + fVar73 * fStack_a3c;
        auVar133 = maxps(auVar128,auVar123);
        auVar127 = minps(auVar118,auVar120);
        auVar111._0_4_ = fStack_a18 * fVar106 + fStack_a38 * fVar72;
        auVar111._4_4_ = fStack_a14 * fVar106 + fStack_a34 * fVar72;
        auVar111._8_4_ = fStack_a10 * fVar106 + fStack_a30 * fVar72;
        auVar111._12_4_ = fStack_a0c * fVar106 + fStack_a2c * fVar72;
        auVar78._0_4_ = fVar72 * fStack_a48 + fVar106 * fStack_a28;
        auVar78._4_4_ = fVar72 * fStack_a44 + fVar106 * fStack_a24;
        auVar78._8_4_ = fVar72 * fStack_a40 + fVar106 * fStack_a20;
        auVar78._12_4_ = fVar72 * fStack_a3c + fVar106 * fStack_a1c;
        auVar113 = maxps(auVar111,auVar123);
        auVar70 = minps(auVar78,auVar120);
        fVar72 = (float)((uint)auVar133._0_4_ & uVar41) * fVar40 + auVar133._0_4_;
        fVar73 = (float)((uint)auVar133._4_4_ & uVar41) * fVar40 + auVar133._4_4_;
        fVar67 = (float)((uint)auVar133._8_4_ & uVar41) * fVar40 + auVar133._8_4_;
        *(float *)((long)puVar55 + 0x3c) = fVar72;
        fVar106 = auVar127._0_4_ - (float)((uint)auVar127._0_4_ & uVar41) * fVar40;
        fVar99 = auVar127._4_4_ - (float)((uint)auVar127._4_4_ & uVar41) * fVar40;
        fVar97 = auVar127._8_4_ - (float)((uint)auVar127._8_4_ & uVar41) * fVar40;
        *(float *)((long)puVar55 + 0x2c) = fVar106;
        *(float *)((long)puVar55 + 0x4c) = fVar99;
        *(float *)((long)puVar55 + 0x5c) = fVar73;
        *(float *)((long)puVar55 + 0x7c) = fVar67;
        *(float *)((long)puVar55 + 0x6c) = fVar97;
        *(float *)((long)puVar55 + 0x8c) =
             (auVar70._0_4_ - (float)(uVar41 & (uint)auVar70._0_4_) * fVar40) - fVar106;
        *(float *)((long)puVar55 + 0xac) =
             (auVar70._4_4_ - (float)(uVar41 & (uint)auVar70._4_4_) * fVar40) - fVar99;
        *(float *)((long)puVar55 + 0xcc) =
             (auVar70._8_4_ - (float)(uVar41 & (uint)auVar70._8_4_) * fVar40) - fVar97;
        *(float *)((long)puVar55 + 0x9c) =
             ((float)((uint)auVar113._0_4_ & uVar41) * fVar40 + auVar113._0_4_) - fVar72;
        *(float *)((long)puVar55 + 0xbc) =
             ((float)((uint)auVar113._4_4_ & uVar41) * fVar40 + auVar113._4_4_) - fVar73;
        *(float *)((long)puVar55 + 0xdc) =
             ((float)((uint)auVar113._8_4_ & uVar41) * fVar40 + auVar113._8_4_) - fVar67;
        auVar33._4_4_ = fStack_a44;
        auVar33._0_4_ = fStack_a48;
        auVar33._8_4_ = fStack_a40;
        auVar33._12_4_ = fStack_a3c;
        auVar126 = minps(auVar126,auVar33);
        auVar35._4_4_ = fStack_a34;
        auVar35._0_4_ = fStack_a38;
        auVar35._8_4_ = fStack_a30;
        auVar35._12_4_ = fStack_a2c;
        auVar102 = maxps(auVar102,auVar35);
        auVar37._4_4_ = fStack_a24;
        auVar37._0_4_ = fStack_a28;
        auVar37._8_4_ = fStack_a20;
        auVar37._12_4_ = fStack_a1c;
        auVar85 = minps(auVar85,auVar37);
        auVar39._4_4_ = fStack_a14;
        auVar39._0_4_ = fStack_a18;
        auVar39._8_4_ = fStack_a10;
        auVar39._12_4_ = fStack_a0c;
        auVar87 = maxps(auVar87,auVar39);
      }
    }
    *(ulong *)param_1 = (ulong)puVar50 | 1;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar126;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar102;
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar85;
    *(undefined1 (*) [16])(param_1 + 0x40) = auVar87;
  }
  else {
    pPVar56 = local_c88;
    do {
      pPVar57 = pPVar56 + 0x50;
      recurse(&local_bf8,param_2,local_cb8,0);
      uVar59 = _LC16;
      uVar3 = _LC20;
      fVar72 = _LC11;
      *(undefined1 (*) [8])(pPVar56 + 0x10) = local_be8;
      *(undefined8 *)(pPVar56 + 0x18) = uStack_be0;
      *(ulong *)pPVar56 = CONCAT44(local_bf8._4_4_,(undefined4)local_bf8);
      *(long **)(pPVar56 + 0x20) = local_bd8;
      *(ulong *)(pPVar56 + 0x28) = CONCAT44(uStack_bcc,uStack_bd0);
      *(undefined1 (*) [8])(pPVar56 + 0x30) = local_bc8;
      *(undefined8 *)(pPVar56 + 0x38) = uStack_bc0;
      *(undefined8 *)(pPVar56 + 0x40) = uStack_bb8;
      *(undefined8 *)(pPVar56 + 0x48) = uStack_bb0;
      pPVar56 = pPVar57;
      local_cb8 = local_cb8 + 0xc;
    } while (pPVar57 != local_c88 + uVar42 * 0x50);
    pfVar44 = (float *)param_2[0xc];
    puVar55 = (undefined8 *)((ulong)puVar50 & 0xfffffffffffffff0);
    *puVar55 = CONCAT44(iStack_b44,local_b48);
    uVar41 = _LC15;
    fVar40 = _LC23;
    fVar73 = *pfVar44;
    auVar107._4_4_ = uVar3;
    auVar107._0_4_ = uVar3;
    auVar107._8_4_ = uVar3;
    auVar107._12_4_ = uVar3;
    auVar119._4_4_ = _LC18;
    auVar119._0_4_ = _LC18;
    auVar119._8_4_ = _LC18;
    auVar119._12_4_ = _LC18;
    fVar106 = fVar72 / (pfVar44[1] - fVar73);
    fVar67 = (float)((uint)fVar73 ^ uVar59) * fVar106;
    fVar106 = (fVar72 - fVar73) * fVar106;
    fVar99 = fVar72 - fVar67;
    fVar73 = fVar72 - fVar106;
    auVar125._0_4_ = local_b28 * fVar99 + fStack_b08 * fVar67;
    auVar125._4_4_ = fStack_b24 * fVar99 + fStack_b04 * fVar67;
    auVar125._8_4_ = fStack_b20 * fVar99 + fStack_b00 * fVar67;
    auVar125._12_4_ = fStack_b1c * fVar99 + fStack_afc * fVar67;
    auVar101._0_4_ = fVar99 * auStack_b38._0_4_ + fVar67 * local_b18;
    auVar101._4_4_ = fVar99 * auStack_b38._4_4_ + fVar67 * fStack_b14;
    auVar101._8_4_ = fVar99 * auStack_b38._8_4_ + fVar67 * fStack_b10;
    auVar101._12_4_ = fVar99 * auStack_b38._12_4_ + fVar67 * fStack_b0c;
    auVar126 = maxps(auVar125,auVar119);
    auVar102 = minps(auVar101,auVar107);
    auVar84._0_4_ = local_b28 * fVar73 + fStack_b08 * fVar106;
    auVar84._4_4_ = fStack_b24 * fVar73 + fStack_b04 * fVar106;
    auVar84._8_4_ = fStack_b20 * fVar73 + fStack_b00 * fVar106;
    auVar84._12_4_ = fStack_b1c * fVar73 + fStack_afc * fVar106;
    auVar69._0_4_ = fVar73 * auStack_b38._0_4_ + fVar106 * local_b18;
    auVar69._4_4_ = fVar73 * auStack_b38._4_4_ + fVar106 * fStack_b14;
    auVar69._8_4_ = fVar73 * auStack_b38._8_4_ + fVar106 * fStack_b10;
    auVar69._12_4_ = fVar73 * auStack_b38._12_4_ + fVar106 * fStack_b0c;
    auVar85 = maxps(auVar84,auVar119);
    auVar70 = minps(auVar69,auVar107);
    fVar99 = (float)((uint)auVar126._0_4_ & _LC15) * _LC23 + auVar126._0_4_;
    fVar97 = (float)((uint)auVar126._4_4_ & _LC15) * _LC23 + auVar126._4_4_;
    fVar98 = (float)((uint)auVar126._8_4_ & _LC15) * _LC23 + auVar126._8_4_;
    fVar100 = auVar102._0_4_ - (float)((uint)auVar102._0_4_ & _LC15) * _LC23;
    fVar104 = auVar102._4_4_ - (float)((uint)auVar102._4_4_ & _LC15) * _LC23;
    fVar105 = auVar102._8_4_ - (float)((uint)auVar102._8_4_ & _LC15) * _LC23;
    fVar124 = (float)((uint)auVar70._0_4_ & _LC15) * _LC23;
    fVar129 = (float)((uint)auVar70._4_4_ & _LC15) * _LC23;
    fVar130 = (float)((uint)auVar70._8_4_ & _LC15) * _LC23;
    fVar73 = (float)((uint)auVar85._0_4_ & _LC15) * _LC23;
    fVar67 = (float)((uint)auVar85._4_4_ & _LC15) * _LC23;
    fVar106 = (float)((uint)auVar85._8_4_ & _LC15) * _LC23;
    *(float *)(puVar55 + 6) = fVar99;
    *(float *)(puVar55 + 4) = fVar100;
    *(float *)(puVar55 + 8) = fVar104;
    auVar127 = minps(local_d08,auStack_b38);
    *(float *)(puVar55 + 0xc) = fVar105;
    *(float *)(puVar55 + 10) = fVar97;
    *(float *)(puVar55 + 0xe) = fVar98;
    *(float *)(puVar55 + 0x10) = (auVar70._0_4_ - fVar124) - fVar100;
    *(float *)(puVar55 + 0x18) = (auVar70._8_4_ - fVar130) - fVar105;
    *(float *)(puVar55 + 0x14) = (auVar70._4_4_ - fVar129) - fVar104;
    *(float *)(puVar55 + 0x12) = (fVar73 + auVar85._0_4_) - fVar99;
    *(float *)(puVar55 + 0x16) = (fVar67 + auVar85._4_4_) - fVar97;
    *(float *)(puVar55 + 0x1a) = (fVar106 + auVar85._8_4_) - fVar98;
    auVar10._4_4_ = fStack_b24;
    auVar10._0_4_ = local_b28;
    auVar10._8_4_ = fStack_b20;
    auVar10._12_4_ = fStack_b1c;
    auVar102 = maxps(auVar87,auVar10);
    auVar12._4_4_ = fStack_b14;
    auVar12._0_4_ = local_b18;
    auVar12._8_4_ = fStack_b10;
    auVar12._12_4_ = fStack_b0c;
    auVar126 = minps(local_d08,auVar12);
    auVar14._4_4_ = fStack_b04;
    auVar14._0_4_ = fStack_b08;
    auVar14._8_4_ = fStack_b00;
    auVar14._12_4_ = fStack_afc;
    auVar85 = maxps(auVar87,auVar14);
    puVar55[1] = uStack_af8;
    fVar73 = *pfVar44;
    fVar99 = fVar72 / (pfVar44[1] - fVar73);
    fVar67 = (float)((uint)fVar73 ^ uVar59) * fVar99;
    fVar99 = (fVar72 - fVar73) * fVar99;
    fVar106 = fVar72 - fVar67;
    fVar73 = fVar72 - fVar99;
    auVar132._0_4_ = fStack_ad8 * fVar106 + fStack_ab8 * fVar67;
    auVar132._4_4_ = fStack_ad4 * fVar106 + fStack_ab4 * fVar67;
    auVar132._8_4_ = fStack_ad0 * fVar106 + fStack_ab0 * fVar67;
    auVar132._12_4_ = fStack_acc * fVar106 + fStack_aac * fVar67;
    auVar94._0_4_ = fVar106 * fStack_ae8 + fVar67 * fStack_ac8;
    auVar94._4_4_ = fVar106 * fStack_ae4 + fVar67 * fStack_ac4;
    auVar94._8_4_ = fVar106 * fStack_ae0 + fVar67 * fStack_ac0;
    auVar94._12_4_ = fVar106 * fStack_adc + fVar67 * fStack_abc;
    auVar133 = maxps(auVar132,auVar119);
    auVar70 = minps(auVar94,auVar107);
    auVar112._0_4_ = fStack_ad8 * fVar73 + fStack_ab8 * fVar99;
    auVar112._4_4_ = fStack_ad4 * fVar73 + fStack_ab4 * fVar99;
    auVar112._8_4_ = fStack_ad0 * fVar73 + fStack_ab0 * fVar99;
    auVar112._12_4_ = fStack_acc * fVar73 + fStack_aac * fVar99;
    auVar86._0_4_ = fVar73 * fStack_ae8 + fVar99 * fStack_ac8;
    auVar86._4_4_ = fVar73 * fStack_ae4 + fVar99 * fStack_ac4;
    auVar86._8_4_ = fVar73 * fStack_ae0 + fVar99 * fStack_ac0;
    auVar86._12_4_ = fVar73 * fStack_adc + fVar99 * fStack_abc;
    auVar113 = maxps(auVar112,auVar119);
    auVar87 = minps(auVar86,auVar107);
    fVar73 = (float)((uint)auVar133._0_4_ & uVar41) * fVar40 + auVar133._0_4_;
    fVar67 = (float)((uint)auVar133._4_4_ & uVar41) * fVar40 + auVar133._4_4_;
    fVar106 = (float)((uint)auVar133._8_4_ & uVar41) * fVar40 + auVar133._8_4_;
    *(float *)((long)puVar55 + 0x34) = fVar73;
    fVar99 = auVar70._0_4_ - (float)((uint)auVar70._0_4_ & uVar41) * fVar40;
    fVar97 = auVar70._4_4_ - (float)((uint)auVar70._4_4_ & uVar41) * fVar40;
    fVar98 = auVar70._8_4_ - (float)((uint)auVar70._8_4_ & uVar41) * fVar40;
    *(float *)((long)puVar55 + 0x24) = fVar99;
    *(float *)((long)puVar55 + 0x84) =
         (auVar87._0_4_ - (float)((uint)auVar87._0_4_ & uVar41) * fVar40) - fVar99;
    *(float *)((long)puVar55 + 0x94) =
         ((float)((uint)auVar113._0_4_ & uVar41) * fVar40 + auVar113._0_4_) - fVar73;
    *(float *)((long)puVar55 + 0x44) = fVar97;
    *(float *)((long)puVar55 + 0x54) = fVar67;
    *(float *)((long)puVar55 + 100) = fVar98;
    *(float *)((long)puVar55 + 0x74) = fVar106;
    *(float *)((long)puVar55 + 0xa4) =
         (auVar87._4_4_ - (float)((uint)auVar87._4_4_ & uVar41) * fVar40) - fVar97;
    *(float *)((long)puVar55 + 0xb4) =
         ((float)((uint)auVar113._4_4_ & uVar41) * fVar40 + auVar113._4_4_) - fVar67;
    *(float *)((long)puVar55 + 0xc4) =
         (auVar87._8_4_ - (float)((uint)auVar87._8_4_ & uVar41) * fVar40) - fVar98;
    *(float *)((long)puVar55 + 0xd4) =
         ((float)((uint)auVar113._8_4_ & uVar41) * fVar40 + auVar113._8_4_) - fVar106;
    auVar18._4_4_ = fStack_ad4;
    auVar18._0_4_ = fStack_ad8;
    auVar18._8_4_ = fStack_ad0;
    auVar18._12_4_ = fStack_acc;
    auVar70 = maxps(auVar102,auVar18);
    auVar16._4_4_ = fStack_ae4;
    auVar16._0_4_ = fStack_ae8;
    auVar16._8_4_ = fStack_ae0;
    auVar16._12_4_ = fStack_adc;
    auVar113 = minps(auVar127,auVar16);
    auVar20._4_4_ = fStack_ac4;
    auVar20._0_4_ = fStack_ac8;
    auVar20._8_4_ = fStack_ac0;
    auVar20._12_4_ = fStack_abc;
    auVar102 = minps(auVar126,auVar20);
    auVar22._4_4_ = fStack_ab4;
    auVar22._0_4_ = fStack_ab8;
    auVar22._8_4_ = fStack_ab0;
    auVar22._12_4_ = fStack_aac;
    auVar87 = maxps(auVar85,auVar22);
    if (uVar42 != 2) {
      puVar55[2] = uStack_aa8;
      fVar73 = *pfVar44;
      fVar99 = fVar72 / (pfVar44[1] - fVar73);
      fVar67 = (float)((uint)fVar73 ^ uVar59) * fVar99;
      fVar99 = (fVar72 - fVar73) * fVar99;
      fVar106 = fVar72 - fVar67;
      fVar73 = fVar72 - fVar99;
      auVar134._0_4_ = fStack_a88 * fVar106 + fStack_a68 * fVar67;
      auVar134._4_4_ = fStack_a84 * fVar106 + fStack_a64 * fVar67;
      auVar134._8_4_ = fStack_a80 * fVar106 + fStack_a60 * fVar67;
      auVar134._12_4_ = fStack_a7c * fVar106 + fStack_a5c * fVar67;
      auVar95._0_4_ = fVar106 * fStack_a98 + fVar67 * fStack_a78;
      auVar95._4_4_ = fVar106 * fStack_a94 + fVar67 * fStack_a74;
      auVar95._8_4_ = fVar106 * fStack_a90 + fVar67 * fStack_a70;
      auVar95._12_4_ = fVar106 * fStack_a8c + fVar67 * fStack_a6c;
      auVar133 = maxps(auVar134,auVar119);
      auVar126 = minps(auVar95,auVar107);
      auVar114._0_4_ = fStack_a88 * fVar73 + fStack_a68 * fVar99;
      auVar114._4_4_ = fStack_a84 * fVar73 + fStack_a64 * fVar99;
      auVar114._8_4_ = fStack_a80 * fVar73 + fStack_a60 * fVar99;
      auVar114._12_4_ = fStack_a7c * fVar73 + fStack_a5c * fVar99;
      auVar88._0_4_ = fVar73 * fStack_a98 + fVar99 * fStack_a78;
      auVar88._4_4_ = fVar73 * fStack_a94 + fVar99 * fStack_a74;
      auVar88._8_4_ = fVar73 * fStack_a90 + fVar99 * fStack_a70;
      auVar88._12_4_ = fVar73 * fStack_a8c + fVar99 * fStack_a6c;
      auVar127 = maxps(auVar114,auVar119);
      auVar85 = minps(auVar88,auVar107);
      fVar73 = (float)((uint)auVar133._0_4_ & uVar41) * fVar40 + auVar133._0_4_;
      fVar67 = (float)((uint)auVar133._4_4_ & uVar41) * fVar40 + auVar133._4_4_;
      fVar106 = (float)((uint)auVar133._8_4_ & uVar41) * fVar40 + auVar133._8_4_;
      *(float *)(puVar55 + 7) = fVar73;
      fVar99 = auVar126._0_4_ - (float)((uint)auVar126._0_4_ & uVar41) * fVar40;
      fVar97 = auVar126._4_4_ - (float)((uint)auVar126._4_4_ & uVar41) * fVar40;
      fVar98 = auVar126._8_4_ - (float)((uint)auVar126._8_4_ & uVar41) * fVar40;
      *(float *)(puVar55 + 5) = fVar99;
      *(float *)(puVar55 + 0x11) =
           (auVar85._0_4_ - (float)((uint)auVar85._0_4_ & uVar41) * fVar40) - fVar99;
      *(float *)(puVar55 + 0x13) =
           ((float)((uint)auVar127._0_4_ & uVar41) * fVar40 + auVar127._0_4_) - fVar73;
      *(float *)(puVar55 + 9) = fVar97;
      *(float *)(puVar55 + 0xb) = fVar67;
      *(float *)(puVar55 + 0xd) = fVar98;
      *(float *)(puVar55 + 0xf) = fVar106;
      *(float *)(puVar55 + 0x15) =
           (auVar85._4_4_ - (float)((uint)auVar85._4_4_ & uVar41) * fVar40) - fVar97;
      *(float *)(puVar55 + 0x17) =
           ((float)((uint)auVar127._4_4_ & uVar41) * fVar40 + auVar127._4_4_) - fVar67;
      *(float *)(puVar55 + 0x19) =
           (auVar85._8_4_ - (float)((uint)auVar85._8_4_ & uVar41) * fVar40) - fVar98;
      *(float *)(puVar55 + 0x1b) =
           ((float)((uint)auVar127._8_4_ & uVar41) * fVar40 + auVar127._8_4_) - fVar106;
      auVar26._4_4_ = fStack_a84;
      auVar26._0_4_ = fStack_a88;
      auVar26._8_4_ = fStack_a80;
      auVar26._12_4_ = fStack_a7c;
      auVar70 = maxps(auVar70,auVar26);
      auVar24._4_4_ = fStack_a94;
      auVar24._0_4_ = fStack_a98;
      auVar24._8_4_ = fStack_a90;
      auVar24._12_4_ = fStack_a8c;
      auVar113 = minps(auVar113,auVar24);
      auVar28._4_4_ = fStack_a74;
      auVar28._0_4_ = fStack_a78;
      auVar28._8_4_ = fStack_a70;
      auVar28._12_4_ = fStack_a6c;
      auVar102 = minps(auVar102,auVar28);
      auVar30._4_4_ = fStack_a64;
      auVar30._0_4_ = fStack_a68;
      auVar30._8_4_ = fStack_a60;
      auVar30._12_4_ = fStack_a5c;
      auVar87 = maxps(auVar87,auVar30);
      if (uVar42 != 3) {
        puVar55[3] = uStack_a58;
        fVar73 = *pfVar44;
        fVar99 = fVar72 / (pfVar44[1] - fVar73);
        fVar106 = (float)(uVar59 ^ (uint)fVar73) * fVar99;
        fVar67 = fVar72 - fVar106;
        fVar99 = (fVar72 - fVar73) * fVar99;
        fVar72 = fVar72 - fVar99;
        auVar122._0_4_ = fStack_a18 * fVar106 + fStack_a38 * fVar67;
        auVar122._4_4_ = fStack_a14 * fVar106 + fStack_a34 * fVar67;
        auVar122._8_4_ = fStack_a10 * fVar106 + fStack_a30 * fVar67;
        auVar122._12_4_ = fStack_a0c * fVar106 + fStack_a2c * fVar67;
        auVar115._0_4_ = fVar106 * fStack_a28 + fVar67 * fStack_a48;
        auVar115._4_4_ = fVar106 * fStack_a24 + fVar67 * fStack_a44;
        auVar115._8_4_ = fVar106 * fStack_a20 + fVar67 * fStack_a40;
        auVar115._12_4_ = fVar106 * fStack_a1c + fVar67 * fStack_a3c;
        auVar133 = maxps(auVar122,auVar119);
        auVar127 = minps(auVar115,auVar107);
        auVar96._0_4_ = fStack_a18 * fVar99 + fStack_a38 * fVar72;
        auVar96._4_4_ = fStack_a14 * fVar99 + fStack_a34 * fVar72;
        auVar96._8_4_ = fStack_a10 * fVar99 + fStack_a30 * fVar72;
        auVar96._12_4_ = fStack_a0c * fVar99 + fStack_a2c * fVar72;
        auVar75._0_4_ = fVar72 * fStack_a48 + fVar99 * fStack_a28;
        auVar75._4_4_ = fVar72 * fStack_a44 + fVar99 * fStack_a24;
        auVar75._8_4_ = fVar72 * fStack_a40 + fVar99 * fStack_a20;
        auVar75._12_4_ = fVar72 * fStack_a3c + fVar99 * fStack_a1c;
        auVar126 = maxps(auVar96,auVar119);
        auVar85 = minps(auVar75,auVar107);
        fVar106 = (float)((uint)auVar133._0_4_ & uVar41) * fVar40 + auVar133._0_4_;
        fVar99 = (float)((uint)auVar133._4_4_ & uVar41) * fVar40 + auVar133._4_4_;
        fVar97 = (float)((uint)auVar133._8_4_ & uVar41) * fVar40 + auVar133._8_4_;
        *(float *)((long)puVar55 + 0x3c) = fVar106;
        fVar72 = auVar127._0_4_ - (float)((uint)auVar127._0_4_ & uVar41) * fVar40;
        fVar73 = auVar127._4_4_ - (float)((uint)auVar127._4_4_ & uVar41) * fVar40;
        fVar67 = auVar127._8_4_ - (float)((uint)auVar127._8_4_ & uVar41) * fVar40;
        *(float *)((long)puVar55 + 0x2c) = fVar72;
        *(float *)((long)puVar55 + 0x4c) = fVar73;
        *(float *)((long)puVar55 + 0x5c) = fVar99;
        *(float *)((long)puVar55 + 0x6c) = fVar67;
        *(float *)((long)puVar55 + 0x8c) =
             (auVar85._0_4_ - (float)(uVar41 & (uint)auVar85._0_4_) * fVar40) - fVar72;
        *(float *)((long)puVar55 + 0xac) =
             (auVar85._4_4_ - (float)(uVar41 & (uint)auVar85._4_4_) * fVar40) - fVar73;
        *(float *)((long)puVar55 + 0xcc) =
             (auVar85._8_4_ - (float)(uVar41 & (uint)auVar85._8_4_) * fVar40) - fVar67;
        *(float *)((long)puVar55 + 0x7c) = fVar97;
        *(float *)((long)puVar55 + 0x9c) =
             ((float)((uint)auVar126._0_4_ & uVar41) * fVar40 + auVar126._0_4_) - fVar106;
        *(float *)((long)puVar55 + 0xbc) =
             ((float)((uint)auVar126._4_4_ & uVar41) * fVar40 + auVar126._4_4_) - fVar99;
        *(float *)((long)puVar55 + 0xdc) =
             ((float)((uint)auVar126._8_4_ & uVar41) * fVar40 + auVar126._8_4_) - fVar97;
        auVar34._4_4_ = fStack_a34;
        auVar34._0_4_ = fStack_a38;
        auVar34._8_4_ = fStack_a30;
        auVar34._12_4_ = fStack_a2c;
        auVar70 = maxps(auVar70,auVar34);
        auVar32._4_4_ = fStack_a44;
        auVar32._0_4_ = fStack_a48;
        auVar32._8_4_ = fStack_a40;
        auVar32._12_4_ = fStack_a3c;
        auVar113 = minps(auVar113,auVar32);
        auVar36._4_4_ = fStack_a24;
        auVar36._0_4_ = fStack_a28;
        auVar36._8_4_ = fStack_a20;
        auVar36._12_4_ = fStack_a1c;
        auVar102 = minps(auVar102,auVar36);
        auVar38._4_4_ = fStack_a14;
        auVar38._0_4_ = fStack_a18;
        auVar38._8_4_ = fStack_a10;
        auVar38._12_4_ = fStack_a0c;
        auVar87 = maxps(auVar87,auVar38);
      }
    }
    *(ulong *)param_1 = (ulong)puVar50 | 1;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar113;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar70;
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar102;
    *(undefined1 (*) [16])(param_1 + 0x40) = auVar87;
  }
LAB_0010be45:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >
   embree::sse2::GeneralBVHBuilder::build<embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>, embree::sse2::PrimInfoRange,
   embree::PrimRef, embree::FastAllocator::Create, embree::AABBNodeMB_t<embree::NodeRefPtr<4>,
   4>::Create, embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1},
   embree::BuildProgressMonitor>(embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>&,
   embree::PrimRef*, embree::sse2::PrimInfoRange const&, embree::FastAllocator::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1} const&, embree::BuildProgressMonitor const&,
   embree::sse2::GeneralBVHBuilder::Settings const&) */

undefined8
embree::sse2::GeneralBVHBuilder::
build<embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::BuildProgressMonitor>
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          ulong *param_9)

{
  long in_FS_OFFSET;
  undefined8 local_12c;
  undefined1 local_121;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  long local_10;
  
  local_98 = *param_9;
  uStack_90 = param_9[1];
  local_88 = param_9[2];
  uStack_80 = param_9[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_9[4];
  uStack_70 = param_9[5];
  local_68 = param_9[6];
  uStack_60 = param_9[7];
  local_48 = &local_120;
  local_40 = &local_121;
  local_38 = &local_12c;
  local_28 = &local_118;
  local_20 = &local_f8;
  local_18 = param_8;
  local_12c = param_1_00;
  local_120 = param_6;
  local_58 = param_3;
  local_50 = param_2;
  local_30 = param_7;
  if (0x10 < *param_9) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_a8 = *(undefined8 *)(param_5 + 0x10);
  local_e8 = *param_5;
  uStack_e4 = param_5[1];
  uStack_e0 = param_5[2];
  uStack_dc = param_5[3];
  local_f0 = 0;
  local_d8 = param_5[4];
  uStack_d4 = param_5[5];
  uStack_d0 = param_5[6];
  uStack_cc = param_5[7];
  local_c8 = param_5[8];
  uStack_c4 = param_5[9];
  uStack_c0 = param_5[10];
  uStack_bc = param_5[0xb];
  local_f8 = 1;
  local_b8 = param_5[0xc];
  uStack_b4 = param_5[0xd];
  uStack_b0 = param_5[0xe];
  uStack_ac = param_5[0xf];
  local_a0 = *(undefined8 *)(param_5 + 0x12);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
  ::recurse(param_1,&local_98,local_20,1,param_6,param_7,0,0,0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float> const&) */

undefined8
embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 *param_6)

{
  long in_FS_OFFSET;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 *in_stack_00000048;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  long local_20;
  long local_10;
  
  local_68 = *param_6;
  uStack_64 = param_6[1];
  uStack_60 = param_6[2];
  uStack_5c = param_6[3];
  local_58 = param_6[4];
  uStack_54 = param_6[5];
  uStack_50 = param_6[6];
  uStack_4c = param_6[7];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_6[8];
  uStack_44 = param_6[9];
  uStack_40 = param_6[10];
  uStack_3c = param_6[0xb];
  local_38 = param_6[0xc];
  uStack_34 = param_6[0xd];
  uStack_30 = param_6[0xe];
  uStack_2c = param_6[0xf];
  uStack0000000000000008 = 4;
  local_20 = *(long *)(param_6 + 0x12) - *(long *)(param_6 + 0x10);
  uStack0000000000000010 = 0x28;
  local_28 = 0;
  local_78 = param_2;
  local_70 = param_5;
  GeneralBVHBuilder::
  build<embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::BuildProgressMonitor>
            (*in_stack_00000048,param_1,&local_70,param_5,&local_68,param_3,&local_78,param_4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::BVHNodeRecordMB<embree::NodeRefPtr<4> >,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::Create,
   embree::AABBNodeMB_t<embree::NodeRefPtr<4>, 4>::SetTimeRange,
   embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings, embree::BBox<float>
   const&)::{lambda(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::ss...mbree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::ss___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  TaskGroupContext *pTVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  TaskScheduler *pTVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  TaskGroupContext *local_98;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  TaskGroupContext *local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_30;
  
  uVar12 = *(ulong *)(this + 8);
  uVar11 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar12 - uVar11) {
    pTVar4 = *(TaskGroupContext **)(this + 0x38);
    uStack_70 = *(ulong *)(this + 0x20);
    uStack_68 = *(ulong *)(this + 0x28);
    uStack_60 = *(ulong *)(this + 0x30);
    uVar12 = uVar12 + uVar11 >> 1;
    local_88 = uVar12;
    uStack_80 = uVar11;
    local_78 = *(ulong *)(this + 0x18);
    local_58 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar10 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimI___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar10,(_lambda___1_ *)&local_88,pTVar4,uVar12 - uVar11,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) goto LAB_0010f55e;
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar2 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar2) goto LAB_0010f55e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar7 + 0x40080 + uVar2);
      *puVar3 = &PTR_execute_00117108;
      puVar3[1] = local_88;
      puVar3[2] = uStack_80;
      puVar3[3] = local_78;
      puVar3[4] = uStack_70;
      puVar3[5] = uStack_68;
      puVar3[6] = uStack_60;
      puVar3[7] = local_58;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar12 - uVar11;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_b8 = *(undefined8 *)(this + 0x18);
    local_c8 = *(long *)(this + 8);
    pTVar4 = *(TaskGroupContext **)(this + 0x38);
    uStack_b0 = *(undefined8 *)(this + 0x20);
    uStack_a8 = *(undefined8 *)(this + 0x28);
    uStack_a0 = *(undefined8 *)(this + 0x30);
    uVar11 = local_c8 - uVar12;
    uStack_c0 = uVar12;
    local_98 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar10 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimI___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar10,(_lambda___1_ *)&local_c8,pTVar4,uVar11,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) {
LAB_0010f55e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar12 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar12) goto LAB_0010f55e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar12;
      puVar3 = (undefined8 *)(lVar7 + 0x40080 + uVar12);
      *puVar3 = &PTR_execute_00117108;
      puVar3[1] = local_c8;
      puVar3[2] = uStack_c0;
      puVar3[7] = local_98;
      puVar3[3] = local_b8;
      puVar3[4] = uStack_b0;
      puVar3[5] = uStack_a8;
      puVar3[6] = uStack_a0;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar11;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    for (; uVar11 < uVar12; uVar11 = uVar11 + 1) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      sse2::GeneralBVHBuilder::
      BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
      ::recurse(&local_88,*(undefined8 *)(this + 0x30),uVar11 * 0x60 + *(long *)(this + 0x28),1);
      puVar9 = (ulong *)(uVar11 * 0x50 + *(long *)(this + 0x20));
      *puVar9 = local_88;
      puVar9[2] = local_78;
      puVar9[3] = uStack_70;
      puVar9[4] = uStack_68;
      puVar9[5] = uStack_60;
      puVar9[6] = (ulong)local_58;
      puVar9[7] = uStack_50;
      puVar9[8] = local_48;
      puVar9[9] = uStack_40;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Create2,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator, bool) */

ulong embree::sse2::GeneralBVHBuilder::
      BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
      ::recurse(ulong *param_1,long *param_2,char param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  undefined8 uVar23;
  undefined1 (*pauVar24) [16];
  undefined8 *puVar25;
  TaskScheduler *this;
  int iVar26;
  ulong uVar27;
  MutexSys *pMVar28;
  MutexSys *pMVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  MutexSys *pMVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  long *plVar38;
  long in_FS_OFFSET;
  byte bVar39;
  uint uVar40;
  uint uVar41;
  byte bVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  byte bVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  byte bVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  float fVar55;
  float fVar61;
  float fVar62;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  uint uVar71;
  float fVar72;
  float fVar81;
  float fVar83;
  float fVar84;
  float fVar86;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar87;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  uint uVar82;
  uint uVar85;
  uint uVar88;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  uint uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  byte bVar103;
  float fVar104;
  byte bVar105;
  float fVar106;
  byte bVar107;
  float fVar108;
  byte bVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  undefined1 auVar119 [16];
  FastAllocator *in_stack_00000008;
  MutexSys *in_stack_00000010;
  MutexSys *local_8d0;
  FastAllocator *local_8b8;
  long *local_8a0;
  undefined1 local_860 [16];
  undefined1 local_850 [8];
  float fStack_848;
  float fStack_844;
  undefined1 local_840 [16];
  uint local_830;
  uint uStack_82c;
  uint uStack_828;
  uint uStack_824;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__CentGeom<embree::BBox<embree::Vec3fa>_>_const___4_
  local_803;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__PrimRef_const___3_ local_802;
  EmptyTy local_801;
  PrimInfoRange *local_800;
  int *local_7f8;
  long *local_7f0;
  undefined8 local_7e0;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined1 local_7d0 [8];
  float fStack_7c8;
  float fStack_7c4;
  undefined4 local_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined1 local_7b0 [8];
  float fStack_7a8;
  float fStack_7a4;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined1 local_790 [8];
  undefined8 uStack_788;
  undefined8 local_780;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined1 local_770 [8];
  float fStack_768;
  float fStack_764;
  int local_760;
  int iStack_75c;
  int iStack_758;
  int iStack_754;
  long local_750;
  undefined8 uStack_748;
  float local_740;
  int local_73c;
  int local_738;
  float local_720;
  float fStack_71c;
  float fStack_718;
  float fStack_714;
  float local_710;
  float fStack_70c;
  float fStack_708;
  float fStack_704;
  int local_700 [4];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 local_6e0 [8];
  undefined8 uStack_6d8;
  undefined1 local_6d0 [16];
  undefined1 local_6c0 [16];
  undefined1 local_6b0 [16];
  undefined1 local_6a0 [16];
  undefined1 local_690 [16];
  long local_650;
  ulong uStack_648;
  undefined1 local_640 [16];
  undefined1 local_630 [16];
  undefined1 local_620 [16];
  undefined1 local_610 [16];
  ulong local_600 [3];
  undefined1 local_5e8;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined1 local_5d0 [16];
  undefined1 local_5c0 [16];
  undefined1 local_5b0 [16];
  ulong local_5a0;
  ulong local_598;
  long local_590;
  undefined1 local_588;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  long local_540;
  long local_538;
  undefined1 local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  long local_4e0;
  long local_4d8;
  undefined1 local_4c8;
  long local_480;
  long local_478;
  undefined1 local_468;
  long local_420;
  long local_418;
  undefined1 local_408;
  long local_3c0;
  long local_3b8;
  undefined1 local_3a8;
  long local_360;
  long local_358;
  undefined1 local_348;
  long local_300;
  long local_2f8;
  undefined1 local_2e8;
  long local_2a0;
  long local_298;
  undefined1 local_288;
  long local_240;
  long local_238;
  undefined1 local_228;
  long local_1e0;
  long local_1d8;
  undefined1 local_1c8;
  long local_180;
  long local_178;
  undefined1 local_168;
  long local_120;
  long local_118;
  undefined1 local_108;
  long local_c0;
  long local_b8;
  undefined1 local_a8;
  long local_60;
  long local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar17 = lRam000000000010fd3b;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_8b8 = in_stack_00000008;
  if (in_stack_00000008 == (FastAllocator *)0x0) {
    local_8b8 = *(FastAllocator **)param_1[10];
    in_stack_00000010 = *(MutexSys **)(in_FS_OFFSET + lRam000000000010fd3b);
    if (in_stack_00000010 == (MutexSys *)0x0) {
      in_stack_00000010 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(in_stack_00000010);
      *(MutexSys **)(in_stack_00000010 + 0x40) = in_stack_00000010;
      *(undefined8 *)(in_stack_00000010 + 8) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x48) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x50) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x58) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x60) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x68) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x70) = 0;
      *(MutexSys **)(in_stack_00000010 + 0x80) = in_stack_00000010;
      *(undefined8 *)(in_stack_00000010 + 0x88) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x90) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x98) = 0;
      *(undefined8 *)(in_stack_00000010 + 0xa0) = 0;
      *(undefined8 *)(in_stack_00000010 + 0xa8) = 0;
      *(undefined8 *)(in_stack_00000010 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar17) = in_stack_00000010;
      embree::MutexSys::lock();
      local_7a0 = in_stack_00000010;
      if (__MutexSys == _vtable) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,&local_7a0);
        pMVar35 = local_7a0;
        if (local_7a0 != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys(local_7a0);
          embree::alignedFree(pMVar35);
        }
      }
      else {
        *__MutexSys = in_stack_00000010;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    in_stack_00000010 = in_stack_00000010 + 0x40;
  }
  if ((param_3 != '\0') && ((ulong)(param_2[0xb] - param_2[10]) <= param_1[6])) {
    if ((code *)**(undefined8 **)param_1[0x10] == Scene::BuildProgressMonitorInterface::operator())
    {
      embree::Scene::progressMonitor((double)(ulong)(param_2[0xb] - param_2[10]));
    }
    else {
      (*(code *)**(undefined8 **)param_1[0x10])();
    }
  }
  HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find
            ((PrimInfoRange *)&local_740,*(ulong *)param_1[9]);
  uVar27 = param_2[0xb];
  uVar22 = param_2[10];
  auVar58 = *(undefined1 (*) [16])(param_2 + 2);
  auVar66 = *(undefined1 (*) [16])(param_2 + 4);
  uVar30 = uVar27 - uVar22;
  if (((uVar30 <= param_1[3]) || (lVar17 = *param_2, param_1[1] <= lVar17 + 8U)) ||
     ((uVar30 <= param_1[4] &&
      (fVar61 = auVar66._4_4_ - auVar58._4_4_, fVar62 = auVar66._8_4_ - auVar58._8_4_,
      fVar61 = (auVar66._0_4_ - auVar58._0_4_) * (fVar61 + fVar62) + fVar61 * fVar62,
      (float)((uVar30 - 1) + (1L << ((byte)param_1[2] & 0x3f)) >> ((byte)param_1[2] & 0x3f)) *
      fVar61 * *(float *)((long)param_1 + 0x2c) <=
      fVar61 * *(float *)(param_1 + 5) + *(float *)((long)param_1 + 0x2c) * local_740)))) {
    puVar25 = (undefined8 *)(*(long *)param_1[9] + uVar27 * 0x20);
    puVar34 = (undefined8 *)(*(long *)param_1[9] + uVar22 * 0x20);
    if (puVar25 != puVar34) {
      lVar17 = uVar27 * 0x20 + uVar22 * -0x20;
      uVar27 = lVar17 >> 5;
      if (uVar27 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar34,puVar25,0xfffffffffffffffe);
      }
      else {
        lVar19 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar34,puVar25,(long)(int)lVar19 * 2);
        if (0x200 < lVar17) {
          puVar33 = puVar34 + 0x40;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar34,puVar33)
          ;
          for (; puVar25 != puVar33; puVar33 = puVar33 + 4) {
            while( true ) {
              uVar23 = puVar33[2];
              uVar10 = puVar33[3];
              uVar11 = *puVar33;
              uVar12 = puVar33[1];
              uVar27 = CONCAT44(*(undefined4 *)((long)puVar33 + 0x1c),
                                *(undefined4 *)((long)puVar33 + 0xc));
              puVar34 = puVar33;
              if (CONCAT44(*(undefined4 *)((long)puVar33 + -4),
                           *(undefined4 *)((long)puVar33 + -0x14)) <= uVar27) break;
              do {
                puVar6 = puVar34;
                puVar34 = puVar6 + -4;
                *puVar6 = *puVar34;
                puVar6[1] = puVar6[-3];
                *(undefined1 (*) [16])(puVar6 + 2) = *(undefined1 (*) [16])(puVar6 + -2);
              } while (uVar27 < CONCAT44(*(undefined4 *)((long)puVar6 + -0x24),
                                         *(undefined4 *)((long)puVar6 + -0x34)));
              puVar33 = puVar33 + 4;
              *puVar34 = uVar11;
              puVar6[-3] = uVar12;
              puVar6[-2] = uVar23;
              puVar6[-1] = uVar10;
              if (puVar25 == puVar33) goto LAB_0010f778;
            }
            *puVar33 = uVar11;
            puVar33[1] = uVar12;
            puVar33[2] = uVar23;
            puVar33[3] = uVar10;
          }
          goto LAB_0010f778;
        }
      }
      std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar34,puVar25);
    }
LAB_0010f778:
    uVar27 = createLargeLeaf(param_1,param_2);
    local_780 = (long *)CONCAT44(local_780._4_4_,(undefined4)local_780);
    goto LAB_0010f7bc;
  }
  plVar38 = (long *)param_1[9];
  if (uVar30 < 0xc00) {
    lVar19 = *plVar38;
    lVar31 = uVar27 * 0x20;
    pauVar24 = (undefined1 (*) [16])(lVar19 + uVar22 * 0x20);
    if (local_73c == -1) {
      pauVar21 = (undefined1 (*) [16])(lVar19 + lVar31);
      if (pauVar21 != pauVar24) {
        lVar31 = lVar31 + uVar22 * -0x20;
        uVar27 = lVar31 >> 5;
        if (uVar27 == 0) {
          std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar24,pauVar21,0xfffffffffffffffe);
LAB_00112555:
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar24,pauVar21);
        }
        else {
          lVar17 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar24,pauVar21,(long)(int)lVar17 * 2);
          if (lVar31 < 0x201) goto LAB_00112555;
          pauVar20 = pauVar24 + 0x20;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar24,pauVar20);
          for (; pauVar21 != pauVar20; pauVar20 = pauVar20 + 2) {
            uVar3 = *(undefined4 *)(pauVar20[1] + 0xc);
            uVar4 = *(undefined4 *)(*pauVar20 + 0xc);
            auVar58 = pauVar20[1];
            auVar66 = *pauVar20;
            uVar27 = CONCAT44(*(undefined4 *)(pauVar20[-1] + 0xc),
                              *(undefined4 *)(pauVar20[-2] + 0xc));
            pauVar24 = pauVar20;
            while (CONCAT44(uVar3,uVar4) < uVar27) {
              uVar23 = *(undefined8 *)(pauVar24[-2] + 8);
              *(undefined8 *)*pauVar24 = *(undefined8 *)pauVar24[-2];
              *(undefined8 *)(*pauVar24 + 8) = uVar23;
              pauVar24[1] = pauVar24[-1];
              uVar27 = CONCAT44(*(undefined4 *)(pauVar24[-3] + 0xc),
                                *(undefined4 *)(pauVar24[-4] + 0xc));
              pauVar24 = pauVar24 + -2;
            }
            *pauVar24 = auVar66;
            pauVar24[1] = auVar58;
          }
        }
        lVar19 = *plVar38;
        uVar22 = param_2[10];
        uVar27 = param_2[0xb];
        lVar17 = *param_2;
      }
      local_600[1] = uVar22 + uVar27 >> 1;
      if (uVar22 < local_600[1]) {
        local_610._8_4_ = _LC2;
        local_610._0_8_ = CONCAT44(_LC2,_LC2);
        local_610._12_4_ = _LC2;
        local_620._8_4_ = _LC4;
        local_620._0_8_ = CONCAT44(_LC4,_LC4);
        local_620._12_4_ = _LC4;
        local_630._8_4_ = _LC2;
        local_630._0_8_ = CONCAT44(_LC2,_LC2);
        local_630._12_4_ = _LC2;
        local_640._8_4_ = _LC4;
        local_640._0_8_ = CONCAT44(_LC4,_LC4);
        local_640._12_4_ = _LC4;
        pauVar24 = (undefined1 (*) [16])(uVar22 * 0x20 + lVar19);
        do {
          auVar116._0_4_ = *(float *)pauVar24[1] + *(float *)*pauVar24;
          auVar116._4_4_ = *(float *)(pauVar24[1] + 4) + *(float *)(*pauVar24 + 4);
          auVar116._8_4_ = *(float *)(pauVar24[1] + 8) + *(float *)(*pauVar24 + 8);
          auVar116._12_4_ = *(float *)(pauVar24[1] + 0xc) + *(float *)(*pauVar24 + 0xc);
          pauVar21 = pauVar24 + 2;
          local_640 = minps(local_640,*pauVar24);
          local_630 = maxps(local_630,pauVar24[1]);
          local_620 = minps(local_620,auVar116);
          local_610 = maxps(local_610,auVar116);
          pauVar24 = pauVar21;
        } while ((undefined1 (*) [16])(local_600[1] * 0x20 + lVar19) != pauVar21);
      }
      else {
        local_610._8_4_ = _LC2;
        local_610._0_8_ = CONCAT44(_LC2,_LC2);
        local_610._12_4_ = _LC2;
        local_620._8_4_ = _LC4;
        local_620._0_8_ = CONCAT44(_LC4,_LC4);
        local_620._12_4_ = _LC4;
        local_630._8_4_ = _LC2;
        local_630._0_8_ = CONCAT44(_LC2,_LC2);
        local_630._12_4_ = _LC2;
        local_640._8_4_ = _LC4;
        local_640._0_8_ = CONCAT44(_LC4,_LC4);
        local_640._12_4_ = _LC4;
      }
      local_860._4_4_ = _LC4;
      local_860._0_4_ = _LC4;
      auVar58._4_4_ = _LC2;
      auVar58._0_4_ = _LC2;
      local_860._8_4_ = _LC4;
      auVar58._8_4_ = _LC2;
      local_860._12_4_ = _LC4;
      auVar58._12_4_ = _LC2;
      local_5d0 = auVar58;
      local_5b0 = auVar58;
      local_5c0 = local_860;
      local_840 = local_860;
      if (local_600[1] < uVar27) {
        pauVar24 = (undefined1 (*) [16])(local_600[1] * 0x20 + lVar19);
        do {
          auVar60._0_4_ = *(float *)pauVar24[1] + *(float *)*pauVar24;
          auVar60._4_4_ = *(float *)(pauVar24[1] + 4) + *(float *)(*pauVar24 + 4);
          auVar60._8_4_ = *(float *)(pauVar24[1] + 8) + *(float *)(*pauVar24 + 8);
          auVar60._12_4_ = *(float *)(pauVar24[1] + 0xc) + *(float *)(*pauVar24 + 0xc);
          pauVar21 = pauVar24 + 2;
          local_840 = minps(local_840,*pauVar24);
          local_5d0 = maxps(local_5d0,pauVar24[1]);
          local_5c0 = minps(local_5c0,auVar60);
          local_5b0 = maxps(local_5b0,auVar60);
          pauVar24 = pauVar21;
        } while ((undefined1 (*) [16])(lVar19 + uVar27 * 0x20) != pauVar21);
      }
    }
    else {
      uVar30 = (ulong)(uint)(1 << ((byte)local_73c & 0x1f));
      iVar26 = 0x1180f8;
      auVar58._0_8_ = CONCAT44(_LC2,_LC2);
      auVar58._8_4_ = _LC2;
      auVar58._12_4_ = _LC2;
      local_5b0._8_4_ = _LC2;
      local_5b0._0_8_ = auVar58._0_8_;
      local_5b0._12_4_ = _LC2;
      uVar23 = (&mm_lookupmask_ps)[uVar30 * 2];
      uVar10 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar30 * 0x10);
      local_5d0._8_4_ = _LC2;
      local_5d0._0_8_ = auVar58._0_8_;
      local_5d0._12_4_ = _LC2;
      local_610._8_4_ = _LC2;
      local_610._0_8_ = auVar58._0_8_;
      local_610._12_4_ = _LC2;
      local_860._0_8_ = CONCAT44(_LC4,_LC4);
      local_860._8_4_ = _LC4;
      local_860._12_4_ = _LC4;
      local_630._8_4_ = _LC2;
      local_630._0_8_ = auVar58._0_8_;
      local_630._12_4_ = _LC2;
      local_5c0._8_4_ = _LC4;
      local_5c0._0_8_ = local_860._0_8_;
      local_5c0._12_4_ = _LC4;
      local_620._8_4_ = _LC4;
      local_620._0_8_ = local_860._0_8_;
      local_620._12_4_ = _LC4;
      local_640._8_4_ = _LC4;
      local_640._0_8_ = local_860._0_8_;
      local_640._12_4_ = _LC4;
      pauVar21 = (undefined1 (*) [16])(lVar19 + -0x20 + lVar31);
      local_840 = local_860;
      for (; pauVar24 <= pauVar21; pauVar24 = pauVar24 + 2) {
        auVar66 = pauVar24[1];
        auVar93 = *pauVar24;
        auVar63._0_4_ = auVar66._0_4_ + auVar93._0_4_;
        auVar63._4_4_ = auVar66._4_4_ + auVar93._4_4_;
        auVar63._8_4_ = auVar66._8_4_ + auVar93._8_4_;
        auVar63._12_4_ = auVar66._12_4_ + auVar93._12_4_;
        local_830 = (uint)uVar23;
        uStack_82c = (uint)((ulong)uVar23 >> 0x20);
        uStack_828 = (uint)uVar10;
        uStack_824 = (uint)((ulong)uVar10 >> 0x20);
        auVar73._0_4_ =
             -(uint)((int)((auVar63._0_4_ - local_720) * local_710 + _LC26) < local_738) & local_830
        ;
        auVar73._4_4_ =
             -(uint)((int)((auVar63._4_4_ - fStack_71c) * fStack_70c + _UNK_001171e4) < local_738) &
             uStack_82c;
        auVar73._8_4_ =
             -(uint)((int)((auVar63._8_4_ - fStack_718) * fStack_708 + _UNK_001171e8) < local_738) &
             uStack_828;
        auVar73._12_4_ =
             -(uint)((int)((auVar63._12_4_ - fStack_714) * fStack_704 + _UNK_001171ec) < local_738)
             & uStack_824;
        iVar26 = movmskps(iVar26,auVar73);
        if (iVar26 == 0) {
          while( true ) {
            auVar116 = pauVar21[1];
            auVar60 = *pauVar21;
            pauVar20 = pauVar21 + -2;
            auVar76._0_4_ = auVar116._0_4_ + auVar60._0_4_;
            auVar76._4_4_ = auVar116._4_4_ + auVar60._4_4_;
            auVar76._8_4_ = auVar116._8_4_ + auVar60._8_4_;
            auVar76._12_4_ = auVar116._12_4_ + auVar60._12_4_;
            auVar64._0_4_ =
                 -(uint)((int)((auVar76._0_4_ - local_720) * local_710 + _LC26) < local_738) &
                 local_830;
            auVar64._4_4_ =
                 -(uint)((int)((auVar76._4_4_ - fStack_71c) * fStack_70c + _UNK_001171e4) <
                        local_738) & uStack_82c;
            auVar64._8_4_ =
                 -(uint)((int)((auVar76._8_4_ - fStack_718) * fStack_708 + _UNK_001171e8) <
                        local_738) & uStack_828;
            auVar64._12_4_ =
                 -(uint)((int)((auVar76._12_4_ - fStack_714) * fStack_704 + _UNK_001171ec) <
                        local_738) & uStack_824;
            iVar26 = movmskps(0,auVar64);
            if (iVar26 != 0) break;
            local_840 = minps(local_840,auVar60);
            local_5d0 = maxps(local_5d0,auVar116);
            local_5c0 = minps(local_5c0,auVar76);
            local_5b0 = maxps(local_5b0,auVar76);
            pauVar21 = pauVar20;
            if (pauVar20 < pauVar24) goto LAB_0010f98a;
          }
          *pauVar24 = auVar60;
          local_640 = minps(local_640,auVar60);
          local_630 = maxps(local_630,auVar116);
          local_5d0 = maxps(local_5d0,auVar66);
          local_610 = maxps(local_610,auVar76);
          local_840 = minps(local_840,auVar93);
          local_5c0 = minps(local_5c0,auVar63);
          pauVar24[1] = pauVar21[1];
          local_620 = minps(local_620,auVar76);
          local_5b0 = maxps(local_5b0,auVar63);
          *pauVar21 = auVar93;
          pauVar21[1] = auVar66;
        }
        else {
          local_640 = minps(local_640,auVar93);
          local_630 = maxps(local_630,auVar66);
          local_620 = minps(local_620,auVar63);
          local_610 = maxps(local_610,auVar63);
          pauVar20 = pauVar21;
        }
        pauVar21 = pauVar20;
      }
LAB_0010f98a:
      local_600[1] = (long)pauVar24 - lVar19 >> 5;
      lVar17 = *param_2;
    }
  }
  else {
    if (local_73c != -1) {
      uVar30 = (ulong)(uint)(1 << ((byte)local_73c & 0x1f));
      local_650 = (&mm_lookupmask_ps)[uVar30 * 2];
      uStack_648 = *(ulong *)(embree::MutexSys::MutexSys + uVar30 * 0x10);
      local_7f8 = local_700;
      local_7f0 = &local_650;
      local_7e0._0_4_ = _LC4;
      local_7e0._4_4_ = _LC4;
      uStack_7d8 = _LC4;
      uStack_7d4 = _LC4;
      local_7d0._4_4_ = _LC2;
      local_7d0._0_4_ = _LC2;
      fStack_7c8 = _LC2;
      fStack_7c4 = _LC2;
      local_7c0 = _LC4;
      uStack_7bc = _LC4;
      uStack_7b8 = _LC4;
      uStack_7b4 = _LC4;
      local_7b0._4_4_ = _LC2;
      local_7b0._0_4_ = _LC2;
      fStack_7a8 = _LC2;
      fStack_7a4 = _LC2;
      local_7a0 = (MutexSys *)CONCAT44(_LC4,_LC4);
      uStack_798 = CONCAT44(_LC4,_LC4);
      local_790._4_4_ = _LC2;
      local_790._0_4_ = _LC2;
      uStack_788._0_4_ = _LC2;
      uStack_788._4_4_ = _LC2;
      local_780._0_4_ = _LC4;
      local_780._4_4_ = _LC4;
      uStack_778 = _LC4;
      uStack_774 = _LC4;
      local_770._4_4_ = _LC2;
      local_770._0_4_ = _LC2;
      fStack_768 = _LC2;
      fStack_764 = _LC2;
      local_860._4_4_ = _LC4;
      local_860._0_4_ = _LC4;
      local_860._8_4_ = _LC4;
      local_860._12_4_ = _LC4;
      local_850._4_4_ = _LC2;
      local_850._0_4_ = _LC2;
      fStack_848 = _LC2;
      fStack_844 = _LC2;
      local_700[0] = local_738;
      local_700[1] = local_738;
      local_700[2] = local_738;
      local_700[3] = local_738;
      local_800 = (PrimInfoRange *)&local_740;
      local_600[1] = parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                               ((PrimRef *)*plVar38,uVar22,uVar27,&local_801,(CentGeom *)&local_7e0,
                                (CentGeom *)&local_7a0,
                                (_lambda_embree__PrimRef_const___1_ *)&local_800,&local_802,
                                &local_803,0x80);
      local_640._4_4_ = local_7e0._4_4_;
      local_640._0_4_ = (undefined4)local_7e0;
      local_640._8_4_ = uStack_7d8;
      local_640._12_4_ = uStack_7d4;
      local_840._8_8_ = uStack_798;
      local_840._0_8_ = local_7a0;
      local_620._4_4_ = uStack_7bc;
      local_620._0_4_ = local_7c0;
      local_620._8_4_ = uStack_7b8;
      local_620._12_4_ = uStack_7b4;
      local_5c0._4_4_ = local_780._4_4_;
      local_5c0._0_4_ = (undefined4)local_780;
      local_5c0._8_4_ = uStack_778;
      local_5c0._12_4_ = uStack_774;
      lVar17 = *param_2;
      local_5d0 = _local_790;
      auVar58 = _local_850;
      local_5b0 = _local_770;
      local_610 = _local_7b0;
      local_630 = _local_7d0;
      goto LAB_0010f9a9;
    }
    lVar19 = *plVar38;
    pauVar24 = (undefined1 (*) [16])(lVar19 + uVar27 * 0x20);
    pauVar21 = (undefined1 (*) [16])(lVar19 + uVar22 * 0x20);
    if (pauVar24 != pauVar21) {
      lVar17 = uVar27 * 0x20 + uVar22 * -0x20;
      uVar27 = lVar17 >> 5;
      if (uVar27 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar21,pauVar24,0xfffffffffffffffe);
LAB_00112786:
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar21,pauVar24)
        ;
      }
      else {
        lVar19 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar21,pauVar24,(long)(int)lVar19 * 2);
        if (lVar17 < 0x201) goto LAB_00112786;
        pauVar20 = pauVar21 + 0x20;
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar21,pauVar20)
        ;
        for (; pauVar24 != pauVar20; pauVar20 = pauVar20 + 2) {
          uVar3 = *(undefined4 *)(pauVar20[1] + 0xc);
          uVar4 = *(undefined4 *)(*pauVar20 + 0xc);
          auVar58 = pauVar20[1];
          auVar66 = *pauVar20;
          uVar27 = CONCAT44(*(undefined4 *)(pauVar20[-1] + 0xc),*(undefined4 *)(pauVar20[-2] + 0xc))
          ;
          pauVar21 = pauVar20;
          while (CONCAT44(uVar3,uVar4) < uVar27) {
            uVar23 = *(undefined8 *)(pauVar21[-2] + 8);
            *(undefined8 *)*pauVar21 = *(undefined8 *)pauVar21[-2];
            *(undefined8 *)(*pauVar21 + 8) = uVar23;
            pauVar21[1] = pauVar21[-1];
            uVar27 = CONCAT44(*(undefined4 *)(pauVar21[-3] + 0xc),
                              *(undefined4 *)(pauVar21[-4] + 0xc));
            pauVar21 = pauVar21 + -2;
          }
          *pauVar21 = auVar66;
          pauVar21[1] = auVar58;
        }
      }
      lVar19 = *plVar38;
      uVar22 = param_2[10];
      uVar27 = param_2[0xb];
      lVar17 = *param_2;
    }
    local_600[1] = uVar22 + uVar27 >> 1;
    if (uVar22 < local_600[1]) {
      local_610._8_4_ = _LC2;
      local_610._0_8_ = CONCAT44(_LC2,_LC2);
      local_610._12_4_ = _LC2;
      local_620._8_4_ = _LC4;
      local_620._0_8_ = CONCAT44(_LC4,_LC4);
      local_620._12_4_ = _LC4;
      local_630._8_4_ = _LC2;
      local_630._0_8_ = CONCAT44(_LC2,_LC2);
      local_630._12_4_ = _LC2;
      local_640._8_4_ = _LC4;
      local_640._0_8_ = CONCAT44(_LC4,_LC4);
      local_640._12_4_ = _LC4;
      pauVar24 = (undefined1 (*) [16])(uVar22 * 0x20 + lVar19);
      do {
        auVar66._0_4_ = *(float *)pauVar24[1] + *(float *)*pauVar24;
        auVar66._4_4_ = *(float *)(pauVar24[1] + 4) + *(float *)(*pauVar24 + 4);
        auVar66._8_4_ = *(float *)(pauVar24[1] + 8) + *(float *)(*pauVar24 + 8);
        auVar66._12_4_ = *(float *)(pauVar24[1] + 0xc) + *(float *)(*pauVar24 + 0xc);
        pauVar21 = pauVar24 + 2;
        local_640 = minps(local_640,*pauVar24);
        local_630 = maxps(local_630,pauVar24[1]);
        local_620 = minps(local_620,auVar66);
        local_610 = maxps(local_610,auVar66);
        pauVar24 = pauVar21;
      } while ((undefined1 (*) [16])(local_600[1] * 0x20 + lVar19) != pauVar21);
    }
    else {
      local_610._8_4_ = _LC2;
      local_610._0_8_ = CONCAT44(_LC2,_LC2);
      local_610._12_4_ = _LC2;
      local_620._8_4_ = _LC4;
      local_620._0_8_ = CONCAT44(_LC4,_LC4);
      local_620._12_4_ = _LC4;
      local_630._8_4_ = _LC2;
      local_630._0_8_ = CONCAT44(_LC2,_LC2);
      local_630._12_4_ = _LC2;
      local_640._8_4_ = _LC4;
      local_640._0_8_ = CONCAT44(_LC4,_LC4);
      local_640._12_4_ = _LC4;
    }
    local_860._4_4_ = _LC4;
    local_860._0_4_ = _LC4;
    auVar58._4_4_ = _LC2;
    auVar58._0_4_ = _LC2;
    local_860._8_4_ = _LC4;
    auVar58._8_4_ = _LC2;
    local_860._12_4_ = _LC4;
    auVar58._12_4_ = _LC2;
    local_5d0 = auVar58;
    local_5b0 = auVar58;
    local_5c0 = local_860;
    local_840 = local_860;
    if (local_600[1] < uVar27) {
      pauVar24 = (undefined1 (*) [16])(local_600[1] * 0x20 + lVar19);
      do {
        auVar93._0_4_ = *(float *)pauVar24[1] + *(float *)*pauVar24;
        auVar93._4_4_ = *(float *)(pauVar24[1] + 4) + *(float *)(*pauVar24 + 4);
        auVar93._8_4_ = *(float *)(pauVar24[1] + 8) + *(float *)(*pauVar24 + 8);
        auVar93._12_4_ = *(float *)(pauVar24[1] + 0xc) + *(float *)(*pauVar24 + 0xc);
        pauVar21 = pauVar24 + 2;
        local_840 = minps(local_840,*pauVar24);
        local_5d0 = maxps(local_5d0,pauVar24[1]);
        local_5c0 = minps(local_5c0,auVar93);
        local_5b0 = maxps(local_5b0,auVar93);
        pauVar24 = pauVar21;
      } while ((undefined1 (*) [16])(lVar19 + uVar27 * 0x20) != pauVar21);
    }
  }
LAB_0010f9a9:
  local_8a0 = &local_650;
  local_650 = lVar17 + 1;
  uStack_648 = uStack_648 & 0xffffffffffffff00;
  local_5e8 = 0;
  local_5e0 = local_840._0_4_;
  uStack_5dc = local_840._4_4_;
  uStack_5d8 = local_840._8_4_;
  uStack_5d4 = local_840._12_4_;
  local_600[0] = uVar22;
  local_600[2] = local_650;
  local_5a0 = local_600[1];
  local_598 = uVar27;
  if (*param_1 < 3) {
    lVar17 = 0xc0;
    pMVar35 = (MutexSys *)0x2;
  }
  else {
    pMVar35 = (MutexSys *)0x2;
    plVar38 = &local_590;
    do {
      pMVar28 = (MutexSys *)0x0;
      pMVar29 = (MutexSys *)0xffffffffffffffff;
      pfVar18 = (float *)local_640;
      uVar22 = local_600[0];
      uVar27 = local_600[1];
      fVar61 = _LC2;
      while( true ) {
        if ((param_1[3] < uVar27 - uVar22) &&
           (fVar62 = (pfVar18[4] - *pfVar18) *
                     ((pfVar18[5] - pfVar18[1]) + (pfVar18[6] - pfVar18[2])) +
                     (pfVar18[5] - pfVar18[1]) * (pfVar18[6] - pfVar18[2]), fVar61 < fVar62)) {
          pMVar29 = pMVar28;
          fVar61 = fVar62;
        }
        pMVar28 = pMVar28 + 1;
        if (pMVar28 == pMVar35) break;
        uVar27 = *(ulong *)(pfVar18 + 0x2a);
        uVar22 = *(ulong *)(pfVar18 + 0x28);
        pfVar18 = pfVar18 + 0x18;
      }
      if (pMVar29 == (MutexSys *)0xffffffffffffffff) break;
      lVar17 = *param_2;
      lVar19 = (long)pMVar29 * 0x60;
      HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find
                ((PrimInfoRange *)local_700,*(ulong *)param_1[9]);
      plVar5 = (long *)param_1[9];
      uVar27 = local_600[(long)pMVar29 * 0xc + 1];
      uVar22 = local_600[(long)pMVar29 * 0xc];
      auVar56 = local_860;
      local_840 = local_860;
      auVar117 = local_860;
      auVar119 = local_860;
      if (uVar27 - uVar22 < 0xc00) {
        lVar31 = *plVar5;
        lVar32 = uVar27 * 0x20;
        pauVar24 = (undefined1 (*) [16])(lVar31 + uVar22 * 0x20);
        if (local_700[1] == -1) {
          pauVar21 = (undefined1 (*) [16])(lVar31 + lVar32);
          if (pauVar21 != pauVar24) {
            lVar32 = lVar32 + uVar22 * -0x20;
            uVar27 = lVar32 >> 5;
            if (uVar27 == 0) {
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar24,pauVar21,0xfffffffffffffffe);
            }
            else {
              lVar31 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar24,pauVar21,(long)(int)lVar31 * 2);
              if (0x200 < lVar32) {
                pauVar20 = pauVar24 + 0x20;
                std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar24,pauVar20);
                for (; pauVar21 != pauVar20; pauVar20 = pauVar20 + 2) {
                  uVar3 = *(undefined4 *)(pauVar20[1] + 0xc);
                  uVar4 = *(undefined4 *)(*pauVar20 + 0xc);
                  uVar23 = *(undefined8 *)pauVar20[1];
                  uVar10 = *(undefined8 *)(pauVar20[1] + 8);
                  auVar66 = *pauVar20;
                  uVar27 = CONCAT44(*(undefined4 *)(pauVar20[-1] + 0xc),
                                    *(undefined4 *)(pauVar20[-2] + 0xc));
                  pauVar24 = pauVar20;
                  while (CONCAT44(uVar3,uVar4) < uVar27) {
                    uVar11 = *(undefined8 *)(pauVar24[-2] + 8);
                    *(undefined8 *)*pauVar24 = *(undefined8 *)pauVar24[-2];
                    *(undefined8 *)(*pauVar24 + 8) = uVar11;
                    uVar7 = *(undefined4 *)(pauVar24[-1] + 4);
                    uVar8 = *(undefined4 *)(pauVar24[-1] + 8);
                    uVar9 = *(undefined4 *)(pauVar24[-1] + 0xc);
                    *(undefined4 *)pauVar24[1] = *(undefined4 *)pauVar24[-1];
                    *(undefined4 *)(pauVar24[1] + 4) = uVar7;
                    *(undefined4 *)(pauVar24[1] + 8) = uVar8;
                    *(undefined4 *)(pauVar24[1] + 0xc) = uVar9;
                    uVar27 = CONCAT44(*(undefined4 *)(pauVar24[-3] + 0xc),
                                      *(undefined4 *)(pauVar24[-4] + 0xc));
                    pauVar24 = pauVar24 + -2;
                  }
                  *pauVar24 = auVar66;
                  *(undefined8 *)pauVar24[1] = uVar23;
                  *(undefined8 *)(pauVar24[1] + 8) = uVar10;
                }
                lVar31 = *plVar5;
                uVar22 = local_600[(long)pMVar29 * 0xc];
                uVar27 = local_600[(long)pMVar29 * 0xc + 1];
                goto LAB_0011146c;
              }
            }
            std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar24,pauVar21);
            uVar22 = local_600[(long)pMVar29 * 0xc];
            lVar31 = *plVar5;
            uVar27 = local_600[(long)pMVar29 * 0xc + 1];
          }
LAB_0011146c:
          uVar30 = uVar22 + uVar27 >> 1;
          auVar66 = auVar58;
          auVar93 = auVar58;
          if (uVar22 < uVar30) {
            pauVar24 = (undefined1 (*) [16])(uVar22 * 0x20 + lVar31);
            do {
              auVar67._0_4_ = *(float *)pauVar24[1] + *(float *)*pauVar24;
              auVar67._4_4_ = *(float *)(pauVar24[1] + 4) + *(float *)(*pauVar24 + 4);
              auVar67._8_4_ = *(float *)(pauVar24[1] + 8) + *(float *)(*pauVar24 + 8);
              auVar67._12_4_ = *(float *)(pauVar24[1] + 0xc) + *(float *)(*pauVar24 + 0xc);
              pauVar21 = pauVar24 + 2;
              auVar56 = minps(auVar56,*pauVar24);
              auVar93 = maxps(auVar93,pauVar24[1]);
              auVar119 = minps(auVar119,auVar67);
              auVar66 = maxps(auVar66,auVar67);
              pauVar24 = pauVar21;
            } while (pauVar21 != (undefined1 (*) [16])(uVar30 * 0x20 + lVar31));
          }
          auVar116 = auVar58;
          _local_850 = auVar58;
          if (uVar30 < uVar27) {
            pauVar24 = (undefined1 (*) [16])(uVar30 * 0x20 + lVar31);
            do {
              auVar68._0_4_ = *(float *)pauVar24[1] + *(float *)*pauVar24;
              auVar68._4_4_ = *(float *)(pauVar24[1] + 4) + *(float *)(*pauVar24 + 4);
              auVar68._8_4_ = *(float *)(pauVar24[1] + 8) + *(float *)(*pauVar24 + 8);
              auVar68._12_4_ = *(float *)(pauVar24[1] + 0xc) + *(float *)(*pauVar24 + 0xc);
              pauVar21 = pauVar24 + 2;
              local_840 = minps(local_840,*pauVar24);
              _local_850 = maxps(_local_850,pauVar24[1]);
              auVar117 = minps(auVar117,auVar68);
              auVar116 = maxps(auVar116,auVar68);
              pauVar24 = pauVar21;
            } while (pauVar21 != (undefined1 (*) [16])(uVar27 * 0x20 + lVar31));
          }
        }
        else {
          uVar30 = (ulong)(uint)(1 << ((byte)local_700[1] & 0x1f));
          iVar26 = 0x1180f8;
          uVar23 = (&mm_lookupmask_ps)[uVar30 * 2];
          uVar10 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar30 * 0x10);
          pauVar21 = (undefined1 (*) [16])(lVar31 + -0x20 + lVar32);
          auVar116 = auVar58;
          auVar66 = auVar58;
          auVar93 = auVar58;
          _local_850 = auVar58;
          for (; pauVar24 <= pauVar21; pauVar24 = pauVar24 + 2) {
            auVar60 = pauVar24[1];
            auVar63 = *pauVar24;
            auVar74._0_4_ = auVar60._0_4_ + auVar63._0_4_;
            auVar74._4_4_ = auVar60._4_4_ + auVar63._4_4_;
            auVar74._8_4_ = auVar60._8_4_ + auVar63._8_4_;
            auVar74._12_4_ = auVar60._12_4_ + auVar63._12_4_;
            local_830 = (uint)uVar23;
            uStack_82c = (uint)((ulong)uVar23 >> 0x20);
            uStack_828 = (uint)uVar10;
            uStack_824 = (uint)((ulong)uVar10 >> 0x20);
            auVar90._0_4_ =
                 -(uint)((int)((auVar74._0_4_ - (float)local_6e0._0_4_) * local_6d0._0_4_ + _LC26) <
                        local_700[2]) & local_830;
            auVar90._4_4_ =
                 -(uint)((int)((auVar74._4_4_ - (float)local_6e0._4_4_) * local_6d0._4_4_ +
                              _UNK_001171e4) < local_700[2]) & uStack_82c;
            auVar90._8_4_ =
                 -(uint)((int)((auVar74._8_4_ - (float)uStack_6d8) * local_6d0._8_4_ + _UNK_001171e8
                              ) < local_700[2]) & uStack_828;
            auVar90._12_4_ =
                 -(uint)((int)((auVar74._12_4_ - uStack_6d8._4_4_) * local_6d0._12_4_ +
                              _UNK_001171ec) < local_700[2]) & uStack_824;
            iVar26 = movmskps(iVar26,auVar90);
            if (iVar26 == 0) {
              while( true ) {
                auVar73 = pauVar21[1];
                auVar64 = *pauVar21;
                pauVar20 = pauVar21 + -2;
                auVar91._0_4_ = auVar73._0_4_ + auVar64._0_4_;
                auVar91._4_4_ = auVar73._4_4_ + auVar64._4_4_;
                auVar91._8_4_ = auVar73._8_4_ + auVar64._8_4_;
                auVar91._12_4_ = auVar73._12_4_ + auVar64._12_4_;
                auVar75._0_4_ =
                     -(uint)((int)((auVar91._0_4_ - (float)local_6e0._0_4_) * local_6d0._0_4_ +
                                  _LC26) < local_700[2]) & local_830;
                auVar75._4_4_ =
                     -(uint)((int)((auVar91._4_4_ - (float)local_6e0._4_4_) * local_6d0._4_4_ +
                                  _UNK_001171e4) < local_700[2]) & uStack_82c;
                auVar75._8_4_ =
                     -(uint)((int)((auVar91._8_4_ - (float)uStack_6d8) * local_6d0._8_4_ +
                                  _UNK_001171e8) < local_700[2]) & uStack_828;
                auVar75._12_4_ =
                     -(uint)((int)((auVar91._12_4_ - uStack_6d8._4_4_) * local_6d0._12_4_ +
                                  _UNK_001171ec) < local_700[2]) & uStack_824;
                iVar26 = movmskps(0,auVar75);
                if (iVar26 != 0) break;
                local_840 = minps(local_840,auVar64);
                _local_850 = maxps(_local_850,auVar73);
                auVar117 = minps(auVar117,auVar91);
                auVar116 = maxps(auVar116,auVar91);
                pauVar21 = pauVar20;
                if (pauVar20 < pauVar24) goto LAB_0010fc8d;
              }
              *pauVar24 = auVar64;
              auVar119 = minps(auVar119,auVar91);
              auVar66 = maxps(auVar66,auVar91);
              local_840 = minps(local_840,auVar63);
              _local_850 = maxps(_local_850,auVar60);
              auVar56 = minps(auVar56,auVar64);
              auVar117 = minps(auVar117,auVar74);
              auVar93 = maxps(auVar93,auVar73);
              auVar116 = maxps(auVar116,auVar74);
              pauVar24[1] = pauVar21[1];
              *pauVar21 = auVar63;
              pauVar21[1] = auVar60;
            }
            else {
              auVar56 = minps(auVar56,auVar63);
              auVar93 = maxps(auVar93,auVar60);
              auVar119 = minps(auVar119,auVar74);
              auVar66 = maxps(auVar66,auVar74);
              pauVar20 = pauVar21;
            }
            pauVar21 = pauVar20;
          }
LAB_0010fc8d:
          uVar30 = (long)pauVar24 - lVar31 >> 5;
        }
      }
      else if (local_700[1] == -1) {
        lVar31 = *plVar5;
        pauVar24 = (undefined1 (*) [16])(lVar31 + uVar27 * 0x20);
        pauVar21 = (undefined1 (*) [16])(lVar31 + uVar22 * 0x20);
        if (pauVar24 != pauVar21) {
          lVar31 = uVar27 * 0x20 + uVar22 * -0x20;
          uVar27 = lVar31 >> 5;
          if (uVar27 == 0) {
            std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar21,pauVar24,0xfffffffffffffffe);
          }
          else {
            lVar32 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar21,pauVar24,(long)(int)lVar32 * 2);
            if (0x200 < lVar31) {
              pauVar20 = pauVar21 + 0x20;
              std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar21,pauVar20);
              for (; pauVar24 != pauVar20; pauVar20 = pauVar20 + 2) {
                uVar3 = *(undefined4 *)(pauVar20[1] + 0xc);
                uVar4 = *(undefined4 *)(*pauVar20 + 0xc);
                uVar23 = *(undefined8 *)pauVar20[1];
                uVar10 = *(undefined8 *)(pauVar20[1] + 8);
                auVar66 = *pauVar20;
                uVar27 = CONCAT44(*(undefined4 *)(pauVar20[-1] + 0xc),
                                  *(undefined4 *)(pauVar20[-2] + 0xc));
                pauVar21 = pauVar20;
                while (CONCAT44(uVar3,uVar4) < uVar27) {
                  uVar11 = *(undefined8 *)(pauVar21[-2] + 8);
                  *(undefined8 *)*pauVar21 = *(undefined8 *)pauVar21[-2];
                  *(undefined8 *)(*pauVar21 + 8) = uVar11;
                  uVar7 = *(undefined4 *)(pauVar21[-1] + 4);
                  uVar8 = *(undefined4 *)(pauVar21[-1] + 8);
                  uVar9 = *(undefined4 *)(pauVar21[-1] + 0xc);
                  *(undefined4 *)pauVar21[1] = *(undefined4 *)pauVar21[-1];
                  *(undefined4 *)(pauVar21[1] + 4) = uVar7;
                  *(undefined4 *)(pauVar21[1] + 8) = uVar8;
                  *(undefined4 *)(pauVar21[1] + 0xc) = uVar9;
                  uVar27 = CONCAT44(*(undefined4 *)(pauVar21[-3] + 0xc),
                                    *(undefined4 *)(pauVar21[-4] + 0xc));
                  pauVar21 = pauVar21 + -2;
                }
                *pauVar21 = auVar66;
                *(undefined8 *)pauVar21[1] = uVar23;
                *(undefined8 *)(pauVar21[1] + 8) = uVar10;
              }
              lVar31 = *plVar5;
              uVar22 = local_600[(long)pMVar29 * 0xc];
              uVar27 = local_600[(long)pMVar29 * 0xc + 1];
              goto LAB_00111e48;
            }
          }
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar21,pauVar24);
          uVar22 = local_600[(long)pMVar29 * 0xc];
          lVar31 = *plVar5;
          uVar27 = local_600[(long)pMVar29 * 0xc + 1];
        }
LAB_00111e48:
        uVar30 = uVar22 + uVar27 >> 1;
        auVar66 = auVar58;
        auVar93 = auVar58;
        if (uVar22 < uVar30) {
          pauVar24 = (undefined1 (*) [16])(uVar22 * 0x20 + lVar31);
          do {
            auVar69._0_4_ = *(float *)pauVar24[1] + *(float *)*pauVar24;
            auVar69._4_4_ = *(float *)(pauVar24[1] + 4) + *(float *)(*pauVar24 + 4);
            auVar69._8_4_ = *(float *)(pauVar24[1] + 8) + *(float *)(*pauVar24 + 8);
            auVar69._12_4_ = *(float *)(pauVar24[1] + 0xc) + *(float *)(*pauVar24 + 0xc);
            pauVar21 = pauVar24 + 2;
            auVar56 = minps(auVar56,*pauVar24);
            auVar93 = maxps(auVar93,pauVar24[1]);
            auVar119 = minps(auVar119,auVar69);
            auVar66 = maxps(auVar66,auVar69);
            pauVar24 = pauVar21;
          } while (pauVar21 != (undefined1 (*) [16])(uVar30 * 0x20 + lVar31));
        }
        auVar116 = auVar58;
        _local_850 = auVar58;
        if (uVar30 < uVar27) {
          pauVar24 = (undefined1 (*) [16])(uVar30 * 0x20 + lVar31);
          do {
            auVar70._0_4_ = *(float *)pauVar24[1] + *(float *)*pauVar24;
            auVar70._4_4_ = *(float *)(pauVar24[1] + 4) + *(float *)(*pauVar24 + 4);
            auVar70._8_4_ = *(float *)(pauVar24[1] + 8) + *(float *)(*pauVar24 + 8);
            auVar70._12_4_ = *(float *)(pauVar24[1] + 0xc) + *(float *)(*pauVar24 + 0xc);
            pauVar21 = pauVar24 + 2;
            local_840 = minps(local_840,*pauVar24);
            _local_850 = maxps(_local_850,pauVar24[1]);
            auVar117 = minps(auVar117,auVar70);
            auVar116 = maxps(auVar116,auVar70);
            pauVar24 = pauVar21;
          } while ((undefined1 (*) [16])(lVar31 + uVar27 * 0x20) != pauVar21);
        }
      }
      else {
        local_8d0 = local_860._0_8_;
        uVar30 = (ulong)(uint)(1 << ((byte)local_700[1] & 0x1f));
        local_7e0._0_4_ = local_860._0_4_;
        local_7e0._4_4_ = local_860._4_4_;
        uStack_7d8 = local_860._8_4_;
        uStack_7d4 = local_860._12_4_;
        local_7a0 = local_8d0;
        local_750 = (&mm_lookupmask_ps)[uVar30 * 2];
        uStack_748 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar30 * 0x10);
        local_760 = local_700[2];
        iStack_75c = local_700[2];
        iStack_758 = local_700[2];
        iStack_754 = local_700[2];
        local_7f8 = &local_760;
        local_7f0 = &local_750;
        local_800 = (PrimInfoRange *)local_700;
        _local_7d0 = auVar58;
        local_7c0 = (undefined4)local_7e0;
        uStack_7bc = local_7e0._4_4_;
        uStack_7b8 = uStack_7d8;
        uStack_7b4 = uStack_7d4;
        _local_7b0 = auVar58;
        uStack_798 = local_860._8_8_;
        _local_790 = auVar58;
        local_780._0_4_ = (undefined4)local_7e0;
        local_780._4_4_ = local_7e0._4_4_;
        uStack_778 = uStack_7d8;
        uStack_774 = uStack_7d4;
        _local_770 = auVar58;
        uVar30 = parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                           ((PrimRef *)*plVar5,uVar22,uVar27,&local_801,(CentGeom *)&local_7e0,
                            (CentGeom *)&local_7a0,(_lambda_embree__PrimRef_const___1_ *)&local_800,
                            &local_802,&local_803,0x80);
        auVar56._4_4_ = local_7e0._4_4_;
        auVar56._0_4_ = (undefined4)local_7e0;
        auVar56._8_4_ = uStack_7d8;
        auVar56._12_4_ = uStack_7d4;
        auVar119._4_4_ = uStack_7bc;
        auVar119._0_4_ = local_7c0;
        auVar119._8_4_ = uStack_7b8;
        auVar119._12_4_ = uStack_7b4;
        local_840._8_8_ = uStack_798;
        local_840._0_8_ = local_7a0;
        auVar117._4_4_ = local_780._4_4_;
        auVar117._0_4_ = (undefined4)local_780;
        auVar117._8_4_ = uStack_778;
        auVar117._12_4_ = uStack_774;
        auVar116 = _local_770;
        auVar66 = _local_7b0;
        auVar93 = _local_7d0;
        _local_850 = _local_790;
      }
      pMVar35 = pMVar35 + 1;
      local_640[(long)pMVar29 * 0x60 + -8] = 0;
      (&local_650)[(long)pMVar29 * 0xc] = lVar17 + 1;
      local_600[(long)pMVar29 * 0xc] = uVar22;
      local_600[(long)pMVar29 * 0xc + 1] = uVar30;
      *(undefined1 (*) [16])(local_640 + lVar19) = auVar56;
      *(undefined1 (*) [16])(local_630 + lVar19) = auVar93;
      *(undefined1 (*) [16])(local_620 + lVar19) = auVar119;
      *(undefined1 (*) [16])(local_610 + lVar19) = auVar66;
      *plVar38 = lVar17 + 1;
      *(undefined1 *)(plVar38 + 1) = 0;
      *(undefined4 *)(plVar38 + 2) = local_840._0_4_;
      *(undefined4 *)((long)plVar38 + 0x14) = local_840._4_4_;
      *(undefined4 *)(plVar38 + 3) = local_840._8_4_;
      *(undefined4 *)((long)plVar38 + 0x1c) = local_840._12_4_;
      *(undefined1 (*) [16])(plVar38 + 4) = _local_850;
      *(undefined1 (*) [16])(plVar38 + 6) = auVar117;
      *(undefined1 (*) [16])(plVar38 + 8) = auVar116;
      plVar38[10] = uVar30;
      plVar38[0xb] = uVar27;
      plVar38 = plVar38 + 0xc;
    } while (pMVar35 < (MutexSys *)*param_1);
    lVar17 = (long)pMVar35 * 0x60;
  }
  uVar23 = auVar58._8_8_;
  uVar27 = param_1[7];
  if (uVar27 < (ulong)(param_2[0xb] - param_2[10])) {
    uStack_648 = CONCAT71(uStack_648._1_7_,local_600[1] - local_600[0] <= uVar27);
    local_5e8 = local_598 - local_5a0 <= uVar27;
    if ((((((pMVar35 != (MutexSys *)0x2) &&
           (local_588 = (ulong)(local_538 - local_540) <= uVar27, pMVar35 != (MutexSys *)0x3)) &&
          (local_528 = (ulong)(local_4d8 - local_4e0) <= uVar27, pMVar35 != (MutexSys *)0x4)) &&
         ((local_4c8 = (ulong)(local_478 - local_480) <= uVar27, pMVar35 != (MutexSys *)0x5 &&
          (local_468 = (ulong)(local_418 - local_420) <= uVar27, pMVar35 != (MutexSys *)0x6)))) &&
        ((local_408 = (ulong)(local_3b8 - local_3c0) <= uVar27, pMVar35 != (MutexSys *)0x7 &&
         ((local_3a8 = (ulong)(local_358 - local_360) <= uVar27,
          pMVar35 != (MutexSys *)&DAT_00000008 &&
          (local_348 = (ulong)(local_2f8 - local_300) <= uVar27, pMVar35 != (MutexSys *)0x9)))))) &&
       ((local_2e8 = (ulong)(local_298 - local_2a0) <= uVar27, pMVar35 != (MutexSys *)0xa &&
        ((((local_288 = (ulong)(local_238 - local_240) <= uVar27, pMVar35 != (MutexSys *)0xb &&
           (local_228 = (ulong)(local_1d8 - local_1e0) <= uVar27, pMVar35 != (MutexSys *)0xc)) &&
          (local_1c8 = (ulong)(local_178 - local_180) <= uVar27, pMVar35 != (MutexSys *)0xd)) &&
         ((local_168 = (ulong)(local_118 - local_120) <= uVar27, pMVar35 != (MutexSys *)0xe &&
          (local_108 = (ulong)(local_b8 - local_c0) <= uVar27, pMVar35 == (MutexSys *)0x10)))))))) {
      local_a8 = (ulong)(local_58 - local_60) <= uVar27;
    }
  }
  if (lVar17 != 0) {
    uVar27 = (lVar17 >> 5) * -0x5555555555555555;
    puVar1 = (undefined1 *)((long)local_8a0 + lVar17);
    if (uVar27 == 0) {
      std::
      __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (local_8a0,puVar1,0xfffffffffffffffe);
    }
    else {
      lVar19 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      std::
      __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (local_8a0,puVar1,(long)(int)lVar19 * 2);
      if (0x600 < lVar17) {
        std::
        __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (local_8a0,auStack_50);
        puVar36 = auStack_50;
        do {
          puVar37 = puVar36 + 0x60;
          std::
          __unguarded_linear_insert<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                    (puVar36);
          uVar23 = auVar58._8_8_;
          puVar36 = puVar37;
        } while (puVar1 != puVar37);
        goto LAB_00110132;
      }
    }
    std::
    __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
              (local_8a0,puVar1);
  }
LAB_00110132:
  uStack_6d8 = local_860._8_8_;
  local_6e0._4_4_ = local_5e0;
  local_6e0._0_4_ = local_640._0_4_;
  auVar58 = _local_6e0;
  local_6c0._4_4_ = uStack_5dc;
  local_6c0._0_4_ = local_640._4_4_;
  local_6c0._8_8_ = uStack_6d8;
  local_6a0._4_4_ = uStack_5d8;
  local_6a0._0_4_ = local_640._8_4_;
  local_6a0._8_8_ = uStack_6d8;
  local_6d0._4_4_ = local_5d0._0_4_;
  local_6d0._0_4_ = local_630._0_4_;
  local_6d0._8_8_ = uVar23;
  local_6b0._4_4_ = local_5d0._4_4_;
  local_6b0._0_4_ = local_630._4_4_;
  local_6b0._8_8_ = uVar23;
  local_690._4_4_ = local_5d0._8_4_;
  local_690._0_4_ = local_630._8_4_;
  local_690._8_8_ = uVar23;
  uStack_6d8._4_4_ = local_860._12_4_;
  fVar61 = uStack_6d8._4_4_;
  if (pMVar35 != (MutexSys *)0x2) {
    uStack_6d8._0_4_ = (float)local_580;
    local_6c0._8_4_ = uStack_57c;
    local_6c0._12_4_ = uStack_6d8._4_4_;
    local_6a0._8_4_ = uStack_578;
    local_6a0._12_4_ = uStack_6d8._4_4_;
    local_6d0._12_4_ = (undefined4)((ulong)uVar23 >> 0x20);
    local_6d0._8_4_ = local_570;
    local_6b0._8_4_ = uStack_56c;
    local_6b0._12_4_ = local_6d0._12_4_;
    local_690._8_4_ = uStack_568;
    local_690._12_4_ = local_6d0._12_4_;
    auVar58 = _local_6e0;
    if (pMVar35 != (MutexSys *)0x3) {
      uStack_6d8._4_4_ = (float)uStack_520;
      local_6c0._12_4_ = uStack_51c;
      local_6a0._12_4_ = uStack_518;
      local_6d0._12_4_ = uStack_510;
      local_6b0._12_4_ = uStack_50c;
      local_690._12_4_ = uStack_508;
      auVar58 = _local_6e0;
    }
  }
  _local_6e0 = auVar58;
  local_7e0._0_4_ = 0x50;
  local_7e0._4_4_ = 0;
  pMVar29 = *(MutexSys **)in_stack_00000010;
  if (local_8b8 != *(FastAllocator **)(pMVar29 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(pMVar29 + 8) != 0) {
      LOCK();
      *(long *)(*(long *)(pMVar29 + 8) + 0x118) =
           *(long *)(*(long *)(pMVar29 + 8) + 0x118) +
           *(long *)(pMVar29 + 0xa8) + *(long *)(pMVar29 + 0x68);
      UNLOCK();
      LOCK();
      *(long *)(*(long *)(pMVar29 + 8) + 0x120) =
           *(long *)(*(long *)(pMVar29 + 8) + 0x120) +
           (((*(long *)(pMVar29 + 0x98) + *(long *)(pMVar29 + 0x58)) - *(long *)(pMVar29 + 0x50)) -
           *(long *)(pMVar29 + 0x90));
      UNLOCK();
      LOCK();
      *(long *)(*(long *)(pMVar29 + 8) + 0x128) =
           *(long *)(*(long *)(pMVar29 + 8) + 0x128) +
           *(long *)(pMVar29 + 0xb0) + *(long *)(pMVar29 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(pMVar29 + 0x48) = 0;
    *(undefined8 *)(pMVar29 + 0x58) = 0;
    *(undefined8 *)(pMVar29 + 0x50) = 0;
    *(undefined8 *)(pMVar29 + 0x68) = 0;
    *(undefined8 *)(pMVar29 + 0x70) = 0;
    *(undefined8 *)(pMVar29 + 0x60) = 0;
    if (local_8b8 == (FastAllocator *)0x0) {
      *(undefined8 *)(pMVar29 + 0x88) = 0;
      uVar23 = 0;
      *(undefined8 *)(pMVar29 + 0x98) = 0;
      *(undefined8 *)(pMVar29 + 0x90) = 0;
      *(undefined8 *)(pMVar29 + 0xa8) = 0;
      *(undefined8 *)(pMVar29 + 0xb0) = 0;
    }
    else {
      uVar23 = *(undefined8 *)(local_8b8 + 0x10);
      *(undefined8 *)(pMVar29 + 0x88) = 0;
      *(undefined8 *)(pMVar29 + 0x98) = 0;
      *(undefined8 *)(pMVar29 + 0x60) = uVar23;
      *(undefined8 *)(pMVar29 + 0x90) = 0;
      *(undefined8 *)(pMVar29 + 0xa8) = 0;
      *(undefined8 *)(pMVar29 + 0xb0) = 0;
      *(undefined8 *)(pMVar29 + 0xa0) = 0;
      uVar23 = *(undefined8 *)(local_8b8 + 0x10);
    }
    *(undefined8 *)(pMVar29 + 0xa0) = uVar23;
    LOCK();
    *(FastAllocator **)(pMVar29 + 8) = local_8b8;
    UNLOCK();
    local_7a0 = pMVar29;
    embree::MutexSys::lock();
    puVar25 = *(undefined8 **)(local_8b8 + 0x138);
    if (puVar25 == *(undefined8 **)(local_8b8 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(local_8b8 + 0x130),puVar25,&local_7a0);
    }
    else {
      *puVar25 = pMVar29;
      *(long *)(local_8b8 + 0x138) = *(long *)(local_8b8 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  lVar17 = *(long *)(in_stack_00000010 + 0x10);
  *(long *)(in_stack_00000010 + 0x28) = *(long *)(in_stack_00000010 + 0x28) + 0x50;
  uVar22 = (ulong)(-(int)lVar17 & 0xf);
  uVar27 = lVar17 + 0x50 + uVar22;
  *(ulong *)(in_stack_00000010 + 0x10) = uVar27;
  if (*(ulong *)(in_stack_00000010 + 0x18) < uVar27) {
    *(long *)(in_stack_00000010 + 0x10) = lVar17;
    if (*(MutexSys **)(in_stack_00000010 + 0x20) < (MutexSys *)0x140) {
      puVar25 = (undefined8 *)FastAllocator::malloc(local_8b8,&local_7e0,0x40,false);
    }
    else {
      local_7a0 = *(MutexSys **)(in_stack_00000010 + 0x20);
      puVar25 = (undefined8 *)FastAllocator::malloc(local_8b8,&local_7a0,0x40,true);
      *(undefined8 **)(in_stack_00000010 + 8) = puVar25;
      *(long *)(in_stack_00000010 + 0x30) =
           (*(long *)(in_stack_00000010 + 0x18) + *(long *)(in_stack_00000010 + 0x30)) -
           *(long *)(in_stack_00000010 + 0x10);
      *(undefined8 *)(in_stack_00000010 + 0x10) = 0x50;
      *(MutexSys **)(in_stack_00000010 + 0x18) = local_7a0;
      if (local_7a0 < (MutexSys *)0x50) {
        local_7a0 = *(MutexSys **)(in_stack_00000010 + 0x20);
        *(undefined8 *)(in_stack_00000010 + 0x10) = 0;
        puVar25 = (undefined8 *)FastAllocator::malloc(local_8b8,&local_7a0,0x40,false);
        *(undefined8 **)(in_stack_00000010 + 8) = puVar25;
        *(long *)(in_stack_00000010 + 0x30) =
             (*(long *)(in_stack_00000010 + 0x18) + *(long *)(in_stack_00000010 + 0x30)) -
             *(long *)(in_stack_00000010 + 0x10);
        *(undefined8 *)(in_stack_00000010 + 0x10) = 0x50;
        *(MutexSys **)(in_stack_00000010 + 0x18) = local_7a0;
        if (local_7a0 < (MutexSys *)0x50) {
          puVar25 = (undefined8 *)0x0;
          *(undefined8 *)(in_stack_00000010 + 0x10) = 0;
        }
      }
    }
  }
  else {
    *(ulong *)(in_stack_00000010 + 0x30) = *(long *)(in_stack_00000010 + 0x30) + uVar22;
    puVar25 = (undefined8 *)(*(long *)(in_stack_00000010 + 8) + -0x50 + uVar27);
  }
  *puVar25 = 8;
  puVar25[1] = 8;
  puVar25[2] = 8;
  puVar25[3] = 8;
  uVar96 = _LC15;
  fVar62 = _LC9;
  fVar104 = SUB164(_local_6e0,0);
  fVar106 = SUB164(_local_6e0,4);
  fVar108 = SUB164(_local_6e0,8);
  fVar110 = SUB164(_local_6e0,0xc);
  fVar111 = local_6d0._0_4_;
  fVar112 = local_6d0._4_4_;
  fVar113 = local_6d0._8_4_;
  fVar114 = local_6d0._12_4_;
  auVar57._4_4_ = fVar104;
  auVar57._0_4_ = fVar106;
  auVar57._8_4_ = fVar110;
  auVar57._12_4_ = fVar108;
  auVar58 = minps(auVar57,_local_6e0);
  fVar83 = local_860._0_4_;
  fVar86 = local_860._4_4_;
  fVar89 = local_860._8_4_;
  bVar39 = -(fVar104 != fVar83);
  bVar42 = -(fVar106 != fVar86);
  bVar46 = -(fVar108 != fVar89);
  bVar51 = -(fVar110 != fVar61);
  auVar65._4_4_ = fVar111;
  auVar65._0_4_ = fVar112;
  auVar65._8_4_ = fVar114;
  auVar65._12_4_ = fVar113;
  auVar66 = maxps(auVar65,local_6d0);
  auVar92._0_8_ = auVar58._8_8_;
  auVar92._8_4_ = auVar58._0_4_;
  auVar92._12_4_ = auVar58._4_4_;
  auVar93 = minps(auVar92,auVar58);
  auVar59._0_8_ = auVar66._8_8_;
  auVar59._8_4_ = auVar66._0_4_;
  auVar59._12_4_ = auVar66._4_4_;
  auVar58 = maxps(auVar59,auVar66);
  fVar115 = auVar93._0_4_;
  fVar55 = (auVar58._0_4_ - fVar115) * __LC7;
  fVar72 = fVar55 / _LC8;
  if (fVar55 / _LC8 == 0.0) {
    fVar72 = _LC5;
  }
  fVar118 = 0.0;
  if (0.0 < fVar55) {
    fVar118 = _LC8 / fVar55;
  }
  fVar55 = (fVar104 - fVar115) * fVar118;
  fVar81 = (fVar106 - fVar115) * fVar118;
  fVar84 = (fVar108 - fVar115) * fVar118;
  fVar87 = (fVar110 - fVar115) * fVar118;
  if ((float)((uint)fVar87 & _LC15) < _LC9) {
    fVar87 = (float)((uint)((float)(int)fVar87 -
                           (float)(-(uint)(fVar87 < (float)(int)fVar87) & _LC11)) |
                    ~_LC15 & (uint)fVar87);
  }
  if ((float)((uint)fVar84 & _LC15) < _LC9) {
    fVar84 = (float)((uint)((float)(int)fVar84 -
                           (float)(-(uint)(fVar84 < (float)(int)fVar84) & _LC11)) |
                    ~_LC15 & (uint)fVar84);
  }
  if ((float)((uint)fVar81 & _LC15) < _LC9) {
    fVar81 = (float)((uint)((float)(int)fVar81 -
                           (float)(-(uint)(fVar81 < (float)(int)fVar81) & _LC11)) |
                    ~_LC15 & (uint)fVar81);
  }
  if ((float)((uint)fVar55 & _LC15) < _LC9) {
    fVar55 = (float)((uint)((float)(int)fVar55 -
                           (float)(-(uint)(fVar55 < (float)(int)fVar55) & _LC11)) |
                    ~_LC15 & (uint)fVar55);
  }
  uVar40 = ~-(uint)((int)fVar55 < 0) & (int)fVar55;
  uVar43 = ~-(uint)((int)fVar81 < 0) & (int)fVar81;
  uVar47 = ~-(uint)((int)fVar84 < 0) & (int)fVar84;
  uVar52 = ~-(uint)((int)fVar87 < 0) & (int)fVar87;
  fVar55 = (fVar111 - fVar115) * fVar118;
  fVar81 = (fVar112 - fVar115) * fVar118;
  fVar84 = (fVar113 - fVar115) * fVar118;
  fVar118 = (fVar114 - fVar115) * fVar118;
  if ((float)((uint)fVar118 & _LC15) < _LC9) {
    fVar118 = (float)((uint)((float)(int)fVar118 +
                            (float)(-(uint)((float)(int)fVar118 < fVar118) & _LC11)) |
                     ~_LC15 & (uint)fVar118);
  }
  if ((float)((uint)fVar84 & _LC15) < _LC9) {
    fVar84 = (float)((uint)((float)(int)fVar84 +
                           (float)(-(uint)((float)(int)fVar84 < fVar84) & _LC11)) |
                    ~_LC15 & (uint)fVar84);
  }
  if ((float)((uint)fVar81 & _LC15) < _LC9) {
    fVar81 = (float)((uint)((float)(int)fVar81 +
                           (float)(-(uint)((float)(int)fVar81 < fVar81) & _LC11)) |
                    ~_LC15 & (uint)fVar81);
  }
  if ((float)((uint)fVar55 & _LC15) < _LC9) {
    fVar55 = (float)((uint)((float)(int)fVar55 +
                           (float)(-(uint)((float)(int)fVar55 < fVar55) & _LC11)) |
                    ~_LC15 & (uint)fVar55);
  }
  *(float *)((long)puVar25 + 0x44) = fVar72;
  uVar50 = _UNK_001171bc;
  uVar45 = _UNK_001171b8;
  uVar44 = _UNK_001171b4;
  uVar41 = __LC13;
  uVar99 = -(uint)((int)fVar55 < (int)__LC13);
  uVar100 = -(uint)((int)fVar81 < (int)_UNK_001171b4);
  uVar101 = -(uint)((int)fVar84 < (int)_UNK_001171b8);
  uVar102 = -(uint)((int)fVar118 < (int)_UNK_001171bc);
  uVar48 = (int)fVar55 & uVar99 | ~uVar99 & __LC13;
  uVar49 = (int)fVar81 & uVar100 | ~uVar100 & _UNK_001171b4;
  uVar53 = (int)fVar84 & uVar101 | ~uVar101 & _UNK_001171b8;
  uVar54 = (int)fVar118 & uVar102 | ~uVar102 & _UNK_001171bc;
  uVar99 = -(uint)(fVar104 < (float)(int)uVar40 * fVar72 + fVar115);
  uVar100 = -(uint)(fVar106 < (float)(int)uVar43 * fVar72 + fVar115);
  uVar101 = -(uint)(fVar108 < (float)(int)uVar47 * fVar72 + fVar115);
  uVar102 = -(uint)(fVar110 < (float)(int)uVar52 * fVar72 + fVar115);
  uVar99 = uVar40 - 1 & uVar99 | ~uVar99 & uVar40;
  uVar100 = uVar43 - 1 & uVar100 | ~uVar100 & uVar43;
  uVar101 = uVar47 - 1 & uVar101 | ~uVar101 & uVar47;
  uVar102 = uVar52 - 1 & uVar102 | ~uVar102 & uVar52;
  uVar40 = -(uint)(fVar72 * (float)(int)uVar48 + fVar115 < fVar111);
  uVar43 = -(uint)(fVar72 * (float)(int)uVar49 + fVar115 < fVar112);
  uVar47 = -(uint)(fVar72 * (float)(int)uVar53 + fVar115 < fVar113);
  uVar52 = -(uint)(fVar72 * (float)(int)uVar54 + fVar115 < fVar114);
  bVar13 = (byte)__LC13;
  bVar14 = (byte)_UNK_001171b4;
  bVar15 = (byte)_UNK_001171b8;
  bVar16 = (byte)_UNK_001171bc;
  uVar40 = uVar48 + __LC28 & uVar40 | ~uVar40 & uVar48;
  uVar43 = uVar49 + _UNK_001171c4 & uVar43 | ~uVar43 & uVar49;
  uVar47 = uVar53 + _UNK_001171c8 & uVar47 | ~uVar47 & uVar53;
  uVar52 = uVar54 + _UNK_001171cc & uVar52 | ~uVar52 & uVar54;
  bVar103 = -((int)uVar40 < (int)__LC13);
  bVar105 = -((int)uVar43 < (int)_UNK_001171b4);
  bVar107 = -((int)uVar47 < (int)_UNK_001171b8);
  bVar109 = -((int)uVar52 < (int)_UNK_001171bc);
  *(byte *)(puVar25 + 4) = ~-((int)uVar99 < 0) & (byte)uVar99 & bVar39 | ~bVar39 & bVar13;
  *(byte *)((long)puVar25 + 0x21) = ~-((int)uVar100 < 0) & (byte)uVar100 & bVar42 | ~bVar42 & bVar14
  ;
  *(byte *)((long)puVar25 + 0x22) = ~-((int)uVar101 < 0) & (byte)uVar101 & bVar46 | ~bVar46 & bVar15
  ;
  *(byte *)((long)puVar25 + 0x23) = ~-((int)uVar102 < 0) & (byte)uVar102 & bVar51 | ~bVar51 & bVar16
  ;
  *(float *)(puVar25 + 7) = fVar115;
  *(byte *)((long)puVar25 + 0x24) = ((byte)uVar40 & bVar103 | ~bVar103 & bVar13) & bVar39;
  *(byte *)((long)puVar25 + 0x25) = ((byte)uVar43 & bVar105 | ~bVar105 & bVar14) & bVar42;
  *(byte *)((long)puVar25 + 0x26) = ((byte)uVar47 & bVar107 | ~bVar107 & bVar15) & bVar46;
  *(byte *)((long)puVar25 + 0x27) = ((byte)uVar52 & bVar109 | ~bVar109 & bVar16) & bVar51;
  fVar104 = local_6c0._0_4_;
  fVar106 = local_6c0._4_4_;
  fVar108 = local_6c0._8_4_;
  fVar110 = local_6c0._12_4_;
  fVar111 = local_6b0._0_4_;
  fVar112 = local_6b0._4_4_;
  fVar113 = local_6b0._8_4_;
  fVar114 = local_6b0._12_4_;
  auVar77._4_4_ = fVar104;
  auVar77._0_4_ = fVar106;
  auVar77._8_4_ = fVar110;
  auVar77._12_4_ = fVar108;
  auVar58 = minps(auVar77,local_6c0);
  bVar39 = -(fVar104 != fVar83);
  bVar42 = -(fVar106 != fVar86);
  bVar46 = -(fVar108 != fVar89);
  bVar51 = -(fVar110 != fVar61);
  auVar97._4_4_ = fVar111;
  auVar97._0_4_ = fVar112;
  auVar97._8_4_ = fVar114;
  auVar97._12_4_ = fVar113;
  auVar93 = maxps(auVar97,local_6b0);
  auVar94._0_8_ = auVar58._8_8_;
  auVar94._8_4_ = auVar58._0_4_;
  auVar94._12_4_ = auVar58._4_4_;
  auVar66 = minps(auVar94,auVar58);
  auVar78._0_8_ = auVar93._8_8_;
  auVar78._8_4_ = auVar93._0_4_;
  auVar78._12_4_ = auVar93._4_4_;
  auVar58 = maxps(auVar78,auVar93);
  fVar115 = auVar66._0_4_;
  fVar55 = (auVar58._0_4_ - fVar115) * __LC7;
  fVar72 = fVar55 / _LC8;
  if (fVar55 / _LC8 == 0.0) {
    fVar72 = _LC5;
  }
  if (fVar55 <= 0.0) {
    fVar55 = 0.0;
  }
  else {
    fVar55 = _LC8 / fVar55;
  }
  fVar118 = (fVar104 - fVar115) * fVar55;
  fVar81 = (fVar106 - fVar115) * fVar55;
  fVar84 = (fVar108 - fVar115) * fVar55;
  fVar87 = (fVar110 - fVar115) * fVar55;
  if ((float)((uint)fVar87 & uVar96) < fVar62) {
    fVar87 = (float)((uint)((float)(int)fVar87 -
                           (float)(-(uint)(fVar87 < (float)(int)fVar87) & _LC11)) |
                    ~uVar96 & (uint)fVar87);
  }
  if ((float)((uint)fVar84 & uVar96) < fVar62) {
    fVar84 = (float)((uint)((float)(int)fVar84 -
                           (float)(-(uint)(fVar84 < (float)(int)fVar84) & _LC11)) |
                    ~uVar96 & (uint)fVar84);
  }
  if ((float)((uint)fVar81 & uVar96) < fVar62) {
    fVar81 = (float)((uint)((float)(int)fVar81 -
                           (float)(-(uint)(fVar81 < (float)(int)fVar81) & _LC11)) |
                    ~uVar96 & (uint)fVar81);
  }
  if ((float)((uint)fVar118 & uVar96) < fVar62) {
    fVar118 = (float)((uint)((float)(int)fVar118 -
                            (float)(-(uint)(fVar118 < (float)(int)fVar118) & _LC11)) |
                     ~uVar96 & (uint)fVar118);
  }
  uVar40 = ~-(uint)((int)fVar118 < 0) & (int)fVar118;
  uVar43 = ~-(uint)((int)fVar81 < 0) & (int)fVar81;
  uVar47 = ~-(uint)((int)fVar84 < 0) & (int)fVar84;
  uVar52 = ~-(uint)((int)fVar87 < 0) & (int)fVar87;
  fVar118 = (fVar111 - fVar115) * fVar55;
  fVar81 = (fVar112 - fVar115) * fVar55;
  fVar84 = (fVar113 - fVar115) * fVar55;
  fVar55 = (fVar114 - fVar115) * fVar55;
  if ((float)((uint)fVar55 & uVar96) < fVar62) {
    fVar55 = (float)((uint)((float)(int)fVar55 +
                           (float)(-(uint)((float)(int)fVar55 < fVar55) & _LC11)) |
                    ~uVar96 & (uint)fVar55);
  }
  if ((float)((uint)fVar84 & uVar96) < fVar62) {
    fVar84 = (float)((uint)((float)(int)fVar84 +
                           (float)(-(uint)((float)(int)fVar84 < fVar84) & _LC11)) |
                    ~uVar96 & (uint)fVar84);
  }
  if ((float)((uint)fVar81 & uVar96) < fVar62) {
    fVar81 = (float)((uint)((float)(int)fVar81 +
                           (float)(-(uint)((float)(int)fVar81 < fVar81) & _LC11)) |
                    ~uVar96 & (uint)fVar81);
  }
  if ((float)((uint)fVar118 & uVar96) < fVar62) {
    fVar118 = (float)((uint)((float)(int)fVar118 +
                            (float)(-(uint)((float)(int)fVar118 < fVar118) & _LC11)) |
                     ~uVar96 & (uint)fVar118);
  }
  *(float *)(puVar25 + 9) = fVar72;
  uVar99 = -(uint)((int)fVar118 < (int)__LC13);
  uVar100 = -(uint)((int)fVar81 < (int)_UNK_001171b4);
  uVar101 = -(uint)((int)fVar84 < (int)_UNK_001171b8);
  uVar102 = -(uint)((int)fVar55 < (int)_UNK_001171bc);
  uVar71 = uVar99 & (int)fVar118 | ~uVar99 & uVar41;
  uVar82 = uVar100 & (int)fVar81 | ~uVar100 & uVar44;
  uVar85 = uVar101 & (int)fVar84 | ~uVar101 & uVar45;
  uVar88 = uVar102 & (int)fVar55 | ~uVar102 & uVar50;
  uVar99 = -(uint)(fVar104 < (float)(int)uVar40 * fVar72 + fVar115);
  uVar101 = -(uint)(fVar106 < (float)(int)uVar43 * fVar72 + fVar115);
  uVar48 = -(uint)(fVar108 < (float)(int)uVar47 * fVar72 + fVar115);
  uVar53 = -(uint)(fVar110 < (float)(int)uVar52 * fVar72 + fVar115);
  uVar100 = -(uint)(fVar72 * (float)(int)uVar71 + fVar115 < fVar111);
  uVar102 = -(uint)(fVar72 * (float)(int)uVar82 + fVar115 < fVar112);
  uVar49 = -(uint)(fVar72 * (float)(int)uVar85 + fVar115 < fVar113);
  uVar54 = -(uint)(fVar72 * (float)(int)uVar88 + fVar115 < fVar114);
  uVar99 = ~uVar99 & uVar40 | uVar40 - 1 & uVar99;
  uVar101 = ~uVar101 & uVar43 | uVar43 - 1 & uVar101;
  uVar48 = ~uVar48 & uVar47 | uVar47 - 1 & uVar48;
  uVar53 = ~uVar53 & uVar52 | uVar52 - 1 & uVar53;
  uVar40 = uVar71 + __LC28 & uVar100 | ~uVar100 & uVar71;
  uVar43 = uVar82 + _UNK_001171c4 & uVar102 | ~uVar102 & uVar82;
  uVar47 = uVar85 + _UNK_001171c8 & uVar49 | ~uVar49 & uVar85;
  uVar52 = uVar88 + _UNK_001171cc & uVar54 | ~uVar54 & uVar88;
  bVar103 = -((int)uVar40 < (int)__LC13);
  bVar105 = -((int)uVar43 < (int)_UNK_001171b4);
  bVar107 = -((int)uVar47 < (int)_UNK_001171b8);
  bVar109 = -((int)uVar52 < (int)_UNK_001171bc);
  *(byte *)(puVar25 + 5) = ~-((int)uVar99 < 0) & (byte)uVar99 & bVar39 | ~bVar39 & bVar13;
  *(byte *)((long)puVar25 + 0x29) = ~-((int)uVar101 < 0) & (byte)uVar101 & bVar42 | ~bVar42 & bVar14
  ;
  *(byte *)((long)puVar25 + 0x2a) = ~-((int)uVar48 < 0) & (byte)uVar48 & bVar46 | ~bVar46 & bVar15;
  *(byte *)((long)puVar25 + 0x2b) = ~-((int)uVar53 < 0) & (byte)uVar53 & bVar51 | ~bVar51 & bVar16;
  *(float *)((long)puVar25 + 0x3c) = fVar115;
  *(byte *)((long)puVar25 + 0x2c) = ((byte)uVar40 & bVar103 | ~bVar103 & bVar13) & bVar39;
  *(byte *)((long)puVar25 + 0x2d) = ((byte)uVar43 & bVar105 | ~bVar105 & bVar14) & bVar42;
  *(byte *)((long)puVar25 + 0x2e) = ((byte)uVar47 & bVar107 | ~bVar107 & bVar15) & bVar46;
  *(byte *)((long)puVar25 + 0x2f) = ((byte)uVar52 & bVar109 | ~bVar109 & bVar16) & bVar51;
  fVar110 = local_6a0._0_4_;
  fVar111 = local_6a0._4_4_;
  fVar112 = local_6a0._8_4_;
  fVar113 = local_6a0._12_4_;
  fVar115 = local_690._0_4_;
  fVar104 = local_690._4_4_;
  fVar106 = local_690._8_4_;
  fVar108 = local_690._12_4_;
  auVar79._4_4_ = fVar110;
  auVar79._0_4_ = fVar111;
  auVar79._8_4_ = fVar113;
  auVar79._12_4_ = fVar112;
  bVar39 = -(fVar83 != fVar110);
  bVar42 = -(fVar86 != fVar111);
  bVar46 = -(fVar89 != fVar112);
  bVar51 = -(fVar61 != fVar113);
  auVar58 = minps(auVar79,local_6a0);
  auVar98._4_4_ = fVar115;
  auVar98._0_4_ = fVar104;
  auVar98._8_4_ = fVar108;
  auVar98._12_4_ = fVar106;
  auVar93 = maxps(auVar98,local_690);
  auVar95._0_8_ = auVar58._8_8_;
  auVar95._8_4_ = auVar58._0_4_;
  auVar95._12_4_ = auVar58._4_4_;
  auVar66 = minps(auVar95,auVar58);
  auVar80._0_8_ = auVar93._8_8_;
  auVar80._8_4_ = auVar93._0_4_;
  auVar80._12_4_ = auVar93._4_4_;
  auVar58 = maxps(auVar80,auVar93);
  fVar55 = auVar66._0_4_;
  fVar72 = (auVar58._0_4_ - fVar55) * __LC7;
  fVar61 = fVar72 / _LC8;
  if (fVar72 / _LC8 == 0.0) {
    fVar61 = _LC5;
  }
  if (fVar72 <= 0.0) {
    fVar72 = 0.0;
  }
  else {
    fVar72 = _LC8 / fVar72;
  }
  fVar114 = (fVar110 - fVar55) * fVar72;
  fVar83 = (fVar111 - fVar55) * fVar72;
  fVar86 = (fVar112 - fVar55) * fVar72;
  fVar89 = (fVar113 - fVar55) * fVar72;
  if ((float)((uint)fVar89 & uVar96) < fVar62) {
    fVar89 = (float)((uint)((float)(int)fVar89 -
                           (float)(-(uint)(fVar89 < (float)(int)fVar89) & _LC11)) |
                    ~uVar96 & (uint)fVar89);
  }
  if ((float)((uint)fVar86 & uVar96) < fVar62) {
    fVar86 = (float)((uint)((float)(int)fVar86 -
                           (float)(-(uint)(fVar86 < (float)(int)fVar86) & _LC11)) |
                    ~uVar96 & (uint)fVar86);
  }
  if ((float)((uint)fVar83 & uVar96) < fVar62) {
    fVar83 = (float)((uint)((float)(int)fVar83 -
                           (float)(-(uint)(fVar83 < (float)(int)fVar83) & _LC11)) |
                    ~uVar96 & (uint)fVar83);
  }
  if ((float)((uint)fVar114 & uVar96) < fVar62) {
    fVar114 = (float)((uint)((float)(int)fVar114 -
                            (float)(-(uint)(fVar114 < (float)(int)fVar114) & _LC11)) |
                     ~uVar96 & (uint)fVar114);
  }
  uVar40 = ~-(uint)((int)fVar114 < 0) & (int)fVar114;
  uVar43 = ~-(uint)((int)fVar83 < 0) & (int)fVar83;
  uVar47 = ~-(uint)((int)fVar86 < 0) & (int)fVar86;
  uVar52 = ~-(uint)((int)fVar89 < 0) & (int)fVar89;
  fVar114 = fVar72 * (fVar115 - fVar55);
  fVar83 = fVar72 * (fVar104 - fVar55);
  fVar86 = fVar72 * (fVar106 - fVar55);
  fVar72 = fVar72 * (fVar108 - fVar55);
  if ((float)((uint)fVar72 & uVar96) < fVar62) {
    fVar72 = (float)((uint)((float)(int)fVar72 +
                           (float)(-(uint)((float)(int)fVar72 < fVar72) & _LC11)) |
                    ~uVar96 & (uint)fVar72);
  }
  if ((float)((uint)fVar86 & uVar96) < fVar62) {
    fVar86 = (float)((uint)((float)(int)fVar86 +
                           (float)(-(uint)((float)(int)fVar86 < fVar86) & _LC11)) |
                    ~uVar96 & (uint)fVar86);
  }
  if ((float)((uint)fVar83 & uVar96) < fVar62) {
    fVar83 = (float)((uint)((float)(int)fVar83 +
                           (float)(-(uint)((float)(int)fVar83 < fVar83) & _LC11)) |
                    ~uVar96 & (uint)fVar83);
  }
  if ((float)((uint)fVar114 & uVar96) < fVar62) {
    fVar114 = (float)((uint)((float)(int)fVar114 +
                            (float)(-(uint)((float)(int)fVar114 < fVar114) & _LC11)) |
                     ~uVar96 & (uint)fVar114);
  }
  *(float *)((long)puVar25 + 0x4c) = fVar61;
  uVar101 = _UNK_001171bc;
  uVar100 = _UNK_001171b8;
  uVar99 = _UNK_001171b4;
  uVar96 = __LC13;
  *(float *)(puVar25 + 8) = fVar55;
  uVar27 = (ulong)puVar25 | 5;
  uVar96 = -(uint)((int)fVar114 < (int)uVar96);
  uVar99 = -(uint)((int)fVar83 < (int)uVar99);
  uVar100 = -(uint)((int)fVar86 < (int)uVar100);
  uVar101 = -(uint)((int)fVar72 < (int)uVar101);
  uVar102 = uVar96 & (int)fVar114 | ~uVar96 & uVar41;
  uVar48 = uVar99 & (int)fVar83 | ~uVar99 & uVar44;
  uVar49 = uVar100 & (int)fVar86 | ~uVar100 & uVar45;
  uVar53 = uVar101 & (int)fVar72 | ~uVar101 & uVar50;
  uVar96 = -(uint)(fVar110 < (float)(int)uVar40 * fVar61 + fVar55);
  uVar44 = -(uint)(fVar111 < (float)(int)uVar43 * fVar61 + fVar55);
  uVar50 = -(uint)(fVar112 < (float)(int)uVar47 * fVar61 + fVar55);
  uVar100 = -(uint)(fVar113 < (float)(int)uVar52 * fVar61 + fVar55);
  uVar41 = -(uint)(fVar61 * (float)(int)uVar102 + fVar55 < fVar115);
  uVar45 = -(uint)(fVar61 * (float)(int)uVar48 + fVar55 < fVar104);
  uVar99 = -(uint)(fVar61 * (float)(int)uVar49 + fVar55 < fVar106);
  uVar101 = -(uint)(fVar61 * (float)(int)uVar53 + fVar55 < fVar108);
  uVar96 = uVar40 - 1 & uVar96 | ~uVar96 & uVar40;
  uVar43 = uVar43 - 1 & uVar44 | ~uVar44 & uVar43;
  uVar44 = uVar47 - 1 & uVar50 | ~uVar50 & uVar47;
  uVar50 = uVar52 - 1 & uVar100 | ~uVar100 & uVar52;
  uVar40 = __LC28 + uVar102 & uVar41 | ~uVar41 & uVar102;
  uVar47 = _UNK_001171c4 + uVar48 & uVar45 | ~uVar45 & uVar48;
  uVar52 = _UNK_001171c8 + uVar49 & uVar99 | ~uVar99 & uVar49;
  uVar41 = _UNK_001171cc + uVar53 & uVar101 | ~uVar101 & uVar53;
  bVar103 = -((int)uVar40 < (int)__LC13);
  bVar105 = -((int)uVar47 < (int)_UNK_001171b4);
  bVar107 = -((int)uVar52 < (int)_UNK_001171b8);
  bVar109 = -((int)uVar41 < (int)_UNK_001171bc);
  *(byte *)(puVar25 + 6) = ~-((int)uVar96 < 0) & (byte)uVar96 & bVar39 | ~bVar39 & bVar13;
  *(byte *)((long)puVar25 + 0x31) = ~-((int)uVar43 < 0) & (byte)uVar43 & bVar42 | ~bVar42 & bVar14;
  *(byte *)((long)puVar25 + 0x32) = ~-((int)uVar44 < 0) & (byte)uVar44 & bVar46 | ~bVar46 & bVar15;
  *(byte *)((long)puVar25 + 0x33) = ~-((int)uVar50 < 0) & (byte)uVar50 & bVar51 | ~bVar51 & bVar16;
  *(byte *)((long)puVar25 + 0x34) = ((byte)uVar40 & bVar103 | ~bVar103 & bVar13) & bVar39;
  *(byte *)((long)puVar25 + 0x35) = ((byte)uVar47 & bVar105 | ~bVar105 & bVar14) & bVar42;
  *(byte *)((long)puVar25 + 0x36) = ((byte)uVar52 & bVar107 | ~bVar107 & bVar15) & bVar46;
  *(byte *)((long)puVar25 + 0x37) = ((byte)uVar41 & bVar109 | ~bVar109 & bVar16) & bVar51;
  pMVar29 = (MutexSys *)0x0;
  if (param_1[6] < (ulong)(param_2[0xb] - param_2[10])) {
    uStack_778 = SUB84(param_1,0);
    uStack_774 = (undefined4)((ulong)param_1 >> 0x20);
    local_7e0._0_4_ = 0;
    local_7e0._4_4_ = 0;
    uStack_798 = 0;
    uStack_788 = local_700;
    local_790 = (undefined1  [8])0x1;
    local_770 = (undefined1  [8])&local_7e0;
    local_7a0 = pMVar35;
    local_780 = local_8a0;
    lVar17 = embree::TaskScheduler::thread();
    if (lVar17 == 0) {
      this = (TaskScheduler *)embree::TaskScheduler::instance();
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::Defau___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (this,(_lambda___1_ *)&local_7a0,(TaskGroupContext *)&local_7e0,(ulong)pMVar35,true)
      ;
    }
    else {
      if (0xfff < *(ulong *)(lVar17 + 0x40080)) goto LAB_00112816;
      lVar19 = *(long *)(lVar17 + 0xc00c0);
      uVar22 = lVar19 + 0x40 + (ulong)(-(int)lVar19 & 0x3f);
      if (0x80000 < uVar22) goto LAB_00112816;
      *(ulong *)(lVar17 + 0xc00c0) = uVar22;
      puVar34 = (undefined8 *)(lVar17 + 0x40080 + uVar22);
      *puVar34 = &PTR_execute_001170f0;
      puVar34[1] = local_7a0;
      puVar34[2] = uStack_798;
      puVar34[3] = local_790;
      puVar34[4] = uStack_788;
      puVar34[5] = local_780;
      puVar34[6] = CONCAT44(uStack_774,uStack_778);
      puVar34[7] = local_770;
      lVar32 = *(long *)(lVar17 + 0x40080) * 0x40;
      piVar2 = (int *)(lVar17 + 0x40 + lVar32);
      lVar31 = *(long *)(lVar17 + 0xc0100);
      *(undefined4 *)(lVar17 + 0x44 + lVar32) = 1;
      *(undefined1 *)(lVar17 + 0x48 + lVar32) = 1;
      lVar32 = lVar32 + lVar17;
      *(undefined8 **)(lVar32 + 0x50) = puVar34;
      *(long *)(lVar32 + 0x58) = lVar31;
      *(TaskGroupContext **)(lVar32 + 0x60) = (TaskGroupContext *)&local_7e0;
      *(long *)(lVar32 + 0x68) = lVar19;
      *(MutexSys **)(lVar32 + 0x70) = pMVar35;
      if (lVar31 != 0) {
        LOCK();
        *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar2 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar17 + 0x40080) = *(long *)(lVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar17 + 0x40080) - 1U <= *(ulong *)(lVar17 + 0x40040)) {
        LOCK();
        *(long *)(lVar17 + 0x40040) = *(long *)(lVar17 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if ((MutexSys *)CONCAT44(local_7e0._4_4_,(undefined4)local_7e0) != (MutexSys *)0x0) {
      local_7a0 = (MutexSys *)CONCAT44(local_7e0._4_4_,(undefined4)local_7e0);
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_7a0);
LAB_00112816:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar34 = (undefined8 *)((ulong)puVar25 & 0xfffffffffffffff0);
    *puVar34 = CONCAT44(local_700[1],local_700[0]);
    puVar34[1] = CONCAT44(local_700[3],local_700[2]);
    if ((pMVar35 == (MutexSys *)0x2) || (puVar34[2] = uStack_6f0, pMVar35 == (MutexSys *)0x3))
    goto LAB_0010f7bc;
  }
  else {
    do {
      uVar23 = recurse(param_1,local_8a0,0);
      *(undefined8 *)(local_700 + (long)pMVar29 * 2) = uVar23;
      pMVar29 = pMVar29 + 1;
      local_8a0 = local_8a0 + 0xc;
    } while (pMVar35 != pMVar29);
    puVar34 = (undefined8 *)((ulong)puVar25 & 0xfffffffffffffff0);
    *puVar34 = CONCAT44(local_700[1],local_700[0]);
    puVar34[1] = CONCAT44(local_700[3],local_700[2]);
    local_780 = (long *)CONCAT44(local_780._4_4_,(undefined4)local_780);
    if ((pMVar35 == (MutexSys *)0x2) ||
       (puVar34[2] = uStack_6f0, local_780 = (long *)CONCAT44(local_780._4_4_,(undefined4)local_780)
       , pMVar35 != (MutexSys *)0x4)) goto LAB_0010f7bc;
  }
  *(undefined8 *)(((ulong)puVar25 & 0xfffffffffffffff0) + 0x18) = uStack_6e8;
LAB_0010f7bc:
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar27;
}



/* embree::NodeRefPtr<4> embree::sse2::GeneralBVHBuilder::build<embree::NodeRefPtr<4>,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>, embree::sse2::PrimInfoRange,
   embree::PrimRef, embree::FastAllocator::Create, embree::QuantizedNode_t<embree::NodeRefPtr<4>,
   4>::Create2, embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::BuildProgressMonitor>(embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>&,
   embree::PrimRef*, embree::sse2::PrimInfoRange const&, embree::FastAllocator::Create,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Create2,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1} const&,
   embree::BuildProgressMonitor const&, embree::sse2::GeneralBVHBuilder::Settings const&) */

void embree::sse2::GeneralBVHBuilder::
     build<embree::NodeRefPtr<4>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::BuildProgressMonitor>
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,ulong *param_7)

{
  long in_FS_OFFSET;
  undefined1 local_122;
  undefined1 local_121;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  long local_10;
  
  local_98 = *param_7;
  uStack_90 = param_7[1];
  local_88 = param_7[2];
  uStack_80 = param_7[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_7[4];
  uStack_70 = param_7[5];
  local_68 = param_7[6];
  uStack_60 = param_7[7];
  local_48 = &local_120;
  local_40 = &local_121;
  local_38 = &local_122;
  local_20 = &local_f8;
  local_28 = &local_118;
  local_120 = param_4;
  local_58 = param_2;
  local_50 = param_1;
  local_30 = param_5;
  local_18 = param_6;
  if (0x10 < *param_7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_a8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = *param_3;
  uStack_e4 = param_3[1];
  uStack_e0 = param_3[2];
  uStack_dc = param_3[3];
  local_f0 = 0;
  local_d8 = param_3[4];
  uStack_d4 = param_3[5];
  uStack_d0 = param_3[6];
  uStack_cc = param_3[7];
  local_c8 = param_3[8];
  uStack_c4 = param_3[9];
  uStack_c0 = param_3[10];
  uStack_bc = param_3[0xb];
  local_f8 = 1;
  local_b8 = param_3[0xc];
  uStack_b4 = param_3[0xd];
  uStack_b0 = param_3[0xe];
  uStack_ac = param_3[0xf];
  local_a0 = *(undefined8 *)(param_3 + 0x12);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
  ::recurse(&local_98,local_20,1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings) */

void embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5)

{
  long in_FS_OFFSET;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  long local_20;
  long local_10;
  
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  local_58 = param_5[4];
  uStack_54 = param_5[5];
  uStack_50 = param_5[6];
  uStack_4c = param_5[7];
  local_48 = param_5[8];
  uStack_44 = param_5[9];
  uStack_40 = param_5[10];
  uStack_3c = param_5[0xb];
  local_38 = param_5[0xc];
  uStack_34 = param_5[0xd];
  uStack_30 = param_5[0xe];
  uStack_2c = param_5[0xf];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(long *)(param_5 + 0x12) - *(long *)(param_5 + 0x10);
  uStack0000000000000008 = 4;
  uStack0000000000000010 = 0x28;
  local_28 = 0;
  local_78 = param_1;
  local_70 = param_4;
  GeneralBVHBuilder::
  build<embree::NodeRefPtr<4>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::BuildProgressMonitor>
            (&local_70,param_4,&local_68,param_2,&local_78,param_3,&stack0x00000008);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Create2,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Create2,
   embree::QuantizedNode_t<embree::NodeRefPtr<4>, 4>::Set2,
   embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuild...mbree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuild___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  TaskGroupContext *pTVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  TaskScheduler *pTVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  TaskGroupContext *local_78;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  uVar12 = *(ulong *)(this + 8);
  uVar11 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar12 - uVar11) {
    pTVar4 = *(TaskGroupContext **)(this + 0x38);
    uStack_50 = *(undefined8 *)(this + 0x20);
    uStack_48 = *(undefined8 *)(this + 0x28);
    uStack_40 = *(undefined8 *)(this + 0x30);
    uVar12 = uVar12 + uVar11 >> 1;
    local_68 = uVar12;
    uStack_60 = uVar11;
    local_58 = *(ulong *)(this + 0x18);
    local_38 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar10 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::Defau___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar10,(_lambda___1_ *)&local_68,pTVar4,uVar12 - uVar11,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) goto LAB_00112e5e;
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar2 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar2) goto LAB_00112e5e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar7 + 0x40080 + uVar2);
      *puVar3 = &PTR_execute_001170f0;
      puVar3[1] = local_68;
      puVar3[2] = uStack_60;
      puVar3[7] = local_38;
      puVar3[3] = local_58;
      puVar3[4] = uStack_50;
      puVar3[5] = uStack_48;
      puVar3[6] = uStack_40;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar12 - uVar11;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_98 = *(undefined8 *)(this + 0x18);
    local_a8 = *(long *)(this + 8);
    pTVar4 = *(TaskGroupContext **)(this + 0x38);
    uStack_90 = *(undefined8 *)(this + 0x20);
    uStack_88 = *(undefined8 *)(this + 0x28);
    uStack_80 = *(undefined8 *)(this + 0x30);
    uVar11 = local_a8 - uVar12;
    uStack_a0 = uVar12;
    local_78 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar10 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::Defau___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar10,(_lambda___1_ *)&local_a8,pTVar4,uVar11,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) {
LAB_00112e5e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar12 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar12) goto LAB_00112e5e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar12;
      puVar3 = (undefined8 *)(lVar7 + 0x40080 + uVar12);
      *puVar3 = &PTR_execute_001170f0;
      puVar3[1] = local_a8;
      puVar3[2] = uStack_a0;
      puVar3[7] = local_78;
      puVar3[3] = local_98;
      puVar3[4] = uStack_90;
      puVar3[5] = uStack_88;
      puVar3[6] = uStack_80;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar11;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    for (; uVar11 < uVar12; uVar11 = uVar11 + 1) {
      lVar7 = *(long *)(this + 0x20);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uVar9 = sse2::GeneralBVHBuilder::
              BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
              ::recurse(*(undefined8 *)(this + 0x30),uVar11 * 0x60 + *(long *)(this + 0x28),1);
      *(undefined8 *)(lVar7 + uVar11 * 8) = uVar9;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Set3, embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator, bool) */

undefined8 *
embree::sse2::GeneralBVHBuilder::
BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
::recurse(ulong *param_1,long *param_2,char param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  float *pfVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined1 (*pauVar20) [16];
  TaskScheduler *this;
  int iVar21;
  TaskGroupContext *pTVar22;
  long lVar23;
  TaskGroupContext *pTVar24;
  TaskGroupContext *pTVar25;
  undefined8 *puVar26;
  TaskGroupContext *pTVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  long lVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  TaskGroupContext *pTVar36;
  long in_FS_OFFSET;
  float fVar37;
  float fVar43;
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auVar60 [16];
  undefined4 uVar64;
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  FastAllocator *in_stack_00000008;
  MutexSys *in_stack_00000010;
  uint local_898;
  uint uStack_894;
  uint uStack_890;
  uint uStack_88c;
  undefined1 local_888 [16];
  undefined1 *local_838;
  FastAllocator *local_820;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__CentGeom<embree::BBox<embree::Vec3fa>_>_const___4_
  local_7cb;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__PrimRef_const___3_ local_7ca;
  EmptyTy local_7c9;
  PrimInfoRange *local_7c8;
  int *local_7c0;
  undefined1 *local_7b8;
  undefined1 local_7a8 [16];
  float local_798;
  float fStack_794;
  float fStack_790;
  float fStack_78c;
  undefined1 local_788 [16];
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  undefined1 local_768 [16];
  float local_758;
  float fStack_754;
  undefined8 uStack_750;
  undefined1 local_748 [12];
  undefined4 uStack_73c;
  undefined8 local_738;
  float fStack_730;
  float fStack_72c;
  int local_728;
  int iStack_724;
  int iStack_720;
  int iStack_71c;
  undefined1 local_718 [16];
  float local_708;
  int local_704;
  int local_700;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  int local_6c8 [4];
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  TaskGroupContext *local_5f8 [2];
  long local_5e8;
  undefined1 local_5e0;
  undefined1 local_5d8 [16];
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  TaskGroupContext *local_598;
  long local_590;
  long local_588;
  undefined1 local_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  long local_538;
  long local_530;
  undefined1 local_520;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  long local_4d8;
  long local_4d0;
  undefined1 local_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  long local_478;
  long local_470;
  undefined1 local_460;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  long local_418;
  long local_410;
  undefined1 local_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  long local_3b8;
  long local_3b0;
  undefined1 local_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  long local_358;
  long local_350;
  undefined1 local_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  long local_2f8;
  long local_2f0;
  undefined1 local_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  long local_298;
  long local_290;
  undefined1 local_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  long local_238;
  long local_230;
  undefined1 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  long local_1d8;
  long local_1d0;
  undefined1 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  long local_178;
  long local_170;
  undefined1 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  long local_118;
  long local_110;
  undefined1 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  long local_b8;
  long local_b0;
  undefined1 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  long local_58;
  long local_50;
  undefined1 auStack_48 [8];
  long local_40;
  
  lVar23 = lRam00000000001135e4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_820 = in_stack_00000008;
  if (in_stack_00000008 == (FastAllocator *)0x0) {
    local_820 = *(FastAllocator **)param_1[10];
    in_stack_00000010 = *(MutexSys **)(in_FS_OFFSET + lRam00000000001135e4);
    if (in_stack_00000010 == (MutexSys *)0x0) {
      in_stack_00000010 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(in_stack_00000010);
      *(MutexSys **)(in_stack_00000010 + 0x40) = in_stack_00000010;
      *(undefined8 *)(in_stack_00000010 + 8) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x48) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x50) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x58) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x60) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x68) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x70) = 0;
      *(MutexSys **)(in_stack_00000010 + 0x80) = in_stack_00000010;
      *(undefined8 *)(in_stack_00000010 + 0x88) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x90) = 0;
      *(undefined8 *)(in_stack_00000010 + 0x98) = 0;
      *(undefined8 *)(in_stack_00000010 + 0xa0) = 0;
      *(undefined8 *)(in_stack_00000010 + 0xa8) = 0;
      *(undefined8 *)(in_stack_00000010 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar23) = in_stack_00000010;
      embree::MutexSys::lock();
      local_768._0_8_ = in_stack_00000010;
      if (__MutexSys == _vtable) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,local_768);
        uVar18 = local_768._0_8_;
        if ((MutexSys *)local_768._0_8_ != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_768._0_8_);
          embree::alignedFree((void *)uVar18);
        }
      }
      else {
        *__MutexSys = in_stack_00000010;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    in_stack_00000010 = in_stack_00000010 + 0x40;
  }
  if ((param_3 != '\0') && ((ulong)(param_2[0xb] - param_2[10]) <= param_1[6])) {
    if ((code *)**(undefined8 **)param_1[0x10] == Scene::BuildProgressMonitorInterface::operator())
    {
      embree::Scene::progressMonitor((double)(ulong)(param_2[0xb] - param_2[10]));
    }
    else {
      (*(code *)**(undefined8 **)param_1[0x10])();
    }
  }
  HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find
            ((PrimInfoRange *)&local_708,*(ulong *)param_1[9]);
  uVar66 = _LC4;
  fVar70 = _LC2;
  piVar2 = (int *)CONCAT44(uStack_750._4_4_,(float)uStack_750);
  pTVar27 = (TaskGroupContext *)param_2[0xb];
  pTVar36 = (TaskGroupContext *)param_2[10];
  auVar74 = *(undefined1 (*) [16])(param_2 + 2);
  auVar76 = *(undefined1 (*) [16])(param_2 + 4);
  uVar28 = (long)pTVar27 - (long)pTVar36;
  if (((uVar28 <= param_1[3]) || (lVar23 = *param_2, param_1[1] <= lVar23 + 8U)) ||
     ((uVar28 <= param_1[4] &&
      (fVar43 = auVar76._4_4_ - auVar74._4_4_, fVar44 = auVar76._8_4_ - auVar74._8_4_,
      fVar43 = (fVar43 + fVar44) * (auVar76._0_4_ - auVar74._0_4_) + fVar43 * fVar44,
      (float)((uVar28 - 1) + (1L << ((byte)param_1[2] & 0x3f)) >> ((byte)param_1[2] & 0x3f)) *
      fVar43 * *(float *)((long)param_1 + 0x2c) <=
      *(float *)(param_1 + 5) * fVar43 + *(float *)((long)param_1 + 0x2c) * local_708)))) {
    puVar12 = (undefined8 *)(*(long *)param_1[9] + (long)pTVar27 * 0x20);
    puVar26 = (undefined8 *)(*(long *)param_1[9] + (long)pTVar36 * 0x20);
    if (puVar12 != puVar26) {
      lVar23 = (long)pTVar27 * 0x20 + (long)pTVar36 * -0x20;
      uVar28 = lVar23 >> 5;
      if (uVar28 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar26,puVar12,0xfffffffffffffffe);
      }
      else {
        lVar33 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar26,puVar12,(long)(int)lVar33 * 2);
        if (0x200 < lVar23) {
          puVar32 = puVar26 + 0x40;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar26,puVar32)
          ;
          for (; puVar12 != puVar32; puVar32 = puVar32 + 4) {
            while( true ) {
              uVar18 = puVar32[2];
              uVar7 = puVar32[3];
              uVar8 = *puVar32;
              uVar9 = puVar32[1];
              uVar28 = CONCAT44(*(undefined4 *)((long)puVar32 + 0x1c),
                                *(undefined4 *)((long)puVar32 + 0xc));
              puVar26 = puVar32;
              if (CONCAT44(*(undefined4 *)((long)puVar32 + -4),
                           *(undefined4 *)((long)puVar32 + -0x14)) <= uVar28) break;
              do {
                puVar6 = puVar26;
                puVar26 = puVar6 + -4;
                *puVar6 = *puVar26;
                puVar6[1] = puVar6[-3];
                puVar6[2] = puVar6[-2];
                puVar6[3] = puVar6[-1];
              } while (uVar28 < CONCAT44(*(undefined4 *)((long)puVar6 + -0x24),
                                         *(undefined4 *)((long)puVar6 + -0x34)));
              puVar32 = puVar32 + 4;
              *puVar26 = uVar8;
              puVar6[-3] = uVar9;
              puVar6[-2] = uVar18;
              puVar6[-1] = uVar7;
              if (puVar12 == puVar32) goto LAB_00113050;
            }
            *puVar32 = uVar8;
            puVar32[1] = uVar9;
            puVar32[2] = uVar18;
            puVar32[3] = uVar7;
          }
          goto LAB_00113050;
        }
      }
      std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar26,puVar12);
    }
LAB_00113050:
    puVar12 = (undefined8 *)createLargeLeaf(param_1,param_2);
    goto LAB_00113095;
  }
  plVar19 = (long *)param_1[9];
  uVar67 = uVar66;
  uVar68 = uVar66;
  uVar69 = uVar66;
  fVar43 = fVar70;
  fVar44 = fVar70;
  fVar71 = fVar70;
  if (uVar28 < 0xc00) {
    lVar33 = *plVar19;
    lVar30 = (long)pTVar27 * 0x20;
    pauVar20 = (undefined1 (*) [16])(lVar33 + (long)pTVar36 * 0x20);
    if (local_704 != -1) {
      uVar28 = (ulong)(uint)(1 << ((byte)local_704 & 0x1f));
      local_5a8._4_4_ = _LC2;
      local_5a8._0_4_ = _LC2;
      local_5a8._8_4_ = _LC2;
      local_5a8._12_4_ = _LC2;
      uVar18 = (&mm_lookupmask_ps)[uVar28 * 2];
      uVar7 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar28 * 0x10);
      pauVar14 = (undefined1 (*) [16])(lVar33 + -0x20 + lVar30);
      local_5b8._4_4_ = _LC4;
      local_5b8._0_4_ = _LC4;
      local_5b8._8_4_ = _LC4;
      local_5b8._12_4_ = _LC4;
      local_888._4_4_ = _LC4;
      local_888._0_4_ = _LC4;
      local_888._8_4_ = _LC4;
      local_888._12_4_ = _LC4;
      auVar74._4_4_ = _LC2;
      auVar74._0_4_ = _LC2;
      auVar74._8_4_ = _LC2;
      auVar74._12_4_ = _LC2;
      auVar75._4_4_ = _LC4;
      auVar75._0_4_ = _LC4;
      auVar75._8_4_ = _LC4;
      auVar75._12_4_ = _LC4;
      auVar76._4_4_ = _LC2;
      auVar76._0_4_ = _LC2;
      auVar76._8_4_ = _LC2;
      auVar76._12_4_ = _LC2;
      auVar77._4_4_ = _LC4;
      auVar77._0_4_ = _LC4;
      auVar77._8_4_ = _LC4;
      auVar77._12_4_ = _LC4;
      pauVar15 = pauVar20;
      local_5c8 = _LC2;
      fStack_5c4 = _LC2;
      uStack_750._0_4_ = _LC2;
      uStack_750._4_4_ = _LC2;
      for (; pauVar20 <= pauVar14; pauVar20 = pauVar20 + 2) {
        auVar78 = pauVar20[1];
        auVar41 = *pauVar20;
        auVar45._0_4_ = auVar78._0_4_ + auVar41._0_4_;
        auVar45._4_4_ = auVar78._4_4_ + auVar41._4_4_;
        auVar45._8_4_ = auVar78._8_4_ + auVar41._8_4_;
        auVar45._12_4_ = auVar78._12_4_ + auVar41._12_4_;
        local_898 = (uint)uVar18;
        uStack_894 = (uint)((ulong)uVar18 >> 0x20);
        uStack_890 = (uint)uVar7;
        uStack_88c = (uint)((ulong)uVar7 >> 0x20);
        auVar52._0_4_ =
             -(uint)((int)((auVar45._0_4_ - local_6e8) * local_6d8 + _LC26) < local_700) & local_898
        ;
        auVar52._4_4_ =
             -(uint)((int)((auVar45._4_4_ - fStack_6e4) * fStack_6d4 + _UNK_001171e4) < local_700) &
             uStack_894;
        auVar52._8_4_ =
             -(uint)((int)((auVar45._8_4_ - fStack_6e0) * fStack_6d0 + _UNK_001171e8) < local_700) &
             uStack_890;
        auVar52._12_4_ =
             -(uint)((int)((auVar45._12_4_ - fStack_6dc) * fStack_6cc + _UNK_001171ec) < local_700)
             & uStack_88c;
        uVar29 = movmskps((int)pauVar15,auVar52);
        pauVar15 = (undefined1 (*) [16])(ulong)uVar29;
        if (uVar29 == 0) {
          auVar61._4_4_ = fStack_5c4;
          auVar61._0_4_ = local_5c8;
          auVar61._8_4_ = (float)uStack_750;
          auVar61._12_4_ = uStack_750._4_4_;
          pauVar16 = pauVar14;
          while( true ) {
            auVar60 = pauVar16[1];
            auVar42 = *pauVar16;
            pauVar14 = pauVar16 + -2;
            auVar54._0_4_ = auVar60._0_4_ + auVar42._0_4_;
            auVar54._4_4_ = auVar60._4_4_ + auVar42._4_4_;
            auVar54._8_4_ = auVar60._8_4_ + auVar42._8_4_;
            auVar54._12_4_ = auVar60._12_4_ + auVar42._12_4_;
            auVar47._0_4_ =
                 -(uint)((int)((auVar54._0_4_ - local_6e8) * local_6d8 + _LC26) < local_700) &
                 local_898;
            auVar47._4_4_ =
                 -(uint)((int)((auVar54._4_4_ - fStack_6e4) * fStack_6d4 + _UNK_001171e4) <
                        local_700) & uStack_894;
            auVar47._8_4_ =
                 -(uint)((int)((auVar54._8_4_ - fStack_6e0) * fStack_6d0 + _UNK_001171e8) <
                        local_700) & uStack_890;
            auVar47._12_4_ =
                 -(uint)((int)((auVar54._12_4_ - fStack_6dc) * fStack_6cc + _UNK_001171ec) <
                        local_700) & uStack_88c;
            uVar29 = movmskps((int)pauVar15,auVar47);
            pauVar15 = (undefined1 (*) [16])(ulong)uVar29;
            if (uVar29 != 0) break;
            local_888 = minps(local_888,auVar42);
            auVar61 = maxps(auVar61,auVar60);
            local_5b8 = minps(local_5b8,auVar54);
            local_5a8 = maxps(local_5a8,auVar54);
            pauVar16 = pauVar14;
            if (pauVar14 < pauVar20) {
              local_5c8 = auVar61._0_4_;
              fStack_5c4 = auVar61._4_4_;
              uStack_750._0_4_ = auVar61._8_4_;
              uStack_750._4_4_ = auVar61._12_4_;
              goto LAB_00113253;
            }
          }
          *pauVar20 = auVar42;
          auVar77 = minps(auVar77,auVar42);
          auVar76 = maxps(auVar76,auVar60);
          local_888 = minps(local_888,auVar41);
          auVar60 = maxps(auVar61,auVar78);
          auVar74 = maxps(auVar74,auVar54);
          local_5b8 = minps(local_5b8,auVar45);
          pauVar20[1] = pauVar16[1];
          auVar75 = minps(auVar75,auVar54);
          local_5a8 = maxps(local_5a8,auVar45);
          local_5c8 = auVar60._0_4_;
          fStack_5c4 = auVar60._4_4_;
          uStack_750._0_4_ = auVar60._8_4_;
          uStack_750._4_4_ = auVar60._12_4_;
          *pauVar16 = auVar41;
          pauVar16[1] = auVar78;
        }
        else {
          auVar77 = minps(auVar77,auVar41);
          auVar76 = maxps(auVar76,auVar78);
          auVar75 = minps(auVar75,auVar45);
          auVar74 = maxps(auVar74,auVar45);
        }
      }
LAB_00113253:
      auVar78._8_8_ = pTVar27;
      auVar78._0_8_ = *param_2;
      pTVar22 = (TaskGroupContext *)((long)pauVar20 - lVar33 >> 5);
      goto LAB_0011326a;
    }
    pauVar14 = (undefined1 (*) [16])(lVar33 + lVar30);
    if (pauVar14 != pauVar20) {
      lVar30 = lVar30 + (long)pTVar36 * -0x20;
      uVar28 = lVar30 >> 5;
      if (uVar28 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar20,pauVar14,0xfffffffffffffffe);
LAB_00115429:
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar20,pauVar14)
        ;
      }
      else {
        lVar23 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar20,pauVar14,(long)(int)lVar23 * 2);
        if (lVar30 < 0x201) goto LAB_00115429;
        pauVar15 = pauVar20 + 0x20;
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar20,pauVar15)
        ;
        for (; pauVar14 != pauVar15; pauVar15 = pauVar15 + 2) {
          uVar66 = *(undefined4 *)(pauVar15[1] + 0xc);
          uVar67 = *(undefined4 *)(*pauVar15 + 0xc);
          auVar74 = pauVar15[1];
          auVar76 = *pauVar15;
          uVar28 = CONCAT44(*(undefined4 *)(pauVar15[-1] + 0xc),*(undefined4 *)(pauVar15[-2] + 0xc))
          ;
          pauVar20 = pauVar15;
          while (CONCAT44(uVar66,uVar67) < uVar28) {
            uVar18 = *(undefined8 *)(pauVar20[-2] + 8);
            auVar77 = pauVar20[-1];
            *(undefined8 *)*pauVar20 = *(undefined8 *)pauVar20[-2];
            *(undefined8 *)(*pauVar20 + 8) = uVar18;
            pauVar20[1] = auVar77;
            uVar28 = CONCAT44(*(undefined4 *)(pauVar20[-3] + 0xc),
                              *(undefined4 *)(pauVar20[-4] + 0xc));
            pauVar20 = pauVar20 + -2;
          }
          *pauVar20 = auVar76;
          pauVar20[1] = auVar74;
        }
      }
      lVar33 = *plVar19;
      pTVar36 = (TaskGroupContext *)param_2[10];
      pTVar27 = (TaskGroupContext *)param_2[0xb];
      lVar23 = *param_2;
    }
    auVar78._8_8_ = pTVar27;
    auVar78._0_8_ = lVar23;
    piVar2 = (int *)CONCAT44(uStack_750._4_4_,(float)uStack_750);
    pTVar22 = (TaskGroupContext *)((ulong)(pTVar36 + (long)pTVar27) >> 1);
    if (pTVar36 < pTVar22) {
      auVar74._4_4_ = _LC2;
      auVar74._0_4_ = _LC2;
      auVar74._8_4_ = _LC2;
      auVar74._12_4_ = _LC2;
      auVar75._4_4_ = _LC4;
      auVar75._0_4_ = _LC4;
      auVar75._8_4_ = _LC4;
      auVar75._12_4_ = _LC4;
      auVar76._4_4_ = _LC2;
      auVar76._0_4_ = _LC2;
      auVar76._8_4_ = _LC2;
      auVar76._12_4_ = _LC2;
      auVar77._4_4_ = _LC4;
      auVar77._0_4_ = _LC4;
      auVar77._8_4_ = _LC4;
      auVar77._12_4_ = _LC4;
      pauVar20 = (undefined1 (*) [16])((long)pTVar36 * 0x20 + lVar33);
      do {
        auVar39._0_4_ = *(float *)pauVar20[1] + *(float *)*pauVar20;
        auVar39._4_4_ = *(float *)(pauVar20[1] + 4) + *(float *)(*pauVar20 + 4);
        auVar39._8_4_ = *(float *)(pauVar20[1] + 8) + *(float *)(*pauVar20 + 8);
        auVar39._12_4_ = *(float *)(pauVar20[1] + 0xc) + *(float *)(*pauVar20 + 0xc);
        pauVar14 = pauVar20 + 2;
        auVar77 = minps(auVar77,*pauVar20);
        auVar76 = maxps(auVar76,pauVar20[1]);
        auVar75 = minps(auVar75,auVar39);
        auVar74 = maxps(auVar74,auVar39);
        pauVar20 = pauVar14;
      } while (pauVar14 != (undefined1 (*) [16])((long)pTVar22 * 0x20 + lVar33));
    }
    else {
      auVar74._4_4_ = _LC2;
      auVar74._0_4_ = _LC2;
      auVar74._8_4_ = _LC2;
      auVar74._12_4_ = _LC2;
      auVar75._4_4_ = _LC4;
      auVar75._0_4_ = _LC4;
      auVar75._8_4_ = _LC4;
      auVar75._12_4_ = _LC4;
      auVar76._4_4_ = _LC2;
      auVar76._0_4_ = _LC2;
      auVar76._8_4_ = _LC2;
      auVar76._12_4_ = _LC2;
      auVar77._4_4_ = _LC4;
      auVar77._0_4_ = _LC4;
      auVar77._8_4_ = _LC4;
      auVar77._12_4_ = _LC4;
    }
    uVar66 = _LC4;
    uVar67 = _LC4;
    uVar68 = _LC4;
    uVar69 = _LC4;
    fVar70 = _LC2;
    fVar43 = _LC2;
    fVar44 = _LC2;
    fVar71 = _LC2;
    if (pTVar27 <= pTVar22) goto LAB_001156a8;
    local_5a8._4_4_ = _LC2;
    local_5a8._0_4_ = _LC2;
    local_5a8._8_4_ = _LC2;
    local_5a8._12_4_ = _LC2;
    local_5b8._4_4_ = _LC4;
    local_5b8._0_4_ = _LC4;
    local_5b8._8_4_ = _LC4;
    local_5b8._12_4_ = _LC4;
    auVar60._4_4_ = _LC2;
    auVar60._0_4_ = _LC2;
    auVar60._8_4_ = _LC2;
    auVar60._12_4_ = _LC2;
    local_888._4_4_ = _LC4;
    local_888._0_4_ = _LC4;
    local_888._8_4_ = _LC4;
    local_888._12_4_ = _LC4;
    pauVar20 = (undefined1 (*) [16])((long)pTVar22 * 0x20 + lVar33);
    do {
      auVar40._0_4_ = *(float *)pauVar20[1] + *(float *)*pauVar20;
      auVar40._4_4_ = *(float *)(pauVar20[1] + 4) + *(float *)(*pauVar20 + 4);
      auVar40._8_4_ = *(float *)(pauVar20[1] + 8) + *(float *)(*pauVar20 + 8);
      auVar40._12_4_ = *(float *)(pauVar20[1] + 0xc) + *(float *)(*pauVar20 + 0xc);
      pauVar14 = pauVar20 + 2;
      local_888 = minps(local_888,*pauVar20);
      auVar60 = maxps(auVar60,pauVar20[1]);
      local_5b8 = minps(local_5b8,auVar40);
      local_5a8 = maxps(local_5a8,auVar40);
      pauVar20 = pauVar14;
    } while (pauVar14 != (undefined1 (*) [16])(lVar33 + (long)pTVar27 * 0x20));
  }
  else {
    if (local_704 != -1) {
      local_7a8._4_4_ = _LC4;
      local_7a8._0_4_ = _LC4;
      local_7a8._8_4_ = _LC4;
      local_7a8._12_4_ = _LC4;
      local_648 = *(undefined1 (*) [16])
                   (&mm_lookupmask_ps + (ulong)(uint)(1 << ((byte)local_704 & 0x1f)) * 2);
      local_7c0 = local_6c8;
      local_7b8 = local_648;
      local_798 = _LC2;
      fStack_794 = _LC2;
      fStack_790 = _LC2;
      fStack_78c = _LC2;
      local_788._4_4_ = _LC4;
      local_788._0_4_ = _LC4;
      local_788._8_4_ = _LC4;
      local_788._12_4_ = _LC4;
      local_778 = _LC2;
      fStack_774 = _LC2;
      fStack_770 = _LC2;
      fStack_76c = _LC2;
      local_768._4_4_ = _LC4;
      local_768._0_4_ = _LC4;
      local_768._8_4_ = _LC4;
      local_768._12_4_ = _LC4;
      local_758 = _LC2;
      fStack_754 = _LC2;
      uStack_750._0_4_ = _LC2;
      uStack_750._4_4_ = _LC2;
      local_748._4_4_ = _LC4;
      local_748._0_4_ = _LC4;
      local_748._8_4_ = _LC4;
      uStack_73c = _LC4;
      local_738._0_4_ = _LC2;
      local_738._4_4_ = _LC2;
      fStack_730 = _LC2;
      fStack_72c = _LC2;
      local_6c8[0] = local_700;
      local_6c8[1] = local_700;
      local_6c8[2] = local_700;
      local_6c8[3] = local_700;
      local_7c8 = (PrimInfoRange *)&local_708;
      pTVar22 = (TaskGroupContext *)
                parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                          ((PrimRef *)*plVar19,(ulong)pTVar36,(ulong)pTVar27,&local_7c9,
                           (CentGeom *)local_7a8,(CentGeom *)local_768,
                           (_lambda_embree__PrimRef_const___1_ *)&local_7c8,&local_7ca,&local_7cb,
                           0x80);
      piVar2 = (int *)CONCAT44(uStack_750._4_4_,(float)uStack_750);
      auVar76._4_4_ = fStack_794;
      auVar76._0_4_ = local_798;
      auVar76._8_4_ = fStack_790;
      auVar76._12_4_ = fStack_78c;
      local_888 = local_768;
      auVar78._8_8_ = pTVar27;
      auVar78._0_8_ = *param_2;
      auVar74._4_4_ = fStack_774;
      auVar74._0_4_ = local_778;
      auVar74._8_4_ = fStack_770;
      auVar74._12_4_ = fStack_76c;
      local_5a8._8_4_ = fStack_730;
      local_5a8._0_8_ = local_738;
      local_5a8._12_4_ = fStack_72c;
      local_5c8 = local_758;
      fStack_5c4 = fStack_754;
      local_5b8 = _local_748;
      auVar75 = local_788;
      auVar77 = local_7a8;
      goto LAB_0011326a;
    }
    lVar33 = *plVar19;
    pauVar20 = (undefined1 (*) [16])(lVar33 + (long)pTVar27 * 0x20);
    pauVar14 = (undefined1 (*) [16])(lVar33 + (long)pTVar36 * 0x20);
    if (pauVar20 != pauVar14) {
      lVar23 = (long)pTVar27 * 0x20 + (long)pTVar36 * -0x20;
      uVar28 = lVar23 >> 5;
      if (uVar28 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar14,pauVar20,0xfffffffffffffffe);
LAB_0011566d:
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar14,pauVar20)
        ;
      }
      else {
        lVar33 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar14,pauVar20,(long)(int)lVar33 * 2);
        if (lVar23 < 0x201) goto LAB_0011566d;
        pauVar15 = pauVar14 + 0x20;
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar14,pauVar15)
        ;
        for (; pauVar20 != pauVar15; pauVar15 = pauVar15 + 2) {
          uVar66 = *(undefined4 *)(pauVar15[1] + 0xc);
          uVar67 = *(undefined4 *)(*pauVar15 + 0xc);
          auVar74 = pauVar15[1];
          auVar76 = *pauVar15;
          uVar28 = CONCAT44(*(undefined4 *)(pauVar15[-1] + 0xc),*(undefined4 *)(pauVar15[-2] + 0xc))
          ;
          pauVar14 = pauVar15;
          while (CONCAT44(uVar66,uVar67) < uVar28) {
            *pauVar14 = pauVar14[-2];
            pauVar14[1] = pauVar14[-1];
            uVar28 = CONCAT44(*(undefined4 *)(pauVar14[-3] + 0xc),
                              *(undefined4 *)(pauVar14[-4] + 0xc));
            pauVar14 = pauVar14 + -2;
          }
          *pauVar14 = auVar76;
          pauVar14[1] = auVar74;
        }
      }
      lVar33 = *plVar19;
      pTVar36 = (TaskGroupContext *)param_2[10];
      pTVar27 = (TaskGroupContext *)param_2[0xb];
      lVar23 = *param_2;
    }
    auVar78._8_8_ = pTVar27;
    auVar78._0_8_ = lVar23;
    piVar2 = (int *)CONCAT44(uStack_750._4_4_,(float)uStack_750);
    pTVar22 = (TaskGroupContext *)((ulong)(pTVar36 + (long)pTVar27) >> 1);
    if (pTVar36 < pTVar22) {
      auVar74._4_4_ = _LC2;
      auVar74._0_4_ = _LC2;
      auVar74._8_4_ = _LC2;
      auVar74._12_4_ = _LC2;
      auVar75._4_4_ = _LC4;
      auVar75._0_4_ = _LC4;
      auVar75._8_4_ = _LC4;
      auVar75._12_4_ = _LC4;
      auVar76._4_4_ = _LC2;
      auVar76._0_4_ = _LC2;
      auVar76._8_4_ = _LC2;
      auVar76._12_4_ = _LC2;
      auVar77._4_4_ = _LC4;
      auVar77._0_4_ = _LC4;
      auVar77._8_4_ = _LC4;
      auVar77._12_4_ = _LC4;
      pauVar20 = (undefined1 (*) [16])((long)pTVar36 * 0x20 + lVar33);
      do {
        auVar41._0_4_ = *(float *)pauVar20[1] + *(float *)*pauVar20;
        auVar41._4_4_ = *(float *)(pauVar20[1] + 4) + *(float *)(*pauVar20 + 4);
        auVar41._8_4_ = *(float *)(pauVar20[1] + 8) + *(float *)(*pauVar20 + 8);
        auVar41._12_4_ = *(float *)(pauVar20[1] + 0xc) + *(float *)(*pauVar20 + 0xc);
        pauVar14 = pauVar20 + 2;
        auVar77 = minps(auVar77,*pauVar20);
        auVar76 = maxps(auVar76,pauVar20[1]);
        auVar75 = minps(auVar75,auVar41);
        auVar74 = maxps(auVar74,auVar41);
        pauVar20 = pauVar14;
      } while (pauVar14 != (undefined1 (*) [16])((long)pTVar22 * 0x20 + lVar33));
    }
    else {
      auVar74._4_4_ = _LC2;
      auVar74._0_4_ = _LC2;
      auVar74._8_4_ = _LC2;
      auVar74._12_4_ = _LC2;
      auVar75._4_4_ = _LC4;
      auVar75._0_4_ = _LC4;
      auVar75._8_4_ = _LC4;
      auVar75._12_4_ = _LC4;
      auVar76._4_4_ = _LC2;
      auVar76._0_4_ = _LC2;
      auVar76._8_4_ = _LC2;
      auVar76._12_4_ = _LC2;
      auVar77._4_4_ = _LC4;
      auVar77._0_4_ = _LC4;
      auVar77._8_4_ = _LC4;
      auVar77._12_4_ = _LC4;
    }
    uVar66 = _LC4;
    uVar67 = _LC4;
    uVar68 = _LC4;
    uVar69 = _LC4;
    fVar70 = _LC2;
    fVar43 = _LC2;
    fVar44 = _LC2;
    fVar71 = _LC2;
    if (pTVar27 <= pTVar22) goto LAB_001156a8;
    local_5a8._4_4_ = _LC2;
    local_5a8._0_4_ = _LC2;
    local_5a8._8_4_ = _LC2;
    local_5a8._12_4_ = _LC2;
    local_5b8._4_4_ = _LC4;
    local_5b8._0_4_ = _LC4;
    local_5b8._8_4_ = _LC4;
    local_5b8._12_4_ = _LC4;
    auVar60._4_4_ = _LC2;
    auVar60._0_4_ = _LC2;
    auVar60._8_4_ = _LC2;
    auVar60._12_4_ = _LC2;
    local_888._4_4_ = _LC4;
    local_888._0_4_ = _LC4;
    local_888._8_4_ = _LC4;
    local_888._12_4_ = _LC4;
    pauVar20 = (undefined1 (*) [16])((long)pTVar22 * 0x20 + lVar33);
    do {
      auVar42._0_4_ = *(float *)pauVar20[1] + *(float *)*pauVar20;
      auVar42._4_4_ = *(float *)(pauVar20[1] + 4) + *(float *)(*pauVar20 + 4);
      auVar42._8_4_ = *(float *)(pauVar20[1] + 8) + *(float *)(*pauVar20 + 8);
      auVar42._12_4_ = *(float *)(pauVar20[1] + 0xc) + *(float *)(*pauVar20 + 0xc);
      pauVar14 = pauVar20 + 2;
      local_888 = minps(local_888,*pauVar20);
      auVar60 = maxps(auVar60,pauVar20[1]);
      local_5b8 = minps(local_5b8,auVar42);
      local_5a8 = maxps(local_5a8,auVar42);
      pauVar20 = pauVar14;
    } while (pauVar14 != (undefined1 (*) [16])(lVar33 + (long)pTVar27 * 0x20));
  }
  auVar78._8_8_ = pTVar27;
  auVar78._0_8_ = lVar23;
  piVar2 = (int *)CONCAT44(uStack_750._4_4_,(float)uStack_750);
  uStack_750._0_4_ = auVar60._8_4_;
  uStack_750._4_4_ = auVar60._12_4_;
  local_5c8 = auVar60._0_4_;
  fStack_5c4 = auVar60._4_4_;
  uVar66 = _LC4;
  uVar67 = _LC4;
  uVar68 = _LC4;
  uVar69 = _LC4;
  fVar70 = _LC2;
  fVar43 = _LC2;
  fVar44 = _LC2;
  fVar71 = _LC2;
LAB_0011326a:
  do {
    local_590 = auVar78._8_8_;
    local_838 = local_648;
    local_5e8 = auVar78._0_8_ + 1;
    local_648[8] = 0;
    local_648._0_8_ = local_5e8;
    local_5e0 = 0;
    local_5d8 = local_888;
    local_638 = auVar77;
    local_628 = auVar76;
    local_618 = auVar75;
    local_608 = auVar74;
    local_5f8[0] = pTVar36;
    local_5f8[1] = pTVar22;
    fStack_5c0 = (float)uStack_750;
    fStack_5bc = uStack_750._4_4_;
    local_598 = pTVar22;
    if (*param_1 < 3) {
      lVar23 = 0xc0;
      pTVar27 = (TaskGroupContext *)0x2;
    }
    else {
      pTVar27 = (TaskGroupContext *)0x2;
      plVar19 = &local_588;
      do {
        pTVar24 = (TaskGroupContext *)0x0;
        pTVar25 = (TaskGroupContext *)0xffffffffffffffff;
        pfVar13 = (float *)local_638;
        pTVar36 = local_5f8[1];
        pTVar22 = local_5f8[0];
        fVar58 = _LC2;
        while( true ) {
          if ((param_1[3] < (ulong)((long)pTVar36 - (long)pTVar22)) &&
             (fVar37 = (pfVar13[4] - *pfVar13) *
                       ((pfVar13[5] - pfVar13[1]) + (pfVar13[6] - pfVar13[2])) +
                       (pfVar13[5] - pfVar13[1]) * (pfVar13[6] - pfVar13[2]), fVar58 < fVar37)) {
            pTVar25 = pTVar24;
            fVar58 = fVar37;
          }
          pTVar24 = pTVar24 + 1;
          if (pTVar24 == pTVar27) break;
          pTVar36 = *(TaskGroupContext **)(pfVar13 + 0x2a);
          pTVar22 = *(TaskGroupContext **)(pfVar13 + 0x28);
          pfVar13 = pfVar13 + 0x18;
        }
        if (pTVar25 == (TaskGroupContext *)0xffffffffffffffff) break;
        lVar23 = *param_2;
        lVar33 = (long)pTVar25 * 0x60;
        uStack_750 = piVar2;
        HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find
                  ((PrimInfoRange *)local_6c8,*(ulong *)param_1[9]);
        plVar5 = (long *)param_1[9];
        pTVar36 = local_5f8[(long)pTVar25 * 0xc + 1];
        pTVar22 = local_5f8[(long)pTVar25 * 0xc];
        uVar59 = uVar66;
        uVar62 = uVar67;
        uVar63 = uVar68;
        uVar64 = uVar69;
        if ((ulong)((long)pTVar36 - (long)pTVar22) < 0xc00) {
          lVar30 = *plVar5;
          lVar31 = (long)pTVar36 * 0x20;
          pauVar20 = (undefined1 (*) [16])(lVar30 + (long)pTVar22 * 0x20);
          if (local_6c8[1] == -1) {
            pauVar14 = (undefined1 (*) [16])(lVar30 + lVar31);
            if (pauVar14 != pauVar20) {
              lVar31 = lVar31 + (long)pTVar22 * -0x20;
              uVar28 = lVar31 >> 5;
              if (uVar28 == 0) {
                std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar20,pauVar14,0xfffffffffffffffe);
              }
              else {
                lVar30 = 0x3f;
                if (uVar28 != 0) {
                  for (; uVar28 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                  }
                }
                std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar20,pauVar14,(long)(int)lVar30 * 2);
                if (0x200 < lVar31) {
                  pauVar15 = pauVar20 + 0x20;
                  std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                            (pauVar20,pauVar15);
                  for (; pauVar14 != pauVar15; pauVar15 = pauVar15 + 2) {
                    uVar3 = *(undefined4 *)(pauVar15[1] + 0xc);
                    uVar4 = *(undefined4 *)(*pauVar15 + 0xc);
                    uVar18 = *(undefined8 *)pauVar15[1];
                    uVar7 = *(undefined8 *)(pauVar15[1] + 8);
                    auVar74 = *pauVar15;
                    uVar28 = CONCAT44(*(undefined4 *)(pauVar15[-1] + 0xc),
                                      *(undefined4 *)(pauVar15[-2] + 0xc));
                    pauVar20 = pauVar15;
                    while (CONCAT44(uVar3,uVar4) < uVar28) {
                      *pauVar20 = pauVar20[-2];
                      pauVar20[1] = pauVar20[-1];
                      uVar28 = CONCAT44(*(undefined4 *)(pauVar20[-3] + 0xc),
                                        *(undefined4 *)(pauVar20[-4] + 0xc));
                      pauVar20 = pauVar20 + -2;
                    }
                    *pauVar20 = auVar74;
                    *(undefined8 *)pauVar20[1] = uVar18;
                    *(undefined8 *)(pauVar20[1] + 8) = uVar7;
                  }
                  lVar30 = *plVar5;
                  pTVar22 = local_5f8[(long)pTVar25 * 0xc];
                  pTVar36 = local_5f8[(long)pTVar25 * 0xc + 1];
                  goto LAB_001143ac;
                }
              }
              std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar20,pauVar14);
              pTVar22 = local_5f8[(long)pTVar25 * 0xc];
              lVar30 = *plVar5;
              pTVar36 = local_5f8[(long)pTVar25 * 0xc + 1];
            }
LAB_001143ac:
            pTVar24 = (TaskGroupContext *)((ulong)(pTVar22 + (long)pTVar36) >> 1);
            if (pTVar22 < pTVar24) {
              auVar74._4_4_ = fVar43;
              auVar74._0_4_ = fVar70;
              auVar74._8_4_ = fVar44;
              auVar74._12_4_ = fVar71;
              auVar38._4_4_ = uVar67;
              auVar38._0_4_ = uVar66;
              auVar38._8_4_ = uVar68;
              auVar38._12_4_ = uVar69;
              pauVar20 = (undefined1 (*) [16])((long)pTVar22 * 0x20 + lVar30);
              auVar75 = auVar38;
              auVar76 = auVar74;
              do {
                auVar48._0_4_ = *(float *)pauVar20[1] + *(float *)*pauVar20;
                auVar48._4_4_ = *(float *)(pauVar20[1] + 4) + *(float *)(*pauVar20 + 4);
                auVar48._8_4_ = *(float *)(pauVar20[1] + 8) + *(float *)(*pauVar20 + 8);
                auVar48._12_4_ = *(float *)(pauVar20[1] + 0xc) + *(float *)(*pauVar20 + 0xc);
                pauVar14 = pauVar20 + 2;
                auVar38 = minps(auVar38,*pauVar20);
                auVar76 = maxps(auVar76,pauVar20[1]);
                auVar75 = minps(auVar75,auVar48);
                auVar74 = maxps(auVar74,auVar48);
                pauVar20 = pauVar14;
              } while ((undefined1 (*) [16])((long)pTVar24 * 0x20 + lVar30) != pauVar14);
            }
            else {
              auVar74._4_4_ = fVar43;
              auVar74._0_4_ = fVar70;
              auVar74._8_4_ = fVar44;
              auVar74._12_4_ = fVar71;
              auVar38._4_4_ = uVar67;
              auVar38._0_4_ = uVar66;
              auVar38._8_4_ = uVar68;
              auVar38._12_4_ = uVar69;
              auVar75 = auVar38;
              auVar76 = auVar74;
            }
            if (pTVar24 < pTVar36) {
              auVar72._4_4_ = fVar43;
              auVar72._0_4_ = fVar70;
              auVar72._8_4_ = fVar44;
              auVar72._12_4_ = fVar71;
              auVar55._4_4_ = uVar67;
              auVar55._0_4_ = uVar66;
              auVar55._8_4_ = uVar68;
              auVar55._12_4_ = uVar69;
              pauVar20 = (undefined1 (*) [16])((long)pTVar24 * 0x20 + lVar30);
              auVar73 = auVar55;
              auVar77 = auVar72;
              do {
                auVar49._0_4_ = *(float *)pauVar20[1] + *(float *)*pauVar20;
                auVar49._4_4_ = *(float *)(pauVar20[1] + 4) + *(float *)(*pauVar20 + 4);
                auVar49._8_4_ = *(float *)(pauVar20[1] + 8) + *(float *)(*pauVar20 + 8);
                auVar49._12_4_ = *(float *)(pauVar20[1] + 0xc) + *(float *)(*pauVar20 + 0xc);
                pauVar14 = pauVar20 + 2;
                auVar55 = minps(auVar55,*pauVar20);
                auVar77 = maxps(auVar77,pauVar20[1]);
                auVar73 = minps(auVar73,auVar49);
                auVar72 = maxps(auVar72,auVar49);
                pauVar20 = pauVar14;
              } while ((undefined1 (*) [16])((long)pTVar36 * 0x20 + lVar30) != pauVar14);
LAB_00114471:
              uVar59 = auVar55._0_4_;
              uVar62 = auVar55._4_4_;
              uVar63 = auVar55._8_4_;
              uVar64 = auVar55._12_4_;
              piVar2 = uStack_750;
            }
            else {
              auVar73._4_4_ = uVar67;
              auVar73._0_4_ = uVar66;
              auVar73._8_4_ = uVar68;
              auVar73._12_4_ = uVar69;
              auVar72._4_4_ = fVar43;
              auVar72._0_4_ = fVar70;
              auVar72._8_4_ = fVar44;
              auVar72._12_4_ = fVar71;
              auVar77 = auVar72;
              piVar2 = uStack_750;
            }
          }
          else {
            auVar38._4_4_ = uVar67;
            auVar38._0_4_ = uVar66;
            auVar38._8_4_ = uVar68;
            auVar38._12_4_ = uVar69;
            auVar72._4_4_ = fVar43;
            auVar72._0_4_ = fVar70;
            auVar72._8_4_ = fVar44;
            auVar72._12_4_ = fVar71;
            iVar21 = 0x1180f8;
            auVar77 = *(undefined1 (*) [16])
                       (&mm_lookupmask_ps + (ulong)(uint)(1 << ((byte)local_6c8[1] & 0x1f)) * 2);
            pauVar14 = (undefined1 (*) [16])(lVar30 + -0x20 + lVar31);
            auVar73 = auVar38;
            auVar74 = auVar72;
            auVar75 = auVar38;
            auVar76 = auVar72;
            local_888 = auVar72;
            for (; pauVar20 <= pauVar14; pauVar20 = pauVar20 + 2) {
              auVar78 = pauVar20[1];
              auVar41 = *pauVar20;
              auVar53._0_4_ = auVar78._0_4_ + auVar41._0_4_;
              auVar53._4_4_ = auVar78._4_4_ + auVar41._4_4_;
              auVar53._8_4_ = auVar78._8_4_ + auVar41._8_4_;
              auVar53._12_4_ = auVar78._12_4_ + auVar41._12_4_;
              local_898 = auVar77._0_4_;
              uStack_894 = auVar77._4_4_;
              uStack_890 = auVar77._8_4_;
              uStack_88c = auVar77._12_4_;
              auVar56._0_4_ =
                   -(uint)((int)((auVar53._0_4_ - local_6a8) * local_698 + _LC26) < local_6c8[2]) &
                   local_898;
              auVar56._4_4_ =
                   -(uint)((int)((auVar53._4_4_ - fStack_6a4) * fStack_694 + _UNK_001171e4) <
                          local_6c8[2]) & uStack_894;
              auVar56._8_4_ =
                   -(uint)((int)((auVar53._8_4_ - fStack_6a0) * fStack_690 + _UNK_001171e8) <
                          local_6c8[2]) & uStack_890;
              auVar56._12_4_ =
                   -(uint)((int)((auVar53._12_4_ - fStack_69c) * fStack_68c + _UNK_001171ec) <
                          local_6c8[2]) & uStack_88c;
              iVar21 = movmskps(iVar21,auVar56);
              if (iVar21 == 0) {
                auVar65._4_4_ = uVar62;
                auVar65._0_4_ = uVar59;
                auVar65._8_4_ = uVar63;
                auVar65._12_4_ = uVar64;
                pauVar15 = pauVar14;
                while( true ) {
                  auVar60 = pauVar15[1];
                  auVar42 = *pauVar15;
                  pauVar14 = pauVar15 + -2;
                  auVar57._0_4_ = auVar60._0_4_ + auVar42._0_4_;
                  auVar57._4_4_ = auVar60._4_4_ + auVar42._4_4_;
                  auVar57._8_4_ = auVar60._8_4_ + auVar42._8_4_;
                  auVar57._12_4_ = auVar60._12_4_ + auVar42._12_4_;
                  auVar46._0_4_ =
                       -(uint)((int)((auVar57._0_4_ - local_6a8) * local_698 + _LC26) < local_6c8[2]
                              ) & local_898;
                  auVar46._4_4_ =
                       -(uint)((int)((auVar57._4_4_ - fStack_6a4) * fStack_694 + _UNK_001171e4) <
                              local_6c8[2]) & uStack_894;
                  auVar46._8_4_ =
                       -(uint)((int)((auVar57._8_4_ - fStack_6a0) * fStack_690 + _UNK_001171e8) <
                              local_6c8[2]) & uStack_890;
                  auVar46._12_4_ =
                       -(uint)((int)((auVar57._12_4_ - fStack_69c) * fStack_68c + _UNK_001171ec) <
                              local_6c8[2]) & uStack_88c;
                  iVar21 = movmskps(0,auVar46);
                  if (iVar21 != 0) break;
                  auVar65 = minps(auVar65,auVar42);
                  local_888 = maxps(local_888,auVar60);
                  auVar73 = minps(auVar73,auVar57);
                  auVar72 = maxps(auVar72,auVar57);
                  pauVar15 = pauVar14;
                  if (pauVar14 < pauVar20) {
                    uVar59 = auVar65._0_4_;
                    uVar62 = auVar65._4_4_;
                    uVar63 = auVar65._8_4_;
                    uVar64 = auVar65._12_4_;
                    goto LAB_0011353c;
                  }
                }
                *pauVar20 = auVar42;
                auVar76 = maxps(auVar76,auVar60);
                auVar75 = minps(auVar75,auVar57);
                auVar60 = minps(auVar65,auVar41);
                local_888 = maxps(local_888,auVar78);
                auVar38 = minps(auVar38,auVar42);
                uVar18 = *(undefined8 *)(pauVar15[1] + 8);
                auVar74 = maxps(auVar74,auVar57);
                auVar73 = minps(auVar73,auVar53);
                auVar72 = maxps(auVar72,auVar53);
                *(undefined8 *)pauVar20[1] = *(undefined8 *)pauVar15[1];
                *(undefined8 *)(pauVar20[1] + 8) = uVar18;
                uVar59 = auVar60._0_4_;
                uVar62 = auVar60._4_4_;
                uVar63 = auVar60._8_4_;
                uVar64 = auVar60._12_4_;
                *pauVar15 = auVar41;
                pauVar15[1] = auVar78;
              }
              else {
                auVar38 = minps(auVar38,auVar41);
                auVar76 = maxps(auVar76,auVar78);
                auVar75 = minps(auVar75,auVar53);
                auVar74 = maxps(auVar74,auVar53);
              }
            }
LAB_0011353c:
            pTVar24 = (TaskGroupContext *)((long)pauVar20 - lVar30 >> 5);
            auVar77 = local_888;
            piVar2 = uStack_750;
          }
        }
        else if (local_6c8[1] == -1) {
          lVar30 = *plVar5;
          pauVar20 = (undefined1 (*) [16])(lVar30 + (long)pTVar36 * 0x20);
          pauVar14 = (undefined1 (*) [16])(lVar30 + (long)pTVar22 * 0x20);
          if (pauVar20 != pauVar14) {
            lVar30 = (long)pTVar36 * 0x20 + (long)pTVar22 * -0x20;
            uVar28 = lVar30 >> 5;
            if (uVar28 == 0) {
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar14,pauVar20,0xfffffffffffffffe);
            }
            else {
              lVar31 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar14,pauVar20,(long)(int)lVar31 * 2);
              if (0x200 < lVar30) {
                pauVar15 = pauVar14 + 0x20;
                std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar14,pauVar15);
                for (; pauVar20 != pauVar15; pauVar15 = pauVar15 + 2) {
                  uVar3 = *(undefined4 *)(pauVar15[1] + 0xc);
                  uVar4 = *(undefined4 *)(*pauVar15 + 0xc);
                  uVar18 = *(undefined8 *)pauVar15[1];
                  uVar7 = *(undefined8 *)(pauVar15[1] + 8);
                  auVar74 = *pauVar15;
                  uVar28 = CONCAT44(*(undefined4 *)(pauVar15[-1] + 0xc),
                                    *(undefined4 *)(pauVar15[-2] + 0xc));
                  pauVar14 = pauVar15;
                  while (CONCAT44(uVar3,uVar4) < uVar28) {
                    uVar8 = *(undefined8 *)(pauVar14[-2] + 8);
                    auVar76 = pauVar14[-1];
                    *(undefined8 *)*pauVar14 = *(undefined8 *)pauVar14[-2];
                    *(undefined8 *)(*pauVar14 + 8) = uVar8;
                    pauVar14[1] = auVar76;
                    uVar28 = CONCAT44(*(undefined4 *)(pauVar14[-3] + 0xc),
                                      *(undefined4 *)(pauVar14[-4] + 0xc));
                    pauVar14 = pauVar14 + -2;
                  }
                  *pauVar14 = auVar74;
                  *(undefined8 *)pauVar14[1] = uVar18;
                  *(undefined8 *)(pauVar14[1] + 8) = uVar7;
                }
                lVar30 = *plVar5;
                pTVar22 = local_5f8[(long)pTVar25 * 0xc];
                pTVar36 = local_5f8[(long)pTVar25 * 0xc + 1];
                goto LAB_00114cbd;
              }
            }
            std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar14,pauVar20);
            pTVar22 = local_5f8[(long)pTVar25 * 0xc];
            lVar30 = *plVar5;
            pTVar36 = local_5f8[(long)pTVar25 * 0xc + 1];
          }
LAB_00114cbd:
          pTVar24 = (TaskGroupContext *)((ulong)(pTVar22 + (long)pTVar36) >> 1);
          if (pTVar22 < pTVar24) {
            auVar74._4_4_ = fVar43;
            auVar74._0_4_ = fVar70;
            auVar74._8_4_ = fVar44;
            auVar74._12_4_ = fVar71;
            auVar38._4_4_ = uVar67;
            auVar38._0_4_ = uVar66;
            auVar38._8_4_ = uVar68;
            auVar38._12_4_ = uVar69;
            pauVar20 = (undefined1 (*) [16])((long)pTVar22 * 0x20 + lVar30);
            auVar75 = auVar38;
            auVar76 = auVar74;
            do {
              auVar50._0_4_ = *(float *)pauVar20[1] + *(float *)*pauVar20;
              auVar50._4_4_ = *(float *)(pauVar20[1] + 4) + *(float *)(*pauVar20 + 4);
              auVar50._8_4_ = *(float *)(pauVar20[1] + 8) + *(float *)(*pauVar20 + 8);
              auVar50._12_4_ = *(float *)(pauVar20[1] + 0xc) + *(float *)(*pauVar20 + 0xc);
              pauVar14 = pauVar20 + 2;
              auVar38 = minps(auVar38,*pauVar20);
              auVar76 = maxps(auVar76,pauVar20[1]);
              auVar75 = minps(auVar75,auVar50);
              auVar74 = maxps(auVar74,auVar50);
              pauVar20 = pauVar14;
            } while ((undefined1 (*) [16])((long)pTVar24 * 0x20 + lVar30) != pauVar14);
          }
          else {
            auVar74._4_4_ = fVar43;
            auVar74._0_4_ = fVar70;
            auVar74._8_4_ = fVar44;
            auVar74._12_4_ = fVar71;
            auVar38._4_4_ = uVar67;
            auVar38._0_4_ = uVar66;
            auVar38._8_4_ = uVar68;
            auVar38._12_4_ = uVar69;
            auVar75 = auVar38;
            auVar76 = auVar74;
          }
          if (pTVar24 < pTVar36) {
            auVar72._4_4_ = fVar43;
            auVar72._0_4_ = fVar70;
            auVar72._8_4_ = fVar44;
            auVar72._12_4_ = fVar71;
            auVar55._4_4_ = uVar67;
            auVar55._0_4_ = uVar66;
            auVar55._8_4_ = uVar68;
            auVar55._12_4_ = uVar69;
            pauVar20 = (undefined1 (*) [16])((long)pTVar24 * 0x20 + lVar30);
            auVar73 = auVar55;
            auVar77 = auVar72;
            do {
              auVar51._0_4_ = *(float *)pauVar20[1] + *(float *)*pauVar20;
              auVar51._4_4_ = *(float *)(pauVar20[1] + 4) + *(float *)(*pauVar20 + 4);
              auVar51._8_4_ = *(float *)(pauVar20[1] + 8) + *(float *)(*pauVar20 + 8);
              auVar51._12_4_ = *(float *)(pauVar20[1] + 0xc) + *(float *)(*pauVar20 + 0xc);
              pauVar14 = pauVar20 + 2;
              auVar55 = minps(auVar55,*pauVar20);
              auVar77 = maxps(auVar77,pauVar20[1]);
              auVar73 = minps(auVar73,auVar51);
              auVar72 = maxps(auVar72,auVar51);
              pauVar20 = pauVar14;
            } while ((undefined1 (*) [16])(lVar30 + (long)pTVar36 * 0x20) != pauVar14);
            goto LAB_00114471;
          }
          auVar73._4_4_ = uVar67;
          auVar73._0_4_ = uVar66;
          auVar73._8_4_ = uVar68;
          auVar73._12_4_ = uVar69;
          auVar72._4_4_ = fVar43;
          auVar72._0_4_ = fVar70;
          auVar72._8_4_ = fVar44;
          auVar72._12_4_ = fVar71;
          auVar77 = auVar72;
          piVar2 = uStack_750;
        }
        else {
          local_7a8._4_4_ = uVar67;
          local_7a8._0_4_ = uVar66;
          local_7a8._8_4_ = uVar68;
          local_7a8._12_4_ = uVar69;
          local_718 = *(undefined1 (*) [16])
                       (&mm_lookupmask_ps + (ulong)(uint)(1 << ((byte)local_6c8[1] & 0x1f)) * 2);
          local_728 = local_6c8[2];
          iStack_724 = local_6c8[2];
          iStack_720 = local_6c8[2];
          iStack_71c = local_6c8[2];
          local_7c0 = &local_728;
          local_7b8 = local_718;
          local_7c8 = (PrimInfoRange *)local_6c8;
          local_798 = fVar70;
          fStack_794 = fVar43;
          fStack_790 = fVar44;
          fStack_78c = fVar71;
          local_788 = local_7a8;
          local_778 = fVar70;
          fStack_774 = fVar43;
          fStack_770 = fVar44;
          fStack_76c = fVar71;
          local_768 = local_7a8;
          local_758 = fVar70;
          fStack_754 = fVar43;
          uStack_750._0_4_ = fVar44;
          uStack_750._4_4_ = fVar71;
          _local_748 = local_7a8;
          local_738._0_4_ = fVar70;
          local_738._4_4_ = fVar43;
          fStack_730 = fVar44;
          fStack_72c = fVar71;
          pTVar24 = (TaskGroupContext *)
                    parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                              ((PrimRef *)*plVar5,(ulong)pTVar22,(ulong)pTVar36,&local_7c9,
                               (CentGeom *)local_7a8,(CentGeom *)local_768,
                               (_lambda_embree__PrimRef_const___1_ *)&local_7c8,&local_7ca,
                               &local_7cb,0x80);
          auVar76._4_4_ = fStack_794;
          auVar76._0_4_ = local_798;
          auVar76._8_4_ = fStack_790;
          auVar76._12_4_ = fStack_78c;
          auVar74._4_4_ = fStack_774;
          auVar74._0_4_ = local_778;
          auVar74._8_4_ = fStack_770;
          auVar74._12_4_ = fStack_76c;
          auVar77._4_4_ = fStack_754;
          auVar77._0_4_ = local_758;
          auVar77._8_4_ = (float)uStack_750;
          auVar77._12_4_ = uStack_750._4_4_;
          auVar72._8_4_ = fStack_730;
          auVar72._0_8_ = local_738;
          auVar72._12_4_ = fStack_72c;
          auVar38 = local_7a8;
          uVar59 = local_768._0_4_;
          uVar62 = local_768._4_4_;
          uVar63 = local_768._8_4_;
          uVar64 = local_768._12_4_;
          auVar73 = _local_748;
          auVar75 = local_788;
          piVar2 = (int *)CONCAT44(uStack_750._4_4_,(float)uStack_750);
        }
        pTVar27 = pTVar27 + 1;
        local_648[(long)pTVar25 * 0x60 + 8] = 0;
        *(long *)(local_648 + (long)pTVar25 * 0x60) = lVar23 + 1;
        local_5f8[(long)pTVar25 * 0xc] = pTVar22;
        local_5f8[(long)pTVar25 * 0xc + 1] = pTVar24;
        *(undefined1 (*) [16])(local_638 + lVar33) = auVar38;
        *(undefined1 (*) [16])(local_628 + lVar33) = auVar76;
        *(undefined1 (*) [16])(local_618 + lVar33) = auVar75;
        *(undefined1 (*) [16])(local_608 + lVar33) = auVar74;
        *plVar19 = lVar23 + 1;
        *(undefined1 *)(plVar19 + 1) = 0;
        *(undefined4 *)(plVar19 + 2) = uVar59;
        *(undefined4 *)((long)plVar19 + 0x14) = uVar62;
        *(undefined4 *)(plVar19 + 3) = uVar63;
        *(undefined4 *)((long)plVar19 + 0x1c) = uVar64;
        *(undefined1 (*) [16])(plVar19 + 4) = auVar77;
        *(undefined1 (*) [16])(plVar19 + 6) = auVar73;
        *(undefined1 (*) [16])(plVar19 + 8) = auVar72;
        plVar19[10] = (long)pTVar24;
        plVar19[0xb] = (long)pTVar36;
        plVar19 = plVar19 + 0xc;
      } while (pTVar27 < (TaskGroupContext *)*param_1);
      lVar23 = (long)pTVar27 * 0x60;
    }
    uVar28 = param_1[7];
    if (uVar28 < (ulong)(param_2[0xb] - param_2[10])) {
      local_648[8] = (ulong)((long)local_5f8[1] - (long)local_5f8[0]) <= uVar28;
      local_5e0 = (ulong)(local_590 - (long)local_598) <= uVar28;
      if (((((pTVar27 != (TaskGroupContext *)0x2) &&
            (local_580 = (ulong)(local_530 - local_538) <= uVar28,
            pTVar27 != (TaskGroupContext *)0x3)) &&
           (local_520 = (ulong)(local_4d0 - local_4d8) <= uVar28, pTVar27 != (TaskGroupContext *)0x4
           )) && ((((local_4c0 = (ulong)(local_470 - local_478) <= uVar28,
                    pTVar27 != (TaskGroupContext *)0x5 &&
                    (local_460 = (ulong)(local_410 - local_418) <= uVar28,
                    pTVar27 != (TaskGroupContext *)0x6)) &&
                   ((local_400 = (ulong)(local_3b0 - local_3b8) <= uVar28,
                    pTVar27 != (TaskGroupContext *)0x7 &&
                    ((local_3a0 = (ulong)(local_350 - local_358) <= uVar28,
                     pTVar27 != (TaskGroupContext *)&DAT_00000008 &&
                     (local_340 = (ulong)(local_2f0 - local_2f8) <= uVar28,
                     pTVar27 != (TaskGroupContext *)0x9)))))) &&
                  (local_2e0 = (ulong)(local_290 - local_298) <= uVar28,
                  pTVar27 != (TaskGroupContext *)0xa)))) &&
         ((((local_280 = (ulong)(local_230 - local_238) <= uVar28,
            pTVar27 != (TaskGroupContext *)0xb &&
            (local_220 = (ulong)(local_1d0 - local_1d8) <= uVar28,
            pTVar27 != (TaskGroupContext *)0xc)) &&
           (local_1c0 = (ulong)(local_170 - local_178) <= uVar28, pTVar27 != (TaskGroupContext *)0xd
           )) && ((local_160 = (ulong)(local_110 - local_118) <= uVar28,
                  pTVar27 != (TaskGroupContext *)0xe &&
                  (local_100 = (ulong)(local_b0 - local_b8) <= uVar28,
                  pTVar27 == (TaskGroupContext *)0x10)))))) {
        local_a0 = (ulong)(local_50 - local_58) <= uVar28;
      }
    }
    uStack_750 = piVar2;
    if (lVar23 != 0) {
      uVar28 = (lVar23 >> 5) * -0x5555555555555555;
      puVar1 = local_838 + lVar23;
      if (uVar28 == 0) {
        std::
        __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (local_838,puVar1,0xfffffffffffffffe);
      }
      else {
        lVar33 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        std::
        __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (local_838,puVar1,(long)(int)lVar33 * 2);
        if (0x600 < lVar23) {
          std::
          __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                    (local_838,auStack_48);
          puVar34 = auStack_48;
          do {
            puVar35 = puVar34 + 0x60;
            std::
            __unguarded_linear_insert<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                      (puVar34);
            puVar34 = puVar35;
          } while (puVar1 != puVar35);
          goto LAB_00113964;
        }
      }
      std::
      __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (local_838,puVar1);
    }
LAB_00113964:
    local_7a8._0_8_ = 0x80;
    lVar23 = *(long *)in_stack_00000010;
    if (local_820 != *(FastAllocator **)(lVar23 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(lVar23 + 8) != 0) {
        LOCK();
        plVar19 = (long *)(*(long *)(lVar23 + 8) + 0x118);
        *plVar19 = *plVar19 + *(long *)(lVar23 + 0xa8) + *(long *)(lVar23 + 0x68);
        UNLOCK();
        LOCK();
        plVar19 = (long *)(*(long *)(lVar23 + 8) + 0x120);
        *plVar19 = *plVar19 +
                   (((*(long *)(lVar23 + 0x98) + *(long *)(lVar23 + 0x58)) -
                    *(long *)(lVar23 + 0x50)) - *(long *)(lVar23 + 0x90));
        UNLOCK();
        LOCK();
        plVar19 = (long *)(*(long *)(lVar23 + 8) + 0x128);
        *plVar19 = *plVar19 + *(long *)(lVar23 + 0xb0) + *(long *)(lVar23 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(lVar23 + 0x48) = 0;
      *(undefined8 *)(lVar23 + 0x58) = 0;
      *(undefined8 *)(lVar23 + 0x50) = 0;
      *(undefined8 *)(lVar23 + 0x68) = 0;
      *(undefined8 *)(lVar23 + 0x70) = 0;
      *(undefined8 *)(lVar23 + 0x60) = 0;
      if (local_820 == (FastAllocator *)0x0) {
        *(undefined8 *)(lVar23 + 0x88) = 0;
        uVar18 = 0;
        *(undefined8 *)(lVar23 + 0x98) = 0;
        *(undefined8 *)(lVar23 + 0x90) = 0;
        *(undefined8 *)(lVar23 + 0xa8) = 0;
        *(undefined8 *)(lVar23 + 0xb0) = 0;
      }
      else {
        uVar18 = *(undefined8 *)(local_820 + 0x10);
        *(undefined8 *)(lVar23 + 0x88) = 0;
        *(undefined8 *)(lVar23 + 0x98) = 0;
        *(undefined8 *)(lVar23 + 0x60) = uVar18;
        *(undefined8 *)(lVar23 + 0x90) = 0;
        *(undefined8 *)(lVar23 + 0xa8) = 0;
        *(undefined8 *)(lVar23 + 0xb0) = 0;
        *(undefined8 *)(lVar23 + 0xa0) = 0;
        uVar18 = *(undefined8 *)(local_820 + 0x10);
      }
      *(undefined8 *)(lVar23 + 0xa0) = uVar18;
      LOCK();
      *(FastAllocator **)(lVar23 + 8) = local_820;
      UNLOCK();
      local_768._0_8_ = lVar23;
      embree::MutexSys::lock();
      plVar19 = *(long **)(local_820 + 0x138);
      if (plVar19 == *(long **)(local_820 + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(local_820 + 0x130),plVar19,local_768);
      }
      else {
        *plVar19 = lVar23;
        *(long *)(local_820 + 0x138) = *(long *)(local_820 + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
    }
    lVar23 = *(long *)(in_stack_00000010 + 0x10);
    *(long *)(in_stack_00000010 + 0x28) = *(long *)(in_stack_00000010 + 0x28) + 0x80;
    uVar17 = (ulong)(-(int)lVar23 & 0xf);
    uVar28 = lVar23 + 0x80 + uVar17;
    *(ulong *)(in_stack_00000010 + 0x10) = uVar28;
    if (*(ulong *)(in_stack_00000010 + 0x18) < uVar28) {
      *(long *)(in_stack_00000010 + 0x10) = lVar23;
      if (*(ulong *)(in_stack_00000010 + 0x20) < 0x200) {
        puVar12 = (undefined8 *)FastAllocator::malloc(local_820,(ulong *)local_7a8,0x40,false);
      }
      else {
        local_768._0_8_ = *(ulong *)(in_stack_00000010 + 0x20);
        puVar12 = (undefined8 *)FastAllocator::malloc(local_820,(ulong *)local_768,0x40,true);
        *(undefined8 **)(in_stack_00000010 + 8) = puVar12;
        *(long *)(in_stack_00000010 + 0x30) =
             (*(long *)(in_stack_00000010 + 0x18) + *(long *)(in_stack_00000010 + 0x30)) -
             *(long *)(in_stack_00000010 + 0x10);
        *(long *)(in_stack_00000010 + 0x10) = 0x80;
        *(undefined8 *)(in_stack_00000010 + 0x18) = local_768._0_8_;
        if ((ulong)local_768._0_8_ < 0x80) {
          *(long *)(in_stack_00000010 + 0x10) = 0;
          local_768._0_8_ = *(long *)(in_stack_00000010 + 0x20);
          puVar12 = (undefined8 *)FastAllocator::malloc(local_820,(ulong *)local_768,0x40,false);
          *(undefined8 **)(in_stack_00000010 + 8) = puVar12;
          *(long *)(in_stack_00000010 + 0x30) =
               (*(long *)(in_stack_00000010 + 0x18) + *(long *)(in_stack_00000010 + 0x30)) -
               *(long *)(in_stack_00000010 + 0x10);
          *(long *)(in_stack_00000010 + 0x10) = 0x80;
          *(undefined8 *)(in_stack_00000010 + 0x18) = local_768._0_8_;
          if ((ulong)local_768._0_8_ < 0x80) {
            puVar12 = (undefined8 *)0x0;
            *(long *)(in_stack_00000010 + 0x10) = 0;
          }
        }
      }
    }
    else {
      *(ulong *)(in_stack_00000010 + 0x30) = *(long *)(in_stack_00000010 + 0x30) + uVar17;
      puVar12 = (undefined8 *)(*(long *)(in_stack_00000010 + 8) + -0x80 + uVar28);
    }
    *(undefined4 *)(puVar12 + 0xc) = uVar66;
    *(undefined4 *)((long)puVar12 + 100) = uVar67;
    *(undefined4 *)(puVar12 + 0xd) = uVar68;
    *(undefined4 *)((long)puVar12 + 0x6c) = uVar69;
    *(undefined4 *)(puVar12 + 8) = uVar66;
    *(undefined4 *)((long)puVar12 + 0x44) = uVar67;
    *(undefined4 *)(puVar12 + 9) = uVar68;
    *(undefined4 *)((long)puVar12 + 0x4c) = uVar69;
    *(undefined4 *)(puVar12 + 4) = uVar66;
    *(undefined4 *)((long)puVar12 + 0x24) = uVar67;
    *(undefined4 *)(puVar12 + 5) = uVar68;
    *(undefined4 *)((long)puVar12 + 0x2c) = uVar69;
    *(float *)(puVar12 + 6) = fVar70;
    *(float *)((long)puVar12 + 0x34) = fVar43;
    *(float *)(puVar12 + 7) = fVar44;
    *(float *)((long)puVar12 + 0x3c) = fVar71;
    *(float *)(puVar12 + 0xe) = fVar70;
    *(float *)((long)puVar12 + 0x74) = fVar43;
    *(float *)(puVar12 + 0xf) = fVar44;
    *(float *)((long)puVar12 + 0x7c) = fVar71;
    *(float *)(puVar12 + 10) = fVar70;
    *(float *)((long)puVar12 + 0x54) = fVar43;
    *(float *)(puVar12 + 0xb) = fVar44;
    *(float *)((long)puVar12 + 0x5c) = fVar71;
    *puVar12 = 8;
    puVar12[1] = 8;
    puVar12[2] = 8;
    puVar12[3] = 8;
    *(undefined4 *)(puVar12 + 8) = local_638._4_4_;
    *(undefined4 *)(puVar12 + 0xc) = local_638._8_4_;
    *(undefined4 *)(puVar12 + 4) = local_638._0_4_;
    *(undefined4 *)(puVar12 + 6) = local_628._0_4_;
    *(undefined4 *)(puVar12 + 10) = local_628._4_4_;
    *(undefined4 *)(puVar12 + 0xe) = local_628._8_4_;
    *(undefined4 *)((long)puVar12 + 100) = local_5d8._8_4_;
    *(undefined4 *)((long)puVar12 + 0x44) = local_5d8._4_4_;
    *(undefined4 *)((long)puVar12 + 0x24) = local_5d8._0_4_;
    *(float *)((long)puVar12 + 0x34) = local_5c8;
    *(float *)((long)puVar12 + 0x54) = fStack_5c4;
    *(float *)((long)puVar12 + 0x74) = fStack_5c0;
    if (pTVar27 != (TaskGroupContext *)0x2) {
      *(undefined4 *)(puVar12 + 9) = uStack_574;
      *(undefined4 *)(puVar12 + 0xd) = uStack_570;
      *(undefined4 *)(puVar12 + 5) = local_578;
      *(undefined4 *)(puVar12 + 7) = local_568;
      *(undefined4 *)(puVar12 + 0xb) = uStack_564;
      *(undefined4 *)(puVar12 + 0xf) = uStack_560;
      if (pTVar27 != (TaskGroupContext *)0x3) {
        *(undefined4 *)((long)puVar12 + 0x4c) = uStack_514;
        *(undefined4 *)((long)puVar12 + 0x6c) = uStack_510;
        *(undefined4 *)((long)puVar12 + 0x2c) = uStack_518;
        *(undefined4 *)((long)puVar12 + 0x3c) = uStack_508;
        *(undefined4 *)((long)puVar12 + 0x5c) = uStack_504;
        *(undefined4 *)((long)puVar12 + 0x7c) = uStack_500;
        if (pTVar27 != (TaskGroupContext *)0x4) {
          *(undefined4 *)(puVar12 + 10) = uStack_4b4;
          *(undefined4 *)(puVar12 + 0xe) = uStack_4b0;
          *(undefined4 *)(puVar12 + 6) = uStack_4b8;
          *(undefined4 *)(puVar12 + 8) = uStack_4a8;
          *(undefined4 *)(puVar12 + 0xc) = uStack_4a4;
          *(undefined4 *)(puVar12 + 0x10) = uStack_4a0;
          if (pTVar27 != (TaskGroupContext *)0x5) {
            *(undefined4 *)((long)puVar12 + 0x54) = uStack_454;
            *(undefined4 *)((long)puVar12 + 0x74) = uStack_450;
            *(undefined4 *)((long)puVar12 + 0x34) = uStack_458;
            *(undefined4 *)((long)puVar12 + 0x44) = uStack_448;
            *(undefined4 *)((long)puVar12 + 100) = uStack_444;
            *(undefined4 *)((long)puVar12 + 0x84) = uStack_440;
            if (pTVar27 != (TaskGroupContext *)0x6) {
              *(undefined4 *)(puVar12 + 0xb) = uStack_3f4;
              *(undefined4 *)(puVar12 + 0xf) = uStack_3f0;
              *(undefined4 *)(puVar12 + 7) = uStack_3f8;
              *(undefined4 *)(puVar12 + 9) = uStack_3e8;
              *(undefined4 *)(puVar12 + 0xd) = uStack_3e4;
              *(undefined4 *)(puVar12 + 0x11) = uStack_3e0;
              if (pTVar27 != (TaskGroupContext *)0x7) {
                *(undefined4 *)((long)puVar12 + 0x5c) = uStack_394;
                *(undefined4 *)((long)puVar12 + 0x7c) = uStack_390;
                *(undefined4 *)((long)puVar12 + 0x3c) = uStack_398;
                *(undefined4 *)((long)puVar12 + 0x4c) = uStack_388;
                *(undefined4 *)((long)puVar12 + 0x6c) = uStack_384;
                *(undefined4 *)((long)puVar12 + 0x8c) = uStack_380;
                if (pTVar27 != (TaskGroupContext *)&DAT_00000008) {
                  *(undefined4 *)(puVar12 + 0xc) = uStack_334;
                  *(undefined4 *)(puVar12 + 0x10) = uStack_330;
                  *(undefined4 *)(puVar12 + 8) = uStack_338;
                  *(undefined4 *)(puVar12 + 10) = uStack_328;
                  *(undefined4 *)(puVar12 + 0xe) = uStack_324;
                  *(undefined4 *)(puVar12 + 0x12) = uStack_320;
                  if (pTVar27 != (TaskGroupContext *)0x9) {
                    *(undefined4 *)((long)puVar12 + 100) = uStack_2d4;
                    *(undefined4 *)((long)puVar12 + 0x84) = uStack_2d0;
                    *(undefined4 *)((long)puVar12 + 0x44) = uStack_2d8;
                    *(undefined4 *)((long)puVar12 + 0x54) = uStack_2c8;
                    *(undefined4 *)((long)puVar12 + 0x74) = uStack_2c4;
                    *(undefined4 *)((long)puVar12 + 0x94) = uStack_2c0;
                    if (pTVar27 != (TaskGroupContext *)0xa) {
                      *(undefined4 *)(puVar12 + 0xd) = uStack_274;
                      *(undefined4 *)(puVar12 + 0x11) = uStack_270;
                      *(undefined4 *)(puVar12 + 9) = uStack_278;
                      *(undefined4 *)(puVar12 + 0xb) = uStack_268;
                      *(undefined4 *)(puVar12 + 0xf) = uStack_264;
                      *(undefined4 *)(puVar12 + 0x13) = uStack_260;
                      if (pTVar27 != (TaskGroupContext *)0xb) {
                        *(undefined4 *)((long)puVar12 + 0x6c) = uStack_214;
                        *(undefined4 *)((long)puVar12 + 0x8c) = uStack_210;
                        *(undefined4 *)((long)puVar12 + 0x4c) = uStack_218;
                        *(undefined4 *)((long)puVar12 + 0x5c) = uStack_208;
                        *(undefined4 *)((long)puVar12 + 0x7c) = uStack_204;
                        *(undefined4 *)((long)puVar12 + 0x9c) = uStack_200;
                        if (pTVar27 != (TaskGroupContext *)0xc) {
                          *(undefined4 *)(puVar12 + 0xe) = uStack_1b4;
                          *(undefined4 *)(puVar12 + 0x12) = uStack_1b0;
                          *(undefined4 *)(puVar12 + 10) = uStack_1b8;
                          *(undefined4 *)(puVar12 + 0xc) = uStack_1a8;
                          *(undefined4 *)(puVar12 + 0x10) = uStack_1a4;
                          *(undefined4 *)(puVar12 + 0x14) = uStack_1a0;
                          if (pTVar27 != (TaskGroupContext *)0xd) {
                            *(undefined4 *)((long)puVar12 + 0x74) = uStack_154;
                            *(undefined4 *)((long)puVar12 + 0x94) = uStack_150;
                            *(undefined4 *)((long)puVar12 + 0x54) = uStack_158;
                            *(undefined4 *)((long)puVar12 + 100) = uStack_148;
                            *(undefined4 *)((long)puVar12 + 0x84) = uStack_144;
                            *(undefined4 *)((long)puVar12 + 0xa4) = uStack_140;
                            if (pTVar27 != (TaskGroupContext *)0xe) {
                              *(undefined4 *)(puVar12 + 0xf) = uStack_f4;
                              *(undefined4 *)(puVar12 + 0x13) = uStack_f0;
                              *(undefined4 *)(puVar12 + 0xb) = uStack_f8;
                              *(undefined4 *)(puVar12 + 0xd) = uStack_e8;
                              *(undefined4 *)(puVar12 + 0x11) = uStack_e4;
                              *(undefined4 *)(puVar12 + 0x15) = uStack_e0;
                              if (pTVar27 == (TaskGroupContext *)0x10) {
                                *(undefined4 *)((long)puVar12 + 0x7c) = uStack_94;
                                *(undefined4 *)((long)puVar12 + 0x9c) = uStack_90;
                                *(undefined4 *)((long)puVar12 + 0x5c) = uStack_98;
                                *(undefined4 *)((long)puVar12 + 0x6c) = uStack_88;
                                *(undefined4 *)((long)puVar12 + 0x8c) = uStack_84;
                                *(undefined4 *)((long)puVar12 + 0xac) = uStack_80;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    pTVar36 = (TaskGroupContext *)0x0;
    if ((ulong)(param_2[0xb] - param_2[10]) <= param_1[6]) goto LAB_001141e9;
    uStack_750 = local_6c8;
    pTVar36 = (TaskGroupContext *)local_7a8;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_7a8._8_8_;
    local_7a8 = auVar11 << 0x40;
    local_768._8_8_ = 0;
    local_768._0_8_ = pTVar27;
    local_758 = 1.4013e-45;
    fStack_754 = 0.0;
    stack0xfffffffffffff8c0 = param_1;
    local_748._0_8_ = local_838;
    local_738 = pTVar36;
    lVar23 = embree::TaskScheduler::thread();
    if (lVar23 == 0) {
      this = (TaskScheduler *)embree::TaskScheduler::instance();
      pTVar22 = pTVar27;
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSpli___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (this,(_lambda___1_ *)local_768,pTVar36,(ulong)pTVar27,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar23 + 0x40080)) {
LAB_00115702:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar33 = *(long *)(lVar23 + 0xc00c0);
      uVar28 = lVar33 + 0x40 + (ulong)(-(int)lVar33 & 0x3f);
      if (0x80000 < uVar28) goto LAB_00115702;
      *(ulong *)(lVar23 + 0xc00c0) = uVar28;
      puVar26 = (undefined8 *)(lVar23 + 0x40080 + uVar28);
      *puVar26 = &PTR_execute_001170d8;
      puVar26[1] = local_768._0_8_;
      puVar26[2] = local_768._8_8_;
      auVar10._4_4_ = fStack_754;
      auVar10._0_4_ = local_758;
      auVar10._8_4_ = (float)uStack_750;
      auVar10._12_4_ = uStack_750._4_4_;
      *(undefined1 (*) [16])(puVar26 + 3) = auVar10;
      *(undefined1 (*) [16])(puVar26 + 5) = _local_748;
      puVar26[7] = local_738;
      lVar31 = *(long *)(lVar23 + 0x40080) * 0x40;
      piVar2 = (int *)(lVar23 + 0x40 + lVar31);
      lVar30 = *(long *)(lVar23 + 0xc0100);
      *(undefined4 *)(lVar23 + 0x44 + lVar31) = 1;
      *(undefined1 *)(lVar23 + 0x48 + lVar31) = 1;
      lVar31 = lVar31 + lVar23;
      *(undefined8 **)(lVar31 + 0x50) = puVar26;
      *(long *)(lVar31 + 0x58) = lVar30;
      *(TaskGroupContext **)(lVar31 + 0x60) = pTVar36;
      *(long *)(lVar31 + 0x68) = lVar33;
      *(TaskGroupContext **)(lVar31 + 0x70) = pTVar27;
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 4) = *(int *)(lVar30 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar2 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar23 + 0x40080) = *(long *)(lVar23 + 0x40080) + 1;
      UNLOCK();
      pTVar22 = (TaskGroupContext *)(lVar23 + 0x40040);
      if (*(long *)(lVar23 + 0x40080) - 1U <= *(ulong *)(lVar23 + 0x40040)) {
        LOCK();
        *(long *)pTVar22 = *(long *)(lVar23 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_7a8._0_8_ == 0) break;
    local_768._0_8_ = local_7a8._0_8_;
    std::__exception_ptr::exception_ptr::_M_addref();
    auVar78 = std::rethrow_exception(local_768);
    piVar2 = uStack_750;
LAB_001156a8:
    uStack_750._4_4_ = fVar71;
    uStack_750._0_4_ = fVar44;
    local_5a8._4_4_ = fVar43;
    local_5a8._0_4_ = fVar70;
    local_5a8._8_4_ = (float)uStack_750;
    local_5a8._12_4_ = uStack_750._4_4_;
    local_5b8._4_4_ = uVar67;
    local_5b8._0_4_ = uVar66;
    local_5b8._8_4_ = uVar68;
    local_5b8._12_4_ = uVar69;
    local_888._4_4_ = uVar67;
    local_888._0_4_ = uVar66;
    local_888._8_4_ = uVar68;
    local_888._12_4_ = uVar69;
    local_5c8 = fVar70;
    fStack_5c4 = fVar43;
    fVar44 = (float)uStack_750;
    fVar71 = uStack_750._4_4_;
  } while( true );
  plVar19 = (long *)param_1[0xc];
  *puVar12 = CONCAT44(local_6c8[1],local_6c8[0]);
  puVar12[1] = CONCAT44(local_6c8[3],local_6c8[2]);
  if (pTVar27 != (TaskGroupContext *)0x2) {
    puVar12[2] = uStack_6b8;
joined_r0x00114277:
    if (pTVar27 != (TaskGroupContext *)0x3) {
      puVar12[3] = uStack_6b0;
    }
  }
  goto LAB_00114285;
LAB_001141e9:
  do {
    uVar18 = recurse(param_1,local_838,0);
    *(undefined8 *)(local_6c8 + (long)pTVar36 * 2) = uVar18;
    pTVar36 = pTVar36 + 1;
    local_838 = local_838 + 0x60;
  } while (pTVar36 != pTVar27);
  plVar19 = (long *)param_1[0xc];
  *puVar12 = CONCAT44(local_6c8[1],local_6c8[0]);
  puVar12[1] = CONCAT44(local_6c8[3],local_6c8[2]);
  if (pTVar36 != (TaskGroupContext *)0x2) {
    puVar12[2] = uStack_6b8;
    pTVar27 = pTVar36;
    goto joined_r0x00114277;
  }
LAB_00114285:
  if ((char)param_2[1] != '\0') {
    lVar23 = param_2[10];
    lVar33 = param_2[0xb];
    lVar30 = *plVar19;
    lVar31 = lVar23 * 0x20 + plVar19[1];
    embree::MutexSys::lock();
    puVar26 = (undefined8 *)(lVar31 + 0x3fU & 0xffffffffffffffc0);
    lVar23 = ((lVar33 - lVar23) * 0x20 + lVar31) - (long)puVar26;
    if (0xfff < lVar23) {
      lVar23 = lVar23 + -0x40;
      uVar18 = *(undefined8 *)(lVar30 + 0x100);
      puVar26[1] = lVar23;
      puVar26[2] = lVar23;
      *puVar26 = 0;
      puVar26[3] = uVar18;
      puVar26[4] = (long)puVar26 - lVar31;
      *(undefined4 *)(puVar26 + 5) = 2;
      *(undefined1 *)((long)puVar26 + 0x2c) = 0;
      LOCK();
      *(undefined8 **)(lVar30 + 0x100) = puVar26;
      UNLOCK();
    }
    embree::MutexSys::unlock();
  }
LAB_00113095:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::NodeRefPtr<4> embree::sse2::GeneralBVHBuilder::build<embree::NodeRefPtr<4>,
   embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>, embree::sse2::PrimInfoRange,
   embree::PrimRef, embree::FastAllocator::Create, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Set3,
   embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::BuildProgressMonitor>(embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>&,
   embree::PrimRef*, embree::sse2::PrimInfoRange const&, embree::FastAllocator::Create,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Set3, embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1} const&,
   embree::BuildProgressMonitor const&, embree::sse2::GeneralBVHBuilder::Settings const&) */

void embree::sse2::GeneralBVHBuilder::
     build<embree::NodeRefPtr<4>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::BuildProgressMonitor>
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               ulong *param_9)

{
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_121;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  long local_10;
  
  local_38 = (undefined1 *)&local_138;
  local_98 = *param_9;
  uStack_90 = param_9[1];
  local_88 = param_9[2];
  uStack_80 = param_9[3];
  local_78 = param_9[4];
  uStack_70 = param_9[5];
  local_68 = param_9[6];
  uStack_60 = param_9[7];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = &local_120;
  local_20 = &local_f8;
  local_40 = &local_121;
  local_30 = param_7;
  local_28 = &local_118;
  local_18 = param_8;
  local_138 = param_5;
  local_130 = param_6;
  local_120 = param_4;
  local_58 = param_2;
  local_50 = param_1;
  if (0x10 < *param_9) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_a8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = *param_3;
  uStack_e4 = param_3[1];
  uStack_e0 = param_3[2];
  uStack_dc = param_3[3];
  local_f0 = 0;
  local_d8 = param_3[4];
  uStack_d4 = param_3[5];
  uStack_d0 = param_3[6];
  uStack_cc = param_3[7];
  local_c8 = param_3[8];
  uStack_c4 = param_3[9];
  uStack_c0 = param_3[10];
  uStack_bc = param_3[0xb];
  local_f8 = 1;
  local_b8 = param_3[0xc];
  uStack_b4 = param_3[0xd];
  uStack_b0 = param_3[0xe];
  uStack_ac = param_3[0xf];
  local_a0 = *(undefined8 *)(param_3 + 0x12);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_38 = (undefined1 *)&local_138;
  BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
  ::recurse(&local_98,local_20,1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings) */

void embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5)

{
  long in_FS_OFFSET;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  long local_20;
  long local_10;
  
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  local_58 = param_5[4];
  uStack_54 = param_5[5];
  uStack_50 = param_5[6];
  uStack_4c = param_5[7];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_5[8];
  uStack_44 = param_5[9];
  uStack_40 = param_5[10];
  uStack_3c = param_5[0xb];
  local_38 = param_5[0xc];
  uStack_34 = param_5[0xd];
  uStack_30 = param_5[0xe];
  uStack_2c = param_5[0xf];
  local_20 = *(long *)(param_5 + 0x12) - *(long *)(param_5 + 0x10);
  uStack0000000000000008 = 4;
  uStack0000000000000010 = 0x28;
  local_28 = 0;
  local_78 = param_1;
  local_70 = param_4;
  GeneralBVHBuilder::
  build<embree::NodeRefPtr<4>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::BuildProgressMonitor>
            (&local_70,param_4,&local_68,param_2,param_2,param_4,&local_78,param_3,&stack0x00000008)
  ;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Set3, embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, 
   embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >, embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef, 32ul>,
   embree::sse2::PrimInfoRange, embree::PrimRef, embree::NodeRefPtr<4>,
   embree::FastAllocator::CachedAllocator, embree::FastAllocator::Create,
   embree::AABBNode_t<embree::NodeRefPtr<4>, 4>::Create2, embree::AABBNode_t<embree::NodeRefPtr<4>,
   4>::Set3, embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,
   embree::BuildProgressMonitor&, embree::PrimRef*, embree::PrimInfoT<embree::BBox<embree::Vec3fa> >
   const&, embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef const*,
   embree::range<unsigned long> const&, embree::FastAllocator::CachedAllocator const&)#1},
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,
   embree::sse2::PrimInfoRange>,
   embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> >&, embree::FastAllocator::CachedAllocator,
   bool)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreat...mbree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreat___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  TaskGroupContext *pTVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  TaskScheduler *pTVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  TaskGroupContext *local_78;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  uVar12 = *(ulong *)(this + 8);
  uVar11 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar12 - uVar11) {
    pTVar4 = *(TaskGroupContext **)(this + 0x38);
    uStack_50 = *(undefined8 *)(this + 0x20);
    uStack_48 = *(undefined8 *)(this + 0x28);
    uStack_40 = *(undefined8 *)(this + 0x30);
    uVar12 = uVar12 + uVar11 >> 1;
    local_68 = uVar12;
    uStack_60 = uVar11;
    local_58 = *(ulong *)(this + 0x18);
    local_38 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar10 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSpli___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar10,(_lambda___1_ *)&local_68,pTVar4,uVar12 - uVar11,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) goto LAB_00115d7e;
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar2 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar2) goto LAB_00115d7e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar7 + 0x40080 + uVar2);
      *puVar3 = &PTR_execute_001170d8;
      puVar3[1] = local_68;
      puVar3[2] = uStack_60;
      puVar3[7] = local_38;
      puVar3[3] = local_58;
      puVar3[4] = uStack_50;
      puVar3[5] = uStack_48;
      puVar3[6] = uStack_40;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar12 - uVar11;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_98 = *(undefined8 *)(this + 0x18);
    local_a8 = *(long *)(this + 8);
    pTVar4 = *(TaskGroupContext **)(this + 0x38);
    uStack_90 = *(undefined8 *)(this + 0x20);
    uStack_88 = *(undefined8 *)(this + 0x28);
    uStack_80 = *(undefined8 *)(this + 0x30);
    uVar11 = local_a8 - uVar12;
    uStack_a0 = uVar12;
    local_78 = pTVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      pTVar10 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSpli___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar10,(_lambda___1_ *)&local_a8,pTVar4,uVar11,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) {
LAB_00115d7e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar12 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar12) goto LAB_00115d7e;
      *(ulong *)(lVar7 + 0xc00c0) = uVar12;
      puVar3 = (undefined8 *)(lVar7 + 0x40080 + uVar12);
      *puVar3 = &PTR_execute_001170d8;
      puVar3[1] = local_a8;
      puVar3[2] = uStack_a0;
      puVar3[7] = local_78;
      puVar3[3] = local_98;
      puVar3[4] = uStack_90;
      puVar3[5] = uStack_88;
      puVar3[6] = uStack_80;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar8 + 0x60) = pTVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar11;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    for (; uVar11 < uVar12; uVar11 = uVar11 + 1) {
      lVar7 = *(long *)(this + 0x20);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uVar9 = sse2::GeneralBVHBuilder::
              BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
              ::recurse(*(undefined8 *)(this + 0x30),uVar11 * 0x60 + *(long *)(this + 0x28),1);
      *(undefined8 *)(lVar7 + uVar11 * 8) = uVar9;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



