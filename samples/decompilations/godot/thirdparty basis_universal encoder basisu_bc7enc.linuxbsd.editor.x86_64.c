
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::compute_least_squares_endpoints_rgba(unsigned int, unsigned char const*,
   basisu::bc7enc_vec4F const*, basisu::bc7enc_vec4F*, basisu::bc7enc_vec4F*, basist::color_quad_u8
   const*) */

void basisu::compute_least_squares_endpoints_rgba
               (uint param_1,uchar *param_2,bc7enc_vec4F *param_3,bc7enc_vec4F *param_4,
               bc7enc_vec4F *param_5,color_quad_u8 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  bc7enc_vec4F *pbVar4;
  color_quad_u8 *pcVar5;
  ulong uVar6;
  color_quad_u8 *pcVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  
  if (param_1 == 0) {
    uVar6 = 0;
    fVar20 = 0.0;
    fVar12 = 0.0;
    fVar14 = 0.0;
    fVar23 = 0.0;
    fVar16 = 0.0;
    fVar25 = 0.0;
    fVar18 = 0.0;
    fVar29 = 0.0;
  }
  else {
    dVar27 = 0.0;
    uVar6 = (ulong)param_1;
    pbVar1 = param_2 + uVar6;
    dVar22 = 0.0;
    dVar21 = 0.0;
    dVar13 = 0.0;
    dVar11 = 0.0;
    pcVar7 = param_6;
    dVar15 = dVar13;
    dVar17 = dVar13;
    dVar19 = dVar13;
    dVar24 = dVar13;
    dVar26 = dVar13;
    dVar28 = dVar13;
    do {
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      pbVar4 = param_3 + (ulong)bVar2 * 0x10;
      dVar28 = dVar28 + (double)*(float *)pbVar4;
      fVar12 = *(float *)(pbVar4 + 0xc);
      dVar11 = dVar11 + (double)*(float *)(pbVar4 + 4);
      dVar13 = dVar13 + (double)*(float *)(pbVar4 + 8);
      dVar19 = dVar19 + (double)((float)(byte)*pcVar7 * fVar12);
      dVar26 = dVar26 + (double)(byte)*pcVar7;
      dVar17 = dVar17 + (double)((float)(byte)pcVar7[1] * fVar12);
      dVar24 = dVar24 + (double)(byte)pcVar7[1];
      dVar15 = dVar15 + (double)((float)(byte)pcVar7[2] * fVar12);
      dVar22 = dVar22 + (double)(byte)pcVar7[2];
      dVar21 = dVar21 + (double)((float)(byte)pcVar7[3] * fVar12);
      dVar27 = dVar27 + (double)(byte)pcVar7[3];
      pcVar7 = pcVar7 + 4;
    } while (pbVar1 != param_2);
    dVar26 = dVar26 - dVar19;
    dVar24 = dVar24 - dVar17;
    dVar22 = dVar22 - dVar15;
    dVar27 = dVar27 - dVar21;
    dVar30 = dVar28 * dVar13 - dVar11 * dVar11;
    if (dVar30 == 0.0) {
      dVar11 = (double)((ulong)dVar11 ^ __LC2) * dVar30;
      dVar13 = dVar13 * dVar30;
      dVar30 = dVar30 * dVar28;
      fVar29 = (float)(dVar19 * dVar13 + dVar26 * dVar11);
      fVar18 = (float)(dVar19 * dVar11 + dVar26 * dVar30);
      fVar25 = (float)(dVar17 * dVar13 + dVar24 * dVar11);
      fVar16 = (float)(dVar17 * dVar11 + dVar24 * dVar30);
      fVar14 = (float)(dVar15 * dVar11 + dVar22 * dVar30);
      fVar23 = (float)(dVar15 * dVar13 + dVar22 * dVar11);
      fVar12 = (float)(dVar13 * dVar21 + dVar27 * dVar11);
      fVar20 = (float)(dVar11 * dVar21 + dVar30 * dVar27);
    }
    else {
      dVar30 = _LC3 / dVar30;
      dVar11 = (double)((ulong)dVar11 ^ __LC2) * dVar30;
      dVar13 = dVar13 * dVar30;
      dVar30 = dVar30 * dVar28;
      fVar18 = (float)(dVar19 * dVar11 + dVar26 * dVar30);
      fVar29 = (float)(dVar19 * dVar13 + dVar26 * dVar11);
      fVar25 = (float)(dVar17 * dVar13 + dVar24 * dVar11);
      fVar16 = (float)(dVar17 * dVar11 + dVar24 * dVar30);
      fVar14 = (float)(dVar15 * dVar11 + dVar22 * dVar30);
      fVar23 = (float)(dVar15 * dVar13 + dVar22 * dVar11);
      fVar12 = (float)(dVar13 * dVar21 + dVar27 * dVar11);
      fVar20 = (float)(dVar21 * dVar11 + dVar27 * dVar30);
    }
  }
  *(float *)param_4 = fVar29;
  pcVar7 = param_6 + uVar6 * 4;
  lVar10 = 0;
  *(float *)param_5 = fVar18;
  *(float *)(param_4 + 4) = fVar25;
  *(float *)(param_5 + 4) = fVar16;
  *(float *)(param_4 + 8) = fVar23;
  *(float *)(param_5 + 8) = fVar14;
  *(float *)(param_4 + 0xc) = fVar12;
  *(float *)(param_5 + 0xc) = fVar20;
  do {
    if ((*(float *)(param_4 + lVar10 * 4) <= 0.0 && *(float *)(param_4 + lVar10 * 4) != 0.0) ||
       (_LC4 < *(float *)(param_5 + lVar10 * 4))) {
      pcVar5 = param_6 + lVar10;
      uVar9 = 0;
      uVar8 = 0xffffffff;
      if (param_1 != 0) {
        do {
          uVar3 = (uint)(byte)*pcVar5;
          if ((byte)*pcVar5 < uVar8) {
            uVar8 = uVar3;
          }
          if (uVar9 < uVar3) {
            uVar9 = uVar3;
          }
          pcVar5 = pcVar5 + 4;
        } while (pcVar7 != pcVar5);
        if (uVar8 == uVar9) {
          *(float *)(param_4 + lVar10 * 4) = (float)(int)uVar8;
          *(float *)(param_5 + lVar10 * 4) = (float)(int)uVar8;
        }
      }
    }
    lVar10 = lVar10 + 1;
    pcVar7 = pcVar7 + 1;
  } while (lVar10 != 4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::compute_least_squares_endpoints_rgb(unsigned int, unsigned char const*,
   basisu::bc7enc_vec4F const*, basisu::bc7enc_vec4F*, basisu::bc7enc_vec4F*, basist::color_quad_u8
   const*) */

void basisu::compute_least_squares_endpoints_rgb
               (uint param_1,uchar *param_2,bc7enc_vec4F *param_3,bc7enc_vec4F *param_4,
               bc7enc_vec4F *param_5,color_quad_u8 *param_6)

{
  long lVar1;
  float fVar2;
  uint uVar3;
  bc7enc_vec4F *pbVar4;
  ulong uVar5;
  color_quad_u8 *pcVar6;
  color_quad_u8 *pcVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  
  fVar2 = _LC4;
  if (param_1 == 0) {
    uVar10 = 0;
    fVar19 = 0.0;
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar22 = 0.0;
    fVar17 = 0.0;
    fVar26 = 0.0;
  }
  else {
    dVar24 = 0.0;
    uVar10 = (ulong)param_1;
    uVar5 = 0;
    dVar21 = 0.0;
    dVar20 = 0.0;
    dVar14 = 0.0;
    dVar12 = 0.0;
    dVar16 = dVar14;
    dVar18 = dVar14;
    dVar23 = dVar14;
    dVar25 = dVar14;
    do {
      pbVar4 = param_3 + (ulong)param_2[uVar5] * 0x10;
      dVar25 = dVar25 + (double)*(float *)pbVar4;
      fVar13 = *(float *)(pbVar4 + 0xc);
      dVar12 = dVar12 + (double)*(float *)(pbVar4 + 4);
      dVar14 = dVar14 + (double)*(float *)(pbVar4 + 8);
      dVar18 = dVar18 + (double)((float)(byte)param_6[uVar5 * 4] * fVar13);
      lVar11 = uVar5 * 4;
      dVar23 = dVar23 + (double)(byte)param_6[uVar5 * 4];
      dVar16 = dVar16 + (double)((float)(byte)param_6[lVar11 + 1] * fVar13);
      lVar1 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      dVar21 = dVar21 + (double)(byte)param_6[lVar11 + 1];
      dVar20 = dVar20 + (double)((float)(byte)param_6[lVar1 + 2] * fVar13);
      dVar24 = dVar24 + (double)(byte)param_6[lVar1 + 2];
    } while (uVar10 != uVar5);
    dVar23 = dVar23 - dVar18;
    dVar21 = dVar21 - dVar16;
    dVar24 = dVar24 - dVar20;
    dVar27 = dVar25 * dVar14 - dVar12 * dVar12;
    if (dVar27 == 0.0) {
      dVar12 = (double)((ulong)dVar12 ^ __LC2) * dVar27;
      dVar14 = dVar14 * dVar27;
      dVar27 = dVar27 * dVar25;
      fVar26 = (float)(dVar18 * dVar14 + dVar23 * dVar12);
      fVar17 = (float)(dVar18 * dVar12 + dVar23 * dVar27);
      fVar15 = (float)(dVar16 * dVar12 + dVar21 * dVar27);
      fVar22 = (float)(dVar16 * dVar14 + dVar21 * dVar12);
      fVar13 = (float)(dVar14 * dVar20 + dVar24 * dVar12);
      fVar19 = (float)(dVar12 * dVar20 + dVar27 * dVar24);
    }
    else {
      dVar27 = _LC3 / dVar27;
      dVar12 = (double)((ulong)dVar12 ^ __LC2) * dVar27;
      dVar14 = dVar14 * dVar27;
      dVar27 = dVar27 * dVar25;
      fVar17 = (float)(dVar18 * dVar12 + dVar23 * dVar27);
      fVar26 = (float)(dVar18 * dVar14 + dVar23 * dVar12);
      fVar15 = (float)(dVar16 * dVar12 + dVar21 * dVar27);
      fVar22 = (float)(dVar16 * dVar14 + dVar21 * dVar12);
      fVar13 = (float)(dVar14 * dVar20 + dVar24 * dVar12);
      fVar19 = (float)(dVar20 * dVar12 + dVar24 * dVar27);
    }
  }
  *(float *)param_4 = fVar26;
  pcVar7 = param_6 + uVar10 * 4;
  *(float *)param_5 = fVar17;
  lVar11 = 0;
  *(float *)(param_4 + 4) = fVar22;
  *(float *)(param_5 + 4) = fVar15;
  *(float *)(param_4 + 8) = fVar13;
  *(float *)(param_5 + 8) = fVar19;
  *(float *)(param_4 + 0xc) = fVar2;
  *(float *)(param_5 + 0xc) = fVar2;
  do {
    if ((*(float *)(param_4 + lVar11 * 4) <= 0.0 && *(float *)(param_4 + lVar11 * 4) != 0.0) ||
       (_LC4 < *(float *)(param_5 + lVar11 * 4))) {
      pcVar6 = param_6 + lVar11;
      uVar9 = 0;
      uVar8 = 0xffffffff;
      if (param_1 != 0) {
        do {
          uVar3 = (uint)(byte)*pcVar6;
          if ((byte)*pcVar6 < uVar8) {
            uVar8 = uVar3;
          }
          if (uVar9 < uVar3) {
            uVar9 = uVar3;
          }
          pcVar6 = pcVar6 + 4;
        } while (pcVar7 != pcVar6);
        if (uVar8 == uVar9) {
          *(float *)(param_4 + lVar11 * 4) = (float)(int)uVar8;
          *(float *)(param_5 + lVar11 * 4) = (float)(int)uVar8;
        }
      }
    }
    lVar11 = lVar11 + 1;
    pcVar7 = pcVar7 + 1;
  } while (lVar11 != 3);
  return;
}



/* basisu::compute_color_distance_rgb(basist::color_quad_u8 const*, basist::color_quad_u8 const*,
   unsigned char, unsigned int const*) */

int basisu::compute_color_distance_rgb
              (color_quad_u8 *param_1,color_quad_u8 *param_2,uchar param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)(byte)*param_1;
  uVar1 = (uint)(byte)param_1[2];
  uVar5 = (uint)(byte)param_2[2];
  uVar8 = (uint)(byte)*param_2;
  if (param_3 == '\0') {
    iVar4 = (uint)(byte)param_1[1] - (uint)(byte)param_2[1];
    iVar2 = uVar1 - uVar5;
    iVar3 = uVar7 - uVar8;
  }
  else {
    iVar4 = uVar7 * 0x6d + (uint)(byte)param_1[1] * 0x16e + uVar1 * 0x25;
    iVar6 = uVar8 * 0x6d + (uint)(byte)param_2[1] * 0x16e + uVar5 * 0x25;
    iVar3 = iVar4 - iVar6 >> 8;
    iVar2 = (int)((uVar1 * 0x200 - iVar4) - (uVar5 * 0x200 - iVar6)) >> 8;
    iVar4 = (int)((uVar7 * 0x200 - iVar4) - (uVar8 * 0x200 - iVar6)) >> 8;
  }
  return iVar2 * iVar2 * param_4[2] + iVar3 * iVar3 * *param_4 + iVar4 * iVar4 * param_4[1];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::fixDegenerateEndpoints(unsigned int, basist::color_quad_u8*, basist::color_quad_u8*,
   basisu::bc7enc_vec4F const*, basisu::bc7enc_vec4F const*, unsigned int, int) */

void basisu::fixDegenerateEndpoints
               (uint param_1,color_quad_u8 *param_2,color_quad_u8 *param_3,bc7enc_vec4F *param_4,
               bc7enc_vec4F *param_5,uint param_6,int param_7)

{
  color_quad_u8 cVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = _LC28;
  if (param_1 == 0xff) {
    lVar3 = 0;
    do {
      cVar1 = param_2[lVar3];
      if ((cVar1 == param_3[lVar3]) &&
         (__LC6 < (float)((uint)(*(float *)(param_4 + lVar3 * 4) - *(float *)(param_5 + lVar3 * 4))
                         & uVar2))) {
        if ((cVar1 != (color_quad_u8)0x0) && ((param_7 & 1U) != 0)) {
          param_2[lVar3] = (color_quad_u8)((char)cVar1 + -1);
        }
        if (((param_7 & 2U) != 0) && ((byte)param_3[lVar3] < param_6)) {
          param_3[lVar3] = (color_quad_u8)((char)param_3[lVar3] + 1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    return;
  }
  if (param_1 == 1) {
    lVar3 = 0;
    cVar1 = *param_2;
    if (cVar1 == *param_3) goto LAB_00100828;
LAB_00100814:
    lVar3 = lVar3 + 1;
    if (lVar3 != 3) {
      cVar1 = param_2[lVar3];
      if (cVar1 == param_3[lVar3]) {
LAB_00100828:
        if (__LC6 < (float)((uint)(*(float *)(param_4 + lVar3 * 4) - *(float *)(param_5 + lVar3 * 4)
                                  ) & uVar2)) {
          if ((uint)(byte)cVar1 <= param_6 >> 1) {
            if ((byte)cVar1 < param_6) {
              param_3[lVar3] = (color_quad_u8)((char)cVar1 + 1);
              goto LAB_00100814;
            }
            if (cVar1 == (color_quad_u8)0x0) goto LAB_00100814;
          }
          param_2[lVar3] = (color_quad_u8)((char)cVar1 - 1);
        }
      }
      goto LAB_00100814;
    }
  }
  return;
}



/* basisu::is_solid_rgb(basisu::color_cell_compressor_params const*, unsigned int&, unsigned int&,
   unsigned int&) */

undefined8
basisu::is_solid_rgb
          (color_cell_compressor_params *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_1 + 8);
  *param_2 = (uint)*pbVar2;
  *param_3 = (uint)pbVar2[1];
  bVar1 = pbVar2[2];
  *param_4 = (uint)bVar1;
  if (1 < *(uint *)param_1) {
    pbVar3 = pbVar2 + 4;
    do {
      if (((*param_2 != (uint)*pbVar3) || (*param_3 != (uint)pbVar3[1])) ||
         ((uint)bVar1 != (uint)pbVar3[2])) {
        return 0;
      }
      pbVar3 = pbVar3 + 4;
    } while (pbVar3 != pbVar2 + (ulong)(*(uint *)param_1 - 2) * 4 + 8);
  }
  return 1;
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
    if ((param_3 & 1) == 0) goto LAB_00100a30;
  }
  else {
    puVar3 = (uint *)(param_1 + param_2 * 4);
    lVar2 = param_2;
    if ((param_3 & 1) != 0) goto LAB_00100a11;
LAB_00100a30:
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
LAB_00100a11:
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
LAB_00100c47:
            *(uint *)param_1 = uVar4;
            *puVar1 = uVar10;
            uVar7 = (ulong)*(uint *)((long)param_1 + 4);
            uVar11 = (uint)*param_1;
            uVar10 = puVar8[-1];
          }
          else {
            if (uVar3 <= uVar11) goto LAB_00100bab;
LAB_00100c03:
            *(uint *)param_1 = uVar3;
            puVar8[-1] = uVar10;
            uVar11 = (uint)*param_1;
            uVar7 = (ulong)*(uint *)((long)param_1 + 4);
          }
        }
        else {
          if (uVar3 <= uVar11) {
            if (uVar4 < uVar3) goto LAB_00100c03;
            goto LAB_00100c47;
          }
LAB_00100bab:
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



/* basisu::astc_init() */

void basisu::astc_init(void)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  uint local_458;
  uint local_448 [16];
  uint auStack_408 [242];
  long local_40;
  
  puVar17 = g_astc_nearest_sorted_index;
  puVar16 = g_astc_sorted_order_unquant;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_458 = 0;
  do {
    cVar3 = basist::astc_is_valid_endpoint_range(local_458);
    if (cVar3 != '\0') {
      uVar18 = 0;
      uVar4 = basist::astc_get_levels(local_458);
      if (uVar4 != 0) {
        do {
          iVar5 = basist::unquant_astc_endpoint_val((uint)uVar18,local_458);
          local_448[uVar18] = iVar5 << 8 | (uint)uVar18;
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar4);
        uVar18 = (long)(int)uVar4 * 4;
        puVar11 = local_448 + (int)uVar4;
        uVar10 = (long)uVar18 >> 2;
        lVar2 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        std::__introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (local_448,puVar11,(long)(int)lVar2 * 2);
        if (uVar18 < 0x41) {
          std::__insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>(local_448,puVar11);
        }
        else {
          std::__insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>
                    (local_448,auStack_408);
          puVar13 = auStack_408;
          do {
            while( true ) {
              uVar1 = *puVar13;
              uVar9 = puVar13[-1];
              puVar15 = puVar13;
              if (uVar9 <= uVar1) break;
              do {
                puVar7 = puVar15 + -1;
                *puVar15 = uVar9;
                uVar9 = puVar15[-2];
                puVar15 = puVar7;
              } while (uVar1 < uVar9);
              puVar13 = puVar13 + 1;
              *puVar7 = uVar1;
              if (puVar11 == puVar13) goto LAB_00100dfc;
            }
            puVar15 = puVar13 + 1;
            *puVar13 = uVar1;
            puVar13 = puVar15;
          } while (puVar11 != puVar15);
        }
LAB_00100dfc:
        puVar8 = puVar16 + 1;
        puVar11 = local_448;
        do {
          uVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar8[-1] = (char)(uVar1 >> 8);
          *puVar8 = (char)uVar1;
          puVar8 = puVar8 + 2;
        } while (puVar11 != local_448 + (ulong)(uVar4 - 1) + 1);
      }
      uVar18 = 0;
      if (uVar4 == 0) {
        do {
          puVar17[uVar18] = 0;
          uVar18 = uVar18 + 1;
        } while (uVar18 != 0x100);
      }
      else {
        uVar10 = 0;
        while( true ) {
          uVar12 = 0;
          iVar5 = 0x7fffffff;
          uVar14 = 0;
          do {
            iVar6 = (uint)(byte)puVar16[uVar12 * 2] - (int)uVar10;
            if (iVar6 < 1) {
              iVar6 = -iVar6;
            }
            if (iVar6 < iVar5) {
              uVar14 = uVar12 & 0xffffffff;
              iVar5 = iVar6;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar4);
          puVar17[uVar18] = (char)uVar14;
          uVar18 = uVar18 + 1;
          if (uVar18 == 0x100) break;
          uVar10 = uVar18 & 0xffffffff;
        }
      }
    }
    local_458 = local_458 + 1;
    puVar17 = puVar17 + 0x100;
    puVar16 = puVar16 + 0x200;
    if (local_458 == 0x15) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* basisu::pack_astc_range13_2bit_to_one_color(basisu::color_cell_compressor_params const*,
   basisu::color_cell_compressor_results*, unsigned int, unsigned int, unsigned int, unsigned char*)
    */

long basisu::pack_astc_range13_2bit_to_one_color
               (color_cell_compressor_params *param_1,color_cell_compressor_results *param_2,
               uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  color_cell_compressor_results cVar4;
  color_cell_compressor_results cVar5;
  color_cell_compressor_results cVar6;
  int iVar7;
  color_cell_compressor_results *pcVar8;
  color_cell_compressor_results *pcVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long in_FS_OFFSET;
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_2[0xb] = (color_cell_compressor_results)0x2f;
  param_2[0xf] = (color_cell_compressor_results)0x2f;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = (&DAT_0010aac2)[(ulong)param_3 * 4];
  uVar3 = (&DAT_0010aac2)[(ulong)param_4 * 4];
  cVar4 = *(color_cell_compressor_results *)(&DAT_0010aac3 + (ulong)param_4 * 4);
  param_2[10] = *(color_cell_compressor_results *)(&DAT_0010aac2 + (ulong)param_5 * 4);
  cVar5 = *(color_cell_compressor_results *)(&DAT_0010aac3 + (ulong)param_5 * 4);
  cVar6 = *(color_cell_compressor_results *)(&DAT_0010aac3 + (ulong)param_3 * 4);
  *(ushort *)(param_2 + 8) = CONCAT11(uVar3,uVar2);
  param_2[0xd] = cVar4;
  param_2[0xc] = cVar6;
  param_2[0xe] = cVar5;
  pcVar8 = param_2 + 8;
  do {
    pcVar9 = pcVar8 + 1;
    pcVar8[0x20] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),*pcVar8) * 2 + 1);
    pcVar8[0x24] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),pcVar8[4]) * 2 + 1);
    pcVar8 = pcVar9;
  } while (param_2 + 0xc != pcVar9);
  memset(param_6,1,(ulong)*(uint *)param_1);
  lVar13 = 0;
  do {
    local_44[lVar13] =
         (byte)(((uint)(byte)g_astc_sorted_order_unquant
                             [(ulong)(byte)param_2[lVar13 + 0xc] * 2 + 0x1a00] *
                 basist::g_bc7_weights2._4_4_ +
                (uint)(byte)g_astc_sorted_order_unquant
                            [(ulong)(byte)param_2[lVar13 + 8] * 2 + 0x1a00] *
                (0x40 - basist::g_bc7_weights2._4_4_)) * 0x101 + 0x20 >> 0xe);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 4);
  if (*(uint *)param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    uVar17 = (uint)local_44[2];
    pbVar10 = *(byte **)(param_1 + 8);
    pbVar1 = pbVar10 + (ulong)*(uint *)param_1 * 4;
    iVar16 = (uint)local_44[1] * 0x16e + (uint)local_44[0] * 0x6d + uVar17 * 0x25;
    do {
      uVar11 = (uint)*pbVar10;
      uVar15 = (uint)pbVar10[2];
      if (param_1[0x4f] == (color_cell_compressor_params)0x0) {
        iVar7 = local_44[0] - uVar11;
        iVar12 = (uint)local_44[1] - (uint)pbVar10[1];
        iVar14 = uVar17 - uVar15;
      }
      else {
        iVar14 = (uint)pbVar10[1] * 0x16e + uVar11 * 0x6d + uVar15 * 0x25;
        iVar7 = iVar16 - iVar14 >> 8;
        iVar12 = (int)(((uint)local_44[0] * 0x200 - iVar16) - (uVar11 * 0x200 - iVar14)) >> 8;
        iVar14 = (int)((uVar17 * 0x200 - iVar16) - (uVar15 * 0x200 - iVar14)) >> 8;
      }
      pbVar10 = pbVar10 + 4;
      lVar13 = lVar13 + (ulong)(uint)(iVar7 * iVar7 * *(int *)(param_1 + 0x3c) +
                                      iVar12 * iVar12 * *(int *)(param_1 + 0x40) +
                                     iVar14 * iVar14 * *(int *)(param_1 + 0x44));
    } while (pbVar1 != pbVar10);
  }
  *(long *)param_2 = lVar13;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::pack_astc_range11_5bit_to_one_color(basisu::color_cell_compressor_params const*,
   basisu::color_cell_compressor_results*, unsigned int, unsigned int, unsigned int, unsigned char*)
    */

long basisu::pack_astc_range11_5bit_to_one_color
               (color_cell_compressor_params *param_1,color_cell_compressor_results *param_2,
               uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  color_cell_compressor_results cVar4;
  color_cell_compressor_results cVar5;
  color_cell_compressor_results cVar6;
  int iVar7;
  color_cell_compressor_results *pcVar8;
  color_cell_compressor_results *pcVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long in_FS_OFFSET;
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_2[0xb] = (color_cell_compressor_results)0x1f;
  param_2[0xf] = (color_cell_compressor_results)0x1f;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = (&DAT_0010a6c2)[(ulong)param_3 * 4];
  uVar3 = (&DAT_0010a6c2)[(ulong)param_4 * 4];
  cVar4 = *(color_cell_compressor_results *)(&DAT_0010a6c3 + (ulong)param_4 * 4);
  param_2[10] = *(color_cell_compressor_results *)(&DAT_0010a6c2 + (ulong)param_5 * 4);
  cVar5 = *(color_cell_compressor_results *)(&DAT_0010a6c3 + (ulong)param_5 * 4);
  cVar6 = *(color_cell_compressor_results *)(&DAT_0010a6c3 + (ulong)param_3 * 4);
  *(ushort *)(param_2 + 8) = CONCAT11(uVar3,uVar2);
  param_2[0xd] = cVar4;
  param_2[0xc] = cVar6;
  param_2[0xe] = cVar5;
  pcVar8 = param_2 + 8;
  do {
    pcVar9 = pcVar8 + 1;
    pcVar8[0x20] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),*pcVar8) * 2 + 1);
    pcVar8[0x24] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),pcVar8[4]) * 2 + 1);
    pcVar8 = pcVar9;
  } while (param_2 + 0xc != pcVar9);
  memset(param_6,0xd,(ulong)*(uint *)param_1);
  lVar13 = 0;
  do {
    local_44[lVar13] =
         (byte)(((uint)(byte)g_astc_sorted_order_unquant
                             [(ulong)(byte)param_2[lVar13 + 0xc] * 2 + 0x1600] * _DAT_0010d06c +
                (uint)(byte)g_astc_sorted_order_unquant
                            [(ulong)(byte)param_2[lVar13 + 8] * 2 + 0x1600] * (0x40 - _DAT_0010d06c)
                ) * 0x101 + 0x20 >> 0xe);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 4);
  if (*(uint *)param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    uVar17 = (uint)local_44[2];
    pbVar10 = *(byte **)(param_1 + 8);
    pbVar1 = pbVar10 + (ulong)*(uint *)param_1 * 4;
    iVar16 = (uint)local_44[1] * 0x16e + (uint)local_44[0] * 0x6d + uVar17 * 0x25;
    do {
      uVar11 = (uint)*pbVar10;
      uVar15 = (uint)pbVar10[2];
      if (param_1[0x4f] == (color_cell_compressor_params)0x0) {
        iVar7 = local_44[0] - uVar11;
        iVar12 = (uint)local_44[1] - (uint)pbVar10[1];
        iVar14 = uVar17 - uVar15;
      }
      else {
        iVar14 = (uint)pbVar10[1] * 0x16e + uVar11 * 0x6d + uVar15 * 0x25;
        iVar7 = iVar16 - iVar14 >> 8;
        iVar12 = (int)(((uint)local_44[0] * 0x200 - iVar16) - (uVar11 * 0x200 - iVar14)) >> 8;
        iVar14 = (int)((uVar17 * 0x200 - iVar16) - (uVar15 * 0x200 - iVar14)) >> 8;
      }
      pbVar10 = pbVar10 + 4;
      lVar13 = lVar13 + (ulong)(uint)(iVar7 * iVar7 * *(int *)(param_1 + 0x3c) +
                                      iVar12 * iVar12 * *(int *)(param_1 + 0x40) +
                                     iVar14 * iVar14 * *(int *)(param_1 + 0x44));
    } while (pbVar1 != pbVar10);
  }
  *(long *)param_2 = lVar13;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::pack_astc_range7_2bit_to_one_color(basisu::color_cell_compressor_params const*,
   basisu::color_cell_compressor_results*, unsigned int, unsigned int, unsigned int, unsigned char*)
    */

