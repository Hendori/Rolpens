/* ParticleProcessMaterialMinMaxPropertyEditor::_set_mouse_inside(bool) */void ParticleProcessMaterialMinMaxPropertyEditor::_set_mouse_inside(ParticleProcessMaterialMinMaxPropertyEditor *this, bool param_1) {
   this[0xc08] = (ParticleProcessMaterialMinMaxPropertyEditor)param_1;
   if (!param_1) {
      *(undefined4*)( this + 0xc0c ) = 0;
   }

   CanvasItem::queue_redraw();
   return;
}
/* CowData<Range*>::_copy_on_write() [clone .isra.0] */void CowData<Range*>::_copy_on_write(CowData<Range*> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* EditorInspectorParticleProcessMaterialPlugin::can_handle(Object*) */bool EditorInspectorParticleProcessMaterialPlugin::can_handle(EditorInspectorParticleProcessMaterialPlugin *this, Object *param_1) {
   long lVar1;
   if (param_1 != (Object*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &ParticleProcessMaterial::typeinfo, 0);
      return lVar1 != 0;
   }

   return false;
}
/* ParticleProcessMaterialMinMaxPropertyEditor::_notification(int) [clone .part.0] */void ParticleProcessMaterialMinMaxPropertyEditor::_notification(int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  StringName *pSVar3;
  Vector2 *pVVar4;
  long lVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  Object *pOVar9;
  undefined4 in_register_0000003c;
  StringName *pSVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  Object *local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pSVar10 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  pRVar1 = *(Ref **)(pSVar10 + 0xbc0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  Button::set_button_icon(pRVar1);
  if (((local_60 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar2 = local_60, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_60), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  pOVar2 = *(Object **)(pSVar10 + 0xb58);
  pOVar9 = pOVar2;
  if (local_60 == pOVar2) {
LAB_00100276:
    if (((pOVar9 != (Object *)0x0) &&
        (cVar7 = RefCounted::unreference(), pOVar2 = local_60, cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_60), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  else {
    *(Object **)(pSVar10 + 0xb58) = local_60;
    if (local_60 != (Object *)0x0) {
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        *(undefined8 *)(pSVar10 + 0xb58) = 0;
      }
      pOVar9 = local_60;
      if (pOVar2 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        goto joined_r0x001005d3;
      }
      goto LAB_00100276;
    }
    if (pOVar2 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
joined_r0x001005d3:
      pOVar9 = local_60;
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar2), pOVar9 = local_60, cVar7 != '\0'))
      {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
        pOVar9 = local_60;
      }
      goto LAB_00100276;
    }
  }
  if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  pOVar2 = *(Object **)(pSVar10 + 0xb60);
  pOVar9 = pOVar2;
  if (local_60 != pOVar2) {
    *(Object **)(pSVar10 + 0xb60) = local_60;
    if (local_60 == (Object *)0x0) {
      if (pOVar2 == (Object *)0x0) goto LAB_00100313;
      cVar7 = RefCounted::unreference();
    }
    else {
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        *(undefined8 *)(pSVar10 + 0xb60) = 0;
      }
      pOVar9 = local_60;
      if (pOVar2 == (Object *)0x0) goto LAB_001002fe;
      cVar7 = RefCounted::unreference();
    }
    pOVar9 = local_60;
    if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar2), pOVar9 = local_60, cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
      pOVar9 = local_60;
    }
  }
LAB_001002fe:
  if (((pOVar9 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_60), cVar7 != '\0')) {
    (**(code **)(*(long *)local_60 + 0x140))(local_60);
    Memory::free_static(local_60,false);
  }
LAB_00100313:
  pSVar3 = *(StringName **)(pSVar10 + 0xbd8);
  if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
  }
  local_58 = Control::get_theme_color
                       (pSVar10,(StringName *)&_notification(int)::{lambda()#5}::operator()()::sname
                       );
  if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
  }
  Control::add_theme_color_override
            (pSVar3,(Color *)&_notification(int)::{lambda()#4}::operator()()::sname);
  pSVar3 = *(StringName **)(pSVar10 + 0xbe0);
  if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
  }
  auVar15 = Control::get_theme_color
                      (pSVar10,(StringName *)&_notification(int)::{lambda()#7}::operator()()::sname)
  ;
  local_58 = auVar15;
  if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
  }
  Control::add_theme_color_override
            (pSVar3,(Color *)&_notification(int)::{lambda()#6}::operator()()::sname);
  cVar7 = EditorThemeManager::is_dark_theme();
  if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
    }
  }
  auVar15 = Control::get_theme_color
                      (pSVar10,(StringName *)&_notification(int)::{lambda()#8}::operator()()::sname)
  ;
  fVar6 = _LC17;
  fVar12 = _LC14;
  fVar14 = _LC14;
  fVar11 = _LC13;
  uVar13 = _LC12;
  if (cVar7 == '\0') {
    fVar14 = _LC16;
    fVar11 = _LC14;
    uVar13 = _LC15;
  }
  *(undefined4 *)(pSVar10 + 0xb70) = uVar13;
  *(float *)(pSVar10 + 0xb78) = fVar11;
  *(ulong *)(pSVar10 + 0xb68) = CONCAT44(uVar13,uVar13);
  *(float *)(pSVar10 + 0xb7c) = fVar11;
  *(float *)(pSVar10 + 0xb80) = fVar11;
  *(float *)(pSVar10 + 0xb74) = fVar6;
  *(float *)(pSVar10 + 0xb84) = fVar6;
  *(float *)(pSVar10 + 0xb88) = fVar14;
  *(float *)(pSVar10 + 0xb8c) = fVar14;
  *(float *)(pSVar10 + 0xb90) = fVar14;
  *(float *)(pSVar10 + 0xb94) = fVar6;
  *(float *)(pSVar10 + 0xb9c) = (auVar15._4_4_ - fVar14) * fVar12 + fVar14;
  *(float *)(pSVar10 + 0xb98) = (auVar15._0_4_ - fVar14) * fVar12 + fVar14;
  *(float *)(pSVar10 + 0xba0) = (auVar15._8_4_ - fVar14) * fVar12 + fVar14;
  *(float *)(pSVar10 + 0xba4) = (auVar15._12_4_ - fVar6) * fVar12 + fVar6;
  fVar12 = 0.0;
  if (cVar7 != '\0') {
    fVar12 = fVar6;
  }
  pVVar4 = *(Vector2 **)(pSVar10 + 3000);
  *(float *)(pSVar10 + 0xbb0) = fVar12;
  *(float *)(pSVar10 + 0xbb4) = fVar6;
  lVar5 = **(long **)(pSVar10 + 0xb58);
  *(ulong *)(pSVar10 + 0xba8) = CONCAT44(fVar12,fVar12);
  iVar8 = (**(code **)(lVar5 + 0x1d0))();
  local_58._0_8_ = (ulong)(uint)(float)(iVar8 + 8) << 0x20;
  Control::set_custom_minimum_size(pVVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_update_sizing() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_update_sizing
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  
  uVar3 = Control::get_size();
  *(undefined8 *)(this + 0xbe8) = uVar3;
  fVar2 = *(float *)(this + 0xbec);
  iVar1 = (**(code **)(**(long **)(this + 0xb58) + 0x1d0))();
  fVar4 = (fVar2 - (float)iVar1) * _LC13;
  iVar1 = (**(code **)(**(long **)(this + 0xb58) + 0x1c8))();
  fVar2 = (float)iVar1;
  *(ulong *)(this + 0xbf0) = CONCAT44(fVar4,fVar2);
  *(ulong *)(this + 0xbf8) =
       CONCAT44(*(float *)(this + 0xbec) - (fVar4 + fVar4),
                *(float *)(this + 0xbe8) - (fVar2 + fVar2));
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_get_min_ratio() const */

undefined8 __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_get_min_ratio
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  double dVar1;
  
  dVar1 = (double)Range::get_value();
  dVar1 = (dVar1 - (double)*(float *)(this + 0xc00)) /
          (double)(*(float *)(this + 0xc04) - *(float *)(this + 0xc00));
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_get_max_ratio() const */

undefined8 __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_get_max_ratio
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  double dVar1;
  
  dVar1 = (double)Range::get_value();
  dVar1 = (dVar1 - (double)*(float *)(this + 0xc00)) /
          (double)(*(float *)(this + 0xc04) - *(float *)(this + 0xc00));
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_get_left_offset() const */

undefined8 __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_get_left_offset
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar1 = *(float *)(this + 0xbf0);
  fVar2 = *(float *)(this + 0xbf8);
  dVar3 = (double)Range::get_value();
  dVar3 = (dVar3 - (double)*(float *)(this + 0xc00)) /
          (double)(*(float *)(this + 0xc04) - *(float *)(this + 0xc00));
  return CONCAT44((int)((ulong)dVar3 >> 0x20),(float)dVar3 * fVar2 + fVar1);
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_get_right_offset() const */

undefined8 __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_get_right_offset
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar1 = *(float *)(this + 0xbf0);
  fVar2 = *(float *)(this + 0xbf8);
  dVar3 = (double)Range::get_value();
  dVar3 = (dVar3 - (double)*(float *)(this + 0xc00)) /
          (double)(*(float *)(this + 0xc04) - *(float *)(this + 0xc00));
  return CONCAT44((int)((ulong)dVar3 >> 0x20),(float)dVar3 * fVar2 + fVar1);
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_get_middle_rect() const */

undefined1  [16] __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_get_middle_rect
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  float fVar11;
  
  dVar9 = (double)Range::get_value();
  dVar10 = (double)Range::get_value();
  if (dVar9 != dVar10) {
    dVar7 = _LC29;
    if (_LC29 <= ABS(dVar10) * _LC29) {
      dVar7 = ABS(dVar10) * _LC29;
    }
    if (dVar7 <= ABS(dVar10 - dVar9)) {
      uVar1 = *(undefined4 *)(this + 0xbfc);
      fVar11 = *(float *)(this + 0xbf8);
      dVar9 = (double)Range::get_value();
      fVar2 = *(float *)(this + 0xc00);
      fVar3 = *(float *)(this + 0xc04);
      dVar10 = (double)Range::get_value();
      uVar4 = *(undefined4 *)(this + 0xbf4);
      fVar5 = *(float *)(this + 0xbf0);
      fVar6 = *(float *)(this + 0xbf8);
      fVar11 = ((float)((dVar9 - (double)fVar2) / (double)(fVar3 - fVar2)) -
               (float)((dVar10 - (double)*(float *)(this + 0xc00)) /
                      (double)(*(float *)(this + 0xc04) - *(float *)(this + 0xc00)))) * fVar11 +
               _LC17;
      dVar9 = (double)Range::get_value();
      auVar8._4_4_ = uVar4;
      auVar8._0_4_ = ((float)((dVar9 - (double)*(float *)(this + 0xc00)) /
                             (double)(*(float *)(this + 0xc04) - *(float *)(this + 0xc00))) * fVar6
                     + fVar5) - _LC17;
      auVar8._8_4_ = fVar11;
      auVar8._12_4_ = uVar1;
      return auVar8;
    }
  }
  return ZEXT816(0);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParticleProcessMaterialMinMaxPropertyEditor::_range_edit_draw() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_range_edit_draw
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Rect2 *pRVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  undefined8 extraout_XMM1_Qa;
  float fVar12;
  float fVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xb58) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0x30;
      pcVar10 = "Condition \"range_slider_left_icon.is_null()\" is true.";
LAB_00101306:
      _err_print_error("_range_edit_draw",
                       "editor/plugins/particle_process_material_editor_plugin.cpp",uVar11,pcVar10,0
                       ,0);
      return;
    }
  }
  else if (*(long *)(this + 0xb60) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0x31;
      pcVar10 = "Condition \"range_slider_right_icon.is_null()\" is true.";
      goto LAB_00101306;
    }
  }
  else {
    _update_sizing(this);
    if ((this[0xc08] == (ParticleProcessMaterialMinMaxPropertyEditor)0x0) &&
       (*(int *)(this + 0xc10) == 0)) {
      local_48 = *(undefined8 *)(this + 0xb68);
      uStack_40 = *(undefined8 *)(this + 0xb70);
      bVar8 = false;
    }
    else {
      bVar8 = true;
      local_48 = CONCAT44((*(float *)(this + 0xb7c) - *(float *)(this + 0xb6c)) * _LC12 +
                          *(float *)(this + 0xb6c),
                          (*(float *)(this + 0xb78) - *(float *)(this + 0xb68)) * _LC12 +
                          *(float *)(this + 0xb68));
      uStack_40 = CONCAT44((*(float *)(this + 0xb84) - *(float *)(this + 0xb74)) * _LC12 +
                           *(float *)(this + 0xb74),
                           (*(float *)(this + 0xb80) - *(float *)(this + 0xb70)) * _LC12 +
                           *(float *)(this + 0xb70));
    }
    local_58 = CONCAT44(_LC17 + *(float *)(this + 0xbf4),_LC17 + *(float *)(this + 0xbf0));
    uStack_50 = CONCAT44(_LC37 + *(float *)(this + 0xbfc),_LC37 + *(float *)(this + 0xbf8));
    CanvasItem::draw_rect
              (*(Rect2 **)(this + 3000),(Color *)&local_58,SUB81((Color *)&local_48,0),_LC17,false);
    uStack_50 = CONCAT44(_LC17,_UNK_0010d078);
    local_58 = __LC38;
    if (bVar8) {
      fVar1 = *(float *)(this + 0xbf0);
      fVar2 = *(float *)(this + 0xbf8);
      dVar6 = (double)Range::get_value();
      fVar3 = *(float *)(this + 0xc00);
      fVar4 = *(float *)(this + 0xc04);
      iVar9 = (**(code **)(**(long **)(this + 0xb58) + 0x1c8))();
      if ((*(int *)(this + 0xc10) == 1) || (*(int *)(this + 0xc10) == 4)) {
        local_58 = *(undefined8 *)(this + 0xb98);
        uStack_50 = *(undefined8 *)(this + 0xba0);
      }
      else if (*(int *)(this + 0xc0c) == 1) {
        local_58 = *(undefined8 *)(this + 0xb88);
        uStack_50 = *(undefined8 *)(this + 0xb90);
      }
      else {
        local_58 = *(undefined8 *)(this + 0xb78);
        uStack_50 = *(undefined8 *)(this + 0xb80);
      }
      local_48 = CONCAT44(*(undefined4 *)(this + 0xbf4),
                          (((float)((dVar6 - (double)fVar3) / (double)(fVar4 - fVar3)) * fVar2 +
                           fVar1) - (float)iVar9) - _LC17);
      CanvasItem::draw_texture(*(Ref **)(this + 3000),(Vector2 *)(this + 0xb58),(Color *)&local_48);
      fVar1 = *(float *)(this + 0xbf0);
      fVar2 = *(float *)(this + 0xbf8);
      dVar6 = (double)Range::get_value();
      if ((*(int *)(this + 0xc10) - 2U & 0xfffffffd) == 0) {
        local_58 = *(undefined8 *)(this + 0xb98);
        uStack_50 = *(undefined8 *)(this + 0xba0);
      }
      else if (*(int *)(this + 0xc0c) == 2) {
        local_58 = *(undefined8 *)(this + 0xb88);
        uStack_50 = *(undefined8 *)(this + 0xb90);
      }
      else {
        local_58 = *(undefined8 *)(this + 0xb78);
        uStack_50 = *(undefined8 *)(this + 0xb80);
      }
      local_48 = CONCAT44(*(undefined4 *)(this + 0xbf4),
                          (float)((dVar6 - (double)*(float *)(this + 0xc00)) /
                                 (double)(*(float *)(this + 0xc04) - *(float *)(this + 0xc00))) *
                          fVar2 + fVar1);
      CanvasItem::draw_texture(*(Ref **)(this + 3000),(Vector2 *)(this + 0xb60),(Color *)&local_48);
    }
    if (*(int *)(this + 0xc10) - 3U < 2) {
      local_58 = *(undefined8 *)(this + 0xb98);
      uStack_50 = *(undefined8 *)(this + 0xba0);
    }
    else if (*(int *)(this + 0xc0c) == 3) {
      local_58 = *(undefined8 *)(this + 0xb88);
      uStack_50 = *(undefined8 *)(this + 0xb90);
    }
    else {
      local_58 = *(undefined8 *)(this + 0xb78);
      uStack_50 = *(undefined8 *)(this + 0xb80);
    }
    pRVar5 = *(Rect2 **)(this + 3000);
    local_48 = _get_middle_rect(this);
    uStack_40 = extraout_XMM1_Qa;
    CanvasItem::draw_rect(pRVar5,(Color *)&local_48,SUB81((Color *)&local_58,0),_LC37,true);
    fVar12 = *(float *)(this + 0xbfc) - __LC39;
    fVar1 = *(float *)(this + 0xbf0);
    fVar13 = _LC40 + *(float *)(this + 0xbf4);
    fVar2 = *(float *)(this + 0xbf8);
    dVar6 = (double)Range::get_value();
    fVar3 = *(float *)(this + 0xc00);
    fVar4 = *(float *)(this + 0xc04);
    dVar7 = (double)Range::get_value();
    uStack_40 = CONCAT44(fVar12,0x40000000);
    local_48 = CONCAT44(fVar13,(float)(((double)(((float)((dVar7 - (double)*(float *)(this + 0xc00))
                                                         / (double)(*(float *)(this + 0xc04) -
                                                                   *(float *)(this + 0xc00))) +
                                                 (float)((dVar6 - (double)fVar3) /
                                                        (double)(fVar4 - fVar3))) * fVar2) * _LC41 +
                                       (double)fVar1) - __LC42));
    CanvasItem::draw_rect
              (*(Rect2 **)(this + 3000),(Color *)&local_48,(bool)((char)this + -0x58),_LC37,true);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_sync_property() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_sync_property
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  double dVar1;
  double dVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = (double)Range::get_value();
  dVar2 = (double)Range::get_value();
  local_50 = CONCAT44((float)dVar1,(float)dVar2);
  StringName::StringName((StringName *)&local_58,"",false);
  Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)this,(Variant *)&local_60,(StringName *)local_48,
             SUB81((StringName *)&local_58,0));
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  CanvasItem::queue_redraw();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_get_max_spread() const */

