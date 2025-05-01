
/* WARNING: Removing unreachable block (ram,0x00100180) */
/* WARNING: Removing unreachable block (ram,0x00100185) */
/* WARNING: Removing unreachable block (ram,0x0010018b) */
/* basisu::imagef::crop(unsigned int, unsigned int, unsigned int, basisu::vec<4u, float> const&)
   [clone .isra.0] */

void __thiscall
basisu::imagef::crop(imagef *this,uint param_1,uint param_2,uint param_3,vec *param_4)

{
  void *__ptr;
  undefined8 uVar1;
  vec *pvVar2;
  vec *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar7 = *(uint *)this;
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  if (((uVar7 != param_1) || (*(uint *)(this + 4) != param_2)) || (*(uint *)(this + 8) != param_3))
  {
    if ((param_1 == 0 || param_2 == 0) || (param_3 == 0)) {
      *(undefined8 *)this = 0;
      *(undefined4 *)(this + 8) = 0;
      if (*(int *)(this + 0x18) != 0) {
        *(undefined4 *)(this + 0x18) = 0;
      }
    }
    else {
      __ptr = *(void **)(this + 0x10);
      lVar8 = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      iVar5 = param_2 * param_3;
      if (iVar5 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x10,SUB41(iVar5,0),(uint)(iVar5 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x10,true);
        uVar7 = *(uint *)this;
        lVar8 = *(long *)(this + 0x10);
        *(int *)(this + 0x18) = iVar5;
      }
      iVar5 = 0;
      uVar6 = 0;
      do {
        uVar4 = 0;
LAB_001000e4:
        do {
          pvVar2 = (vec *)((ulong)(uVar4 + iVar5) * 0x10 + lVar8);
          if ((uVar4 < uVar7) && (uVar6 < *(uint *)(this + 4))) {
            pvVar3 = (vec *)((ulong)(*(int *)(this + 8) * uVar6 + uVar4) * 0x10 + (long)__ptr);
            if (pvVar3 != pvVar2) {
              uVar1 = *(undefined8 *)(pvVar3 + 8);
              *(undefined8 *)pvVar2 = *(undefined8 *)pvVar3;
              *(undefined8 *)(pvVar2 + 8) = uVar1;
            }
          }
          else if (param_4 != pvVar2) {
            uVar1 = *(undefined8 *)(param_4 + 8);
            uVar4 = uVar4 + 1;
            *(undefined8 *)pvVar2 = *(undefined8 *)param_4;
            *(undefined8 *)(pvVar2 + 8) = uVar1;
            if (param_1 <= uVar4) break;
            goto LAB_001000e4;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_1);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + param_3;
      } while (uVar6 < param_2);
      *(uint *)this = param_1;
      *(uint *)(this + 4) = param_2;
      *(uint *)(this + 8) = param_3;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}



/* basisu::image::crop(unsigned int, unsigned int, unsigned int, basisu::color_rgba const&, bool)
   [clone .isra.0] */

void __thiscall
basisu::image::crop(image *this,uint param_1,uint param_2,uint param_3,color_rgba *param_4,
                   bool param_5)

{
  undefined4 *puVar1;
  void *__ptr;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  if (((*(uint *)this != param_1) || (*(uint *)(this + 4) != param_2)) ||
     (*(uint *)(this + 8) != param_3)) {
    if ((param_1 == 0 || param_2 == 0) || (param_3 == 0)) {
      uVar5 = *(uint *)(this + 0x18);
      *(undefined8 *)this = 0;
      *(undefined4 *)(this + 8) = 0;
      if ((ulong)uVar5 != 0) {
        memmove(*(void **)(this + 0x10),(void *)((long)*(void **)(this + 0x10) + (ulong)uVar5 * 4),0
               );
        *(uint *)(this + 0x18) = *(int *)(this + 0x18) - uVar5;
      }
    }
    else {
      __ptr = *(void **)(this + 0x10);
      *(undefined8 *)(this + 0x18) = 0;
      iVar4 = param_2 * param_3;
      *(undefined8 *)(this + 0x10) = 0;
      if (iVar4 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x10,SUB41(iVar4,0),(uint)(iVar4 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        *(int *)(this + 0x18) = iVar4;
      }
      if (param_5) {
        puVar3 = *(undefined4 **)(this + 0x10);
        if (*(long *)this == 0) {
          puVar1 = puVar3 + *(uint *)(this + 0x18);
          for (; puVar1 != puVar3; puVar3 = puVar3 + 1) {
            *puVar3 = *(undefined4 *)param_4;
          }
        }
        else {
          iVar4 = 0;
          uVar5 = 0;
          while( true ) {
            uVar2 = 0;
            while( true ) {
              if ((uVar2 < *(uint *)this) && (uVar5 < *(uint *)(this + 4))) {
                puVar3[iVar4 + uVar2] =
                     *(undefined4 *)((long)__ptr + (ulong)(*(int *)(this + 8) * uVar5 + uVar2) * 4);
              }
              else {
                puVar3[iVar4 + uVar2] = *(undefined4 *)param_4;
              }
              if (param_1 <= uVar2 + 1) break;
              uVar2 = uVar2 + 1;
              puVar3 = *(undefined4 **)(this + 0x10);
            }
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + param_3;
            if (param_2 <= uVar5) break;
            puVar3 = *(undefined4 **)(this + 0x10);
          }
        }
      }
      *(uint *)this = param_1;
      *(uint *)(this + 4) = param_2;
      *(uint *)(this + 8) = param_3;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::compute_gaussian_kernel(float*, int, int, float, unsigned int) [clone .part.0] */

void basisu::compute_gaussian_kernel
               (float *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  int local_94;
  
  iVar1 = param_2 / 2;
  iVar9 = param_3 / 2;
  if (0 < param_2) {
    if (0 < param_3) {
      local_94 = 0;
      lVar6 = 0;
      dVar11 = 0.0;
      do {
        iVar5 = (int)lVar6;
        pfVar2 = param_1 + lVar6;
        iVar8 = (param_3 + -1) * param_2 + local_94;
        iVar7 = (param_2 + -1) - local_94;
        iVar4 = 0;
        do {
          if ((iVar9 <= iVar4) || (iVar5 <= iVar1)) {
            if (iVar5 < iVar1) {
              if (iVar4 <= iVar9) {
LAB_001004f0:
                fVar10 = expf((float)((uint)((float)((local_94 - iVar1) * (local_94 - iVar1) +
                                                    (iVar4 - iVar9) * (iVar4 - iVar9)) /
                                            (param_4 + param_4)) ^ __LC1));
                fVar12 = (float)((double)param_4 * __LC2);
                if (fVar12 < 0.0) {
                  fVar12 = sqrtf(fVar12);
                }
                else {
                  fVar12 = SQRT(fVar12);
                }
                fVar10 = (_LC4 / fVar12) * fVar10;
              }
              else {
                fVar10 = param_1[iVar8];
              }
            }
            else {
              if ((iVar4 <= iVar9) || (iVar5 <= iVar1)) goto LAB_001004f0;
              fVar10 = param_1[param_2 + local_94 * -2 + -1 + iVar8];
            }
          }
          else {
            fVar10 = param_1[iVar7];
          }
          iVar4 = iVar4 + 1;
          *pfVar2 = fVar10;
          iVar7 = iVar7 + param_2;
          pfVar2 = pfVar2 + param_2;
          dVar11 = dVar11 + (double)fVar10;
          iVar8 = iVar8 - param_2;
        } while (param_3 != iVar4);
        lVar6 = lVar6 + 1;
        if (param_2 == lVar6) goto LAB_001005d4;
        local_94 = (int)lVar6;
      } while( true );
    }
  }
  dVar11 = 0.0;
LAB_001005d4:
  if ((param_5 & 4) != 0) {
    dVar11 = (double)param_1[param_2 * iVar9 + iVar1];
  }
  if ((param_5 & 5) != 0) {
    dVar11 = _LC5 / dVar11;
    if (0 < param_2 * param_3) {
      pfVar2 = param_1;
      do {
        pfVar3 = pfVar2 + 1;
        *pfVar2 = (float)((double)*pfVar2 * dVar11);
        pfVar2 = pfVar3;
      } while (pfVar3 != param_1 + param_2 * param_3);
    }
    if ((param_5 & 4) != 0) {
      param_1[iVar9 * param_2 + iVar1] = 1.0;
    }
  }
  if ((param_5 & 2) != 0) {
    iVar9 = 0;
    iVar1 = 0;
    puts("{");
    if (0 < param_3) {
      do {
        __printf_chk(2,&_LC7);
        if (0 < param_2) {
          pfVar2 = param_1 + iVar9;
          do {
            pfVar3 = pfVar2 + 1;
            __printf_chk((double)*pfVar2,2,&_LC8);
            pfVar2 = pfVar3;
          } while (pfVar3 != param_1 + (long)param_2 + (long)iVar9);
        }
        iVar1 = iVar1 + 1;
        iVar9 = iVar9 + param_2;
        putchar(10);
      } while (param_3 != iVar1);
    }
    putchar(0x7d);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::gauss(int, int, float) */

float basisu::gauss(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = expf((float)((uint)((float)(param_1 * param_1 + param_2 * param_2) / (param_3 + param_3))
                      ^ __LC1));
  fVar2 = (float)((double)param_3 * __LC2);
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  return (_LC4 / fVar2) * fVar1;
}



/* basisu::compute_gaussian_kernel(float*, int, int, float, unsigned int) */

void basisu::compute_gaussian_kernel
               (float *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  if (param_2 != 0 || param_3 != 0) {
    compute_gaussian_kernel(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::gaussian_filter(basisu::imagef&, basisu::imagef const&, unsigned int, float, bool,
   unsigned int, unsigned int) */

void basisu::gaussian_filter
               (imagef *param_1,imagef *param_2,uint param_3,float param_4,bool param_5,uint param_6
               ,uint param_7)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float *__ptr;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long in_FS_OFFSET;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_b4;
  uint local_ac;
  float *local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  uVar13 = param_3 | 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = uVar13 * uVar13;
  local_68 = (float *)0x0;
  local_60 = 0;
  if (iVar14 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_68,SUB41(iVar14,0),(uint)(iVar14 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset(local_68 + (local_60 & 0xffffffff),0,(ulong)(uint)(iVar14 - (int)local_60) << 2);
  }
  __ptr = local_68;
  uVar15 = param_3 >> 1;
  compute_gaussian_kernel(local_68,uVar13,uVar13,param_4,1);
  uVar7 = *(uint *)param_2 / param_6;
  local_58 = __LC9;
  uStack_50 = _UNK_001025a8;
  uVar8 = *(uint *)(param_2 + 4) / param_7;
  imagef::crop(param_1,uVar7,uVar8,0xffffffff,(vec *)&local_58);
  if (0 < (int)uVar8) {
    uVar20 = 0;
    uVar22 = param_7 >> 1;
    do {
      if (0 < (int)uVar7) {
        iVar14 = *(int *)(param_2 + 8);
        iVar4 = *(int *)param_2;
        lVar5 = *(long *)(param_2 + 0x10);
        lVar6 = *(long *)(param_1 + 0x10);
        do {
          local_ac = (param_6 >> 1) - uVar15;
          uVar16 = *(int *)(param_1 + 8) * uVar20;
          uVar9 = uVar7 + uVar16;
          do {
            fVar24 = 0.0;
            fVar25 = 0.0;
            fVar26 = 0.0;
            fVar27 = 0.0;
            uVar21 = uVar15;
            iVar23 = uVar22 - uVar15;
            iVar19 = -uVar15;
            local_b4 = iVar14 * (uVar22 - uVar15);
            do {
              iVar18 = -uVar15;
              uVar17 = local_ac;
              do {
                if (param_5) {
                  if ((int)uVar17 < 0) {
                    uVar12 = (ulong)(uint)(iVar4 - (int)-uVar17 % iVar4);
                    if ((int)-uVar17 % iVar4 == 0) {
                      uVar12 = 0;
                    }
                  }
                  else {
                    uVar12 = (ulong)uVar17;
                    if (iVar4 <= (int)uVar17) {
                      uVar12 = (long)(int)uVar17 % (long)iVar4 & 0xffffffff;
                    }
                  }
                  iVar10 = *(int *)(param_2 + 4);
                  iVar11 = (int)uVar12;
                  if (iVar23 < 0) {
                    if (-iVar23 % iVar10 != 0) {
                      uVar12 = (ulong)(uint)(iVar11 + (iVar10 - -iVar23 % iVar10) * iVar14);
                    }
                  }
                  else if (iVar23 < iVar10) {
                    uVar12 = (ulong)(uint)(iVar11 + local_b4);
                  }
                  else {
                    uVar12 = (ulong)(uint)(iVar11 + (iVar23 % iVar10) * iVar14);
                  }
                }
                else {
                  uVar1 = uVar17;
                  if ((int)(iVar4 - 1U) <= (int)uVar17) {
                    uVar1 = iVar4 - 1U;
                  }
                  uVar12 = (ulong)uVar1;
                  if ((int)uVar17 < 0) {
                    uVar12 = 0;
                  }
                  if (-1 < iVar23) {
                    iVar10 = *(int *)(param_2 + 4) + -1;
                    if (iVar23 < *(int *)(param_2 + 4) + -1) {
                      iVar10 = iVar23;
                    }
                    uVar12 = (ulong)(uint)((int)uVar12 + iVar10 * iVar14);
                  }
                }
                uVar1 = iVar18 + uVar21;
                iVar18 = iVar18 + 1;
                uVar17 = uVar17 + 1;
                pfVar2 = (float *)(lVar5 + uVar12 * 0x10);
                fVar3 = __ptr[uVar1];
                fVar24 = fVar24 + *pfVar2 * fVar3;
                fVar25 = fVar25 + pfVar2[1] * fVar3;
                fVar26 = fVar26 + pfVar2[2] * fVar3;
                fVar27 = fVar27 + pfVar2[3] * fVar3;
              } while (iVar18 <= (int)uVar15);
              iVar23 = iVar23 + 1;
              local_b4 = local_b4 + iVar14;
              iVar19 = iVar19 + 1;
              uVar21 = uVar21 + uVar13;
            } while (iVar19 <= (int)uVar15);
            pfVar2 = (float *)(lVar6 + (ulong)uVar16 * 0x10);
            *pfVar2 = fVar24;
            pfVar2[1] = fVar25;
            pfVar2[2] = fVar26;
            pfVar2[3] = fVar27;
            uVar16 = uVar16 + 1;
            local_ac = local_ac + param_6;
          } while (uVar9 != uVar16);
          uVar20 = uVar20 + 1;
          uVar22 = uVar22 + param_7;
        } while (uVar8 != uVar20);
        break;
      }
      uVar20 = uVar20 + 1;
      uVar22 = uVar22 + param_7;
    } while (uVar8 != uVar20);
  }
  if (__ptr == (float *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::pow_image(basisu::imagef const&, basisu::imagef&, basisu::vec<4u, float> const&) */

void basisu::pow_image(imagef *param_1,imagef *param_2,vec *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = __LC9;
  uStack_50 = _UNK_001025a8;
  imagef::crop(param_2,*(uint *)param_1,*(uint *)(param_1 + 4),0xffffffff,(vec *)&local_58);
  iVar2 = *(int *)(param_2 + 4);
  if ((0 < iVar2) && (iVar3 = *(int *)param_2, iVar3 != 0)) {
    iVar7 = 0;
    do {
      iVar8 = 0;
      iVar4 = *(int *)(param_1 + 8);
      lVar5 = *(long *)(param_1 + 0x10);
      do {
        fVar12 = *(float *)param_3;
        pfVar1 = (float *)(lVar5 + (ulong)(uint)(iVar4 * iVar7 + iVar8) * 0x10);
        fVar9 = pfVar1[3];
        pfVar6 = (float *)((ulong)(uint)(*(int *)(param_2 + 8) * iVar7 + iVar8) * 0x10 +
                          *(long *)(param_2 + 0x10));
        if ((((fVar12 == __LC10) && (*(float *)(param_3 + 4) == __LC10)) &&
            (*(float *)(param_3 + 8) == __LC10)) && (*(float *)(param_3 + 0xc) == __LC10)) {
          fVar9 = fVar9 * fVar9;
          fVar10 = pfVar1[2] * pfVar1[2];
          fVar11 = pfVar1[1] * pfVar1[1];
          fVar12 = *pfVar1 * *pfVar1;
        }
        else {
          fVar9 = powf(fVar9,*(float *)(param_3 + 0xc));
          fVar10 = powf(pfVar1[2],*(float *)(param_3 + 8));
          fVar11 = powf(pfVar1[1],*(float *)(param_3 + 4));
          fVar12 = powf(*pfVar1,fVar12);
        }
        iVar8 = iVar8 + 1;
        *pfVar6 = fVar12;
        pfVar6[1] = fVar11;
        pfVar6[2] = fVar10;
        pfVar6[3] = fVar9;
      } while (iVar8 != iVar3);
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::mul_image(basisu::imagef const&, basisu::imagef&, basisu::vec<4u, float> const&) */

void basisu::mul_image(imagef *param_1,imagef *param_2,vec *param_3)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = __LC9;
  uStack_30 = _UNK_001025a8;
  imagef::crop(param_2,*(uint *)param_1,*(uint *)(param_1 + 4),0xffffffff,(vec *)&local_38);
  iVar5 = *(int *)(param_2 + 4);
  if (0 < iVar5) {
    iVar6 = *(int *)param_2;
    iVar17 = 0;
    if (iVar6 == 0) {
      do {
        if (iVar17 + 1 == iVar5) break;
        iVar17 = iVar17 + 2;
      } while (iVar17 != iVar5);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(param_2 + 0x10);
      do {
        uVar15 = *(int *)(param_1 + 8) * iVar17;
        uVar1 = uVar15 + iVar6;
        iVar16 = *(int *)(param_2 + 8) * iVar17 - uVar15;
        do {
          fVar9 = *(float *)(param_3 + 4);
          fVar10 = *(float *)(param_3 + 8);
          fVar11 = *(float *)(param_3 + 0xc);
          pfVar3 = (float *)(lVar7 + (ulong)uVar15 * 0x10);
          fVar12 = pfVar3[1];
          fVar13 = pfVar3[2];
          fVar14 = pfVar3[3];
          uVar2 = iVar16 + uVar15;
          uVar15 = uVar15 + 1;
          pfVar4 = (float *)(lVar8 + (ulong)uVar2 * 0x10);
          *pfVar4 = *pfVar3 * *(float *)param_3;
          pfVar4[1] = fVar12 * fVar9;
          pfVar4[2] = fVar13 * fVar10;
          pfVar4[3] = fVar14 * fVar11;
        } while (uVar1 != uVar15);
        iVar17 = iVar17 + 1;
      } while (iVar17 != iVar5);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::scale_image(basisu::imagef const&, basisu::imagef&, basisu::vec<4u, float> const&,
   basisu::vec<4u, float> const&) */

void basisu::scale_image(imagef *param_1,imagef *param_2,vec *param_3,vec *param_4)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = __LC9;
  uStack_40 = _UNK_001025a8;
  imagef::crop(param_2,*(uint *)param_1,*(uint *)(param_1 + 4),0xffffffff,(vec *)&local_48);
  iVar5 = *(int *)(param_2 + 4);
  if (0 < iVar5) {
    iVar6 = *(int *)param_2;
    iVar20 = 0;
    if (iVar6 == 0) {
      do {
        if (iVar20 + 1 == iVar5) break;
        iVar20 = iVar20 + 2;
      } while (iVar20 != iVar5);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(param_2 + 0x10);
      do {
        uVar18 = *(int *)(param_1 + 8) * iVar20;
        uVar1 = uVar18 + iVar6;
        iVar19 = *(int *)(param_2 + 8) * iVar20 - uVar18;
        do {
          fVar9 = *(float *)(param_3 + 4);
          fVar10 = *(float *)(param_3 + 8);
          fVar11 = *(float *)(param_3 + 0xc);
          fVar12 = *(float *)(param_4 + 4);
          fVar13 = *(float *)(param_4 + 8);
          fVar14 = *(float *)(param_4 + 0xc);
          pfVar3 = (float *)(lVar7 + (ulong)uVar18 * 0x10);
          fVar15 = pfVar3[1];
          fVar16 = pfVar3[2];
          fVar17 = pfVar3[3];
          uVar2 = iVar19 + uVar18;
          uVar18 = uVar18 + 1;
          pfVar4 = (float *)(lVar8 + (ulong)uVar2 * 0x10);
          *pfVar4 = *pfVar3 * *(float *)param_3 + *(float *)param_4;
          pfVar4[1] = fVar15 * fVar9 + fVar12;
          pfVar4[2] = fVar16 * fVar10 + fVar13;
          pfVar4[3] = fVar17 * fVar11 + fVar14;
        } while (uVar1 != uVar18);
        iVar20 = iVar20 + 1;
      } while (iVar20 != iVar5);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::add_weighted_image(basisu::imagef const&, basisu::vec<4u, float> const&, basisu::imagef
   const&, basisu::vec<4u, float> const&, basisu::vec<4u, float> const&, basisu::imagef&) */

void basisu::add_weighted_image
               (imagef *param_1,vec *param_2,imagef *param_3,vec *param_4,vec *param_5,
               imagef *param_6)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = __LC9;
  uStack_50 = _UNK_001025a8;
  imagef::crop(param_6,*(uint *)param_1,*(uint *)(param_1 + 4),0xffffffff,(vec *)&local_58);
  iVar5 = *(int *)(param_6 + 4);
  if (0 < iVar5) {
    iVar6 = *(int *)param_6;
    iVar29 = 0;
    if (iVar6 == 0) {
      do {
        if (iVar29 + 1 == iVar5) break;
        iVar29 = iVar29 + 2;
      } while (iVar29 != iVar5);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(param_6 + 0x10);
      lVar9 = *(long *)(param_3 + 0x10);
      do {
        uVar25 = *(int *)(param_1 + 8) * iVar29;
        uVar28 = iVar6 + uVar25;
        iVar26 = *(int *)(param_6 + 8) * iVar29 - uVar25;
        iVar27 = *(int *)(param_3 + 8) * iVar29 - uVar25;
        do {
          fVar10 = *(float *)(param_4 + 4);
          fVar11 = *(float *)(param_4 + 8);
          fVar12 = *(float *)(param_4 + 0xc);
          fVar13 = *(float *)(param_2 + 4);
          fVar14 = *(float *)(param_2 + 8);
          fVar15 = *(float *)(param_2 + 0xc);
          fVar16 = *(float *)(param_5 + 4);
          fVar17 = *(float *)(param_5 + 8);
          fVar18 = *(float *)(param_5 + 0xc);
          pfVar2 = (float *)(lVar9 + (ulong)(iVar27 + uVar25) * 0x10);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar3 = (float *)(lVar7 + (ulong)uVar25 * 0x10);
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          uVar1 = iVar26 + uVar25;
          uVar25 = uVar25 + 1;
          pfVar4 = (float *)(lVar8 + (ulong)uVar1 * 0x10);
          *pfVar4 = *pfVar2 * *(float *)param_4 + *pfVar3 * *(float *)param_2 + *(float *)param_5;
          pfVar4[1] = fVar19 * fVar10 + fVar22 * fVar13 + fVar16;
          pfVar4[2] = fVar20 * fVar11 + fVar23 * fVar14 + fVar17;
          pfVar4[3] = fVar21 * fVar12 + fVar24 * fVar15 + fVar18;
        } while (uVar28 != uVar25);
        iVar29 = iVar29 + 1;
      } while (iVar29 != iVar5);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::add_image(basisu::imagef const&, basisu::imagef const&, basisu::imagef&) */

void basisu::add_image(imagef *param_1,imagef *param_2,imagef *param_3)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = __LC9;
  uStack_40 = _UNK_001025a8;
  imagef::crop(param_3,*(uint *)param_1,*(uint *)(param_1 + 4),0xffffffff,(vec *)&local_48);
  iVar6 = *(int *)(param_3 + 4);
  if (0 < iVar6) {
    iVar7 = *(int *)param_3;
    iVar20 = 0;
    if (iVar7 == 0) {
      do {
        if (iVar20 + 1 == iVar6) break;
        iVar20 = iVar20 + 2;
      } while (iVar20 != iVar6);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(param_2 + 0x10);
      lVar10 = *(long *)(param_3 + 0x10);
      do {
        uVar17 = *(int *)(param_1 + 8) * iVar20;
        uVar1 = uVar17 + iVar7;
        iVar19 = *(int *)(param_2 + 8) * iVar20 - uVar17;
        iVar18 = *(int *)(param_3 + 8) * iVar20 - uVar17;
        do {
          pfVar3 = (float *)(lVar9 + (ulong)(iVar19 + uVar17) * 0x10);
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          pfVar4 = (float *)(lVar8 + (ulong)uVar17 * 0x10);
          fVar14 = pfVar4[1];
          fVar15 = pfVar4[2];
          fVar16 = pfVar4[3];
          uVar2 = iVar18 + uVar17;
          uVar17 = uVar17 + 1;
          pfVar5 = (float *)(lVar10 + (ulong)uVar2 * 0x10);
          *pfVar5 = *pfVar3 + *pfVar4;
          pfVar5[1] = fVar11 + fVar14;
          pfVar5[2] = fVar12 + fVar15;
          pfVar5[3] = fVar13 + fVar16;
        } while (uVar1 != uVar17);
        iVar20 = iVar20 + 1;
      } while (iVar20 != iVar6);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::adds_image(basisu::imagef const&, basisu::vec<4u, float> const&, basisu::imagef&) */

void basisu::adds_image(imagef *param_1,vec *param_2,imagef *param_3)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = __LC9;
  uStack_30 = _UNK_001025a8;
  imagef::crop(param_3,*(uint *)param_1,*(uint *)(param_1 + 4),0xffffffff,(vec *)&local_38);
  iVar5 = *(int *)(param_3 + 4);
  if (0 < iVar5) {
    iVar6 = *(int *)param_3;
    iVar17 = 0;
    if (iVar6 == 0) {
      do {
        if (iVar17 + 1 == iVar5) break;
        iVar17 = iVar17 + 2;
      } while (iVar17 != iVar5);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(param_3 + 0x10);
      do {
        uVar15 = *(int *)(param_1 + 8) * iVar17;
        uVar1 = uVar15 + iVar6;
        iVar16 = *(int *)(param_3 + 8) * iVar17 - uVar15;
        do {
          fVar9 = *(float *)(param_2 + 4);
          fVar10 = *(float *)(param_2 + 8);
          fVar11 = *(float *)(param_2 + 0xc);
          pfVar3 = (float *)(lVar7 + (ulong)uVar15 * 0x10);
          fVar12 = pfVar3[1];
          fVar13 = pfVar3[2];
          fVar14 = pfVar3[3];
          uVar2 = iVar16 + uVar15;
          uVar15 = uVar15 + 1;
          pfVar4 = (float *)(lVar8 + (ulong)uVar2 * 0x10);
          *pfVar4 = *pfVar3 + *(float *)param_2;
          pfVar4[1] = fVar12 + fVar9;
          pfVar4[2] = fVar13 + fVar10;
          pfVar4[3] = fVar14 + fVar11;
        } while (uVar1 != uVar15);
        iVar17 = iVar17 + 1;
      } while (iVar17 != iVar5);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::mul_image(basisu::imagef const&, basisu::imagef const&, basisu::imagef&, basisu::vec<4u,
   float> const&) */

void basisu::mul_image(imagef *param_1,imagef *param_2,imagef *param_3,vec *param_4)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = __LC9;
  uStack_50 = _UNK_001025a8;
  imagef::crop(param_3,*(uint *)param_1,*(uint *)(param_1 + 4),0xffffffff,(vec *)&local_58);
  iVar6 = *(int *)(param_3 + 4);
  if (0 < iVar6) {
    iVar7 = *(int *)param_3;
    iVar23 = 0;
    if (iVar7 == 0) {
      do {
        if (iVar23 + 1 == iVar6) break;
        iVar23 = iVar23 + 2;
      } while (iVar23 != iVar6);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(param_2 + 0x10);
      lVar10 = *(long *)(param_3 + 0x10);
      do {
        uVar20 = *(int *)(param_1 + 8) * iVar23;
        uVar1 = uVar20 + iVar7;
        iVar22 = *(int *)(param_2 + 8) * iVar23 - uVar20;
        iVar21 = *(int *)(param_3 + 8) * iVar23 - uVar20;
        do {
          fVar11 = *(float *)(param_4 + 4);
          fVar12 = *(float *)(param_4 + 8);
          fVar13 = *(float *)(param_4 + 0xc);
          pfVar3 = (float *)(lVar9 + (ulong)(iVar22 + uVar20) * 0x10);
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar4 = (float *)(lVar8 + (ulong)uVar20 * 0x10);
          fVar17 = pfVar4[1];
          fVar18 = pfVar4[2];
          fVar19 = pfVar4[3];
          uVar2 = iVar21 + uVar20;
          uVar20 = uVar20 + 1;
          pfVar5 = (float *)(lVar10 + (ulong)uVar2 * 0x10);
          *pfVar5 = *pfVar3 * *pfVar4 * *(float *)param_4;
          pfVar5[1] = fVar14 * fVar17 * fVar11;
          pfVar5[2] = fVar15 * fVar18 * fVar12;
          pfVar5[3] = fVar16 * fVar19 * fVar13;
        } while (uVar20 != uVar1);
        iVar23 = iVar23 + 1;
      } while (iVar23 != iVar6);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::div_image(basisu::imagef const&, basisu::imagef const&, basisu::imagef&, basisu::vec<4u,
   float> const&) */

void basisu::div_image(imagef *param_1,imagef *param_2,imagef *param_3,vec *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long in_FS_OFFSET;
  float fVar15;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = __LC9;
  uStack_50 = _UNK_001025a8;
  imagef::crop(param_3,*(uint *)param_1,*(uint *)(param_1 + 4),0xffffffff,(vec *)&local_58);
  iVar4 = *(int *)(param_3 + 4);
  if (0 < iVar4) {
    iVar5 = *(int *)param_3;
    iVar14 = 0;
    if (iVar5 == 0) {
      do {
        if (iVar14 + 1 == iVar4) break;
        iVar14 = iVar14 + 2;
      } while (iVar14 != iVar4);
    }
    else {
      lVar6 = *(long *)(param_3 + 0x10);
      lVar7 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(param_2 + 0x10);
      do {
        uVar10 = *(int *)(param_1 + 8) * iVar14;
        uVar13 = uVar10 + iVar5;
        iVar12 = *(int *)(param_2 + 8) * iVar14 - uVar10;
        iVar11 = *(int *)(param_3 + 8) * iVar14 - uVar10;
        do {
          lVar9 = 0;
          do {
            fVar3 = *(float *)((ulong)(iVar12 + uVar10) * 0x10 + lVar8 + lVar9);
            fVar15 = 0.0;
            if (fVar3 != 0.0) {
              fVar15 = (*(float *)(param_4 + lVar9) *
                       *(float *)((ulong)uVar10 * 0x10 + lVar7 + lVar9)) / fVar3;
            }
            *(float *)((vec *)&local_58 + lVar9) = fVar15;
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x10);
          uVar1 = iVar11 + uVar10;
          uVar10 = uVar10 + 1;
          puVar2 = (undefined8 *)(lVar6 + (ulong)uVar1 * 0x10);
          *puVar2 = local_58;
          puVar2[1] = uStack_50;
        } while (uVar13 != uVar10);
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar4);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::avg_image(basisu::imagef const&) */

basisu * __thiscall basisu::avg_image(basisu *this,imagef *param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  
  iVar3 = *(int *)(param_1 + 4);
  auVar9 = (undefined1  [16])0x0;
  iVar4 = *(int *)param_1;
  iVar8 = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  fVar11 = 0.0;
  if (iVar3 != 0) {
    if (iVar4 == 0) {
      do {
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar3);
      auVar9 = *(undefined1 (*) [16])this;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x10);
      auVar9 = (undefined1  [16])0x0;
      do {
        uVar6 = *(int *)(param_1 + 8) * iVar8;
        uVar1 = uVar6 + iVar4;
        auVar10 = auVar9;
        do {
          uVar7 = (ulong)uVar6;
          uVar6 = uVar6 + 1;
          pfVar2 = (float *)(lVar5 + uVar7 * 0x10);
          auVar9._0_4_ = auVar10._0_4_ + *pfVar2;
          auVar9._4_4_ = auVar10._4_4_ + pfVar2[1];
          auVar9._8_4_ = auVar10._8_4_ + pfVar2[2];
          auVar9._12_4_ = auVar10._12_4_ + pfVar2[3];
          *(undefined1 (*) [16])this = auVar9;
          auVar10 = auVar9;
        } while (uVar1 != uVar6);
        iVar8 = iVar8 + 1;
      } while (iVar3 != iVar8);
    }
    fVar11 = (float)(uint)(iVar3 * iVar4);
  }
  auVar10._4_4_ = fVar11;
  auVar10._0_4_ = fVar11;
  auVar10._8_4_ = fVar11;
  auVar10._12_4_ = fVar11;
  auVar9 = divps(auVar9,auVar10);
  *(undefined1 (*) [16])this = auVar9;
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::compute_ssim(basisu::imagef const&, basisu::imagef const&) */

basisu * __thiscall basisu::compute_ssim(basisu *this,imagef *param_1,imagef *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_258;
  undefined8 local_250;
  void *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  void *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  void *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = 0;
  local_250 = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = (void *)0x0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_58._0_8_ = __LC10;
  local_58._8_8_ = _UNK_001025b8;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  pow_image(param_1,(imagef *)&local_238,(vec *)local_58);
  local_58._0_8_ = __LC10;
  local_58._8_8_ = _UNK_001025b8;
  pow_image(param_2,(imagef *)&local_218,(vec *)local_58);
  local_58._0_8_ = __LC13;
  local_58._8_8_ = _UNK_001025c8;
  mul_image(param_1,param_2,(imagef *)&local_258,(vec *)local_58);
  gaussian_filter((imagef *)&local_1f8,param_1,0xb,_LC14,false,1,1);
  gaussian_filter((imagef *)&local_1d8,param_2,0xb,_LC14,false,1,1);
  local_58._0_8_ = __LC10;
  local_58._8_8_ = _UNK_001025b8;
  pow_image((imagef *)&local_1f8,(imagef *)&local_1b8,(vec *)local_58);
  local_58._0_8_ = __LC10;
  local_58._8_8_ = _UNK_001025b8;
  pow_image((imagef *)&local_1d8,(imagef *)&local_198,(vec *)local_58);
  local_58._8_8_ = _UNK_001025c8;
  local_58._0_8_ = __LC13;
  mul_image((imagef *)&local_1f8,(imagef *)&local_1d8,(imagef *)&local_178,(vec *)local_58);
  gaussian_filter((imagef *)&local_158,(imagef *)&local_238,0xb,_LC14,false,1,1);
  local_78 = __LC13;
  uStack_70 = _UNK_001025c8;
  local_58 = (undefined1  [16])0x0;
  local_68 = CONCAT44(_LC16,_LC16);
  uStack_60 = CONCAT44(_LC16,_LC16);
  add_weighted_image((imagef *)&local_158,(vec *)&local_78,(imagef *)&local_1b8,(vec *)&local_68,
                     (vec *)local_58,(imagef *)&local_158);
  gaussian_filter((imagef *)&local_138,(imagef *)&local_218,0xb,_LC14,false,1,1);
  local_68 = CONCAT44(_UNK_001025d4,_LC16);
  local_78 = __LC13;
  uStack_70 = _UNK_001025c8;
  local_58 = (undefined1  [16])0x0;
  uStack_60 = _UNK_001025d8;
  add_weighted_image((imagef *)&local_138,(vec *)&local_78,(imagef *)&local_198,(vec *)&local_68,
                     (vec *)local_58,(imagef *)&local_138);
  gaussian_filter((imagef *)&local_118,(imagef *)&local_258,0xb,_LC14,false,1,1);
  local_68 = CONCAT44(_UNK_001025d4,_LC16);
  local_58 = (undefined1  [16])0x0;
  local_78 = __LC13;
  uStack_70 = _UNK_001025c8;
  uStack_60 = _UNK_001025d8;
  add_weighted_image((imagef *)&local_118,(vec *)&local_78,(imagef *)&local_178,(vec *)&local_68,
                     (vec *)local_58,(imagef *)&local_118);
  local_58 = (undefined1  [16])0x0;
  local_68 = __LC10;
  uStack_60 = _UNK_001025b8;
  scale_image((imagef *)&local_178,(imagef *)&local_d8,(vec *)&local_68,(vec *)local_58);
  local_58._4_4_ = _LC18;
  local_58._0_4_ = _LC18;
  local_58._8_4_ = _LC18;
  local_58._12_4_ = _LC18;
  adds_image((imagef *)&local_d8,(vec *)local_58,(imagef *)&local_d8);
  local_58 = (undefined1  [16])0x0;
  local_68 = __LC10;
  uStack_60 = _UNK_001025b8;
  scale_image((imagef *)&local_118,(imagef *)&local_b8,(vec *)&local_68,(vec *)local_58);
  local_58._4_4_ = _LC20;
  local_58._0_4_ = _LC20;
  local_58._8_4_ = _LC20;
  local_58._12_4_ = _LC20;
  adds_image((imagef *)&local_b8,(vec *)local_58,(imagef *)&local_b8);
  local_58._0_8_ = __LC13;
  local_58._8_8_ = _UNK_001025c8;
  mul_image((imagef *)&local_d8,(imagef *)&local_b8,(imagef *)&local_98,(vec *)local_58);
  add_image((imagef *)&local_1b8,(imagef *)&local_198,(imagef *)&local_d8);
  local_58._0_8_ = CONCAT44(_UNK_001025e4,_LC18);
  local_58._8_8_ = _UNK_001025e8;
  adds_image((imagef *)&local_d8,(vec *)local_58,(imagef *)&local_d8);
  add_image((imagef *)&local_158,(imagef *)&local_138,(imagef *)&local_b8);
  local_58._0_8_ = CONCAT44(_UNK_001025f4,_LC20);
  local_58._8_8_ = _UNK_001025f8;
  adds_image((imagef *)&local_b8,(vec *)local_58,(imagef *)&local_b8);
  local_58._0_8_ = __LC13;
  local_58._8_8_ = _UNK_001025c8;
  mul_image((imagef *)&local_d8,(imagef *)&local_b8,(imagef *)&local_d8,(vec *)local_58);
  local_58._8_8_ = _UNK_001025c8;
  local_58._0_8_ = __LC13;
  div_image((imagef *)&local_98,(imagef *)&local_d8,(imagef *)&local_f8,(vec *)local_58);
  avg_image(this,(imagef *)&local_f8);
  if (local_88 != (void *)0x0) {
    free(local_88);
  }
  if (local_a8 != (void *)0x0) {
    free(local_a8);
  }
  if (local_c8 != (void *)0x0) {
    free(local_c8);
  }
  if (local_e8 != (void *)0x0) {
    free(local_e8);
  }
  if (local_108 != (void *)0x0) {
    free(local_108);
  }
  if (local_128 != (void *)0x0) {
    free(local_128);
  }
  if (local_148 != (void *)0x0) {
    free(local_148);
  }
  if (local_168 != (void *)0x0) {
    free(local_168);
  }
  if (local_188 != (void *)0x0) {
    free(local_188);
  }
  if (local_1a8 != (void *)0x0) {
    free(local_1a8);
  }
  if (local_1c8 != (void *)0x0) {
    free(local_1c8);
  }
  if (local_1e8 != (void *)0x0) {
    free(local_1e8);
  }
  if (local_208 != (void *)0x0) {
    free(local_208);
  }
  if (local_228 != (void *)0x0) {
    free(local_228);
  }
  if (local_248 != (void *)0x0) {
    free(local_248);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::compute_ssim(basisu::image const&, basisu::image const&, bool, bool) */

basisu * __thiscall
basisu::compute_ssim(basisu *this,image *param_1,image *param_2,bool param_3,bool param_4)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  undefined8 local_d8;
  int local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  ulong uVar8;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = *(undefined8 *)param_1;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_d0 = *(int *)(param_1 + 8);
  uVar13 = *(uint *)(param_1 + 0x18);
  if (uVar13 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_c8,SUB41(uVar13,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    if (local_c8 != (void *)0x0) {
      uVar13 = *(uint *)(param_1 + 0x18);
      if (*(void **)(param_1 + 0x10) == (void *)0x0) goto LAB_00101fb4;
      memcpy(local_c8,*(void **)(param_1 + 0x10),(ulong)uVar13 * 4);
    }
    uVar13 = *(uint *)(param_1 + 0x18);
  }
LAB_00101fb4:
  local_b8 = *(undefined8 *)param_2;
  local_b0 = *(int *)(param_2 + 8);
  local_c0 = CONCAT44(local_c0._4_4_,uVar13);
  local_a8 = (void *)0x0;
  uVar13 = *(uint *)(param_2 + 0x18);
  local_a0 = 0;
  if (uVar13 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_a8,SUB41(uVar13,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    if (local_a8 != (void *)0x0) {
      uVar13 = *(uint *)(param_2 + 0x18);
      if (*(void **)(param_2 + 0x10) == (void *)0x0) {
        goto LAB_00102033;
      }
      memcpy(local_a8,*(void **)(param_2 + 0x10),(ulong)uVar13 * 4);
    }
    uVar13 = *(uint *)(param_2 + 0x18);
  }
LAB_00102033:
  local_a0 = CONCAT44(local_a0._4_4_,uVar13);
  if ((uint)local_d8 == (uint)local_b8) {
    if (local_d8._4_4_ == local_b8._4_4_) goto LAB_001020b9;
  }
  basisu::debug_printf("compute_ssim: Cropping input images to equal dimensions\n");
  uVar13 = *(uint *)param_2;
  if (*(uint *)param_1 < *(uint *)param_2) {
    uVar13 = *(uint *)param_1;
  }
  uVar12 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_2 + 4) <= *(uint *)(param_1 + 4)) {
    uVar12 = *(uint *)(param_2 + 4);
  }
  image::crop((image *)&local_d8,uVar13,uVar12,0xffffffff,(color_rgba *)&g_black_color,true);
  image::crop((image *)&local_b8,uVar13,uVar12,0xffffffff,(color_rgba *)&g_black_color,true);
LAB_001020b9:
  if (((uint)local_d8 == 0) || (uVar13 = local_d8._4_4_, local_d8._4_4_ == 0)) {
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  }
  else {
    uVar12 = (uint)local_d8;
    if (param_3) {
      uVar14 = 0;
      do {
        uVar9 = 0;
        if (uVar12 != 0) {
          do {
            pbVar11 = (byte *)((long)local_c8 + (ulong)(local_d0 * uVar14 + uVar9) * 4);
            if (param_4) {
              bVar10 = (byte)((uint)pbVar11[2] * 0x1d2f +
                              (uint)*pbVar11 * 0x4c8b + 0x8000 + (uint)pbVar11[1] * 0x9646 >> 0x10);
              pbVar11[2] = bVar10;
              *(ushort *)pbVar11 = CONCAT11(bVar10,bVar10);
              pbVar11 = (byte *)((long)local_a8 + (ulong)(local_b0 * uVar14 + uVar9) * 4);
              bVar10 = (byte)((uint)*pbVar11 * 0x4c8b + 0x8000 + (uint)pbVar11[1] * 0x9646 +
                              (uint)pbVar11[2] * 0x1d2f >> 0x10);
            }
            else {
              bVar10 = (byte)((uint)pbVar11[2] * 0x1279 +
                              (uint)*pbVar11 * 0x3672 + 0x8000 + (uint)pbVar11[1] * 0xb715 >> 0x10);
              pbVar11[2] = bVar10;
              *(ushort *)pbVar11 = CONCAT11(bVar10,bVar10);
              pbVar11 = (byte *)((long)local_a8 + (ulong)(local_b0 * uVar14 + uVar9) * 4);
              bVar10 = (byte)((uint)*pbVar11 * 0x3672 + 0x8000 + (uint)pbVar11[1] * 0xb715 +
                              (uint)pbVar11[2] * 0x1279 >> 0x10);
            }
            pbVar11[2] = bVar10;
            uVar9 = uVar9 + 1;
            *(ushort *)pbVar11 = CONCAT11(bVar10,bVar10);
            uVar12 = (uint)local_d8;
          } while (uVar9 < (uint)local_d8);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_d8._4_4_);
    }
    local_98 = 0;
    local_90 = 0;
    local_58 = __LC9;
    uStack_50 = _UNK_001025a8;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    imagef::crop((imagef *)&local_98,uVar12,local_d8._4_4_,0xffffffff,(vec *)&local_58);
    uStack_50 = _UNK_001025a8;
    local_58 = __LC9;
    if (0 < (int)uVar13) {
      iVar15 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar14 = uVar12;
      do {
        iVar16 = (int)uVar8;
        if (uVar12 != 0) {
          do {
            iVar4 = (int)uVar8;
            pbVar11 = (byte *)((long)local_c8 + uVar8 * 4);
            bVar10 = pbVar11[1];
            bVar2 = pbVar11[2];
            bVar3 = pbVar11[3];
            uVar5 = iVar4 + 1;
            uVar8 = (ulong)uVar5;
            pfVar1 = (float *)((long)local_88 + (ulong)(uint)(iVar4 + iVar15) * 0x10);
            *pfVar1 = (float)*pbVar11 + 0.0;
            pfVar1[1] = (float)bVar10 + 0.0;
            pfVar1[2] = (float)bVar2 + 0.0;
            pfVar1[3] = (float)bVar3 + 0.0;
          } while (uVar5 != uVar14);
        }
        uVar9 = uVar9 + 1;
        uVar8 = (ulong)(uint)(iVar16 + local_d0);
        iVar15 = iVar15 + ((int)local_90 - local_d0);
        uVar14 = uVar14 + local_d0;
      } while (uVar13 != uVar9);
    }
    uVar12 = local_b8._4_4_;
    uVar13 = (uint)local_b8;
    imagef::crop((imagef *)&local_78,(uint)local_b8,local_b8._4_4_,0xffffffff,(vec *)&local_58);
    if (0 < (int)uVar12) {
      iVar15 = 0;
      uVar5 = 0;
      uVar9 = 0;
      uVar14 = uVar13;
      do {
        uVar6 = uVar5;
        if (uVar13 != 0) {
          do {
            pbVar11 = (byte *)((long)local_a8 + (ulong)uVar6 * 4);
            bVar10 = pbVar11[1];
            bVar2 = pbVar11[2];
            bVar3 = pbVar11[3];
            uVar7 = uVar6 + 1;
            pfVar1 = (float *)((long)local_68 + (ulong)(uVar6 + iVar15) * 0x10);
            *pfVar1 = (float)*pbVar11 + 0.0;
            pfVar1[1] = (float)bVar10 + 0.0;
            pfVar1[2] = (float)bVar2 + 0.0;
            pfVar1[3] = (float)bVar3 + 0.0;
            uVar6 = uVar7;
          } while (uVar7 != uVar14);
        }
        uVar9 = uVar9 + 1;
        uVar5 = uVar5 + local_b0;
        iVar15 = iVar15 + ((int)local_70 - local_b0);
        uVar14 = uVar14 + local_b0;
      } while (uVar12 != uVar9);
    }
    compute_ssim(this,(imagef *)&local_98,(imagef *)&local_78);
    if (local_68 != (void *)0x0) {
      free(local_68);
    }
    if (local_88 != (void *)0x0) {
      free(local_88);
    }
  }
  if (local_a8 != (void *)0x0) {
    free(local_a8);
  }
  if (local_c8 != (void *)0x0) {
    free(local_c8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* basisu::vector<basisu::vec<4u, float> >::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::vec<4u,float>>::object_mover(void *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  pvVar2 = (void *)((ulong)param_3 * 0x10 + (long)param_2);
  if (param_2 != pvVar2) {
    uVar4 = 0;
    lVar3 = 0;
    do {
      uVar1 = ((undefined8 *)((long)param_2 + lVar3))[1];
      uVar4 = uVar4 + 1;
      *(undefined8 *)((long)param_1 + lVar3) = *(undefined8 *)((long)param_2 + lVar3);
      ((undefined8 *)((long)param_1 + lVar3))[1] = uVar1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
  }
  return;
}



/* basisu::gauss(int, int, float) */

void basisu::_GLOBAL__sub_I_gauss(void)

{
  g_black_color = 0xff000000;
  return;
}


