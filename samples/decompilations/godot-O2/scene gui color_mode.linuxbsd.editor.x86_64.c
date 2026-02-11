
/* ColorModeRGB::get_slider_max(int) const */

void __thiscall ColorModeRGB::get_slider_max(ColorModeRGB *this,int param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_1 < 4) {
    ColorPicker::get_pick_color();
  }
  else {
    _err_print_index_error
              ("get_slider_max","scene/gui/color_mode.cpp",0x2f,(long)param_1,4,"idx","4",
               "Couldn\'t get slider max value.",false,false);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ColorModeHSV::get_slider_value(int) const */

void ColorModeHSV::get_slider_value(int param_1)

{
  long lVar1;
  int in_ESI;
  long in_FS_OFFSET;
  float fVar2;
  float in_XMM1_Db;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI == 2) {
    ColorPicker::get_pick_color();
    Color::get_v();
    goto LAB_001001db;
  }
  if (in_ESI < 3) {
    if (in_ESI == 0) {
      ColorPicker::get_pick_color();
      fVar2 = (float)Color::get_s();
      if (0.0 < fVar2) {
        ColorPicker::get_pick_color();
        Color::get_h();
      }
      goto LAB_001001db;
    }
    if (in_ESI == 1) {
      ColorPicker::get_pick_color();
      fVar2 = (float)Color::get_v();
      if (0.0 < fVar2) {
        ColorPicker::get_pick_color();
        Color::get_s();
      }
      goto LAB_001001db;
    }
  }
  else if (in_ESI == 3) {
    ColorPicker::get_pick_color();
    round((double)in_XMM1_Db * _LC11);
    goto LAB_001001db;
  }
  _err_print_error("get_slider_value","scene/gui/color_mode.cpp",0x96,
                   "Method/function failed. Returning: 0","Couldn\'t get slider value.",0,0);
LAB_001001db:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ColorModeRAW::apply_theme() const */

undefined8 __thiscall ColorModeRAW::apply_theme(ColorModeRAW *this)

{
  StringName *pSVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  iVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    pSVar1 = (StringName *)ColorPicker::get_slider((int)*(undefined8 *)(this + 8));
    StringName::StringName((StringName *)&local_48,"grabber",false);
    Control::remove_theme_icon_override(pSVar1);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_48,"grabber_highlight",false);
    Control::remove_theme_icon_override(pSVar1);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_48,"slider",false);
    Control::remove_theme_style_override(pSVar1);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_48,"grabber_offset",false);
    Control::remove_theme_constant_override(pSVar1);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ColorModeOKHSL::get_slider_value(int) const */

void ColorModeOKHSL::get_slider_value(int param_1)

{
  long lVar1;
  int in_ESI;
  long in_FS_OFFSET;
  float fVar2;
  float in_XMM1_Db;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI == 2) {
    ColorPicker::get_pick_color();
    Color::get_ok_hsl_l();
    goto LAB_001004fb;
  }
  if (in_ESI < 3) {
    if (in_ESI == 0) {
      ColorPicker::get_pick_color();
      fVar2 = (float)Color::get_ok_hsl_s();
      if (0.0 < fVar2) {
        ColorPicker::get_pick_color();
        Color::get_ok_hsl_h();
      }
      goto LAB_001004fb;
    }
    if (in_ESI == 1) {
      ColorPicker::get_pick_color();
      fVar2 = (float)Color::get_ok_hsl_l();
      if (0.0 < fVar2) {
        ColorPicker::get_pick_color();
        Color::get_ok_hsl_s();
      }
      goto LAB_001004fb;
    }
  }
  else if (in_ESI == 3) {
    ColorPicker::get_pick_color();
    round((double)in_XMM1_Db * _LC11);
    goto LAB_001004fb;
  }
  _err_print_error("get_slider_value","scene/gui/color_mode.cpp",0x143,
                   "Method/function failed. Returning: 0","Couldn\'t get slider value.",0,0);
LAB_001004fb:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ColorModeHSV::get_slider_max(int) const */

undefined4 __thiscall ColorModeHSV::get_slider_max(ColorModeHSV *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 4 + 0x28);
  }
  _err_print_index_error
            ("get_slider_max","scene/gui/color_mode.cpp",0x7d,(long)param_1,4,"idx","4",
             "Couldn\'t get slider max value.",false,false);
  return 0;
}



/* ColorModeRAW::get_slider_max(int) const */

undefined4 __thiscall ColorModeRAW::get_slider_max(ColorModeRAW *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 4 + 0x28);
  }
  _err_print_index_error
            ("get_slider_max","scene/gui/color_mode.cpp",0xda,(long)param_1,4,"idx","4",
             "Couldn\'t get slider max value.",false,false);
  return 0;
}



/* ColorModeOKHSL::get_slider_max(int) const */

undefined4 __thiscall ColorModeOKHSL::get_slider_max(ColorModeOKHSL *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 4 + 0x28);
  }
  _err_print_index_error
            ("get_slider_max","scene/gui/color_mode.cpp",0x12a,(long)param_1,4,"idx","4",
             "Couldn\'t get slider max value.",false,false);
  return 0;
}



/* ColorModeRGB::get_slider_value(int) const */

float ColorModeRGB::get_slider_value(int param_1)

