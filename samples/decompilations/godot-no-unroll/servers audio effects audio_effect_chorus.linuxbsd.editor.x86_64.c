
/* AudioEffectChorus::get_voice_count() const */

undefined4 __thiscall AudioEffectChorus::get_voice_count(AudioEffectChorus *this)

{
  return *(undefined4 *)(this + 0x2b8);
}



/* AudioEffectChorus::set_wet(float) */

void __thiscall AudioEffectChorus::set_wet(AudioEffectChorus *this,float param_1)

{
  *(float *)(this + 700) = param_1;
  return;
}



/* AudioEffectChorus::get_wet() const */

undefined4 __thiscall AudioEffectChorus::get_wet(AudioEffectChorus *this)

{
  return *(undefined4 *)(this + 700);
}



/* AudioEffectChorus::set_dry(float) */

void __thiscall AudioEffectChorus::set_dry(AudioEffectChorus *this,float param_1)

{
  *(float *)(this + 0x2c0) = param_1;
  return;
}



/* AudioEffectChorus::get_dry() const */

undefined4 __thiscall AudioEffectChorus::get_dry(AudioEffectChorus *this)

{
  return *(undefined4 *)(this + 0x2c0);
}



/* AudioEffectChorus::set_voice_delay_ms(int, float) */

void __thiscall
AudioEffectChorus::set_voice_delay_ms(AudioEffectChorus *this,int param_1,float param_2)

{
  if ((uint)param_1 < 4) {
    *(float *)(this + (long)param_1 * 0x18 + 600) = param_2;
    return;
  }
  _err_print_index_error
            ("set_voice_delay_ms","servers/audio/effects/audio_effect_chorus.cpp",0xbd,(long)param_1
             ,4,"p_voice","MAX_VOICES","",false,false);
  return;
}



/* AudioEffectChorus::get_voice_delay_ms(int) const */

undefined4 __thiscall AudioEffectChorus::get_voice_delay_ms(AudioEffectChorus *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 0x18 + 600);
  }
  _err_print_index_error
            ("get_voice_delay_ms","servers/audio/effects/audio_effect_chorus.cpp",0xc3,(long)param_1
             ,4,"p_voice","MAX_VOICES","",false,false);
  return 0;
}



/* AudioEffectChorus::set_voice_rate_hz(int, float) */

void __thiscall
AudioEffectChorus::set_voice_rate_hz(AudioEffectChorus *this,int param_1,float param_2)

{
  if ((uint)param_1 < 4) {
    *(float *)(this + (long)param_1 * 0x18 + 0x25c) = param_2;
    return;
  }
  _err_print_index_error
            ("set_voice_rate_hz","servers/audio/effects/audio_effect_chorus.cpp",200,(long)param_1,4
             ,"p_voice","MAX_VOICES","",false,false);
  return;
}



/* AudioEffectChorus::get_voice_rate_hz(int) const */

undefined4 __thiscall AudioEffectChorus::get_voice_rate_hz(AudioEffectChorus *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 0x18 + 0x25c);
  }
  _err_print_index_error
            ("get_voice_rate_hz","servers/audio/effects/audio_effect_chorus.cpp",0xce,(long)param_1,
             4,"p_voice","MAX_VOICES","",false,false);
  return 0;
}



/* AudioEffectChorus::set_voice_depth_ms(int, float) */

void __thiscall
AudioEffectChorus::set_voice_depth_ms(AudioEffectChorus *this,int param_1,float param_2)

{
  if ((uint)param_1 < 4) {
    *(float *)(this + (long)param_1 * 0x18 + 0x260) = param_2;
    return;
  }
  _err_print_index_error
            ("set_voice_depth_ms","servers/audio/effects/audio_effect_chorus.cpp",0xd4,(long)param_1
             ,4,"p_voice","MAX_VOICES","",false,false);
  return;
}



/* AudioEffectChorus::get_voice_depth_ms(int) const */

undefined4 __thiscall AudioEffectChorus::get_voice_depth_ms(AudioEffectChorus *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 0x18 + 0x260);
  }
  _err_print_index_error
            ("get_voice_depth_ms","servers/audio/effects/audio_effect_chorus.cpp",0xda,(long)param_1
             ,4,"p_voice","MAX_VOICES","",false,false);
  return 0;
}



/* AudioEffectChorus::set_voice_level_db(int, float) */

void __thiscall
AudioEffectChorus::set_voice_level_db(AudioEffectChorus *this,int param_1,float param_2)

{
  if ((uint)param_1 < 4) {
    *(float *)(this + (long)param_1 * 0x18 + 0x264) = param_2;
    return;
  }
  _err_print_index_error
            ("set_voice_level_db","servers/audio/effects/audio_effect_chorus.cpp",0xe0,(long)param_1
             ,4,"p_voice","MAX_VOICES","",false,false);
  return;
}



/* AudioEffectChorus::get_voice_level_db(int) const */

undefined4 __thiscall AudioEffectChorus::get_voice_level_db(AudioEffectChorus *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 0x18 + 0x264);
  }
  _err_print_index_error
            ("get_voice_level_db","servers/audio/effects/audio_effect_chorus.cpp",0xe6,(long)param_1
             ,4,"p_voice","MAX_VOICES","",false,false);
  return 0;
}



/* AudioEffectChorus::set_voice_cutoff_hz(int, float) */

void __thiscall
AudioEffectChorus::set_voice_cutoff_hz(AudioEffectChorus *this,int param_1,float param_2)

{
  if ((uint)param_1 < 4) {
    *(float *)(this + (long)param_1 * 0x18 + 0x268) = param_2;
    return;
  }
  _err_print_index_error
            ("set_voice_cutoff_hz","servers/audio/effects/audio_effect_chorus.cpp",0xec,
             (long)param_1,4,"p_voice","MAX_VOICES","",false,false);
  return;
}



/* AudioEffectChorus::get_voice_cutoff_hz(int) const */

undefined4 __thiscall AudioEffectChorus::get_voice_cutoff_hz(AudioEffectChorus *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 0x18 + 0x268);
  }
  _err_print_index_error
            ("get_voice_cutoff_hz","servers/audio/effects/audio_effect_chorus.cpp",0xf2,
             (long)param_1,4,"p_voice","MAX_VOICES","",false,false);
  return 0;
}



/* AudioEffectChorus::set_voice_pan(int, float) */

