
/* CowData<EQ::Band>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<EQ::Band>::_copy_on_write(CowData<EQ::Band> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* EQ::BandProcess::BandProcess() */

void __thiscall EQ::BandProcess::BandProcess(BandProcess *this)

{
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EQ::recalculate_band_coefficients() */

void __thiscall EQ::recalculate_band_coefficients(EQ *this)

{
  CowData<EQ::Band> *this_00;
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double local_60;
  double local_48;
  double local_40 [2];
  
  lVar8 = -1;
  lVar4 = 0;
  lVar5 = *(long *)(this + 8);
  do {
    if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + -8), lVar6 <= lVar4)) {
      return;
    }
    lVar7 = lVar4 * 0x10;
    dVar12 = (double)*(float *)(lVar5 + lVar7);
    if (lVar4 == 0) {
      if (lVar6 == 1) {
        lVar6 = 1;
        lVar3 = 1;
        goto LAB_00100636;
      }
      fVar9 = logf(*(float *)(lVar5 + 0x10));
      dVar10 = log(dVar12);
      dVar10 = (double)fVar9 / __LC6 - dVar10 / __LC6;
      local_60 = _LC11;
    }
    else if (lVar6 + -1 == lVar4) {
      dVar10 = log(dVar12);
      dVar10 = dVar10 / __LC6;
      lVar3 = lVar8;
      if (lVar6 <= lVar8) goto LAB_00100636;
      fVar9 = logf(*(float *)(lVar5 + lVar8 * 0x10));
      local_60 = _LC11;
      dVar10 = dVar10 - (double)fVar9 / __LC6;
    }
    else {
      uVar2 = (int)lVar4 + 1;
      lVar3 = (long)(int)uVar2;
      if (lVar6 <= (int)uVar2) {
LAB_00100636:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      fVar9 = logf(*(float *)(lVar5 + (ulong)uVar2 * 0x10));
      dVar10 = log(dVar12);
      dVar10 = dVar10 / __LC6;
      dVar13 = (double)fVar9 / __LC6;
      dVar11 = log(dVar12);
      dVar11 = dVar11 / __LC6;
      lVar3 = lVar8;
      if (lVar6 <= lVar8) goto LAB_00100636;
      fVar9 = logf(*(float *)(lVar5 + lVar8 * 0x10));
      local_60 = _LC11;
      dVar10 = ((dVar11 - (double)fVar9 / __LC6) + (dVar13 - dVar10)) * _LC11;
    }
    _LC11 = local_60;
    dVar10 = pow(_LC12,dVar10 * local_60);
    dVar10 = round(dVar12 / dVar10);
    fVar9 = *(float *)(this + 0x10);
    sincos((dVar10 * _LC13) / (double)fVar9,local_40,&local_48);
    dVar10 = local_48;
    dVar12 = cos((_LC13 * dVar12) / (double)fVar9);
    dVar13 = local_40[0] * local_40[0];
    dVar15 = dVar12 * dVar12 * _LC14;
    dVar14 = dVar10 * _LC15 * dVar12;
    dVar11 = ((dVar15 - dVar14) + _LC14) - dVar13;
    if (dVar11 + dVar11 == 0.0) {
LAB_001005e0:
      _err_print_error("recalculate_band_coefficients","servers/audio/effects/eq_filter.cpp",0x6c,
                       "Condition \"roots == 0\" is true. Continuing.",0,0);
      lVar5 = *(long *)(this + 8);
    }
    else {
      dVar14 = (((_LC15 * dVar10 * dVar10 + dVar15) - dVar14) - _LC14) + dVar13;
      dVar10 = dVar14 * dVar14 -
               (((dVar12 * dVar12 * _LC17 - dVar10 * __LC18 * dVar12) + _LC17) - dVar13 * __LC19) *
               dVar11 * __LC20;
      if (dVar10 < 0.0) goto LAB_001005e0;
      this_00 = (CowData<EQ::Band> *)(this + 8);
      dVar10 = (SQRT(dVar10) - dVar14) / (dVar11 + dVar11);
      dVar11 = (local_60 - dVar10) * local_60;
      CowData<EQ::Band>::_copy_on_write(this_00);
      lVar5 = *(long *)(this + 8);
      *(float *)(lVar5 + 4 + lVar7) = (float)(dVar11 + dVar11);
      if (lVar5 == 0) {
LAB_00100538:
        lVar5 = 0;
LAB_0010053b:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar4,lVar5,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar5 = *(long *)(lVar5 + -8);
      if (lVar5 <= lVar4) goto LAB_0010053b;
      CowData<EQ::Band>::_copy_on_write(this_00);
      lVar5 = *(long *)(this + 8);
      *(float *)(lVar5 + 8 + lVar7) = (float)(dVar10 + dVar10);
      if (lVar5 == 0) goto LAB_00100538;
      lVar5 = *(long *)(lVar5 + -8);
      if (lVar5 <= lVar4) goto LAB_0010053b;
      CowData<EQ::Band>::_copy_on_write(this_00);
      lVar5 = *(long *)(this + 8);
      *(float *)(lVar5 + 0xc + lVar7) = (float)((dVar10 + local_60 + dVar10 + local_60) * dVar12);
    }
    lVar4 = lVar4 + 1;
    lVar8 = lVar8 + 1;
  } while( true );
}



