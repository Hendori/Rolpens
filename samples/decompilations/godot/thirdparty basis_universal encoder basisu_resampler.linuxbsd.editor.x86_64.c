
/* basisu::Resampler::reflect(int, int, basisu::Resampler::Boundary_Op) */

int basisu::Resampler::reflect(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 < 0) {
    if (param_3 == 1) {
      iVar1 = -param_1;
      if (param_2 == iVar1 || SBORROW4(param_2,iVar1) != param_2 + param_1 < 0) goto LAB_00100068;
    }
    else {
      iVar1 = 0;
      if (param_3 == 0) {
        iVar1 = -param_1 % param_2;
        if (iVar1 != 0) {
          iVar1 = param_2 - iVar1;
        }
      }
    }
  }
  else {
    iVar1 = param_1;
    if (param_2 <= param_1) {
      if (param_3 == 1) {
        param_1 = (param_2 * 2 + -1) - param_1;
        if (param_1 < 0) {
          param_1 = 0;
        }
        return param_1;
      }
      if (param_3 != 0) {
LAB_00100068:
        return param_2 + -1;
      }
      iVar1 = param_1 % param_2;
    }
  }
  return iVar1;
}



/* basisu::Resampler::make_clist(int, int, basisu::Resampler::Boundary_Op, float (*)(float), float,
   float, float) */