long basisu::pack_astc_range7_2bit_to_one_color
               (color_cell_compressor_params *param_1,color_cell_compressor_results *param_2,
               uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  color_cell_compressor_results cVar4;
  color_cell_compressor_results cVar5;
  color_cell_compressor_results cVar6;
  int iVar7;
  color_cell_compressor_results *pcVar8;
  color_cell_compressor_results *pcVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long in_FS_OFFSET;
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_2[0xb] = (color_cell_compressor_results)0x0;
  param_2[0xf] = (color_cell_compressor_results)0x0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = (&DAT_0010aec2)[(ulong)param_3 * 4];
  uVar3 = (&DAT_0010aec2)[(ulong)param_4 * 4];
  cVar4 = *(color_cell_compressor_results *)(&DAT_0010aec3 + (ulong)param_4 * 4);
  param_2[10] = *(color_cell_compressor_results *)(&DAT_0010aec2 + (ulong)param_5 * 4);
  cVar5 = *(color_cell_compressor_results *)(&DAT_0010aec3 + (ulong)param_5 * 4);
  cVar6 = *(color_cell_compressor_results *)(&DAT_0010aec3 + (ulong)param_3 * 4);
  *(ushort *)(param_2 + 8) = CONCAT11(uVar3,uVar2);
  param_2[0xd] = cVar4;
  param_2[0xc] = cVar6;
  param_2[0xe] = cVar5;
  pcVar8 = param_2 + 8;
  do {
    pcVar9 = pcVar8 + 1;
    pcVar8[0x20] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),*pcVar8) * 2 + 1);
    pcVar8[0x24] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),pcVar8[4]) * 2 + 1);
    pcVar8 = pcVar9;
  } while (param_2 + 0xc != pcVar9);
  memset(param_6,1,(ulong)*(uint *)param_1);
  lVar13 = 0;
  do {
    local_44[lVar13] =
         (byte)(((uint)(byte)g_astc_sorted_order_unquant
                             [(ulong)(byte)param_2[lVar13 + 0xc] * 2 + 0xe00] *
                 basist::g_bc7_weights2._4_4_ +
                (uint)(byte)g_astc_sorted_order_unquant
                            [(ulong)(byte)param_2[lVar13 + 8] * 2 + 0xe00] *
                (0x40 - basist::g_bc7_weights2._4_4_)) * 0x101 + 0x20 >> 0xe);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 3);
  if (*(uint *)param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    uVar17 = (uint)local_44[2];
    pbVar10 = *(byte **)(param_1 + 8);
    pbVar1 = pbVar10 + (ulong)*(uint *)param_1 * 4;
    iVar16 = (uint)local_44[1] * 0x16e + (uint)local_44[0] * 0x6d + uVar17 * 0x25;
    do {
      uVar11 = (uint)*pbVar10;
      uVar15 = (uint)pbVar10[2];
      if (param_1[0x4f] == (color_cell_compressor_params)0x0) {
        iVar7 = local_44[0] - uVar11;
        iVar12 = (uint)local_44[1] - (uint)pbVar10[1];
        iVar14 = uVar17 - uVar15;
      }
      else {
        iVar14 = (uint)pbVar10[1] * 0x16e + uVar11 * 0x6d + uVar15 * 0x25;
        iVar7 = iVar16 - iVar14 >> 8;
        iVar12 = (int)(((uint)local_44[0] * 0x200 - iVar16) - (uVar11 * 0x200 - iVar14)) >> 8;
        iVar14 = (int)((uVar17 * 0x200 - iVar16) - (uVar15 * 0x200 - iVar14)) >> 8;
      }
      pbVar10 = pbVar10 + 4;
      lVar13 = lVar13 + (ulong)(uint)(iVar7 * iVar7 * *(int *)(param_1 + 0x3c) +
                                      iVar12 * iVar12 * *(int *)(param_1 + 0x40) +
                                     iVar14 * iVar14 * *(int *)(param_1 + 0x44));
    } while (pbVar1 != pbVar10);
  }
  *(long *)param_2 = lVar13;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::pack_astc_4bit_3bit_to_one_color(basisu::color_cell_compressor_params const*,
   basisu::color_cell_compressor_results*, unsigned int, unsigned int, unsigned int, unsigned char*)
    */

