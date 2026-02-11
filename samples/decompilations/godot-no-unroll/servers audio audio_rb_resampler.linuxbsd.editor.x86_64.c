
/* AudioRBResampler::get_num_of_ready_frames() [clone .part.0] */

long __thiscall AudioRBResampler::get_num_of_ready_frames(AudioRBResampler *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 0;
  iVar1 = *(int *)(this + 0x1c);
  iVar3 = *(int *)(this + 0x20);
  if (iVar1 != iVar3) {
    if (iVar3 < iVar1) {
      iVar3 = iVar3 + *(int *)(this + 4);
    }
    lVar2 = ((long)(iVar3 - iVar1) << 0xd) /
            (long)(int)((uint)(*(int *)(this + 0x14) << 0xd) / *(uint *)(this + 0x18));
  }
  return lVar2;
}



/* AudioRBResampler::get_channel_count() const */

undefined4 __thiscall AudioRBResampler::get_channel_count(AudioRBResampler *this)

{
  if (*(long *)(this + 0x30) != 0) {
    return *(undefined4 *)(this + 0x10);
  }
  return 0;
}



/* AudioRBResampler::mix(AudioFrame*, int) */

undefined8 __thiscall AudioRBResampler::mix(AudioRBResampler *this,AudioFrame *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  AudioFrame *pAVar9;
  AudioFrame *pAVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  
  if (*(long *)(this + 0x30) == 0) {
    return 0;
  }
  uVar14 = 0;
  uVar13 = (uint)(*(int *)(this + 0x14) << 0xd) / *(uint *)(this + 0x18);
  iVar7 = *(int *)(this + 0x1c);
  iVar2 = *(int *)(this + 0x20);
  if ((iVar7 != iVar2) && (uVar14 = iVar2 - iVar7, iVar2 < iVar7)) {
    uVar14 = (iVar2 + *(int *)(this + 4)) - iVar7;
  }
  if (*(long *)(this + 0x30) == 0) {
    uVar12 = *(uint *)(this + 0x10);
    iVar7 = 0;
    if (param_2 < 1) {
      iVar7 = param_2;
    }
    if (uVar12 != 4) {
      if (uVar12 < 5) {
        if (uVar12 != 1) goto LAB_001000e8;
      }
      else {
        uVar11 = 0;
        if (uVar12 != 6) goto LAB_001001c5;
      }
    }
    uVar11 = 0;
  }
  else {
    iVar7 = get_num_of_ready_frames(this);
    fVar5 = _LC0;
    uVar12 = *(uint *)(this + 0x10);
    if (param_2 <= iVar7) {
      iVar7 = param_2;
    }
    if (uVar12 == 4) {
      uVar12 = *(uint *)(this + 0x24);
      uVar11 = uVar12 & 0x1fff;
      if (0 < iVar7) {
        uVar3 = *(undefined4 *)this;
        uVar4 = *(uint *)(this + 4);
        pAVar10 = param_1;
        do {
          pAVar9 = pAVar10;
          uVar11 = uVar11 + uVar13;
          uVar12 = uVar12 + uVar13 & (1 << ((char)uVar3 + 0xdU & 0x1f)) - 1U;
          uVar8 = (int)uVar12 >> 0xd;
          fVar15 = (float)(uVar12 & 0x1fff) * fVar5;
          if (uVar4 <= uVar8) goto LAB_0010019b;
          uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + (ulong)(uVar8 * 4) * 4);
          uVar1 = *(undefined8 *)
                   (*(long *)(this + 0x30) + (ulong)((uVar8 + 1 & *(uint *)(this + 8)) * 4) * 4);
          fVar22 = (float)uVar16;
          fVar24 = (float)((ulong)uVar16 >> 0x20);
          uVar16 = CONCAT44(((float)((ulong)uVar1 >> 0x20) - fVar24) * fVar15 + fVar24,
                            ((float)uVar1 - fVar22) * fVar15 + fVar22);
          *(undefined8 *)pAVar9 = uVar16;
          pAVar10 = pAVar9 + 8;
        } while (pAVar9 + 8 != param_1 + (long)iVar7 * 8);
        goto LAB_00100370;
      }
    }
    else if (uVar12 < 5) {
      if (uVar12 == 1) {
        uVar12 = *(uint *)(this + 0x24);
        uVar11 = uVar12 & 0x1fff;
        if (0 < iVar7) {
          uVar3 = *(undefined4 *)this;
          uVar4 = *(uint *)(this + 4);
          pAVar10 = param_1;
          do {
            pAVar9 = pAVar10;
            uVar11 = uVar11 + uVar13;
            uVar12 = uVar12 + uVar13 & (1 << ((char)uVar3 + 0xdU & 0x1f)) - 1U;
            uVar8 = (int)uVar12 >> 0xd;
            if (uVar4 <= uVar8) goto LAB_0010019b;
            fVar15 = *(float *)(*(long *)(this + 0x30) + (ulong)uVar8 * 4);
            fVar15 = fVar15 + (*(float *)(*(long *)(this + 0x30) +
                                         (ulong)(uVar8 + 1 & *(uint *)(this + 8)) * 4) - fVar15) *
                              (float)(uVar12 & 0x1fff) * fVar5;
            uVar16 = CONCAT44(fVar15,fVar15);
            *(undefined8 *)pAVar9 = uVar16;
            pAVar10 = pAVar9 + 8;
          } while (param_1 + (long)iVar7 * 8 != pAVar9 + 8);
LAB_00100370:
          *(uint *)(this + 0x24) = uVar12;
          *(undefined8 *)pAVar9 = uVar16;
        }
      }
      else {
LAB_001000e8:
        fVar5 = _LC0;
        if (uVar12 != 2) goto LAB_001001c3;
        uVar12 = *(uint *)(this + 0x24);
        uVar11 = uVar12 & 0x1fff;
        if (0 < iVar7) {
          uVar3 = *(undefined4 *)this;
          uVar4 = *(uint *)(this + 4);
          pAVar10 = param_1;
          do {
            pAVar9 = pAVar10;
            uVar11 = uVar11 + uVar13;
            uVar12 = uVar12 + uVar13 & (1 << ((char)uVar3 + 0xdU & 0x1f)) - 1U;
            uVar8 = (int)uVar12 >> 0xd;
            fVar15 = (float)(uVar12 & 0x1fff) * fVar5;
            if (uVar4 <= uVar8) goto LAB_0010019b;
            uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + (ulong)(uVar8 * 2) * 4);
            uVar1 = *(undefined8 *)
                     (*(long *)(this + 0x30) + (ulong)((uVar8 + 1 & *(uint *)(this + 8)) * 2) * 4);
            fVar22 = (float)uVar16;
            fVar24 = (float)((ulong)uVar16 >> 0x20);
            uVar16 = CONCAT44(((float)((ulong)uVar1 >> 0x20) - fVar24) * fVar15 + fVar24,
                              ((float)uVar1 - fVar22) * fVar15 + fVar22);
            *(undefined8 *)pAVar9 = uVar16;
            pAVar10 = pAVar9 + 8;
          } while (param_1 + (long)iVar7 * 8 != pAVar9 + 8);
          goto LAB_00100370;
        }
      }
    }
    else {
      if (uVar12 != 6) {
LAB_001001c3:
        uVar11 = 0;
        goto LAB_001001c5;
      }
      uVar12 = *(uint *)(this + 0x24);
      uVar11 = uVar12 & 0x1fff;
      if (0 < iVar7) {
        uVar3 = *(undefined4 *)this;
        uVar4 = *(uint *)(this + 4);
        pAVar10 = param_1;
        do {
          pAVar9 = pAVar10;
          uVar11 = uVar11 + uVar13;
          uVar12 = uVar12 + uVar13 & (1 << ((char)uVar3 + 0xdU & 0x1f)) - 1U;
          uVar8 = (int)uVar12 >> 0xd;
          fVar15 = (float)(uVar12 & 0x1fff) * fVar5;
          if (uVar4 <= uVar8) goto LAB_0010019b;
          uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + (ulong)(uVar8 * 6) * 4);
          uVar1 = *(undefined8 *)
                   (*(long *)(this + 0x30) + (ulong)((uVar8 + 1 & *(uint *)(this + 8)) * 6) * 4);
          fVar22 = (float)uVar16;
          fVar24 = (float)((ulong)uVar16 >> 0x20);
          uVar16 = CONCAT44(((float)((ulong)uVar1 >> 0x20) - fVar24) * fVar15 + fVar24,
                            ((float)uVar1 - fVar22) * fVar15 + fVar22);
          *(undefined8 *)pAVar9 = uVar16;
          pAVar10 = pAVar9 + 8;
        } while (param_1 + (long)iVar7 * 8 != pAVar9 + 8);
        goto LAB_00100370;
      }
    }
  }
  uVar11 = uVar11 >> 0xd;