float ParticleProcessMaterialMinMaxPropertyEditor::_get_max_spread(void)

{
  char cVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
  dVar2 = (double)Range::get_max();
  dVar3 = (double)Range::get_min();
  fVar4 = (float)(dVar2 - dVar3);
  cVar1 = Range::is_greater_allowed();
  if (cVar1 == '\0') {
    cVar1 = Range::is_lesser_allowed();
    if (cVar1 == '\0') {
      dVar2 = (double)Range::get_value();
      dVar3 = (double)Range::get_min();
      if (dVar2 - dVar3 <= (double)fVar4) {
        fVar4 = (float)(dVar2 - dVar3);
      }
    }
    cVar1 = Range::is_greater_allowed();
    if (cVar1 == '\0') {
      dVar2 = (double)Range::get_max();
      dVar3 = (double)Range::get_value();
      if (dVar2 - dVar3 <= (double)fVar4) {
        fVar4 = (float)(dVar2 - dVar3);
      }
    }
  }
  return fVar4;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_update_slider_values() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_update_slider_values
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(this + 0xc20) == 0) {
    dVar3 = (double)Range::get_value();
    Range::set_value_no_signal(dVar3);
    dVar3 = (double)Range::get_value();
    Range::set_value_no_signal(dVar3);
    return;
  }
  if (*(int *)(this + 0xc20) != 1) {
    return;
  }
  dVar3 = (double)Range::get_value();
  dVar4 = (double)Range::get_value();
  Range::set_value_no_signal((dVar4 + dVar3) * _LC41);
  dVar3 = (double)Range::get_value();
  dVar4 = (double)Range::get_value();
  Range::set_value_no_signal(_LC41 * (dVar3 - dVar4));
  Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xbe0),0));
  fVar2 = (float)_get_max_spread();
  Range::set_max((double)fVar2);
  uVar1 = *(undefined8 *)(this + 0xbe0);
  Range::get_max();
  EditorSpinSlider::set_read_only(SUB81(uVar1,0));
  Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xbe0),0));
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_set_clamped_values(float, float) */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_set_clamped_values
          (ParticleProcessMaterialMinMaxPropertyEditor *this,float param_1,float param_2)