void __thiscall AudioEffectChorus::set_voice_pan(AudioEffectChorus *this,int param_1,float param_2)

{
  if ((uint)param_1 < 4) {
    *(float *)(this + (long)param_1 * 0x18 + 0x26c) = param_2;
    return;
  }
  _err_print_index_error
            ("set_voice_pan","servers/audio/effects/audio_effect_chorus.cpp",0xf8,(long)param_1,4,
             "p_voice","MAX_VOICES","",false,false);
  return;
}



/* AudioEffectChorus::get_voice_pan(int) const */

undefined4 __thiscall AudioEffectChorus::get_voice_pan(AudioEffectChorus *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 0x18 + 0x26c);
  }
  _err_print_index_error
            ("get_voice_pan","servers/audio/effects/audio_effect_chorus.cpp",0xfe,(long)param_1,4,
             "p_voice","MAX_VOICES","",false,false);
  return 0;
}



/* AudioEffectChorus::set_voice_count(int) */

void __thiscall AudioEffectChorus::set_voice_count(AudioEffectChorus *this,int param_1)

{
  if (param_1 - 1U < 4) {
    *(int *)(this + 0x2b8) = param_1;
    return;
  }
  _err_print_error("set_voice_count","servers/audio/effects/audio_effect_chorus.cpp",0xb4,
                   "Condition \"p_voices < 1 || p_voices > MAX_VOICES\" is true.",0,0);
  return;
}



/* CowData<AudioFrame>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<AudioFrame>::_copy_on_write(CowData<AudioFrame> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar5 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  lVar6 = lVar5 * 8;
  if (lVar6 != 0) {
    uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar4 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  *puVar4 = 1;
  puVar4[1] = lVar5;
  lVar2 = *(long *)this;
  if (lVar5 == 0) {
    if (lVar2 == 0) goto LAB_001006af;
  }
  else {
    lVar5 = 0;
    do {
      *(undefined8 *)((long)puVar4 + lVar5 + 0x10) = *(undefined8 *)(lVar2 + lVar5);
      lVar5 = lVar5 + 8;
    } while (lVar6 != lVar5);
  }
  LOCK();
  plVar1 = (long *)(lVar2 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar5 = *(long *)this;
    *(undefined8 *)this = 0;
    Memory::free_static((void *)(lVar5 + -0x10),false);
  }
LAB_001006af:
  *(undefined8 **)this = puVar4 + 2;
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioEffectChorusInstance::_process_chunk(AudioFrame const*, AudioFrame*, int) */

void __thiscall
AudioEffectChorusInstance::_process_chunk
          (AudioEffectChorusInstance *this,AudioFrame *param_1,AudioFrame *param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  longlong lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  AudioFrame *pAVar18;
  AudioFrame *pAVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 local_b8;
  uint local_b0;
  
  if (0 < param_3) {
    lVar7 = *(long *)(this + 0x1c0);
    lVar13 = 0;
    do {
      uVar16 = (ulong)(*(int *)(this + 0x1c8) + (int)lVar13 & *(uint *)(this + 0x1cc));
      if (lVar7 == 0) {
        lVar7 = 0;
LAB_0010082e:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,uVar16,lVar7,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar7 = *(long *)(lVar7 + -8);
      if (lVar7 <= (long)uVar16) goto LAB_0010082e;
      CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame> *)(this + 0x1c0));
      uVar2 = *(undefined8 *)(param_1 + lVar13 * 8);
      lVar7 = *(long *)(this + 0x1c0);
      lVar11 = *(long *)(this + 0x1b0);
      *(undefined8 *)(lVar7 + uVar16 * 8) = uVar2;
      *(ulong *)(param_2 + lVar13 * 8) =
           CONCAT44(*(float *)(lVar11 + 0x2c0) * (float)((ulong)uVar2 >> 0x20),
                    *(float *)(lVar11 + 0x2c0) * (float)uVar2);
      lVar13 = lVar13 + 1;
    } while (lVar13 != param_3);
  }
  plVar8 = (long *)AudioServer::get_singleton();
  fVar20 = (float)(**(code **)(*plVar8 + 0x188))(plVar8);
  lVar7 = *(long *)(this + 0x1b0);
  if (0 < *(int *)(lVar7 + 0x2b8)) {
    lVar13 = 0;
    dVar31 = (double)fVar20;
    do {
      iVar17 = (int)lVar13;
      lVar11 = lVar7 + (long)iVar17 * 0x18;
      iVar14 = *(int *)(this + 0x1c8);
      dVar25 = (double)*(float *)(lVar11 + 0x25c) * (double)((float)param_3 / fVar20);
      CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame> *)(this + 0x1c0));
      lVar4 = *(long *)(this + 0x1c0);
      lVar9 = lrintf((float)(((double)*(float *)(lVar11 + 600) / __LC38) * dVar31));
      local_b0 = (uint)lVar9;
      dVar26 = ((double)*(float *)(lVar11 + 0x260) / __LC38) * dVar31;
      uVar16 = *(ulong *)(this + lVar13 * 8 + 0x1f0);
      lVar10 = llrint((dVar25 / (double)param_3) * _LC39);
      if (local_b0 < (int)(long)dVar26 + 10U) {
        local_b0 = (int)dVar26 + 10;
      }
      fVar1 = *(float *)(lVar7 + 0x268 + (long)iVar17 * 0x18);
      if (fVar1 == 0.0) {
        lVar7 = *(long *)(this + 0x1b0);
      }
      else {
        fVar21 = expf((float)(((double)fVar1 * __LC40) / dVar31));
        fVar6 = _LC33;
        local_b8 = *(undefined8 *)(this + lVar13 * 8 + 0x1d0);
        if (__LC41 <= fVar1) {
          fVar21 = 0.0;
          fVar1 = _LC33;
        }
        else {
          fVar1 = _LC33 - fVar21;
        }
        lVar7 = lVar7 + (long)iVar17 * 0x18;
        fVar22 = expf(_LC42 * *(float *)(lVar7 + 0x264));
        dVar29 = (double)*(float *)(lVar7 + 0x26c);
        lVar7 = *(long *)(this + 0x1b0);
        dVar30 = _LC43 - dVar29;
        fVar22 = fVar22 * *(float *)(lVar7 + 700);
        fVar23 = fVar22;
        if (dVar30 < 0.0) {
          fVar22 = fVar22 * 0.0;
        }
        else {
          dVar29 = dVar29 + _LC43;
          dVar32 = (double)fVar22;
          if (dVar30 <= _LC43) {
            fVar22 = (float)(dVar30 * dVar32);
            if (dVar29 <= _LC43) {
              fVar23 = (float)(dVar29 * dVar32);
            }
          }
          else if (0.0 <= dVar29) {
            fVar23 = (float)(dVar29 * dVar32);
          }
          else {
            fVar23 = fVar22 * 0.0;
          }
        }
        if (0 < param_3) {
          iVar14 = iVar14 - local_b0;
          uVar15 = uVar16;
          pAVar18 = param_2;
          do {
            fVar24 = sinf((float)((double)((float)(uVar15 & 0xffff) * __LC45) * __LC46));
            fVar24 = (float)dVar26 * fVar24;
            fVar28 = fVar24;
            if ((float)(_LC49 & (uint)fVar24) < _LC47) {
              fVar28 = (float)(~_LC49 & (uint)fVar24 |
                              (uint)((float)(int)fVar24 -
                                    (float)(-(uint)(fVar24 < (float)(int)fVar24) & (uint)fVar6)));
            }
            uVar15 = uVar15 + lVar10;
            pAVar19 = pAVar18 + 8;
            lVar11 = lrintf(fVar28);
            uVar12 = iVar14 - (int)lVar11;
            iVar14 = iVar14 + 1;
            fVar24 = fVar24 - (float)(int)lVar11;
            uVar2 = *(undefined8 *)(lVar4 + (ulong)(*(uint *)(this + 0x1cc) & uVar12) * 8);
            uVar3 = *(undefined8 *)(lVar4 + (ulong)(uVar12 - 1 & *(uint *)(this + 0x1cc)) * 8);
            fVar28 = (float)uVar2;
            fVar27 = (float)((ulong)uVar2 >> 0x20);
            fVar28 = (((float)uVar3 - fVar28) * fVar24 + fVar28) * fVar1 + (float)local_b8 * fVar21;
            fVar24 = (((float)((ulong)uVar3 >> 0x20) - fVar27) * fVar24 + fVar27) * fVar1 +
                     (float)((ulong)local_b8 >> 0x20) * fVar21;
            local_b8 = CONCAT44(fVar24,fVar28);
            *(ulong *)pAVar18 =
                 CONCAT44(fVar23 * fVar24 + (float)((ulong)*(undefined8 *)pAVar18 >> 0x20),
                          fVar22 * fVar28 + (float)*(undefined8 *)pAVar18);
            pAVar18 = pAVar19;
          } while (param_2 + (long)param_3 * 8 != pAVar19);
        }
        dVar25 = _LC39 * dVar25;
        *(undefined8 *)(this + lVar13 * 8 + 0x1d0) = local_b8;
        lVar11 = lrintf((float)dVar25);
        *(ulong *)(this + lVar13 * 8 + 0x1f0) = (long)(int)lVar11 + uVar16;
      }
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < *(int *)(lVar7 + 0x2b8));
  }
  *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + param_3;
  return;
}



