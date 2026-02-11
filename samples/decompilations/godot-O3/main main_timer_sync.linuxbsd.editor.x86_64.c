
/* MainTimerSync::DeltaSmoother::update_refresh_rate_estimator(long) [clone .part.0] */

void __thiscall
MainTimerSync::DeltaSmoother::update_refresh_rate_estimator(DeltaSmoother *this,long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = param_1 + *(long *)(this + 0x50);
  *(long *)(this + 0x50) = lVar5;
  dVar6 = _LC0;
  if (*(int *)(this + 0x58) + 1 < 0x3c) {
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    return;
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  dVar6 = round(dVar6 / (double)((SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5),8) + lVar5 >>
                                 5) - (lVar5 >> 0x3f)));
  iVar1 = *(int *)(this + 0x34);
  iVar2 = (int)dVar6;
  if (iVar1 == 0) {
    if (iVar2 < 0x32) {
      return;
    }
    *(int *)(this + 0x34) = iVar2;
    iVar4 = *(int *)(this + 0x38);
  }
  else {
    iVar4 = *(int *)(this + 0x38);
    if (iVar2 != iVar1) {
      if (iVar2 < iVar1) {
        if (iVar2 != iVar1 + -1) {
          iVar2 = *(int *)(this + 0x40);
          iVar3 = iVar2 + 1;
          *(int *)(this + 0x40) = iVar3;
          if ((this[0x4c] != (DeltaSmoother)0x0) && (10 < iVar4)) {
            return;
          }
          iVar2 = iVar2 + 8;
          if (-1 < iVar3) {
            iVar2 = iVar3;
          }
          if (iVar2 >> 3 <= iVar4) {
            return;
          }
          if (iVar3 < 3) {
            return;
          }
          *(int *)(this + 0x34) = iVar1 + -1;
          *(undefined8 *)(this + 0x38) = 0;
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined4 *)(this + 0x48) = 0;
          this[0x4c] = (DeltaSmoother)0x0;
          return;
        }
        iVar1 = *(int *)(this + 0x48);
        if (iVar4 < 2) {
          iVar4 = 2;
        }
        *(int *)(this + 0x48) = iVar1 + 1;
        if (iVar1 + 1 <= iVar4) {
          return;
        }
      }
      else {
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        if (iVar2 == iVar1 + 1) {
          iVar1 = *(int *)(this + 0x44);
          *(int *)(this + 0x44) = iVar1 + 1;
          if (iVar1 + 1 <= iVar4) {
            return;
          }
        }
        else {
          iVar3 = *(int *)(this + 0x3c);
          *(int *)(this + 0x3c) = iVar3 + 1;
          if (iVar3 + 1 <= iVar4) {
            return;
          }
          iVar2 = iVar2 - iVar1 >> 1;
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar1;
        }
      }
      *(int *)(this + 0x34) = iVar2;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x48) = 0;
      this[0x4c] = (DeltaSmoother)0x0;
      return;
    }
  }
  iVar4 = iVar4 + 1;
  *(int *)(this + 0x38) = iVar4;
  if (this[0x4c] == (DeltaSmoother)0x0) {
    if (2 < iVar4) {
      this[0x4c] = (DeltaSmoother)0x1;
      *(long *)this = (long)(int)(1000000 / (long)iVar2);
      return;
    }
  }
  else if (iVar4 == 0x14) {
    this[0x4d] = (DeltaSmoother)0x1;
    return;
  }
  return;
}



/* MainFrameTime::clamp_process_step(double, double) */

void __thiscall MainFrameTime::clamp_process_step(MainFrameTime *this,double param_1,double param_2)

{
  if (*(double *)this < param_1) {
    *(double *)this = param_1;
    return;
  }
  if (param_2 < *(double *)this) {
    *(double *)this = param_2;
  }
  return;
}



/* MainTimerSync::DeltaSmoother::update_refresh_rate_estimator(long) */

void __thiscall
MainTimerSync::DeltaSmoother::update_refresh_rate_estimator(DeltaSmoother *this,long param_1)