{
  uint in_ESI;
  long in_FS_OFFSET;
  float fVar1;
  undefined8 in_XMM1_Qa;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI < 4) {
    local_28 = ColorPicker::get_pick_color();
    local_20 = in_XMM1_Qa;
    fVar1 = _LC3 * *(float *)((long)&local_28 + (long)(int)in_ESI * 4);
  }
  else {
    _err_print_index_error
              ("get_slider_value","scene/gui/color_mode.cpp",0x35,(long)(int)in_ESI,4,"idx","4",
               "Couldn\'t get slider value.",false,false);
    fVar1 = 0.0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ColorModeRAW::get_slider_value(int) const */

void __thiscall ColorModeRAW::get_slider_value(ColorModeRAW *this,int param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_1 < 4) {
    ColorPicker::get_pick_color();
  }
  else {
    _err_print_index_error
              ("get_slider_value","scene/gui/color_mode.cpp",0xdf,(long)param_1,4,"idx","4",
               "Couldn\'t get slider value.",false,false);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

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
  __n = lVar2 * 8;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColorModeOKHSL::get_color() const */

undefined1  [16] ColorModeOKHSL::get_color(void)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  float *local_40;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  ColorPicker::get_active_slider_values();
  uVar6 = _UNK_00105c18;
  uVar5 = __LC34;
  if (local_40 == (float *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(local_40 + -2);
    if (3 < lVar7) {
      Color::set_ok_hsl(*local_40 / __LC12,local_40[1] / _LC13,local_40[2] / _LC13,
                        local_40[3] / _LC3);
      auVar4._8_8_ = uVar6;
      auVar4._0_8_ = uVar5;
      if (local_40 != (float *)0x0) {
        LOCK();
        pfVar1 = local_40 + -4;
        *(long *)pfVar1 = *(long *)pfVar1 + -1;
        UNLOCK();
        if (*(long *)pfVar1 == 0) {
          Memory::free_static(local_40 + -4,false);
        }
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return auVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,3,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColorModeHSV::get_color() const */

undefined1  [16] ColorModeHSV::get_color(void)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  float *local_40;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  ColorPicker::get_active_slider_values();
  uVar6 = _UNK_00105c18;
  uVar5 = __LC34;
  if (local_40 == (float *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(local_40 + -2);
    if (3 < lVar7) {
      Color::set_hsv(*local_40 / __LC12,local_40[1] / _LC13,local_40[2] / _LC13,local_40[3] / _LC3);
      auVar4._8_8_ = uVar6;
      auVar4._0_8_ = uVar5;
      if (local_40 != (float *)0x0) {
        LOCK();
        pfVar1 = local_40 + -4;
        *(long *)pfVar1 = *(long *)pfVar1 + -1;
        UNLOCK();
        if (*(long *)pfVar1 == 0) {
          Memory::free_static(local_40 + -4,false);
        }
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return auVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,3,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColorModeRAW::get_color() const */

undefined1  [16] ColorModeRAW::get_color(void)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ColorPicker::get_active_slider_values();
  local_38 = __LC34;
  uStack_30 = _UNK_00105c18;
  if (local_40 == 0) {
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(local_40 + -8);
    lVar4 = 0;
    lVar5 = 0;
    if (0 < lVar6) {
      do {
        *(undefined4 *)((long)&local_38 + lVar4 * 4) = *(undefined4 *)(local_40 + lVar4 * 4);
        lVar4 = lVar4 + 1;
        if (lVar4 == 4) {
          auVar3._8_8_ = uStack_30;
          auVar3._0_8_ = local_38;
          LOCK();
          plVar1 = (long *)(local_40 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_40 + -0x10),false);
          }
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            return auVar3;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar5 = lVar4;
      } while (lVar4 < lVar6);
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColorModeRGB::get_color() const */

undefined1  [16] ColorModeRGB::get_color(void)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ColorPicker::get_active_slider_values();
  local_38 = __LC34;
  uStack_30 = _UNK_00105c18;
  if (local_40 == 0) {
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(local_40 + -8);
    lVar4 = 0;
    lVar5 = 0;
    if (0 < lVar6) {
      do {
        *(float *)((long)&local_38 + lVar4 * 4) = *(float *)(local_40 + lVar4 * 4) / _LC3;
        lVar4 = lVar4 + 1;
        if (lVar4 == 4) {
          auVar3._8_8_ = uStack_30;
          auVar3._0_8_ = local_38;
          LOCK();
          plVar1 = (long *)(local_40 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_40 + -0x10),false);
          }
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            return auVar3;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar5 = lVar4;
      } while (lVar4 < lVar6);
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ColorModeHSV::_value_changed() */

void __thiscall ColorModeHSV::_value_changed(ColorModeHSV *this)

{
  float *pfVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  float *local_20;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  ColorPicker::get_active_slider_values();
  if (local_20 == (float *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(local_20 + -2);
    if (1 < lVar4) {
      if ((0.0 < local_20[1]) || (*local_20 != *(float *)(this + 0x38))) {
        *(float *)(this + 0x38) = *local_20;
      }
      if (lVar4 != 2) {
        if ((0.0 < local_20[2]) || (local_20[1] != *(float *)(this + 0x3c))) {
          *(float *)(this + 0x3c) = local_20[1];
        }
        LOCK();
        pfVar1 = local_20 + -4;
        *(long *)pfVar1 = *(long *)pfVar1 + -1;
        UNLOCK();
        if (*(long *)pfVar1 == 0) {
          Memory::free_static(local_20 + -4,false);
        }
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar3 = 2;
      lVar4 = 2;
      goto LAB_00100fa3;
    }
  }
  lVar3 = 1;
LAB_00100fa3:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ColorModeOKHSL::_value_changed() */

void __thiscall ColorModeOKHSL::_value_changed(ColorModeOKHSL *this)

{
  float *pfVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  float *local_20;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  ColorPicker::get_active_slider_values();
  if (local_20 == (float *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(local_20 + -2);
    if (1 < lVar4) {
      if ((0.0 < local_20[1]) || (*local_20 != *(float *)(this + 0x38))) {
        *(float *)(this + 0x38) = *local_20;
      }
      if (lVar4 != 2) {
        if ((0.0 < local_20[2]) || (local_20[1] != *(float *)(this + 0x3c))) {
          *(float *)(this + 0x3c) = local_20[1];
        }
        LOCK();
        pfVar1 = local_20 + -4;
        *(long *)pfVar1 = *(long *)pfVar1 + -1;
        UNLOCK();
        if (*(long *)pfVar1 == 0) {
          Memory::free_static(local_20 + -4,false);
        }
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar3 = 2;
      lVar4 = 2;
      goto LAB_00101103;
    }
  }
  lVar3 = 1;
LAB_00101103:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
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



/* ColorModeRGB::get_slider_label(int) const */

CowData<char32_t> * ColorModeRGB::get_slider_label(int param_1)

{
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  if (in_EDX < 3) {
    *(undefined8 *)this = 0;
    if (*(long *)(in_RSI + 0x10 + (long)(int)in_EDX * 8) != 0) {
      CowData<char32_t>::_ref(this,(CowData *)(in_RSI + ((long)(int)in_EDX + 2) * 8));
    }
    return this;
  }
  _err_print_index_error
            ("get_slider_label","scene/gui/color_mode.cpp",0x2a,(long)(int)in_EDX,3,"idx","3",
             "Couldn\'t get slider label.",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* ColorModeOKHSL::get_slider_label(int) const */

CowData<char32_t> * ColorModeOKHSL::get_slider_label(int param_1)

{
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  if (in_EDX < 3) {
    *(undefined8 *)this = 0;
    if (*(long *)(in_RSI + 0x10 + (long)(int)in_EDX * 8) != 0) {
      CowData<char32_t>::_ref(this,(CowData *)(in_RSI + ((long)(int)in_EDX + 2) * 8));
    }
    return this;
  }
  _err_print_index_error
            ("get_slider_label","scene/gui/color_mode.cpp",0x125,(long)(int)in_EDX,3,"idx","3",
             "Couldn\'t get slider label.",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* ColorModeHSV::get_slider_label(int) const */

CowData<char32_t> * ColorModeHSV::get_slider_label(int param_1)

{
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  if (in_EDX < 3) {
    *(undefined8 *)this = 0;
    if (*(long *)(in_RSI + 0x10 + (long)(int)in_EDX * 8) != 0) {
      CowData<char32_t>::_ref(this,(CowData *)(in_RSI + ((long)(int)in_EDX + 2) * 8));
    }
    return this;
  }
  _err_print_index_error
            ("get_slider_label","scene/gui/color_mode.cpp",0x78,(long)(int)in_EDX,3,"idx","3",
             "Couldn\'t get slider label.",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* ColorModeRAW::get_slider_label(int) const */

CowData<char32_t> * ColorModeRAW::get_slider_label(int param_1)

{
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  if (in_EDX < 3) {
    *(undefined8 *)this = 0;
    if (*(long *)(in_RSI + 0x10 + (long)(int)in_EDX * 8) != 0) {
      CowData<char32_t>::_ref(this,(CowData *)(in_RSI + ((long)(int)in_EDX + 2) * 8));
    }
    return this;
  }
  _err_print_index_error
            ("get_slider_label","scene/gui/color_mode.cpp",0xd5,(long)(int)in_EDX,3,"idx","3",
             "Couldn\'t get slider label.",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

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



/* ColorMode::ColorMode(ColorPicker*) */

void __thiscall ColorMode::ColorMode(ColorMode *this,ColorPicker *param_1)

{
  *(ColorPicker **)(this + 8) = param_1;
  *(undefined ***)this = &PTR___cxa_pure_virtual_00105940;
  return;
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  int iVar2;
  CowData<Vector2> *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  CowData<Vector2> *pCVar8;
  CowData<Vector2> *pCVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar10 = *(long *)this;
  if (lVar10 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    pCVar3 = (CowData<Vector2> *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar10 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar10 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar3 = (CowData<Vector2> *)(lVar11 * 8);
    if (pCVar3 != (CowData<Vector2> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<Vector2> *)((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar9 = (CowData<Vector2> *)(uVar4 | uVar4 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<Vector2> *)0x0) {
      if (param_1 <= lVar11) {
        if ((pCVar8 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar8), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00104f24();
        return;
      }
      if (pCVar8 == pCVar3) {
LAB_0010170c:
        puVar12 = *(undefined8 **)this;
        if (puVar12 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
        lVar10 = puVar12[-1];
        if (param_1 <= lVar10) goto LAB_0010169d;
      }
      else {
        if (lVar11 != 0) {
          pCVar9 = this;
          iVar2 = _realloc(this,(long)pCVar8);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_0010170c;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar7 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_001017b2;
        }
        puVar12 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar12;
        lVar10 = 0;
      }
      memset(puVar12 + lVar10,0,(param_1 - lVar10) * 8);
LAB_0010169d:
      puVar12[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001017b2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar6,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  CowData<Color> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  CowData<Color> *pCVar12;
  CowData<Color> *pCVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar14 = *(long *)this;
  if (lVar14 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar15 = 0;
    pCVar4 = (CowData<Color> *)0x0;
  }
  else {
    lVar15 = *(long *)(lVar14 + -8);
    if (param_1 == lVar15) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar14 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar14 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar4 = (CowData<Color> *)(lVar15 * 0x10);
    if (pCVar4 != (CowData<Color> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<Color> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 0x10 != 0) {
    uVar5 = param_1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar13 = (CowData<Color> *)(uVar5 | uVar5 >> 0x20);
    pCVar12 = pCVar13 + 1;
    if (pCVar12 != (CowData<Color> *)0x0) {
      if (param_1 <= lVar15) {
        if ((pCVar12 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar12), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00104f3a();
        return;
      }
      if (pCVar12 == pCVar4) {
LAB_001019bc:
        puVar9 = *(undefined8 **)this;
        if (puVar9 == (undefined8 *)0x0) {
          resize<false>((long)pCVar13);
          return;
        }
        lVar14 = puVar9[-1];
        if (param_1 <= lVar14) goto LAB_00101958;
      }
      else {
        if (lVar15 != 0) {
          pCVar13 = this;
          iVar3 = _realloc(this,(long)pCVar12);
          if (iVar3 != 0) {
            return;
          }
          goto LAB_001019bc;
        }
        puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar13 + 0x11),false);
        if (puVar6 == (undefined8 *)0x0) {
          uVar11 = 0x171;
          pcVar10 = "Parameter \"mem_new\" is null.";
          goto LAB_00101a52;
        }
        puVar9 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar9;
        lVar14 = 0;
      }
      uVar2 = _UNK_00105c18;
      uVar11 = __LC34;
      puVar7 = puVar9 + lVar14 * 2;
      puVar6 = puVar7;
      if (((param_1 - lVar14) * 0x10 & 0x10U) != 0) {
        *puVar7 = __LC34;
        puVar7[1] = uVar2;
        puVar6 = puVar7 + 2;
        if (puVar7 + (param_1 - lVar14) * 2 == puVar7 + 2) goto LAB_00101958;
      }
      do {
        *puVar6 = uVar11;
        puVar6[1] = uVar2;
        puVar8 = puVar6 + 4;
        puVar6[2] = uVar11;
        puVar6[3] = uVar2;
        puVar6 = puVar8;
      } while (puVar7 + (param_1 - lVar14) * 2 != puVar8);
LAB_00101958:
      puVar9[-1] = param_1;
      return;
    }
  }
  uVar11 = 0x16a;
  pcVar10 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101a52:
  _err_print_error("resize","./core/templates/cowdata.h",uVar11,pcVar10,0,0);
  return;
}



/* ColorModeRAW::slider_draw(int) */

void ColorModeRAW::slider_draw(int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  Object *pOVar3;
  undefined8 *puVar4;
  char cVar5;
  Ref *pRVar6;
  int in_ESI;
  undefined4 in_register_0000003c;
  long lVar7;
  long in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 in_XMM1_Da;
  float fVar9;
  Object *local_a0;
  undefined1 local_98 [8];
  undefined8 *local_90;
  undefined1 local_88 [8];
  undefined8 *local_80;
  undefined1 local_78 [8];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined8 *)0x0;
  CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_90,4);
  local_80 = (undefined8 *)0x0;
  CowData<Color>::resize<false>((CowData<Color> *)&local_80,4);
  pRVar6 = (Ref *)ColorPicker::get_slider
                            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 8));
  uVar8 = Control::get_size();
  uVar2 = ColorPicker::get_pick_color();
  if (in_ESI != 3) goto LAB_00101b30;
  lVar7 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
  local_68 = 0;
  fVar9 = *(float *)(lVar7 + 0xce0) * _LC49;
  local_58 = _LC0;
  uStack_54 = _LC0;
  uStack_50 = _LC0;
  uStack_4c = _LC0;
  local_60 = CONCAT44(fVar9,uVar8);
  CanvasItem::draw_texture_rect
            (pRVar6,(Rect2 *)(lVar7 + 0xd48),SUB81(&local_68,0),(Color *)0x1,SUB81(&local_58,0));
  if (local_80 == (undefined8 *)0x0) {
    lVar7 = 0;
LAB_00101e6b:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_80 != (undefined8 *)0x0) goto LAB_00101c80;
LAB_00101ec7:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,1,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_80 != (undefined8 *)0x0) goto LAB_00101cb1;
LAB_00101f04:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,2,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_80 != (undefined8 *)0x0) goto LAB_00101ce2;
LAB_00101f41:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,3,lVar7,"p_index","size()","",false,false);
  }
  else {
    lVar7 = local_80[-1];
    if (lVar7 < 1) goto LAB_00101e6b;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_80);
    *local_80 = uVar2;
    *(undefined4 *)((long)local_80 + 0xc) = 0;
    *(undefined4 *)(local_80 + 1) = in_XMM1_Da;
LAB_00101c80:
    lVar7 = local_80[-1];
    if (lVar7 < 2) goto LAB_00101ec7;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_80);
    local_80[2] = uVar2;
    *(undefined4 *)((long)local_80 + 0x1c) = 0x3f800000;
    *(undefined4 *)(local_80 + 3) = in_XMM1_Da;
LAB_00101cb1:
    lVar7 = local_80[-1];
    if (lVar7 < 3) goto LAB_00101f04;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_80);
    local_80[4] = uVar2;
    *(undefined4 *)((long)local_80 + 0x2c) = 0x3f800000;
    *(undefined4 *)(local_80 + 5) = in_XMM1_Da;
LAB_00101ce2:
    lVar7 = local_80[-1];
    if (lVar7 < 4) goto LAB_00101f41;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_80);
    local_80[6] = uVar2;
    *(undefined4 *)((long)local_80 + 0x3c) = 0;
    *(undefined4 *)(local_80 + 7) = in_XMM1_Da;
  }
  if (local_90 == (undefined8 *)0x0) {
    lVar7 = 0;
LAB_00101f7b:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_90 != (undefined8 *)0x0) goto LAB_00101d42;
LAB_00101fd7:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,1,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_90 != (undefined8 *)0x0) goto LAB_00101d6f;
LAB_00102014:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,2,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_90 != (undefined8 *)0x0) goto LAB_00101d93;
LAB_00102051:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,3,lVar7,"p_index","size()","",false,false);
  }
  else {
    lVar7 = local_90[-1];
    if (lVar7 < 1) goto LAB_00101f7b;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
    *local_90 = 0;
LAB_00101d42:
    lVar7 = local_90[-1];
    if (lVar7 < 2) goto LAB_00101fd7;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
    *(undefined4 *)((long)local_90 + 0xc) = 0;
    *(undefined4 *)(local_90 + 1) = uVar8;
LAB_00101d6f:
    lVar7 = local_90[-1];
    if (lVar7 < 3) goto LAB_00102014;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
    local_90[2] = CONCAT44(fVar9,uVar8);
LAB_00101d93:
    lVar7 = local_90[-1];
    if (lVar7 < 4) goto LAB_00102051;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
    *(undefined4 *)(local_90 + 3) = 0;
    *(float *)((long)local_90 + 0x1c) = fVar9;
  }
  local_a0 = (Object *)0x0;
  local_70 = 0;
  CanvasItem::draw_polygon(pRVar6,local_98,local_88,local_78,&local_a0);
  lVar7 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (((local_a0 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar3 = local_a0, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_a0), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_00101b30:
  puVar4 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_80 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = (undefined8 *)0x0;
      Memory::free_static(puVar4 + -2,false);
    }
  }
  puVar4 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_90 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = (undefined8 *)0x0;
      Memory::free_static(puVar4 + -2,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColorModeHSV::slider_draw(int) */

void __thiscall ColorModeHSV::slider_draw(ColorModeHSV *this,int param_1)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  Ref *pRVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 local_108;
  float local_f8;
  Object *local_b0;
  undefined1 local_a8 [8];
  undefined8 *local_a0;
  undefined1 local_98 [8];
  undefined8 *local_90;
  Object *local_88;
  long local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (undefined8 *)0x0;
  CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_a0,4);
  local_90 = (undefined8 *)0x0;
  CowData<Color>::resize<false>((CowData<Color> *)&local_90,4);
  pRVar4 = (Ref *)ColorPicker::get_slider((int)*(undefined8 *)(this + 8));
  uVar7 = Control::get_size();
  local_78 = ColorPicker::get_pick_color();
  fVar14 = *(float *)(*(long *)(this + 8) + 0xce0) * _LC49;
  uVar17 = CONCAT44(fVar14,uVar7);
  if (param_1 == 3) {
    local_68 = 0;
    local_58._4_4_ = _LC0;
    local_58._0_4_ = _LC0;
    uStack_50 = CONCAT44(_LC0,_LC0);
    uStack_60 = uVar17;
    CanvasItem::draw_texture_rect
              (pRVar4,(Rect2 *)(*(long *)(this + 8) + 0xd48),SUB81(&local_68,0),(Color *)0x1,
               SUB81(local_58,0));
    fVar8 = 0.0;
    uVar12 = local_78._8_4_;
    uVar15 = local_78._4_4_;
    uVar16 = local_78._0_4_;
    uVar18 = local_78._4_4_;
    fVar9 = _LC0;
    uVar13 = local_78._0_4_;
    uVar11 = uVar12;
  }
  else if (param_1 == 0) {
    uVar12 = Color::get_v();
    uVar15 = uVar12;
    uVar16 = uVar12;
    uVar18 = uVar12;
    fVar9 = _LC0;
    uVar13 = uVar12;
    fVar8 = _LC0;
    uVar11 = uVar12;
  }
  else {
    uStack_60 = CONCAT44(_LC0,_UNK_00105c18);
    local_68 = __LC34;
    local_58 = (undefined1  [8])__LC34;
    uStack_50 = uStack_60;
    fVar8 = (float)Color::get_v();
    fVar9 = (float)Color::get_h();
    Color::set_hsv(fVar9,0.0,fVar8,_LC0);
    if (param_1 == 1) {
      uVar16 = (undefined4)local_68;
      uVar18 = local_68._4_4_;
      fVar8 = uStack_60._4_4_;
      uVar12 = (undefined4)uStack_60;
    }
    else {
      uVar16 = 0;
      uVar18 = 0;
      fVar8 = _LC0;
      uVar12 = 0;
    }
    fVar9 = (float)Color::get_s();
    if (_LC52 <= ABS(fVar9)) {
      local_f8 = (float)Color::get_h();
    }
    else {
      local_f8 = *(float *)(this + 0x38) / __LC12;
    }
    fVar9 = (float)Color::get_v();
    Color::set_hsv(local_f8,_LC0,fVar9,_LC0);
    fVar9 = (float)Color::get_s();
    fVar10 = (float)Color::get_h();
    Color::set_hsv(fVar10,fVar9,_LC0,_LC0);
    puVar5 = &local_68;
    if (param_1 != 1) {
      puVar5 = (undefined8 *)local_58;
    }
    uVar15 = *(undefined4 *)((long)puVar5 + 4);
    fVar9 = *(float *)((long)puVar5 + 0xc);
    uVar13 = *(undefined4 *)puVar5;
    uVar11 = *(undefined4 *)(puVar5 + 1);
  }
  local_108 = CONCAT44(uVar15,uVar13);
  if (local_90 == (undefined8 *)0x0) {
    lVar6 = 0;
LAB_001028db:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar6,"p_index","size()","",false,false);
    lVar6 = 0;
    if (local_90 != (undefined8 *)0x0) goto LAB_00102445;
LAB_0010293e:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,1,lVar6,"p_index","size()","",false,false);
    lVar6 = 0;
    if (local_90 != (undefined8 *)0x0) goto LAB_00102468;
LAB_00102980:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,2,lVar6,"p_index","size()","",false,false);
    lVar6 = 0;
    if (local_90 != (undefined8 *)0x0) goto LAB_0010248b;
LAB_001029c2:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,3,lVar6,"p_index","size()","",false,false);
  }
  else {
    lVar6 = local_90[-1];
    if (lVar6 < 1) goto LAB_001028db;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_90);
    *local_90 = CONCAT44(uVar18,uVar16);
    local_90[1] = CONCAT44(fVar8,uVar12);
LAB_00102445:
    lVar6 = local_90[-1];
    if (lVar6 < 2) goto LAB_0010293e;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_90);
    local_90[2] = local_108;
    local_90[3] = CONCAT44(fVar9,uVar11);
LAB_00102468:
    lVar6 = local_90[-1];
    if (lVar6 < 3) goto LAB_00102980;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_90);
    local_90[4] = local_108;
    local_90[5] = CONCAT44(fVar9,uVar11);
LAB_0010248b:
    lVar6 = local_90[-1];
    if (lVar6 < 4) goto LAB_001029c2;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_90);
    local_90[6] = CONCAT44(uVar18,uVar16);
    local_90[7] = CONCAT44(fVar8,uVar12);
  }
  if (local_a0 == (undefined8 *)0x0) {
    lVar6 = 0;
LAB_001029fb:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar6,"p_index","size()","",false,false);
    lVar6 = 0;
    if (local_a0 != (undefined8 *)0x0) goto LAB_001024de;
LAB_00102a5e:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,1,lVar6,"p_index","size()","",false,false);
    lVar6 = 0;
    if (local_a0 != (undefined8 *)0x0) goto LAB_0010250b;
LAB_00102aa0:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,2,lVar6,"p_index","size()","",false,false);
    lVar6 = 0;
    if (local_a0 != (undefined8 *)0x0) goto LAB_0010252f;
  }
  else {
    lVar6 = local_a0[-1];
    if (lVar6 < 1) goto LAB_001029fb;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
    *local_a0 = 0;
LAB_001024de:
    lVar6 = local_a0[-1];
    if (lVar6 < 2) goto LAB_00102a5e;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
    *(undefined4 *)((long)local_a0 + 0xc) = 0;
    *(undefined4 *)(local_a0 + 1) = uVar7;
LAB_0010250b:
    lVar6 = local_a0[-1];
    if (lVar6 < 3) goto LAB_00102aa0;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
    local_a0[2] = uVar17;
LAB_0010252f:
    lVar6 = local_a0[-1];
    if (3 < lVar6) {
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
      *(undefined4 *)(local_a0 + 3) = 0;
      *(float *)((long)local_a0 + 0x1c) = fVar14;
      goto LAB_0010255c;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,3,lVar6,"p_index","size()","",false,false);
LAB_0010255c:
  local_b0 = (Object *)0x0;
  local_80 = 0;
  CanvasItem::draw_polygon(pRVar4,local_a8,local_98,(Rect2 *)&local_88,&local_b0);
  lVar6 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (local_b0 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_b0;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_b0);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (param_1 == 0) {
    local_88 = (Object *)0x0;
    if (*(Object **)(*(long *)(this + 8) + 0xd70) != (Object *)0x0) {
      local_88 = *(Object **)(*(long *)(this + 8) + 0xd70);
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_88 = (Object *)0x0;
      }
    }
    fVar14 = (float)Color::get_s();
    fVar8 = (float)Color::get_v();
    _local_58 = Color::from_hsv(0.0,0.0,fVar8,fVar14);
    local_68 = 0;
    uStack_60 = uVar17;
    CanvasItem::draw_texture_rect
              (pRVar4,(Rect2 *)&local_88,SUB81(&local_68,0),(Color *)0x0,SUB81(local_58,0));
    if (local_88 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_88;
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_88);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
  }
  puVar5 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_90 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = (undefined8 *)0x0;
      Memory::free_static(puVar5 + -2,false);
    }
  }
  puVar5 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_a0 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = (undefined8 *)0x0;
      Memory::free_static(puVar5 + -2,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ColorModeRGB::slider_draw(int) */

void __thiscall ColorModeRGB::slider_draw(ColorModeRGB *this,int param_1)

{
  long *plVar1;
  Object *pOVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  Ref *pRVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 auVar16 [12];
  uint local_c4;
  Object *local_a0;
  undefined1 local_98 [8];
  undefined8 *local_90;
  undefined1 local_88 [8];
  undefined8 *local_80;
  undefined1 local_78 [8];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined8 *)0x0;
  CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_90,4);
  local_80 = (undefined8 *)0x0;
  CowData<Color>::resize<false>((CowData<Color> *)&local_80,4);
  pRVar6 = (Ref *)ColorPicker::get_slider((int)*(undefined8 *)(this + 8));
  uVar8 = Control::get_size();
  auVar16 = ColorPicker::get_pick_color();
  local_c4 = auVar16._8_4_;
  uVar9 = auVar16._0_4_;
  uVar5 = auVar16._4_4_;
  fVar15 = *(float *)(*(long *)(this + 8) + 0xce0) * _LC49;
  uVar14 = CONCAT44(fVar15,uVar8);
  uVar11 = uVar5;
  uVar10 = local_c4;
  uVar12 = uVar9;
  if (param_1 == 3) {
    local_58 = _LC0;
    uStack_54 = _LC0;
    uStack_50 = _LC0;
    uStack_4c = _LC0;
    local_68 = 0;
    local_60 = uVar14;
    CanvasItem::draw_texture_rect
              (pRVar6,(Rect2 *)(*(long *)(this + 8) + 0xd48),SUB81(&local_68,0),(Color *)0x1,
               SUB81(&local_58,0));
    uVar13 = 0;
  }
  else {
    uVar13 = _LC0;
    if (param_1 == 2) {
      local_c4 = _LC0;
      uVar10 = 0;
    }
    else if (param_1 == 1) {
      uVar5 = _LC0;
      uVar11 = 0;
    }
    else if (param_1 == 0) {
      uVar9 = 0;
      uVar12 = _LC0;
    }
  }
  if (local_80 == (undefined8 *)0x0) {
    lVar7 = 0;
LAB_001031c3:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_80 != (undefined8 *)0x0) goto LAB_00102d97;
LAB_0010321d:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,1,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_80 != (undefined8 *)0x0) goto LAB_00102dcd;
LAB_0010325b:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,2,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_80 != (undefined8 *)0x0) goto LAB_00102e03;
LAB_00103299:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,3,lVar7,"p_index","size()","",false,false);
  }
  else {
    lVar7 = local_80[-1];
    if (lVar7 < 1) goto LAB_001031c3;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_80);
    *local_80 = CONCAT44(uVar11,uVar9);
    local_80[1] = CONCAT44(uVar13,uVar10);
LAB_00102d97:
    lVar7 = local_80[-1];
    if (lVar7 < 2) goto LAB_0010321d;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_80);
    local_80[2] = CONCAT44(uVar5,uVar12);
    *(undefined4 *)((long)local_80 + 0x1c) = 0x3f800000;
    *(uint *)(local_80 + 3) = local_c4;
LAB_00102dcd:
    lVar7 = local_80[-1];
    if (lVar7 < 3) goto LAB_0010325b;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_80);
    local_80[4] = CONCAT44(uVar5,uVar12);
    *(undefined4 *)((long)local_80 + 0x2c) = 0x3f800000;
    *(uint *)(local_80 + 5) = local_c4;
LAB_00102e03:
    lVar7 = local_80[-1];
    if (lVar7 < 4) goto LAB_00103299;
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_80);
    local_80[6] = CONCAT44(uVar11,uVar9);
    local_80[7] = CONCAT44(uVar13,uVar10);
  }
  if (local_90 == (undefined8 *)0x0) {
    lVar7 = 0;
LAB_001030c3:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_90 != (undefined8 *)0x0) goto LAB_00102e56;
LAB_0010311a:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,1,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_90 != (undefined8 *)0x0) goto LAB_00102e83;
LAB_00103155:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,2,lVar7,"p_index","size()","",false,false);
    lVar7 = 0;
    if (local_90 != (undefined8 *)0x0) goto LAB_00102ea7;
  }
  else {
    lVar7 = local_90[-1];
    if (lVar7 < 1) goto LAB_001030c3;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
    *local_90 = 0;
LAB_00102e56:
    lVar7 = local_90[-1];
    if (lVar7 < 2) goto LAB_0010311a;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
    *(undefined4 *)((long)local_90 + 0xc) = 0;
    *(undefined4 *)(local_90 + 1) = uVar8;
LAB_00102e83:
    lVar7 = local_90[-1];
    if (lVar7 < 3) goto LAB_00103155;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
    local_90[2] = uVar14;
LAB_00102ea7:
    lVar7 = local_90[-1];
    if (3 < lVar7) {
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
      *(undefined4 *)(local_90 + 3) = 0;
      *(float *)((long)local_90 + 0x1c) = fVar15;
      goto LAB_00102ed4;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,3,lVar7,"p_index","size()","",false,false);
LAB_00102ed4:
  local_a0 = (Object *)0x0;
  local_70 = 0;
  CanvasItem::draw_polygon(pRVar6,local_98,local_88,local_78,&local_a0);
  lVar7 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (((local_a0 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar2 = local_a0, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_a0), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  puVar3 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_80 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = (undefined8 *)0x0;
      Memory::free_static(puVar3 + -2,false);
    }
  }
  puVar3 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_90 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = (undefined8 *)0x0;
      Memory::free_static(puVar3 + -2,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColorModeOKHSL::slider_draw(int) */

void __thiscall ColorModeOKHSL::slider_draw(ColorModeOKHSL *this,int param_1)

{
  long *plVar1;
  undefined8 *__dest;
  code *pcVar2;
  Vector *pVVar3;
  char cVar4;
  Ref *pRVar5;
  Gradient *this_00;
  undefined8 *puVar6;
  Object *pOVar7;
  undefined8 *puVar8;
  size_t __n;
  ulong uVar9;
  long lVar10;
  Gradient *pGVar11;
  long lVar12;
  long in_FS_OFFSET;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  Vector *local_e0;
  undefined1 local_d8 [8];
  undefined8 *local_d0;
  undefined1 local_c8 [8];
  undefined8 *local_c0;
  Object *local_b8;
  undefined8 *local_b0;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pRVar5 = (Ref *)ColorPicker::get_slider((int)*(undefined8 *)(this + 8));
  fVar13 = (float)Control::get_size();
  local_d0 = (undefined8 *)0x0;
  uStack_90 = CONCAT44(_LC0,_UNK_00105c18);
  local_c0 = (undefined8 *)0x0;
  local_98 = __LC34;
  fVar17 = *(float *)(*(long *)(this + 8) + 0xce0) * _LC49;
  local_88 = __LC34;
  uVar18 = CONCAT44(fVar17,fVar13);
  uStack_80 = uStack_90;
  local_78 = ColorPicker::get_pick_color();
  if (param_1 == 2) {
    CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_d0,6);
    CowData<Color>::resize<false>((CowData<Color> *)&local_c0,6);
    uStack_90 = CONCAT44(_LC0,_UNK_00105c18);
    local_98 = __LC34;
    local_58 = __LC34;
    uStack_50 = uStack_90;
    fVar15 = (float)Color::get_ok_hsl_s();
    if (_LC52 <= ABS(fVar15)) {
      fVar15 = (float)Color::get_ok_hsl_h();
    }
    else {
      fVar15 = *(float *)(this + 0x38) / __LC12;
    }
    fVar16 = (float)Color::get_ok_hsl_l();
    if (_LC52 <= ABS(fVar16)) {
      fVar16 = (float)Color::get_ok_hsl_s();
    }
    else {
      fVar16 = *(float *)(this + 0x3c) / _LC13;
    }
    Color::set_ok_hsl(fVar15,fVar16,_LC53,_LC0);
    Color::set_ok_hsl(fVar15,fVar16,_LC0,_LC0);
    if (local_c0 == (undefined8 *)0x0) {
      lVar10 = 0;
LAB_0010442b:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_c0 != (undefined8 *)0x0) goto LAB_00103c80;
LAB_00104489:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,1,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_c0 != (undefined8 *)0x0) goto LAB_00103ca8;
LAB_001044c9:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,2,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_c0 != (undefined8 *)0x0) goto LAB_00103cd0;
LAB_00104509:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,3,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_c0 != (undefined8 *)0x0) goto LAB_00103cf8;
LAB_00104549:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,4,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_c0 != (undefined8 *)0x0) goto LAB_00103d20;
LAB_00104589:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,5,lVar10,"p_index","size()","",false,false)
      ;
    }
    else {
      lVar10 = local_c0[-1];
      if (lVar10 < 1) goto LAB_0010442b;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      *local_c0 = local_98;
      local_c0[1] = uStack_90;
LAB_00103c80:
      lVar10 = local_c0[-1];
      if (lVar10 < 2) goto LAB_00104489;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      local_c0[2] = local_58;
      local_c0[3] = uStack_50;
LAB_00103ca8:
      lVar10 = local_c0[-1];
      if (lVar10 < 3) goto LAB_001044c9;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      local_c0[4] = local_88;
      local_c0[5] = uStack_80;
LAB_00103cd0:
      lVar10 = local_c0[-1];
      if (lVar10 < 4) goto LAB_00104509;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      local_c0[6] = local_88;
      local_c0[7] = uStack_80;
LAB_00103cf8:
      lVar10 = local_c0[-1];
      if (lVar10 < 5) goto LAB_00104549;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      local_c0[8] = local_58;
      local_c0[9] = uStack_50;
LAB_00103d20:
      lVar10 = local_c0[-1];
      if (lVar10 < 6) goto LAB_00104589;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      local_c0[10] = local_98;
      local_c0[0xb] = uStack_90;
    }
    if (local_d0 == (undefined8 *)0x0) {
      lVar10 = 0;
LAB_001045c3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      fVar15 = fVar13 * _LC53;
      if (local_d0 != (undefined8 *)0x0) goto LAB_00103d8a;
LAB_00104631:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,1,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_d0 != (undefined8 *)0x0) goto LAB_00103db0;
LAB_0010466e:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,2,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_d0 != (undefined8 *)0x0) goto LAB_00103ddd;
LAB_001046ab:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,3,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_d0 != (undefined8 *)0x0) goto LAB_00103e01;
LAB_001046e8:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,4,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_d0 != (undefined8 *)0x0) goto LAB_00103e33;
    }
    else {
      lVar10 = local_d0[-1];
      if (lVar10 < 1) goto LAB_001045c3;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
      fVar15 = fVar13 * _LC53;
      *local_d0 = 0;
LAB_00103d8a:
      lVar10 = local_d0[-1];
      if (lVar10 < 2) goto LAB_00104631;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
      *(float *)(local_d0 + 1) = fVar15;
      *(undefined4 *)((long)local_d0 + 0xc) = 0;
LAB_00103db0:
      lVar10 = local_d0[-1];
      if (lVar10 < 3) goto LAB_0010466e;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
      *(undefined4 *)((long)local_d0 + 0x14) = 0;
      *(float *)(local_d0 + 2) = fVar13;
LAB_00103ddd:
      lVar10 = local_d0[-1];
      if (lVar10 < 4) goto LAB_001046ab;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
      local_d0[3] = uVar18;
LAB_00103e01:
      lVar10 = local_d0[-1];
      if (lVar10 < 5) goto LAB_001046e8;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
      local_d0[4] = CONCAT44(fVar17,fVar15);
LAB_00103e33:
      lVar10 = local_d0[-1];
      if (5 < lVar10) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
        *(undefined4 *)(local_d0 + 5) = 0;
        *(float *)((long)local_d0 + 0x2c) = fVar17;
        goto LAB_0010365a;
      }
    }
    lVar12 = 5;
  }
  else {
    CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_d0,4);
    CowData<Color>::resize<false>((CowData<Color> *)&local_c0,4);
    if (param_1 == 3) {
      local_68 = 0;
      local_58 = CONCAT44(_LC0,_LC0);
      uStack_50 = CONCAT44(_LC0,_LC0);
      local_60 = uVar18;
      CanvasItem::draw_texture_rect
                (pRVar5,(Rect2 *)(*(long *)(this + 8) + 0xd48),SUB81(&local_68,0),(Color *)0x1,
                 SUB81(&local_58,0));
      local_98 = local_78._0_8_;
      local_88 = local_78._0_8_;
      uStack_90 = local_78._8_8_ & 0xffffffff;
      uStack_80 = CONCAT44(0x3f800000,local_78._8_4_);
    }
    else if (param_1 == 0) {
      uVar14 = Color::get_ok_hsl_l();
      uStack_90 = CONCAT44(0x3f800000,uVar14);
      local_98 = CONCAT44(uVar14,uVar14);
      uStack_80 = uStack_90;
      local_88 = local_98;
    }
    else {
      fVar15 = (float)Color::get_ok_hsl_l();
      fVar16 = (float)Color::get_ok_hsl_h();
      Color::set_ok_hsl(fVar16,0.0,fVar15,_LC0);
      fVar15 = (float)Color::get_ok_hsl_s();
      if (_LC52 <= ABS(fVar15)) {
        fVar15 = (float)Color::get_ok_hsl_h();
      }
      else {
        fVar15 = *(float *)(this + 0x38) / __LC12;
      }
      fVar16 = (float)Color::get_ok_hsl_l();
      Color::set_ok_hsl(fVar15,_LC0,fVar16,_LC0);
    }
    if (local_c0 == (undefined8 *)0x0) {
      lVar10 = 0;
LAB_001040d3:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_c0 != (undefined8 *)0x0) goto LAB_00103535;
LAB_00104131:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,1,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_c0 != (undefined8 *)0x0) goto LAB_0010355d;
LAB_00104171:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,2,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_c0 != (undefined8 *)0x0) goto LAB_00103585;
LAB_001041b1:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,3,lVar10,"p_index","size()","",false,false)
      ;
    }
    else {
      lVar10 = local_c0[-1];
      if (lVar10 < 1) goto LAB_001040d3;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      *local_c0 = local_98;
      local_c0[1] = uStack_90;
LAB_00103535:
      lVar10 = local_c0[-1];
      if (lVar10 < 2) goto LAB_00104131;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      local_c0[2] = local_88;
      local_c0[3] = uStack_80;
LAB_0010355d:
      lVar10 = local_c0[-1];
      if (lVar10 < 3) goto LAB_00104171;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      local_c0[4] = local_88;
      local_c0[5] = uStack_80;
LAB_00103585:
      lVar10 = local_c0[-1];
      if (lVar10 < 4) goto LAB_001041b1;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_c0);
      local_c0[6] = local_98;
      local_c0[7] = uStack_90;
    }
    if (local_d0 == (undefined8 *)0x0) {
      lVar10 = 0;
LAB_001041eb:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,0,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_d0 != (undefined8 *)0x0) goto LAB_001035dc;
LAB_00104246:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,1,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_d0 != (undefined8 *)0x0) goto LAB_00103609;
LAB_00104283:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,2,lVar10,"p_index","size()","",false,false)
      ;
      lVar10 = 0;
      if (local_d0 != (undefined8 *)0x0) goto LAB_0010362d;
    }
    else {
      lVar10 = local_d0[-1];
      if (lVar10 < 1) goto LAB_001041eb;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
      *local_d0 = 0;
LAB_001035dc:
      lVar10 = local_d0[-1];
      if (lVar10 < 2) goto LAB_00104246;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
      *(undefined4 *)((long)local_d0 + 0xc) = 0;
      *(float *)(local_d0 + 1) = fVar13;
LAB_00103609:
      lVar10 = local_d0[-1];
      if (lVar10 < 3) goto LAB_00104283;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
      local_d0[2] = uVar18;
LAB_0010362d:
      lVar10 = local_d0[-1];
      if (3 < lVar10) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
        *(undefined4 *)(local_d0 + 3) = 0;
        *(float *)((long)local_d0 + 0x1c) = fVar17;
        goto LAB_0010365a;
      }
    }
    lVar12 = 3;
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar10,"p_index","size()","",false,false
            );
