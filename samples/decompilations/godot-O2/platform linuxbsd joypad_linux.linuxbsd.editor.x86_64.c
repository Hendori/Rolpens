
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



/* JoypadLinux::Joypad::~Joypad() */

void __thiscall JoypadLinux::Joypad::~Joypad(Joypad *this)

{
  long *plVar1;
  long lVar2;
  Joypad *pJVar3;
  
  pJVar3 = this + 0xe10;
  do {
    if (*(void **)pJVar3 != (void *)0x0) {
      Memory::free_static(*(void **)pJVar3,false);
    }
    pJVar3 = pJVar3 + 8;
  } while (pJVar3 != this + 0x1008);
  if (*(void **)(this + 0x1020) != (void *)0x0) {
    if (*(int *)(this + 0x1018) != 0) {
      *(undefined4 *)(this + 0x1018) = 0;
    }
    Memory::free_static(*(void **)(this + 0x1020),false);
  }
  if (*(long *)(this + 0xe08) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe08) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe08);
      *(undefined8 *)(this + 0xe08) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* JoypadLinux::Joypad::reset() */

void __thiscall JoypadLinux::Joypad::reset(Joypad *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0xdd8) = 0xffffffff;
  *(undefined4 *)(this + 0xddc) = 0xffffffff;
  *(undefined4 *)(this + 0xde0) = 0xffffffff;
  *(undefined4 *)(this + 0xde4) = 0xffffffff;
  *(undefined4 *)(this + 0xcf8) = 0xffffffff;
  *(undefined4 *)(this + 0xcfc) = 0xffffffff;
  *(undefined4 *)(this + 0xd00) = 0xffffffff;
  *(undefined4 *)(this + 0xd04) = 0xffffffff;
  *(undefined4 *)(this + 0xd08) = 0xffffffff;
  *(undefined4 *)(this + 0xd0c) = 0xffffffff;
  *(undefined4 *)(this + 0xd10) = 0xffffffff;
  *(undefined4 *)(this + 0xd14) = 0xffffffff;
  *(undefined4 *)(this + 0xd18) = 0xffffffff;
  *(undefined4 *)(this + 0xd1c) = 0xffffffff;
  *(undefined4 *)(this + 0xd20) = 0xffffffff;
  *(undefined4 *)(this + 0xd24) = 0xffffffff;
  *(undefined4 *)(this + 0xd28) = 0xffffffff;
  *(undefined4 *)(this + 0xd2c) = 0xffffffff;
  *(undefined4 *)(this + 0xd30) = 0xffffffff;
  *(undefined4 *)(this + 0xd34) = 0xffffffff;
  *(undefined4 *)(this + 0xd38) = 0xffffffff;
  *(undefined4 *)(this + 0xd3c) = 0xffffffff;
  *(undefined4 *)(this + 0xd40) = 0xffffffff;
  *(undefined4 *)(this + 0xd44) = 0xffffffff;
  *(undefined4 *)(this + 0xd48) = 0xffffffff;
  *(undefined4 *)(this + 0xd4c) = 0xffffffff;
  *(undefined4 *)(this + 0xd50) = 0xffffffff;
  *(undefined4 *)(this + 0xd54) = 0xffffffff;
  *(undefined4 *)(this + 0xd58) = 0xffffffff;
  *(undefined4 *)(this + 0xd5c) = 0xffffffff;
  *(undefined4 *)(this + 0xd60) = 0xffffffff;
  *(undefined4 *)(this + 0xd64) = 0xffffffff;
  *(undefined4 *)(this + 0xd68) = 0xffffffff;
  *(undefined4 *)(this + 0xd6c) = 0xffffffff;
  *(undefined4 *)(this + 0xd70) = 0xffffffff;
  *(undefined4 *)(this + 0xd74) = 0xffffffff;
  *(undefined4 *)(this + 0xd78) = 0xffffffff;
  *(undefined4 *)(this + 0xd7c) = 0xffffffff;
  *(undefined4 *)(this + 0xd80) = 0xffffffff;
  *(undefined4 *)(this + 0xd84) = 0xffffffff;
  *(undefined4 *)(this + 0xd88) = 0xffffffff;
  *(undefined4 *)(this + 0xd8c) = 0xffffffff;
  *(undefined4 *)(this + 0xd90) = 0xffffffff;
  *(undefined4 *)(this + 0xd94) = 0xffffffff;
  *(undefined4 *)(this + 0xd98) = 0xffffffff;
  *(undefined4 *)(this + 0xd9c) = 0xffffffff;
  *(undefined4 *)(this + 0xda0) = 0xffffffff;
  *(undefined4 *)(this + 0xda4) = 0xffffffff;
  *(undefined4 *)(this + 0xda8) = 0xffffffff;
  *(undefined4 *)(this + 0xdac) = 0xffffffff;
  *(undefined4 *)(this + 0xdb0) = 0xffffffff;
  *(undefined4 *)(this + 0xdb4) = 0xffffffff;
  *(undefined4 *)(this + 0xdb8) = 0xffffffff;
  *(undefined4 *)(this + 0xdbc) = 0xffffffff;
  *(undefined4 *)(this + 0xdc0) = 0xffffffff;
  *(undefined4 *)(this + 0xdc4) = 0xffffffff;
  *(undefined4 *)(this + 0xdc8) = 0xffffffff;
  *(undefined4 *)(this + 0xdcc) = 0xffffffff;
  *(undefined4 *)(this + 0xdd0) = 0xffffffff;
  *(undefined4 *)(this + 0xdd4) = 0xffffffff;
  *(undefined4 *)(this + 0xde4) = 0xffffffff;
  *(undefined4 *)(this + 0xde8) = 0xffffffff;
  *(undefined4 *)(this + 0xdec) = 0xffffffff;
  *(undefined4 *)(this + 0xdf0) = 0xffffffff;
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xdf8) = 0;
  *(undefined4 *)(this + 0xe00) = 0xffffffff;
  puVar2 = (undefined8 *)((ulong)(this + 8) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 8) & 0xfffffffffffffff8)) +
                       0xfcU >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(this + 0x1018) != 0) {
    *(undefined4 *)(this + 0x1018) = 0;
  }
  return;
}



/* JoypadLinux::setup_joypad_properties(JoypadLinux::Joypad&) */

