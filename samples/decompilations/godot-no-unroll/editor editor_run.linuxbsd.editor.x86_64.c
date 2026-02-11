
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



/* EditorRun::get_status() const */

undefined4 __thiscall EditorRun::get_status(EditorRun *this)

{
  return *(undefined4 *)(this + 8);
}



/* EditorRun::get_running_scene() const */

void EditorRun::get_running_scene(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x10) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x10));
  }
  return;
}



/* EditorRun::has_child_process(long) const */

long * __thiscall EditorRun::has_child_process(EditorRun *this,long param_1)

{
  long *plVar1;
  
  if ((*(long **)this != (long *)0x0) && (plVar1 = (long *)**(long **)this, plVar1 != (long *)0x0))
  {
    do {
      if (*plVar1 == param_1) {
        return (long *)0x1;
      }
      plVar1 = (long *)plVar1[1];
    } while (plVar1 != (long *)0x0);
    return plVar1;
  }
  return (long *)0x0;
}



/* EditorRun::stop_child_process(long) */

void __thiscall EditorRun::stop_child_process(EditorRun *this,long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (*(undefined8 **)this != (undefined8 *)0x0) {
    for (plVar3 = (long *)**(undefined8 **)this; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1])
    {
      if (param_1 == *plVar3) {
        plVar3 = (long *)OS::get_singleton();
        (**(code **)(*plVar3 + 0x128))(plVar3);
        plVar3 = *(long **)this;
        if (plVar3 == (long *)0x0) {
          return;
        }
        plVar1 = (long *)*plVar3;
        while( true ) {
          if (plVar1 == (long *)0x0) {
            return;
          }
          if (param_1 == *plVar1) break;
          plVar1 = (long *)plVar1[1];
        }
        if (plVar3 == (long *)plVar1[3]) {
          lVar4 = plVar1[1];
          if ((long *)*plVar3 == plVar1) {
            *plVar3 = lVar4;
          }
          lVar2 = plVar1[2];
          if ((long *)plVar3[1] == plVar1) {
            plVar3[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 8) = lVar4;
            lVar4 = plVar1[1];
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar2;
          }
          Memory::free_static(plVar1,false);
          *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        if (*(int *)((long)*(void **)this + 0x10) != 0) {
          return;
        }
        Memory::free_static(*(void **)this,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  return;
}



/* EditorRun::stop() */

void __thiscall EditorRun::stop(EditorRun *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(int *)(this + 8) != 2) && (plVar4 = *(long **)this, plVar4 != (long *)0x0)) &&
     (0 < (int)plVar4[2])) {
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      do {
        plVar4 = (long *)OS::get_singleton();
        (**(code **)(*plVar4 + 0x128))(plVar4);
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
      plVar4 = *(long **)this;
    }
    if (plVar4 != (long *)0x0) {
      do {
        pvVar2 = (void *)*plVar4;
        if (pvVar2 == (void *)0x0) goto LAB_00100318;
        if (plVar4 == *(long **)((long)pvVar2 + 0x18)) {
          lVar5 = *(long *)((long)pvVar2 + 8);
          lVar3 = *(long *)((long)pvVar2 + 0x10);
          *plVar4 = lVar5;
          if (pvVar2 == (void *)plVar4[1]) {
            plVar4[1] = lVar3;
          }
          if (lVar3 != 0) {
            *(long *)(lVar3 + 8) = lVar5;
            lVar5 = *(long *)((long)pvVar2 + 8);
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x10) = lVar3;
          }
          Memory::free_static(pvVar2,false);
          *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar4 = *(long **)this;
      } while ((int)plVar4[2] != 0);
      Memory::free_static(plVar4,false);
      *(undefined8 *)this = 0;
    }
  }
LAB_00100318:
  *(undefined4 *)(this + 8) = 2;
  String::parse_latin1((StrRange *)(this + 0x10));
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorRun::get_current_process() const */

undefined8 __thiscall EditorRun::get_current_process(EditorRun *this)

{
  undefined8 *puVar1;
  
  if ((*(long **)this != (long *)0x0) &&
     (puVar1 = (undefined8 *)**(long **)this, puVar1 != (undefined8 *)0x0)) {
    return *puVar1;
  }
  return 0;
}



/* EditorRun::get_window_placement() */

EditorRun * __thiscall EditorRun::get_window_placement(EditorRun *this)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float local_b8;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70 [2];
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  long local_40;
  
  uVar9 = _LC5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined8 *)(this + 4) = uVar9;
  *(undefined8 *)(this + 0x10) = 0;
  local_88 = "run/window_placement/screen";
  local_90 = 0;
  local_80 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)local_58);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)this = iVar5;
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  lVar10 = local_90;
  if (local_90 == 0) {
LAB_0010048e:
    iVar5 = *(int *)this;
    if (iVar5 != -5) goto LAB_0010049a;
LAB_00100795:
    uVar6 = (**(code **)(*DisplayServer::singleton + 0x528))(DisplayServer::singleton,0);
    *(undefined4 *)this = uVar6;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010048e;
    local_90 = 0;
    Memory::free_static((void *)(lVar10 + -0x10),false);
    iVar5 = *(int *)this;
    if (iVar5 == -5) goto LAB_00100795;
LAB_0010049a:
    if (iVar5 == -4) {
      iVar5 = (**(code **)(*DisplayServer::singleton + 0x3f8))();
      lVar10 = (long)iVar5;
      iVar5 = (**(code **)(*DisplayServer::singleton + 0x528))(DisplayServer::singleton,0);
      iVar5 = iVar5 + -1;
      if (lVar10 != 0) goto LAB_001008d3;
LAB_001007e3:
      *(undefined4 *)this = 0;
    }
    else if (iVar5 == -3) {
      iVar5 = (**(code **)(*DisplayServer::singleton + 0x3f8))();
      lVar10 = (long)iVar5;
      iVar5 = (**(code **)(*DisplayServer::singleton + 0x528))(DisplayServer::singleton,0);
      if (lVar10 == 0) goto LAB_001007e3;
      iVar5 = iVar5 + 1;
LAB_001008d3:
      *(int *)this = (int)(((long)iVar5 % lVar10 + lVar10) % lVar10);
    }
    else if (iVar5 == -2) {
      uVar6 = (**(code **)(*DisplayServer::singleton + 0x400))();
      *(undefined4 *)this = uVar6;
    }
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_88,"display/window/size/viewport_width",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0xc) = iVar5;
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_88,"display/window/size/viewport_height",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0x10) = iVar5;
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  local_70[0] = 0.0;
  local_70[1] = 0.0;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_88,"display/window/size/window_width_override",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  fVar11 = Variant::operator_cast_to_float((Variant *)local_58);
  local_70[0] = fVar11;
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_88,"display/window/size/window_height_override",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  fVar11 = Variant::operator_cast_to_float((Variant *)local_58);
  local_70[1] = fVar11;
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if ((0.0 < local_70[0]) && (0.0 < local_70[1])) {
    uVar9 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_70);
    *(undefined8 *)(this + 0xc) = uVar9;
  }
  local_58 = (**(code **)(*DisplayServer::singleton + 0x428))
                       (DisplayServer::singleton,*(undefined4 *)this);
  _local_68 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_58);
  local_88 = "run/window_placement/rect";
  local_90 = 0;
  local_80 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)local_58);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  lVar10 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if (((((float)local_68._0_4_ == 0.0) && ((float)local_68._4_4_ == 0.0)) && (fStack_60 == 0.0)) &&
     (fStack_5c == 0.0)) {
    if (iVar5 == 3) {
      this[0x14] = (EditorRun)0x1;
    }
    else if (iVar5 == 4) {
      this[0x15] = (EditorRun)0x1;
    }
    goto switchD_00100821_default;
  }
  cVar3 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0xc);
  if (cVar3 != '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_88,"display/window/dpi/allow_hidpi",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    lVar10 = OS::get_singleton();
    plVar1 = DisplayServer::singleton;
    fVar11 = _LC0;
    if (*(char *)(lVar10 + 0x3c) == '\0') {
      if (bVar4) {
        local_b8 = _LC0;
        pcVar2 = *(code **)(*DisplayServer::singleton + 0x440);
        if (pcVar2 == DisplayServer::screen_get_max_scale) {
          iVar7 = (**(code **)(*DisplayServer::singleton + 0x3f8))();
          if (0 < iVar7) {
            iVar8 = 0;
            do {
              fVar12 = (float)(**(code **)(*plVar1 + 0x438))(plVar1,iVar8);
              local_b8 = fmaxf(local_b8,fVar12);
              iVar8 = iVar8 + 1;
            } while (iVar7 != iVar8);
            fVar11 = (float)(int)(fVar11 / local_b8);
          }
        }
        else {
          fVar12 = (float)(*pcVar2)();
          fVar11 = (float)(int)(fVar11 / fVar12);
        }
      }
    }
    else if (!bVar4) {
      local_b8 = _LC0;
      pcVar2 = *(code **)(*DisplayServer::singleton + 0x440);
      if (pcVar2 == DisplayServer::screen_get_max_scale) {
        iVar7 = (**(code **)(*DisplayServer::singleton + 0x3f8))();
        if (iVar7 < 1) goto LAB_00100adc;
        iVar8 = 0;
        do {
          fVar11 = (float)(**(code **)(*plVar1 + 0x438))(plVar1,iVar8);
          local_b8 = fmaxf(local_b8,fVar11);
          iVar8 = iVar8 + 1;
        } while (iVar7 != iVar8);
      }
      else {
        local_b8 = (float)(*pcVar2)();
      }
      fVar11 = (float)(int)local_b8;
    }
LAB_00100adc:
    auVar13._4_4_ = fVar11;
    auVar13._0_4_ = fVar11;
    auVar13._8_4_ = fVar11;
    auVar13._12_4_ = fVar11;
    _local_68 = divps(_local_68,auVar13);
  }
  switch(iVar5) {
  case 0:
    uVar9 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_68);
    *(undefined8 *)(this + 4) = uVar9;
    goto switchD_00100821_default;
  case 1:
    break;
  case 2:
    local_90 = 0;
    local_88 = "run/window_placement/rect_custom_position";
    local_80 = 0x29;
    String::parse_latin1((StrRange *)&local_90);
    _EDITOR_GET((String *)local_58);
    local_78 = Variant::operator_cast_to_Vector2((Variant *)local_58);
    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    lVar10 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    local_78 = CONCAT44((float)((ulong)local_78 >> 0x20) + SUB164(_local_68,4),
                        (float)local_78 + SUB164(_local_68,0));
    uVar9 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
    *(undefined8 *)(this + 4) = uVar9;
    goto switchD_00100821_default;
  case 3:
    this[0x14] = (EditorRun)0x1;
    break;
  case 4:
    this[0x15] = (EditorRun)0x1;
    break;
  default:
    goto switchD_00100821_default;
  }
  uVar9 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0xc));
  local_78 = CONCAT44((SUB164(_local_68,0xc) - (float)((ulong)uVar9 >> 0x20)) * _LC14._4_4_,
                      (SUB164(_local_68,8) - (float)uVar9) * (float)_LC14);
  uVar9 = Vector2::floor();
  local_58._0_8_ =
       CONCAT44((float)((ulong)uVar9 >> 0x20) + SUB164(_local_68,4),
                (float)uVar9 + SUB164(_local_68,0));
  uVar9 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_58);
  *(undefined8 *)(this + 4) = uVar9;