LAB_001001c5:
  if ((int)uVar14 < (int)uVar11) {
    uVar11 = uVar14;
  }
  *(uint *)(this + 0x1c) = uVar11 + *(int *)(this + 0x1c) & *(uint *)(this + 8);
  iVar6 = _LC4._4_4_;
  iVar2 = (int)_LC4;
  if (iVar7 < param_2) {
    if (0 < iVar7) {
      auVar23._0_4_ = (float)iVar7;
      iVar20 = 0;
      iVar21 = 0;
      auVar23._4_4_ = auVar23._0_4_;
      auVar23._8_8_ = _LC5;
      pAVar10 = param_1;
      do {
        pAVar9 = pAVar10 + 8;
        iVar18 = iVar7 - iVar20;
        iVar19 = iVar7 - iVar21;
        iVar20 = iVar20 + iVar2;
        iVar21 = iVar21 + iVar6;
        auVar17._0_4_ = (float)*(undefined8 *)pAVar10 * (float)iVar18;
        auVar17._4_4_ = (float)((ulong)*(undefined8 *)pAVar10 >> 0x20) * (float)iVar19;
        auVar17._8_8_ = 0;
        auVar17 = divps(auVar17,auVar23);
        *(long *)pAVar10 = auVar17._0_8_;
        pAVar10 = pAVar9;
      } while (pAVar9 != param_1 + (ulong)(iVar7 - 1) * 8 + 8);
    }
    if (iVar7 < param_2) {
      pAVar10 = param_1 + (long)iVar7 * 8;
      do {
        *(undefined8 *)pAVar10 = 0;
        pAVar10 = pAVar10 + 8;
      } while (param_1 + ((ulong)(uint)(param_2 - iVar7) + (long)iVar7) * 8 != pAVar10);
    }
  }
  return 1;