LAB_0010365a:
  local_b8 = (Object *)0x0;
  local_a0 = 0;
  CanvasItem::draw_polygon(pRVar5,local_d8,local_c8);
  lVar10 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if (local_b8 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar7 = local_b8;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_b8);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  if (param_1 == 0) {
    pGVar11 = (Gradient *)0x0;
    this_00 = (Gradient *)operator_new(0x260,"");
    Gradient::Gradient(this_00);
    postinitialize_handler((Object *)this_00);
    cVar4 = RefCounted::init_ref();
    if (cVar4 != '\0') {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') {
        pGVar11 = this_00;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler((Object *)this_00);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
      }
    }
    local_b0 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)Memory::alloc_static(0x30,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      local_b0 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 7;
    }
    local_a0 = 0;
    CowData<Color>::resize<false>((CowData<Color> *)&local_a0,7);
    lVar10 = 0;
    do {
      fVar13 = (float)(int)lVar10 / __LC54;
      if (local_b0 == (undefined8 *)0x0) {
LAB_00103e68:
        lVar12 = 0;
LAB_00103e6e:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar10,lVar12,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar12 = local_b0[-1];
      if (lVar12 <= lVar10) goto LAB_00103e6e;
      if (1 < (ulong)local_b0[-2]) {
        if (local_b0 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar12 = local_b0[-1];
        uVar9 = 0x10;
        __n = lVar12 * 4;
        if (__n != 0) {
          uVar9 = __n - 1 | __n - 1 >> 1;
          uVar9 = uVar9 | uVar9 >> 2;
          uVar9 = uVar9 | uVar9 >> 4;
          uVar9 = uVar9 | uVar9 >> 8;
          uVar9 = uVar9 | uVar9 >> 0x10;
          uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
        }
        puVar8 = (undefined8 *)Memory::alloc_static(uVar9,false);
        puVar6 = local_b0;
        if (puVar8 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          __dest = puVar8 + 2;
          *puVar8 = 1;
          puVar8[1] = lVar12;
          memcpy(__dest,local_b0,__n);
          puVar8 = local_b0;
          LOCK();
          plVar1 = puVar6 + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          local_b0 = __dest;
          if (*plVar1 == 0) {
            local_b0 = (undefined8 *)0x0;
            Memory::free_static(puVar8 + -2,false);
            local_b0 = __dest;
          }
        }
      }
      *(float *)((long)local_b0 + lVar10 * 4) = fVar13;
      fVar17 = (float)Color::get_ok_hsl_l();
      fVar15 = (float)Color::get_ok_hsl_s();
      auVar19 = Color::from_ok_hsl(fVar13,fVar15,fVar17,_LC0);
      if (local_a0 == 0) goto LAB_00103e68;
      lVar12 = *(long *)(local_a0 + -8);
      if (lVar12 <= lVar10) goto LAB_00103e6e;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_a0);
      lVar12 = lVar10 + 1;
      *(undefined1 (*) [16])(lVar10 * 0x10 + local_a0) = auVar19;
      lVar10 = lVar12;
    } while (lVar12 != 7);
    Gradient::set_offsets((Vector *)pGVar11);
    Gradient::set_colors((Vector *)pGVar11);
    Gradient::set_interpolation_color_space(pGVar11,2);
    lVar10 = *(long *)(this + 0x40);
    if (lVar10 == 0) {
      Ref<GradientTexture2D>::instantiate<>((Ref<GradientTexture2D> *)(this + 0x40));
      GradientTexture2D::set_width((int)*(undefined8 *)(this + 0x40));
      GradientTexture2D::set_height((int)*(undefined8 *)(this + 0x40));
      lVar10 = *(long *)(this + 0x40);
    }
    local_e0 = (Vector *)pGVar11;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_e0 = (Vector *)0x0;
    }
    GradientTexture2D::set_gradient(lVar10);
    if (local_e0 != (Vector *)0x0) {
      cVar4 = RefCounted::unreference();
      pVVar3 = local_e0;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler((Object *)local_e0);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pVVar3 + 0x140))(pVVar3);
          Memory::free_static(pVVar3,false);
        }
      }
    }
    local_68 = 0;
    local_e0 = (Vector *)0x0;
    local_58 = CONCAT44(_LC0,_LC0);
    uStack_50 = CONCAT44(_LC0,_LC0);
    local_60 = uVar18;
    if (*(long *)(this + 0x40) != 0) {
      pOVar7 = (Object *)
               __dynamic_cast(*(long *)(this + 0x40),&Object::typeinfo,&Texture2D::typeinfo);
      if (pOVar7 != (Object *)0x0) {
        local_e0 = (Vector *)pOVar7;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          local_e0 = (Vector *)0x0;
        }
      }
    }
    CanvasItem::draw_texture_rect
              (pRVar5,(Rect2 *)&local_e0,SUB81(&local_68,0),(Color *)0x0,SUB81(&local_58,0));
    if (local_e0 != (Vector *)0x0) {
      cVar4 = RefCounted::unreference();
      pVVar3 = local_e0;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler((Object *)local_e0);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pVVar3 + 0x140))(pVVar3);
          Memory::free_static(pVVar3,false);
        }
      }
    }
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    puVar6 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = local_b0 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = (undefined8 *)0x0;
        Memory::free_static(puVar6 + -2,false);
      }
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler((Object *)pGVar11);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pGVar11 + 0x140))(pGVar11);
        Memory::free_static(pGVar11,false);
      }
    }
  }
  puVar6 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_c0 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = (undefined8 *)0x0;
      Memory::free_static(puVar6 + -2,false);
    }
  }
  puVar6 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_d0 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = (undefined8 *)0x0;
      Memory::free_static(puVar6 + -2,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ColorMode::get_slider_count() const */

undefined8 ColorMode::get_slider_count(void)

{
  return 3;
}



/* ColorMode::get_spinbox_arrow_step() const */

void __thiscall ColorMode::get_spinbox_arrow_step(ColorMode *this)

{
                    /* WARNING: Could not recover jumptable at 0x00104a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}



/* ColorMode::_value_changed() */

void ColorMode::_value_changed(void)

{
  return;
}



/* ColorMode::apply_theme() const */

undefined8 ColorMode::apply_theme(void)

{
  return 0;
}



/* ColorMode::get_shape_override() const */

undefined8 ColorMode::get_shape_override(void)

{
  return 5;
}



/* ColorModeHSV::get_slider_step() const */

undefined4 ColorModeHSV::get_slider_step(void)

{
  return _LC0;
}



/* ColorModeRGB::get_slider_step() const */

undefined4 ColorModeRGB::get_slider_step(void)

{
  return _LC0;
}



/* ColorModeRAW::get_slider_step() const */

undefined4 ColorModeRAW::get_slider_step(void)

{
  return _LC1;
}



/* ColorModeRAW::get_spinbox_arrow_step() const */

undefined4 ColorModeRAW::get_spinbox_arrow_step(void)

{
  return _LC2;
}



/* ColorModeOKHSL::get_slider_step() const */

undefined4 ColorModeOKHSL::get_slider_step(void)

{
  return _LC0;
}



/* ColorModeOKHSL::get_shape_override() const */

undefined8 ColorModeOKHSL::get_shape_override(void)

{
  return 3;
}



/* Ref<Shader>::~Ref() */

void __thiscall Ref<Shader>::~Ref(Ref<Shader> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        return;
      }
    }
  }
  return;
}