{
  if (param_1 <= *(float *)(this + 0xc00)) {
    param_1 = *(float *)(this + 0xc00);
  }
  Range::set_value((double)param_1);
  if (*(float *)(this + 0xc04) <= param_2) {
    param_2 = *(float *)(this + 0xc04);
  }
  Range::set_value((double)param_2);
  _update_slider_values(this);
  _sync_property(this);
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_range_edit_gui_input(Ref<InputEvent> const&) */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_range_edit_gui_input
          (ParticleProcessMaterialMinMaxPropertyEditor *this,Ref *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  lVar7 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 != 0) {
    pOVar5 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar5 == (Object *)0x0) {
LAB_001019d9:
      pOVar6 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
      if (pOVar6 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 != '\0') {
          pOVar5 = (Object *)0x0;
          goto LAB_0010184d;
        }
      }
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        lVar7 = *(long *)param_1;
        if (lVar7 == 0) goto LAB_001019a5;
        goto LAB_001019d9;
      }
      if (((*(long *)param_1 == 0) ||
          (pOVar6 = (Object *)
                    __dynamic_cast(*(long *)param_1,&Object::typeinfo,
                                   &InputEventMouseMotion::typeinfo,0), pOVar6 == (Object *)0x0)) ||
         (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        iVar3 = InputEventMouseButton::get_button_index();
        if (iVar3 == 1) {
          pOVar6 = (Object *)0x0;
          goto LAB_0010184d;
        }
      }
      else {
        InputEventMouseButton::get_button_index();
LAB_0010184d:
        if (*(long *)(this + 0xb58) == 0) {
          _err_print_error("_range_edit_gui_input",
                           "editor/plugins/particle_process_material_editor_plugin.cpp",0x6b,
                           "Condition \"range_slider_left_icon.is_null()\" is true.",0,0);
LAB_00101df5:
          if (pOVar6 != (Object *)0x0) goto LAB_00101980;
        }
        else {
          if (*(long *)(this + 0xb60) == 0) {
            _err_print_error("_range_edit_gui_input",
                             "editor/plugins/particle_process_material_editor_plugin.cpp",0x6c,
                             "Condition \"range_slider_right_icon.is_null()\" is true.",0,0);
            goto LAB_00101df5;
          }
          _update_sizing(this);
          if (pOVar5 == (Object *)0x0) {
            fVar15 = *(float *)(this + 0xc04);
            fVar9 = *(float *)(this + 0xc00);
            if (pOVar6 == (Object *)0x0) goto LAB_001019a5;
          }
          else {
            iVar3 = *(int *)(this + 0xc10);
            cVar2 = InputEvent::is_pressed();
            if (cVar2 == '\0') {
              *(undefined4 *)(this + 0xc10) = 0;
              iVar4 = 0;
            }
            else {
              cVar2 = InputEventWithModifiers::is_shift_pressed();
              if (cVar2 == '\0') {
                if (*(int *)(this + 0xc0c) == 1) {
                  *(undefined4 *)(this + 0xc10) = 1;
                  dVar12 = (double)Range::get_value();
                  *(float *)(this + 0xc14) = (float)dVar12;
                }
                else if (*(int *)(this + 0xc0c) == 2) {
                  *(undefined4 *)(this + 0xc10) = 2;
                  dVar12 = (double)Range::get_value();
                  *(float *)(this + 0xc14) = (float)dVar12;
                }
                else {
                  *(undefined4 *)(this + 0xc10) = 3;
                  dVar12 = (double)Range::get_value();
                  *(float *)(this + 0xc14) = (float)dVar12;
                }
              }
              else {
                *(undefined4 *)(this + 0xc10) = 4;
                dVar12 = (double)Range::get_value();
                dVar14 = (double)Range::get_value();
                *(float *)(this + 0xc14) = (float)((dVar12 - dVar14) * _LC41);
                dVar12 = (double)Range::get_value();
                dVar14 = (double)Range::get_value();
                *(float *)(this + 0xc18) = (float)((dVar14 + dVar12) * _LC41);
              }
              uVar10 = InputEventMouse::get_position();
              iVar4 = *(int *)(this + 0xc10);
              *(undefined4 *)(this + 0xc1c) = uVar10;
            }
            if (iVar3 != iVar4) {
              CanvasItem::queue_redraw();
            }
            fVar15 = *(float *)(this + 0xc04);
            fVar9 = *(float *)(this + 0xc00);
            if (pOVar6 == (Object *)0x0) goto LAB_00101995;
          }
          auVar1._8_8_ = local_58._8_8_;
          auVar1._0_8_ = local_58._0_8_;
          iVar3 = *(int *)(this + 0xc10);
          fVar15 = fVar15 - fVar9;
          if (iVar3 == 3) {
            fVar11 = (float)InputEventMouse::get_position();
            fVar9 = *(float *)(this + 0xc1c);
            fVar8 = *(float *)(this + 0xbf8);
            dVar12 = (double)Range::get_value();
            dVar14 = (double)Range::get_value();
            fVar16 = *(float *)(this + 0xc14);
            fVar15 = ((fVar11 - fVar9) / fVar8) * fVar15 + fVar16;
            fVar9 = *(float *)(this + 0xc00);
            if ((*(float *)(this + 0xc00) <= fVar15) &&
               (fVar9 = *(float *)(this + 0xc04) - (float)(dVar12 - dVar14), fVar15 <= fVar9)) {
              fVar9 = fVar15;
            }
            fVar16 = (fVar9 - fVar16) + fVar16;
            _set_clamped_values(this,fVar16,(float)(dVar12 - dVar14) + fVar16);
          }
          else if (iVar3 < 4) {
            if (iVar3 == 0) {
              fVar9 = *(float *)(this + 0xbf0);
              fVar15 = *(float *)(this + 0xbf8);
              iVar3 = *(int *)(this + 0xc0c);
              fVar8 = (float)_get_min_ratio(this);
              iVar4 = (**(code **)(**(long **)(this + 0xb58) + 0x1c8))();
              fVar9 = ((fVar8 * fVar15 + fVar9) - (float)iVar4) - _LC17;
              local_58._8_8_ = (**(code **)(**(long **)(this + 0xb58) + 0x1d8))();
              local_58._4_4_ = 0;
              local_58._0_4_ = fVar9;
              local_60 = InputEventMouse::get_position();
              cVar2 = Rect2::has_point((Rect2 *)local_58,(Vector2 *)&local_60);
              if (cVar2 == '\0') {
                uVar13 = (**(code **)(**(long **)(this + 0xb60) + 0x1d8))();
                fVar9 = *(float *)(this + 0xbf0);
                fVar15 = *(float *)(this + 0xbf8);
                fVar8 = (float)_get_max_ratio(this);
                local_58._4_4_ = 0;
                local_58._0_4_ = fVar8 * fVar15 + fVar9;
                local_58._8_8_ = uVar13;
                local_60 = InputEventMouse::get_position();
                cVar2 = Rect2::has_point((Rect2 *)local_58,(Vector2 *)&local_60);
                if (cVar2 == '\0') {
                  local_58 = _get_middle_rect(this);
                  local_60 = InputEventMouse::get_position();
                  cVar2 = Rect2::has_point((Rect2 *)local_58,(Vector2 *)&local_60);
                  iVar4 = 0;
                  if (cVar2 != '\0') {
                    iVar4 = 3;
                  }
                }
                else {
                  iVar4 = 2;
                }
              }
              else {
                iVar4 = 1;
              }
              *(int *)(this + 0xc0c) = iVar4;
              if (iVar3 != iVar4) {
                CanvasItem::queue_redraw();
              }
            }
            else {
              local_58 = auVar1;
              if (iVar3 - 1U < 2) {
                fVar9 = *(float *)(this + 0xc14);
                fVar8 = (float)InputEventMouse::get_position();
                fVar9 = ((fVar8 - *(float *)(this + 0xc1c)) / *(float *)(this + 0xbf8)) * fVar15 +
                        fVar9;
                if (*(int *)(this + 0xc10) == 1) {
                  dVar12 = (double)Range::get_value();
                  if (dVar12 <= (double)fVar9) {
                    fVar9 = (float)dVar12;
                  }
                  dVar12 = (double)Range::get_value();
                  _set_clamped_values(this,fVar9,(float)dVar12);
                }
                else {
                  dVar12 = (double)Range::get_value();
                  if ((double)fVar9 <= dVar12) {
                    fVar9 = (float)dVar12;
                  }
                  dVar12 = (double)Range::get_value();
                  _set_clamped_values(this,(float)dVar12,fVar9);
                }
              }
            }
          }
          else if (iVar3 == 4) {
            fVar8 = (float)InputEventMouse::get_position();
            fVar9 = *(float *)(this + 0xc18);
            fVar8 = ((fVar8 - *(float *)(this + 0xc1c)) / *(float *)(this + 0xbf8)) * fVar15 +
                    *(float *)(this + 0xc14);
            fVar16 = fVar9 - fVar8;
            fVar8 = fVar9 + fVar8;
            fVar15 = fVar9;
            if (fVar16 <= fVar9) {
              fVar15 = fVar16;
            }
            if (fVar9 <= fVar8) {
              fVar9 = fVar8;
            }
            _set_clamped_values(this,fVar15,fVar9);
          }
LAB_00101980:
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar6);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
        }
        if (pOVar5 == (Object *)0x0) goto LAB_001019a5;
      }