LAB_0010019b:
  *(uint *)(this + 0x24) = uVar12;
  _err_print_error("_resample","servers/audio/audio_rb_resampler.cpp",0x38,
                   "Condition \"pos >= rb_len\" is true. Returning: 0",0,0);
  goto LAB_001001c3;
}



/* AudioRBResampler::get_num_of_ready_frames() */

undefined8 __thiscall AudioRBResampler::get_num_of_ready_frames(AudioRBResampler *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x30) != 0) {
    uVar1 = get_num_of_ready_frames(this);
    return uVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioRBResampler::setup(int, int, int, int, int) */

undefined8 __thiscall
AudioRBResampler::setup
          (AudioRBResampler *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  size_t __n;
  void *__s;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  long lVar9;
  uint uVar10;
  double dVar11;
  
  lVar9 = (long)param_1;
  if ((1 < param_1 - 1U) && ((param_1 & 0xfffffffdU) != 4)) {
    _err_print_error("setup","servers/audio/audio_rb_resampler.cpp",0xa2,
                     "Condition \"p_channels != 1 && p_channels != 2 && p_channels != 4 && p_channels != 6\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
    return 0x1f;
  }
  dVar11 = ((double)param_4 / __LC8) * (double)param_2;
  if (dVar11 <= (double)param_5) {
    dVar11 = (double)param_5;
  }
  uVar3 = (uint)(long)dVar11;
  uVar10 = uVar3 & 0x40000000;
  if (((long)dVar11 & 0x40000000U) == 0) {
    uVar6 = 0x1e;
    do {
      uVar7 = uVar6 - 1;
      if (uVar6 == 0) {
        pvVar8 = *(void **)(this + 0x30);
        if (pvVar8 != (void *)0x0) goto LAB_001005cf;
        *(int *)(this + 0x10) = param_1;
        *(undefined8 *)this = 0x100000000;
        *(undefined4 *)(this + 8) = 0;
        goto LAB_0010061d;
      }
      uVar2 = uVar6;
      uVar6 = uVar7;
    } while ((1 << ((byte)uVar7 & 0x1f) & uVar3) == 0);
  }
  else {
    uVar2 = 0x1f;
  }
  uVar10 = uVar2;
  pvVar8 = *(void **)(this + 0x30);
  if (pvVar8 != (void *)0x0) {
LAB_001005cf:
    if ((*(uint *)this == uVar10) && (param_1 == *(int *)(this + 0x10))) goto LAB_00100661;
    Memory::free_static(pvVar8,true);
    Memory::free_static(*(void **)(this + 0x28),true);
  }
  *(int *)(this + 0x10) = param_1;
  bVar1 = (byte)uVar10 & 0x1f;
  uVar3 = 1 << bVar1;
  *(uint *)this = uVar10;
  lVar9 = lVar9 * (ulong)uVar3;
  *(uint *)(this + 4) = uVar3;
  *(uint *)(this + 8) = uVar3 - 1;
  if (lVar9 == 0) {
    *(undefined8 *)(this + 0x30) = 0;
    uVar5 = (ulong)(uint)(0 << bVar1);
  }
  else {
LAB_0010061d:
    lVar4 = Memory::alloc_static(lVar9 * 4,true);
    if (lVar4 == 0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
    }
    else {
      *(long *)(lVar4 + -8) = lVar9;
    }
    *(long *)(this + 0x30) = lVar4;
    uVar5 = Memory::alloc_static(lVar9 * 4,true);
    if (uVar5 == 0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      uVar5 = 0;
    }
    else {
      *(long *)(uVar5 - 8) = lVar9;
    }
  }
  *(ulong *)(this + 0x28) = uVar5;
LAB_00100661:
  *(int *)(this + 0x14) = param_2;
  *(int *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  if (*(int *)(this + 4) * *(int *)(this + 0x10) != 0) {
    pvVar8 = *(void **)(this + 0x28);
    __s = *(void **)(this + 0x30);
    __n = (ulong)(uint)(*(int *)(this + 4) * *(int *)(this + 0x10)) * 4;
    if ((__s < (void *)((long)pvVar8 + __n)) && (pvVar8 < (void *)((long)__s + __n))) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)__s + lVar9) = 0;
        *(undefined4 *)((long)pvVar8 + lVar9) = 0;
        lVar9 = lVar9 + 4;
      } while (__n - lVar9 != 0);
    }
    else {
      memset(__s,0,__n);
      memset(pvVar8,0,__n);
    }
  }
  return 0;
}



/* AudioRBResampler::clear() */

void __thiscall AudioRBResampler::clear(AudioRBResampler *this)

{
  if (*(void **)(this + 0x30) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x30),true);
    Memory::free_static(*(void **)(this + 0x28),true);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
}



/* AudioRBResampler::AudioRBResampler() */

void __thiscall AudioRBResampler::AudioRBResampler(AudioRBResampler *this)

{
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* AudioRBResampler::~AudioRBResampler() */

void __thiscall AudioRBResampler::~AudioRBResampler(AudioRBResampler *this)

{
  if (*(void **)(this + 0x30) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x30),true);
    Memory::free_static(*(void **)(this + 0x28),true);
    return;
  }
  return;
}


