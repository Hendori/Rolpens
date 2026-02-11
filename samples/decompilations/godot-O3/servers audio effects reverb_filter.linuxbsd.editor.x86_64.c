
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reverb::process(float*, float*, int) */

void __thiscall Reverb::process(Reverb *this,float *param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  Reverb *pRVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  Reverb *pRVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  
  iVar9 = 0x400;
  if (param_3 < 0x401) {
    iVar9 = param_3;
  }
  lVar6 = lrint(((double)*(float *)(this + 0x1dc) / __LC2) * (double)*(float *)(this + 0x1d0));
  iVar1 = *(int *)(this + 0x1b0);
  iVar5 = (int)lVar6;
  if (iVar5 < 10) {
    iVar5 = 10;
  }
  if (iVar1 <= iVar5) {
    iVar5 = iVar1 + -1;
  }
  if (0 < param_3) {
    iVar13 = *(int *)(this + 0x1b4);
    pfVar2 = *(float **)(this + 0x1a8);
    lVar10 = 0;
    lVar6 = *(long *)(this + 0x1a0);
    do {
      if (iVar13 < iVar1) {
        pfVar12 = pfVar2 + iVar13;
        iVar3 = iVar13 + 1;
        iVar4 = iVar13;
      }
      else {
        iVar4 = 0;
        pfVar12 = pfVar2;
        iVar3 = 1;
      }
      iVar13 = iVar3;
      for (iVar4 = iVar4 - iVar5; iVar4 < 0; iVar4 = iVar4 + iVar1) {
      }
      fVar15 = pfVar2[iVar4] * *(float *)(this + 0x1e0) + param_1[lVar10];
      fVar16 = 0.0;
      if (0x7ffffff < ((uint)fVar15 & 0x7f800000)) {
        fVar16 = fVar15;
      }
      *pfVar12 = fVar16;
      *(float *)(lVar6 + lVar10 * 4) = fVar16;
      param_2[lVar10] = 0.0;
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < iVar9);
    *(int *)(this + 0x1b4) = iVar13;
  }
  dVar20 = _LC5;
  if (0.0 < *(float *)(this + 0x1e4)) {
    fVar16 = expf((float)(((double)*(float *)(this + 0x1e4) * __LC3 * __LC4) /
                         (double)*(float *)(this + 0x1d0)));
    dVar20 = _LC5;
    dVar18 = ((double)fVar16 + _LC5) * _LC6;
    dVar21 = (double)((ulong)dVar18 ^ __LC7);
    if (0 < param_3) {
      lVar6 = *(long *)(this + 0x1a0);
      lVar10 = 0;
      fVar15 = *(float *)(this + 0x1bc);
      fVar19 = *(float *)(this + 0x1b8);
      do {
        fVar17 = *(float *)(lVar6 + lVar10 * 4);
        fVar15 = fVar15 * fVar16 + (float)dVar18 * fVar17 + fVar19 * (float)dVar21;
        *(float *)(lVar6 + lVar10 * 4) = fVar15;
        lVar10 = lVar10 + 1;
        *(ulong *)(this + 0x1b8) = CONCAT44(fVar15,fVar17);
        fVar19 = fVar17;
      } while ((int)lVar10 < iVar9);
    }
  }
  pRVar14 = this + 0x140;
  dVar18 = (double)*(float *)(this + 0x1d8);
  pRVar8 = this;
  do {
    iVar1 = *(int *)pRVar8;
    lVar6 = lrintf((float)((double)*(int *)(pRVar8 + 0x20) * (dVar20 - dVar18)));
    if (0 < param_3) {
      lVar10 = *(long *)(this + 0x1a0);
      iVar5 = *(int *)(pRVar8 + 0x1c);
      lVar11 = 0;
      do {
        if (iVar5 < iVar1 - (int)lVar6) {
          lVar7 = (long)iVar5 << 2;
        }
        else {
          *(int *)(pRVar8 + 0x1c) = 0;
          lVar7 = 0;
        }
        dVar18 = 0.0;
        fVar16 = *(float *)(lVar7 + *(long *)(pRVar8 + 8)) * *(float *)(pRVar8 + 0x10);
        if (0x7ffffff < ((uint)fVar16 & 0x7f800000)) {
          dVar18 = (double)fVar16;
        }
        fVar16 = (float)((dVar20 - (double)*(float *)(pRVar8 + 0x14)) * dVar18 +
                        (double)(*(float *)(pRVar8 + 0x14) * *(float *)(pRVar8 + 0x18)));
        *(float *)(pRVar8 + 0x18) = fVar16;
        *(float *)(lVar7 + *(long *)(pRVar8 + 8)) = *(float *)(lVar10 + lVar11 * 4) + fVar16;
        param_2[lVar11] = fVar16 + param_2[lVar11];
        lVar11 = lVar11 + 1;
        iVar5 = *(int *)(pRVar8 + 0x1c) + 1;
        *(int *)(pRVar8 + 0x1c) = iVar5;
      } while ((int)lVar11 < iVar9);
      dVar18 = (double)*(float *)(this + 0x1d8);
    }
    pRVar8 = pRVar8 + 0x28;
  } while (pRVar14 != pRVar8);
  while( true ) {
    iVar1 = *(int *)pRVar14;
    lVar6 = lrintf((float)((double)*(int *)(pRVar14 + 0x14) * (dVar20 - dVar18)));
    fVar16 = _LC8;
    if (0 < param_3) {
      iVar5 = *(int *)(pRVar14 + 0x10);
      pfVar2 = *(float **)(pRVar14 + 8);
      lVar10 = 0;
      do {
        if (iVar5 < iVar1 - (int)lVar6) {
          lVar11 = (long)iVar5;
          iVar5 = iVar5 + 1;
          pfVar12 = pfVar2 + lVar11;
        }
        else {
          iVar5 = 1;
          pfVar12 = pfVar2;
        }
        fVar15 = *pfVar12;
        fVar17 = fVar15 * fVar16 + param_2[lVar10];
        fVar19 = 0.0;
        if (0x7ffffff < ((uint)fVar17 & 0x7f800000)) {
          fVar15 = fVar15 - fVar17 * fVar16;
          fVar19 = fVar17;
        }
        *pfVar12 = fVar19;
        param_2[lVar10] = fVar15;
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < iVar9);
      *(int *)(pRVar14 + 0x10) = iVar5;
    }
    fVar16 = _LC9;
    pRVar14 = pRVar14 + 0x18;
    if (pRVar14 == this + 0x1a0) break;
    dVar18 = (double)*(float *)(this + 0x1d8);
  }
  lVar6 = 0;
  if (0 < param_3) {
    do {
      param_2[lVar6] =
           param_2[lVar6] * *(float *)(this + 0x1c8) * fVar16 +
           param_1[lVar6] * *(float *)(this + 0x1cc);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar9);
  }
  return;
}