switchD_00100821_default:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRun::EditorRun() */

void __thiscall EditorRun::EditorRun(EditorRun *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 2;
  String::parse_latin1((StrRange *)(this + 0x10));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorRun::run(String const&, String const&, Vector<String> const&) */

int __thiscall EditorRun::run(EditorRun *this,String *param_1,String *param_2,Vector *param_3)

{
  undefined1 (*pauVar1) [16];
  CowData *pCVar2;
  char *pcVar3;
  code *pcVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  CowData *pCVar15;
  CowData<char32_t> *pCVar16;
  long *plVar17;
  String *pSVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined1 (*pauVar22) [16];
  CowData *pCVar23;
  uint uVar24;
  long in_FS_OFFSET;
  CowData *local_d0;
  long local_c8;
  long local_c0;
  undefined8 *local_b8;
  long local_b0;
  undefined1 (*local_a8) [16];
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78;
  Vector2i local_74 [16];
  char local_64;
  char local_63;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = (CowData *)0x0;
  lVar14 = Main::get_forwardable_cli_arguments(1);
  pCVar23 = *(CowData **)(lVar14 + 8);
  pCVar15 = pCVar23;
  if (pCVar23 != (CowData *)0x0) {
    pCVar2 = pCVar23 + *(long *)(pCVar23 + -8) * 8;
    if (pCVar23 == pCVar2) {
      pCVar15 = (CowData *)0x0;
    }
    else {
      pCVar15 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(pCVar15 + 0x10) = 0;
      *(undefined1 (*) [16])pCVar15 = (undefined1  [16])0x0;
      local_d0 = pCVar15;
      do {
        while( true ) {
          pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
          if (*(long *)pCVar23 != 0) {
            CowData<char32_t>::_ref(pCVar16,pCVar23);
          }
          lVar14 = *(long *)(pCVar15 + 8);
          *(CowData **)(pCVar16 + 0x18) = pCVar15;
          *(undefined8 *)(pCVar16 + 8) = 0;
          *(long *)(pCVar16 + 0x10) = lVar14;
          if (lVar14 != 0) {
            *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
          }
          *(CowData<char32_t> **)(pCVar15 + 8) = pCVar16;
          if (*(long *)pCVar15 != 0) break;
          pCVar23 = pCVar23 + 8;
          *(int *)(pCVar15 + 0x10) = *(int *)(pCVar15 + 0x10) + 1;
          *(CowData<char32_t> **)pCVar15 = pCVar16;
          if (pCVar2 == pCVar23) goto LAB_00100e06;
        }
        pCVar23 = pCVar23 + 8;
        *(int *)(pCVar15 + 0x10) = *(int *)(pCVar15 + 0x10) + 1;
      } while (pCVar2 != pCVar23);
    }
  }
LAB_00100e06:
  ProjectSettings::get_singleton();
  ProjectSettings::get_resource_path();
  if ((local_c8 != 0) && (1 < *(uint *)(local_c8 + -8))) {
    local_90 = 0;
    local_88 = "--path";
    local_80 = 6;
    String::parse_latin1((StrRange *)&local_90);
    if (pCVar15 == (CowData *)0x0) {
      pCVar15 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(pCVar15 + 0x10) = 0;
      *(undefined1 (*) [16])pCVar15 = (undefined1  [16])0x0;
      local_d0 = pCVar15;
    }
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar15 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar15;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar15 + 8) = pCVar16;
    if (*(long *)pCVar15 == 0) {
      *(CowData<char32_t> **)pCVar15 = pCVar16;
    }
    *(int *)(pCVar15 + 0x10) = *(int *)(pCVar15 + 0x10) + 1;
    if (local_90 == 0) {
      String::replace((char *)&local_88,(char *)&local_c8);
    }
    else {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
      pCVar15 = local_d0;
      String::replace((char *)&local_88,(char *)&local_c8);
      if (pCVar15 == (CowData *)0x0) {
        pCVar15 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)(pCVar15 + 0x10) = 0;
        *(undefined1 (*) [16])pCVar15 = (undefined1  [16])0x0;
        local_d0 = pCVar15;
      }
    }
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_88 != (char *)0x0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_88);
    }
    pcVar3 = local_88;
    lVar14 = *(long *)(pCVar15 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar15;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar15 + 8) = pCVar16;
    if (*(long *)pCVar15 == 0) {
      *(CowData<char32_t> **)pCVar15 = pCVar16;
    }
    *(int *)(pCVar15 + 0x10) = *(int *)(pCVar15 + 0x10) + 1;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar17 = (long *)(local_88 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      pCVar15 = local_d0;
      if (*plVar17 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        pCVar15 = local_d0;
      }
    }
  }
  EditorDebuggerNode::get_server_uri();
  if ((local_c0 == 0) || (*(int *)(local_c0 + -8) == 0)) {
    local_90 = 0;
    local_88 = "--editor-pid";
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_90);
    if (pCVar15 == (CowData *)0x0) {
      pCVar15 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(pCVar15 + 0x10) = 0;
      *(undefined1 (*) [16])pCVar15 = (undefined1  [16])0x0;
      local_d0 = pCVar15;
    }
  }
  else {
    local_90 = 0;
    local_88 = "--remote-debug";
    local_80 = 0xe;
    String::parse_latin1((StrRange *)&local_90);
    if (pCVar15 == (CowData *)0x0) {
      pCVar15 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(pCVar15 + 0x10) = 0;
      *(undefined1 (*) [16])pCVar15 = (undefined1  [16])0x0;
      local_d0 = pCVar15;
    }
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar15 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar15;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar15 + 8) = pCVar16;
    if (*(long *)pCVar15 == 0) {
      *(CowData<char32_t> **)pCVar15 = pCVar16;
    }
    *(int *)(pCVar15 + 0x10) = *(int *)(pCVar15 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      pCVar15 = local_d0;
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
        pCVar15 = local_d0;
      }
      local_d0 = pCVar15;
      if (pCVar15 == (CowData *)0x0) {
        pCVar15 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)(pCVar15 + 0x10) = 0;
        *(undefined1 (*) [16])pCVar15 = (undefined1  [16])0x0;
        local_d0 = pCVar15;
      }
    }
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_c0 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_c0);
    }
    lVar14 = *(long *)(pCVar15 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar15;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar15 + 8) = pCVar16;
    if (*(long *)pCVar15 == 0) {
      *(CowData<char32_t> **)pCVar15 = pCVar16;
    }
    *(int *)(pCVar15 + 0x10) = *(int *)(pCVar15 + 0x10) + 1;
    local_90 = 0;
    local_88 = "--editor-pid";
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_90);
  }
  pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
  }
  lVar20 = local_90;
  lVar14 = *(long *)(pCVar15 + 8);
  *(undefined8 *)(pCVar16 + 8) = 0;
  *(CowData **)(pCVar16 + 0x18) = pCVar15;
  *(long *)(pCVar16 + 0x10) = lVar14;
  if (lVar14 != 0) {
    *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
  }
  *(CowData<char32_t> **)(pCVar15 + 8) = pCVar16;
  if (*(long *)pCVar15 == 0) {
    *(CowData<char32_t> **)pCVar15 = pCVar16;
  }
  *(int *)(pCVar15 + 0x10) = *(int *)(pCVar15 + 0x10) + 1;
  if (local_90 == 0) {
    plVar17 = (long *)OS::get_singleton();
    (**(code **)(*plVar17 + 0x130))(plVar17);
    itos((long)&local_88);
  }
  else {
    LOCK();
    plVar17 = (long *)(local_90 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar20 + -0x10),false);
    }
    pCVar15 = local_d0;
    plVar17 = (long *)OS::get_singleton();
    (**(code **)(*plVar17 + 0x130))(plVar17);
    itos((long)&local_88);
    if (pCVar15 == (CowData *)0x0) {
      pCVar15 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(pCVar15 + 0x10) = 0;
      *(undefined1 (*) [16])pCVar15 = (undefined1  [16])0x0;
      local_d0 = pCVar15;
    }
  }
  pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
  if (local_88 != (char *)0x0) {
    CowData<char32_t>::_ref(pCVar16,(CowData *)&local_88);
  }
  pcVar3 = local_88;
  lVar14 = *(long *)(pCVar15 + 8);
  *(undefined8 *)(pCVar16 + 8) = 0;
  *(CowData **)(pCVar16 + 0x18) = pCVar15;
  *(long *)(pCVar16 + 0x10) = lVar14;
  if (lVar14 != 0) {
    *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
  }
  *(CowData<char32_t> **)(pCVar15 + 8) = pCVar16;
  if (*(long *)pCVar15 == 0) {
    *(CowData<char32_t> **)pCVar15 = pCVar16;
  }
  *(int *)(pCVar15 + 0x10) = *(int *)(pCVar15 + 0x10) + 1;
  if (local_88 != (char *)0x0) {
    LOCK();
    plVar17 = (long *)(local_88 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_88 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  pSVar18 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)&local_78,false);
  local_88 = "run_debug_collisions";
  local_90 = 0;
  local_80 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_88 = "debug_options";
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar18,(Variant *)&local_98);
  bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar14 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar17 = (long *)(local_98 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  lVar14 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar17 = (long *)(local_90 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  pSVar18 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)&local_78,false);
  local_88 = "run_debug_paths";
  local_90 = 0;
  local_80 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_88 = "debug_options";
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar18,(Variant *)&local_98);
  bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar14 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar17 = (long *)(local_98 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  lVar14 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar17 = (long *)(local_90 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  pSVar18 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)&local_78,false);
  local_88 = "run_debug_navigation";
  local_90 = 0;
  local_80 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_88 = "debug_options";
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar18,(Variant *)&local_98);
  bVar8 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar14 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar17 = (long *)(local_98 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  lVar14 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar17 = (long *)(local_90 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  pSVar18 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)&local_78,false);
  local_88 = "run_debug_avoidance";
  local_90 = 0;
  local_80 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_88 = "debug_options";
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar18,(Variant *)&local_98);
  bVar9 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar14 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar17 = (long *)(local_98 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  lVar14 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar17 = (long *)(local_90 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  pSVar18 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)&local_78,false);
  local_88 = "run_debug_canvas_redraw";
  local_90 = 0;
  local_80 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar18,(Variant *)&local_98);
  bVar10 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar14 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar17 = (long *)(local_98 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  lVar14 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar17 = (long *)(local_90 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar6) {
    local_90 = 0;
    local_88 = "--debug-collisions";
    local_80 = 0x12;
    String::parse_latin1((StrRange *)&local_90);
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
  }
  if (bVar7) {
    local_90 = 0;
    local_88 = "--debug-paths";
    local_80 = 0xd;
    String::parse_latin1((StrRange *)&local_90);
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
  }
  if (bVar8) {
    local_90 = 0;
    local_88 = "--debug-navigation";
    local_80 = 0x12;
    String::parse_latin1((StrRange *)&local_90);
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
  }
  if (bVar9) {
    local_90 = 0;
    local_88 = "--debug-avoidance";
    local_80 = 0x11;
    String::parse_latin1((StrRange *)&local_90);
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
  }
  if (bVar10) {
    local_90 = 0;
    local_88 = "--debug-canvas-item-redraw";
    local_80 = 0x1a;
    String::parse_latin1((StrRange *)&local_90);
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
  }
  cVar11 = String::operator!=(param_2,"");
  if (cVar11 != '\0') {
    local_90 = 0;
    local_88 = "--write-movie";
    local_80 = 0xd;
    String::parse_latin1((StrRange *)&local_90);
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      pCVar23 = local_d0;
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
        pCVar23 = local_d0;
      }
      local_d0 = pCVar23;
      if (pCVar23 == (CowData *)0x0) {
        pCVar23 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)(pCVar23 + 0x10) = 0;
        *(undefined1 (*) [16])pCVar23 = (undefined1  [16])0x0;
        local_d0 = pCVar23;
      }
    }
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)param_2);
    }
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    local_88 = "--fixed-fps";
    local_90 = 0;
    local_80 = 0xb;
    String::parse_latin1((StrRange *)&local_90);
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 == 0) {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_90,"editor/movie_writer/fps",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      Variant::operator_cast_to_long((Variant *)local_58);
      itos((long)&local_88);
    }
    else {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
      pCVar23 = local_d0;
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_90,"editor/movie_writer/fps",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      Variant::operator_cast_to_long((Variant *)local_58);
      itos((long)&local_88);
      if (pCVar23 == (CowData *)0x0) {
        pCVar23 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)(pCVar23 + 0x10) = 0;
        *(undefined1 (*) [16])pCVar23 = (undefined1  [16])0x0;
        local_d0 = pCVar23;
      }
    }
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_88 != (char *)0x0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_88);
    }
    pcVar3 = local_88;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar17 = (long *)(local_88 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_88,"editor/movie_writer/disable_vsync",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    if (bVar6) {
      local_90 = 0;
      local_88 = "--disable-vsync";
      local_80 = 0xf;
      String::parse_latin1((StrRange *)&local_90);
      if (local_d0 == (CowData *)0x0) {
        local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)(local_d0 + 0x10) = 0;
        *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
      }
      pCVar23 = local_d0;
      pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
      if (local_90 != 0) {
        CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
      }
      lVar20 = local_90;
      lVar14 = *(long *)(pCVar23 + 8);
      *(undefined8 *)(pCVar16 + 8) = 0;
      *(CowData **)(pCVar16 + 0x18) = pCVar23;
      *(long *)(pCVar16 + 0x10) = lVar14;
      if (lVar14 != 0) {
        *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
      }
      *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
      if (*(long *)pCVar23 == 0) {
        *(CowData<char32_t> **)pCVar23 = pCVar16;
      }
      *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
      if (local_90 != 0) {
        LOCK();
        plVar17 = (long *)(local_90 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar20 + -0x10),false);
        }
      }
    }
  }
  get_window_placement((EditorRun *)&local_78);
  local_58[0] = _LC5;
  cVar11 = Vector2i::operator!=(local_74,(String *)local_58);
  if (cVar11 == '\0') {
LAB_00101552:
    if (local_64 != '\0') goto LAB_00102567;
LAB_00101560:
    if (local_63 == '\0') goto LAB_0010156e;
    local_88 = "--fullscreen";
    local_80 = 0xc;
  }
  else {
    local_90 = 0;
    local_88 = "--position";
    local_80 = 10;
    String::parse_latin1((StrRange *)&local_90);
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      pCVar23 = local_d0;
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
        pCVar23 = local_d0;
      }
    }
    itos((long)&local_90);
    local_88 = ",";
    local_a0 = 0;
    local_80 = 1;
    String::parse_latin1((StrRange *)&local_a0);
    itos((long)&local_a8);
    String::operator+((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    if (pCVar23 == (CowData *)0x0) {
      pCVar23 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(pCVar23 + 0x10) = 0;
      *(undefined1 (*) [16])pCVar23 = (undefined1  [16])0x0;
      local_d0 = pCVar23;
    }
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_88 != (char *)0x0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_88);
    }
    pcVar3 = local_88;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar17 = (long *)(local_88 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar14 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar17 = (long *)(local_98 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    pauVar22 = local_a8;
    if (local_a8 != (undefined1 (*) [16])0x0) {
      LOCK();
      pauVar1 = local_a8 + -1;
      *(long *)*pauVar1 = *(long *)*pauVar1 + -1;
      UNLOCK();
      if (*(long *)*pauVar1 == 0) {
        local_a8 = (undefined1 (*) [16])0x0;
        Memory::free_static(pauVar22 + -1,false);
      }
    }
    lVar14 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar17 = (long *)(local_a0 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_90;
    if (local_90 == 0) goto LAB_00101552;
    LOCK();
    plVar17 = (long *)(local_90 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 != 0) goto LAB_00101552;
    local_90 = 0;
    Memory::free_static((void *)(lVar14 + -0x10),false);
    if (local_64 == '\0') goto LAB_00101560;
LAB_00102567:
    local_88 = "--maximized";
    local_80 = 0xb;
  }
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_90);
  if (local_d0 == (CowData *)0x0) {
    local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)(local_d0 + 0x10) = 0;
    *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
  }
  pCVar23 = local_d0;
  pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
  }
  lVar20 = local_90;
  lVar14 = *(long *)(pCVar23 + 8);
  *(undefined8 *)(pCVar16 + 8) = 0;
  *(CowData **)(pCVar16 + 0x18) = pCVar23;
  *(long *)(pCVar16 + 0x10) = lVar14;
  if (lVar14 != 0) {
    *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
  }
  *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
  if (*(long *)pCVar23 == 0) {
    *(CowData<char32_t> **)pCVar23 = pCVar16;
  }
  *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
  if (local_90 != 0) {
    LOCK();
    plVar17 = (long *)(local_90 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar20 + -0x10),false);
    }
  }