/* AudioEffectChorusInstance::process(AudioFrame const*, AudioFrame*, int) */

void __thiscall
AudioEffectChorusInstance::process
          (AudioEffectChorusInstance *this,AudioFrame *param_1,AudioFrame *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return;
  }
  do {
    iVar1 = 0x100;
    if (param_3 < 0x101) {
      iVar1 = param_3;
    }
    _process_chunk(this,param_1,param_2,iVar1);
    param_1 = param_1 + (long)iVar1 * 8;
    param_2 = param_2 + (long)iVar1 * 8;
    param_3 = param_3 - iVar1;
  } while (param_3 != 0);
  return;
}



/* AudioEffectChorus::_validate_property(PropertyInfo&) const */

void __thiscall AudioEffectChorus::_validate_property(AudioEffectChorus *this,PropertyInfo *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = String::begins_with((char *)(param_1 + 8));
  if (cVar4 == '\0') goto LAB_00100deb;
  String::get_slice((char *)&local_38,(int)(param_1 + 8));
  iVar5 = String::to_int();
  lVar3 = local_38;
  if (local_38 == 0) {
LAB_00100e46:
    iVar2 = *(int *)(this + 0x2b8);
  }
  else {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100e46;
    local_38 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    iVar2 = *(int *)(this + 0x2b8);
  }
  if (iVar2 < iVar5) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00100deb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioEffectChorus::AudioEffectChorus() */

void __thiscall AudioEffectChorus::AudioEffectChorus(AudioEffectChorus *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  AudioEffect::AudioEffect((AudioEffect *)this);
  uVar2 = _UNK_0010e988;
  uVar1 = __LC50;
  *(undefined8 *)(this + 0x260) = 0x40000000;
  *(undefined ***)this = &PTR__initialize_classv_0010e470;
  *(undefined8 *)(this + 600) = 0x3f4ccccd41700000;
  *(undefined8 *)(this + 0x288) = uVar1;
  *(undefined8 *)(this + 0x290) = uVar2;
  uVar2 = _UNK_0010e998;
  uVar1 = __LC41;
  *(undefined8 *)(this + 0x268) = 0xbf00000045fa0000;
  *(undefined8 *)(this + 0x270) = 0x3f99999a41a00000;
  *(undefined8 *)(this + 0x298) = uVar1;
  *(undefined8 *)(this + 0x2a0) = uVar2;
  uVar2 = _UNK_0010e9a8;
  uVar1 = __LC52;
  *(undefined8 *)(this + 0x280) = 0x3f00000045fa0000;
  *(undefined8 *)(this + 0x278) = 0x40400000;
  *(undefined8 *)(this + 0x2b8) = 0x3f00000000000002;
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined8 *)(this + 0x2a8) = uVar1;
  *(undefined8 *)(this + 0x2b0) = uVar2;
  return;
}



/* AudioEffectChorus::_bind_methods() */