LAB_00101995:
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar5,false);
            return;
          }
          goto LAB_00101fdd;
        }
      }
    }
  }
LAB_001019a5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101fdd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialMinMaxPropertyEditor::update_property() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::update_property
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  long in_FS_OFFSET;
  undefined8 uVar1;
  int local_38 [2];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_38[0] = 0;
    local_30 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_38,*(bool **)(this + 0xa10));
  }
  uVar1 = Variant::operator_cast_to_Vector2((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  Range::set_value((double)(float)uVar1);
  Range::set_value((double)(float)((ulong)uVar1 >> 0x20));
  _update_slider_values(this);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::queue_redraw();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_sync_sliders(float, EditorSpinSlider const*) */

void ParticleProcessMaterialMinMaxPropertyEditor::_sync_sliders
               (float param_1,EditorSpinSlider *param_2)

{
  undefined8 uVar1;
  long in_RSI;
  float fVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(param_2 + 0xc20) == 0) {
    if (*(long *)(param_2 + 0xbe0) == in_RSI) {
      dVar4 = (double)Range::get_value();
      dVar3 = (double)Range::get_value();
      if (dVar4 <= dVar3) {
        dVar3 = dVar4;
      }
      Range::set_value_no_signal(dVar3);
    }
    dVar3 = (double)Range::get_value();
    Range::set_value(dVar3);
    if (*(long *)(param_2 + 0xbd8) == in_RSI) {
      dVar4 = (double)Range::get_value();
      dVar3 = (double)Range::get_value();
      if (dVar3 <= dVar4) {
        dVar3 = dVar4;
      }
      Range::set_value_no_signal(dVar3);
    }
    dVar3 = (double)Range::get_value();
    Range::set_value(dVar3);
    _sync_property((ParticleProcessMaterialMinMaxPropertyEditor *)param_2);
  }
  else if (*(int *)(param_2 + 0xc20) == 1) {
    if (*(long *)(param_2 + 0xbd8) == in_RSI) {
      Object::set_block_signals(SUB81(*(undefined8 *)(param_2 + 0xbe0),0));
      fVar2 = (float)_get_max_spread();
      Range::set_max((double)fVar2);
      uVar1 = *(undefined8 *)(param_2 + 0xbe0);
      Range::get_max();
      EditorSpinSlider::set_read_only(SUB81(uVar1,0));
      Object::set_block_signals(SUB81(*(undefined8 *)(param_2 + 0xbe0),0));
    }
    dVar3 = (double)Range::get_value();
    dVar4 = (double)Range::get_value();
    Range::set_value(dVar3 - dVar4);
    dVar3 = (double)Range::get_value();
    dVar4 = (double)Range::get_value();
    Range::set_value(dVar4 + dVar3);
    _sync_property((ParticleProcessMaterialMinMaxPropertyEditor *)param_2);
  }
  dVar4 = (double)Range::get_min();
  dVar3 = (double)Range::get_value();
  if (dVar4 <= dVar3) {
    dVar3 = dVar4;
  }
  *(float *)(param_2 + 0xc00) = (float)dVar3;
  dVar4 = (double)Range::get_max();
  dVar3 = (double)Range::get_value();
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  *(float *)(param_2 + 0xc04) = (float)dVar3;
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_notification(int) */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_notification
          (ParticleProcessMaterialMinMaxPropertyEditor *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_update_mode() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_update_mode
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  String *pSVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  long in_FS_OFFSET;
  double dVar5;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorSpinSlider::set_read_only(SUB81(*(undefined8 *)(this + 0xbe0),0));
  if (*(int *)(this + 0xc20) == 0) {
    pSVar1 = *(String **)(this + 0xbd8);
    local_48 = (undefined *)0x0;
    String::parse_latin1((String *)&local_48,"min");
    EditorSpinSlider::set_label(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    pSVar1 = *(String **)(this + 0xbe0);
    local_48 = (undefined *)0x0;
    String::parse_latin1((String *)&local_48,"max");
    EditorSpinSlider::set_label(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xbe0),0));
    dVar5 = (double)Range::get_min();
    Range::set_min(dVar5);
    dVar5 = (double)Range::get_max();
    Range::set_max(dVar5);
    Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xbe0),0));
    uVar2 = *(undefined8 *)(this + 0xbd8);
    Range::is_lesser_allowed();
    Range::set_allow_lesser(SUB81(uVar2,0));
    uVar2 = *(undefined8 *)(this + 0xbd8);
    Range::is_greater_allowed();
    Range::set_allow_greater(SUB81(uVar2,0));
    uVar2 = *(undefined8 *)(this + 0xbe0);
    Range::is_lesser_allowed();
    Range::set_allow_lesser(SUB81(uVar2,0));
    uVar4 = (undefined1)*(undefined8 *)(this + 0xbe0);