LAB_0010156e:
  local_b8 = (undefined8 *)0x0;
  EditorData::get_editor_breakpoints((List *)(EditorNode::singleton + 0x430));
  if ((local_b8 != (undefined8 *)0x0) && (*(int *)(local_b8 + 2) != 0)) {
    local_90 = 0;
    local_88 = "--breakpoints";
    local_80 = 0xd;
    String::parse_latin1((StrRange *)&local_90);
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
    local_90 = 0;
    if (local_b8 != (undefined8 *)0x0) {
      for (pcVar3 = (char *)*local_b8; pcVar3 != (char *)0x0; pcVar3 = *(char **)(pcVar3 + 8)) {
        String::replace((char *)&local_88,pcVar3);
        String::operator+=((String *)&local_90,(String *)&local_88);
        pcVar5 = local_88;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_88 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar5 + -0x10,false);
          }
        }
        if (*(long *)(pcVar3 + 8) == 0) break;
        String::operator+=((String *)&local_90,",");
      }
    }
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
  }
  cVar11 = EditorDebuggerNode::is_skip_breakpoints();
  if (cVar11 != '\0') {
    local_90 = 0;
    local_88 = "--skip-breakpoints";
    local_80 = 0x12;
    String::parse_latin1((StrRange *)&local_90);
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)&local_90);
    }
    lVar20 = local_90;
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
    if (local_90 != 0) {
      LOCK();
      plVar17 = (long *)(local_90 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
  }
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
    }
    pCVar23 = local_d0;
    pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref(pCVar16,(CowData *)param_1);
    }
    lVar14 = *(long *)(pCVar23 + 8);
    *(undefined8 *)(pCVar16 + 8) = 0;
    *(CowData **)(pCVar16 + 0x18) = pCVar23;
    *(long *)(pCVar16 + 0x10) = lVar14;
    if (lVar14 != 0) {
      *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
    }
    *(CowData<char32_t> **)(pCVar23 + 8) = pCVar16;
    if (*(long *)pCVar23 == 0) {
      *(CowData<char32_t> **)pCVar23 = pCVar16;
    }
    *(int *)(pCVar23 + 0x10) = *(int *)(pCVar23 + 0x10) + 1;
  }
  pCVar23 = *(CowData **)(param_3 + 8);
  if ((pCVar23 != (CowData *)0x0) &&
     (pCVar15 = pCVar23 + *(long *)(pCVar23 + -8) * 8, pCVar23 != pCVar15)) {
    pCVar2 = local_d0;
    if (local_d0 == (CowData *)0x0) {
      local_d0 = (CowData *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(local_d0 + 0x10) = 0;
      *(undefined1 (*) [16])local_d0 = (undefined1  [16])0x0;
      pCVar2 = local_d0;
    }
    do {
      while( true ) {
        pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
        if (*(long *)pCVar23 != 0) {
          CowData<char32_t>::_ref(pCVar16,pCVar23);
        }
        lVar14 = *(long *)(pCVar2 + 8);
        *(undefined8 *)(pCVar16 + 8) = 0;
        *(CowData **)(pCVar16 + 0x18) = pCVar2;
        *(long *)(pCVar16 + 0x10) = lVar14;
        if (lVar14 != 0) {
          *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
        }
        *(CowData<char32_t> **)(pCVar2 + 8) = pCVar16;
        if (*(long *)pCVar2 != 0) break;
        pCVar23 = pCVar23 + 8;
        *(int *)(pCVar2 + 0x10) = *(int *)(pCVar2 + 0x10) + 1;
        *(CowData<char32_t> **)pCVar2 = pCVar16;
        if (pCVar15 == pCVar23) goto LAB_001018b7;
      }
      pCVar23 = pCVar23 + 8;
      *(int *)(pCVar2 + 0x10) = *(int *)(pCVar2 + 0x10) + 1;
    } while (pCVar15 != pCVar23);
  }
LAB_001018b7:
  plVar17 = (long *)OS::get_singleton();
  (**(code **)(*plVar17 + 0x100))(&local_b0);
  uVar12 = RunInstancesDialog::get_instance_count();
  if (0 < (int)uVar12) {
    uVar24 = 0;
    do {
      local_a8 = (undefined1 (*) [16])0x0;
      if ((local_d0 != (CowData *)0x0) &&
         (pCVar23 = *(CowData **)local_d0, pCVar23 != (CowData *)0x0)) {
        local_a8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)local_a8[1] = 0;
        *local_a8 = (undefined1  [16])0x0;
        do {
          while( true ) {
            pCVar16 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])pCVar16 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pCVar16 + 0x10) = (undefined1  [16])0x0;
            if (*(long *)pCVar23 != 0) {
              CowData<char32_t>::_ref(pCVar16,pCVar23);
            }
            lVar14 = *(long *)(*local_a8 + 8);
            *(undefined8 *)(pCVar16 + 8) = 0;
            *(undefined1 (**) [16])(pCVar16 + 0x18) = local_a8;
            *(long *)(pCVar16 + 0x10) = lVar14;
            if (lVar14 != 0) {
              *(CowData<char32_t> **)(lVar14 + 8) = pCVar16;
            }
            lVar14 = *(long *)*local_a8;
            *(CowData<char32_t> **)(*local_a8 + 8) = pCVar16;
            if (lVar14 != 0) break;
            pCVar23 = *(CowData **)(pCVar23 + 8);
            *(int *)local_a8[1] = *(int *)local_a8[1] + 1;
            *(CowData<char32_t> **)*local_a8 = pCVar16;
            if (pCVar23 == (CowData *)0x0) goto LAB_001019d9;
          }
          pCVar23 = *(CowData **)(pCVar23 + 8);
          *(int *)local_a8[1] = *(int *)local_a8[1] + 1;
        } while (pCVar23 != (CowData *)0x0);
      }