/* Reverb::set_wet(float) */

void __thiscall Reverb::set_wet(Reverb *this,float param_1)

{
  *(float *)(this + 0x1c8) = param_1;
  return;
}



/* Reverb::set_dry(float) */

void __thiscall Reverb::set_dry(Reverb *this,float param_1)

{
  *(float *)(this + 0x1cc) = param_1;
  return;
}



/* Reverb::set_predelay(float) */

void __thiscall Reverb::set_predelay(Reverb *this,float param_1)

{
  *(float *)(this + 0x1dc) = param_1;
  return;
}



/* Reverb::set_predelay_feedback(float) */

void __thiscall Reverb::set_predelay_feedback(Reverb *this,float param_1)

{
  *(float *)(this + 0x1e0) = param_1;
  return;
}



/* Reverb::set_highpass(float) */

void __thiscall Reverb::set_highpass(Reverb *this,float param_1)

{
  float fVar1;
  
  fVar1 = _LC10;
  if ((param_1 <= _LC10) && (fVar1 = param_1, param_1 < 0.0)) {
    *(undefined4 *)(this + 0x1e4) = 0;
    return;
  }
  *(float *)(this + 0x1e4) = fVar1;
  return;
}



/* Reverb::set_extra_spread(float) */

void __thiscall Reverb::set_extra_spread(Reverb *this,float param_1)