long basisu::pack_astc_4bit_3bit_to_one_color
               (color_cell_compressor_params *param_1,color_cell_compressor_results *param_2,
               uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  color_cell_compressor_results cVar4;
  color_cell_compressor_results cVar5;
  color_cell_compressor_results cVar6;
  int iVar7;
  color_cell_compressor_results *pcVar8;
  color_cell_compressor_results *pcVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  long in_FS_OFFSET;
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_2[0xb] = (color_cell_compressor_results)0x0;
  param_2[0xf] = (color_cell_compressor_results)0x0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = (&DAT_0010b6c2)[(ulong)param_3 * 4];
  cVar4 = *(color_cell_compressor_results *)(&DAT_0010b6c3 + (ulong)param_5 * 4);
  uVar3 = (&DAT_0010b6c2)[(ulong)param_4 * 4];
  param_2[10] = *(color_cell_compressor_results *)(&DAT_0010b6c2 + (ulong)param_5 * 4);
  cVar5 = *(color_cell_compressor_results *)(&DAT_0010b6c3 + (ulong)param_4 * 4);
  cVar6 = *(color_cell_compressor_results *)(&DAT_0010b6c3 + (ulong)param_3 * 4);
  *(ushort *)(param_2 + 8) = CONCAT11(uVar3,uVar2);
  param_2[0xe] = cVar4;
  param_2[0xc] = cVar6;
  param_2[0xd] = cVar5;
  pcVar8 = param_2 + 8;
  do {
    pcVar9 = pcVar8 + 1;
    pcVar8[0x20] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),*pcVar8) * 2 + 1);
    pcVar8[0x24] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),pcVar8[4]) * 2 + 1);
    pcVar8 = pcVar9;
  } while (pcVar9 != param_2 + 0xc);
  memset(param_6,2,(ulong)*(uint *)param_1);
  lVar10 = 0;
  do {
    uVar12 = (uint)(byte)param_2[lVar10 + 8] << 4 | (uint)(byte)param_2[lVar10 + 8];
    uVar14 = (uint)(byte)param_2[lVar10 + 0xc] << 4 | (uint)(byte)param_2[lVar10 + 0xc];
    local_44[lVar10] =
         (byte)((uVar12 << 8 | uVar12) * (0x40 - _memcpy) + 0x20 + (uVar14 << 8 | uVar14) * _memcpy
               >> 0xe);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  if (*(uint *)param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    uVar12 = (uint)local_44[2];
    pbVar11 = *(byte **)(param_1 + 8);
    pbVar1 = pbVar11 + (ulong)*(uint *)param_1 * 4;
    iVar17 = (uint)local_44[1] * 0x16e + (uint)local_44[0] * 0x6d + uVar12 * 0x25;
    do {
      uVar14 = (uint)*pbVar11;
      uVar16 = (uint)pbVar11[2];
      if (param_1[0x4f] == (color_cell_compressor_params)0x0) {
        iVar7 = local_44[0] - uVar14;
        iVar13 = (uint)local_44[1] - (uint)pbVar11[1];
        iVar15 = uVar12 - uVar16;
      }
      else {
        iVar15 = (uint)pbVar11[1] * 0x16e + uVar14 * 0x6d + uVar16 * 0x25;
        iVar7 = iVar17 - iVar15 >> 8;
        iVar13 = (int)(((uint)local_44[0] * 0x200 - iVar17) - (uVar14 * 0x200 - iVar15)) >> 8;
        iVar15 = (int)((uVar12 * 0x200 - iVar17) - (uVar16 * 0x200 - iVar15)) >> 8;
      }
      pbVar11 = pbVar11 + 4;
      lVar10 = lVar10 + (ulong)(uint)(iVar7 * iVar7 * *(int *)(param_1 + 0x3c) +
                                      iVar13 * iVar13 * *(int *)(param_1 + 0x40) +
                                     iVar15 * iVar15 * *(int *)(param_1 + 0x44));
    } while (pbVar1 != pbVar11);
  }
  *(long *)param_2 = lVar10;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::pack_mode1_to_one_color(basisu::color_cell_compressor_params const*,
   basisu::color_cell_compressor_results*, unsigned int, unsigned int, unsigned int, unsigned char*)
    */

long basisu::pack_mode1_to_one_color
               (color_cell_compressor_params *param_1,color_cell_compressor_results *param_2,
               uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  color_cell_compressor_results cVar6;
  color_cell_compressor_results cVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  byte local_44 [4];
  long local_40;
  
  uVar18 = (ulong)param_5;
  uVar14 = (ulong)param_4;
  uVar9 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_2[0xb] = (color_cell_compressor_results)0x0;
  bVar21 = (uint)*(ushort *)(&DAT_0010bac4 + uVar9 * 8) +
           (uint)*(ushort *)(&DAT_0010bac4 + uVar14 * 8) +
           (uint)*(ushort *)(&DAT_0010bac4 + uVar18 * 8) <
           (uint)(ushort)(&g_bc7_mode_1_optimal_endpoints)[uVar9 * 4] +
           (uint)(ushort)(&g_bc7_mode_1_optimal_endpoints)[uVar14 * 4] +
           (uint)(ushort)(&g_bc7_mode_1_optimal_endpoints)[uVar18 * 4];
  uVar17 = (ulong)bVar21;
  lVar10 = uVar17 + uVar9 * 2;
  lVar1 = uVar17 + uVar18 * 2;
  uVar4 = (&DAT_0010bac2)[lVar10 * 4];
  lVar2 = uVar17 + uVar14 * 2;
  uVar5 = (&DAT_0010bac2)[lVar2 * 4];
  cVar6 = *(color_cell_compressor_results *)(&DAT_0010bac3 + lVar1 * 4);
  param_2[10] = *(color_cell_compressor_results *)(&DAT_0010bac2 + lVar1 * 4);
  *(ushort *)(param_2 + 8) = CONCAT11(uVar5,uVar4);
  cVar7 = *(color_cell_compressor_results *)(&DAT_0010bac3 + lVar2 * 4);
  param_2[0xc] = *(color_cell_compressor_results *)(&DAT_0010bac3 + lVar10 * 4);
  param_2[0xd] = cVar7;
  param_2[0xe] = cVar6;
  param_2[0xf] = (color_cell_compressor_results)0x0;
  *(uint *)(param_2 + 0x10) = (uint)bVar21;
  *(undefined4 *)(param_2 + 0x14) = 0;
  memset(param_6,2,(ulong)*(uint *)param_1);
  uVar20 = *(uint *)(param_2 + 0x10);
  lVar10 = 0;
  do {
    uVar12 = ((uint)(byte)param_2[lVar10 + 8] * 2 | uVar20) * 2;
    uVar16 = ((uint)(byte)param_2[lVar10 + 0xc] * 2 | uVar20) * 2;
    local_44[lVar10] =
         (byte)((uVar12 | uVar12 >> 7) * (0x40 - _memcpy) + 0x20 + (uVar16 | uVar16 >> 7) * _memcpy
               >> 6);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  if (*(uint *)param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    uVar20 = (uint)local_44[2];
    pbVar11 = *(byte **)(param_1 + 8);
    pbVar3 = pbVar11 + (ulong)*(uint *)param_1 * 4;
    iVar19 = (uint)local_44[0] * 0x6d + (uint)local_44[1] * 0x16e + uVar20 * 0x25;
    do {
      uVar12 = (uint)*pbVar11;
      uVar16 = (uint)pbVar11[2];
      if (param_1[0x4f] == (color_cell_compressor_params)0x0) {
        iVar8 = local_44[0] - uVar12;
        iVar13 = (uint)local_44[1] - (uint)pbVar11[1];
        iVar15 = uVar20 - uVar16;
      }
      else {
        iVar15 = (uint)pbVar11[1] * 0x16e + uVar12 * 0x6d + uVar16 * 0x25;
        iVar8 = iVar19 - iVar15 >> 8;
        iVar13 = (int)(((uint)local_44[0] * 0x200 - iVar19) - (uVar12 * 0x200 - iVar15)) >> 8;
        iVar15 = (int)((uVar20 * 0x200 - iVar19) - (uVar16 * 0x200 - iVar15)) >> 8;
      }
      pbVar11 = pbVar11 + 4;
      lVar10 = lVar10 + (ulong)(uint)(iVar8 * iVar8 * *(int *)(param_1 + 0x3c) +
                                      iVar13 * iVar13 * *(int *)(param_1 + 0x40) +
                                     iVar15 * iVar15 * *(int *)(param_1 + 0x44));
    } while (pbVar3 != pbVar11);
  }
  *(long *)param_2 = lVar10;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}



/* basisu::pack_astc_4bit_2bit_to_one_color_rgba(basisu::color_cell_compressor_params const*,
   basisu::color_cell_compressor_results*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned char*) */

long basisu::pack_astc_4bit_2bit_to_one_color_rgba
               (color_cell_compressor_params *param_1,color_cell_compressor_results *param_2,
               uint param_3,uint param_4,uint param_5,uint param_6,uchar *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  color_cell_compressor_results *pcVar4;
  color_cell_compressor_results *pcVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long in_FS_OFFSET;
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(ulong *)(param_2 + 8) =
       CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((&DAT_0010b2c3)
                                                                      [(ulong)param_6 * 4],
                                                                      (&DAT_0010b2c3)
                                                                      [(ulong)param_5 * 4]),
                                                             (&DAT_0010b2c3)[(ulong)param_4 * 4]),
                                                    (&DAT_0010b2c3)[(ulong)param_3 * 4]),
                                           (&DAT_0010b2c2)[(ulong)param_6 * 4]),
                                  (&DAT_0010b2c2)[(ulong)param_5 * 4]),
                         (&DAT_0010b2c2)[(ulong)param_4 * 4]),(&DAT_0010b2c2)[(ulong)param_3 * 4]);
  pcVar4 = param_2 + 8;
  do {
    pcVar5 = pcVar4 + 1;
    pcVar4[0x20] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),*pcVar4) * 2 + 1);
    pcVar4[0x24] = *(color_cell_compressor_results *)
                    (g_astc_sorted_order_unquant +
                    (ulong)CONCAT41(*(undefined4 *)(param_1 + 0x38),pcVar4[4]) * 2 + 1);
    pcVar4 = pcVar5;
  } while (pcVar5 != param_2 + 0xc);
  memset(param_7,1,(ulong)*(uint *)param_1);
  lVar6 = 0;
  do {
    uVar9 = (uint)(byte)param_2[lVar6 + 8] << 4 | (uint)(byte)param_2[lVar6 + 8];
    uVar11 = (uint)(byte)param_2[lVar6 + 0xc] << 4 | (uint)(byte)param_2[lVar6 + 0xc];
    local_44[lVar6] =
         (byte)((uVar9 << 8 | uVar9) * (0x40 - basist::g_bc7_weights2._4_4_) + 0x20 +
                (uVar11 << 8 | uVar11) * basist::g_bc7_weights2._4_4_ >> 0xe);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  if (*(uint *)param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    iVar7 = (uint)local_44[2] * 0x25 + (uint)local_44[0] * 0x6d + (uint)local_44[1] * 0x16e;
    pbVar8 = *(byte **)(param_1 + 8);
    pbVar2 = pbVar8 + (ulong)*(uint *)param_1 * 4;
    do {
      pbVar1 = pbVar8 + 3;
      uVar9 = (uint)*pbVar8;
      uVar11 = (uint)pbVar8[2];
      if (param_1[0x4f] == (color_cell_compressor_params)0x0) {
        iVar3 = local_44[0] - uVar9;
        iVar10 = (uint)local_44[1] - (uint)pbVar8[1];
        iVar12 = local_44[2] - uVar11;
      }
      else {
        iVar12 = (uint)pbVar8[1] * 0x16e + uVar9 * 0x6d + uVar11 * 0x25;
        iVar3 = iVar7 - iVar12 >> 8;
        iVar10 = (int)(((uint)local_44[0] * 0x200 - iVar7) - (uVar9 * 0x200 - iVar12)) >> 8;
        iVar12 = (int)(((uint)local_44[2] * 0x200 - iVar7) - (uVar11 * 0x200 - iVar12)) >> 8;
      }
      pbVar8 = pbVar8 + 4;
      lVar6 = lVar6 + (ulong)(uint)(iVar3 * iVar3 * *(int *)(param_1 + 0x3c) +
                                    iVar10 * iVar10 * *(int *)(param_1 + 0x40) +
                                   iVar12 * iVar12 * *(int *)(param_1 + 0x44)) +
                      (ulong)(((uint)local_44[3] - (uint)*pbVar1) *
                              ((uint)local_44[3] - (uint)*pbVar1) * *(int *)(param_1 + 0x48));
    } while (pbVar2 != pbVar8);
  }
  *(long *)param_2 = lVar6;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6;
}



/* basisu::compute_color_distance_rgba(basist::color_quad_u8 const*, basist::color_quad_u8 const*,
   unsigned char, unsigned int const*) */

