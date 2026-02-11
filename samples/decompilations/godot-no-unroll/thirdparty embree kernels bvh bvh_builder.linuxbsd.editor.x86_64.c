
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<embree::PrimRef*, long, embree::PrimRef,
   __gnu_cxx::__ops::_Iter_less_iter>(embree::PrimRef*, long, long, embree::PrimRef,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__adjust_heap<embree::PrimRef*,long,embree::PrimRef,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
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
  lVar7 = param_2;
  if (param_2 < lVar8) {
    do {
      lVar6 = (lVar7 + 1) * 2;
      lVar3 = (lVar7 + 1) * 0x40;
      lVar1 = param_1 + -0x20 + lVar3;
      puVar4 = (undefined8 *)(lVar3 + param_1);
      if (CONCAT44(*(undefined4 *)((long)puVar4 + 0x1c),*(undefined4 *)((long)puVar4 + 0xc)) <
          CONCAT44(*(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0xc))) {
        lVar6 = lVar6 + -1;
        puVar4 = (undefined8 *)(lVar6 * 0x20 + param_1);
      }
      uVar2 = puVar4[1];
      puVar5 = (undefined8 *)(lVar7 * 0x20 + param_1);
      *puVar5 = *puVar4;
      puVar5[1] = uVar2;
      uVar2 = puVar4[3];
      puVar5[2] = puVar4[2];
      puVar5[3] = uVar2;
      lVar7 = lVar6;
    } while (lVar6 < lVar8);
    if ((param_3 & 1) == 0) goto LAB_00100158;
  }
  else {
    puVar4 = (undefined8 *)(param_2 * 0x20 + param_1);
    lVar6 = param_2;
    if ((param_3 & 1) != 0) {
      uVar13 = *param_4;
      uVar14 = param_4[1];
      uVar15 = param_4[2];
      uVar16 = param_4[3];
      uVar9 = param_4[4];
      uVar10 = param_4[5];
      uVar11 = param_4[6];
      uVar12 = param_4[7];
      goto LAB_00100133;
    }
LAB_00100158:
    if ((long)(param_3 - 2) / 2 == lVar6) {
      lVar7 = lVar6 + 1;
      lVar6 = lVar6 + lVar7;
      puVar5 = (undefined8 *)(param_1 + -0x20 + lVar7 * 0x40);
      uVar2 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar2;
      uVar2 = puVar5[3];
      puVar4[2] = puVar5[2];
      puVar4[3] = uVar2;
      puVar4 = (undefined8 *)(lVar6 * 0x20 + param_1);
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
  lVar7 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
  if (param_2 < lVar6) {
    while( true ) {
      lVar8 = lVar7 >> 1;
      puVar4 = (undefined8 *)(param_1 + lVar6 * 0x20);
      puVar5 = (undefined8 *)(lVar8 * 0x20 + param_1);
      if (CONCAT44(uVar12,uVar16) <=
          CONCAT44(*(undefined4 *)((long)puVar5 + 0x1c),*(undefined4 *)((long)puVar5 + 0xc))) break;
      uVar2 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar2;
      uVar2 = puVar5[3];
      puVar4[2] = puVar5[2];
      puVar4[3] = uVar2;
      lVar7 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
      lVar6 = lVar8;
      if (lVar8 <= param_2) {
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
LAB_00100133:
  *(undefined4 *)puVar4 = uVar13;
  *(undefined4 *)((long)puVar4 + 4) = uVar14;
  *(undefined4 *)(puVar4 + 1) = uVar15;
  *(undefined4 *)((long)puVar4 + 0xc) = uVar16;
  *(undefined4 *)(puVar4 + 2) = uVar9;
  *(undefined4 *)((long)puVar4 + 0x14) = uVar10;
  *(undefined4 *)(puVar4 + 3) = uVar11;
  *(undefined4 *)((long)puVar4 + 0x1c) = uVar12;
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
LAB_0010069a:
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
            if (uVar24 <= uVar21) goto LAB_0010057e;
LAB_0010064a:
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
            if (uVar22 < uVar24) goto LAB_0010064a;
            goto LAB_0010069a;
          }
LAB_0010057e:
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
        if (lVar19 < 0x201) goto LAB_0010071c;
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
LAB_0010071c:
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
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint in_ECX;
  embree *peVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  BinInfoT_conflict *pBVar18;
  BinInfoT_conflict *pBVar19;
  float *pfVar20;
  long in_RDX;
  ulong uVar21;
  long lVar22;
  BinInfoT_conflict *pBVar23;
  uint uVar24;
  ulong uVar25;
  embree *peVar26;
  embree *peVar27;
  long lVar28;
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  byte bVar33;
  undefined1 auVar34 [16];
  uint uVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  float fVar39;
  uint uVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  int iVar44;
  float fVar45;
  uint uVar46;
  uint uVar50;
  uint uVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar56;
  uint uVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar58;
  undefined1 auVar55 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  uint uVar67;
  undefined1 auVar62 [16];
  float fVar70;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint uVar77;
  uint uVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
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
  ulong *local_1ee8;
  ulong *local_1ee0;
  ulong *local_1ed8;
  undefined1 local_1ed0 [16];
  undefined1 local_1ec0 [16];
  ulong local_1eb0 [2];
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
  int aiStack_27c [141];
  long local_48;
  
  bVar33 = 0;
  uVar31 = *(ulong *)(in_RDX + 0x48);
  uVar21 = *(ulong *)(in_RDX + 0x40);
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar32 = uVar31 - uVar21;
  local_1f00._0_1_ = (byte)in_ECX;
  if (0xbff < uVar32) {
    pBVar19 = local_1c80;
    pBVar23 = local_1080;
    do {
      *(float *)(pBVar19 + 0x40) = _LC4;
      *(float *)(pBVar19 + 0x44) = _LC4;
      *(float *)(pBVar19 + 0x48) = _LC4;
      *(float *)(pBVar19 + 0x4c) = _LC4;
      pBVar18 = pBVar19 + 0x60;
      *(undefined4 *)(pBVar19 + 0x50) = _LC2;
      *(undefined4 *)(pBVar19 + 0x54) = _LC2;
      *(undefined4 *)(pBVar19 + 0x58) = _LC2;
      *(undefined4 *)(pBVar19 + 0x5c) = _LC2;
      *(float *)(pBVar19 + 0x20) = _LC4;
      *(float *)(pBVar19 + 0x24) = _LC4;
      *(float *)(pBVar19 + 0x28) = _LC4;
      *(float *)(pBVar19 + 0x2c) = _LC4;
      *(undefined4 *)(pBVar19 + 0x30) = _LC2;
      *(undefined4 *)(pBVar19 + 0x34) = _LC2;
      *(undefined4 *)(pBVar19 + 0x38) = _LC2;
      *(undefined4 *)(pBVar19 + 0x3c) = _LC2;
      *(float *)pBVar19 = _LC4;
      *(float *)(pBVar19 + 4) = _LC4;
      *(float *)(pBVar19 + 8) = _LC4;
      *(float *)(pBVar19 + 0xc) = _LC4;
      *(undefined4 *)(pBVar19 + 0x10) = _LC2;
      *(undefined4 *)(pBVar19 + 0x14) = _LC2;
      *(undefined4 *)(pBVar19 + 0x18) = _LC2;
      *(undefined4 *)(pBVar19 + 0x1c) = _LC2;
      *(undefined1 (*) [16])pBVar23 = (undefined1  [16])0x0;
      pBVar19 = pBVar18;
      pBVar23 = pBVar23 + 0x10;
    } while (local_1080 != pBVar18);
    fVar45 = (float)uVar32 * __LC29 + __LC30;
    if (__LC31 <= fVar45) {
      local_1eb0[0] = (long)(fVar45 - __LC31) ^ 0x8000000000000000;
    }
    else {
      local_1eb0[0] = (ulong)fVar45;
    }
    local_1ea0 = *(float *)(in_RDX + 0x20);
    fStack_1e9c = *(float *)(in_RDX + 0x24);
    fStack_1e98 = *(float *)(in_RDX + 0x28);
    fStack_1e94 = *(float *)(in_RDX + 0x2c);
    local_1ee8 = local_1eb0;
    auVar49._0_4_ = *(float *)(in_RDX + 0x30) - local_1ea0;
    auVar49._4_4_ = *(float *)(in_RDX + 0x34) - fStack_1e9c;
    auVar49._8_4_ = *(float *)(in_RDX + 0x38) - fStack_1e98;
    auVar49._12_4_ = *(float *)(in_RDX + 0x3c) - fStack_1e94;
    if (0x20 < local_1eb0[0]) {
      local_1eb0[0] = 0x20;
    }
    auVar69._4_4_ = _LC33;
    auVar69._0_4_ = _LC33;
    auVar69._8_4_ = _LC33;
    auVar69._12_4_ = _LC33;
    local_1f30._4_4_ = _LC4;
    local_1f30._0_4_ = _LC4;
    fStack_1f28 = _LC4;
    fStack_1f24 = _LC4;
    auVar69 = maxps(auVar69,auVar49);
    local_1f20._4_4_ = _LC2;
    local_1f20._0_4_ = _LC2;
    local_1f20._8_4_ = _LC2;
    local_1f20._12_4_ = _LC2;
    auVar49 = local_1f20;
    auVar53._0_4_ = (float)(long)local_1eb0[0] * __LC34;
    local_1ee0 = &local_1ef0;
    auVar53._4_4_ = auVar53._0_4_;
    auVar53._8_4_ = auVar53._0_4_;
    auVar53._12_4_ = auVar53._0_4_;
    auVar53 = divps(auVar53,auVar69);
    local_1e90[0] = (float)(auVar53._0_4_ & -(uint)(_LC33 < auVar69._0_4_));
    local_1e90[1] = (float)(auVar53._4_4_ & -(uint)(_LC33 < auVar69._4_4_));
    local_1e90[2] = (float)(auVar53._8_4_ & -(uint)(_LC33 < auVar69._8_4_));
    uStack_1e84 = auVar53._12_4_ & -(uint)(_LC33 < auVar69._12_4_);
    local_1ef0 = param_2;
    local_1ed8 = local_1ee8;
    parallel_reduce_internal<unsigned_long,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::range<unsigned_long>const&)_1_,embree::bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)::_lambda(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>const&,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>const&)_2_>
              (local_e80,uVar32 + 0x3ff >> 10,uVar21,uVar31,0x400,local_1c80,
               (_lambda_embree__range<unsigned_long>_const___1_ *)&local_1ee0,
               (_lambda_embree__sse2__BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>_>_const__embree__sse2__BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>_>_const___2_
                *)&local_1ee8);
    pBVar19 = local_1c80;
    peVar26 = local_e80;
    do {
      lVar28 = 0;
      do {
        uVar6 = *(undefined8 *)(peVar26 + lVar28 + 8);
        uVar7 = *(undefined8 *)(peVar26 + lVar28 + 0x10);
        uVar8 = *(undefined8 *)(peVar26 + lVar28 + 0x10 + 8);
        *(undefined8 *)(pBVar19 + lVar28) = *(undefined8 *)(peVar26 + lVar28);
        *(undefined8 *)(pBVar19 + lVar28 + 8) = uVar6;
        *(undefined8 *)(pBVar19 + lVar28 + 0x10) = uVar7;
        *(undefined8 *)(pBVar19 + lVar28 + 0x10 + 8) = uVar8;
        lVar28 = lVar28 + 0x20;
      } while (lVar28 != 0x60);
      peVar26 = peVar26 + 0x60;
      pBVar19 = pBVar19 + 0x60;
    } while (peVar26 != local_280);
    pBVar19 = local_1080;
    for (lVar28 = 0x40; lVar28 != 0; lVar28 = lVar28 + -1) {
      *(undefined8 *)pBVar19 = *(undefined8 *)peVar26;
      peVar26 = peVar26 + (ulong)bVar33 * -0x10 + 8;
      pBVar19 = pBVar19 + (ulong)bVar33 * -0x10 + 8;
    }
    if (local_1eb0[0] == 1) {
      local_1ed0 = _local_1f30;
      local_1ec0 = (undefined1  [16])0x0;
    }
    else {
      iVar36 = 0;
      iVar38 = 0;
      iVar41 = 0;
      iVar44 = 0;
      pfVar20 = local_1e90 + local_1eb0[0] * 4;
      pBVar19 = aBStack_1ce0 + local_1eb0[0] * 0x60;
      auVar53 = _local_1f30;
      auVar69 = _local_1f30;
      auVar73 = local_1f20;
      auVar74 = _local_1f30;
      auVar75 = local_1f20;
      lVar28 = local_1eb0[0] * 0x10;
      do {
        lVar22 = lVar28 + -0x10;
        local_1f20 = maxps(local_1f20,*(undefined1 (*) [16])(pBVar19 + 0x10));
        auVar53 = minps(auVar53,*(undefined1 (*) [16])pBVar19);
        pBVar23 = pBVar19 + -0x60;
        iVar2 = *(int *)(local_1080 + lVar22);
        iVar3 = *(int *)((long)auStack_107c + lVar28 + -0x10);
        iVar4 = *(int *)(local_1090 + lVar28 + 8);
        iVar5 = *(int *)(local_1090 + lVar28 + 0xc);
        auVar73 = maxps(auVar73,*(undefined1 (*) [16])(pBVar19 + 0x30));
        pfVar20[3] = 0.0;
        auVar69 = minps(auVar69,*(undefined1 (*) [16])(pBVar19 + 0x20));
        auVar75 = maxps(auVar75,*(undefined1 (*) [16])(pBVar19 + 0x50));
        iVar36 = iVar2 + iVar36;
        iVar38 = iVar3 + iVar38;
        iVar41 = iVar4 + iVar41;
        iVar44 = iVar5 + iVar44;
        auVar74 = minps(auVar74,*(undefined1 (*) [16])(pBVar19 + 0x40));
        *(int *)(local_e80 + lVar22) = iVar36;
        *(int *)((long)aiStack_e7c + lVar28 + -0x10) = iVar38;
        *(int *)(aeStack_ee0 + lVar28 + 0x58) = iVar41;
        *(int *)(aeStack_ee0 + lVar28 + 0x5c) = iVar44;
        fVar45 = local_1f20._4_4_ - auVar53._4_4_;
        fVar43 = local_1f20._8_4_ - auVar53._8_4_;
        *pfVar20 = (local_1f20._0_4_ - auVar53._0_4_) * (fVar45 + fVar43) + fVar45 * fVar43;
        fVar45 = auVar73._4_4_ - auVar69._4_4_;
        fVar43 = auVar73._8_4_ - auVar69._8_4_;
        pfVar20[1] = (auVar73._0_4_ - auVar69._0_4_) * (fVar45 + fVar43) + fVar45 * fVar43;
        fVar45 = auVar75._4_4_ - auVar74._4_4_;
        fVar43 = auVar75._8_4_ - auVar74._8_4_;
        pfVar20[2] = (auVar75._0_4_ - auVar74._0_4_) * (fVar45 + fVar43) + fVar45 * fVar43;
        pfVar20 = pfVar20 + -4;
        pBVar19 = pBVar23;
        lVar28 = lVar22;
      } while (local_1c80 != pBVar23);
      local_1ed0 = _local_1f30;
      local_1ec0 = (undefined1  [16])0x0;
      iVar36 = (1 << ((byte)local_1f00 & 0x1f)) + -1;
      if (1 < local_1eb0[0]) {
        local_1f50._4_4_ = _UNK_00111cc4;
        local_1f50._0_4_ = __LC28;
        local_1f50._12_4_ = _UNK_00111ccc;
        local_1f50._8_4_ = _UNK_00111cc8;
        lVar28 = 0x10;
        local_1f10 = (undefined1  [16])0x0;
        local_1f40 = _local_1f30;
        uVar31 = (ulong)in_ECX;
        local_1f20 = (undefined1  [16])0x0;
        auVar53 = auVar49;
        auVar69 = _local_1f30;
        auVar73 = auVar49;
        do {
          auVar73 = maxps(auVar73,*(undefined1 (*) [16])(pBVar23 + 0x50));
          auVar69 = minps(auVar69,*(undefined1 (*) [16])pBVar23);
          local_1f40 = minps(local_1f40,*(undefined1 (*) [16])(pBVar23 + 0x40));
          auVar49 = maxps(auVar49,*(undefined1 (*) [16])(pBVar23 + 0x10));
          local_1f20._0_4_ = local_1f20._0_4_ + *(int *)(local_1090 + lVar28);
          local_1f20._4_4_ = local_1f20._4_4_ + *(int *)(local_1090 + lVar28 + 4);
          local_1f20._8_4_ = local_1f20._8_4_ + *(int *)(local_1090 + lVar28 + 8);
          local_1f20._12_4_ = local_1f20._12_4_ + *(int *)(local_1090 + lVar28 + 0xc);
          auVar53 = maxps(auVar53,*(undefined1 (*) [16])(pBVar23 + 0x30));
          fVar45 = auVar73._4_4_ - local_1f40._4_4_;
          fVar43 = auVar73._8_4_ - local_1f40._8_4_;
          _local_1f30 = minps(_local_1f30,*(undefined1 (*) [16])(pBVar23 + 0x20));
          fVar61 = auVar49._4_4_ - auVar69._4_4_;
          fVar63 = auVar49._8_4_ - auVar69._8_4_;
          fVar70 = auVar53._4_4_ - SUB164(_local_1f30,4);
          fVar71 = auVar53._8_4_ - SUB164(_local_1f30,8);
          fVar45 = (fVar45 + fVar43) * (auVar73._0_4_ - local_1f40._0_4_) + fVar45 * fVar43;
          uVar67 = (uint)(local_1f20._0_4_ + iVar36) >> uVar31;
          uVar24 = (uint)(local_1f20._4_4_ + iVar36) >> uVar31;
          uVar35 = (uint)(local_1f20._8_4_ + iVar36) >> uVar31;
          uVar37 = (uint)(local_1f20._12_4_ + iVar36) >> uVar31;
          uVar40 = (uint)(iVar36 + *(int *)(local_e80 + lVar28)) >> uVar31;
          uVar46 = (uint)(iVar36 + *(int *)((long)aiStack_e7c + lVar28)) >> uVar31;
          uVar50 = (uint)(iVar36 + *(int *)((long)aiStack_e7c + lVar28 + 4)) >> uVar31;
          uVar51 = (uint)(iVar36 + *(int *)((long)aiStack_e7c + lVar28 + 8)) >> uVar31;
          local_1f00 = (uint)__LC35;
          uStack_1efc = (uint)((ulong)__LC35 >> 0x20);
          uStack_1ef8 = (uint)_UNK_00111cf8;
          uStack_1ef4 = (uint)((ulong)_UNK_00111cf8 >> 0x20);
          local_1f70 = (uint)__LC36;
          uStack_1f6c = (uint)((ulong)__LC36 >> 0x20);
          uStack_1f68 = (uint)_UNK_00111d08;
          uStack_1f64 = (uint)((ulong)_UNK_00111d08 >> 0x20);
          uVar11 = local_1f50._0_4_;
          uVar12 = local_1f50._4_4_;
          uVar13 = local_1f50._8_4_;
          uVar14 = local_1f50._12_4_;
          pfVar20 = (float *)((long)local_1e80 + lVar28);
          lVar22 = lVar28 + 4;
          lVar9 = lVar28 + 8;
          lVar10 = lVar28 + 0xc;
          lVar28 = lVar28 + 0x10;
          local_1f50._4_4_ = _UNK_00111cc4 + local_1f50._4_4_;
          local_1f50._0_4_ = __LC28 + local_1f50._0_4_;
          local_1f50._8_4_ = _UNK_00111cc8 + local_1f50._8_4_;
          local_1f50._12_4_ = _UNK_00111ccc + local_1f50._12_4_;
          fVar43 = ((float)(int)(uVar67 & local_1f00) + (float)((int)uVar67 >> 0x1f & local_1f70)) *
                   ((fVar61 + fVar63) * (auVar49._0_4_ - auVar69._0_4_) + fVar61 * fVar63) +
                   ((float)((int)uVar40 >> 0x1f & local_1f70) + (float)(int)(uVar40 & local_1f00)) *
                   *pfVar20;
          fVar70 = ((float)(int)(uVar24 & uStack_1efc) + (float)((int)uVar24 >> 0x1f & uStack_1f6c))
                   * (fVar70 * fVar71 + (fVar70 + fVar71) * (auVar53._0_4_ - SUB164(_local_1f30,0)))
                   + ((float)((int)uVar46 >> 0x1f & uStack_1f6c) +
                     (float)(int)(uVar46 & uStack_1efc)) * *(float *)((long)local_1e80 + lVar22);
          fVar71 = ((float)(int)(uVar35 & uStack_1ef8) + (float)((int)uVar35 >> 0x1f & uStack_1f68))
                   * fVar45 +
                   ((float)((int)uVar50 >> 0x1f & uStack_1f68) + (float)(int)(uVar50 & uStack_1ef8))
                   * *(float *)((long)local_1e80 + lVar9);
          fVar45 = ((float)(int)(uVar37 & uStack_1ef4) + (float)((int)uVar37 >> 0x1f & uStack_1f64))
                   * fVar45 +
                   ((float)((int)uVar51 >> 0x1f & uStack_1f64) + (float)(int)(uVar51 & uStack_1ef4))
                   * *(float *)((long)local_1e80 + lVar10);
          uVar67 = -(uint)(fVar43 < local_1ed0._0_4_);
          uVar24 = -(uint)(fVar70 < local_1ed0._4_4_);
          uVar35 = -(uint)(fVar71 < local_1ed0._8_4_);
          uVar37 = -(uint)(fVar45 < local_1ed0._12_4_);
          local_1f10._0_4_ = uVar11 & uVar67 | ~uVar67 & local_1f10._0_4_;
          local_1f10._4_4_ = uVar12 & uVar24 | ~uVar24 & local_1f10._4_4_;
          local_1f10._8_4_ = uVar13 & uVar35 | ~uVar35 & local_1f10._8_4_;
          local_1f10._12_4_ = uVar14 & uVar37 | ~uVar37 & local_1f10._12_4_;
          auVar74._4_4_ = uVar24 & (uint)fVar70;
          auVar74._0_4_ = uVar67 & (uint)fVar43;
          auVar75._0_4_ = ~uVar67 & (uint)local_1ed0._0_4_;
          auVar75._4_4_ = ~uVar24 & (uint)local_1ed0._4_4_;
          auVar75._8_4_ = ~uVar35 & (uint)local_1ed0._8_4_;
          auVar75._12_4_ = ~uVar37 & (uint)local_1ed0._12_4_;
          auVar74._8_4_ = uVar35 & (uint)fVar71;
          auVar74._12_4_ = uVar37 & (uint)fVar45;
          local_1ed0 = auVar74 | auVar75;
          pBVar23 = pBVar23 + 0x60;
        } while (local_1eb0[0] * 0x10 != lVar28);
        local_1ec0._4_4_ = local_1f10._4_4_;
        local_1ec0._0_4_ = local_1f10._0_4_;
        local_1ec0._8_4_ = local_1f10._8_4_;
        local_1ec0._12_4_ = local_1f10._12_4_;
      }
    }
    uVar31 = 0;
    iVar36 = 0;
    uVar21 = 0xffffffff;
    fVar45 = _LC4;
    do {
      if (((local_1e90[uVar31] != 0.0) && (*(float *)(local_1ed0 + uVar31 * 4) < fVar45)) &&
         (*(int *)(local_1ec0 + uVar31 * 4) != 0)) {
        uVar21 = uVar31 & 0xffffffff;
        fVar45 = *(float *)(local_1ed0 + uVar31 * 4);
        iVar36 = *(int *)(local_1ec0 + uVar31 * 4);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != 3);
    *(int *)(param_1 + 4) = (int)uVar21;
    *(int *)(param_1 + 8) = iVar36;
    *(ulong *)(param_1 + 0x20) = CONCAT44(fStack_1e9c,local_1ea0);
    *(ulong *)(param_1 + 0x28) = CONCAT44(fStack_1e94,fStack_1e98);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(ulong *)(param_1 + 0x10) = local_1eb0[0];
    *(float *)param_1 = fVar45;
    *(ulong *)(param_1 + 0x30) = CONCAT44(local_1e90[1],local_1e90[0]);
    *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_1e84,local_1e90[2]);
    goto LAB_00100faf;
  }
  local_1ed0._0_8_ = CONCAT44(_LC4,_LC4);
  local_1ed0._8_4_ = _LC4;
  local_1ed0._12_4_ = _LC4;
  auVar73._0_8_ = CONCAT44(_LC2,_LC2);
  auVar73._8_4_ = _LC2;
  auVar73._12_4_ = _LC2;
  peVar26 = local_e80;
  peVar27 = local_280;
  do {
    *(undefined1 (*) [16])(peVar26 + 0x40) = local_1ed0;
    peVar15 = peVar26 + 0x60;
    *(undefined1 (*) [16])(peVar26 + 0x50) = auVar73;
    *(undefined1 (*) [16])(peVar26 + 0x20) = local_1ed0;
    *(undefined1 (*) [16])(peVar26 + 0x30) = auVar73;
    *(undefined1 (*) [16])peVar26 = local_1ed0;
    *(undefined1 (*) [16])(peVar26 + 0x10) = auVar73;
    *(undefined1 (*) [16])peVar27 = (undefined1  [16])0x0;
    peVar26 = peVar15;
    peVar27 = peVar27 + 0x10;
  } while (local_280 != peVar15);
  fVar45 = (float)(long)uVar32 * __LC29 + __LC30;
  if (__LC31 <= fVar45) {
    uVar31 = (long)(fVar45 - __LC31) ^ 0x8000000000000000;
  }
  else {
    uVar31 = (ulong)fVar45;
  }
  fVar45 = *(float *)(in_RDX + 0x20);
  fVar43 = *(float *)(in_RDX + 0x24);
  fVar70 = *(float *)(in_RDX + 0x28);
  fVar71 = *(float *)(in_RDX + 0x2c);
  auVar47._0_4_ = *(float *)(in_RDX + 0x30) - fVar45;
  auVar47._4_4_ = *(float *)(in_RDX + 0x34) - fVar43;
  auVar47._8_4_ = *(float *)(in_RDX + 0x38) - fVar70;
  auVar47._12_4_ = *(float *)(in_RDX + 0x3c) - fVar71;
  uVar29 = 0x20;
  if (uVar31 < 0x21) {
    uVar29 = uVar31;
  }
  auVar52._4_4_ = _LC33;
  auVar52._0_4_ = _LC33;
  auVar52._8_4_ = _LC33;
  auVar52._12_4_ = _LC33;
  pauVar30 = (undefined1 (*) [16])(param_2 + uVar21 * 0x20);
  auVar53 = maxps(auVar52,auVar47);
  auVar48._0_4_ = (float)(long)uVar29 * __LC34;
  auVar48._4_4_ = auVar48._0_4_;
  auVar48._8_4_ = auVar48._0_4_;
  auVar48._12_4_ = auVar48._0_4_;
  auVar49 = divps(auVar48,auVar53);
  fVar61 = (float)(-(uint)(_LC33 < auVar53._0_4_) & auVar49._0_4_);
  fVar63 = (float)(-(uint)(_LC33 < auVar53._4_4_) & auVar49._4_4_);
  fVar65 = (float)(-(uint)(_LC33 < auVar53._8_4_) & auVar49._8_4_);
  uVar67 = -(uint)(_LC33 < auVar53._12_4_) & auVar49._12_4_;
  local_1e90[0] = fVar61;
  local_1e90[1] = fVar63;
  local_1e90[2] = fVar65;
  if (uVar32 != 0) {
    uVar24 = (int)uVar29 - 1;
    if (uVar32 != 1) {
      pauVar16 = pauVar30;
      do {
        auVar49 = pauVar16[1];
        auVar53 = *pauVar16;
        pauVar17 = pauVar16 + 4;
        auVar69 = pauVar16[2];
        uVar35 = (uint)(((auVar49._0_4_ + auVar53._0_4_) - fVar45) * fVar61 + _LC26);
        uVar37 = (uint)(((auVar49._4_4_ + auVar53._4_4_) - fVar43) * fVar63 + _LC26);
        uVar40 = (uint)(((auVar49._8_4_ + auVar53._8_4_) - fVar70) * fVar65 + _LC26);
        uVar46 = -(uint)((int)uVar35 < (int)uVar24);
        uVar50 = -(uint)((int)uVar37 < (int)uVar24);
        uVar51 = -(uint)((int)uVar40 < (int)uVar24);
        uVar35 = uVar35 & uVar46 | ~uVar46 & uVar24;
        uVar37 = uVar37 & uVar50 | ~uVar50 & uVar24;
        uVar46 = uVar40 & uVar51 | ~uVar51 & uVar24;
        auVar74 = pauVar16[3];
        uVar25 = (ulong)(~-(uint)((int)uVar35 < 0) & uVar35);
        peVar26 = local_e80 + uVar25 * 0x60;
        uVar35 = (uint)(((auVar74._0_4_ + auVar69._0_4_) - fVar45) * fVar61 + _LC26);
        uVar40 = (uint)(((auVar74._4_4_ + auVar69._4_4_) - fVar43) * fVar63 + _LC26);
        uVar50 = (uint)(((auVar74._8_4_ + auVar69._8_4_) - fVar70) * fVar65 + _LC26);
        uVar51 = -(uint)((int)uVar35 < (int)uVar24);
        uVar77 = -(uint)((int)uVar40 < (int)uVar24);
        uVar78 = -(uint)((int)uVar50 < (int)uVar24);
        uVar35 = uVar51 & uVar35 | ~uVar51 & uVar24;
        uVar40 = uVar77 & uVar40 | ~uVar77 & uVar24;
        uVar50 = uVar78 & uVar50 | ~uVar78 & uVar24;
        auVar75 = minps(*(undefined1 (*) [16])peVar26,auVar53);
        *(undefined1 (*) [16])peVar26 = auVar75;
        auVar75 = maxps(*(undefined1 (*) [16])(local_e70 + uVar25 * 0x18),auVar49);
        *(undefined1 (*) [16])(local_e70 + uVar25 * 0x18) = auVar75;
        uVar21 = (ulong)(~-(uint)((int)uVar37 < 0) & uVar37);
        lVar28 = uVar21 * 0x60;
        auVar75 = minps(*(undefined1 (*) [16])(local_e60 + lVar28),auVar53);
        *(undefined1 (*) [16])(local_e60 + lVar28) = auVar75;
        auVar75 = maxps(*(undefined1 (*) [16])(local_e50 + lVar28),auVar49);
        *(undefined1 (*) [16])(local_e50 + lVar28) = auVar75;
        uVar1 = (ulong)(~-(uint)((int)uVar46 < 0) & uVar46);
        lVar28 = uVar1 * 0x60;
        auVar53 = minps(*(undefined1 (*) [16])(local_e40 + lVar28),auVar53);
        *(undefined1 (*) [16])(local_e40 + lVar28) = auVar53;
        auVar49 = maxps(*(undefined1 (*) [16])(local_e30 + lVar28),auVar49);
        *(undefined1 (*) [16])(local_e30 + lVar28) = auVar49;
        *(int *)(local_e80 + (uVar25 + 0xc0) * 0x10) =
             *(int *)(local_e80 + (uVar25 + 0xc0) * 0x10) + 1;
        uVar25 = (ulong)(~-(uint)((int)uVar35 < 0) & uVar35);
        aiStack_27c[uVar21 * 4] = aiStack_27c[uVar21 * 4] + 1;
        aiStack_27c[uVar1 * 4 + 1] = aiStack_27c[uVar1 * 4 + 1] + 1;
        peVar26 = local_e80 + uVar25 * 0x60;
        auVar49 = minps(*(undefined1 (*) [16])peVar26,auVar69);
        *(undefined1 (*) [16])peVar26 = auVar49;
        auVar49 = maxps(*(undefined1 (*) [16])(local_e70 + uVar25 * 0x18),auVar74);
        *(undefined1 (*) [16])(local_e70 + uVar25 * 0x18) = auVar49;
        uVar21 = (ulong)(~-(uint)((int)uVar40 < 0) & uVar40);
        lVar28 = uVar21 * 0x60;
        auVar49 = minps(*(undefined1 (*) [16])(local_e60 + lVar28),auVar69);
        *(undefined1 (*) [16])(local_e60 + lVar28) = auVar49;
        auVar49 = maxps(*(undefined1 (*) [16])(local_e50 + lVar28),auVar74);
        *(undefined1 (*) [16])(local_e50 + lVar28) = auVar49;
        uVar1 = (ulong)(~-(uint)((int)uVar50 < 0) & uVar50);
        lVar28 = uVar1 * 0x60;
        auVar49 = minps(*(undefined1 (*) [16])(local_e40 + lVar28),auVar69);
        *(undefined1 (*) [16])(local_e40 + lVar28) = auVar49;
        auVar49 = maxps(*(undefined1 (*) [16])(local_e30 + lVar28),auVar74);
        *(undefined1 (*) [16])(local_e30 + lVar28) = auVar49;
        *(int *)(local_e80 + (uVar25 + 0xc0) * 0x10) =
             *(int *)(local_e80 + (uVar25 + 0xc0) * 0x10) + 1;
        aiStack_27c[uVar21 * 4] = aiStack_27c[uVar21 * 4] + 1;
        aiStack_27c[uVar1 * 4 + 1] = aiStack_27c[uVar1 * 4 + 1] + 1;
        pauVar16 = pauVar17;
      } while (pauVar30 + (uVar32 - 2 >> 1) * 4 + 4 != pauVar17);
      uVar21 = (uVar32 - 2 & 0xfffffffffffffffe) + 2;
      if (uVar32 <= uVar21) goto LAB_00100b25;
      pauVar30 = pauVar30 + uVar21 * 2;
    }
    auVar49 = pauVar30[1];
    auVar53 = *pauVar30;
    uVar35 = (uint)(((auVar49._0_4_ + auVar53._0_4_) - fVar45) * fVar61 + _LC26);
    uVar37 = (uint)(((auVar49._4_4_ + auVar53._4_4_) - fVar43) * fVar63 + _LC26);
    uVar40 = (uint)(((auVar49._8_4_ + auVar53._8_4_) - fVar70) * fVar65 + _LC26);
    uVar46 = -(uint)((int)uVar35 < (int)uVar24);
    uVar50 = -(uint)((int)uVar37 < (int)uVar24);
    uVar51 = -(uint)((int)uVar40 < (int)uVar24);
    uVar35 = uVar46 & uVar35 | ~uVar46 & uVar24;
    uVar37 = uVar50 & uVar37 | ~uVar50 & uVar24;
    uVar24 = uVar51 & uVar40 | ~uVar51 & uVar24;
    lVar28 = (long)(int)(~-(uint)((int)uVar35 < 0) & uVar35);
    peVar26 = local_e80 + lVar28 * 0x60;
    *(int *)(local_e80 + (lVar28 + 0xc0) * 0x10) = *(int *)(local_e80 + (lVar28 + 0xc0) * 0x10) + 1;
    auVar69 = minps(*(undefined1 (*) [16])peVar26,auVar53);
    *(undefined1 (*) [16])peVar26 = auVar69;
    auVar69 = maxps(*(undefined1 (*) [16])(local_e70 + lVar28 * 0x18),auVar49);
    *(undefined1 (*) [16])(local_e70 + lVar28 * 0x18) = auVar69;
    lVar28 = (long)(int)(~-(uint)((int)uVar37 < 0) & uVar37);
    lVar22 = lVar28 * 0x60;
    aiStack_27c[lVar28 * 4] = aiStack_27c[lVar28 * 4] + 1;
    auVar69 = minps(*(undefined1 (*) [16])(local_e60 + lVar22),auVar53);
    *(undefined1 (*) [16])(local_e60 + lVar22) = auVar69;
    auVar69 = maxps(*(undefined1 (*) [16])(local_e50 + lVar22),auVar49);
    *(undefined1 (*) [16])(local_e50 + lVar22) = auVar69;
    lVar28 = (long)(int)(~-(uint)((int)uVar24 < 0) & uVar24);
    lVar22 = lVar28 * 0x60;
    aiStack_27c[lVar28 * 4 + 1] = aiStack_27c[lVar28 * 4 + 1] + 1;
    auVar53 = minps(*(undefined1 (*) [16])(local_e40 + lVar22),auVar53);
    *(undefined1 (*) [16])(local_e40 + lVar22) = auVar53;
    auVar49 = maxps(*(undefined1 (*) [16])(local_e30 + lVar22),auVar49);
    *(undefined1 (*) [16])(local_e30 + lVar22) = auVar49;
  }
LAB_00100b25:
  uStack_1e84 = uVar67;
  if (uVar31 != 1) {
    auVar79._8_4_ = _LC2;
    auVar79._0_8_ = auVar73._0_8_;
    auVar79._12_4_ = _LC2;
    auVar76._8_4_ = _LC4;
    auVar76._0_8_ = local_1ed0._0_8_;
    auVar76._12_4_ = _LC4;
    auVar72._8_4_ = _LC2;
    auVar72._0_8_ = auVar73._0_8_;
    auVar72._12_4_ = _LC2;
    auVar68._8_4_ = _LC4;
    auVar68._0_8_ = local_1ed0._0_8_;
    auVar68._12_4_ = _LC4;
    auVar62._8_4_ = _LC2;
    auVar62._0_8_ = auVar73._0_8_;
    auVar62._12_4_ = _LC2;
    auVar54._8_4_ = _LC4;
    auVar54._0_8_ = local_1ed0._0_8_;
    auVar54._12_4_ = _LC4;
    iVar36 = 0;
    iVar38 = 0;
    iVar41 = 0;
    iVar44 = 0;
    pfVar20 = local_1e90 + uVar29 * 4;
    peVar26 = aeStack_ee0 + uVar29 * 0x60;
    lVar28 = uVar29 * 0x10;
    do {
      auVar62 = maxps(auVar62,*(undefined1 (*) [16])(peVar26 + 0x10));
      auVar54 = minps(auVar54,*(undefined1 (*) [16])peVar26);
      peVar27 = peVar26 + -0x60;
      iVar2 = *(int *)(local_280 + -0x10 + lVar28);
      iVar3 = *(int *)(local_290 + lVar28 + 4);
      iVar4 = *(int *)(local_290 + lVar28 + 8);
      iVar5 = *(int *)(local_290 + lVar28 + 0xc);
      auVar72 = maxps(auVar72,*(undefined1 (*) [16])(peVar26 + 0x30));
      pfVar20[3] = 0.0;
      auVar68 = minps(auVar68,*(undefined1 (*) [16])(peVar26 + 0x20));
      auVar79 = maxps(auVar79,*(undefined1 (*) [16])(peVar26 + 0x50));
      iVar36 = iVar2 + iVar36;
      iVar38 = iVar3 + iVar38;
      iVar41 = iVar4 + iVar41;
      iVar44 = iVar5 + iVar44;
      auVar76 = minps(auVar76,*(undefined1 (*) [16])(peVar26 + 0x40));
      *(int *)((long)aiStack_1c90 + lVar28) = iVar36;
      *(int *)((long)aiStack_1c90 + lVar28 + 4) = iVar38;
      *(int *)((long)aiStack_1c90 + lVar28 + 8) = iVar41;
      *(int *)((long)aiStack_1c90 + lVar28 + 0xc) = iVar44;
      fVar39 = auVar62._4_4_ - auVar54._4_4_;
      fVar42 = auVar62._8_4_ - auVar54._8_4_;
      *pfVar20 = (auVar62._0_4_ - auVar54._0_4_) * (fVar39 + fVar42) + fVar39 * fVar42;
      fVar39 = auVar72._4_4_ - auVar68._4_4_;
      fVar42 = auVar72._8_4_ - auVar68._8_4_;
      pfVar20[1] = (auVar72._0_4_ - auVar68._0_4_) * (fVar39 + fVar42) + fVar39 * fVar42;
      fVar39 = auVar79._4_4_ - auVar76._4_4_;
      fVar42 = auVar79._8_4_ - auVar76._8_4_;
      pfVar20[2] = (auVar79._0_4_ - auVar76._0_4_) * (fVar39 + fVar42) + fVar39 * fVar42;
      pfVar20 = pfVar20 + -4;
      peVar26 = peVar27;
      lVar28 = lVar28 + -0x10;
    } while (local_e80 != peVar27);
  }
  local_1ec0 = (undefined1  [16])0x0;
  iVar36 = (1 << ((byte)local_1f00 & 0x1f)) + -1;
  if (1 < uVar31) {
    lVar28 = 0x10;
    local_1f10 = (undefined1  [16])0x0;
    auVar82._8_4_ = _LC2;
    auVar82._0_8_ = auVar73._0_8_;
    auVar82._12_4_ = _LC2;
    local_1f20 = (undefined1  [16])0x0;
    auVar80._8_4_ = _LC2;
    auVar80._0_8_ = auVar73._0_8_;
    auVar80._12_4_ = _LC2;
    auVar81._8_4_ = _LC2;
    auVar81._0_8_ = auVar73._0_8_;
    auVar81._12_4_ = _LC2;
    uVar31 = 1;
    peVar26 = local_e80;
    uVar24 = __LC28;
    uVar35 = _UNK_00111cc4;
    uVar37 = _UNK_00111cc8;
    uVar40 = _UNK_00111ccc;
    local_1f50 = local_1ed0;
    local_1f40 = local_1ed0;
    _local_1f30 = local_1ed0;
    do {
      auVar82 = maxps(auVar82,*(undefined1 (*) [16])(peVar26 + 0x50));
      uVar31 = uVar31 + 1;
      local_1f50 = minps(local_1f50,*(undefined1 (*) [16])(peVar26 + 0x40));
      auVar81 = maxps(auVar81,*(undefined1 (*) [16])(peVar26 + 0x10));
      local_1f20._0_4_ = local_1f20._0_4_ + *(int *)(local_290 + lVar28);
      local_1f20._4_4_ = local_1f20._4_4_ + *(int *)(local_290 + lVar28 + 4);
      local_1f20._8_4_ = local_1f20._8_4_ + *(int *)(local_290 + lVar28 + 8);
      local_1f20._12_4_ = local_1f20._12_4_ + *(int *)(local_290 + lVar28 + 0xc);
      _local_1f30 = minps(_local_1f30,*(undefined1 (*) [16])peVar26);
      auVar80 = maxps(auVar80,*(undefined1 (*) [16])(peVar26 + 0x30));
      fVar39 = auVar82._4_4_ - local_1f50._4_4_;
      fVar42 = auVar82._8_4_ - local_1f50._8_4_;
      fVar64 = auVar81._4_4_ - SUB164(_local_1f30,4);
      fVar66 = auVar81._8_4_ - SUB164(_local_1f30,8);
      local_1f40 = minps(local_1f40,*(undefined1 (*) [16])(peVar26 + 0x20));
      fVar59 = auVar80._4_4_ - local_1f40._4_4_;
      fVar60 = auVar80._8_4_ - local_1f40._8_4_;
      fVar39 = (fVar39 + fVar42) * (auVar82._0_4_ - local_1f50._0_4_) + fVar39 * fVar42;
      uVar78 = (uint)(local_1f20._0_4_ + iVar36) >> in_ECX;
      uVar56 = (uint)(local_1f20._4_4_ + iVar36) >> in_ECX;
      uVar57 = (uint)(local_1f20._8_4_ + iVar36) >> in_ECX;
      uVar58 = (uint)(local_1f20._12_4_ + iVar36) >> in_ECX;
      local_1f00 = (uint)__LC35;
      uStack_1efc = (uint)((ulong)__LC35 >> 0x20);
      uStack_1ef8 = (uint)_UNK_00111cf8;
      uStack_1ef4 = (uint)((ulong)_UNK_00111cf8 >> 0x20);
      uVar46 = (uint)(*(int *)(local_1c80 + lVar28) + iVar36) >> in_ECX;
      uVar50 = (uint)(*(int *)((long)aiStack_1c7c + lVar28) + iVar36) >> in_ECX;
      uVar51 = (uint)(*(int *)((long)aiStack_1c7c + lVar28 + 4) + iVar36) >> in_ECX;
      uVar77 = (uint)(*(int *)((long)aiStack_1c7c + lVar28 + 8) + iVar36) >> in_ECX;
      local_1f70 = (uint)__LC36;
      uStack_1f6c = (uint)((ulong)__LC36 >> 0x20);
      uStack_1f68 = (uint)_UNK_00111d08;
      uStack_1f64 = (uint)((ulong)_UNK_00111d08 >> 0x20);
      pfVar20 = (float *)((long)local_1e80 + lVar28);
      lVar22 = lVar28 + 4;
      lVar9 = lVar28 + 8;
      lVar10 = lVar28 + 0xc;
      lVar28 = lVar28 + 0x10;
      fVar42 = ((float)(int)(uVar78 & local_1f00) + (float)((int)uVar78 >> 0x1f & local_1f70)) *
               ((fVar64 + fVar66) * (auVar81._0_4_ - SUB164(_local_1f30,0)) + fVar64 * fVar66) +
               ((float)(int)(uVar46 & local_1f00) + (float)((int)uVar46 >> 0x1f & local_1f70)) *
               *pfVar20;
      fVar59 = ((float)(int)(uVar56 & uStack_1efc) + (float)((int)uVar56 >> 0x1f & uStack_1f6c)) *
               ((fVar59 + fVar60) * (auVar80._0_4_ - local_1f40._0_4_) + fVar59 * fVar60) +
               ((float)(int)(uVar50 & uStack_1efc) + (float)((int)uVar50 >> 0x1f & uStack_1f6c)) *
               *(float *)((long)local_1e80 + lVar22);
      fVar60 = ((float)(int)(uVar57 & uStack_1ef8) + (float)((int)uVar57 >> 0x1f & uStack_1f68)) *
               fVar39 + ((float)(int)(uVar51 & uStack_1ef8) +
                        (float)((int)uVar51 >> 0x1f & uStack_1f68)) *
                        *(float *)((long)local_1e80 + lVar9);
      fVar39 = ((float)(int)(uVar58 & uStack_1ef4) + (float)((int)uVar58 >> 0x1f & uStack_1f64)) *
               fVar39 + ((float)(int)(uVar77 & uStack_1ef4) +
                        (float)((int)uVar77 >> 0x1f & uStack_1f64)) *
                        *(float *)((long)local_1e80 + lVar10);
      uVar46 = -(uint)(fVar42 < local_1ed0._0_4_);
      uVar50 = -(uint)(fVar59 < local_1ed0._4_4_);
      uVar51 = -(uint)(fVar60 < local_1ed0._8_4_);
      uVar77 = -(uint)(fVar39 < local_1ed0._12_4_);
      auVar34._4_4_ = uVar50 & (uint)fVar59;
      auVar34._0_4_ = uVar46 & (uint)fVar42;
      auVar55._0_4_ = ~uVar46 & (uint)local_1ed0._0_4_;
      auVar55._4_4_ = ~uVar50 & (uint)local_1ed0._4_4_;
      auVar55._8_4_ = ~uVar51 & (uint)local_1ed0._8_4_;
      auVar55._12_4_ = ~uVar77 & (uint)local_1ed0._12_4_;
      auVar34._8_4_ = uVar51 & (uint)fVar60;
      auVar34._12_4_ = uVar77 & (uint)fVar39;
      local_1f10._4_4_ = uVar35 & uVar50 | ~uVar50 & local_1f10._4_4_;
      local_1f10._0_4_ = uVar24 & uVar46 | ~uVar46 & local_1f10._0_4_;
      local_1f10._8_4_ = uVar37 & uVar51 | ~uVar51 & local_1f10._8_4_;
      local_1f10._12_4_ = uVar40 & uVar77 | ~uVar77 & local_1f10._12_4_;
      local_1ed0 = auVar34 | auVar55;
      peVar26 = peVar26 + 0x60;
      uVar24 = uVar24 + __LC28;
      uVar35 = uVar35 + _UNK_00111cc4;
      uVar37 = uVar37 + _UNK_00111cc8;
      uVar40 = uVar40 + _UNK_00111ccc;
    } while (uVar31 < uVar29);
    local_1ec0._8_8_ = local_1f10._8_8_;
    local_1ec0._0_8_ = local_1f10._0_8_;
  }
  uVar31 = 0;
  iVar36 = 0;
  uVar21 = 0xffffffff;
  fVar39 = _LC4;
  do {
    if (((local_1e90[uVar31] != 0.0) && (*(float *)(local_1ed0 + uVar31 * 4) < fVar39)) &&
       (*(int *)(local_1ec0 + uVar31 * 4) != 0)) {
      uVar21 = uVar31 & 0xffffffff;
      fVar39 = *(float *)(local_1ed0 + uVar31 * 4);
      iVar36 = *(int *)(local_1ec0 + uVar31 * 4);
    }
    uVar31 = uVar31 + 1;
  } while (uVar31 != 3);
  *(int *)(param_1 + 4) = (int)uVar21;
  *(int *)(param_1 + 8) = iVar36;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(ulong *)(param_1 + 0x10) = uVar29;
  *(float *)param_1 = fVar39;
  *(float *)(param_1 + 0x20) = fVar45;
  *(float *)(param_1 + 0x24) = fVar43;
  *(float *)(param_1 + 0x28) = fVar70;
  *(float *)(param_1 + 0x2c) = fVar71;
  *(float *)(param_1 + 0x30) = fVar61;
  *(float *)(param_1 + 0x34) = fVar63;
  *(float *)(param_1 + 0x38) = fVar65;
  *(uint *)(param_1 + 0x3c) = uVar67;
LAB_00100faf:
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
                    /* WARNING: Could not recover jumptable at 0x001017e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
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
      goto LAB_00101af0;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_6 != 0) goto LAB_00101af0;
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
      goto LAB_00101af0;
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
LAB_00101af0:
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
          goto LAB_00101d3a;
        }
      }
      else {
        LOCK();
        uVar6 = *puVar3;
        *puVar3 = *puVar3 + uVar4;
        UNLOCK();
        if ((uVar4 + uVar6 <= puVar3[2]) || (param_3)) {
LAB_00101d3a:
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
LAB_00101f4a:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_00101f4a;
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
LAB_00101e14:
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
          goto LAB_00101e14;
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
    if (0xfffffffffffffffe < uVar1) goto LAB_00102050;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00102050:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00101fd9;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00101fd9:
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
    if (0xfffffffffffffffe < uVar3) goto LAB_001021e0;
    uVar8 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar8 = uVar3 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_001021ea:
    puVar7 = (undefined8 *)operator_new(uVar8);
    lVar10 = uVar8 + (long)puVar7;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar1)) = *param_3;
    puVar4 = puVar7 + 1;
    *param_3 = 0;
    if (param_2 != puVar1) {
LAB_00102151:
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
    if (param_2 == puVar5) goto LAB_001021a4;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar3) {
LAB_001021e0:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_001021ea;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_001021ea;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)((long)param_2 - (long)puVar1) = *param_3;
    puVar4 = (undefined8 *)&DAT_00000008;
    *param_3 = 0;
    if (param_2 != puVar1) goto LAB_00102151;
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
LAB_001021a4:
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,*(long *)(this + 0x10) - (long)puVar1);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar4;
  *(long *)(this + 0x10) = lVar10;
  return;
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
   embree::BuildProgressMonitor>::createLargeLeaf(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > const&, embree::FastAllocator::CachedAllocator) */

undefined8 *
embree::sse2::GeneralBVHBuilder::
BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
::createLargeLeaf(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  FastAllocator *this;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  byte bVar25;
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
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  FastAllocator *in_stack_00000008;
  ulong *in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong local_6d8;
  ulong local_6d0 [17];
  ulong local_648;
  undefined1 local_640 [8];
  ulong local_638 [4];
  ulong local_618;
  ulong uStack_610;
  ulong local_608;
  ulong uStack_600;
  ulong local_5f8;
  ulong uStack_5f0;
  long local_40;
  
  puVar18 = in_stack_00000010;
  this = in_stack_00000008;
  bVar25 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar19 = *param_2;
  if (param_1[1] < uVar19) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = param_2[0xb];
  uVar7 = param_2[10];
  uVar2 = param_1[4];
  if (uVar2 < uVar8 - uVar7) {
    uVar17 = 1;
    local_638[0] = param_2[2];
    local_638[1] = param_2[3];
    local_638[2] = param_2[4];
    local_638[3] = param_2[5];
    local_618 = param_2[6];
    uStack_610 = param_2[7];
    local_648 = uVar19;
    local_640[0] = (char)param_2[1];
    local_608 = param_2[8];
    uStack_600 = param_2[9];
    local_5f8 = param_2[10];
    uStack_5f0 = param_2[0xb];
    puVar14 = &local_648;
    do {
      uVar22 = 0;
      uVar21 = 0;
      uVar13 = 0xffffffffffffffff;
      puVar23 = local_638 + 8;
      do {
        uVar24 = uVar21;
        if (uVar21 <= uVar2) {
          uVar24 = uVar2;
        }
        if (uVar24 < puVar23[1] - *puVar23) {
          uVar13 = uVar22;
          uVar21 = puVar23[1] - *puVar23;
        }
        uVar22 = uVar22 + 1;
        puVar23 = puVar23 + 0xc;
      } while (uVar17 != uVar22);
      if (uVar13 == 0xffffffffffffffff) break;
      lVar9 = *(long *)param_1[9];
      uVar21 = local_638[uVar13 * 0xc + 8];
      uVar22 = local_638[uVar13 * 0xc + 9];
      uVar24 = uVar21 + uVar22 >> 1;
      if (uVar21 < uVar24) {
        auVar32._4_4_ = _LC2;
        auVar32._0_4_ = _LC2;
        auVar32._8_4_ = _LC2;
        auVar32._12_4_ = _LC2;
        auVar33._4_4_ = _LC4;
        auVar33._0_4_ = _LC4;
        auVar33._8_4_ = _LC4;
        auVar33._12_4_ = _LC4;
        auVar34._4_4_ = _LC2;
        auVar34._0_4_ = _LC2;
        auVar34._8_4_ = _LC2;
        auVar34._12_4_ = _LC2;
        auVar35._4_4_ = _LC4;
        auVar35._0_4_ = _LC4;
        auVar35._8_4_ = _LC4;
        auVar35._12_4_ = _LC4;
        pauVar6 = (undefined1 (*) [16])(uVar21 * 0x20 + lVar9);
        do {
          auVar26._0_4_ = *(float *)pauVar6[1] + *(float *)*pauVar6;
          auVar26._4_4_ = *(float *)(pauVar6[1] + 4) + *(float *)(*pauVar6 + 4);
          auVar26._8_4_ = *(float *)(pauVar6[1] + 8) + *(float *)(*pauVar6 + 8);
          auVar26._12_4_ = *(float *)(pauVar6[1] + 0xc) + *(float *)(*pauVar6 + 0xc);
          pauVar5 = pauVar6 + 2;
          auVar35 = minps(auVar35,*pauVar6);
          auVar34 = maxps(auVar34,pauVar6[1]);
          auVar33 = minps(auVar33,auVar26);
          auVar32 = maxps(auVar32,auVar26);
          pauVar6 = pauVar5;
        } while ((undefined1 (*) [16])(uVar24 * 0x20 + lVar9) != pauVar5);
      }
      else {
        auVar32._4_4_ = _LC2;
        auVar32._0_4_ = _LC2;
        auVar32._8_4_ = _LC2;
        auVar32._12_4_ = _LC2;
        auVar33._4_4_ = _LC4;
        auVar33._0_4_ = _LC4;
        auVar33._8_4_ = _LC4;
        auVar33._12_4_ = _LC4;
        auVar34._4_4_ = _LC2;
        auVar34._0_4_ = _LC2;
        auVar34._8_4_ = _LC2;
        auVar34._12_4_ = _LC2;
        auVar35._4_4_ = _LC4;
        auVar35._0_4_ = _LC4;
        auVar35._8_4_ = _LC4;
        auVar35._12_4_ = _LC4;
      }
      if (uVar24 < uVar22) {
        auVar28._4_4_ = _LC2;
        auVar28._0_4_ = _LC2;
        auVar28._8_4_ = _LC2;
        auVar28._12_4_ = _LC2;
        auVar29._4_4_ = _LC4;
        auVar29._0_4_ = _LC4;
        auVar29._8_4_ = _LC4;
        auVar29._12_4_ = _LC4;
        auVar30._4_4_ = _LC2;
        auVar30._0_4_ = _LC2;
        auVar30._8_4_ = _LC2;
        auVar30._12_4_ = _LC2;
        auVar31._4_4_ = _LC4;
        auVar31._0_4_ = _LC4;
        auVar31._8_4_ = _LC4;
        auVar31._12_4_ = _LC4;
        pauVar6 = (undefined1 (*) [16])(uVar24 * 0x20 + lVar9);
        do {
          auVar27._0_4_ = *(float *)pauVar6[1] + *(float *)*pauVar6;
          auVar27._4_4_ = *(float *)(pauVar6[1] + 4) + *(float *)(*pauVar6 + 4);
          auVar27._8_4_ = *(float *)(pauVar6[1] + 8) + *(float *)(*pauVar6 + 8);
          auVar27._12_4_ = *(float *)(pauVar6[1] + 0xc) + *(float *)(*pauVar6 + 0xc);
          pauVar5 = pauVar6 + 2;
          auVar31 = minps(auVar31,*pauVar6);
          auVar30 = maxps(auVar30,pauVar6[1]);
          auVar29 = minps(auVar29,auVar27);
          auVar28 = maxps(auVar28,auVar27);
          pauVar6 = pauVar5;
        } while ((undefined1 (*) [16])(lVar9 + uVar22 * 0x20) != pauVar5);
      }
      else {
        auVar28._4_4_ = _LC2;
        auVar28._0_4_ = _LC2;
        auVar28._8_4_ = _LC2;
        auVar28._12_4_ = _LC2;
        auVar29._4_4_ = _LC4;
        auVar29._0_4_ = _LC4;
        auVar29._8_4_ = _LC4;
        auVar29._12_4_ = _LC4;
        auVar30._4_4_ = _LC2;
        auVar30._0_4_ = _LC2;
        auVar30._8_4_ = _LC2;
        auVar30._12_4_ = _LC2;
        auVar31._4_4_ = _LC4;
        auVar31._0_4_ = _LC4;
        auVar31._8_4_ = _LC4;
        auVar31._12_4_ = _LC4;
      }
      uVar17 = uVar17 + 1;
      *(ulong *)(local_640 + uVar13 * 0x60 + -8) = *puVar14;
      local_640[uVar13 * 0x60] = (char)puVar14[1];
      uVar3 = puVar14[3];
      local_638[uVar13 * 0xc] = puVar14[2];
      local_638[uVar13 * 0xc + 1] = uVar3;
      uVar3 = puVar14[5];
      local_638[uVar13 * 0xc + 2] = puVar14[4];
      local_638[uVar13 * 0xc + 3] = uVar3;
      uVar3 = puVar14[7];
      local_638[uVar13 * 0xc + 4] = puVar14[6];
      local_638[uVar13 * 0xc + 5] = uVar3;
      uVar3 = puVar14[9];
      local_638[uVar13 * 0xc + 6] = puVar14[8];
      local_638[uVar13 * 0xc + 7] = uVar3;
      uVar3 = puVar14[0xb];
      local_638[uVar13 * 0xc + 8] = puVar14[10];
      local_638[uVar13 * 0xc + 9] = uVar3;
      *puVar14 = uVar19 + 1;
      *(undefined1 *)(puVar14 + 1) = 0;
      *(undefined1 (*) [16])(puVar14 + 2) = auVar35;
      *(undefined1 (*) [16])(puVar14 + 4) = auVar34;
      *(undefined1 (*) [16])(puVar14 + 6) = auVar33;
      *(undefined1 (*) [16])(puVar14 + 8) = auVar32;
      puVar14[10] = uVar21;
      puVar14[0xb] = uVar24;
      puVar14[0xc] = uVar19 + 1;
      *(undefined1 *)(puVar14 + 0xd) = 0;
      *(undefined1 (*) [16])(puVar14 + 0xe) = auVar31;
      *(undefined1 (*) [16])(puVar14 + 0x10) = auVar30;
      *(undefined1 (*) [16])(puVar14 + 0x12) = auVar29;
      *(undefined1 (*) [16])(puVar14 + 0x14) = auVar28;
      puVar14[0x16] = uVar24;
      puVar14[0x17] = uVar22;
      puVar14 = puVar14 + 0xc;
    } while (uVar17 < *param_1);
    uVar19 = param_1[7];
    if (uVar19 < uVar8 - uVar7) {
      puVar10 = local_640;
      do {
        *puVar10 = (ulong)(*(long *)(puVar10 + 0x50) - *(long *)(puVar10 + 0x48)) <= uVar19;
        puVar10 = puVar10 + 0x60;
      } while (local_640 + uVar17 * 0x60 != puVar10);
    }
    local_6d8 = 0x80;
    uVar19 = *in_stack_00000010;
    uVar37 = _LC2;
    uVar38 = _LC2;
    uVar39 = _LC2;
    uVar41 = _LC4;
    uVar42 = _LC4;
    uVar43 = _LC4;
    if (in_stack_00000008 != *(FastAllocator **)(uVar19 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(uVar19 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(uVar19 + 8) + 0x118);
        *plVar1 = *plVar1 + *(long *)(uVar19 + 0xa8) + *(long *)(uVar19 + 0x68);
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar19 + 8) + 0x120);
        *plVar1 = *plVar1 + (((*(long *)(uVar19 + 0x98) + *(long *)(uVar19 + 0x58)) -
                             *(long *)(uVar19 + 0x50)) - *(long *)(uVar19 + 0x90));
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar19 + 8) + 0x128);
        *plVar1 = *plVar1 + *(long *)(uVar19 + 0xb0) + *(long *)(uVar19 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(uVar19 + 0x48) = 0;
      *(undefined8 *)(uVar19 + 0x58) = 0;
      *(undefined8 *)(uVar19 + 0x50) = 0;
      *(undefined8 *)(uVar19 + 0x68) = 0;
      *(undefined8 *)(uVar19 + 0x70) = 0;
      *(undefined8 *)(uVar19 + 0x60) = 0;
      if (this == (FastAllocator *)0x0) {
        *(undefined8 *)(uVar19 + 0x88) = 0;
        uVar11 = 0;
        *(undefined8 *)(uVar19 + 0x98) = 0;
        *(undefined8 *)(uVar19 + 0x90) = 0;
        *(undefined8 *)(uVar19 + 0xa8) = 0;
        *(undefined8 *)(uVar19 + 0xb0) = 0;
      }
      else {
        uVar11 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(uVar19 + 0x88) = 0;
        *(undefined8 *)(uVar19 + 0x98) = 0;
        *(undefined8 *)(uVar19 + 0x60) = uVar11;
        *(undefined8 *)(uVar19 + 0x90) = 0;
        *(undefined8 *)(uVar19 + 0xa8) = 0;
        *(undefined8 *)(uVar19 + 0xb0) = 0;
        *(undefined8 *)(uVar19 + 0xa0) = 0;
        uVar11 = *(undefined8 *)(this + 0x10);
      }
      *(undefined8 *)(uVar19 + 0xa0) = uVar11;
      LOCK();
      *(FastAllocator **)(uVar19 + 8) = this;
      UNLOCK();
      local_6d0[0] = uVar19;
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
        *puVar14 = uVar19;
        *(long *)(this + 0x138) = *(long *)(this + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
      uVar37 = _UNK_00111c84;
      uVar38 = _UNK_00111c88;
      uVar39 = _UNK_00111c8c;
      uVar41 = _UNK_00111c94;
      uVar42 = _UNK_00111c98;
      uVar43 = _UNK_00111c9c;
    }
    uVar40 = _LC4;
    uVar36 = _LC2;
    uVar8 = puVar18[2];
    puVar18[5] = puVar18[5] + 0x80;
    uVar7 = (ulong)(-(int)uVar8 & 0xf);
    uVar19 = uVar8 + 0x80 + uVar7;
    puVar18[2] = uVar19;
    if (puVar18[3] < uVar19) {
      puVar18[2] = uVar8;
      if (puVar18[4] < 0x200) {
        puVar4 = (undefined8 *)FastAllocator::malloc(this,&local_6d8,0x40,false);
        uVar36 = _LC2;
        uVar37 = _UNK_00111c84;
        uVar38 = _UNK_00111c88;
        uVar39 = _UNK_00111c8c;
        uVar40 = _LC4;
        uVar41 = _UNK_00111c94;
        uVar42 = _UNK_00111c98;
        uVar43 = _UNK_00111c9c;
      }
      else {
        local_6d0[0] = puVar18[4];
        puVar4 = (undefined8 *)FastAllocator::malloc(this,local_6d0,0x40,true);
        uVar39 = _UNK_00111c8c;
        uVar38 = _UNK_00111c88;
        uVar37 = _UNK_00111c84;
        uVar36 = _LC2;
        puVar18[1] = (ulong)puVar4;
        uVar19 = puVar18[2];
        puVar18[2] = 0x80;
        puVar18[6] = (puVar18[3] + puVar18[6]) - uVar19;
        uVar43 = _UNK_00111c9c;
        uVar42 = _UNK_00111c98;
        uVar41 = _UNK_00111c94;
        uVar40 = _LC4;
        puVar18[3] = local_6d0[0];
        if (local_6d0[0] < 0x80) {
          local_6d0[0] = puVar18[4];
          puVar18[2] = 0;
          puVar4 = (undefined8 *)FastAllocator::malloc(this,local_6d0,0x40,false);
          uVar43 = _UNK_00111c9c;
          uVar42 = _UNK_00111c98;
          uVar41 = _UNK_00111c94;
          uVar40 = _LC4;
          uVar39 = _UNK_00111c8c;
          uVar38 = _UNK_00111c88;
          uVar37 = _UNK_00111c84;
          uVar36 = _LC2;
          puVar18[1] = (ulong)puVar4;
          uVar19 = puVar18[2];
          puVar18[2] = 0x80;
          puVar18[6] = (puVar18[3] + puVar18[6]) - uVar19;
          puVar18[3] = local_6d0[0];
          if (local_6d0[0] < 0x80) {
            puVar4 = (undefined8 *)0x0;
            puVar18[2] = 0;
          }
        }
      }
    }
    else {
      puVar18[6] = puVar18[6] + uVar7;
      puVar4 = (undefined8 *)((puVar18[1] - 0x80) + uVar19);
    }
    *puVar4 = 8;
    puVar4[1] = 8;
    puVar4[2] = 8;
    puVar4[3] = 8;
    *(undefined4 *)(puVar4 + 0xc) = uVar40;
    *(undefined4 *)((long)puVar4 + 100) = uVar41;
    *(undefined4 *)(puVar4 + 0xd) = uVar42;
    *(undefined4 *)((long)puVar4 + 0x6c) = uVar43;
    *(undefined4 *)(puVar4 + 8) = uVar40;
    *(undefined4 *)((long)puVar4 + 0x44) = uVar41;
    *(undefined4 *)(puVar4 + 9) = uVar42;
    *(undefined4 *)((long)puVar4 + 0x4c) = uVar43;
    *(undefined4 *)(puVar4 + 4) = uVar40;
    *(undefined4 *)((long)puVar4 + 0x24) = uVar41;
    *(undefined4 *)(puVar4 + 5) = uVar42;
    *(undefined4 *)((long)puVar4 + 0x2c) = uVar43;
    *(undefined4 *)(puVar4 + 0xe) = uVar36;
    *(undefined4 *)((long)puVar4 + 0x74) = uVar37;
    *(undefined4 *)(puVar4 + 0xf) = uVar38;
    *(undefined4 *)((long)puVar4 + 0x7c) = uVar39;
    *(undefined4 *)(puVar4 + 10) = uVar36;
    *(undefined4 *)((long)puVar4 + 0x54) = uVar37;
    *(undefined4 *)(puVar4 + 0xb) = uVar38;
    *(undefined4 *)((long)puVar4 + 0x5c) = uVar39;
    *(undefined4 *)(puVar4 + 6) = uVar36;
    *(undefined4 *)((long)puVar4 + 0x34) = uVar37;
    *(undefined4 *)(puVar4 + 7) = uVar38;
    *(undefined4 *)((long)puVar4 + 0x3c) = uVar39;
    puVar12 = puVar4 + 4;
    puVar18 = &local_648;
    do {
      uVar19 = puVar18[3];
      puVar15 = (undefined8 *)((long)puVar12 + 4);
      uVar8 = puVar18[2];
      uVar7 = puVar18[5];
      uVar37 = *(undefined4 *)((long)puVar18 + 0x24);
      uVar2 = puVar18[4];
      *(undefined4 *)(puVar12 + 4) = *(undefined4 *)((long)puVar18 + 0x14);
      *(int *)puVar12 = (int)uVar8;
      *(int *)(puVar12 + 8) = (int)uVar19;
      *(int *)(puVar12 + 2) = (int)uVar2;
      *(undefined4 *)(puVar12 + 6) = uVar37;
      *(int *)(puVar12 + 10) = (int)uVar7;
      puVar12 = puVar15;
      puVar18 = puVar18 + 0xc;
    } while ((undefined8 *)((long)puVar4 + uVar17 * 4 + 0x20) != puVar15);
    uVar19 = 0;
    puVar18 = &local_648;
    do {
      uVar8 = createLargeLeaf(param_1,puVar18);
      local_6d0[uVar19 + 1] = uVar8;
      uVar19 = uVar19 + 1;
      puVar18 = puVar18 + 0xc;
    } while (uVar17 != uVar19);
    plVar1 = (long *)param_1[0xc];
    *puVar4 = local_6d0[1];
    uVar19 = uVar17 << 3 & 0xffffffff;
    *(undefined8 *)((long)puVar4 + (uVar19 - 8)) = *(undefined8 *)((long)local_6d0 + uVar19);
    lVar9 = (long)puVar4 - (long)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((long)local_6d0 + (8 - lVar9));
    puVar15 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
    for (uVar19 = (ulong)((uint)((int)(uVar17 << 3) + (int)lVar9) >> 3); uVar19 != 0;
        uVar19 = uVar19 - 1) {
      *puVar15 = *puVar12;
      puVar12 = puVar12 + (ulong)bVar25 * -2 + 1;
      puVar15 = puVar15 + (ulong)bVar25 * -2 + 1;
    }
    if ((char)param_2[1] != '\0') {
      uVar19 = param_2[10];
      uVar8 = param_2[0xb];
      lVar9 = *plVar1;
      lVar20 = uVar19 * 0x20 + plVar1[1];
      embree::MutexSys::lock();
      puVar12 = (undefined8 *)(lVar20 + 0x3fU & 0xffffffffffffffc0);
      lVar16 = ((uVar8 - uVar19) * 0x20 + lVar20) - (long)puVar12;
      if (0xfff < lVar16) {
        lVar16 = lVar16 + -0x40;
        uVar11 = *(undefined8 *)(lVar9 + 0x100);
        puVar12[1] = lVar16;
        puVar12[2] = lVar16;
        *puVar12 = 0;
        puVar12[3] = uVar11;
        puVar12[4] = (long)puVar12 - lVar20;
        *(undefined4 *)(puVar12 + 5) = 2;
        *(undefined1 *)((long)puVar12 + 0x2c) = 0;
        LOCK();
        *(undefined8 **)(lVar9 + 0x100) = puVar12;
        UNLOCK();
      }
      embree::MutexSys::unlock();
    }
  }
  else {
    puVar4 = (undefined8 *)
             (**(code **)**(undefined8 **)param_1[0xd])
                       (*(undefined8 **)param_1[0xd],param_1[8],param_2 + 10,&stack0x00000008);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
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
   embree::BuildProgressMonitor>::createLargeLeaf(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > const&, embree::FastAllocator::CachedAllocator) */

ulong embree::sse2::GeneralBVHBuilder::
      BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
      ::createLargeLeaf(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  FastAllocator *this;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar60;
  float fVar62;
  undefined1 auVar49 [16];
  float fVar64;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar61;
  float fVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
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
  float fVar92;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [16];
  float fVar97;
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  float fVar99;
  FastAllocator *in_stack_00000008;
  ulong *in_stack_00000010;
  ulong local_730;
  ulong local_728;
  undefined1 local_720 [16];
  undefined1 local_710 [16];
  undefined8 local_700 [4];
  undefined1 local_6e0 [16];
  float local_6d0 [4];
  undefined1 local_6c0 [16];
  float local_6b0 [4];
  undefined1 local_6a0 [16];
  float local_690 [16];
  ulong local_650;
  undefined1 local_648 [8];
  ulong local_640 [4];
  ulong local_620;
  ulong uStack_618;
  ulong local_610;
  ulong uStack_608;
  ulong local_600;
  ulong uStack_5f8;
  long local_48;
  
  puVar30 = in_stack_00000010;
  this = in_stack_00000008;
  uVar12 = *param_2;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] < uVar12) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar31 = param_1[4];
  uVar16 = param_2[0xb];
  uVar3 = param_2[10];
  if (uVar31 < uVar16 - uVar3) {
    local_650 = uVar12;
    uVar24 = 1;
    local_640[0] = param_2[2];
    local_640[1] = param_2[3];
    local_640[2] = param_2[4];
    local_640[3] = param_2[5];
    local_620 = param_2[6];
    uStack_618 = param_2[7];
    local_610 = param_2[8];
    uStack_608 = param_2[9];
    local_600 = param_2[10];
    uStack_5f8 = param_2[0xb];
    local_648[0] = (char)param_2[1];
    auVar39._0_8_ = CONCAT44(_LC4,_LC4);
    auVar39._8_4_ = _LC4;
    auVar39._12_4_ = _LC4;
    puVar23 = &local_650;
    do {
      uVar27 = 0;
      uVar25 = 0;
      uVar20 = 0xffffffffffffffff;
      puVar28 = local_640 + 8;
      do {
        uVar29 = uVar25;
        if (uVar25 <= uVar31) {
          uVar29 = uVar31;
        }
        if (uVar29 < puVar28[1] - *puVar28) {
          uVar20 = uVar27;
          uVar25 = puVar28[1] - *puVar28;
        }
        uVar27 = uVar27 + 1;
        puVar28 = puVar28 + 0xc;
      } while (uVar24 != uVar27);
      if (uVar20 == 0xffffffffffffffff) break;
      lVar21 = *(long *)param_1[9];
      uVar25 = local_640[uVar20 * 0xc + 8];
      uVar27 = local_640[uVar20 * 0xc + 9];
      uVar29 = uVar25 + uVar27 >> 1;
      if (uVar25 < uVar29) {
        auVar80._4_4_ = _LC2;
        auVar80._0_4_ = _LC2;
        auVar80._8_4_ = _LC2;
        auVar80._12_4_ = _LC2;
        auVar81._8_4_ = _LC4;
        auVar81._0_8_ = auVar39._0_8_;
        auVar81._12_4_ = _LC4;
        auVar93._4_4_ = _LC2;
        auVar93._0_4_ = _LC2;
        auVar93._8_4_ = _LC2;
        auVar93._12_4_ = _LC2;
        auVar98._8_4_ = _LC4;
        auVar98._0_8_ = auVar39._0_8_;
        auVar98._12_4_ = _LC4;
        pauVar14 = (undefined1 (*) [16])(uVar25 * 0x20 + lVar21);
        do {
          auVar35._0_4_ = *(float *)pauVar14[1] + *(float *)*pauVar14;
          auVar35._4_4_ = *(float *)(pauVar14[1] + 4) + *(float *)(*pauVar14 + 4);
          auVar35._8_4_ = *(float *)(pauVar14[1] + 8) + *(float *)(*pauVar14 + 8);
          auVar35._12_4_ = *(float *)(pauVar14[1] + 0xc) + *(float *)(*pauVar14 + 0xc);
          pauVar13 = pauVar14 + 2;
          auVar98 = minps(auVar98,*pauVar14);
          auVar93 = maxps(auVar93,pauVar14[1]);
          auVar81 = minps(auVar81,auVar35);
          auVar80 = maxps(auVar80,auVar35);
          pauVar14 = pauVar13;
        } while ((undefined1 (*) [16])(uVar29 * 0x20 + lVar21) != pauVar13);
      }
      else {
        auVar80._4_4_ = _LC2;
        auVar80._0_4_ = _LC2;
        auVar80._8_4_ = _LC2;
        auVar80._12_4_ = _LC2;
        auVar81._8_4_ = _LC4;
        auVar81._0_8_ = auVar39._0_8_;
        auVar81._12_4_ = _LC4;
        auVar93._4_4_ = _LC2;
        auVar93._0_4_ = _LC2;
        auVar93._8_4_ = _LC2;
        auVar93._12_4_ = _LC2;
        auVar98._8_4_ = _LC4;
        auVar98._0_8_ = auVar39._0_8_;
        auVar98._12_4_ = _LC4;
      }
      if (uVar29 < uVar27) {
        auVar42._4_4_ = _LC2;
        auVar42._0_4_ = _LC2;
        auVar42._8_4_ = _LC2;
        auVar42._12_4_ = _LC2;
        auVar49._8_4_ = _LC4;
        auVar49._0_8_ = auVar39._0_8_;
        auVar49._12_4_ = _LC4;
        auVar65._4_4_ = _LC2;
        auVar65._0_4_ = _LC2;
        auVar65._8_4_ = _LC2;
        auVar65._12_4_ = _LC2;
        auVar71._8_4_ = _LC4;
        auVar71._0_8_ = auVar39._0_8_;
        auVar71._12_4_ = _LC4;
        pauVar14 = (undefined1 (*) [16])(uVar29 * 0x20 + lVar21);
        do {
          auVar36._0_4_ = *(float *)pauVar14[1] + *(float *)*pauVar14;
          auVar36._4_4_ = *(float *)(pauVar14[1] + 4) + *(float *)(*pauVar14 + 4);
          auVar36._8_4_ = *(float *)(pauVar14[1] + 8) + *(float *)(*pauVar14 + 8);
          auVar36._12_4_ = *(float *)(pauVar14[1] + 0xc) + *(float *)(*pauVar14 + 0xc);
          pauVar13 = pauVar14 + 2;
          auVar71 = minps(auVar71,*pauVar14);
          auVar65 = maxps(auVar65,pauVar14[1]);
          auVar49 = minps(auVar49,auVar36);
          auVar42 = maxps(auVar42,auVar36);
          pauVar14 = pauVar13;
        } while ((undefined1 (*) [16])(lVar21 + uVar27 * 0x20) != pauVar13);
      }
      else {
        auVar42._4_4_ = _LC2;
        auVar42._0_4_ = _LC2;
        auVar42._8_4_ = _LC2;
        auVar42._12_4_ = _LC2;
        auVar49._8_4_ = _LC4;
        auVar49._0_8_ = auVar39._0_8_;
        auVar49._12_4_ = _LC4;
        auVar65._4_4_ = _LC2;
        auVar65._0_4_ = _LC2;
        auVar65._8_4_ = _LC2;
        auVar65._12_4_ = _LC2;
        auVar71._8_4_ = _LC4;
        auVar71._0_8_ = auVar39._0_8_;
        auVar71._12_4_ = _LC4;
      }
      uVar24 = uVar24 + 1;
      *(ulong *)(local_648 + uVar20 * 0x60 + -8) = *puVar23;
      local_648[uVar20 * 0x60] = (char)puVar23[1];
      uVar4 = puVar23[3];
      local_640[uVar20 * 0xc] = puVar23[2];
      local_640[uVar20 * 0xc + 1] = uVar4;
      uVar4 = puVar23[5];
      local_640[uVar20 * 0xc + 2] = puVar23[4];
      local_640[uVar20 * 0xc + 3] = uVar4;
      uVar4 = puVar23[7];
      local_640[uVar20 * 0xc + 4] = puVar23[6];
      local_640[uVar20 * 0xc + 5] = uVar4;
      uVar4 = puVar23[9];
      local_640[uVar20 * 0xc + 6] = puVar23[8];
      local_640[uVar20 * 0xc + 7] = uVar4;
      uVar4 = puVar23[0xb];
      local_640[uVar20 * 0xc + 8] = puVar23[10];
      local_640[uVar20 * 0xc + 9] = uVar4;
      *puVar23 = uVar12 + 1;
      *(undefined1 *)(puVar23 + 1) = 0;
      *(undefined1 (*) [16])(puVar23 + 2) = auVar98;
      *(undefined1 (*) [16])(puVar23 + 4) = auVar93;
      *(undefined1 (*) [16])(puVar23 + 6) = auVar81;
      *(undefined1 (*) [16])(puVar23 + 8) = auVar80;
      puVar23[10] = uVar25;
      puVar23[0xb] = uVar29;
      puVar23[0xc] = uVar12 + 1;
      *(undefined1 *)(puVar23 + 0xd) = 0;
      *(undefined1 (*) [16])(puVar23 + 0xe) = auVar71;
      *(undefined1 (*) [16])(puVar23 + 0x10) = auVar65;
      *(undefined1 (*) [16])(puVar23 + 0x12) = auVar49;
      *(undefined1 (*) [16])(puVar23 + 0x14) = auVar42;
      puVar23[0x16] = uVar29;
      puVar23[0x17] = uVar27;
      puVar23 = puVar23 + 0xc;
    } while (uVar24 < *param_1);
    uVar12 = param_1[7];
    if (uVar12 < uVar16 - uVar3) {
      puVar19 = local_648;
      do {
        *puVar19 = (ulong)(*(long *)(puVar19 + 0x50) - *(long *)(puVar19 + 0x48)) <= uVar12;
        puVar19 = puVar19 + 0x60;
      } while (local_648 + uVar24 * 0x60 != puVar19);
    }
    local_6a0 = auVar39;
    local_6c0 = auVar39;
    local_6e0 = auVar39;
    local_690[0] = _LC2;
    local_690[1] = _LC2;
    local_690[2] = _LC2;
    local_690[3] = _LC2;
    local_6b0[0] = _LC2;
    local_6b0[1] = _LC2;
    local_6b0[2] = _LC2;
    local_6b0[3] = _LC2;
    local_6d0[0] = _LC2;
    local_6d0[1] = _LC2;
    local_6d0[2] = _LC2;
    local_6d0[3] = _LC2;
    puVar18 = local_700;
    puVar23 = &local_650;
    do {
      uVar12 = puVar23[3];
      puVar15 = (undefined8 *)((long)puVar18 + 4);
      uVar31 = puVar23[2];
      uVar16 = puVar23[5];
      uVar2 = *(undefined4 *)((long)puVar23 + 0x24);
      uVar3 = puVar23[4];
      *(undefined4 *)(puVar18 + 8) = *(undefined4 *)((long)puVar23 + 0x14);
      *(int *)(puVar18 + 4) = (int)uVar31;
      *(int *)(puVar18 + 0xc) = (int)uVar12;
      *(int *)(puVar18 + 6) = (int)uVar3;
      *(undefined4 *)(puVar18 + 10) = uVar2;
      *(int *)(puVar18 + 0xe) = (int)uVar16;
      puVar18 = puVar15;
      puVar23 = puVar23 + 0xc;
    } while ((undefined8 *)((long)local_700 + uVar24 * 4) != puVar15);
    local_730 = 0x50;
    uVar12 = *in_stack_00000010;
    if (in_stack_00000008 != *(FastAllocator **)(uVar12 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(uVar12 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(uVar12 + 8) + 0x118);
        *plVar1 = *plVar1 + *(long *)(uVar12 + 0xa8) + *(long *)(uVar12 + 0x68);
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar12 + 8) + 0x120);
        *plVar1 = *plVar1 + (((*(long *)(uVar12 + 0x98) + *(long *)(uVar12 + 0x58)) -
                             *(long *)(uVar12 + 0x50)) - *(long *)(uVar12 + 0x90));
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar12 + 8) + 0x128);
        *plVar1 = *plVar1 + *(long *)(uVar12 + 0xb0) + *(long *)(uVar12 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(uVar12 + 0x48) = 0;
      *(undefined8 *)(uVar12 + 0x58) = 0;
      *(undefined8 *)(uVar12 + 0x50) = 0;
      *(undefined8 *)(uVar12 + 0x68) = 0;
      *(undefined8 *)(uVar12 + 0x70) = 0;
      *(undefined8 *)(uVar12 + 0x60) = 0;
      if (this == (FastAllocator *)0x0) {
        *(undefined8 *)(uVar12 + 0x88) = 0;
        uVar17 = 0;
        *(undefined8 *)(uVar12 + 0x98) = 0;
        *(undefined8 *)(uVar12 + 0x90) = 0;
        *(undefined8 *)(uVar12 + 0xa8) = 0;
        *(undefined8 *)(uVar12 + 0xb0) = 0;
      }
      else {
        uVar17 = *(undefined8 *)(this + 0x10);
        *(undefined8 *)(uVar12 + 0x88) = 0;
        *(undefined8 *)(uVar12 + 0x98) = 0;
        *(undefined8 *)(uVar12 + 0x60) = uVar17;
        *(undefined8 *)(uVar12 + 0x90) = 0;
        *(undefined8 *)(uVar12 + 0xa8) = 0;
        *(undefined8 *)(uVar12 + 0xb0) = 0;
        *(undefined8 *)(uVar12 + 0xa0) = 0;
        uVar17 = *(undefined8 *)(this + 0x10);
      }
      *(undefined8 *)(uVar12 + 0xa0) = uVar17;
      LOCK();
      *(FastAllocator **)(uVar12 + 8) = this;
      UNLOCK();
      local_728 = uVar12;
      embree::MutexSys::lock();
      puVar23 = *(ulong **)(this + 0x138);
      if (puVar23 == *(ulong **)(this + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(this + 0x130),puVar23,&local_728);
      }
      else {
        *puVar23 = uVar12;
        *(long *)(this + 0x138) = *(long *)(this + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
      auVar39._4_12_ = _UNK_00111c94;
      auVar39._0_4_ = _LC4;
    }
    uVar31 = puVar30[2];
    puVar30[5] = puVar30[5] + 0x50;
    uVar16 = (ulong)(-(int)uVar31 & 0xf);
    uVar12 = uVar31 + 0x50 + uVar16;
    puVar30[2] = uVar12;
    if (puVar30[3] < uVar12) {
      puVar30[2] = uVar31;
      if (puVar30[4] < 0x140) {
        puVar18 = (undefined8 *)FastAllocator::malloc(this,&local_730,0x40,false);
        auVar39._4_12_ = _UNK_00111c94;
        auVar39._0_4_ = _LC4;
      }
      else {
        local_728 = puVar30[4];
        puVar18 = (undefined8 *)FastAllocator::malloc(this,&local_728,0x40,true);
        auVar39._4_12_ = _UNK_00111c94;
        auVar39._0_4_ = _LC4;
        puVar30[1] = (ulong)puVar18;
        uVar12 = puVar30[2];
        puVar30[2] = 0x50;
        puVar30[6] = (puVar30[3] + puVar30[6]) - uVar12;
        puVar30[3] = local_728;
        if (local_728 < 0x50) {
          puVar30[2] = 0;
          local_728 = puVar30[4];
          puVar18 = (undefined8 *)FastAllocator::malloc(this,&local_728,0x40,false);
          auVar39._4_12_ = _UNK_00111c94;
          auVar39._0_4_ = _LC4;
          puVar30[1] = (ulong)puVar18;
          uVar12 = puVar30[2];
          puVar30[2] = 0x50;
          puVar30[6] = (puVar30[3] + puVar30[6]) - uVar12;
          puVar30[3] = local_728;
          if (local_728 < 0x50) {
            puVar30[2] = 0;
            puVar18 = (undefined8 *)0x0;
          }
        }
      }
    }
    else {
      puVar30[6] = puVar30[6] + uVar16;
      puVar18 = (undefined8 *)((puVar30[1] - 0x50) + uVar12);
    }
    fVar92 = local_6e0._0_4_;
    fVar95 = local_6e0._4_4_;
    fVar96 = local_6e0._8_4_;
    fVar97 = local_6e0._12_4_;
    auVar8._4_4_ = local_6d0[1];
    auVar8._0_4_ = local_6d0[0];
    auVar8._8_4_ = local_6d0[2];
    auVar8._12_4_ = local_6d0[3];
    *puVar18 = 8;
    puVar18[1] = 8;
    auVar37._4_4_ = fVar92;
    auVar37._0_4_ = fVar95;
    auVar37._8_4_ = fVar97;
    auVar37._12_4_ = fVar96;
    auVar43._4_4_ = local_6d0[0];
    auVar43._0_4_ = local_6d0[1];
    auVar43._8_4_ = local_6d0[3];
    auVar43._12_4_ = local_6d0[2];
    puVar18[2] = 8;
    auVar80 = minps(auVar37,local_6e0);
    auVar81 = maxps(auVar43,auVar8);
    fVar47 = auVar39._0_4_;
    fVar33 = auVar39._4_4_;
    fVar48 = auVar39._8_4_;
    fVar61 = auVar39._12_4_;
    puVar18[3] = 8;
    fVar11 = _LC9;
    uVar22 = _LC15;
    auVar66._0_8_ = auVar80._8_8_;
    auVar66._8_4_ = auVar80._0_4_;
    auVar66._12_4_ = auVar80._4_4_;
    auVar80 = minps(auVar66,auVar80);
    auVar38._0_8_ = auVar81._8_8_;
    auVar38._8_4_ = auVar81._0_4_;
    auVar38._12_4_ = auVar81._4_4_;
    auVar39 = maxps(auVar38,auVar81);
    fVar63 = auVar80._0_4_;
    fVar34 = (auVar39._0_4_ - fVar63) * __LC7;
    fVar26 = fVar34 / _LC8;
    if (fVar34 / _LC8 == 0.0) {
      fVar26 = _LC5;
    }
    fVar99 = 0.0;
    if (0.0 < fVar34) {
      fVar99 = _LC8 / fVar34;
    }
    fVar34 = (fVar92 - fVar63) * fVar99;
    fVar60 = (fVar95 - fVar63) * fVar99;
    fVar62 = (fVar96 - fVar63) * fVar99;
    fVar64 = (fVar97 - fVar63) * fVar99;
    if ((float)((uint)fVar64 & _LC15) < _LC9) {
      fVar64 = (float)((uint)((float)(int)fVar64 -
                             (float)(-(uint)(fVar64 < (float)(int)fVar64) & _LC11)) |
                      ~_LC15 & (uint)fVar64);
    }
    if ((float)((uint)fVar62 & _LC15) < _LC9) {
      fVar62 = (float)((uint)((float)(int)fVar62 -
                             (float)(-(uint)(fVar62 < (float)(int)fVar62) & _LC11)) |
                      ~_LC15 & (uint)fVar62);
    }
    if ((float)((uint)fVar60 & _LC15) < _LC9) {
      fVar60 = (float)((uint)((float)(int)fVar60 -
                             (float)(-(uint)(fVar60 < (float)(int)fVar60) & _LC11)) |
                      ~_LC15 & (uint)fVar60);
    }
    if ((float)((uint)fVar34 & _LC15) < _LC9) {
      fVar34 = (float)((uint)((float)(int)fVar34 -
                             (float)(-(uint)(fVar34 < (float)(int)fVar34) & _LC11)) |
                      ~_LC15 & (uint)fVar34);
    }
    auVar73._0_4_ = (int)fVar34;
    auVar73._4_4_ = (int)fVar60;
    auVar73._8_4_ = (int)fVar62;
    auVar73._12_4_ = (int)fVar64;
    auVar72._0_4_ = -(uint)(auVar73._0_4_ < 0);
    auVar72._4_4_ = -(uint)(auVar73._4_4_ < 0);
    auVar72._8_4_ = -(uint)(auVar73._8_4_ < 0);
    auVar72._12_4_ = -(uint)(auVar73._12_4_ < 0);
    auVar73 = ~auVar72 & auVar73;
    fVar34 = (local_6d0[0] - fVar63) * fVar99;
    fVar60 = (local_6d0[1] - fVar63) * fVar99;
    fVar62 = (local_6d0[2] - fVar63) * fVar99;
    fVar99 = (local_6d0[3] - fVar63) * fVar99;
    if ((float)((uint)fVar99 & _LC15) < _LC9) {
      fVar99 = (float)((uint)((float)(int)fVar99 +
                             (float)(-(uint)((float)(int)fVar99 < fVar99) & _LC11)) |
                      ~_LC15 & (uint)fVar99);
    }
    if ((float)((uint)fVar62 & _LC15) < _LC9) {
      fVar62 = (float)((uint)((float)(int)fVar62 +
                             (float)(-(uint)((float)(int)fVar62 < fVar62) & _LC11)) |
                      ~_LC15 & (uint)fVar62);
    }
    if ((float)((uint)fVar60 & _LC15) < _LC9) {
      fVar60 = (float)((uint)((float)(int)fVar60 +
                             (float)(-(uint)((float)(int)fVar60 < fVar60) & _LC11)) |
                      ~_LC15 & (uint)fVar60);
    }
    if ((float)((uint)fVar34 & _LC15) < _LC9) {
      fVar34 = (float)((uint)((float)(int)fVar34 +
                             (float)(-(uint)((float)(int)fVar34 < fVar34) & _LC11)) |
                      ~_LC15 & (uint)fVar34);
    }
    lVar21 = 0;
    auVar6._4_4_ = -(uint)(fVar95 != fVar33);
    auVar6._0_4_ = -(uint)(fVar92 != fVar47);
    auVar6._8_4_ = -(uint)(fVar96 != fVar48);
    auVar6._12_4_ = -(uint)(fVar97 != fVar61);
    auVar5._4_4_ = _UNK_00111cb4;
    auVar5._0_4_ = __LC13;
    auVar5._8_4_ = _UNK_00111cb8;
    auVar5._12_4_ = _UNK_00111cbc;
    auVar82._0_4_ = (int)fVar34;
    auVar82._4_4_ = (int)fVar60;
    auVar82._8_4_ = (int)fVar62;
    auVar82._12_4_ = (int)fVar99;
    auVar50._0_4_ = -(uint)(auVar82._0_4_ < __LC13);
    auVar50._4_4_ = -(uint)(auVar82._4_4_ < _UNK_00111cb4);
    auVar50._8_4_ = -(uint)(auVar82._8_4_ < _UNK_00111cb8);
    auVar50._12_4_ = -(uint)(auVar82._12_4_ < _UNK_00111cbc);
    auVar39 = auVar50 & auVar82 | ~auVar50 & auVar5;
    auVar83._4_4_ = -(uint)(fVar95 < (float)auVar73._4_4_ * fVar26 + fVar63);
    auVar83._0_4_ = -(uint)(fVar92 < (float)auVar73._0_4_ * fVar26 + fVar63);
    auVar83._8_4_ = -(uint)(fVar96 < (float)auVar73._8_4_ * fVar26 + fVar63);
    auVar83._12_4_ = -(uint)(fVar97 < (float)auVar73._12_4_ * fVar26 + fVar63);
    auVar67._4_4_ = -(uint)(fVar63 + fVar26 * (float)auVar39._4_4_ < local_6d0[1]);
    auVar67._0_4_ = -(uint)(fVar63 + fVar26 * (float)auVar39._0_4_ < local_6d0[0]);
    auVar67._8_4_ = -(uint)(fVar63 + fVar26 * (float)auVar39._8_4_ < local_6d0[2]);
    auVar67._12_4_ = -(uint)(fVar63 + fVar26 * (float)auVar39._12_4_ < local_6d0[3]);
    auVar74._0_4_ = auVar73._0_4_ + -1;
    auVar74._4_4_ = auVar73._4_4_ + -1;
    auVar74._8_4_ = auVar73._8_4_ + -1;
    auVar74._12_4_ = auVar73._12_4_ + -1;
    auVar80 = auVar74 & auVar83 | ~auVar83 & auVar73;
    auVar84._0_4_ = -(uint)(auVar80._0_4_ < 0);
    auVar84._4_4_ = -(uint)(auVar80._4_4_ < 0);
    auVar84._8_4_ = -(uint)(auVar80._8_4_ < 0);
    auVar84._12_4_ = -(uint)(auVar80._12_4_ < 0);
    auVar51._0_4_ = auVar39._0_4_ + __LC28;
    auVar51._4_4_ = auVar39._4_4_ + _UNK_00111cc4;
    auVar51._8_4_ = auVar39._8_4_ + _UNK_00111cc8;
    auVar51._12_4_ = auVar39._12_4_ + _UNK_00111ccc;
    local_720 = ~auVar84 & auVar80 & auVar6 | ~auVar6 & auVar5;
    auVar39 = auVar51 & auVar67 | ~auVar67 & auVar39;
    auVar75._0_4_ = -(uint)(auVar39._0_4_ < __LC13);
    auVar75._4_4_ = -(uint)(auVar39._4_4_ < _UNK_00111cb4);
    auVar75._8_4_ = -(uint)(auVar39._8_4_ < _UNK_00111cb8);
    auVar75._12_4_ = -(uint)(auVar39._12_4_ < _UNK_00111cbc);
    local_710 = (auVar39 & auVar75 | ~auVar75 & auVar5) & auVar6;
    do {
      *(char *)((long)puVar18 + lVar21 + 0x20) = (char)*(undefined4 *)(local_720 + lVar21 * 4);
      lVar21 = lVar21 + 1;
    } while (lVar21 != 4);
    lVar21 = 0;
    do {
      *(char *)((long)puVar18 + lVar21 + 0x24) = (char)*(undefined4 *)(local_710 + lVar21 * 4);
      lVar21 = lVar21 + 1;
    } while (lVar21 != 4);
    fVar92 = local_6c0._0_4_;
    fVar95 = local_6c0._4_4_;
    fVar96 = local_6c0._8_4_;
    fVar97 = local_6c0._12_4_;
    auVar9._4_4_ = local_6b0[1];
    auVar9._0_4_ = local_6b0[0];
    auVar9._8_4_ = local_6b0[2];
    auVar9._12_4_ = local_6b0[3];
    *(float *)((long)puVar18 + 0x44) = fVar26;
    *(float *)(puVar18 + 7) = fVar63;
    auVar52._4_4_ = fVar92;
    auVar52._0_4_ = fVar95;
    auVar52._8_4_ = fVar97;
    auVar52._12_4_ = fVar96;
    auVar76._4_4_ = local_6b0[0];
    auVar76._0_4_ = local_6b0[1];
    auVar76._8_4_ = local_6b0[3];
    auVar76._12_4_ = local_6b0[2];
    auVar39 = minps(auVar52,local_6c0);
    auVar81 = maxps(auVar76,auVar9);
    auVar68._0_8_ = auVar39._8_8_;
    auVar68._8_4_ = auVar39._0_4_;
    auVar68._12_4_ = auVar39._4_4_;
    auVar80 = minps(auVar68,auVar39);
    auVar53._0_8_ = auVar81._8_8_;
    auVar53._8_4_ = auVar81._0_4_;
    auVar53._12_4_ = auVar81._4_4_;
    auVar39 = maxps(auVar53,auVar81);
    fVar63 = auVar80._0_4_;
    fVar34 = (auVar39._0_4_ - fVar63) * __LC7;
    fVar26 = fVar34 / _LC8;
    if (fVar34 / _LC8 == 0.0) {
      fVar26 = _LC5;
    }
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    else {
      fVar34 = _LC8 / fVar34;
    }
    fVar99 = (fVar92 - fVar63) * fVar34;
    fVar60 = (fVar95 - fVar63) * fVar34;
    fVar62 = (fVar96 - fVar63) * fVar34;
    fVar64 = (fVar97 - fVar63) * fVar34;
    if ((float)((uint)fVar64 & uVar22) < fVar11) {
      fVar64 = (float)((uint)((float)(int)fVar64 -
                             (float)(-(uint)(fVar64 < (float)(int)fVar64) & _LC11)) |
                      ~uVar22 & (uint)fVar64);
    }
    if ((float)((uint)fVar62 & uVar22) < fVar11) {
      fVar62 = (float)((uint)((float)(int)fVar62 -
                             (float)(-(uint)(fVar62 < (float)(int)fVar62) & _LC11)) |
                      ~uVar22 & (uint)fVar62);
    }
    if ((float)((uint)fVar60 & uVar22) < fVar11) {
      fVar60 = (float)((uint)((float)(int)fVar60 -
                             (float)(-(uint)(fVar60 < (float)(int)fVar60) & _LC11)) |
                      ~uVar22 & (uint)fVar60);
    }
    if ((float)((uint)fVar99 & uVar22) < fVar11) {
      fVar99 = (float)((uint)((float)(int)fVar99 -
                             (float)(-(uint)(fVar99 < (float)(int)fVar99) & _LC11)) |
                      ~uVar22 & (uint)fVar99);
    }
    auVar86._0_4_ = (int)fVar99;
    auVar86._4_4_ = (int)fVar60;
    auVar86._8_4_ = (int)fVar62;
    auVar86._12_4_ = (int)fVar64;
    auVar85._0_4_ = -(uint)(auVar86._0_4_ < 0);
    auVar85._4_4_ = -(uint)(auVar86._4_4_ < 0);
    auVar85._8_4_ = -(uint)(auVar86._8_4_ < 0);
    auVar85._12_4_ = -(uint)(auVar86._12_4_ < 0);
    auVar86 = ~auVar85 & auVar86;
    fVar99 = (local_6b0[0] - fVar63) * fVar34;
    fVar60 = (local_6b0[1] - fVar63) * fVar34;
    fVar62 = (local_6b0[2] - fVar63) * fVar34;
    fVar34 = (local_6b0[3] - fVar63) * fVar34;
    if ((float)((uint)fVar34 & uVar22) < fVar11) {
      fVar34 = (float)((uint)((float)(int)fVar34 +
                             (float)(-(uint)((float)(int)fVar34 < fVar34) & _LC11)) |
                      ~uVar22 & (uint)fVar34);
    }
    if ((float)((uint)fVar62 & uVar22) < fVar11) {
      fVar62 = (float)((uint)((float)(int)fVar62 +
                             (float)(-(uint)((float)(int)fVar62 < fVar62) & _LC11)) |
                      ~uVar22 & (uint)fVar62);
    }
    if ((float)((uint)fVar60 & uVar22) < fVar11) {
      fVar60 = (float)((uint)((float)(int)fVar60 +
                             (float)(-(uint)((float)(int)fVar60 < fVar60) & _LC11)) |
                      ~uVar22 & (uint)fVar60);
    }
    if ((float)((uint)fVar99 & uVar22) < fVar11) {
      fVar99 = (float)((uint)((float)(int)fVar99 +
                             (float)(-(uint)((float)(int)fVar99 < fVar99) & _LC11)) |
                      ~uVar22 & (uint)fVar99);
    }
    auVar7._4_4_ = -(uint)(fVar95 != fVar33);
    auVar7._0_4_ = -(uint)(fVar92 != fVar47);
    auVar7._8_4_ = -(uint)(fVar96 != fVar48);
    auVar7._12_4_ = -(uint)(fVar97 != fVar61);
    lVar21 = 0;
    auVar77._0_4_ = (int)fVar99;
    auVar77._4_4_ = (int)fVar60;
    auVar77._8_4_ = (int)fVar62;
    auVar77._12_4_ = (int)fVar34;
    auVar54._0_4_ = -(uint)(auVar77._0_4_ < __LC13);
    auVar54._4_4_ = -(uint)(auVar77._4_4_ < _UNK_00111cb4);
    auVar54._8_4_ = -(uint)(auVar77._8_4_ < _UNK_00111cb8);
    auVar54._12_4_ = -(uint)(auVar77._12_4_ < _UNK_00111cbc);
    auVar39 = auVar54 & auVar77 | ~auVar54 & auVar5;
    auVar94._4_4_ = -(uint)(fVar95 < (float)auVar86._4_4_ * fVar26 + fVar63);
    auVar94._0_4_ = -(uint)(fVar92 < (float)auVar86._0_4_ * fVar26 + fVar63);
    auVar94._8_4_ = -(uint)(fVar96 < (float)auVar86._8_4_ * fVar26 + fVar63);
    auVar94._12_4_ = -(uint)(fVar97 < (float)auVar86._12_4_ * fVar26 + fVar63);
    auVar87._0_4_ = auVar86._0_4_ + -1;
    auVar87._4_4_ = auVar86._4_4_ + -1;
    auVar87._8_4_ = auVar86._8_4_ + -1;
    auVar87._12_4_ = auVar86._12_4_ + -1;
    auVar80 = auVar87 & auVar94 | ~auVar94 & auVar86;
    auVar78._4_4_ = -(uint)(fVar26 * (float)auVar39._4_4_ + fVar63 < local_6b0[1]);
    auVar78._0_4_ = -(uint)(fVar26 * (float)auVar39._0_4_ + fVar63 < local_6b0[0]);
    auVar78._8_4_ = -(uint)(fVar26 * (float)auVar39._8_4_ + fVar63 < local_6b0[2]);
    auVar78._12_4_ = -(uint)(fVar26 * (float)auVar39._12_4_ + fVar63 < local_6b0[3]);
    auVar69._0_4_ = -(uint)(auVar80._0_4_ < 0);
    auVar69._4_4_ = -(uint)(auVar80._4_4_ < 0);
    auVar69._8_4_ = -(uint)(auVar80._8_4_ < 0);
    auVar69._12_4_ = -(uint)(auVar80._12_4_ < 0);
    auVar55._0_4_ = auVar39._0_4_ + __LC28;
    auVar55._4_4_ = auVar39._4_4_ + _UNK_00111cc4;
    auVar55._8_4_ = auVar39._8_4_ + _UNK_00111cc8;
    auVar55._12_4_ = auVar39._12_4_ + _UNK_00111ccc;
    local_720 = ~auVar69 & auVar80 & auVar7 | ~auVar7 & auVar5;
    auVar39 = auVar55 & auVar78 | ~auVar78 & auVar39;
    auVar88._0_4_ = -(uint)(auVar39._0_4_ < __LC13);
    auVar88._4_4_ = -(uint)(auVar39._4_4_ < _UNK_00111cb4);
    auVar88._8_4_ = -(uint)(auVar39._8_4_ < _UNK_00111cb8);
    auVar88._12_4_ = -(uint)(auVar39._12_4_ < _UNK_00111cbc);
    local_710 = (auVar39 & auVar88 | ~auVar88 & auVar5) & auVar7;
    do {
      *(char *)((long)puVar18 + lVar21 + 0x28) = (char)*(undefined4 *)(local_720 + lVar21 * 4);
      lVar21 = lVar21 + 1;
    } while (lVar21 != 4);
    lVar21 = 0;
    do {
      *(char *)((long)puVar18 + lVar21 + 0x2c) = (char)*(undefined4 *)(local_710 + lVar21 * 4);
      lVar21 = lVar21 + 1;
    } while (lVar21 != 4);
    fVar34 = local_6a0._0_4_;
    fVar92 = local_6a0._4_4_;
    fVar95 = local_6a0._8_4_;
    fVar96 = local_6a0._12_4_;
    auVar10._4_4_ = local_690[1];
    auVar10._0_4_ = local_690[0];
    auVar10._8_4_ = local_690[2];
    auVar10._12_4_ = local_690[3];
    *(float *)(puVar18 + 9) = fVar26;
    auVar56._4_4_ = fVar34;
    auVar56._0_4_ = fVar92;
    auVar56._8_4_ = fVar96;
    auVar56._12_4_ = fVar95;
    auVar32._4_4_ = -(uint)(fVar33 != fVar92);
    auVar32._0_4_ = -(uint)(fVar47 != fVar34);
    auVar32._8_4_ = -(uint)(fVar48 != fVar95);
    auVar32._12_4_ = -(uint)(fVar61 != fVar96);
    auVar79._4_4_ = local_690[0];
    auVar79._0_4_ = local_690[1];
    auVar79._8_4_ = local_690[3];
    auVar79._12_4_ = local_690[2];
    auVar39 = minps(auVar56,local_6a0);
    auVar81 = maxps(auVar79,auVar10);
    *(float *)((long)puVar18 + 0x3c) = fVar63;
    auVar70._0_8_ = auVar39._8_8_;
    auVar70._8_4_ = auVar39._0_4_;
    auVar70._12_4_ = auVar39._4_4_;
    auVar80 = minps(auVar70,auVar39);
    auVar57._0_8_ = auVar81._8_8_;
    auVar57._8_4_ = auVar81._0_4_;
    auVar57._12_4_ = auVar81._4_4_;
    auVar39 = maxps(auVar57,auVar81);
    fVar33 = auVar80._0_4_;
    fVar47 = (auVar39._0_4_ - fVar33) * __LC7;
    fVar26 = fVar47 / _LC8;
    if (fVar47 / _LC8 == 0.0) {
      fVar26 = _LC5;
    }
    if (fVar47 <= 0.0) {
      fVar47 = 0.0;
    }
    else {
      fVar47 = _LC8 / fVar47;
    }
    fVar48 = (fVar34 - fVar33) * fVar47;
    fVar61 = (fVar92 - fVar33) * fVar47;
    fVar63 = (fVar95 - fVar33) * fVar47;
    fVar97 = (fVar96 - fVar33) * fVar47;
    if ((float)((uint)fVar97 & uVar22) < fVar11) {
      fVar97 = (float)((uint)((float)(int)fVar97 -
                             (float)(-(uint)(fVar97 < (float)(int)fVar97) & _LC11)) |
                      ~uVar22 & (uint)fVar97);
    }
    if ((float)((uint)fVar63 & uVar22) < fVar11) {
      fVar63 = (float)((uint)((float)(int)fVar63 -
                             (float)(-(uint)(fVar63 < (float)(int)fVar63) & _LC11)) |
                      ~uVar22 & (uint)fVar63);
    }
    if ((float)((uint)fVar61 & uVar22) < fVar11) {
      fVar61 = (float)((uint)((float)(int)fVar61 -
                             (float)(-(uint)(fVar61 < (float)(int)fVar61) & _LC11)) |
                      ~uVar22 & (uint)fVar61);
    }
    if ((float)((uint)fVar48 & uVar22) < fVar11) {
      fVar48 = (float)((uint)((float)(int)fVar48 -
                             (float)(-(uint)(fVar48 < (float)(int)fVar48) & _LC11)) |
                      ~uVar22 & (uint)fVar48);
    }
    auVar90._0_4_ = (int)fVar48;
    auVar90._4_4_ = (int)fVar61;
    auVar90._8_4_ = (int)fVar63;
    auVar90._12_4_ = (int)fVar97;
    auVar89._0_4_ = -(uint)(auVar90._0_4_ < 0);
    auVar89._4_4_ = -(uint)(auVar90._4_4_ < 0);
    auVar89._8_4_ = -(uint)(auVar90._8_4_ < 0);
    auVar89._12_4_ = -(uint)(auVar90._12_4_ < 0);
    auVar90 = ~auVar89 & auVar90;
    fVar48 = (local_690[0] - fVar33) * fVar47;
    fVar61 = (local_690[1] - fVar33) * fVar47;
    fVar63 = (local_690[2] - fVar33) * fVar47;
    fVar47 = (local_690[3] - fVar33) * fVar47;
    if ((float)((uint)fVar47 & uVar22) < fVar11) {
      fVar47 = (float)((uint)((float)(int)fVar47 +
                             (float)(-(uint)((float)(int)fVar47 < fVar47) & _LC11)) |
                      ~uVar22 & (uint)fVar47);
    }
    if ((float)((uint)fVar63 & uVar22) < fVar11) {
      fVar63 = (float)((uint)((float)(int)fVar63 +
                             (float)(-(uint)((float)(int)fVar63 < fVar63) & _LC11)) |
                      ~uVar22 & (uint)fVar63);
    }
    if ((float)((uint)fVar61 & uVar22) < fVar11) {
      fVar61 = (float)((uint)((float)(int)fVar61 +
                             (float)(-(uint)((float)(int)fVar61 < fVar61) & _LC11)) |
                      ~uVar22 & (uint)fVar61);
    }
    if ((float)((uint)fVar48 & uVar22) < fVar11) {
      fVar48 = (float)((uint)((float)(int)fVar48 +
                             (float)(-(uint)((float)(int)fVar48 < fVar48) & _LC11)) |
                      ~uVar22 & (uint)fVar48);
    }
    lVar21 = 0;
    auVar40._0_4_ = (int)fVar48;
    auVar40._4_4_ = (int)fVar61;
    auVar40._8_4_ = (int)fVar63;
    auVar40._12_4_ = (int)fVar47;
    auVar44._0_4_ = -(uint)(auVar40._0_4_ < __LC13);
    auVar44._4_4_ = -(uint)(auVar40._4_4_ < _UNK_00111cb4);
    auVar44._8_4_ = -(uint)(auVar40._8_4_ < _UNK_00111cb8);
    auVar44._12_4_ = -(uint)(auVar40._12_4_ < _UNK_00111cbc);
    auVar39 = auVar40 & auVar44 | ~auVar44 & auVar5;
    auVar58._4_4_ = -(uint)(fVar92 < (float)auVar90._4_4_ * fVar26 + fVar33);
    auVar58._0_4_ = -(uint)(fVar34 < (float)auVar90._0_4_ * fVar26 + fVar33);
    auVar58._8_4_ = -(uint)(fVar95 < (float)auVar90._8_4_ * fVar26 + fVar33);
    auVar58._12_4_ = -(uint)(fVar96 < (float)auVar90._12_4_ * fVar26 + fVar33);
    auVar45._4_4_ = -(uint)(fVar26 * (float)auVar39._4_4_ + fVar33 < local_690[1]);
    auVar45._0_4_ = -(uint)(fVar26 * (float)auVar39._0_4_ + fVar33 < local_690[0]);
    auVar45._8_4_ = -(uint)(fVar26 * (float)auVar39._8_4_ + fVar33 < local_690[2]);
    auVar45._12_4_ = -(uint)(fVar26 * (float)auVar39._12_4_ + fVar33 < local_690[3]);
    auVar91._0_4_ = auVar90._0_4_ + -1;
    auVar91._4_4_ = auVar90._4_4_ + -1;
    auVar91._8_4_ = auVar90._8_4_ + -1;
    auVar91._12_4_ = auVar90._12_4_ + -1;
    auVar80 = auVar91 & auVar58 | ~auVar58 & auVar90;
    auVar59._0_4_ = -(uint)(auVar80._0_4_ < 0);
    auVar59._4_4_ = -(uint)(auVar80._4_4_ < 0);
    auVar59._8_4_ = -(uint)(auVar80._8_4_ < 0);
    auVar59._12_4_ = -(uint)(auVar80._12_4_ < 0);
    auVar41._0_4_ = auVar39._0_4_ + __LC28;
    auVar41._4_4_ = auVar39._4_4_ + _UNK_00111cc4;
    auVar41._8_4_ = auVar39._8_4_ + _UNK_00111cc8;
    auVar41._12_4_ = auVar39._12_4_ + _UNK_00111ccc;
    auVar39 = auVar41 & auVar45 | ~auVar45 & auVar39;
    auVar46._0_4_ = -(uint)(auVar39._0_4_ < __LC13);
    auVar46._4_4_ = -(uint)(auVar39._4_4_ < _UNK_00111cb4);
    auVar46._8_4_ = -(uint)(auVar39._8_4_ < _UNK_00111cb8);
    auVar46._12_4_ = -(uint)(auVar39._12_4_ < _UNK_00111cbc);
    local_720 = ~auVar59 & auVar80 & auVar32 | ~auVar32 & auVar5;
    local_710 = (auVar39 & auVar46 | ~auVar46 & auVar5) & auVar32;
    do {
      *(char *)((long)puVar18 + lVar21 + 0x30) = (char)*(undefined4 *)(local_720 + lVar21 * 4);
      lVar21 = lVar21 + 1;
    } while (lVar21 != 4);
    lVar21 = 0;
    do {
      *(char *)((long)puVar18 + lVar21 + 0x34) = (char)*(undefined4 *)(local_710 + lVar21 * 4);
      lVar21 = lVar21 + 1;
    } while (lVar21 != 4);
    *(float *)((long)puVar18 + 0x4c) = fVar26;
    uVar31 = 0;
    uVar12 = (ulong)puVar18 | 5;
    *(float *)(puVar18 + 8) = fVar33;
    puVar30 = &local_650;
    do {
      uVar17 = createLargeLeaf(param_1,puVar30);
      local_700[uVar31] = uVar17;
      uVar31 = uVar31 + 1;
      puVar30 = puVar30 + 0xc;
    } while (uVar24 != uVar31);
    uVar31 = 0;
    do {
      uVar22 = (int)uVar31 + 8;
      *(undefined8 *)(((ulong)puVar18 & 0xfffffffffffffff0) + uVar31) =
           *(undefined8 *)((long)local_700 + uVar31);
      uVar31 = (ulong)uVar22;
    } while (uVar22 < (uint)((int)uVar24 * 8));
  }
  else {
    uVar12 = (**(code **)**(undefined8 **)param_1[0xd])
                       (*(undefined8 **)param_1[0xd],param_1[8],param_2 + 10,&stack0x00000008);
  }
  if (local_48 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
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
   embree::BuildProgressMonitor>::createLargeLeaf(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,
   embree::sse2::BinSplit<32ul> > const&, embree::FastAllocator::CachedAllocator) */

BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
* __thiscall
embree::sse2::GeneralBVHBuilder::
BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
::createLargeLeaf(BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
                  *this,ulong *param_1,ulong *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  FastAllocator *this_00;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar46;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  FastAllocator *in_stack_00000008;
  ulong *in_stack_00000010;
  undefined8 in_stack_00000018;
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
  ulong local_b48 [160];
  ulong local_648;
  undefined1 local_640 [8];
  ulong local_638 [4];
  ulong local_618;
  ulong uStack_610;
  ulong local_608;
  ulong uStack_600;
  ulong local_5f8;
  ulong uStack_5f0;
  long local_40;
  
  puVar26 = in_stack_00000010;
  this_00 = in_stack_00000008;
  uVar19 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] < uVar19) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar18 = param_1[4];
  uVar20 = param_3[0xb];
  uVar2 = param_3[10];
  if (uVar18 < uVar20 - uVar2) {
    uVar27 = 1;
    local_638[0] = param_3[2];
    local_638[1] = param_3[3];
    local_640[0] = (char)param_3[1];
    local_638[2] = param_3[4];
    local_638[3] = param_3[5];
    local_618 = param_3[6];
    uStack_610 = param_3[7];
    local_608 = param_3[8];
    uStack_600 = param_3[9];
    local_5f8 = param_3[10];
    uStack_5f0 = param_3[0xb];
    local_648 = uVar19;
    auVar57._0_8_ = CONCAT44(_LC4,_LC4);
    auVar57._8_4_ = _LC4;
    auVar57._12_4_ = _LC4;
    auVar56._0_8_ = CONCAT44(_LC2,_LC2);
    auVar56._8_4_ = _LC2;
    auVar56._12_4_ = _LC2;
    puVar25 = &local_648;
    do {
      uVar29 = 0;
      uVar28 = 0;
      uVar24 = 0xffffffffffffffff;
      puVar30 = local_638 + 8;
      do {
        uVar31 = uVar28;
        if (uVar28 <= uVar18) {
          uVar31 = uVar18;
        }
        if (uVar31 < puVar30[1] - *puVar30) {
          uVar24 = uVar29;
          uVar28 = puVar30[1] - *puVar30;
        }
        uVar29 = uVar29 + 1;
        puVar30 = puVar30 + 0xc;
      } while (uVar27 != uVar29);
      if (uVar24 == 0xffffffffffffffff) break;
      lVar3 = *(long *)param_1[9];
      uVar28 = local_638[uVar24 * 0xc + 8];
      uVar29 = local_638[uVar24 * 0xc + 9];
      uVar31 = uVar28 + uVar29 >> 1;
      if (uVar28 < uVar31) {
        auVar52._8_4_ = _LC2;
        auVar52._0_8_ = auVar56._0_8_;
        auVar52._12_4_ = _LC2;
        auVar53._8_4_ = _LC4;
        auVar53._0_8_ = auVar57._0_8_;
        auVar53._12_4_ = _LC4;
        auVar54._8_4_ = _LC2;
        auVar54._0_8_ = auVar56._0_8_;
        auVar54._12_4_ = _LC2;
        auVar55._8_4_ = _LC4;
        auVar55._0_8_ = auVar57._0_8_;
        auVar55._12_4_ = _LC4;
        pauVar17 = (undefined1 (*) [16])(uVar28 * 0x20 + lVar3);
        do {
          auVar33._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
          auVar33._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
          auVar33._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
          auVar33._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
          pauVar16 = pauVar17 + 2;
          auVar55 = minps(auVar55,*pauVar17);
          auVar54 = maxps(auVar54,pauVar17[1]);
          auVar53 = minps(auVar53,auVar33);
          auVar52 = maxps(auVar52,auVar33);
          pauVar17 = pauVar16;
        } while (pauVar16 != (undefined1 (*) [16])(uVar31 * 0x20 + lVar3));
      }
      else {
        auVar52._8_4_ = _LC2;
        auVar52._0_8_ = auVar56._0_8_;
        auVar52._12_4_ = _LC2;
        auVar53._8_4_ = _LC4;
        auVar53._0_8_ = auVar57._0_8_;
        auVar53._12_4_ = _LC4;
        auVar54._8_4_ = _LC2;
        auVar54._0_8_ = auVar56._0_8_;
        auVar54._12_4_ = _LC2;
        auVar55._8_4_ = _LC4;
        auVar55._0_8_ = auVar57._0_8_;
        auVar55._12_4_ = _LC4;
      }
      if (uVar31 < uVar29) {
        auVar36._8_4_ = _LC2;
        auVar36._0_8_ = auVar56._0_8_;
        auVar36._12_4_ = _LC2;
        auVar40._8_4_ = _LC4;
        auVar40._0_8_ = auVar57._0_8_;
        auVar40._12_4_ = _LC4;
        auVar45._8_4_ = _LC2;
        auVar45._0_8_ = auVar56._0_8_;
        auVar45._12_4_ = _LC2;
        auVar50._8_4_ = _LC4;
        auVar50._0_8_ = auVar57._0_8_;
        auVar50._12_4_ = _LC4;
        pauVar17 = (undefined1 (*) [16])(uVar31 * 0x20 + lVar3);
        do {
          auVar34._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
          auVar34._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
          auVar34._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
          auVar34._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
          pauVar16 = pauVar17 + 2;
          auVar50 = minps(auVar50,*pauVar17);
          auVar45 = maxps(auVar45,pauVar17[1]);
          auVar40 = minps(auVar40,auVar34);
          auVar36 = maxps(auVar36,auVar34);
          pauVar17 = pauVar16;
        } while (pauVar16 != (undefined1 (*) [16])(lVar3 + uVar29 * 0x20));
      }
      else {
        auVar36._8_4_ = _LC2;
        auVar36._0_8_ = auVar56._0_8_;
        auVar36._12_4_ = _LC2;
        auVar40._8_4_ = _LC4;
        auVar40._0_8_ = auVar57._0_8_;
        auVar40._12_4_ = _LC4;
        auVar45._8_4_ = _LC2;
        auVar45._0_8_ = auVar56._0_8_;
        auVar45._12_4_ = _LC2;
        auVar50._8_4_ = _LC4;
        auVar50._0_8_ = auVar57._0_8_;
        auVar50._12_4_ = _LC4;
      }
      uVar27 = uVar27 + 1;
      *(ulong *)(local_640 + uVar24 * 0x60 + -8) = *puVar25;
      local_640[uVar24 * 0x60] = (char)puVar25[1];
      uVar9 = puVar25[3];
      local_638[uVar24 * 0xc] = puVar25[2];
      local_638[uVar24 * 0xc + 1] = uVar9;
      uVar9 = puVar25[5];
      local_638[uVar24 * 0xc + 2] = puVar25[4];
      local_638[uVar24 * 0xc + 3] = uVar9;
      uVar9 = puVar25[7];
      local_638[uVar24 * 0xc + 4] = puVar25[6];
      local_638[uVar24 * 0xc + 5] = uVar9;
      uVar9 = puVar25[9];
      local_638[uVar24 * 0xc + 6] = puVar25[8];
      local_638[uVar24 * 0xc + 7] = uVar9;
      uVar9 = puVar25[0xb];
      local_638[uVar24 * 0xc + 8] = puVar25[10];
      local_638[uVar24 * 0xc + 9] = uVar9;
      *puVar25 = uVar19 + 1;
      *(undefined1 *)(puVar25 + 1) = 0;
      *(undefined1 (*) [16])(puVar25 + 2) = auVar55;
      *(undefined1 (*) [16])(puVar25 + 4) = auVar54;
      *(undefined1 (*) [16])(puVar25 + 6) = auVar53;
      *(undefined1 (*) [16])(puVar25 + 8) = auVar52;
      puVar25[10] = uVar28;
      puVar25[0xb] = uVar31;
      puVar25[0xc] = uVar19 + 1;
      *(undefined1 *)(puVar25 + 0xd) = 0;
      *(undefined1 (*) [16])(puVar25 + 0xe) = auVar50;
      *(undefined1 (*) [16])(puVar25 + 0x10) = auVar45;
      *(undefined1 (*) [16])(puVar25 + 0x12) = auVar40;
      *(undefined1 (*) [16])(puVar25 + 0x14) = auVar36;
      puVar25[0x16] = uVar31;
      puVar25[0x17] = uVar29;
      puVar25 = puVar25 + 0xc;
    } while (uVar27 < *param_1);
    uVar19 = param_1[7];
    if (uVar19 < uVar20 - uVar2) {
      puVar22 = local_640;
      do {
        *puVar22 = (ulong)(*(long *)(puVar22 + 0x50) - *(long *)(puVar22 + 0x48)) <= uVar19;
        puVar22 = puVar22 + 0x60;
      } while (local_640 + uVar27 * 0x60 != puVar22);
    }
    local_ba0 = 0xe0;
    uVar19 = *in_stack_00000010;
    if (in_stack_00000008 != *(FastAllocator **)(uVar19 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(uVar19 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(uVar19 + 8) + 0x118);
        *plVar1 = *plVar1 + *(long *)(uVar19 + 0xa8) + *(long *)(uVar19 + 0x68);
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar19 + 8) + 0x120);
        *plVar1 = *plVar1 + (((*(long *)(uVar19 + 0x98) + *(long *)(uVar19 + 0x58)) -
                             *(long *)(uVar19 + 0x50)) - *(long *)(uVar19 + 0x90));
        UNLOCK();
        LOCK();
        plVar1 = (long *)(*(long *)(uVar19 + 8) + 0x128);
        *plVar1 = *plVar1 + *(long *)(uVar19 + 0xb0) + *(long *)(uVar19 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(uVar19 + 0x48) = 0;
      *(undefined8 *)(uVar19 + 0x58) = 0;
      *(undefined8 *)(uVar19 + 0x50) = 0;
      *(undefined8 *)(uVar19 + 0x68) = 0;
      *(undefined8 *)(uVar19 + 0x70) = 0;
      *(undefined8 *)(uVar19 + 0x60) = 0;
      if (this_00 == (FastAllocator *)0x0) {
        *(undefined8 *)(uVar19 + 0x88) = 0;
        uVar23 = 0;
        *(undefined8 *)(uVar19 + 0x98) = 0;
        *(undefined8 *)(uVar19 + 0x90) = 0;
        *(undefined8 *)(uVar19 + 0xa8) = 0;
        *(undefined8 *)(uVar19 + 0xb0) = 0;
      }
      else {
        uVar23 = *(undefined8 *)(this_00 + 0x10);
        *(undefined8 *)(uVar19 + 0x88) = 0;
        *(undefined8 *)(uVar19 + 0x98) = 0;
        *(undefined8 *)(uVar19 + 0x60) = uVar23;
        *(undefined8 *)(uVar19 + 0x90) = 0;
        *(undefined8 *)(uVar19 + 0xa8) = 0;
        *(undefined8 *)(uVar19 + 0xb0) = 0;
        *(undefined8 *)(uVar19 + 0xa0) = 0;
        uVar23 = *(undefined8 *)(this_00 + 0x10);
      }
      *(undefined8 *)(uVar19 + 0xa0) = uVar23;
      LOCK();
      *(FastAllocator **)(uVar19 + 8) = this_00;
      UNLOCK();
      local_b98[0] = uVar19;
      embree::MutexSys::lock();
      puVar25 = *(ulong **)(this_00 + 0x138);
      if (puVar25 == *(ulong **)(this_00 + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(this_00 + 0x130),puVar25,local_b98);
      }
      else {
        *puVar25 = uVar19;
        *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
      auVar57._4_12_ = _UNK_00111c94;
      auVar57._0_4_ = _LC4;
      auVar56._4_12_ = _UNK_00111c84;
      auVar56._0_4_ = _LC2;
    }
    uVar18 = puVar26[2];
    puVar26[5] = puVar26[5] + 0xe0;
    uVar20 = (ulong)(-(int)uVar18 & 0xf);
    uVar19 = uVar18 + 0xe0 + uVar20;
    puVar26[2] = uVar19;
    if (puVar26[3] < uVar19) {
      puVar26[2] = uVar18;
      if (puVar26[4] < 0x380) {
        puVar21 = (undefined8 *)FastAllocator::malloc(this_00,&local_ba0,0x40,false);
        auVar56._4_12_ = _UNK_00111c84;
        auVar56._0_4_ = _LC2;
        auVar57._4_12_ = _UNK_00111c94;
        auVar57._0_4_ = _LC4;
      }
      else {
        local_b98[0] = puVar26[4];
        puVar21 = (undefined8 *)FastAllocator::malloc(this_00,local_b98,0x40,true);
        auVar56._4_12_ = _UNK_00111c84;
        auVar56._0_4_ = _LC2;
        auVar57._4_12_ = _UNK_00111c94;
        auVar57._0_4_ = _LC4;
        puVar26[1] = (ulong)puVar21;
        puVar26[6] = (puVar26[3] + puVar26[6]) - puVar26[2];
        puVar26[2] = 0xe0;
        puVar26[3] = local_b98[0];
        if (local_b98[0] < 0xe0) {
          puVar26[2] = 0;
          local_b98[0] = puVar26[4];
          puVar21 = (undefined8 *)FastAllocator::malloc(this_00,local_b98,0x40,false);
          auVar56._4_12_ = _UNK_00111c84;
          auVar56._0_4_ = _LC2;
          auVar57._4_12_ = _UNK_00111c94;
          auVar57._0_4_ = _LC4;
          puVar26[1] = (ulong)puVar21;
          puVar26[6] = (puVar26[3] + puVar26[6]) - puVar26[2];
          puVar26[2] = 0xe0;
          puVar26[3] = local_b98[0];
          if (local_b98[0] < 0xe0) {
            puVar21 = (undefined8 *)0x0;
            puVar26[2] = 0;
          }
        }
      }
    }
    else {
      puVar26[6] = puVar26[6] + uVar20;
      puVar21 = (undefined8 *)((puVar26[1] - 0xe0) + uVar19);
    }
    *puVar21 = 8;
    puVar21[1] = 8;
    puVar21[2] = 8;
    puVar21[3] = 8;
    *(undefined1 (*) [16])(puVar21 + 0xc) = auVar57;
    *(undefined1 (*) [16])(puVar21 + 8) = auVar57;
    *(undefined1 (*) [16])(puVar21 + 4) = auVar57;
    *(undefined1 (*) [16])(puVar21 + 0xe) = auVar56;
    *(undefined1 (*) [16])(puVar21 + 10) = auVar56;
    *(undefined1 (*) [16])(puVar21 + 6) = auVar56;
    *(undefined1 (*) [16])(puVar21 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar21 + 0x14) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar21 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar21 + 0x1a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar21 + 0x16) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar21 + 0x12) = (undefined1  [16])0x0;
    puVar26 = local_b48;
    puVar25 = &local_648;
    do {
      puVar30 = puVar26 + 10;
      createLargeLeaf((BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
                       *)local_b98,param_1,puVar25);
      fVar15 = _LC23;
      uVar14 = _LC20;
      uVar13 = _LC18;
      fVar12 = _LC11;
      uVar11 = _LC16;
      uVar10 = _LC15;
      puVar26[2] = local_b88;
      puVar26[3] = uStack_b80;
      puVar26[4] = local_b78;
      puVar26[5] = uStack_b70;
      puVar26[6] = local_b68;
      puVar26[7] = uStack_b60;
      auVar48._4_12_ = _UNK_00111c94;
      auVar48._0_4_ = _LC4;
      puVar26[8] = local_b58;
      puVar26[9] = uStack_b50;
      auVar47._4_12_ = _UNK_00111c84;
      auVar47._0_4_ = _LC2;
      *puVar26 = local_b98[0];
      puVar26 = puVar30;
      puVar25 = puVar25 + 0xc;
    } while (local_b48 + uVar27 * 10 != puVar30);
    uVar18 = (ulong)puVar21 & 0xfffffffffffffff0;
    pfVar4 = (float *)param_1[0xc];
    uVar19 = uVar18;
    puVar26 = local_b48;
    auVar56 = auVar48;
    auVar57 = auVar47;
    do {
      fVar38 = *(float *)(puVar26 + 4);
      fVar39 = *(float *)((long)puVar26 + 0x24);
      fVar44 = *(float *)(puVar26 + 5);
      fVar46 = *(float *)((long)puVar26 + 0x2c);
      auVar48 = minps(auVar48,*(undefined1 (*) [16])(puVar26 + 2));
      auVar57 = maxps(auVar57,*(undefined1 (*) [16])(puVar26 + 4));
      auVar56 = minps(auVar56,*(undefined1 (*) [16])(puVar26 + 6));
      auVar47 = maxps(auVar47,*(undefined1 (*) [16])(puVar26 + 8));
      *(ulong *)(uVar19 * 2 - uVar18) = *puVar26;
      uVar20 = uVar19 + 4;
      fVar43 = *pfVar4;
      fVar42 = fVar12 / (pfVar4[1] - fVar43);
      fVar32 = (float)((uint)fVar43 ^ uVar11) * fVar42;
      fVar49 = fVar12 - fVar32;
      fVar42 = (fVar12 - fVar43) * fVar42;
      fVar43 = fVar12 - fVar42;
      auVar41._0_4_ = *(float *)(puVar26 + 8) * fVar32 + fVar38 * fVar49;
      auVar41._4_4_ = *(float *)((long)puVar26 + 0x44) * fVar32 + fVar39 * fVar49;
      auVar41._8_4_ = *(float *)(puVar26 + 9) * fVar32 + fVar44 * fVar49;
      auVar41._12_4_ = *(float *)((long)puVar26 + 0x4c) * fVar32 + fVar46 * fVar49;
      auVar37._0_4_ = fVar32 * *(float *)(puVar26 + 6) + fVar49 * *(float *)(puVar26 + 2);
      auVar37._4_4_ =
           fVar32 * *(float *)((long)puVar26 + 0x34) + fVar49 * *(float *)((long)puVar26 + 0x14);
      auVar37._8_4_ = fVar32 * *(float *)(puVar26 + 7) + fVar49 * *(float *)(puVar26 + 3);
      auVar37._12_4_ =
           fVar32 * *(float *)((long)puVar26 + 0x3c) + fVar49 * *(float *)((long)puVar26 + 0x1c);
      auVar7._4_4_ = uVar13;
      auVar7._0_4_ = uVar13;
      auVar7._8_4_ = uVar13;
      auVar7._12_4_ = uVar13;
      auVar54 = maxps(auVar41,auVar7);
      auVar5._4_4_ = uVar14;
      auVar5._0_4_ = uVar14;
      auVar5._8_4_ = uVar14;
      auVar5._12_4_ = uVar14;
      auVar53 = minps(auVar37,auVar5);
      auVar51._0_4_ = *(float *)(puVar26 + 8) * fVar42 + *(float *)(puVar26 + 4) * fVar43;
      auVar51._4_4_ =
           *(float *)((long)puVar26 + 0x44) * fVar42 + *(float *)((long)puVar26 + 0x24) * fVar43;
      auVar51._8_4_ = *(float *)(puVar26 + 9) * fVar42 + *(float *)(puVar26 + 5) * fVar43;
      auVar51._12_4_ =
           *(float *)((long)puVar26 + 0x4c) * fVar42 + *(float *)((long)puVar26 + 0x2c) * fVar43;
      auVar35._0_4_ = fVar42 * *(float *)(puVar26 + 6) + fVar43 * *(float *)(puVar26 + 2);
      auVar35._4_4_ =
           fVar42 * *(float *)((long)puVar26 + 0x34) + fVar43 * *(float *)((long)puVar26 + 0x14);
      auVar35._8_4_ = fVar42 * *(float *)(puVar26 + 7) + fVar43 * *(float *)(puVar26 + 3);
      auVar35._12_4_ =
           fVar42 * *(float *)((long)puVar26 + 0x3c) + fVar43 * *(float *)((long)puVar26 + 0x1c);
      auVar8._4_4_ = uVar13;
      auVar8._0_4_ = uVar13;
      auVar8._8_4_ = uVar13;
      auVar8._12_4_ = uVar13;
      auVar55 = maxps(auVar51,auVar8);
      auVar6._4_4_ = uVar14;
      auVar6._0_4_ = uVar14;
      auVar6._8_4_ = uVar14;
      auVar6._12_4_ = uVar14;
      auVar52 = minps(auVar35,auVar6);
      fVar44 = (float)((uint)auVar54._0_4_ & uVar10) * fVar15 + auVar54._0_4_;
      fVar46 = (float)((uint)auVar54._4_4_ & uVar10) * fVar15 + auVar54._4_4_;
      fVar32 = (float)((uint)auVar54._8_4_ & uVar10) * fVar15 + auVar54._8_4_;
      *(float *)(uVar19 + 0x30) = fVar44;
      fVar43 = auVar53._0_4_ - (float)((uint)auVar53._0_4_ & uVar10) * fVar15;
      fVar38 = auVar53._4_4_ - (float)((uint)auVar53._4_4_ & uVar10) * fVar15;
      fVar39 = auVar53._8_4_ - (float)((uint)auVar53._8_4_ & uVar10) * fVar15;
      *(float *)(uVar19 + 0x20) = fVar43;
      *(float *)(uVar19 + 0x80) =
           (auVar52._0_4_ - (float)((uint)auVar52._0_4_ & uVar10) * fVar15) - fVar43;
      *(float *)(uVar19 + 0x40) = fVar38;
      *(float *)(uVar19 + 0x60) = fVar39;
      *(float *)(uVar19 + 0x50) = fVar46;
      *(float *)(uVar19 + 0xa0) =
           (auVar52._4_4_ - (float)((uint)auVar52._4_4_ & uVar10) * fVar15) - fVar38;
      *(float *)(uVar19 + 0xc0) =
           (auVar52._8_4_ - (float)((uint)auVar52._8_4_ & uVar10) * fVar15) - fVar39;
      *(float *)(uVar19 + 0x90) =
           ((float)((uint)auVar55._0_4_ & uVar10) * fVar15 + auVar55._0_4_) - fVar44;
      *(float *)(uVar19 + 0x70) = fVar32;
      *(float *)(uVar19 + 0xb0) =
           ((float)((uint)auVar55._4_4_ & uVar10) * fVar15 + auVar55._4_4_) - fVar46;
      *(float *)(uVar19 + 0xd0) =
           ((float)((uint)auVar55._8_4_ & uVar10) * fVar15 + auVar55._8_4_) - fVar32;
      uVar19 = uVar20;
      puVar26 = puVar26 + 10;
    } while (uVar27 * 4 + uVar18 != uVar20);
    *(ulong *)this = (ulong)puVar21 | 1;
    *(undefined1 (*) [16])(this + 0x10) = auVar48;
    *(undefined1 (*) [16])(this + 0x20) = auVar57;
    *(undefined1 (*) [16])(this + 0x30) = auVar56;
    *(undefined1 (*) [16])(this + 0x40) = auVar47;
  }
  else {
    (**(code **)**(undefined8 **)param_1[0xd])
              (this,*(undefined8 **)param_1[0xd],param_1[8],param_3 + 10,&stack0x00000008);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::bin_serial_or_parallel<true, embree::sse2::BinInfoT<32ul, embree::PrimRef,
   embree::BBox<embree::Vec3fa> >, embree::sse2::BinMapping<32ul>,
   embree::PrimRef>(embree::sse2::BinInfoT<32ul, embree::PrimRef, embree::BBox<embree::Vec3fa> >&,
   embree::PrimRef const*, unsigned long, unsigned long, unsigned long,
   embree::sse2::BinMapping<32ul> const&)::{lambda(embree::range<unsigned long>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(embree::range<unsigned long> const&) const */

_lambda_embree__range<unsigned_long>const___1_ * __thiscall
embree::
bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)
::{lambda(embree::range<unsigned_long>const&)#1}::operator()
          (_lambda_embree__range<unsigned_long>const___1_ *this,range *param_1)

{
  undefined1 auVar1 [16];
  int *piVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  uint uVar7;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var8;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var9;
  long lVar10;
  long *in_RDX;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var13;
  ulong uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar25;
  uint uVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  
  uVar5 = _LC4;
  uVar4 = _LC2;
  p_Var9 = this;
  p_Var13 = this + 0xc00;
  do {
    *(undefined4 *)(p_Var9 + 0x40) = uVar5;
    *(undefined4 *)(p_Var9 + 0x44) = uVar5;
    *(undefined4 *)(p_Var9 + 0x48) = uVar5;
    *(undefined4 *)(p_Var9 + 0x4c) = uVar5;
    p_Var8 = p_Var9 + 0x60;
    *(undefined4 *)(p_Var9 + 0x50) = uVar4;
    *(undefined4 *)(p_Var9 + 0x54) = uVar4;
    *(undefined4 *)(p_Var9 + 0x58) = uVar4;
    *(undefined4 *)(p_Var9 + 0x5c) = uVar4;
    *(undefined4 *)(p_Var9 + 0x20) = uVar5;
    *(undefined4 *)(p_Var9 + 0x24) = uVar5;
    *(undefined4 *)(p_Var9 + 0x28) = uVar5;
    *(undefined4 *)(p_Var9 + 0x2c) = uVar5;
    *(undefined4 *)(p_Var9 + 0x30) = uVar4;
    *(undefined4 *)(p_Var9 + 0x34) = uVar4;
    *(undefined4 *)(p_Var9 + 0x38) = uVar4;
    *(undefined4 *)(p_Var9 + 0x3c) = uVar4;
    *(undefined4 *)p_Var9 = uVar5;
    *(undefined4 *)(p_Var9 + 4) = uVar5;
    *(undefined4 *)(p_Var9 + 8) = uVar5;
    *(undefined4 *)(p_Var9 + 0xc) = uVar5;
    *(undefined4 *)(p_Var9 + 0x10) = uVar4;
    *(undefined4 *)(p_Var9 + 0x14) = uVar4;
    *(undefined4 *)(p_Var9 + 0x18) = uVar4;
    *(undefined4 *)(p_Var9 + 0x1c) = uVar4;
    *(undefined1 (*) [16])p_Var13 = (undefined1  [16])0x0;
    fVar6 = _LC26;
    p_Var9 = p_Var8;
    p_Var13 = p_Var13 + 0x10;
  } while (this + 0xc00 != p_Var8);
  piVar2 = *(int **)(param_1 + 8);
  pauVar16 = (undefined1 (*) [16])(*in_RDX * 0x20 + **(long **)param_1);
  uVar15 = in_RDX[1] - *in_RDX;
  if (uVar15 == 0) {
    return this;
  }
  if (uVar15 != 1) {
    pauVar11 = pauVar16;
    do {
      auVar23 = pauVar11[1];
      auVar22 = *pauVar11;
      auVar24 = pauVar11[3];
      auVar1 = pauVar11[2];
      uVar7 = *piVar2 - 1;
      uVar18 = (uint)(((auVar23._0_4_ + auVar22._0_4_) - (float)piVar2[4]) * (float)piVar2[8] +
                     fVar6);
      uVar19 = (uint)(((auVar23._4_4_ + auVar22._4_4_) - (float)piVar2[5]) * (float)piVar2[9] +
                     fVar6);
      uVar20 = (uint)(((auVar23._8_4_ + auVar22._8_4_) - (float)piVar2[6]) * (float)piVar2[10] +
                     fVar6);
      uVar21 = -(uint)((int)uVar18 < (int)uVar7);
      uVar25 = -(uint)((int)uVar19 < (int)uVar7);
      uVar26 = -(uint)((int)uVar20 < (int)uVar7);
      uVar18 = uVar18 & uVar21 | ~uVar21 & uVar7;
      uVar19 = uVar19 & uVar25 | ~uVar25 & uVar7;
      uVar21 = uVar20 & uVar26 | ~uVar26 & uVar7;
      uVar12 = (ulong)(~-(uint)((int)uVar18 < 0) & uVar18);
      p_Var9 = this + uVar12 * 0x60;
      uVar18 = (uint)(((auVar24._0_4_ + auVar1._0_4_) - (float)piVar2[4]) * (float)piVar2[8] + fVar6
                     );
      uVar20 = (uint)(((auVar24._4_4_ + auVar1._4_4_) - (float)piVar2[5]) * (float)piVar2[9] + fVar6
                     );
      uVar25 = (uint)(((auVar24._8_4_ + auVar1._8_4_) - (float)piVar2[6]) * (float)piVar2[10] +
                     fVar6);
      uVar26 = -(uint)((int)uVar18 < (int)uVar7);
      uVar28 = -(uint)((int)uVar20 < (int)uVar7);
      uVar29 = -(uint)((int)uVar25 < (int)uVar7);
      uVar18 = uVar26 & uVar18 | ~uVar26 & uVar7;
      uVar20 = uVar28 & uVar20 | ~uVar28 & uVar7;
      uVar7 = uVar29 & uVar25 | ~uVar29 & uVar7;
      auVar27 = minps(*(undefined1 (*) [16])p_Var9,auVar22);
      *(undefined1 (*) [16])p_Var9 = auVar27;
      auVar27 = maxps(*(undefined1 (*) [16])(p_Var9 + 0x10),auVar23);
      *(undefined1 (*) [16])(p_Var9 + 0x10) = auVar27;
      uVar14 = (ulong)(~-(uint)((int)uVar19 < 0) & uVar19);
      p_Var9 = this + uVar14 * 0x60 + 0x20;
      auVar27 = minps(*(undefined1 (*) [16])p_Var9,auVar22);
      *(undefined1 (*) [16])p_Var9 = auVar27;
      auVar27 = maxps(*(undefined1 (*) [16])(p_Var9 + 0x10),auVar23);
      *(undefined1 (*) [16])(p_Var9 + 0x10) = auVar27;
      uVar3 = (ulong)(~-(uint)((int)uVar21 < 0) & uVar21);
      p_Var9 = this + uVar3 * 0x60 + 0x40;
      auVar22 = minps(*(undefined1 (*) [16])p_Var9,auVar22);
      *(undefined1 (*) [16])p_Var9 = auVar22;
      auVar23 = maxps(*(undefined1 (*) [16])(p_Var9 + 0x10),auVar23);
      *(undefined1 (*) [16])(p_Var9 + 0x10) = auVar23;
      *(int *)(this + uVar12 * 0x10 + 0xc00) = *(int *)(this + uVar12 * 0x10 + 0xc00) + 1;
      uVar12 = (ulong)(~-(uint)((int)uVar18 < 0) & uVar18);
      *(int *)(this + uVar14 * 0x10 + 0xc04) = *(int *)(this + uVar14 * 0x10 + 0xc04) + 1;
      *(int *)(this + uVar3 * 0x10 + 0xc08) = *(int *)(this + uVar3 * 0x10 + 0xc08) + 1;
      p_Var9 = this + uVar12 * 0x60;
      auVar23 = minps(*(undefined1 (*) [16])p_Var9,auVar1);
      *(undefined1 (*) [16])p_Var9 = auVar23;
      auVar23 = maxps(*(undefined1 (*) [16])(p_Var9 + 0x10),auVar24);
      *(undefined1 (*) [16])(p_Var9 + 0x10) = auVar23;
      uVar14 = (ulong)(~-(uint)((int)uVar20 < 0) & uVar20);
      p_Var9 = this + uVar14 * 0x60 + 0x20;
      auVar23 = minps(*(undefined1 (*) [16])p_Var9,auVar1);
      *(undefined1 (*) [16])p_Var9 = auVar23;
      auVar23 = maxps(*(undefined1 (*) [16])(p_Var9 + 0x10),auVar24);
      *(undefined1 (*) [16])(p_Var9 + 0x10) = auVar23;
      uVar3 = (ulong)(~-(uint)((int)uVar7 < 0) & uVar7);
      p_Var9 = this + uVar3 * 0x60 + 0x40;
      auVar23 = minps(*(undefined1 (*) [16])p_Var9,auVar1);
      *(undefined1 (*) [16])p_Var9 = auVar23;
      auVar23 = maxps(*(undefined1 (*) [16])(p_Var9 + 0x10),auVar24);
      *(undefined1 (*) [16])(p_Var9 + 0x10) = auVar23;
      *(int *)(this + uVar12 * 0x10 + 0xc00) = *(int *)(this + uVar12 * 0x10 + 0xc00) + 1;
      *(int *)(this + uVar14 * 0x10 + 0xc04) = *(int *)(this + uVar14 * 0x10 + 0xc04) + 1;
      *(int *)(this + uVar3 * 0x10 + 0xc08) = *(int *)(this + uVar3 * 0x10 + 0xc08) + 1;
      bVar17 = pauVar16 + (uVar15 - 2 >> 1) * 4 != pauVar11;
      pauVar11 = pauVar11 + 4;
    } while (bVar17);
    uVar14 = (uVar15 - 2 & 0xfffffffffffffffe) + 2;
    if (uVar15 <= uVar14) {
      return this;
    }
    pauVar16 = pauVar16 + uVar14 * 2;
  }
  auVar23 = pauVar16[1];
  auVar22 = *pauVar16;
  uVar7 = (int)*(undefined8 *)piVar2 - 1;
  uVar18 = (uint)(((auVar23._0_4_ + auVar22._0_4_) - (float)piVar2[4]) * (float)piVar2[8] + fVar6);
  uVar19 = (uint)(((auVar23._4_4_ + auVar22._4_4_) - (float)piVar2[5]) * (float)piVar2[9] + fVar6);
  uVar20 = (uint)(((auVar23._8_4_ + auVar22._8_4_) - (float)piVar2[6]) * (float)piVar2[10] + fVar6);
  uVar21 = -(uint)((int)uVar18 < (int)uVar7);
  uVar25 = -(uint)((int)uVar19 < (int)uVar7);
  uVar26 = -(uint)((int)uVar20 < (int)uVar7);
  uVar18 = uVar21 & uVar18 | ~uVar21 & uVar7;
  uVar19 = uVar25 & uVar19 | ~uVar25 & uVar7;
  uVar7 = uVar26 & uVar20 | ~uVar26 & uVar7;
  lVar10 = (long)(int)(~-(uint)((int)uVar18 < 0) & uVar18);
  p_Var9 = this + lVar10 * 0x60;
  *(int *)(this + lVar10 * 0x10 + 0xc00) = *(int *)(this + lVar10 * 0x10 + 0xc00) + 1;
  auVar24 = minps(*(undefined1 (*) [16])p_Var9,auVar22);
  *(undefined1 (*) [16])p_Var9 = auVar24;
  auVar24 = maxps(*(undefined1 (*) [16])(p_Var9 + 0x10),auVar23);
  *(undefined1 (*) [16])(p_Var9 + 0x10) = auVar24;
  lVar10 = (long)(int)(~-(uint)((int)uVar19 < 0) & uVar19);
  p_Var9 = this + lVar10 * 0x60 + 0x20;
  *(int *)(this + lVar10 * 0x10 + 0xc04) = *(int *)(this + lVar10 * 0x10 + 0xc04) + 1;
  auVar24 = minps(*(undefined1 (*) [16])p_Var9,auVar22);
  *(undefined1 (*) [16])p_Var9 = auVar24;
  auVar24 = maxps(*(undefined1 (*) [16])(p_Var9 + 0x10),auVar23);
  *(undefined1 (*) [16])(p_Var9 + 0x10) = auVar24;
  lVar10 = (long)(int)(~-(uint)((int)uVar7 < 0) & uVar7);
  p_Var9 = this + lVar10 * 0x60 + 0x40;
  *(int *)(this + lVar10 * 0x10 + 0xc08) = *(int *)(this + lVar10 * 0x10 + 0xc08) + 1;
  auVar22 = minps(*(undefined1 (*) [16])p_Var9,auVar22);
  *(undefined1 (*) [16])p_Var9 = auVar22;
  auVar23 = maxps(*(undefined1 (*) [16])(p_Var9 + 0x10),auVar23);
  *(undefined1 (*) [16])(p_Var9 + 0x10) = auVar23;
  return this;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  undefined8 *puVar32;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
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
  lVar22 = (long)param_2 - (long)param_1;
  if (0x600 < lVar22) {
    puVar32 = param_1 + 0xc;
    puVar30 = param_2;
    if (param_3 != 0) {
      do {
        uVar4 = *param_1;
        param_3 = param_3 + -1;
        uVar23 = (lVar22 >> 5) * -0x5555555555555555;
        uVar3 = *(undefined1 *)(param_1 + 1);
        uVar26 = param_1[0x17] - param_1[0x16];
        uVar5 = *(undefined4 *)(param_1 + 2);
        uVar6 = *(undefined4 *)((long)param_1 + 0x14);
        uVar7 = *(undefined4 *)(param_1 + 3);
        uVar8 = *(undefined4 *)((long)param_1 + 0x1c);
        uVar9 = *(undefined4 *)(param_1 + 4);
        uVar10 = *(undefined4 *)((long)param_1 + 0x24);
        uVar11 = *(undefined4 *)(param_1 + 5);
        uVar12 = *(undefined4 *)((long)param_1 + 0x2c);
        uVar13 = *(undefined4 *)(param_1 + 6);
        uVar14 = *(undefined4 *)((long)param_1 + 0x34);
        uVar15 = *(undefined4 *)(param_1 + 7);
        uVar16 = *(undefined4 *)((long)param_1 + 0x3c);
        lVar22 = param_1[10];
        lVar28 = param_1[0xb];
        uVar17 = *(undefined4 *)(param_1 + 8);
        uVar18 = *(undefined4 *)((long)param_1 + 0x44);
        uVar19 = *(undefined4 *)(param_1 + 9);
        uVar20 = *(undefined4 *)((long)param_1 + 0x4c);
        uVar31 = puVar30[-1] - puVar30[-2];
        puVar25 = param_1 + ((uVar23 & 0xfffffffffffffffe) + ((long)uVar23 >> 1)) * 4;
        uVar23 = puVar25[0xb] - puVar25[10];
        puVar24 = puVar30;
        param_2 = puVar32;
        if (uVar23 < uVar26) {
          if (uVar31 < uVar23) {
            *param_1 = *puVar25;
            *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar25 + 1);
            uVar21 = puVar25[3];
            param_1[2] = puVar25[2];
            param_1[3] = uVar21;
            uVar21 = puVar25[5];
            param_1[4] = puVar25[4];
            param_1[5] = uVar21;
            uVar21 = puVar25[7];
            param_1[6] = puVar25[6];
            param_1[7] = uVar21;
            uVar21 = puVar25[9];
            param_1[8] = puVar25[8];
            param_1[9] = uVar21;
            uVar21 = puVar25[0xb];
            param_1[10] = puVar25[10];
            param_1[0xb] = uVar21;
LAB_0010520c:
            *puVar25 = uVar4;
            *(undefined1 *)(puVar25 + 1) = uVar3;
            puVar25[10] = lVar22;
            puVar25[0xb] = lVar28;
            *(undefined4 *)(puVar25 + 2) = uVar5;
            *(undefined4 *)((long)puVar25 + 0x14) = uVar6;
            *(undefined4 *)(puVar25 + 3) = uVar7;
            *(undefined4 *)((long)puVar25 + 0x1c) = uVar8;
            *(undefined4 *)(puVar25 + 4) = uVar9;
            *(undefined4 *)((long)puVar25 + 0x24) = uVar10;
            *(undefined4 *)(puVar25 + 5) = uVar11;
            *(undefined4 *)((long)puVar25 + 0x2c) = uVar12;
            *(undefined4 *)(puVar25 + 6) = uVar13;
            *(undefined4 *)((long)puVar25 + 0x34) = uVar14;
            *(undefined4 *)(puVar25 + 7) = uVar15;
            *(undefined4 *)((long)puVar25 + 0x3c) = uVar16;
            *(undefined4 *)(puVar25 + 8) = uVar17;
            *(undefined4 *)((long)puVar25 + 0x44) = uVar18;
            *(undefined4 *)(puVar25 + 9) = uVar19;
            *(undefined4 *)((long)puVar25 + 0x4c) = uVar20;
            lVar29 = param_1[0x17];
            lVar27 = param_1[0x16];
            lVar28 = puVar30[-1];
            lVar22 = puVar30[-2];
          }
          else {
            if (uVar26 <= uVar31) {
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
              goto LAB_0010505e;
            }
LAB_00105246:
            *param_1 = puVar30[-0xc];
            *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar30 + -0xb);
            uVar21 = puVar30[-9];
            param_1[2] = puVar30[-10];
            param_1[3] = uVar21;
            uVar21 = puVar30[-7];
            param_1[4] = puVar30[-8];
            param_1[5] = uVar21;
            uVar21 = puVar30[-5];
            param_1[6] = puVar30[-6];
            param_1[7] = uVar21;
            uVar21 = puVar30[-3];
            param_1[8] = puVar30[-4];
            param_1[9] = uVar21;
            uVar21 = puVar30[-1];
            param_1[10] = puVar30[-2];
            param_1[0xb] = uVar21;
            *(undefined1 *)(puVar30 + -0xb) = uVar3;
            puVar30[-0xc] = uVar4;
            puVar30[-2] = lVar22;
            puVar30[-1] = lVar28;
            *(undefined4 *)(puVar30 + -10) = uVar5;
            *(undefined4 *)((long)puVar30 + -0x4c) = uVar6;
            *(undefined4 *)(puVar30 + -9) = uVar7;
            *(undefined4 *)((long)puVar30 + -0x44) = uVar8;
            *(undefined4 *)(puVar30 + -8) = uVar9;
            *(undefined4 *)((long)puVar30 + -0x3c) = uVar10;
            *(undefined4 *)(puVar30 + -7) = uVar11;
            *(undefined4 *)((long)puVar30 + -0x34) = uVar12;
            *(undefined4 *)(puVar30 + -6) = uVar13;
            *(undefined4 *)((long)puVar30 + -0x2c) = uVar14;
            *(undefined4 *)(puVar30 + -5) = uVar15;
            *(undefined4 *)((long)puVar30 + -0x24) = uVar16;
            *(undefined4 *)(puVar30 + -4) = uVar17;
            *(undefined4 *)((long)puVar30 + -0x1c) = uVar18;
            *(undefined4 *)(puVar30 + -3) = uVar19;
            *(undefined4 *)((long)puVar30 + -0x14) = uVar20;
            lVar27 = param_1[0x16];
            lVar29 = param_1[0x17];
          }
        }
        else {
          if (uVar26 <= uVar31) {
            if (uVar31 < uVar23) goto LAB_00105246;
            *param_1 = *puVar25;
            *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar25 + 1);
            uVar21 = puVar25[3];
            param_1[2] = puVar25[2];
            param_1[3] = uVar21;
            uVar21 = puVar25[5];
            param_1[4] = puVar25[4];
            param_1[5] = uVar21;
            uVar21 = puVar25[7];
            param_1[6] = puVar25[6];
            param_1[7] = uVar21;
            uVar21 = puVar25[9];
            param_1[8] = puVar25[8];
            param_1[9] = uVar21;
            uVar21 = puVar25[0xb];
            param_1[10] = puVar25[10];
            param_1[0xb] = uVar21;
            goto LAB_0010520c;
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
LAB_0010505e:
          param_1[0xc] = uVar4;
          *(undefined1 *)(param_1 + 0xd) = uVar3;
          param_1[0x16] = lVar22;
          param_1[0x17] = lVar28;
          *(undefined4 *)(param_1 + 0xe) = uVar5;
          *(undefined4 *)((long)param_1 + 0x74) = uVar6;
          *(undefined4 *)(param_1 + 0xf) = uVar7;
          *(undefined4 *)((long)param_1 + 0x7c) = uVar8;
          *(undefined4 *)(param_1 + 0x10) = uVar9;
          *(undefined4 *)((long)param_1 + 0x84) = uVar10;
          *(undefined4 *)(param_1 + 0x11) = uVar11;
          *(undefined4 *)((long)param_1 + 0x8c) = uVar12;
          *(undefined4 *)(param_1 + 0x12) = uVar13;
          *(undefined4 *)((long)param_1 + 0x94) = uVar14;
          *(undefined4 *)(param_1 + 0x13) = uVar15;
          *(undefined4 *)((long)param_1 + 0x9c) = uVar16;
          *(undefined4 *)(param_1 + 0x14) = uVar17;
          *(undefined4 *)((long)param_1 + 0xa4) = uVar18;
          *(undefined4 *)(param_1 + 0x15) = uVar19;
          *(undefined4 *)((long)param_1 + 0xac) = uVar20;
          lVar27 = lVar22;
          lVar29 = lVar28;
          lVar28 = puVar30[-1];
          lVar22 = puVar30[-2];
        }
        while( true ) {
          uVar23 = lVar29 - lVar27;
          while ((ulong)(param_1[0xb] - param_1[10]) < uVar23) {
            lVar29 = param_2[0x17];
            lVar27 = param_2[0x16];
            param_2 = param_2 + 0xc;
            uVar23 = lVar29 - lVar27;
          }
          uVar23 = lVar28 - lVar22;
          puVar25 = puVar24;
          while (puVar24 = puVar25 + -0xc, uVar23 < (ulong)(param_1[0xb] - param_1[10])) {
            uVar23 = puVar25[-0xd] - puVar25[-0xe];
            puVar25 = puVar24;
          }
          if (puVar24 <= param_2) break;
          uVar4 = *param_2;
          uVar3 = *(undefined1 *)(param_2 + 1);
          uVar5 = *(undefined4 *)(param_2 + 2);
          uVar6 = *(undefined4 *)((long)param_2 + 0x14);
          uVar7 = *(undefined4 *)(param_2 + 3);
          uVar8 = *(undefined4 *)((long)param_2 + 0x1c);
          uVar9 = *(undefined4 *)(param_2 + 4);
          uVar10 = *(undefined4 *)((long)param_2 + 0x24);
          uVar11 = *(undefined4 *)(param_2 + 5);
          uVar12 = *(undefined4 *)((long)param_2 + 0x2c);
          uVar13 = *(undefined4 *)(param_2 + 6);
          uVar14 = *(undefined4 *)((long)param_2 + 0x34);
          uVar15 = *(undefined4 *)(param_2 + 7);
          uVar16 = *(undefined4 *)((long)param_2 + 0x3c);
          *param_2 = *puVar24;
          uVar17 = *(undefined4 *)(param_2 + 8);
          uVar18 = *(undefined4 *)((long)param_2 + 0x44);
          uVar19 = *(undefined4 *)(param_2 + 9);
          uVar20 = *(undefined4 *)((long)param_2 + 0x4c);
          *(undefined1 *)(param_2 + 1) = *(undefined1 *)(puVar25 + -0xb);
          uVar21 = puVar25[-9];
          param_2[2] = puVar25[-10];
          param_2[3] = uVar21;
          uVar21 = puVar25[-7];
          param_2[4] = puVar25[-8];
          param_2[5] = uVar21;
          uVar21 = puVar25[-5];
          param_2[6] = puVar25[-6];
          param_2[7] = uVar21;
          uVar21 = puVar25[-3];
          param_2[8] = puVar25[-4];
          param_2[9] = uVar21;
          uVar21 = puVar25[-1];
          param_2[10] = puVar25[-2];
          param_2[0xb] = uVar21;
          *puVar24 = uVar4;
          *(undefined1 *)(puVar25 + -0xb) = uVar3;
          puVar25[-2] = lVar27;
          puVar25[-1] = lVar29;
          *(undefined4 *)(puVar25 + -10) = uVar5;
          *(undefined4 *)((long)puVar25 + -0x4c) = uVar6;
          *(undefined4 *)(puVar25 + -9) = uVar7;
          *(undefined4 *)((long)puVar25 + -0x44) = uVar8;
          *(undefined4 *)(puVar25 + -8) = uVar9;
          *(undefined4 *)((long)puVar25 + -0x3c) = uVar10;
          *(undefined4 *)(puVar25 + -7) = uVar11;
          *(undefined4 *)((long)puVar25 + -0x34) = uVar12;
          *(undefined4 *)(puVar25 + -6) = uVar13;
          *(undefined4 *)((long)puVar25 + -0x2c) = uVar14;
          *(undefined4 *)(puVar25 + -5) = uVar15;
          *(undefined4 *)((long)puVar25 + -0x24) = uVar16;
          *(undefined4 *)(puVar25 + -4) = uVar17;
          *(undefined4 *)((long)puVar25 + -0x1c) = uVar18;
          *(undefined4 *)(puVar25 + -3) = uVar19;
          *(undefined4 *)((long)puVar25 + -0x14) = uVar20;
          plVar1 = param_2 + 0x16;
          plVar2 = param_2 + 0x17;
          param_2 = param_2 + 0xc;
          lVar27 = *plVar1;
          lVar29 = *plVar2;
          lVar28 = puVar25[-0xd];
          lVar22 = puVar25[-0xe];
        }
        __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (param_2,puVar30,param_3);
        lVar22 = (long)param_2 - (long)param_1;
        if (lVar22 < 0x601) goto LAB_00105438;
        puVar30 = param_2;
      } while (param_3 != 0);
    }
    lVar22 = (lVar22 >> 5) * -0x5555555555555555;
    uVar23 = lVar22 - 2;
    lVar28 = (long)uVar23 >> 1;
    puVar32 = param_1 + ((uVar23 & 0xfffffffffffffffe) + lVar28) * 4;
    while( true ) {
      local_88 = puVar32[2];
      uStack_80 = puVar32[3];
      local_98 = *puVar32;
      local_90 = *(undefined1 *)(puVar32 + 1);
      local_48 = puVar32[10];
      local_40 = puVar32[0xb];
      local_68 = *(undefined4 *)(puVar32 + 6);
      uStack_64 = *(undefined4 *)((long)puVar32 + 0x34);
      uStack_60 = *(undefined4 *)(puVar32 + 7);
      uStack_5c = *(undefined4 *)((long)puVar32 + 0x3c);
      local_78 = puVar32[4];
      uStack_70 = puVar32[5];
      local_58 = *(undefined4 *)(puVar32 + 8);
      uStack_54 = *(undefined4 *)((long)puVar32 + 0x44);
      uStack_50 = *(undefined4 *)(puVar32 + 9);
      uStack_4c = *(undefined4 *)((long)puVar32 + 0x4c);
      __adjust_heap<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (param_1,lVar28,lVar22,&local_98);
      if (lVar28 == 0) break;
      lVar28 = lVar28 + -1;
      puVar32 = puVar32 + -0xc;
    }
    do {
      local_98 = param_2[-0xc];
      puVar32 = param_2 + -0xc;
      local_90 = *(undefined1 *)(param_2 + -0xb);
      local_88 = param_2[-10];
      uStack_80 = param_2[-9];
      local_48 = param_2[-2];
      local_78 = param_2[-8];
      uStack_70 = param_2[-7];
      *puVar32 = *param_1;
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
                (param_1,0,((long)puVar32 - (long)param_1 >> 5) * -0x5555555555555555,&local_98);
      param_2 = puVar32;
    } while (0x60 < (long)puVar32 - (long)param_1);
  }
LAB_00105438:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
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
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef_const&)#1},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)#3},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)#4}>
::
partition(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>&)
::{lambda(unsigned_long)#1}::operator()(_lambda_unsigned_long__1_ *this,ulong param_1)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long *plVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  uint *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  ulong uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  int iVar19;
  long lVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  undefined8 uStack_30;
  
  plVar5 = *(long **)this;
  auVar34._0_8_ = CONCAT44(_LC2,_LC2);
  auVar34._8_4_ = _LC2;
  auVar34._12_4_ = _LC2;
  auVar36._8_4_ = _LC2;
  auVar36._0_8_ = auVar34._0_8_;
  auVar36._12_4_ = _LC2;
  auVar35._0_8_ = CONCAT44(_LC4,_LC4);
  auVar35._8_4_ = _LC4;
  auVar35._12_4_ = _LC4;
  plVar6 = (long *)plVar5[2];
  lVar20 = *plVar5;
  auVar21._8_4_ = _LC4;
  auVar21._0_8_ = auVar35._0_8_;
  auVar21._12_4_ = _LC4;
  auVar37._8_4_ = _LC4;
  auVar37._0_8_ = auVar35._0_8_;
  auVar37._12_4_ = _LC4;
  uVar18 = plVar5[1] * param_1;
  uVar14 = uVar18 / (ulong)plVar5[6];
  pauVar17 = (undefined1 (*) [16])(uVar14 * 0x20 + lVar20);
  pauVar15 = (undefined1 (*) [16])
             (lVar20 + -0x20 + ((plVar5[1] + uVar18) / (ulong)plVar5[6]) * 0x20);
  uVar26 = _LC4;
  uVar29 = _LC4;
  uVar30 = _LC4;
  uVar31 = _LC4;
  local_48 = auVar34;
  _local_38 = auVar34;
  do {
    auVar33 = _local_38;
    if (pauVar15 < pauVar17) {
LAB_00105605:
      *(ulong *)(*(long *)this + 0x40 + param_1 * 8) = uVar14;
      *(ulong *)(*(long *)this + 0x280 + param_1 * 8) = ((long)pauVar17 - lVar20 >> 5) - uVar14;
      lVar20 = (param_1 + 0x33) * 0x40;
      pauVar15 = (undefined1 (*) [16])(*(long *)this + lVar20);
      pauVar15[2] = auVar21;
      *pauVar15 = auVar37;
      pauVar15[1] = auVar36;
      *(undefined8 *)pauVar15[3] = local_48._0_8_;
      *(undefined8 *)(pauVar15[3] + 8) = local_48._8_8_;
      puVar1 = (undefined4 *)(*(long *)this + 0x1000 + lVar20);
      *puVar1 = uVar26;
      puVar1[1] = uVar29;
      puVar1[2] = uVar30;
      puVar1[3] = uVar31;
      *(undefined1 (*) [8])(puVar1 + 4) = local_38;
      *(undefined8 *)(puVar1 + 6) = uStack_30;
      *(undefined1 (*) [16])(puVar1 + 8) = auVar35;
      *(undefined1 (*) [16])(puVar1 + 0xc) = auVar34;
      return;
    }
    auVar2 = pauVar17[1];
    auVar3 = *pauVar17;
    lVar7 = *plVar6;
    fVar22 = auVar2._0_4_ + auVar3._0_4_;
    fVar23 = auVar2._4_4_ + auVar3._4_4_;
    fVar24 = auVar2._8_4_ + auVar3._8_4_;
    fVar25 = auVar2._12_4_ + auVar3._12_4_;
    piVar8 = (int *)plVar6[1];
    puVar9 = (uint *)plVar6[2];
    auVar28._0_4_ =
         -(uint)((int)((fVar22 - *(float *)(lVar7 + 0x20)) * *(float *)(lVar7 + 0x30) + _LC26) <
                *piVar8) & *puVar9;
    auVar28._4_4_ =
         -(uint)((int)((fVar23 - *(float *)(lVar7 + 0x24)) * *(float *)(lVar7 + 0x34) +
                      _UNK_00111ce4) < piVar8[1]) & puVar9[1];
    auVar28._8_4_ =
         -(uint)((int)((fVar24 - *(float *)(lVar7 + 0x28)) * *(float *)(lVar7 + 0x38) +
                      _UNK_00111ce8) < piVar8[2]) & puVar9[2];
    auVar28._12_4_ =
         -(uint)((int)((fVar25 - *(float *)(lVar7 + 0x2c)) * *(float *)(lVar7 + 0x3c) +
                      _UNK_00111cec) < piVar8[3]) & puVar9[3];
    iVar19 = movmskps((int)puVar9,auVar28);
    if (iVar19 == 0) {
      auVar32._4_4_ = uVar29;
      auVar32._0_4_ = uVar26;
      auVar32._8_4_ = uVar30;
      auVar32._12_4_ = uVar31;
      local_38._4_4_ = fVar23;
      local_38._0_4_ = fVar22;
      uStack_30._0_4_ = fVar24;
      uStack_30._4_4_ = fVar25;
      pauVar16 = pauVar15;
      while( true ) {
        auVar28 = pauVar16[1];
        auVar4 = *pauVar16;
        pauVar15 = pauVar16 + -2;
        fVar22 = auVar28._0_4_ + auVar4._0_4_;
        fVar23 = auVar28._4_4_ + auVar4._4_4_;
        fVar24 = auVar28._8_4_ + auVar4._8_4_;
        fVar25 = auVar28._12_4_ + auVar4._12_4_;
        auVar27._0_4_ =
             -(uint)((int)((fVar22 - *(float *)(lVar7 + 0x20)) * *(float *)(lVar7 + 0x30) + _LC26) <
                    *piVar8) & *puVar9;
        auVar27._4_4_ =
             -(uint)((int)((fVar23 - *(float *)(lVar7 + 0x24)) * *(float *)(lVar7 + 0x34) +
                          _UNK_00111ce4) < piVar8[1]) & puVar9[1];
        auVar27._8_4_ =
             -(uint)((int)((fVar24 - *(float *)(lVar7 + 0x28)) * *(float *)(lVar7 + 0x38) +
                          _UNK_00111ce8) < piVar8[2]) & puVar9[2];
        auVar27._12_4_ =
             -(uint)((int)((fVar25 - *(float *)(lVar7 + 0x2c)) * *(float *)(lVar7 + 0x3c) +
                          _UNK_00111cec) < piVar8[3]) & puVar9[3];
        iVar19 = movmskps(0,auVar27);
        if (iVar19 != 0) break;
        auVar32 = minps(auVar32,auVar4);
        auVar33 = maxps(auVar33,auVar28);
        auVar11._4_4_ = fVar23;
        auVar11._0_4_ = fVar22;
        auVar11._8_4_ = fVar24;
        auVar11._12_4_ = fVar25;
        auVar35 = minps(auVar35,auVar11);
        auVar12._4_4_ = fVar23;
        auVar12._0_4_ = fVar22;
        auVar12._8_4_ = fVar24;
        auVar12._12_4_ = fVar25;
        auVar34 = maxps(auVar34,auVar12);
        pauVar16 = pauVar15;
        if (pauVar15 < pauVar17) {
          uVar26 = auVar32._0_4_;
          uVar29 = auVar32._4_4_;
          uVar30 = auVar32._8_4_;
          uVar31 = auVar32._12_4_;
          _local_38 = auVar33;
          goto LAB_00105605;
        }
      }
      *pauVar17 = auVar4;
      auVar37 = minps(auVar37,auVar4);
      auVar4._4_4_ = fVar23;
      auVar4._0_4_ = fVar22;
      auVar4._8_4_ = fVar24;
      auVar4._12_4_ = fVar25;
      auVar21 = minps(auVar21,auVar4);
      auVar10._4_4_ = fVar23;
      auVar10._0_4_ = fVar22;
      auVar10._8_4_ = fVar24;
      auVar10._12_4_ = fVar25;
      local_48 = maxps(local_48,auVar10);
      uVar13 = *(undefined8 *)(pauVar16[1] + 8);
      auVar36 = maxps(auVar36,auVar28);
      auVar28 = minps(auVar32,auVar3);
      auVar33 = maxps(auVar33,auVar2);
      *(undefined8 *)pauVar17[1] = *(undefined8 *)pauVar16[1];
      *(undefined8 *)(pauVar17[1] + 8) = uVar13;
      auVar35 = minps(auVar35,_local_38);
      auVar34 = maxps(auVar34,_local_38);
      uVar26 = auVar28._0_4_;
      uVar29 = auVar28._4_4_;
      uVar30 = auVar28._8_4_;
      uVar31 = auVar28._12_4_;
      *pauVar16 = auVar3;
      pauVar16[1] = auVar2;
      _local_38 = auVar33;
    }
    else {
      auVar37 = minps(auVar37,auVar3);
      auVar36 = maxps(auVar36,auVar2);
      auVar33._4_4_ = fVar23;
      auVar33._0_4_ = fVar22;
      auVar33._8_4_ = fVar24;
      auVar33._12_4_ = fVar25;
      auVar21 = minps(auVar21,auVar33);
      auVar2._4_4_ = fVar23;
      auVar2._0_4_ = fVar22;
      auVar2._8_4_ = fVar24;
      auVar2._12_4_ = fVar25;
      local_48 = maxps(local_48,auVar2);
    }
    pauVar17 = pauVar17 + 2;
  } while( true );
}



/* embree::parallel_partition_task<embree::PrimRef, embree::CentGeom<embree::BBox<embree::Vec3fa> >,
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
   embree::CentGeom<embree::BBox<embree::Vec3fa> >&)::{lambda(unsigned
   long)#2}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::
parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef_const&)#1},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)#3},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)#4}>
::
partition(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>&)
::{lambda(unsigned_long)#2}::operator()(_lambda_unsigned_long__2_ *this,ulong param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  
  plVar1 = *(long **)(this + 8);
  lVar17 = plVar1[0x98];
  uVar12 = param_1 * **(long **)this;
  uVar16 = plVar1[0x99] - lVar17;
  uVar8 = uVar12 / (ulong)plVar1[6];
  uVar14 = uVar8;
  if (uVar8 < uVar16) {
    plVar11 = plVar1 + 0x98;
  }
  else {
    plVar21 = plVar1 + 0x9a;
    do {
      plVar11 = plVar21;
      lVar17 = *plVar11;
      uVar14 = uVar14 - uVar16;
      uVar16 = plVar11[1] - lVar17;
      plVar21 = plVar11 + 2;
    } while (uVar16 <= uVar14);
  }
  lVar19 = plVar1[0x118];
  uVar15 = plVar1[0x119] - lVar19;
  uVar13 = uVar8;
  if (uVar8 < uVar15) {
    plVar21 = plVar1 + 0x118;
  }
  else {
    plVar7 = plVar1 + 0x11a;
    do {
      plVar21 = plVar7;
      lVar19 = *plVar21;
      uVar13 = uVar13 - uVar15;
      uVar15 = plVar21[1] - lVar19;
      plVar7 = plVar21 + 2;
    } while (uVar15 <= uVar13);
  }
  uVar16 = uVar16 - uVar14;
  uVar8 = (**(long **)this + uVar12) / (ulong)plVar1[6] - uVar8;
  uVar15 = uVar15 - uVar13;
  puVar18 = (undefined8 *)((lVar17 + uVar14) * 0x20 + *plVar1);
  puVar20 = (undefined8 *)((lVar19 + uVar13) * 0x20 + *plVar1);
  uVar14 = uVar8;
  if (uVar16 <= uVar8) {
    uVar14 = uVar16;
  }
  if (uVar15 < uVar14) {
    uVar14 = uVar15;
  }
  if (uVar8 == 0) {
    return;
  }
  do {
    if (uVar15 == 0) {
      uVar15 = plVar21[3] - plVar21[2];
      puVar20 = (undefined8 *)(plVar21[2] * 0x20 + *plVar1);
      uVar14 = uVar8;
      if (uVar15 <= uVar8) {
        uVar14 = uVar15;
      }
      if (uVar16 < uVar14) {
        uVar14 = uVar16;
      }
      plVar21 = plVar21 + 2;
    }
    uVar8 = uVar8 - uVar14;
    uVar16 = uVar16 - uVar14;
    uVar15 = uVar15 - uVar14;
    puVar9 = puVar18;
    puVar10 = puVar20;
    uVar12 = uVar14;
    if (uVar14 != 0) {
      do {
        uVar2 = puVar10[1];
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        *puVar9 = *puVar10;
        puVar9[1] = uVar2;
        uVar2 = puVar10[3];
        puVar9[2] = puVar10[2];
        puVar9[3] = uVar2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar10[2] = uVar5;
        puVar10[3] = uVar6;
        uVar12 = uVar12 - 1;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar20 = puVar20 + uVar14 * 4;
      puVar18 = puVar18 + uVar14 * 4;
      if (uVar8 == 0) {
        return;
      }
    }
    if (uVar16 == 0) {
      uVar16 = plVar11[3] - plVar11[2];
      puVar18 = (undefined8 *)(plVar11[2] * 0x20 + *plVar1);
      uVar14 = uVar15;
      if (uVar8 <= uVar15) {
        uVar14 = uVar8;
      }
      if (uVar16 < uVar14) {
        uVar14 = uVar16;
      }
      plVar11 = plVar11 + 2;
    }
    else {
      uVar14 = 0;
    }
  } while( true );
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
  _lambda_embree__range<unsigned_long>const___1_ *p_Var1;
  undefined4 *puVar2;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  _lambda_embree__range<unsigned_long>const___1_ *p_Var14;
  long lVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  byte bVar17;
  _lambda_embree__range<unsigned_long>const___1_ local_e80 [3072];
  _lambda_embree__range<unsigned_long>const___1_ local_280 [504];
  undefined8 local_88;
  long local_48;
  
  bVar17 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var14 = local_e80;
  bin_serial_or_parallel<true,embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>,embree::sse2::BinMapping<32ul>,embree::PrimRef>(embree::sse2::BinInfoT<32ul,embree::PrimRef,embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const*,unsigned_long,unsigned_long,unsigned_long,embree::sse2::BinMapping<32ul>const&)
  ::{lambda(embree::range<unsigned_long>const&)#1}::operator()(p_Var14,*(range **)(this + 0x20));
  lVar15 = param_1 * 0xe00 + *(long *)(*(long *)(this + 0x18) + 0x1c00);
  lVar13 = lVar15;
  do {
    lVar11 = 0;
    do {
      p_Var1 = p_Var14 + lVar11;
      uVar4 = *(undefined4 *)(p_Var1 + 4);
      uVar5 = *(undefined4 *)(p_Var1 + 8);
      uVar6 = *(undefined4 *)(p_Var1 + 0xc);
      p_Var3 = p_Var14 + lVar11 + 0x10;
      uVar7 = *(undefined4 *)p_Var3;
      uVar8 = *(undefined4 *)(p_Var3 + 4);
      uVar9 = *(undefined4 *)(p_Var3 + 8);
      uVar10 = *(undefined4 *)(p_Var3 + 0xc);
      puVar2 = (undefined4 *)(lVar13 + lVar11);
      *puVar2 = *(undefined4 *)p_Var1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar2 = (undefined4 *)(lVar13 + 0x10 + lVar11);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != 0x60);
    p_Var14 = p_Var14 + 0x60;
    lVar13 = lVar13 + 0x60;
  } while (p_Var14 != local_280);
  *(undefined8 *)(lVar15 + 0xc00) = *(undefined8 *)p_Var14;
  *(undefined8 *)(lVar15 + 0xdf8) = local_88;
  puVar16 = (undefined8 *)(lVar15 + 0xc08U & 0xfffffffffffffff8);
  lVar13 = (lVar15 + 0xc00) - (long)puVar16;
  p_Var14 = p_Var14 + -lVar13;
  for (uVar12 = (ulong)((int)lVar13 + 0x200U >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar16 = *(undefined8 *)p_Var14;
    p_Var14 = p_Var14 + ((ulong)bVar17 * -2 + 1) * 8;
    puVar16 = puVar16 + (ulong)bVar17 * -2 + 1;
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00105e55) */
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
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  long lVar16;
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
  lVar16 = embree::TaskScheduler::allocThreadIndex();
  pTVar17 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar17 = lVar16;
  pTVar20 = pTVar17 + 0x40;
  pTVar18 = pTVar20;
  do {
    *(undefined4 *)pTVar18 = 0;
    pTVar18 = pTVar18 + 0x40;
  } while (pTVar17 + 0x40040 != pTVar18);
  *(undefined8 *)(pTVar17 + 0x40040) = 0;
  *(undefined8 *)(pTVar17 + 0x40080) = 0;
  *(undefined8 *)(pTVar17 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar17 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar17 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar16 * 8) = pTVar17;
  UNLOCK();
  local_48 = pTVar17;
  pTVar18 = (Thread *)embree::TaskScheduler::swapThread(pTVar17);
  if (*(ulong *)(pTVar17 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar17 + 0xc00c0);
    uVar3 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar17 + 0xc00c0) = uVar3;
      pTVar4 = pTVar17 + uVar3 + 0x40080;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00111bf8;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      *(undefined8 *)(pTVar4 + 0x38) = uVar6;
      *(undefined8 *)(pTVar4 + 0x28) = uVar13;
      *(undefined8 *)(pTVar4 + 0x30) = uVar14;
      lVar19 = *(long *)(pTVar17 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar17 + 0xc0100);
      pTVar17[lVar19 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar17 + lVar19 + 0x44) = 1;
      *(Thread **)(pTVar17 + lVar19 + 0x50) = pTVar4;
      *(long *)(pTVar17 + lVar19 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar17 + lVar19 + 0x60) = param_2;
      *(long *)(pTVar17 + lVar19 + 0x68) = lVar5;
      *(ulong *)(pTVar17 + lVar19 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar20 + lVar19) == 0) {
        *(undefined4 *)(pTVar20 + lVar19) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar17 + 0x40080) = *(long *)(pTVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar17 + 0x40080) - 1U <= *(ulong *)(pTVar17 + 0x40040)) {
        LOCK();
        *(long *)(pTVar17 + 0x40040) = *(long *)(pTVar17 + 0x40080) + -1;
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
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar15 = embree::TaskScheduler::TaskQueue::execute_local(pTVar20,(Task *)pTVar17);
      } while (cVar15 != '\0');
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
      *(undefined8 *)(lVar16 * 8 + *(long *)(this + 0x10)) = 0;
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
        if (pTVar17 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar17 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar17);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar20;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
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
   embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  uStack_40 = *(undefined8 *)param_4;
  uStack_38 = *(undefined8 *)(param_4 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)(param_4 + 0x10);
  local_58 = param_2;
  uStack_50 = param_1;
  local_48 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSpli___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_58,param_5,param_2 - param_1,true);
LAB_00106107:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x40 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40080 + uVar2);
      *puVar3 = &PTR_execute_00111bf8;
      puVar3[1] = local_58;
      puVar3[2] = uStack_50;
      puVar3[7] = local_28;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      puVar3[5] = uStack_38;
      puVar3[6] = uStack_30;
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
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
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
      goto LAB_00106107;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Removing unreachable block (ram,0x00106535) */
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
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  long lVar16;
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
  lVar16 = embree::TaskScheduler::allocThreadIndex();
  pTVar17 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar17 = lVar16;
  pTVar20 = pTVar17 + 0x40;
  pTVar18 = pTVar20;
  do {
    *(undefined4 *)pTVar18 = 0;
    pTVar18 = pTVar18 + 0x40;
  } while (pTVar17 + 0x40040 != pTVar18);
  *(undefined8 *)(pTVar17 + 0x40040) = 0;
  *(undefined8 *)(pTVar17 + 0x40080) = 0;
  *(undefined8 *)(pTVar17 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar17 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar17 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar16 * 8) = pTVar17;
  UNLOCK();
  local_48 = pTVar17;
  pTVar18 = (Thread *)embree::TaskScheduler::swapThread(pTVar17);
  if (*(ulong *)(pTVar17 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar17 + 0xc00c0);
    uVar3 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar17 + 0xc00c0) = uVar3;
      pTVar4 = pTVar17 + uVar3 + 0x40080;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00111c10;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      *(undefined8 *)(pTVar4 + 0x38) = uVar6;
      *(undefined8 *)(pTVar4 + 0x28) = uVar13;
      *(undefined8 *)(pTVar4 + 0x30) = uVar14;
      lVar19 = *(long *)(pTVar17 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar17 + 0xc0100);
      pTVar17[lVar19 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar17 + lVar19 + 0x44) = 1;
      *(Thread **)(pTVar17 + lVar19 + 0x50) = pTVar4;
      *(long *)(pTVar17 + lVar19 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar17 + lVar19 + 0x60) = param_2;
      *(long *)(pTVar17 + lVar19 + 0x68) = lVar5;
      *(ulong *)(pTVar17 + lVar19 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar20 + lVar19) == 0) {
        *(undefined4 *)(pTVar20 + lVar19) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar17 + 0x40080) = *(long *)(pTVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar17 + 0x40080) - 1U <= *(ulong *)(pTVar17 + 0x40040)) {
        LOCK();
        *(long *)(pTVar17 + 0x40040) = *(long *)(pTVar17 + 0x40080) + -1;
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
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar15 = embree::TaskScheduler::TaskQueue::execute_local(pTVar20,(Task *)pTVar17);
      } while (cVar15 != '\0');
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
      *(undefined8 *)(lVar16 * 8 + *(long *)(this + 0x10)) = 0;
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
        if (pTVar17 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar17 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar17);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar20;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
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
   embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  uStack_40 = *(undefined8 *)param_4;
  uStack_38 = *(undefined8 *)(param_4 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)(param_4 + 0x10);
  local_58 = param_2;
  uStack_50 = param_1;
  local_48 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::Defau___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_58,param_5,param_2 - param_1,true);
LAB_001067e7:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x40 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40080 + uVar2);
      *puVar3 = &PTR_execute_00111c10;
      puVar3[1] = local_58;
      puVar3[2] = uStack_50;
      puVar3[7] = local_28;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      puVar3[5] = uStack_38;
      puVar3[6] = uStack_30;
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
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
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
      goto LAB_001067e7;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Removing unreachable block (ram,0x00106c15) */
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
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  long lVar16;
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
  lVar16 = embree::TaskScheduler::allocThreadIndex();
  pTVar17 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar17 = lVar16;
  pTVar20 = pTVar17 + 0x40;
  pTVar18 = pTVar20;
  do {
    *(undefined4 *)pTVar18 = 0;
    pTVar18 = pTVar18 + 0x40;
  } while (pTVar17 + 0x40040 != pTVar18);
  *(undefined8 *)(pTVar17 + 0x40040) = 0;
  *(undefined8 *)(pTVar17 + 0x40080) = 0;
  *(undefined8 *)(pTVar17 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar17 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar17 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar16 * 8) = pTVar17;
  UNLOCK();
  local_48 = pTVar17;
  pTVar18 = (Thread *)embree::TaskScheduler::swapThread(pTVar17);
  if (*(ulong *)(pTVar17 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar17 + 0xc00c0);
    uVar3 = lVar5 + 0x40 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar17 + 0xc00c0) = uVar3;
      pTVar4 = pTVar17 + uVar3 + 0x40080;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00111c28;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      *(undefined8 *)(pTVar4 + 0x38) = uVar6;
      *(undefined8 *)(pTVar4 + 0x28) = uVar13;
      *(undefined8 *)(pTVar4 + 0x30) = uVar14;
      lVar19 = *(long *)(pTVar17 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar17 + 0xc0100);
      pTVar17[lVar19 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar17 + lVar19 + 0x44) = 1;
      *(Thread **)(pTVar17 + lVar19 + 0x50) = pTVar4;
      *(long *)(pTVar17 + lVar19 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar17 + lVar19 + 0x60) = param_2;
      *(long *)(pTVar17 + lVar19 + 0x68) = lVar5;
      *(ulong *)(pTVar17 + lVar19 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar20 + lVar19) == 0) {
        *(undefined4 *)(pTVar20 + lVar19) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar17 + 0x40080) = *(long *)(pTVar17 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar17 + 0x40080) - 1U <= *(ulong *)(pTVar17 + 0x40040)) {
        LOCK();
        *(long *)(pTVar17 + 0x40040) = *(long *)(pTVar17 + 0x40080) + -1;
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
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar15 = embree::TaskScheduler::TaskQueue::execute_local(pTVar20,(Task *)pTVar17);
      } while (cVar15 != '\0');
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
      *(undefined8 *)(lVar16 * 8 + *(long *)(this + 0x10)) = 0;
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
        if (pTVar17 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar17 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar17);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar20;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
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
   embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  uStack_40 = *(undefined8 *)param_4;
  uStack_38 = *(undefined8 *)(param_4 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)(param_4 + 0x10);
  local_58 = param_2;
  uStack_50 = param_1;
  local_48 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimI___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_58,param_5,param_2 - param_1,true);
LAB_00106ec7:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x40 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40080 + uVar2);
      *puVar3 = &PTR_execute_00111c28;
      puVar3[1] = local_58;
      puVar3[2] = uStack_50;
      puVar3[7] = local_28;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      puVar3[5] = uStack_38;
      puVar3[6] = uStack_30;
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
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
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
      goto LAB_00106ec7;
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
        if (param_3 <= param_2) goto LAB_0010703e;
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
LAB_0010703e:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010743d) */
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
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
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
  pTVar18 = pTVar15 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar16 = pTVar16 + 0x40;
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
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar15);
  if (*(ulong *)(pTVar15 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar15 + 0xc00c0);
    uVar3 = lVar5 + 0x30 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar15 + 0xc00c0) = uVar3;
      pTVar4 = pTVar15 + uVar3 + 0x40090;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar4 = &PTR_execute_00111c40;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x28) = uVar6;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      lVar17 = *(long *)(pTVar15 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar15 + 0xc0100);
      pTVar15[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar15 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar15 + lVar17 + 0x50) = pTVar4;
      *(long *)(pTVar15 + lVar17 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar15 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar15 + lVar17 + 0x68) = lVar5;
      *(ulong *)(pTVar15 + lVar17 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
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
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar13 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar15);
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
        if (pTVar15 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar15 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar15);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar18;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
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
   embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embr___mbree::Vec3fa>>&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)param_4;
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_48,param_5,param_2 - param_1,true);
LAB_001076d3:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_00111c40;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = uStack_30;
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
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
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
      goto LAB_001076d3;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
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
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar1) {
    uVar2 = *(long *)(this + 8) + uVar1 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embr___mbree::Vec3fa>>&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar1,uVar2,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embr___mbree::Vec3fa>>&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar2,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef_const&)#1},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)#3},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)#4}>
  ::
  partition(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>&)
  ::{lambda(unsigned_long)#1}::operator()(*(_lambda_unsigned_long__1_ **)(this + 0x20),uVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00107b7d) */
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
  Thread *pTVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
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
  pTVar18 = pTVar15 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar16 = pTVar16 + 0x40;
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
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar15);
  if (*(ulong *)(pTVar15 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar15 + 0xc00c0);
    uVar3 = lVar5 + 0x30 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar15 + 0xc00c0) = uVar3;
      pTVar4 = pTVar15 + uVar3 + 0x40090;
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar4 = &PTR_execute_00111c58;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar4 + 8) = uVar9;
      *(undefined8 *)(pTVar4 + 0x10) = uVar10;
      *(undefined8 *)(pTVar4 + 0x28) = uVar6;
      *(undefined8 *)(pTVar4 + 0x18) = uVar11;
      *(undefined8 *)(pTVar4 + 0x20) = uVar12;
      lVar17 = *(long *)(pTVar15 + 0x40080) * 0x40;
      lVar7 = *(long *)(pTVar15 + 0xc0100);
      pTVar15[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar15 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar15 + lVar17 + 0x50) = pTVar4;
      *(long *)(pTVar15 + lVar17 + 0x58) = lVar7;
      *(TaskGroupContext **)(pTVar15 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar15 + lVar17 + 0x68) = lVar5;
      *(ulong *)(pTVar15 + lVar17 + 0x70) = param_3;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
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
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar13 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar15);
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
        if (pTVar15 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar8 = *(long **)(pTVar15 + 0xc0108);
          if (plVar8 != (long *)0x0) {
            if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar8 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar15);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar18;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
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
   embree::TaskScheduler::TaskGroupContext*) */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embr___mbree::Vec3fa>>&)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  undefined8 uStack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = *(undefined8 *)param_4;
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embre___mbree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_48,param_5,param_2 - param_1,true);
LAB_00107e13:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_00111c58;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = uStack_30;
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
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
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
      goto LAB_00107e13;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
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
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar1) {
    uVar2 = *(long *)(this + 8) + uVar1 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embr___mbree::Vec3fa>>&)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar1,uVar2,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embr___mbree::Vec3fa>>&)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar2,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::PrimRef_const&)#1},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)#3},embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::{lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)#4}>
  ::
  partition(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>&)
  ::{lambda(unsigned_long)#2}::operator()(*(_lambda_unsigned_long__2_ **)(this + 0x20),uVar1);
  return;
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
  undefined8 uVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  float fVar9;
  CentGeom *pCVar10;
  CentGeom *pCVar11;
  CentGeom *pCVar12;
  int iVar13;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var14;
  ulong extraout_RDX;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var15;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var16;
  uint uVar17;
  ulong uVar18;
  CentGeom *pCVar19;
  long lVar20;
  long lVar21;
  CentGeom *pCVar22;
  ulong uVar23;
  CentGeom *pCVar24;
  long in_FS_OFFSET;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar28;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  uint uVar36;
  uint uVar37;
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
  long local_98;
  CentGeom *local_90;
  CentGeom *local_88;
  CentGeom *local_80;
  CentGeom *local_78;
  CentGeom *pCStack_70;
  CentGeom *local_68;
  CentGeom *pCStack_60;
  long *local_58;
  CentGeom **local_50;
  long local_40;
  
  uVar23 = param_3 - param_2;
  uVar18 = param_2 * 0x20;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var14 = (_lambda_embree__range<unsigned_long>_const___1_ *)(param_1 + uVar18);
  if (uVar23 < param_10) {
LAB_00108318:
    fVar9 = _LC26;
    p_Var15 = (_lambda_embree__range<unsigned_long>_const___1_ *)param_1 + param_3 * 0x20 + -0x20;
    for (; p_Var14 <= p_Var15; p_Var14 = p_Var14 + 0x20) {
      auVar25 = *(undefined1 (*) [16])(p_Var14 + 0x10);
      auVar26 = *(undefined1 (*) [16])p_Var14;
      lVar20 = *(long *)param_7;
      fVar46 = auVar25._0_4_ + auVar26._0_4_;
      fVar47 = auVar25._4_4_ + auVar26._4_4_;
      fVar48 = auVar25._8_4_ + auVar26._8_4_;
      fVar49 = auVar25._12_4_ + auVar26._12_4_;
      fVar42 = *(float *)(lVar20 + 0x20);
      fVar43 = *(float *)(lVar20 + 0x24);
      fVar44 = *(float *)(lVar20 + 0x28);
      fVar45 = *(float *)(lVar20 + 0x2c);
      fVar38 = *(float *)(lVar20 + 0x30);
      fVar39 = *(float *)(lVar20 + 0x34);
      fVar40 = *(float *)(lVar20 + 0x38);
      fVar41 = *(float *)(lVar20 + 0x3c);
      piVar2 = *(int **)(param_7 + 8);
      iVar28 = *piVar2;
      iVar31 = piVar2[1];
      iVar32 = piVar2[2];
      iVar33 = piVar2[3];
      puVar3 = *(uint **)(param_7 + 0x10);
      uVar17 = *puVar3;
      uVar35 = puVar3[1];
      uVar36 = puVar3[2];
      uVar37 = puVar3[3];
      auVar30._0_4_ = -(uint)((int)((fVar46 - fVar42) * fVar38 + fVar9) < iVar28) & uVar17;
      auVar30._4_4_ = -(uint)((int)((fVar47 - fVar43) * fVar39 + fVar9) < iVar31) & uVar35;
      auVar30._8_4_ = -(uint)((int)((fVar48 - fVar44) * fVar40 + fVar9) < iVar32) & uVar36;
      auVar30._12_4_ = -(uint)((int)((fVar49 - fVar45) * fVar41 + fVar9) < iVar33) & uVar37;
      iVar13 = movmskps((int)puVar3,auVar30);
      p_Var16 = p_Var15;
      if (iVar13 == 0) {
        while( true ) {
          auVar25 = *(undefined1 (*) [16])(p_Var16 + 0x10);
          auVar26 = *(undefined1 (*) [16])p_Var16;
          p_Var15 = p_Var16 + -0x20;
          auVar34._0_4_ = auVar25._0_4_ + auVar26._0_4_;
          auVar34._4_4_ = auVar25._4_4_ + auVar26._4_4_;
          auVar34._8_4_ = auVar25._8_4_ + auVar26._8_4_;
          auVar34._12_4_ = auVar25._12_4_ + auVar26._12_4_;
          auVar29._0_4_ =
               -(uint)((int)((auVar34._0_4_ - fVar42) * fVar38 + fVar9) < iVar28) & uVar17;
          auVar29._4_4_ =
               -(uint)((int)((auVar34._4_4_ - fVar43) * fVar39 + fVar9) < iVar31) & uVar35;
          auVar29._8_4_ =
               -(uint)((int)((auVar34._8_4_ - fVar44) * fVar40 + fVar9) < iVar32) & uVar36;
          auVar29._12_4_ =
               -(uint)((int)((auVar34._12_4_ - fVar45) * fVar41 + fVar9) < iVar33) & uVar37;
          uVar17 = movmskps((int)uVar18,auVar29);
          uVar18 = (ulong)uVar17;
          if (uVar17 != 0) break;
          auVar26 = minps(*(undefined1 (*) [16])param_6,auVar26);
          *(undefined1 (*) [16])param_6 = auVar26;
          auVar25 = maxps(*(undefined1 (*) [16])(param_6 + 0x10),auVar25);
          *(undefined1 (*) [16])(param_6 + 0x10) = auVar25;
          auVar25 = minps(*(undefined1 (*) [16])(param_6 + 0x20),auVar34);
          *(undefined1 (*) [16])(param_6 + 0x20) = auVar25;
          auVar25 = maxps(*(undefined1 (*) [16])(param_6 + 0x30),auVar34);
          *(undefined1 (*) [16])(param_6 + 0x30) = auVar25;
          if (p_Var15 < p_Var14) goto LAB_001083cf;
          lVar20 = *(long *)param_7;
          fVar42 = *(float *)(lVar20 + 0x20);
          fVar43 = *(float *)(lVar20 + 0x24);
          fVar44 = *(float *)(lVar20 + 0x28);
          fVar45 = *(float *)(lVar20 + 0x2c);
          fVar38 = *(float *)(lVar20 + 0x30);
          fVar39 = *(float *)(lVar20 + 0x34);
          fVar40 = *(float *)(lVar20 + 0x38);
          fVar41 = *(float *)(lVar20 + 0x3c);
          piVar2 = *(int **)(param_7 + 8);
          iVar28 = *piVar2;
          iVar31 = piVar2[1];
          iVar32 = piVar2[2];
          iVar33 = piVar2[3];
          puVar3 = *(uint **)(param_7 + 0x10);
          uVar17 = *puVar3;
          uVar35 = puVar3[1];
          uVar36 = puVar3[2];
          uVar37 = puVar3[3];
          p_Var16 = p_Var15;
        }
        auVar26 = minps(*(undefined1 (*) [16])param_5,auVar26);
        *(undefined1 (*) [16])param_5 = auVar26;
        auVar25 = maxps(*(undefined1 (*) [16])(param_5 + 0x10),auVar25);
        *(undefined1 (*) [16])(param_5 + 0x10) = auVar25;
        auVar25 = minps(*(undefined1 (*) [16])(param_5 + 0x20),auVar34);
        *(undefined1 (*) [16])(param_5 + 0x20) = auVar25;
        auVar25 = maxps(*(undefined1 (*) [16])(param_5 + 0x30),auVar34);
        *(undefined1 (*) [16])(param_5 + 0x30) = auVar25;
        auVar25 = *(undefined1 (*) [16])p_Var14;
        auVar26 = *(undefined1 (*) [16])(p_Var14 + 0x10);
        auVar30 = minps(*(undefined1 (*) [16])param_6,auVar25);
        *(undefined1 (*) [16])param_6 = auVar30;
        auVar30 = maxps(*(undefined1 (*) [16])(param_6 + 0x10),auVar26);
        auVar27._0_4_ = auVar26._0_4_ + auVar25._0_4_;
        auVar27._4_4_ = auVar26._4_4_ + auVar25._4_4_;
        auVar27._8_4_ = auVar26._8_4_ + auVar25._8_4_;
        auVar27._12_4_ = auVar26._12_4_ + auVar25._12_4_;
        *(undefined1 (*) [16])(param_6 + 0x10) = auVar30;
        auVar25 = minps(*(undefined1 (*) [16])(param_6 + 0x20),auVar27);
        *(undefined1 (*) [16])(param_6 + 0x20) = auVar25;
        auVar25 = maxps(*(undefined1 (*) [16])(param_6 + 0x30),auVar27);
        *(undefined1 (*) [16])(param_6 + 0x30) = auVar25;
        uVar1 = *(undefined8 *)(p_Var16 + 8);
        uVar4 = *(undefined8 *)p_Var14;
        uVar5 = *(undefined8 *)(p_Var14 + 8);
        uVar6 = *(undefined8 *)(p_Var14 + 0x10);
        uVar7 = *(undefined8 *)(p_Var14 + 0x18);
        *(undefined8 *)p_Var14 = *(undefined8 *)p_Var16;
        *(undefined8 *)(p_Var14 + 8) = uVar1;
        uVar1 = *(undefined8 *)(p_Var16 + 0x18);
        *(undefined8 *)(p_Var14 + 0x10) = *(undefined8 *)(p_Var16 + 0x10);
        *(undefined8 *)(p_Var14 + 0x18) = uVar1;
        *(undefined8 *)p_Var16 = uVar4;
        *(undefined8 *)(p_Var16 + 8) = uVar5;
        *(undefined8 *)(p_Var16 + 0x10) = uVar6;
        *(undefined8 *)(p_Var16 + 0x18) = uVar7;
      }
      else {
        auVar26 = minps(*(undefined1 (*) [16])param_5,auVar26);
        *(undefined1 (*) [16])param_5 = auVar26;
        auVar25 = maxps(*(undefined1 (*) [16])(param_5 + 0x10),auVar25);
        *(undefined1 (*) [16])(param_5 + 0x10) = auVar25;
        auVar25._4_4_ = fVar47;
        auVar25._0_4_ = fVar46;
        auVar25._8_4_ = fVar48;
        auVar25._12_4_ = fVar49;
        auVar25 = minps(*(undefined1 (*) [16])(param_5 + 0x20),auVar25);
        *(undefined1 (*) [16])(param_5 + 0x20) = auVar25;
        auVar26._4_4_ = fVar47;
        auVar26._0_4_ = fVar46;
        auVar26._8_4_ = fVar48;
        auVar26._12_4_ = fVar49;
        auVar25 = maxps(*(undefined1 (*) [16])(param_5 + 0x30),auVar26);
        *(undefined1 (*) [16])(param_5 + 0x30) = auVar25;
      }
    }
LAB_001083cf:
    pCVar11 = (CentGeom *)((long)p_Var14 - (long)param_1 >> 5);
  }
  else {
    pCVar10 = (CentGeom *)embree::alignedMalloc(0x2cc0,0x40);
    *(ulong *)(pCVar10 + 8) = uVar23;
    *(_lambda_embree__range<unsigned_long>_const___1_ **)pCVar10 = p_Var14;
    *(_lambda_embree__PrimRef_const___1_ **)(pCVar10 + 0x10) = param_7;
    *(_lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__PrimRef_const___3_ **)
     (pCVar10 + 0x18) = param_8;
    *(_lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__CentGeom<embree::BBox<embree::Vec3fa>_>_const___4_
      **)(pCVar10 + 0x20) = param_9;
    *(EmptyTy **)(pCVar10 + 0x28) = param_4;
    uVar18 = embree::TaskScheduler::threadCount();
    uVar23 = ((uVar23 - 1) + param_10) / param_10;
    if (0x40 < uVar23) {
      uVar23 = 0x40;
    }
    if (uVar23 <= uVar18) {
      uVar18 = uVar23;
    }
    *(ulong *)(pCVar10 + 0x30) = uVar18;
    local_68 = pCVar10;
    if (uVar18 == 0) {
      *(undefined8 *)(pCVar10 + 0x280) = 0;
      *(undefined8 *)(pCVar10 + 0x40) = *(undefined8 *)(pCVar10 + 8);
LAB_00107ff6:
      pCVar11 = *(CentGeom **)(pCVar10 + 0x280);
    }
    else {
      param_1 = (PrimRef *)&local_78;
      local_80 = (CentGeom *)0x0;
      p_Var14 = (_lambda_embree__range<unsigned_long>_const___1_ *)param_1;
      local_78 = (CentGeom *)&local_68;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embr___mbree::Vec3fa>>&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,uVar18,1,(_lambda_embree__range<unsigned_long>_const___1_ *)param_1,
                 (TaskGroupContext *)&local_80);
      embree::TaskScheduler::wait();
      if (local_80 != (CentGeom *)0x0) {
LAB_001082f7:
        local_78 = local_80;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception();
        param_3 = extraout_RDX;
        goto LAB_00108318;
      }
      lVar20 = *(long *)(pCVar10 + 0x30);
      uVar1 = *(undefined8 *)(pCVar10 + 8);
      *(undefined8 *)(pCVar10 + lVar20 * 8 + 0x280) = 0;
      *(undefined8 *)(pCVar10 + lVar20 * 8 + 0x40) = uVar1;
      if (lVar20 == 0) goto LAB_00107ff6;
      uVar23 = 0;
      pCVar11 = pCVar10 + 0xcc0;
      do {
        auVar25 = minps(*(undefined1 (*) [16])param_5,*(undefined1 (*) [16])pCVar11);
        uVar23 = uVar23 + 1;
        *(undefined1 (*) [16])param_5 = auVar25;
        auVar25 = maxps(*(undefined1 (*) [16])(param_5 + 0x10),
                        *(undefined1 (*) [16])(pCVar11 + 0x10));
        *(undefined1 (*) [16])(param_5 + 0x10) = auVar25;
        auVar25 = minps(*(undefined1 (*) [16])(param_5 + 0x20),
                        *(undefined1 (*) [16])(pCVar11 + 0x20));
        *(undefined1 (*) [16])(param_5 + 0x20) = auVar25;
        auVar25 = maxps(*(undefined1 (*) [16])(param_5 + 0x30),
                        *(undefined1 (*) [16])(pCVar11 + 0x30));
        *(undefined1 (*) [16])(param_5 + 0x30) = auVar25;
        auVar25 = minps(*(undefined1 (*) [16])param_6,*(undefined1 (*) [16])(pCVar11 + 0x1000));
        *(undefined1 (*) [16])param_6 = auVar25;
        auVar25 = maxps(*(undefined1 (*) [16])(param_6 + 0x10),
                        *(undefined1 (*) [16])(pCVar11 + 0x1010));
        *(undefined1 (*) [16])(param_6 + 0x10) = auVar25;
        auVar25 = minps(*(undefined1 (*) [16])(param_6 + 0x20),
                        *(undefined1 (*) [16])(pCVar11 + 0x1020));
        *(undefined1 (*) [16])(param_6 + 0x20) = auVar25;
        auVar25 = maxps(*(undefined1 (*) [16])(param_6 + 0x30),
                        *(undefined1 (*) [16])(pCVar11 + 0x1030));
        *(undefined1 (*) [16])(param_6 + 0x30) = auVar25;
        uVar18 = *(ulong *)(pCVar10 + 0x30);
        pCVar11 = pCVar11 + 0x40;
      } while (uVar23 < uVar18);
      pCVar11 = *(CentGeom **)(pCVar10 + 0x280);
      param_5 = pCVar11;
      if (uVar18 < 2) {
        pCVar12 = *(CentGeom **)(pCVar10 + 8);
        local_98 = 0;
        local_90 = (CentGeom *)0x0;
        local_88 = (CentGeom *)0x0;
        if (uVar18 == 0) goto LAB_00108000;
      }
      else {
        pCVar12 = pCVar10 + 0x288;
        do {
          param_5 = param_5 + *(long *)pCVar12;
          pCVar12 = pCVar12 + 8;
        } while (pCVar10 + uVar18 * 8 + 0x280 != pCVar12);
        pCVar12 = *(CentGeom **)(pCVar10 + 8);
      }
      local_88 = (CentGeom *)0x0;
      local_90 = (CentGeom *)0x0;
      local_98 = 0;
      bVar8 = false;
      param_7 = (_lambda_embree__PrimRef_const___1_ *)0x0;
      pCVar24 = (CentGeom *)0x0;
      pCVar19 = pCVar10 + 0x40;
      lVar20 = 0;
      pCVar22 = (CentGeom *)0x0;
      while( true ) {
        local_68 = *(CentGeom **)pCVar19;
        pCStack_60 = pCVar11 + (long)local_68;
        pCStack_70 = *(CentGeom **)(pCVar19 + 8);
        if ((long)param_5 <= (long)*(CentGeom **)(pCVar19 + 8)) {
          pCStack_70 = param_5;
        }
        local_78 = (CentGeom *)0x0;
        if (-1 < (long)pCStack_60) {
          local_78 = pCStack_60;
        }
        if ((long)pCVar12 < (long)pCStack_60) {
          pCStack_60 = pCVar12;
        }
        if ((long)local_68 < (long)param_5) {
          local_68 = param_5;
        }
        lVar21 = lVar20;
        if ((long)local_78 < (long)pCStack_70) {
          bVar8 = true;
          pCVar24 = pCStack_70 + ((long)pCVar24 - (long)local_78);
          lVar21 = lVar20 + 1;
          *(CentGeom **)(pCVar10 + lVar20 * 0x10 + 0x4c0) = local_78;
          *(CentGeom **)(pCVar10 + lVar20 * 0x10 + 0x4c0 + 8) = pCStack_70;
        }
        param_6 = pCVar22;
        if ((long)local_68 < (long)pCStack_60) {
          param_6 = pCVar22 + 1;
          param_7 = (_lambda_embree__PrimRef_const___1_ *)0x1;
          *(CentGeom **)(pCVar10 + (long)pCVar22 * 0x10 + 0x8c0) = local_68;
          *(CentGeom **)(pCVar10 + (long)pCVar22 * 0x10 + 0x8c0 + 8) = pCStack_60;
        }
        if (pCVar10 + 0x40 + uVar18 * 8 == pCVar19 + 8) break;
        pCVar11 = *(CentGeom **)(pCVar19 + 0x248);
        pCVar19 = pCVar19 + 8;
        lVar20 = lVar21;
        pCVar22 = param_6;
      }
      if ((char)param_7 != '\0') {
        local_90 = param_6;
      }
      pCVar11 = param_5;
      if ((bVar8) && (local_98 = lVar21, local_88 = pCVar24, pCVar24 != (CentGeom *)0x0)) {
        local_68 = (CentGeom *)&local_88;
        local_58 = &local_98;
        local_50 = &local_90;
        local_80 = (CentGeom *)0x0;
        p_Var14 = (_lambda_embree__range<unsigned_long>_const___1_ *)param_1;
        local_78 = (CentGeom *)&local_68;
        pCStack_60 = pCVar10;
        TaskScheduler::
        spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::parallel_partition_task<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embr___mbree::Vec3fa>>&)::_lambda(unsigned_long)_2_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                  (0,uVar18,1,(_lambda_embree__range<unsigned_long>_const___1_ *)param_1,
                   (TaskGroupContext *)&local_80);
        embree::TaskScheduler::wait();
        if (local_80 != (CentGeom *)0x0) goto LAB_001082f7;
      }
    }
LAB_00108000:
    if (pCVar10 != (CentGeom *)0x0) {
      embree::alignedFree(pCVar10);
    }
    pCVar11 = pCVar11 + param_2;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)pCVar11;
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
  BinInfoT_conflict *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  embree *peVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  embree *peVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  BinInfoT_conflict *pBVar23;
  embree *peVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  long in_FS_OFFSET;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 (*local_2b38) [16];
  ulong local_2b18;
  ulong local_2b10;
  ulong local_2b08;
  ulong **local_2b00;
  ulong **local_2af8;
  ulong *local_2af0;
  ulong *local_2ae8;
  ulong *local_2ae0;
  undefined1 (*local_2ad8) [16];
  _lambda_embree__range<unsigned_long>_const___1_ *local_2ad0;
  undefined1 local_2ac0 [96];
  undefined8 local_2a60 [372];
  undefined8 local_1ec0;
  int aiStack_1eb8 [22];
  undefined8 local_1e60 [51];
  undefined8 local_1cc8;
  undefined1 local_1cc0 [7168];
  undefined1 (*local_c0) [16];
  ulong local_b8;
  long local_48;
  
  bVar30 = 0;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_2b18 = param_3;
  local_2b10 = param_2;
  local_2b08 = param_1;
  uVar12 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2b08) {
    local_2b08 = 0x200;
  }
  if (uVar12 < local_2b08) {
    local_2b08 = uVar12;
  }
  local_b8 = local_2b08;
  if (local_2b08 * 0xe00 < 0x2001) {
    local_c0 = (undefined1 (*) [16])local_1cc0;
  }
  else {
    local_c0 = (undefined1 (*) [16])embree::alignedMalloc(local_2b08 * 0xe00,0x40);
  }
  local_2b38 = (undefined1 (*) [16])local_1cc0;
  local_2af0 = &local_2b10;
  local_2ad0 = param_6;
  local_2ae8 = &local_2b18;
  local_2ae0 = &local_2b08;
  local_2ad8 = local_2b38;
  if (local_2b08 != 0) {
    local_2af8 = &local_2af0;
    local_2b00 = (ulong **)0x0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImNS_4sse28BinInfoTILm32ENS_7PrimRefENS_4BBoxINS_6Vec3faEEEEEZNS_22bin_serial_or_parallelILb1ESA_NS4_10BinMappingILm32EEES6_EEvRT0_PKT2_mmmRKT1_EUlRKNS_5rangeImEEE_ZNSB_ILb1ESA_SD_S6_EEvSF_SI_mmmSL_EUlRKSA_SS_E0_EESE_T_SU_SU_SU_RKSE_SL_RSH_EUlmE_EEvSU_SW_EUlSP_E_EEvSU_SU_SU_SW_PNS0_16TaskGroupContextE
              (0,local_2b08,1,&local_2af8,&local_2b00);
    embree::TaskScheduler::wait();
    if (local_2b00 != (ulong **)0x0) {
      local_2af8 = local_2b00;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_2af8);
      goto LAB_00108fdd;
    }
  }
  uVar12 = local_2b08;
  peVar16 = this + 0x60;
  pBVar1 = param_5 + 0xc00;
  do {
    peVar24 = peVar16 + -0x60;
    pBVar23 = param_5;
    do {
      peVar13 = peVar24;
      uVar8 = *(undefined8 *)(pBVar23 + 8);
      *(undefined8 *)peVar13 = *(undefined8 *)pBVar23;
      *(undefined8 *)(peVar13 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pBVar23 + 0x18);
      *(undefined8 *)(peVar13 + 0x10) = *(undefined8 *)(pBVar23 + 0x10);
      *(undefined8 *)(peVar13 + 0x18) = uVar8;
      peVar24 = peVar13 + 0x20;
      pBVar23 = pBVar23 + 0x20;
    } while (peVar13 + 0x20 != peVar16);
    param_5 = param_5 + 0x60;
    peVar16 = peVar13 + 0x80;
  } while (param_5 != pBVar1);
  puVar14 = (undefined8 *)memmove(this + 0xc00,param_5,0x200);
  if (uVar12 != 0) {
    puVar27 = local_2a60;
    peVar16 = this;
    pauVar29 = local_c0;
    do {
      do {
        puVar17 = puVar27 + -0xc;
        peVar24 = peVar16;
        do {
          uVar8 = *(undefined8 *)peVar24;
          uVar9 = *(undefined8 *)(peVar24 + 8);
          uVar10 = *(undefined8 *)(peVar24 + 0x10);
          uVar11 = *(undefined8 *)(peVar24 + 0x18);
          puVar18 = puVar17 + 4;
          peVar24 = peVar24 + 0x20;
          *puVar17 = uVar8;
          puVar17[1] = uVar9;
          puVar17[2] = uVar10;
          puVar17[3] = uVar11;
          puVar17 = puVar18;
        } while (puVar27 != puVar18);
        puVar27 = puVar27 + 0xc;
        peVar16 = peVar16 + 0x60;
      } while (local_1e60 != puVar27);
      puVar27 = puVar14;
      pauVar21 = (undefined1 (*) [16])&local_1ec0;
      for (lVar19 = 0x40; lVar19 != 0; lVar19 = lVar19 + -1) {
        *(undefined8 *)*pauVar21 = *puVar27;
        puVar27 = puVar27 + (ulong)bVar30 * -2 + 1;
        pauVar21 = (undefined1 (*) [16])(pauVar21[-(ulong)bVar30] + 8);
      }
      lVar19 = **(long **)param_7;
      pauVar21 = (undefined1 (*) [16])local_2ac0;
      peVar16 = this;
      if (lVar19 != 0) {
        pauVar15 = (undefined1 (*) [16])local_2ac0;
        pauVar20 = pauVar29;
        pauVar25 = pauVar29;
        pauVar28 = (undefined1 (*) [16])&local_1ec0;
        do {
          iVar2 = *(int *)(*pauVar28 + 4);
          iVar3 = *(int *)(*pauVar28 + 8);
          iVar4 = *(int *)(*pauVar28 + 0xc);
          pauVar26 = pauVar25 + 1;
          iVar5 = *(int *)(pauVar25[0xc0] + 4);
          iVar6 = *(int *)(pauVar25[0xc0] + 8);
          iVar7 = *(int *)(pauVar25[0xc0] + 0xc);
          *(int *)*pauVar28 = *(int *)*pauVar28 + *(int *)pauVar25[0xc0];
          *(int *)(*pauVar28 + 4) = iVar2 + iVar5;
          *(int *)(*pauVar28 + 8) = iVar3 + iVar6;
          *(int *)(*pauVar28 + 0xc) = iVar4 + iVar7;
          auVar31 = minps(*pauVar15,*pauVar20);
          *pauVar15 = auVar31;
          auVar31 = maxps(pauVar15[1],pauVar20[1]);
          pauVar15[1] = auVar31;
          auVar31 = minps(pauVar15[2],pauVar20[2]);
          pauVar15[2] = auVar31;
          auVar31 = maxps(pauVar15[3],pauVar20[3]);
          pauVar15[3] = auVar31;
          auVar31 = minps(pauVar15[4],pauVar20[4]);
          pauVar15[4] = auVar31;
          auVar31 = maxps(pauVar15[5],pauVar20[5]);
          pauVar15[5] = auVar31;
          pauVar15 = pauVar15 + 6;
          pauVar20 = pauVar20 + 6;
          pauVar25 = pauVar26;
          pauVar28 = pauVar28 + 1;
        } while (pauVar26 != pauVar29 + lVar19);
      }
      do {
        lVar19 = 0;
        do {
          uVar8 = *(undefined8 *)((long)(*pauVar21 + lVar19) + 8);
          uVar9 = *(undefined8 *)(pauVar21[1] + lVar19);
          uVar10 = *(undefined8 *)((long)(pauVar21[1] + lVar19) + 8);
          *(undefined8 *)(peVar16 + lVar19) = *(undefined8 *)(*pauVar21 + lVar19);
          *(undefined8 *)(peVar16 + lVar19 + 8) = uVar8;
          *(undefined8 *)(peVar16 + lVar19 + 0x10) = uVar9;
          *(undefined8 *)(peVar16 + lVar19 + 0x10 + 8) = uVar10;
          lVar19 = lVar19 + 0x20;
        } while (lVar19 != 0x60);
        pauVar21 = pauVar21 + 6;
        peVar16 = peVar16 + 0x60;
      } while (pauVar21 != (undefined1 (*) [16])&local_1ec0);
      pauVar29 = pauVar29 + 0xe0;
      *puVar14 = local_1ec0;
      *(undefined8 *)(this + 0xdf8) = local_1cc8;
      lVar19 = (long)puVar14 - (long)((ulong)(this + 0xc08) & 0xfffffffffffffff8);
      puVar27 = (undefined8 *)((long)&local_1ec0 - lVar19);
      puVar17 = (undefined8 *)((ulong)(this + 0xc08) & 0xfffffffffffffff8);
      for (uVar22 = (ulong)((int)lVar19 + 0x200U >> 3); uVar22 != 0; uVar22 = uVar22 - 1) {
        *puVar17 = *puVar27;
        puVar27 = puVar27 + (ulong)bVar30 * -2 + 1;
        puVar17 = puVar17 + (ulong)bVar30 * -2 + 1;
      }
      puVar27 = local_2a60;
      peVar16 = this;
    } while (local_c0 + uVar12 * 0xe0 != pauVar29);
  }
  if (local_c0 != local_2b38) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_00108fdd:
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
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  float *pfVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  undefined8 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  CentGeom *pCVar21;
  undefined1 *puVar22;
  long lVar23;
  CentGeom *pCVar24;
  long lVar25;
  undefined8 uVar26;
  CentGeom *pCVar27;
  long *plVar28;
  undefined8 *puVar29;
  CentGeom *pCVar30;
  CentGeom *pCVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  undefined8 *puVar37;
  long *plVar38;
  PrimInfoRange *pPVar39;
  PrimInfoRange *pPVar40;
  long in_FS_OFFSET;
  float fVar41;
  float fVar47;
  float fVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar66;
  float fVar67;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  uint local_d38;
  uint uStack_d34;
  uint uStack_d30;
  uint uStack_d2c;
  undefined1 local_d28 [16];
  undefined1 local_d18 [8];
  float fStack_d10;
  float fStack_d0c;
  undefined1 local_d08 [16];
  undefined1 *local_cd8;
  undefined8 uStack_cd0;
  PrimInfoRange *local_cc0;
  MutexSys *local_c98;
  CentGeom *local_c80;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__CentGeom<embree::BBox<embree::Vec3fa>_>_const___4_
  local_c5b;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__PrimRef_const___3_ local_c5a;
  EmptyTy local_c59;
  PrimInfoRange *local_c58;
  int *local_c50;
  undefined1 *local_c48;
  undefined1 local_c38 [16];
  float local_c28;
  float fStack_c24;
  float fStack_c20;
  float fStack_c1c;
  undefined1 local_c18 [16];
  float local_c08;
  float fStack_c04;
  float fStack_c00;
  float fStack_bfc;
  undefined1 local_bf8 [16];
  float local_be8;
  float fStack_be4;
  float fStack_be0;
  float fStack_bdc;
  undefined1 local_bd8 [16];
  float local_bc8;
  float fStack_bc4;
  float fStack_bc0;
  float fStack_bbc;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  int local_ba8;
  int iStack_ba4;
  int iStack_ba0;
  int iStack_b9c;
  undefined1 local_b98 [16];
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
  float local_b28;
  float fStack_b24;
  float fStack_b20;
  float fStack_b1c;
  undefined1 local_b18 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  CentGeom *local_5f8;
  CentGeom *local_5f0;
  long local_5e8;
  undefined1 local_5e0;
  undefined1 local_5d8 [16];
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  CentGeom *local_598;
  undefined8 local_590;
  long local_588 [168];
  long lStack_48;
  long local_40;
  
  lVar23 = lRam0000000000109790;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c98 = param_8;
  if (param_7 == (FastAllocator *)0x0) {
    local_c98 = *(MutexSys **)(in_FS_OFFSET + lRam0000000000109790);
    param_7 = *(FastAllocator **)param_2[10];
    if (local_c98 == (MutexSys *)0x0) {
      local_c98 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(local_c98);
      *(MutexSys **)(local_c98 + 0x40) = local_c98;
      *(undefined8 *)(local_c98 + 8) = 0;
      *(undefined8 *)(local_c98 + 0x48) = 0;
      *(undefined8 *)(local_c98 + 0x50) = 0;
      *(undefined8 *)(local_c98 + 0x58) = 0;
      *(undefined8 *)(local_c98 + 0x60) = 0;
      *(undefined8 *)(local_c98 + 0x68) = 0;
      *(undefined8 *)(local_c98 + 0x70) = 0;
      *(MutexSys **)(local_c98 + 0x80) = local_c98;
      *(undefined8 *)(local_c98 + 0x88) = 0;
      *(undefined8 *)(local_c98 + 0x90) = 0;
      *(undefined8 *)(local_c98 + 0x98) = 0;
      *(undefined8 *)(local_c98 + 0xa0) = 0;
      *(undefined8 *)(local_c98 + 0xa8) = 0;
      *(undefined8 *)(local_c98 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar23) = local_c98;
      embree::MutexSys::lock();
      local_bf8._0_8_ = local_c98;
      if (__MutexSys == _vtable) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,local_bf8);
        uVar26 = local_bf8._0_8_;
        if ((MutexSys *)local_bf8._0_8_ != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys((MutexSys *)local_bf8._0_8_);
          embree::alignedFree((void *)uVar26);
        }
      }
      else {
        *__MutexSys = local_c98;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    local_c98 = local_c98 + 0x40;
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
  pCVar30 = (CentGeom *)param_3[0xb];
  pCVar21 = (CentGeom *)param_3[10];
  auVar71 = *(undefined1 (*) [16])(param_3 + 2);
  auVar73 = *(undefined1 (*) [16])(param_3 + 4);
  uVar32 = (long)pCVar30 - (long)pCVar21;
  if (((uVar32 <= param_2[3]) || (lVar23 = *param_3, param_2[1] <= lVar23 + 8U)) ||
     ((uVar32 <= param_2[4] &&
      (fVar47 = auVar73._4_4_ - auVar71._4_4_, fVar48 = auVar73._8_4_ - auVar71._8_4_,
      fVar47 = (fVar47 + fVar48) * (auVar73._0_4_ - auVar71._0_4_) + fVar47 * fVar48,
      (float)((uVar32 - 1) + (1L << ((byte)param_2[2] & 0x3f)) >> ((byte)param_2[2] & 0x3f)) *
      fVar47 * *(float *)((long)param_2 + 0x2c) <=
      *(float *)(param_2 + 5) * fVar47 + *(float *)((long)param_2 + 0x2c) * local_b88)))) {
    puVar18 = (undefined8 *)(*(long *)param_2[9] + (long)pCVar30 * 0x20);
    puVar29 = (undefined8 *)(*(long *)param_2[9] + (long)pCVar21 * 0x20);
    if (puVar18 != puVar29) {
      lVar23 = (long)pCVar30 * 0x20 + (long)pCVar21 * -0x20;
      uVar32 = lVar23 >> 5;
      if (uVar32 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar29,puVar18,0xfffffffffffffffe);
      }
      else {
        lVar25 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar29,puVar18,(long)(int)lVar25 * 2);
        if (0x200 < lVar23) {
          puVar37 = puVar29 + 0x40;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar29,puVar37)
          ;
          for (; puVar18 != puVar37; puVar37 = puVar37 + 4) {
            while( true ) {
              uVar26 = puVar37[2];
              uVar8 = puVar37[3];
              uVar9 = *puVar37;
              uVar10 = puVar37[1];
              uVar32 = CONCAT44(*(undefined4 *)((long)puVar37 + 0x1c),
                                *(undefined4 *)((long)puVar37 + 0xc));
              puVar29 = puVar37;
              if (CONCAT44(*(undefined4 *)((long)puVar37 + -4),
                           *(undefined4 *)((long)puVar37 + -0x14)) <= uVar32) break;
              do {
                puVar7 = puVar29;
                puVar29 = puVar7 + -4;
                *puVar7 = *puVar29;
                puVar7[1] = puVar7[-3];
                puVar7[2] = puVar7[-2];
                puVar7[3] = puVar7[-1];
              } while (uVar32 < CONCAT44(*(undefined4 *)((long)puVar7 + -0x24),
                                         *(undefined4 *)((long)puVar7 + -0x34)));
              puVar37 = puVar37 + 4;
              *puVar29 = uVar9;
              puVar7[-3] = uVar10;
              puVar7[-2] = uVar26;
              puVar7[-1] = uVar8;
              if (puVar18 == puVar37) goto LAB_001091e0;
            }
            *puVar37 = uVar9;
            puVar37[1] = uVar10;
            puVar37[2] = uVar26;
            puVar37[3] = uVar8;
          }
          goto LAB_001091e0;
        }
      }
      std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar29,puVar18);
    }
LAB_001091e0:
    createLargeLeaf(param_1,param_2,param_3);
LAB_0010922d:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar28 = (long *)param_2[9];
  if (uVar32 < 0xc00) {
    lVar25 = *plVar28;
    lVar35 = (long)pCVar30 * 0x20;
    pauVar17 = (undefined1 (*) [16])(lVar25 + (long)pCVar21 * 0x20);
    if (local_b84 != -1) {
      local_d18 = (undefined1  [8])CONCAT44(_LC2,_LC2);
      fStack_d10 = _LC2;
      fStack_d0c = _LC2;
      local_5a8._8_4_ = _LC2;
      local_5a8._0_8_ = local_d18;
      local_5a8._12_4_ = _LC2;
      auVar71 = *(undefined1 (*) [16])
                 (&mm_lookupmask_ps + (ulong)(uint)(1 << ((byte)local_b84 & 0x1f)) * 2);
      local_d08._0_8_ = CONCAT44(_LC4,_LC4);
      local_d08._8_4_ = _LC4;
      local_d08._12_4_ = _LC4;
      uStack_cd0 = local_d08._8_8_;
      pauVar14 = (undefined1 (*) [16])(lVar25 + -0x20 + lVar35);
      local_5b8._8_4_ = _LC4;
      local_5b8._0_8_ = local_d08._0_8_;
      local_5b8._12_4_ = _LC4;
      local_608._8_4_ = _LC2;
      local_608._0_8_ = local_d18;
      local_608._12_4_ = _LC2;
      local_618._8_4_ = _LC4;
      local_618._0_8_ = local_d08._0_8_;
      local_618._12_4_ = _LC4;
      local_628._8_4_ = _LC2;
      local_628._0_8_ = local_d18;
      local_628._12_4_ = _LC2;
      local_638._8_4_ = _LC4;
      local_638._0_8_ = local_d08._0_8_;
      local_638._12_4_ = _LC4;
      pauVar13 = pauVar17;
      local_5c8 = _LC2;
      fStack_5c4 = _LC2;
      fStack_5c0 = _LC2;
      fStack_5bc = _LC2;
      local_d28 = local_d08;
      do {
        if (pauVar14 < pauVar17) {
LAB_001093fd:
          auVar71._8_8_ = pCVar30;
          auVar71._0_8_ = *param_3;
          local_c80 = (CentGeom *)((long)pauVar17 - lVar25 >> 5);
          goto LAB_00109407;
        }
        auVar73 = pauVar17[1];
        auVar43 = *pauVar17;
        auVar52._0_4_ = auVar73._0_4_ + auVar43._0_4_;
        auVar52._4_4_ = auVar73._4_4_ + auVar43._4_4_;
        auVar52._8_4_ = auVar73._8_4_ + auVar43._8_4_;
        auVar52._12_4_ = auVar73._12_4_ + auVar43._12_4_;
        local_d38 = auVar71._0_4_;
        uStack_d34 = auVar71._4_4_;
        uStack_d30 = auVar71._8_4_;
        uStack_d2c = auVar71._12_4_;
        auVar64._0_4_ =
             -(uint)((int)((auVar52._0_4_ - local_b68) * local_b58 + _LC26) < local_b80) & local_d38
        ;
        auVar64._4_4_ =
             -(uint)((int)((auVar52._4_4_ - fStack_b64) * fStack_b54 + _UNK_00111ce4) < local_b80) &
             uStack_d34;
        auVar64._8_4_ =
             -(uint)((int)((auVar52._8_4_ - fStack_b60) * fStack_b50 + _UNK_00111ce8) < local_b80) &
             uStack_d30;
        auVar64._12_4_ =
             -(uint)((int)((auVar52._12_4_ - fStack_b5c) * fStack_b4c + _UNK_00111cec) < local_b80)
             & uStack_d2c;
        uVar34 = movmskps((int)pauVar13,auVar64);
        pauVar13 = (undefined1 (*) [16])(ulong)uVar34;
        if (uVar34 == 0) {
          auVar76._4_4_ = fStack_5c4;
          auVar76._0_4_ = local_5c8;
          auVar76._8_4_ = fStack_5c0;
          auVar76._12_4_ = fStack_5bc;
          pauVar15 = pauVar14;
          while( true ) {
            auVar64 = pauVar15[1];
            auVar45 = *pauVar15;
            pauVar14 = pauVar15 + -2;
            auVar60._0_4_ = auVar64._0_4_ + auVar45._0_4_;
            auVar60._4_4_ = auVar64._4_4_ + auVar45._4_4_;
            auVar60._8_4_ = auVar64._8_4_ + auVar45._8_4_;
            auVar60._12_4_ = auVar64._12_4_ + auVar45._12_4_;
            auVar50._0_4_ =
                 -(uint)((int)((auVar60._0_4_ - local_b68) * local_b58 + _LC26) < local_b80) &
                 local_d38;
            auVar50._4_4_ =
                 -(uint)((int)((auVar60._4_4_ - fStack_b64) * fStack_b54 + _UNK_00111ce4) <
                        local_b80) & uStack_d34;
            auVar50._8_4_ =
                 -(uint)((int)((auVar60._8_4_ - fStack_b60) * fStack_b50 + _UNK_00111ce8) <
                        local_b80) & uStack_d30;
            auVar50._12_4_ =
                 -(uint)((int)((auVar60._12_4_ - fStack_b5c) * fStack_b4c + _UNK_00111cec) <
                        local_b80) & uStack_d2c;
            uVar34 = movmskps((int)pauVar13,auVar50);
            pauVar13 = (undefined1 (*) [16])(ulong)uVar34;
            if (uVar34 != 0) break;
            local_d28 = minps(local_d28,auVar45);
            auVar76 = maxps(auVar76,auVar64);
            local_5b8 = minps(local_5b8,auVar60);
            local_5a8 = maxps(local_5a8,auVar60);
            pauVar15 = pauVar14;
            if (pauVar14 < pauVar17) {
              local_5c8 = auVar76._0_4_;
              fStack_5c4 = auVar76._4_4_;
              fStack_5c0 = auVar76._8_4_;
              fStack_5bc = auVar76._12_4_;
              goto LAB_001093fd;
            }
          }
          *pauVar17 = auVar45;
          local_638 = minps(local_638,auVar45);
          local_628 = maxps(local_628,auVar64);
          local_d28 = minps(local_d28,auVar43);
          auVar64 = maxps(auVar76,auVar73);
          local_608 = maxps(local_608,auVar60);
          local_5b8 = minps(local_5b8,auVar52);
          pauVar17[1] = pauVar15[1];
          local_618 = minps(local_618,auVar60);
          local_5a8 = maxps(local_5a8,auVar52);
          local_5c8 = auVar64._0_4_;
          fStack_5c4 = auVar64._4_4_;
          fStack_5c0 = auVar64._8_4_;
          fStack_5bc = auVar64._12_4_;
          *pauVar15 = auVar43;
          pauVar15[1] = auVar73;
        }
        else {
          local_638 = minps(local_638,auVar43);
          local_628 = maxps(local_628,auVar73);
          local_618 = minps(local_618,auVar52);
          local_608 = maxps(local_608,auVar52);
        }
        pauVar17 = pauVar17 + 2;
      } while( true );
    }
    pauVar14 = (undefined1 (*) [16])(lVar25 + lVar35);
    if (pauVar14 == pauVar17) goto LAB_0010a93c;
    lVar35 = lVar35 + (long)pCVar21 * -0x20;
    uVar32 = lVar35 >> 5;
    if (uVar32 == 0) {
      std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (pauVar17,pauVar14,0xfffffffffffffffe);
LAB_0010b08b:
      std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar17,pauVar14);
    }
    else {
      lVar23 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (pauVar17,pauVar14,(long)(int)lVar23 * 2);
      if (lVar35 < 0x201) goto LAB_0010b08b;
      pauVar13 = pauVar17 + 0x20;
      std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar17,pauVar13);
      for (; pauVar14 != pauVar13; pauVar13 = pauVar13 + 2) {
        uVar1 = *(undefined4 *)(pauVar13[1] + 0xc);
        uVar2 = *(undefined4 *)(*pauVar13 + 0xc);
        auVar71 = pauVar13[1];
        auVar73 = *pauVar13;
        uVar32 = CONCAT44(*(undefined4 *)(pauVar13[-1] + 0xc),*(undefined4 *)(pauVar13[-2] + 0xc));
        pauVar17 = pauVar13;
        while (CONCAT44(uVar1,uVar2) < uVar32) {
          *pauVar17 = pauVar17[-2];
          pauVar17[1] = pauVar17[-1];
          uVar32 = CONCAT44(*(undefined4 *)(pauVar17[-3] + 0xc),*(undefined4 *)(pauVar17[-4] + 0xc))
          ;
          pauVar17 = pauVar17 + -2;
        }
        *pauVar17 = auVar73;
        pauVar17[1] = auVar71;
      }
    }
    lVar25 = *plVar28;
    pCVar21 = (CentGeom *)param_3[10];
    pCVar30 = (CentGeom *)param_3[0xb];
    lVar23 = *param_3;
LAB_0010a93c:
    auVar71._8_8_ = pCVar30;
    auVar71._0_8_ = lVar23;
    local_c80 = (CentGeom *)((ulong)(pCVar30 + (long)pCVar21) >> 1);
    if (pCVar21 < local_c80) {
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
      pauVar17 = (undefined1 (*) [16])((long)pCVar21 * 0x20 + lVar25);
      do {
        auVar73._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
        auVar73._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
        auVar73._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
        auVar73._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
        pauVar14 = pauVar17 + 2;
        local_638 = minps(local_638,*pauVar17);
        local_628 = maxps(local_628,pauVar17[1]);
        local_618 = minps(local_618,auVar73);
        local_608 = maxps(local_608,auVar73);
        pauVar17 = pauVar14;
      } while ((undefined1 (*) [16])((long)local_c80 * 0x20 + lVar25) != pauVar14);
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
    local_d18._4_4_ = _LC2;
    local_d18._0_4_ = _LC2;
    local_d08._4_4_ = _LC4;
    local_d08._0_4_ = _LC4;
    fStack_d10 = _LC2;
    local_d08._8_4_ = _LC4;
    fStack_d0c = _LC2;
    local_d08._12_4_ = _LC4;
    if (pCVar30 <= local_c80) goto LAB_0010b305;
    pauVar17 = (undefined1 (*) [16])((long)local_c80 * 0x20 + lVar25);
    auVar73 = _local_d18;
    local_d28 = local_d08;
    local_5a8 = _local_d18;
    local_5b8 = local_d08;
    do {
      auVar43._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
      auVar43._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
      auVar43._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
      auVar43._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
      pauVar14 = pauVar17 + 2;
      local_d28 = minps(local_d28,*pauVar17);
      auVar73 = maxps(auVar73,pauVar17[1]);
      local_5b8 = minps(local_5b8,auVar43);
      local_5a8 = maxps(local_5a8,auVar43);
      pauVar17 = pauVar14;
      if ((undefined1 (*) [16])(lVar25 + (long)pCVar30 * 0x20) == pauVar14) goto LAB_0010aa01;
    } while( true );
  }
  if (local_b84 != -1) {
    local_648 = *(undefined1 (*) [16])
                 (&mm_lookupmask_ps + (ulong)(uint)(1 << ((byte)local_b84 & 0x1f)) * 2);
    local_d08._4_4_ = _LC4;
    local_d08._0_4_ = _LC4;
    local_d08._8_4_ = _LC4;
    local_d08._12_4_ = _LC4;
    local_c50 = &local_b48;
    local_c48 = local_648;
    local_c38._4_4_ = _LC4;
    local_c38._0_4_ = _LC4;
    local_c38._8_4_ = _LC4;
    local_c38._12_4_ = _LC4;
    local_c28 = _LC2;
    fStack_c24 = _LC2;
    fStack_c20 = _LC2;
    fStack_c1c = _LC2;
    local_c18._4_4_ = _LC4;
    local_c18._0_4_ = _LC4;
    local_c18._8_4_ = _LC4;
    local_c18._12_4_ = _LC4;
    local_c08 = _LC2;
    fStack_c04 = _LC2;
    fStack_c00 = _LC2;
    fStack_bfc = _LC2;
    local_bf8._4_4_ = _LC4;
    local_bf8._0_4_ = _LC4;
    local_bf8._8_4_ = _LC4;
    local_bf8._12_4_ = _LC4;
    local_be8 = _LC2;
    fStack_be4 = _LC2;
    fStack_be0 = _LC2;
    fStack_bdc = _LC2;
    local_bd8._4_4_ = _LC4;
    local_bd8._0_4_ = _LC4;
    local_bd8._8_4_ = _LC4;
    local_bd8._12_4_ = _LC4;
    local_bc8 = _LC2;
    fStack_bc4 = _LC2;
    fStack_bc0 = _LC2;
    fStack_bbc = _LC2;
    local_d18._4_4_ = _LC2;
    local_d18._0_4_ = _LC2;
    fStack_d10 = _LC2;
    fStack_d0c = _LC2;
    local_b48 = local_b80;
    iStack_b44 = local_b80;
    iStack_b40 = local_b80;
    iStack_b3c = local_b80;
    local_cd8 = local_c48;
    local_c58 = (PrimInfoRange *)&local_b88;
    local_5f0 = (CentGeom *)
                parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                          ((PrimRef *)*plVar28,(ulong)pCVar21,(ulong)pCVar30,&local_c59,
                           (CentGeom *)local_c38,(CentGeom *)local_bf8,
                           (_lambda_embree__PrimRef_const___1_ *)&local_c58,&local_c5a,&local_c5b,
                           0x80);
    auVar71._8_8_ = pCVar30;
    auVar71._0_8_ = *param_3;
    local_628._4_4_ = fStack_c24;
    local_628._0_4_ = local_c28;
    local_628._8_4_ = fStack_c20;
    local_628._12_4_ = fStack_c1c;
    local_d28 = local_bf8;
    local_608._4_4_ = fStack_c04;
    local_608._0_4_ = local_c08;
    local_608._8_4_ = fStack_c00;
    local_608._12_4_ = fStack_bfc;
    local_5a8._4_4_ = fStack_bc4;
    local_5a8._0_4_ = local_bc8;
    local_5a8._8_4_ = fStack_bc0;
    local_5a8._12_4_ = fStack_bbc;
    local_5c8 = local_be8;
    fStack_5c4 = fStack_be4;
    fStack_5c0 = fStack_be0;
    fStack_5bc = fStack_bdc;
    local_5b8 = local_bd8;
    local_618 = local_c18;
    local_638 = local_c38;
    goto LAB_00109434;
  }
  puVar19 = (undefined1 *)*plVar28;
  pauVar17 = (undefined1 (*) [16])(puVar19 + (long)pCVar30 * 0x20);
  pauVar14 = (undefined1 (*) [16])(puVar19 + (long)pCVar21 * 0x20);
  if (pauVar17 == pauVar14) goto LAB_0010b19a;
  lVar23 = (long)pCVar30 * 0x20 + (long)pCVar21 * -0x20;
  uVar32 = lVar23 >> 5;
  if (uVar32 == 0) {
    std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
              (pauVar14,pauVar17,0xfffffffffffffffe);
LAB_0010b2ed:
    std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar14,pauVar17);
  }
  else {
    lVar25 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
              (pauVar14,pauVar17,(long)(int)lVar25 * 2);
    if (lVar23 < 0x201) goto LAB_0010b2ed;
    pauVar13 = pauVar14 + 0x20;
    std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar14,pauVar13);
    for (; pauVar17 != pauVar13; pauVar13 = pauVar13 + 2) {
      uVar1 = *(undefined4 *)(pauVar13[1] + 0xc);
      uVar2 = *(undefined4 *)(*pauVar13 + 0xc);
      auVar71 = pauVar13[1];
      auVar73 = *pauVar13;
      uVar32 = CONCAT44(*(undefined4 *)(pauVar13[-1] + 0xc),*(undefined4 *)(pauVar13[-2] + 0xc));
      pauVar14 = pauVar13;
      while (CONCAT44(uVar1,uVar2) < uVar32) {
        *pauVar14 = pauVar14[-2];
        pauVar14[1] = pauVar14[-1];
        uVar32 = CONCAT44(*(undefined4 *)(pauVar14[-3] + 0xc),*(undefined4 *)(pauVar14[-4] + 0xc));
        pauVar14 = pauVar14 + -2;
      }
      *pauVar14 = auVar73;
      pauVar14[1] = auVar71;
    }
  }
  puVar19 = (undefined1 *)*plVar28;
  pCVar21 = (CentGeom *)param_3[10];
  pCVar30 = (CentGeom *)param_3[0xb];
  lVar23 = *param_3;
LAB_0010b19a:
  auVar71._8_8_ = pCVar30;
  auVar71._0_8_ = lVar23;
  local_c80 = (CentGeom *)((ulong)(pCVar30 + (long)pCVar21) >> 1);
  if (local_c80 <= pCVar21) goto LAB_0010b2a2;
  local_d18 = (undefined1  [8])CONCAT44(_LC2,_LC2);
  fStack_d10 = _LC2;
  fStack_d0c = _LC2;
  local_d08._0_8_ = CONCAT44(_LC4,_LC4);
  local_d08._8_4_ = _LC4;
  local_d08._12_4_ = _LC4;
  local_608._8_4_ = _LC2;
  local_608._0_8_ = local_d18;
  local_608._12_4_ = _LC2;
  local_618._8_4_ = _LC4;
  local_618._0_8_ = local_d08._0_8_;
  local_618._12_4_ = _LC4;
  local_628._8_4_ = _LC2;
  local_628._0_8_ = local_d18;
  local_628._12_4_ = _LC2;
  local_638._8_4_ = _LC4;
  local_638._0_8_ = local_d08._0_8_;
  local_638._12_4_ = _LC4;
  pauVar17 = (undefined1 (*) [16])(puVar19 + (long)pCVar21 * 0x20);
  do {
    auVar45._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
    auVar45._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
    auVar45._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
    auVar45._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
    pauVar14 = pauVar17 + 2;
    local_638 = minps(local_638,*pauVar17);
    local_628 = maxps(local_628,pauVar17[1]);
    local_618 = minps(local_618,auVar45);
    local_608 = maxps(local_608,auVar45);
    pauVar17 = pauVar14;
  } while ((undefined1 (*) [16])(puVar19 + (long)local_c80 * 0x20) != pauVar14);
  do {
    if (local_c80 < auVar71._8_8_) {
      pauVar17 = (undefined1 (*) [16])(puVar19 + (long)local_c80 * 0x20);
      auVar73 = _local_d18;
      local_d28 = local_d08;
      local_5a8 = _local_d18;
      local_5b8 = local_d08;
      do {
        auVar46._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
        auVar46._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
        auVar46._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
        auVar46._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
        pauVar14 = pauVar17 + 2;
        local_d28 = minps(local_d28,*pauVar17);
        auVar73 = maxps(auVar73,pauVar17[1]);
        local_5b8 = minps(local_5b8,auVar46);
        local_5a8 = maxps(local_5a8,auVar46);
        pauVar17 = pauVar14;
      } while ((undefined1 (*) [16])(puVar19 + (long)auVar71._8_8_ * 0x20) != pauVar14);
LAB_0010aa01:
      local_5c8 = auVar73._0_4_;
      fStack_5c4 = auVar73._4_4_;
      fStack_5c0 = auVar73._8_4_;
      fStack_5bc = auVar73._12_4_;
    }
    else {
LAB_0010b305:
      local_5c8 = SUB164(_local_d18,0);
      fStack_5c4 = SUB164(_local_d18,4);
      fStack_5c0 = SUB164(_local_d18,8);
      fStack_5bc = SUB164(_local_d18,0xc);
      local_5a8 = _local_d18;
      local_5b8 = local_d08;
      local_d28 = local_d08;
    }
LAB_00109407:
    local_cd8 = local_648;
    local_5f0 = local_c80;
LAB_00109434:
    local_c80 = (CentGeom *)local_bf8;
    local_cc0 = (PrimInfoRange *)&local_b48;
    local_5e8 = auVar71._0_8_ + 1;
    local_648[8] = 0;
    local_648._0_8_ = local_5e8;
    local_5f8 = pCVar21;
    local_5e0 = 0;
    local_598 = local_5f0;
    local_590 = auVar71._8_8_;
    local_5d8 = local_d28;
    if (*param_2 < 3) {
      uVar32 = param_2[7];
      if (uVar32 < (ulong)(param_3[0xb] - param_3[10])) {
        lVar25 = 0xc0;
        pCVar30 = (CentGeom *)0x2;
        lVar23 = 4;
        goto LAB_0010aea4;
      }
      pCVar30 = (CentGeom *)0x2;
      plVar28 = local_588;
LAB_00109a8e:
      uVar32 = ((long)plVar28 - (long)local_cd8 >> 5) * -0x5555555555555555;
      if (uVar32 == 0) {
        std::
        __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (local_cd8,plVar28,0xfffffffffffffffe);
      }
      else {
        lVar23 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        std::
        __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (local_cd8,plVar28,(long)(int)lVar23 * 2);
        if (0x600 < (long)plVar28 - (long)local_cd8) {
          plVar38 = &lStack_48;
          std::
          __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                    (local_cd8,plVar38);
          while (plVar28 != plVar38) {
            plVar38 = plVar38 + 0xc;
            std::
            __unguarded_linear_insert<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                      ();
          }
          goto LAB_00109b1d;
        }
      }
      std::
      __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (local_cd8,plVar28);
    }
    else {
      pCVar30 = (CentGeom *)0x2;
      plVar28 = local_588;
      do {
        pCVar24 = (CentGeom *)0x0;
        pCVar27 = (CentGeom *)0xffffffffffffffff;
        pfVar12 = (float *)local_638;
        pCVar21 = local_5f0;
        pCVar31 = local_5f8;
        fVar47 = _LC2;
        while( true ) {
          if ((param_2[3] < (ulong)((long)pCVar21 - (long)pCVar31)) &&
             (fVar48 = (pfVar12[4] - *pfVar12) *
                       ((pfVar12[5] - pfVar12[1]) + (pfVar12[6] - pfVar12[2])) +
                       (pfVar12[5] - pfVar12[1]) * (pfVar12[6] - pfVar12[2]), fVar47 < fVar48)) {
            pCVar27 = pCVar24;
            fVar47 = fVar48;
          }
          pCVar24 = pCVar24 + 1;
          if (pCVar24 == pCVar30) break;
          pCVar21 = *(CentGeom **)(pfVar12 + 0x2a);
          pCVar31 = *(CentGeom **)(pfVar12 + 0x28);
          pfVar12 = pfVar12 + 0x18;
        }
        if (pCVar27 == (CentGeom *)0xffffffffffffffff) break;
        lVar25 = *param_3;
        lVar23 = (long)pCVar27 * 0x60 + 0x10 + (long)local_cd8;
        HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find(local_cc0,*(ulong *)param_2[9]);
        plVar38 = (long *)param_2[9];
        uVar32 = *(ulong *)(lVar23 + 0x48);
        uVar16 = *(ulong *)(lVar23 + 0x40);
        auVar71 = local_d08;
        auVar73 = local_d08;
        local_d28 = _local_d18;
        auVar70 = _local_d18;
        auVar43 = local_d08;
        auVar72 = _local_d18;
        auVar52 = local_d08;
        auVar78 = _local_d18;
        if (uVar32 - uVar16 < 0xc00) {
          lVar35 = *plVar38;
          lVar36 = uVar32 * 0x20;
          pauVar17 = (undefined1 (*) [16])(lVar35 + uVar16 * 0x20);
          if (iStack_b44 == -1) {
            pauVar14 = (undefined1 (*) [16])(lVar35 + lVar36);
            if (pauVar14 != pauVar17) {
              lVar36 = lVar36 + uVar16 * -0x20;
              uVar32 = lVar36 >> 5;
              if (uVar32 == 0) {
                std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar17,pauVar14,0xfffffffffffffffe);
              }
              else {
                lVar35 = 0x3f;
                if (uVar32 != 0) {
                  for (; uVar32 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                  }
                }
                std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar17,pauVar14,(long)(int)lVar35 * 2);
                if (0x200 < lVar36) {
                  pauVar13 = pauVar17 + 0x20;
                  std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                            (pauVar17,pauVar13);
                  for (; pauVar14 != pauVar13; pauVar13 = pauVar13 + 2) {
                    uVar1 = *(undefined4 *)(pauVar13[1] + 0xc);
                    uVar2 = *(undefined4 *)(*pauVar13 + 0xc);
                    uVar26 = *(undefined8 *)pauVar13[1];
                    uVar8 = *(undefined8 *)(pauVar13[1] + 8);
                    auVar64 = *pauVar13;
                    uVar32 = CONCAT44(*(undefined4 *)(pauVar13[-1] + 0xc),
                                      *(undefined4 *)(pauVar13[-2] + 0xc));
                    pauVar17 = pauVar13;
                    while (CONCAT44(uVar1,uVar2) < uVar32) {
                      *pauVar17 = pauVar17[-2];
                      pauVar17[1] = pauVar17[-1];
                      uVar32 = CONCAT44(*(undefined4 *)(pauVar17[-3] + 0xc),
                                        *(undefined4 *)(pauVar17[-4] + 0xc));
                      pauVar17 = pauVar17 + -2;
                    }
                    *pauVar17 = auVar64;
                    *(undefined8 *)pauVar17[1] = uVar26;
                    *(undefined8 *)(pauVar17[1] + 8) = uVar8;
                  }
                  lVar35 = *plVar38;
                  uVar16 = *(ulong *)(lVar23 + 0x40);
                  uVar32 = *(ulong *)(lVar23 + 0x48);
                  goto LAB_0010a1b4;
                }
              }
              std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar17,pauVar14);
              uVar16 = *(ulong *)(lVar23 + 0x40);
              lVar35 = *plVar38;
              uVar32 = *(ulong *)(lVar23 + 0x48);
            }
LAB_0010a1b4:
            uVar33 = uVar16 + uVar32 >> 1;
            if (uVar16 < uVar33) {
              pauVar17 = (undefined1 (*) [16])(uVar16 * 0x20 + lVar35);
              do {
                auVar53._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
                auVar53._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
                auVar53._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
                auVar53._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
                pauVar14 = pauVar17 + 2;
                auVar71 = minps(auVar71,*pauVar17);
                auVar78 = maxps(auVar78,pauVar17[1]);
                auVar52 = minps(auVar52,auVar53);
                auVar72 = maxps(auVar72,auVar53);
                pauVar17 = pauVar14;
              } while ((undefined1 (*) [16])(uVar33 * 0x20 + lVar35) != pauVar14);
            }
            if (uVar33 < uVar32) {
              pauVar17 = (undefined1 (*) [16])(uVar33 * 0x20 + lVar35);
              do {
                auVar54._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
                auVar54._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
                auVar54._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
                auVar54._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
                pauVar14 = pauVar17 + 2;
                auVar73 = minps(auVar73,*pauVar17);
                local_d28 = maxps(local_d28,pauVar17[1]);
                auVar43 = minps(auVar43,auVar54);
                auVar70 = maxps(auVar70,auVar54);
                pauVar17 = pauVar14;
              } while ((undefined1 (*) [16])(uVar32 * 0x20 + lVar35) != pauVar14);
            }
          }
          else {
            iVar20 = 0x1130f8;
            auVar64 = *(undefined1 (*) [16])
                       (&mm_lookupmask_ps + (ulong)(uint)(1 << ((byte)iStack_b44 & 0x1f)) * 2);
            pauVar14 = (undefined1 (*) [16])(lVar35 + -0x20 + lVar36);
            for (; pauVar17 <= pauVar14; pauVar17 = pauVar17 + 2) {
              auVar76 = pauVar17[1];
              auVar45 = *pauVar17;
              auVar59._0_4_ = auVar76._0_4_ + auVar45._0_4_;
              auVar59._4_4_ = auVar76._4_4_ + auVar45._4_4_;
              auVar59._8_4_ = auVar76._8_4_ + auVar45._8_4_;
              auVar59._12_4_ = auVar76._12_4_ + auVar45._12_4_;
              local_d38 = auVar64._0_4_;
              uStack_d34 = auVar64._4_4_;
              uStack_d30 = auVar64._8_4_;
              uStack_d2c = auVar64._12_4_;
              auVar61._0_4_ =
                   -(uint)((int)((auVar59._0_4_ - local_b28) * local_b18._0_4_ + _LC26) < iStack_b40
                          ) & local_d38;
              auVar61._4_4_ =
                   -(uint)((int)((auVar59._4_4_ - fStack_b24) * local_b18._4_4_ + _UNK_00111ce4) <
                          iStack_b40) & uStack_d34;
              auVar61._8_4_ =
                   -(uint)((int)((auVar59._8_4_ - fStack_b20) * local_b18._8_4_ + _UNK_00111ce8) <
                          iStack_b40) & uStack_d30;
              auVar61._12_4_ =
                   -(uint)((int)((auVar59._12_4_ - fStack_b1c) * local_b18._12_4_ + _UNK_00111cec) <
                          iStack_b40) & uStack_d2c;
              iVar20 = movmskps(iVar20,auVar61);
              if (iVar20 == 0) {
                while( true ) {
                  auVar50 = pauVar14[1];
                  auVar60 = *pauVar14;
                  pauVar13 = pauVar14 + -2;
                  auVar62._0_4_ = auVar50._0_4_ + auVar60._0_4_;
                  auVar62._4_4_ = auVar50._4_4_ + auVar60._4_4_;
                  auVar62._8_4_ = auVar50._8_4_ + auVar60._8_4_;
                  auVar62._12_4_ = auVar50._12_4_ + auVar60._12_4_;
                  auVar49._0_4_ =
                       -(uint)((int)((auVar62._0_4_ - local_b28) * local_b18._0_4_ + _LC26) <
                              iStack_b40) & local_d38;
                  auVar49._4_4_ =
                       -(uint)((int)((auVar62._4_4_ - fStack_b24) * local_b18._4_4_ + _UNK_00111ce4)
                              < iStack_b40) & uStack_d34;
                  auVar49._8_4_ =
                       -(uint)((int)((auVar62._8_4_ - fStack_b20) * local_b18._8_4_ + _UNK_00111ce8)
                              < iStack_b40) & uStack_d30;
                  auVar49._12_4_ =
                       -(uint)((int)((auVar62._12_4_ - fStack_b1c) * local_b18._12_4_ +
                                    _UNK_00111cec) < iStack_b40) & uStack_d2c;
                  iVar20 = movmskps(0,auVar49);
                  if (iVar20 != 0) break;
                  auVar73 = minps(auVar73,auVar60);
                  local_d28 = maxps(local_d28,auVar50);
                  auVar43 = minps(auVar43,auVar62);
                  auVar70 = maxps(auVar70,auVar62);
                  pauVar14 = pauVar13;
                  if (pauVar13 < pauVar17) goto LAB_001096ec;
                }
                *pauVar17 = auVar60;
                auVar78 = maxps(auVar78,auVar50);
                auVar52 = minps(auVar52,auVar62);
                auVar73 = minps(auVar73,auVar45);
                local_d28 = maxps(local_d28,auVar76);
                auVar71 = minps(auVar71,auVar60);
                uVar26 = *(undefined8 *)(pauVar14[1] + 8);
                auVar72 = maxps(auVar72,auVar62);
                auVar43 = minps(auVar43,auVar59);
                auVar70 = maxps(auVar70,auVar59);
                *(undefined8 *)pauVar17[1] = *(undefined8 *)pauVar14[1];
                *(undefined8 *)(pauVar17[1] + 8) = uVar26;
                *pauVar14 = auVar45;
                pauVar14[1] = auVar76;
              }
              else {
                auVar71 = minps(auVar71,auVar45);
                auVar78 = maxps(auVar78,auVar76);
                auVar52 = minps(auVar52,auVar59);
                auVar72 = maxps(auVar72,auVar59);
                pauVar13 = pauVar14;
              }
              pauVar14 = pauVar13;
            }
LAB_001096ec:
            uVar33 = (long)pauVar17 - lVar35 >> 5;
          }
        }
        else if (iStack_b44 == -1) {
          lVar35 = *plVar38;
          pauVar17 = (undefined1 (*) [16])(lVar35 + uVar32 * 0x20);
          pauVar14 = (undefined1 (*) [16])(lVar35 + uVar16 * 0x20);
          if (pauVar17 != pauVar14) {
            lVar35 = uVar32 * 0x20 + uVar16 * -0x20;
            uVar32 = lVar35 >> 5;
            if (uVar32 == 0) {
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar14,pauVar17,0xfffffffffffffffe);
            }
            else {
              lVar36 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                }
              }
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar14,pauVar17,(long)(int)lVar36 * 2);
              if (0x200 < lVar35) {
                pauVar13 = pauVar14 + 0x20;
                std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar14,pauVar13);
                for (; pauVar17 != pauVar13; pauVar13 = pauVar13 + 2) {
                  uVar1 = *(undefined4 *)(pauVar13[1] + 0xc);
                  uVar2 = *(undefined4 *)(*pauVar13 + 0xc);
                  uVar26 = *(undefined8 *)pauVar13[1];
                  uVar8 = *(undefined8 *)(pauVar13[1] + 8);
                  auVar64 = *pauVar13;
                  uVar32 = CONCAT44(*(undefined4 *)(pauVar13[-1] + 0xc),
                                    *(undefined4 *)(pauVar13[-2] + 0xc));
                  pauVar14 = pauVar13;
                  while (CONCAT44(uVar1,uVar2) < uVar32) {
                    uVar9 = *(undefined8 *)pauVar14[-1];
                    uVar10 = *(undefined8 *)(pauVar14[-1] + 8);
                    *pauVar14 = pauVar14[-2];
                    *(undefined8 *)pauVar14[1] = uVar9;
                    *(undefined8 *)(pauVar14[1] + 8) = uVar10;
                    uVar32 = CONCAT44(*(undefined4 *)(pauVar14[-3] + 0xc),
                                      *(undefined4 *)(pauVar14[-4] + 0xc));
                    pauVar14 = pauVar14 + -2;
                  }
                  *pauVar14 = auVar64;
                  *(undefined8 *)pauVar14[1] = uVar26;
                  *(undefined8 *)(pauVar14[1] + 8) = uVar8;
                }
                lVar35 = *plVar38;
                uVar16 = *(ulong *)(lVar23 + 0x40);
                uVar32 = *(ulong *)(lVar23 + 0x48);
                goto LAB_0010ab75;
              }
            }
            std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar14,pauVar17);
            uVar16 = *(ulong *)(lVar23 + 0x40);
            lVar35 = *plVar38;
            uVar32 = *(ulong *)(lVar23 + 0x48);
          }
LAB_0010ab75:
          uVar33 = uVar16 + uVar32 >> 1;
          if (uVar16 < uVar33) {
            pauVar17 = (undefined1 (*) [16])(uVar16 * 0x20 + lVar35);
            do {
              auVar56._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
              auVar56._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
              auVar56._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
              auVar56._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
              pauVar14 = pauVar17 + 2;
              auVar71 = minps(auVar71,*pauVar17);
              auVar78 = maxps(auVar78,pauVar17[1]);
              auVar52 = minps(auVar52,auVar56);
              auVar72 = maxps(auVar72,auVar56);
              pauVar17 = pauVar14;
            } while ((undefined1 (*) [16])(uVar33 * 0x20 + lVar35) != pauVar14);
          }
          if (uVar33 < uVar32) {
            pauVar17 = (undefined1 (*) [16])(uVar33 * 0x20 + lVar35);
            do {
              auVar57._0_4_ = *(float *)pauVar17[1] + *(float *)*pauVar17;
              auVar57._4_4_ = *(float *)(pauVar17[1] + 4) + *(float *)(*pauVar17 + 4);
              auVar57._8_4_ = *(float *)(pauVar17[1] + 8) + *(float *)(*pauVar17 + 8);
              auVar57._12_4_ = *(float *)(pauVar17[1] + 0xc) + *(float *)(*pauVar17 + 0xc);
              pauVar14 = pauVar17 + 2;
              auVar73 = minps(auVar73,*pauVar17);
              local_d28 = maxps(local_d28,pauVar17[1]);
              auVar43 = minps(auVar43,auVar57);
              auVar70 = maxps(auVar70,auVar57);
              pauVar17 = pauVar14;
            } while ((undefined1 (*) [16])(lVar35 + uVar32 * 0x20) != pauVar14);
          }
        }
        else {
          local_b98 = *(undefined1 (*) [16])
                       (&mm_lookupmask_ps + (ulong)(uint)(1 << ((byte)iStack_b44 & 0x1f)) * 2);
          local_ba8 = iStack_b40;
          iStack_ba4 = iStack_b40;
          iStack_ba0 = iStack_b40;
          iStack_b9c = iStack_b40;
          local_c28 = SUB164(_local_d18,0);
          fStack_c24 = SUB164(_local_d18,4);
          fStack_c20 = SUB164(_local_d18,8);
          fStack_c1c = SUB164(_local_d18,0xc);
          local_c58 = local_cc0;
          local_c50 = &local_ba8;
          local_c48 = local_b98;
          local_c38 = local_d08;
          local_c18 = local_d08;
          local_c08 = local_c28;
          fStack_c04 = fStack_c24;
          fStack_c00 = fStack_c20;
          fStack_bfc = fStack_c1c;
          local_bf8 = local_d08;
          local_be8 = local_c28;
          fStack_be4 = fStack_c24;
          fStack_be0 = fStack_c20;
          fStack_bdc = fStack_c1c;
          local_bd8 = local_d08;
          local_bc8 = local_c28;
          fStack_bc4 = fStack_c24;
          fStack_bc0 = fStack_c20;
          fStack_bbc = fStack_c1c;
          uVar33 = parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                             ((PrimRef *)*plVar38,uVar16,uVar32,&local_c59,(CentGeom *)local_c38,
                              local_c80,(_lambda_embree__PrimRef_const___1_ *)&local_c58,&local_c5a,
                              &local_c5b,0x80);
          auVar78._4_4_ = fStack_c24;
          auVar78._0_4_ = local_c28;
          auVar78._8_4_ = fStack_c20;
          auVar78._12_4_ = fStack_c1c;
          auVar72._4_4_ = fStack_c04;
          auVar72._0_4_ = local_c08;
          auVar72._8_4_ = fStack_c00;
          auVar72._12_4_ = fStack_bfc;
          local_d28._4_4_ = fStack_be4;
          local_d28._0_4_ = local_be8;
          local_d28._8_4_ = fStack_be0;
          local_d28._12_4_ = fStack_bdc;
          auVar70._4_4_ = fStack_bc4;
          auVar70._0_4_ = local_bc8;
          auVar70._8_4_ = fStack_bc0;
          auVar70._12_4_ = fStack_bbc;
          auVar71 = local_c38;
          auVar73 = local_bf8;
          auVar43 = local_bd8;
          auVar52 = local_c18;
        }
        pCVar30 = pCVar30 + 1;
        local_648[(long)pCVar27 * 0x60 + 8] = 0;
        lVar23 = (long)pCVar27 * 0x60 + (long)local_cd8;
        *(long *)(local_648 + (long)pCVar27 * 0x60) = lVar25 + 1;
        *(ulong *)(lVar23 + 0x50) = uVar16;
        *(ulong *)(lVar23 + 0x58) = uVar33;
        *(undefined1 (*) [16])(lVar23 + 0x10) = auVar71;
        *(undefined1 (*) [16])(lVar23 + 0x20) = auVar78;
        *(undefined1 (*) [16])(lVar23 + 0x30) = auVar52;
        *(undefined1 (*) [16])(lVar23 + 0x40) = auVar72;
        *plVar28 = lVar25 + 1;
        *(undefined1 *)(plVar28 + 1) = 0;
        *(undefined1 (*) [16])(plVar28 + 2) = auVar73;
        *(undefined1 (*) [16])(plVar28 + 4) = local_d28;
        *(undefined1 (*) [16])(plVar28 + 6) = auVar43;
        *(undefined1 (*) [16])(plVar28 + 8) = auVar70;
        plVar28[10] = uVar33;
        plVar28[0xb] = uVar32;
        plVar28 = plVar28 + 0xc;
      } while (pCVar30 < (CentGeom *)*param_2);
      lVar23 = (long)pCVar30 * 2;
      uVar32 = param_2[7];
      lVar25 = (long)pCVar30 * 0x60;
      if (uVar32 < (ulong)(param_3[0xb] - param_3[10])) {
LAB_0010aea4:
        puVar19 = local_648 + 8;
        puVar22 = puVar19 + (long)(pCVar30 + lVar23) * 0x20;
        do {
          *puVar19 = (ulong)(*(long *)(puVar19 + 0x50) - *(long *)(puVar19 + 0x48)) <= uVar32;
          puVar19 = puVar19 + 0x60;
        } while (puVar22 != puVar19);
      }
      plVar28 = (long *)((long)local_cd8 + lVar25);
      if (lVar25 != 0) goto LAB_00109a8e;
    }
LAB_00109b1d:
    local_c38._0_8_ = 0xe0;
    lVar23 = *(long *)local_c98;
    if (param_7 != *(FastAllocator **)(lVar23 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(lVar23 + 8) != 0) {
        LOCK();
        plVar28 = (long *)(*(long *)(lVar23 + 8) + 0x118);
        *plVar28 = *plVar28 + *(long *)(lVar23 + 0xa8) + *(long *)(lVar23 + 0x68);
        UNLOCK();
        LOCK();
        plVar28 = (long *)(*(long *)(lVar23 + 8) + 0x120);
        *plVar28 = *plVar28 +
                   (((*(long *)(lVar23 + 0x98) + *(long *)(lVar23 + 0x58)) -
                    *(long *)(lVar23 + 0x50)) - *(long *)(lVar23 + 0x90));
        UNLOCK();
        LOCK();
        plVar28 = (long *)(*(long *)(lVar23 + 8) + 0x128);
        *plVar28 = *plVar28 + *(long *)(lVar23 + 0xb0) + *(long *)(lVar23 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(lVar23 + 0x48) = 0;
      *(undefined8 *)(lVar23 + 0x58) = 0;
      *(undefined8 *)(lVar23 + 0x50) = 0;
      *(undefined8 *)(lVar23 + 0x68) = 0;
      *(undefined8 *)(lVar23 + 0x70) = 0;
      *(undefined8 *)(lVar23 + 0x60) = 0;
      if (param_7 == (FastAllocator *)0x0) {
        *(undefined8 *)(lVar23 + 0x88) = 0;
        uVar26 = 0;
        *(undefined8 *)(lVar23 + 0x98) = 0;
        *(undefined8 *)(lVar23 + 0x90) = 0;
        *(undefined8 *)(lVar23 + 0xa8) = 0;
        *(undefined8 *)(lVar23 + 0xb0) = 0;
      }
      else {
        uVar26 = *(undefined8 *)(param_7 + 0x10);
        *(undefined8 *)(lVar23 + 0x88) = 0;
        *(undefined8 *)(lVar23 + 0x98) = 0;
        *(undefined8 *)(lVar23 + 0x60) = uVar26;
        *(undefined8 *)(lVar23 + 0x90) = 0;
        *(undefined8 *)(lVar23 + 0xa8) = 0;
        *(undefined8 *)(lVar23 + 0xb0) = 0;
        *(undefined8 *)(lVar23 + 0xa0) = 0;
        uVar26 = *(undefined8 *)(param_7 + 0x10);
      }
      *(undefined8 *)(lVar23 + 0xa0) = uVar26;
      LOCK();
      *(FastAllocator **)(lVar23 + 8) = param_7;
      UNLOCK();
      local_bf8._0_8_ = lVar23;
      embree::MutexSys::lock();
      plVar28 = *(long **)(param_7 + 0x138);
      if (plVar28 == *(long **)(param_7 + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(param_7 + 0x130),plVar28,local_c80);
      }
      else {
        *plVar28 = lVar23;
        *(long *)(param_7 + 0x138) = *(long *)(param_7 + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
    }
    lVar23 = *(long *)(local_c98 + 0x10);
    *(long *)(local_c98 + 0x28) = *(long *)(local_c98 + 0x28) + 0xe0;
    uVar16 = (ulong)(-(int)lVar23 & 0xf);
    uVar32 = lVar23 + 0xe0 + uVar16;
    *(ulong *)(local_c98 + 0x10) = uVar32;
    if (*(ulong *)(local_c98 + 0x18) < uVar32) {
      *(long *)(local_c98 + 0x10) = lVar23;
      if (*(ulong *)(local_c98 + 0x20) < 0x380) {
        puVar18 = (undefined8 *)FastAllocator::malloc(param_7,(ulong *)local_c38,0x40,false);
      }
      else {
        local_bf8._0_8_ = *(ulong *)(local_c98 + 0x20);
        puVar18 = (undefined8 *)FastAllocator::malloc(param_7,(ulong *)local_c80,0x40,true);
        *(undefined8 **)(local_c98 + 8) = puVar18;
        *(long *)(local_c98 + 0x30) =
             (*(long *)(local_c98 + 0x18) + *(long *)(local_c98 + 0x30)) -
             *(long *)(local_c98 + 0x10);
        *(long *)(local_c98 + 0x10) = 0xe0;
        *(undefined8 *)(local_c98 + 0x18) = local_bf8._0_8_;
        if ((ulong)local_bf8._0_8_ < 0xe0) {
          *(long *)(local_c98 + 0x10) = 0;
          local_bf8._0_8_ = *(long *)(local_c98 + 0x20);
          puVar18 = (undefined8 *)FastAllocator::malloc(param_7,(ulong *)local_c80,0x40,false);
          *(undefined8 **)(local_c98 + 8) = puVar18;
          *(long *)(local_c98 + 0x30) =
               (*(long *)(local_c98 + 0x18) + *(long *)(local_c98 + 0x30)) -
               *(long *)(local_c98 + 0x10);
          *(long *)(local_c98 + 0x10) = 0xe0;
          *(undefined8 *)(local_c98 + 0x18) = local_bf8._0_8_;
          if ((ulong)local_bf8._0_8_ < 0xe0) {
            *(long *)(local_c98 + 0x10) = 0;
            puVar18 = (undefined8 *)0x0;
          }
        }
      }
    }
    else {
      *(ulong *)(local_c98 + 0x30) = *(long *)(local_c98 + 0x30) + uVar16;
      puVar18 = (undefined8 *)(*(long *)(local_c98 + 8) + -0xe0 + uVar32);
    }
    *puVar18 = 8;
    puVar18[1] = 8;
    puVar18[2] = 8;
    puVar18[3] = 8;
    *(undefined1 (*) [16])(puVar18 + 0xc) = local_d08;
    *(undefined1 (*) [16])(puVar18 + 8) = local_d08;
    *(undefined1 (*) [16])(puVar18 + 4) = local_d08;
    *(undefined1 (*) [16])(puVar18 + 0xe) = _local_d18;
    *(undefined1 (*) [16])(puVar18 + 10) = _local_d18;
    *(undefined1 (*) [16])(puVar18 + 6) = _local_d18;
    *(undefined1 (*) [16])(puVar18 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar18 + 0x14) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar18 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar18 + 0x1a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar18 + 0x16) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar18 + 0x12) = (undefined1  [16])0x0;
    if ((ulong)(param_3[0xb] - param_3[10]) <= param_2[6]) {
      pPVar39 = local_cc0;
      do {
        pPVar40 = pPVar39 + 0x50;
        recurse(local_c80,param_2,local_cd8,0);
        fVar48 = _LC23;
        uVar1 = _LC18;
        fVar47 = _LC11;
        uVar11 = _LC16;
        uVar34 = _LC15;
        *(undefined8 *)pPVar39 = local_bf8._0_8_;
        *(ulong *)(pPVar39 + 0x10) = CONCAT44(fStack_be4,local_be8);
        *(ulong *)(pPVar39 + 0x18) = CONCAT44(fStack_bdc,fStack_be0);
        *(undefined8 *)(pPVar39 + 0x20) = local_bd8._0_8_;
        *(undefined8 *)(pPVar39 + 0x28) = local_bd8._8_8_;
        *(ulong *)(pPVar39 + 0x30) = CONCAT44(fStack_bc4,local_bc8);
        *(ulong *)(pPVar39 + 0x38) = CONCAT44(fStack_bbc,fStack_bc0);
        *(undefined8 *)(pPVar39 + 0x40) = uStack_bb8;
        *(undefined8 *)(pPVar39 + 0x48) = uStack_bb0;
        pPVar39 = pPVar40;
        local_cd8 = (undefined1 *)((long)local_cd8 + 0x60);
      } while (local_cc0 + (long)pCVar30 * 0x50 != pPVar40);
      uVar16 = (ulong)puVar18 & 0xfffffffffffffff0;
      pfVar12 = (float *)param_2[0xc];
      auVar68._4_4_ = _LC20;
      auVar68._0_4_ = _LC20;
      auVar68._8_4_ = _LC20;
      auVar68._12_4_ = _LC20;
      uVar32 = uVar16;
      auVar71 = _local_d18;
      auVar73 = local_d08;
      do {
        *(undefined8 *)(uVar32 * 2 - uVar16) = *(undefined8 *)local_cc0;
        fVar58 = *pfVar12;
        uVar33 = uVar32 + 4;
        fVar79 = fVar47 / (pfVar12[1] - fVar58);
        fVar41 = (float)((uint)fVar58 ^ uVar11) * fVar79;
        fVar79 = (fVar47 - fVar58) * fVar79;
        fVar74 = fVar47 - fVar41;
        fVar58 = fVar47 - fVar79;
        auVar51._0_4_ =
             *(float *)(local_cc0 + 0x40) * fVar41 + *(float *)(local_cc0 + 0x20) * fVar74;
        auVar51._4_4_ =
             *(float *)(local_cc0 + 0x44) * fVar41 + *(float *)(local_cc0 + 0x24) * fVar74;
        auVar51._8_4_ =
             *(float *)(local_cc0 + 0x48) * fVar41 + *(float *)(local_cc0 + 0x28) * fVar74;
        auVar51._12_4_ =
             *(float *)(local_cc0 + 0x4c) * fVar41 + *(float *)(local_cc0 + 0x2c) * fVar74;
        auVar63._0_4_ =
             fVar41 * *(float *)(local_cc0 + 0x30) + fVar74 * *(float *)(local_cc0 + 0x10);
        auVar63._4_4_ =
             fVar41 * *(float *)(local_cc0 + 0x34) + fVar74 * *(float *)(local_cc0 + 0x14);
        auVar63._8_4_ =
             fVar41 * *(float *)(local_cc0 + 0x38) + fVar74 * *(float *)(local_cc0 + 0x18);
        auVar63._12_4_ =
             fVar41 * *(float *)(local_cc0 + 0x3c) + fVar74 * *(float *)(local_cc0 + 0x1c);
        auVar3._4_4_ = uVar1;
        auVar3._0_4_ = uVar1;
        auVar3._8_4_ = uVar1;
        auVar3._12_4_ = uVar1;
        auVar52 = maxps(auVar51,auVar3);
        auVar64 = minps(auVar63,auVar68);
        auVar75._0_4_ =
             *(float *)(local_cc0 + 0x40) * fVar79 + *(float *)(local_cc0 + 0x20) * fVar58;
        auVar75._4_4_ =
             *(float *)(local_cc0 + 0x44) * fVar79 + *(float *)(local_cc0 + 0x24) * fVar58;
        auVar75._8_4_ =
             *(float *)(local_cc0 + 0x48) * fVar79 + *(float *)(local_cc0 + 0x28) * fVar58;
        auVar75._12_4_ =
             *(float *)(local_cc0 + 0x4c) * fVar79 + *(float *)(local_cc0 + 0x2c) * fVar58;
        auVar42._0_4_ =
             fVar79 * *(float *)(local_cc0 + 0x30) + fVar58 * *(float *)(local_cc0 + 0x10);
        auVar42._4_4_ =
             fVar79 * *(float *)(local_cc0 + 0x34) + fVar58 * *(float *)(local_cc0 + 0x14);
        auVar42._8_4_ =
             fVar79 * *(float *)(local_cc0 + 0x38) + fVar58 * *(float *)(local_cc0 + 0x18);
        auVar42._12_4_ =
             fVar79 * *(float *)(local_cc0 + 0x3c) + fVar58 * *(float *)(local_cc0 + 0x1c);
        auVar4._4_4_ = uVar1;
        auVar4._0_4_ = uVar1;
        auVar4._8_4_ = uVar1;
        auVar4._12_4_ = uVar1;
        auVar76 = maxps(auVar75,auVar4);
        auVar43 = minps(auVar42,auVar68);
        fVar58 = (float)((uint)auVar52._0_4_ & uVar34) * fVar48 + auVar52._0_4_;
        fVar41 = (float)((uint)auVar52._4_4_ & uVar34) * fVar48 + auVar52._4_4_;
        fVar79 = (float)((uint)auVar52._8_4_ & uVar34) * fVar48 + auVar52._8_4_;
        *(float *)(uVar32 + 0x30) = fVar58;
        fVar74 = auVar64._0_4_ - (float)((uint)auVar64._0_4_ & uVar34) * fVar48;
        fVar66 = auVar64._4_4_ - (float)((uint)auVar64._4_4_ & uVar34) * fVar48;
        fVar67 = auVar64._8_4_ - (float)((uint)auVar64._8_4_ & uVar34) * fVar48;
        *(float *)(uVar32 + 0x20) = fVar74;
        *(float *)(uVar32 + 0x80) =
             (auVar43._0_4_ - (float)((uint)auVar43._0_4_ & uVar34) * fVar48) - fVar74;
        *(float *)(uVar32 + 0x40) = fVar66;
        *(float *)(uVar32 + 0x60) = fVar67;
        *(float *)(uVar32 + 0x50) = fVar41;
        *(float *)(uVar32 + 0x70) = fVar79;
        *(float *)(uVar32 + 0xa0) =
             (auVar43._4_4_ - (float)((uint)auVar43._4_4_ & uVar34) * fVar48) - fVar66;
        *(float *)(uVar32 + 0xc0) =
             (auVar43._8_4_ - (float)((uint)auVar43._8_4_ & uVar34) * fVar48) - fVar67;
        *(float *)(uVar32 + 0x90) =
             ((float)((uint)auVar76._0_4_ & uVar34) * fVar48 + auVar76._0_4_) - fVar58;
        *(float *)(uVar32 + 0xb0) =
             ((float)((uint)auVar76._4_4_ & uVar34) * fVar48 + auVar76._4_4_) - fVar41;
        *(float *)(uVar32 + 0xd0) =
             ((float)((uint)auVar76._8_4_ & uVar34) * fVar48 + auVar76._8_4_) - fVar79;
        auVar73 = minps(auVar73,*(undefined1 (*) [16])(local_cc0 + 0x10));
        _local_d18 = maxps(_local_d18,*(undefined1 (*) [16])(local_cc0 + 0x20));
        local_d08 = minps(local_d08,*(undefined1 (*) [16])(local_cc0 + 0x30));
        auVar71 = maxps(auVar71,*(undefined1 (*) [16])(local_cc0 + 0x40));
        uVar32 = uVar33;
        local_cc0 = local_cc0 + 0x50;
      } while ((long)pCVar30 * 4 + uVar16 != uVar33);
      *(ulong *)param_1 = (ulong)puVar18 | 1;
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar73;
      *(undefined1 (*) [16])(param_1 + 0x20) = _local_d18;
      *(undefined1 (*) [16])(param_1 + 0x30) = local_d08;
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar71;
      goto LAB_0010922d;
    }
    local_bf8._8_8_ = local_cd8;
    local_bf8._0_8_ = local_cc0;
    local_be8 = SUB84(param_2,0);
    fStack_be4 = (float)((ulong)param_2 >> 0x20);
    local_c58 = (PrimInfoRange *)0x0;
    pCVar21 = pCVar30;
    TaskScheduler::
    spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (0,(ulong)pCVar30,1,(_lambda_embree__range<unsigned_long>_const___1_ *)local_c80,
               (TaskGroupContext *)&local_c58);
    embree::TaskScheduler::wait();
    fVar48 = _LC23;
    uVar1 = _LC18;
    fVar47 = _LC11;
    uVar11 = _LC16;
    uVar34 = _LC15;
    if (local_c58 == (PrimInfoRange *)0x0) break;
    puVar19 = local_c38;
    local_c38._0_8_ = local_c58;
    std::__exception_ptr::exception_ptr::_M_addref();
    auVar71 = std::rethrow_exception();
LAB_0010b2a2:
    local_d18 = (undefined1  [8])CONCAT44(_LC2,_LC2);
    fStack_d10 = _LC2;
    fStack_d0c = _LC2;
    local_d08._0_8_ = CONCAT44(_LC4,_LC4);
    local_d08._8_4_ = _LC4;
    local_d08._12_4_ = _LC4;
    local_608._8_4_ = _LC2;
    local_608._0_8_ = local_d18;
    local_608._12_4_ = _LC2;
    local_618._8_4_ = _LC4;
    local_618._0_8_ = local_d08._0_8_;
    local_618._12_4_ = _LC4;
    local_628._8_4_ = _LC2;
    local_628._0_8_ = local_d18;
    local_628._12_4_ = _LC2;
    local_638._8_4_ = _LC4;
    local_638._0_8_ = local_d08._0_8_;
    local_638._12_4_ = _LC4;
  } while( true );
  uVar16 = (ulong)puVar18 & 0xfffffffffffffff0;
  pfVar12 = (float *)param_2[0xc];
  auVar69._4_4_ = _LC20;
  auVar69._0_4_ = _LC20;
  auVar69._8_4_ = _LC20;
  auVar69._12_4_ = _LC20;
  uVar32 = uVar16;
  auVar71 = local_d08;
  auVar73 = _local_d18;
  do {
    *(undefined8 *)(uVar32 * 2 - uVar16) = *(undefined8 *)local_cc0;
    fVar58 = *pfVar12;
    uVar33 = uVar32 + 4;
    fVar79 = fVar47 / (pfVar12[1] - fVar58);
    fVar41 = (float)((uint)fVar58 ^ uVar11) * fVar79;
    fVar79 = (fVar47 - fVar58) * fVar79;
    fVar74 = fVar47 - fVar41;
    fVar58 = fVar47 - fVar79;
    auVar55._0_4_ = *(float *)(local_cc0 + 0x40) * fVar41 + *(float *)(local_cc0 + 0x20) * fVar74;
    auVar55._4_4_ = *(float *)(local_cc0 + 0x44) * fVar41 + *(float *)(local_cc0 + 0x24) * fVar74;
    auVar55._8_4_ = *(float *)(local_cc0 + 0x48) * fVar41 + *(float *)(local_cc0 + 0x28) * fVar74;
    auVar55._12_4_ = *(float *)(local_cc0 + 0x4c) * fVar41 + *(float *)(local_cc0 + 0x2c) * fVar74;
    auVar65._0_4_ = fVar41 * *(float *)(local_cc0 + 0x30) + fVar74 * *(float *)(local_cc0 + 0x10);
    auVar65._4_4_ = fVar41 * *(float *)(local_cc0 + 0x34) + fVar74 * *(float *)(local_cc0 + 0x14);
    auVar65._8_4_ = fVar41 * *(float *)(local_cc0 + 0x38) + fVar74 * *(float *)(local_cc0 + 0x18);
    auVar65._12_4_ = fVar41 * *(float *)(local_cc0 + 0x3c) + fVar74 * *(float *)(local_cc0 + 0x1c);
    auVar5._4_4_ = uVar1;
    auVar5._0_4_ = uVar1;
    auVar5._8_4_ = uVar1;
    auVar5._12_4_ = uVar1;
    auVar52 = maxps(auVar55,auVar5);
    auVar64 = minps(auVar65,auVar69);
    auVar77._0_4_ = *(float *)(local_cc0 + 0x40) * fVar79 + *(float *)(local_cc0 + 0x20) * fVar58;
    auVar77._4_4_ = *(float *)(local_cc0 + 0x44) * fVar79 + *(float *)(local_cc0 + 0x24) * fVar58;
    auVar77._8_4_ = *(float *)(local_cc0 + 0x48) * fVar79 + *(float *)(local_cc0 + 0x28) * fVar58;
    auVar77._12_4_ = *(float *)(local_cc0 + 0x4c) * fVar79 + *(float *)(local_cc0 + 0x2c) * fVar58;
    auVar44._0_4_ = fVar79 * *(float *)(local_cc0 + 0x30) + fVar58 * *(float *)(local_cc0 + 0x10);
    auVar44._4_4_ = fVar79 * *(float *)(local_cc0 + 0x34) + fVar58 * *(float *)(local_cc0 + 0x14);
    auVar44._8_4_ = fVar79 * *(float *)(local_cc0 + 0x38) + fVar58 * *(float *)(local_cc0 + 0x18);
    auVar44._12_4_ = fVar79 * *(float *)(local_cc0 + 0x3c) + fVar58 * *(float *)(local_cc0 + 0x1c);
    auVar6._4_4_ = uVar1;
    auVar6._0_4_ = uVar1;
    auVar6._8_4_ = uVar1;
    auVar6._12_4_ = uVar1;
    auVar76 = maxps(auVar77,auVar6);
    auVar43 = minps(auVar44,auVar69);
    fVar58 = (float)((uint)auVar52._0_4_ & uVar34) * fVar48 + auVar52._0_4_;
    fVar41 = (float)((uint)auVar52._4_4_ & uVar34) * fVar48 + auVar52._4_4_;
    fVar79 = (float)((uint)auVar52._8_4_ & uVar34) * fVar48 + auVar52._8_4_;
    *(float *)(uVar32 + 0x30) = fVar58;
    fVar74 = auVar64._0_4_ - (float)((uint)auVar64._0_4_ & uVar34) * fVar48;
    fVar66 = auVar64._4_4_ - (float)((uint)auVar64._4_4_ & uVar34) * fVar48;
    fVar67 = auVar64._8_4_ - (float)((uint)auVar64._8_4_ & uVar34) * fVar48;
    *(float *)(uVar32 + 0x20) = fVar74;
    *(float *)(uVar32 + 0x80) =
         (auVar43._0_4_ - (float)((uint)auVar43._0_4_ & uVar34) * fVar48) - fVar74;
    *(float *)(uVar32 + 0x40) = fVar66;
    *(float *)(uVar32 + 0x60) = fVar67;
    *(float *)(uVar32 + 0x50) = fVar41;
    *(float *)(uVar32 + 0x70) = fVar79;
    *(float *)(uVar32 + 0xa0) =
         (auVar43._4_4_ - (float)((uint)auVar43._4_4_ & uVar34) * fVar48) - fVar66;
    *(float *)(uVar32 + 0xc0) =
         (auVar43._8_4_ - (float)((uint)auVar43._8_4_ & uVar34) * fVar48) - fVar67;
    *(float *)(uVar32 + 0x90) =
         ((float)((uint)auVar76._0_4_ & uVar34) * fVar48 + auVar76._0_4_) - fVar58;
    *(float *)(uVar32 + 0xb0) =
         ((float)((uint)auVar76._4_4_ & uVar34) * fVar48 + auVar76._4_4_) - fVar41;
    *(float *)(uVar32 + 0xd0) =
         ((float)((uint)auVar76._8_4_ & uVar34) * fVar48 + auVar76._8_4_) - fVar79;
    local_d08 = minps(local_d08,*(undefined1 (*) [16])(local_cc0 + 0x10));
    auVar73 = maxps(auVar73,*(undefined1 (*) [16])(local_cc0 + 0x20));
    auVar71 = minps(auVar71,*(undefined1 (*) [16])(local_cc0 + 0x30));
    _local_d18 = maxps(_local_d18,*(undefined1 (*) [16])(local_cc0 + 0x40));
    uVar32 = uVar33;
    local_cc0 = local_cc0 + 0x50;
  } while (uVar16 + (long)pCVar30 * 4 != uVar33);
  *(ulong *)param_1 = (ulong)puVar18 | 1;
  *(undefined1 (*) [16])(param_1 + 0x10) = local_d08;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar73;
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar71;
  *(undefined1 (*) [16])(param_1 + 0x40) = _local_d18;
  goto LAB_0010922d;
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
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  uVar4 = *(ulong *)(this + 8);
  uVar2 = *(ulong *)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < uVar4 - uVar2) {
    uVar4 = uVar4 + uVar2 >> 1;
    spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar2,uVar4,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar4,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    if (uVar2 < uVar4) {
      do {
        sse2::GeneralBVHBuilder::
        BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::BVHNodeRecordMB<embree::NodeRefPtr<4>>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::Create,embree::AABBNodeMB_t<embree::NodeRefPtr<4>,4>::SetTimeRange,embree::sse2::BVHNBuilderMblurVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings,embree::BBox<float>const&)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
        ::recurse(local_88,*(undefined8 *)(this + 0x30),uVar2 * 0x60 + *(long *)(this + 0x28),1);
        uVar3 = uVar2 + 1;
        puVar1 = (undefined8 *)(uVar2 * 0x50 + *(long *)(this + 0x20));
        *puVar1 = local_88[0];
        puVar1[2] = local_78;
        puVar1[3] = uStack_70;
        puVar1[4] = local_68;
        puVar1[5] = uStack_60;
        puVar1[6] = local_58;
        puVar1[7] = uStack_50;
        puVar1[8] = local_48;
        puVar1[9] = uStack_40;
        uVar2 = uVar3;
      } while (uVar3 < uVar4);
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
  undefined4 uVar1;
  undefined4 uVar2;
  MutexSys *pMVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  PrimInfoRange *pPVar18;
  PrimInfoRange *pPVar19;
  undefined8 uVar20;
  undefined1 (*pauVar21) [16];
  undefined8 *puVar22;
  ulong *puVar23;
  int iVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  ulong uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  float fVar45;
  float fVar46;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  float fVar57;
  float fVar58;
  float fVar68;
  float fVar69;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  undefined1 auVar67 [16];
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
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
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar90;
  float fVar91;
  undefined1 auVar89 [16];
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  FastAllocator *in_stack_00000008;
  MutexSys *in_stack_00000010;
  MutexSys *local_8d0;
  long *plStack_8c8;
  FastAllocator *local_8b8;
  PrimInfoRange *local_8b0;
  long *local_8a0;
  undefined1 local_860 [16];
  undefined1 local_850 [8];
  float fStack_848;
  float fStack_844;
  undefined1 local_840 [12];
  undefined4 uStack_834;
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
  float fStack_788;
  float fStack_784;
  undefined4 local_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined1 local_770 [8];
  float fStack_768;
  float fStack_764;
  undefined1 local_760 [16];
  undefined1 local_750 [16];
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
  int local_700 [8];
  undefined1 local_6e0 [8];
  float fStack_6d8;
  float fStack_6d4;
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
  long local_590 [168];
  long lStack_50;
  long local_48;
  
  lVar13 = lRam000000000010bf4b;
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_8b8 = in_stack_00000008;
  if (in_stack_00000008 == (FastAllocator *)0x0) {
    local_8b8 = *(FastAllocator **)param_1[10];
    in_stack_00000010 = *(MutexSys **)(in_FS_OFFSET + lRam000000000010bf4b);
    if (in_stack_00000010 == (MutexSys *)0x0) {
      in_stack_00000010 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(in_stack_00000010);
      *(undefined8 *)(in_stack_00000010 + 8) = 0;
      *(MutexSys **)(in_stack_00000010 + 0x40) = in_stack_00000010;
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
      *(MutexSys **)(in_FS_OFFSET + lVar13) = in_stack_00000010;
      embree::MutexSys::lock();
      local_7a0 = in_stack_00000010;
      if (__MutexSys == _vtable) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,&local_7a0);
        pMVar3 = local_7a0;
        if (local_7a0 != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys(local_7a0);
          embree::alignedFree(pMVar3);
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
  uVar26 = param_2[0xb];
  uVar35 = param_2[10];
  auVar39 = *(undefined1 (*) [16])(param_2 + 2);
  auVar50 = *(undefined1 (*) [16])(param_2 + 4);
  uVar30 = uVar26 - uVar35;
  if (((uVar30 <= param_1[3]) || (lVar13 = *param_2, param_1[1] <= lVar13 + 8U)) ||
     ((uVar30 <= param_1[4] &&
      (fVar45 = auVar50._4_4_ - auVar39._4_4_, fVar46 = auVar50._8_4_ - auVar39._8_4_,
      fVar45 = (auVar50._0_4_ - auVar39._0_4_) * (fVar45 + fVar46) + fVar45 * fVar46,
      (float)((uVar30 - 1) + (1L << ((byte)param_1[2] & 0x3f)) >> ((byte)param_1[2] & 0x3f)) *
      fVar45 * *(float *)((long)param_1 + 0x2c) <=
      fVar45 * *(float *)(param_1 + 5) + *(float *)((long)param_1 + 0x2c) * local_740)))) {
    puVar22 = (undefined8 *)(*(long *)param_1[9] + uVar26 * 0x20);
    puVar34 = (undefined8 *)(*(long *)param_1[9] + uVar35 * 0x20);
    if (puVar22 != puVar34) {
      lVar13 = uVar26 * 0x20 + uVar35 * -0x20;
      uVar26 = lVar13 >> 5;
      if (uVar26 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar34,puVar22,0xfffffffffffffffe);
      }
      else {
        lVar15 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar34,puVar22,(long)(int)lVar15 * 2);
        if (0x200 < lVar13) {
          puVar33 = puVar34 + 0x40;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar34,puVar33)
          ;
          for (; puVar22 != puVar33; puVar33 = puVar33 + 4) {
            while( true ) {
              uVar20 = puVar33[2];
              uVar8 = puVar33[3];
              uVar9 = *puVar33;
              uVar10 = puVar33[1];
              uVar26 = CONCAT44(*(undefined4 *)((long)puVar33 + 0x1c),
                                *(undefined4 *)((long)puVar33 + 0xc));
              puVar34 = puVar33;
              if (CONCAT44(*(undefined4 *)((long)puVar33 + -4),
                           *(undefined4 *)((long)puVar33 + -0x14)) <= uVar26) break;
              do {
                puVar4 = puVar34;
                puVar34 = puVar4 + -4;
                *puVar4 = *puVar34;
                puVar4[1] = puVar4[-3];
                *(undefined1 (*) [16])(puVar4 + 2) = *(undefined1 (*) [16])(puVar4 + -2);
              } while (uVar26 < CONCAT44(*(undefined4 *)((long)puVar4 + -0x24),
                                         *(undefined4 *)((long)puVar4 + -0x34)));
              puVar33 = puVar33 + 4;
              *puVar34 = uVar9;
              puVar4[-3] = uVar10;
              puVar4[-2] = uVar20;
              puVar4[-1] = uVar8;
              if (puVar22 == puVar33) goto LAB_0010b978;
            }
            *puVar33 = uVar9;
            puVar33[1] = uVar10;
            puVar33[2] = uVar20;
            puVar33[3] = uVar8;
          }
          goto LAB_0010b978;
        }
      }
      std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar34,puVar22);
    }
LAB_0010b978:
    uVar26 = createLargeLeaf(param_1,param_2);
  }
  else {
    plVar28 = (long *)param_1[9];
    if (uVar30 < 0xc00) {
      lVar15 = *plVar28;
      lVar31 = uVar26 * 0x20;
      pauVar21 = (undefined1 (*) [16])(lVar15 + uVar35 * 0x20);
      if (local_73c == -1) {
        pauVar17 = (undefined1 (*) [16])(lVar15 + lVar31);
        if (pauVar17 != pauVar21) {
          lVar31 = lVar31 + uVar35 * -0x20;
          uVar26 = lVar31 >> 5;
          if (uVar26 == 0) {
            std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar21,pauVar17,0xfffffffffffffffe);
LAB_0010e2a6:
            std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar21,pauVar17);
          }
          else {
            lVar13 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar21,pauVar17,(long)(int)lVar13 * 2);
            if (lVar31 < 0x201) goto LAB_0010e2a6;
            pauVar16 = pauVar21 + 0x20;
            std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar21,pauVar16);
            for (; pauVar17 != pauVar16; pauVar16 = pauVar16 + 2) {
              uVar1 = *(undefined4 *)(pauVar16[1] + 0xc);
              uVar2 = *(undefined4 *)(*pauVar16 + 0xc);
              auVar39 = pauVar16[1];
              auVar50 = *pauVar16;
              uVar26 = CONCAT44(*(undefined4 *)(pauVar16[-1] + 0xc),
                                *(undefined4 *)(pauVar16[-2] + 0xc));
              pauVar21 = pauVar16;
              while (CONCAT44(uVar1,uVar2) < uVar26) {
                uVar20 = *(undefined8 *)(pauVar21[-2] + 8);
                *(undefined8 *)*pauVar21 = *(undefined8 *)pauVar21[-2];
                *(undefined8 *)(*pauVar21 + 8) = uVar20;
                pauVar21[1] = pauVar21[-1];
                uVar26 = CONCAT44(*(undefined4 *)(pauVar21[-3] + 0xc),
                                  *(undefined4 *)(pauVar21[-4] + 0xc));
                pauVar21 = pauVar21 + -2;
              }
              *pauVar21 = auVar50;
              pauVar21[1] = auVar39;
            }
          }
          lVar15 = *plVar28;
          uVar35 = param_2[10];
          uVar26 = param_2[0xb];
          lVar13 = *param_2;
        }
        local_600[1] = uVar35 + uVar26 >> 1;
        if (uVar35 < local_600[1]) {
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
          pauVar21 = (undefined1 (*) [16])(uVar35 * 0x20 + lVar15);
          do {
            auVar89._0_4_ = *(float *)pauVar21[1] + *(float *)*pauVar21;
            auVar89._4_4_ = *(float *)(pauVar21[1] + 4) + *(float *)(*pauVar21 + 4);
            auVar89._8_4_ = *(float *)(pauVar21[1] + 8) + *(float *)(*pauVar21 + 8);
            auVar89._12_4_ = *(float *)(pauVar21[1] + 0xc) + *(float *)(*pauVar21 + 0xc);
            pauVar17 = pauVar21 + 2;
            local_640 = minps(local_640,*pauVar21);
            local_630 = maxps(local_630,pauVar21[1]);
            local_620 = minps(local_620,auVar89);
            local_610 = maxps(local_610,auVar89);
            pauVar21 = pauVar17;
          } while ((undefined1 (*) [16])(local_600[1] * 0x20 + lVar15) != pauVar17);
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
        auVar39._4_4_ = _LC2;
        auVar39._0_4_ = _LC2;
        local_860._8_4_ = _LC4;
        auVar39._8_4_ = _LC2;
        local_860._12_4_ = _LC4;
        auVar39._12_4_ = _LC2;
        local_5d0 = auVar39;
        local_5b0 = auVar39;
        local_5c0 = local_860;
        _local_840 = local_860;
        if (local_600[1] < uVar26) {
          pauVar21 = (undefined1 (*) [16])(local_600[1] * 0x20 + lVar15);
          do {
            auVar44._0_4_ = *(float *)pauVar21[1] + *(float *)*pauVar21;
            auVar44._4_4_ = *(float *)(pauVar21[1] + 4) + *(float *)(*pauVar21 + 4);
            auVar44._8_4_ = *(float *)(pauVar21[1] + 8) + *(float *)(*pauVar21 + 8);
            auVar44._12_4_ = *(float *)(pauVar21[1] + 0xc) + *(float *)(*pauVar21 + 0xc);
            pauVar17 = pauVar21 + 2;
            _local_840 = minps(_local_840,*pauVar21);
            local_5d0 = maxps(local_5d0,pauVar21[1]);
            local_5c0 = minps(local_5c0,auVar44);
            local_5b0 = maxps(local_5b0,auVar44);
            pauVar21 = pauVar17;
          } while ((undefined1 (*) [16])(lVar15 + uVar26 * 0x20) != pauVar17);
        }
      }
      else {
        uVar30 = (ulong)(uint)(1 << ((byte)local_73c & 0x1f));
        iVar24 = 0x1130f8;
        auVar39._0_8_ = CONCAT44(_LC2,_LC2);
        auVar39._8_4_ = _LC2;
        auVar39._12_4_ = _LC2;
        local_5b0._8_4_ = _LC2;
        local_5b0._0_8_ = auVar39._0_8_;
        local_5b0._12_4_ = _LC2;
        uVar20 = (&mm_lookupmask_ps)[uVar30 * 2];
        uVar8 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar30 * 0x10);
        local_5d0._8_4_ = _LC2;
        local_5d0._0_8_ = auVar39._0_8_;
        local_5d0._12_4_ = _LC2;
        local_610._8_4_ = _LC2;
        local_610._0_8_ = auVar39._0_8_;
        local_610._12_4_ = _LC2;
        local_860._0_8_ = CONCAT44(_LC4,_LC4);
        local_860._8_4_ = _LC4;
        local_860._12_4_ = _LC4;
        local_630._8_4_ = _LC2;
        local_630._0_8_ = auVar39._0_8_;
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
        pauVar17 = (undefined1 (*) [16])(lVar15 + -0x20 + lVar31);
        _local_840 = local_860;
        for (; pauVar21 <= pauVar17; pauVar21 = pauVar21 + 2) {
          auVar50 = pauVar21[1];
          auVar78 = *pauVar21;
          auVar47._0_4_ = auVar50._0_4_ + auVar78._0_4_;
          auVar47._4_4_ = auVar50._4_4_ + auVar78._4_4_;
          auVar47._8_4_ = auVar50._8_4_ + auVar78._8_4_;
          auVar47._12_4_ = auVar50._12_4_ + auVar78._12_4_;
          local_830 = (uint)uVar20;
          uStack_82c = (uint)((ulong)uVar20 >> 0x20);
          uStack_828 = (uint)uVar8;
          uStack_824 = (uint)((ulong)uVar8 >> 0x20);
          auVar59._0_4_ =
               -(uint)((int)((auVar47._0_4_ - local_720) * local_710 + _LC26) < local_738) &
               local_830;
          auVar59._4_4_ =
               -(uint)((int)((auVar47._4_4_ - fStack_71c) * fStack_70c + _UNK_00111ce4) < local_738)
               & uStack_82c;
          auVar59._8_4_ =
               -(uint)((int)((auVar47._8_4_ - fStack_718) * fStack_708 + _UNK_00111ce8) < local_738)
               & uStack_828;
          auVar59._12_4_ =
               -(uint)((int)((auVar47._12_4_ - fStack_714) * fStack_704 + _UNK_00111cec) < local_738
                      ) & uStack_824;
          iVar24 = movmskps(iVar24,auVar59);
          if (iVar24 == 0) {
            while( true ) {
              auVar89 = pauVar17[1];
              auVar44 = *pauVar17;
              pauVar16 = pauVar17 + -2;
              auVar62._0_4_ = auVar89._0_4_ + auVar44._0_4_;
              auVar62._4_4_ = auVar89._4_4_ + auVar44._4_4_;
              auVar62._8_4_ = auVar89._8_4_ + auVar44._8_4_;
              auVar62._12_4_ = auVar89._12_4_ + auVar44._12_4_;
              auVar48._0_4_ =
                   -(uint)((int)((auVar62._0_4_ - local_720) * local_710 + _LC26) < local_738) &
                   local_830;
              auVar48._4_4_ =
                   -(uint)((int)((auVar62._4_4_ - fStack_71c) * fStack_70c + _UNK_00111ce4) <
                          local_738) & uStack_82c;
              auVar48._8_4_ =
                   -(uint)((int)((auVar62._8_4_ - fStack_718) * fStack_708 + _UNK_00111ce8) <
                          local_738) & uStack_828;
              auVar48._12_4_ =
                   -(uint)((int)((auVar62._12_4_ - fStack_714) * fStack_704 + _UNK_00111cec) <
                          local_738) & uStack_824;
              iVar24 = movmskps(0,auVar48);
              if (iVar24 != 0) break;
              _local_840 = minps(_local_840,auVar44);
              local_5d0 = maxps(local_5d0,auVar89);
              local_5c0 = minps(local_5c0,auVar62);
              local_5b0 = maxps(local_5b0,auVar62);
              pauVar17 = pauVar16;
              if (pauVar16 < pauVar21) goto LAB_0010bb8a;
            }
            *pauVar21 = auVar44;
            local_640 = minps(local_640,auVar44);
            local_630 = maxps(local_630,auVar89);
            local_5d0 = maxps(local_5d0,auVar50);
            local_610 = maxps(local_610,auVar62);
            _local_840 = minps(_local_840,auVar78);
            local_5c0 = minps(local_5c0,auVar47);
            pauVar21[1] = pauVar17[1];
            local_620 = minps(local_620,auVar62);
            local_5b0 = maxps(local_5b0,auVar47);
            *pauVar17 = auVar78;
            pauVar17[1] = auVar50;
          }
          else {
            local_640 = minps(local_640,auVar78);
            local_630 = maxps(local_630,auVar50);
            local_620 = minps(local_620,auVar47);
            local_610 = maxps(local_610,auVar47);
            pauVar16 = pauVar17;
          }
          pauVar17 = pauVar16;
        }
LAB_0010bb8a:
        local_600[1] = (long)pauVar21 - lVar15 >> 5;
        lVar13 = *param_2;
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
        uStack_798 = (long *)CONCAT44(_LC4,_LC4);
        local_790._4_4_ = _LC2;
        local_790._0_4_ = _LC2;
        fStack_788 = _LC2;
        fStack_784 = _LC2;
        local_780 = _LC4;
        uStack_77c = _LC4;
        uStack_778 = _LC4;
        uStack_774 = _LC4;
        local_860._4_4_ = _LC4;
        local_860._0_4_ = _LC4;
        local_860._8_4_ = _LC4;
        local_860._12_4_ = _LC4;
        local_770._4_4_ = _LC2;
        local_770._0_4_ = _LC2;
        fStack_768 = _LC2;
        fStack_764 = _LC2;
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
                                 ((PrimRef *)*plVar28,uVar35,uVar26,&local_801,
                                  (CentGeom *)&local_7e0,(CentGeom *)&local_7a0,
                                  (_lambda_embree__PrimRef_const___1_ *)&local_800,&local_802,
                                  &local_803,0x80);
        local_640._4_4_ = local_7e0._4_4_;
        local_640._0_4_ = (undefined4)local_7e0;
        local_640._8_4_ = uStack_7d8;
        local_640._12_4_ = uStack_7d4;
        stack0xfffffffffffff7c8 = uStack_798;
        local_840._0_8_ = local_7a0;
        local_620._4_4_ = uStack_7bc;
        local_620._0_4_ = local_7c0;
        local_620._8_4_ = uStack_7b8;
        local_620._12_4_ = uStack_7b4;
        local_5c0._4_4_ = uStack_77c;
        local_5c0._0_4_ = local_780;
        local_5c0._8_4_ = uStack_778;
        local_5c0._12_4_ = uStack_774;
        lVar13 = *param_2;
        local_5d0 = _local_790;
        auVar39 = _local_850;
        local_5b0 = _local_770;
        local_610 = _local_7b0;
        local_630 = _local_7d0;
        goto LAB_0010bbb7;
      }
      lVar15 = *plVar28;
      pauVar21 = (undefined1 (*) [16])(lVar15 + uVar26 * 0x20);
      pauVar17 = (undefined1 (*) [16])(lVar15 + uVar35 * 0x20);
      if (pauVar21 != pauVar17) {
        lVar13 = uVar26 * 0x20 + uVar35 * -0x20;
        uVar26 = lVar13 >> 5;
        if (uVar26 == 0) {
          std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar17,pauVar21,0xfffffffffffffffe);
LAB_0010e4d5:
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar17,pauVar21);
        }
        else {
          lVar15 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar17,pauVar21,(long)(int)lVar15 * 2);
          if (lVar13 < 0x201) goto LAB_0010e4d5;
          pauVar16 = pauVar17 + 0x20;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar17,pauVar16);
          for (; pauVar21 != pauVar16; pauVar16 = pauVar16 + 2) {
            uVar1 = *(undefined4 *)(pauVar16[1] + 0xc);
            uVar2 = *(undefined4 *)(*pauVar16 + 0xc);
            auVar39 = pauVar16[1];
            auVar50 = *pauVar16;
            uVar26 = CONCAT44(*(undefined4 *)(pauVar16[-1] + 0xc),
                              *(undefined4 *)(pauVar16[-2] + 0xc));
            pauVar17 = pauVar16;
            while (CONCAT44(uVar1,uVar2) < uVar26) {
              uVar20 = *(undefined8 *)(pauVar17[-2] + 8);
              *(undefined8 *)*pauVar17 = *(undefined8 *)pauVar17[-2];
              *(undefined8 *)(*pauVar17 + 8) = uVar20;
              pauVar17[1] = pauVar17[-1];
              uVar26 = CONCAT44(*(undefined4 *)(pauVar17[-3] + 0xc),
                                *(undefined4 *)(pauVar17[-4] + 0xc));
              pauVar17 = pauVar17 + -2;
            }
            *pauVar17 = auVar50;
            pauVar17[1] = auVar39;
          }
        }
        lVar15 = *plVar28;
        uVar35 = param_2[10];
        uVar26 = param_2[0xb];
        lVar13 = *param_2;
      }
      local_600[1] = uVar35 + uVar26 >> 1;
      if (uVar35 < local_600[1]) {
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
        pauVar21 = (undefined1 (*) [16])(uVar35 * 0x20 + lVar15);
        do {
          auVar50._0_4_ = *(float *)pauVar21[1] + *(float *)*pauVar21;
          auVar50._4_4_ = *(float *)(pauVar21[1] + 4) + *(float *)(*pauVar21 + 4);
          auVar50._8_4_ = *(float *)(pauVar21[1] + 8) + *(float *)(*pauVar21 + 8);
          auVar50._12_4_ = *(float *)(pauVar21[1] + 0xc) + *(float *)(*pauVar21 + 0xc);
          pauVar17 = pauVar21 + 2;
          local_640 = minps(local_640,*pauVar21);
          local_630 = maxps(local_630,pauVar21[1]);
          local_620 = minps(local_620,auVar50);
          local_610 = maxps(local_610,auVar50);
          pauVar21 = pauVar17;
        } while ((undefined1 (*) [16])(local_600[1] * 0x20 + lVar15) != pauVar17);
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
      auVar39._4_4_ = _LC2;
      auVar39._0_4_ = _LC2;
      local_860._8_4_ = _LC4;
      auVar39._8_4_ = _LC2;
      local_860._12_4_ = _LC4;
      auVar39._12_4_ = _LC2;
      local_5d0 = auVar39;
      local_5b0 = auVar39;
      local_5c0 = local_860;
      _local_840 = local_860;
      if (local_600[1] < uVar26) {
        pauVar21 = (undefined1 (*) [16])(local_600[1] * 0x20 + lVar15);
        do {
          auVar78._0_4_ = *(float *)pauVar21[1] + *(float *)*pauVar21;
          auVar78._4_4_ = *(float *)(pauVar21[1] + 4) + *(float *)(*pauVar21 + 4);
          auVar78._8_4_ = *(float *)(pauVar21[1] + 8) + *(float *)(*pauVar21 + 8);
          auVar78._12_4_ = *(float *)(pauVar21[1] + 0xc) + *(float *)(*pauVar21 + 0xc);
          pauVar17 = pauVar21 + 2;
          _local_840 = minps(_local_840,*pauVar21);
          local_5d0 = maxps(local_5d0,pauVar21[1]);
          local_5c0 = minps(local_5c0,auVar78);
          local_5b0 = maxps(local_5b0,auVar78);
          pauVar21 = pauVar17;
        } while ((undefined1 (*) [16])(lVar15 + uVar26 * 0x20) != pauVar17);
      }
    }
LAB_0010bbb7:
    local_8a0 = &local_650;
    local_8b0 = (PrimInfoRange *)local_700;
    uStack_648 = uStack_648 & 0xffffffffffffff00;
    local_650 = lVar13 + 1;
    local_600[0] = uVar35;
    local_600[2] = lVar13 + 1;
    local_5e8 = 0;
    local_5a0 = local_600[1];
    local_598 = uVar26;
    local_5e0 = local_840._0_4_;
    uStack_5dc = local_840._4_4_;
    uStack_5d8 = local_840._8_4_;
    uStack_5d4 = uStack_834;
    plStack_8c8 = local_860._8_8_;
    if (*param_1 < 3) {
      uVar26 = param_1[7];
      if (uVar26 < (ulong)(param_2[0xb] - param_2[10])) {
        lVar15 = 0xc0;
        uVar35 = 2;
        lVar13 = 4;
        goto LAB_0010e085;
      }
      uVar35 = 2;
      plVar28 = local_590;
LAB_0010c2ae:
      uVar26 = ((long)plVar28 - (long)local_8a0 >> 5) * -0x5555555555555555;
      if (uVar26 == 0) {
        std::
        __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (local_8a0,plVar28,0xfffffffffffffffe);
      }
      else {
        lVar13 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        std::
        __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (local_8a0,plVar28,(long)(int)lVar13 * 2);
        if (0x600 < (long)plVar28 - (long)local_8a0) {
          plVar36 = &lStack_50;
          std::
          __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                    (local_8a0,plVar36);
          for (; plVar28 != plVar36; plVar36 = plVar36 + 0xc) {
            std::
            __unguarded_linear_insert<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                      ();
          }
          goto LAB_0010c35b;
        }
      }
      std::
      __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (local_8a0,plVar28);
    }
    else {
      uVar35 = 2;
      plVar28 = local_590;
      do {
        uVar27 = 0;
        uVar29 = 0xffffffffffffffff;
        pfVar14 = (float *)local_640;
        uVar30 = local_600[0];
        uVar26 = local_600[1];
        fVar45 = _LC2;
        while( true ) {
          if ((param_1[3] < uVar26 - uVar30) &&
             (fVar46 = (pfVar14[4] - *pfVar14) *
                       ((pfVar14[5] - pfVar14[1]) + (pfVar14[6] - pfVar14[2])) +
                       (pfVar14[5] - pfVar14[1]) * (pfVar14[6] - pfVar14[2]), fVar45 < fVar46)) {
            uVar29 = uVar27;
            fVar45 = fVar46;
          }
          uVar27 = uVar27 + 1;
          if (uVar27 == uVar35) break;
          uVar26 = *(ulong *)(pfVar14 + 0x2a);
          uVar30 = *(ulong *)(pfVar14 + 0x28);
          pfVar14 = pfVar14 + 0x18;
        }
        if (uVar29 == 0xffffffffffffffff) break;
        lVar13 = *param_2;
        lVar15 = uVar29 * 0x60;
        HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find(local_8b0,*(ulong *)param_1[9]);
        plVar36 = (long *)param_1[9];
        uVar26 = local_600[uVar29 * 0xc + 1];
        uVar30 = local_600[uVar29 * 0xc];
        auVar37 = local_860;
        _local_840 = local_860;
        auVar93 = local_860;
        auVar94 = local_860;
        if (uVar26 - uVar30 < 0xc00) {
          lVar31 = *plVar36;
          lVar32 = uVar26 * 0x20;
          pauVar21 = (undefined1 (*) [16])(lVar31 + uVar30 * 0x20);
          if (local_700[1] == -1) {
            pauVar17 = (undefined1 (*) [16])(lVar31 + lVar32);
            if (pauVar17 != pauVar21) {
              lVar32 = lVar32 + uVar30 * -0x20;
              uVar26 = lVar32 >> 5;
              if (uVar26 == 0) {
                std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar21,pauVar17,0xfffffffffffffffe);
              }
              else {
                lVar31 = 0x3f;
                if (uVar26 != 0) {
                  for (; uVar26 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                  }
                }
                std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar21,pauVar17,(long)(int)lVar31 * 2);
                if (0x200 < lVar32) {
                  pauVar16 = pauVar21 + 0x20;
                  std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                            (pauVar21,pauVar16);
                  for (; pauVar17 != pauVar16; pauVar16 = pauVar16 + 2) {
                    uVar1 = *(undefined4 *)(pauVar16[1] + 0xc);
                    uVar2 = *(undefined4 *)(*pauVar16 + 0xc);
                    uVar20 = *(undefined8 *)pauVar16[1];
                    uVar8 = *(undefined8 *)(pauVar16[1] + 8);
                    auVar50 = *pauVar16;
                    uVar26 = CONCAT44(*(undefined4 *)(pauVar16[-1] + 0xc),
                                      *(undefined4 *)(pauVar16[-2] + 0xc));
                    pauVar21 = pauVar16;
                    while (CONCAT44(uVar1,uVar2) < uVar26) {
                      uVar9 = *(undefined8 *)(pauVar21[-2] + 8);
                      *(undefined8 *)*pauVar21 = *(undefined8 *)pauVar21[-2];
                      *(undefined8 *)(*pauVar21 + 8) = uVar9;
                      uVar5 = *(undefined4 *)(pauVar21[-1] + 4);
                      uVar6 = *(undefined4 *)(pauVar21[-1] + 8);
                      uVar7 = *(undefined4 *)(pauVar21[-1] + 0xc);
                      *(undefined4 *)pauVar21[1] = *(undefined4 *)pauVar21[-1];
                      *(undefined4 *)(pauVar21[1] + 4) = uVar5;
                      *(undefined4 *)(pauVar21[1] + 8) = uVar6;
                      *(undefined4 *)(pauVar21[1] + 0xc) = uVar7;
                      uVar26 = CONCAT44(*(undefined4 *)(pauVar21[-3] + 0xc),
                                        *(undefined4 *)(pauVar21[-4] + 0xc));
                      pauVar21 = pauVar21 + -2;
                    }
                    *pauVar21 = auVar50;
                    *(undefined8 *)pauVar21[1] = uVar20;
                    *(undefined8 *)(pauVar21[1] + 8) = uVar8;
                  }
                  lVar31 = *plVar36;
                  uVar30 = local_600[uVar29 * 0xc];
                  uVar26 = local_600[uVar29 * 0xc + 1];
                  goto LAB_0010d4fc;
                }
              }
              std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar21,pauVar17);
              uVar30 = local_600[uVar29 * 0xc];
              lVar31 = *plVar36;
              uVar26 = local_600[uVar29 * 0xc + 1];
            }
LAB_0010d4fc:
            uVar27 = uVar30 + uVar26 >> 1;
            auVar50 = auVar39;
            auVar78 = auVar39;
            if (uVar30 < uVar27) {
              pauVar21 = (undefined1 (*) [16])(uVar30 * 0x20 + lVar31);
              do {
                auVar53._0_4_ = *(float *)pauVar21[1] + *(float *)*pauVar21;
                auVar53._4_4_ = *(float *)(pauVar21[1] + 4) + *(float *)(*pauVar21 + 4);
                auVar53._8_4_ = *(float *)(pauVar21[1] + 8) + *(float *)(*pauVar21 + 8);
                auVar53._12_4_ = *(float *)(pauVar21[1] + 0xc) + *(float *)(*pauVar21 + 0xc);
                pauVar17 = pauVar21 + 2;
                auVar37 = minps(auVar37,*pauVar21);
                auVar78 = maxps(auVar78,pauVar21[1]);
                auVar94 = minps(auVar94,auVar53);
                auVar50 = maxps(auVar50,auVar53);
                pauVar21 = pauVar17;
              } while ((undefined1 (*) [16])(uVar27 * 0x20 + lVar31) != pauVar17);
            }
            auVar89 = auVar39;
            _local_850 = auVar39;
            if (uVar27 < uVar26) {
              pauVar21 = (undefined1 (*) [16])(uVar27 * 0x20 + lVar31);
              do {
                auVar54._0_4_ = *(float *)pauVar21[1] + *(float *)*pauVar21;
                auVar54._4_4_ = *(float *)(pauVar21[1] + 4) + *(float *)(*pauVar21 + 4);
                auVar54._8_4_ = *(float *)(pauVar21[1] + 8) + *(float *)(*pauVar21 + 8);
                auVar54._12_4_ = *(float *)(pauVar21[1] + 0xc) + *(float *)(*pauVar21 + 0xc);
                pauVar17 = pauVar21 + 2;
                _local_840 = minps(_local_840,*pauVar21);
                _local_850 = maxps(_local_850,pauVar21[1]);
                auVar93 = minps(auVar93,auVar54);
                auVar89 = maxps(auVar89,auVar54);
                pauVar21 = pauVar17;
              } while ((undefined1 (*) [16])(uVar26 * 0x20 + lVar31) != pauVar17);
            }
          }
          else {
            uVar27 = (ulong)(uint)(1 << ((byte)local_700[1] & 0x1f));
            iVar24 = 0x1130f8;
            uVar20 = (&mm_lookupmask_ps)[uVar27 * 2];
            uVar8 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar27 * 0x10);
            pauVar17 = (undefined1 (*) [16])(lVar31 + -0x20 + lVar32);
            auVar89 = auVar39;
            auVar50 = auVar39;
            auVar78 = auVar39;
            _local_850 = auVar39;
            for (; pauVar21 <= pauVar17; pauVar21 = pauVar21 + 2) {
              auVar44 = pauVar21[1];
              auVar47 = *pauVar21;
              auVar60._0_4_ = auVar44._0_4_ + auVar47._0_4_;
              auVar60._4_4_ = auVar44._4_4_ + auVar47._4_4_;
              auVar60._8_4_ = auVar44._8_4_ + auVar47._8_4_;
              auVar60._12_4_ = auVar44._12_4_ + auVar47._12_4_;
              local_830 = (uint)uVar20;
              uStack_82c = (uint)((ulong)uVar20 >> 0x20);
              uStack_828 = (uint)uVar8;
              uStack_824 = (uint)((ulong)uVar8 >> 0x20);
              auVar72._0_4_ =
                   -(uint)((int)((auVar60._0_4_ - (float)local_6e0._0_4_) * local_6d0._0_4_ + _LC26)
                          < local_700[2]) & local_830;
              auVar72._4_4_ =
                   -(uint)((int)((auVar60._4_4_ - (float)local_6e0._4_4_) * local_6d0._4_4_ +
                                _UNK_00111ce4) < local_700[2]) & uStack_82c;
              auVar72._8_4_ =
                   -(uint)((int)((auVar60._8_4_ - fStack_6d8) * local_6d0._8_4_ + _UNK_00111ce8) <
                          local_700[2]) & uStack_828;
              auVar72._12_4_ =
                   -(uint)((int)((auVar60._12_4_ - fStack_6d4) * local_6d0._12_4_ + _UNK_00111cec) <
                          local_700[2]) & uStack_824;
              iVar24 = movmskps(iVar24,auVar72);
              if (iVar24 == 0) {
                while( true ) {
                  auVar59 = pauVar17[1];
                  auVar48 = *pauVar17;
                  pauVar16 = pauVar17 + -2;
                  auVar73._0_4_ = auVar59._0_4_ + auVar48._0_4_;
                  auVar73._4_4_ = auVar59._4_4_ + auVar48._4_4_;
                  auVar73._8_4_ = auVar59._8_4_ + auVar48._8_4_;
                  auVar73._12_4_ = auVar59._12_4_ + auVar48._12_4_;
                  auVar61._0_4_ =
                       -(uint)((int)((auVar73._0_4_ - (float)local_6e0._0_4_) * local_6d0._0_4_ +
                                    _LC26) < local_700[2]) & local_830;
                  auVar61._4_4_ =
                       -(uint)((int)((auVar73._4_4_ - (float)local_6e0._4_4_) * local_6d0._4_4_ +
                                    _UNK_00111ce4) < local_700[2]) & uStack_82c;
                  auVar61._8_4_ =
                       -(uint)((int)((auVar73._8_4_ - fStack_6d8) * local_6d0._8_4_ + _UNK_00111ce8)
                              < local_700[2]) & uStack_828;
                  auVar61._12_4_ =
                       -(uint)((int)((auVar73._12_4_ - fStack_6d4) * local_6d0._12_4_ +
                                    _UNK_00111cec) < local_700[2]) & uStack_824;
                  iVar24 = movmskps(0,auVar61);
                  if (iVar24 != 0) break;
                  _local_840 = minps(_local_840,auVar48);
                  _local_850 = maxps(_local_850,auVar59);
                  auVar93 = minps(auVar93,auVar73);
                  auVar89 = maxps(auVar89,auVar73);
                  pauVar17 = pauVar16;
                  if (pauVar16 < pauVar21) goto LAB_0010be9d;
                }
                *pauVar21 = auVar48;
                auVar78 = maxps(auVar78,auVar59);
                _local_840 = minps(_local_840,auVar47);
                _local_850 = maxps(_local_850,auVar44);
                auVar37 = minps(auVar37,auVar48);
                auVar94 = minps(auVar94,auVar73);
                auVar50 = maxps(auVar50,auVar73);
                auVar93 = minps(auVar93,auVar60);
                pauVar21[1] = pauVar17[1];
                auVar89 = maxps(auVar89,auVar60);
                *pauVar17 = auVar47;
                pauVar17[1] = auVar44;
              }
              else {
                auVar37 = minps(auVar37,auVar47);
                auVar78 = maxps(auVar78,auVar44);
                auVar94 = minps(auVar94,auVar60);
                auVar50 = maxps(auVar50,auVar60);
                pauVar16 = pauVar17;
              }
              pauVar17 = pauVar16;
            }
LAB_0010be9d:
            uVar27 = (long)pauVar21 - lVar31 >> 5;
          }
        }
        else if (local_700[1] == -1) {
          lVar31 = *plVar36;
          pauVar21 = (undefined1 (*) [16])(lVar31 + uVar26 * 0x20);
          pauVar17 = (undefined1 (*) [16])(lVar31 + uVar30 * 0x20);
          if (pauVar21 != pauVar17) {
            lVar31 = uVar26 * 0x20 + uVar30 * -0x20;
            uVar26 = lVar31 >> 5;
            if (uVar26 == 0) {
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar17,pauVar21,0xfffffffffffffffe);
            }
            else {
              lVar32 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                }
              }
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar17,pauVar21,(long)(int)lVar32 * 2);
              if (0x200 < lVar31) {
                pauVar16 = pauVar17 + 0x20;
                std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar17,pauVar16);
                for (; pauVar21 != pauVar16; pauVar16 = pauVar16 + 2) {
                  uVar1 = *(undefined4 *)(pauVar16[1] + 0xc);
                  uVar2 = *(undefined4 *)(*pauVar16 + 0xc);
                  uVar20 = *(undefined8 *)pauVar16[1];
                  uVar8 = *(undefined8 *)(pauVar16[1] + 8);
                  auVar50 = *pauVar16;
                  uVar26 = CONCAT44(*(undefined4 *)(pauVar16[-1] + 0xc),
                                    *(undefined4 *)(pauVar16[-2] + 0xc));
                  pauVar17 = pauVar16;
                  while (CONCAT44(uVar1,uVar2) < uVar26) {
                    uVar9 = *(undefined8 *)(pauVar17[-2] + 8);
                    *(undefined8 *)*pauVar17 = *(undefined8 *)pauVar17[-2];
                    *(undefined8 *)(*pauVar17 + 8) = uVar9;
                    uVar5 = *(undefined4 *)(pauVar17[-1] + 4);
                    uVar6 = *(undefined4 *)(pauVar17[-1] + 8);
                    uVar7 = *(undefined4 *)(pauVar17[-1] + 0xc);
                    *(undefined4 *)pauVar17[1] = *(undefined4 *)pauVar17[-1];
                    *(undefined4 *)(pauVar17[1] + 4) = uVar5;
                    *(undefined4 *)(pauVar17[1] + 8) = uVar6;
                    *(undefined4 *)(pauVar17[1] + 0xc) = uVar7;
                    uVar26 = CONCAT44(*(undefined4 *)(pauVar17[-3] + 0xc),
                                      *(undefined4 *)(pauVar17[-4] + 0xc));
                    pauVar17 = pauVar17 + -2;
                  }
                  *pauVar17 = auVar50;
                  *(undefined8 *)pauVar17[1] = uVar20;
                  *(undefined8 *)(pauVar17[1] + 8) = uVar8;
                }
                lVar31 = *plVar36;
                uVar30 = local_600[uVar29 * 0xc];
                uVar26 = local_600[uVar29 * 0xc + 1];
                goto LAB_0010dd48;
              }
            }
            std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar17,pauVar21);
            uVar30 = local_600[uVar29 * 0xc];
            lVar31 = *plVar36;
            uVar26 = local_600[uVar29 * 0xc + 1];
          }
LAB_0010dd48:
          uVar27 = uVar30 + uVar26 >> 1;
          auVar50 = auVar39;
          auVar78 = auVar39;
          if (uVar30 < uVar27) {
            pauVar21 = (undefined1 (*) [16])(uVar30 * 0x20 + lVar31);
            do {
              auVar55._0_4_ = *(float *)pauVar21[1] + *(float *)*pauVar21;
              auVar55._4_4_ = *(float *)(pauVar21[1] + 4) + *(float *)(*pauVar21 + 4);
              auVar55._8_4_ = *(float *)(pauVar21[1] + 8) + *(float *)(*pauVar21 + 8);
              auVar55._12_4_ = *(float *)(pauVar21[1] + 0xc) + *(float *)(*pauVar21 + 0xc);
              pauVar17 = pauVar21 + 2;
              auVar37 = minps(auVar37,*pauVar21);
              auVar78 = maxps(auVar78,pauVar21[1]);
              auVar94 = minps(auVar94,auVar55);
              auVar50 = maxps(auVar50,auVar55);
              pauVar21 = pauVar17;
            } while ((undefined1 (*) [16])(uVar27 * 0x20 + lVar31) != pauVar17);
          }
          auVar89 = auVar39;
          _local_850 = auVar39;
          if (uVar27 < uVar26) {
            pauVar21 = (undefined1 (*) [16])(uVar27 * 0x20 + lVar31);
            do {
              auVar56._0_4_ = *(float *)pauVar21[1] + *(float *)*pauVar21;
              auVar56._4_4_ = *(float *)(pauVar21[1] + 4) + *(float *)(*pauVar21 + 4);
              auVar56._8_4_ = *(float *)(pauVar21[1] + 8) + *(float *)(*pauVar21 + 8);
              auVar56._12_4_ = *(float *)(pauVar21[1] + 0xc) + *(float *)(*pauVar21 + 0xc);
              pauVar17 = pauVar21 + 2;
              _local_840 = minps(_local_840,*pauVar21);
              _local_850 = maxps(_local_850,pauVar21[1]);
              auVar93 = minps(auVar93,auVar56);
              auVar89 = maxps(auVar89,auVar56);
              pauVar21 = pauVar17;
            } while ((undefined1 (*) [16])(lVar31 + uVar26 * 0x20) != pauVar17);
          }
        }
        else {
          local_8d0 = local_860._0_8_;
          local_7e0._0_4_ = local_860._0_4_;
          local_7e0._4_4_ = local_860._4_4_;
          uStack_7d8 = local_860._8_4_;
          uStack_7d4 = local_860._12_4_;
          local_7a0 = local_8d0;
          uStack_798 = plStack_8c8;
          local_750 = *(undefined1 (*) [16])
                       (&mm_lookupmask_ps + (ulong)(uint)(1 << ((byte)local_700[1] & 0x1f)) * 2);
          local_760._4_4_ = local_700[2];
          local_760._0_4_ = local_700[2];
          local_760._8_4_ = local_700[2];
          local_760._12_4_ = local_700[2];
          local_800 = local_8b0;
          local_7f8 = (int *)local_760;
          local_7f0 = (long *)local_750;
          _local_7d0 = auVar39;
          local_7c0 = (undefined4)local_7e0;
          uStack_7bc = local_7e0._4_4_;
          uStack_7b8 = uStack_7d8;
          uStack_7b4 = uStack_7d4;
          _local_7b0 = auVar39;
          _local_790 = auVar39;
          local_780 = (undefined4)local_7e0;
          uStack_77c = local_7e0._4_4_;
          uStack_778 = uStack_7d8;
          uStack_774 = uStack_7d4;
          _local_770 = auVar39;
          uVar27 = parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                             ((PrimRef *)*plVar36,uVar30,uVar26,&local_801,(CentGeom *)&local_7e0,
                              (CentGeom *)&local_7a0,
                              (_lambda_embree__PrimRef_const___1_ *)&local_800,&local_802,&local_803
                              ,0x80);
          auVar37._4_4_ = local_7e0._4_4_;
          auVar37._0_4_ = (undefined4)local_7e0;
          auVar37._8_4_ = uStack_7d8;
          auVar37._12_4_ = uStack_7d4;
          auVar94._4_4_ = uStack_7bc;
          auVar94._0_4_ = local_7c0;
          auVar94._8_4_ = uStack_7b8;
          auVar94._12_4_ = uStack_7b4;
          stack0xfffffffffffff7c8 = uStack_798;
          local_840._0_8_ = local_7a0;
          auVar93._4_4_ = uStack_77c;
          auVar93._0_4_ = local_780;
          auVar93._8_4_ = uStack_778;
          auVar93._12_4_ = uStack_774;
          auVar89 = _local_770;
          auVar50 = _local_7b0;
          auVar78 = _local_7d0;
          _local_850 = _local_790;
        }
        uVar35 = uVar35 + 1;
        local_640[uVar29 * 0x60 + -8] = 0;
        (&local_650)[uVar29 * 0xc] = lVar13 + 1;
        local_600[uVar29 * 0xc] = uVar30;
        local_600[uVar29 * 0xc + 1] = uVar27;
        *(undefined1 (*) [16])(local_640 + lVar15) = auVar37;
        *(undefined1 (*) [16])(local_630 + lVar15) = auVar78;
        *(undefined1 (*) [16])(local_620 + lVar15) = auVar94;
        *(undefined1 (*) [16])(local_610 + lVar15) = auVar50;
        *plVar28 = lVar13 + 1;
        *(undefined1 *)(plVar28 + 1) = 0;
        *(undefined4 *)(plVar28 + 2) = local_840._0_4_;
        *(undefined4 *)((long)plVar28 + 0x14) = local_840._4_4_;
        *(undefined4 *)(plVar28 + 3) = local_840._8_4_;
        *(undefined4 *)((long)plVar28 + 0x1c) = uStack_834;
        *(undefined1 (*) [16])(plVar28 + 4) = _local_850;
        *(undefined1 (*) [16])(plVar28 + 6) = auVar93;
        *(undefined1 (*) [16])(plVar28 + 8) = auVar89;
        plVar28[10] = uVar27;
        plVar28[0xb] = uVar26;
        plVar28 = plVar28 + 0xc;
      } while (uVar35 < *param_1);
      lVar13 = uVar35 * 2;
      uVar26 = param_1[7];
      lVar15 = uVar35 * 0x60;
      if (uVar26 < (ulong)(param_2[0xb] - param_2[10])) {
LAB_0010e085:
        puVar23 = &uStack_648;
        puVar25 = puVar23 + (lVar13 + uVar35) * 4;
        do {
          *(bool *)puVar23 = puVar23[10] - puVar23[9] <= uVar26;
          puVar23 = puVar23 + 0xc;
        } while (puVar25 != puVar23);
      }
      plVar28 = (long *)((long)local_8a0 + lVar15);
      if (lVar15 != 0) goto LAB_0010c2ae;
    }
LAB_0010c35b:
    pPVar18 = local_8b0;
    plVar28 = local_8a0;
    do {
      lVar13 = plVar28[3];
      pPVar19 = pPVar18 + 4;
      lVar15 = plVar28[2];
      lVar31 = plVar28[5];
      uVar1 = *(undefined4 *)((long)plVar28 + 0x24);
      lVar32 = plVar28[4];
      *(undefined4 *)(pPVar18 + 0x40) = *(undefined4 *)((long)plVar28 + 0x14);
      *(int *)(pPVar18 + 0x20) = (int)lVar15;
      *(int *)(pPVar18 + 0x60) = (int)lVar13;
      *(int *)(pPVar18 + 0x30) = (int)lVar32;
      *(undefined4 *)(pPVar18 + 0x50) = uVar1;
      *(int *)(pPVar18 + 0x70) = (int)lVar31;
      pPVar18 = pPVar19;
      plVar28 = plVar28 + 0xc;
    } while (local_8b0 + uVar35 * 4 != pPVar19);
    local_7e0._0_4_ = 0x50;
    local_7e0._4_4_ = 0;
    pMVar3 = *(MutexSys **)in_stack_00000010;
    _local_6e0 = local_860;
    local_6d0 = auVar39;
    local_6c0 = local_860;
    local_6b0 = auVar39;
    local_6a0 = local_860;
    local_690 = auVar39;
    if (local_8b8 != *(FastAllocator **)(pMVar3 + 8)) {
      embree::MutexSys::lock();
      if (*(long *)(pMVar3 + 8) != 0) {
        LOCK();
        *(long *)(*(long *)(pMVar3 + 8) + 0x118) =
             *(long *)(*(long *)(pMVar3 + 8) + 0x118) +
             *(long *)(pMVar3 + 0xa8) + *(long *)(pMVar3 + 0x68);
        UNLOCK();
        LOCK();
        *(long *)(*(long *)(pMVar3 + 8) + 0x120) =
             *(long *)(*(long *)(pMVar3 + 8) + 0x120) +
             (((*(long *)(pMVar3 + 0x98) + *(long *)(pMVar3 + 0x58)) - *(long *)(pMVar3 + 0x50)) -
             *(long *)(pMVar3 + 0x90));
        UNLOCK();
        LOCK();
        *(long *)(*(long *)(pMVar3 + 8) + 0x128) =
             *(long *)(*(long *)(pMVar3 + 8) + 0x128) +
             *(long *)(pMVar3 + 0xb0) + *(long *)(pMVar3 + 0x70);
        UNLOCK();
      }
      *(undefined8 *)(pMVar3 + 0x48) = 0;
      *(undefined8 *)(pMVar3 + 0x58) = 0;
      *(undefined8 *)(pMVar3 + 0x50) = 0;
      *(undefined8 *)(pMVar3 + 0x68) = 0;
      *(undefined8 *)(pMVar3 + 0x70) = 0;
      *(undefined8 *)(pMVar3 + 0x60) = 0;
      if (local_8b8 == (FastAllocator *)0x0) {
        *(undefined8 *)(pMVar3 + 0x88) = 0;
        uVar20 = 0;
        *(undefined8 *)(pMVar3 + 0x98) = 0;
        *(undefined8 *)(pMVar3 + 0x90) = 0;
        *(undefined8 *)(pMVar3 + 0xa8) = 0;
        *(undefined8 *)(pMVar3 + 0xb0) = 0;
      }
      else {
        uVar20 = *(undefined8 *)(local_8b8 + 0x10);
        *(undefined8 *)(pMVar3 + 0x88) = 0;
        *(undefined8 *)(pMVar3 + 0x98) = 0;
        *(undefined8 *)(pMVar3 + 0x60) = uVar20;
        *(undefined8 *)(pMVar3 + 0x90) = 0;
        *(undefined8 *)(pMVar3 + 0xa8) = 0;
        *(undefined8 *)(pMVar3 + 0xb0) = 0;
        *(undefined8 *)(pMVar3 + 0xa0) = 0;
        uVar20 = *(undefined8 *)(local_8b8 + 0x10);
      }
      *(undefined8 *)(pMVar3 + 0xa0) = uVar20;
      LOCK();
      *(FastAllocator **)(pMVar3 + 8) = local_8b8;
      UNLOCK();
      local_7a0 = pMVar3;
      embree::MutexSys::lock();
      plVar28 = *(long **)(local_8b8 + 0x138);
      if (plVar28 == *(long **)(local_8b8 + 0x140)) {
        std::
        vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
        ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                  ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                    *)(local_8b8 + 0x130),plVar28,&local_7a0);
      }
      else {
        *plVar28 = (long)pMVar3;
        *(long *)(local_8b8 + 0x138) = *(long *)(local_8b8 + 0x138) + 8;
      }
      embree::MutexSys::unlock();
      embree::MutexSys::unlock();
    }
    lVar13 = *(long *)(in_stack_00000010 + 0x10);
    *(long *)(in_stack_00000010 + 0x28) = *(long *)(in_stack_00000010 + 0x28) + 0x50;
    uVar30 = (ulong)(-(int)lVar13 & 0xf);
    uVar26 = lVar13 + 0x50 + uVar30;
    *(ulong *)(in_stack_00000010 + 0x10) = uVar26;
    if (*(ulong *)(in_stack_00000010 + 0x18) < uVar26) {
      *(long *)(in_stack_00000010 + 0x10) = lVar13;
      if (*(MutexSys **)(in_stack_00000010 + 0x20) < (MutexSys *)0x140) {
        puVar22 = (undefined8 *)FastAllocator::malloc(local_8b8,&local_7e0,0x40,false);
      }
      else {
        local_7a0 = *(MutexSys **)(in_stack_00000010 + 0x20);
        puVar22 = (undefined8 *)FastAllocator::malloc(local_8b8,&local_7a0,0x40,true);
        *(undefined8 **)(in_stack_00000010 + 8) = puVar22;
        lVar13 = *(long *)(in_stack_00000010 + 0x10);
        *(long *)(in_stack_00000010 + 0x10) = 0x50;
        *(long *)(in_stack_00000010 + 0x30) =
             (*(long *)(in_stack_00000010 + 0x18) + *(long *)(in_stack_00000010 + 0x30)) - lVar13;
        *(MutexSys **)(in_stack_00000010 + 0x18) = local_7a0;
        if (local_7a0 < (MutexSys *)0x50) {
          local_7a0 = *(MutexSys **)(in_stack_00000010 + 0x20);
          *(long *)(in_stack_00000010 + 0x10) = 0;
          puVar22 = (undefined8 *)FastAllocator::malloc(local_8b8,&local_7a0,0x40,false);
          *(undefined8 **)(in_stack_00000010 + 8) = puVar22;
          lVar13 = *(long *)(in_stack_00000010 + 0x10);
          *(long *)(in_stack_00000010 + 0x10) = 0x50;
          *(long *)(in_stack_00000010 + 0x30) =
               (*(long *)(in_stack_00000010 + 0x18) + *(long *)(in_stack_00000010 + 0x30)) - lVar13;
          *(MutexSys **)(in_stack_00000010 + 0x18) = local_7a0;
          if (local_7a0 < (MutexSys *)0x50) {
            puVar22 = (undefined8 *)0x0;
            *(long *)(in_stack_00000010 + 0x10) = 0;
          }
        }
      }
    }
    else {
      *(ulong *)(in_stack_00000010 + 0x30) = *(long *)(in_stack_00000010 + 0x30) + uVar30;
      puVar22 = (undefined8 *)(*(long *)(in_stack_00000010 + 8) + -0x50 + uVar26);
    }
    *puVar22 = 8;
    puVar22[1] = 8;
    puVar22[2] = 8;
    puVar22[3] = 8;
    fVar45 = _LC9;
    uVar12 = _LC15;
    auVar38._4_4_ = SUB164(_local_6e0,0);
    auVar38._0_4_ = SUB164(_local_6e0,4);
    auVar38._8_4_ = SUB164(_local_6e0,0xc);
    auVar38._12_4_ = SUB164(_local_6e0,8);
    auVar39 = minps(auVar38,_local_6e0);
    auVar49._4_4_ = local_6d0._0_4_;
    auVar49._0_4_ = local_6d0._4_4_;
    auVar49._8_4_ = local_6d0._12_4_;
    auVar49._12_4_ = local_6d0._8_4_;
    auVar50 = maxps(auVar49,local_6d0);
    auVar77._0_8_ = auVar39._8_8_;
    auVar77._8_4_ = auVar39._0_4_;
    auVar77._12_4_ = auVar39._4_4_;
    auVar78 = minps(auVar77,auVar39);
    auVar40._0_8_ = auVar50._8_8_;
    auVar40._8_4_ = auVar50._0_4_;
    auVar40._12_4_ = auVar50._4_4_;
    auVar39 = maxps(auVar40,auVar50);
    fVar46 = ((auVar39._0_4_ - auVar78._0_4_) * __LC7) / _LC8;
    if (fVar46 == 0.0) {
      fVar46 = _LC5;
    }
    lVar13 = 0;
    auVar11._4_4_ = _UNK_00111cb4;
    auVar11._0_4_ = __LC13;
    auVar11._8_4_ = _UNK_00111cb8;
    auVar11._12_4_ = _UNK_00111cbc;
    do {
      *(char *)((long)puVar22 + lVar13 + 0x20) = (char)*(undefined4 *)(local_760 + lVar13 * 4);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
    lVar13 = 0;
    do {
      *(char *)((long)puVar22 + lVar13 + 0x24) = (char)*(undefined4 *)(local_750 + lVar13 * 4);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
    *(float *)((long)puVar22 + 0x44) = fVar46;
    *(float *)(puVar22 + 7) = auVar78._0_4_;
    auVar63._4_4_ = local_6c0._0_4_;
    auVar63._0_4_ = local_6c0._4_4_;
    auVar63._8_4_ = local_6c0._12_4_;
    auVar63._12_4_ = local_6c0._8_4_;
    auVar74._4_4_ = local_6b0._0_4_;
    auVar74._0_4_ = local_6b0._4_4_;
    auVar74._8_4_ = local_6b0._12_4_;
    auVar74._12_4_ = local_6b0._8_4_;
    auVar39 = minps(auVar63,local_6c0);
    auVar50 = maxps(auVar74,local_6b0);
    auVar79._0_8_ = auVar39._8_8_;
    auVar79._8_4_ = auVar39._0_4_;
    auVar79._12_4_ = auVar39._4_4_;
    auVar78 = minps(auVar79,auVar39);
    auVar64._0_8_ = auVar50._8_8_;
    auVar64._8_4_ = auVar50._0_4_;
    auVar64._12_4_ = auVar50._4_4_;
    auVar39 = maxps(auVar64,auVar50);
    fVar46 = ((auVar39._0_4_ - auVar78._0_4_) * __LC7) / _LC8;
    if (fVar46 == 0.0) {
      fVar46 = _LC5;
    }
    lVar13 = 0;
    do {
      *(char *)((long)puVar22 + lVar13 + 0x28) = (char)*(undefined4 *)(local_760 + lVar13 * 4);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
    lVar13 = 0;
    do {
      *(char *)((long)puVar22 + lVar13 + 0x2c) = (char)*(undefined4 *)(local_750 + lVar13 * 4);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
    *(float *)(puVar22 + 9) = fVar46;
    *(float *)((long)puVar22 + 0x3c) = auVar78._0_4_;
    fVar88 = local_6a0._0_4_;
    fVar90 = local_6a0._4_4_;
    fVar91 = local_6a0._8_4_;
    fVar92 = local_6a0._12_4_;
    fVar84 = local_690._0_4_;
    fVar85 = local_690._4_4_;
    fVar86 = local_690._8_4_;
    fVar87 = local_690._12_4_;
    auVar65._4_4_ = fVar88;
    auVar65._0_4_ = fVar90;
    auVar65._8_4_ = fVar92;
    auVar65._12_4_ = fVar91;
    local_750._4_4_ = -(uint)(local_860._4_4_ != fVar90);
    local_750._0_4_ = -(uint)(local_860._0_4_ != fVar88);
    local_750._8_4_ = -(uint)(local_860._8_4_ != fVar91);
    local_750._12_4_ = -(uint)(local_860._12_4_ != fVar92);
    auVar80._4_4_ = fVar84;
    auVar80._0_4_ = fVar85;
    auVar80._8_4_ = fVar87;
    auVar80._12_4_ = fVar86;
    auVar39 = minps(auVar65,local_6a0);
    auVar78 = maxps(auVar80,local_690);
    auVar75._0_8_ = auVar39._8_8_;
    auVar75._8_4_ = auVar39._0_4_;
    auVar75._12_4_ = auVar39._4_4_;
    auVar50 = minps(auVar75,auVar39);
    auVar66._0_8_ = auVar78._8_8_;
    auVar66._8_4_ = auVar78._0_4_;
    auVar66._12_4_ = auVar78._4_4_;
    auVar39 = maxps(auVar66,auVar78);
    fVar71 = auVar50._0_4_;
    fVar57 = (auVar39._0_4_ - fVar71) * __LC7;
    fVar46 = fVar57 / _LC8;
    if (fVar57 / _LC8 == 0.0) {
      fVar46 = _LC5;
    }
    if (fVar57 <= 0.0) {
      fVar57 = 0.0;
    }
    else {
      fVar57 = _LC8 / fVar57;
    }
    fVar58 = (fVar88 - fVar71) * fVar57;
    fVar68 = (fVar90 - fVar71) * fVar57;
    fVar69 = (fVar91 - fVar71) * fVar57;
    fVar70 = (fVar92 - fVar71) * fVar57;
    if ((float)((uint)fVar70 & uVar12) < fVar45) {
      fVar70 = (float)((uint)((float)(int)fVar70 -
                             (float)(-(uint)(fVar70 < (float)(int)fVar70) & _LC11)) |
                      ~uVar12 & (uint)fVar70);
    }
    if ((float)((uint)fVar69 & uVar12) < fVar45) {
      fVar69 = (float)((uint)((float)(int)fVar69 -
                             (float)(-(uint)(fVar69 < (float)(int)fVar69) & _LC11)) |
                      ~uVar12 & (uint)fVar69);
    }
    if ((float)((uint)fVar68 & uVar12) < fVar45) {
      fVar68 = (float)((uint)((float)(int)fVar68 -
                             (float)(-(uint)(fVar68 < (float)(int)fVar68) & _LC11)) |
                      ~uVar12 & (uint)fVar68);
    }
    if ((float)((uint)fVar58 & uVar12) < fVar45) {
      fVar58 = (float)((uint)((float)(int)fVar58 -
                             (float)(-(uint)(fVar58 < (float)(int)fVar58) & _LC11)) |
                      ~uVar12 & (uint)fVar58);
    }
    auVar83._0_4_ = (int)fVar58;
    auVar83._4_4_ = (int)fVar68;
    auVar83._8_4_ = (int)fVar69;
    auVar83._12_4_ = (int)fVar70;
    auVar82._0_4_ = -(uint)(auVar83._0_4_ < 0);
    auVar82._4_4_ = -(uint)(auVar83._4_4_ < 0);
    auVar82._8_4_ = -(uint)(auVar83._8_4_ < 0);
    auVar82._12_4_ = -(uint)(auVar83._12_4_ < 0);
    auVar83 = ~auVar82 & auVar83;
    fVar58 = (fVar84 - fVar71) * fVar57;
    fVar68 = (fVar85 - fVar71) * fVar57;
    fVar69 = (fVar86 - fVar71) * fVar57;
    fVar57 = (fVar87 - fVar71) * fVar57;
    if ((float)((uint)fVar57 & uVar12) < fVar45) {
      fVar57 = (float)((uint)((float)(int)fVar57 +
                             (float)(-(uint)((float)(int)fVar57 < fVar57) & _LC11)) |
                      ~uVar12 & (uint)fVar57);
    }
    if ((float)((uint)fVar69 & uVar12) < fVar45) {
      fVar69 = (float)((uint)((float)(int)fVar69 +
                             (float)(-(uint)((float)(int)fVar69 < fVar69) & _LC11)) |
                      ~uVar12 & (uint)fVar69);
    }
    if ((float)((uint)fVar68 & uVar12) < fVar45) {
      fVar68 = (float)((uint)((float)(int)fVar68 +
                             (float)(-(uint)((float)(int)fVar68 < fVar68) & _LC11)) |
                      ~uVar12 & (uint)fVar68);
    }
    if ((float)((uint)fVar58 & uVar12) < fVar45) {
      fVar58 = (float)((uint)((float)(int)fVar58 +
                             (float)(-(uint)((float)(int)fVar58 < fVar58) & _LC11)) |
                      ~uVar12 & (uint)fVar58);
    }
    lVar13 = 0;
    auVar41._0_4_ = (int)fVar58;
    auVar41._4_4_ = (int)fVar68;
    auVar41._8_4_ = (int)fVar69;
    auVar41._12_4_ = (int)fVar57;
    auVar67._0_4_ = -(uint)(auVar41._0_4_ < __LC13);
    auVar67._4_4_ = -(uint)(auVar41._4_4_ < _UNK_00111cb4);
    auVar67._8_4_ = -(uint)(auVar41._8_4_ < _UNK_00111cb8);
    auVar67._12_4_ = -(uint)(auVar41._12_4_ < _UNK_00111cbc);
    auVar50 = auVar67 & auVar41 | ~auVar67 & auVar11;
    auVar42._0_4_ = auVar83._0_4_ + -1;
    auVar42._4_4_ = auVar83._4_4_ + -1;
    auVar42._8_4_ = auVar83._8_4_ + -1;
    auVar42._12_4_ = auVar83._12_4_ + -1;
    auVar81._4_4_ = -(uint)(fVar90 < (float)auVar83._4_4_ * fVar46 + fVar71);
    auVar81._0_4_ = -(uint)(fVar88 < (float)auVar83._0_4_ * fVar46 + fVar71);
    auVar81._8_4_ = -(uint)(fVar91 < (float)auVar83._8_4_ * fVar46 + fVar71);
    auVar81._12_4_ = -(uint)(fVar92 < (float)auVar83._12_4_ * fVar46 + fVar71);
    auVar51._4_4_ = -(uint)((float)auVar50._4_4_ * fVar46 + fVar71 < fVar85);
    auVar51._0_4_ = -(uint)((float)auVar50._0_4_ * fVar46 + fVar71 < fVar84);
    auVar51._8_4_ = -(uint)((float)auVar50._8_4_ * fVar46 + fVar71 < fVar86);
    auVar51._12_4_ = -(uint)((float)auVar50._12_4_ * fVar46 + fVar71 < fVar87);
    auVar39 = auVar42 & auVar81 | ~auVar81 & auVar83;
    auVar76._0_4_ = -(uint)(auVar39._0_4_ < 0);
    auVar76._4_4_ = -(uint)(auVar39._4_4_ < 0);
    auVar76._8_4_ = -(uint)(auVar39._8_4_ < 0);
    auVar76._12_4_ = -(uint)(auVar39._12_4_ < 0);
    auVar43._0_4_ = __LC28 + auVar50._0_4_;
    auVar43._4_4_ = _UNK_00111cc4 + auVar50._4_4_;
    auVar43._8_4_ = _UNK_00111cc8 + auVar50._8_4_;
    auVar43._12_4_ = _UNK_00111ccc + auVar50._12_4_;
    local_760 = ~auVar76 & auVar39 & local_750 | ~local_750 & auVar11;
    auVar39 = auVar43 & auVar51 | ~auVar51 & auVar50;
    auVar52._0_4_ = -(uint)(auVar39._0_4_ < __LC13);
    auVar52._4_4_ = -(uint)(auVar39._4_4_ < _UNK_00111cb4);
    auVar52._8_4_ = -(uint)(auVar39._8_4_ < _UNK_00111cb8);
    auVar52._12_4_ = -(uint)(auVar39._12_4_ < _UNK_00111cbc);
    local_750 = (auVar39 & auVar52 | ~auVar52 & auVar11) & local_750;
    do {
      *(char *)((long)puVar22 + lVar13 + 0x30) = (char)*(undefined4 *)(local_760 + lVar13 * 4);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
    lVar13 = 0;
    do {
      *(char *)((long)puVar22 + lVar13 + 0x34) = (char)*(undefined4 *)(local_750 + lVar13 * 4);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
    *(float *)((long)puVar22 + 0x4c) = fVar46;
    uVar30 = 0;
    *(float *)(puVar22 + 8) = fVar71;
    uVar26 = (ulong)puVar22 | 5;
    if (param_1[6] < (ulong)(param_2[0xb] - param_2[10])) {
      local_7a0 = (MutexSys *)local_8b0;
      local_790 = (undefined1  [8])param_1;
      uStack_798 = local_8a0;
      local_800 = (PrimInfoRange *)0x0;
      TaskScheduler::
      spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,uVar35,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_7a0,
                 (TaskGroupContext *)&local_800);
      embree::TaskScheduler::wait();
      if (local_800 != (PrimInfoRange *)0x0) {
        local_7e0._0_4_ = SUB84(local_800,0);
        local_7e0._4_4_ = (undefined4)((ulong)local_800 >> 0x20);
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_7e0);
        goto LAB_0010e508;
      }
      uVar30 = 0;
      do {
        *(undefined8 *)(((ulong)puVar22 & 0xfffffffffffffff0) + uVar30 * 8) =
             *(undefined8 *)(local_8b0 + uVar30 * 8);
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar35);
    }
    else {
      do {
        uVar20 = recurse(param_1,local_8a0,0);
        *(undefined8 *)(local_700 + uVar30 * 2) = uVar20;
        uVar30 = uVar30 + 1;
        local_8a0 = local_8a0 + 0xc;
      } while (uVar30 != uVar35);
      uVar30 = 0;
      do {
        *(undefined8 *)(((ulong)puVar22 & 0xfffffffffffffff0) + uVar30 * 8) =
             *(undefined8 *)(local_8b0 + uVar30 * 8);
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar35);
    }
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar26;
  }
LAB_0010e508:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 8);
  uVar3 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < uVar4 - uVar3) {
    uVar4 = uVar4 + uVar3 >> 1;
    spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar3,uVar4,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar4,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    embree::TaskScheduler::wait();
    return;
  }
  for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    lVar1 = *(long *)(this + 0x20);
    uVar2 = sse2::GeneralBVHBuilder::
            BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::QuantizedNode_t<embree::NodeRefPtr<4>,4>::Set2,embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
            ::recurse(*(undefined8 *)(this + 0x30),uVar3 * 0x60 + *(long *)(this + 0x28),1);
    *(undefined8 *)(lVar1 + uVar3 * 8) = uVar2;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
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
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  MutexSys *this;
  undefined1 auVar7 [12];
  ulong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  long *plVar14;
  undefined8 uVar15;
  undefined1 (*pauVar16) [16];
  ulong *puVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long in_FS_OFFSET;
  float fVar32;
  float fVar37;
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar39;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar50;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  FastAllocator *in_stack_00000008;
  MutexSys *in_stack_00000010;
  uint local_888;
  uint uStack_884;
  uint uStack_880;
  uint uStack_87c;
  undefined1 local_878 [16];
  long *local_828;
  PrimInfoRange *local_810;
  MutexSys *local_7f8;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__CentGeom<embree::BBox<embree::Vec3fa>_>_const___4_
  local_7cb;
  _lambda_embree__CentGeom<embree::BBox<embree::Vec3fa>_>__embree__PrimRef_const___3_ local_7ca;
  EmptyTy local_7c9;
  PrimInfoRange *local_7c8;
  int *local_7c0;
  long *local_7b8;
  undefined8 local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined1 local_798 [8];
  float fStack_790;
  float fStack_78c;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined1 local_778 [8];
  float fStack_770;
  float fStack_76c;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined1 local_758 [8];
  float fStack_750;
  float fStack_74c;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined1 local_738 [8];
  float fStack_730;
  float fStack_72c;
  int local_728;
  int iStack_724;
  int iStack_720;
  int iStack_71c;
  long local_718;
  undefined8 uStack_710;
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
  int local_6c8 [8];
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  long local_648;
  ulong uStack_640;
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  ulong local_5f8 [3];
  undefined1 local_5e0;
  undefined1 local_5d8 [16];
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  ulong local_598;
  ulong local_590;
  long local_588 [168];
  long lStack_48;
  long local_40;
  
  lVar19 = lRam000000000010f044;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7f8 = in_stack_00000010;
  if (in_stack_00000008 == (FastAllocator *)0x0) {
    local_7f8 = *(MutexSys **)(in_FS_OFFSET + lRam000000000010f044);
    in_stack_00000008 = *(FastAllocator **)param_1[10];
    if (local_7f8 == (MutexSys *)0x0) {
      local_7f8 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
      embree::MutexSys::MutexSys(local_7f8);
      *(undefined8 *)(local_7f8 + 8) = 0;
      *(MutexSys **)(local_7f8 + 0x40) = local_7f8;
      *(undefined8 *)(local_7f8 + 0x48) = 0;
      *(undefined8 *)(local_7f8 + 0x50) = 0;
      *(undefined8 *)(local_7f8 + 0x58) = 0;
      *(undefined8 *)(local_7f8 + 0x60) = 0;
      *(undefined8 *)(local_7f8 + 0x68) = 0;
      *(undefined8 *)(local_7f8 + 0x70) = 0;
      *(MutexSys **)(local_7f8 + 0x80) = local_7f8;
      *(undefined8 *)(local_7f8 + 0x88) = 0;
      *(undefined8 *)(local_7f8 + 0x90) = 0;
      *(undefined8 *)(local_7f8 + 0x98) = 0;
      *(undefined8 *)(local_7f8 + 0xa0) = 0;
      *(undefined8 *)(local_7f8 + 0xa8) = 0;
      *(undefined8 *)(local_7f8 + 0xb0) = 0;
      *(MutexSys **)(in_FS_OFFSET + lVar19) = local_7f8;
      embree::MutexSys::lock();
      local_768._0_4_ = SUB84(local_7f8,0);
      local_768._4_4_ = (undefined4)((ulong)local_7f8 >> 0x20);
      if (__MutexSys == _vtable) {
        std::
        vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
        ::
        _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                  ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                    *)&FastAllocator::s_thread_local_allocators,__MutexSys,&local_768);
        this = (MutexSys *)CONCAT44(local_768._4_4_,(undefined4)local_768);
        if (this != (MutexSys *)0x0) {
          embree::MutexSys::~MutexSys(this);
          embree::alignedFree(this);
        }
      }
      else {
        *__MutexSys = local_7f8;
        __MutexSys = __MutexSys + 1;
      }
      embree::MutexSys::unlock();
    }
    local_7f8 = local_7f8 + 0x40;
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
  uVar61 = _LC4;
  fVar65 = _LC2;
  uVar8 = param_2[0xb];
  uVar26 = param_2[10];
  auVar36 = *(undefined1 (*) [16])(param_2 + 2);
  auVar45 = *(undefined1 (*) [16])(param_2 + 4);
  uVar27 = uVar8 - uVar26;
  if (((uVar27 <= param_1[3]) || (lVar19 = *param_2, param_1[1] <= lVar19 + 8U)) ||
     ((uVar27 <= param_1[4] &&
      (fVar37 = auVar45._4_4_ - auVar36._4_4_, fVar38 = auVar45._8_4_ - auVar36._8_4_,
      fVar37 = (fVar37 + fVar38) * (auVar45._0_4_ - auVar36._0_4_) + fVar37 * fVar38,
      (float)((uVar27 - 1) + (1L << ((byte)param_1[2] & 0x3f)) >> ((byte)param_1[2] & 0x3f)) *
      fVar37 * *(float *)((long)param_1 + 0x2c) <=
      *(float *)(param_1 + 5) * fVar37 + *(float *)((long)param_1 + 0x2c) * local_708)))) {
    puVar9 = (undefined8 *)(*(long *)param_1[9] + uVar8 * 0x20);
    puVar25 = (undefined8 *)(*(long *)param_1[9] + uVar26 * 0x20);
    if (puVar9 != puVar25) {
      lVar19 = uVar8 * 0x20 + uVar26 * -0x20;
      uVar8 = lVar19 >> 5;
      if (uVar8 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar25,puVar9,0xfffffffffffffffe);
      }
      else {
        lVar31 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (puVar25,puVar9,(long)(int)lVar31 * 2);
        if (0x200 < lVar19) {
          puVar21 = puVar25 + 0x40;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar25,puVar21)
          ;
          for (; puVar9 != puVar21; puVar21 = puVar21 + 4) {
            while( true ) {
              uVar15 = puVar21[2];
              uVar4 = puVar21[3];
              uVar5 = *puVar21;
              uVar6 = puVar21[1];
              uVar8 = CONCAT44(*(undefined4 *)((long)puVar21 + 0x1c),
                               *(undefined4 *)((long)puVar21 + 0xc));
              puVar25 = puVar21;
              if (CONCAT44(*(undefined4 *)((long)puVar21 + -4),
                           *(undefined4 *)((long)puVar21 + -0x14)) <= uVar8) break;
              do {
                puVar3 = puVar25;
                puVar25 = puVar3 + -4;
                *puVar3 = *puVar25;
                puVar3[1] = puVar3[-3];
                *(undefined1 (*) [16])(puVar3 + 2) = *(undefined1 (*) [16])(puVar3 + -2);
              } while (uVar8 < CONCAT44(*(undefined4 *)((long)puVar3 + -0x24),
                                        *(undefined4 *)((long)puVar3 + -0x34)));
              puVar21 = puVar21 + 4;
              *puVar25 = uVar5;
              puVar3[-3] = uVar6;
              puVar3[-2] = uVar15;
              puVar3[-1] = uVar4;
              if (puVar9 == puVar21) goto LAB_0010eaa8;
            }
            *puVar21 = uVar5;
            puVar21[1] = uVar6;
            puVar21[2] = uVar15;
            puVar21[3] = uVar4;
          }
          goto LAB_0010eaa8;
        }
      }
      std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(puVar25,puVar9);
    }
LAB_0010eaa8:
    puVar9 = (undefined8 *)createLargeLeaf(param_1,param_2);
    goto LAB_0010eaed;
  }
  plVar14 = (long *)param_1[9];
  if (uVar27 < 0xc00) {
    lVar31 = *plVar14;
    lVar29 = uVar8 * 0x20;
    pauVar16 = (undefined1 (*) [16])(lVar31 + uVar26 * 0x20);
    if (local_704 == -1) {
      pauVar11 = (undefined1 (*) [16])(lVar31 + lVar29);
      if (pauVar11 != pauVar16) {
        lVar29 = lVar29 + uVar26 * -0x20;
        uVar8 = lVar29 >> 5;
        if (uVar8 == 0) {
          std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar16,pauVar11,0xfffffffffffffffe);
LAB_00110729:
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar16,pauVar11);
        }
        else {
          lVar19 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar16,pauVar11,(long)(int)lVar19 * 2);
          if (lVar29 < 0x201) goto LAB_00110729;
          pauVar12 = pauVar16 + 0x20;
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar16,pauVar12);
          for (; pauVar11 != pauVar12; pauVar12 = pauVar12 + 2) {
            uVar61 = *(undefined4 *)(pauVar12[1] + 0xc);
            uVar62 = *(undefined4 *)(*pauVar12 + 0xc);
            auVar36 = pauVar12[1];
            auVar45 = *pauVar12;
            uVar8 = CONCAT44(*(undefined4 *)(pauVar12[-1] + 0xc),*(undefined4 *)(pauVar12[-2] + 0xc)
                            );
            pauVar16 = pauVar12;
            while (CONCAT44(uVar61,uVar62) < uVar8) {
              uVar15 = *(undefined8 *)(pauVar16[-2] + 8);
              *(undefined8 *)*pauVar16 = *(undefined8 *)pauVar16[-2];
              *(undefined8 *)(*pauVar16 + 8) = uVar15;
              pauVar16[1] = pauVar16[-1];
              uVar8 = CONCAT44(*(undefined4 *)(pauVar16[-3] + 0xc),
                               *(undefined4 *)(pauVar16[-4] + 0xc));
              pauVar16 = pauVar16 + -2;
            }
            *pauVar16 = auVar45;
            pauVar16[1] = auVar36;
          }
        }
        lVar31 = *plVar14;
        uVar26 = param_2[10];
        uVar8 = param_2[0xb];
        lVar19 = *param_2;
      }
      local_5f8[1] = uVar26 + uVar8 >> 1;
      if (uVar26 < local_5f8[1]) {
        local_608._4_4_ = _LC2;
        local_608._0_4_ = _LC2;
        local_608._8_4_ = _LC2;
        local_608._12_4_ = _LC2;
        local_618._4_4_ = _LC4;
        local_618._0_4_ = _LC4;
        local_618._8_4_ = _LC4;
        local_618._12_4_ = _LC4;
        local_628._4_4_ = _LC2;
        local_628._0_4_ = _LC2;
        local_628._8_4_ = _LC2;
        local_628._12_4_ = _LC2;
        local_638._4_4_ = _LC4;
        local_638._0_4_ = _LC4;
        local_638._8_4_ = _LC4;
        local_638._12_4_ = _LC4;
        pauVar16 = (undefined1 (*) [16])(uVar26 * 0x20 + lVar31);
        do {
          auVar34._0_4_ = *(float *)pauVar16[1] + *(float *)*pauVar16;
          auVar34._4_4_ = *(float *)(pauVar16[1] + 4) + *(float *)(*pauVar16 + 4);
          auVar34._8_4_ = *(float *)(pauVar16[1] + 8) + *(float *)(*pauVar16 + 8);
          auVar34._12_4_ = *(float *)(pauVar16[1] + 0xc) + *(float *)(*pauVar16 + 0xc);
          pauVar11 = pauVar16 + 2;
          local_638 = minps(local_638,*pauVar16);
          local_628 = maxps(local_628,pauVar16[1]);
          local_618 = minps(local_618,auVar34);
          local_608 = maxps(local_608,auVar34);
          pauVar16 = pauVar11;
        } while ((undefined1 (*) [16])(local_5f8[1] * 0x20 + lVar31) != pauVar11);
      }
      else {
        local_608._4_4_ = _LC2;
        local_608._0_4_ = _LC2;
        local_608._8_4_ = _LC2;
        local_608._12_4_ = _LC2;
        local_618._4_4_ = _LC4;
        local_618._0_4_ = _LC4;
        local_618._8_4_ = _LC4;
        local_618._12_4_ = _LC4;
        local_628._4_4_ = _LC2;
        local_628._0_4_ = _LC2;
        local_628._8_4_ = _LC2;
        local_628._12_4_ = _LC2;
        local_638._4_4_ = _LC4;
        local_638._0_4_ = _LC4;
        local_638._8_4_ = _LC4;
        local_638._12_4_ = _LC4;
      }
      if (local_5f8[1] < uVar8) {
        local_5a8._4_4_ = _LC2;
        local_5a8._0_4_ = _LC2;
        local_5a8._8_4_ = _LC2;
        local_5a8._12_4_ = _LC2;
        local_5b8._4_4_ = _LC4;
        local_5b8._0_4_ = _LC4;
        local_5b8._8_4_ = _LC4;
        local_5b8._12_4_ = _LC4;
        auVar45._4_4_ = _LC2;
        auVar45._0_4_ = _LC2;
        auVar45._8_4_ = _LC2;
        auVar45._12_4_ = _LC2;
        local_878._4_4_ = _LC4;
        local_878._0_4_ = _LC4;
        local_878._8_4_ = _LC4;
        local_878._12_4_ = _LC4;
        pauVar16 = (undefined1 (*) [16])(local_5f8[1] * 0x20 + lVar31);
        do {
          auVar35._0_4_ = *(float *)pauVar16[1] + *(float *)*pauVar16;
          auVar35._4_4_ = *(float *)(pauVar16[1] + 4) + *(float *)(*pauVar16 + 4);
          auVar35._8_4_ = *(float *)(pauVar16[1] + 8) + *(float *)(*pauVar16 + 8);
          auVar35._12_4_ = *(float *)(pauVar16[1] + 0xc) + *(float *)(*pauVar16 + 0xc);
          pauVar11 = pauVar16 + 2;
          local_878 = minps(local_878,*pauVar16);
          auVar45 = maxps(auVar45,pauVar16[1]);
          local_5b8 = minps(local_5b8,auVar35);
          local_5a8 = maxps(local_5a8,auVar35);
          pauVar16 = pauVar11;
        } while ((undefined1 (*) [16])(lVar31 + uVar8 * 0x20) != pauVar11);
        goto LAB_0010fe5b;
      }
LAB_001107c9:
      local_5a8._4_4_ = _LC2;
      local_5a8._0_4_ = _LC2;
      local_5a8._8_4_ = _LC2;
      local_5a8._12_4_ = _LC2;
      local_5b8._4_4_ = _LC4;
      local_5b8._0_4_ = _LC4;
      local_5b8._8_4_ = _LC4;
      local_5b8._12_4_ = _LC4;
      local_878._4_4_ = _LC4;
      local_878._0_4_ = _LC4;
      local_878._8_4_ = _LC4;
      local_878._12_4_ = _LC4;
      local_5c8 = _LC2;
      fStack_5c4 = _LC2;
      fStack_5c0 = _LC2;
      fStack_5bc = _LC2;
      uVar61 = _LC4;
      fVar65 = _LC2;
    }
    else {
      uVar27 = (ulong)(uint)(1 << ((byte)local_704 & 0x1f));
      local_5a8._4_4_ = _LC2;
      local_5a8._0_4_ = _LC2;
      local_5a8._8_4_ = _LC2;
      local_5a8._12_4_ = _LC2;
      uVar15 = *(undefined8 *)*(undefined1 (*) [12])(&mm_lookupmask_ps + uVar27 * 2);
      auVar7 = *(undefined1 (*) [12])(&mm_lookupmask_ps + uVar27 * 2);
      pauVar11 = (undefined1 (*) [16])(lVar31 + -0x20 + lVar29);
      local_5b8._4_4_ = _LC4;
      local_5b8._0_4_ = _LC4;
      local_5b8._8_4_ = _LC4;
      local_5b8._12_4_ = _LC4;
      local_878._4_4_ = _LC4;
      local_878._0_4_ = _LC4;
      local_878._8_4_ = _LC4;
      local_878._12_4_ = _LC4;
      local_888 = (uint)uVar15;
      uStack_884 = (uint)((ulong)uVar15 >> 0x20);
      uStack_880 = (uint)*(undefined8 *)(embree::MutexSys::MutexSys + uVar27 * 0x10);
      uStack_87c = (uint)((ulong)*(undefined8 *)(embree::MutexSys::MutexSys + uVar27 * 0x10) >> 0x20
                         );
      local_608._4_4_ = _LC2;
      local_608._0_4_ = _LC2;
      local_608._8_4_ = _LC2;
      local_608._12_4_ = _LC2;
      local_618._4_4_ = _LC4;
      local_618._0_4_ = _LC4;
      local_618._8_4_ = _LC4;
      local_618._12_4_ = _LC4;
      local_628._4_4_ = _LC2;
      local_628._0_4_ = _LC2;
      local_628._8_4_ = _LC2;
      local_628._12_4_ = _LC2;
      local_638._4_4_ = _LC4;
      local_638._0_4_ = _LC4;
      local_638._8_4_ = _LC4;
      local_638._12_4_ = _LC4;
      pauVar12 = pauVar16;
      local_5c8 = _LC2;
      fStack_5c4 = _LC2;
      fStack_5c0 = _LC2;
      fStack_5bc = _LC2;
      for (; pauVar16 <= pauVar11; pauVar16 = pauVar16 + 2) {
        auVar36 = pauVar16[1];
        auVar45 = *pauVar16;
        auVar40._0_4_ = auVar36._0_4_ + auVar45._0_4_;
        auVar40._4_4_ = auVar36._4_4_ + auVar45._4_4_;
        auVar40._8_4_ = auVar36._8_4_ + auVar45._8_4_;
        auVar40._12_4_ = auVar36._12_4_ + auVar45._12_4_;
        auVar51._0_4_ =
             -(uint)((int)((auVar40._0_4_ - local_6e8) * local_6d8 + _LC26) < local_700) & local_888
        ;
        auVar51._4_4_ =
             -(uint)((int)((auVar40._4_4_ - fStack_6e4) * fStack_6d4 + _UNK_00111ce4) < local_700) &
             uStack_884;
        auVar51._8_4_ =
             -(uint)((int)((auVar40._8_4_ - fStack_6e0) * fStack_6d0 + _UNK_00111ce8) < local_700) &
             uStack_880;
        auVar51._12_4_ =
             -(uint)((int)((auVar40._12_4_ - fStack_6dc) * fStack_6cc + _UNK_00111cec) < local_700)
             & uStack_87c;
        uVar28 = movmskps((int)pauVar12,auVar51);
        pauVar12 = (undefined1 (*) [16])(ulong)uVar28;
        if (uVar28 == 0) {
          auVar59._4_4_ = fStack_5c4;
          auVar59._0_4_ = local_5c8;
          auVar59._8_4_ = fStack_5c0;
          auVar59._12_4_ = fStack_5bc;
          pauVar13 = pauVar11;
          while( true ) {
            auVar41 = pauVar13[1];
            auVar34 = *pauVar13;
            pauVar11 = pauVar13 + -2;
            auVar54._0_4_ = auVar41._0_4_ + auVar34._0_4_;
            auVar54._4_4_ = auVar41._4_4_ + auVar34._4_4_;
            auVar54._8_4_ = auVar41._8_4_ + auVar34._8_4_;
            auVar54._12_4_ = auVar41._12_4_ + auVar34._12_4_;
            auVar42._0_4_ =
                 -(uint)((int)((auVar54._0_4_ - local_6e8) * local_6d8 + _LC26) < local_700) &
                 auVar7._0_4_;
            auVar42._4_4_ =
                 -(uint)((int)((auVar54._4_4_ - fStack_6e4) * fStack_6d4 + _UNK_00111ce4) <
                        local_700) & auVar7._4_4_;
            auVar42._8_4_ =
                 -(uint)((int)((auVar54._8_4_ - fStack_6e0) * fStack_6d0 + _UNK_00111ce8) <
                        local_700) & auVar7._8_4_;
            auVar42._12_4_ =
                 -(uint)((int)((auVar54._12_4_ - fStack_6dc) * fStack_6cc + _UNK_00111cec) <
                        local_700) & uStack_87c;
            uVar28 = movmskps((int)pauVar12,auVar42);
            pauVar12 = (undefined1 (*) [16])(ulong)uVar28;
            if (uVar28 != 0) break;
            local_878 = minps(local_878,auVar34);
            auVar59 = maxps(auVar59,auVar41);
            local_5b8 = minps(local_5b8,auVar54);
            local_5a8 = maxps(local_5a8,auVar54);
            pauVar13 = pauVar11;
            if (pauVar11 < pauVar16) {
              local_5c8 = auVar59._0_4_;
              fStack_5c4 = auVar59._4_4_;
              fStack_5c0 = auVar59._8_4_;
              fStack_5bc = auVar59._12_4_;
              goto LAB_0010ecb3;
            }
          }
          *pauVar16 = auVar34;
          local_638 = minps(local_638,auVar34);
          local_628 = maxps(local_628,auVar41);
          local_878 = minps(local_878,auVar45);
          auVar41 = maxps(auVar59,auVar36);
          local_608 = maxps(local_608,auVar54);
          local_5b8 = minps(local_5b8,auVar40);
          pauVar16[1] = pauVar13[1];
          local_618 = minps(local_618,auVar54);
          local_5a8 = maxps(local_5a8,auVar40);
          local_5c8 = auVar41._0_4_;
          fStack_5c4 = auVar41._4_4_;
          fStack_5c0 = auVar41._8_4_;
          fStack_5bc = auVar41._12_4_;
          *pauVar13 = auVar45;
          pauVar13[1] = auVar36;
        }
        else {
          local_638 = minps(local_638,auVar45);
          local_628 = maxps(local_628,auVar36);
          local_618 = minps(local_618,auVar40);
          local_608 = maxps(local_608,auVar40);
        }
      }
LAB_0010ecb3:
      lVar19 = *param_2;
      local_5f8[1] = (long)pauVar16 - lVar31 >> 5;
    }
  }
  else {
    if (local_704 != -1) {
      uVar27 = (ulong)(uint)(1 << ((byte)local_704 & 0x1f));
      local_7a8._0_4_ = _LC4;
      local_7a8._4_4_ = _LC4;
      uStack_7a0 = _LC4;
      uStack_79c = _LC4;
      local_648 = (&mm_lookupmask_ps)[uVar27 * 2];
      uStack_640 = *(ulong *)(embree::MutexSys::MutexSys + uVar27 * 0x10);
      local_7c0 = local_6c8;
      local_7b8 = &local_648;
      local_798._4_4_ = _LC2;
      local_798._0_4_ = _LC2;
      fStack_790 = _LC2;
      fStack_78c = _LC2;
      local_788 = _LC4;
      uStack_784 = _LC4;
      uStack_780 = _LC4;
      uStack_77c = _LC4;
      local_778._4_4_ = _LC2;
      local_778._0_4_ = _LC2;
      fStack_770 = _LC2;
      fStack_76c = _LC2;
      local_6c8[0] = local_700;
      local_6c8[1] = local_700;
      local_6c8[2] = local_700;
      local_6c8[3] = local_700;
      local_768._0_4_ = _LC4;
      local_768._4_4_ = _LC4;
      uStack_760._0_4_ = _LC4;
      uStack_760._4_4_ = _LC4;
      local_758._4_4_ = _LC2;
      local_758._0_4_ = _LC2;
      fStack_750 = _LC2;
      fStack_74c = _LC2;
      local_748 = _LC4;
      uStack_744 = _LC4;
      uStack_740 = _LC4;
      uStack_73c = _LC4;
      local_738._4_4_ = _LC2;
      local_738._0_4_ = _LC2;
      fStack_730 = _LC2;
      fStack_72c = _LC2;
      local_7c8 = (PrimInfoRange *)&local_708;
      local_5f8[1] = parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                               ((PrimRef *)*plVar14,uVar26,uVar8,&local_7c9,(CentGeom *)&local_7a8,
                                (CentGeom *)&local_768,
                                (_lambda_embree__PrimRef_const___1_ *)&local_7c8,&local_7ca,
                                &local_7cb,0x80);
      local_878._4_4_ = local_768._4_4_;
      local_878._0_4_ = (undefined4)local_768;
      local_878._12_4_ = uStack_760._4_4_;
      local_878._8_4_ = (undefined4)uStack_760;
      local_638._4_4_ = local_7a8._4_4_;
      local_638._0_4_ = (undefined4)local_7a8;
      local_638._8_4_ = uStack_7a0;
      local_638._12_4_ = uStack_79c;
      lVar19 = *param_2;
      local_618._4_4_ = uStack_784;
      local_618._0_4_ = local_788;
      local_618._8_4_ = uStack_780;
      local_618._12_4_ = uStack_77c;
      local_5b8._4_4_ = uStack_744;
      local_5b8._0_4_ = local_748;
      local_5b8._8_4_ = uStack_740;
      local_5b8._12_4_ = uStack_73c;
      local_5c8 = (float)local_758._0_4_;
      fStack_5c4 = (float)local_758._4_4_;
      fStack_5c0 = fStack_750;
      fStack_5bc = fStack_74c;
      local_5a8 = _local_738;
      local_608 = _local_778;
      local_628 = _local_798;
      goto LAB_0010ecda;
    }
    lVar31 = *plVar14;
    pauVar16 = (undefined1 (*) [16])(lVar31 + uVar8 * 0x20);
    pauVar11 = (undefined1 (*) [16])(lVar31 + uVar26 * 0x20);
    if (pauVar16 != pauVar11) {
      lVar19 = uVar8 * 0x20 + uVar26 * -0x20;
      uVar8 = lVar19 >> 5;
      if (uVar8 == 0) {
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar11,pauVar16,0xfffffffffffffffe);
LAB_001107af:
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar11,pauVar16)
        ;
      }
      else {
        lVar31 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (pauVar11,pauVar16,(long)(int)lVar31 * 2);
        if (lVar19 < 0x201) goto LAB_001107af;
        pauVar12 = pauVar11 + 0x20;
        std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>(pauVar11,pauVar12)
        ;
        for (; pauVar16 != pauVar12; pauVar12 = pauVar12 + 2) {
          uVar61 = *(undefined4 *)(pauVar12[1] + 0xc);
          uVar62 = *(undefined4 *)(*pauVar12 + 0xc);
          auVar36 = pauVar12[1];
          auVar45 = *pauVar12;
          uVar8 = CONCAT44(*(undefined4 *)(pauVar12[-1] + 0xc),*(undefined4 *)(pauVar12[-2] + 0xc));
          pauVar11 = pauVar12;
          while (CONCAT44(uVar61,uVar62) < uVar8) {
            uVar15 = *(undefined8 *)(pauVar11[-2] + 8);
            *(undefined8 *)*pauVar11 = *(undefined8 *)pauVar11[-2];
            *(undefined8 *)(*pauVar11 + 8) = uVar15;
            pauVar11[1] = pauVar11[-1];
            uVar8 = CONCAT44(*(undefined4 *)(pauVar11[-3] + 0xc),*(undefined4 *)(pauVar11[-4] + 0xc)
                            );
            pauVar11 = pauVar11 + -2;
          }
          *pauVar11 = auVar45;
          pauVar11[1] = auVar36;
        }
      }
      lVar31 = *plVar14;
      uVar26 = param_2[10];
      uVar8 = param_2[0xb];
      lVar19 = *param_2;
    }
    local_5f8[1] = uVar8 + uVar26 >> 1;
    if (uVar26 < local_5f8[1]) {
      local_608._4_4_ = _LC2;
      local_608._0_4_ = _LC2;
      local_608._8_4_ = _LC2;
      local_608._12_4_ = _LC2;
      local_618._4_4_ = _LC4;
      local_618._0_4_ = _LC4;
      local_618._8_4_ = _LC4;
      local_618._12_4_ = _LC4;
      local_628._4_4_ = _LC2;
      local_628._0_4_ = _LC2;
      local_628._8_4_ = _LC2;
      local_628._12_4_ = _LC2;
      local_638._4_4_ = _LC4;
      local_638._0_4_ = _LC4;
      local_638._8_4_ = _LC4;
      local_638._12_4_ = _LC4;
      pauVar16 = (undefined1 (*) [16])(uVar26 * 0x20 + lVar31);
      do {
        auVar36._0_4_ = *(float *)pauVar16[1] + *(float *)*pauVar16;
        auVar36._4_4_ = *(float *)(pauVar16[1] + 4) + *(float *)(*pauVar16 + 4);
        auVar36._8_4_ = *(float *)(pauVar16[1] + 8) + *(float *)(*pauVar16 + 8);
        auVar36._12_4_ = *(float *)(pauVar16[1] + 0xc) + *(float *)(*pauVar16 + 0xc);
        pauVar11 = pauVar16 + 2;
        local_638 = minps(local_638,*pauVar16);
        local_628 = maxps(local_628,pauVar16[1]);
        local_618 = minps(local_618,auVar36);
        local_608 = maxps(local_608,auVar36);
        pauVar16 = pauVar11;
      } while ((undefined1 (*) [16])(local_5f8[1] * 0x20 + lVar31) != pauVar11);
    }
    else {
      local_608._4_4_ = _LC2;
      local_608._0_4_ = _LC2;
      local_608._8_4_ = _LC2;
      local_608._12_4_ = _LC2;
      local_618._4_4_ = _LC4;
      local_618._0_4_ = _LC4;
      local_618._8_4_ = _LC4;
      local_618._12_4_ = _LC4;
      local_628._4_4_ = _LC2;
      local_628._0_4_ = _LC2;
      local_628._8_4_ = _LC2;
      local_628._12_4_ = _LC2;
      local_638._4_4_ = _LC4;
      local_638._0_4_ = _LC4;
      local_638._8_4_ = _LC4;
      local_638._12_4_ = _LC4;
    }
    if (uVar8 <= local_5f8[1]) goto LAB_001107c9;
    local_5a8._4_4_ = _LC2;
    local_5a8._0_4_ = _LC2;
    local_5a8._8_4_ = _LC2;
    local_5a8._12_4_ = _LC2;
    local_5b8._4_4_ = _LC4;
    local_5b8._0_4_ = _LC4;
    local_5b8._8_4_ = _LC4;
    local_5b8._12_4_ = _LC4;
    auVar45._4_4_ = _LC2;
    auVar45._0_4_ = _LC2;
    auVar45._8_4_ = _LC2;
    auVar45._12_4_ = _LC2;
    local_878._4_4_ = _LC4;
    local_878._0_4_ = _LC4;
    local_878._8_4_ = _LC4;
    local_878._12_4_ = _LC4;
    pauVar16 = (undefined1 (*) [16])(local_5f8[1] * 0x20 + lVar31);
    do {
      auVar41._0_4_ = *(float *)pauVar16[1] + *(float *)*pauVar16;
      auVar41._4_4_ = *(float *)(pauVar16[1] + 4) + *(float *)(*pauVar16 + 4);
      auVar41._8_4_ = *(float *)(pauVar16[1] + 8) + *(float *)(*pauVar16 + 8);
      auVar41._12_4_ = *(float *)(pauVar16[1] + 0xc) + *(float *)(*pauVar16 + 0xc);
      pauVar11 = pauVar16 + 2;
      local_878 = minps(local_878,*pauVar16);
      auVar45 = maxps(auVar45,pauVar16[1]);
      local_5b8 = minps(local_5b8,auVar41);
      local_5a8 = maxps(local_5a8,auVar41);
      pauVar16 = pauVar11;
    } while ((undefined1 (*) [16])(lVar31 + uVar8 * 0x20) != pauVar11);
LAB_0010fe5b:
    local_5c8 = auVar45._0_4_;
    fStack_5c4 = auVar45._4_4_;
    fStack_5c0 = auVar45._8_4_;
    fStack_5bc = auVar45._12_4_;
    uVar61 = _LC4;
    fVar65 = _LC2;
  }
LAB_0010ecda:
  local_810 = (PrimInfoRange *)local_6c8;
  local_828 = &local_648;
  uStack_640 = uStack_640 & 0xffffffffffffff00;
  local_648 = lVar19 + 1;
  local_5f8[0] = uVar26;
  local_5f8[2] = lVar19 + 1;
  local_5e0 = 0;
  local_598 = local_5f8[1];
  local_590 = uVar8;
  local_5d8 = local_878;
  uVar62 = uVar61;
  uVar63 = uVar61;
  uVar64 = uVar61;
  fVar37 = fVar65;
  fVar38 = fVar65;
  fVar66 = fVar65;
  if (*param_1 < 3) {
    uVar8 = param_1[7];
    if (uVar8 < (ulong)(param_2[0xb] - param_2[10])) {
      lVar31 = 0xc0;
      uVar26 = 2;
      lVar19 = 4;
      goto LAB_001101f4;
    }
    uVar26 = 2;
    plVar14 = local_588;
LAB_0010f34b:
    uVar8 = ((long)plVar14 - (long)local_828 >> 5) * -0x5555555555555555;
    if (uVar8 == 0) {
      std::
      __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (local_828,plVar14,0xfffffffffffffffe);
    }
    else {
      lVar19 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      std::
      __introsort_loop<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                (local_828,plVar14,(long)(int)lVar19 * 2);
      if (0x600 < (long)plVar14 - (long)local_828) {
        plVar24 = &lStack_48;
        std::
        __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                  (local_828,plVar24);
        for (; plVar14 != plVar24; plVar24 = plVar24 + 0xc) {
          std::
          __unguarded_linear_insert<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Val_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
                    ();
        }
        goto LAB_0010f3d7;
      }
    }
    std::
    __insertion_sort<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>*,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>>>>
              (local_828,plVar14);
  }
  else {
    uVar26 = 2;
    plVar14 = local_588;
    do {
      uVar20 = 0;
      uVar23 = 0xffffffffffffffff;
      pfVar10 = (float *)local_638;
      uVar8 = local_5f8[1];
      uVar27 = local_5f8[0];
      fVar58 = _LC2;
      while( true ) {
        if ((param_1[3] < uVar8 - uVar27) &&
           (fVar32 = (pfVar10[4] - *pfVar10) *
                     ((pfVar10[5] - pfVar10[1]) + (pfVar10[6] - pfVar10[2])) +
                     (pfVar10[5] - pfVar10[1]) * (pfVar10[6] - pfVar10[2]), fVar58 < fVar32)) {
          uVar23 = uVar20;
          fVar58 = fVar32;
        }
        uVar20 = uVar20 + 1;
        if (uVar20 == uVar26) break;
        uVar8 = *(ulong *)(pfVar10 + 0x2a);
        uVar27 = *(ulong *)(pfVar10 + 0x28);
        pfVar10 = pfVar10 + 0x18;
      }
      if (uVar23 == 0xffffffffffffffff) break;
      lVar19 = *param_2;
      lVar31 = uVar23 * 0x60;
      HeuristicArrayBinningSAH<embree::PrimRef,32ul>::find(local_810,*(ulong *)param_1[9]);
      plVar24 = (long *)param_1[9];
      auVar67._4_4_ = fVar37;
      auVar67._0_4_ = fVar65;
      auVar67._8_4_ = fVar38;
      auVar67._12_4_ = fVar66;
      uVar8 = local_5f8[uVar23 * 0xc + 1];
      uVar27 = local_5f8[uVar23 * 0xc];
      uVar39 = uVar61;
      uVar48 = uVar61;
      uVar49 = uVar61;
      uVar50 = uVar61;
      if (uVar8 - uVar27 < 0xc00) {
        lVar29 = *plVar24;
        lVar30 = uVar8 * 0x20;
        pauVar16 = (undefined1 (*) [16])(lVar29 + uVar27 * 0x20);
        if (local_6c8[1] == -1) {
          pauVar11 = (undefined1 (*) [16])(lVar29 + lVar30);
          if (pauVar11 != pauVar16) {
            lVar30 = lVar30 + uVar27 * -0x20;
            uVar8 = lVar30 >> 5;
            if (uVar8 == 0) {
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar16,pauVar11,0xfffffffffffffffe);
            }
            else {
              lVar29 = 0x3f;
              if (uVar8 != 0) {
                for (; uVar8 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                }
              }
              std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar16,pauVar11,(long)(int)lVar29 * 2);
              if (0x200 < lVar30) {
                pauVar12 = pauVar16 + 0x20;
                std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                          (pauVar16,pauVar12);
                for (; pauVar11 != pauVar12; pauVar12 = pauVar12 + 2) {
                  uVar1 = *(undefined4 *)(pauVar12[1] + 0xc);
                  uVar2 = *(undefined4 *)(*pauVar12 + 0xc);
                  uVar15 = *(undefined8 *)pauVar12[1];
                  uVar4 = *(undefined8 *)(pauVar12[1] + 8);
                  auVar36 = *pauVar12;
                  uVar8 = CONCAT44(*(undefined4 *)(pauVar12[-1] + 0xc),
                                   *(undefined4 *)(pauVar12[-2] + 0xc));
                  pauVar16 = pauVar12;
                  while (CONCAT44(uVar1,uVar2) < uVar8) {
                    uVar5 = *(undefined8 *)(pauVar16[-2] + 8);
                    *(undefined8 *)*pauVar16 = *(undefined8 *)pauVar16[-2];
                    *(undefined8 *)(*pauVar16 + 8) = uVar5;
                    pauVar16[1] = pauVar16[-1];
                    uVar8 = CONCAT44(*(undefined4 *)(pauVar16[-3] + 0xc),
                                     *(undefined4 *)(pauVar16[-4] + 0xc));
                    pauVar16 = pauVar16 + -2;
                  }
                  *pauVar16 = auVar36;
                  *(undefined8 *)pauVar16[1] = uVar15;
                  *(undefined8 *)(pauVar16[1] + 8) = uVar4;
                }
                lVar29 = *plVar24;
                uVar27 = local_5f8[uVar23 * 0xc];
                uVar8 = local_5f8[uVar23 * 0xc + 1];
                goto LAB_0010f82c;
              }
            }
            std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar16,pauVar11);
            uVar27 = local_5f8[uVar23 * 0xc];
            lVar29 = *plVar24;
            uVar8 = local_5f8[uVar23 * 0xc + 1];
          }
LAB_0010f82c:
          uVar20 = uVar27 + uVar8 >> 1;
          if (uVar27 < uVar20) {
            auVar69._4_4_ = fVar37;
            auVar69._0_4_ = fVar65;
            auVar69._8_4_ = fVar38;
            auVar69._12_4_ = fVar66;
            auVar71._4_4_ = fVar37;
            auVar71._0_4_ = fVar65;
            auVar71._8_4_ = fVar38;
            auVar71._12_4_ = fVar66;
            auVar33._4_4_ = uVar61;
            auVar33._0_4_ = uVar61;
            auVar33._8_4_ = uVar61;
            auVar33._12_4_ = uVar61;
            pauVar16 = (undefined1 (*) [16])(uVar27 * 0x20 + lVar29);
            auVar70 = auVar33;
            do {
              auVar43._0_4_ = *(float *)pauVar16[1] + *(float *)*pauVar16;
              auVar43._4_4_ = *(float *)(pauVar16[1] + 4) + *(float *)(*pauVar16 + 4);
              auVar43._8_4_ = *(float *)(pauVar16[1] + 8) + *(float *)(*pauVar16 + 8);
              auVar43._12_4_ = *(float *)(pauVar16[1] + 0xc) + *(float *)(*pauVar16 + 0xc);
              pauVar11 = pauVar16 + 2;
              auVar33 = minps(auVar33,*pauVar16);
              auVar71 = maxps(auVar71,pauVar16[1]);
              auVar70 = minps(auVar70,auVar43);
              auVar69 = maxps(auVar69,auVar43);
              pauVar16 = pauVar11;
            } while ((undefined1 (*) [16])(uVar20 * 0x20 + lVar29) != pauVar11);
          }
          else {
            auVar33._4_4_ = uVar61;
            auVar33._0_4_ = uVar61;
            auVar33._8_4_ = uVar61;
            auVar33._12_4_ = uVar61;
            auVar69._4_4_ = fVar37;
            auVar69._0_4_ = fVar65;
            auVar69._8_4_ = fVar38;
            auVar69._12_4_ = fVar66;
            auVar71._4_4_ = fVar37;
            auVar71._0_4_ = fVar65;
            auVar71._8_4_ = fVar38;
            auVar71._12_4_ = fVar66;
            auVar70 = auVar33;
          }
          if (uVar20 < uVar8) {
            auVar67._4_4_ = fVar37;
            auVar67._0_4_ = fVar65;
            auVar67._8_4_ = fVar38;
            auVar67._12_4_ = fVar66;
            local_878._4_4_ = fVar37;
            local_878._0_4_ = fVar65;
            local_878._8_4_ = fVar38;
            local_878._12_4_ = fVar66;
            auVar55._4_4_ = uVar61;
            auVar55._0_4_ = uVar61;
            auVar55._8_4_ = uVar61;
            auVar55._12_4_ = uVar61;
            pauVar16 = (undefined1 (*) [16])(uVar20 * 0x20 + lVar29);
            auVar68 = auVar55;
            do {
              auVar44._0_4_ = *(float *)pauVar16[1] + *(float *)*pauVar16;
              auVar44._4_4_ = *(float *)(pauVar16[1] + 4) + *(float *)(*pauVar16 + 4);
              auVar44._8_4_ = *(float *)(pauVar16[1] + 8) + *(float *)(*pauVar16 + 8);
              auVar44._12_4_ = *(float *)(pauVar16[1] + 0xc) + *(float *)(*pauVar16 + 0xc);
              pauVar11 = pauVar16 + 2;
              auVar55 = minps(auVar55,*pauVar16);
              local_878 = maxps(local_878,pauVar16[1]);
              auVar68 = minps(auVar68,auVar44);
              auVar67 = maxps(auVar67,auVar44);
              pauVar16 = pauVar11;
            } while ((undefined1 (*) [16])(uVar8 * 0x20 + lVar29) != pauVar11);
            goto LAB_0010f8e1;
          }
LAB_001100a1:
          auVar68._4_4_ = uVar61;
          auVar68._0_4_ = uVar61;
          auVar68._8_4_ = uVar61;
          auVar68._12_4_ = uVar61;
          auVar67._4_4_ = fVar37;
          auVar67._0_4_ = fVar65;
          auVar67._8_4_ = fVar38;
          auVar67._12_4_ = fVar66;
          local_878._4_4_ = fVar37;
          local_878._0_4_ = fVar65;
          local_878._8_4_ = fVar38;
          local_878._12_4_ = fVar66;
        }
        else {
          auVar33._4_4_ = uVar61;
          auVar33._0_4_ = uVar61;
          auVar33._8_4_ = uVar61;
          auVar33._12_4_ = uVar61;
          uVar20 = (ulong)(uint)(1 << ((byte)local_6c8[1] & 0x1f));
          iVar18 = 0x1130f8;
          pauVar11 = (undefined1 (*) [16])(lVar29 + -0x20 + lVar30);
          local_888 = (uint)(&mm_lookupmask_ps)[uVar20 * 2];
          uStack_884 = (uint)((ulong)(&mm_lookupmask_ps)[uVar20 * 2] >> 0x20);
          uStack_880 = (uint)*(undefined8 *)(embree::MutexSys::MutexSys + uVar20 * 0x10);
          uStack_87c = (uint)((ulong)*(undefined8 *)(embree::MutexSys::MutexSys + uVar20 * 0x10) >>
                             0x20);
          auVar68 = auVar33;
          auVar69 = auVar67;
          auVar70 = auVar33;
          auVar71 = auVar67;
          local_878 = auVar67;
          for (; pauVar16 <= pauVar11; pauVar16 = pauVar16 + 2) {
            auVar36 = pauVar16[1];
            auVar45 = *pauVar16;
            auVar52._0_4_ = auVar36._0_4_ + auVar45._0_4_;
            auVar52._4_4_ = auVar36._4_4_ + auVar45._4_4_;
            auVar52._8_4_ = auVar36._8_4_ + auVar45._8_4_;
            auVar52._12_4_ = auVar36._12_4_ + auVar45._12_4_;
            auVar56._0_4_ =
                 -(uint)((int)((auVar52._0_4_ - local_6a8) * local_698 + _LC26) < local_6c8[2]) &
                 local_888;
            auVar56._4_4_ =
                 -(uint)((int)((auVar52._4_4_ - fStack_6a4) * fStack_694 + _UNK_00111ce4) <
                        local_6c8[2]) & uStack_884;
            auVar56._8_4_ =
                 -(uint)((int)((auVar52._8_4_ - fStack_6a0) * fStack_690 + _UNK_00111ce8) <
                        local_6c8[2]) & uStack_880;
            auVar56._12_4_ =
                 -(uint)((int)((auVar52._12_4_ - fStack_69c) * fStack_68c + _UNK_00111cec) <
                        local_6c8[2]) & uStack_87c;
            iVar18 = movmskps(iVar18,auVar56);
            if (iVar18 == 0) {
              auVar60._4_4_ = uVar48;
              auVar60._0_4_ = uVar39;
              auVar60._8_4_ = uVar49;
              auVar60._12_4_ = uVar50;
              pauVar12 = pauVar11;
              while( true ) {
                auVar41 = pauVar12[1];
                auVar34 = *pauVar12;
                pauVar11 = pauVar12 + -2;
                auVar57._0_4_ = auVar41._0_4_ + auVar34._0_4_;
                auVar57._4_4_ = auVar41._4_4_ + auVar34._4_4_;
                auVar57._8_4_ = auVar41._8_4_ + auVar34._8_4_;
                auVar57._12_4_ = auVar41._12_4_ + auVar34._12_4_;
                auVar53._0_4_ =
                     -(uint)((int)((auVar57._0_4_ - local_6a8) * local_698 + _LC26) < local_6c8[2])
                     & local_888;
                auVar53._4_4_ =
                     -(uint)((int)((auVar57._4_4_ - fStack_6a4) * fStack_694 + _UNK_00111ce4) <
                            local_6c8[2]) & uStack_884;
                auVar53._8_4_ =
                     -(uint)((int)((auVar57._8_4_ - fStack_6a0) * fStack_690 + _UNK_00111ce8) <
                            local_6c8[2]) & uStack_880;
                auVar53._12_4_ =
                     -(uint)((int)((auVar57._12_4_ - fStack_69c) * fStack_68c + _UNK_00111cec) <
                            local_6c8[2]) & uStack_87c;
                iVar18 = movmskps(0,auVar53);
                if (iVar18 != 0) break;
                auVar60 = minps(auVar60,auVar34);
                local_878 = maxps(local_878,auVar41);
                auVar68 = minps(auVar68,auVar57);
                auVar67 = maxps(auVar67,auVar57);
                pauVar12 = pauVar11;
                if (pauVar11 < pauVar16) {
                  uVar39 = auVar60._0_4_;
                  uVar48 = auVar60._4_4_;
                  uVar49 = auVar60._8_4_;
                  uVar50 = auVar60._12_4_;
                  goto LAB_0010efa0;
                }
              }
              *pauVar16 = auVar34;
              auVar71 = maxps(auVar71,auVar41);
              auVar69 = maxps(auVar69,auVar57);
              local_878 = maxps(local_878,auVar36);
              auVar41 = minps(auVar60,auVar45);
              auVar33 = minps(auVar33,auVar34);
              uVar15 = *(undefined8 *)(pauVar12[1] + 8);
              auVar70 = minps(auVar70,auVar57);
              auVar68 = minps(auVar68,auVar52);
              *(undefined8 *)pauVar16[1] = *(undefined8 *)pauVar12[1];
              *(undefined8 *)(pauVar16[1] + 8) = uVar15;
              auVar67 = maxps(auVar67,auVar52);
              uVar39 = auVar41._0_4_;
              uVar48 = auVar41._4_4_;
              uVar49 = auVar41._8_4_;
              uVar50 = auVar41._12_4_;
              *pauVar12 = auVar45;
              pauVar12[1] = auVar36;
            }
            else {
              auVar33 = minps(auVar33,auVar45);
              auVar71 = maxps(auVar71,auVar36);
              auVar70 = minps(auVar70,auVar52);
              auVar69 = maxps(auVar69,auVar52);
            }
          }
LAB_0010efa0:
          uVar20 = (long)pauVar16 - lVar29 >> 5;
        }
      }
      else if (local_6c8[1] == -1) {
        lVar29 = *plVar24;
        pauVar16 = (undefined1 (*) [16])(lVar29 + uVar8 * 0x20);
        pauVar11 = (undefined1 (*) [16])(lVar29 + uVar27 * 0x20);
        if (pauVar16 != pauVar11) {
          lVar29 = uVar8 * 0x20 + uVar27 * -0x20;
          uVar8 = lVar29 >> 5;
          if (uVar8 == 0) {
            std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar11,pauVar16,0xfffffffffffffffe);
          }
          else {
            lVar30 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            std::__introsort_loop<embree::PrimRef*,long,__gnu_cxx::__ops::_Iter_less_iter>
                      (pauVar11,pauVar16,(long)(int)lVar30 * 2);
            if (0x200 < lVar29) {
              pauVar12 = pauVar11 + 0x20;
              std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                        (pauVar11,pauVar12);
              for (; pauVar16 != pauVar12; pauVar12 = pauVar12 + 2) {
                uVar1 = *(undefined4 *)(pauVar12[1] + 0xc);
                uVar2 = *(undefined4 *)(*pauVar12 + 0xc);
                uVar15 = *(undefined8 *)pauVar12[1];
                uVar4 = *(undefined8 *)(pauVar12[1] + 8);
                auVar36 = *pauVar12;
                uVar8 = CONCAT44(*(undefined4 *)(pauVar12[-1] + 0xc),
                                 *(undefined4 *)(pauVar12[-2] + 0xc));
                pauVar11 = pauVar12;
                while (CONCAT44(uVar1,uVar2) < uVar8) {
                  uVar5 = *(undefined8 *)(pauVar11[-2] + 8);
                  *(undefined8 *)*pauVar11 = *(undefined8 *)pauVar11[-2];
                  *(undefined8 *)(*pauVar11 + 8) = uVar5;
                  pauVar11[1] = pauVar11[-1];
                  uVar8 = CONCAT44(*(undefined4 *)(pauVar11[-3] + 0xc),
                                   *(undefined4 *)(pauVar11[-4] + 0xc));
                  pauVar11 = pauVar11 + -2;
                }
                *pauVar11 = auVar36;
                *(undefined8 *)pauVar11[1] = uVar15;
                *(undefined8 *)(pauVar11[1] + 8) = uVar4;
              }
              lVar29 = *plVar24;
              uVar27 = local_5f8[uVar23 * 0xc];
              uVar8 = local_5f8[uVar23 * 0xc + 1];
              goto LAB_0010fff5;
            }
          }
          std::__insertion_sort<embree::PrimRef*,__gnu_cxx::__ops::_Iter_less_iter>
                    (pauVar11,pauVar16);
          uVar27 = local_5f8[uVar23 * 0xc];
          lVar29 = *plVar24;
          uVar8 = local_5f8[uVar23 * 0xc + 1];
        }
LAB_0010fff5:
        uVar20 = uVar27 + uVar8 >> 1;
        if (uVar27 < uVar20) {
          auVar69._4_4_ = fVar37;
          auVar69._0_4_ = fVar65;
          auVar69._8_4_ = fVar38;
          auVar69._12_4_ = fVar66;
          auVar71._4_4_ = fVar37;
          auVar71._0_4_ = fVar65;
          auVar71._8_4_ = fVar38;
          auVar71._12_4_ = fVar66;
          auVar33._4_4_ = uVar61;
          auVar33._0_4_ = uVar61;
          auVar33._8_4_ = uVar61;
          auVar33._12_4_ = uVar61;
          pauVar16 = (undefined1 (*) [16])(uVar27 * 0x20 + lVar29);
          auVar70 = auVar33;
          do {
            auVar46._0_4_ = *(float *)pauVar16[1] + *(float *)*pauVar16;
            auVar46._4_4_ = *(float *)(pauVar16[1] + 4) + *(float *)(*pauVar16 + 4);
            auVar46._8_4_ = *(float *)(pauVar16[1] + 8) + *(float *)(*pauVar16 + 8);
            auVar46._12_4_ = *(float *)(pauVar16[1] + 0xc) + *(float *)(*pauVar16 + 0xc);
            pauVar11 = pauVar16 + 2;
            auVar33 = minps(auVar33,*pauVar16);
            auVar71 = maxps(auVar71,pauVar16[1]);
            auVar70 = minps(auVar70,auVar46);
            auVar69 = maxps(auVar69,auVar46);
            pauVar16 = pauVar11;
          } while ((undefined1 (*) [16])(uVar20 * 0x20 + lVar29) != pauVar11);
        }
        else {
          auVar33._4_4_ = uVar61;
          auVar33._0_4_ = uVar61;
          auVar33._8_4_ = uVar61;
          auVar33._12_4_ = uVar61;
          auVar69._4_4_ = fVar37;
          auVar69._0_4_ = fVar65;
          auVar69._8_4_ = fVar38;
          auVar69._12_4_ = fVar66;
          auVar71._4_4_ = fVar37;
          auVar71._0_4_ = fVar65;
          auVar71._8_4_ = fVar38;
          auVar71._12_4_ = fVar66;
          auVar70 = auVar33;
        }
        if (uVar8 <= uVar20) goto LAB_001100a1;
        auVar67._4_4_ = fVar37;
        auVar67._0_4_ = fVar65;
        auVar67._8_4_ = fVar38;
        auVar67._12_4_ = fVar66;
        local_878._4_4_ = fVar37;
        local_878._0_4_ = fVar65;
        local_878._8_4_ = fVar38;
        local_878._12_4_ = fVar66;
        auVar55._4_4_ = uVar61;
        auVar55._0_4_ = uVar61;
        auVar55._8_4_ = uVar61;
        auVar55._12_4_ = uVar61;
        pauVar16 = (undefined1 (*) [16])(uVar20 * 0x20 + lVar29);
        auVar68 = auVar55;
        do {
          auVar47._0_4_ = *(float *)pauVar16[1] + *(float *)*pauVar16;
          auVar47._4_4_ = *(float *)(pauVar16[1] + 4) + *(float *)(*pauVar16 + 4);
          auVar47._8_4_ = *(float *)(pauVar16[1] + 8) + *(float *)(*pauVar16 + 8);
          auVar47._12_4_ = *(float *)(pauVar16[1] + 0xc) + *(float *)(*pauVar16 + 0xc);
          pauVar11 = pauVar16 + 2;
          auVar55 = minps(auVar55,*pauVar16);
          local_878 = maxps(local_878,pauVar16[1]);
          auVar68 = minps(auVar68,auVar47);
          auVar67 = maxps(auVar67,auVar47);
          pauVar16 = pauVar11;
        } while ((undefined1 (*) [16])(lVar29 + uVar8 * 0x20) != pauVar11);
LAB_0010f8e1:
        uVar39 = auVar55._0_4_;
        uVar48 = auVar55._4_4_;
        uVar49 = auVar55._8_4_;
        uVar50 = auVar55._12_4_;
      }
      else {
        uVar20 = (ulong)(uint)(1 << ((byte)local_6c8[1] & 0x1f));
        local_718 = (&mm_lookupmask_ps)[uVar20 * 2];
        uStack_710 = *(undefined8 *)(embree::MutexSys::MutexSys + uVar20 * 0x10);
        local_728 = local_6c8[2];
        iStack_724 = local_6c8[2];
        iStack_720 = local_6c8[2];
        iStack_71c = local_6c8[2];
        local_7c8 = local_810;
        local_7c0 = &local_728;
        local_7b8 = &local_718;
        local_7a8._0_4_ = uVar61;
        local_7a8._4_4_ = uVar61;
        uStack_7a0 = uVar61;
        uStack_79c = uVar61;
        _local_798 = auVar67;
        local_788 = uVar61;
        uStack_784 = uVar61;
        uStack_780 = uVar61;
        uStack_77c = uVar61;
        _local_778 = auVar67;
        local_768._0_4_ = uVar61;
        local_768._4_4_ = uVar61;
        uStack_760._0_4_ = uVar61;
        uStack_760._4_4_ = uVar61;
        _local_758 = auVar67;
        local_748 = uVar61;
        uStack_744 = uVar61;
        uStack_740 = uVar61;
        uStack_73c = uVar61;
        _local_738 = auVar67;
        uVar20 = parallel_partitioning<embree::PrimRef,embree::CentGeom<embree::BBox<embree::Vec3fa>>,embree::EmptyTy,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::PrimRef_const&)_1_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::PrimRef_const&)_3_,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>::split_template<true>(embree::sse2::BinSplit<32ul>const&,embree::sse2::PrimInfoRange_const&,embree::sse2::PrimInfoRange&,embree::sse2::PrimInfoRange&)::_lambda(embree::CentGeom<embree::BBox<embree::Vec3fa>>&,embree::CentGeom<embree::BBox<embree::Vec3fa>>const&)_4_>
                           ((PrimRef *)*plVar24,uVar27,uVar8,&local_7c9,(CentGeom *)&local_7a8,
                            (CentGeom *)&local_768,(_lambda_embree__PrimRef_const___1_ *)&local_7c8,
                            &local_7ca,&local_7cb,0x80);
        auVar33._4_4_ = local_7a8._4_4_;
        auVar33._0_4_ = (undefined4)local_7a8;
        auVar33._8_4_ = uStack_7a0;
        auVar33._12_4_ = uStack_79c;
        auVar70._4_4_ = uStack_784;
        auVar70._0_4_ = local_788;
        auVar70._8_4_ = uStack_780;
        auVar70._12_4_ = uStack_77c;
        auVar68._4_4_ = uStack_744;
        auVar68._0_4_ = local_748;
        auVar68._8_4_ = uStack_740;
        auVar68._12_4_ = uStack_73c;
        uVar39 = (undefined4)local_768;
        uVar48 = local_768._4_4_;
        uVar49 = (undefined4)uStack_760;
        uVar50 = uStack_760._4_4_;
        auVar67 = _local_738;
        auVar69 = _local_778;
        auVar71 = _local_798;
        local_878 = _local_758;
      }
      uVar26 = uVar26 + 1;
      local_638[uVar23 * 0x60 + -8] = 0;
      (&local_648)[uVar23 * 0xc] = lVar19 + 1;
      local_5f8[uVar23 * 0xc] = uVar27;
      local_5f8[uVar23 * 0xc + 1] = uVar20;
      *(undefined1 (*) [16])(local_638 + lVar31) = auVar33;
      *(undefined1 (*) [16])(local_628 + lVar31) = auVar71;
      *(undefined1 (*) [16])(local_618 + lVar31) = auVar70;
      *(undefined1 (*) [16])(local_608 + lVar31) = auVar69;
      *plVar14 = lVar19 + 1;
      *(undefined1 *)(plVar14 + 1) = 0;
      *(undefined4 *)(plVar14 + 2) = uVar39;
      *(undefined4 *)((long)plVar14 + 0x14) = uVar48;
      *(undefined4 *)(plVar14 + 3) = uVar49;
      *(undefined4 *)((long)plVar14 + 0x1c) = uVar50;
      *(undefined1 (*) [16])(plVar14 + 4) = local_878;
      *(undefined1 (*) [16])(plVar14 + 6) = auVar68;
      *(undefined1 (*) [16])(plVar14 + 8) = auVar67;
      plVar14[10] = uVar20;
      plVar14[0xb] = uVar8;
      plVar14 = plVar14 + 0xc;
    } while (uVar26 < *param_1);
    lVar19 = uVar26 * 2;
    uVar8 = param_1[7];
    lVar31 = uVar26 * 0x60;
    if (uVar8 < (ulong)(param_2[0xb] - param_2[10])) {
LAB_001101f4:
      puVar22 = &uStack_640;
      puVar17 = puVar22 + (lVar19 + uVar26) * 4;
      do {
        *(bool *)puVar22 = puVar22[10] - puVar22[9] <= uVar8;
        puVar22 = puVar22 + 0xc;
      } while (puVar17 != puVar22);
    }
    plVar14 = (long *)((long)local_828 + lVar31);
    if (lVar31 != 0) goto LAB_0010f34b;
  }
LAB_0010f3d7:
  local_7a8._0_4_ = 0x80;
  local_7a8._4_4_ = 0;
  lVar19 = *(long *)local_7f8;
  if (in_stack_00000008 != *(FastAllocator **)(lVar19 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(lVar19 + 8) != 0) {
      LOCK();
      plVar14 = (long *)(*(long *)(lVar19 + 8) + 0x118);
      *plVar14 = *plVar14 + *(long *)(lVar19 + 0xa8) + *(long *)(lVar19 + 0x68);
      UNLOCK();
      LOCK();
      plVar14 = (long *)(*(long *)(lVar19 + 8) + 0x120);
      *plVar14 = *plVar14 +
                 (((*(long *)(lVar19 + 0x98) + *(long *)(lVar19 + 0x58)) - *(long *)(lVar19 + 0x50))
                 - *(long *)(lVar19 + 0x90));
      UNLOCK();
      LOCK();
      plVar14 = (long *)(*(long *)(lVar19 + 8) + 0x128);
      *plVar14 = *plVar14 + *(long *)(lVar19 + 0xb0) + *(long *)(lVar19 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(lVar19 + 0x48) = 0;
    *(undefined8 *)(lVar19 + 0x58) = 0;
    *(undefined8 *)(lVar19 + 0x50) = 0;
    *(undefined8 *)(lVar19 + 0x68) = 0;
    *(undefined8 *)(lVar19 + 0x70) = 0;
    *(undefined8 *)(lVar19 + 0x60) = 0;
    if (in_stack_00000008 == (FastAllocator *)0x0) {
      *(undefined8 *)(lVar19 + 0x88) = 0;
      uVar15 = 0;
      *(undefined8 *)(lVar19 + 0x98) = 0;
      *(undefined8 *)(lVar19 + 0x90) = 0;
      *(undefined8 *)(lVar19 + 0xa8) = 0;
      *(undefined8 *)(lVar19 + 0xb0) = 0;
    }
    else {
      uVar15 = *(undefined8 *)(in_stack_00000008 + 0x10);
      *(undefined8 *)(lVar19 + 0x88) = 0;
      *(undefined8 *)(lVar19 + 0x98) = 0;
      *(undefined8 *)(lVar19 + 0x60) = uVar15;
      *(undefined8 *)(lVar19 + 0x90) = 0;
      *(undefined8 *)(lVar19 + 0xa8) = 0;
      *(undefined8 *)(lVar19 + 0xb0) = 0;
      *(undefined8 *)(lVar19 + 0xa0) = 0;
      uVar15 = *(undefined8 *)(in_stack_00000008 + 0x10);
    }
    *(undefined8 *)(lVar19 + 0xa0) = uVar15;
    LOCK();
    *(FastAllocator **)(lVar19 + 8) = in_stack_00000008;
    UNLOCK();
    local_768._0_4_ = (undefined4)lVar19;
    local_768._4_4_ = (undefined4)((ulong)lVar19 >> 0x20);
    embree::MutexSys::lock();
    plVar14 = *(long **)(in_stack_00000008 + 0x138);
    if (plVar14 == *(long **)(in_stack_00000008 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(in_stack_00000008 + 0x130),plVar14,&local_768);
    }
    else {
      *plVar14 = lVar19;
      *(long *)(in_stack_00000008 + 0x138) = *(long *)(in_stack_00000008 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  lVar19 = *(long *)(local_7f8 + 0x10);
  *(long *)(local_7f8 + 0x28) = *(long *)(local_7f8 + 0x28) + 0x80;
  uVar27 = (ulong)(-(int)lVar19 & 0xf);
  uVar8 = lVar19 + 0x80 + uVar27;
  *(ulong *)(local_7f8 + 0x10) = uVar8;
  if (*(ulong *)(local_7f8 + 0x18) < uVar8) {
    *(long *)(local_7f8 + 0x10) = lVar19;
    uVar8 = *(ulong *)(local_7f8 + 0x20);
    if (uVar8 < 0x200) {
      puVar9 = (undefined8 *)FastAllocator::malloc(in_stack_00000008,&local_7a8,0x40,false);
    }
    else {
      local_768._0_4_ = (undefined4)uVar8;
      local_768._4_4_ = (undefined4)(uVar8 >> 0x20);
      puVar9 = (undefined8 *)FastAllocator::malloc(in_stack_00000008,&local_768,0x40,true);
      *(undefined8 **)(local_7f8 + 8) = puVar9;
      lVar19 = *(long *)(local_7f8 + 0x10);
      *(long *)(local_7f8 + 0x10) = 0x80;
      *(long *)(local_7f8 + 0x30) =
           (*(long *)(local_7f8 + 0x18) + *(long *)(local_7f8 + 0x30)) - lVar19;
      *(ulong *)(local_7f8 + 0x18) = CONCAT44(local_768._4_4_,(undefined4)local_768);
      if (CONCAT44(local_768._4_4_,(undefined4)local_768) < 0x80) {
        *(long *)(local_7f8 + 0x10) = 0;
        local_768._0_4_ = (undefined4)*(long *)(local_7f8 + 0x20);
        local_768._4_4_ = (undefined4)((ulong)*(long *)(local_7f8 + 0x20) >> 0x20);
        puVar9 = (undefined8 *)FastAllocator::malloc(in_stack_00000008,&local_768,0x40,false);
        *(undefined8 **)(local_7f8 + 8) = puVar9;
        lVar19 = *(long *)(local_7f8 + 0x10);
        *(long *)(local_7f8 + 0x10) = 0x80;
        *(long *)(local_7f8 + 0x30) =
             (*(long *)(local_7f8 + 0x18) + *(long *)(local_7f8 + 0x30)) - lVar19;
        *(ulong *)(local_7f8 + 0x18) = CONCAT44(local_768._4_4_,(undefined4)local_768);
        if (CONCAT44(local_768._4_4_,(undefined4)local_768) < 0x80) {
          puVar9 = (undefined8 *)0x0;
          *(long *)(local_7f8 + 0x10) = 0;
        }
      }
    }
  }
  else {
    *(ulong *)(local_7f8 + 0x30) = *(long *)(local_7f8 + 0x30) + uVar27;
    puVar9 = (undefined8 *)(*(long *)(local_7f8 + 8) + -0x80 + uVar8);
  }
  *puVar9 = 8;
  puVar9[1] = 8;
  puVar9[2] = 8;
  puVar9[3] = 8;
  *(undefined4 *)(puVar9 + 0xc) = uVar61;
  *(undefined4 *)((long)puVar9 + 100) = uVar62;
  *(undefined4 *)(puVar9 + 0xd) = uVar63;
  *(undefined4 *)((long)puVar9 + 0x6c) = uVar64;
  *(undefined4 *)(puVar9 + 8) = uVar61;
  *(undefined4 *)((long)puVar9 + 0x44) = uVar62;
  *(undefined4 *)(puVar9 + 9) = uVar63;
  *(undefined4 *)((long)puVar9 + 0x4c) = uVar64;
  *(undefined4 *)(puVar9 + 4) = uVar61;
  *(undefined4 *)((long)puVar9 + 0x24) = uVar62;
  *(undefined4 *)(puVar9 + 5) = uVar63;
  *(undefined4 *)((long)puVar9 + 0x2c) = uVar64;
  *(float *)(puVar9 + 0xe) = fVar65;
  *(float *)((long)puVar9 + 0x74) = fVar37;
  *(float *)(puVar9 + 0xf) = fVar38;
  *(float *)((long)puVar9 + 0x7c) = fVar66;
  *(float *)(puVar9 + 10) = fVar65;
  *(float *)((long)puVar9 + 0x54) = fVar37;
  *(float *)(puVar9 + 0xb) = fVar38;
  *(float *)((long)puVar9 + 0x5c) = fVar66;
  *(float *)(puVar9 + 6) = fVar65;
  *(float *)((long)puVar9 + 0x34) = fVar37;
  *(float *)(puVar9 + 7) = fVar38;
  *(float *)((long)puVar9 + 0x3c) = fVar66;
  plVar14 = local_828;
  puVar25 = puVar9 + 4;
  do {
    lVar19 = plVar14[3];
    puVar21 = (undefined8 *)((long)puVar25 + 4);
    lVar31 = plVar14[2];
    lVar29 = plVar14[5];
    uVar61 = *(undefined4 *)((long)plVar14 + 0x24);
    lVar30 = plVar14[4];
    *(undefined4 *)(puVar25 + 4) = *(undefined4 *)((long)plVar14 + 0x14);
    *(int *)puVar25 = (int)lVar31;
    *(int *)(puVar25 + 8) = (int)lVar19;
    *(int *)(puVar25 + 2) = (int)lVar30;
    *(undefined4 *)(puVar25 + 6) = uVar61;
    *(int *)(puVar25 + 10) = (int)lVar29;
    plVar14 = plVar14 + 0xc;
    puVar25 = puVar21;
  } while ((undefined8 *)((long)puVar9 + uVar26 * 4 + 0x20) != puVar21);
  uVar8 = 0;
  if (param_1[6] < (ulong)(param_2[0xb] - param_2[10])) {
    local_758 = (undefined1  [8])param_1;
    local_7c8 = (PrimInfoRange *)0x0;
    local_768 = local_810;
    uStack_760 = local_828;
    TaskScheduler::
    spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (0,uVar26,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_768,
               (TaskGroupContext *)&local_7c8);
    embree::TaskScheduler::wait();
    if (local_7c8 != (PrimInfoRange *)0x0) {
      local_7a8._0_4_ = SUB84(local_7c8,0);
      local_7a8._4_4_ = (undefined4)((ulong)local_7c8 >> 0x20);
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_7a8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar14 = (long *)param_1[0xc];
    uVar8 = 0;
    do {
      puVar9[uVar8] = *(undefined8 *)(local_810 + uVar8 * 8);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar26);
  }
  else {
    do {
      uVar15 = recurse(param_1,local_828,0);
      *(undefined8 *)(local_6c8 + uVar8 * 2) = uVar15;
      uVar8 = uVar8 + 1;
      local_828 = local_828 + 0xc;
    } while (uVar8 != uVar26);
    uVar8 = 0;
    plVar14 = (long *)param_1[0xc];
    do {
      puVar9[uVar8] = *(undefined8 *)(local_810 + uVar8 * 8);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar26);
  }
  if ((char)param_2[1] != '\0') {
    lVar19 = param_2[10];
    lVar31 = param_2[0xb];
    lVar29 = *plVar14;
    lVar30 = lVar19 * 0x20 + plVar14[1];
    embree::MutexSys::lock();
    puVar25 = (undefined8 *)(lVar30 + 0x3fU & 0xffffffffffffffc0);
    lVar19 = ((lVar31 - lVar19) * 0x20 + lVar30) - (long)puVar25;
    if (0xfff < lVar19) {
      lVar19 = lVar19 + -0x40;
      uVar15 = *(undefined8 *)(lVar29 + 0x100);
      puVar25[1] = lVar19;
      puVar25[2] = lVar19;
      *puVar25 = 0;
      puVar25[3] = uVar15;
      puVar25[4] = (long)puVar25 - lVar30;
      *(undefined4 *)(puVar25 + 5) = 2;
      *(undefined1 *)((long)puVar25 + 0x2c) = 0;
      LOCK();
      *(undefined8 **)(lVar29 + 0x100) = puVar25;
      UNLOCK();
    }
    embree::MutexSys::unlock();
  }
LAB_0010eaed:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar9;
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
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 8);
  uVar3 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < uVar4 - uVar3) {
    uVar4 = uVar4 + uVar3 >> 1;
    spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar3,uVar4,*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    spawn<unsigned_long,embree::sse2::GeneralBVHBuilder::BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::_lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)_1_,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>::recurse(embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>&,embree::FastAllocator::CachedAllocator,bool)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar4,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               (_lambda_embree__range<unsigned_long>_const___1_ *)(this + 0x20),
               *(TaskGroupContext **)(this + 0x38));
    embree::TaskScheduler::wait();
    return;
  }
  for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    lVar1 = *(long *)(this + 0x20);
    uVar2 = sse2::GeneralBVHBuilder::
            BuilderT<embree::sse2::GeneralBVHBuilder::BuildRecordT<embree::sse2::PrimInfoRange,embree::sse2::BinSplit<32ul>>,embree::sse2::HeuristicArrayBinningSAH<embree::PrimRef,32ul>,embree::sse2::PrimInfoRange,embree::PrimRef,embree::NodeRefPtr<4>,embree::FastAllocator::CachedAllocator,embree::FastAllocator::Create,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Create2,embree::AABBNode_t<embree::NodeRefPtr<4>,4>::Set3,embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build(embree::FastAllocator*,embree::BuildProgressMonitor&,embree::PrimRef*,embree::PrimInfoT<embree::BBox<embree::Vec3fa>>const&,embree::sse2::GeneralBVHBuilder::Settings)::{lambda(embree::PrimRef_const*,embree::range<unsigned_long>const&,embree::FastAllocator::CachedAllocator_const&)#1},embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::sse2::GeneralBVHBuilder::DefaultCanCreateLeafSplitFunc<embree::PrimRef,embree::sse2::PrimInfoRange>,embree::BuildProgressMonitor>
            ::recurse(*(undefined8 *)(this + 0x30),uVar3 * 0x60 + *(long *)(this + 0x28),1);
    *(undefined8 *)(lVar1 + uVar3 * 8) = uVar2;
  }
  return;
}