void __thiscall JoypadLinux::setup_joypad_properties(JoypadLinux *this,Joypad *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  ulong local_c0;
  undefined1 local_b8 [10];
  byte local_ae;
  ulong local_a8 [4];
  ulong local_88 [9];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  puVar6 = local_a8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar1 = ioctl(*(int *)(param_1 + 0xe00),0x80604521,local_a8);
  if ((-1 < iVar1) && (iVar1 = ioctl(*(int *)(param_1 + 0xe00),0x80084523,&local_c0), -1 < iVar1)) {
    uVar3 = 0x120;
    iVar1 = 0;
    do {
      if ((local_a8[uVar3 >> 6] >> (uVar3 & 0x3f) & 1) != 0) {
        *(int *)(param_1 + uVar3 * 4 + 0xfc) = iVar1;
        iVar1 = iVar1 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x2ff);
    uVar3 = 0;
    do {
      if ((local_88[0] >> (uVar3 & 0x3f) & 1) != 0) {
        *(int *)(param_1 + uVar3 * 4 + 0x4fc) = iVar1;
        iVar1 = iVar1 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x20);
    uVar7 = 0;
    iVar1 = 0;
    do {
      while( true ) {
        uVar3 = 0x18;
        if (uVar7 != 0x10) {
          uVar3 = (ulong)uVar7;
        }
        iVar2 = (int)uVar3;
        uVar8 = (ulong)iVar2;
        uVar7 = iVar2 + 1;
        if ((*(ulong *)(local_b8 + (uVar8 >> 6) * 8 + -8) >> (uVar3 & 0x3f) & 1) == 0) break;
        *(int *)(param_1 + uVar8 * 4 + 0xcf8) = iVar1;
        pvVar4 = operator_new(0x18,"");
        *(void **)(param_1 + uVar8 * 8 + 0xe10) = pvVar4;
        iVar2 = ioctl(*(int *)(param_1 + 0xe00),(ulong)(iVar2 + 0x40U | 0x80184500),pvVar4);
        if (iVar2 < 0) {
          Memory::free_static(*(void **)(param_1 + uVar8 * 8 + 0xe10),false);
          *(undefined8 *)(param_1 + uVar8 * 8 + 0xe10) = 0;
        }
        iVar1 = iVar1 + 1;
        if (uVar7 == 0x28) goto LAB_00100373;
      }
    } while (uVar7 != 0x28);
LAB_00100373:
    param_1[0x1008] = (Joypad)0x0;
    *(undefined8 *)(param_1 + 0x1010) = 0;
    iVar1 = ioctl(*(int *)(param_1 + 0xe00),0x80104535,local_b8);
    if ((iVar1 != -1) && ((local_ae & 1) != 0)) {
      param_1[0x1008] = (Joypad)0x1;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoypadLinux::joypad_vibration_start(JoypadLinux::Joypad&, float, float, float, unsigned long) */

void __thiscall
JoypadLinux::joypad_vibration_start
          (JoypadLinux *this,Joypad *param_1,float param_2,float param_3,float param_4,ulong param_5
          )

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ssize_t sVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  long local_b0;
  undefined1 local_a8 [16];
  undefined2 local_98;
  undefined2 local_96;
  undefined4 local_94;
  int local_88 [8];
  undefined4 local_68;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1[0x1008] != (Joypad)0x0) && (iVar4 = *(int *)(param_1 + 0xe00), iVar4 != -1)) &&
      (0.0 <= param_2)) && (((param_2 <= _LC2 && (0.0 <= param_3)) && (param_3 <= _LC2)))) {
    fVar8 = _LC2;
    if (*(int *)(param_1 + 0x100c) != -1) {
      iVar4 = ioctl(iVar4,0x40044581);
      fVar8 = _LC2;
      if (-1 < iVar4) {
        *(undefined4 *)(param_1 + 0x100c) = 0xffffffff;
        *(ulong *)(param_1 + 0x1010) = param_5;
      }
      iVar4 = *(int *)(param_1 + 0xe00);
    }
    local_68 = 0xffff0050;
    fVar6 = param_2 * _LC3;
    if ((float)((uint)fVar6 & _LC5) < _LC4) {
      fVar6 = (float)((uint)((float)(int)fVar6 -
                            (float)(-(uint)(fVar6 < (float)(int)fVar6) & (uint)fVar8)) |
                     ~_LC5 & (uint)fVar6);
    }
    fVar7 = param_3 * _LC3;
    local_56 = (undefined2)(int)fVar6;
    if ((float)((uint)fVar7 & _LC5) < _LC4) {
      fVar7 = (float)((uint)((float)(int)fVar7 -
                            (float)(-(uint)(fVar7 < (float)(int)fVar7) & (uint)fVar8)) |
                     ~_LC5 & (uint)fVar7);
    }
    fVar6 = param_4 * __LC6;
    local_58 = (undefined2)(int)fVar7;
    if ((float)((uint)fVar6 & _LC5) < _LC4) {
      fVar6 = (float)((uint)((float)(int)fVar6 -
                            (float)(-(uint)(fVar6 < (float)(int)fVar6) & (uint)fVar8)) |
                     ~_LC5 & (uint)fVar6);
    }
    local_5c = 0;
    local_5e = (undefined2)(int)fVar6;
    iVar4 = ioctl(iVar4,0x40304580,&local_68);
    if (-1 < iVar4) {
      local_98 = 0x15;
      local_94 = 1;
      local_96 = local_68._2_2_;
      sVar5 = write(*(int *)(param_1 + 0xe00),local_a8,0x18);
      if (sVar5 == -1) {
        cVar3 = is_print_verbose_enabled();
        if (cVar3 != '\0') {
          Variant::Variant((Variant *)local_88,"Couldn\'t write to Joypad device.");
          stringify_variants((Variant *)&local_b0);
          __print_line((String *)&local_b0);
          lVar2 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      *(ulong *)(param_1 + 0x1010) = param_5;
      *(int *)(param_1 + 0x100c) = (int)local_68._2_2_;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoypadLinux::joypad_vibration_stop(JoypadLinux::Joypad&, unsigned long) */

void __thiscall JoypadLinux::joypad_vibration_stop(JoypadLinux *this,Joypad *param_1,ulong param_2)

{
  int iVar1;
  
  if (param_1[0x1008] != (Joypad)0x0) {
    if ((*(int *)(param_1 + 0xe00) != -1) && (*(int *)(param_1 + 0x100c) != -1)) {
      iVar1 = ioctl(*(int *)(param_1 + 0xe00),0x40044581);
      if (-1 < iVar1) {
        *(undefined4 *)(param_1 + 0x100c) = 0xffffffff;
        *(ulong *)(param_1 + 0x1010) = param_2;
      }
    }
    return;
  }
  return;
}



/* JoypadLinux::axis_correct(input_absinfo const*, int) const */

undefined8 __thiscall
JoypadLinux::axis_correct(JoypadLinux *this,input_absinfo *param_1,int param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  fVar1 = (float)(param_2 - *(int *)(param_1 + 4));
  auVar2._0_4_ = (fVar1 + fVar1) / (float)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) - _LC2;
  return auVar2._0_8_;
}



/* JoypadLinux::process_joypads() */

void __thiscall JoypadLinux::process_joypads(JoypadLinux *this)

{
  short *psVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  JoypadLinux *pJVar9;
  int iVar10;
  long lVar11;
  JoypadLinux *pJVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  pthread_mutex_t *local_50;
  
  local_50 = (pthread_mutex_t *)(this + 0x102b8);
  pJVar12 = this + 0xe2c;
  iVar10 = 0;
  do {
    iVar4 = pthread_mutex_lock(local_50);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
    }
    if (*(int *)(pJVar12 + 0xc) != -1) {
      lVar11 = 0;
      if (*(int *)(pJVar12 + 0x224) != 0) {
        lVar8 = (long)iVar10 * 0x40a;
LAB_001008e0:
        do {
          psVar1 = (short *)(*(long *)(pJVar12 + 0x22c) + lVar11 * 8);
          uVar2 = psVar1[1];
          uVar6 = (ulong)uVar2;
          if (0x2fe < uVar2) {
LAB_00100a40:
            pthread_mutex_unlock(local_50);
            return;
          }
          if (*psVar1 == 1) {
            lVar11 = lVar11 + 1;
            Input::joy_button(*(undefined8 *)(this + 8),iVar10,
                              *(undefined4 *)(this + (uVar6 + 0x48 + lVar8) * 4 + 0x14),
                              *(int *)(psVar1 + 2) != 0);
            uVar5 = *(uint *)(pJVar12 + 0x224);
            if (uVar5 <= (uint)lVar11) break;
            goto LAB_001008e0;
          }
          if (*psVar1 == 3) {
            if (uVar2 == 0x10) {
              uVar6 = *(ulong *)(pJVar12 + 4);
              uVar7 = uVar6 & 0xfffffffffffffff5;
              if (*(int *)(psVar1 + 2) != 0) {
                uVar7 = uVar6 & 0xfffffffffffffff7 | 2;
                if (*(int *)(psVar1 + 2) < 0) {
                  uVar7 = uVar6 & 0xfffffffffffffffd | 8;
                }
              }
            }
            else {
              if (uVar2 != 0x11) {
                if (0x3e < uVar2) goto LAB_00100a40;
                if ((*(int *)(this + (uVar6 + 0x348 + lVar8) * 4 + 0x10) != -1) &&
                   (lVar3 = *(long *)(this + (uVar6 + 0x1c8) * 8 + (long)iVar10 * 0x1028 + 8),
                   lVar3 != 0)) {
                  fVar13 = (float)(*(int *)(psVar1 + 2) - *(int *)(lVar3 + 4));
                  *(float *)(this + ((long)*(int *)(this + (uVar6 + 0x348 + lVar8) * 4 + 0x10) + 0xc
                                    + lVar8) * 4 + 8) =
                       (fVar13 + fVar13) / (float)(*(int *)(lVar3 + 8) - *(int *)(lVar3 + 4)) - _LC2
                  ;
                }
                goto LAB_001008d0;
              }
              uVar6 = *(ulong *)(pJVar12 + 4);
              uVar7 = uVar6 & 0xfffffffffffffffa;
              if (*(int *)(psVar1 + 2) != 0) {
                uVar7 = uVar6 & 0xfffffffffffffffe | 4;
                if (*(int *)(psVar1 + 2) < 0) {
                  uVar7 = uVar6 & 0xfffffffffffffffb | 1;
                }
              }
            }
            *(ulong *)(pJVar12 + 4) = uVar7;
            Input::joy_hat(*(undefined8 *)(this + 8),iVar10,*(undefined8 *)(pJVar12 + 4));
          }
LAB_001008d0:
          uVar5 = *(uint *)(pJVar12 + 0x224);
          lVar11 = lVar11 + 1;
        } while ((uint)lVar11 < uVar5);
        if (uVar5 != 0) {
          *(int *)(pJVar12 + 0x224) = 0;
        }
      }
      pJVar9 = pJVar12 + -0xfc;
      do {
        if (*(int *)pJVar9 != -1) {
          Input::joy_axis(*(undefined8 *)(this + 8),iVar10);
        }
        pJVar9 = pJVar9 + 4;
      } while (pJVar9 != pJVar12);
      if ((pJVar12[0x214] != (JoypadLinux)0x0) &&
         (uVar6 = Input::get_joy_vibration_timestamp((int)*(undefined8 *)(this + 8)),
         *(ulong *)(pJVar12 + 0x21c) < uVar6)) {
        uVar15 = Input::get_joy_vibration_strength((int)*(undefined8 *)(this + 8));
        fVar13 = (float)((ulong)uVar15 >> 0x20);
        fVar14 = (float)Input::get_joy_vibration_duration((int)*(undefined8 *)(this + 8));
        if (((float)uVar15 == 0.0) && (fVar13 == 0.0)) {
          if ((((pJVar12[0x214] != (JoypadLinux)0x0) && (*(int *)(pJVar12 + 0xc) != -1)) &&
              (*(int *)(pJVar12 + 0x218) != -1)) &&
             (iVar4 = ioctl(*(int *)(pJVar12 + 0xc),0x40044581), -1 < iVar4)) {
            *(int *)(pJVar12 + 0x218) = -1;
            *(ulong *)(pJVar12 + 0x21c) = uVar6;
          }
        }
        else {
          joypad_vibration_start
                    (this,(Joypad *)(pJVar12 + -0xdf4),(float)uVar15,fVar13,fVar14,uVar6);
        }
      }
    }
    iVar10 = iVar10 + 1;
    pJVar12 = pJVar12 + 0x1028;
    pthread_mutex_unlock(local_50);
    local_50 = local_50 + 1;
    if (iVar10 == 0x10) {
      return;
    }
  } while( true );
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoypadLinux::JoypadLinux(Input*) */

void __thiscall JoypadLinux::JoypadLinux(JoypadLinux *this,Input *param_1)

{
  CowData<char32_t> *this_00;
  char cVar1;
  int iVar2;
  JoypadLinux *pJVar3;
  long *plVar4;
  long lVar5;
  StrRange *pSVar6;
  StrRange *pSVar7;
  JoypadLinux *pJVar8;
  char *pcVar9;
  JoypadLinux *pJVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  byte bVar13;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  CowData local_48 [8];
  long local_40;
  
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *this = (JoypadLinux)0x0;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (JoypadLinux)0x0;
  this[0x11] = (JoypadLinux)0x0;
  Thread::Thread((Thread *)(this + 0x18));
  Thread::Thread((Thread *)(this + 0x28));
  pJVar3 = this + 0x38;
  do {
    *(undefined8 *)(pJVar3 + 0xdf8) = 0;
    pJVar8 = pJVar3 + 0x1028;
    *(undefined4 *)(pJVar3 + 0xe00) = 0xffffffff;
    *(undefined8 *)(pJVar3 + 0xe08) = 0;
    pJVar10 = pJVar3 + 0xe10;
    for (lVar5 = 0x3f; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pJVar10 = 0;
      pJVar10 = pJVar10 + (ulong)bVar13 * -0x10 + 8;
    }
    pJVar3[0x1008] = (JoypadLinux)0x0;
    *(undefined4 *)(pJVar3 + 0x100c) = 0;
    *(undefined8 *)(pJVar3 + 0x1010) = 0;
    *(undefined8 *)(pJVar3 + 0x1018) = 0;
    *(undefined8 *)(pJVar3 + 0x1020) = 0;
    pJVar3 = pJVar8;
  } while (pJVar8 != this + 0x102b8);
  for (lVar5 = 0x50; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pJVar8 = 0;
    pJVar8 = pJVar8 + (ulong)bVar13 * -0x10 + 8;
  }
  *(undefined4 *)(this + 0x102c8) = 1;
  pJVar3 = this + 0x102f0;
  do {
    *(undefined4 *)pJVar3 = 1;
    pJVar8 = pJVar3 + 0x78;
    *(undefined4 *)(pJVar3 + 0x28) = 1;
    *(undefined4 *)(pJVar3 + 0x50) = 1;
    pJVar3 = pJVar8;
  } while (pJVar8 != this + 0x10548);
  *(undefined8 *)(this + 0x10540) = 0;
  local_88 = 0;
  local_98 = "touchpad";
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_88);
  local_98 = "trackpad";
  local_80 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_80);
  local_98 = "clickpad";
  local_78 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_78);
  local_98 = "keyboard";
  local_70 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_70);
  local_98 = "mouse";
  local_68 = 0;
  local_90 = 5;
  String::parse_latin1((StrRange *)&local_68);
  local_98 = "pen";
  local_60 = 0;
  local_90 = 3;
  String::parse_latin1((StrRange *)&local_60);
  local_98 = "finger";
  local_58 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_58);
  local_50 = 0;
  local_98 = "led";
  local_90 = 3;
  String::parse_latin1((StrRange *)&local_50);
  *(undefined8 *)(this + 0x10550) = 0;
  iVar2 = CowData<String>::resize<false>((CowData<String> *)(this + 0x10550),8);
  pSVar6 = (StrRange *)&local_50;
  if (iVar2 == 0) {
    lVar5 = 0;
    pSVar7 = (StrRange *)&local_88;
    do {
      if (*(long *)(this + 0x10550) == 0) {
        lVar11 = 0;
LAB_00101233:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar11,"p_index","size()","",false,
                   false);
      }
      else {
        lVar11 = *(long *)(*(long *)(this + 0x10550) + -8);
        if (lVar11 <= lVar5) goto LAB_00101233;
        CowData<String>::_copy_on_write((CowData<String> *)(this + 0x10550));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 0x10550) + lVar5 * 8);
        if (*(long *)this_00 != *(long *)pSVar7) {
          CowData<char32_t>::_ref(this_00,(CowData *)pSVar7);
        }
      }
      pSVar7 = (StrRange *)((CowData *)pSVar7 + 8);
      lVar5 = lVar5 + 1;
    } while (pSVar7 != (StrRange *)local_48);
  }
  do {
    if (*(long *)pSVar6 != 0) {
      LOCK();
      plVar4 = (long *)(*(long *)pSVar6 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        lVar5 = *(long *)pSVar6;
        *(undefined8 *)pSVar6 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    bVar12 = (StrRange *)&local_88 != pSVar6;
    pSVar6 = pSVar6 + -8;
  } while (bVar12);
  plVar4 = (long *)OS::get_singleton();
  cVar1 = (**(code **)(*plVar4 + 0x2f8))(plVar4);
  if (cVar1 == '\0') {
    iVar2 = initialize_libudev(1);
    *this = (JoypadLinux)(iVar2 == 0);
    if (iVar2 == 0) {
      if (((((((_udev_new_dylibloader_wrapper_libudev == 0) ||
              (_udev_unref_dylibloader_wrapper_libudev == 0)) ||
             (_udev_enumerate_new_dylibloader_wrapper_libudev == 0)) ||
            ((_udev_enumerate_add_match_subsystem_dylibloader_wrapper_libudev == 0 ||
             (_udev_enumerate_scan_devices_dylibloader_wrapper_libudev == 0)))) ||
           ((_udev_enumerate_get_list_entry_dylibloader_wrapper_libudev == 0 ||
            ((_udev_list_entry_get_next_dylibloader_wrapper_libudev == 0 ||
             (_udev_list_entry_get_name_dylibloader_wrapper_libudev == 0)))))) ||
          (_udev_device_new_from_syspath_dylibloader_wrapper_libudev == 0)) ||
         (((((_udev_device_get_devnode_dylibloader_wrapper_libudev == 0 ||
             (_udev_device_get_action_dylibloader_wrapper_libudev == 0)) ||
            (_udev_device_unref_dylibloader_wrapper_libudev == 0)) ||
           (((_udev_enumerate_unref_dylibloader_wrapper_libudev == 0 ||
             (_udev_monitor_new_from_netlink_dylibloader_wrapper_libudev == 0)) ||
            ((_udev_monitor_filter_add_match_subsystem_devtype_dylibloader_wrapper_libudev == 0 ||
             ((_udev_monitor_enable_receiving_dylibloader_wrapper_libudev == 0 ||
              (_udev_monitor_get_fd_dylibloader_wrapper_libudev == 0)))))))) ||
          ((_udev_monitor_receive_device_dylibloader_wrapper_libudev == 0 ||
           (_udev_monitor_unref_dylibloader_wrapper_libudev == 0)))))) {
        *this = (JoypadLinux)0x0;
        cVar1 = is_print_verbose_enabled();
        pcVar9 = "JoypadLinux: Unsupported udev library version!";
      }
      else {
        cVar1 = is_print_verbose_enabled();
        pcVar9 = "JoypadLinux: udev enabled and loaded successfully.";
      }
      goto joined_r0x00101222;
    }
    cVar1 = is_print_verbose_enabled();
    if (cVar1 == '\0') goto LAB_00100f92;
    pcVar9 = 
    "JoypadLinux: udev enabled, but couldn\'t be loaded. Falling back to /dev/input to detect joypads."
    ;
  }
  else {
    *this = (JoypadLinux)0x0;
    cVar1 = is_print_verbose_enabled();
    pcVar9 = 
    "JoypadLinux: udev enabled, but detected incompatible sandboxed mode. Falling back to /dev/input to detect joypads."
    ;
joined_r0x00101222:
    if (cVar1 == '\0') goto LAB_00100f92;
  }
  Variant::Variant((Variant *)&local_88,pcVar9);
  stringify_variants((Variant *)&local_98);
  __print_line((String *)&local_98);
  pcVar9 = local_98;
  if (local_98 != (undefined *)0x0) {
    LOCK();
    plVar4 = (long *)(local_98 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_98 = (undefined *)0x0;
      Memory::free_static(pcVar9 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
LAB_00100f92:
  local_98._0_4_ = 1;
  *(Input **)(this + 8) = param_1;
  Thread::start((_func_void_void_ptr *)(this + 0x18),monitor_joypads_thread_func,(Settings *)this);
  local_98 = (char *)CONCAT44(local_98._4_4_,1);
  Thread::start((_func_void_void_ptr *)(this + 0x28),joypad_events_thread_func,(Settings *)this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoypadLinux::close_joypad(JoypadLinux::Joypad&, int) */

void __thiscall JoypadLinux::close_joypad(JoypadLinux *this,Joypad *param_1,int param_2)

{
  long *plVar1;
  CowData<String> *this_00;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  Dictionary local_60 [8];
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0xe00) == -1) goto LAB_001012e3;
  this_00 = (CowData<String> *)(this + 0x10540);
  close(*(int *)(param_1 + 0xe00));
  *(undefined4 *)(param_1 + 0xe00) = 0xffffffff;
  lVar3 = CowData<String>::find(this_00,(String *)(param_1 + 0xe08),0);
  if (-1 < lVar3) {
    if (*(long *)(this + 0x10540) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 0x10540) + -8);
      if (lVar3 < lVar7) {
        CowData<String>::_copy_on_write(this_00);
        lVar7 = *(long *)(this + 0x10540);
        if (lVar7 == 0) {
          lVar4 = -1;
        }
        else {
          lVar4 = *(long *)(lVar7 + -8) + -1;
          if (lVar3 < lVar4) {
            plVar6 = (long *)(lVar7 + lVar3 * 8);
            do {
              lVar7 = *plVar6;
              lVar5 = plVar6[1];
              if (lVar7 != lVar5) {
                if (lVar7 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar7 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar7 = *plVar6;
                    *plVar6 = 0;
                    Memory::free_static((void *)(lVar7 + -0x10),false);
                    lVar5 = plVar6[1];
                  }
                  else {
                    lVar5 = plVar6[1];
                  }
                }
                *plVar6 = lVar5;
                plVar6[1] = 0;
              }
              lVar3 = lVar3 + 1;
              plVar6 = plVar6 + 1;
            } while (lVar4 != lVar3);
          }
        }
        CowData<String>::resize<false>(this_00,lVar4);
        goto LAB_0010135d;
      }
    }
    _err_print_index_error
              ("remove_at","./core/templates/cowdata.h",0xe4,lVar3,lVar7,"p_index","size()","",false
               ,false);
  }
LAB_0010135d:
  uVar2 = *(undefined8 *)(this + 8);
  Dictionary::Dictionary(local_60);
  local_58 = &_LC0;
  local_68 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_68);
  local_58 = &_LC0;
  local_70 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_70);
  Input::joy_connection_changed
            ((int)uVar2,SUB41(param_2,0),(String *)0x0,(String *)&local_70,(Dictionary *)&local_68);
  lVar3 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar6 = (long *)(local_70 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar6 = (long *)(local_68 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      Dictionary::~Dictionary(local_60);
      goto LAB_001012e3;
    }
  }
  Dictionary::~Dictionary(local_60);
