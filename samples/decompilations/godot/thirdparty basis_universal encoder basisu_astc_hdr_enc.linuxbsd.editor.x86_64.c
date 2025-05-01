
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::calc_mean(unsigned int, basisu::vec<4u, float> const*) */

void __thiscall basisu::calc_mean(basisu *this,uint param_1,vec *param_2)

{
  undefined8 uVar1;
  vec *pvVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  
  if (param_1 == 0) {
    auVar5 = ZEXT816(0);
    fVar6 = 0.0;
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)param_1;
    fVar6 = 0.0;
    pvVar2 = param_2 + uVar3 * 0x10;
    auVar4 = ZEXT816(0);
    do {
      uVar1 = *(undefined8 *)param_2;
      fVar6 = fVar6 + *(float *)(param_2 + 8);
      param_2 = param_2 + 0x10;
      auVar5._0_4_ = auVar4._0_4_ + (float)uVar1;
      auVar5._4_4_ = auVar4._4_4_ + (float)((ulong)uVar1 >> 0x20);
      auVar5._8_4_ = auVar4._8_4_ + 0.0;
      auVar5._12_4_ = auVar4._12_4_ + 0.0;
      auVar4 = auVar5;
    } while (param_2 != pvVar2);
  }
  fVar7 = (float)uVar3;
  auVar4._4_4_ = fVar7;
  auVar4._0_4_ = fVar7;
  auVar4._8_8_ = __LC23;
  auVar5 = divps(auVar5,auVar4);
  *(float *)(this + 8) = fVar6 / fVar7;
  *(long *)this = auVar5._0_8_;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<unsigned int*, long, unsigned int,
   __gnu_cxx::__ops::_Iter_less_iter>(unsigned int*, long, long, unsigned int,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,ulong param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)(param_3 - 1) / 2;
  lVar6 = param_2;
  if (param_2 < lVar7) {
    do {
      lVar2 = (lVar6 + 1) * 2;
      lVar4 = (lVar6 + 1) * 8;
      puVar3 = (uint *)(param_1 + lVar4);
      uVar5 = *puVar3;
      if (uVar5 < *(uint *)(param_1 + -4 + lVar4)) {
        lVar2 = lVar2 + -1;
        puVar3 = (uint *)(param_1 + lVar2 * 4);
        uVar5 = *puVar3;
      }
      *(uint *)(param_1 + lVar6 * 4) = uVar5;
      lVar6 = lVar2;
    } while (lVar2 < lVar7);
    if ((param_3 & 1) == 0) goto LAB_00100140;
  }
  else {
    puVar3 = (uint *)(param_1 + param_2 * 4);
    lVar2 = param_2;
    if ((param_3 & 1) != 0) goto LAB_00100121;
LAB_00100140:
    if (lVar2 == (long)(param_3 - 2) / 2) {
      lVar6 = lVar2 * 2;
      lVar2 = lVar6 + 1;
      *puVar3 = *(uint *)(param_1 + -4 + (lVar6 + 2) * 4);
      puVar3 = (uint *)(param_1 + lVar2 * 4);
    }
  }
  lVar6 = (lVar2 + -1) - (lVar2 + -1 >> 0x3f);
  if (param_2 < lVar2) {
    while( true ) {
      lVar7 = lVar6 >> 1;
      puVar1 = (uint *)(param_1 + lVar7 * 4);
      puVar3 = (uint *)(param_1 + lVar2 * 4);
      uVar5 = *puVar1;
      if (param_4 <= uVar5) break;
      *puVar3 = uVar5;
      lVar6 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
      lVar2 = lVar7;
      if (lVar7 <= param_2) {
        *puVar1 = param_4;
        return;
      }
    }
  }
LAB_00100121:
  *puVar3 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<unsigned int*, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int*,
   unsigned int*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>
               (uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  size_t __n;
  uint *puVar3;
  uint *puVar4;
  
  if (param_1 == param_2) {
    return;
  }
  puVar3 = param_1 + 1;
  do {
    if (param_2 == puVar3) {
      return;
    }
    while( true ) {
      uVar1 = *puVar3;
      puVar4 = puVar3 + 1;
      if (uVar1 < *param_1) break;
      uVar2 = puVar3[-1];
      while (uVar1 < uVar2) {
        *puVar3 = uVar2;
        uVar2 = puVar3[-2];
        puVar3 = puVar3 + -1;
      }
      *puVar3 = uVar1;
      puVar3 = puVar4;
      if (param_2 == puVar4) {
        return;
      }
    }
    __n = (long)puVar3 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *puVar3 = *param_1;
      }
    }
    else {
      memmove((void *)((long)puVar3 + (4 - __n)),param_1,__n);
    }
    *param_1 = uVar1;
    puVar3 = puVar4;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<unsigned int*, long, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int*,
   unsigned int*, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (ulong *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0x40 < lVar5) {
    puVar2 = (uint *)((long)param_1 + 4);
    puVar8 = param_2;
    if (param_3 != 0) {
      do {
        uVar7 = *param_1;
        uVar3 = puVar8[-1];
        param_3 = param_3 + -1;
        puVar1 = (uint *)((long)param_1 + (lVar5 >> 3) * 4);
        uVar4 = *puVar1;
        uVar10 = (uint)uVar7;
        uVar11 = (uint)(uVar7 >> 0x20);
        uVar7 = uVar7 & 0xffffffff;
        puVar6 = puVar8;
        param_2 = puVar2;
        if (uVar11 < uVar4) {
          if (uVar4 < uVar3) {
LAB_00100357:
            *(uint *)param_1 = uVar4;
            *puVar1 = uVar10;
            uVar7 = (ulong)*(uint *)((long)param_1 + 4);
            uVar11 = (uint)*param_1;
            uVar10 = puVar8[-1];
          }
          else {
            if (uVar3 <= uVar11) goto LAB_001002bb;
LAB_00100313:
            *(uint *)param_1 = uVar3;
            puVar8[-1] = uVar10;
            uVar11 = (uint)*param_1;
            uVar7 = (ulong)*(uint *)((long)param_1 + 4);
          }
        }
        else {
          if (uVar3 <= uVar11) {
            if (uVar4 < uVar3) goto LAB_00100313;
            goto LAB_00100357;
          }
LAB_001002bb:
          *param_1 = CONCAT44(uVar10,uVar11);
          uVar10 = puVar8[-1];
        }
        while( true ) {
          while ((uint)uVar7 < uVar11) {
            uVar7 = (ulong)param_2[1];
            param_2 = param_2 + 1;
          }
          while (puVar6 = puVar6 + -1, uVar11 < uVar10) {
            uVar10 = puVar6[-1];
          }
          if (puVar6 <= param_2) break;
          *param_2 = uVar10;
          uVar10 = puVar6[-1];
          *puVar6 = (uint)uVar7;
          uVar7 = (ulong)param_2[1];
          uVar11 = (uint)*param_1;
          param_2 = param_2 + 1;
        }
        __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (param_2,puVar8,param_3);
        lVar5 = (long)param_2 - (long)param_1;
        if (lVar5 < 0x41) {
          return;
        }
        puVar8 = param_2;
      } while (param_3 != 0);
    }
    for (lVar9 = (lVar5 >> 2) + -2 >> 1;
        __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_less_iter>
                  (param_1,lVar9,lVar5 >> 2,*(undefined4 *)((long)param_1 + lVar9 * 4)), lVar9 != 0;
        lVar9 = lVar9 + -1) {
    }
    do {
      param_2 = param_2 + -1;
      uVar3 = *param_2;
      *param_2 = (uint)*param_1;
      __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,0,(long)param_2 - (long)param_1 >> 2,uVar3);
    } while (4 < (long)param_2 - (long)param_1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::astc_hdr_codec_options::astc_hdr_codec_options() */

void __thiscall basisu::astc_hdr_codec_options::astc_hdr_codec_options(astc_hdr_codec_options *this)

{
  undefined8 uVar1;
  
  uVar1 = __LC3;
  *(undefined4 *)this = 0x3f59999a;
  this[0x60] = (astc_hdr_codec_options)0x0;
  *(undefined8 *)(this + 0x48) = uVar1;
  *(undefined2 *)(this + 4) = 0x101;
  uVar1 = _LC5;
  this[0x10] = (astc_hdr_codec_options)0x0;
  *(undefined8 *)(this + 0x14) = uVar1;
  uVar1 = _LC6;
  this[6] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = _LC7;
  *(undefined4 *)(this + 0x34) = 5;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = _LC8;
  this[0x38] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 0x3c) = uVar1;
  uVar1 = _LC9;
  *(undefined4 *)(this + 0x44) = 2;
  this[0x50] = (astc_hdr_codec_options)0x1;
  *(undefined4 *)(this + 0x54) = 1;
  this[0x1c] = (astc_hdr_codec_options)0x0;
  this[0x28] = (astc_hdr_codec_options)0x0;
  this[0x58] = (astc_hdr_codec_options)0x1;
  *(undefined4 *)(this + 0x5c) = 1;
  *(undefined8 *)(this + 0x2c) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::astc_hdr_codec_options::init() */

void __thiscall basisu::astc_hdr_codec_options::init(astc_hdr_codec_options *this)

{
  undefined8 uVar1;
  
  uVar1 = __LC3;
  *(undefined4 *)this = 0x3f59999a;
  this[0x60] = (astc_hdr_codec_options)0x0;
  *(undefined8 *)(this + 0x48) = uVar1;
  *(undefined2 *)(this + 4) = 0x101;
  uVar1 = _LC5;
  this[0x10] = (astc_hdr_codec_options)0x0;
  *(undefined8 *)(this + 0x14) = uVar1;
  uVar1 = _LC6;
  this[6] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = _LC7;
  *(undefined4 *)(this + 0x34) = 5;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = _LC8;
  this[0x38] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 0x3c) = uVar1;
  uVar1 = _LC9;
  *(undefined4 *)(this + 0x44) = 2;
  this[0x50] = (astc_hdr_codec_options)0x1;
  *(undefined4 *)(this + 0x54) = 1;
  this[0x1c] = (astc_hdr_codec_options)0x0;
  this[0x28] = (astc_hdr_codec_options)0x0;
  this[0x58] = (astc_hdr_codec_options)0x1;
  *(undefined4 *)(this + 0x5c) = 1;
  *(undefined8 *)(this + 0x2c) = uVar1;
  return;
}



/* basisu::astc_hdr_codec_options::set_quality_best() */

void __thiscall basisu::astc_hdr_codec_options::set_quality_best(astc_hdr_codec_options *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _LC5;
  this[0x10] = (astc_hdr_codec_options)0x0;
  *(undefined2 *)(this + 4) = 0x101;
  uVar2 = _LC10;
  this[6] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar2 = _LC11;
  *(undefined8 *)(this + 0x14) = uVar1;
  this[0x1c] = (astc_hdr_codec_options)0x1;
  this[0x28] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this + 0x34) = 5;
  this[0x38] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 0x3c) = uVar2;
  *(undefined4 *)(this + 0x44) = 2;
  this[0x50] = (astc_hdr_codec_options)0x1;
  this[0x58] = (astc_hdr_codec_options)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}



/* basisu::astc_hdr_codec_options::set_quality_normal() */

void __thiscall basisu::astc_hdr_codec_options::set_quality_normal(astc_hdr_codec_options *this)

{
  undefined8 uVar1;
  
  this[6] = (astc_hdr_codec_options)0x1;
  *(undefined2 *)(this + 4) = 0x101;
  uVar1 = _LC12;
  this[0x1c] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = _LC6;
  this[0x28] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = _LC13;
  *(undefined4 *)(this + 0x34) = 5;
  *(undefined8 *)(this + 0x2c) = uVar1;
  uVar1 = _LC14;
  this[0x38] = (astc_hdr_codec_options)0x1;
  *(undefined8 *)(this + 0x3c) = uVar1;
  *(undefined4 *)(this + 0x44) = 2;
  this[0x50] = (astc_hdr_codec_options)0x1;
  return;
}



/* basisu::astc_hdr_codec_options::set_quality_fastest() */

void __thiscall basisu::astc_hdr_codec_options::set_quality_fastest(astc_hdr_codec_options *this)

{
  undefined8 uVar1;
  
  this[6] = (astc_hdr_codec_options)0x0;
  *(undefined2 *)(this + 4) = 0x101;
  uVar1 = _LC6;
  this[0x1c] = (astc_hdr_codec_options)0x0;
  *(undefined8 *)(this + 8) = uVar1;
  this[0x28] = (astc_hdr_codec_options)0x0;
  this[0x38] = (astc_hdr_codec_options)0x0;
  this[0x50] = (astc_hdr_codec_options)0x0;
  return;
}



/* basisu::astc_hdr_codec_options::set_quality_level(int) */

void __thiscall
basisu::astc_hdr_codec_options::set_quality_level(astc_hdr_codec_options *this,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x54) = 0;
  }
  else {
    iVar5 = 4;
    if (param_1 < 5) {
      iVar5 = param_1;
    }
    *(int *)(this + 0x54) = iVar5;
    uVar4 = _LC12;
    uVar3 = _LC10;
    uVar2 = _LC6;
    uVar1 = _LC5;
    if (param_1 == 3) {
      this[0x10] = (astc_hdr_codec_options)0x0;
      *(undefined2 *)(this + 4) = 0x101;
      uVar1 = _LC5;
      *(undefined8 *)(this + 8) = uVar3;
      *(undefined8 *)(this + 0x20) = uVar3;
      uVar2 = _LC15;
      this[6] = (astc_hdr_codec_options)0x1;
      *(undefined8 *)(this + 0x14) = uVar1;
      this[0x1c] = (astc_hdr_codec_options)0x1;
      this[0x28] = (astc_hdr_codec_options)0x1;
      *(undefined4 *)(this + 0x34) = 5;
      this[0x38] = (astc_hdr_codec_options)0x1;
      *(undefined4 *)(this + 0x44) = 2;
      this[0x50] = (astc_hdr_codec_options)0x1;
      this[0x58] = (astc_hdr_codec_options)0x1;
      *(undefined4 *)(this + 0x5c) = 2;
      *(undefined8 *)(this + 0x3c) = uVar2;
      *(undefined8 *)(this + 0x2c) = uVar2;
      return;
    }
    if (3 < param_1) {
      this[0x10] = (astc_hdr_codec_options)0x0;
      *(undefined2 *)(this + 4) = 0x101;
      uVar2 = _LC10;
      this[6] = (astc_hdr_codec_options)0x1;
      *(undefined8 *)(this + 8) = uVar2;
      *(undefined8 *)(this + 0x20) = uVar2;
      uVar2 = _LC11;
      *(undefined8 *)(this + 0x14) = uVar1;
      this[0x1c] = (astc_hdr_codec_options)0x1;
      this[0x28] = (astc_hdr_codec_options)0x1;
      *(undefined8 *)(this + 0x2c) = uVar2;
      *(undefined4 *)(this + 0x34) = 5;
      this[0x38] = (astc_hdr_codec_options)0x1;
      *(undefined8 *)(this + 0x3c) = uVar2;
      *(undefined4 *)(this + 0x44) = 2;
      this[0x50] = (astc_hdr_codec_options)0x1;
      this[0x58] = (astc_hdr_codec_options)0x0;
      *(undefined4 *)(this + 0x5c) = 0;
      return;
    }
    if (param_1 == 1) {
      this[6] = (astc_hdr_codec_options)0x1;
      *(undefined2 *)(this + 4) = 0x101;
      *(undefined8 *)(this + 0x20) = uVar2;
      uVar1 = _LC7;
      *(undefined4 *)(this + 0x34) = 5;
      *(undefined8 *)(this + 8) = uVar1;
      uVar1 = _LC8;
      this[0x38] = (astc_hdr_codec_options)0x1;
      *(undefined8 *)(this + 0x3c) = uVar1;
      uVar1 = _LC9;
      *(undefined4 *)(this + 0x44) = 2;
      this[0x50] = (astc_hdr_codec_options)0x1;
      this[0x1c] = (astc_hdr_codec_options)0x0;
      this[0x28] = (astc_hdr_codec_options)0x0;
      this[0x58] = (astc_hdr_codec_options)0x1;
      *(undefined4 *)(this + 0x5c) = 1;
      *(undefined8 *)(this + 0x2c) = uVar1;
      return;
    }
    if (param_1 == 2) {
      this[6] = (astc_hdr_codec_options)0x1;
      *(undefined2 *)(this + 4) = 0x101;
      *(undefined8 *)(this + 8) = uVar4;
      uVar1 = _LC6;
      this[0x1c] = (astc_hdr_codec_options)0x1;
      *(undefined8 *)(this + 0x20) = uVar1;
      uVar1 = _LC8;
      this[0x28] = (astc_hdr_codec_options)0x1;
      *(undefined8 *)(this + 0x3c) = uVar1;
      uVar1 = _LC9;
      *(undefined4 *)(this + 0x34) = 5;
      this[0x38] = (astc_hdr_codec_options)0x1;
      *(undefined4 *)(this + 0x44) = 2;
      this[0x50] = (astc_hdr_codec_options)0x1;
      this[0x58] = (astc_hdr_codec_options)0x1;
      *(undefined4 *)(this + 0x5c) = 2;
      *(undefined8 *)(this + 0x2c) = uVar1;
      return;
    }
  }
  uVar1 = _LC6;
  this[6] = (astc_hdr_codec_options)0x0;
  *(undefined2 *)(this + 4) = 0x101;
  *(undefined8 *)(this + 8) = uVar1;
  this[0x1c] = (astc_hdr_codec_options)0x0;
  this[0x28] = (astc_hdr_codec_options)0x0;
  this[0x38] = (astc_hdr_codec_options)0x0;
  this[0x50] = (astc_hdr_codec_options)0x0;
  return;
}



/* basisu::interpolate_qlog12_colors(int const (*) [3], unsigned short*, basisu::vec<3u, float>*,
   unsigned int, unsigned int) */

void basisu::interpolate_qlog12_colors
               (int *param_1,ushort *param_2,vec *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  vec *pvVar15;
  ushort *puVar16;
  byte *pbVar17;
  uint uVar18;
  
  if (param_4 == 0) {
    return;
  }
  iVar2 = param_1[4];
  iVar3 = param_1[5];
  iVar4 = *param_1;
  iVar5 = param_1[3];
  iVar6 = param_1[1];
  iVar7 = param_1[2];
  pbVar17 = g_ise_weight_lerps + (ulong)param_5 * 0x20 + 1;
  pvVar15 = param_3;
  puVar16 = param_2;
  do {
    bVar1 = *pbVar17;
    iVar12 = 0x40 - (uint)bVar1;
    uVar8 = (uint)bVar1 * iVar5 * 0x10 + 0x20 + iVar12 * iVar4 * 0x10;
    uVar13 = uVar8 >> 6;
    uVar10 = uVar13 & 0x7ff;
    if ((uVar13 & 0x600) == 0) {
      iVar11 = uVar10 * 3;
    }
    else if (uVar10 < 0x600) {
      iVar11 = uVar10 * 4 + -0x200;
    }
    else {
      iVar11 = uVar10 * 5 + -0x800;
    }
    uVar10 = (uVar8 >> 0x11 & 0x1f) * 0x400 + (iVar11 >> 3);
    uVar8 = iVar2 * 0x10 * (uint)bVar1 + 0x20 + iVar12 * iVar6 * 0x10;
    uVar18 = uVar8 >> 6;
    uVar13 = uVar18 & 0x7ff;
    if ((uVar18 & 0x600) == 0) {
      iVar11 = uVar13 * 3;
    }
    else if (uVar13 < 0x600) {
      iVar11 = uVar13 * 4 + -0x200;
    }
    else {
      iVar11 = uVar13 * 5 + -0x800;
    }
    uVar13 = (uVar8 >> 0x11 & 0x1f) * 0x400 + (iVar11 >> 3);
    uVar8 = (uint)bVar1 * iVar3 * 0x10 + 0x20 + iVar12 * iVar7 * 0x10;
    uVar14 = uVar8 >> 6;
    uVar18 = uVar14 & 0x7ff;
    if ((uVar14 & 0x600) == 0) {
      iVar12 = uVar18 * 3;
    }
    else if (uVar18 < 0x600) {
      iVar12 = uVar18 * 4 + -0x200;
    }
    else {
      iVar12 = uVar18 * 5 + -0x800;
    }
    uVar8 = (uVar8 >> 0x11 & 0x1f) * 0x400 + (iVar12 >> 3);
    if (param_2 != (ushort *)0x0) {
      *puVar16 = (ushort)uVar10;
      puVar16[1] = (ushort)uVar13;
      puVar16[2] = (ushort)uVar8;
    }
    if (param_3 != (vec *)0x0) {
      uVar18 = uVar10 & 0x3ff;
      uVar9 = (ushort)uVar10 >> 10;
      if (uVar9 == 0) {
        uVar14 = 0;
        if ((uVar10 & 0x3ff) != 0) {
          uVar10 = 0;
          do {
            uVar14 = uVar10;
            uVar18 = uVar18 * 2;
            uVar10 = uVar14 - 1;
          } while ((uVar18 & 0x400) == 0);
          uVar18 = uVar18 & 0xfffffbff;
LAB_001009c5:
          uVar14 = (uVar14 + 0x70) * 0x800000 | uVar18 << 0xd;
        }
      }
      else {
        uVar14 = (uint)uVar9;
        if (uVar9 != 0x1f) goto LAB_001009c5;
        uVar14 = uVar18 << 0xd | 0x7f800000;
        if ((uVar10 & 0x3ff) == 0) {
          uVar14 = 0x7f800000;
        }
      }
      *(uint *)pvVar15 = uVar14;
      uVar10 = uVar13 & 0x3ff;
      uVar9 = (ushort)uVar13 >> 10;
      if (uVar9 == 0) {
        uVar18 = 0;
        if ((uVar13 & 0x3ff) != 0) {
          uVar13 = 0;
          do {
            uVar18 = uVar13;
            uVar10 = uVar10 * 2;
            uVar13 = uVar18 - 1;
          } while ((uVar10 & 0x400) == 0);
          uVar10 = uVar10 & 0xfffffbff;
LAB_00100a0d:
          uVar18 = (uVar18 + 0x70) * 0x800000 | uVar10 << 0xd;
        }
      }
      else {
        uVar18 = (uint)uVar9;
        if (uVar9 != 0x1f) goto LAB_00100a0d;
        uVar18 = uVar10 << 0xd | 0x7f800000;
        if ((uVar13 & 0x3ff) == 0) {
          uVar18 = 0x7f800000;
        }
      }
      *(uint *)(pvVar15 + 4) = uVar18;
      uVar10 = uVar8 & 0x3ff;
      uVar9 = (ushort)uVar8 >> 10;
      if (uVar9 == 0) {
        uVar13 = 0;
        if ((uVar8 & 0x3ff) != 0) {
          uVar8 = 0;
          do {
            uVar13 = uVar8;
            uVar10 = uVar10 * 2;
            uVar8 = uVar13 - 1;
          } while ((uVar10 & 0x400) == 0);
          uVar10 = uVar10 & 0xfffffbff;
LAB_00100a4f:
          uVar13 = (uVar13 + 0x70) * 0x800000 | uVar10 << 0xd;
        }
      }
      else {
        uVar13 = (uint)uVar9;
        if (uVar9 != 0x1f) goto LAB_00100a4f;
        uVar13 = 0x7f800000;
        if ((uVar8 & 0x3ff) != 0) {
          uVar13 = uVar10 << 0xd | 0x7f800000;
        }
      }
      *(uint *)(pvVar15 + 8) = uVar13;
    }
    pvVar15 = pvVar15 + 0xc;
    pbVar17 = pbVar17 + 1;
    puVar16 = puVar16 + 3;
    if (pvVar15 == param_3 + (ulong)param_4 * 0xc) {
      return;
    }
  } while( true );
}



/* basisu::get_astc_hdr_mode_11_block_colors(unsigned char const*, unsigned short*, basisu::vec<3u,
   float>*, unsigned int, unsigned int, unsigned int) */