ushort * basisu::Resampler::make_clist
                   (float param_1_00,float param_2_00,float param_3,int param_1,int param_2,
                   undefined4 param_6,code *param_7)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  float fVar4;
  undefined2 uVar5;
  ushort *__ptr;
  float *__ptr_00;
  void *__ptr_01;
  float *pfVar6;
  int iVar7;
  int iVar8;
  size_t __nmemb;
  uint uVar9;
  ushort *puVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_80;
  float local_7c;
  float local_74;
  void *local_70;
  void *local_68;
  
  __nmemb = (size_t)param_2;
  __ptr = (ushort *)calloc(__nmemb,0x10);
  if (__ptr == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  __ptr_00 = (float *)calloc(__nmemb,0xc);
  uVar9 = _LC6;
  fVar4 = _LC4;
  fVar2 = _LC3;
  if (__ptr_00 == (float *)0x0) {
    free(__ptr);
    return (ushort *)0x0;
  }
  fVar15 = _LC2 / param_2_00;
  fVar12 = (float)param_2 / (float)param_1;
  if (fVar12 < _LC2) {
    param_2_00 = (param_1_00 / fVar12) * param_2_00;
    if (0 < param_2) {
      iVar8 = 0;
      iVar7 = 0;
      pfVar6 = __ptr_00;
      do {
        fVar13 = (((float)iVar7 + fVar2) / fVar12 - fVar2) + param_3;
        fVar11 = fVar13 - param_2_00;
        if ((float)((uint)fVar11 & uVar9) < fVar4) {
          fVar11 = (float)((uint)((float)(int)fVar11 -
                                 (float)(-(uint)(fVar11 < (float)(int)fVar11) & (uint)_LC2)) |
                          ~uVar9 & (uint)fVar11);
        }
        fVar16 = param_2_00 + fVar13;
        if ((float)((uint)fVar16 & uVar9) < fVar4) {
          fVar16 = (float)((uint)((float)(int)fVar16 +
                                 (float)(-(uint)((float)(int)fVar16 < fVar16) & (uint)_LC2)) |
                          ~uVar9 & (uint)fVar16);
        }
        *pfVar6 = fVar13;
        iVar7 = iVar7 + 1;
        *(ulong *)(pfVar6 + 1) = CONCAT44((int)fVar16,(int)fVar11);
        iVar8 = iVar8 + 1 + ((int)fVar16 - (int)fVar11);
        pfVar6 = pfVar6 + 3;
      } while (param_2 != iVar7);
      if ((iVar8 != 0) && (__ptr_01 = calloc((long)iVar8,8), __ptr_01 != (void *)0x0)) {
        pfVar6 = __ptr_00;
        puVar10 = __ptr;
        local_68 = __ptr_01;
        do {
          fVar4 = pfVar6[2];
          fVar11 = pfVar6[1];
          fVar2 = *pfVar6;
          *puVar10 = 0;
          *(void **)(puVar10 + 4) = local_68;
          local_68 = (void *)((long)local_68 + (long)((int)fVar4 - (int)fVar11) * 8 + 8);
          if ((int)fVar4 < (int)fVar11) goto LAB_0010042a;
          fVar16 = 0.0;
          fVar13 = fVar11;
          do {
            fVar14 = (float)(int)fVar13;
            fVar13 = (float)((int)fVar13 + 1);
            fVar14 = (float)(*param_7)((fVar2 - fVar14) * fVar12 * fVar15);
            fVar16 = fVar16 + fVar14;
          } while ((int)fVar13 <= (int)fVar4);
          local_74 = -1e+20;
          uVar9 = 0xffffffff;
          fVar16 = _LC2 / fVar16;
          local_7c = 0.0;
          do {
            fVar13 = (float)(*param_7)((fVar2 - (float)(int)fVar11) * fVar12 * fVar15);
            if (fVar13 * fVar16 != 0.0) {
              uVar5 = reflect(fVar11,param_1,param_6);
              uVar3 = *puVar10;
              local_7c = local_7c + extraout_XMM0_Da_00;
              *puVar10 = uVar3 + 1;
              pfVar1 = (float *)(*(long *)(puVar10 + 4) + (ulong)uVar3 * 8);
              *(undefined2 *)(pfVar1 + 1) = uVar5;
              *pfVar1 = extraout_XMM0_Da_00;
              if (local_74 < extraout_XMM0_Da_00) {
                uVar9 = (uint)uVar3;
                local_74 = extraout_XMM0_Da_00;
              }
            }
            fVar11 = (float)((int)fVar11 + 1);
          } while ((int)fVar11 <= (int)fVar4);
          if ((uVar9 == 0xffffffff) || (*puVar10 == 0)) goto LAB_0010042a;
          if (local_7c != _LC2) {
            pfVar1 = (float *)(*(long *)(puVar10 + 4) + (long)(int)uVar9 * 8);
            *pfVar1 = (_LC2 - local_7c) + *pfVar1;
          }
          puVar10 = puVar10 + 8;
          pfVar6 = pfVar6 + 3;
        } while (puVar10 != __ptr + __nmemb * 8);
        goto LAB_001003fa;
      }
    }
  }
  else if (0 < param_2) {
    iVar8 = 0;
    iVar7 = 0;
    pfVar6 = __ptr_00;
    do {
      fVar13 = (((float)iVar7 + fVar2) / fVar12 - fVar2) + param_3;
      fVar11 = fVar13 - param_2_00 * param_1_00;
      if ((float)((uint)fVar11 & uVar9) < fVar4) {
        fVar11 = (float)((uint)((float)(int)fVar11 -
                               (float)(-(uint)(fVar11 < (float)(int)fVar11) & (uint)_LC2)) |
                        ~uVar9 & (uint)fVar11);
      }
      fVar16 = param_2_00 * param_1_00 + fVar13;
      if ((float)((uint)fVar16 & uVar9) < fVar4) {
        fVar16 = (float)((uint)((float)(int)fVar16 +
                               (float)(-(uint)((float)(int)fVar16 < fVar16) & (uint)_LC2)) |
                        ~uVar9 & (uint)fVar16);
      }
      *pfVar6 = fVar13;
      iVar7 = iVar7 + 1;
      *(ulong *)(pfVar6 + 1) = CONCAT44((int)fVar16,(int)fVar11);
      iVar8 = iVar8 + 1 + ((int)fVar16 - (int)fVar11);
      pfVar6 = pfVar6 + 3;
    } while (param_2 != iVar7);
    if ((iVar8 != 0) && (__ptr_01 = calloc((long)iVar8,8), __ptr_01 != (void *)0x0)) {
      pfVar6 = __ptr_00;
      puVar10 = __ptr;
      local_70 = __ptr_01;
      do {
        fVar4 = pfVar6[2];
        fVar12 = pfVar6[1];
        fVar2 = *pfVar6;
        *puVar10 = 0;
        *(void **)(puVar10 + 4) = local_70;
        local_70 = (void *)((long)local_70 + (long)((int)fVar4 - (int)fVar12) * 8 + 8);
        if ((int)fVar4 < (int)fVar12) goto LAB_0010042a;
        fVar13 = 0.0;
        fVar11 = fVar12;
        do {
          fVar16 = (float)(int)fVar11;
          fVar11 = (float)((int)fVar11 + 1);
          fVar16 = (float)(*param_7)((fVar2 - fVar16) * fVar15);
          fVar13 = fVar13 + fVar16;
        } while ((int)fVar11 <= (int)fVar4);
        local_7c = -1e+20;
        uVar9 = 0xffffffff;
        fVar13 = _LC2 / fVar13;
        local_80 = 0.0;
        do {
          fVar11 = (float)(*param_7)((fVar2 - (float)(int)fVar12) * fVar15);
          if (fVar11 * fVar13 != 0.0) {
            uVar5 = reflect(fVar12,param_1,param_6);
            uVar3 = *puVar10;
            local_80 = local_80 + extraout_XMM0_Da;
            *puVar10 = uVar3 + 1;
            pfVar1 = (float *)(*(long *)(puVar10 + 4) + (ulong)uVar3 * 8);
            *(undefined2 *)(pfVar1 + 1) = uVar5;
            *pfVar1 = extraout_XMM0_Da;
            if (local_7c < extraout_XMM0_Da) {
              uVar9 = (uint)uVar3;
              local_7c = extraout_XMM0_Da;
            }
          }
          fVar12 = (float)((int)fVar12 + 1);
        } while ((int)fVar12 <= (int)fVar4);
        if ((uVar9 == 0xffffffff) || (*puVar10 == 0)) goto LAB_0010042a;
        if (local_80 != _LC2) {
          pfVar1 = (float *)(*(long *)(puVar10 + 4) + (long)(int)uVar9 * 8);
          *pfVar1 = (_LC2 - local_80) + *pfVar1;
        }
        pfVar6 = pfVar6 + 3;
        puVar10 = puVar10 + 8;
      } while (__ptr + __nmemb * 8 != puVar10);
LAB_001003fa:
      free(__ptr_00);
      return __ptr;
    }
  }
LAB_0010042f:
  free(__ptr);
  free(__ptr_00);
  return (ushort *)0x0;
LAB_0010042a:
  free(__ptr_01);
  goto LAB_0010042f;
}