LAB_001012e3:
  if (*(int *)(param_1 + 0x1018) != 0) {
    *(undefined4 *)(param_1 + 0x1018) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoypadLinux::close_joypads() */

void __thiscall JoypadLinux::close_joypads(JoypadLinux *this)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  JoypadLinux *pJVar3;
  
  pJVar3 = this + 0x38;
  __mutex = (pthread_mutex_t *)(this + 0x102b8);
  iVar2 = 0;
  do {
    iVar1 = pthread_mutex_lock(__mutex);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
    }
    iVar1 = iVar2 + 1;
    close_joypad(this,(Joypad *)pJVar3,iVar2);
    pJVar3 = (JoypadLinux *)((Joypad *)pJVar3 + 0x1028);
    pthread_mutex_unlock(__mutex);
    __mutex = __mutex + 1;
    iVar2 = iVar1;
  } while (iVar1 != 0x10);
  return;
}



/* JoypadLinux::~JoypadLinux() */

void __thiscall JoypadLinux::~JoypadLinux(JoypadLinux *this)

{
  Joypad *this_00;
  Joypad *pJVar1;
  
  this[0x10] = (JoypadLinux)0x1;
  this[0x11] = (JoypadLinux)0x1;
  Thread::wait_to_finish();
  Thread::wait_to_finish();
  close_joypads(this);
  CowData<String>::_unref((CowData<String> *)(this + 0x10550));
  CowData<String>::_unref((CowData<String> *)(this + 0x10540));
  this_00 = (Joypad *)(this + 0xf290);
  do {
    pJVar1 = this_00 + -0x1028;
    Joypad::~Joypad(this_00);
    this_00 = pJVar1;
  } while (pJVar1 != (Joypad *)(this + -0xff0));
  Thread::~Thread((Thread *)(this + 0x28));
  Thread::~Thread((Thread *)(this + 0x18));
  return;
}