undefined4
basisu::get_astc_hdr_mode_11_block_colors
          (uchar *param_1,ushort *param_2,vec *param_3,uint param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  int aiStack_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = basist::decode_mode11_to_qlog12(param_1,aiStack_58,param_6);
  if ((char)uVar1 != '\0') {
    interpolate_qlog12_colors(aiStack_58,param_2,param_3,param_4,param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::get_astc_hdr_mode_7_block_colors(unsigned char const*, unsigned short*, basisu::vec<3u,
   float>*, unsigned int, unsigned int, unsigned int) */

undefined4
basisu::get_astc_hdr_mode_7_block_colors
          (uchar *param_1,ushort *param_2,vec *param_3,uint param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  int aiStack_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = basist::decode_mode7_to_qlog12(param_1,aiStack_58,(int *)0x0,param_6);
  if ((char)uVar1 != '\0') {
    interpolate_qlog12_colors(aiStack_58,param_2,param_3,param_4,param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::eval_selectors(unsigned int, unsigned char*, unsigned short const*, unsigned int,
   unsigned short const*, basisu::astc_hdr_codec_options const&, unsigned int) */

double basisu::eval_selectors
                 (uint param_1,uchar *param_2,ushort *param_3,uint param_4,ushort *param_5,
                 astc_hdr_codec_options *param_6,uint param_7)

{
  byte *pbVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  fVar7 = _LC20;
  fVar6 = _LC19;
  dVar5 = _LC18;
  fVar3 = *(float *)(param_6 + 0x48);
  fVar4 = *(float *)(param_6 + 0x4c);
  if (param_1 == 0) {
    return 0.0;
  }
  uVar11 = 0;
  pbVar1 = param_2 + param_1;
  dVar15 = 0.0;
  do {
    while( true ) {
      puVar2 = param_3 + uVar11;
      if (param_4 != 0) break;
      param_2 = param_2 + 1;
      uVar11 = (ulong)((int)uVar11 + 3);
      dVar15 = dVar15 + dVar5;
      if (param_2 == pbVar1) {
        return dVar15;
      }
    }
    uVar10 = 0;
    uVar8 = 0;
    dVar14 = dVar5;
    do {
      iVar9 = (int)uVar10;
      if (((1 << ((byte)uVar8 & 0x1f) & param_7) != 0) &&
         (dVar12 = (double)(uint)((float)((uint)param_5[uVar10] << 0xd) * fVar6 + fVar7) -
                   (double)(uint)((float)((uint)*puVar2 << 0xd) * fVar6 + fVar7),
         dVar16 = (double)(uint)((float)((uint)param_5[iVar9 + 1] << 0xd) * fVar6 + fVar7) -
                  (double)(uint)((float)((uint)puVar2[1] << 0xd) * fVar6 + fVar7),
         dVar13 = (double)(uint)((float)((uint)param_5[iVar9 + 2] << 0xd) * fVar6 + fVar7) -
                  (double)(uint)((float)((uint)puVar2[2] << 0xd) * fVar6 + fVar7),
         dVar12 = dVar12 * dVar12 * (double)fVar3 + dVar16 * dVar16 * (double)fVar4 +
                  dVar13 * dVar13, dVar12 < dVar14)) {
        *param_2 = (byte)uVar8;
        dVar14 = dVar12;
      }
      uVar8 = uVar8 + 1;
      uVar10 = (ulong)(iVar9 + 3);
    } while (param_4 != uVar8);
    param_2 = param_2 + 1;
    dVar15 = dVar15 + dVar14;
    uVar11 = (ulong)((int)uVar11 + 3);
  } while (param_2 != pbVar1);
  return dVar15;
}



/* basisu::try_mode7(unsigned int, unsigned char*, unsigned char*, double&, unsigned int&,
   basisu::vec<3u, float>&, float, unsigned short (*) [3], unsigned int, unsigned int,
   basisu::astc_hdr_codec_options const&, unsigned int) */

char basisu::try_mode7(uint param_1,uchar *param_2,uchar *param_3,double *param_4,uint *param_5,
                      vec *param_6,float param_7,unsigned_short *param_8,uint param_9,uint param_10,
                      astc_hdr_codec_options *param_11,uint param_12)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  byte bVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  float fVar27;
  double dVar28;
  byte local_290;
  byte local_28c;
  byte local_288;
  char local_261;
  uint local_248;
  undefined8 local_244;
  uint local_23c;
  uint local_238 [8];
  ushort local_218 [72];
  vec local_188 [296];
  undefined4 local_60;
  undefined4 local_5c;
  uchar local_58 [24];
  long local_40;
  
  uVar26 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_261 = '\0';
  do {
    bVar25 = (&pack_astc_mode7_submode(unsigned_int,unsigned_char*,basisu::vec<int,float>const&,float,int&,unsigned_int)
               ::s_r_bits)[uVar26];
    iVar21 = (1 << (0xf - bVar25 & 0x1f)) + -1;
    uVar24 = (1 << (bVar25 & 0x1f)) - 1;
    lVar6 = 0;
    do {
      fVar27 = *(float *)(param_6 + lVar6 * 4);
      if (lVar6 != 0) {
        local_238[lVar6] =
             (uint)(byte)(&pack_astc_mode7_submode(unsigned_int,unsigned_char*,basisu::vec<int,float>const&,float,int&,unsigned_int)
                           ::s_g_b_bits)[uVar26];
      }
      fVar27 = roundf(fVar27);
      iVar4 = (int)fVar27;
      if (0xf7ff < iVar4) {
        iVar4 = 0xf7ff;
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      uVar5 = (uint)(iVar4 + iVar21) >> (0x10 - bVar25 & 0x1f);
      if (uVar24 < uVar5) {
        uVar5 = uVar24;
      }
      if (param_10 < 4) {
        if (9 < bVar25 - 7) goto LAB_001014f8;
        if (*(uint *)(CSWTCH_198 + (ulong)(bVar25 - 7) * 4) < uVar5) {
          uVar5 = *(uint *)(CSWTCH_198 + (ulong)(bVar25 - 7) * 4);
        }
      }
      else if (bVar25 - 7 < 10) {
        uVar11 = uVar5 + 3;
        if (uVar24 < uVar5 + 3) {
          uVar11 = uVar24;
        }
        uVar5 = uVar11;
        if (*(uint *)(CSWTCH_198 + (ulong)(bVar25 - 7) * 4) < uVar11) {
          uVar5 = *(uint *)(CSWTCH_198 + (ulong)(bVar25 - 7) * 4);
        }
      }
      else {
LAB_001014f8:
        uVar5 = 0;
      }
      lVar7 = lVar6 + 1;
      (&local_248)[lVar6] = uVar5;
      lVar6 = lVar7;
    } while (lVar7 != 3);
    local_238[3] = (uint)(byte)(&pack_astc_mode7_submode(unsigned_int,unsigned_char*,basisu::vec<int,float>const&,float,int&,unsigned_int)
                                 ::s_s_bits)[uVar26];
    fVar27 = roundf(param_7);
    iVar4 = (int)fVar27;
    if (0xf7ff < iVar4) {
      iVar4 = 0xf7ff;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    local_23c = (uint)(iVar4 + iVar21) >> (0x10 - bVar25 & 0x1f);
    if (uVar24 < local_23c) {
      local_23c = uVar24;
    }
    if (3 < param_10) {
      local_23c = local_23c + 6;
      if (uVar24 < local_23c) {
        local_23c = uVar24;
      }
    }
    if (local_23c == 0) {
      local_23c = 1;
    }
    if (uVar26 == 5) {
      local_290 = (byte)local_244 & 0x1f;
      bVar25 = (byte)local_248 & 0x3f;
      bVar1 = false;
      local_28c = (byte)((ulong)local_244 >> 0x20) & 0x1f;
      local_288 = (byte)local_23c & 0x1f;
      bVar2 = false;
      uVar24 = local_248;
switchD_00101170_caseD_5:
      bVar8 = 0x80;
      bVar14 = 0x80;
      uVar18 = (int)(uint)local_244 >> 6 & 1;
      uVar5 = (int)uVar24 >> 6 & 1;
      uVar11 = (int)(uint)local_244 >> 5 & 1;
      uVar12 = (int)local_244._4_4_ >> 6 & 1;
      uVar16 = (int)local_244._4_4_ >> 5 & 1;
      uVar19 = (int)local_23c >> 6 & 1;
      bVar20 = 0x40;
      uVar13 = (int)local_23c >> 5 & 1;
      bVar17 = 0x80;
      goto LAB_00101200;
    }
    uVar5 = 0;
    if (-1 < (int)local_248) {
      uVar5 = local_248;
    }
    uVar24 = local_244._4_4_;
    if ((int)uVar5 < (int)(uint)local_244) {
      uVar23 = 2;
      if ((int)local_244._4_4_ <= (int)(uint)local_244) {
        uVar23 = 1;
        uVar24 = (uint)local_244;
      }
LAB_001010b0:
      (&local_248)[uVar23] = local_248;
    }
    else {
      if ((int)uVar5 < (int)local_244._4_4_) {
        uVar23 = 2;
        goto LAB_001010b0;
      }
      uVar23 = 0;
      uVar24 = local_248;
    }
    iVar21 = 0;
    bVar2 = false;
    lVar6 = 4;
    local_244 = CONCAT44(uVar24 - (int)((ulong)local_244 >> 0x20),uVar24 - (int)local_244);
    do {
      iVar4 = (1 << ((byte)*(undefined4 *)((long)local_238 + lVar6) & 0x1f)) + -1;
      if (iVar4 < *(int *)((long)&local_248 + lVar6)) {
        iVar9 = *(int *)((long)&local_248 + lVar6) - iVar4;
        *(int *)((long)&local_248 + lVar6) = iVar4;
        bVar2 = true;
        if (iVar21 < iVar9) {
          iVar21 = iVar9;
        }
      }
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x10);
    bVar25 = (byte)uVar24 & 0x3f;
    local_290 = (byte)local_244 & 0x1f;
    local_28c = (byte)((ulong)local_244 >> 0x20) & 0x1f;
    local_288 = (byte)local_23c & 0x1f;
    uVar5 = (int)uVar24 >> 6;
    bVar1 = (bool)(4 < iVar21 & bVar2);
    uVar22 = (uint)uVar23;
    uVar12 = (int)uVar24 >> 7;
    uVar11 = (int)uVar24 >> 8;
    uVar15 = (int)uVar24 >> 9;
    uVar19 = (int)local_23c >> 6;
    uVar13 = (int)local_23c >> 5;
    if ((uint)uVar26 < 6) {
      uVar10 = (int)(uint)local_244 >> 5;
      uVar16 = (int)local_244._4_4_ >> 5;
      switch(uVar26 & 0xffffffff) {
      case 0:
        goto switchD_00101170_caseD_0;
      case 1:
        uVar5 = uVar5 & 1;
        bVar17 = 0;
        uVar18 = uVar11 & 1;
        uVar11 = uVar10 & 1;
        uVar12 = uVar12 & 1;
        uVar16 = uVar16 & 1;
        uVar19 = (int)uVar24 >> 10 & 1;
        bVar14 = (byte)(uVar22 << 7);
        uVar13 = uVar15 & 1;
        bVar8 = (byte)((int)(uVar23 >> 1) << 7);
        bVar20 = 0x40;
        break;
      case 2:
        uVar16 = uVar5 & 1;
        uVar12 = uVar12 & 1;
        uVar18 = uVar15 & 1;
        bVar20 = 0;
        uVar11 = uVar11 & 1;
        uVar5 = (int)local_23c >> 7 & 1;
        uVar19 = uVar19 & 1;
        uVar13 = uVar13 & 1;
        bVar14 = (byte)(uVar22 << 7);
        bVar8 = (byte)((int)(uVar23 >> 1) << 7);
        bVar17 = 0x80;
        break;
      case 3:
        uVar12 = uVar12 & 1;
        uVar5 = uVar5 & 1;
        bVar17 = 0x80;
        uVar18 = uVar11 & 1;
        uVar11 = uVar10 & 1;
        uVar16 = uVar16 & 1;
        uVar19 = uVar19 & 1;
        uVar13 = uVar13 & 1;
        bVar14 = (byte)(uVar22 << 7);
        bVar8 = (byte)((int)(uVar23 >> 1) << 7);
        bVar20 = 0x40;
        break;
      case 4:
        uVar19 = uVar12 & 1;
        uVar5 = uVar5 & 1;
        uVar18 = (int)(uint)local_244 >> 6 & 1;
        uVar11 = uVar10 & 1;
        uVar12 = (int)local_244._4_4_ >> 6 & 1;
        uVar16 = uVar16 & 1;
        uVar13 = uVar13 & 1;
        bVar20 = (byte)((uVar22 & 1) << 6);
        bVar17 = (byte)((int)(uVar23 >> 1) << 7);
        bVar8 = 0x80;
        bVar14 = 0x80;
        break;
      case 5:
        goto switchD_00101170_caseD_5;
      }
    }
    else {
switchD_00101170_caseD_0:
      uVar16 = (int)uVar24 >> 10 & 1;
      uVar18 = uVar15 & 1;
      uVar11 = uVar11 & 1;
      uVar12 = uVar12 & 1;
      uVar5 = uVar5 & 1;
      uVar19 = uVar19 & 1;
      uVar13 = uVar13 & 1;
      bVar14 = (byte)(uVar22 << 7);
      bVar20 = 0;
      bVar17 = 0;
      bVar8 = (byte)((int)(uVar23 >> 1) << 7);
    }
LAB_00101200:
    local_60 = CONCAT13((byte)(uVar13 << 5) | (byte)(uVar5 << 7) | (byte)(uVar19 << 6) | local_288,
                        CONCAT12(bVar8 | local_28c | (byte)(uVar12 << 6) | (byte)(uVar16 << 5),
                                 CONCAT11(bVar14 | local_290 | (byte)(uVar18 << 6) |
                                          (byte)(uVar11 << 5),bVar17 | bVar20 | bVar25)));
    if (!bVar1) {
      if (param_12 == 0x14) {
        local_5c = local_60;
      }
      else {
        lVar6 = *(long *)((ulong)(param_12 - 4) * 0x40 + 0x18c328);
        lVar7 = 0;
        do {
          local_58[lVar7 + -4] = *(uchar *)(lVar6 + (ulong)*(byte *)((long)&local_60 + lVar7));
          lVar7 = lVar7 + 1;
        } while (lVar7 != 4);
      }
      cVar3 = basist::decode_mode7_to_qlog12
                        ((uchar *)&local_5c,(int *)local_238,(int *)0x0,param_12);
      if (cVar3 != '\0') {
        interpolate_qlog12_colors((int *)local_238,local_218,local_188,param_9,param_10);
        dVar28 = (double)eval_selectors(param_1,local_58,(ushort *)param_8,param_9,local_218,
                                        param_11,0xffffffff);
        if (dVar28 < *param_4) {
          *param_4 = dVar28;
          *(undefined4 *)param_2 = local_5c;
          memcpy(param_3,local_58,(ulong)param_1);
          *param_5 = (uint)uVar26;
          local_261 = cVar3;
        }
        if ((param_12 == 0x14) && (!bVar2)) break;
      }
    }
    uVar26 = uVar26 + 1;
  } while (uVar26 != 6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_261;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* basisu::try_mode11(unsigned int, unsigned char*, unsigned char*, double&, unsigned int&,
   basisu::vec<3u, float>&, basisu::vec<3u, float> const&, unsigned short (*) [3], unsigned int,
   unsigned int, basisu::astc_hdr_codec_options const&, bool, unsigned int, bool, int, int) */

ulong basisu::try_mode11(uint param_1,uchar *param_2,uchar *param_3,double *param_4,uint *param_5,
                        vec *param_6,vec *param_7,unsigned_short *param_8,uint param_9,uint param_10
                        ,astc_hdr_codec_options *param_11,bool param_12,uint param_13,bool param_14,
                        int param_15,int param_16)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  uint uVar34;
  uint *puVar35;
  uint *puVar36;
  long in_FS_OFFSET;
  float fVar37;
  float fVar38;
  double dVar39;
  undefined1 auVar40 [16];
  int local_390;
  uint local_38c;
  uint local_370;
  byte local_301;
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  ushort auStack_2c8 [96];
  vec avStack_208 [396];
  undefined4 uStack_7c;
  ushort uStack_78;
  undefined4 uStack_76;
  ushort uStack_72;
  byte local_70 [48];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_12) {
    param_16 = -1;
    param_15 = -1;
  }
  else if (param_16 < param_15) {
    local_301 = 0;
LAB_00102038:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return (ulong)local_301;
  }
  local_301 = 0;
LAB_00101710:
  if (param_16 == 0xffffffff) {
    lVar33 = 0;
    do {
      fVar2 = *(float *)(param_6 + lVar33 * 4);
      fVar37 = roundf(fVar2);
      uVar16 = (uint)fVar37;
      if (0xffff < (int)uVar16) {
        uVar16 = 0xffff;
      }
      if ((int)uVar16 < 0) {
        uVar16 = 0;
      }
      uVar15 = uVar16 & 0x7ff;
      if ((uVar16 & 0x600) == 0) {
        iVar13 = uVar15 * 3;
      }
      else if (uVar15 < 0x600) {
        iVar13 = uVar15 * 4 + -0x200;
      }
      else {
        iVar13 = uVar15 * 5 + -0x800;
      }
      fVar37 = *(float *)(param_7 + lVar33 * 4);
      uVar17 = (ulong)(uint)(((int)uVar16 >> 0xb) * 0x400 + (iVar13 >> 3));
      fVar38 = roundf(fVar37);
      uVar16 = (uint)fVar38;
      if (0xffff < (int)uVar16) {
        uVar16 = 0xffff;
      }
      if ((int)uVar16 < 0) {
        uVar16 = 0;
      }
      uVar15 = uVar16 & 0x7ff;
      if ((uVar16 & 0x600) == 0) {
        iVar13 = uVar15 * 3;
LAB_001023c7:
        uVar23 = (ulong)(uint)(((int)uVar16 >> 0xb) * 0x400 + (iVar13 >> 3));
        if (lVar33 == 2) goto LAB_00102465;
LAB_001023d9:
        uVar10 = *(ushort *)(g_half_to_qlog8 + uVar17 * 2);
        if (0xf7 < uVar10) {
          uVar10 = 0xf7;
        }
        uVar21 = *(ushort *)(g_half_to_qlog8 + uVar23 * 2);
        if (0xf7 < uVar21) {
          uVar21 = 0xf7;
        }
        if (uVar10 == uVar21) {
          uVar11 = 0xf7;
          goto LAB_00102537;
        }
      }
      else {
        if (uVar15 < 0x600) {
          iVar13 = uVar15 * 4 + -0x200;
          goto LAB_001023c7;
        }
        uVar23 = (ulong)(uint)(((int)uVar16 >> 0xb) * 0x400 + ((int)(uVar15 * 5 + -0x800) >> 3));
        if (lVar33 != 2) goto LAB_001023d9;
LAB_00102465:
        uVar11 = (&g_half_to_qlog7)[uVar17];
        if (0x7b < uVar11) {
          uVar11 = 0x7b;
        }
        uVar10 = (&g_half_to_qlog7)[uVar23];
        if (0x7b < (ushort)(&g_half_to_qlog7)[uVar23]) {
          uVar10 = 0x7b;
        }
        uVar21 = uVar10;
        if (uVar11 != uVar10) goto LAB_00102491;
        uVar11 = 0x7b;
LAB_00102537:
        if (fVar37 < fVar2) {
          if (uVar10 == 0) {
            uVar21 = 0;
          }
          else {
            uVar21 = uVar10 - 1;
            uVar12 = uVar10;
            if (uVar11 == uVar10) goto LAB_00102558;
          }
          uVar12 = uVar10 + 1;
        }
        else {
          if (uVar10 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar10 - 1;
            uVar21 = uVar10;
            if (uVar11 == uVar10) goto LAB_00102558;
          }
          uVar21 = uVar10 + 1;
        }
LAB_00102558:
        uVar10 = uVar12;
        uVar11 = uVar10;
        if (lVar33 == 2) goto LAB_00102491;
      }
      *(char *)((long)&uStack_7c + lVar33 * 2) = (char)uVar10;
      *(char *)((long)&uStack_7c + lVar33 * 2 + 1) = (char)uVar21;
      lVar33 = lVar33 + 1;
    } while( true );
  }
  uVar17 = (ulong)(uint)param_16;
  uVar34 = 0;
  local_70[0] = 7;
  local_70[1] = 8;
  local_70[2] = 6;
  local_70[3] = 7;
  local_70[4] = 8;
  local_70[5] = 6;
  local_70[6] = 7;
  local_70[7] = 6;
  local_70[8] = 6;
  local_70[9] = 6;
  local_70[10] = 7;
  local_70[0xb] = 7;
  local_70[0xc] = 6;
  local_70[0xd] = 7;
  local_70[0xe] = 7;
  local_70[0xf] = 7;
  local_70[0x10] = 7;
  local_70[0x11] = 6;
  local_70[0x12] = 7;
  local_70[0x13] = 6;
  local_70[0x14] = 5;
  local_70[0x15] = 6;
  local_70[0x16] = 5;
  local_70[0x17] = 6;
  uVar16 = (1 << ((char)((uint)param_16 >> 1) + 9U & 0x1f)) - 1;
  iVar18 = (1 << (local_70[uVar17] & 0x1f)) + -1;
  iVar13 = (1 << (local_70[uVar17 + 8] & 0x1f)) + -1;
  uVar15 = ((uint)param_16 >> 1) + 2;
  if (uVar15 < 10) {
    uVar34 = *(uint *)(CSWTCH_198 + (ulong)uVar15 * 4);
  }
  iVar29 = 1 << (local_70[uVar17 + 0x10] - 1 & 0x1f);
  puVar3 = (&g_pHalf_to_qlog_tabs)[uVar15];
  iVar1 = iVar29 + -1;
  puVar35 = (uint *)local_2e8;
  do {
    fVar2 = *(float *)param_6;
    fVar37 = roundf(fVar2);
    uVar15 = (uint)(long)fVar37;
    uVar30 = uVar15 & 0x7ff;
    if (((long)fVar37 & 0x600U) == 0) {
      iVar24 = uVar30 * 3;
    }
    else if (uVar30 < 0x600) {
      iVar24 = uVar30 * 4 + -0x200;
    }
    else {
      iVar24 = uVar30 * 5 + -0x800;
    }
    fVar37 = *(float *)param_7;
    uVar10 = *(ushort *)
              (puVar3 + (long)(int)(((int)uVar15 >> 0xb & 0x1fU) * 0x400 + (iVar24 >> 3)) * 2);
    *puVar35 = (uint)uVar10;
    fVar38 = roundf(fVar37);
    uVar15 = (uint)(long)fVar38;
    uVar30 = uVar15 & 0x7ff;
    if (((long)fVar38 & 0x600U) == 0) {
      iVar24 = uVar30 * 3;
    }
    else if (uVar30 < 0x600) {
      iVar24 = uVar30 * 4 + -0x200;
    }
    else {
      iVar24 = uVar30 * 5 + -0x800;
    }
    uVar21 = *(ushort *)
              (puVar3 + (long)(int)(((int)uVar15 >> 0xb & 0x1fU) * 0x400 + (iVar24 >> 3)) * 2);
    uVar15 = (uint)uVar21;
    if ((uint)uVar21 == (uint)uVar10) {
      uVar15 = (uint)uVar21;
      if (fVar37 <= fVar2) {
        if (uVar16 != uVar10) {
          *puVar35 = uVar10 + 1;
        }
        uVar15 = (uVar15 - 1) + (uint)(uVar21 == 0);
      }
      else {
        if (uVar10 != 0) {
          *puVar35 = uVar10 - 1;
        }
        uVar15 = uVar15 + (uVar16 != uVar15);
      }
    }
    uVar30 = *puVar35;
    if (uVar34 < *puVar35) {
      uVar30 = uVar34;
    }
    if (uVar34 < uVar15) {
      uVar15 = uVar34;
    }
    param_6 = param_6 + 4;
    puVar36 = puVar35 + 1;
    *puVar35 = uVar30;
    param_7 = param_7 + 4;
    puVar35[3] = uVar15;
    puVar35 = puVar36;
  } while ((uint *)(local_2e8 + 0xc) != puVar36);
  uVar5 = local_2e8._0_4_;
  uVar6 = local_2e8._4_4_;
  uVar15 = 0xffffffff;
  if (-1 < (int)local_2e8._0_4_) {
    uVar15 = local_2e8._0_4_;
  }
  uVar34 = uVar15;
  if ((int)uVar15 < (int)local_2e8._4_4_) {
    uVar34 = local_2e8._4_4_;
  }
  uVar30 = (uint)((int)uVar15 < (int)local_2e8._4_4_);
  uVar15 = local_2e8._8_4_;
  local_38c = uVar15;
  if ((int)uVar34 < (int)uVar15) {
    uVar30 = 2;
    uVar34 = uVar15;
  }
  uVar8 = local_2e8._12_4_;
  uVar14 = uVar34;
  if ((int)uVar34 < (int)local_2e8._12_4_) {
    uVar30 = 0;
    uVar14 = local_2e8._12_4_;
  }
  uVar31 = (uint)((int)uVar34 < (int)local_2e8._12_4_);
  uVar34 = (uint)local_2d8;
  uVar22 = local_2d8._4_4_;
  uVar20 = local_2e8._12_4_;
  if ((int)uVar14 < (int)(uint)local_2d8) {
    if ((int)(uint)local_2d8 < (int)local_2d8._4_4_) {
LAB_00102250:
      lVar28 = 2;
      uVar25 = local_2e8._0_4_;
      uVar26 = local_2d8._4_4_;
      uVar14 = local_2d8._4_4_;
    }
    else {
      local_38c = uVar6;
      lVar28 = 1;
      uVar25 = local_2e8._0_4_;
      uVar15 = uVar6;
      uVar26 = (uint)local_2d8;
      uVar14 = (uint)local_2d8;
    }
LAB_0010198a:
    local_2e8._0_4_ = uVar15;
    *(uint *)(local_2e8 + lVar28 * 4) = uVar25;
    local_2e8._12_4_ = uVar26;
    *(uint *)(local_2e8 + lVar28 * 4 + 0xc) = uVar20;
    uVar25 = uVar15;
  }
  else {
    if ((int)uVar14 < (int)local_2d8._4_4_) goto LAB_00102250;
    lVar33 = (long)(int)uVar30;
    local_38c = *(uint *)(local_2e8 + ((long)(int)(uVar31 ^ 1) * 3 + lVar33) * 4);
    uVar26 = local_2e8._12_4_;
    uVar25 = local_2e8._0_4_;
    if (uVar31 != 1) {
      local_2d8 = local_2e8._4_8_;
      auVar40._12_4_ = local_2e8._0_4_;
      auVar40._8_4_ = uVar22;
      auVar40._4_4_ = uVar34;
      auVar40._0_4_ = local_2e8._12_4_;
      local_2e8 = auVar40;
      uVar26 = uVar5;
      uVar25 = uVar8;
    }
    if (uVar30 != 0) {
      lVar28 = (long)(int)uVar30;
      uVar15 = *(uint *)(local_2e8 + lVar33 * 4);
      uVar20 = uVar26;
      uVar26 = *(uint *)(local_2e8 + lVar33 * 4 + 0xc);
      goto LAB_0010198a;
    }
  }
  local_390 = 2;
  uVar15 = 0;
  local_370 = 0xffffffff;
  while( true ) {
    uVar34 = local_370;
    if ((int)(uVar26 - (uint)local_2d8) < 0) {
      bVar4 = true;
      uVar30 = uVar26;
    }
    else if (iVar18 < (int)(uVar26 - (uint)local_2d8)) {
      bVar4 = true;
      uVar30 = uVar26 - iVar18;
    }
    else {
      bVar4 = false;
      uVar30 = (uint)local_2d8;
    }
    if ((int)(uVar26 - local_2d8._4_4_) < 0) {
      bVar4 = true;
      uVar22 = uVar26;
    }
    else {
      uVar22 = local_2d8._4_4_;
      if (iVar18 < (int)(uVar26 - local_2d8._4_4_)) {
        bVar4 = true;
        uVar22 = uVar26 - iVar18;
      }
    }
    iVar24 = uVar26 - uVar25;
    if (iVar24 < 0) {
      bVar4 = true;
      uVar20 = uVar30;
      uVar31 = uVar22;
      uVar27 = uVar26;
    }
    else if (iVar13 < iVar24) {
      bVar4 = true;
      uVar20 = uVar30 - iVar13;
      uVar31 = uVar22 - iVar13;
      uVar27 = uVar26 - iVar13;
    }
    else {
      uVar20 = uVar30 - iVar24;
      uVar31 = uVar22 - iVar24;
      uVar27 = uVar25;
    }
    uVar5 = local_2e8._4_4_;
    if ((int)(uVar20 - local_2e8._4_4_) < -iVar29) {
      bVar4 = true;
      uVar32 = iVar29 + uVar20;
    }
    else {
      uVar32 = local_2e8._4_4_;
      if (iVar1 < (int)(uVar20 - local_2e8._4_4_)) {
        bVar4 = true;
        uVar32 = uVar20 - iVar1;
      }
    }
    uVar7 = local_2e8._4_8_;
    if ((int)(uVar31 - local_2e8._8_4_) < -iVar29) {
      bVar4 = true;
      uVar20 = iVar29 + uVar31;
    }
    else {
      uVar20 = local_2e8._8_4_;
      if (iVar1 < (int)(uVar31 - local_2e8._8_4_)) {
        bVar4 = true;
        uVar20 = uVar31 - iVar1;
      }
    }
    uVar31 = uVar26;
    if ((int)uVar16 <= (int)uVar26) {
      uVar31 = uVar16;
    }
    if ((int)uVar26 < 0) {
      uVar31 = uVar15;
    }
    uVar19 = uVar30;
    if ((int)uVar16 <= (int)uVar30) {
      uVar19 = uVar16;
    }
    if ((int)uVar30 < 0) {
      uVar19 = 0;
    }
    uVar30 = uVar22;
    if ((int)uVar16 <= (int)uVar22) {
      uVar30 = uVar16;
    }
    if ((int)uVar22 < 0) {
      uVar30 = 0;
    }
    uVar22 = uVar27;
    if ((int)uVar16 <= (int)uVar27) {
      uVar22 = uVar16;
    }
    if ((int)uVar27 < 0) {
      uVar22 = uVar15;
    }
    uVar27 = uVar32;
    if ((int)uVar16 <= (int)uVar32) {
      uVar27 = uVar16;
    }
    if ((int)uVar32 < 0) {
      uVar27 = uVar15;
    }
    uVar32 = uVar20;
    if ((int)uVar16 <= (int)uVar20) {
      uVar32 = uVar16;
    }
    if ((int)uVar20 < 0) {
      uVar32 = 0;
    }
    if ((!bVar4) || (local_38c != uVar14)) break;
    uVar31 = (uVar31 - uVar26) * (uVar31 - uVar26);
    uVar30 = (uVar30 - local_2d8._4_4_) * (uVar30 - local_2d8._4_4_) +
             (uVar19 - (uint)local_2d8) * (uVar19 - (uint)local_2d8) + uVar31 +
             (uVar27 - uVar5) * (uVar27 - uVar5) + (uVar22 - uVar25) * (uVar22 - uVar25) +
             (uVar32 - local_2e8._8_4_) * (uVar32 - local_2e8._8_4_);
    if (uVar30 < local_370) {
      local_370 = uVar30;
    }
    uVar26 = local_2e8._0_4_;
    uVar25 = local_2e8._12_4_;
    local_2e8._12_4_ = local_2e8._0_4_;
    local_2e8._8_4_ = local_2d8._4_4_;
    local_2e8._4_4_ = (uint)local_2d8;
    local_2e8._0_4_ = uVar25;
    local_2d8 = uVar7;
    uVar22 = uVar34;
    if (local_390 == 1) break;
    local_390 = 1;
    local_2d8 = uVar7;
  }
  if (7 < (uint)param_16) {
    uVar17 = FUN_00101e68();
    return uVar17;
  }
                    /* WARNING: Could not recover jumptable at 0x00101e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar17 = (*(code *)(&DAT_0018a1b8 + *(int *)(&DAT_0018a1b8 + uVar17 * 4)))
                     (uVar31,uVar22,&DAT_0018a1b8 + *(int *)(&DAT_0018a1b8 + uVar17 * 4));
  return uVar17;
LAB_00102491:
  uStack_78 = CONCAT11((char)uVar21,(char)uVar11) | 0x8080;
  if (param_13 == 0x14) {
    uStack_76 = uStack_7c;
    uStack_72 = uStack_78;
  }
  else {
    lVar33 = *(long *)((ulong)(param_13 - 4) * 0x40 + 0x18c328);
    lVar28 = 0;
    do {
      *(undefined1 *)((long)&uStack_76 + lVar28) =
           *(undefined1 *)(lVar33 + (ulong)*(byte *)((long)&uStack_7c + lVar28));
      lVar28 = lVar28 + 1;
    } while (lVar28 != 6);
  }
  bVar9 = basist::decode_mode11_to_qlog12((uchar *)&uStack_76,(int *)local_2e8,param_13);
  if (bVar9 != 0) {
    interpolate_qlog12_colors((int *)local_2e8,auStack_2c8,avStack_208,param_9,param_10);
    dVar39 = (double)eval_selectors(param_1,local_70 + 0x18,(ushort *)param_8,param_9,auStack_2c8,
                                    param_11,-(uint)(param_10 != 8 || !param_14) | 0xcc33);
    if (dVar39 < *param_4) {
      *param_4 = dVar39;
      *(undefined4 *)param_2 = uStack_76;
      *(ushort *)(param_2 + 4) = uStack_72;
      memcpy(param_3,local_70 + 0x18,(ulong)param_1);
      *param_5 = 0;
      local_301 = bVar9;
    }
    if (param_13 == 0x14) goto LAB_00102038;
  }
  param_16 = 0xfffffffe;
  if (-2 < param_15) goto LAB_00102038;
  goto LAB_00101710;
}



ulong FUN_00101e68(void)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  byte unaff_BL;
  int iVar22;
  byte unaff_BPL;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  byte in_R8B;
  uint uVar28;
  long lVar29;
  byte in_R9B;
  uint in_R10D;
  byte in_R11B;
  int unaff_R12D;
  uint unaff_R13D;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  ulong unaff_R15;
  long in_FS_OFFSET;
  float fVar33;
  float fVar34;
  double dVar35;
  undefined1 auVar36 [16];
  uint uStack0000000000000014;
  int iStack000000000000001c;
  uint uStack0000000000000024;
  int iStack0000000000000028;
  uint uStack000000000000002c;
  uint uStack0000000000000030;
  byte bStack0000000000000034;
  byte bStack0000000000000038;
  uint uStack000000000000003c;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  int iStack000000000000005c;
  uint uStack0000000000000064;
  uint *in_stack_00000068;
  byte in_stack_00000070;
  int iStack0000000000000074;
  float *in_stack_00000080;
  float *in_stack_00000088;
  undefined8 in_stack_00000090;
  double *in_stack_00000098;
  ushort *in_stack_000000a0;
  astc_hdr_codec_options *in_stack_000000a8;
  uint uStack00000000000000b0;
  char cStack00000000000000b6;
  byte bStack00000000000000b7;
  uint *in_stack_000000b8;
  void *in_stack_000000c0;
  int *in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  uint uStack00000000000000e0;
  uint uStack00000000000000e4;
  ushort uVar37;
  uint in_stack_00000342;
  ushort in_stack_00000346;
  long in_stack_00000378;
  uint in_stack_000003d0;
  uint in_stack_000003d8;
  uint in_stack_000003f0;
  int in_stack_00000400;
  
  uVar31 = (uint)unaff_R15;
  uVar12 = ((((uVar31 & 4) << 5 | uStack0000000000000040 & 0x3f | unaff_R13D) << 8 |
            (uVar31 & 2) << 6 | uStack000000000000003c & 0x3f | in_R10D) << 8 |
           uStack0000000000000030 >> 2 & 0x40 | (uVar31 & 1) << 7 | uStack0000000000000044 & 0x3f)
           << 8 | uStack0000000000000030 & 0xff;
  uVar37 = CONCAT11(bStack0000000000000038 & 0x1f | in_stack_00000070 | unaff_BL | in_R11B,
                    bStack0000000000000034 & 0x1f | in_R9B | in_R8B | unaff_BPL);
  if (cStack00000000000000b6 == '\0') goto LAB_001024a4;
  if (4 < unaff_R12D) goto LAB_00102026;
  uVar31 = uVar12;
  if (in_stack_000003f0 == 0x14) goto LAB_00101f75;
LAB_00101f29:
  lVar29 = *(long *)((ulong)(in_stack_000003f0 - 4) * 0x40 + 0x18c328);
  lVar14 = 0;
  do {
    (&stack0x00000342)[lVar14] = *(undefined1 *)(lVar29 + (ulong)(byte)(&stack0x0000033c)[lVar14]);
    lVar14 = lVar14 + 1;
    uVar31 = in_stack_00000342;
    uVar37 = in_stack_00000346;
  } while (lVar14 != 6);
LAB_00101f75:
  in_stack_00000346 = uVar37;
  in_stack_00000342 = uVar31;
  uVar31 = (uint)unaff_R15;
  bVar9 = basist::decode_mode11_to_qlog12
                    (&stack0x00000342,(int *)in_stack_00000068,in_stack_000003f0);
  if (bVar9 != 0) {
    basisu::interpolate_qlog12_colors
              ((int *)in_stack_00000068,(ushort *)&stack0x000000f0,(vec *)&stack0x000001b0,
               in_stack_000003d0,in_stack_000003d8);
    dVar35 = (double)basisu::eval_selectors
                               (in_stack_00000090._4_4_,&stack0x00000360,in_stack_000000a0,
                                in_stack_000003d0,(ushort *)&stack0x000000f0,in_stack_000000a8,
                                uStack00000000000000b0);
    if (dVar35 < *in_stack_00000098) {
      *in_stack_00000098 = dVar35;
      *in_stack_000000b8 = in_stack_00000342;
      *(ushort *)(in_stack_000000b8 + 1) = in_stack_00000346;
      memcpy(in_stack_000000c0,&stack0x00000360,(ulong)in_stack_00000090._4_4_);
      *in_stack_000000c8 = uVar31 + 1;
      bStack00000000000000b7 = bVar9;
    }
    if ((in_stack_000003f0 == 0x14) && (cStack00000000000000b6 == '\0')) goto LAB_00102038;
  }
LAB_00102026:
  uVar31 = uVar31 - 1;
  unaff_R15 = (ulong)uVar31;
  if ((int)uVar31 < in_stack_00000400) {
LAB_00102038:
    if (in_stack_00000378 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)bStack00000000000000b7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (uVar31 == 0xffffffff) {
    lVar29 = 0;
    do {
      fVar2 = in_stack_00000080[lVar29];
      fVar33 = roundf(fVar2);
      uVar31 = (uint)fVar33;
      if (0xffff < (int)uVar31) {
        uVar31 = 0xffff;
      }
      if ((int)uVar31 < 0) {
        uVar31 = 0;
      }
      uVar20 = uVar31 & 0x7ff;
      if ((uVar31 & 0x600) == 0) {
        iVar15 = uVar20 * 3;
      }
      else if (uVar20 < 0x600) {
        iVar15 = uVar20 * 4 + -0x200;
      }
      else {
        iVar15 = uVar20 * 5 + -0x800;
      }
      fVar33 = in_stack_00000088[lVar29];
      uVar13 = (ulong)(uint)(((int)uVar31 >> 0xb) * 0x400 + (iVar15 >> 3));
      fVar34 = roundf(fVar33);
      uVar31 = (uint)fVar34;
      if (0xffff < (int)uVar31) {
        uVar31 = 0xffff;
      }
      if ((int)uVar31 < 0) {
        uVar31 = 0;
      }
      uVar20 = uVar31 & 0x7ff;
      if ((uVar31 & 0x600) == 0) {
        iVar15 = uVar20 * 3;
LAB_001023c7:
        uVar21 = (ulong)(uint)(((int)uVar31 >> 0xb) * 0x400 + (iVar15 >> 3));
        if (lVar29 != 2) goto LAB_001023d9;
LAB_00102465:
        uVar37 = (&basisu::g_half_to_qlog7)[uVar13];
        if (0x7b < uVar37) {
          uVar37 = 0x7b;
        }
        uVar10 = (&basisu::g_half_to_qlog7)[uVar21];
        if (0x7b < (ushort)(&basisu::g_half_to_qlog7)[uVar21]) {
          uVar10 = 0x7b;
        }
        uVar18 = uVar10;
        if (uVar37 != uVar10) goto LAB_00102491;
        uVar37 = 0x7b;
LAB_00102537:
        if (fVar33 < fVar2) {
          if (uVar10 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = uVar10 - 1;
            uVar11 = uVar10;
            if (uVar37 == uVar10) goto LAB_00102558;
          }
          uVar11 = uVar10 + 1;
        }
        else {
          if (uVar10 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = uVar10 - 1;
            uVar18 = uVar10;
            if (uVar37 == uVar10) goto LAB_00102558;
          }
          uVar18 = uVar10 + 1;
        }
LAB_00102558:
        uVar10 = uVar11;
        uVar37 = uVar10;
        if (lVar29 == 2) goto LAB_00102491;
      }
      else {
        if (uVar20 < 0x600) {
          iVar15 = uVar20 * 4 + -0x200;
          goto LAB_001023c7;
        }
        uVar21 = (ulong)(uint)(((int)uVar31 >> 0xb) * 0x400 + ((int)(uVar20 * 5 + -0x800) >> 3));
        if (lVar29 == 2) goto LAB_00102465;
LAB_001023d9:
        uVar10 = *(ushort *)(basisu::g_half_to_qlog8 + uVar13 * 2);
        if (0xf7 < uVar10) {
          uVar10 = 0xf7;
        }
        uVar18 = *(ushort *)(basisu::g_half_to_qlog8 + uVar21 * 2);
        if (0xf7 < uVar18) {
          uVar18 = 0xf7;
        }
        if (uVar10 == uVar18) {
          uVar37 = 0xf7;
          goto LAB_00102537;
        }
      }
      (&stack0x0000033c)[lVar29 * 2] = (char)uVar10;
      (&stack0x0000033d)[lVar29 * 2] = (char)uVar18;
      lVar29 = lVar29 + 1;
    } while( true );
  }
  uVar20 = 0;
  uStack0000000000000014 = (1 << ((char)(uVar31 >> 1) + 9U & 0x1f)) - 1;
  iVar15 = (1 << ((&stack0x00000348)[unaff_R15] & 0x1f)) + -1;
  iStack0000000000000074 = (1 << ((&stack0x00000350)[unaff_R15] & 0x1f)) + -1;
  uVar12 = (uVar31 >> 1) + 2;
  if (uVar12 < 10) {
    uVar20 = *(uint *)(CSWTCH_198 + (ulong)uVar12 * 4);
  }
  iStack000000000000005c = 1 << ((&stack0x00000358)[unaff_R15] - 1 & 0x1f);
  puVar3 = (&basisu::g_pHalf_to_qlog_tabs)[uVar12];
  iStack000000000000001c = -iStack000000000000005c;
  iVar1 = iStack000000000000005c + -1;
  do {
    fVar2 = *in_stack_00000080;
    fVar33 = roundf(fVar2);
    uVar12 = (uint)(long)fVar33;
    uVar25 = uVar12 & 0x7ff;
    if (((long)fVar33 & 0x600U) == 0) {
      iVar22 = uVar25 * 3;
    }
    else if (uVar25 < 0x600) {
      iVar22 = uVar25 * 4 + -0x200;
    }
    else {
      iVar22 = uVar25 * 5 + -0x800;
    }
    fVar33 = *in_stack_00000088;
    uVar37 = *(ushort *)
              (puVar3 + (long)(int)(((int)uVar12 >> 0xb & 0x1fU) * 0x400 + (iVar22 >> 3)) * 2);
    *in_stack_00000068 = (uint)uVar37;
    fVar34 = roundf(fVar33);
    uVar12 = uStack0000000000000014;
    uVar25 = (uint)(long)fVar34;
    uVar28 = uVar25 & 0x7ff;
    if (((long)fVar34 & 0x600U) == 0) {
      iVar22 = uVar28 * 3;
    }
    else if (uVar28 < 0x600) {
      iVar22 = uVar28 * 4 + -0x200;
    }
    else {
      iVar22 = uVar28 * 5 + -0x800;
    }
    uVar10 = *(ushort *)
              (puVar3 + (long)(int)(((int)uVar25 >> 0xb & 0x1fU) * 0x400 + (iVar22 >> 3)) * 2);
    uVar25 = (uint)uVar10;
    if ((uint)uVar10 == (uint)uVar37) {
      uVar25 = (uint)uVar10;
      if (fVar33 <= fVar2) {
        if (uStack0000000000000014 != uVar37) {
          *in_stack_00000068 = uVar37 + 1;
        }
        uVar25 = (uVar25 - 1) + (uint)(uVar10 == 0);
      }
      else {
        if (uVar37 != 0) {
          *in_stack_00000068 = uVar37 - 1;
        }
        uVar25 = uVar25 + (uStack0000000000000014 != uVar25);
      }
    }
    uVar28 = *in_stack_00000068;
    if (uVar20 < *in_stack_00000068) {
      uVar28 = uVar20;
    }
    if (uVar20 < uVar25) {
      uVar25 = uVar20;
    }
    in_stack_00000080 = in_stack_00000080 + 1;
    puVar32 = in_stack_00000068 + 1;
    *in_stack_00000068 = uVar28;
    in_stack_00000088 = in_stack_00000088 + 1;
    in_stack_00000068[3] = uVar25;
    in_stack_00000068 = puVar32;
  } while ((uint *)((long)&stack0x000000d0 + 0xc) != puVar32);
  uVar5 = uStack00000000000000d0;
  uVar6 = uStack00000000000000d4;
  uVar20 = 0xffffffff;
  if (-1 < (int)uStack00000000000000d0) {
    uVar20 = uStack00000000000000d0;
  }
  uVar25 = uVar20;
  if ((int)uVar20 < (int)uStack00000000000000d4) {
    uVar25 = uStack00000000000000d4;
  }
  uVar28 = (uint)((int)uVar20 < (int)uStack00000000000000d4);
  uVar20 = uStack00000000000000d8;
  uStack000000000000002c = uVar20;
  if ((int)uVar25 < (int)uVar20) {
    uVar28 = 2;
    uVar25 = uVar20;
  }
  uVar8 = uStack00000000000000dc;
  uStack0000000000000064 = uVar25;
  if ((int)uVar25 < (int)uStack00000000000000dc) {
    uVar28 = 0;
    uStack0000000000000064 = uStack00000000000000dc;
  }
  uVar26 = (uint)((int)uVar25 < (int)uStack00000000000000dc);
  uVar25 = uStack00000000000000e0;
  uVar19 = uStack00000000000000e4;
  uVar17 = uStack00000000000000dc;
  if ((int)uStack0000000000000064 < (int)uStack00000000000000e0) {
    if ((int)uStack00000000000000e0 < (int)uStack00000000000000e4) {
LAB_00102250:
      lVar14 = 2;
      uVar23 = uStack00000000000000d0;
      uVar24 = uStack00000000000000e4;
      uStack0000000000000064 = uStack00000000000000e4;
    }
    else {
      uStack000000000000002c = uVar6;
      lVar14 = 1;
      uVar23 = uStack00000000000000d0;
      uVar20 = uVar6;
      uVar24 = uStack00000000000000e0;
      uStack0000000000000064 = uStack00000000000000e0;
    }
LAB_0010198a:
    uStack00000000000000d0 = uVar20;
    *(uint *)((long)&stack0x000000d0 + lVar14 * 4) = uVar23;
    uStack00000000000000dc = uVar24;
    *(uint *)((long)&stack0x000000d0 + lVar14 * 4 + 0xc) = uVar17;
    uVar23 = uVar20;
  }
  else {
    if ((int)uStack0000000000000064 < (int)uStack00000000000000e4) goto LAB_00102250;
    lVar29 = (long)(int)uVar28;
    uStack000000000000002c =
         *(uint *)((long)&stack0x000000d0 + ((long)(int)(uVar26 ^ 1) * 3 + lVar29) * 4);
    uVar24 = uStack00000000000000dc;
    uVar23 = uStack00000000000000d0;
    if (uVar26 != 1) {
      _uStack00000000000000e0 = _uStack00000000000000d4;
      auVar36._12_4_ = uStack00000000000000d0;
      auVar36._8_4_ = uVar19;
      auVar36._4_4_ = uVar25;
      auVar36._0_4_ = uStack00000000000000dc;
      _uStack00000000000000d0 = auVar36;
      uVar24 = uVar5;
      uVar23 = uVar8;
    }
    if (uVar28 != 0) {
      lVar14 = (long)(int)uVar28;
      uVar20 = *(uint *)((long)&stack0x000000d0 + lVar29 * 4);
      uVar17 = uVar24;
      uVar24 = *(uint *)((long)&stack0x000000d0 + lVar29 * 4 + 0xc);
      goto LAB_0010198a;
    }
  }
  iStack0000000000000028 = 2;
  uVar20 = 0;
  uStack0000000000000048 = 0xffffffff;
  while( true ) {
    uVar25 = uStack0000000000000048;
    uStack0000000000000014 = uVar24 - uStack00000000000000e0;
    if ((int)uStack0000000000000014 < 0) {
      uStack0000000000000014 = 0;
      bVar4 = true;
      uVar28 = uVar24;
    }
    else if (iVar15 < (int)uStack0000000000000014) {
      bVar4 = true;
      uStack0000000000000014 = iVar15;
      uVar28 = uVar24 - iVar15;
    }
    else {
      bVar4 = false;
      uVar28 = uStack00000000000000e0;
    }
    if ((int)(uVar24 - uStack00000000000000e4) < 0) {
      bVar4 = true;
      uVar19 = uVar24;
    }
    else {
      uVar19 = uStack00000000000000e4;
      if (iVar15 < (int)(uVar24 - uStack00000000000000e4)) {
        bVar4 = true;
        uVar19 = uVar24 - iVar15;
      }
    }
    iVar22 = uVar24 - uVar23;
    if (iVar22 < 0) {
      bVar4 = true;
      uVar17 = uVar28;
      uVar26 = uVar19;
      uVar30 = uVar24;
    }
    else if (iStack0000000000000074 < iVar22) {
      bVar4 = true;
      uVar17 = uVar28 - iStack0000000000000074;
      uVar26 = uVar19 - iStack0000000000000074;
      uVar30 = uVar24 - iStack0000000000000074;
    }
    else {
      uVar17 = uVar28 - iVar22;
      uVar26 = uVar19 - iVar22;
      uVar30 = uVar23;
    }
    uVar5 = uStack00000000000000d4;
    if ((int)(uVar17 - uStack00000000000000d4) < iStack000000000000001c) {
      bVar4 = true;
      uVar27 = iStack000000000000005c + uVar17;
    }
    else {
      uVar27 = uStack00000000000000d4;
      if (iVar1 < (int)(uVar17 - uStack00000000000000d4)) {
        bVar4 = true;
        uVar27 = uVar17 - iVar1;
      }
    }
    uVar7 = _uStack00000000000000d4;
    uStack0000000000000024 = uStack00000000000000d8;
    if ((int)(uVar26 - uStack00000000000000d8) < iStack000000000000001c) {
      bVar4 = true;
      uVar17 = iStack000000000000005c + uVar26;
    }
    else {
      uVar17 = uStack00000000000000d8;
      if (iVar1 < (int)(uVar26 - uStack00000000000000d8)) {
        bVar4 = true;
        uVar17 = uVar26 - iVar1;
      }
    }
    uVar26 = uVar24;
    if ((int)uVar12 <= (int)uVar24) {
      uVar26 = uVar12;
    }
    if ((int)uVar24 < 0) {
      uVar26 = uVar20;
    }
    uVar16 = uVar28;
    if ((int)uVar12 <= (int)uVar28) {
      uVar16 = uVar12;
    }
    if ((int)uVar28 < 0) {
      uVar16 = 0;
    }
    uStack000000000000004c = uVar19;
    if ((int)uVar12 <= (int)uVar19) {
      uStack000000000000004c = uVar12;
    }
    if ((int)uVar19 < 0) {
      uStack000000000000004c = 0;
    }
    uVar28 = uVar30;
    if ((int)uVar12 <= (int)uVar30) {
      uVar28 = uVar12;
    }
    if ((int)uVar30 < 0) {
      uVar28 = uVar20;
    }
    uVar19 = uVar27;
    if ((int)uVar12 <= (int)uVar27) {
      uVar19 = uVar12;
    }
    if ((int)uVar27 < 0) {
      uVar19 = uVar20;
    }
    uVar30 = uVar17;
    if ((int)uVar12 <= (int)uVar17) {
      uVar30 = uVar12;
    }
    if ((int)uVar17 < 0) {
      uVar30 = 0;
    }
    if ((!bVar4) || (uStack000000000000002c != uStack0000000000000064)) break;
    uVar26 = (uVar26 - uVar24) * (uVar26 - uVar24);
    uVar28 = (uStack000000000000004c - uStack00000000000000e4) *
             (uStack000000000000004c - uStack00000000000000e4) +
             (uVar16 - uStack00000000000000e0) * (uVar16 - uStack00000000000000e0) + uVar26 +
             (uVar19 - uVar5) * (uVar19 - uVar5) + (uVar28 - uVar23) * (uVar28 - uVar23) +
             (uVar30 - uStack00000000000000d8) * (uVar30 - uStack00000000000000d8);
    if (uVar28 < uStack0000000000000048) {
      uStack0000000000000048 = uVar28;
    }
    uVar24 = uStack00000000000000d0;
    uVar23 = uStack00000000000000dc;
    uStack00000000000000dc = uStack00000000000000d0;
    uStack00000000000000d8 = uStack00000000000000e4;
    uStack00000000000000d4 = uStack00000000000000e0;
    uStack00000000000000d0 = uVar23;
    _uStack00000000000000e0 = uVar7;
    uVar28 = uVar25;
    if (iStack0000000000000028 == 1) break;
    iStack0000000000000028 = 1;
    _uStack00000000000000e0 = uVar7;
  }
  if (uVar31 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00101e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)(&DAT_0018a1b8 + *(int *)(&DAT_0018a1b8 + unaff_R15 * 4)))
                       (uVar26,uVar28,&DAT_0018a1b8 + *(int *)(&DAT_0018a1b8 + unaff_R15 * 4));
    return uVar13;
  }
  uVar13 = FUN_00101e68();
  return uVar13;
LAB_00102491:
  uVar37 = CONCAT11((char)uVar18,(char)uVar37) | 0x8080;
LAB_001024a4:
  cStack00000000000000b6 = '\0';
  uVar31 = uVar12;
  if (in_stack_000003f0 != 0x14) goto LAB_00101f29;
  goto LAB_00101f75;
}



/* basisu::compute_block_error(unsigned short const*, unsigned short const*,
   basisu::astc_hdr_codec_options const&) */

double basisu::compute_block_error(ushort *param_1,ushort *param_2,astc_hdr_codec_options *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = 0.0;
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 3;
    dVar3 = (double)(uint)((float)((uint)*puVar1 << 0xd) * _LC19 + _LC20) -
            (double)(uint)((float)((uint)*param_2 << 0xd) * _LC19 + _LC20);
    dVar6 = (double)(uint)((float)((uint)puVar1[1] << 0xd) * _LC19 + _LC20) -
            (double)(uint)((float)((uint)param_2[1] << 0xd) * _LC19 + _LC20);
    dVar4 = (double)(uint)((float)((uint)puVar1[2] << 0xd) * _LC19 + _LC20) -
            (double)(uint)((float)((uint)param_2[2] << 0xd) * _LC19 + _LC20);
    dVar5 = dVar5 + dVar3 * dVar3 * (double)*(float *)(param_3 + 0x48) +
                    dVar6 * dVar6 * (double)*(float *)(param_3 + 0x4c) + dVar4 * dVar4;
    param_2 = param_2 + 3;
    puVar1 = puVar2;
  } while (puVar2 != param_1 + 0x30);
  return dVar5;
}



/* basisu::astc_hdr_refine_weights(unsigned short const*, basisu::astc_hdr_pack_results&,
   basisu::astc_hdr_codec_options const&, float, bool*) [clone .part.0] */

void basisu::astc_hdr_refine_weights
               (ushort *param_1,astc_hdr_pack_results *param_2,astc_hdr_codec_options *param_3,
               float param_4,bool *param_5)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ushort *puVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  double *pdVar13;
  int iVar14;
  undefined1 *puVar15;
  double *pdVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  double dVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined1 local_298 [16];
  bc6h_block local_288 [16];
  ushort local_278 [48];
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined4 local_190 [30];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_218 = _LC18;
  dStack_210 = _LC18;
  local_208 = _LC18;
  dStack_200 = _LC18;
  lVar17 = (ulong)*(uint *)(param_2 + 0x28) * 3;
  local_1f8 = _LC18;
  dStack_1f0 = _LC18;
  local_1e8 = _LC18;
  dStack_1e0 = _LC18;
  local_1d8 = _LC18;
  dStack_1d0 = _LC18;
  local_1c8 = _LC18;
  dStack_1c0 = _LC18;
  local_1b8 = _LC18;
  dStack_1b0 = _LC18;
  iVar1 = *(char *)((long)&astc_helpers::g_ise_range_table + lVar17 + 2) * 4 + 1 +
          *(char *)((long)&astc_helpers::g_ise_range_table + lVar17 + 1) * 2;
  local_1a8 = _LC18;
  dStack_1a0 = _LC18;
  local_298 = (undefined1  [16])0x0;
  bVar3 = *(byte *)((long)&astc_helpers::g_ise_range_table + lVar17) & 0x1f;
  local_2a0 = 0x3f800000;
  local_2a8 = *(undefined8 *)(param_3 + 0x48);
  if (iVar1 << bVar3 != 0) {
    iVar14 = 0;
    do {
      local_118 = *(undefined8 *)param_2;
      uStack_110 = *(undefined8 *)(param_2 + 8);
      local_e8 = *(undefined8 *)(param_2 + 0x30);
      uStack_e0 = *(undefined8 *)(param_2 + 0x38);
      uVar22 = (undefined1)iVar14;
      local_108 = *(undefined8 *)(param_2 + 0x10);
      uStack_100 = *(undefined8 *)(param_2 + 0x18);
      local_c8 = *(undefined8 *)(param_2 + 0x50);
      uStack_c0 = *(undefined8 *)(param_2 + 0x58);
      uVar23 = CONCAT22(CONCAT11(uVar22,uVar22),CONCAT11(uVar22,uVar22));
      local_f8 = *(undefined8 *)(param_2 + 0x20);
      uStack_f0 = *(undefined8 *)(param_2 + 0x28);
      local_a8 = *(undefined8 *)(param_2 + 0x70);
      uStack_a0 = *(undefined8 *)(param_2 + 0x78);
      local_d8 = *(undefined8 *)(param_2 + 0x40);
      uStack_d0 = *(undefined8 *)(param_2 + 0x48);
      local_88 = *(undefined8 *)(param_2 + 0x90);
      uStack_80 = *(undefined8 *)(param_2 + 0x98);
      local_b8 = *(undefined8 *)(param_2 + 0x60);
      uStack_b0 = *(undefined8 *)(param_2 + 0x68);
      local_68 = *(undefined8 *)(param_2 + 0xb0);
      uStack_60 = *(undefined8 *)(param_2 + 0xb8);
      local_98 = *(undefined8 *)(param_2 + 0x80);
      uStack_90 = *(undefined8 *)(param_2 + 0x88);
      local_78 = *(undefined8 *)(param_2 + 0xa0);
      uStack_70 = *(undefined8 *)(param_2 + 0xa8);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_c8._0_4_ = uVar23;
      uStack_c0._0_4_ = uVar23;
      local_58 = *(undefined8 *)(param_2 + 0xc0);
      uStack_50 = *(undefined8 *)(param_2 + 200);
      astc_helpers::decode_block((log_astc_block *)&local_108,&local_198,4,4,2);
      basist::astc_hdr_transcode_to_bc6h((log_astc_block *)&local_108,local_288);
      lVar18 = 0;
      basisu::unpack_bc6h(local_288,local_278,false,0xc);
      lVar17 = 0;
      pdVar16 = &local_1f8;
      puVar5 = &local_198;
      do {
        pdVar13 = pdVar16 + -4;
        lVar10 = (long)local_278 + lVar18;
        puVar15 = local_298 + lVar17;
        lVar12 = (long)param_1 + lVar18;
        puVar7 = puVar5;
        do {
          lVar8 = 0;
          dVar25 = 0.0;
          do {
            dVar26 = (double)*(float *)((long)&local_2a8 + lVar8 * 2);
            dVar27 = (double)(uint)((float)((uint)*(ushort *)(lVar12 + lVar8) << 0xd) * _LC19 +
                                   _LC20);
            puVar11 = (ushort *)((long)puVar7 + lVar8);
            puVar9 = (ushort *)(lVar10 + lVar8);
            lVar8 = lVar8 + 2;
            dVar19 = (double)(uint)((float)((uint)*puVar11 << 0xd) * _LC19 + _LC20) - dVar27;
            dVar27 = (double)(uint)((float)((uint)*puVar9 << 0xd) * _LC19 + _LC20) - dVar27;
            dVar25 = dVar25 + dVar19 * dVar19 * dVar26 * (double)(_LC23 - param_4) +
                              dVar27 * dVar27 * dVar26 * (double)param_4;
          } while (lVar8 != 6);
          if (dVar25 < *pdVar13) {
            *puVar15 = uVar22;
            *pdVar13 = dVar25;
          }
          pdVar13 = pdVar13 + 1;
          puVar15 = puVar15 + 1;
          lVar12 = lVar12 + 6;
          puVar7 = puVar7 + 1;
          lVar10 = lVar10 + 6;
        } while (pdVar16 != pdVar13);
        lVar17 = lVar17 + 4;
        pdVar16 = pdVar16 + 4;
        lVar18 = lVar18 + 0x18;
        puVar5 = puVar5 + 4;
      } while (lVar17 != 0x10);
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar1 << bVar3);
  }
  uVar4 = 0;
  while (param_2[uVar4 + 0x4c] ==
         *(astc_hdr_pack_results *)
          (local_298 + (ulong)((uint)uVar4 & 3) + (ulong)(uint)((int)(uVar4 >> 2) * 4))) {
    uVar4 = uVar4 + 1;
    if (uVar4 == 0x10) goto LAB_00102c2d;
  }
  puVar5 = &local_198;
  *(undefined8 *)(param_2 + 0x4c) = local_298._0_8_;
  *(undefined8 *)(param_2 + 0x54) = local_298._8_8_;
  basist::astc_hdr_transcode_to_bc6h
            ((log_astc_block *)(param_2 + 0x10),(bc6h_block *)(param_2 + 0xbe));
  astc_helpers::decode_block((log_astc_block *)(param_2 + 0x10),puVar5,4,4,2);
  puVar11 = local_278;
  do {
    puVar7 = puVar5 + 4;
    puVar6 = puVar5;
    puVar9 = puVar11;
    do {
      uVar23 = *(undefined4 *)(puVar6 + 1);
      puVar5 = puVar6 + 2;
      uVar24 = *(undefined4 *)((long)puVar6 + 4);
      uVar2 = *(undefined4 *)((long)puVar6 + 0xc);
      *(undefined4 *)puVar9 = *(undefined4 *)puVar6;
      auVar21._0_2_ = (undefined2)uVar23;
      uVar24 = CONCAT22(auVar21._0_2_,(short)uVar24);
      auVar21._2_2_ = (short)uVar2;
      auVar21._4_4_ =
           (int)(CONCAT26((short)((uint)uVar2 >> 0x10),
                          CONCAT24((short)((uint)uVar23 >> 0x10),uVar23)) >> 0x20);
      auVar21._8_8_ = 0;
      auVar21 = pshuflw(auVar21,auVar21,0xe6);
      *(undefined4 *)(puVar9 + 2) = uVar24;
      *(int *)(puVar9 + 4) = auVar21._0_4_;
      puVar6 = puVar5;
      puVar9 = puVar9 + 6;
    } while (puVar5 != puVar7);
    puVar11 = puVar11 + 0xc;
  } while (puVar5 != &local_118);
  uVar20 = compute_block_error(param_1,local_278,param_3);
  *(undefined8 *)param_2 = uVar20;
  if (param_5 != (bool *)0x0) {
    *param_5 = true;
  }
LAB_00102c2d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::astc_hdr_enc_init() */

void basisu::astc_hdr_enc_init(void)

{
  uint *puVar1;
  byte bVar2;
  float fVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  uint uVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  byte bVar21;
  byte *pbVar22;
  float *pfVar23;
  long lVar24;
  undefined1 *puVar25;
  long in_FS_OFFSET;
  float fVar26;
  float fVar27;
  void *local_d8;
  ulong local_d0;
  uint local_c8 [16];
  uint auStack_88 [18];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (g_astc_hdr_enc_initialized == '\0') {
    basist::astc_hdr_core_init();
    astc_helpers::init_tables(true);
    local_d8 = (void *)0x0;
    local_d0 = 0;
    basisu::elemental_vector::increase_capacity
              ((uint)&local_d8,false,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset((void *)((long)local_d8 + (local_d0 & 0xffffffff) * 4),0,
           (ulong)(0x10000 - (int)local_d0) << 2);
    uVar16 = 0;
    do {
      uVar12 = (uint)uVar16 & 0x7ff;
      if ((uVar16 & 0x600) == 0) {
        iVar13 = uVar12 * 3;
      }
      else if (uVar12 < 0x600) {
        iVar13 = uVar12 * 4 + -0x200;
      }
      else {
        iVar13 = uVar12 * 5 + -0x800;
      }
      uVar6 = ((int)(uint)uVar16 >> 0xb) * 0x400 + (iVar13 >> 3);
      (&g_qlog16_to_half)[uVar16] = (ushort)uVar6;
      uVar12 = uVar6 & 0x3ff;
      uVar5 = (ushort)uVar6 >> 10;
      if (uVar5 == 0) {
        uVar15 = 0;
        if ((uVar6 & 0x3ff) != 0) {
          uVar6 = 0;
          do {
            uVar15 = uVar6;
            uVar12 = uVar12 * 2;
            uVar6 = uVar15 - 1;
          } while ((uVar12 & 0x400) == 0);
          uVar12 = uVar12 & 0xfffffbff;
LAB_00102e4d:
          uVar15 = (uVar15 + 0x70) * 0x800000 | uVar12 << 0xd;
        }
      }
      else {
        uVar15 = (uint)uVar5;
        if (uVar5 != 0x1f) goto LAB_00102e4d;
        uVar15 = 0x7f800000;
        if ((uVar6 & 0x3ff) != 0) {
          uVar15 = uVar12 << 0xd | 0x7f800000;
        }
      }
      *(uint *)((long)local_d8 + uVar16 * 4) = uVar15;
      uVar12 = _LC26;
      fVar3 = _LC16;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x10000);
    bVar21 = 9;
    lVar24 = 7;
    do {
      lVar9 = *(long *)(lVar24 * 8 + 0x18a808);
      uVar16 = 0;
      do {
        if ((~(uint)uVar16 & 0x7c00) != 0) {
          uVar6 = (uint)uVar16 & 0x3ff;
          uVar5 = (ushort)uVar16 >> 10;
          if (uVar5 == 0) {
            fVar14 = 0.0;
            if ((uVar16 & 0x3ff) != 0) {
              uVar4 = 0;
              do {
                uVar15 = uVar4;
                uVar6 = uVar6 * 2;
                uVar4 = uVar15 - 1;
              } while ((uVar6 & 0x400) == 0);
              uVar6 = uVar6 & 0xfffffbff;
LAB_00102ee7:
              fVar14 = (float)((uVar15 + 0x70) * 0x800000 | uVar6 << 0xd);
            }
          }
          else {
            uVar15 = (uint)uVar5;
            if (uVar5 != 0x1f) goto LAB_00102ee7;
            fVar14 = (float)(uVar6 << 0xd | 0x7f800000);
            if ((uVar16 & 0x3ff) == 0) {
              fVar14 = fVar3;
            }
          }
          iVar13 = 0;
          iVar7 = 0;
          fVar27 = _LC25;
          do {
            fVar26 = *(float *)((long)local_d8 + (ulong)(uint)(iVar7 << (bVar21 & 0x1f)) * 4);
            if ((!NAN(fVar26)) &&
               (fVar26 = (float)((uint)(fVar26 - fVar14) & uVar12), fVar26 < fVar27)) {
              fVar27 = fVar26;
              iVar13 = iVar7;
            }
            iVar7 = iVar7 + 1;
          } while (1 << ((byte)lVar24 & 0x1f) != iVar7);
          *(short *)(lVar9 + uVar16 * 2) = (short)iVar13;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x8000);
      lVar24 = lVar24 + 1;
      bVar21 = bVar21 - 1;
    } while (lVar24 != 0xd);
    free(local_d8);
    fVar14 = _LC27;
    fVar3 = _LC23;
    pbVar22 = g_ise_weight_lerps + 0x21;
    pfVar23 = (float *)(g_astc_ls_weights_ise + 0x180);
    lVar24 = 1;
    do {
      bVar21 = pbVar22[-1];
      if (bVar21 != 0) {
        pbVar8 = pbVar22;
        pfVar17 = pfVar23;
        do {
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          fVar26 = (float)bVar2 * fVar14;
          fVar27 = fVar3 - fVar26;
          *pfVar17 = fVar26 * fVar26;
          pfVar17[1] = fVar26 * fVar27;
          pfVar17[2] = fVar27 * fVar27;
          pfVar17[3] = fVar26;
          pfVar17 = pfVar17 + 4;
        } while ((byte *)(lVar24 * 0x20 + 0x18a222 + (ulong)(bVar21 - 1)) != pbVar8);
      }
      lVar24 = lVar24 + 1;
      pbVar22 = pbVar22 + 0x20;
      pfVar23 = pfVar23 + 0x60;
    } while (lVar24 != 0xb);
    puVar25 = g_ise_weight_lerps;
    lVar24 = 0x108ef8;
    uVar16 = 1;
    do {
      puVar25 = puVar25 + 0x20;
      bVar21 = *puVar25;
      uVar12 = (uint)bVar21;
      if (bVar21 != 0) {
        lVar9 = 0;
        do {
          local_c8[lVar9] = (uint)(byte)puVar25[lVar9 + 1] * 0x100 + (int)lVar9;
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < uVar12);
        uVar10 = (ulong)bVar21 * 4;
        puVar1 = local_c8 + bVar21;
        uVar18 = (long)uVar10 >> 2;
        lVar9 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        std::__introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (local_c8,puVar1,(long)(int)lVar9 * 2);
        if (uVar10 < 0x41) {
          std::__insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>(local_c8,puVar1);
        }
        else {
          std::__insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>
                    (local_c8,auStack_88);
          puVar19 = auStack_88;
          do {
            while( true ) {
              uVar6 = *puVar19;
              uVar15 = puVar19[-1];
              puVar20 = puVar19;
              if (uVar15 <= uVar6) break;
              do {
                puVar11 = puVar20 + -1;
                *puVar20 = uVar15;
                uVar15 = puVar20[-2];
                puVar20 = puVar11;
              } while (uVar6 < uVar15);
              puVar19 = puVar19 + 1;
              *puVar11 = uVar6;
              if (puVar1 == puVar19) goto LAB_001030dc;
            }
            puVar20 = puVar19 + 1;
            *puVar19 = uVar6;
            puVar19 = puVar20;
          } while (puVar1 != puVar20);
        }
LAB_001030dc:
        lVar9 = 0;
        do {
          *(char *)(lVar24 + lVar9) = (char)local_c8[lVar9];
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < uVar12);
        lVar9 = 0;
        do {
          g_map_astc_to_linear_order[(ulong)*(byte *)(lVar24 + lVar9) + uVar16 * 0x18] = (char)lVar9
          ;
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < uVar12);
      }
      uVar12 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar12;
      lVar24 = lVar24 + 0x18;
    } while (uVar12 != 0xb);
    g_astc_hdr_enc_initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::astc_hdr_pack_results_to_block(basist::astc_blk&, basisu::astc_hdr_pack_results const&)
    */

void basisu::astc_hdr_pack_results_to_block(astc_blk *param_1,astc_hdr_pack_results *param_2)

{
  undefined8 uVar1;
  
  if (g_astc_hdr_enc_initialized == '\0') {
    return;
  }
  if (param_2[0xce] != (astc_hdr_pack_results)0x0) {
    uVar1 = *(undefined8 *)(param_2 + 0xb6);
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0xae);
    *(undefined8 *)(param_1 + 8) = uVar1;
    return;
  }
  astc_helpers::pack_astc_block((astc_block *)param_1,(log_astc_block *)(param_2 + 0x10),(int *)0x0)
  ;
  return;
}



/* basisu::astc_hdr_refine_weights(unsigned short const*, basisu::astc_hdr_pack_results&,
   basisu::astc_hdr_codec_options const&, float, bool*) */

undefined8
basisu::astc_hdr_refine_weights
          (ushort *param_1,astc_hdr_pack_results *param_2,astc_hdr_codec_options *param_3,
          float param_4,bool *param_5)

{
  if (param_5 != (bool *)0x0) {
    *param_5 = false;
  }
  if (param_2[0xce] == (astc_hdr_pack_results)0x0) {
    astc_hdr_refine_weights(param_1,param_2,param_3,param_4,param_5);
    return 1;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::astc_hdr_block_stats::update(basisu::astc_hdr_pack_results const&) */

undefined8 * basisu::astc_hdr_block_stats::update(astc_hdr_pack_results *param_1)

{
  ray *prVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long in_RCX;
  ulong uVar6;
  undefined8 *extraout_RDX;
  ulong uVar7;
  undefined8 *in_RSI;
  undefined8 *puVar8;
  pthread_mutex_t *__mutex;
  undefined8 *puVar9;
  vec_interval *in_R8;
  undefined1 *in_R9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_7c;
  undefined8 uStack_78;
  float fStack_70;
  undefined8 uStack_68;
  float fStack_60;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  long lStack_40;
  astc_hdr_pack_results *paStack_38;
  astc_hdr_pack_results *paStack_30;
  undefined8 uVar12;
  
  puVar8 = in_RSI;
  uVar3 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (uVar3 == 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    if (*(char *)((long)in_RSI + 0xad) != '\0') {
      *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
    }
    if (*(char *)((long)in_RSI + 0xce) == '\0') {
      lVar5 = (long)*(int *)(in_RSI + 5);
      if (*(int *)((long)in_RSI + 0x3c) != 7) {
        *(int *)(param_1 + (ulong)*(uint *)(in_RSI + 0x14) * 4 + 0x110) =
             *(int *)(param_1 + (ulong)*(uint *)(in_RSI + 0x14) * 4 + 0x110) + 1;
        if (*(char *)((long)in_RSI + 0xac) == '\0') {
          iVar4 = *(int *)((long)in_RSI + 0x34);
        }
        else {
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
          iVar4 = *(int *)((long)in_RSI + 0x34);
        }
        if (iVar4 != 2) {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          *(int *)(param_1 + lVar5 * 4 + 0xb8) = *(int *)(param_1 + lVar5 * 4 + 0xb8) + 1;
          uVar3 = pthread_mutex_unlock((pthread_mutex_t *)param_1);
          return (undefined8 *)(ulong)uVar3;
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        *(int *)(param_1 + (ulong)*(uint *)((long)in_RSI + 0xa4) * 4 + 0x110) =
             *(int *)(param_1 + (ulong)*(uint *)((long)in_RSI + 0xa4) * 4 + 0x110) + 1;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        *(int *)(param_1 + lVar5 * 4 + 0xe4) = *(int *)(param_1 + lVar5 * 4 + 0xe4) + 1;
        *(int *)(param_1 + (ulong)*(uint *)(in_RSI + 0x15) * 4 + 0x134) =
             *(int *)(param_1 + (ulong)*(uint *)(in_RSI + 0x15) * 4 + 0x134) + 1;
        uVar3 = pthread_mutex_unlock((pthread_mutex_t *)param_1);
        return (undefined8 *)(ulong)uVar3;
      }
      *(int *)(param_1 + (ulong)*(uint *)(in_RSI + 0x14) * 4 + 0xa0) =
           *(int *)(param_1 + (ulong)*(uint *)(in_RSI + 0x14) * 4 + 0xa0) + 1;
      if (*(int *)((long)in_RSI + 0x34) != 2) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        *(int *)(param_1 + lVar5 * 4 + 0x48) = *(int *)(param_1 + lVar5 * 4 + 0x48) + 1;
        uVar3 = pthread_mutex_unlock((pthread_mutex_t *)param_1);
        return (undefined8 *)(ulong)uVar3;
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_1 + (ulong)*(uint *)((long)in_RSI + 0xa4) * 4 + 0xa0) =
           *(int *)(param_1 + (ulong)*(uint *)((long)in_RSI + 0xa4) * 4 + 0xa0) + 1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + lVar5 * 4 + 0x74) = *(int *)(param_1 + lVar5 * 4 + 0x74) + 1;
      *(int *)(param_1 + (ulong)*(uint *)(in_RSI + 0x15) * 4 + 0x134) =
           *(int *)(param_1 + (ulong)*(uint *)(in_RSI + 0x15) * 4 + 0x134) + 1;
    }
    else {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    uVar3 = pthread_mutex_unlock((pthread_mutex_t *)param_1);
    return (undefined8 *)(ulong)uVar3;
  }
  __mutex = (pthread_mutex_t *)(ulong)uVar3;
  std::__throw_system_error(uVar3);
  paStack_38 = (astc_hdr_pack_results *)0x1033c0;
  paStack_30 = param_1;
  uVar3 = pthread_mutex_lock(__mutex);
  if (uVar3 == 0) {
    if (__mutex[1].__data.__lock != 0) {
      uVar7 = 1;
      paStack_38 = (astc_hdr_pack_results *)0x1033eb;
      puts("\nLow-level ASTC Encoder Statistics:");
      paStack_38 = (astc_hdr_pack_results *)0x103401;
      __printf_chk(2,"Total blocks: %u\n",__mutex[1].__data.__lock);
      paStack_38 = (astc_hdr_pack_results *)0x103442;
      __printf_chk((double)(((float)*(uint *)((long)__mutex + 0x30) * __LC30) /
                           (float)(uint)__mutex[1].__data.__lock),2,"Total solid: %u %3.2f%%\n",
                   *(uint *)((long)__mutex + 0x30));
      paStack_38 = (astc_hdr_pack_results *)0x103486;
      __printf_chk((double)(((float)*(uint *)((long)__mutex + 0x1b4) * __LC30) /
                           (float)(uint)__mutex[1].__data.__lock),2,"Total refined: %u %3.2f%%\n",
                   *(uint *)((long)__mutex + 0x1b4));
      paStack_38 = (astc_hdr_pack_results *)0x1034c7;
      __printf_chk((double)(((float)*(uint *)((long)__mutex + 0x3c) * __LC30) /
                           (float)(uint)__mutex[1].__data.__lock),2,
                   "Total mode 11, 1 partition: %u %3.2f%%\n",*(uint *)((long)__mutex + 0x3c));
      paStack_38 = (astc_hdr_pack_results *)0x103508;
      __printf_chk((double)(((float)*(uint *)((long)__mutex + 0x44) * __LC30) /
                           (float)(uint)__mutex[1].__data.__lock),2,
                   "Total mode 11, 1 partition, constrained weights: %u %3.2f%%\n",
                   *(uint *)((long)__mutex + 0x44));
      paStack_38 = (astc_hdr_pack_results *)0x103549;
      __printf_chk((double)(((float)*(uint *)((long)__mutex + 0x40) * __LC30) /
                           (float)(uint)__mutex[1].__data.__lock),2,
                   "Total mode 11, 2 partition: %u %3.2f%%\n",*(uint *)((long)__mutex + 0x40));
      paStack_38 = (astc_hdr_pack_results *)0x10358a;
      __printf_chk((double)(((float)*(uint *)((long)__mutex + 0x34) * __LC30) /
                           (float)(uint)__mutex[1].__data.__lock),2,
                   "Total mode 7, 1 partition: %u %3.2f%%\n",*(uint *)((long)__mutex + 0x34));
      paStack_38 = (astc_hdr_pack_results *)0x1035cb;
      __printf_chk((double)(((float)*(uint *)((long)__mutex + 0x38) * __LC30) /
                           (float)(uint)__mutex[1].__data.__lock),2,
                   "Total mode 7, 2 partition: %u %3.2f%%\n",*(uint *)((long)__mutex + 0x38));
      paStack_38 = (astc_hdr_pack_results *)0x10360c;
      __printf_chk((double)(((float)*(uint *)((long)__mutex + 0x2c) * __LC30) /
                           (float)(uint)__mutex[1].__data.__lock),2,
                   "Total 2 partitions: %u %3.2f%%\n",*(uint *)((long)__mutex + 0x2c));
      paStack_38 = (astc_hdr_pack_results *)0x103616;
      putchar(10);
      paStack_38 = (astc_hdr_pack_results *)0x103622;
      puts("ISE texel weight range histogram mode 11:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        paStack_38 = (astc_hdr_pack_results *)0x103644;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)__mutex + lVar5 + 0xb8));
      } while (uVar7 != 9);
      uVar7 = 1;
      paStack_38 = (astc_hdr_pack_results *)0x103659;
      putchar(10);
      paStack_38 = (astc_hdr_pack_results *)0x103665;
      puts("ISE texel weight range histogram mode 11, 2 partition:");
      paStack_38 = (astc_hdr_pack_results *)0x10367f;
      __printf_chk(2,"%u %u\n",1,*(undefined4 *)((long)__mutex + 0xe8));
      paStack_38 = (astc_hdr_pack_results *)0x103699;
      __printf_chk(2,"%u %u\n",2,*(undefined4 *)((long)__mutex + 0xec));
      paStack_38 = (astc_hdr_pack_results *)0x1036a3;
      putchar(10);
      paStack_38 = (astc_hdr_pack_results *)0x1036af;
      puts("ISE texel weight range histogram mode 7:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        paStack_38 = (astc_hdr_pack_results *)0x1036c9;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)__mutex + lVar5 + 0x48));
      } while (uVar7 != 9);
      uVar7 = 1;
      paStack_38 = (astc_hdr_pack_results *)0x1036de;
      putchar(10);
      paStack_38 = (astc_hdr_pack_results *)0x1036ea;
      puts("ISE texel weight range histogram mode 7, 2 partition:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        paStack_38 = (astc_hdr_pack_results *)0x103709;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)__mutex + lVar5 + 0x74));
      } while (uVar7 != 6);
      uVar7 = 0;
      paStack_38 = (astc_hdr_pack_results *)0x10371b;
      putchar(10);
      paStack_38 = (astc_hdr_pack_results *)0x103727;
      puts("Mode 11 submode histogram:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        paStack_38 = (astc_hdr_pack_results *)0x10374c;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)__mutex + lVar5 + 0x110));
      } while (uVar7 != 9);
      uVar7 = 0;
      paStack_38 = (astc_hdr_pack_results *)0x10375e;
      putchar(10);
      paStack_38 = (astc_hdr_pack_results *)0x10376a;
      puts("Mode 7 submode histogram:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        paStack_38 = (astc_hdr_pack_results *)0x10378c;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)__mutex + lVar5 + 0xa0));
      } while (uVar7 != 6);
      uVar7 = 0;
      paStack_38 = (astc_hdr_pack_results *)0x1037a5;
      putchar(10);
      paStack_38 = (astc_hdr_pack_results *)0x1037b1;
      puts("Partition pattern table usage histogram:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        paStack_38 = (astc_hdr_pack_results *)0x1037d4;
        __printf_chk(2,"%u:%u ",uVar6,*(undefined4 *)((long)__mutex + lVar5 + 0x134));
      } while (uVar7 != 0x1e);
      paStack_38 = (astc_hdr_pack_results *)0x1037e6;
      puts("\n");
    }
    uVar3 = pthread_mutex_unlock(__mutex);
    return (undefined8 *)(ulong)uVar3;
  }
  puVar9 = (undefined8 *)(ulong)uVar3;
  paStack_38 = (astc_hdr_pack_results *)0x1037f9;
  fVar10 = (float)std::__throw_system_error(uVar3);
  lStack_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  fStack_50 = *(float *)(in_RCX + 0x14);
  uStack_58 = *(undefined8 *)(in_RCX + 0xc);
  lVar5 = 0;
  fVar13 = (float)*(undefined8 *)((long)puVar8 + 4);
  fVar14 = (float)((ulong)*(undefined8 *)((long)puVar8 + 4) >> 0x20);
  fVar16 = (float)((ulong)*(undefined8 *)((long)extraout_RDX + 4) >> 0x20) * fVar10 + fVar14;
  fVar15 = (float)*puVar8;
  fVar11 = (float)*extraout_RDX * fVar10 + fVar15;
  uVar12 = CONCAT44((float)((ulong)*extraout_RDX >> 0x20) * fVar10 + (float)((ulong)*puVar8 >> 0x20)
                    ,fVar11);
  uStack_78 = uVar12;
  fStack_70 = fVar16;
  while ((fVar2 = *(float *)((long)&uStack_78 + lVar5), paStack_38 = param_1,
         *(float *)(in_RCX + lVar5) <= fVar2 &&
         (prVar1 = (ray *)&uStack_58 + lVar5, fVar2 < *(float *)prVar1 || fVar2 == *(float *)prVar1)
         )) {
    lVar5 = lVar5 + 4;
    if (lVar5 == 0xc) {
      if (in_R9 != (undefined1 *)0x0) {
        *in_R9 = 1;
      }
LAB_001038b9:
      *puVar9 = uVar12;
      *(float *)(puVar9 + 1) = fVar16;
      if (lStack_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return puVar9;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  fStack_4c = fVar15 - fVar11;
  fVar13 = fVar13 - ((float)*(undefined8 *)((long)extraout_RDX + 4) * fVar10 + fVar13);
  fVar14 = fVar14 - fVar16;
  uStack_48 = CONCAT44(fVar14,fVar13);
  fVar15 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fStack_4c * fStack_4c);
  if (fVar15 != 0.0) {
    fVar15 = _LC23 / fVar15;
    fStack_4c = fStack_4c * fVar15;
    uStack_48 = CONCAT44(fVar14 * fVar15,fVar13 * fVar15);
  }
  fStack_7c = 0.0;
  uStack_58 = CONCAT44(*(float *)((long)extraout_RDX + 4) * fVar10 + *(float *)((long)puVar8 + 4),
                       fVar11);
  fStack_50 = fVar16;
  iVar4 = intersection::
          ray_aabb<basisu::vec<3u,float>,float,basisu::ray<basisu::vec<3u,float>>,basisu::vec_interval<basisu::vec<3u,float>>>
                    ((vec *)&uStack_68,&fStack_7c,(ray *)&uStack_58,in_R8);
  if (iVar4 == 1) {
    fVar16 = fStack_60;
    uVar12 = uStack_68;
  }
  goto LAB_001038b9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::astc_hdr_block_stats::print() */

undefined8 * basisu::astc_hdr_block_stats::print(void)

{
  ray *prVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long in_RCX;
  ulong uVar6;
  undefined8 *extraout_RDX;
  ulong uVar7;
  undefined8 *in_RSI;
  pthread_mutex_t *in_RDI;
  undefined8 *puVar8;
  vec_interval *in_R8;
  undefined1 *in_R9;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_64;
  undefined8 uStack_60;
  float fStack_58;
  undefined8 uStack_50;
  float fStack_48;
  undefined8 uStack_40;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uVar11;
  
  uVar3 = pthread_mutex_lock(in_RDI);
  if (uVar3 == 0) {
    if (in_RDI[1].__data.__lock != 0) {
      uVar7 = 1;
      puts("\nLow-level ASTC Encoder Statistics:");
      __printf_chk(2,"Total blocks: %u\n",in_RDI[1].__data.__lock);
      __printf_chk((double)(((float)*(uint *)((long)in_RDI + 0x30) * __LC30) /
                           (float)(uint)in_RDI[1].__data.__lock),2,"Total solid: %u %3.2f%%\n",
                   *(uint *)((long)in_RDI + 0x30));
      __printf_chk((double)(((float)*(uint *)((long)in_RDI + 0x1b4) * __LC30) /
                           (float)(uint)in_RDI[1].__data.__lock),2,"Total refined: %u %3.2f%%\n",
                   *(uint *)((long)in_RDI + 0x1b4));
      __printf_chk((double)(((float)*(uint *)((long)in_RDI + 0x3c) * __LC30) /
                           (float)(uint)in_RDI[1].__data.__lock),2,
                   "Total mode 11, 1 partition: %u %3.2f%%\n",*(uint *)((long)in_RDI + 0x3c));
      __printf_chk((double)(((float)*(uint *)((long)in_RDI + 0x44) * __LC30) /
                           (float)(uint)in_RDI[1].__data.__lock),2,
                   "Total mode 11, 1 partition, constrained weights: %u %3.2f%%\n",
                   *(uint *)((long)in_RDI + 0x44));
      __printf_chk((double)(((float)*(uint *)((long)in_RDI + 0x40) * __LC30) /
                           (float)(uint)in_RDI[1].__data.__lock),2,
                   "Total mode 11, 2 partition: %u %3.2f%%\n",*(uint *)((long)in_RDI + 0x40));
      __printf_chk((double)(((float)*(uint *)((long)in_RDI + 0x34) * __LC30) /
                           (float)(uint)in_RDI[1].__data.__lock),2,
                   "Total mode 7, 1 partition: %u %3.2f%%\n",*(uint *)((long)in_RDI + 0x34));
      __printf_chk((double)(((float)*(uint *)((long)in_RDI + 0x38) * __LC30) /
                           (float)(uint)in_RDI[1].__data.__lock),2,
                   "Total mode 7, 2 partition: %u %3.2f%%\n",*(uint *)((long)in_RDI + 0x38));
      __printf_chk((double)(((float)*(uint *)((long)in_RDI + 0x2c) * __LC30) /
                           (float)(uint)in_RDI[1].__data.__lock),2,
                   "Total 2 partitions: %u %3.2f%%\n",*(uint *)((long)in_RDI + 0x2c));
      putchar(10);
      puts("ISE texel weight range histogram mode 11:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)in_RDI + lVar5 + 0xb8));
      } while (uVar7 != 9);
      uVar7 = 1;
      putchar(10);
      puts("ISE texel weight range histogram mode 11, 2 partition:");
      __printf_chk(2,"%u %u\n",1,*(undefined4 *)((long)in_RDI + 0xe8));
      __printf_chk(2,"%u %u\n",2,*(undefined4 *)((long)in_RDI + 0xec));
      putchar(10);
      puts("ISE texel weight range histogram mode 7:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)in_RDI + lVar5 + 0x48));
      } while (uVar7 != 9);
      uVar7 = 1;
      putchar(10);
      puts("ISE texel weight range histogram mode 7, 2 partition:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)in_RDI + lVar5 + 0x74));
      } while (uVar7 != 6);
      uVar7 = 0;
      putchar(10);
      puts("Mode 11 submode histogram:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)in_RDI + lVar5 + 0x110));
      } while (uVar7 != 9);
      uVar7 = 0;
      putchar(10);
      puts("Mode 7 submode histogram:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        __printf_chk(2,"%u %u\n",uVar6,*(undefined4 *)((long)in_RDI + lVar5 + 0xa0));
      } while (uVar7 != 6);
      uVar7 = 0;
      putchar(10);
      puts("Partition pattern table usage histogram:");
      do {
        lVar5 = uVar7 * 4;
        uVar6 = uVar7 & 0xffffffff;
        uVar7 = uVar7 + 1;
        __printf_chk(2,"%u:%u ",uVar6,*(undefined4 *)((long)in_RDI + lVar5 + 0x134));
      } while (uVar7 != 0x1e);
      puts("\n");
    }
    uVar3 = pthread_mutex_unlock(in_RDI);
    return (undefined8 *)(ulong)uVar3;
  }
  puVar8 = (undefined8 *)(ulong)uVar3;
  fVar9 = (float)std::__throw_system_error(uVar3);
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  fStack_38 = *(float *)(in_RCX + 0x14);
  uStack_40 = *(undefined8 *)(in_RCX + 0xc);
  lVar5 = 0;
  fVar12 = (float)*(undefined8 *)((long)in_RSI + 4);
  fVar13 = (float)((ulong)*(undefined8 *)((long)in_RSI + 4) >> 0x20);
  fVar15 = (float)((ulong)*(undefined8 *)((long)extraout_RDX + 4) >> 0x20) * fVar9 + fVar13;
  fVar14 = (float)*in_RSI;
  fVar10 = (float)*extraout_RDX * fVar9 + fVar14;
  uVar11 = CONCAT44((float)((ulong)*extraout_RDX >> 0x20) * fVar9 + (float)((ulong)*in_RSI >> 0x20),
                    fVar10);
  uStack_60 = uVar11;
  fStack_58 = fVar15;
  while ((fVar2 = *(float *)((long)&uStack_60 + lVar5), *(float *)(in_RCX + lVar5) <= fVar2 &&
         (prVar1 = (ray *)&uStack_40 + lVar5, fVar2 < *(float *)prVar1 || fVar2 == *(float *)prVar1)
         )) {
    lVar5 = lVar5 + 4;
    if (lVar5 == 0xc) {
      if (in_R9 != (undefined1 *)0x0) {
        *in_R9 = 1;
      }
LAB_001038b9:
      *puVar8 = uVar11;
      *(float *)(puVar8 + 1) = fVar15;
      if (lStack_28 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return puVar8;
    }
  }
  fStack_34 = fVar14 - fVar10;
  fVar12 = fVar12 - ((float)*(undefined8 *)((long)extraout_RDX + 4) * fVar9 + fVar12);
  fVar13 = fVar13 - fVar15;
  uStack_30 = CONCAT44(fVar13,fVar12);
  fVar14 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fStack_34 * fStack_34);
  if (fVar14 != 0.0) {
    fVar14 = _LC23 / fVar14;
    fStack_34 = fStack_34 * fVar14;
    uStack_30 = CONCAT44(fVar13 * fVar14,fVar12 * fVar14);
  }
  fStack_64 = 0.0;
  uStack_40 = CONCAT44(*(float *)((long)extraout_RDX + 4) * fVar9 + *(float *)((long)in_RSI + 4),
                       fVar10);
  fStack_38 = fVar15;
  iVar4 = intersection::
          ray_aabb<basisu::vec<3u,float>,float,basisu::ray<basisu::vec<3u,float>>,basisu::vec_interval<basisu::vec<3u,float>>>
                    ((vec *)&uStack_50,&fStack_64,(ray *)&uStack_40,in_R8);
  if (iVar4 == 1) {
    fVar15 = fStack_48;
    uVar11 = uStack_50;
  }
  goto LAB_001038b9;
}



/* basisu::interp_color(basisu::vec<3u, float> const&, basisu::vec<3u, float> const&, float,
   basisu::vec_interval<basisu::vec<3u, float> > const&, basisu::vec_interval<basisu::vec<3u, float>
   > const&, bool*) */

basisu * __thiscall
basisu::interp_color
          (basisu *this,vec *param_1,vec *param_2,float param_3,vec_interval *param_4,
          vec_interval *param_5,bool *param_6)

{
  ray *prVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_4c;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  long local_10;
  undefined8 uVar6;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 != (bool *)0x0) {
    *param_6 = false;
  }
  fStack_20 = *(float *)(param_4 + 0x14);
  local_28 = *(undefined8 *)(param_4 + 0xc);
  lVar4 = 0;
  fVar7 = (float)*(undefined8 *)(param_1 + 4);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_3 + fVar8;
  fVar9 = (float)*(undefined8 *)param_1;
  fVar5 = (float)*(undefined8 *)param_2 * param_3 + fVar9;
  uVar6 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * param_3 +
                   (float)((ulong)*(undefined8 *)param_1 >> 0x20),fVar5);
  local_48 = uVar6;
  local_40 = fVar10;
  while ((fVar2 = *(float *)((long)&local_48 + lVar4), *(float *)(param_4 + lVar4) <= fVar2 &&
         (prVar1 = (ray *)&local_28 + lVar4, fVar2 < *(float *)prVar1 || fVar2 == *(float *)prVar1))
        ) {
    lVar4 = lVar4 + 4;
    if (lVar4 == 0xc) {
      if (param_6 != (bool *)0x0) {
        *param_6 = true;
      }
LAB_001038b9:
      *(undefined8 *)this = uVar6;
      *(float *)(this + 8) = fVar10;
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return this;
    }
  }
  fStack_1c = fVar9 - fVar5;
  fVar7 = fVar7 - ((float)*(undefined8 *)(param_2 + 4) * param_3 + fVar7);
  fVar8 = fVar8 - fVar10;
  fVar9 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fStack_1c * fStack_1c);
  if (fVar9 != 0.0) {
    fVar9 = _LC23 / fVar9;
    fStack_1c = fStack_1c * fVar9;
    fVar7 = fVar7 * fVar9;
    fVar8 = fVar8 * fVar9;
  }
  local_4c = 0.0;
  local_18 = CONCAT44(fVar8,fVar7);
  local_28 = CONCAT44(*(float *)(param_2 + 4) * param_3 + *(float *)(param_1 + 4),fVar5);
  fStack_20 = fVar10;
  iVar3 = intersection::
          ray_aabb<basisu::vec<3u,float>,float,basisu::ray<basisu::vec<3u,float>>,basisu::vec_interval<basisu::vec<3u,float>>>
                    ((vec *)&local_38,&local_4c,(ray *)&local_28,param_5);
  if (iVar3 == 1) {
    fVar10 = local_30;
    uVar6 = local_38;
  }
  goto LAB_001038b9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::compute_least_squares_endpoints_rgb(unsigned int, unsigned char const*, basisu::vec<4u,
   float> const*, basisu::vec<3u, float>*, basisu::vec<3u, float>*, basisu::vec<4u, float> const*,
   basisu::vec_interval<basisu::vec<3u, float> > const&) */

undefined8
basisu::compute_least_squares_endpoints_rgb
          (uint param_1,uchar *param_2,vec *param_3,vec *param_4,vec *param_5,vec *param_6,
          vec_interval *param_7)

{
  uint uVar1;
  byte bVar2;
  vec *pvVar3;
  undefined8 uVar4;
  long lVar5;
  vec *pvVar6;
  vec *pvVar7;
  long in_FS_OFFSET;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool local_9a;
  bool local_99;
  undefined8 local_98;
  float local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    fVar19 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar11 = 0.0;
    fVar10 = 0.0;
    pvVar6 = param_6;
    fVar16 = fVar15;
    fVar17 = fVar15;
    fVar18 = fVar15;
    fVar20 = fVar14;
    do {
      bVar2 = *param_2;
      pvVar7 = pvVar6 + 0x10;
      param_2 = param_2 + 1;
      fVar11 = fVar11 + *(float *)pvVar6;
      pvVar3 = param_3 + (ulong)bVar2 * 0x10;
      fVar9 = *(float *)(pvVar3 + 0xc);
      fVar18 = fVar18 + *(float *)pvVar3;
      fVar10 = fVar10 + *(float *)(pvVar3 + 4);
      fVar15 = fVar15 + *(float *)(pvVar3 + 8);
      fVar20 = fVar20 + *(float *)(pvVar6 + 4);
      fVar17 = fVar17 + fVar9 * *(float *)pvVar6;
      fVar19 = fVar19 + *(float *)(pvVar6 + 8);
      fVar16 = fVar16 + fVar9 * *(float *)(pvVar6 + 4);
      fVar14 = fVar14 + fVar9 * *(float *)(pvVar6 + 8);
      pvVar6 = pvVar7;
    } while (param_6 + (ulong)param_1 * 0x10 != pvVar7);
    fVar9 = fVar18 * fVar15 - fVar10 * fVar10;
    uVar4 = 0;
    if (fVar9 != 0.0) {
      lVar5 = 0;
      fVar9 = _LC23 / fVar9;
      fVar15 = fVar15 * fVar9;
      fVar10 = (float)((uint)fVar10 ^ __LC51) * fVar9;
      fVar9 = fVar9 * fVar18;
      *(float *)param_4 = fVar15 * fVar17 + (fVar11 - fVar17) * fVar10;
      *(float *)param_5 = fVar17 * fVar10 + (fVar11 - fVar17) * fVar9;
      *(float *)(param_4 + 4) = fVar15 * fVar16 + (fVar20 - fVar16) * fVar10;
      *(float *)(param_5 + 4) = fVar16 * fVar10 + (fVar20 - fVar16) * fVar9;
      *(float *)(param_4 + 8) = fVar15 * fVar14 + (fVar19 - fVar14) * fVar10;
      fVar16 = _LC52;
      *(float *)(param_5 + 8) = fVar10 * fVar14 + (fVar19 - fVar14) * fVar9;
      do {
        fVar17 = *(float *)(param_7 + lVar5 + 0xc);
        uVar1 = *(uint *)(param_5 + lVar5);
        uVar8 = -(uint)(fVar17 - *(float *)(param_7 + lVar5) < fVar16);
        *(uint *)(param_4 + lVar5) =
             (uint)*(float *)(param_7 + lVar5) & uVar8 | ~uVar8 & *(uint *)(param_4 + lVar5);
        *(uint *)(param_5 + lVar5) = (uint)fVar17 & uVar8 | ~uVar8 & uVar1;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
      fVar10 = (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20);
      fVar16 = (float)*(undefined8 *)param_5;
      fVar17 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
      fStack_84 = (float)*(undefined8 *)(param_5 + 4) - (float)*(undefined8 *)(param_4 + 4);
      fStack_80 = fVar10 - (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
      fVar18 = (float)*(undefined8 *)param_4;
      fVar19 = fVar16 - fVar18;
      fVar20 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
      fVar14 = (fVar18 + fVar16) * _LC54;
      fVar15 = (fVar20 + fVar17) * _UNK_0018a8f4;
      local_90 = (fVar10 + *(float *)(param_4 + 8)) * _LC54;
      local_98 = CONCAT44(fVar15,fVar14);
      fVar11 = SQRT(fStack_80 * fStack_80 + fStack_84 * fStack_84 + fVar19 * fVar19);
      if (fVar11 != 0.0) {
        auVar12._4_4_ = fVar17 - fVar20;
        auVar12._0_4_ = fVar19;
        auVar12._8_8_ = 0;
        fStack_80 = fStack_80 / fVar11;
        local_9a = false;
        local_48 = _LC56;
        auVar13._4_4_ = fVar11;
        auVar13._0_4_ = fVar11;
        auVar13._8_4_ = _LC23;
        auVar13._12_4_ = _UNK_0018a884;
        auVar13 = divps(auVar12,auVar13);
        fVar10 = (fVar10 - local_90) * fStack_80;
        local_88 = auVar13._0_4_;
        fStack_84 = auVar13._4_4_;
        fVar17 = (fVar17 - fVar15) * fStack_84;
        fVar16 = local_88 * (fVar16 - fVar14);
        uStack_50 = CONCAT44(_LC50,_UNK_0018a9c8);
        local_58 = __LC55;
        interp_color((basisu *)&local_78,(vec *)&local_98,(vec *)&local_88,
                     (*(float *)(param_4 + 8) - local_90) * fStack_80 +
                     (fVar20 - fVar15) * fStack_84 + (fVar18 - fVar14) * local_88,
                     (vec_interval *)&local_58,param_7,&local_9a);
        if (local_9a == false) {
          *(undefined8 *)param_4 = local_78;
          *(undefined4 *)(param_4 + 8) = local_70;
        }
        local_99 = false;
        interp_color((basisu *)&local_68,(vec *)&local_98,(vec *)&local_88,fVar10 + fVar17 + fVar16,
                     (vec_interval *)&local_58,param_7,&local_99);
        if (local_99 == false) {
          *(undefined8 *)param_5 = local_68;
          *(undefined4 *)(param_5 + 8) = local_60;
        }
      }
      pvVar6 = param_4 + 0xc;
      do {
        fVar16 = *(float *)param_4;
        if (fVar16 < 0.0) {
          fVar16 = 0.0;
        }
        else if (_LC50 < fVar16) {
          fVar16 = _LC50;
        }
        *(float *)param_4 = fVar16;
        param_4 = param_4 + 4;
      } while (param_4 != pvVar6);
      pvVar6 = param_5 + 0xc;
      do {
        fVar16 = *(float *)param_5;
        if (fVar16 < 0.0) {
          fVar16 = 0.0;
        }
        else if (_LC50 < fVar16) {
          fVar16 = _LC50;
        }
        *(float *)param_5 = fVar16;
        param_5 = param_5 + 4;
      } while (pvVar6 != param_5);
      uVar4 = 1;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::encode_astc_hdr_block_mode_11(unsigned int, basisu::vec<4u, float> const*, unsigned int,
   unsigned int&, double, unsigned char*, unsigned char*, basisu::astc_hdr_codec_options const&,
   bool, unsigned int, bool, bool, int, int) [clone .constprop.0] */

void basisu::encode_astc_hdr_block_mode_11
               (uint param_1,vec *param_2,uint param_3,uint *param_4,double param_5,uchar *param_6,
               uchar *param_7,astc_hdr_codec_options *param_8,bool param_9,uint param_10,
               bool param_11,bool param_12,int param_13,int param_14)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  uchar *puVar8;
  ulong uVar9;
  ulong uVar10;
  uchar *puVar12;
  char cVar13;
  vec *pvVar14;
  uchar *puVar15;
  uint uVar16;
  float *pfVar17;
  byte *pbVar18;
  int iVar19;
  vec *pvVar20;
  short sVar21;
  uint uVar22;
  unsigned_short *puVar23;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar24;
  bool bVar25;
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
  float in_XMM11_Da;
  float in_XMM12_Da;
  float in_XMM13_Da;
  vec *local_320;
  float local_300;
  float local_2f4;
  unsigned_short *local_2e8;
  uint local_27c;
  double local_278;
  double local_270;
  float local_268;
  float fStack_264;
  float local_260;
  undefined8 local_258;
  float local_250;
  undefined8 local_248;
  float local_240;
  float local_23c [3];
  float local_230 [3];
  vec local_224 [12];
  ulong local_218;
  float local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  unsigned_short local_1e8 [96];
  vec local_188 [4];
  undefined4 auStack_184 [65];
  undefined8 uStack_80;
  undefined1 local_78 [16];
  byte local_68 [16];
  uchar local_58 [24];
  long local_40;
  ulong uVar11;
  
  local_278 = _LC18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  uVar4 = _LC26;
  if (param_1 != 0) {
    puVar23 = local_1e8;
    pvVar20 = param_2 + (ulong)param_1 * 0x10;
    pvVar14 = local_188;
    do {
      uVar16 = *(uint *)param_2;
      uVar3 = (int)uVar16 >> 0x17 & 0xff;
      if (uVar3 == 0) {
        uVar3 = 0;
        *(short *)puVar23 = 0;
        uVar16 = 0;
      }
      else if ((int)(uVar3 - 0x7f) < 0x10) {
        if ((int)(uVar3 - 0x7f) < -0xe) {
          iVar19 = 0;
          lVar5 = lrintf((float)(uVar16 & uVar4) * _LC61);
          uVar16 = (uint)lVar5;
        }
        else {
          iVar19 = uVar3 - 0x70;
          lVar5 = lrintf((float)(uVar16 & 0x7fffff) * __LC62);
          uVar16 = (uint)lVar5;
        }
        if (uVar16 == 0x400) {
          uVar3 = (iVar19 + 1U & 0x3f) << 0xb;
          *(short *)puVar23 = (short)(iVar19 + 1U) * 0x400;
          uVar16 = 0;
        }
        else {
          uVar3 = iVar19 << 10 | uVar16;
          *(short *)puVar23 = (short)uVar3;
          uVar3 = uVar3 * 2 & 0xf800;
          uVar22 = (uVar16 & 0x3ff) * 8;
          if (uVar22 < 0x5fe) {
            uVar16 = (uVar22 + 2) / 3;
          }
          else {
            uVar16 = (uVar22 + 0x804) / 5;
            if (uVar22 < 0x15fc) {
              uVar16 = (int)(uVar22 + 0x202) >> 2;
            }
          }
        }
      }
      else {
        uVar3 = 0xf800;
        *(short *)puVar23 = 0x7c00;
        uVar16 = 0;
      }
      *(float *)pvVar14 = (float)(uVar16 | uVar3);
      uVar16 = *(uint *)(param_2 + 4);
      uVar3 = (int)uVar16 >> 0x17 & 0xff;
      if (uVar3 == 0) {
        uVar3 = 0;
        sVar21 = 0;
        uVar16 = 0;
      }
      else if ((int)(uVar3 - 0x7f) < 0x10) {
        if ((int)(uVar3 - 0x7f) < -0xe) {
          lVar5 = lrintf((float)(uVar16 & uVar4) * _LC61);
          iVar19 = 0;
          uVar16 = (uint)lVar5;
        }
        else {
          iVar19 = uVar3 - 0x70;
          lVar5 = lrintf((float)(uVar16 & 0x7fffff) * __LC62);
          uVar16 = (uint)lVar5;
        }
        if (uVar16 == 0x400) {
          uVar16 = 0;
          sVar21 = (short)(iVar19 + 1U) * 0x400;
          uVar3 = (iVar19 + 1U & 0x3f) << 0xb;
        }
        else {
          uVar3 = uVar16 | iVar19 << 10;
          sVar21 = (short)uVar3;
          uVar3 = uVar3 * 2 & 0xf800;
          uVar22 = (uVar16 & 0x3ff) * 8;
          if (uVar22 < 0x5fe) {
            uVar16 = (uVar22 + 2) / 3;
          }
          else {
            uVar16 = (uVar22 + 0x804) / 5;
            if (uVar22 < 0x15fc) {
              uVar16 = (int)(uVar22 + 0x202) >> 2;
            }
          }
        }
      }
      else {
        sVar21 = 0x7c00;
        uVar3 = 0xf800;
        uVar16 = 0;
      }
      *(short *)(puVar23 + 2) = sVar21;
      *(float *)(pvVar14 + 4) = (float)(uVar16 | uVar3);
      uVar16 = *(uint *)(param_2 + 8);
      uVar3 = (int)uVar16 >> 0x17 & 0xff;
      if (uVar3 == 0) {
        uVar3 = 0;
        sVar21 = 0;
        uVar16 = 0;
      }
      else if ((int)(uVar3 - 0x7f) < 0x10) {
        if ((int)(uVar3 - 0x7f) < -0xe) {
          lVar5 = lrintf((float)(uVar16 & uVar4) * _LC61);
          iVar19 = 0;
          uVar16 = (uint)lVar5;
        }
        else {
          iVar19 = uVar3 - 0x70;
          lVar5 = lrintf((float)(uVar16 & 0x7fffff) * __LC62);
          uVar16 = (uint)lVar5;
        }
        if (uVar16 == 0x400) {
          uVar16 = 0;
          sVar21 = (short)(iVar19 + 1U) * 0x400;
          uVar3 = (iVar19 + 1U & 0x3f) << 0xb;
        }
        else {
          uVar3 = uVar16 | iVar19 << 10;
          sVar21 = (short)uVar3;
          uVar3 = uVar3 * 2 & 0xf800;
          uVar22 = (uVar16 & 0x3ff) * 8;
          if (uVar22 < 0x5fe) {
            uVar16 = (uVar22 + 2) / 3;
          }
          else {
            uVar16 = (uVar22 + 0x804) / 5;
            if (uVar22 < 0x15fc) {
              uVar16 = (int)(uVar22 + 0x202) >> 2;
            }
          }
        }
      }
      else {
        sVar21 = 0x7c00;
        uVar3 = 0xf800;
        uVar16 = 0;
      }
      param_2 = param_2 + 0x10;
      *(short *)(puVar23 + 4) = sVar21;
      *(undefined4 *)(pvVar14 + 0xc) = 0;
      puVar23 = puVar23 + 6;
      *(float *)(pvVar14 + 8) = (float)(uVar16 | uVar3);
      pvVar14 = pvVar14 + 0x10;
    } while (pvVar20 != param_2);
  }
  local_2e8 = local_1e8;
  local_320 = local_188;
  uVar6 = (ulong)param_3;
  lVar5 = uVar6 * 3;
  uVar16 = *(char *)((long)&astc_helpers::g_ise_range_table + lVar5 + 2) * 4 + 1 +
           *(char *)((long)&astc_helpers::g_ise_range_table + lVar5 + 1) * 2 <<
           (*(byte *)((long)&astc_helpers::g_ise_range_table + lVar5) & 0x1f);
  calc_mean((basisu *)&local_268,param_1,local_320);
  if (param_1 == 0) {
    fVar35 = 0.0;
    fVar32 = 0.0;
    fVar31 = 0.0;
    fVar33 = fVar31;
    fVar34 = fVar32;
    fVar36 = fVar31;
  }
  else {
    fVar35 = 0.0;
    fVar32 = 0.0;
    fVar31 = 0.0;
    pvVar14 = local_320;
    fVar33 = fVar31;
    fVar34 = fVar32;
    fVar36 = fVar31;
    do {
      pvVar20 = pvVar14 + 0x10;
      fVar30 = *(float *)pvVar14 - local_268;
      fVar26 = *(float *)(pvVar14 + 8) - local_260;
      fVar28 = *(float *)(pvVar14 + 4) - fStack_264;
      fVar36 = fVar36 + fVar30 * fVar30;
      fVar33 = fVar33 + fVar30 * fVar26;
      fVar31 = fVar31 + fVar30 * fVar28;
      fVar34 = fVar34 + fVar28 * fVar28;
      fVar32 = fVar32 + fVar28 * fVar26;
      fVar35 = fVar35 + fVar26 * fVar26;
      pvVar14 = pvVar20;
    } while (pvVar20 != local_320 + (ulong)param_1 * 0x10);
  }
  iVar19 = 3;
  fVar26 = _LC58;
  fVar28 = _LC57;
  fVar30 = _LC23;
  do {
    fVar37 = fVar31 * fVar26;
    fVar29 = fVar26 * fVar33;
    fVar26 = fVar30 * fVar31 + fVar36 * fVar26 + fVar28 * fVar33;
    fVar27 = fVar30 * fVar32;
    fVar30 = fVar30 * fVar34 + fVar37 + fVar28 * fVar32;
    fVar28 = fVar28 * fVar35 + fVar27 + fVar29;
    fVar27 = (float)((uint)fVar26 & uVar4);
    if ((float)((uint)fVar26 & uVar4) <= (float)((uint)fVar30 & uVar4)) {
      fVar27 = (float)((uint)fVar30 & uVar4);
    }
    if (fVar27 <= (float)((uint)fVar28 & uVar4)) {
      fVar27 = (float)((uint)fVar28 & uVar4);
    }
    if (_LC63 < fVar27) {
      fVar27 = _LC23 / fVar27;
      fVar26 = fVar26 * fVar27;
      fVar30 = fVar30 * fVar27;
      fVar28 = fVar28 * fVar27;
    }
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  fVar33 = fVar26 * fVar26 + fVar30 * fVar30 + fVar28 * fVar28;
  if (_LC63 <= fVar33) {
    fVar33 = _LC23 / SQRT(fVar33);
    fVar26 = fVar26 * fVar33;
    fVar30 = fVar30 * fVar33;
    fVar33 = fVar33 * fVar28;
    if (_LC54 <= fVar33 * fVar33 + fVar30 * fVar30 + fVar26 * fVar26) goto LAB_001045d0;
  }
  fVar26 = _LC59;
  fVar33 = _LC59;
  fVar30 = _LC59;
LAB_001045d0:
  local_208 = CONCAT44(_UNK_0018a9d4,_LC25);
  uStack_200 = CONCAT44(_LC60,_UNK_0018a9d8);
  local_1f8 = _LC65;
  if (param_1 != 0) {
    bVar25 = false;
    bVar24 = false;
    pvVar14 = local_320;
    fVar34 = _LC60;
    fVar36 = _LC25;
    do {
      local_218 = *(ulong *)pvVar14;
      local_210 = *(float *)(pvVar14 + 8);
      fVar31 = (float)(local_218 >> 0x20);
      pfVar7 = (float *)&local_208;
      pfVar17 = (float *)&local_218;
      do {
        fVar32 = *pfVar17;
        if (fVar32 < *pfVar7) {
          *pfVar7 = fVar32;
        }
        if (pfVar7[3] <= fVar32 && fVar32 != pfVar7[3]) {
          pfVar7[3] = fVar32;
        }
        pfVar7 = pfVar7 + 1;
        pfVar17 = pfVar17 + 1;
      } while (pfVar7 != (float *)((long)&uStack_200 + 4));
      fVar32 = (local_210 - local_260) * fVar33 +
               (fVar31 - fStack_264) * fVar30 + ((float)local_218 - local_268) * fVar26;
      if (fVar32 < fVar36) {
        unaff_R15 = local_218 & 0xffffffff;
        bVar24 = true;
        fVar36 = fVar32;
        in_XMM11_Da = local_210;
        local_2f4 = fVar31;
      }
      if (fVar34 < fVar32) {
        bVar25 = true;
        fVar34 = fVar32;
        in_XMM12_Da = fVar31;
        in_XMM13_Da = local_210;
        local_300 = (float)local_218;
      }
      pvVar14 = pvVar14 + 0x10;
    } while (local_320 + (ulong)param_1 * 0x10 != pvVar14);
    if (bVar25) {
      local_230[0] = local_300;
      local_230[1] = in_XMM12_Da;
      local_230[2] = in_XMM13_Da;
    }
    if (bVar24) {
      local_23c[1] = local_2f4;
      local_23c[0] = (float)(int)unaff_R15;
      local_23c[2] = in_XMM11_Da;
    }
  }
  lVar5 = 0;
  local_250 = local_23c[2];
  local_240 = local_230[2];
  local_258 = CONCAT44(local_23c[1],local_23c[0]);
  local_248 = CONCAT44(local_230[1],local_230[0]);
  do {
    fVar33 = *(float *)((long)&local_258 + lVar5);
    fVar34 = *(float *)((long)&local_248 + lVar5) - fVar33;
    *(float *)((vec *)local_230 + lVar5) = fVar34 * _LC66 + fVar33;
    *(float *)((vec *)local_23c + lVar5) = fVar34 * _LC27 + fVar33;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0xc);
  local_78 = (undefined1  [16])0x0;
  puVar12 = local_78;
  local_270 = _LC18;
  local_27c = 0;
  uStack_80._2_4_ = 0;
  uStack_80._6_2_ = 0;
  cVar2 = try_mode11(param_1,(uchar *)((long)&uStack_80 + 2),puVar12,&local_270,&local_27c,
                     (vec *)local_23c,(vec *)local_230,local_2e8,uVar16,param_3,param_8,param_9,
                     param_10,param_12,param_13,param_14);
  if (cVar2 != '\0') {
    if (local_270 < _LC18) {
      local_278 = local_270;
      *(undefined4 *)param_6 = uStack_80._2_4_;
      *(undefined2 *)(param_6 + 4) = uStack_80._6_2_;
      if (param_1 < 8) {
        if ((param_1 & 4) == 0) {
          if (param_1 != 0) {
            *param_7 = local_78[0];
            if ((param_1 & 2) != 0) {
              *(undefined2 *)(param_7 + ((ulong)param_1 - 2)) =
                   *(undefined2 *)(local_78 + ((ulong)param_1 - 2));
            }
          }
        }
        else {
          *(undefined4 *)param_7 = local_78._0_4_;
          *(undefined4 *)(param_7 + ((ulong)param_1 - 4)) =
               *(undefined4 *)(local_78 + ((ulong)param_1 - 4));
        }
      }
      else {
        *(undefined8 *)param_7 = local_78._0_8_;
        *(undefined8 *)(param_7 + ((ulong)param_1 - 8)) =
             *(undefined8 *)((long)&uStack_80 + (ulong)param_1);
        lVar5 = (long)param_7 - ((ulong)(param_7 + 8) & 0xfffffffffffffff8);
        uVar4 = (int)lVar5 + param_1 & 0xfffffff8;
        if (7 < uVar4) {
          uVar3 = 0;
          do {
            uVar9 = (ulong)uVar3;
            uVar3 = uVar3 + 8;
            *(undefined8 *)(((ulong)(param_7 + 8) & 0xfffffffffffffff8) + uVar9) =
                 *(undefined8 *)(puVar12 + (uVar9 - lVar5));
          } while (uVar3 < uVar4);
        }
      }
      *param_4 = local_27c;
    }
    iVar19 = 3;
    pvVar14 = (vec *)(g_astc_ls_weights_ise + uVar6 * 0x180);
    do {
      cVar2 = compute_least_squares_endpoints_rgb
                        (param_1,puVar12,pvVar14,local_224,(vec *)&local_218,local_320,
                         (vec_interval *)&local_208);
      if ((cVar2 == '\0') ||
         (cVar2 = try_mode11(param_1,param_6,param_7,&local_278,param_4,local_224,(vec *)&local_218,
                             local_2e8,uVar16,param_3,param_8,param_9,param_10,param_12,param_13,
                             param_14), cVar2 == '\0')) break;
      puVar8 = param_7;
      puVar15 = puVar12;
      if (7 < param_1) {
        uVar4 = 0;
        do {
          uVar3 = uVar4 + 8;
          *(undefined8 *)(puVar12 + uVar4) = *(undefined8 *)(param_7 + uVar4);
          uVar4 = uVar3;
        } while (uVar3 < (param_1 & 0xfffffff8));
        puVar15 = puVar12 + uVar3;
        puVar8 = param_7 + uVar3;
      }
      lVar5 = 0;
      if ((param_1 & 4) != 0) {
        *(undefined4 *)puVar15 = *(undefined4 *)puVar8;
        lVar5 = 4;
      }
      if ((param_1 & 2) != 0) {
        *(undefined2 *)(puVar15 + lVar5) = *(undefined2 *)(puVar8 + lVar5);
        lVar5 = lVar5 + 2;
      }
      if ((param_1 & 1) != 0) {
        puVar15[lVar5] = puVar8[lVar5];
      }
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    if (param_11) {
      pbVar18 = local_68;
      if (7 < param_1) {
        uVar9 = 0;
        do {
          uVar4 = (int)uVar9 + 8;
          uVar11 = (ulong)uVar4;
          *(undefined8 *)(local_68 + uVar9) = *(undefined8 *)(puVar12 + uVar9);
          uVar9 = uVar11;
        } while (uVar4 < (param_1 & 0xfffffff8));
        pbVar18 = local_68 + uVar11;
        puVar12 = puVar12 + uVar11;
      }
      lVar5 = 0;
      if ((param_1 & 4) != 0) {
        *(undefined4 *)pbVar18 = *(undefined4 *)puVar12;
        lVar5 = 4;
      }
      if ((param_1 & 2) != 0) {
        *(undefined2 *)(pbVar18 + lVar5) = *(undefined2 *)(puVar12 + lVar5);
        lVar5 = lVar5 + 2;
      }
      if ((param_1 & 1) != 0) {
        pbVar18[lVar5] = puVar12[lVar5];
      }
      if (param_1 != 0) {
        uVar4 = 0x100;
        uVar3 = 0;
        pbVar18 = local_68;
        do {
          uVar22 = (uint)(byte)g_map_astc_to_linear_order[(ulong)*pbVar18 + uVar6 * 0x18];
          if ((byte)g_map_astc_to_linear_order[(ulong)*pbVar18 + uVar6 * 0x18] < uVar4) {
            uVar4 = uVar22;
          }
          if (uVar3 < uVar22) {
            uVar3 = uVar22;
          }
          pbVar18 = pbVar18 + 1;
        } while (local_68 + param_1 != pbVar18);
        cVar2 = '\0';
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          bVar1 = g_map_astc_to_linear_order[(ulong)local_68[uVar11] + uVar6 * 0x18];
          uVar9 = (ulong)bVar1;
          if ((uVar4 == bVar1) && (uVar4 < uVar16 - 1)) {
            uVar9 = (ulong)(uVar4 + 1);
            cVar2 = param_11;
          }
          local_58[uVar11] = g_map_linear_to_astc_order[uVar9 + uVar6 * 0x18];
          uVar9 = uVar11 + 1;
        } while ((ulong)param_1 != uVar11 + 1);
        if ((cVar2 != '\0') &&
           (cVar2 = compute_least_squares_endpoints_rgb
                              (param_1,local_58,pvVar14,local_224,(vec *)&local_218,local_320,
                               (vec_interval *)&local_208), cVar2 != '\0')) {
          try_mode11(param_1,param_6,param_7,&local_278,param_4,local_224,(vec *)&local_218,
                     local_2e8,uVar16,param_3,param_8,param_9,param_10,param_12,param_13,param_14);
        }
        bVar25 = false;
        uVar9 = 0;
        do {
          bVar1 = g_map_astc_to_linear_order[(ulong)local_68[uVar9] + uVar6 * 0x18];
          uVar10 = (ulong)bVar1;
          uVar22 = (uint)bVar1;
          if (bVar1 != 0 && uVar3 == uVar22) {
            uVar10 = (ulong)(uVar22 - 1);
            bVar25 = bVar1 != 0 && uVar3 == uVar22;
          }
          local_58[uVar9] = g_map_linear_to_astc_order[uVar10 + uVar6 * 0x18];
          bVar24 = uVar11 != uVar9;
          uVar9 = uVar9 + 1;
        } while (bVar24);
        if ((bVar25) &&
           (cVar2 = compute_least_squares_endpoints_rgb
                              (param_1,local_58,pvVar14,local_224,(vec *)&local_218,local_320,
                               (vec_interval *)&local_208), cVar2 != '\0')) {
          try_mode11(param_1,param_6,param_7,&local_278,param_4,local_224,(vec *)&local_218,
                     local_2e8,uVar16,param_3,param_8,param_9,param_10,param_12,param_13,param_14);
        }
        uVar9 = 0;
        cVar2 = '\0';
        do {
          bVar1 = g_map_astc_to_linear_order[(ulong)local_68[uVar9] + uVar6 * 0x18];
          uVar10 = (ulong)bVar1;
          uVar22 = (uint)bVar1;
          cVar13 = uVar22 != 0 && uVar3 == uVar22;
          if ((bool)cVar13) {
            uVar10 = (ulong)(uVar22 - 1);
          }
          else {
            cVar13 = cVar2;
            if ((uVar4 == bVar1) && (uVar4 < uVar16 - 1)) {
              uVar10 = (ulong)(uVar4 + 1);
              cVar13 = param_11;
            }
          }
          local_58[uVar9] = g_map_linear_to_astc_order[uVar10 + uVar6 * 0x18];
          bVar25 = uVar11 != uVar9;
          uVar9 = uVar9 + 1;
          cVar2 = cVar13;
        } while (bVar25);
        if ((cVar13 != '\0') &&
           (cVar2 = compute_least_squares_endpoints_rgb
                              (param_1,local_58,pvVar14,local_224,(vec *)&local_218,local_320,
                               (vec_interval *)&local_208), cVar2 != '\0')) {
          try_mode11(param_1,param_6,param_7,&local_278,param_4,local_224,(vec *)&local_218,
                     local_2e8,uVar16,param_3,param_8,param_9,param_10,param_12,param_13,param_14);
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::pack_mode11(basisu::vec<4u, float> const*,
   basisu::vector<basisu::astc_hdr_pack_results>&, basisu::astc_hdr_codec_options const&, unsigned
   int, unsigned int, bool) */

void basisu::pack_mode11(vec *param_1,vector *param_2,astc_hdr_codec_options *param_3,uint param_4,
                        uint param_5,bool param_6)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  long lVar3;
  astc_hdr_codec_options aVar4;
  log_astc_block *plVar5;
  uint uVar6;
  long in_FS_OFFSET;
  byte bVar7;
  double dVar8;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_160;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  double local_138;
  double dStack_130;
  double local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double dStack_f8;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 local_a8;
  undefined6 uStack_a6;
  double dStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined2 uStack_8a;
  double dStack_88;
  undefined6 uStack_80;
  undefined2 local_7a;
  double dStack_78;
  undefined6 uStack_70;
  undefined1 local_6a;
  undefined1 uStack_69;
  undefined4 local_5e;
  undefined2 local_5a;
  undefined1 local_58 [16];
  long local_40;
  
  bVar7 = 0;
  dVar8 = 0.0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_5e = 0;
  local_5a = 0;
  if (param_4 <= param_5) {
LAB_0010524c:
    do {
      if (param_4 == 8) {
        if (param_3[6] != (astc_hdr_codec_options)0x0) {
          uVar6 = 0x13;
          goto LAB_0010555e;
        }
        aVar4 = (astc_hdr_codec_options)0x0;
        uVar6 = 0x13;
      }
      else if ((param_4 < 2) || (uVar6 = 0x14, param_3[6] == (astc_hdr_codec_options)0x0)) {
        aVar4 = (astc_hdr_codec_options)0x0;
        uVar6 = 0x14;
      }
      else {
LAB_0010555e:
        aVar4 = param_3[0x60];
      }
      dVar8 = (double)encode_astc_hdr_block_mode_11
                                (0x10,param_1,param_4,&local_16c,dVar8,(uchar *)&local_5e,local_58,
                                 param_3,(bool)param_3[0x10],uVar6,(bool)aVar4,param_6,
                                 *(int *)(param_3 + 0x14),*(int *)(param_3 + 0x18));
      auVar1 = local_58;
      if (dVar8 < _LC18) {
        dStack_130 = _LC18;
        plVar5 = (log_astc_block *)&local_128;
        for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
          *(undefined8 *)plVar5 = 0;
          plVar5 = plVar5 + (ulong)bVar7 * -0x10 + 8;
        }
        local_7a = 0;
        dStack_78 = 0.0;
        uStack_70 = 0;
        uStack_11c = (undefined4)_LC67;
        uStack_118 = (undefined4)((ulong)_LC67 >> 0x20);
        local_98 = local_16c;
        local_ec = auVar1._0_4_;
        uStack_e8 = auVar1._4_4_;
        uStack_e4 = auVar1._8_4_;
        uStack_e0 = auVar1._12_4_;
        uStack_ac = local_5e;
        uStack_94 = 0;
        uStack_90 = 0;
        local_6a = 0;
        uStack_8b = 0;
        uStack_104 = 1;
        uStack_fc = 0xb;
        local_a8 = local_5a;
        local_138 = dVar8;
        uStack_110 = param_4;
        uStack_10c = uVar6;
        uStack_8c = param_6;
        basist::decode_mode11_to_qlog12((uchar *)&uStack_ac,&local_158,uVar6);
        local_168 = CONCAT62(CONCAT42(CONCAT22((&g_qlog16_to_half)[(uint)(local_148 << 4)],
                                               (&g_qlog16_to_half)[(uint)(local_154 << 4)]),
                                      (&g_qlog16_to_half)[(uint)(local_14c << 4)]),
                             (&g_qlog16_to_half)[(uint)(local_158 << 4)]);
        local_160 = CONCAT22((&g_qlog16_to_half)[(uint)(local_144 << 4)],
                             (&g_qlog16_to_half)[(uint)(local_150 << 4)]);
        dVar8 = (double)basist::transcode_bc6h_1subset
                                  ((unsigned_short *)&local_168,(log_astc_block *)&local_128,
                                   (bc6h_block *)&local_7a);
        uVar6 = *(uint *)(param_2 + 8);
        if (*(uint *)(param_2 + 0xc) <= uVar6) {
          dVar8 = (double)basisu::elemental_vector::increase_capacity
                                    ((uint)param_2,(bool)((char)uVar6 + '\x01'),1,
                                     (_func_void_void_ptr_void_ptr_uint *)0xd0,false);
          uVar6 = *(uint *)(param_2 + 8);
        }
        param_4 = param_4 + 1;
        pdVar2 = (double *)((ulong)uVar6 * 0xd0 + *(long *)param_2);
        *pdVar2 = local_138;
        pdVar2[1] = dStack_130;
        pdVar2[2] = local_128;
        pdVar2[3] = (double)CONCAT44(uStack_11c,uStack_120);
        pdVar2[4] = (double)CONCAT44(uStack_114,uStack_118);
        pdVar2[5] = (double)CONCAT44(uStack_10c,uStack_110);
        pdVar2[6] = (double)CONCAT44(uStack_104,local_108);
        pdVar2[7] = (double)CONCAT44(uStack_fc,uStack_100);
        pdVar2[8] = dStack_f8;
        pdVar2[9] = (double)CONCAT44(local_ec,uStack_f0);
        pdVar2[10] = (double)CONCAT44(uStack_e4,uStack_e8);
        pdVar2[0xb] = (double)CONCAT44(uStack_dc,uStack_e0);
        pdVar2[0xc] = local_d8;
        pdVar2[0xd] = dStack_d0;
        pdVar2[0xe] = local_c8;
        pdVar2[0xf] = dStack_c0;
        pdVar2[0x10] = local_b8;
        pdVar2[0x11] = (double)CONCAT44(uStack_ac,uStack_b0);
        pdVar2[0x12] = (double)CONCAT62(uStack_a6,local_a8);
        pdVar2[0x13] = dStack_a0;
        pdVar2[0x14] = (double)CONCAT44(uStack_94,local_98);
        pdVar2[0x15] = (double)CONCAT26(uStack_8a,CONCAT15(uStack_8b,CONCAT14(uStack_8c,uStack_90)))
        ;
        pdVar2[0x16] = dStack_88;
        pdVar2[0x17] = (double)CONCAT26(local_7a,uStack_80);
        pdVar2[0x18] = dStack_78;
        pdVar2[0x19] = (double)CONCAT17(uStack_69,CONCAT16(local_6a,uStack_70));
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        if (param_5 < param_4) break;
        goto LAB_0010524c;
      }
      param_4 = param_4 + 1;
    } while (param_4 <= param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::encode_astc_hdr_block_mode_7(unsigned int, basisu::vec<4u, float> const*, unsigned int,
   unsigned int&, double, unsigned char*, unsigned char*, basisu::astc_hdr_codec_options const&,
   unsigned int) [clone .constprop.0] */

void basisu::encode_astc_hdr_block_mode_7
               (uint param_1,vec *param_2,uint param_3,uint *param_4,double param_5,uchar *param_6,
               uchar *param_7,astc_hdr_codec_options *param_8,uint param_9)

{
  uchar *puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  byte *pbVar13;
  uchar *puVar14;
  ulong uVar15;
  uint uVar17;
  float *pfVar18;
  unsigned_short *puVar19;
  short sVar20;
  uint uVar21;
  vec *pvVar22;
  int iVar23;
  basisu *pbVar24;
  vec *pvVar25;
  vec *pvVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  unsigned_short *local_2f8;
  double *local_2c0;
  int local_2b4;
  uint local_280;
  int local_27c;
  double local_278;
  double local_270;
  float local_268;
  float fStack_264;
  float local_260;
  undefined8 local_258;
  float local_250;
  undefined8 local_248;
  float local_240;
  basisu local_23c [4];
  undefined8 local_238;
  float local_230;
  basisu local_22c [4];
  undefined8 local_228;
  float local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1dc;
  int local_1d4;
  unsigned_short local_1c8 [96];
  vec local_168 [4];
  undefined4 auStack_164 [65];
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  ulong uVar16;
  
  local_278 = _LC18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  uVar3 = _LC26;
  uVar9 = (ulong)param_3;
  lVar10 = uVar9 * 3;
  uVar17 = *(char *)((long)&astc_helpers::g_ise_range_table + lVar10 + 2) * 4 + 1 +
           *(char *)((long)&astc_helpers::g_ise_range_table + lVar10 + 1) * 2 <<
           (*(byte *)((long)&astc_helpers::g_ise_range_table + lVar10) & 0x1f);
  if (param_1 == 0) {
    calc_mean((basisu *)&local_268,0,local_168);
    local_258 = CONCAT44(_UNK_0018a914,_LC59);
    local_208 = CONCAT44(_UNK_0018a9d4,_LC25);
    uStack_200 = CONCAT44(_LC60,_UNK_0018a9d8);
    local_1f8 = _LC65;
    fVar30 = _LC25;
    fVar31 = _LC60;
    uVar3 = _LC26;
  }
  else {
    puVar19 = local_1c8;
    pvVar25 = local_168;
    lVar10 = (ulong)param_1 * 0x10;
    pvVar22 = param_2 + lVar10;
    pvVar26 = pvVar25;
    do {
      uVar8 = *(uint *)param_2;
      uVar7 = (int)uVar8 >> 0x17 & 0xff;
      if (uVar7 == 0) {
        uVar7 = 0;
        *(short *)puVar19 = 0;
        uVar8 = 0;
      }
      else if ((int)(uVar7 - 0x7f) < 0x10) {
        if ((int)(uVar7 - 0x7f) < -0xe) {
          iVar23 = 0;
          lVar11 = lrintf((float)(uVar8 & uVar3) * _LC61);
          uVar8 = (uint)lVar11;
        }
        else {
          iVar23 = uVar7 - 0x70;
          lVar11 = lrintf((float)(uVar8 & 0x7fffff) * __LC62);
          uVar8 = (uint)lVar11;
        }
        if (uVar8 == 0x400) {
          uVar7 = (iVar23 + 1U & 0x3f) << 0xb;
          *(short *)puVar19 = (short)(iVar23 + 1U) * 0x400;
          uVar8 = 0;
        }
        else {
          uVar7 = iVar23 << 10 | uVar8;
          *(short *)puVar19 = (short)uVar7;
          uVar7 = uVar7 * 2 & 0xf800;
          uVar21 = (uVar8 & 0x3ff) * 8;
          if (uVar21 < 0x5fe) {
            uVar8 = (uVar21 + 2) / 3;
          }
          else {
            uVar8 = (uVar21 + 0x804) / 5;
            if (uVar21 < 0x15fc) {
              uVar8 = (int)(uVar21 + 0x202) >> 2;
            }
          }
        }
      }
      else {
        uVar7 = 0xf800;
        *(short *)puVar19 = 0x7c00;
        uVar8 = 0;
      }
      *(float *)pvVar26 = (float)(uVar8 | uVar7);
      uVar8 = *(uint *)(param_2 + 4);
      uVar7 = (int)uVar8 >> 0x17 & 0xff;
      if (uVar7 == 0) {
        uVar7 = 0;
        sVar20 = 0;
        uVar8 = 0;
      }
      else if ((int)(uVar7 - 0x7f) < 0x10) {
        if ((int)(uVar7 - 0x7f) < -0xe) {
          iVar23 = 0;
          lVar11 = lrintf((float)(uVar8 & uVar3) * _LC61);
          uVar8 = (uint)lVar11;
        }
        else {
          iVar23 = uVar7 - 0x70;
          lVar11 = lrintf((float)(uVar8 & 0x7fffff) * __LC62);
          uVar8 = (uint)lVar11;
        }
        if (uVar8 == 0x400) {
          uVar7 = (iVar23 + 1U & 0x3f) << 0xb;
          sVar20 = (short)(iVar23 + 1U) * 0x400;
          uVar8 = 0;
        }
        else {
          uVar7 = uVar8 | iVar23 << 10;
          sVar20 = (short)uVar7;
          uVar7 = uVar7 * 2 & 0xf800;
          uVar21 = (uVar8 & 0x3ff) * 8;
          if (uVar21 < 0x5fe) {
            uVar8 = (uVar21 + 2) / 3;
          }
          else {
            uVar8 = (uVar21 + 0x804) / 5;
            if (uVar21 < 0x15fc) {
              uVar8 = (int)(uVar21 + 0x202) >> 2;
            }
          }
        }
      }
      else {
        sVar20 = 0x7c00;
        uVar7 = 0xf800;
        uVar8 = 0;
      }
      *(short *)(puVar19 + 2) = sVar20;
      *(float *)(pvVar26 + 4) = (float)(uVar8 | uVar7);
      uVar8 = *(uint *)(param_2 + 8);
      uVar7 = (int)uVar8 >> 0x17 & 0xff;
      if (uVar7 == 0) {
        uVar7 = 0;
        sVar20 = 0;
        uVar8 = 0;
      }
      else if ((int)(uVar7 - 0x7f) < 0x10) {
        if ((int)(uVar7 - 0x7f) < -0xe) {
          iVar23 = 0;
          lVar11 = lrintf((float)(uVar8 & uVar3) * _LC61);
          uVar8 = (uint)lVar11;
        }
        else {
          iVar23 = uVar7 - 0x70;
          lVar11 = lrintf((float)(uVar8 & 0x7fffff) * __LC62);
          uVar8 = (uint)lVar11;
        }
        if (uVar8 == 0x400) {
          uVar7 = (iVar23 + 1U & 0x3f) << 0xb;
          sVar20 = (short)(iVar23 + 1U) * 0x400;
          uVar8 = 0;
        }
        else {
          uVar7 = uVar8 | iVar23 << 10;
          sVar20 = (short)uVar7;
          uVar7 = uVar7 * 2 & 0xf800;
          uVar21 = (uVar8 & 0x3ff) * 8;
          if (uVar21 < 0x5fe) {
            uVar8 = (uVar21 + 2) / 3;
          }
          else {
            uVar8 = (uVar21 + 0x804) / 5;
            if (uVar21 < 0x15fc) {
              uVar8 = (int)(uVar21 + 0x202) >> 2;
            }
          }
        }
      }
      else {
        sVar20 = 0x7c00;
        uVar7 = 0xf800;
        uVar8 = 0;
      }
      param_2 = param_2 + 0x10;
      *(short *)(puVar19 + 4) = sVar20;
      *(undefined4 *)(pvVar26 + 0xc) = 0;
      puVar19 = puVar19 + 6;
      *(float *)(pvVar26 + 8) = (float)(uVar8 | uVar7);
      pvVar26 = pvVar26 + 0x10;
    } while (pvVar22 != param_2);
    pvVar22 = pvVar25;
    calc_mean((basisu *)&local_268,param_1,pvVar25);
    local_258 = CONCAT44(_UNK_0018a914,_LC59);
    local_1f8 = _LC65;
    local_208 = CONCAT44(_UNK_0018a9d4,_LC25);
    uStack_200 = CONCAT44(_LC60,_UNK_0018a9d8);
    fVar30 = _LC25;
    fVar31 = _LC60;
    do {
      local_1e8 = *(undefined8 *)pvVar25;
      local_1e0 = *(float *)(pvVar25 + 8);
      pfVar12 = (float *)&local_208;
      pfVar18 = (float *)&local_1e8;
      do {
        fVar27 = *pfVar18;
        if (fVar27 < *pfVar12) {
          *pfVar12 = fVar27;
        }
        if (pfVar12[3] <= fVar27 && fVar27 != pfVar12[3]) {
          pfVar12[3] = fVar27;
        }
        pfVar12 = pfVar12 + 1;
        pfVar18 = pfVar18 + 1;
      } while (pfVar12 != (float *)((long)&uStack_200 + 4));
      pvVar25 = pvVar25 + 0x10;
      fVar27 = (local_1e0 - local_260) * _LC59 +
               ((float)((ulong)local_1e8 >> 0x20) - fStack_264) * _LC59 +
               ((float)local_1e8 - local_268) * _LC59;
      if (fVar27 <= fVar30) {
        fVar30 = fVar27;
      }
      if (fVar31 <= fVar27) {
        fVar31 = fVar27;
      }
    } while (pvVar22 + lVar10 != pvVar25);
  }
  fVar27 = _LC59;
  local_2f8 = local_1c8;
  pbVar24 = (basisu *)&local_248;
  local_250 = _LC59;
  interp_color(pbVar24,(vec *)&local_268,(vec *)&local_258,fVar30,(vec_interval *)&local_208,
               (vec_interval *)&local_208,(bool *)0x0);
  interp_color((basisu *)&local_238,(vec *)&local_268,(vec *)&local_258,fVar31,
               (vec_interval *)&local_208,(vec_interval *)&local_208,(bool *)0x0);
  do {
    fVar30 = *(float *)pbVar24;
    if (fVar30 < 0.0) {
      fVar30 = 0.0;
    }
    else if (_LC50 < fVar30) {
      fVar30 = _LC50;
    }
    *(float *)pbVar24 = fVar30;
    pbVar24 = pbVar24 + 4;
  } while (local_23c != pbVar24);
  pbVar24 = (basisu *)&local_238;
  do {
    fVar30 = *(float *)pbVar24;
    if (fVar30 < 0.0) {
      fVar30 = 0.0;
    }
    else if (_LC50 < fVar30) {
      fVar30 = _LC50;
    }
    *(float *)pbVar24 = fVar30;
    pbVar24 = pbVar24 + 4;
  } while (pbVar24 != local_22c);
  local_280 = 0;
  uStack_60._4_4_ = 0;
  local_270 = _LC18;
  local_58 = (undefined1  [16])0x0;
  fVar27 = ((local_230 - local_240) * fVar27 +
           ((float)((ulong)local_238 >> 0x20) - (float)((ulong)local_248 >> 0x20)) * fVar27 +
           ((float)local_238 - (float)local_248) * fVar27) * fVar27;
  if ((float)((uint)fVar27 & uVar3) < _LC69) {
    fVar27 = (float)((uint)((float)(int)fVar27 +
                           (float)(-(uint)((float)(int)fVar27 < fVar27) & (uint)_LC23)) |
                    ~uVar3 & (uint)fVar27);
  }
  puVar1 = (uchar *)((long)&uStack_60 + 4);
  cVar4 = try_mode7(param_1,puVar1,local_58,&local_270,&local_280,(vec *)&local_238,fVar27,local_2f8
                    ,uVar17,param_3,param_8,param_9);
  if (cVar4 != '\0') {
    if (local_270 < _LC18) {
      local_278 = local_270;
      *(undefined4 *)param_6 = uStack_60._4_4_;
      if (param_1 < 8) {
        if ((param_1 & 4) == 0) {
          if (param_1 != 0) {
            *param_7 = local_58[0];
            if ((param_1 & 2) != 0) {
              *(undefined2 *)(param_7 + ((ulong)param_1 - 2)) =
                   *(undefined2 *)(local_58 + ((ulong)param_1 - 2));
            }
          }
        }
        else {
          *(undefined4 *)param_7 = local_58._0_4_;
          *(undefined4 *)(param_7 + ((ulong)param_1 - 4)) =
               *(undefined4 *)(local_58 + ((ulong)param_1 - 4));
        }
      }
      else {
        *(undefined8 *)param_7 = local_58._0_8_;
        *(undefined8 *)(param_7 + ((ulong)param_1 - 8)) =
             *(undefined8 *)((long)&uStack_60 + (ulong)param_1);
        lVar10 = (long)param_7 - ((ulong)(param_7 + 8) & 0xfffffffffffffff8);
        uVar8 = (int)lVar10 + param_1 & 0xfffffff8;
        if (7 < uVar8) {
          uVar7 = 0;
          do {
            uVar15 = (ulong)uVar7;
            uVar7 = uVar7 + 8;
            *(undefined8 *)(((ulong)(param_7 + 8) & 0xfffffffffffffff8) + uVar15) =
                 *(undefined8 *)(local_58 + (uVar15 - lVar10));
          } while (uVar7 < uVar8);
        }
      }
      *param_4 = local_280;
    }
    local_2b4 = 2;
    fVar30 = _LC23 / (float)(int)param_1;
    while( true ) {
      local_27c = 0;
      local_220 = local_260;
      local_228 = CONCAT44(fStack_264,local_268);
      cVar4 = basist::decode_mode7_to_qlog12(puVar1,(int *)&local_1e8,&local_27c,param_9);
      if (cVar4 == '\0') break;
      local_27c = local_27c << 4;
      fVar31 = (float)local_27c;
      if (param_1 == 0) {
        cVar4 = try_mode7(0,param_6,param_7,&local_278,param_4,(vec *)&local_228,fVar31,local_2f8,
                          uVar17,param_3,param_8,param_9);
        fVar31 = 0.0;
        if (cVar4 != '\0') {
          uStack_60._4_4_ = *(undefined4 *)param_6;
          fVar31 = 0.0;
        }
      }
      else {
        pbVar13 = local_58;
        local_220 = local_260;
        fVar27 = local_268;
        fVar29 = fStack_264;
        do {
          bVar2 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          fVar28 = (_LC23 - (float)(byte)g_ise_weight_lerps[(ulong)bVar2 + 1 + uVar9 * 0x20] * _LC27
                   ) * fVar31 * fVar30;
          local_220 = local_220 + fVar28;
          fVar27 = fVar27 + fVar28;
          fVar29 = fVar29 + fVar28;
        } while (pbVar13 != local_58 + param_1);
        local_228 = CONCAT44(fVar29,fVar27);
        cVar4 = try_mode7(param_1,param_6,param_7,&local_278,param_4,(vec *)&local_228,fVar31,
                          local_2f8,uVar17,param_3,param_8,param_9);
        if (cVar4 != '\0') {
          uStack_60._4_4_ = *(undefined4 *)param_6;
          puVar14 = param_7;
          pbVar13 = local_58;
          if (7 < param_1) {
            uVar15 = 0;
            do {
              uVar8 = (int)uVar15 + 8;
              uVar16 = (ulong)uVar8;
              *(undefined8 *)(local_58 + uVar15) = *(undefined8 *)(param_7 + uVar15);
              uVar15 = uVar16;
            } while (uVar8 < (param_1 & 0xfffffff8));
            pbVar13 = local_58 + uVar16;
            puVar14 = param_7 + uVar16;
          }
          lVar10 = 0;
          if ((param_1 & 4) != 0) {
            *(undefined4 *)pbVar13 = *(undefined4 *)puVar14;
            lVar10 = 4;
          }
          if ((param_1 & 2) != 0) {
            *(undefined2 *)(pbVar13 + lVar10) = *(undefined2 *)(puVar14 + lVar10);
            lVar10 = lVar10 + 2;
          }
          if ((param_1 & 1) != 0) {
            pbVar13[lVar10] = puVar14[lVar10];
          }
        }
        fVar31 = 0.0;
        pbVar13 = local_58;
        do {
          bVar2 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          fVar31 = fVar31 + (_LC23 - (float)(byte)g_ise_weight_lerps
                                                  [(ulong)bVar2 + 1 + uVar9 * 0x20] * _LC27);
        } while (local_58 + param_1 != pbVar13);
      }
      local_2c0 = &local_278;
      fVar31 = fVar31 * fVar30;
      cVar5 = basist::decode_mode7_to_qlog12(puVar1,(int *)&local_1e8,(int *)0x0,param_9);
      if (cVar5 == '\0') break;
      local_210 = (float)(local_1d4 << 4);
      fVar27 = (float)((int)local_1dc << 4);
      fVar29 = (float)((int)((ulong)local_1dc >> 0x20) << 4);
      local_218 = CONCAT44(fVar29,fVar27);
      if (_LC52 < (float)(uVar3 & (uint)fVar31)) {
        fVar29 = (fVar29 - fStack_264) / fVar31;
        fVar28 = (fVar27 - local_268) / fVar31;
        fVar31 = (local_210 - local_260) / fVar31;
        fVar27 = fVar28;
        if ((float)((uint)fVar28 & uVar3) < _LC69) {
          fVar27 = (float)((uint)((float)(-(uint)((float)(int)fVar28 < fVar28) & (uint)_LC23) +
                                 (float)(int)fVar28) | ~uVar3 & (uint)fVar28);
        }
        cVar5 = try_mode7(param_1,param_6,param_7,local_2c0,param_4,(vec *)&local_218,fVar27,
                          local_2f8,uVar17,param_3,param_8,param_9);
        if (cVar5 == '\0') {
          cVar5 = cVar4;
        }
        fVar27 = fVar29;
        if ((float)((uint)fVar29 & uVar3) < _LC69) {
          fVar27 = (float)((uint)((float)(-(uint)((float)(int)fVar29 < fVar29) & (uint)_LC23) +
                                 (float)(int)fVar29) | ~uVar3 & (uint)fVar29);
        }
        cVar6 = try_mode7(param_1,param_6,param_7,local_2c0,param_4,(vec *)&local_218,fVar27,
                          local_2f8,uVar17,param_3,param_8,param_9);
        if (cVar6 == '\0') {
          cVar6 = cVar5;
        }
        fVar27 = fVar31;
        if ((float)((uint)fVar31 & uVar3) < _LC69) {
          fVar27 = (float)((uint)((float)(-(uint)((float)(int)fVar31 < fVar31) & (uint)_LC23) +
                                 (float)(int)fVar31) | ~uVar3 & (uint)fVar31);
        }
        cVar4 = try_mode7(param_1,param_6,param_7,local_2c0,param_4,(vec *)&local_218,fVar27,
                          local_2f8,uVar17,param_3,param_8,param_9);
        fVar31 = (fVar28 + fVar29 + fVar31) / __LC70;
        if (cVar4 == '\0') {
          cVar4 = cVar6;
        }
        if ((float)((uint)fVar31 & uVar3) < _LC69) {
          fVar31 = (float)((uint)((float)(int)fVar31 +
                                 (float)(-(uint)((float)(int)fVar31 < fVar31) & (uint)_LC23)) |
                          ~uVar3 & (uint)fVar31);
        }
        cVar5 = try_mode7(param_1,param_6,param_7,local_2c0,param_4,(vec *)&local_218,fVar31,
                          local_2f8,uVar17,param_3,param_8,param_9);
        if (cVar5 == '\0') goto LAB_0010604a;
      }
      else {
LAB_0010604a:
        if (cVar4 == '\0') break;
      }
      uStack_60._4_4_ = *(undefined4 *)param_6;
      puVar14 = param_7;
      pbVar13 = local_58;
      if (7 < param_1) {
        uVar8 = 0;
        do {
          uVar7 = uVar8 + 8;
          *(undefined8 *)(local_58 + uVar8) = *(undefined8 *)(param_7 + uVar8);
          uVar8 = uVar7;
        } while (uVar7 < (param_1 & 0xfffffff8));
        pbVar13 = local_58 + uVar7;
        puVar14 = param_7 + uVar7;
      }
      lVar10 = 0;
      if ((param_1 & 4) != 0) {
        *(undefined4 *)pbVar13 = *(undefined4 *)puVar14;
        lVar10 = 4;
      }
      if ((param_1 & 2) != 0) {
        *(undefined2 *)(pbVar13 + lVar10) = *(undefined2 *)(puVar14 + lVar10);
        lVar10 = lVar10 + 2;
      }
      if ((param_1 & 1) != 0) {
        pbVar13[lVar10] = puVar14[lVar10];
      }
      if (local_2b4 == 1) break;
      local_2b4 = 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::pack_mode7_2part(basisu::vec<4u, float> const*,
   basisu::vector<basisu::astc_hdr_pack_results>&, basisu::astc_hdr_codec_options const&, int, int
   const*, unsigned int, unsigned int) */

void __thiscall
basisu::pack_mode7_2part
          (basisu *this,vec *param_1,vector *param_2,astc_hdr_codec_options *param_3,int param_4,
          int *param_5,uint param_6,uint param_7)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double *pdVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  basisu *pbVar16;
  int iVar17;
  undefined4 in_register_00000084;
  undefined1 *puVar18;
  basisu *pbVar19;
  uint uVar20;
  long in_FS_OFFSET;
  double in_XMM0_Qa;
  double dVar21;
  double dVar22;
  uint local_428 [2];
  uchar local_420 [8];
  undefined8 local_418;
  uint local_410 [2];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [64];
  double local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  uint uStack_390;
  uint uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  uint uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  uint uStack_270;
  undefined2 uStack_26c;
  undefined2 uStack_26a;
  double dStack_268;
  undefined6 uStack_260;
  undefined2 local_25a;
  double dStack_258;
  undefined6 uStack_250;
  undefined1 local_24a;
  undefined1 uStack_249;
  vec local_248 [8];
  undefined8 auStack_240 [31];
  vec local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pdVar11 = &local_3a8;
  for (lVar12 = 0x12; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar11 = 0.0;
    pdVar11 = pdVar11 + 1;
  }
  uStack_384 = 2;
  uStack_39c = (undefined4)_LC67;
  uStack_398 = (undefined4)((ulong)_LC67 >> 0x20);
  uStack_37c = (undefined4)_LC72;
  uStack_378 = (undefined4)((ulong)_LC72 >> 0x20);
  uVar8 = 0x1b;
  if ((int)param_3 != 0) {
    uVar8 = (ulong)param_3 & 0xffffffff;
  }
  uVar14 = 0;
  do {
    if ((int)param_3 == 0) {
      uVar13 = (uint)uVar14;
      while ((*(uint *)(param_2 + 0x2c) >> (uVar13 & 0x1f) & 1) == 0) {
        uVar14 = uVar14 + 1;
        if (uVar8 == uVar14) goto LAB_00106c59;
        uVar13 = (uint)uVar14;
      }
    }
    else {
      uVar13 = *(uint *)(CONCAT44(in_register_00000084,param_4) + uVar14 * 4);
    }
    iVar17 = 0;
    local_428[0] = 0;
    local_428[1] = 0;
    lVar12 = (ulong)uVar13 * 6;
    uVar3 = *(ushort *)((long)&basist::g_astc_bc7_common_partitions2 + lVar12 + 2);
    cVar1 = *(char *)((long)&basist::g_astc_bc7_common_partitions2 + lVar12 + 4);
    uVar10 = (ulong)*(byte *)((long)&basist::g_astc_bc7_common_partitions2 + lVar12) << 4;
    puVar18 = local_3e8;
    pbVar19 = this;
    do {
      lVar12 = 0;
      pbVar16 = pbVar19;
      do {
        uVar5 = *(undefined8 *)pbVar16;
        uVar6 = *(undefined8 *)(pbVar16 + 8);
        bVar2 = *(byte *)((long)&basist::g_bc7_partition2 + (ulong)(uint)((int)uVar10 + (int)lVar12)
                         );
        uVar9 = (ulong)bVar2;
        if (cVar1 != '\0') {
          uVar9 = (ulong)(1 - bVar2);
        }
        pbVar16 = pbVar16 + 0x10;
        uVar20 = local_428[uVar9];
        *(int *)(puVar18 + lVar12 * 4) = (int)uVar9;
        lVar12 = lVar12 + 1;
        lVar15 = (ulong)uVar20 + uVar9 * 0x10;
        local_428[uVar9] = uVar20 + 1;
        *(undefined8 *)(local_248 + lVar15 * 0x10) = uVar5;
        auStack_240[lVar15 * 2] = uVar6;
      } while (lVar12 != 4);
      puVar18 = puVar18 + 0x10;
      uVar10 = (ulong)((int)uVar10 + 4);
      iVar17 = iVar17 + 4;
      pbVar19 = pbVar19 + 0x40;
    } while (iVar17 != 0x10);
    uStack_380 = (uint)uVar3;
    if ((uint)param_5 <= param_6) {
      uVar20 = (uint)param_5;
      do {
        while( true ) {
          uVar7 = 0x13;
          if ((uVar20 != 3) && (uVar7 = 0x11, uVar20 != 4)) {
            uVar7 = (uint)(uVar20 != 5) * 5 + 0xf;
          }
          local_408 = (undefined1  [16])0x0;
          local_3f8 = (undefined1  [16])0x0;
          local_420[0] = '\0';
          local_420[1] = '\0';
          local_420[2] = '\0';
          local_420[3] = '\0';
          local_420[4] = '\0';
          local_420[5] = '\0';
          local_420[6] = '\0';
          local_420[7] = '\0';
          local_418 = 0.0;
          dVar21 = (double)encode_astc_hdr_block_mode_7
                                     (local_428[0],local_248,uVar20,(uint *)&local_418,in_XMM0_Qa,
                                      local_420,local_408,(astc_hdr_codec_options *)param_2,uVar7);
          dVar22 = (double)encode_astc_hdr_block_mode_7
                                     (local_428[1],local_148,uVar20,(uint *)((long)&local_418 + 4),
                                      0.0,local_420 + 4,local_3f8,(astc_hdr_codec_options *)param_2,
                                      uVar7);
          in_XMM0_Qa = dVar22 + dVar21 + 0.0;
          if (_LC18 <= in_XMM0_Qa) break;
          iVar17 = 0;
          uStack_390 = uVar20;
          uStack_38c = uVar7;
          uStack_32c = local_420._0_4_;
          uStack_328 = local_420._4_4_;
          local_410[0] = 0;
          local_410[1] = 0;
          puVar18 = local_3e8;
          do {
            lVar12 = 0;
            do {
              uVar10 = (ulong)*(uint *)(puVar18 + lVar12 * 4);
              uVar7 = *(uint *)(local_408 + uVar10 * 4 + -8);
              *(uint *)(local_408 + uVar10 * 4 + -8) = uVar7 + 1;
              iVar4 = (int)lVar12;
              lVar12 = lVar12 + 1;
              *(undefined1 *)((long)&uStack_370 + (ulong)(uint)(iVar17 + iVar4) + 4) =
                   local_408[(ulong)uVar7 + uVar10 * 0x10];
            } while (lVar12 != 4);
            iVar17 = iVar17 + 4;
            puVar18 = puVar18 + 0x10;
          } while (iVar17 != 0x10);
          dStack_300 = (double)CONCAT44(uStack_39c,uStack_3a0);
          local_2f8 = (double)CONCAT44(uStack_394,uStack_398);
          dStack_2f0 = (double)CONCAT44(uStack_38c,uStack_390);
          local_25a = 0;
          dStack_258 = 0.0;
          uStack_250 = 0;
          local_2e8 = (double)CONCAT44(uStack_384,local_388);
          dStack_2e0 = (double)CONCAT44(uStack_37c,uStack_380);
          local_308 = local_3a8;
          local_2d8 = (double)CONCAT44(uStack_374,uStack_378);
          dStack_310 = _LC18;
          uStack_26c = 0;
          dStack_2d0 = uStack_370;
          local_2c8 = local_368;
          dStack_2c0 = dStack_360;
          dStack_290 = (double)CONCAT44(uStack_32c,uStack_330);
          local_2b8 = local_358;
          dStack_2b0 = dStack_350;
          local_288 = (double)CONCAT44(uStack_324,uStack_328);
          local_24a = 0;
          local_278 = local_418;
          local_2a8 = local_348;
          dStack_2a0 = dStack_340;
          local_298 = local_338;
          dStack_280 = dStack_320;
          local_318 = in_XMM0_Qa;
          uStack_270 = uVar13;
          in_XMM0_Qa = (double)basist::transcode_bc6h_2subsets
                                         (uVar13,(log_astc_block *)&local_308,
                                          (bc6h_block *)&local_25a);
          uVar7 = *(uint *)(param_1 + 8);
          if (*(uint *)(param_1 + 0xc) <= uVar7) {
            in_XMM0_Qa = (double)basisu::elemental_vector::increase_capacity
                                           ((uint)param_1,(bool)((char)uVar7 + '\x01'),1,
                                            (_func_void_void_ptr_void_ptr_uint *)0xd0,false);
            uVar7 = *(uint *)(param_1 + 8);
          }
          uVar20 = uVar20 + 1;
          pdVar11 = (double *)((ulong)uVar7 * 0xd0 + *(long *)param_1);
          *pdVar11 = local_318;
          pdVar11[1] = dStack_310;
          pdVar11[2] = local_308;
          pdVar11[3] = dStack_300;
          pdVar11[4] = local_2f8;
          pdVar11[5] = dStack_2f0;
          pdVar11[6] = local_2e8;
          pdVar11[7] = dStack_2e0;
          pdVar11[8] = local_2d8;
          pdVar11[9] = dStack_2d0;
          pdVar11[10] = local_2c8;
          pdVar11[0xb] = dStack_2c0;
          pdVar11[0xc] = local_2b8;
          pdVar11[0xd] = dStack_2b0;
          pdVar11[0xe] = local_2a8;
          pdVar11[0xf] = dStack_2a0;
          pdVar11[0x10] = local_298;
          pdVar11[0x11] = dStack_290;
          pdVar11[0x12] = local_288;
          pdVar11[0x13] = dStack_280;
          pdVar11[0x14] = local_278;
          pdVar11[0x15] = (double)CONCAT26(uStack_26a,CONCAT24(uStack_26c,uStack_270));
          pdVar11[0x16] = dStack_268;
          pdVar11[0x17] = (double)CONCAT26(local_25a,uStack_260);
          pdVar11[0x18] = dStack_258;
          pdVar11[0x19] = (double)CONCAT17(uStack_249,CONCAT16(local_24a,uStack_250));
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          if (param_6 < uVar20) goto LAB_00106c4a;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 <= param_6);
    }
LAB_00106c4a:
    uVar14 = uVar14 + 1;
    if (uVar8 == uVar14) {
LAB_00106c59:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* basisu::astc_hdr_enc_block(float const*, basisu::astc_hdr_codec_options const&,
   basisu::vector<basisu::astc_hdr_pack_results>&) */

char basisu::astc_hdr_enc_block(float *param_1,astc_hdr_codec_options *param_2,vector *param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double *pdVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  double *pdVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  vec *pvVar21;
  astc_hdr_codec_options *paVar22;
  ushort uVar23;
  uint uVar24;
  ulong uVar25;
  astc_hdr_codec_options aVar26;
  int iVar27;
  long lVar28;
  astc_hdr_pack_results *paVar29;
  long lVar30;
  float *pfVar31;
  log_astc_block *plVar32;
  int *piVar33;
  byte *pbVar34;
  char cVar35;
  uint uVar36;
  vec *pvVar37;
  uchar *puVar38;
  char cVar39;
  uint uVar40;
  uint uVar41;
  long in_FS_OFFSET;
  byte bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar48 [16];
  undefined1 extraout_XMM0 [16];
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined8 in_stack_fffffffffffff990;
  ulong local_660;
  ulong local_658;
  ulong local_650;
  ushort local_638;
  uint local_5f0;
  uint local_5dc;
  uint local_5d8 [2];
  double local_5d0;
  float local_5c8 [4];
  undefined1 local_5b8 [6];
  undefined1 auStack_5b2 [4];
  undefined2 uStack_5ae;
  float fStack_5ac;
  undefined8 local_5a8;
  undefined8 local_598;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  undefined8 uStack_580;
  uint local_578 [16];
  uint local_538 [28];
  double local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  uint uStack_4b0;
  uint uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  uint uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined8 uStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  undefined1 auStack_460 [8];
  double local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined2 local_448;
  undefined4 uStack_446;
  undefined2 uStack_442;
  double dStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  uint uStack_390;
  undefined2 uStack_38c;
  undefined2 uStack_38a;
  double dStack_388;
  undefined6 uStack_380;
  undefined2 local_37a;
  undefined1 auStack_378 [14];
  undefined1 local_36a;
  undefined1 uStack_369;
  float local_368 [64];
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double dStack_228;
  undefined4 uStack_220;
  undefined4 local_21c;
  double dStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined4 local_1b8;
  undefined2 uStack_1b4;
  ushort uStack_1b2;
  uint6 uStack_1b0;
  undefined2 uStack_1aa;
  vec avStack_1a8 [14];
  undefined1 uStack_19a;
  undefined1 uStack_199;
  undefined4 local_5c;
  undefined1 local_58 [16];
  long local_40;
  
  cVar39 = g_astc_hdr_enc_initialized;
  bVar42 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (g_astc_hdr_enc_initialized == '\0') {
LAB_00106d0a:
    cVar39 = '\0';
    goto LAB_00106d0d;
  }
  if (*(int *)(param_3 + 8) != 0) {
    *(undefined4 *)(param_3 + 8) = 0;
  }
  pvVar21 = (vec *)local_368;
  pfVar31 = param_1;
  do {
    lVar12 = 0;
    do {
      fVar53 = *(float *)((long)pfVar31 + lVar12);
      auVar56 = ZEXT416((uint)fVar53);
      if (((__LC77 < (float)((uint)fVar53 & _LC26) || NAN(fVar53)) || (fVar53 < 0.0)) ||
         (_LC50 < fVar53)) goto LAB_00106d0a;
      *(float *)(pvVar21 + lVar12) = fVar53;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
    *(undefined4 *)(pvVar21 + 0xc) = _LC23;
    pvVar21 = pvVar21 + 0x10;
    pfVar31 = pfVar31 + 3;
  } while ((vec *)&local_268 != pvVar21);
  aVar26 = param_2[4];
  uVar11 = (uint)param_3;
  if (aVar26 == (astc_hdr_codec_options)0x0) {
LAB_00106df2:
    if (param_2[5] != (astc_hdr_codec_options)0x0) {
      iVar27 = *(int *)(param_3 + 8);
      in_stack_fffffffffffff990 = 0x10849a;
      auVar56._0_8_ =
           (double)pack_mode11((vec *)local_368,param_3,param_2,*(uint *)(param_2 + 8),
                               *(uint *)(param_2 + 0xc),false);
      auVar56._8_8_ = extraout_XMM0_Qb_06;
      if (*(int *)(param_2 + 0xc) == 8) {
        in_stack_fffffffffffff990 = 0x108cf5;
        auVar56._0_8_ = (double)pack_mode11((vec *)local_368,param_3,param_2,8,8,true);
        auVar56._8_8_ = extraout_XMM0_Qb_12;
      }
      if ((iVar27 == *(int *)(param_3 + 8)) && (*(int *)(param_2 + 8) == 8)) {
        in_stack_fffffffffffff990 = 0x1084dc;
        auVar56._0_8_ = (double)pack_mode11((vec *)local_368,param_3,param_2,7,7,false);
        auVar56._8_8_ = extraout_XMM0_Qb_07;
      }
    }
    if (param_2[0x1c] != (astc_hdr_codec_options)0x0) {
      auVar56 = (undefined1  [16])0x0;
      uVar41 = *(uint *)(param_2 + 0x20);
      local_5c = 0;
      local_58 = (undefined1  [16])0x0;
      if (uVar41 <= *(uint *)(param_2 + 0x24)) {
        do {
          in_stack_fffffffffffff990 = 0x14;
          auVar56._0_8_ =
               (double)encode_astc_hdr_block_mode_7
                                 (0x10,(vec *)local_368,uVar41,&local_5dc,auVar56._0_8_,
                                  (uchar *)&local_5c,local_58,param_2,0x14);
          auVar56._8_8_ = extraout_XMM0_Qb_03;
          if (auVar56._0_8_ < _LC18) {
            dStack_260 = _LC18;
            plVar32 = (log_astc_block *)&local_258;
            for (lVar12 = 0x12; lVar12 != 0; lVar12 = lVar12 + -1) {
              *(undefined8 *)plVar32 = 0;
              plVar32 = plVar32 + (ulong)bVar42 * -0x10 + 8;
            }
            uStack_19a = 0;
            uStack_24c = (undefined4)_LC67;
            uStack_248 = (undefined4)((ulong)_LC67 >> 0x20);
            uStack_23c = 0x14;
            local_1c8 = local_5dc;
            uStack_1c4 = 0;
            uStack_1c0 = 0;
            uStack_1bc = 0;
            uStack_234 = 1;
            uStack_22c = 7;
            uStack_1dc = local_5c;
            uStack_1aa = 0;
            avStack_1a8 = SUB1614((undefined1  [16])0x0,2);
            local_21c = local_58._0_4_;
            dStack_218 = local_58._4_8_;
            uStack_210 = local_58._12_4_;
            in_stack_fffffffffffff990 = 0x1082f4;
            local_268 = auVar56._0_8_;
            uStack_240 = uVar41;
            cVar9 = basist::decode_mode7_to_qlog12
                              ((uchar *)&uStack_1dc,(int *)&local_438,(int *)0x0,0x14);
            auVar56._8_8_ = extraout_XMM0_Qb_04;
            auVar56._0_8_ = (double)extraout_XMM0_Qa;
            if (cVar9 != '\0') {
              local_4c8 = (double)CONCAT62(CONCAT42(CONCAT22((&g_qlog16_to_half)
                                                             [(uint)((int)local_428 << 4)],
                                                             (&g_qlog16_to_half)
                                                             [(uint)(local_438._4_4_ << 4)]),
                                                    (&g_qlog16_to_half)
                                                    [(uint)(uStack_430._4_4_ << 4)]),
                                           (&g_qlog16_to_half)[(uint)((int)local_438 << 4)]);
              uStack_4c0 = CONCAT22((&g_qlog16_to_half)[(uint)(local_428._4_4_ << 4)],
                                    (&g_qlog16_to_half)[(uint)((int)uStack_430 << 4)]);
              in_stack_fffffffffffff990 = 0x10839b;
              auVar56._0_8_ =
                   (double)basist::transcode_bc6h_1subset
                                     ((unsigned_short *)&local_4c8,(log_astc_block *)&local_258,
                                      (bc6h_block *)&uStack_1aa);
              auVar56._8_8_ = extraout_XMM0_Qb_05;
              uVar40 = *(uint *)(param_3 + 8);
              if (*(uint *)(param_3 + 0xc) <= uVar40) {
                in_stack_fffffffffffff990 = 0x108a9d;
                auVar56._0_8_ =
                     (double)basisu::elemental_vector::increase_capacity
                                       (uVar11,(bool)((char)uVar40 + '\x01'),1,
                                        (_func_void_void_ptr_void_ptr_uint *)0xd0,false);
                auVar56._8_8_ = extraout_XMM0_Qb_10;
                uVar40 = *(uint *)(param_3 + 8);
              }
              pdVar16 = (double *)((ulong)uVar40 * 0xd0 + *(long *)param_3);
              *pdVar16 = local_268;
              pdVar16[1] = dStack_260;
              pdVar16[2] = local_258;
              pdVar16[3] = (double)CONCAT44(uStack_24c,uStack_250);
              pdVar16[4] = (double)CONCAT44(uStack_244,uStack_248);
              pdVar16[5] = (double)CONCAT44(uStack_23c,uStack_240);
              pdVar16[6] = (double)CONCAT44(uStack_234,local_238);
              pdVar16[7] = (double)CONCAT44(uStack_22c,uStack_230);
              pdVar16[8] = dStack_228;
              pdVar16[9] = (double)CONCAT44(local_21c,uStack_220);
              pdVar16[10] = dStack_218;
              pdVar16[0xb] = (double)CONCAT44(uStack_20c,uStack_210);
              pdVar16[0xc] = local_208;
              pdVar16[0xd] = dStack_200;
              pdVar16[0xe] = local_1f8;
              pdVar16[0xf] = dStack_1f0;
              pdVar16[0x10] = local_1e8;
              pdVar16[0x11] = (double)CONCAT44(uStack_1dc,uStack_1e0);
              auVar5._8_8_ = dStack_1d0;
              auVar5._0_8_ = local_1d8;
              *(undefined1 (*) [16])(pdVar16 + 0x12) = auVar5;
              pdVar16[0x14] = (double)CONCAT44(uStack_1c4,local_1c8);
              pdVar16[0x15] = (double)CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,uStack_1c0));
              pdVar16[0x16] = (double)CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,local_1b8));
              pdVar16[0x17] = (double)CONCAT26(uStack_1aa,uStack_1b0);
              auVar7[0xe] = uStack_19a;
              auVar7[0] = avStack_1a8[0];
              auVar7[1] = avStack_1a8[1];
              auVar7[2] = avStack_1a8[2];
              auVar7[3] = avStack_1a8[3];
              auVar7[4] = avStack_1a8[4];
              auVar7[5] = avStack_1a8[5];
              auVar7[6] = avStack_1a8[6];
              auVar7[7] = avStack_1a8[7];
              auVar7[8] = avStack_1a8[8];
              auVar7[9] = avStack_1a8[9];
              auVar7[10] = avStack_1a8[10];
              auVar7[0xb] = avStack_1a8[0xb];
              auVar7[0xc] = avStack_1a8[0xc];
              auVar7[0xd] = avStack_1a8[0xd];
              auVar7[0xf] = uStack_199;
              *(undefined1 (*) [16])(pdVar16 + 0x18) = auVar7;
              *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
            }
          }
          uVar41 = uVar41 + 1;
        } while (uVar41 <= *(uint *)(param_2 + 0x24));
      }
    }
    uVar41 = (uint)in_stack_fffffffffffff990;
    aVar26 = param_2[0x28];
    if (aVar26 == (astc_hdr_codec_options)0x0) {
      if (param_2[0x38] == (astc_hdr_codec_options)0x0) goto LAB_0010733f;
      if (param_2[0x58] != (astc_hdr_codec_options)0x0) goto LAB_00106e24;
LAB_00107084:
      pdVar16 = &local_4c8;
      for (lVar12 = 0x12; lVar12 != 0; lVar12 = lVar12 + -1) {
        *pdVar16 = 0.0;
        pdVar16 = pdVar16 + (ulong)bVar42 * -2 + 1;
      }
      uStack_4a4 = 2;
      uStack_4bc = (undefined4)_LC67;
      uStack_4b8 = (undefined4)((ulong)_LC67 >> 0x20);
      uStack_49c = (undefined4)_LC90;
      uStack_498 = (undefined4)((ulong)_LC90 >> 0x20);
LAB_001070c2:
      local_5f0 = 0;
      uVar25 = 0x1b;
    }
    else {
      if (param_2[0x58] == (astc_hdr_codec_options)0x0) {
        piVar33 = (int *)(ulong)*(uint *)(param_2 + 0x30);
        paVar22 = (astc_hdr_codec_options *)0x0;
        iVar27 = *(int *)(param_3 + 8);
        uVar40 = *(uint *)(param_2 + 0x34);
        cVar9 = '\0';
LAB_00108545:
        auVar56._0_8_ =
             (double)pack_mode7_2part((basisu *)local_368,(vec *)param_3,(vector *)param_2,paVar22,
                                      (int)local_538,piVar33,uVar40,uVar41);
        auVar56._8_8_ = extraout_XMM0_Qb_08;
        if ((*(int *)(param_3 + 8) == iVar27) && (2 < *(uint *)(param_2 + 0x30))) {
          paVar22 = (astc_hdr_codec_options *)0x0;
          if (cVar9 != '\0') {
            paVar22 = (astc_hdr_codec_options *)(ulong)*(uint *)(param_2 + 0x5c);
          }
          auVar56._0_8_ =
               (double)pack_mode7_2part((basisu *)local_368,(vec *)param_3,(vector *)param_2,paVar22
                                        ,(int)local_538,(int *)0x2,2,uVar41);
          auVar56._8_8_ = extraout_XMM0_Qb_09;
        }
        if (param_2[0x38] == (astc_hdr_codec_options)0x0) goto LAB_0010733f;
        if (cVar9 == '\0') goto LAB_00107084;
      }
      else {
LAB_00106e24:
        uVar40 = *(uint *)(param_2 + 0x5c);
        local_5c8[2] = 0.0;
        local_5c8[0] = 0.0;
        local_5c8[1] = 0.0;
        pvVar21 = (vec *)&local_268;
        pvVar37 = (vec *)local_368;
        do {
          uVar41 = *(uint *)pvVar37;
          uVar10 = (int)uVar41 >> 0x17 & 0xff;
          fVar53 = 0.0;
          if ((uVar10 != 0) && (fVar53 = _LC76, (int)(uVar10 - 0x7f) < 0x10)) {
            if ((int)(uVar10 - 0x7f) < -0xe) {
              iVar27 = 0;
              in_stack_fffffffffffff990 = 0x106e80;
              lVar12 = lrintf((float)(uVar41 & _LC26) * _LC61);
              uVar41 = (uint)lVar12;
            }
            else {
              iVar27 = uVar10 - 0x70;
              in_stack_fffffffffffff990 = 0x107067;
              lVar12 = lrintf((float)(uVar41 & 0x7fffff) * __LC62);
              uVar41 = (uint)lVar12;
            }
            if (uVar41 == 0x400) {
              fVar53 = (float)((iVar27 + 1U & 0x3f) << 10);
            }
            else {
              fVar53 = (float)((iVar27 << 10 | uVar41) & 0xffff);
            }
          }
          uVar41 = *(uint *)(pvVar37 + 4);
          *(float *)pvVar21 = fVar53;
          uVar10 = (int)uVar41 >> 0x17 & 0xff;
          fVar43 = 0.0;
          if ((uVar10 != 0) && (fVar43 = _LC76, (int)(uVar10 - 0x7f) < 0x10)) {
            if ((int)(uVar10 - 0x7f) < -0xe) {
              iVar27 = 0;
              in_stack_fffffffffffff990 = 0x106f01;
              lVar12 = lrintf(_LC61 * (float)(uVar41 & _LC26));
              uVar41 = (uint)lVar12;
            }
            else {
              iVar27 = uVar10 - 0x70;
              in_stack_fffffffffffff990 = 0x1078ab;
              lVar12 = lrintf((float)(uVar41 & 0x7fffff) * __LC62);
              uVar41 = (uint)lVar12;
            }
            if (uVar41 == 0x400) {
              fVar43 = (float)((iVar27 + 1U & 0x3f) << 10);
            }
            else {
              fVar43 = (float)((iVar27 << 10 | uVar41) & 0xffff);
            }
          }
          uVar41 = *(uint *)(pvVar37 + 8);
          *(float *)(pvVar21 + 4) = fVar43;
          uVar10 = (int)uVar41 >> 0x17 & 0xff;
          fVar44 = 0.0;
          if ((uVar10 != 0) && (fVar44 = _LC76, (int)(uVar10 - 0x7f) < 0x10)) {
            if ((int)(uVar10 - 0x7f) < -0xe) {
              iVar27 = 0;
              in_stack_fffffffffffff990 = 0x106f94;
              lVar12 = lrintf(_LC61 * (float)(uVar41 & _LC26));
              uVar41 = (uint)lVar12;
            }
            else {
              iVar27 = uVar10 - 0x70;
              in_stack_fffffffffffff990 = 0x1078d7;
              lVar12 = lrintf((float)(uVar41 & 0x7fffff) * __LC62);
              uVar41 = (uint)lVar12;
            }
            if (uVar41 == 0x400) {
              fVar44 = (float)((iVar27 + 1U & 0x3f) << 10);
            }
            else {
              fVar44 = (float)((iVar27 << 10 | uVar41) & 0xffff);
            }
          }
          fVar54 = local_5c8[0];
          uVar41 = (uint)in_stack_fffffffffffff990;
          *(float *)(pvVar21 + 8) = fVar44;
          pvVar21 = pvVar21 + 0xc;
          pvVar37 = pvVar37 + 0x10;
          local_5c8[2] = fVar44 + local_5c8[2];
          local_5c8[1] = fVar43 + local_5c8[1];
          local_5c8[0] = fVar53 + local_5c8[0];
        } while (pvVar21 != avStack_1a8);
        iVar27 = 4;
        auVar55._12_4_ = _UNK_0018a884;
        auVar55._8_4_ = _LC23;
        local_5a8 = CONCAT44(local_5c8[2] * _UNK_0018a934 + _LC86._4_4_,
                             local_5c8[1] * _LC78 + (float)_LC86);
        stack0xfffffffffffffa4c = _LC84 + _LC78 * local_5c8[1];
        local_5b8._0_4_ = _LC84 + _LC78 * (fVar54 + fVar53);
        stack0xfffffffffffffa50 = _LC84 + _LC78 * local_5c8[2];
        fStack_5ac = _LC78 * (fVar54 + fVar53) + (float)_LC86;
        do {
          fVar53 = 0.0;
          cVar9 = '\0';
          cVar35 = '\0';
          fVar43 = 0.0;
          uVar14 = 0;
          uVar25 = 0;
          iVar20 = 0;
          fStack_588 = 0.0;
          fStack_584 = 0.0;
          local_598 = 0;
          fStack_590 = 0.0;
          fStack_58c = 0.0;
          pvVar21 = (vec *)&local_268;
          do {
            lVar12 = 0;
            fVar44 = 0.0;
            do {
              pvVar37 = pvVar21 + lVar12;
              pfVar31 = (float *)(local_5b8 + lVar12);
              lVar12 = lVar12 + 4;
              fVar44 = fVar44 + (*(float *)pvVar37 - *pfVar31) * (*(float *)pvVar37 - *pfVar31);
            } while (lVar12 != 0xc);
            lVar12 = 0;
            fVar54 = 0.0;
            do {
              pvVar37 = pvVar21 + lVar12;
              lVar30 = lVar12 + 0xc;
              lVar12 = lVar12 + 4;
              fVar54 = fVar54 + (*(float *)pvVar37 - *(float *)(local_5b8 + lVar30)) *
                                (*(float *)pvVar37 - *(float *)(local_5b8 + lVar30));
            } while (lVar12 != 0xc);
            if (fVar54 <= fVar44) {
              uVar1 = *(undefined8 *)pvVar21;
              fVar53 = fVar53 + *(float *)(pvVar21 + 8);
              *(int *)((long)&local_3f8 + uVar14 * 4) = iVar20;
              uVar14 = (ulong)((int)uVar14 + 1);
              fStack_58c = (float)uVar1 + fStack_58c;
              fStack_588 = (float)((ulong)uVar1 >> 0x20) + fStack_588;
              cVar9 = cVar39;
            }
            else {
              uVar1 = *(undefined8 *)pvVar21;
              fVar43 = fVar43 + *(float *)(pvVar21 + 8);
              *(int *)((long)&local_438 + uVar25 * 4) = iVar20;
              uVar25 = (ulong)((int)uVar25 + 1);
              local_598 = CONCAT44((float)((ulong)local_598 >> 0x20) + (float)((ulong)uVar1 >> 0x20)
                                   ,(float)local_598 + (float)uVar1);
              cVar35 = cVar39;
            }
            iVar20 = iVar20 + 1;
            pvVar21 = pvVar21 + 0xc;
          } while (iVar20 != 0x10);
          if (cVar9 != '\0') {
            fStack_584 = fVar53;
          }
          if (cVar35 != '\0') {
            fStack_590 = fVar43;
          }
          uVar10 = (uint)uVar25;
          uVar19 = (uint)uVar14;
          auVar56._4_4_ = uVar10;
          auVar56._0_4_ = uVar10;
          auVar56._12_4_ = uVar19;
          auVar56._8_4_ = uVar10;
          if ((uVar10 == 0) || (uVar19 == 0)) {
            if (aVar26 == (astc_hdr_codec_options)0x0) {
              if (param_2[0x38] == (astc_hdr_codec_options)0x0) goto LAB_0010733f;
              goto LAB_00107084;
            }
            piVar33 = (int *)(ulong)*(uint *)(param_2 + 0x30);
            cVar9 = '\0';
            paVar22 = (astc_hdr_codec_options *)0x0;
            iVar27 = *(int *)(param_3 + 8);
            uVar40 = *(uint *)(param_2 + 0x34);
            goto LAB_00108545;
          }
          auVar51._4_4_ = fStack_584;
          auVar51._0_4_ = fStack_588;
          auVar51._8_8_ = 0;
          auVar55._0_4_ = (float)uVar14;
          auVar55._4_4_ = auVar55._0_4_;
          auVar52 = divps(auVar51,auVar55);
          auVar56 = auVar56 & __LC87;
          auVar48._0_4_ = (float)(uVar10 >> 0x10) * _LC89 + (float)auVar56._0_4_;
          auVar48._4_4_ = (float)(uVar10 >> 0x10) * _LC89 + (float)auVar56._4_4_;
          auVar48._8_4_ = (float)(uVar10 >> 0x10) * _LC89 + (float)auVar56._8_4_;
          auVar48._12_4_ = (float)(uVar19 >> 0x10) * _LC89 + (float)auVar56._12_4_;
          auVar3._8_4_ = fStack_590;
          auVar3._0_8_ = local_598;
          auVar3._12_4_ = fStack_58c;
          _local_5b8 = divps(auVar3,auVar48);
          local_5a8 = auVar52._0_8_;
          iVar27 = iVar27 + -1;
        } while (iVar27 != 0);
        lVar12 = 0;
        do {
          lVar30 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          local_578[*(uint *)((long)&local_438 + lVar30)] = 0;
        } while ((uint)lVar12 < uVar10);
        lVar12 = 0;
        do {
          lVar30 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          local_578[*(uint *)((long)&local_3f8 + lVar30)] = 1;
        } while ((uint)lVar12 < uVar19);
        lVar12 = 0;
        pbVar34 = (byte *)&basist::g_astc_bc7_common_partitions2;
        do {
          iVar27 = 0;
          iVar20 = 0;
          uVar25 = (ulong)*pbVar34 << 4;
          puVar17 = local_578;
          do {
            lVar30 = 0;
            do {
              puVar18 = puVar17 + lVar30;
              uVar41 = (uint)*(byte *)((long)&basist::g_bc7_partition2 +
                                      (ulong)(uint)((int)uVar25 + (int)lVar30));
              iVar20 = iVar20 + (uint)(*puVar18 == uVar41);
              lVar30 = lVar30 + 1;
              iVar27 = iVar27 + (uint)((uVar41 ^ 1) == *puVar18);
            } while (lVar30 != 4);
            puVar17 = puVar17 + 4;
            uVar25 = (ulong)((int)uVar25 + 4);
          } while (puVar17 != local_538);
          if (iVar27 < iVar20) {
            iVar27 = iVar20;
          }
          pbVar34 = pbVar34 + 6;
          *(uint *)((long)&local_4c8 + lVar12 * 4) = iVar27 << 8 | (uint)lVar12;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x1b);
        std::__introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (&local_4c8,auStack_460 + 4,8);
        pdVar16 = &local_488;
        uVar41 = 0x108938;
        std::__insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>(&local_4c8,pdVar16);
        do {
          uVar10 = *(uint *)pdVar16;
          uVar19 = *(uint *)((long)pdVar16 + -4);
          pdVar8 = pdVar16;
          while (uVar10 < uVar19) {
            *(uint *)pdVar8 = uVar19;
            uVar19 = *(uint *)(pdVar8 + -1);
            pdVar8 = (double *)((long)pdVar8 + -4);
          }
          pdVar16 = (double *)((long)pdVar16 + 4);
          *(uint *)pdVar8 = uVar10;
        } while (pdVar16 != (double *)(auStack_460 + 4));
        aVar26 = param_2[0x28];
        if (uVar40 != 0) {
          puVar17 = local_538;
          uVar25 = 0x1a;
          do {
            puVar18 = puVar17 + 1;
            *puVar17 = (uint)*(byte *)((long)&local_4c8 + uVar25 * 4);
            puVar17 = puVar18;
            uVar25 = (ulong)((int)uVar25 - 1);
          } while (puVar18 != local_538 + uVar40);
        }
        if (aVar26 != (astc_hdr_codec_options)0x0) {
          piVar33 = (int *)(ulong)*(uint *)(param_2 + 0x30);
          paVar22 = (astc_hdr_codec_options *)(ulong)*(uint *)(param_2 + 0x5c);
          iVar27 = *(int *)(param_3 + 8);
          uVar40 = *(uint *)(param_2 + 0x34);
          cVar9 = cVar39;
          goto LAB_00108545;
        }
        auVar56 = extraout_XMM0;
        if (param_2[0x38] == (astc_hdr_codec_options)0x0) goto LAB_0010733f;
      }
      local_5f0 = *(uint *)(param_2 + 0x5c);
      uVar25 = (ulong)local_5f0;
      pdVar16 = &local_4c8;
      for (lVar12 = 0x12; lVar12 != 0; lVar12 = lVar12 + -1) {
        *pdVar16 = 0.0;
        pdVar16 = pdVar16 + (ulong)bVar42 * -2 + 1;
      }
      uStack_4a4 = 2;
      uStack_4bc = (undefined4)_LC67;
      uStack_4b8 = (undefined4)((ulong)_LC67 >> 0x20);
      uStack_49c = (undefined4)_LC90;
      uStack_498 = (undefined4)((ulong)_LC90 >> 0x20);
      if (local_5f0 == 0) goto LAB_001070c2;
    }
    uStack_4a4 = 2;
    uVar14 = 0;
    do {
      if (local_5f0 == 0) {
        uVar41 = (uint)uVar14;
        while ((*(uint *)(param_2 + 0x3c) >> (uVar41 & 0x1f) & 1) == 0) {
          uVar14 = uVar14 + 1;
          if (uVar25 == uVar14) goto LAB_0010733f;
          uVar41 = (uint)uVar14;
        }
      }
      else {
        uVar41 = local_538[uVar14];
      }
      iVar27 = 0;
      lVar12 = (ulong)uVar41 * 6;
      uVar23 = *(ushort *)((long)&basist::g_astc_bc7_common_partitions2 + lVar12 + 2);
      local_5d8[0] = 0;
      local_5d8[1] = 0;
      cVar9 = *(char *)((long)&basist::g_astc_bc7_common_partitions2 + lVar12 + 4);
      uVar15 = (ulong)*(byte *)((long)&basist::g_astc_bc7_common_partitions2 + lVar12) << 4;
      puVar17 = local_578;
      pvVar21 = (vec *)local_368;
      do {
        lVar12 = 0;
        pvVar37 = pvVar21;
        do {
          uVar1 = *(undefined8 *)pvVar37;
          dVar2 = *(double *)(pvVar37 + 8);
          bVar42 = *(byte *)((long)&basist::g_bc7_partition2 +
                            (ulong)(uint)((int)uVar15 + (int)lVar12));
          uVar13 = (ulong)bVar42;
          if (cVar9 != '\0') {
            uVar13 = (ulong)(1 - bVar42);
          }
          pvVar37 = pvVar37 + 0x10;
          uVar40 = local_5d8[uVar13];
          puVar17[lVar12] = (uint)uVar13;
          lVar12 = lVar12 + 1;
          lVar30 = (ulong)uVar40 + uVar13 * 0x10;
          local_5d8[uVar13] = uVar40 + 1;
          *(undefined8 *)((vec *)&local_268 + lVar30 * 0x10) = uVar1;
          (&dStack_260)[lVar30 * 2] = dVar2;
        } while (lVar12 != 4);
        iVar27 = iVar27 + 4;
        puVar17 = puVar17 + 4;
        pvVar21 = pvVar21 + 0x40;
        uVar15 = (ulong)((int)uVar15 + 4);
      } while (iVar27 != 0x10);
      uVar40 = *(uint *)(param_2 + 0x40);
      uStack_4a0 = (uint)uVar23;
      if (uVar40 <= *(uint *)(param_2 + 0x44)) {
        do {
                    /* WARNING: Ignoring partial resolution of indirect */
          _local_5b8 = 0;
          auVar50 = (undefined1  [16])0x0;
          uVar10 = (uVar40 != 2) + 0xc + (uint)(uVar40 != 2);
          local_5d0 = 0.0;
          lVar12 = 0;
          local_598 = 0;
          fStack_590 = 0.0;
          fStack_58c = 0.0;
          fStack_588 = 0.0;
          fStack_584 = 0.0;
          uStack_580 = 0;
          puVar38 = local_5b8;
          do {
            if ((param_2[6] == (astc_hdr_codec_options)0x0) || (uVar40 < 2)) {
              aVar26 = (astc_hdr_codec_options)0x0;
            }
            else {
              aVar26 = param_2[0x60];
            }
            puVar17 = (uint *)((long)local_5d8 + lVar12);
            lVar28 = lVar12 * 0x40;
            puVar18 = (uint *)((long)&local_5d0 + lVar12);
            lVar30 = lVar12 * 4;
            lVar12 = lVar12 + 4;
            auVar56._0_8_ =
                 (double)encode_astc_hdr_block_mode_11
                                   (*puVar17,(vec *)&local_268 + lVar28,uVar40,puVar18,auVar56._0_8_
                                    ,puVar38,(uchar *)((long)&local_598 + lVar30),param_2,false,
                                    uVar10,(bool)aVar26,false,*(int *)(param_2 + 0x14),
                                    *(int *)(param_2 + 0x18));
            auVar56._8_8_ = extraout_XMM0_Qb;
            auVar50._0_8_ = auVar50._0_8_ + auVar56._0_8_;
            auVar50._8_8_ = 0;
            puVar38 = puVar38 + 6;
          } while (lVar12 != 8);
          if (auVar50._0_8_ < _LC18) {
            iVar27 = 0;
            uStack_4b0 = uVar40;
            uStack_4ac = uVar10;
            uStack_44c = local_5b8._0_4_;
            local_5c8[0] = 0.0;
            local_5c8[1] = 0.0;
            local_448 = local_5b8._4_2_;
            uStack_446 = auStack_5b2;
            uStack_442 = uStack_5ae;
            puVar17 = local_578;
            do {
              lVar12 = 0;
              do {
                uVar15 = (ulong)puVar17[lVar12];
                fVar53 = local_5c8[uVar15];
                local_5c8[uVar15] = (float)((int)fVar53 + 1);
                iVar20 = (int)lVar12;
                lVar12 = lVar12 + 1;
                *(undefined1 *)((long)&uStack_490 + (ulong)(uint)(iVar27 + iVar20) + 4) =
                     *(undefined1 *)((long)&local_598 + (ulong)(uint)fVar53 + uVar15 * 0x10);
              } while (lVar12 != 4);
              iVar27 = iVar27 + 4;
              puVar17 = puVar17 + 4;
            } while (iVar27 != 0x10);
            dStack_420 = (double)CONCAT44(uStack_4bc,uStack_4c0);
            local_37a = 0;
            auStack_378 = SUB1614((undefined1  [16])0x0,2);
            local_418 = (double)CONCAT44(uStack_4b4,uStack_4b8);
            dStack_410 = (double)CONCAT44(uStack_4ac,uStack_4b0);
            local_36a = 0;
            local_428 = local_4c8;
            local_408 = (double)CONCAT44(uStack_4a4,local_4a8);
            dStack_400 = (double)CONCAT44(uStack_49c,uStack_4a0);
            local_3f8 = (double)CONCAT44(uStack_494,uStack_498);
            uStack_430 = _LC18;
            dStack_3f0 = uStack_490;
            local_3e8 = local_488;
            dStack_3e0 = dStack_480;
            dStack_3b0 = (double)CONCAT44(uStack_44c,uStack_450);
            local_3d8 = local_478;
            dStack_3d0 = dStack_470;
            local_3a8 = (double)CONCAT26(uStack_442,CONCAT42(uStack_446,local_448));
            uStack_38c = 0;
            local_398 = local_5d0;
            local_3c8 = local_468;
            dStack_3c0 = (double)auStack_460;
            local_3b8 = local_458;
            dStack_3a0 = dStack_440;
            local_438 = auVar50._0_8_;
            uStack_390 = uVar41;
            auVar56._0_8_ =
                 (double)basist::transcode_bc6h_2subsets
                                   (uVar41,(log_astc_block *)&local_428,(bc6h_block *)&local_37a);
            auVar56._8_8_ = extraout_XMM0_Qb_00;
            uVar10 = *(uint *)(param_3 + 8);
            if (*(uint *)(param_3 + 0xc) <= uVar10) {
              auVar56._0_8_ =
                   (double)basisu::elemental_vector::increase_capacity
                                     (uVar11,(bool)((char)uVar10 + '\x01'),1,
                                      (_func_void_void_ptr_void_ptr_uint *)0xd0,false);
              auVar56._8_8_ = extraout_XMM0_Qb_01;
              uVar10 = *(uint *)(param_3 + 8);
            }
            pdVar16 = (double *)((ulong)uVar10 * 0xd0 + *(long *)param_3);
            *pdVar16 = local_438;
            pdVar16[1] = uStack_430;
            pdVar16[2] = local_428;
            pdVar16[3] = dStack_420;
            pdVar16[4] = local_418;
            pdVar16[5] = dStack_410;
            pdVar16[6] = local_408;
            pdVar16[7] = dStack_400;
            pdVar16[8] = local_3f8;
            pdVar16[9] = dStack_3f0;
            pdVar16[10] = local_3e8;
            pdVar16[0xb] = dStack_3e0;
            pdVar16[0xc] = local_3d8;
            pdVar16[0xd] = dStack_3d0;
            pdVar16[0xe] = local_3c8;
            pdVar16[0xf] = dStack_3c0;
            pdVar16[0x10] = local_3b8;
            pdVar16[0x11] = dStack_3b0;
            pdVar16[0x12] = local_3a8;
            pdVar16[0x13] = dStack_3a0;
            pdVar16[0x14] = local_398;
            pdVar16[0x15] = (double)CONCAT26(uStack_38a,CONCAT24(uStack_38c,uStack_390));
            pdVar16[0x16] = dStack_388;
            pdVar16[0x17] = (double)CONCAT26(local_37a,uStack_380);
            auVar4[0xe] = local_36a;
            auVar4._0_14_ = auStack_378;
            auVar4[0xf] = uStack_369;
            *(undefined1 (*) [16])(pdVar16 + 0x18) = auVar4;
            *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
          }
          uVar40 = uVar40 + 1;
        } while (uVar40 <= *(uint *)(param_2 + 0x44));
      }
      uVar14 = uVar14 + 1;
    } while (uVar25 != uVar14);
  }
  else {
    fVar53 = *(float *)(param_2 + 0x48);
    fVar46 = 0.0;
    fVar54 = 0.0;
    fVar43 = *(float *)(param_2 + 0x4c);
    fVar44 = 0.0;
    pvVar21 = (vec *)local_368;
    do {
      if (((*(float *)pvVar21 != local_368[0]) || (local_368[1] != *(float *)(pvVar21 + 4))) ||
         (local_368[2] != *(float *)(pvVar21 + 8))) {
        aVar26 = (astc_hdr_codec_options)0x0;
      }
      pvVar37 = pvVar21 + 0x10;
      fVar45 = log2f(*(float *)pvVar21 + _LC20);
      fVar44 = fVar45 + fVar44;
      fVar45 = log2f(_LC20 + *(float *)(pvVar21 + 4));
      fVar54 = fVar45 + fVar54;
      fVar45 = log2f(_LC20 + *(float *)(pvVar21 + 8));
      fVar46 = fVar45 + fVar46;
      pvVar21 = pvVar37;
    } while ((vec *)&local_268 != pvVar37);
    if (aVar26 == (astc_hdr_codec_options)0x0) {
      fVar44 = powf(_LC3,_LC78 * fVar44);
      fVar44 = fVar44 - _LC20;
      if (fVar44 < 0.0) {
        fVar44 = 0.0;
      }
      fVar54 = powf(_LC3,_LC78 * fVar54);
      fVar54 = fVar54 - _LC20;
      if (fVar54 < 0.0) {
        fVar54 = 0.0;
      }
      fVar46 = powf(_LC3,_LC78 * fVar46);
      local_368[2] = fVar46 - _LC20;
      uVar41 = (int)fVar54 >> 0x17;
      local_368[0] = fVar44;
      if (0.0 <= local_368[2]) {
        if (_LC50 <= fVar44) {
          uVar40 = 0x8e;
          uVar10 = 0x7fe000;
          local_368[0] = _LC50;
        }
        else {
          uVar10 = (uint)fVar44 & 0x7fffff;
          uVar40 = (int)fVar44 >> 0x17 & 0xff;
        }
        if (_LC50 <= fVar54) {
          uVar41 = 0x8e;
          uVar19 = 0x7fe000;
          fVar54 = _LC50;
        }
        else {
          uVar19 = (uint)fVar54 & 0x7fffff;
          uVar41 = uVar41 & 0xff;
        }
        if (local_368[2] < _LC50) goto LAB_00107a27;
        uVar24 = 0x8e;
        uVar36 = 0x7fe000;
        fVar44 = _LC50;
        goto LAB_00107a3b;
      }
      if (fVar44 < _LC50) {
        uVar10 = (uint)fVar44 & 0x7fffff;
        uVar40 = (int)fVar44 >> 0x17 & 0xff;
        if (_LC50 <= fVar54) {
          uVar24 = 0;
          uVar36 = 0;
          uVar41 = 0x8e;
          uVar19 = 0x7fe000;
          fVar44 = 0.0;
          fVar54 = _LC50;
        }
        else {
          uVar36 = 0;
          fVar44 = 0.0;
          uVar41 = uVar41 & 0xff;
          uVar19 = (uint)fVar54 & 0x7fffff;
          uVar24 = 0;
        }
        goto LAB_00107a3b;
      }
      if (_LC50 <= fVar54) {
        uVar41 = 0x8e;
        uVar19 = 0x7fe000;
        fVar54 = _LC50;
      }
      else {
        uVar19 = (uint)fVar54 & 0x7fffff;
        uVar41 = uVar41 & 0xff;
      }
      uVar24 = 0;
      uVar36 = 0;
      uVar10 = 0x7fe000;
      uVar40 = 0x8e;
      fVar44 = 0.0;
LAB_00108bd6:
      iVar27 = uVar40 - 0x70;
      lVar12 = lrintf((float)uVar10 * __LC62);
      uVar40 = (uint)lVar12;
LAB_00108c19:
      if (uVar40 == 0x400) {
        uVar23 = 0;
        iVar27 = (iVar27 + 1) * 0x400;
        local_638 = (ushort)iVar27;
        local_660 = (ulong)(ushort)((uint)iVar27 >> 8) & 0xffffffffffff00ff;
      }
      else {
        uVar40 = iVar27 << 10 | uVar40;
        uVar23 = (ushort)uVar40;
        local_660 = (ulong)(ushort)(uVar40 >> 8) & 0xffffffffffff00ff;
        local_638 = uVar23;
      }
    }
    else {
      uVar10 = (uint)local_368[0] & 0x7fffff;
      uVar40 = (int)local_368[0] >> 0x17 & 0xff;
      uVar19 = (uint)local_368[1] & 0x7fffff;
      uVar41 = (int)local_368[1] >> 0x17 & 0xff;
      fVar54 = local_368[1];
LAB_00107a27:
      uVar36 = (uint)local_368[2] & 0x7fffff;
      uVar24 = (int)local_368[2] >> 0x17 & 0xff;
      fVar44 = local_368[2];
LAB_00107a3b:
      if (uVar40 == 0) {
        local_660 = 0;
        uVar23 = 0;
        local_638 = 0;
      }
      else {
        if ((int)(uVar40 - 0x7f) < 0x10) {
          if (-0xf < (int)(uVar40 - 0x7f)) goto LAB_00108bd6;
          iVar27 = 0;
          lVar12 = lrintf((float)((uint)local_368[0] & _LC26) * _LC61);
          uVar40 = (uint)lVar12;
          goto LAB_00108c19;
        }
        local_660 = 0x7c;
        uVar23 = 0;
        local_638 = 0x7c00;
      }
    }
    if (uVar41 == 0) {
      local_650 = 0;
      uVar41 = 0;
      local_658 = 0;
    }
    else if ((int)(uVar41 - 0x7f) < 0x10) {
      if ((int)(uVar41 - 0x7f) < -0xe) {
        iVar27 = 0;
        lVar12 = lrintf((float)((uint)fVar54 & _LC26) * _LC61);
        uVar40 = (uint)lVar12;
      }
      else {
        iVar27 = uVar41 - 0x70;
        lVar12 = lrintf((float)uVar19 * __LC62);
        uVar40 = (uint)lVar12;
      }
      if (uVar40 == 0x400) {
        local_658 = 0;
        uVar41 = (iVar27 + 1) * 0x400;
        local_650 = (ulong)(ushort)(uVar41 >> 8) & 0xffffffffffff00ff;
      }
      else {
        uVar41 = uVar40 | iVar27 << 10;
        local_658 = (ulong)(byte)uVar40;
        local_650 = (ulong)(ushort)(uVar41 >> 8) & 0xffffffffffff00ff;
      }
    }
    else {
      local_650 = 0x7c;
      uVar41 = 0x7c00;
      local_658 = 0;
    }
    if (uVar24 == 0) {
      uVar25 = 0;
      uVar10 = 0;
      uVar40 = 0;
    }
    else if ((int)(uVar24 - 0x7f) < 0x10) {
      if ((int)(uVar24 - 0x7f) < -0xe) {
        lVar12 = lrintf((float)((uint)fVar44 & _LC26) * _LC61);
        uVar10 = (uint)lVar12;
        iVar27 = 0;
      }
      else {
        iVar27 = uVar24 - 0x70;
        lVar12 = lrintf((float)uVar36 * __LC62);
        uVar10 = (uint)lVar12;
      }
      if (uVar10 == 0x400) {
        uVar40 = 0;
        uVar10 = (iVar27 + 1) * 0x400;
        uVar25 = (ulong)(uVar10 >> 8 & 0xff);
      }
      else {
        uVar10 = iVar27 << 10 | uVar10;
        uVar25 = (ulong)(uVar10 >> 8 & 0xff);
        uVar40 = uVar10;
      }
    }
    else {
      uVar25 = 0x7c;
      uVar10 = 0x7c00;
      uVar40 = 0;
    }
    uVar14 = lrintf(0.0);
    if ((int)uVar14 == 0x400) {
      uVar14 = 0x40;
      uVar15 = 0;
    }
    else {
      uVar15 = uVar14 & 0xff;
      uVar14 = (ulong)(byte)((byte)(uVar14 >> 8) | 0x3c);
    }
    dStack_260 = _LC18;
    pdVar16 = &local_258;
    for (lVar12 = 0x12; lVar12 != 0; lVar12 = lVar12 + -1) {
      *pdVar16 = 0.0;
      pdVar16 = pdVar16 + (ulong)bVar42 * -2 + 1;
    }
    uStack_23c = 0x14;
    uStack_1b4 = 0xffff;
    uStack_24c = (undefined4)_LC67;
    uStack_248 = (undefined4)((ulong)_LC67 >> 0x20);
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1ba = 0xfffc;
    local_1c8 = 0;
    uStack_1c4 = 0;
    uStack_19a = 1;
    uStack_1aa = 0;
    avStack_1a8 = SUB1614((undefined1  [16])0x0,2);
    local_1b8 = 0xffffffff;
    local_268 = 0.0;
    uStack_1b0 = (uint6)(((((uVar14 << 8 | uVar15) << 8 | uVar25) << 8 | (ulong)(byte)uVar40) << 8 |
                         local_650) << 8) | (uint6)local_658;
    uStack_1b2 = (ushort)(local_660 << 8) | uVar23 & 0xff;
    if (aVar26 == (astc_hdr_codec_options)0x0) {
      pvVar21 = (vec *)local_368;
      fVar44 = _LC19;
      do {
        dVar2 = local_268;
        uVar40 = *(uint *)pvVar21;
        uVar19 = (int)uVar40 >> 0x17 & 0xff;
        fVar54 = 0.0;
        if ((uVar19 != 0) && (fVar54 = _LC73, (int)(uVar19 - 0x7f) < 0x10)) {
          if ((int)(uVar19 - 0x7f) < -0xe) {
            iVar27 = 0;
            lVar12 = lrintf((float)(uVar40 & _LC26) * _LC61);
            uVar40 = (uint)lVar12;
          }
          else {
            iVar27 = uVar19 - 0x70;
            lVar12 = lrintf((float)(uVar40 & 0x7fffff) * __LC62);
            uVar40 = (uint)lVar12;
          }
          fVar44 = _LC19;
          if (uVar40 == 0x400) {
            fVar54 = (float)((iVar27 + 1) * 0x800000 & 0x1f800000);
          }
          else {
            fVar54 = (float)(((iVar27 << 10 | uVar40) & 0xffff) << 0xd);
          }
        }
        uVar40 = *(uint *)(pvVar21 + 4);
        uVar19 = (int)uVar40 >> 0x17 & 0xff;
        fVar46 = 0.0;
        if ((uVar19 != 0) && (fVar46 = _LC73, (int)(uVar19 - 0x7f) < 0x10)) {
          if ((int)(uVar19 - 0x7f) < -0xe) {
            iVar27 = 0;
            lVar12 = lrintf((float)(uVar40 & _LC26) * _LC61);
            uVar40 = (uint)lVar12;
          }
          else {
            iVar27 = uVar19 - 0x70;
            lVar12 = lrintf((float)(uVar40 & 0x7fffff) * __LC62);
            uVar40 = (uint)lVar12;
          }
          fVar44 = _LC19;
          if (uVar40 == 0x400) {
            fVar46 = (float)((iVar27 + 1) * 0x800000 & 0x1f800000);
          }
          else {
            fVar46 = (float)(((iVar27 << 10 | uVar40) & 0xffff) << 0xd);
          }
        }
        uVar40 = *(uint *)(pvVar21 + 8);
        uVar19 = (int)uVar40 >> 0x17 & 0xff;
        dVar57 = _LC74;
        if ((uVar19 != 0) && (dVar57 = _LC75, (int)(uVar19 - 0x7f) < 0x10)) {
          if ((int)(uVar19 - 0x7f) < -0xe) {
            iVar27 = 0;
            lVar12 = lrintf((float)(uVar40 & _LC26) * _LC61);
            uVar40 = (uint)lVar12;
          }
          else {
            iVar27 = uVar19 - 0x70;
            lVar12 = lrintf((float)(uVar40 & 0x7fffff) * __LC62);
            uVar40 = (uint)lVar12;
          }
          if (uVar40 == 0x400) {
            fVar44 = (float)((iVar27 + 1) * 0x800000 & 0x1f800000);
          }
          else {
            fVar44 = (float)(((iVar27 << 10 | uVar40) & 0xffff) << 0xd);
          }
          dVar57 = (double)(uint)(fVar44 * _LC19 + _LC20);
          fVar44 = _LC19;
        }
        pvVar21 = pvVar21 + 0x10;
        dVar47 = (double)(uint)((float)((uint)local_638 << 0xd) * fVar44 + _LC20) -
                 (double)(uint)(fVar54 * fVar44 + _LC20);
        dVar49 = (double)(uint)((float)((uVar41 & 0xffff) << 0xd) * fVar44 + _LC20) -
                 (double)(uint)(fVar46 * fVar44 + _LC20);
        dVar57 = (double)(uint)((float)((uVar10 & 0xffff) << 0xd) * fVar44 + _LC20) - dVar57;
        local_268 = dVar2 + dVar47 * dVar47 * (double)fVar53 + dVar49 * dVar49 * (double)fVar43 +
                            dVar57 * dVar57;
      } while ((vec *)&local_268 != pvVar21);
    }
    local_438 = (double)CONCAT62(CONCAT24(local_438._6_2_,CONCAT22((short)uVar10,(short)uVar41)),
                                 local_638);
    in_stack_fffffffffffff990 = 0x10802e;
    auVar56._0_8_ =
         (double)basist::bc6h_enc_block_solid_color((bc6h_block *)&uStack_1aa,(ushort *)&local_438);
    auVar56._8_8_ = extraout_XMM0_Qb_02;
    uVar41 = *(uint *)(param_3 + 8);
    if (*(uint *)(param_3 + 0xc) <= uVar41) {
      in_stack_fffffffffffff990 = 0x108ad4;
      auVar56._0_8_ =
           (double)basisu::elemental_vector::increase_capacity
                             (uVar11,(bool)((char)uVar41 + '\x01'),1,
                              (_func_void_void_ptr_void_ptr_uint *)0xd0,false);
      auVar56._8_8_ = extraout_XMM0_Qb_11;
      uVar41 = *(uint *)(param_3 + 8);
    }
    pdVar16 = (double *)((ulong)uVar41 * 0xd0 + *(long *)param_3);
    *pdVar16 = local_268;
    pdVar16[1] = dStack_260;
    pdVar16[2] = local_258;
    pdVar16[3] = (double)CONCAT44(uStack_24c,uStack_250);
    pdVar16[4] = (double)CONCAT44(uStack_244,uStack_248);
    pdVar16[5] = (double)CONCAT44(uStack_23c,uStack_240);
    pdVar16[6] = (double)CONCAT44(uStack_234,local_238);
    pdVar16[7] = (double)CONCAT44(uStack_22c,uStack_230);
    pdVar16[8] = dStack_228;
    pdVar16[9] = (double)CONCAT44(local_21c,uStack_220);
    pdVar16[10] = dStack_218;
    pdVar16[0xb] = (double)CONCAT44(uStack_20c,uStack_210);
    pdVar16[0xc] = local_208;
    pdVar16[0xd] = dStack_200;
    pdVar16[0xe] = local_1f8;
    pdVar16[0xf] = dStack_1f0;
    pdVar16[0x10] = local_1e8;
    pdVar16[0x11] = (double)CONCAT44(uStack_1dc,uStack_1e0);
    pdVar16[0x12] = local_1d8;
    pdVar16[0x13] = dStack_1d0;
    auVar52._4_4_ = uStack_1c4;
    auVar52._0_4_ = local_1c8;
    auVar52._8_4_ = uStack_1c0;
    auVar52._12_2_ = uStack_1bc;
    auVar52._14_2_ = uStack_1ba;
    *(undefined1 (*) [16])(pdVar16 + 0x14) = auVar52;
    pdVar16[0x16] = (double)CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,local_1b8));
    pdVar16[0x17] = (double)CONCAT26(uStack_1aa,uStack_1b0);
    auVar6[0xe] = uStack_19a;
    auVar6[0] = avStack_1a8[0];
    auVar6[1] = avStack_1a8[1];
    auVar6[2] = avStack_1a8[2];
    auVar6[3] = avStack_1a8[3];
    auVar6[4] = avStack_1a8[4];
    auVar6[5] = avStack_1a8[5];
    auVar6[6] = avStack_1a8[6];
    auVar6[7] = avStack_1a8[7];
    auVar6[8] = avStack_1a8[8];
    auVar6[9] = avStack_1a8[9];
    auVar6[10] = avStack_1a8[10];
    auVar6[0xb] = avStack_1a8[0xb];
    auVar6[0xc] = avStack_1a8[0xc];
    auVar6[0xd] = avStack_1a8[0xd];
    auVar6[0xf] = uStack_199;
    *(undefined1 (*) [16])(pdVar16 + 0x18) = auVar6;
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    if (aVar26 == (astc_hdr_codec_options)0x0) goto LAB_00106df2;
  }
LAB_0010733f:
  if (param_2[0x50] != (astc_hdr_codec_options)0x0) {
    pvVar21 = (vec *)&local_268;
    do {
      fVar53 = *param_1;
      uVar23 = 0;
      uVar11 = (int)fVar53 >> 0x17 & 0xff;
      if (uVar11 != 0) {
        uVar23 = 0x7c00;
        if ((int)(uVar11 - 0x7f) < 0x10) {
          if ((int)(uVar11 - 0x7f) < -0xe) {
            iVar27 = 0;
            lVar12 = lrintf((float)((uint)fVar53 & _LC26) * _LC61);
            iVar20 = (int)lVar12;
          }
          else {
            iVar27 = uVar11 - 0x70;
            lVar12 = lrintf((float)((uint)fVar53 & 0x7fffff) * __LC62);
            iVar20 = (int)lVar12;
          }
          if (iVar20 == 0x400) {
            uVar23 = ((short)iVar27 + 1) * 0x400;
          }
          else {
            uVar23 = (ushort)(iVar27 << 10) | (ushort)iVar20;
          }
        }
      }
      fVar53 = param_1[1];
      *(ushort *)pvVar21 = uVar23;
      uVar23 = 0;
      uVar11 = (int)fVar53 >> 0x17 & 0xff;
      if (uVar11 != 0) {
        uVar23 = 0x7c00;
        if ((int)(uVar11 - 0x7f) < 0x10) {
          if ((int)(uVar11 - 0x7f) < -0xe) {
            iVar27 = 0;
            lVar12 = lrintf((float)((uint)fVar53 & _LC26) * _LC61);
            iVar20 = (int)lVar12;
          }
          else {
            iVar27 = uVar11 - 0x70;
            lVar12 = lrintf((float)((uint)fVar53 & 0x7fffff) * __LC62);
            iVar20 = (int)lVar12;
          }
          if (iVar20 == 0x400) {
            uVar23 = ((short)iVar27 + 1) * 0x400;
          }
          else {
            uVar23 = (ushort)(iVar27 << 10) | (ushort)iVar20;
          }
        }
      }
      fVar53 = param_1[2];
      *(ushort *)(pvVar21 + 2) = uVar23;
      uVar23 = 0;
      uVar11 = (int)fVar53 >> 0x17 & 0xff;
      if (uVar11 != 0) {
        uVar23 = 0x7c00;
        if ((int)(uVar11 - 0x7f) < 0x10) {
          if ((int)(uVar11 - 0x7f) < -0xe) {
            iVar27 = 0;
            lVar12 = lrintf((float)((uint)fVar53 & _LC26) * _LC61);
            iVar20 = (int)lVar12;
          }
          else {
            iVar27 = uVar11 - 0x70;
            lVar12 = lrintf((float)((uint)fVar53 & 0x7fffff) * __LC62);
            iVar20 = (int)lVar12;
          }
          if (iVar20 == 0x400) {
            uVar23 = ((short)iVar27 + 1) * 0x400;
          }
          else {
            uVar23 = (ushort)(iVar27 << 10) | (ushort)iVar20;
          }
        }
      }
      *(ushort *)(pvVar21 + 4) = uVar23;
      pvVar21 = pvVar21 + 6;
      param_1 = param_1 + 3;
    } while ((vec *)&local_208 != pvVar21);
    lVar12 = 0;
    uVar11 = 0;
    if (*(int *)(param_3 + 8) != 0) {
      do {
        fVar53 = *(float *)param_2;
        paVar29 = (astc_hdr_pack_results *)(*(long *)param_3 + lVar12);
        paVar29[0xad] = (astc_hdr_pack_results)0x0;
        if (paVar29[0xce] == (astc_hdr_pack_results)0x0) {
          astc_hdr_refine_weights
                    ((ushort *)&local_268,paVar29,param_2,fVar53,(bool *)(paVar29 + 0xad));
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0xd0;
      } while (uVar11 < *(uint *)(param_3 + 8));
    }
  }
LAB_00106d0d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar39;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::try_mode11(unsigned int, unsigned char*, unsigned char*, double&, unsigned int&,
   basisu::vec<3u, float>&, basisu::vec<3u, float> const&, unsigned short (*) [3], unsigned int,
   unsigned int, basisu::astc_hdr_codec_options const&, bool, unsigned int, bool, int, int) [clone
   .cold] */

void basisu::try_mode11(uint param_1,uchar *param_2,uchar *param_3,double *param_4,uint *param_5,
                       vec *param_6,vec *param_7,unsigned_short *param_8,uint param_9,uint param_10,
                       astc_hdr_codec_options *param_11,bool param_12,uint param_13,bool param_14,
                       int param_15,int param_16)

{
  FUN_00101e68();
  return;
}



/* basisu::intersection::result basisu::intersection::ray_aabb<basisu::vec<3u, float>, float,
   basisu::ray<basisu::vec<3u, float> >, basisu::vec_interval<basisu::vec<3u, float> >
   >(basisu::vec<3u, float>&, float&, basisu::ray<basisu::vec<3u, float> > const&,
   basisu::vec_interval<basisu::vec<3u, float> > const&) */

undefined8
basisu::intersection::
ray_aabb<basisu::vec<3u,float>,float,basisu::ray<basisu::vec<3u,float>>,basisu::vec_interval<basisu::vec<3u,float>>>
          (vec *param_1,float *param_2,ray *param_3,vec_interval *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  int local_34 [3];
  float afStack_28 [6];
  long local_10;
  
  bVar1 = true;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  piVar5 = local_34;
  do {
    fVar6 = *(float *)(param_4 + lVar2);
    if (fVar6 <= *(float *)(param_3 + lVar2)) {
      fVar6 = *(float *)(param_4 + lVar2 + 0xc);
      if (fVar6 < *(float *)(param_3 + lVar2)) {
        *piVar5 = 0;
        goto LAB_0018a695;
      }
      *piVar5 = 2;
    }
    else {
      *piVar5 = 1;
LAB_0018a695:
      *(float *)((long)afStack_28 + lVar2) = fVar6;
      bVar1 = false;
    }
    lVar2 = lVar2 + 4;
    piVar5 = piVar5 + 1;
  } while (lVar2 != 0xc);
  lVar2 = 0;
  if (bVar1) {
    if (param_1 != (vec *)param_3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
    }
    *param_2 = 0.0;
    uVar3 = 3;
  }
  else {
    do {
      fVar6 = _LC49;
      if ((*(int *)((long)local_34 + lVar2) != 2) && (*(float *)(param_3 + lVar2 + 0xc) != 0.0)) {
        fVar6 = (*(float *)((long)afStack_28 + lVar2) - *(float *)(param_3 + lVar2)) /
                *(float *)(param_3 + lVar2 + 0xc);
      }
      *(float *)((long)afStack_28 + lVar2 + 0xc) = fVar6;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0xc);
    uVar4 = (uint)(afStack_28[3] < afStack_28[4]);
    fVar6 = afStack_28[(ulong)(afStack_28[3] < afStack_28[4]) + 3];
    if (fVar6 < afStack_28[5]) {
      uVar4 = 2;
      fVar6 = afStack_28[5];
    }
    lVar2 = 0;
    if (0.0 <= fVar6) {
      do {
        if (uVar4 == (uint)lVar2) {
          *(float *)(param_1 + lVar2 * 4) = afStack_28[lVar2];
        }
        else {
          fVar7 = *(float *)(param_3 + lVar2 * 4 + 0xc) * fVar6 + *(float *)(param_3 + lVar2 * 4);
          *(float *)(param_1 + lVar2 * 4) = fVar7;
          if ((fVar7 < *(float *)(param_4 + lVar2 * 4)) ||
             (*(float *)(param_4 + lVar2 * 4 + 0xc) <= fVar7 &&
              fVar7 != *(float *)(param_4 + lVar2 * 4 + 0xc))) goto LAB_0018a7e4;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 != 3);
      *param_2 = fVar6;
      uVar3 = 1;
    }
    else {
LAB_0018a7e4:
      uVar3 = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::astc_hdr_codec_options::astc_hdr_codec_options() */

void basisu::astc_hdr_codec_options::_GLOBAL__sub_I_astc_hdr_codec_options(void)

{
  return;
}