{
  *(float *)(this + 0x1d8) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reverb::update_parameters() */

void __thiscall Reverb::update_parameters(Reverb *this)

{
  float fVar1;
  Reverb *pRVar2;
  Reverb *pRVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  fVar4 = _LC11 * *(float *)(this + 0x1c0) + _LC8;
  fVar1 = *(float *)(this + 0x1d0);
  fVar5 = (float)((double)*(float *)(this + 0x1c4) * _LC6 + _LC6);
  dVar6 = (double)(fVar5 * fVar5) * __LC3 * __LC12;
  pRVar3 = this + 0x10;
  do {
    if (fVar4 < _LC8) {
      *(undefined4 *)pRVar3 = 0x3f333333;
    }
    else if (__LC13 < fVar4) {
      *(undefined4 *)pRVar3 = 0x3f7ae148;
    }
    else {
      *(float *)pRVar3 = fVar4;
    }
    pRVar2 = pRVar3 + 0x28;
    fVar5 = expf((float)(dVar6 / (double)fVar1));
    *(float *)(pRVar3 + 4) = fVar5;
    pRVar3 = pRVar2;
  } while (this + 0x150 != pRVar2);
  return;
}



/* Reverb::set_room_size(float) */

void __thiscall Reverb::set_room_size(Reverb *this,float param_1)

{
  *(float *)(this + 0x1c0) = param_1;
  update_parameters(this);
  return;
}



/* Reverb::set_damp(float) */

void __thiscall Reverb::set_damp(Reverb *this,float param_1)

{
  *(float *)(this + 0x1c4) = param_1;
  update_parameters(this);
  return;
}



/* Reverb::clear_buffers() */

void __thiscall Reverb::clear_buffers(Reverb *this)

{
  Reverb *pRVar1;
  
  if (*(void **)(this + 0x1a8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x1a8),true);
  }
  pRVar1 = this + 8;
  do {
    if (*(void **)pRVar1 != (void *)0x0) {
      Memory::free_static(*(void **)pRVar1,true);
    }
    *(undefined8 *)pRVar1 = 0;
    pRVar1 = pRVar1 + 0x28;
  } while (pRVar1 != this + 0x148);
  do {
    if (*(void **)pRVar1 != (void *)0x0) {
      Memory::free_static(*(void **)pRVar1,true);
    }
    *(undefined8 *)pRVar1 = 0;
    pRVar1 = pRVar1 + 0x18;
  } while (pRVar1 != this + 0x1a8);
  return;
}



/* Reverb::configure_buffers() */

void __thiscall Reverb::configure_buffers(Reverb *this)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  Reverb *pRVar8;
  Reverb *pRVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  
  pfVar10 = (float *)&comb_tunings;
  clear_buffers(this);
  pRVar8 = this;
  do {
    fVar2 = *(float *)(this + 0x1d0);
    lVar4 = lrintf(fVar2 * *(float *)(this + 0x1d4));
    *(int *)(pRVar8 + 0x20) = (int)lVar4;
    lVar5 = lrintf(fVar2 * *pfVar10);
    iVar12 = (int)lVar4 + (int)lVar5;
    if (iVar12 < 5) {
      iVar12 = 5;
    }
    uVar1 = (long)iVar12 * 4;
    lVar4 = Memory::alloc_static(uVar1,true);
    if (lVar4 == 0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
    }
    else {
      *(long *)(lVar4 + -8) = (long)iVar12;
    }
    *(undefined4 *)(pRVar8 + 0x1c) = 0;
    *(long *)(pRVar8 + 8) = lVar4;
    uVar6 = 0;
    do {
      *(undefined4 *)(*(long *)(pRVar8 + 8) + uVar6) = 0;
      uVar6 = uVar6 + 4;
    } while (uVar6 != uVar1);
    *(int *)pRVar8 = iVar12;
    pRVar8 = pRVar8 + 0x28;
    pfVar10 = pfVar10 + 1;
  } while (pRVar8 != this + 0x140);
  pfVar10 = (float *)&allpass_tunings;
  do {
    fVar2 = *(float *)(this + 0x1d0);
    lVar4 = lrintf(fVar2 * *(float *)(this + 0x1d4));
    fVar3 = *pfVar10;
    *(int *)(pRVar8 + 0x14) = (int)lVar4;
    lVar5 = lrintf(fVar2 * fVar3);
    uVar11 = (int)lVar4 + (int)lVar5;
    if ((int)uVar11 < 5) {
      uVar11 = 5;
    }
    pvVar7 = (void *)Memory::alloc_static((long)(int)uVar11 * 4,true);
    if (pvVar7 == (void *)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
    }
    else {
      *(long *)((long)pvVar7 + -8) = (long)(int)uVar11;
    }
    *(void **)(pRVar8 + 8) = pvVar7;
    *(undefined4 *)(pRVar8 + 0x10) = 0;
    pRVar9 = pRVar8 + 0x18;
    pfVar10 = pfVar10 + 1;
    memset(pvVar7,0,(ulong)uVar11 << 2);
    *(uint *)pRVar8 = uVar11;
    pRVar8 = pRVar9;
  } while (pRVar9 != this + 0x1a0);
  iVar12 = (int)((double)*(float *)(this + 0x1d0) * _LC6 + _LC5);
  *(int *)(this + 0x1b0) = iVar12;
  lVar4 = (long)iVar12;
  if (lVar4 == 0) {
    *(undefined8 *)(this + 0x1a8) = 0;
  }
  else {
    pvVar7 = (void *)Memory::alloc_static(lVar4 * 4,true);
    if (pvVar7 == (void *)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      uVar11 = *(uint *)(this + 0x1b0);
    }
    else {
      *(long *)((long)pvVar7 + -8) = lVar4;
      uVar11 = *(uint *)(this + 0x1b0);
    }
    *(void **)(this + 0x1a8) = pvVar7;
    if (0 < (int)uVar11) {
      memset(pvVar7,0,(ulong)uVar11 << 2);
    }
  }
  *(undefined4 *)(this + 0x1b4) = 0;
  return;
}