/* JoypadLinux::close_joypad(char const*) */

void __thiscall JoypadLinux::close_joypad(JoypadLinux *this,char *param_1)

{
  char cVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  JoypadLinux *pJVar4;
  
  pJVar4 = this + 0x38;
  iVar3 = 0;
  __mutex = (pthread_mutex_t *)(this + 0x102b8);
  do {
    iVar2 = pthread_mutex_lock(__mutex);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    cVar1 = String::operator==((String *)((Joypad *)pJVar4 + 0xe08),param_1);
    if (cVar1 != '\0') {
      close_joypad(this,(Joypad *)pJVar4,iVar3);
    }
    iVar3 = iVar3 + 1;
    pJVar4 = (JoypadLinux *)((Joypad *)pJVar4 + 0x1028);
    pthread_mutex_unlock(__mutex);
    __mutex = __mutex + 1;
  } while (iVar3 != 0x10);
  return;
}



/* JoypadLinux::joypad_events_thread_run() */

void __thiscall JoypadLinux::joypad_events_thread_run(JoypadLinux *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  ssize_t sVar6;
  ulong uVar7;
  void *pvVar8;
  int *piVar9;
  long *plVar10;
  pthread_mutex_t *__mutex;
  int iVar11;
  JoypadLinux *pJVar12;
  long in_FS_OFFSET;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (this[0x11] != (JoypadLinux)0x0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pJVar12 = this + 0x38;
    iVar11 = 0;
    bVar3 = true;
    __mutex = (pthread_mutex_t *)(this + 0x102b8);
    do {
      iVar5 = pthread_mutex_lock(__mutex);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar5);
      }
      iVar5 = *(int *)((Joypad *)pJVar12 + 0xe00);
      if (iVar5 != -1) {
        while (sVar6 = read(iVar5,auStack_58,0x18), uVar4 = local_48, 0 < sVar6) {
          uVar1 = *(uint *)((Joypad *)pJVar12 + 0x1018);
          pvVar8 = *(void **)((Joypad *)pJVar12 + 0x1020);
          if (uVar1 == *(uint *)((Joypad *)pJVar12 + 0x101c)) {
            uVar7 = (ulong)(uVar1 * 2);
            if (uVar1 * 2 == 0) {
              uVar7 = 1;
            }
            *(int *)((Joypad *)pJVar12 + 0x101c) = (int)uVar7;
            pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar7 * 8,false);
            *(void **)((Joypad *)pJVar12 + 0x1020) = pvVar8;
            if (pvVar8 == (void *)0x0) {
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar1 = *(uint *)((Joypad *)pJVar12 + 0x1018);
          }
          *(uint *)((Joypad *)pJVar12 + 0x1018) = uVar1 + 1;
          *(undefined8 *)((long)pvVar8 + (ulong)uVar1 * 8) = uVar4;
          iVar5 = *(int *)((Joypad *)pJVar12 + 0xe00);
          bVar3 = false;
        }
        piVar9 = __errno_location();
        if (*piVar9 != 0xb) {
          close_joypad(this,(Joypad *)pJVar12,iVar11);
        }
      }
      iVar11 = iVar11 + 1;
      pJVar12 = (JoypadLinux *)((Joypad *)pJVar12 + 0x1028);
      pthread_mutex_unlock(__mutex);
      __mutex = __mutex + 1;
    } while (iVar11 != 0x10);
    if (bVar3) {
      plVar10 = (long *)OS::get_singleton();
      (**(code **)(*plVar10 + 0x1f8))(plVar10,10000);
    }
  } while( true );
}