LAB_00102667:
    Range::is_greater_allowed();
  }
  else {
    if (*(int *)(this + 0xc20) != 1) goto LAB_001023f2;
    pSVar1 = *(String **)(this + 0xbd8);
    local_48 = (undefined *)0x0;
    String::parse_latin1((String *)&local_48,"val");
    EditorSpinSlider::set_label(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    pSVar1 = *(String **)(this + 0xbe0);
    local_50 = 0;
    local_48 = &_LC52;
    local_40 = 1;
    String::parse_utf32((StrRange *)&local_50);
    EditorSpinSlider::set_label(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xbe0),0));
    Range::set_min(0.0);
    Object::set_block_signals(SUB81(*(undefined8 *)(this + 0xbe0),0));
    uVar2 = *(undefined8 *)(this + 0xbd8);
    Range::is_lesser_allowed();
    Range::set_allow_lesser(SUB81(uVar2,0));
    uVar2 = *(undefined8 *)(this + 0xbd8);
    Range::is_greater_allowed();
    Range::set_allow_greater(SUB81(uVar2,0));
    Range::set_allow_lesser(SUB81(*(undefined8 *)(this + 0xbe0),0));
    uVar4 = (undefined1)*(undefined8 *)(this + 0xbe0);
    cVar3 = Range::is_lesser_allowed();
    if (cVar3 != '\0') goto LAB_00102667;
  }
  Range::set_allow_greater((bool)uVar4);