/* Reverb::set_mix_rate(float) */

void __thiscall Reverb::set_mix_rate(Reverb *this,float param_1)

{
  *(float *)(this + 0x1d0) = param_1;
  configure_buffers(this);
  return;
}



/* Reverb::set_extra_spread_base(float) */

void __thiscall Reverb::set_extra_spread_base(Reverb *this,float param_1)

{
  *(float *)(this + 0x1d4) = param_1;
  configure_buffers(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reverb::Reverb() */

void __thiscall Reverb::Reverb(Reverb *this)

{
  undefined8 uVar1;
  Reverb *pRVar2;
  Reverb *pRVar3;
  long lVar4;
  
  pRVar3 = this;
  do {
    *(undefined4 *)pRVar3 = 0;
    pRVar2 = pRVar3 + 0x28;
    *(undefined8 *)(pRVar3 + 8) = 0;
    *(undefined8 *)(pRVar3 + 0x10) = 0;
    *(undefined4 *)(pRVar3 + 0x18) = 0;
    *(undefined8 *)(pRVar3 + 0x1c) = 0;
    pRVar3 = pRVar2;
  } while (pRVar2 != this + 0x140);
  do {
    *(undefined4 *)pRVar2 = 0;
    pRVar3 = pRVar2 + 0x18;
    *(undefined8 *)(pRVar2 + 8) = 0;
    *(undefined8 *)(pRVar2 + 0x10) = 0;
    pRVar2 = pRVar3;
  } while (pRVar3 != this + 0x1a0);
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  uVar1 = _UNK_00100c28;
  *(undefined8 *)(this + 0x1b8) = __LC17;
  *(undefined8 *)(this + 0x1c0) = uVar1;
  uVar1 = _UNK_00100c38;
  *(undefined8 *)(this + 0x1c8) = __LC18;
  *(undefined8 *)(this + 0x1d0) = uVar1;
  uVar1 = _UNK_00100c48;
  *(undefined8 *)(this + 0x1d8) = __LC19;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  lVar4 = Memory::alloc_static(0x1000,true);
  if (lVar4 == 0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(undefined8 *)(lVar4 + -8) = 0x400;
  }
  *(long *)(this + 0x1a0) = lVar4;
  configure_buffers(this);
  update_parameters(this);
  return;
}



/* Reverb::~Reverb() */

void __thiscall Reverb::~Reverb(Reverb *this)

{
  Memory::free_static(*(void **)(this + 0x1a0),true);
  clear_buffers(this);
  return;
}