LAB_001019d9:
      RunInstancesDialog::get_argument_list_for_instance
                ((int)RunInstancesDialog::singleton,(List *)(ulong)uVar24);
      RunInstancesDialog::apply_custom_features((int)RunInstancesDialog::singleton);
      if (instance_starting_callback != (code *)0x0) {
        (*instance_starting_callback)(uVar24,(List<String,DefaultAllocator> *)&local_a8);
      }
      OS::get_singleton();
      cVar11 = OS::is_stdout_verbose();
      if (cVar11 != '\0') {
        local_98 = 0;
        plVar17 = (long *)(local_b0 + -0x10);
        if (local_b0 != 0) {
          do {
            lVar14 = *plVar17;
            if (lVar14 == 0) goto LAB_00101c86;
            LOCK();
            lVar20 = *plVar17;
            bVar6 = lVar14 == lVar20;
            if (bVar6) {
              *plVar17 = lVar14 + 1;
              lVar20 = lVar14;
            }
            UNLOCK();
          } while (!bVar6);
          if (lVar20 != -1) {
            local_98 = local_b0;
          }
        }
LAB_00101c86:
        local_a0 = 0;
        local_88 = "Running: %s";
        local_80 = 0xb;
        String::parse_latin1((StrRange *)&local_a0);
        vformat<String>((StrRange *)&local_90,(StrRange *)&local_a0,(StrRange *)&local_98);
        Variant::Variant((Variant *)local_58,(String *)&local_90);
        stringify_variants((Variant *)&local_88);
        __print_line((String *)&local_88);
        pcVar3 = local_88;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_88 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar14 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar17 = (long *)(local_90 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
        lVar14 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar17 = (long *)(local_a0 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
        lVar14 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar17 = (long *)(local_98 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
        if (local_a8 != (undefined1 (*) [16])0x0) {
          for (plVar17 = *(long **)*local_a8; plVar17 != (long *)0x0; plVar17 = (long *)plVar17[1])
          {
            plVar19 = (long *)(*plVar17 + -0x10);
            if (*plVar17 == 0) {
LAB_00101f34:
              lVar14 = 0;
              Variant::Variant((Variant *)local_58," %s");
              local_90 = 0;
            }
            else {
              do {
                lVar14 = *plVar19;
                if (lVar14 == 0) goto LAB_00101f34;
                LOCK();
                lVar20 = *plVar19;
                bVar6 = lVar14 == lVar20;
                if (bVar6) {
                  *plVar19 = lVar14 + 1;
                  lVar20 = lVar14;
                }
                UNLOCK();
              } while (!bVar6);
              if (lVar20 == -1) goto LAB_00101f34;
              lVar14 = *plVar17;
              Variant::Variant((Variant *)local_58," %s");
              local_90 = 0;
              if (lVar14 != 0) {
                plVar19 = (long *)(lVar14 + -0x10);
                do {
                  lVar20 = *plVar19;
                  if (lVar20 == 0) goto LAB_00101e71;
                  LOCK();
                  lVar21 = *plVar19;
                  bVar6 = lVar20 == lVar21;
                  if (bVar6) {
                    *plVar19 = lVar20 + 1;
                    lVar21 = lVar20;
                  }
                  UNLOCK();
                } while (!bVar6);
                if (lVar21 != -1) {
                  local_90 = lVar14;
                }
              }
            }
LAB_00101e71:
            stringify_variants<String>((String *)&local_88,(String *)local_58,(StrRange *)&local_90)
            ;
            __print_line((String *)&local_88);
            pcVar3 = local_88;
            if (local_88 != (char *)0x0) {
              LOCK();
              plVar19 = (long *)(local_88 + -0x10);
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (*plVar19 == 0) {
                local_88 = (char *)0x0;
                Memory::free_static(pcVar3 + -0x10,false);
              }
            }
            lVar20 = local_90;
            if (local_90 != 0) {
              LOCK();
              plVar19 = (long *)(local_90 + -0x10);
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (*plVar19 == 0) {
                local_90 = 0;
                Memory::free_static((void *)(lVar20 + -0x10),false);
              }
            }
            if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (lVar14 != 0) {
              plVar19 = (long *)(lVar14 + -0x10);
              LOCK();
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (*plVar19 == 0) {
                Memory::free_static(plVar19,false);
              }
            }
          }
        }
      }
      local_90 = 0;
      plVar17 = (long *)OS::get_singleton();
      lVar14 = *plVar17;
      if (*(code **)(lVar14 + 0x120) == OS::create_instance) {
        pcVar4 = *(code **)(lVar14 + 0x118);
        (**(code **)(lVar14 + 0x100))((String *)&local_88,plVar17);
        iVar13 = (*pcVar4)(plVar17,(String *)&local_88,(List<String,DefaultAllocator> *)&local_a8,
                           (StrRange *)&local_90,0);
        pcVar3 = local_88;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar17 = (long *)(local_88 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
      }
      else {
        iVar13 = (**(code **)(lVar14 + 0x120))
                           (plVar17,(List<String,DefaultAllocator> *)&local_a8,(StrRange *)&local_90
                           );
      }
      if (iVar13 != 0) {
        _err_print_error(&_LC56,"editor/editor_run.cpp",0xa8,
                         "Condition \"err\" is true. Returning: err",0,0);
        List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_a8);
        lVar14 = local_b0;
        goto joined_r0x00101fdc;
      }
      if (local_90 != 0) {
        if (*(long *)this == 0) {
          pauVar22 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])this = pauVar22;
          *(undefined4 *)pauVar22[1] = 0;
          *pauVar22 = (undefined1  [16])0x0;
        }
        plVar19 = (long *)operator_new(0x20,DefaultAllocator::alloc);
        plVar19[1] = 0;
        *plVar19 = local_90;
        plVar17 = *(long **)this;
        lVar14 = plVar17[1];
        plVar19[3] = (long)plVar17;
        plVar19[2] = lVar14;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 8) = plVar19;
        }
        plVar17[1] = (long)plVar19;
        if (*plVar17 == 0) {
          *plVar17 = (long)plVar19;
        }
        *(int *)(plVar17 + 2) = (int)plVar17[2] + 1;
      }
      uVar24 = uVar24 + 1;
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_a8);
    } while (uVar12 != uVar24);
  }
  *(undefined4 *)(this + 8) = 0;
  lVar14 = *(long *)param_1;
  if (((lVar14 != 0) && (1 < *(uint *)(lVar14 + -8))) && (lVar14 != *(long *)(this + 0x10))) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)param_1);
  }
  iVar13 = 0;
  lVar14 = local_b0;