/* EQ::get_band_count() const */

undefined4 __thiscall EQ::get_band_count(EQ *this)

{
  if (*(long *)(this + 8) != 0) {
    return *(undefined4 *)(*(long *)(this + 8) + -8);
  }
  return 0;
}



/* EQ::get_band_frequency(int) */

undefined4 __thiscall EQ::get_band_frequency(EQ *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100709;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + lVar2 * 0x10);
    }
    goto LAB_00100709;
  }
  lVar3 = 0;
LAB_00100709:
  _err_print_index_error
            ("get_band_frequency","servers/audio/effects/eq_filter.cpp",0xa8,lVar2,lVar3,"p_band",
             "band.size()","",false,false);
  return 0;
}



/* EQ::set_mix_rate(float) */

void __thiscall EQ::set_mix_rate(EQ *this,float param_1)

{
  *(float *)(this + 0x10) = param_1;
  recalculate_band_coefficients(this);
  return;
}



/* EQ::get_band_processor(int) const */

undefined1 (*) [16] EQ::get_band_processor(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  long lVar3;
  undefined4 in_register_0000003c;
  undefined1 (*pauVar4) [16];
  long lVar5;
  
  pauVar4 = (undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1);
  lVar3 = *(long *)(in_RSI + 8);
  lVar2 = (long)in_EDX;
  *(undefined4 *)pauVar4[2] = 0;
  *pauVar4 = (undefined1  [16])0x0;
  pauVar4[1] = (undefined1  [16])0x0;
  if (in_EDX < 0) {
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + -8);
      goto LAB_001007c9;
    }
  }
  else if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + -8);
    if (lVar2 < lVar5) {
      lVar3 = lVar3 + lVar2 * 0x10;
      uVar1 = *(undefined4 *)(lVar3 + 0xc);
      *(undefined8 *)*pauVar4 = *(undefined8 *)(lVar3 + 4);
      *(undefined4 *)(*pauVar4 + 8) = uVar1;
      return pauVar4;
    }
    goto LAB_001007c9;
  }
  lVar5 = 0;
LAB_001007c9:
  _err_print_index_error
            ("get_band_processor","servers/audio/effects/eq_filter.cpp",0xbd,lVar2,lVar5,"p_band",
             "band.size()","",false,false);
  return pauVar4;
}



/* EQ::EQ() */

void __thiscall EQ::EQ(EQ *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x472c4400;
  return;
}



/* EQ::~EQ() */

void __thiscall EQ::~EQ(EQ *this)