LAB_001023f2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_slider_values(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_toggle_mode(bool) */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_toggle_mode
          (ParticleProcessMaterialMinMaxPropertyEditor *this,bool param_1)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(uint *)(this + 0xc20) = (uint)param_1;
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,*(int *)(this + 0xc20));
  local_68 = "particle_spin_mode";
  local_70 = 0;
  local_60 = 0x12;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "editor_metadata";
  local_78 = 0;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_78,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_mode(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParticleProcessMaterialMinMaxPropertyEditor::ParticleProcessMaterialMinMaxPropertyEditor() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::ParticleProcessMaterialMinMaxPropertyEditor
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  BoxContainer *this_00;
  Range *pRVar7;
  BoxContainer *pBVar8;
  Control *this_01;
  CallableCustom *pCVar9;
  EditorSpinSlider *pEVar10;
  Button *this_02;
  bool bVar11;
  long in_FS_OFFSET;
  String local_70 [8];
  undefined8 local_68 [2];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  uVar5 = _UNK_0010d078;
  uVar4 = __LC38;
  *(undefined ***)this = &PTR__initialize_classv_0010c640;
  *(undefined8 *)(this + 0xbe8) = 0;
  *(undefined8 *)(this + 0xbf0) = 0;
  *(undefined8 *)(this + 0xbf8) = 0;
  *(undefined8 *)(this + 0xc00) = 0;
  this[0xc08] = (ParticleProcessMaterialMinMaxPropertyEditor)0x0;
  *(undefined8 *)(this + 0xc0c) = 0;
  *(undefined8 *)(this + 0xc14) = 0;
  *(undefined8 *)(this + 0xc1c) = 0;
  *(undefined1 (*) [16])(this + 0xb58) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xb68) = uVar4;
  *(undefined8 *)(this + 0xb70) = uVar5;
  *(undefined8 *)(this + 0xb78) = uVar4;
  *(undefined8 *)(this + 0xb80) = uVar5;
  *(undefined8 *)(this + 0xb88) = uVar4;
  *(undefined8 *)(this + 0xb90) = uVar5;
  *(undefined8 *)(this + 0xb98) = uVar4;
  *(undefined8 *)(this + 0xba0) = uVar5;
  *(undefined8 *)(this + 0xba8) = uVar4;
  *(undefined8 *)(this + 0xbb0) = uVar5;
  *(undefined1 (*) [16])(this + 3000) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbd8) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010c2c8;
  postinitialize_handler((Object *)this_00);
  if (ParticleProcessMaterialMinMaxPropertyEditor()::{lambda()#1}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ParticleProcessMaterialMinMaxPropertyEditor()::{lambda()#1}::
                                 operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ParticleProcessMaterialMinMaxPropertyEditor()::{lambda()#1}::operator()()
                           ::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &ParticleProcessMaterialMinMaxPropertyEditor()::{lambda()#1}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&ParticleProcessMaterialMinMaxPropertyEditor()::{lambda()#1}::operator()()
                           ::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_00,0x103950);
  Node::add_child(this,this_00,0,0);
  pRVar7 = (Range *)operator_new(0x9f0,"");
  Range::Range(pRVar7);
  postinitialize_handler((Object *)pRVar7);
  *(Range **)(this + 0xbc8) = pRVar7;
  CanvasItem::hide();
  Node::add_child(this,*(undefined8 *)(this + 0xbc8),0,0);
  pRVar7 = (Range *)operator_new(0x9f0,"");
  Range::Range(pRVar7);
  postinitialize_handler((Object *)pRVar7);
  *(Range **)(this + 0xbd0) = pRVar7;
  CanvasItem::hide();
  Node::add_child(this,*(undefined8 *)(this + 0xbd0),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_0010bf50;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(this_00,pBVar8,0,0);
  this_01 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_01);
  postinitialize_handler((Object *)this_01);
  *(Control **)(this + 3000) = this_01;
  Control::set_h_size_flags(this_01,3);
  pSVar1 = *(String **)(this + 3000);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Hold Shift to scale around midpoint instead of moving.");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar8,*(undefined8 *)(this + 3000),0,0);
  plVar2 = *(long **)(this + 3000);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC43;
  *(ParticleProcessMaterialMinMaxPropertyEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0010cba0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar4;
  *(code **)(pCVar9 + 0x38) = _range_edit_draw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "ParticleProcessMaterialMinMaxPropertyEditor::_range_edit_draw";
  Callable::Callable((Callable *)local_58,pCVar9);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar2 = *(long **)(this + 3000);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC43;
  *(ParticleProcessMaterialMinMaxPropertyEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0010cc30;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar4;
  *(code **)(pCVar9 + 0x38) = _range_edit_gui_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "ParticleProcessMaterialMinMaxPropertyEditor::_range_edit_gui_input";
  Callable::Callable((Callable *)local_58,pCVar9);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x28,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar2 = *(long **)(this + 3000);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ParticleProcessMaterialMinMaxPropertyEditor,bool>
            ((ParticleProcessMaterialMinMaxPropertyEditor *)local_58,(char *)this,
             (_func_void_bool *)"&ParticleProcessMaterialMinMaxPropertyEditor::_set_mouse_inside");
  bVar11 = SUB81((String *)local_68,0);
  Callable::bind<bool>(bVar11);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0xb8,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar2 = *(long **)(this + 3000);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ParticleProcessMaterialMinMaxPropertyEditor,bool>
            ((ParticleProcessMaterialMinMaxPropertyEditor *)local_58,(char *)this,
             (_func_void_bool *)"&ParticleProcessMaterialMinMaxPropertyEditor::_set_mouse_inside");
  Callable::bind<bool>(bVar11);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0xc0,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_0010bf50;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(this_00,pBVar8,0,0);
  pEVar10 = (EditorSpinSlider *)operator_new(0xa70,"");
  EditorSpinSlider::EditorSpinSlider(pEVar10);
  postinitialize_handler((Object *)pEVar10);
  *(EditorSpinSlider **)(this + 0xbd8) = pEVar10;
  Control::set_h_size_flags(pEVar10,3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xbd8),0,0);
  plVar2 = *(long **)(this + 0xbd8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ParticleProcessMaterialMinMaxPropertyEditor,float,EditorSpinSlider_const*>
            ((ParticleProcessMaterialMinMaxPropertyEditor *)local_58,(char *)this,
             (_func_void_float_EditorSpinSlider_ptr *)
             "&ParticleProcessMaterialMinMaxPropertyEditor::_sync_sliders");
  Callable::bind<EditorSpinSlider*>((EditorSpinSlider *)local_68);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pEVar10 = (EditorSpinSlider *)operator_new(0xa70,"");
  EditorSpinSlider::EditorSpinSlider(pEVar10);
  postinitialize_handler((Object *)pEVar10);
  *(EditorSpinSlider **)(this + 0xbe0) = pEVar10;
  Control::set_h_size_flags(pEVar10,3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xbe0),0,0);
  plVar2 = *(long **)(this + 0xbe0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ParticleProcessMaterialMinMaxPropertyEditor,float,EditorSpinSlider_const*>
            ((ParticleProcessMaterialMinMaxPropertyEditor *)local_58,(char *)this,
             (_func_void_float_EditorSpinSlider_ptr *)
             "&ParticleProcessMaterialMinMaxPropertyEditor::_sync_sliders");
  Callable::bind<EditorSpinSlider*>((EditorSpinSlider *)local_68);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  this_02 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(this_02,(String *)local_58);
  postinitialize_handler((Object *)this_02);
  *(Button **)(this + 0xbc0) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xbc0),0));
  pSVar1 = *(String **)(this + 0xbc0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,"Toggle between minimum/maximum and base value/spread modes.");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xbc0),0,0);
  plVar2 = *(long **)(this + 0xbc0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ParticleProcessMaterialMinMaxPropertyEditor,bool>
            ((ParticleProcessMaterialMinMaxPropertyEditor *)local_58,(char *)this,
             (_func_void_bool *)"&ParticleProcessMaterialMinMaxPropertyEditor::_toggle_mode");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x248,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorProperty::set_bottom_editor((Control *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::setup(float, float, float, bool, bool, bool) */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::setup
          (ParticleProcessMaterialMinMaxPropertyEditor *this,float param_1,float param_2,
          float param_3,bool param_4,bool param_5,bool param_6)

{
  long *plVar1;
  undefined8 uVar2;
  String *pSVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined8 local_68 [5];
  long local_40;
  
  local_68[1] = *(undefined8 *)(this + 0xbd8);
  local_68[3] = *(undefined8 *)(this + 0xbe0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(ulong *)(this + 0xc00) = CONCAT44(param_2,param_1);
  local_68[0] = *(undefined8 *)(this + 0xbc8);
  local_68[2] = *(undefined8 *)(this + 0xbd0);
  local_70 = (undefined8 *)0x0;
  CowData<Range*>::_copy_on_write((CowData<Range*> *)&local_70);
  puVar6 = (undefined8 *)Memory::alloc_static(0x30,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
  }
  else {
    local_70 = puVar6 + 2;
    lVar10 = 0;
    *puVar6 = 1;
    puVar6[1] = 4;
    do {
      if (local_70 == (undefined8 *)0x0) {
        lVar8 = 0;
LAB_001033ab:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar8,"p_index","size()","",false,
                   false);
      }
      else {
        lVar8 = local_70[-1];
        if (lVar8 <= lVar10) goto LAB_001033ab;
        CowData<Range*>::_copy_on_write((CowData<Range*> *)&local_70);
        local_70[lVar10] = local_68[lVar10];
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 4);
  }
  CowData<Range*>::_copy_on_write((CowData<Range*> *)&local_70);
  puVar6 = local_70;
  CowData<Range*>::_copy_on_write((CowData<Range*> *)&local_70);
  puVar4 = local_70;
  if (local_70 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    if (puVar6 == (undefined8 *)0x0) goto joined_r0x00103405;
LAB_001032c9:
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      Range::set_min((double)param_1);
      Range::set_max((double)param_2);
      Range::set_step((double)param_3);
      Range::set_allow_lesser(SUB81(uVar2,0));
      Range::set_allow_greater(SUB81(uVar2,0));
    } while (puVar9 != puVar6);
    if (puVar4 == (undefined8 *)0x0) goto joined_r0x00103405;
  }
  else {
    puVar9 = local_70 + local_70[-1];
    if (puVar6 != puVar9) goto LAB_001032c9;
  }
  LOCK();
  plVar1 = puVar4 + -2;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static(local_70 + -2,false);
  }
joined_r0x00103405:
  if (param_6) {
    local_80 = 0;
    pSVar3 = *(String **)(this + 0xbd8);
    puVar5 = &_LC83;
    do {
      puVar7 = puVar5;
      puVar5 = puVar7 + 4;
    } while (*(int *)(puVar7 + 4) != 0);
    local_78 = &_LC83;
    local_70 = (undefined8 *)((long)(puVar7 + -0x105c64) >> 2);
    String::parse_utf32((StrRange *)&local_80);
    EditorSpinSlider::set_suffix(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    local_80 = 0;
    pSVar3 = *(String **)(this + 0xbe0);
    puVar5 = &_LC83;
    do {
      puVar7 = puVar5;
      puVar5 = puVar7 + 4;
    } while (*(int *)(puVar7 + 4) != 0);
    local_78 = &_LC83;
    local_70 = (undefined8 *)((long)(puVar7 + -0x105c64) >> 2);
    String::parse_utf32((StrRange *)&local_80);
    EditorSpinSlider::set_suffix(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_mode(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorParticleProcessMaterialPlugin::parse_property(Object*, Variant::Type, String
   const&, PropertyHint, String const&, BitField<PropertyUsageFlags>, bool) */

undefined4
EditorInspectorParticleProcessMaterialPlugin::parse_property
          (String *param_1,Object *param_2,undefined8 param_3,String *param_4,int param_5,
          bool param_6)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  Object *pOVar8;
  byte extraout_var;
  byte extraout_var_00;
  byte extraout_var_01;
  ParticleProcessMaterialMinMaxPropertyEditor *this;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_70;
  char local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = ParticleProcessMaterial::has_min_max_property(param_4);
  if (cVar5 != '\0') {
    if (param_5 == 1) {
      Variant::Variant((Variant *)local_58,param_2);
      lVar7 = Variant::get_validated_object();
      if (lVar7 == 0) {
LAB_00103810:
        cVar5 = Variant::needs_deinit[local_58[0]];
      }
      else {
        pOVar8 = (Object *)
                 __dynamic_cast(lVar7,&Object::typeinfo,&ParticleProcessMaterial::typeinfo,0);
        if (pOVar8 != (Object *)0x0) {
          uVar6 = RefCounted::reference();
          if ((char)uVar6 != '\0') {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            String::split(local_68,param_6,0x103ffc);
            if (local_60 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(long *)(local_60 + -8);
              if (0 < lVar7) {
                dVar2 = (double)String::to_float();
                if (local_60 == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = *(long *)(local_60 + -8);
                  if (1 < lVar7) {
                    dVar3 = (double)String::to_float();
                    if (local_60 == 0) {
                      lVar7 = 0;
                    }
                    else {
                      lVar7 = *(long *)(local_60 + -8);
                      if (2 < lVar7) {
                        dVar4 = (double)String::to_float();
                        local_70 = 0;
                        String::parse_latin1((String *)&local_70,"or_less");
                        CowData<String>::find((CowData<String> *)&local_60,(String *)&local_70,3);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                        local_70 = 0;
                        String::parse_latin1((String *)&local_70,"or_greater");
                        CowData<String>::find((CowData<String> *)&local_60,(String *)&local_70,3);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                        local_70 = 0;
                        String::parse_latin1((String *)&local_70,"degrees");
                        CowData<String>::find((CowData<String> *)&local_60,(String *)&local_70,3);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                        this = (ParticleProcessMaterialMinMaxPropertyEditor *)operator_new(0xc28,"")
                        ;
                        ParticleProcessMaterialMinMaxPropertyEditor::
                        ParticleProcessMaterialMinMaxPropertyEditor(this);
                        postinitialize_handler((Object *)this);
                        ParticleProcessMaterialMinMaxPropertyEditor::setup
                                  (this,(float)dVar2,(float)dVar3,(float)dVar4,
                                   (bool)((byte)~extraout_var >> 7),
                                   (bool)((byte)~extraout_var_00 >> 7),
                                   (bool)((byte)~extraout_var_01 >> 7));
                        local_70 = 0;
                        EditorInspectorPlugin::add_property_editor
                                  (param_1,(Control *)param_4,SUB81(this,0),(String *)0x0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                        CowData<String>::_unref((CowData<String> *)&local_60);
                        cVar5 = RefCounted::unreference();
                        if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
                          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                          Memory::free_static(pOVar8,false);
                        }
                        goto LAB_001037e0;
                      }
                    }
                    lVar9 = 2;
                    goto LAB_001038c0;
                  }
                }
                lVar9 = 1;
                goto LAB_001038c0;
              }
            }
            lVar9 = 0;
LAB_001038c0:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          goto LAB_00103810;
        }
        cVar5 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar5 != '\0') {
        Variant::_clear_internal();
      }
      uVar6 = 0;
      _err_print_error("parse_property","editor/plugins/particle_process_material_editor_plugin.cpp"
                       ,0x1c7,"Condition \"mat.is_null()\" is true. Returning: false",0,0);
      goto LAB_001037e0;
    }
    _err_print_error("parse_property","editor/plugins/particle_process_material_editor_plugin.cpp",
                     0x1c4,"Condition \"p_hint != PROPERTY_HINT_RANGE\" is true. Returning: false",0
                     ,0);
  }
  uVar6 = 0;
LAB_001037e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10cf,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cf,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorProperty::is_colored(EditorProperty::ColorationMode) */

undefined8 EditorProperty::is_colored(void)

{
  return 0;
}



/* EditorInspectorParticleProcessMaterialPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorParticleProcessMaterialPlugin::is_class_ptr
          (EditorInspectorParticleProcessMaterialPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10ce,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cf,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cf,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorParticleProcessMaterialPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorParticleProcessMaterialPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorParticleProcessMaterialPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorParticleProcessMaterialPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorParticleProcessMaterialPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorParticleProcessMaterialPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorParticleProcessMaterialPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorParticleProcessMaterialPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorParticleProcessMaterialPlugin::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
EditorInspectorParticleProcessMaterialPlugin::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorParticleProcessMaterialPlugin::_notificationv(int, bool) */

void EditorInspectorParticleProcessMaterialPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, float,
   EditorSpinSlider const*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, float,
   EditorSpinSlider const*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
::get_argument_count
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
           *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool>::
get_argument_count(CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
::get_argument_count
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,
   void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void>::get_argument_count
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void> *this,
          bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, float,
   EditorSpinSlider const*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
ParticleProcessMaterialMinMaxPropertyEditor::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00110008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00110008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_property_can_revertv(StringName const&) const */

undefined8 ParticleProcessMaterialMinMaxPropertyEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00110008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010bdf0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010bdf0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<Range*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Range*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_00104073:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104073;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001040de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001040de:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void>::get_object
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010420d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010420d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010420d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void,
   bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool>::get_object
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010430d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010430d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010430d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, Ref<InputEvent>
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
::get_object(CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
             *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010440d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010440d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010440d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, float,
   EditorSpinSlider const*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
::get_object(CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
             *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010450d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010450d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010450d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_validate_propertyv(PropertyInfo&) const */

void ParticleProcessMaterialMinMaxPropertyEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00110010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00110018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00110018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::is_class_ptr(void*) const */

uint ParticleProcessMaterialMinMaxPropertyEditor::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10cf,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ce,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10cf,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10cf,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10cf,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10cf,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ce,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10cf,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10cf,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10cf,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10cf,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ce,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10cf,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10cf,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10cf,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00110020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_setv(StringName const&, Variant const&) */

undefined8 ParticleProcessMaterialMinMaxPropertyEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00110020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00110020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104a18) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00110028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104a88) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00110028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104af8) */
/* ParticleProcessMaterialMinMaxPropertyEditor::_getv(StringName const&, Variant&) const */

undefined8 ParticleProcessMaterialMinMaxPropertyEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00110028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_00104b53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104b53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00104bbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00104bbe:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorParticleProcessMaterialPlugin::_get_class_namev() const */

undefined8 * EditorInspectorParticleProcessMaterialPlugin::_get_class_namev(void)

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
LAB_00104c63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104c63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorParticleProcessMaterialPlugin");
      goto LAB_00104cce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorInspectorParticleProcessMaterialPlugin");
LAB_00104cce:
  return &_get_class_namev()::_class_name_static;
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
LAB_00104d43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104d43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00104dae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00104dae:
  return &_get_class_namev()::_class_name_static;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_get_class_namev() const */

undefined8 * ParticleProcessMaterialMinMaxPropertyEditor::_get_class_namev(void)

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
LAB_00104e53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104e53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "ParticleProcessMaterialMinMaxPropertyEditor");
      goto LAB_00104ebe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "ParticleProcessMaterialMinMaxPropertyEditor");
LAB_00104ebe:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104f50;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104f50:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104fb0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104fb0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105010;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105010:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105080;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105080:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00110030 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00110030 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00110030 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00110030 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_notificationv(int, bool) */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_notificationv
          (ParticleProcessMaterialMinMaxPropertyEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00110038 != Container::_notification) {
      EditorProperty::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00110038 != Container::_notification) {
    EditorProperty::_notification(iVar1);
  }
  if (param_1 != 0x2d) {
    return;
  }
  _notification(iVar1);
  return;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Rect2::has_point(Vector2 const&) const */

bool __thiscall Rect2::has_point(Rect2 *this,Vector2 *param_1)

{
  bool bVar1;
  
  if ((*(float *)(this + 8) <= 0.0 && *(float *)(this + 8) != 0.0) ||
     (*(float *)(this + 0xc) <= 0.0 && *(float *)(this + 0xc) != 0.0)) {
    _err_print_error("has_point","./core/math/rect2.h",0xb9,
                     "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                     ,0,0);
  }
  bVar1 = false;
  if (*(float *)this <= *(float *)param_1) {
    if ((*(float *)(this + 4) <= *(float *)(param_1 + 4)) &&
       (*(float *)param_1 < *(float *)this + *(float *)(this + 8))) {
      bVar1 = *(float *)(param_1 + 4) < *(float *)(this + 4) + *(float *)(this + 0xc);
    }
  }
  return bVar1;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<ParticleProcessMaterialMinMaxPropertyEditor,
   bool>(ParticleProcessMaterialMinMaxPropertyEditor*, char const*, void
   (ParticleProcessMaterialMinMaxPropertyEditor::*)(bool)) */

ParticleProcessMaterialMinMaxPropertyEditor *
create_custom_callable_function_pointer<ParticleProcessMaterialMinMaxPropertyEditor,bool>
          (ParticleProcessMaterialMinMaxPropertyEditor *param_1,char *param_2,
          _func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC43;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010ccc0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<bool>(bool) const */

Variant ** Callable::bind<bool>(bool param_1)

{
  char cVar1;
  bool in_DL;
  int in_ESI;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_DL);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT71(in_register_00000039,param_1),in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (Variant **)CONCAT71(in_register_00000039,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<ParticleProcessMaterialMinMaxPropertyEditor,
   float, EditorSpinSlider const*>(ParticleProcessMaterialMinMaxPropertyEditor*, char const*, void
   (ParticleProcessMaterialMinMaxPropertyEditor::*)(float, EditorSpinSlider const*)) */

ParticleProcessMaterialMinMaxPropertyEditor *
create_custom_callable_function_pointer<ParticleProcessMaterialMinMaxPropertyEditor,float,EditorSpinSlider_const*>
          (ParticleProcessMaterialMinMaxPropertyEditor *param_1,char *param_2,
          _func_void_float_EditorSpinSlider_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC43;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010cd50;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_float_EditorSpinSlider_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<EditorSpinSlider*>(EditorSpinSlider*) const */

EditorSpinSlider * Callable::bind<EditorSpinSlider*>(EditorSpinSlider *param_1)

{
  char cVar1;
  Object *in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorInspectorParticleProcessMaterialPlugin::_initialize_classv() */

void EditorInspectorParticleProcessMaterialPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_00110050 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorInspectorPlugin");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00110040 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00110048 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorInspectorPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorInspectorParticleProcessMaterialPlugin");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(code **)this = StringName::operator=;
  if (bVar5) {
    if (*(long *)(this + 0xb38) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105fed;
    }
    if (*(long *)(this + 0xb20) != 0) {
      StringName::unref();
    }
  }
LAB_00105fed:
  pvVar4 = *(void **)(this + 0xaf8);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0xb1c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb18) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xb1c) = 0;
        *(undefined1 (*) [16])(this + 0xb08) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xb00) + lVar3) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            *(int *)(*(long *)(this + 0xb00) + lVar3) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0xaf8);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xb1c) = 0;
        *(undefined1 (*) [16])(this + 0xb08) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_001060c2;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xb00),false);
  }
LAB_001060c2:
  if (*(long *)(this + 0xad0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xad0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xad0);
      *(undefined8 *)(this + 0xad0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0xa18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa00));
  bVar5 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106165;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00106165:
  Control::~Control((Control *)this);
  return;
}



/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

{
  ~EditorProperty(this);
  operator_delete(this,0xb58);
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::~ParticleProcessMaterialMinMaxPropertyEditor() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::~ParticleProcessMaterialMinMaxPropertyEditor
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010c640;
  if (*(long *)(this + 0xb60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xb58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb58);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        EditorProperty::~EditorProperty((EditorProperty *)this);
        return;
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::~ParticleProcessMaterialMinMaxPropertyEditor() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::~ParticleProcessMaterialMinMaxPropertyEditor
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010c640;
  if (*(long *)(this + 0xb60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xb58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb58);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xc28);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::get_class() const */

void ParticleProcessMaterialMinMaxPropertyEditor::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorInspectorParticleProcessMaterialPlugin::get_class() const */

void EditorInspectorParticleProcessMaterialPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_001068f7:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_001068f7;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void>::call
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00106aef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00106aef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00106ba0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00106aef:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC71,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106ba0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, float,
   EditorSpinSlider const*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
::call(CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00106dc1;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00106dc1;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar4 == '\0') {
LAB_00106cff:
          uVar3 = _LC72;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[1];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&EditorSpinSlider::typeinfo,0),
              lVar7 == 0)) && (pOVar5 != (Object *)0x0)) goto LAB_00106cff;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&EditorSpinSlider::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar3 = _LC73;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_float(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_00106ebe;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00106dc1:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC71,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106ebe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void,
   bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool>::call
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107089;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00107089;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC74;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010713a;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00107089:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC71,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010713a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, Ref<InputEvent>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
::call(CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_38 >> 8;
      local_38 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_38 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010720e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010720e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC75;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_38 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_38;
        if (pOVar7 != local_38) {
          if (pOVar7 == (Object *)0x0) {
            if (local_38 != (Object *)0x0) {
              local_38 = (Object *)0x0;
LAB_001072dd:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_001072dd;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_38 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_38, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010720e;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_38,(String *)local_48);
  _err_print_error(&_LC71,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010720e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00107593;
  }
  cVar4 = String::operator==(param_1,"CanvasItem");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00107593;
    }
    cVar4 = String::operator==(param_1,"Node");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Object::is_class((Object *)this,param_1);
        return uVar5;
      }
      goto LAB_0010769e;
    }
  }