/* basisu::Resampler::resample_x(float*, float const*) */

void __thiscall basisu::Resampler::resample_x(Resampler *this,float *param_1,float *param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ushort *puVar5;
  float fVar6;
  
  uVar1 = *(uint *)(this + 0x10);
  puVar5 = *(ushort **)(this + 0x30);
  if (0 < (int)uVar1) {
    pfVar4 = param_1;
    do {
      if (*puVar5 == 0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = 0.0;
        pfVar2 = *(float **)(puVar5 + 4);
        do {
          pfVar3 = pfVar2 + 2;
          fVar6 = fVar6 + param_2[*(ushort *)(pfVar2 + 1)] * *pfVar2;
          pfVar2 = pfVar3;
        } while (pfVar3 != *(float **)(puVar5 + 4) + (ulong)*puVar5 * 2);
      }
      pfVar2 = pfVar4 + 1;
      puVar5 = puVar5 + 8;
      *pfVar4 = fVar6;
      pfVar4 = pfVar2;
    } while (param_1 + uVar1 != pfVar2);
  }
  return;
}



/* basisu::Resampler::scale_y_mov(float*, float const*, float, int) */

void __thiscall
basisu::Resampler::scale_y_mov
          (Resampler *this,float *param_1,float *param_2,float param_3,int param_4)

{
  ulong uVar1;
  
  if (0 < param_4) {
    uVar1 = 0;
    do {
      param_1[uVar1] = param_2[uVar1] * param_3;
      uVar1 = uVar1 + 1;
    } while (uVar1 != (uint)param_4);
  }
  return;
}



/* basisu::Resampler::scale_y_add(float*, float const*, float, int) */

void __thiscall
basisu::Resampler::scale_y_add
          (Resampler *this,float *param_1,float *param_2,float param_3,int param_4)

{
  ulong uVar1;
  
  if (0 < param_4) {
    uVar1 = 0;
    do {
      param_1[uVar1] = param_2[uVar1] * param_3 + param_1[uVar1];
      uVar1 = uVar1 + 1;
    } while ((uint)param_4 != uVar1);
  }
  return;
}