/* List<Color, DefaultAllocator>::~List() */

undefined8 __thiscall List<Color,DefaultAllocator>::~List(List<Color,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_18;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return uStack_18;
  }
  do {
    pvVar1 = (void *)*plVar5;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        uVar4 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar4;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x20) == plVar5) {
      lVar3 = *(long *)((long)pvVar1 + 0x10);
      lVar2 = *(long *)((long)pvVar1 + 0x18);
      *plVar5 = lVar3;
      if (pvVar1 == (void *)plVar5[1]) {
        plVar5[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x10);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = lVar2;
      }
      Memory::free_static(pvVar1,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  uVar4 = Memory::free_static(plVar5,false);
  return uVar4;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector2>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104f24(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Color>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Color>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104f3a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ColorModeOKHSL::slider_draw(int) [clone .cold] */

void ColorModeOKHSL::slider_draw(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ColorModeOKHSL::get_name() const */

ColorModeOKHSL * __thiscall ColorModeOKHSL::get_name(ColorModeOKHSL *this)

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



/* ColorModeRGB::get_name() const */

ColorModeRGB * __thiscall ColorModeRGB::get_name(ColorModeRGB *this)

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



/* ColorModeRAW::get_name() const */

ColorModeRAW * __thiscall ColorModeRAW::get_name(ColorModeRAW *this)

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



/* ColorModeHSV::get_name() const */

ColorModeHSV * __thiscall ColorModeHSV::get_name(ColorModeHSV *this)

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



/* ColorModeRAW::~ColorModeRAW() */

void __thiscall ColorModeRAW::~ColorModeRAW(ColorModeRAW *this)

{
  long *plVar1;
  long lVar2;
  ColorModeRAW *pCVar3;
  
  pCVar3 = this + 0x20;
  *(undefined ***)this = &PTR_get_name_00105ac0;
  do {
    if (*(long *)pCVar3 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pCVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)pCVar3;
        *(long *)pCVar3 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pCVar3 = pCVar3 + -8;
  } while (pCVar3 != this + 8);
  return;
}



/* ColorModeRGB::~ColorModeRGB() */

void __thiscall ColorModeRGB::~ColorModeRGB(ColorModeRGB *this)

{
  long *plVar1;
  long lVar2;
  ColorModeRGB *pCVar3;
  
  pCVar3 = this + 0x20;
  *(undefined ***)this = &PTR_get_name_001059c0;
  do {
    if (*(long *)pCVar3 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pCVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)pCVar3;
        *(long *)pCVar3 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pCVar3 = pCVar3 + -8;
  } while (pCVar3 != this + 8);
  return;
}



/* ColorModeHSV::~ColorModeHSV() */

void __thiscall ColorModeHSV::~ColorModeHSV(ColorModeHSV *this)

{
  long *plVar1;
  long lVar2;
  ColorModeHSV *pCVar3;
  
  pCVar3 = this + 0x20;
  *(undefined ***)this = &PTR_get_name_00105a40;
  do {
    if (*(long *)pCVar3 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pCVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)pCVar3;
        *(long *)pCVar3 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pCVar3 = pCVar3 + -8;
  } while (pCVar3 != this + 8);
  return;
}



/* ColorModeRAW::~ColorModeRAW() */

void __thiscall ColorModeRAW::~ColorModeRAW(ColorModeRAW *this)

{
  ColorModeRAW *pCVar1;
  long *plVar2;
  long lVar3;
  ColorModeRAW *pCVar4;
  
  pCVar4 = this + 0x28;
  *(undefined ***)this = &PTR_get_name_00105ac0;
  do {
    pCVar1 = pCVar4 + -8;
    pCVar4 = pCVar4 + -8;
    if (*(long *)pCVar1 != 0) {
      LOCK();
      plVar2 = (long *)(*(long *)pCVar1 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = *(long *)pCVar4;
        *(long *)pCVar4 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  } while (pCVar4 != this + 0x10);
  operator_delete(this,0x38);
  return;
}



/* ColorModeHSV::~ColorModeHSV() */

void __thiscall ColorModeHSV::~ColorModeHSV(ColorModeHSV *this)

{
  ColorModeHSV *pCVar1;
  long *plVar2;
  long lVar3;
  ColorModeHSV *pCVar4;
  
  pCVar4 = this + 0x28;
  *(undefined ***)this = &PTR_get_name_00105a40;
  do {
    pCVar1 = pCVar4 + -8;
    pCVar4 = pCVar4 + -8;
    if (*(long *)pCVar1 != 0) {
      LOCK();
      plVar2 = (long *)(*(long *)pCVar1 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = *(long *)pCVar4;
        *(long *)pCVar4 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  } while (pCVar4 != this + 0x10);
  operator_delete(this,0x40);
  return;
}



/* ColorModeRGB::~ColorModeRGB() */

void __thiscall ColorModeRGB::~ColorModeRGB(ColorModeRGB *this)

{
  ColorModeRGB *pCVar1;
  long *plVar2;
  long lVar3;
  ColorModeRGB *pCVar4;
  
  pCVar4 = this + 0x28;
  *(undefined ***)this = &PTR_get_name_001059c0;
  do {
    pCVar1 = pCVar4 + -8;
    pCVar4 = pCVar4 + -8;
    if (*(long *)pCVar1 != 0) {
      LOCK();
      plVar2 = (long *)(*(long *)pCVar1 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = *(long *)pCVar4;
        *(long *)pCVar4 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  } while (pCVar4 != this + 0x10);
  operator_delete(this,0x28);
  return;
}



/* ColorModeOKHSL::~ColorModeOKHSL() */

void __thiscall ColorModeOKHSL::~ColorModeOKHSL(ColorModeOKHSL *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  ColorModeOKHSL *pCVar5;
  
  *(undefined ***)this = &PTR_get_name_00105b40;
  if (*(long *)(this + 0x40) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x40);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pCVar5 = this + 0x20;
  do {
    if (*(long *)pCVar5 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pCVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)pCVar5;
        *(long *)pCVar5 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pCVar5 = pCVar5 + -8;
  } while (pCVar5 != this + 8);
  return;
}



/* ColorModeOKHSL::~ColorModeOKHSL() */

void __thiscall ColorModeOKHSL::~ColorModeOKHSL(ColorModeOKHSL *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  ColorModeOKHSL *pCVar5;
  
  *(undefined ***)this = &PTR_get_name_00105b40;
  if (*(long *)(this + 0x40) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x40);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pCVar5 = this + 0x20;
  do {
    if (*(long *)pCVar5 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pCVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)pCVar5;
        *(long *)pCVar5 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pCVar5 = pCVar5 + -8;
  } while (pCVar5 != this + 8);
  operator_delete(this,0x48);
  return;
}



/* void Ref<GradientTexture2D>::instantiate<>() */

void __thiscall Ref<GradientTexture2D>::instantiate<>(Ref<GradientTexture2D> *this)

{
  char cVar1;
  GradientTexture2D *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (GradientTexture2D *)operator_new(800,"");
  GradientTexture2D::GradientTexture2D(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (GradientTexture2D *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (GradientTexture2D *)pOVar3) goto LAB_00105535;
    *(GradientTexture2D **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00105535;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (GradientTexture2D *)0x0) {
    return;
  }
LAB_00105535:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

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



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

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



/* ColorMode::ColorMode(ColorPicker*) */

void ColorMode::_GLOBAL__sub_I_ColorMode(void)

{
  undefined8 uStack_8;
  
  if (ColorPicker::wheel_shader == '\0') {
    ColorPicker::wheel_shader = '\x01';
    __cxa_atexit(Ref<Shader>::~Ref,&ColorPicker::wheel_shader,&__dso_handle);
  }
  if (ColorPicker::circle_shader == '\0') {
    ColorPicker::circle_shader = '\x01';
    __cxa_atexit(Ref<Shader>::~Ref,&ColorPicker::circle_shader,&__dso_handle);
  }
  if (ColorPicker::circle_ok_color_shader == '\0') {
    ColorPicker::circle_ok_color_shader = '\x01';
    __cxa_atexit(Ref<Shader>::~Ref,&ColorPicker::circle_ok_color_shader,&__dso_handle);
  }
  if (ColorPicker::preset_cache == '\0') {
    ColorPicker::preset_cache = '\x01';
    ColorPicker::preset_cache = 0;
    __cxa_atexit(List<Color,DefaultAllocator>::~List,&ColorPicker::preset_cache,&__dso_handle);
  }
  if (ColorPicker::recent_preset_cache != '\0') {
    return;
  }
  ColorPicker::recent_preset_cache = 1;
  ColorPicker::recent_preset_cache = 0;
  __cxa_atexit(List<Color,DefaultAllocator>::~List,&ColorPicker::recent_preset_cache,&__dso_handle,
               uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ColorModeOKHSL::~ColorModeOKHSL() */

void __thiscall ColorModeOKHSL::~ColorModeOKHSL(ColorModeOKHSL *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ColorModeHSV::~ColorModeHSV() */

void __thiscall ColorModeHSV::~ColorModeHSV(ColorModeHSV *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ColorModeRGB::~ColorModeRGB() */

void __thiscall ColorModeRGB::~ColorModeRGB(ColorModeRGB *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ColorModeRAW::~ColorModeRAW() */

void __thiscall ColorModeRAW::~ColorModeRAW(ColorModeRAW *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Color, DefaultAllocator>::~List() */

void __thiscall List<Color,DefaultAllocator>::~List(List<Color,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<Shader>::~Ref() */

void __thiscall Ref<Shader>::~Ref(Ref<Shader> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