LAB_00107593:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010769e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00107793;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00107793;
    }
    cVar4 = String::operator==(param_1,"Control");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar5;
      }
      goto LAB_0010789e;
    }
  }
LAB_00107793:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010789e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialMinMaxPropertyEditor::is_class(String const&) const */

undefined8 __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::is_class
          (ParticleProcessMaterialMinMaxPropertyEditor *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00107993;
  }
  cVar4 = String::operator==(param_1,"ParticleProcessMaterialMinMaxPropertyEditor");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00107993;
    }
    cVar4 = String::operator==(param_1,"EditorProperty");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00107a9e;
    }
  }
LAB_00107993:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107a9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00110058 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00110050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00110060 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00110068 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00110050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00110060 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00110068 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_initialize_classv() */

void ParticleProcessMaterialMinMaxPropertyEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorProperty::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00110050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00110060 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorProperty");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00110070 != Container::_bind_methods) {
        EditorProperty::_bind_methods();
      }
      EditorProperty::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorProperty");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"ParticleProcessMaterialMinMaxPropertyEditor");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00108e3f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00108e3f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC77;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC77;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00110078 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_001096a3;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_001096a3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_001096a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorParticleProcessMaterialPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorParticleProcessMaterialPlugin::is_class
          (EditorInspectorParticleProcessMaterialPlugin *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00109883;
  }
  cVar4 = String::operator==(param_1,"EditorInspectorParticleProcessMaterialPlugin");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00109883;
    }
    cVar4 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar5;
      }
      goto LAB_0010998e;
    }
  }