/* basisu::Resampler::clamp(float*, int) */

void __thiscall basisu::Resampler::clamp(Resampler *this,float *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  
  if (0 < param_2) {
    pfVar2 = param_1;
    do {
      fVar1 = *pfVar2;
      fVar4 = *(float *)(this + 0x6c);
      if ((*(float *)(this + 0x6c) <= fVar1) &&
         (fVar4 = *(float *)(this + 0x70), fVar1 <= *(float *)(this + 0x70))) {
        fVar4 = fVar1;
      }
      pfVar3 = pfVar2 + 1;
      *pfVar2 = fVar4;
      pfVar2 = pfVar3;
    } while (param_1 + (uint)param_2 != pfVar3);
  }
  return;
}



/* basisu::Resampler::resample_y(float*) */

void __thiscall basisu::Resampler::resample_y(Resampler *this,float *param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  ushort *puVar12;
  float fVar13;
  
  puVar12 = (ushort *)((long)*(int *)(this + 100) * 0x10 + *(long *)(this + 0x38));
  if (this[0x42] == (Resampler)0x0) {
    pfVar10 = param_1;
    if (*puVar12 == 0) goto LAB_001009c7;
LAB_00100917:
    lVar8 = *(long *)(this + 0x58);
    lVar11 = 0;
    do {
      lVar7 = 0;
      pfVar2 = *(float **)(puVar12 + 4) + lVar11 * 2;
      uVar4 = *(ushort *)(pfVar2 + 1);
      do {
        if (*(uint *)(lVar8 + lVar7 * 4) == (uint)uVar4) break;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x4000);
      uVar5 = *(uint *)(this + 4);
      lVar6 = *(long *)(lVar8 + 0x10000 + (long)(int)lVar7 * 8);
      if (lVar11 == 0) {
        fVar13 = **(float **)(puVar12 + 4);
        uVar9 = 0;
        if (0 < (int)uVar5) {
          do {
            pfVar10[uVar9] = *(float *)(lVar6 + uVar9 * 4) * fVar13;
            uVar9 = uVar9 + 1;
          } while (uVar5 != uVar9);
        }
      }
      else {
        fVar13 = *pfVar2;
        if (0 < (int)uVar5) {
          uVar9 = 0;
          do {
            pfVar10[uVar9] = *(float *)(lVar6 + uVar9 * 4) * fVar13 + pfVar10[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar5 != uVar9);
        }
      }
      piVar1 = (int *)(*(long *)(this + 0x48) + (ulong)uVar4 * 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined1 *)(*(long *)(this + 0x50) + (ulong)uVar4) = 0;
        lVar8 = *(long *)(this + 0x58);
        *(undefined4 *)(lVar8 + (long)(int)lVar7 * 4) = 0xffffffff;
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < (int)(uint)*puVar12);
    if (this[0x42] == (Resampler)0x0) goto LAB_001009c7;
  }
  else {
    pfVar10 = *(float **)(this + 0x28);
    if (*puVar12 != 0) goto LAB_00100917;
  }
  resample_x(this,param_1,pfVar10);
LAB_001009c7:
  fVar13 = *(float *)(this + 0x6c);
  if ((fVar13 < *(float *)(this + 0x70)) && (uVar5 = *(uint *)(this + 0x10), 0 < (int)uVar5)) {
    pfVar10 = param_1;
    while( true ) {
      fVar3 = *pfVar10;
      if ((fVar13 <= fVar3) && (fVar13 = *(float *)(this + 0x70), fVar3 <= *(float *)(this + 0x70)))
      {
        fVar13 = fVar3;
      }
      *pfVar10 = fVar13;
      if (param_1 + uVar5 == pfVar10 + 1) break;
      fVar13 = *(float *)(this + 0x6c);
      pfVar10 = pfVar10 + 1;
    }
    return;
  }
  return;
}



/* basisu::Resampler::put_line(float const*) */

undefined8 __thiscall basisu::Resampler::put_line(Resampler *this,float *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float *__dest;
  
  iVar2 = *(int *)(this + 0x60);
  if (*(int *)(this + 0xc) <= iVar2) {
    return 0;
  }
  if (*(int *)(*(long *)(this + 0x48) + (long)iVar2 * 4) == 0) {
LAB_00100b02:
    *(int *)(this + 0x60) = iVar2 + 1;
    uVar5 = 1;
  }
  else {
    lVar4 = 0;
    do {
      if (*(int *)(*(long *)(this + 0x58) + lVar4 * 4) == -1) {
        lVar1 = (long)(int)lVar4 + 0x2000;
        *(undefined1 *)(*(long *)(this + 0x50) + (long)iVar2) = 1;
        lVar3 = *(long *)(this + 0x58);
        iVar2 = *(int *)(this + 0x60);
        __dest = *(float **)(lVar3 + lVar1 * 8);
        *(int *)(lVar3 + (long)(int)lVar4 * 4) = iVar2;
        if (__dest == (float *)0x0) {
          __dest = (float *)malloc((long)*(int *)(this + 4) << 2);
          *(float **)(lVar3 + lVar1 * 8) = __dest;
          if (__dest == (float *)0x0) {
            *(undefined4 *)(this + 0x68) = 1;
            return 0;
          }
        }
        if (this[0x42] == (Resampler)0x0) {
          resample_x(this,__dest,param_1);
        }
        else {
          memcpy(__dest,param_1,(long)*(int *)(this + 4) << 2);
          iVar2 = *(int *)(this + 0x60);
        }
        goto LAB_00100b02;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x4000);
    *(undefined4 *)(this + 0x68) = 3;
    uVar5 = 0;
  }
  return uVar5;
}



/* basisu::Resampler::get_line() */

undefined8 __thiscall basisu::Resampler::get_line(Resampler *this)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  
  if (*(int *)(this + 100) == *(int *)(this + 0x14)) {
    return 0;
  }
  puVar3 = (ushort *)((long)*(int *)(this + 100) * 0x10 + *(long *)(this + 0x38));
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    lVar2 = *(long *)(puVar3 + 4);
    puVar3 = (ushort *)(lVar2 + 4);
    do {
      if (*(char *)(*(long *)(this + 0x50) + (ulong)*puVar3) == '\0') {
        return 0;
      }
      puVar3 = puVar3 + 4;
    } while ((ushort *)(lVar2 + 0xc + (ulong)(uVar1 - 1) * 8) != puVar3);
  }
  resample_y(this,*(float **)(this + 0x20));
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  return *(undefined8 *)(this + 0x20);
}