{
  if (this[0x4d] == (DeltaSmoother)0x0) {
    update_refresh_rate_estimator(this,param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainTimerSync::DeltaSmoother::fps_allows_smoothing(long) */

DeltaSmoother __thiscall
MainTimerSync::DeltaSmoother::fps_allows_smoothing(DeltaSmoother *this,long param_1)

{
  DeltaSmoother DVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar2 = *(long *)(this + 0x18);
  lVar3 = param_1 + *(long *)(this + 0x10);
  *(long *)(this + 0x10) = lVar3;
  *(long *)(this + 0x18) = lVar2 + 1;
  if (lVar2 + 1 != *(long *)(this + 0x20)) {
    return this[0x30];
  }
  DVar1 = this[0x4c];
  if (DVar1 != (DeltaSmoother)0x0) {
    lVar4 = lVar3 - *(long *)(this + 0x28);
    lVar2 = lVar4 + 0x3f;
    if (-1 < lVar4) {
      lVar2 = lVar4;
    }
    if (lVar2 >> 6 != 0) {
      dVar5 = (_LC0 / (double)(lVar2 >> 6)) / (double)*(int *)(this + 0x34);
      if ((dVar5 <= __LC1) || (_LC2 <= dVar5)) {
        this[0x30] = (DeltaSmoother)0x0;
        DVar1 = (DeltaSmoother)0x0;
      }
      else {
        this[0x30] = (DeltaSmoother)0x1;
      }
      goto LAB_00100294;
    }
  }
  DVar1 = this[0x30];
LAB_00100294:
  *(long *)(this + 0x28) = lVar3;
  *(long *)(this + 0x20) = *(long *)(this + 0x20) + 0x40;
  return DVar1;
}



/* MainTimerSync::DeltaSmoother::smooth_delta(long) */

long __thiscall MainTimerSync::DeltaSmoother::smooth_delta(DeltaSmoother *this,long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  DeltaSmoother *this_00;
  
  OS::get_singleton();
  cVar1 = OS::is_delta_smoothing_enabled();
  if ((((cVar1 != '\0') && (lVar3 = Engine::get_singleton(), *(char *)(lVar3 + 0xc0) == '\0')) &&
      (iVar2 = (**(code **)(*DisplayServer::singleton + 0x5b0))(DisplayServer::singleton,0),
      iVar2 == 1)) &&
     (((param_1 < 0xf4241 &&
       (this_00 = this, cVar1 = fps_allows_smoothing(this,param_1), 999 < param_1)) &&
      (cVar1 == '\x01')))) {
    if (this[0x4d] == (DeltaSmoother)0x0) {
      update_refresh_rate_estimator(this_00,param_1);
    }
    if (this[0x4c] != (DeltaSmoother)0x0) {
      lVar4 = *(long *)(this + 8) + param_1;
      lVar3 = lVar4 / *(long *)this;
      if (lVar3 < 1) {
        lVar3 = 1;
      }
      param_1 = lVar3 * *(long *)this;
      *(long *)(this + 8) = lVar4 - param_1;
    }
  }
  return param_1;
}



/* MainTimerSync::get_physics_jitter_fix() */

void MainTimerSync::get_physics_jitter_fix(void)

{
  Engine::get_singleton();
  Engine::get_physics_jitter_fix();
  return;
}



/* MainTimerSync::get_average_physics_steps(double&, double&) */

int __thiscall
MainTimerSync::get_average_physics_steps(MainTimerSync *this,double *param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  MainTimerSync *pMVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = _LC3;
  pMVar5 = this + 0xb4;
  iVar4 = *(int *)(this + 0xb0);
  *param_1 = (double)iVar4;
  dVar7 = (double)iVar4 + dVar2;
  *param_2 = dVar7;
  iVar4 = 1;
  while( true ) {
    iVar3 = iVar4 + 1;
    iVar1 = *(int *)pMVar5;
    dVar6 = (double)iVar1 / (double)iVar3;
    if (dVar7 < dVar6) {
      return iVar4;
    }
    dVar7 = *param_1;
    if (*param_1 < dVar6) {
      *param_1 = dVar6;
      dVar7 = dVar6;
    }
    dVar6 = ((double)iVar1 + dVar2) / (double)iVar3;
    if (dVar6 < dVar7) break;
    if (dVar6 < *param_2) {
      *param_2 = dVar6;
    }
    pMVar5 = pMVar5 + 4;
    if (iVar3 == 0xc) {
      return iVar3;
    }
    dVar7 = *param_2;
    iVar4 = iVar3;
  }
  return iVar4;
}



/* MainTimerSync::advance_core(double, int, double) */

double * MainTimerSync::advance_core(double param_1,int param_2,double param_3)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_EDX;
  int iVar7;
  long in_RSI;
  undefined4 in_register_0000003c;
  double *pdVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  pdVar8 = (double *)CONCAT44(in_register_0000003c,param_2);
  dVar15 = (double)in_EDX;
  *pdVar8 = param_3;
  uVar3 = _LC10;
  dVar11 = _LC5;
  dVar12 = param_3 + *(double *)(in_RSI + 0x70);
  *(double *)(in_RSI + 0x70) = dVar12;
  dVar13 = dVar12 * dVar15;
  dVar14 = dVar13;
  if ((double)((ulong)dVar13 & uVar3) < dVar11) {
    dVar14 = (double)((ulong)((double)(long)dVar13 -
                             (double)(-(ulong)(dVar13 < (double)(long)dVar13) & _LC3)) |
                     ~uVar3 & (ulong)dVar13);
  }
  iVar9 = (int)dVar14;
  iVar10 = *(int *)(in_RSI + 0xb0);
  piVar6 = (int *)(in_RSI + 0x80);
  iVar7 = iVar10 + 1;
  *(int *)(pdVar8 + 1) = iVar9;
  do {
    iVar4 = piVar6[0xd] - *piVar6;
    if ((iVar7 < iVar4) || (iVar1 = iVar4 + 1, iVar1 < iVar10)) {
      bVar2 = true;
      goto joined_r0x001005d1;
    }
    if (iVar10 < iVar4) {
      iVar10 = iVar4;
    }
    if (iVar1 < iVar7) {
      iVar7 = iVar1;
    }
    piVar6 = piVar6 + 1;
  } while (piVar6 != (int *)(in_RSI + 0xac));
  bVar2 = false;
joined_r0x001005d1:
  if (iVar7 < 0) {
    if (advance_core(double,int,double)::first_print == '\0') {
      if (iVar9 < iVar10) {
LAB_00100610:
        Engine::get_singleton();
        dVar12 = (double)Engine::get_physics_jitter_fix();
        dVar13 = dVar13 + dVar12;
        if ((double)((ulong)dVar13 & _LC10) < _LC5) {
          dVar13 = (double)((ulong)((double)(long)dVar13 -
                                   (double)(-(ulong)(dVar13 < (double)(long)dVar13) & _LC3)) |
                           ~_LC10 & (ulong)dVar13);
        }
        iVar9 = (int)dVar13;
        if (iVar10 <= (int)dVar13) {
          *(int *)(pdVar8 + 1) = iVar10;
          dVar12 = *(double *)(in_RSI + 0x70);
          goto LAB_0010053c;
        }
      }
      else {
        if (iVar9 <= iVar7) goto LAB_001005f2;
LAB_00100708:
        Engine::get_singleton();
        dVar12 = (double)Engine::get_physics_jitter_fix();
        dVar13 = dVar13 - dVar12;
        if ((double)((ulong)dVar13 & _LC10) < _LC5) {
          dVar13 = (double)((ulong)((double)(long)dVar13 -
                                   (double)(-(ulong)(dVar13 < (double)(long)dVar13) & _LC3)) |
                           ~_LC10 & (ulong)dVar13);
        }
        iVar9 = (int)dVar13;
        if ((int)dVar13 <= iVar7) {
          *(int *)(pdVar8 + 1) = iVar7;
          dVar12 = *(double *)(in_RSI + 0x70);
          iVar10 = iVar7;
          goto LAB_0010053c;
        }
      }
      iVar10 = iVar9;
      *(int *)(pdVar8 + 1) = iVar10;
      dVar12 = *(double *)(in_RSI + 0x70);
      bVar2 = true;
      goto LAB_0010053c;
    }
    _err_print_error("advance_core","main/main_timer_sync.cpp",0x16d,
                     "`max_typical_steps` is negative. This could hint at an engine bug or system timer misconfiguration."
                     ,0,1);
    dVar12 = *(double *)(in_RSI + 0x70);
    advance_core(double,int,double)::first_print = '\0';
    if (iVar9 < iVar10) {
      dVar13 = dVar12 * dVar15;
      goto LAB_00100610;
    }
    if (iVar7 < iVar9) {
      dVar13 = dVar12 * dVar15;
      goto LAB_00100708;
    }
  }
  else {
    if (iVar9 < iVar10) goto LAB_00100610;
    iVar10 = iVar9;
    if (iVar7 < iVar9) goto LAB_00100708;
LAB_0010053c:
    if (-1 < iVar10) {
      dVar11 = (double)iVar10;
      goto LAB_0010054e;
    }
  }
LAB_001005f2:
  *(undefined4 *)(pdVar8 + 1) = 0;
  dVar11 = 0.0;
  iVar10 = 0;
LAB_0010054e:
  *(double *)(in_RSI + 0x70) = dVar12 - param_1 * dVar11;
  piVar6 = (int *)(in_RSI + 0xa8);
  do {
    piVar5 = piVar6 + -1;
    piVar6[1] = *piVar6 + iVar10;
    piVar6 = piVar5;
  } while (piVar5 != (int *)(in_RSI + 0x7c));
  *(int *)(in_RSI + 0x80) = iVar10;
  if (bVar2) {
    piVar6 = (int *)(in_RSI + 0xdc);
    do {
      iVar7 = piVar6[-0xc];
      if ((iVar7 < *piVar6) || (iVar7 = iVar7 + -1, *piVar6 < iVar7)) {
        *piVar6 = iVar7;
      }
      piVar6 = piVar6 + -1;
    } while (piVar6 != (int *)(in_RSI + 0xac));
  }
  return pdVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainTimerSync::advance_checked(double, int, double) */

double * MainTimerSync::advance_checked(double param_1,int param_2,double param_3)

{
  int iVar1;
  int in_EDX;
  MainTimerSync *in_RSI;
  undefined4 in_register_0000003c;
  double *pdVar2;
  long in_FS_OFFSET;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_30;
  double local_28;
  long local_20;
  
  pdVar2 = (double *)CONCAT44(in_register_0000003c,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(in_RSI + 0xe0) != -1) {
    param_3 = _LC3 / (double)*(int *)(in_RSI + 0xe0);
  }
  dVar5 = (double)(float)(_LC12 * param_3);
  if (dVar5 <= __LC13) {
    dVar5 = (double)__LC11;
  }
  dVar4 = param_3 + *(double *)(in_RSI + 0x78);
  advance_core(param_1,param_2,dVar4);
  dVar8 = *pdVar2;
  dVar6 = dVar8 - *(double *)(in_RSI + 0x70);
  iVar1 = get_average_physics_steps(in_RSI,&local_30,&local_28);
  if (3 < iVar1) {
    local_30 = local_30 * param_1;
    if (local_30 <= dVar8) {
      local_28 = local_28 * param_1;
      if (local_28 < dVar8) {
        *pdVar2 = local_28;
        dVar8 = local_28;
      }
    }
    else {
      *pdVar2 = local_30;
      dVar8 = local_30;
    }
  }
  Engine::get_singleton();
  dVar3 = (double)Engine::get_physics_jitter_fix();
  dVar7 = dVar4 - dVar3 * param_1;
  if ((dVar8 < dVar7) || (dVar7 = dVar4 + dVar3 * param_1, dVar7 < dVar8)) {
    dVar8 = dVar7;
    *pdVar2 = dVar8;
  }
  if (dVar6 <= dVar8) {
    dVar7 = param_1 + dVar6;
    if (dVar7 < dVar8) {
      *pdVar2 = dVar7;
      dVar8 = dVar7;
    }
  }
  else {
    *pdVar2 = dVar6;
    dVar8 = dVar6;
  }
  if (dVar8 < dVar5) {
    *pdVar2 = dVar5;
    dVar8 = dVar5;
  }
  dVar5 = _LC14;
  dVar6 = dVar8 - dVar6;
  *(double *)(in_RSI + 0x70) = dVar6;
  if (dVar5 <= dVar6) {
    if (dVar6 <= param_1) goto LAB_00100a46;
LAB_001009e3:
    dVar7 = (double)in_EDX * dVar6;
    if ((double)((ulong)dVar7 & _LC10) < _LC5) {
      dVar7 = (double)((ulong)((double)(long)dVar7 -
                              (double)(-(ulong)(dVar7 < (double)(long)dVar7) & (ulong)_LC3)) |
                      ~_LC10 & (ulong)dVar7);
    }
    *(int *)(pdVar2 + 1) = *(int *)(pdVar2 + 1) + (int)dVar7;
    dVar6 = dVar6 - (double)(int)dVar7 * param_1;
    *(double *)(in_RSI + 0x70) = dVar6;
LAB_00100a2e:
    if (dVar5 <= dVar6) goto LAB_00100a46;
  }
  else {
    if (advance_checked(double,int,double)::first_print != '\0') {
      _err_print_error("advance_checked","main/main_timer_sync.cpp",0x1cc,
                       "Intermediate value of `time_accum` is negative. This could hint at an engine bug or system timer misconfiguration."
                       ,0,1);
      dVar6 = *(double *)(in_RSI + 0x70);
      advance_checked(double,int,double)::first_print = '\0';
      dVar5 = _LC14;
      if (param_1 < dVar6) goto LAB_001009e3;
      goto LAB_00100a2e;
    }
    if (param_1 < dVar6) goto LAB_001009e3;
  }
  if (advance_checked(double,int,double)::first_print == '\0') {
    dVar6 = *(double *)(in_RSI + 0x70);
  }
  else {
    _err_print_error("advance_checked","main/main_timer_sync.cpp",0x1d8,
                     "Final value of `time_accum` is negative. It should always be between 0 and `p_physics_step`. This hints at an engine bug."
                     ,0,1);
    dVar6 = *(double *)(in_RSI + 0x70);
    advance_checked(double,int,double)::first_print = '\0';
  }
LAB_00100a46:
  if ((_LC18 + param_1 < dVar6) && (advance_checked(double,int,double)::first_print != '\0')) {
    _err_print_error("advance_checked","main/main_timer_sync.cpp",0x1db,
                     "Final value of `time_accum` is larger than `p_physics_step`. It should always be between 0 and `p_physics_step`. This hints at an engine bug."
                     ,0,1);
    dVar6 = *(double *)(in_RSI + 0x70);
    advance_checked(double,int,double)::first_print = '\0';
  }
  *(double *)(in_RSI + 0x78) = dVar4 - dVar8;
  pdVar2[2] = dVar6 / param_1;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pdVar2;
}



/* MainTimerSync::get_cpu_process_step() */

double __thiscall MainTimerSync::get_cpu_process_step(MainTimerSync *this)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x60);
  *(long *)(this + 0x60) = *(long *)(this + 0x68);
  uVar2 = DeltaSmoother::smooth_delta((DeltaSmoother *)this,*(long *)(this + 0x68) - lVar1);
  if (-1 < (long)uVar2) {
    return (double)(long)uVar2 / _LC0;
  }
  return (double)uVar2 / _LC0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainTimerSync::MainTimerSync() */

void __thiscall MainTimerSync::MainTimerSync(MainTimerSync *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  MainTimerSync *pMVar9;
  MainTimerSync *pMVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  uVar2 = _UNK_00101108;
  uVar1 = __LC22;
  this[0x30] = (MainTimerSync)0x1;
  iVar8 = _UNK_0010112c;
  iVar7 = _UNK_00101128;
  iVar6 = _UNK_00101124;
  iVar5 = __LC24;
  uVar4 = _UNK_00101118;
  uVar3 = __LC23;
  *(undefined2 *)(this + 0x4c) = 0;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar4;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x34) = (undefined1  [16])0x0;
  iVar14 = _UNK_001010fc;
  iVar13 = _UNK_001010f8;
  iVar12 = _UNK_001010f4;
  iVar11 = __LC21;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  pMVar9 = this + 0xa0;
  do {
    pMVar10 = pMVar9 + -0x10;
    *(int *)(pMVar9 + 0x30) = iVar14;
    *(int *)(pMVar9 + 0x34) = iVar13;
    *(int *)(pMVar9 + 0x38) = iVar12;
    *(int *)(pMVar9 + 0x3c) = iVar11;
    *(int *)pMVar9 = iVar14;
    *(int *)(pMVar9 + 4) = iVar13;
    *(int *)(pMVar9 + 8) = iVar12;
    *(int *)(pMVar9 + 0xc) = iVar11;
    pMVar9 = pMVar10;
    iVar11 = iVar11 + iVar5;
    iVar12 = iVar12 + iVar6;
    iVar13 = iVar13 + iVar7;
    iVar14 = iVar14 + iVar8;
  } while (pMVar10 != this + 0x70);
  return;
}



/* MainTimerSync::init(unsigned long) */

void __thiscall MainTimerSync::init(MainTimerSync *this,ulong param_1)

{
  *(ulong *)(this + 0x60) = param_1;
  *(ulong *)(this + 0x68) = param_1;
  return;
}



/* MainTimerSync::set_cpu_ticks_usec(unsigned long) */

void __thiscall MainTimerSync::set_cpu_ticks_usec(MainTimerSync *this,ulong param_1)

{
  *(ulong *)(this + 0x68) = param_1;
  return;
}



/* MainTimerSync::set_fixed_fps(int) */

void __thiscall MainTimerSync::set_fixed_fps(MainTimerSync *this,int param_1)

{
  *(int *)(this + 0xe0) = param_1;
  return;
}



/* MainTimerSync::advance(double, int) */

MainTimerSync * __thiscall MainTimerSync::advance(MainTimerSync *this,double param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 in_register_00000034;
  DeltaSmoother *this_00;
  long in_FS_OFFSET;
  
  this_00 = (DeltaSmoother *)CONCAT44(in_register_00000034,param_2);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this_00 + 0x60);
  *(long *)(this_00 + 0x60) = *(long *)(this_00 + 0x68);
  uVar3 = DeltaSmoother::smooth_delta(this_00,*(long *)(this_00 + 0x68) - lVar2);
  advance_checked(param_1,(int)this,(double)uVar3 / _LC0);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