void AudioEffectChorus::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  long local_178;
  long local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  long *local_148;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  char *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  char *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar3 = PTR__LC53_0010e9b0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = "voices";
  local_58 = &local_128;
  local_120 = 0;
  uVar6 = (uint)&local_58;
  D_METHODP((char *)&local_158,(char ***)"set_voice_count",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,int>(set_voice_count);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar8 = local_148 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar7 = 0;
      local_148 = (long *)0x0;
      plVar8 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_158,(char ***)"get_voice_count",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,int>(get_voice_count);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  local_68 = 0;
  local_78 = puVar3;
  pcStack_70 = "delay_ms";
  auStack_50._0_8_ = &pcStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_158,(char ***)"set_voice_delay_ms",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,int,float>(set_voice_delay_ms);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  pcStack_70 = (char *)0x0;
  local_78 = "voice_idx";
  local_58 = &local_78;
  D_METHODP((char *)&local_158,(char ***)"get_voice_delay_ms",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float,int>(get_voice_delay_ms);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  local_88 = 0;
  local_98 = puVar3;
  pcStack_90 = "rate_hz";
  auStack_50._0_8_ = &pcStack_90;
  local_58 = &local_98;
  D_METHODP((char *)&local_158,(char ***)"set_voice_rate_hz",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,int,float>(set_voice_rate_hz);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  pcStack_70 = (char *)0x0;
  local_78 = "voice_idx";
  local_58 = &local_78;
  D_METHODP((char *)&local_158,(char ***)"get_voice_rate_hz",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float,int>(get_voice_rate_hz);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar8 = local_148 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar7 = 0;
      local_148 = (long *)0x0;
      plVar8 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = 0;
  local_b8 = puVar3;
  pcStack_b0 = "depth_ms";
  auStack_50._0_8_ = &pcStack_b0;
  local_58 = &local_b8;
  D_METHODP((char *)&local_158,(char ***)"set_voice_depth_ms",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,int,float>(set_voice_depth_ms);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  pcStack_70 = (char *)0x0;
  local_78 = "voice_idx";
  local_58 = &local_78;
  D_METHODP((char *)&local_158,(char ***)"get_voice_depth_ms",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float,int>(get_voice_depth_ms);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  local_c8 = 0;
  local_d8 = puVar3;
  pcStack_d0 = "level_db";
  auStack_50._0_8_ = &pcStack_d0;
  local_58 = &local_d8;
  D_METHODP((char *)&local_158,(char ***)"set_voice_level_db",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,int,float>(set_voice_level_db);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  pcStack_70 = (char *)0x0;
  local_78 = "voice_idx";
  local_58 = &local_78;
  D_METHODP((char *)&local_158,(char ***)"get_voice_level_db",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float,int>(get_voice_level_db);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  local_e8 = 0;
  local_f8 = puVar3;
  pcStack_f0 = "cutoff_hz";
  auStack_50._0_8_ = &pcStack_f0;
  local_58 = &local_f8;
  D_METHODP((char *)&local_158,(char ***)"set_voice_cutoff_hz",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,int,float>(set_voice_cutoff_hz);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  pcStack_70 = (char *)0x0;
  local_78 = "voice_idx";
  local_58 = &local_78;
  D_METHODP((char *)&local_158,(char ***)"get_voice_cutoff_hz",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float,int>(get_voice_cutoff_hz);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar8 = local_148 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar7 = 0;
      local_148 = (long *)0x0;
      plVar8 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_108 = 0;
  local_118 = puVar3;
  puStack_110 = &_LC54;
  auStack_50._0_8_ = &puStack_110;
  local_58 = &local_118;
  D_METHODP((char *)&local_158,(char ***)"set_voice_pan",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,int,float>(set_voice_pan);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar8 = local_148 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_148[-1];
      lVar7 = 0;
      local_148 = (long *)0x0;
      plVar8 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "voice_idx";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_158,(char ***)"get_voice_pan",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float,int>(get_voice_pan);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  local_78 = "amount";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_158,(char ***)"set_wet",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float>(set_wet);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  D_METHODP((char *)&local_158,(char ***)"get_wet",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float>(get_wet);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  local_78 = "amount";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_158,(char ***)"set_dry",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float>(set_dry);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  D_METHODP((char *)&local_158,(char ***)"get_dry",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<AudioEffectChorus,float>(get_dry);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_158);
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "1,4,1";
  local_180 = 0;
  local_188 = 0;
  local_150 = 5;
  String::parse_latin1((StrRange *)&local_188);
  local_190 = 0;
  local_158 = "voice_count";
  local_150 = 0xb;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,2,(StrRange *)&local_190,1,(StrRange *)&local_188,0x4006,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,-1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,1,0.01";
  local_180 = 0;
  local_188 = 0;
  local_150 = 8;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "dry";
  local_190 = 0;
  local_150 = 3;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,-1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,1,0.01";
  local_180 = 0;
  local_188 = 0;
  local_150 = 8;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "wet";
  local_190 = 0;
  local_150 = 3;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,-1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,50,0.01,suffix:ms";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/1/delay_ms";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,0);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if (((StringName::configured != '\0') &&
      ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_170 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0.1,20,0.1,suffix:Hz";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/1/rate_hz";
  local_190 = 0;
  local_150 = 0xf;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,0);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,20,0.01,suffix:ms";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/1/depth_ms";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,0);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "-60,24,0.1,suffix:dB";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/1/level_db";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,0);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "1,20500,1,suffix:Hz";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/1/cutoff_hz";
  local_190 = 0;
  local_150 = 0x11;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,0);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if (((StringName::configured != '\0') &&
      ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_170 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "-1,1,0.01";
  local_180 = 0;
  local_188 = 0;
  local_150 = 9;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/1/pan";
  local_190 = 0;
  local_150 = 0xb;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,0);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,50,0.01,suffix:ms";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/2/delay_ms";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if (((StringName::configured != '\0') &&
      ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_170 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0.1,20,0.1,suffix:Hz";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/2/rate_hz";
  local_190 = 0;
  local_150 = 0xf;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,20,0.01,suffix:ms";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/2/depth_ms";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if (((StringName::configured != '\0') &&
      ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_170 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "-60,24,0.1,suffix:dB";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/2/level_db";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "1,20500,1,suffix:Hz";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/2/cutoff_hz";
  local_190 = 0;
  local_150 = 0x11;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "-1,1,0.01";
  local_180 = 0;
  local_188 = 0;
  local_150 = 9;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/2/pan";
  local_190 = 0;
  local_150 = 0xb;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,1);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,50,0.01,suffix:ms";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/3/delay_ms";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,2);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if (((StringName::configured != '\0') &&
      ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_170 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0.1,20,0.1,suffix:Hz";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/3/rate_hz";
  local_190 = 0;
  local_150 = 0xf;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,2);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,20,0.01,suffix:ms";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/3/depth_ms";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,2);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "-60,24,0.1,suffix:dB";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/3/level_db";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,2);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "1,20500,1,suffix:Hz";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/3/cutoff_hz";
  local_190 = 0;
  local_150 = 0x11;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,2);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "-1,1,0.01";
  local_180 = 0;
  local_188 = 0;
  local_150 = 9;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/3/pan";
  local_190 = 0;
  local_150 = 0xb;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,2);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,50,0.01,suffix:ms";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/4/delay_ms";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,3);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if (((StringName::configured != '\0') &&
      ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_170 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0.1,20,0.1,suffix:Hz";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/4/rate_hz";
  local_190 = 0;
  local_150 = 0xf;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,3);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "0,20,0.01,suffix:ms";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/4/depth_ms";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,3);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "-60,24,0.1,suffix:dB";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/4/level_db";
  local_190 = 0;
  local_150 = 0x10;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,3);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "1,20500,1,suffix:Hz";
  local_180 = 0;
  local_188 = 0;
  local_150 = 0x13;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/4/cutoff_hz";
  local_190 = 0;
  local_150 = 0x11;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,3);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_170,true);
  _scs_create((char *)&local_178,true);
  local_158 = "-1,1,0.01";
  local_180 = 0;
  local_188 = 0;
  local_150 = 9;
  String::parse_latin1((StrRange *)&local_188);
  local_158 = "voice/4/pan";
  local_190 = 0;
  local_150 = 0xb;
  String::parse_latin1((StrRange *)&local_190);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,3,(StrRange *)&local_190,1,(StrRange *)&local_188,6,
             &local_180);
  local_168 = "AudioEffectChorus";
  local_198 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_168,(String *)&local_198,false);
  ClassDB::add_property
            ((StringName *)&local_168,(PropertyInfo *)&local_158,(StringName *)&local_178,
             (StringName *)&local_170,3);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((((StringName::configured != '\0') &&
       ((local_180 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_170 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioEffectChorus::instantiate() */

void AudioEffectChorus::instantiate(void)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  RefCounted *this;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  Object *pOVar12;
  RefCounted *pRVar13;
  Object *in_RSI;
  long *in_RDI;
  RefCounted *pRVar14;
  undefined8 *puVar15;
  CowData<AudioFrame> *this_00;
  byte bVar16;
  float fVar17;
  long local_40;
  
  bVar16 = 0;
  pRVar13 = (RefCounted *)0x0;
  this = (RefCounted *)operator_new(0x210,"");
  pRVar14 = this;
  for (lVar10 = 0x42; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined8 *)pRVar14 = 0;
    pRVar14 = pRVar14 + (ulong)bVar16 * -0x10 + 8;
  }
  RefCounted::RefCounted(this);
  *(code **)this = String::parse_latin1;
  StringName::StringName((StringName *)(this + 0x180),"_process",false);
  this[0x188] = (RefCounted)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_process_silence",false);
  *(undefined ***)this = &PTR__initialize_classv_0010e300;
  this[0x1a0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar3 = RefCounted::init_ref();
  if (cVar3 != '\0') {
    cVar3 = RefCounted::reference();
    if (cVar3 != '\0') {
      pRVar13 = this;
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this), cVar3 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  cVar3 = RefCounted::init_ref();
  pOVar1 = *(Object **)((Object *)pRVar13 + 0x1b0);
  if (cVar3 == '\0') {
    if (pOVar1 != (Object *)0x0) {
      *(undefined8 *)((Object *)pRVar13 + 0x1b0) = 0;
      cVar3 = RefCounted::unreference();
      goto joined_r0x00104fc5;
    }
  }
  else {
    pOVar12 = pOVar1;
    if (in_RSI != pOVar1) {
      *(Object **)((Object *)pRVar13 + 0x1b0) = in_RSI;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)((Object *)pRVar13 + 0x1b0) = 0;
      }
      pOVar12 = in_RSI;
      if (((pOVar1 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    cVar3 = RefCounted::unreference();
    pOVar1 = pOVar12;
joined_r0x00104fc5:
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  *(undefined1 (*) [16])((Object *)pRVar13 + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((Object *)pRVar13 + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((Object *)pRVar13 + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((Object *)pRVar13 + 0x200) = (undefined1  [16])0x0;
  plVar6 = (long *)AudioServer::get_singleton();
  fVar17 = (float)(**(code **)(*plVar6 + 0x188))(plVar6);
  iVar4 = (int)(fVar17 * __LC107);
  if (iVar4 < 1) {
    lVar10 = *(long *)((Object *)pRVar13 + 0x1c0);
    *(undefined8 *)((Object *)pRVar13 + 0x1c8) = 0;
    if (lVar10 == 0) {
      iVar4 = 1;
      CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame> *)((Object *)pRVar13 + 0x1c0));
      lVar10 = 8;
      local_40 = 1;
LAB_00105261:
      puVar9 = (undefined8 *)Memory::alloc_static(lVar10 + 0x10,false);
      if (puVar9 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        puVar15 = puVar9 + 2;
        *puVar9 = 1;
        puVar9[1] = 0;
        lVar10 = 0;
        *(undefined8 **)((Object *)pRVar13 + 0x1c0) = puVar15;
LAB_00104ed5:
        memset(puVar15 + lVar10,0,(local_40 - lVar10) * 8);
LAB_00104ee7:
        puVar15[-1] = local_40;
      }
      goto LAB_00104ef1;
    }
    lVar11 = *(long *)(lVar10 + -8);
    if (lVar11 != 1) {
      iVar4 = 1;
      local_40 = 1;
LAB_00104df5:
      this_00 = (CowData<AudioFrame> *)((Object *)pRVar13 + 0x1c0);
      CowData<AudioFrame>::_copy_on_write(this_00);
      uVar7 = local_40 * 8 - 1;
      uVar7 = uVar7 >> 1 | uVar7;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 >> 8 | uVar7;
      uVar7 = uVar7 >> 0x10 | uVar7;
      uVar7 = uVar7 >> 0x20 | uVar7;
      lVar10 = uVar7 + 1;
      if (lVar11 * 8 == 0) {
        if (local_40 <= lVar11) {
LAB_0010517d:
          iVar5 = CowData<AudioFrame>::_realloc(this_00,lVar10);
          if (iVar5 == 0) {
            if (*(long *)((Object *)pRVar13 + 0x1c0) == 0) {
              instantiate();
              return;
            }
            *(long *)(*(long *)((Object *)pRVar13 + 0x1c0) + -8) = local_40;
          }
          goto LAB_00104ef1;
        }
LAB_001051a6:
        if (lVar11 == 0) goto LAB_00105261;
        iVar5 = CowData<AudioFrame>::_realloc(this_00,lVar10);
        if (iVar5 != 0) goto LAB_00104ef1;
      }
      else {
        uVar8 = lVar11 * 8 - 1;
        uVar8 = uVar8 | uVar8 >> 1;
        uVar8 = uVar8 | uVar8 >> 2;
        uVar8 = uVar8 | uVar8 >> 4;
        uVar8 = uVar8 | uVar8 >> 8;
        uVar8 = uVar8 | uVar8 >> 0x10;
        uVar8 = uVar8 | uVar8 >> 0x20;
        if (local_40 <= lVar11) {
          if (uVar8 != uVar7) goto LAB_0010517d;
          lVar10 = *(long *)((Object *)pRVar13 + 0x1c0);
          if (lVar10 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          *(long *)(lVar10 + -8) = local_40;
          goto LAB_00104f03;
        }
        if (uVar8 != uVar7) goto LAB_001051a6;
      }
      puVar15 = *(undefined8 **)((Object *)pRVar13 + 0x1c0);
      if (puVar15 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar10 = puVar15[-1];
      if (lVar10 < local_40) goto LAB_00104ed5;
      goto LAB_00104ee7;
    }
    local_40 = 1;
  }
  else {
    bVar16 = 0;
    do {
      bVar16 = bVar16 + 1;
      iVar4 = iVar4 >> 1;
    } while (iVar4 != 0);
    *(undefined4 *)((Object *)pRVar13 + 0x1c8) = 0;
    iVar4 = 1 << (bVar16 & 0x1f);
    local_40 = (long)iVar4;
    *(int *)((Object *)pRVar13 + 0x1cc) = iVar4 + -1;
    if (local_40 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      goto LAB_00105028;
    }
    lVar10 = *(long *)((Object *)pRVar13 + 0x1c0);
    if (lVar10 == 0) {
      if (local_40 == 0) goto LAB_00105028;
      uVar7 = local_40 * 8 - 1;
      uVar7 = uVar7 >> 1 | uVar7;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 >> 8 | uVar7;
      uVar7 = uVar7 >> 0x10 | uVar7;
      lVar10 = (uVar7 >> 0x20 | uVar7) + 1;
      CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame> *)((Object *)pRVar13 + 0x1c0));
      goto LAB_00105261;
    }
    lVar11 = *(long *)(lVar10 + -8);
    if (local_40 != lVar11) {
      if (local_40 == 0) {
        LOCK();
        plVar6 = (long *)(lVar10 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          lVar10 = *(long *)((Object *)pRVar13 + 0x1c0);
          *(undefined8 *)((Object *)pRVar13 + 0x1c0) = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
        else {
          *(undefined8 *)((Object *)pRVar13 + 0x1c0) = 0;
        }
        goto LAB_00105028;
      }
      goto LAB_00104df5;
    }
LAB_00104ef1:
    if (iVar4 == 0) goto LAB_00105028;
    lVar10 = *(long *)((Object *)pRVar13 + 0x1c0);
    local_40 = (long)iVar4;
  }
LAB_00104f03:
  lVar11 = 0;
  do {
    if (lVar10 == 0) {
      lVar10 = 0;
LAB_00104f45:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar11,lVar10,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar10 = *(long *)(lVar10 + -8);
    if (lVar10 <= lVar11) goto LAB_00104f45;
    CowData<AudioFrame>::_copy_on_write((CowData<AudioFrame> *)((Object *)pRVar13 + 0x1c0));
    lVar10 = *(long *)((Object *)pRVar13 + 0x1c0);
    *(undefined8 *)(lVar10 + lVar11 * 8) = 0;
    lVar11 = lVar11 + 1;
  } while (local_40 != lVar11);
LAB_00105028:
  *in_RDI = 0;
  lVar10 = __dynamic_cast(pRVar13,&Object::typeinfo,&AudioEffectInstance::typeinfo,0);
  if (lVar10 != 0) {
    *in_RDI = lVar10;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *in_RDI = 0;
    }
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)pRVar13), cVar3 != '\0')) {
    (**(code **)(*(long *)pRVar13 + 0x140))(pRVar13);
    Memory::free_static(pRVar13,false);
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* AudioEffectChorusInstance::is_class_ptr(void*) const */

uint __thiscall
AudioEffectChorusInstance::is_class_ptr(AudioEffectChorusInstance *this,void *param_1)

{
  return (uint)CONCAT71(0x10e8,(undefined4 *)param_1 ==
                               &AudioEffectInstance::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioEffectChorusInstance::_getv(StringName const&, Variant&) const */

undefined8 AudioEffectChorusInstance::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioEffectChorusInstance::_setv(StringName const&, Variant const&) */

undefined8 AudioEffectChorusInstance::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioEffectChorusInstance::_validate_propertyv(PropertyInfo&) const */

void AudioEffectChorusInstance::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioEffectChorusInstance::_property_can_revertv(StringName const&) const */

undefined8 AudioEffectChorusInstance::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioEffectChorusInstance::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioEffectChorusInstance::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioEffectChorusInstance::_notificationv(int, bool) */

void AudioEffectChorusInstance::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioEffectChorus::is_class_ptr(void*) const */

uint __thiscall AudioEffectChorus::is_class_ptr(AudioEffectChorus *this,void *param_1)

{
  return (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &AudioEffect::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioEffectChorus::_getv(StringName const&, Variant&) const */

undefined8 AudioEffectChorus::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioEffectChorus::_setv(StringName const&, Variant const&) */

undefined8 AudioEffectChorus::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioEffectChorus::_property_can_revertv(StringName const&) const */

undefined8 AudioEffectChorus::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioEffectChorus::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioEffectChorus::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioEffectChorus::_notificationv(int, bool) */

void AudioEffectChorus::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<float>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<float>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<float>::get_argument_meta(int) const */

byte __thiscall MethodBindT<float>::get_argument_meta(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindTRC<float, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<float,int>::_gen_argument_type(MethodBindTRC<float,int> *this,int param_1)

{
  return 3 - (uint)(param_1 == 0);
}



/* MethodBindTRC<float, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<float,int>::get_argument_meta(MethodBindTRC<float,int> *this,int param_1)

{
  if (-1 < param_1) {
    return -(param_1 == 0) & 3;
  }
  return 9;
}



/* MethodBindT<int, float>::_gen_argument_type(int) const */

int __thiscall MethodBindT<int,float>::_gen_argument_type(MethodBindT<int,float> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 3 - (uint)(param_1 == 0);
  if (1 < (uint)param_1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* MethodBindT<int, float>::get_argument_meta(int) const */

char __thiscall MethodBindT<int,float>::get_argument_meta(MethodBindT<int,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if (param_1 != 0) {
    cVar1 = (param_1 == 1) * '\t';
  }
  return cVar1;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e1a0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e1a0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e650;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e650;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e6b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e6b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e710;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e710;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e770;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e770;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e7d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e7d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e830;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e830;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CowData<AudioFrame>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<AudioFrame>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AudioEffectChorus::_bind_methods() [clone .cold] */

void AudioEffectChorus::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioEffectChorus::instantiate() [clone .cold] */

void AudioEffectChorus::instantiate(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AudioEffectChorus::~AudioEffectChorus() */

void __thiscall AudioEffectChorus::~AudioEffectChorus(AudioEffectChorus *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if ((bVar1) && (*(long *)(this + 0x240) != 0)) {
    StringName::unref();
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* AudioEffectChorus::~AudioEffectChorus() */

void __thiscall AudioEffectChorus::~AudioEffectChorus(AudioEffectChorus *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if ((bVar1) && (*(long *)(this + 0x240) != 0)) {
    StringName::unref();
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2c8);
  return;
}



/* AudioEffectChorusInstance::~AudioEffectChorusInstance() */

void __thiscall
AudioEffectChorusInstance::~AudioEffectChorusInstance(AudioEffectChorusInstance *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e300;
  if (*(long *)(this + 0x1c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1c0);
      *(undefined8 *)(this + 0x1c0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar5) {
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105f3c;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00105f3c:
  *(undefined ***)this = &PTR__initialize_classv_0010e1a0;
  Object::~Object((Object *)this);
  return;
}



/* AudioEffectChorusInstance::~AudioEffectChorusInstance() */

void __thiscall
AudioEffectChorusInstance::~AudioEffectChorusInstance(AudioEffectChorusInstance *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e300;
  if (*(long *)(this + 0x1c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1c0);
      *(undefined8 *)(this + 0x1c0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar5) {
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106050;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00106050:
  *(undefined ***)this = &PTR__initialize_classv_0010e1a0;
  Object::~Object((Object *)this);
  operator_delete(this,0x210);
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00106183:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106183;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001061ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001061ee:
  return &_get_class_namev()::_class_name_static;
}



/* AudioEffectChorusInstance::_get_class_namev() const */

undefined8 * AudioEffectChorusInstance::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00106273:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106273;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioEffectChorusInstance");
      goto LAB_001062de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioEffectChorusInstance");
LAB_001062de:
  return &_get_class_namev()::_class_name_static;
}



/* AudioEffectChorus::_get_class_namev() const */

undefined8 * AudioEffectChorus::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00106363:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106363;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioEffectChorus");
      goto LAB_001063ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioEffectChorus");
LAB_001063ce:
  return &_get_class_namev()::_class_name_static;
}



/* AudioEffectChorusInstance::get_class() const */

void AudioEffectChorusInstance::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffectChorus::get_class() const */

void AudioEffectChorus::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_001066ff;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001066ff:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001067b3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00106863;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00106863:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_001067b3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001067b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffectChorusInstance::is_class(String const&) const */

undefined8 __thiscall
AudioEffectChorusInstance::is_class(AudioEffectChorusInstance *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010699f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010699f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00106a53;
  }
  cVar6 = String::operator==(param_1,"AudioEffectChorusInstance");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00106b13;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00106b13:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00106a53;
    }
    cVar6 = String::operator==(param_1,"AudioEffectInstance");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00106bbc;
    }
  }
LAB_00106a53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106bbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00106d0c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00106d0c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00106e8c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00106e8c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffectChorus::_validate_propertyv(PropertyInfo&) const */

void __thiscall
AudioEffectChorus::_validate_propertyv(AudioEffectChorus *this,PropertyInfo *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = String::begins_with((char *)(param_1 + 8));
  if (cVar4 == '\0') goto LAB_00106f1b;
  String::get_slice((char *)&local_38,(int)(param_1 + 8));
  iVar5 = String::to_int();
  lVar3 = local_38;
  if (local_38 == 0) {
LAB_00106f76:
    iVar2 = *(int *)(this + 0x2b8);
  }
  else {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00106f76;
    local_38 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    iVar2 = *(int *)(this + 0x2b8);
  }
  if (iVar2 < iVar5) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00106f1b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001072c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001072c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001072e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001072e6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00107878:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107878;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107895;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107895:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffectInstance::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioEffectInstance::_get_property_listv(AudioEffectInstance *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioEffectInstance";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioEffectInstance";
  local_98 = 0;
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00107cc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107cc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107ce5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107ce5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioEffectInstance",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffectChorusInstance::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AudioEffectChorusInstance::_get_property_listv
          (AudioEffectChorusInstance *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AudioEffectInstance::_get_property_listv((AudioEffectInstance *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioEffectChorusInstance";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioEffectChorusInstance";
  local_98 = 0;
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00108118:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108118;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108135;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108135:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioEffectChorusInstance",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AudioEffectInstance::_get_property_listv((AudioEffectInstance *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffect::is_class(String const&) const */

undefined8 __thiscall AudioEffect::is_class(AudioEffect *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010846f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010846f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00108523;
  }
  cVar6 = String::operator==(param_1,"AudioEffect");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_001085e3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_001085e3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00108523;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010868c;
    }
  }
LAB_00108523:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010868c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffectChorus::is_class(String const&) const */

undefined8 __thiscall AudioEffectChorus::is_class(AudioEffectChorus *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010870f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010870f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_001087c3;
  }
  cVar5 = String::operator==(param_1,"AudioEffectChorus");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = AudioEffect::is_class((AudioEffect *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001087c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffect::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AudioEffect::_get_property_listv(AudioEffect *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioEffect";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioEffect";
  local_98 = 0;
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00108998:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108998;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001089b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001089b5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioEffect",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffectChorus::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioEffectChorus::_get_property_listv(AudioEffectChorus *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AudioEffect::_get_property_listv((AudioEffect *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioEffectChorus";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioEffectChorus";
  local_98 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00108de8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108de8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108e05;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108e05:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioEffectChorus",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AudioEffect::_get_property_listv((AudioEffect *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* AudioEffectChorusInstance::_initialize_classv() */

void AudioEffectChorusInstance::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AudioEffectInstance::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00112010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AudioEffectInstance";
      local_70 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00112008 != RefCounted::_bind_methods) {
        AudioEffectInstance::_bind_methods();
      }
      AudioEffectInstance::initialize_class()::initialized = '\x01';
    }
    local_58 = "AudioEffectInstance";
    local_68 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioEffectChorusInstance";
    local_70 = 0;
    local_50 = 0x19;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00109579;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109670:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109670;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00109579:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00109829;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109920:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109920;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00109829:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBind* create_method_bind<AudioEffectChorus, int>(void (AudioEffectChorus::*)(int)) */

MethodBind * create_method_bind<AudioEffectChorus,int>(_func_void_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e650;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioEffectChorus";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AudioEffectChorus, int>(int (AudioEffectChorus::*)() const) */

MethodBind * create_method_bind<AudioEffectChorus,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e6b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioEffectChorus";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AudioEffectChorus, int, float>(void (AudioEffectChorus::*)(int,
   float)) */

MethodBind * create_method_bind<AudioEffectChorus,int,float>(_func_void_int_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e710;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AudioEffectChorus";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AudioEffectChorus, float, int>(float (AudioEffectChorus::*)(int)
   const) */

MethodBind * create_method_bind<AudioEffectChorus,float,int>(_func_float_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_float_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e770;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioEffectChorus";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AudioEffectChorus, float>(void (AudioEffectChorus::*)(float)) */

MethodBind * create_method_bind<AudioEffectChorus,float>(_func_void_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e7d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AudioEffectChorus";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AudioEffectChorus, float>(float (AudioEffectChorus::*)() const) */

MethodBind * create_method_bind<AudioEffectChorus,float>(_func_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e830;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioEffectChorus";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioEffectChorus::_initialize_classv() */

void AudioEffectChorus::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AudioEffect::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00112010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AudioEffect";
      local_70 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00112018 != Resource::_bind_methods) {
        AudioEffect::_bind_methods();
      }
      AudioEffect::initialize_class()::initialized = '\x01';
    }
    local_58 = "AudioEffect";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioEffectChorus";
    local_70 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<AudioFrame>::_realloc(long) */

undefined8 __thiscall CowData<AudioFrame>::_realloc(CowData<AudioFrame> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Removing unreachable block (ram,0x0010a7d8) */
/* WARNING: Removing unreachable block (ram,0x0010a96d) */
/* WARNING: Removing unreachable block (ram,0x0010a979) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar7;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ab70;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      fVar7 = (float)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,fVar7);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010ab70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ae68;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar4 = (float)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar4;
LAB_0010ae68:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b057;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar4 = (float)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar4;
LAB_0010b057:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b3ec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0010b252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010b3ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b5f2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0010b45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010b5f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float,int>::validated_call
          (MethodBindTRC<float,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b64e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar4 = (float)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar4;
LAB_0010b64e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,int>::ptrcall
          (MethodBindTRC<float,int> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b84c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar4 = (float)(*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar4;
LAB_0010b84c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bbe1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x0010ba69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010bbe1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bdd1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0010bc57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010bdd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bea0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010bea0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c104;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar2;
LAB_0010c104:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c2e3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar2;
LAB_0010c2e3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c672;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010c672:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c874;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c6db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010c874:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  float fVar13;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c9b8;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ca00;
LAB_0010c9f0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ca00:
        uVar7 = 4;
        goto LAB_0010c9ad;
      }
      if (in_R8D == 1) goto LAB_0010c9f0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC128;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    fVar13 = (float)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,fVar13);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0010c9ad:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010c9b8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010ccfd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010cd60;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010cd60:
      uVar6 = 4;
LAB_0010ccfd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010cc7b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010cc7b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC130;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0010ccd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010ce56;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var4,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010ce56:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,float>
               (__UnexistingClass *param_1,_func_void_int_float *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_0010d195;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0010d1cd:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0010d0f5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0010d1e8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0010d1cd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010d1e8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0010d0f5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC132;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC128;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010d17f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_0010d195:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010d286;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,float>
            (p_Var4,(_func_void_int_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010d286:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010d58d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010d5f0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010d5f0:
      uVar6 = 4;
LAB_0010d58d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010d50b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010d50b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC128;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010d566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010d656;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var4,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010d656:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_0010d897;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010d990:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010d990;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_0010d897:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<float, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010db95;
  }
  local_70 = 0;
  local_68 = &_LC3;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 3;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010dca7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010dca7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010db95:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar7;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar7 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar7 = 0;
  *(undefined4 *)(pPVar7 + 0x18) = 0;
  *(undefined8 *)(pPVar7 + 0x20) = 0;
  *(undefined4 *)(pPVar7 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar7 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_0010dd64;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010de60:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010de60;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar7 = local_68._0_4_;
  if (*(long *)(pPVar7 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(pPVar7 + 8) = uVar5;
  }
  if (*(long *)(pPVar7 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar7 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(pPVar7 + 0x18) = local_50;
  if (*(long *)(pPVar7 + 0x20) == local_48) {
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 0x20));
    *(long *)(pPVar7 + 0x20) = local_48;
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_0010dd64:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioEffectChorusInstance::~AudioEffectChorusInstance() */

void __thiscall
AudioEffectChorusInstance::~AudioEffectChorusInstance(AudioEffectChorusInstance *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioEffectChorus::~AudioEffectChorus() */

void __thiscall AudioEffectChorus::~AudioEffectChorus(AudioEffectChorus *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