long basisu::compute_color_distance_rgba
               (color_quad_u8 *param_1,color_quad_u8 *param_2,uchar param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = (uint)(byte)*param_1;
  uVar5 = (uint)(byte)param_2[2];
  uVar1 = (uint)(byte)param_1[2];
  uVar8 = (uint)(byte)*param_2;
  if (param_3 == '\0') {
    iVar4 = (uint)(byte)param_1[1] - (uint)(byte)param_2[1];
    iVar2 = uVar1 - uVar5;
    iVar3 = uVar6 - uVar8;
  }
  else {
    iVar4 = uVar6 * 0x6d + (uint)(byte)param_1[1] * 0x16e + uVar1 * 0x25;
    iVar7 = (uint)(byte)param_2[1] * 0x16e + uVar8 * 0x6d + uVar5 * 0x25;
    iVar3 = iVar4 - iVar7 >> 8;
    iVar2 = (int)((uVar1 * 0x200 - iVar4) - (uVar5 * 0x200 - iVar7)) >> 8;
    iVar4 = (int)((uVar6 * 0x200 - iVar4) - (uVar8 * 0x200 - iVar7)) >> 8;
  }
  return (ulong)(iVar2 * iVar2 * param_4[2] + iVar3 * iVar3 * *param_4 + iVar4 * iVar4 * param_4[1])
         + (ulong)(((uint)(byte)param_1[3] - (uint)(byte)param_2[3]) *
                   ((uint)(byte)param_1[3] - (uint)(byte)param_2[3]) * param_4[3]);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::evaluate_solution(basist::color_quad_u8 const*, basist::color_quad_u8 const*, unsigned
   int const*, basisu::color_cell_compressor_params const*, basisu::color_cell_compressor_results*)
   [clone .isra.0] */

void basisu::evaluate_solution
               (color_quad_u8 *param_1,color_quad_u8 *param_2,uint *param_3,
               color_cell_compressor_params *param_4,color_cell_compressor_results *param_5)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  byte bVar23;
  color_cell_compressor_params cVar24;
  byte *pbVar25;
  byte bVar26;
  undefined1 uVar27;
  undefined1 *puVar28;
  ulong uVar29;
  long lVar30;
  long in_FS_OFFSET;
  float fVar31;
  ulong local_158;
  uint local_148;
  uint local_140;
  uint local_124;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [4];
  undefined1 auStack_c0 [128];
  long local_40;
  
  fVar3 = _LC8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar24 = param_4[0x4d];
  iVar5 = *(int *)(param_4 + 0x38);
  local_d8 = *(uint *)param_1;
  local_d4 = *(uint *)param_2;
  if (cVar24 == (color_cell_compressor_params)0x0) {
    if (iVar5 != 0) goto LAB_0010221a;
    bVar26 = (byte)*(undefined4 *)(param_4 + 0x28);
    bVar23 = bVar26;
LAB_00101ee8:
    lVar19 = 0;
    do {
      uVar9 = (uint)*(byte *)((long)&local_d8 + lVar19) << (8 - bVar26 & 0x1f);
      local_c4[lVar19 + -4] = (byte)uVar9 | (byte)(uVar9 >> (bVar26 & 0x1f));
      uVar9 = local_c8;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 4);
    bVar26 = (bVar23 + 1) - (cVar24 == (color_cell_compressor_params)0x0);
    lVar19 = 0;
    local_d0 = local_c8;
    do {
      uVar10 = (uint)*(byte *)((long)&local_d4 + lVar19) << (8 - bVar26 & 0x1f);
      local_c4[lVar19 + -4] = (byte)uVar10 | (byte)(uVar10 >> (bVar26 & 0x1f));
      local_cc = local_c8;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 4);
    uVar10 = *(uint *)(param_4 + 0x10);
    cVar24 = param_4[0x4c];
    local_c8 = uVar9;
    local_124 = uVar10 - 1;
    *(uint *)(local_c4 + (ulong)local_124 * 4 + -4) = local_cc;
    if (1 < local_124) {
      piVar16 = *(int **)(param_4 + 0x18);
      puVar28 = local_c4;
      do {
        piVar16 = piVar16 + 1;
        uVar13 = 0;
        do {
          puVar28[uVar13] =
               (char)((uint)*(byte *)((long)&local_d0 + uVar13) * (0x40 - *piVar16) + 0x20 +
                      (uint)*(byte *)((long)&local_cc + uVar13) * *piVar16 >> 6);
          uVar13 = uVar13 + 1;
        } while (4 - (cVar24 == (color_cell_compressor_params)0x0) != uVar13);
        puVar28 = puVar28 + 4;
      } while (auStack_c0 + (ulong)(uVar10 - 3) * 4 != puVar28);
    }
  }
  else {
    uVar9 = *param_3;
    uVar10 = uVar9;
    if (param_4[0x4e] == (color_cell_compressor_params)0x0) {
      uVar10 = param_3[1];
    }
    local_d8 = (((((uint)(byte)param_1[3] + (uint)(byte)param_1[3] | uVar9) & 0xff) << 8 |
                ((uint)(byte)param_1[2] + (uint)(byte)param_1[2] | uVar9) & 0xff) << 8 |
               ((uint)(byte)param_1[1] + (uint)(byte)param_1[1] | uVar9) & 0xff) << 8 |
               ((uint)(byte)*param_1 + (uint)(byte)*param_1 | uVar9) & 0xff;
    local_d4 = (((((uint)(byte)param_2[3] + (uint)(byte)param_2[3] | uVar10) & 0xff) << 8 |
                ((uint)(byte)param_2[2] + (uint)(byte)param_2[2] | uVar10) & 0xff) << 8 |
               ((uint)(byte)param_2[1] + (uint)(byte)param_2[1] | uVar10) & 0xff) << 8 |
               ((uint)(byte)*param_2 + (uint)(byte)*param_2 | uVar10) & 0xff;
    if (iVar5 == 0) {
      bVar23 = (byte)*(undefined4 *)(param_4 + 0x28);
      bVar26 = bVar23 + 1;
      goto LAB_00101ee8;
    }
LAB_0010221a:
    lVar19 = 0;
    do {
      local_c4[lVar19 + -4] =
           g_astc_sorted_order_unquant
           [(ulong)CONCAT41(iVar5,*(undefined1 *)((long)&local_d8 + lVar19)) * 2];
      uVar9 = local_c8;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 4);
    local_d0 = local_c8;
    lVar19 = 0;
    do {
      local_c4[lVar19 + -4] =
           g_astc_sorted_order_unquant
           [(ulong)CONCAT41(iVar5,*(undefined1 *)((long)&local_d4 + lVar19)) * 2];
      local_cc = local_c8;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 4);
    uVar10 = *(uint *)(param_4 + 0x10);
    cVar24 = param_4[0x4c];
    local_c8 = uVar9;
    local_124 = uVar10 - 1;
    *(uint *)(local_c4 + (ulong)local_124 * 4 + -4) = local_cc;
    if (1 < local_124) {
      piVar16 = *(int **)(param_4 + 0x18);
      puVar28 = local_c4;
      do {
        piVar16 = piVar16 + 1;
        uVar13 = 0;
        do {
          puVar28[uVar13] =
               (char)(((uint)*(byte *)((long)&local_d0 + uVar13) * (0x40 - *piVar16) +
                      (uint)*(byte *)((long)&local_cc + uVar13) * *piVar16) * 0x101 + 0x20 >> 0xe);
          uVar13 = uVar13 + 1;
        } while (4 - (cVar24 == (color_cell_compressor_params)0x0) != uVar13);
        puVar28 = puVar28 + 4;
      } while (puVar28 != auStack_c0 + (ulong)(uVar10 - 3) * 4);
    }
  }
  lVar19 = *(long *)(param_4 + 0x30);
  iVar5 = *(int *)param_4;
  if (lVar19 == 0) {
    if (param_4[0x4f] != (color_cell_compressor_params)0x0) {
      local_158 = 0;
      lVar30 = 0;
      lVar19 = 0;
      if (iVar5 != 0) {
        do {
          if (cVar24 == (color_cell_compressor_params)0x0) {
            if (uVar10 == 0) {
LAB_00102907:
              uVar27 = 0;
              uVar13 = 0xffffffffffffffff;
            }
            else {
              uVar29 = 0;
              pbVar22 = (byte *)(*(long *)(param_4 + 8) + lVar30);
              iVar5 = (uint)pbVar22[1] * 0x16e + (uint)*pbVar22 * 0x6d + (uint)pbVar22[2] * 0x25;
              uVar7 = 0;
              uVar13 = 0xffffffffffffffff;
              do {
                while( true ) {
                  bVar26 = *(byte *)((long)&local_c8 + uVar7 * 4);
                  iVar15 = (uint)(byte)local_c4[uVar7 * 4 + -3] * 0x16e + (uint)bVar26 * 0x6d +
                           (uint)(byte)local_c4[uVar7 * 4 + -2] * 0x25;
                  iVar11 = (int)(((uint)bVar26 * 0x200 - iVar15) - ((uint)*pbVar22 * 0x200 - iVar5))
                           >> 8;
                  iVar4 = (int)(((uint)(byte)local_c4[uVar7 * 4 + -2] * 0x200 - iVar15) -
                               ((uint)pbVar22[2] * 0x200 - iVar5)) >> 8;
                  iVar15 = iVar15 - iVar5 >> 8;
                  uVar14 = (ulong)(uint)(iVar11 * iVar11 * *(int *)(param_4 + 0x40) +
                                         iVar4 * iVar4 * *(int *)(param_4 + 0x44) +
                                        iVar15 * iVar15 * *(int *)(param_4 + 0x3c));
                  if (uVar13 <= uVar14) break;
                  uVar29 = uVar7 & 0xffffffff;
                  uVar27 = (undefined1)uVar29;
                  uVar7 = uVar7 + 1;
                  uVar13 = uVar14;
                  if (uVar10 == uVar7) goto LAB_001028cb;
                }
                if ((uVar14 == uVar13) && ((uint)uVar7 == local_124)) {
                  uVar29 = uVar7 & 0xffffffff;
                }
                uVar27 = (undefined1)uVar29;
                uVar7 = uVar7 + 1;
              } while (uVar10 != uVar7);
            }
          }
          else {
            if (uVar10 == 0) goto LAB_00102907;
            pbVar25 = (byte *)(*(long *)(param_4 + 8) + lVar30);
            iVar5 = (uint)pbVar25[1] * 0x16e + (uint)*pbVar25 * 0x6d + (uint)pbVar25[2] * 0x25;
            uVar13 = 0xffffffffffffffff;
            pbVar22 = (byte *)&local_c8;
            uVar20 = 0;
            uVar9 = 0;
            do {
              while( true ) {
                uVar21 = uVar20;
                iVar11 = (uint)pbVar22[1] * 0x16e + (uint)*pbVar22 * 0x6d + (uint)pbVar22[2] * 0x25;
                iVar4 = (int)(((uint)*pbVar22 * 0x200 - iVar11) - ((uint)*pbVar25 * 0x200 - iVar5))
                        >> 8;
                iVar15 = (int)(((uint)pbVar22[2] * 0x200 - iVar11) -
                              ((uint)pbVar25[2] * 0x200 - iVar5)) >> 8;
                iVar11 = iVar11 - iVar5 >> 8;
                uVar7 = (ulong)(uint)(iVar4 * iVar4 * *(int *)(param_4 + 0x40) +
                                      iVar15 * iVar15 * *(int *)(param_4 + 0x44) +
                                     iVar11 * iVar11 * *(int *)(param_4 + 0x3c)) +
                        (ulong)(((uint)pbVar22[3] - (uint)pbVar25[3]) *
                                ((uint)pbVar22[3] - (uint)pbVar25[3]) * *(int *)(param_4 + 0x48));
                if (uVar13 <= uVar7) break;
                pbVar22 = pbVar22 + 4;
                uVar13 = uVar7;
                uVar20 = uVar21 + 1;
                uVar9 = uVar21;
                if (uVar10 == uVar21 + 1) goto LAB_001028ad;
              }
              if ((uVar7 == uVar13) && (local_124 == uVar21)) {
                uVar9 = uVar21;
              }
              pbVar22 = pbVar22 + 4;
              uVar20 = uVar21 + 1;
            } while (uVar10 != uVar21 + 1);
LAB_001028ad:
            uVar27 = (undefined1)uVar9;
          }
LAB_001028cb:
          local_158 = local_158 + uVar13;
          lVar30 = lVar30 + 4;
          *(undefined1 *)(*(long *)(param_5 + 0x20) + lVar19) = uVar27;
          lVar19 = lVar19 + 1;
          if (*(uint *)param_4 <= (uint)lVar19) break;
          cVar24 = param_4[0x4c];
        } while( true );
      }
      goto LAB_0010210b;
    }
    uVar9 = local_d0 & 0xff;
    iVar4 = (local_cc & 0xff) - uVar9;
    local_148 = local_d0 >> 8 & 0xff;
    iVar15 = (local_cc >> 8 & 0xff) - (local_d0 >> 8 & 0xff);
    iVar17 = (local_cc >> 0x10 & 0xff) - (local_d0 >> 0x10 & 0xff);
    local_140 = local_d0 >> 0x10 & 0xff;
    iVar11 = iVar15 * iVar15 + iVar4 * iVar4 + iVar17 * iVar17;
    if (cVar24 == (color_cell_compressor_params)0x0) {
      fVar31 = (float)iVar11 + __LC7;
      if (iVar5 != 0) {
        lVar19 = 0;
        local_158 = 0;
        do {
          pbVar22 = (byte *)(*(long *)(param_4 + 8) + lVar19 * 4);
          bVar26 = pbVar22[1];
          bVar23 = *pbVar22;
          bVar1 = pbVar22[2];
          uVar20 = (uint)((float)(int)((bVar26 - local_148) * iVar15 + (bVar23 - uVar9) * iVar4 +
                                      (bVar1 - local_140) * iVar17) * ((float)uVar10 / fVar31) +
                         fVar3);
          if ((int)uVar20 < 1) {
            uVar21 = 0;
            uVar20 = 1;
          }
          else {
            if ((int)local_124 < (int)uVar20) {
              uVar20 = local_124;
            }
            uVar21 = uVar20 - 1;
          }
          lVar30 = (long)(int)uVar21;
          iVar11 = (uint)(byte)local_c4[lVar30 * 4 + -4] - (uint)bVar23;
          iVar8 = (uint)(byte)local_c4[lVar30 * 4 + -3] - (uint)bVar26;
          iVar5 = (uint)(byte)local_c4[lVar30 * 4 + -2] - (uint)bVar1;
          uVar13 = (ulong)(uint)(iVar11 * iVar11 * *(int *)(param_4 + 0x3c) +
                                 iVar8 * iVar8 * *(int *)(param_4 + 0x40) +
                                iVar5 * iVar5 * *(int *)(param_4 + 0x44));
          lVar30 = (long)(int)uVar20;
          iVar5 = (uint)(byte)local_c4[lVar30 * 4 + -4] - (uint)bVar23;
          iVar8 = (uint)(byte)local_c4[lVar30 * 4 + -3] - (uint)bVar26;
          iVar11 = (uint)(byte)local_c4[lVar30 * 4 + -2] - (uint)bVar1;
          uVar7 = (ulong)(uint)(iVar5 * iVar5 * *(int *)(param_4 + 0x3c) +
                                iVar8 * iVar8 * *(int *)(param_4 + 0x40) +
                               iVar11 * iVar11 * *(int *)(param_4 + 0x44));
          if (uVar7 == uVar13) {
            uVar21 = 0;
            uVar13 = uVar7;
            if (uVar20 != 1) goto LAB_00102aab;
          }
          else if (uVar7 <= uVar13) {
LAB_00102aab:
            uVar13 = uVar7;
            uVar21 = uVar20;
          }
          local_158 = local_158 + uVar13;
          *(char *)(*(long *)(param_5 + 0x20) + lVar19) = (char)uVar21;
          lVar19 = lVar19 + 1;
        } while ((uint)lVar19 < *(uint *)param_4);
        goto LAB_0010210b;
      }
    }
    else {
      iVar8 = (local_cc >> 0x18) - (local_d0 >> 0x18);
      fVar31 = (float)(iVar8 * iVar8 + iVar11) + __LC7;
      if (iVar5 != 0) {
        lVar19 = 0;
        local_158 = 0;
        do {
          pbVar22 = (byte *)(*(long *)(param_4 + 8) + lVar19 * 4);
          bVar26 = pbVar22[1];
          bVar23 = *pbVar22;
          bVar1 = pbVar22[2];
          bVar2 = pbVar22[3];
          uVar20 = (uint)((float)(int)((bVar26 - local_148) * iVar15 + (bVar23 - uVar9) * iVar4 +
                                       (bVar1 - local_140) * iVar17 +
                                      ((uint)bVar2 - (local_d0 >> 0x18)) * iVar8) *
                          ((float)uVar10 / fVar31) + fVar3);
          if ((int)uVar20 < 1) {
            uVar21 = 0;
            uVar20 = 1;
          }
          else {
            if ((int)local_124 < (int)uVar20) {
              uVar20 = local_124;
            }
            uVar21 = uVar20 - 1;
          }
          lVar30 = (long)(int)uVar21;
          iVar18 = (uint)(byte)local_c4[lVar30 * 4 + -3] - (uint)bVar26;
          iVar5 = (uint)(byte)local_c4[lVar30 * 4 + -4] - (uint)bVar23;
          iVar11 = (uint)(byte)local_c4[lVar30 * 4 + -2] - (uint)bVar1;
          iVar12 = (uint)(byte)local_c4[lVar30 * 4 + -1] - (uint)bVar2;
          uVar13 = (ulong)(uint)(iVar11 * iVar11 * *(int *)(param_4 + 0x44) +
                                iVar5 * iVar5 * *(int *)(param_4 + 0x3c) +
                                iVar18 * iVar18 * *(int *)(param_4 + 0x40)) +
                   (ulong)(uint)(iVar12 * iVar12 * *(int *)(param_4 + 0x48));
          lVar30 = (long)(int)uVar20;
          iVar12 = (uint)(byte)local_c4[lVar30 * 4 + -4] - (uint)bVar23;
          iVar5 = (uint)(byte)local_c4[lVar30 * 4 + -1] - (uint)bVar2;
          iVar18 = (uint)(byte)local_c4[lVar30 * 4 + -3] - (uint)bVar26;
          iVar11 = (uint)(byte)local_c4[lVar30 * 4 + -2] - (uint)bVar1;
          uVar7 = (ulong)(uint)(iVar5 * iVar5 * *(int *)(param_4 + 0x48)) +
                  (ulong)(uint)(iVar11 * iVar11 * *(int *)(param_4 + 0x44) +
                               iVar12 * iVar12 * *(int *)(param_4 + 0x3c) +
                               iVar18 * iVar18 * *(int *)(param_4 + 0x40));
          if (uVar7 == uVar13) {
            uVar21 = 0;
            uVar13 = uVar7;
            if (uVar20 != 1) goto LAB_001028fc;
          }
          else if (uVar7 <= uVar13) {
LAB_001028fc:
            uVar13 = uVar7;
            uVar21 = uVar20;
          }
          local_158 = local_158 + uVar13;
          *(char *)(*(long *)(param_5 + 0x20) + lVar19) = (char)uVar21;
          lVar19 = lVar19 + 1;
        } while ((uint)lVar19 < *(uint *)param_4);
        goto LAB_0010210b;
      }
    }
  }
  else if (iVar5 != 0) {
    lVar30 = 0;
    local_158 = 0;
    while( true ) {
      bVar26 = *(byte *)(lVar19 + lVar30);
      pcVar6 = compute_color_distance_rgba;
      if (param_4[0x4c] == (color_cell_compressor_params)0x0) {
        pcVar6 = compute_color_distance_rgb;
      }
      lVar19 = (*pcVar6)((byte *)((long)&local_c8 + (ulong)bVar26 * 4),
                         *(long *)(param_4 + 8) + lVar30 * 4,param_4[0x4f],param_4 + 0x3c);
      local_158 = local_158 + lVar19;
      *(byte *)(*(long *)(param_5 + 0x20) + lVar30) = bVar26;
      lVar30 = lVar30 + 1;
      if (*(uint *)param_4 <= (uint)lVar30) break;
      lVar19 = *(long *)(param_4 + 0x30);
    }
    goto LAB_0010210b;
  }
  local_158 = 0;
LAB_0010210b:
  if (local_158 < *(ulong *)param_5) {
    *(ulong *)param_5 = local_158;
    *(undefined4 *)(param_5 + 8) = *(undefined4 *)param_1;
    *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)param_2;
    *(uint *)(param_5 + 0x10) = *param_3;
    *(uint *)(param_5 + 0x14) = param_3[1];
    memcpy(*(void **)(param_5 + 0x18),*(void **)(param_5 + 0x20),(ulong)*(uint *)param_4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::find_optimal_solution(unsigned int, basisu::bc7enc_vec4F, basisu::bc7enc_vec4F,
   basisu::color_cell_compressor_params const*, basisu::color_cell_compressor_results*) */

long basisu::find_optimal_solution
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint param_1,color_cell_compressor_params *param_6,
               color_cell_compressor_results *param_7)

{
  int iVar1;
  byte *pbVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  color_cell_compressor_results *pcVar7;
  color_cell_compressor_results *pcVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  byte bVar20;
  undefined1 uVar21;
  int iVar22;
  int iVar23;
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
  color_quad_u8 *local_b8;
  color_cell_compressor_results local_a4;
  color_cell_compressor_results local_a0;
  int local_9c;
  color_cell_compressor_results local_98;
  color_cell_compressor_results local_91;
  int local_90;
  color_cell_compressor_results local_8c;
  color_cell_compressor_results local_8b;
  color_cell_compressor_results local_8a;
  color_cell_compressor_results local_89;
  float local_88 [2];
  undefined8 local_80;
  float local_78 [6];
  color_cell_compressor_results local_60 [4];
  color_cell_compressor_results local_5c [4];
  byte local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  
  local_78[0] = (float)param_1_00;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_78[0] < 0.0) {
    fVar29 = 0.0;
  }
  else {
    fVar29 = _LC9;
    if (local_78[0] <= _LC9) {
      fVar29 = local_78[0];
    }
  }
  local_78[1] = (float)((ulong)param_1_00 >> 0x20);
  if (local_78[1] < 0.0) {
    fVar30 = 0.0;
  }
  else {
    fVar30 = _LC9;
    if (local_78[1] <= _LC9) {
      fVar30 = local_78[1];
    }
  }
  local_78[2] = (float)param_2;
  local_78[1] = fVar30;
  local_78[0] = fVar29;
  if (local_78[2] < 0.0) {
    fVar31 = 0.0;
  }
  else {
    fVar31 = _LC9;
    if (local_78[2] <= _LC9) {
      fVar31 = local_78[2];
    }
  }
  local_78[3] = (float)((ulong)param_2 >> 0x20);
  if (local_78[3] < 0.0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = _LC9;
    if (local_78[3] <= _LC9) {
      fVar26 = local_78[3];
    }
  }
  local_88[0] = (float)param_3;
  local_78[3] = fVar26;
  local_78[2] = fVar31;
  if (local_88[0] < 0.0) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = _LC9;
    if (local_88[0] <= _LC9) {
      fVar28 = local_88[0];
    }
  }
  local_88[1] = (float)((ulong)param_3 >> 0x20);
  if (local_88[1] < 0.0) {
    fVar27 = 0.0;
  }
  else {
    fVar27 = _LC9;
    if (local_88[1] <= _LC9) {
      fVar27 = local_88[1];
    }
  }
  local_80._0_4_ = (float)param_4;
  local_88[1] = fVar27;
  local_88[0] = fVar28;
  if ((float)local_80 < 0.0) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = _LC9;
    if ((float)local_80 <= _LC9) {
      fVar25 = (float)local_80;
    }
  }
  local_80._4_4_ = (float)((ulong)param_4 >> 0x20);
  if (local_80._4_4_ < 0.0) {
    iVar6 = *(int *)(param_6 + 0x38);
    fVar32 = 0.0;
    local_80 = (ulong)(uint)fVar25;
  }
  else {
    iVar6 = *(int *)(param_6 + 0x38);
    fVar32 = _LC9;
    if (local_80._4_4_ <= _LC9) {
      fVar32 = local_80._4_4_;
    }
    local_80 = CONCAT44(fVar32,fVar25);
  }
  if (iVar6 == 0) {
    if (param_6[0x4d] == (color_cell_compressor_params)0x0) {
      uVar24 = (1 << ((byte)*(undefined4 *)(param_6 + 0x28) & 0x1f)) - 1;
      fVar33 = (float)(int)uVar24;
      uVar14 = (uint)(fVar29 * fVar33 + _LC8);
      uVar12 = (uint)(fVar30 * fVar33 + _LC8);
      uVar17 = (uint)(fVar31 * fVar33 + _LC8);
      if (0xff < (int)uVar14) {
        uVar14 = 0xff;
      }
      if ((int)uVar14 < 0) {
        uVar14 = 0;
      }
      if (0xff < (int)uVar12) {
        uVar12 = 0xff;
      }
      if ((int)uVar12 < 0) {
        uVar12 = 0;
      }
      if (0xff < (int)uVar17) {
        uVar17 = 0xff;
      }
      if ((int)uVar17 < 0) {
        uVar17 = 0;
      }
      iVar6 = (int)(fVar26 * fVar33 + _LC8);
      if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      bVar9 = (byte)iVar6;
      if (iVar6 < 0) {
        bVar9 = 0;
      }
      uVar18 = (uint)(fVar25 * fVar33 + _LC8);
      uVar13 = (uint)(fVar27 * fVar33 + _LC8);
      local_4c = (((uint)bVar9 << 8 | uVar17 & 0xff) << 8 | uVar12 & 0xff) << 8 | uVar14 & 0xff;
      uVar14 = (uint)(fVar28 * fVar33 + _LC8);
      if (0xff < (int)uVar14) {
        uVar14 = 0xff;
      }
      if ((int)uVar14 < 0) {
        uVar14 = 0;
      }
      if (0xff < (int)uVar13) {
        uVar13 = 0xff;
      }
      if ((int)uVar13 < 0) {
        uVar13 = 0;
      }
      if (0xff < (int)uVar18) {
        uVar18 = 0xff;
      }
      if ((int)uVar18 < 0) {
        uVar18 = 0;
      }
      iVar6 = (int)(fVar33 * fVar32 + _LC8);
      if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      bVar9 = (byte)iVar6;
      if (iVar6 < 0) {
        bVar9 = 0;
      }
      local_48 = CONCAT44(local_48._4_4_,
                          (((uint)bVar9 << 8 | uVar18 & 0xff) << 8 | uVar13 & 0xff) << 8 |
                          uVar14 & 0xff);
      fixDegenerateEndpoints
                (param_1,(color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                 (bc7enc_vec4F *)local_78,(bc7enc_vec4F *)local_88,uVar24,0);
      lVar15 = *(long *)param_7;
      if ((((lVar15 == -1) || (local_4c._0_1_ != param_7[8])) || (local_4c._1_1_ != param_7[9])) ||
         ((((local_4c._2_1_ != param_7[10] || (local_4c._3_1_ != param_7[0xb])) ||
           ((local_48._0_1_ != param_7[0xc] ||
            ((local_48._1_1_ != param_7[0xd] || (local_48._2_1_ != param_7[0xe])))))) ||
          (local_48._3_1_ != param_7[0xf])))) {
        evaluate_solution((color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                          (uint *)(param_7 + 0x10),param_6,param_7);
        lVar15 = *(long *)param_7;
      }
    }
    else {
      bVar9 = (byte)*(undefined4 *)(param_6 + 0x28) + 1;
      iVar6 = 1 << (bVar9 & 0x1f);
      bVar10 = 8 - bVar9;
      iVar22 = 4 - (uint)(param_6[0x4c] == (color_cell_compressor_params)0x0);
      fVar29 = (float)(iVar6 + -1);
      if (param_6[0x4e] == (color_cell_compressor_params)0x0) {
        bVar4 = false;
        iVar16 = 0;
        bVar5 = false;
        fVar30 = _LC10;
        fVar31 = _LC10;
        while( true ) {
          lVar15 = 0;
          iVar11 = iVar6 + -2 + iVar16;
          do {
            fVar26 = local_88[lVar15];
            iVar1 = iVar16 + (int)((local_78[lVar15] * fVar29 - (float)iVar16) * _LC8 + _LC8) * 2;
            iVar23 = iVar11;
            if (iVar1 <= iVar11) {
              iVar23 = iVar1;
            }
            uVar21 = (char)iVar23;
            if (iVar1 < iVar16) {
              uVar21 = (char)iVar16;
            }
            *(undefined1 *)((long)&local_54 + lVar15) = uVar21;
            iVar1 = iVar16 + (int)((fVar26 * fVar29 - (float)iVar16) * _LC8 + _LC8) * 2;
            iVar23 = iVar11;
            if (iVar1 <= iVar11) {
              iVar23 = iVar1;
            }
            uVar21 = (char)iVar23;
            if (iVar1 < iVar16) {
              uVar21 = (char)iVar16;
            }
            *(undefined1 *)((long)&local_50 + lVar15) = uVar21;
            lVar15 = lVar15 + 1;
          } while (lVar15 != 4);
          lVar15 = 0;
          do {
            uVar14 = (uint)*(byte *)((long)&local_54 + lVar15) << (bVar10 & 0x1f);
            *(byte *)((long)&local_48 + lVar15) = (byte)(uVar14 >> (bVar9 & 0x1f)) | (byte)uVar14;
            lVar15 = lVar15 + 1;
          } while (lVar15 != 4);
          lVar15 = 0;
          local_4c = (uint)local_48;
          do {
            uVar14 = (uint)*(byte *)((long)&local_50 + lVar15) << (bVar10 & 0x1f);
            *(byte *)((long)&local_48 + lVar15) = (byte)(uVar14 >> (bVar9 & 0x1f)) | (byte)uVar14;
            lVar15 = lVar15 + 1;
          } while (lVar15 != 4);
          fVar26 = 0.0;
          lVar15 = 0;
          fVar28 = 0.0;
          do {
            pbVar2 = (byte *)((long)&local_48 + lVar15);
            fVar27 = (float)*(byte *)((long)&local_4c + lVar15) - local_78[lVar15] * _LC4;
            pfVar3 = local_88 + lVar15;
            lVar15 = lVar15 + 1;
            fVar28 = fVar28 + fVar27 * fVar27;
            fVar27 = (float)*pbVar2 - *pfVar3 * _LC4;
            fVar26 = fVar26 + fVar27 * fVar27;
          } while (iVar22 != lVar15);
          if (fVar28 < fVar31) {
            bVar5 = true;
            local_8c = (color_cell_compressor_results)((byte)local_54 >> 1);
            local_8b = (color_cell_compressor_results)(local_54._1_1_ >> 1);
            local_89 = (color_cell_compressor_results)(local_54._2_1_ >> 1);
            local_8a = (color_cell_compressor_results)(local_54._3_1_ >> 1);
            fVar31 = fVar28;
            local_90 = iVar16;
          }
          if (fVar26 < fVar30) {
            local_98 = (color_cell_compressor_results)((byte)local_50 >> 1);
            local_91 = (color_cell_compressor_results)(local_50._1_1_ >> 1);
            local_a4 = (color_cell_compressor_results)(local_50._2_1_ >> 1);
            local_a0 = (color_cell_compressor_results)(local_50._3_1_ >> 1);
            bVar4 = true;
            fVar30 = fVar26;
            local_9c = iVar16;
          }
          if (iVar16 != 0) break;
          iVar16 = 1;
        }
        if (bVar4) {
          local_5c[1] = local_91;
          local_48 = CONCAT44(local_9c,(uint)local_48);
          local_5c[0] = local_98;
          local_5c[2] = local_a4;
          local_5c[3] = local_a0;
        }
        if (bVar5) {
          local_60[3] = local_8a;
          local_60[2] = local_89;
          local_60[1] = local_8b;
          local_60[0] = local_8c;
          local_48 = CONCAT44(local_48._4_4_,local_90);
        }
      }
      else {
        iVar16 = 0;
        fVar30 = _LC10;
        while( true ) {
          lVar15 = 0;
          iVar11 = iVar6 + -2 + iVar16;
          do {
            fVar31 = local_88[lVar15];
            iVar1 = iVar16 + (int)((local_78[lVar15] * fVar29 - (float)iVar16) * _LC8 + _LC8) * 2;
            iVar23 = iVar11;
            if (iVar1 <= iVar11) {
              iVar23 = iVar1;
            }
            bVar20 = (byte)iVar23;
            if (iVar1 < iVar16) {
              bVar20 = (byte)iVar16;
            }
            local_58[lVar15] = bVar20;
            iVar1 = iVar16 + (int)((fVar31 * fVar29 - (float)iVar16) * _LC8 + _LC8) * 2;
            iVar23 = iVar11;
            if (iVar1 <= iVar11) {
              iVar23 = iVar1;
            }
            if (iVar1 < iVar16) {
              iVar23 = iVar16;
            }
            *(char *)((long)&local_54 + lVar15) = (char)iVar23;
            lVar15 = lVar15 + 1;
          } while (lVar15 != 4);
          lVar15 = 0;
          do {
            uVar14 = (uint)local_58[lVar15] << (bVar10 & 0x1f);
            *(byte *)((long)&local_4c + lVar15) = (byte)uVar14 | (byte)(uVar14 >> (bVar9 & 0x1f));
            lVar15 = lVar15 + 1;
          } while (lVar15 != 4);
          lVar15 = 0;
          local_50 = local_4c;
          do {
            uVar14 = (uint)*(byte *)((long)&local_54 + lVar15) << (bVar10 & 0x1f);
            *(byte *)((long)&local_4c + lVar15) = (byte)uVar14 | (byte)(uVar14 >> (bVar9 & 0x1f));
            lVar15 = lVar15 + 1;
          } while (lVar15 != 4);
          lVar15 = 0;
          fVar31 = 0.0;
          do {
            fVar28 = (float)*(byte *)((long)&local_50 + lVar15) / _LC4 - local_78[lVar15];
            fVar26 = (float)*(byte *)((long)&local_4c + lVar15) / _LC4 - local_88[lVar15];
            lVar15 = lVar15 + 1;
            fVar31 = fVar31 + fVar26 * fVar26 + fVar28 * fVar28;
          } while (iVar22 != lVar15);
          if (fVar31 < fVar30) {
            lVar15 = 0;
            local_48 = CONCAT44(iVar16,iVar16);
            do {
              local_60[lVar15] = (color_cell_compressor_results)(local_58[lVar15] >> 1);
              local_5c[lVar15] =
                   (color_cell_compressor_results)(*(byte *)((long)&local_54 + lVar15) >> 1);
              lVar15 = lVar15 + 1;
              fVar30 = fVar31;
            } while (lVar15 != 4);
          }
          if (iVar16 != 0) break;
          iVar16 = 1;
        }
      }
      local_b8 = (color_quad_u8 *)local_60;
      fixDegenerateEndpoints
                (param_1,local_b8,(color_quad_u8 *)local_5c,(bc7enc_vec4F *)local_78,
                 (bc7enc_vec4F *)local_88,iVar6 + -1 >> 1,0);
      lVar15 = *(long *)param_7;
      if ((((((lVar15 == -1) || (local_60[0] != param_7[8])) || (local_60[1] != param_7[9])) ||
           ((local_60[2] != param_7[10] || (local_60[3] != param_7[0xb])))) ||
          (local_5c[0] != param_7[0xc])) ||
         (((local_5c[1] != param_7[0xd] || (local_5c[2] != param_7[0xe])) ||
          ((local_5c[3] != param_7[0xf] ||
           (((uint)local_48 != *(uint *)(param_7 + 0x10) ||
            (local_48._4_4_ != *(int *)(param_7 + 0x14))))))))) {
        evaluate_solution(local_b8,(color_quad_u8 *)local_5c,(uint *)&local_48,param_6,param_7);
        lVar15 = *(long *)param_7;
      }
    }
  }
  else {
    iVar6 = basist::astc_get_levels(iVar6);
    uVar14 = (uint)(fVar29 * _LC4 + _LC8);
    uVar12 = (uint)(fVar30 * _LC4 + _LC8);
    uVar17 = (uint)(fVar31 * _LC4 + _LC8);
    if (0xff < (int)uVar14) {
      uVar14 = 0xff;
    }
    if ((int)uVar14 < 0) {
      uVar14 = 0;
    }
    if (0xff < (int)uVar12) {
      uVar12 = 0xff;
    }
    if ((int)uVar12 < 0) {
      uVar12 = 0;
    }
    if (0xff < (int)uVar17) {
      uVar17 = 0xff;
    }
    if ((int)uVar17 < 0) {
      uVar17 = 0;
    }
    iVar22 = (int)(fVar26 * _LC4 + _LC8);
    if (0xff < iVar22) {
      iVar22 = 0xff;
    }
    bVar9 = (byte)iVar22;
    if (iVar22 < 0) {
      bVar9 = 0;
    }
    uVar18 = (uint)(fVar25 * _LC4 + _LC8);
    uVar13 = (uint)(fVar27 * _LC4 + _LC8);
    uVar24 = (uint)(fVar28 * _LC4 + _LC8);
    local_54 = (((uint)bVar9 << 8 | uVar17 & 0xff) << 8 | uVar12 & 0xff) << 8 | uVar14 & 0xff;
    if (0xff < (int)uVar24) {
      uVar24 = 0xff;
    }
    if ((int)uVar24 < 0) {
      uVar24 = 0;
    }
    if (0xff < (int)uVar13) {
      uVar13 = 0xff;
    }
    if ((int)uVar13 < 0) {
      uVar13 = 0;
    }
    if (0xff < (int)uVar18) {
      uVar18 = 0xff;
    }
    if ((int)uVar18 < 0) {
      uVar18 = 0;
    }
    iVar22 = (int)(_LC4 * fVar32 + _LC8);
    if (0xff < iVar22) {
      iVar22 = 0xff;
    }
    bVar9 = (byte)iVar22;
    if (iVar22 < 0) {
      bVar9 = 0;
    }
    uVar19 = (ulong)*(uint *)(param_6 + 0x38);
    lVar15 = 0;
    local_50 = (((uint)bVar9 << 8 | uVar18 & 0xff) << 8 | uVar13 & 0xff) << 8 | uVar24 & 0xff;
    do {
      ((color_quad_u8 *)&local_4c)[lVar15] =
           *(color_quad_u8 *)
            (g_astc_nearest_sorted_index +
            (ulong)*(byte *)((long)&local_54 + lVar15) + uVar19 * 0x100);
      uVar14 = local_4c;
      ((color_quad_u8 *)&local_48)[lVar15] =
           *(color_quad_u8 *)
            (g_astc_nearest_sorted_index +
            (ulong)*(byte *)((long)&local_50 + lVar15) + uVar19 * 0x100);
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
    lVar15 = 0;
    do {
      if ((((color_quad_u8 *)&local_4c)[lVar15] == ((color_quad_u8 *)&local_48)[lVar15]) &&
         (0.0 < (float)((uint)(*(float *)((bc7enc_vec4F *)local_78 + lVar15 * 4) -
                              *(float *)((bc7enc_vec4F *)local_88 + lVar15 * 4)) & _LC28))) {
        uVar17 = iVar6 - 1;
        uVar12 = (uint)local_48;
        fixDegenerateEndpoints
                  (param_1,(color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                   (bc7enc_vec4F *)local_78,(bc7enc_vec4F *)local_88,uVar17,1);
        if ((((*(long *)param_7 == -1) ||
             ((((local_4c._0_1_ != param_7[8] || (local_4c._1_1_ != param_7[9])) ||
               (local_4c._2_1_ != param_7[10])) ||
              ((local_4c._3_1_ != param_7[0xb] || (local_48._0_1_ != param_7[0xc])))))) ||
            (local_48._1_1_ != param_7[0xd])) ||
           ((local_48._2_1_ != param_7[0xe] || (local_48._3_1_ != param_7[0xf])))) {
          evaluate_solution((color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                            (uint *)(param_7 + 0x10),param_6,param_7);
        }
        local_48 = CONCAT44(local_48._4_4_,uVar12);
        local_4c = uVar14;
        fixDegenerateEndpoints
                  (param_1,(color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                   (bc7enc_vec4F *)local_78,(bc7enc_vec4F *)local_88,uVar17,0);
        if ((((*(long *)param_7 == -1) || (local_4c._0_1_ != param_7[8])) ||
            (local_4c._1_1_ != param_7[9])) ||
           ((((local_4c._2_1_ != param_7[10] || (local_4c._3_1_ != param_7[0xb])) ||
             ((local_48._0_1_ != param_7[0xc] ||
              ((local_48._1_1_ != param_7[0xd] || (local_48._2_1_ != param_7[0xe])))))) ||
            (local_48._3_1_ != param_7[0xf])))) {
          evaluate_solution((color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                            (uint *)(param_7 + 0x10),param_6,param_7);
        }
        local_48 = CONCAT44(local_48._4_4_,uVar12);
        local_4c = uVar14;
        fixDegenerateEndpoints
                  (param_1,(color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                   (bc7enc_vec4F *)local_78,(bc7enc_vec4F *)local_88,uVar17,2);
        if ((((((*(long *)param_7 == -1) || (local_4c._0_1_ != param_7[8])) ||
              (local_4c._1_1_ != param_7[9])) ||
             ((local_4c._2_1_ != param_7[10] || (local_4c._3_1_ != param_7[0xb])))) ||
            ((local_48._0_1_ != param_7[0xc] ||
             ((local_48._1_1_ != param_7[0xd] || (local_48._2_1_ != param_7[0xe])))))) ||
           (local_48._3_1_ != param_7[0xf])) {
          evaluate_solution((color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                            (uint *)(param_7 + 0x10),param_6,param_7);
        }
        local_48 = CONCAT44(local_48._4_4_,uVar12);
        local_4c = uVar14;
        fixDegenerateEndpoints
                  (param_1,(color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                   (bc7enc_vec4F *)local_78,(bc7enc_vec4F *)local_88,uVar17,3);
        if ((((((*(long *)param_7 == -1) || (local_4c._0_1_ != param_7[8])) ||
              (local_4c._1_1_ != param_7[9])) ||
             ((local_4c._2_1_ != param_7[10] || (local_4c._3_1_ != param_7[0xb])))) ||
            ((local_48._0_1_ != param_7[0xc] ||
             ((local_48._1_1_ != param_7[0xd] || (local_48._2_1_ != param_7[0xe])))))) ||
           (local_48._3_1_ != param_7[0xf])) {
          evaluate_solution((color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                            (uint *)(param_7 + 0x10),param_6,param_7);
        }
        uVar19 = (ulong)*(uint *)(param_6 + 0x38);
        lVar15 = *(long *)param_7;
        goto LAB_00103105;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 3);
    lVar15 = *(long *)param_7;
    if (((((lVar15 == -1) || (local_4c._0_1_ != param_7[8])) || (local_4c._1_1_ != param_7[9])) ||
        (((local_4c._2_1_ != param_7[10] || (local_4c._3_1_ != param_7[0xb])) ||
         ((local_48._0_1_ != param_7[0xc] ||
          ((local_48._1_1_ != param_7[0xd] || (local_48._2_1_ != param_7[0xe])))))))) ||
       (local_48._3_1_ != param_7[0xf])) {
      evaluate_solution((color_quad_u8 *)&local_4c,(color_quad_u8 *)&local_48,
                        (uint *)(param_7 + 0x10),param_6,param_7);
      lVar15 = *(long *)param_7;
      uVar19 = (ulong)*(uint *)(param_6 + 0x38);
    }
LAB_00103105:
    param_7[0x28] =
         *(color_cell_compressor_results *)
          (g_astc_sorted_order_unquant + (uVar19 * 0x100 + (ulong)(byte)param_7[8]) * 2 + 1);
    param_7[0x2c] =
         *(color_cell_compressor_results *)
          (g_astc_sorted_order_unquant +
          (ulong)CONCAT41(*(undefined4 *)(param_6 + 0x38),param_7[0xc]) * 2 + 1);
    pcVar7 = param_7 + 9;
    do {
      pcVar8 = pcVar7 + 1;
      pcVar7[0x20] = *(color_cell_compressor_results *)
                      (g_astc_sorted_order_unquant +
                      (ulong)CONCAT41(*(undefined4 *)(param_6 + 0x38),*pcVar7) * 2 + 1);
      pcVar7[0x24] = *(color_cell_compressor_results *)
                      (g_astc_sorted_order_unquant +
                      (ulong)CONCAT41(*(undefined4 *)(param_6 + 0x38),pcVar7[4]) * 2 + 1);
      pcVar7 = pcVar8;
    } while (param_7 + 0xc != pcVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::bc7enc_compress_block_init() */

void basisu::bc7enc_compress_block_init(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte in_CL;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte in_DL;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_EBX;
  uint uVar11;
  int unaff_EBP;
  byte in_SIL;
  ulong uVar12;
  long lVar13;
  int iVar14;
  undefined2 *puVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  byte unaff_R12B;
  int iVar20;
  ulong uVar21;
  byte unaff_R13B;
  uint uVar22;
  byte unaff_R14B;
  undefined2 *puVar23;
  ulong unaff_R15;
  ulong local_50;
  byte local_3b;
  byte local_3a;
  byte local_39;
  
  astc_init();
  iVar9 = _memcpy;
  iVar17 = 0;
  iVar14 = 0x40 - _memcpy;
  uVar8 = (uint)in_DL;
  puVar15 = &g_bc7_mode_1_optimal_endpoints;
  do {
    uVar3 = 0;
    puVar23 = puVar15;
    while( true ) {
      uVar10 = 0xffffffff;
      iVar20 = 0;
      do {
        iVar5 = 0;
        uVar18 = (iVar20 * 2 | uVar3) * 2;
        do {
          uVar2 = (iVar5 * 2 | uVar3) * 2;
          iVar1 = ((uVar2 | uVar2 >> 7) * iVar9 + (uVar18 | uVar18 >> 7) * iVar14 + 0x20 >> 6) -
                  iVar17;
          uVar2 = iVar1 * iVar1;
          if ((int)uVar2 < (int)(uVar10 & 0xffff)) {
            unaff_EBX = iVar5;
            uVar10 = uVar2;
            unaff_EBP = iVar20;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x40);
        iVar20 = iVar20 + 1;
      } while (iVar20 != 0x40);
      *puVar23 = (short)uVar10;
      *(char *)(puVar23 + 1) = (char)unaff_EBP;
      *(char *)((long)puVar23 + 3) = (char)unaff_EBX;
      if (uVar3 != 0) break;
      uVar3 = 1;
      puVar23 = puVar23 + 2;
    }
    iVar17 = iVar17 + 1;
    unaff_R15 = unaff_R15 & 0xff;
    puVar15 = puVar15 + 4;
  } while (iVar17 != 0x100);
  uVar16 = (ulong)in_CL;
  uVar3 = (uint)unaff_R14B;
  uVar21 = (ulong)unaff_R12B;
  uVar10 = (uint)local_39;
  iVar17 = 0;
  puVar15 = &g_astc_4bit_3bit_optimal_endpoints;
  do {
    uVar2 = 0x20;
    uVar22 = 0;
    uVar18 = 0xffffffff;
    do {
      uVar6 = 0;
      uVar11 = uVar2;
      do {
        iVar20 = (uVar11 >> 0xe) - iVar17;
        uVar4 = iVar20 * iVar20;
        if ((int)uVar4 < (int)(uVar18 & 0xffff)) {
          uVar10 = uVar6;
          uVar18 = uVar4;
          uVar8 = uVar22;
        }
        uVar6 = uVar6 + 1;
        uVar11 = uVar11 + iVar9 * 0x1111;
      } while (uVar6 != 0x10);
      uVar22 = uVar22 + 1;
      uVar2 = uVar2 + iVar14 * 0x1111;
    } while (uVar22 != 0x10);
    iVar17 = iVar17 + 1;
    *puVar15 = (short)uVar18;
    *(char *)(puVar15 + 1) = (char)uVar8;
    *(char *)((long)puVar15 + 3) = (char)uVar10;
    iVar20 = basist::g_bc7_weights2._4_4_;
    puVar15 = puVar15 + 2;
  } while (iVar17 != 0x100);
  uVar10 = (uint)in_SIL;
  iVar17 = 0;
  uVar8 = (uint)local_3a;
  iVar9 = 0x40 - basist::g_bc7_weights2._4_4_;
  iVar14 = basist::g_bc7_weights2._4_4_ * 0x1111;
  local_50 = (ulong)unaff_R13B;
  puVar15 = &g_astc_4bit_2bit_optimal_endpoints;
  do {
    uVar2 = 0x20;
    uVar18 = 0xffffffff;
    uVar22 = 0;
    do {
      uVar6 = 0;
      uVar11 = uVar2;
      do {
        iVar5 = (uVar11 >> 0xe) - iVar17;
        uVar4 = iVar5 * iVar5;
        if ((int)uVar4 < (int)(uVar18 & 0xffff)) {
          uVar18 = uVar4;
          uVar8 = uVar22;
          uVar10 = uVar6;
        }
        uVar6 = uVar6 + 1;
        uVar11 = uVar11 + iVar14;
      } while (uVar6 != 0x10);
      uVar22 = uVar22 + 1;
      uVar2 = uVar2 + iVar9 * 0x1111;
    } while (uVar22 != 0x10);
    iVar17 = iVar17 + 1;
    *puVar15 = (short)uVar18;
    *(char *)(puVar15 + 1) = (char)uVar8;
    *(char *)((long)puVar15 + 3) = (char)uVar10;
    puVar15 = puVar15 + 2;
  } while (iVar17 != 0x100);
  iVar14 = 0;
  uVar7 = (ulong)local_3b;
  puVar15 = &g_astc_range7_2bit_optimal_endpoints;
  do {
    uVar19 = 0;
    uVar8 = 0xffffffff;
    do {
      uVar12 = 0;
      do {
        iVar17 = (((uint)(byte)g_astc_sorted_order_unquant[uVar12 * 2 + 0xe00] * iVar20 +
                  (uint)(byte)g_astc_sorted_order_unquant[uVar19 * 2 + 0xe00] * iVar9) * 0x101 +
                  0x20 >> 0xe) - iVar14;
        uVar10 = iVar17 * iVar17;
        if ((int)uVar10 < (int)(uVar8 & 0xffff)) {
          uVar16 = uVar19 & 0xffffffff;
          uVar7 = uVar12 & 0xffffffff;
          uVar8 = uVar10;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0xc);
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0xc);
    iVar14 = iVar14 + 1;
    *puVar15 = (short)uVar8;
    *(char *)(puVar15 + 1) = (char)uVar16;
    *(char *)((long)puVar15 + 3) = (char)uVar7;
    puVar15 = puVar15 + 2;
  } while (iVar14 != 0x100);
  iVar14 = 0;
  puVar15 = &g_astc_range13_2bit_optimal_endpoints;
  do {
    uVar16 = 0;
    uVar8 = 0xffffffff;
    do {
      uVar7 = 0;
      do {
        iVar17 = (((uint)(byte)g_astc_sorted_order_unquant[uVar7 * 2 + 0x1a00] * iVar20 +
                  (uint)(byte)g_astc_sorted_order_unquant[uVar16 * 2 + 0x1a00] * iVar9) * 0x101 +
                  0x20 >> 0xe) - iVar14;
        uVar10 = iVar17 * iVar17;
        if ((int)uVar10 < (int)(uVar8 & 0xffff)) {
          local_50 = uVar16 & 0xffffffff;
          uVar21 = uVar7 & 0xffffffff;
          uVar8 = uVar10;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x30);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x30);
    iVar14 = iVar14 + 1;
    *puVar15 = (short)uVar8;
    *(char *)(puVar15 + 1) = (char)local_50;
    *(char *)((long)puVar15 + 3) = (char)uVar21;
    iVar17 = _DAT_0010d06c;
    puVar15 = puVar15 + 2;
  } while (iVar14 != 0x100);
  iVar14 = 0;
  iVar9 = 0x40 - _DAT_0010d06c;
  puVar15 = &g_astc_range11_5bit_optimal_endpoints;
  do {
    lVar13 = 0;
    uVar8 = 0xffffffff;
    do {
      uVar16 = 0;
      do {
        uVar18 = uVar8 & 0xffff;
        iVar20 = (((uint)(byte)g_astc_sorted_order_unquant[uVar16 * 2 + 0x1600] * iVar17 +
                  (uint)(byte)g_astc_sorted_order_unquant[lVar13 * 2 + 0x1600] * iVar9) * 0x101 +
                  0x20 >> 0xe) - iVar14;
        uVar10 = iVar20 * iVar20;
        if ((int)uVar10 < (int)uVar18) {
          uVar8 = uVar10;
        }
        if ((int)uVar10 < (int)uVar18) {
          unaff_R15 = uVar16 & 0xffffffff;
          uVar3 = (uint)lVar13;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x20);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x20);
    iVar14 = iVar14 + 1;
    *puVar15 = (short)uVar8;
    *(char *)(puVar15 + 1) = (char)uVar3;
    *(char *)((long)puVar15 + 3) = (char)unaff_R15;
    puVar15 = puVar15 + 2;
  } while (iVar14 != 0x100);
  return;
}



/* basisu::check_best_overall_error(basisu::color_cell_compressor_params const*,
   basisu::color_cell_compressor_results*) */

void basisu::check_best_overall_error
               (color_cell_compressor_params *param_1,color_cell_compressor_results *param_2)

{
  return;
}



/* basisu::color_cell_compression(unsigned int, basisu::color_cell_compressor_params const*,
   basisu::color_cell_compressor_results*, basisu::bc7enc_compress_block_params const*) */

ulong basisu::color_cell_compression
                (uint param_1,color_cell_compressor_params *param_2,
                color_cell_compressor_results *param_3,bc7enc_compress_block_params *param_4)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  byte bVar14;
  int iVar15;
  undefined8 uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  color_cell_compressor_results *pcVar21;
  color_cell_compressor_results *pcVar22;
  color_cell_compressor_params cVar23;
  uint uVar24;
  uchar *puVar25;
  uint uVar26;
  long in_FS_OFFSET;
  byte bVar27;
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
  float fVar51;
  float fVar52;
  float fVar53;
  float local_11c;
  undefined8 local_108;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68 [16];
  byte local_58 [24];
  long local_40;
  
  bVar27 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = *(long *)(param_2 + 0x30);
  *(undefined8 *)param_3 = 0xffffffffffffffff;
  if (lVar8 == 0) {
    if (param_1 == 1) {
      cVar2 = is_solid_rgb(param_2,&local_b4,&local_b0,&local_ac);
      if (cVar2 != '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar10 = pack_mode1_to_one_color
                             (param_2,param_3,local_b4,local_b0,local_ac,*(uchar **)(param_3 + 0x18)
                             );
          return uVar10;
        }
        goto LAB_00105e2e;
      }
      goto LAB_00104296;
    }
    iVar4 = *(int *)(param_2 + 0x38);
    cVar23 = param_2[0x4c];
    if (iVar4 != 8) {
      if (iVar4 == 7) {
        if (((*(int *)(param_2 + 0x10) == 4) && (cVar23 == (color_cell_compressor_params)0x0)) &&
           (cVar2 = is_solid_rgb(param_2,&local_b4,&local_b0,&local_ac), cVar2 != '\0')) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar10 = pack_astc_range7_2bit_to_one_color
                               (param_2,param_3,local_b4,local_b0,local_ac,
                                *(uchar **)(param_3 + 0x18));
            return uVar10;
          }
          goto LAB_00105e2e;
        }
      }
      else if (iVar4 == 0xd) {
        if (((*(int *)(param_2 + 0x10) == 4) && (cVar23 == (color_cell_compressor_params)0x0)) &&
           (cVar2 = is_solid_rgb(param_2,&local_b4,&local_b0,&local_ac), cVar2 != '\0')) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar10 = pack_astc_range13_2bit_to_one_color
                               (param_2,param_3,local_b4,local_b0,local_ac,
                                *(uchar **)(param_3 + 0x18));
            return uVar10;
          }
          goto LAB_00105e2e;
        }
      }
      else if ((((iVar4 == 0xb) && (*(int *)(param_2 + 0x10) == 0x20)) &&
               (cVar23 == (color_cell_compressor_params)0x0)) &&
              (cVar2 = is_solid_rgb(param_2,&local_b4,&local_b0,&local_ac), cVar2 != '\0')) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar10 = pack_astc_range11_5bit_to_one_color
                             (param_2,param_3,local_b4,local_b0,local_ac,*(uchar **)(param_3 + 0x18)
                             );
          return uVar10;
        }
        goto LAB_00105e2e;
      }
      goto LAB_0010429b;
    }
    if (*(int *)(param_2 + 0x10) == 8) {
      if ((cVar23 == (color_cell_compressor_params)0x0) &&
         (cVar2 = is_solid_rgb(param_2,&local_b4,&local_b0,&local_ac), cVar2 != '\0')) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar10 = pack_astc_4bit_3bit_to_one_color
                             (param_2,param_3,local_b4,local_b0,local_ac,*(uchar **)(param_3 + 0x18)
                             );
          return uVar10;
        }
        goto LAB_00105e2e;
      }
      goto LAB_0010429b;
    }
    uVar18 = *(uint *)param_2;
    if ((*(int *)(param_2 + 0x10) != 4) || (cVar23 == (color_cell_compressor_params)0x0))
    goto LAB_0010429d;
    pbVar17 = *(byte **)(param_2 + 8);
    local_b4 = (uint)*pbVar17;
    local_b0 = (uint)pbVar17[1];
    local_ac = (uint)pbVar17[2];
    if (1 < uVar18) {
      pbVar6 = pbVar17 + 4;
      do {
        if ((((local_b4 != *pbVar6) || (local_b0 != pbVar6[1])) || (local_ac != pbVar6[2])) ||
           ((uint)pbVar17[3] != (uint)pbVar6[3])) goto LAB_001042a9;
        pbVar6 = pbVar6 + 4;
      } while (pbVar17 + (ulong)(uVar18 - 2) * 4 + 8 != pbVar6);
    }
    uVar10 = pack_astc_4bit_2bit_to_one_color_rgba
                       (param_2,param_3,(uint)*pbVar17,(uint)pbVar17[1],(uint)pbVar17[2],
                        (uint)pbVar17[3],*(uchar **)(param_3 + 0x18));
    goto LAB_00104d6d;
  }
LAB_00104296:
  cVar23 = param_2[0x4c];
LAB_0010429b:
  uVar18 = *(uint *)param_2;
LAB_0010429d:
  if (uVar18 == 0) {
    fVar39 = (_LC9 / 0.0) * 0.0;
    fVar52 = fVar39;
    fVar34 = fVar39;
    local_d8 = fVar39;
    local_d4 = fVar39;
    local_d0 = fVar39;
    local_cc = fVar39;
    fVar45 = fVar39;
LAB_0010439b:
    local_11c = _LC9;
    if (local_d4 < 0.0) goto LAB_00104995;
LAB_001043ae:
    fVar31 = local_11c;
    if (local_d4 <= local_11c) {
      fVar31 = local_d4;
    }
    local_d4 = fVar31;
    if (0.0 <= fVar34) goto LAB_001043cc;
LAB_001049ab:
    fVar31 = 0.0;
    if (local_d0 < 0.0) goto LAB_001049c3;
LAB_001043ee:
    fVar34 = local_11c;
    if (local_d0 <= local_11c) {
      fVar34 = local_d0;
    }
    local_d0 = fVar34;
    if (cVar23 == (color_cell_compressor_params)0x0) goto LAB_00104407;
LAB_001049d4:
    if (uVar18 != 0) {
      fVar34 = 0.0;
      pbVar17 = *(byte **)(param_2 + 8);
      uVar10 = (ulong)uVar18;
      uVar9 = 0;
      fVar32 = 0.0;
      fVar43 = 0.0;
      fVar29 = fVar32;
      do {
        fVar30 = (float)pbVar17[uVar9 * 4 + 3] - fVar45;
        fVar50 = (float)pbVar17[uVar9 * 4 + 2] - fVar52;
        fVar48 = (float)pbVar17[uVar9 * 4 + 1] - fVar39;
        fVar49 = fVar30 * fVar50;
        fVar33 = (float)pbVar17[uVar9 * 4] - local_d8;
        fVar53 = fVar30 * fVar48;
        fVar36 = fVar48 * fVar48;
        fVar51 = fVar30 * fVar33;
        fVar41 = fVar33 * fVar33;
        fVar44 = fVar50 * fVar33;
        fVar47 = fVar48 * fVar33;
        fVar37 = fVar50 * fVar50;
        fVar42 = fVar50 * fVar48;
        fVar38 = fVar30 * fVar30;
        fVar46 = fVar41;
        fVar35 = fVar38;
        fVar28 = fVar36;
        fVar40 = fVar37;
        if (uVar9 != 0) {
          fVar46 = fVar43 * fVar43;
          fVar48 = fVar29;
          fVar50 = fVar32;
          fVar33 = fVar43;
          fVar30 = fVar34;
          fVar35 = fVar34 * fVar34;
          fVar28 = fVar29 * fVar29;
          fVar40 = fVar32 * fVar32;
        }
        fVar35 = fVar46 + fVar28 + fVar40 + fVar35;
        if (fVar35 != 0.0) {
          fVar28 = local_11c / SQRT(fVar35);
          fVar33 = fVar33 * fVar28;
          fVar48 = fVar48 * fVar28;
          fVar50 = fVar50 * fVar28;
          fVar30 = fVar30 * fVar28;
        }
        uVar9 = uVar9 + 1;
        fVar43 = fVar43 + fVar50 * fVar44 + fVar48 * fVar47 + fVar41 * fVar33 + fVar30 * fVar51;
        fVar29 = fVar29 + fVar50 * fVar42 + fVar36 * fVar48 + fVar47 * fVar33 + fVar30 * fVar53;
        fVar32 = fVar32 + fVar37 * fVar50 + fVar42 * fVar48 + fVar44 * fVar33 + fVar30 * fVar49;
        fVar34 = fVar34 + fVar33 * fVar51 + fVar48 * fVar53 + fVar50 * fVar49 + fVar30 * fVar38;
      } while (uVar9 != uVar10);
      fVar28 = fVar43 * fVar43 + fVar29 * fVar29 + fVar32 * fVar32 + fVar34 * fVar34;
      if (fVar28 == 0.0) {
        cVar23 = param_2[0x4f];
joined_r0x00104d2c:
        fVar29 = _LC13;
        fVar28 = _LC8;
        fVar32 = _LC14;
        fVar43 = _LC15;
        fVar34 = _LC13;
        fVar40 = _LC8;
        if (cVar23 == (color_cell_compressor_params)0x0) goto LAB_001045d4;
        goto LAB_001045da;
      }
      fVar28 = local_11c / SQRT(fVar28);
      fVar43 = fVar43 * fVar28;
      fVar29 = fVar29 * fVar28;
      fVar32 = fVar32 * fVar28;
      fVar34 = fVar34 * fVar28;
      if (fVar29 * fVar29 + fVar43 * fVar43 + fVar32 * fVar32 + fVar34 * fVar34 < _LC8) {
        cVar23 = param_2[0x4f];
        goto joined_r0x00104d2c;
      }
      goto LAB_001045e8;
    }
    fVar28 = _LC22;
    fVar40 = _LC21;
    fVar29 = _LC8;
    fVar32 = _LC8;
    fVar43 = _LC8;
    fVar34 = _LC8;
    if (param_2[0x4f] != (color_cell_compressor_params)0x0) {
      fVar29 = _LC13;
      fVar32 = _LC14;
      fVar43 = _LC15;
      fVar34 = _LC13;
    }
  }
  else {
    pbVar17 = *(byte **)(param_2 + 8);
LAB_001042a9:
    local_d0 = 0.0;
    fVar34 = 0.0;
    local_d4 = 0.0;
    fVar31 = 0.0;
    pbVar6 = pbVar17;
    do {
      pbVar5 = pbVar6 + 4;
      local_d0 = local_d0 + (float)pbVar6[3];
      fVar34 = fVar34 + (float)pbVar6[2];
      local_d4 = local_d4 + (float)pbVar6[1];
      fVar31 = fVar31 + (float)*pbVar6;
      pbVar6 = pbVar5;
    } while (pbVar17 + (ulong)uVar18 * 4 != pbVar5);
    fVar28 = (float)uVar18;
    local_11c = _LC9;
    fVar39 = _LC9 / fVar28;
    local_d8 = fVar39 * fVar31;
    fVar45 = fVar39 * local_d0;
    fVar52 = fVar39 * fVar34;
    fVar39 = fVar39 * local_d4;
    fVar28 = _LC9 / (_LC4 * fVar28);
    local_d0 = local_d0 * fVar28;
    fVar34 = fVar34 * fVar28;
    local_d4 = local_d4 * fVar28;
    fVar28 = fVar28 * fVar31;
    if (fVar28 < 0.0) {
      local_cc = 0.0;
      goto LAB_0010439b;
    }
    local_cc = _LC9;
    if (fVar28 <= _LC9) {
      local_cc = fVar28;
    }
    if (0.0 <= local_d4) goto LAB_001043ae;
LAB_00104995:
    local_d4 = 0.0;
    if (fVar34 < 0.0) goto LAB_001049ab;
LAB_001043cc:
    fVar31 = local_11c;
    if (fVar34 <= local_11c) {
      fVar31 = fVar34;
    }
    if (0.0 <= local_d0) goto LAB_001043ee;
LAB_001049c3:
    local_d0 = 0.0;
    if (cVar23 != (color_cell_compressor_params)0x0) goto LAB_001049d4;
LAB_00104407:
    if (uVar18 == 0) {
      fVar28 = 0.0;
      fVar46 = 0.0;
      fVar48 = 0.0;
      fVar34 = 0.0;
      fVar50 = 0.0;
      fVar40 = 0.0;
    }
    else {
      fVar28 = 0.0;
      fVar46 = 0.0;
      fVar48 = 0.0;
      fVar34 = 0.0;
      fVar50 = 0.0;
      fVar40 = 0.0;
      pbVar17 = *(byte **)(param_2 + 8);
      do {
        pbVar6 = pbVar17 + 4;
        fVar33 = (float)*pbVar17 - local_d8;
        fVar32 = (float)pbVar17[1] - fVar39;
        fVar29 = (float)pbVar17[2] - fVar52;
        fVar46 = fVar46 + fVar33 * fVar33;
        fVar28 = fVar28 + fVar33 * fVar29;
        fVar34 = fVar34 + fVar33 * fVar32;
        fVar48 = fVar48 + fVar32 * fVar32;
        fVar40 = fVar40 + fVar32 * fVar29;
        fVar50 = fVar50 + fVar29 * fVar29;
        pbVar17 = pbVar6;
      } while (*(byte **)(param_2 + 8) + (ulong)uVar18 * 4 != pbVar6);
    }
    iVar4 = 3;
    fVar29 = local_11c;
    fVar33 = _LC12;
    fVar32 = _LC11;
    do {
      fVar30 = fVar29 * fVar40;
      fVar43 = fVar46 * fVar33 + fVar34 * fVar29 + fVar32 * fVar28;
      fVar29 = fVar34 * fVar33 + fVar29 * fVar48 + fVar32 * fVar40;
      fVar32 = fVar32 * fVar50 + fVar33 * fVar28 + fVar30;
      fVar33 = (float)((uint)fVar43 & _LC28);
      if ((float)((uint)fVar43 & _LC28) <= (float)((uint)fVar29 & _LC28)) {
        fVar33 = (float)((uint)fVar29 & _LC28);
      }
      if (fVar33 <= (float)((uint)fVar32 & _LC28)) {
        fVar33 = (float)((uint)fVar32 & _LC28);
      }
      if (_LC23 < fVar33) {
        fVar33 = local_11c / fVar33;
        fVar43 = fVar43 * fVar33;
        fVar29 = fVar29 * fVar33;
        fVar32 = fVar32 * fVar33;
      }
      iVar4 = iVar4 + -1;
      fVar33 = fVar43;
    } while (iVar4 != 0);
    fVar34 = fVar43 * fVar43 + fVar29 * fVar29 + fVar32 * fVar32;
    if (fVar34 < _LC23) {
LAB_001045be:
      fVar34 = 0.0;
      fVar29 = _LC17;
      fVar28 = _LC19;
      fVar32 = _LC16;
      fVar43 = _LC18;
      fVar40 = fVar34;
      if (param_2[0x4f] != (color_cell_compressor_params)0x0) goto LAB_001045da;
LAB_001045d4:
      fVar29 = fVar28;
      fVar32 = fVar28;
      fVar43 = fVar28;
      fVar34 = fVar40;
    }
    else {
      fVar34 = local_11c / SQRT(fVar34);
      fVar43 = fVar43 * fVar34;
      fVar29 = fVar29 * fVar34;
      fVar32 = fVar32 * fVar34;
      fVar34 = 0.0;
      if (fVar43 * fVar43 + fVar29 * fVar29 + fVar32 * fVar32 + 0.0 < _LC8) goto LAB_001045be;
    }
LAB_001045da:
    fVar28 = _LC22;
    fVar40 = _LC21;
    if (uVar18 != 0) {
      pbVar17 = *(byte **)(param_2 + 8);
      uVar10 = (ulong)uVar18;
LAB_001045e8:
      pbVar6 = pbVar17;
      fVar28 = _LC10;
      fVar40 = _LC20;
      do {
        pbVar5 = pbVar6 + 4;
        fVar46 = ((float)pbVar6[1] - fVar39) * fVar29 + ((float)*pbVar6 - local_d8) * fVar43 +
                 ((float)pbVar6[2] - fVar52) * fVar32 + ((float)pbVar6[3] - fVar45) * fVar34;
        if (fVar46 <= fVar28) {
          fVar28 = fVar46;
        }
        if (fVar40 <= fVar46) {
          fVar40 = fVar46;
        }
        pbVar6 = pbVar5;
      } while (pbVar17 + uVar10 * 4 != pbVar5);
      fVar28 = fVar28 * _LC24;
      fVar40 = fVar40 * _LC24;
    }
  }
  fVar39 = fVar34 * fVar28 + local_d0;
  fVar46 = fVar32 * fVar28 + fVar31;
  fVar50 = fVar29 * fVar28 + local_d4;
  fVar48 = fVar28 * fVar43 + local_cc;
  fVar52 = fVar34 * fVar40 + local_d0;
  fVar45 = fVar32 * fVar40 + fVar31;
  fVar34 = fVar29 * fVar40 + local_d4;
  fVar28 = fVar40 * fVar43 + local_cc;
  if (fVar48 < 0.0) {
    fVar40 = 0.0;
  }
  else {
    fVar40 = local_11c;
    if (fVar48 <= local_11c) {
      fVar40 = fVar48;
    }
  }
  if (fVar50 < 0.0) {
    fVar48 = 0.0;
  }
  else {
    fVar48 = local_11c;
    if (fVar50 <= local_11c) {
      fVar48 = fVar50;
    }
  }
  if (fVar46 < 0.0) {
    fVar50 = 0.0;
  }
  else {
    fVar50 = local_11c;
    if (fVar46 <= local_11c) {
      fVar50 = fVar46;
    }
  }
  if (fVar39 < 0.0) {
    fVar46 = 0.0;
  }
  else {
    fVar46 = local_11c;
    if (fVar39 <= local_11c) {
      fVar46 = fVar39;
    }
  }
  if (fVar28 < 0.0) {
    fVar39 = 0.0;
  }
  else {
    fVar39 = local_11c;
    if (fVar28 <= local_11c) {
      fVar39 = fVar28;
    }
  }
  if (fVar34 < 0.0) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = local_11c;
    if (fVar34 <= local_11c) {
      fVar28 = fVar34;
    }
  }
  if (fVar45 < 0.0) {
    fVar34 = 0.0;
  }
  else {
    fVar34 = local_11c;
    if (fVar45 <= local_11c) {
      fVar34 = fVar45;
    }
  }
  if (fVar52 < 0.0) {
    fVar45 = 0.0;
  }
  else {
    fVar45 = local_11c;
    if (fVar52 <= local_11c) {
      fVar45 = fVar52;
    }
  }
  local_108 = (bc7enc_vec4F *)CONCAT44(fVar28,fVar39);
  uVar7 = CONCAT44(fVar45,fVar34);
  uVar13 = CONCAT44(fVar48,fVar40);
  uVar16 = CONCAT44(fVar46,fVar50);
  uVar1 = local_108;
  if (fVar39 + fVar28 + fVar34 + fVar45 < fVar40 + fVar48 + fVar50 + fVar46) {
    uVar1 = CONCAT44(fVar48,fVar40);
    uVar7 = CONCAT44(fVar46,fVar50);
    uVar13 = local_108;
    uVar16 = CONCAT44(fVar45,fVar34);
  }
  _LC9 = local_11c;
  lVar8 = find_optimal_solution(uVar13,uVar16,uVar1,uVar7,param_1,param_2,param_3);
  fVar34 = _LC24;
  if (lVar8 == 0) {
LAB_00104eb0:
    uVar10 = 0;
  }
  else {
    if (*(int *)(param_4 + 0x1c) != 0) {
      uVar18 = 0;
      do {
        _local_a8 = (undefined1  [16])0x0;
        _local_98 = (undefined1  [16])0x0;
        if (param_2[0x4c] == (color_cell_compressor_params)0x0) {
          compute_least_squares_endpoints_rgb
                    (*(uint *)param_2,*(uchar **)(param_3 + 0x18),*(bc7enc_vec4F **)(param_2 + 0x20)
                     ,(bc7enc_vec4F *)local_a8,(bc7enc_vec4F *)local_98,
                     *(color_quad_u8 **)(param_2 + 8));
        }
        else {
          compute_least_squares_endpoints_rgba
                    (*(uint *)param_2,*(uchar **)(param_3 + 0x18),*(bc7enc_vec4F **)(param_2 + 0x20)
                     ,(bc7enc_vec4F *)local_a8,(bc7enc_vec4F *)local_98,
                     *(color_quad_u8 **)(param_2 + 8));
        }
        local_98._0_4_ = fVar34 * (float)local_98._0_4_;
        local_98._4_4_ = fVar34 * (float)local_98._4_4_;
        uStack_90._0_4_ = fVar34 * (float)uStack_90;
        uStack_90._4_4_ = fVar34 * uStack_90._4_4_;
        local_a8._4_4_ = (float)local_a8._4_4_ * fVar34;
        local_a8._0_4_ = (float)local_a8._0_4_ * fVar34;
        fStack_a0 = fStack_a0 * fVar34;
        fStack_9c = fStack_9c * fVar34;
        lVar8 = find_optimal_solution(param_1,param_2,param_3);
        if (lVar8 == 0) goto LAB_00104eb0;
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_4 + 0x1c));
    }
    if (*(long *)(param_2 + 0x30) != 0) goto LAB_00104d6a;
    if (*(int *)(param_4 + 0x14) != 0) {
      uVar18 = *(uint *)param_2;
      uVar10 = (ulong)uVar18;
      __memcpy_chk(local_68,*(undefined8 *)(param_3 + 0x18),uVar10,0x10);
      iVar4 = *(int *)(param_2 + 0x10);
      uVar19 = iVar4 - 1;
      if (uVar18 == 0) {
        uVar24 = 0;
        uVar26 = 0x100;
      }
      else {
        uVar24 = 0;
        uVar26 = 0x100;
        pbVar17 = local_68;
        do {
          uVar11 = (uint)*pbVar17;
          if (*pbVar17 < uVar26) {
            uVar26 = uVar11;
          }
          if (uVar24 < uVar11) {
            uVar24 = uVar11;
          }
          pbVar17 = pbVar17 + 1;
        } while (local_68 + uVar10 != pbVar17);
        uVar9 = 0;
        do {
          bVar14 = local_68[uVar9];
          if (uVar26 == bVar14) {
            bVar14 = bVar14 + (bVar14 < uVar19);
          }
          local_58[uVar9] = bVar14;
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
      _local_a8 = (undefined1  [16])0x0;
      _local_98 = (undefined1  [16])0x0;
      if (param_2[0x4c] == (color_cell_compressor_params)0x0) {
        compute_least_squares_endpoints_rgb
                  (uVar18,local_58,*(bc7enc_vec4F **)(param_2 + 0x20),(bc7enc_vec4F *)local_a8,
                   (bc7enc_vec4F *)local_98,*(color_quad_u8 **)(param_2 + 8));
      }
      else {
        compute_least_squares_endpoints_rgba
                  (uVar18,local_58,*(bc7enc_vec4F **)(param_2 + 0x20),(bc7enc_vec4F *)local_a8,
                   (bc7enc_vec4F *)local_98,*(color_quad_u8 **)(param_2 + 8));
      }
      fVar34 = _LC24;
      local_108 = (bc7enc_vec4F *)local_98;
      local_98._0_4_ = _LC24 * (float)local_98._0_4_;
      local_98._4_4_ = _LC24 * (float)local_98._4_4_;
      uStack_90._0_4_ = _LC24 * (float)uStack_90;
      uStack_90._4_4_ = _LC24 * uStack_90._4_4_;
      local_a8._4_4_ = (float)local_a8._4_4_ * _LC24;
      local_a8._0_4_ = (float)local_a8._0_4_ * _LC24;
      fStack_a0 = fStack_a0 * _LC24;
      fStack_9c = fStack_9c * _LC24;
      lVar8 = find_optimal_solution(param_1,param_2,param_3);
      if (lVar8 != 0) {
        uVar18 = *(uint *)param_2;
        uVar10 = 0;
        if (uVar18 != 0) {
          do {
            bVar14 = local_68[uVar10];
            if (bVar14 != 0) {
              bVar14 = (bVar14 - 1) + (uVar24 != bVar14);
            }
            local_58[uVar10] = bVar14;
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar18);
        }
        if (param_2[0x4c] == (color_cell_compressor_params)0x0) {
          compute_least_squares_endpoints_rgb
                    (uVar18,local_58,*(bc7enc_vec4F **)(param_2 + 0x20),(bc7enc_vec4F *)local_a8,
                     local_108,*(color_quad_u8 **)(param_2 + 8));
        }
        else {
          compute_least_squares_endpoints_rgba
                    (uVar18,local_58,*(bc7enc_vec4F **)(param_2 + 0x20),(bc7enc_vec4F *)local_a8,
                     local_108,*(color_quad_u8 **)(param_2 + 8));
        }
        local_98._0_4_ = fVar34 * (float)local_98._0_4_;
        local_98._4_4_ = fVar34 * (float)local_98._4_4_;
        uStack_90._0_4_ = fVar34 * (float)uStack_90;
        uStack_90._4_4_ = fVar34 * uStack_90._4_4_;
        local_a8._4_4_ = (float)local_a8._4_4_ * fVar34;
        local_a8._0_4_ = (float)local_a8._0_4_ * fVar34;
        fStack_a0 = fStack_a0 * fVar34;
        fStack_9c = fStack_9c * fVar34;
        lVar8 = find_optimal_solution(param_1,param_2,param_3);
        if (lVar8 != 0) {
          uVar18 = *(uint *)param_2;
          uVar10 = 0;
          if (uVar18 != 0) {
            do {
              bVar14 = local_68[uVar10];
              uVar11 = (uint)bVar14;
              if ((uVar11 == uVar26) && (uVar26 < *(int *)(param_2 + 0x10) - 1U)) {
                bVar3 = bVar14 + 1;
              }
              else {
                bVar3 = (bVar14 - 1) + (uVar11 == 0);
                if (uVar11 != uVar24) {
                  bVar3 = bVar14;
                }
              }
              local_58[uVar10] = bVar3;
              uVar10 = uVar10 + 1;
            } while (uVar18 != uVar10);
          }
          if (param_2[0x4c] == (color_cell_compressor_params)0x0) {
            compute_least_squares_endpoints_rgb
                      (uVar18,local_58,*(bc7enc_vec4F **)(param_2 + 0x20),(bc7enc_vec4F *)local_a8,
                       local_108,*(color_quad_u8 **)(param_2 + 8));
          }
          else {
            compute_least_squares_endpoints_rgba
                      (uVar18,local_58,*(bc7enc_vec4F **)(param_2 + 0x20),(bc7enc_vec4F *)local_a8,
                       local_108,*(color_quad_u8 **)(param_2 + 8));
          }
          local_98._0_4_ = fVar34 * (float)local_98._0_4_;
          local_98._4_4_ = fVar34 * (float)local_98._4_4_;
          uStack_90._0_4_ = fVar34 * (float)uStack_90;
          uStack_90._4_4_ = fVar34 * uStack_90._4_4_;
          local_a8._4_4_ = (float)local_a8._4_4_ * fVar34;
          local_a8._0_4_ = (float)local_a8._0_4_ * fVar34;
          fStack_a0 = fStack_a0 * fVar34;
          fStack_9c = fStack_9c * fVar34;
          lVar8 = find_optimal_solution(param_1,param_2,param_3);
          if (lVar8 != 0) {
            uVar18 = *(uint *)(param_4 + 0x14);
            if ((1 < uVar18) && ((ulong)((uint)(*(int *)param_2 * 0x38) >> 4) < *(ulong *)param_3))
            {
              if (uVar18 < 3) {
                uVar18 = 3;
              }
              iVar12 = uVar18 - 2;
              iVar15 = -iVar12;
              if (-2 < iVar12) {
                uVar18 = _LC28;
                fVar45 = _LC8;
                do {
                  fVar52 = _LC26;
                  for (uVar26 = iVar4 - 2; (int)uVar26 <= (int)(uVar19 + iVar12);
                      uVar26 = uVar26 + 1) {
                    if ((uVar19 != uVar26) || (iVar15 != 0)) {
                      uVar24 = *(uint *)param_2;
                      if (uVar24 != 0) {
                        uVar10 = 0;
                        fVar28 = (float)(int)uVar19;
                        do {
                          fVar39 = (((float)local_68[uVar10] - (float)iVar15) * fVar28) /
                                   ((float)(int)uVar26 - (float)iVar15) + fVar45;
                          if ((float)((uint)fVar39 & uVar18) < fVar52) {
                            fVar39 = (float)((uint)((float)(int)fVar39 -
                                                   (float)(-(uint)(fVar39 < (float)(int)fVar39) &
                                                          (uint)local_11c)) | ~uVar18 & (uint)fVar39
                                            );
                          }
                          bVar14 = 0;
                          if (0.0 <= fVar39) {
                            if (fVar39 <= fVar28) {
                              bVar14 = (byte)(int)fVar39;
                            }
                            else {
                              bVar14 = (byte)(int)fVar28;
                            }
                          }
                          local_58[uVar10] = bVar14;
                          uVar10 = uVar10 + 1;
                        } while (uVar24 != uVar10);
                      }
                      _local_a8 = (undefined1  [16])0x0;
                      _local_98 = (undefined1  [16])0x0;
                      if (param_2[0x4c] == (color_cell_compressor_params)0x0) {
                        compute_least_squares_endpoints_rgb
                                  (uVar24,local_58,*(bc7enc_vec4F **)(param_2 + 0x20),
                                   (bc7enc_vec4F *)local_a8,local_108,
                                   *(color_quad_u8 **)(param_2 + 8));
                      }
                      else {
                        compute_least_squares_endpoints_rgba
                                  (uVar24,local_58,*(bc7enc_vec4F **)(param_2 + 0x20),
                                   (bc7enc_vec4F *)local_a8,local_108,
                                   *(color_quad_u8 **)(param_2 + 8));
                      }
                      local_98._0_4_ = fVar34 * (float)local_98._0_4_;
                      local_98._4_4_ = fVar34 * (float)local_98._4_4_;
                      uStack_90._0_4_ = fVar34 * (float)uStack_90;
                      uStack_90._4_4_ = fVar34 * uStack_90._4_4_;
                      local_a8._4_4_ = (float)local_a8._4_4_ * fVar34;
                      local_a8._0_4_ = (float)local_a8._0_4_ * fVar34;
                      fStack_a0 = fStack_a0 * fVar34;
                      fStack_9c = fStack_9c * fVar34;
                      lVar8 = find_optimal_solution(param_1,param_2,param_3);
                      uVar18 = _LC28;
                      fVar45 = _LC8;
                      fVar52 = _LC26;
                      if (lVar8 == 0) goto LAB_00104eb0;
                    }
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 != 2);
              }
            }
            if (*(long *)(param_2 + 0x30) != 0) goto LAB_00104d6a;
            goto LAB_0010519c;
          }
        }
      }
      goto LAB_00104eb0;
    }
LAB_0010519c:
    if (param_1 == 1) {
      _local_98 = *(undefined1 (*) [16])param_3;
      puVar25 = *(uchar **)(param_3 + 0x20);
      local_88 = *(undefined8 *)(param_3 + 0x10);
      uStack_80 = *(undefined8 *)(param_3 + 0x18);
      local_78 = *(undefined8 *)(param_3 + 0x20);
      uStack_70 = *(undefined8 *)(param_3 + 0x28);
      uVar9 = pack_mode1_to_one_color
                        (param_2,(color_cell_compressor_results *)local_98,
                         (int)(_LC4 * local_cc + _LC8),(int)(local_d4 * _LC4 + _LC8),
                         (int)(fVar31 * _LC4 + _LC8),puVar25);
      uVar10 = *(ulong *)param_3;
      if (uVar9 < uVar10) {
        *(undefined1 (*) [8])param_3 = local_98;
        *(undefined8 *)(param_3 + 8) = uStack_90;
        *(undefined8 *)(param_3 + 0x20) = local_78;
        *(undefined8 *)(param_3 + 0x28) = uStack_70;
        *(undefined8 *)(param_3 + 0x10) = local_88;
        *(undefined8 *)(param_3 + 0x18) = uStack_80;
        uVar10 = uVar9;
LAB_001054e6:
        memcpy(*(void **)(param_3 + 0x18),puVar25,(ulong)*(uint *)param_2);
        *(ulong *)param_3 = uVar10;
      }
    }
    else {
      iVar4 = *(int *)(param_2 + 0x38);
      if (iVar4 == 8) {
        if (*(int *)(param_2 + 0x10) == 8) {
          if (param_2[0x4c] != (color_cell_compressor_params)0x0) goto LAB_00104d6a;
          _local_98 = *(undefined1 (*) [16])param_3;
          puVar25 = *(uchar **)(param_3 + 0x20);
          local_88 = *(undefined8 *)(param_3 + 0x10);
          uStack_80 = *(undefined8 *)(param_3 + 0x18);
          local_78 = *(undefined8 *)(param_3 + 0x20);
          uStack_70 = *(undefined8 *)(param_3 + 0x28);
          uVar9 = pack_astc_4bit_3bit_to_one_color
                            (param_2,(color_cell_compressor_results *)local_98,
                             (int)(_LC4 * local_cc + _LC8),(int)(local_d4 * _LC4 + _LC8),
                             (int)(fVar31 * _LC4 + _LC8),puVar25);
          uVar10 = *(ulong *)param_3;
          if (uVar9 < uVar10) goto LAB_0010526b;
        }
        else if ((*(int *)(param_2 + 0x10) == 4) &&
                (param_2[0x4c] != (color_cell_compressor_params)0x0)) {
          _local_98 = *(undefined1 (*) [16])param_3;
          local_88 = *(undefined8 *)(param_3 + 0x10);
          uStack_80 = *(undefined8 *)(param_3 + 0x18);
          local_78 = *(undefined8 *)(param_3 + 0x20);
          uStack_70 = *(undefined8 *)(param_3 + 0x28);
          puVar25 = *(uchar **)(param_3 + 0x20);
          uVar9 = pack_astc_4bit_2bit_to_one_color_rgba
                            (param_2,(color_cell_compressor_results *)local_98,
                             (int)(_LC4 * local_cc + _LC8),(int)(local_d4 * _LC4 + _LC8),
                             (int)(fVar31 * _LC4 + _LC8),(int)(local_d0 * _LC4 + _LC8),puVar25);
          uVar10 = *(ulong *)param_3;
          if (uVar9 < uVar10) {
            pcVar21 = (color_cell_compressor_results *)local_98;
            pcVar22 = param_3;
            for (lVar8 = 0xc; uVar10 = uVar9, lVar8 != 0; lVar8 = lVar8 + -1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar21;
              pcVar21 = pcVar21 + (ulong)bVar27 * -8 + 4;
              pcVar22 = pcVar22 + (ulong)bVar27 * -8 + 4;
            }
            goto LAB_001054e6;
          }
        }
        else {
LAB_00104d6a:
          uVar10 = *(ulong *)param_3;
        }
      }
      else if (iVar4 == 7) {
        if ((*(int *)(param_2 + 0x10) != 4) || (param_2[0x4c] != (color_cell_compressor_params)0x0))
        goto LAB_00104d6a;
        _local_98 = *(undefined1 (*) [16])param_3;
        puVar25 = *(uchar **)(param_3 + 0x20);
        local_88 = *(undefined8 *)(param_3 + 0x10);
        uStack_80 = *(undefined8 *)(param_3 + 0x18);
        local_78 = *(undefined8 *)(param_3 + 0x20);
        uStack_70 = *(undefined8 *)(param_3 + 0x28);
        uVar9 = pack_astc_range7_2bit_to_one_color
                          (param_2,(color_cell_compressor_results *)local_98,
                           (int)(_LC4 * local_cc + _LC8),(int)(local_d4 * _LC4 + _LC8),
                           (int)(fVar31 * _LC4 + _LC8),puVar25);
        uVar10 = *(ulong *)param_3;
        if (uVar9 < uVar10) goto LAB_0010526b;
      }
      else if (iVar4 == 0xd) {
        if ((*(int *)(param_2 + 0x10) != 4) || (param_2[0x4c] != (color_cell_compressor_params)0x0))
        goto LAB_00104d6a;
        _local_98 = *(undefined1 (*) [16])param_3;
        puVar25 = *(uchar **)(param_3 + 0x20);
        local_88 = *(undefined8 *)(param_3 + 0x10);
        uStack_80 = *(undefined8 *)(param_3 + 0x18);
        local_78 = *(undefined8 *)(param_3 + 0x20);
        uStack_70 = *(undefined8 *)(param_3 + 0x28);
        uVar9 = pack_astc_range13_2bit_to_one_color
                          (param_2,(color_cell_compressor_results *)local_98,
                           (int)(_LC4 * local_cc + _LC8),(int)(local_d4 * _LC4 + _LC8),
                           (int)(fVar31 * _LC4 + _LC8),puVar25);
        uVar10 = *(ulong *)param_3;
        if (uVar9 < uVar10) {
LAB_0010526b:
          uVar10 = uVar9;
          puVar20 = (undefined4 *)local_98;
          pcVar21 = param_3;
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *(undefined4 *)pcVar21 = *puVar20;
            puVar20 = puVar20 + (ulong)bVar27 * -2 + 1;
            pcVar21 = pcVar21 + (ulong)bVar27 * -8 + 4;
          }
          memcpy(*(void **)(param_3 + 0x18),puVar25,(ulong)*(uint *)param_2);
          *(ulong *)param_3 = uVar10;
        }
      }
      else {
        if (((iVar4 != 0xb) || (*(int *)(param_2 + 0x10) != 0x20)) ||
           (param_2[0x4c] != (color_cell_compressor_params)0x0)) goto LAB_00104d6a;
        _local_98 = *(undefined1 (*) [16])param_3;
        puVar25 = *(uchar **)(param_3 + 0x20);
        local_88 = *(undefined8 *)(param_3 + 0x10);
        uStack_80 = *(undefined8 *)(param_3 + 0x18);
        local_78 = *(undefined8 *)(param_3 + 0x20);
        uStack_70 = *(undefined8 *)(param_3 + 0x28);
        uVar9 = pack_astc_range11_5bit_to_one_color
                          (param_2,(color_cell_compressor_results *)local_98,
                           (int)(_LC4 * local_cc + _LC8),(int)(local_d4 * _LC4 + _LC8),
                           (int)(fVar31 * _LC4 + _LC8),puVar25);
        uVar10 = *(ulong *)param_3;
        if (uVar9 < uVar10) goto LAB_0010526b;
      }
    }
  }
LAB_00104d6d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
LAB_00105e2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::color_cell_compression_est_astc(unsigned int, unsigned int, unsigned int const*, unsigned
   int, basist::color_quad_u8 const*, unsigned long, unsigned int const*) */

ulong basisu::color_cell_compression_est_astc
                (uint param_1,uint param_2,uint *param_3,uint param_4,color_quad_u8 *param_5,
                ulong param_6,uint *param_7)

{
  color_quad_u8 *pcVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  int iVar22;
  int iVar23;
  long in_FS_OFFSET;
  int local_20c;
  undefined1 local_1f8;
  uint local_1f4;
  int local_1ec;
  int local_1e0;
  uint local_1dc;
  int local_1c8 [32];
  byte local_148 [128];
  int local_c8 [34];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 4) {
    if (param_4 == 0) {
      local_1e0 = -0xff;
      uVar4 = 0;
      uVar18 = 0;
      local_1dc = 0xff;
      uVar19 = 0;
      local_148[3] = 0xff;
      uVar20 = 0;
      local_1f4 = 0;
      local_148[1] = 0xff;
      uVar21 = 0;
      local_148[0] = 0xff;
      local_1f8 = 0;
      iVar7 = -0xff;
      uVar11 = 0xff;
      local_1ec = -0xff;
      uVar14 = 0xff;
      uVar16 = 0xff;
      local_20c = -0xff;
    }
    else {
      uVar4 = 0;
      local_1f4 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar11 = 0xff;
      uVar14 = 0xff;
      uVar16 = 0xff;
      local_1dc = 0xff;
      pcVar1 = param_5;
      do {
        uVar6 = (uint)(byte)*pcVar1;
        if ((byte)*pcVar1 < uVar16) {
          uVar16 = uVar6;
        }
        uVar12 = (uint)(byte)pcVar1[1];
        if ((byte)pcVar1[1] < uVar14) {
          uVar14 = uVar12;
        }
        uVar5 = (uint)(byte)pcVar1[2];
        if ((byte)pcVar1[2] < local_1dc) {
          local_1dc = uVar5;
        }
        uVar9 = (uint)(byte)pcVar1[3];
        if ((byte)pcVar1[3] < uVar11) {
          uVar11 = uVar9;
        }
        if (uVar19 < uVar6) {
          uVar19 = uVar6;
        }
        if (uVar18 < uVar12) {
          uVar18 = uVar12;
        }
        if (local_1f4 < uVar5) {
          local_1f4 = uVar5;
        }
        if (uVar4 < uVar9) {
          uVar4 = uVar9;
        }
        pcVar1 = pcVar1 + 4;
      } while (pcVar1 != param_5 + (ulong)param_4 * 4);
      local_1f8 = (undefined1)uVar4;
      uVar21 = (undefined1)uVar18;
      local_20c = local_1f4 - local_1dc;
      iVar7 = uVar18 - uVar14;
      uVar20 = (undefined1)uVar19;
      local_148[0] = (byte)uVar16;
      local_148[1] = (byte)uVar14;
      local_1ec = uVar4 - uVar11;
      local_148[3] = (byte)uVar11;
      local_1e0 = uVar19 - uVar16;
    }
  }
  else if (param_4 == 0) {
    local_1e0 = -0xff;
    uVar18 = 0;
    uVar19 = 0;
    local_1dc = 0xff;
    local_148[3] = 0xff;
    uVar20 = 0;
    uVar21 = 0;
    local_1f4 = 0;
    local_148[1] = 0xff;
    local_148[0] = 0xff;
    iVar7 = -0xff;
    local_1f8 = 0xff;
    uVar4 = 0xff;
    uVar11 = 0xff;
    local_1ec = 0;
    uVar14 = 0xff;
    uVar16 = 0xff;
    local_20c = -0xff;
  }
  else {
    uVar18 = 0;
    uVar19 = 0;
    local_1dc = 0xff;
    uVar14 = 0xff;
    uVar16 = 0xff;
    local_1f4 = 0;
    pcVar1 = param_5;
    do {
      uVar11 = (uint)(byte)*pcVar1;
      if ((byte)*pcVar1 < uVar16) {
        uVar16 = uVar11;
      }
      uVar4 = (uint)(byte)pcVar1[1];
      if ((byte)pcVar1[1] < uVar14) {
        uVar14 = uVar4;
      }
      uVar6 = (uint)(byte)pcVar1[2];
      if ((byte)pcVar1[2] < local_1dc) {
        local_1dc = uVar6;
      }
      if (uVar19 < uVar11) {
        uVar19 = uVar11;
      }
      if (uVar18 < uVar4) {
        uVar18 = uVar4;
      }
      if (local_1f4 < uVar6) {
        local_1f4 = uVar6;
      }
      pcVar1 = pcVar1 + 4;
    } while (pcVar1 != param_5 + (ulong)param_4 * 4);
    local_20c = local_1f4 - local_1dc;
    local_1e0 = uVar19 - uVar16;
    iVar7 = uVar18 - uVar14;
    uVar21 = (undefined1)uVar18;
    uVar20 = (undefined1)uVar19;
    local_148[0] = (byte)uVar16;
    local_1f8 = 0xff;
    local_148[1] = (byte)uVar14;
    uVar4 = 0xff;
    uVar11 = 0xff;
    local_1ec = 0;
    local_148[3] = 0xff;
  }
  local_148[2] = (undefined1)local_1dc;
  uVar6 = param_1 - 1;
  uVar13 = (ulong)uVar6;
  *(undefined1 *)((long)local_c8 + uVar13 * 4 + -0x7f) = uVar21;
  *(undefined1 *)(local_c8 + (uVar13 - 0x20)) = uVar20;
  *(undefined1 *)((long)local_c8 + uVar13 * 4 + -0x7e) = (undefined1)local_1f4;
  *(undefined1 *)((long)local_c8 + uVar13 * 4 + -0x7d) = local_1f8;
  if (1 < uVar6) {
    pbVar2 = local_148 + 4;
    do {
      param_3 = param_3 + 1;
      uVar12 = *param_3;
      iVar8 = 0x40 - uVar12;
      *pbVar2 = (byte)((uVar16 * iVar8 + uVar19 * uVar12) * 0x101 + 0x20 >> 0xe);
      pbVar2[1] = (byte)((uVar14 * iVar8 + uVar18 * uVar12) * 0x101 + 0x20 >> 0xe);
      pbVar2[2] = (byte)((local_1dc * iVar8 + local_1f4 * uVar12) * 0x101 + 0x20 >> 0xe);
      bVar10 = 0xff;
      if (param_2 == 4) {
        bVar10 = (byte)((iVar8 * uVar11 + uVar12 * uVar4) * 0x101 + 0x20 >> 0xe);
      }
      pbVar2[3] = bVar10;
      pbVar2 = pbVar2 + 4;
    } while (pbVar2 != (byte *)(local_c8 + ((ulong)(param_1 - 3) - 0x1e)));
  }
  lVar15 = 0;
  pbVar2 = local_148;
  if (param_2 == 4) {
    do {
      local_c8[lVar15] =
           (uint)*pbVar2 * local_1e0 + (uint)pbVar2[1] * iVar7 + (uint)pbVar2[2] * local_20c +
           (uint)pbVar2[3] * local_1ec;
      lVar15 = lVar15 + 1;
      pbVar2 = pbVar2 + 4;
    } while ((uint)lVar15 < param_1);
  }
  else {
    do {
      local_c8[lVar15] =
           (uint)*pbVar2 * local_1e0 + (uint)pbVar2[1] * iVar7 + (uint)pbVar2[2] * local_20c;
      lVar15 = lVar15 + 1;
      pbVar2 = pbVar2 + 4;
    } while ((uint)lVar15 < param_1);
  }
  if (uVar6 != 0) {
    lVar15 = 1;
    do {
      iVar8 = local_c8[lVar15];
      local_1c8[lVar15 + -1] = iVar8 + 1 + local_c8[0] >> 1;
      lVar15 = lVar15 + 1;
      local_c8[0] = iVar8;
    } while (lVar15 != (ulong)(param_1 - 2) + 2);
  }
  uVar16 = *param_7;
  uVar14 = param_7[1];
  uVar19 = param_7[2];
  if ((uVar16 | uVar14 | uVar19 | param_7[3]) == 1) {
    if (param_2 == 4) {
      if (param_4 != 0) {
        uVar13 = 0;
        pcVar1 = param_5 + (ulong)param_4 * 4;
        do {
          uVar3 = (ulong)(param_1 - 2);
          if (param_1 != 1) {
            do {
              if (local_1c8[uVar3] <=
                  (int)((uint)(byte)param_5[3] * local_1ec +
                       (uint)(byte)param_5[2] * local_20c +
                       (uint)(byte)param_5[1] * iVar7 + (uint)(byte)*param_5 * local_1e0)) {
                uVar3 = (ulong)((int)uVar3 + 1);
                goto LAB_00106662;
              }
              uVar3 = uVar3 - 1;
            } while ((int)uVar3 != -1);
          }
          uVar3 = 0;
LAB_00106662:
          iVar23 = (uint)*(byte *)(local_c8 + (uVar3 - 0x20)) - (uint)(byte)*param_5;
          iVar22 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7f) - (uint)(byte)param_5[1];
          iVar17 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7e) - (uint)(byte)param_5[2];
          iVar8 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7d) - (uint)(byte)param_5[3];
          uVar13 = uVar13 + (long)(iVar8 * iVar8 +
                                  iVar17 * iVar17 + iVar23 * iVar23 + iVar22 * iVar22);
        } while ((uVar13 <= param_6) && (param_5 = param_5 + 4, param_5 != pcVar1));
        goto LAB_0010625e;
      }
    }
    else if (param_4 != 0) {
      uVar13 = 0;
      pcVar1 = param_5 + (ulong)param_4 * 4;
      do {
        uVar3 = (ulong)(param_1 - 2);
        if (param_1 != 1) {
          do {
            if (local_1c8[uVar3] <=
                (int)((uint)(byte)*param_5 * local_1e0 + (uint)(byte)param_5[1] * iVar7 +
                     (uint)(byte)param_5[2] * local_20c)) {
              uVar3 = (ulong)((int)uVar3 + 1);
              goto LAB_0010644a;
            }
            uVar3 = uVar3 - 1;
          } while ((int)uVar3 != -1);
        }
        uVar3 = 0;
LAB_0010644a:
        iVar22 = (uint)*(byte *)(local_c8 + (uVar3 - 0x20)) - (uint)(byte)*param_5;
        iVar17 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7f) - (uint)(byte)param_5[1];
        iVar8 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7e) - (uint)(byte)param_5[2];
        uVar13 = uVar13 + (long)(iVar22 * iVar22 + iVar17 * iVar17 + iVar8 * iVar8);
      } while ((uVar13 <= param_6) && (param_5 = param_5 + 4, param_5 != pcVar1));
      goto LAB_0010625e;
    }
  }
  else if (param_2 == 4) {
    if (param_4 != 0) {
      uVar13 = 0;
      pcVar1 = param_5 + (ulong)param_4 * 4;
      do {
        if (param_1 != 1) {
          uVar3 = (ulong)(param_1 - 2);
          do {
            if (local_1c8[uVar3] <=
                (int)(local_1ec * (uint)(byte)param_5[3] +
                     local_20c * (uint)(byte)param_5[2] +
                     (uint)(byte)param_5[1] * iVar7 + (uint)(byte)*param_5 * local_1e0)) {
              uVar3 = (ulong)((int)uVar3 + 1);
              goto LAB_00106326;
            }
            uVar3 = uVar3 - 1;
          } while ((int)uVar3 != -1);
        }
        uVar3 = 0;
LAB_00106326:
        iVar23 = (uint)*(byte *)(local_c8 + (uVar3 - 0x20)) - (uint)(byte)*param_5;
        iVar22 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7f) - (uint)(byte)param_5[1];
        iVar8 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7d) - (uint)(byte)param_5[3];
        iVar17 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7e) - (uint)(byte)param_5[2];
        uVar13 = uVar13 + (iVar8 * iVar8 * param_7[3] +
                           iVar22 * iVar22 * uVar14 + iVar23 * iVar23 * uVar16 +
                          iVar17 * iVar17 * uVar19);
      } while ((uVar13 <= param_6) && (param_5 = param_5 + 4, param_5 != pcVar1));
      goto LAB_0010625e;
    }
  }
  else if (param_4 != 0) {
    uVar13 = 0;
    pcVar1 = param_5 + (ulong)param_4 * 4;
    do {
      uVar3 = (ulong)(param_1 - 2);
      if (param_1 != 1) {
        do {
          if (local_1c8[uVar3] <=
              (int)(local_20c * (uint)(byte)param_5[2] +
                   (uint)(byte)param_5[1] * iVar7 + (uint)(byte)*param_5 * local_1e0)) {
            uVar3 = (ulong)((int)uVar3 + 1);
            goto LAB_00106206;
          }
          uVar3 = uVar3 - 1;
        } while ((int)uVar3 != -1);
      }
      uVar3 = 0;
LAB_00106206:
      iVar22 = (uint)*(byte *)(local_c8 + (uVar3 - 0x20)) - (uint)(byte)*param_5;
      iVar17 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7f) - (uint)(byte)param_5[1];
      iVar8 = (uint)*(byte *)((long)local_c8 + uVar3 * 4 + -0x7e) - (uint)(byte)param_5[2];
      uVar13 = uVar13 + (iVar8 * iVar8 * uVar19 +
                        iVar17 * iVar17 * uVar14 + iVar22 * iVar22 * uVar16);
    } while ((uVar13 <= param_6) && (param_5 = param_5 + 4, param_5 != pcVar1));
    goto LAB_0010625e;
  }
  uVar13 = 0;
LAB_0010625e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* basisu::g_bc7_weights1x */

void basisu::_GLOBAL__sub_I_g_bc7_weights1x(void)

{
  return;
}