/* basisu::Resampler::~Resampler() */

void __thiscall basisu::Resampler::~Resampler(Resampler *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  free(*(void **)(this + 0x20));
  *(undefined8 *)(this + 0x20) = 0;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    free(*(void **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  if ((*(long *)(this + 0x30) != 0) && (this[0x40] == (Resampler)0x0)) {
    free(*(void **)(*(long *)(this + 0x30) + 8));
    free(*(void **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  if ((*(long *)(this + 0x38) != 0) && (this[0x41] == (Resampler)0x0)) {
    free(*(void **)(*(long *)(this + 0x38) + 8));
    free(*(void **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  free(*(void **)(this + 0x48));
  *(undefined8 *)(this + 0x48) = 0;
  free(*(void **)(this + 0x50));
  lVar1 = *(long *)(this + 0x58);
  *(undefined8 *)(this + 0x50) = 0;
  if (lVar1 != 0) {
    iVar3 = 0;
    while( true ) {
      lVar2 = (long)iVar3;
      iVar3 = iVar3 + 1;
      free(*(void **)(lVar1 + 0x10000 + lVar2 * 8));
      if (iVar3 == 0x4000) break;
      lVar1 = *(long *)(this + 0x58);
    }
    free(*(void **)(this + 0x58));
    return;
  }
  return;
}



/* basisu::Resampler::restart() */

void __thiscall basisu::Resampler::restart(Resampler *this)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ushort *puVar5;
  long lVar6;
  ushort *puVar7;
  int iVar8;
  
  if (*(int *)(this + 0x68) != 0) {
    return;
  }
  lVar4 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (0 < *(int *)(this + 0xc)) {
    do {
      *(undefined4 *)(*(long *)(this + 0x48) + lVar4 * 4) = 0;
      *(undefined1 *)(*(long *)(this + 0x50) + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(this + 0xc));
  }
  if (0 < *(int *)(this + 0x14)) {
    puVar7 = *(ushort **)(this + 0x38);
    iVar8 = 0;
    do {
      uVar2 = *puVar7;
      if (uVar2 != 0) {
        lVar4 = *(long *)(puVar7 + 4);
        lVar6 = *(long *)(this + 0x48);
        puVar5 = (ushort *)(lVar4 + 4);
        do {
          uVar3 = *puVar5;
          puVar5 = puVar5 + 4;
          piVar1 = (int *)(lVar6 + (ulong)uVar3 * 4);
          *piVar1 = *piVar1 + 1;
        } while ((ushort *)(lVar4 + 0xc + (ulong)(uVar2 - 1) * 8) != puVar5);
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 8;
    } while (iVar8 < *(int *)(this + 0x14));
  }
  lVar4 = *(long *)(this + 0x58);
  iVar8 = 0;
  do {
    lVar6 = (long)iVar8;
    iVar8 = iVar8 + 1;
    *(undefined4 *)(lVar4 + lVar6 * 4) = 0xffffffff;
    lVar6 = lVar6 + 0x2000;
    free(*(void **)(lVar4 + lVar6 * 8));
    lVar4 = *(long *)(this + 0x58);
    *(undefined8 *)(lVar4 + lVar6 * 8) = 0;
  } while (iVar8 != 0x4000);
  return;
}



/* basisu::Resampler::Resampler(int, int, int, int, basisu::Resampler::Boundary_Op, float, float,
   char const*, basisu::Resampler::Contrib_List*, basisu::Resampler::Contrib_List*, float, float,
   float, float) */

void __thiscall
basisu::Resampler::Resampler
          (undefined4 param_1_00,undefined4 param_2_00,Resampler *this,undefined4 param_1,
          int param_2,int param_3,undefined4 param_4,undefined4 param_8,char *param_9,long param_10,
          long param_11)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  long lVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  int iVar14;
  
  *(ulong *)(this + 0x6c) = CONCAT44(param_2_00,param_1_00);
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 8) = param_1;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  this[0x42] = (Resampler)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(int *)(this + 0xc) = param_2;
  *(int *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = param_4;
  *(undefined4 *)(this + 0x18) = param_8;
  pvVar6 = malloc((long)param_3 << 2);
  *(void **)(this + 0x20) = pvVar6;
  iVar4 = (int)g_num_resample_filters;
  if (pvVar6 == (void *)0x0) goto LAB_001011cb;
  if (param_9 == (char *)0x0) {
    param_9 = "lanczos4";
  }
  if (0 < (int)g_num_resample_filters) {
    puVar13 = &g_resample_filters;
    iVar14 = 0;
    do {
      iVar5 = strcmp(param_9,(char *)*puVar13);
      if (iVar5 == 0) goto LAB_00100ef1;
      iVar14 = iVar14 + 1;
      puVar13 = puVar13 + 3;
    } while (iVar14 != iVar4);
LAB_0010112f:
    *(undefined4 *)(this + 0x68) = 2;
    return;
  }
  iVar14 = 0;
LAB_00100ef1:
  if (iVar4 == iVar14) goto LAB_0010112f;
  if (param_10 == 0) {
    lVar11 = make_clist(param_1,param_3,param_8);
    *(long *)(this + 0x30) = lVar11;
    if (lVar11 == 0) goto LAB_001011cb;
    param_2 = *(int *)(this + 0xc);
    if (param_11 != 0) goto LAB_00100f3b;
LAB_0010118b:
    lVar11 = make_clist(param_2,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x18));
    *(long *)(this + 0x38) = lVar11;
    if (lVar11 == 0) goto LAB_001011cb;
    param_2 = *(int *)(this + 0xc);
  }
  else {
    this[0x40] = (Resampler)0x1;
    *(long *)(this + 0x30) = param_10;
    if (param_11 == 0) goto LAB_0010118b;
LAB_00100f3b:
    this[0x41] = (Resampler)0x1;
    *(long *)(this + 0x38) = param_11;
  }
  pvVar6 = calloc((long)param_2,4);
  *(void **)(this + 0x48) = pvVar6;
  if (pvVar6 == (void *)0x0) goto LAB_001011cb;
  pvVar7 = calloc((long)param_2,1);
  *(void **)(this + 0x50) = pvVar7;
  if (pvVar7 == (void *)0x0) goto LAB_001011cb;
  iVar4 = *(int *)(this + 0x14);
  if (0 < iVar4) {
    puVar9 = *(ushort **)(this + 0x38);
    puVar12 = puVar9 + (long)iVar4 * 8;
    do {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        lVar11 = *(long *)(puVar9 + 4);
        puVar8 = (ushort *)(lVar11 + 4);
        do {
          uVar3 = *puVar8;
          puVar8 = puVar8 + 4;
          piVar1 = (int *)((long)pvVar6 + (ulong)uVar3 * 4);
          *piVar1 = *piVar1 + 1;
        } while ((ushort *)(lVar11 + 0xc + (ulong)(uVar2 - 1) * 8) != puVar8);
      }
      puVar9 = puVar9 + 8;
    } while (puVar9 != puVar12);
  }
  pvVar6 = malloc(0x30000);
  *(void **)(this + 0x58) = pvVar6;
  if (pvVar6 == (void *)0x0) goto LAB_001011cb;
  pvVar6 = memset(pvVar6,0xff,0x10000);
  memset((void *)((long)pvVar6 + 0x10000),0,0x20000);
  iVar14 = *(int *)(this + 0x10);
  puVar9 = *(ushort **)(this + 0x30);
  *(undefined8 *)(this + 0x60) = 0;
  if (iVar14 < 1) {
    puVar9 = *(ushort **)(this + 0x38);
    iVar5 = 0;
    param_2 = 0;
    if (0 < iVar4) goto LAB_00101063;
    lVar11 = (long)*(int *)(this + 8);
    iVar5 = 0;
LAB_0010110e:
    if ((iVar5 != param_2) || (iVar14 <= (int)lVar11)) {
      *(int *)(this + 4) = iVar14;
      this[0x42] = (Resampler)0x0;
      return;
    }
  }
  else {
    iVar5 = 0;
    puVar12 = puVar9 + (long)iVar14 * 8;
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 8;
      iVar5 = iVar5 + (uint)uVar2;
    } while (puVar9 != puVar12);
    param_2 = param_2 * iVar5;
    puVar9 = *(ushort **)(this + 0x38);
    iVar5 = iVar5 * iVar4;
    if (iVar4 < 1) {
      iVar10 = 0;
    }
    else {
LAB_00101063:
      iVar10 = 0;
      puVar12 = puVar9 + (long)iVar4 * 8;
      do {
        uVar2 = *puVar9;
        puVar9 = puVar9 + 8;
        iVar10 = iVar10 + (uint)uVar2;
      } while (puVar9 != puVar12);
      param_2 = param_2 + (iVar14 * iVar10 * 4) / 3;
    }
    lVar11 = (long)*(int *)(this + 8);
    iVar5 = (iVar10 * *(int *)(this + 8) * 4) / 3 + iVar5;
    if (param_2 <= iVar5) goto LAB_0010110e;
  }
  *(int *)(this + 4) = (int)lVar11;
  this[0x42] = (Resampler)0x1;
  pvVar6 = malloc(lVar11 * 4);
  *(void **)(this + 0x28) = pvVar6;
  if (pvVar6 != (void *)0x0) {
    return;
  }
LAB_001011cb:
  *(undefined4 *)(this + 0x68) = 1;
  return;
}



/* basisu::Resampler::get_clists(basisu::Resampler::Contrib_List**,
   basisu::Resampler::Contrib_List**) */

void __thiscall
basisu::Resampler::get_clists(Resampler *this,Contrib_List **param_1,Contrib_List **param_2)

{
  if (param_1 != (Contrib_List **)0x0) {
    *param_1 = *(Contrib_List **)(this + 0x30);
  }
  if (param_2 != (Contrib_List **)0x0) {
    *param_2 = *(Contrib_List **)(this + 0x38);
  }
  return;
}



/* basisu::Resampler::get_filter_num() */

undefined4 basisu::Resampler::get_filter_num(void)

{
  return (undefined4)g_num_resample_filters;
}



/* basisu::Resampler::get_filter_name(int) */

undefined8 basisu::Resampler::get_filter_name(int param_1)

{
  if ((-1 < param_1) && (param_1 < (int)g_num_resample_filters)) {
    return (&g_resample_filters)[(long)param_1 * 3];
  }
  return 0;
}