LAB_00109883:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010998e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPlugin";
  local_98 = 0;
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorInspectorPlugin",false);
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



/* EditorInspectorParticleProcessMaterialPlugin::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorParticleProcessMaterialPlugin::_get_property_listv
          (EditorInspectorParticleProcessMaterialPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorParticleProcessMaterialPlugin";
  local_70 = 0x2c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorParticleProcessMaterialPlugin";
  local_98 = 0;
  local_70 = 0x2c;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_78,"EditorInspectorParticleProcessMaterialPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00110080 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProperty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorProperty::_get_property_listv(EditorProperty *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorProperty";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorProperty";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorProperty",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::_get_property_listv
          (ParticleProcessMaterialMinMaxPropertyEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorProperty::_get_property_listv((EditorProperty *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ParticleProcessMaterialMinMaxPropertyEditor";
  local_70 = 0x2b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ParticleProcessMaterialMinMaxPropertyEditor";
  local_98 = 0;
  local_70 = 0x2b;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_78,"ParticleProcessMaterialMinMaxPropertyEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorProperty::_get_property_listv((EditorProperty *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010b1a3;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010b1a3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010b2ae;
    }
  }
LAB_0010b1a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b2ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010b393;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010b393;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010b49e;
    }
  }
LAB_0010b393:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b49e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Range*>::_realloc(long) */

undefined8 __thiscall CowData<Range*>::_realloc(CowData<Range*> *this,long param_1)

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



/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x38) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x28);
      lVar2 = *(long *)((long)pvVar1 + 0x30);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x28);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x18));
      CowData<String>::_unref((CowData<String> *)((long)pvVar1 + 0x10));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* EditorInspectorParticleProcessMaterialPlugin::~EditorInspectorParticleProcessMaterialPlugin() */

void __thiscall
EditorInspectorParticleProcessMaterialPlugin::~EditorInspectorParticleProcessMaterialPlugin
          (EditorInspectorParticleProcessMaterialPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &BoxContainer::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b894;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b894;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b894;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b894;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b894;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0010b894:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0010bdf0;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorParticleProcessMaterialPlugin::~EditorInspectorParticleProcessMaterialPlugin() */

void __thiscall
EditorInspectorParticleProcessMaterialPlugin::~EditorInspectorParticleProcessMaterialPlugin
          (EditorInspectorParticleProcessMaterialPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &BoxContainer::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b994;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b994;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b994;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b994;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b994;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0010b994:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0010bdf0;
  Object::~Object((Object *)this);
  operator_delete(this,0x218);
  return;
}



/* ParticleProcessMaterialMinMaxPropertyEditor::_update_sizing() */

void ParticleProcessMaterialMinMaxPropertyEditor::_GLOBAL__sub_I__update_sizing(void)

{
  undefined8 uStack_8;
  
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ParticleProcessMaterialMinMaxPropertyEditor::~ParticleProcessMaterialMinMaxPropertyEditor() */

void __thiscall
ParticleProcessMaterialMinMaxPropertyEditor::~ParticleProcessMaterialMinMaxPropertyEditor
          (ParticleProcessMaterialMinMaxPropertyEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

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
/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,Ref<InputEvent>const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor, void, float,
   EditorSpinSlider const*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ParticleProcessMaterialMinMaxPropertyEditor,void,float,EditorSpinSlider_const*>
           *this)

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
/* EditorInspectorParticleProcessMaterialPlugin::~EditorInspectorParticleProcessMaterialPlugin() */

void __thiscall
EditorInspectorParticleProcessMaterialPlugin::~EditorInspectorParticleProcessMaterialPlugin
          (EditorInspectorParticleProcessMaterialPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