{
  long *plVar1;
  long lVar2;
  
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



/* EQ::set_bands(Vector<float> const&) */

void __thiscall EQ::set_bands(EQ *this,Vector *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
  }
  CowData<EQ::Band>::resize<false>((CowData<EQ::Band> *)(this + 8),lVar4);
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = 0;
  while( true ) {
    if ((lVar4 == 0) || (*(long *)(lVar4 + -8) <= lVar3)) {
      recalculate_band_coefficients(this);
      return;
    }
    uVar1 = *(undefined4 *)(lVar4 + lVar3 * 4);
    if (*(long *)(this + 8) == 0) break;
    lVar4 = *(long *)(*(long *)(this + 8) + -8);
    if (lVar4 <= lVar3) goto LAB_00100918;
    CowData<EQ::Band>::_copy_on_write((CowData<EQ::Band> *)(this + 8));
    *(undefined4 *)(lVar3 * 0x10 + *(long *)(this + 8)) = uVar1;
    lVar4 = *(long *)(param_1 + 8);
    lVar3 = lVar3 + 1;
  }
  lVar4 = 0;
LAB_00100918:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar3,lVar4,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* Vector<EQ::Band>::push_back(EQ::Band) [clone .isra.0] */

void Vector<EQ::Band>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<EQ::Band>::resize<false>((CowData<EQ::Band> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<EQ::Band>::_copy_on_write((CowData<EQ::Band> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* EQ::set_preset_band_mode(EQ::Preset) */

void __thiscall EQ::set_preset_band_mode(EQ *this,undefined4 param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  CowData<EQ::Band>::resize<false>((CowData<EQ::Band> *)(this + 8),0);
  switch(param_2) {
  case 0:
    pdVar2 = (double *)&set_preset_band_mode(EQ::Preset)::bands;
    do {
      pdVar1 = pdVar2 + 1;
      Vector<EQ::Band>::push_back((float)*pdVar2,0,this);
      pdVar2 = pdVar1;
    } while (pdVar1 != (double *)&_LC6);
    recalculate_band_coefficients(this);
    return;
  case 1:
    pdVar2 = (double *)&set_preset_band_mode(EQ::Preset)::bands;
    do {
      pdVar1 = pdVar2 + 1;
      Vector<EQ::Band>::push_back((float)*pdVar2,0,this);
      pdVar2 = pdVar1;
    } while (pdVar1 != (double *)&set_preset_band_mode(EQ::Preset)::bands);
    recalculate_band_coefficients(this);
    return;
  case 2:
    pdVar2 = (double *)&set_preset_band_mode(EQ::Preset)::bands;
    do {
      pdVar1 = pdVar2 + 1;
      Vector<EQ::Band>::push_back((float)*pdVar2,0,this);
      pdVar2 = pdVar1;
    } while (pdVar1 != (double *)&DAT_001013b0);
    recalculate_band_coefficients(this);
    return;
  case 3:
    pdVar2 = (double *)&set_preset_band_mode(EQ::Preset)::bands;
    do {
      pdVar1 = pdVar2 + 1;
      Vector<EQ::Band>::push_back((float)*pdVar2,0,this);
      pdVar2 = pdVar1;
    } while (pdVar1 != (double *)&DAT_00101348);
    recalculate_band_coefficients(this);
    return;
  case 4:
    pdVar2 = (double *)&set_preset_band_mode(EQ::Preset)::bands;
    do {
      pdVar1 = pdVar2 + 1;
      Vector<EQ::Band>::push_back((float)*pdVar2,0,this);
      pdVar2 = pdVar1;
    } while (pdVar1 != (double *)&DAT_00101298);
  }
  recalculate_band_coefficients(this);
  return;
}



/* CowData<EQ::Band>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EQ::Band>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EQ::Band>::_realloc(long) */

undefined8 __thiscall CowData<EQ::Band>::_realloc(CowData<EQ::Band> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<EQ::Band>::resize<false>(long) */

undefined8 __thiscall CowData<EQ::Band>::resize<false>(CowData<EQ::Band> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00101110:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x10 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00101110;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00101021;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00101021:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