/* JoypadLinux::joypad_events_thread_func(void*) */

void JoypadLinux::joypad_events_thread_func(void *param_1)

{
  if (param_1 != (void *)0x0) {
    joypad_events_thread_run((JoypadLinux *)param_1);
    return;
  }
  return;
}



/* JoypadLinux::open_joypad(char const*) */

void __thiscall JoypadLinux::open_joypad(JoypadLinux *this,char *param_1)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  char *pcVar6;
  long lVar7;
  ushort uVar8;
  char *pcVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  Variant *pVVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  String *pSVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  String *pSVar24;
  long in_FS_OFFSET;
  byte bVar25;
  int local_244;
  long local_238;
  char *local_230;
  long local_228;
  undefined8 local_220;
  char *local_218;
  String *local_210;
  ulong local_208;
  ulong local_200;
  int local_1f8 [8];
  int local_1d8 [8];
  undefined8 local_1b8 [13];
  char local_14b;
  char local_14a;
  undefined1 local_149;
  char local_148 [128];
  char local_c8 [136];
  long local_40;
  
  bVar25 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar11 = Input::get_unused_joy_id();
  iVar12 = open64(param_1,0x802);
  if ((iVar12 == -1) || (iVar11 == -1)) goto LAB_00101944;
  local_208 = 0;
  puVar22 = local_1b8;
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + (ulong)bVar25 * -2 + 1;
  }
  local_200 = 0;
  local_220 = 0;
  local_210 = (String *)strlen(param_1);
  local_218 = param_1;
  String::parse_latin1((StrRange *)&local_220);
  if (*(long *)(this + 0x10540) == 0) {
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(*(long *)(this + 0x10540) + -8) + 1;
  }
  iVar13 = CowData<String>::resize<false>((CowData<String> *)(this + 0x10540),lVar17);
  if (iVar13 == 0) {
    if (*(long *)(this + 0x10540) == 0) {
      lVar18 = -1;
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(*(long *)(this + 0x10540) + -8);
      lVar18 = lVar17 + -1;
      if (-1 < lVar18) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 0x10540));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 0x10540) + lVar18 * 8);
        if (*(long *)this_00 != local_220) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_220);
        }
        goto LAB_00101a54;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar17,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00101a54:
  lVar17 = local_220;
  if (local_220 != 0) {
    LOCK();
    plVar1 = (long *)(local_220 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_220 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  iVar13 = ioctl(iVar12,0x80084520,&local_208);
  if ((((iVar13 < 0) || (iVar13 = ioctl(iVar12,0x80604521,local_1b8), iVar13 < 0)) ||
      (iVar13 = ioctl(iVar12,0x80084523,&local_200), iVar13 < 0)) ||
     (((~local_208 & 10) != 0 || (((~local_200 & 3) != 0 && ((~local_200 & 0x18) != 0)))))) {
    close(iVar12);
  }
  else {
    local_238 = 0;
    local_218 = "";
    local_210 = (String *)0x0;
    String::parse_latin1((StrRange *)&local_238);
    iVar13 = ioctl(iVar12,0x80804506,local_c8);
    if (-1 < iVar13) {
      local_210 = (String *)strlen(local_c8);
      local_218 = local_c8;
      String::parse_latin1((StrRange *)&local_238);
    }
    String::to_lower();
    String::split((char *)&local_218,SUB81((StrRange *)&local_220,0),0x102da1);
    lVar17 = local_220;
    if (local_220 != 0) {
      LOCK();
      plVar1 = (long *)(local_220 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_220 = 0;
        Memory::free_static((void *)(lVar17 + -0x10),false);
      }
    }
    CowData<String>::_copy_on_write((CowData<String> *)&local_210);
    pSVar20 = local_210;
    CowData<String>::_copy_on_write((CowData<String> *)&local_210);
    pSVar24 = local_210;
    if (local_210 != (String *)0x0) {
      pSVar24 = local_210 + *(long *)(local_210 + -8) * 8;
    }
    for (; pSVar20 != pSVar24; pSVar20 = pSVar20 + 8) {
      lVar17 = CowData<String>::find((CowData<String> *)(this + 0x10550),pSVar20,0);
      if (lVar17 != -1) {
        CowData<String>::_unref((CowData<String> *)&local_210);
        lVar17 = local_238;
        goto joined_r0x00101c52;
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_210);
    iVar13 = ioctl(iVar12,0x80084502,(StrRange *)&local_220);
    if (iVar13 < 0) {
      close(iVar12);
      lVar17 = local_238;
    }
    else {
      uVar8 = local_220._6_2_;
      uVar3 = local_220._4_2_ << 8;
      uVar4 = local_220._4_2_ >> 8;
      uVar14 = (uint)(ushort)(local_220._2_2_ << 8 | local_220._2_2_ >> 8);
      cVar10 = Input::should_ignore_device((int)*(undefined8 *)(this + 8),uVar14);
      lVar17 = local_238;
      if (cVar10 == '\0') {
        lVar17 = (long)iVar11;
        iVar13 = pthread_mutex_lock((pthread_mutex_t *)(this + lVar17 * 0x28 + 0x102b8));
        if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar13);
        }
        lVar21 = lVar17 * 0x1028;
        lVar23 = lVar21 + 0x38;
        Joypad::reset((Joypad *)(this + lVar23));
        local_228 = 0;
        *(int *)(this + lVar21 + 0xe38) = iVar12;
        local_210 = (String *)strlen(param_1);
        local_218 = param_1;
        String::parse_latin1((StrRange *)&local_228);
        lVar7 = local_228;
        lVar18 = *(long *)(this + lVar21 + 0xe40);
        if (lVar18 == local_228) {
          if (lVar18 != 0) {
            LOCK();
            plVar1 = (long *)(lVar18 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_228 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
        }
        else {
          if (lVar18 != 0) {
            LOCK();
            plVar1 = (long *)(lVar18 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar18 = *(long *)(this + lVar21 + 0xe40);
              *(undefined8 *)(this + lVar21 + 0xe40) = 0;
              Memory::free_static((void *)(lVar18 + -0x10),false);
            }
          }
          *(long *)(this + lVar17 * 0x1028 + 0xe40) = local_228;
        }
        setup_joypad_properties(this,(Joypad *)(this + lVar23));
        __sprintf_chk(local_148,2,0x80,"%04x%04x",(ushort)local_220 << 8 | (ushort)local_220 >> 8,0)
        ;
        if (((local_220._2_2_ == 0) || (local_220._4_2_ == 0)) || (local_220._6_2_ == 0)) {
          local_230 = (char *)0x0;
          local_210 = (String *)strlen(local_148);
          local_218 = local_148;
          String::parse_latin1((StrRange *)&local_230);
          if ((local_238 != 0) && (iVar12 = (int)*(undefined8 *)(local_238 + -8), iVar12 != 0)) {
            iVar12 = iVar12 + -1;
            iVar13 = 0xb;
            if (iVar12 < 0xc) {
              iVar13 = iVar12;
            }
            if (0 < iVar12) {
              lVar18 = 0;
              do {
                if (local_238 == 0) {
                  if (lVar18 != 0) {
                    lVar23 = 0;
LAB_0010215c:
                    _err_print_index_error
                              ("get","./core/templates/cowdata.h",0xdb,lVar18,lVar23,"p_index",
                               "size()","",false,true);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  }
LAB_00102145:
                  local_14a = '0';
                  local_14b = '0';
                }
                else {
                  lVar23 = *(long *)(local_238 + -8);
                  if (lVar18 == lVar23) goto LAB_00102145;
                  if (lVar23 <= lVar18) goto LAB_0010215c;
                  uVar14 = *(uint *)(local_238 + lVar18 * 4);
                  local_14a = "0123456789abcdef"[uVar14 & 0xf];
                  local_14b = "0123456789abcdef"[(byte)((byte)uVar14 >> 4)];
                }
                local_149 = 0;
                local_228 = 0;
                local_210 = (String *)strlen(&local_14b);
                local_218 = &local_14b;
                String::parse_latin1((StrRange *)&local_228);
                String::operator+((String *)&local_218,(String *)&local_230);
                pcVar9 = local_218;
                pcVar6 = local_230;
                if (local_230 == local_218) {
                  if (local_230 != (char *)0x0) {
                    LOCK();
                    plVar1 = (long *)(local_230 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_218 = (char *)0x0;
                      Memory::free_static(pcVar9 + -0x10,false);
                    }
                  }
                }
                else {
                  if (local_230 != (char *)0x0) {
                    LOCK();
                    plVar1 = (long *)(local_230 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_230 = (char *)0x0;
                      Memory::free_static(pcVar6 + -0x10,false);
                    }
                  }
                  local_230 = local_218;
                }
                lVar23 = local_228;
                if (local_228 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_228 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_228 = 0;
                    Memory::free_static((void *)(lVar23 + -0x10),false);
                  }
                }
                lVar18 = lVar18 + 1;
              } while ((int)lVar18 < iVar13);
            }
          }
          String::operator+=((String *)&local_230,"00");
          uVar2 = *(undefined8 *)(this + 8);
          Dictionary::Dictionary((Dictionary *)&local_218);
          Input::joy_connection_changed
                    ((int)uVar2,SUB41(iVar11,0),(String *)0x1,(String *)&local_238,
                     (Dictionary *)&local_230);
          Dictionary::~Dictionary((Dictionary *)&local_218);
          pcVar6 = local_230;
          if (local_230 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_230 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_230 = (char *)0x0;
              Memory::free_static(pcVar6 + -0x10,false);
            }
          }
        }
        else {
          Dictionary::Dictionary((Dictionary *)&local_230);
          Variant::Variant((Variant *)local_1d8,local_220._2_2_);
          Variant::Variant((Variant *)local_1f8,"vendor_id");
          pVVar15 = (Variant *)Dictionary::operator[]((Variant *)&local_230);
          Variant::operator=(pVVar15,(Variant *)local_1d8);
          if (Variant::needs_deinit[local_1f8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_1d8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_1d8,local_220._4_2_);
          Variant::Variant((Variant *)local_1f8,"product_id");
          pVVar15 = (Variant *)Dictionary::operator[]((Variant *)&local_230);
          Variant::operator=(pVVar15,(Variant *)local_1d8);
          if (Variant::needs_deinit[local_1f8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_1d8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_1d8,(String *)&local_238);
          Variant::Variant((Variant *)local_1f8,"raw_name");
          pVVar15 = (Variant *)Dictionary::operator[]((Variant *)&local_230);
          Variant::operator=(pVVar15,(Variant *)local_1d8);
          if (Variant::needs_deinit[local_1f8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_1d8[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_228 = 0;
          local_210 = (String *)strlen(local_148);
          local_218 = local_148;
          String::parse_latin1((StrRange *)&local_228);
          local_244 = 0;
          if (local_228 != 0) {
            iVar12 = (int)*(undefined8 *)(local_228 + -8);
            local_244 = iVar12 + -1 + (uint)(iVar12 == 0);
          }
          uVar16 = (ulong)local_244;
          uVar19 = 0x80;
          if (0x7f < uVar16) {
            uVar19 = uVar16;
          }
          __sprintf_chk(local_148 + uVar16,2,uVar19 - uVar16,"%04x%04x%04x%04x%04x%04x",uVar14,0,
                        uVar3 | uVar4,0,uVar8 << 8 | uVar8 >> 8,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
          if (((local_220._2_2_ == 0x28de) && (local_220._4_2_ == 0x11ff)) &&
             (cVar10 = String::begins_with((char *)&local_238), cVar10 != '\0')) {
            String::substr((int)(String *)&local_218,(int)(StrRange *)&local_238);
            cVar10 = String::is_valid_int();
            if (cVar10 != '\0') {
              lVar18 = String::to_int();
              Variant::Variant((Variant *)local_1d8,lVar18);
              Variant::Variant((Variant *)local_1f8,"steam_input_index");
              pVVar15 = (Variant *)Dictionary::operator[]((Variant *)&local_230);
              Variant::operator=(pVVar15,(Variant *)local_1d8);
              if (Variant::needs_deinit[local_1f8[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_1d8[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
          }
          uVar2 = *(undefined8 *)(this + 8);
          local_228 = 0;
          local_210 = (String *)strlen(local_148);
          local_218 = local_148;
          String::parse_latin1((StrRange *)&local_228);
          Input::joy_connection_changed
                    ((int)uVar2,SUB41(iVar11,0),(String *)0x1,(String *)&local_238,
                     (Dictionary *)&local_228);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
          Dictionary::~Dictionary((Dictionary *)&local_230);
        }
        pthread_mutex_unlock((pthread_mutex_t *)(this + lVar17 * 0x28 + 0x102b8));
        lVar17 = local_238;
      }
    }
joined_r0x00101c52:
    local_238 = lVar17;
    if (lVar17 != 0) {
      LOCK();
      plVar1 = (long *)(lVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_238 = 0;
        Memory::free_static((void *)(lVar17 + -0x10),false);
      }
    }
  }
LAB_00101944:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoypadLinux::enumerate_joypads(udev*) */

void __thiscall JoypadLinux::enumerate_joypads(JoypadLinux *this,udev *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *__s;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (*_udev_enumerate_new_dylibloader_wrapper_libudev)(param_1);
  (*_udev_enumerate_add_match_subsystem_dylibloader_wrapper_libudev)(uVar4,"input");
  (*_udev_enumerate_scan_devices_dylibloader_wrapper_libudev)(uVar4);
  for (lVar5 = (*_udev_enumerate_get_list_entry_dylibloader_wrapper_libudev)(uVar4); lVar5 != 0;
      lVar5 = (*_udev_list_entry_get_next_dylibloader_wrapper_libudev)(lVar5)) {
    uVar6 = (*_udev_list_entry_get_name_dylibloader_wrapper_libudev)(lVar5);
    uVar6 = (*_udev_device_new_from_syspath_dylibloader_wrapper_libudev)(param_1,uVar6);
    __s = (char *)(*_udev_device_get_devnode_dylibloader_wrapper_libudev)(uVar6);
    if (__s != (char *)0x0) {
      local_60 = 0;
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)&local_60);
      iVar3 = String::find((char *)&local_60,0x102e2c);
      if (iVar3 == -1) {
        open_joypad(this,__s);
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    (*_udev_device_unref_dylibloader_wrapper_libudev)(uVar6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_udev_enumerate_unref_dylibloader_wrapper_libudev)(uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoypadLinux::monitor_joypads(udev*) */

void __thiscall JoypadLinux::monitor_joypads(JoypadLinux *this,udev *param_1)

{
  JoypadLinux JVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  fd_set *pfVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  byte bVar16;
  char *local_f8;
  long local_f0;
  timeval local_e8;
  char *local_d8;
  size_t local_d0;
  fd_set local_c8;
  long local_40;
  
  bVar16 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (*_udev_monitor_new_from_netlink_dylibloader_wrapper_libudev)(param_1,&_LC52);
  (*_udev_monitor_filter_add_match_subsystem_devtype_dylibloader_wrapper_libudev)(uVar6,"input",0);
  (*_udev_monitor_enable_receiving_dylibloader_wrapper_libudev)(uVar6);
  iVar4 = (*_udev_monitor_get_fd_dylibloader_wrapper_libudev)(uVar6);
  JVar1 = this[0x10];
  uVar14 = 1L << ((byte)iVar4 & 0x3f);
  do {
    if (JVar1 != (JoypadLinux)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010291e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*_udev_monitor_unref_dylibloader_wrapper_libudev)(uVar6);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pfVar13 = &local_c8;
    for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
      pfVar13->fds_bits[0] = 0;
      pfVar13 = (fd_set *)((long)pfVar13 + ((ulong)bVar16 * -2 + 1) * 8);
    }
    lVar12 = __fdelt_chk((long)iVar4);
    local_c8.fds_bits[lVar12] = local_c8.fds_bits[lVar12] | uVar14;
    local_e8.tv_sec = 0;
    local_e8.tv_usec = 0;
    iVar5 = select(iVar4 + 1,&local_c8,(fd_set *)0x0,(fd_set *)0x0,&local_e8);
    if ((((0 < iVar5) &&
         (lVar12 = __fdelt_chk((long)iVar4), (uVar14 & local_c8.fds_bits[lVar12]) != 0)) &&
        (lVar12 = (*_udev_monitor_receive_device_dylibloader_wrapper_libudev)(uVar6), lVar12 != 0))
       && (lVar7 = (*_udev_device_get_devnode_dylibloader_wrapper_libudev)(lVar12), lVar7 != 0)) {
      pcVar8 = (char *)(*_udev_device_get_action_dylibloader_wrapper_libudev)(lVar12);
      local_f8 = (char *)0x0;
      sVar9 = 0;
      if (pcVar8 != (char *)0x0) {
        sVar9 = strlen(pcVar8);
      }
      local_d8 = pcVar8;
      local_d0 = sVar9;
      String::parse_latin1((StrRange *)&local_f8);
      pcVar8 = (char *)(*_udev_device_get_devnode_dylibloader_wrapper_libudev)(lVar12);
      if (pcVar8 != (char *)0x0) {
        local_f0 = 0;
        local_d0 = strlen(pcVar8);
        local_d8 = pcVar8;
        String::parse_latin1((StrRange *)&local_f0);
        iVar5 = String::find((char *)&local_f0,0x102e2c);
        if (iVar5 == -1) {
          cVar3 = String::operator==((String *)&local_f8,"add");
          if (cVar3 == '\0') {
            local_d8 = (char *)0x0;
            plVar10 = (long *)(local_f8 + -0x10);
            if (local_f8 != (char *)0x0) {
              do {
                lVar7 = *plVar10;
                if (lVar7 == 0) goto LAB_0010299c;
                LOCK();
                lVar11 = *plVar10;
                bVar15 = lVar7 == lVar11;
                if (bVar15) {
                  *plVar10 = lVar7 + 1;
                  lVar11 = lVar7;
                }
                UNLOCK();
              } while (!bVar15);
              if (lVar11 != -1) {
                local_d8 = local_f8;
              }
            }
LAB_0010299c:
            cVar3 = String::operator==((String *)&local_d8,"remove");
            pcVar2 = local_d8;
            if (local_d8 != (char *)0x0) {
              LOCK();
              plVar10 = (long *)(local_d8 + -0x10);
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                local_d8 = (char *)0x0;
                Memory::free_static(pcVar2 + -0x10,false);
              }
            }
            if (cVar3 != '\0') {
              close_joypad(this,pcVar8);
            }
          }
          else {
            open_joypad(this,pcVar8);
          }
        }
        lVar7 = local_f0;
        if (local_f0 != 0) {
          LOCK();
          plVar10 = (long *)(local_f0 + -0x10);
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (*plVar10 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
      }
      (*_udev_device_unref_dylibloader_wrapper_libudev)(lVar12);
      pcVar8 = local_f8;
      if (local_f8 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_f8 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_f8 = (char *)0x0;
          Memory::free_static(pcVar8 + -0x10,false);
        }
      }
    }
    plVar10 = (long *)OS::get_singleton();
    (**(code **)(*plVar10 + 0x1f8))(plVar10,50000);
    JVar1 = this[0x10];
  } while( true );
}



/* JoypadLinux::monitor_joypads() */

void __thiscall JoypadLinux::monitor_joypads(JoypadLinux *this)

{
  JoypadLinux JVar1;
  long lVar2;
  int iVar3;
  DIR *__dirp;
  dirent64 *pdVar4;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long local_a0;
  char *local_98;
  size_t local_90;
  char local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  JVar1 = this[0x10];
  do {
    if (JVar1 != (JoypadLinux)0x0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __dirp = opendir("/dev/input");
    if (__dirp != (DIR *)0x0) {
LAB_00102a98:
      pdVar4 = readdir64(__dirp);
      if (pdVar4 != (dirent64 *)0x0) {
        while( true ) {
          iVar3 = strncmp(pdVar4->d_name,"event",5);
          if (iVar3 != 0) break;
          __sprintf_chk(local_88,2,0x40,"/dev/input/%.*s",0x10,pdVar4->d_name);
          local_a0 = 0;
          local_90 = strlen(local_88);
          local_98 = local_88;
          String::parse_latin1((StrRange *)&local_a0);
          lVar5 = CowData<String>::find((CowData<String> *)(this + 0x10540),(String *)&local_a0,0);
          lVar2 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar6 = (long *)(local_a0 + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if (lVar5 != -1) break;
          open_joypad(this,local_88);
          pdVar4 = readdir64(__dirp);
          if (pdVar4 == (dirent64 *)0x0) goto LAB_00102b78;
        }
        goto LAB_00102a98;
      }
    }
LAB_00102b78:
    closedir(__dirp);
    plVar6 = (long *)OS::get_singleton();
    (**(code **)(*plVar6 + 0x1f8))(plVar6,1000000);
    JVar1 = this[0x10];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoypadLinux::monitor_joypads_thread_run() */

void __thiscall JoypadLinux::monitor_joypads_thread_run(JoypadLinux *this)

{
  udev *puVar1;
  
  if (*this != (JoypadLinux)0x0) {
    puVar1 = (udev *)(*_udev_new_dylibloader_wrapper_libudev)();
    if (puVar1 != (udev *)0x0) {
      enumerate_joypads(this,puVar1);
      monitor_joypads(this,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00102c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_udev_unref_dylibloader_wrapper_libudev)(puVar1);
      return;
    }
    *this = (JoypadLinux)0x0;
    _err_print_error("monitor_joypads_thread_run","platform/linuxbsd/joypad_linux.cpp",0x91,
                     "Failed getting an udev context, falling back to parsing /dev/input.",0,0);
  }
  monitor_joypads(this);
  return;
}



/* JoypadLinux::monitor_joypads_thread_func(void*) */

void JoypadLinux::monitor_joypads_thread_func(void *param_1)

{
  if (param_1 != (void *)0x0) {
    monitor_joypads_thread_run((JoypadLinux *)param_1);
    return;
  }
  return;
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
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



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00103570:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00103570;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00103449:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00103449;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_001035c6;
  }
  if (lVar10 == lVar7) {
LAB_001034ef:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001035c6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001034da;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001034ef;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_001034da:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<String>::find(String const&, long) const */

long __thiscall CowData<String>::find(CowData<String> *this,String *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < 0) {
    return -1;
  }
  lVar2 = *(long *)this;
  if ((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + -8), lVar3 != 0)) {
    while (param_2 < lVar3) {
      cVar1 = String::operator==((String *)(lVar2 + param_2 * 8),param_1);
      if (cVar1 != '\0') {
        return param_2;
      }
      lVar2 = *(long *)this;
      param_2 = param_2 + 1;
      if (lVar2 == 0) {
        return -1;
      }
      lVar3 = *(long *)(lVar2 + -8);
    }
  }
  return -1;
}