joined_r0x00101fdc:
  local_b0 = lVar14;
  if (lVar14 != 0) {
    LOCK();
    plVar17 = (long *)(lVar14 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_b8);
  lVar14 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar17 = (long *)(local_c0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  lVar14 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar17 = (long *)(local_c8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_d0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar13;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* DisplayServer::screen_get_max_scale() const */

float __thiscall DisplayServer::screen_get_max_scale(DisplayServer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float __x;
  float __y;
  
  iVar1 = (**(code **)(*(long *)this + 0x3f8))();
  if (0 < iVar1) {
    __y = _LC0;
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      __x = (float)(**(code **)(*(long *)this + 0x438))(this,iVar2);
      __y = fmaxf(__x,__y);
      iVar2 = iVar3;
    } while (iVar1 != iVar3);
    return __y;
  }
  return _LC0;
}



/* OS::create_instance(List<String, DefaultAllocator> const&, long*) */

ulong __thiscall OS::create_instance(OS *this,List *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*(long *)this + 0x118);
  (**(code **)(*(long *)this + 0x100))(&local_38,this);
  uVar4 = (*pcVar2)(this,&local_38,param_1,param_2,0);
  lVar3 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      uVar4 = uVar4 & 0xffffffff;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[3] == plVar5) {
      lVar4 = plVar2[1];
      lVar3 = plVar2[2];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
        lVar4 = plVar2[1];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00104278) */
/* WARNING: Removing unreachable block (ram,0x001043a8) */
/* WARNING: Removing unreachable block (ram,0x00104570) */
/* WARNING: Removing unreachable block (ram,0x001043b4) */
/* WARNING: Removing unreachable block (ram,0x001043be) */
/* WARNING: Removing unreachable block (ram,0x00104550) */
/* WARNING: Removing unreachable block (ram,0x001043ca) */
/* WARNING: Removing unreachable block (ram,0x001043d4) */
/* WARNING: Removing unreachable block (ram,0x00104530) */
/* WARNING: Removing unreachable block (ram,0x001043e0) */
/* WARNING: Removing unreachable block (ram,0x001043ea) */
/* WARNING: Removing unreachable block (ram,0x00104510) */
/* WARNING: Removing unreachable block (ram,0x001043f6) */
/* WARNING: Removing unreachable block (ram,0x00104400) */
/* WARNING: Removing unreachable block (ram,0x001044f0) */
/* WARNING: Removing unreachable block (ram,0x0010440c) */
/* WARNING: Removing unreachable block (ram,0x00104416) */
/* WARNING: Removing unreachable block (ram,0x001044d0) */
/* WARNING: Removing unreachable block (ram,0x00104422) */
/* WARNING: Removing unreachable block (ram,0x0010442c) */
/* WARNING: Removing unreachable block (ram,0x001044b0) */
/* WARNING: Removing unreachable block (ram,0x00104434) */
/* WARNING: Removing unreachable block (ram,0x0010444a) */
/* WARNING: Removing unreachable block (ram,0x00104456) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* String stringify_variants<String>(Variant const&, String) */

String * stringify_variants<String>(String *param_1,undefined8 param_2,String *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  stringify_variants((Variant *)&local_70);
  local_68 = &_LC25;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+(param_1,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


